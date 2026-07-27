// __ZN13codexmate_lib8commands3mcp22set_mcp_server_enabled @ 0x1003542e0 | 基线 same-set
_DWORD *__fastcall codexmate_lib::commands::mcp::set_mcp_server_enabled::h3191723d6aef1a4a(
        _DWORD *__dst,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int8 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // bl
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // r14
  __int64 v17; // r13
  char v18; // bl
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  int v25; // eax
  int v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v40; // rdi
  __int64 v41; // rdx
  _QWORD v42[28]; // [rsp+0h] [rbp-410h] BYREF
  _QWORD v43[42]; // [rsp+E0h] [rbp-330h] BYREF
  _QWORD v44[31]; // [rsp+230h] [rbp-1E0h] BYREF
  int v45; // [rsp+328h] [rbp-E8h]
  __int64 v46; // [rsp+330h] [rbp-E0h]
  __int64 v47; // [rsp+338h] [rbp-D8h]
  __int64 v48; // [rsp+340h] [rbp-D0h]
  __int64 v49; // [rsp+350h] [rbp-C0h]
  __int64 v50; // [rsp+358h] [rbp-B8h]
  __int64 v51; // [rsp+360h] [rbp-B0h]
  __int64 v52; // [rsp+368h] [rbp-A8h]
  __int64 v53; // [rsp+370h] [rbp-A0h]
  __int64 v54; // [rsp+378h] [rbp-98h]
  __int64 v55; // [rsp+380h] [rbp-90h]
  __int64 v56; // [rsp+388h] [rbp-88h] BYREF
  __int64 v57; // [rsp+390h] [rbp-80h]
  __int64 v58; // [rsp+398h] [rbp-78h]
  __int64 *v59; // [rsp+3A0h] [rbp-70h] BYREF
  __int64 v60; // [rsp+3A8h] [rbp-68h]
  __int64 v61; // [rsp+3B0h] [rbp-60h]
  __int64 v62; // [rsp+3B8h] [rbp-58h] BYREF
  __int64 v63; // [rsp+3C0h] [rbp-50h]
  __int64 v64; // [rsp+3C8h] [rbp-48h]
  int v65; // [rsp+3D4h] [rbp-3Ch]
  _QWORD *v66; // [rsp+3D8h] [rbp-38h]
  char v67; // [rsp+3E7h] [rbp-29h]

  v66 = a4; /*0x1003542f7*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x10035431d*/
    v44,
    a3,
    "changing an MCP server",
    22);
  if ( LODWORD(v44[0]) == 11 )
  {
    v55 = v44[1]; /*0x100354336*/
    v67 = v44[2]; /*0x100354344*/
    v9 = *a2; /*0x100354347*/
    if ( !*a2 ) /*0x100354347*/
      v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x10035453b*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x100354353*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
    {
      v26 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a3, v10, v11); /*0x10035456e*/
      LOBYTE(v26) = v26 ^ 1; /*0x100354573*/
      v65 = v26; /*0x100354575*/
      if ( *((_BYTE *)a2 + 8) ) /*0x100354578*/
        goto LABEL_6; /*0x10035457f*/
    }
    else
    {
      v65 = 0; /*0x10035436e*/
      if ( *((_BYTE *)a2 + 8) )
      {
LABEL_6:
        v44[0] = 0; /*0x100354382*/
        v44[1] = 1; /*0x10035438d*/
        v44[2] = 0; /*0x100354398*/
        v43[2] = 1610612768; /*0x1003543a3*/
        v43[0] = v44; /*0x1003543ae*/
        v43[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003543bc*/
        v12 = 41; /*0x1003543d1*/
        v13 = v65; /*0x1003543d6*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v43) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100354a37*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v56,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        v15 = v13; /*0x1003543e6*/
        v16 = v44[0]; /*0x1003543e8*/
        v17 = v44[1]; /*0x1003543ef*/
        v18 = v44[2]; /*0x1003543f6*/
        LODWORD(v59) = *(_DWORD *)((char *)&v44[2] + 1); /*0x100354403*/
        *(_DWORD *)((char *)&v59 + 3) = HIDWORD(v44[2]); /*0x10035440c*/
        if ( !v15
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v14,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x100354a6b*/
        }
        v19 = *a2; /*0x100354430*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100354433*/
        v21 = (int)v59; /*0x100354438*/
        __dst[7] = *(_DWORD *)((char *)&v59 + 3); /*0x10035443e*/
        *(_DWORD *)((char *)__dst + 25) = v21; /*0x100354443*/
        *((_QWORD *)__dst + 1) = v16; /*0x100354448*/
        *((_QWORD *)__dst + 2) = v17; /*0x10035444d*/
        *((_BYTE *)__dst + 24) = v18; /*0x100354452*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100354464*/
        goto LABEL_27; /*0x100354468*/
      }
    }
    codexmate_lib::core::mcp::set_mcp_server_enabled::hfc6d4203a21aaa27(v43, a2[9], a2[10], v66[1], v66[2], a5); /*0x1003545a4*/
    if ( v43[0] == 0x8000000000000000LL ) /*0x1003545c8*/
    {
      qmemcpy(v44, &v43[1], 0x60u); /*0x1003545e0*/
      v62 = 0; /*0x1003545e3*/
      v63 = 1; /*0x1003545eb*/
      v64 = 0; /*0x1003545f3*/
      v61 = 1610612768; /*0x1003545fb*/
      v59 = &v62; /*0x100354607*/
      v60 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100354612*/
      v12 = (__int64)&v59; /*0x100354616*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10035461d*/
                              v44,
                              &v59) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100354a96*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v56,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v56 = v62; /*0x100354632*/
      v57 = v63; /*0x100354639*/
      v58 = v64; /*0x100354641*/
      v27 = &v43[1]; /*0x100354645*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v43[1]); /*0x100354648*/
      v28 = v56; /*0x100354651*/
      v29 = v57; /*0x100354658*/
      v49 = v56; /*0x10035465c*/
      v50 = v57; /*0x100354663*/
      v51 = v58; /*0x10035466a*/
      *((_QWORD *)__dst + 3) = v58; /*0x100354671*/
      *((_QWORD *)__dst + 2) = v29; /*0x100354676*/
      *((_QWORD *)__dst + 1) = v28; /*0x10035467b*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100354680*/
    }
    else
    {
      v48 = v43[3]; /*0x10035468d*/
      v47 = v43[2]; /*0x10035469b*/
      v46 = v43[1]; /*0x1003546a2*/
      memcpy(&v42[4], &v43[4], 0xC0u); /*0x1003546bc*/
      v49 = v43[1]; /*0x1003546cf*/
      v42[1] = v43[1]; /*0x1003546dd*/
      v42[2] = v43[2]; /*0x1003546e4*/
      v42[3] = v43[3]; /*0x1003546eb*/
      v42[0] = v43[0]; /*0x1003546f2*/
      codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v44, a2[9], a2[10]); /*0x100354708*/
      if ( LODWORD(v44[0]) == 11 ) /*0x100354714*/
      {
        v30 = v44[3]; /*0x10035471a*/
        v52 = v44[1]; /*0x10035472f*/
        v53 = v44[2]; /*0x100354736*/
        v54 = v44[3]; /*0x10035473d*/
        v31 = a2[10]; /*0x100354748*/
        v62 = a2[9]; /*0x10035474c*/
        v63 = v31; /*0x100354750*/
        v59 = nullptr; /*0x100354754*/
        v60 = 1; /*0x10035475c*/
        v61 = 0; /*0x100354764*/
        v43[2] = 1610612768; /*0x10035476c*/
        v43[0] = &v59; /*0x10035477b*/
        v43[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100354789*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x10035479b*/
                                &v62,
                                v43) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100354ad5*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v56,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        v44[28] = v59; /*0x1003547b0*/
        v44[29] = v60; /*0x1003547b7*/
        v44[30] = v61; /*0x1003547c2*/
        memcpy(v44, v42, 0xE0u); /*0x1003547df*/
        v45 = v30; /*0x1003547e4*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1661061d85724ddc((__int64)v43, v44); /*0x1003547f5*/
        v32 = (__int64)v43; /*0x1003547fa*/
        memcpy(__dst, v43, 0x150u); /*0x100354809*/
        v34 = v53; /*0x10035480e*/
        v35 = v30 + 1; /*0x100354815*/
        v36 = v53; /*0x100354818*/
        while ( v35 != 1 ) /*0x100354824*/
        {
          --v35; /*0x100354831*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(); /*0x100354834*/
          v36 += 224; /*0x100354839*/
        }
        if ( v52 ) /*0x10035499e*/
        {
          v32 = 224 * v52; /*0x1003549a0*/
          v36 = v34; /*0x1003549ac*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 224 * v52, 8); /*0x1003549af*/
        }
        if ( !(_BYTE)v65 /*0x100354b04*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v36,
                                 v32,
                                 v33,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x100354b11*/
        }
        v40 = *a2; /*0x1003549d7*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1003549da*/
        if ( !v67 /*0x100354b1b*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v40,
                                 v32,
                                 v41,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v55 + 8) = 1; /*0x100354b2f*/
        }
        goto LABEL_29; /*0x100354b33*/
      }
      qmemcpy(v43, v44, 0x60u); /*0x100354854*/
      v62 = 0; /*0x100354857*/
      v63 = 1; /*0x10035485f*/
      v64 = 0; /*0x100354867*/
      v61 = 1610612768; /*0x10035486f*/
      v59 = &v62; /*0x10035487b*/
      v60 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100354886*/
      v12 = (__int64)&v59; /*0x10035488a*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100354891*/
                              v43,
                              &v59) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100354afd*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v56,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v56 = v62; /*0x1003548a6*/
      v57 = v63; /*0x1003548ad*/
      v58 = v64; /*0x1003548b5*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v44); /*0x1003548c0*/
      v37 = v56; /*0x1003548c9*/
      v38 = v57; /*0x1003548d0*/
      v49 = v56; /*0x1003548d4*/
      v50 = v57; /*0x1003548db*/
      v51 = v58; /*0x1003548e2*/
      *((_QWORD *)__dst + 3) = v58; /*0x1003548e9*/
      *((_QWORD *)__dst + 2) = v38; /*0x1003548ee*/
      *((_QWORD *)__dst + 1) = v37; /*0x1003548f3*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1003548f8*/
      v27 = v42; /*0x1003548fc*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(v42); /*0x100354903*/
    }
    if ( !(_BYTE)v65 /*0x100354a9d*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v27,
                             &v59,
                             v29,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x100354aaa*/
    }
    v19 = *a2; /*0x10035492b*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10035492e*/
LABEL_27:
    if ( !v67 /*0x100354a41*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v19,
                             v12,
                             v20,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v55 + 8) = 1; /*0x100354a55*/
    }
LABEL_29:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v55); /*0x100354956*/
    goto LABEL_30; /*0x100354960*/
  }
  qmemcpy(v43, v44, 0x60u); /*0x100354483*/
  v62 = 0; /*0x100354486*/
  v63 = 1; /*0x10035448e*/
  v64 = 0; /*0x100354496*/
  v61 = 1610612768; /*0x10035449e*/
  v59 = &v62; /*0x1003544aa*/
  v60 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003544b5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1003544c4*/
                          v43,
                          &v59) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100354564*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v56,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v22 = v62; /*0x1003544cd*/
  v23 = v63; /*0x1003544d1*/
  v24 = v64; /*0x1003544d5*/
  LODWORD(v56) = *(_DWORD *)((char *)&v64 + 1); /*0x1003544dd*/
  *(_DWORD *)((char *)&v56 + 3) = HIDWORD(v64); /*0x1003544e6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v44); /*0x1003544f3*/
  v25 = v56; /*0x1003544f8*/
  __dst[7] = *(_DWORD *)((char *)&v56 + 3); /*0x100354504*/
  *(_DWORD *)((char *)__dst + 25) = v25; /*0x100354509*/
  *((_QWORD *)__dst + 1) = v22; /*0x10035450e*/
  *((_QWORD *)__dst + 2) = v23; /*0x100354513*/
  *((_BYTE *)__dst + 24) = v24; /*0x100354518*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10035452a*/
LABEL_30:
  if ( *v66 ) /*0x100354969*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66[1], *v66, 1); /*0x10035497a*/
  return __dst; /*0x100354982*/
}