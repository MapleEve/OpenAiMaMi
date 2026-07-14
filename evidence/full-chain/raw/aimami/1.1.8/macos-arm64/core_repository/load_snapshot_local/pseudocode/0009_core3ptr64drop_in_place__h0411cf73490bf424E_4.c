// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x10054ab50 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_QWORD *)(a1 + 176) ) /*0x10054ab5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ab72*/
  if ( *(_QWORD *)(a1 + 200) ) /*0x10054ab77*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ab8f*/
  if ( *(_QWORD *)(a1 + 224) ) /*0x10054ab94*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054abac*/
  result = -*(_QWORD *)(a1 + 248); /*0x10054abc5*/
  if ( !__OFSUB__(result, 1) && *(_QWORD *)(a1 + 248) ) /*0x10054abc2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054abd8*/
  v2 = *(_QWORD *)(a1 + 272); /*0x10054abdd*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x10054abec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054abfa*/
  v3 = *(_QWORD *)(a1 + 296); /*0x10054abff*/
  if ( v3 != 0x8000000000000000LL && v3 ) /*0x10054ac0e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ac1c*/
  if ( *(_DWORD *)(a1 + 128) != 2 ) /*0x10054ac28*/
  {
    v4 = *(_QWORD *)(a1 + 144); /*0x10054ac2a*/
    if ( v4 != 0x8000000000000000LL ) /*0x10054ac34*/
    {
      if ( v4 ) /*0x10054ac39*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ac4b*/
    }
  }
  return result; /*0x10054ac47*/
}