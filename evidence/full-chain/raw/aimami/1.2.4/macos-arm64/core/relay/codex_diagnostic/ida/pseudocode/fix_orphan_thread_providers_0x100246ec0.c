// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_orphan_thread_providers @ 0x100246ec0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_orphan_thread_providers::he99acb2753202824(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        __m128i a5,
        __m128i a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r14
  __m128i *v15; // rax
  __m128i *v16; // rbx
  __m128i v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // r14
  _QWORD *v21; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __m128i v25; // xmm3
  int v27; // eax
  bool v28; // zf
  char *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 result; // rax
  char *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rsi
  unsigned __int64 v41; // r14
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 i; // rdi
  unsigned __int64 v49; // r14
  char *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // rdx
  size_t v54; // rbx
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  const void *v62; // rbx
  __int64 v63; // r15
  __int64 v64; // r14
  const __m128i *v65; // rax
  __m128i v66; // xmm0
  const __m128i *v67; // rax
  __m128i v68; // xmm0
  char *v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r13
  char *v73; // rdi
  __int64 v74; // rax
  const void *v75; // rsi
  unsigned __int64 v76; // rbx
  __m128i v77; // [rsp+0h] [rbp-270h] BYREF
  _QWORD *v78; // [rsp+10h] [rbp-260h] BYREF
  __int128 v79; // [rsp+18h] [rbp-258h]
  char v80; // [rsp+58h] [rbp-218h]
  _QWORD *v81; // [rsp+60h] [rbp-210h]
  __int128 v82; // [rsp+68h] [rbp-208h]
  __int64 v83; // [rsp+78h] [rbp-1F8h]
  __int64 v84; // [rsp+80h] [rbp-1F0h]
  __int64 v85; // [rsp+88h] [rbp-1E8h]
  __m128i v86; // [rsp+90h] [rbp-1E0h] BYREF
  __m128i v87; // [rsp+A0h] [rbp-1D0h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-1C0h] BYREF
  __m128i v89; // [rsp+B8h] [rbp-1B8h]
  void **v90; // [rsp+C8h] [rbp-1A8h]
  __m128i v91; // [rsp+D0h] [rbp-1A0h]
  __int64 v92; // [rsp+E0h] [rbp-190h] BYREF
  __m128i v93; // [rsp+E8h] [rbp-188h]
  void **v94; // [rsp+F8h] [rbp-178h]
  __m128i v95; // [rsp+100h] [rbp-170h]
  void **v96; // [rsp+110h] [rbp-160h]
  __m128i v97; // [rsp+118h] [rbp-158h]
  __int64 v98; // [rsp+128h] [rbp-148h]
  __m128i v99; // [rsp+130h] [rbp-140h]
  void **v100; // [rsp+140h] [rbp-130h]
  __m128i v101; // [rsp+148h] [rbp-128h]
  char *v102; // [rsp+158h] [rbp-118h]
  __m128i v103; // [rsp+160h] [rbp-110h]
  __int64 v104; // [rsp+170h] [rbp-100h]
  __m128i v105; // [rsp+178h] [rbp-F8h]
  char v106; // [rsp+188h] [rbp-E8h]
  _QWORD *v107; // [rsp+190h] [rbp-E0h] BYREF
  __m128i v108; // [rsp+198h] [rbp-D8h]
  void **v109; // [rsp+1A8h] [rbp-C8h]
  __m128i v110; // [rsp+1B0h] [rbp-C0h] BYREF
  unsigned __int64 v111; // [rsp+1C0h] [rbp-B0h] BYREF
  __int128 v112; // [rsp+1C8h] [rbp-A8h]
  __int64 v113; // [rsp+1D8h] [rbp-98h]
  __int64 v114; // [rsp+1E0h] [rbp-90h]
  char *v115; // [rsp+1E8h] [rbp-88h] BYREF
  __m128i v116; // [rsp+1F0h] [rbp-80h]
  __int64 v117; // [rsp+200h] [rbp-70h]
  __m128i v118; // [rsp+208h] [rbp-68h]
  __int64 v119; // [rsp+218h] [rbp-58h]
  char *v120; // [rsp+220h] [rbp-50h]
  __int128 __s1; // [rsp+228h] [rbp-48h]
  unsigned __int64 v122; // [rsp+238h] [rbp-38h]
  char v123; // [rsp+247h] [rbp-29h]

  v113 = a2; /*0x100246ee1*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h2c37c38d14365ff6(&v92); /*0x100246ee8*/
  v9 = v93.i64[1]; /*0x100246eed*/
  if ( v93.i64[1] ) /*0x100246ef7*/
  {
    v10 = v93.i64[0]; /*0x100246efd*/
    v11 = (_QWORD *)(v93.i64[0] + 8); /*0x100246f04*/
    do /*0x100246f17*/
    {
      v12 = *(v11 - 1); /*0x100246f19*/
      if ( v12 ) /*0x100246f20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x100246f2a*/
      v11 += 3; /*0x100246f10*/
      --v9; /*0x100246f14*/
    }
    while ( v9 ); /*0x100246f17*/
    v84 = a3; /*0x100246f31*/
    v83 = a1; /*0x100246f38*/
    if ( v92 ) /*0x100246f49*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24 * v92, 8); /*0x100246f5b*/
    codexmate_lib::core::relay::codex_catalog::load_official_catalog_snapshot::habb5579c0ab2db89( /*0x100246f76*/
      &v78,
      *(_QWORD *)(v113 + 8),
      *(_QWORD *)(v113 + 16));
    v13 = *((_QWORD *)&v79 + 1); /*0x100246f7b*/
    v14 = v79; /*0x100246f90*/
    v82 = v79; /*0x100246f97*/
    v81 = v78; /*0x100246f9e*/
    v123 = v80; /*0x100246fac*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100246fb6*/
    v16 = v15; /*0x100246fb8*/
    if ( v15[1].i8[0] == 1 ) /*0x100246fbf*/
    {
      v17.i64[0] = v15->i64[0]; /*0x100246fc5*/
      v17.i64[1] = v16->i64[1]; /*0x100246fc8*/
    }
    else
    {
      v17.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100247909*/
      *v16 = v17; /*0x10024790e*/
      v16[1].i8[0] = 1; /*0x100247915*/
    }
    v16->i64[0] = v17.i64[0] + 1; /*0x100246fd0*/
    v94 = nullptr; /*0x100246fe4*/
    v93 = 0u; /*0x100247000*/
    v92 = (__int64)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x10024700e*/
    v95 = v17; /*0x100247015*/
    v119 = v14 + 32 * v13; /*0x10024702d*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb0ef0e4db6e381e9( /*0x100247031*/
      v14,
      v119,
      &v92);
    v110 = v95; /*0x10024704b*/
    v109 = v94; /*0x100247059*/
    v108 = v93; /*0x10024707c*/
    v107 = (_QWORD *)v92; /*0x100247083*/
    codexmate_lib::core::relay::codex_catalog::resolve_native_default_model_from_models::h86e47314ea6cbc42( /*0x10024709e*/
      &v111,
      v113,
      v14,
      v13);
    v120 = (char *)v14; /*0x1002470ab*/
    if ( v109 ) /*0x1002470af*/
    {
      v18 = core::hash::BuildHasher::hash_one::hf03a628f6f42ad73(&v110, &v111); /*0x1002470c3*/
      v19 = v107; /*0x1002470cf*/
      v20 = v108.i64[0]; /*0x1002470d6*/
      a5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v18 >> 57), (__m128i)0LL); /*0x1002470e5*/
      v21 = v107 - 3; /*0x1002470ea*/
      __s1 = v112; /*0x1002470f5*/
      HIDWORD(_RCX) = HIDWORD(v112); /*0x1002470f9*/
      v23 = 0; /*0x100247104*/
      a6 = (__m128i)-1LL; /*0x100247106*/
      while ( 1 ) /*0x10024710a*/
      {
        v24 = v20 & v18; /*0x10024710a*/
        v25 = _mm_loadu_si128((const __m128i *)((char *)v19 + v24)); /*0x10024710d*/
        a4 = _mm_cmpeq_epi8(v25, a5); /*0x100247116*/
        _R15D = _mm_movemask_epi8(a4); /*0x10024711a*/
        if ( _R15D ) /*0x100247122*/
          break; /*0x100247122*/
LABEL_17:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v25, a6)); /*0x1002471a1*/
        if ( (_DWORD)_RCX ) /*0x1002471ab*/
          goto LABEL_19; /*0x1002471ab*/
        v18 = v24 + v23 + 16; /*0x1002471ad*/
        v23 += 16; /*0x1002471b2*/
      }
      v122 = v24; /*0x100247124*/
      v86 = a5; /*0x100247128*/
      v114 = v23; /*0x100247130*/
      v87 = v25; /*0x100247137*/
      while ( 1 ) /*0x10024713f*/
      {
        __asm { tzcnt ecx, r15d } /*0x10024713f*/
        _RCX = -(__int64)(v20 & (v24 + _RCX)); /*0x10024714a*/
        if ( *((_QWORD *)&__s1 + 1) == v21[3 * _RCX + 2] /*0x100247168*/
          && !memcmp((const void *)__s1, (const void *)v21[3 * _RCX + 1], *((size_t *)&__s1 + 1)) )
        {
          break; /*0x100247168*/
        }
        v27 = _R15D - 1; /*0x100247175*/
        LOWORD(v27) = _R15D & (_R15D - 1); /*0x100247179*/
        v28 = (_WORD)v27 == 0; /*0x100247179*/
        _R15D = v27; /*0x10024717d*/
        v24 = v122; /*0x100247180*/
        a5 = _mm_load_si128(&v86); /*0x100247184*/
        v23 = v114; /*0x10024718c*/
        a6 = (__m128i)-1LL; /*0x100247193*/
        v25 = _mm_load_si128(&v87); /*0x100247197*/
        if ( v28 ) /*0x10024719f*/
          goto LABEL_17; /*0x10024719f*/
      }
      v122 = v111; /*0x1002474d6*/
      v55 = __s1; /*0x1002474da*/
      goto LABEL_52; /*0x1002474de*/
    }
LABEL_19:
    v89.i64[0] = v119; /*0x1002471bb*/
    v89.i64[1] = (__int64)&v107; /*0x1002471cd*/
    if ( !v13 ) /*0x1002471d7*/
      goto LABEL_51; /*0x1002471d7*/
    v29 = v120; /*0x1002471dd*/
    while ( 1 ) /*0x100247440*/
    {
      v50 = v29; /*0x100247440*/
      v51 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100247452*/
              "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
              4,
              v29);
      v29 += 32; /*0x100247457*/
      if ( v51 ) /*0x10024745f*/
      {
        if ( *(_BYTE *)v51 == 3 ) /*0x100247464*/
        {
          v52 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d( /*0x10024746e*/
                  *(_QWORD *)(v51 + 16),
                  *(_QWORD *)(v51 + 24));
          if ( v109 ) /*0x10024747b*/
            break; /*0x10024747b*/
        }
      }
LABEL_37:
      if ( v29 == (char *)v119 ) /*0x1002474c4*/
        goto LABEL_51; /*0x1002474c4*/
    }
    v54 = v53; /*0x10024747d*/
    *(_QWORD *)&__s1 = v52; /*0x100247487*/
    v49 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(&v110); /*0x100247493*/
    v46 = (__int64)v107; /*0x10024749a*/
    v47 = v108.i64[0]; /*0x1002474a1*/
    a5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v49 >> 57), (__m128i)0LL); /*0x1002474b0*/
    v45 = v107 - 3; /*0x1002474b5*/
    for ( i = 0; ; i += 16 ) /*0x1002474b9*/
    {
      v41 = v47 & v49; /*0x100247360*/
      a6 = _mm_loadu_si128((const __m128i *)(v46 + v41)); /*0x100247363*/
      a4 = _mm_cmpeq_epi8(a6, a5); /*0x10024736d*/
      _RAX = (unsigned int)_mm_movemask_epi8(a4); /*0x100247371*/
      if ( (_DWORD)_RAX ) /*0x100247377*/
        break; /*0x100247377*/
LABEL_31:
      a4.i64[0] = -1; /*0x100247413*/
      a6 = _mm_cmpeq_epi8(a6, (__m128i)-1LL); /*0x100247417*/
      if ( _mm_movemask_epi8(a6) ) /*0x10024741b*/
        goto LABEL_37; /*0x100247421*/
      v49 = v41 + i + 16; /*0x100247427*/
    }
    v86.i64[0] = v46; /*0x10024737d*/
    v114 = v47; /*0x100247384*/
    v87 = a5; /*0x10024738b*/
    v85 = i; /*0x100247393*/
    v77 = a6; /*0x10024739a*/
    while ( 1 ) /*0x1002473a2*/
    {
      v122 = _RAX; /*0x1002473a2*/
      __asm { tzcnt eax, eax } /*0x1002473a6*/
      v43 = -3LL * (v47 & (v41 + _RAX)); /*0x1002473b3*/
      if ( v54 == v45[v43 + 2] ) /*0x1002473bc*/
      {
        *((_QWORD *)&__s1 + 1) = v45; /*0x1002473c2*/
        v44 = memcmp((const void *)__s1, (const void *)v45[v43 + 1], v54); /*0x1002473d1*/
        v45 = *((_QWORD **)&__s1 + 1); /*0x1002473d6*/
        if ( !v44 ) /*0x1002473dc*/
          break; /*0x1002473dc*/
      }
      _RAX = (unsigned int)(v122 - 1); /*0x1002473e6*/
      LOWORD(_RAX) = v122 & (v122 - 1); /*0x1002473e9*/
      v46 = v86.i64[0]; /*0x1002473ec*/
      v47 = v114; /*0x1002473f3*/
      a5 = _mm_load_si128(&v87); /*0x1002473fa*/
      i = v85; /*0x100247402*/
      a6 = _mm_load_si128(&v77); /*0x100247409*/
      if ( !(_WORD)_RAX ) /*0x100247411*/
        goto LABEL_31; /*0x100247411*/
    }
    v88 = (__int64)(v50 + 32); /*0x1002474e3*/
    v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015E4C48, 8, v50); /*0x1002474f9*/
    v57 = 0x7FFFFFFFFFFFFFFFLL; /*0x1002474fe*/
    if ( v56 && *(_BYTE *)v56 == 2 ) /*0x100247510*/
    {
      v58 = *(_QWORD *)(v56 + 8); /*0x100247512*/
      if ( v58 ) /*0x100247519*/
      {
        if ( (_DWORD)v58 == 1 ) /*0x10024751e*/
          v57 = *(_QWORD *)(v56 + 16); /*0x100247520*/
      }
      else
      {
        v59 = *(_QWORD *)(v56 + 16); /*0x100247526*/
        if ( v59 >= 0 ) /*0x10024752d*/
          v57 = v59; /*0x10024752d*/
      }
    }
    v92 = v57; /*0x100247531*/
    v93.i64[0] = v57; /*0x100247538*/
    v93.i64[1] = __s1; /*0x100247543*/
    v94 = (void **)v54; /*0x10024754a*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hdf736822d2322b61( /*0x100247566*/
      &v115,
      &v88,
      &v92);
    v62 = (const void *)v116.i64[1]; /*0x10024756b*/
    if ( v116.i64[1] ) /*0x100247572*/
    {
      v63 = v117; /*0x100247574*/
      *((_QWORD *)&__s1 + 1) = v117; /*0x10024757b*/
      if ( v117 < 0 ) /*0x10024757f*/
      {
        v64 = 0; /*0x100247585*/
        goto LABEL_50; /*0x100247585*/
      }
      if ( v117 ) /*0x1002478a3*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v115, &v88, v60, v61); /*0x1002478a5*/
        v64 = 1; /*0x1002478aa*/
        v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v63, 1); /*0x1002478b8*/
        if ( !v74 ) /*0x1002478c0*/
LABEL_50:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v64, *((_QWORD *)&__s1 + 1)); /*0x100247588*/
        v55 = v74; /*0x1002478c6*/
      }
      else
      {
        v55 = 1; /*0x1002478cb*/
      }
      v75 = v62; /*0x1002478d4*/
      v76 = *((_QWORD *)&__s1 + 1); /*0x1002478d7*/
      memcpy((void *)v55, v75, *((size_t *)&__s1 + 1)); /*0x1002478de*/
      if ( v111 ) /*0x1002478ed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x1002478fb*/
      v122 = v76; /*0x100247900*/
    }
    else
    {
LABEL_51:
      v122 = v111; /*0x100247599*/
      *((_QWORD *)&__s1 + 1) = *((_QWORD *)&v112 + 1); /*0x1002475b2*/
      v55 = v112; /*0x1002475b2*/
    }
LABEL_52:
    *(_QWORD *)&__s1 = v55; /*0x1002475b6*/
    v65 = (const __m128i *)core::ops::function::FnOnce::call_once::h039e8e3529847eae( /*0x1002475bc*/
                             0,
                             *(double *)a4.i64,
                             *(double *)a5.i64,
                             *(double *)a6.i64);
    if ( !v65 ) /*0x1002475c4*/
      std::thread::local::panic_access_error::hf13793238d4ae422(&anon_b39b9fe98e9da40d16599b7083d73021_1067); /*0x100247936*/
    v66 = _mm_loadu_si128(v65); /*0x1002475ca*/
    ++v65->i64[0]; /*0x1002475ce*/
    v94 = nullptr; /*0x1002475d8*/
    v93 = 0u; /*0x1002475f4*/
    v92 = (__int64)anon_d163fe72d6e6e73a137b22815ab75905_13; /*0x100247602*/
    v95 = v66; /*0x100247609*/
    v115 = v120; /*0x100247615*/
    v116.i64[0] = v119; /*0x100247620*/
    v116.i64[1] = (__int64)&v107; /*0x10024762b*/
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::ha04bf73b25fb22ff( /*0x10024763d*/
      &v92,
      &v115);
    v88 = v92; /*0x100247650*/
    v89 = v93; /*0x100247657*/
    v90 = v94; /*0x100247673*/
    v91 = v95; /*0x100247688*/
    v67 = (const __m128i *)core::ops::function::FnOnce::call_once::h039e8e3529847eae( /*0x100247698*/
                             0,
                             *(double *)v66.i64,
                             *(double *)a5.i64,
                             *(double *)a6.i64);
    if ( !v67 ) /*0x1002476a0*/
      std::thread::local::panic_access_error::hf13793238d4ae422(&anon_b39b9fe98e9da40d16599b7083d73021_1067); /*0x100247944*/
    v68 = _mm_loadu_si128(v67); /*0x1002476a6*/
    ++v67->i64[0]; /*0x1002476aa*/
    v117 = 0; /*0x1002476b4*/
    v116 = 0u; /*0x1002476bc*/
    v115 = (char *)anon_d163fe72d6e6e73a137b22815ab75905_13; /*0x1002476c0*/
    v118 = v68; /*0x1002476c7*/
    v69 = v120; /*0x1002476cc*/
    v92 = (__int64)v120; /*0x1002476d0*/
    v93.i64[0] = v119; /*0x1002476db*/
    v93.i64[1] = (__int64)&v107; /*0x1002476e2*/
    v94 = (void **)&v88; /*0x1002476f0*/
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h744df3594722275f( /*0x100247705*/
      &v115,
      &v92);
    v102 = v115; /*0x100247715*/
    v103 = v116; /*0x10024771c*/
    v104 = v117; /*0x100247732*/
    v105 = v118; /*0x10024773d*/
    v94 = (void **)v107; /*0x10024775d*/
    v95 = v108; /*0x100247764*/
    v96 = v109; /*0x100247780*/
    v97 = v110; /*0x10024778e*/
    v101 = v91; /*0x1002477b8*/
    v100 = v90; /*0x1002477c6*/
    v71 = v89.i64[0]; /*0x1002477e2*/
    v99 = v89; /*0x1002477e9*/
    v98 = v88; /*0x1002477f0*/
    v92 = v122; /*0x1002477fb*/
    v93 = (__m128i)__s1; /*0x100247806*/
    v106 = v123; /*0x10024781c*/
    v72 = v13 + 1; /*0x100247822*/
    v73 = v69; /*0x100247825*/
    while ( v72 != 1 ) /*0x100247834*/
    {
      --v72; /*0x10024783a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v73, &v92, v70, v71); /*0x10024783d*/
      v73 += 32; /*0x100247842*/
    }
    if ( v81 ) /*0x100247851*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, 32LL * (_QWORD)v81, 8); /*0x10024785f*/
    codexmate_lib::core::relay::codex_diagnostic::fix_orphan_thread_providers_with_catalog::h883d0680b72adb29( /*0x100247880*/
      v83,
      v113,
      v84,
      &v92);
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::h80083e4b41324d3f(&v92); /*0x1002478a2*/
  }
  if ( v92 ) /*0x1002471f0*/
  {
    a2 = 24 * v92; /*0x1002471fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93.i64[0], 24 * v92, 8); /*0x100247206*/
  }
  codexmate_lib::core::relay::codex_diagnostic::orphan_provider_fix_ids::h1efc66fdabad2717(&v115, a2, v7, v8); /*0x100247212*/
  v78 = nullptr; /*0x100247217*/
  v79 = 8u; /*0x100247222*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v115, a2, v30, v31); /*0x100247238*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100247247*/
  if ( !v32 ) /*0x10024724f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100247928*/
  v35 = (_QWORD *)v32; /*0x100247255*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v33, v34); /*0x100247258*/
  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100247267*/
  if ( !v36 ) /*0x10024726f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100247955*/
  *(_QWORD *)(v36 + 24) = 0xA4E5AEBFE4809CE9LL; /*0x10024727f*/
  *(_QWORD *)(v36 + 16) = 0xA097E68CBCEFA89CLL; /*0x10024728d*/
  *(_QWORD *)(v36 + 8) = 0xE598ADE58DB8E493LL; /*0x10024729b*/
  *(_QWORD *)v36 = 0xBAE5AE8DE6B095E6LL; /*0x1002472a9*/
  *(_BYTE *)(v36 + 32) = -115; /*0x1002472ac*/
  *v35 = 33; /*0x1002472b0*/
  v35[1] = v36; /*0x1002472b7*/
  v35[2] = 33; /*0x1002472bb*/
  result = v116.i64[1]; /*0x1002472c3*/
  v38 = v115; /*0x1002472ce*/
  v39 = v116.i64[0]; /*0x1002472d5*/
  v93 = v116; /*0x1002472d9*/
  v92 = (__int64)v115; /*0x1002472e0*/
  v40 = v78; /*0x1002472e7*/
  v94 = (void **)v78; /*0x1002472f5*/
  v95 = (__m128i)v79; /*0x1002472fc*/
  *(_OWORD *)(a1 + 40) = v79; /*0x100247316*/
  *(_QWORD *)(a1 + 32) = v40; /*0x10024731b*/
  *(_QWORD *)(a1 + 24) = result; /*0x100247320*/
  *(_QWORD *)(a1 + 16) = v39; /*0x100247325*/
  *(_QWORD *)(a1 + 8) = v38; /*0x10024732a*/
  *(_QWORD *)(a1 + 56) = 1; /*0x10024732f*/
  *(_QWORD *)(a1 + 64) = v35; /*0x100247338*/
  *(_QWORD *)(a1 + 72) = 1; /*0x10024733d*/
  *(_QWORD *)a1 = 11; /*0x100247346*/
  return result; /*0x100247891*/
}