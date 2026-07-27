// IDA Hex-Rays decompile evidence
// addr: 0x1008b89a0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..storage..ProviderIdMigration$GT$$GT$::h09913225f86aed06(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rsi

  v1 = a1[1]; /*0x1008b89ae*/
  v2 = a1[2]; /*0x1008b89b2*/
  if ( v2 ) /*0x1008b89b9*/
  {
    v3 = (_QWORD *)(v1 + 32); /*0x1008b89bb*/
    do /*0x1008b89d7*/
    {
      v4 = *(v3 - 4); /*0x1008b89d9*/
      if ( v4 ) /*0x1008b89e1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v3 - 3), v4, 1); /*0x1008b89ed*/
      v6 = *(v3 - 1); /*0x1008b89f2*/
      if ( v6 ) /*0x1008b89fa*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v6, 1); /*0x1008b8a05*/
      v3 += 8; /*0x1008b89d0*/
      --v2; /*0x1008b89d4*/
    }
    while ( v2 ); /*0x1008b89d7*/
  }
  if ( *a1 ) /*0x1008b8a0c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, *a1 << 6, 8); /*0x1008b8a28*/
  return result; /*0x1008b8a20*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
