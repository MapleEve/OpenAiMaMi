// __ZN13codexmate_lib4core5relay12proxy_server21build_upstream_client @ 0x10025a240 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_client::h5f1660336de15931(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  _BYTE __src[704]; // [rsp+8h] [rbp-3E8h] BYREF
  __int64 v5; // [rsp+2C8h] [rbp-128h]
  int v6; // [rsp+2D0h] [rbp-120h]
  __int64 v7; // [rsp+2E8h] [rbp-108h]
  int v8; // [rsp+2F0h] [rbp-100h]
  __int64 v9; // [rsp+308h] [rbp-E8h]
  int v10; // [rsp+310h] [rbp-E0h]
  __int64 v11; // [rsp+358h] [rbp-98h]
  _QWORD v12[3]; // [rsp+3B0h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+3C8h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+3D8h] [rbp-18h] BYREF

  _$LT$reqwest..async_impl..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hc97e1db035699fe7(__src); /*0x10025a25b*/
  v9 = 300; /*0x10025a260*/
  v10 = 0; /*0x10025a26b*/
  v5 = 30; /*0x10025a275*/
  v6 = 0; /*0x10025a280*/
  v11 = 10; /*0x10025a28a*/
  v7 = 60; /*0x10025a295*/
  v8 = 0; /*0x10025a2a0*/
  if ( (reqwest::async_impl::client::ClientBuilder::build::h525c65897507bdcc(__src) & 1) != 0 ) /*0x10025a2b4*/
  {
    v14[0] = v1; /*0x10025a2b6*/
    v13[0] = v14; /*0x10025a2be*/
    v13[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x10025a2c9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &anon_39a6e93098609d65551b0fc4eadbbbd9_246, v13); /*0x10025a2dc*/
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v14); /*0x10025a2e5*/
    a1[2] = v12[2]; /*0x10025a2ee*/
    v2 = v12[0]; /*0x10025a2f2*/
    a1[1] = v12[1]; /*0x10025a2fa*/
  }
  else
  {
    a1[1] = v1; /*0x10025a300*/
    v2 = 0x8000000000000000LL; /*0x10025a304*/
  }
  *a1 = v2; /*0x10025a30e*/
  return a1; /*0x10025a314*/
}