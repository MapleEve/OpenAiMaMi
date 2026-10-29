// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::mcp::upsert_mcp_server::h821d392c9bf0f598; addr: 0x10039e010; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
_DWORD *__fastcall codexmate_lib::commands::mcp::upsert_mcp_server::h821d392c9bf0f598(
        _DWORD *__dst,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        char a6,
        double a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rbx
  __int64 v23; // r15
  char v24; // cl
  char v25; // r13
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r15
  char v30; // r13
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r14
  _QWORD *v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 *v38; // r14
  __int64 *v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  char v45; // r14
  unsigned __int16 v46; // ax
  int v47; // eax
  __int64 v48; // r13
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // r13
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r15
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  __int64 v74; // r15
  __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdi
  __int64 v81; // rdi
  _QWORD v82[28]; // [rsp+8h] [rbp-518h] BYREF
  _QWORD v83[42]; // [rsp+E8h] [rbp-438h] BYREF
  _QWORD v84[31]; // [rsp+238h] [rbp-2E8h] BYREF
  int v85; // [rsp+330h] [rbp-1F0h]
  __int64 **v86; // [rsp+338h] [rbp-1E8h] BYREF
  __int64 (__fastcall **v87)(); // [rsp+340h] [rbp-1E0h]
  __int64 v88; // [rsp+348h] [rbp-1D8h]
  __int64 v89; // [rsp+350h] [rbp-1D0h]
  __int64 v90; // [rsp+358h] [rbp-1C8h]
  __int64 v91; // [rsp+360h] [rbp-1C0h]
  __int64 v92; // [rsp+368h] [rbp-1B8h]
  __int64 v93; // [rsp+370h] [rbp-1B0h]
  __int64 v94; // [rsp+378h] [rbp-1A8h]
  __int64 v95; // [rsp+380h] [rbp-1A0h]
  __int64 v96; // [rsp+388h] [rbp-198h]
  __int64 v97; // [rsp+390h] [rbp-190h]
  __int64 v98; // [rsp+398h] [rbp-188h]
  __int64 v99; // [rsp+3A0h] [rbp-180h]
  __int64 v100; // [rsp+3A8h] [rbp-178h]
  __int64 v101; // [rsp+3B0h] [rbp-170h]
  __int64 v102; // [rsp+3B8h] [rbp-168h]
  __int64 v103; // [rsp+3C0h] [rbp-160h]
  __int64 v104; // [rsp+3C8h] [rbp-158h]
  __int64 v105; // [rsp+3D0h] [rbp-150h]
  __int64 v106; // [rsp+3D8h] [rbp-148h]
  __int64 v107; // [rsp+3E0h] [rbp-140h]
  __int64 v108; // [rsp+3E8h] [rbp-138h]
  __int64 v109; // [rsp+3F0h] [rbp-130h]
  __int64 v110; // [rsp+3F8h] [rbp-128h]
  __int64 v111; // [rsp+400h] [rbp-120h]
  __int64 v112; // [rsp+408h] [rbp-118h]
  char v113; // [rsp+410h] [rbp-110h]
  char v114; // [rsp+411h] [rbp-10Fh]
  __int64 v115; // [rsp+418h] [rbp-108h]
  __int64 v116; // [rsp+420h] [rbp-100h]
  __int64 v117; // [rsp+428h] [rbp-F8h]
  __int64 v118; // [rsp+430h] [rbp-F0h]
  __int64 v119; // [rsp+438h] [rbp-E8h]
  __int64 v120; // [rsp+440h] [rbp-E0h]
  __int64 v121; // [rsp+448h] [rbp-D8h]
  __int64 v122; // [rsp+450h] [rbp-D0h]
  __int64 v123; // [rsp+458h] [rbp-C8h]
  __int64 v124; // [rsp+460h] [rbp-C0h]
  __int64 (__fastcall **v125)(); // [rsp+468h] [rbp-B8h]
  __int64 v126; // [rsp+470h] [rbp-B0h]
  __int64 *v127; // [rsp+478h] [rbp-A8h]
  __int64 v128; // [rsp+480h] [rbp-A0h] BYREF
  __int64 v129; // [rsp+488h] [rbp-98h]
  __int64 v130; // [rsp+490h] [rbp-90h]
  __int64 *v131; // [rsp+498h] [rbp-88h]
  __int64 v132; // [rsp+4A0h] [rbp-80h]
  _QWORD *v133; // [rsp+4A8h] [rbp-78h]
  __int64 v134; // [rsp+4B0h] [rbp-70h] BYREF
  __int64 v135; // [rsp+4B8h] [rbp-68h]
  __int64 v136; // [rsp+4C0h] [rbp-60h]
  int v137; // [rsp+4CCh] [rbp-54h]
  __int64 *v138; // [rsp+4D0h] [rbp-50h] BYREF
  __int64 v139; // [rsp+4D8h] [rbp-48h]
  __int64 v140; // [rsp+4E0h] [rbp-40h]
  __int64 *v141; // [rsp+4E8h] [rbp-38h]
  char v142; // [rsp+4F7h] [rbp-29h]

  v131 = a5; /*0x10039e027*/
  v127 = a4; /*0x10039e02e*/
  v141 = a2; /*0x10039e035*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hd33f803dee4bb26e( /*0x10039e05b*/
    v84,
    a3,
    (char *)&loc_1016F165B + 2,
    22);
  if ( LODWORD(v84[0]) == 11 ) /*0x10039e067*/
  {
    v133 = (_QWORD *)v84[1]; /*0x10039e074*/
    v142 = v84[2]; /*0x10039e07f*/
    v17 = *v141; /*0x10039e086*/
    if ( !*v141 ) /*0x10039e086*/
      v17 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v141); /*0x10039e3c6*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a7); /*0x10039e095*/
    v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x10039e0ae*/
    v132 = 0x7FFFFFFFFFFFFFFFLL; /*0x10039e0b1*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10039e0b8*/
    {
      v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17); /*0x10039e3fe*/
      LOBYTE(v21) = v21 ^ 1; /*0x10039e401*/
      if ( *((_BYTE *)v141 + 8) ) /*0x10039e409*/
        goto LABEL_6; /*0x10039e40f*/
    }
    else
    {
      v21 = 0; /*0x10039e0be*/
      if ( *((_BYTE *)v141 + 8) ) /*0x10039e0c5*/
      {
LABEL_6:
        v84[0] = 0; /*0x10039e0d1*/
        v84[1] = 1; /*0x10039e0dc*/
        v84[2] = 0; /*0x10039e0e7*/
        v83[2] = 1610612768; /*0x10039e0f2*/
        v83[0] = v84; /*0x10039e0fd*/
        v83[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e10b*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10039e125*/
                                &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                                41,
                                v83,
                                v20,
                                v18,
                                v19) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039eb38*/
            &anon_7534e791983e23e0bbee4dd7c8383343_407,
            55,
            &v128,
            &anon_7534e791983e23e0bbee4dd7c8383343_413,
            &anon_7534e791983e23e0bbee4dd7c8383343_409);
        v22 = v84[0]; /*0x10039e132*/
        v23 = v84[1]; /*0x10039e139*/
        v24 = v21; /*0x10039e140*/
        v25 = v84[2]; /*0x10039e143*/
        LODWORD(v86) = *(_DWORD *)((char *)&v84[2] + 1); /*0x10039e151*/
        *(_DWORD *)((char *)&v86 + 3) = HIDWORD(v84[2]); /*0x10039e15d*/
        if ( !v24 /*0x10039eb6d*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
        {
          *((_BYTE *)v141 + 8) = 1; /*0x10039eb7e*/
        }
        v26 = *v141; /*0x10039e17f*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v141); /*0x10039e182*/
        v27 = (int)v86; /*0x10039e187*/
        __dst[7] = *(_DWORD *)((char *)&v86 + 3); /*0x10039e193*/
        *(_DWORD *)((char *)__dst + 25) = v27; /*0x10039e198*/
        *((_QWORD *)__dst + 1) = v22; /*0x10039e19d*/
        *((_QWORD *)__dst + 2) = v23; /*0x10039e1a2*/
        *((_BYTE *)__dst + 24) = v25; /*0x10039e1a7*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039e1b6*/
        if ( !v142 /*0x10039eb8a*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26) )
        {
          *((_BYTE *)v133 + 8) = 1; /*0x10039eb9b*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x10039e1de*/
        goto LABEL_14; /*0x10039e1e3*/
      }
    }
    v43 = v131[1]; /*0x10039e41c*/
    v44 = v131[2]; /*0x10039e420*/
    v137 = v21; /*0x10039e428*/
    if ( v44 == 3 ) /*0x10039e42c*/
    {
      v46 = __ROL2__(*(_WORD *)v43, 8); /*0x10039e471*/
      if ( v46 == 29555 ) /*0x10039e479*/
        v47 = *(unsigned __int8 *)(v43 + 2) - 101; /*0x10039e47f*/
      else
        v47 = 2 * (v46 >= 0x7373u) - 1; /*0x10039e48a*/
      v45 = (v47 == 0) ^ 3; /*0x10039e494*/
    }
    else if ( v44 == 4 ) /*0x10039e432*/
    {
      v45 = 2 * (*(_DWORD *)v43 != 1886680168) + 1; /*0x10039e465*/
    }
    else
    {
      v45 = 3; /*0x10039e434*/
      if ( v44 == 5 ) /*0x10039e43b*/
        v45 = 3 * ((*(_DWORD *)v43 ^ 0x69647473 | *(unsigned __int8 *)(v43 + 4) ^ 0x6F) != 0); /*0x10039e452*/
    }
    v126 = v43; /*0x10039e498*/
    v124 = *v127; /*0x10039e4a9*/
    v125 = (__int64 (__fastcall **)())v127[1]; /*0x10039e4b4*/
    v48 = v127[2]; /*0x10039e4bb*/
    v49 = v141[10]; /*0x10039e4c7*/
    v138 = (__int64 *)v141[9]; /*0x10039e4cb*/
    v139 = v49; /*0x10039e4cf*/
    v84[0] = 0; /*0x10039e4d3*/
    v84[1] = 1; /*0x10039e4de*/
    v84[2] = 0; /*0x10039e4e9*/
    v83[2] = 1610612768; /*0x10039e4f4*/
    v83[0] = v84; /*0x10039e4ff*/
    v83[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e50d*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v138, v83) ) /*0x10039e51f*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039eb63*/
        &anon_7534e791983e23e0bbee4dd7c8383343_407,
        55,
        &v128,
        &anon_7534e791983e23e0bbee4dd7c8383343_413,
        &anon_7534e791983e23e0bbee4dd7c8383343_409);
    v89 = v84[0]; /*0x10039e53a*/
    v90 = v84[1]; /*0x10039e541*/
    v91 = v84[2]; /*0x10039e54f*/
    v97 = a8[2]; /*0x10039e55e*/
    v50 = *a8; /*0x10039e565*/
    v96 = a8[1]; /*0x10039e56c*/
    v95 = v50; /*0x10039e573*/
    v94 = a9[2]; /*0x10039e582*/
    v51 = *a9; /*0x10039e589*/
    v93 = a9[1]; /*0x10039e590*/
    v92 = v51; /*0x10039e597*/
    v100 = a10[2]; /*0x10039e5a6*/
    v52 = *a10; /*0x10039e5ad*/
    v99 = a10[1]; /*0x10039e5b4*/
    v98 = v52; /*0x10039e5bb*/
    v106 = a11[5]; /*0x10039e5ca*/
    v105 = a11[4]; /*0x10039e5d5*/
    v104 = a11[3]; /*0x10039e5e0*/
    v103 = a11[2]; /*0x10039e5eb*/
    v53 = *a11; /*0x10039e5f2*/
    v102 = a11[1]; /*0x10039e5f9*/
    v101 = v53; /*0x10039e600*/
    v112 = a12[5]; /*0x10039e60f*/
    v111 = a12[4]; /*0x10039e61a*/
    v110 = a12[3]; /*0x10039e625*/
    v109 = a12[2]; /*0x10039e630*/
    v54 = *a12; /*0x10039e637*/
    v108 = a12[1]; /*0x10039e63e*/
    v107 = v54; /*0x10039e645*/
    v86 = (__int64 **)v124; /*0x10039e653*/
    v87 = v125; /*0x10039e661*/
    v88 = v48; /*0x10039e668*/
    v114 = v45; /*0x10039e66f*/
    v113 = a6; /*0x10039e676*/
    v55 = v137; /*0x10039e697*/
    codexmate_lib::core::mcp::upsert_mcp_server::h51bb0a5a5819852f(v83, v141[9], v141[10], (__int64)&v86); /*0x10039e69b*/
    if ( v83[0] == 0x8000000000000000LL ) /*0x10039e6bb*/
    {
      qmemcpy(v84, &v83[1], 0x60u); /*0x10039e6d3*/
      v134 = 0; /*0x10039e6d6*/
      v135 = 1; /*0x10039e6de*/
      v136 = 0; /*0x10039e6e6*/
      v140 = 1610612768; /*0x10039e6ee*/
      v138 = &v134; /*0x10039e6fa*/
      v139 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e6fe*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039e709*/
                              v84,
                              (__int64 *)&v138,
                              v56,
                              (__int64)&v134,
                              v57,
                              v58) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039ebc5*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v128,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v128 = v134; /*0x10039e71e*/
      v129 = v135; /*0x10039e725*/
      v130 = v136; /*0x10039e730*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v83[1]); /*0x10039e73a*/
      v61 = v128; /*0x10039e746*/
      v62 = v129; /*0x10039e74d*/
      v118 = v128; /*0x10039e754*/
      v119 = v129; /*0x10039e75b*/
      v120 = v130; /*0x10039e762*/
      *((_QWORD *)__dst + 3) = v130; /*0x10039e769*/
      *((_QWORD *)__dst + 2) = v62; /*0x10039e76e*/
      *((_QWORD *)__dst + 1) = v61; /*0x10039e773*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039e782*/
    }
    else
    {
      v117 = v83[3]; /*0x10039e78f*/
      v116 = v83[2]; /*0x10039e79d*/
      v115 = v83[1]; /*0x10039e7a4*/
      memcpy(&v82[4], &v83[4], 0xC0u); /*0x10039e7be*/
      v118 = v83[1]; /*0x10039e7d1*/
      v82[1] = v83[1]; /*0x10039e7df*/
      v82[2] = v83[2]; /*0x10039e7e6*/
      v82[3] = v83[3]; /*0x10039e7ed*/
      v82[0] = v83[0]; /*0x10039e7f4*/
      codexmate_lib::core::mcp::load_mcp_servers::hc366c6386eb87acb(v84, v141[9], v141[10]); /*0x10039e80e*/
      if ( LODWORD(v84[0]) == 11 ) /*0x10039e81a*/
      {
        v66 = v84[3]; /*0x10039e820*/
        v121 = v84[1]; /*0x10039e835*/
        v122 = v84[2]; /*0x10039e83c*/
        v123 = v84[3]; /*0x10039e843*/
        v67 = v141[10]; /*0x10039e852*/
        v134 = v141[9]; /*0x10039e856*/
        v135 = v67; /*0x10039e85a*/
        v138 = nullptr; /*0x10039e85e*/
        v139 = 1; /*0x10039e866*/
        v140 = 0; /*0x10039e86e*/
        v83[2] = 1610612768; /*0x10039e876*/
        v83[0] = &v138; /*0x10039e885*/
        v83[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e88c*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x10039e89e*/
                                &v134,
                                v83) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039ec2a*/
            &anon_7534e791983e23e0bbee4dd7c8383343_407,
            55,
            &v128,
            &anon_7534e791983e23e0bbee4dd7c8383343_413,
            &anon_7534e791983e23e0bbee4dd7c8383343_409);
        v84[28] = v138; /*0x10039e8b3*/
        v84[29] = v139; /*0x10039e8ba*/
        v84[30] = v140; /*0x10039e8c5*/
        memcpy(v84, v82, 0xE0u); /*0x10039e8e2*/
        v85 = v66; /*0x10039e8e7*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h4d7de687f8fc2f2b(v83, v84); /*0x10039e8f8*/
        v68 = (__int64)v83; /*0x10039e8fd*/
        memcpy(__dst, v83, 0x150u); /*0x10039e90c*/
        v73 = v122; /*0x10039e911*/
        v74 = v66 + 1; /*0x10039e918*/
        v75 = v122; /*0x10039e91b*/
        while ( v74 != 1 ) /*0x10039e924*/
        {
          --v74; /*0x10039e931*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33(v75); /*0x10039e934*/
          v75 += 224; /*0x10039e939*/
        }
        if ( v121 ) /*0x10039ea80*/
        {
          v68 = 224 * v121; /*0x10039ea82*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 224 * v121, 8); /*0x10039ea91*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33( /*0x10039ea9d*/
          &v86,
          v68,
          v69,
          v70,
          v71,
          v72);
        if ( !v55 /*0x10039ec5c*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v86) )
        {
          *((_BYTE *)v141 + 8) = 1; /*0x10039ec6d*/
        }
        v81 = *v141; /*0x10039eabf*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v141); /*0x10039eac5*/
        if ( !v142 /*0x10039ec79*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v81) )
        {
          *((_BYTE *)v133 + 8) = 1; /*0x10039ec8a*/
        }
        goto LABEL_66; /*0x10039ec8e*/
      }
      qmemcpy(v83, v84, 0x60u); /*0x10039e954*/
      v134 = 0; /*0x10039e957*/
      v135 = 1; /*0x10039e95f*/
      v136 = 0; /*0x10039e967*/
      v140 = 1610612768; /*0x10039e96f*/
      v138 = &v134; /*0x10039e97b*/
      v139 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e97f*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039e98a*/
                              v83,
                              (__int64 *)&v138,
                              v63,
                              (__int64)&v134,
                              v64,
                              v65) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039ec52*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v128,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v128 = v134; /*0x10039e99f*/
      v129 = v135; /*0x10039e9a6*/
      v130 = v136; /*0x10039e9b1*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v84); /*0x10039e9bf*/
      v76 = v128; /*0x10039e9cb*/
      v77 = v129; /*0x10039e9d2*/
      v118 = v128; /*0x10039e9d9*/
      v119 = v129; /*0x10039e9e0*/
      v120 = v130; /*0x10039e9e7*/
      *((_QWORD *)__dst + 3) = v130; /*0x10039e9ee*/
      *((_QWORD *)__dst + 2) = v77; /*0x10039e9f3*/
      *((_QWORD *)__dst + 1) = v76; /*0x10039e9f8*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039ea07*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33( /*0x10039ea12*/
        v82,
        &v138,
        v77,
        v76,
        v78,
        v79);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::h1e2eebb42566ea33( /*0x10039ea1e*/
      &v86,
      &v138,
      v62,
      v61,
      v59,
      v60);
    if ( !v55 /*0x10039ebd2*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v86) )
    {
      *((_BYTE *)v141 + 8) = 1; /*0x10039ebe3*/
    }
    v80 = *v141; /*0x10039ea40*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v141); /*0x10039ea46*/
    if ( !v142 /*0x10039ebef*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v132) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v80) )
    {
      *((_BYTE *)v133 + 8) = 1; /*0x10039ec00*/
    }
LABEL_66:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x10039eae4*/
    v40 = *v131; /*0x10039eafa*/
    if ( !*v131 ) /*0x10039eb00*/
      return __dst; /*0x10039eb00*/
    v41 = v126; /*0x10039eb0b*/
    goto LABEL_31; /*0x10039eb12*/
  }
  qmemcpy(v83, v84, 0x60u); /*0x10039e1fe*/
  v138 = nullptr; /*0x10039e201*/
  v139 = 1; /*0x10039e209*/
  v140 = 0; /*0x10039e211*/
  v88 = 1610612768; /*0x10039e219*/
  v86 = &v138; /*0x10039e228*/
  v87 = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x10039e236*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10039e247*/
                          v83,
                          (__int64 *)&v86,
                          v14,
                          (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                          v15,
                          v16) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10039e3ef*/
      &anon_7534e791983e23e0bbee4dd7c8383343_407,
      55,
      &v128,
      &anon_7534e791983e23e0bbee4dd7c8383343_413,
      &anon_7534e791983e23e0bbee4dd7c8383343_409);
  v28 = (__int64)v138; /*0x10039e254*/
  v29 = v139; /*0x10039e258*/
  v30 = v140; /*0x10039e25c*/
  LODWORD(v134) = *(_DWORD *)((char *)&v140 + 1); /*0x10039e264*/
  *(_DWORD *)((char *)&v134 + 3) = HIDWORD(v140); /*0x10039e26a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v84); /*0x10039e274*/
  v31 = v134; /*0x10039e279*/
  __dst[7] = *(_DWORD *)((char *)&v134 + 3); /*0x10039e27f*/
  *(_DWORD *)((char *)__dst + 25) = v31; /*0x10039e284*/
  *((_QWORD *)__dst + 1) = v28; /*0x10039e289*/
  *((_QWORD *)__dst + 2) = v29; /*0x10039e28e*/
  *((_BYTE *)__dst + 24) = v30; /*0x10039e293*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10039e2a2*/
LABEL_14:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h22dec19a45cc3dff(a12); /*0x10039e2a6*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h22dec19a45cc3dff(a11); /*0x10039e2b3*/
  v32 = *a10; /*0x10039e2bc*/
  if ( *a10 != 0x8000000000000000LL && v32 ) /*0x10039e2d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a10[1], v32, 1); /*0x10039e2e0*/
  v33 = a9[1]; /*0x10039e2e9*/
  v34 = a9[2]; /*0x10039e2ed*/
  if ( v34 ) /*0x10039e2f4*/
  {
    v35 = (_QWORD *)(v33 + 8); /*0x10039e2f6*/
    do /*0x10039e307*/
    {
      v36 = *(v35 - 1); /*0x10039e309*/
      if ( v36 ) /*0x10039e310*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v36, 1); /*0x10039e31a*/
      v35 += 3; /*0x10039e300*/
      --v34; /*0x10039e304*/
    }
    while ( v34 ); /*0x10039e307*/
  }
  if ( *a9 ) /*0x10039e325*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24 * *a9, 8); /*0x10039e33d*/
  v37 = *a8; /*0x10039e346*/
  v38 = v131; /*0x10039e356*/
  if ( *a8 != 0x8000000000000000LL && v37 ) /*0x10039e362*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a8[1], v37, 1); /*0x10039e36d*/
  v39 = v127; /*0x10039e378*/
  if ( *v38 ) /*0x10039e372*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[1], *v38, 1); /*0x10039e38a*/
  v40 = *v39; /*0x10039e38f*/
  if ( *v39 ) /*0x10039e38f*/
  {
    v41 = v39[1]; /*0x10039e397*/
LABEL_31:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x10039e3a0*/
  }
  return __dst; /*0x10039e3a8*/
}