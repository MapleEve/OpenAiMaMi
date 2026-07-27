// __ZN13codexmate_lib8commands8deeplink11parse_inner28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100354d80 | 基线 same-set
void *__fastcall codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::he2fcaacf30d9118b(
        size_t *a1,
        __int64 *a2)
{
  void *v3; // rax
  __int64 v4; // rdx
  size_t v5; // r14
  __int64 v6; // r13
  void *result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  void *__src; // [rsp+0h] [rbp-30h]

  v3 = (void *)url::Url::host_str::h951633b861c322f2(a2); /*0x100354d97*/
  if ( !v3 ) /*0x100354d9f*/
  {
    result = (void *)0x8000000000000000LL; /*0x100354db9*/
    *a1 = 0x8000000000000000LL; /*0x100354dc3*/
    v8 = *a2; /*0x100354dc6*/
    if ( !*a2 ) /*0x100354dcc*/
      return result; /*0x100354dcc*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v8, 1); /*0x100354dcc*/
  }
  v5 = v4; /*0x100354da1*/
  if ( v4 < 0 ) /*0x100354da7*/
  {
    v6 = 0; /*0x100354da9*/
    goto LABEL_4; /*0x100354da9*/
  }
  if ( v4 ) /*0x100354ded*/
  {
    __src = v3; /*0x100354def*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x100354df3*/
    v6 = 1; /*0x100354df8*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100354e06*/
    if ( !v9 ) /*0x100354e0e*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100354dac*/
    v10 = v9; /*0x100354e10*/
    v3 = __src; /*0x100354e13*/
  }
  else
  {
    v10 = 1; /*0x100354e19*/
  }
  result = memcpy((void *)v10, v3, v5); /*0x100354e28*/
  *a1 = v5; /*0x100354e2d*/
  a1[1] = v10; /*0x100354e30*/
  a1[2] = v5; /*0x100354e34*/
  v8 = *a2; /*0x100354e38*/
  if ( *a2 ) /*0x100354e38*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v8, 1); /*0x100354dce*/
  return result; /*0x100354ddb*/
}