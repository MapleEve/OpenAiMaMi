// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x1004c9010 depth=2
// codexmate_lib8commands8accounts27get_cached_display_snapshot
_QWORD *__fastcall codexmate_lib::commands::accounts::get_cached_display_snapshot::hb232462823f1c357(_QWORD *__dst)
{
  pthread_mutex_t *v2; // rdi
  bool v3; // r14
  _BYTE __src[712]; // [rsp+8h] [rbp-2C8h] BYREF

  if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h18ef54396c9c45f0 ) /*0x1004c902f*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h9d69757b532c22a5(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h18ef54396c9c45f0); /*0x1004c909c*/
    v2 = (pthread_mutex_t *)qword_1015B1BA0; /*0x1004c90a1*/
    if ( qword_1015B1BA0 ) /*0x1004c90ab*/
      goto LABEL_3; /*0x1004c90ab*/
  }
  else
  {
    v2 = (pthread_mutex_t *)qword_1015B1BA0; /*0x1004c9031*/
    if ( qword_1015B1BA0 ) /*0x1004c903b*/
      goto LABEL_3; /*0x1004c903b*/
  }
  v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(&qword_1015B1BA0); /*0x1004c90b9*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x1004c903d*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1004c904c*/
  {
    v3 = 0; /*0x1004c9054*/
    if ( byte_1015B1BA8 ) /*0x1004c906a*/
      goto LABEL_5; /*0x1004c906a*/
LABEL_11:
    if ( dword_1015B1BB0 == 3 ) /*0x1004c90e9*/
    {
      *__dst = 3; /*0x1004c90eb*/
      if ( v3 ) /*0x1004c90f5*/
        goto LABEL_16; /*0x1004c90f5*/
    }
    else
    {
      _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h921a54e95aa6bad7( /*0x1004c9107*/
        __src,
        &dword_1015B1BB0);
      memcpy(__dst, __src, 0x2A8u); /*0x1004c911b*/
      if ( v3 ) /*0x1004c9123*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d((pthread_mutex_t *)qword_1015B1BA0); /*0x1004c912d*/
        return __dst; /*0x1004c9134*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1004c9165*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      byte_1015B1BA8 = 1; /*0x1004c916e*/
    }
    goto LABEL_16; /*0x1004c9175*/
  }
  v3 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004c90c9*/
  if ( !byte_1015B1BA8 ) /*0x1004c90e0*/
    goto LABEL_11; /*0x1004c90e0*/
LABEL_5:
  if ( !v3 /*0x1004c914c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    byte_1015B1BA8 = 1; /*0x1004c9159*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d((pthread_mutex_t *)qword_1015B1BA0); /*0x1004c9084*/
  *__dst = 3; /*0x1004c9089*/
  return __dst; /*0x1004c913c*/
}