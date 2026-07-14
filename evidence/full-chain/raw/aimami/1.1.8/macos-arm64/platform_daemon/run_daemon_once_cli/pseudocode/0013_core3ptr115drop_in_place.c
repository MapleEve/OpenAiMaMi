// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1003275f0 depth=1
// core3ptr115drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h35848bd6f8909c64(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi

  if ( *a1 ) /*0x1003275fe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10032760f*/
  if ( a1[3] ) /*0x100327614*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100327626*/
  v1 = a1[8]; /*0x10032762f*/
  if ( v1 ) /*0x100327636*/
  {
    v2 = a1[7] + 32LL; /*0x100327638*/
    do /*0x100327647*/
    {
      if ( *(_QWORD *)(v2 - 32) ) /*0x100327649*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10032765d*/
      if ( *(_QWORD *)(v2 - 8) ) /*0x100327662*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100327675*/
      v2 += 48; /*0x100327640*/
      --v1; /*0x100327644*/
    }
    while ( v1 ); /*0x100327647*/
  }
  if ( a1[6] ) /*0x10032767c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100327695*/
  result = -a1[9]; /*0x1003276ab*/
  if ( !__OFSUB__(result, 1) && a1[9] ) /*0x1003276a8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003276bb*/
  v4 = a1[12]; /*0x1003276c0*/
  if ( v4 != 0x8000000000000000LL && v4 ) /*0x1003276cc*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003276d7*/
  v5 = a1[15]; /*0x1003276dc*/
  if ( v5 != 0x8000000000000000LL ) /*0x1003276e3*/
  {
    if ( v5 ) /*0x1003276e8*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003276fe*/
  }
  return result; /*0x1003276f6*/
}