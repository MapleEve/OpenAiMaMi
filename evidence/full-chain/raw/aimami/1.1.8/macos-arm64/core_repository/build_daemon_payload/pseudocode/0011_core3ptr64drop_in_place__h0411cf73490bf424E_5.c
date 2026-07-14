// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1006e0f50 depth=1
// core3ptr64drop_in_place::h0411cf73490bf424E_5
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_QWORD *)(a1 + 176) ) /*0x1006e0f5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0f72*/
  if ( *(_QWORD *)(a1 + 200) ) /*0x1006e0f77*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0f8f*/
  if ( *(_QWORD *)(a1 + 224) ) /*0x1006e0f94*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0fac*/
  result = -*(_QWORD *)(a1 + 248); /*0x1006e0fc5*/
  if ( !__OFSUB__(result, 1) && *(_QWORD *)(a1 + 248) ) /*0x1006e0fc2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0fd8*/
  v2 = *(_QWORD *)(a1 + 272); /*0x1006e0fdd*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x1006e0fec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0ffa*/
  v3 = *(_QWORD *)(a1 + 296); /*0x1006e0fff*/
  if ( v3 != 0x8000000000000000LL && v3 ) /*0x1006e100e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e101c*/
  if ( *(_DWORD *)(a1 + 128) != 2 ) /*0x1006e1028*/
  {
    v4 = *(_QWORD *)(a1 + 144); /*0x1006e102a*/
    if ( v4 != 0x8000000000000000LL ) /*0x1006e1034*/
    {
      if ( v4 ) /*0x1006e1039*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e104b*/
    }
  }
  return result; /*0x1006e1047*/
}