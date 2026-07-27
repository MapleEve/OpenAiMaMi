// __ZN13codexmate_lib8platform5proxy6dedupe @ 0x1007cfdb0 | 基线 same-set
double __fastcall codexmate_lib::platform::proxy::dedupe::h9f4a86a299861ee6(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  __m128i si128; // xmm0
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // rdx
  __int64 v25; // rbx
  __int64 v26; // r14
  const __m128i *v27; // r15
  const __m128i *v29; // r12
  int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  _BYTE v36[24]; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h]
  const __m128i *v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  _QWORD *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1007cfdd1*/
  v5 = v2; /*0x1007cfdd3*/
  v6 = *(_BYTE *)(v2 + 16) == 1; /*0x1007cfdd6*/
  v49 = a1; /*0x1007cfdda*/
  if ( v6 ) /*0x1007cfdde*/
  {
    v7 = *(_QWORD *)v2; /*0x1007cfde4*/
    v8 = *(_QWORD *)(v5 + 8); /*0x1007cfde7*/
  }
  else
  {
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1007d011e*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v3,
           v4);
    *(_QWORD *)v5 = v7; /*0x1007d0123*/
    *(_QWORD *)(v5 + 8) = v8; /*0x1007d0126*/
    *(_BYTE *)(v5 + 16) = 1; /*0x1007d012a*/
  }
  *(_QWORD *)v5 = v7 + 1; /*0x1007cfdef*/
  v44 = 0; /*0x1007cfdf9*/
  v43 = 0; /*0x1007cfe07*/
  v42 = 0; /*0x1007cfe15*/
  v41 = (const __m128i *)anon_3ce6d1417794db0febde534c64082f90_12; /*0x1007cfe23*/
  v45 = v7; /*0x1007cfe2a*/
  v46 = v8; /*0x1007cfe31*/
  v56 = 0; /*0x1007cfe38*/
  v57 = 8; /*0x1007cfe40*/
  v58 = 0; /*0x1007cfe48*/
  v9 = *a2; /*0x1007cfe50*/
  v11 = a2[2]; /*0x1007cfe57*/
  v37 = a2[1]; /*0x1007cfe64*/
  v10 = v37; /*0x1007cfe53*/
  v50 = v9; /*0x1007cfe6b*/
  v39 = v9; /*0x1007cfe6f*/
  v54 = v37 + 24 * v11; /*0x1007cfe76*/
  v40 = v54; /*0x1007cfe7a*/
  v55 = v37; /*0x1007cfe81*/
  if ( v11 ) /*0x1007cfe88*/
  {
    v10 = v55 + 24; /*0x1007cfe9c*/
    v12 = 0x8000000000000000LL; /*0x1007cfea0*/
    v48 = 0x8000000000000000LL; /*0x1007cfeab*/
    while ( 1 ) /*0x1007cff01*/
    {
      v15 = *(_QWORD *)(v10 - 24); /*0x1007cff01*/
      if ( v15 == v12 ) /*0x1007cff08*/
        break; /*0x1007cff08*/
      v16 = v10 - 24; /*0x1007cff0e*/
      v51 = *(_QWORD *)(v10 - 24); /*0x1007cff12*/
      v17 = *(_QWORD *)(v10 - 24 + 8); /*0x1007cff16*/
      v53 = *(_QWORD *)(v10 - 24 + 16); /*0x1007cff24*/
      v52 = v17; /*0x1007cff28*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v36, &v51); /*0x1007cff32*/
      if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v41, v36) ) /*0x1007cff41*/
      {
        if ( v15 ) /*0x1007cff4d*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v15, 1); /*0x1007cff5b*/
      }
      else
      {
        v59 = v52; /*0x1007cff74*/
        v47 = v53; /*0x1007cff7c*/
        v19 = v58; /*0x1007cff83*/
        if ( v58 == v56 ) /*0x1007cff8b*/
          *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v56); /*0x1007cff95*/
        v13 = v57; /*0x1007cfec0*/
        v14 = 3 * v19; /*0x1007cfec4*/
        *(_QWORD *)(v57 + 8 * v14) = v15; /*0x1007cfec8*/
        *(_QWORD *)(v13 + 8 * v14 + 8) = v59; /*0x1007cfed0*/
        *(_QWORD *)(v13 + 8 * v14 + 16) = v47; /*0x1007cfedc*/
        v58 = v19 + 1; /*0x1007cfee4*/
        v12 = v48; /*0x1007cfee8*/
      }
      v10 += 24; /*0x1007cfeef*/
      if ( v16 + 24 == v54 ) /*0x1007cfefb*/
        goto LABEL_18; /*0x1007cfefb*/
    }
  }
  v38 = v10; /*0x1007cffb6*/
  if ( v54 != v10 ) /*0x1007cffc0*/
  {
    v20 = (v54 - v10) / 0x18uLL; /*0x1007cffc5*/
    v21 = (_QWORD *)(v10 + 8); /*0x1007cffc9*/
    do /*0x1007cffd7*/
    {
      v22 = *(v21 - 1); /*0x1007cffd9*/
      if ( v22 ) /*0x1007cffe0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1); /*0x1007cffeb*/
      v21 += 3; /*0x1007cffd0*/
      --v20; /*0x1007cffd4*/
    }
    while ( v20 ); /*0x1007cffd7*/
  }
LABEL_18:
  if ( v50 ) /*0x1007cfff9*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 24 * v50, 8); /*0x1007d000c*/
  v23 = v49; /*0x1007d0015*/
  v49[2] = v58; /*0x1007d0019*/
  _RAX = v56; /*0x1007d001d*/
  v23[1] = v57; /*0x1007d0025*/
  *v23 = _RAX; /*0x1007d0029*/
  v25 = v42; /*0x1007d002c*/
  if ( v42 ) /*0x1007d0036*/
  {
    v26 = v44; /*0x1007d003c*/
    if ( v44 ) /*0x1007d0046*/
    {
      v27 = v41; /*0x1007d004c*/
      si128 = _mm_load_si128(v41); /*0x1007d0053*/
      _R13D = ~_mm_movemask_epi8(si128); /*0x1007d005d*/
      v29 = v41 + 1; /*0x1007d0060*/
      do /*0x1007d0080*/
      {
        if ( !(_WORD)_R13D ) /*0x1007d0086*/
        {
          do /*0x1007d00ad*/
          {
            si128 = _mm_load_si128(v29); /*0x1007d0090*/
            v30 = _mm_movemask_epi8(si128); /*0x1007d0096*/
            v27 -= 24; /*0x1007d009b*/
            ++v29; /*0x1007d00a2*/
          }
          while ( v30 == 0xFFFF ); /*0x1007d00ad*/
          _R13D = ~v30; /*0x1007d00af*/
        }
        __asm { tzcnt eax, r13d } /*0x1007d00b2*/
        v31 = -3 * _RAX; /*0x1007d00ba*/
        v32 = *((_QWORD *)&v27[-1] + v31 - 1); /*0x1007d00be*/
        if ( v32 ) /*0x1007d00c6*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27[-1].i64[v31], v32, 1); /*0x1007d00d5*/
        --v26; /*0x1007d0070*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1007d0077*/
        _R13D &= _R13D - 1; /*0x1007d007a*/
      }
      while ( v26 ); /*0x1007d0080*/
    }
    v33 = (24 * v25 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1007d00e8*/
    v34 = v33 + v25 + 17; /*0x1007d00ef*/
    if ( v34 ) /*0x1007d00f3*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v41 - v33, v34, 16); /*0x1007d0107*/
  }
  return *(double *)si128.i64; /*0x1007d010c*/
}