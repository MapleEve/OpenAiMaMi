// IDA Hex-Rays decompile evidence
// addr: 0x100b0ae80
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_project_state..CwdBackfillCandidate$GT$$GT$::hd3a2aef879887b6b(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rsi

  v1 = a1[1]; /*0x100b0ae8e*/
  v2 = a1[2]; /*0x100b0ae92*/
  if ( v2 ) /*0x100b0ae99*/
  {
    v3 = (_QWORD *)(v1 + 32); /*0x100b0ae9b*/
    do /*0x100b0aeb7*/
    {
      v4 = *(v3 - 4); /*0x100b0aeb9*/
      if ( v4 ) /*0x100b0aec1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v3 - 3), v4, 1); /*0x100b0aecd*/
      v6 = *(v3 - 1); /*0x100b0aed2*/
      if ( v6 ) /*0x100b0aeda*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v6, 1); /*0x100b0aee5*/
      v3 += 6; /*0x100b0aeb0*/
      --v2; /*0x100b0aeb4*/
    }
    while ( v2 ); /*0x100b0aeb7*/
  }
  if ( *a1 ) /*0x100b0aeec*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 48LL * *a1, 8); /*0x100b0af0c*/
  return result; /*0x100b0af04*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
