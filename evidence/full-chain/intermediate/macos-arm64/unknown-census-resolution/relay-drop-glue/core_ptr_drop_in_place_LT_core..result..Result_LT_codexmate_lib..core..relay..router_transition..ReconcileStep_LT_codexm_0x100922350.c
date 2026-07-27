// IDA Hex-Rays decompile evidence
// addr: 0x100922350
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..relay..router_transition..ReconcileStep$LT$codexmate_lib..core..relay..manager..RelayManager..fix_diagnostic_issue..$u7b$$u7b$closure$u7d$$u7d$..DiagnosticRepairOutcome$GT$$C$codexmate_lib..core..models..CoreError$GT$$GT$::h6f288ab9af4a5bb4(
        __int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rsi
  double result; // xmm0_8
  __int64 v7; // rax

  v1 = *a1; /*0x10092235e*/
  if ( *a1 == 3 ) /*0x100922365*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a1 + 1); /*0x100922376*/
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(a1 + 8); /*0x10092237f*/
    if ( (_DWORD)v1 != 2 ) /*0x100922388*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(a1); /*0x10092238d*/
    v2 = a1[18]; /*0x100922392*/
    v3 = a1[19]; /*0x100922399*/
    if ( v3 ) /*0x1009223a3*/
    {
      v4 = (_QWORD *)(v2 + 8); /*0x1009223a5*/
      do /*0x1009223b7*/
      {
        v5 = *(v4 - 1); /*0x1009223b9*/
        if ( v5 ) /*0x1009223c1*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v4, v5, 1); /*0x1009223cc*/
        v4 += 3; /*0x1009223b0*/
        --v3; /*0x1009223b4*/
      }
      while ( v3 ); /*0x1009223b7*/
    }
    v7 = a1[17]; /*0x1009223d3*/
    if ( v7 ) /*0x1009223dd*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24 * v7, 8); /*0x1009223f7*/
  }
  return result; /*0x10092236e*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1009249d0  __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h389b3279db467fcbE_10
// 0x1009268c0  __ZN4core3ptr76drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$17h3cf7265f554713ecE_1
// 0x100927440  __ZN4core3ptr80drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$17hcd4d4c7f3faacb0cE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
