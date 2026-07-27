// __ZN13codexmate_lib4core5voice7runtime31set_trigger_listener_suppressed @ 0x100689370 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::set_trigger_listener_suppressed::hc1fcf1818f7c5caf(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // r13
  char v10; // al
  char v12; // al

  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100689387*/
  v5 = v4; /*0x10068938c*/
  v6 = *(_QWORD *)(v4 + 32); /*0x10068938f*/
  if ( !v6 ) /*0x100689396*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x100689412*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1006893a2*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006893b1*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x100689417*/
    v9 = (_BYTE *)(v5 + 40); /*0x10068941f*/
    v8 = *(unsigned __int8 *)(v5 + 40); /*0x100689423*/
    if ( !(_BYTE)v8 ) /*0x10068942a*/
    {
      v10 = v12 ^ 1; /*0x100689442*/
      if ( *(_DWORD *)(v5 + 64) == 3 ) /*0x100689449*/
      {
LABEL_7:
        if ( v10 ) /*0x1006893de*/
          goto LABEL_9; /*0x1006893de*/
        goto LABEL_8; /*0x1006893de*/
      }
LABEL_6:
      v8 = *(_QWORD *)(v5 + 80); /*0x1006893d2*/
      v7 = a3; /*0x1006893d6*/
      *(_BYTE *)(v8 + 16) = a3; /*0x1006893d9*/
      goto LABEL_7; /*0x1006893d9*/
    }
    if ( !v12 ) /*0x10068942e*/
      goto LABEL_9; /*0x10068942e*/
  }
  else
  {
    v9 = (_BYTE *)(v5 + 40); /*0x1006893bc*/
    if ( !*(_BYTE *)(v5 + 40) ) /*0x1006893c0*/
    {
      v10 = 0; /*0x1006893c9*/
      if ( *(_DWORD *)(v5 + 64) == 3 ) /*0x1006893d0*/
        goto LABEL_7; /*0x1006893d0*/
      goto LABEL_6; /*0x1006893d0*/
    }
  }
LABEL_8:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100689432*/
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8) )
  {
    *v9 = 1; /*0x10068943b*/
  }
LABEL_9:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v5 + 32)); /*0x1006893e8*/
  *a1 = 0x8000000000000000LL; /*0x1006893f4*/
  return a1; /*0x1006893fe*/
}