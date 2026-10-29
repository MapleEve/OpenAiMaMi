// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::mcp::set_mcp_server_enabled::he0100d0056b933a8; addr: 0x10039ef70; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
_DWORD *__fastcall codexmate_lib::commands::mcp::set_mcp_server_enabled::he0100d0056b933a8(
        _DWORD *__dst,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        double a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  char v16; // cl
  __int64 v17; // r14
  __int64 v18; // r13
  char v19; // bl
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v44; // rdi
  _QWORD v45[28]; // [rsp+0h] [rbp-410h] BYREF
  _QWORD v46[42]; // [rsp+E0h] [rbp-330h] BYREF
  _QWORD v47[31]; // [rsp+230h] [rbp-1E0h] BYREF
  int v48; // [rsp+328h] [rbp-E8h]
  __int64 v49; // [rsp+330h] [rbp-E0h]
  __int64 v50; // [rsp+338h] [rbp-D8h]
  __int64 v51; // [rsp+340h] [rbp-D0h]
  __int64 v52; // [rsp+350h] [rbp-C0h]
  __int64 v53; // [rsp+358h] [rbp-B8h]
  __int64 v54; // [rsp+360h] [rbp-B0h]
  __int64 v55; // [rsp+368h] [rbp-A8h]
  __int64 v56; // [rsp+370h] [rbp-A0h]
  __int64 v57; // [rsp+378h] [rbp-98h]
  __int64 v58; // [rsp+380h] [rbp-90h]
  __int64 v59; // [rsp+388h] [rbp-88h] BYREF
  __int64 v60; // [rsp+390h] [rbp-80h]
  __int64 v61; // [rsp+398h] [rbp-78h]
  __int64 *v62; // [rsp+3A0h] [rbp-70h] BYREF
  __int64 v63; // [rsp+3A8h] [rbp-68h]
  __int64 v64; // [rsp+3B0h] [rbp-60h]
  __int64 v65; // [rsp+3B8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+3C0h] [rbp-50h]
  __int64 v67; // [rsp+3C8h] [rbp-48h]
  int v68; // [rsp+3D4h] [rbp-3Ch]
  __int64 v69; // [rsp+3D8h] [rbp-38h]
  char v70; // [rsp+3E7h] [rbp-29h]

  v69 = a4; /*0x10039ef87*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hd33f803dee4bb26e(v47, a3, &unk_1016F1673, 22); /*0x10039efad*/
  if ( LODWORD(v47[0]) == 11 ) /*0x10039efb9*/
  {
    v58 = v47[1]; /*0x10039efc6*/
    v70 = v47[2]; /*0x10039efd4*/
    v11 = *a2; /*0x10039efd7*/
    if ( !*a2 ) /*0x10039efd7*/
      v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(a2); /*0x10039f1cb*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a6); /*0x10039efe3*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10039eff2*/
    {
      v26 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11); /*0x10039f1fe*/
      LOBYTE(v26) = v26 ^ 1; /*0x10039f203*/
      v68 = v26; /*0x10039f205*/
      if ( *((_BYTE *)a2 + 8) ) /*0x10039f208*/
        goto LABEL_6; /*0x10039f20f*/
    }
    else
    {
      v68 = 0; /*0x10039effe*/
      if ( *((_BYTE *)a2 + 8) ) /*0x10039f005*/
      {
LABEL_6:
        v47[0] = 0; /*0x10039f012*/
        v47[1] = 1; /*0x10039f01d*/
        v47[2] = 0; /*0x10039f028*/
        v46[2] = 1610612768; /*0x10039f033*/
        v46[0] = v47; /*0x10039f03e*/
        v46[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039f04c*/
        v15 = v68; /*0x10039f066*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10039f069*/
                                &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                                41,
                                v46,
                                v12,
                                v13,
                                v14) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039f6c7*/
            &anon_7534e791983e23e0bbee4dd7c8383343_407,
            55,
            &v59,
            &anon_7534e791983e23e0bbee4dd7c8383343_413,
            &anon_7534e791983e23e0bbee4dd7c8383343_409);
        v16 = v15; /*0x10039f076*/
        v17 = v47[0]; /*0x10039f078*/
        v18 = v47[1]; /*0x10039f07f*/
        v19 = v47[2]; /*0x10039f086*/
        LODWORD(v62) = *(_DWORD *)((char *)&v47[2] + 1); /*0x10039f093*/
        *(_DWORD *)((char *)&v62 + 3) = HIDWORD(v47[2]); /*0x10039f09c*/
        if ( !v16 /*0x10039f6ee*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x10039f6fb*/
        }
        v20 = *a2; /*0x10039f0c0*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039f0c3*/
        v21 = (int)v62; /*0x10039f0c8*/
        __dst[7] = *(_DWORD *)((char *)&v62 + 3); /*0x10039f0ce*/
        *(_DWORD *)((char *)__dst + 25) = v21; /*0x10039f0d3*/
        *((_QWORD *)__dst + 1) = v17; /*0x10039f0d8*/
        *((_QWORD *)__dst + 2) = v18; /*0x10039f0dd*/
        *((_BYTE *)__dst + 24) = v19; /*0x10039f0e2*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039f0f4*/
        goto LABEL_27; /*0x10039f0f8*/
      }
    }
    codexmate_lib::core::mcp::set_mcp_server_enabled::h7871f48f246eb01a( /*0x10039f234*/
      v46,
      a2[9],
      a2[10],
      *(void **)(v69 + 8),
      *(_QWORD *)(v69 + 16),
      a5);
    if ( v46[0] == 0x8000000000000000LL ) /*0x10039f258*/
    {
      qmemcpy(v47, &v46[1], 0x60u); /*0x10039f270*/
      v65 = 0; /*0x10039f273*/
      v66 = 1; /*0x10039f27b*/
      v67 = 0; /*0x10039f283*/
      v64 = 1610612768; /*0x10039f28b*/
      v62 = &v65; /*0x10039f297*/
      v63 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039f2a2*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039f2ad*/
                              v47,
                              (__int64 *)&v62,
                              v27,
                              (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                              v28,
                              v29) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039f726*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v59,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v59 = v65; /*0x10039f2c2*/
      v60 = v66; /*0x10039f2c9*/
      v61 = v67; /*0x10039f2d1*/
      v30 = &v46[1]; /*0x10039f2d5*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v46[1]); /*0x10039f2d8*/
      v31 = v59; /*0x10039f2e1*/
      v32 = v60; /*0x10039f2e8*/
      v52 = v59; /*0x10039f2ec*/
      v53 = v60; /*0x10039f2f3*/
      v54 = v61; /*0x10039f2fa*/
      *((_QWORD *)__dst + 3) = v61; /*0x10039f301*/
      *((_QWORD *)__dst + 2) = v32; /*0x10039f306*/
      *((_QWORD *)__dst + 1) = v31; /*0x10039f30b*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039f310*/
    }
    else
    {
      v51 = v46[3]; /*0x10039f31d*/
      v50 = v46[2]; /*0x10039f32b*/
      v49 = v46[1]; /*0x10039f332*/
      memcpy(&v45[4], &v46[4], 0xC0u); /*0x10039f34c*/
      v52 = v46[1]; /*0x10039f35f*/
      v45[1] = v46[1]; /*0x10039f36d*/
      v45[2] = v46[2]; /*0x10039f374*/
      v45[3] = v46[3]; /*0x10039f37b*/
      v45[0] = v46[0]; /*0x10039f382*/
      codexmate_lib::core::mcp::load_mcp_servers::hc366c6386eb87acb(v47, a2[9], a2[10]); /*0x10039f398*/
      if ( LODWORD(v47[0]) == 11 ) /*0x10039f3a4*/
      {
        v36 = v47[3]; /*0x10039f3aa*/
        v55 = v47[1]; /*0x10039f3bf*/
        v56 = v47[2]; /*0x10039f3c6*/
        v57 = v47[3]; /*0x10039f3cd*/
        v37 = a2[10]; /*0x10039f3d8*/
        v65 = a2[9]; /*0x10039f3dc*/
        v66 = v37; /*0x10039f3e0*/
        v62 = nullptr; /*0x10039f3e4*/
        v63 = 1; /*0x10039f3ec*/
        v64 = 0; /*0x10039f3f4*/
        v46[2] = 1610612768; /*0x10039f3fc*/
        v46[0] = &v62; /*0x10039f40b*/
        v46[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039f419*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x10039f42b*/
                                &v65,
                                v46) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039f765*/
            &anon_7534e791983e23e0bbee4dd7c8383343_407,
            55,
            &v59,
            &anon_7534e791983e23e0bbee4dd7c8383343_413,
            &anon_7534e791983e23e0bbee4dd7c8383343_409);
        v47[28] = v62; /*0x10039f440*/
        v47[29] = v63; /*0x10039f447*/
        v47[30] = v64; /*0x10039f452*/
        memcpy(v47, v45, 0xE0u); /*0x10039f46f*/
        v48 = v36; /*0x10039f474*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h4d7de687f8fc2f2b(v46, v47); /*0x10039f485*/
        memcpy(__dst, v46, 0x150u); /*0x10039f499*/
        v38 = v56; /*0x10039f49e*/
        v39 = v36 + 1; /*0x10039f4a5*/
        v40 = v56; /*0x10039f4a8*/
        while ( v39 != 1 ) /*0x10039f4b4*/
        {
          --v39; /*0x10039f4c1*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33(v40); /*0x10039f4c4*/
          v40 += 224; /*0x10039f4c9*/
        }
        if ( v55 ) /*0x10039f62e*/
        {
          v40 = v38; /*0x10039f63c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 224 * v55, 8); /*0x10039f63f*/
        }
        if ( !(_BYTE)v68 /*0x10039f794*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v40) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x10039f7a1*/
        }
        v44 = *a2; /*0x10039f667*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039f66a*/
        if ( !v70 /*0x10039f7ab*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v44) )
        {
          *(_BYTE *)(v58 + 8) = 1; /*0x10039f7bf*/
        }
        goto LABEL_29; /*0x10039f7c3*/
      }
      qmemcpy(v46, v47, 0x60u); /*0x10039f4e4*/
      v65 = 0; /*0x10039f4e7*/
      v66 = 1; /*0x10039f4ef*/
      v67 = 0; /*0x10039f4f7*/
      v64 = 1610612768; /*0x10039f4ff*/
      v62 = &v65; /*0x10039f50b*/
      v63 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039f516*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039f521*/
                              v46,
                              (__int64 *)&v62,
                              v33,
                              (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                              v34,
                              v35) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039f78d*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v59,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v59 = v65; /*0x10039f536*/
      v60 = v66; /*0x10039f53d*/
      v61 = v67; /*0x10039f545*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v47); /*0x10039f550*/
      v41 = v59; /*0x10039f559*/
      v42 = v60; /*0x10039f560*/
      v52 = v59; /*0x10039f564*/
      v53 = v60; /*0x10039f56b*/
      v54 = v61; /*0x10039f572*/
      *((_QWORD *)__dst + 3) = v61; /*0x10039f579*/
      *((_QWORD *)__dst + 2) = v42; /*0x10039f57e*/
      *((_QWORD *)__dst + 1) = v41; /*0x10039f583*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039f588*/
      v30 = v45; /*0x10039f58c*/
      ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33)(v45); /*0x10039f593*/
    }
    if ( !(_BYTE)v68 /*0x10039f72d*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v30) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x10039f73a*/
    }
    v20 = *a2; /*0x10039f5bb*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10039f5be*/
LABEL_27:
    if ( !v70 /*0x10039f6d1*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20) )
    {
      *(_BYTE *)(v58 + 8) = 1; /*0x10039f6e5*/
    }
LABEL_29:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v58); /*0x10039f5e6*/
    goto LABEL_30; /*0x10039f5f0*/
  }
  qmemcpy(v46, v47, 0x60u); /*0x10039f113*/
  v65 = 0; /*0x10039f116*/
  v66 = 1; /*0x10039f11e*/
  v67 = 0; /*0x10039f126*/
  v64 = 1610612768; /*0x10039f12e*/
  v62 = &v65; /*0x10039f13a*/
  v63 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039f145*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039f154*/
                          v46,
                          (__int64 *)&v62,
                          v8,
                          (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                          v9,
                          v10) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039f1f4*/
      &anon_7534e791983e23e0bbee4dd7c8383343_407,
      55,
      &v59,
      &anon_7534e791983e23e0bbee4dd7c8383343_413,
      &anon_7534e791983e23e0bbee4dd7c8383343_409);
  v22 = v65; /*0x10039f15d*/
  v23 = v66; /*0x10039f161*/
  v24 = v67; /*0x10039f165*/
  LODWORD(v59) = *(_DWORD *)((char *)&v67 + 1); /*0x10039f16d*/
  *(_DWORD *)((char *)&v59 + 3) = HIDWORD(v67); /*0x10039f176*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v47); /*0x10039f183*/
  v25 = v59; /*0x10039f188*/
  __dst[7] = *(_DWORD *)((char *)&v59 + 3); /*0x10039f194*/
  *(_DWORD *)((char *)__dst + 25) = v25; /*0x10039f199*/
  *((_QWORD *)__dst + 1) = v22; /*0x10039f19e*/
  *((_QWORD *)__dst + 2) = v23; /*0x10039f1a3*/
  *((_BYTE *)__dst + 24) = v24; /*0x10039f1a8*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039f1ba*/
LABEL_30:
  if ( *(_QWORD *)v69 ) /*0x10039f5f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v69 + 8), *(_QWORD *)v69, 1); /*0x10039f60a*/
  return __dst; /*0x10039f612*/
}