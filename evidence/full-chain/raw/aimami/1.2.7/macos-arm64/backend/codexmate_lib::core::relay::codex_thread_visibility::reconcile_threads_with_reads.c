// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_reads::he83e88af3c2dbac7; addr: 0x100485f40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_reads::he83e88af3c2dbac7(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  __int64 *v9; // r15
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // edx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  __m128i v32; // xmm1
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __m128i v37; // xmm0
  __int64 v38; // r15
  __int64 v39; // r14
  __int64 v40; // rbx
  __m128i v41; // xmm0
  __int64 v42; // r15
  __int64 v43; // r14
  __m128i v44; // xmm0
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v49; // r14
  __int64 v50; // rbx
  const __m128i *v51; // r15
  const __m128i *v53; // r12
  int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // r14
  unsigned __int64 v60; // rbx
  _QWORD *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rax
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rbx
  const __m128i *v72; // r15
  const __m128i *v74; // r12
  int v75; // r13d
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // r14
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // r12
  _QWORD v85[3]; // [rsp+0h] [rbp-3A0h] BYREF
  _BYTE __src[168]; // [rsp+18h] [rbp-388h] BYREF
  _QWORD v87[2]; // [rsp+C0h] [rbp-2E0h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-2D0h] BYREF
  int v89; // [rsp+D8h] [rbp-2C8h]
  __int64 v90; // [rsp+E0h] [rbp-2C0h] BYREF
  int v91; // [rsp+E8h] [rbp-2B8h]
  __int64 v92; // [rsp+F0h] [rbp-2B0h] BYREF
  int v93; // [rsp+F8h] [rbp-2A8h]
  unsigned __int128 v94; // [rsp+100h] [rbp-2A0h] BYREF
  unsigned __int128 v95; // [rsp+110h] [rbp-290h] BYREF
  const __m128i *v96; // [rsp+120h] [rbp-280h] BYREF
  __int64 v97; // [rsp+128h] [rbp-278h]
  __int64 v98; // [rsp+130h] [rbp-270h]
  __int64 v99; // [rsp+138h] [rbp-268h]
  __int64 v100; // [rsp+140h] [rbp-260h]
  __int64 v101; // [rsp+148h] [rbp-258h]
  __int64 v102; // [rsp+150h] [rbp-250h]
  __m128i v103; // [rsp+158h] [rbp-248h]
  __int64 v104; // [rsp+168h] [rbp-238h]
  __int128 v105; // [rsp+170h] [rbp-230h]
  __int64 v106; // [rsp+180h] [rbp-220h]
  const __m128i *v107; // [rsp+188h] [rbp-218h] BYREF
  __m128i v108; // [rsp+190h] [rbp-210h]
  __m128i v109; // [rsp+1A0h] [rbp-200h]
  __int64 v110; // [rsp+1B0h] [rbp-1F0h]
  __int64 v111; // [rsp+1B8h] [rbp-1E8h]
  __m128i v112; // [rsp+1C0h] [rbp-1E0h]
  _OWORD v113[6]; // [rsp+1D0h] [rbp-1D0h] BYREF
  __int64 *v114; // [rsp+238h] [rbp-168h]
  __int64 v115; // [rsp+240h] [rbp-160h] BYREF
  __int64 v116; // [rsp+248h] [rbp-158h]
  unsigned __int64 v117; // [rsp+250h] [rbp-150h]
  unsigned __int64 v118; // [rsp+258h] [rbp-148h] BYREF
  __m128i si128; // [rsp+260h] [rbp-140h] BYREF
  __int64 v120; // [rsp+270h] [rbp-130h] BYREF
  unsigned __int64 v121; // [rsp+278h] [rbp-128h] BYREF
  unsigned __int64 v122; // [rsp+280h] [rbp-120h]
  const __m128i *v123; // [rsp+288h] [rbp-118h] BYREF
  __m128i v124[6]; // [rsp+290h] [rbp-110h] BYREF
  __int64 v125; // [rsp+2F0h] [rbp-B0h]
  __int64 v126; // [rsp+2F8h] [rbp-A8h]
  __int64 v127; // [rsp+300h] [rbp-A0h]
  __int64 v128; // [rsp+308h] [rbp-98h]
  __int64 v129; // [rsp+310h] [rbp-90h]
  __int64 v130; // [rsp+318h] [rbp-88h]
  __int64 v131; // [rsp+320h] [rbp-80h]
  __int64 v132; // [rsp+328h] [rbp-78h]
  __int64 v133; // [rsp+330h] [rbp-70h]
  __int128 v134; // [rsp+338h] [rbp-68h] BYREF
  __int64 v135; // [rsp+348h] [rbp-58h]
  volatile signed __int64 *v136; // [rsp+350h] [rbp-50h] BYREF
  __int64 v137; // [rsp+358h] [rbp-48h]
  __m128i v138[4]; // [rsp+360h] [rbp-40h] BYREF

  v133 = a5; /*0x100485f57*/
  v137 = a4; /*0x100485f5b*/
  v9 = a1; /*0x100485f65*/
  v92 = std::time::Instant::now::hda76af2c3a449055(*(double *)a7.i64); /*0x100485f6d*/
  v93 = v10; /*0x100485f74*/
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider_with_reads::ha8d4786e96a919d2( /*0x100485f8f*/
    &v123,
    a2,
    *(unsigned __int16 **)a3,
    *(void **)(a3 + 8),
    a6);
  qmemcpy(v113, v124, sizeof(v113)); /*0x100485fbc*/
  if ( v123 == (const __m128i *)0x8000000000000000LL ) /*0x100485fc2*/
  {
    qmemcpy(a1 + 1, v113, 0x60u); /*0x100485fd4*/
    *a1 = 2; /*0x100485fd7*/
    return v9; /*0x100485fde*/
  }
  v114 = a1; /*0x100485fe3*/
  *(_QWORD *)&__src[160] = v132; /*0x100485fee*/
  *(_QWORD *)&__src[152] = v131; /*0x100485ff9*/
  *(_QWORD *)&__src[144] = v130; /*0x100486007*/
  *(_QWORD *)&__src[136] = v129; /*0x100486015*/
  *(_QWORD *)&__src[128] = v128; /*0x100486023*/
  *(_QWORD *)&__src[120] = v127; /*0x100486031*/
  *(_QWORD *)&__src[112] = v126; /*0x100486046*/
  *(_QWORD *)&__src[104] = v125; /*0x10048604d*/
  qmemcpy(&__src[8], v113, 0x60u); /*0x100486067*/
  *(_QWORD *)__src = v123; /*0x10048606a*/
  v11 = std::time::Instant::elapsed::h457f209775ed485c(&v92); /*0x100486078*/
  v95 = 0x3E8 * (unsigned __int128)(unsigned __int64)v11 + v12 / 0xF4240uLL; /*0x10048609b*/
  v13 = *(_QWORD *)&__src[56]; /*0x1004860a9*/
  v14 = *(_QWORD *)&__src[64]; /*0x1004860b0*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1004860be*/
  v16 = v15; /*0x1004860c0*/
  if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x1004860c7*/
  {
    v17 = *(_QWORD *)v15; /*0x1004860cd*/
    v18 = *(_QWORD *)(v16 + 8); /*0x1004860d0*/
  }
  else
  {
    v17 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)a7.i64); /*0x100486e18*/
    *(_QWORD *)v16 = v17; /*0x100486e1d*/
    *(_QWORD *)(v16 + 8) = v18; /*0x100486e20*/
    *(_BYTE *)(v16 + 16) = 1; /*0x100486e24*/
  }
  *(_QWORD *)v16 = v17 + 1; /*0x1004860d8*/
  memset(v124, 0, 24); /*0x1004860fe*/
  v123 = (const __m128i *)&xmmword_1016F24C0; /*0x10048610c*/
  v124[1].i64[1] = v17; /*0x100486113*/
  v124[2].i64[0] = v18; /*0x10048611a*/
  if ( v14 ) /*0x100486124*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h0449c77c6cda2fbb(&v123, v14, &v124[1].u64[1], 1); /*0x100486e44*/
    v84 = (_QWORD *)(v13 + 16); /*0x100486e49*/
    do /*0x100486e86*/
    {
      codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::he1f7154c6962ee2f( /*0x100486e60*/
        v113,
        *(v84 - 1),
        *v84,
        v82,
        v83);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h62a3ac88aaa81a14(&v123, v113); /*0x100486e73*/
      v84 += 3; /*0x100486e78*/
      --v14; /*0x100486e7c*/
    }
    while ( v14 ); /*0x100486e86*/
  }
  v110 = v124[2].i64[0]; /*0x100486131*/
  v109 = v124[1]; /*0x10048614d*/
  v108 = v124[0]; /*0x100486170*/
  v107 = v123; /*0x100486177*/
  v90 = std::time::Instant::now::hda76af2c3a449055(*(double *)a7.i64); /*0x100486183*/
  v91 = v19; /*0x10048618a*/
  if ( *(_BYTE *)(a3 + 16) == 1 ) /*0x100486195*/
  {
    v124[0] = *(__m128i *)&__src[80]; /*0x1004861b7*/
    v123 = *(const __m128i **)&__src[72]; /*0x1004861be*/
    *(_QWORD *)&__src[72] = 0; /*0x1004861c5*/
    *(_OWORD *)&__src[80] = 8u; /*0x1004861d0*/
    codexmate_lib::core::relay::codex_thread_visibility::patch_instruction_rollouts_excluding::h38c15b6c48c5b6ef( /*0x1004861fb*/
      v113,
      &v123,
      &v107);
    v105 = v113[0]; /*0x10048620e*/
    v106 = *(_QWORD *)&v113[1]; /*0x100486223*/
    v20 = 1; /*0x10048622a*/
  }
  else
  {
    v20 = 0; /*0x100486232*/
  }
  v21 = std::time::Instant::elapsed::h457f209775ed485c(&v90); /*0x10048623c*/
  v94 = 0x3E8 * (unsigned __int128)(unsigned __int64)v21 + v22 / 0xF4240uLL; /*0x10048625f*/
  v88 = std::time::Instant::now::hda76af2c3a449055(*(double *)a7.i64); /*0x100486272*/
  v89 = v23; /*0x100486279*/
  if ( *(_BYTE *)(a3 + 17) == 1 ) /*0x100486284*/
  {
    v117 = *(_QWORD *)&__src[112]; /*0x100486291*/
    v116 = *(_QWORD *)&__src[104]; /*0x1004862a6*/
    v115 = *(_QWORD *)&__src[96]; /*0x1004862ad*/
    *(_QWORD *)&__src[96] = 0; /*0x1004862b4*/
    *(_QWORD *)&__src[104] = 8; /*0x1004862bf*/
    *(_QWORD *)&__src[112] = 0; /*0x1004862ca*/
    v24 = *(_BYTE *)(v16 + 16) == 1; /*0x1004862d5*/
    v111 = v20; /*0x1004862da*/
    if ( v24 ) /*0x1004862e1*/
    {
      v25 = *(_QWORD *)v16; /*0x1004862e7*/
      v26 = *(_QWORD *)(v16 + 8); /*0x1004862ea*/
    }
    else
    {
      v25 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)a7.i64); /*0x100486e8d*/
      *(_QWORD *)v16 = v25; /*0x100486e92*/
      *(_QWORD *)(v16 + 8) = v26; /*0x100486e95*/
      *(_BYTE *)(v16 + 16) = 1; /*0x100486e99*/
    }
    *(_QWORD *)v16 = v25 + 1; /*0x1004862f2*/
    v99 = 0; /*0x1004862fc*/
    v98 = 0; /*0x10048630a*/
    v97 = 0; /*0x100486318*/
    v96 = (const __m128i *)&xmmword_1016F24C0; /*0x10048631f*/
    v100 = v25; /*0x100486326*/
    v101 = v26; /*0x10048632d*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h760484c9e4a2d1cc(&v115, &v96); /*0x100486342*/
    v28 = v117; /*0x100486347*/
    v118 = v117; /*0x10048634e*/
    si128 = 0u; /*0x100486355*/
    v120 = 0; /*0x10048636b*/
    if ( v137 ) /*0x10048637b*/
    {
      if ( !v117 ) /*0x100486380*/
        goto LABEL_26; /*0x100486380*/
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(v133 + 40))(v137, 0, v117); /*0x100486393*/
    }
    v29 = v116; /*0x100486396*/
    if ( v28 > 7 ) /*0x1004863a1*/
    {
      v87[0] = v137; /*0x1004863ab*/
      v87[1] = v133; /*0x1004863b6*/
      v123 = nullptr; /*0x1004863bd*/
      v124[0].i64[1] = 4; /*0x1004863c8*/
      v124[1].i64[0] = 0; /*0x1004863d3*/
      v124[2].i64[0] = 1; /*0x1004863de*/
      v124[2].i64[1] = (__int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_9; /*0x1004863f0*/
      v124[3].i64[0] = 0; /*0x1004863f7*/
      v124[4].i64[0] = 0; /*0x100486402*/
      v124[5].i16[0] = 0; /*0x10048640d*/
      rayon_core::registry::Registry::new::hd25ab9d26de5ca1a(v113, &v123, v27); /*0x100486427*/
      if ( *(_QWORD *)&v113[0] == 3 ) /*0x10048643e*/
      {
        v136 = *((volatile signed __int64 **)&v113[0] + 1); /*0x100486444*/
        *(_QWORD *)&v134 = 0; /*0x100486448*/
        BYTE8(v134) = 0; /*0x100486450*/
        v135 = 0; /*0x100486454*/
        v121 = v28; /*0x10048645c*/
        v123 = (const __m128i *)v29; /*0x100486467*/
        v124[0].i64[0] = v28; /*0x10048646e*/
        v124[0].i64[1] = (__int64)v87; /*0x10048647c*/
        v124[1].i64[0] = (__int64)&v134; /*0x100486487*/
        v124[1].i64[1] = (__int64)&v121; /*0x100486495*/
        rayon_core::registry::Registry::in_worker::h4531a6bfdc43ec18(v113, *((_QWORD *)&v113[0] + 1) + 128LL, &v123); /*0x1004864aa*/
        v30 = *(_QWORD *)&v113[0]; /*0x1004864af*/
        if ( *(_QWORD *)&v113[1] ) /*0x1004864c7*/
        {
          v31 = (*(_QWORD *)&v113[1] - 1LL) & 0x7FFFFFFFFFFFFFFLL; /*0x1004864da*/
          if ( v31 >= 3 ) /*0x1004864ea*/
          {
            v45 = (v31 + 1) & 0xFFFFFFFFFFFFFFFCLL; /*0x1004867e6*/
            v32 = 0; /*0x1004867ea*/
            v33 = 0; /*0x1004867ee*/
            v34 = *((_QWORD *)&v113[0] + 1); /*0x1004867f1*/
            do /*0x10048683c*/
            {
              a7 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(v34 + 8)), v32); /*0x100486805*/
              v32 = _mm_add_epi64( /*0x100486820*/
                      _mm_loadu_si128((const __m128i *)(v34 + 104)),
                      _mm_add_epi64(
                        _mm_add_epi64(
                          _mm_loadu_si128((const __m128i *)(v34 + 72)),
                          _mm_loadu_si128((const __m128i *)(v34 + 40))),
                        a7));
              v33 += *(_QWORD *)(v34 + 120) + *(_QWORD *)(v34 + 88) + *(_QWORD *)(v34 + 56) + *(_QWORD *)(v34 + 24); /*0x100486830*/
              v34 += 128; /*0x100486834*/
              v45 -= 4LL; /*0x100486838*/
            }
            while ( v45 ); /*0x10048683c*/
          }
          else
          {
            v32 = 0; /*0x1004864f0*/
            v33 = 0; /*0x1004864f4*/
            v34 = *((_QWORD *)&v113[0] + 1); /*0x1004864f7*/
          }
          if ( (v113[1] & 3) != 0 ) /*0x100486841*/
          {
            v46 = 0; /*0x100486846*/
            do /*0x100486866*/
            {
              a7 = _mm_loadu_si128((const __m128i *)(v34 + v46 + 8)); /*0x100486850*/
              v32 = _mm_add_epi64(v32, a7); /*0x100486856*/
              v33 += *(_QWORD *)(v34 + v46 + 24); /*0x10048685a*/
              v46 += 32; /*0x10048685f*/
            }
            while ( 32 * (v113[1] & 3) != v46 ); /*0x100486866*/
          }
        }
        else
        {
          v32 = 0; /*0x1004867da*/
          v33 = 0; /*0x1004867de*/
        }
        v138[0] = v32; /*0x100486868*/
        if ( *(_QWORD *)&v113[0] ) /*0x100486870*/
        {
          v30 = 32LL * *(_QWORD *)&v113[0]; /*0x100486872*/
          *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x10048687b*/
                                *((_QWORD *)&v113[0] + 1),
                                32LL * *(_QWORD *)&v113[0],
                                8);
        }
        _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(&v134); /*0x100486884*/
        v47 = v134; /*0x100486889*/
        *(_QWORD *)&v134 = 0; /*0x10048688d*/
        if ( v47 ) /*0x100486898*/
        {
          _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28( /*0x10048689d*/
            v47,
            v30,
            *(double *)a7.i64);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 64, 8); /*0x1004868af*/
        }
        _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v136); /*0x1004868b8*/
        if ( !_InterlockedDecrement64(v136) ) /*0x1004868c1*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v136); /*0x1004868cb*/
      }
      else
      {
        v134 = v113[0]; /*0x1004865b9*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1004865cf*/
        {
          *(_QWORD *)&v113[0] = &v134; /*0x1004865d9*/
          *((_QWORD *)&v113[0] + 1) = _$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50; /*0x1004865e7*/
          v124[2].i64[1] = 2; /*0x1004865ee*/
          v124[3].i64[0] = (__int64)"codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100486600*/
          v124[3].i64[1] = 51; /*0x100486607*/
          v124[4].i64[1] = (__int64)&unk_1018F9057; /*0x100486619*/
          v124[5].i64[0] = (__int64)v113; /*0x100486620*/
          v123 = nullptr; /*0x100486627*/
          v124[0].i64[0] = (__int64)"codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100486632*/
          v124[0].i64[1] = 51; /*0x100486639*/
          v124[1].i64[0] = 0; /*0x100486644*/
          v124[1].i64[1] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x100486656*/
          v124[2].i64[0] = 41; /*0x10048665d*/
          v124[4].i64[0] = 0x264D00000001LL; /*0x100486672*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v121, &v123); /*0x100486687*/
        }
        v40 = 144 * v28; /*0x100486693*/
        if ( v137 ) /*0x10048669c*/
        {
          v122 = v28; /*0x1004866a2*/
          v41.i64[0] = 0; /*0x1004866a9*/
          v138[0] = 0; /*0x1004866ad*/
          v42 = 1; /*0x1004866b2*/
          v33 = 0; /*0x1004866b8*/
          do /*0x100486721*/
          {
            codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1( /*0x1004866ca*/
              &v123,
              v29,
              *(double *)v41.i64);
            v112 = _mm_loadu_si128(v124); /*0x1004866d7*/
            v43 = v124[1].i64[0]; /*0x1004866df*/
            (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(v133 + 40))(v137, v42, v122); /*0x1004866f8*/
            v29 += 144; /*0x1004866fb*/
            v33 += v43; /*0x100486702*/
            v41 = _mm_add_epi64(_mm_load_si128(v138), v112); /*0x10048670a*/
            v138[0] = v41; /*0x100486712*/
            ++v42; /*0x100486717*/
            v40 -= 144; /*0x10048671a*/
          }
          while ( v40 ); /*0x100486721*/
        }
        else
        {
          v41.i64[0] = 0; /*0x10048677d*/
          v138[0] = 0; /*0x100486781*/
          v33 = 0; /*0x100486786*/
          do /*0x1004867c6*/
          {
            codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1( /*0x100486796*/
              &v123,
              v29,
              *(double *)v41.i64);
            v29 += 144; /*0x10048679b*/
            v41 = _mm_loadu_si128(v124); /*0x1004867a2*/
            v138[0] = _mm_add_epi64(_mm_load_si128(v138), v41); /*0x1004867b3*/
            v33 += v124[1].i64[0]; /*0x1004867b8*/
            v40 -= 144; /*0x1004867bf*/
          }
          while ( v40 ); /*0x1004867c6*/
        }
        core::ptr::drop_in_place$LT$rayon_core..ThreadPoolBuildError$GT$::h0da18503b5620f99( /*0x1004867d0*/
          v134,
          *((_QWORD *)&v134 + 1),
          *(double *)v41.i64);
      }
      goto LABEL_51; /*0x1004868cb*/
    }
    if ( v28 ) /*0x100486509*/
    {
      v36 = 144 * v28; /*0x100486516*/
      if ( v137 ) /*0x10048651f*/
      {
        v122 = v28; /*0x100486525*/
        v37.i64[0] = 0; /*0x10048652c*/
        v138[0] = 0; /*0x100486530*/
        v38 = 1; /*0x100486535*/
        v33 = 0; /*0x10048653b*/
        do /*0x1004865a1*/
        {
          codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1( /*0x10048654a*/
            &v123,
            v29,
            *(double *)v37.i64);
          v112 = _mm_loadu_si128(v124); /*0x100486557*/
          v39 = v124[1].i64[0]; /*0x10048655f*/
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(v133 + 40))(v137, v38, v122); /*0x100486578*/
          v29 += 144; /*0x10048657b*/
          v33 += v39; /*0x100486582*/
          v37 = _mm_add_epi64(_mm_load_si128(v138), v112); /*0x10048658a*/
          v138[0] = v37; /*0x100486592*/
          ++v38; /*0x100486597*/
          v36 -= 144; /*0x10048659a*/
        }
        while ( v36 ); /*0x1004865a1*/
      }
      else
      {
        v44.i64[0] = 0; /*0x100486728*/
        v138[0] = 0; /*0x10048672c*/
        v33 = 0; /*0x100486731*/
        do /*0x100486776*/
        {
          codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_target::h821ca4ad370066e1( /*0x100486746*/
            &v123,
            v29,
            *(double *)v44.i64);
          v29 += 144; /*0x10048674b*/
          v44 = _mm_loadu_si128(v124); /*0x100486752*/
          v138[0] = _mm_add_epi64(_mm_load_si128(v138), v44); /*0x100486763*/
          v33 += v124[1].i64[0]; /*0x100486768*/
          v36 -= 144; /*0x10048676f*/
        }
        while ( v36 ); /*0x100486776*/
      }
      goto LABEL_51; /*0x1004865a1*/
    }
LABEL_26:
    v138[0] = 0; /*0x1004865a8*/
    v33 = 0; /*0x1004865b1*/
LABEL_51:
    si128 = _mm_load_si128(v138); /*0x1004868d0*/
    v120 = v33; /*0x1004868dd*/
    if ( v33 | si128.i64[0] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100486900*/
    {
      *(_QWORD *)&v113[0] = &v118; /*0x100486922*/
      *((_QWORD *)&v113[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100486930*/
      *(_QWORD *)&v113[1] = &si128; /*0x100486937*/
      *((_QWORD *)&v113[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10048693e*/
      *(_QWORD *)&v113[2] = &si128.i64[1]; /*0x100486945*/
      *((_QWORD *)&v113[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10048694c*/
      *(_QWORD *)&v113[3] = &v120; /*0x100486953*/
      *((_QWORD *)&v113[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10048695a*/
      v124[2].i64[1] = 3; /*0x100486961*/
      v124[3].i64[0] = (__int64)"codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100486973*/
      v124[3].i64[1] = 51; /*0x10048697a*/
      v124[4].i64[1] = (__int64)&unk_1018F826B; /*0x10048698c*/
      v124[5].i64[0] = (__int64)v113; /*0x10048699a*/
      v123 = nullptr; /*0x1004869a1*/
      v124[0].i64[0] = (__int64)"codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x1004869ac*/
      v124[0].i64[1] = 51; /*0x1004869b3*/
      v124[1].i64[0] = 0; /*0x1004869be*/
      v124[1].i64[1] = (__int64)"src/core/relay/codex_thread_visibility.rs"; /*0x1004869d0*/
      v124[2].i64[0] = 41; /*0x1004869d7*/
      v124[4].i64[0] = 0x262700000001LL; /*0x1004869ec*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v121, &v123); /*0x100486a01*/
    }
    v104 = v120; /*0x100486a0d*/
    HIDWORD(_RAX) = HIDWORD(v118); /*0x100486a22*/
    v103 = si128; /*0x100486a30*/
    v102 = v118; /*0x100486a37*/
    v49 = v97; /*0x100486a3e*/
    if ( v97 ) /*0x100486a48*/
    {
      v50 = v99; /*0x100486a4e*/
      if ( v99 ) /*0x100486a58*/
      {
        v51 = v96; /*0x100486a5e*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v96)); /*0x100486a6f*/
        v53 = v96 + 1; /*0x100486a72*/
        do /*0x100486a90*/
        {
          if ( !(_WORD)_R13D ) /*0x100486a96*/
          {
            do /*0x100486abd*/
            {
              v54 = _mm_movemask_epi8(_mm_load_si128(v53)); /*0x100486aa6*/
              v51 -= 24; /*0x100486aab*/
              ++v53; /*0x100486ab2*/
            }
            while ( v54 == 0xFFFF ); /*0x100486abd*/
            _R13D = ~v54; /*0x100486abf*/
          }
          __asm { tzcnt eax, r13d } /*0x100486ac2*/
          v55 = -3 * _RAX; /*0x100486aca*/
          v56 = *((_QWORD *)&v51[-1] + v55 - 1); /*0x100486ace*/
          if ( v56 ) /*0x100486ad6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-1].i64[v55], v56, 1); /*0x100486ae5*/
          --v50; /*0x100486a80*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100486a87*/
          _R13D &= _R13D - 1; /*0x100486a8a*/
        }
        while ( v50 ); /*0x100486a90*/
      }
      v57 = (24 * v49 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100486af8*/
      v58 = v57 + v49 + 17; /*0x100486aff*/
      if ( v58 ) /*0x100486b03*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v96 - v57, v58, 16); /*0x100486b17*/
    }
    v59 = v116; /*0x100486b1c*/
    v60 = v117; /*0x100486b23*/
    v20 = v111; /*0x100486b2d*/
    if ( v117 ) /*0x100486b34*/
    {
      v61 = (_QWORD *)(v116 + 56); /*0x100486b36*/
      do /*0x100486b4a*/
      {
        v62 = *(v61 - 7); /*0x100486b4c*/
        if ( v62 ) /*0x100486b53*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v61 - 6), v62, 1); /*0x100486b5e*/
        v63 = *(v61 - 4); /*0x100486b63*/
        if ( v63 ) /*0x100486b6a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v61 - 3), v63, 1); /*0x100486b75*/
        v64 = *(v61 - 1); /*0x100486b7a*/
        if ( 2 * v64 ) /*0x100486b7e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v61, v64, 1); /*0x100486b93*/
        v61 += 18; /*0x100486b40*/
        --v60; /*0x100486b47*/
      }
      while ( v60 ); /*0x100486b4a*/
    }
    if ( v115 ) /*0x100486ba4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 144 * v115, 8); /*0x100486bb6*/
    v35 = 1; /*0x100486bbb*/
    goto LABEL_77; /*0x100486bbb*/
  }
  v35 = 0; /*0x1004864ff*/
LABEL_77:
  v65 = std::time::Instant::elapsed::h457f209775ed485c(&v88); /*0x100486bc0*/
  v113[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v65 + v66 / 0xF4240uLL; /*0x100486bea*/
  v123 = (const __m128i *)&v95; /*0x100486c0d*/
  v124[0].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100486c1b*/
  v124[0].i64[1] = (__int64)&v94; /*0x100486c29*/
  v124[1].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100486c30*/
  v124[1].i64[1] = (__int64)v113; /*0x100486c3e*/
  v124[2].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100486c45*/
  v124[2].i64[1] = (__int64)&__src[120]; /*0x100486c4c*/
  v124[3].i64[0] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100486c5a*/
  v124[3].i64[1] = (__int64)&__src[160]; /*0x100486c61*/
  v124[4].i64[0] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100486c68*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &unk_1018F7D08, &v123); /*0x100486c84*/
  codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100486ca8*/
    (__int64)&unk_1016E9E70,
    16,
    (__int64)"phase_split/payload/model_reasoning_effortSELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '' AND COALESCE(archived, 0) = 0/payload/base_instructionsprovenance",
    11,
    v85);
  v9 = v114; /*0x100486cad*/
  memcpy(v114 + 9, __src, 0xA8u); /*0x100486cc4*/
  v67 = *((_QWORD *)&v105 + 1); /*0x100486cd0*/
  v9[1] = v105; /*0x100486cd7*/
  v9[2] = v67; /*0x100486cdb*/
  v9[3] = v106; /*0x100486ce6*/
  v9[8] = v104; /*0x100486cf1*/
  v9[7] = v103.i64[1]; /*0x100486cfc*/
  HIDWORD(_RAX) = HIDWORD(v102); /*0x100486d00*/
  v69 = v103.i64[0]; /*0x100486d07*/
  v9[5] = v102; /*0x100486d0e*/
  v9[6] = v69; /*0x100486d12*/
  *v9 = v20; /*0x100486d16*/
  v9[4] = v35; /*0x100486d19*/
  v70 = v108.i64[0]; /*0x100486d1d*/
  if ( v108.i64[0] ) /*0x100486d27*/
  {
    v71 = v109.i64[0]; /*0x100486d2d*/
    if ( v109.i64[0] ) /*0x100486d37*/
    {
      v72 = v107; /*0x100486d3d*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v107)); /*0x100486d4e*/
      v74 = v107 + 1; /*0x100486d51*/
      do /*0x100486d70*/
      {
        if ( !(_WORD)_R13D ) /*0x100486d76*/
        {
          do /*0x100486d9d*/
          {
            v75 = _mm_movemask_epi8(_mm_load_si128(v74)); /*0x100486d86*/
            v72 -= 24; /*0x100486d8b*/
            ++v74; /*0x100486d92*/
          }
          while ( v75 == 0xFFFF ); /*0x100486d9d*/
          _R13D = ~v75; /*0x100486d9f*/
        }
        __asm { tzcnt eax, r13d } /*0x100486da2*/
        v76 = -3 * _RAX; /*0x100486daa*/
        v77 = *((_QWORD *)&v72[-1] + v76 - 1); /*0x100486dae*/
        if ( v77 ) /*0x100486db6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72[-1].i64[v76], v77, 1); /*0x100486dc5*/
        --v71; /*0x100486d60*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100486d67*/
        _R13D &= _R13D - 1; /*0x100486d6a*/
      }
      while ( v71 ); /*0x100486d70*/
    }
    v78 = (24 * v70 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100486dd8*/
    v79 = v78 + v70; /*0x100486ddc*/
    v24 = v79 == -17; /*0x100486ddf*/
    v80 = v79 + 17; /*0x100486ddf*/
    v9 = v114; /*0x100486de3*/
    if ( !v24 ) /*0x100486dea*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v107 - v78, v80, 16); /*0x100486dfe*/
  }
  return v9; /*0x100486e06*/
}
