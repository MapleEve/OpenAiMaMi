// __ZN13codexmate_lib4core5relay7storage27plan_provider_id_migrations @ 0x1008af8d0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::storage::plan_provider_id_migrations::h413a5551ff2e30cc(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __m128i *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i *v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __m128i *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r13
  char v17; // al
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __m128i v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  char *v24; // r15
  size_t v25; // rbx
  __int64 v26; // r14
  unsigned __int64 v27; // rbx
  __m128i si128; // xmm2
  __m128i v29; // xmm1
  __int64 v30; // r14
  __int64 v31; // r9
  const void *v32; // r15
  size_t v33; // r12
  __int64 v34; // rbx
  __int64 v35; // r13
  size_t v36; // rbx
  __int64 v37; // r9
  const void *v38; // r15
  size_t v39; // r12
  size_t v40; // rbx
  __int64 v41; // r9
  const void *v42; // r15
  size_t v43; // r12
  size_t v44; // rbx
  __int64 v45; // r9
  const void *v46; // r15
  size_t v47; // r12
  __int64 v48; // r13
  size_t v49; // rbx
  __int64 v50; // r9
  const void *v51; // r15
  size_t v52; // r12
  size_t v53; // rbx
  __int64 v54; // r9
  const void *v55; // r15
  size_t v56; // r12
  size_t v57; // rbx
  __int64 v58; // r9
  const void *v59; // r15
  size_t v60; // r12
  unsigned __int64 v61; // rax
  __int64 v63; // rsi
  __int64 v64; // r12
  __m128i v65; // xmm1
  __int64 v66; // r15
  const void *v67; // r14
  size_t v68; // r13
  unsigned __int64 i; // rdi
  unsigned __int64 v70; // rax
  __m128i v71; // xmm2
  int v73; // eax
  bool v74; // zf
  int j; // eax
  int v76; // ebx
  unsigned __int64 v77; // rax
  int v78; // ebx
  unsigned __int128 v80; // kr10_16
  __m128i v81; // xmm1
  __int64 v82; // r14
  __int128 v83; // kr20_16
  __int64 k; // r9
  unsigned __int64 v85; // rax
  __m128i v86; // xmm2
  int v88; // eax
  __int64 v89; // r13
  __int64 v90; // r15
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // rdx
  __int64 v96; // rbx
  __int64 v97; // r14
  __int64 v98; // r15
  const __m128i *v100; // r12
  int v101; // r13d
  __int64 v102; // rax
  __int64 v103; // rsi
  unsigned __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rdx
  __m128i v108; // [rsp+0h] [rbp-2C0h] BYREF
  _QWORD v109[3]; // [rsp+10h] [rbp-2B0h] BYREF
  _OWORD v110[2]; // [rsp+28h] [rbp-298h] BYREF
  __int64 v111; // [rsp+48h] [rbp-278h]
  __int64 v112; // [rsp+50h] [rbp-270h]
  __int64 v113; // [rsp+58h] [rbp-268h]
  __m128i v114; // [rsp+60h] [rbp-260h] BYREF
  __m128i v115; // [rsp+70h] [rbp-250h] BYREF
  _OWORD v116[2]; // [rsp+80h] [rbp-240h] BYREF
  void *v117[4]; // [rsp+A0h] [rbp-220h] BYREF
  __int128 v118; // [rsp+C0h] [rbp-200h]
  __int64 v119; // [rsp+D0h] [rbp-1F0h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-1E8h]
  __int64 v121; // [rsp+E8h] [rbp-1D8h]
  _QWORD *v122; // [rsp+F0h] [rbp-1D0h]
  int v123; // [rsp+FCh] [rbp-1C4h] BYREF
  void *v124; // [rsp+100h] [rbp-1C0h] BYREF
  __m128i v125; // [rsp+108h] [rbp-1B8h]
  unsigned __int64 v126; // [rsp+118h] [rbp-1A8h]
  __int64 v127; // [rsp+120h] [rbp-1A0h]
  unsigned __int64 v128; // [rsp+128h] [rbp-198h]
  __m128i v129; // [rsp+130h] [rbp-190h] BYREF
  __m128i v130; // [rsp+140h] [rbp-180h]
  __m128i v131; // [rsp+150h] [rbp-170h] BYREF
  __int64 v132; // [rsp+160h] [rbp-160h] BYREF
  __int64 v133; // [rsp+168h] [rbp-158h]
  __int64 v134; // [rsp+170h] [rbp-150h]
  _OWORD v135[7]; // [rsp+178h] [rbp-148h] BYREF
  __int64 v136; // [rsp+1E8h] [rbp-D8h]
  __m128i __src[7]; // [rsp+1F0h] [rbp-D0h] BYREF
  __int128 v138; // [rsp+268h] [rbp-58h] BYREF
  __int64 v139; // [rsp+278h] [rbp-48h]
  _BYTE v140[48]; // [rsp+280h] [rbp-40h] BYREF

  v136 = a2; /*0x1008af8e7*/
  v122 = a1; /*0x1008af8ee*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008af8fc*/
  v8 = v5; /*0x1008af8fe*/
  if ( v5[1].i8[0] == 1 ) /*0x1008af905*/
  {
    v9 = v5->i64[0]; /*0x1008af90b*/
    v10 = v5->i64[1]; /*0x1008af90e*/
  }
  else
  {
    v9 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008b0ae7*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v6,
           v7);
    v10 = v106; /*0x1008b0aea*/
    v8->i64[0] = v9; /*0x1008b0aed*/
    v8->i64[1] = v106; /*0x1008b0af0*/
    v8[1].i8[0] = 1; /*0x1008b0af4*/
  }
  v8->i64[0] = v9 + 1; /*0x1008af917*/
  v11 = __src; /*0x1008af91a*/
  v12 = 16; /*0x1008af921*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::hdcfda39df8718338(__src, 16, a3, 1); /*0x1008af92e*/
  v110[1] = __src[1]; /*0x1008af948*/
  v110[0] = __src[0]; /*0x1008af964*/
  v111 = v9; /*0x1008af96b*/
  v112 = v10; /*0x1008af972*/
  v14 = 232 * a3; /*0x1008af979*/
  v15 = v136 + 232 * a3; /*0x1008af987*/
  v113 = v15; /*0x1008af98b*/
  v16 = v136 - 232; /*0x1008af992*/
  while ( v14 ) /*0x1008af9a3*/
  {
    v12 = *(_QWORD *)(v16 + 240); /*0x1008af9a9*/
    v11 = (__m128i *)v110; /*0x1008af9b7*/
    v17 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(v110, v12, *(_QWORD *)(v16 + 248)); /*0x1008af9ba*/
    v16 += 232; /*0x1008af9bf*/
    v14 -= 232; /*0x1008af9c6*/
    if ( v17 ) /*0x1008af9cf*/
    {
      __src[0].i64[0] = v16; /*0x1008af9d1*/
      __src[0].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x1008af9df*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v109, &unk_1017C6199, __src); /*0x1008af9fb*/
      v18 = v122; /*0x1008afa07*/
      v122[3] = v109[2]; /*0x1008afa0e*/
      v19 = v109[0]; /*0x1008afa12*/
      v18[2] = v109[1]; /*0x1008afa20*/
      v18[1] = v19; /*0x1008afa24*/
      *v18 = 9; /*0x1008afa28*/
      goto LABEL_101; /*0x1008afa2f*/
    }
  }
  if ( v8[1].i8[0] == 1 ) /*0x1008afa39*/
  {
    v20 = *v8; /*0x1008afa3f*/
    v21 = v136; /*0x1008afa46*/
  }
  else
  {
    v20.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v11, v12, v13, v15); /*0x1008b0afe*/
    v21 = v136; /*0x1008b0b03*/
    *v8 = v20; /*0x1008b0b14*/
    v8[1].i8[0] = 1; /*0x1008b0b1b*/
  }
  v8->i64[0] = v20.i64[0] + 1; /*0x1008afa5b*/
  __src[1] = 0u; /*0x1008afa73*/
  __src[0].i64[1] = 0; /*0x1008afa81*/
  __src[0].i64[0] = (__int64)&xmmword_1015FBEC0; /*0x1008afa8f*/
  __src[2] = v20; /*0x1008afa96*/
  if ( a3 ) /*0x1008afaa7*/
  {
    v22 = v21; /*0x1008afab4*/
    do /*0x1008afaca*/
    {
      codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997( /*0x1008afadd*/
        (unsigned __int8 *)v135,
        *(unsigned __int8 **)(v22 + 8),
        *(_QWORD *)(v22 + 16));
      if ( *(_QWORD *)&v135[0] == 0x8000000000000000LL ) /*0x1008afaec*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v135, v22); /*0x1008afaf8*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(__src, v135); /*0x1008afb07*/
      }
      else if ( *(_QWORD *)&v135[0] ) /*0x1008afb13*/
      {
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1008afb21*/
                              *((_QWORD *)&v135[0] + 1),
                              *(_QWORD *)&v135[0],
                              1);
      }
      v22 += 232; /*0x1008afac0*/
      --a3; /*0x1008afac7*/
    }
    while ( a3 ); /*0x1008afaca*/
    v131 = __src[2]; /*0x1008afb3d*/
    v130 = __src[1]; /*0x1008afb59*/
    v129 = __src[0]; /*0x1008afb75*/
    v132 = 0; /*0x1008afb7c*/
    v133 = 8; /*0x1008afb87*/
    v134 = 0; /*0x1008afb92*/
    v23 = 0; /*0x1008afb9d*/
    do /*0x1008b07d7*/
    {
      while ( 1 ) /*0x1008afbce*/
      {
        v121 = v23; /*0x1008afbce*/
        codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997( /*0x1008afbe0*/
          (unsigned __int8 *)__src,
          *(unsigned __int8 **)(v21 + 8),
          *(_QWORD *)(v21 + 16));
        if ( __src[0].i64[0] != 0x8000000000000000LL ) /*0x1008afbef*/
          break; /*0x1008afbef*/
        v21 += 232; /*0x1008afbb7*/
        v23 = v121 + 1; /*0x1008afbbe*/
        if ( v21 == v113 ) /*0x1008afbc8*/
          goto LABEL_90; /*0x1008afbc8*/
      }
      if ( __src[0].i64[0] ) /*0x1008afbf4*/
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0].i64[1], __src[0].i64[0], 1); /*0x1008afc02*/
      v24 = *(char **)(v21 + 8); /*0x1008afc07*/
      v25 = *(_QWORD *)(v21 + 16); /*0x1008afc0b*/
      *((_QWORD *)&v135[1] + 1) = 0x5BE0CD191F83D9ABLL; /*0x1008afc63*/
      *(_QWORD *)&v135[1] = 0x9B05688C510E527FLL; /*0x1008afc74*/
      *((_QWORD *)&v135[0] + 1) = 0xA54FF53A3C6EF372LL; /*0x1008afc85*/
      *(_QWORD *)&v135[0] = 0xBB67AE856A09E667LL; /*0x1008afc96*/
      memset(&v135[2], 0, 73); /*0x1008afc9d*/
      if ( v25 >= 0x40 ) /*0x1008afcac*/
      {
        *(_QWORD *)&v135[2] = v25 >> 6; /*0x1008afcb5*/
        sha2::sha256::compress256::hc74ebc2fd6208bb9(v135, v24, *(double *)a4.i64); /*0x1008afcc6*/
        v24 += v25 & 0x7FFFFFFFFFFFFFC0LL; /*0x1008afcd2*/
        v25 &= 0x3Fu; /*0x1008afcd5*/
      }
      memcpy((char *)&v135[2] + 8, v24, v25); /*0x1008afce5*/
      BYTE8(v135[6]) = v25; /*0x1008afcea*/
      qmemcpy(__src, v135, sizeof(__src)); /*0x1008afcff*/
      v26 = __src[6].u8[8]; /*0x1008afd02*/
      v27 = _byteswap_uint64((__src[2].i64[0] << 9) | (8 * (unsigned int)__src[6].u8[8])); /*0x1008afd1d*/
      __src[2].i8[__src[6].u8[8] + 8] = 0x80; /*0x1008afd20*/
      if ( (_DWORD)v26 == 63 /*0x1008afd51*/
        || (__bzero((char *)&__src[2].u64[1] + v26 + 1, v26 ^ 0x3F), ((unsigned int)v26 ^ 0x38) <= 7) )
      {
        sha2::sha256::compress256::hc74ebc2fd6208bb9(__src, &__src[2].u64[1], *(double *)a4.i64); /*0x1008afd62*/
        v118 = 0; /*0x1008afd75*/
        memset(v117, 0, sizeof(v117)); /*0x1008afd85*/
        v119 = 0; /*0x1008afd8d*/
        v120 = v27; /*0x1008afd98*/
        sha2::sha256::compress256::hc74ebc2fd6208bb9(__src, v117, 0.0); /*0x1008afdae*/
      }
      else
      {
        __src[6].i64[0] = v27; /*0x1008afdb5*/
        sha2::sha256::compress256::hc74ebc2fd6208bb9(__src, &__src[2].u64[1], *(double *)a4.i64); /*0x1008afdc8*/
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBDB0); /*0x1008afde7*/
      a4 = _mm_shuffle_epi8(_mm_load_si128(__src), si128); /*0x1008afdef*/
      v29 = _mm_shuffle_epi8(_mm_load_si128(&__src[1]), si128); /*0x1008afdf4*/
      v116[0] = a4; /*0x1008afdf9*/
      v116[1] = v29; /*0x1008afe01*/
      *(_QWORD *)&v135[0] = v116; /*0x1008afe10*/
      __src[0].i64[0] = (__int64)v135; /*0x1008afe1e*/
      __src[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008afe2c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &anon_10420c9971c21f44d230d15b39fb3fec_26, __src); /*0x1008afe44*/
      if ( v117[0] == (void *)0x8000000000000000LL ) /*0x1008afe50*/
      {
        *(_QWORD *)&v138 = 0; /*0x1008afe52*/
        *((_QWORD *)&v138 + 1) = 1; /*0x1008afe5a*/
        v139 = 0; /*0x1008afe62*/
      }
      else
      {
        v30 = v21; /*0x1008afe70*/
        *(void **)&v135[1] = v117[2]; /*0x1008afe7a*/
        v135[0] = *(_OWORD *)v117; /*0x1008afe96*/
        *(_QWORD *)&v138 = (char *)v116 + 1; /*0x1008afea4*/
        *(_QWORD *)v140 = &v138; /*0x1008afeac*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008afeb7*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008afec9*/
        v32 = (const void *)__src[0].i64[1]; /*0x1008afece*/
        v33 = __src[1].u64[0]; /*0x1008afed5*/
        v34 = *(_QWORD *)&v135[1]; /*0x1008afee3*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - *(_QWORD *)&v135[1] ) /*0x1008afef0*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b07fa*/
            v135,
            *(_QWORD *)&v135[1],
            __src[1].i64[0],
            1,
            1,
            v31);
          v34 = *(_QWORD *)&v135[1]; /*0x1008b07ff*/
        }
        v35 = *((_QWORD *)&v135[0] + 1); /*0x1008afef6*/
        memcpy((void *)(*((_QWORD *)&v135[0] + 1) + v34), v32, v33); /*0x1008aff08*/
        v36 = v33 + v34; /*0x1008aff0d*/
        *(_QWORD *)&v135[1] = v36; /*0x1008aff10*/
        if ( __src[0].i64[0] ) /*0x1008aff21*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, __src[0].i64[0], 1); /*0x1008aff2b*/
        *(_QWORD *)&v138 = (char *)v116 + 2; /*0x1008aff37*/
        *(_QWORD *)v140 = &v138; /*0x1008aff3f*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008aff4a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008aff60*/
        v38 = (const void *)__src[0].i64[1]; /*0x1008aff65*/
        v39 = __src[1].u64[0]; /*0x1008aff6c*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v36 ) /*0x1008aff80*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b0823*/
            v135,
            v36,
            __src[1].i64[0],
            1,
            1,
            v37);
          v35 = *((_QWORD *)&v135[0] + 1); /*0x1008b0828*/
          v36 = *(_QWORD *)&v135[1]; /*0x1008b082f*/
        }
        memcpy((void *)(v35 + v36), v38, v39); /*0x1008aff91*/
        v40 = v39 + v36; /*0x1008aff96*/
        *(_QWORD *)&v135[1] = v40; /*0x1008aff99*/
        if ( __src[0].i64[0] ) /*0x1008affaa*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, __src[0].i64[0], 1); /*0x1008affb4*/
        *(_QWORD *)&v138 = (char *)v116 + 3; /*0x1008affc0*/
        *(_QWORD *)v140 = &v138; /*0x1008affc8*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008affd3*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008affe9*/
        v42 = (const void *)__src[0].i64[1]; /*0x1008affee*/
        v43 = __src[1].u64[0]; /*0x1008afff5*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v40 ) /*0x1008b0009*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b0853*/
            v135,
            v40,
            __src[1].i64[0],
            1,
            1,
            v41);
          v35 = *((_QWORD *)&v135[0] + 1); /*0x1008b0858*/
          v40 = *(_QWORD *)&v135[1]; /*0x1008b085f*/
        }
        memcpy((void *)(v40 + v35), v42, v43); /*0x1008b001b*/
        v44 = v43 + v40; /*0x1008b0020*/
        *(_QWORD *)&v135[1] = v44; /*0x1008b0023*/
        if ( __src[0].i64[0] ) /*0x1008b0034*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, __src[0].i64[0], 1); /*0x1008b003e*/
        *(_QWORD *)&v138 = (char *)v116 + 4; /*0x1008b004a*/
        *(_QWORD *)v140 = &v138; /*0x1008b0052*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008b005d*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008b0073*/
        v46 = (const void *)__src[0].i64[1]; /*0x1008b0078*/
        v47 = __src[1].u64[0]; /*0x1008b007f*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v44 ) /*0x1008b0093*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b0883*/
            v135,
            v44,
            __src[1].i64[0],
            1,
            1,
            v45);
          v44 = *(_QWORD *)&v135[1]; /*0x1008b0888*/
        }
        v48 = *((_QWORD *)&v135[0] + 1); /*0x1008b0099*/
        memcpy((void *)(*((_QWORD *)&v135[0] + 1) + v44), v46, v47); /*0x1008b00ab*/
        v49 = v47 + v44; /*0x1008b00b0*/
        *(_QWORD *)&v135[1] = v49; /*0x1008b00b3*/
        if ( __src[0].i64[0] ) /*0x1008b00c4*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, __src[0].i64[0], 1); /*0x1008b00ce*/
        *(_QWORD *)&v138 = (char *)v116 + 5; /*0x1008b00da*/
        *(_QWORD *)v140 = &v138; /*0x1008b00e2*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008b00ed*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008b0103*/
        v51 = (const void *)__src[0].i64[1]; /*0x1008b0108*/
        v52 = __src[1].u64[0]; /*0x1008b010f*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v49 ) /*0x1008b0123*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b08ac*/
            v135,
            v49,
            __src[1].i64[0],
            1,
            1,
            v50);
          v48 = *((_QWORD *)&v135[0] + 1); /*0x1008b08b1*/
          v49 = *(_QWORD *)&v135[1]; /*0x1008b08b8*/
        }
        memcpy((void *)(v48 + v49), v51, v52); /*0x1008b0134*/
        v53 = v52 + v49; /*0x1008b0139*/
        *(_QWORD *)&v135[1] = v53; /*0x1008b013c*/
        if ( __src[0].i64[0] ) /*0x1008b014d*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, __src[0].i64[0], 1); /*0x1008b0157*/
        *(_QWORD *)&v138 = (char *)v116 + 6; /*0x1008b0163*/
        *(_QWORD *)v140 = &v138; /*0x1008b016b*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008b0176*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008b018c*/
        v55 = (const void *)__src[0].i64[1]; /*0x1008b0191*/
        v56 = __src[1].u64[0]; /*0x1008b0198*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v53 ) /*0x1008b01ac*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b08dc*/
            v135,
            v53,
            __src[1].i64[0],
            1,
            1,
            v54);
          v48 = *((_QWORD *)&v135[0] + 1); /*0x1008b08e1*/
          v53 = *(_QWORD *)&v135[1]; /*0x1008b08e8*/
        }
        memcpy((void *)(v53 + v48), v55, v56); /*0x1008b01be*/
        v57 = v56 + v53; /*0x1008b01c3*/
        *(_QWORD *)&v135[1] = v57; /*0x1008b01c6*/
        if ( __src[0].i64[0] ) /*0x1008b01d7*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, __src[0].i64[0], 1); /*0x1008b01e1*/
        *(_QWORD *)&v138 = (char *)v116 + 7; /*0x1008b01ed*/
        *(_QWORD *)v140 = &v138; /*0x1008b01f5*/
        *(_QWORD *)&v140[8] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hc784e5285b0b1adf; /*0x1008b0200*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &anon_10420c9971c21f44d230d15b39fb3fec_26, v140); /*0x1008b0216*/
        v59 = (const void *)__src[0].i64[1]; /*0x1008b021b*/
        v60 = __src[1].u64[0]; /*0x1008b0222*/
        if ( __src[1].i64[0] > *(_QWORD *)&v135[0] - v57 ) /*0x1008b0236*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008b090c*/
            v135,
            v57,
            __src[1].i64[0],
            1,
            1,
            v58);
          v57 = *(_QWORD *)&v135[1]; /*0x1008b0911*/
        }
        memcpy((void *)(v57 + *((_QWORD *)&v135[0] + 1)), v59, v60); /*0x1008b024c*/
        *(_QWORD *)&v135[1] = v60 + v57; /*0x1008b0254*/
        v21 = v30; /*0x1008b0265*/
        if ( __src[0].i64[0] ) /*0x1008b0268*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, __src[0].i64[0], 1); /*0x1008b0272*/
        v138 = v135[0]; /*0x1008b0285*/
        v139 = *(_QWORD *)&v135[1]; /*0x1008b0294*/
      }
      v136 = v21; /*0x1008b029f*/
      *(_QWORD *)&v135[0] = &v138; /*0x1008b02aa*/
      *((_QWORD *)&v135[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b02b8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C617D, v135); /*0x1008b02d0*/
      *(__m128i *)v140 = __src[0]; /*0x1008b02e7*/
      *(_QWORD *)&v140[16] = __src[1].i64[0]; /*0x1008b02f2*/
      if ( v130.i64[1] ) /*0x1008b02fe*/
      {
        v61 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v131, v140); /*0x1008b030f*/
        _RCX = v61 >> 57; /*0x1008b0317*/
        v63 = v129.i64[1]; /*0x1008b0322*/
        v64 = v129.i64[0]; /*0x1008b0322*/
        v65 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v61 >> 57), (__m128i)0LL); /*0x1008b0331*/
        v66 = v129.i64[0] - 24; /*0x1008b0336*/
        v67 = *(const void **)&v140[8]; /*0x1008b033b*/
        v68 = *(_QWORD *)&v140[16]; /*0x1008b033f*/
        for ( i = 0; ; i += 16LL ) /*0x1008b0343*/
        {
          v70 = v63 & v61; /*0x1008b0345*/
          v71 = _mm_loadu_si128((const __m128i *)(v64 + v70)); /*0x1008b0348*/
          a4 = _mm_cmpeq_epi8(v71, v65); /*0x1008b0352*/
          _EBX = _mm_movemask_epi8(a4); /*0x1008b0356*/
          if ( _EBX ) /*0x1008b035c*/
            break; /*0x1008b035c*/
LABEL_65:
          a4.i64[0] = -1; /*0x1008b03f0*/
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v71, (__m128i)-1LL)); /*0x1008b03f8*/
          if ( (_DWORD)_RCX ) /*0x1008b03fe*/
            goto LABEL_67; /*0x1008b03fe*/
          v61 = v70 + i + 16; /*0x1008b0400*/
        }
        v126 = v70; /*0x1008b0362*/
        v114 = v65; /*0x1008b0369*/
        v127 = v63; /*0x1008b0371*/
        v128 = i; /*0x1008b0378*/
        v115 = v71; /*0x1008b037f*/
        while ( 1 ) /*0x1008b0387*/
        {
          __asm { tzcnt ecx, ebx } /*0x1008b0387*/
          _RCX = -(__int64)(v63 & (v70 + _RCX)); /*0x1008b0391*/
          if ( v68 == *(_QWORD *)(v66 + 24 * _RCX + 16) && !memcmp(v67, *(const void **)(v66 + 24 * _RCX + 8), v68) ) /*0x1008b03ad*/
            break; /*0x1008b03ad*/
          v73 = _EBX - 1; /*0x1008b03ba*/
          LOWORD(v73) = _EBX & (_EBX - 1); /*0x1008b03bd*/
          v74 = (_WORD)v73 == 0; /*0x1008b03bd*/
          _EBX = v73; /*0x1008b03c0*/
          v70 = v126; /*0x1008b03c2*/
          v65 = _mm_load_si128(&v114); /*0x1008b03c9*/
          v63 = v127; /*0x1008b03d1*/
          i = v128; /*0x1008b03d8*/
          v71 = _mm_load_si128(&v115); /*0x1008b03df*/
          if ( v74 ) /*0x1008b03e7*/
            goto LABEL_65; /*0x1008b03e7*/
        }
        for ( j = 1; ; j = v78 ) /*0x1008b043d*/
        {
          v76 = j; /*0x1008b0449*/
          v123 = j; /*0x1008b044b*/
          __src[0].i64[0] = (__int64)v140; /*0x1008b0455*/
          __src[0].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b0463*/
          __src[1].i64[0] = (__int64)&v123; /*0x1008b0471*/
          __src[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1008b047f*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_1017C6194, __src); /*0x1008b0497*/
          *(_OWORD *)v117 = v135[0]; /*0x1008b04aa*/
          v117[2] = *(void **)&v135[1]; /*0x1008b04bf*/
          if ( !v130.i64[1] ) /*0x1008b04ce*/
            break; /*0x1008b04ce*/
          v77 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v131, v117); /*0x1008b04e2*/
          v78 = v76 + 1; /*0x1008b04e7*/
          _RCX = v77 >> 57; /*0x1008b04ec*/
          v80 = (unsigned __int128)v129; /*0x1008b04f7*/
          v81 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v77 >> 57), (__m128i)0LL); /*0x1008b0506*/
          v82 = v129.i64[0] - 24; /*0x1008b050b*/
          v83 = *(_OWORD *)&v117[1]; /*0x1008b0516*/
          for ( k = 0; ; k += 16 ) /*0x1008b051d*/
          {
            v85 = *((_QWORD *)&v80 + 1) & v77; /*0x1008b0520*/
            v86 = _mm_loadu_si128((const __m128i *)(v80 + v85)); /*0x1008b0523*/
            a4 = _mm_cmpeq_epi8(v86, v81); /*0x1008b052d*/
            _R12D = _mm_movemask_epi8(a4); /*0x1008b0531*/
            if ( _R12D ) /*0x1008b0539*/
              break; /*0x1008b0539*/
LABEL_76:
            a4.i64[0] = -1; /*0x1008b05e0*/
            _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v86, (__m128i)-1LL)); /*0x1008b05e8*/
            if ( (_DWORD)_RCX ) /*0x1008b05f5*/
              goto LABEL_81; /*0x1008b05f5*/
            v77 = v85 + k + 16; /*0x1008b05f7*/
          }
          v126 = v85; /*0x1008b053f*/
          v114 = v81; /*0x1008b0546*/
          v127 = *((_QWORD *)&v80 + 1); /*0x1008b054e*/
          v128 = v80; /*0x1008b0555*/
          v115.i64[0] = k; /*0x1008b055c*/
          v108 = v86; /*0x1008b0563*/
          while ( 1 ) /*0x1008b056b*/
          {
            __asm { tzcnt ecx, r12d } /*0x1008b056b*/
            _RCX = -(__int64)(*((_QWORD *)&v80 + 1) & (v85 + _RCX)); /*0x1008b0576*/
            if ( *((_QWORD *)&v83 + 1) == *(_QWORD *)(v82 + 24 * _RCX + 16) /*0x1008b0592*/
              && !memcmp((const void *)v83, *(const void **)(v82 + 24 * _RCX + 8), *((size_t *)&v83 + 1)) )
            {
              break; /*0x1008b0592*/
            }
            v88 = _R12D - 1; /*0x1008b059b*/
            LOWORD(v88) = _R12D & (_R12D - 1); /*0x1008b05a0*/
            v74 = (_WORD)v88 == 0; /*0x1008b05a0*/
            _R12D = v88; /*0x1008b05a4*/
            v85 = v126; /*0x1008b05a7*/
            v81 = _mm_load_si128(&v114); /*0x1008b05ae*/
            k = v115.i64[0]; /*0x1008b05c4*/
            v86 = _mm_load_si128(&v108); /*0x1008b05cb*/
            v80 = __PAIR128__(v127, v128); /*0x1008b05d3*/
            if ( v74 ) /*0x1008b05d3*/
              goto LABEL_76; /*0x1008b05d3*/
          }
          if ( v117[0] ) /*0x1008b061a*/
            *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v117[0], 1); /*0x1008b0624*/
        }
LABEL_81:
        v125 = *(__m128i *)&v117[1]; /*0x1008b0637*/
        v124 = v117[0]; /*0x1008b065a*/
        if ( *(_QWORD *)v140 ) /*0x1008b0668*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v140[8], *(_QWORD *)v140, 1); /*0x1008b0673*/
      }
      else
      {
LABEL_67:
        v125 = *(__m128i *)&v140[8]; /*0x1008b0410*/
        v124 = *(void **)v140; /*0x1008b042a*/
      }
      v89 = v136; /*0x1008b067f*/
      v90 = v121; /*0x1008b0686*/
      if ( (_QWORD)v138 ) /*0x1008b068d*/
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v138 + 1), v138, 1); /*0x1008b0698*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v124); /*0x1008b06a7*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v129, __src); /*0x1008b06c0*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v135, v89); /*0x1008b06cf*/
      __src[2] = v125; /*0x1008b06f3*/
      __src[1].i64[1] = (__int64)v124; /*0x1008b06f7*/
      __src[3].i64[0] = v90; /*0x1008b06fb*/
      __src[0] = (__m128i)v135[0]; /*0x1008b0710*/
      __src[1].i64[0] = *(_QWORD *)&v135[1]; /*0x1008b0725*/
      __src[3].i8[8] = 0; /*0x1008b072c*/
      v91 = v134; /*0x1008b0733*/
      if ( v134 == v132 ) /*0x1008b0741*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9bb5ea9ba5fa07e7(&v132); /*0x1008b074a*/
      v92 = v133; /*0x1008b074f*/
      v93 = v91 << 6; /*0x1008b0759*/
      *(__m128i *)(v133 + v93 + 48) = __src[3]; /*0x1008b0770*/
      *(__m128i *)(v92 + v93 + 32) = __src[2]; /*0x1008b0788*/
      *(__m128i *)(v92 + v93 + 16) = __src[1]; /*0x1008b07a0*/
      *(__m128i *)(v92 + v93) = __src[0]; /*0x1008b07b8*/
      v134 = v91 + 1; /*0x1008b07bf*/
      v21 = v89 + 232; /*0x1008b07c6*/
      v23 = v90 + 1; /*0x1008b07cd*/
    }
    while ( v21 != v113 ); /*0x1008b07d7*/
  }
  else
  {
    v131 = __src[2]; /*0x1008b0932*/
    v130 = __src[1]; /*0x1008b094e*/
    v129 = __src[0]; /*0x1008b096a*/
    v132 = 0; /*0x1008b0971*/
    v133 = 8; /*0x1008b097c*/
    v134 = 0; /*0x1008b0987*/
  }
LABEL_90:
  v94 = v122; /*0x1008b0992*/
  v122[3] = v134; /*0x1008b09a0*/
  _RAX = v132; /*0x1008b09a4*/
  v94[2] = v133; /*0x1008b09b2*/
  v94[1] = _RAX; /*0x1008b09b6*/
  *v94 = 11; /*0x1008b09ba*/
  v96 = v129.i64[1]; /*0x1008b09c1*/
  if ( v129.i64[1] ) /*0x1008b09cb*/
  {
    v97 = v130.i64[1]; /*0x1008b09d1*/
    if ( v130.i64[1] ) /*0x1008b09db*/
    {
      v98 = v129.i64[0]; /*0x1008b09e1*/
      a4 = _mm_load_si128((const __m128i *)v129.i64[0]); /*0x1008b09e8*/
      _R13D = ~_mm_movemask_epi8(a4); /*0x1008b09f2*/
      v100 = (const __m128i *)(v129.i64[0] + 16); /*0x1008b09f5*/
      do /*0x1008b0a10*/
      {
        if ( !(_WORD)_R13D ) /*0x1008b0a16*/
        {
          do /*0x1008b0a3d*/
          {
            a4 = _mm_load_si128(v100); /*0x1008b0a20*/
            v101 = _mm_movemask_epi8(a4); /*0x1008b0a26*/
            v98 -= 384; /*0x1008b0a2b*/
            ++v100; /*0x1008b0a32*/
          }
          while ( v101 == 0xFFFF ); /*0x1008b0a3d*/
          _R13D = ~v101; /*0x1008b0a3f*/
        }
        __asm { tzcnt eax, r13d } /*0x1008b0a42*/
        v102 = -3 * _RAX; /*0x1008b0a4a*/
        v103 = *(_QWORD *)(v98 + 8 * v102 - 24); /*0x1008b0a4e*/
        if ( v103 ) /*0x1008b0a56*/
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v98 + 8 * v102 - 16), v103, 1); /*0x1008b0a65*/
        --v97; /*0x1008b0a00*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1008b0a07*/
        _R13D &= _R13D - 1; /*0x1008b0a0a*/
      }
      while ( v97 ); /*0x1008b0a10*/
    }
    v104 = (24 * v96 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008b0a78*/
    v105 = v104 + v96 + 17; /*0x1008b0a7f*/
    if ( v105 ) /*0x1008b0a83*/
      *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129.i64[0] - v104, v105, 16); /*0x1008b0a97*/
  }
LABEL_101:
  if ( *((_QWORD *)&v110[0] + 1) && 17LL * *((_QWORD *)&v110[0] + 1) != -33 ) /*0x1008b0ab6*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1008b0acb*/
                          *(_QWORD *)&v110[0] - 16LL * *((_QWORD *)&v110[0] + 1) - 16,
                          17LL * *((_QWORD *)&v110[0] + 1) + 33,
                          16);
  return *(double *)a4.i64; /*0x1008b0ad0*/
}