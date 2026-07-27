// __ZN13codexmate_lib8commands3mcp17upsert_mcp_server @ 0x100353380 | 基线 same-set
_DWORD *__fastcall codexmate_lib::commands::mcp::upsert_mcp_server::h0b5d3ace6f195b4c(
        _DWORD *__dst,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        char a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11)
{
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rcx
  char v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int64 v27; // r15
  char v28; // r13
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rsi
  _QWORD *v36; // r14
  __int64 *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  char v43; // r14
  unsigned __int16 v44; // ax
  int v45; // eax
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // r13
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD v74[28]; // [rsp+8h] [rbp-518h] BYREF
  _QWORD v75[42]; // [rsp+E8h] [rbp-438h] BYREF
  _QWORD v76[31]; // [rsp+238h] [rbp-2E8h] BYREF
  int v77; // [rsp+330h] [rbp-1F0h]
  __int64 **v78; // [rsp+338h] [rbp-1E8h] BYREF
  __int64 (__fastcall **v79)(); // [rsp+340h] [rbp-1E0h]
  __int64 v80; // [rsp+348h] [rbp-1D8h]
  __int64 v81; // [rsp+350h] [rbp-1D0h]
  __int64 v82; // [rsp+358h] [rbp-1C8h]
  __int64 v83; // [rsp+360h] [rbp-1C0h]
  __int64 v84; // [rsp+368h] [rbp-1B8h]
  __int64 v85; // [rsp+370h] [rbp-1B0h]
  __int64 v86; // [rsp+378h] [rbp-1A8h]
  __int64 v87; // [rsp+380h] [rbp-1A0h]
  __int64 v88; // [rsp+388h] [rbp-198h]
  __int64 v89; // [rsp+390h] [rbp-190h]
  __int64 v90; // [rsp+398h] [rbp-188h]
  __int64 v91; // [rsp+3A0h] [rbp-180h]
  __int64 v92; // [rsp+3A8h] [rbp-178h]
  __int64 v93; // [rsp+3B0h] [rbp-170h]
  __int64 v94; // [rsp+3B8h] [rbp-168h]
  __int64 v95; // [rsp+3C0h] [rbp-160h]
  __int64 v96; // [rsp+3C8h] [rbp-158h]
  __int64 v97; // [rsp+3D0h] [rbp-150h]
  __int64 v98; // [rsp+3D8h] [rbp-148h]
  __int64 v99; // [rsp+3E0h] [rbp-140h]
  __int64 v100; // [rsp+3E8h] [rbp-138h]
  __int64 v101; // [rsp+3F0h] [rbp-130h]
  __int64 v102; // [rsp+3F8h] [rbp-128h]
  __int64 v103; // [rsp+400h] [rbp-120h]
  __int64 v104; // [rsp+408h] [rbp-118h]
  char v105; // [rsp+410h] [rbp-110h]
  char v106; // [rsp+411h] [rbp-10Fh]
  __int64 v107; // [rsp+418h] [rbp-108h]
  __int64 v108; // [rsp+420h] [rbp-100h]
  __int64 v109; // [rsp+428h] [rbp-F8h]
  __int64 v110; // [rsp+430h] [rbp-F0h]
  __int64 v111; // [rsp+438h] [rbp-E8h]
  __int64 v112; // [rsp+440h] [rbp-E0h]
  __int64 v113; // [rsp+448h] [rbp-D8h]
  __int64 v114; // [rsp+450h] [rbp-D0h]
  __int64 v115; // [rsp+458h] [rbp-C8h]
  __int64 **v116; // [rsp+460h] [rbp-C0h]
  __int64 (__fastcall **v117)(); // [rsp+468h] [rbp-B8h]
  __int64 v118; // [rsp+470h] [rbp-B0h]
  __int64 *v119; // [rsp+478h] [rbp-A8h]
  __int64 v120; // [rsp+480h] [rbp-A0h] BYREF
  __int64 v121; // [rsp+488h] [rbp-98h]
  __int64 v122; // [rsp+490h] [rbp-90h]
  _QWORD *v123; // [rsp+498h] [rbp-88h]
  __int64 v124; // [rsp+4A0h] [rbp-80h]
  _QWORD *v125; // [rsp+4A8h] [rbp-78h]
  __int64 v126; // [rsp+4B0h] [rbp-70h] BYREF
  __int64 v127; // [rsp+4B8h] [rbp-68h]
  __int64 v128; // [rsp+4C0h] [rbp-60h]
  unsigned int v129; // [rsp+4CCh] [rbp-54h]
  __int64 *v130; // [rsp+4D0h] [rbp-50h] BYREF
  __int64 v131; // [rsp+4D8h] [rbp-48h]
  __int64 v132; // [rsp+4E0h] [rbp-40h]
  __int64 *v133; // [rsp+4E8h] [rbp-38h]
  char v134; // [rsp+4F7h] [rbp-29h]

  v123 = a5; /*0x100353397*/
  v119 = a4; /*0x10035339e*/
  v133 = a2; /*0x1003533a5*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1003533cb*/
    v76,
    a3,
    "updating an MCP serverchanging an MCP server",
    22);
  if ( LODWORD(v76[0]) == 11 )
  {
    v125 = (_QWORD *)v76[1]; /*0x1003533e4*/
    v134 = v76[2]; /*0x1003533ef*/
    v14 = *v133; /*0x1003533f6*/
    if ( !*v133 ) /*0x1003533f6*/
      v14 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v133); /*0x100353736*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v14); /*0x100353405*/
    v124 = 0x7FFFFFFFFFFFFFFFLL; /*0x100353421*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, a3, v15, 0x7FFFFFFFFFFFFFFFLL); /*0x10035376e*/
      LOBYTE(v16) = v16 ^ 1; /*0x100353771*/
      if ( *((_BYTE *)v133 + 8) ) /*0x100353779*/
        goto LABEL_6; /*0x10035377f*/
    }
    else
    {
      v16 = 0; /*0x10035342e*/
      if ( *((_BYTE *)v133 + 8) )
      {
LABEL_6:
        v76[0] = 0; /*0x100353441*/
        v76[1] = 1; /*0x10035344c*/
        v76[2] = 0; /*0x100353457*/
        v75[2] = 1610612768; /*0x100353462*/
        v75[0] = v76; /*0x10035346d*/
        v75[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035347b*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v75) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353ea8*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v120,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        v18 = v76[0]; /*0x1003534a2*/
        v19 = v76[1]; /*0x1003534a9*/
        v20 = v16; /*0x1003534b0*/
        v21 = v76[2]; /*0x1003534b3*/
        LODWORD(v78) = *(_DWORD *)((char *)&v76[2] + 1); /*0x1003534c1*/
        *(_DWORD *)((char *)&v78 + 3) = HIDWORD(v76[2]); /*0x1003534cd*/
        if ( !(_BYTE)v20
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v17,
                                 v20) )
        {
          *((_BYTE *)v133 + 8) = 1; /*0x100353eee*/
        }
        v22 = *v133; /*0x1003534ef*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x1003534f2*/
        v24 = (int)v78; /*0x1003534f7*/
        v25 = *(unsigned int *)((char *)&v78 + 3); /*0x1003534fd*/
        __dst[7] = *(_DWORD *)((char *)&v78 + 3); /*0x100353503*/
        *(_DWORD *)((char *)__dst + 25) = v24; /*0x100353508*/
        *((_QWORD *)__dst + 1) = v18; /*0x10035350d*/
        *((_QWORD *)__dst + 2) = v19; /*0x100353512*/
        *((_BYTE *)__dst + 24) = v21; /*0x100353517*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100353526*/
        if ( !v134 /*0x100353efa*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, 41, v23, v25) )
        {
          *((_BYTE *)v125 + 8) = 1; /*0x100353f0b*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v125); /*0x10035354e*/
        goto LABEL_14; /*0x100353553*/
      }
    }
    v41 = v123[1]; /*0x10035378c*/
    v42 = v123[2]; /*0x100353790*/
    v129 = v16; /*0x100353798*/
    if ( v42 == 3 ) /*0x10035379c*/
    {
      v44 = __ROL2__(*(_WORD *)v41, 8); /*0x1003537e1*/
      if ( v44 == 29555 ) /*0x1003537e9*/
        v45 = *(unsigned __int8 *)(v41 + 2) - 101; /*0x1003537ef*/
      else
        v45 = 2 * (v44 >= 0x7373u) - 1; /*0x1003537fa*/
      v43 = (v45 == 0) ^ 3; /*0x100353804*/
    }
    else if ( v42 == 4 ) /*0x1003537a2*/
    {
      v43 = 2 * (*(_DWORD *)v41 != 1886680168) + 1; /*0x1003537d5*/
    }
    else
    {
      v43 = 3; /*0x1003537a4*/
      if ( v42 == 5 ) /*0x1003537ab*/
        v43 = 3 * ((*(_DWORD *)v41 ^ 0x69647473 | *(unsigned __int8 *)(v41 + 4) ^ 0x6F) != 0); /*0x1003537c2*/
    }
    v118 = v41; /*0x100353808*/
    v116 = (__int64 **)*v119; /*0x100353819*/
    v117 = (__int64 (__fastcall **)())v119[1]; /*0x100353824*/
    v46 = v119[2]; /*0x10035382b*/
    v47 = v133[10]; /*0x100353837*/
    v130 = (__int64 *)v133[9]; /*0x10035383b*/
    v131 = v47; /*0x10035383f*/
    v76[0] = 0; /*0x100353843*/
    v76[1] = 1; /*0x10035384e*/
    v76[2] = 0; /*0x100353859*/
    v75[2] = 1610612768; /*0x100353864*/
    v75[0] = v76; /*0x10035386f*/
    v75[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035387d*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v130, v75) ) /*0x10035388f*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353ed3*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v120,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v81 = v76[0]; /*0x1003538aa*/
    v82 = v76[1]; /*0x1003538b1*/
    v83 = v76[2]; /*0x1003538bf*/
    v89 = a7[2]; /*0x1003538ce*/
    v48 = *a7; /*0x1003538d5*/
    v88 = a7[1]; /*0x1003538dc*/
    v87 = v48; /*0x1003538e3*/
    v86 = a8[2]; /*0x1003538f2*/
    v49 = *a8; /*0x1003538f9*/
    v85 = a8[1]; /*0x100353900*/
    v84 = v49; /*0x100353907*/
    v92 = a9[2]; /*0x100353916*/
    v50 = *a9; /*0x10035391d*/
    v91 = a9[1]; /*0x100353924*/
    v90 = v50; /*0x10035392b*/
    v98 = a10[5]; /*0x10035393a*/
    v97 = a10[4]; /*0x100353945*/
    v96 = a10[3]; /*0x100353950*/
    v95 = a10[2]; /*0x10035395b*/
    v51 = *a10; /*0x100353962*/
    v94 = a10[1]; /*0x100353969*/
    v93 = v51; /*0x100353970*/
    v104 = a11[5]; /*0x10035397f*/
    v103 = a11[4]; /*0x10035398a*/
    v102 = a11[3]; /*0x100353995*/
    v101 = a11[2]; /*0x1003539a0*/
    v52 = *a11; /*0x1003539a7*/
    v100 = a11[1]; /*0x1003539ae*/
    v99 = v52; /*0x1003539b5*/
    v78 = v116; /*0x1003539c3*/
    v79 = v117; /*0x1003539d1*/
    v80 = v46; /*0x1003539d8*/
    v106 = v43; /*0x1003539df*/
    v105 = a6; /*0x1003539e6*/
    v53 = v129; /*0x100353a07*/
    codexmate_lib::core::mcp::upsert_mcp_server::h5e6eaa54129c4429(v75, v133[9], v133[10], &v78); /*0x100353a0b*/
    if ( v75[0] == 0x8000000000000000LL ) /*0x100353a2b*/
    {
      qmemcpy(v76, &v75[1], 0x60u); /*0x100353a43*/
      v126 = 0; /*0x100353a46*/
      v127 = 1; /*0x100353a4e*/
      v128 = 0; /*0x100353a56*/
      v132 = 1610612768; /*0x100353a5e*/
      v130 = &v126; /*0x100353a6a*/
      v131 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100353a6e*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100353a79*/
                              v76,
                              &v130) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353f35*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v120,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v120 = v126; /*0x100353a8e*/
      v121 = v127; /*0x100353a95*/
      v122 = v128; /*0x100353aa0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v75[1]); /*0x100353aaa*/
      v54 = v120; /*0x100353ab6*/
      v55 = v121; /*0x100353abd*/
      v110 = v120; /*0x100353ac4*/
      v111 = v121; /*0x100353acb*/
      v112 = v122; /*0x100353ad2*/
      *((_QWORD *)__dst + 3) = v122; /*0x100353ad9*/
      *((_QWORD *)__dst + 2) = v55; /*0x100353ade*/
      *((_QWORD *)__dst + 1) = v54; /*0x100353ae3*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100353af2*/
    }
    else
    {
      v109 = v75[3]; /*0x100353aff*/
      v108 = v75[2]; /*0x100353b0d*/
      v107 = v75[1]; /*0x100353b14*/
      memcpy(&v74[4], &v75[4], 0xC0u); /*0x100353b2e*/
      v110 = v75[1]; /*0x100353b41*/
      v74[1] = v75[1]; /*0x100353b4f*/
      v74[2] = v75[2]; /*0x100353b56*/
      v74[3] = v75[3]; /*0x100353b5d*/
      v74[0] = v75[0]; /*0x100353b64*/
      codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v76, v133[9], v133[10]); /*0x100353b7e*/
      if ( LODWORD(v76[0]) == 11 ) /*0x100353b8a*/
      {
        v56 = v76[3]; /*0x100353b90*/
        v113 = v76[1]; /*0x100353ba5*/
        v114 = v76[2]; /*0x100353bac*/
        v115 = v76[3]; /*0x100353bb3*/
        v57 = v133[10]; /*0x100353bc2*/
        v126 = v133[9]; /*0x100353bc6*/
        v127 = v57; /*0x100353bca*/
        v130 = nullptr; /*0x100353bce*/
        v131 = 1; /*0x100353bd6*/
        v132 = 0; /*0x100353bde*/
        v75[2] = 1610612768; /*0x100353be6*/
        v75[0] = &v130; /*0x100353bf5*/
        v75[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100353bfc*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x100353c0e*/
                                &v126,
                                v75) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353f9a*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v120,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        v76[28] = v130; /*0x100353c23*/
        v76[29] = v131; /*0x100353c2a*/
        v76[30] = v132; /*0x100353c35*/
        memcpy(v76, v74, 0xE0u); /*0x100353c52*/
        v77 = v56; /*0x100353c57*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1661061d85724ddc((__int64)v75, v76); /*0x100353c68*/
        v58 = (__int64)v75; /*0x100353c6d*/
        memcpy(__dst, v75, 0x150u); /*0x100353c7c*/
        v59 = v114; /*0x100353c81*/
        v60 = v56 + 1; /*0x100353c88*/
        v61 = v114; /*0x100353c8b*/
        while ( v60 != 1 ) /*0x100353c94*/
        {
          --v60; /*0x100353ca1*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(); /*0x100353ca4*/
          v61 += 224; /*0x100353ca9*/
        }
        if ( v113 ) /*0x100353df0*/
        {
          v58 = 224 * v113; /*0x100353df2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 224 * v113, 8); /*0x100353e01*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(&v78); /*0x100353e0d*/
        if ( !v53 /*0x100353fcc*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v78, v58, v69, v70) )
        {
          *((_BYTE *)v133 + 8) = 1; /*0x100353fdd*/
        }
        v71 = *v133; /*0x100353e2f*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x100353e35*/
        if ( !v134 /*0x100353fe9*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v71, v58, v72, v73) )
        {
          *((_BYTE *)v125 + 8) = 1; /*0x100353ffa*/
        }
        goto LABEL_66; /*0x100353ffe*/
      }
      qmemcpy(v75, v76, 0x60u); /*0x100353cc4*/
      v126 = 0; /*0x100353cc7*/
      v127 = 1; /*0x100353ccf*/
      v128 = 0; /*0x100353cd7*/
      v132 = 1610612768; /*0x100353cdf*/
      v130 = &v126; /*0x100353ceb*/
      v131 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100353cef*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100353cfa*/
                              v75,
                              &v130) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353fc2*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v120,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v120 = v126; /*0x100353d0f*/
      v121 = v127; /*0x100353d16*/
      v122 = v128; /*0x100353d21*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x100353d2f*/
      v62 = v120; /*0x100353d3b*/
      v63 = v121; /*0x100353d42*/
      v110 = v120; /*0x100353d49*/
      v111 = v121; /*0x100353d50*/
      v112 = v122; /*0x100353d57*/
      *((_QWORD *)__dst + 3) = v122; /*0x100353d5e*/
      *((_QWORD *)__dst + 2) = v63; /*0x100353d63*/
      *((_QWORD *)__dst + 1) = v62; /*0x100353d68*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100353d77*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(v74); /*0x100353d82*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(&v78); /*0x100353d8e*/
    if ( !v53 /*0x100353f42*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v78, &v130, v64, v65) )
    {
      *((_BYTE *)v133 + 8) = 1; /*0x100353f53*/
    }
    v66 = *v133; /*0x100353db0*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x100353db6*/
    if ( !v134 /*0x100353f5f*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v66, &v130, v67, v68) )
    {
      *((_BYTE *)v125 + 8) = 1; /*0x100353f70*/
    }
LABEL_66:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v125); /*0x100353e54*/
    v38 = *v123; /*0x100353e6a*/
    if ( !*v123 ) /*0x100353e70*/
      return __dst; /*0x100353e70*/
    v39 = v118; /*0x100353e7b*/
    goto LABEL_31; /*0x100353e82*/
  }
  qmemcpy(v75, v76, 0x60u); /*0x10035356e*/
  v130 = nullptr; /*0x100353571*/
  v131 = 1; /*0x100353579*/
  v132 = 0; /*0x100353581*/
  v80 = 1610612768; /*0x100353589*/
  v78 = &v130; /*0x100353598*/
  v79 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003535a6*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1003535b7*/
                          v75,
                          &v78) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035375f*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v120,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v26 = v130; /*0x1003535c4*/
  v27 = v131; /*0x1003535c8*/
  v28 = v132; /*0x1003535cc*/
  LODWORD(v126) = *(_DWORD *)((char *)&v132 + 1); /*0x1003535d4*/
  *(_DWORD *)((char *)&v126 + 3) = HIDWORD(v132); /*0x1003535da*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x1003535e4*/
  v29 = v126; /*0x1003535e9*/
  __dst[7] = *(_DWORD *)((char *)&v126 + 3); /*0x1003535ef*/
  *(_DWORD *)((char *)__dst + 25) = v29; /*0x1003535f4*/
  *((_QWORD *)__dst + 1) = v26; /*0x1003535f9*/
  *((_QWORD *)__dst + 2) = v27; /*0x1003535fe*/
  *((_BYTE *)__dst + 24) = v28; /*0x100353603*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100353612*/
LABEL_14:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(a11); /*0x100353616*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(a10); /*0x100353623*/
  v30 = *a9; /*0x10035362c*/
  if ( *a9 != 0x8000000000000000LL && v30 ) /*0x100353641*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a9[1], v30, 1); /*0x100353650*/
  v31 = a8[1]; /*0x100353659*/
  v32 = a8[2]; /*0x10035365d*/
  if ( v32 ) /*0x100353664*/
  {
    v33 = (_QWORD *)(v31 + 8); /*0x100353666*/
    do /*0x100353677*/
    {
      v34 = *(v33 - 1); /*0x100353679*/
      if ( v34 ) /*0x100353680*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1); /*0x10035368a*/
      v33 += 3; /*0x100353670*/
      --v32; /*0x100353674*/
    }
    while ( v32 ); /*0x100353677*/
  }
  if ( *a8 ) /*0x100353695*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24 * *a8, 8); /*0x1003536ad*/
  v35 = *a7; /*0x1003536b6*/
  v36 = v123; /*0x1003536c6*/
  if ( *a7 != 0x8000000000000000LL && v35 ) /*0x1003536d2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a7[1], v35, 1); /*0x1003536dd*/
  v37 = v119; /*0x1003536e8*/
  if ( *v36 ) /*0x1003536e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[1], *v36, 1); /*0x1003536fa*/
  v38 = *v37; /*0x1003536ff*/
  if ( *v37 ) /*0x1003536ff*/
  {
    v39 = v37[1]; /*0x100353707*/
LABEL_31:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100353710*/
  }
  return __dst; /*0x100353718*/
}