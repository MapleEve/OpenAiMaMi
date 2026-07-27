// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140788ae0
// name: check_rollout_orphan_providers
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall check_rollout_orphan_providers(__m128i *a1, __int64 a2, const __m128i *a3, char a4)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm6
  __m128i v28; // xmm7
  __int64 v29; // rax
  __int64 v30; // rsi
  __int128 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rsi
  __m128i *v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  __m128i *v38; // rbx
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdi
  __int8 v44; // al
  __int64 v45; // r13
  __int64 v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // r12
  unsigned __int64 v51; // rcx
  __m128i v52; // xmm0
  __m128i v53; // xmm7
  __int64 i; // rdx
  unsigned __int64 v55; // rcx
  __m128i v57; // xmm8
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  unsigned __int64 v61; // r12
  __m128i v62; // xmm0
  __m128i v63; // xmm7
  __int64 j; // rsi
  unsigned __int64 v65; // r12
  __m128i v67; // xmm8
  __int64 v69; // rax
  int v70; // eax
  __int16 v71; // r8
  _QWORD *v72; // r14
  unsigned __int64 v73; // r15
  __int64 (__fastcall *v74)(); // r14
  __int64 v75; // r15
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // r13
  _QWORD *v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rsi
  bool v82; // di
  char *v83; // r14
  __m128i *v84; // rax
  __int64 v85; // rcx
  __m128i *v86; // r15
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rsi
  __m128i *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // rdi
  const __m128i *v96; // r14
  __m128i si128; // xmm0
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // rbx
  __int64 v103; // rsi
  __int64 v104; // rdi
  const __m128i *v105; // r14
  __m128i v107; // xmm0
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rbx
  const __m128i *v112; // rdi
  const __m128i *v113; // rsi
  __m128i v115; // xmm0
  __int64 v116; // rax
  __int64 v117; // rdx
  unsigned __int64 v118; // rax
  __int64 v119; // r12
  __m128i v120; // [rsp+30h] [rbp-50h] BYREF
  __int64 v121; // [rsp+40h] [rbp-40h]
  __int64 v122; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v123; // [rsp+50h] [rbp-30h]
  unsigned __int64 v124; // [rsp+58h] [rbp-28h]
  __int64 v125; // [rsp+60h] [rbp-20h] BYREF
  __int64 v126; // [rsp+68h] [rbp-18h]
  __int64 v127; // [rsp+70h] [rbp-10h]
  __int64 v128; // [rsp+78h] [rbp-8h]
  __m128i v129; // [rsp+80h] [rbp+0h] BYREF
  __m128i v130; // [rsp+90h] [rbp+10h]
  __int128 v131; // [rsp+A0h] [rbp+20h]
  __int128 v132; // [rsp+B0h] [rbp+30h]
  __int128 v133; // [rsp+C0h] [rbp+40h]
  __int128 v134; // [rsp+D0h] [rbp+50h]
  __m128i v135; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v136; // [rsp+F0h] [rbp+70h]
  __m128i v137; // [rsp+100h] [rbp+80h] BYREF
  __int64 v138; // [rsp+110h] [rbp+90h]
  __int64 v139; // [rsp+118h] [rbp+98h]
  _BYTE v140[16]; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v141; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v142; // [rsp+140h] [rbp+C0h]
  __int64 v143; // [rsp+150h] [rbp+D0h]
  __int64 v144; // [rsp+158h] [rbp+D8h]
  __m128i v145; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v146; // [rsp+170h] [rbp+F0h]
  __int64 v147; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v148; // [rsp+180h] [rbp+100h]
  __int64 *v149; // [rsp+188h] [rbp+108h] BYREF
  __int64 (__fastcall *v150)(); // [rsp+190h] [rbp+110h]
  __int64 v151; // [rsp+198h] [rbp+118h]
  __m128i v152; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v153; // [rsp+1B0h] [rbp+130h]
  __int128 v154; // [rsp+1C0h] [rbp+140h]
  __int128 v155; // [rsp+1D0h] [rbp+150h]
  __int128 v156; // [rsp+1E0h] [rbp+160h]
  __int128 v157; // [rsp+1F0h] [rbp+170h]
  __int64 v158; // [rsp+208h] [rbp+188h]
  __int64 v159; // [rsp+210h] [rbp+190h]
  __int64 v160; // [rsp+218h] [rbp+198h]
  __int64 v161; // [rsp+220h] [rbp+1A0h]
  __int64 v162; // [rsp+228h] [rbp+1A8h]
  const __m128i *v163; // [rsp+230h] [rbp+1B0h]
  __int64 v164; // [rsp+238h] [rbp+1B8h]
  _BYTE *v165; // [rsp+240h] [rbp+1C0h]
  __m128i *v166; // [rsp+248h] [rbp+1C8h]
  char v167; // [rsp+256h] [rbp+1D6h] BYREF
  char v168; // [rsp+257h] [rbp+1D7h]
  __int64 v169; // [rsp+258h] [rbp+1D8h]

  v169 = -2;
  sub_140712830(&v152);
  if ( !v153.m128i_i64[0] )
  {
    if ( v152.m128i_i64[0] )
      sub_140001660(v152.m128i_i64[1], 32 * v152.m128i_i64[0], 8);
    return sub_140797030((_DWORD)a1, (unsigned int)aRolloutOrphanP, 24, (unsigned int)&unk_14178EB7C, 47);
  }
  v8 = v152.m128i_i64[1];
  v9 = 32 * v153.m128i_i64[0];
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(v8 + v10);
    if ( v11 )
      sub_140001660(*(_QWORD *)(v8 + v10 + 8), v11, 1);
    v10 += 32;
  }
  while ( v9 != v10 );
  if ( v152.m128i_i64[0] )
    sub_140001660(v8, 32 * v152.m128i_i64[0], 8);
  collect_diagnostic_main_threads((__int64)&v129);
  if ( v129.m128i_i32[0] != -1 )
  {
    v157 = v134;
    v156 = v133;
    v13 = _mm_loadu_si128(&v129);
    v155 = v132;
    v154 = v131;
    v153 = v130;
    v152 = v13;
    nullsub_1(v12);
    v14 = (__m128i *)sub_140001650(24, 1);
    if ( !v14 )
      sub_1416C2D4B(1, 24);
    v16 = v14;
    *v14 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
    v14[1].m128i_i64[0] = 0x7372656469766F72LL;
    nullsub_1(v15);
    v17 = (_DWORD *)sub_140001650(7, 1);
    v166 = v16;
    if ( !v17 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v17 + 3) = 1735289198;
    v159 = (__int64)v17;
    *v17 = 1852989815;
    nullsub_1(v18);
    v19 = sub_140001650(33, 1);
    if ( !v19 )
      sub_1416C2D4B(1, 33);
    *(_OWORD *)(v19 + 16) = xmmword_14178EC76;
    *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)&xmmword_14178EC66);
    v160 = v19;
    *(_BYTE *)(v19 + 32) = -107;
    v137.m128i_i64[0] = 0;
    v137.m128i_i64[1] = 1;
    v138 = 0;
    v142.m128i_i64[0] = 1610612768;
    v141.m128i_i64[0] = (__int64)&v137;
    v141.m128i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&v152, &v141) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v167,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    a1[5].m128i_i64[1] = v138;
    *(__m128i *)((char *)a1 + 72) = _mm_loadu_si128(&v137);
    a1->m128i_i64[0] = 24;
    a1->m128i_i64[1] = (__int64)v166;
    a1[1].m128i_i64[0] = 24;
    a1[1].m128i_i64[1] = 7;
    a1[2].m128i_i64[0] = v159;
    a1[2].m128i_i64[1] = 7;
    a1[3].m128i_i64[0] = 33;
    a1[3].m128i_i64[1] = v160;
    a1[4].m128i_i64[0] = 33;
    a1[6].m128i_i8[0] = 0;
    return sub_1406CDA20(&v129);
  }
  v146 = v130.m128i_i64[1];
  v145 = _mm_loadu_si128((const __m128i *)&v129.m128i_u64[1]);
  sub_1407883E0(&v137, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), a3, a4);
  v23 = sub_141470CD0(v22, v21);
  v24 = v23;
  if ( *(_BYTE *)(v23 + 16) == 1 )
  {
    v25 = *(_QWORD *)v23;
    v26 = *(_QWORD *)(v24 + 8);
  }
  else
  {
    v25 = sub_141486EF0();
    *(_QWORD *)v24 = v25;
    *(_QWORD *)(v24 + 8) = v26;
    *(_BYTE *)(v24 + 16) = 1;
  }
  *(_QWORD *)v24 = v25 + 1;
  v27 = _mm_loadu_si128((const __m128i *)&off_141786750 + 1);
  v142 = v27;
  v28 = _mm_loadu_si128((const __m128i *)&off_141786750);
  v141 = v28;
  v143 = v25;
  v144 = v26;
  v29 = sub_141470CD0(v25 + 1, v26);
  v30 = v29;
  if ( *(_BYTE *)(v29 + 16) == 1 )
  {
    v31 = *(_OWORD *)v29;
  }
  else
  {
    *(_QWORD *)&v31 = sub_141486EF0();
    *(_OWORD *)v30 = v31;
    *(_BYTE *)(v30 + 16) = 1;
  }
  v32 = v31 + 1;
  *(_QWORD *)v30 = v31 + 1;
  v130 = v27;
  v129 = v28;
  v131 = v31;
  v147 = 0;
  v33 = v145.m128i_i64[1];
  v34 = v145.m128i_i64[1] + 112 * v146;
  v160 = v139;
  v159 = v137.m128i_i64[1];
  v163 = (const __m128i *)v137.m128i_i64[0];
  v35 = &v141;
  v164 = 0;
  v148 = v145.m128i_i64[1];
  while ( v33 != v34 )
  {
    v36 = v33;
    v33 += 112;
    if ( *(_QWORD *)(v36 + 80) != -1 )
    {
      v37 = *(_QWORD *)(v36 + 96);
      if ( v37 < 0 )
      {
        v41 = 0;
LABEL_73:
        sub_1416C2D4B(v41, v37);
      }
      if ( v37 )
      {
        v166 = a1;
        v38 = v35;
        v39 = v34;
        v40 = *(_QWORD *)(v36 + 88);
        nullsub_1(v32);
        v41 = 1;
        v42 = sub_140001650(v37, 1);
        if ( !v42 )
          goto LABEL_73;
        v43 = v42;
        sub_141684120(v42, v40, v37);
        v34 = v39;
        v35 = v38;
        a1 = v166;
        v33 = v36 + 112;
      }
      else
      {
        v43 = 1;
      }
      v44 = *(_BYTE *)(v36 + 104);
      v152.m128i_i64[0] = v37;
      v152.m128i_i64[1] = v43;
      v153.m128i_i64[0] = v37;
      v153.m128i_i8[8] = v44;
      if ( !(unsigned __int8)sub_140474DC0(v35, &v152) )
      {
        v45 = *(_QWORD *)(v36 + 88);
        v46 = *(_QWORD *)(v36 + 96);
        sub_141486710(&v152, v45, v46);
        if ( v152.m128i_i32[0] == 2 )
        {
          sub_1401DD260(v152.m128i_i64[1]);
        }
        else
        {
          v147 = ++v164;
          sub_1404C0390(&v152, v45, v46);
          if ( v152.m128i_i32[0] == -1 )
          {
            if ( v152.m128i_i64[1] != -1 )
            {
              v162 = v152.m128i_i64[1];
              v127 = v33;
              v126 = v34;
              v47 = v153.m128i_i64[1];
              v166 = (__m128i *)v153.m128i_i64[0];
              v165 = *((_BYTE **)&v154 + 1);
              v161 = v154;
              v158 = v155;
              v48 = v160;
              v49 = v159;
              if ( v160 )
              {
                v50 = v153.m128i_i64[1];
                v51 = sub_1403795A0(v140, v166, v153.m128i_i64[1]);
                v52 = _mm_cvtsi32_si128(v51 >> 57);
                v53 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v52, v52), 0), 68);
                for ( i = 0; ; i += 16 )
                {
                  v55 = v49 & v51;
                  HIDWORD(_RAX) = HIDWORD(v163);
                  v57 = _mm_loadu_si128((const __m128i *)((char *)v163 + v55));
                  _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v57, v53));
                  if ( _EDI )
                    break;
LABEL_43:
                  v47 = v50;
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v57, (__m128i)-1LL)) )
                    goto LABEL_45;
                  v51 = i + v55 + 16;
                }
                v128 = i;
                while ( 1 )
                {
                  __asm { tzcnt   eax, edi }
                  v59 = v55;
                  v60 = -3LL * (v49 & (v55 + _RAX));
                  if ( v50 == v163->m128i_i64[v60 - 1]
                    && !(unsigned int)sub_1416847B0(v166, v163[-1].m128i_i64[v60], v50) )
                  {
                    break;
                  }
                  _RAX = (unsigned int)(_EDI - 1);
                  LOWORD(_RAX) = _EDI & (_EDI - 1);
                  _EDI = _RAX;
                  v55 = v59;
                  i = v128;
                  if ( !(_WORD)_RAX )
                    goto LABEL_43;
                }
              }
              else
              {
LABEL_45:
                if ( v47 != 6
                  || (v166->m128i_i8[0] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[0] - 65) < 0x1Au))) != 111
                  || (v166->m128i_i8[1] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[1] - 65) < 0x1Au))) != 112
                  || (v166->m128i_i8[2] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[2] - 65) < 0x1Au))) != 101
                  || (v166->m128i_i8[3] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[3] - 65) < 0x1Au))) != 110
                  || (v166->m128i_i8[4] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[4] - 65) < 0x1Au))) != 97
                  || (v166->m128i_i8[5] | (unsigned __int8)(32 * ((unsigned __int8)(v166->m128i_i8[5] - 65) < 0x1Au))) != 105 )
                {
LABEL_67:
                  sub_14149C500(&v149, v36 + 32);
                  sub_140474440(&v129, &v149);
                  goto LABEL_68;
                }
              }
              if ( v48 )
              {
                v61 = sub_1403795A0(v140, v165, v158);
                v62 = _mm_cvtsi32_si128(v61 >> 57);
                v63 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v62, v62), 0), 68);
                for ( j = 0; ; j += 16 )
                {
                  v65 = v49 & v61;
                  HIDWORD(_RAX) = HIDWORD(v163);
                  v67 = _mm_loadu_si128((const __m128i *)((char *)v163 + v65));
                  _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v67, v63));
                  if ( _EDI )
                    break;
LABEL_58:
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v67, (__m128i)-1LL)) )
                    goto LABEL_60;
                  v61 = j + v65 + 16;
                }
                while ( 1 )
                {
                  __asm { tzcnt   eax, edi }
                  v69 = -3LL * (v49 & (v65 + _RAX));
                  if ( v158 == v163->m128i_i64[v69 - 1]
                    && !(unsigned int)sub_1416847B0(v165, v163[-1].m128i_i64[v69], v158) )
                  {
                    break;
                  }
                  _RAX = (unsigned int)(_EDI - 1);
                  LOWORD(_RAX) = _EDI & (_EDI - 1);
                  _EDI = _RAX;
                  if ( !(_WORD)_RAX )
                    goto LABEL_58;
                }
              }
              else
              {
LABEL_60:
                if ( v158 != 6 )
                  goto LABEL_67;
                if ( (*v165 | (unsigned __int8)(32 * ((unsigned __int8)(*v165 - 65) < 0x1Au))) != 111 )
                  goto LABEL_67;
                if ( (v165[1] | (unsigned __int8)(32 * ((unsigned __int8)(v165[1] - 65) < 0x1Au))) != 112 )
                  goto LABEL_67;
                if ( (v165[2] | (unsigned __int8)(32 * ((unsigned __int8)(v165[2] - 65) < 0x1Au))) != 101 )
                  goto LABEL_67;
                if ( (v165[3] | (unsigned __int8)(32 * ((unsigned __int8)(v165[3] - 65) < 0x1Au))) != 110 )
                  goto LABEL_67;
                if ( (v165[4] | (unsigned __int8)(32 * ((unsigned __int8)(v165[4] - 65) < 0x1Au))) != 97 )
                  goto LABEL_67;
                v70 = (unsigned __int8)v165[5];
                v32 = (unsigned int)(v70 - 65);
                LOBYTE(v32) = v70 | (32 * ((unsigned __int8)(v70 - 65) < 0x1Au));
                if ( (_BYTE)v32 != 105 )
                  goto LABEL_67;
              }
LABEL_68:
              if ( v161 )
                sub_140001660(v165, v161, 1);
              v34 = v126;
              v35 = &v141;
              v33 = v127;
              if ( v162 )
                sub_140001660(v166, v162, 1);
            }
          }
          else
          {
            sub_1406CDA20(&v152);
          }
        }
      }
    }
  }
  if ( v130.m128i_i64[1] )
  {
    v71 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128((const __m128i *)v129.m128i_i64[0]));
    v152.m128i_i64[0] = v129.m128i_i64[0];
    v152.m128i_i64[1] = v129.m128i_i64[0] + 16;
    v153.m128i_i64[0] = v129.m128i_i64[0] + v129.m128i_i64[1] + 1;
    v153.m128i_i16[4] = v71;
    *(_QWORD *)&v154 = v130.m128i_i64[1];
    sub_140313E80(&v122, &v152);
    v72 = v123;
    v73 = v124;
    if ( v124 >= 2 )
    {
      v168 = 1;
      if ( v124 >= 0x15 )
        sub_141346500((__int64)v123, v124, (__int64)&v167);
      else
        sub_140555D00(v123, v124, 1);
    }
    v152.m128i_i64[0] = (__int64)v72;
    v152.m128i_i64[1] = (__int64)v72;
    v153.m128i_i64[0] = v122;
    v153.m128i_i64[1] = (__int64)&v72[3 * v73];
    *(_QWORD *)&v154 = 5;
    v168 = 0;
    sub_1402CB680(&v149, v152.m128i_i64);
    v74 = v150;
    v75 = v151;
    sub_140440300((unsigned int)&v152, (_DWORD)v150, v151, (unsigned int)&unk_141789BA4, 3);
    v136 = v153.m128i_i64[0];
    v135 = _mm_loadu_si128(&v152);
    v77 = v159;
    v78 = v160;
    if ( v75 )
    {
      v79 = (_QWORD *)((char *)v74 + 8);
      do
      {
        v80 = *(v79 - 1);
        if ( v80 )
          sub_140001660(*v79, v80, 1);
        v79 += 3;
        --v75;
      }
      while ( v75 );
    }
    if ( v149 )
      sub_140001660(v74, 24LL * (_QWORD)v149, 8);
    v125 = v130.m128i_i64[1];
    v81 = 0;
    v82 = v130.m128i_i64[1] < 0xBuLL;
    v83 = &aWarningerror[7];
    if ( v130.m128i_i64[1] < 0xBuLL )
      v83 = aWarningerror;
    nullsub_1(v76);
    v84 = (__m128i *)sub_140001650(24, 1);
    if ( !v84 )
      sub_1416C2D4B(1, 24);
    v86 = v84;
    LOBYTE(v81) = v82;
    v87 = 2 * v81 + 5;
    *v84 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
    v84[1].m128i_i64[0] = 0x7372656469766F72LL;
    nullsub_1(v85);
    v88 = sub_140001650(v87, 1);
    v166 = v86;
    if ( !v88 )
      sub_1416C2D4B(1, v87);
    v165 = (_BYTE *)v88;
    v164 = v87;
    sub_141684120(v88, v83, v87);
    v149 = &v125;
    v150 = sub_1414AC520;
    sub_14149C0F0(&v152, &unk_14178EBD7, &v149);
    v161 = v152.m128i_i64[1];
    v162 = v152.m128i_i64[0];
    v89 = v153.m128i_i64[0];
    v152.m128i_i64[0] = (__int64)&v135;
    v152.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v120, &unk_14178EBFF, &v152);
    a1[5].m128i_i64[1] = v121;
    *(__m128i *)((char *)a1 + 72) = _mm_loadu_si128(&v120);
    a1->m128i_i64[0] = 24;
    a1->m128i_i64[1] = (__int64)v166;
    a1[1].m128i_i64[0] = 24;
    _RAX = v164;
    a1[1].m128i_i64[1] = v164;
    a1[2].m128i_i64[0] = (__int64)v165;
    a1[2].m128i_i64[1] = _RAX;
    a1[3].m128i_i64[0] = v162;
    HIDWORD(_RAX) = HIDWORD(v161);
    a1[3].m128i_i64[1] = v161;
    a1[4].m128i_i64[0] = v89;
    a1[6].m128i_i8[0] = 1;
    v91 = (__m128i *)v135.m128i_i64[0];
    if ( v135.m128i_i64[0] )
    {
      v92 = v135.m128i_i64[1];
      goto LABEL_91;
    }
  }
  else
  {
    v149 = &v147;
    v150 = sub_1414AC520;
    sub_14149C0F0(&v152, &unk_14178EBAB, &v149);
    v164 = v152.m128i_i64[1];
    v166 = (__m128i *)v152.m128i_i64[0];
    HIDWORD(_RAX) = (unsigned __int64)sub_140797030(
                                        (_DWORD)a1,
                                        (unsigned int)aRolloutOrphanP,
                                        24,
                                        v152.m128i_i32[2],
                                        v153.m128i_i64[0]) >> 32;
    v91 = v166;
    v77 = v159;
    v78 = v160;
    if ( v166 )
    {
      v92 = v164;
LABEL_91:
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v92, v91, 1) >> 32;
    }
  }
  v93 = v129.m128i_i64[1];
  if ( v129.m128i_i64[1] )
  {
    v94 = v130.m128i_i64[1];
    if ( v130.m128i_i64[1] )
    {
      v95 = v129.m128i_i64[0];
      v96 = (const __m128i *)(v129.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v129.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v96);
            v95 -= 384;
            ++v96;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v99 = -3 * _RAX;
        v100 = *(_QWORD *)(v95 + 8 * v99 - 24);
        if ( v100 )
          sub_140001660(*(_QWORD *)(v95 + 8 * v99 - 16), v100, 1);
        --v94;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v94 );
    }
    _RAX = (24 * v93 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v101 = _RAX + v93 + 17;
    if ( v101 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v129.m128i_i64[0] - _RAX, v101, 16) >> 32;
  }
  v102 = v141.m128i_i64[1];
  if ( v141.m128i_i64[1] )
  {
    v103 = v142.m128i_i64[1];
    if ( v142.m128i_i64[1] )
    {
      v104 = v141.m128i_i64[0];
      v105 = (const __m128i *)(v141.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v141.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v107 = _mm_load_si128(v105);
            v104 -= 512;
            ++v105;
            _R15D = _mm_movemask_epi8(v107) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v109 = v104 - (unsigned int)(32 * _ECX);
        v110 = *(_QWORD *)(v109 - 32);
        if ( v110 )
          sub_140001660(*(_QWORD *)(v109 - 24), v110, 1);
        --v103;
        _R15D &= _R15D - 1;
      }
      while ( v103 );
    }
    _RAX = 32 * v102;
    v111 = 33 * v102 + 49;
    if ( v111 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v141.m128i_i64[0] - _RAX - 32, v111, 16) >> 32;
  }
  if ( v77 )
  {
    if ( v78 )
    {
      v112 = v163;
      v113 = v163 + 1;
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v163));
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v115 = _mm_load_si128(v113);
            v112 -= 24;
            ++v113;
            _EBX = _mm_movemask_epi8(v115) ^ 0xFFFF;
          }
          while ( !_EBX );
        }
        __asm { tzcnt   eax, ebx }
        v116 = -3 * _RAX;
        v117 = *((_QWORD *)&v112[-1] + v116 - 1);
        if ( v117 )
          sub_140001660(v112[-1].m128i_i64[v116], v117, 1);
        --v78;
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
      }
      while ( v78 );
    }
    v118 = (24 * v77 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v119 = v118 + v77 + 17;
    if ( v119 )
      sub_140001660((char *)v163 - v118, v119, 16);
  }
  sub_140335260((__int64)&v145);
  result = v145.m128i_i64[0];
  if ( v145.m128i_i64[0] )
    return sub_140001660(v148, 112 * v145.m128i_i64[0], 8);
  return result;
}