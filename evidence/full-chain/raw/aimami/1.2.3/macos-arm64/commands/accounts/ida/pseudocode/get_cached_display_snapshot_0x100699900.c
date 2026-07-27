// __ZN13codexmate_lib8commands8accounts27get_cached_display_snapshot @ 0x100699900 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::accounts::get_cached_display_snapshot::h4fea18137767a522(
        _QWORD *__dst,
        _BYTE *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14
  _BYTE __src[848]; // [rsp+0h] [rbp-350h] BYREF

  if ( qword_1019FF070 ) /*0x10069991f*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hf4b9d93378c2f010(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x10069998c*/
    v3 = (_QWORD *)codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x100699991*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc ) /*0x10069999b*/
      goto LABEL_3; /*0x10069999b*/
  }
  else
  {
    v3 = (_QWORD *)codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x100699921*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc ) /*0x10069992b*/
      goto LABEL_3; /*0x10069992b*/
  }
  v3 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x1006999a9*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x10069992d*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10069993c*/
  {
    v6 = 0; /*0x100699944*/
    if ( byte_1019FED38 ) /*0x10069995a*/
      goto LABEL_5; /*0x10069995a*/
LABEL_11:
    if ( dword_1019FED40 == 3 ) /*0x1006999d9*/
    {
      *__dst = 3; /*0x1006999db*/
      if ( v6 ) /*0x1006999e5*/
        goto LABEL_16; /*0x1006999e5*/
    }
    else
    {
      _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(__src); /*0x1006999f7*/
      a2 = __src; /*0x1006999fc*/
      v3 = __dst; /*0x100699a08*/
      memcpy(__dst, __src, 0x330u); /*0x100699a0b*/
      if ( v6 ) /*0x100699a13*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x100699a1d*/
        return __dst; /*0x100699a24*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100699a55*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
    {
      byte_1019FED38 = 1; /*0x100699a5e*/
    }
    goto LABEL_16; /*0x100699a65*/
  }
  v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1006999b9*/
  if ( !byte_1019FED38 ) /*0x1006999d0*/
    goto LABEL_11; /*0x1006999d0*/
LABEL_5:
  if ( !v6 /*0x100699a3c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
  {
    byte_1019FED38 = 1; /*0x100699a49*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x100699974*/
  *__dst = 3; /*0x100699979*/
  return __dst; /*0x100699a2c*/
}