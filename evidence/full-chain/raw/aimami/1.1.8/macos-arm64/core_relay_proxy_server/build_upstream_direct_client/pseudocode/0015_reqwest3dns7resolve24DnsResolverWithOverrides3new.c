// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b7d000 depth=2
_QWORD *__fastcall reqwest::dns::resolve::DnsResolverWithOverrides::new::hb4b617c0a0a96c68(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h]

  v7 = *a4; /*0x100b7d035*/
  v8 = a4[1]; /*0x100b7d039*/
  v9 = a4[2]; /*0x100b7d041*/
  v10 = a4[3]; /*0x100b7d049*/
  v11 = a4[4]; /*0x100b7d051*/
  v12 = a4[5]; /*0x100b7d059*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b7d05d*/
  v5 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x100b7d06c*/
  if ( !v5 ) /*0x100b7d074*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x100b7d0d8*/
  v5[7] = v12; /*0x100b7d07a*/
  v5[6] = v11; /*0x100b7d082*/
  v5[5] = v10; /*0x100b7d08a*/
  v5[4] = v9; /*0x100b7d092*/
  v5[3] = v8; /*0x100b7d09a*/
  v5[2] = v7; /*0x100b7d0a2*/
  v5[1] = 1; /*0x100b7d0ae*/
  *v5 = 1; /*0x100b7d0b2*/
  *a1 = a2; /*0x100b7d0b5*/
  a1[1] = a3; /*0x100b7d0b8*/
  a1[2] = v5; /*0x100b7d0bc*/
  return a1; /*0x100b7d0c3*/
}