// mac 1.2.2 NEW codexmate_lib4core12debug_bundle15inspection_json 0x1003f1760 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::inspection_json::h0e16e74e0408904e(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  void *v3; // rax
  signed __int64 v4; // r12
  __int64 v5; // rbx
  const void *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rbx
  bool v14; // al
  _DWORD *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  _DWORD *v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  _DWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD v34[3]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v35[3]; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  _QWORD v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  signed __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  signed __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  signed __int64 v47; // [rsp+90h] [rbp-70h]
  signed __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  signed __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  signed __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  _QWORD *v55; // [rsp+D0h] [rbp-30h]

  v41 = a3; /*0x1003f1774*/
  v55 = a2; /*0x1003f177b*/
  v36 = a1; /*0x1003f177f*/
  v42[0] = 0; /*0x1003f1786*/
  v43 = 0; /*0x1003f1791*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f179c*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xEu, 1u); /*0x1003f17b1*/
  if ( !v3 ) /*0x1003f17b9*/
    goto LABEL_60; /*0x1003f17b9*/
  qmemcpy(v3, "targetProvider", 14); /*0x1003f17da*/
  v52 = 14; /*0x1003f17de*/
  v53 = v3; /*0x1003f17e6*/
  v54 = 14; /*0x1003f17ea*/
  v4 = v55[2]; /*0x1003f17f6*/
  if ( v4 < 0 ) /*0x1003f17fd*/
  {
    v5 = 0; /*0x1003f17ff*/
    goto LABEL_4; /*0x1003f17ff*/
  }
  v6 = (const void *)v55[1]; /*0x1003f1811*/
  if ( v4 ) /*0x1003f1815*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1817*/
    v5 = 1; /*0x1003f181c*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x1003f1829*/
    if ( !v7 ) /*0x1003f1831*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5); /*0x1003f1801*/
    v8 = v7; /*0x1003f1833*/
  }
  else
  {
    v8 = 1; /*0x1003f1838*/
  }
  memcpy((void *)v8, v6, v4); /*0x1003f1847*/
  LOBYTE(v48) = 3; /*0x1003f184c*/
  v49 = v4; /*0x1003f1850*/
  v50 = v8; /*0x1003f1854*/
  v51 = v4; /*0x1003f1858*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1872*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f187e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1887*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f188c*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1003f18a1*/
  if ( !v9 ) /*0x1003f18a9*/
    goto LABEL_60; /*0x1003f18a9*/
  *(_BYTE *)(v9 + 4) = 110; /*0x1003f18af*/
  *(_DWORD *)v9 = 1634036835; /*0x1003f18b3*/
  v52 = 5; /*0x1003f18b9*/
  v53 = (_DWORD *)v9; /*0x1003f18c1*/
  v54 = 5; /*0x1003f18c5*/
  v10 = v55[10]; /*0x1003f18d1*/
  v11 = v55[11]; /*0x1003f18d5*/
  v12 = v55[12]; /*0x1003f18df*/
  v13 = v55[13]; /*0x1003f18e6*/
  if ( v13 | v12 | v11 | v10 ) /*0x1003f18ea*/
    v14 = 0; /*0x1003f18f9*/
  else
    v14 = v55[5] == 0; /*0x1003f18f4*/
  LOBYTE(v48) = 1; /*0x1003f18fb*/
  BYTE1(v48) = v14; /*0x1003f18ff*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1918*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1924*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f192d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1932*/
  v15 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003f1947*/
  if ( !v15 ) /*0x1003f194f*/
    goto LABEL_60; /*0x1003f194f*/
  *(_DWORD *)((char *)v15 + 3) = 1684369006; /*0x1003f1955*/
  *v15 = 1851876211; /*0x1003f195c*/
  v52 = 7; /*0x1003f1962*/
  v53 = v15; /*0x1003f196a*/
  v54 = 7; /*0x1003f196e*/
  v16 = v55[9]; /*0x1003f197a*/
  LOBYTE(v48) = 2; /*0x1003f197e*/
  v49 = 0; /*0x1003f1982*/
  v50 = v16; /*0x1003f198a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f19a4*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f19b0*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f19b9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f19be*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1003f19d3*/
  if ( !v17 ) /*0x1003f19db*/
    goto LABEL_60; /*0x1003f19db*/
  qmemcpy(v17, "issueCount", 10); /*0x1003f19eb*/
  v52 = 10; /*0x1003f19f4*/
  v53 = v17; /*0x1003f19fc*/
  v54 = 10; /*0x1003f1a00*/
  v37 = v55[5]; /*0x1003f1a1a*/
  LOBYTE(v48) = 2; /*0x1003f1a24*/
  v49 = 0; /*0x1003f1a28*/
  v50 = v37 + v10 + v11 + v12 + v13; /*0x1003f1a30*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1a4a*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1a56*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1a5f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1a64*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003f1a79*/
  if ( !v18 ) /*0x1003f1a81*/
    goto LABEL_60; /*0x1003f1a81*/
  qmemcpy(v18, "dbMismatched", 12); /*0x1003f1a91*/
  v52 = 12; /*0x1003f1a9b*/
  v53 = v18; /*0x1003f1aa3*/
  v54 = 12; /*0x1003f1aa7*/
  LOBYTE(v48) = 2; /*0x1003f1aaf*/
  v49 = 0; /*0x1003f1ab3*/
  v50 = v10; /*0x1003f1abb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1ad5*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1ae1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1aea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1aef*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x11u, 1u); /*0x1003f1b04*/
  if ( !v19 ) /*0x1003f1b0c*/
    goto LABEL_60; /*0x1003f1b0c*/
  qmemcpy(v19, "rolloutMismatched", 17); /*0x1003f1b2a*/
  v52 = 17; /*0x1003f1b31*/
  v53 = v19; /*0x1003f1b39*/
  v54 = 17; /*0x1003f1b3d*/
  LOBYTE(v48) = 2; /*0x1003f1b45*/
  v49 = 0; /*0x1003f1b49*/
  v50 = v11; /*0x1003f1b51*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1b6b*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1b77*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1b80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1b85*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1003f1b9a*/
  if ( !v20 ) /*0x1003f1ba2*/
    goto LABEL_60; /*0x1003f1ba2*/
  qmemcpy(v20, "missingRollouts", 15); /*0x1003f1bc0*/
  v52 = 15; /*0x1003f1bc3*/
  v53 = v20; /*0x1003f1bcb*/
  v54 = 15; /*0x1003f1bcf*/
  LOBYTE(v48) = 2; /*0x1003f1bd7*/
  v49 = 0; /*0x1003f1bdb*/
  v50 = v12; /*0x1003f1be3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1bfd*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1c09*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1c12*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1c17*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003f1c2c*/
  if ( !v21 ) /*0x1003f1c34*/
    goto LABEL_60; /*0x1003f1c34*/
  qmemcpy(v21, "unreadableRollouts", 18); /*0x1003f1c52*/
  v52 = 18; /*0x1003f1c5b*/
  v53 = v21; /*0x1003f1c63*/
  v54 = 18; /*0x1003f1c67*/
  LOBYTE(v48) = 2; /*0x1003f1c6f*/
  v49 = 0; /*0x1003f1c73*/
  v50 = v13; /*0x1003f1c7b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1c95*/
    (__int64)&v44,
    v42,
    (__int64)&v52,
    &v48);
  if ( (_BYTE)v44 != 6 ) /*0x1003f1ca1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v44); /*0x1003f1caa*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1caf*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1003f1cc4*/
  if ( !v22 ) /*0x1003f1ccc*/
    goto LABEL_60; /*0x1003f1ccc*/
  qmemcpy(v22, "readErrors", 10); /*0x1003f1cdf*/
  v38 = 10; /*0x1003f1cea*/
  v39 = v22; /*0x1003f1cf5*/
  v40 = 10; /*0x1003f1cfc*/
  v23 = v55[4] + 24 * v37; /*0x1003f1d1a*/
  v35[0] = v55[4]; /*0x1003f1d1e*/
  v35[1] = v23; /*0x1003f1d25*/
  v35[2] = v41; /*0x1003f1d33*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9e9d4d40bdced7f8( /*0x1003f1d45*/
    &v52,
    v35);
  serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v48, (__int64)&v52); /*0x1003f1d52*/
  if ( (_BYTE)v48 == 6 ) /*0x1003f1d5b*/
  {
    v44 = v49; /*0x1003f1fa9*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f1fd1*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v44,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC98);
  }
  v47 = v51; /*0x1003f1d65*/
  v46 = v50; /*0x1003f1d6d*/
  v45 = v49; /*0x1003f1d79*/
  v44 = v48; /*0x1003f1d7d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1d9d*/
    (__int64)&v48,
    v42,
    (__int64)&v38,
    &v44);
  if ( (_BYTE)v48 != 6 ) /*0x1003f1da6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v48); /*0x1003f1dac*/
  v24 = v54; /*0x1003f1db1*/
  if ( v54 ) /*0x1003f1db8*/
  {
    v25 = v53 + 2; /*0x1003f1dbe*/
    do /*0x1003f1dd7*/
    {
      if ( *((_QWORD *)v25 - 1) ) /*0x1003f1dd9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f1dea*/
      v25 += 6; /*0x1003f1dd0*/
      --v24; /*0x1003f1dd4*/
    }
    while ( v24 ); /*0x1003f1dd7*/
  }
  if ( v52 ) /*0x1003f1df8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f1e0b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f1e10*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003f1e25*/
  if ( !v26 ) /*0x1003f1e2d*/
LABEL_60:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f2013*/
  *v26 = 0x73656C706D617865LL; /*0x1003f1e40*/
  v38 = 8; /*0x1003f1e44*/
  v39 = v26; /*0x1003f1e4f*/
  v40 = 8; /*0x1003f1e56*/
  v27 = v55; /*0x1003f1e61*/
  v28 = v55[7] + 24LL * v55[8]; /*0x1003f1e71*/
  v34[0] = v55[7]; /*0x1003f1e75*/
  v34[1] = v28; /*0x1003f1e7c*/
  v34[2] = v41; /*0x1003f1e8a*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9e9d4d40bdced7f8( /*0x1003f1e9c*/
    &v52,
    v34);
  serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v48, (__int64)&v52); /*0x1003f1ea9*/
  if ( (_BYTE)v48 == 6 ) /*0x1003f1eb2*/
  {
    v44 = v49; /*0x1003f1fdc*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f2004*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v44,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC98);
  }
  v47 = v51; /*0x1003f1ebc*/
  v46 = v50; /*0x1003f1ec4*/
  v45 = v49; /*0x1003f1ed0*/
  v44 = v48; /*0x1003f1ed4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f1ef4*/
    (__int64)&v48,
    v42,
    (__int64)&v38,
    &v44);
  if ( (_BYTE)v48 != 6 ) /*0x1003f1efd*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v48); /*0x1003f1f03*/
  v29 = v54; /*0x1003f1f08*/
  if ( v54 ) /*0x1003f1f0f*/
  {
    v30 = v53 + 2; /*0x1003f1f15*/
    do /*0x1003f1f27*/
    {
      if ( *((_QWORD *)v30 - 1) ) /*0x1003f1f29*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f1f3a*/
      v30 += 6; /*0x1003f1f20*/
      --v29; /*0x1003f1f24*/
    }
    while ( v29 ); /*0x1003f1f27*/
  }
  if ( v52 ) /*0x1003f1f48*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f1f5b*/
  v31 = v36; /*0x1003f1f67*/
  *(_QWORD *)(v36 + 24) = v43; /*0x1003f1f6e*/
  v32 = v42[0]; /*0x1003f1f72*/
  *(_QWORD *)(v31 + 16) = v42[1]; /*0x1003f1f80*/
  *(_QWORD *)(v31 + 8) = v32; /*0x1003f1f84*/
  *(_BYTE *)v31 = 5; /*0x1003f1f88*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h270b5b0b5d39be72(v27); /*0x1003f1f93*/
}