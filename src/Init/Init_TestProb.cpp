#include "GAMER.h"


// ******************************************************************
// add the new test problem function prototypes here
// ******************************************************************
void Init_TestProb_Hydro_BlastWave();
void Init_TestProb_Hydro_AcousticWave();
void Init_TestProb_Hydro_Bondi();
void Init_TestProb_Hydro_ClusterMerger_vs_Flash();
void Init_TestProb_Hydro_AGORA_IsolatedGalaxy();
void Init_TestProb_Hydro_Caustic();
void Init_TestProb_Hydro_SphericalCollapse();
void Init_TestProb_Hydro_KelvinHelmholtzInstability();
void Init_TestProb_Hydro_Riemann();
void Init_TestProb_Hydro_CollidingJets();
void Init_TestProb_Hydro_Plummer();
void Init_TestProb_Hydro_Gravity();

void Init_TestProb_Hydro_CylPoisson3Gauss();
void Init_TestProb_Hydro_CylPoisson4Sphere();
void Init_TestProb_Hydro_CylPoisson();
void Init_TestProb_Hydro_RayleighDisk();

void Init_TestProb_Hydro_SGThinDisk();

void Init_TestProb_Hydro_VSI();

void Init_TestProb_ELBDM_ExtPot();




//-------------------------------------------------------------------------------------------------------
// Function    :  Init_TestProb
// Description :  Initialize the target test problem
//
// Note        :  1. Use TESTPROB_ID to choose the target test problem
//                2. All test problem IDs are defined in "include/Typedef.h"
//
// Parameter   :  None
//
// Return      :  None
//-------------------------------------------------------------------------------------------------------
void Init_TestProb()
{

// ******************************************************************
// add the new test problem IDs here
// ******************************************************************
   switch ( TESTPROB_ID )
   {
      case TESTPROB_NONE :                                                                                  break;

      case TESTPROB_HYDRO_BLAST_WAVE :                   Init_TestProb_Hydro_BlastWave();                   break;
      case TESTPROB_HYDRO_ACOUSTIC_WAVE :                Init_TestProb_Hydro_AcousticWave();                break;
//    case TESTPROB_HYDRO_BONDI :                        Init_TestProb_Hydro_Bondi();                       break;
      case TESTPROB_HYDRO_CLUSTER_MERGER_VS_FLASH :      Init_TestProb_Hydro_ClusterMerger_vs_Flash();      break;
      case TESTPROB_HYDRO_AGORA_ISOLATED_GALAXY :        Init_TestProb_Hydro_AGORA_IsolatedGalaxy();        break;
      case TESTPROB_HYDRO_CAUSTIC :                      Init_TestProb_Hydro_Caustic();                     break;
      case TESTPROB_HYDRO_SPHERICAL_COLLAPSE :           Init_TestProb_Hydro_SphericalCollapse();           break;
      case TESTPROB_HYDRO_KELVIN_HELMHOLTZ_INSTABILITY : Init_TestProb_Hydro_KelvinHelmholtzInstability();  break;
      case TESTPROB_HYDRO_RIEMANN :                      Init_TestProb_Hydro_Riemann();                     break;
      case TESTPROB_HYDRO_COLLIDING_JETS :               Init_TestProb_Hydro_CollidingJets();               break;
      case TESTPROB_HYDRO_PLUMMER :                      Init_TestProb_Hydro_Plummer();                     break;
      case TESTPROB_HYDRO_GRAVITY :                      Init_TestProb_Hydro_Gravity();                     break;
      
      case TESTPROB_HYDRO_CYL_POISSON_3GAUSSIAN :        Init_TestProb_Hydro_CylPoisson3Gauss();            break;
      case TESTPROB_HYDRO_CYL_POISSON_4SPHERE :          Init_TestProb_Hydro_CylPoisson4Sphere();           break;
      case TESTPROB_HYDRO_CYL_POISSON :                  Init_TestProb_Hydro_CylPoisson();                  break;
      case TESTPROB_HYDRO_RAYLEIGH_DISK :                Init_TestProb_Hydro_RayleighDisk();                break;
      
      case TESTPROB_HYDRO_SG_THIN_DISK :                 Init_TestProb_Hydro_SGThinDisk();                  break;
      case TESTPROB_HYDRO_VSI :                          Init_TestProb_Hydro_VSI();                         break;

      case TESTPROB_ELBDM_EXTPOT :                       Init_TestProb_ELBDM_ExtPot();                      break;

      default: Aux_Error( ERROR_INFO, "unsupported TESTPROB_ID (%d) !!\n", TESTPROB_ID );
   } // switch( TESTPROB_ID )

} // FUNCTION : Init_TestProb
