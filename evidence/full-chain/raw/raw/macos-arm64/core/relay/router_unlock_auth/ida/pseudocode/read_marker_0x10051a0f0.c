// __ZN13codexmate_lib4core5relay18router_unlock_auth11read_marker @ 0x10051a0f0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_unlock_auth::read_marker::h8487a1125204f37a(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  const char *v5; // r14
  const char *v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  void (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  double result; // xmm0_8
  __int64 v16; // [rsp+0h] [rbp-100h] BYREF
  const char *v17; // [rsp+8h] [rbp-F8h]
  char *v18; // [rsp+10h] [rbp-F0h]
  __int64 v19; // [rsp+18h] [rbp-E8h]
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+28h] [rbp-D8h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  const char *v27; // [rsp+58h] [rbp-A8h] BYREF
  char *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  const char *v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  char *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  void *v37; // [rsp+A8h] [rbp-58h]
  const char ***v38; // [rsp+B0h] [rbp-50h]
  const char **v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall *v40)(_QWORD, _QWORD); // [rsp+C0h] [rbp-40h]
  const char *v41; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v42[41]; // [rsp+D7h] [rbp-29h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10051a11b*/
    &v24,
    a2,
    a3,
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_auth",
    30);
  v3 = v25; /*0x10051a120*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v16, v25, v26); /*0x10051a138*/
  v4 = v16; /*0x10051a147*/
  v5 = v17; /*0x10051a14e*/
  if ( !__OFSUB__(-v16, 1) ) /*0x10051a15b*/
  {
    v27 = v17; /*0x10051a265*/
    v28 = v18; /*0x10051a26c*/
    v29 = 0; /*0x10051a273*/
    v30 = 0; /*0x10051a27e*/
    v31 = v17; /*0x10051a289*/
    v32 = (__int64)v18; /*0x10051a290*/
    serde_json::de::from_trait::hfe8ef40ae5d3b2f7(&v16, &v27); /*0x10051a2a2*/
    if ( v16 == 0x8000000000000000LL ) /*0x10051a2ae*/
    {
      v41 = v17; /*0x10051a2bb*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10051a2cd*/
      {
        v39 = &v41; /*0x10051a2d7*/
        v40 = (__int64 (__fastcall *)(_QWORD, _QWORD))_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10051a2e2*/
        v33 = 2; /*0x10051a2e6*/
        v34 = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051a2f5*/
        v35 = 46; /*0x10051a2f9*/
        v37 = &unk_1017C11BD; /*0x10051a308*/
        v38 = &v39; /*0x10051a310*/
        v27 = nullptr; /*0x10051a314*/
        v28 = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051a31f*/
        v29 = 46; /*0x10051a326*/
        v30 = 0; /*0x10051a331*/
        v31 = "src/core/relay/router_unlock_auth.rs"; /*0x10051a343*/
        v32 = 36; /*0x10051a34a*/
        v36 = 0x27900000001LL; /*0x10051a35c*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v42, &v27); /*0x10051a36b*/
      }
      *a1 = 0x8000000000000000LL; /*0x10051a370*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v41); /*0x10051a377*/
      if ( !v4 ) /*0x10051a37f*/
        goto LABEL_22; /*0x10051a37f*/
    }
    else
    {
      a1[7] = v23; /*0x10051a38d*/
      a1[6] = v22; /*0x10051a398*/
      a1[5] = v21; /*0x10051a3a3*/
      a1[4] = v20; /*0x10051a3ae*/
      a1[3] = v19; /*0x10051a3b9*/
      a1[2] = (__int64)v18; /*0x10051a3c4*/
      v10 = v16; /*0x10051a3c8*/
      a1[1] = (__int64)v17; /*0x10051a3d6*/
      *a1 = v10; /*0x10051a3da*/
      if ( !v4 ) /*0x10051a3e0*/
        goto LABEL_22; /*0x10051a3e0*/
    }
    v11 = 1; /*0x10051a3e2*/
    v12 = v5; /*0x10051a3e7*/
    v13 = v4; /*0x10051a3ea*/
LABEL_21:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v13, v11); /*0x10051a438*/
    goto LABEL_22; /*0x10051a438*/
  }
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v17) ) /*0x10051a16b*/
  {
    *a1 = 0x8000000000000000LL; /*0x10051a3ef*/
    if ( ((unsigned __int8)v5 & 3) != 1 ) /*0x10051a3fb*/
      goto LABEL_22; /*0x10051a3fb*/
    v6 = v5 - 1; /*0x10051a3fd*/
    v7 = *(_QWORD *)(v5 - 1); /*0x10051a401*/
    v8 = *(_QWORD *)(v5 + 7); /*0x10051a405*/
    v9 = *(void (__fastcall **)(__int64))v8; /*0x10051a409*/
    if ( !*(_QWORD *)v8 ) /*0x10051a40f*/
      goto LABEL_18; /*0x10051a40f*/
    goto LABEL_17; /*0x10051a40f*/
  }
  v41 = v5; /*0x10051a171*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10051a183*/
  {
    v39 = &v41; /*0x10051a18d*/
    v40 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10051a198*/
    v33 = 2; /*0x10051a19c*/
    v34 = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051a1ab*/
    v35 = 46; /*0x10051a1af*/
    v37 = &unk_1017C1217; /*0x10051a1be*/
    v38 = &v39; /*0x10051a1c6*/
    v27 = nullptr; /*0x10051a1ca*/
    v28 = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051a1d5*/
    v29 = 46; /*0x10051a1dc*/
    v30 = 0; /*0x10051a1e7*/
    v31 = "src/core/relay/router_unlock_auth.rs"; /*0x10051a1f9*/
    v32 = 36; /*0x10051a200*/
    v36 = 0x27200000001LL; /*0x10051a212*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v42, &v27); /*0x10051a221*/
    v5 = v41; /*0x10051a226*/
  }
  *a1 = 0x8000000000000000LL; /*0x10051a22a*/
  if ( ((unsigned __int8)v5 & 3) == 1 ) /*0x10051a236*/
  {
    v6 = v5 - 1; /*0x10051a23c*/
    v7 = *(_QWORD *)(v5 - 1); /*0x10051a240*/
    v8 = *(_QWORD *)(v5 + 7); /*0x10051a244*/
    v9 = *(void (__fastcall **)(__int64))v8; /*0x10051a248*/
    if ( !*(_QWORD *)v8 ) /*0x10051a24e*/
    {
LABEL_18:
      v14 = *(_QWORD *)(v8 + 8); /*0x10051a416*/
      if ( v14 ) /*0x10051a41d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v14, *(_QWORD *)(v8 + 16)); /*0x10051a426*/
      v13 = 24; /*0x10051a42b*/
      v11 = 8; /*0x10051a430*/
      v12 = v6; /*0x10051a435*/
      goto LABEL_21; /*0x10051a435*/
    }
LABEL_17:
    v9(v7); /*0x10051a411*/
    goto LABEL_18; /*0x10051a414*/
  }
LABEL_22:
  if ( v24 ) /*0x10051a447*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v24, 1); /*0x10051a451*/
  return result; /*0x10051a456*/
}