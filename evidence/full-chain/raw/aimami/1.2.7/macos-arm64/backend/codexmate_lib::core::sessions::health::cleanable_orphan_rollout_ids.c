// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::health::cleanable_orphan_rollout_ids::h6939ee55e25da247; addr: 0x100b1d940; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
double __fastcall codexmate_lib::core::sessions::health::cleanable_orphan_rollout_ids::h6939ee55e25da247(
        _QWORD *a1,
        const __m128i **a2,
        const __m128i **a3)
{
  const __m128i *v3; // r13
  const __m128i *v4; // r15
  __m128i si128; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  const __m128i *v13; // r12
  int v15; // ebx
  __int64 v16; // rax
  const __m128i *v17; // rbx
  __int64 v18; // r14
  __int16 v19; // ax
  __int64 i64; // r15
  const __m128i **v21; // rcx
  const __m128i *v22; // r13
  __int64 v23; // r12
  __m128i v24; // xmm0
  __int64 v25; // rbx
  _QWORD *v26; // rdx
  const __m128i **v28; // rbx
  __int64 v29; // r14
  const __m128i *v30; // r15
  const __m128i *v32; // r12
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rbx
  _QWORD v39[3]; // [rsp+8h] [rbp-128h] BYREF
  __int16 v40; // [rsp+20h] [rbp-110h]
  const __m128i **v41; // [rsp+28h] [rbp-108h]
  const __m128i **v42; // [rsp+30h] [rbp-100h]
  const __m128i **v43; // [rsp+38h] [rbp-F8h]
  __int64 v44; // [rsp+40h] [rbp-F0h]
  const __m128i **v45; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-E0h]
  const __m128i **v47; // [rsp+58h] [rbp-D8h]
  _QWORD *v48; // [rsp+60h] [rbp-D0h]
  __int64 v49; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+70h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+78h] [rbp-B8h]
  const __m128i *v52; // [rsp+80h] [rbp-B0h] BYREF
  const __m128i **v53; // [rsp+88h] [rbp-A8h]
  __int64 v54; // [rsp+90h] [rbp-A0h]
  const __m128i *v55; // [rsp+98h] [rbp-98h] BYREF
  const __m128i **v56; // [rsp+A0h] [rbp-90h]
  __int64 v57; // [rsp+A8h] [rbp-88h]
  __int64 v58; // [rsp+B0h] [rbp-80h]
  __int64 v59; // [rsp+B8h] [rbp-78h]
  __int64 v60; // [rsp+C0h] [rbp-70h]
  const __m128i *v61; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-60h]
  __int64 v63; // [rsp+D8h] [rbp-58h]
  __int64 v64; // [rsp+E0h] [rbp-50h]
  __int64 v65; // [rsp+E8h] [rbp-48h]
  __int64 v66; // [rsp+F0h] [rbp-40h]
  const __m128i **v67; // [rsp+F8h] [rbp-38h]
  const __m128i **v68; // [rsp+100h] [rbp-30h]

  v68 = a3; /*0x100b1d954*/
  v48 = a1; /*0x100b1d958*/
  v3 = *a2; /*0x100b1d95f*/
  v4 = a2[3]; /*0x100b1d962*/
  si128 = _mm_load_si128(*a2); /*0x100b1d966*/
  _EBX = ~_mm_movemask_epi8(si128); /*0x100b1d970*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b1d979*/
  v8 = v7; /*0x100b1d97b*/
  v9 = *(_BYTE *)(v7 + 16) == 1; /*0x100b1d97e*/
  v46 = v10; /*0x100b1d982*/
  v47 = a2; /*0x100b1d989*/
  if ( v9 ) /*0x100b1d990*/
  {
    v11 = *(_QWORD *)v7; /*0x100b1d996*/
    v12 = *(_QWORD *)(v8 + 8); /*0x100b1d999*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x100b1dcf1*/
    *(_QWORD *)v8 = v11; /*0x100b1dcf9*/
    *(_QWORD *)(v8 + 8) = v12; /*0x100b1dcfc*/
    *(_BYTE *)(v8 + 16) = 1; /*0x100b1dd00*/
  }
  v13 = v3 + 1; /*0x100b1d99d*/
  *(_QWORD *)v8 = v11 + 1; /*0x100b1d9af*/
  v64 = 0; /*0x100b1d9b9*/
  v63 = 0; /*0x100b1d9c4*/
  v62 = 0; /*0x100b1d9cf*/
  v61 = (const __m128i *)anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100b1d9da*/
  v65 = v11; /*0x100b1d9de*/
  v66 = v12; /*0x100b1d9e2*/
  v67 = &v61; /*0x100b1d9ea*/
  while ( 1 ) /*0x100b1d9fa*/
  {
    _RAX = &v55; /*0x100b1d9fa*/
    if ( !(_WORD)_EBX ) /*0x100b1da04*/
      break; /*0x100b1da04*/
LABEL_9:
    __asm { tzcnt eax, ebx } /*0x100b1da2f*/
    v16 = 0xFFFFFFFFFFFFFE6LL * (_QWORD)_RAX; /*0x100b1da36*/
    if ( *((_QWORD *)&v3[v16 - 14] - 1) != 0x8000000000000000LL ) /*0x100b1da45*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100b1da56*/
        &v52,
        (char *)&v3[v16 - 14] - 8);
      if ( v52 != (const __m128i *)0x8000000000000000LL ) /*0x100b1da62*/
      {
        v57 = v54; /*0x100b1da6b*/
        v56 = v53; /*0x100b1da80*/
        v55 = v52; /*0x100b1da87*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(&v61, &v55); /*0x100b1da99*/
      }
    }
    v4 = (const __m128i *)((char *)v4 - 1); /*0x100b1d9f5*/
    _EBX &= _EBX - 1; /*0x100b1d9f8*/
  }
  if ( v4 ) /*0x100b1da09*/
  {
    do /*0x100b1da2b*/
    {
      v15 = _mm_movemask_epi8(_mm_load_si128(v13)); /*0x100b1da16*/
      v3 -= 416; /*0x100b1da1a*/
      ++v13; /*0x100b1da21*/
    }
    while ( v15 == 0xFFFF ); /*0x100b1da2b*/
    _EBX = ~v15; /*0x100b1da2d*/
    goto LABEL_9; /*0x100b1da2d*/
  }
  v60 = v66; /*0x100b1daaa*/
  v59 = v65; /*0x100b1dab2*/
  v58 = v64; /*0x100b1daba*/
  v57 = v63; /*0x100b1dac2*/
  v56 = (const __m128i **)v62; /*0x100b1dad1*/
  v55 = v61; /*0x100b1dad8*/
  v18 = (__int64)v68[1]->i64 + (_QWORD)*v68 + 1; /*0x100b1daea*/
  v19 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(*v68)); /*0x100b1daf7*/
  i64 = (__int64)(*v68)[1].i64; /*0x100b1daf9*/
  v21 = (const __m128i **)v68[3]; /*0x100b1dafd*/
  v39[0] = *v68; /*0x100b1db01*/
  v17 = (const __m128i *)v39[0]; /*0x100b1dae3*/
  v39[1] = i64; /*0x100b1db08*/
  v39[2] = v18; /*0x100b1db0f*/
  v40 = v19; /*0x100b1db16*/
  v68 = v21; /*0x100b1db1d*/
  v41 = v21; /*0x100b1db21*/
  v22 = (const __m128i *)v47; /*0x100b1db28*/
  v42 = v47; /*0x100b1db2f*/
  v43 = &v55; /*0x100b1db36*/
  v23 = v46; /*0x100b1db3d*/
  v44 = v46; /*0x100b1db44*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hdb45089312ca63ab( /*0x100b1db59*/
    &v49,
    v39);
  v24 = _mm_load_si128(v17); /*0x100b1db5e*/
  v52 = v22; /*0x100b1db68*/
  v67 = &v55; /*0x100b1db76*/
  v53 = &v55; /*0x100b1db7a*/
  v54 = v23; /*0x100b1db81*/
  v45 = &v52; /*0x100b1db8f*/
  v61 = v17; /*0x100b1db96*/
  v62 = i64; /*0x100b1db9a*/
  v63 = v18; /*0x100b1db9e*/
  LOWORD(v64) = ~(unsigned __int16)_mm_movemask_epi8(v24); /*0x100b1dba2*/
  v25 = hashbrown::raw::RawIterRange$LT$T$GT$::fold_impl::ha5eef84156af5aa1(&v61, v68, 0, &v45); /*0x100b1dbbc*/
  if ( v51 >= 2 ) /*0x100b1dbca*/
  {
    if ( v51 >= 0x15 ) /*0x100b1dd15*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v50, v51, &v61); /*0x100b1dd2e*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v50, v51, 1, &v61); /*0x100b1dd20*/
  }
  v26 = v48; /*0x100b1dbd7*/
  v48[2] = v51; /*0x100b1dbde*/
  _RAX = v49; /*0x100b1dbe2*/
  v26[1] = v50; /*0x100b1dbf0*/
  *v26 = _RAX; /*0x100b1dbf4*/
  v26[3] = v25; /*0x100b1dbf7*/
  v28 = v56; /*0x100b1dbfb*/
  if ( v56 ) /*0x100b1dc05*/
  {
    v29 = v58; /*0x100b1dc0b*/
    if ( v58 ) /*0x100b1dc12*/
    {
      v30 = v55; /*0x100b1dc18*/
      v24 = _mm_load_si128(v55); /*0x100b1dc1f*/
      _R13D = ~_mm_movemask_epi8(v24); /*0x100b1dc29*/
      v32 = v55 + 1; /*0x100b1dc2c*/
      do /*0x100b1dc50*/
      {
        if ( !(_WORD)_R13D ) /*0x100b1dc56*/
        {
          do /*0x100b1dc7d*/
          {
            v24 = _mm_load_si128(v32); /*0x100b1dc60*/
            v33 = _mm_movemask_epi8(v24); /*0x100b1dc66*/
            v30 -= 24; /*0x100b1dc6b*/
            ++v32; /*0x100b1dc72*/
          }
          while ( v33 == 0xFFFF ); /*0x100b1dc7d*/
          _R13D = ~v33; /*0x100b1dc7f*/
        }
        __asm { tzcnt eax, r13d } /*0x100b1dc82*/
        v34 = -3 * _RAX; /*0x100b1dc8a*/
        v35 = *((_QWORD *)&v30[-1] + v34 - 1); /*0x100b1dc8e*/
        if ( v35 ) /*0x100b1dc96*/
          *(double *)v24.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30[-1].i64[v34], v35, 1); /*0x100b1dca5*/
        --v29; /*0x100b1dc40*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b1dc47*/
        _R13D &= _R13D - 1; /*0x100b1dc4a*/
      }
      while ( v29 ); /*0x100b1dc50*/
    }
    v36 = (24LL * (_QWORD)v28 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1dcb8*/
    v37 = (__int64)v28 + v36 + 17; /*0x100b1dcbf*/
    if ( v37 ) /*0x100b1dcc3*/
      *(double *)v24.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v55 - v36, v37, 16); /*0x100b1dcd7*/
  }
  return *(double *)v24.i64; /*0x100b1dcdc*/
}