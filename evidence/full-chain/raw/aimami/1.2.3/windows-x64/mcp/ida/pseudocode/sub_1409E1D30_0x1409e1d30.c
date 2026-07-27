// module: codexmate_lib/core/mcp
// addr: 0x1409e1d30
// name: sub_1409E1D30
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1409E1D30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm10
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int128 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r9
  __int64 v48; // r10
  __m128i v49; // xmm0
  __int64 v50; // rdi
  const __m128i *v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rdx
  char v57; // bl
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rdi
  unsigned __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r12
  unsigned __int64 v67; // rbx
  __int64 v69; // r9
  __int64 v70; // r14
  __m128i v71; // xmm0
  __m128i v72; // xmm10
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 i; // rdx
  __m128i v76; // xmm11
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rdi
  _QWORD *v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  char v88; // bl
  __int64 v89; // rdx
  __m128i *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  bool v94; // al
  __m128i v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rdx
  __m128i *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  _BYTE *v107; // rax
  __int64 v108; // rdx
  char *v109; // r14
  __int64 v110; // r15
  __int64 v111; // r13
  char v112; // di
  char v113; // r12
  __int64 v114; // r9
  __int64 v115; // rax
  unsigned int v116; // ebx
  int v117; // eax
  int v118; // edx
  int v119; // ebx
  unsigned __int8 v120; // cl
  __int64 v121; // rax
  unsigned __int64 v122; // r8
  char v123; // al
  unsigned int v124; // ecx
  char v125; // cl
  unsigned int v126; // edx
  __int64 v127; // rax
  unsigned __int64 v128; // r8
  char v129; // al
  unsigned int v130; // ecx
  char v131; // cl
  unsigned int v132; // edx
  __int64 v133; // rbx
  __int64 v134; // rdx
  __int64 v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // r14
  __int64 v141; // rdx
  __int64 v142; // rbx
  __int64 v143; // r14
  __int64 v144; // rax
  __int64 v145; // rcx
  __m128i *v146; // rdi
  __int64 v147; // r9
  __int64 v149; // rcx
  __m128i si128; // xmm0
  __int64 v151; // r10
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 v154; // rcx
  _QWORD v155[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v156; // [rsp+38h] [rbp-48h]
  unsigned __int64 v157; // [rsp+40h] [rbp-40h]
  __int64 v158; // [rsp+48h] [rbp-38h]
  __int128 v159; // [rsp+50h] [rbp-30h] BYREF
  __int128 v160; // [rsp+60h] [rbp-20h]
  _QWORD v161[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v162; // [rsp+80h] [rbp+0h]
  __int64 v163; // [rsp+88h] [rbp+8h]
  _QWORD v164[5]; // [rsp+90h] [rbp+10h] BYREF
  char v165; // [rsp+B8h] [rbp+38h]
  __int16 v166; // [rsp+C0h] [rbp+40h]
  __int64 v167; // [rsp+C8h] [rbp+48h]
  __int64 v168; // [rsp+D0h] [rbp+50h]
  __int64 v169; // [rsp+D8h] [rbp+58h]
  __int64 v170; // [rsp+E0h] [rbp+60h]
  __int64 v171; // [rsp+E8h] [rbp+68h]
  __int64 v172; // [rsp+F0h] [rbp+70h]
  __int64 v173; // [rsp+F8h] [rbp+78h]
  __m128i v174; // [rsp+100h] [rbp+80h] BYREF
  __m256i v175; // [rsp+110h] [rbp+90h]
  __int128 v176; // [rsp+130h] [rbp+B0h]
  __m128i v177; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v178; // [rsp+150h] [rbp+D0h]
  __m128i v179; // [rsp+1D0h] [rbp+150h] BYREF
  __m256i v180; // [rsp+1E0h] [rbp+160h]
  __int128 v181; // [rsp+200h] [rbp+180h]
  __m128i v182; // [rsp+210h] [rbp+190h]
  __int64 v183; // [rsp+220h] [rbp+1A0h]
  __m128i v184; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v185; // [rsp+240h] [rbp+1C0h]
  _OWORD v186[2]; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v187; // [rsp+280h] [rbp+200h]
  __int64 v188; // [rsp+288h] [rbp+208h]
  __int16 v189; // [rsp+290h] [rbp+210h]
  __m128i v190; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v191; // [rsp+2B0h] [rbp+230h]
  __int64 v192; // [rsp+2C0h] [rbp+240h]
  __int64 v193; // [rsp+2C8h] [rbp+248h]
  __m128i v194; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v195; // [rsp+2E0h] [rbp+260h]
  __int64 v196; // [rsp+2F0h] [rbp+270h]
  __int64 v197; // [rsp+2F8h] [rbp+278h]
  __m128i v198; // [rsp+300h] [rbp+280h] BYREF
  __int64 v199; // [rsp+310h] [rbp+290h]
  __m128i v200; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v201; // [rsp+330h] [rbp+2B0h]
  __int64 v202; // [rsp+338h] [rbp+2B8h]
  __int64 v203; // [rsp+340h] [rbp+2C0h]
  __int64 v204; // [rsp+348h] [rbp+2C8h]
  __int64 v205; // [rsp+350h] [rbp+2D0h]
  __int64 v206; // [rsp+358h] [rbp+2D8h]
  __int64 v207; // [rsp+360h] [rbp+2E0h]
  __int64 v208; // [rsp+368h] [rbp+2E8h]
  char v209; // [rsp+377h] [rbp+2F7h] BYREF
  __int64 v210; // [rsp+378h] [rbp+2F8h]
  char v211; // [rsp+386h] [rbp+306h]
  char v212; // [rsp+387h] [rbp+307h]
  unsigned __int64 v213; // [rsp+388h] [rbp+308h]
  __int64 v214; // [rsp+390h] [rbp+310h]
  __int64 v215; // [rsp+398h] [rbp+318h]
  __int64 v216; // [rsp+3A0h] [rbp+320h]
  __int64 v217; // [rsp+3A8h] [rbp+328h]
  __int64 v218; // [rsp+3B0h] [rbp+330h]
  __int64 v219; // [rsp+3B8h] [rbp+338h]
  char v220; // [rsp+3C7h] [rbp+347h]
  __int64 v221; // [rsp+3C8h] [rbp+348h]
  char v222; // [rsp+3D5h] [rbp+355h]
  char v223; // [rsp+3D6h] [rbp+356h]
  char v224; // [rsp+3D7h] [rbp+357h]
  __int64 v225; // [rsp+3D8h] [rbp+358h]

  v225 = -2;
  sub_141486710(&v174, a2, a3);
  if ( v174.m128i_i32[0] == 2 )
  {
    v179.m128i_i64[1] = v174.m128i_i64[1];
    v179.m128i_i64[0] = 2;
LABEL_4:
    sub_140018650(&v179.m128i_u64[1]);
    a1[1] = 0;
    a1[2] = 8;
    a1[3] = 0;
    *a1 = -1;
    return a1;
  }
  v179 = v174;
  v183 = v178;
  v182 = _mm_loadu_si128(&v177);
  v181 = v176;
  v180 = v175;
  if ( v174.m128i_i64[0] == 2 )
    goto LABEL_4;
  sub_14148D130(&v174, a2, a3);
  v8 = v174.m128i_i64[1];
  if ( v174.m128i_i64[0] == -1 )
  {
    *a1 = 2;
    a1[1] = v8;
    return a1;
  }
  v193 = v174.m128i_i64[1];
  v169 = v174.m128i_i64[0];
  v9 = v175.m256i_i64[0];
  v155[0] = a2;
  v155[1] = a3;
  v179.m128i_i64[0] = 0;
  v179.m128i_i64[1] = 1;
  v180.m256i_i64[0] = 0;
  v175.m256i_i64[0] = 1610612768;
  v174.m128i_i64[0] = (__int64)&v179;
  v174.m128i_i64[1] = (__int64)&off_1417A9B00;
  if ( (unsigned __int8)sub_14148F3A0(v155, &v174, v7) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v209,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v170 = v179.m128i_i64[1];
  v167 = v179.m128i_i64[0];
  v12 = v180.m256i_i64[0];
  v13 = sub_141470CD0(v11, v10);
  v14 = v13;
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v15 = *(_QWORD *)v13;
    v16 = *(_QWORD *)(v14 + 8);
  }
  else
  {
    v15 = sub_141486EF0();
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v16;
    *(_BYTE *)(v14 + 16) = 1;
  }
  *(_QWORD *)v14 = v15 + 1;
  v160 = xmmword_1417A47A0;
  v159 = *(_OWORD *)&off_1417A4790;
  v161[0] = v15;
  v161[1] = v16;
  v194.m128i_i64[0] = -1;
  v162 = 0;
  v163 = v9;
  v164[0] = v193;
  v164[1] = v9;
  v164[2] = 0;
  v164[3] = v9;
  v164[4] = 0xA0000000ALL;
  v165 = 1;
  v166 = 0;
  v17.m128i_i64[1] = -1;
  v219 = -1;
  do
  {
    v18 = v164[0];
    v206 = v221;
    v205 = v17.m128i_i64[1];
    v224 = 1;
    sub_140A68660(&v174, v164);
    if ( v174.m128i_i32[0] == 1 )
    {
      v21 = v162;
      v162 = v175.m256i_i64[0];
      v22 = v21 + v18;
      v17.m128i_i64[1] = v219;
      goto LABEL_16;
    }
    v17.m128i_i64[1] = v219;
    if ( HIBYTE(v166) )
      break;
    HIBYTE(v166) = 1;
    if ( ((unsigned __int8)v166 | (v163 != v162)) != 1 )
      break;
    v22 = v164[0] + v162;
LABEL_16:
    v206 = v221;
    v205 = v17.m128i_i64[1];
    v224 = 1;
    v23 = sub_1409E5DC0(v22);
    v206 = v221;
    v205 = v219;
    v224 = 1;
    v25 = sub_14033BC10(v23, v24);
    if ( v26 < 0 )
    {
      v149 = 0;
      goto LABEL_239;
    }
    v17.m128i_i64[1] = v26;
    if ( v26 )
    {
      v27 = v25;
      nullsub_1(v17.m128i_i64[0]);
      v28 = sub_140001650(v17.m128i_i64[1], 1);
      if ( v28 )
      {
        v214 = v28;
        sub_141684120(v28, v27, v17.m128i_i64[1]);
        v17.m128i_i64[0] = v214;
        v29 = *(_BYTE *)v214 == 91;
        v213 = v17.m128i_u64[1];
        if ( v29 && *(_BYTE *)(v214 + v17.m128i_i64[1] - 1) == 93 )
        {
          v30 = v17.m128i_i64[1] - 1;
          if ( v17.m128i_i64[1] == 1 || *(char *)(v214 + 1) <= -65 )
          {
            v217 = v221;
            v216 = v219;
            sub_1416C2F60(v214, v17.m128i_i32[2], 1, v30, (__int64)&off_1417A75F0);
          }
          v217 = v221;
          v216 = v219;
          sub_1409E74F0(&v200, v214 + 1, v17.m128i_i64[1] - 2, v30);
          if ( v200.m128i_i64[0] == -1 )
          {
            v17.m128i_i64[1] = v213;
            if ( v194.m128i_i64[0] != -1 && v194.m128i_i64[0] )
              sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1);
            v194.m128i_i64[0] = -1;
            v17.m128i_i64[0] = -1;
            v60 = v221;
            if ( (unsigned __int64)(v219 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              sub_140001660(v221, v219, 1);
              v17.m128i_i64[0] = -1;
            }
          }
          else
          {
            v31 = v12;
            v191 = v201;
            v190 = _mm_loadu_si128(&v200);
            v207 = v202;
            v218 = v203;
            v197 = v221;
            v32 = v219;
            v196 = v219;
            v223 = 1;
            v222 = 1;
            sub_14149C500(&v174, &v190);
            v180.m256i_i64[0] = v175.m256i_i64[0];
            v179 = v174;
            if ( v194.m128i_i64[0] != -1 && v194.m128i_i64[0] )
              sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1);
            v195 = v180.m256i_i64[0];
            v194 = _mm_load_si128(&v179);
            v33 = v218;
            v34 = v207;
            if ( (unsigned __int64)(v32 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              sub_140001660(v221, v32, 1);
              v34 = v202;
              v33 = v203;
            }
            v156 = v204;
            v197 = v33;
            v196 = v34;
            v223 = 0;
            v222 = 1;
            v35 = v34;
            sub_14149C500(&v179, &v190);
            v197 = v33;
            v196 = v35;
            v223 = 0;
            v222 = 1;
            sub_14046CE50(&v174, &v159, &v179);
            v208 = v33;
            v215 = v35;
            v221 = v174.m128i_i64[0];
            if ( v174.m128i_i64[0] != -1 )
            {
              v157 = v175.m256i_u64[2];
              v168 = v175.m256i_i64[1];
            }
            v171 = v174.m128i_i64[1];
            v38 = _mm_loadu_si128((const __m128i *)&v174.m128i_u64[1]);
            v210 = v190.m128i_i64[1];
            v219 = v190.m128i_i64[0];
            v39 = v191;
            v198.m128i_i64[0] = 0;
            v198.m128i_i64[1] = 8;
            v199 = 0;
            v40 = sub_141470CD0(v37, v36);
            v41 = v40;
            if ( *(_BYTE *)(v40 + 16) == 1 )
            {
              v12 = v31;
              v42 = *(_OWORD *)v40;
            }
            else
            {
              *(_QWORD *)&v42 = sub_141486EF0();
              *(_OWORD *)v41 = v42;
              *(_BYTE *)(v41 + 16) = 1;
              v12 = v31;
            }
            *(_QWORD *)v41 = v42 + 1;
            *(_OWORD *)v175.m256i_i8 = xmmword_1417A47A0;
            v174 = *(__m128i *)&off_1417A4790;
            *(_OWORD *)&v175.m256i_u64[2] = v42;
            v43 = sub_141470CD0(v42 + 1, *((_QWORD *)&v42 + 1));
            v44 = v43;
            if ( *(_BYTE *)(v43 + 16) == 1 )
            {
              v45 = *(_QWORD *)v43;
              v46 = *(_QWORD *)(v44 + 8);
            }
            else
            {
              v45 = sub_141486EF0();
              *(_QWORD *)v44 = v45;
              *(_QWORD *)(v44 + 8) = v46;
              *(_BYTE *)(v44 + 16) = 1;
            }
            v47 = v219;
            v48 = v210;
            *(_QWORD *)v44 = v45 + 1;
            v179.m128i_i64[0] = v47;
            v179.m128i_i64[1] = v48;
            v180.m256i_i64[0] = v39;
            v189 = 769;
            *(_QWORD *)&v181 = -1;
            v180.m256i_i64[3] = v199;
            *(__m128i *)&v180.m256i_u64[1] = v198;
            v182.m128i_i64[1] = -1;
            v49 = _mm_load_si128(&v174);
            v185 = v175;
            v184 = v49;
            v186[1] = xmmword_1417A47A0;
            v186[0] = *(_OWORD *)&off_1417A4790;
            v187 = v45;
            v188 = v46;
            v50 = v221;
            if ( v221 == -1 )
            {
              if ( v47 )
                sub_140001660(v48, v47, 1);
              v83 = v180.m256i_i64[3];
              v84 = v180.m256i_i64[2];
              if ( v180.m256i_i64[3] )
              {
                v85 = (_QWORD *)(v180.m256i_i64[2] + 8);
                do
                {
                  v86 = *(v85 - 1);
                  if ( v86 )
                    sub_140001660(*v85, v86, 1);
                  v85 += 3;
                  --v83;
                }
                while ( v83 );
              }
              if ( v180.m256i_i64[1] )
                sub_140001660(v84, 24 * v180.m256i_i64[1], 8);
              sub_14067EB80(&v184);
              v192 = -1;
              v220 = 0;
              sub_14067EB80(v186);
            }
            else
            {
              sub_141684120(&v174, &v179, 200);
              v51 = *(const __m128i **)v168;
              v52 = *(_QWORD *)(v168 + 8);
              v53 = v157;
              v54 = v157 & v52;
              _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v168 + (v157 & v52))));
              if ( !(_DWORD)_R8 )
              {
                v147 = 16;
                do
                {
                  v54 = v52 & (v147 + v54);
                  _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v51 + v54)));
                  v147 += 16;
                }
                while ( !(_DWORD)_R8 );
              }
              __asm { tzcnt   r8d, r8d }
              _R8 = v52 & (v54 + _R8);
              v57 = v51->m128i_i8[_R8];
              if ( v57 >= 0 )
              {
                _EDX = _mm_movemask_epi8(_mm_load_si128(v51));
                __asm { tzcnt   r8d, edx }
                v57 = v51->m128i_i8[_R8];
              }
              v51->m128i_i8[_R8] = v157 >> 57;
              v51[1].m128i_i8[v52 & (_R8 - 16)] = v53 >> 57;
              v58 = 0xFFFFFFFFFFFFFF2LL * _R8;
              v51[v58 - 14].m128i_i64[0] = v50;
              *(__m128i *)((char *)&v51[v58 - 13] - 8) = v38;
              sub_141684120((char *)&v51[-14 * _R8 - 12] - 8, &v174, 200);
              *(__m128i *)(v168 + 16) = _mm_sub_epi64(
                                          _mm_loadu_si128((const __m128i *)(v168 + 16)),
                                          (__m128i)_mm_shuffle_ps(
                                                     (__m128)_mm_cvtsi32_si128(v57 & 1),
                                                     (__m128)xmmword_141748CD0,
                                                     228));
            }
            v17.m128i_i64[1] = v213;
            v17.m128i_i64[0] = v215;
            v60 = v208;
          }
          v221 = v60;
          v219 = v17.m128i_i64[0];
          v17.m128i_i64[0] = v214;
          goto LABEL_133;
        }
        if ( v194.m128i_i64[0] == -1 )
          goto LABEL_133;
        v174 = v17;
        v175.m256i_i64[0] = 0;
        v175.m256i_i64[1] = v17.m128i_i64[1];
        v175.m256i_i8[24] = 1;
        v175.m256i_i64[2] = 0x3D0000003DLL;
        v217 = v221;
        v216 = v219;
        sub_140A68660(&v179, &v174);
        if ( v179.m128i_i32[0] != 1 )
          goto LABEL_132;
        v59 = v179.m128i_i64[1];
        if ( v179.m128i_i64[1] )
        {
          if ( v179.m128i_i64[1] >= v213 )
          {
            if ( v179.m128i_i64[1] != v213 )
            {
LABEL_265:
              v217 = v221;
              v216 = v219;
              sub_1416C2F60(v214, v213, 0, v179.m128i_i32[2], (__int64)&off_1417A7598);
            }
          }
          else if ( *(char *)(v214 + v179.m128i_i64[1]) < -64 )
          {
            goto LABEL_265;
          }
        }
        v217 = v221;
        v216 = v219;
        v218 = sub_14033BC10(v214, v179.m128i_i64[1]);
        v62 = v61;
        v63 = v59 + 1;
        if ( v213 <= v63 )
        {
          v64 = v214;
          if ( v213 != v63 )
          {
LABEL_264:
            v217 = v221;
            v216 = v219;
            sub_1416C2F60(v64, v213, v63, v213, (__int64)&off_1417A75B0);
          }
        }
        else
        {
          v64 = v214;
          if ( *(char *)(v214 + v63) < -64 )
            goto LABEL_264;
        }
        v217 = v221;
        v216 = v219;
        v215 = sub_14033BC10(v64 + v63, v213 - v63);
        if ( !*((_QWORD *)&v160 + 1) )
          goto LABEL_132;
        v66 = v65;
        v217 = v221;
        v216 = v219;
        v67 = sub_140378810(v161, &v194);
        v208 = v66;
        v207 = v12;
        _RAX = v67 >> 57;
        v69 = *((_QWORD *)&v159 + 1);
        v70 = v159;
        v71 = _mm_cvtsi32_si128(v67 >> 57);
        v72 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v71, v71), 0), 68);
        v73 = v194.m128i_i64[1];
        v74 = v195;
        for ( i = 0; ; i += 16 )
        {
          v17.m128i_i64[1] = v69 & v67;
          v76 = _mm_loadu_si128((const __m128i *)(v70 + v17.m128i_i64[1]));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v76, v72));
          v17.m128i_i64[0] = v214;
          if ( _R15D )
            break;
LABEL_64:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v76, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
          {
LABEL_232:
            v17.m128i_i64[1] = v213;
            v12 = v207;
            goto LABEL_133;
          }
          v67 = i + v17.m128i_i64[1] + 16;
        }
        v171 = i;
        v158 = v69;
        while ( 1 )
        {
          __asm { tzcnt   eax, r15d }
          v78 = -224LL * (v69 & (v17.m128i_i64[1] + _RAX));
          if ( v74 == *(_QWORD *)(v70 + v78 - 208) )
          {
            v210 = v70 + v78;
            if ( !(unsigned int)sub_1416847B0(v73, *(_QWORD *)(v70 + v78 - 216), v74) )
              break;
          }
          _RAX = (unsigned int)(_R15D - 1);
          LOWORD(_RAX) = _R15D & (_R15D - 1);
          _R15D = _RAX;
          v17.m128i_i64[0] = v214;
          i = v171;
          v69 = v158;
          if ( !(_WORD)_RAX )
            goto LABEL_64;
        }
        v17.m128i_i64[0] = v214;
        if ( v219 != -1 )
        {
          v17.m128i_i64[1] = v213;
          v12 = v207;
          v79 = v208;
          if ( v156 != 3 )
          {
            if ( v156 != 7 || *(_DWORD *)v221 ^ 0x64616568 | *(_DWORD *)(v221 + 3) ^ 0x73726564 )
            {
LABEL_133:
              sub_140001660(v17.m128i_i64[0], v17.m128i_i64[1], 1);
              goto LABEL_134;
            }
            v80 = v173;
            if ( v62 < 0 )
            {
              v153 = 0;
            }
            else
            {
              if ( !v62 )
              {
                v82 = 1;
                goto LABEL_126;
              }
              nullsub_1(v214);
              v81 = sub_140001650(v62, 1);
              if ( v81 )
              {
                v173 = v81;
                sub_141684120(v81, v218, v62);
                v82 = v173;
LABEL_126:
                v179.m128i_i64[0] = v62;
                v173 = v82;
                v179.m128i_i64[1] = v82;
                v180.m256i_i64[0] = v62;
                v212 = 1;
                sub_1409E14D0(v174.m128i_i64, v215, v79);
                v212 = 0;
                sub_140470E80(&v200, v210 - 104, &v179, (__int64)&v174);
LABEL_129:
                if ( v200.m128i_i64[0] != -1 && v200.m128i_i64[0] )
                  sub_140001660(v200.m128i_i64[1], v200.m128i_i64[0], 1);
LABEL_132:
                v17.m128i_i64[0] = v214;
                v17.m128i_i64[1] = v213;
                goto LABEL_133;
              }
              v80 = v62;
              v153 = 1;
            }
            v217 = v221;
            v216 = v219;
            sub_1416C2D4B(v153, v80);
          }
          if ( *(_WORD *)v221 ^ 0x6E65 | *(unsigned __int8 *)(v221 + 2) ^ 0x76 )
            goto LABEL_133;
          v91 = v172;
          if ( v62 < 0 )
          {
            v154 = 0;
          }
          else
          {
            if ( !v62 )
            {
              v93 = 1;
              goto LABEL_128;
            }
            nullsub_1(v214);
            v92 = sub_140001650(v62, 1);
            if ( v92 )
            {
              v172 = v92;
              sub_141684120(v92, v218, v62);
              v93 = v172;
LABEL_128:
              v179.m128i_i64[0] = v62;
              v172 = v93;
              v179.m128i_i64[1] = v93;
              v180.m256i_i64[0] = v62;
              v211 = 1;
              sub_1409E14D0(v174.m128i_i64, v215, v79);
              v211 = 0;
              sub_140470E80(&v200, v210 - 56, &v179, (__int64)&v174);
              goto LABEL_129;
            }
            v91 = v62;
            v154 = 1;
          }
          v217 = v221;
          v216 = v219;
          sub_1416C2D4B(v154, v91);
        }
        v17.m128i_i64[1] = v213;
        v12 = v207;
        switch ( v62 )
        {
          case 3LL:
            if ( !(*(_WORD *)v218 ^ 0x7275 | *(unsigned __int8 *)(v218 + 2) ^ 0x6C) )
            {
              v217 = v221;
              v216 = -1;
              sub_1409E14D0(v179.m128i_i64, v215, v208);
              v87 = v210;
              if ( *(_BYTE *)(v210 - 7) == 3 )
              {
                v215 = v179.m128i_i64[1];
                sub_14149A6B0(&v174, v179.m128i_i64[1], v180.m256i_i64[0]);
                v218 = v174.m128i_i64[1];
                v88 = sub_140A6C2D0(aSse, 3u, v174.m128i_i64[1], v175.m256i_u64[0]);
                if ( v174.m128i_i64[0] )
                  sub_140001660(v218, v174.m128i_i64[0], 1);
                v87 = v210;
                *(_BYTE *)(v210 - 7) = v88 + 1;
                v12 = v207;
              }
              v89 = *(_QWORD *)(v87 - 128);
              v17.m128i_i64[1] = v213;
              if ( v89 != -1 && v89 )
              {
                sub_140001660(*(_QWORD *)(v87 - 120), v89, 1);
                v87 = v210;
              }
              v90 = (__m128i *)(v87 - 128);
              v90[1].m128i_i64[0] = v180.m256i_i64[0];
              *v90 = _mm_loadu_si128(&v179);
              v17.m128i_i64[0] = v214;
            }
            goto LABEL_133;
          case 4LL:
            if ( *(_DWORD *)v218 == 1701869940 )
              goto LABEL_114;
            if ( *(_DWORD *)v218 != 1936159329 )
              goto LABEL_133;
            v190.m128i_i64[0] = v215;
            v190.m128i_i64[1] = v208;
            v179.m128i_i64[0] = (__int64)&v190;
            v179.m128i_i64[1] = (__int64)sub_14041F680;
            v217 = v221;
            v216 = -1;
            sub_14149C0F0(&v200, &unk_1417A746F, &v179);
            v218 = v200.m128i_i64[1];
            sub_140F3FE00(&v174, v200.m128i_i64[1], v201);
            if ( v174.m128i_i32[0] == 2 )
            {
              v95 = _mm_loadu_si128((const __m128i *)&v174.m128i_u64[1]);
              *(_OWORD *)v180.m256i_i8 = *(_OWORD *)&v175.m256i_u64[1];
              v179 = v95;
              v96 = sub_140F3FD00(aValue, 5, &v179);
              if ( v96 && *(_BYTE *)v96 == 5 )
              {
                sub_140311F50(&v198, *(_QWORD *)(v96 + 16), *(_QWORD *)(v96 + 16) + 32LL * *(_QWORD *)(v96 + 24));
                sub_14034CAE0((unsigned __int8 *)&v179);
                v97 = v200.m128i_i64[0];
                if ( v200.m128i_i64[0] )
                {
                  v98 = v218;
                  goto LABEL_225;
                }
                goto LABEL_226;
              }
              sub_14034CAE0(&v174.m128i_u8[8]);
            }
            else
            {
              sub_14068D580(&v174);
            }
            if ( v200.m128i_i64[0] )
              sub_140001660(v218, v200.m128i_i64[0], 1);
            v217 = v221;
            v216 = -1;
            v107 = (_BYTE *)sub_14033BC10(v190.m128i_i64[0], v190.m128i_i64[1]);
            if ( !v108 || *v107 != 91 || v107[v108 - 1] != 93 )
            {
              v198.m128i_i64[0] = 0;
              v198.m128i_i64[1] = 8;
              v199 = 0;
              goto LABEL_226;
            }
            if ( v108 == 1 || (char)v107[1] < -64 )
            {
              v217 = v221;
              v216 = -1;
              sub_1416C2F60((_DWORD)v107, v108, 1, v108 - 1, (__int64)&off_1417A74D8);
            }
            v109 = v107 + 1;
            v200.m128i_i64[0] = 0;
            v200.m128i_i64[1] = 8;
            v201 = 0;
            v179.m128i_i64[0] = 0;
            v179.m128i_i64[1] = 1;
            v180.m256i_i64[0] = 0;
            v110 = (__int64)&v107[v108 - 1];
            v218 = 1;
LABEL_159:
            v111 = 0;
            v112 = 0;
LABEL_160:
            v113 = 0;
            v114 = v218;
            if ( v109 == (char *)v110 )
            {
LABEL_216:
              v139 = v179.m128i_i64[1];
              v140 = sub_14033BC10(v179.m128i_i64[1], v111);
              v142 = v141;
              sub_140388B60((unsigned int)&v174, v141, 0, 1, 1);
              v215 = v174.m128i_i64[1];
              if ( v174.m128i_i32[0] == 1 )
                sub_1416C2D4B(v215, v175.m256i_i64[0]);
              v218 = v175.m256i_i64[0];
              if ( v142 )
              {
                sub_141684120(v218, v140, v142);
                v143 = v201;
                if ( v201 == v200.m128i_i64[0] )
                  sub_141689AB0(&v200);
                v144 = v200.m128i_i64[1];
                v145 = 3 * v143;
                *(_QWORD *)(v200.m128i_i64[1] + 8 * v145) = v215;
                *(_QWORD *)(v144 + 8 * v145 + 8) = v218;
                *(_QWORD *)(v144 + 8 * v145 + 16) = v142;
                v201 = v143 + 1;
                v199 = v143 + 1;
                v198 = _mm_loadu_si128(&v200);
              }
              else
              {
                v199 = v201;
                v198 = _mm_loadu_si128(&v200);
                if ( v215 )
                  sub_140001660(v218, v215, 1);
              }
              v97 = v179.m128i_i64[0];
              if ( v179.m128i_i64[0] )
              {
                v98 = v139;
LABEL_225:
                sub_140001660(v98, v97, 1);
              }
LABEL_226:
              v218 = v210 - 176;
              sub_140334760(v210 - 176);
              v146 = (__m128i *)v218;
              if ( *(_QWORD *)v218 )
                sub_140001660(*(_QWORD *)(v210 - 168), 24LL * *(_QWORD *)v218, 8);
              v146[1].m128i_i64[0] = v199;
              *v146 = _mm_load_si128(&v198);
              if ( *(_BYTE *)(v210 - 7) == 3 && *(_QWORD *)(v210 - 160) )
                *(_BYTE *)(v210 - 7) = 0;
              v17.m128i_i64[0] = v214;
              goto LABEL_232;
            }
            break;
          case 7LL:
            if ( *(_DWORD *)v218 ^ 0x6D6D6F63 | *(_DWORD *)(v218 + 3) ^ 0x646E616D )
            {
              if ( *(_DWORD *)v218 ^ 0x62616E65 | *(_DWORD *)(v218 + 3) ^ 0x64656C62 )
                goto LABEL_133;
              v217 = v221;
              v216 = -1;
              sub_14149A6B0(&v174, v215, v208);
              v94 = v175.m256i_i64[0] == 4 && *(_DWORD *)v174.m128i_i64[1] == 1702195828;
              v17.m128i_i64[1] = v213;
              *(_BYTE *)(v210 - 8) = v94;
              v105 = v174.m128i_i64[0];
              if ( v174.m128i_i64[0] )
              {
                v106 = v174.m128i_i64[1];
                goto LABEL_147;
              }
            }
            else
            {
              v217 = v221;
              v216 = -1;
              sub_1409E14D0(v174.m128i_i64, v215, v208);
              v180.m256i_i64[0] = v175.m256i_i64[0];
              v179 = v174;
              v102 = v210;
              v103 = *(_QWORD *)(v210 - 152);
              if ( v103 != -1 && v103 )
              {
                sub_140001660(*(_QWORD *)(v210 - 144), v103, 1);
                v102 = v210;
              }
              v104 = (__m128i *)(v102 - 152);
              v104[1].m128i_i64[0] = v180.m256i_i64[0];
              *v104 = _mm_load_si128(&v179);
              v17.m128i_i64[1] = v213;
              if ( *(_BYTE *)(v102 - 7) == 3 )
              {
                *(_BYTE *)(v102 - 7) = 0;
                v17.m128i_i64[0] = v214;
                goto LABEL_133;
              }
            }
            goto LABEL_148;
          case 9LL:
            if ( *(_QWORD *)v218 ^ 0x726F70736E617274LL | *(unsigned __int8 *)(v218 + 8) ^ 0x74LL )
              goto LABEL_133;
LABEL_114:
            v217 = v221;
            v216 = -1;
            sub_1409E14D0(v174.m128i_i64, v215, v208);
            v218 = v174.m128i_i64[1];
            sub_14149A6B0(&v179, v174.m128i_i64[1], v175.m256i_i64[0]);
            v99 = v179.m128i_i64[1];
            if ( v180.m256i_i64[0] != 3 )
            {
              v17.m128i_i64[1] = v213;
              v100 = v210;
              if ( v180.m256i_i64[0] == 4 )
              {
                if ( *(_DWORD *)v179.m128i_i64[1] == 1886680168 )
                {
                  *(_BYTE *)(v210 - 7) = 1;
                  v101 = v179.m128i_i64[0];
                  if ( !v179.m128i_i64[0] )
                    goto LABEL_142;
                  goto LABEL_141;
                }
              }
              else if ( v180.m256i_i64[0] == 5
                     && !(*(_DWORD *)v179.m128i_i64[1] ^ 0x69647473 | *(unsigned __int8 *)(v179.m128i_i64[1] + 4) ^ 0x6F) )
              {
                *(_BYTE *)(v210 - 7) = 0;
                v101 = v179.m128i_i64[0];
                if ( !v179.m128i_i64[0] )
                  goto LABEL_142;
LABEL_141:
                sub_140001660(v99, v101, 1);
                goto LABEL_142;
              }
LABEL_140:
              *(_BYTE *)(v100 - 7) = 3;
              v101 = v179.m128i_i64[0];
              if ( !v179.m128i_i64[0] )
                goto LABEL_142;
              goto LABEL_141;
            }
            v17.m128i_i64[1] = v213;
            v100 = v210;
            if ( *(_WORD *)v179.m128i_i64[1] ^ 0x7373 | *(unsigned __int8 *)(v179.m128i_i64[1] + 2) ^ 0x65 )
              goto LABEL_140;
            *(_BYTE *)(v210 - 7) = 2;
            v101 = v179.m128i_i64[0];
            if ( v179.m128i_i64[0] )
              goto LABEL_141;
LABEL_142:
            v105 = v174.m128i_i64[0];
            if ( v174.m128i_i64[0] )
            {
              v106 = v218;
LABEL_147:
              sub_140001660(v106, v105, 1);
            }
LABEL_148:
            v17.m128i_i64[0] = v214;
            goto LABEL_133;
          default:
            goto LABEL_133;
        }
        while ( 1 )
        {
          v116 = (unsigned __int8)*v109;
          if ( *v109 < 0 )
          {
            v117 = v116 & 0x1F;
            v118 = v109[1] & 0x3F;
            if ( (unsigned __int8)v116 <= 0xDFu )
            {
              v109 += 2;
              v116 = v118 | (v117 << 6);
            }
            else
            {
              v119 = (v118 << 6) | v109[2] & 0x3F;
              if ( (unsigned __int8)*v109 < 0xF0u )
              {
                v109 += 3;
                v116 = (v117 << 12) | v119;
              }
              else
              {
                v120 = v109[3];
                v109 += 4;
                v116 = ((v117 & 7) << 18) | (v119 << 6) | v120 & 0x3F;
              }
            }
          }
          else
          {
            ++v109;
          }
          if ( (v113 & 1) != 0 )
            break;
          switch ( v116 )
          {
            case ',':
              if ( (v112 & 1) == 0 )
              {
                v218 = v114;
                v133 = sub_14033BC10(v114, v111);
                v135 = v134;
                sub_140388B60((unsigned int)&v174, v134, 0, 1, 1);
                v208 = v174.m128i_i64[1];
                if ( v174.m128i_i32[0] == 1 )
                  sub_1416C2D4B(v208, v175.m256i_i64[0]);
                v215 = v175.m256i_i64[0];
                if ( v135 )
                {
                  sub_141684120(v215, v133, v135);
                  v136 = v201;
                  if ( v201 == v200.m128i_i64[0] )
                    sub_141689AB0(&v200);
                  v137 = v200.m128i_i64[1];
                  v138 = 3 * v136;
                  *(_QWORD *)(v200.m128i_i64[1] + 8 * v138) = v208;
                  *(_QWORD *)(v137 + 8 * v138 + 8) = v215;
                  *(_QWORD *)(v137 + 8 * v138 + 16) = v135;
                  v201 = v136 + 1;
                  v180.m256i_i64[0] = 0;
                  goto LABEL_159;
                }
                v180.m256i_i64[0] = 0;
                v111 = 0;
                v112 = 0;
                if ( v208 )
                {
                  sub_140001660(v215, v208, 1);
                  goto LABEL_159;
                }
                goto LABEL_160;
              }
              v121 = v179.m128i_i64[0];
LABEL_185:
              if ( v121 == v111 )
                sub_141688D30((unsigned int)&v179, v111, 1, 1, 1);
              v114 = v179.m128i_i64[1];
              *(_BYTE *)(v179.m128i_i64[1] + v111) = v116;
              v115 = 1;
              goto LABEL_163;
            case '"':
              v218 = v114;
              v112 ^= 1u;
              goto LABEL_160;
            case '\\':
LABEL_203:
              v113 ^= 1u;
              if ( v109 == (char *)v110 )
                goto LABEL_216;
              break;
            default:
              v121 = v179.m128i_i64[0];
              if ( v116 < 0x80 )
                goto LABEL_185;
              v122 = 4LL - (v116 < 0x10000);
              if ( v116 < 0x800 )
                v122 = 2;
              if ( v122 > v179.m128i_i64[0] - v111 )
              {
                sub_141688D30((unsigned int)&v179, v111, v122, 1, 1);
                v114 = v179.m128i_i64[1];
              }
              v123 = v116 & 0x3F | 0x80;
              v124 = v116 >> 6;
              if ( v116 < 0x800 )
              {
                *(_BYTE *)(v114 + v111) = v124 | 0xC0;
                *(_BYTE *)(v114 + v111 + 1) = v123;
                v115 = 2;
              }
              else
              {
                v125 = v124 & 0x3F | 0x80;
                v126 = v116 >> 12;
                if ( v116 > 0xFFFF )
                {
                  *(_BYTE *)(v114 + v111) = (v116 >> 18) | 0xF0;
                  *(_BYTE *)(v114 + v111 + 1) = v126 & 0x3F | 0x80;
                  *(_BYTE *)(v114 + v111 + 2) = v125;
                  *(_BYTE *)(v114 + v111 + 3) = v123;
                  v115 = 4;
                }
                else
                {
                  *(_BYTE *)(v114 + v111) = v126 | 0xE0;
                  *(_BYTE *)(v114 + v111 + 1) = v125;
                  *(_BYTE *)(v114 + v111 + 2) = v123;
                  v115 = 3;
                }
              }
LABEL_163:
              v111 += v115;
              v180.m256i_i64[0] = v111;
              v113 = 0;
              if ( v109 == (char *)v110 )
                goto LABEL_216;
              break;
          }
        }
        if ( v116 >= 0x80 )
        {
          v128 = 4LL - (v116 < 0x10000);
          if ( v116 < 0x800 )
            v128 = 2;
          if ( v128 > v179.m128i_i64[0] - v111 )
            sub_141688D30((unsigned int)&v179, v111, v128, 1, 1);
          v129 = v116 & 0x3F | 0x80;
          v130 = v116 >> 6;
          v114 = v179.m128i_i64[1];
          if ( v116 >= 0x800 )
          {
            v131 = v130 & 0x3F | 0x80;
            v132 = v116 >> 12;
            if ( v116 > 0xFFFF )
            {
              *(_BYTE *)(v179.m128i_i64[1] + v111) = (v116 >> 18) | 0xF0;
              *(_BYTE *)(v114 + v111 + 1) = v132 & 0x3F | 0x80;
              *(_BYTE *)(v114 + v111 + 2) = v131;
              *(_BYTE *)(v114 + v111 + 3) = v129;
              v127 = 4;
            }
            else
            {
              *(_BYTE *)(v179.m128i_i64[1] + v111) = v132 | 0xE0;
              *(_BYTE *)(v114 + v111 + 1) = v131;
              *(_BYTE *)(v114 + v111 + 2) = v129;
              v127 = 3;
            }
          }
          else
          {
            *(_BYTE *)(v179.m128i_i64[1] + v111) = v130 | 0xC0;
            *(_BYTE *)(v114 + v111 + 1) = v129;
            v127 = 2;
          }
        }
        else
        {
          if ( v179.m128i_i64[0] == v111 )
            sub_141688D30((unsigned int)&v179, v111, 1, 1, 1);
          v114 = v179.m128i_i64[1];
          *(_BYTE *)(v179.m128i_i64[1] + v111) = v116;
          v127 = 1;
        }
        v111 += v127;
        v180.m256i_i64[0] = v111;
        goto LABEL_203;
      }
      v214 = v17.m128i_i64[1];
      v149 = 1;
LABEL_239:
      v206 = v221;
      v205 = v219;
      v224 = 1;
      sub_1416C2D4B(v149, v214);
    }
    v214 = 1;
LABEL_134:
    v17.m128i_i64[1] = v219;
  }
  while ( (v166 & 0x100) == 0 );
  si128 = _mm_load_si128((const __m128i *)v159);
  if ( *((_QWORD *)&v159 + 1) )
  {
    v19 = 225LL * *((_QWORD *)&v159 + 1) + 241;
    v20 = v159 - 224LL * *((_QWORD *)&v159 + 1) - 224;
    v151 = 16;
  }
  else
  {
    v151 = 0;
  }
  v174.m128i_i64[0] = v151;
  v174.m128i_i64[1] = v19;
  v175.m256i_i64[0] = v20;
  v175.m256i_i64[1] = v159;
  v175.m256i_i64[2] = v159 + 16;
  v175.m256i_i64[3] = v159 + *((_QWORD *)&v159 + 1) + 1;
  LOWORD(v176) = ~(unsigned __int16)_mm_movemask_epi8(si128);
  *((_QWORD *)&v176 + 1) = *((_QWORD *)&v160 + 1);
  v177.m128i_i64[0] = v170;
  v177.m128i_i64[1] = v12;
  v206 = v221;
  v205 = v17.m128i_i64[1];
  v224 = 0;
  sub_140319140(&v179, &v174);
  v174.m128i_i64[0] = (__int64)&v209;
  if ( v180.m256i_i64[0] >= 2uLL )
  {
    if ( v180.m256i_i64[0] >= 0x15uLL )
      sub_140B59690(v179.m128i_i64[1], v180.m256i_i64[0], &v174);
    else
      sub_140556FF0(v179.m128i_i64[1], v180.m256i_i64[0], 1, &v174);
  }
  v174 = v179;
  v175.m256i_i64[0] = v180.m256i_i64[0];
  if ( (unsigned __int64)(v219 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v221, v219, 1);
  v152 = v193;
  if ( v194.m128i_i64[0] != -1 && v194.m128i_i64[0] )
    sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1);
  a1[3] = v175.m256i_i64[0];
  *(__m128i *)(a1 + 1) = _mm_load_si128(&v174);
  *a1 = -1;
  if ( v169 )
    sub_140001660(v152, v169, 1);
  if ( v167 )
    sub_140001660(v170, v167, 1);
  return a1;
}