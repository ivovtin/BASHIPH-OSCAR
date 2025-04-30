void draw_npe_mom_sigma2()
{
     
   gROOT->SetStyle("Plain");

   //TCanvas *c1 = new TCanvas("c","c");
   //c1->cd();

    TString pref = "results/112cm";
   //TString pref = "results/98cm";
   //TString pref = "results/126cm";

   TString infilepi = pref + "/" + "sim_pi-.root";
   TFile *fpi = new TFile(infilepi);  
   TTree *tpi = (TTree*)fpi->Get("events");

   int npepi;
   float pxpi, pypi, pzpi;
     
   tpi->SetBranchAddress("BASHIPHInfoCol.npe",&npepi);
   tpi->SetBranchAddress("MCParticleCol.momentum.x",&pxpi);
   tpi->SetBranchAddress("MCParticleCol.momentum.y",&pypi);
   tpi->SetBranchAddress("MCParticleCol.momentum.z",&pzpi);

   const int nmom = 25;
   //float p_all[nmom];
   //float err_p_all[nmom];

   //TProfile* pr2 = new TProfile("sigma",TString::Format("%.1f < P, MeV/c < %.1f",P1,P2).Data(),100,0,6.5,0,5);  // sigma vs npe_trh 
   //TProfile* pr1 = new TProfile("sigma","sigma",100,0,5.0,0,5);  // sigma vs npe_trh 
   /*
   TProfile* Ksigma[ncounts];
   for (int k=0; k<ncounts; k++)
   {
      Ksigma[k] = new TProfile(TString::Format("Ksigma%d",k).Data(),TString::Format("Nphe_{thr}=%.1f",k*npethr_step).Data(),100,0.0,2.5);
   }
   */

   float Npethr = 1.0;
   float mompi = 0;

   int N0pi[nmom] = {0};
   int Ntotalpi[nmom] = {0};
  
   for (int i=0; i<tpi->GetEntries(); i++)
   {
      tpi->GetEntry(i);
      mompi = sqrt(pow(pxpi,2) + pow(pypi,2) + pow(pzpi,2));
      cout<<i<<"\t"<<npepi<<"\t"<<sqrt(pow(pxpi,2) + pow(pypi,2) + pow(pzpi,2))<<endl;
      
      for(int ii=0; ii<=nmom; ii++)
      {
         //p_all[ii]=0.1*ii+0.5;
         //err_p_all[ii]=0.5;

         if ( mompi>0.1*ii && mompi<(0.1+0.1*ii))
         {        
            if( npepi<Npethr )
            {
               N0pi[ii]++;
            } 
            Ntotalpi[ii]++;   
            //cout<<Ntotalpi[ii]<<"\t"<<N0pi[ii]<<endl;
         }
      }
   }
           
 
/*    
   TFile *fk = new TFile("sim_kaon-.root");
   TTree *tk = (TTree*)fk->Get("events");

   int npek;
   float pxk, pyk, pzk;
    
   tk->SetBranchAddress("BASHIPHInfoCol.npe",&npek);
   tk->SetBranchAddress("MCParticleCol.momentum.x",&pxk);
   tk->SetBranchAddress("MCParticleCol.momentum.y",&pyk);
   tk->SetBranchAddress("MCParticleCol.momentum.z",&pzk);

   float momk = 0;
   int N0k[ncounts][nmom] = {0};
   int Ntotalk[ncounts][nmom] = {0};
  
   for (int i=0; i<tk->GetEntries(); i++)
   {
      tk->GetEntry(i);   
      momk = sqrt(pow(pxk,2) + pow(pyk,2) + pow(pzk,2));
      cout<<i<<"\t"<<npek<<"\t"<<sqrt(pow(pxk,2) + pow(pyk,2) + pow(pzk,2))<<endl;
      
      for(int ii=0; ii<=nmom; ii++)
      {
         if ( momk>0.1*ii && momk<0.1+0.1*ii)
         {        
            for( int k=0; k<ncounts; k++ )
            {
               Npethr[k] = k*npethr_step;
               if( npek < Npethr[k] )
               {
                  N0k[k][ii]++;
               }
               Ntotalk[k][ii]++;
               //cout<<Ntotalk[k]<<"\t"<<N0k[k]<<endl;          
            }
         }
      }
   } 

   float underthr_eff_pi[ncounts][nmom];
   float eff[ncounts][nmom]; 
   
   for(int ii=0; ii<=nmom; ii++)
   {   
      for( int k=0; k<ncounts; k++ )
      {
         underthr_eff_pi[k][ii] = (float)N0pi[k][ii]/(float)Ntotalpi[k][ii];
         eff[k][ii] = (float)N0k[k][ii]/(float)Ntotalk[k][ii]; 

         //cout<<k<<"\t"<<Ntotalpi[k]<<"\t"<<N0pi[k]<<"\t"<<underthr_eff_pi[k]<<endl;
         //cout<<k<<"\t"<<Ntotalk[k]<<"\t"<<N0k[k]<<"\t"<<eff[k]<<endl;
         
         Ksigma[k]->Fill((float)p_all[ii],abs(sqrt(2.)*(TMath::ErfInverse(1-2*underthr_eff_pi[k][ii])+TMath::ErfInverse(1-2*(1-eff[k][ii])))));
      }
   }
  
   
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

}
