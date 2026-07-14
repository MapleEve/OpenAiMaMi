// mac 1.1.8 confirm_pending_auto_switch_and_restart_codex node va=0x1000ae860 depth=0
// confirm_pending_auto_switch_and_restart_codex_owner
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..system..confirm_pending_auto_switch_and_restart_codex..$u7b$$u7b$closure$u7d$$u7d$$GT$::h4c9bd61f3a4d488d(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *(unsigned __int8 *)(a1 + 312); /*0x1000ae867*/
  if ( (_DWORD)result == 3 ) /*0x1000ae871*/
  {
    v2 = *(_QWORD *)(a1 + 304); /*0x1000ae87f*/
    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v2) ) /*0x1000ae889*/
      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v2); /*0x1000ae895*/
    a1 += 152; /*0x1000ae89d*/
    return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000ae89d*/
  }
  if ( !*(_BYTE *)(a1 + 312) ) /*0x1000ae875*/
    return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000ae8a4*/
  return result; /*0x1000ae877*/
}