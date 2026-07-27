// IDA Hex-Rays decompile evidence
// addr: 0x1000efd30
// cluster: commands
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..system..configure_auto_switch..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2631381cc89edf5b(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r14

  result = *(unsigned __int8 *)(a1 + 321); /*0x1000efd3a*/
  if ( !*(_BYTE *)(a1 + 321) ) /*0x1000efd43*/
    return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1); /*0x1000efd9d*/
  if ( (_DWORD)result == 3 ) /*0x1000efd48*/
  {
    v4 = *(_QWORD *)(a1 + 328); /*0x1000efd70*/
    result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1000efd7a*/
    if ( (_BYTE)result ) /*0x1000efd81*/
      result = tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1000efd86*/
    if ( !*(_BYTE *)(a1 + 322) ) /*0x1000efd8b*/
      goto LABEL_23; /*0x1000efd92*/
    goto LABEL_22; /*0x1000efd92*/
  }
  if ( (_DWORD)result != 4 ) /*0x1000efd4d*/
    return result; /*0x1000efd4d*/
  if ( *(_BYTE *)(a1 + 1208) == 3 ) /*0x1000efd5d*/
  {
    if ( *(_BYTE *)(a1 + 1200) ) /*0x1000efda2*/
    {
      if ( *(_BYTE *)(a1 + 1200) != 3 ) /*0x1000efdb0*/
        goto LABEL_21; /*0x1000efdb0*/
      if ( *(_BYTE *)(a1 + 1192) == 3 ) /*0x1000efdbc*/
      {
        _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf01894121b818ffa(a1 + 1184); /*0x1000efde0*/
      }
      else if ( !*(_BYTE *)(a1 + 1192) ) /*0x1000efdb2*/
      {
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 1032); /*0x1000efdc9*/
      }
      v3 = a1 + 864; /*0x1000efde5*/
    }
    else
    {
      v3 = a1 + 696; /*0x1000efdd0*/
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1208) ) /*0x1000efd53*/
      goto LABEL_21; /*0x1000efd61*/
    v3 = a1 + 448; /*0x1000efd67*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v3); /*0x1000efdec*/
LABEL_21:
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..AutoSwitchConfigPayload$GT$$GT$::hbeb25a00600c7716(a1 + 328); /*0x1000efdf1*/
  if ( *(_BYTE *)(a1 + 322) ) /*0x1000efdfd*/
LABEL_22:
    result = core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 168); /*0x1000efe06*/
LABEL_23:
  *(_BYTE *)(a1 + 322) = 0; /*0x1000efe12*/
  return result; /*0x1000efd99*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100121a70  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_0
// 0x1012ba4a0  __ZN5tokio7runtime4task5state5State21drop_join_handle_fast17h261ebd480c6ca3c1E
// 0x1012b8b80  __ZN5tokio7runtime4task3raw7RawTask21drop_join_handle_slow17h992aae8c362d2517E
// 0x10042a8b0  __ZN89_$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hf01894121b818ffaE
// 0x1000f3db0  __ZN4core3ptr122drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..AutoSwitchConfigPayload$GT$$GT$17hbeb25a00600c7716E_0
