// mac 1.1.8 parse_aimami_deeplink node va=0x1006946b0 depth=1
// codexmate_lib8commands8deeplink11parse_inner28_::b::b::d::d
void *__fastcall codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::h1280b7530cd915dc(
        size_t *a1,
        _QWORD *a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  size_t v4; // r14
  __int64 v5; // r13
  void *result; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  void *__src; // [rsp+0h] [rbp-30h]

  v2 = (void *)url::Url::host_str::h951633b861c322f2((__int64)a2); /*0x1006946c7*/
  if ( !v2 ) /*0x1006946cf*/
  {
    result = (void *)0x8000000000000000LL; /*0x1006946e9*/
    *a1 = 0x8000000000000000LL; /*0x1006946f3*/
    if ( !*a2 ) /*0x1006946fc*/
      return result; /*0x1006946fc*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006946fc*/
  }
  v4 = v3; /*0x1006946d1*/
  if ( v3 < 0 ) /*0x1006946d7*/
  {
    v5 = 0; /*0x1006946d9*/
    goto LABEL_4; /*0x1006946d9*/
  }
  if ( v3 ) /*0x10069471d*/
  {
    __src = v2; /*0x10069471f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100694723*/
    v5 = 1; /*0x100694728*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x100694736*/
    if ( !v7 ) /*0x10069473e*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1006946dc*/
    v8 = v7; /*0x100694740*/
    v2 = __src; /*0x100694743*/
  }
  else
  {
    v8 = 1; /*0x100694749*/
  }
  result = memcpy((void *)v8, v2, v4); /*0x100694758*/
  *a1 = v4; /*0x10069475d*/
  a1[1] = v8; /*0x100694760*/
  a1[2] = v4; /*0x100694764*/
  if ( *a2 ) /*0x100694768*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006946fe*/
  return result; /*0x10069470b*/
}