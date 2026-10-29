// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::autostart::get_autostart_state::h9affcf90ca143ab7; addr: 0x10039fc00; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
char *__fastcall codexmate_lib::commands::autostart::get_autostart_state::h9affcf90ca143ab7(
        char *a1,
        __int64 a2,
        __int64 *a3,
        double a4)
{
  __int64 v6; // rax
  unsigned __int8 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r15
  __int64 *v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbx
  bool v15; // zf
  __int64 *v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  char v20; // bl
  __int64 *v21; // r15
  _QWORD __dst[18]; // [rsp+8h] [rbp-F8h] BYREF
  char v23; // [rsp+9Ah] [rbp-66h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  _DWORD v28[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+C8h] [rbp-38h]
  char v30; // [rsp+D7h] [rbp-29h]

  v24 = a2; /*0x10039fc1a*/
  codexmate_lib::commands::autostart::read_enabled::h6a5ab60549540c25(__dst, *(_QWORD *)(a2 + 136)); /*0x10039fc2c*/
  v6 = __dst[0]; /*0x10039fc3b*/
  v7 = __dst[1]; /*0x10039fc46*/
  if ( __dst[0] != 0x8000000000000000LL ) /*0x10039fc51*/
  {
    v18 = *(_QWORD *)((char *)&__dst[1] + 1); /*0x10039fd50*/
    *((_QWORD *)a1 + 3) = __dst[2]; /*0x10039fd5e*/
    *(_QWORD *)(a1 + 17) = v18; /*0x10039fd62*/
    *((_QWORD *)a1 + 1) = v6; /*0x10039fd66*/
    a1[16] = v7; /*0x10039fd6a*/
LABEL_11:
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10039fd6e*/
    goto LABEL_12; /*0x10039fd6e*/
  }
  v8 = *a3; /*0x10039fc57*/
  if ( !*a3 ) /*0x10039fc57*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a3); /*0x10039fd97*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x10039fc63*/
  v29 = a3; /*0x10039fc75*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10039fc79*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8) ^ 1; /*0x10039fda7*/
    v12 = v29; /*0x10039fdab*/
    if ( *((_BYTE *)v29 + 8) ) /*0x10039fdaf*/
      goto LABEL_6; /*0x10039fdb5*/
  }
  else
  {
    v11 = 0; /*0x10039fc7f*/
    v12 = v29; /*0x10039fc82*/
    if ( *((_BYTE *)v29 + 8) ) /*0x10039fc86*/
    {
LABEL_6:
      v25 = 0; /*0x10039fc92*/
      v26 = 1; /*0x10039fc9a*/
      v27 = 0; /*0x10039fca2*/
      __dst[2] = 1610612768; /*0x10039fcaa*/
      __dst[0] = &v25; /*0x10039fcb9*/
      __dst[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039fcc7*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10039fce1*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              __dst,
                              v12,
                              v9,
                              v10) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039fe4b*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          v28,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v13 = v25; /*0x10039fcf1*/
      v14 = v26; /*0x10039fcf5*/
      v30 = v27; /*0x10039fcfd*/
      v28[0] = *(_DWORD *)((char *)&v27 + 1); /*0x10039fd03*/
      *(_DWORD *)((char *)v28 + 3) = HIDWORD(v27); /*0x10039fd09*/
      v15 = v11 == 0; /*0x10039fd0c*/
      v16 = v29; /*0x10039fd0f*/
      if ( v15 /*0x10039fe52*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)v16 + 8) = 1; /*0x10039fe5f*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v16); /*0x10039fd2b*/
      v17 = v28[0]; /*0x10039fd30*/
      *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v28 + 3); /*0x10039fd36*/
      *(_DWORD *)(a1 + 25) = v17; /*0x10039fd3a*/
      *((_QWORD *)a1 + 1) = v13; /*0x10039fd3e*/
      *((_QWORD *)a1 + 2) = v14; /*0x10039fd42*/
      a1[24] = v30; /*0x10039fd4a*/
      goto LABEL_11; /*0x10039fd4e*/
    }
  }
  codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(__dst); /*0x10039fdc9*/
  v20 = v23; /*0x10039fdce*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(__dst); /*0x10039fdd9*/
  v15 = v11 == 0; /*0x10039fdde*/
  v21 = v29; /*0x10039fde1*/
  if ( v15 /*0x10039fe69*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst) )
  {
    *((_BYTE *)v21 + 8) = 1; /*0x10039fe72*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x10039fdf9*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hb95aa1fca76766bd(__dst, v7, v20 != 2); /*0x10039fe11*/
  qmemcpy(a1, __dst, 0x50u); /*0x10039fe25*/
LABEL_12:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v24); /*0x10039fd71*/
  return a1; /*0x10039fd7d*/
}