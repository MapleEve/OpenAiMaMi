// __ZN13codexmate_lib4core10repository10Repository27merge_mystery_unlock_grants @ 0x100a6a120 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::merge_mystery_unlock_grants::h6df1034a42672e41(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  double v4; // xmm0_8
  void (**v5)(void); // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  void (***v25)(void); // r15
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // r15
  int v29; // edx
  const __m128i *v30; // rdi
  const __m128i *v31; // rsi
  unsigned __int64 v32; // rax
  __m128i si128; // xmm0
  unsigned __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r12
  unsigned __int64 v37; // r13
  _QWORD *v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rax
  _QWORD *v42; // rbx
  _WORD __dst[20]; // [rsp+8h] [rbp-208h] BYREF
  __int64 v45; // [rsp+30h] [rbp-1E0h]
  __int64 v46; // [rsp+38h] [rbp-1D8h]
  __int64 v47; // [rsp+40h] [rbp-1D0h]
  const __m128i *v48[6]; // [rsp+A0h] [rbp-170h] BYREF
  __int16 v49; // [rsp+D0h] [rbp-140h]
  __int64 v50; // [rsp+D8h] [rbp-138h]
  unsigned __int64 *v51; // [rsp+E0h] [rbp-130h]
  _QWORD v52[12]; // [rsp+E8h] [rbp-128h] BYREF
  unsigned __int64 v53; // [rsp+148h] [rbp-C8h] BYREF
  const __m128i *v54; // [rsp+150h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+158h] [rbp-B8h]
  __int64 v56; // [rsp+160h] [rbp-B0h]
  __int64 v57; // [rsp+168h] [rbp-A8h]
  __int64 v58; // [rsp+170h] [rbp-A0h]
  __int64 v59; // [rsp+178h] [rbp-98h]
  __int64 v60; // [rsp+180h] [rbp-90h]
  _QWORD *v61; // [rsp+188h] [rbp-88h]
  _QWORD *v62; // [rsp+190h] [rbp-80h]
  __int64 v63; // [rsp+198h] [rbp-78h]
  __int64 v64; // [rsp+1A0h] [rbp-70h]
  void (**v65)(void); // [rsp+1A8h] [rbp-68h]
  __int64 *v66; // [rsp+1B0h] [rbp-60h]
  __int64 v67; // [rsp+1B8h] [rbp-58h]
  __int64 v68; // [rsp+1C0h] [rbp-50h]
  __int64 v69; // [rsp+1C8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+1D0h] [rbp-40h]
  unsigned __int64 v71; // [rsp+1D8h] [rbp-38h]
  char v72; // [rsp+1E7h] [rbp-29h] BYREF

  v66 = a3; /*0x100a6a134*/
  v4 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a6a145*/
  v5 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100a6a14a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a6a151*/
  v9 = v6; /*0x100a6a153*/
  v10 = *(_BYTE *)(v6 + 16) == 1; /*0x100a6a156*/
  v61 = a1; /*0x100a6a15a*/
  v62 = a2; /*0x100a6a161*/
  if ( v10 ) /*0x100a6a165*/
  {
    v11 = *(_QWORD *)v6; /*0x100a6a16b*/
    v12 = *(_QWORD *)(v9 + 8); /*0x100a6a16e*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a6a620*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a2,
            v7,
            v8);
    *(_QWORD *)v9 = v11; /*0x100a6a625*/
    *(_QWORD *)(v9 + 8) = v12; /*0x100a6a628*/
    *(_BYTE *)(v9 + 16) = 1; /*0x100a6a62c*/
  }
  *(_QWORD *)v9 = v11 + 1; /*0x100a6a176*/
  v57 = 0; /*0x100a6a180*/
  v56 = 0; /*0x100a6a18e*/
  v55 = 0; /*0x100a6a19c*/
  v54 = (const __m128i *)&xmmword_1015FBEC0; /*0x100a6a1aa*/
  v58 = v11; /*0x100a6a1b1*/
  v59 = v12; /*0x100a6a1b8*/
  v68 = v46; /*0x100a6a1c6*/
  v64 = v47; /*0x100a6a1d1*/
  if ( v47 ) /*0x100a6a1d8*/
  {
    v13 = 40 * v64; /*0x100a6a1e6*/
    v14 = v68 + 16; /*0x100a6a1ee*/
    do /*0x100a6a218*/
    {
      v5 = *(void (***)(void))(v14 + 8); /*0x100a6a21a*/
      if ( (unsigned __int8)codexmate_lib::core::repository::Repository::mystery_route_allowed::h1c335bb2c45fb07b( /*0x100a6a222*/
                              (__int64)v5,
                              *(_QWORD *)(v14 + 16)) )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v52, v14); /*0x100a6a231*/
        v5 = (void (**)(void))&v54; /*0x100a6a23e*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h54d497fca887e967( /*0x100a6a244*/
          &v54,
          v52,
          *(_QWORD *)(v14 - 16),
          *(_QWORD *)(v14 - 8),
          v4);
      }
      v14 += 40; /*0x100a6a210*/
      v13 -= 40; /*0x100a6a214*/
    }
    while ( v13 ); /*0x100a6a218*/
  }
  v15 = *v66; /*0x100a6a24f*/
  v17 = v66[2]; /*0x100a6a256*/
  v52[0] = v66[1]; /*0x100a6a262*/
  v16 = v52[0]; /*0x100a6a252*/
  v52[1] = v52[0]; /*0x100a6a269*/
  v63 = v15; /*0x100a6a270*/
  v52[2] = v15; /*0x100a6a274*/
  v67 = v52[0] + 40 * v17; /*0x100a6a27b*/
  v52[3] = v67; /*0x100a6a27f*/
  v65 = (void (**)(void))v52[0]; /*0x100a6a286*/
  if ( v17 ) /*0x100a6a28d*/
  {
    v16 = (__int64)(v65 + 5); /*0x100a6a297*/
    while ( 1 ) /*0x100a6a2d8*/
    {
      v19 = *(_QWORD *)(v16 - 40); /*0x100a6a2d8*/
      if ( v19 == 2 ) /*0x100a6a2e0*/
        break; /*0x100a6a2e0*/
      v60 = *(_QWORD *)(v16 - 32); /*0x100a6a2e6*/
      v20 = *(_QWORD *)(v16 - 24); /*0x100a6a2ed*/
      v21 = *(_QWORD *)(v16 - 16); /*0x100a6a2f1*/
      v22 = *(_QWORD *)(v16 - 8); /*0x100a6a2f5*/
      v5 = (void (**)(void))v21; /*0x100a6a2f9*/
      if ( (unsigned __int8)codexmate_lib::core::repository::Repository::mystery_route_allowed::h1c335bb2c45fb07b( /*0x100a6a2ff*/
                              v21,
                              v22) )
      {
        v69 = v20; /*0x100a6a2a0*/
        v70 = v21; /*0x100a6a2a4*/
        v71 = v22; /*0x100a6a2a8*/
        v5 = (void (**)(void))&v54; /*0x100a6a2ac*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h54d497fca887e967(&v54, &v69, v19, v60, v4); /*0x100a6a2c1*/
      }
      else if ( v20 ) /*0x100a6a30b*/
      {
        v5 = (void (**)(void))v21; /*0x100a6a312*/
        v4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100a6a318*/
      }
      v18 = v16 - 40; /*0x100a6a2c6*/
      v16 += 40; /*0x100a6a2ca*/
      if ( v18 + 40 == v67 ) /*0x100a6a2d6*/
      {
        v16 = v67; /*0x100a6a31f*/
        break; /*0x100a6a31f*/
      }
    }
    v52[1] = v16; /*0x100a6a323*/
  }
  v23 = v67; /*0x100a6a32a*/
  if ( v67 != v16 ) /*0x100a6a344*/
  {
    v24 = (v67 - v16) / 0x28uLL; /*0x100a6a349*/
    v25 = (void (***)(void))(v16 + 24); /*0x100a6a34d*/
    do /*0x100a6a367*/
    {
      v23 = (__int64)*(v25 - 1); /*0x100a6a369*/
      if ( v23 ) /*0x100a6a370*/
      {
        v5 = *v25; /*0x100a6a372*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v23, 1); /*0x100a6a37a*/
      }
      v25 += 5; /*0x100a6a360*/
      --v24; /*0x100a6a364*/
    }
    while ( v24 ); /*0x100a6a367*/
  }
  if ( v63 ) /*0x100a6a388*/
  {
    v23 = 40 * v63; /*0x100a6a38e*/
    v5 = v65; /*0x100a6a397*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, 40 * v63, 8); /*0x100a6a39b*/
  }
  v26 = std::time::SystemTime::now::h1fe79e41f9d5677f(v5, v23); /*0x100a6a3a0*/
  v27 = v61; /*0x100a6a3a5*/
  v28 = v64; /*0x100a6a3ac*/
  v69 = v26; /*0x100a6a3b0*/
  LODWORD(v70) = v29; /*0x100a6a3b4*/
  v30 = (const __m128i *)v52; /*0x100a6a3b7*/
  v31 = (const __m128i *)&v69; /*0x100a6a3be*/
  std::time::SystemTime::duration_since::had059553cab94f96(v52, &v69, 0, 0); /*0x100a6a3c6*/
  if ( LOBYTE(v52[0]) ) /*0x100a6a3d2*/
    v32 = 0; /*0x100a6a3d4*/
  else
    v32 = 1000LL * v52[1] + LODWORD(v52[2]) / 0xF4240uLL; /*0x100a6a3f4*/
  v53 = v32; /*0x100a6a3f7*/
  si128 = _mm_load_si128(v54); /*0x100a6a413*/
  if ( v55 ) /*0x100a6a41a*/
  {
    v34 = (40 * v55 + 55) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a6a428*/
    v31 = (const __m128i *)(v55 + v34 + 17); /*0x100a6a42c*/
    v30 = (const __m128i *)((char *)v54 - v34); /*0x100a6a434*/
    v35 = 16; /*0x100a6a437*/
  }
  else
  {
    v35 = 0; /*0x100a6a43f*/
  }
  v48[0] = (const __m128i *)v35; /*0x100a6a453*/
  v48[1] = v31; /*0x100a6a45a*/
  v48[2] = v30; /*0x100a6a461*/
  v48[3] = v54; /*0x100a6a468*/
  v48[4] = v54 + 1; /*0x100a6a46f*/
  v48[5] = (const __m128i *)&v54->i8[v55 + 1]; /*0x100a6a476*/
  v49 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x100a6a47d*/
  v50 = v57; /*0x100a6a485*/
  v51 = &v53; /*0x100a6a493*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h99658a71c082cdff( /*0x100a6a4a5*/
    &v69,
    v48);
  v36 = v70; /*0x100a6a4aa*/
  v37 = v71; /*0x100a6a4ae*/
  v52[0] = &v72; /*0x100a6a4b6*/
  if ( v71 >= 2 ) /*0x100a6a4c1*/
  {
    if ( v71 >= 0x15 ) /*0x100a6a639*/
      core::slice::sort::stable::driftsort_main::h0c8663b8bad1d741(v70, v71, v52); /*0x100a6a664*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h3c205dfed3b46353(v70, v71, 1, v52); /*0x100a6a64d*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::had28becadd929764(v52, &v69); /*0x100a6a4d2*/
  if ( v28 ) /*0x100a6a4da*/
  {
    v38 = (_QWORD *)(v68 + 24); /*0x100a6a4e0*/
    do /*0x100a6a4f7*/
    {
      v39 = *(v38 - 1); /*0x100a6a4f9*/
      if ( v39 ) /*0x100a6a500*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, v39, 1); /*0x100a6a50a*/
      v38 += 5; /*0x100a6a4f0*/
      --v28; /*0x100a6a4f4*/
    }
    while ( v28 ); /*0x100a6a4f7*/
  }
  if ( v45 ) /*0x100a6a522*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 40 * v45, 8); /*0x100a6a535*/
  v47 = v52[2]; /*0x100a6a541*/
  v46 = v52[1]; /*0x100a6a553*/
  v45 = v52[0]; /*0x100a6a557*/
  v40 = (__int64)v62; /*0x100a6a568*/
  codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24( /*0x100a6a56c*/
    v52,
    v62,
    (__int64)__dst,
    *(double *)si128.i64);
  if ( LODWORD(v52[0]) == 11 ) /*0x100a6a578*/
  {
    v27[3] = v71; /*0x100a6a57e*/
    v41 = v69; /*0x100a6a582*/
    v27[2] = v70; /*0x100a6a58a*/
    v27[1] = v41; /*0x100a6a58e*/
    *v27 = 11; /*0x100a6a592*/
  }
  else
  {
    qmemcpy(v27, v52, 0x60u); /*0x100a6a5aa*/
    v40 = (__int64)&v53; /*0x100a6a5aa*/
    if ( v37 ) /*0x100a6a5b0*/
    {
      v42 = (_QWORD *)(v36 + 24); /*0x100a6a5b2*/
      do /*0x100a6a5c7*/
      {
        v40 = *(v42 - 1); /*0x100a6a5c9*/
        if ( v40 ) /*0x100a6a5d0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v40, 1); /*0x100a6a5da*/
        v42 += 5; /*0x100a6a5c0*/
        --v37; /*0x100a6a5c4*/
      }
      while ( v37 ); /*0x100a6a5c7*/
    }
    if ( v69 ) /*0x100a6a5e8*/
    {
      v40 = 40 * v69; /*0x100a6a5ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 40 * v69, 8); /*0x100a6a5fa*/
    }
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v40); /*0x100a6a606*/
  return v27; /*0x100a6a60e*/
}