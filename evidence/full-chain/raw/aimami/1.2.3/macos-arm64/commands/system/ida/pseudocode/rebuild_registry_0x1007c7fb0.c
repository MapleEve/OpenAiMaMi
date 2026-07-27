// __ZN13codexmate_lib8commands6system16rebuild_registry @ 0x1007c7fb0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::rebuild_registry::h5cca334a5a752c9d(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r12
  char v10; // cl
  __int64 v11; // r14
  char v12; // r13
  int v13; // ecx
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD v20[14]; // [rsp+8h] [rbp-148h] BYREF
  _QWORD v21[12]; // [rsp+78h] [rbp-D8h] BYREF
  _QWORD v22[3]; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-58h]
  __int64 v25; // [rsp+100h] [rbp-50h]
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h]
  __int64 v28; // [rsp+118h] [rbp-38h]
  _DWORD v29[12]; // [rsp+120h] [rbp-30h]

  v4 = *a2; /*0x1007c7fca*/
  if ( !*a2 ) /*0x1007c7fca*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c80fd*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007c7fd6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007c7fe5*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1007c810d*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c811b*/
      goto LABEL_5; /*0x1007c8121*/
LABEL_10:
    codexmate_lib::core::repository::Repository::rebuild_registry_with_policy::hbfa144768b254519( /*0x1007c8127*/
      (char *)v20,
      a2 + 2,
      0,
      0);
    if ( v20[0] == 0x8000000000000000LL ) /*0x1007c8146*/
    {
      qmemcpy(v21, &v20[1], sizeof(v21)); /*0x1007c8162*/
      v26 = 0; /*0x1007c8165*/
      v27 = 1; /*0x1007c816d*/
      v28 = 0; /*0x1007c8175*/
      v22[2] = 1610612768; /*0x1007c817d*/
      v22[0] = &v26; /*0x1007c8189*/
      v22[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c8194*/
      v15 = v22; /*0x1007c8198*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c819f*/
                              v21,
                              v22) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c828e*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v23,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v23 = v26; /*0x1007c81b4*/
      v24 = v27; /*0x1007c81b8*/
      v25 = v28; /*0x1007c81c0*/
      v16 = &v20[1]; /*0x1007c81c4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v20[1]); /*0x1007c81cb*/
      a1[3] = v25; /*0x1007c81d4*/
      v17 = v23; /*0x1007c81d8*/
      v18 = v24; /*0x1007c81dc*/
      a1[2] = v24; /*0x1007c81e0*/
      a1[1] = v17; /*0x1007c81e4*/
      *a1 = 0x8000000000000000LL; /*0x1007c81e8*/
      if ( v7 ) /*0x1007c81ee*/
        goto LABEL_16; /*0x1007c81ee*/
    }
    else
    {
      qmemcpy(a1, v20, 0x70u); /*0x1007c8201*/
      v15 = v21; /*0x1007c8201*/
      v16 = a1 + 14; /*0x1007c8201*/
      v18 = 0; /*0x1007c8201*/
      if ( v7 ) /*0x1007c8207*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c8218*/
        return a1; /*0x1007c821b*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007c8295*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, v15, v14, v18) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007c82a2*/
    }
    goto LABEL_16; /*0x1007c82a6*/
  }
  v7 = 0; /*0x1007c7ff1*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1007c8004*/
    goto LABEL_10; /*0x1007c8004*/
LABEL_5:
  v21[0] = 0; /*0x1007c800a*/
  v21[1] = 1; /*0x1007c8015*/
  v21[2] = 0; /*0x1007c8020*/
  v20[2] = 1610612768; /*0x1007c802b*/
  v20[0] = v21; /*0x1007c803d*/
  v20[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c804b*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v20) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8253*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v23,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v9 = v21[0]; /*0x1007c8072*/
  v10 = v7; /*0x1007c8079*/
  v11 = v21[1]; /*0x1007c807c*/
  v12 = v21[2]; /*0x1007c8083*/
  v29[0] = *(_DWORD *)((char *)&v21[2] + 1); /*0x1007c8091*/
  *(_DWORD *)((char *)v29 + 3) = HIDWORD(v21[2]); /*0x1007c809a*/
  if ( !v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v8,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007c8267*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c80c1*/
  a1[1] = v9; /*0x1007c80c6*/
  a1[2] = v11; /*0x1007c80ca*/
  *((_BYTE *)a1 + 24) = v12; /*0x1007c80ce*/
  v13 = *(_DWORD *)((char *)v29 + 3); /*0x1007c80d5*/
  *(_DWORD *)((char *)a1 + 25) = v29[0]; /*0x1007c80d8*/
  *((_DWORD *)a1 + 7) = v13; /*0x1007c80dc*/
  *a1 = 0x8000000000000000LL; /*0x1007c80ed*/
  return a1; /*0x1007c8223*/
}