// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x101392860 d=2
size_t *__fastcall _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::habaeb6534dae2c95(
        size_t *a1,
        size_t *a2)
{
  const void *v2; // r15
  size_t v3; // r14
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // rax

  if ( __OFSUB__(0, *a2) ) /*0x101392870*/
  {
    v2 = (const void *)a2[1]; /*0x101392875*/
    v3 = a2[2]; /*0x101392879*/
    if ( v3 ) /*0x101392880*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101392882*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x10139288f*/
      if ( !v4 ) /*0x101392897*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1013928e9*/
      v5 = v4; /*0x101392899*/
    }
    else
    {
      v5 = 1; /*0x1013928b6*/
    }
    memcpy((void *)v5, v2, v3); /*0x1013928c5*/
    *a1 = v3; /*0x1013928ca*/
    a1[1] = v5; /*0x1013928cd*/
    a1[2] = v3; /*0x1013928d1*/
  }
  else
  {
    a1[2] = a2[2]; /*0x1013928a2*/
    v6 = *a2; /*0x1013928a6*/
    a1[1] = a2[1]; /*0x1013928ad*/
    *a1 = v6; /*0x1013928b1*/
  }
  return a1; /*0x1013928d8*/
}