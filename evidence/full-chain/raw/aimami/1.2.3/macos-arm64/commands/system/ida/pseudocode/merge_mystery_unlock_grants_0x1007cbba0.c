// __ZN13codexmate_lib8commands6system27merge_mystery_unlock_grants @ 0x1007cbba0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::merge_mystery_unlock_grants::he22875c95b694a59(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r12
  char v12; // bl
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // r13
  __int64 v17; // rsi
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rax
  _QWORD v25[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v26[12]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v27[3]; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h]
  __int64 v30; // [rsp+F0h] [rbp-50h]
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h]
  __int64 v33; // [rsp+108h] [rbp-38h]
  __int64 *v34; // [rsp+110h] [rbp-30h]

  v34 = a2; /*0x1007cbbba*/
  v5 = *a2; /*0x1007cbbbe*/
  if ( !*a2 ) /*0x1007cbbbe*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v34); /*0x1007cbe97*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1007cbbca*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cbbda*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x1007cbea4*/
    LOBYTE(v8) = v8 ^ 1; /*0x1007cbea7*/
  }
  else
  {
    v8 = 0; /*0x1007cbbe6*/
  }
  if ( !*((_BYTE *)v34 + 8) ) /*0x1007cbbfd*/
  {
    v18 = v34 + 2; /*0x1007cbd38*/
    v25[2] = a3[2]; /*0x1007cbd40*/
    v19 = *a3; /*0x1007cbd47*/
    v25[1] = a3[1]; /*0x1007cbd4e*/
    v25[0] = v19; /*0x1007cbd55*/
    codexmate_lib::core::repository::Repository::merge_mystery_unlock_grants::h6df1034a42672e41(v26, v34 + 2, v25); /*0x1007cbd6a*/
    if ( LODWORD(v26[0]) == 11 ) /*0x1007cbd76*/
    {
      *(_QWORD *)(a1 + 24) = v26[3]; /*0x1007cbd82*/
      v20 = v26[1]; /*0x1007cbd86*/
      v21 = v26[2]; /*0x1007cbd8d*/
      *(_QWORD *)(a1 + 16) = v26[2]; /*0x1007cbd94*/
      *(_QWORD *)(a1 + 8) = v20; /*0x1007cbd98*/
      *(_QWORD *)a1 = 0; /*0x1007cbd9c*/
      v22 = v34; /*0x1007cbda3*/
      if ( (_BYTE)v8 ) /*0x1007cbdaa*/
      {
LABEL_22:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v22); /*0x1007cbe71*/
        return a1; /*0x1007cbe74*/
      }
    }
    else
    {
      qmemcpy(v25, v26, sizeof(v25)); /*0x1007cbdcb*/
      v31 = 0; /*0x1007cbdce*/
      v32 = 1; /*0x1007cbdd6*/
      v33 = 0; /*0x1007cbdde*/
      v27[2] = 1610612768; /*0x1007cbde6*/
      v27[0] = &v31; /*0x1007cbdf2*/
      v27[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cbdfd*/
      v18 = v27; /*0x1007cbe01*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cbe08*/
                              v25,
                              v27) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cbf0d*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v28,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v28 = v31; /*0x1007cbe1d*/
      v29 = v32; /*0x1007cbe21*/
      v30 = v33; /*0x1007cbe29*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v26); /*0x1007cbe34*/
      *(_QWORD *)(a1 + 24) = v30; /*0x1007cbe40*/
      v23 = v28; /*0x1007cbe44*/
      v21 = v29; /*0x1007cbe48*/
      *(_QWORD *)(a1 + 16) = v29; /*0x1007cbe4c*/
      *(_QWORD *)(a1 + 8) = v23; /*0x1007cbe50*/
      *(_QWORD *)a1 = 1; /*0x1007cbe54*/
      v22 = v34; /*0x1007cbe5b*/
      if ( (_BYTE)v8 ) /*0x1007cbe62*/
        goto LABEL_22; /*0x1007cbe62*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007cbf14*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v26,
                             v18,
                             0x7FFFFFFFFFFFFFFFLL,
                             v21) )
    {
      *((_BYTE *)v22 + 8) = 1; /*0x1007cbf21*/
    }
    goto LABEL_22; /*0x1007cbf25*/
  }
  v26[0] = 0; /*0x1007cbc03*/
  v26[1] = 1; /*0x1007cbc0e*/
  v26[2] = 0; /*0x1007cbc19*/
  v25[2] = 1610612768; /*0x1007cbc24*/
  v25[0] = v26; /*0x1007cbc36*/
  v25[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cbc44*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v25) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cbece*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v28,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v9 = v26[0]; /*0x1007cbc71*/
  v10 = v8; /*0x1007cbc78*/
  v11 = v26[1]; /*0x1007cbc7b*/
  v12 = v26[2]; /*0x1007cbc82*/
  LODWORD(v27[0]) = *(_DWORD *)((char *)&v26[2] + 1); /*0x1007cbc8f*/
  *(_DWORD *)((char *)v27 + 3) = HIDWORD(v26[2]); /*0x1007cbc98*/
  if ( !(_BYTE)v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v10) )
  {
    *((_BYTE *)v34 + 8) = 1; /*0x1007cbee6*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v34); /*0x1007cbcb2*/
  v13 = v27[0]; /*0x1007cbcb7*/
  *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)v27 + 3); /*0x1007cbcbd*/
  *(_DWORD *)(a1 + 25) = v13; /*0x1007cbcc1*/
  *(_QWORD *)(a1 + 8) = v9; /*0x1007cbcc5*/
  *(_QWORD *)(a1 + 16) = v11; /*0x1007cbcc9*/
  *(_BYTE *)(a1 + 24) = v12; /*0x1007cbccd*/
  *(_QWORD *)a1 = 1; /*0x1007cbcd1*/
  v14 = a3[1]; /*0x1007cbcd8*/
  v15 = a3[2]; /*0x1007cbcdc*/
  if ( v15 ) /*0x1007cbce3*/
  {
    v16 = (_QWORD *)(v14 + 24); /*0x1007cbce5*/
    do /*0x1007cbcf7*/
    {
      v17 = *(v16 - 1); /*0x1007cbcf9*/
      if ( v17 ) /*0x1007cbd00*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x1007cbd0b*/
      v16 += 5; /*0x1007cbcf0*/
      --v15; /*0x1007cbcf4*/
    }
    while ( v15 ); /*0x1007cbcf7*/
  }
  if ( *a3 ) /*0x1007cbd12*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 40 * *a3, 8); /*0x1007cbd2e*/
  return a1; /*0x1007cbe7c*/
}