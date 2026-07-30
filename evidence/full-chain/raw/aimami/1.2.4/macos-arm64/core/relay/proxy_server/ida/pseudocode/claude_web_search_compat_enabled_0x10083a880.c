// __ZN13codexmate_lib4core5relay12proxy_server32claude_web_search_compat_enabled @ 0x10083a880 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::proxy_server::claude_web_search_compat_enabled::h004030d6fef010df(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rdi
  _BYTE *v5; // r15
  char v7; // al

  v3 = *a1; /*0x10083a88e*/
  v4 = *(_QWORD *)(*a1 + 16); /*0x10083a891*/
  if ( !v4 ) /*0x10083a898*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h719e63cd76cd1e9b(v3 + 16); /*0x10083a913*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x10083a8a4*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10083a8b4*/
  {
    v5 = (_BYTE *)(v3 + 24); /*0x10083a8bc*/
    if ( *(_BYTE *)(v3 + 24) ) /*0x10083a8c0*/
    {
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10083a930*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2) )
      {
        *v5 = 1; /*0x10083a939*/
      }
      goto LABEL_6; /*0x10083a93d*/
    }
    v2 = *(unsigned __int8 *)(v3 + 350); /*0x10083a8df*/
    goto LABEL_8; /*0x10083a8df*/
  }
  v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2); /*0x10083a918*/
  v5 = (_BYTE *)(v3 + 24); /*0x10083a91d*/
  if ( !*(_BYTE *)(v3 + 24) ) /*0x10083a928*/
  {
    v2 = *(unsigned __int8 *)(v3 + 350); /*0x10083a93f*/
    if ( !v7 ) /*0x10083a949*/
    {
LABEL_9:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 16), a2); /*0x10083a8f0*/
      return v2; /*0x10083a8f4*/
    }
LABEL_8:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10083a94d*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2) )
    {
      *v5 = 1; /*0x10083a956*/
    }
    goto LABEL_9; /*0x10083a95a*/
  }
  if ( v7 ) /*0x10083a92c*/
    goto LABEL_5; /*0x10083a92c*/
LABEL_6:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 16), a2); /*0x10083a8d2*/
  LOBYTE(v2) = 1; /*0x10083a8db*/
  return v2; /*0x10083a8ff*/
}