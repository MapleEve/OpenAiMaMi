// mac 1.2.2 NEW codexmate_lib4core12debug_bundle15inspection_json 0x1004336a0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h270b5b0b5d39be72(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax

  if ( *a1 ) /*0x1004336ae*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004336bf*/
  v1 = a1[5]; /*0x1004336c8*/
  if ( v1 ) /*0x1004336cf*/
  {
    v2 = a1[4] + 8LL; /*0x1004336d1*/
    do /*0x1004336e7*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1004336e9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004336fc*/
      v2 += 24; /*0x1004336e0*/
      --v1; /*0x1004336e4*/
    }
    while ( v1 ); /*0x1004336e7*/
  }
  if ( a1[3] ) /*0x100433703*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10043371c*/
  v3 = a1[8]; /*0x100433725*/
  if ( v3 ) /*0x10043372c*/
  {
    v4 = a1[7] + 8LL; /*0x10043372e*/
    do /*0x100433747*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x100433749*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10043375c*/
      v4 += 24; /*0x100433740*/
      --v3; /*0x100433744*/
    }
    while ( v3 ); /*0x100433747*/
  }
  result = a1[6]; /*0x100433763*/
  if ( result ) /*0x10043376a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100433784*/
  return result; /*0x10043377c*/
}