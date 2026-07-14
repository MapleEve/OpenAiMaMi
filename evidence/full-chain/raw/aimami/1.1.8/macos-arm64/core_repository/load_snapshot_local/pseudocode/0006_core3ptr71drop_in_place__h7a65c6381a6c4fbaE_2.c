// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x10054b9e0 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(
        _QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax

  if ( a1[2] ) /*0x10054b9ee*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ba00*/
  if ( !__OFSUB__(-a1[8], 1) && a1[8] ) /*0x10054ba13*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ba26*/
  v1 = a1[11]; /*0x10054ba2b*/
  if ( v1 != 0x8000000000000000LL && v1 ) /*0x10054ba37*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ba42*/
  v2 = a1[14]; /*0x10054ba47*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x10054ba53*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ba5e*/
  v3 = a1[7]; /*0x10054ba67*/
  if ( v3 ) /*0x10054ba6e*/
  {
    v4 = a1[6] + 24LL; /*0x10054ba70*/
    do /*0x10054ba87*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x10054ba89*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054ba9c*/
      v4 += 40; /*0x10054ba80*/
      --v3; /*0x10054ba84*/
    }
    while ( v3 ); /*0x10054ba87*/
  }
  result = a1[5]; /*0x10054baa3*/
  if ( result ) /*0x10054baaa*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054bac4*/
  return result; /*0x10054babc*/
}