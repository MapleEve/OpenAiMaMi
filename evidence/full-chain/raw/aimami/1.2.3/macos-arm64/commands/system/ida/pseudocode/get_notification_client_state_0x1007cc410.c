// __ZN13codexmate_lib8commands6system29get_notification_client_state @ 0x1007cc410 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::get_notification_client_state::h581ab2e3ca1f7b6f(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  __int64 v8; // r13
  char v9; // cl
  __int64 v10; // r14
  char v11; // r12
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

  v4 = *a2; /*0x1007cc42a*/
  if ( !*a2 ) /*0x1007cc42a*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007cc55a*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007cc436*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cc446*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1007cc56a*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007cc578*/
      goto LABEL_5; /*0x1007cc57e*/
LABEL_10:
    v13 = a2 + 2; /*0x1007cc584*/
    codexmate_lib::core::repository::Repository::get_or_create_notification_client_state::h786d325b86cdf9fa(v21, v13); /*0x1007cc58f*/
    if ( LODWORD(v21[0]) == 11 ) /*0x1007cc59b*/
    {
      *(_QWORD *)(a1 + 24) = v21[4]; /*0x1007cc5a4*/
      *(_QWORD *)(a1 + 16) = v21[3]; /*0x1007cc5af*/
      v15 = v21[1]; /*0x1007cc5b3*/
      v16 = v21[2]; /*0x1007cc5ba*/
      *(_QWORD *)(a1 + 8) = v21[2]; /*0x1007cc5c1*/
      *(_QWORD *)a1 = v15; /*0x1007cc5c5*/
      if ( v7 ) /*0x1007cc5cb*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cc694*/
        return a1; /*0x1007cc697*/
      }
    }
    else
    {
      qmemcpy(v19, v21, sizeof(v19)); /*0x1007cc5ec*/
      v25 = 0; /*0x1007cc5ef*/
      v26 = 1; /*0x1007cc5f7*/
      v27 = 0; /*0x1007cc5ff*/
      v20[2] = 1610612768; /*0x1007cc607*/
      v20[0] = &v25; /*0x1007cc616*/
      v20[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cc624*/
      v13 = v20; /*0x1007cc62b*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cc635*/
                              v19,
                              v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cc70a*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v22,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v22 = v25; /*0x1007cc64a*/
      v23 = v26; /*0x1007cc64e*/
      v24 = v27; /*0x1007cc656*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v21); /*0x1007cc661*/
      *(_QWORD *)(a1 + 24) = v24; /*0x1007cc66a*/
      v17 = v22; /*0x1007cc66e*/
      v16 = v23; /*0x1007cc672*/
      *(_QWORD *)(a1 + 16) = v23; /*0x1007cc676*/
      *(_QWORD *)(a1 + 8) = v17; /*0x1007cc67a*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1007cc683*/
      if ( v7 ) /*0x1007cc689*/
        goto LABEL_16; /*0x1007cc689*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007cc711*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v13, v14, v16) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007cc71e*/
    }
    goto LABEL_16; /*0x1007cc722*/
  }
  v7 = 0; /*0x1007cc452*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1007cc465*/
    goto LABEL_10; /*0x1007cc465*/
LABEL_5:
  v21[0] = 0; /*0x1007cc46b*/
  v21[1] = 1; /*0x1007cc476*/
  v21[2] = 0; /*0x1007cc481*/
  v19[2] = 1610612768; /*0x1007cc48c*/
  v19[0] = v21; /*0x1007cc49e*/
  v19[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cc4ac*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cc6cf*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v22,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v8 = v21[0]; /*0x1007cc4d6*/
  v9 = v7; /*0x1007cc4dd*/
  v10 = v21[1]; /*0x1007cc4e0*/
  v11 = v21[2]; /*0x1007cc4e7*/
  v28[0] = *(_DWORD *)((char *)&v21[2] + 1); /*0x1007cc4f5*/
  *(_DWORD *)((char *)v28 + 3) = HIDWORD(v21[2]); /*0x1007cc4fe*/
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007cc6e3*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cc51e*/
  *(_QWORD *)(a1 + 8) = v8; /*0x1007cc523*/
  *(_QWORD *)(a1 + 16) = v10; /*0x1007cc527*/
  *(_BYTE *)(a1 + 24) = v11; /*0x1007cc52b*/
  v12 = *(_DWORD *)((char *)v28 + 3); /*0x1007cc532*/
  *(_DWORD *)(a1 + 25) = v28[0]; /*0x1007cc535*/
  *(_DWORD *)(a1 + 28) = v12; /*0x1007cc539*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1007cc54a*/
  return a1; /*0x1007cc69f*/
}