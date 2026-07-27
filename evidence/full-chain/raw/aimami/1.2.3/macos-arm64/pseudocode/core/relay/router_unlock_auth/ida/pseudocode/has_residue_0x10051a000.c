// __ZN13codexmate_lib4core5relay18router_unlock_auth11has_residue @ 0x10051a000 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r15
  __int64 v3; // r12
  _QWORD v5[19]; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+98h] [rbp-38h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-30h]
  __int64 v8; // [rsp+A8h] [rbp-28h]

  LOBYTE(v1) = 1; /*0x10051a01a*/
  if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(a1) ) /*0x10051a015*/
  {
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x10051a043*/
      &v6,
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 592),
      &anon_92869709a5e99ce1936aa4e326b6c562_830,
      30);
    v2 = v7; /*0x10051a048*/
    std::sys::fs::metadata::h32fa16d3052ea535(v5, v7, v8); /*0x10051a05a*/
    v3 = v5[0]; /*0x10051a05f*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10051a070*/
      v5[0],
      v5[1]);
    if ( v3 ) /*0x10051a078*/
    {
      if ( v6 ) /*0x10051a081*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v6, 1); /*0x10051a08b*/
      LOBYTE(v1) = (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a1) == 1; /*0x10051a09a*/
    }
    else if ( v6 ) /*0x10051a0a6*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v6, 1); /*0x10051a0b0*/
    }
  }
  return v1; /*0x10051a0b7*/
}