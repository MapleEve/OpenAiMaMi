// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x1003f20f0 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::global_state_shape::h86889f5a2fff4f5f(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r13
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // [rsp+8h] [rbp-198h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-190h]
  __int64 v12; // [rsp+18h] [rbp-188h]
  size_t v13; // [rsp+20h] [rbp-180h]
  _QWORD v14[3]; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+108h] [rbp-98h]
  __int64 v17; // [rsp+110h] [rbp-90h]
  __int64 v18; // [rsp+118h] [rbp-88h]
  _QWORD v19[2]; // [rsp+120h] [rbp-80h] BYREF
  __int64 v20; // [rsp+130h] [rbp-70h]
  __int64 v21; // [rsp+138h] [rbp-68h] BYREF
  __int64 v22; // [rsp+140h] [rbp-60h]
  size_t __n; // [rsp+148h] [rbp-58h]
  __int64 v24; // [rsp+158h] [rbp-48h] BYREF
  void *__src; // [rsp+160h] [rbp-40h]
  __int64 v26; // [rsp+168h] [rbp-38h]
  _BYTE v27[41]; // [rsp+177h] [rbp-29h] BYREF

  codexmate_lib::core::relay::codex_project_state::inspect::h6d022d84eb37f21e(&v10, a2); /*0x1003f2111*/
  codexmate_lib::core::relay::codex_project_state::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::serialize::ha647588cda007fef( /*0x1003f2120*/
    &v15,
    &v10);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h4d19a7f6745183f3(&v10); /*0x1003f212c*/
  if ( (_BYTE)v15 == 6 ) /*0x1003f2138*/
  {
    v24 = v16; /*0x1003f2145*/
    v19[0] = 0; /*0x1003f2149*/
    v20 = 0; /*0x1003f2151*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f2159*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1003f2168*/
    if ( !v2 ) /*0x1003f2170*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003f234e*/
    *(_BYTE *)(v2 + 4) = 114; /*0x1003f2179*/
    *(_DWORD *)v2 = 1869771365; /*0x1003f217d*/
    v14[0] = 5; /*0x1003f2183*/
    v14[1] = v2; /*0x1003f218e*/
    v14[2] = 5; /*0x1003f2195*/
    v21 = 0; /*0x1003f21a0*/
    v22 = 1; /*0x1003f21a8*/
    __n = 0; /*0x1003f21b0*/
    v12 = 1610612768; /*0x1003f21b8*/
    v10 = &v21; /*0x1003f21c7*/
    v11 = &anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003f21d5*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x1003f21e7*/
                            &v24,
                            &v10) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003f233d*/
        (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `"
                 "Result::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetac"
                 "cept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-al"
                 "low-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control"
                 "-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlc"
                 "ontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-m"
                 "odified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-p"
                 "ins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-we"
                 "bsocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentu"
                 "pgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        55,
        (__int64)v27,
        (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
        (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
    __src = (void *)v22; /*0x1003f21fc*/
    v3 = __n; /*0x1003f2200*/
    v26 = v21; /*0x1003f2207*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1003f220b*/
    {
      v4 = 0; /*0x1003f220d*/
      goto LABEL_6; /*0x1003f220d*/
    }
    if ( __n ) /*0x1003f2250*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003f2252*/
      v4 = 1; /*0x1003f2257*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x1003f2265*/
      if ( !v6 ) /*0x1003f226d*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x1003f2210*/
      v7 = v6; /*0x1003f226f*/
    }
    else
    {
      v7 = 1; /*0x1003f2274*/
    }
    memcpy((void *)v7, __src, v3); /*0x1003f2284*/
    LOBYTE(v10) = 3; /*0x1003f2289*/
    v11 = (__int64 (__fastcall **)())v3; /*0x1003f2290*/
    v12 = v7; /*0x1003f2297*/
    v13 = v3; /*0x1003f229e*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003f22bb*/
      (__int64)&v21,
      v19,
      (__int64)v14,
      &v10);
    v8 = v26; /*0x1003f22c4*/
    if ( (_BYTE)v21 != 6 ) /*0x1003f22c8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v21); /*0x1003f22ce*/
    if ( v8 ) /*0x1003f22d6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003f22e4*/
    *(_QWORD *)(a1 + 24) = v20; /*0x1003f22ed*/
    v9 = v19[0]; /*0x1003f22f1*/
    *(_QWORD *)(a1 + 16) = v19[1]; /*0x1003f22f9*/
    *(_QWORD *)(a1 + 8) = v9; /*0x1003f22fd*/
    *(_BYTE *)a1 = 5; /*0x1003f2301*/
    return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&v24); /*0x1003f2308*/
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v18; /*0x1003f2227*/
    *(_QWORD *)(a1 + 16) = v17; /*0x1003f2232*/
    result = v15; /*0x1003f2236*/
    *(_QWORD *)(a1 + 8) = v16; /*0x1003f2244*/
    *(_QWORD *)a1 = result; /*0x1003f2248*/
  }
  return result; /*0x1003f230d*/
}