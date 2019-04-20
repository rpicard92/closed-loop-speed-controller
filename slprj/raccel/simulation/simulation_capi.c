#include "__cf_simulation.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "simulation_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "simulation.h"
#include "simulation_capi.h"
#include "simulation_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 3 , TARGET_STRING (
"simulation/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 3 , TARGET_STRING ( "simulation/MATLAB Function" ) , TARGET_STRING ( ""
) , 4 , 0 , 0 , 0 , 0 } , { 2 , 3 , TARGET_STRING (
"simulation/MATLAB Function" ) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 0 } ,
{ 3 , 0 , TARGET_STRING ( "simulation/Clock" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "simulation/Saturation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"simulation/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 2 ,
TARGET_STRING ( "simulation/GPIO Read/Digital Read" ) , TARGET_STRING ( "" )
, 0 , 1 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"simulation/Discrete PID Controller1/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
 "simulation/Discrete PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"simulation/Discrete PID Controller1/Sum/Sum_PID/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 }
} ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 10 ,
TARGET_STRING ( "simulation/Data Store Memory" ) , TARGET_STRING (
"InitialValue" ) , 0 , 0 , 0 } , { 11 , TARGET_STRING (
"simulation/Data Store Memory1" ) , TARGET_STRING ( "InitialValue" ) , 0 , 0
, 0 } , { 12 , TARGET_STRING ( "simulation/Data Store Memory2" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING (
"simulation/Data Store Memory3" ) , TARGET_STRING ( "InitialValue" ) , 0 , 0
, 0 } , { 14 , TARGET_STRING ( "simulation/Data Store Memory4" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING (
"simulation/Discrete PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 }
, { 16 , TARGET_STRING ( "simulation/Discrete PID Controller1" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"simulation/Discrete PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 }
, { 18 , TARGET_STRING ( "simulation/Discrete PID Controller1" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 19 , TARGET_STRING (
"simulation/Discrete PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"simulation/Discrete PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"simulation/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 22 ,
TARGET_STRING ( "simulation/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 23 , TARGET_STRING ( "simulation/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING ( "simulation/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"simulation/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
26 , TARGET_STRING ( "simulation/GPIO Read/Digital Read" ) , TARGET_STRING (
"SampleTime" ) , 0 , 0 , 0 } , { 27 , TARGET_STRING (
"simulation/Discrete PID Controller1/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 28 , TARGET_STRING (
"simulation/Discrete PID Controller1/Integrator/Discrete/Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0
, ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bcbn3efdcy , & rtB . dn4ywbocjd ,
& rtB . og0hkzty1f , & rtB . gh3q1hvy1v , & rtB . hgmko2lw3k , & rtB .
fyn2dc51cg , & rtB . bqqfsa3jy3 , & rtB . pmo1jwmhhg , & rtB . gpze4ksscg , &
rtB . fcqkdwkwom , & rtP . DataStoreMemory_InitialValue , & rtP .
DataStoreMemory1_InitialValue , & rtP . DataStoreMemory2_InitialValue , & rtP
. DataStoreMemory3_InitialValue , & rtP . DataStoreMemory4_InitialValue , &
rtP . DiscretePIDController1_P , & rtP . DiscretePIDController1_I , & rtP .
DiscretePIDController1_D , & rtP . DiscretePIDController1_N , & rtP .
DiscretePIDController1_InitialConditionForIntegrator , & rtP .
DiscretePIDController1_InitialConditionForFilter , & rtP . Constant1_Value ,
& rtP . Constant2_Value , & rtP . Constant3_Value , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
DigitalRead_SampleTime , & rtP . Filter_gainval , & rtP . Integrator_gainval
, } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.001 , 0.01 }
; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 10 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 19 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 3912426211U , 541993551U , 3196752523U ,
1829000770U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
simulation_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void simulation_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void simulation_host_InitializeDataMapInfo ( simulation_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
