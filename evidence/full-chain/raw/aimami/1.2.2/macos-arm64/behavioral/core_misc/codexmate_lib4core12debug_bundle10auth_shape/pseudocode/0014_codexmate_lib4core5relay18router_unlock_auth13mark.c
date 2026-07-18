// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x100557f90 d=1
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::marker_exists::hdbfa996e1ae88533(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // r13
  __int64 v4; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v5; // [rsp+10h] [rbp-D0h]
  size_t v6[8]; // [rsp+A0h] [rbp-40h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100557fc3*/
    v6,
    *(const void **)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_auth",
    0x1Eu);
  std::sys::fs::metadata::h32fa16d3052ea535(&v4, (const void *)v6[1], v6[2]); /*0x100557fda*/
  v1 = (unsigned __int8)v4; /*0x100557fdf*/
  if ( (_BYTE)v4 && (v5 & 3) == 1 ) /*0x100557ffb*/
  {
    v3 = *(_QWORD *)(v5 + 7); /*0x100558034*/
    if ( *(_QWORD *)v3 ) /*0x100558038*/
      (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(v5 - 1)); /*0x100558044*/
    if ( *(_QWORD *)(v3 + 8) ) /*0x100558046*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100558056*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100558068*/
    if ( v6[0] ) /*0x100558074*/
      goto LABEL_4; /*0x100558074*/
  }
  else if ( v6[0] ) /*0x100558004*/
  {
LABEL_4:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100558006*/
  }
  LOBYTE(v1) = v1 ^ 1; /*0x100558013*/
  return v1; /*0x10055801a*/
}