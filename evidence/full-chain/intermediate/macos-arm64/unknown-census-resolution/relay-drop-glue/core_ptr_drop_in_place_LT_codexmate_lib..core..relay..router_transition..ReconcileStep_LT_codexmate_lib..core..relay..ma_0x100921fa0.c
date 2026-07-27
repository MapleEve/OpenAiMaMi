// IDA Hex-Rays decompile evidence
// addr: 0x100921fa0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_transition..ReconcileStep$LT$codexmate_lib..core..relay..manager..RelayManager..fix_diagnostic_issue..$u7b$$u7b$closure$u7d$$u7d$..DiagnosticRepairOutcome$GT$$GT$::h4688b56cfe4d9060(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rax

  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(a1 + 64); /*0x100921fb2*/
  if ( *(_DWORD *)a1 != 2 ) /*0x100921fba*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(a1); /*0x100921fbf*/
  v1 = *(_QWORD *)(a1 + 144); /*0x100921fc4*/
  v2 = *(_QWORD *)(a1 + 152); /*0x100921fcb*/
  if ( v2 ) /*0x100921fd5*/
  {
    v3 = (_QWORD *)(v1 + 8); /*0x100921fd7*/
    do /*0x100921fe7*/
    {
      v4 = *(v3 - 1); /*0x100921fe9*/
      if ( v4 ) /*0x100921ff1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x100921ffc*/
      v3 += 3; /*0x100921fe0*/
      --v2; /*0x100921fe4*/
    }
    while ( v2 ); /*0x100921fe7*/
  }
  v6 = *(_QWORD *)(a1 + 136); /*0x100922003*/
  if ( v6 ) /*0x10092200d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24 * v6, 8); /*0x100922027*/
  return result; /*0x10092201f*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1009268c0  __ZN4core3ptr76drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$17h3cf7265f554713ecE_1
// 0x100927440  __ZN4core3ptr80drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$17hcd4d4c7f3faacb0cE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
