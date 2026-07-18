// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1013920c0 d=2
unsigned __int64 *__fastcall alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(
        unsigned __int64 *a1,
        __int64 a2,
        size_t a3)
{
  size_t v3; // r13
  unsigned __int64 *v4; // rbx
  __int64 v5; // r15
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  size_t v11; // r14
  size_t v12; // r14
  void *v13; // rbx
  size_t v14; // r13
  __int64 v15; // r15
  __int64 v16; // r12
  _QWORD v18[2]; // [rsp+8h] [rbp-88h] BYREF
  void *__src; // [rsp+18h] [rbp-78h] BYREF
  size_t __n; // [rsp+20h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-60h]
  unsigned __int64 *v22; // [rsp+38h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-50h] BYREF
  size_t v24; // [rsp+48h] [rbp-48h]
  size_t v25; // [rsp+50h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-38h]
  unsigned __int64 v27; // [rsp+60h] [rbp-30h]

  v3 = a3; /*0x1013920d1*/
  v4 = a1; /*0x1013920d4*/
  v23 = a2; /*0x1013920d7*/
  v24 = a3; /*0x1013920db*/
  _$LT$core..str..lossy..Utf8Chunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c3551eef8312a1b( /*0x1013920e7*/
    &__src,
    &v23);
  v5 = (__int64)__src; /*0x1013920ec*/
  if ( !__src ) /*0x1013920f3*/
  {
    v5 = 1; /*0x101392129*/
    v6 = 0; /*0x10139212f*/
    goto LABEL_7; /*0x10139212f*/
  }
  v6 = __n; /*0x1013920f5*/
  if ( !v21 ) /*0x1013920fe*/
  {
LABEL_7:
    a1[1] = v5; /*0x101392132*/
    a1[2] = v6; /*0x101392136*/
    v9 = 0x8000000000000000LL; /*0x10139213a*/
    goto LABEL_22; /*0x101392144*/
  }
  v22 = a1; /*0x101392100*/
  if ( v3 ) /*0x101392107*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101392109*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x101392116*/
    if ( !v7 ) /*0x10139211e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1013922d6*/
    v8 = v7; /*0x101392124*/
  }
  else
  {
    v8 = 1; /*0x101392149*/
  }
  v25 = v3; /*0x10139214e*/
  v26 = v8; /*0x101392152*/
  v27 = 0; /*0x101392156*/
  if ( v6 > v3 ) /*0x101392161*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h4a6eb2d4f3af4e5c(&v25, 0, v6); /*0x10139229a*/
    v10 = v27; /*0x10139229f*/
    v3 = v25; /*0x1013922a3*/
    v8 = v26; /*0x1013922a7*/
  }
  else
  {
    v10 = 0; /*0x101392167*/
  }
  memcpy((void *)(v8 + v10), (const void *)v5, v6); /*0x101392174*/
  v11 = v6 + v10; /*0x101392179*/
  v27 = v11; /*0x10139217c*/
  if ( v3 - v11 <= 2 ) /*0x101392187*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h4a6eb2d4f3af4e5c(&v25, v11, 3); /*0x1013922bc*/
    v8 = v26; /*0x1013922c1*/
    v11 = v27; /*0x1013922c5*/
  }
  *(_BYTE *)(v8 + v11 + 2) = -67; /*0x10139218d*/
  *(_WORD *)(v8 + v11) = -16401; /*0x101392193*/
  v12 = v11 + 3; /*0x10139219a*/
  v27 = v12; /*0x10139219e*/
  v18[0] = v23; /*0x1013921aa*/
  v18[1] = v24; /*0x1013921b1*/
  while ( 1 ) /*0x1013921cb*/
  {
    _$LT$core..str..lossy..Utf8Chunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c3551eef8312a1b( /*0x1013921cb*/
      &__src,
      v18);
    v13 = __src; /*0x1013921d0*/
    if ( !__src ) /*0x1013921d7*/
      break; /*0x1013921d7*/
    v14 = __n; /*0x1013921dd*/
    v15 = v21; /*0x1013921e1*/
    if ( __n > v25 - v12 ) /*0x1013921ef*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h4a6eb2d4f3af4e5c(&v25, v12, __n); /*0x10139223e*/
      v12 = v27; /*0x101392243*/
    }
    v16 = v26; /*0x1013921f1*/
    memcpy((void *)(v26 + v12), v13, v14); /*0x1013921ff*/
    v12 += v14; /*0x101392204*/
    v27 = v12; /*0x101392207*/
    if ( v15 ) /*0x10139220e*/
    {
      if ( v25 - v12 <= 2 ) /*0x10139221b*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h4a6eb2d4f3af4e5c(&v25, v12, 3); /*0x101392255*/
        v16 = v26; /*0x10139225a*/
        v12 = v27; /*0x10139225e*/
      }
      *(_BYTE *)(v16 + v12 + 2) = -67; /*0x10139221d*/
      *(_WORD *)(v16 + v12) = -16401; /*0x101392223*/
      v12 += 3LL; /*0x10139222a*/
      v27 = v12; /*0x10139222e*/
    }
  }
  v4 = v22; /*0x101392268*/
  v22[2] = v27; /*0x10139226c*/
  v9 = v25; /*0x101392270*/
  v4[1] = v26; /*0x101392278*/
LABEL_22:
  *v4 = v9; /*0x10139227c*/
  return v4; /*0x101392282*/
}