// IDA Hex-Rays decompile evidence
// addr: 0x100b0e8a0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateFromDb$GT$::h290410904bd54eec(
        _QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax

  v1 = a1[1]; /*0x100b0e8ae*/
  v2 = a1[2]; /*0x100b0e8b2*/
  if ( v2 ) /*0x100b0e8b9*/
  {
    v3 = (_QWORD *)(v1 + 8); /*0x100b0e8bb*/
    do /*0x100b0e8d7*/
    {
      v4 = *(v3 - 1); /*0x100b0e8d9*/
      if ( v4 ) /*0x100b0e8e1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x100b0e8ec*/
      v3 += 3; /*0x100b0e8d0*/
      --v2; /*0x100b0e8d4*/
    }
    while ( v2 ); /*0x100b0e8d7*/
  }
  if ( *a1 ) /*0x100b0e8f3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24LL * *a1, 8); /*0x100b0e90b*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdde816b66763b6c5(a1 + 7); /*0x100b0e914*/
  v6 = a1[4]; /*0x100b0e919*/
  v7 = a1[5]; /*0x100b0e91d*/
  if ( v7 ) /*0x100b0e924*/
  {
    v8 = (_QWORD *)(v6 + 8); /*0x100b0e926*/
    do /*0x100b0e937*/
    {
      v9 = *(v8 - 1); /*0x100b0e939*/
      if ( v9 ) /*0x100b0e941*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x100b0e94c*/
      v8 += 3; /*0x100b0e930*/
      --v7; /*0x100b0e934*/
    }
    while ( v7 ); /*0x100b0e937*/
  }
  v10 = a1[3]; /*0x100b0e953*/
  if ( v10 ) /*0x100b0e95a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v10, 8); /*0x100b0e974*/
  return result; /*0x100b0e96c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x10024a630  __ZN99_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hdde816b66763b6c5E
