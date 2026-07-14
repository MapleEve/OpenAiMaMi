// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x1005a7d50 depth=0
size_t *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_client::hdc9eccadc123ce54(size_t *a1)
{
  size_t v1; // rdx
  size_t v2; // rax
  _BYTE __src[704]; // [rsp+8h] [rbp-3E8h] BYREF
  __int64 v5; // [rsp+2C8h] [rbp-128h]
  int v6; // [rsp+2D0h] [rbp-120h]
  __int64 v7; // [rsp+2E8h] [rbp-108h]
  int v8; // [rsp+2F0h] [rbp-100h]
  __int64 v9; // [rsp+308h] [rbp-E8h]
  int v10; // [rsp+310h] [rbp-E0h]
  __int64 v11; // [rsp+358h] [rbp-98h]
  size_t v12[3]; // [rsp+3B0h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+3C8h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+3D8h] [rbp-18h] BYREF

  _$LT$reqwest..async_impl..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::h7909c732407ddfb3(__src); /*0x1005a7d6b*/
  v9 = 300; /*0x1005a7d70*/
  v10 = 0; /*0x1005a7d7b*/
  v5 = 30; /*0x1005a7d85*/
  v6 = 0; /*0x1005a7d90*/
  v11 = 10; /*0x1005a7d9a*/
  v7 = 60; /*0x1005a7da5*/
  v8 = 0; /*0x1005a7db0*/
  if ( (reqwest::async_impl::client::ClientBuilder::build::he5731f4ec9ac2008(__src) & 1) != 0 ) /*0x1005a7dc4*/
  {
    v14[0] = v1; /*0x1005a7dc6*/
    v13[0] = v14; /*0x1005a7dce*/
    v13[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hed2a2ac1108b25fb; /*0x1005a7dd9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1005a7dec*/
      v12,
      anon_1f22c03b288e649fafb3d21192ed4cff_361,
      (unsigned __int64)v13);
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb(v14); /*0x1005a7df5*/
    a1[2] = v12[2]; /*0x1005a7dfe*/
    v2 = v12[0]; /*0x1005a7e02*/
    a1[1] = v12[1]; /*0x1005a7e0a*/
  }
  else
  {
    a1[1] = v1; /*0x1005a7e10*/
    v2 = 0x8000000000000000LL; /*0x1005a7e14*/
  }
  *a1 = v2; /*0x1005a7e1e*/
  return a1; /*0x1005a7e24*/
}