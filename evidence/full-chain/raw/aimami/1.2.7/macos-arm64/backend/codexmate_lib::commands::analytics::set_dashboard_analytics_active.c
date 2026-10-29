// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::analytics::set_dashboard_analytics_active::h28e5629f5cb8146a; addr: 0x100282620; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:33Z
__int64 __fastcall codexmate_lib::commands::analytics::set_dashboard_analytics_active::h28e5629f5cb8146a(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        double a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r15
  __int64 v11; // r12
  char v12; // cl
  __int64 v13; // r15
  char v14; // r13
  int v15; // ecx
  _QWORD v17[93]; // [rsp+0h] [rbp-330h] BYREF
  __int64 v18; // [rsp+2E8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+2F0h] [rbp-40h]
  __int64 v20; // [rsp+2F8h] [rbp-38h]
  _BYTE v21[7]; // [rsp+300h] [rbp-30h]
  _BYTE v22[41]; // [rsp+307h] [rbp-29h] BYREF

  v6 = *a2; /*0x10028263d*/
  if ( !*a2 ) /*0x10028263d*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x10028273d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x100282649*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100282658*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6) ^ 1; /*0x10028274d*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10028275b*/
      goto LABEL_5; /*0x100282761*/
  }
  else
  {
    v10 = 0; /*0x100282664*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100282671*/
    {
LABEL_5:
      v18 = 0; /*0x10028267d*/
      v19 = 1; /*0x100282685*/
      v20 = 0; /*0x10028268d*/
      v17[2] = 1610612768; /*0x100282695*/
      v17[0] = &v18; /*0x1002826a4*/
      v17[1] = &anon_8cf26f36e03587b9a54b9e7945b707cc_1339; /*0x1002826b2*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x1002826cc*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              v17,
                              v7,
                              v8,
                              v9) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002827e8*/
          "a Display implementation returned an error unexpectedly",
          55,
          v22,
          &anon_8cf26f36e03587b9a54b9e7945b707cc_1355,
          &anon_8cf26f36e03587b9a54b9e7945b707cc_1342);
      v11 = v18; /*0x1002826dc*/
      v12 = v10; /*0x1002826e0*/
      v13 = v19; /*0x1002826e3*/
      v14 = v20; /*0x1002826e7*/
      *(_DWORD *)v21 = *(_DWORD *)((char *)&v20 + 1); /*0x1002826ef*/
      *(_DWORD *)&v21[3] = HIDWORD(v20); /*0x1002826f5*/
      if ( !v12 /*0x1002827ef*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1002827fc*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100282712*/
      *(_QWORD *)a1 = v11; /*0x100282717*/
      *(_QWORD *)(a1 + 8) = v13; /*0x10028271a*/
      *(_BYTE *)(a1 + 16) = v14; /*0x10028271e*/
      v15 = *(_DWORD *)&v21[3]; /*0x100282725*/
      *(_DWORD *)(a1 + 17) = *(_DWORD *)v21; /*0x100282728*/
      *(_DWORD *)(a1 + 20) = v15; /*0x10028272c*/
      return a1; /*0x100282730*/
    }
  }
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::h444cc86088833e34( /*0x100282772*/
    v17,
    a2 + 2);
  if ( !v10 /*0x100282805*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x100282812*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10028278e*/
  codexmate_lib::core::analytics::set_active::hcbd03cc4a664dc2c(v17, a3); /*0x10028279e*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1002827a6*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::h2cfd58f3a1a2f74b(v17); /*0x1002827b0*/
  return a1; /*0x1002827b8*/
}