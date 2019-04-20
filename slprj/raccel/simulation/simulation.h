#include "__cf_simulation.h"
#ifndef RTW_HEADER_simulation_h_
#define RTW_HEADER_simulation_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef simulation_COMMON_INCLUDES_
#define simulation_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_pigs.h"
#include "MW_gpio.h"
#endif
#include "simulation_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME simulation
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (11) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T gh3q1hvy1v ; real_T fyn2dc51cg ; real_T gpze4ksscg ;
real_T fcqkdwkwom ; real_T hgmko2lw3k ; real_T pmo1jwmhhg ; real_T bcbn3efdcy
; real_T dn4ywbocjd ; real_T og0hkzty1f ; boolean_T jlwbrga2hx ; boolean_T
bqqfsa3jy3 ; } B ; typedef struct { exyyadv1fj pun21zeyka ; lpw4y2gepa
enwkj0zgch ; real_T d5m4b3eeek ; real_T gek0qdxugj ; real_T ashvbj3oyn ;
real_T gmgilgclse ; real_T gqxlow51xt ; real_T mqbbpc1j4u ; real_T jsgss514dt
; void * m3n21laoly ; struct { void * LoggedData ; } l0ryrn4c1r ; struct {
void * LoggedData ; } e5pnnyw50u ; struct { void * LoggedData ; } la12mnptly
; struct { void * LoggedData ; } okconttce2 ; struct { void * LoggedData ; }
gskyurpeqs ; struct { void * LoggedData ; } cudmxut2jh ; struct { void *
LoggedData ; } c5mwbtqrv4 ; struct { void * LoggedData ; } bzyq1zbjhs ;
int8_T hp3tlqspyp ; int8_T bl5kql5eq2 ; boolean_T b45xxgff1v [ 3 ] ;
boolean_T fu1xq2yfx1 ; boolean_T dni4tvjzax ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
DiscretePIDController1_D ; real_T DiscretePIDController1_I ; real_T
DiscretePIDController1_InitialConditionForFilter ; real_T
DiscretePIDController1_InitialConditionForIntegrator ; real_T
DiscretePIDController1_N ; real_T DiscretePIDController1_P ; real_T
DigitalRead_SampleTime ; real_T Constant2_Value ; real_T Constant3_Value ;
real_T Constant1_Value ; real_T Integrator_gainval ; real_T Filter_gainval ;
real_T Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
DataStoreMemory_InitialValue ; real_T DataStoreMemory1_InitialValue ; real_T
DataStoreMemory2_InitialValue ; real_T DataStoreMemory3_InitialValue ; real_T
DataStoreMemory4_InitialValue ; boolean_T Measuredspeed_InitialCondition ; }
; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
simulation_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern
const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const
int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern
const char * gblInportFileName ; extern const int_T gblNumRootInportBlks ;
extern const int_T gblNumModelInputs ; extern const int_T
gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ; extern
const int_T gblInportComplex [ ] ; extern const int_T gblInportInterpoFlag [
] ; extern const int_T gblInportContinuous [ ] ; extern const int_T
gblParameterTuningTid ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
