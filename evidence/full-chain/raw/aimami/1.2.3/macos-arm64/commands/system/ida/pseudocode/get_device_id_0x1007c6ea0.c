// __ZN13codexmate_lib8commands6system13get_device_id @ 0x1007c6ea0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::get_device_id::h546f0f813129401f(__int64 a1, __int64 *a2)
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
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v19[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v21[12]; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h]
  __int64 v24; // [rsp+F0h] [rbp-50h]
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h]
  __int64 v27; // [rsp+108h] [rbp-38h]
  _DWORD v28[12]; // [rsp+110h] [rbp-30h]

  v4 = *a2; /*0x1007c6eba*/
  if ( !*a2 ) /*0x1007c6eba*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c6fda*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007c6ec6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007c6ed6*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1007c6fe7*/
    LOBYTE(v7) = v7 ^ 1; /*0x1007c6fea*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c6ff8*/
      goto LABEL_5; /*0x1007c6ffe*/
LABEL_10:
    v13 = a2 + 2; /*0x1007c7004*/
    codexmate_lib::core::repository::Repository::get_or_create_device_id::h9c8ab60e55847caa(v21, v13); /*0x1007c700f*/
    if ( LODWORD(v21[0]) == 11 ) /*0x1007c701b*/
    {
      *(_QWORD *)(a1 + 24) = v21[3]; /*0x1007c7024*/
      v15 = v21[1]; /*0x1007c7028*/
      v16 = v21[2]; /*0x1007c702f*/
      *(_QWORD *)(a1 + 16) = v21[2]; /*0x1007c7036*/
      *(_QWORD *)(a1 + 8) = v15; /*0x1007c703a*/
      *(_QWORD *)a1 = 0; /*0x1007c703e*/
      if ( (_BYTE)v7 ) /*0x1007c7048*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c7110*/
        return a1; /*0x1007c7113*/
      }
    }
    else
    {
      qmemcpy(v19, v21, sizeof(v19)); /*0x1007c7069*/
      v25 = 0; /*0x1007c706c*/
      v26 = 1; /*0x1007c7074*/
      v27 = 0; /*0x1007c707c*/
      v20[2] = 1610612768; /*0x1007c7084*/
      v20[0] = &v25; /*0x1007c7093*/
      v20[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c70a1*/
      v13 = v20; /*0x1007c70a8*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c70b2*/
                              v19,
                              v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c7186*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v22,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v22 = v25; /*0x1007c70c7*/
      v23 = v26; /*0x1007c70cb*/
      v24 = v27; /*0x1007c70d3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v21); /*0x1007c70de*/
      *(_QWORD *)(a1 + 24) = v24; /*0x1007c70e7*/
      v17 = v22; /*0x1007c70eb*/
      v16 = v23; /*0x1007c70ef*/
      *(_QWORD *)(a1 + 16) = v23; /*0x1007c70f3*/
      *(_QWORD *)(a1 + 8) = v17; /*0x1007c70f7*/
      *(_QWORD *)a1 = 1; /*0x1007c70fb*/
      if ( (_BYTE)v7 ) /*0x1007c7105*/
        goto LABEL_16; /*0x1007c7105*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007c718d*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v13, v14, v16) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007c719a*/
    }
    goto LABEL_16; /*0x1007c719e*/
  }
  v7 = 0; /*0x1007c6ee2*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1007c6ef5*/
    goto LABEL_10; /*0x1007c6ef5*/
LABEL_5:
  v21[0] = 0; /*0x1007c6efb*/
  v21[1] = 1; /*0x1007c6f06*/
  v21[2] = 0; /*0x1007c6f11*/
  v19[2] = 1610612768; /*0x1007c6f1c*/
  v19[0] = v21; /*0x1007c6f2e*/
  v19[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c6f3c*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c714b*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v22,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v8 = v21[0]; /*0x1007c6f69*/
  v9 = v21[1]; /*0x1007c6f70*/
  v10 = v7; /*0x1007c6f77*/
  v11 = v21[2]; /*0x1007c6f7a*/
  v28[0] = *(_DWORD *)((char *)&v21[2] + 1); /*0x1007c6f88*/
  *(_DWORD *)((char *)v28 + 3) = HIDWORD(v21[2]); /*0x1007c6f91*/
  if ( !(_BYTE)v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v10) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007c715f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c6fa7*/
  *(_QWORD *)(a1 + 8) = v8; /*0x1007c6fac*/
  *(_QWORD *)(a1 + 16) = v9; /*0x1007c6fb0*/
  *(_BYTE *)(a1 + 24) = v11; /*0x1007c6fb4*/
  v12 = *(_DWORD *)((char *)v28 + 3); /*0x1007c6fbb*/
  *(_DWORD *)(a1 + 25) = v28[0]; /*0x1007c6fbe*/
  *(_DWORD *)(a1 + 28) = v12; /*0x1007c6fc2*/
  *(_QWORD *)a1 = 1; /*0x1007c6fc6*/
  return a1; /*0x1007c711b*/
}