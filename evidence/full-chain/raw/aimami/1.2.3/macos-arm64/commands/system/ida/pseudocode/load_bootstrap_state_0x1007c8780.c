// __ZN13codexmate_lib8commands6system20load_bootstrap_state @ 0x1007c8780 | 基线 same-set
char *__fastcall codexmate_lib::commands::system::load_bootstrap_state::h133866e46475fbff(char *__dst, __int64 *a2)
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
  _QWORD __src[142]; // [rsp+0h] [rbp-8C0h] BYREF
  __int64 __dsta; // [rsp+470h] [rbp-450h] BYREF
  __int64 v17; // [rsp+478h] [rbp-448h]
  __int64 v18; // [rsp+480h] [rbp-440h]
  _BYTE v19[7]; // [rsp+890h] [rbp-30h]
  _BYTE v20[41]; // [rsp+897h] [rbp-29h] BYREF

  v3 = *a2; /*0x1007c879a*/
  if ( !*a2 ) /*0x1007c879a*/
    v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c88b7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1007c87a6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5); /*0x1007c88c4*/
    LOBYTE(v6) = v6 ^ 1; /*0x1007c88c7*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c88d5*/
      goto LABEL_5; /*0x1007c88db*/
  }
  else
  {
    v6 = 0; /*0x1007c87c2*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      __dsta = 0; /*0x1007c87db*/
      v17 = 1; /*0x1007c87e6*/
      v18 = 0; /*0x1007c87f1*/
      __src[2] = 1610612768; /*0x1007c87fc*/
      __src[0] = &__dsta; /*0x1007c880e*/
      __src[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c881c*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8961*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v20,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v7 = __dsta; /*0x1007c8849*/
      v8 = v17; /*0x1007c8850*/
      v9 = v6; /*0x1007c8857*/
      v10 = v18; /*0x1007c885a*/
      *(_DWORD *)v19 = *(_DWORD *)((char *)&v18 + 1); /*0x1007c8868*/
      *(_DWORD *)&v19[3] = HIDWORD(v18); /*0x1007c8871*/
      if ( !(_BYTE)v9
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               0x7FFFFFFFFFFFFFFFLL,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v9) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007c8975*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c8887*/
      *((_QWORD *)__dst + 1) = v7; /*0x1007c888c*/
      *((_QWORD *)__dst + 2) = v8; /*0x1007c8890*/
      __dst[24] = v10; /*0x1007c8894*/
      v11 = *(_DWORD *)&v19[3]; /*0x1007c889b*/
      *(_DWORD *)(__dst + 25) = *(_DWORD *)v19; /*0x1007c889e*/
      *((_DWORD *)__dst + 7) = v11; /*0x1007c88a2*/
      *(_QWORD *)__dst = 2; /*0x1007c88a6*/
      return __dst; /*0x1007c88ad*/
    }
  }
  codexmate_lib::core::repository::Repository::load_bootstrap_state::h3c5dbe1baa3c80e6(&__dsta, (__int64)(a2 + 2)); /*0x1007c88ec*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he470c5dea3c06c27(__src, &__dsta); /*0x1007c88ff*/
  memcpy(__dst, __src, 0x470u); /*0x1007c8913*/
  if ( !(_BYTE)v6 /*0x1007c897e*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v12, v13) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007c8987*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c8929*/
  return __dst; /*0x1007c8931*/
}