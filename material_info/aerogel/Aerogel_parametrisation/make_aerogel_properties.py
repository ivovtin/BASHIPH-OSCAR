#!/usr/bin/python3

import sys
#print.print(sys.path)
sys.path.append(r"/usr/local/opt/")
import math, time, sys, os
import numpy, argparse
import argparse
from array import array


def createParser():
	parser = argparse.ArgumentParser(description='The script makes few aerogel optical parameters for FARICH simulation')
	parser.add_argument ('-r', type=float, default=1.0514, dest='ri_400', help='set Reflection index n(400) (by default %(default).4f)')
	parser.add_argument ('-l', type=float, default=50, dest='lsc_400', help='set scattering Lenght Lsc(400) (by default %(default).1f mm)')
	parser.add_argument ('-a', default='op9_38_11_labs_2006.raw', dest='labs_name', help='set Absorption lenght (by default %(default)s)')
	parser.add_argument ('-d', '--drawing', default=False, action='store_const', const=True, help='drawing pictures (by default \'%(default)s\')')
	parser.add_argument ('-s', '--save', default=False, action='store_const', const=True, help='save pictures (by default \'%(default)s\')')
	return parser


if __name__ == "__main__":
	parser = createParser()
	argSpace = parser.parse_args(sys.argv[1:])

	from ROOT import gROOT, gApplication, gStyle, TCanvas, TGraph, TLegend, TLegendEntry, TSpline3
	from ROOT import kAzure

	gROOT.Reset()
	gStyle.SetPadTopMargin(0.02)
	gStyle.SetPadRightMargin(0.02)
	gStyle.SetTitleOffset(1.1, "X")
	gStyle.SetTitleOffset(1.12, "Y")
	gStyle.SetTitleSize(0.045, "X")
	gStyle.SetTitleSize(0.045, "Y")
	gStyle.SetLabelSize(0.0425, "Y")
	gStyle.SetLabelSize(0.045, "X")

	# 0. Initialization
	_ri_400    = argSpace.ri_400
	_lsc_400   = argSpace.lsc_400
	_labs_name = argSpace.labs_name
	_draw = argSpace.drawing
	_save = argSpace.save

	_h_const = 4.135667662E-15 # plank constant [eV*c]
	_c_const = 2.99792458E+8   # light speed constant [m/c]

	_dir_name = "Aerogel_%.0f" % (10000*_ri_400)
	_dir_path = os.getenv('HOME') + "/radiator/" + _dir_name
	if not os.path.exists(_dir_path):
		os.makedirs(_dir_path)

	# 1. Refractive index (parametrised in coincidence with data from Eur. Phys. J. C 52, 759–764 (2007))
	_a_0 = 0.05639
	_l_0 = 83.22 # <-> nm
	_d_400 = _a_0*math.pow(400, 2)/(math.pow(400, 2) - math.pow(_l_0, 2))

	_ri_name_pattern = "%s/ri_aerogel_%.0f" % (_dir_path, 10000*_ri_400)
	_ri_file = open("%s.dat"%(_ri_name_pattern), 'w')
	_ri_file.write("# Data created: %s\n"%time.strftime("%d/%m/%Y %H:%M"))
	_ri_file.write("# Refractive index for aerogel with n(400)=%.4f\n"%_ri_400)
	_ri_file.write("\n# wavelength [nm]  photon_energy [eV]  reflection_index\n")
	_ri_file.write("#------------------------------------------------------\n")


	# 2. Scattering length
	_lsc_name_pattern = "%s/lsc_aerogel_%.0f" % (_dir_path, 10000*_ri_400)
	_lsc_file = open("%s.dat"%(_lsc_name_pattern), 'w')
	_lsc_file.write("# Data created: %s\n"%time.strftime("%d/%m/%Y %H:%M"))
	_lsc_file.write("# Scattering length for aerogel with Lsc(400)=%.1f mm\n"%_lsc_400)
	_lsc_file.write("\n# wavelength [nm]  photon_energy [eV]  scattering_length [mm]\n")
	_lsc_file.write("#------------------------------------------------------------\n")


	# 3. Absorption length
	_l_raw, _labs_raw = numpy.loadtxt(_labs_name, unpack=True)
	_g_labs_raw = TGraph(len(_l_raw), array("d", _l_raw), array("d", _labs_raw))
	_g_labs_raw.SetMarkerStyle(20); _g_labs_raw.SetMarkerSize(1.5); _g_labs_raw.SetMarkerColor(kAzure-6);
	_s_labs_raw = TSpline3("spline_raw", _g_labs_raw)
	_labs_name_pattern = "%s/labs_aerogel_%.0f" % (_dir_path, 10000*_ri_400)
	_labs_file = open("%s.dat"%(_labs_name_pattern), 'w')
	_labs_file.write("# Data created: %s\n"%time.strftime("%d/%m/%Y %H:%M"))
	_labs_file.write("# Absorption length for aerogel with inital data from %s\n"%_labs_name)
	_labs_file.write("\n# wavelength [nm]  photon_energy [eV]  absorption_length [mm]\n")
	_labs_file.write("#------------------------------------------------------------\n")


    # 4. Data preparation
	l       = []
	ri      = []
	lsc     = []
	iT_lsc  = []
	labs    = []
	iT_labs = []
	for _l in range(200, 910, 10):
		_e = _h_const*_c_const/(1E-9*_l)
		l.append(_l)

		# 4.1 refraction index
		_d = _a_0*math.pow(_l, 2)/(math.pow(_l, 2) - math.pow(_l_0, 2))
#		_d = _a_0*math.pow(400, 2)/(math.pow(400, 2) - math.pow(_l_0, 2))
		_ri = math.sqrt(1 + _d*(math.pow(_ri_400, 2) - 1)/_d_400)
		_ri_file.write("%5.1f  %8.5f  %7.5f\n"%(_l, _e, _ri))
		ri.append(_ri)

		# 4.2 scattering length
		_lsc    = _lsc_400*math.pow(_l/400.0, 4)
		_iT_lsc = 100.0*math.exp(-1/_lsc)
		_lsc_file.write("%5.1f  %8.5f  %7.2f\n"%(_l, _e, _lsc))
		lsc.append(_lsc)
		iT_lsc.append(_iT_lsc)

		# 4.3 absorption length
		if _l<240:
			_labs = 0.1
		elif _l>500:
			_labs = 1000.0
		else:
			_labs = _s_labs_raw.Eval(_l)
		_iT_labs = 100.0*math.exp(-1/_labs)
		_labs_file.write("%5.1f  %8.5f  %8.2f\n"%(_l, _e, 10.0*_labs)) # _labs in [cm]
		labs.append(_labs)
		iT_labs.append(_iT_labs)

	_ri_file.close()
	_lsc_file.close()
	_labs_file.close()


	# 5. Data drawing & save
	if _draw:
    	# 5.1 reflection index
		can_ri = TCanvas('can_ri', 'Drawing reflection index', 0, 0, 1500, 1200)
		#can_ri.DrawFrame(195, 1.04, 905, 1.06, "; #lambda [nm]; n(#lambda)")

		g_ri = TGraph(len(l), array("d", l), array("d", ri))
		g_ri.SetTitle("; #lambda [nm]; n(#lambda)")
		g_ri.SetLineColor(kAzure-6); g_ri.SetLineWidth(3)
		g_ri.Draw("al")

		leg_ri = TLegend(0.4, 0.85, 0.95, 0.95, "Aerogel: n(400)=%.4f"%(_ri_400)); leg_ri.SetBorderSize(0); leg_ri.SetTextSize(0.045)
		leg_ri.Draw()

		can_ri.Update()
		if _save:
			can_ri.SaveAs("%s_%s.pdf"%(_ri_name_pattern, time.strftime("%d%m%y")))

		# 5.2 scattering length
		can_lsc = TCanvas('can_ls', 'Drawing scattering length', 1500, 0, 1500, 1200)
		#can_lsc.DrawFrame(195, 0, 905, 1500, "; #lambda [nm]; Scattering length [mm]")

		g_lsc = TGraph(len(l), array("d", l), array("d", lsc))
		g_lsc.SetLineColor(kAzure-6); g_lsc.SetLineWidth(3)
		g_lsc.SetTitle("; #lambda [nm]; Scattering length [mm]")
		g_lsc.Draw("al");

		leg_lsc = TLegend(0.5, 0.85, 0.85, 0.95, "Aerogel: Lsc(400)=%.2f mm"%(_lsc_400)); leg_lsc.SetBorderSize(0); leg_lsc.SetTextSize(0.035)
		leg_lsc.Draw()

		can_lsc.Update()
		if _save:
			can_lsc.SaveAs("%s_%s.pdf"%(_lsc_name_pattern, time.strftime("%d%m%y")))

		# 5.3 absorption length
		can_labs = TCanvas('can_labs', 'Drawing absorption length', 3840, 0, 1500, 1200)
		#can_labs.DrawFrame(195, 0, 905, 1015, "; #lambda [nm]; Absorption length [cm]")

		g_abs = TGraph(len(l), array("d", l), array("d", labs))
		g_abs.SetLineColor(kAzure-6); g_abs.SetLineWidth(3)
		g_abs.SetTitle("; #lambda [nm]; Absorption length [cm]")
		g_abs.Draw("al");

		_g_labs_raw.Draw("p+same")

		leg_labs = TLegend(0.5, 0.25, 0.85, 0.35, "Aerogel: %s"%(_labs_name)); leg_labs.SetBorderSize(0); leg_labs.SetTextSize(0.035)
		leg_labs.Draw()

		can_labs.Update()
		if _save:
			can_labs.SaveAs("%s_%s.pdf"%(_labs_name_pattern, time.strftime("%d%m%y")))

		gApplication.Run()
