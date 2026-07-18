// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x1003ef710 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::catalog_shape::hc438bd89b450f3db(__int64 a1, __int64 a2)
{
  size_t v2; // r14
  void *v3; // rax
  char v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // al
  void *v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  __int64 v11; // rdx
  void *v12; // rax
  void *v13; // r12
  __int64 v14; // rcx
  char *v15; // r14
  size_t v16; // r13
  __int64 *v17; // rbx
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  size_t v28; // r15
  void *v29; // rax
  __int64 v30; // r12
  char *v31; // rsi
  __int64 v32; // rax
  void *v33; // rax
  __int64 v34; // r15
  void *v35; // rax
  void *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 i; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 j; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 k; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 result; // rax
  __int64 v55; // r15
  _QWORD v56[3]; // [rsp+8h] [rbp-278h] BYREF
  _QWORD v57[4]; // [rsp+20h] [rbp-260h] BYREF
  __int64 v58; // [rsp+40h] [rbp-240h] BYREF
  __int64 v59; // [rsp+48h] [rbp-238h]
  __int64 v60; // [rsp+50h] [rbp-230h]
  __int64 v61; // [rsp+58h] [rbp-228h] BYREF
  __int64 v62; // [rsp+60h] [rbp-220h]
  __int64 v63; // [rsp+68h] [rbp-218h]
  size_t v64; // [rsp+70h] [rbp-210h] BYREF
  __int64 v65; // [rsp+78h] [rbp-208h]
  __int64 v66; // [rsp+80h] [rbp-200h]
  size_t v67; // [rsp+88h] [rbp-1F8h] BYREF
  const void *v68; // [rsp+90h] [rbp-1F0h]
  size_t v69; // [rsp+98h] [rbp-1E8h]
  __int64 v70; // [rsp+A0h] [rbp-1E0h]
  __int64 v71; // [rsp+A8h] [rbp-1D8h]
  void *__src; // [rsp+B0h] [rbp-1D0h]
  _QWORD v73[2]; // [rsp+B8h] [rbp-1C8h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-1B8h]
  unsigned __int8 v75[16]; // [rsp+D0h] [rbp-1B0h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-1A0h]
  __int64 v77; // [rsp+F0h] [rbp-190h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-188h]
  __int64 v79; // [rsp+100h] [rbp-180h]
  __int64 v80; // [rsp+108h] [rbp-178h]
  __int64 v81; // [rsp+110h] [rbp-170h]
  __int64 v82; // [rsp+118h] [rbp-168h]
  _QWORD v83[2]; // [rsp+120h] [rbp-160h] BYREF
  __int64 v84; // [rsp+130h] [rbp-150h]
  _QWORD v85[2]; // [rsp+138h] [rbp-148h] BYREF
  __int64 v86; // [rsp+148h] [rbp-138h]
  const void *v87; // [rsp+150h] [rbp-130h]
  void *v88; // [rsp+158h] [rbp-128h]
  __int64 v89; // [rsp+160h] [rbp-120h] BYREF
  __int64 v90; // [rsp+168h] [rbp-118h]
  __int64 v91; // [rsp+170h] [rbp-110h]
  __int64 v92; // [rsp+178h] [rbp-108h] BYREF
  __int64 v93; // [rsp+180h] [rbp-100h]
  __int64 v94; // [rsp+188h] [rbp-F8h]
  __int64 v95; // [rsp+190h] [rbp-F0h]
  __int64 v96; // [rsp+198h] [rbp-E8h]
  __int64 v97; // [rsp+1A0h] [rbp-E0h]
  __int64 v98; // [rsp+1A8h] [rbp-D8h]
  __int64 v99; // [rsp+1B0h] [rbp-D0h]
  __int64 v100; // [rsp+1B8h] [rbp-C8h]
  __int64 v101; // [rsp+1E0h] [rbp-A0h]
  __int64 v102; // [rsp+218h] [rbp-68h] BYREF
  __int64 v103; // [rsp+220h] [rbp-60h]
  __int64 v104; // [rsp+228h] [rbp-58h]
  __int64 v105; // [rsp+230h] [rbp-50h]
  __int64 v106; // [rsp+238h] [rbp-48h] BYREF
  __int64 v107; // [rsp+240h] [rbp-40h]
  __int64 v108; // [rsp+248h] [rbp-38h]
  __int64 v109; // [rsp+250h] [rbp-30h]

  v70 = a1; /*0x1003ef727*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1003ef750*/
    &v67,
    *(const void **)(a2 + 584),
    *(_QWORD *)(a2 + 592),
    "codex_router_catalog.jsonmodels_cache.json",
    0x19u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1003ef771*/
    &v64,
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    "models_cache.json",
    0x11u);
  v2 = v69; /*0x1003ef77d*/
  v87 = v68; /*0x1003ef78b*/
  codexmate_lib::core::debug_bundle::read_catalog_file_shape::h6468682a88bc10f5(v57, v68, v69); /*0x1003ef795*/
  v71 = v65; /*0x1003ef7af*/
  codexmate_lib::core::debug_bundle::read_catalog_file_shape::h6468682a88bc10f5(v75, v65, v66); /*0x1003ef7b6*/
  v85[0] = 0; /*0x1003ef7bb*/
  v86 = 0; /*0x1003ef7c6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef7d1*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1003ef7e6*/
  if ( !v3 ) /*0x1003ef7ee*/
    goto LABEL_119; /*0x1003ef7ee*/
  qmemcpy(v3, "pathExists", 10); /*0x1003ef801*/
  v102 = 10; /*0x1003ef80a*/
  v103 = (__int64)v3; /*0x1003ef812*/
  v104 = 10; /*0x1003ef816*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v92, v87, v2); /*0x1003ef82f*/
  v4 = v92; /*0x1003ef834*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1003ef845*/
    v92,
    v93);
  LOBYTE(v92) = 1; /*0x1003ef84e*/
  BYTE1(v92) = v4 ^ 1; /*0x1003ef855*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ef872*/
    (__int64)&v106,
    v85,
    (__int64)&v102,
    &v92);
  if ( (_BYTE)v106 != 6 ) /*0x1003ef87b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003ef881*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef886*/
  v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1003ef89b*/
  if ( !v5 ) /*0x1003ef8a3*/
    goto LABEL_119; /*0x1003ef8a3*/
  *(_BYTE *)(v5 + 4) = 115; /*0x1003ef8ac*/
  *(_DWORD *)v5 = 1702132066; /*0x1003ef8b0*/
  v102 = 5; /*0x1003ef8b6*/
  v103 = v5; /*0x1003ef8be*/
  v104 = 5; /*0x1003ef8c2*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v92, v87, v2); /*0x1003ef8db*/
  if ( (_BYTE)v92 ) /*0x1003ef8e7*/
  {
    v6 = v93 & 3; /*0x1003ef8f2*/
    if ( (_DWORD)v6 == 1 ) /*0x1003ef8f8*/
    {
      v55 = *(_QWORD *)(v93 + 7); /*0x1003f07c3*/
      if ( *(_QWORD *)v55 ) /*0x1003f07c7*/
        (*(void (__fastcall **)(_QWORD))v55)(*(_QWORD *)(v93 - 1)); /*0x1003f07d2*/
      if ( *(_QWORD *)(v55 + 8) ) /*0x1003f07d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f07e4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f07f6*/
      v7 = 0; /*0x1003f07fb*/
    }
    else
    {
      v7 = 0; /*0x1003ef8fe*/
    }
  }
  else
  {
    v6 = v101; /*0x1003ef902*/
    v7 = 2; /*0x1003ef909*/
  }
  LOBYTE(v92) = v7; /*0x1003ef90b*/
  v93 = 0; /*0x1003ef911*/
  v94 = v6; /*0x1003ef91c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ef939*/
    (__int64)&v106,
    v85,
    (__int64)&v102,
    &v92);
  if ( (_BYTE)v106 != 6 ) /*0x1003ef942*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003ef948*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef94d*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1003ef962*/
  if ( !v8 ) /*0x1003ef96a*/
    goto LABEL_119; /*0x1003ef96a*/
  qmemcpy(v8, "routerCatalog", 13); /*0x1003ef98b*/
  v102 = 13; /*0x1003ef98e*/
  v103 = (__int64)v8; /*0x1003ef996*/
  v104 = 13; /*0x1003ef99a*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003ef9b0*/
    (__int64)&v92,
    (unsigned __int8 *)v57,
    v9);
  if ( (_BYTE)v92 == 6 ) /*0x1003ef9bc*/
  {
    v106 = v93; /*0x1003f0809*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f082b*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v106,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC68);
  }
  v109 = v95; /*0x1003ef9c9*/
  v108 = v94; /*0x1003ef9d4*/
  v107 = v93; /*0x1003ef9e6*/
  v106 = v92; /*0x1003ef9ea*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efa04*/
    (__int64)&v92,
    v85,
    (__int64)&v102,
    &v106);
  if ( (_BYTE)v92 != 6 ) /*0x1003efa10*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x1003efa19*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efa1e*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1003efa33*/
  if ( !v10 ) /*0x1003efa3b*/
    goto LABEL_119; /*0x1003efa3b*/
  qmemcpy(v10, "modelsCache", 11); /*0x1003efa4e*/
  v102 = 11; /*0x1003efa59*/
  v103 = (__int64)v10; /*0x1003efa61*/
  v104 = 11; /*0x1003efa65*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003efa7b*/
    (__int64)&v92,
    v75,
    v11);
  if ( (_BYTE)v92 == 6 ) /*0x1003efa87*/
  {
    v106 = v93; /*0x1003f083c*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f085e*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v106,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC68);
  }
  v109 = v95; /*0x1003efa94*/
  v108 = v94; /*0x1003efa9f*/
  v107 = v93; /*0x1003efab1*/
  v106 = v92; /*0x1003efab5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efacf*/
    (__int64)&v92,
    v85,
    (__int64)&v102,
    &v106);
  if ( (_BYTE)v92 != 6 ) /*0x1003efadb*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x1003efae4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efae9*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003efafe*/
  if ( !v12 ) /*0x1003efb06*/
LABEL_119:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0903*/
  v13 = v12; /*0x1003efb0c*/
  qmemcpy(v12, "fieldComparison", 15); /*0x1003efb28*/
  v56[0] = 15; /*0x1003efb2c*/
  v56[1] = v12; /*0x1003efb37*/
  v56[2] = 15; /*0x1003efb3e*/
  v14 = 0; /*0x1003efb5e*/
  v15 = "relayModelsstatus"; /*0x1003efb6a*/
  if ( !v63 ) /*0x1003efb71*/
    v15 = "allRouterModelsrelayModelsstatus"; /*0x1003efb71*/
  LOBYTE(v14) = v63 == 0; /*0x1003efb75*/
  v16 = 4 * v14 + 11; /*0x1003efb78*/
  v17 = &v61; /*0x1003efb80*/
  if ( !v63 ) /*0x1003efb87*/
    v17 = &v58; /*0x1003efb87*/
  if ( v79 && v60 | v63 ) /*0x1003efb95*/
  {
    alloc::collections::btree::set::BTreeSet$LT$T$C$A$GT$::difference::hf06b14a82a143b68(&v92, &v77, v17); /*0x1003efebb*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2dd54e77a6ab8d72( /*0x1003efece*/
      v83,
      &v92);
    __src = v15; /*0x1003efed3*/
    alloc::collections::btree::set::BTreeSet$LT$T$C$A$GT$::difference::hf06b14a82a143b68(&v92, v17, &v77); /*0x1003efee7*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2dd54e77a6ab8d72( /*0x1003efefa*/
      v73,
      &v92);
    v89 = 0; /*0x1003efeff*/
    v91 = 0; /*0x1003eff0a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eff15*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003eff2a*/
    if ( !v26 ) /*0x1003eff32*/
      goto LABEL_121; /*0x1003eff32*/
    v88 = v13; /*0x1003eff3b*/
    *(_WORD *)(v26 + 4) = 29557; /*0x1003eff42*/
    *(_DWORD *)v26 = 1952543859; /*0x1003eff48*/
    v102 = 6; /*0x1003eff4e*/
    v103 = v26; /*0x1003eff56*/
    v104 = 6; /*0x1003eff5a*/
    v27 = v84; /*0x1003eff62*/
    v28 = 2LL * (v84 == 0) + 8; /*0x1003eff71*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eff76*/
    v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1u); /*0x1003eff83*/
    if ( !v29 ) /*0x1003eff8b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0950*/
    v30 = (__int64)v29; /*0x1003eff91*/
    v31 = "mismatch[event][previousarchivedidentitytrailers"; /*0x1003eff9e*/
    if ( !v27 ) /*0x1003effa5*/
      v31 = "compatible"; /*0x1003effa5*/
    memcpy(v29, v31, v28); /*0x1003effaf*/
    LOBYTE(v92) = 3; /*0x1003effb4*/
    v93 = v28; /*0x1003effbb*/
    v94 = v30; /*0x1003effc2*/
    v95 = v28; /*0x1003effc9*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003effe6*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003efff6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003efffc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f0001*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003f0016*/
    if ( !v32 ) /*0x1003f001e*/
      goto LABEL_121; /*0x1003f001e*/
    *(_WORD *)(v32 + 4) = 25955; /*0x1003f0027*/
    *(_DWORD *)v32 = 1920298867; /*0x1003f002d*/
    v102 = 6; /*0x1003f0033*/
    v103 = v32; /*0x1003f003b*/
    v104 = 6; /*0x1003f003f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f0047*/
    v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x1003f0054*/
    if ( !v33 ) /*0x1003f005c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f095f*/
    v34 = (__int64)v33; /*0x1003f0062*/
    memcpy(v33, __src, v16); /*0x1003f0072*/
    LOBYTE(v92) = 3; /*0x1003f0077*/
    v93 = v16; /*0x1003f007e*/
    v94 = v34; /*0x1003f0085*/
    v95 = v16; /*0x1003f008c*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f00a9*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003f00b2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003f00b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f00bd*/
    v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x11u, 1u); /*0x1003f00d2*/
    if ( !v35 ) /*0x1003f00da*/
      goto LABEL_121; /*0x1003f00da*/
    qmemcpy(v35, "missingFromRouter", 17); /*0x1003f00fb*/
    v102 = 17; /*0x1003f0103*/
    v103 = (__int64)v35; /*0x1003f010b*/
    v104 = 17; /*0x1003f010f*/
    serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v92, (__int64)v83); /*0x1003f0125*/
    if ( (_BYTE)v92 == 6 ) /*0x1003f0131*/
    {
      v106 = v93; /*0x1003f089f*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f08c1*/
        (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        43,
        (__int64)&v106,
        (__int64)&off_10188DA08,
        (__int64)&off_10188CDC0);
    }
    v109 = v95; /*0x1003f013e*/
    v108 = v94; /*0x1003f0149*/
    v107 = v93; /*0x1003f015b*/
    v106 = v92; /*0x1003f015f*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f0179*/
      (__int64)&v92,
      &v89,
      (__int64)&v102,
      &v106);
    if ( (_BYTE)v92 != 6 ) /*0x1003f0185*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x1003f018e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f0193*/
    v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1003f01a8*/
    if ( !v36 ) /*0x1003f01b0*/
LABEL_121:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0921*/
    qmemcpy(v36, "extraInRouter", 13); /*0x1003f01d1*/
    v102 = 13; /*0x1003f01d4*/
    v103 = (__int64)v36; /*0x1003f01dc*/
    v104 = 13; /*0x1003f01e0*/
    serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v92, (__int64)v73); /*0x1003f01f6*/
    if ( (_BYTE)v92 == 6 ) /*0x1003f0202*/
    {
      v106 = v93; /*0x1003f08d2*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f08f4*/
        (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        43,
        (__int64)&v106,
        (__int64)&off_10188DA08,
        (__int64)&off_10188CDC0);
    }
    v109 = v95; /*0x1003f020f*/
    v108 = v94; /*0x1003f021a*/
    v107 = v93; /*0x1003f022c*/
    v106 = v92; /*0x1003f0230*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f024a*/
      (__int64)&v92,
      &v89,
      (__int64)&v102,
      &v106);
    if ( (_BYTE)v92 != 6 ) /*0x1003f0256*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x1003f025f*/
    v93 = v89; /*0x1003f0272*/
    v94 = v90; /*0x1003f0279*/
    v95 = v91; /*0x1003f0287*/
    LOBYTE(v92) = 5; /*0x1003f028e*/
    v37 = v74; /*0x1003f0295*/
    if ( v74 ) /*0x1003f029f*/
    {
      v38 = v73[1] + 8LL; /*0x1003f02a8*/
      do /*0x1003f02b7*/
      {
        if ( *(_QWORD *)(v38 - 8) ) /*0x1003f02b9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f02ca*/
        v38 += 24; /*0x1003f02b0*/
        --v37; /*0x1003f02b4*/
      }
      while ( v37 ); /*0x1003f02b7*/
    }
    if ( v73[0] ) /*0x1003f02db*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f02f1*/
    v39 = v84; /*0x1003f02f6*/
    if ( v84 ) /*0x1003f0300*/
    {
      v40 = v83[1] + 8LL; /*0x1003f0309*/
      do /*0x1003f0317*/
      {
        if ( *(_QWORD *)(v40 - 8) ) /*0x1003f0319*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f032a*/
        v40 += 24; /*0x1003f0310*/
        --v39; /*0x1003f0314*/
      }
      while ( v39 ); /*0x1003f0317*/
    }
    if ( v83[0] ) /*0x1003f033b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f0351*/
  }
  else
  {
    v89 = 0; /*0x1003efba2*/
    v91 = 0; /*0x1003efbad*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efbb8*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003efbcc*/
    if ( !v18 ) /*0x1003efbd4*/
      goto LABEL_120; /*0x1003efbd4*/
    *(_WORD *)(v18 + 4) = 29557; /*0x1003efbdd*/
    *(_DWORD *)v18 = 1952543859; /*0x1003efbe3*/
    v102 = 6; /*0x1003efbe9*/
    v103 = v18; /*0x1003efbf1*/
    v104 = 6; /*0x1003efbf5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efbfd*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1003efc0c*/
    if ( !v19 ) /*0x1003efc14*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0932*/
    qmemcpy(v19, "unavailable", 11); /*0x1003efc24*/
    LOBYTE(v92) = 3; /*0x1003efc2e*/
    v93 = 11; /*0x1003efc35*/
    v94 = (__int64)v19; /*0x1003efc40*/
    v95 = 11; /*0x1003efc47*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efc68*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003efc71*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003efc77*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efc7c*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003efc8b*/
    if ( !v20 ) /*0x1003efc93*/
      goto LABEL_120; /*0x1003efc93*/
    *(_WORD *)(v20 + 4) = 25955; /*0x1003efc9c*/
    *(_DWORD *)v20 = 1920298867; /*0x1003efca2*/
    v102 = 6; /*0x1003efca8*/
    v103 = v20; /*0x1003efcb0*/
    v104 = 6; /*0x1003efcb4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efcbc*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x1003efcc9*/
    if ( !v21 ) /*0x1003efcd1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0941*/
    v22 = (__int64)v21; /*0x1003efcd7*/
    memcpy(v21, v15, v16); /*0x1003efce3*/
    LOBYTE(v92) = 3; /*0x1003efce8*/
    v93 = v16; /*0x1003efcef*/
    v94 = v22; /*0x1003efcf6*/
    v95 = v16; /*0x1003efcfd*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efd1a*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003efd23*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003efd29*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efd2e*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x11u, 1u); /*0x1003efd42*/
    if ( !v23 ) /*0x1003efd4a*/
      goto LABEL_120; /*0x1003efd4a*/
    qmemcpy(v23, "missingFromRouter", 17); /*0x1003efd68*/
    v102 = 17; /*0x1003efd6f*/
    v103 = (__int64)v23; /*0x1003efd77*/
    v104 = 17; /*0x1003efd7b*/
    v93 = 0; /*0x1003efd83*/
    v94 = 8; /*0x1003efd8e*/
    v95 = 0; /*0x1003efd99*/
    LOBYTE(v92) = 4; /*0x1003efda4*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efdc1*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003efdca*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003efdd0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003efdd5*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1003efde9*/
    if ( !v24 ) /*0x1003efdf1*/
LABEL_120:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0912*/
    qmemcpy(v24, "extraInRouter", 13); /*0x1003efe0f*/
    v102 = 13; /*0x1003efe12*/
    v103 = (__int64)v24; /*0x1003efe1a*/
    v104 = 13; /*0x1003efe1e*/
    v93 = 0; /*0x1003efe26*/
    v94 = 8; /*0x1003efe31*/
    v95 = 0; /*0x1003efe3c*/
    LOBYTE(v92) = 4; /*0x1003efe47*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003efe64*/
      (__int64)&v106,
      &v89,
      (__int64)&v102,
      &v92);
    if ( (_BYTE)v106 != 6 ) /*0x1003efe6d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003efe73*/
    v93 = v89; /*0x1003efe86*/
    v94 = v90; /*0x1003efe8d*/
    v95 = v91; /*0x1003efe9b*/
    LOBYTE(v92) = 5; /*0x1003efea2*/
  }
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003f0368*/
    (__int64)&v106,
    (unsigned __int8 *)&v92,
    v25);
  if ( (_BYTE)v106 == 6 ) /*0x1003f0371*/
  {
    v102 = v107; /*0x1003f086c*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f088e*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v102,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC68);
  }
  v105 = v109; /*0x1003f037b*/
  v104 = v108; /*0x1003f0383*/
  v103 = v107; /*0x1003f038f*/
  v102 = v106; /*0x1003f0393*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f03ad*/
    (__int64)&v106,
    v85,
    (__int64)v56,
    &v102);
  if ( (_BYTE)v106 != 6 ) /*0x1003f03b6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003f03bc*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x1003f03c8*/
  v41 = v70; /*0x1003f03d4*/
  *(_QWORD *)(v70 + 24) = v86; /*0x1003f03db*/
  v42 = v85[0]; /*0x1003f03df*/
  *(_QWORD *)(v41 + 16) = v85[1]; /*0x1003f03ed*/
  *(_QWORD *)(v41 + 8) = v42; /*0x1003f03f1*/
  *(_BYTE *)v41 = 5; /*0x1003f03f5*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v75); /*0x1003f03ff*/
  if ( v77 ) /*0x1003f040e*/
  {
    v43 = v79; /*0x1003f0417*/
    v93 = 0; /*0x1003f041e*/
    v94 = v77; /*0x1003f0429*/
    v95 = v78; /*0x1003f0430*/
    v97 = 0; /*0x1003f0437*/
    v98 = v77; /*0x1003f0442*/
    v99 = v78; /*0x1003f0449*/
    v44 = 1; /*0x1003f0450*/
  }
  else
  {
    v44 = 0; /*0x1003f0457*/
    v43 = 0; /*0x1003f0459*/
  }
  v92 = v44; /*0x1003f045b*/
  v96 = v44; /*0x1003f0462*/
  v100 = v43; /*0x1003f0469*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v106, &v92); /*0x1003f047b*/
  for ( i = v106; v106; i = v106 ) /*0x1003f0487*/
  {
    if ( *(_QWORD *)(i + 24 * v108 + 8) ) /*0x1003f04a8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f04c0*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v106, &v92); /*0x1003f04cb*/
  }
  if ( v80 ) /*0x1003f04e3*/
  {
    v46 = v82; /*0x1003f04ec*/
    v93 = 0; /*0x1003f04f3*/
    v94 = v80; /*0x1003f04fe*/
    v95 = v81; /*0x1003f0505*/
    v97 = 0; /*0x1003f050c*/
    v98 = v80; /*0x1003f0517*/
    v99 = v81; /*0x1003f051e*/
    v47 = 1; /*0x1003f0525*/
  }
  else
  {
    v47 = 0; /*0x1003f052c*/
    v46 = 0; /*0x1003f052e*/
  }
  v92 = v47; /*0x1003f0530*/
  v96 = v47; /*0x1003f0537*/
  v100 = v46; /*0x1003f053e*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v106, &v92); /*0x1003f0550*/
  for ( j = v106; v106; j = v106 ) /*0x1003f055c*/
  {
    if ( *(_QWORD *)(j + 24 * v108 + 8) ) /*0x1003f0578*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f0590*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v106, &v92); /*0x1003f059b*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v57); /*0x1003f05b0*/
  if ( v58 ) /*0x1003f05bf*/
  {
    v49 = v60; /*0x1003f05c8*/
    v93 = 0; /*0x1003f05cf*/
    v94 = v58; /*0x1003f05da*/
    v95 = v59; /*0x1003f05e1*/
    v97 = 0; /*0x1003f05e8*/
    v98 = v58; /*0x1003f05f3*/
    v99 = v59; /*0x1003f05fa*/
    v50 = 1; /*0x1003f0601*/
  }
  else
  {
    v50 = 0; /*0x1003f0608*/
    v49 = 0; /*0x1003f060a*/
  }
  v92 = v50; /*0x1003f060c*/
  v96 = v50; /*0x1003f0613*/
  v100 = v49; /*0x1003f061a*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(v75, &v92); /*0x1003f062f*/
  for ( k = *(_QWORD *)v75; *(_QWORD *)v75; k = *(_QWORD *)v75 ) /*0x1003f063e*/
  {
    if ( *(_QWORD *)(k + 24 * v76 + 8) ) /*0x1003f065b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f0673*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(v75, &v92); /*0x1003f067e*/
  }
  if ( v61 ) /*0x1003f0699*/
  {
    v52 = v63; /*0x1003f06a2*/
    v93 = 0; /*0x1003f06a9*/
    v94 = v61; /*0x1003f06b4*/
    v95 = v62; /*0x1003f06bb*/
    v97 = 0; /*0x1003f06c2*/
    v98 = v61; /*0x1003f06cd*/
    v99 = v62; /*0x1003f06d4*/
    v53 = 1; /*0x1003f06db*/
  }
  else
  {
    v53 = 0; /*0x1003f06e2*/
    v52 = 0; /*0x1003f06e4*/
  }
  v92 = v53; /*0x1003f06e6*/
  v96 = v53; /*0x1003f06ed*/
  v100 = v52; /*0x1003f06f4*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(v75, &v92); /*0x1003f0709*/
  for ( result = *(_QWORD *)v75; *(_QWORD *)v75; result = *(_QWORD *)v75 ) /*0x1003f0718*/
  {
    if ( *(_QWORD *)(result + 24 * v76 + 8) ) /*0x1003f073b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f0753*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(v75, &v92); /*0x1003f075e*/
  }
  if ( v64 ) /*0x1003f0779*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f0787*/
  if ( v67 ) /*0x1003f0796*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f07a4*/
  return result; /*0x1003f07a9*/
}