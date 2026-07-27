// __ZN13codexmate_lib4core5voice3llm16strip_think_tags @ 0x100663150 | 基线 same-set
size_t *__fastcall codexmate_lib::core::voice::llm::strip_think_tags::hafb183b43a34c569(size_t *a1, _QWORD *a2)
{
  char *v2; // rbx
  size_t v3; // r13
  __int64 v4; // r15
  __int64 v5; // r9
  size_t v6; // r12
  size_t v7; // r12
  size_t v8; // rdx
  __int64 v9; // r14
  const void *v10; // rax
  __int64 v11; // rdx
  size_t v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r13
  const void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  size_t *v18; // rax
  char **v20; // rax
  _BYTE v21[104]; // [rsp+8h] [rbp-E8h] BYREF
  int v22; // [rsp+70h] [rbp-80h] BYREF
  size_t __n; // [rsp+78h] [rbp-78h]
  _QWORD *v24; // [rsp+88h] [rbp-68h]
  char *v25; // [rsp+90h] [rbp-60h]
  size_t *v26; // [rsp+98h] [rbp-58h]
  __int64 v27; // [rsp+A0h] [rbp-50h]
  __int64 v28; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-40h]
  __int64 v30; // [rsp+B8h] [rbp-38h]
  char **v31; // [rsp+C0h] [rbp-30h]

  v26 = a1; /*0x100663164*/
  v28 = 0; /*0x100663168*/
  v29 = 1; /*0x100663170*/
  v30 = 0; /*0x100663178*/
  v2 = (char *)a2[1]; /*0x100663180*/
  v24 = a2; /*0x100663184*/
  v3 = a2[2]; /*0x100663188*/
  v27 = 1; /*0x100663191*/
  v4 = 0; /*0x100663195*/
  v31 = &off_1019679C8; /*0x1006631a6*/
  v25 = v2; /*0x1006631aa*/
  while ( 1 ) /*0x1006631d6*/
  {
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v21, v2, v3, "<think>doubao", 7); /*0x1006631d6*/
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1006631e2*/
      &v22,
      v21);
    if ( v22 != 1 ) /*0x1006631eb*/
      break; /*0x1006631eb*/
    v6 = __n; /*0x1006631f1*/
    if ( __n ) /*0x1006631f8*/
    {
      if ( __n >= v3 ) /*0x1006631fd*/
      {
        if ( __n != v3 ) /*0x100663210*/
        {
LABEL_40:
          v8 = 0; /*0x10066340b*/
          goto LABEL_43; /*0x10066340d*/
        }
      }
      else if ( v2[__n] <= -65 ) /*0x100663204*/
      {
        goto LABEL_40; /*0x100663204*/
      }
    }
    if ( __n > v28 - v4 ) /*0x100663220*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v28, v4, __n, 1, 1, v5); /*0x1006632d0*/
      v27 = v29; /*0x1006632d9*/
      v4 = v30; /*0x1006632dd*/
    }
    memcpy((void *)(v27 + v4), v2, v6); /*0x100663234*/
    v4 += v6; /*0x100663239*/
    v30 = v4; /*0x10066323c*/
    v7 = v6 + 7; /*0x100663240*/
    if ( v7 ) /*0x100663244*/
    {
      if ( v3 <= v7 ) /*0x100663249*/
      {
        if ( v3 != v7 ) /*0x100663260*/
        {
LABEL_39:
          v8 = v7; /*0x1006633fc*/
          v6 = v3; /*0x1006633ff*/
          v20 = &off_1019679E0; /*0x100663402*/
          goto LABEL_42; /*0x100663409*/
        }
      }
      else if ( v2[v7] < -64 ) /*0x100663250*/
      {
        goto LABEL_39; /*0x100663250*/
      }
    }
    v3 -= v7; /*0x100663266*/
    v2 += v7; /*0x100663269*/
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v21, v2, v3, &unk_1016021B0, 8); /*0x100663282*/
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10066328e*/
      &v22,
      v21);
    if ( v22 != 1 ) /*0x100663297*/
    {
      v9 = v27; /*0x100663312*/
      goto LABEL_26; /*0x100663312*/
    }
    v8 = __n + 8; /*0x10066329d*/
    if ( __n != -8 ) /*0x1006632a1*/
    {
      if ( v3 > v8 ) /*0x1006632aa*/
      {
        if ( v2[v8] < -64 ) /*0x1006631b4*/
          goto LABEL_41; /*0x1006631b4*/
      }
      else if ( v3 != v8 ) /*0x1006632b0*/
      {
LABEL_41:
        v6 = v3; /*0x10066340f*/
        v20 = &off_1019679F8; /*0x100663412*/
LABEL_42:
        v31 = v20; /*0x100663419*/
LABEL_43:
        core::str::slice_error_fail::h480e51fbd8b15eba(v2, v3, v8, v6, v31); /*0x10066341d*/
      }
    }
    v3 -= v8; /*0x1006631ba*/
    v2 += v8; /*0x1006631bd*/
  }
  if ( v3 > v28 - v4 ) /*0x1006632f0*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v28, v4, v3, 1, 1, v5); /*0x1006633ea*/
    v9 = v29; /*0x1006633ef*/
    v4 = v30; /*0x1006633f3*/
  }
  else
  {
    v9 = v27; /*0x1006632f6*/
  }
  memcpy((void *)(v9 + v4), v2, v3); /*0x100663304*/
  v4 += v3; /*0x100663309*/
  v30 = v4; /*0x10066330c*/
LABEL_26:
  v10 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v9, v4); /*0x100663316*/
  v12 = v11; /*0x100663321*/
  if ( v11 < 0 ) /*0x100663327*/
  {
    v13 = 0; /*0x100663329*/
    goto LABEL_28; /*0x100663329*/
  }
  v14 = v9; /*0x10066333c*/
  if ( v11 ) /*0x100663342*/
  {
    v15 = v10; /*0x100663344*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v4); /*0x100663347*/
    v13 = 1; /*0x10066334c*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x10066335a*/
    if ( !v16 ) /*0x100663362*/
LABEL_28:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x10066332c*/
    v17 = v16; /*0x100663364*/
    v10 = v15; /*0x100663367*/
  }
  else
  {
    v17 = 1; /*0x10066336c*/
  }
  memcpy((void *)v17, v10, v12); /*0x10066337b*/
  v18 = v26; /*0x100663380*/
  *v26 = v12; /*0x100663384*/
  v18[1] = v17; /*0x100663387*/
  v18[2] = v12; /*0x10066338b*/
  if ( v28 ) /*0x100663396*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v28, 1); /*0x1006633a0*/
  if ( *v24 ) /*0x1006633a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, *v24, 1); /*0x1006633ba*/
  return v26; /*0x1006633c3*/
}