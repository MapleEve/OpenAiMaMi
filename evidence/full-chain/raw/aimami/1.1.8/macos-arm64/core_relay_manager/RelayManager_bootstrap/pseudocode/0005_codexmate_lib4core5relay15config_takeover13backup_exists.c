// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1004a7fb0 depth=1
__int64 __fastcall codexmate_lib::core::relay::config_takeover::backup_exists::h400c494af663f2d1(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3[19]; // [rsp+0h] [rbp-C0h] BYREF
  size_t v4[5]; // [rsp+98h] [rbp-28h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004a7fdd*/
    v4,
    *(const void **)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "router-takeover-backup.jsoncodexmate_lib::core::relay::config_takeover# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    0x1Bu);
  std::sys::fs::metadata::h32fa16d3052ea535(v3, (const void *)v4[1], v4[2]); /*0x1004a7ff4*/
  v1 = v3[0]; /*0x1004a7ff9*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1004a800a*/
    v3[0],
    v3[1]);
  if ( v4[0] ) /*0x1004a8016*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004a8020*/
  LOBYTE(v1) = v1 ^ 1; /*0x1004a8025*/
  return v1; /*0x1004a802c*/
}