// __ZN13codexmate_lib8commands6system27dismiss_pending_auto_switch @ 0x1007cb840 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::dismiss_pending_auto_switch::hd83def81e23159a8(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rcx
  char v11; // r14
  int v12; // ecx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD v18[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v20[12]; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-58h]
  __int64 v23; // [rsp+F0h] [rbp-50h]
  __int64 v24; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+100h] [rbp-40h]
  __int64 v26; // [rsp+108h] [rbp-38h]
  _DWORD v27[12]; // [rsp+110h] [rbp-30h]

  v4 = *a2; /*0x1007cb85a*/
  if ( !*a2 ) /*0x1007cb85a*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007cb972*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007cb866*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cb876*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1007cb97f*/
    LOBYTE(v7) = v7 ^ 1; /*0x1007cb982*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007cb990*/
      goto LABEL_5; /*0x1007cb996*/
LABEL_10:
    v13 = a2 + 2; /*0x1007cb99c*/
    codexmate_lib::core::repository::Repository::dismiss_pending_auto_switch::hbe709b7ea92e35cc(v20, v13); /*0x1007cb9a7*/
    if ( LODWORD(v20[0]) == 11 ) /*0x1007cb9b3*/
    {
      *(_BYTE *)(a1 + 8) = v20[1]; /*0x1007cb9bc*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1007cb9c4*/
      if ( (_BYTE)v7 ) /*0x1007cb9ca*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cba8a*/
        return a1; /*0x1007cba8d*/
      }
    }
    else
    {
      qmemcpy(v18, v20, sizeof(v18)); /*0x1007cb9eb*/
      v24 = 0; /*0x1007cb9ee*/
      v25 = 1; /*0x1007cb9f6*/
      v26 = 0; /*0x1007cb9fe*/
      v19[2] = 1610612768; /*0x1007cba06*/
      v19[0] = &v24; /*0x1007cba15*/
      v19[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cba23*/
      v13 = v19; /*0x1007cba2a*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cba34*/
                              v18,
                              v19) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cbb00*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v21,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v21 = v24; /*0x1007cba49*/
      v22 = v25; /*0x1007cba4d*/
      v23 = v26; /*0x1007cba55*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v20); /*0x1007cba60*/
      *(_QWORD *)(a1 + 16) = v23; /*0x1007cba69*/
      v16 = v21; /*0x1007cba6d*/
      v15 = v22; /*0x1007cba71*/
      *(_QWORD *)(a1 + 8) = v22; /*0x1007cba75*/
      *(_QWORD *)a1 = v16; /*0x1007cba79*/
      if ( (_BYTE)v7 ) /*0x1007cba7f*/
        goto LABEL_16; /*0x1007cba7f*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007cbb07*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v13, v14, v15) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007cbb14*/
    }
    goto LABEL_16; /*0x1007cbb18*/
  }
  v7 = 0; /*0x1007cb882*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1007cb895*/
    goto LABEL_10; /*0x1007cb895*/
LABEL_5:
  v20[0] = 0; /*0x1007cb89b*/
  v20[1] = 1; /*0x1007cb8a6*/
  v20[2] = 0; /*0x1007cb8b1*/
  v18[2] = 1610612768; /*0x1007cb8bc*/
  v18[0] = v20; /*0x1007cb8ce*/
  v18[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cb8dc*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v18) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cbac5*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v21,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v8 = v20[0]; /*0x1007cb909*/
  v9 = v20[1]; /*0x1007cb910*/
  v10 = v7; /*0x1007cb917*/
  v11 = v20[2]; /*0x1007cb91a*/
  v27[0] = *(_DWORD *)((char *)&v20[2] + 1); /*0x1007cb928*/
  *(_DWORD *)((char *)v27 + 3) = HIDWORD(v20[2]); /*0x1007cb931*/
  if ( !(_BYTE)v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v10) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007cbad9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cb947*/
  *(_QWORD *)a1 = v8; /*0x1007cb94c*/
  *(_QWORD *)(a1 + 8) = v9; /*0x1007cb94f*/
  *(_BYTE *)(a1 + 16) = v11; /*0x1007cb953*/
  v12 = *(_DWORD *)((char *)v27 + 3); /*0x1007cb95a*/
  *(_DWORD *)(a1 + 17) = v27[0]; /*0x1007cb95d*/
  *(_DWORD *)(a1 + 20) = v12; /*0x1007cb961*/
  return a1; /*0x1007cba95*/
}