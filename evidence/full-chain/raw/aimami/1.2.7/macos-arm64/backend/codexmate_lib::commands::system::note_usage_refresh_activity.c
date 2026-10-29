// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::system::note_usage_refresh_activity::h9dde7be7e073efcb; addr: 0x100501e20; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 __fastcall codexmate_lib::commands::system::note_usage_refresh_activity::h9dde7be7e073efcb(
        __int64 a1,
        double a2)
{
  pthread_cond_t **v3; // rdi
  char v4; // r14

  if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::he531029ef853cbef ) /*0x100501e38*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h344254a37da4ec10(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::he531029ef853cbef); /*0x100501eb0*/
    v3 = (pthread_cond_t **)qword_101B46B50; /*0x100501eb5*/
    if ( qword_101B46B50 ) /*0x100501ebf*/
      goto LABEL_3; /*0x100501ebf*/
  }
  else
  {
    v3 = (pthread_cond_t **)qword_101B46B50; /*0x100501e3a*/
    if ( qword_101B46B50 ) /*0x100501e44*/
      goto LABEL_3; /*0x100501e44*/
  }
  v3 = (pthread_cond_t **)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(&qword_101B46B50); /*0x100501ecd*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a2); /*0x100501e46*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100501e55*/
  {
    v4 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) ^ 1; /*0x100501edd*/
    if ( byte_101B46B58 ) /*0x100501ef4*/
      goto LABEL_6; /*0x100501ef4*/
    goto LABEL_5; /*0x100501ef4*/
  }
  v4 = 0; /*0x100501e5d*/
  if ( !byte_101B46B58 ) /*0x100501e73*/
  {
LABEL_5:
    qword_101B46B70 = a1; /*0x100501e75*/
    v3 = &qword_101B46B78; /*0x100501e7c*/
    std::sync::nonpoison::condvar::Condvar::notify_all::h5460b212228686b4(&qword_101B46B78); /*0x100501e83*/
  }
LABEL_6:
  if ( !v4 /*0x100501efb*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) )
  {
    byte_101B46B58 = 1; /*0x100501f04*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(qword_101B46B50); /*0x100501e9c*/
}