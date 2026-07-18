// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x100458690 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::h8fe616c43f2fbd4e(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax

  v1 = a1[2]; /*0x1004586a2*/
  if ( v1 ) /*0x1004586a9*/
  {
    v2 = a1[1] + 8LL; /*0x1004586ab*/
    do /*0x1004586c7*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1004586c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004586dc*/
      v2 += 24; /*0x1004586c0*/
      --v1; /*0x1004586c4*/
    }
    while ( v1 ); /*0x1004586c7*/
  }
  if ( *a1 ) /*0x1004586e3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004586fb*/
  v3 = a1[5]; /*0x100458704*/
  if ( v3 ) /*0x10045870b*/
  {
    v4 = a1[4] + 8LL; /*0x10045870d*/
    do /*0x100458727*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x100458729*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10045873c*/
      v4 += 24; /*0x100458720*/
      --v3; /*0x100458724*/
    }
    while ( v3 ); /*0x100458727*/
  }
  result = a1[3]; /*0x100458743*/
  if ( result ) /*0x10045874a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100458764*/
  return result; /*0x10045875c*/
}