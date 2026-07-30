// __ZN13codexmate_lib4core5relay10translator28strip_leading_think_open_tag @ 0x100809440 | 1.2.4 NEW-delta
size_t *__fastcall codexmate_lib::core::relay::translator::strip_leading_think_open_tag::h964c31b5313b6e45(
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
  __int64 v12; // rcx
  size_t v13; // r14
  __int64 v14; // r12
  const void *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15

  core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hfadac13bdab5baff(a2, a3); /*0x10080945d*/
  v6 = a3 - v5; /*0x100809465*/
  if ( a3 != v5 ) /*0x100809468*/
  {
    if ( v6 >= a3 ) /*0x10080946d*/
    {
      if ( !v5 ) /*0x1008094c4*/
      {
LABEL_10:
        *a1 = 0x8000000000000000LL; /*0x1008094c6*/
        return a1; /*0x1008094d0*/
      }
    }
    else if ( *(char *)(a2 + v6) >= -64 ) /*0x100809474*/
    {
      goto LABEL_4; /*0x100809474*/
    }
    core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, a3 - v5, a3, &anon_22327b6004f579c0722d6ebc68f79196_424); /*0x100809543*/
  }
LABEL_4:
  if ( v5 < 7 ) /*0x10080947e*/
    goto LABEL_10; /*0x10080947e*/
  v7 = (_DWORD *)(v6 + a2); /*0x100809480*/
  if ( *v7 ^ 0x6968743C | *(_DWORD *)((char *)v7 + 3) ^ 0x3E6B6E69 ) /*0x100809494*/
    goto LABEL_10; /*0x100809496*/
  v8 = (char *)v7 + 7; /*0x1008094a0*/
  v9 = v5 - 7; /*0x1008094a3*/
  v10 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d((char *)v7 + 7, v5 - 7); /*0x1008094a6*/
  v13 = v11; /*0x1008094ab*/
  if ( v11 < 0 ) /*0x1008094b1*/
  {
    v14 = 0; /*0x1008094b3*/
    goto LABEL_8; /*0x1008094b3*/
  }
  if ( v11 ) /*0x1008094e5*/
  {
    v16 = v10; /*0x1008094e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9, v11, v12); /*0x1008094ea*/
    v14 = 1; /*0x1008094ef*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x1008094fd*/
    if ( !v17 ) /*0x100809505*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x1008094b6*/
    v18 = v17; /*0x100809507*/
    v10 = v16; /*0x10080950a*/
  }
  else
  {
    v18 = 1; /*0x10080950f*/
  }
  memcpy((void *)v18, v10, v13); /*0x10080951e*/
  *a1 = v13; /*0x100809523*/
  a1[1] = v18; /*0x100809526*/
  a1[2] = v13; /*0x10080952a*/
  return a1; /*0x1008094da*/
}