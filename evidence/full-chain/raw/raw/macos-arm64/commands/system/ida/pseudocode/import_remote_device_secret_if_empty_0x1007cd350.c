// __ZN13codexmate_lib8commands6system36import_remote_device_secret_if_empty @ 0x1007cd350 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::import_remote_device_secret_if_empty::h15d2e96febc08e0d(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r12
  _QWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // cl
  char v13; // r12
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v23[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v24[12]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v25[3]; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-58h]
  __int64 v28; // [rsp+F0h] [rbp-50h]
  __int64 v29; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+100h] [rbp-40h]
  __int64 v31; // [rsp+108h] [rbp-38h]
  _QWORD *v32; // [rsp+110h] [rbp-30h]

  v32 = a3; /*0x1007cd364*/
  v5 = *a2; /*0x1007cd36e*/
  if ( !*a2 ) /*0x1007cd36e*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007cd4a1*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1007cd37a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1007cd4b1*/
    v9 = v32; /*0x1007cd4bc*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v24[0] = 0; /*0x1007cd3aa*/
      v24[1] = 1; /*0x1007cd3b5*/
      v24[2] = 0; /*0x1007cd3c0*/
      v23[2] = 1610612768; /*0x1007cd3cb*/
      v23[0] = v24; /*0x1007cd3dd*/
      v23[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cd3eb*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v23) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cd617*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v26,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v10 = v24[0]; /*0x1007cd415*/
      v11 = v24[1]; /*0x1007cd41c*/
      v12 = v8; /*0x1007cd423*/
      v13 = v24[2]; /*0x1007cd426*/
      LODWORD(v25[0]) = *(_DWORD *)((char *)&v24[2] + 1); /*0x1007cd434*/
      *(_DWORD *)((char *)v25 + 3) = HIDWORD(v24[2]); /*0x1007cd43d*/
      if ( !v12
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007cd62b*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cd45d*/
      v14 = v25[0]; /*0x1007cd462*/
      *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)v25 + 3); /*0x1007cd468*/
      *(_DWORD *)(a1 + 17) = v14; /*0x1007cd46c*/
      *(_QWORD *)a1 = v10; /*0x1007cd470*/
      *(_QWORD *)(a1 + 8) = v11; /*0x1007cd473*/
      *(_BYTE *)(a1 + 16) = v13; /*0x1007cd477*/
      v15 = *v32; /*0x1007cd47f*/
      if ( *v32 ) /*0x1007cd47f*/
      {
        v16 = v32[1]; /*0x1007cd48b*/
LABEL_19:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1007cd5df*/
        return a1; /*0x1007cd5df*/
      }
      return a1; /*0x1007cd485*/
    }
  }
  else
  {
    v8 = 0; /*0x1007cd396*/
    v9 = v32; /*0x1007cd3a0*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007cd399*/
      goto LABEL_5; /*0x1007cd3a4*/
  }
  v17 = a2 + 2; /*0x1007cd4c6*/
  v18 = v9[2]; /*0x1007cd4ce*/
  v19 = v9[1]; /*0x1007cd4d2*/
  codexmate_lib::core::repository::Repository::import_remote_device_secret_if_empty::h01c08313762361c4( /*0x1007cd4df*/
    v24,
    v17,
    v19,
    v18);
  if ( LODWORD(v24[0]) == 11 ) /*0x1007cd4eb*/
  {
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1007cd4fb*/
    if ( v8 ) /*0x1007cd501*/
      goto LABEL_17; /*0x1007cd501*/
    goto LABEL_16; /*0x1007cd501*/
  }
  qmemcpy(v23, v24, sizeof(v23)); /*0x1007cd522*/
  v29 = 0; /*0x1007cd525*/
  v30 = 1; /*0x1007cd52d*/
  v31 = 0; /*0x1007cd535*/
  v25[2] = 1610612768; /*0x1007cd53d*/
  v25[0] = &v29; /*0x1007cd549*/
  v25[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cd554*/
  v17 = v25; /*0x1007cd558*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cd55f*/
                          v23,
                          v25) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cd653*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v26,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v26 = v29; /*0x1007cd574*/
  v27 = v30; /*0x1007cd578*/
  v28 = v31; /*0x1007cd580*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v24); /*0x1007cd58b*/
  *(_QWORD *)(a1 + 16) = v28; /*0x1007cd594*/
  v21 = v26; /*0x1007cd598*/
  *(_QWORD *)(a1 + 8) = v27; /*0x1007cd5a0*/
  *(_QWORD *)a1 = v21; /*0x1007cd5a4*/
  if ( !v8 ) /*0x1007cd5b4*/
  {
LABEL_16:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007cd65a*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v24,
                             v17,
                             v20,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007cd667*/
    }
  }
LABEL_17:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cd5c3*/
  v15 = *v32; /*0x1007cd5cf*/
  if ( *v32 ) /*0x1007cd5cf*/
  {
    v16 = v19; /*0x1007cd5dc*/
    goto LABEL_19; /*0x1007cd5dc*/
  }
  return a1; /*0x1007cd5e7*/
}