// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h6d2b107baeea2ae1; addr: 0x100322150; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:28Z
__int64 __fastcall codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h6d2b107baeea2ae1(
        __int64 a1,
        double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  char v10; // r15
  int v11; // ecx
  char v12; // al
  _QWORD v14[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+18h] [rbp-48h] BYREF
  __int64 v16; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+28h] [rbp-38h]
  _BYTE v18[7]; // [rsp+30h] [rbp-30h]
  _BYTE v19[41]; // [rsp+37h] [rbp-29h] BYREF

  if ( qword_101B46AA0 ) /*0x10032216e*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h828143cb28c98238(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47); /*0x10032226a*/
    v3 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47; /*0x10032226f*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47 ) /*0x100322279*/
      goto LABEL_3; /*0x100322279*/
  }
  else
  {
    v3 = codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47; /*0x100322174*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47 ) /*0x10032217e*/
      goto LABEL_3; /*0x10032217e*/
  }
  v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47); /*0x10032228b*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a2); /*0x100322184*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100322193*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) ^ 1; /*0x10032229b*/
    if ( byte_101B46A78 ) /*0x1003222b2*/
      goto LABEL_5; /*0x1003222b2*/
LABEL_12:
    v12 = qword_101B46A80; /*0x1003222b8*/
    if ( qword_101B46A80 == 2 || byte_101B46A99 == 2 ) /*0x1003222cc*/
    {
      *(_BYTE *)(a1 + 8) = 0; /*0x100322303*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10032230c*/
      if ( v7 ) /*0x100322312*/
      {
LABEL_20:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47); /*0x10032231c*/
        return a1; /*0x100322323*/
      }
    }
    else
    {
      byte_101B46A98 = 1; /*0x1003222ce*/
      v3 = qword_101B46A88; /*0x1003222d5*/
      qword_101B46A80 = 0; /*0x1003222dc*/
      if ( (v12 & 1) != 0 ) /*0x1003222e9*/
        tokio::sync::oneshot::Sender$LT$T$GT$::send::ha390cb3cf5a4977f(qword_101B46A88); /*0x1003222eb*/
      *(_BYTE *)(a1 + 8) = 1; /*0x1003222f0*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003222f9*/
      if ( v7 ) /*0x1003222ff*/
        goto LABEL_20; /*0x1003222ff*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100322378*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3) )
    {
      byte_101B46A78 = 1; /*0x100322381*/
    }
    goto LABEL_20; /*0x100322388*/
  }
  v7 = 0; /*0x10032219f*/
  if ( !byte_101B46A78 ) /*0x1003221b5*/
    goto LABEL_12; /*0x1003221b5*/
LABEL_5:
  v15 = 0; /*0x1003221bb*/
  v16 = 1; /*0x1003221c3*/
  v17 = 0; /*0x1003221cb*/
  v14[2] = 1610612768; /*0x1003221d3*/
  v14[0] = &v15; /*0x1003221df*/
  v14[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x1003221ea*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x1003221fe*/
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                          41,
                          v14,
                          v4,
                          v5,
                          v6) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100322358*/
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
      55,
      v19,
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
  v8 = v15; /*0x100322211*/
  v9 = v16; /*0x100322215*/
  v10 = v17; /*0x100322219*/
  *(_DWORD *)v18 = *(_DWORD *)((char *)&v17 + 1); /*0x100322221*/
  *(_DWORD *)&v18[3] = HIDWORD(v17); /*0x100322227*/
  if ( !v7 /*0x10032235f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
  {
    byte_101B46A78 = 1; /*0x10032236c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::h5dad8ac290be0c47); /*0x100322242*/
  *(_QWORD *)a1 = v8; /*0x100322247*/
  *(_QWORD *)(a1 + 8) = v9; /*0x10032224a*/
  *(_BYTE *)(a1 + 16) = v10; /*0x10032224e*/
  v11 = *(_DWORD *)&v18[3]; /*0x100322255*/
  *(_DWORD *)(a1 + 17) = *(_DWORD *)v18; /*0x100322258*/
  *(_DWORD *)(a1 + 20) = v11; /*0x10032225b*/
  return a1; /*0x10032232b*/
}