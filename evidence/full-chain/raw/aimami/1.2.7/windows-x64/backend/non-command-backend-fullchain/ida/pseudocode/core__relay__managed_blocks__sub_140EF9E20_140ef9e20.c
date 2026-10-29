// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140ef9e20 | name sub_140EF9E20
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EF9E20(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __m128i si128; // xmm6
  __m128i v9; // xmm7
  __m128i v10; // xmm8
  __m128i v11; // xmm9
  __m128i v12; // xmm10
  __m128i v13; // xmm11
  __m128i v14; // xmm12
  __m128i v15; // xmm13
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  const __m128i *v18; // rdi
  __int64 v19; // rbx
  char v20; // r12
  char v21; // al
  __int64 v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  unsigned __int64 v28; // rdx
  char i; // r8
  unsigned __int64 v30; // r9
  int v31; // r8d
  unsigned __int64 v32; // rdx
  int v34; // r9d
  unsigned __int64 v35; // rdx
  signed __int64 v36; // rax
  const __m128i *v37; // rdi
  signed __int64 v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r13
  _BYTE *v44; // r12
  signed __int64 v45; // rdi
  int v46; // eax
  int v47; // ecx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r12
  __int64 v55; // rdi
  __int64 v56; // rdi
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r12
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r12
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // r12
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  unsigned __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rcx
  const __m128i *v77; // r12
  __m128i *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // rdi
  __m128i *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rax
  unsigned __int64 v87; // r8
  __int64 v88; // r12
  __int64 v89; // rdi
  signed __int64 v90; // r13
  __int64 v91; // r8
  __int64 v92; // r9
  char v93; // al
  char v94; // al
  int v95; // edx
  __int64 v96; // rax
  const __m128i *v97; // r12
  __m128i v98; // xmm0
  __int64 v99; // rdi
  __int64 v100; // rax
  __int128 v101; // xmm0
  __m128i v102; // xmm1
  __int64 v103; // r13
  __int64 v104; // rdi
  _QWORD *v105; // r12
  __int64 v106; // rdx
  __m128i v107; // xmm0
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rcx
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  unsigned __int64 v113; // rdx
  __int64 v114; // rdi
  __int64 v115; // rdi
  const __m128i *v116; // rbx
  unsigned __int64 v117; // rdi
  __m128i *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rax
  unsigned __int64 v121; // r8
  const __m128i *v122; // rbx
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // r15
  __int64 v127; // rax
  __int64 v128; // rcx
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  __int64 v131; // rcx
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rbx
  __int64 v135; // r14
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int128 v138; // xmm0
  __m128i v139; // xmm1
  __int64 result; // rax
  __int64 v141; // rsi
  __int64 v142; // rdi
  _QWORD *v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rcx
  unsigned __int64 v147; // [rsp+30h] [rbp-50h]
  char v150; // [rsp+48h] [rbp-38h]
  __int64 v151; // [rsp+50h] [rbp-30h]
  __m128i v152; // [rsp+58h] [rbp-28h] BYREF
  __int64 v153; // [rsp+68h] [rbp-18h]
  __int64 v154; // [rsp+70h] [rbp-10h]
  __int128 v155; // [rsp+78h] [rbp-8h] BYREF
  __m128i v156; // [rsp+88h] [rbp+8h] BYREF
  __int128 v157; // [rsp+98h] [rbp+18h]
  __int64 v158; // [rsp+A8h] [rbp+28h]
  __int64 v159; // [rsp+B0h] [rbp+30h]
  __int64 v160; // [rsp+B8h] [rbp+38h]
  _BYTE v161[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v162[24]; // [rsp+D8h] [rbp+58h]
  _BYTE v163[24]; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v164; // [rsp+108h] [rbp+88h] BYREF
  __int64 v165; // [rsp+118h] [rbp+98h]
  int v166; // [rsp+124h] [rbp+A4h]
  unsigned __int64 v167; // [rsp+128h] [rbp+A8h]
  __int64 v168; // [rsp+130h] [rbp+B0h]
  const __m128i *v169; // [rsp+138h] [rbp+B8h]
  char v170; // [rsp+147h] [rbp+C7h] BYREF
  unsigned __int64 v171; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v172; // [rsp+150h] [rbp+D0h]
  __int64 v173; // [rsp+158h] [rbp+D8h]
  const __m128i *v174; // [rsp+160h] [rbp+E0h]
  __int64 v175; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v176; // [rsp+170h] [rbp+F0h]
  __int64 v177; // [rsp+178h] [rbp+F8h]
  char v178; // [rsp+187h] [rbp+107h]
  __int64 v179; // [rsp+188h] [rbp+108h]

  v179 = -2;
  if ( (a5 & 0x8000000000000000uLL) != 0LL )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v147 = a1;
  if ( a5 )
  {
    nullsub_1(a1);
    v5 = 1;
    v7 = sub_140001650(a5, 1);
    if ( !v7 )
LABEL_3:
      sub_141938D2B(v5, a5);
  }
  else
  {
    v7 = 1;
  }
  v171 = a5;
  v172 = v7;
  v173 = 0;
  *(_QWORD *)&v155 = 0;
  *((_QWORD *)&v155 + 1) = 8;
  v156 = 0;
  v157 = 8u;
  v170 = 2;
  *(_QWORD *)v163 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A555B0);
  v9 = _mm_cvtsi32_si128(0x6E6Fu);
  v10 = _mm_load_si128((const __m128i *)&xmmword_141A386D0);
  v11 = _mm_load_si128((const __m128i *)&xmmword_141A555A0);
  v12 = _mm_loadl_epi64((const __m128i *)&qword_141A55580);
  v13 = _mm_load_si128((const __m128i *)&xmmword_141A55590);
  v14 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v15 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  v177 = 0;
  v16 = 0;
  v17 = 0;
  v150 = 0;
  v18 = nullptr;
  v166 = 0;
  v151 = a4;
LABEL_9:
  v19 = a4;
  LODWORD(v167) = 0;
LABEL_10:
  v175 = v7;
  LOBYTE(v168) = v150;
  v169 = v18;
  v174 = v18;
LABEL_11:
  v20 = 2;
  v21 = v168;
LABEL_13:
  v22 = v16;
  if ( (v21 & 1) == 0 )
  {
    if ( a5 < v17 )
      goto LABEL_28;
    v23 = v17;
    while ( 1 )
    {
      v24 = a5 - v23;
      v25 = v19 + v23;
      if ( a5 - v23 >= 0x10 )
      {
        LOBYTE(a1) = 10;
        if ( sub_1416B3CF0(a1, v19 + v23, v24) != 1 )
        {
LABEL_27:
          v17 = a5;
LABEL_28:
          v150 = 1;
          v16 = v22;
          LOBYTE(v168) = 1;
          v21 = 1;
          if ( a5 != v22 )
          {
            a1 = a5 - v22;
            if ( a5 == v22 )
              goto LABEL_12;
            goto LABEL_30;
          }
          v16 = a5;
          LOBYTE(v168) = 1;
          v35 = (unsigned __int64)v169;
          v36 = (char *)v169 - (char *)v174;
          if ( v169 <= v174 )
            goto LABEL_222;
LABEL_76:
          if ( v35 > a5 || v174 && v174->m128i_i8[v19] <= -65 || v35 != a5 && *(char *)(v19 + v35) <= -65 )
            sub_141938F40(v19, a5, (_DWORD)v174, v35, (__int64)&off_141A57060);
          v37 = (const __m128i *)((char *)v174 + v19);
          v38 = v36 - (*(_BYTE *)(v19 + v35 - 1) == 10);
          v169 = (const __m128i *)v35;
          v154 = v16;
          if ( v38 )
            v39 = -(__int64)(v37->m128i_i8[v38 - 1] == 13);
          else
            v39 = 0;
          v40 = v38 + v39;
          v41 = sub_140E91160(&v174->m128i_i8[v19], v40);
          v43 = v42;
          v174 = v37;
          v176 = v40;
          if ( !(unsigned __int8)sub_1402B5F80(&v170, v37, v40) )
          {
            v16 = v154;
            if ( (v167 & 1) == 0 )
            {
              if ( *(_QWORD *)v163 != -1 )
                goto LABEL_168;
LABEL_122:
              v53 = v171;
              v54 = v176;
              if ( v176 > v171 - v177 )
              {
                sub_14190D590((unsigned int)&v171, v177, v176, 1, 1);
                v175 = v172;
                v55 = v173;
LABEL_124:
                sub_1418F44E0((__m128i *)(v55 + v175), v174, v54);
                v53 = v171;
              }
              else
              {
                v55 = v177;
                if ( v176 )
                  goto LABEL_124;
              }
              v56 = v54 + v55;
              v173 = v56;
              if ( v53 == v56 )
                sub_14190D590((unsigned int)&v171, v53, 1, 1, 1);
              v175 = v172;
              *(_BYTE *)(v172 + v56) = 10;
              v177 = v56 + 1;
              v173 = v56 + 1;
              LODWORD(v167) = 0;
              v174 = v169;
              goto LABEL_11;
            }
LABEL_129:
            v57 = v171;
            v58 = v176;
            if ( v176 > v171 - v177 )
            {
              sub_14190D590((unsigned int)&v171, v177, v176, 1, 1);
              v175 = v172;
              v59 = v173;
LABEL_131:
              sub_1418F44E0((__m128i *)(v59 + v175), v174, v58);
              v57 = v171;
            }
            else
            {
              v59 = v177;
              if ( v176 )
                goto LABEL_131;
            }
            v60 = v58 + v59;
            v173 = v60;
            v61 = v60;
            if ( v57 == v60 )
              sub_14190D590((unsigned int)&v171, v57, 1, 1, 1);
            v7 = v172;
            *(_BYTE *)(v172 + v60) = 10;
            LOBYTE(a1) = 1;
            LODWORD(v167) = a1;
LABEL_135:
            v177 = v61 + 1;
            v173 = v61 + 1;
            v18 = v169;
            goto LABEL_10;
          }
          v44 = (_BYTE *)v41;
          switch ( v43 )
          {
            case 30LL:
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v41 + 14)), v14),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v41), v15))) == 0xFFFF )
                goto LABEL_136;
              goto LABEL_100;
            case 36LL:
              if ( !(unsigned int)sub_1418F4B70(v41, aAimamiRelayMan_4) )
                goto LABEL_136;
              goto LABEL_100;
            case 39LL:
              if ( (unsigned int)sub_1418F4B70(v41, aAimamiRelayCod_0) )
                goto LABEL_100;
LABEL_136:
              v62 = v171;
              v63 = v176;
              v16 = v154;
              if ( v176 > v171 - v177 )
              {
                sub_14190D590((unsigned int)&v171, v177, v176, 1, 1);
                a1 = v172;
                v64 = v173;
              }
              else
              {
                v64 = v177;
                a1 = v175;
                if ( !v176 )
                  goto LABEL_139;
              }
              sub_1418F44E0((__m128i *)(v64 + a1), v174, v63);
              v62 = v171;
LABEL_139:
              v65 = v63 + v64;
              v173 = v65;
              v61 = v65;
              if ( v62 == v65 )
                sub_14190D590((unsigned int)&v171, v62, 1, 1, 1);
              v7 = v172;
              *(_BYTE *)(v172 + v65) = 10;
              LODWORD(v167) = 0;
              goto LABEL_135;
            case 55LL:
              if ( !(unsigned int)sub_1418F4B70(v41, aAimamiRelayMan_1) )
                goto LABEL_142;
              goto LABEL_100;
            case 60LL:
              if ( (unsigned int)sub_1418F4B70(v41, aAimamiRelayMan_2) )
                goto LABEL_100;
              goto LABEL_142;
            case 64LL:
              if ( (unsigned int)sub_1418F4B70(v41, aAimamiRelayCod) )
                goto LABEL_100;
LABEL_142:
              v66 = *(_QWORD *)v163;
              *(_QWORD *)v163 = -1;
              v67 = v176;
              v16 = v154;
              if ( v66 != -1 )
              {
                *(_QWORD *)v161 = v66;
                *(_QWORD *)&v162[16] = v165;
                *(__m128i *)v162 = v164;
                *(_OWORD *)&v161[8] = *(_OWORD *)&v163[8];
                v68 = *((_QWORD *)&v157 + 1);
                if ( *((_QWORD *)&v157 + 1) == v156.m128i_i64[1] )
                  sub_14190F490(&v156.m128i_u64[1]);
                v69 = v157;
                v70 = 48 * v68;
                v71 = _mm_loadu_si128((const __m128i *)v161);
                v72 = _mm_loadu_si128((const __m128i *)&v161[16]);
                *(_OWORD *)(v157 + v70 + 32) = *(_OWORD *)&v162[8];
                *(__m128i *)(v69 + v70 + 16) = v72;
                *(__m128i *)(v69 + v70) = v71;
                *((_QWORD *)&v157 + 1) = v68 + 1;
              }
              v73 = v171;
              if ( v67 > v171 - v177 )
              {
                sub_14190D590((unsigned int)&v171, v177, v67, 1, 1);
                a1 = v172;
                v74 = v173;
              }
              else
              {
                v74 = v177;
                a1 = v175;
                if ( !v67 )
                  goto LABEL_149;
              }
              sub_1418F44E0((__m128i *)(v74 + a1), v174, v67);
              v73 = v171;
LABEL_149:
              v75 = v67 + v74;
              v173 = v75;
              if ( v73 == v75 )
                sub_14190D590((unsigned int)&v171, v73, 1, 1, 1);
              v7 = v172;
              *(_BYTE *)(v172 + v75) = 10;
              v177 = v75 + 1;
              v173 = v75 + 1;
              LOBYTE(a1) = 1;
              LODWORD(v167) = a1;
              v166 = 0;
              v18 = v169;
              goto LABEL_10;
            default:
LABEL_100:
              v16 = v154;
              if ( (v167 & 1) != 0 )
                goto LABEL_129;
              if ( v43 && *v44 == 91 && v44[v43 - 1] == 93 )
              {
                if ( v43 == 1 || (char)v44[1] <= -65 )
                  sub_141938F40((_DWORD)v44, v43, 1, v43 - 1, (__int64)&off_1419E98C8);
                v88 = (__int64)(v44 + 1);
                v89 = v43 - 2;
                sub_140EF9D20((__int64)&v152, v88, v43 - 2);
                v90 = v176;
                v178 = 1;
                v93 = sub_140EFC690(v88, v89, v91, v92);
                a1 = *(_QWORD *)v163;
                if ( !v93 )
                {
                  *(_QWORD *)v163 = -1;
                  if ( a1 != -1 )
                  {
                    *(_QWORD *)v161 = a1;
                    *(_QWORD *)&v162[16] = v165;
                    v107 = _mm_loadu_si128((const __m128i *)&v163[8]);
                    *(__m128i *)v162 = _mm_loadu_si128(&v164);
                    *(__m128i *)&v161[8] = v107;
                    v108 = *((_QWORD *)&v157 + 1);
                    if ( *((_QWORD *)&v157 + 1) == v156.m128i_i64[1] )
                      sub_14190F490(&v156.m128i_u64[1]);
                    v109 = v157;
                    v110 = 48 * v108;
                    v111 = _mm_loadu_si128((const __m128i *)v161);
                    v112 = _mm_loadu_si128((const __m128i *)&v161[16]);
                    *(_OWORD *)(v157 + v110 + 32) = *(_OWORD *)&v162[8];
                    *(__m128i *)(v109 + v110 + 16) = v112;
                    *(__m128i *)(v109 + v110) = v111;
                    *((_QWORD *)&v157 + 1) = v108 + 1;
                  }
                  v113 = v171;
                  if ( v90 > v171 - v177 )
                  {
                    v178 = 1;
                    sub_14190D590((unsigned int)&v171, v177, v90, 1, 1);
                    a1 = v172;
                    v114 = v173;
LABEL_198:
                    sub_1418F44E0((__m128i *)(v114 + a1), v174, v90);
                    v113 = v171;
                  }
                  else
                  {
                    v114 = v177;
                    a1 = v175;
                    if ( v90 )
                      goto LABEL_198;
                  }
                  v115 = v90 + v114;
                  v173 = v115;
                  if ( v113 == v115 )
                  {
                    v178 = 1;
                    sub_14190D590((unsigned int)&v171, v113, 1, 1, 1);
                  }
                  v7 = v172;
                  *(_BYTE *)(v172 + v115) = 10;
                  v177 = v115 + 1;
                  v173 = v115 + 1;
                  v18 = v169;
                  a4 = v19;
                  goto LABEL_217;
                }
                v18 = v169;
                if ( *(_QWORD *)v163 == -1 )
                  goto LABEL_202;
                v178 = 1;
                v94 = sub_140EF8790(*(__int64 *)&v163[8], *(__int64 *)&v163[16], v152.m128i_i64[1], v153);
                LOBYTE(v95) = 1;
                v18 = v169;
                if ( v94 )
                  goto LABEL_204;
                v96 = *(_QWORD *)v163;
                *(_QWORD *)v163 = -1;
                if ( v96 == -1 )
                {
LABEL_202:
                  v97 = v18;
                  *(_QWORD *)&v161[16] = v153;
                  *(__m128i *)v161 = _mm_loadu_si128(&v152);
                  goto LABEL_203;
                }
                v97 = v169;
                *(_QWORD *)v161 = v96;
                *(_QWORD *)&v162[16] = v165;
                v98 = _mm_loadu_si128((const __m128i *)&v163[8]);
                *(__m128i *)v162 = _mm_loadu_si128(&v164);
                *(__m128i *)&v161[8] = v98;
                v99 = *((_QWORD *)&v157 + 1);
                if ( *((_QWORD *)&v157 + 1) == v156.m128i_i64[1] )
                  sub_14190F490(&v156.m128i_u64[1]);
                v100 = v157;
                a1 = 48 * v99;
                v101 = *(_OWORD *)v161;
                v102 = _mm_loadu_si128((const __m128i *)&v161[16]);
                *(_OWORD *)(v157 + a1 + 32) = *(_OWORD *)&v162[8];
                *(__m128i *)(v100 + a1 + 16) = v102;
                *(_OWORD *)(v100 + a1) = v101;
                *((_QWORD *)&v157 + 1) = v99 + 1;
                *(_QWORD *)&v161[16] = v153;
                *(__m128i *)v161 = _mm_loadu_si128(&v152);
                if ( *(_QWORD *)v163 != -1 )
                {
                  if ( *(_QWORD *)v163 )
                    sub_140001660(*(_QWORD *)&v163[8], *(_QWORD *)v163, 1);
                  v103 = v164.m128i_i64[1];
                  v104 = v165;
                  if ( v165 )
                  {
                    v105 = (_QWORD *)(v164.m128i_i64[1] + 8);
                    do
                    {
                      v106 = *(v105 - 1);
                      if ( v106 )
                        sub_140001660(*v105, v106, 1);
                      v105 += 3;
                      --v104;
                    }
                    while ( v104 );
                  }
                  v97 = v169;
                  if ( v164.m128i_i64[0] )
                    sub_140001660(v103, 24 * v164.m128i_i64[0], 8);
                }
LABEL_203:
                *(_QWORD *)&v163[16] = *(_QWORD *)&v161[16];
                *(__m128i *)v163 = _mm_load_si128((const __m128i *)v161);
                v164.m128i_i64[0] = 0;
                v164.m128i_i64[1] = 8;
                v165 = 0;
                v95 = 0;
                v90 = v176;
                v18 = v97;
LABEL_204:
                if ( *(_QWORD *)v163 == -1 )
                {
                  v7 = v175;
                  a4 = v19;
                }
                else
                {
                  if ( v90 < 0 )
                  {
                    v146 = 0;
                    goto LABEL_254;
                  }
                  a4 = v19;
                  LODWORD(v168) = v95;
                  v116 = v18;
                  if ( v90 )
                  {
                    nullsub_1(a1);
                    v117 = v176;
                    v118 = (__m128i *)sub_140001650(v176, 1);
                    if ( v118 )
                    {
                      v160 = (__int64)v118;
                      sub_1418F44E0(v118, v174, v117);
                      goto LABEL_213;
                    }
                    v160 = v117;
                    v146 = 1;
                    LOBYTE(v95) = v168;
LABEL_254:
                    v178 = v95;
                    sub_141938D2B(v146, v160);
                  }
                  v160 = 1;
LABEL_213:
                  v119 = v165;
                  if ( v165 == v164.m128i_i64[0] )
                    sub_14190FDC0(&v164);
                  v120 = v164.m128i_i64[1];
                  a1 = 3 * v119;
                  v121 = v176;
                  *(_QWORD *)(v164.m128i_i64[1] + 8 * a1) = v176;
                  *(_QWORD *)(v120 + 8 * a1 + 8) = v160;
                  *(_QWORD *)(v120 + 8 * a1 + 16) = v121;
                  v165 = v119 + 1;
                  v7 = v175;
                  v18 = v116;
                  LOBYTE(v95) = v168;
                }
                if ( (_BYTE)v95 )
                {
LABEL_217:
                  v122 = v18;
                  if ( v152.m128i_i64[0] )
                  {
                    v123 = v7;
                    sub_140001660(v152.m128i_i64[1], v152.m128i_i64[0], 1);
                    v7 = v123;
                  }
                  v18 = v122;
                }
                LOBYTE(a1) = 1;
                v166 = a1;
                goto LABEL_9;
              }
              if ( *(_QWORD *)v163 != -1 )
              {
LABEL_168:
                if ( (v176 & 0x8000000000000000uLL) != 0LL )
                {
                  v131 = 0;
                  goto LABEL_228;
                }
                if ( v176 )
                {
                  nullsub_1(a1);
                  v83 = v176;
                  v84 = (__m128i *)sub_140001650(v176, 1);
                  a4 = v151;
                  if ( !v84 )
                  {
                    v158 = v83;
                    v131 = 1;
LABEL_228:
                    sub_141938D2B(v131, v158);
                  }
                  v158 = (__int64)v84;
                  sub_1418F44E0(v84, v174, v83);
                  v85 = v165;
                  if ( v165 != v164.m128i_i64[0] )
                    goto LABEL_175;
LABEL_174:
                  sub_14190FDC0(&v164);
                }
                else
                {
                  v158 = 1;
                  a4 = v151;
                  v85 = v165;
                  if ( v165 == v164.m128i_i64[0] )
                    goto LABEL_174;
                }
LABEL_175:
                v86 = v164.m128i_i64[1];
                a1 = 3 * v85;
                v87 = v176;
                *(_QWORD *)(v164.m128i_i64[1] + 8 * a1) = v176;
                *(_QWORD *)(v86 + 8 * a1 + 8) = v158;
                *(_QWORD *)(v86 + 8 * a1 + 16) = v87;
                v165 = v85 + 1;
                v7 = v175;
                v18 = v169;
                goto LABEL_9;
              }
              if ( (v166 & 1) != 0 )
                goto LABEL_122;
              sub_140EFDF00(v161, v44, v43);
              v45 = v176;
              if ( *(_QWORD *)v161 == -1 )
                goto LABEL_122;
              switch ( *(_QWORD *)&v161[16] )
              {
                case 5LL:
                  v46 = **(_DWORD **)&v161[8] ^ 0x65646F6D;
                  v47 = *(unsigned __int8 *)(*(_QWORD *)&v161[8] + 4LL) ^ 0x6C;
                  goto LABEL_111;
                case 7LL:
                  v46 = **(_DWORD **)&v161[8] ^ 0x666F7270;
                  v47 = *(_DWORD *)(*(_QWORD *)&v161[8] + 3LL) ^ 0x656C6966;
LABEL_111:
                  a1 = v46 | (unsigned int)v47;
                  if ( !(_DWORD)a1 )
                    goto LABEL_152;
                  goto LABEL_120;
                case 0xELL:
                  v50 = **(_QWORD **)&v161[8] ^ 0x72705F6C65646F6DLL;
                  v51 = *(_QWORD *)(*(_QWORD *)&v161[8] + 6LL);
                  v52 = 0x72656469766F7270LL;
                  goto LABEL_116;
                case 0xFLL:
                  v50 = **(_QWORD **)&v161[8] ^ 0x625F69616E65706FLL;
                  v51 = *(_QWORD *)(*(_QWORD *)&v161[8] + 7LL);
                  v52 = 0x6C72755F65736162LL;
LABEL_116:
                  a1 = v50 | v52 ^ v51;
                  if ( !a1 )
                    goto LABEL_152;
                  goto LABEL_120;
                case 0x12LL:
                  v48 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v161[8]), si128);
                  v49 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)&v161[8] + 16LL)), v9);
                  goto LABEL_119;
                case 0x16LL:
                  v48 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v161[8]), v11);
                  v49 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)&v161[8] + 6LL)), v10);
                  goto LABEL_119;
                case 0x18LL:
                  v48 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v161[8]), v13);
                  v49 = _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v161[8] + 16LL)), v12);
LABEL_119:
                  if ( _mm_movemask_epi8(_mm_and_si128(v49, v48)) != 0xFFFF )
                    goto LABEL_120;
LABEL_152:
                  v167 = *(_QWORD *)&v161[8];
                  v168 = *(_QWORD *)v161;
                  if ( (unsigned __int8)sub_140F008D0(a2, a3, v174, v176) )
                  {
                    v7 = v175;
                    v18 = v169;
                  }
                  else
                  {
                    v77 = v169;
                    if ( v45 < 0 )
                    {
                      v145 = 0;
                      goto LABEL_251;
                    }
                    if ( v45 )
                    {
                      nullsub_1(v76);
                      v78 = (__m128i *)sub_140001650(v45, 1);
                      if ( !v78 )
                      {
                        v159 = v45;
                        v145 = 1;
LABEL_251:
                        sub_141938D2B(v145, v159);
                      }
                      v159 = (__int64)v78;
                      sub_1418F44E0(v78, v174, v45);
                    }
                    else
                    {
                      v159 = 1;
                    }
                    v79 = v156.m128i_i64[0];
                    if ( v156.m128i_i64[0] == (_QWORD)v155 )
                      sub_14190FDC0(&v155);
                    v80 = *((_QWORD *)&v155 + 1);
                    v81 = 3 * v79;
                    v82 = v176;
                    *(_QWORD *)(*((_QWORD *)&v155 + 1) + 8 * v81) = v176;
                    *(_QWORD *)(v80 + 8 * v81 + 8) = v159;
                    *(_QWORD *)(v80 + 8 * v81 + 16) = v82;
                    v156.m128i_i64[0] = v79 + 1;
                    v7 = v175;
                    v18 = v77;
                  }
                  a1 = v167;
                  if ( v168 )
                  {
                    sub_140001660(v167, v168, 1);
                    v7 = v175;
                  }
                  v166 = 0;
                  LODWORD(v167) = 0;
                  break;
                default:
LABEL_120:
                  if ( *(_QWORD *)v161 )
                    sub_140001660(*(_QWORD *)&v161[8], *(_QWORD *)v161, 1);
                  goto LABEL_122;
              }
              break;
          }
          goto LABEL_10;
        }
      }
      else
      {
        v26 = 0;
        if ( !v24 )
          goto LABEL_27;
        while ( *(_BYTE *)(v25 + v26) != 10 )
        {
          if ( v24 == ++v26 )
            goto LABEL_27;
        }
      }
      v17 = v26 + v23 + 1;
      if ( v26 + v23 < a5 && *(_BYTE *)(v25 + v26) == 10 )
      {
        v21 = 0;
        v16 = v26 + v23 + 1;
        a1 = v17 - v22;
        if ( v17 == v22 )
          goto LABEL_12;
LABEL_30:
        v27 = v19 + v22;
        v28 = 0;
        i = v20;
        while ( 2 )
        {
          if ( !i )
          {
            if ( *(_BYTE *)(v27 + v28) == 92 )
            {
              v28 += 2LL;
              if ( a1 < v28 )
                v28 = a1;
              goto LABEL_50;
            }
            v30 = v28 + 3;
            if ( v28 + 3 > a1 || *(_WORD *)(v27 + v28) ^ 0x2222 | *(_BYTE *)(v27 + v28 + 2) ^ 0x22 )
            {
              ++v28;
LABEL_50:
              i = 0;
              goto LABEL_32;
            }
LABEL_68:
            v20 = 2;
            i = 2;
            goto LABEL_33;
          }
          if ( i != 2 )
          {
            v30 = v28 + 3;
            if ( v28 + 3 > a1 || *(_WORD *)(v27 + v28) ^ 0x2727 | *(_BYTE *)(v27 + v28 + 2) ^ 0x27 )
            {
LABEL_31:
              ++v28;
              goto LABEL_32;
            }
            goto LABEL_68;
          }
          v31 = *(unsigned __int8 *)(v27 + v28);
          if ( v31 == 34 )
          {
            v30 = v28 + 3;
            if ( v28 + 3 > a1 || *(_WORD *)(v27 + v28) ^ 0x2222 | *(_BYTE *)(v27 + v28 + 2) ^ 0x22 )
            {
              ++v28;
              for ( i = 2; v28 < a1; ++v28 )
              {
                while ( 1 )
                {
                  v34 = *(unsigned __int8 *)(v27 + v28);
                  if ( v34 != 92 )
                    break;
                  v28 += 2LL;
                  if ( a1 < v28 )
                    v28 = a1;
                  if ( v28 >= a1 )
                    goto LABEL_32;
                }
                if ( v34 == 34 )
                  goto LABEL_31;
              }
              goto LABEL_32;
            }
            v20 = 0;
            i = 0;
LABEL_33:
            v28 = v30;
            if ( v30 >= a1 )
              goto LABEL_12;
            continue;
          }
          break;
        }
        if ( v31 != 39 )
        {
          if ( v31 == 35 )
            goto LABEL_12;
          ++v28;
          i = 2;
LABEL_32:
          v30 = v28;
          goto LABEL_33;
        }
        v30 = v28 + 3;
        if ( v28 + 3 <= a1 && !(*(_WORD *)(v27 + v28) ^ 0x2727 | *(_BYTE *)(v27 + v28 + 2) ^ 0x27) )
        {
          v20 = 1;
          i = 1;
          goto LABEL_33;
        }
        v32 = v28 + 1;
        while ( v32 < a1 )
        {
          v30 = v32 + 1;
          if ( *(_BYTE *)(v27 + v32++) == 39 )
          {
            i = 2;
            goto LABEL_33;
          }
        }
LABEL_12:
        v169 = (const __m128i *)((char *)v169 + a1);
        if ( v20 == 2 )
          break;
        goto LABEL_13;
      }
      v23 += v26 + 1;
      if ( v17 > a5 )
        goto LABEL_28;
    }
  }
  v35 = (unsigned __int64)v169;
  v36 = (char *)v169 - (char *)v174;
  if ( v169 > v174 )
    goto LABEL_76;
LABEL_222:
  v124 = *(_QWORD *)v163;
  *(_QWORD *)v163 = -1;
  v125 = *((_QWORD *)&v157 + 1);
  if ( v124 == -1 )
  {
    v126 = v177;
    if ( !*((_QWORD *)&v157 + 1) )
      goto LABEL_237;
  }
  else
  {
    *(_QWORD *)v161 = v124;
    *(_OWORD *)&v161[8] = *(_OWORD *)&v163[8];
    *(__m128i *)v162 = v164;
    *(_QWORD *)&v162[16] = v165;
    v126 = v177;
    if ( *((_QWORD *)&v157 + 1) == v156.m128i_i64[1] )
      sub_14190F490(&v156.m128i_u64[1]);
    v127 = v157;
    v128 = 48 * v125;
    v129 = _mm_loadu_si128((const __m128i *)v161);
    v130 = _mm_loadu_si128((const __m128i *)&v161[16]);
    *(_OWORD *)(v157 + v128 + 32) = *(_OWORD *)&v162[8];
    *(__m128i *)(v127 + v128 + 16) = v130;
    *(__m128i *)(v127 + v128) = v129;
    *((_QWORD *)&v157 + 1) = ++v125;
    if ( !v125 )
      goto LABEL_237;
  }
  v132 = v157;
  v133 = v157 + 48 * v125;
  do
  {
LABEL_232:
    v134 = *(_QWORD *)(v132 + 40);
    while ( v134 )
    {
      v135 = *(_QWORD *)(v132 + 32);
      sub_140E91160(*(_QWORD *)(v135 + 24 * v134 - 16), *(_QWORD *)(v135 + 24 * v134 - 8));
      if ( v136 )
        break;
      *(_QWORD *)(v132 + 40) = --v134;
      v137 = *(_QWORD *)(v135 + 24 * v134);
      if ( (unsigned __int64)(v137 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_140001660(*(_QWORD *)(v135 + 24 * v134 + 8), v137, 1);
        goto LABEL_232;
      }
    }
    v132 += 48;
  }
  while ( v132 != v133 );
LABEL_237:
  sub_140EF8930(v161, v175, v126);
  v138 = v155;
  v139 = _mm_loadu_si128(&v156);
  *(_OWORD *)(v147 + 56) = v157;
  *(__m128i *)(v147 + 40) = v139;
  *(_OWORD *)(v147 + 24) = v138;
  result = *(_QWORD *)&v161[16];
  *(_QWORD *)(v147 + 16) = *(_QWORD *)&v161[16];
  *(__m128i *)v147 = _mm_loadu_si128((const __m128i *)v161);
  if ( *(_QWORD *)v163 != -1 )
  {
    if ( *(_QWORD *)v163 )
      sub_140001660(*(_QWORD *)&v163[8], *(_QWORD *)v163, 1);
    v141 = v164.m128i_i64[1];
    v142 = v165;
    if ( v165 )
    {
      v143 = (_QWORD *)(v164.m128i_i64[1] + 8);
      do
      {
        v144 = *(v143 - 1);
        if ( v144 )
          sub_140001660(*v143, v144, 1);
        v143 += 3;
        --v142;
      }
      while ( v142 );
    }
    result = v164.m128i_i64[0];
    if ( v164.m128i_i64[0] )
      result = sub_140001660(v141, 24 * v164.m128i_i64[0], 8);
  }
  if ( v171 )
    return sub_140001660(v175, v171, 1);
  return result;
}
