// __ZN13codexmate_lib8commands6system26get_usage_refresh_interval @ 0x1007cae80 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::get_usage_refresh_interval::hb3238502078603b4(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rcx
  char v11; // r15
  int v12; // ecx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 (__fastcall **v16)(); // rcx
  __int64 *v18; // [rsp+0h] [rbp-60h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+8h] [rbp-58h]
  __int64 v20; // [rsp+10h] [rbp-50h]
  __int64 v21; // [rsp+18h] [rbp-48h] BYREF
  __int64 v22; // [rsp+20h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-38h]
  _BYTE v24[7]; // [rsp+30h] [rbp-30h]
  _BYTE v25[41]; // [rsp+37h] [rbp-29h] BYREF

  v4 = *a2; /*0x1007cae97*/
  if ( !*a2 ) /*0x1007cae97*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007caf8d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007caea3*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1007caf9a*/
    LOBYTE(v7) = v7 ^ 1; /*0x1007caf9d*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007cafab*/
      goto LABEL_5; /*0x1007cafb1*/
  }
  else
  {
    v7 = 0; /*0x1007caebf*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v21 = 0; /*0x1007caed8*/
      v22 = 1; /*0x1007caee0*/
      v23 = 0; /*0x1007caee8*/
      v20 = 1610612768; /*0x1007caef0*/
      v18 = &v21; /*0x1007caefc*/
      v19 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007caf07*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v18) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cb029*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v25,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v8 = v21; /*0x1007caf2e*/
      v9 = v22; /*0x1007caf32*/
      v10 = v7; /*0x1007caf36*/
      v11 = v23; /*0x1007caf39*/
      *(_DWORD *)v24 = *(_DWORD *)((char *)&v23 + 1); /*0x1007caf41*/
      *(_DWORD *)&v24[3] = HIDWORD(v23); /*0x1007caf47*/
      if ( !(_BYTE)v10
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               0x7FFFFFFFFFFFFFFFLL,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v10) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007cb03d*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007caf5d*/
      *(_QWORD *)(a1 + 8) = v8; /*0x1007caf62*/
      *(_QWORD *)(a1 + 16) = v9; /*0x1007caf66*/
      *(_BYTE *)(a1 + 24) = v11; /*0x1007caf6a*/
      v12 = *(_DWORD *)&v24[3]; /*0x1007caf71*/
      *(_DWORD *)(a1 + 25) = *(_DWORD *)v24; /*0x1007caf74*/
      *(_DWORD *)(a1 + 28) = v12; /*0x1007caf78*/
      *(_QWORD *)a1 = 1; /*0x1007caf7c*/
      return a1; /*0x1007caf83*/
    }
  }
  v13 = a2 + 2; /*0x1007cafb7*/
  codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hb6d7bcb95d9da811(&v18, v13); /*0x1007cafbf*/
  *(_QWORD *)(a1 + 24) = v20; /*0x1007cafc8*/
  v15 = v18; /*0x1007cafcc*/
  v16 = v19; /*0x1007cafd0*/
  *(_QWORD *)(a1 + 16) = v19; /*0x1007cafd4*/
  *(_QWORD *)(a1 + 8) = v15; /*0x1007cafd8*/
  *(_QWORD *)a1 = 0; /*0x1007cafdc*/
  if ( !(_BYTE)v7 /*0x1007cb046*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v18, v13, v14, v16) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007cb04f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007caff4*/
  return a1; /*0x1007caffc*/
}