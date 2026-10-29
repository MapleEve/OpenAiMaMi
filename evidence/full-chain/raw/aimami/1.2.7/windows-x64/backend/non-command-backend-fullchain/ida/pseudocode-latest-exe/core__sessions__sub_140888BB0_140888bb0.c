// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x140888bb0 | successor of pre-update 0x1402db340 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140888BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  __int64 v29; // rdi
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 i; // rdx
  unsigned __int64 v33; // rax
  __m128i v34; // xmm2
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  const __m128i *v46; // rbx
  __m128i si128; // xmm0
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 j; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rbx
  __m128i v61; // rax
  char v62; // r12
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r9
  __m128i v76; // xmm0
  __m128i v77; // xmm1
  __m128i v78; // xmm2
  int v79; // eax
  _OWORD *v80; // rcx
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rsi
  __m128i v86; // xmm0
  __m128i v87; // xmm2
  unsigned __int64 v88; // rax
  __m128i v90; // kr10_16
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  unsigned __int64 v93; // rax
  __m128i v94; // xmm2
  __int64 v96; // r9
  __int64 v97; // rbx
  const __m128i *v98; // r12
  __m128i v100; // xmm0
  __int64 v101; // rax
  __int64 v102; // rdx
  __m128i v103; // rax
  __m128i *v104; // r12
  const __m128i *v105; // r15
  unsigned __int64 v106; // rax
  __m128i v108; // xmm0
  __m128i v109; // xmm0
  unsigned __int64 v110; // rax
  __m128i v111; // xmm2
  __int64 v113; // r8
  unsigned __int8 v114; // al
  void *v115; // rdx
  __int64 v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // r14
  __int64 v121; // rdx
  __int64 v122; // r8
  __m128i v123; // xmm7
  __m128i *v124; // rdx
  const __m128i *v125; // r12
  __m128i *v126; // r15
  __int64 v127; // rdx
  __int64 v128; // r14
  __m128i *v129; // rax
  __m128i *v130; // rax
  __m128i *v131; // rax
  __int64 *v132; // rcx
  __int64 v133; // r9
  unsigned __int64 v134; // r14
  __int64 v135; // rdx
  __int64 v136; // rcx
  __m128i v137; // xmm0
  __m128i v138; // xmm8
  __int64 v139; // r8
  __int64 v140; // rbx
  __int64 v141; // rbx
  __m128i v142; // xmm9
  __int64 v144; // rax
  __int64 v145; // r14
  int v146; // eax
  __m128i *v147; // r14
  __int64 v148; // rbx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // r14
  __m128i v153; // xmm0
  __m128i v154; // xmm1
  __m128i v155; // [rsp+20h] [rbp-60h] BYREF
  __m128i v156; // [rsp+30h] [rbp-50h]
  __m128i v157; // [rsp+40h] [rbp-40h]
  __m128i v158; // [rsp+50h] [rbp-30h]
  __int128 v159; // [rsp+60h] [rbp-20h]
  __int128 v160; // [rsp+70h] [rbp-10h]
  __int128 v161; // [rsp+80h] [rbp+0h]
  __m128i v162; // [rsp+90h] [rbp+10h] BYREF
  __int64 v163; // [rsp+A0h] [rbp+20h]
  _OWORD v164[3]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v165; // [rsp+E0h] [rbp+60h]
  __int64 v166; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v167[9]; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v168; // [rsp+140h] [rbp+C0h]
  __int64 v169; // [rsp+148h] [rbp+C8h]
  _OWORD v170[2]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v171; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v172; // [rsp+180h] [rbp+100h] BYREF
  __int128 v173; // [rsp+190h] [rbp+110h] BYREF
  __m128i v174; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v175; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v176; // [rsp+1C0h] [rbp+140h]
  __m128i v177; // [rsp+1D0h] [rbp+150h] BYREF
  unsigned __int64 v178; // [rsp+1E8h] [rbp+168h]
  unsigned __int128 v179; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v180; // [rsp+200h] [rbp+180h] BYREF
  __m128i v181; // [rsp+210h] [rbp+190h] BYREF
  __m128i v182; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v183; // [rsp+230h] [rbp+1B0h]
  __int128 v184; // [rsp+240h] [rbp+1C0h]
  __int128 v185; // [rsp+250h] [rbp+1D0h]
  __int64 v186; // [rsp+268h] [rbp+1E8h]
  __int64 v187; // [rsp+270h] [rbp+1F0h]
  __m128i *v188; // [rsp+278h] [rbp+1F8h]
  __int64 v189; // [rsp+280h] [rbp+200h]
  __int64 *v190; // [rsp+288h] [rbp+208h] BYREF
  __m128i v191; // [rsp+290h] [rbp+210h]
  __int64 v192; // [rsp+2A0h] [rbp+220h]
  __int64 v193; // [rsp+2A8h] [rbp+228h]
  __int64 v194; // [rsp+2B0h] [rbp+230h]
  __m128i v195; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v196; // [rsp+2C8h] [rbp+248h]
  __int64 v197; // [rsp+2D0h] [rbp+250h]
  __int64 v198; // [rsp+2D8h] [rbp+258h]
  __int64 v199; // [rsp+2E0h] [rbp+260h]
  __int64 v200; // [rsp+2E8h] [rbp+268h]
  __int64 v201; // [rsp+2F0h] [rbp+270h]
  __int64 v202; // [rsp+2F8h] [rbp+278h]
  __int64 v203; // [rsp+300h] [rbp+280h]
  __int64 v204; // [rsp+308h] [rbp+288h]
  char v205; // [rsp+317h] [rbp+297h]
  __int64 v206; // [rsp+318h] [rbp+298h]

  v206 = -2;
  sub_1416C49D0(&v179, a2, a3);
  if ( (_DWORD)v179 == 2 )
  {
    v7 = BYTE8(v179) & 3;
    if ( (unsigned int)(v7 - 2) >= 2 && (BYTE8(v179) & 3) != 0 )
    {
      --*((_QWORD *)&v179 + 1);
      LOBYTE(v179) = 3;
      sub_1416EBAD0((char *)&v179 + 8);
    }
    goto LABEL_12;
  }
  LOBYTE(v6) = 1;
  sub_140876430(&v179, a2, a3, v6);
  if ( BYTE8(v185) == 0xFF )
  {
    sub_14084C890(&v179);
LABEL_12:
    result = sub_1416AE140(v7);
    if ( *(_BYTE *)(result + 16) == 1 )
    {
      v22 = *(_QWORD *)result;
      v23 = *(_QWORD *)(result + 8);
    }
    else
    {
      v116 = result;
      v22 = sub_1416C5230(v19, v18, v20, v21);
      result = v116;
      *(_QWORD *)v116 = v22;
      *(_QWORD *)(v116 + 8) = v23;
      *(_BYTE *)(v116 + 16) = 1;
    }
    *(_QWORD *)result = v22 + 1;
    *(_OWORD *)(a1 + 16) = xmmword_141A51860;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 32) = v22;
    *(_QWORD *)(a1 + 40) = v23;
    return result;
  }
  v161 = v185;
  v160 = v184;
  v159 = v183;
  v158 = _mm_loadu_si128(&v182);
  v157 = _mm_loadu_si128(&v181);
  v156 = _mm_loadu_si128(&v180);
  v155 = _mm_loadu_si128((const __m128i *)&v179);
  sub_14087FE50((__int64)&v179, (__int64)&v155, (__int64)aProjects, 8);
  if ( (_DWORD)v179 != -1 )
  {
    v9 = sub_1416AE140(v8);
    v14 = v9;
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v15 = *(_QWORD *)v9;
      v16 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v15 = sub_1416C5230(v11, v10, v12, v13);
      *(_QWORD *)v14 = v15;
      *(_QWORD *)(v14 + 8) = v16;
      *(_BYTE *)(v14 + 16) = 1;
    }
    *(_QWORD *)v14 = v15 + 1;
    *(_OWORD *)(a1 + 16) = xmmword_141A51860;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = v16;
    sub_14084C890(&v179);
    return sub_14084B510(&v155);
  }
  v24 = _mm_loadu_si128((const __m128i *)((char *)&v179 + 8));
  v25 = _mm_loadu_si128((const __m128i *)&v180.m128i_u64[1]);
  v171 = _mm_loadu_si128((const __m128i *)&v181.m128i_u64[1]);
  v170[1] = v25;
  v170[0] = v24;
  v26 = v25.m128i_i64[1];
  if ( !v25.m128i_i64[1] )
  {
LABEL_23:
    v37 = sub_1416AE140(v8);
    v42 = v37;
    if ( *(_BYTE *)(v37 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v37;
      v44 = *(_QWORD *)(v42 + 8);
    }
    else
    {
      _RAX = sub_1416C5230(v39, v38, v40, v41);
      *(_QWORD *)v42 = _RAX;
      *(_QWORD *)(v42 + 8) = v44;
      *(_BYTE *)(v42 + 16) = 1;
    }
    *(_QWORD *)v42 = _RAX + 1;
    *(_OWORD *)(a1 + 16) = xmmword_141A51860;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 32) = _RAX;
    *(_QWORD *)(a1 + 40) = v44;
    v29 = *((_QWORD *)&v170[0] + 1);
LABEL_26:
    if ( v29 )
    {
      if ( v26 )
      {
        v45 = *(_QWORD *)&v170[0];
        v46 = (const __m128i *)(*(_QWORD *)&v170[0] + 16LL);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v170[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              si128 = _mm_load_si128(v46);
              v45 -= 384;
              ++v46;
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v49 = -3 * _RAX;
          v50 = *(_QWORD *)(v45 + 8 * v49 - 24);
          if ( v50 )
            sub_140001660(*(_QWORD *)(v45 + 8 * v49 - 16), v50, 1);
          --v26;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v26 );
      }
      v51 = (24 * v29 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v52 = v51 + v29 + 17;
      if ( v52 )
        sub_140001660(*(_QWORD *)&v170[0] - v51, v52, 16);
    }
    return sub_14084B510(&v155);
  }
  v27 = sub_1406D0E00(&v171, aId_5, 2);
  v29 = *((_QWORD *)&v170[0] + 1);
  v8 = *(_QWORD *)&v170[0];
  v30 = _mm_cvtsi32_si128(v27 >> 57);
  v31 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v30, v30), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v33 = *((_QWORD *)&v170[0] + 1) & v27;
    v34 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)&v170[0] + v33));
    _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v34, v31));
    if ( _R8D )
      break;
LABEL_21:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v34, (__m128i)-1LL)) )
      goto LABEL_23;
    v27 = i + v33 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r9d, r8d }
    v36 = -3LL * (*((_QWORD *)&v170[0] + 1) & (v33 + _R9));
    if ( *(_QWORD *)(*(_QWORD *)&v170[0] + 8 * v36 - 8) == 2
      && **(_WORD **)(*(_QWORD *)&v170[0] + 8 * v36 - 16) == 25705 )
    {
      break;
    }
    _R9 = (unsigned int)(_R8D - 1);
    LOWORD(_R9) = _R8D & (_R8D - 1);
    _R8D = _R9;
    if ( !(_WORD)_R9 )
      goto LABEL_21;
  }
  sub_14087FE50((__int64)&v179, (__int64)&v155, (__int64)aProjectRoots, 13);
  if ( (_DWORD)v179 == -1 )
  {
    v86 = _mm_loadu_si128((const __m128i *)((char *)&v179 + 8));
    v87 = _mm_loadu_si128((const __m128i *)&v181.m128i_u64[1]);
    v176 = _mm_loadu_si128((const __m128i *)&v180.m128i_u64[1]);
    v177 = v87;
    v175 = v86;
    v63 = v176.m128i_i64[1];
    if ( v176.m128i_i64[1] )
    {
      v88 = sub_1406D0E00(&v177, aProjectId, 10);
      v90 = v175;
      v91 = _mm_cvtsi32_si128(v88 >> 57);
      v92 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v91, v91), 0), 68);
      j = 0;
      v53 = 0x5F7463656A6F7270LL;
      while ( 1 )
      {
        v93 = v175.m128i_i64[1] & v88;
        v94 = _mm_loadu_si128((const __m128i *)(v175.m128i_i64[0] + v93));
        _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v94, v92));
        if ( _R8D )
          break;
LABEL_63:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v94, (__m128i)-1LL)) )
        {
LABEL_79:
          v62 = 0;
          goto LABEL_41;
        }
        v88 = j + v93 + 16;
        j += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r9d, r8d }
        v96 = -3LL * (v175.m128i_i64[1] & (v93 + _R9));
        if ( *(_QWORD *)(v175.m128i_i64[0] + 8 * v96 - 8) == 10
          && !(**(_QWORD **)(v175.m128i_i64[0] + 8 * v96 - 16) ^ 0x5F7463656A6F7270LL
             | *(unsigned __int16 *)(*(_QWORD *)(v175.m128i_i64[0] + 8 * v96 - 16) + 8LL) ^ 0x6469LL) )
        {
          break;
        }
        _R9 = (unsigned int)(_R8D - 1);
        LOWORD(_R9) = _R8D & (_R8D - 1);
        _R8D = _R9;
        if ( !(_WORD)_R9 )
          goto LABEL_63;
      }
      v106 = sub_1406D0E00(&v177, aPath_7, 4);
      v108 = _mm_cvtsi32_si128(v106 >> 57);
      v109 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v108, v108), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v110 = v90.m128i_i64[1] & v106;
        v111 = _mm_loadu_si128((const __m128i *)(v90.m128i_i64[0] + v110));
        _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v111, v109));
        if ( _EDX )
          break;
LABEL_77:
        v53 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v111, (__m128i)-1LL));
        if ( (_DWORD)v53 )
          goto LABEL_79;
        v106 = j + v110 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r8d, edx }
        v113 = -3LL * (v90.m128i_i64[1] & (v110 + _R8));
        if ( *(_QWORD *)(v90.m128i_i64[0] + 8 * v113 - 8) == 4
          && **(_DWORD **)(v90.m128i_i64[0] + 8 * v113 - 16) == 1752457584 )
        {
          break;
        }
        _R8 = (unsigned int)(_EDX - 1);
        LOWORD(_R8) = _EDX & (_EDX - 1);
        _EDX = _R8;
        if ( !(_WORD)_R8 )
          goto LABEL_77;
      }
      v114 = sub_1408458E0(&v175, aPosition_2);
      v115 = &unk_141A537F8;
      if ( v114 )
        v115 = &unk_141A537FF;
      v166 = (__int64)v115;
      v167[0] = 3LL * v114 + 7;
      v190 = &v166;
      v191.m128i_i64[0] = (__int64)sub_140191200;
      sub_1416DAFA0(&v179, &unk_141A53809, &v190);
      v65 = *((_QWORD *)&v179 + 1);
      v198 = v179;
      v66 = v180.m128i_i64[0];
      v62 = 0;
      goto LABEL_43;
    }
  }
  else
  {
    v55 = sub_1416AE140(j);
    v60 = v55;
    if ( *(_BYTE *)(v55 + 16) == 1 )
    {
      v61 = *(__m128i *)v55;
    }
    else
    {
      v61.m128i_i64[0] = sub_1416C5230(v57, v56, v58, v59);
      *(__m128i *)v60 = v61;
      *(_BYTE *)(v60 + 16) = 1;
    }
    *(_QWORD *)v60 = v61.m128i_i64[0] + 1;
    v176 = (__m128i)xmmword_141A51860;
    v175 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    v177 = v61;
    sub_14084C890(&v179);
  }
  v62 = 1;
  v63 = 0;
LABEL_41:
  nullsub_1(j, v53);
  v64 = sub_140001650(29, 1);
  if ( !v64 )
    sub_14196B2DB(1, 29);
  v65 = v64;
  v198 = 29;
  *(_OWORD *)(v64 + 13) = *(__int128 *)((char *)&xmmword_141A537DB + 13);
  *(__m128i *)v64 = _mm_loadu_si128((const __m128i *)&xmmword_141A537DB);
  v66 = 29;
LABEL_43:
  v186 = v65;
  sub_14086B1B0(&v179, &v155, v65, v66);
  if ( (_BYTE)v179 )
  {
    sub_14084BC90((char *)&v179 + 8);
    v68 = sub_1416AE140(v67);
    v73 = v68;
    if ( *(_BYTE *)(v68 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v68;
      v74 = *(_QWORD *)(v73 + 8);
    }
    else
    {
      _RAX = sub_1416C5230(v70, v69, v71, v72);
      *(_QWORD *)v73 = _RAX;
      *(_QWORD *)(v73 + 8) = v74;
      *(_BYTE *)(v73 + 16) = 1;
    }
    v75 = v198;
    *(_QWORD *)v73 = _RAX + 1;
    *(_OWORD *)(a1 + 16) = xmmword_141A51860;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 32) = _RAX;
    *(_QWORD *)(a1 + 40) = v74;
    goto LABEL_51;
  }
  v76 = _mm_loadu_si128((const __m128i *)((char *)&v179 + 8));
  v77 = _mm_loadu_si128((const __m128i *)&v180.m128i_u64[1]);
  v78 = _mm_loadu_si128((const __m128i *)&v181.m128i_u64[1]);
  v165 = _mm_loadu_si128((const __m128i *)&v182.m128i_u64[1]);
  v164[2] = v78;
  v164[1] = v77;
  v164[0] = v76;
  v79 = sub_1417D8600(v165.m128i_i64[1]);
  v80 = nullptr;
  if ( !v79 )
    v80 = v164;
  v81 = v79;
  v180.m128i_i64[0] = v79;
  v179 = __PAIR128__((unsigned __int64)v80, -(__int64)(v79 == 0) | 0x8000000000000013uLL);
  if ( v79 )
  {
    sub_140849BA0(&v179);
    v82 = sub_140AA0D00(&off_141A51E38);
    *(_OWORD *)(a1 + 16) = xmmword_141A51860;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_QWORD *)(a1 + 32) = v82;
    *(_QWORD *)(a1 + 40) = v83;
    HIDWORD(_RAX) = (unsigned __int64)sub_14084BE20(v164) >> 32;
    v75 = v198;
LABEL_51:
    if ( v75 )
      sub_140001660(v186, v75, 1);
    v84 = v175.m128i_i64[1];
    if ( v175.m128i_i64[1] )
    {
      if ( !v62 )
      {
        v97 = v175.m128i_i64[0];
        v98 = (const __m128i *)(v175.m128i_i64[0] + 16);
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v175.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v100 = _mm_load_si128(v98);
              v97 -= 384;
              ++v98;
              _R13D = _mm_movemask_epi8(v100) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v101 = -3 * _RAX;
          v102 = *(_QWORD *)(v97 + 8 * v101 - 24);
          if ( v102 )
            sub_140001660(*(_QWORD *)(v97 + 8 * v101 - 16), v102, 1);
          --v63;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v63 );
      }
      _RAX = (24 * v84 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v85 = _RAX + v84 + 17;
      if ( v85 )
        sub_140001660(v175.m128i_i64[0] - _RAX, v85, 16);
    }
    goto LABEL_26;
  }
  v167[7] = v164;
  v167[8] = 0;
  v205 = 1;
  v103.m128i_i64[0] = sub_140AA0D00(&off_141A51E38);
  v173 = xmmword_141A51860;
  v172 = _mm_loadu_si128((const __m128i *)&off_141A51850);
  v174 = v103;
  *(_QWORD *)&v179 = 1;
  *((_QWORD *)&v179 + 1) = v164;
  v104 = &v180;
  v180.m128i_i64[0] = v81;
  v180.m128i_i64[1] = -2;
  *((_QWORD *)&v183 + 1) = -2;
  v105 = (const __m128i *)v167;
  v188 = &v172;
  while ( 1 )
  {
    sub_1408F94D0(&v190, (char *)&v179 + 8);
    v117 = (__int64)v190;
    if ( v190 != (__int64 *)-1LL )
    {
      v119 = v191.m128i_i64[1];
      v118 = v191.m128i_i64[0];
      v120 = v192;
      v121 = v193;
      v122 = v194;
      v123 = _mm_loadu_si128(&v195);
      goto LABEL_99;
    }
    if ( !v180.m128i_i64[0] )
      break;
    sub_140658620(&v190, v104, 0, &off_141A51FF8);
    v117 = (__int64)v190;
    v201 = v191.m128i_i64[1];
    v203 = v191.m128i_i64[0];
    v120 = v192;
    if ( v190 == (__int64 *)-1LL )
    {
      v124 = v104;
      v125 = v105;
      v126 = v124;
      sub_1406583D0(&v190, v124, 1, &off_141A52010);
      v117 = (__int64)v190;
      v119 = v191.m128i_i64[1];
      if ( v190 != (__int64 *)-1LL )
      {
        v204 = v193;
        v202 = v194;
        v123 = _mm_loadu_si128(&v195);
        v127 = v203;
        if ( v203 )
        {
          v199 = v192;
          v128 = v191.m128i_i64[1];
          v203 = v191.m128i_i64[0];
          sub_140001660(v201, v127, 1);
          v119 = v128;
          v120 = v199;
          v129 = v126;
          v105 = v125;
          v104 = v129;
          v118 = v203;
        }
        else
        {
          v120 = v192;
          v131 = v126;
          v105 = v125;
          v104 = v131;
          v118 = v191.m128i_i64[0];
        }
        v121 = v204;
        v122 = v202;
        goto LABEL_99;
      }
      v123 = (__m128i)(unsigned __int64)v192;
      v117 = -1;
      v122 = v191.m128i_i64[1];
      v121 = v191.m128i_i64[0];
      v130 = v126;
      v105 = v125;
      v104 = v130;
    }
    else
    {
      v121 = v193;
      v122 = v194;
      v123 = _mm_loadu_si128(&v195);
    }
    v119 = v201;
    v118 = v203;
LABEL_99:
    v166 = v117;
    v167[0] = v118;
    v167[1] = v119;
    v167[2] = v120;
    v162 = _mm_loadu_si128(v105);
    v163 = v105[1].m128i_i64[0];
    v190 = (__int64 *)v117;
    v192 = v163;
    v191 = v162;
    v193 = v121;
    v194 = v122;
    v195 = v123;
    if ( v117 == -1 )
    {
      v132 = (__int64 *)v191.m128i_i64[0];
      if ( v191.m128i_i64[0] == -1 )
        goto LABEL_86;
      v202 = v122;
      v204 = v121;
      v191 = _mm_loadu_si128((const __m128i *)&v162.m128i_u64[1]);
      v199 = (__int64)v132;
      v190 = v132;
      v134 = sub_1406CECD0(&v174, &v190);
      v135 = v172.m128i_i64[1];
      v136 = v172.m128i_i64[0];
      v137 = _mm_cvtsi32_si128(v134 >> 57);
      v138 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v137, v137), 0), 68);
      v201 = v191.m128i_i64[1];
      v203 = v191.m128i_i64[0];
      v139 = 0;
      v140 = v134;
      while ( 1 )
      {
        v141 = v135 & v140;
        v142 = _mm_loadu_si128((const __m128i *)(v136 + v141));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v142, v138));
        if ( (_DWORD)_RAX )
          break;
LABEL_107:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v142, (__m128i)-1LL)) )
        {
          if ( !(_QWORD)v173 )
          {
            LOBYTE(v133) = 1;
            sub_1419610A0(
              v188,
              1,
              &v174,
              v133,
              v155.m128i_i64[0],
              v155.m128i_i64[1],
              v156.m128i_i64[0],
              v156.m128i_i64[1],
              v157.m128i_i64[0],
              v157.m128i_i64[1],
              v158.m128i_i64[0],
              v158.m128i_i64[1],
              v159,
              *((_QWORD *)&v159 + 1),
              v160,
              *((_QWORD *)&v160 + 1),
              v161,
              *((_QWORD *)&v161 + 1),
              v162.m128i_i64[0],
              v162.m128i_i64[1],
              v163);
          }
          LODWORD(v197) = 0;
          v178 = v134;
          v189 = v203;
          v200 = v199;
          v148 = v196;
          v149 = v204;
          v147 = (__m128i *)v201;
          goto LABEL_115;
        }
        v140 = v139 + v141 + 16;
        v139 += 16;
      }
      v200 = v134;
      v168 = v135;
      v169 = v139;
      while ( 1 )
      {
        v197 = _RAX;
        __asm { tzcnt   eax, eax }
        v144 = -48 * (v135 & (v141 + _RAX));
        if ( *(_QWORD *)(v136 + v144 - 32) == v201 )
        {
          v189 = v136 + v144;
          v145 = v136;
          v146 = sub_141923B40(*(_QWORD *)(v136 + v144 - 40), v203, v201);
          v136 = v145;
          if ( !v146 )
            break;
        }
        _RAX = (unsigned int)(v197 - 1);
        LOWORD(_RAX) = v197 & (v197 - 1);
        v134 = v200;
        v135 = v168;
        v139 = v169;
        if ( !(_WORD)_RAX )
          goto LABEL_107;
      }
      LODWORD(v197) = 1;
      v200 = -1;
      if ( v199 )
        sub_140001660(v203, v199, 1);
      v147 = v188;
      v148 = v196;
      v149 = v204;
LABEL_115:
      if ( v149 == -1 )
        goto LABEL_122;
      v148 = v123.m128i_i64[0];
      sub_1408FEA60(v202, v123.m128i_i64[0]);
      if ( !v150 )
      {
        v148 = v196;
        if ( v204 )
          sub_140001660(v202, v204, 1);
LABEL_122:
        v151 = -1;
        if ( (_BYTE)v197 )
          goto LABEL_126;
        goto LABEL_125;
      }
      v151 = v204;
      if ( (_BYTE)v197 )
      {
        if ( v204 )
        {
          v152 = v202;
          sub_140001660(v202, v204, 1);
          v187 = v152;
        }
        else
        {
          v187 = v202;
        }
        goto LABEL_126;
      }
      v187 = v202;
LABEL_125:
      v192 = v151;
      v193 = v187;
      v194 = v148;
      v190 = (__int64 *)v200;
      v191.m128i_i64[0] = v189;
      v191.m128i_i64[1] = (__int64)v147;
      sub_1401754C0(v188, v178, &v190);
LABEL_126:
      v196 = v148;
      if ( (_QWORD)v179 != 1 )
        goto LABEL_131;
    }
    else
    {
      sub_14084BC90(&v190);
LABEL_86:
      if ( !(_BYTE)v179 )
        goto LABEL_131;
    }
  }
  v166 = -2;
  if ( (_QWORD)v179 )
    sub_14084BB80((char *)&v179 + 8);
  *(_QWORD *)&v179 = 0;
LABEL_131:
  sub_14084B1B0(&v179);
  v153 = _mm_load_si128(&v172);
  v154 = _mm_load_si128((const __m128i *)&v173);
  *(__m128i *)(a1 + 32) = _mm_load_si128(&v174);
  *(__m128i *)(a1 + 16) = v154;
  *(__m128i *)a1 = v153;
  sub_14084BE20(v164);
  if ( v198 )
    sub_140001660(v186, v198, 1);
  sub_140190060(&v175);
  sub_140190060(v170);
  return sub_14084B510(&v155);
}
