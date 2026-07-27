// __ZN13codexmate_lib4core5relay12proxy_server35record_upstream_json_decode_failure @ 0x100267830 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::record_upstream_json_decode_failure::ha19861bb81971b08(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+8h] [rbp-118h] BYREF
  _QWORD v10[6]; // [rsp+20h] [rbp-100h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-D0h] BYREF
  char *v12; // [rsp+60h] [rbp-C0h] BYREF
  char *v13; // [rsp+68h] [rbp-B8h]
  __int64 v14; // [rsp+70h] [rbp-B0h]
  __int64 (__fastcall *v15)(); // [rsp+78h] [rbp-A8h]
  const char *v16; // [rsp+80h] [rbp-A0h]
  __int64 v17; // [rsp+88h] [rbp-98h]
  __int64 v18; // [rsp+90h] [rbp-90h]
  char *v19; // [rsp+98h] [rbp-88h]
  __int64 v20; // [rsp+A0h] [rbp-80h]
  __int64 v21; // [rsp+A8h] [rbp-78h]
  void *v22; // [rsp+B0h] [rbp-70h]
  _QWORD *v23; // [rsp+B8h] [rbp-68h]
  _QWORD *v24; // [rsp+C0h] [rbp-60h]
  __int64 v25; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-50h]
  __int64 v27; // [rsp+D8h] [rbp-48h]
  const void *v28; // [rsp+E0h] [rbp-40h] BYREF
  size_t v29; // [rsp+E8h] [rbp-38h]
  _BYTE v30[41]; // [rsp+F7h] [rbp-29h] BYREF

  v24 = a2; /*0x100267844*/
  v28 = a3; /*0x10026784b*/
  v29 = a4; /*0x10026784f*/
  v11[0] = a5; /*0x100267853*/
  v11[1] = a6; /*0x10026785a*/
  v12 = &a7; /*0x100267865*/
  v13 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf77e482456819156; /*0x100267873*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, &unk_1017B9C0B, &v12); /*0x10026788c*/
  v12 = (char *)&v28; /*0x100267895*/
  v13 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1002678a3*/
  v14 = (__int64)v11; /*0x1002678b1*/
  v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1002678b8*/
  v16 = &a7; /*0x1002678bf*/
  v17 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf77e482456819156; /*0x1002678c6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v9, &unk_1017B9C2B, &v12); /*0x1002678e2*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100267906*/
    "relaybuild error body failedproxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingconte"
    "nt-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
    5,
    "upstream_json_decode_failed",
    27,
    v9);
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100267919*/
  {
    v10[0] = v11; /*0x10026791f*/
    v10[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100267926*/
    v10[2] = &v28; /*0x100267931*/
    v10[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100267938*/
    v10[4] = &v25; /*0x100267943*/
    v10[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100267951*/
    v18 = 2; /*0x100267958*/
    v19 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x10026796a*/
    v20 = 40; /*0x100267971*/
    v22 = &unk_1017B9C4E; /*0x100267980*/
    v23 = v10; /*0x10026798b*/
    v12 = nullptr; /*0x10026798f*/
    v13 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x10026799a*/
    v14 = 40; /*0x1002679a1*/
    v15 = nullptr; /*0x1002679ac*/
    v16 = "src/core/relay/proxy_server.rs"; /*0x1002679be*/
    v17 = 30; /*0x1002679c5*/
    v21 = 0x48300000001LL; /*0x1002679da*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v30, &v12); /*0x1002679e9*/
  }
  codexmate_lib::core::relay::proxy_server::record_forward_failure::h39a4015ba5fcedd5(v24, v28, v29, v26, v27); /*0x100267a02*/
  a1[2] = v27; /*0x100267a0b*/
  v7 = v25; /*0x100267a0f*/
  a1[1] = v26; /*0x100267a17*/
  *a1 = v7; /*0x100267a1b*/
  return a1; /*0x100267a21*/
}