// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::system::update_usage_refresh_schedule::h903ad3dfc475531b; addr: 0x1005028d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 __fastcall codexmate_lib::commands::system::update_usage_refresh_schedule::h903ad3dfc475531b(
        __int64 a1,
        unsigned __int64 a2,
        double a3)
{
  pthread_cond_t **v4; // rdi
  char v5; // r15
  __int64 v6; // rax

  if ( codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::he531029ef853cbef ) /*0x1005028ee*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h344254a37da4ec10(&codexmate_lib::commands::system::usage_refresh_watcher_state::STATE::he531029ef853cbef); /*0x100502999*/
    v4 = (pthread_cond_t **)qword_101B46B50; /*0x10050299e*/
    if ( qword_101B46B50 ) /*0x1005029a8*/
      goto LABEL_3; /*0x1005029a8*/
  }
  else
  {
    v4 = (pthread_cond_t **)qword_101B46B50; /*0x1005028f4*/
    if ( qword_101B46B50 ) /*0x1005028fe*/
      goto LABEL_3; /*0x1005028fe*/
  }
  v4 = (pthread_cond_t **)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(&qword_101B46B50); /*0x1005029ba*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x100502904*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100502914*/
  {
    v5 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) ^ 1; /*0x1005029ca*/
    if ( byte_101B46B58 ) /*0x1005029e1*/
      goto LABEL_8; /*0x1005029e1*/
  }
  else
  {
    v5 = 0; /*0x100502920*/
    if ( byte_101B46B58 ) /*0x100502936*/
      goto LABEL_8; /*0x100502936*/
  }
  v6 = 30; /*0x10050293c*/
  if ( a2 >= 0x1F ) /*0x100502941*/
    v6 = a2; /*0x100502941*/
  qword_101B46B60 = a1; /*0x100502945*/
  qword_101B46B68 = v6; /*0x10050294c*/
  qword_101B46B70 = 0; /*0x100502953*/
  v4 = &qword_101B46B78; /*0x10050295e*/
  std::sync::nonpoison::condvar::Condvar::notify_all::h5460b212228686b4(&qword_101B46B78); /*0x100502965*/
LABEL_8:
  if ( !v5 /*0x1005029e8*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) )
  {
    byte_101B46B58 = 1; /*0x1005029f1*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(qword_101B46B50); /*0x100502983*/
}