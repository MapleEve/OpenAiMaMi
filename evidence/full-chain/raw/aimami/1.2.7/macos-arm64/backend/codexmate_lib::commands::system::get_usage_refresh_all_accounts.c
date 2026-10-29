// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::system::get_usage_refresh_all_accounts::h5c79b66c8b1fca23; addr: 0x100502a20; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:31Z
__int64 __fastcall codexmate_lib::commands::system::get_usage_refresh_all_accounts::h5c79b66c8b1fca23(
        __int64 a1,
        __int64 *a2,
        double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r12
  __int64 v9; // r13
  char v10; // cl
  __int64 v11; // r12
  char v12; // r15
  int v13; // ecx
  char v14; // r15
  _QWORD __dst[18]; // [rsp+0h] [rbp-E0h] BYREF
  char v17; // [rsp+91h] [rbp-4Fh]
  __int64 v18; // [rsp+98h] [rbp-48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-40h]
  __int64 v20; // [rsp+A8h] [rbp-38h]
  _BYTE v21[7]; // [rsp+B0h] [rbp-30h]
  _BYTE v22[41]; // [rsp+B7h] [rbp-29h] BYREF

  v4 = *a2; /*0x100502a3a*/
  if ( !*a2 ) /*0x100502a3a*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x100502b34*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x100502a46*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100502a56*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) ^ 1; /*0x100502b44*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100502b52*/
      goto LABEL_5; /*0x100502b58*/
  }
  else
  {
    v8 = 0; /*0x100502a62*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100502a6f*/
    {
LABEL_5:
      v18 = 0; /*0x100502a7b*/
      v19 = 1; /*0x100502a83*/
      v20 = 0; /*0x100502a8b*/
      __dst[2] = 1610612768; /*0x100502a93*/
      __dst[0] = &v18; /*0x100502aa2*/
      __dst[1] = &anon_90096945ae5392e7faa4fe68e375fd44_721; /*0x100502ab0*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100502aca*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              __dst,
                              v5,
                              v6,
                              v7) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100502bdd*/
          &anon_90096945ae5392e7faa4fe68e375fd44_1020,
          55,
          v22,
          &anon_90096945ae5392e7faa4fe68e375fd44_1040,
          &anon_90096945ae5392e7faa4fe68e375fd44_1022);
      v9 = v18; /*0x100502add*/
      v10 = v8; /*0x100502ae1*/
      v11 = v19; /*0x100502ae4*/
      v12 = v20; /*0x100502ae8*/
      *(_DWORD *)v21 = *(_DWORD *)((char *)&v20 + 1); /*0x100502af0*/
      *(_DWORD *)&v21[3] = HIDWORD(v20); /*0x100502af6*/
      if ( !v10 /*0x100502be4*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x100502bf1*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100502b0c*/
      *(_QWORD *)a1 = v9; /*0x100502b11*/
      *(_QWORD *)(a1 + 8) = v11; /*0x100502b14*/
      *(_BYTE *)(a1 + 16) = v12; /*0x100502b18*/
      v13 = *(_DWORD *)&v21[3]; /*0x100502b1f*/
      *(_DWORD *)(a1 + 17) = *(_DWORD *)v21; /*0x100502b22*/
      *(_DWORD *)(a1 + 20) = v13; /*0x100502b26*/
      return a1; /*0x100502b2a*/
    }
  }
  codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(__dst); /*0x100502b69*/
  v14 = v17; /*0x100502b6e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(__dst); /*0x100502b7a*/
  *(_BYTE *)(a1 + 8) = v14; /*0x100502b7f*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100502b91*/
  if ( !v8 /*0x100502bfa*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x100502c03*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100502ba5*/
  return a1; /*0x100502bad*/
}