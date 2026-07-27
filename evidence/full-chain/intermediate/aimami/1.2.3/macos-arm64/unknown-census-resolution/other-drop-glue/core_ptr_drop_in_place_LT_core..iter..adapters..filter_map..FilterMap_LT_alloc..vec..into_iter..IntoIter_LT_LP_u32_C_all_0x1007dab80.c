// IDA Hex-Rays decompile evidence
// addr: 0x1007dab80
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$alloc..vec..into_iter..IntoIter$LT$$LP$u32$C$alloc..string..String$RP$$GT$$C$codexmate_lib..platform..process..collect_external_codex_writers..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hcc5974961f0b781e(
        _QWORD *a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r15
  _QWORD *v4; // r14
  __int64 v5; // rsi
  double result; // xmm0_8
  __int64 v7; // rsi

  v1 = a1[1]; /*0x1007dab8d*/
  v2 = a1[3] - v1; /*0x1007dab95*/
  if ( v2 ) /*0x1007dab98*/
  {
    v3 = v2 >> 5; /*0x1007dab9a*/
    v4 = (_QWORD *)(v1 + 16); /*0x1007dab9e*/
    do /*0x1007dabb7*/
    {
      v5 = *(v4 - 1); /*0x1007dabb9*/
      if ( v5 ) /*0x1007dabc0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v4, v5, 1); /*0x1007dabca*/
      v4 += 4; /*0x1007dabb0*/
      --v3; /*0x1007dabb4*/
    }
    while ( v3 ); /*0x1007dabb7*/
  }
  v7 = a1[2]; /*0x1007dabd1*/
  if ( v7 ) /*0x1007dabd8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*a1, 32 * v7, 8); /*0x1007dabf0*/
  return result; /*0x1007dabea*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
