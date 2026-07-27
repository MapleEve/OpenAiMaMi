// __ZN13codexmate_lib8platform9debug_log12write_health @ 0x100916db0 | 基线 same-set
__int64 *__fastcall codexmate_lib::platform::debug_log::write_health::h772bf53df6e894a1(__int64 *a1, __int128 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r12
  unsigned __int64 v9; // r14
  _QWORD v11[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-30h]

  v12 = codexmate_lib::platform::debug_log::LOG_WRITE_FAILURES::h697566ae947851b1; /*0x100916dcb*/
  v5 = (_QWORD *)codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5; /*0x100916dcf*/
  if ( !codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5 ) /*0x100916dd9*/
    v5 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5); /*0x100916e25*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100916de5*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100916df4*/
  {
    v8 = 0; /*0x100916dfc*/
    v9 = 0x8000000000000000LL; /*0x100916e06*/
    if ( (_QWORD)xmmword_1019FF278 == 0x8000000000000000LL ) /*0x100916e10*/
      goto LABEL_5; /*0x100916e10*/
LABEL_8:
    a2 = &xmmword_1019FF278; /*0x100916e49*/
    v5 = v11; /*0x100916e50*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, &xmmword_1019FF278); /*0x100916e54*/
    v9 = v11[0]; /*0x100916e59*/
    v3 = v11[1]; /*0x100916e5d*/
    v2 = v11[2]; /*0x100916e61*/
    if ( v8 ) /*0x100916e68*/
      goto LABEL_10; /*0x100916e68*/
    goto LABEL_9; /*0x100916e68*/
  }
  v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x100916e32*/
  v9 = 0x8000000000000000LL; /*0x100916e3d*/
  if ( (_QWORD)xmmword_1019FF278 != 0x8000000000000000LL ) /*0x100916e47*/
    goto LABEL_8; /*0x100916e47*/
LABEL_5:
  if ( v8 ) /*0x100916e15*/
    goto LABEL_10; /*0x100916e15*/
LABEL_9:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100916eb4*/
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    byte_1019FF270 = 1; /*0x100916ebd*/
  }
LABEL_10:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5); /*0x100916e83*/
  a1[1] = v9; /*0x100916e8f*/
  a1[2] = v3; /*0x100916e93*/
  a1[3] = v2; /*0x100916e97*/
  *a1 = v12; /*0x100916e9f*/
  return a1; /*0x100916ea5*/
}