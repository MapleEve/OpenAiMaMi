// __ZN13codexmate_lib4core5relay12proxy_server28build_upstream_direct_client @ 0x10025fbc0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_direct_client::h2e1c168ed6d0eaf9(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  _BYTE __dst[936]; // [rsp+8h] [rbp-B28h] BYREF
  _QWORD v5[117]; // [rsp+3B0h] [rbp-780h] BYREF
  _QWORD __src[117]; // [rsp+758h] [rbp-3D8h] BYREF
  _QWORD v7[2]; // [rsp+B00h] [rbp-30h] BYREF
  _QWORD v8[4]; // [rsp+B10h] [rbp-20h] BYREF

  _$LT$reqwest..async_impl..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hc97e1db035699fe7(__src); /*0x10025fbdd*/
  __src[96] = 300; /*0x10025fbe2*/
  LODWORD(__src[97]) = 0; /*0x10025fbed*/
  __src[88] = 30; /*0x10025fbf7*/
  LODWORD(__src[89]) = 0; /*0x10025fc02*/
  __src[106] = 10; /*0x10025fc0c*/
  __src[92] = 60; /*0x10025fc17*/
  LODWORD(__src[93]) = 0; /*0x10025fc22*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10025fc3e*/
  reqwest::async_impl::client::ClientBuilder::no_proxy::h6496f2d7c95c7a0e(v5, __dst); /*0x10025fc50*/
  if ( (reqwest::async_impl::client::ClientBuilder::build::h525c65897507bdcc(v5) & 1) != 0 ) /*0x10025fc5f*/
  {
    v8[0] = v1; /*0x10025fc61*/
    v7[0] = v8; /*0x10025fc69*/
    v7[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x10025fc74*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &anon_39a6e93098609d65551b0fc4eadbbbd9_311, v7); /*0x10025fc8a*/
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v8); /*0x10025fc93*/
    a1[2] = v5[2]; /*0x10025fc9f*/
    v2 = v5[0]; /*0x10025fca3*/
    a1[1] = v5[1]; /*0x10025fcb1*/
  }
  else
  {
    a1[1] = v1; /*0x10025fcb7*/
    v2 = 0x8000000000000000LL; /*0x10025fcbb*/
  }
  *a1 = v2; /*0x10025fcc5*/
  return a1; /*0x10025fccb*/
}