void draw_npe_range_mom_2layers()
{
    gROOT->SetStyle("Plain");
    gStyle->SetOptTitle(0); // no histogram title
    gStyle->SetOptTitle(1);
    //gStyle->SetOptStat(0);

    TString pref = "results/112cm_2layers";

    //Double_t trh = 0.5;
 
    /*
    TChain *tt1=new TChain("events");	
    TString infilemu = pref + "/" + "sim_mu-.root";
    tt1->Add(infilemu);
    */

    TChain *tt2=new TChain("events");   
    TString infilepi = pref + "/" + "sim_pi-.root";
    tt2->Add(infilepi);

    TChain *tt3=new TChain("events");   
    TString infilek = pref + "/" + "sim_kaon-.root";
    tt3->Add(infilek);

    float sigma[25];
    float p_all[25];
    float err_p_all[25];

    //for(int ii=0; ii<=1; ii+=100)
    for(int ii=0; ii<=25; ii++)
    {
        double mom1 = ii*100;
        double mom2 = mom1+100;
        
        //double mom1 = 600;
        //double mom2 = 2000;

        p_all[ii]=mom1;
        err_p_all[ii]=50;

        cout<<mom1<<"\t"<<mom2<<endl;

        TString bmom1;
        bmom1.Form("%f", mom1);
        TString bmom2;
        bmom2.Form("%f", mom2);

        TCanvas *c1 = new TCanvas("c","c");
        c1->cd(); 

        //TH1F* h1 = new TH1F("h1","",100,0,50);
        TH1F* h2 = new TH1F("h2","",30,0,30);
        TH1F* h3 = new TH1F("h3","",30,0,30);
  
        /*
        tt1->Draw("BASHIPHInfoCol.npe>> h1", 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x,2) + pow(BASHIPHBarHitCol.momentum.y,2) + pow(BASHIPHBarHitCol.momentum.z,2) )> " + bmom1 + " &&"
            "sqrt(pow(BASHIPHBarHitCol.momentum.x,2) + pow(BASHIPHBarHitCol.momentum.y,2) + pow(BASHIPHBarHitCol.momentum.z,2) )< " + bmom2 + " &&"
            "BASHIPHBarHitCol.cntID==0");
        */

        tt2->Draw("BASHIPHInfoCol.npe >> h2", 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[0],2) + pow(BASHIPHBarHitCol.momentum.y[0],2) + pow(BASHIPHBarHitCol.momentum.z[0],2) )> " + bmom1 + " &&" 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[0],2) + pow(BASHIPHBarHitCol.momentum.y[0],2) + pow(BASHIPHBarHitCol.momentum.z[0],2) )< " + bmom2 + " &&"  
            "BASHIPHBarHitCol.cntID[0]==0 &&"
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )> " + bmom1 + " &&" 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )< " + bmom2 + " &&"  
            "BASHIPHBarHitCol.cntID[1]==149"
             );
    
        tt3->Draw("BASHIPHInfoCol.npe >> h3", 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[0],2) + pow(BASHIPHBarHitCol.momentum.y[0],2) + pow(BASHIPHBarHitCol.momentum.z[0],2) )> " + bmom1 + " &&"
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[0],2) + pow(BASHIPHBarHitCol.momentum.y[0],2) + pow(BASHIPHBarHitCol.momentum.z[0],2) )< " + bmom2 + " &&"
            "BASHIPHBarHitCol.cntID[0]==0 &&" 
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )> " + bmom1 + " &&"
            "sqrt(pow(BASHIPHBarHitCol.momentum.x[1],2) + pow(BASHIPHBarHitCol.momentum.y[1],2) + pow(BASHIPHBarHitCol.momentum.z[1],2) )< " + bmom2 + " &&"
            "BASHIPHBarHitCol.cntID[1]==149" 
            );

        for(Double_t trh = 0.5; trh<=0.5; trh++)
        {
            float Ntotalpi = h2->GetEntries();
            Double_t b1 = 0;
            int firstbin1 = h2->GetXaxis()->FindBin(b1);
            int trhbin1 = h2->GetXaxis()->FindBin(trh);
            float N0pi = h2->Integral(firstbin1, trhbin1);

            float Ntotalk = h3->GetEntries();
            int firstbin2 = h3->GetXaxis()->FindBin(b1);
            int trhbin2 = h3->GetXaxis()->FindBin(trh);
            float N0k = h3->Integral(firstbin2, trhbin2);

            float underthr_eff_pi = (float)N0pi/(float)Ntotalpi;
            if( N0pi==0 ) underthr_eff_pi=0.00001;
            if( mom1>1200 && mom1<1800 && N0pi==1 ) underthr_eff_pi=0.00001;
            float effk = (float)N0k/(float)Ntotalk; 
            
            sigma[ii] = abs(sqrt(2.)*(TMath::ErfInverse(1-2*underthr_eff_pi)+TMath::ErfInverse(1-2*(1-effk))));

            cout<<trh<<"\t"<<Ntotalpi<<"\t"<<N0pi<<"\t"<<underthr_eff_pi<<"\t"<<Ntotalk<<"\t"<<N0k<<"\t"<<effk<<"\t"<<sigma[ii]<<endl;
        }
        /* 
        h1->SetLineColor(kBlue);
        h1->SetMarkerColor(kBlue);
        h1->SetMarkerStyle(8);
        h1->SetMarkerSize(0.7);
        h1->SetXTitle("N_{ph.e.}");
        //h1->Draw("");
        */
    
        h2->SetLineColor(kRed);
        h2->SetMarkerColor(kRed);
        h2->SetMarkerStyle(8);
        h2->SetMarkerSize(0.7);
        h2->SetTitle(TString::Format("Momentum %.1f MeV/c",mom1).Data());
        h2->SetXTitle("N_{ph.e.}");
        h2->Draw("");
    
        h3->SetLineColor(kBlack);
        h3->SetMarkerColor(kBlack);
        h3->SetMarkerStyle(8);
        h3->SetMarkerSize(0.7);
        //h3->Draw("same");
   
        c1->SaveAs(pref + "/" + TString::Format("npe_mom%d.png",ii).Data());
    } 
    
    TCanvas *c2 = new TCanvas("c","c");
    c2->cd(); 

    gPad->SetGrid();
    TGraphErrors* gr1 = new TGraphErrors(25,p_all,sigma,err_p_all,0);
    gr1->SetMarkerStyle(20);
    gr1->SetMarkerColor(3);
    gr1->SetLineWidth(2);
    gr1->SetLineColor(3);
    gr1->SetTitle("; P, MeV/c; #sigma");
    gr1->Draw("ap");
    gPad->Modified(); gPad->Update();
    //gr1->GetYaxis()->SetLimits(0., 5.5);
    gr1->SetMinimum(0.);
    gr1->SetMaximum(6.5);
    gPad->Modified(); gPad->Update();
    
    c2->SaveAs(pref + "/" + "sigma_momentum.png");
}

