// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402f5e70 | name sub_1402F5E70
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1402F5E70(__m128i *a1, __int64 a2, _QWORD *a3)
{
  signed __int64 v3; // r13
  const __m128i *v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  signed __int64 v9; // rdx
  __int64 v10; // rcx
  const __m128i *v11; // r14
  signed __int64 v12; // r12
  __int64 v13; // r15
  __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r14
  void *v28; // rax
  __m128i v29; // xmm0
  _OWORD *v30; // rax
  _WORD *v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // r15
  const __m128i *v35; // r14
  __m128i *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  void *v43; // rax
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  __m128i *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rcx
  void *v57; // rax
  unsigned __int64 v58; // rdi
  __int64 v59; // r15
  const __m128i *v60; // r14
  __m128i *v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rdx
  const __m128i *v66; // rcx
  unsigned __int64 v67; // rsi
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  _WORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __m128i v75; // xmm0
  __m128i v76; // xmm0
  __m128i *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // r8
  __int64 v84; // r15
  const __m128i *v85; // r15
  __m128i *v86; // rax
  const __m128i *v87; // rdx
  __m128i *v88; // r15
  unsigned __int64 v89; // r12
  __int64 v90; // r14
  __int64 v91; // r15
  __m128i *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  _DWORD *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r15
  _DWORD *v103; // rax
  __int64 v104; // rcx
  void *v105; // rax
  __int64 v106; // rcx
  _DWORD *v107; // rax
  __int64 v108; // rcx
  __m128i *v109; // rax
  __int64 v110; // r15
  __int64 v111; // rcx
  __m128i v112; // xmm0
  __int64 v113; // r15
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // rcx
  __m128i v117; // xmm0
  __int64 v118; // rax
  const __m128i *v119; // r12
  unsigned __int64 v120; // r8
  unsigned __int64 v121; // rsi
  __int64 v122; // rcx
  unsigned __int64 v123; // r15
  __int64 v124; // r14
  _DWORD *v125; // rax
  __m128i v126; // xmm0
  __int64 v127; // rcx
  __m128i *v128; // rax
  __m128i v129; // xmm0
  __int64 v130; // rcx
  _DWORD *v131; // rax
  __m128i v132; // xmm0
  __int64 v133; // rcx
  __int64 v134; // rax
  __m128i v135; // xmm0
  __int64 v136; // rcx
  _DWORD *v137; // rax
  __int64 v138; // rcx
  const __m128i *v139; // rax
  __int64 v140; // rcx
  _DWORD *v141; // rax
  __m128i v142; // xmm0
  __int64 v143; // rcx
  _DWORD *v144; // rax
  __m128i v145; // xmm0
  __int64 v146; // rcx
  void *v147; // rax
  const __m128i *v148; // rcx
  __m128i v149; // xmm0
  __int64 v150; // r14
  __int64 v151; // rax
  __int64 v152; // rcx
  __m128i v153; // xmm0
  const __m128i *v154; // r12
  __int64 v155; // r14
  __int64 v156; // rax
  __int64 v157; // r14
  __int64 v158; // r12
  __int64 v159; // rax
  __int64 v160; // rcx
  signed __int64 v161; // r15
  const __m128i *v162; // r12
  __int64 v163; // rbx
  __int64 v164; // r13
  __m128i *v165; // rax
  char v166; // si
  __int64 v167; // rax
  __int8 v168; // r15
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rcx
  signed __int64 v172; // rbx
  const __m128i *v173; // r12
  __int64 v174; // r13
  __m128i *v175; // rax
  __int64 v176; // r15
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rbx
  const __m128i *v180; // r12
  __int64 v181; // r13
  __m128i *v182; // rax
  __int64 v183; // rcx
  _DWORD *v184; // rax
  __int64 v185; // rcx
  void *v186; // rax
  __int64 v187; // rcx
  _WORD *v188; // rax
  unsigned __int64 v189; // r12
  __int64 v190; // r15
  __m128i *v191; // rax
  __int64 v192; // r13
  __int64 v193; // rcx
  _DWORD *v194; // rax
  __int64 v195; // rcx
  const __m128i *v196; // r15
  __int64 v197; // r12
  __m128i *v198; // rax
  __int64 v199; // rcx
  _DWORD *v200; // rax
  __int64 v201; // rcx
  __int64 v202; // r12
  unsigned __int64 v203; // rbx
  __m128i *v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rax
  unsigned __int64 v207; // r12
  const __m128i *v208; // rsi
  __int64 v209; // r15
  __m128i *v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rax
  unsigned __int64 v215; // r12
  __m128i v217; // xmm0
  __m128i v218; // xmm7
  __int64 i; // rsi
  unsigned __int64 v220; // r12
  _WORD *v221; // rdx
  __m128i v222; // xmm8
  unsigned __int64 v224; // rbx
  _WORD *v225; // r13
  int v226; // eax
  unsigned __int64 v227; // r15
  signed __int64 v228; // r12
  const __m128i *v229; // rsi
  __int64 v230; // rcx
  __int64 v231; // r13
  __m128i v232; // xmm0
  _OWORD *v233; // rax
  __int64 v234; // rbx
  __int64 v235; // rax
  __int64 v236; // rcx
  __m128i si128; // xmm0
  __int64 v238; // r12
  unsigned __int64 v239[3]; // [rsp+70h] [rbp-10h] BYREF
  __m128i v240; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v241; // [rsp+98h] [rbp+18h]
  __m128i v242; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v243; // [rsp+B0h] [rbp+30h]
  __int64 v244; // [rsp+B8h] [rbp+38h]
  _QWORD *v245; // [rsp+C0h] [rbp+40h]
  _QWORD v246[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v247; // [rsp+E0h] [rbp+60h] BYREF
  const __m128i *v248; // [rsp+E8h] [rbp+68h]
  __int64 v249; // [rsp+F0h] [rbp+70h]
  __m128i *v250; // [rsp+F8h] [rbp+78h]
  __int64 v251; // [rsp+100h] [rbp+80h]
  const __m128i *v252; // [rsp+108h] [rbp+88h]
  __int64 v253; // [rsp+110h] [rbp+90h] BYREF
  __int64 v254; // [rsp+118h] [rbp+98h]
  __int64 v255; // [rsp+120h] [rbp+A0h]
  __int64 v256; // [rsp+128h] [rbp+A8h]
  _WORD *v257; // [rsp+130h] [rbp+B0h]
  __int64 v258; // [rsp+138h] [rbp+B8h]
  __int64 v259; // [rsp+140h] [rbp+C0h]
  __int64 v260; // [rsp+148h] [rbp+C8h]
  char v261; // [rsp+157h] [rbp+D7h] BYREF
  __int64 v262; // [rsp+158h] [rbp+D8h]
  __int64 v263; // [rsp+160h] [rbp+E0h]
  __int64 v264; // [rsp+168h] [rbp+E8h]
  signed __int64 v265; // [rsp+170h] [rbp+F0h]
  __int64 v266; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v267; // [rsp+180h] [rbp+100h]
  __int64 v268; // [rsp+188h] [rbp+108h]
  __m128i v269; // [rsp+190h] [rbp+110h] BYREF
  __int64 v270; // [rsp+1A0h] [rbp+120h]
  const __m128i *v271; // [rsp+1A8h] [rbp+128h]
  __m128i v272; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v273; // [rsp+1C0h] [rbp+140h]
  __m128i v274; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v275; // [rsp+1E0h] [rbp+160h]
  __int64 v276; // [rsp+1F8h] [rbp+178h]
  __m256i v277; // [rsp+200h] [rbp+180h] BYREF
  __int64 v278; // [rsp+220h] [rbp+1A0h]
  __int64 v279; // [rsp+230h] [rbp+1B0h]
  __int128 v280; // [rsp+238h] [rbp+1B8h]
  __int64 v281; // [rsp+248h] [rbp+1C8h]
  __m256i v282; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v283; // [rsp+270h] [rbp+1F0h]
  __int64 v284; // [rsp+280h] [rbp+200h]
  __int64 v285; // [rsp+290h] [rbp+210h]
  char v286; // [rsp+2A5h] [rbp+225h]
  char v287; // [rsp+2A6h] [rbp+226h]
  char v288; // [rsp+2A7h] [rbp+227h]
  char v289; // [rsp+2A8h] [rbp+228h]
  char v290; // [rsp+2A9h] [rbp+229h]
  char v291; // [rsp+2AAh] [rbp+22Ah]
  char v292; // [rsp+2ABh] [rbp+22Bh]
  char v293; // [rsp+2ACh] [rbp+22Ch]
  char v294; // [rsp+2ADh] [rbp+22Dh]
  char v295; // [rsp+2AEh] [rbp+22Eh]
  char v296; // [rsp+2AFh] [rbp+22Fh]
  __m128i v297; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v298; // [rsp+2C0h] [rbp+240h]
  __int64 v299; // [rsp+2C8h] [rbp+248h]
  __int64 v300; // [rsp+2D0h] [rbp+250h]
  char v301; // [rsp+2DEh] [rbp+25Eh]
  char v302; // [rsp+2DFh] [rbp+25Fh]
  __m256i v303; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v304; // [rsp+300h] [rbp+280h]
  char v305; // [rsp+30Fh] [rbp+28Fh]
  char v306; // [rsp+310h] [rbp+290h]
  char v307; // [rsp+311h] [rbp+291h]
  char v308; // [rsp+312h] [rbp+292h]
  char v309; // [rsp+313h] [rbp+293h]
  char v310; // [rsp+314h] [rbp+294h]
  char v311; // [rsp+315h] [rbp+295h]
  char v312; // [rsp+316h] [rbp+296h]
  char v313; // [rsp+317h] [rbp+297h]
  __int64 v314; // [rsp+318h] [rbp+298h]

  v314 = -2;
  v250 = a1;
  v6 = (const __m128i *)sub_1416419F0(aId_1, 2, a2);
  if ( v6 && v6->m128i_i8[0] == 3 )
  {
    *(__m128i *)v303.m256i_i8 = _mm_loadu_si128(v6 + 1);
    v282.m256i_i64[0] = (__int64)&v303;
    v7 = sub_140186EE0;
  }
  else
  {
    sub_141568C20(&v303);
    v282.m256i_i64[0] = (__int64)&v303;
    v7 = sub_14028A180;
  }
  v282.m256i_i64[1] = (__int64)v7;
  sub_1416ABFD0(&v247, &unk_1419E614D, &v282);
  v8 = sub_1416419F0(aModel_1, 5, a2);
  v11 = (const __m128i *)&unk_1419E5C4D;
  v12 = 7;
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v12 = *(_QWORD *)(v8 + 24);
    if ( v12 < 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    if ( !v12 )
    {
      v256 = 1;
      LOBYTE(v3) = 1;
      v258 = 0;
      goto LABEL_14;
    }
    v11 = *(const __m128i **)(v8 + 16);
  }
  nullsub_1(v10);
  v13 = 1;
  v14 = (__m128i *)sub_140001650(v12, 1);
  if ( !v14 )
  {
    v9 = v12;
LABEL_9:
    sub_141938D2B(v13, v9);
  }
  v256 = (__int64)v14;
  v258 = v12;
  sub_1418F44E0(v14, v11, v12);
  LODWORD(v3) = 0;
LABEL_14:
  v266 = 0;
  v267 = 8;
  v268 = 0;
  v253 = 0;
  v254 = 1;
  v255 = 0;
  v281 = -1;
  v15 = sub_1416419F0(aChoices, 7, a2);
  v16 = -1;
  if ( v15 )
  {
    if ( *(_BYTE *)v15 == 4 )
    {
      if ( *(_QWORD *)(v15 + 24) )
      {
        v17 = *(_QWORD *)(v15 + 16);
        if ( v17 )
        {
          v281 = -1;
          v18 = sub_1416419F0(aFinishReason, 13, v17);
          LODWORD(v276) = v3;
          v3 = -1;
          if ( v18 && *(_BYTE *)v18 == 3 )
          {
            v3 = *(_QWORD *)(v18 + 24);
            if ( v3 < 0 )
            {
              v20 = 0;
              goto LABEL_22;
            }
            if ( v3 )
            {
              v85 = *(const __m128i **)(v18 + 16);
              nullsub_1(v19);
              v20 = 1;
              v86 = (__m128i *)sub_140001650(v3, 1);
              if ( !v86 )
              {
LABEL_22:
                v281 = -1;
                sub_141938D2B(v20, v3);
              }
              v87 = v85;
              v88 = v86;
              sub_1418F44E0(v86, v87, v3);
              v18 = (__int64)v88;
            }
            else
            {
              v18 = 1;
              v3 = 0;
            }
          }
          v299 = v18;
          v279 = v18;
          v300 = v3;
          v281 = v3;
          v63 = sub_1416419F0(aMessage_1, 7, v17);
          LOBYTE(v3) = v276;
          v64 = v63;
          if ( !v63 )
            goto LABEL_321;
          v279 = v299;
          v281 = v300;
          sub_140F8E6D0(&v269, v63);
          v65 = v269.m128i_i64[0];
          if ( v269.m128i_i64[0] == -1 )
          {
            v279 = v299;
            v281 = v300;
            v81 = sub_1416419F0(
                    "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_"
                    "tokensstreamdoubaoreasoning_effortnone",
                    7,
                    v64);
            if ( !v81 )
              goto LABEL_156;
            if ( *(_BYTE *)v81 != 3 )
              goto LABEL_156;
            v82 = *(_QWORD *)(v81 + 16);
            v83 = *(_QWORD *)(v81 + 24);
            v279 = v299;
            v281 = v300;
            sub_1402F5700((unsigned __int64 *)&v282, v82, v83);
            v84 = v282.m256i_i64[0];
            if ( v282.m256i_i64[0] == -1 )
              goto LABEL_156;
            if ( !v282.m256i_i64[2] )
            {
              v238 = v282.m256i_i64[1];
              if ( v282.m256i_i64[3] )
                sub_140001660(v283, v282.m256i_i64[3], 1);
              if ( v84 )
              {
                v66 = (const __m128i *)v238;
                v65 = v84;
LABEL_155:
                sub_140001660(v66, v65, 1);
              }
LABEL_156:
              v279 = v299;
              v281 = v300;
              v118 = sub_1416419F0(
                       "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
                       "ax_tokensstreamdoubaoreasoning_effortnone",
                       7,
                       v64);
              if ( v118 && *(_BYTE *)v118 == 3 )
              {
                v119 = *(const __m128i **)(v118 + 16);
                v120 = *(_QWORD *)(v118 + 24);
                v279 = v299;
                v281 = v300;
                v121 = v120;
                sub_1402F5700(v239, (__int64)v119, v120);
                v259 = v64;
                if ( v239[0] == -1 )
                {
                  v123 = v121;
                  sub_14072C410((unsigned int)&v282, v121, 0, 1, 1);
                  v3 = v282.m256i_i64[1];
                  if ( v282.m256i_i32[0] == 1 )
                  {
                    v279 = v299;
                    v281 = v300;
                    sub_141938D2B(v282.m256i_i64[1], v282.m256i_i64[2]);
                  }
                  v124 = v282.m256i_i64[2];
                  if ( v121 )
                  {
                    sub_1418F44E0((__m128i *)v282.m256i_i64[2], v119, v121);
                    v123 = v121;
                  }
                  v269.m128i_i64[0] = v3;
                  v269.m128i_i64[1] = v124;
                  v270 = v123;
                  LOBYTE(v3) = v276;
                }
                else
                {
                  if ( v239[0] )
                    sub_140001660(v239[1], v239[0], 1);
                  v123 = v241;
                  v270 = v241;
                  v269 = _mm_loadu_si128(&v240);
                }
                v64 = v259;
                if ( v123 )
                {
                  v297.m128i_i64[0] = 0;
                  v298 = 0;
                  nullsub_1(v122);
                  v125 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v125 )
                    sub_141938D2B(1, 4);
                  *v125 = 1701869940;
                  v277.m256i_i64[0] = 4;
                  v277.m256i_i64[1] = (__int64)v125;
                  v277.m256i_i64[2] = 4;
                  v312 = 1;
                  sub_14040FB10(&v282, &off_1419E5080);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v126 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v126;
                  v312 = 0;
                  sub_140E72AA0(&v282, &v297, &v277, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  nullsub_1(v127);
                  v128 = (__m128i *)sub_140001650(2, 1);
                  if ( !v128 )
                    sub_141938D2B(1, 2);
                  v128->m128i_i16[0] = 25705;
                  v274.m128i_i64[0] = 2;
                  v271 = v128;
                  v274.m128i_i64[1] = (__int64)v128;
                  v275.m128i_i64[0] = 2;
                  sub_141568C20(&v282);
                  *(__m128i *)v277.m256i_i8 = _mm_loadu_si128((const __m128i *)&v282);
                  v303.m256i_i64[0] = (__int64)&v277;
                  v303.m256i_i64[1] = (__int64)sub_14028A180;
                  sub_1416ABFD0(&v282, &unk_1419E87C8, &v303);
                  *(__m128i *)v277.m256i_i8 = _mm_loadu_si128((const __m128i *)&v282);
                  v277.m256i_i64[2] = v282.m256i_i64[2];
                  v311 = 1;
                  sub_14040F9F0(&v282, &v277);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v129 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v129;
                  v311 = 0;
                  sub_140E72AA0(&v282, &v297, &v274, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  if ( v277.m256i_i64[0] )
                    sub_140001660(v277.m256i_i64[1], v277.m256i_i64[0], 1);
                  nullsub_1(v130);
                  v131 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v131 )
                    sub_141938D2B(1, 4);
                  *v131 = 1701605234;
                  v277.m256i_i64[0] = 4;
                  v277.m256i_i64[1] = (__int64)v131;
                  v277.m256i_i64[2] = 4;
                  v310 = 1;
                  sub_14040FB10(&v282, &off_1419E6108);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v132 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v132;
                  v310 = 0;
                  sub_140E72AA0(&v282, &v297, &v277, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  nullsub_1(v133);
                  v134 = sub_140001650(6, 1);
                  if ( !v134 )
                    sub_141938D2B(1, 6);
                  *(_WORD *)(v134 + 4) = 29557;
                  *(_DWORD *)v134 = 1952543859;
                  v277.m256i_i64[0] = 6;
                  v277.m256i_i64[1] = v134;
                  v277.m256i_i64[2] = 6;
                  v309 = 1;
                  sub_14040FB10(&v282, &off_1419E6260);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v135 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v135;
                  v309 = 0;
                  sub_140E72AA0(&v282, &v297, &v277, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  nullsub_1(v136);
                  v137 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v137 )
                    sub_141938D2B(1, 7);
                  *(_DWORD *)((char *)v137 + 3) = 1953391988;
                  *v137 = 1953394531;
                  v272.m128i_i64[0] = 7;
                  v272.m128i_i64[1] = (__int64)v137;
                  v273.m128i_i64[0] = 7;
                  nullsub_1(v138);
                  v139 = (const __m128i *)sub_140001650(32, 8);
                  if ( !v139 )
                  {
                    v301 = 1;
                    sub_141938D11(8, 32);
                  }
                  v271 = v139;
                  v274.m128i_i64[0] = 0;
                  v275.m128i_i64[0] = 0;
                  nullsub_1(v140);
                  v141 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v141 )
                    sub_141938D2B(1, 4);
                  *v141 = 1701869940;
                  v277.m256i_i64[0] = 4;
                  v277.m256i_i64[1] = (__int64)v141;
                  v277.m256i_i64[2] = 4;
                  v308 = 1;
                  sub_14040FB10(&v282, &off_1419E87D0);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v142 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v142;
                  v308 = 0;
                  sub_140E72AA0(&v282, &v274, &v277, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  nullsub_1(v143);
                  v144 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v144 )
                    sub_141938D2B(1, 4);
                  *v144 = 1954047348;
                  v277.m256i_i64[0] = 4;
                  v277.m256i_i64[1] = (__int64)v144;
                  v277.m256i_i64[2] = 4;
                  v307 = 1;
                  sub_14040F9F0(&v282, &v269);
                  if ( v282.m256i_i8[0] == -1 )
                  {
                    v303.m256i_i64[0] = v282.m256i_i64[1];
                    sub_141939040(
                      (unsigned int)aCalledResultUn_2,
                      43,
                      (unsigned int)&v303,
                      (unsigned int)&off_1419E6A30,
                      (__int64)&off_1419E87B0);
                  }
                  v145 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)v303.m256i_i8 = v145;
                  v307 = 0;
                  sub_140E72AA0(&v282, &v274, &v277, &v303);
                  if ( v282.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v282);
                  nullsub_1(v146);
                  v147 = (void *)sub_140001650(11, 1);
                  if ( !v147 )
                    sub_141938D2B(1, 11);
                  qmemcpy(v147, "annotations", 11);
                  v277.m256i_i64[0] = 11;
                  v277.m256i_i64[1] = (__int64)v147;
                  v277.m256i_i64[2] = 11;
                  v282.m256i_i64[1] = 0;
                  *(_OWORD *)&v282.m256i_u64[2] = 8u;
                  v282.m256i_i8[0] = 4;
                  sub_140E72AA0(&v303, &v274, &v277, &v282);
                  if ( v303.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v303);
                  *(__m128i *)((char *)&v282.m256i_u32[1] + 3) = v274;
                  *(__int64 *)((char *)&v282.m256i_i64[2] + 7) = v275.m128i_i64[0];
                  v148 = v271;
                  v271->m128i_i8[0] = 5;
                  v149 = _mm_loadu_si128((const __m128i *)&v282);
                  v148[1] = *(const __m128i *)((char *)&v282.m256i_u64[1] + 7);
                  *(__m128i *)((char *)v148 + 1) = v149;
                  v282.m256i_i64[1] = 1;
                  v282.m256i_i64[2] = (__int64)v148;
                  v282.m256i_i64[3] = 1;
                  v282.m256i_i8[0] = 4;
                  v301 = 0;
                  sub_140E72AA0(&v303, &v297, &v272, &v282);
                  if ( v303.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v303);
                  *(__m128i *)&v282.m256i_u64[1] = _mm_loadu_si128(&v297);
                  v282.m256i_i64[3] = v298;
                  v282.m256i_i8[0] = 5;
                  v150 = v268;
                  if ( v268 == v266 )
                    sub_14190F570(&v266);
                  v151 = v267;
                  v152 = 32 * v150;
                  v153 = _mm_loadu_si128((const __m128i *)&v282);
                  *(_OWORD *)(v267 + v152 + 16) = *(_OWORD *)&v282.m256i_u64[2];
                  *(__m128i *)(v151 + v152) = v153;
                  v268 = v150 + 1;
                  v154 = (const __m128i *)v269.m128i_i64[1];
                  sub_14190D590((unsigned int)&v253, 0, v123, 1, 1);
                  v155 = v255;
                  sub_1418F44E0((__m128i *)(v255 + v254), v154, v123);
                  v255 = v123 + v155;
                  v64 = v259;
                }
                if ( v269.m128i_i64[0] )
                  sub_140001660(v269.m128i_i64[1], v269.m128i_i64[0], 1);
              }
              v279 = v299;
              v281 = v300;
              v156 = sub_1416419F0("tool_callsYou have a web_search tool available.", 10, v64);
              if ( v156 )
              {
                v16 = v300;
                if ( *(_BYTE *)v156 == 4 )
                {
                  v157 = *(_QWORD *)(v156 + 16);
                  v158 = v157 + 32LL * *(_QWORD *)(v156 + 24);
                  v243 = a3[3];
                  v245 = a3 + 4;
                  v257 = (_WORD *)*a3;
                  v259 = a3[1];
                  v244 = v158;
                  while ( 1 )
                  {
                    if ( v157 == v158 )
                      goto LABEL_322;
                    v279 = v299;
                    v281 = v16;
                    v159 = sub_1416419F0(aId_1, 2, v157);
                    v161 = 12;
                    if ( !v159 )
                      break;
                    v162 = (const __m128i *)&unk_1419E8518;
                    v163 = v300;
                    if ( *(_BYTE *)v159 == 3 )
                    {
                      v161 = *(_QWORD *)(v159 + 24);
                      if ( v161 < 0 )
                      {
                        v164 = 0;
                        goto LABEL_324;
                      }
                      if ( !v161 )
                      {
                        *(_QWORD *)&v280 = 1;
                        v166 = 1;
                        v271 = nullptr;
                        goto LABEL_218;
                      }
                      v162 = *(const __m128i **)(v159 + 16);
                      goto LABEL_215;
                    }
LABEL_216:
                    nullsub_1(v160);
                    v164 = 1;
                    v165 = (__m128i *)sub_140001650(v161, 1);
                    if ( !v165 )
                    {
                      *(_QWORD *)&v280 = v161;
LABEL_324:
                      v279 = v299;
                      v281 = v163;
                      sub_141938D2B(v164, v280);
                    }
                    *(_QWORD *)&v280 = v165;
                    v271 = (const __m128i *)v161;
                    sub_1418F44E0(v165, v162, v161);
                    v166 = 0;
LABEL_218:
                    v167 = sub_1416419F0(aFunction_0, 8, v157);
                    if ( v167 )
                    {
                      v168 = *(_BYTE *)v167;
                      switch ( *(_BYTE *)v167 )
                      {
                        case 0:
                          break;
                        case 1:
                          v282.m256i_i8[1] = *(_BYTE *)(v167 + 1);
                          break;
                        case 2:
                          *(__m128i *)&v282.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v167 + 8));
                          break;
                        case 3:
                          sub_1416AC440(&v282.m256i_u64[1], v167 + 8);
                          JUMPOUT(0x1402F80CELL);
                        case 4:
                          sub_1403918C0(&v282.m256i_u64[1], *(_QWORD *)(v167 + 16), *(_QWORD *)(v167 + 24));
                          break;
                        case 5:
                          if ( *(_QWORD *)(v167 + 24) )
                          {
                            v169 = *(_QWORD *)(v167 + 8);
                            if ( !v169 )
                              sub_141939020(&off_141A54900);
                            sub_140E11B90(&v282.m256i_u64[1], v169, *(_QWORD *)(v167 + 16));
                          }
                          else
                          {
                            v282.m256i_i64[1] = 0;
                            v282.m256i_i64[3] = 0;
                          }
                          break;
                      }
                      v275 = *(__m128i *)&v282.m256i_u64[2];
                      v274.m128i_i8[0] = v168;
                      v274.m128i_i8[1] = v282.m256i_i8[1];
                      *(__int32 *)((char *)v274.m128i_i32 + 2) = *(__int32 *)((char *)v282.m256i_i32 + 2);
                      v274.m128i_i16[3] = v282.m256i_i16[3];
                      v274.m128i_i64[1] = v282.m256i_i64[1];
                      v282.m256i_i8[0] = 0;
                      sub_14002F9D0(&v282);
                    }
                    else
                    {
                      v282.m256i_i8[0] = 0;
                      v275 = _mm_loadu_si128((const __m128i *)&v282.m256i_u64[2]);
                      v274.m128i_i8[0] = 0;
                      *(__int64 *)((char *)v274.m128i_i64 + 1) = *(__int64 *)((char *)v282.m256i_i64 + 1);
                      *(__int32 *)((char *)&v274.m128i_i32[2] + 1) = *(__int32 *)((char *)&v282.m256i_i32[2] + 1);
                      *(__int16 *)((char *)&v274.m128i_i16[6] + 1) = *(__int16 *)((char *)&v282.m256i_i16[6] + 1);
                      v274.m128i_i8[15] = v282.m256i_i8[15];
                    }
                    v170 = sub_1416419F0(aName_2, 4, &v274);
                    v172 = 4;
                    if ( v170 )
                    {
                      v173 = (const __m128i *)"tool";
                      if ( *(_BYTE *)v170 == 3 )
                      {
                        v172 = *(_QWORD *)(v170 + 24);
                        if ( v172 < 0 )
                        {
                          v174 = 0;
                          goto LABEL_326;
                        }
                        if ( !v172 )
                        {
                          v176 = 1;
                          LOBYTE(v170) = 1;
                          LODWORD(v264) = v170;
                          v172 = 0;
                          goto LABEL_239;
                        }
                        v173 = *(const __m128i **)(v170 + 16);
                      }
                    }
                    else
                    {
                      v173 = (const __m128i *)"tool";
                    }
                    nullsub_1(v171);
                    v174 = 1;
                    v175 = (__m128i *)sub_140001650(v172, 1);
                    if ( !v175 )
                    {
                      *((_QWORD *)&v280 + 1) = v172;
LABEL_326:
                      sub_141938D2B(v174, *((_QWORD *)&v280 + 1));
                    }
                    v176 = (__int64)v175;
                    sub_1418F44E0(v175, v173, v172);
                    LODWORD(v264) = 0;
LABEL_239:
                    v246[0] = v172;
                    *((_QWORD *)&v280 + 1) = v176;
                    v246[1] = v176;
                    v265 = v172;
                    v246[2] = v172;
                    v177 = sub_1416419F0("argumentsephemeral", 9, &v274);
                    v179 = 2;
                    if ( v177 )
                    {
                      v180 = (const __m128i *)asc_1419E60E5;
                      if ( *(_BYTE *)v177 == 3 )
                      {
                        v179 = *(_QWORD *)(v177 + 24);
                        if ( v179 < 0 )
                        {
                          v181 = 0;
                          goto LABEL_330;
                        }
                        if ( !v179 )
                        {
                          v262 = 1;
                          v179 = 0;
                          v251 = 0;
                          if ( v265 != 11 )
                            goto LABEL_248;
                          goto LABEL_247;
                        }
                        v180 = *(const __m128i **)(v177 + 16);
                      }
                    }
                    else
                    {
                      v180 = (const __m128i *)asc_1419E60E5;
                    }
                    nullsub_1(v178);
                    v181 = 1;
                    v182 = (__m128i *)sub_140001650(v179, 1);
                    if ( !v182 )
                    {
                      v262 = v179;
LABEL_330:
                      sub_141938D2B(v181, v262);
                    }
                    v262 = (__int64)v182;
                    sub_1418F44E0(v182, v180, v179);
                    v251 = v179;
                    if ( v265 != 11 )
                    {
LABEL_248:
                      sub_1403101A0(&v269, v262, v179);
                      goto LABEL_249;
                    }
LABEL_247:
                    if ( **((_QWORD **)&v280 + 1) ^ 0x61705F796C707061LL
                       | *(_QWORD *)(*((_QWORD *)&v280 + 1) + 3LL) ^ 0x68637461705F796CLL )
                    {
                      goto LABEL_248;
                    }
                    sub_140300F30((unsigned int)&v269, DWORD2(v280), 11, v262, v179);
LABEL_249:
                    v297.m128i_i64[0] = 0;
                    v298 = 0;
                    nullsub_1(v183);
                    v184 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v184 )
                      sub_141938D2B(1, 4);
                    *v184 = 1701869940;
                    v272.m128i_i64[0] = 4;
                    v272.m128i_i64[1] = (__int64)v184;
                    v273.m128i_i64[0] = 4;
                    nullsub_1(v185);
                    v186 = (void *)sub_140001650(13, 1);
                    v263 = (__int64)v186;
                    if ( !v186 )
                      sub_141938D2B(1, 13);
                    qmemcpy(v186, "function_call", 13);
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = 13;
                    v282.m256i_i64[2] = (__int64)v186;
                    v282.m256i_i64[3] = 13;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    nullsub_1(v187);
                    v188 = (_WORD *)sub_140001650(2, 1);
                    if ( !v188 )
                      sub_141938D2B(1, 2);
                    *v188 = 25705;
                    v272.m128i_i64[0] = 2;
                    v263 = (__int64)v188;
                    v272.m128i_i64[1] = (__int64)v188;
                    v273.m128i_i64[0] = 2;
                    sub_141568C20(&v282);
                    v242 = _mm_loadu_si128((const __m128i *)&v282);
                    v303.m256i_i64[0] = (__int64)&v242;
                    v303.m256i_i64[1] = (__int64)sub_14028A180;
                    sub_1416ABFD0(&v282, &unk_1419E87E0, &v303);
                    v157 += 32;
                    v189 = v282.m256i_u64[2];
                    v252 = (const __m128i *)v282.m256i_i64[1];
                    v263 = v282.m256i_i64[0];
                    if ( v282.m256i_i64[2] < 0 )
                    {
                      v190 = 0;
LABEL_328:
                      v295 = 1;
                      sub_141938D2B(v190, v189);
                    }
                    if ( v282.m256i_i64[2] )
                    {
                      nullsub_1(v282.m256i_i64[1]);
                      v190 = 1;
                      v191 = (__m128i *)sub_140001650(v189, 1);
                      if ( !v191 )
                        goto LABEL_328;
                      v192 = (__int64)v191;
                      sub_1418F44E0(v191, v252, v189);
                    }
                    else
                    {
                      v192 = 1;
                    }
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = v189;
                    v282.m256i_i64[2] = v192;
                    v282.m256i_i64[3] = v189;
                    v295 = 0;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    if ( v263 )
                      sub_140001660(v252, v263, 1);
                    nullsub_1(v193);
                    v194 = (_DWORD *)sub_140001650(7, 1);
                    v196 = v271;
                    if ( !v194 )
                      sub_141938D2B(1, 7);
                    *(_DWORD *)((char *)v194 + 3) = 1684627308;
                    *v194 = 1819042147;
                    v272.m128i_i64[0] = 7;
                    v272.m128i_i64[1] = (__int64)v194;
                    v273.m128i_i64[0] = 7;
                    v197 = 1;
                    if ( !v166 )
                    {
                      nullsub_1(v195);
                      v198 = (__m128i *)sub_140001650(v196, 1);
                      if ( !v198 )
                      {
                        v294 = 1;
                        sub_141938D2B(1, v196);
                      }
                      v197 = (__int64)v198;
                      sub_1418F44E0(v198, (const __m128i *)v280, (unsigned __int64)v196);
                    }
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = (__int64)v196;
                    v282.m256i_i64[2] = v197;
                    v282.m256i_i64[3] = (__int64)v196;
                    v294 = 0;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    nullsub_1(v199);
                    v200 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v200 )
                      sub_141938D2B(1, 4);
                    *v200 = 1701667182;
                    v272.m128i_i64[0] = 4;
                    v272.m128i_i64[1] = (__int64)v200;
                    v273.m128i_i64[0] = 4;
                    v202 = 1;
                    v203 = v265;
                    if ( !(_BYTE)v264 )
                    {
                      nullsub_1(v201);
                      v204 = (__m128i *)sub_140001650(v203, 1);
                      if ( !v204 )
                      {
                        v293 = 1;
                        sub_141938D2B(1, v203);
                      }
                      v202 = (__int64)v204;
                      sub_1418F44E0(v204, *((const __m128i **)&v280 + 1), v203);
                    }
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = v203;
                    v282.m256i_i64[2] = v202;
                    v282.m256i_i64[3] = v203;
                    v293 = 0;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    nullsub_1(v205);
                    v206 = sub_140001650(9, 1);
                    if ( !v206 )
                      sub_141938D2B(1, 9);
                    *(_QWORD *)v206 = 0x746E656D75677261LL;
                    *(_BYTE *)(v206 + 8) = 115;
                    v272.m128i_i64[0] = 9;
                    v272.m128i_i64[1] = v206;
                    v273.m128i_i64[0] = 9;
                    v207 = v270;
                    if ( v270 < 0 )
                    {
                      v209 = 0;
LABEL_336:
                      v292 = 1;
                      sub_141938D2B(v209, v207);
                    }
                    v208 = (const __m128i *)v269.m128i_i64[1];
                    if ( v270 )
                    {
                      nullsub_1(0x746E656D75677261LL);
                      v209 = 1;
                      v210 = (__m128i *)sub_140001650(v207, 1);
                      if ( !v210 )
                        goto LABEL_336;
                      v3 = (signed __int64)v210;
                      sub_1418F44E0(v210, v208, v207);
                    }
                    else
                    {
                      v3 = 1;
                    }
                    v263 = (__int64)v208;
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = v207;
                    v282.m256i_i64[2] = v3;
                    v282.m256i_i64[3] = v207;
                    v292 = 0;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    LOBYTE(v3) = v276;
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    nullsub_1(v211);
                    v212 = sub_140001650(6, 1);
                    if ( !v212 )
                      sub_141938D2B(1, 6);
                    *(_WORD *)(v212 + 4) = 29557;
                    *(_DWORD *)v212 = 1952543859;
                    v272.m128i_i64[0] = 6;
                    v272.m128i_i64[1] = v212;
                    v273.m128i_i64[0] = 6;
                    nullsub_1(v213);
                    v214 = sub_140001650(9, 1);
                    v264 = v214;
                    if ( !v214 )
                      sub_141938D2B(1, 9);
                    *(_QWORD *)v214 = 0x6574656C706D6F63LL;
                    *(_BYTE *)(v214 + 8) = 100;
                    v282.m256i_i8[0] = 3;
                    v282.m256i_i64[1] = 9;
                    v282.m256i_i64[2] = v214;
                    v282.m256i_i64[3] = 9;
                    sub_140E72AA0(&v303, &v297, &v272, &v282);
                    if ( v303.m256i_i8[0] != -1 )
                      sub_14002F9D0(&v303);
                    v277.m256i_i64[3] = v298;
                    *(__m128i *)&v277.m256i_u64[1] = _mm_loadu_si128(&v297);
                    v277.m256i_i8[0] = 5;
                    if ( v243 )
                    {
                      v313 = 1;
                      v215 = sub_140D2AC70(v245, v246);
                      _RAX = v215 >> 57;
                      v217 = _mm_cvtsi32_si128(v215 >> 57);
                      v218 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v217, v217), 0), 68);
                      for ( i = 0; ; i += 16 )
                      {
                        v220 = v259 & v215;
                        v221 = v257;
                        v222 = _mm_loadu_si128((const __m128i *)((char *)v257 + v220));
                        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v222, v218));
                        if ( _R15D )
                          break;
LABEL_294:
                        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v222, (__m128i)-1LL));
                        if ( (_DWORD)_RAX )
                          goto LABEL_307;
                        v215 = i + v220 + 16;
                      }
                      while ( 1 )
                      {
                        __asm { tzcnt   eax, r15d }
                        v224 = v265;
                        if ( v265 == *(_QWORD *)&v221[-24 * (v259 & (v220 + _RAX)) - 16] )
                        {
                          v225 = &v221[-24 * (v259 & (v220 + _RAX))];
                          v226 = sub_1418F4B70(*((_QWORD *)&v280 + 1), *((_QWORD *)v225 - 5));
                          v221 = v257;
                          if ( !v226 )
                            break;
                        }
                        _RAX = (unsigned int)(_R15D - 1);
                        LOWORD(_RAX) = _R15D & (_R15D - 1);
                        _R15D = _RAX;
                        LOBYTE(v3) = v276;
                        if ( !(_WORD)_RAX )
                          goto LABEL_294;
                      }
                      v227 = *((_QWORD *)v225 - 1);
                      v228 = v227 - v224;
                      if ( v227 >= v224 )
                      {
                        v229 = *((const __m128i **)v225 - 2);
                        if ( !(unsigned int)sub_1418F4B70(*((_QWORD *)&v280 + 1), &v229->m128i_i8[v228]) )
                        {
                          if ( v228 < 0 )
                          {
                            v231 = 0;
LABEL_340:
                            v313 = 1;
                            sub_141938D2B(v231, v260);
                          }
                          if ( v228 )
                          {
                            nullsub_1(v230);
                            v231 = 1;
                            v260 = sub_140001650(v228, 1);
                            if ( !v260 )
                            {
                              v260 = v227 - v224;
                              goto LABEL_340;
                            }
                          }
                          else
                          {
                            v260 = 1;
                          }
                          if ( v227 != v265 )
                            sub_1418F44E0((__m128i *)v260, v229, v228);
                          v282.m256i_i64[1] = v227 - v224;
                          v282.m256i_i64[2] = v260;
                          v282.m256i_i64[3] = v227 - v224;
                          v282.m256i_i8[0] = 3;
                          v291 = 1;
                          v264 = sub_141641AF0(aNamespace, 9, &v277);
                          sub_14002F9D0(v264);
                          v232 = _mm_loadu_si128((const __m128i *)&v282);
                          v233 = (_OWORD *)v264;
                          *(_OWORD *)(v264 + 16) = *(_OWORD *)&v282.m256i_u64[2];
                          *v233 = v232;
                        }
                      }
                      LOBYTE(v3) = v276;
                    }
LABEL_307:
                    *(__m128i *)&v282.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v277.m256i_u64[2]);
                    v282.m256i_i8[0] = v277.m256i_i8[0];
                    *(__int64 *)((char *)v282.m256i_i64 + 1) = *(__int64 *)((char *)v277.m256i_i64 + 1);
                    *(__int32 *)((char *)&v282.m256i_i32[2] + 1) = *(__int32 *)((char *)&v277.m256i_i32[2] + 1);
                    *(__int16 *)((char *)&v282.m256i_i16[6] + 1) = *(__int16 *)((char *)&v277.m256i_i16[6] + 1);
                    v282.m256i_i8[15] = v277.m256i_i8[15];
                    v234 = v268;
                    v158 = v244;
                    if ( v268 == v266 )
                      sub_14190F570(&v266);
                    v235 = v267;
                    v236 = 32 * v234;
                    si128 = _mm_load_si128((const __m128i *)&v282);
                    *(_OWORD *)(v267 + v236 + 16) = *(_OWORD *)&v282.m256i_u64[2];
                    *(__m128i *)(v235 + v236) = si128;
                    v268 = v234 + 1;
                    if ( v269.m128i_i64[0] )
                      sub_140001660(v263, v269.m128i_i64[0], 1);
                    if ( v251 )
                      sub_140001660(v262, v251, 1);
                    if ( v265 )
                      sub_140001660(*((_QWORD *)&v280 + 1), v265, 1);
                    sub_14002F9D0(&v274);
                    v16 = v300;
                    if ( v271 )
                      sub_140001660(v280, v271, 1);
                  }
                  v162 = (const __m128i *)&unk_1419E8518;
LABEL_215:
                  v163 = v300;
                  goto LABEL_216;
                }
                goto LABEL_322;
              }
LABEL_321:
              v16 = v300;
LABEL_322:
              v15 = v299;
              goto LABEL_23;
            }
            v270 = v282.m256i_i64[2];
            v269 = _mm_loadu_si128((const __m128i *)&v282);
            if ( v282.m256i_i64[3] )
              sub_140001660(v283, v282.m256i_i64[3], 1);
            v65 = v269.m128i_i64[0];
            if ( v269.m128i_i64[0] == -1 )
              goto LABEL_156;
          }
          v66 = (const __m128i *)v269.m128i_i64[1];
          v67 = v270;
          if ( v270 )
          {
            v271 = (const __m128i *)v269.m128i_i64[1];
            v265 = v65;
            v297.m128i_i64[0] = 0;
            v298 = 0;
            nullsub_1(v269.m128i_i64[1]);
            v68 = (_DWORD *)sub_140001650(4, 1);
            if ( !v68 )
              sub_141938D2B(1, 4);
            *v68 = 1701869940;
            v277.m256i_i64[0] = 4;
            v277.m256i_i64[1] = (__int64)v68;
            v277.m256i_i64[2] = 4;
            nullsub_1(v69);
            v70 = sub_140001650(9, 1);
            *(_QWORD *)&v280 = v70;
            if ( !v70 )
              sub_141938D2B(1, 9);
            *(_QWORD *)v70 = 0x6E696E6F73616572LL;
            *(_BYTE *)(v70 + 8) = 103;
            v282.m256i_i8[0] = 3;
            v282.m256i_i64[1] = 9;
            v282.m256i_i64[2] = v70;
            v282.m256i_i64[3] = 9;
            sub_140E72AA0(&v303, &v297, &v277, &v282);
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            nullsub_1(v71);
            v72 = (_WORD *)sub_140001650(2, 1);
            if ( !v72 )
              sub_141938D2B(1, 2);
            *v72 = 25705;
            v277.m256i_i64[0] = 2;
            v257 = v72;
            v277.m256i_i64[1] = (__int64)v72;
            v277.m256i_i64[2] = 2;
            sub_141568C20(&v282);
            v274 = _mm_loadu_si128((const __m128i *)&v282);
            v303.m256i_i64[0] = 0;
            *(_OWORD *)&v303.m256i_u64[1] = 1u;
            v282.m256i_i64[2] = 1610612768;
            v282.m256i_i64[0] = (__int64)&v303;
            v282.m256i_i64[1] = (__int64)&off_1419E98E0;
            if ( (unsigned __int8)sub_141569DC0(&v274, &v282) )
              sub_141939040(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v261,
                (unsigned int)&unk_1419E6AE0,
                (__int64)&off_1419EB798);
            v280 = *(_OWORD *)v303.m256i_i8;
            if ( v303.m256i_i64[2] <= 0xCuLL )
            {
              if ( v303.m256i_i64[2] != 12 )
LABEL_84:
                sub_141938F40(v303.m256i_i32[2], v303.m256i_i32[4], 0, 12, (__int64)&off_1419E8770);
            }
            else if ( *(char *)(v303.m256i_i64[1] + 12) <= -65 )
            {
              goto LABEL_84;
            }
            v272.m128i_i64[0] = v303.m256i_i64[1];
            v272.m128i_i64[1] = 12;
            v303.m256i_i64[0] = (__int64)&v272;
            v303.m256i_i64[1] = (__int64)sub_140186EE0;
            sub_1416ABFD0(&v282, &unk_1419E8788, &v303);
            if ( (_QWORD)v280 )
              sub_140001660(*((_QWORD *)&v280 + 1), v280, 1);
            v89 = v282.m256i_u64[2];
            v280 = *(_OWORD *)v282.m256i_i8;
            if ( v282.m256i_i64[2] < 0 )
            {
              v90 = 0;
              goto LABEL_125;
            }
            if ( v282.m256i_i64[2] )
            {
              v91 = v64;
              nullsub_1(v282.m256i_i64[1]);
              v90 = 1;
              v92 = (__m128i *)sub_140001650(v89, 1);
              if ( !v92 )
              {
LABEL_125:
                v296 = 1;
                sub_141938D2B(v90, v89);
              }
              v3 = (signed __int64)v92;
              sub_1418F44E0(v92, *((const __m128i **)&v280 + 1), v89);
              v64 = v91;
            }
            else
            {
              v3 = 1;
            }
            v282.m256i_i8[0] = 3;
            v282.m256i_i64[1] = v89;
            v282.m256i_i64[2] = v3;
            v282.m256i_i64[3] = v89;
            v296 = 0;
            sub_140E72AA0(&v303, &v297, &v277, &v282);
            LOBYTE(v3) = v276;
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            if ( (_QWORD)v280 )
              sub_140001660(*((_QWORD *)&v280 + 1), v280, 1);
            nullsub_1(v93);
            v94 = sub_140001650(6, 1);
            if ( !v94 )
              sub_141938D2B(1, 6);
            *(_WORD *)(v94 + 4) = 29557;
            *(_DWORD *)v94 = 1952543859;
            v277.m256i_i64[0] = 6;
            v277.m256i_i64[1] = v94;
            v277.m256i_i64[2] = 6;
            nullsub_1(v95);
            v96 = sub_140001650(9, 1);
            *(_QWORD *)&v280 = v96;
            if ( !v96 )
              sub_141938D2B(1, 9);
            *(_QWORD *)v96 = 0x6574656C706D6F63LL;
            *(_BYTE *)(v96 + 8) = 100;
            v282.m256i_i8[0] = 3;
            v282.m256i_i64[1] = 9;
            v282.m256i_i64[2] = v96;
            v282.m256i_i64[3] = 9;
            sub_140E72AA0(&v303, &v297, &v277, &v282);
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            nullsub_1(v97);
            v98 = (_DWORD *)sub_140001650(7, 1);
            if ( !v98 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v98 + 3) = 2037539181;
            *v98 = 1835890035;
            v272.m128i_i64[0] = 7;
            v272.m128i_i64[1] = (__int64)v98;
            v273.m128i_i64[0] = 7;
            nullsub_1(v99);
            v100 = sub_140001650(32, 8);
            if ( !v100 )
            {
              v302 = 1;
              sub_141938D11(8, 32);
            }
            v102 = v100;
            v274.m128i_i64[0] = 0;
            v275.m128i_i64[0] = 0;
            nullsub_1(v101);
            v103 = (_DWORD *)sub_140001650(4, 1);
            *(_QWORD *)&v280 = v102;
            if ( !v103 )
              sub_141938D2B(1, 4);
            *v103 = 1701869940;
            v277.m256i_i64[0] = 4;
            v277.m256i_i64[1] = (__int64)v103;
            v277.m256i_i64[2] = 4;
            nullsub_1(v104);
            v105 = (void *)sub_140001650(12, 1);
            *((_QWORD *)&v280 + 1) = v105;
            if ( !v105 )
              sub_141938D2B(1, 12);
            qmemcpy(v105, "summary_text", 12);
            v282.m256i_i8[0] = 3;
            v282.m256i_i64[1] = 12;
            v282.m256i_i64[2] = (__int64)v105;
            v282.m256i_i64[3] = 12;
            sub_140E72AA0(&v303, &v274, &v277, &v282);
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            nullsub_1(v106);
            v107 = (_DWORD *)sub_140001650(4, 1);
            if ( !v107 )
              sub_141938D2B(1, 4);
            *v107 = 1954047348;
            v277.m256i_i64[0] = 4;
            v277.m256i_i64[1] = (__int64)v107;
            v277.m256i_i64[2] = 4;
            nullsub_1(v108);
            v109 = (__m128i *)sub_140001650(v67, 1);
            *((_QWORD *)&v280 + 1) = v109;
            if ( !v109 )
              sub_141938D2B(1, v67);
            v110 = (__int64)v109;
            sub_1418F44E0(v109, v271, v67);
            v282.m256i_i8[0] = 3;
            v282.m256i_i64[1] = v67;
            v282.m256i_i64[2] = v110;
            v282.m256i_i64[3] = v67;
            sub_140E72AA0(&v303, &v274, &v277, &v282);
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            *(__m128i *)((char *)&v282.m256i_u32[1] + 3) = v274;
            *(__int64 *)((char *)&v282.m256i_i64[2] + 7) = v275.m128i_i64[0];
            v111 = v280;
            *(_BYTE *)v280 = 5;
            v112 = _mm_loadu_si128((const __m128i *)&v282);
            *(_OWORD *)(v111 + 16) = *(_OWORD *)((char *)&v282.m256i_u64[1] + 7);
            *(__m128i *)(v111 + 1) = v112;
            v282.m256i_i64[1] = 1;
            v282.m256i_i64[2] = v111;
            v282.m256i_i64[3] = 1;
            v282.m256i_i8[0] = 4;
            v302 = 0;
            sub_140E72AA0(&v303, &v297, &v272, &v282);
            if ( v303.m256i_i8[0] != -1 )
              sub_14002F9D0(&v303);
            v113 = v64;
            *(__m128i *)&v282.m256i_u64[1] = _mm_loadu_si128(&v297);
            v282.m256i_i64[3] = v298;
            v282.m256i_i8[0] = 5;
            v114 = v268;
            if ( v268 == v266 )
              sub_14190F570(&v266);
            v115 = v267;
            v116 = 32 * v114;
            v117 = _mm_loadu_si128((const __m128i *)&v282);
            *(_OWORD *)(v267 + v116 + 16) = *(_OWORD *)&v282.m256i_u64[2];
            *(__m128i *)(v115 + v116) = v117;
            v268 = v114 + 1;
            v64 = v113;
            v65 = v265;
            v66 = v271;
          }
          if ( v65 )
            goto LABEL_155;
          goto LABEL_156;
        }
      }
    }
  }
LABEL_23:
  v282.m256i_i64[0] = 0;
  v282.m256i_i64[2] = 0;
  v283 = 0;
  v284 = 0;
  v285 = 0;
  v299 = v15;
  v279 = v15;
  v300 = v16;
  v281 = v16;
  v21 = sub_1416419F0(aUsage_1, 5, a2);
  if ( v21 )
  {
    v279 = v299;
    v281 = v300;
    sub_140C18620(&v282, v21);
  }
  v279 = v299;
  v281 = v300;
  sub_140C17E70(&v277, &v282);
  v303.m256i_i8[0] = 0;
  if ( v277.m256i_i8[0] == -1 )
  {
    v273 = _mm_loadu_si128((const __m128i *)&v303.m256i_u64[2]);
    v272 = *(__m128i *)v303.m256i_i8;
  }
  else
  {
    v22 = _mm_loadu_si128((const __m128i *)&v277);
    v273 = *(__m128i *)&v277.m256i_u64[2];
    v272 = v22;
    v279 = v299;
    v281 = v300;
    sub_14002F9D0(&v303);
  }
  sub_140163D60(&v303, a2);
  if ( v303.m256i_i64[0] == -1 )
  {
    v25 = 0;
    if ( v300 != -1 )
      v25 = v299;
    sub_140163AC0(&v277, v25, v300);
  }
  else
  {
    v278 = v304;
    v24 = _mm_loadu_si128((const __m128i *)&v303);
    *(_OWORD *)&v277.m256i_u64[2] = *(_OWORD *)&v303.m256i_u64[2];
    *(__m128i *)v277.m256i_i8 = v24;
  }
  if ( !__OFSUB__(0, v277.m256i_i64[0]) )
  {
    v26 = v267;
    v27 = v267 + 32 * v268;
    if ( v267 != v27 )
    {
      do
      {
        nullsub_1(v23);
        v28 = (void *)sub_140001650(10, 1);
        if ( !v28 )
          sub_141938D2B(1, 10);
        qmemcpy(v28, "incomplete", 10);
        v303.m256i_i8[0] = 3;
        v303.m256i_i64[1] = 10;
        v303.m256i_i64[2] = (__int64)v28;
        v303.m256i_i64[3] = 10;
        v290 = 1;
        v276 = sub_141641AF0(aStatus_3, 6, v26);
        sub_14002F9D0(v276);
        v26 += 32;
        v29 = _mm_loadu_si128((const __m128i *)&v303);
        v30 = (_OWORD *)v276;
        *(_OWORD *)(v276 + 16) = *(_OWORD *)&v303.m256i_u64[2];
        *v30 = v29;
      }
      while ( v26 != v27 );
    }
  }
  v269.m128i_i64[0] = 0;
  v270 = 0;
  nullsub_1(v23);
  v31 = (_WORD *)sub_140001650(2, 1);
  if ( !v31 )
    sub_141938D2B(1, 2);
  *v31 = 25705;
  v297.m128i_i64[0] = 2;
  v297.m128i_i64[1] = (__int64)v31;
  v298 = 2;
  v33 = v249;
  if ( v249 < 0 )
  {
    v34 = 0;
    goto LABEL_40;
  }
  if ( v249 )
  {
    v35 = v248;
    nullsub_1(v32);
    v34 = 1;
    v36 = (__m128i *)sub_140001650(v33, 1);
    if ( !v36 )
    {
LABEL_40:
      v289 = 1;
      sub_141938D2B(v34, v33);
    }
    v37 = (__int64)v36;
    sub_1418F44E0(v36, v35, v33);
  }
  else
  {
    v37 = 1;
  }
  v303.m256i_i8[0] = 3;
  v303.m256i_i64[1] = v33;
  v303.m256i_i64[2] = v37;
  v303.m256i_i64[3] = v33;
  v289 = 0;
  sub_140E72AA0(&v274, &v269, &v297, &v303);
  if ( v274.m128i_i8[0] != -1 )
    sub_14002F9D0(&v274);
  nullsub_1(v38);
  v39 = sub_140001650(6, 1);
  if ( !v39 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v39 + 4) = 29795;
  *(_DWORD *)v39 = 1701470831;
  v297.m128i_i64[0] = 6;
  v297.m128i_i64[1] = v39;
  v298 = 6;
  nullsub_1(v40);
  v41 = (_QWORD *)sub_140001650(8, 1);
  v276 = (__int64)v41;
  if ( !v41 )
    sub_141938D2B(1, 8);
  *v41 = 0x65736E6F70736572LL;
  v303.m256i_i8[0] = 3;
  v303.m256i_i64[1] = 8;
  v303.m256i_i64[2] = (__int64)v41;
  v303.m256i_i64[3] = 8;
  sub_140E72AA0(&v274, &v269, &v297, &v303);
  if ( v274.m128i_i8[0] != -1 )
    sub_14002F9D0(&v274);
  nullsub_1(v42);
  v43 = (void *)sub_140001650(10, 1);
  if ( !v43 )
    sub_141938D2B(1, 10);
  qmemcpy(v43, "created_at", 10);
  v297.m128i_i64[0] = 10;
  v297.m128i_i64[1] = (__int64)v43;
  v298 = 10;
  v288 = 1;
  sub_141406CE0(v246);
  v44 = (SLODWORD(v246[0]) >> 13) - 1;
  v45 = 0;
  if ( SLODWORD(v246[0]) >> 13 <= 0 )
  {
    v46 = (1 - (SLODWORD(v246[0]) >> 13)) / 0x190u + 1;
    v44 += 400 * v46;
    v45 = -146097 * v46;
  }
  v303.m256i_i8[0] = 2;
  v303.m256i_i64[1] = ((unsigned __int64)HIDWORD(v246[0])
                     + 86400LL
                     * (((v44 / 100) >> 2)
                      + ((1461 * v44) >> 2)
                      + v45
                      + ((LODWORD(v246[0]) >> 4) & 0x1FF)
                      - v44 / 100
                      - 719163)) >> 63;
  v303.m256i_i64[2] = HIDWORD(v246[0])
                    + 86400LL
                    * (((v44 / 100) >> 2)
                     + ((1461 * v44) >> 2)
                     + v45
                     + ((LODWORD(v246[0]) >> 4) & 0x1FF)
                     - v44 / 100
                     - 719163);
  v288 = 0;
  sub_140E72AA0(&v274, &v269, &v297, &v303);
  if ( v274.m128i_i8[0] != -1 )
    sub_14002F9D0(&v274);
  nullsub_1(v47);
  v48 = 1;
  v49 = sub_140001650(5, 1);
  if ( !v49 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v49 + 4) = 108;
  *(_DWORD *)v49 = 1701080941;
  v297.m128i_i64[0] = 5;
  v297.m128i_i64[1] = v49;
  v298 = 5;
  if ( !(_BYTE)v3 )
  {
    nullsub_1(v50);
    v51 = v258;
    v52 = (__m128i *)sub_140001650(v258, 1);
    if ( !v52 )
    {
      v287 = 1;
      sub_141938D2B(1, v51);
    }
    v48 = (__int64)v52;
    sub_1418F44E0(v52, (const __m128i *)v256, v51);
  }
  v303.m256i_i8[0] = 3;
  v303.m256i_i64[1] = v258;
  v303.m256i_i64[2] = v48;
  v303.m256i_i64[3] = v258;
  v287 = 0;
  sub_140E72AA0(&v274, &v269, &v297, &v303);
  if ( v274.m128i_i8[0] != -1 )
    sub_14002F9D0(&v274);
  nullsub_1(v53);
  v54 = sub_140001650(6, 1);
  if ( !v54 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v54 + 4) = 29813;
  *(_DWORD *)v54 = 1886680431;
  v297.m128i_i64[0] = 6;
  v297.m128i_i64[1] = v54;
  v298 = 6;
  v306 = 1;
  sub_140C0FE40(&v303, &v266);
  if ( v303.m256i_i8[0] == -1 )
  {
    v274.m128i_i64[0] = v303.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v274,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E87E8);
  }
  v55 = _mm_loadu_si128((const __m128i *)&v303);
  v275 = *(__m128i *)&v303.m256i_u64[2];
  v274 = v55;
  v306 = 0;
  sub_140E72AA0(&v303, &v269, &v297, &v274);
  if ( v303.m256i_i8[0] != -1 )
    sub_14002F9D0(&v303);
  nullsub_1(v56);
  v57 = (void *)sub_140001650(11, 1);
  if ( !v57 )
    sub_141938D2B(1, 11);
  qmemcpy(v57, "output_text", 11);
  v297.m128i_i64[0] = 11;
  v297.m128i_i64[1] = (__int64)v57;
  v298 = 11;
  v58 = v255;
  if ( v255 < 0 )
  {
    v59 = 0;
    goto LABEL_69;
  }
  if ( v255 )
  {
    v60 = (const __m128i *)v254;
    nullsub_1(0x745F74757074756FLL);
    v59 = 1;
    v61 = (__m128i *)sub_140001650(v58, 1);
    if ( !v61 )
    {
LABEL_69:
      v286 = 1;
      sub_141938D2B(v59, v58);
    }
    v62 = (__int64)v61;
    sub_1418F44E0(v61, v60, v58);
  }
  else
  {
    v62 = 1;
  }
  v303.m256i_i8[0] = 3;
  v303.m256i_i64[1] = v58;
  v303.m256i_i64[2] = v62;
  v303.m256i_i64[3] = v58;
  v286 = 0;
  sub_140E72AA0(&v274, &v269, &v297, &v303);
  if ( v274.m128i_i8[0] != -1 )
    sub_14002F9D0(&v274);
  nullsub_1(v73);
  v74 = sub_140001650(5, 1);
  if ( !v74 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v74 + 4) = 101;
  *(_DWORD *)v74 = 1734439797;
  v297.m128i_i64[0] = 5;
  v297.m128i_i64[1] = v74;
  v298 = 5;
  v305 = 1;
  sub_140412420(&v303, &v272);
  if ( v303.m256i_i8[0] == -1 )
  {
    v274.m128i_i64[0] = v303.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v274,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E87E8);
  }
  v75 = _mm_loadu_si128((const __m128i *)&v303);
  v275 = *(__m128i *)&v303.m256i_u64[2];
  v274 = v75;
  v305 = 0;
  sub_140E72AA0(&v303, &v269, &v297, &v274);
  if ( v303.m256i_i8[0] != -1 )
    sub_14002F9D0(&v303);
  *(__m128i *)&v303.m256i_u64[1] = _mm_loadu_si128(&v269);
  v303.m256i_i64[3] = v270;
  v303.m256i_i8[0] = 5;
  sub_140164630((__int64)&v277, (__int64)&v303);
  v76 = _mm_loadu_si128((const __m128i *)&v303);
  v77 = v250;
  v250[1] = *(__m128i *)&v303.m256i_u64[2];
  *v77 = v76;
  if ( v277.m256i_i64[0] >= (__int64)0x8000000000000002uLL && v277.m256i_i64[0] )
    sub_140001660(v277.m256i_i64[1], v277.m256i_i64[0], 1);
  v279 = v299;
  v281 = v300;
  sub_14002F9D0(&v272);
  if ( v300 > 0 )
    sub_140001660(v299, v300, 1);
  if ( v253 )
    sub_140001660(v254, v253, 1);
  v78 = v267;
  v300 = v268;
  v276 = 0;
  v299 = v267;
  while ( v300 != v276 )
  {
    ++v276;
    v79 = v78 + 32;
    sub_1403880E0(v78);
    v78 = v79;
  }
  if ( v266 )
    sub_140001660(v267, 32 * v266, 8);
  if ( v258 )
    sub_140001660(v256, v258, 1);
  if ( v247 )
    sub_140001660(v248, v247, 1);
  return v250;
}
