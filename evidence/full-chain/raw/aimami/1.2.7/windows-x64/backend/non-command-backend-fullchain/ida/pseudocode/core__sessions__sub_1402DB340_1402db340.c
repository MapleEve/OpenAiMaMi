// win 1.2.7 | module src/core/sessions.rs | ea 0x1402db340 | name sub_1402DB340
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402DB340(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 j; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __m128i v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rdx
  __m128i v72; // xmm0
  __m128i v73; // xmm2
  int v74; // eax
  _OWORD *v75; // rcx
  __int64 v76; // r15
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // r15
  const __m128i *v82; // r12
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rsi
  __m128i v88; // xmm0
  __m128i v89; // xmm2
  unsigned __int64 v90; // rax
  __m128i v92; // kr10_16
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  unsigned __int64 v95; // rax
  __m128i v96; // xmm2
  __int64 v98; // r9
  __m128i v99; // rax
  __int64 *v100; // r12
  __m128i *v101; // r14
  unsigned __int64 v102; // rax
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  unsigned __int64 v106; // rax
  __m128i v107; // xmm2
  __int64 v109; // r8
  unsigned __int8 v110; // al
  void *v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 *v116; // rbx
  __int64 v117; // r9
  __int64 v118; // r10
  __m128i v119; // xmm8
  __int64 *v120; // rdx
  __m128i *v121; // r12
  __int64 *v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 *v127; // rax
  __int64 *v128; // rax
  __int64 v129; // rax
  __int64 v130; // r13
  unsigned __int64 v131; // rbx
  __int64 *v132; // r12
  __m128i v133; // xmm7
  __int64 v134; // rdx
  __int64 v135; // rdx
  const __m128i *v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r10
  char v141; // r11
  __int64 v142; // rcx
  __int64 v143; // r9
  __m128i v144; // xmm0
  __m128i v145; // xmm1
  _OWORD v146[7]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v147; // [rsp+90h] [rbp+10h] BYREF
  __int64 v148; // [rsp+A0h] [rbp+20h]
  _OWORD v149[3]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v150; // [rsp+E0h] [rbp+60h]
  __int64 v151; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v152[9]; // [rsp+F8h] [rbp+78h] BYREF
  __m128i v153; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v154; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v155; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int64 v156; // [rsp+170h] [rbp+F0h]
  __int64 *v157; // [rsp+178h] [rbp+F8h]
  _OWORD v158[2]; // [rsp+180h] [rbp+100h] BYREF
  __m128i v159; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v160; // [rsp+1B8h] [rbp+138h]
  __m128i v161; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v162; // [rsp+1D0h] [rbp+150h]
  __m128i v163; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v164; // [rsp+1F0h] [rbp+170h]
  __int64 v165; // [rsp+1F8h] [rbp+178h]
  __int64 v166; // [rsp+200h] [rbp+180h]
  unsigned __int128 v167; // [rsp+208h] [rbp+188h] BYREF
  __int64 v168; // [rsp+218h] [rbp+198h] BYREF
  __m128i v169; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v170; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v171; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v172; // [rsp+248h] [rbp+1C8h]
  __int128 v173; // [rsp+258h] [rbp+1D8h]
  __int128 v174; // [rsp+268h] [rbp+1E8h]
  __int64 *v175; // [rsp+280h] [rbp+200h] BYREF
  __m128i v176; // [rsp+288h] [rbp+208h]
  __int64 *v177; // [rsp+298h] [rbp+218h]
  __int64 v178; // [rsp+2A0h] [rbp+220h]
  __int64 v179; // [rsp+2A8h] [rbp+228h]
  __m128i v180; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v181; // [rsp+2C0h] [rbp+240h]
  __int64 *v182; // [rsp+2C8h] [rbp+248h]
  __m128i v183; // [rsp+2D0h] [rbp+250h]
  char v184; // [rsp+2E6h] [rbp+266h]
  char v185; // [rsp+2E7h] [rbp+267h]
  __int64 v186; // [rsp+2E8h] [rbp+268h]

  v186 = -2;
  sub_141695A00(&v167, a2, a3);
  if ( (_DWORD)v167 == 2 )
  {
    v7 = BYTE8(v167) & 3;
    if ( (unsigned int)(v7 - 2) >= 2 && (BYTE8(v167) & 3) != 0 )
    {
      --*((_QWORD *)&v167 + 1);
      LOBYTE(v167) = 3;
      sub_1416BCB00((char *)&v167 + 8);
    }
    goto LABEL_12;
  }
  LOBYTE(v6) = 1;
  sub_1402C8680(&v167, a2, a3, v6);
  if ( BYTE8(v174) == 0xFF )
  {
    sub_14029DA50(&v167);
LABEL_12:
    result = sub_14167F170(v7);
    if ( *(_BYTE *)(result + 16) == 1 )
    {
      v22 = *(_QWORD *)result;
      v23 = *(_QWORD *)(result + 8);
    }
    else
    {
      v112 = result;
      v22 = sub_141696260(v19, v18, v20, v21);
      result = v112;
      *(_QWORD *)v112 = v22;
      *(_QWORD *)(v112 + 8) = v23;
      *(_BYTE *)(v112 + 16) = 1;
    }
    *(_QWORD *)result = v22 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_1419E4870 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 32) = v22;
    *(_QWORD *)(a1 + 40) = v23;
    return result;
  }
  v146[6] = v174;
  v146[5] = v173;
  v146[4] = v172;
  v146[3] = _mm_loadu_si128((const __m128i *)&v170.m128i_u64[1]);
  v146[2] = _mm_loadu_si128((const __m128i *)&v169.m128i_u64[1]);
  v146[1] = _mm_loadu_si128((const __m128i *)&v168);
  v146[0] = _mm_loadu_si128((const __m128i *)&v167);
  sub_1402D2F70((__int64)&v167, (__int64)v146, (__int64)aProjects, 8);
  if ( (_DWORD)v167 != -1 )
  {
    v9 = sub_14167F170(v8);
    v14 = v9;
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v15 = *(_QWORD *)v9;
      v16 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v15 = sub_141696260(v11, v10, v12, v13);
      *(_QWORD *)v14 = v15;
      *(_QWORD *)(v14 + 8) = v16;
      *(_BYTE *)(v14 + 16) = 1;
    }
    *(_QWORD *)v14 = v15 + 1;
    *(_OWORD *)(a1 + 16) = *(&off_1419E4870 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = v16;
    sub_14029DA50(&v167);
    return sub_14029B090(v146);
  }
  v24 = _mm_loadu_si128((const __m128i *)((char *)&v167 + 8));
  v25 = _mm_loadu_si128(&v169);
  v159 = _mm_loadu_si128(&v170);
  v158[1] = v25;
  v158[0] = v24;
  v26 = v25.m128i_i64[1];
  if ( !v25.m128i_i64[1] )
  {
LABEL_23:
    v37 = sub_14167F170(v8);
    v42 = v37;
    if ( *(_BYTE *)(v37 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v37;
      v44 = *(_QWORD *)(v42 + 8);
    }
    else
    {
      _RAX = sub_141696260(v39, v38, v40, v41);
      *(_QWORD *)v42 = _RAX;
      *(_QWORD *)(v42 + 8) = v44;
      *(_BYTE *)(v42 + 16) = 1;
    }
    *(_QWORD *)v42 = _RAX + 1;
    *(_OWORD *)(a1 + 16) = *(&off_1419E4870 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 32) = _RAX;
    *(_QWORD *)(a1 + 40) = v44;
    v29 = *((_QWORD *)&v158[0] + 1);
LABEL_26:
    if ( v29 )
    {
      if ( v25.m128i_i64[1] )
      {
        v45 = *(_QWORD *)&v158[0];
        v46 = (const __m128i *)(*(_QWORD *)&v158[0] + 16LL);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v158[0]));
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
        sub_140001660(*(_QWORD *)&v158[0] - v51, v52, 16);
    }
    return sub_14029B090(v146);
  }
  v27 = sub_140D2CC10(&v159, aId_1, 2);
  v29 = *((_QWORD *)&v158[0] + 1);
  v8 = *(_QWORD *)&v158[0];
  v30 = _mm_cvtsi32_si128(v27 >> 57);
  v31 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v30, v30), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v33 = *((_QWORD *)&v158[0] + 1) & v27;
    v34 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)&v158[0] + v33));
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
    v36 = -3LL * (*((_QWORD *)&v158[0] + 1) & (v33 + _R9));
    if ( *(_QWORD *)(*(_QWORD *)&v158[0] + 8 * v36 - 8) == 2
      && **(_WORD **)(*(_QWORD *)&v158[0] + 8 * v36 - 16) == 25705 )
    {
      break;
    }
    _R9 = (unsigned int)(_R8D - 1);
    LOWORD(_R9) = _R8D & (_R8D - 1);
    _R8D = _R9;
    if ( !(_WORD)_R9 )
      goto LABEL_21;
  }
  sub_1402D2F70((__int64)&v167, (__int64)v146, (__int64)aProjectRoots, 13);
  if ( (_DWORD)v167 == -1 )
  {
    v88 = _mm_loadu_si128((const __m128i *)((char *)&v167 + 8));
    v89 = _mm_loadu_si128(&v170);
    v162 = _mm_loadu_si128(&v169);
    v163 = v89;
    v161 = v88;
    if ( v162.m128i_i64[1] )
    {
      v90 = sub_140D2CC10(&v163, aProjectId, 10);
      v92 = v161;
      v93 = _mm_cvtsi32_si128(v90 >> 57);
      v94 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v93, v93), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v95 = v161.m128i_i64[1] & v90;
        v96 = _mm_loadu_si128((const __m128i *)(v161.m128i_i64[0] + v95));
        _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v96, v94));
        if ( _R8D )
          break;
LABEL_68:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v96, (__m128i)-1LL)) )
          goto LABEL_40;
        v90 = j + v95 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r9d, r8d }
        v98 = -3LL * (v161.m128i_i64[1] & (v95 + _R9));
        if ( *(_QWORD *)(v161.m128i_i64[0] + 8 * v98 - 8) == 10
          && !(**(_QWORD **)(v161.m128i_i64[0] + 8 * v98 - 16) ^ 0x5F7463656A6F7270LL
             | *(unsigned __int16 *)(*(_QWORD *)(v161.m128i_i64[0] + 8 * v98 - 16) + 8LL) ^ 0x6469LL) )
        {
          break;
        }
        _R9 = (unsigned int)(_R8D - 1);
        LOWORD(_R9) = _R8D & (_R8D - 1);
        _R8D = _R9;
        if ( !(_WORD)_R9 )
          goto LABEL_68;
      }
      v102 = sub_140D2CC10(&v163, aPath_4, 4);
      v104 = _mm_cvtsi32_si128(v102 >> 57);
      v105 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v104, v104), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v106 = v92.m128i_i64[1] & v102;
        v107 = _mm_loadu_si128((const __m128i *)(v92.m128i_i64[0] + v106));
        _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v107, v105));
        if ( _EDX )
          break;
LABEL_76:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v107, (__m128i)-1LL)) )
          goto LABEL_40;
        v102 = j + v106 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r8d, edx }
        v109 = -3LL * (v92.m128i_i64[1] & (v106 + _R8));
        if ( *(_QWORD *)(v92.m128i_i64[0] + 8 * v109 - 8) == 4
          && **(_DWORD **)(v92.m128i_i64[0] + 8 * v109 - 16) == 1752457584 )
        {
          break;
        }
        _R8 = (unsigned int)(_EDX - 1);
        LOWORD(_R8) = _EDX & (_EDX - 1);
        _EDX = _R8;
        if ( !(_WORD)_R8 )
          goto LABEL_76;
      }
      v110 = sub_140373F00(&v161, aPosition);
      v111 = &unk_1419E8194;
      if ( v110 )
        v111 = &unk_1419E819B;
      v151 = (__int64)v111;
      v152[0] = 3LL * v110 + 7;
      v175 = &v151;
      v176.m128i_i64[0] = (__int64)sub_140186EE0;
      sub_1416ABFD0(&v167, &unk_1419E81A5, &v175);
      v62 = *((_QWORD *)&v167 + 1);
      v181 = v167;
      v63 = v168;
      goto LABEL_42;
    }
  }
  else
  {
    v54 = sub_14167F170(j);
    v59 = v54;
    if ( *(_BYTE *)(v54 + 16) == 1 )
    {
      v60 = *(__m128i *)v54;
    }
    else
    {
      v60.m128i_i64[0] = sub_141696260(v56, v55, v57, v58);
      *(__m128i *)v59 = v60;
      *(_BYTE *)(v59 + 16) = 1;
    }
    *(_QWORD *)v59 = v60.m128i_i64[0] + 1;
    v162 = *((__m128i *)&off_1419E4870 + 1);
    v161 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    v163 = v60;
    sub_14029DA50(&v167);
  }
LABEL_40:
  nullsub_1(j);
  v61 = sub_140001650(29, 1);
  if ( !v61 )
    sub_141938D2B(1, 29);
  v62 = v61;
  v181 = 29;
  *(_OWORD *)(v61 + 13) = *(__int128 *)((char *)&xmmword_1419E816F + 13);
  *(__m128i *)v61 = _mm_loadu_si128((const __m128i *)&xmmword_1419E816F);
  v63 = 29;
LABEL_42:
  v164 = v62;
  sub_1402BA1E0(&v167, v146, v62, v63);
  if ( (_BYTE)v167 )
  {
    sub_14029C280((char *)&v167 + 8);
    v65 = sub_14167F170(v64);
    v70 = v65;
    if ( *(_BYTE *)(v65 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v65;
      v71 = *(_QWORD *)(v70 + 8);
    }
    else
    {
      _RAX = sub_141696260(v67, v66, v68, v69);
      *(_QWORD *)v70 = _RAX;
      *(_QWORD *)(v70 + 8) = v71;
      *(_BYTE *)(v70 + 16) = 1;
    }
    *(_QWORD *)v70 = _RAX + 1;
    *(_OWORD *)(a1 + 16) = *(&off_1419E4870 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 32) = _RAX;
    *(_QWORD *)(a1 + 40) = v71;
    goto LABEL_50;
  }
  v72 = _mm_loadu_si128((const __m128i *)((char *)&v167 + 8));
  v73 = _mm_loadu_si128(&v170);
  v150 = _mm_loadu_si128((const __m128i *)&v171);
  v149[2] = v73;
  v149[1] = v169;
  v149[0] = v72;
  v74 = sub_1417A9630(v150.m128i_i64[1]);
  v75 = nullptr;
  if ( !v74 )
    v75 = v149;
  v76 = v74;
  v168 = v74;
  v167 = __PAIR128__((unsigned __int64)v75, -(__int64)(v74 == 0) | 0x8000000000000013uLL);
  if ( v74 )
  {
    sub_140297B60(&v167);
    v77 = sub_140893A90(&off_1419E5E90);
    *(_OWORD *)(a1 + 16) = *(&off_1419E4870 + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(_QWORD *)(a1 + 32) = v77;
    *(_QWORD *)(a1 + 40) = v78;
    HIDWORD(_RAX) = (unsigned __int64)sub_14029C410(v149) >> 32;
LABEL_50:
    if ( v181 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v164, v181, 1) >> 32;
    v79 = v161.m128i_i64[1];
    if ( v161.m128i_i64[1] )
    {
      v80 = v162.m128i_i64[1];
      if ( v162.m128i_i64[1] )
      {
        v81 = v161.m128i_i64[0];
        v82 = (const __m128i *)(v161.m128i_i64[0] + 16);
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v161.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v84 = _mm_load_si128(v82);
              v81 -= 384;
              ++v82;
              _R13D = _mm_movemask_epi8(v84) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v85 = -3 * _RAX;
          v86 = *(_QWORD *)(v81 + 8 * v85 - 24);
          if ( v86 )
            sub_140001660(*(_QWORD *)(v81 + 8 * v85 - 16), v86, 1);
          --v80;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v80 );
      }
      _RAX = (24 * v79 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v87 = _RAX + v79 + 17;
      if ( v87 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v161.m128i_i64[0] - _RAX, v87, 16) >> 32;
    }
    goto LABEL_26;
  }
  v152[7] = v149;
  v152[8] = 0;
  v185 = 1;
  v99.m128i_i64[0] = sub_140893A90(&off_1419E5E90);
  v154 = *((__m128i *)&off_1419E4870 + 1);
  v153 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  v155 = v99;
  *(_QWORD *)&v167 = 1;
  *((_QWORD *)&v167 + 1) = v149;
  v100 = &v168;
  v168 = v76;
  v169.m128i_i64[0] = -2;
  *((_QWORD *)&v172 + 1) = -2;
  v101 = (__m128i *)v152;
  while ( 1 )
  {
    sub_14036A6D0(&v175, (char *)&v167 + 8);
    v113 = (__int64)v175;
    if ( v175 != (__int64 *)-1LL )
    {
      v115 = v176.m128i_i64[1];
      v114 = v176.m128i_i64[0];
      v116 = v177;
      v117 = v178;
      v118 = v179;
      v119 = _mm_loadu_si128(&v180);
      goto LABEL_101;
    }
    if ( !v168 )
      break;
    sub_14018E680(&v175, v100, 0, &off_1419E6050, *(_QWORD *)&v146[0], *((_QWORD *)&v146[0] + 1));
    v113 = (__int64)v175;
    v183 = v176;
    v116 = v177;
    if ( v175 == (__int64 *)-1LL )
    {
      v120 = v100;
      v121 = v101;
      v122 = v120;
      sub_14018E430(&v175, v120, 1, &off_1419E6068);
      v113 = (__int64)v175;
      v115 = v176.m128i_i64[1];
      if ( v175 != (__int64 *)-1LL )
      {
        v117 = v178;
        v118 = v179;
        v119 = _mm_loadu_si128(&v180);
        v123 = v183.m128i_i64[0];
        if ( v183.m128i_i64[0] )
        {
          v182 = v177;
          v165 = v176.m128i_i64[1];
          v124 = v183.m128i_i64[1];
          v183.m128i_i64[1] = v179;
          v125 = v178;
          v183.m128i_i64[0] = v176.m128i_i64[0];
          sub_140001660(v124, v123, 1);
          v118 = v183.m128i_i64[1];
          v117 = v125;
          v115 = v165;
          v116 = v182;
          v126 = v183.m128i_i64[0];
        }
        else
        {
          v116 = v177;
          v126 = v176.m128i_i64[0];
        }
        v128 = v122;
        v101 = v121;
        v100 = v128;
        v114 = v126;
        goto LABEL_101;
      }
      v119 = (__m128i)(unsigned __int64)v177;
      v113 = -1;
      v118 = v176.m128i_i64[1];
      v117 = v176.m128i_i64[0];
      v127 = v122;
      v101 = v121;
      v100 = v127;
    }
    else
    {
      v117 = v178;
      v118 = v179;
      v119 = _mm_loadu_si128(&v180);
    }
    v115 = v183.m128i_i64[1];
    v114 = v183.m128i_i64[0];
LABEL_101:
    v151 = v113;
    v152[0] = v114;
    v152[1] = v115;
    v152[2] = v116;
    v147 = _mm_loadu_si128(v101);
    v148 = v101[1].m128i_i64[0];
    v175 = (__int64 *)v113;
    v177 = (__int64 *)v148;
    v176 = v147;
    v178 = v117;
    v179 = v118;
    v180 = v119;
    if ( v113 == -1 )
    {
      v129 = v176.m128i_i64[0];
      if ( v176.m128i_i64[0] == -1 )
        goto LABEL_88;
      v183.m128i_i64[1] = v118;
      v183.m128i_i64[0] = v117;
      *v101 = _mm_loadu_si128((const __m128i *)&v147.m128i_u64[1]);
      v151 = v129;
      v184 = 1;
      sub_1403A33A0(&v175, &v153, &v151);
      v130 = v160;
      v182 = v175;
      v131 = v156;
      v132 = v157;
      if ( v175 != (__int64 *)-1LL )
      {
        v131 = v178;
        v132 = v177;
      }
      v133 = v176;
      if ( v183.m128i_i64[0] != -1 )
      {
        v165 = v176.m128i_i64[0];
        v130 = v119.m128i_i64[0];
        sub_140E91160(v183.m128i_i64[1], v119.m128i_i64[0]);
        if ( v134 )
        {
          v135 = v183.m128i_i64[0];
          if ( v182 == (__int64 *)-1LL )
          {
            if ( v183.m128i_i64[0] )
              sub_140001660(v183.m128i_i64[1], v183.m128i_i64[0], 1);
            v166 = v183.m128i_i64[1];
            goto LABEL_116;
          }
          v166 = v183.m128i_i64[1];
LABEL_112:
          v136 = (const __m128i *)*v132;
          v137 = v132[1];
          v138 = v131 & v137;
          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*v132 + (v131 & v137))));
          if ( !(_DWORD)_R8 )
          {
            v143 = 16;
            do
            {
              v138 = v137 & (v143 + v138);
              _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v136 + v138)));
              v143 += 16;
            }
            while ( !(_DWORD)_R8 );
          }
          __asm { tzcnt   r8d, r8d }
          _R8 = v137 & (v138 + _R8);
          v141 = v136->m128i_i8[_R8];
          if ( v141 >= 0 )
          {
            _R8 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v136));
            __asm { tzcnt   r8d, r8d }
            v141 = v136->m128i_i8[_R8];
          }
          v136->m128i_i8[_R8] = v131 >> 57;
          v136[1].m128i_i8[v137 & (_R8 - 16)] = v131 >> 57;
          v142 = -3 * _R8;
          v136[v142 - 3].m128i_i64[0] = (__int64)v182;
          *(__m128i *)((char *)&v136[v142 - 2] - 8) = v133;
          *((_QWORD *)&v136[v142 - 1] - 1) = v135;
          v136[v142 - 1].m128i_i64[0] = v166;
          v136[v142 - 1].m128i_i64[1] = v130;
          *((__m128i *)v132 + 1) = _mm_sub_epi64(
                                     _mm_loadu_si128((const __m128i *)v132 + 1),
                                     (__m128i)_mm_shuffle_ps(
                                                (__m128)_mm_cvtsi32_si128(v141 & 1),
                                                (__m128)xmmword_1419D3560,
                                                228));
          goto LABEL_116;
        }
        v130 = v160;
        if ( v183.m128i_i64[0] )
          sub_140001660(v183.m128i_i64[1], v183.m128i_i64[0], 1);
      }
      v135 = -1;
      if ( v182 != (__int64 *)-1LL )
        goto LABEL_112;
LABEL_116:
      v160 = v130;
      v157 = v132;
      v156 = v131;
      v100 = &v168;
      if ( (_QWORD)v167 != 1 )
        goto LABEL_127;
    }
    else
    {
      sub_14029C280(&v175);
LABEL_88:
      if ( !(_BYTE)v167 )
        goto LABEL_127;
    }
  }
  v151 = -2;
  if ( (_QWORD)v167 )
    sub_14029C090((char *)&v167 + 8);
  *(_QWORD *)&v167 = 0;
LABEL_127:
  sub_14029A1A0(&v167);
  v144 = _mm_load_si128(&v153);
  v145 = _mm_load_si128(&v154);
  *(__m128i *)(a1 + 32) = _mm_load_si128(&v155);
  *(__m128i *)(a1 + 16) = v145;
  *(__m128i *)a1 = v144;
  sub_14029C410(v149);
  if ( v181 )
    sub_140001660(v164, v181, 1);
  sub_140370B80(&v161);
  sub_140370B80(v158);
  return sub_14029B090(v146);
}
