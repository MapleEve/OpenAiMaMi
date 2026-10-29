// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::accounts::get_cached_display_snapshot::h345feb090b2a25d7; addr: 0x100a5ca90; session: <审计会话>; decompiled_at: 2026-10-26T03:22:33Z
_QWORD *__fastcall codexmate_lib::commands::accounts::get_cached_display_snapshot::h345feb090b2a25d7(
        _QWORD *__dst,
        double a2)
{
  _QWORD *v3; // rdi
  char v4; // r14
  _BYTE __src[912]; // [rsp+0h] [rbp-390h] BYREF

  if ( qword_101B47190 ) /*0x100a5caaf*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h1eba439e1a029583(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27); /*0x100a5cb1c*/
    v3 = (_QWORD *)codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27; /*0x100a5cb21*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27 ) /*0x100a5cb2b*/
      goto LABEL_3; /*0x100a5cb2b*/
  }
  else
  {
    v3 = (_QWORD *)codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27; /*0x100a5cab1*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27 ) /*0x100a5cabb*/
      goto LABEL_3; /*0x100a5cabb*/
  }
  v3 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27); /*0x100a5cb39*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a2); /*0x100a5cabd*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100a5cacc*/
  {
    v4 = 0; /*0x100a5cad4*/
    if ( byte_101B46E18 ) /*0x100a5caea*/
      goto LABEL_5; /*0x100a5caea*/
LABEL_11:
    if ( dword_101B46E20 == 3 ) /*0x100a5cb69*/
    {
      *__dst = 3; /*0x100a5cb6b*/
      if ( v4 ) /*0x100a5cb75*/
        goto LABEL_16; /*0x100a5cb75*/
    }
    else
    {
      _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h044631d9923b3cdf(__src); /*0x100a5cb87*/
      v3 = __dst; /*0x100a5cb98*/
      memcpy(__dst, __src, 0x370u); /*0x100a5cb9b*/
      if ( v4 ) /*0x100a5cba3*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27); /*0x100a5cbad*/
        return __dst; /*0x100a5cbb4*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100a5cbe5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) )
    {
      byte_101B46E18 = 1; /*0x100a5cbee*/
    }
    goto LABEL_16; /*0x100a5cbf5*/
  }
  v4 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) ^ 1; /*0x100a5cb49*/
  if ( !byte_101B46E18 ) /*0x100a5cb60*/
    goto LABEL_11; /*0x100a5cb60*/
LABEL_5:
  if ( !v4 /*0x100a5cbcc*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) )
  {
    byte_101B46E18 = 1; /*0x100a5cbd9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h3638e155aa2a2d27); /*0x100a5cb04*/
  *__dst = 3; /*0x100a5cb09*/
  return __dst; /*0x100a5cbbc*/
}