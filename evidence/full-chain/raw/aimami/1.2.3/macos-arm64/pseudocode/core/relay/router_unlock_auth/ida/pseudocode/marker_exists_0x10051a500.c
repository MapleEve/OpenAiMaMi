// __ZN13codexmate_lib4core5relay18router_unlock_auth13marker_exists @ 0x10051a500 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  _QWORD v4[19]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+98h] [rbp-28h] BYREF
  __int64 v6; // [rsp+A0h] [rbp-20h]
  __int64 v7; // [rsp+A8h] [rbp-18h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10051a52d*/
    &v5,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_auth",
    30);
  v1 = v6; /*0x10051a532*/
  std::sys::fs::metadata::h32fa16d3052ea535(v4, v6, v7); /*0x10051a544*/
  v2 = v4[0]; /*0x10051a549*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10051a55a*/
    v4[0],
    v4[1]);
  if ( v5 ) /*0x10051a566*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v5, 1); /*0x10051a570*/
  LOBYTE(v2) = v2 ^ 1; /*0x10051a575*/
  return v2; /*0x10051a57c*/
}