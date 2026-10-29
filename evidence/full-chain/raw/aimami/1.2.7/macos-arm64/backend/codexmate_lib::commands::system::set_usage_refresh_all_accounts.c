// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::system::set_usage_refresh_all_accounts::heb23e4e786aaa979; addr: 0x100502c60; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
__int64 __fastcall codexmate_lib::commands::system::set_usage_refresh_all_accounts::heb23e4e786aaa979(
        __int64 a1,
        __int64 *a2,
        char a3,
        double a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  char v13; // cl
  char v14; // r14
  int v15; // ecx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _BYTE __dst[87]; // [rsp+1h] [rbp-1AFh] BYREF
  __int64 **v24; // [rsp+58h] [rbp-158h] BYREF
  _QWORD v25[17]; // [rsp+60h] [rbp-150h] BYREF
  char v26; // [rsp+E9h] [rbp-C7h]
  __int64 *v27; // [rsp+F0h] [rbp-C0h] BYREF
  _BYTE __src[88]; // [rsp+F8h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+150h] [rbp-60h] BYREF
  __int64 v30; // [rsp+158h] [rbp-58h]
  __int64 v31; // [rsp+160h] [rbp-50h]
  __int64 v32; // [rsp+168h] [rbp-48h] BYREF
  __int64 v33; // [rsp+170h] [rbp-40h]
  __int64 v34; // [rsp+178h] [rbp-38h]
  _DWORD v35[12]; // [rsp+180h] [rbp-30h]

  v6 = *a2; /*0x100502c7d*/
  if ( !*a2 ) /*0x100502c7d*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x100502d98*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x100502c89*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100502c98*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6) ^ 1; /*0x100502da8*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100502db6*/
      goto LABEL_5; /*0x100502dbc*/
LABEL_10:
    codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(&v24); /*0x100502dc2*/
    v26 = a3; /*0x100502dd5*/
    codexmate_lib::core::repository::Repository::save_settings::hd19ad6be621ccafd(&v27, a2 + 2, &v24); /*0x100502ded*/
    v16 = (__int64)v27; /*0x100502df2*/
    if ( v27 != (__int64 *)11 ) /*0x100502dfd*/
    {
      a3 = __src[0]; /*0x100502dff*/
      memcpy(__dst, &__src[1], sizeof(__dst)); /*0x100502e1a*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(&v24); /*0x100502e26*/
    if ( (_DWORD)v16 == 11 ) /*0x100502e2f*/
    {
      *(_BYTE *)(a1 + 8) = a3; /*0x100502e31*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100502e43*/
      if ( v10 ) /*0x100502e49*/
      {
LABEL_18:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100502f2a*/
        return a1; /*0x100502f2d*/
      }
    }
    else
    {
      v24 = (__int64 **)v16; /*0x100502e54*/
      LOBYTE(v25[0]) = a3; /*0x100502e5b*/
      memcpy((char *)v25 + 1, __dst, 0x57u); /*0x100502e75*/
      v32 = 0; /*0x100502e7a*/
      v33 = 1; /*0x100502e82*/
      v34 = 0; /*0x100502e8a*/
      *(_QWORD *)&__src[8] = 1610612768; /*0x100502e92*/
      v27 = &v32; /*0x100502ea1*/
      *(_QWORD *)__src = &anon_90096945ae5392e7faa4fe68e375fd44_721; /*0x100502eaf*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100502ec4*/
                              &v24,
                              (__int64 *)&v27,
                              v17,
                              v18,
                              v19,
                              v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100502fa0*/
          &anon_90096945ae5392e7faa4fe68e375fd44_1020,
          55,
          &v29,
          &anon_90096945ae5392e7faa4fe68e375fd44_1040,
          &anon_90096945ae5392e7faa4fe68e375fd44_1022);
      v29 = v32; /*0x100502ed9*/
      v30 = v33; /*0x100502edd*/
      v31 = v34; /*0x100502ee5*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v24); /*0x100502ef0*/
      *(_QWORD *)(a1 + 16) = v31; /*0x100502ef9*/
      v21 = v29; /*0x100502efd*/
      *(_QWORD *)(a1 + 8) = v30; /*0x100502f05*/
      *(_QWORD *)a1 = v21; /*0x100502f09*/
      if ( v10 ) /*0x100502f19*/
        goto LABEL_18; /*0x100502f19*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100502fa7*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v24) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x100502fb4*/
    }
    goto LABEL_18; /*0x100502fb8*/
  }
  v10 = 0; /*0x100502ca4*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x100502cb7*/
    goto LABEL_10; /*0x100502cb7*/
LABEL_5:
  v27 = nullptr; /*0x100502cbd*/
  *(_QWORD *)__src = 1; /*0x100502cc8*/
  *(_QWORD *)&__src[8] = 0; /*0x100502cd3*/
  v25[1] = 1610612768; /*0x100502cde*/
  v24 = &v27; /*0x100502cf0*/
  v25[0] = &anon_90096945ae5392e7faa4fe68e375fd44_721; /*0x100502cfe*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100502d18*/
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                          41,
                          &v24,
                          v7,
                          v8,
                          v9) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100502f65*/
      &anon_90096945ae5392e7faa4fe68e375fd44_1020,
      55,
      &v29,
      &anon_90096945ae5392e7faa4fe68e375fd44_1040,
      &anon_90096945ae5392e7faa4fe68e375fd44_1022);
  v11 = (__int64)v27; /*0x100502d28*/
  v12 = *(_QWORD *)__src; /*0x100502d2f*/
  v13 = v10; /*0x100502d36*/
  v14 = __src[8]; /*0x100502d39*/
  v35[0] = *(_DWORD *)&__src[9]; /*0x100502d47*/
  *(_DWORD *)((char *)v35 + 3) = *(_DWORD *)&__src[12]; /*0x100502d50*/
  if ( !v13 /*0x100502f6c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x100502f79*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100502d6d*/
  *(_QWORD *)a1 = v11; /*0x100502d72*/
  *(_QWORD *)(a1 + 8) = v12; /*0x100502d75*/
  *(_BYTE *)(a1 + 16) = v14; /*0x100502d79*/
  v15 = *(_DWORD *)((char *)v35 + 3); /*0x100502d80*/
  *(_DWORD *)(a1 + 17) = v35[0]; /*0x100502d83*/
  *(_DWORD *)(a1 + 20) = v15; /*0x100502d87*/
  return a1; /*0x100502f35*/
}