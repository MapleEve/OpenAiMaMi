// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::mcp::load_mcp_servers::hd25d65c9da945980; addr: 0x10039cfb0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:32Z
char *__fastcall codexmate_lib::commands::mcp::load_mcp_servers::hd25d65c9da945980(char *__dst, __int64 *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  char v11; // cl
  char v12; // r14
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // edx
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD __src[18]; // [rsp+38h] [rbp-1B8h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-128h]
  __int64 (__fastcall **v29)(); // [rsp+D0h] [rbp-120h]
  __int64 v30; // [rsp+D8h] [rbp-118h]
  _QWORD *v31; // [rsp+E0h] [rbp-110h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+E8h] [rbp-108h]
  __int64 v33; // [rsp+F0h] [rbp-100h]
  __int64 v34; // [rsp+F8h] [rbp-F8h]
  __int64 v35; // [rsp+100h] [rbp-F0h]
  __int64 v36; // [rsp+108h] [rbp-E8h]
  __int64 v37; // [rsp+110h] [rbp-E0h]
  __int64 v38; // [rsp+118h] [rbp-D8h]
  __int64 v39; // [rsp+120h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+128h] [rbp-C8h]
  __int64 v41; // [rsp+130h] [rbp-C0h]
  __int64 v42; // [rsp+138h] [rbp-B8h]
  _QWORD v43[12]; // [rsp+140h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+1A8h] [rbp-48h]
  __int64 v46; // [rsp+1B0h] [rbp-40h]
  __int64 v47; // [rsp+1B8h] [rbp-38h]
  _DWORD v48[12]; // [rsp+1C0h] [rbp-30h]

  v4 = *a2; /*0x10039cfca*/
  if ( !*a2 ) /*0x10039cfca*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x10039d0fa*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x10039cfd6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10039cfe6*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) ^ 1; /*0x10039d10a*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10039d118*/
      goto LABEL_5; /*0x10039d11e*/
LABEL_10:
    codexmate_lib::core::mcp::load_mcp_servers::hc366c6386eb87acb(v43, a2[9], a2[10]); /*0x10039d124*/
    if ( LODWORD(v43[0]) != 11 ) /*0x10039d142*/
    {
      qmemcpy(__src, v43, 0x60u); /*0x10039d257*/
      v44 = 0; /*0x10039d25a*/
      v45 = 1; /*0x10039d262*/
      v46 = 0; /*0x10039d26a*/
      v33 = 1610612768; /*0x10039d272*/
      v31 = &v44; /*0x10039d281*/
      v32 = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d28f*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039d2a0*/
                              __src,
                              (__int64 *)&v31,
                              v14,
                              (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                              v15,
                              v16) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039d53e*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v39,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v39 = v44; /*0x10039d2b5*/
      v40 = v45; /*0x10039d2bc*/
      v41 = v46; /*0x10039d2c7*/
      v22 = v43; /*0x10039d2ce*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v43); /*0x10039d2d5*/
      v23 = v39; /*0x10039d2e1*/
      v24 = v40; /*0x10039d2e8*/
      *((_QWORD *)__dst + 3) = v41; /*0x10039d304*/
      *((_QWORD *)__dst + 2) = v24; /*0x10039d308*/
      *((_QWORD *)__dst + 1) = v23; /*0x10039d30c*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039d314*/
      if ( v8 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10039d32d*/
        goto LABEL_25; /*0x10039d32d*/
      goto LABEL_32; /*0x10039d32d*/
    }
    v17 = v43[3]; /*0x10039d148*/
    v28 = v43[1]; /*0x10039d15d*/
    v29 = (__int64 (__fastcall **)())v43[2]; /*0x10039d164*/
    v30 = v43[3]; /*0x10039d16b*/
    v18 = a2[10]; /*0x10039d176*/
    v44 = a2[9]; /*0x10039d17a*/
    v45 = v18; /*0x10039d17e*/
    v43[0] = 0; /*0x10039d182*/
    v43[1] = 1; /*0x10039d18d*/
    v43[2] = 0; /*0x10039d198*/
    __src[2] = 1610612768; /*0x10039d1a3*/
    __src[0] = v43; /*0x10039d1ae*/
    __src[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d1bc*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v44, __src) ) /*0x10039d1ce*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039d516*/
        &anon_7534e791983e23e0bbee4dd7c8383343_407,
        55,
        &v39,
        &anon_7534e791983e23e0bbee4dd7c8383343_413,
        &anon_7534e791983e23e0bbee4dd7c8383343_409);
    v47 = v43[0]; /*0x10039d1e2*/
    v42 = v43[1]; /*0x10039d1ed*/
    v19 = v43[2]; /*0x10039d1f4*/
    v43[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v44); /*0x10039d200*/
    LODWORD(v43[1]) = v20; /*0x10039d207*/
    std::time::SystemTime::duration_since::had059553cab94f96(__src, v43, 0, 0); /*0x10039d21f*/
    if ( LOBYTE(__src[0]) ) /*0x10039d22f*/
      v21 = 0; /*0x10039d338*/
    else
      v21 = __src[1]; /*0x10039d235*/
    v31 = (_QWORD *)v28; /*0x10039d348*/
    v32 = v29; /*0x10039d34f*/
    v33 = v30; /*0x10039d35d*/
    LODWORD(v38) = v17; /*0x10039d364*/
    v34 = v47; /*0x10039d36f*/
    v35 = v42; /*0x10039d37d*/
    v36 = v19; /*0x10039d384*/
    v37 = v21; /*0x10039d38b*/
    v25 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h494e6f9ce73e9879(a2 + 2); /*0x10039d392*/
    if ( v25 ) /*0x10039d3a4*/
    {
      __src[0] = 2; /*0x10039d3a6*/
      __src[1] = v25; /*0x10039d3b1*/
    }
    else
    {
      codexmate_lib::core::bootstrap_cache::update::hef891b5fcf35954d(__src, a2[60], a2[61], &v31); /*0x10039d3d6*/
      if ( __src[0] == 11 ) /*0x10039d3e3*/
      {
LABEL_23:
        v43[7] = v38; /*0x10039d3f1*/
        v43[6] = v37; /*0x10039d403*/
        v43[5] = v36; /*0x10039d40e*/
        v43[4] = v35; /*0x10039d41c*/
        v43[3] = v34; /*0x10039d42a*/
        v43[2] = v33; /*0x10039d438*/
        v43[1] = v32; /*0x10039d44d*/
        v43[0] = v31; /*0x10039d454*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h3940ea11e328ce07(__src, v43); /*0x10039d469*/
        v22 = __dst; /*0x10039d47a*/
        memcpy(__dst, __src, 0x90u); /*0x10039d47d*/
        if ( v8 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10039d494*/
        {
LABEL_25:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039d49a*/
          return __dst; /*0x10039d49d*/
        }
LABEL_32:
        if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22) ) /*0x10039d545*/
          *((_BYTE *)a2 + 8) = 1; /*0x10039d552*/
        goto LABEL_25; /*0x10039d556*/
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(__src); /*0x10039d3ec*/
    goto LABEL_23; /*0x10039d3ec*/
  }
  v8 = 0; /*0x10039cff2*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x10039d005*/
    goto LABEL_10; /*0x10039d005*/
LABEL_5:
  v43[0] = 0; /*0x10039d00b*/
  v43[1] = 1; /*0x10039d016*/
  v43[2] = 0; /*0x10039d021*/
  __src[2] = 1610612768; /*0x10039d02c*/
  __src[0] = v43; /*0x10039d03e*/
  __src[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d04c*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10039d066*/
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                          41,
                          __src,
                          v5,
                          v6,
                          v7) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039d4d8*/
      &anon_7534e791983e23e0bbee4dd7c8383343_407,
      55,
      &v39,
      &anon_7534e791983e23e0bbee4dd7c8383343_413,
      &anon_7534e791983e23e0bbee4dd7c8383343_409);
  v9 = v43[0]; /*0x10039d076*/
  v10 = v43[1]; /*0x10039d07d*/
  v11 = v8; /*0x10039d084*/
  v12 = v43[2]; /*0x10039d087*/
  v48[0] = *(_DWORD *)((char *)&v43[2] + 1); /*0x10039d095*/
  *(_DWORD *)((char *)v48 + 3) = HIDWORD(v43[2]); /*0x10039d09e*/
  if ( !v11 /*0x10039d4df*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x10039d4ec*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039d0be*/
  *((_QWORD *)__dst + 1) = v9; /*0x10039d0c3*/
  *((_QWORD *)__dst + 2) = v10; /*0x10039d0c7*/
  __dst[24] = v12; /*0x10039d0cb*/
  v13 = *(_DWORD *)((char *)v48 + 3); /*0x10039d0d2*/
  *(_DWORD *)(__dst + 25) = v48[0]; /*0x10039d0d5*/
  *((_DWORD *)__dst + 7) = v13; /*0x10039d0d9*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039d0ea*/
  return __dst; /*0x10039d4a5*/
}