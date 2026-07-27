// __ZN13codexmate_lib8commands13account_oauth17advance_operation @ 0x1005dc490
__int64 __fastcall codexmate_lib::commands::account_oauth::advance_operation::hc02c74e00c3bf4ac(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  char v13; // r13
  int v14; // ecx
  __int64 v15; // rax
  _QWORD v17[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+18h] [rbp-48h] BYREF
  __int64 v19; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+28h] [rbp-38h]
  _BYTE v21[7]; // [rsp+30h] [rbp-30h]
  _BYTE v22[41]; // [rsp+37h] [rbp-29h] BYREF

  if ( qword_1019FECC8 ) /*0x1005dc4b4*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h5ccbe8a0da919cd8(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc5b8*/
    v5 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc5bd*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc5c7*/
      goto LABEL_3; /*0x1005dc5c7*/
  }
  else
  {
    v5 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc4ba*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc4c4*/
      goto LABEL_3; /*0x1005dc4c4*/
  }
  v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc5d9*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1005dc4ca*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005dc4da*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1005dc5e9*/
    v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x1005dc5ed*/
    if ( byte_1019FECA0 ) /*0x1005dc600*/
      goto LABEL_5; /*0x1005dc600*/
LABEL_12:
    if ( (_DWORD)qword_1019FECA8 == 2 || qword_1019FECB8 != a2 || byte_1019FECC0 ) /*0x1005dc61f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2); /*0x1005dc628*/
      v5 = 41; /*0x1005dc62d*/
      a2 = 1; /*0x1005dc632*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1); /*0x1005dc637*/
      if ( !v15 ) /*0x1005dc63f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 41); /*0x1005dc745*/
      *(_QWORD *)(v15 + 32) = 0x80E388B6E6968FE5LL; /*0x1005dc64f*/
      *(_QWORD *)(v15 + 24) = 0xB2B7E595BDE5BB99LL; /*0x1005dc65d*/
      *(_QWORD *)(v15 + 16) = 0xE7839DE6888EE620LL; /*0x1005dc66b*/
      v9 = 0x41435F485455414FLL; /*0x1005dc67d*/
      qmemcpy((void *)v15, "OAUTH_CANCELLED:", 16); /*0x1005dc687*/
      *(_BYTE *)(v15 + 40) = -126; /*0x1005dc68a*/
      *(_QWORD *)a1 = 41; /*0x1005dc68e*/
      *(_QWORD *)(a1 + 8) = v15; /*0x1005dc695*/
      *(_QWORD *)(a1 + 16) = 41; /*0x1005dc699*/
      if ( v8 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005dc6ad*/
        goto LABEL_21; /*0x1005dc6ad*/
    }
    else
    {
      byte_1019FECC1 = a3; /*0x1005dc6b1*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005dc6bc*/
      if ( v8 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005dc6cb*/
      {
LABEL_21:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc6cd*/
        return a1; /*0x1005dc6d4*/
      }
    }
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v9) ) /*0x1005dc729*/
      byte_1019FECA0 = 1; /*0x1005dc732*/
    goto LABEL_21; /*0x1005dc739*/
  }
  v8 = 0; /*0x1005dc4e6*/
  v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x1005dc4e9*/
  if ( !byte_1019FECA0 ) /*0x1005dc4fc*/
    goto LABEL_12; /*0x1005dc4fc*/
LABEL_5:
  v18 = 0; /*0x1005dc502*/
  v19 = 1; /*0x1005dc50a*/
  v20 = 0; /*0x1005dc512*/
  v17[2] = 1610612768; /*0x1005dc51a*/
  v17[0] = &v18; /*0x1005dc526*/
  v17[1] = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005dc531*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v17) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dc709*/
      &anon_338d2c24067067f307e22096ebff88a8_1090,
      55,
      v22,
      &anon_338d2c24067067f307e22096ebff88a8_1093,
      &anon_338d2c24067067f307e22096ebff88a8_1092);
  v11 = v18; /*0x1005dc555*/
  v12 = v19; /*0x1005dc559*/
  v13 = v20; /*0x1005dc55d*/
  *(_DWORD *)v21 = *(_DWORD *)((char *)&v20 + 1); /*0x1005dc565*/
  *(_DWORD *)&v21[3] = HIDWORD(v20); /*0x1005dc56b*/
  if ( !v8
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v10,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    byte_1019FECA0 = 1; /*0x1005dc71d*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc590*/
  *(_QWORD *)a1 = v11; /*0x1005dc595*/
  *(_QWORD *)(a1 + 8) = v12; /*0x1005dc598*/
  *(_BYTE *)(a1 + 16) = v13; /*0x1005dc59c*/
  v14 = *(_DWORD *)&v21[3]; /*0x1005dc5a3*/
  *(_DWORD *)(a1 + 17) = *(_DWORD *)v21; /*0x1005dc5a6*/
  *(_DWORD *)(a1 + 20) = v14; /*0x1005dc5a9*/
  return a1; /*0x1005dc6dc*/
}