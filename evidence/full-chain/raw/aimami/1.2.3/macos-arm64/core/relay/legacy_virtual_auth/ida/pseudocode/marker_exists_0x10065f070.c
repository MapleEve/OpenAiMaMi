// __ZN13codexmate_lib4core5relay19legacy_virtual_auth13marker_exists @ 0x10065f070 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(__int64 a1)
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

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10065f0a3*/
    &v11,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "virtual-auth-marker.json",
    24);
  v1 = v12; /*0x10065f0a8*/
  std::sys::fs::metadata::h32fa16d3052ea535(v9, v12, v13); /*0x10065f0ba*/
  v2 = v9[0]; /*0x10065f0bf*/
  if ( v9[0] && (v10 & 3) == 1 ) /*0x10065f0db*/
  {
    v5 = v10 - 1; /*0x10065f10c*/
    v6 = *(_QWORD *)(v10 - 1); /*0x10065f110*/
    v7 = *(_QWORD *)(v10 + 7); /*0x10065f114*/
    if ( *(_QWORD *)v7 ) /*0x10065f118*/
      (*(void (__fastcall **)(__int64))v7)(v6); /*0x10065f124*/
    v8 = *(_QWORD *)(v7 + 8); /*0x10065f126*/
    if ( v8 ) /*0x10065f12d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10065f136*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10065f148*/
    v3 = v11; /*0x10065f14d*/
    if ( v11 ) /*0x10065f154*/
      goto LABEL_4; /*0x10065f154*/
  }
  else
  {
    v3 = v11; /*0x10065f0dd*/
    if ( v11 ) /*0x10065f0e4*/
LABEL_4:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v3, 1); /*0x10065f0e6*/
  }
  LOBYTE(v2) = v2 ^ 1; /*0x10065f0f3*/
  return v2; /*0x10065f0fa*/
}