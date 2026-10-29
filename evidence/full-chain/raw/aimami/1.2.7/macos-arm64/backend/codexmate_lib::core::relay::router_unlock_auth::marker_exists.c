// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::router_unlock_auth::marker_exists::hf737fc7bc0bd02b0; addr: 0x10031b8a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::marker_exists::hf737fc7bc0bd02b0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  _BYTE v9[8]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D0h]
  __int64 v11; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-38h]
  __int64 v13; // [rsp+B0h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10031b8d3*/
    &v11,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_authrouter unlock m"
    "issing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unl"
    "ock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router "
    "unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] aut"
    "h.json is unreadable; preserving orphan marker + backup",
    30);
  v1 = v12; /*0x10031b8d8*/
  std::sys::fs::metadata::h32fa16d3052ea535(v9, v12, v13); /*0x10031b8ea*/
  v2 = v9[0]; /*0x10031b8ef*/
  if ( v9[0] && (v10 & 3) == 1 ) /*0x10031b90b*/
  {
    v5 = v10 - 1; /*0x10031b93c*/
    v6 = *(_QWORD *)(v10 - 1); /*0x10031b940*/
    v7 = *(_QWORD *)(v10 + 7); /*0x10031b944*/
    if ( *(_QWORD *)v7 ) /*0x10031b948*/
      (*(void (__fastcall **)(__int64))v7)(v6); /*0x10031b954*/
    v8 = *(_QWORD *)(v7 + 8); /*0x10031b956*/
    if ( v8 ) /*0x10031b95d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10031b966*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10031b978*/
    v3 = v11; /*0x10031b97d*/
    if ( v11 ) /*0x10031b984*/
      goto LABEL_4; /*0x10031b984*/
  }
  else
  {
    v3 = v11; /*0x10031b90d*/
    if ( v11 ) /*0x10031b914*/
LABEL_4:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v3, 1); /*0x10031b916*/
  }
  LOBYTE(v2) = v2 ^ 1; /*0x10031b923*/
  return v2; /*0x10031b92a*/
}
