// __ZN13codexmate_lib8commands6system24load_pending_auto_switch @ 0x1007c8db0 | 基线 same-set
char *__fastcall codexmate_lib::commands::system::load_pending_auto_switch::hcf7ef10873c61e68(char *__dst, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rcx
  char v10; // r15
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD __src[91]; // [rsp+0h] [rbp-320h] BYREF
  __int64 v16; // [rsp+2D8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+2E0h] [rbp-40h]
  __int64 v18; // [rsp+2E8h] [rbp-38h]
  _BYTE v19[7]; // [rsp+2F0h] [rbp-30h]
  _BYTE v20[41]; // [rsp+2F7h] [rbp-29h] BYREF

  v3 = *a2; /*0x1007c8dca*/
  if ( !*a2 ) /*0x1007c8dca*/
    v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c8ecc*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1007c8dd6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5); /*0x1007c8ed9*/
    LOBYTE(v6) = v6 ^ 1; /*0x1007c8edc*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c8eea*/
      goto LABEL_5; /*0x1007c8ef0*/
  }
  else
  {
    v6 = 0; /*0x1007c8df2*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v16 = 0; /*0x1007c8e0b*/
      v17 = 1; /*0x1007c8e13*/
      v18 = 0; /*0x1007c8e1b*/
      __src[2] = 1610612768; /*0x1007c8e23*/
      __src[0] = &v16; /*0x1007c8e32*/
      __src[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c8e40*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8f63*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v20,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v7 = v16; /*0x1007c8e6d*/
      v8 = v17; /*0x1007c8e71*/
      v9 = v6; /*0x1007c8e75*/
      v10 = v18; /*0x1007c8e78*/
      *(_DWORD *)v19 = *(_DWORD *)((char *)&v18 + 1); /*0x1007c8e80*/
      *(_DWORD *)&v19[3] = HIDWORD(v18); /*0x1007c8e86*/
      if ( !(_BYTE)v9
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               0x7FFFFFFFFFFFFFFFLL,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v9) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007c8f77*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c8e9c*/
      *((_QWORD *)__dst + 1) = v7; /*0x1007c8ea1*/
      *((_QWORD *)__dst + 2) = v8; /*0x1007c8ea5*/
      __dst[24] = v10; /*0x1007c8ea9*/
      v11 = *(_DWORD *)&v19[3]; /*0x1007c8eb0*/
      *(_DWORD *)(__dst + 25) = *(_DWORD *)v19; /*0x1007c8eb3*/
      *((_DWORD *)__dst + 7) = v11; /*0x1007c8eb7*/
      *(_QWORD *)__dst = 3; /*0x1007c8ebb*/
      return __dst; /*0x1007c8ec2*/
    }
  }
  codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(__src); /*0x1007c8f01*/
  memcpy(__dst, __src, 0x2D8u); /*0x1007c8f15*/
  if ( !(_BYTE)v6 /*0x1007c8f80*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v12, v13) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007c8f89*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c8f2b*/
  return __dst; /*0x1007c8f33*/
}