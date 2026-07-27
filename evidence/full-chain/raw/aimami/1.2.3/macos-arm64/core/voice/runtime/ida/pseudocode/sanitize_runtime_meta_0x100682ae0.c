// __ZN13codexmate_lib4core5voice7runtime21sanitize_runtime_meta @ 0x100682ae0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::voice::runtime::sanitize_runtime_meta::he3e38aa8d37a8b6d(
        size_t *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  size_t *result; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  void *v6; // rax
  __int64 v7; // rdx
  size_t v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  void *__src; // [rsp+8h] [rbp-38h]

  v2 = *a2; /*0x100682afb*/
  result = (size_t *)-*a2; /*0x100682b01*/
  if ( __OFSUB__(result, 1) ) /*0x100682b01*/
  {
    *a1 = 0x8000000000000000LL; /*0x100682b06*/
    return result; /*0x100682b09*/
  }
  v4 = a2[1]; /*0x100682b12*/
  v5 = a2[2]; /*0x100682b16*/
  v6 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x100682b1d*/
  v8 = v7; /*0x100682b22*/
  if ( v7 < 0 ) /*0x100682b28*/
  {
    v9 = 0; /*0x100682b2a*/
    goto LABEL_5; /*0x100682b2a*/
  }
  if ( v7 ) /*0x100682b3d*/
  {
    __src = v6; /*0x100682b3f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x100682b43*/
    v9 = 1; /*0x100682b48*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100682b56*/
    if ( !v10 ) /*0x100682b5e*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100682b2d*/
    v11 = v10; /*0x100682b60*/
    v6 = __src; /*0x100682b63*/
  }
  else
  {
    v11 = 1; /*0x100682b73*/
  }
  memcpy((void *)v11, v6, v8); /*0x100682b82*/
  if ( v2 ) /*0x100682b8a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v2, 1); /*0x100682b97*/
  if ( v8 ) /*0x100682b9f*/
  {
    *a1 = v8; /*0x100682ba5*/
    a1[1] = v11; /*0x100682ba8*/
    a1[2] = v8; /*0x100682bac*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x100682bb6*/
  }
  return a1; /*0x100682bb9*/
}