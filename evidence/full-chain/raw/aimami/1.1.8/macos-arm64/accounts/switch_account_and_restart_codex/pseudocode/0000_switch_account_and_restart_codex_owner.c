// mac 1.1.8 switch_account_and_restart_codex node va=0x1000aac40 depth=0
// switch_account_and_restart_codex_owner
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..switch_account_and_restart_codex..$u7b$$u7b$closure$u7d$$u7d$$GT$::h501b434b95c08b70(
        __int64 a1)
{
  __int64 v1; // rsi
  double result; // xmm0_8

  if ( *(_BYTE *)(a1 + 520) ) /*0x1000aac4a*/
  {
    if ( *(_BYTE *)(a1 + 520) == 3 ) /*0x1000aac58*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$C$codexmate_lib..commands..accounts..switch_account..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h14fea6ef4220ca54(a1 + 328); /*0x1000aac61*/
      *(_BYTE *)(a1 + 521) = 0; /*0x1000aac66*/
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1 + 176); /*0x1000aac7b*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000aac83*/
    v1 = *(_QWORD *)(a1 + 152); /*0x1000aac88*/
    if ( v1 ) /*0x1000aac92*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 160), v1, 1); /*0x1000aaca4*/
  }
  return result; /*0x1000aac77*/
}