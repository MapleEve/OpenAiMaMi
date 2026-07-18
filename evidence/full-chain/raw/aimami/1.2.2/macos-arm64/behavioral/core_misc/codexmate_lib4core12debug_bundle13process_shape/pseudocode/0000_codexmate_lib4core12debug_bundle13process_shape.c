// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1003f0c80 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::process_shape::h31afd90aa934c13d(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-90h] BYREF
  __int64 v7; // [rsp+8h] [rbp-88h]
  __int64 v8; // [rsp+10h] [rbp-80h]
  _QWORD v9[2]; // [rsp+18h] [rbp-78h] BYREF
  __int64 v10; // [rsp+28h] [rbp-68h]
  _QWORD v11[4]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v12; // [rsp+50h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-28h]

  v9[0] = 0; /*0x1003f0c95*/
  v10 = 0; /*0x1003f0c9d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f0ca5*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1003f0cba*/
  if ( !v2 ) /*0x1003f0cc2*/
    goto LABEL_10; /*0x1003f0cc2*/
  qmemcpy(v2, "codexRunning", 12); /*0x1003f0cd5*/
  v6 = 12; /*0x1003f0ce0*/
  v7 = (__int64)v2; /*0x1003f0ceb*/
  v8 = 12; /*0x1003f0cf2*/
  LOBYTE(v12) = 1; /*0x1003f0cff*/
  BYTE1(v12) = codexmate_lib::platform::process::is_codex_app_running::ha30846081cef0959(12, 1, v3); /*0x1003f0d03*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f0d19*/
    (__int64)v11,
    v9,
    (__int64)&v6,
    &v12);
  if ( LOBYTE(v11[0]) != 6 ) /*0x1003f0d22*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v11); /*0x1003f0d28*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f0d2d*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003f0d42*/
  if ( !v4 ) /*0x1003f0d4a*/
LABEL_10:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f0e3c*/
  *(_QWORD *)v4 = 0x7265646C6F486264LL; /*0x1003f0d5d*/
  *(_BYTE *)(v4 + 8) = 115; /*0x1003f0d60*/
  v6 = 9; /*0x1003f0d65*/
  v7 = v4; /*0x1003f0d70*/
  v8 = 9; /*0x1003f0d77*/
  serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v12, a2 + 1120); /*0x1003f0d8d*/
  if ( (_BYTE)v12 == 6 ) /*0x1003f0d96*/
  {
    v11[0] = v13; /*0x1003f0e0b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f0e2d*/
      (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      43,
      (__int64)v11,
      (__int64)&off_10188DA08,
      (__int64)&off_10188CC80);
  }
  v11[3] = v15; /*0x1003f0d9c*/
  v11[2] = v14; /*0x1003f0da4*/
  v11[1] = v13; /*0x1003f0db0*/
  v11[0] = v12; /*0x1003f0db4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f0dcb*/
    (__int64)&v12,
    v9,
    (__int64)&v6,
    v11);
  if ( (_BYTE)v12 != 6 ) /*0x1003f0dd4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v12); /*0x1003f0dda*/
  *(_QWORD *)(a1 + 24) = v10; /*0x1003f0de3*/
  result = v9[0]; /*0x1003f0de7*/
  *(_QWORD *)(a1 + 16) = v9[1]; /*0x1003f0def*/
  *(_QWORD *)(a1 + 8) = result; /*0x1003f0df3*/
  *(_BYTE *)a1 = 5; /*0x1003f0df7*/
  return result; /*0x1003f0dfa*/
}