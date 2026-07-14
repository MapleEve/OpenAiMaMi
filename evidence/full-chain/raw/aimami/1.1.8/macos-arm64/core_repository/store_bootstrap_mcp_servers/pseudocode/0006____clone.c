// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x1010db7c0 depth=1
size_t *__fastcall _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
        size_t *a1,
        __int64 a2)
{
  const void *v2; // r15
  size_t v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12

  v2 = *(const void **)(a2 + 8); /*0x1010db7ce*/
  v3 = *(_QWORD *)(a2 + 16); /*0x1010db7d2*/
  if ( v3 ) /*0x1010db7d9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010db7db*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x1010db7e8*/
    if ( !v4 ) /*0x1010db7f0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x1010db82a*/
    v5 = v4; /*0x1010db7f2*/
  }
  else
  {
    v5 = 1; /*0x1010db7f7*/
  }
  memcpy((void *)v5, v2, v3); /*0x1010db806*/
  *a1 = v3; /*0x1010db80b*/
  a1[1] = v5; /*0x1010db80e*/
  a1[2] = v3; /*0x1010db812*/
  return a1; /*0x1010db819*/
}