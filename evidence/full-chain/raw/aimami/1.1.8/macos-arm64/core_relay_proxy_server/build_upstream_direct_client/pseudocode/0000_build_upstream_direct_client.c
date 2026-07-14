// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x1005acb80 depth=0
size_t *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_direct_client::hcf91594dccfebfb0(
        size_t *a1)
{
  size_t v1; // rdx
  size_t v2; // rax
  _BYTE __dst[936]; // [rsp+8h] [rbp-B28h] BYREF
  size_t v5[117]; // [rsp+3B0h] [rbp-780h] BYREF
  _QWORD __src[117]; // [rsp+758h] [rbp-3D8h] BYREF
  _QWORD v7[2]; // [rsp+B00h] [rbp-30h] BYREF
  _QWORD v8[4]; // [rsp+B10h] [rbp-20h] BYREF

  _$LT$reqwest..async_impl..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::h7909c732407ddfb3(__src); /*0x1005acb9d*/
  __src[96] = 300; /*0x1005acba2*/
  LODWORD(__src[97]) = 0; /*0x1005acbad*/
  __src[88] = 30; /*0x1005acbb7*/
  LODWORD(__src[89]) = 0; /*0x1005acbc2*/
  __src[106] = 10; /*0x1005acbcc*/
  __src[92] = 60; /*0x1005acbd7*/
  LODWORD(__src[93]) = 0; /*0x1005acbe2*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1005acbfe*/
  reqwest::async_impl::client::ClientBuilder::no_proxy::h90b4f44fee852247(v5, __dst); /*0x1005acc10*/
  if ( (reqwest::async_impl::client::ClientBuilder::build::he5731f4ec9ac2008(v5) & 1) != 0 ) /*0x1005acc1f*/
  {
    v8[0] = v1; /*0x1005acc21*/
    v7[0] = v8; /*0x1005acc29*/
    v7[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hed2a2ac1108b25fb; /*0x1005acc34*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1005acc4a*/
      v5,
      anon_1f22c03b288e649fafb3d21192ed4cff_408,
      (unsigned __int64)v7);
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb((__int64)v8); /*0x1005acc53*/
    a1[2] = v5[2]; /*0x1005acc5f*/
    v2 = v5[0]; /*0x1005acc63*/
    a1[1] = v5[1]; /*0x1005acc71*/
  }
  else
  {
    a1[1] = v1; /*0x1005acc77*/
    v2 = 0x8000000000000000LL; /*0x1005acc7b*/
  }
  *a1 = v2; /*0x1005acc85*/
  return a1; /*0x1005acc8b*/
}