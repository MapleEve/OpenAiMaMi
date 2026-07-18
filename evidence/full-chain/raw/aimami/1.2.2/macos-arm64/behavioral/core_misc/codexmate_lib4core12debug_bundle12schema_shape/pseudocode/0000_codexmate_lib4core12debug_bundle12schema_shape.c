// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x1003eed50 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::schema_shape::hf78d15c56eb257ff(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed __int64 v6; // r14
  __int64 v7; // r13
  const void *v8; // rsi
  __int64 v9; // rax
  size_t v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 i; // r15
  __int64 result; // rax
  _QWORD v16[4]; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD v17[3]; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-B8h] BYREF
  const void *v19; // [rsp+58h] [rbp-98h]
  _QWORD v20[2]; // [rsp+60h] [rbp-90h] BYREF
  __int64 v21; // [rsp+70h] [rbp-80h]
  __int64 v22; // [rsp+78h] [rbp-78h] BYREF
  __int64 v23; // [rsp+80h] [rbp-70h]
  __int64 v24; // [rsp+88h] [rbp-68h]
  __int64 v25; // [rsp+90h] [rbp-60h]
  _QWORD v26[3]; // [rsp+98h] [rbp-58h] BYREF
  size_t v27[8]; // [rsp+B0h] [rbp-40h] BYREF

  if ( __OFSUB__(0, *(_QWORD *)(a2 + 720)) ) /*0x1003eed6f*/
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hf2d8723635f4afeb( /*0x1003eed86*/
      v27,
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 16));
    goto LABEL_11; /*0x1003eed8b*/
  }
  v6 = *(_QWORD *)(a2 + 736); /*0x1003eed8d*/
  if ( v6 < 0 ) /*0x1003eed98*/
  {
    v7 = 0; /*0x1003eed9a*/
    goto LABEL_5; /*0x1003eed9a*/
  }
  v8 = *(const void **)(a2 + 728); /*0x1003eeda8*/
  if ( v6 ) /*0x1003eedb0*/
  {
    v19 = *(const void **)(a2 + 728); /*0x1003eedb2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eedb9*/
    v7 = 1; /*0x1003eedbe*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1003eedcc*/
    if ( !v9 ) /*0x1003eedd4*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7); /*0x1003eed9d*/
    v10 = v9; /*0x1003eedd6*/
    v8 = v19; /*0x1003eedd9*/
  }
  else
  {
    v10 = 1; /*0x1003eede2*/
  }
  v27[0] = v6; /*0x1003eede7*/
  v27[1] = v10; /*0x1003eedeb*/
  memcpy((void *)v10, v8, v6); /*0x1003eedf2*/
  v27[2] = v6; /*0x1003eedf7*/
LABEL_11:
  v20[0] = 0; /*0x1003eedfb*/
  v21 = 0; /*0x1003eee06*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003eee0e*/
  v11 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1003eee1d*/
  if ( !v11 ) /*0x1003eee25*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003eefd9*/
  *v11 = 0x7362446574617473LL; /*0x1003eee38*/
  v17[0] = 8; /*0x1003eee3b*/
  v17[1] = v11; /*0x1003eee46*/
  v17[2] = 8; /*0x1003eee4d*/
  v12 = *(_QWORD *)(a2 + 752) + 24LL * *(_QWORD *)(a2 + 760); /*0x1003eee6c*/
  v16[0] = *(_QWORD *)(a2 + 752); /*0x1003eee70*/
  v16[1] = v12; /*0x1003eee77*/
  v16[2] = a3; /*0x1003eee7e*/
  v16[3] = v27; /*0x1003eee89*/
  ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h02e5cf671206005a)( /*0x1003eee9b*/
    v26,
    v16);
  serde_core::ser::Serializer::collect_seq::h9489e25615bc5a88(&v22, v26); /*0x1003eeea8*/
  if ( (_BYTE)v22 == 6 ) /*0x1003eeeb1*/
  {
    v18[0] = v23; /*0x1003eefa0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003eefc8*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)v18,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC38);
  }
  v18[3] = v25; /*0x1003eeebb*/
  v18[2] = v24; /*0x1003eeec6*/
  v18[1] = v23; /*0x1003eeed5*/
  v18[0] = v22; /*0x1003eeedc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003eeefc*/
    (__int64)&v22,
    v20,
    (__int64)v17,
    v18);
  if ( (_BYTE)v22 != 6 ) /*0x1003eef05*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v22); /*0x1003eef0b*/
  v13 = v26[1]; /*0x1003eef10*/
  for ( i = v26[2] + 1LL; i != 1; --i ) /*0x1003eef18*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v13); /*0x1003eef2d*/
    v13 += 32; /*0x1003eef32*/
  }
  if ( v26[0] ) /*0x1003eef3e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003eef4d*/
  *(_QWORD *)(a1 + 24) = v21; /*0x1003eef56*/
  result = v20[0]; /*0x1003eef5a*/
  *(_QWORD *)(a1 + 16) = v20[1]; /*0x1003eef68*/
  *(_QWORD *)(a1 + 8) = result; /*0x1003eef6c*/
  *(_BYTE *)a1 = 5; /*0x1003eef70*/
  if ( v27[0] ) /*0x1003eef7a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003eef85*/
  return result; /*0x1003eef8a*/
}