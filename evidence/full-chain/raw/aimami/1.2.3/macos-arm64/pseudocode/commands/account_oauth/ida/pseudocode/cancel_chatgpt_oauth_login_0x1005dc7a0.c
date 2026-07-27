// __ZN13codexmate_lib8commands13account_oauth26cancel_chatgpt_oauth_login @ 0x1005dc7a0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h4e5c8a182544ac63(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  char v9; // r15
  int v10; // ecx
  char v11; // al
  _QWORD v13[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+18h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]
  _BYTE v17[7]; // [rsp+30h] [rbp-30h]
  _BYTE v18[41]; // [rsp+37h] [rbp-29h] BYREF

  if ( qword_1019FECC8 ) /*0x1005dc7be*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h5ccbe8a0da919cd8(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc8ba*/
    v3 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc8bf*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc8c9*/
      goto LABEL_3; /*0x1005dc8c9*/
  }
  else
  {
    v3 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc7c4*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc7ce*/
      goto LABEL_3; /*0x1005dc7ce*/
  }
  v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc8db*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1005dc7d4*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005dc7e3*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1005dc8eb*/
    if ( byte_1019FECA0 ) /*0x1005dc902*/
      goto LABEL_5; /*0x1005dc902*/
LABEL_12:
    v11 = qword_1019FECA8; /*0x1005dc908*/
    if ( qword_1019FECA8 == 2 || byte_1019FECC1 == 2 ) /*0x1005dc91c*/
    {
      *(_BYTE *)(a1 + 8) = 0; /*0x1005dc953*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005dc95c*/
      if ( v6 ) /*0x1005dc962*/
      {
LABEL_20:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc96c*/
        return a1; /*0x1005dc973*/
      }
    }
    else
    {
      byte_1019FECC0 = 1; /*0x1005dc91e*/
      v3 = qword_1019FECB0; /*0x1005dc925*/
      qword_1019FECA8 = 0; /*0x1005dc92c*/
      if ( (v11 & 1) != 0 ) /*0x1005dc939*/
        tokio::sync::oneshot::Sender$LT$T$GT$::send::h863a89883b49368a(qword_1019FECB0); /*0x1005dc93b*/
      *(_BYTE *)(a1 + 8) = 1; /*0x1005dc940*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005dc949*/
      if ( v6 ) /*0x1005dc94f*/
        goto LABEL_20; /*0x1005dc94f*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005dc9c8*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
    {
      byte_1019FECA0 = 1; /*0x1005dc9d1*/
    }
    goto LABEL_20; /*0x1005dc9d8*/
  }
  v6 = 0; /*0x1005dc7ef*/
  if ( !byte_1019FECA0 ) /*0x1005dc805*/
    goto LABEL_12; /*0x1005dc805*/
LABEL_5:
  v14 = 0; /*0x1005dc80b*/
  v15 = 1; /*0x1005dc813*/
  v16 = 0; /*0x1005dc81b*/
  v13[2] = 1610612768; /*0x1005dc823*/
  v13[0] = &v14; /*0x1005dc82f*/
  v13[1] = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005dc83a*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dc9a8*/
      &anon_338d2c24067067f307e22096ebff88a8_1090,
      55,
      v18,
      &anon_338d2c24067067f307e22096ebff88a8_1093,
      &anon_338d2c24067067f307e22096ebff88a8_1092);
  v7 = v14; /*0x1005dc861*/
  v8 = v15; /*0x1005dc865*/
  v9 = v16; /*0x1005dc869*/
  *(_DWORD *)v17 = *(_DWORD *)((char *)&v16 + 1); /*0x1005dc871*/
  *(_DWORD *)&v17[3] = HIDWORD(v16); /*0x1005dc877*/
  if ( !v6
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    byte_1019FECA0 = 1; /*0x1005dc9bc*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc892*/
  *(_QWORD *)a1 = v7; /*0x1005dc897*/
  *(_QWORD *)(a1 + 8) = v8; /*0x1005dc89a*/
  *(_BYTE *)(a1 + 16) = v9; /*0x1005dc89e*/
  v10 = *(_DWORD *)&v17[3]; /*0x1005dc8a5*/
  *(_DWORD *)(a1 + 17) = *(_DWORD *)v17; /*0x1005dc8a8*/
  *(_DWORD *)(a1 + 20) = v10; /*0x1005dc8ab*/
  return a1; /*0x1005dc97b*/
}