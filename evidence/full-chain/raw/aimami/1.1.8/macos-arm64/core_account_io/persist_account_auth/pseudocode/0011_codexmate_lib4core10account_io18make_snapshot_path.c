// mac 1.1.8 behavioral persist_account_auth 0x100521070 d=1
double __fastcall codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v6; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rsi
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __m128i si128; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  char v23; // si
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  __int64 v31; // rdx
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  char v35; // dl
  __int64 v36; // r13
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  __m128i v41; // xmm2
  __m128i v42; // xmm3
  __m128i v43; // xmm4
  __m128i v44; // xmm5
  __int64 v45; // rsi
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __m128i v48; // xmm3
  char v49; // si
  _QWORD v51[2]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v52; // [rsp+18h] [rbp-78h] BYREF
  __int64 v53; // [rsp+20h] [rbp-70h]
  __int64 v54; // [rsp+28h] [rbp-68h]
  __int64 v55; // [rsp+30h] [rbp-60h]
  unsigned __int64 v56; // [rsp+38h] [rbp-58h]
  __int64 v57; // [rsp+40h] [rbp-50h]
  unsigned __int64 v58; // [rsp+48h] [rbp-48h] BYREF
  __int64 v59; // [rsp+50h] [rbp-40h]
  unsigned __int64 v60; // [rsp+58h] [rbp-38h]
  __int64 v61; // [rsp+60h] [rbp-30h]

  if ( (a5 & 0x8000000000000000LL) != 0LL ) /*0x100521087*/
  {
    v6 = 0; /*0x100521089*/
    goto LABEL_3; /*0x100521089*/
  }
  v56 = a1; /*0x10052109a*/
  v55 = a2; /*0x10052109e*/
  if ( !a5 ) /*0x1005210a2*/
  {
    v61 = 1; /*0x1005210db*/
    v10 = 1; /*0x1005210df*/
    v12 = 1; /*0x1005210e5*/
    goto LABEL_36; /*0x1005210eb*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1005210a7*/
  v6 = 1; /*0x1005210ac*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1005210ba*/
  if ( !v9 ) /*0x1005210c2*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a5); /*0x10052108c*/
  v10 = v9; /*0x1005210c4*/
  if ( a5 <= 7 ) /*0x1005210ce*/
  {
    v11 = 0; /*0x1005210d0*/
    goto LABEL_18; /*0x1005210d2*/
  }
  if ( a5 < 0x20 ) /*0x1005210fe*/
  {
    v11 = 0; /*0x100521100*/
LABEL_15:
    v19 = v11; /*0x100521169*/
    v11 = a5 & 0x7FFFFFFFFFFFFFF8LL; /*0x100521173*/
    si128 = _mm_load_si128((const __m128i *)"@@@@@@@@"); /*0x100521176*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1012C8540); /*0x10052117e*/
    do /*0x1005211af*/
    {
      v22 = _mm_loadl_epi64((const __m128i *)(a4 + v19)); /*0x100521190*/
      v18 = _mm_cmpeq_epi8(v22, si128); /*0x100521199*/
      *(_QWORD *)(v9 + v19) = _mm_blendv_epi8(v22, v21, v18).u64[0]; /*0x1005211a2*/
      v19 += 8; /*0x1005211a8*/
    }
    while ( v11 != v19 ); /*0x1005211af*/
    if ( a5 == v11 ) /*0x1005211b4*/
      goto LABEL_21; /*0x1005211b4*/
    goto LABEL_18; /*0x1005211b4*/
  }
  v11 = a5 & 0x7FFFFFFFFFFFFFE0LL; /*0x100521107*/
  v13 = 0; /*0x10052110a*/
  v14 = _mm_load_si128((const __m128i *)"@@@@@@@@@@@@@@@@________________@@@@@@@@"); /*0x10052110c*/
  v15 = _mm_load_si128((const __m128i *)"________________@@@@@@@@"); /*0x100521114*/
  do /*0x10052115d*/
  {
    v16 = _mm_loadu_si128((const __m128i *)(a4 + v13)); /*0x100521120*/
    v17 = _mm_loadu_si128((const __m128i *)(a4 + v13 + 16)); /*0x100521125*/
    v18 = _mm_cmpeq_epi8(v17, v14); /*0x100521140*/
    *(__m128i *)(v9 + v13) = _mm_blendv_epi8(v16, v15, _mm_cmpeq_epi8(v16, v14)); /*0x100521149*/
    *(__m128i *)(v9 + v13 + 16) = _mm_blendv_epi8(v17, v15, v18); /*0x10052114f*/
    v13 += 32; /*0x100521156*/
  }
  while ( v11 != v13 ); /*0x10052115d*/
  if ( a5 == v11 ) /*0x100521162*/
    goto LABEL_21; /*0x100521162*/
  if ( (a5 & 0x18) != 0 ) /*0x100521167*/
    goto LABEL_15; /*0x100521167*/
  do /*0x1005211d5*/
  {
LABEL_18:
    v23 = *(_BYTE *)(a4 + v11); /*0x1005211c0*/
    if ( v23 == 64 ) /*0x1005211c8*/
      v23 = 95; /*0x1005211c8*/
    *(_BYTE *)(v9 + v11++) = v23; /*0x1005211cb*/
  }
  while ( a5 != v11 ); /*0x1005211d5*/
LABEL_21:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a5); /*0x1005211d7*/
  a1 = a5; /*0x1005211e1*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1005211e4*/
  if ( !v24 ) /*0x1005211ec*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a5); /*0x10052152a*/
  v12 = v24; /*0x1005211f2*/
  v61 = v10 + a5; /*0x1005211f9*/
  if ( a5 <= 7 ) /*0x100521201*/
  {
    v25 = 0; /*0x100521203*/
    goto LABEL_33; /*0x100521205*/
  }
  if ( a5 < 0x20 ) /*0x100521218*/
  {
    v25 = 0; /*0x10052121a*/
LABEL_30:
    v31 = v25; /*0x10052128b*/
    v25 = a5 & 0x7FFFFFFFFFFFFFF8LL; /*0x100521295*/
    v32 = _mm_load_si128((const __m128i *)&xmmword_10125B340); /*0x100521298*/
    v33 = _mm_load_si128((const __m128i *)&xmmword_1012C8540); /*0x1005212a0*/
    do /*0x1005212d0*/
    {
      v34 = _mm_loadl_epi64((const __m128i *)(v10 + v31)); /*0x1005212b0*/
      v18 = _mm_cmpeq_epi8(v34, v32); /*0x1005212ba*/
      *(_QWORD *)(v12 + v31) = _mm_blendv_epi8(v34, v33, v18).u64[0]; /*0x1005212c3*/
      v31 += 8; /*0x1005212c9*/
    }
    while ( v25 != v31 ); /*0x1005212d0*/
    if ( a5 == v25 ) /*0x1005212d5*/
      goto LABEL_36; /*0x1005212d5*/
    goto LABEL_33; /*0x1005212d5*/
  }
  v25 = a5 & 0x7FFFFFFFFFFFFFE0LL; /*0x100521221*/
  v26 = 0; /*0x100521224*/
  v27 = _mm_load_si128((const __m128i *)&xmmword_10125B320); /*0x100521226*/
  v28 = _mm_load_si128((const __m128i *)"________________@@@@@@@@"); /*0x10052122e*/
  do /*0x10052127f*/
  {
    v29 = _mm_loadu_si128((const __m128i *)(v10 + v26)); /*0x100521240*/
    v30 = _mm_loadu_si128((const __m128i *)(v10 + v26 + 16)); /*0x100521246*/
    v18 = _mm_cmpeq_epi8(v30, v27); /*0x100521262*/
    *(__m128i *)(v12 + v26) = _mm_blendv_epi8(v29, v28, _mm_cmpeq_epi8(v29, v27)); /*0x10052126b*/
    *(__m128i *)(v12 + v26 + 16) = _mm_blendv_epi8(v30, v28, v18); /*0x100521271*/
    v26 += 32; /*0x100521278*/
  }
  while ( v25 != v26 ); /*0x10052127f*/
  if ( a5 == v25 ) /*0x100521284*/
    goto LABEL_36; /*0x100521284*/
  if ( (a5 & 0x18) != 0 ) /*0x100521289*/
    goto LABEL_30; /*0x100521289*/
  do /*0x1005212f5*/
  {
LABEL_33:
    v35 = *(_BYTE *)(v10 + v25); /*0x1005212e0*/
    if ( v35 == 47 ) /*0x1005212e8*/
      v35 = 95; /*0x1005212e8*/
    *(_BYTE *)(v12 + v25++) = v35; /*0x1005212eb*/
  }
  while ( a5 != v25 ); /*0x1005212f5*/
LABEL_36:
  if ( (a5 & 0x8000000000000000LL) != 0LL ) /*0x1005212fe*/
  {
    v36 = 0; /*0x100521300*/
    goto LABEL_38; /*0x100521300*/
  }
  if ( v10 == v61 ) /*0x100521317*/
  {
    v58 = a5; /*0x10052131d*/
    v59 = 1; /*0x100521321*/
    v60 = a5; /*0x100521329*/
    if ( !a5 ) /*0x100521330*/
      goto LABEL_42; /*0x100521330*/
    goto LABEL_41; /*0x100521330*/
  }
  v57 = a3; /*0x1005213c6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1005213ca*/
  v36 = 1; /*0x1005213cf*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1005213dd*/
  if ( !v38 ) /*0x1005213e5*/
LABEL_38:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, a5); /*0x100521303*/
  if ( (unsigned __int64)(v38 - v12) < 0x20 || a5 < 8 ) /*0x1005213ef*/
  {
    v39 = 0; /*0x100521403*/
    a3 = v57; /*0x100521405*/
    goto LABEL_59; /*0x100521409*/
  }
  a3 = v57; /*0x10052141c*/
  if ( a5 < 0x20 ) /*0x100521420*/
  {
    v39 = 0; /*0x100521422*/
LABEL_56:
    v45 = v39; /*0x10052148a*/
    v39 = a5 & 0x7FFFFFFFFFFFFFF8LL; /*0x100521494*/
    v46 = _mm_load_si128((const __m128i *)&xmmword_1012C8560); /*0x100521497*/
    v47 = _mm_load_si128((const __m128i *)&xmmword_1012C8540); /*0x10052149f*/
    do /*0x1005214cf*/
    {
      v48 = _mm_loadl_epi64((const __m128i *)(v12 + v45)); /*0x1005214b0*/
      *(_QWORD *)(v38 + v45) = _mm_blendv_epi8(v48, v47, _mm_cmpeq_epi8(v48, v46)).u64[0]; /*0x1005214c3*/
      v45 += 8; /*0x1005214c8*/
    }
    while ( v39 != v45 ); /*0x1005214cf*/
    if ( a5 == v39 ) /*0x1005214d4*/
      goto LABEL_62; /*0x1005214d4*/
    goto LABEL_59; /*0x1005214d4*/
  }
  v39 = a5 & 0x7FFFFFFFFFFFFFE0LL; /*0x100521429*/
  v40 = 0; /*0x10052142c*/
  v41 = _mm_load_si128((const __m128i *)&xmmword_1012C8550); /*0x10052142e*/
  v42 = _mm_load_si128((const __m128i *)"________________@@@@@@@@"); /*0x100521436*/
  do /*0x10052147d*/
  {
    v43 = _mm_loadu_si128((const __m128i *)(v12 + v40)); /*0x100521440*/
    v44 = _mm_loadu_si128((const __m128i *)(v12 + v40 + 16)); /*0x100521446*/
    *(__m128i *)(v38 + v40) = _mm_blendv_epi8(v43, v42, _mm_cmpeq_epi8(v43, v41)); /*0x10052146b*/
    *(__m128i *)(v38 + v40 + 16) = _mm_blendv_epi8(v44, v42, _mm_cmpeq_epi8(v44, v41)); /*0x100521470*/
    v40 += 32; /*0x100521476*/
  }
  while ( v39 != v40 ); /*0x10052147d*/
  if ( a5 == v39 ) /*0x100521482*/
    goto LABEL_62; /*0x100521482*/
  if ( (a5 & 0x18) != 0 ) /*0x100521488*/
    goto LABEL_56; /*0x100521488*/
  do /*0x1005214f6*/
  {
LABEL_59:
    v49 = *(_BYTE *)(v12 + v39); /*0x1005214e0*/
    if ( v49 == 58 ) /*0x1005214e9*/
      v49 = 95; /*0x1005214e9*/
    *(_BYTE *)(v38 + v39++) = v49; /*0x1005214ec*/
  }
  while ( a5 != v39 ); /*0x1005214f6*/
LABEL_62:
  v58 = a5; /*0x1005214f8*/
  v59 = v38; /*0x1005214fc*/
  v60 = a5; /*0x100521500*/
  *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, a5, 1); /*0x10052150f*/
  if ( a5 ) /*0x100521517*/
LABEL_41:
    *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, a5, 1); /*0x100521332*/
LABEL_42:
  v51[0] = &v58; /*0x100521342*/
  v51[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100521354*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_10122ACE3, v51); /*0x10052136a*/
  v37 = v53; /*0x10052136f*/
  std::path::Path::_join::hb1a495d4f06b13b8(v56, v55, a3, v53, v54); /*0x100521385*/
  if ( v52 ) /*0x100521391*/
    *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v52, 1); /*0x10052139b*/
  if ( v58 ) /*0x1005213a7*/
    *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x1005213b2*/
  return *(double *)v18.i64; /*0x1005213b7*/
}