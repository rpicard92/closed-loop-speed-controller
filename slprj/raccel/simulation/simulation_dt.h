#include "__cf_simulation.h"
#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "exyyadv1fj" , 14 , 24 } , {
"lpw4y2gepa" , 15 , 16 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof (
real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) ,
sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof (
uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T )
, sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( exyyadv1fj ) , sizeof ( lpw4y2gepa ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" , "exyyadv1fj" ,
"lpw4y2gepa" } ; static DataTypeTransition rtBTransitions [ ] = { { ( char_T
* ) ( & rtB . gh3q1hvy1v ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtB .
jlwbrga2hx ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtDW . pun21zeyka ) , 14 , 0
, 1 } , { ( char_T * ) ( & rtDW . enwkj0zgch ) , 15 , 0 , 1 } , { ( char_T *
) ( & rtDW . d5m4b3eeek ) , 0 , 0 , 7 } , { ( char_T * ) ( & rtDW .
m3n21laoly ) , 11 , 0 , 9 } , { ( char_T * ) ( & rtDW . hp3tlqspyp ) , 2 , 0
, 2 } , { ( char_T * ) ( & rtDW . b45xxgff1v [ 0 ] ) , 8 , 0 , 5 } } ; static
DataTypeTransitionTable rtBTransTable = { 8U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
DiscretePIDController1_D ) , 0 , 0 , 19 } , { ( char_T * ) ( & rtP .
Measuredspeed_InitialCondition ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;
