// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x1003ef0b0 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::thread_shape::h57259c68250da74e(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  char *v8; // r14
  __int64 v9; // r14
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  _BYTE v14[112]; // [rsp+0h] [rbp-1D0h] BYREF
  _BYTE v15[112]; // [rsp+70h] [rbp-160h] BYREF
  _QWORD v16[3]; // [rsp+E0h] [rbp-F0h] BYREF
  _QWORD v17[3]; // [rsp+F8h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+110h] [rbp-C0h]
  _QWORD v19[2]; // [rsp+118h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+128h] [rbp-A8h]
  __int64 v21; // [rsp+130h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+138h] [rbp-98h]
  __int64 v23; // [rsp+140h] [rbp-90h]
  __int64 v24; // [rsp+148h] [rbp-88h]
  __int64 v25; // [rsp+150h] [rbp-80h] BYREF
  char *v26; // [rsp+158h] [rbp-78h]
  __int64 v27; // [rsp+160h] [rbp-70h]
  __int64 v28; // [rsp+168h] [rbp-68h] BYREF
  __int64 v29; // [rsp+170h] [rbp-60h]
  __int64 v30; // [rsp+178h] [rbp-58h]
  __int64 v31; // [rsp+180h] [rbp-50h]
  __int64 v32; // [rsp+188h] [rbp-48h] BYREF
  __int64 v33; // [rsp+190h] [rbp-40h]
  __int64 v34; // [rsp+198h] [rbp-38h]
  __int64 v35; // [rsp+1A0h] [rbp-30h]

  v18 = a1; /*0x1003ef0ca*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::h34ebdac9998785f2( /*0x1003ef0e4*/
    v15,
    a2,
    "aimai1openaicodex_router_catalog.jsonmodels_cache.json",
    6);
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::h34ebdac9998785f2( /*0x1003ef0ff*/
    v14,
    a2,
    "openaicodex_router_catalog.jsonmodels_cache.json",
    6);
  v19[0] = 0; /*0x1003ef104*/
  v20 = 0; /*0x1003ef10f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef11a*/
  v4 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003ef12f*/
  if ( !v4 ) /*0x1003ef137*/
    goto LABEL_31; /*0x1003ef137*/
  *v4 = 0x7362446574617473LL; /*0x1003ef14a*/
  v17[0] = 8; /*0x1003ef14e*/
  v17[1] = v4; /*0x1003ef159*/
  v17[2] = 8; /*0x1003ef160*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h3e0dde50a913824a(&v28, a2); /*0x1003ef172*/
  v5 = v29; /*0x1003ef177*/
  v6 = v30; /*0x1003ef17b*/
  v16[0] = v29; /*0x1003ef188*/
  v16[1] = v29 + 24 * v30; /*0x1003ef18f*/
  v16[2] = a3; /*0x1003ef196*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8ec9e2a4581094f7( /*0x1003ef1a8*/
    &v25,
    v16);
  serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v21, (__int64)&v25); /*0x1003ef1b8*/
  if ( (_BYTE)v21 == 6 ) /*0x1003ef1c4*/
  {
    v32 = v22; /*0x1003ef4bd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ef4df*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v32,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC50);
  }
  v35 = v24; /*0x1003ef1d1*/
  v34 = v23; /*0x1003ef1dc*/
  v33 = v22; /*0x1003ef1ee*/
  v32 = v21; /*0x1003ef1f2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ef20f*/
    (__int64)&v21,
    v19,
    (__int64)v17,
    &v32);
  if ( (_BYTE)v21 != 6 ) /*0x1003ef21b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v21); /*0x1003ef224*/
  v7 = v27; /*0x1003ef229*/
  if ( v27 ) /*0x1003ef230*/
  {
    v8 = v26 + 8; /*0x1003ef236*/
    do /*0x1003ef247*/
    {
      if ( *((_QWORD *)v8 - 1) ) /*0x1003ef249*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef25a*/
      v8 += 24; /*0x1003ef240*/
      --v7; /*0x1003ef244*/
    }
    while ( v7 ); /*0x1003ef247*/
  }
  if ( v25 ) /*0x1003ef268*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef27b*/
  if ( v6 ) /*0x1003ef283*/
  {
    v9 = v5 + 8; /*0x1003ef285*/
    do /*0x1003ef297*/
    {
      if ( *(_QWORD *)(v9 - 8) ) /*0x1003ef299*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef2aa*/
      v9 += 24; /*0x1003ef290*/
      --v6; /*0x1003ef294*/
    }
    while ( v6 ); /*0x1003ef297*/
  }
  if ( v28 ) /*0x1003ef2b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef2ca*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef2cf*/
  v10 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003ef2e4*/
  if ( !v10 ) /*0x1003ef2ec*/
LABEL_31:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ef551*/
  qmemcpy(v10, "routerTarget", 12); /*0x1003ef2ff*/
  v25 = 12; /*0x1003ef30a*/
  v26 = v10; /*0x1003ef312*/
  v27 = 12; /*0x1003ef316*/
  codexmate_lib::core::debug_bundle::inspection_json::h0e16e74e0408904e(&v21, v15, a3); /*0x1003ef32f*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003ef33f*/
    &v32,
    &v21);
  if ( (_BYTE)v32 == 6 ) /*0x1003ef348*/
  {
    v28 = v33; /*0x1003ef4ed*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ef50f*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v28,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC50);
  }
  v31 = v35; /*0x1003ef352*/
  v30 = v34; /*0x1003ef35a*/
  v29 = v33; /*0x1003ef366*/
  v28 = v32; /*0x1003ef36a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ef381*/
    (__int64)&v32,
    v19,
    (__int64)&v25,
    &v28);
  if ( (_BYTE)v32 != 6 ) /*0x1003ef38a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v32); /*0x1003ef390*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v21); /*0x1003ef3a2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef3a7*/
  v11 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003ef3b6*/
  if ( !v11 ) /*0x1003ef3be*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003ef565*/
  qmemcpy(v11, "nativeTarget", 12); /*0x1003ef3d1*/
  v25 = 12; /*0x1003ef3dc*/
  v26 = v11; /*0x1003ef3e4*/
  v27 = 12; /*0x1003ef3e8*/
  codexmate_lib::core::debug_bundle::inspection_json::h0e16e74e0408904e(&v21, v14, a3); /*0x1003ef401*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1003ef411*/
    &v32,
    &v21);
  if ( (_BYTE)v32 == 6 ) /*0x1003ef41a*/
  {
    v28 = v33; /*0x1003ef51a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ef53c*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)&v28,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC50);
  }
  v31 = v35; /*0x1003ef424*/
  v30 = v34; /*0x1003ef42c*/
  v29 = v33; /*0x1003ef438*/
  v28 = v32; /*0x1003ef43c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003ef453*/
    (__int64)&v32,
    v19,
    (__int64)&v25,
    &v28);
  if ( (_BYTE)v32 != 6 ) /*0x1003ef45c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v32); /*0x1003ef462*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v21); /*0x1003ef474*/
  v12 = v18; /*0x1003ef480*/
  *(_QWORD *)(v18 + 24) = v20; /*0x1003ef487*/
  result = v19[0]; /*0x1003ef48b*/
  *(_QWORD *)(v12 + 16) = v19[1]; /*0x1003ef499*/
  *(_QWORD *)(v12 + 8) = result; /*0x1003ef49d*/
  *(_BYTE *)v12 = 5; /*0x1003ef4a1*/
  return result; /*0x1003ef4a4*/
}