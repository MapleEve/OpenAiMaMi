// __ZN13codexmate_lib4core10api_client23detect_api_proxy_config @ 0x1007b8410 | 基线 same-set
__int64 __fastcall codexmate_lib::core::api_client::detect_api_proxy_config::h9f8baf0757514695(
        __int64 a1,
        __int64 a2,
        __m128i si128,
        double a4)
{
  __int64 v4; // r9
  const __m128i *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  const __m128i *v11; // rbx
  const __m128i *v12; // r12
  const __m128i **v13; // rax
  const __m128i **v14; // r14
  __int64 i; // r13
  const __m128i *v16; // rbx
  unsigned __int64 v17; // rsi
  const __m128i *v18; // r15
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // r14
  void *v22; // rbx
  __int64 v23; // r12
  size_t v24; // r13
  __int64 *v25; // rdi
  __int64 v26; // r9
  __int64 v27; // r12
  signed __int64 v28; // rbx
  const void **v29; // r15
  __int64 v30; // r13
  const void *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r14
  const __m128i *v34; // rax
  __int64 v35; // rdi
  const __m128i *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  const __m128i *v41; // rax
  const __m128i *v42; // rdx
  const __m128i *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r12
  char *v47; // rbx
  __int64 v48; // rax
  const __m128i *v49; // r13
  unsigned __int64 v50; // rbx
  __int64 *v51; // r14
  __int64 v52; // rsi
  __int64 v54; // r13
  const __m128i *v55; // r14
  const __m128i *v56; // rbx
  const __m128i *v57; // r15
  const __m128i *v58; // r14
  const __m128i *v59; // r12
  const __m128i *v61; // r13
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  __int8 *v66; // r15
  char *v67; // r15
  const __m128i *v68; // r15
  unsigned __int64 v69; // r12
  const __m128i *v70; // r13
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rcx
  const __m128i *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  bool v77; // zf
  char v78; // bl
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r14
  __int16 v83; // dx
  char v84; // al
  const __m128i *v85; // r14
  char v86; // bl
  __int64 v87; // rbx
  __int64 v88; // r14
  __int64 v89; // rsi
  const __m128i *v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rsi
  __int64 v93; // rsi
  unsigned __int64 v94; // rbx
  __int64 *v95; // r15
  __int64 v96; // rax
  __int64 v97; // r14
  void *v98; // rax
  void *v99; // rbx
  __int64 v101; // rax
  const __m128i *v102; // rcx
  const __m128i *v103; // r14
  unsigned __int64 v104; // rbx
  __int64 v105; // rsi
  const __m128i *v106; // [rsp+8h] [rbp-1D8h]
  const __m128i *v107; // [rsp+10h] [rbp-1D0h]
  __int64 v108; // [rsp+18h] [rbp-1C8h]
  const __m128i *v109; // [rsp+20h] [rbp-1C0h]
  const __m128i *v112; // [rsp+40h] [rbp-1A0h]
  const __m128i *v113[14]; // [rsp+48h] [rbp-198h] BYREF
  _QWORD v114[14]; // [rsp+B8h] [rbp-128h] BYREF
  const __m128i *v115; // [rsp+128h] [rbp-B8h] BYREF
  __int64 *v116; // [rsp+130h] [rbp-B0h]
  const __m128i *v117; // [rsp+138h] [rbp-A8h]
  const __m128i *v118; // [rsp+140h] [rbp-A0h]
  __int64 v119; // [rsp+148h] [rbp-98h]
  __int64 v120; // [rsp+150h] [rbp-90h]
  const __m128i *v121; // [rsp+158h] [rbp-88h]
  __int64 v122; // [rsp+160h] [rbp-80h] BYREF
  __int64 v123; // [rsp+168h] [rbp-78h]
  const __m128i *v124; // [rsp+170h] [rbp-70h]
  __int64 v125; // [rsp+178h] [rbp-68h] BYREF
  __int64 v126; // [rsp+180h] [rbp-60h]
  __int64 v127; // [rsp+188h] [rbp-58h]
  __int64 v128; // [rsp+190h] [rbp-50h] BYREF
  __int64 v129; // [rsp+198h] [rbp-48h]
  __int64 v130; // [rsp+1A0h] [rbp-40h]
  const __m128i *v131; // [rsp+1A8h] [rbp-38h]
  const __m128i *v132; // [rsp+1B0h] [rbp-30h]

  v125 = 0; /*0x1007b8432*/
  v126 = 8; /*0x1007b843a*/
  v127 = 0; /*0x1007b8442*/
  v114[0] = 0; /*0x1007b844a*/
  v114[1] = 6; /*0x1007b8455*/
  v114[2] = &unk_101673695; /*0x1007b8467*/
  v114[3] = 11; /*0x1007b846e*/
  v114[4] = &unk_1016736A0; /*0x1007b8480*/
  v114[5] = 11; /*0x1007b8487*/
  v114[6] = &unk_1016736AB; /*0x1007b8499*/
  v114[7] = 10; /*0x1007b84a0*/
  v114[8] = &unk_1016736B5; /*0x1007b84b2*/
  v114[9] = 10; /*0x1007b84b9*/
  v114[10] = &unk_1016736BF; /*0x1007b84cb*/
  v114[11] = 9; /*0x1007b84d2*/
  v114[12] = &unk_1016736C8; /*0x1007b84e4*/
  v114[13] = 9; /*0x1007b84eb*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h31ef41919d31e314( /*0x1007b850b*/
    v113,
    v114,
    &v115);
  v5 = v113[0]; /*0x1007b8510*/
  if ( __OFSUB__(-(__int64)v113[0]->i64, 1) ) /*0x1007b851a*/
  {
    v6 = 8; /*0x1007b851f*/
    v7 = 0; /*0x1007b8524*/
    v8 = 0; /*0x1007b8526*/
    v9 = 0; /*0x1007b8529*/
    v10 = 0; /*0x1007b852c*/
  }
  else
  {
    v11 = v113[1]; /*0x1007b8534*/
    v12 = v113[2]; /*0x1007b853b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v113, v114); /*0x1007b8542*/
    v13 = (const __m128i **)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(96, 8); /*0x1007b8551*/
    if ( !v13 ) /*0x1007b8559*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 96); /*0x1007b93f1*/
    v14 = v13; /*0x1007b855f*/
    *v13 = v5; /*0x1007b8562*/
    v13[1] = v11; /*0x1007b8565*/
    v13[2] = v12; /*0x1007b8569*/
    v128 = 4; /*0x1007b856d*/
    v129 = (__int64)v13; /*0x1007b8575*/
    v130 = 1; /*0x1007b8579*/
    qmemcpy(v113, v114, sizeof(v113)); /*0x1007b8594*/
    v9 = 1; /*0x1007b8597*/
    for ( i = 5; ; i += 3 ) /*0x1007b859d*/
    {
      _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h31ef41919d31e314( /*0x1007b85e5*/
        &v115,
        v113,
        v114);
      v16 = v115; /*0x1007b85ea*/
      if ( v115 == (const __m128i *)0x8000000000000000LL ) /*0x1007b85fe*/
        break; /*0x1007b85fe*/
      v132 = (const __m128i *)v116; /*0x1007b8607*/
      v17 = v9; /*0x1007b860b*/
      v18 = v117; /*0x1007b860e*/
      if ( v17 == v128 ) /*0x1007b8619*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007b8632*/
          &v128,
          v17,
          1,
          8,
          24,
          v4);
        v14 = (const __m128i **)v129; /*0x1007b8637*/
      }
      v14[i - 2] = v16; /*0x1007b85b0*/
      v14[i - 1] = v132; /*0x1007b85b9*/
      v14[i] = v18; /*0x1007b85be*/
      v130 = v17 + 1; /*0x1007b85c5*/
      v9 = v17 + 1; /*0x1007b85cd*/
    }
    v10 = v128; /*0x1007b8643*/
    v6 = v129; /*0x1007b8647*/
    v7 = v125; /*0x1007b864b*/
    v8 = v127; /*0x1007b864f*/
  }
  v113[0] = (const __m128i *)v6; /*0x1007b8663*/
  v113[2] = (const __m128i *)v10; /*0x1007b866a*/
  v113[1] = (const __m128i *)v6; /*0x1007b8671*/
  v113[3] = (const __m128i *)(v6 + 24 * v9); /*0x1007b8678*/
  if ( v9 > v7 - v8 ) /*0x1007b8685*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v125, v8, v9, 8, 24, v4); /*0x1007b935f*/
    v8 = v127; /*0x1007b9364*/
  }
  v132 = (const __m128i *)v126; /*0x1007b8693*/
  memcpy((void *)(v126 + 24 * v8), (const void *)v6, 24 * v9); /*0x1007b86a1*/
  v19 = v8 + v9; /*0x1007b86a6*/
  v127 = v19; /*0x1007b86a9*/
  if ( v10 ) /*0x1007b86b0*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v10, 8); /*0x1007b86c2*/
  codexmate_lib::platform::proxy::detect_system_proxy_candidates::h3bbf92084c103f1c((char *)v114); /*0x1007b86ce*/
  v21 = v114[0]; /*0x1007b86d3*/
  v22 = (void *)v114[1]; /*0x1007b86da*/
  v23 = v114[2]; /*0x1007b86e1*/
  v24 = 24LL * v114[2]; /*0x1007b86f0*/
  v113[0] = (const __m128i *)v114[1]; /*0x1007b86f8*/
  v113[2] = (const __m128i *)v114[0]; /*0x1007b86ff*/
  v113[1] = (const __m128i *)v114[1]; /*0x1007b8706*/
  v113[3] = (const __m128i *)(v114[1] + 24LL * v114[2]); /*0x1007b870d*/
  if ( v114[2] > (unsigned __int64)(v125 - v19) ) /*0x1007b871e*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007b9382*/
      &v125,
      v19,
      v114[2],
      8,
      24,
      v20);
    v132 = (const __m128i *)v126; /*0x1007b938b*/
    v19 = v127; /*0x1007b938f*/
  }
  v25 = &v132->i64[3 * v19]; /*0x1007b872c*/
  memcpy(v25, v22, v24); /*0x1007b8736*/
  v27 = v19 + v23; /*0x1007b873b*/
  v127 = v27; /*0x1007b873e*/
  if ( v21 ) /*0x1007b8745*/
  {
    v25 = (__int64 *)v22; /*0x1007b8754*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24 * v21, 8); /*0x1007b8757*/
  }
  if ( (unsigned __int64)(v125 - v27) <= 0x13 ) /*0x1007b8767*/
  {
    v25 = &v125; /*0x1007b9398*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v125, v27, 20, 8, 24, v26); /*0x1007b93af*/
    v132 = (const __m128i *)v126; /*0x1007b93b8*/
    v27 = v127; /*0x1007b93bc*/
  }
  v132 = (const __m128i *)((char *)v132 + 24 * v27); /*0x1007b8779*/
  v28 = 21; /*0x1007b877d*/
  v29 = (const void **)&off_10196B120; /*0x1007b8782*/
  v30 = 2; /*0x1007b8789*/
  while ( 1 ) /*0x1007b878f*/
  {
    v31 = *v29; /*0x1007b878f*/
    if ( v28 ) /*0x1007b8795*/
    {
      v131 = (const __m128i *)*v29; /*0x1007b8797*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v31); /*0x1007b879b*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x1007b87a8*/
      if ( !v32 ) /*0x1007b87b0*/
      {
        v33 = v28; /*0x1007b93da*/
        v35 = 1; /*0x1007b93dd*/
LABEL_28:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v35, v33); /*0x1007b8802*/
      }
      v33 = v32; /*0x1007b87b6*/
      v31 = v131; /*0x1007b87b9*/
    }
    else
    {
      v33 = 1; /*0x1007b87c0*/
    }
    v25 = (__int64 *)v33; /*0x1007b87c6*/
    memcpy((void *)v33, v31, v28); /*0x1007b87cc*/
    v34 = v132; /*0x1007b87d1*/
    v132[-1].i64[v30] = v28; /*0x1007b87d5*/
    v34->i64[v30 - 1] = v33; /*0x1007b87da*/
    v34->i64[v30] = v28; /*0x1007b87df*/
    if ( v30 == 59 ) /*0x1007b87ea*/
      break; /*0x1007b87ea*/
    v28 = (signed __int64)v29[3]; /*0x1007b87ec*/
    v29 += 2; /*0x1007b87f0*/
    v30 += 3; /*0x1007b87f4*/
    ++v27; /*0x1007b87f8*/
    if ( v28 < 0 ) /*0x1007b87fe*/
    {
      v35 = 0; /*0x1007b8800*/
      goto LABEL_28; /*0x1007b8800*/
    }
  }
  v127 = v27 + 1; /*0x1007b8812*/
  v109 = (const __m128i *)v126; /*0x1007b8825*/
  v108 = v125; /*0x1007b882c*/
  v36 = (const __m128i *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x1007b8833*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1007b883a*/
  v40 = v37; /*0x1007b883c*/
  if ( *(_BYTE *)(v37 + 16) == 1 ) /*0x1007b8843*/
  {
    v41 = *(const __m128i **)v37; /*0x1007b8849*/
    v42 = *(const __m128i **)(v40 + 8); /*0x1007b884c*/
  }
  else
  {
    v41 = (const __m128i *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1007b93c5*/
                             &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                             v31,
                             v38,
                             v39);
    *(_QWORD *)v40 = v41; /*0x1007b93ca*/
    *(_QWORD *)(v40 + 8) = v42; /*0x1007b93cd*/
    *(_BYTE *)(v40 + 16) = 1; /*0x1007b93d1*/
  }
  *(_QWORD *)v40 = (char *)v41->i64 + 1; /*0x1007b8854*/
  memset(&v113[1], 0, 24); /*0x1007b887a*/
  v113[0] = (const __m128i *)anon_3ce6d1417794db0febde534c64082f90_12; /*0x1007b8888*/
  v113[4] = v41; /*0x1007b888f*/
  v113[5] = v42; /*0x1007b8896*/
  v122 = 0; /*0x1007b889d*/
  v123 = 8; /*0x1007b88a5*/
  v124 = nullptr; /*0x1007b88ad*/
  v43 = v109; /*0x1007b88bc*/
  v114[0] = v109; /*0x1007b88d2*/
  v119 = v108; /*0x1007b88d9*/
  v114[2] = v108; /*0x1007b88e0*/
  v132 = (const __m128i *)((char *)v109 + 24 * v27 + 24); /*0x1007b88e7*/
  v114[3] = v132; /*0x1007b88eb*/
  v121 = v109; /*0x1007b88f2*/
  if ( v27 != -1 ) /*0x1007b88fc*/
  {
    v43 = (const __m128i *)((char *)v121 + 24); /*0x1007b890d*/
    while ( 1 ) /*0x1007b8959*/
    {
      v46 = v43[-2].i64[1]; /*0x1007b8959*/
      if ( v46 == 0x8000000000000000LL ) /*0x1007b896a*/
        break; /*0x1007b896a*/
      v47 = &v43[-2].i8[8]; /*0x1007b896c*/
      v128 = v43[-2].i64[1]; /*0x1007b8970*/
      v48 = v43[-1].i64[0]; /*0x1007b8974*/
      v130 = v43[-1].i64[1]; /*0x1007b897c*/
      v129 = v48; /*0x1007b8980*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v115, &v128); /*0x1007b898b*/
      v36 = (const __m128i *)v113; /*0x1007b8990*/
      if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v113, &v115) ) /*0x1007b899a*/
      {
        if ( v46 ) /*0x1007b89a6*/
        {
          v36 = (const __m128i *)v129; /*0x1007b89a8*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v46, 1); /*0x1007b89b4*/
        }
      }
      else
      {
        v131 = (const __m128i *)v129; /*0x1007b89bf*/
        v120 = v130; /*0x1007b89c7*/
        v49 = v124; /*0x1007b89ce*/
        if ( v124 == (const __m128i *)v122 ) /*0x1007b89d6*/
        {
          v36 = (const __m128i *)&v122; /*0x1007b89dc*/
          *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v122); /*0x1007b89e0*/
        }
        v44 = v123; /*0x1007b891a*/
        v45 = 3LL * (_QWORD)v49; /*0x1007b891e*/
        *(_QWORD *)(v123 + 8 * v45) = v46; /*0x1007b8923*/
        *(_QWORD *)(v44 + 8 * v45 + 8) = v131; /*0x1007b892b*/
        *(_QWORD *)(v44 + 8 * v45 + 16) = v120; /*0x1007b8937*/
        v124 = (const __m128i *)&v49->i8[1]; /*0x1007b893f*/
      }
      v43 = (const __m128i *)((char *)v43 + 24); /*0x1007b8947*/
      if ( v47 + 24 == (char *)v132 ) /*0x1007b8953*/
        goto LABEL_46; /*0x1007b8953*/
    }
  }
  v114[1] = v43; /*0x1007b8a01*/
  if ( v132 != v43 ) /*0x1007b8a0b*/
  {
    v50 = ((char *)v132 - (char *)v43) / 0x18uLL; /*0x1007b8a10*/
    v51 = &v43->i64[1]; /*0x1007b8a14*/
    do /*0x1007b8a27*/
    {
      v52 = *(v51 - 1); /*0x1007b8a29*/
      if ( v52 ) /*0x1007b8a30*/
      {
        v36 = (const __m128i *)*v51; /*0x1007b8a32*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v51, v52, 1); /*0x1007b8a3a*/
      }
      v51 += 3; /*0x1007b8a20*/
      --v50; /*0x1007b8a24*/
    }
    while ( v50 ); /*0x1007b8a27*/
  }
LABEL_46:
  HIDWORD(_RAX) = HIDWORD(v119); /*0x1007b8a41*/
  if ( v119 ) /*0x1007b8a4b*/
  {
    v36 = v121; /*0x1007b8a5a*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, 24 * v119, 8); /*0x1007b8a61*/
  }
  v54 = v122; /*0x1007b8a66*/
  v55 = (const __m128i *)v123; /*0x1007b8a6a*/
  v56 = v124; /*0x1007b8a6e*/
  v57 = v113[1]; /*0x1007b8a72*/
  v131 = (const __m128i *)v123; /*0x1007b8a7c*/
  v120 = v122; /*0x1007b8a80*/
  if ( v113[1] ) /*0x1007b8a87*/
  {
    v132 = v124; /*0x1007b8a8d*/
    v58 = v113[3]; /*0x1007b8a91*/
    if ( v113[3] ) /*0x1007b8a9b*/
    {
      v59 = v113[0]; /*0x1007b8aa1*/
      si128 = _mm_load_si128(v113[0]); /*0x1007b8aa8*/
      _EBX = ~_mm_movemask_epi8(si128); /*0x1007b8ab2*/
      v61 = v113[0] + 1; /*0x1007b8ab4*/
      do /*0x1007b8acd*/
      {
        if ( !(_WORD)_EBX ) /*0x1007b8ad2*/
        {
          do /*0x1007b8afb*/
          {
            si128 = _mm_load_si128(v61); /*0x1007b8ae0*/
            v62 = _mm_movemask_epi8(si128); /*0x1007b8ae6*/
            v59 -= 24; /*0x1007b8aea*/
            ++v61; /*0x1007b8af1*/
          }
          while ( v62 == 0xFFFF ); /*0x1007b8afb*/
          _EBX = ~v62; /*0x1007b8afd*/
        }
        __asm { tzcnt eax, ebx } /*0x1007b8aff*/
        v63 = -3 * _RAX; /*0x1007b8b06*/
        v64 = *((_QWORD *)&v59[-1] + v63 - 1); /*0x1007b8b0a*/
        if ( v64 ) /*0x1007b8b12*/
        {
          v36 = (const __m128i *)v59[-1].i64[v63]; /*0x1007b8b18*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v64, 1); /*0x1007b8b21*/
        }
        v58 = (const __m128i *)((char *)v58 - 1); /*0x1007b8ac0*/
        _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1007b8ac6*/
        _EBX &= _EBX - 1; /*0x1007b8ac8*/
      }
      while ( v58 ); /*0x1007b8acd*/
    }
    v65 = (24LL * (_QWORD)v57 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1007b8b34*/
    v66 = &v57->i8[v65]; /*0x1007b8b38*/
    v77 = v66 + 17 == nullptr; /*0x1007b8b3b*/
    v67 = v66 + 17; /*0x1007b8b3b*/
    v55 = v131; /*0x1007b8b3f*/
    v54 = v120; /*0x1007b8b43*/
    v56 = v132; /*0x1007b8b4a*/
    if ( !v77 ) /*0x1007b8b4e*/
    {
      v36 = (const __m128i *)((char *)v113[0] - v65); /*0x1007b8b57*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v113[0] - v65, v67, 16); /*0x1007b8b62*/
    }
  }
  v115 = v55; /*0x1007b8b77*/
  v116 = (__int64 *)v55; /*0x1007b8b7e*/
  v117 = (const __m128i *)v54; /*0x1007b8b85*/
  v132 = (const __m128i *)((char *)v55 + 24 * (_QWORD)v56); /*0x1007b8b8c*/
  v118 = v132; /*0x1007b8b90*/
  v68 = v55; /*0x1007b8b97*/
  if ( v56 ) /*0x1007b8b9d*/
  {
    v69 = 24LL * (_QWORD)v56 - 24; /*0x1007b8ba3*/
    v70 = v55 + 2; /*0x1007b8ba7*/
    v68 = v55; /*0x1007b8bb2*/
    v71 = a2; /*0x1007b8bb5*/
    while ( 1 ) /*0x1007b8bd2*/
    {
      v72 = v68->i64[0]; /*0x1007b8bd2*/
      v73 = v68->i64[1]; /*0x1007b8bd5*/
      v74 = (const __m128i *)v68[1].i64[0]; /*0x1007b8bd9*/
      v68 = (const __m128i *)((char *)v68 + 24); /*0x1007b8bdd*/
      if ( v72 == 0x8000000000000000LL ) /*0x1007b8bfc*/
      {
        v55 = v131; /*0x1007b9108*/
        v54 = v120; /*0x1007b910c*/
        break; /*0x1007b910c*/
      }
      v122 = v72; /*0x1007b8c02*/
      v124 = v74; /*0x1007b8c18*/
      v123 = v73; /*0x1007b8c1c*/
      v114[4] = 0; /*0x1007b8c27*/
      v114[0] = 0; /*0x1007b8c32*/
      v114[2] = 0; /*0x1007b8c3d*/
      url::ParseOptions::parse::h7da66aa6bebaf5b6(v113, v114, v73, v74); /*0x1007b8c52*/
      if ( v113[0] == (const __m128i *)0x8000000000000000LL ) /*0x1007b8c68*/
        goto LABEL_115; /*0x1007b8c68*/
      qmemcpy(v114, v113, 0x58u); /*0x1007b8c80*/
      v75 = url::Url::host_str::h951633b861c322f2(v114); /*0x1007b8c86*/
      if ( !v75 ) /*0x1007b8c8e*/
        goto LABEL_69; /*0x1007b8c8e*/
      if ( v76 == 3 ) /*0x1007b8c94*/
      {
        v77 = (*(_WORD *)v75 ^ 0x3A3A | *(unsigned __int8 *)(v75 + 2) ^ 0x31) == 0; /*0x1007b8cfa*/
LABEL_72:
        v78 = v77; /*0x1007b8cfd*/
        v79 = v114[0]; /*0x1007b8d00*/
        if ( !v114[0] ) /*0x1007b8d0a*/
          goto LABEL_74; /*0x1007b8d0a*/
LABEL_73:
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114[1], v79, 1); /*0x1007b8d0c*/
        goto LABEL_74; /*0x1007b8d18*/
      }
      if ( v76 == 9 ) /*0x1007b8c9a*/
      {
        if ( *(_QWORD *)v75 ^ 0x2E302E302E373231LL | *(unsigned __int8 *)(v75 + 8) ^ 0x31LL ) /*0x1007b8cb4*/
        {
          v77 = (*(_QWORD *)v75 ^ 0x736F686C61636F6CLL | *(unsigned __int8 *)(v75 + 8) ^ 0x74LL) == 0; /*0x1007b8cd5*/
          goto LABEL_72; /*0x1007b8cd8*/
        }
        v78 = 1; /*0x1007b8dbd*/
        v79 = v114[0]; /*0x1007b8dbf*/
        if ( v114[0] ) /*0x1007b8dc9*/
          goto LABEL_73; /*0x1007b8dc9*/
      }
      else
      {
LABEL_69:
        v78 = 0; /*0x1007b8cda*/
        v79 = v114[0]; /*0x1007b8cdc*/
        if ( v114[0] ) /*0x1007b8ce6*/
          goto LABEL_73; /*0x1007b8ce6*/
      }
LABEL_74:
      if ( v78 ) /*0x1007b8d26*/
      {
        v114[4] = 0; /*0x1007b8d34*/
        v114[0] = 0; /*0x1007b8d3f*/
        v114[2] = 0; /*0x1007b8d4a*/
        v36 = (const __m128i *)v113; /*0x1007b8d55*/
        url::ParseOptions::parse::h7da66aa6bebaf5b6(v113, v114, v123, v124); /*0x1007b8d5f*/
        if ( v113[0] == (const __m128i *)0x8000000000000000LL ) /*0x1007b8d75*/
          goto LABEL_122; /*0x1007b8d75*/
        qmemcpy(v114, v113, 0x58u); /*0x1007b8d8d*/
        v36 = (const __m128i *)v114; /*0x1007b8d90*/
        v81 = url::Url::host_str::h951633b861c322f2(v114); /*0x1007b8d98*/
        if ( !v81 ) /*0x1007b8d9e*/
          goto LABEL_97; /*0x1007b8d9e*/
        v82 = v80; /*0x1007b8da4*/
        if ( LOBYTE(v114[5]) == 1 ) /*0x1007b8dae*/
        {
          v83 = WORD1(v114[5]); /*0x1007b8db0*/
          v84 = 1; /*0x1007b8db7*/
        }
        else
        {
          v36 = (const __m128i *)v114[1]; /*0x1007b8dda*/
          if ( HIDWORD(v114[5]) ) /*0x1007b8de4*/
          {
            if ( v114[2] <= (unsigned __int64)HIDWORD(v114[5]) ) /*0x1007b8df0*/
            {
              if ( v114[2] != HIDWORD(v114[5]) ) /*0x1007b8dfd*/
              {
LABEL_149:
                v116 = (__int64 *)v68; /*0x1007b9418*/
                core::str::slice_error_fail::h480e51fbd8b15eba(v114[1], v114[2], 0, HIDWORD(v114[5]), &off_10196C470); /*0x1007b9428*/
              }
            }
            else if ( *(char *)(v114[1] + HIDWORD(v114[5])) <= -65 ) /*0x1007b8df6*/
            {
              goto LABEL_149; /*0x1007b8df6*/
            }
          }
          v84 = url::parser::default_port::hb2861f8944662c79(v114[1], HIDWORD(v114[5])); /*0x1007b8e06*/
        }
        if ( (v84 & 1) == 0 ) /*0x1007b8e0d*/
          goto LABEL_97; /*0x1007b8e0d*/
        v128 = v81; /*0x1007b8e13*/
        v129 = v82; /*0x1007b8e17*/
        LOWORD(v130) = v83; /*0x1007b8e1b*/
        v36 = (const __m128i *)v113; /*0x1007b8e1f*/
        _$LT$$LP$$RF$str$C$u16$RP$$u20$as$u20$std..net..socket_addr..ToSocketAddrs$GT$::to_socket_addrs::h8a413bfc8350fcfa( /*0x1007b8e2a*/
          v113,
          &v128);
        if ( !v113[0] ) /*0x1007b8e39*/
        {
          if ( ((__int64)v113[1] & 3) == 1 ) /*0x1007b8e84*/
          {
            v121 = (const __m128i *)((char *)v113[1] - 1); /*0x1007b8e8a*/
            v87 = *(__int64 *)((char *)&v113[1][-1].i64[1] + 7); /*0x1007b8e91*/
            v88 = *(__int64 *)((char *)v113[1]->i64 + 7); /*0x1007b8e95*/
            if ( *(_QWORD *)v88 ) /*0x1007b8e99*/
              (*(void (__fastcall **)(__int64))v88)(v87); /*0x1007b8ea4*/
            v89 = *(_QWORD *)(v88 + 8); /*0x1007b8ea6*/
            if ( v89 ) /*0x1007b8ead*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v89, *(_QWORD *)(v88 + 16)); /*0x1007b8eb6*/
            v36 = v121; /*0x1007b8ec5*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, 24, 8); /*0x1007b8ecc*/
          }
LABEL_97:
          if ( v114[0] ) /*0x1007b8edb*/
          {
            v36 = (const __m128i *)v114[1]; /*0x1007b8edd*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114[1], v114[0], 1); /*0x1007b8ee9*/
          }
          v71 = a2; /*0x1007b8eee*/
          goto LABEL_122; /*0x1007b8efc*/
        }
        v85 = v113[1]; /*0x1007b8e3b*/
        v121 = v113[3]; /*0x1007b8e50*/
        v107 = v113[0]; /*0x1007b8e5a*/
        v112 = v113[2]; /*0x1007b8e61*/
        if ( v113[1] == v113[3] ) /*0x1007b8e68*/
        {
LABEL_90:
          v86 = 0; /*0x1007b8e6e*/
        }
        else
        {
          while ( 1 ) /*0x1007b8f3c*/
          {
            v113[3] = (const __m128i *)v85[1].i64[1]; /*0x1007b8f3c*/
            v113[2] = (const __m128i *)v85[1].i64[0]; /*0x1007b8f47*/
            v90 = (const __m128i *)v85->i64[0]; /*0x1007b8f4e*/
            v113[1] = (const __m128i *)v85->i64[1]; /*0x1007b8f55*/
            v113[0] = v90; /*0x1007b8f5c*/
            v36 = (const __m128i *)&v128; /*0x1007b8f63*/
            std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v128, v113, 0, 200000000); /*0x1007b8f71*/
            if ( !(_DWORD)v128 ) /*0x1007b8f7a*/
              break; /*0x1007b8f7a*/
            if ( (v129 & 3) == 1 ) /*0x1007b8f88*/
            {
              v106 = (const __m128i *)(v129 - 1); /*0x1007b8f8e*/
              v119 = *(_QWORD *)(v129 - 1); /*0x1007b8f99*/
              v91 = *(_QWORD *)(v129 + 7); /*0x1007b8fa0*/
              if ( *(_QWORD *)v91 ) /*0x1007b8fa4*/
                (*(void (__fastcall **)(__int64))v91)(v119); /*0x1007b8fb3*/
              v92 = *(_QWORD *)(v91 + 8); /*0x1007b8fbc*/
              if ( v92 ) /*0x1007b8fc3*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v92, *(_QWORD *)(v91 + 16)); /*0x1007b8fcd*/
              v36 = v106; /*0x1007b8f14*/
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, 24, 8); /*0x1007b8f1b*/
            }
            v85 += 2; /*0x1007b8f27*/
            if ( v85 == v121 ) /*0x1007b8f32*/
              goto LABEL_90; /*0x1007b8f32*/
          }
          v36 = (const __m128i *)HIDWORD(v128); /*0x1007b8fd7*/
          close_NOCANCEL(HIDWORD(v128)); /*0x1007b8fda*/
          v86 = 1; /*0x1007b8fdf*/
        }
        v71 = a2; /*0x1007b8feb*/
        if ( v114[0] ) /*0x1007b8ff2*/
        {
          v36 = (const __m128i *)v114[1]; /*0x1007b8ff4*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114[1], v114[0], 1); /*0x1007b9000*/
        }
        if ( v112 ) /*0x1007b900f*/
        {
          v36 = v107; /*0x1007b901a*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 32LL * (_QWORD)v112, 4); /*0x1007b9021*/
        }
        if ( !v86 ) /*0x1007b902f*/
          goto LABEL_122; /*0x1007b902f*/
      }
LABEL_115:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v128, &v122); /*0x1007b9035*/
      v114[2] = v130; /*0x1007b9046*/
      v114[1] = v129; /*0x1007b9055*/
      v114[0] = v128; /*0x1007b905c*/
      LOBYTE(v114[3]) = 1; /*0x1007b9063*/
      v36 = (const __m128i *)v113; /*0x1007b906a*/
      codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492( /*0x1007b9077*/
        (__int64)v113,
        (__int64)v114,
        v71,
        *(double *)si128.i64,
        a4);
      if ( 2LL * v114[0] ) /*0x1007b9083*/
      {
        v36 = (const __m128i *)v114[1]; /*0x1007b9090*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114[1], v114[0], 1); /*0x1007b909c*/
      }
      if ( LOBYTE(v113[7]) ) /*0x1007b90a8*/
      {
        *(_QWORD *)(a1 + 80) = v124; /*0x1007b9267*/
        v101 = v122; /*0x1007b926b*/
        *(_QWORD *)(a1 + 72) = v123; /*0x1007b9273*/
        *(_QWORD *)(a1 + 64) = v101; /*0x1007b9277*/
        v102 = v113[1]; /*0x1007b9282*/
        *(const __m128i **)a1 = v113[0]; /*0x1007b9289*/
        *(_QWORD *)(a1 + 8) = v102; /*0x1007b928c*/
        *(const __m128i **)(a1 + 16) = v113[2]; /*0x1007b9297*/
        *(const __m128i **)(a1 + 24) = v113[3]; /*0x1007b92a2*/
        *(const __m128i **)(a1 + 32) = v113[4]; /*0x1007b92ad*/
        *(const __m128i **)(a1 + 40) = v113[5]; /*0x1007b92b8*/
        *(const __m128i **)(a1 + 48) = v113[6]; /*0x1007b92c3*/
        *(const __m128i **)(a1 + 56) = v113[7]; /*0x1007b92ce*/
        *(_WORD *)(a1 + 88) = 257; /*0x1007b92d2*/
        v103 = v131; /*0x1007b92dc*/
        if ( v132 != v68 ) /*0x1007b92e0*/
        {
          v104 = v69 / 0x18; /*0x1007b92f5*/
          do /*0x1007b9302*/
          {
            v105 = v70[-1].i64[1]; /*0x1007b9304*/
            if ( v105 ) /*0x1007b930b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70->i64[0], v105, 1); /*0x1007b9316*/
            v70 = (const __m128i *)((char *)v70 + 24); /*0x1007b92fb*/
            --v104; /*0x1007b92ff*/
          }
          while ( v104 ); /*0x1007b9302*/
        }
        if ( v120 ) /*0x1007b9327*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, 24 * v120, 8); /*0x1007b9339*/
        return a1; /*0x1007b9345*/
      }
      if ( v113[0] ) /*0x1007b90b8*/
      {
        v36 = v113[1]; /*0x1007b90ba*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113[1], v113[0], 1); /*0x1007b90c6*/
      }
      if ( v113[3] ) /*0x1007b90d5*/
      {
        v36 = v113[4]; /*0x1007b90d7*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113[4], v113[3], 1); /*0x1007b90e3*/
      }
LABEL_122:
      v93 = v122; /*0x1007b90e8*/
      if ( v122 ) /*0x1007b90ef*/
      {
        v36 = (const __m128i *)v123; /*0x1007b90f5*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v122, 1); /*0x1007b90fe*/
      }
      v69 -= 24LL; /*0x1007b8bc0*/
      v70 = (const __m128i *)((char *)v70 + 24); /*0x1007b8bc4*/
      if ( v68 == v132 ) /*0x1007b8bcc*/
      {
        v55 = v131; /*0x1007b9171*/
        v54 = v120; /*0x1007b9175*/
        goto LABEL_131; /*0x1007b9175*/
      }
    }
  }
  v93 = (__int64)v132; /*0x1007b9113*/
  v116 = (__int64 *)v68; /*0x1007b912a*/
  if ( v132 != v68 ) /*0x1007b9134*/
  {
    v94 = ((char *)v132 - (char *)v68) / 0x18uLL; /*0x1007b9139*/
    v95 = &v68->i64[1]; /*0x1007b913d*/
    do /*0x1007b9157*/
    {
      v93 = *(v95 - 1); /*0x1007b9159*/
      if ( v93 ) /*0x1007b9160*/
      {
        v36 = (const __m128i *)*v95; /*0x1007b9162*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v95, v93, 1); /*0x1007b916a*/
      }
      v95 += 3; /*0x1007b9150*/
      --v94; /*0x1007b9154*/
    }
    while ( v94 ); /*0x1007b9157*/
  }
LABEL_131:
  if ( v54 ) /*0x1007b917f*/
  {
    v93 = 24 * v54; /*0x1007b9185*/
    v36 = v55; /*0x1007b918f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 24 * v54, 8); /*0x1007b9192*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v93); /*0x1007b9197*/
  v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1007b91a6*/
  if ( !v96 ) /*0x1007b91ae*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1007b9402*/
  v97 = v96; /*0x1007b91b4*/
  *(_QWORD *)v96 = 0x6E756F665F746F6ELL; /*0x1007b91c1*/
  *(_BYTE *)(v96 + 8) = 100; /*0x1007b91c4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1); /*0x1007b91c9*/
  v98 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(118, 1); /*0x1007b91d8*/
  if ( !v98 ) /*0x1007b91e0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 118); /*0x1007b9411*/
  v99 = v98; /*0x1007b91e6*/
  memcpy(v98, &unk_101673469, 0x76u); /*0x1007b91f8*/
  *(_WORD *)(a1 + 88) = 512; /*0x1007b9204*/
  *(_QWORD *)(a1 + 64) = 0x8000000000000000LL; /*0x1007b9214*/
  *(_QWORD *)a1 = 9; /*0x1007b9218*/
  *(_QWORD *)(a1 + 8) = v97; /*0x1007b921f*/
  *(_QWORD *)(a1 + 16) = 9; /*0x1007b9223*/
  *(_QWORD *)(a1 + 24) = 118; /*0x1007b922b*/
  *(_QWORD *)(a1 + 32) = v99; /*0x1007b9233*/
  *(_QWORD *)(a1 + 40) = 118; /*0x1007b9237*/
  *(_DWORD *)(a1 + 48) = 0; /*0x1007b923f*/
  *(_BYTE *)(a1 + 56) = 0; /*0x1007b9246*/
  return a1; /*0x1007b924a*/
}