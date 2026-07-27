// __ZN13codexmate_lib8commands6system27note_usage_refresh_activity @ 0x1007cbfc0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::note_usage_refresh_activity::h0d537a565f552410(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14

  if ( qword_1019FF1C8 ) /*0x1007cbfd8*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h98fc26502592f3e5(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc050*/
    v3 = (void *)codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0; /*0x1007cc055*/
    if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0 ) /*0x1007cc05f*/
      goto LABEL_3; /*0x1007cc05f*/
  }
  else
  {
    v3 = (void *)codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0; /*0x1007cbfda*/
    if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0 ) /*0x1007cbfe4*/
      goto LABEL_3; /*0x1007cbfe4*/
  }
  v3 = (void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc06d*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1007cbfe6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cbff5*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1007cc07d*/
    if ( byte_1019FF1A0 ) /*0x1007cc094*/
      goto LABEL_6; /*0x1007cc094*/
    goto LABEL_5; /*0x1007cc094*/
  }
  v6 = 0; /*0x1007cbffd*/
  if ( !byte_1019FF1A0 ) /*0x1007cc013*/
  {
LABEL_5:
    qword_1019FF1B0 = a1; /*0x1007cc015*/
    v3 = &unk_1019FF1B8; /*0x1007cc01c*/
    std::sync::nonpoison::condvar::Condvar::notify_all::h5460b212228686b4(&unk_1019FF1B8); /*0x1007cc023*/
  }
LABEL_6:
  if ( !v6 /*0x1007cc09b*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
  {
    byte_1019FF1A0 = 1; /*0x1007cc0a4*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc03c*/
}