// IDA Hex-Rays decompile evidence
// addr: 0x100927440
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax

  if ( *(_BYTE *)a1 ) /*0x10092744e*/
  {
    v1 = *(_QWORD *)(a1 + 16); /*0x100927457*/
    v2 = *(_QWORD *)(a1 + 24); /*0x10092745b*/
    if ( v2 ) /*0x100927462*/
    {
      v3 = (_QWORD *)(v1 + 8); /*0x100927464*/
      do /*0x100927477*/
      {
        v4 = *(v3 - 1); /*0x100927479*/
        if ( v4 ) /*0x100927481*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x10092748c*/
        v3 += 3; /*0x100927470*/
        --v2; /*0x100927474*/
      }
      while ( v2 ); /*0x100927477*/
    }
    v6 = *(_QWORD *)(a1 + 8); /*0x100927493*/
    if ( v6 ) /*0x10092749a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24 * v6, 8); /*0x1009274ac*/
    v7 = *(_QWORD *)(a1 + 40); /*0x1009274b1*/
    v8 = *(_QWORD *)(a1 + 48); /*0x1009274b5*/
    if ( v8 ) /*0x1009274bc*/
    {
      v9 = (_QWORD *)(v7 + 8); /*0x1009274c2*/
      do /*0x1009274d7*/
      {
        v10 = *(v9 - 1); /*0x1009274dd*/
        if ( v10 ) /*0x1009274e5*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x1009274f0*/
        v9 += 3; /*0x1009274d0*/
        --v8; /*0x1009274d4*/
      }
      while ( v8 ); /*0x1009274d7*/
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16); /*0x1009274f7*/
    v12 = *(_QWORD *)(a1 + 24); /*0x1009274fb*/
    if ( v12 ) /*0x100927502*/
    {
      v13 = (_QWORD *)(v11 + 8); /*0x100927504*/
      do /*0x100927517*/
      {
        v14 = *(v13 - 1); /*0x100927519*/
        if ( v14 ) /*0x100927521*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x10092752c*/
        v13 += 3; /*0x100927510*/
        --v12; /*0x100927514*/
      }
      while ( v12 ); /*0x100927517*/
    }
    v15 = *(_QWORD *)(a1 + 8); /*0x100927533*/
    if ( v15 ) /*0x10092753a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24 * v15, 8); /*0x10092754c*/
    v7 = *(_QWORD *)(a1 + 40); /*0x100927551*/
    v16 = *(_QWORD *)(a1 + 48); /*0x100927555*/
    if ( v16 ) /*0x10092755c*/
    {
      v17 = (_QWORD *)(v7 + 8); /*0x10092755e*/
      do /*0x100927577*/
      {
        v18 = *(v17 - 1); /*0x100927579*/
        if ( v18 ) /*0x100927581*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x10092758c*/
        v17 += 3; /*0x100927570*/
        --v16; /*0x100927574*/
      }
      while ( v16 ); /*0x100927577*/
    }
  }
  v19 = *(_QWORD *)(a1 + 32); /*0x100927593*/
  if ( v19 ) /*0x10092759a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24 * v19, 8); /*0x1009275b4*/
  return result; /*0x1009275ac*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
