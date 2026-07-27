// __ZN13codexmate_lib4core5relay10translator28strip_leading_think_open_tag @ 0x10086c580
// 1.2.3 NEW-delta | codexmate_lib::core::relay::translator::strip_leading_think_open_tag | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
size_t *__fastcall codexmate_lib::core::relay::translator::strip_leading_think_open_tag::hf8b9a36c2dfc5d12(
        size_t *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _DWORD *v7; // r14
  char *v8; // rdi
  unsigned __int64 v9; // rsi
  const void *v10; // rax
  __int64 v11; // rdx
  size_t v12; // r14
  __int64 v13; // r12
  const void *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15

  core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a2, a3); /*0x10086c59d*/
  v6 = a3 - v5; /*0x10086c5a5*/
  if ( a3 != v5 ) /*0x10086c5a8*/
  {
    if ( v6 >= a3 ) /*0x10086c5ad*/
    {
      if ( !v5 ) /*0x10086c604*/
      {
LABEL_10:
        *a1 = 0x8000000000000000LL; /*0x10086c606*/
        return a1; /*0x10086c610*/
      }
    }
    else if ( *(char *)(a2 + v6) >= -64 ) /*0x10086c5b4*/
    {
      goto LABEL_4; /*0x10086c5b4*/
    }
    core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, a3 - v5, a3, &anon_10420c9971c21f44d230d15b39fb3fec_396); /*0x10086c683*/
  }
LABEL_4:
  if ( v5 < 7 ) /*0x10086c5be*/
    goto LABEL_10; /*0x10086c5be*/
  v7 = (_DWORD *)(v6 + a2); /*0x10086c5c0*/
  if ( *v7 ^ 0x6968743C | *(_DWORD *)((char *)v7 + 3) ^ 0x3E6B6E69 ) /*0x10086c5d4*/
    goto LABEL_10; /*0x10086c5d6*/
  v8 = (char *)v7 + 7; /*0x10086c5e0*/
  v9 = v5 - 7; /*0x10086c5e3*/
  v10 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85((char *)v7 + 7, v5 - 7); /*0x10086c5e6*/
  v12 = v11; /*0x10086c5eb*/
  if ( v11 < 0 ) /*0x10086c5f1*/
  {
    v13 = 0; /*0x10086c5f3*/
    goto LABEL_8; /*0x10086c5f3*/
  }
  if ( v11 ) /*0x10086c625*/
  {
    v15 = v10; /*0x10086c627*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9); /*0x10086c62a*/
    v13 = 1; /*0x10086c62f*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x10086c63d*/
    if ( !v16 ) /*0x10086c645*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x10086c5f6*/
    v17 = v16; /*0x10086c647*/
    v10 = v15; /*0x10086c64a*/
  }
  else
  {
    v17 = 1; /*0x10086c64f*/
  }
  memcpy((void *)v17, v10, v12); /*0x10086c65e*/
  *a1 = v12; /*0x10086c663*/
  a1[1] = v17; /*0x10086c666*/
  a1[2] = v12; /*0x10086c66a*/
  return a1; /*0x10086c61a*/
}