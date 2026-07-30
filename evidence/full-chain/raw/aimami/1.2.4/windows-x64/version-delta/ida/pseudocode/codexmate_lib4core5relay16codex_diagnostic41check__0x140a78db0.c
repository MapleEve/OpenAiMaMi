// win 1.2.4 delta | codexmate_lib4core5relay16codex_diagnostic41check_ @ 0x140a78db0
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay16codex_diagnostic41check_ | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A78DB0(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __m128i *v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  __int64 v27; // rax
  __int64 v28; // rsi
  __int128 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // r14
  __m128i v33; // rdi
  __int64 v34; // r15
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rax
  __int8 v40; // al
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  __int64 i; // rdx
  unsigned __int64 v49; // rcx
  __m128i v51; // xmm8
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __m128i v55; // xmm0
  __m128i v56; // xmm7
  unsigned __int64 j; // rdx
  unsigned __int64 v58; // rcx
  __m128i v60; // xmm8
  unsigned __int64 v62; // rsi
  __int64 v63; // rax
  __int16 v64; // r8
  __int64 v65; // r14
  unsigned __int64 v66; // rdi
  __int64 *v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // r12
  unsigned __int64 v70; // rdi
  _QWORD *v71; // r15
  __int64 v72; // rdx
  unsigned __int64 v73; // r15
  bool v74; // zf
  __int64 v75; // r12
  __int64 v76; // r13
  _QWORD *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rsi
  bool v80; // r14
  const char *v81; // rdi
  __m128i *v82; // rax
  __m128i *v83; // r15
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v88; // rdx
  _BYTE *v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rsi
  __int64 v92; // rdi
  const __m128i *v93; // r14
  __m128i si128; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rbx
  __int64 v99; // rbx
  __int64 v100; // rsi
  __int64 v101; // rdi
  const __m128i *v102; // r14
  __m128i v104; // xmm0
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rbx
  const __m128i *v109; // rdi
  const __m128i *v110; // rsi
  __m128i v112; // xmm0
  __int64 v113; // rax
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // rcx
  __int64 v118; // rsi
  __m128i v119; // [rsp+30h] [rbp-50h] BYREF
  __int64 v120; // [rsp+40h] [rbp-40h]
  __int64 v121; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v122; // [rsp+50h] [rbp-30h] BYREF
  __int64 v123; // [rsp+58h] [rbp-28h]
  unsigned __int64 v124; // [rsp+60h] [rbp-20h]
  __int64 v125; // [rsp+68h] [rbp-18h]
  __m128i v126; // [rsp+70h] [rbp-10h] BYREF
  __m128i v127; // [rsp+80h] [rbp+0h]
  __int128 v128; // [rsp+90h] [rbp+10h]
  __int128 v129; // [rsp+A0h] [rbp+20h]
  __int128 v130; // [rsp+B0h] [rbp+30h]
  __int128 v131; // [rsp+C0h] [rbp+40h]
  __m128i v132; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v133; // [rsp+E0h] [rbp+60h]
  __m128i v134; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v135; // [rsp+100h] [rbp+80h]
  __int64 v136; // [rsp+110h] [rbp+90h]
  __int64 v137; // [rsp+118h] [rbp+98h]
  __m128i v138; // [rsp+120h] [rbp+A0h]
  __int64 v139; // [rsp+130h] [rbp+B0h]
  __m128i v140; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v141; // [rsp+148h] [rbp+C8h]
  __int64 v142; // [rsp+150h] [rbp+D0h]
  _BYTE v143[16]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v144; // [rsp+168h] [rbp+E8h] BYREF
  __int64 *v145; // [rsp+170h] [rbp+F0h] BYREF
  __int64 (__fastcall *v146)(); // [rsp+178h] [rbp+F8h]
  unsigned __int64 v147; // [rsp+180h] [rbp+100h]
  unsigned __int64 v148; // [rsp+188h] [rbp+108h]
  __m128i v149; // [rsp+190h] [rbp+110h] BYREF
  __m128i v150; // [rsp+1A0h] [rbp+120h]
  __int128 v151; // [rsp+1B0h] [rbp+130h]
  __int128 v152; // [rsp+1C0h] [rbp+140h]
  __int128 v153; // [rsp+1D0h] [rbp+150h]
  __int128 v154; // [rsp+1E0h] [rbp+160h]
  __int64 v155; // [rsp+1F8h] [rbp+178h]
  __int64 v156; // [rsp+200h] [rbp+180h]
  __int64 v157; // [rsp+208h] [rbp+188h]
  _DWORD *v158; // [rsp+210h] [rbp+190h]
  __int64 v159; // [rsp+218h] [rbp+198h]
  __int64 v160; // [rsp+220h] [rbp+1A0h]
  const __m128i *v161; // [rsp+228h] [rbp+1A8h]
  __int64 v162; // [rsp+230h] [rbp+1B0h]
  _BYTE *v163; // [rsp+238h] [rbp+1B8h]
  __int64 v164; // [rsp+240h] [rbp+1C0h]
  _BYTE *v165; // [rsp+248h] [rbp+1C8h]
  _BYTE v166[2]; // [rsp+256h] [rbp+1D6h] BYREF
  __int64 v167; // [rsp+258h] [rbp+1D8h]

  v167 = -2;
  sub_1404B1000(&v149);
  if ( !v150.m128i_i64[0] )
  {
    if ( v149.m128i_i64[0] )
      sub_140001660(v149.m128i_i64[1], 32 * v149.m128i_i64[0], 8);
    return sub_140A82290(a1, (unsigned int)aRolloutOrphanP, 24, (unsigned int)&unk_141819043, 47);
  }
  v9 = v149.m128i_i64[1];
  v10 = 32 * v150.m128i_i64[0];
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(v9 + v11);
    if ( v12 )
      sub_140001660(*(_QWORD *)(v9 + v11 + 8), v12, 1);
    v11 += 32;
  }
  while ( v10 != v11 );
  if ( v149.m128i_i64[0] )
    sub_140001660(v9, 32 * v149.m128i_i64[0], 8);
  sub_140A64E60(&v126, a2);
  if ( v126.m128i_i32[0] != -1 )
  {
    v154 = v131;
    v153 = v130;
    v13 = _mm_loadu_si128(&v126);
    v152 = v129;
    v151 = v128;
    v150 = v127;
    v149 = v13;
    nullsub_1();
    v14 = (__m128i *)sub_140001650(24, 1);
    if ( !v14 )
      sub_141733E1B(1, 24);
    v15 = v14;
    *v14 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
    v14[1].m128i_i64[0] = 0x7372656469766F72LL;
    nullsub_1();
    v16 = (_DWORD *)sub_140001650(7, 1);
    v164 = (__int64)v15;
    if ( !v16 )
      sub_141733E1B(1, 7);
    *(_DWORD *)((char *)v16 + 3) = 1735289198;
    v158 = v16;
    *v16 = 1852989815;
    nullsub_1();
    v17 = sub_140001650(33, 1);
    if ( !v17 )
      sub_141733E1B(1, 33);
    *(_OWORD *)(v17 + 16) = xmmword_141819195;
    *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)&xmmword_141819185);
    v160 = v17;
    *(_BYTE *)(v17 + 32) = -107;
    v140.m128i_i64[0] = 0;
    v140.m128i_i64[1] = 1;
    v141 = 0;
    v135.m128i_i64[0] = 1610612768;
    v134.m128i_i64[0] = (__int64)&v140;
    v134.m128i_i64[1] = (__int64)&off_141819558;
    if ( (unsigned __int8)sub_1406A4FE0(&v149, &v134) )
      sub_141734130(
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)v166,
        (unsigned int)&unk_1418104B8,
        (__int64)&off_14181A728);
    *(_QWORD *)(a1 + 88) = v141;
    *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v140);
    *(_QWORD *)a1 = 24;
    *(_QWORD *)(a1 + 8) = v164;
    *(_QWORD *)(a1 + 16) = 24;
    *(_QWORD *)(a1 + 24) = 7;
    *(_QWORD *)(a1 + 32) = v158;
    *(_QWORD *)(a1 + 40) = 7;
    *(_QWORD *)(a1 + 48) = 33;
    *(_QWORD *)(a1 + 56) = v160;
    *(_QWORD *)(a1 + 64) = 33;
    *(_BYTE *)(a1 + 96) = 0;
    return sub_1409ADDE0(&v126);
  }
  v139 = v127.m128i_i64[1];
  v138 = _mm_loadu_si128((const __m128i *)&v126.m128i_u64[1]);
  sub_140A63D80((unsigned int)&v140, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), a3, a4);
  v21 = sub_1414DE170(v20, v19);
  v22 = v21;
  if ( *(_BYTE *)(v21 + 16) == 1 )
  {
    v23 = *(_QWORD *)v21;
    v24 = *(_QWORD *)(v22 + 8);
  }
  else
  {
    v23 = sub_1414F4390();
    *(_QWORD *)v22 = v23;
    *(_QWORD *)(v22 + 8) = v24;
    *(_BYTE *)(v22 + 16) = 1;
  }
  *(_QWORD *)v22 = v23 + 1;
  v25 = _mm_loadu_si128((const __m128i *)&xmmword_14180F3D0);
  v135 = v25;
  v26 = _mm_loadu_si128((const __m128i *)&off_14180F3C0);
  v134 = v26;
  v136 = v23;
  v137 = v24;
  v27 = sub_1414DE170(v23 + 1, v24);
  v28 = v27;
  if ( *(_BYTE *)(v27 + 16) == 1 )
  {
    v29 = *(_OWORD *)v27;
  }
  else
  {
    *(_QWORD *)&v29 = sub_1414F4390();
    *(_OWORD *)v28 = v29;
    *(_BYTE *)(v28 + 16) = 1;
  }
  *(_QWORD *)v28 = v29 + 1;
  v127 = v25;
  v126 = v26;
  v128 = v29;
  v144 = 0;
  v30 = v138.m128i_i64[1];
  v158 = (_DWORD *)v139;
  v31 = v138.m128i_i64[1] + 192 * v139;
  v155 = v142;
  v164 = v140.m128i_i64[1];
  v161 = (const __m128i *)v140.m128i_i64[0];
  v162 = 0;
  v160 = v138.m128i_i64[1];
  while ( v30 != v31 )
  {
    v32 = v30;
    v30 += 192;
    if ( *(_QWORD *)(v32 + 80) != -1 )
    {
      v33.m128i_i64[0] = *(_QWORD *)(v32 + 96);
      if ( v33.m128i_i64[0] < 0 )
      {
        v38 = 0;
LABEL_75:
        sub_141733E1B(v38, v33.m128i_i64[0]);
      }
      if ( v33.m128i_i64[0] )
      {
        v34 = a1;
        v35 = v31;
        v36 = *(_QWORD *)(v32 + 88);
        v37 = v32;
        nullsub_1();
        v38 = 1;
        v39 = sub_140001650(v33.m128i_i64[0], 1);
        if ( !v39 )
          goto LABEL_75;
        v33.m128i_i64[1] = v39;
        sub_1416F15C0(v39, v36, v33.m128i_i64[0]);
        v31 = v35;
        v30 = v37 + 192;
        v32 = v37;
        a1 = v34;
      }
      else
      {
        v33.m128i_i64[1] = 1;
      }
      v40 = *(_BYTE *)(v32 + 104);
      v149 = v33;
      v150.m128i_i64[0] = v33.m128i_i64[0];
      v150.m128i_i8[8] = v40;
      if ( !(unsigned __int8)sub_1402E29B0(&v134, &v149) )
      {
        v41 = *(_QWORD *)(v32 + 88);
        v42 = *(_QWORD *)(v32 + 96);
        sub_1414F3BB0(&v149, v41, v42);
        if ( v149.m128i_i32[0] == 2 )
        {
          sub_14049AA50(v149.m128i_i64[1]);
        }
        else
        {
          v144 = ++v162;
          sub_1409C4FC0(&v149, a5, v41, v42);
          if ( v149.m128i_i64[0] < 0 )
          {
            if ( !__OFSUB__(-v149.m128i_i64[0], 1) && v149.m128i_i64[1] )
              sub_140001660(v150.m128i_i64[0], v149.m128i_i64[1], 1);
          }
          else
          {
            v165 = (_BYTE *)v149.m128i_i64[1];
            v156 = v149.m128i_i64[0];
            v159 = v150.m128i_i64[1];
            v43 = v150.m128i_i64[0];
            v157 = *((_QWORD *)&v151 + 1);
            v163 = (_BYTE *)v151;
            if ( v155 )
            {
              v44 = v150.m128i_i64[0];
              v45 = sub_14039A9F0(v143, v165);
              v46 = _mm_cvtsi32_si128(v45 >> 57);
              v47 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v46, v46), 0), 68);
              for ( i = 0; ; i += 16 )
              {
                v49 = v164 & v45;
                HIDWORD(_RAX) = HIDWORD(v161);
                v51 = _mm_loadu_si128((const __m128i *)((char *)v161 + v49));
                _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v51, v47));
                if ( _EDI )
                  break;
LABEL_41:
                v43 = v44;
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v51, (__m128i)-1LL)) )
                  goto LABEL_43;
                v45 = i + v49 + 16;
              }
              v148 = v49;
              v125 = i;
              while ( 1 )
              {
                __asm { tzcnt   eax, edi }
                v53 = -3LL * (v164 & (v49 + _RAX));
                if ( v44 == v161->m128i_i64[v53 - 1] && !(unsigned int)sub_1416F1C50(v165, v161[-1].m128i_i64[v53], v44) )
                  break;
                _RAX = (unsigned int)(_EDI - 1);
                LOWORD(_RAX) = _EDI & (_EDI - 1);
                _EDI = _RAX;
                v49 = v148;
                i = v125;
                if ( !(_WORD)_RAX )
                  goto LABEL_41;
              }
            }
            else
            {
LABEL_43:
              if ( v43 != 6
                || (*v165 | (unsigned __int8)(32 * ((unsigned __int8)(*v165 - 65) < 0x1Au))) != 111
                || (v165[1] | (unsigned __int8)(32 * ((unsigned __int8)(v165[1] - 65) < 0x1Au))) != 112
                || (v165[2] | (unsigned __int8)(32 * ((unsigned __int8)(v165[2] - 65) < 0x1Au))) != 101
                || (v165[3] | (unsigned __int8)(32 * ((unsigned __int8)(v165[3] - 65) < 0x1Au))) != 110
                || (v165[4] | (unsigned __int8)(32 * ((unsigned __int8)(v165[4] - 65) < 0x1Au))) != 97
                || (v165[5] | (unsigned __int8)(32 * ((unsigned __int8)(v165[5] - 65) < 0x1Au))) != 105 )
              {
LABEL_69:
                sub_1415099A0(&v145, v32 + 32);
                sub_1402E1680(&v126, &v145);
                goto LABEL_70;
              }
            }
            if ( v155 )
            {
              v54 = sub_14039A9F0(v143, v163);
              v55 = _mm_cvtsi32_si128(v54 >> 57);
              v56 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v55, v55), 0), 68);
              for ( j = 0; ; j += 16LL )
              {
                v58 = v164 & v54;
                HIDWORD(_RAX) = HIDWORD(v161);
                v60 = _mm_loadu_si128((const __m128i *)((char *)v161 + v58));
                _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v60, v56));
                if ( _EDI )
                  break;
LABEL_57:
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v60, (__m128i)-1LL)) )
                  goto LABEL_62;
                v54 = j + v58 + 16;
              }
              v148 = j;
              while ( 1 )
              {
                __asm { tzcnt   eax, edi }
                v62 = v58;
                v63 = -3LL * (v164 & (v58 + _RAX));
                if ( v157 == v161->m128i_i64[v63 - 1]
                  && !(unsigned int)sub_1416F1C50(v163, v161[-1].m128i_i64[v63], v157) )
                {
                  break;
                }
                _RAX = (unsigned int)(_EDI - 1);
                LOWORD(_RAX) = _EDI & (_EDI - 1);
                _EDI = _RAX;
                v58 = v62;
                j = v148;
                if ( !(_WORD)_RAX )
                  goto LABEL_57;
              }
            }
            else
            {
LABEL_62:
              if ( v157 != 6
                || (*v163 | (unsigned __int8)(32 * ((unsigned __int8)(*v163 - 65) < 0x1Au))) != 111
                || (v163[1] | (unsigned __int8)(32 * ((unsigned __int8)(v163[1] - 65) < 0x1Au))) != 112
                || (v163[2] | (unsigned __int8)(32 * ((unsigned __int8)(v163[2] - 65) < 0x1Au))) != 101
                || (v163[3] | (unsigned __int8)(32 * ((unsigned __int8)(v163[3] - 65) < 0x1Au))) != 110
                || (v163[4] | (unsigned __int8)(32 * ((unsigned __int8)(v163[4] - 65) < 0x1Au))) != 97
                || (v163[5] | (unsigned __int8)(32 * ((unsigned __int8)(v163[5] - 65) < 0x1Au))) != 105 )
              {
                goto LABEL_69;
              }
            }
LABEL_70:
            if ( v156 )
              sub_140001660(v165, v156, 1);
            if ( v159 )
              sub_140001660(v163, v159, 1);
          }
        }
      }
    }
  }
  if ( v127.m128i_i64[1] )
  {
    v64 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128((const __m128i *)v126.m128i_i64[0]));
    v149.m128i_i64[0] = v126.m128i_i64[0];
    v149.m128i_i64[1] = v126.m128i_i64[0] + 16;
    v150.m128i_i64[0] = v126.m128i_i64[0] + v126.m128i_i64[1] + 1;
    v150.m128i_i16[4] = v64;
    *(_QWORD *)&v151 = v127.m128i_i64[1];
    sub_1402F5FF0(&v122, &v149);
    v65 = v123;
    v66 = v124;
    if ( v124 >= 2 )
    {
      v166[1] = 1;
      if ( v124 >= 0x15 )
        sub_1413B3B20(v123, v124, v166);
      else
        sub_14005AA90(v123, v124, 1, v166);
      v67 = v122;
      v68 = v65 + 24 * v66;
      v69 = v65 + 24;
      if ( v65 + 24 != v68 )
        goto LABEL_80;
    }
    else
    {
      v67 = v122;
      v68 = v123 + 24 * v124;
      v69 = v123;
      if ( v124 )
      {
        v69 = v123 + 24;
        if ( v123 + 24 != v68 )
        {
LABEL_80:
          v69 = v65 + 48;
          if ( v65 + 48 != v68 )
          {
            v69 = v65 + 72;
            if ( v65 + 72 != v68 )
            {
              v69 = v65 + 120;
              if ( v65 + 96 == v68 )
                v69 = v65 + 96;
            }
          }
        }
      }
    }
    if ( v68 != v69 )
    {
      v70 = (v68 - v69) / 0x18uLL;
      v71 = (_QWORD *)(v69 + 8);
      do
      {
        v72 = *(v71 - 1);
        if ( v72 )
          sub_140001660(*v71, v72, 1);
        v71 += 3;
        --v70;
      }
      while ( v70 );
    }
    v73 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v69 - v65) >> 3);
    v145 = v67;
    v146 = (__int64 (__fastcall *)())v65;
    v147 = v73;
    sub_1408AE040(
      (unsigned int)&v149,
      v65,
      -1431655765 * ((unsigned __int64)(v69 - v65) >> 3),
      (unsigned int)&unk_14181641D,
      3);
    v133 = v150.m128i_i64[0];
    v132 = _mm_loadu_si128(&v149);
    v74 = v69 == v65;
    v75 = v164;
    v76 = v155;
    if ( !v74 )
    {
      v77 = (_QWORD *)(v65 + 8);
      do
      {
        v78 = *(v77 - 1);
        if ( v78 )
          sub_140001660(*v77, v78, 1);
        v77 += 3;
        --v73;
      }
      while ( v73 );
    }
    if ( v67 )
      sub_140001660(v65, 24LL * (_QWORD)v67, 8);
    v121 = v127.m128i_i64[1];
    v79 = 0;
    v80 = v127.m128i_i64[1] < 0xBuLL;
    v81 = aError_46;
    if ( v127.m128i_i64[1] < 0xBuLL )
      v81 = (const char *)&unk_14181411D;
    nullsub_1();
    v82 = (__m128i *)sub_140001650(24, 1);
    if ( !v82 )
      sub_141733E1B(1, 24);
    v83 = v82;
    LOBYTE(v79) = v80;
    v84 = 2 * v79 + 5;
    *v82 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
    v82[1].m128i_i64[0] = 0x7372656469766F72LL;
    nullsub_1();
    v85 = sub_140001650(v84, 1);
    v162 = (__int64)v83;
    if ( !v85 )
      sub_141733E1B(1, v84);
    v163 = (_BYTE *)v85;
    v165 = (_BYTE *)v84;
    sub_1416F15C0(v85, v81, v84);
    v145 = &v121;
    v146 = sub_1415199C0;
    sub_141509590(&v149, &unk_14181909E, &v145);
    v156 = v149.m128i_i64[1];
    v159 = v149.m128i_i64[0];
    v86 = v150.m128i_i64[0];
    v149.m128i_i64[0] = (__int64)&v132;
    v149.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_141509590(&v119, &unk_1418190C6, &v149);
    *(_QWORD *)(a1 + 88) = v120;
    *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v119);
    *(_QWORD *)a1 = 24;
    *(_QWORD *)(a1 + 8) = v162;
    *(_QWORD *)(a1 + 16) = 24;
    _RAX = (__int64)v165;
    *(_QWORD *)(a1 + 24) = v165;
    *(_QWORD *)(a1 + 32) = v163;
    *(_QWORD *)(a1 + 40) = _RAX;
    *(_QWORD *)(a1 + 48) = v159;
    HIDWORD(_RAX) = HIDWORD(v156);
    *(_QWORD *)(a1 + 56) = v156;
    *(_QWORD *)(a1 + 64) = v86;
    *(_BYTE *)(a1 + 96) = 1;
    v88 = v132.m128i_i64[0];
    if ( v132.m128i_i64[0] )
    {
      v89 = (_BYTE *)v132.m128i_i64[1];
      goto LABEL_104;
    }
  }
  else
  {
    v145 = &v144;
    v146 = sub_1415199C0;
    sub_141509590(&v149, &unk_141819072, &v145);
    v165 = (_BYTE *)v149.m128i_i64[1];
    v162 = v149.m128i_i64[0];
    HIDWORD(_RAX) = (unsigned __int64)sub_140A82290(
                                        a1,
                                        (unsigned int)aRolloutOrphanP,
                                        24,
                                        v149.m128i_i32[2],
                                        v150.m128i_i64[0]) >> 32;
    v88 = v162;
    v75 = v164;
    v76 = v155;
    if ( v162 )
    {
      v89 = v165;
LABEL_104:
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v89, v88, 1) >> 32;
    }
  }
  v90 = v126.m128i_i64[1];
  if ( v126.m128i_i64[1] )
  {
    v91 = v127.m128i_i64[1];
    if ( v127.m128i_i64[1] )
    {
      v92 = v126.m128i_i64[0];
      v93 = (const __m128i *)(v126.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v126.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v93);
            v92 -= 384;
            ++v93;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v96 = -3 * _RAX;
        v97 = *(_QWORD *)(v92 + 8 * v96 - 24);
        if ( v97 )
          sub_140001660(*(_QWORD *)(v92 + 8 * v96 - 16), v97, 1);
        --v91;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v91 );
    }
    _RAX = (24 * v90 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v98 = _RAX + v90 + 17;
    if ( v98 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v126.m128i_i64[0] - _RAX, v98, 16) >> 32;
  }
  v99 = v134.m128i_i64[1];
  if ( v134.m128i_i64[1] )
  {
    v100 = v135.m128i_i64[1];
    if ( v135.m128i_i64[1] )
    {
      v101 = v134.m128i_i64[0];
      v102 = (const __m128i *)(v134.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v134.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v104 = _mm_load_si128(v102);
            v101 -= 512;
            ++v102;
            _R15D = _mm_movemask_epi8(v104) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v106 = v101 - (unsigned int)(32 * _ECX);
        v107 = *(_QWORD *)(v106 - 32);
        if ( v107 )
          sub_140001660(*(_QWORD *)(v106 - 24), v107, 1);
        --v100;
        _R15D &= _R15D - 1;
      }
      while ( v100 );
    }
    _RAX = 32 * v99;
    v108 = 33 * v99 + 49;
    if ( v108 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v134.m128i_i64[0] - _RAX - 32, v108, 16) >> 32;
  }
  if ( v75 )
  {
    if ( v76 )
    {
      v109 = v161;
      v110 = v161 + 1;
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v161));
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v112 = _mm_load_si128(v110);
            v109 -= 24;
            ++v110;
            _EBX = _mm_movemask_epi8(v112) ^ 0xFFFF;
          }
          while ( !_EBX );
        }
        __asm { tzcnt   eax, ebx }
        v113 = -3 * _RAX;
        v114 = *((_QWORD *)&v109[-1] + v113 - 1);
        if ( v114 )
          sub_140001660(v109[-1].m128i_i64[v113], v114, 1);
        --v76;
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
      }
      while ( v76 );
    }
    v115 = (24 * v75 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v116 = v115 + v75 + 17;
    if ( v116 )
      sub_140001660((char *)v161 - v115, v116, 16);
  }
  v164 = 0;
  v117 = v160;
  while ( v158 != (_DWORD *)v164 )
  {
    ++v164;
    v118 = v117 + 192;
    sub_140297340();
    v117 = v118;
  }
  result = v138.m128i_i64[0];
  if ( v138.m128i_i64[0] )
    return sub_140001660(v160, 192 * v138.m128i_i64[0], 8);
  return result;
}
