// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x101392380 d=1
size_t *__fastcall _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
        size_t *a1,
        __int64 a2)
{
  const void *v2; // r15
  size_t v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12

  v2 = *(const void **)(a2 + 8); /*0x10139238e*/
  v3 = *(_QWORD *)(a2 + 16); /*0x101392392*/
  if ( v3 ) /*0x101392399*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10139239b*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x1013923a8*/
    if ( !v4 ) /*0x1013923b0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1013923ea*/
    v5 = v4; /*0x1013923b2*/
  }
  else
  {
    v5 = 1; /*0x1013923b7*/
  }
  memcpy((void *)v5, v2, v3); /*0x1013923c6*/
  *a1 = v3; /*0x1013923cb*/
  a1[1] = v5; /*0x1013923ce*/
  a1[2] = v3; /*0x1013923d2*/
  return a1; /*0x1013923d9*/
}