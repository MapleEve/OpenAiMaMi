// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x1003ed390 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::config_shape::h15253ffe3d384670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r15
  const void *v6; // r13
  __int64 v7; // rdi
  int v8; // r15d
  size_t v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r15
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  _BYTE *v17; // rax
  void *v18; // rax
  char v19; // al
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // r14
  size_t v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  _WORD *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r12
  _BYTE *v31; // rax
  char v32; // al
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r12
  void *v36; // rax
  __int64 *v37; // rbx
  char v38; // al
  __int64 v39; // r13
  void *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r12
  void *v44; // rax
  __int64 *v45; // rbx
  char v46; // al
  __int64 v47; // r13
  void *v48; // rsi
  __int64 v49; // rax
  void *v50; // rax
  __int64 *v51; // rbx
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  _QWORD *v56; // rax
  char v57; // cl
  _QWORD *v58; // rax
  _DWORD *v59; // rax
  void *v60; // r14
  __int64 v61; // r15
  bool v62; // zf
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 (__fastcall **v66)(); // rax
  __int64 result; // rax
  __int64 v69; // [rsp+10h] [rbp-210h]
  size_t v70; // [rsp+18h] [rbp-208h]
  int v71; // [rsp+2Ch] [rbp-1F4h]
  size_t v72; // [rsp+30h] [rbp-1F0h]
  const void *v75; // [rsp+48h] [rbp-1D8h]
  void *v76; // [rsp+50h] [rbp-1D0h]
  __int64 v77[19]; // [rsp+58h] [rbp-1C8h] BYREF
  _QWORD v78[12]; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v79; // [rsp+150h] [rbp-D0h] BYREF
  size_t v80; // [rsp+158h] [rbp-C8h]
  __int64 v81; // [rsp+160h] [rbp-C0h]
  __int64 v82; // [rsp+168h] [rbp-B8h]
  __int64 *v83; // [rsp+170h] [rbp-B0h]
  __int64 (__fastcall **v84)(); // [rsp+178h] [rbp-A8h] BYREF
  size_t v85; // [rsp+180h] [rbp-A0h]
  size_t v86; // [rsp+188h] [rbp-98h]
  __int64 *v87; // [rsp+190h] [rbp-90h]
  __int64 v88; // [rsp+198h] [rbp-88h]
  __int64 v89; // [rsp+1A0h] [rbp-80h] BYREF
  unsigned __int64 v90; // [rsp+1A8h] [rbp-78h]
  size_t v91; // [rsp+1B0h] [rbp-70h]
  size_t v92; // [rsp+1B8h] [rbp-68h]
  __int64 v93; // [rsp+1C0h] [rbp-60h] BYREF
  void *__src; // [rsp+1C8h] [rbp-58h]
  size_t __n; // [rsp+1D0h] [rbp-50h]
  __int64 v96; // [rsp+1D8h] [rbp-48h] BYREF
  void *v97; // [rsp+1E0h] [rbp-40h]
  size_t v98; // [rsp+1E8h] [rbp-38h]
  size_t v99; // [rsp+1F0h] [rbp-30h]

  v5 = 0x8000000000000000LL; /*0x1003ed3bc*/
  v6 = *(const void **)(a2 + 56); /*0x1003ed3c6*/
  v70 = *(_QWORD *)(a2 + 64); /*0x1003ed3d5*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v89, v6, v70); /*0x1003ed3dc*/
  v7 = v90; /*0x1003ed3e5*/
  v87 = (__int64 *)v89; /*0x1003ed3e9*/
  v75 = v6; /*0x1003ed3f3*/
  if ( __OFSUB__(-v89, 1) ) /*0x1003ed3f0*/
  {
    v8 = v90 & 3; /*0x1003ed3ff*/
    switch ( v90 & 3 ) /*0x1003ed411*/
    {
      case 0uLL: /*0x1003ed411*/
        if ( *(_BYTE *)(v90 + 16) ) /*0x1003ed413*/
          goto LABEL_11; /*0x1003ed417*/
        goto LABEL_26; /*0x1003ed417*/
      case 1uLL: /*0x1003ed411*/
        if ( *(_BYTE *)(v90 + 15) ) /*0x1003ed446*/
          goto LABEL_11; /*0x1003ed44a*/
        v13 = *(_QWORD *)(v90 + 7); /*0x1003ed59b*/
        if ( *(_QWORD *)v13 ) /*0x1003ed59f*/
          (*(void (__fastcall **)(_QWORD))v13)(*(_QWORD *)(v90 - 1)); /*0x1003ed5aa*/
        if ( *(_QWORD *)(v13 + 8) ) /*0x1003ed5ac*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed5bc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed5ce*/
LABEL_26:
        v7 = 1; /*0x1003ed5d3*/
        v87 = nullptr; /*0x1003ed5d8*/
        v9 = 0; /*0x1003ed5e3*/
        v5 = 0x8000000000000000LL; /*0x1003ed5e5*/
        goto LABEL_27; /*0x1003ed5e5*/
      case 2uLL: /*0x1003ed411*/
        if ( HIDWORD(v90) == 2 ) /*0x1003ed431*/
          goto LABEL_26; /*0x1003ed431*/
        goto LABEL_11; /*0x1003ed431*/
      case 3uLL: /*0x1003ed411*/
        if ( !HIDWORD(v90) ) /*0x1003ed43b*/
          goto LABEL_26; /*0x1003ed43f*/
LABEL_11:
        v10 = v90; /*0x1003ed450*/
        v96 = v90; /*0x1003ed453*/
        v78[0] = 0; /*0x1003ed457*/
        v78[1] = 1; /*0x1003ed462*/
        v78[2] = 0; /*0x1003ed46d*/
        v77[2] = 1610612768; /*0x1003ed478*/
        v77[0] = (__int64)v78; /*0x1003ed48a*/
        v77[1] = (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003ed498*/
        if ( _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0((__int64 **)&v96, v77) ) /*0x1003ed4aa*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ee92d*/
            (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycall"
                     "ed `Result::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-c"
                     "harsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersacces"
                     "s-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-a"
                     "geaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-stat"
                     "uscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-r"
                     "eport-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragm"
                     "apublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acce"
                     "ptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-"
                     "transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-co"
                     "ntrolx-frame-options",
            55,
            (__int64)&v93,
            (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
            (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
        v11 = v78[0]; /*0x1003ed4b7*/
        codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8( /*0x1003ed4e4*/
          (__int64)v77,
          (const void *)v78[1],
          v78[2],
          a3,
          a4);
        v88 = v77[0]; /*0x1003ed4f0*/
        v76 = (void *)v77[1]; /*0x1003ed4fe*/
        v69 = v77[2]; /*0x1003ed50c*/
        if ( v11 ) /*0x1003ed516*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed523*/
        if ( v8 == 1 ) /*0x1003ed52c*/
        {
          v12 = *(_QWORD *)(v10 + 7); /*0x1003ed536*/
          if ( *(_QWORD *)v12 ) /*0x1003ed53a*/
            (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v10 - 1)); /*0x1003ed545*/
          if ( *(_QWORD *)(v12 + 8) ) /*0x1003ed547*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed557*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ed569*/
        }
        v7 = 1; /*0x1003ed56e*/
        v87 = nullptr; /*0x1003ed573*/
        v9 = 0; /*0x1003ed57e*/
        v6 = v75; /*0x1003ed580*/
        v5 = 0x8000000000000000LL; /*0x1003ed587*/
        goto LABEL_28; /*0x1003ed591*/
    }
  }
  v9 = v91; /*0x1003ed41e*/
LABEL_27:
  v88 = 0x8000000000000000LL; /*0x1003ed5ef*/
LABEL_28:
  v82 = v7; /*0x1003ed5f6*/
  v72 = v9; /*0x1003ed5fd*/
  v71 = codexmate_lib::core::relay::codex_writer::router_entry_presence::h63c86674d39250e5((void *)v7); /*0x1003ed609*/
  codexmate_lib::core::relay::config_takeover::inspect::hca535f0e91dfc0bc(v78, a2); /*0x1003ed619*/
  if ( LODWORD(v78[0]) == 10 ) /*0x1003ed625*/
  {
    v77[6] = v78[7]; /*0x1003ed632*/
    v77[5] = v78[6]; /*0x1003ed640*/
    v77[4] = v78[5]; /*0x1003ed64e*/
    v77[3] = v78[4]; /*0x1003ed65c*/
    v77[2] = v78[3]; /*0x1003ed66a*/
    v77[1] = v78[2]; /*0x1003ed67f*/
    v77[0] = v78[1]; /*0x1003ed686*/
    v79 = 0; /*0x1003ed68d*/
    v81 = 0; /*0x1003ed698*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed6a3*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003ed6b8*/
    if ( !v14 ) /*0x1003ed6c0*/
      goto LABEL_170; /*0x1003ed6c0*/
    qmemcpy(v14, "backupExists", 12); /*0x1003ed6d0*/
    v93 = 12; /*0x1003ed6da*/
    __src = v14; /*0x1003ed6e2*/
    __n = 12; /*0x1003ed6e6*/
    LOBYTE(v89) = 1; /*0x1003ed6f5*/
    BYTE1(v89) = v77[6]; /*0x1003ed6f9*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed70f*/
      (__int64)&v96,
      &v79,
      (__int64)&v93,
      &v89);
    if ( (_BYTE)v96 != 6 ) /*0x1003ed718*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003ed71e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed723*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x13u, 1u); /*0x1003ed738*/
    if ( !v15 ) /*0x1003ed740*/
      goto LABEL_170; /*0x1003ed740*/
    qmemcpy(v15, "foreignTopLevelKeys", 19); /*0x1003ed761*/
    v93 = 19; /*0x1003ed76b*/
    __src = v15; /*0x1003ed773*/
    __n = 19; /*0x1003ed777*/
    serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99(&v89, v77); /*0x1003ed78a*/
    if ( (_BYTE)v89 == 6 ) /*0x1003ed793*/
    {
      v96 = v90; /*0x1003ee855*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ee877*/
        (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        43,
        (__int64)&v96,
        (__int64)&off_10188DA08,
        (__int64)&off_10188CC08);
    }
    v99 = v92; /*0x1003ed79d*/
    v98 = v91; /*0x1003ed7a5*/
    v97 = (void *)v90; /*0x1003ed7b1*/
    v96 = v89; /*0x1003ed7b5*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed7cc*/
      (__int64)&v89,
      &v79,
      (__int64)&v93,
      &v96);
    if ( (_BYTE)v89 != 6 ) /*0x1003ed7d5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v89); /*0x1003ed7db*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed7e0*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003ed7f5*/
    if ( !v16 ) /*0x1003ed7fd*/
      goto LABEL_170; /*0x1003ed7fd*/
    qmemcpy(v16, "foreignSections", 15); /*0x1003ed81e*/
    v93 = 15; /*0x1003ed821*/
    __src = v16; /*0x1003ed829*/
    __n = 15; /*0x1003ed82d*/
    serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99(&v89, &v77[3]); /*0x1003ed840*/
    if ( (_BYTE)v89 == 6 ) /*0x1003ed849*/
    {
      v96 = v90; /*0x1003ee8ad*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ee8cf*/
        (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        43,
        (__int64)&v96,
        (__int64)&off_10188DA08,
        (__int64)&off_10188CC08);
    }
    v99 = v92; /*0x1003ed853*/
    v98 = v91; /*0x1003ed85b*/
    v97 = (void *)v90; /*0x1003ed867*/
    v96 = v89; /*0x1003ed86b*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed882*/
      (__int64)&v89,
      &v79,
      (__int64)&v93,
      &v96);
    if ( (_BYTE)v89 != 6 ) /*0x1003ed88b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v89); /*0x1003ed891*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed896*/
    v17 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003ed8ab*/
    if ( !v17 ) /*0x1003ed8b3*/
LABEL_170:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ee95a*/
    *(_QWORD *)v17 = 0x6F72724564616572LL; /*0x1003ed8c3*/
    v17[8] = 114; /*0x1003ed8c6*/
    v93 = 9; /*0x1003ed8ca*/
    __src = v17; /*0x1003ed8d2*/
    __n = 9; /*0x1003ed8d6*/
    LOBYTE(v89) = 0; /*0x1003ed8de*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed8f5*/
      (__int64)&v96,
      &v79,
      (__int64)&v93,
      &v89);
    if ( (_BYTE)v96 != 6 ) /*0x1003ed8fe*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003ed904*/
    v90 = v79; /*0x1003ed917*/
    v91 = v80; /*0x1003ed91b*/
    v92 = v81; /*0x1003ed926*/
    LOBYTE(v89) = 5; /*0x1003ed92a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::h8fe616c43f2fbd4e(v77); /*0x1003ed935*/
    goto LABEL_69; /*0x1003ed93a*/
  }
  qmemcpy(v77, v78, 0x60u); /*0x1003ed957*/
  v84 = nullptr; /*0x1003ed95a*/
  v86 = 0; /*0x1003ed965*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed970*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003ed97f*/
  if ( !v18 ) /*0x1003ed987*/
    goto LABEL_169; /*0x1003ed987*/
  qmemcpy(v18, "backupExists", 12); /*0x1003ed99a*/
  v93 = 12; /*0x1003ed9a5*/
  __src = v18; /*0x1003ed9ad*/
  __n = 12; /*0x1003ed9b1*/
  v19 = codexmate_lib::core::relay::config_takeover::backup_exists::h9652f75c4c8477d4(a2, 1); /*0x1003ed9bc*/
  LOBYTE(v89) = 1; /*0x1003ed9c1*/
  BYTE1(v89) = v19; /*0x1003ed9c5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ed9db*/
    (__int64)&v96,
    &v84,
    (__int64)&v93,
    &v89);
  if ( (_BYTE)v96 != 6 ) /*0x1003ed9e4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003ed9ea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ed9ef*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x13u, 1u); /*0x1003eda03*/
  if ( !v20 ) /*0x1003eda0b*/
    goto LABEL_169; /*0x1003eda0b*/
  qmemcpy(v20, "foreignTopLevelKeys", 19); /*0x1003eda29*/
  v93 = 19; /*0x1003eda33*/
  __src = v20; /*0x1003eda3b*/
  __n = 19; /*0x1003eda3f*/
  v90 = 0; /*0x1003eda47*/
  v91 = 8; /*0x1003eda4f*/
  v92 = 0; /*0x1003eda57*/
  LOBYTE(v89) = 4; /*0x1003eda5f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003eda76*/
    (__int64)&v96,
    &v84,
    (__int64)&v93,
    &v89);
  if ( (_BYTE)v96 != 6 ) /*0x1003eda7f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003eda85*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eda8a*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003eda9e*/
  if ( !v21 ) /*0x1003edaa6*/
    goto LABEL_169; /*0x1003edaa6*/
  qmemcpy(v21, "foreignSections", 15); /*0x1003edac4*/
  v93 = 15; /*0x1003edac7*/
  __src = v21; /*0x1003edacf*/
  __n = 15; /*0x1003edad3*/
  v90 = 0; /*0x1003edadb*/
  v91 = 8; /*0x1003edae3*/
  v92 = 0; /*0x1003edaeb*/
  LOBYTE(v89) = 4; /*0x1003edaf3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003edb0d*/
    (__int64)&v96,
    &v84,
    (__int64)&v93,
    &v89);
  if ( (_BYTE)v96 != 6 ) /*0x1003edb16*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003edb1c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edb21*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003edb35*/
  if ( !v22 ) /*0x1003edb3d*/
LABEL_169:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ee94b*/
  *(_QWORD *)v22 = 0x6F72724564616572LL; /*0x1003edb50*/
  *(_BYTE *)(v22 + 8) = 114; /*0x1003edb54*/
  v79 = 9; /*0x1003edb59*/
  v80 = v22; /*0x1003edb64*/
  v81 = 9; /*0x1003edb6b*/
  v96 = 0; /*0x1003edb76*/
  v97 = (void *)1; /*0x1003edb7e*/
  v98 = 0; /*0x1003edb86*/
  v91 = 1610612768; /*0x1003edb8e*/
  v89 = (__int64)&v96; /*0x1003edb96*/
  v90 = (unsigned __int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003edba1*/
  if ( _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1(v77, &v89) ) /*0x1003edbb0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ee89f*/
      (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Re"
               "sult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept"
               "-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-me"
               "thodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request"
               "-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dis"
               "positioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinc"
               "eif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onl"
               "yrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-w"
               "ebsocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-re"
               "questsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      55,
      (__int64)&v93,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
  v83 = (__int64 *)v96; /*0x1003edbc1*/
  codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8((__int64)&v93, v97, v98, a3, a4); /*0x1003edbe9*/
  v23 = __src; /*0x1003edbee*/
  v24 = __n; /*0x1003edbf2*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1003edbf9*/
  {
    v25 = 0; /*0x1003edbfb*/
    goto LABEL_57; /*0x1003edbfb*/
  }
  if ( __n ) /*0x1003edc0d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edc0f*/
    v25 = 1; /*0x1003edc14*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1u); /*0x1003edc21*/
    if ( !v26 ) /*0x1003edc29*/
LABEL_57:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25); /*0x1003edbfd*/
    v27 = v26; /*0x1003edc2b*/
  }
  else
  {
    v27 = 1; /*0x1003edc30*/
  }
  memcpy((void *)v27, v23, v24); /*0x1003edc3f*/
  LOBYTE(v89) = 3; /*0x1003edc44*/
  v90 = v24; /*0x1003edc48*/
  v91 = v27; /*0x1003edc4c*/
  v92 = v24; /*0x1003edc50*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003edc6a*/
    (__int64)&v96,
    &v84,
    (__int64)&v79,
    &v89);
  v6 = v75; /*0x1003edc6f*/
  v5 = 0x8000000000000000LL; /*0x1003edc7a*/
  if ( (_BYTE)v96 != 6 ) /*0x1003edc84*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v96); /*0x1003edc8a*/
  if ( v93 ) /*0x1003edc96*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003edca0*/
  if ( v83 ) /*0x1003edcaf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003edcbd*/
  v90 = (unsigned __int64)v84; /*0x1003edcd0*/
  v91 = v85; /*0x1003edcd4*/
  v92 = v86; /*0x1003edcdf*/
  LOBYTE(v89) = 5; /*0x1003edce3*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v77); /*0x1003edcee*/
LABEL_69:
  v84 = nullptr; /*0x1003edcf3*/
  v86 = 0; /*0x1003edcfe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edd09*/
  v28 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003edd1e*/
  if ( !v28 ) /*0x1003edd26*/
    goto LABEL_168; /*0x1003edd26*/
  v28[2] = 29556; /*0x1003edd2f*/
  *(_DWORD *)v28 = 1936291941; /*0x1003edd35*/
  v96 = 6; /*0x1003edd3b*/
  v97 = v28; /*0x1003edd43*/
  v98 = 6; /*0x1003edd47*/
  std::sys::fs::metadata::h32fa16d3052ea535(v77, v6, v70); /*0x1003edd60*/
  v29 = v77[0]; /*0x1003edd65*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1003edd76*/
    v77[0],
    v77[1]);
  LOBYTE(v29) = v29 ^ 1; /*0x1003edd7b*/
  LOBYTE(v77[0]) = 1; /*0x1003edd7f*/
  BYTE1(v77[0]) = v29; /*0x1003edd86*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003edda6*/
    (__int64)v78,
    &v84,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003eddb2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003eddbb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eddc0*/
  v30 = 9; /*0x1003eddc5*/
  v31 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003eddd5*/
  if ( !v31 ) /*0x1003edddd*/
LABEL_168:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ee934*/
  *(_QWORD *)v31 = 0x6F72724564616572LL; /*0x1003eddf0*/
  v31[8] = 114; /*0x1003eddf3*/
  v96 = 9; /*0x1003eddf7*/
  v97 = v31; /*0x1003eddff*/
  v98 = 9; /*0x1003ede03*/
  if ( v88 == 0x8000000000000000LL ) /*0x1003ede12*/
  {
    v32 = 0; /*0x1003ede14*/
    goto LABEL_83; /*0x1003ede16*/
  }
  v30 = v69; /*0x1003ede18*/
  if ( v69 < 0 ) /*0x1003ede22*/
  {
    v33 = 0; /*0x1003ede24*/
    goto LABEL_77; /*0x1003ede24*/
  }
  if ( v69 ) /*0x1003ede37*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ede39*/
    v33 = 1; /*0x1003ede3e*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v69, 1u); /*0x1003ede4c*/
    if ( !v34 ) /*0x1003ede54*/
LABEL_77:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33); /*0x1003ede27*/
    v29 = v34; /*0x1003ede56*/
    v5 = 0x8000000000000000LL; /*0x1003ede59*/
  }
  else
  {
    v29 = 1; /*0x1003ede65*/
  }
  memcpy((void *)v29, v76, v69); /*0x1003ede78*/
  v32 = 3; /*0x1003ede7d*/
LABEL_83:
  LOBYTE(v77[0]) = v32; /*0x1003ede7f*/
  v77[1] = v30; /*0x1003ede85*/
  v77[2] = v29; /*0x1003ede8c*/
  v77[3] = v30; /*0x1003ede93*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003edeb3*/
    (__int64)v78,
    &v84,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003edebf*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003edec8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edecd*/
  v35 = 21; /*0x1003eded2*/
  v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x15u, 1u); /*0x1003edee2*/
  if ( !v36 ) /*0x1003edeea*/
    goto LABEL_168; /*0x1003edeea*/
  qmemcpy(v36, "topLevelModelProvider", 21); /*0x1003edf19*/
  v93 = 21; /*0x1003edf1c*/
  __src = v36; /*0x1003edf24*/
  __n = 21; /*0x1003edf28*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hc34e692d3b8540f1( /*0x1003edf4f*/
    &v96,
    v82,
    v9,
    "model_provider",
    14);
  v37 = (__int64 *)v96; /*0x1003edf54*/
  if ( v96 == 0x8000000000000000LL ) /*0x1003edf5b*/
  {
    v38 = 0; /*0x1003edf5d*/
    goto LABEL_96; /*0x1003edf5f*/
  }
  v35 = v98; /*0x1003edf61*/
  if ( (v98 & 0x8000000000000000LL) != 0LL ) /*0x1003edf68*/
  {
    v39 = 0; /*0x1003edf6a*/
    goto LABEL_90; /*0x1003edf6a*/
  }
  v40 = v97; /*0x1003edf7d*/
  if ( v98 ) /*0x1003edf81*/
  {
    v83 = (__int64 *)v97; /*0x1003edf83*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edf8a*/
    v39 = 1; /*0x1003edf8f*/
    v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v35, 1u); /*0x1003edf9d*/
    if ( !v41 ) /*0x1003edfa5*/
LABEL_90:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39); /*0x1003edf6d*/
    v5 = v41; /*0x1003edfa7*/
    v40 = v83; /*0x1003edfaa*/
  }
  else
  {
    v5 = 1; /*0x1003edfb3*/
  }
  memcpy((void *)v5, v40, v35); /*0x1003edfbf*/
  v38 = 3; /*0x1003edfc4*/
LABEL_96:
  LOBYTE(v77[0]) = v38; /*0x1003edfc6*/
  v77[1] = v35; /*0x1003edfcc*/
  v77[2] = v5; /*0x1003edfd3*/
  v77[3] = v35; /*0x1003edfda*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003edffa*/
    (__int64)v78,
    &v84,
    (__int64)&v93,
    v77);
  v42 = 0x8000000000000000LL; /*0x1003ee006*/
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee010*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee019*/
  if ( v37 != (__int64 *)0x8000000000000000LL && v37 ) /*0x1003ee026*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee034*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee039*/
  v43 = 13; /*0x1003ee03e*/
  v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1003ee04e*/
  if ( !v44 ) /*0x1003ee056*/
    goto LABEL_168; /*0x1003ee056*/
  qmemcpy(v44, "topLevelModel", 13); /*0x1003ee077*/
  v93 = 13; /*0x1003ee07a*/
  __src = v44; /*0x1003ee082*/
  __n = 13; /*0x1003ee086*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hc34e692d3b8540f1(&v96, v82, v72, "model", 5); /*0x1003ee0ad*/
  v45 = (__int64 *)v96; /*0x1003ee0b2*/
  if ( v96 == 0x8000000000000000LL ) /*0x1003ee0b9*/
  {
    v46 = 0; /*0x1003ee0bb*/
    goto LABEL_112; /*0x1003ee0bd*/
  }
  v43 = v98; /*0x1003ee0bf*/
  if ( (v98 & 0x8000000000000000LL) != 0LL ) /*0x1003ee0c6*/
  {
    v47 = 0; /*0x1003ee0c8*/
    goto LABEL_106; /*0x1003ee0c8*/
  }
  v48 = v97; /*0x1003ee0db*/
  if ( v98 ) /*0x1003ee0df*/
  {
    v83 = (__int64 *)v97; /*0x1003ee0e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee0e8*/
    v47 = 1; /*0x1003ee0ed*/
    v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v43, 1u); /*0x1003ee0fb*/
    if ( !v49 ) /*0x1003ee103*/
LABEL_106:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v47); /*0x1003ee0cb*/
    v42 = v49; /*0x1003ee105*/
    v48 = v83; /*0x1003ee108*/
  }
  else
  {
    v42 = 1; /*0x1003ee111*/
  }
  memcpy((void *)v42, v48, v43); /*0x1003ee11d*/
  v46 = 3; /*0x1003ee122*/
LABEL_112:
  LOBYTE(v77[0]) = v46; /*0x1003ee124*/
  v77[1] = v43; /*0x1003ee12a*/
  v77[2] = v42; /*0x1003ee131*/
  v77[3] = v43; /*0x1003ee138*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee158*/
    (__int64)v78,
    &v84,
    (__int64)&v93,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee16e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee177*/
  if ( v45 != (__int64 *)0x8000000000000000LL && v45 ) /*0x1003ee184*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee192*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee197*/
  v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x13u, 1u); /*0x1003ee1ac*/
  if ( !v50 ) /*0x1003ee1b4*/
    goto LABEL_168; /*0x1003ee1b4*/
  qmemcpy(v50, "hasModelCatalogJson", 19); /*0x1003ee1d5*/
  v93 = 19; /*0x1003ee1df*/
  __src = v50; /*0x1003ee1e7*/
  __n = 19; /*0x1003ee1eb*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hc34e692d3b8540f1( /*0x1003ee212*/
    &v96,
    v82,
    v72,
    "model_catalog_jsonaimai1openaicodex_router_catalog.jsonmodels_cache.json",
    18);
  v51 = (__int64 *)v96; /*0x1003ee217*/
  LOBYTE(v77[0]) = 1; /*0x1003ee21e*/
  BYTE1(v77[0]) = v96 != 0x8000000000000000LL; /*0x1003ee225*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee245*/
    (__int64)v78,
    &v84,
    (__int64)&v93,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee251*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee25a*/
  if ( v51 != (__int64 *)0x8000000000000000LL && v51 ) /*0x1003ee267*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee275*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee27a*/
  v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1003ee28f*/
  if ( !v52 ) /*0x1003ee297*/
    goto LABEL_168; /*0x1003ee297*/
  qmemcpy(v52, "routerEntry", 11); /*0x1003ee2aa*/
  v79 = 11; /*0x1003ee2b5*/
  v80 = (size_t)v52; /*0x1003ee2c0*/
  v81 = 11; /*0x1003ee2c7*/
  v93 = 0; /*0x1003ee2d2*/
  __n = 0; /*0x1003ee2da*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee2e2*/
  v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003ee2f6*/
  if ( !v53 ) /*0x1003ee2fe*/
    goto LABEL_171; /*0x1003ee2fe*/
  qmemcpy(v53, "providerSection", 15); /*0x1003ee328*/
  v96 = 15; /*0x1003ee32b*/
  v97 = v53; /*0x1003ee333*/
  v98 = 15; /*0x1003ee337*/
  LOBYTE(v77[0]) = 1; /*0x1003ee33f*/
  BYTE1(v77[0]) = v71; /*0x1003ee349*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee365*/
    (__int64)v78,
    &v93,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee371*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee37a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee37f*/
  v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xEu, 1u); /*0x1003ee393*/
  if ( !v54 ) /*0x1003ee39b*/
    goto LABEL_171; /*0x1003ee39b*/
  qmemcpy(v54, "profileSection", 14); /*0x1003ee3bf*/
  v96 = 14; /*0x1003ee3c2*/
  v97 = v54; /*0x1003ee3ca*/
  v98 = 14; /*0x1003ee3ce*/
  LOBYTE(v77[0]) = 1; /*0x1003ee3d6*/
  BYTE1(v77[0]) = BYTE1(v71); /*0x1003ee3dd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee3f9*/
    (__int64)v78,
    &v93,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee405*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee40e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee413*/
  v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 1u); /*0x1003ee427*/
  if ( !v55 ) /*0x1003ee42f*/
    goto LABEL_171; /*0x1003ee42f*/
  qmemcpy(v55, "providerEndpoint", 16); /*0x1003ee44a*/
  v96 = 16; /*0x1003ee44d*/
  v97 = v55; /*0x1003ee455*/
  v98 = 16; /*0x1003ee459*/
  LOBYTE(v77[0]) = 1; /*0x1003ee461*/
  BYTE1(v77[0]) = (v71 & 0xFFFFFFu) >> 16; /*0x1003ee468*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee485*/
    (__int64)v78,
    &v93,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee491*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee49a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee49f*/
  v56 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003ee4b3*/
  if ( !v56 ) /*0x1003ee4bb*/
LABEL_171:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ee969*/
  *v56 = 0x6574656C706D6F63LL; /*0x1003ee4cb*/
  v96 = 8; /*0x1003ee4ce*/
  v97 = v56; /*0x1003ee4d6*/
  v98 = 8; /*0x1003ee4da*/
  v57 = 0; /*0x1003ee4e6*/
  if ( (v71 & 1) != 0 ) /*0x1003ee4ec*/
    v57 = (v71 & 0xFFFFFFu) >> 16; /*0x1003ee4ec*/
  LOBYTE(v77[0]) = 1; /*0x1003ee4ef*/
  BYTE1(v77[0]) = v57; /*0x1003ee4f6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee512*/
    (__int64)v78,
    &v93,
    (__int64)&v96,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee51e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee527*/
  v77[1] = v93; /*0x1003ee534*/
  v77[2] = (__int64)__src; /*0x1003ee53b*/
  v77[3] = __n; /*0x1003ee546*/
  LOBYTE(v77[0]) = 5; /*0x1003ee54d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee570*/
    (__int64)v78,
    &v84,
    (__int64)&v79,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee583*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee58c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee591*/
  v58 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003ee5a6*/
  if ( !v58 ) /*0x1003ee5ae*/
    goto LABEL_168; /*0x1003ee5ae*/
  *v58 = 0x7265766F656B6174LL; /*0x1003ee5c1*/
  v96 = 8; /*0x1003ee5c4*/
  v97 = v58; /*0x1003ee5cc*/
  v98 = 8; /*0x1003ee5d0*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003ee5e3*/
    v77,
    &v89);
  if ( LOBYTE(v77[0]) == 6 ) /*0x1003ee5ef*/
  {
    v78[0] = v77[1]; /*0x1003ee8e0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ee908*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)v78,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC20);
  }
  v78[3] = v77[3]; /*0x1003ee5fc*/
  v78[2] = v77[2]; /*0x1003ee60a*/
  v78[1] = v77[1]; /*0x1003ee61f*/
  v78[0] = v77[0]; /*0x1003ee626*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee646*/
    (__int64)v77,
    &v84,
    (__int64)&v96,
    v78);
  if ( LOBYTE(v77[0]) != 6 ) /*0x1003ee652*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v77); /*0x1003ee65b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee660*/
  v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1003ee675*/
  if ( !v59 ) /*0x1003ee67d*/
    goto LABEL_168; /*0x1003ee67d*/
  *v59 = 1752457584; /*0x1003ee686*/
  v93 = 4; /*0x1003ee68c*/
  __src = v59; /*0x1003ee694*/
  __n = 4; /*0x1003ee698*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v77, v75, v70); /*0x1003ee6b1*/
  codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8( /*0x1003ee6d9*/
    (__int64)&v96,
    (const void *)v77[1],
    v77[2],
    a3,
    a4);
  if ( 2 * v77[0] ) /*0x1003ee6e5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee71a*/
    v60 = v97; /*0x1003ee71f*/
    v61 = v98; /*0x1003ee723*/
    v62 = v98 == 0; /*0x1003ee727*/
    if ( (v98 & 0x8000000000000000LL) != 0LL ) /*0x1003ee72a*/
      goto LABEL_147; /*0x1003ee72a*/
  }
  else
  {
    v60 = v97; /*0x1003ee6f2*/
    v61 = v98; /*0x1003ee6f6*/
    v62 = v98 == 0; /*0x1003ee6fa*/
    if ( (v98 & 0x8000000000000000LL) != 0LL ) /*0x1003ee6fd*/
    {
LABEL_147:
      v63 = 0; /*0x1003ee6ff*/
      goto LABEL_148; /*0x1003ee6ff*/
    }
  }
  if ( v62 ) /*0x1003ee72c*/
  {
    v65 = 1; /*0x1003ee750*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee72e*/
    v63 = 1; /*0x1003ee733*/
    v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v61, 1u); /*0x1003ee741*/
    if ( !v64 ) /*0x1003ee749*/
LABEL_148:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v63); /*0x1003ee702*/
    v65 = v64; /*0x1003ee74b*/
  }
  memcpy((void *)v65, v60, v61); /*0x1003ee75f*/
  LOBYTE(v77[0]) = 3; /*0x1003ee764*/
  v77[1] = v61; /*0x1003ee76b*/
  v77[2] = v65; /*0x1003ee772*/
  v77[3] = v61; /*0x1003ee779*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ee799*/
    (__int64)v78,
    &v84,
    (__int64)&v93,
    v77);
  if ( LOBYTE(v78[0]) != 6 ) /*0x1003ee7a5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v78); /*0x1003ee7ae*/
  if ( v96 ) /*0x1003ee7ba*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee7c4*/
  *(_QWORD *)(a1 + 24) = v86; /*0x1003ee7d7*/
  v66 = v84; /*0x1003ee7db*/
  *(_QWORD *)(a1 + 16) = v85; /*0x1003ee7e9*/
  *(_QWORD *)(a1 + 8) = v66; /*0x1003ee7ed*/
  *(_BYTE *)a1 = 5; /*0x1003ee7f1*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v89); /*0x1003ee7f8*/
  result = 2 * v88; /*0x1003ee804*/
  if ( 2 * v88 ) /*0x1003ee804*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee81d*/
  if ( v87 ) /*0x1003ee82c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee83a*/
  return result; /*0x1003ee83f*/
}