#include "__cf_simulation.h"
#include "rt_logging_mmi.h"
#include "simulation_capi.h"
#include <math.h>
#include "simulation.h"
#include "simulation_private.h"
#include "simulation_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.2 (R2018b) 24-May-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\simulation\\simulation_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static void bc1at1tthk ( const lpw4y2gepa * obj ) ; static void
bh511bwgai ( const lpw4y2gepa * obj ) ; static void arkwlypado ( lpw4y2gepa *
obj ) ; static void bc1at1tthkw ( const exyyadv1fj * obj ) ; static void
bh511bwgaii ( const exyyadv1fj * obj ) ; static void arkwlypadol ( exyyadv1fj
* obj ) ; static void bc1at1tthk ( const lpw4y2gepa * obj ) { if ( ( obj ->
isInitialized == 1 ) && obj -> isSetupComplete ) { EXT_PWM_terminate ( obj ->
PinNumber ) ; } } static void bh511bwgai ( const lpw4y2gepa * obj ) {
bc1at1tthk ( obj ) ; } static void arkwlypado ( lpw4y2gepa * obj ) { if ( !
obj -> matlabCodegenIsDeleted ) { obj -> matlabCodegenIsDeleted = true ;
bh511bwgai ( obj ) ; } } static void bc1at1tthkw ( const exyyadv1fj * obj ) {
if ( ( obj -> isInitialized == 1 ) && obj -> isSetupComplete ) {
MW_gpioTerminate ( 21U ) ; } } static void bh511bwgaii ( const exyyadv1fj *
obj ) { bc1at1tthkw ( obj ) ; } static void arkwlypadol ( exyyadv1fj * obj )
{ if ( ! obj -> matlabCodegenIsDeleted ) { obj -> matlabCodegenIsDeleted =
true ; bh511bwgaii ( obj ) ; } } void MdlInitialize ( void ) { rtDW .
b45xxgff1v [ 0 ] = rtP . Measuredspeed_InitialCondition ; rtDW . d5m4b3eeek =
rtP . DiscretePIDController1_InitialConditionForIntegrator ; rtDW .
gek0qdxugj = rtP . DiscretePIDController1_InitialConditionForFilter ; } void
MdlStart ( void ) { int32_T ret ; static const char_T tmp [ 45 ] = { 'U' ,
'n' , 'a' , 'b' , 'l' , 'e' , ' ' , 't' , 'o' , ' ' , 'c' , 'o' , 'n' , 'f' ,
'i' , 'g' , 'u' , 'r' , 'e' , ' ' , 'p' , 'i' , 'n' , ' ' , '%' , 'u' , ' ' ,
'f' , 'o' , 'r' , ' ' , 'P' , 'W' , 'M' , ' ' , 'o' , 'u' , 't' , 'p' , 'u' ,
't' , '.' , '\\' , 'n' , '\x00' } ; char_T tmp_p [ 45 ] ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } rtB . jlwbrga2hx = rtP .
Measuredspeed_InitialCondition ; rtDW . enwkj0zgch . matlabCodegenIsDeleted =
true ; rtDW . enwkj0zgch . isInitialized = 0 ; rtDW . enwkj0zgch .
matlabCodegenIsDeleted = false ; rtDW . dni4tvjzax = true ; rtDW . enwkj0zgch
. isSetupComplete = false ; rtDW . enwkj0zgch . isInitialized = 1 ; rtDW .
enwkj0zgch . PinNumber = 18U ; ret = EXT_PWM_init ( rtDW . enwkj0zgch .
PinNumber , 100U , 0.0 ) ; if ( ret != 0 ) { for ( ret = 0 ; ret < 45 ; ret
++ ) { tmp_p [ ret ] = tmp [ ret ] ; } printf ( tmp_p , rtDW . enwkj0zgch .
PinNumber ) ; } rtDW . enwkj0zgch . isSetupComplete = true ; rtDW .
pun21zeyka . matlabCodegenIsDeleted = true ; rtDW . pun21zeyka .
isInitialized = 0 ; rtDW . pun21zeyka . matlabCodegenIsDeleted = false ; rtDW
. fu1xq2yfx1 = true ; rtDW . pun21zeyka . SampleTime = rtP .
DigitalRead_SampleTime ; rtDW . pun21zeyka . isSetupComplete = false ; rtDW .
pun21zeyka . isInitialized = 1 ; MW_gpioInit ( 21U , false ) ; rtDW .
pun21zeyka . isSetupComplete = true ; rtDW . ashvbj3oyn = rtP .
DataStoreMemory_InitialValue ; rtDW . gmgilgclse = rtP .
DataStoreMemory1_InitialValue ; rtDW . gqxlow51xt = rtP .
DataStoreMemory2_InitialValue ; rtDW . mqbbpc1j4u = rtP .
DataStoreMemory3_InitialValue ; rtDW . jsgss514dt = rtP .
DataStoreMemory4_InitialValue ; MdlInitialize ( ) ; } void MdlOutputs ( int_T
tid ) { if ( ssIsSampleHit ( rtS , 1 , tid ) ) { ; rtDW . bl5kql5eq2 = rtDW .
hp3tlqspyp ; ; rtB . jlwbrga2hx = rtDW . b45xxgff1v [ rtDW . bl5kql5eq2 ] ; }
if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . gh3q1hvy1v = ssGetT ( rtS ) ;
} if ( ssIsSampleHit ( rtS , 1 , tid ) ) { } if ( ssIsContinuousTask ( rtS ,
tid ) ) { rtB . bcbn3efdcy = rtDW . ashvbj3oyn ; rtB . dn4ywbocjd = rtDW .
gmgilgclse ; rtB . og0hkzty1f = rtB . gh3q1hvy1v ; rtDW . gqxlow51xt ++ ; if
( rtB . jlwbrga2hx && ( rtDW . jsgss514dt == 0.0 ) && ( rtDW . mqbbpc1j4u ==
1.0 ) ) { rtB . og0hkzty1f -= rtB . dn4ywbocjd ; rtB . bcbn3efdcy = 1.0 / rtB
. og0hkzty1f * ( rtP . Constant2_Value * 3.1415926535897931 ) ; rtDW .
gqxlow51xt = 0.0 ; rtB . dn4ywbocjd = rtB . og0hkzty1f ; } else { if ( rtB .
jlwbrga2hx && ( rtDW . mqbbpc1j4u == 0.0 ) ) { rtB . dn4ywbocjd = rtB .
og0hkzty1f ; rtDW . gqxlow51xt = 0.0 ; rtDW . mqbbpc1j4u = 1.0 ; } } rtDW .
ashvbj3oyn = rtB . bcbn3efdcy ; rtDW . gmgilgclse = rtB . dn4ywbocjd ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { } if ( ssIsContinuousTask ( rtS , tid ) )
{ rtB . fyn2dc51cg = rtP . Constant1_Value - rtB . bcbn3efdcy ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . gpze4ksscg = ( rtP .
DiscretePIDController1_D * rtB . fyn2dc51cg - rtDW . gek0qdxugj ) * rtP .
DiscretePIDController1_N ; rtB . fcqkdwkwom = ( rtP .
DiscretePIDController1_P * rtB . fyn2dc51cg + rtDW . d5m4b3eeek ) + rtB .
gpze4ksscg ; if ( rtB . fcqkdwkwom > rtP . Saturation_UpperSat ) { rtB .
hgmko2lw3k = rtP . Saturation_UpperSat ; } else if ( rtB . fcqkdwkwom < rtP .
Saturation_LowerSat ) { rtB . hgmko2lw3k = rtP . Saturation_LowerSat ; } else
{ rtB . hgmko2lw3k = rtB . fcqkdwkwom ; } if ( ( rtB . hgmko2lw3k >= 0.0 ) &&
( rtB . hgmko2lw3k <= 1.0 ) ) { EXT_PWM_setDutyCycle ( rtDW . enwkj0zgch .
PinNumber , rtB . hgmko2lw3k ) ; } rtB . pmo1jwmhhg = rtP .
DiscretePIDController1_I * rtB . fyn2dc51cg ; } if ( ssIsSampleHit ( rtS , 2
, tid ) ) { if ( rtDW . pun21zeyka . SampleTime != rtP .
DigitalRead_SampleTime ) { rtDW . pun21zeyka . SampleTime = rtP .
DigitalRead_SampleTime ; } rtB . bqqfsa3jy3 = MW_gpioRead ( 21U ) ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { int8_T wrBufIdx ;
if ( ssIsSampleHit ( rtS , 2 , tid ) ) { ; wrBufIdx = ( int8_T ) ( rtDW .
hp3tlqspyp + 1 ) ; if ( ( int8_T ) ( rtDW . hp3tlqspyp + 1 ) == 3 ) {
wrBufIdx = 0 ; } if ( wrBufIdx == rtDW . bl5kql5eq2 ) { wrBufIdx ++ ; if (
wrBufIdx == 3 ) { wrBufIdx = 0 ; } } ; rtDW . b45xxgff1v [ wrBufIdx ] = rtB .
bqqfsa3jy3 ; rtDW . hp3tlqspyp = wrBufIdx ; } if ( ssIsSampleHit ( rtS , 1 ,
tid ) ) { rtDW . d5m4b3eeek += rtP . Integrator_gainval * rtB . pmo1jwmhhg ;
rtDW . gek0qdxugj += rtP . Filter_gainval * rtB . gpze4ksscg ; }
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { arkwlypado ( & rtDW
. enwkj0zgch ) ; arkwlypadol ( & rtDW . pun21zeyka ) ; if ( rt_slioCatalogue
( ) != ( NULL ) ) { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( )
) , rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 47 ) ;
ssSetNumBlockIO ( rtS , 11 ) ; ssSetNumBlockParams ( rtS , 20 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3912426211U ) ; ssSetChecksumVal ( rtS , 1 ,
541993551U ) ; ssSetChecksumVal ( rtS , 2 , 3196752523U ) ; ssSetChecksumVal
( rtS , 3 , 1829000770U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; } } mdlSampleHits [ 0 ] = 1 ; ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; } {
static int_T mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; ( void
) memset ( ( void * ) & mdlPerTaskSampleHits [ 0 ] , 0 , 3 * 3 * sizeof (
int_T ) ) ; ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] )
; } ssSetSolverMode ( rtS , SOLVER_MODE_MULTITASKING ) ; { ssSetBlockIO ( rtS
, ( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 ,
sizeof ( B ) ) ; { rtB . gh3q1hvy1v = 0.0 ; rtB . fyn2dc51cg = 0.0 ; rtB .
gpze4ksscg = 0.0 ; rtB . fcqkdwkwom = 0.0 ; rtB . hgmko2lw3k = 0.0 ; rtB .
pmo1jwmhhg = 0.0 ; rtB . bcbn3efdcy = 0.0 ; rtB . dn4ywbocjd = 0.0 ; rtB .
og0hkzty1f = 0.0 ; } } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork (
rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; rtDW .
d5m4b3eeek = 0.0 ; rtDW . gek0qdxugj = 0.0 ; rtDW . ashvbj3oyn = 0.0 ; rtDW .
gmgilgclse = 0.0 ; rtDW . gqxlow51xt = 0.0 ; rtDW . mqbbpc1j4u = 0.0 ; rtDW .
jsgss514dt = 0.0 ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( (
char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS ,
& dtInfo ) ; dtInfo . numDataTypes = 16 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
simulation_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "simulation" ) ;
ssSetPath ( rtS , "simulation" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 50.0 ) ; ssSetStepSize ( rtS , 0.001 ) ; ssSetFixedStepSize ( rtS ,
0.001 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } {
{ static int_T rt_LoggedStateWidths [ ] = { 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"simulation/Discrete PID Controller1/Integrator/Discrete/Integrator" ,
"simulation/Discrete PID Controller1/Filter/Disc. Forward Euler Filter/Filter"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo =
{ 2 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 2 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . d5m4b3eeek ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . gek0qdxugj ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo )
; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver (
rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
3912426211U ) ; ssSetChecksumVal ( rtS , 1 , 541993551U ) ; ssSetChecksumVal
( rtS , 2 , 3196752523U ) ; ssSetChecksumVal ( rtS , 3 , 1829000770U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
