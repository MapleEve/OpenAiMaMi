// __ZN13codexmate_lib4core5relay12proxy_server36build_codex_openai_responses_headers @ 0x100269d60 | 基线 same-set
// [FULL IDA decompiler]

void *__fastcall codexmate_lib::core::relay::proxy_server::build_codex_openai_responses_headers::h8836eb31488784be(
        void *a1,
        __int64 a2,
        __m256i *a3,
        __int64 a4)
{
  size_t v4; // r12
  __m256i *v7; // rdi
  __int64 v8; // rsi
  _BYTE *v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 i; // rax
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  size_t v22; // rax
  __int64 v23; // rcx
  __m256i *v24; // rdi
  void *v25; // rsi
  __int64 v26; // rdx
  size_t v27; // r15
  bool v28; // zf
  void *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm5
  __m128i v33; // xmm6
  __m128i v34; // xmm7
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm3
  __int64 v39; // rcx
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  __m128i v42; // xmm5
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  unsigned __int32 v45; // eax
  unsigned int v46; // ecx
  int v47; // r14d
  __m128i v48; // xmm1
  size_t v49; // rdx
  const void *v50; // rdi
  char *v51; // rsi
  _QWORD *v52; // rax
  _QWORD *v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __m128i v56; // xmm5
  __m128i v57; // xmm6
  __m128i v58; // xmm7
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  __m128i v62; // xmm3
  __int64 v63; // rcx
  __m128i v64; // xmm3
  __m128i v65; // xmm4
  __m128i v66; // xmm5
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __int64 v69; // rax
  int v70; // ecx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  _BYTE *v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  unsigned __int8 v91; // cl
  char v92; // al
  __int64 v93; // rbx
  __int64 v94; // r15
  __int64 j; // rax
  unsigned __int8 v96; // cl
  __int64 v97; // rbx
  __int64 v98; // r14
  __int64 v99; // rdx
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 *v103; // r14
  __int64 v104; // r8
  __int64 v105; // r9
  size_t v106; // rbx
  const void *v107; // r13
  size_t v108; // r12
  __int64 v109; // rcx
  __int64 v110; // rdx
  const void *v111; // rbx
  __int64 *v112; // r13
  __int64 v113; // r14
  void *v114; // rax
  __int64 v115; // rax
  __m128i v116; // xmm5
  __m128i v117; // xmm6
  __m128i v118; // xmm7
  __m128i v119; // xmm0
  __m128i v120; // xmm1
  __m128i v121; // xmm2
  __m128i v122; // xmm3
  __m128i v123; // xmm3
  __m128i v124; // xmm4
  __m128i v125; // xmm5
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int8 v131; // al
  __int64 v132; // rax
  __int64 k; // rax
  unsigned __int8 v134; // cl
  unsigned __int64 v135; // rdi
  unsigned __int64 v136; // rsi
  void *v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __m128i si128; // xmm0
  __m128i v141; // xmm1
  __m128i v142; // xmm2
  __m128i v143; // xmm3
  __m128i v144; // xmm4
  __m128i v145; // xmm5
  __m128i v146; // xmm6
  __int64 v147; // rdx
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  __m128i v150; // xmm2
  __m128i v151; // xmm3
  __m128i v152; // xmm4
  _QWORD v153[5]; // [rsp+8h] [rbp-308h] BYREF
  __m256i v154; // [rsp+30h] [rbp-2E0h] BYREF
  __int64 v155; // [rsp+50h] [rbp-2C0h]
  __m256i v156; // [rsp+58h] [rbp-2B8h] BYREF
  __int64 v157; // [rsp+78h] [rbp-298h]
  _QWORD v158[4]; // [rsp+80h] [rbp-290h] BYREF
  __int64 v159; // [rsp+A0h] [rbp-270h] BYREF
  __int128 v160; // [rsp+A8h] [rbp-268h]
  __int64 v161; // [rsp+B8h] [rbp-258h]
  _QWORD v162[4]; // [rsp+C0h] [rbp-250h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-230h]
  _QWORD v164[12]; // [rsp+E8h] [rbp-228h] BYREF
  char v165[8]; // [rsp+148h] [rbp-1C8h] BYREF
  __int128 v166; // [rsp+150h] [rbp-1C0h] BYREF
  __int64 v167; // [rsp+160h] [rbp-1B0h]
  __int64 v168; // [rsp+168h] [rbp-1A8h]
  _QWORD v169[2]; // [rsp+170h] [rbp-1A0h] BYREF
  __int64 v170; // [rsp+180h] [rbp-190h]
  __int64 v171; // [rsp+188h] [rbp-188h]
  unsigned __int64 v172; // [rsp+190h] [rbp-180h]
  unsigned __int64 v173; // [rsp+198h] [rbp-178h]
  __int64 v174; // [rsp+1A0h] [rbp-170h]
  char **v175; // [rsp+1A8h] [rbp-168h]
  __m256i v176; // [rsp+1B0h] [rbp-160h] BYREF
  __int64 v177; // [rsp+1D0h] [rbp-140h]
  __int64 v178; // [rsp+1D8h] [rbp-138h]
  __int64 v179; // [rsp+1E0h] [rbp-130h]
  __int64 v180; // [rsp+1E8h] [rbp-128h]
  __int64 v181; // [rsp+1F0h] [rbp-120h] BYREF
  __m256i *v182; // [rsp+1F8h] [rbp-118h]
  __m256i v183; // [rsp+200h] [rbp-110h] BYREF
  __int64 v184; // [rsp+220h] [rbp-F0h] BYREF
  __m256i v185; // [rsp+228h] [rbp-E8h] BYREF
  __int64 v186; // [rsp+248h] [rbp-C8h]
  __m256i v187; // [rsp+250h] [rbp-C0h] BYREF
  _QWORD v188[3]; // [rsp+270h] [rbp-A0h] BYREF
  unsigned __int64 v189; // [rsp+288h] [rbp-88h]
  int v190; // [rsp+294h] [rbp-7Ch]
  void *__src; // [rsp+298h] [rbp-78h]
  __m256i v192; // [rsp+2A0h] [rbp-70h] BYREF
  __int64 v193; // [rsp+2C0h] [rbp-50h]
  unsigned __int64 v194; // [rsp+2C8h] [rbp-48h]
  void *v195; // [rsp+2D0h] [rbp-40h]
  size_t v196; // [rsp+2D8h] [rbp-38h]
  _BYTE v197[41]; // [rsp+2E7h] [rbp-29h] BYREF

  v174 = a2;
  LOWORD(v164[11]) = 0;
  v164[9] = 2;
  v164[10] = 0;
  v164[3] = 0;
  v164[4] = 8;
  v164[5] = 0;
  v164[6] = 0;
  v164[7] = 8;
  v164[8] = 0;
  v164[0] = 0;
  v7 = (__m256i *)"stream";
  v8 = 6;
  v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("stream", 6, a4);
  if ( !v9 || *v9 != 1 || (LOBYTE(v11) = 1, v190 = v11, !v9[1]) )
  {
    memset(&v183, 0, sizeof(v183));
    v8 = (__int64)&v183;
    v7 = a3;
    v14 = http::header::map::HeaderMap$LT$T$GT$::get::hcb866ec1781bf934(a3, &v183);
    if ( v14 )
    {
      v8 = *(_QWORD *)(v14 + 8);
      v4 = *(_QWORD *)(v14 + 16);
      if ( !v4 )
      {
        v18 = 1;
        goto LABEL_13;
      }
      for ( i = 0; i != v4; ++i )
      {
        v16 = *(unsigned __int8 *)(v8 + i);
        v10 = (unsigned int)(v16 - 32);
        LOBYTE(v10) = (unsigned __int8)(v16 - 32) < 0x5Fu;
        if ( !((unsigned __int8)v10 | ((_BYTE)v16 == 9)) )
          goto LABEL_11;
      }
      if ( (v4 & 0x8000000000000000LL) != 0LL )
      {
        v17 = 0;
        goto LABEL_134;
      }
      v195 = a1;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, v8);
      v17 = 1;
      v137 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1);
      if ( !v137 )
LABEL_134:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v4);
      v18 = (__int64)v137;
      memcpy(v137, (const void *)v8, v4);
      if ( v4 < 8 )
      {
        v138 = 0;
        goto LABEL_241;
      }
      if ( v4 >= 0x20 )
      {
        v138 = v4 & 0x7FFFFFFFFFFFFFE0LL;
        v139 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
        v141 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
        v142 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
        do
        {
          v143 = _mm_loadu_si128((const __m128i *)(v18 + v139));
          v144 = _mm_loadu_si128((const __m128i *)(v18 + v139 + 16));
          v145 = _mm_add_epi8(v143, si128);
          v146 = _mm_add_epi8(v144, si128);
          *(__m128i *)(v18 + v139) = _mm_or_si128(
                                       _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v145, v141), v145), v142),
                                       v143);
          *(__m128i *)(v18 + v139 + 16) = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v146, v141), v146), v142),
                                            v144);
          v139 += 32;
        }
        while ( v138 != v139 );
        if ( v4 == v138 )
        {
LABEL_243:
          a1 = v195;
LABEL_13:
          v7 = (__m256i *)"text/event-stream";
          v8 = 17;
          v190 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                   "text/event-stream",
                   0x11u,
                   (void *)v18);
          if ( v4 )
          {
            v7 = (__m256i *)v18;
            v8 = v4;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v4, 1);
          }
          goto LABEL_15;
        }
        if ( (v4 & 0x18) == 0 )
        {
          do
          {
LABEL_241:
            *(_BYTE *)(v18 + v138) |= 32 * ((unsigned __int8)(*(_BYTE *)(v18 + v138) - 65) < 0x1Au);
            ++v138;
LABEL_242:
            ;
          }
          while ( v4 != v138 );
          goto LABEL_243;
        }
      }
      else
      {
        v138 = 0;
      }
      v147 = v138;
      v138 = v4 & 0x7FFFFFFFFFFFFFF8LL;
      v148 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
      v149 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
      v150 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
      do
      {
        v151 = _mm_loadl_epi64((const __m128i *)(v18 + v147));
        v152 = _mm_add_epi8(v151, v148);
        *(_QWORD *)(v18 + v147) = _mm_or_si128(
                                    _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v152, v149), v152), v150),
                                    v151).u64[0];
        v147 += 8;
      }
      while ( v138 != v147 );
      goto LABEL_242;
    }
LABEL_11:
    v190 = 0;
  }
LABEL_15:
  v196 = a3[1].u64[0];
  v19 = a3[1].u64[1];
  v172 = a3[2].u64[0];
  v168 = a3[1].i64[3];
  v20 = 2 * (unsigned int)(v19 == 0);
  v189 = v20;
  v175 = &off_101960160;
  v21 = 0;
  while ( v189 != 2 )
  {
    if ( v21 >= v19 )
    {
      v135 = v21;
      v136 = v19;
      goto LABEL_227;
    }
    v22 = v196 + 104 * v21;
    if ( (v189 & 1) == 0 )
      goto LABEL_27;
    v20 = v173;
    if ( v173 >= v172 )
    {
      v135 = v173;
      v136 = v172;
      v175 = &off_101960178;
LABEL_227:
      core::panicking::panic_bounds_check::h56740b1198b22635(v135, v136, v175, v20);
    }
    v23 = 9 * v173;
    v10 = v168;
    v24 = (__m256i *)(v168 + 72 * v173);
    v8 = 2;
    v189 = 2;
    if ( v24->i32[4] == 1 )
    {
      v173 = v24->u64[3];
      v23 = 1;
      v189 = 1;
    }
    v7 = v24 + 1;
    v182 = v7;
    if ( *(_QWORD *)(v22 + 64) )
    {
LABEL_30:
      v25 = *(void **)(v22 + 72);
      v27 = *(_QWORD *)(v22 + 80);
      v28 = v27 == 0;
      if ( (v27 & 0x8000000000000000LL) != 0LL )
      {
LABEL_133:
        v17 = 0;
        goto LABEL_134;
      }
      goto LABEL_31;
    }
LABEL_25:
    v7 = (__m256i *)*(unsigned int *)(v22 + 72);
    v25 = (void *)http::header::name::StandardHeader::as_str::h29c468d187218f48(v7, v8, v10, v23, v12, v13);
    v27 = v26;
    v28 = v26 == 0;
    if ( v26 < 0 )
      goto LABEL_133;
LABEL_31:
    __src = v25;
    if ( v28 )
    {
      v4 = 1;
      v194 = v21;
      memcpy((void *)1, v25, v27);
      v21 = v194;
      memcpy((void *)1, v25, v27);
    }
    else
    {
      v194 = v19;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v25);
      v17 = 1;
      v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1);
      if ( !v29 )
      {
LABEL_224:
        v4 = v27;
        goto LABEL_134;
      }
      v4 = (size_t)v29;
      memcpy(v29, __src, v27);
      if ( v27 < 8 )
      {
        v30 = 0;
        v19 = v194;
        goto LABEL_45;
      }
      v19 = v194;
      if ( v27 < 0x20 )
      {
        v30 = 0;
LABEL_42:
        v39 = v30;
        v30 = v27 & 0x7FFFFFFFFFFFFFF8LL;
        v40 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
        v41 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
        v42 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
        do
        {
          v43 = _mm_loadl_epi64((const __m128i *)(v4 + v39));
          v44 = _mm_add_epi8(v43, v40);
          *(_QWORD *)(v4 + v39) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v44, v41), v44), v42), v43).u64[0];
          v39 += 8;
        }
        while ( v30 != v39 );
        goto LABEL_46;
      }
      v30 = v27 & 0x7FFFFFFFFFFFFFE0LL;
      v31 = 0;
      v32 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
      v33 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
      v34 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
      do
      {
        v35 = _mm_loadu_si128((const __m128i *)(v4 + v31));
        v36 = _mm_loadu_si128((const __m128i *)(v4 + v31 + 16));
        v37 = _mm_add_epi8(v35, v32);
        v38 = _mm_add_epi8(v36, v32);
        *(__m128i *)(v4 + v31) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v37, v33), v37), v34), v35);
        *(__m128i *)(v4 + v31 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v38, v33), v38), v34), v36);
        v31 += 32;
      }
      while ( v30 != v31 );
      if ( v27 != v30 )
      {
        if ( (v27 & 0x18) != 0 )
          goto LABEL_42;
        do
        {
LABEL_45:
          *(_BYTE *)(v4 + v30) |= 32 * ((unsigned __int8)(*(_BYTE *)(v4 + v30) - 65) < 0x1Au);
          ++v30;
LABEL_46:
          ;
        }
        while ( v27 != v30 );
      }
      switch ( v27 )
      {
        case 2uLL:
          if ( *(_WORD *)v4 == 25972 )
            goto LABEL_59;
          goto LABEL_57;
        case 4uLL:
          if ( *(_DWORD *)v4 != 1953722216 )
            goto LABEL_57;
          goto LABEL_59;
        case 6uLL:
          v45 = _byteswap_ulong(*(_DWORD *)v4);
          v46 = 1702391909;
          if ( v45 != 1702391909
            || (v45 = (unsigned __int16)__ROL2__(*(_WORD *)(v4 + 4), 8),
                v46 = 25460,
                v47 = 0,
                (unsigned __int16)v45 != 25460) )
          {
            v47 = 2 * (v45 >= v46) - 1;
          }
          goto LABEL_69;
        case 7uLL:
          if ( !(*(_DWORD *)v4 ^ 0x72677075 | *(_DWORD *)(v4 + 3) ^ 0x65646172) )
            goto LABEL_59;
          goto LABEL_57;
        case 8uLL:
          if ( *(_QWORD *)v4 == 0x7372656C69617274LL )
            goto LABEL_59;
          goto LABEL_57;
        case 0xAuLL:
          if ( !(*(_QWORD *)v4 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6E6FLL)
            || !(*(_QWORD *)v4 ^ 0x696C612D7065656BLL | *(unsigned __int16 *)(v4 + 8) ^ 0x6576LL) )
          {
            goto LABEL_59;
          }
          goto LABEL_57;
        case 0xEuLL:
          if ( !(*(_QWORD *)v4 ^ 0x2D746E65746E6F63LL | *(_QWORD *)(v4 + 6) ^ 0x6874676E656C2D74LL) )
            goto LABEL_59;
          goto LABEL_57;
        case 0x11uLL:
          v48 = _mm_or_si128(
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 16)), (__m128i)xmmword_1015DCA40),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1015DCA30));
          if ( !_mm_testz_si128(v48, v48) )
            goto LABEL_57;
LABEL_59:
          v7 = (__m256i *)v4;
          v8 = v27;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v27, 1);
          continue;
        case 0x12uLL:
          v49 = 18;
          v50 = (const void *)v4;
          v51 = "proxy-authenticateproxy-authorizationteupgradebuild streaming body failed";
          goto LABEL_68;
        case 0x13uLL:
          v49 = 19;
          v50 = (const void *)v4;
          v51 = "proxy-authorizationteupgradebuild streaming body failed";
LABEL_68:
          v47 = memcmp(v50, v51, v49);
LABEL_69:
          v7 = (__m256i *)v4;
          v8 = v27;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v27, 1);
          v28 = v47 == 0;
          v19 = v194;
          if ( !v28 )
            goto LABEL_70;
          continue;
        default:
LABEL_57:
          v7 = (__m256i *)v4;
          v8 = v27;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v27, 1);
LABEL_70:
          v195 = a1;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v8);
          v17 = 1;
          v52 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1);
          if ( !v52 )
            goto LABEL_224;
          v53 = v52;
          memcpy(v52, __src, v27);
          if ( v27 < 8 )
          {
            v54 = 0;
            v19 = v194;
            goto LABEL_82;
          }
          v19 = v194;
          if ( v27 < 0x20 )
          {
            v54 = 0;
            goto LABEL_79;
          }
          v54 = v27 & 0x7FFFFFFFFFFFFFE0LL;
          v55 = 0;
          v56 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
          v57 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
          v58 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
          do
          {
            v59 = _mm_loadu_si128((const __m128i *)&v53[v55 / 8]);
            v60 = _mm_loadu_si128((const __m128i *)&v53[v55 / 8 + 2]);
            v61 = _mm_add_epi8(v59, v56);
            v62 = _mm_add_epi8(v60, v56);
            *(__m128i *)&v53[v55 / 8] = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v61, v57), v61), v58),
                                          v59);
            *(__m128i *)&v53[v55 / 8 + 2] = _mm_or_si128(
                                              _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v62, v57), v62), v58),
                                              v60);
            v55 += 32LL;
          }
          while ( v54 != v55 );
          if ( v27 != v54 )
          {
            if ( (v27 & 0x18) == 0 )
            {
              while ( 1 )
              {
LABEL_82:
                *((_BYTE *)v53 + v54) |= 32 * ((unsigned __int8)(*((_BYTE *)v53 + v54) - 65) < 0x1Au);
                ++v54;
LABEL_83:
                if ( v27 == v54 )
                  goto LABEL_84;
              }
            }
LABEL_79:
            v63 = v54;
            v54 = v27 & 0x7FFFFFFFFFFFFFF8LL;
            v64 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
            v65 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
            v66 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
            do
            {
              v67 = _mm_loadl_epi64((const __m128i *)((char *)v53 + v63));
              v68 = _mm_add_epi8(v67, v64);
              *(_QWORD *)((char *)v53 + v63) = _mm_or_si128(
                                                 _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v68, v65), v68), v66),
                                                 v67).u64[0];
              v63 += 8;
            }
            while ( v54 != v63 );
            goto LABEL_83;
          }
LABEL_84:
          v8 = v27;
          if ( v27 != 11 )
            goto LABEL_86;
          v8 = 11;
          if ( *v53 ^ 0x622D69616E65706FLL | *(_QWORD *)((char *)v53 + 3) ^ 0x617465622D69616ELL )
            goto LABEL_86;
          v86 = (_BYTE *)v182->i64[1];
          v87 = v182->i64[2];
          if ( v87 )
          {
            v88 = 0;
            while ( (unsigned __int8)(v86[v88] - 32) < 0x5Fu || v86[v88] == 9 )
            {
              if ( v87 == ++v88 )
                goto LABEL_112;
            }
            v8 = 11;
          }
          else
          {
LABEL_112:
            v8 = 11;
            if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                    "responses_websockets=build compact sse body failedupstream_json_decode_failed",
                                    0x15u,
                                    v86) )
            {
              v7 = (__m256i *)v53;
              v8 = 11;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 11, 1);
              a1 = v195;
              continue;
            }
          }
LABEL_86:
          v7 = (__m256i *)v53;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v8, 1);
          if ( v27 != 15 )
          {
            a1 = v195;
            if ( v27 != 38 )
              break;
            v69 = 0;
            v7 = (__m256i *)__src;
            while ( v69 != 38 )
            {
              v70 = *((unsigned __int8 *)__src + v69);
              v10 = (unsigned int)(v70 - 65);
              LOBYTE(v10) = v70 | (32 * ((unsigned __int8)(v70 - 65) < 0x1Au));
              v20 = byte_1015DDB40[v69];
              v8 = (unsigned int)(v20 - 65);
              LOBYTE(v8) = v20 | (32 * ((unsigned __int8)(v20 - 65) < 0x1Au));
              ++v69;
              if ( (_BYTE)v10 != (_BYTE)v8 )
                goto LABEL_116;
            }
            continue;
          }
          v10 = (__int64)__src;
          v71 = *(unsigned __int8 *)__src;
          v20 = (unsigned int)(v71 - 65);
          LOBYTE(v20) = v71 | (32 * ((unsigned __int8)(v71 - 65) < 0x1Au));
          a1 = v195;
          if ( (_BYTE)v20 == 97 )
          {
            v72 = *((unsigned __int8 *)__src + 1);
            v20 = (unsigned int)(v72 - 65);
            LOBYTE(v20) = v72 | (32 * ((unsigned __int8)(v72 - 65) < 0x1Au));
            if ( (_BYTE)v20 == 99 )
            {
              v73 = *((unsigned __int8 *)__src + 2);
              v20 = (unsigned int)(v73 - 65);
              LOBYTE(v20) = v73 | (32 * ((unsigned __int8)(v73 - 65) < 0x1Au));
              if ( (_BYTE)v20 == 99 )
              {
                v74 = *((unsigned __int8 *)__src + 3);
                v20 = (unsigned int)(v74 - 65);
                LOBYTE(v20) = v74 | (32 * ((unsigned __int8)(v74 - 65) < 0x1Au));
                if ( (_BYTE)v20 == 101 )
                {
                  v75 = *((unsigned __int8 *)__src + 4);
                  v20 = (unsigned int)(v75 - 65);
                  LOBYTE(v20) = v75 | (32 * ((unsigned __int8)(v75 - 65) < 0x1Au));
                  if ( (_BYTE)v20 == 112 )
                  {
                    v76 = *((unsigned __int8 *)__src + 5);
                    v20 = (unsigned int)(v76 - 65);
                    LOBYTE(v20) = v76 | (32 * ((unsigned __int8)(v76 - 65) < 0x1Au));
                    if ( (_BYTE)v20 == 116 )
                    {
                      v77 = *((unsigned __int8 *)__src + 6);
                      v20 = (unsigned int)(v77 - 65);
                      LOBYTE(v20) = v77 | (32 * ((unsigned __int8)(v77 - 65) < 0x1Au));
                      if ( (_BYTE)v20 == 45 )
                      {
                        v78 = *((unsigned __int8 *)__src + 7);
                        v20 = (unsigned int)(v78 - 65);
                        LOBYTE(v20) = v78 | (32 * ((unsigned __int8)(v78 - 65) < 0x1Au));
                        if ( (_BYTE)v20 == 101 )
                        {
                          v79 = *((unsigned __int8 *)__src + 8);
                          v20 = (unsigned int)(v79 - 65);
                          LOBYTE(v20) = v79 | (32 * ((unsigned __int8)(v79 - 65) < 0x1Au));
                          if ( (_BYTE)v20 == 110 )
                          {
                            v80 = *((unsigned __int8 *)__src + 9);
                            v20 = (unsigned int)(v80 - 65);
                            LOBYTE(v20) = v80 | (32 * ((unsigned __int8)(v80 - 65) < 0x1Au));
                            if ( (_BYTE)v20 == 99 )
                            {
                              v81 = *((unsigned __int8 *)__src + 10);
                              v20 = (unsigned int)(v81 - 65);
                              LOBYTE(v20) = v81 | (32 * ((unsigned __int8)(v81 - 65) < 0x1Au));
                              if ( (_BYTE)v20 == 111 )
                              {
                                v82 = *((unsigned __int8 *)__src + 11);
                                v20 = (unsigned int)(v82 - 65);
                                LOBYTE(v20) = v82 | (32 * ((unsigned __int8)(v82 - 65) < 0x1Au));
                                if ( (_BYTE)v20 == 100
                                  && (v83 = *((unsigned __int8 *)__src + 12),
                                      v20 = (unsigned int)(v83 - 65),
                                      LOBYTE(v20) = v83 | (32 * ((unsigned __int8)(v83 - 65) < 0x1Au)),
                                      (_BYTE)v20 == 105)
                                  && (v84 = *((unsigned __int8 *)__src + 13),
                                      v20 = (unsigned int)(v84 - 65),
                                      LOBYTE(v20) = v84 | (32 * ((unsigned __int8)(v84 - 65) < 0x1Au)),
                                      (_BYTE)v20 == 110) )
                                {
                                  v85 = *((unsigned __int8 *)__src + 14);
                                  v20 = (unsigned int)(v85 - 65);
                                  LOBYTE(v20) = v85 | (32 * ((unsigned __int8)(v85 - 65) < 0x1Au));
                                  a1 = v195;
                                  v19 = v194;
                                  if ( (_BYTE)v20 == 103 )
                                    continue;
                                }
                                else
                                {
                                  a1 = v195;
                                  v19 = v194;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
      }
    }
LABEL_116:
    v7 = &v192;
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v192, __src, v27, v20, v12, v13);
    v89 = v182->i64[1];
    v10 = v182->i64[2];
    if ( !v10 )
    {
LABEL_123:
      v7 = &v187;
      bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v187, v89, v10);
      v92 = 0;
      goto LABEL_124;
    }
    v90 = 0;
    while ( 1 )
    {
      v91 = *(_BYTE *)(v89 + v90);
      if ( v91 > 0x1Fu )
        break;
      if ( v91 != 9 )
        goto LABEL_122;
LABEL_119:
      if ( v10 == ++v90 )
        goto LABEL_123;
    }
    if ( v91 != 127 )
      goto LABEL_119;
LABEL_122:
    v92 = 2;
LABEL_124:
    LOBYTE(v188[0]) = v92;
    v183 = v192;
    v184 = v193;
    v8 = (__int64)&v185;
    v185 = v187;
    v186 = v188[0];
    v20 = v192.u8[0];
    LOBYTE(v10) = v192.i8[0] | (v92 == 2);
    if ( (_BYTE)v10 == 1 )
    {
      if ( !v192.i8[0] )
      {
        v20 = v183.i64[1];
        if ( v183.i64[1] )
        {
          v8 = v183.i64[2];
          v7 = (__m256i *)&v184;
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v183.i64[1] + 32))(&v184, v183.i64[2], v183.i64[3]);
          v92 = v186;
        }
      }
      if ( v92 != 2 )
      {
        v8 = v185.i64[1];
        v7 = (__m256i *)((char *)&v185.u128[1] + 8);
        (*(void (__fastcall **)(__int8 *, __int64, __int64))(v185.i64[0] + 32))(&v185.i8[24], v185.i64[1], v185.i64[2]);
      }
    }
    else
    {
      v161 = v184;
      v160 = v183.i128[1];
      v159 = v183.i64[1];
      v156 = v185;
      v157 = v186;
      v7 = &v187;
      v8 = (__int64)v164;
      http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v187, v164, &v159, &v156);
      if ( LOBYTE(v188[0]) == 3 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "size overflows MAX_SIZE",
          23,
          v197,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
      v193 = v188[0];
      v192 = v187;
      v10 = v187.i64[1];
      v20 = v187.i64[0];
      if ( LOBYTE(v188[0]) != 2 )
      {
        v8 = v192.i64[1];
        v7 = (__m256i *)((char *)&v192.u128[1] + 8);
        (*(void (__fastcall **)(__int8 *, __int64, __int64))(v192.i64[0] + 32))(&v192.i8[24], v192.i64[1], v192.i64[2]);
      }
    }
  }
  if ( ++v21 < v19 )
  {
    v22 = v196 + 104 * v21;
LABEL_27:
    v189 = 2;
    if ( (*(_BYTE *)v22 & 1) != 0 )
    {
      v173 = *(_QWORD *)(v22 + 8);
      v189 = 1;
    }
    v23 = v22 + 24;
    v182 = (__m256i *)(v22 + 24);
    if ( *(_QWORD *)(v22 + 64) )
      goto LABEL_30;
    goto LABEL_25;
  }
  v176.i128[1] = 0u;
  v176.i64[1] = 29;
  v176.i64[0] = 0;
  v187.i64[0] = (__int64)&anon_39a6e93098609d65551b0fc4eadbbbd9_846;
  v187.i64[1] = (__int64)&unk_1015DBAA0;
  v187.i128[1] = 0x10u;
  LOBYTE(v188[0]) = 0;
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v183, v164, &v176, &v187);
  if ( (_BYTE)v184 == 3 )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "size overflows MAX_SIZE",
      23,
      v197,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
  v193 = v184;
  v192 = v183;
  if ( (_BYTE)v184 != 2 )
    (*(void (__fastcall **)(__int8 *, __int64, __int64))(v192.i64[0] + 32))(&v192.i8[24], v192.i64[1], v192.i64[2]);
  v187.i64[0] = v174 + 72;
  v187.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v183, &unk_1017B931C, &v187);
  v94 = v183.i64[1];
  v93 = v183.i64[0];
  if ( v183.i64[2] )
  {
    for ( j = 0; v183.i64[2] != j; ++j )
    {
      v96 = *(_BYTE *)(v183.i64[1] + j);
      if ( v96 > 0x1Fu )
      {
        if ( v96 == 127 )
          goto LABEL_148;
      }
      else if ( v96 != 9 )
      {
        goto LABEL_148;
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v192, v183.i64[1], v183.i64[2]);
  LOBYTE(v193) = 0;
  v154 = v192;
  v155 = v193;
  v187.i128[1] = 0u;
  v187.i64[1] = 16;
  v187.i64[0] = 0;
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v183, v164, &v187, &v154);
  if ( (_BYTE)v184 == 3 )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "size overflows MAX_SIZE",
      23,
      v197,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
  v188[0] = v184;
  v187 = v183;
  if ( (_BYTE)v184 != 2 )
    (*(void (__fastcall **)(__int8 *, __int64, __int64))(v187.i64[0] + 32))(&v187.i8[24], v187.i64[1], v187.i64[2]);
LABEL_148:
  if ( v93 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1);
  if ( (_BYTE)v190 )
  {
    v176.i128[1] = 0u;
    v176.i64[1] = 2;
    v176.i64[0] = 0;
    v187.i64[0] = (__int64)&anon_39a6e93098609d65551b0fc4eadbbbd9_846;
    v187.i64[1] = (__int64)"identityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed";
    v187.i128[1] = 8u;
    LOBYTE(v188[0]) = 0;
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v183, v164, &v176, &v187);
    if ( (_BYTE)v184 == 3 )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "size overflows MAX_SIZE",
        23,
        v197,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
    v193 = v184;
    v192 = v183;
    if ( (_BYTE)v184 != 2 )
      (*(void (__fastcall **)(__int8 *, __int64, __int64))(v192.i64[0] + 32))(&v192.i8[24], v192.i64[1], v192.i64[2]);
  }
  v97 = *(_QWORD *)(v174 + 152);
  v98 = *(_QWORD *)(v174 + 160);
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v97, v98);
  if ( v99 )
  {
    v183.i64[0] = v97;
    v183.i64[1] = v98;
    v183.i128[1] = 0u;
    v184 = v97;
    v185.i64[0] = v98;
    serde_json::de::from_trait::ha212a85cbf1d7df5(v165, &v183);
    if ( v165[0] )
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v166);
      goto LABEL_157;
    }
    v195 = a1;
    v101 = 0;
    v102 = v166;
    if ( (_QWORD)v166 )
      v102 = v167;
    LOBYTE(v101) = (_QWORD)v166 != 0;
    v183.i128[0] = (unsigned __int64)v101;
    v183.i128[1] = v166;
    v184 = v101;
    v185.i64[0] = 0;
    *(__int128 *)((char *)v185.i128 + 8) = v166;
    v185.i64[3] = v102;
    v103 = &v187.i64[1];
    v189 = 0x8000000000000000LL;
    while ( 2 )
    {
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hdcfb92fc12379793(&v187, &v183);
      a1 = v195;
      if ( !v187.i64[0] || (v106 = *(_QWORD *)(v187.i64[0] + 24 * v187.i64[2] + 360), v106 == v189) )
      {
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h92199a5704cddc1e(&v183);
        goto LABEL_157;
      }
      v107 = *(const void **)(v187.i64[0] + 24 * v187.i64[2] + 368);
      v108 = *(_QWORD *)(v187.i64[0] + 24 * v187.i64[2] + 376);
      v109 = 32 * v187.i64[2];
      v171 = *(_QWORD *)(v187.i64[0] + 32 * v187.i64[2] + 24);
      v170 = *(_QWORD *)(v187.i64[0] + 32 * v187.i64[2] + 16);
      v110 = *(_QWORD *)(v187.i64[0] + 32 * v187.i64[2]);
      v169[1] = *(_QWORD *)(v187.i64[0] + 32 * v187.i64[2] + 8);
      v169[0] = v110;
      if ( (v108 & 0x8000000000000000LL) != 0LL )
      {
        v113 = 0;
        goto LABEL_217;
      }
      if ( v108 )
      {
        v196 = v106;
        v111 = v107;
        v112 = v103;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v187, &v183);
        v113 = 1;
        v114 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v108, 1);
        if ( !v114 )
        {
          v94 = v108;
LABEL_217:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v113, v94);
        }
        v94 = (__int64)v114;
        memcpy(v114, v111, v108);
        if ( v108 < 8 )
        {
          v115 = 0;
          v103 = v112;
          v107 = v111;
          v106 = v196;
          goto LABEL_178;
        }
        v103 = v112;
        if ( v108 < 0x20 )
        {
          v115 = 0;
          v107 = v111;
          v106 = v196;
LABEL_175:
          v109 = v115;
          v115 = v108 & 0x7FFFFFFFFFFFFFF8LL;
          v123 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
          v124 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
          v125 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
          do
          {
            v126 = _mm_loadl_epi64((const __m128i *)(v94 + v109));
            v127 = _mm_add_epi8(v126, v123);
            *(_QWORD *)(v94 + v109) = _mm_or_si128(
                                        _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v127, v124), v127), v125),
                                        v126).u64[0];
            v109 += 8;
          }
          while ( v115 != v109 );
          goto LABEL_179;
        }
        v115 = v108 & 0x7FFFFFFFFFFFFFE0LL;
        v109 = 0;
        v116 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
        v117 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
        v118 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
        v107 = v111;
        do
        {
          v119 = _mm_loadu_si128((const __m128i *)(v94 + v109));
          v120 = _mm_loadu_si128((const __m128i *)(v94 + v109 + 16));
          v121 = _mm_add_epi8(v119, v116);
          v122 = _mm_add_epi8(v120, v116);
          *(__m128i *)(v94 + v109) = _mm_or_si128(
                                       _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v121, v117), v121), v118),
                                       v119);
          *(__m128i *)(v94 + v109 + 16) = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v122, v117), v122), v118),
                                            v120);
          v109 += 32;
        }
        while ( v115 != v109 );
        v106 = v196;
        if ( v108 != v115 )
        {
          if ( (v108 & 0x18) != 0 )
            goto LABEL_175;
          do
          {
LABEL_178:
            v109 = *(unsigned __int8 *)(v94 + v115);
            *(_BYTE *)(v94 + v115++) = v109 | (32 * ((unsigned __int8)(v109 - 65) < 0x1Au));
LABEL_179:
            ;
          }
          while ( v108 != v115 );
        }
        switch ( v108 )
        {
          case 0xCuLL:
            v109 = *(_QWORD *)v94 ^ 0x2D746E65746E6F63LL | *(unsigned int *)(v94 + 8) ^ 0x65707974LL;
            if ( !v109 )
              goto LABEL_190;
            v128 = 12;
            break;
          case 0xDuLL:
            v109 = *(_QWORD *)v94 ^ 0x7A69726F68747561LL | *(_QWORD *)(v94 + 5) ^ 0x6E6F6974617A6972LL;
            if ( !v109 )
              goto LABEL_190;
            v128 = 13;
            break;
          case 0xFuLL:
            v109 = *(_QWORD *)v94 ^ 0x652D747065636361LL | *(_QWORD *)(v94 + 7) ^ 0x676E69646F636E65LL;
            if ( v109 )
            {
              v128 = 15;
              break;
            }
LABEL_190:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v108, 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v169);
LABEL_214:
            if ( v106 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v106, 1);
            continue;
          default:
            v196 = v108;
LABEL_192:
            http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v192, v107, v108, v109, v104, v105);
            LOBYTE(v129) = LOBYTE(v169[0]) != 3;
            v130 = 0;
            if ( LOBYTE(v169[0]) == 3 )
              v130 = v170;
            v131 = v192.i8[0];
            v187 = v192;
            v188[0] = v193;
            v188[1] = v130;
            v188[2] = v171;
            if ( (LOBYTE(v169[0]) != 3) | v192.i8[0] & 1 )
            {
              if ( v196 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v196, 1);
                v131 = v187.i8[0];
              }
              if ( (v131 & 1) == 0 && v187.i64[1] )
                (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(v187.i64[1] + 32))(
                  v188,
                  v187.i64[2],
                  v187.i64[3],
                  v129);
            }
            else
            {
              v181 = v103[3];
              v180 = v103[2];
              v132 = *v103;
              v179 = v103[1];
              v178 = v132;
              if ( v171 )
              {
                for ( k = 0; v171 != k; ++k )
                {
                  v134 = *(_BYTE *)(v170 + k);
                  if ( v134 > 0x1Fu )
                  {
                    if ( v134 == 127 )
                      goto LABEL_206;
                  }
                  else if ( v134 != 9 )
                  {
LABEL_206:
                    if ( v178 )
                      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v178 + 32))(&v181, v179, v180);
                    goto LABEL_211;
                  }
                }
              }
              bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v162, v170, v171);
              LOBYTE(v163) = 0;
              v153[0] = v162[0];
              v153[1] = v162[1];
              v153[2] = v162[2];
              v153[3] = v162[3];
              v153[4] = v163;
              v158[3] = v181;
              v158[2] = v180;
              v158[1] = v179;
              v158[0] = v178;
              http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v192, v164, v158, v153);
              if ( (_BYTE)v193 == 3 )
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "size overflows MAX_SIZE",
                  23,
                  v197,
                  &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
                  &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
              v177 = v193;
              v176 = v192;
              if ( (_BYTE)v193 != 2 )
                (*(void (__fastcall **)(__int8 *, __int64, __int64))(v176.i64[0] + 32))(
                  &v176.i8[24],
                  v176.i64[1],
                  v176.i64[2]);
LABEL_211:
              if ( v196 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v196, 1);
            }
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v169);
            goto LABEL_214;
        }
        v196 = v128;
        goto LABEL_192;
      }
      break;
    }
    v94 = 1;
    v196 = 0;
    goto LABEL_192;
  }
LABEL_157:
  qmemcpy(a1, v164, 0x60u);
  return a1;
}
