// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x101390580 d=1
size_t *__fastcall alloc::fmt::format::format_inner::h3c16c74008a310d4(
        size_t *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  unsigned __int8 *v6; // rcx
  unsigned __int64 v7; // r12
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  size_t v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  size_t v13; // rax
  bool v15; // sf
  size_t v16; // [rsp+8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-40h]
  size_t v18; // [rsp+18h] [rbp-38h]
  char v19[41]; // [rsp+27h] [rbp-29h] BYREF

  if ( (a3 & 1) != 0 ) /*0x10139059e*/
  {
    v10 = a3 >> 1; /*0x101390634*/
  }
  else
  {
    v4 = *a2; /*0x1013905a4*/
    if ( !*a2 ) /*0x1013905aa*/
    {
LABEL_16:
      v12 = 1; /*0x10139066f*/
      v10 = 0; /*0x101390674*/
      goto LABEL_17; /*0x101390674*/
    }
    v5 = 0; /*0x1013905b0*/
    v6 = a2; /*0x1013905b2*/
    v7 = 0; /*0x1013905b5*/
    do /*0x1013905ce*/
    {
      v8 = (unsigned __int16 *)(v6 + 1); /*0x1013905d0*/
      if ( (v4 & 0x80u) == 0 ) /*0x1013905d5*/
      {
        v7 += v4; /*0x1013905c3*/
        v6 = (unsigned __int8 *)v8 + v4; /*0x1013905c6*/
      }
      else if ( __OFSUB__(-v4, 1) ) /*0x1013905d9*/
      {
        v9 = *v8; /*0x1013905de*/
        v7 += v9; /*0x1013905e1*/
        v6 = (unsigned __int8 *)v8 + v9 + 2; /*0x1013905e4*/
      }
      else
      {
        v5 |= v7 == 0; /*0x1013905f2*/
        v6 = (unsigned __int8 *)v8 /*0x10139062c*/
           + ((v4 >> 1) & 2)
           + ((v4 >> 2) & 2)
           + ((unsigned __int8)((v4 << 7) | (32 * v4) & 0x40) >> 5);
      }
      v4 = *v6; /*0x1013905c9*/
    }
    while ( *v6 ); /*0x1013905ce*/
    if ( ((v7 < 0x10) & v5) != 0 ) /*0x101390642*/
    {
      v10 = 0; /*0x101390648*/
    }
    else
    {
      v15 = (v7 & 0x4000000000000000LL) != 0; /*0x1013906ca*/
      v10 = 2 * v7; /*0x1013906ca*/
      if ( v15 ) /*0x1013906cd*/
      {
        v11 = 0; /*0x1013906d3*/
        goto LABEL_21; /*0x1013906d3*/
      }
    }
  }
  if ( !v10 ) /*0x10139064e*/
    goto LABEL_16; /*0x10139064e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101390650*/
  v11 = 1; /*0x101390655*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1u); /*0x101390663*/
  if ( !v12 ) /*0x10139066b*/
LABEL_21:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x1013906d6*/
LABEL_17:
  v16 = v10; /*0x101390677*/
  v17 = v12; /*0x10139067b*/
  v18 = 0; /*0x10139067f*/
  if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(&v16, &off_101927CD0, a2, a3) ) /*0x101390698*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1013906ff*/
      "a formatting trait implementation returned an error when the underlying stream did notcapacity overflowLayoutError",
      86,
      v19,
      &unk_101927C78,
      &off_101927D00);
  a1[2] = v18; /*0x1013906a5*/
  v13 = v16; /*0x1013906a9*/
  a1[1] = v17; /*0x1013906b1*/
  *a1 = v13; /*0x1013906b5*/
  return a1; /*0x1013906bb*/
}