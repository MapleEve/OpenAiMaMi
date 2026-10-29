// win 1.2.7 | module src/core/sessions.rs | ea 0x1402dcb00 | name sub_1402DCB00
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402DCB00(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  const __m128i *v10; // r15
  __m128i *v11; // rax
  const __m128i *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  _QWORD *v17; // rcx
  _QWORD *v18; // rsi
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  const __m128i *v23; // rsi
  const __m128i *v24; // r13
  unsigned int v25; // ebx
  unsigned __int64 v26; // rax
  __m128i v28; // xmm8
  __int64 v30; // r15
  __int64 v31; // rdi
  int v32; // eax
  bool v33; // zf
  __int64 i; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  const __m128i *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r15
  const __m128i *v57; // r15
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdi
  __m128i si128; // xmm0
  const __m128i *v64; // r14
  __m128i v65; // xmm0
  __m128i v66; // xmm7
  __int64 v67; // rsi
  const __m128i *v68; // rsi
  __int16 v69; // cx
  const __m128i *v70; // r12
  unsigned __int64 v71; // r13
  __int64 v73; // rcx
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v78; // r8
  __int64 v79; // rcx
  __m128i v80; // xmm0
  const __m128i *v81; // rbx
  __int64 v82; // r14
  unsigned __int64 v83; // rax
  __int64 v84; // r15
  __int64 v85; // r13
  __m128i v86; // xmm0
  __m128i v87; // xmm7
  __int64 j; // r9
  __int64 v89; // r15
  __m128i v90; // xmm8
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // r15
  __int64 v95; // rcx
  __int64 v96; // r15
  __int32 v97; // r14d
  __int64 v98; // rax
  char v99; // al
  __int64 v100; // rdx
  __int64 v101; // rcx
  unsigned __int64 v102; // rbx
  __int64 v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v107; // rsi
  __int64 v108; // rdi
  const __m128i *v109; // rbx
  const __m128i *v110; // r14
  __m128i v112; // xmm0
  const __m128i *v113; // r12
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rsi
  __int64 v119; // rbx
  __int64 v120[6]; // [rsp+58h] [rbp-28h] BYREF
  __m128i v121; // [rsp+88h] [rbp+8h] BYREF
  __int64 v122; // [rsp+98h] [rbp+18h]
  __int64 v123; // [rsp+A0h] [rbp+20h]
  __m128i v124; // [rsp+C0h] [rbp+40h] BYREF
  const __m128i *v125; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v126; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v127; // [rsp+E8h] [rbp+68h]
  __int128 v128; // [rsp+F8h] [rbp+78h]
  _QWORD *v129; // [rsp+108h] [rbp+88h]
  __int128 v130; // [rsp+110h] [rbp+90h]
  __int128 v131; // [rsp+120h] [rbp+A0h]
  const __m128i *v132[3]; // [rsp+2E8h] [rbp+268h] BYREF
  unsigned __int64 v133; // [rsp+300h] [rbp+280h]
  const __m128i *v134; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v135; // [rsp+328h] [rbp+2A8h]
  __int64 v136; // [rsp+338h] [rbp+2B8h]
  __m128i v137; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v138; // [rsp+360h] [rbp+2E0h]
  __int128 v139; // [rsp+370h] [rbp+2F0h] BYREF
  _QWORD *v140; // [rsp+380h] [rbp+300h]
  __int64 v141; // [rsp+388h] [rbp+308h]
  __int64 v142; // [rsp+390h] [rbp+310h]
  __int64 v143; // [rsp+398h] [rbp+318h]
  __int64 v144; // [rsp+3A0h] [rbp+320h]
  __int64 v145; // [rsp+3A8h] [rbp+328h]
  __int64 v146; // [rsp+3B0h] [rbp+330h]
  __int64 v147; // [rsp+3B8h] [rbp+338h]
  __m128i v148; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v149; // [rsp+3D0h] [rbp+350h]
  __int128 v150; // [rsp+3E0h] [rbp+360h]
  _QWORD *v151; // [rsp+3F0h] [rbp+370h]
  __int64 v152; // [rsp+3F8h] [rbp+378h]
  __int64 v153; // [rsp+400h] [rbp+380h]
  __int64 v154; // [rsp+408h] [rbp+388h]
  __int64 v155; // [rsp+410h] [rbp+390h]
  __int64 v156; // [rsp+418h] [rbp+398h]
  __int64 v157; // [rsp+420h] [rbp+3A0h]
  __int64 v158; // [rsp+428h] [rbp+3A8h]
  __int64 v159; // [rsp+430h] [rbp+3B0h]
  __int64 v160; // [rsp+438h] [rbp+3B8h]
  __int64 v161; // [rsp+440h] [rbp+3C0h]
  __int64 v162; // [rsp+448h] [rbp+3C8h]
  __m128i v163; // [rsp+450h] [rbp+3D0h]
  __int32 v164; // [rsp+460h] [rbp+3E0h]
  __int64 v165; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v166; // [rsp+478h] [rbp+3F8h]
  __int64 v167; // [rsp+480h] [rbp+400h]
  __int64 v168; // [rsp+488h] [rbp+408h] BYREF
  __int64 v169; // [rsp+490h] [rbp+410h]
  __int64 v170; // [rsp+498h] [rbp+418h]
  char v171; // [rsp+4A0h] [rbp+420h]
  __int64 v172; // [rsp+4A8h] [rbp+428h]
  __int64 v173; // [rsp+4B0h] [rbp+430h]
  __m128i v174; // [rsp+4B8h] [rbp+438h] BYREF
  unsigned __int64 v175; // [rsp+4C8h] [rbp+448h]
  _QWORD *v176; // [rsp+4D0h] [rbp+450h]
  __int64 v177; // [rsp+4D8h] [rbp+458h]
  __int64 v178; // [rsp+4E0h] [rbp+460h]
  __int64 *v179; // [rsp+4E8h] [rbp+468h]
  __int64 v180; // [rsp+4F0h] [rbp+470h]
  char v181; // [rsp+4FFh] [rbp+47Fh] BYREF
  __int64 v182; // [rsp+500h] [rbp+480h]
  __int64 v183; // [rsp+508h] [rbp+488h]
  __int64 v184; // [rsp+510h] [rbp+490h]
  __int64 v185; // [rsp+518h] [rbp+498h]
  char v186; // [rsp+526h] [rbp+4A6h]
  char v187; // [rsp+527h] [rbp+4A7h]
  __int64 v188; // [rsp+528h] [rbp+4A8h]

  v188 = -2;
  v179 = a3;
  v165 = a4;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    v172 = a1;
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 16);
    v187 = 1;
    sub_1401B8620((__int64)&v168, v7, v8);
    v9 = v169;
    v5 = v170;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 976);
    if ( v5 < 0 )
    {
      v6 = 0;
      goto LABEL_4;
    }
    v172 = a1;
    if ( v5 )
    {
      v10 = *(const __m128i **)(a2 + 968);
      nullsub_1(a1);
      v6 = 1;
      v11 = (__m128i *)sub_140001650(v5, 1);
      if ( !v11 )
      {
LABEL_4:
        v187 = 1;
        sub_141938D2B(v6, v5);
      }
      v9 = (__int64)v11;
      v168 = v5;
      v169 = (__int64)v11;
      sub_1418F44E0(v11, v10, v5);
      v170 = v5;
    }
    else
    {
      v168 = 0;
      v169 = 1;
      v170 = 0;
      v9 = 1;
    }
    v171 = *(_BYTE *)(a2 + 984);
  }
  v186 = 1;
  sub_1402C9920((__int64)&v125, v9, v5);
  v12 = v125;
  v148 = v126;
  v149 = v127;
  v150 = v128;
  v151 = v129;
  if ( v125 != (const __m128i *)-1LL )
  {
    v13 = v130;
    v14 = v172;
    *(_OWORD *)(v172 + 80) = v131;
    *(_OWORD *)(v14 + 64) = v13;
    *(_QWORD *)(v14 + 56) = v151;
    v15 = _mm_load_si128(&v148);
    v16 = v149;
    *(_OWORD *)(v14 + 40) = v150;
    *(_OWORD *)(v14 + 24) = v16;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)v14 = v12;
    if ( v168 )
      sub_140001660(v9, v168, 1);
    v17 = (_QWORD *)v179[1];
    v184 = v179[2];
    v185 = 0;
    v183 = (__int64)v17;
    while ( v184 != v185 )
    {
      ++v185;
      v18 = v17 + 44;
      sub_14038AB90(v17);
      v17 = v18;
    }
    result = *v179;
    if ( *v179 )
    {
      v20 = 352 * result;
      v21 = 8;
      v22 = v183;
      return sub_140001660(v22, v20, v21);
    }
    return result;
  }
  v176 = (_QWORD *)a2;
  v137 = _mm_load_si128(&v148);
  v138 = v149;
  v139 = v150;
  v140 = v151;
  sub_1402DED50(v132, v179);
  v23 = v132[0];
  v185 = v133;
  v24 = v132[0] + 1;
  v25 = ~_mm_movemask_epi8(_mm_load_si128(v132[0]));
  v182 = *((_QWORD *)&v138 + 1);
  v183 = v137.m128i_i64[1];
  v184 = v137.m128i_i64[0];
LABEL_90:
  while ( v185 )
  {
    if ( !(_WORD)v25 )
    {
      do
      {
        si128 = _mm_load_si128(v24);
        v23 -= 416;
        ++v24;
        v25 = _mm_movemask_epi8(si128) ^ 0xFFFF;
      }
      while ( !v25 );
    }
    _RAX = v25;
    v25 &= v25 - 1;
    --v185;
    if ( v182 )
    {
      __asm { tzcnt   eax, eax }
      v64 = &v23[-26 * _RAX];
      v35 = sub_140D2AC70(&v139, &v64[-26]);
      v65 = _mm_cvtsi32_si128(v35 >> 57);
      v66 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v65, v65), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v26 = v183 & v35;
        HIDWORD(_RCX) = HIDWORD(v184);
        v28 = _mm_loadu_si128((const __m128i *)(v184 + v26));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v28, v66));
        if ( _R12D )
          break;
LABEL_25:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v28, (__m128i)-1LL)) )
          goto LABEL_90;
        v35 = i + v26 + 16;
      }
      v30 = v64[-25].m128i_i64[0];
      v180 = v26;
      v178 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v183 & (v26 + _RCX));
        if ( v30 == *(_QWORD *)(v184 + 416 * _RCX - 400) )
        {
          v31 = v184 + 416 * _RCX;
          if ( !(unsigned int)sub_1418F4B70(v64[-26].m128i_i64[1], *(_QWORD *)(v31 - 408)) )
            break;
        }
        v32 = _R12D - 1;
        LOWORD(v32) = _R12D & (_R12D - 1);
        v33 = (_WORD)v32 == 0;
        _R12D = v32;
        v26 = v180;
        i = v178;
        if ( v33 )
          goto LABEL_25;
      }
      sub_140E91160(v64[-23].m128i_i64[0], v64[-23].m128i_i64[1]);
      if ( !v36 )
        sub_1416AC3D0(&v64[-24].m128i_u64[1], v31 - 376);
      if ( v64[-21].m128i_i64[1] == -1 )
      {
        if ( *(_QWORD *)(v31 - 328) == -1 )
        {
          v37 = -1;
        }
        else
        {
          sub_1416AC440(&v125, v31 - 328);
          v37 = (__int64)v125;
          v148 = _mm_loadu_si128(&v126);
        }
        v64[-21].m128i_i64[1] = v37;
        v64[-20] = _mm_load_si128(&v148);
        if ( v64[-19].m128i_i64[0] != -1 )
        {
LABEL_31:
          if ( v64[-13].m128i_i64[0] != -1 )
            goto LABEL_32;
          goto LABEL_44;
        }
      }
      else if ( v64[-19].m128i_i64[0] != -1 )
      {
        goto LABEL_31;
      }
      if ( *(_QWORD *)(v31 - 304) == -1 )
      {
        v38 = -1;
      }
      else
      {
        sub_1416AC440(&v125, v31 - 304);
        v38 = (__int64)v125;
        v148 = _mm_loadu_si128(&v126);
      }
      v64[-19].m128i_i64[0] = v38;
      *(const __m128i *)((char *)&v64[-19] + 8) = _mm_load_si128(&v148);
      if ( v64[-13].m128i_i64[0] != -1 )
      {
LABEL_32:
        if ( v64[-12].m128i_i64[1] != -1 )
          goto LABEL_33;
        goto LABEL_48;
      }
LABEL_44:
      if ( *(_QWORD *)(v31 - 208) == -1 )
      {
        v39 = -1;
      }
      else
      {
        sub_1416AC440(&v125, v31 - 208);
        v39 = (__int64)v125;
        v148 = _mm_loadu_si128(&v126);
      }
      v64[-13].m128i_i64[0] = v39;
      *(const __m128i *)((char *)&v64[-13] + 8) = _mm_load_si128(&v148);
      if ( v64[-12].m128i_i64[1] != -1 )
      {
LABEL_33:
        if ( v64[-4].m128i_i64[0] != -1 )
          goto LABEL_34;
        goto LABEL_52;
      }
LABEL_48:
      if ( *(_QWORD *)(v31 - 184) == -1 )
      {
        v40 = -1;
      }
      else
      {
        sub_1416AC440(&v125, v31 - 184);
        v40 = (__int64)v125;
        v148 = _mm_loadu_si128(&v126);
      }
      v64[-12].m128i_i64[1] = v40;
      v64[-11] = _mm_load_si128(&v148);
      if ( v64[-4].m128i_i64[0] != -1 )
      {
LABEL_34:
        if ( v64[-3].m128i_i64[1] != -1 )
          goto LABEL_60;
LABEL_56:
        if ( *(_QWORD *)(v31 - 40) == -1 )
        {
          v42 = -1;
        }
        else
        {
          sub_1416AC440(&v125, v31 - 40);
          v42 = (__int64)v125;
          v148 = _mm_loadu_si128(&v126);
        }
        v64[-3].m128i_i64[1] = v42;
        v64[-2] = _mm_load_si128(&v148);
        goto LABEL_60;
      }
LABEL_52:
      if ( *(_QWORD *)(v31 - 64) == -1 )
      {
        v41 = -1;
      }
      else
      {
        sub_1416AC440(&v125, v31 - 64);
        v41 = (__int64)v125;
        v148 = _mm_loadu_si128(&v126);
      }
      v64[-4].m128i_i64[0] = v41;
      *(const __m128i *)((char *)&v64[-4] + 8) = _mm_load_si128(&v148);
      if ( v64[-3].m128i_i64[1] == -1 )
        goto LABEL_56;
LABEL_60:
      *(const __m128i *)((char *)&v64[-25] + 8) = _mm_loadu_si128((const __m128i *)(v31 - 392));
      v43 = v64 - 10;
      v44 = v31 - 160;
      v45 = v64[-10].m128i_i64[0];
      v46 = *(_QWORD *)(v31 - 160);
      if ( v45 == -1 || v46 == -1 )
      {
        if ( v46 == -1 )
        {
          v47 = -1;
          if ( v45 == -1 )
          {
LABEL_69:
            v64[-10].m128i_i64[0] = v47;
            *(const __m128i *)((char *)&v64[-10] + 8) = _mm_load_si128(&v148);
            goto LABEL_70;
          }
        }
        else
        {
          sub_1416AC440(&v125, v44);
          v47 = (__int64)v125;
          v148 = _mm_loadu_si128(&v126);
          if ( v45 == -1 )
            goto LABEL_69;
        }
        v48 = v43->m128i_i64[0];
        if ( v43->m128i_i64[0] )
        {
          v49 = v47;
          sub_140001660(v64[-10].m128i_i64[1], v48, 1);
          v47 = v49;
        }
        goto LABEL_69;
      }
      sub_1416AC3D0(&v64[-10], v44);
LABEL_70:
      v50 = &v64[-9].m128i_i64[1];
      v51 = v31 - 136;
      v52 = v64[-9].m128i_i64[1];
      v53 = *(_QWORD *)(v31 - 136);
      if ( v52 != -1 && v53 != -1 )
      {
        sub_1416AC3D0(&v64[-9].m128i_u64[1], v51);
        goto LABEL_80;
      }
      if ( v53 == -1 )
      {
        v54 = -1;
        if ( v52 != -1 )
        {
LABEL_77:
          v55 = *v50;
          if ( *v50 )
          {
            v56 = v54;
            sub_140001660(v64[-8].m128i_i64[0], v55, 1);
            v54 = v56;
          }
        }
      }
      else
      {
        sub_1416AC440(&v125, v51);
        v54 = (__int64)v125;
        v148 = _mm_loadu_si128(&v126);
        if ( v52 != -1 )
          goto LABEL_77;
      }
      v64[-9].m128i_i64[1] = v54;
      v64[-8] = _mm_load_si128(&v148);
LABEL_80:
      v57 = v64 - 7;
      v58 = v31 - 112;
      v59 = v64[-7].m128i_i64[0];
      v60 = *(_QWORD *)(v31 - 112);
      if ( v59 == -1 || v60 == -1 )
      {
        if ( v60 == -1 )
        {
          v61 = -1;
          if ( v59 == -1 )
            goto LABEL_89;
        }
        else
        {
          sub_1416AC440(&v125, v58);
          v61 = (__int64)v125;
          v148 = _mm_loadu_si128(&v126);
          if ( v59 == -1 )
            goto LABEL_89;
        }
        if ( v57->m128i_i64[0] )
          sub_140001660(v64[-7].m128i_i64[1], v57->m128i_i64[0], 1);
LABEL_89:
        v64[-7].m128i_i64[0] = v61;
        *(const __m128i *)((char *)&v64[-7] + 8) = _mm_load_si128(&v148);
      }
      else
      {
        sub_1416AC3D0(&v64[-7], v58);
      }
    }
  }
  v67 = v169;
  sub_1402DB340((__int64)&v134, v169, v170);
  sub_14149D230(&v148);
  v146 = v67;
  if ( v148.m128i_i64[0] == -1 )
  {
    v177 = -1;
  }
  else
  {
    v184 = v148.m128i_i64[1];
    v185 = v148.m128i_i64[0];
    sub_1416828D0((unsigned int)&v125, v148.m128i_i32[2], v149, (unsigned int)&unk_1419E6080, 5);
    if ( v185 )
      sub_140001660(v184, v185, 1);
    v177 = (__int64)v125;
    v147 = v126.m128i_i64[1];
    v173 = v126.m128i_i64[0];
  }
  v68 = v132[0];
  v69 = _mm_movemask_epi8(_mm_load_si128(v132[0]));
  v70 = v132[0] + 1;
  v71 = v133;
  v125 = v132[0];
  v126.m128i_i64[0] = (__int64)v132[0][1].m128i_i64;
  v126.m128i_i64[1] = (__int64)v132[0]->m128i_i64 + (unsigned __int64)v132[1] + 1;
  LOWORD(v127) = ~v69;
  *((_QWORD *)&v127 + 1) = v133;
  *(_QWORD *)&v128 = &v165;
  sub_140BE1E00((__int64)v120, v176, (__int64)&v125);
  if ( v71 > 0x3D226357E16ECELL )
  {
    v74 = 0;
    goto LABEL_102;
  }
  if ( 536 * v71 )
  {
    nullsub_1(v73);
    v74 = 8;
    v75 = sub_140001650(536 * v71, 8);
    if ( !v75 )
LABEL_102:
      sub_141938D2B(v74, 536 * v71);
    v76 = v71;
  }
  else
  {
    v75 = 8;
    v76 = 0;
  }
  v174.m128i_i64[0] = v76;
  v174.m128i_i64[1] = v75;
  v175 = 0;
  _EDI = ~_mm_movemask_epi8(_mm_load_si128(v68));
LABEL_108:
  v78 = v165;
  v79 = v165 + 32;
  v184 = v165;
LABEL_109:
  while ( v71 )
  {
    if ( !(_WORD)_EDI )
    {
      do
      {
        v80 = _mm_load_si128(v70);
        v68 -= 416;
        ++v70;
        _EDI = _mm_movemask_epi8(v80) ^ 0xFFFF;
      }
      while ( !_EDI );
    }
    __asm { tzcnt   edx, edi }
    _RDX = -_RDX;
    v81 = &v68[26 * _RDX];
    --v71;
    _EDI &= _EDI - 1;
    if ( !v78 )
    {
      v93 = (__int64)&v81[-25].m128i_i64[1];
LABEL_124:
      sub_1402DC970((__int64)&v121, v93);
      v94 = -1;
      v33 = v81[-12].m128i_i64[1] == -1;
      v185 = -1;
      if ( !v33 )
      {
        sub_1416AC440(&v125, &v81[-12].m128i_u64[1]);
        v185 = (__int64)v125;
        v141 = v126.m128i_i64[1];
        v176 = (_QWORD *)v126.m128i_i64[0];
      }
      if ( v81[-21].m128i_i64[1] != -1 )
      {
        sub_1416AC440(&v125, &v81[-21].m128i_u64[1]);
        v94 = (__int64)v125;
        v178 = v126.m128i_i64[1];
        v180 = v126.m128i_i64[0];
      }
      v183 = v94;
      v184 = -1;
      v95 = -1;
      if ( v81[-15].m128i_i64[1] != -1 )
      {
        sub_1416AC440(&v125, &v81[-15].m128i_u64[1]);
        v95 = (__int64)v125;
        v142 = v126.m128i_i64[1];
        v166 = v126.m128i_i64[0];
      }
      v182 = v95;
      v96 = v93;
      v97 = v81[-1].m128i_i32[2];
      if ( v81[-18].m128i_i64[1] != -1 )
      {
        sub_1416AC440(&v125, &v81[-18].m128i_u64[1]);
        v184 = (__int64)v125;
        v143 = v126.m128i_i64[1];
        v167 = v126.m128i_i64[0];
      }
      if ( v81[-16].m128i_i64[0] == -1 )
      {
        v98 = -1;
      }
      else
      {
        sub_1416AC440(&v125, &v81[-16]);
        v98 = (__int64)v125;
        v124 = _mm_loadu_si128(&v126);
      }
      *(_QWORD *)&v149 = -1;
      *((_QWORD *)&v150 + 1) = v185;
      v151 = v176;
      v152 = v141;
      v148.m128i_i64[0] = 0;
      v153 = v183;
      v154 = v180;
      v155 = v178;
      v156 = v182;
      v157 = v166;
      v158 = v142;
      v164 = v97;
      v159 = v184;
      v160 = v167;
      v161 = v143;
      v162 = v98;
      v163 = _mm_load_si128(&v124);
      if ( v81[-15].m128i_i64[1] == -1 )
      {
        if ( v81[-21].m128i_i64[0] == 6 )
        {
          v99 = 0;
          if ( v177 != -1
            && !(*(_DWORD *)v81[-22].m128i_i64[1] ^ 0x6F637376
               | *(unsigned __int16 *)(v81[-22].m128i_i64[1] + 4) ^ 0x6564) )
          {
            if ( v81[-21].m128i_i64[1] == -1 )
            {
              v100 = v178;
              if ( v183 == -1 )
                v100 = 0;
              v101 = v180;
              if ( v183 == -1 )
                v101 = 1;
            }
            else
            {
              v100 = v178;
              v101 = v180;
              if ( v183 == -1 )
              {
                v101 = v81[-20].m128i_i64[0];
                v100 = v81[-20].m128i_i64[1];
              }
            }
            v99 = sub_141681D40(v101, v100, v173, v147);
          }
        }
        else
        {
          v99 = 0;
        }
      }
      else
      {
        v99 = 0;
      }
      sub_1402CF8D0(
        (__int64)&v125,
        (const __m128i *)v81[-26].m128i_i64[1],
        v81[-25].m128i_i64[0],
        &v121,
        v96,
        0,
        (__int64)&v148,
        v99,
        (__int64 *)&v134,
        v120);
      v102 = v175;
      if ( v175 == v174.m128i_i64[0] )
        sub_14190FAB0(&v174);
      sub_1418F44E0((__m128i *)(v174.m128i_i64[1] + 536 * v102), (const __m128i *)&v125, 0x218u);
      v175 = v102 + 1;
      sub_14029DF00(&v148);
      HIDWORD(_RDX) = HIDWORD(v122);
      if ( v122 != -1 && v122 )
        sub_140001660(v123, v122, 1);
      goto LABEL_108;
    }
    if ( *(_QWORD *)(v78 + 24) )
    {
      v185 = v71;
      v82 = v81[-25].m128i_i64[0];
      v183 = v81[-26].m128i_i64[1];
      v83 = sub_140D2CC10(v79, v183, v82);
      v78 = v184;
      v84 = v83;
      v85 = *(_QWORD *)v184;
      _RDX = *(_QWORD *)(v184 + 8);
      v86 = _mm_cvtsi32_si128(v83 >> 57);
      v87 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v86, v86), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v89 = _RDX & v84;
        v90 = _mm_loadu_si128((const __m128i *)(v85 + v89));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v90, v87));
        if ( (_DWORD)_RAX )
          break;
LABEL_120:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v90, (__m128i)-1LL)) )
        {
          v71 = v185;
          v79 = v78 + 32;
          goto LABEL_109;
        }
        v84 = j + v89 + 16;
      }
      v144 = _RDX;
      v145 = j;
      while ( 1 )
      {
        v182 = _RAX;
        __asm { tzcnt   eax, eax }
        v92 = -3 * (_RDX & (v89 + _RAX));
        if ( v82 == *(_QWORD *)(v85 + 8 * v92 - 8)
          && !(unsigned int)sub_1418F4B70(v183, *(_QWORD *)(v85 + 8 * v92 - 16)) )
        {
          break;
        }
        _RAX = (unsigned int)(v182 - 1);
        LOWORD(_RAX) = v182 & (v182 - 1);
        v78 = v184;
        _RDX = v144;
        j = v145;
        if ( !(_WORD)_RAX )
          goto LABEL_120;
      }
      v93 = (__int64)&v81[-25].m128i_i64[1];
      v71 = v185;
      goto LABEL_124;
    }
  }
  v103 = v174.m128i_i64[1];
  v125 = (const __m128i *)&v181;
  if ( v175 >= 2 )
  {
    if ( v175 >= 0x15 )
    {
      sub_14065BDC0(v174.m128i_i64[1], v175, &v125);
    }
    else
    {
      v118 = 536 * v175;
      v119 = 536;
      do
      {
        sub_140DF9380(v103, v103 + v119);
        v119 += 536;
      }
      while ( v118 != v119 );
    }
  }
  v104 = v172;
  *(_QWORD *)(v172 + 24) = v175;
  *(__m128i *)(v104 + 8) = _mm_loadu_si128(&v174);
  *(_QWORD *)v104 = -1;
  sub_14036FF00(v120);
  v105 = v177;
  _RAX = v177 - 1;
  if ( (unsigned __int64)(v177 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v173, v177, 1) >> 32;
  v107 = v135;
  if ( v135 )
  {
    v108 = v136;
    if ( v136 )
    {
      v109 = v134;
      v110 = v134 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v134));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v112 = _mm_load_si128(v110);
            v109 -= 48;
            ++v110;
            _R15D = _mm_movemask_epi8(v112) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v113 = &v109[-3 * _RAX];
        v114 = v113[-3].m128i_i64[0];
        if ( v114 )
          sub_140001660(v113[-3].m128i_i64[1], v114, 1);
        v105 = v113[-2].m128i_i64[1];
        if ( v105 != -1 && v105 )
          sub_140001660(v113[-1].m128i_i64[0], v105, 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v108;
      }
      while ( v108 );
    }
    v115 = 48 * v107;
    v116 = 49 * v107 + 65;
    if ( v116 )
      sub_140001660(&v134[v115 / 0xFFFFFFFFFFFFFFF0uLL - 3], v116, 16);
  }
  sub_140298940(v132, v105);
  result = sub_140298940(&v137, v117);
  v20 = v168;
  if ( v168 )
  {
    v21 = 1;
    v22 = v146;
    return sub_140001660(v22, v20, v21);
  }
  return result;
}
