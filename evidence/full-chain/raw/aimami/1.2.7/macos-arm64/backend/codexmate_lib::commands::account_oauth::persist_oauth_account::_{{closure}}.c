// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_oauth::persist_oauth_account::_$u7b$$u7b$closure$u7d$$u7d$::h490ab108d34a0e16; addr: 0x100321d50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:15Z
unsigned __int64 __fastcall codexmate_lib::commands::account_oauth::persist_oauth_account::_$u7b$$u7b$closure$u7d$$u7d$::h490ab108d34a0e16(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        double a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // r12
  __int64 v16; // r13
  char v17; // cl
  char v18; // r14
  int v19; // ecx
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  _QWORD v24[13]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v26[12]; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-58h]
  __int64 v29; // [rsp+F0h] [rbp-50h]
  __int64 v30; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+100h] [rbp-40h]
  __int64 v32; // [rsp+108h] [rbp-38h]
  _DWORD v33[12]; // [rsp+110h] [rbp-30h]

  v8 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(a2 + 4872) + 16LL); /*0x100321d78*/
  if ( !v8 ) /*0x100321d80*/
  {
    v26[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100321eb2*/
    v26[1] = 76; /*0x100321eb9*/
    v24[0] = v26; /*0x100321ecb*/
    v24[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100321ed9*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100321ef5*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      v24,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v9 = v8; /*0x100321d86*/
  v10 = *v8; /*0x100321d89*/
  if ( !*v8 ) /*0x100321d89*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v8); /*0x100321f02*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a5); /*0x100321d95*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100321da4*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10) ^ 1; /*0x100321f12*/
    if ( *((_BYTE *)v9 + 8) ) /*0x100321f16*/
      goto LABEL_6; /*0x100321f1c*/
LABEL_12:
    codexmate_lib::core::account_io::persist_account_auth::h00c52af89ec670e8(v24, v9 + 2, a3, a4); /*0x100321f22*/
    if ( v24[0] == 0x8000000000000001LL ) /*0x100321f51*/
    {
      qmemcpy(v26, &v24[1], sizeof(v26)); /*0x100321f70*/
      v30 = 0; /*0x100321f73*/
      v31 = 1; /*0x100321f7b*/
      v32 = 0; /*0x100321f83*/
      v25[2] = 1610612768; /*0x100321f8b*/
      v25[0] = &v30; /*0x100321f9a*/
      v25[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x100321fa8*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100321fb9*/
                              v26,
                              v25) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003220ab*/
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
          55,
          &v27,
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
      v27 = v30; /*0x100321fce*/
      v28 = v31; /*0x100321fd2*/
      v29 = v32; /*0x100321fda*/
      v22 = &v24[1]; /*0x100321fde*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v24[1], v25, v21); /*0x100321fe1*/
      a1[3] = v29; /*0x100321fea*/
      v23 = v27; /*0x100321fee*/
      a1[2] = v28; /*0x100321ff6*/
      a1[1] = v23; /*0x100321ffa*/
      *a1 = 0x8000000000000001LL; /*0x100321ffe*/
      if ( v14 ) /*0x100322004*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100322004*/
    }
    else
    {
      qmemcpy(a1, v24, 0x68u); /*0x100322017*/
      v22 = a1 + 13; /*0x100322017*/
      if ( v14 ) /*0x10032201d*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100322051*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1003220b2*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22) )
    {
      *((_BYTE *)v9 + 8) = 1; /*0x1003220bf*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x1003220c3*/
  }
  v14 = 0; /*0x100321db0*/
  if ( !*((_BYTE *)v9 + 8) ) /*0x100321db9*/
    goto LABEL_12; /*0x100321db9*/
LABEL_6:
  v26[0] = 0; /*0x100321dbf*/
  v26[1] = 1; /*0x100321dca*/
  v26[2] = 0; /*0x100321dd5*/
  v24[2] = 1610612768; /*0x100321de0*/
  v24[0] = v26; /*0x100321df2*/
  v24[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x100321e00*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100321e1a*/
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                          41,
                          v24,
                          v11,
                          v12,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100322070*/
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
      55,
      &v27,
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
  v15 = v26[0]; /*0x100321e27*/
  v16 = v26[1]; /*0x100321e2e*/
  v17 = v14; /*0x100321e35*/
  v18 = v26[2]; /*0x100321e38*/
  v33[0] = *(_DWORD *)((char *)&v26[2] + 1); /*0x100321e46*/
  *(_DWORD *)((char *)v33 + 3) = HIDWORD(v26[2]); /*0x100321e4f*/
  if ( !v17 /*0x100322077*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
  {
    *((_BYTE *)v9 + 8) = 1; /*0x100322084*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100321e76*/
  a1[1] = v15; /*0x100321e7b*/
  a1[2] = v16; /*0x100321e7f*/
  *((_BYTE *)a1 + 24) = v18; /*0x100321e83*/
  v19 = *(_DWORD *)((char *)v33 + 3); /*0x100321e8a*/
  *(_DWORD *)((char *)a1 + 25) = v33[0]; /*0x100321e8d*/
  *((_DWORD *)a1 + 7) = v19; /*0x100321e91*/
  *a1 = 0x8000000000000001LL; /*0x100321ea3*/
  return 0x8000000000000001LL; /*0x100322040*/
}