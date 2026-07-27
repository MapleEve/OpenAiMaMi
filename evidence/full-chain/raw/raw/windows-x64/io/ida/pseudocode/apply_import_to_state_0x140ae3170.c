// win 1.2.1 | module src/core/relay/io.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::io::apply_import_to_state | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall apply_import_to_state(__m128i *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int32 v9; // edi
  __int32 v10; // r14d
  int v11; // r13d
  unsigned __int32 v12; // eax
  __int64 v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rbx
  char *v28; // rsi
  unsigned __int64 v29; // r15
  __int64 v30; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r9
  __m128i v34; // xmm0
  __m128i v35; // xmm7
  __int64 v36; // rcx
  __int64 v37; // r8
  __m128i *i; // r10
  unsigned __int64 v39; // r13
  __m128i v40; // xmm8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  char v50; // al
  __int64 v51; // r13
  __int64 v52; // rdi
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rdx
  __int64 v64; // rcx
  void *v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  __m128i v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int64 v80; // rsi
  __m128i *v81; // rdi
  _QWORD *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rcx
  void *v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  __m128i v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  char v98; // si
  char v99; // di
  char v100; // al
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // rdi
  __m128i *v106; // rcx
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rbx
  const __m128i *v111; // r14
  __m128i si128; // xmm0
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // rsi
  _QWORD *v119; // rax
  __int64 (__fastcall *v120)(_QWORD, _QWORD); // [rsp+38h] [rbp-48h]
  __int64 v121; // [rsp+40h] [rbp-40h]
  __int64 v122; // [rsp+48h] [rbp-38h]
  _QWORD *v123; // [rsp+50h] [rbp-30h]
  unsigned __int64 v124; // [rsp+58h] [rbp-28h]
  __m128i v125; // [rsp+60h] [rbp-20h] BYREF
  __m256i v126; // [rsp+70h] [rbp-10h] BYREF
  __m128i *v127; // [rsp+98h] [rbp+18h]
  __int64 v128; // [rsp+A0h] [rbp+20h]
  __int64 v129; // [rsp+A8h] [rbp+28h]
  __m128i v130; // [rsp+B0h] [rbp+30h]
  __m128i *v131; // [rsp+C0h] [rbp+40h]
  __int64 v132; // [rsp+D0h] [rbp+50h]
  __int64 v133; // [rsp+D8h] [rbp+58h]
  __m128i v134; // [rsp+E0h] [rbp+60h] BYREF
  __m256i v135; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v136; // [rsp+110h] [rbp+90h]
  __int64 v137; // [rsp+120h] [rbp+A0h]
  __int64 v138; // [rsp+128h] [rbp+A8h]
  void *v139; // [rsp+130h] [rbp+B0h]
  __m128i *v140; // [rsp+138h] [rbp+B8h]
  __int64 (__fastcall *v141)(_QWORD, _QWORD); // [rsp+140h] [rbp+C0h]
  __int64 v142; // [rsp+148h] [rbp+C8h]
  __int64 v143; // [rsp+150h] [rbp+D0h]
  __m128i v144; // [rsp+158h] [rbp+D8h]
  __m128i *v145; // [rsp+168h] [rbp+E8h]
  __m128i v146; // [rsp+170h] [rbp+F0h]
  __m128i *v147; // [rsp+180h] [rbp+100h]
  __int64 v148; // [rsp+188h] [rbp+108h]
  __int64 v149; // [rsp+1A0h] [rbp+120h]
  __int64 v150; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v151; // [rsp+1B0h] [rbp+130h]
  unsigned __int64 v152; // [rsp+1B8h] [rbp+138h]
  int v153; // [rsp+1C0h] [rbp+140h]
  char v154; // [rsp+1C4h] [rbp+144h]
  char v155; // [rsp+1C5h] [rbp+145h]
  char v156; // [rsp+1C6h] [rbp+146h]
  char v157; // [rsp+1C7h] [rbp+147h]
  __int64 v158; // [rsp+1D0h] [rbp+150h]
  __m128i v159; // [rsp+1D8h] [rbp+158h] BYREF
  __m128i *v160; // [rsp+1E8h] [rbp+168h]
  __int64 (__fastcall *v161)(_QWORD, _QWORD); // [rsp+1F0h] [rbp+170h]
  __int64 v162; // [rsp+1F8h] [rbp+178h]
  __int64 v163; // [rsp+200h] [rbp+180h]
  char v164; // [rsp+208h] [rbp+188h]
  __m128i v165; // [rsp+210h] [rbp+190h] BYREF
  __int64 v166; // [rsp+220h] [rbp+1A0h]
  __int64 v167; // [rsp+228h] [rbp+1A8h]
  __m128i v168; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v169; // [rsp+240h] [rbp+1C0h]
  __int64 (__fastcall *v170)(_QWORD, _QWORD); // [rsp+250h] [rbp+1D0h]
  _BYTE v171[24]; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 (__fastcall *v172)(_QWORD, _QWORD); // [rsp+270h] [rbp+1F0h]
  __int64 v173; // [rsp+278h] [rbp+1F8h]
  _QWORD *v174; // [rsp+280h] [rbp+200h]
  __int64 v175; // [rsp+288h] [rbp+208h]
  __m128i *v176; // [rsp+290h] [rbp+210h]
  __m128i v177; // [rsp+298h] [rbp+218h] BYREF
  __int64 v178; // [rsp+2A8h] [rbp+228h]
  char v179; // [rsp+2B3h] [rbp+233h]
  char v180; // [rsp+2B4h] [rbp+234h] BYREF
  char v181; // [rsp+2B5h] [rbp+235h]
  char v182; // [rsp+2B6h] [rbp+236h]
  char v183; // [rsp+2B7h] [rbp+237h]
  __int64 v184; // [rsp+2B8h] [rbp+238h]

  v184 = -2; /*0x140ae31a4*/
  v127 = a1; /*0x140ae31b8*/
  sub_140FFA6E0(&v134); /*0x140ae31c0*/
  v9 = v134.m128i_i32[0]; /*0x140ae31c5*/
  v10 = (v134.m128i_i32[0] >> 13) - 1; /*0x140ae31cd*/
  v11 = 0; /*0x140ae31d1*/
  if ( v134.m128i_i32[0] >> 13 <= 0 ) /*0x140ae31d6*/
  {
    v12 = (1 - (v134.m128i_i32[0] >> 13)) / 0x190u + 1; /*0x140ae31ea*/
    v8 = 400 * v12; /*0x140ae31ec*/
    v10 += v8; /*0x140ae31f2*/
    v11 = -146097 * v12; /*0x140ae31f5*/
  }
  v13 = v134.m128i_u32[1]; /*0x140ae31fc*/
  v173 = v134.m128i_u32[2]; /*0x140ae3203*/
  v175 = a3[1]; /*0x140ae320e*/
  v123 = a3; /*0x140ae3215*/
  v14 = (_QWORD *)a3[2]; /*0x140ae3219*/
  v15 = sub_141470CD0(v8, v7); /*0x140ae321d*/
  if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x140ae3226*/
  {
    v17 = *(_QWORD *)v15; /*0x140ae322c*/
    v18 = *(_QWORD *)(v15 + 8); /*0x140ae322f*/
  }
  else
  {
    v174 = (_QWORD *)v15; /*0x140ae4370*/
    v17 = sub_141486EF0(); /*0x140ae437c*/
    v15 = (__int64)v174; /*0x140ae437f*/
    *v174 = v17; /*0x140ae4386*/
    *(_QWORD *)(v15 + 8) = v18; /*0x140ae4389*/
    *(_BYTE *)(v15 + 16) = 1; /*0x140ae438d*/
  }
  *(_QWORD *)v15 = v17 + 1; /*0x140ae3237*/
  *(_OWORD *)v135.m256i_i8 = xmmword_1417AE4F0; /*0x140ae3241*/
  v134 = *(__m128i *)&off_1417AE4E0; /*0x140ae324c*/
  v135.m256i_i64[2] = v17; /*0x140ae3250*/
  v135.m256i_i64[3] = v18; /*0x140ae3257*/
  if ( v14 ) /*0x140ae3261*/
  {
    LOBYTE(v16) = 1; /*0x140ae43a4*/
    sub_1416BA580(&v134, v14, &v135.m256i_u64[2], v16); /*0x140ae43a7*/
    v119 = nullptr; /*0x140ae43ad*/
    do /*0x140ae43f6*/
    {
      v174 = v119; /*0x140ae43b6*/
      sub_14149C500(&v159, v175 + 232LL * (_QWORD)v119); /*0x140ae43cb*/
      sub_140474440(&v134, &v159); /*0x140ae43dc*/
      v119 = (_QWORD *)((char *)v174 + 1); /*0x140ae43e9*/
    }
    while ( (_QWORD *)((char *)v174 + 1) != v14 ); /*0x140ae43f6*/
  }
  v124 = 1000 /*0x140ae32c7*/
       * (v13
        + 86400LL * (int)(((v10 / 100) >> 2) + ((1461 * v10) >> 2) + v11 + ((v9 >> 4) & 0x1FF) - v10 / 100 - 719163))
       + ((unsigned __int64)(1125899907 * v173) >> 50);
  v126 = v135; /*0x140ae32db*/
  v125 = _mm_load_si128(&v134); /*0x140ae32e3*/
  v177.m128i_i64[0] = 0; /*0x140ae32e8*/
  v177.m128i_i64[1] = 8; /*0x140ae32f3*/
  v178 = 0; /*0x140ae32fe*/
  v19 = 176LL * *(_QWORD *)(a4 + 40); /*0x140ae3309*/
  v20 = *(_QWORD *)(a4 + 32); /*0x140ae3312*/
  v21 = v20 + v19; /*0x140ae3317*/
  v121 = *(_QWORD *)(a2 + 776); /*0x140ae3325*/
  v122 = *(_QWORD *)(a2 + 784); /*0x140ae3330*/
  v128 = 0; /*0x140ae3338*/
  v133 = v21; /*0x140ae3340*/
LABEL_8:
  v27 = v20; /*0x140ae339c*/
  while ( v27 != v21 ) /*0x140ae33a2*/
  {
    v28 = *(char **)(v27 + 8); /*0x140ae33a8*/
    v29 = *(_QWORD *)(v27 + 16); /*0x140ae33ac*/
    sub_140AE73A0((__int64)&v134, v28, v29); /*0x140ae33ba*/
    v20 = v27 + 176; /*0x140ae33c0*/
    if ( v134.m128i_i64[0] != -1 ) /*0x140ae33cf*/
    {
      if ( v134.m128i_i64[0] ) /*0x140ae3ce3*/
        sub_140001660(v134.m128i_i64[1], v134.m128i_i64[0], 1); /*0x140ae3cef*/
LABEL_67:
      sub_14149C500(v171, v27); /*0x140ae3cf5*/
      sub_14149C500(&v159, v27 + 24); /*0x140ae3d13*/
      nullsub_1(v87); /*0x140ae3d19*/
      v88 = (void *)sub_140001650(13, 1); /*0x140ae3d28*/
      if ( !v88 ) /*0x140ae3d30*/
        sub_1416C2D4B(1, 13); /*0x140ae4407*/
      qmemcpy(v88, "INVALID_FIELD", 13); /*0x140ae3d4e*/
      v135.m256i_i64[0] = *(_QWORD *)&v171[16]; /*0x140ae3d58*/
      v134 = *(__m128i *)v171; /*0x140ae3d63*/
      v135.m256i_i64[3] = (__int64)v160; /*0x140ae3d6e*/
      *(__m128i *)&v135.m256i_u64[1] = v159; /*0x140ae3d79*/
      *(_QWORD *)&v136 = 13; /*0x140ae3d7e*/
      *((_QWORD *)&v136 + 1) = v88; /*0x140ae3d89*/
      v137 = 13; /*0x140ae3d90*/
      v89 = v178; /*0x140ae3d9b*/
      if ( v178 == v177.m128i_i64[0] ) /*0x140ae3da9*/
        sub_141689730(&v177); /*0x140ae3db6*/
      v22 = v177.m128i_i64[1]; /*0x140ae3350*/
      v23 = 9 * v89; /*0x140ae3357*/
      *(_QWORD *)(v177.m128i_i64[1] + 8 * v23 + 64) = v137; /*0x140ae3362*/
      v24 = _mm_load_si128(&v134); /*0x140ae3367*/
      v25 = *(_OWORD *)v135.m256i_i8; /*0x140ae336c*/
      v26 = *(_OWORD *)&v135.m256i_u64[2]; /*0x140ae3370*/
      *(_OWORD *)(v22 + 8 * v23 + 48) = v136; /*0x140ae337e*/
      *(_OWORD *)(v22 + 8 * v23 + 32) = v26; /*0x140ae3383*/
      *(_OWORD *)(v22 + 8 * v23 + 16) = v25; /*0x140ae3388*/
      *(__m128i *)(v22 + 8 * v23) = v24; /*0x140ae338d*/
      v178 = v89 + 1; /*0x140ae3395*/
      goto LABEL_8; /*0x140ae3395*/
    }
    if ( !*(_QWORD *)(v27 + 40) ) /*0x140ae33d5*/
      goto LABEL_67; /*0x140ae33d5*/
    v30 = *(_QWORD *)(v27 + 88); /*0x140ae33e0*/
    if ( !v30 ) /*0x140ae33e7*/
      goto LABEL_67; /*0x140ae33e7*/
    sub_140A49CF0(v171, *(_QWORD *)(v27 + 56), *(_QWORD *)(v27 + 64)); /*0x140ae33fc*/
    v173 = v27 + 24; /*0x140ae3406*/
    if ( v171[0] ) /*0x140ae3414*/
    {
      v166 = (__int64)v172; /*0x140ae3dcc*/
      v165 = *(__m128i *)&v171[8]; /*0x140ae3dd6*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140ae3deb*/
      {
        v159.m128i_i64[0] = v27; /*0x140ae3df1*/
        v159.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140ae3dff*/
        v160 = &v165; /*0x140ae3e0d*/
        v161 = sub_1400015F0; /*0x140ae3e14*/
        v134.m128i_i64[0] = 0; /*0x140ae3e1b*/
        v134.m128i_i64[1] = (__int64)aCodexmateLibCo_37; /*0x140ae3e2a*/
        *(_OWORD *)v135.m256i_i8 = 0x1Eu; /*0x140ae3e2e*/
        v135.m256i_i64[2] = (__int64)aSrcCoreRelayIo; /*0x140ae3e45*/
        v135.m256i_i64[3] = 20; /*0x140ae3e4c*/
        *(_QWORD *)&v136 = 2; /*0x140ae3e57*/
        *((_QWORD *)&v136 + 1) = aCodexmateLibCo_37; /*0x140ae3e62*/
        v137 = 30; /*0x140ae3e69*/
        v138 = 0x12D00000001LL; /*0x140ae3e7e*/
        v139 = &unk_1417AFBAD; /*0x140ae3e8c*/
        v140 = &v159; /*0x140ae3e9a*/
        sub_1412C36A0(&v180, &v134); /*0x140ae3eac*/
      }
      sub_14149C500(&v168, v27); /*0x140ae3ebc*/
      sub_14149C500(&v159, v173); /*0x140ae3ed0*/
      nullsub_1(v90); /*0x140ae3ed6*/
      v91 = (void *)sub_140001650(13, 1); /*0x140ae3ee5*/
      if ( !v91 ) /*0x140ae3eed*/
        sub_1416C2D4B(1, 13); /*0x140ae4419*/
      qmemcpy(v91, "INVALID_FIELD", 13); /*0x140ae3f0b*/
      v135.m256i_i64[0] = v169; /*0x140ae3f15*/
      v134 = v168; /*0x140ae3f20*/
      v135.m256i_i64[3] = (__int64)v160; /*0x140ae3f2b*/
      *(__m128i *)&v135.m256i_u64[1] = v159; /*0x140ae3f36*/
      *(_QWORD *)&v136 = 13; /*0x140ae3f3b*/
      *((_QWORD *)&v136 + 1) = v91; /*0x140ae3f46*/
      v137 = 13; /*0x140ae3f4d*/
      v92 = v178; /*0x140ae3f58*/
      if ( v178 == v177.m128i_i64[0] ) /*0x140ae3f66*/
        sub_141689730(&v177); /*0x140ae3f6f*/
      v93 = v177.m128i_i64[1]; /*0x140ae3f75*/
      v94 = 9 * v92; /*0x140ae3f7c*/
      *(_QWORD *)(v177.m128i_i64[1] + 8 * v94 + 64) = v137; /*0x140ae3f87*/
      v95 = _mm_load_si128(&v134); /*0x140ae3f8c*/
      v96 = *(_OWORD *)v135.m256i_i8; /*0x140ae3f91*/
      v97 = *(_OWORD *)&v135.m256i_u64[2]; /*0x140ae3f95*/
      *(_OWORD *)(v93 + 8 * v94 + 48) = v136; /*0x140ae3fa3*/
      *(_OWORD *)(v93 + 8 * v94 + 32) = v97; /*0x140ae3fa8*/
      *(_OWORD *)(v93 + 8 * v94 + 16) = v96; /*0x140ae3fad*/
      *(__m128i *)(v93 + 8 * v94) = v95; /*0x140ae3fb2*/
      v178 = v92 + 1; /*0x140ae3fba*/
      if ( v165.m128i_i64[0] ) /*0x140ae3fcb*/
        sub_140001660(v165.m128i_i64[1], v165.m128i_i64[0], 1); /*0x140ae3fde*/
      goto LABEL_8; /*0x140ae3fe3*/
    }
    v175 = *(_QWORD *)&v171[8]; /*0x140ae3421*/
    v174 = *(_QWORD **)&v171[16]; /*0x140ae342f*/
    v120 = v172; /*0x140ae343d*/
    if ( v126.m256i_i64[1] ) /*0x140ae3446*/
    {
      v183 = 1; /*0x140ae344c*/
      v31 = sub_140378810(&v126.m256i_u64[2], v27); /*0x140ae3460*/
      v32 = v125.m128i_i64[1]; /*0x140ae346b*/
      v33 = v125.m128i_i64[0]; /*0x140ae346b*/
      v34 = _mm_cvtsi32_si128(v31 >> 57); /*0x140ae346f*/
      v35 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v34, v34), 0), 68); /*0x140ae347c*/
      v36 = *(_QWORD *)(v27 + 8); /*0x140ae3481*/
      v37 = *(_QWORD *)(v27 + 16); /*0x140ae3485*/
      for ( i = nullptr; ; ++i ) /*0x140ae3489*/
      {
        v39 = v32 & v31; /*0x140ae348c*/
        v40 = _mm_loadu_si128((const __m128i *)(v33 + v39)); /*0x140ae348f*/
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v40, v35)); /*0x140ae349e*/
        if ( (_DWORD)_RAX ) /*0x140ae34a4*/
          break; /*0x140ae34a4*/
LABEL_21:
        v21 = v133; /*0x140ae3530*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v40, (__m128i)-1LL)) ) /*0x140ae3535*/
          goto LABEL_23; /*0x140ae3540*/
        v31 = (unsigned __int64)i[1].m128i_u64 + v39; /*0x140ae3545*/
      }
      v132 = v32; /*0x140ae34aa*/
      v176 = i; /*0x140ae34ae*/
      while ( 1 ) /*0x140ae34b5*/
      {
        v167 = _RAX; /*0x140ae34b5*/
        __asm { tzcnt eax, eax } /*0x140ae34bc*/
        v42 = -3LL * (v32 & (v39 + _RAX)); /*0x140ae34c9*/
        if ( v37 == *(_QWORD *)(v33 + 8 * v42 - 8) ) /*0x140ae34d2*/
        {
          v43 = *(_QWORD *)(v33 + 8 * v42 - 16); /*0x140ae34d8*/
          v170 = (__int64 (__fastcall *)(_QWORD, _QWORD))v33; /*0x140ae34dc*/
          v44 = v36; /*0x140ae34e3*/
          v45 = v37; /*0x140ae34e6*/
          v46 = sub_1416847B0(v36, v43, v37); /*0x140ae34e9*/
          v37 = v45; /*0x140ae34ee*/
          v36 = v44; /*0x140ae34f1*/
          v20 = v27 + 176; /*0x140ae34f4*/
          v33 = (__int64)v170; /*0x140ae34fb*/
          if ( !v46 ) /*0x140ae3504*/
            break; /*0x140ae3504*/
        }
        _RAX = (unsigned int)(v167 - 1); /*0x140ae3511*/
        LOWORD(_RAX) = v167 & (v167 - 1); /*0x140ae3514*/
        v32 = v132; /*0x140ae3517*/
        i = v176; /*0x140ae351b*/
        if ( !(_WORD)_RAX ) /*0x140ae3522*/
          goto LABEL_21; /*0x140ae3522*/
      }
      v183 = 1; /*0x140ae3639*/
      sub_14149C500(v171, v27); /*0x140ae364a*/
      v21 = v133; /*0x140ae3650*/
      sub_14149C500(&v159, v173); /*0x140ae3662*/
      nullsub_1(v55); /*0x140ae3668*/
      v56 = (void *)sub_140001650(12, 1); /*0x140ae3677*/
      if ( !v56 ) /*0x140ae3683*/
        sub_1416C2D4B(1, 12); /*0x140ae442b*/
      qmemcpy(v56, "DUPLICATE_ID", 12); /*0x140ae3693*/
      v135.m256i_i64[0] = *(_QWORD *)&v171[16]; /*0x140ae36a4*/
      v134 = *(__m128i *)v171; /*0x140ae36af*/
      v135.m256i_i64[3] = (__int64)v160; /*0x140ae36ba*/
      *(__m128i *)&v135.m256i_u64[1] = _mm_loadu_si128(&v159); /*0x140ae36c6*/
      *(_QWORD *)&v136 = 12; /*0x140ae36cc*/
      *((_QWORD *)&v136 + 1) = v56; /*0x140ae36d7*/
      v137 = 12; /*0x140ae36de*/
      v57 = v178; /*0x140ae36e9*/
      if ( v178 == v177.m128i_i64[0] ) /*0x140ae36f7*/
        sub_141689730(&v177); /*0x140ae3700*/
      v58 = v177.m128i_i64[1]; /*0x140ae3706*/
      v59 = 9 * v57; /*0x140ae370d*/
      *(_QWORD *)(v177.m128i_i64[1] + 8 * v59 + 64) = v137; /*0x140ae3718*/
      v60 = _mm_load_si128(&v134); /*0x140ae371d*/
      v61 = *(_OWORD *)v135.m256i_i8; /*0x140ae3722*/
      v62 = *(_OWORD *)&v135.m256i_u64[2]; /*0x140ae3726*/
      *(_OWORD *)(v58 + 8 * v59 + 48) = v136; /*0x140ae3734*/
      *(_OWORD *)(v58 + 8 * v59 + 32) = v62; /*0x140ae3739*/
      *(_OWORD *)(v58 + 8 * v59 + 16) = v61; /*0x140ae373e*/
      *(__m128i *)(v58 + 8 * v59) = v60; /*0x140ae3743*/
      v178 = v57 + 1; /*0x140ae374b*/
      v63 = v175; /*0x140ae3752*/
    }
    else
    {
LABEL_23:
      v47 = *(_QWORD *)(v27 + 80); /*0x140ae3552*/
      v48 = *(_QWORD *)(v27 + 104); /*0x140ae3556*/
      v49 = *(_QWORD *)(v27 + 112); /*0x140ae355a*/
      v50 = *(_BYTE *)(v27 + 169); /*0x140ae355e*/
      v183 = 1; /*0x140ae3565*/
      normalize_relay_models((unsigned int)&v159, v48, v49, v47, v30, v50); /*0x140ae357c*/
      if ( v159.m128i_i64[0] == -1 ) /*0x140ae358a*/
      {
        v166 = (__int64)v161; /*0x140ae3769*/
        v165 = _mm_loadu_si128((const __m128i *)&v159.m128i_u64[1]); /*0x140ae3774*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140ae378e*/
        {
          *(_QWORD *)v171 = v27; /*0x140ae3794*/
          *(_QWORD *)&v171[8] = sub_1400015F0; /*0x140ae37a2*/
          *(_QWORD *)&v171[16] = &v165; /*0x140ae37b0*/
          v172 = sub_1400015F0; /*0x140ae37b7*/
          v134.m128i_i64[0] = 0; /*0x140ae37be*/
          v134.m128i_i64[1] = (__int64)aCodexmateLibCo_37; /*0x140ae37cd*/
          *(_OWORD *)v135.m256i_i8 = 0x1Eu; /*0x140ae37d1*/
          v135.m256i_i64[2] = (__int64)aSrcCoreRelayIo; /*0x140ae37e8*/
          v135.m256i_i64[3] = 20; /*0x140ae37ef*/
          *(_QWORD *)&v136 = 2; /*0x140ae37fa*/
          *((_QWORD *)&v136 + 1) = aCodexmateLibCo_37; /*0x140ae3805*/
          v137 = 30; /*0x140ae380c*/
          v138 = 0x14600000001LL; /*0x140ae3821*/
          v139 = &unk_1417AFB75; /*0x140ae382f*/
          v140 = (__m128i *)v171; /*0x140ae383d*/
          sub_1412C36A0(&v180, &v134); /*0x140ae384f*/
        }
        sub_14149C500(&v168, v27); /*0x140ae385f*/
        sub_14149C500(v171, v173); /*0x140ae3873*/
        nullsub_1(v64); /*0x140ae3879*/
        v65 = (void *)sub_140001650(13, 1); /*0x140ae3888*/
        if ( !v65 ) /*0x140ae3890*/
          sub_1416C2D4B(1, 13); /*0x140ae444f*/
        qmemcpy(v65, "INVALID_FIELD", 13); /*0x140ae38ae*/
        v135.m256i_i64[0] = v169; /*0x140ae38b8*/
        v134 = v168; /*0x140ae38c3*/
        v135.m256i_i64[3] = *(_QWORD *)&v171[16]; /*0x140ae38ce*/
        *(__m128i *)&v135.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v171); /*0x140ae38da*/
        *(_QWORD *)&v136 = 13; /*0x140ae38e0*/
        *((_QWORD *)&v136 + 1) = v65; /*0x140ae38eb*/
        v137 = 13; /*0x140ae38f2*/
        v66 = v178; /*0x140ae38fd*/
        if ( v178 == v177.m128i_i64[0] ) /*0x140ae390b*/
          sub_141689730(&v177); /*0x140ae3914*/
        v67 = v177.m128i_i64[1]; /*0x140ae391a*/
        v68 = 9 * v66; /*0x140ae3921*/
        *(_QWORD *)(v177.m128i_i64[1] + 8 * v68 + 64) = v137; /*0x140ae392c*/
        v69 = _mm_load_si128(&v134); /*0x140ae3931*/
        v70 = *(_OWORD *)v135.m256i_i8; /*0x140ae3936*/
        v71 = *(_OWORD *)&v135.m256i_u64[2]; /*0x140ae393a*/
        *(_OWORD *)(v67 + 8 * v68 + 48) = v136; /*0x140ae3948*/
        *(_OWORD *)(v67 + 8 * v68 + 32) = v71; /*0x140ae394d*/
        *(_OWORD *)(v67 + 8 * v68 + 16) = v70; /*0x140ae3952*/
        *(__m128i *)(v67 + 8 * v68) = v69; /*0x140ae3957*/
        v178 = v66 + 1; /*0x140ae395f*/
        if ( v165.m128i_i64[0] ) /*0x140ae3970*/
          sub_140001660(v165.m128i_i64[1], v165.m128i_i64[0], 1); /*0x140ae397f*/
        v63 = v175; /*0x140ae3984*/
      }
      else
      {
        v131 = v160; /*0x140ae3597*/
        v130 = _mm_loadu_si128(&v159); /*0x140ae35a3*/
        v170 = v161; /*0x140ae35af*/
        v167 = v162; /*0x140ae35bd*/
        v51 = v163; /*0x140ae35c4*/
        LOBYTE(v132) = v164; /*0x140ae35d2*/
        if ( *(_QWORD *)(v27 + 144) == -1 || (v52 = *(_QWORD *)(v27 + 160)) == 0 ) /*0x140ae35ed*/
        {
          v158 = 1; /*0x140ae3fed*/
          v176 = nullptr; /*0x140ae3ff4*/
          v98 = 0; /*0x140ae3fff*/
LABEL_78:
          v181 = 1; /*0x140ae4001*/
          sub_14149C500(&v168, v27); /*0x140ae4012*/
          v179 = 1; /*0x140ae4018*/
          sub_14149C500(v171, v27 + 24); /*0x140ae402a*/
          v99 = *(_BYTE *)(v27 + 170); /*0x140ae4030*/
          sub_14149C500(&v159, v27 + 120); /*0x140ae4042*/
          v100 = *(_BYTE *)(v27 + 168); /*0x140ae4048*/
          v135.m256i_i64[0] = v169; /*0x140ae4056*/
          v134 = v168; /*0x140ae4061*/
          v135.m256i_i64[3] = *(_QWORD *)&v171[16]; /*0x140ae4070*/
          *(_OWORD *)&v135.m256i_u64[1] = *(_OWORD *)v171; /*0x140ae407b*/
          *(_QWORD *)&v136 = v175; /*0x140ae4085*/
          *((_QWORD *)&v136 + 1) = v174; /*0x140ae4093*/
          v137 = (__int64)v120; /*0x140ae409e*/
          v138 = (__int64)v176; /*0x140ae40ac*/
          v139 = (void *)v158; /*0x140ae40ba*/
          v140 = v176; /*0x140ae40c1*/
          v154 = v98; /*0x140ae40c8*/
          v141 = v170; /*0x140ae40d6*/
          v142 = v167; /*0x140ae40e4*/
          v143 = v51; /*0x140ae40eb*/
          v156 = v132; /*0x140ae40f6*/
          v157 = v99; /*0x140ae40fc*/
          v145 = v131; /*0x140ae4107*/
          v144 = v130; /*0x140ae410f*/
          v147 = v160; /*0x140ae411a*/
          v146 = _mm_loadu_si128(&v159); /*0x140ae4129*/
          v153 = 0; /*0x140ae412e*/
          v149 = -1; /*0x140ae4138*/
          v150 = 0; /*0x140ae4143*/
          v151 = v124; /*0x140ae4152*/
          v152 = v124; /*0x140ae4159*/
          v148 = -1; /*0x140ae4160*/
          v155 = v100; /*0x140ae416b*/
          v101 = v123[2]; /*0x140ae4175*/
          if ( v101 == *v123 ) /*0x140ae417c*/
            sub_1416899D0(v123); /*0x140ae4181*/
          sub_141684120(v123[1] + 232 * v101, &v134, 232); /*0x140ae419f*/
          v123[2] = v101 + 1; /*0x140ae41a7*/
          v181 = 0; /*0x140ae41ab*/
          sub_14149C500(&v134, v27); /*0x140ae41b8*/
          v181 = 0; /*0x140ae41be*/
          sub_140474440(&v125, &v134); /*0x140ae41cd*/
          ++v128; /*0x140ae41d3*/
          goto LABEL_8; /*0x140ae41db*/
        }
        v53 = *(_QWORD *)(v27 + 152); /*0x140ae35f3*/
        v182 = 1; /*0x140ae35fa*/
        sub_140AE73A0((__int64)&v134, v28, v29); /*0x140ae360b*/
        if ( v134.m128i_i64[0] == -1 ) /*0x140ae3616*/
        {
          v182 = 1; /*0x140ae3990*/
          sub_1404D9C20((__int64)&v165, v121, v122, (int)v28, v29, v53, v52); /*0x140ae39b8*/
        }
        else
        {
          v166 = v135.m256i_i64[0]; /*0x140ae3620*/
          v165 = _mm_loadu_si128(&v134); /*0x140ae362c*/
        }
        if ( v165.m128i_i64[0] == -1 ) /*0x140ae39c6*/
        {
          if ( v52 < 0 ) /*0x140ae41e3*/
          {
            v102 = 0; /*0x140ae4355*/
          }
          else
          {
            nullsub_1(v54); /*0x140ae41e9*/
            v102 = 1; /*0x140ae41ee*/
            v103 = sub_140001650(v52, 1); /*0x140ae41fb*/
            if ( v103 ) /*0x140ae4203*/
            {
              v104 = v52; /*0x140ae420f*/
              v176 = (__m128i *)v52; /*0x140ae4212*/
              v105 = v103; /*0x140ae4219*/
              sub_141684120(v103, v53, v104); /*0x140ae421c*/
              v98 = 1; /*0x140ae4221*/
              v129 = v105; /*0x140ae4224*/
              v158 = v105; /*0x140ae4228*/
              v21 = v133; /*0x140ae422f*/
              goto LABEL_78; /*0x140ae4233*/
            }
            v129 = v52; /*0x140ae4457*/
          }
          v182 = 1; /*0x140ae4357*/
          sub_1416C2D4B(v102, v129); /*0x140ae4365*/
        }
        v169 = v166; /*0x140ae39d3*/
        v168 = _mm_load_si128(&v165); /*0x140ae39e2*/
        v21 = v133; /*0x140ae39f8*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140ae3a00*/
        {
          v159.m128i_i64[0] = v27; /*0x140ae3a06*/
          v159.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140ae3a14*/
          v160 = &v168; /*0x140ae3a22*/
          v161 = sub_1400015F0; /*0x140ae3a29*/
          v134.m128i_i64[0] = 0; /*0x140ae3a30*/
          v134.m128i_i64[1] = (__int64)aCodexmateLibCo_37; /*0x140ae3a3f*/
          *(_OWORD *)v135.m256i_i8 = 0x1Eu; /*0x140ae3a43*/
          v135.m256i_i64[2] = (__int64)aSrcCoreRelayIo; /*0x140ae3a5a*/
          v135.m256i_i64[3] = 20; /*0x140ae3a61*/
          *(_QWORD *)&v136 = 2; /*0x140ae3a6c*/
          *((_QWORD *)&v136 + 1) = aCodexmateLibCo_37; /*0x140ae3a77*/
          v137 = 30; /*0x140ae3a7e*/
          v138 = 0x15700000001LL; /*0x140ae3a93*/
          v139 = &unk_1417AFB13; /*0x140ae3aa1*/
          v140 = &v159; /*0x140ae3aaf*/
          sub_1412C36A0(&v180, &v134); /*0x140ae3ac1*/
        }
        sub_14149C500(v171, v27); /*0x140ae3ad1*/
        sub_14149C500(&v159, v173); /*0x140ae3ae5*/
        nullsub_1(v72); /*0x140ae3aeb*/
        v73 = (void *)sub_140001650(14, 1); /*0x140ae3afa*/
        if ( !v73 ) /*0x140ae3b02*/
          sub_1416C2D4B(1, 14); /*0x140ae443d*/
        qmemcpy(v73, "KEYCHAIN_WRITE", 14); /*0x140ae3b20*/
        v135.m256i_i64[0] = *(_QWORD *)&v171[16]; /*0x140ae3b2a*/
        v134 = *(__m128i *)v171; /*0x140ae3b35*/
        v135.m256i_i64[3] = (__int64)v160; /*0x140ae3b40*/
        *(__m128i *)&v135.m256i_u64[1] = _mm_loadu_si128(&v159); /*0x140ae3b4c*/
        *(_QWORD *)&v136 = 14; /*0x140ae3b52*/
        *((_QWORD *)&v136 + 1) = v73; /*0x140ae3b5d*/
        v137 = 14; /*0x140ae3b64*/
        v74 = v178; /*0x140ae3b6f*/
        if ( v178 == v177.m128i_i64[0] ) /*0x140ae3b7d*/
          sub_141689730(&v177); /*0x140ae3b86*/
        v75 = v177.m128i_i64[1]; /*0x140ae3b8c*/
        v76 = 9 * v74; /*0x140ae3b93*/
        *(_QWORD *)(v177.m128i_i64[1] + 8 * v76 + 64) = v137; /*0x140ae3b9e*/
        v77 = _mm_load_si128(&v134); /*0x140ae3ba3*/
        v78 = *(_OWORD *)v135.m256i_i8; /*0x140ae3ba8*/
        v79 = *(_OWORD *)&v135.m256i_u64[2]; /*0x140ae3bac*/
        *(_OWORD *)(v75 + 8 * v76 + 48) = v136; /*0x140ae3bba*/
        *(_OWORD *)(v75 + 8 * v76 + 32) = v79; /*0x140ae3bbf*/
        *(_OWORD *)(v75 + 8 * v76 + 16) = v78; /*0x140ae3bc4*/
        *(__m128i *)(v75 + 8 * v76) = v77; /*0x140ae3bc9*/
        v178 = v74 + 1; /*0x140ae3bd1*/
        if ( v168.m128i_i64[0] ) /*0x140ae3be2*/
          sub_140001660(v168.m128i_i64[1], v168.m128i_i64[0], 1); /*0x140ae3bf1*/
        if ( v170 ) /*0x140ae3c00*/
          sub_140001660(v167, v170, 1); /*0x140ae3c0f*/
        v80 = v130.m128i_i64[1]; /*0x140ae3c14*/
        v81 = v131; /*0x140ae3c18*/
        if ( v131 ) /*0x140ae3c1f*/
        {
          v82 = (_QWORD *)(v130.m128i_i64[1] + 72); /*0x140ae3c21*/
          do /*0x140ae3c37*/
          {
            v83 = *(v82 - 7); /*0x140ae3c39*/
            if ( v83 ) /*0x140ae3c40*/
              sub_140001660(*(v82 - 6), v83, 1); /*0x140ae3c4c*/
            v84 = *(v82 - 1); /*0x140ae3c51*/
            if ( v84 != -1 && v84 ) /*0x140ae3c5e*/
              sub_140001660(*v82, v84, 1); /*0x140ae3c69*/
            v85 = *(v82 - 4); /*0x140ae3c6e*/
            if ( v85 ) /*0x140ae3c75*/
              sub_140001660(*(v82 - 3), v85, 1); /*0x140ae3c81*/
            v82 += 12; /*0x140ae3c30*/
            v81 = (__m128i *)((char *)v81 - 1); /*0x140ae3c34*/
          }
          while ( v81 ); /*0x140ae3c37*/
        }
        v63 = v175; /*0x140ae3c8f*/
        if ( v130.m128i_i64[0] ) /*0x140ae3c96*/
        {
          v86 = v175; /*0x140ae3c9c*/
          sub_140001660(v80, 96 * v130.m128i_i64[0], 8); /*0x140ae3cac*/
          v63 = v86; /*0x140ae3cb1*/
        }
      }
    }
    v27 = v20; /*0x140ae3cb4*/
    if ( v63 ) /*0x140ae3cba*/
    {
      sub_140001660(v174, v63, 1); /*0x140ae3ccd*/
      goto LABEL_8; /*0x140ae3cd2*/
    }
  }
  v106 = v127; /*0x140ae423f*/
  v127[1].m128i_i64[0] = v178; /*0x140ae4243*/
  *v106 = _mm_loadu_si128(&v177); /*0x140ae424f*/
  HIDWORD(_RAX) = HIDWORD(v128); /*0x140ae4253*/
  v106[1].m128i_i64[1] = v128; /*0x140ae4257*/
  v108 = v125.m128i_i64[1]; /*0x140ae425b*/
  if ( v125.m128i_i64[1] ) /*0x140ae4262*/
  {
    v109 = v126.m256i_i64[1]; /*0x140ae4268*/
    if ( v126.m256i_i64[1] ) /*0x140ae426f*/
    {
      v110 = v125.m128i_i64[0]; /*0x140ae4275*/
      v111 = (const __m128i *)(v125.m128i_i64[0] + 16); /*0x140ae427d*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v125.m128i_i64[0])); /*0x140ae4286*/
      do /*0x140ae42a0*/
      {
        if ( !(_WORD)_R15D ) /*0x140ae42a6*/
        {
          do /*0x140ae42cc*/
          {
            si128 = _mm_load_si128(v111); /*0x140ae42b0*/
            v110 -= 384; /*0x140ae42b5*/
            ++v111; /*0x140ae42bc*/
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x140ae42c5*/
          }
          while ( !_R15D ); /*0x140ae42cc*/
        }
        __asm { tzcnt eax, r15d } /*0x140ae42ce*/
        v114 = -3 * _RAX; /*0x140ae42d6*/
        v115 = *(_QWORD *)(v110 + 8 * v114 - 24); /*0x140ae42da*/
        if ( v115 ) /*0x140ae42e2*/
          sub_140001660(*(_QWORD *)(v110 + 8 * v114 - 16), v115, 1); /*0x140ae42f2*/
        --v109; /*0x140ae4290*/
        _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x140ae4297*/
        _R15D &= _R15D - 1; /*0x140ae429a*/
      }
      while ( v109 ); /*0x140ae42a0*/
    }
    v116 = (24 * v108 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x140ae4305*/
    v117 = v116 + v108 + 17; /*0x140ae430c*/
    if ( v117 ) /*0x140ae4310*/
      sub_140001660(v125.m128i_i64[0] - v116, v117, 16); /*0x140ae4322*/
  }
  return v127; /*0x140ae432b*/
}