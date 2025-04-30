void geom_stcfashiph()
{
gSystem->Load("libGeom");
TGeoManager* man=new TGeoManager("world", "the simplest geometry");
TGeoMaterial *mat = new TGeoMaterial("Vacuum",0,0,0);
TGeoMedium   *med = new TGeoMedium("Vacuum",1,mat);
TGeoVolume *top=gGeoManager->MakeBox("Top",med,100.,100.,100.);
man->SetTopVolume(top);
gGeoManager->CloseGeometry();
top->SetLineColor(kMagenta);
top->SetTransparency(100);

gGeoManager->SetTopVisible(); // the TOP is invisible
//top->Draw();
TGeoMaterial* aerogel=new TGeoMaterial("aerogel",60., 30., 0.24, 112., 100.);
aerogel->SetTransparency(50);
TGeoMedium* agel=new TGeoMedium("aerogel",1,aerogel);

TGeoMaterial* pmma=new TGeoMaterial("pmma",60., 30., 2.2,12.3, 100.);
pmma->SetTransparency(0);
TGeoMedium* plex=new TGeoMedium("plex",1,pmma);
TGeoMedium* bbq=new TGeoMedium("bbq",1,pmma);

TGeoMaterial* steel=new TGeoMaterial("steel",60., 30., 7.7,2.3, 100.);
steel->SetTransparency(100);
TGeoMedium* iron=new TGeoMedium("iron",1,steel);

//----- Main dimensions ----//
TGeoRotation *rot1 = new TGeoRotation("rot1",90,0,0,180,90,90);
TGeoCombiTrans *combrot1=new TGeoCombiTrans("combrot1",0,(-45)/2.,0,rot1);
combrot1->RegisterYourself();
//TGeoRotation *rtubrot1 = new TGeoRotation("rtubrot1",90,0,0,180,90,90);

//---- ASHIP geom dim
Int_t nsect_bar=25;
Float_t lengdc=2*140;  // DC length  -> acceptance Theta angle from 20 to 140 deg for STCF (China)
Float_t delta=0.1; //[cm] width of gap between counters
Float_t wls_thick=0.3; // [cm] WLS based on BBQ thickness 3mm
Float_t sipm_thick=0.2; // [cm] WLS based on BBQ thickness 3mm
//Float_t length_tile=45.0; //[cm] 4 segemnts of barrel parts along z-axis
//Float_t length_tile=56.0; //[cm] 5 segemnts of barrel parts along z-axis for STCF (China)
Float_t length_tile=61.0; //[cm] 5 segemnts of barrel parts along z-axis for STCF (China) - long barrel version
//Float_t depth_tile=5.; //[cm] thicknes of aerogel tile
Float_t depth_tile=6.; //[cm] thicknes of aerogel tile for ASHIPH system of STCF (China)
Float_t radinaer1=85.; //[cm] radius of the ASHIPH sysytem 1st layer for STCF (China)
//Float_t radinaer1=65.; //[cm] radius of the ASHIPH sysytem 1st layer
//Float_t radinaer2=65.+depth_tile; //[cm] radius of the ASHIP sysytem 2nd layer
Float_t radinaer2=radinaer1+depth_tile; //[cm] radius of the ASHIP sysytem 2nd layer
//Float_t length_ecapcnt=105.-58; // ASHIPH endcap length for STCF (China)
Float_t length_ecapcnt=85.-58; // ASHIPH endcap length for STCF (China) - long barrel version

//--- ASHIPH 1st layer draw ---//
//Float_t radoutaer1=radinaer1+depth_tile; //[cm] out radius of the sysytem if barrel counters are  looks like polygone prismatrapezioidal shape
Float_t radoutaer1=(radinaer1+depth_tile)*cos(TMath::TwoPi()/(nsect_bar)*0.5); //[cm] out radius of the sysytem if barrel countera are like tube segments
Float_t abin=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radinaer1-0.1)*2;
Float_t about=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radoutaer1-0.1)*2;
Float_t width_tilein=(float)int(abin*10.)/20.;
Float_t width_tileou=(float)int(about*10.)/20.;

TGeoXtru *extrul=new TGeoXtru(2);
//Double_t xvertl[4]={-4, -4, -wls_thick/2-0.1,-wls_thick/2-0.1};
Double_t xvertl[4]={-width_tilein, -width_tileou, -wls_thick/2-0.1,-wls_thick/2-0.1};
//Double_t yvertl[4]={-depth_tile/2,depth_tile/2,depth_tile/2,-depth_tile/2}; // for trapeziodal shape of barrel caounters
Double_t yvertl[4]={-depth_tile/2+0.1,(radoutaer1-radinaer1)/2-0.1,(radoutaer1-radinaer1)/2-0.1,-depth_tile/2+0.1}; // for tube segment shape of barrel caounters
extrul->DefinePolygon(4,xvertl,yvertl);
extrul->DefineSection(0,-length_tile/2.,0.,0.,1.);
extrul->DefineSection(1,length_tile/2.,0.,0.,1.);
man->AddShape(extrul);

TGeoXtru *extrur=new TGeoXtru(2);
//Double_t xvertr[4]={4,4,wls_thick/2+0.1,wls_thick/2+0.1};
Double_t xvertr[4]={wls_thick/2+0.1,wls_thick/2+0.1,width_tileou, width_tilein};
// Double_t yvertr[4]={-depth_tile/2,depth_tile/2,depth_tile/2,-depth_tile/2}; // for trapeziodal shape of barrel caounters
Double_t yvertr[4]={-depth_tile/2+0.1,(radoutaer1-radinaer1)/2-0.1,(radoutaer1-radinaer1)/2-0.1,-depth_tile/2+0.1}; // for tube segment shape of barrel caounters
extrur->DefinePolygon(4,xvertr,yvertr);
extrur->DefineSection(0,-length_tile/2.,0.,0.,1.);
extrur->DefineSection(1,length_tile/2.,0.,0.,1.);
man->AddShape(extrur);

//--- ASHIPH 2nd layer draw ---//
//Float_t radoutaer2=radinaer2+depth_tile; //[cm] out radius of the sysytem if barrel counters are  looks like polygone prismatrapezioidal shape
Float_t radoutaer2=(radinaer2+depth_tile+0.)*cos(TMath::TwoPi()/(nsect_bar)*0.5); //[cm] out radius of the sysytem if barrel countera are like tube segments
Float_t abin2=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radinaer2-0.1)*2;
Float_t about2=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radoutaer2-0.1)*2;
Float_t width_tilein2=(float)int(abin2*10.)/20.;
Float_t width_tileou2=(float)int(about2*10.)/20.;

TGeoXtru *extrul2=new TGeoXtru(2);
//Double_t xvertl[4]={-4, -4, -wls_thick/2-0.1,-wls_thick/2-0.1};
Double_t xvertl2[4]={-width_tilein2, -width_tileou2, -wls_thick/2-0.1,-wls_thick/2-0.1};
//Double_t yvertl2[4]={-depth_tile/2,depth_tile/2,depth_tile/2,-depth_tile/2};
Double_t yvertl2[4]={-depth_tile/2+0.1,(radoutaer2-radinaer2)/2-0.1,(radoutaer2-radinaer2)/2-0.1,-depth_tile/2+0.1}; // for tube segment shape of barrel caounter
extrul2->DefinePolygon(4,xvertl2,yvertl2);
extrul2->DefineSection(0,-length_tile/2.,0.,0.,1.);
extrul2->DefineSection(1,length_tile/2.,0.,0.,1.);
man->AddShape(extrul2);

TGeoXtru *extrur2=new TGeoXtru(2);
//Double_t xvertr[4]={4,4,wls_thick/2+0.1,wls_thick/2+0.1};
Double_t xvertr2[4]={wls_thick/2+0.1,wls_thick/2+0.1,width_tileou2, width_tilein2};
//Double_t yvertr2[4]={-depth_tile/2,depth_tile/2,depth_tile/2,-depth_tile/2};
Double_t yvertr2[4]={-depth_tile/2+0.1,(radoutaer2-radinaer2)/2-0.1,(radoutaer2-radinaer2)/2-0.1,-depth_tile/2+0.1}; // for tube segment shape of barrel caounters
extrur2->DefinePolygon(4,xvertr2,yvertr2);
extrur2->DefineSection(0,-length_tile/2.,0.,0.,1.);
extrur2->DefineSection(1,length_tile/2.,0.,0.,1.);
man->AddShape(extrur2);
//---2nd layer (end)---//

TGeoBBox *wlsshape=new TGeoBBox("wlsshape",(wls_thick-0.)/2.,depth_tile/2.,(length_tile-0.)/2.);
TGeoVolume *wls = new TGeoVolume("wls",wlsshape,bbq);
wls->SetLineColor(kGreen);
wls->SetFillColor(kGreen);

TGeoBBox *sipmshape=new TGeoBBox("sipmshape",(wls_thick-0.)/2.,depth_tile/2.,sipm_thick/2.);
TGeoVolume *sipm = new TGeoVolume("sipm",sipmshape,plex);
sipm->SetLineColor(kGray);
sipm->SetFillColor(kGray);

TGeoRotation *rtubrot1 = new TGeoRotation("rtubrot1",90,0,0,180,90,90);
TGeoRotation *rtubrot2 = new TGeoRotation("rtubrot2",0,90,90-14.4/2);
//TGeoCombiTrans etrans("etrans",0.,lengdc/2,105.-(105.-58.)/2,0); //for STCF (China) 1st layer
//TGeoCombiTrans etrans2("etrans2",0.,lengdc/2+depth_tile,105.-(105.-58.)/2,0); //for STCF (China) 2nd layer
TGeoCombiTrans etrans("etrans",0.,lengdc/2,radinaer1-length_ecapcnt/2,0); //for STCF (China) 1st layer - long barrel option
TGeoCombiTrans etrans2("etrans2",0.,lengdc/2+depth_tile,radinaer1-length_ecapcnt/2,0); //for STCF (China) 2nd layer - long barrel option
//TGeoCombiTrans etrans("etrans",0.,lengdc/2,radinaer1-(radinaer1-ffradou)/2,0);
TGeoCombiTrans trans("trans",0.,0.,radinaer1+depth_tile/2,rtubrot1);
//TGeoCombiTrans transc("transc",0.,0.,radinaer1+depth_tile/2,0); /*23/09/24*/
TGeoCombiTrans transc("transc",0.,0.,0,rtubrot2);
TGeoCombiTrans transipm("transipm",0.,-(length_tile+sipm_thick)/2,radinaer1+depth_tile/2,rtubrot1);
TGeoCombiTrans etransipm("etransipm",0.,0,58.+(length_ecapcnt+sipm_thick)/1.,0); //for STCF (China) 1st layer
// 2nd layer
TGeoCombiTrans trans2("trans2",0.,0.,radinaer2+depth_tile/2,rtubrot1);
//TGeoCombiTrans transc2("transc2",0.,0.,radinaer2+depth_tile/2,0);
TGeoCombiTrans transc2("transc2",0.,0.,0,rtubrot2);
TGeoCombiTrans transipm2("transipm2",0.,-(length_tile+sipm_thick)/2,radinaer2+depth_tile/2,rtubrot1);
TGeoCombiTrans etransipm2("etransipm2",0.,0,58.+(length_ecapcnt+sipm_thick)/1.,0); //for STCF (China) 1st layer
/**/
TGeoVolume *radl = new TGeoVolume("radl",extrul,plex);
radl->SetLineColor(kBlue+4);
//radl->SetLineColor(kGreen-4);
TGeoVolume *radl2 = new TGeoVolume("radl2",extrul2,plex); // 2nd layer
radl2->SetLineColor(kBlue+2);

TGeoVolume *radr = new TGeoVolume("radr",extrur,plex);
radr->SetLineColor(kBlue+4);
//radr->SetLineColor(kGreen-4);
TGeoVolume *radr2 = new TGeoVolume("radr2",extrur2,plex); // 2nd layer
radr2->SetLineColor(kBlue+2);

TGeoTubeSeg *outshape=new TGeoTubeSeg("outshape",radinaer1-0.1,radinaer1+depth_tile+0.1,length_tile/2+0.1,0,(TMath::TwoPi()/25)*180./TMath::Pi());
TGeoTubeSeg *inshape=new TGeoTubeSeg("inshape",radinaer1+0.1,radinaer1+depth_tile-0.1,length_tile/2+0.1,(0.1/radinaer1)*180./TMath::Pi(),(TMath::TwoPi()/25-0.1/radinaer1)*180./TMath::Pi());
//TGeoTrd2 *outshape=new TGeoTrd2("outshape",width_tilein/1+0.1,width_tileou/1+0.1,length_tile/2+0.1,length_tile/2+0.1,depth_tile/2+0.1);
//TGeoTrd2 *inshape=new TGeoTrd2("inshape",width_tilein/1-0.1,width_tileou/1-0.1,length_tile/2-0.1,length_tile/2-0.1,depth_tile/2-0.1);

TGeoCompositeShape *cntcover = new TGeoCompositeShape("cntcover", "outshape-inshape");
TGeoVolume *cover=new TGeoVolume("cover",cntcover,plex);
cover->SetLineColor(kCyan-2);
cover->SetFillColor(kCyan-2);

//--- 2nd layer ---//
TGeoTubeSeg *outshape2=new TGeoTubeSeg("outshape2",radinaer2-0.1,radinaer2+depth_tile+0.1,length_tile/2+0.1,0,(TMath::TwoPi()/nsect_bar)*180./TMath::Pi());
TGeoTubeSeg *inshape2=new TGeoTubeSeg("inshape2",radinaer2+0.1,radinaer2+depth_tile-0.1,length_tile/2+0.1,(0.1/radinaer2)*180./TMath::Pi(),(TMath::TwoPi()/nsect_bar-0.1/radinaer2)*180./TMath::Pi());
//TGeoTrd2 *outshape2=new TGeoTrd2("outshape2",width_tilein2/1+0.1,width_tileou2/1+0.1,length_tile/2+0.1,length_tile/2+0.1,depth_tile/2+0.1);
//TGeoTrd2 *inshape2=new TGeoTrd2("inshape2",width_tilein2/1-0.1,width_tileou2/1-0.1,length_tile/2-0.1,length_tile/2-0.1,depth_tile/2-0.1);

TGeoCompositeShape *cntcover2 = new TGeoCompositeShape("cntcover2", "outshape2-inshape2");
TGeoVolume *cover2=new TGeoVolume("cover2",cntcover2,plex);
cover2->SetLineColor(kCyan-2);
cover2->SetFillColor(kCyan-2);
//--- 2nd layer (end)---//

TGeoHMatrix* hp[nsect_bar];
TGeoHMatrix* hpsipm[nsect_bar];
TGeoHMatrix* hpc[nsect_bar];

//--- 2nd layer ---//
TGeoHMatrix* hp2[nsect_bar];
TGeoHMatrix* hpsipm2[nsect_bar];
TGeoHMatrix* hpc2[nsect_bar];

//--- 2nd layer (end)---//

// ASHIPH endcap geom dim
//Float_t length_ecapcnt=radinaer1-ffradou;
//Float_t ecapoutr=105.; //[cm] - short barrel option
Float_t ecapoutr=85.; //[cm] - long barrel option
Float_t ae1in=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(ecapoutr-length_ecapcnt); // half base in of  trapecioid in 1st segment (at inner radius) of the endcap part
//Float_t ae1in=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radinaer1-length_ecapcnt); // half base in of  trapecioid in 1st segment (at inner radius) of the endcap part
Float_t width_etile1in=(float)int((ae1in-0.1)*10.)/10.;
Float_t ae1ou=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(ecapoutr); // half base out of  trapecioid in 1st segment (at mid radius) of the endcap part
//Float_t ae1ou=tan(TMath::TwoPi()/(nsect_bar)*0.5)*(radinaer1); // half base out of  trapecioid in 1st segment (at mid radius) of the endcap part
Float_t width_etile1ou=(float)int((ae1ou-0.1)*10.)/10.;
TGeoTrd1 *tile1=new TGeoTrd1(width_etile1in/1.-0.1,width_etile1ou/1.-0.1,depth_tile/2.-0.1,length_ecapcnt/2-0.1);
TGeoVolume *etile1 = new TGeoVolume("etile1",tile1,agel);
etile1->SetLineColor(kBlue+4);
//etile1->SetLineColor(kGreen-4);

TGeoTrd1 *eoutshape=new TGeoTrd1("eoutshape",width_etile1in/1+0.1,width_etile1ou/1+0.1,depth_tile/2+0.1,length_ecapcnt/2+0.1); 
//,depth_tile/2+0.1);
TGeoTrd1 *einshape=new TGeoTrd1("einshape",width_etile1in/1-0.1,width_etile1ou/1-0.1,depth_tile/2-0.1,length_ecapcnt/2-0.1);
//,depth_tile/2-0.1);

TGeoCompositeShape *ecntcover = new TGeoCompositeShape("ecntcover", "eoutshape-einshape");
TGeoVolume *ecover=new TGeoVolume("cover",ecntcover,plex);
ecover->SetLineColor(kCyan-2);
ecover->SetFillColor(kCyan-2);
//top->AddNode(ecover,1,0);

TGeoBBox *ewlsshape=new TGeoBBox("wlsshape",(wls_thick-0.)/2.,depth_tile/2.,(length_ecapcnt-0.)/2.);
TGeoVolume *ewls = new TGeoVolume("ewls",ewlsshape,bbq);
ewls->SetLineColor(kGreen);
ewls->SetFillColor(kGreen);
//top->AddNode(ewls,1,0);

// Set ASHIPH cnts
Int_t ncnt=0;
//for(int k=-2; k<2; k++)
//for(int k=-1; k<0; k++)
//for(int k=1; k<2; k++)
for(int k=-3; k<2; k++) // for STCF (China) with 5 segments in barrel
{
// for STCF (China) with 5 segments in barrel
trans.SetDy(length_tile*(k+1.));
transc.SetDy(length_tile*(k+1.));
transipm.SetDy(length_tile*(k+1.)-length_tile/2);

trans2.SetDy(length_tile*(k+1.));
transc2.SetDy(length_tile*(k+1.));
transipm2.SetDy(length_tile*(k+1.)-length_tile/2);
 trans2.RotateY(14.4/2.);
 transipm2.RotateY(14.4/2.);
 transc2.RotateY(14.4/2.);
/*
trans.SetDy(length_tile*(k+0.5));
transc.SetDy(length_tile*(k+0.5));
transipm.SetDy(length_tile*(k+0.5)-length_tile/2);
*/
 for  (int i=0; i<nsect_bar; i++)
// for  (int i=0; i<2; i++)
 {
 ncnt++;
 hp[i]=new TGeoHMatrix(trans);
 hpsipm[i]=new TGeoHMatrix(transipm);
 hpc[i]=new TGeoHMatrix(transc);
 top->AddNode(radl,i+1,hp[i]);
 top->AddNode(radr,i+1,hp[i]);
 top->AddNode(wls,i+1,hp[i]);
 top->AddNode(sipm,i+1,hpsipm[i]);
 top->AddNode(cover,i+1,hpc[i]);
 trans.RotateY(14.4);
 transipm.RotateY(14.4);
 transc.RotateY(14.4);
//--- 2nd layer ---// 
 ncnt++;
 hp2[i]=new TGeoHMatrix(trans2);
 hpsipm2[i]=new TGeoHMatrix(transipm2);
 hpc2[i]=new TGeoHMatrix(transc2);
 top->AddNode(radl2,i+1,hp2[i]);
 top->AddNode(radr2,i+1,hp2[i]);
 top->AddNode(wls,i+1,hp2[i]);
 top->AddNode(sipm,i+1,hpsipm2[i]);
 top->AddNode(cover2,i+1,hpc2[i]);
 trans2.RotateY(14.4);
 transipm2.RotateY(14.4);
 transc2.RotateY(14.4);
 }
}

etrans.SetDy(lengdc/2+depth_tile/2);
etransipm.SetDy(lengdc/2+depth_tile/2);
etrans2.SetDy(lengdc/2+depth_tile/2+depth_tile);
etrans2.RotateY(360./nsect_bar-14.4/2);
//etransipm.SetDy(lengdc/2+depth_tile/2);
etransipm2.SetDy(lengdc/2+depth_tile+depth_tile/2);
etransipm2.RotateY(360./nsect_bar-14.4/2);
 for  (int i=0; i<nsect_bar; i++)
// for  (int i=0; i<2; i++)
// for  (int i=0; i<0; i++)
 {
 ncnt++;
 hp[i]=new TGeoHMatrix(etrans);
 hpsipm[i]=new TGeoHMatrix(etransipm);
 hp2[i]=new TGeoHMatrix(etrans2);
 hpsipm2[i]=new TGeoHMatrix(etransipm2);
 //
/**/
top->AddNode(etile1,i+1,hp[i]);/**/
top->AddNode(ecover,i+1,hp[i]);/**/
top->AddNode(ewls,i+1,hp[i]);/**/
top->AddNode(sipm,i+1,hpsipm[i]);
 ncnt++;
/**/
top->AddNode(etile1,i+1,hp2[i]);
top->AddNode(ecover,i+1,hp2[i]);/**/
top->AddNode(ewls,i+1,hp2[i]);
top->AddNode(sipm,i+1,hpsipm2[i]);
 etrans.RotateY(360./nsect_bar);
 etransipm.RotateY(360./nsect_bar);
 etrans2.RotateY(360./nsect_bar);
 etransipm2.RotateY(360./nsect_bar);
 }
etrans.SetDy(-lengdc/2-depth_tile/2);
etrans2.SetDy(-lengdc/2-depth_tile/2-depth_tile);
etransipm.SetDy(-lengdc/2-depth_tile/2);
etransipm2.SetDy(-lengdc/2-depth_tile-depth_tile/2);
//etransipm2.RotateY(360./nsect_bar+14.4/2);
//etrans2.RotateY(360./nsect_bar+14.4/2);
 for  (int i=0; i<nsect_bar; i++)
// for  (int i=0; i<2; i++)
// for  (int i=0; i<0; i++)
 {
 ncnt++;
 hp[i]=new TGeoHMatrix(etrans);
 hp2[i]=new TGeoHMatrix(etrans2);
 hpsipm[i]=new TGeoHMatrix(etransipm);
 hpsipm2[i]=new TGeoHMatrix(etransipm2);
 //
top->AddNode(etile1,i+26,hp[i]);
top->AddNode(ecover,i+26,hp[i]);/**/
top->AddNode(ewls,i+26,hp[i]);/**/
top->AddNode(sipm,i+26,hpsipm[i]);
 ncnt++;
top->AddNode(etile1,i+54,hp2[i]);
top->AddNode(ecover,i+26,hp2[i]);/**/
top->AddNode(ewls,i+26,hp2[i]);
top->AddNode(sipm,i+26,hpsipm2[i]);
 etrans.RotateY(360./nsect_bar);
 etrans2.RotateY(360./nsect_bar);
 etransipm.RotateY(360./nsect_bar);
 etransipm2.RotateY(360./nsect_bar);
 }

// ---- Draw Everything ----//

TView3D *view = new TView3D();
  view->SetRange(-10,-10,-10,10,10,10);
  view->ShowAxis();

top->Draw();
//gPad->Update();

}
