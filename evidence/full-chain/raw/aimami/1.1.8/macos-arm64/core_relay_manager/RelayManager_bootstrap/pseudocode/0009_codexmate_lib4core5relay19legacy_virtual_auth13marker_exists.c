// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x100690b80 depth=1
__int64 __fastcall codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hf9c94452b5c1b9f7(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3[19]; // [rsp+0h] [rbp-C0h] BYREF
  size_t v4[5]; // [rsp+98h] [rbp-28h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100690bad*/
    v4,
    *(const void **)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "virtual-auth-marker.json",
    0x18u);
  std::sys::fs::metadata::h32fa16d3052ea535(v3, (const void *)v4[1], v4[2]); /*0x100690bc4*/
  v1 = v3[0]; /*0x100690bc9*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100690bda*/
    v3[0],
    v3[1]);
  if ( v4[0] ) /*0x100690be6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100690bf0*/
  LOBYTE(v1) = v1 ^ 1; /*0x100690bf5*/
  return v1; /*0x100690bfc*/
}