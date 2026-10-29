// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140356430 | name sub_140356430
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140356430(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v6; // xmm0
  __m128i v7; // xmm0
  __int128 v8; // kr00_16
  const __m128i *v10; // r12
  __m128i si128; // xmm8
  __int64 v12; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i v17; // xmm6
  __m128i v18; // xmm7
  const __m128i *v19; // r13
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // r15
  __int128 v25; // xmm0
  __m128i v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // rax
  __int128 v30; // xmm0
  __m128i v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r14
  const __m128i *v36; // r15
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rbx
  _QWORD *v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v52; // r10
  __int64 v53; // r9
  __m128i v54; // xmm0
  unsigned __int64 v55; // r8
  __int64 v56; // r8
  const __m128i *v57; // r11
  __int64 v58; // r12
  __m128i v59; // xmm0
  __int64 v60; // r9
  unsigned __int64 v61; // r15
  __m128i v62; // xmm0
  __m128i v63; // xmm7
  __int64 v65; // rbx
  unsigned __int64 i; // rdx
  unsigned __int64 v67; // r15
  __m128i v68; // xmm8
  __int64 v70; // rdi
  __int64 v71; // r14
  __int64 v72; // r12
  __int64 v73; // r14
  unsigned __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // r13
  __m128i v77; // xmm0
  __m128i v78; // xmm7
  __int64 k; // rdx
  unsigned __int64 v80; // rax
  __m128i v81; // xmm8
  int v83; // eax
  bool v84; // zf
  unsigned __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // r13
  __m128i v88; // xmm0
  __m128i v89; // xmm7
  __int64 j; // rdx
  unsigned __int64 v91; // rax
  __m128i v92; // xmm8
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rax
  __m128i v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int64 v101; // rdx
  __m128i v102; // xmm0
  __int64 v103; // rdx
  char v104; // cl
  __int64 v105; // rdi
  _OWORD v106[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v107; // [rsp+70h] [rbp-10h]
  __m128i v108; // [rsp+78h] [rbp-8h] BYREF
  __int64 v109; // [rsp+88h] [rbp+8h]
  _OWORD v110[3]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v111; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v112; // [rsp+D0h] [rbp+50h]
  __m128i v113; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v114; // [rsp+F0h] [rbp+70h]
  __int128 v115; // [rsp+100h] [rbp+80h]
  __m128i v116; // [rsp+120h] [rbp+A0h]
  __int128 v117; // [rsp+130h] [rbp+B0h]
  __int128 v118; // [rsp+140h] [rbp+C0h]
  __int64 v119; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v120; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v121; // [rsp+160h] [rbp+E0h]
  __int64 v122; // [rsp+168h] [rbp+E8h]
  _BYTE v123[56]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v124; // [rsp+1A8h] [rbp+128h]
  __int128 v125; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v126; // [rsp+1C8h] [rbp+148h]
  __int128 v127; // [rsp+1D8h] [rbp+158h]
  __int128 v128; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v129; // [rsp+1F8h] [rbp+178h]
  __int128 v130; // [rsp+208h] [rbp+188h]
  __int64 v131; // [rsp+218h] [rbp+198h]
  __int64 v132; // [rsp+228h] [rbp+1A8h]
  __m256i v133; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v134; // [rsp+250h] [rbp+1D0h]
  __int128 v135; // [rsp+260h] [rbp+1E0h]
  __int128 v136; // [rsp+270h] [rbp+1F0h]
  __m128i v137; // [rsp+280h] [rbp+200h] BYREF
  __m128i v138; // [rsp+290h] [rbp+210h] BYREF
  __int128 v139; // [rsp+2A0h] [rbp+220h]
  __int128 v140; // [rsp+2B0h] [rbp+230h] BYREF
  _BYTE v141[88]; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v142; // [rsp+320h] [rbp+2A0h]
  __int64 v143; // [rsp+328h] [rbp+2A8h]
  const __m128i *v144; // [rsp+330h] [rbp+2B0h]
  __int64 v145; // [rsp+338h] [rbp+2B8h]
  __int64 v146; // [rsp+340h] [rbp+2C0h]
  __int64 v147; // [rsp+348h] [rbp+2C8h]
  _BYTE v148[104]; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v149; // [rsp+3B8h] [rbp+338h]
  __int128 v150; // [rsp+3C8h] [rbp+348h]
  __int128 v151; // [rsp+3D8h] [rbp+358h]
  __int128 v152; // [rsp+3E8h] [rbp+368h]
  __int64 v153; // [rsp+3F8h] [rbp+378h]
  __int64 v154; // [rsp+408h] [rbp+388h]
  __int64 v155; // [rsp+410h] [rbp+390h]
  unsigned __int64 v156; // [rsp+418h] [rbp+398h]
  _BYTE v157[96]; // [rsp+420h] [rbp+3A0h] BYREF
  char v158; // [rsp+482h] [rbp+402h]
  char v159; // [rsp+483h] [rbp+403h]
  char v160; // [rsp+484h] [rbp+404h]
  char v161; // [rsp+485h] [rbp+405h]
  char v162; // [rsp+486h] [rbp+406h]
  char v163; // [rsp+487h] [rbp+407h]
  __int64 v164; // [rsp+488h] [rbp+408h]

  v164 = -2;
  sub_140C1C870(v148);
  *(_OWORD *)v157 = *(_OWORD *)&v148[8];
  *(_OWORD *)&v157[16] = *(_OWORD *)&v148[24];
  *(_OWORD *)&v157[32] = *(_OWORD *)&v148[40];
  *(_OWORD *)&v157[48] = *(_OWORD *)&v148[56];
  *(_OWORD *)&v157[64] = *(_OWORD *)&v148[72];
  *(_OWORD *)&v157[80] = *(_OWORD *)&v148[88];
  if ( *(_QWORD *)v148 == 2 )
  {
    v133 = *(__m256i *)v157;
    v134 = *(_OWORD *)&v157[32];
    v135 = *(_OWORD *)&v157[48];
    v136 = *(_OWORD *)&v157[64];
    v137 = *(__m128i *)&v157[80];
  }
  else
  {
    v131 = v153;
    v130 = v152;
    v129 = v151;
    v128 = v150;
    v127 = v149;
    *(_OWORD *)&v123[8] = *(_OWORD *)v157;
    *(_OWORD *)&v123[24] = *(_OWORD *)&v157[16];
    *(_OWORD *)&v123[40] = *(_OWORD *)&v157[32];
    v124 = *(_OWORD *)&v157[48];
    v125 = *(_OWORD *)&v157[64];
    v126 = *(__m128i *)&v157[80];
    *(_QWORD *)v123 = *(_QWORD *)v148;
    LOBYTE(v4) = 1;
    sub_140C4A970(&v133, v123, v4);
    sub_140BAC0A0(v123);
  }
  v5 = v133.m256i_i64[0];
  v111 = *(__m128i *)&v133.m256i_u64[1];
  v112 = v133.m256i_i64[3];
  if ( v133.m256i_i64[0] != -1 )
  {
    *(__m128i *)&v141[72] = v137;
    *(_OWORD *)&v141[56] = v136;
    *(_OWORD *)&v141[40] = v135;
    *(_OWORD *)&v141[24] = v134;
    *(_QWORD *)&v141[16] = v112;
    *(__m128i *)v141 = v111;
    v138 = v111;
    *(_QWORD *)&v139 = v112;
    *((_QWORD *)&v139 + 1) = v134;
    v140 = *(_OWORD *)&v141[32];
    *(_QWORD *)(a1 + 88) = v137.m128i_i64[1];
    v6 = *(_OWORD *)&v141[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v141[64];
    *(_OWORD *)(a1 + 56) = v6;
    v7 = _mm_load_si128(&v138);
    v8 = v139;
    *(_OWORD *)(a1 + 40) = v140;
    *(_OWORD *)(a1 + 24) = v8;
    *(__m128i *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  v132 = a2;
  sub_1402DED50(&v113, &v111);
  *(__m128i *)v141 = _mm_loadu_si128(&v113);
  v140 = v115;
  v110[0] = *(_OWORD *)v141;
  v110[1] = v114;
  v110[2] = v115;
  v10 = *(const __m128i **)v141;
  si128 = _mm_load_si128(*(const __m128i **)v141);
  v12 = *((_QWORD *)&v114 + 1);
  v163 = 1;
  _RAX = sub_14167F170();
  if ( *(_BYTE *)(_RAX + 16) == 1 )
  {
    v15 = *(_QWORD *)_RAX;
    v16 = *(_QWORD *)(_RAX + 8);
  }
  else
  {
    v163 = 1;
    v105 = _RAX;
    v15 = sub_141696260();
    _RAX = v105;
    *(_QWORD *)v105 = v15;
    *(_QWORD *)(v105 + 8) = v16;
    *(_BYTE *)(v105 + 16) = 1;
  }
  *(_QWORD *)_RAX = v15 + 1;
  v17 = _mm_loadu_si128((const __m128i *)&MEMORY[0x1419E4880]);
  *(__m128i *)&v148[16] = v17;
  v18 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  *(__m128i *)v148 = v18;
  *(_QWORD *)&v148[32] = v15;
  *(_QWORD *)&v148[40] = v16;
  if ( v12 )
  {
    LOBYTE(v14) = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_141930360(v148, v12, &v148[32], v14) >> 32;
  }
  v19 = v10 + 1;
  _EDI = ~_mm_movemask_epi8(si128);
  if ( (_WORD)_EDI )
    goto LABEL_14;
  while ( v12 )
  {
    do
    {
      v21 = _mm_load_si128(v19);
      v10 -= 416;
      ++v19;
      _EDI = _mm_movemask_epi8(v21) ^ 0xFFFF;
    }
    while ( !_EDI );
    do
    {
LABEL_14:
      __asm { tzcnt   eax, edi }
      sub_1416AC440(v123, &v10[-26 * _RAX - 26]);
      sub_1403AAB80(v148, v123);
      _RAX = _EDI & (unsigned int)(_EDI - 1);
      --v12;
      _EDI &= _EDI - 1;
    }
    while ( (_WORD)_EDI );
  }
  v22 = _mm_load_si128((const __m128i *)v148);
  v118 = *(_OWORD *)&v148[32];
  v117 = *(_OWORD *)&v148[16];
  v116 = v22;
  v159 = 1;
  v23 = v132;
  sub_14035B7D0(v148, v132, v110);
  _RAX = *(_QWORD *)v148;
  *(_OWORD *)v123 = *(_OWORD *)&v148[8];
  *(_OWORD *)&v123[16] = *(_OWORD *)&v148[24];
  *(_OWORD *)&v123[32] = *(_OWORD *)&v148[40];
  if ( *(_QWORD *)v148 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
    v25 = *(_OWORD *)&v148[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v148[72];
    *(_OWORD *)(a1 + 56) = v25;
    v26 = _mm_load_si128((const __m128i *)v123);
    v27 = *(_OWORD *)&v123[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v123[32];
    *(_OWORD *)(a1 + 24) = v27;
    *(__m128i *)(a1 + 8) = v26;
    *(_QWORD *)a1 = _RAX;
    goto LABEL_21;
  }
  v138 = _mm_load_si128((const __m128i *)v123);
  v139 = *(_OWORD *)&v123[16];
  v140 = *(_OWORD *)&v123[32];
  v160 = 1;
  sub_1401BEB90(v157, v23);
  v29 = *(_QWORD *)v157;
  *(_OWORD *)v141 = *(_OWORD *)&v157[8];
  *(_OWORD *)&v141[16] = *(_OWORD *)&v157[24];
  *(_OWORD *)&v141[32] = *(_OWORD *)&v157[40];
  if ( *(_QWORD *)v157 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v157[88];
    v30 = *(_OWORD *)&v157[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v157[72];
    *(_OWORD *)(a1 + 56) = v30;
    v31 = _mm_load_si128((const __m128i *)v141);
    v32 = *(_OWORD *)&v141[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v141[32];
    *(_OWORD *)(a1 + 24) = v32;
    *(__m128i *)(a1 + 8) = v31;
    *(_QWORD *)a1 = v29;
LABEL_20:
    HIDWORD(_RAX) = (unsigned __int64)sub_140298940(&v138, v28) >> 32;
LABEL_21:
    v33 = v116.m128i_i64[1];
    if ( v116.m128i_i64[1] )
    {
      v34 = *((_QWORD *)&v117 + 1);
      if ( *((_QWORD *)&v117 + 1) )
      {
        v35 = v116.m128i_i64[0];
        v36 = (const __m128i *)(v116.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v116.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v38 = _mm_load_si128(v36);
              v35 -= 384;
              ++v36;
              _R12D = _mm_movemask_epi8(v38) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v39 = -3 * _RAX;
          v40 = *(_QWORD *)(v35 + 8 * v39 - 24);
          if ( v40 )
            sub_140001660(*(_QWORD *)(v35 + 8 * v39 - 16), v40, 1);
          --v34;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v34 );
      }
      v41 = (24 * v33 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = v41 + v33 + 17;
      if ( v42 )
        sub_140001660(v116.m128i_i64[0] - v41, v42, 16);
    }
    return a1;
  }
  v113 = _mm_load_si128((const __m128i *)v141);
  v114 = *(_OWORD *)&v141[16];
  v115 = *(_OWORD *)&v141[32];
  sub_1401C07D0(v148, &v113, v23);
  v133 = *(__m256i *)&v148[8];
  v134 = *(_OWORD *)&v148[40];
  v135 = *(_OWORD *)&v148[56];
  v136 = *(_OWORD *)&v148[72];
  v137 = *(__m128i *)&v148[88];
  if ( !*(_QWORD *)v148 )
  {
    *(__m128i *)(a1 + 80) = v137;
    *(_OWORD *)(a1 + 64) = v136;
    v47 = _mm_load_si128((const __m128i *)&v133);
    v48 = *(_OWORD *)&v133.m256i_u64[2];
    v49 = v134;
    *(_OWORD *)(a1 + 48) = v135;
    *(_OWORD *)(a1 + 32) = v49;
    *(_OWORD *)(a1 + 16) = v48;
    *(__m128i *)a1 = v47;
    sub_14029A620(v141);
    goto LABEL_20;
  }
  *(_QWORD *)&v129 = v151;
  v128 = v150;
  v127 = v149;
  *(__m256i *)&v123[8] = v133;
  *(_OWORD *)&v123[40] = v134;
  v124 = v135;
  v125 = v136;
  v126 = _mm_load_si128(&v137);
  *(_QWORD *)v123 = *(_QWORD *)v148;
  sub_14029A620(v141);
  v161 = 1;
  sub_140359550(v148, &v138, v123, &v123[48]);
  v43 = *(_QWORD *)&v148[8];
  v120 = *(_QWORD *)&v148[16];
  v146 = *(_QWORD *)&v148[16];
  if ( *(_QWORD *)&v148[16] )
  {
    v44 = (_QWORD *)(*(_QWORD *)&v148[8] + 8LL);
    v45 = v146;
    do
    {
      v46 = *(v44 - 1);
      if ( v46 )
        sub_140001660(*v44, v46, 1);
      v44 += 3;
      --v45;
    }
    while ( v45 );
  }
  if ( *(_QWORD *)v148 )
    sub_140001660(v43, 24LL * *(_QWORD *)v148, 8);
  if ( v146 )
  {
    *(_QWORD *)v148 = &v120;
    *(_QWORD *)&v148[8] = sub_1416BCB10;
    v161 = 1;
    sub_1416ABFD0(&v108, &unk_1419EA458, v148);
    *(_QWORD *)(a1 + 24) = v109;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v108);
    *(_QWORD *)a1 = 10;
    goto LABEL_95;
  }
  v161 = 1;
  *(_QWORD *)&_RAX = sub_140893A90(&off_1419E5E90);
  *(__m128i *)&v133.m256i_u64[2] = v17;
  *(__m128i *)v133.m256i_i8 = v18;
  v134 = _RAX;
  v52 = v116.m128i_i64[0];
  v53 = *((_QWORD *)&v117 + 1);
  v54 = _mm_load_si128((const __m128i *)v116.m128i_i64[0]);
  if ( v116.m128i_i64[1] )
  {
    v55 = (24 * v116.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    _RCX = v116.m128i_i64[1] + v55 + 17;
    *((_QWORD *)&_RAX + 1) = v116.m128i_i64[0] - v55;
    v56 = 16;
  }
  else
  {
    v56 = 0;
  }
  v57 = (const __m128i *)(v116.m128i_i64[0] + 16);
  *(_QWORD *)v157 = v56;
  *(_QWORD *)&v157[8] = _RCX;
  *(_QWORD *)&v157[16] = *((_QWORD *)&_RAX + 1);
  *(_QWORD *)&v157[24] = v116.m128i_i64[0];
  *(_QWORD *)&v157[32] = v116.m128i_i64[0] + 16;
  *(_QWORD *)&v157[40] = v116.m128i_i64[0] + v116.m128i_i64[1] + 1;
  DWORD2(_RAX) = ~_mm_movemask_epi8(v54);
  *(_WORD *)&v157[48] = WORD4(_RAX);
  *(_QWORD *)&v157[56] = *((_QWORD *)&v117 + 1);
  if ( *((_QWORD *)&v117 + 1) )
  {
    v121 = *((_QWORD *)&v139 + 1);
    v58 = v138.m128i_i64[1];
    v122 = v138.m128i_i64[0];
    while ( 1 )
    {
      for ( ; !DWORD2(_RAX); DWORD2(_RAX) = _mm_movemask_epi8(v59) ^ 0xFFFF )
      {
        v59 = _mm_load_si128(v57);
        v52 -= 384;
        ++v57;
      }
      __asm { tzcnt   ecx, edx }
      *((_QWORD *)&_RAX + 1) = DWORD2(_RAX) & (unsigned int)(DWORD2(_RAX) - 1);
      *(_QWORD *)&_RAX = -3 * _RCX;
      v60 = v53 - 1;
      _RCX = *(_QWORD *)(v52 - 24 * _RCX - 24);
      *(_OWORD *)v148 = *(_OWORD *)(v52 + 8 * _RAX - 16);
      if ( _RCX == -1 )
        goto LABEL_84;
      v145 = *((_QWORD *)&_RAX + 1);
      v144 = v57;
      v143 = v52;
      v142 = v60;
      *(__m128i *)&v141[8] = _mm_load_si128((const __m128i *)v148);
      v154 = _RCX;
      *(_QWORD *)v141 = _RCX;
      if ( !v121 )
        goto LABEL_81;
      v162 = 1;
      v61 = sub_140D2AC70(&v140, v141);
      v62 = _mm_cvtsi32_si128(v61 >> 57);
      v63 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v62, v62), 0), 68);
      HIDWORD(_RAX) = *(_DWORD *)&v141[12];
      v155 = *(_QWORD *)&v141[8];
      v65 = *(_QWORD *)&v141[16];
      for ( i = 0; ; i += 16LL )
      {
        v67 = v58 & v61;
        _RCX = v122;
        v68 = _mm_loadu_si128((const __m128i *)(v122 + v67));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v68, v63));
        if ( _R13D )
          break;
LABEL_59:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v68, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_81;
        v61 = i + v67 + 16;
      }
      v156 = i;
      while ( 1 )
      {
        __asm { tzcnt   eax, r13d }
        v70 = v58;
        v71 = -416LL * (v58 & (v67 + _RAX));
        v72 = _RCX;
        if ( v65 == *(_QWORD *)(_RCX + v71 - 400) )
        {
          v73 = _RCX + v71;
          if ( !(unsigned int)sub_1418F4B70(v155, *(_QWORD *)(v73 - 408)) )
            break;
        }
        _RAX = (unsigned int)(_R13D - 1);
        LOWORD(_RAX) = _R13D & (_R13D - 1);
        _R13D = _RAX;
        _RCX = v72;
        v58 = v70;
        i = v156;
        if ( !(_WORD)_RAX )
          goto LABEL_59;
      }
      v58 = v70;
      if ( (_QWORD)v128 )
        break;
LABEL_70:
      if ( (_QWORD)v125 )
      {
        v162 = 1;
        v85 = sub_140D2AC70((char *)&v125 + 8, v141);
        _RCX = v85 >> 57;
        v86 = *(_QWORD *)&v123[48];
        v87 = v124;
        v88 = _mm_cvtsi32_si128(v85 >> 57);
        v89 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v88, v88), 0), 68);
        for ( j = 0; ; j += 16 )
        {
          v91 = v87 & v85;
          v92 = _mm_loadu_si128((const __m128i *)(v86 + v91));
          _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v92, v89));
          if ( _EDI )
            break;
LABEL_77:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v92, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_79;
          v85 = j + v91 + 16;
        }
        v156 = v91;
        v147 = j;
        while ( 1 )
        {
          __asm { tzcnt   ecx, edi }
          _RCX = -(__int64)(v87 & (v91 + _RCX));
          if ( v65 == *(_QWORD *)(v86 + 24 * _RCX - 8)
            && !(unsigned int)sub_1418F4B70(v155, *(_QWORD *)(v86 + 24 * _RCX - 16)) )
          {
            break;
          }
          v94 = _EDI - 1;
          LOWORD(v94) = _EDI & (_EDI - 1);
          v84 = (_WORD)v94 == 0;
          _EDI = v94;
          v91 = v156;
          j = v147;
          if ( v84 )
            goto LABEL_77;
        }
LABEL_81:
        if ( v154 )
          sub_140001660(*(_QWORD *)&v141[8], v154, 1);
        goto LABEL_48;
      }
LABEL_79:
      v162 = 1;
      sub_1402D3470((unsigned int)v148, v155, v65, v73 - 392, (__int64)v123);
      v95 = *(_QWORD *)v148;
      if ( *(_QWORD *)v148 != -1 )
      {
        *(_WORD *)&v157[48] = v145;
        *(_QWORD *)&v157[24] = v143;
        *(_QWORD *)&v157[32] = v144;
        *(_QWORD *)&v157[56] = v142;
        v104 = v148[8];
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v148[88];
        *(_OWORD *)(a1 + 73) = *(_OWORD *)&v148[73];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v148[57];
        *(_OWORD *)(a1 + 41) = *(_OWORD *)&v148[41];
        *(_OWORD *)(a1 + 25) = *(_OWORD *)&v148[25];
        *(_OWORD *)(a1 + 9) = *(_OWORD *)&v148[9];
        *(_QWORD *)a1 = v95;
        *(_BYTE *)(a1 + 8) = v104;
        if ( v154 )
          sub_140001660(v155, v154, 1);
        sub_14036B560(v157);
        goto LABEL_94;
      }
      if ( v148[8] )
        goto LABEL_81;
      *(_QWORD *)&v148[16] = *(_QWORD *)&v141[16];
      *(__m128i *)v148 = _mm_loadu_si128((const __m128i *)v141);
      v162 = 0;
      sub_1403AAB80(&v133, v148);
LABEL_48:
      v53 = v142;
      v23 = v132;
      v52 = v143;
      v57 = v144;
      DWORD2(_RAX) = v145;
      if ( !v142 )
        goto LABEL_83;
    }
    v162 = 1;
    v74 = sub_140D2AC70((char *)&v128 + 8, v141);
    _RCX = v74 >> 57;
    v75 = v126.m128i_i64[1];
    v76 = v127;
    v77 = _mm_cvtsi32_si128(v74 >> 57);
    v78 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v77, v77), 0), 68);
    for ( k = 0; ; k += 16 )
    {
      v80 = v76 & v74;
      v81 = _mm_loadu_si128((const __m128i *)(v75 + v80));
      _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v81, v78));
      if ( _EDI )
        break;
LABEL_68:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v81, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_70;
      v74 = k + v80 + 16;
    }
    v156 = v80;
    v147 = k;
    while ( 1 )
    {
      __asm { tzcnt   ecx, edi }
      _RCX = -(__int64)(v76 & (v80 + _RCX));
      if ( v65 == *(_QWORD *)(v75 + 24 * _RCX - 8)
        && !(unsigned int)sub_1418F4B70(v155, *(_QWORD *)(v75 + 24 * _RCX - 16)) )
      {
        goto LABEL_81;
      }
      v83 = _EDI - 1;
      LOWORD(v83) = _EDI & (_EDI - 1);
      v84 = (_WORD)v83 == 0;
      _EDI = v83;
      v80 = v156;
      k = v147;
      if ( v84 )
        goto LABEL_68;
    }
  }
LABEL_83:
  v60 = 0;
LABEL_84:
  *(_WORD *)&v157[48] = WORD4(_RAX);
  *(_QWORD *)&v157[24] = v52;
  *(_QWORD *)&v157[32] = v57;
  *(_QWORD *)&v157[56] = v60;
  sub_14036B560(v157);
  if ( !v133.m256i_i64[3] )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)a1 = -1;
LABEL_94:
    sub_140370B80(&v133);
LABEL_95:
    sub_14029E410(v123);
    HIDWORD(_RAX) = (unsigned __int64)sub_140298940(&v138, v101) >> 32;
    if ( !v146 )
      return a1;
    goto LABEL_21;
  }
  sub_1403553B0(v141, &v138, &v133);
  v96 = *(_QWORD *)&v141[16];
  if ( *(_QWORD *)&v141[16] < v133.m256i_i64[3] && *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v119 = *(_QWORD *)&v141[16];
    v113.m128i_i64[0] = v133.m256i_i64[3];
    *(_QWORD *)v157 = &v119;
    *(_QWORD *)&v157[8] = sub_1416BCB10;
    *(_QWORD *)&v157[16] = &v113;
    *(_QWORD *)&v157[24] = sub_1416BCB10;
    *(_QWORD *)v148 = aCodexmateLibCo_27;
    *(_QWORD *)&v148[8] = 37;
    *(_QWORD *)&v148[16] = aCodexmateLibCo_27;
    *(_QWORD *)&v148[24] = 37;
    *(_QWORD *)&v148[32] = &off_1419EA3E8;
    sub_140BAD520(&unk_1419EA390, v157, 2, v148);
  }
  if ( !v96 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_93;
  }
  sub_1402C8EA0(v148, v23, *(_QWORD *)&v141[8], v96);
  v97 = *(_QWORD *)v148;
  *(_OWORD *)v157 = *(_OWORD *)&v148[8];
  *(_OWORD *)&v157[16] = *(_OWORD *)&v148[24];
  *(_OWORD *)&v157[32] = *(_OWORD *)&v148[40];
  *(_OWORD *)&v157[48] = *(_OWORD *)&v148[56];
  *(_QWORD *)&v157[64] = *(_QWORD *)&v148[72];
  if ( *(_QWORD *)v148 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v148[80];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v157[64];
    v98 = _mm_load_si128((const __m128i *)v157);
    v99 = *(_OWORD *)&v157[16];
    v100 = *(_OWORD *)&v157[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v157[48];
    *(_OWORD *)(a1 + 40) = v100;
    *(_OWORD *)(a1 + 24) = v99;
    *(__m128i *)(a1 + 8) = v98;
    *(_QWORD *)a1 = v97;
LABEL_93:
    sub_140025530(v141);
    goto LABEL_94;
  }
  v106[2] = *(_OWORD *)&v157[32];
  v106[0] = _mm_load_si128((const __m128i *)v157);
  v106[1] = *(_OWORD *)&v157[16];
  v106[3] = *(_OWORD *)&v157[48];
  v107 = *(_QWORD *)&v157[64];
  if ( *(_QWORD *)&v157[40] && *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v113.m128i_i64[0] = *(_QWORD *)&v157[40];
    *(_QWORD *)v157 = &v113;
    *(_QWORD *)&v157[8] = sub_1416BCB10;
    *(_QWORD *)v148 = aCodexmateLibCo_27;
    *(_QWORD *)&v148[8] = 37;
    *(_QWORD *)&v148[16] = aCodexmateLibCo_27;
    *(_QWORD *)&v148[24] = 37;
    *(_QWORD *)&v148[32] = &off_1419EA440;
    v158 = 1;
    sub_140BAD520(&unk_1419EA400, v157, 2, v148);
  }
  v158 = 0;
  sub_140354E70(v148, v106, 0);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)&v148[32];
  v102 = _mm_loadu_si128((const __m128i *)v148);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v148[16];
  *(__m128i *)(a1 + 8) = v102;
  *(_QWORD *)a1 = -1;
  sub_140025530(v141);
  sub_140370B80(&v133);
  sub_14029E410(v123);
  sub_140298940(&v138, v103);
  return a1;
}
