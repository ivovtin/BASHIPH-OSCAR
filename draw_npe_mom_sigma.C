void draw_npe_mom_sigma()
{
     
   gROOT->SetStyle("Plain");

   TCanvas *c1 = new TCanvas("c","c");
   c1->cd();
	  
   TString pref = "results/112cm";
   //TString pref = "results/98cm";
   //TString pref = "results/126cm";
   //TString pref = "results/112cm_2layers";
   //TString pref = "results/112cm_teflon";

   TString infilepi = pref + "/" + "sim_pi-.root";
   TFile *fpi = new TFile(infilepi);
   TTree *tpi = (TTree*)fpi->Get("events");

   int npepi;
   float pxpi, pypi, pzpi;
     
   tpi->SetBranchAddress("BASHIPHInfoCol.npe",&npepi);
   tpi->SetBranchAddress("BASHIPHBarHitCol.momentum.x",&pxpi);
   tpi->SetBranchAddress("BASHIPHBarHitCol.momentum.y",&pypi);
   tpi->SetBranchAddress("BASHIPHBarHitCol.momentum.z",&pzpi);

   const int ncounts = 8;
   float npethr_step = 0.5;

   //TProfile* pr2 = new TProfile("sigma",TString::Format("%.1f < P, MeV/c < %.1f",P1,P2).Data(),100,0,6.5,0,5);  // sigma vs npe_trh 
   TProfile* pr1 = new TProfile("sigma","sigma",100,0,5.0,0,5);  // sigma vs npe_trh 

   TProfile* Ksigma[ncounts];
   for (int k=0; k<ncounts; k++)
   {
      Ksigma[k] = new TProfile(TString::Format("Ksigma%d",k).Data(),TString::Format("Nphe_{thr}=%.1f",k*npethr_step).Data(),100,-0.005,3.005);
   }

   float Npethr[ncounts] = {0.};

   float mompi = 0;
   int N0pi[ncounts] = {0};
   int Ntotalpi[ncounts] = {0};
  
   for (int i=0; i<tpi->GetEntries(); i++)
   {
      tpi->GetEntry(i);
      cout<<i<<"\t"<<npepi<<"\t"<<sqrt(pow(pxpi,2) + pow(pypi,2) + pow(pzpi,2))<<endl;
      mompi = sqrt(pow(pxpi,2) + pow(pypi,2) + pow(pzpi,2));
      if ( mompi>0.6 && mompi<2.0 )
      {        
         for( int k=0; k<ncounts; k++ )
         {
            Npethr[k] = k*npethr_step;
            if( npepi<Npethr[k] )
            {
               N0pi[k]++;
            } 
            Ntotalpi[k]++;   
            //cout<<Ntotalpi[k]<<"\t"<<N0pi[k]<<endl;
         }
      }
   } 
    
   TString infilek = pref + "/" + "sim_kaon-.root";
   TFile *fk = new TFile(infilek);    
   TTree *tk = (TTree*)fk->Get("events");

   int npek;
   float pxk, pyk, pzk;
    
   tk->SetBranchAddress("BASHIPHInfoCol.npe",&npek);
   tk->SetBranchAddress("BASHIPHBarHitCol.momentum.x",&pxk);
   tk->SetBranchAddress("BASHIPHBarHitCol.momentum.y",&pyk);
   tk->SetBranchAddress("BASHIPHBarHitCol.momentum.z",&pzk);

   float momk = 0;
   int N0k[ncounts] = {0};
   int Ntotalk[ncounts] = {0};
  
   for (int i=0; i<tk->GetEntries(); i++)
   {
      tk->GetEntry(i);   
      momk = sqrt(pow(pxk,2) + pow(pyk,2) + pow(pzk,2));
      cout<<i<<"\t"<<npek<<"\t"<<sqrt(pow(pxk,2) + pow(pyk,2) + pow(pzk,2))<<endl;
      if ( momk>0.6 && momk<2.0 )
      {        
         for( int k=0; k<ncounts; k++ )
         {
            Npethr[k] = k*npethr_step;
            if( npek < Npethr[k] )
            {
              N0k[k]++;
            }
            Ntotalk[k]++;
            //cout<<Ntotalk[k]<<"\t"<<N0k[k]<<endl;          
         }
      }
    } 

   float underthr_eff_pi[ncounts];
   float eff[ncounts]; 
      
   for( int k=0; k<ncounts; k++ )
   {
      underthr_eff_pi[k] = (float)N0pi[k]/(float)Ntotalpi[k];
      eff[k] = (float)N0k[k]/(float)Ntotalk[k]; 

      cout<<k<<"\t"<<Ntotalpi[k]<<"\t"<<N0pi[k]<<"\t"<<underthr_eff_pi[k]<<endl;
      cout<<k<<"\t"<<Ntotalk[k]<<"\t"<<N0k[k]<<"\t"<<eff[k]<<endl;

      //Ksigma[k]->Fill((float)i,abs(sqrt(2.)*(TMath::ErfInverse(1-2*underthr_eff_pi[k])+TMath::ErfInverse(1-2*(1-eff[k])))));
      float sigma = abs(sqrt(2.)*(TMath::ErfInverse(1-2*underthr_eff_pi[k])+TMath::ErfInverse(1-2*(1-eff[k]))));
      cout<<k<<"\t"<<sigma<<endl;

      pr1->Fill((float)Npethr[k],abs(sqrt(2.)*(TMath::ErfInverse(1-2*underthr_eff_pi[k])+TMath::ErfInverse(1-2*(1-eff[k])))));
   }
  
   /*
   for( int i=0; i<ncounts; i++ )
   {
      TCanvas *c2 = new TCanvas();
      c2->cd();   
      Ksigma[i]->SetLineColor(kRed);
      Ksigma[i]->SetMarkerColor(kRed);
      Ksigma[i]->GetXaxis()->SetTitle("P, GeV/c");
      Ksigma[i]->GetYaxis()->SetTitle("#sigma");
      Ksigma[i]->Draw("same");
      c2->SaveAs(TString::Format("Ksigma_%d.png",i).Data());
   }
   */

   TCanvas *c3 = new TCanvas();
   c3->cd();   
   pr1->SetLineColor(kRed);
   pr1->SetMarkerColor(kRed);
   pr1->SetMarkerStyle(4);
   //pr1->SetTitle("; Threshold, npe; #sigma");
   pr1->GetXaxis()->SetTitle("Threshold, npe");
   pr1->GetYaxis()->SetTitle("#sigma");
   pr1->Draw("prof");
   c3->SaveAs("sigma.png");
}
