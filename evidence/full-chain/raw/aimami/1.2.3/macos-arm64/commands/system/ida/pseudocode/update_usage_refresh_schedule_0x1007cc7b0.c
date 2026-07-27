// __ZN13codexmate_lib8commands6system29update_usage_refresh_schedule @ 0x1007cc7b0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::update_usage_refresh_schedule::h3b3346cd2f479fdc(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14

  if ( qword_1019FF1C8 ) /*0x1007cc7c8*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h98fc26502592f3e5(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc857*/
    v3 = (void *)codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0; /*0x1007cc85c*/
    if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0 ) /*0x1007cc866*/
      goto LABEL_3; /*0x1007cc866*/
  }
  else
  {
    v3 = (void *)codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0; /*0x1007cc7ce*/
    if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0 ) /*0x1007cc7d8*/
      goto LABEL_3; /*0x1007cc7d8*/
  }
  v3 = (void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc878*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1007cc7de*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cc7ed*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1007cc888*/
    if ( byte_1019FF1A0 ) /*0x1007cc89f*/
      goto LABEL_6; /*0x1007cc89f*/
    goto LABEL_5; /*0x1007cc89f*/
  }
  v6 = 0; /*0x1007cc7f9*/
  if ( !byte_1019FF1A0 ) /*0x1007cc80f*/
  {
LABEL_5:
    qword_1019FF1A8 = a1; /*0x1007cc811*/
    qword_1019FF1B0 = 0; /*0x1007cc818*/
    v3 = &unk_1019FF1B8; /*0x1007cc823*/
    std::sync::nonpoison::condvar::Condvar::notify_all::h5460b212228686b4(&unk_1019FF1B8); /*0x1007cc82a*/
  }
LABEL_6:
  if ( !v6 /*0x1007cc8a6*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
  {
    byte_1019FF1A0 = 1; /*0x1007cc8af*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::h0bd0d80a5d68a6e0); /*0x1007cc843*/
}