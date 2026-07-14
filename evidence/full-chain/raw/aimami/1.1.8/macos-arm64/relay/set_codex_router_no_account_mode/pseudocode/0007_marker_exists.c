__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  _QWORD v4[19]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+98h] [rbp-28h] BYREF
  __int64 v6; // [rsp+A0h] [rbp-20h]
  __int64 v7; // [rsp+A8h] [rbp-18h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100689b7d*/
    &v5,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "router-unlock-auth-marker.jsonaimami_router_unlock_auth",
    30);
  v1 = v6; /*0x100689b82*/
  std::sys::fs::metadata::h32fa16d3052ea535(v4, v6, v7); /*0x100689b94*/
  v2 = v4[0]; /*0x100689b99*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100689baa*/
    v4[0],
    v4[1]);
  if ( v5 ) /*0x100689bb6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v5, 1); /*0x100689bc0*/
  LOBYTE(v2) = v2 ^ 1; /*0x100689bc5*/
  return v2; /*0x100689bcc*/
}
---REFS---
0x1010a9480 __ZN3std4path4Path5_join17hb1a495d4f06b13b8E
0x1012d11c4 _anon.5d4536734f60d7d1ae09e451c2f7649c.828
0x1010a1400 __ZN3std3sys2fs8metadata17h32fa16d3052ea535E
0x10069fd50 __ZN4core3ptr90drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$17h13fa4dfbca1c9605E_1
0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
