// mac 1.1.8 switch_account_and_restart_codex node va=0x1000c0020 depth=1
// core3ptr314drop_in_place::b::b::d::d::b::b::d::d::b::b::d::d
char __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$C$codexmate_lib..commands..accounts..switch_account..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h14fea6ef4220ca54(
        __int64 a1)
{
  int v1; // eax
  volatile signed __int64 *v2; // rbx

  v1 = *(unsigned __int8 *)(a1 + 184); /*0x1000c0027*/
  if ( *(_BYTE *)(a1 + 184) ) /*0x1000c0027*/
  {
    if ( v1 == 3 ) /*0x1000c0035*/
    {
      v2 = *(volatile signed __int64 **)(a1 + 176); /*0x1000c0037*/
      LOBYTE(v1) = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v2); /*0x1000c0041*/
      if ( (_BYTE)v1 ) /*0x1000c0048*/
        LOBYTE(v1) = tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517((__int64)v2); /*0x1000c0051*/
    }
  }
  else
  {
    LOBYTE(v1) = (unsigned __int8)core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000c0059*/
    if ( *(_QWORD *)(a1 + 152) ) /*0x1000c005e*/
      LOBYTE(v1) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c007a*/
  }
  return v1; /*0x1000c004d*/
}