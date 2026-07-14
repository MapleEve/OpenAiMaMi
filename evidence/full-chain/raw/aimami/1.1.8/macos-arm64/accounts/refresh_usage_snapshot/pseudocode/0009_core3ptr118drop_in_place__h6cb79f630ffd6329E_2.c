// mac 1.1.8 refresh_usage_snapshot node va=0x1004ec990 depth=1
// core3ptr118drop_in_place::h6cb79f630ffd6329E_2
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h6cb79f630ffd6329(
        _QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 result; // rax

  if ( a1[85] ) /*0x1004ec9a1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ec9b9*/
  v2 = a1[88]; /*0x1004ec9be*/
  if ( v2 ) /*0x1004ec9c8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ec9d6*/
  v3 = a1[93]; /*0x1004ec9e2*/
  if ( v3 ) /*0x1004ec9ec*/
  {
    v4 = a1[92] + 32LL; /*0x1004ec9ee*/
    do /*0x1004eca07*/
    {
      if ( *(_QWORD *)(v4 - 32) ) /*0x1004eca09*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eca1d*/
      v2 = *(_QWORD *)(v4 - 8); /*0x1004eca22*/
      if ( v2 ) /*0x1004eca2a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eca35*/
      v4 += 48; /*0x1004eca00*/
      --v3; /*0x1004eca04*/
    }
    while ( v3 ); /*0x1004eca07*/
  }
  v5 = a1[91]; /*0x1004eca3c*/
  if ( v5 ) /*0x1004eca46*/
  {
    v2 = 48 * v5; /*0x1004eca4c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eca58*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(a1); /*0x1004eca60*/
  v6 = a1[84] + 1LL; /*0x1004eca73*/
  v7 = a1[83]; /*0x1004eca76*/
  while ( v6 != 1 ) /*0x1004eca84*/
  {
    --v6; /*0x1004eca8d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v7, v2); /*0x1004eca90*/
    v7 += 336; /*0x1004eca95*/
  }
  result = a1[82]; /*0x1004eca9a*/
  if ( result ) /*0x1004ecaa4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ecac3*/
  return result; /*0x1004ecab9*/
}