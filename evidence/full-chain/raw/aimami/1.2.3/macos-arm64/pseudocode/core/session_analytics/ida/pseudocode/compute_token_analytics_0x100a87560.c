// __ZN13codexmate_lib4core17session_analytics23compute_token_analytics @ 0x100a87560 | 基线 same-set
const __m128i **__fastcall codexmate_lib::core::session_analytics::compute_token_analytics::hc97acedf3fad6323(
        const __m128i **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r13
  const __m128i **v6; // r12
  const __m128i *v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  bool v14; // zf
  __int64 v15; // rax
  const __m128i *v16; // rdx
  __m128i v17; // xmm0
  double v18; // r10
  __m128i v19; // xmm1
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // r11
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 *v31; // rbx
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  double v37; // xmm0_8
  unsigned __int64 v38; // rdx
  __int8 *v39; // rax
  const __m128i *v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  char v45; // r9
  const __m128i *v46; // r11
  unsigned __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r11
  const __m128i *v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v56; // r15
  double v57; // xmm1_8
  __int64 v58; // rbx
  unsigned __int32 v59; // eax
  int v60; // eax
  int v61; // edx
  const __m128i *v62; // r14
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 i64; // r14
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  double v69; // xmm0_8
  const __m128i *v70; // r13
  const __m128i *v71; // rbx
  __int64 v72; // r14
  const __m128i *v73; // rax
  _QWORD *v74; // r15
  __int64 v75; // rsi
  unsigned __int64 v77; // r14
  const __m128i *v78; // rbx
  const __m128i *v79; // r15
  const __m128i *v81; // r12
  int v82; // r13d
  __int64 v83; // rax
  __int64 v84; // rsi
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r14
  unsigned __int64 v87; // r14
  _QWORD v89[4]; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD v90[3]; // [rsp+28h] [rbp-198h] BYREF
  __int64 v91; // [rsp+40h] [rbp-180h]
  __int64 v92; // [rsp+48h] [rbp-178h]
  __int64 v93; // [rsp+50h] [rbp-170h]
  __int64 v94; // [rsp+58h] [rbp-168h]
  __int64 v95; // [rsp+60h] [rbp-160h]
  unsigned __int64 v96; // [rsp+68h] [rbp-158h]
  __int64 v97; // [rsp+70h] [rbp-150h]
  __int64 v98; // [rsp+78h] [rbp-148h]
  double v99; // [rsp+80h] [rbp-140h]
  __int64 v100; // [rsp+88h] [rbp-138h]
  const __m128i *v101; // [rsp+90h] [rbp-130h] BYREF
  unsigned __int64 v102; // [rsp+98h] [rbp-128h]
  const __m128i *v103; // [rsp+A0h] [rbp-120h]
  const __m128i *v104; // [rsp+A8h] [rbp-118h]
  __int64 v105; // [rsp+B0h] [rbp-110h]
  const __m128i *v106; // [rsp+B8h] [rbp-108h]
  const __m128i *v107; // [rsp+C0h] [rbp-100h]
  const __m128i *v108; // [rsp+C8h] [rbp-F8h]
  const __m128i *v109; // [rsp+D0h] [rbp-F0h]
  const __m128i *v110; // [rsp+D8h] [rbp-E8h]
  const __m128i *v111; // [rsp+E0h] [rbp-E0h]
  const __m128i *v112; // [rsp+E8h] [rbp-D8h]
  unsigned __int64 v113; // [rsp+F0h] [rbp-D0h] BYREF
  double v114; // [rsp+F8h] [rbp-C8h]
  const __m128i *v115; // [rsp+100h] [rbp-C0h]
  __int64 *v116; // [rsp+108h] [rbp-B8h]
  const __m128i **v117; // [rsp+110h] [rbp-B0h]
  __int64 v118; // [rsp+118h] [rbp-A8h]
  const __m128i *v119; // [rsp+120h] [rbp-A0h]
  const __m128i *v120; // [rsp+128h] [rbp-98h]
  const __m128i *v121; // [rsp+130h] [rbp-90h]
  unsigned __int64 v122; // [rsp+138h] [rbp-88h] BYREF
  const __m128i *v123; // [rsp+140h] [rbp-80h]
  const __m128i *v124; // [rsp+148h] [rbp-78h]
  __int64 v125; // [rsp+150h] [rbp-70h]
  unsigned __int64 v126; // [rsp+158h] [rbp-68h]
  double v127; // [rsp+160h] [rbp-60h]
  __m128i v128; // [rsp+168h] [rbp-58h] BYREF
  __int64 v129; // [rsp+178h] [rbp-48h]
  const __m128i *v130; // [rsp+180h] [rbp-40h]
  double v131; // [rsp+188h] [rbp-38h]
  double v132; // [rsp+190h] [rbp-30h]

  v5 = a3; /*0x100a87577*/
  v6 = a1; /*0x100a8757a*/
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v101, a2, a3, a4); /*0x100a87584*/
  v7 = v101; /*0x100a87589*/
  v122 = v102; /*0x100a87597*/
  v123 = v103; /*0x100a875a5*/
  v124 = v104; /*0x100a875b0*/
  if ( v101 != (const __m128i *)11 ) /*0x100a875b8*/
  {
    a1[11] = v112; /*0x100a879b7*/
    a1[10] = v111; /*0x100a879c3*/
    a1[9] = v110; /*0x100a879cf*/
    a1[8] = v109; /*0x100a879db*/
    a1[7] = v108; /*0x100a879e7*/
    a1[6] = v107; /*0x100a879f3*/
    v54 = (const __m128i *)v105; /*0x100a879f8*/
    a1[5] = v106; /*0x100a87a06*/
    a1[4] = v54; /*0x100a87a0b*/
    a1[3] = v124; /*0x100a87a14*/
    v55 = v122; /*0x100a87a19*/
    a1[2] = v123; /*0x100a87a24*/
    a1[1] = (const __m128i *)v55; /*0x100a87a29*/
    *a1 = v7; /*0x100a87a2e*/
    return v6; /*0x100a87a32*/
  }
  v113 = v122; /*0x100a875c9*/
  v114 = *(double *)&v123; /*0x100a875d0*/
  v115 = v124; /*0x100a875db*/
  v8 = a4; /*0x100a875e5*/
  v127 = COERCE_DOUBLE(codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(v5, a4)); /*0x100a875ed*/
  v9 = (__int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100a875f1*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a875f8*/
  v13 = v10; /*0x100a875fa*/
  v14 = *(_BYTE *)(v10 + 16) == 1; /*0x100a875fd*/
  v98 = a4; /*0x100a87601*/
  if ( v14 ) /*0x100a87608*/
  {
    v15 = *(_QWORD *)v10; /*0x100a8760e*/
    v16 = *(const __m128i **)(v13 + 8); /*0x100a87611*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a87ed0*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a4,
            v11,
            v12);
    *(_QWORD *)v13 = v15; /*0x100a87ed5*/
    *(_QWORD *)(v13 + 8) = v16; /*0x100a87ed8*/
    *(_BYTE *)(v13 + 16) = 1; /*0x100a87edc*/
  }
  *(_QWORD *)v13 = v15 + 1; /*0x100a87619*/
  v104 = nullptr; /*0x100a87623*/
  v103 = nullptr; /*0x100a87631*/
  v102 = 0; /*0x100a8763f*/
  v101 = (const __m128i *)&xmmword_1015FBEC0; /*0x100a8764d*/
  v105 = v15; /*0x100a87654*/
  v106 = v16; /*0x100a8765b*/
  v117 = v6; /*0x100a87673*/
  v99 = v114; /*0x100a8767a*/
  if ( v115 ) /*0x100a87681*/
  {
    v100 = v5; /*0x100a87687*/
    v95 = *(_QWORD *)&v114 + 112LL * (_QWORD)v115; /*0x100a8769f*/
    v17 = 0; /*0x100a876a6*/
    v9 = &v128.i64[1]; /*0x100a876aa*/
    v96 = 0x8000000000000000LL; /*0x100a876b2*/
    v119 = nullptr; /*0x100a876b9*/
    v120 = nullptr; /*0x100a876c4*/
    v121 = nullptr; /*0x100a876cf*/
    v118 = 0; /*0x100a876da*/
    v18 = v114; /*0x100a876e5*/
    do /*0x100a876f7*/
    {
      v19 = v17; /*0x100a876fd*/
      v20 = *(__int64 **)(*(_QWORD *)&v18 + 32LL); /*0x100a87701*/
      v21 = *(_QWORD *)(*(_QWORD *)&v18 + 40LL); /*0x100a87705*/
      *(_QWORD *)&v18 += 112LL; /*0x100a87709*/
      v22 = &v20[5 * v21]; /*0x100a87711*/
      v131 = 0.0; /*0x100a87715*/
      v23 = 0; /*0x100a8771d*/
      v24 = 0; /*0x100a87720*/
      v25 = 0; /*0x100a87723*/
      v26 = 0; /*0x100a87726*/
      while ( v20 != v22 ) /*0x100a87733*/
      {
        v27 = v26; /*0x100a87739*/
        v28 = v25; /*0x100a8773c*/
        v29 = v24; /*0x100a8773f*/
        v30 = v23; /*0x100a87742*/
        v31 = v20 + 5; /*0x100a87745*/
        v8 = *v20; /*0x100a87749*/
        v23 = v20[1]; /*0x100a8774c*/
        v24 = v20[2]; /*0x100a87750*/
        v25 = v20[3]; /*0x100a87754*/
        v26 = v20[4]; /*0x100a87758*/
        v20 += 5; /*0x100a8775c*/
        if ( v8 >= *(__int64 *)&v127 ) /*0x100a87763*/
        {
          v116 = v22; /*0x100a87765*/
          v128.i64[0] = v19.i64[0]; /*0x100a8776c*/
          v132 = v18; /*0x100a87771*/
          v32 = v23 - v30; /*0x100a87778*/
          if ( v23 - v30 <= 0 ) /*0x100a87783*/
            v32 = 0; /*0x100a87783*/
          v33 = v24 - v29; /*0x100a8778a*/
          if ( v24 - v29 <= 0 ) /*0x100a87790*/
            v33 = 0; /*0x100a87790*/
          v34 = v25 - v28; /*0x100a87797*/
          v35 = v26 - v27; /*0x100a8779d*/
          v91 = v32; /*0x100a877a0*/
          if ( v33 + v32 > v26 - v27 ) /*0x100a877ae*/
            v35 = v33 + v32; /*0x100a877ae*/
          if ( v35 <= 0 ) /*0x100a877b5*/
            v35 = 0; /*0x100a877b5*/
          v93 = v35; /*0x100a877b9*/
          if ( v34 <= 0 ) /*0x100a877c3*/
            v34 = 0; /*0x100a877c3*/
          v94 = v34; /*0x100a877c7*/
          v36 = v33 - v34; /*0x100a877ce*/
          if ( v36 <= 0 ) /*0x100a877d4*/
            v36 = 0; /*0x100a877d4*/
          v92 = v36; /*0x100a877d8*/
          v37 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v128.u64[1], v8); /*0x100a877df*/
          hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::he6f15f95f30fc90b( /*0x100a877f6*/
            &v122,
            &v101,
            &v128.u64[1],
            v37);
          v38 = v122; /*0x100a877fb*/
          v39 = (__int8 *)v123; /*0x100a87802*/
          if ( v122 != v96 ) /*0x100a8780d*/
          {
            v40 = *(const __m128i **)v125; /*0x100a8781b*/
            v97 = v125; /*0x100a8781e*/
            v41 = *(_QWORD *)(v125 + 8); /*0x100a87825*/
            v42 = v126 & v41; /*0x100a8782c*/
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v40 + (v126 & v41)))); /*0x100a87835*/
            if ( !(_DWORD)_R10 ) /*0x100a8783d*/
            {
              v52 = 16; /*0x100a87945*/
              do /*0x100a87963*/
              {
                v42 = v41 & (v52 + v42); /*0x100a8794e*/
                _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v40 + v42))); /*0x100a87957*/
                v52 += 16; /*0x100a8795c*/
              }
              while ( !(_DWORD)_R10 ); /*0x100a87963*/
            }
            __asm { tzcnt r10d, r10d } /*0x100a87843*/
            _R10 = v41 & (v42 + _R10); /*0x100a8784b*/
            v45 = v40->i8[_R10]; /*0x100a8784e*/
            if ( v45 >= 0 ) /*0x100a87856*/
            {
              _R9D = _mm_movemask_epi8(_mm_load_si128(v40)); /*0x100a8796f*/
              __asm { tzcnt r10d, r9d } /*0x100a87974*/
              v45 = v40->i8[_R10]; /*0x100a87979*/
            }
            v46 = v124; /*0x100a8785c*/
            v47 = v126 >> 57; /*0x100a87860*/
            v40->i8[_R10] = v126 >> 57; /*0x100a8786b*/
            v40[1].i8[v41 & (_R10 - 16)] = v47; /*0x100a8786f*/
            v48 = -7 * _R10; /*0x100a87877*/
            v49 = v97; /*0x100a87883*/
            *(_QWORD *)(v97 + 16) -= v45 & 1; /*0x100a8788a*/
            *(_QWORD *)((char *)&v40[-3] + v48 * 8 - 8) = v38; /*0x100a8788e*/
            v40[-3].i64[v48] = (__int64)v39; /*0x100a87893*/
            v39 = &v40->i8[-56 * _R10]; /*0x100a87898*/
            *(_QWORD *)((char *)&v40[-2] + v48 * 8 - 8) = v46; /*0x100a8789c*/
            v40[-2].i64[v48] = 0; /*0x100a878a1*/
            *(_QWORD *)((char *)&v40[-1] + v48 * 8 - 8) = 0; /*0x100a878aa*/
            v40[-1].i64[v48] = 0; /*0x100a878b3*/
            v40->i64[v48 - 1] = 0; /*0x100a878bc*/
            ++*(_QWORD *)(v49 + 24); /*0x100a878c5*/
          }
          v9 = &v128.i64[1]; /*0x100a878c9*/
          v18 = v132; /*0x100a878cd*/
          v22 = v116; /*0x100a878d1*/
          v119 = (const __m128i *)((char *)v119 + v91); /*0x100a878df*/
          v50 = v92; /*0x100a878e6*/
          v120 = (const __m128i *)((char *)v120 + v92); /*0x100a878ed*/
          v8 = v94; /*0x100a878f4*/
          v121 = (const __m128i *)((char *)v121 + v94); /*0x100a878fb*/
          *((_QWORD *)v39 - 4) += v91; /*0x100a87902*/
          v51 = v93; /*0x100a87906*/
          v118 += v93; /*0x100a8790d*/
          *(_QWORD *)&v131 += v93; /*0x100a87914*/
          *(__m128i *)(v39 - 24) = _mm_add_epi64( /*0x100a8792f*/
                                     _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v8),
                                     _mm_loadu_si128((const __m128i *)(v39 - 24)));
          *((_QWORD *)v39 - 1) += v51; /*0x100a87934*/
          v20 = v31; /*0x100a87938*/
          v19 = _mm_loadl_epi64(&v128); /*0x100a8793b*/
        }
      }
      v17.i64[1] = v19.i64[1]; /*0x100a87990*/
      *(double *)v17.i64 = *(double *)v19.i64 + 1.0; /*0x100a87994*/
      if ( *(__int64 *)&v131 <= 0 ) /*0x100a879a1*/
        v17 = v19; /*0x100a879a7*/
    }
    while ( *(_QWORD *)&v18 != v95 ); /*0x100a876f7*/
    v127 = 0.0; /*0x100a87a3f*/
    v56 = v118; /*0x100a87a48*/
    v57 = (double)(int)v118; /*0x100a87a52*/
    v131 = 0.0; /*0x100a87a57*/
    if ( *(double *)v17.i64 > 0.0 ) /*0x100a87a5c*/
      v131 = v57 / *(double *)v17.i64; /*0x100a87a66*/
    v5 = v100; /*0x100a87a6e*/
    if ( v118 > 0 ) /*0x100a87a75*/
    {
      v132 = (double)(int)v119 / v57 * 100.0; /*0x100a87a97*/
      *(double *)v128.i64 = (double)(int)v120 / v57 * 100.0; /*0x100a87ab0*/
      v127 = (double)(int)v121 / v57 * 100.0; /*0x100a87ac9*/
      v58 = 7; /*0x100a87ace*/
      if ( v98 != 5 ) /*0x100a87adb*/
        goto LABEL_48; /*0x100a87adb*/
LABEL_41:
      if ( *(_DWORD *)v5 ^ 0x61646F74 | *(unsigned __int8 *)(v5 + 4) ^ 0x79 ) /*0x100a87b44*/
      {
        v59 = _byteswap_ulong(*(_DWORD *)v5); /*0x100a87b4c*/
        if ( v59 == 1836019316 ) /*0x100a87b53*/
          v60 = *(unsigned __int8 *)(v5 + 4) - 104; /*0x100a87b5a*/
        else
          v60 = 2 * (v59 >= 0x6D6F6E74) - 1; /*0x100a87b6c*/
        if ( !v60 ) /*0x100a87b77*/
          v58 = 30; /*0x100a87b77*/
      }
      else
      {
        v58 = 1; /*0x100a87b5f*/
      }
      goto LABEL_48; /*0x100a87b77*/
    }
  }
  else
  {
    v131 = 0.0; /*0x100a87ae6*/
    v119 = nullptr; /*0x100a87aeb*/
    v120 = nullptr; /*0x100a87af6*/
    v121 = nullptr; /*0x100a87b01*/
    v56 = 0; /*0x100a87b0c*/
    v127 = 0.0; /*0x100a87b0f*/
  }
  v128.i64[0] = 0; /*0x100a87b1a*/
  v132 = 0.0; /*0x100a87b1f*/
  v58 = 7; /*0x100a87b24*/
  if ( v98 == 5 ) /*0x100a87b31*/
    goto LABEL_41; /*0x100a87b31*/
LABEL_48:
  v128.i64[1] = std::time::SystemTime::now::h1fe79e41f9d5677f(v9, v8); /*0x100a87b7b*/
  LODWORD(v129) = v61; /*0x100a87b84*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v122, &v128.u64[1], 0, 0); /*0x100a87b96*/
  v118 = v56; /*0x100a87ba2*/
  if ( (_BYTE)v122 ) /*0x100a87ba9*/
    v62 = nullptr; /*0x100a87bb1*/
  else
    v62 = v123; /*0x100a87bab*/
  v63 = 3LL * (unsigned int)(8 * v58); /*0x100a87bbb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v122, &v128.u64[1]); /*0x100a87bbf*/
  v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v63, 8); /*0x100a87bcc*/
  if ( !v64 ) /*0x100a87bd4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v63); /*0x100a87eee*/
  v128.i64[1] = v58; /*0x100a87bda*/
  v129 = v64; /*0x100a87bde*/
  v130 = nullptr; /*0x100a87be2*/
  i64 = (__int64)v62[-5400 * v58 + 5400].i64; /*0x100a87bf4*/
  do /*0x100a87c4a*/
  {
    v69 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v122, i64); /*0x100a87c52*/
    v70 = v130; /*0x100a87c57*/
    if ( v130 == (const __m128i *)v128.i64[1] ) /*0x100a87c5f*/
      v69 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v128.u64[1]); /*0x100a87c64*/
    --v58; /*0x100a87c10*/
    v66 = v129; /*0x100a87c13*/
    v67 = 3LL * (_QWORD)v70; /*0x100a87c17*/
    *(_QWORD *)(v129 + 8 * v67 + 16) = v124; /*0x100a87c20*/
    v68 = v122; /*0x100a87c25*/
    *(double *)(v66 + 8 * v67 + 8) = *(double *)&v123; /*0x100a87c30*/
    *(_QWORD *)(v66 + 8 * v67) = v68; /*0x100a87c35*/
    v130 = (const __m128i *)&v70->i8[1]; /*0x100a87c3c*/
    i64 += 86400; /*0x100a87c40*/
  }
  while ( v58 ); /*0x100a87c4a*/
  v71 = v130; /*0x100a87c6b*/
  v124 = v130; /*0x100a87c6f*/
  v72 = v129; /*0x100a87c77*/
  v123 = (const __m128i *)v129; /*0x100a87c7b*/
  v122 = v128.u64[1]; /*0x100a87c7f*/
  v128.i64[1] = 0; /*0x100a87c86*/
  v89[0] = v129; /*0x100a87c96*/
  v89[1] = v129 + 24LL * (_QWORD)v130; /*0x100a87c9d*/
  v89[2] = &v101; /*0x100a87cab*/
  v89[3] = &v128.i64[1]; /*0x100a87cb2*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc94f4fc1b25935d4( /*0x100a87cc7*/
    v90,
    v89,
    v69);
  v6 = v117; /*0x100a87cd3*/
  v117[3] = (const __m128i *)v90[2]; /*0x100a87cda*/
  v73 = (const __m128i *)v90[0]; /*0x100a87cdf*/
  v6[2] = (const __m128i *)v90[1]; /*0x100a87ced*/
  v6[1] = v73; /*0x100a87cf2*/
  v6[4] = (const __m128i *)v118; /*0x100a87cfe*/
  *((double *)v6 + 5) = v131; /*0x100a87d08*/
  *((double *)v6 + 6) = v132; /*0x100a87d14*/
  v6[7] = (const __m128i *)v128.i64[0]; /*0x100a87d20*/
  *((double *)v6 + 8) = v127; /*0x100a87d2c*/
  v6[9] = v119; /*0x100a87d3a*/
  v6[10] = v120; /*0x100a87d46*/
  v6[11] = v121; /*0x100a87d52*/
  *v6 = (const __m128i *)11; /*0x100a87d57*/
  if ( v71 ) /*0x100a87d62*/
  {
    v74 = (_QWORD *)(v72 + 8); /*0x100a87d64*/
    do /*0x100a87d77*/
    {
      v75 = *(v74 - 1); /*0x100a87d79*/
      if ( v75 ) /*0x100a87d80*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v74, v75, 1); /*0x100a87d8a*/
      v74 += 3; /*0x100a87d70*/
      v71 = (const __m128i *)((char *)v71 - 1); /*0x100a87d74*/
    }
    while ( v71 ); /*0x100a87d77*/
  }
  HIDWORD(_RAX) = HIDWORD(v122); /*0x100a87d91*/
  if ( v122 ) /*0x100a87d9b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24 * v122, 8); /*0x100a87dad*/
  v77 = v102; /*0x100a87db2*/
  if ( v102 ) /*0x100a87dbc*/
  {
    v78 = v104; /*0x100a87dc2*/
    if ( v104 ) /*0x100a87dcc*/
    {
      v79 = v101; /*0x100a87dd2*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v101)); /*0x100a87de3*/
      v81 = v101 + 1; /*0x100a87de6*/
      do /*0x100a87e00*/
      {
        if ( !(_WORD)_R13D ) /*0x100a87e06*/
        {
          do /*0x100a87e2d*/
          {
            v82 = _mm_movemask_epi8(_mm_load_si128(v81)); /*0x100a87e16*/
            v79 -= 56; /*0x100a87e1b*/
            ++v81; /*0x100a87e22*/
          }
          while ( v82 == 0xFFFF ); /*0x100a87e2d*/
          _R13D = ~v82; /*0x100a87e2f*/
        }
        __asm { tzcnt eax, r13d } /*0x100a87e32*/
        v83 = -7 * _RAX; /*0x100a87e3a*/
        v84 = *(_QWORD *)((char *)&v79[-3] + v83 * 8 - 8); /*0x100a87e3e*/
        if ( v84 ) /*0x100a87e46*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[-3].i64[v83], v84, 1); /*0x100a87e54*/
        v78 = (const __m128i *)((char *)v78 - 1); /*0x100a87df0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100a87df7*/
        _R13D &= _R13D - 1; /*0x100a87dfa*/
      }
      while ( v78 ); /*0x100a87e00*/
    }
    v85 = (56 * v77 + 71) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a87e63*/
    v86 = v85 + v77; /*0x100a87e67*/
    v14 = v86 == -17; /*0x100a87e6a*/
    v87 = v86 + 17; /*0x100a87e6a*/
    v6 = v117; /*0x100a87e6e*/
    if ( !v14 ) /*0x100a87e75*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v101 - v85, v87, 16); /*0x100a87e89*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v113); /*0x100a87e95*/
  if ( v113 ) /*0x100a87ea4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v99, 112 * v113, 8); /*0x100a87eb6*/
  return v6; /*0x100a87ebe*/
}