// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a7b0e0 | successor of pre-update 0x140356430 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140A7B0E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __m128i si128; // xmm0
  __int128 v8; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm8
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __m128i v20; // xmm6
  __m128i v21; // xmm7
  __int128 v23; // xmm0
  __m128i v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm0
  __m128i v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // r14
  const __m128i *v33; // r15
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r14
  _QWORD *v42; // r15
  __int64 v43; // r12
  __int64 v44; // rdx
  int v45; // eax
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int128 v48; // xmm2
  __int64 v51; // r9
  __int64 v52; // r10
  __m128i v53; // xmm0
  unsigned __int64 v54; // r8
  __int64 v55; // r8
  const __m128i *v56; // r11
  __m128i v57; // xmm0
  __int64 v58; // r10
  unsigned __int64 v59; // r15
  __m128i v60; // kr00_16
  __m128i v61; // xmm0
  __m128i v62; // xmm7
  __int64 v64; // r8
  unsigned __int64 v65; // r15
  __m128i v66; // xmm8
  unsigned __int64 v68; // r14
  __int64 v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // r12
  __m128i v74; // xmm0
  __m128i v75; // xmm7
  __int64 j; // rdx
  unsigned __int64 v77; // rax
  __m128i v78; // xmm8
  unsigned __int64 v80; // r13
  int v81; // eax
  int v82; // eax
  bool v83; // zf
  unsigned __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // r12
  __m128i v87; // xmm0
  __m128i v88; // xmm7
  __int64 i; // rdx
  unsigned __int64 v90; // rax
  __m128i v91; // xmm8
  unsigned __int64 v93; // r13
  int v94; // eax
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  __m128i v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm2
  __int64 v103; // rdi
  __int64 v104; // rbx
  __int64 v105; // r14
  const __m128i *v106; // r15
  __m128i v108; // xmm0
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rbx
  __int64 v114; // r14
  const __m128i *v115; // r15
  __m128i v117; // xmm0
  __int64 v118; // rax
  __int64 v119; // rdx
  unsigned __int64 v120; // rax
  __int64 v121; // rdi
  char v122; // di
  __m128i v123; // xmm0
  char v124; // cl
  __int64 v125; // r13
  _OWORD v126[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v127; // [rsp+70h] [rbp-10h]
  __m128i v128; // [rsp+78h] [rbp-8h] BYREF
  __int64 v129; // [rsp+88h] [rbp+8h]
  _OWORD v130[3]; // [rsp+90h] [rbp+10h] BYREF
  _OWORD v131[3]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v132; // [rsp+F0h] [rbp+70h]
  __int128 v133; // [rsp+100h] [rbp+80h]
  __int128 v134; // [rsp+110h] [rbp+90h]
  __int64 v135; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v136; // [rsp+128h] [rbp+A8h] BYREF
  __m128i v137; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v138; // [rsp+140h] [rbp+C0h]
  __int128 v139; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v140; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v141; // [rsp+170h] [rbp+F0h]
  __int128 v142; // [rsp+180h] [rbp+100h]
  __int128 v143; // [rsp+190h] [rbp+110h]
  __int128 v144; // [rsp+1A0h] [rbp+120h]
  __m128i v145; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v146[56]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v147; // [rsp+1F8h] [rbp+178h]
  __int128 v148; // [rsp+208h] [rbp+188h] BYREF
  __m128i v149; // [rsp+218h] [rbp+198h]
  __int128 v150; // [rsp+228h] [rbp+1A8h]
  __int128 v151; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v152; // [rsp+248h] [rbp+1C8h]
  __int64 v153; // [rsp+250h] [rbp+1D0h]
  __int64 v154; // [rsp+258h] [rbp+1D8h]
  const __m128i *v155; // [rsp+260h] [rbp+1E0h]
  __int64 v156; // [rsp+268h] [rbp+1E8h]
  _BYTE v157[104]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v158; // [rsp+2D8h] [rbp+258h]
  __int128 v159; // [rsp+2E8h] [rbp+268h]
  __int64 v160; // [rsp+2F8h] [rbp+278h]
  _BYTE v161[72]; // [rsp+300h] [rbp+280h] BYREF
  __int128 v162; // [rsp+348h] [rbp+2C8h]
  __int64 v163; // [rsp+358h] [rbp+2D8h]
  __m256i v164; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v165; // [rsp+380h] [rbp+300h]
  __int64 v166; // [rsp+390h] [rbp+310h]
  __int64 v167; // [rsp+398h] [rbp+318h]
  __int64 v168; // [rsp+3A0h] [rbp+320h]
  __int64 v169; // [rsp+3A8h] [rbp+328h]
  char v170; // [rsp+3B2h] [rbp+332h]
  char v171; // [rsp+3B3h] [rbp+333h]
  char v172; // [rsp+3B4h] [rbp+334h]
  char v173; // [rsp+3B5h] [rbp+335h]
  char v174; // [rsp+3B6h] [rbp+336h]
  char v175; // [rsp+3B7h] [rbp+337h]
  __int64 v176; // [rsp+3B8h] [rbp+338h]

  v176 = -2;
  sub_14088C320((__int64)v157);
  v5 = *(_QWORD *)v157;
  *(_OWORD *)v146 = *(_OWORD *)&v157[8];
  *(_OWORD *)&v146[16] = *(_OWORD *)&v157[24];
  *(_OWORD *)&v146[32] = *(_OWORD *)&v157[40];
  if ( *(_QWORD *)v157 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v157[88];
    v6 = *(_OWORD *)&v157[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v157[72];
    *(_OWORD *)(a1 + 56) = v6;
    si128 = _mm_load_si128((const __m128i *)v146);
    v8 = *(_OWORD *)&v146[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v146[32];
    *(_OWORD *)(a1 + 24) = v8;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  v10 = _mm_load_si128((const __m128i *)v146);
  v131[1] = *(_OWORD *)&v146[16];
  v131[0] = v10;
  v131[2] = *(_OWORD *)&v146[32];
  v11 = _mm_load_si128((const __m128i *)v10.m128i_i64[0]);
  v12 = *(_QWORD *)&v146[24];
  v173 = 1;
  v13 = sub_1416AE140(v4);
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v18 = *(_QWORD *)v13;
    v19 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v173 = 1;
    v125 = v13;
    v18 = sub_1416C5230(v15, v14, v16, v17);
    v13 = v125;
    *(_QWORD *)v125 = v18;
    *(_QWORD *)(v125 + 8) = v19;
    *(_BYTE *)(v125 + 16) = 1;
  }
  *(_QWORD *)v13 = v18 + 1;
  v20 = _mm_loadu_si128((const __m128i *)&xmmword_141A68E30);
  *(__m128i *)&v157[16] = v20;
  v21 = _mm_loadu_si128((const __m128i *)&off_141A68E20);
  *(__m128i *)v157 = v21;
  *(_QWORD *)&v157[32] = v18;
  *(_QWORD *)&v157[40] = v19;
  if ( v12 )
  {
    LOBYTE(v17) = 1;
    sub_141962910(v157, v12, &v157[32], v17);
  }
  v140.m128i_i64[0] = (__int64)v157;
  *(_QWORD *)v161 = &v140;
  *(_QWORD *)v146 = v10.m128i_i64[0];
  *(_QWORD *)&v146[8] = v10.m128i_i64[0] + 16;
  *(_QWORD *)&v146[16] = v10.m128i_i64[0] + v10.m128i_i64[1] + 1;
  *(_WORD *)&v146[24] = ~(unsigned __int16)_mm_movemask_epi8(v11);
  sub_140023490(v146, v12, v161);
  v132 = _mm_load_si128((const __m128i *)v157);
  v133 = *(_OWORD *)&v157[16];
  v134 = *(_OWORD *)&v157[32];
  v172 = 1;
  sub_140A80310((__int64)v157, a2, (const __m128i **)v131);
  _RAX = *(_QWORD *)v157;
  *(_OWORD *)v146 = *(_OWORD *)&v157[8];
  *(_OWORD *)&v146[16] = *(_OWORD *)&v157[24];
  *(_OWORD *)&v146[32] = *(_OWORD *)&v157[40];
  if ( *(_QWORD *)v157 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v157[88];
    v23 = *(_OWORD *)&v157[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v157[72];
    *(_OWORD *)(a1 + 56) = v23;
    v24 = _mm_load_si128((const __m128i *)v146);
    v25 = *(_OWORD *)&v146[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v146[32];
    *(_OWORD *)(a1 + 24) = v25;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = _RAX;
    goto LABEL_13;
  }
  v137 = _mm_load_si128((const __m128i *)v146);
  v138 = *(_OWORD *)&v146[16];
  v139 = *(_OWORD *)&v146[32];
  v175 = 1;
  sub_1407B9590(v161, a2);
  v26 = *(_QWORD *)v161;
  v164 = *(__m256i *)&v161[8];
  v165 = *(_OWORD *)&v161[40];
  if ( *(_QWORD *)v161 != -1 )
  {
    *(_QWORD *)(a1 + 88) = v163;
    v27 = *(_OWORD *)&v161[56];
    *(_OWORD *)(a1 + 72) = v162;
    *(_OWORD *)(a1 + 56) = v27;
    v28 = _mm_load_si128((const __m128i *)&v164);
    v29 = *(_OWORD *)&v164.m256i_u64[2];
    *(_OWORD *)(a1 + 40) = v165;
    *(_OWORD *)(a1 + 24) = v29;
    *(__m128i *)(a1 + 8) = v28;
    *(_QWORD *)a1 = v26;
LABEL_12:
    v172 = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_14018FA70(&v137) >> 32;
LABEL_13:
    v30 = v132.m128i_i64[1];
    if ( v132.m128i_i64[1] )
    {
      v31 = *((_QWORD *)&v133 + 1);
      if ( *((_QWORD *)&v133 + 1) )
      {
        v32 = v132.m128i_i64[0];
        v33 = (const __m128i *)(v132.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v132.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v35 = _mm_load_si128(v33);
              v32 -= 384;
              ++v33;
              _R12D = _mm_movemask_epi8(v35) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v36 = -3 * _RAX;
          v37 = *(_QWORD *)(v32 + 8 * v36 - 24);
          if ( v37 )
            sub_140001660(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1);
          --v31;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v31 );
      }
      v38 = (24 * v30 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v39 = v38 + v30 + 17;
      if ( v39 )
        sub_140001660(v132.m128i_i64[0] - v38, v39, 16);
    }
    return a1;
  }
  v130[0] = _mm_load_si128((const __m128i *)&v164);
  v130[1] = *(_OWORD *)&v164.m256i_u64[2];
  v130[2] = v165;
  sub_1407BB100(v157, (const __m128i **)v130, a2);
  v140 = *(__m128i *)&v157[8];
  v141 = *(__m128i *)&v157[24];
  v142 = *(_OWORD *)&v157[40];
  v143 = *(_OWORD *)&v157[56];
  v144 = *(_OWORD *)&v157[72];
  v145 = *(__m128i *)&v157[88];
  if ( !*(_QWORD *)v157 )
  {
    *(__m128i *)(a1 + 80) = v145;
    *(_OWORD *)(a1 + 64) = v144;
    v46 = _mm_load_si128(&v140);
    v47 = v141;
    v48 = v142;
    *(_OWORD *)(a1 + 48) = v143;
    *(_OWORD *)(a1 + 32) = v48;
    *(__m128i *)(a1 + 16) = v47;
    *(__m128i *)a1 = v46;
    v175 = 1;
    sub_14018F700(&v164);
    goto LABEL_12;
  }
  v152 = v160;
  v151 = v159;
  v150 = v158;
  *(__m128i *)&v146[8] = v140;
  *(__m128i *)&v146[24] = v141;
  *(_OWORD *)&v146[40] = v142;
  v147 = v143;
  v148 = v144;
  v149 = _mm_load_si128(&v145);
  *(_QWORD *)v146 = *(_QWORD *)v157;
  v174 = 1;
  sub_14018F700(&v164);
  v174 = 1;
  sub_140A7E160((__m128i *)v157, (const __m128i **)&v137, (__int64)v146, (__int64)&v146[48]);
  v40 = *(_QWORD *)&v157[8];
  v41 = *(_QWORD *)&v157[16];
  v136 = *(_QWORD *)&v157[16];
  if ( *(_QWORD *)&v157[16] )
  {
    v42 = (_QWORD *)(*(_QWORD *)&v157[8] + 8LL);
    v43 = *(_QWORD *)&v157[16];
    do
    {
      v44 = *(v42 - 1);
      if ( v44 )
        sub_140001660(*v42, v44, 1);
      v42 += 3;
      --v43;
    }
    while ( v43 );
  }
  if ( *(_QWORD *)v157 )
    sub_140001660(v40, 24LL * *(_QWORD *)v157, 8);
  if ( v41 )
  {
    *(_QWORD *)v157 = &v136;
    *(_QWORD *)&v157[8] = sub_1416EBAE0;
    v174 = 1;
    sub_1416DAFA0(&v128, &unk_141A6B9A0, v157);
    v45 = v129;
    *(_QWORD *)(a1 + 24) = v129;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v128);
    *(_QWORD *)a1 = 10;
    LOBYTE(v45) = 1;
    LODWORD(v169) = v45;
    goto LABEL_87;
  }
  v174 = 1;
  *(_QWORD *)&_RAX = sub_140AA0D00(&off_141A68E08);
  v141 = v20;
  v140 = v21;
  v142 = _RAX;
  v51 = v132.m128i_i64[0];
  v52 = *((_QWORD *)&v133 + 1);
  v53 = _mm_load_si128((const __m128i *)v132.m128i_i64[0]);
  if ( v132.m128i_i64[1] )
  {
    v54 = (24 * v132.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    _RCX = v132.m128i_i64[1] + v54 + 17;
    *((_QWORD *)&_RAX + 1) = v132.m128i_i64[0] - v54;
    v55 = 16;
  }
  else
  {
    v55 = 0;
  }
  v56 = (const __m128i *)(v132.m128i_i64[0] + 16);
  *(_QWORD *)v161 = v55;
  *(_QWORD *)&v161[8] = _RCX;
  *(_QWORD *)&v161[16] = *((_QWORD *)&_RAX + 1);
  *(_QWORD *)&v161[24] = v132.m128i_i64[0];
  *(_QWORD *)&v161[32] = v132.m128i_i64[0] + 16;
  *(_QWORD *)&v161[40] = v132.m128i_i64[0] + v132.m128i_i64[1] + 1;
  DWORD2(_RAX) = ~_mm_movemask_epi8(v53);
  *(_WORD *)&v161[48] = WORD4(_RAX);
  *(_QWORD *)&v161[56] = *((_QWORD *)&v133 + 1);
  if ( *((_QWORD *)&v133 + 1) )
  {
    while ( 1 )
    {
      for ( ; !DWORD2(_RAX); DWORD2(_RAX) = _mm_movemask_epi8(v57) ^ 0xFFFF )
      {
        v57 = _mm_load_si128(v56);
        v51 -= 384;
        ++v56;
      }
      __asm { tzcnt   ecx, edx }
      *((_QWORD *)&_RAX + 1) = DWORD2(_RAX) & (unsigned int)(DWORD2(_RAX) - 1);
      *(_QWORD *)&_RAX = -3 * _RCX;
      v58 = v52 - 1;
      _RCX = *(_QWORD *)(v51 - 24 * _RCX - 24);
      *(_OWORD *)v157 = *(_OWORD *)(v51 + 8 * _RAX - 16);
      if ( _RCX == -1 )
        goto LABEL_76;
      v156 = *((_QWORD *)&_RAX + 1);
      v155 = v56;
      v154 = v58;
      v153 = v51;
      v166 = _RCX;
      v164.m256i_i64[0] = _RCX;
      *(__m128i *)&v164.m256i_u64[1] = _mm_load_si128((const __m128i *)v157);
      if ( !*((_QWORD *)&v138 + 1) )
        goto LABEL_73;
      v171 = 1;
      v59 = sub_1406CECD0(&v139, &v164);
      v60 = v137;
      v61 = _mm_cvtsi32_si128(v59 >> 57);
      v62 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v61, v61), 0), 68);
      HIDWORD(_RAX) = v164.m256i_i32[3];
      v64 = v164.m256i_i64[2];
      v167 = v164.m256i_i64[1];
      for ( _RCX = 0; ; _RCX += 16 )
      {
        v65 = v60.m128i_i64[1] & v59;
        v66 = _mm_loadu_si128((const __m128i *)(v60.m128i_i64[0] + v65));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v66, v62));
        if ( _EBX )
          break;
LABEL_51:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v66, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_73;
        v59 = _RCX + v65 + 16;
      }
      v168 = _RCX;
      while ( 1 )
      {
        __asm { tzcnt   eax, ebx }
        if ( v64 == *(_QWORD *)(v60.m128i_i64[0] - 416 * (v60.m128i_i64[1] & (v65 + _RAX)) - 400) )
        {
          v68 = v60.m128i_i64[0] - 416 * (v60.m128i_i64[1] & (v65 + _RAX));
          v69 = *(_QWORD *)(v68 - 408);
          v169 = v64;
          v70 = sub_141923B40(v167, v69, v64);
          v64 = v169;
          if ( !v70 )
            break;
        }
        _RAX = (unsigned int)(_EBX - 1);
        LOWORD(_RAX) = _EBX & (_EBX - 1);
        _EBX = _RAX;
        _RCX = v168;
        if ( !(_WORD)_RAX )
          goto LABEL_51;
      }
      if ( (_QWORD)v151 )
        break;
LABEL_62:
      if ( (_QWORD)v148 )
      {
        v171 = 1;
        v84 = sub_1406CECD0((char *)&v148 + 8, &v164);
        _RCX = v84 >> 57;
        v85 = *(_QWORD *)&v146[48];
        v86 = v147;
        v87 = _mm_cvtsi32_si128(v84 >> 57);
        v88 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v87, v87), 0), 68);
        for ( i = 0; ; i += 16 )
        {
          v90 = v86 & v84;
          v91 = _mm_loadu_si128((const __m128i *)(v85 + v90));
          _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v91, v88));
          v64 = v169;
          if ( _EBX )
            break;
LABEL_69:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v91, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_71;
          v84 = i + v90 + 16;
        }
        v168 = i;
        while ( 1 )
        {
          __asm { tzcnt   ecx, ebx }
          v93 = v90;
          _RCX = -(__int64)(v86 & (v90 + _RCX));
          if ( v64 == *(_QWORD *)(v85 + 24 * _RCX - 8) )
          {
            v94 = sub_141923B40(v167, *(_QWORD *)(v85 + 24 * _RCX - 16), v169);
            v64 = v169;
            if ( !v94 )
              break;
          }
          v95 = _EBX - 1;
          LOWORD(v95) = _EBX & (_EBX - 1);
          v83 = (_WORD)v95 == 0;
          _EBX = v95;
          v90 = v93;
          i = v168;
          if ( v83 )
            goto LABEL_69;
        }
LABEL_73:
        if ( v166 )
          sub_140001660(v164.m256i_i64[1], v166, 1);
        goto LABEL_40;
      }
LABEL_71:
      v171 = 1;
      sub_140880350((__int64)v157, v167, v64, (_QWORD *)(v68 - 392), (__int64 *)v146);
      v96 = *(_QWORD *)v157;
      if ( *(_QWORD *)v157 != -1 )
      {
        *(_QWORD *)&v161[56] = v154;
        *(_WORD *)&v161[48] = v156;
        *(_QWORD *)&v161[24] = v153;
        *(_QWORD *)&v161[32] = v155;
        v124 = v157[8];
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v157[88];
        *(_OWORD *)(a1 + 73) = *(_OWORD *)&v157[73];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v157[57];
        *(_OWORD *)(a1 + 41) = *(_OWORD *)&v157[41];
        *(_OWORD *)(a1 + 25) = *(_OWORD *)&v157[25];
        *(_OWORD *)(a1 + 9) = *(_OWORD *)&v157[9];
        *(_QWORD *)a1 = v96;
        *(_BYTE *)(a1 + 8) = v124;
        if ( v166 )
          sub_140001660(v167, v166, 1);
        sub_14018A340(v161);
        goto LABEL_86;
      }
      if ( v157[8] )
        goto LABEL_73;
      *(_QWORD *)&v157[16] = v164.m256i_i64[2];
      *(__m128i *)v157 = _mm_loadu_si128((const __m128i *)&v164);
      v171 = 0;
      sub_140871180((__int64)&v140, v157);
LABEL_40:
      v52 = v154;
      v51 = v153;
      v56 = v155;
      DWORD2(_RAX) = v156;
      if ( !v154 )
        goto LABEL_75;
    }
    v171 = 1;
    v71 = sub_1406CECD0((char *)&v151 + 8, &v164);
    _RCX = v71 >> 57;
    v72 = v149.m128i_i64[1];
    v73 = v150;
    v74 = _mm_cvtsi32_si128(v71 >> 57);
    v75 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v74, v74), 0), 68);
    for ( j = 0; ; j += 16 )
    {
      v77 = v73 & v71;
      v78 = _mm_loadu_si128((const __m128i *)(v72 + v77));
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v78, v75));
      v64 = v169;
      if ( _EBX )
        break;
LABEL_60:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v78, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_62;
      v71 = j + v77 + 16;
    }
    v168 = j;
    while ( 1 )
    {
      __asm { tzcnt   ecx, ebx }
      v80 = v77;
      _RCX = -(__int64)(v73 & (v77 + _RCX));
      if ( v64 == *(_QWORD *)(v72 + 24 * _RCX - 8) )
      {
        v81 = sub_141923B40(v167, *(_QWORD *)(v72 + 24 * _RCX - 16), v169);
        v64 = v169;
        if ( !v81 )
          goto LABEL_73;
      }
      v82 = _EBX - 1;
      LOWORD(v82) = _EBX & (_EBX - 1);
      v83 = (_WORD)v82 == 0;
      _EBX = v82;
      v77 = v80;
      j = v168;
      if ( v83 )
        goto LABEL_60;
    }
  }
LABEL_75:
  v58 = 0;
LABEL_76:
  *(_QWORD *)&v161[56] = v58;
  *(_WORD *)&v161[48] = WORD4(_RAX);
  *(_QWORD *)&v161[24] = v51;
  *(_QWORD *)&v161[32] = v56;
  sub_14018A340(v161);
  if ( v141.m128i_i64[1] )
  {
    sub_140A7A4B0(&v164, &v137, &v140);
    v97 = v164.m256i_i64[2];
    if ( v164.m256i_i64[2] < (unsigned __int64)v141.m128i_i64[1] && *(_QWORD *)off_14223FF10 >= 2u )
    {
      v135 = v164.m256i_i64[2];
      *(_QWORD *)&v130[0] = v141.m128i_i64[1];
      *(_QWORD *)v161 = &v135;
      *(_QWORD *)&v161[8] = sub_1416EBAE0;
      *(_QWORD *)&v161[16] = v130;
      *(_QWORD *)&v161[24] = sub_1416EBAE0;
      *(_QWORD *)v157 = aCodexmateLibCo_41;
      *(_QWORD *)&v157[8] = 37;
      *(_QWORD *)&v157[16] = aCodexmateLibCo_41;
      *(_QWORD *)&v157[24] = 37;
      *(_QWORD *)&v157[32] = &off_141A6B930;
      sub_140AF72B0(&unk_141A6B8D8, v161, 2, v157);
    }
    if ( v97 )
    {
      sub_140876C50((__int64)v157, a2, v164.m256i_i64[1], v97);
      v98 = *(_QWORD *)v157;
      *(_OWORD *)v161 = *(_OWORD *)&v157[8];
      *(_OWORD *)&v161[16] = *(_OWORD *)&v157[24];
      *(_OWORD *)&v161[32] = *(_OWORD *)&v157[40];
      *(_OWORD *)&v161[48] = *(_OWORD *)&v157[56];
      *(_QWORD *)&v161[64] = *(_QWORD *)&v157[72];
      if ( *(_QWORD *)v157 == -1 )
      {
        v126[2] = *(_OWORD *)&v161[32];
        v126[0] = _mm_load_si128((const __m128i *)v161);
        v126[1] = *(_OWORD *)&v161[16];
        v126[3] = *(_OWORD *)&v161[48];
        v127 = *(_QWORD *)&v161[64];
        if ( *(_QWORD *)&v161[40] && *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v130[0] = *(_QWORD *)&v161[40];
          *(_QWORD *)v161 = v130;
          *(_QWORD *)&v161[8] = sub_1416EBAE0;
          *(_QWORD *)v157 = aCodexmateLibCo_41;
          *(_QWORD *)&v157[8] = 37;
          *(_QWORD *)&v157[16] = aCodexmateLibCo_41;
          *(_QWORD *)&v157[24] = 37;
          *(_QWORD *)&v157[32] = &off_141A6B988;
          v170 = 1;
          sub_140AF72B0(&unk_141A6B948, v161, 2, v157);
        }
        v170 = 0;
        sub_140A79F60(v157, v126, 0);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)&v157[32];
        v123 = _mm_loadu_si128((const __m128i *)v157);
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v157[16];
        *(__m128i *)(a1 + 8) = v123;
        *(_QWORD *)a1 = -1;
        sub_1400290B0(&v164);
        v174 = 0;
        sub_140190060(&v140);
        v175 = 0;
        sub_140779DE0(v146);
        v172 = 0;
        sub_14018FA70(&v137);
        return a1;
      }
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v157[80];
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v161[64];
      v99 = _mm_load_si128((const __m128i *)v161);
      v100 = *(_OWORD *)&v161[16];
      v101 = *(_OWORD *)&v161[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v161[48];
      *(_OWORD *)(a1 + 40) = v101;
      *(_OWORD *)(a1 + 24) = v100;
      *(__m128i *)(a1 + 8) = v99;
      *(_QWORD *)a1 = v98;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 8;
      *(_OWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)a1 = -1;
    }
    sub_1400290B0(&v164);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)a1 = -1;
  }
LABEL_86:
  v174 = 0;
  sub_140190060(&v140);
  LODWORD(v169) = 0;
LABEL_87:
  HIDWORD(_RAX) = (unsigned __int64)sub_14018F950(v146) >> 32;
  v103 = v147;
  if ( (_QWORD)v147 )
  {
    v104 = v148;
    if ( (_QWORD)v148 )
    {
      v105 = *(_QWORD *)&v146[48];
      v106 = (const __m128i *)(*(_QWORD *)&v146[48] + 16LL);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v146[48]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v108 = _mm_load_si128(v106);
            v105 -= 384;
            ++v106;
            _R12D = _mm_movemask_epi8(v108) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v109 = -3LL * _RAX;
        v110 = *(_QWORD *)(v105 + 8 * v109 - 24);
        if ( v110 )
          sub_140001660(*(_QWORD *)(v105 + 8 * v109 - 16), v110, 1);
        --v104;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v104 );
    }
    _RAX = (24 * v103 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v111 = _RAX + v103 + 17;
    if ( v111 )
      sub_140001660(*(_QWORD *)&v146[48] - _RAX, v111, 16);
  }
  v112 = v150;
  if ( (_QWORD)v150 )
  {
    v113 = v151;
    if ( (_QWORD)v151 )
    {
      v114 = v149.m128i_i64[1];
      v115 = (const __m128i *)(v149.m128i_i64[1] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v149.m128i_i64[1]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v117 = _mm_load_si128(v115);
            v114 -= 384;
            ++v115;
            _R12D = _mm_movemask_epi8(v117) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v118 = -3LL * _RAX;
        v119 = *(_QWORD *)(v114 + 8 * v118 - 24);
        if ( v119 )
          sub_140001660(*(_QWORD *)(v114 + 8 * v118 - 16), v119, 1);
        --v113;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v113 );
    }
    v120 = (24 * v112 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v121 = v120 + v112 + 17;
    if ( v121 )
      sub_140001660(v149.m128i_i64[1] - v120, v121, 16);
  }
  v122 = v169;
  v172 = v169;
  HIDWORD(_RAX) = (unsigned __int64)sub_14018FA70(&v137) >> 32;
  if ( v122 )
    goto LABEL_13;
  return a1;
}
