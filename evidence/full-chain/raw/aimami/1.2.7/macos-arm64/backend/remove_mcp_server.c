// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::mcp::remove_mcp_server::hff2e637021ab2db7; addr: 0x10039d640; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
_DWORD *__fastcall codexmate_lib::commands::mcp::remove_mcp_server::hff2e637021ab2db7(
        _DWORD *__dst,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        double a5)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r13d
  __int64 *v15; // rbx
  __int64 v16; // r14
  char v17; // cl
  __int64 v18; // r13
  char v19; // bl
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  int v25; // eax
  void *v26; // r14
  size_t v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v44; // rdi
  _QWORD __src[20]; // [rsp+20h] [rbp-1B0h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-110h]
  __int64 v47; // [rsp+C8h] [rbp-108h]
  __int64 v48; // [rsp+D0h] [rbp-100h]
  __int64 v49[12]; // [rsp+D8h] [rbp-F8h] BYREF
  _QWORD *v50; // [rsp+138h] [rbp-98h]
  __int64 v51; // [rsp+140h] [rbp-90h] BYREF
  __int64 v52; // [rsp+148h] [rbp-88h]
  __int64 v53; // [rsp+150h] [rbp-80h]
  __int64 *v54; // [rsp+158h] [rbp-78h]
  int v55; // [rsp+164h] [rbp-6Ch]
  __int64 *v56; // [rsp+168h] [rbp-68h] BYREF
  __int64 v57; // [rsp+170h] [rbp-60h]
  __int64 v58; // [rsp+178h] [rbp-58h]
  __int64 v59; // [rsp+180h] [rbp-50h]
  __int64 v60; // [rsp+188h] [rbp-48h] BYREF
  __int64 v61; // [rsp+190h] [rbp-40h]
  __int64 v62; // [rsp+198h] [rbp-38h]
  char v63; // [rsp+1A7h] [rbp-29h]

  v54 = a4; /*0x10039d654*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hd33f803dee4bb26e( /*0x10039d67a*/
    v49,
    a3,
    (char *)&loc_1016F1644 + 3,
    22);
  if ( LODWORD(v49[0]) != 11 ) /*0x10039d686*/
  {
    qmemcpy(__src, v49, 0x60u); /*0x10039d7e3*/
    v60 = 0; /*0x10039d7e6*/
    v61 = 1; /*0x10039d7ee*/
    v62 = 0; /*0x10039d7f6*/
    v58 = 1610612768; /*0x10039d7fe*/
    v56 = &v60; /*0x10039d80a*/
    v57 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d815*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039d820*/
                            __src,
                            (__int64 *)&v56,
                            v6,
                            (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                            v7,
                            v8) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039d8c5*/
        &anon_7534e791983e23e0bbee4dd7c8383343_407,
        55,
        &v51,
        &anon_7534e791983e23e0bbee4dd7c8383343_413,
        &anon_7534e791983e23e0bbee4dd7c8383343_409);
    v22 = v60; /*0x10039d829*/
    v23 = v61; /*0x10039d82d*/
    v24 = v62; /*0x10039d831*/
    LODWORD(v51) = *(_DWORD *)((char *)&v62 + 1); /*0x10039d839*/
    *(_DWORD *)((char *)&v51 + 3) = HIDWORD(v62); /*0x10039d842*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v49); /*0x10039d84f*/
    v25 = v51; /*0x10039d854*/
    __dst[7] = *(_DWORD *)((char *)&v51 + 3); /*0x10039d860*/
    *(_DWORD *)((char *)__dst + 25) = v25; /*0x10039d865*/
    *((_QWORD *)__dst + 1) = v22; /*0x10039d86a*/
    *((_QWORD *)__dst + 2) = v23; /*0x10039d86f*/
    *((_BYTE *)__dst + 24) = v24; /*0x10039d874*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039d886*/
    goto LABEL_30; /*0x10039d88a*/
  }
  v50 = (_QWORD *)v49[1]; /*0x10039d693*/
  LODWORD(v9) = LOBYTE(v49[2]); /*0x10039d69a*/
  v63 = v49[2]; /*0x10039d6a1*/
  v10 = *a2; /*0x10039d6a4*/
  if ( !*a2 ) /*0x10039d6a4*/
  {
    LOBYTE(v9) = 1; /*0x10039d88f*/
    LODWORD(v59) = v9; /*0x10039d891*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x10039d897*/
    v10 = v9; /*0x10039d89c*/
  }
  LOBYTE(v9) = 1; /*0x10039d6b0*/
  LODWORD(v59) = v9; /*0x10039d6b2*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a5); /*0x10039d6b5*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10039d6c4*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10); /*0x10039d8d4*/
    LOBYTE(v14) = v14 ^ 1; /*0x10039d8d7*/
    v15 = v54; /*0x10039d8e2*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10039d8db*/
      goto LABEL_6; /*0x10039d8e6*/
  }
  else
  {
    v14 = 0; /*0x10039d6d0*/
    v15 = v54; /*0x10039d6da*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10039d6d3*/
    {
LABEL_6:
      v49[0] = 0; /*0x10039d6e4*/
      v49[1] = 1; /*0x10039d6ef*/
      v49[2] = 0; /*0x10039d6fa*/
      __src[2] = 1610612768; /*0x10039d705*/
      __src[0] = v49; /*0x10039d710*/
      __src[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d71e*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10039d738*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              __src,
                              v11,
                              v12,
                              v13) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039dd25*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v51,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v16 = v49[0]; /*0x10039d745*/
      v17 = v14; /*0x10039d74c*/
      v18 = v49[1]; /*0x10039d74f*/
      v19 = v49[2]; /*0x10039d756*/
      LODWORD(v56) = *(_DWORD *)((char *)&v49[2] + 1); /*0x10039d763*/
      *(_DWORD *)((char *)&v56 + 3) = HIDWORD(v49[2]); /*0x10039d76c*/
      if ( !v17 /*0x10039dd4c*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x10039dd59*/
      }
      v20 = *a2; /*0x10039d790*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039d793*/
      v21 = (int)v56; /*0x10039d798*/
      __dst[7] = *(_DWORD *)((char *)&v56 + 3); /*0x10039d79e*/
      *(_DWORD *)((char *)__dst + 25) = v21; /*0x10039d7a3*/
      *((_QWORD *)__dst + 1) = v16; /*0x10039d7a8*/
      *((_QWORD *)__dst + 2) = v18; /*0x10039d7ad*/
      *((_BYTE *)__dst + 24) = v19; /*0x10039d7b2*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039d7c4*/
LABEL_27:
      if ( !v63 /*0x10039dd2f*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20) )
      {
        *((_BYTE *)v50 + 8) = 1; /*0x10039dd43*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v50); /*0x10039dc47*/
LABEL_30:
      if ( *v54 ) /*0x10039dc50*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[1], *v54, 1); /*0x10039dc61*/
      return __dst; /*0x10039dc61*/
    }
  }
  v55 = v14; /*0x10039d8ec*/
  v26 = (void *)v15[1]; /*0x10039d8f8*/
  v27 = v15[2]; /*0x10039d8fc*/
  codexmate_lib::core::mcp::remove_mcp_server::h66dd5c41c03a321e(v49, a2[9], a2[10], v26, v27); /*0x10039d90d*/
  if ( LODWORD(v49[0]) != 11 ) /*0x10039d919*/
  {
    qmemcpy(__src, v49, 0x60u); /*0x10039da84*/
    v60 = 0; /*0x10039da87*/
    v61 = 1; /*0x10039da8f*/
    v62 = 0; /*0x10039da97*/
    v58 = 1610612768; /*0x10039da9f*/
    v56 = &v60; /*0x10039daab*/
    v57 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039dab6*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039dac1*/
                            __src,
                            (__int64 *)&v56,
                            v28,
                            (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                            v29,
                            v30) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039dd84*/
        &anon_7534e791983e23e0bbee4dd7c8383343_407,
        55,
        &v51,
        &anon_7534e791983e23e0bbee4dd7c8383343_413,
        &anon_7534e791983e23e0bbee4dd7c8383343_409);
    v51 = v60; /*0x10039dad6*/
    v52 = v61; /*0x10039dadd*/
    v53 = v62; /*0x10039dae8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v49); /*0x10039daf3*/
    *((_QWORD *)__dst + 3) = v53; /*0x10039dafc*/
    v40 = v51; /*0x10039db01*/
    *((_QWORD *)__dst + 2) = v52; /*0x10039db0f*/
    *((_QWORD *)__dst + 1) = v40; /*0x10039db14*/
    goto LABEL_24; /*0x10039db19*/
  }
  codexmate_lib::core::mcp::load_mcp_servers::hc366c6386eb87acb(v49, a2[9], a2[10]); /*0x10039d92e*/
  if ( LODWORD(v49[0]) != 11 ) /*0x10039d93a*/
  {
    qmemcpy(__src, v49, 0x60u); /*0x10039db34*/
    v60 = 0; /*0x10039db37*/
    v61 = 1; /*0x10039db3f*/
    v62 = 0; /*0x10039db47*/
    v58 = 1610612768; /*0x10039db4f*/
    v56 = &v60; /*0x10039db5b*/
    v57 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039db66*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039db71*/
                            __src,
                            (__int64 *)&v56,
                            v31,
                            (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                            v32,
                            v33) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039ddeb*/
        &anon_7534e791983e23e0bbee4dd7c8383343_407,
        55,
        &v51,
        &anon_7534e791983e23e0bbee4dd7c8383343_413,
        &anon_7534e791983e23e0bbee4dd7c8383343_409);
    v51 = v60; /*0x10039db86*/
    v52 = v61; /*0x10039db8d*/
    v53 = v62; /*0x10039db98*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v49); /*0x10039dba3*/
    v41 = v51; /*0x10039dbac*/
    v42 = v52; /*0x10039dbb3*/
    __src[17] = v51; /*0x10039dbba*/
    __src[18] = v52; /*0x10039dbc1*/
    __src[19] = v53; /*0x10039dbc8*/
    *((_QWORD *)__dst + 3) = v53; /*0x10039dbcf*/
    *((_QWORD *)__dst + 2) = v42; /*0x10039dbd4*/
    *((_QWORD *)__dst + 1) = v41; /*0x10039dbd9*/
LABEL_24:
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039dbde*/
    if ( !(_BYTE)v55 /*0x10039dd8b*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v49) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x10039dd98*/
    }
    v20 = *a2; /*0x10039dc12*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039dc15*/
    goto LABEL_27; /*0x10039dc15*/
  }
  v59 = (__int64)v26; /*0x10039d940*/
  v34 = v49[3]; /*0x10039d944*/
  v46 = v49[1]; /*0x10039d959*/
  v47 = v49[2]; /*0x10039d960*/
  v48 = v49[3]; /*0x10039d967*/
  v35 = *v15; /*0x10039d96e*/
  v36 = a2[10]; /*0x10039d975*/
  v60 = a2[9]; /*0x10039d979*/
  v61 = v36; /*0x10039d97d*/
  v56 = nullptr; /*0x10039d981*/
  v57 = 1; /*0x10039d989*/
  v58 = 0; /*0x10039d991*/
  __src[2] = 1610612768; /*0x10039d999*/
  __src[0] = &v56; /*0x10039d9a8*/
  __src[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039d9b6*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v60, __src) ) /*0x10039d9c8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039ddc3*/
      &anon_7534e791983e23e0bbee4dd7c8383343_407,
      55,
      &v51,
      &anon_7534e791983e23e0bbee4dd7c8383343_413,
      &anon_7534e791983e23e0bbee4dd7c8383343_409);
  v49[3] = (__int64)v56; /*0x10039d9dd*/
  v49[4] = v57; /*0x10039d9e4*/
  v49[5] = v58; /*0x10039d9ef*/
  v49[0] = v35; /*0x10039d9f6*/
  v49[1] = v59; /*0x10039da01*/
  v49[2] = v27; /*0x10039da08*/
  LODWORD(v49[6]) = v34; /*0x10039da0f*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hae325e030b06739c(__src, v49); /*0x10039da24*/
  memcpy(__dst, __src, 0x88u); /*0x10039da38*/
  v37 = v47; /*0x10039da3d*/
  v38 = v34 + 1; /*0x10039da44*/
  v39 = v47; /*0x10039da47*/
  while ( v38 != 1 ) /*0x10039da54*/
  {
    --v38; /*0x10039da61*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33(v39); /*0x10039da64*/
    v39 += 224; /*0x10039da69*/
  }
  if ( v46 ) /*0x10039dc85*/
  {
    v39 = v37; /*0x10039dc93*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 224 * v46, 8); /*0x10039dc96*/
  }
  if ( !(_BYTE)v55 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10039dcb8*/
  {
    LODWORD(v59) = 0; /*0x10039ddf2*/
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v39) ) /*0x10039ddf9*/
      *((_BYTE *)a2 + 8) = 1; /*0x10039de06*/
  }
  v44 = *a2; /*0x10039dcbe*/
  LODWORD(v59) = 0; /*0x10039dcc1*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v44); /*0x10039dcc8*/
  if ( !v63 /*0x10039de10*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v44) )
  {
    *((_BYTE *)v50 + 8) = 1; /*0x10039de24*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v50); /*0x10039dcfa*/
  return __dst; /*0x10039dc69*/
}