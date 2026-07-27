// __ZN13codexmate_lib8commands9autostart19get_autostart_state @ 0x1006a75d0
char *__fastcall codexmate_lib::commands::autostart::get_autostart_state::h9f3a922ddddae6e7(
        char *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r12
  char v6; // r15
  _QWORD *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  _QWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v15; // rsi
  char v16; // bl
  _QWORD *v17; // r15
  _QWORD __dst[18]; // [rsp+8h] [rbp-F8h] BYREF
  char v19; // [rsp+99h] [rbp-67h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  _DWORD v24[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v25; // [rsp+C8h] [rbp-38h]
  char v26; // [rsp+D7h] [rbp-29h]

  v20 = a2; /*0x1006a75ea*/
  codexmate_lib::commands::autostart::read_enabled::ha4e465ff69e6af59(__dst, *(_QWORD *)(a2 + 136)); /*0x1006a75fc*/
  v4 = __dst[0]; /*0x1006a760b*/
  v5 = __dst[1]; /*0x1006a7616*/
  if ( __dst[0] != 0x8000000000000000LL ) /*0x1006a7621*/
  {
    v13 = *(_QWORD *)((char *)&__dst[1] + 1); /*0x1006a7720*/
    *((_QWORD *)a1 + 3) = __dst[2]; /*0x1006a772e*/
    *(_QWORD *)(a1 + 17) = v13; /*0x1006a7732*/
    *((_QWORD *)a1 + 1) = v4; /*0x1006a7736*/
    a1[16] = v5; /*0x1006a773a*/
LABEL_11:
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a773e*/
    goto LABEL_12; /*0x1006a773e*/
  }
  if ( !*a3 ) /*0x1006a7627*/
    std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a3); /*0x1006a7762*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1006a7633*/
  v25 = a3; /*0x1006a7645*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ^ 1; /*0x1006a7777*/
    v7 = v25; /*0x1006a777b*/
    if ( *((_BYTE *)v25 + 8) ) /*0x1006a777f*/
      goto LABEL_6; /*0x1006a7785*/
  }
  else
  {
    v6 = 0; /*0x1006a764f*/
    v7 = v25; /*0x1006a7652*/
    if ( *((_BYTE *)v25 + 8) )
    {
LABEL_6:
      v21 = 0; /*0x1006a7662*/
      v22 = 1; /*0x1006a766a*/
      v23 = 0; /*0x1006a7672*/
      __dst[2] = 1610612768; /*0x1006a767a*/
      __dst[0] = &v21; /*0x1006a7689*/
      __dst[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a7697*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __dst) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a781b*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v24,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v8 = v21; /*0x1006a76c1*/
      v9 = v22; /*0x1006a76c5*/
      v26 = v23; /*0x1006a76cd*/
      v24[0] = *(_DWORD *)((char *)&v23 + 1); /*0x1006a76d3*/
      *(_DWORD *)((char *)v24 + 3) = HIDWORD(v23); /*0x1006a76d9*/
      v10 = v6 == 0; /*0x1006a76dc*/
      v11 = v25; /*0x1006a76df*/
      if ( v10 /*0x1006a7822*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *((_BYTE *)v11 + 8) = 1; /*0x1006a782f*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v11); /*0x1006a76fb*/
      v12 = v24[0]; /*0x1006a7700*/
      *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v24 + 3); /*0x1006a7706*/
      *(_DWORD *)(a1 + 25) = v12; /*0x1006a770a*/
      *((_QWORD *)a1 + 1) = v8; /*0x1006a770e*/
      *((_QWORD *)a1 + 2) = v9; /*0x1006a7712*/
      a1[24] = v26; /*0x1006a771a*/
      goto LABEL_11; /*0x1006a771e*/
    }
  }
  v15 = v7 + 2; /*0x1006a778e*/
  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006a7799*/
  v16 = v19; /*0x1006a779e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v15); /*0x1006a77a9*/
  v10 = v6 == 0; /*0x1006a77ae*/
  v17 = v25; /*0x1006a77b1*/
  if ( v10 /*0x1006a7839*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *((_BYTE *)v17 + 8) = 1; /*0x1006a7842*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v17); /*0x1006a77c9*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h7ab5ec0371a94489(__dst, v5, v16 != 2); /*0x1006a77e1*/
  qmemcpy(a1, __dst, 0x50u); /*0x1006a77f5*/
LABEL_12:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v20); /*0x1006a7741*/
  return a1; /*0x1006a774d*/
}