// IDA Hex-Rays decompile evidence
// addr: 0x100016850
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$C$codexmate_lib..core..models..CoreError$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::hde2602f2c4e7ff04(
        _QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r15

  if ( *a1 == 12 ) /*0x100016865*/
  {
    v11 = a1[2]; /*0x10001698b*/
    if ( v11 ) /*0x100016992*/
    {
      v18 = a1[3]; /*0x100016994*/
      if ( *(_QWORD *)v18 ) /*0x100016998*/
        (*(void (__fastcall **)(_QWORD))v18)(a1[2]); /*0x1000169a3*/
      v16 = *(_QWORD *)(v18 + 8); /*0x1000169a5*/
      if ( v16 ) /*0x1000169ac*/
      {
        v17 = *(_QWORD *)(v18 + 16); /*0x1000169ae*/
        goto LABEL_29; /*0x1000169ae*/
      }
    }
  }
  else if ( (unsigned int)*a1 == 11 ) /*0x10001686e*/
  {
    v1 = a1[2]; /*0x100016874*/
    v2 = a1[3]; /*0x100016878*/
    if ( v2 ) /*0x10001687f*/
    {
      v3 = (_QWORD *)(v1 + 8); /*0x100016881*/
      do /*0x100016897*/
      {
        v4 = *(v3 - 1); /*0x100016899*/
        if ( v4 ) /*0x1000168a1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x1000168ac*/
        v3 += 3; /*0x100016890*/
        --v2; /*0x100016894*/
      }
      while ( v2 ); /*0x100016897*/
    }
    v5 = a1[1]; /*0x1000168b3*/
    if ( v5 ) /*0x1000168ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24 * v5, 8); /*0x1000168cc*/
    v6 = a1[5]; /*0x1000168d1*/
    v7 = a1[6]; /*0x1000168d5*/
    if ( v7 ) /*0x1000168dc*/
    {
      v8 = (_QWORD *)(v6 + 8); /*0x1000168de*/
      do /*0x1000168f7*/
      {
        v9 = *(v8 - 1); /*0x1000168f9*/
        if ( v9 ) /*0x100016901*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x10001690c*/
        v8 += 3; /*0x1000168f0*/
        --v7; /*0x1000168f4*/
      }
      while ( v7 ); /*0x1000168f7*/
    }
    v10 = a1[4]; /*0x100016913*/
    if ( v10 ) /*0x10001691a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v10, 8); /*0x10001692c*/
    v11 = a1[8]; /*0x100016931*/
    v12 = a1[9]; /*0x100016935*/
    if ( v12 ) /*0x10001693c*/
    {
      v13 = (_QWORD *)(v11 + 8); /*0x10001693e*/
      do /*0x100016957*/
      {
        v14 = *(v13 - 1); /*0x100016959*/
        if ( v14 ) /*0x100016961*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x10001696c*/
        v13 += 3; /*0x100016950*/
        --v12; /*0x100016954*/
      }
      while ( v12 ); /*0x100016957*/
    }
    v15 = a1[7]; /*0x100016973*/
    if ( v15 ) /*0x10001697a*/
    {
      v16 = 24 * v15; /*0x100016980*/
      v17 = 8; /*0x100016984*/
LABEL_29:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v16, v17); /*0x1000169b2*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a1); /*0x1000169cd*/
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1000370a0  __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h389b3279db467fcbE
