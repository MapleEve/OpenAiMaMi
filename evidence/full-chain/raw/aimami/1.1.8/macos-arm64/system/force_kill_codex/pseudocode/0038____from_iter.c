// mac 1.1.8 force_kill_codex node va=0x1006c30b0 depth=3
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hec90eb6497e9710a(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // r12
  size_t v10; // rax
  unsigned __int64 v11; // rax
  _QWORD v13[4]; // [rsp+0h] [rbp-90h] BYREF
  size_t v14[3]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v15; // [rsp+38h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 *v17; // [rsp+48h] [rbp-48h]
  unsigned __int64 v18; // [rsp+50h] [rbp-40h]
  __int64 v19; // [rsp+58h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp-30h]

  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0LL ) /*0x1006c30d4*/
  {
    v4 = 0; /*0x1006c30d6*/
    goto LABEL_3; /*0x1006c30d6*/
  }
  v5 = a2; /*0x1006c30e4*/
  if ( a3 == a2 ) /*0x1006c30ea*/
  {
    v18 = 0; /*0x1006c31b8*/
    v19 = 8; /*0x1006c31c0*/
    v20 = 0; /*0x1006c31c8*/
    v6 = 0; /*0x1006c31d0*/
  }
  else
  {
    v17 = a1; /*0x1006c30f0*/
    v6 = (unsigned __int64)(a3 - a2) >> 5; /*0x1006c30f4*/
    v3 = 24 * v6; /*0x1006c3100*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c3104*/
    v4 = 8; /*0x1006c3109*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v6, 8u); /*0x1006c3117*/
    if ( !v7 ) /*0x1006c311f*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x1006c30d9*/
    v8 = (_QWORD *)v7; /*0x1006c3121*/
    v18 = v6; /*0x1006c3124*/
    v19 = v7; /*0x1006c3128*/
    v9 = 0; /*0x1006c312c*/
    do /*0x1006c31b0*/
    {
      v16 = v5; /*0x1006c3140*/
      v15 = v5 + 8; /*0x1006c3148*/
      v13[0] = &v16; /*0x1006c3150*/
      v13[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05ef4e7a07e1271d; /*0x1006c315e*/
      v13[2] = &v15; /*0x1006c3169*/
      v13[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x1006c3174*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1006c3186*/
        v14,
        anon_0bcfb5f5de49270c5675714f036928d0_486,
        (unsigned __int64)v13);
      v8[2] = v14[2]; /*0x1006c318f*/
      v10 = v14[0]; /*0x1006c3193*/
      v8[1] = v14[1]; /*0x1006c319b*/
      *v8 = v10; /*0x1006c319f*/
      ++v9; /*0x1006c31a2*/
      v5 += 32; /*0x1006c31a5*/
      v8 += 3; /*0x1006c31a9*/
    }
    while ( v6 != v9 ); /*0x1006c31b0*/
    a1 = v17; /*0x1006c31b2*/
  }
  a1[2] = v6; /*0x1006c31d7*/
  v11 = v18; /*0x1006c31db*/
  a1[1] = v19; /*0x1006c31e3*/
  *a1 = v11; /*0x1006c31e7*/
  return a1; /*0x1006c31ed*/
}