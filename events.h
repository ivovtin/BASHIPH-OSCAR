//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Apr 12 10:56:11 2025 by ROOT version 6.34.02
// from TTree events/Events tree
// found on file: 112cm/sim_pi-.root
//////////////////////////////////////////////////////////

#ifndef events_h
#define events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "c++/13/vector"

class events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxMDCHitCol = 1;
   static constexpr Int_t kMaxMDCHitCol#0 = 1;
   static constexpr Int_t kMaxMCParticleCol = 6;
   static constexpr Int_t kMaxMCParticleCol#0 = 5;
   static constexpr Int_t kMaxMCParticleCol#1 = 5;
   static constexpr Int_t kMaxEventHeaderCol = 1;
   static constexpr Int_t kMaxITKHitCol = 1;
   static constexpr Int_t kMaxITKHitCol#0 = 1;
   static constexpr Int_t kMaxECALHit3Col = 1;
   static constexpr Int_t kMaxECALHit3Col#0 = 1;
   static constexpr Int_t kMaxECALHit3Col#1 = 1;
   static constexpr Int_t kMaxECALTPointCol = 1;
   static constexpr Int_t kMaxBASHIPHBarHitCol = 9;
   static constexpr Int_t kMaxBASHIPHBarHitCol#0 = 9;
   static constexpr Int_t kMaxBASHIPHPDHitCol = 364;
   static constexpr Int_t kMaxBASHIPHPDHitCol#0 = 364;
   static constexpr Int_t kMaxBASHIPHInfoCol = 1;
   static constexpr Int_t kMaxBASHIPHInfoCol#0 = 1;
   static constexpr Int_t kMaxMUDPointCol = 1;
   static constexpr Int_t kMaxMUDPointCol#0 = 1;
   static constexpr Int_t kMaxDTOFBarHitCol = 1;
   static constexpr Int_t kMaxDTOFBarHitCol#0 = 1;
   static constexpr Int_t kMaxDTOFPDHitCol = 1;
   static constexpr Int_t kMaxDTOFPDHitCol#0 = 1;

   // Declaration of leaf types
   Int_t           MDCHitCol_;
   Int_t           MDCHitCol_type[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_dposition_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_dposition_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_dposition_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_detectorID[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_position_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_position_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_position_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posIn_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posIn_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posIn_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momIn_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momIn_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momIn_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posOut_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posOut_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_posOut_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momOut_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momOut_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_momOut_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_pocaZ[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_pdgID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_parentID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_eventID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_trackID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_layerID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_cellID[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_priElec[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitCol_totElec[kMaxMDCHitCol];   //[MDCHitCol_]
   Float_t         MDCHitCol_charge[kMaxMDCHitCol];   //[MDCHitCol_]
   Float_t         MDCHitCol_mass[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_time[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_Qmeasurement[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_TrackLen[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_TrackLenAll[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialMom_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialMom_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialMom_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialPos_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialPos_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_initialPos_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_driftDistance[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_driftDistanceE[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_energy[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint1_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint1_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint1_z[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint2_x[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint2_y[kMaxMDCHitCol];   //[MDCHitCol_]
   Double_t        MDCHitCol_wirePoint2_z[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosX_begin[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosX_end[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosY_begin[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosY_end[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosZ_begin[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsPosZ_end[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsTime_begin[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsTime_end[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsTimeAfterDrift_begin[kMaxMDCHitCol];   //[MDCHitCol_]
   UInt_t          MDCHitCol_IonElectronsTimeAfterDrift_end[kMaxMDCHitCol];   //[MDCHitCol_]
   Int_t           MDCHitColhS0_;
   Int_t           MDCHitColhS0_index[kMaxMDCHitCol#0];   //[MDCHitCol#0_]
   Int_t           MDCHitColhS0_collectionID[kMaxMDCHitCol#0];   //[MDCHitCol#0_]
   vector<float>   *MDCHitCol_0;
   vector<float>   *MDCHitCol_1;
   vector<float>   *MDCHitCol_2;
   vector<float>   *MDCHitCol_3;
   vector<float>   *MDCHitCol_4;
   Int_t           MCParticleCol_;
   Int_t           MCParticleCol_trackID[kMaxMCParticleCol];   //[MCParticleCol_]
   Int_t           MCParticleCol_PDG[kMaxMCParticleCol];   //[MCParticleCol_]
   Int_t           MCParticleCol_generatorStatus[kMaxMCParticleCol];   //[MCParticleCol_]
   Int_t           MCParticleCol_simulatorStatus[kMaxMCParticleCol];   //[MCParticleCol_]
   Int_t           MCParticleCol_type[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_charge[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_time[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_mass[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_vertex_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_vertex_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_vertex_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_endpoint_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_endpoint_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_endpoint_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentumAtEndpoint_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentumAtEndpoint_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_momentumAtEndpoint_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_spin_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_spin_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Float_t         MCParticleCol_spin_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ecalPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ecalPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ecalPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryPosition_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryPosition_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryPosition_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ITKEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MDCEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_DTOFEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BTOFEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_BASHIPHEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_RICHEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_ECALEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryMomentum_x[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryMomentum_y[kMaxMCParticleCol];   //[MCParticleCol_]
   Double_t        MCParticleCol_MUDEntryMomentum_z[kMaxMCParticleCol];   //[MCParticleCol_]
   UInt_t          MCParticleCol_parents_begin[kMaxMCParticleCol];   //[MCParticleCol_]
   UInt_t          MCParticleCol_parents_end[kMaxMCParticleCol];   //[MCParticleCol_]
   UInt_t          MCParticleCol_daughters_begin[kMaxMCParticleCol];   //[MCParticleCol_]
   UInt_t          MCParticleCol_daughters_end[kMaxMCParticleCol];   //[MCParticleCol_]
   Int_t           MCParticleColhS0_;
   Int_t           MCParticleColhS0_index[kMaxMCParticleCol#0];   //[MCParticleCol#0_]
   Int_t           MCParticleColhS0_collectionID[kMaxMCParticleCol#0];   //[MCParticleCol#0_]
   Int_t           MCParticleColhS1_;
   Int_t           MCParticleColhS1_index[kMaxMCParticleCol#1];   //[MCParticleCol#1_]
   Int_t           MCParticleColhS1_collectionID[kMaxMCParticleCol#1];   //[MCParticleCol#1_]
   Int_t           EventHeaderCol_;
   Int_t           EventHeaderCol_eventID[kMaxEventHeaderCol];   //[EventHeaderCol_]
   Int_t           EventHeaderCol_runID[kMaxEventHeaderCol];   //[EventHeaderCol_]
   Int_t           ITKHitCol_;
   Int_t           ITKHitCol_type[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_dposition_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_dposition_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_dposition_z[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_detectorID[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_position_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_position_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_position_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentum_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentum_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentum_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_positionOut_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_positionOut_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_positionOut_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentumOut_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentumOut_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_momentumOut_z[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_pdgID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_parentID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_eventID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_trackID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_layerID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_ladderID[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_sectorID[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_charge[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_mass[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_time[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialMom_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialMom_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialMom_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialPos_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialPos_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_initialPos_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_uPlane_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_uPlane_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_uPlane_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_vPlane_x[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_vPlane_y[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_vPlane_z[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_planeY[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_planeX[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_uPosition_inplane[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_vPosition_inplane[kMaxITKHitCol];   //[ITKHitCol_]
   Double_t        ITKHitCol_depositEnergy[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_priElec[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitCol_totElec[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosX_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosX_end[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosY_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosY_end[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosZ_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsPosZ_end[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsTime_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsTime_end[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsTimeAfterDrift_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsTimeAfterDrift_end[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsDE_begin[kMaxITKHitCol];   //[ITKHitCol_]
   UInt_t          ITKHitCol_IonElectronsDE_end[kMaxITKHitCol];   //[ITKHitCol_]
   Int_t           ITKHitColhS0_;
   Int_t           ITKHitColhS0_index[kMaxITKHitCol#0];   //[ITKHitCol#0_]
   Int_t           ITKHitColhS0_collectionID[kMaxITKHitCol#0];   //[ITKHitCol#0_]
   vector<float>   *ITKHitCol_0;
   vector<float>   *ITKHitCol_1;
   vector<float>   *ITKHitCol_2;
   vector<float>   *ITKHitCol_3;
   vector<float>   *ITKHitCol_4;
   vector<float>   *ITKHitCol_5;
   Int_t           ECALHit3Col_;
   Int_t           ECALHit3Col_detectorID[kMaxECALHit3Col];   //[ECALHit3Col_]
   Double_t        ECALHit3Col_position_x[kMaxECALHit3Col];   //[ECALHit3Col_]
   Double_t        ECALHit3Col_position_y[kMaxECALHit3Col];   //[ECALHit3Col_]
   Double_t        ECALHit3Col_position_z[kMaxECALHit3Col];   //[ECALHit3Col_]
   Int_t           ECALHit3Col_type[kMaxECALHit3Col];   //[ECALHit3Col_]
   Double_t        ECALHit3Col_energy[kMaxECALHit3Col];   //[ECALHit3Col_]
   Double_t        ECALHit3Col_time[kMaxECALHit3Col];   //[ECALHit3Col_]
   Int_t           ECALHit3Col_crystalID[kMaxECALHit3Col];   //[ECALHit3Col_]
   Int_t           ECALHit3Col_layerID[kMaxECALHit3Col];   //[ECALHit3Col_]
   UInt_t          ECALHit3Col_ecalPoints_begin[kMaxECALHit3Col];   //[ECALHit3Col_]
   UInt_t          ECALHit3Col_ecalPoints_end[kMaxECALHit3Col];   //[ECALHit3Col_]
   UInt_t          ECALHit3Col_ecalTPoints_begin[kMaxECALHit3Col];   //[ECALHit3Col_]
   UInt_t          ECALHit3Col_ecalTPoints_end[kMaxECALHit3Col];   //[ECALHit3Col_]
   Int_t           ECALHit3ColhS0_;
   Int_t           ECALHit3ColhS0_index[kMaxECALHit3Col#0];   //[ECALHit3Col#0_]
   Int_t           ECALHit3ColhS0_collectionID[kMaxECALHit3Col#0];   //[ECALHit3Col#0_]
   Int_t           ECALHit3ColhS1_;
   Int_t           ECALHit3ColhS1_index[kMaxECALHit3Col#1];   //[ECALHit3Col#1_]
   Int_t           ECALHit3ColhS1_collectionID[kMaxECALHit3Col#1];   //[ECALHit3Col#1_]
   Int_t           ECALTPointCol_;
   Int_t           ECALTPointCol_tID[kMaxECALTPointCol];   //[ECALTPointCol_]
   Float_t         ECALTPointCol_energy[kMaxECALTPointCol];   //[ECALTPointCol_]
   Int_t           BASHIPHBarHitCol_;
   Int_t           BASHIPHBarHitCol_type[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Int_t           BASHIPHBarHitCol_trackID[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   UInt_t          BASHIPHBarHitCol_eventID[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_momentum_x[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_momentum_y[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_momentum_z[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_energy[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_time[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_length[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_eloss[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Int_t           BASHIPHBarHitCol_detectorID[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_position_x[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_position_y[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_position_z[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Int_t           BASHIPHBarHitCol_cntID[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Double_t        BASHIPHBarHitCol_mass[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Int_t           BASHIPHBarHitCol_pdgID[kMaxBASHIPHBarHitCol];   //[BASHIPHBarHitCol_]
   Int_t           BASHIPHBarHitColhS0_;
   Int_t           BASHIPHBarHitColhS0_index[kMaxBASHIPHBarHitCol#0];   //[BASHIPHBarHitCol#0_]
   Int_t           BASHIPHBarHitColhS0_collectionID[kMaxBASHIPHBarHitCol#0];   //[BASHIPHBarHitCol#0_]
   Int_t           BASHIPHPDHitCol_;
   Int_t           BASHIPHPDHitCol_type[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Int_t           BASHIPHPDHitCol_trackID[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_momentum_x[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_momentum_y[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_momentum_z[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_energy[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_time[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_length[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Int_t           BASHIPHPDHitCol_detectorID[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_position_x[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_position_y[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_position_z[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Int_t           BASHIPHPDHitCol_cntID[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Int_t           BASHIPHPDHitCol_pdgID[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Double_t        BASHIPHPDHitCol_timeStart[kMaxBASHIPHPDHitCol];   //[BASHIPHPDHitCol_]
   Int_t           BASHIPHPDHitColhS0_;
   Int_t           BASHIPHPDHitColhS0_index[kMaxBASHIPHPDHitCol#0];   //[BASHIPHPDHitCol#0_]
   Int_t           BASHIPHPDHitColhS0_collectionID[kMaxBASHIPHPDHitCol#0];   //[BASHIPHPDHitCol#0_]
   Int_t           BASHIPHInfoCol_;
   Int_t           BASHIPHInfoCol_npe[kMaxBASHIPHInfoCol];   //[BASHIPHInfoCol_]
   Double_t        BASHIPHInfoCol_mom[kMaxBASHIPHInfoCol];   //[BASHIPHInfoCol_]
   Int_t           BASHIPHInfoColhS0_;
   Int_t           BASHIPHInfoColhS0_index[kMaxBASHIPHInfoCol#0];   //[BASHIPHInfoCol#0_]
   Int_t           BASHIPHInfoColhS0_collectionID[kMaxBASHIPHInfoCol#0];   //[BASHIPHInfoCol#0_]
   Int_t           MUDPointCol_;
   Int_t           MUDPointCol_trackID[kMaxMUDPointCol];   //[MUDPointCol_]
   UInt_t          MUDPointCol_eventIDs[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_momentum_x[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_momentum_y[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_momentum_z[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_energy[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_time[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_eloss[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_position_x[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_position_y[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_position_z[kMaxMUDPointCol];   //[MUDPointCol_]
   Int_t           MUDPointCol_combineID[kMaxMUDPointCol];   //[MUDPointCol_]
   Bool_t          MUDPointCol_shouldcombine[kMaxMUDPointCol];   //[MUDPointCol_]
   Int_t           MUDPointCol_pdgID[kMaxMUDPointCol];   //[MUDPointCol_]
   Int_t           MUDPointCol_volID[kMaxMUDPointCol];   //[MUDPointCol_]
   Int_t           MUDPointCol_volInfo[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_stepLength[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_posToStripLength_1st[kMaxMUDPointCol];   //[MUDPointCol_]
   Double_t        MUDPointCol_posToStripLength_2nd[kMaxMUDPointCol];   //[MUDPointCol_]
   Int_t           MUDPointColhS0_;
   Int_t           MUDPointColhS0_index[kMaxMUDPointCol#0];   //[MUDPointCol#0_]
   Int_t           MUDPointColhS0_collectionID[kMaxMUDPointCol#0];   //[MUDPointCol#0_]
   Int_t           DTOFBarHitCol_;
   Int_t           DTOFBarHitCol_type[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Int_t           DTOFBarHitCol_trackID[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   UInt_t          DTOFBarHitCol_eventID[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_momentum_x[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_momentum_y[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_momentum_z[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_energy[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_time[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_length[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_eloss[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Int_t           DTOFBarHitCol_detectorID[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_position_x[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_position_y[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_position_z[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Int_t           DTOFBarHitCol_sectorID[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Double_t        DTOFBarHitCol_mass[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Int_t           DTOFBarHitCol_pdgID[kMaxDTOFBarHitCol];   //[DTOFBarHitCol_]
   Int_t           DTOFBarHitColhS0_;
   Int_t           DTOFBarHitColhS0_index[kMaxDTOFBarHitCol#0];   //[DTOFBarHitCol#0_]
   Int_t           DTOFBarHitColhS0_collectionID[kMaxDTOFBarHitCol#0];   //[DTOFBarHitCol#0_]
   Int_t           DTOFPDHitCol_;
   Int_t           DTOFPDHitCol_type[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_trackID[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_momentum_x[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_momentum_y[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_momentum_z[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_energy[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_time[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_length[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_detectorID[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_position_x[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_position_y[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_position_z[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_sectorID[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_channelX[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_channelY[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitCol_pdgID[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Double_t        DTOFPDHitCol_timeStart[kMaxDTOFPDHitCol];   //[DTOFPDHitCol_]
   Int_t           DTOFPDHitColhS0_;
   Int_t           DTOFPDHitColhS0_index[kMaxDTOFPDHitCol#0];   //[DTOFPDHitCol#0_]
   Int_t           DTOFPDHitColhS0_collectionID[kMaxDTOFPDHitCol#0];   //[DTOFPDHitCol#0_]

   // List of branches
   TBranch        *b_MDCHitCol_;   //!
   TBranch        *b_MDCHitCol_type;   //!
   TBranch        *b_MDCHitCol_dposition_x;   //!
   TBranch        *b_MDCHitCol_dposition_y;   //!
   TBranch        *b_MDCHitCol_dposition_z;   //!
   TBranch        *b_MDCHitCol_detectorID;   //!
   TBranch        *b_MDCHitCol_position_x;   //!
   TBranch        *b_MDCHitCol_position_y;   //!
   TBranch        *b_MDCHitCol_position_z;   //!
   TBranch        *b_MDCHitCol_posIn_x;   //!
   TBranch        *b_MDCHitCol_posIn_y;   //!
   TBranch        *b_MDCHitCol_posIn_z;   //!
   TBranch        *b_MDCHitCol_momIn_x;   //!
   TBranch        *b_MDCHitCol_momIn_y;   //!
   TBranch        *b_MDCHitCol_momIn_z;   //!
   TBranch        *b_MDCHitCol_posOut_x;   //!
   TBranch        *b_MDCHitCol_posOut_y;   //!
   TBranch        *b_MDCHitCol_posOut_z;   //!
   TBranch        *b_MDCHitCol_momOut_x;   //!
   TBranch        *b_MDCHitCol_momOut_y;   //!
   TBranch        *b_MDCHitCol_momOut_z;   //!
   TBranch        *b_MDCHitCol_pocaZ;   //!
   TBranch        *b_MDCHitCol_pdgID;   //!
   TBranch        *b_MDCHitCol_parentID;   //!
   TBranch        *b_MDCHitCol_eventID;   //!
   TBranch        *b_MDCHitCol_trackID;   //!
   TBranch        *b_MDCHitCol_layerID;   //!
   TBranch        *b_MDCHitCol_cellID;   //!
   TBranch        *b_MDCHitCol_priElec;   //!
   TBranch        *b_MDCHitCol_totElec;   //!
   TBranch        *b_MDCHitCol_charge;   //!
   TBranch        *b_MDCHitCol_mass;   //!
   TBranch        *b_MDCHitCol_time;   //!
   TBranch        *b_MDCHitCol_Qmeasurement;   //!
   TBranch        *b_MDCHitCol_TrackLen;   //!
   TBranch        *b_MDCHitCol_TrackLenAll;   //!
   TBranch        *b_MDCHitCol_initialMom_x;   //!
   TBranch        *b_MDCHitCol_initialMom_y;   //!
   TBranch        *b_MDCHitCol_initialMom_z;   //!
   TBranch        *b_MDCHitCol_initialPos_x;   //!
   TBranch        *b_MDCHitCol_initialPos_y;   //!
   TBranch        *b_MDCHitCol_initialPos_z;   //!
   TBranch        *b_MDCHitCol_driftDistance;   //!
   TBranch        *b_MDCHitCol_driftDistanceE;   //!
   TBranch        *b_MDCHitCol_energy;   //!
   TBranch        *b_MDCHitCol_wirePoint1_x;   //!
   TBranch        *b_MDCHitCol_wirePoint1_y;   //!
   TBranch        *b_MDCHitCol_wirePoint1_z;   //!
   TBranch        *b_MDCHitCol_wirePoint2_x;   //!
   TBranch        *b_MDCHitCol_wirePoint2_y;   //!
   TBranch        *b_MDCHitCol_wirePoint2_z;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosX_begin;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosX_end;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosY_begin;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosY_end;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosZ_begin;   //!
   TBranch        *b_MDCHitCol_IonElectronsPosZ_end;   //!
   TBranch        *b_MDCHitCol_IonElectronsTime_begin;   //!
   TBranch        *b_MDCHitCol_IonElectronsTime_end;   //!
   TBranch        *b_MDCHitCol_IonElectronsTimeAfterDrift_begin;   //!
   TBranch        *b_MDCHitCol_IonElectronsTimeAfterDrift_end;   //!
   TBranch        *b_MDCHitCol_0_;   //!
   TBranch        *b_MDCHitCol_0_index;   //!
   TBranch        *b_MDCHitCol_0_collectionID;   //!
   TBranch        *b_MDCHitCol_0;   //!
   TBranch        *b_MDCHitCol_1;   //!
   TBranch        *b_MDCHitCol_2;   //!
   TBranch        *b_MDCHitCol_3;   //!
   TBranch        *b_MDCHitCol_4;   //!
   TBranch        *b_MCParticleCol_;   //!
   TBranch        *b_MCParticleCol_trackID;   //!
   TBranch        *b_MCParticleCol_PDG;   //!
   TBranch        *b_MCParticleCol_generatorStatus;   //!
   TBranch        *b_MCParticleCol_simulatorStatus;   //!
   TBranch        *b_MCParticleCol_type;   //!
   TBranch        *b_MCParticleCol_charge;   //!
   TBranch        *b_MCParticleCol_time;   //!
   TBranch        *b_MCParticleCol_mass;   //!
   TBranch        *b_MCParticleCol_vertex_x;   //!
   TBranch        *b_MCParticleCol_vertex_y;   //!
   TBranch        *b_MCParticleCol_vertex_z;   //!
   TBranch        *b_MCParticleCol_endpoint_x;   //!
   TBranch        *b_MCParticleCol_endpoint_y;   //!
   TBranch        *b_MCParticleCol_endpoint_z;   //!
   TBranch        *b_MCParticleCol_momentum_x;   //!
   TBranch        *b_MCParticleCol_momentum_y;   //!
   TBranch        *b_MCParticleCol_momentum_z;   //!
   TBranch        *b_MCParticleCol_momentumAtEndpoint_x;   //!
   TBranch        *b_MCParticleCol_momentumAtEndpoint_y;   //!
   TBranch        *b_MCParticleCol_momentumAtEndpoint_z;   //!
   TBranch        *b_MCParticleCol_spin_x;   //!
   TBranch        *b_MCParticleCol_spin_y;   //!
   TBranch        *b_MCParticleCol_spin_z;   //!
   TBranch        *b_MCParticleCol_ecalPosition_x;   //!
   TBranch        *b_MCParticleCol_ecalPosition_y;   //!
   TBranch        *b_MCParticleCol_ecalPosition_z;   //!
   TBranch        *b_MCParticleCol_ITKEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_ITKEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_ITKEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_MDCEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_MDCEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_MDCEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_DTOFEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_DTOFEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_DTOFEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_BTOFEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_BTOFEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_BTOFEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_RICHEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_RICHEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_RICHEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_ECALEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_ECALEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_ECALEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_MUDEntryPosition_x;   //!
   TBranch        *b_MCParticleCol_MUDEntryPosition_y;   //!
   TBranch        *b_MCParticleCol_MUDEntryPosition_z;   //!
   TBranch        *b_MCParticleCol_ITKEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_ITKEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_ITKEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_MDCEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_MDCEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_MDCEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_DTOFEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_DTOFEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_DTOFEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_BTOFEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_BTOFEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_BTOFEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_BASHIPHEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_RICHEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_RICHEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_RICHEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_ECALEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_ECALEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_ECALEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_MUDEntryMomentum_x;   //!
   TBranch        *b_MCParticleCol_MUDEntryMomentum_y;   //!
   TBranch        *b_MCParticleCol_MUDEntryMomentum_z;   //!
   TBranch        *b_MCParticleCol_parents_begin;   //!
   TBranch        *b_MCParticleCol_parents_end;   //!
   TBranch        *b_MCParticleCol_daughters_begin;   //!
   TBranch        *b_MCParticleCol_daughters_end;   //!
   TBranch        *b_MCParticleCol_0_;   //!
   TBranch        *b_MCParticleCol_0_index;   //!
   TBranch        *b_MCParticleCol_0_collectionID;   //!
   TBranch        *b_MCParticleCol_1_;   //!
   TBranch        *b_MCParticleCol_1_index;   //!
   TBranch        *b_MCParticleCol_1_collectionID;   //!
   TBranch        *b_EventHeaderCol_;   //!
   TBranch        *b_EventHeaderCol_eventID;   //!
   TBranch        *b_EventHeaderCol_runID;   //!
   TBranch        *b_ITKHitCol_;   //!
   TBranch        *b_ITKHitCol_type;   //!
   TBranch        *b_ITKHitCol_dposition_x;   //!
   TBranch        *b_ITKHitCol_dposition_y;   //!
   TBranch        *b_ITKHitCol_dposition_z;   //!
   TBranch        *b_ITKHitCol_detectorID;   //!
   TBranch        *b_ITKHitCol_position_x;   //!
   TBranch        *b_ITKHitCol_position_y;   //!
   TBranch        *b_ITKHitCol_position_z;   //!
   TBranch        *b_ITKHitCol_momentum_x;   //!
   TBranch        *b_ITKHitCol_momentum_y;   //!
   TBranch        *b_ITKHitCol_momentum_z;   //!
   TBranch        *b_ITKHitCol_positionOut_x;   //!
   TBranch        *b_ITKHitCol_positionOut_y;   //!
   TBranch        *b_ITKHitCol_positionOut_z;   //!
   TBranch        *b_ITKHitCol_momentumOut_x;   //!
   TBranch        *b_ITKHitCol_momentumOut_y;   //!
   TBranch        *b_ITKHitCol_momentumOut_z;   //!
   TBranch        *b_ITKHitCol_pdgID;   //!
   TBranch        *b_ITKHitCol_parentID;   //!
   TBranch        *b_ITKHitCol_eventID;   //!
   TBranch        *b_ITKHitCol_trackID;   //!
   TBranch        *b_ITKHitCol_layerID;   //!
   TBranch        *b_ITKHitCol_ladderID;   //!
   TBranch        *b_ITKHitCol_sectorID;   //!
   TBranch        *b_ITKHitCol_charge;   //!
   TBranch        *b_ITKHitCol_mass;   //!
   TBranch        *b_ITKHitCol_time;   //!
   TBranch        *b_ITKHitCol_initialMom_x;   //!
   TBranch        *b_ITKHitCol_initialMom_y;   //!
   TBranch        *b_ITKHitCol_initialMom_z;   //!
   TBranch        *b_ITKHitCol_initialPos_x;   //!
   TBranch        *b_ITKHitCol_initialPos_y;   //!
   TBranch        *b_ITKHitCol_initialPos_z;   //!
   TBranch        *b_ITKHitCol_uPlane_x;   //!
   TBranch        *b_ITKHitCol_uPlane_y;   //!
   TBranch        *b_ITKHitCol_uPlane_z;   //!
   TBranch        *b_ITKHitCol_vPlane_x;   //!
   TBranch        *b_ITKHitCol_vPlane_y;   //!
   TBranch        *b_ITKHitCol_vPlane_z;   //!
   TBranch        *b_ITKHitCol_planeY;   //!
   TBranch        *b_ITKHitCol_planeX;   //!
   TBranch        *b_ITKHitCol_uPosition_inplane;   //!
   TBranch        *b_ITKHitCol_vPosition_inplane;   //!
   TBranch        *b_ITKHitCol_depositEnergy;   //!
   TBranch        *b_ITKHitCol_priElec;   //!
   TBranch        *b_ITKHitCol_totElec;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosX_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosX_end;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosY_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosY_end;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosZ_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsPosZ_end;   //!
   TBranch        *b_ITKHitCol_IonElectronsTime_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsTime_end;   //!
   TBranch        *b_ITKHitCol_IonElectronsTimeAfterDrift_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsTimeAfterDrift_end;   //!
   TBranch        *b_ITKHitCol_IonElectronsDE_begin;   //!
   TBranch        *b_ITKHitCol_IonElectronsDE_end;   //!
   TBranch        *b_ITKHitCol_0_;   //!
   TBranch        *b_ITKHitCol_0_index;   //!
   TBranch        *b_ITKHitCol_0_collectionID;   //!
   TBranch        *b_ITKHitCol_0;   //!
   TBranch        *b_ITKHitCol_1;   //!
   TBranch        *b_ITKHitCol_2;   //!
   TBranch        *b_ITKHitCol_3;   //!
   TBranch        *b_ITKHitCol_4;   //!
   TBranch        *b_ITKHitCol_5;   //!
   TBranch        *b_ECALHit3Col_;   //!
   TBranch        *b_ECALHit3Col_detectorID;   //!
   TBranch        *b_ECALHit3Col_position_x;   //!
   TBranch        *b_ECALHit3Col_position_y;   //!
   TBranch        *b_ECALHit3Col_position_z;   //!
   TBranch        *b_ECALHit3Col_type;   //!
   TBranch        *b_ECALHit3Col_energy;   //!
   TBranch        *b_ECALHit3Col_time;   //!
   TBranch        *b_ECALHit3Col_crystalID;   //!
   TBranch        *b_ECALHit3Col_layerID;   //!
   TBranch        *b_ECALHit3Col_ecalPoints_begin;   //!
   TBranch        *b_ECALHit3Col_ecalPoints_end;   //!
   TBranch        *b_ECALHit3Col_ecalTPoints_begin;   //!
   TBranch        *b_ECALHit3Col_ecalTPoints_end;   //!
   TBranch        *b_ECALHit3Col_0_;   //!
   TBranch        *b_ECALHit3Col_0_index;   //!
   TBranch        *b_ECALHit3Col_0_collectionID;   //!
   TBranch        *b_ECALHit3Col_1_;   //!
   TBranch        *b_ECALHit3Col_1_index;   //!
   TBranch        *b_ECALHit3Col_1_collectionID;   //!
   TBranch        *b_ECALTPointCol_;   //!
   TBranch        *b_ECALTPointCol_tID;   //!
   TBranch        *b_ECALTPointCol_energy;   //!
   TBranch        *b_BASHIPHBarHitCol_;   //!
   TBranch        *b_BASHIPHBarHitCol_type;   //!
   TBranch        *b_BASHIPHBarHitCol_trackID;   //!
   TBranch        *b_BASHIPHBarHitCol_eventID;   //!
   TBranch        *b_BASHIPHBarHitCol_momentum_x;   //!
   TBranch        *b_BASHIPHBarHitCol_momentum_y;   //!
   TBranch        *b_BASHIPHBarHitCol_momentum_z;   //!
   TBranch        *b_BASHIPHBarHitCol_energy;   //!
   TBranch        *b_BASHIPHBarHitCol_time;   //!
   TBranch        *b_BASHIPHBarHitCol_length;   //!
   TBranch        *b_BASHIPHBarHitCol_eloss;   //!
   TBranch        *b_BASHIPHBarHitCol_detectorID;   //!
   TBranch        *b_BASHIPHBarHitCol_position_x;   //!
   TBranch        *b_BASHIPHBarHitCol_position_y;   //!
   TBranch        *b_BASHIPHBarHitCol_position_z;   //!
   TBranch        *b_BASHIPHBarHitCol_cntID;   //!
   TBranch        *b_BASHIPHBarHitCol_mass;   //!
   TBranch        *b_BASHIPHBarHitCol_pdgID;   //!
   TBranch        *b_BASHIPHBarHitCol_0_;   //!
   TBranch        *b_BASHIPHBarHitCol_0_index;   //!
   TBranch        *b_BASHIPHBarHitCol_0_collectionID;   //!
   TBranch        *b_BASHIPHPDHitCol_;   //!
   TBranch        *b_BASHIPHPDHitCol_type;   //!
   TBranch        *b_BASHIPHPDHitCol_trackID;   //!
   TBranch        *b_BASHIPHPDHitCol_momentum_x;   //!
   TBranch        *b_BASHIPHPDHitCol_momentum_y;   //!
   TBranch        *b_BASHIPHPDHitCol_momentum_z;   //!
   TBranch        *b_BASHIPHPDHitCol_energy;   //!
   TBranch        *b_BASHIPHPDHitCol_time;   //!
   TBranch        *b_BASHIPHPDHitCol_length;   //!
   TBranch        *b_BASHIPHPDHitCol_detectorID;   //!
   TBranch        *b_BASHIPHPDHitCol_position_x;   //!
   TBranch        *b_BASHIPHPDHitCol_position_y;   //!
   TBranch        *b_BASHIPHPDHitCol_position_z;   //!
   TBranch        *b_BASHIPHPDHitCol_cntID;   //!
   TBranch        *b_BASHIPHPDHitCol_pdgID;   //!
   TBranch        *b_BASHIPHPDHitCol_timeStart;   //!
   TBranch        *b_BASHIPHPDHitCol_0_;   //!
   TBranch        *b_BASHIPHPDHitCol_0_index;   //!
   TBranch        *b_BASHIPHPDHitCol_0_collectionID;   //!
   TBranch        *b_BASHIPHInfoCol_;   //!
   TBranch        *b_BASHIPHInfoCol_npe;   //!
   TBranch        *b_BASHIPHInfoCol_mom;   //!
   TBranch        *b_BASHIPHInfoCol_0_;   //!
   TBranch        *b_BASHIPHInfoCol_0_index;   //!
   TBranch        *b_BASHIPHInfoCol_0_collectionID;   //!
   TBranch        *b_MUDPointCol_;   //!
   TBranch        *b_MUDPointCol_trackID;   //!
   TBranch        *b_MUDPointCol_eventIDs;   //!
   TBranch        *b_MUDPointCol_momentum_x;   //!
   TBranch        *b_MUDPointCol_momentum_y;   //!
   TBranch        *b_MUDPointCol_momentum_z;   //!
   TBranch        *b_MUDPointCol_energy;   //!
   TBranch        *b_MUDPointCol_time;   //!
   TBranch        *b_MUDPointCol_eloss;   //!
   TBranch        *b_MUDPointCol_position_x;   //!
   TBranch        *b_MUDPointCol_position_y;   //!
   TBranch        *b_MUDPointCol_position_z;   //!
   TBranch        *b_MUDPointCol_combineID;   //!
   TBranch        *b_MUDPointCol_shouldcombine;   //!
   TBranch        *b_MUDPointCol_pdgID;   //!
   TBranch        *b_MUDPointCol_volID;   //!
   TBranch        *b_MUDPointCol_volInfo;   //!
   TBranch        *b_MUDPointCol_stepLength;   //!
   TBranch        *b_MUDPointCol_posToStripLength_1st;   //!
   TBranch        *b_MUDPointCol_posToStripLength_2nd;   //!
   TBranch        *b_MUDPointCol_0_;   //!
   TBranch        *b_MUDPointCol_0_index;   //!
   TBranch        *b_MUDPointCol_0_collectionID;   //!
   TBranch        *b_DTOFBarHitCol_;   //!
   TBranch        *b_DTOFBarHitCol_type;   //!
   TBranch        *b_DTOFBarHitCol_trackID;   //!
   TBranch        *b_DTOFBarHitCol_eventID;   //!
   TBranch        *b_DTOFBarHitCol_momentum_x;   //!
   TBranch        *b_DTOFBarHitCol_momentum_y;   //!
   TBranch        *b_DTOFBarHitCol_momentum_z;   //!
   TBranch        *b_DTOFBarHitCol_energy;   //!
   TBranch        *b_DTOFBarHitCol_time;   //!
   TBranch        *b_DTOFBarHitCol_length;   //!
   TBranch        *b_DTOFBarHitCol_eloss;   //!
   TBranch        *b_DTOFBarHitCol_detectorID;   //!
   TBranch        *b_DTOFBarHitCol_position_x;   //!
   TBranch        *b_DTOFBarHitCol_position_y;   //!
   TBranch        *b_DTOFBarHitCol_position_z;   //!
   TBranch        *b_DTOFBarHitCol_sectorID;   //!
   TBranch        *b_DTOFBarHitCol_mass;   //!
   TBranch        *b_DTOFBarHitCol_pdgID;   //!
   TBranch        *b_DTOFBarHitCol_0_;   //!
   TBranch        *b_DTOFBarHitCol_0_index;   //!
   TBranch        *b_DTOFBarHitCol_0_collectionID;   //!
   TBranch        *b_DTOFPDHitCol_;   //!
   TBranch        *b_DTOFPDHitCol_type;   //!
   TBranch        *b_DTOFPDHitCol_trackID;   //!
   TBranch        *b_DTOFPDHitCol_momentum_x;   //!
   TBranch        *b_DTOFPDHitCol_momentum_y;   //!
   TBranch        *b_DTOFPDHitCol_momentum_z;   //!
   TBranch        *b_DTOFPDHitCol_energy;   //!
   TBranch        *b_DTOFPDHitCol_time;   //!
   TBranch        *b_DTOFPDHitCol_length;   //!
   TBranch        *b_DTOFPDHitCol_detectorID;   //!
   TBranch        *b_DTOFPDHitCol_position_x;   //!
   TBranch        *b_DTOFPDHitCol_position_y;   //!
   TBranch        *b_DTOFPDHitCol_position_z;   //!
   TBranch        *b_DTOFPDHitCol_sectorID;   //!
   TBranch        *b_DTOFPDHitCol_channelX;   //!
   TBranch        *b_DTOFPDHitCol_channelY;   //!
   TBranch        *b_DTOFPDHitCol_pdgID;   //!
   TBranch        *b_DTOFPDHitCol_timeStart;   //!
   TBranch        *b_DTOFPDHitCol_0_;   //!
   TBranch        *b_DTOFPDHitCol_0_index;   //!
   TBranch        *b_DTOFPDHitCol_0_collectionID;   //!

   events(TTree *tree=0);
   virtual ~events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual bool     Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef events_cxx
events::events(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("112cm/sim_pi-.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("112cm/sim_pi-.root");
      }
      f->GetObject("events",tree);

   }
   Init(tree);
}

events::~events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   MDCHitCol_0 = 0;
   MDCHitCol_1 = 0;
   MDCHitCol_2 = 0;
   MDCHitCol_3 = 0;
   MDCHitCol_4 = 0;
   ITKHitCol_0 = 0;
   ITKHitCol_1 = 0;
   ITKHitCol_2 = 0;
   ITKHitCol_3 = 0;
   ITKHitCol_4 = 0;
   ITKHitCol_5 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("MDCHitCol", &MDCHitCol_, &b_MDCHitCol_);
   fChain->SetBranchAddress("MDCHitCol.type", &MDCHitCol_type, &b_MDCHitCol_type);
   fChain->SetBranchAddress("MDCHitCol.dposition.x", &MDCHitCol_dposition_x, &b_MDCHitCol_dposition_x);
   fChain->SetBranchAddress("MDCHitCol.dposition.y", &MDCHitCol_dposition_y, &b_MDCHitCol_dposition_y);
   fChain->SetBranchAddress("MDCHitCol.dposition.z", &MDCHitCol_dposition_z, &b_MDCHitCol_dposition_z);
   fChain->SetBranchAddress("MDCHitCol.detectorID", &MDCHitCol_detectorID, &b_MDCHitCol_detectorID);
   fChain->SetBranchAddress("MDCHitCol.position.x", &MDCHitCol_position_x, &b_MDCHitCol_position_x);
   fChain->SetBranchAddress("MDCHitCol.position.y", &MDCHitCol_position_y, &b_MDCHitCol_position_y);
   fChain->SetBranchAddress("MDCHitCol.position.z", &MDCHitCol_position_z, &b_MDCHitCol_position_z);
   fChain->SetBranchAddress("MDCHitCol.posIn.x", &MDCHitCol_posIn_x, &b_MDCHitCol_posIn_x);
   fChain->SetBranchAddress("MDCHitCol.posIn.y", &MDCHitCol_posIn_y, &b_MDCHitCol_posIn_y);
   fChain->SetBranchAddress("MDCHitCol.posIn.z", &MDCHitCol_posIn_z, &b_MDCHitCol_posIn_z);
   fChain->SetBranchAddress("MDCHitCol.momIn.x", &MDCHitCol_momIn_x, &b_MDCHitCol_momIn_x);
   fChain->SetBranchAddress("MDCHitCol.momIn.y", &MDCHitCol_momIn_y, &b_MDCHitCol_momIn_y);
   fChain->SetBranchAddress("MDCHitCol.momIn.z", &MDCHitCol_momIn_z, &b_MDCHitCol_momIn_z);
   fChain->SetBranchAddress("MDCHitCol.posOut.x", &MDCHitCol_posOut_x, &b_MDCHitCol_posOut_x);
   fChain->SetBranchAddress("MDCHitCol.posOut.y", &MDCHitCol_posOut_y, &b_MDCHitCol_posOut_y);
   fChain->SetBranchAddress("MDCHitCol.posOut.z", &MDCHitCol_posOut_z, &b_MDCHitCol_posOut_z);
   fChain->SetBranchAddress("MDCHitCol.momOut.x", &MDCHitCol_momOut_x, &b_MDCHitCol_momOut_x);
   fChain->SetBranchAddress("MDCHitCol.momOut.y", &MDCHitCol_momOut_y, &b_MDCHitCol_momOut_y);
   fChain->SetBranchAddress("MDCHitCol.momOut.z", &MDCHitCol_momOut_z, &b_MDCHitCol_momOut_z);
   fChain->SetBranchAddress("MDCHitCol.pocaZ", &MDCHitCol_pocaZ, &b_MDCHitCol_pocaZ);
   fChain->SetBranchAddress("MDCHitCol.pdgID", &MDCHitCol_pdgID, &b_MDCHitCol_pdgID);
   fChain->SetBranchAddress("MDCHitCol.parentID", &MDCHitCol_parentID, &b_MDCHitCol_parentID);
   fChain->SetBranchAddress("MDCHitCol.eventID", &MDCHitCol_eventID, &b_MDCHitCol_eventID);
   fChain->SetBranchAddress("MDCHitCol.trackID", &MDCHitCol_trackID, &b_MDCHitCol_trackID);
   fChain->SetBranchAddress("MDCHitCol.layerID", &MDCHitCol_layerID, &b_MDCHitCol_layerID);
   fChain->SetBranchAddress("MDCHitCol.cellID", &MDCHitCol_cellID, &b_MDCHitCol_cellID);
   fChain->SetBranchAddress("MDCHitCol.priElec", &MDCHitCol_priElec, &b_MDCHitCol_priElec);
   fChain->SetBranchAddress("MDCHitCol.totElec", &MDCHitCol_totElec, &b_MDCHitCol_totElec);
   fChain->SetBranchAddress("MDCHitCol.charge", &MDCHitCol_charge, &b_MDCHitCol_charge);
   fChain->SetBranchAddress("MDCHitCol.mass", &MDCHitCol_mass, &b_MDCHitCol_mass);
   fChain->SetBranchAddress("MDCHitCol.time", &MDCHitCol_time, &b_MDCHitCol_time);
   fChain->SetBranchAddress("MDCHitCol.Qmeasurement", &MDCHitCol_Qmeasurement, &b_MDCHitCol_Qmeasurement);
   fChain->SetBranchAddress("MDCHitCol.TrackLen", &MDCHitCol_TrackLen, &b_MDCHitCol_TrackLen);
   fChain->SetBranchAddress("MDCHitCol.TrackLenAll", &MDCHitCol_TrackLenAll, &b_MDCHitCol_TrackLenAll);
   fChain->SetBranchAddress("MDCHitCol.initialMom.x", &MDCHitCol_initialMom_x, &b_MDCHitCol_initialMom_x);
   fChain->SetBranchAddress("MDCHitCol.initialMom.y", &MDCHitCol_initialMom_y, &b_MDCHitCol_initialMom_y);
   fChain->SetBranchAddress("MDCHitCol.initialMom.z", &MDCHitCol_initialMom_z, &b_MDCHitCol_initialMom_z);
   fChain->SetBranchAddress("MDCHitCol.initialPos.x", &MDCHitCol_initialPos_x, &b_MDCHitCol_initialPos_x);
   fChain->SetBranchAddress("MDCHitCol.initialPos.y", &MDCHitCol_initialPos_y, &b_MDCHitCol_initialPos_y);
   fChain->SetBranchAddress("MDCHitCol.initialPos.z", &MDCHitCol_initialPos_z, &b_MDCHitCol_initialPos_z);
   fChain->SetBranchAddress("MDCHitCol.driftDistance", &MDCHitCol_driftDistance, &b_MDCHitCol_driftDistance);
   fChain->SetBranchAddress("MDCHitCol.driftDistanceE", &MDCHitCol_driftDistanceE, &b_MDCHitCol_driftDistanceE);
   fChain->SetBranchAddress("MDCHitCol.energy", &MDCHitCol_energy, &b_MDCHitCol_energy);
   fChain->SetBranchAddress("MDCHitCol.wirePoint1.x", &MDCHitCol_wirePoint1_x, &b_MDCHitCol_wirePoint1_x);
   fChain->SetBranchAddress("MDCHitCol.wirePoint1.y", &MDCHitCol_wirePoint1_y, &b_MDCHitCol_wirePoint1_y);
   fChain->SetBranchAddress("MDCHitCol.wirePoint1.z", &MDCHitCol_wirePoint1_z, &b_MDCHitCol_wirePoint1_z);
   fChain->SetBranchAddress("MDCHitCol.wirePoint2.x", &MDCHitCol_wirePoint2_x, &b_MDCHitCol_wirePoint2_x);
   fChain->SetBranchAddress("MDCHitCol.wirePoint2.y", &MDCHitCol_wirePoint2_y, &b_MDCHitCol_wirePoint2_y);
   fChain->SetBranchAddress("MDCHitCol.wirePoint2.z", &MDCHitCol_wirePoint2_z, &b_MDCHitCol_wirePoint2_z);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosX_begin", &MDCHitCol_IonElectronsPosX_begin, &b_MDCHitCol_IonElectronsPosX_begin);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosX_end", &MDCHitCol_IonElectronsPosX_end, &b_MDCHitCol_IonElectronsPosX_end);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosY_begin", &MDCHitCol_IonElectronsPosY_begin, &b_MDCHitCol_IonElectronsPosY_begin);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosY_end", &MDCHitCol_IonElectronsPosY_end, &b_MDCHitCol_IonElectronsPosY_end);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosZ_begin", &MDCHitCol_IonElectronsPosZ_begin, &b_MDCHitCol_IonElectronsPosZ_begin);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsPosZ_end", &MDCHitCol_IonElectronsPosZ_end, &b_MDCHitCol_IonElectronsPosZ_end);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsTime_begin", &MDCHitCol_IonElectronsTime_begin, &b_MDCHitCol_IonElectronsTime_begin);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsTime_end", &MDCHitCol_IonElectronsTime_end, &b_MDCHitCol_IonElectronsTime_end);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsTimeAfterDrift_begin", &MDCHitCol_IonElectronsTimeAfterDrift_begin, &b_MDCHitCol_IonElectronsTimeAfterDrift_begin);
   fChain->SetBranchAddress("MDCHitCol.IonElectronsTimeAfterDrift_end", &MDCHitCol_IonElectronsTimeAfterDrift_end, &b_MDCHitCol_IonElectronsTimeAfterDrift_end);
   fChain->SetBranchAddress("MDCHitCol#0", &MDCHitColhS0_, &b_MDCHitCol_0_);
   fChain->SetBranchAddress("MDCHitCol#0.index", &MDCHitColhS0_index, &b_MDCHitCol_0_index);
   fChain->SetBranchAddress("MDCHitCol#0.collectionID", &MDCHitColhS0_collectionID, &b_MDCHitCol_0_collectionID);
   fChain->SetBranchAddress("MDCHitCol_0", &MDCHitCol_0, &b_MDCHitCol_0);
   fChain->SetBranchAddress("MDCHitCol_1", &MDCHitCol_1, &b_MDCHitCol_1);
   fChain->SetBranchAddress("MDCHitCol_2", &MDCHitCol_2, &b_MDCHitCol_2);
   fChain->SetBranchAddress("MDCHitCol_3", &MDCHitCol_3, &b_MDCHitCol_3);
   fChain->SetBranchAddress("MDCHitCol_4", &MDCHitCol_4, &b_MDCHitCol_4);
   fChain->SetBranchAddress("MCParticleCol", &MCParticleCol_, &b_MCParticleCol_);
   fChain->SetBranchAddress("MCParticleCol.trackID", MCParticleCol_trackID, &b_MCParticleCol_trackID);
   fChain->SetBranchAddress("MCParticleCol.PDG", MCParticleCol_PDG, &b_MCParticleCol_PDG);
   fChain->SetBranchAddress("MCParticleCol.generatorStatus", MCParticleCol_generatorStatus, &b_MCParticleCol_generatorStatus);
   fChain->SetBranchAddress("MCParticleCol.simulatorStatus", MCParticleCol_simulatorStatus, &b_MCParticleCol_simulatorStatus);
   fChain->SetBranchAddress("MCParticleCol.type", MCParticleCol_type, &b_MCParticleCol_type);
   fChain->SetBranchAddress("MCParticleCol.charge", MCParticleCol_charge, &b_MCParticleCol_charge);
   fChain->SetBranchAddress("MCParticleCol.time", MCParticleCol_time, &b_MCParticleCol_time);
   fChain->SetBranchAddress("MCParticleCol.mass", MCParticleCol_mass, &b_MCParticleCol_mass);
   fChain->SetBranchAddress("MCParticleCol.vertex.x", MCParticleCol_vertex_x, &b_MCParticleCol_vertex_x);
   fChain->SetBranchAddress("MCParticleCol.vertex.y", MCParticleCol_vertex_y, &b_MCParticleCol_vertex_y);
   fChain->SetBranchAddress("MCParticleCol.vertex.z", MCParticleCol_vertex_z, &b_MCParticleCol_vertex_z);
   fChain->SetBranchAddress("MCParticleCol.endpoint.x", MCParticleCol_endpoint_x, &b_MCParticleCol_endpoint_x);
   fChain->SetBranchAddress("MCParticleCol.endpoint.y", MCParticleCol_endpoint_y, &b_MCParticleCol_endpoint_y);
   fChain->SetBranchAddress("MCParticleCol.endpoint.z", MCParticleCol_endpoint_z, &b_MCParticleCol_endpoint_z);
   fChain->SetBranchAddress("MCParticleCol.momentum.x", MCParticleCol_momentum_x, &b_MCParticleCol_momentum_x);
   fChain->SetBranchAddress("MCParticleCol.momentum.y", MCParticleCol_momentum_y, &b_MCParticleCol_momentum_y);
   fChain->SetBranchAddress("MCParticleCol.momentum.z", MCParticleCol_momentum_z, &b_MCParticleCol_momentum_z);
   fChain->SetBranchAddress("MCParticleCol.momentumAtEndpoint.x", MCParticleCol_momentumAtEndpoint_x, &b_MCParticleCol_momentumAtEndpoint_x);
   fChain->SetBranchAddress("MCParticleCol.momentumAtEndpoint.y", MCParticleCol_momentumAtEndpoint_y, &b_MCParticleCol_momentumAtEndpoint_y);
   fChain->SetBranchAddress("MCParticleCol.momentumAtEndpoint.z", MCParticleCol_momentumAtEndpoint_z, &b_MCParticleCol_momentumAtEndpoint_z);
   fChain->SetBranchAddress("MCParticleCol.spin.x", MCParticleCol_spin_x, &b_MCParticleCol_spin_x);
   fChain->SetBranchAddress("MCParticleCol.spin.y", MCParticleCol_spin_y, &b_MCParticleCol_spin_y);
   fChain->SetBranchAddress("MCParticleCol.spin.z", MCParticleCol_spin_z, &b_MCParticleCol_spin_z);
   fChain->SetBranchAddress("MCParticleCol.ecalPosition.x", MCParticleCol_ecalPosition_x, &b_MCParticleCol_ecalPosition_x);
   fChain->SetBranchAddress("MCParticleCol.ecalPosition.y", MCParticleCol_ecalPosition_y, &b_MCParticleCol_ecalPosition_y);
   fChain->SetBranchAddress("MCParticleCol.ecalPosition.z", MCParticleCol_ecalPosition_z, &b_MCParticleCol_ecalPosition_z);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryPosition.x", MCParticleCol_ITKEntryPosition_x, &b_MCParticleCol_ITKEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryPosition.y", MCParticleCol_ITKEntryPosition_y, &b_MCParticleCol_ITKEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryPosition.z", MCParticleCol_ITKEntryPosition_z, &b_MCParticleCol_ITKEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryPosition.x", MCParticleCol_MDCEntryPosition_x, &b_MCParticleCol_MDCEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryPosition.y", MCParticleCol_MDCEntryPosition_y, &b_MCParticleCol_MDCEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryPosition.z", MCParticleCol_MDCEntryPosition_z, &b_MCParticleCol_MDCEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryPosition.x", MCParticleCol_DTOFEntryPosition_x, &b_MCParticleCol_DTOFEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryPosition.y", MCParticleCol_DTOFEntryPosition_y, &b_MCParticleCol_DTOFEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryPosition.z", MCParticleCol_DTOFEntryPosition_z, &b_MCParticleCol_DTOFEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryPosition.x", MCParticleCol_BTOFEntryPosition_x, &b_MCParticleCol_BTOFEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryPosition.y", MCParticleCol_BTOFEntryPosition_y, &b_MCParticleCol_BTOFEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryPosition.z", MCParticleCol_BTOFEntryPosition_z, &b_MCParticleCol_BTOFEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryPosition.x", MCParticleCol_BASHIPHEntryPosition_x, &b_MCParticleCol_BASHIPHEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryPosition.y", MCParticleCol_BASHIPHEntryPosition_y, &b_MCParticleCol_BASHIPHEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryPosition.z", MCParticleCol_BASHIPHEntryPosition_z, &b_MCParticleCol_BASHIPHEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryPosition.x", MCParticleCol_RICHEntryPosition_x, &b_MCParticleCol_RICHEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryPosition.y", MCParticleCol_RICHEntryPosition_y, &b_MCParticleCol_RICHEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryPosition.z", MCParticleCol_RICHEntryPosition_z, &b_MCParticleCol_RICHEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryPosition.x", MCParticleCol_ECALEntryPosition_x, &b_MCParticleCol_ECALEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryPosition.y", MCParticleCol_ECALEntryPosition_y, &b_MCParticleCol_ECALEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryPosition.z", MCParticleCol_ECALEntryPosition_z, &b_MCParticleCol_ECALEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryPosition.x", MCParticleCol_MUDEntryPosition_x, &b_MCParticleCol_MUDEntryPosition_x);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryPosition.y", MCParticleCol_MUDEntryPosition_y, &b_MCParticleCol_MUDEntryPosition_y);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryPosition.z", MCParticleCol_MUDEntryPosition_z, &b_MCParticleCol_MUDEntryPosition_z);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryMomentum.x", MCParticleCol_ITKEntryMomentum_x, &b_MCParticleCol_ITKEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryMomentum.y", MCParticleCol_ITKEntryMomentum_y, &b_MCParticleCol_ITKEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.ITKEntryMomentum.z", MCParticleCol_ITKEntryMomentum_z, &b_MCParticleCol_ITKEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryMomentum.x", MCParticleCol_MDCEntryMomentum_x, &b_MCParticleCol_MDCEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryMomentum.y", MCParticleCol_MDCEntryMomentum_y, &b_MCParticleCol_MDCEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.MDCEntryMomentum.z", MCParticleCol_MDCEntryMomentum_z, &b_MCParticleCol_MDCEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryMomentum.x", MCParticleCol_DTOFEntryMomentum_x, &b_MCParticleCol_DTOFEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryMomentum.y", MCParticleCol_DTOFEntryMomentum_y, &b_MCParticleCol_DTOFEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.DTOFEntryMomentum.z", MCParticleCol_DTOFEntryMomentum_z, &b_MCParticleCol_DTOFEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryMomentum.x", MCParticleCol_BTOFEntryMomentum_x, &b_MCParticleCol_BTOFEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryMomentum.y", MCParticleCol_BTOFEntryMomentum_y, &b_MCParticleCol_BTOFEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.BTOFEntryMomentum.z", MCParticleCol_BTOFEntryMomentum_z, &b_MCParticleCol_BTOFEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryMomentum.x", MCParticleCol_BASHIPHEntryMomentum_x, &b_MCParticleCol_BASHIPHEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryMomentum.y", MCParticleCol_BASHIPHEntryMomentum_y, &b_MCParticleCol_BASHIPHEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.BASHIPHEntryMomentum.z", MCParticleCol_BASHIPHEntryMomentum_z, &b_MCParticleCol_BASHIPHEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryMomentum.x", MCParticleCol_RICHEntryMomentum_x, &b_MCParticleCol_RICHEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryMomentum.y", MCParticleCol_RICHEntryMomentum_y, &b_MCParticleCol_RICHEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.RICHEntryMomentum.z", MCParticleCol_RICHEntryMomentum_z, &b_MCParticleCol_RICHEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryMomentum.x", MCParticleCol_ECALEntryMomentum_x, &b_MCParticleCol_ECALEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryMomentum.y", MCParticleCol_ECALEntryMomentum_y, &b_MCParticleCol_ECALEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.ECALEntryMomentum.z", MCParticleCol_ECALEntryMomentum_z, &b_MCParticleCol_ECALEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryMomentum.x", MCParticleCol_MUDEntryMomentum_x, &b_MCParticleCol_MUDEntryMomentum_x);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryMomentum.y", MCParticleCol_MUDEntryMomentum_y, &b_MCParticleCol_MUDEntryMomentum_y);
   fChain->SetBranchAddress("MCParticleCol.MUDEntryMomentum.z", MCParticleCol_MUDEntryMomentum_z, &b_MCParticleCol_MUDEntryMomentum_z);
   fChain->SetBranchAddress("MCParticleCol.parents_begin", MCParticleCol_parents_begin, &b_MCParticleCol_parents_begin);
   fChain->SetBranchAddress("MCParticleCol.parents_end", MCParticleCol_parents_end, &b_MCParticleCol_parents_end);
   fChain->SetBranchAddress("MCParticleCol.daughters_begin", MCParticleCol_daughters_begin, &b_MCParticleCol_daughters_begin);
   fChain->SetBranchAddress("MCParticleCol.daughters_end", MCParticleCol_daughters_end, &b_MCParticleCol_daughters_end);
   fChain->SetBranchAddress("MCParticleCol#0", &MCParticleColhS0_, &b_MCParticleCol_0_);
   fChain->SetBranchAddress("MCParticleCol#0.index", MCParticleColhS0_index, &b_MCParticleCol_0_index);
   fChain->SetBranchAddress("MCParticleCol#0.collectionID", MCParticleColhS0_collectionID, &b_MCParticleCol_0_collectionID);
   fChain->SetBranchAddress("MCParticleCol#1", &MCParticleColhS1_, &b_MCParticleCol_1_);
   fChain->SetBranchAddress("MCParticleCol#1.index", MCParticleColhS1_index, &b_MCParticleCol_1_index);
   fChain->SetBranchAddress("MCParticleCol#1.collectionID", MCParticleColhS1_collectionID, &b_MCParticleCol_1_collectionID);
   fChain->SetBranchAddress("EventHeaderCol", &EventHeaderCol_, &b_EventHeaderCol_);
   fChain->SetBranchAddress("EventHeaderCol.eventID", EventHeaderCol_eventID, &b_EventHeaderCol_eventID);
   fChain->SetBranchAddress("EventHeaderCol.runID", EventHeaderCol_runID, &b_EventHeaderCol_runID);
   fChain->SetBranchAddress("ITKHitCol", &ITKHitCol_, &b_ITKHitCol_);
   fChain->SetBranchAddress("ITKHitCol.type", &ITKHitCol_type, &b_ITKHitCol_type);
   fChain->SetBranchAddress("ITKHitCol.dposition.x", &ITKHitCol_dposition_x, &b_ITKHitCol_dposition_x);
   fChain->SetBranchAddress("ITKHitCol.dposition.y", &ITKHitCol_dposition_y, &b_ITKHitCol_dposition_y);
   fChain->SetBranchAddress("ITKHitCol.dposition.z", &ITKHitCol_dposition_z, &b_ITKHitCol_dposition_z);
   fChain->SetBranchAddress("ITKHitCol.detectorID", &ITKHitCol_detectorID, &b_ITKHitCol_detectorID);
   fChain->SetBranchAddress("ITKHitCol.position.x", &ITKHitCol_position_x, &b_ITKHitCol_position_x);
   fChain->SetBranchAddress("ITKHitCol.position.y", &ITKHitCol_position_y, &b_ITKHitCol_position_y);
   fChain->SetBranchAddress("ITKHitCol.position.z", &ITKHitCol_position_z, &b_ITKHitCol_position_z);
   fChain->SetBranchAddress("ITKHitCol.momentum.x", &ITKHitCol_momentum_x, &b_ITKHitCol_momentum_x);
   fChain->SetBranchAddress("ITKHitCol.momentum.y", &ITKHitCol_momentum_y, &b_ITKHitCol_momentum_y);
   fChain->SetBranchAddress("ITKHitCol.momentum.z", &ITKHitCol_momentum_z, &b_ITKHitCol_momentum_z);
   fChain->SetBranchAddress("ITKHitCol.positionOut.x", &ITKHitCol_positionOut_x, &b_ITKHitCol_positionOut_x);
   fChain->SetBranchAddress("ITKHitCol.positionOut.y", &ITKHitCol_positionOut_y, &b_ITKHitCol_positionOut_y);
   fChain->SetBranchAddress("ITKHitCol.positionOut.z", &ITKHitCol_positionOut_z, &b_ITKHitCol_positionOut_z);
   fChain->SetBranchAddress("ITKHitCol.momentumOut.x", &ITKHitCol_momentumOut_x, &b_ITKHitCol_momentumOut_x);
   fChain->SetBranchAddress("ITKHitCol.momentumOut.y", &ITKHitCol_momentumOut_y, &b_ITKHitCol_momentumOut_y);
   fChain->SetBranchAddress("ITKHitCol.momentumOut.z", &ITKHitCol_momentumOut_z, &b_ITKHitCol_momentumOut_z);
   fChain->SetBranchAddress("ITKHitCol.pdgID", &ITKHitCol_pdgID, &b_ITKHitCol_pdgID);
   fChain->SetBranchAddress("ITKHitCol.parentID", &ITKHitCol_parentID, &b_ITKHitCol_parentID);
   fChain->SetBranchAddress("ITKHitCol.eventID", &ITKHitCol_eventID, &b_ITKHitCol_eventID);
   fChain->SetBranchAddress("ITKHitCol.trackID", &ITKHitCol_trackID, &b_ITKHitCol_trackID);
   fChain->SetBranchAddress("ITKHitCol.layerID", &ITKHitCol_layerID, &b_ITKHitCol_layerID);
   fChain->SetBranchAddress("ITKHitCol.ladderID", &ITKHitCol_ladderID, &b_ITKHitCol_ladderID);
   fChain->SetBranchAddress("ITKHitCol.sectorID", &ITKHitCol_sectorID, &b_ITKHitCol_sectorID);
   fChain->SetBranchAddress("ITKHitCol.charge", &ITKHitCol_charge, &b_ITKHitCol_charge);
   fChain->SetBranchAddress("ITKHitCol.mass", &ITKHitCol_mass, &b_ITKHitCol_mass);
   fChain->SetBranchAddress("ITKHitCol.time", &ITKHitCol_time, &b_ITKHitCol_time);
   fChain->SetBranchAddress("ITKHitCol.initialMom.x", &ITKHitCol_initialMom_x, &b_ITKHitCol_initialMom_x);
   fChain->SetBranchAddress("ITKHitCol.initialMom.y", &ITKHitCol_initialMom_y, &b_ITKHitCol_initialMom_y);
   fChain->SetBranchAddress("ITKHitCol.initialMom.z", &ITKHitCol_initialMom_z, &b_ITKHitCol_initialMom_z);
   fChain->SetBranchAddress("ITKHitCol.initialPos.x", &ITKHitCol_initialPos_x, &b_ITKHitCol_initialPos_x);
   fChain->SetBranchAddress("ITKHitCol.initialPos.y", &ITKHitCol_initialPos_y, &b_ITKHitCol_initialPos_y);
   fChain->SetBranchAddress("ITKHitCol.initialPos.z", &ITKHitCol_initialPos_z, &b_ITKHitCol_initialPos_z);
   fChain->SetBranchAddress("ITKHitCol.uPlane.x", &ITKHitCol_uPlane_x, &b_ITKHitCol_uPlane_x);
   fChain->SetBranchAddress("ITKHitCol.uPlane.y", &ITKHitCol_uPlane_y, &b_ITKHitCol_uPlane_y);
   fChain->SetBranchAddress("ITKHitCol.uPlane.z", &ITKHitCol_uPlane_z, &b_ITKHitCol_uPlane_z);
   fChain->SetBranchAddress("ITKHitCol.vPlane.x", &ITKHitCol_vPlane_x, &b_ITKHitCol_vPlane_x);
   fChain->SetBranchAddress("ITKHitCol.vPlane.y", &ITKHitCol_vPlane_y, &b_ITKHitCol_vPlane_y);
   fChain->SetBranchAddress("ITKHitCol.vPlane.z", &ITKHitCol_vPlane_z, &b_ITKHitCol_vPlane_z);
   fChain->SetBranchAddress("ITKHitCol.planeY", &ITKHitCol_planeY, &b_ITKHitCol_planeY);
   fChain->SetBranchAddress("ITKHitCol.planeX", &ITKHitCol_planeX, &b_ITKHitCol_planeX);
   fChain->SetBranchAddress("ITKHitCol.uPosition_inplane", &ITKHitCol_uPosition_inplane, &b_ITKHitCol_uPosition_inplane);
   fChain->SetBranchAddress("ITKHitCol.vPosition_inplane", &ITKHitCol_vPosition_inplane, &b_ITKHitCol_vPosition_inplane);
   fChain->SetBranchAddress("ITKHitCol.depositEnergy", &ITKHitCol_depositEnergy, &b_ITKHitCol_depositEnergy);
   fChain->SetBranchAddress("ITKHitCol.priElec", &ITKHitCol_priElec, &b_ITKHitCol_priElec);
   fChain->SetBranchAddress("ITKHitCol.totElec", &ITKHitCol_totElec, &b_ITKHitCol_totElec);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosX_begin", &ITKHitCol_IonElectronsPosX_begin, &b_ITKHitCol_IonElectronsPosX_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosX_end", &ITKHitCol_IonElectronsPosX_end, &b_ITKHitCol_IonElectronsPosX_end);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosY_begin", &ITKHitCol_IonElectronsPosY_begin, &b_ITKHitCol_IonElectronsPosY_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosY_end", &ITKHitCol_IonElectronsPosY_end, &b_ITKHitCol_IonElectronsPosY_end);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosZ_begin", &ITKHitCol_IonElectronsPosZ_begin, &b_ITKHitCol_IonElectronsPosZ_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsPosZ_end", &ITKHitCol_IonElectronsPosZ_end, &b_ITKHitCol_IonElectronsPosZ_end);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsTime_begin", &ITKHitCol_IonElectronsTime_begin, &b_ITKHitCol_IonElectronsTime_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsTime_end", &ITKHitCol_IonElectronsTime_end, &b_ITKHitCol_IonElectronsTime_end);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsTimeAfterDrift_begin", &ITKHitCol_IonElectronsTimeAfterDrift_begin, &b_ITKHitCol_IonElectronsTimeAfterDrift_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsTimeAfterDrift_end", &ITKHitCol_IonElectronsTimeAfterDrift_end, &b_ITKHitCol_IonElectronsTimeAfterDrift_end);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsDE_begin", &ITKHitCol_IonElectronsDE_begin, &b_ITKHitCol_IonElectronsDE_begin);
   fChain->SetBranchAddress("ITKHitCol.IonElectronsDE_end", &ITKHitCol_IonElectronsDE_end, &b_ITKHitCol_IonElectronsDE_end);
   fChain->SetBranchAddress("ITKHitCol#0", &ITKHitColhS0_, &b_ITKHitCol_0_);
   fChain->SetBranchAddress("ITKHitCol#0.index", &ITKHitColhS0_index, &b_ITKHitCol_0_index);
   fChain->SetBranchAddress("ITKHitCol#0.collectionID", &ITKHitColhS0_collectionID, &b_ITKHitCol_0_collectionID);
   fChain->SetBranchAddress("ITKHitCol_0", &ITKHitCol_0, &b_ITKHitCol_0);
   fChain->SetBranchAddress("ITKHitCol_1", &ITKHitCol_1, &b_ITKHitCol_1);
   fChain->SetBranchAddress("ITKHitCol_2", &ITKHitCol_2, &b_ITKHitCol_2);
   fChain->SetBranchAddress("ITKHitCol_3", &ITKHitCol_3, &b_ITKHitCol_3);
   fChain->SetBranchAddress("ITKHitCol_4", &ITKHitCol_4, &b_ITKHitCol_4);
   fChain->SetBranchAddress("ITKHitCol_5", &ITKHitCol_5, &b_ITKHitCol_5);
   fChain->SetBranchAddress("ECALHit3Col", &ECALHit3Col_, &b_ECALHit3Col_);
   fChain->SetBranchAddress("ECALHit3Col.detectorID", &ECALHit3Col_detectorID, &b_ECALHit3Col_detectorID);
   fChain->SetBranchAddress("ECALHit3Col.position.x", &ECALHit3Col_position_x, &b_ECALHit3Col_position_x);
   fChain->SetBranchAddress("ECALHit3Col.position.y", &ECALHit3Col_position_y, &b_ECALHit3Col_position_y);
   fChain->SetBranchAddress("ECALHit3Col.position.z", &ECALHit3Col_position_z, &b_ECALHit3Col_position_z);
   fChain->SetBranchAddress("ECALHit3Col.type", &ECALHit3Col_type, &b_ECALHit3Col_type);
   fChain->SetBranchAddress("ECALHit3Col.energy", &ECALHit3Col_energy, &b_ECALHit3Col_energy);
   fChain->SetBranchAddress("ECALHit3Col.time", &ECALHit3Col_time, &b_ECALHit3Col_time);
   fChain->SetBranchAddress("ECALHit3Col.crystalID", &ECALHit3Col_crystalID, &b_ECALHit3Col_crystalID);
   fChain->SetBranchAddress("ECALHit3Col.layerID", &ECALHit3Col_layerID, &b_ECALHit3Col_layerID);
   fChain->SetBranchAddress("ECALHit3Col.ecalPoints_begin", &ECALHit3Col_ecalPoints_begin, &b_ECALHit3Col_ecalPoints_begin);
   fChain->SetBranchAddress("ECALHit3Col.ecalPoints_end", &ECALHit3Col_ecalPoints_end, &b_ECALHit3Col_ecalPoints_end);
   fChain->SetBranchAddress("ECALHit3Col.ecalTPoints_begin", &ECALHit3Col_ecalTPoints_begin, &b_ECALHit3Col_ecalTPoints_begin);
   fChain->SetBranchAddress("ECALHit3Col.ecalTPoints_end", &ECALHit3Col_ecalTPoints_end, &b_ECALHit3Col_ecalTPoints_end);
   fChain->SetBranchAddress("ECALHit3Col#0", &ECALHit3ColhS0_, &b_ECALHit3Col_0_);
   fChain->SetBranchAddress("ECALHit3Col#0.index", &ECALHit3ColhS0_index, &b_ECALHit3Col_0_index);
   fChain->SetBranchAddress("ECALHit3Col#0.collectionID", &ECALHit3ColhS0_collectionID, &b_ECALHit3Col_0_collectionID);
   fChain->SetBranchAddress("ECALHit3Col#1", &ECALHit3ColhS1_, &b_ECALHit3Col_1_);
   fChain->SetBranchAddress("ECALHit3Col#1.index", &ECALHit3ColhS1_index, &b_ECALHit3Col_1_index);
   fChain->SetBranchAddress("ECALHit3Col#1.collectionID", &ECALHit3ColhS1_collectionID, &b_ECALHit3Col_1_collectionID);
   fChain->SetBranchAddress("ECALTPointCol", &ECALTPointCol_, &b_ECALTPointCol_);
   fChain->SetBranchAddress("ECALTPointCol.tID", &ECALTPointCol_tID, &b_ECALTPointCol_tID);
   fChain->SetBranchAddress("ECALTPointCol.energy", &ECALTPointCol_energy, &b_ECALTPointCol_energy);
   fChain->SetBranchAddress("BASHIPHBarHitCol", &BASHIPHBarHitCol_, &b_BASHIPHBarHitCol_);
   fChain->SetBranchAddress("BASHIPHBarHitCol.type", BASHIPHBarHitCol_type, &b_BASHIPHBarHitCol_type);
   fChain->SetBranchAddress("BASHIPHBarHitCol.trackID", BASHIPHBarHitCol_trackID, &b_BASHIPHBarHitCol_trackID);
   fChain->SetBranchAddress("BASHIPHBarHitCol.eventID", BASHIPHBarHitCol_eventID, &b_BASHIPHBarHitCol_eventID);
   fChain->SetBranchAddress("BASHIPHBarHitCol.momentum.x", BASHIPHBarHitCol_momentum_x, &b_BASHIPHBarHitCol_momentum_x);
   fChain->SetBranchAddress("BASHIPHBarHitCol.momentum.y", BASHIPHBarHitCol_momentum_y, &b_BASHIPHBarHitCol_momentum_y);
   fChain->SetBranchAddress("BASHIPHBarHitCol.momentum.z", BASHIPHBarHitCol_momentum_z, &b_BASHIPHBarHitCol_momentum_z);
   fChain->SetBranchAddress("BASHIPHBarHitCol.energy", BASHIPHBarHitCol_energy, &b_BASHIPHBarHitCol_energy);
   fChain->SetBranchAddress("BASHIPHBarHitCol.time", BASHIPHBarHitCol_time, &b_BASHIPHBarHitCol_time);
   fChain->SetBranchAddress("BASHIPHBarHitCol.length", BASHIPHBarHitCol_length, &b_BASHIPHBarHitCol_length);
   fChain->SetBranchAddress("BASHIPHBarHitCol.eloss", BASHIPHBarHitCol_eloss, &b_BASHIPHBarHitCol_eloss);
   fChain->SetBranchAddress("BASHIPHBarHitCol.detectorID", BASHIPHBarHitCol_detectorID, &b_BASHIPHBarHitCol_detectorID);
   fChain->SetBranchAddress("BASHIPHBarHitCol.position.x", BASHIPHBarHitCol_position_x, &b_BASHIPHBarHitCol_position_x);
   fChain->SetBranchAddress("BASHIPHBarHitCol.position.y", BASHIPHBarHitCol_position_y, &b_BASHIPHBarHitCol_position_y);
   fChain->SetBranchAddress("BASHIPHBarHitCol.position.z", BASHIPHBarHitCol_position_z, &b_BASHIPHBarHitCol_position_z);
   fChain->SetBranchAddress("BASHIPHBarHitCol.cntID", BASHIPHBarHitCol_cntID, &b_BASHIPHBarHitCol_cntID);
   fChain->SetBranchAddress("BASHIPHBarHitCol.mass", BASHIPHBarHitCol_mass, &b_BASHIPHBarHitCol_mass);
   fChain->SetBranchAddress("BASHIPHBarHitCol.pdgID", BASHIPHBarHitCol_pdgID, &b_BASHIPHBarHitCol_pdgID);
   fChain->SetBranchAddress("BASHIPHBarHitCol#0", &BASHIPHBarHitColhS0_, &b_BASHIPHBarHitCol_0_);
   fChain->SetBranchAddress("BASHIPHBarHitCol#0.index", BASHIPHBarHitColhS0_index, &b_BASHIPHBarHitCol_0_index);
   fChain->SetBranchAddress("BASHIPHBarHitCol#0.collectionID", BASHIPHBarHitColhS0_collectionID, &b_BASHIPHBarHitCol_0_collectionID);
   fChain->SetBranchAddress("BASHIPHPDHitCol", &BASHIPHPDHitCol_, &b_BASHIPHPDHitCol_);
   fChain->SetBranchAddress("BASHIPHPDHitCol.type", BASHIPHPDHitCol_type, &b_BASHIPHPDHitCol_type);
   fChain->SetBranchAddress("BASHIPHPDHitCol.trackID", BASHIPHPDHitCol_trackID, &b_BASHIPHPDHitCol_trackID);
   fChain->SetBranchAddress("BASHIPHPDHitCol.momentum.x", BASHIPHPDHitCol_momentum_x, &b_BASHIPHPDHitCol_momentum_x);
   fChain->SetBranchAddress("BASHIPHPDHitCol.momentum.y", BASHIPHPDHitCol_momentum_y, &b_BASHIPHPDHitCol_momentum_y);
   fChain->SetBranchAddress("BASHIPHPDHitCol.momentum.z", BASHIPHPDHitCol_momentum_z, &b_BASHIPHPDHitCol_momentum_z);
   fChain->SetBranchAddress("BASHIPHPDHitCol.energy", BASHIPHPDHitCol_energy, &b_BASHIPHPDHitCol_energy);
   fChain->SetBranchAddress("BASHIPHPDHitCol.time", BASHIPHPDHitCol_time, &b_BASHIPHPDHitCol_time);
   fChain->SetBranchAddress("BASHIPHPDHitCol.length", BASHIPHPDHitCol_length, &b_BASHIPHPDHitCol_length);
   fChain->SetBranchAddress("BASHIPHPDHitCol.detectorID", BASHIPHPDHitCol_detectorID, &b_BASHIPHPDHitCol_detectorID);
   fChain->SetBranchAddress("BASHIPHPDHitCol.position.x", BASHIPHPDHitCol_position_x, &b_BASHIPHPDHitCol_position_x);
   fChain->SetBranchAddress("BASHIPHPDHitCol.position.y", BASHIPHPDHitCol_position_y, &b_BASHIPHPDHitCol_position_y);
   fChain->SetBranchAddress("BASHIPHPDHitCol.position.z", BASHIPHPDHitCol_position_z, &b_BASHIPHPDHitCol_position_z);
   fChain->SetBranchAddress("BASHIPHPDHitCol.cntID", BASHIPHPDHitCol_cntID, &b_BASHIPHPDHitCol_cntID);
   fChain->SetBranchAddress("BASHIPHPDHitCol.pdgID", BASHIPHPDHitCol_pdgID, &b_BASHIPHPDHitCol_pdgID);
   fChain->SetBranchAddress("BASHIPHPDHitCol.timeStart", BASHIPHPDHitCol_timeStart, &b_BASHIPHPDHitCol_timeStart);
   fChain->SetBranchAddress("BASHIPHPDHitCol#0", &BASHIPHPDHitColhS0_, &b_BASHIPHPDHitCol_0_);
   fChain->SetBranchAddress("BASHIPHPDHitCol#0.index", BASHIPHPDHitColhS0_index, &b_BASHIPHPDHitCol_0_index);
   fChain->SetBranchAddress("BASHIPHPDHitCol#0.collectionID", BASHIPHPDHitColhS0_collectionID, &b_BASHIPHPDHitCol_0_collectionID);
   fChain->SetBranchAddress("BASHIPHInfoCol", &BASHIPHInfoCol_, &b_BASHIPHInfoCol_);
   fChain->SetBranchAddress("BASHIPHInfoCol.npe", BASHIPHInfoCol_npe, &b_BASHIPHInfoCol_npe);
   fChain->SetBranchAddress("BASHIPHInfoCol.mom", BASHIPHInfoCol_mom, &b_BASHIPHInfoCol_mom);
   fChain->SetBranchAddress("BASHIPHInfoCol#0", &BASHIPHInfoColhS0_, &b_BASHIPHInfoCol_0_);
   fChain->SetBranchAddress("BASHIPHInfoCol#0.index", BASHIPHInfoColhS0_index, &b_BASHIPHInfoCol_0_index);
   fChain->SetBranchAddress("BASHIPHInfoCol#0.collectionID", BASHIPHInfoColhS0_collectionID, &b_BASHIPHInfoCol_0_collectionID);
   fChain->SetBranchAddress("MUDPointCol", &MUDPointCol_, &b_MUDPointCol_);
   fChain->SetBranchAddress("MUDPointCol.trackID", &MUDPointCol_trackID, &b_MUDPointCol_trackID);
   fChain->SetBranchAddress("MUDPointCol.eventIDs", &MUDPointCol_eventIDs, &b_MUDPointCol_eventIDs);
   fChain->SetBranchAddress("MUDPointCol.momentum.x", &MUDPointCol_momentum_x, &b_MUDPointCol_momentum_x);
   fChain->SetBranchAddress("MUDPointCol.momentum.y", &MUDPointCol_momentum_y, &b_MUDPointCol_momentum_y);
   fChain->SetBranchAddress("MUDPointCol.momentum.z", &MUDPointCol_momentum_z, &b_MUDPointCol_momentum_z);
   fChain->SetBranchAddress("MUDPointCol.energy", &MUDPointCol_energy, &b_MUDPointCol_energy);
   fChain->SetBranchAddress("MUDPointCol.time", &MUDPointCol_time, &b_MUDPointCol_time);
   fChain->SetBranchAddress("MUDPointCol.eloss", &MUDPointCol_eloss, &b_MUDPointCol_eloss);
   fChain->SetBranchAddress("MUDPointCol.position.x", &MUDPointCol_position_x, &b_MUDPointCol_position_x);
   fChain->SetBranchAddress("MUDPointCol.position.y", &MUDPointCol_position_y, &b_MUDPointCol_position_y);
   fChain->SetBranchAddress("MUDPointCol.position.z", &MUDPointCol_position_z, &b_MUDPointCol_position_z);
   fChain->SetBranchAddress("MUDPointCol.combineID", &MUDPointCol_combineID, &b_MUDPointCol_combineID);
   fChain->SetBranchAddress("MUDPointCol.shouldcombine", &MUDPointCol_shouldcombine, &b_MUDPointCol_shouldcombine);
   fChain->SetBranchAddress("MUDPointCol.pdgID", &MUDPointCol_pdgID, &b_MUDPointCol_pdgID);
   fChain->SetBranchAddress("MUDPointCol.volID", &MUDPointCol_volID, &b_MUDPointCol_volID);
   fChain->SetBranchAddress("MUDPointCol.volInfo", &MUDPointCol_volInfo, &b_MUDPointCol_volInfo);
   fChain->SetBranchAddress("MUDPointCol.stepLength", &MUDPointCol_stepLength, &b_MUDPointCol_stepLength);
   fChain->SetBranchAddress("MUDPointCol.posToStripLength_1st", &MUDPointCol_posToStripLength_1st, &b_MUDPointCol_posToStripLength_1st);
   fChain->SetBranchAddress("MUDPointCol.posToStripLength_2nd", &MUDPointCol_posToStripLength_2nd, &b_MUDPointCol_posToStripLength_2nd);
   fChain->SetBranchAddress("MUDPointCol#0", &MUDPointColhS0_, &b_MUDPointCol_0_);
   fChain->SetBranchAddress("MUDPointCol#0.index", &MUDPointColhS0_index, &b_MUDPointCol_0_index);
   fChain->SetBranchAddress("MUDPointCol#0.collectionID", &MUDPointColhS0_collectionID, &b_MUDPointCol_0_collectionID);
   fChain->SetBranchAddress("DTOFBarHitCol", &DTOFBarHitCol_, &b_DTOFBarHitCol_);
   fChain->SetBranchAddress("DTOFBarHitCol.type", &DTOFBarHitCol_type, &b_DTOFBarHitCol_type);
   fChain->SetBranchAddress("DTOFBarHitCol.trackID", &DTOFBarHitCol_trackID, &b_DTOFBarHitCol_trackID);
   fChain->SetBranchAddress("DTOFBarHitCol.eventID", &DTOFBarHitCol_eventID, &b_DTOFBarHitCol_eventID);
   fChain->SetBranchAddress("DTOFBarHitCol.momentum.x", &DTOFBarHitCol_momentum_x, &b_DTOFBarHitCol_momentum_x);
   fChain->SetBranchAddress("DTOFBarHitCol.momentum.y", &DTOFBarHitCol_momentum_y, &b_DTOFBarHitCol_momentum_y);
   fChain->SetBranchAddress("DTOFBarHitCol.momentum.z", &DTOFBarHitCol_momentum_z, &b_DTOFBarHitCol_momentum_z);
   fChain->SetBranchAddress("DTOFBarHitCol.energy", &DTOFBarHitCol_energy, &b_DTOFBarHitCol_energy);
   fChain->SetBranchAddress("DTOFBarHitCol.time", &DTOFBarHitCol_time, &b_DTOFBarHitCol_time);
   fChain->SetBranchAddress("DTOFBarHitCol.length", &DTOFBarHitCol_length, &b_DTOFBarHitCol_length);
   fChain->SetBranchAddress("DTOFBarHitCol.eloss", &DTOFBarHitCol_eloss, &b_DTOFBarHitCol_eloss);
   fChain->SetBranchAddress("DTOFBarHitCol.detectorID", &DTOFBarHitCol_detectorID, &b_DTOFBarHitCol_detectorID);
   fChain->SetBranchAddress("DTOFBarHitCol.position.x", &DTOFBarHitCol_position_x, &b_DTOFBarHitCol_position_x);
   fChain->SetBranchAddress("DTOFBarHitCol.position.y", &DTOFBarHitCol_position_y, &b_DTOFBarHitCol_position_y);
   fChain->SetBranchAddress("DTOFBarHitCol.position.z", &DTOFBarHitCol_position_z, &b_DTOFBarHitCol_position_z);
   fChain->SetBranchAddress("DTOFBarHitCol.sectorID", &DTOFBarHitCol_sectorID, &b_DTOFBarHitCol_sectorID);
   fChain->SetBranchAddress("DTOFBarHitCol.mass", &DTOFBarHitCol_mass, &b_DTOFBarHitCol_mass);
   fChain->SetBranchAddress("DTOFBarHitCol.pdgID", &DTOFBarHitCol_pdgID, &b_DTOFBarHitCol_pdgID);
   fChain->SetBranchAddress("DTOFBarHitCol#0", &DTOFBarHitColhS0_, &b_DTOFBarHitCol_0_);
   fChain->SetBranchAddress("DTOFBarHitCol#0.index", &DTOFBarHitColhS0_index, &b_DTOFBarHitCol_0_index);
   fChain->SetBranchAddress("DTOFBarHitCol#0.collectionID", &DTOFBarHitColhS0_collectionID, &b_DTOFBarHitCol_0_collectionID);
   fChain->SetBranchAddress("DTOFPDHitCol", &DTOFPDHitCol_, &b_DTOFPDHitCol_);
   fChain->SetBranchAddress("DTOFPDHitCol.type", &DTOFPDHitCol_type, &b_DTOFPDHitCol_type);
   fChain->SetBranchAddress("DTOFPDHitCol.trackID", &DTOFPDHitCol_trackID, &b_DTOFPDHitCol_trackID);
   fChain->SetBranchAddress("DTOFPDHitCol.momentum.x", &DTOFPDHitCol_momentum_x, &b_DTOFPDHitCol_momentum_x);
   fChain->SetBranchAddress("DTOFPDHitCol.momentum.y", &DTOFPDHitCol_momentum_y, &b_DTOFPDHitCol_momentum_y);
   fChain->SetBranchAddress("DTOFPDHitCol.momentum.z", &DTOFPDHitCol_momentum_z, &b_DTOFPDHitCol_momentum_z);
   fChain->SetBranchAddress("DTOFPDHitCol.energy", &DTOFPDHitCol_energy, &b_DTOFPDHitCol_energy);
   fChain->SetBranchAddress("DTOFPDHitCol.time", &DTOFPDHitCol_time, &b_DTOFPDHitCol_time);
   fChain->SetBranchAddress("DTOFPDHitCol.length", &DTOFPDHitCol_length, &b_DTOFPDHitCol_length);
   fChain->SetBranchAddress("DTOFPDHitCol.detectorID", &DTOFPDHitCol_detectorID, &b_DTOFPDHitCol_detectorID);
   fChain->SetBranchAddress("DTOFPDHitCol.position.x", &DTOFPDHitCol_position_x, &b_DTOFPDHitCol_position_x);
   fChain->SetBranchAddress("DTOFPDHitCol.position.y", &DTOFPDHitCol_position_y, &b_DTOFPDHitCol_position_y);
   fChain->SetBranchAddress("DTOFPDHitCol.position.z", &DTOFPDHitCol_position_z, &b_DTOFPDHitCol_position_z);
   fChain->SetBranchAddress("DTOFPDHitCol.sectorID", &DTOFPDHitCol_sectorID, &b_DTOFPDHitCol_sectorID);
   fChain->SetBranchAddress("DTOFPDHitCol.channelX", &DTOFPDHitCol_channelX, &b_DTOFPDHitCol_channelX);
   fChain->SetBranchAddress("DTOFPDHitCol.channelY", &DTOFPDHitCol_channelY, &b_DTOFPDHitCol_channelY);
   fChain->SetBranchAddress("DTOFPDHitCol.pdgID", &DTOFPDHitCol_pdgID, &b_DTOFPDHitCol_pdgID);
   fChain->SetBranchAddress("DTOFPDHitCol.timeStart", &DTOFPDHitCol_timeStart, &b_DTOFPDHitCol_timeStart);
   fChain->SetBranchAddress("DTOFPDHitCol#0", &DTOFPDHitColhS0_, &b_DTOFPDHitCol_0_);
   fChain->SetBranchAddress("DTOFPDHitCol#0.index", &DTOFPDHitColhS0_index, &b_DTOFPDHitCol_0_index);
   fChain->SetBranchAddress("DTOFPDHitCol#0.collectionID", &DTOFPDHitColhS0_collectionID, &b_DTOFPDHitCol_0_collectionID);
   Notify();
}

bool events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return true;
}

void events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef events_cxx
