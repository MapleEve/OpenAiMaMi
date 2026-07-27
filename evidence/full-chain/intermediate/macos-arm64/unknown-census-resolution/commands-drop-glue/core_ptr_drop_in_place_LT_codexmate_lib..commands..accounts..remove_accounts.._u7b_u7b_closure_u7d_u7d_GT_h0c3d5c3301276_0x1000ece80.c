// IDA Hex-Rays decompile evidence
// addr: 0x1000ece80
// cluster: commands
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..remove_accounts..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c3d5c33012767a3(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rax

  v2 = *(unsigned __int8 *)(a1 + 328); /*0x1000ece8d*/
  if ( *(_BYTE *)(a1 + 328) ) /*0x1000ece8d*/
  {
    if ( v2 == 3 ) /*0x1000ece9b*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..RemovePayload$GT$$C$codexmate_lib..commands..accounts..remove_accounts..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1bf38b3cbd20be27(a1 + 336); /*0x1000eced1*/
      *(_BYTE *)(a1 + 330) = 0; /*0x1000eced6*/
      if ( !*(_BYTE *)(a1 + 329) ) /*0x1000ecedd*/
        goto LABEL_27; /*0x1000ecee4*/
      goto LABEL_26; /*0x1000ecee4*/
    }
    if ( v2 != 4 ) /*0x1000ecea0*/
      return; /*0x1000ecea0*/
    if ( *(_BYTE *)(a1 + 1232) == 3 ) /*0x1000eceb0*/
    {
      if ( *(_BYTE *)(a1 + 1224) ) /*0x1000ecf64*/
      {
        if ( *(_BYTE *)(a1 + 1224) != 3 ) /*0x1000ecf72*/
          goto LABEL_25; /*0x1000ecf72*/
        if ( *(_BYTE *)(a1 + 1216) == 3 ) /*0x1000ecf7e*/
        {
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf01894121b818ffa(a1 + 1208); /*0x1000ecfa2*/
        }
        else if ( !*(_BYTE *)(a1 + 1216) ) /*0x1000ecf74*/
        {
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 1056); /*0x1000ecf8b*/
        }
        v3 = a1 + 888; /*0x1000ecfa7*/
      }
      else
      {
        v3 = a1 + 720; /*0x1000ecf92*/
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 1232) ) /*0x1000ecea6*/
        goto LABEL_25; /*0x1000eceb8*/
      v3 = a1 + 472; /*0x1000ecebe*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v3); /*0x1000ecfae*/
LABEL_25:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..RemovePayload$GT$$GT$::ha63e21aac1901fd0(a1 + 336); /*0x1000ecfb3*/
    *(_BYTE *)(a1 + 330) = 0; /*0x1000ecfbf*/
    if ( !*(_BYTE *)(a1 + 329) ) /*0x1000ecfcd*/
    {
LABEL_27:
      *(_BYTE *)(a1 + 329) = 0; /*0x1000ecfdb*/
      return; /*0x1000ecfdb*/
    }
LABEL_26:
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 176); /*0x1000ecfcf*/
    goto LABEL_27; /*0x1000ecfd6*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1); /*0x1000ecef2*/
  v4 = *(_QWORD *)(a1 + 168); /*0x1000ecef7*/
  if ( v4 ) /*0x1000ecf01*/
  {
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL); /*0x1000ecf0a*/
    do /*0x1000ecf17*/
    {
      v6 = *(v5 - 1); /*0x1000ecf19*/
      if ( v6 ) /*0x1000ecf20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1); /*0x1000ecf2a*/
      v5 += 3; /*0x1000ecf10*/
      --v4; /*0x1000ecf14*/
    }
    while ( v4 ); /*0x1000ecf17*/
  }
  v7 = *(_QWORD *)(a1 + 152); /*0x1000ecf31*/
  if ( v7 ) /*0x1000ecf3b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 160), 24 * v7, 8); /*0x1000ecf5f*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1001124b0  __ZN4core3ptr315drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..RemovePayload$GT$$C$codexmate_lib..commands..accounts..remove_accounts..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h1bf38b3cbd20be27E
// 0x10042a8b0  __ZN89_$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hf01894121b818ffaE
// 0x100121a70  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_0
// 0x1000f2230  __ZN4core3ptr112drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..RemovePayload$GT$$GT$17ha63e21aac1901fd0E_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
