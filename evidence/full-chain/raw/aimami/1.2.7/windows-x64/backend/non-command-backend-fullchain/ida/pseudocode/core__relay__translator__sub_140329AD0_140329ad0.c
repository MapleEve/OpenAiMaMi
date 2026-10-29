// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140329ad0 | name sub_140329AD0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140329AD0(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rdi
  __int64 v5; // rax
  const __m128i *v6; // rbx
  __int64 v7; // rax
  unsigned __int8 v8; // r14
  int v9; // eax
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __m128i *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  __m128i *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const __m128i *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  signed __int64 v36; // r12
  const __m128i *v37; // r15
  __int64 v38; // rdi
  __m128i *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  const __m128i *v42; // r15
  __int64 v43; // rdi
  const __m128i *v44; // r12
  __m128i *v45; // rax
  char v46; // r15
  __int64 v47; // rax
  __int8 v48; // di
  __int64 v49; // rcx
  const __m128i *v50; // rdi
  signed __int64 v51; // r14
  __m128i *v52; // rax
  _WORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  const __m128i *v56; // r12
  __m128i *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rcx
  __m128i *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _DWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  bool v67; // zf
  unsigned __int64 v68; // r15
  __m128i *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // r15
  __m128i *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int128 v78; // xmm0
  __int64 v79; // rcx
  __int64 v80; // r15
  signed __int64 v81; // r14
  __int64 v82; // rax
  _DWORD *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r12
  __m128i *v86; // rax
  __int64 v87; // r15
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rbx
  __m128i *v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int128 v97; // xmm0
  __int64 v98; // rdx
  __int64 v99; // r8
  const __m128i *v100; // rcx
  const __m128i *v101; // rdi
  __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  const __m128i *v107; // r15
  unsigned __int64 v108; // r13
  __int64 v109; // r12
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // r12
  const __m128i *v114; // r13
  __int64 v115; // rbx
  __int64 v116; // r15
  __m128i *v117; // rax
  __int64 v118; // rax
  __int8 v119; // bl
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rcx
  __int128 v130; // xmm0
  __int64 v132; // rax
  __int64 v133; // r14
  __m256i *v134; // rbx
  __int128 *v135; // rdi
  __int64 v136; // r12
  const __m128i *v137; // rcx
  signed __int64 v138; // r13
  _DWORD *v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  void *v143; // rax
  _QWORD *v144; // r15
  __int128 *v145; // rsi
  __int64 v146; // rdi
  __m256i *v147; // r14
  __int64 v148; // rbx
  __m128i *v149; // rax
  __int64 v150; // r12
  __int64 v151; // rcx
  _DWORD *v152; // rax
  __int128 *v153; // r13
  __m256i *v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rcx
  __int128 v158; // xmm0
  __int64 v159; // r12
  __int64 v160; // rcx
  _DWORD *v161; // rax
  __int64 v162; // rcx
  __m128i *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rcx
  const __m128i *v167; // r12
  unsigned __int64 v168; // rdi
  __int64 v169; // r14
  _DWORD *v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rcx
  _DWORD *v174; // rax
  char v175; // al
  __int64 v176; // rdx
  __int64 v177; // rcx
  void *v178; // rax
  __int64 v179; // rdi
  __int64 v180; // rax
  __int64 v181; // rcx
  __int128 v182; // xmm0
  __int64 v183; // rsi
  _QWORD *v184; // rdi
  __int64 v185; // rdx
  __int64 v186; // rax
  __m128i *v187; // rax
  __int64 v188; // rbx
  __int64 v189; // rdi
  __int64 v190; // rax
  __int64 v191; // rcx
  __int128 v192; // xmm0
  __int64 v193; // rsi
  _QWORD *v194; // rdi
  __int64 v195; // rdx
  __int128 v196; // [rsp+30h] [rbp-50h] BYREF
  __int64 v197; // [rsp+40h] [rbp-40h]
  __int64 v198; // [rsp+48h] [rbp-38h] BYREF
  __int64 v199; // [rsp+50h] [rbp-30h]
  __int64 v200; // [rsp+58h] [rbp-28h]
  __int128 v201; // [rsp+60h] [rbp-20h] BYREF
  __int64 v202; // [rsp+70h] [rbp-10h]
  const __m128i *v203; // [rsp+78h] [rbp-8h]
  __int64 v204; // [rsp+80h] [rbp+0h] BYREF
  _DWORD *v205; // [rsp+88h] [rbp+8h]
  __int64 v206; // [rsp+90h] [rbp+10h]
  __int64 v207; // [rsp+98h] [rbp+18h]
  __m256i v208; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int8 v209; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v210[15]; // [rsp+C1h] [rbp+41h]
  __int128 v211; // [rsp+D0h] [rbp+50h]
  __int64 v212; // [rsp+E8h] [rbp+68h]
  __int128 v213; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v214; // [rsp+100h] [rbp+80h]
  char v215; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int128 v216; // [rsp+110h] [rbp+90h] BYREF
  __int64 v217; // [rsp+120h] [rbp+A0h]
  __int128 v218; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v219; // [rsp+138h] [rbp+B8h]
  __m256i v220; // [rsp+140h] [rbp+C0h] BYREF
  const __m128i *v221; // [rsp+168h] [rbp+E8h]
  const __m128i *v222; // [rsp+170h] [rbp+F0h]
  __int64 v223; // [rsp+178h] [rbp+F8h]
  __m256i v224; // [rsp+180h] [rbp+100h] BYREF
  __int64 v225; // [rsp+1A0h] [rbp+120h]
  __m256i v226; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v227; // [rsp+1C8h] [rbp+148h]
  char v228; // [rsp+1D5h] [rbp+155h]
  char v229; // [rsp+1D6h] [rbp+156h]
  char v230; // [rsp+1D7h] [rbp+157h]
  char v231; // [rsp+1D8h] [rbp+158h]
  char v232; // [rsp+1D9h] [rbp+159h]
  char v233; // [rsp+1DAh] [rbp+15Ah]
  char v234; // [rsp+1DBh] [rbp+15Bh]
  char v235; // [rsp+1DCh] [rbp+15Ch]
  char v236; // [rsp+1DDh] [rbp+15Dh]
  char v237; // [rsp+1DEh] [rbp+15Eh]
  char v238; // [rsp+1DFh] [rbp+15Fh]
  _BYTE v239[56]; // [rsp+1E0h] [rbp+160h] BYREF
  char v240; // [rsp+21Ah] [rbp+19Ah]
  char v241; // [rsp+21Bh] [rbp+19Bh]
  char v242; // [rsp+21Ch] [rbp+19Ch]
  char v243; // [rsp+21Dh] [rbp+19Dh]
  char v244; // [rsp+21Eh] [rbp+19Eh]
  char v245; // [rsp+21Fh] [rbp+19Fh]
  __int64 v246; // [rsp+220h] [rbp+1A0h]

  v246 = -2;
  v4 = 4;
  v5 = sub_1416419F0(
         "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_t"
         "okensstreamdoubaoreasoning_effortnone",
         4,
         a1);
  v6 = (const __m128i *)"usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
  if ( v5 && *(_BYTE *)v5 == 3 )
  {
    v6 = *(const __m128i **)(v5 + 16);
    v4 = *(_QWORD *)(v5 + 24);
  }
  v7 = sub_1416419F0(
         "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstrea"
         "mdoubaoreasoning_effortnone",
         7,
         a1);
  if ( !v7 )
  {
    v239[0] = 0;
    v211 = *(_OWORD *)&v239[16];
    v209 = 0;
    *(_QWORD *)v210 = *(_QWORD *)&v239[1];
    *(_DWORD *)&v210[8] = *(_DWORD *)&v239[9];
    *(_WORD *)&v210[12] = *(_WORD *)&v239[13];
    v210[14] = v239[15];
    v9 = 0;
    goto LABEL_33;
  }
  v8 = *(_BYTE *)v7;
  switch ( *(_BYTE *)v7 )
  {
    case 0:
      break;
    case 1:
      v239[1] = *(_BYTE *)(v7 + 1);
      break;
    case 2:
      *(_OWORD *)&v239[8] = *(_OWORD *)(v7 + 8);
      break;
    case 3:
      sub_1416AC440(&v239[8], v7 + 8);
      break;
    case 4:
      sub_1403918C0(&v239[8], *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24));
      break;
    case 5:
      if ( *(_QWORD *)(v7 + 24) )
      {
        v15 = *(_QWORD *)(v7 + 8);
        if ( !v15 )
          sub_141939020(&off_141A54900);
        sub_140E11B90(&v239[8], v15, *(_QWORD *)(v7 + 16));
      }
      else
      {
        *(_QWORD *)&v239[8] = 0;
        *(_QWORD *)&v239[24] = 0;
      }
      break;
  }
  v211 = *(_OWORD *)&v239[16];
  v209 = v8;
  v210[0] = v239[1];
  *(_DWORD *)&v210[1] = *(_DWORD *)&v239[2];
  *(_WORD *)&v210[5] = *(_WORD *)&v239[6];
  *(_QWORD *)&v210[7] = *(_QWORD *)&v239[8];
  v239[0] = 0;
  sub_14002F9D0(v239);
  v9 = v8;
  if ( v8 == 3 )
  {
    v220.m256i_i64[0] = 0;
    v220.m256i_i64[2] = 0;
    nullsub_1(v22);
    v10 = (_DWORD *)sub_140001650(4, 1);
    if ( !v10 )
      sub_141938D2B(1, 4);
    *v10 = 1701605234;
    v226.m256i_i64[0] = 4;
    v226.m256i_i64[1] = (__int64)v10;
    v226.m256i_i64[2] = 4;
    if ( v4 < 0 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( v4 )
    {
      nullsub_1(v11);
      v12 = 1;
      v13 = (__m128i *)sub_140001650(v4, 1);
      if ( !v13 )
      {
LABEL_11:
        v238 = 1;
        sub_141938D2B(v12, v4);
      }
      v14 = (__int64)v13;
      sub_1418F44E0(v13, v6, v4);
    }
    else
    {
      v14 = 1;
    }
    v239[0] = 3;
    *(_QWORD *)&v239[8] = v4;
    *(_QWORD *)&v239[16] = v14;
    *(_QWORD *)&v239[24] = v4;
    v238 = 0;
    sub_140E72AA0(&v224, &v220, &v226, v239);
    if ( v224.m256i_i8[0] != -1 )
      sub_14002F9D0(&v224);
    nullsub_1(v16);
    v17 = (_DWORD *)sub_140001650(7, 1);
    if ( !v17 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v17 + 3) = 1953391988;
    *v17 = 1953394531;
    v226.m256i_i64[0] = 7;
    v226.m256i_i64[1] = (__int64)v17;
    v226.m256i_i64[2] = 7;
    if ( v211 < 0 )
    {
      v19 = 0;
      goto LABEL_27;
    }
    if ( *((_QWORD *)&v211 + 1) )
    {
      nullsub_1(v18);
      v19 = 1;
      v20 = (__m128i *)sub_140001650(*((_QWORD *)&v211 + 1), 1);
      if ( !v20 )
      {
LABEL_27:
        v237 = 1;
        sub_141938D2B(v19, *((_QWORD *)&v211 + 1));
      }
      v21 = (__int64)v20;
      sub_1418F44E0(v20, (const __m128i *)v211, *((unsigned __int64 *)&v211 + 1));
    }
    else
    {
      v21 = 1;
    }
    v239[0] = 3;
    *(_QWORD *)&v239[8] = *((_QWORD *)&v211 + 1);
    *(_QWORD *)&v239[16] = v21;
    *(_QWORD *)&v239[24] = *((_QWORD *)&v211 + 1);
    v237 = 0;
    sub_140E72AA0(&v224, &v220, &v226, v239);
    if ( v224.m256i_i8[0] != -1 )
      sub_14002F9D0(&v224);
    *(_OWORD *)&v239[8] = *(_OWORD *)v220.m256i_i8;
    *(_QWORD *)&v239[24] = v220.m256i_i64[2];
    v239[0] = 5;
    v127 = a2[2];
    if ( v127 == *a2 )
      sub_14190F570(a2);
    v128 = a2[1];
    v129 = 32 * v127;
    v130 = *(_OWORD *)v239;
    *(_OWORD *)(v128 + v129 + 16) = *(_OWORD *)&v239[16];
    *(_OWORD *)(v128 + v129) = v130;
    a2[2] = v127 + 1;
    return sub_14002F9D0(&v209);
  }
LABEL_33:
  if ( v9 != 4 )
    goto LABEL_118;
  if ( v4 == 4 )
  {
    if ( v6->m128i_i32[0] != 1919251317 )
      goto LABEL_118;
    *(_QWORD *)&v218 = 0;
    *((_QWORD *)&v218 + 1) = 8;
    v219 = 0;
    *(_QWORD *)&v213 = 0;
    *((_QWORD *)&v213 + 1) = 8;
    v214 = 0;
    v101 = (const __m128i *)v211;
    v222 = (const __m128i *)(v211 + 32LL * *((_QWORD *)&v211 + 1));
    v102 = 0x746C757365725F6CLL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          do
          {
            v223 = (__int64)v101;
            if ( v101 == v222 )
            {
              v132 = *((_QWORD *)&v213 + 1);
              v133 = *((_QWORD *)&v213 + 1) + 56 * v214;
              v204 = *((_QWORD *)&v213 + 1);
              v205 = *((_DWORD **)&v213 + 1);
              v206 = v213;
              v207 = v133;
              v134 = &v224;
              v135 = &v201;
              if ( *((_QWORD *)&v213 + 1) != v133 )
              {
                do
                {
                  v136 = v132 + 56;
                  v205 = (_DWORD *)(v132 + 56);
                  v137 = *(const __m128i **)v132;
                  v221 = *(const __m128i **)(v132 + 8);
                  v138 = *(_QWORD *)(v132 + 16);
                  v208 = *(__m256i *)(v132 + 24);
                  if ( v137 == (const __m128i *)-1LL )
                    break;
                  v227 = (__int64)v137;
                  v220 = v208;
                  *(_QWORD *)&v201 = 0;
                  v202 = 0;
                  nullsub_1(v137);
                  v139 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v139 )
                    sub_141938D2B(1, 4);
                  *v139 = 1701605234;
                  *(_QWORD *)&v216 = 4;
                  *((_QWORD *)&v216 + 1) = v139;
                  v217 = 4;
                  nullsub_1(v140);
                  v225 = sub_140001650(4, 1);
                  if ( !v225 )
                    sub_141938D2B(1, 4);
                  v212 = v136;
                  v141 = v225;
                  *(_DWORD *)v225 = 1819242356;
                  v239[0] = 3;
                  *(_QWORD *)&v239[8] = 4;
                  *(_QWORD *)&v239[16] = v141;
                  *(_QWORD *)&v239[24] = 4;
                  sub_140E72AA0(v134, v135, &v216, v239);
                  if ( v224.m256i_i8[0] != -1 )
                    sub_14002F9D0(v134);
                  nullsub_1(v142);
                  v143 = (void *)sub_140001650(12, 1);
                  if ( !v143 )
                    sub_141938D2B(1, 12);
                  qmemcpy(v143, "tool_call_id", 12);
                  *(_QWORD *)&v216 = 12;
                  *((_QWORD *)&v216 + 1) = v143;
                  v217 = 12;
                  if ( v138 < 0 )
                  {
                    v148 = 0;
LABEL_231:
                    v235 = 1;
                    sub_141938D2B(v148, v138);
                  }
                  if ( v138 )
                  {
                    v144 = a2;
                    v145 = v135;
                    v146 = v133;
                    v147 = v134;
                    nullsub_1(0x6C61635F6C6F6F74LL);
                    v148 = 1;
                    v149 = (__m128i *)sub_140001650(v138, 1);
                    if ( !v149 )
                      goto LABEL_231;
                    v150 = (__int64)v149;
                    sub_1418F44E0(v149, v221, v138);
                    v134 = v147;
                    v133 = v146;
                    v135 = v145;
                    a2 = v144;
                  }
                  else
                  {
                    v150 = 1;
                  }
                  v239[0] = 3;
                  *(_QWORD *)&v239[8] = v138;
                  *(_QWORD *)&v239[16] = v150;
                  *(_QWORD *)&v239[24] = v138;
                  v235 = 0;
                  sub_140E72AA0(v134, v135, &v216, v239);
                  if ( v224.m256i_i8[0] != -1 )
                    sub_14002F9D0(v134);
                  nullsub_1(v151);
                  v152 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v152 )
                    sub_141938D2B(1, 7);
                  *(_DWORD *)((char *)v152 + 3) = 1953391988;
                  *v152 = 1953394531;
                  *(_QWORD *)&v216 = 7;
                  *((_QWORD *)&v216 + 1) = v152;
                  v217 = 7;
                  v240 = 1;
                  sub_140412420(v239, &v220);
                  if ( v239[0] == 0xFF )
                  {
                    v224.m256i_i64[0] = *(_QWORD *)&v239[8];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v224,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E9260);
                  }
                  v224 = *(__m256i *)v239;
                  v240 = 0;
                  sub_140E72AA0(v239, v135, &v216, v134);
                  if ( v239[0] != 0xFF )
                    sub_14002F9D0(v239);
                  v153 = v135;
                  v154 = v134;
                  v226.m256i_i64[3] = v202;
                  *(_OWORD *)&v226.m256i_u64[1] = v201;
                  v226.m256i_i8[0] = 5;
                  v155 = a2[2];
                  if ( v155 == *a2 )
                    sub_14190F570(a2);
                  v156 = a2[1];
                  v157 = 32 * v155;
                  v158 = *(_OWORD *)v226.m256i_i8;
                  *(_OWORD *)(v156 + v157 + 16) = *(_OWORD *)&v226.m256i_u64[2];
                  *(_OWORD *)(v156 + v157) = v158;
                  a2[2] = v155 + 1;
                  sub_14002F9D0(&v220);
                  v159 = v212;
                  v134 = v154;
                  if ( v227 )
                    sub_140001660(v221, v227, 1);
                  v132 = v159;
                  v135 = v153;
                }
                while ( v159 != v133 );
              }
              sub_1403FA090(&v204);
              if ( v219 )
              {
                v220.m256i_i64[0] = 0;
                v220.m256i_i64[2] = 0;
                nullsub_1(v160);
                v161 = (_DWORD *)sub_140001650(4, 1);
                if ( !v161 )
                  sub_141938D2B(1, 4);
                *v161 = 1701605234;
                v226.m256i_i64[0] = 4;
                v226.m256i_i64[1] = (__int64)v161;
                v226.m256i_i64[2] = 4;
                nullsub_1(v162);
                v163 = (__m128i *)sub_140001650(4, 1);
                v227 = (__int64)v163;
                if ( !v163 )
                  sub_141938D2B(1, 4);
                v163->m128i_i32[0] = 1919251317;
                v239[0] = 3;
                *(_QWORD *)&v239[8] = 4;
                *(_QWORD *)&v239[16] = v163;
                *(_QWORD *)&v239[24] = 4;
                sub_140E72AA0(&v224, &v220, &v226, v239);
                if ( v224.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v224);
                nullsub_1(v164);
                v165 = sub_140001650(7, 1);
                if ( !v165 )
                  sub_141938D2B(1, 7);
                *(_DWORD *)(v165 + 3) = 1953391988;
                *(_DWORD *)v165 = 1953394531;
                v226.m256i_i64[0] = 7;
                v227 = v165;
                v226.m256i_i64[1] = v165;
                v226.m256i_i64[2] = 7;
                sub_140D1EE10((unsigned int)v239, DWORD2(v218), v219, (unsigned int)&unk_1419E808A, 1);
                v167 = *(const __m128i **)&v239[8];
                v168 = *(_QWORD *)&v239[16];
                v225 = *(_QWORD *)&v239[8];
                v227 = *(_QWORD *)v239;
                if ( *(__int64 *)&v239[16] < 0 )
                {
                  v169 = 0;
                  goto LABEL_229;
                }
                if ( *(_QWORD *)&v239[16] )
                {
                  nullsub_1(v166);
                  v169 = 1;
                  v187 = (__m128i *)sub_140001650(v168, 1);
                  if ( !v187 )
                  {
LABEL_229:
                    v236 = 1;
                    sub_141938D2B(v169, v168);
                  }
                  v188 = (__int64)v187;
                  sub_1418F44E0(v187, v167, v168);
                }
                else
                {
                  v188 = 1;
                }
                v239[0] = 3;
                *(_QWORD *)&v239[8] = v168;
                *(_QWORD *)&v239[16] = v188;
                *(_QWORD *)&v239[24] = v168;
                v236 = 0;
                sub_140E72AA0(&v224, &v220, &v226, v239);
                if ( v224.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v224);
                if ( v227 )
                  sub_140001660(v225, v227, 1);
                *(_OWORD *)&v239[8] = *(_OWORD *)v220.m256i_i8;
                *(_QWORD *)&v239[24] = v220.m256i_i64[2];
                v239[0] = 5;
                v189 = a2[2];
                if ( v189 == *a2 )
                  sub_14190F570(a2);
                v190 = a2[1];
                v191 = 32 * v189;
                v192 = *(_OWORD *)v239;
                *(_OWORD *)(v190 + v191 + 16) = *(_OWORD *)&v239[16];
                *(_OWORD *)(v190 + v191) = v192;
                a2[2] = v189 + 1;
                v193 = v219;
                if ( v219 )
                {
                  v194 = (_QWORD *)(*((_QWORD *)&v218 + 1) + 8LL);
                  do
                  {
                    v195 = *(v194 - 1);
                    if ( v195 )
                      sub_140001660(*v194, v195, 1);
                    v194 += 3;
                    --v193;
                  }
                  while ( v193 );
                }
              }
              v186 = v218;
              if ( !(_QWORD)v218 )
                return sub_14002F9D0(&v209);
              v100 = *((const __m128i **)&v218 + 1);
LABEL_261:
              v98 = 24 * v186;
              v99 = 8;
LABEL_148:
              sub_140001660(v100, v98, v99);
              return sub_14002F9D0(&v209);
            }
            v103 = sub_1416419F0(aType_4, 4, v101);
            v101 = (const __m128i *)(v223 + 32);
          }
          while ( !v103 || *(_BYTE *)v103 != 3 );
          v104 = *(_QWORD *)(v103 + 16);
          v105 = *(_QWORD *)(v103 + 24);
          if ( v105 == 11 )
            break;
          if ( v105 == 4 && *(_DWORD *)v104 == 1954047348 )
          {
            v106 = sub_1416419F0(aText_3, 4, v223);
            if ( v106 )
            {
              if ( *(_BYTE *)v106 == 3 )
              {
                v107 = *(const __m128i **)(v106 + 16);
                v108 = *(_QWORD *)(v106 + 24);
                sub_14072C410((unsigned int)v239, v108, 0, 1, 1);
                v109 = *(_QWORD *)&v239[8];
                if ( *(_DWORD *)v239 == 1 )
                  sub_141938D2B(*(_QWORD *)&v239[8], *(_QWORD *)&v239[16]);
                v110 = *(_QWORD *)&v239[16];
                if ( v108 )
                  sub_1418F44E0(*(__m128i **)&v239[16], v107, v108);
                *(_QWORD *)v239 = v109;
                *(_QWORD *)&v239[8] = v110;
                *(_QWORD *)&v239[16] = v108;
                sub_1401F4600(&v218, v239);
                v102 = 0x746C757365725F6CLL;
              }
            }
          }
        }
      }
      while ( *(_QWORD *)v104 ^ 0x7365725F6C6F6F74LL | v102 ^ *(_QWORD *)(v104 + 3) );
      v111 = sub_1416419F0(aToolUseId_0, 11, v223);
      v113 = 12;
      if ( v111 )
      {
        v114 = (const __m128i *)&unk_1419E8518;
        if ( *(_BYTE *)v111 == 3 )
        {
          v112 = *(_QWORD *)(v111 + 24);
          if ( v112 < 0 )
          {
            v116 = 0;
            goto LABEL_240;
          }
          v115 = v102;
          if ( !v112 )
          {
            v227 = 1;
            v225 = 0;
            goto LABEL_171;
          }
          v114 = *(const __m128i **)(v111 + 16);
          v113 = *(_QWORD *)(v111 + 24);
        }
      }
      else
      {
        v114 = (const __m128i *)&unk_1419E8518;
      }
      v115 = v102;
      nullsub_1(v112);
      v116 = 1;
      v117 = (__m128i *)sub_140001650(v113, 1);
      if ( !v117 )
      {
        v227 = v113;
LABEL_240:
        sub_141938D2B(v116, v227);
      }
      v227 = (__int64)v117;
      v225 = v113;
      sub_1418F44E0(v117, v114, v113);
LABEL_171:
      v242 = 1;
      v118 = sub_1416419F0(
               "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_token"
               "sstreamdoubaoreasoning_effortnone",
               7,
               v223);
      v102 = v115;
      if ( v118 )
      {
        v119 = *(_BYTE *)v118;
        switch ( *(_BYTE *)v118 )
        {
          case 0:
            break;
          case 1:
            v239[1] = *(_BYTE *)(v118 + 1);
            break;
          case 2:
            *(_OWORD *)&v239[8] = *(_OWORD *)(v118 + 8);
            break;
          case 3:
            v242 = 1;
            sub_1416AC440(&v239[8], v118 + 8);
            break;
          case 4:
            v120 = *(_QWORD *)(v118 + 16);
            v121 = *(_QWORD *)(v118 + 24);
            v242 = 1;
            sub_1403918C0(&v239[8], v120, v121);
            break;
          case 5:
            v242 = 1;
            sub_140E8D7E0(&v239[8], v118 + 8);
            break;
        }
        *(_OWORD *)&v224.m256i_u64[2] = *(_OWORD *)&v239[16];
        *(_OWORD *)&v224.m256i_i8[1] = *(_OWORD *)&v239[1];
        *(_QWORD *)&v239[8] = 0;
        *(_OWORD *)&v239[16] = 1u;
        v239[0] = 3;
        v224.m256i_i8[0] = v119;
        v242 = 1;
        sub_14002F9D0(v239);
      }
      else
      {
        *(_QWORD *)&v239[8] = 0;
        *(_OWORD *)&v239[16] = 1u;
        v239[0] = 3;
        v224.m256i_i8[0] = 3;
        *(__int32 *)((char *)v224.m256i_i32 + 1) = *(_DWORD *)&v239[1];
        *(__int16 *)((char *)&v224.m256i_i16[2] + 1) = *(_WORD *)&v239[5];
        v224.m256i_i8[7] = v239[7];
        v224.m256i_i64[1] = 0;
        *(_OWORD *)&v224.m256i_u64[2] = 1u;
        v119 = 3;
      }
      if ( v119 == 3 )
      {
        v241 = 1;
        sub_1416AC440(&v196, &v224.m256i_u64[1]);
      }
      else if ( v119 == 4 )
      {
        v241 = 1;
        sub_1403E0070(&v226, v224.m256i_i64[2], v224.m256i_i64[2] + 32 * v224.m256i_i64[3]);
        v221 = (const __m128i *)v226.m256i_i64[1];
        sub_140D1F3D0((unsigned int)v239, v226.m256i_i32[2], v226.m256i_i32[4], (unsigned int)&unk_1419E808A, 1);
        v197 = *(_QWORD *)&v239[16];
        v196 = *(_OWORD *)v239;
        if ( v226.m256i_i64[0] )
          sub_140001660(v221, 16 * v226.m256i_i64[0], 8);
      }
      else
      {
        v226.m256i_i64[0] = 0;
        *(_OWORD *)&v226.m256i_u64[1] = 1u;
        *(_QWORD *)&v239[16] = 1610612768;
        *(_QWORD *)v239 = &v226;
        *(_QWORD *)&v239[8] = &off_1419E98E0;
        if ( (unsigned __int8)sub_141642FA0(&v224, v239) )
          sub_141939040(
            (unsigned int)aADisplayImplem_0,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_1419E6AE0,
            (__int64)&off_1419EB798);
        v197 = v226.m256i_i64[2];
        v196 = *(_OWORD *)v226.m256i_i8;
      }
      *(_QWORD *)v239 = v225;
      *(_QWORD *)&v239[8] = v227;
      *(_QWORD *)&v239[16] = v225;
      *(__int64 *)((char *)&v226.m256i_i64[2] + 7) = v197;
      *(_OWORD *)((char *)&v226.m256i_u32[1] + 3) = v196;
      v239[24] = 3;
      *(_OWORD *)&v239[40] = *(_OWORD *)((char *)&v226.m256i_u64[1] + 7);
      *(_OWORD *)&v239[25] = *(_OWORD *)v226.m256i_i8;
      v122 = v214;
      if ( v214 == (_QWORD)v213 )
        sub_141910060(&v213);
      v123 = *((_QWORD *)&v213 + 1);
      v124 = 56 * v122;
      *(_QWORD *)(*((_QWORD *)&v213 + 1) + v124 + 48) = *(_QWORD *)&v239[48];
      v125 = *(_OWORD *)v239;
      v126 = *(_OWORD *)&v239[16];
      *(_OWORD *)(v123 + v124 + 32) = *(_OWORD *)&v239[32];
      *(_OWORD *)(v123 + v124 + 16) = v126;
      *(_OWORD *)(v123 + v124) = v125;
      v214 = v122 + 1;
      v242 = 0;
      sub_14002F9D0(&v224);
    }
  }
  if ( v4 != 9 || (v23 = (_QWORD *)(v6->m128i_i64[0] ^ 0x6E61747369737361LL | v6->m128i_u8[8] ^ 0x74LL)) != nullptr )
  {
LABEL_118:
    sub_1402E2550((unsigned __int64 *)v239, &v209);
    v80 = *(_QWORD *)v239;
    v81 = 0;
    if ( *(_QWORD *)v239 == -1 )
      v80 = 0;
    v82 = 1;
    if ( *(_QWORD *)v239 != -1 )
      v82 = *(_QWORD *)&v239[8];
    v222 = (const __m128i *)v82;
    if ( *(_QWORD *)v239 != -1 )
      v81 = *(_QWORD *)&v239[16];
    v220.m256i_i64[0] = 0;
    v220.m256i_i64[2] = 0;
    nullsub_1(v79);
    v83 = (_DWORD *)sub_140001650(4, 1);
    v223 = v80;
    if ( !v83 )
      sub_141938D2B(1, 4);
    *v83 = 1701605234;
    v226.m256i_i64[0] = 4;
    v226.m256i_i64[1] = (__int64)v83;
    v226.m256i_i64[2] = 4;
    if ( v4 < 0 )
    {
      v85 = 0;
      goto LABEL_127;
    }
    if ( v4 )
    {
      nullsub_1(v84);
      v85 = 1;
      v86 = (__m128i *)sub_140001650(v4, 1);
      if ( !v86 )
      {
LABEL_127:
        v229 = 1;
        sub_141938D2B(v85, v4);
      }
      v87 = (__int64)v86;
      sub_1418F44E0(v86, v6, v4);
    }
    else
    {
      v87 = 1;
    }
    v239[0] = 3;
    *(_QWORD *)&v239[8] = v4;
    *(_QWORD *)&v239[16] = v87;
    *(_QWORD *)&v239[24] = v4;
    v229 = 0;
    sub_140E72AA0(&v224, &v220, &v226, v239);
    if ( v224.m256i_i8[0] != -1 )
      sub_14002F9D0(&v224);
    nullsub_1(v88);
    v89 = (_DWORD *)sub_140001650(7, 1);
    if ( !v89 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v89 + 3) = 1953391988;
    *v89 = 1953394531;
    v226.m256i_i64[0] = 7;
    v226.m256i_i64[1] = (__int64)v89;
    v226.m256i_i64[2] = 7;
    if ( v81 < 0 )
    {
      v91 = 0;
      goto LABEL_137;
    }
    if ( v81 )
    {
      nullsub_1(v90);
      v91 = 1;
      v92 = (__m128i *)sub_140001650(v81, 1);
      if ( !v92 )
      {
LABEL_137:
        v228 = 1;
        sub_141938D2B(v91, v81);
      }
      v93 = (__int64)v92;
      sub_1418F44E0(v92, v222, v81);
    }
    else
    {
      v93 = 1;
    }
    v239[0] = 3;
    *(_QWORD *)&v239[8] = v81;
    *(_QWORD *)&v239[16] = v93;
    *(_QWORD *)&v239[24] = v81;
    v228 = 0;
    sub_140E72AA0(&v224, &v220, &v226, v239);
    if ( v224.m256i_i8[0] != -1 )
      sub_14002F9D0(&v224);
    *(_OWORD *)&v239[8] = *(_OWORD *)v220.m256i_i8;
    *(_QWORD *)&v239[24] = v220.m256i_i64[2];
    v239[0] = 5;
    v94 = a2[2];
    if ( v94 == *a2 )
      sub_14190F570(a2);
    v95 = a2[1];
    v96 = 32 * v94;
    v97 = *(_OWORD *)v239;
    *(_OWORD *)(v95 + v96 + 16) = *(_OWORD *)&v239[16];
    *(_OWORD *)(v95 + v96) = v97;
    a2[2] = v94 + 1;
    v98 = v223;
    if ( !v223 )
      return sub_14002F9D0(&v209);
    v99 = 1;
    v100 = v222;
    goto LABEL_148;
  }
  v198 = 0;
  v199 = 8;
  v200 = 0;
  *(_QWORD *)&v218 = 0;
  *((_QWORD *)&v218 + 1) = 8;
  v219 = 0;
  v24 = v211;
  v25 = v211 + 32LL * *((_QWORD *)&v211 + 1);
  while ( v24 != v25 )
  {
    v26 = v24;
    v243 = 1;
    v27 = sub_1416419F0(aType_4, 4, v24);
    v24 += 32;
    if ( v27 && *(_BYTE *)v27 == 3 )
    {
      v23 = *(_QWORD **)(v27 + 16);
      v28 = *(_QWORD *)(v27 + 24);
      if ( v28 == 8 )
      {
        if ( *v23 == 0x6573755F6C6F6F74LL )
        {
          v243 = 1;
          v34 = sub_1416419F0(aId_1, 2, v26);
          v36 = 12;
          if ( v34 )
          {
            v37 = (const __m128i *)&unk_1419E8518;
            if ( *(_BYTE *)v34 == 3 )
            {
              v36 = *(_QWORD *)(v34 + 24);
              if ( v36 < 0 )
              {
                v38 = 0;
                v176 = v227;
                goto LABEL_242;
              }
              if ( !v36 )
              {
                v227 = 1;
                LODWORD(v221) = 1;
                v222 = nullptr;
                goto LABEL_59;
              }
              v37 = *(const __m128i **)(v34 + 16);
            }
          }
          else
          {
            v37 = (const __m128i *)&unk_1419E8518;
          }
          nullsub_1(v35);
          v38 = 1;
          v39 = (__m128i *)sub_140001650(v36, 1);
          if ( !v39 )
          {
            v176 = v36;
LABEL_242:
            v243 = 1;
            sub_141938D2B(v38, v176);
          }
          v227 = (__int64)v39;
          v222 = (const __m128i *)v36;
          sub_1418F44E0(v39, v37, v36);
          LODWORD(v221) = 0;
LABEL_59:
          v40 = sub_1416419F0(aName_2, 4, v26);
          v41 = 4;
          v223 = 4;
          if ( v40 )
          {
            v42 = (const __m128i *)"tool";
            if ( *(_BYTE *)v40 == 3 )
            {
              v41 = *(_QWORD *)(v40 + 24);
              if ( v41 < 0 )
              {
                v43 = 0;
                goto LABEL_265;
              }
              v223 = *(_QWORD *)(v40 + 24);
              if ( !v41 )
              {
                v225 = 1;
                v46 = 1;
                v223 = 0;
                goto LABEL_67;
              }
              v42 = *(const __m128i **)(v40 + 16);
            }
          }
          else
          {
            v42 = (const __m128i *)"tool";
          }
          nullsub_1(v41);
          v43 = 1;
          v44 = (const __m128i *)v223;
          v45 = (__m128i *)sub_140001650(v223, 1);
          if ( !v45 )
          {
            v225 = (__int64)v44;
LABEL_265:
            sub_141938D2B(v43, v225);
          }
          v225 = (__int64)v45;
          sub_1418F44E0(v45, v42, (unsigned __int64)v44);
          v46 = 0;
LABEL_67:
          v47 = sub_1416419F0(aInput_0, 5, v26);
          if ( v47 )
          {
            v48 = *(_BYTE *)v47;
            switch ( *(_BYTE *)v47 )
            {
              case 0:
                break;
              case 1:
                v239[1] = *(_BYTE *)(v47 + 1);
                break;
              case 2:
                *(_OWORD *)&v239[8] = *(_OWORD *)(v47 + 8);
                break;
              case 3:
                sub_1416AC440(&v239[8], v47 + 8);
                break;
              case 4:
                sub_1403918C0(&v239[8], *(_QWORD *)(v47 + 16), *(_QWORD *)(v47 + 24));
                break;
              case 5:
                sub_140E8D7E0(&v239[8], v47 + 8);
                break;
            }
            *(_OWORD *)&v208.m256i_u64[2] = *(_OWORD *)&v239[16];
            v208.m256i_i8[0] = v48;
            v208.m256i_i8[1] = v239[1];
            *(__int64 *)((char *)v208.m256i_i64 + 2) = *(_QWORD *)&v239[2];
            *(__int32 *)((char *)&v208.m256i_i32[2] + 2) = *(_DWORD *)&v239[10];
            v208.m256i_i16[7] = *(_WORD *)&v239[14];
            v239[0] = 0;
            sub_14002F9D0(v239);
          }
          else
          {
            v239[0] = 0;
            *(_OWORD *)&v208.m256i_u64[2] = *(_OWORD *)&v239[16];
            v208.m256i_i8[0] = 0;
            *(__int64 *)((char *)v208.m256i_i64 + 1) = *(_QWORD *)&v239[1];
            *(__int32 *)((char *)&v208.m256i_i32[2] + 1) = *(_DWORD *)&v239[9];
            *(__int16 *)((char *)&v208.m256i_i16[6] + 1) = *(_WORD *)&v239[13];
            v208.m256i_i8[15] = v239[15];
          }
          sub_14029FA00(v239, &v208);
          v50 = *(const __m128i **)&v239[8];
          if ( *(_QWORD *)v239 == -1 )
          {
            *(_QWORD *)v239 = *(_QWORD *)&v239[8];
            nullsub_1(v49);
            v52 = (__m128i *)sub_140001650(2, 1);
            if ( !v52 )
              sub_141938D2B(1, 2);
            v50 = v52;
            v52->m128i_i16[0] = 32123;
            sub_14002F910(v239);
            v51 = 2;
            v212 = 2;
          }
          else
          {
            v212 = *(_QWORD *)v239;
            v51 = *(_QWORD *)&v239[16];
          }
          v203 = v50;
          *(_QWORD *)&v213 = 0;
          v214 = 0;
          nullsub_1(v49);
          v53 = (_WORD *)sub_140001650(2, 1);
          if ( !v53 )
            sub_141938D2B(1, 2);
          *v53 = 25705;
          v226.m256i_i64[0] = 2;
          v226.m256i_i64[1] = (__int64)v53;
          v226.m256i_i64[2] = 2;
          v55 = 1;
          if ( !(_BYTE)v221 )
          {
            nullsub_1(v54);
            v56 = v222;
            v57 = (__m128i *)sub_140001650(v222, 1);
            if ( !v57 )
            {
              v234 = 1;
              sub_141938D2B(1, v56);
            }
            v55 = (__int64)v57;
            sub_1418F44E0(v57, (const __m128i *)v227, (unsigned __int64)v56);
          }
          v239[0] = 3;
          *(_QWORD *)&v239[8] = v222;
          *(_QWORD *)&v239[16] = v55;
          *(_QWORD *)&v239[24] = v222;
          v234 = 0;
          sub_140E72AA0(&v224, &v213, &v226, v239);
          if ( v224.m256i_i8[0] != -1 )
            sub_14002F9D0(&v224);
          nullsub_1(v58);
          v59 = (_DWORD *)sub_140001650(4, 1);
          if ( !v59 )
            sub_141938D2B(1, 4);
          *v59 = 1701869940;
          v226.m256i_i64[0] = 4;
          v226.m256i_i64[1] = (__int64)v59;
          v226.m256i_i64[2] = 4;
          nullsub_1(v60);
          v61 = (__m128i *)sub_140001650(8, 1);
          v221 = v61;
          if ( !v61 )
            sub_141938D2B(1, 8);
          v61->m128i_i64[0] = 0x6E6F6974636E7566LL;
          v239[0] = 3;
          *(_QWORD *)&v239[8] = 8;
          *(_QWORD *)&v239[16] = v61;
          *(_QWORD *)&v239[24] = 8;
          sub_140E72AA0(&v224, &v213, &v226, v239);
          if ( v224.m256i_i8[0] != -1 )
            sub_14002F9D0(&v224);
          nullsub_1(v62);
          v63 = (_QWORD *)sub_140001650(8, 1);
          if ( !v63 )
            sub_141938D2B(1, 8);
          *v63 = 0x6E6F6974636E7566LL;
          *(_QWORD *)&v201 = 8;
          *((_QWORD *)&v201 + 1) = v63;
          v202 = 8;
          *(_QWORD *)&v216 = 0;
          v217 = 0;
          nullsub_1(0x6E6F6974636E7566LL);
          v64 = (_DWORD *)sub_140001650(4, 1);
          if ( !v64 )
            sub_141938D2B(1, 4);
          *v64 = 1701667182;
          v204 = 4;
          v205 = v64;
          v206 = 4;
          v66 = 1;
          v67 = v46 == 0;
          v68 = v223;
          if ( v67 )
          {
            nullsub_1(v65);
            v69 = (__m128i *)sub_140001650(v68, 1);
            if ( !v69 )
            {
              v233 = 1;
              sub_141938D2B(1, v68);
            }
            v66 = (__int64)v69;
            sub_1418F44E0(v69, (const __m128i *)v225, v68);
          }
          v239[0] = 3;
          *(_QWORD *)&v239[8] = v68;
          *(_QWORD *)&v239[16] = v66;
          *(_QWORD *)&v239[24] = v68;
          v233 = 0;
          sub_140E72AA0(&v224, &v216, &v204, v239);
          if ( v224.m256i_i8[0] != -1 )
            sub_14002F9D0(&v224);
          nullsub_1(v70);
          v71 = sub_140001650(9, 1);
          if ( !v71 )
            sub_141938D2B(1, 9);
          *(_QWORD *)v71 = 0x746E656D75677261LL;
          *(_BYTE *)(v71 + 8) = 115;
          v204 = 9;
          v205 = (_DWORD *)v71;
          v206 = 9;
          if ( v51 < 0 )
          {
            v72 = 0;
LABEL_263:
            v232 = 1;
            sub_141938D2B(v72, v51);
          }
          if ( v51 )
          {
            nullsub_1(0x746E656D75677261LL);
            v72 = 1;
            v73 = (__m128i *)sub_140001650(v51, 1);
            if ( !v73 )
              goto LABEL_263;
            v74 = (__int64)v73;
            sub_1418F44E0(v73, v203, v51);
          }
          else
          {
            v74 = 1;
          }
          v239[0] = 3;
          *(_QWORD *)&v239[8] = v51;
          *(_QWORD *)&v239[16] = v74;
          *(_QWORD *)&v239[24] = v51;
          v232 = 0;
          sub_140E72AA0(&v224, &v216, &v204, v239);
          if ( v224.m256i_i8[0] != -1 )
            sub_14002F9D0(&v224);
          v226.m256i_i64[3] = v217;
          *(_OWORD *)&v226.m256i_u64[1] = v216;
          v226.m256i_i8[0] = 5;
          v231 = 0;
          sub_140E72AA0(v239, &v213, &v201, &v226);
          if ( v239[0] != 0xFF )
            sub_14002F9D0(v239);
          v220.m256i_i64[3] = v214;
          *(_OWORD *)&v220.m256i_u64[1] = v213;
          v220.m256i_i8[0] = 5;
          v75 = v219;
          if ( v219 == (_QWORD)v218 )
            sub_14190F570(&v218);
          v76 = *((_QWORD *)&v218 + 1);
          v77 = 32 * v75;
          v78 = *(_OWORD *)v220.m256i_i8;
          *(_OWORD *)(*((_QWORD *)&v218 + 1) + v77 + 16) = *(_OWORD *)&v220.m256i_u64[2];
          *(_OWORD *)(v76 + v77) = v78;
          v219 = v75 + 1;
          if ( v212 )
            sub_140001660(v203, v212, 1);
          sub_14002F9D0(&v208);
          if ( v223 )
            sub_140001660(v225, v223, 1);
          if ( v222 )
            sub_140001660(v227, v222, 1);
        }
      }
      else if ( v28 == 4 && *(_DWORD *)v23 == 1954047348 )
      {
        v243 = 1;
        v29 = sub_1416419F0(aText_3, 4, v26);
        if ( v29 )
        {
          if ( *(_BYTE *)v29 == 3 )
          {
            v30 = *(const __m128i **)(v29 + 16);
            v31 = *(_QWORD *)(v29 + 24);
            sub_14072C410((unsigned int)v239, v31, 0, 1, 1);
            v32 = *(_QWORD *)&v239[8];
            if ( *(_DWORD *)v239 == 1 )
            {
              v243 = 1;
              sub_141938D2B(*(_QWORD *)&v239[8], *(_QWORD *)&v239[16]);
            }
            v33 = *(_QWORD *)&v239[16];
            if ( v31 )
              sub_1418F44E0(*(__m128i **)&v239[16], v30, v31);
            *(_QWORD *)v239 = v32;
            *(_QWORD *)&v239[8] = v33;
            *(_QWORD *)&v239[16] = v31;
            v243 = 1;
            sub_1401F4600(&v198, v239);
          }
        }
      }
    }
  }
  v220.m256i_i64[0] = 0;
  v220.m256i_i64[2] = 0;
  nullsub_1(v23);
  v170 = (_DWORD *)sub_140001650(4, 1);
  if ( !v170 )
  {
    v245 = 1;
    v244 = 1;
    sub_141938D2B(1, 4);
  }
  *v170 = 1701605234;
  v226.m256i_i64[0] = 4;
  v226.m256i_i64[1] = (__int64)v170;
  v226.m256i_i64[2] = 4;
  nullsub_1(v171);
  v172 = sub_140001650(9, 1);
  v223 = v172;
  if ( !v172 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v172 = 0x6E61747369737361LL;
  *(_BYTE *)(v172 + 8) = 116;
  *(_QWORD *)&v239[8] = 9;
  *(_QWORD *)&v239[16] = v172;
  *(_QWORD *)&v239[24] = 9;
  v239[0] = 3;
  sub_140E72AA0(&v224, &v220, &v226, v239);
  if ( v224.m256i_i8[0] != -1 )
  {
    v245 = 1;
    v244 = 1;
    sub_14002F9D0(&v224);
  }
  nullsub_1(v173);
  v174 = (_DWORD *)sub_140001650(7, 1);
  if ( !v174 )
  {
    v245 = 1;
    v244 = 1;
    sub_141938D2B(1, 7);
  }
  *(_DWORD *)((char *)v174 + 3) = 1953391988;
  *v174 = 1953394531;
  v226.m256i_i64[0] = 7;
  v226.m256i_i64[1] = (__int64)v174;
  v226.m256i_i64[2] = 7;
  if ( v200 )
  {
    v230 = 1;
    sub_140D1EE10((unsigned int)&v224, v199, v200, (unsigned int)&unk_1419E808A, 1);
    *(_QWORD *)&v239[24] = v224.m256i_i64[2];
    *(_OWORD *)&v239[8] = *(_OWORD *)v224.m256i_i8;
    v175 = 3;
  }
  else
  {
    v175 = 0;
  }
  v239[0] = v175;
  v230 = 0;
  sub_140E72AA0(&v224, &v220, &v226, v239);
  if ( v224.m256i_i8[0] != -1 )
  {
    v245 = 1;
    v244 = 1;
    sub_14002F9D0(&v224);
  }
  if ( v219 )
  {
    nullsub_1(v177);
    v178 = (void *)sub_140001650(10, 1);
    if ( !v178 )
    {
      v245 = 1;
      v244 = 1;
      sub_141938D2B(1, 10);
    }
    qmemcpy(v178, "tool_calls", 10);
    v226.m256i_i64[0] = 10;
    v226.m256i_i64[1] = (__int64)v178;
    v226.m256i_i64[2] = 10;
    *(_QWORD *)&v239[24] = v219;
    *(_OWORD *)&v239[8] = v218;
    v239[0] = 4;
    v245 = 0;
    v244 = 1;
    sub_140E72AA0(&v224, &v220, &v226, v239);
    if ( v224.m256i_i8[0] != -1 )
    {
      v245 = 0;
      v244 = 1;
      sub_14002F9D0(&v224);
    }
    *(_QWORD *)&v239[24] = v220.m256i_i64[2];
    *(_OWORD *)&v239[8] = *(_OWORD *)v220.m256i_i8;
    v239[0] = 5;
    v179 = a2[2];
    if ( v179 == *a2 )
      sub_14190F570(a2);
    v180 = a2[1];
    v181 = 32 * v179;
    v182 = *(_OWORD *)v239;
    *(_OWORD *)(v180 + v181 + 16) = *(_OWORD *)&v239[16];
    *(_OWORD *)(v180 + v181) = v182;
    a2[2] = v179 + 1;
  }
  else
  {
    *(_QWORD *)&v239[24] = v220.m256i_i64[2];
    *(_OWORD *)&v239[8] = *(_OWORD *)v220.m256i_i8;
    v239[0] = 5;
    v245 = 1;
    v244 = 0;
    sub_1401F46A0(a2, v239);
    sub_1401901C0(&v218);
  }
  v183 = v200;
  if ( v200 )
  {
    v184 = (_QWORD *)(v199 + 8);
    do
    {
      v185 = *(v184 - 1);
      if ( v185 )
        sub_140001660(*v184, v185, 1);
      v184 += 3;
      --v183;
    }
    while ( v183 );
  }
  v186 = v198;
  if ( v198 )
  {
    v100 = (const __m128i *)v199;
    goto LABEL_261;
  }
  return sub_14002F9D0(&v209);
}
