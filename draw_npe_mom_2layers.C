void draw_npe_mom_2layers()
{
    gROOT->SetStyle("Plain");
    gStyle->SetOptTitle(0); // no histogram title
    gStyle->SetOptTitle(1);
    gStyle->SetOptStat(0);

    //TString pref = "results/112cm";
    //TString pref = "results/98cm";
    //TString pref = "results/126cm";

    //TString pref = "results/112cm_phi185";
    //TString pref = "results/86cm_phi185";
    //TString pref = "results/138cm_phi185";
    
    TString pref = "results/112cm_2layers";

    TCanvas *c1 = new TCanvas("c","c");
    c1->cd();	

    TProfile* pr1 = new TProfile("pr1","",25,0.,2500,0,50);
    TProfile* pr2 = new TProfile("pr2","",25,0.,2500,0,50);
    TProfile* pr3 = new TProfile("pr3","",25,0.,2500,0,50);

    TChain *tt1=new TChain("events");	
    TString infilemu = pref + "/" + "sim_mu-.root";
    tt1->Add(infilemu);
    //tt1->Draw("BASHIPHInfoCol.npe:sqrt(pow(BASHIPHBarHitCol.momentum.x,2) + pow(BASHIPHBarHitCol.momentum.y,2) + pow(BASHIPHBarHitCol.momentum.z,2) ) >> pr1", "BASHIPHBarHitCol.cntID==0 && sqrt(pow(BASHIPHBarHitCol.momentum.x,2) + pow(BASHIPHBarHitCol.momentum.y,2) + pow(BASHIPHBarHitCol.momentum.z,2) )>50.");
    tt1->Draw("BASHIPHInfoCol.npe:sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) ) >> pr1", "BASHIPHBarHitCol.cntID[0]==0 && BASHIPHBarHitCol.cntID[1]==149"
        "&& sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )>120");

    TChain *tt2=new TChain("events");	
    TString infilepi = pref + "/" + "sim_pi-.root";
    tt2->Add(infilepi);
    tt2->Draw("BASHIPHInfoCol.npe:sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) ) >> pr2", "BASHIPHBarHitCol.cntID[0]==0 && BASHIPHBarHitCol.cntID[1]==149"
        "&& sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )>120");

    TChain *tt3=new TChain("events");	
    TString infilek = pref + "/" + "sim_kaon-.root";
    tt3->Add(infilek);
    tt3->Draw("BASHIPHInfoCol.npe:sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) ) >> pr3", "BASHIPHBarHitCol.cntID[0]==0 && BASHIPHBarHitCol.cntID[1]==149"
        "&& sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )>120");

    pr1->SetLineColor(kBlue);
    pr1->SetMarkerColor(kBlue);
    pr1->SetMarkerStyle(8);
    pr1->SetMarkerSize(0.7);
    pr1->SetXTitle("P, MeV/c");
	pr1->SetYTitle("N_{ph.e.}");
    pr1->Draw("prof");
 
    pr2->SetLineColor(kRed);
    pr2->SetMarkerColor(kRed);
    pr2->SetMarkerStyle(8);
    pr2->SetMarkerSize(0.7);
    pr2->Draw("same");
    
    pr3->SetLineColor(kBlack);
    pr3->SetMarkerColor(kBlack);
    pr3->SetMarkerStyle(8);
    pr3->SetMarkerSize(0.7);
    pr3->Draw("same");

    //TLegend* leg=new TLegend(100,7.0,350,10,"","");
    //TLegend* leg=new TLegend(100,4.0,350,7,"","");
    TLegend* leg=new TLegend(100,9.0,350,15,"","");
    TLegendEntry *le1 = leg->AddEntry(pr3,"K","elp");
    le1->SetTextColor(kBlack);  
    TLegendEntry *le2 = leg->AddEntry(pr2,"#pi","elp");
    le2->SetTextColor(kRed);
    TLegendEntry *le3 = leg->AddEntry(pr1,"#mu","elp");
    le3->SetTextColor(kBlue);
    leg->Draw("same");
    
    c1->SaveAs(pref + "/" + "npe_momentum.png");
}

