// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1408a4ed0 | successor of pre-update 0x1402f5e70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.94, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
__m128i *__fastcall sub_1408A4ED0(__m128i *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  const __m128i *v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r14
  void *v30; // rax
  __m128i v31; // xmm0
  _OWORD *v32; // rax
  _WORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v49; // rax
  int v50; // edx
  int v51; // ecx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __int64 v66; // rcx
  void *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // r15
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rsi
  _DWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  _WORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  __m128i *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r15
  __int64 v99; // r15
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r15
  __int64 v103; // rdx
  __int64 v104; // r12
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  _DWORD *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r15
  _DWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  void *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  _DWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // r15
  __int64 v134; // rcx
  __m128i v135; // xmm0
  __int64 v136; // r15
  __int64 v137; // r14
  __int64 v138; // rax
  __int64 v139; // rcx
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // r12
  __int64 v143; // r8
  __int64 v144; // rsi
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // r15
  __int64 v148; // r14
  _DWORD *v149; // rax
  __m128i v150; // xmm0
  __int64 v151; // rdx
  __int64 v152; // rcx
  _WORD *v153; // rax
  __m128i v154; // xmm0
  __int64 v155; // rcx
  __int64 v156; // rdx
  _DWORD *v157; // rax
  __m128i v158; // xmm0
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  __m128i v162; // xmm0
  __int64 v163; // rdx
  __int64 v164; // rcx
  _DWORD *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  _DWORD *v171; // rax
  __m128i v172; // xmm0
  __int64 v173; // rdx
  __int64 v174; // rcx
  _DWORD *v175; // rax
  __m128i v176; // xmm0
  __int64 v177; // rdx
  __int64 v178; // rcx
  void *v179; // rax
  __int64 v180; // rcx
  __m128i v181; // xmm0
  __int64 v182; // r14
  __int64 v183; // rax
  __int64 v184; // rcx
  __m128i v185; // xmm0
  __int64 v186; // r12
  __int64 v187; // r14
  __int64 v188; // rax
  __int64 v189; // r14
  __int64 v190; // r12
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r15
  void *v195; // r12
  __int64 v196; // rbx
  __int64 v197; // r13
  __int64 v198; // rax
  char v199; // si
  __int64 v200; // rax
  __int8 v201; // r15
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rbx
  void *v207; // r12
  __int64 v208; // r13
  __int64 v209; // rax
  __int64 v210; // r15
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rbx
  const char *v215; // r12
  __int64 v216; // r13
  __int64 v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  _DWORD *v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rcx
  void *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  _WORD *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // r12
  __int64 v229; // r15
  __int64 v230; // rax
  __int64 v231; // r13
  __int64 v232; // rcx
  __int64 v233; // rdx
  _DWORD *v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r15
  __int64 v238; // r12
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  _DWORD *v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r12
  __int64 v246; // rbx
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // r12
  __int64 v253; // rsi
  __int64 v254; // r15
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // rax
  unsigned __int64 v262; // r12
  __m128i v264; // xmm0
  __m128i v265; // xmm7
  __int64 i; // rsi
  unsigned __int64 v267; // r12
  _WORD *v268; // rdx
  __m128i v269; // xmm8
  unsigned __int64 v271; // rbx
  _WORD *v272; // r13
  int v273; // eax
  unsigned __int64 v274; // r15
  __int64 v275; // r12
  __int64 v276; // rsi
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r13
  __m128i v280; // xmm0
  _OWORD *v281; // rax
  __int64 v282; // rbx
  __int64 v283; // rax
  __int64 v284; // rcx
  __m128i si128; // xmm0
  __int64 v286; // r12
  _QWORD v287[3]; // [rsp+70h] [rbp-10h] BYREF
  __m128i v288; // [rsp+88h] [rbp+8h] BYREF
  __int64 v289; // [rsp+98h] [rbp+18h]
  __m128i v290; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v291; // [rsp+B0h] [rbp+30h]
  __int64 v292; // [rsp+B8h] [rbp+38h]
  _QWORD *v293; // [rsp+C0h] [rbp+40h]
  _QWORD v294[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v295; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v296; // [rsp+E8h] [rbp+68h]
  __int64 v297; // [rsp+F0h] [rbp+70h]
  __m128i *v298; // [rsp+F8h] [rbp+78h]
  __int64 v299; // [rsp+100h] [rbp+80h]
  __int64 v300; // [rsp+108h] [rbp+88h]
  __int64 v301; // [rsp+110h] [rbp+90h] BYREF
  __int64 v302; // [rsp+118h] [rbp+98h]
  __int64 v303; // [rsp+120h] [rbp+A0h]
  __int64 v304; // [rsp+128h] [rbp+A8h]
  _WORD *v305; // [rsp+130h] [rbp+B0h]
  __int64 v306; // [rsp+138h] [rbp+B8h]
  __int64 v307; // [rsp+140h] [rbp+C0h]
  __int64 v308; // [rsp+148h] [rbp+C8h]
  char v309; // [rsp+157h] [rbp+D7h] BYREF
  __int64 v310; // [rsp+158h] [rbp+D8h]
  __int64 v311; // [rsp+160h] [rbp+E0h]
  __int64 v312; // [rsp+168h] [rbp+E8h]
  __int64 v313; // [rsp+170h] [rbp+F0h]
  __int64 v314; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v315; // [rsp+180h] [rbp+100h]
  __int64 v316; // [rsp+188h] [rbp+108h]
  __m128i v317; // [rsp+190h] [rbp+110h] BYREF
  __int64 v318; // [rsp+1A0h] [rbp+120h]
  _BYTE *v319; // [rsp+1A8h] [rbp+128h]
  __m128i v320; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v321; // [rsp+1C0h] [rbp+140h]
  __m128i v322; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v323; // [rsp+1E0h] [rbp+160h]
  __int64 v324; // [rsp+1F8h] [rbp+178h]
  __m256i v325; // [rsp+200h] [rbp+180h] BYREF
  __int64 v326; // [rsp+220h] [rbp+1A0h]
  __int64 v327; // [rsp+230h] [rbp+1B0h]
  __int128 v328; // [rsp+238h] [rbp+1B8h]
  __int64 v329; // [rsp+248h] [rbp+1C8h]
  __m256i v330; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v331; // [rsp+270h] [rbp+1F0h]
  __int64 v332; // [rsp+280h] [rbp+200h]
  __int64 v333; // [rsp+290h] [rbp+210h]
  char v334; // [rsp+2A5h] [rbp+225h]
  char v335; // [rsp+2A6h] [rbp+226h]
  char v336; // [rsp+2A7h] [rbp+227h]
  char v337; // [rsp+2A8h] [rbp+228h]
  char v338; // [rsp+2A9h] [rbp+229h]
  char v339; // [rsp+2AAh] [rbp+22Ah]
  char v340; // [rsp+2ABh] [rbp+22Bh]
  char v341; // [rsp+2ACh] [rbp+22Ch]
  char v342; // [rsp+2ADh] [rbp+22Dh]
  char v343; // [rsp+2AEh] [rbp+22Eh]
  char v344; // [rsp+2AFh] [rbp+22Fh]
  __m128i v345; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v346; // [rsp+2C0h] [rbp+240h]
  __int64 v347; // [rsp+2C8h] [rbp+248h]
  __int64 v348; // [rsp+2D0h] [rbp+250h]
  char v349; // [rsp+2DEh] [rbp+25Eh]
  char v350; // [rsp+2DFh] [rbp+25Fh]
  __m256i v351; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v352; // [rsp+300h] [rbp+280h]
  char v353; // [rsp+30Fh] [rbp+28Fh]
  char v354; // [rsp+310h] [rbp+290h]
  char v355; // [rsp+311h] [rbp+291h]
  char v356; // [rsp+312h] [rbp+292h]
  char v357; // [rsp+313h] [rbp+293h]
  char v358; // [rsp+314h] [rbp+294h]
  char v359; // [rsp+315h] [rbp+295h]
  char v360; // [rsp+316h] [rbp+296h]
  char v361; // [rsp+317h] [rbp+297h]
  __int64 v362; // [rsp+318h] [rbp+298h]

  v362 = -2;
  v298 = a1;
  v6 = (const __m128i *)sub_1416724D0(aId_5, 2, a2);
  if ( v6 && v6->m128i_i8[0] == 3 )
  {
    *(__m128i *)v351.m256i_i8 = _mm_loadu_si128(v6 + 1);
    v330.m256i_i64[0] = (__int64)&v351;
    v7 = sub_140191200;
  }
  else
  {
    sub_141597890(&v351);
    v330.m256i_i64[0] = (__int64)&v351;
    v7 = (__int64 (__fastcall *)())sub_1402230B0;
  }
  v330.m256i_i64[1] = (__int64)v7;
  sub_1416DAFA0(&v295, &unk_141A52120, &v330);
  v8 = sub_1416724D0(aModel_2, 5, a2);
  v11 = &unk_141A53D65;
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
      v304 = 1;
      LOBYTE(v3) = 1;
      v306 = 0;
      goto LABEL_14;
    }
    v11 = *(void **)(v8 + 16);
  }
  nullsub_1(v10, v9);
  v13 = 1;
  v14 = sub_140001650(v12, 1);
  if ( !v14 )
  {
    v9 = v12;
LABEL_9:
    sub_14196B2DB(v13, v9);
  }
  v304 = v14;
  v306 = v12;
  sub_1419234B0(v14, v11, v12);
  LODWORD(v3) = 0;
LABEL_14:
  v314 = 0;
  v315 = 8;
  v316 = 0;
  v301 = 0;
  v302 = 1;
  v303 = 0;
  v329 = -1;
  v15 = sub_1416724D0("choicesfinish_reason", 7, a2);
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
          v329 = -1;
          v18 = sub_1416724D0("finish_reason", 13, v17);
          LODWORD(v324) = v3;
          v3 = -1;
          if ( v18 && *(_BYTE *)v18 == 3 )
          {
            v3 = *(_QWORD *)(v18 + 24);
            if ( v3 < 0 )
            {
              v21 = 0;
              goto LABEL_22;
            }
            if ( v3 )
            {
              v99 = *(_QWORD *)(v18 + 16);
              nullsub_1(v20, v19);
              v21 = 1;
              v100 = sub_140001650(v3, 1);
              if ( !v100 )
              {
LABEL_22:
                v329 = -1;
                sub_14196B2DB(v21, v3);
              }
              v101 = v99;
              v102 = v100;
              sub_1419234B0(v100, v101, v3);
              v18 = v102;
            }
            else
            {
              v18 = 1;
              v3 = 0;
            }
          }
          v347 = v18;
          v327 = v18;
          v348 = v3;
          v329 = v3;
          v74 = sub_1416724D0(aMessage_5, 7, v17);
          LOBYTE(v3) = v324;
          v75 = v74;
          if ( !v74 )
            goto LABEL_321;
          v327 = v347;
          v329 = v348;
          sub_140A93D30(&v317, v74);
          v76 = v317.m128i_i64[0];
          if ( v317.m128i_i64[0] == -1 )
          {
            v327 = v347;
            v329 = v348;
            v95 = sub_1416724D0(aContent_5, 7, v75);
            if ( !v95 )
              goto LABEL_156;
            if ( *(_BYTE *)v95 != 3 )
              goto LABEL_156;
            v96 = *(_QWORD *)(v95 + 16);
            v97 = *(_QWORD *)(v95 + 24);
            v327 = v347;
            v329 = v348;
            sub_1408A4AE0(&v330, v96, v97);
            v98 = v330.m256i_i64[0];
            if ( v330.m256i_i64[0] == -1 )
              goto LABEL_156;
            if ( !v330.m256i_i64[2] )
            {
              v286 = v330.m256i_i64[1];
              if ( v330.m256i_i64[3] )
                sub_140001660(v331, v330.m256i_i64[3], 1);
              if ( v98 )
              {
                v77 = v286;
                v76 = v98;
LABEL_155:
                sub_140001660(v77, v76, 1);
              }
LABEL_156:
              v327 = v347;
              v329 = v348;
              v141 = sub_1416724D0(aContent_5, 7, v75);
              if ( v141 && *(_BYTE *)v141 == 3 )
              {
                v142 = *(_QWORD *)(v141 + 16);
                v143 = *(_QWORD *)(v141 + 24);
                v327 = v347;
                v329 = v348;
                v144 = v143;
                sub_1408A4AE0(v287, v142, v143);
                v146 = v287[0];
                v307 = v75;
                if ( v287[0] == -1 )
                {
                  v147 = v144;
                  sub_1401E7560((unsigned int)&v330, v144, 0, 1, 1);
                  v3 = v330.m256i_i64[1];
                  if ( v330.m256i_i32[0] == 1 )
                  {
                    v327 = v347;
                    v329 = v348;
                    sub_14196B2DB(v330.m256i_i64[1], v330.m256i_i64[2]);
                  }
                  v148 = v330.m256i_i64[2];
                  if ( v144 )
                  {
                    sub_1419234B0(v330.m256i_i64[2], v142, v144);
                    v147 = v144;
                  }
                  v317.m128i_i64[0] = v3;
                  v317.m128i_i64[1] = v148;
                  v318 = v147;
                  LOBYTE(v3) = v324;
                }
                else
                {
                  if ( v287[0] )
                    sub_140001660(v287[1], v287[0], 1);
                  v147 = v289;
                  v318 = v289;
                  v317 = _mm_loadu_si128(&v288);
                }
                v75 = v307;
                if ( v147 )
                {
                  v345.m128i_i64[0] = 0;
                  v346 = 0;
                  nullsub_1(v145, v146);
                  v149 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v149 )
                    sub_14196B2DB(1, 4);
                  *v149 = 1701869940;
                  v325.m256i_i64[0] = 4;
                  v325.m256i_i64[1] = (__int64)v149;
                  v325.m256i_i64[2] = 4;
                  v360 = 1;
                  sub_140B72ED0(&v330, &off_141A521A0);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v150 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v150;
                  v360 = 0;
                  sub_140A68320(&v330, &v345, &v325, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  nullsub_1(v152, v151);
                  v153 = (_WORD *)sub_140001650(2, 1);
                  if ( !v153 )
                    sub_14196B2DB(1, 2);
                  *v153 = 25705;
                  v322.m128i_i64[0] = 2;
                  v319 = v153;
                  v322.m128i_i64[1] = (__int64)v153;
                  v323.m128i_i64[0] = 2;
                  sub_141597890(&v330);
                  *(__m128i *)v325.m256i_i8 = _mm_loadu_si128((const __m128i *)&v330);
                  v351.m256i_i64[0] = (__int64)&v325;
                  v351.m256i_i64[1] = (__int64)sub_1402230B0;
                  sub_1416DAFA0(&v330, &unk_141A53DB8, &v351);
                  *(__m128i *)v325.m256i_i8 = _mm_loadu_si128((const __m128i *)&v330);
                  v325.m256i_i64[2] = v330.m256i_i64[2];
                  v359 = 1;
                  sub_140B72E40(&v330, &v325);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v154 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v154;
                  v359 = 0;
                  sub_140A68320(&v330, &v345, &v322, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  v156 = v325.m256i_i64[0];
                  if ( v325.m256i_i64[0] )
                    sub_140001660(v325.m256i_i64[1], v325.m256i_i64[0], 1);
                  nullsub_1(v155, v156);
                  v157 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v157 )
                    sub_14196B2DB(1, 4);
                  *v157 = 1701605234;
                  v325.m256i_i64[0] = 4;
                  v325.m256i_i64[1] = (__int64)v157;
                  v325.m256i_i64[2] = 4;
                  v358 = 1;
                  sub_140B72ED0(&v330, &off_141A520F8);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v158 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v158;
                  v358 = 0;
                  sub_140A68320(&v330, &v345, &v325, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  nullsub_1(v160, v159);
                  v161 = sub_140001650(6, 1);
                  if ( !v161 )
                    sub_14196B2DB(1, 6);
                  *(_WORD *)(v161 + 4) = 29557;
                  *(_DWORD *)v161 = 1952543859;
                  v325.m256i_i64[0] = 6;
                  v325.m256i_i64[1] = v161;
                  v325.m256i_i64[2] = 6;
                  v357 = 1;
                  sub_140B72ED0(&v330, &off_141A521D0);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v162 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v162;
                  v357 = 0;
                  sub_140A68320(&v330, &v345, &v325, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  nullsub_1(v164, v163);
                  v165 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v165 )
                    sub_14196B2DB(1, 7);
                  *(_DWORD *)((char *)v165 + 3) = 1953391988;
                  *v165 = 1953394531;
                  v320.m128i_i64[0] = 7;
                  v320.m128i_i64[1] = (__int64)v165;
                  v321.m128i_i64[0] = 7;
                  nullsub_1(v167, v166);
                  v168 = sub_140001650(32, 8);
                  if ( !v168 )
                  {
                    v349 = 1;
                    sub_14196B2C1(8, 32);
                  }
                  v319 = (_BYTE *)v168;
                  v322.m128i_i64[0] = 0;
                  v323.m128i_i64[0] = 0;
                  nullsub_1(v170, v169);
                  v171 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v171 )
                    sub_14196B2DB(1, 4);
                  *v171 = 1701869940;
                  v325.m256i_i64[0] = 4;
                  v325.m256i_i64[1] = (__int64)v171;
                  v325.m256i_i64[2] = 4;
                  v356 = 1;
                  sub_140B72ED0(&v330, &off_141A53DC0);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v172 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v172;
                  v356 = 0;
                  sub_140A68320(&v330, &v322, &v325, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  nullsub_1(v174, v173);
                  v175 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v175 )
                    sub_14196B2DB(1, 4);
                  *v175 = 1954047348;
                  v325.m256i_i64[0] = 4;
                  v325.m256i_i64[1] = (__int64)v175;
                  v325.m256i_i64[2] = 4;
                  v355 = 1;
                  sub_140B72E40(&v330, &v317);
                  if ( v330.m256i_i8[0] == -1 )
                  {
                    v351.m256i_i64[0] = v330.m256i_i64[1];
                    sub_14196B5F0(
                      (unsigned int)aCalledResultUn_11,
                      43,
                      (unsigned int)&v351,
                      (unsigned int)&off_141A52958,
                      (__int64)&off_141A53DA0);
                  }
                  v176 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)v351.m256i_i8 = v176;
                  v355 = 0;
                  sub_140A68320(&v330, &v322, &v325, &v351);
                  if ( v330.m256i_i8[0] != -1 )
                    sub_140032FF0(&v330);
                  nullsub_1(v178, v177);
                  v179 = (void *)sub_140001650(11, 1);
                  if ( !v179 )
                    sub_14196B2DB(1, 11);
                  qmemcpy(v179, "annotations", 11);
                  v325.m256i_i64[0] = 11;
                  v325.m256i_i64[1] = (__int64)v179;
                  v325.m256i_i64[2] = 11;
                  v330.m256i_i64[1] = 0;
                  *(_OWORD *)&v330.m256i_u64[2] = 8u;
                  v330.m256i_i8[0] = 4;
                  sub_140A68320(&v351, &v322, &v325, &v330);
                  if ( v351.m256i_i8[0] != -1 )
                    sub_140032FF0(&v351);
                  *(__m128i *)((char *)&v330.m256i_u32[1] + 3) = v322;
                  *(__int64 *)((char *)&v330.m256i_i64[2] + 7) = v323.m128i_i64[0];
                  v180 = (__int64)v319;
                  *v319 = 5;
                  v181 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)(v180 + 16) = *(_OWORD *)((char *)&v330.m256i_u64[1] + 7);
                  *(__m128i *)(v180 + 1) = v181;
                  v330.m256i_i64[1] = 1;
                  v330.m256i_i64[2] = v180;
                  v330.m256i_i64[3] = 1;
                  v330.m256i_i8[0] = 4;
                  v349 = 0;
                  sub_140A68320(&v351, &v345, &v320, &v330);
                  if ( v351.m256i_i8[0] != -1 )
                    sub_140032FF0(&v351);
                  *(__m128i *)&v330.m256i_u64[1] = _mm_loadu_si128(&v345);
                  v330.m256i_i64[3] = v346;
                  v330.m256i_i8[0] = 5;
                  v182 = v316;
                  if ( v316 == v314 )
                    sub_1419397B0(&v314);
                  v183 = v315;
                  v184 = 32 * v182;
                  v185 = _mm_loadu_si128((const __m128i *)&v330);
                  *(_OWORD *)(v315 + v184 + 16) = *(_OWORD *)&v330.m256i_u64[2];
                  *(__m128i *)(v183 + v184) = v185;
                  v316 = v182 + 1;
                  v186 = v317.m128i_i64[1];
                  sub_141939070((unsigned int)&v301, 0, v147, 1, 1);
                  v187 = v303;
                  sub_1419234B0(v303 + v302, v186, v147);
                  v303 = v147 + v187;
                  v75 = v307;
                }
                if ( v317.m128i_i64[0] )
                  sub_140001660(v317.m128i_i64[1], v317.m128i_i64[0], 1);
              }
              v327 = v347;
              v329 = v348;
              v188 = sub_1416724D0(aToolCalls, 10, v75);
              if ( v188 )
              {
                v16 = v348;
                if ( *(_BYTE *)v188 == 4 )
                {
                  v189 = *(_QWORD *)(v188 + 16);
                  v190 = v189 + 32LL * *(_QWORD *)(v188 + 24);
                  v291 = a3[3];
                  v293 = a3 + 4;
                  v305 = (_WORD *)*a3;
                  v307 = a3[1];
                  v292 = v190;
                  while ( 1 )
                  {
                    if ( v189 == v190 )
                      goto LABEL_322;
                    v327 = v347;
                    v329 = v16;
                    v191 = sub_1416724D0(aId_5, 2, v189);
                    v194 = 12;
                    if ( !v191 )
                      break;
                    v195 = &unk_141A53B24;
                    v196 = v348;
                    if ( *(_BYTE *)v191 == 3 )
                    {
                      v194 = *(_QWORD *)(v191 + 24);
                      if ( v194 < 0 )
                      {
                        v197 = 0;
                        goto LABEL_324;
                      }
                      if ( !v194 )
                      {
                        *(_QWORD *)&v328 = 1;
                        v199 = 1;
                        v319 = nullptr;
                        goto LABEL_218;
                      }
                      v195 = *(void **)(v191 + 16);
                      goto LABEL_215;
                    }
LABEL_216:
                    nullsub_1(v193, v192);
                    v197 = 1;
                    v198 = sub_140001650(v194, 1);
                    if ( !v198 )
                    {
                      *(_QWORD *)&v328 = v194;
LABEL_324:
                      v327 = v347;
                      v329 = v196;
                      sub_14196B2DB(v197, v328);
                    }
                    *(_QWORD *)&v328 = v198;
                    v319 = (_BYTE *)v194;
                    sub_1419234B0(v198, v195, v194);
                    v199 = 0;
LABEL_218:
                    v200 = sub_1416724D0(aFunction_0, 8, v189);
                    if ( v200 )
                    {
                      v201 = *(_BYTE *)v200;
                      switch ( *(_BYTE *)v200 )
                      {
                        case 0:
                          break;
                        case 1:
                          v330.m256i_i8[1] = *(_BYTE *)(v200 + 1);
                          break;
                        case 2:
                          *(__m128i *)&v330.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v200 + 8));
                          break;
                        case 3:
                          sub_1416DB410(&v330.m256i_u64[1], v200 + 8);
                          JUMPOUT(0x1408A712ELL);
                        case 4:
                          sub_1401C07A0(&v330.m256i_u64[1], *(_QWORD *)(v200 + 16), *(_QWORD *)(v200 + 24));
                          break;
                        case 5:
                          if ( *(_QWORD *)(v200 + 24) )
                          {
                            v202 = *(_QWORD *)(v200 + 8);
                            if ( !v202 )
                              sub_14196B5D0(&off_141A6CB98);
                            sub_140A21590(&v330.m256i_u64[1], v202, *(_QWORD *)(v200 + 16));
                          }
                          else
                          {
                            v330.m256i_i64[1] = 0;
                            v330.m256i_i64[3] = 0;
                          }
                          break;
                      }
                      v323 = *(__m128i *)&v330.m256i_u64[2];
                      v322.m128i_i8[0] = v201;
                      v322.m128i_i8[1] = v330.m256i_i8[1];
                      *(__int32 *)((char *)v322.m128i_i32 + 2) = *(__int32 *)((char *)v330.m256i_i32 + 2);
                      v322.m128i_i16[3] = v330.m256i_i16[3];
                      v322.m128i_i64[1] = v330.m256i_i64[1];
                      v330.m256i_i8[0] = 0;
                      sub_140032FF0(&v330);
                    }
                    else
                    {
                      v330.m256i_i8[0] = 0;
                      v323 = _mm_loadu_si128((const __m128i *)&v330.m256i_u64[2]);
                      v322.m128i_i8[0] = 0;
                      *(__int64 *)((char *)v322.m128i_i64 + 1) = *(__int64 *)((char *)v330.m256i_i64 + 1);
                      *(__int32 *)((char *)&v322.m128i_i32[2] + 1) = *(__int32 *)((char *)&v330.m256i_i32[2] + 1);
                      *(__int16 *)((char *)&v322.m128i_i16[6] + 1) = *(__int16 *)((char *)&v330.m256i_i16[6] + 1);
                      v322.m128i_i8[15] = v330.m256i_i8[15];
                    }
                    v203 = sub_1416724D0(aName_6, 4, &v322);
                    v206 = 4;
                    if ( v203 )
                    {
                      v207 = &unk_141A53B30;
                      if ( *(_BYTE *)v203 == 3 )
                      {
                        v206 = *(_QWORD *)(v203 + 24);
                        if ( v206 < 0 )
                        {
                          v208 = 0;
                          goto LABEL_326;
                        }
                        if ( !v206 )
                        {
                          v210 = 1;
                          LOBYTE(v203) = 1;
                          LODWORD(v312) = v203;
                          v206 = 0;
                          goto LABEL_239;
                        }
                        v207 = *(void **)(v203 + 16);
                      }
                    }
                    else
                    {
                      v207 = &unk_141A53B30;
                    }
                    nullsub_1(v205, v204);
                    v208 = 1;
                    v209 = sub_140001650(v206, 1);
                    if ( !v209 )
                    {
                      *((_QWORD *)&v328 + 1) = v206;
LABEL_326:
                      sub_14196B2DB(v208, *((_QWORD *)&v328 + 1));
                    }
                    v210 = v209;
                    sub_1419234B0(v209, v207, v206);
                    LODWORD(v312) = 0;
LABEL_239:
                    v294[0] = v206;
                    *((_QWORD *)&v328 + 1) = v210;
                    v294[1] = v210;
                    v313 = v206;
                    v294[2] = v206;
                    v211 = sub_1416724D0(aArguments_0, 9, &v322);
                    v214 = 2;
                    if ( v211 )
                    {
                      v215 = asc_141A520D5;
                      if ( *(_BYTE *)v211 == 3 )
                      {
                        v214 = *(_QWORD *)(v211 + 24);
                        if ( v214 < 0 )
                        {
                          v216 = 0;
                          goto LABEL_330;
                        }
                        if ( !v214 )
                        {
                          v310 = 1;
                          v214 = 0;
                          v299 = 0;
                          if ( v313 != 11 )
                            goto LABEL_248;
                          goto LABEL_247;
                        }
                        v215 = *(const char **)(v211 + 16);
                      }
                    }
                    else
                    {
                      v215 = asc_141A520D5;
                    }
                    nullsub_1(v213, v212);
                    v216 = 1;
                    v217 = sub_140001650(v214, 1);
                    if ( !v217 )
                    {
                      v310 = v214;
LABEL_330:
                      sub_14196B2DB(v216, v310);
                    }
                    v310 = v217;
                    sub_1419234B0(v217, v215, v214);
                    v299 = v214;
                    if ( v313 != 11 )
                    {
LABEL_248:
                      sub_1408AFFD0(&v317, v310, v214);
                      goto LABEL_249;
                    }
LABEL_247:
                    if ( **((_QWORD **)&v328 + 1) ^ 0x61705F796C707061LL
                       | *(_QWORD *)(*((_QWORD *)&v328 + 1) + 3LL) ^ 0x68637461705F796CLL )
                    {
                      goto LABEL_248;
                    }
                    sub_1408AFA90((unsigned int)&v317, DWORD2(v328), 11, v310, v214);
LABEL_249:
                    v345.m128i_i64[0] = 0;
                    v346 = 0;
                    nullsub_1(v219, v218);
                    v220 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v220 )
                      sub_14196B2DB(1, 4);
                    *v220 = 1701869940;
                    v320.m128i_i64[0] = 4;
                    v320.m128i_i64[1] = (__int64)v220;
                    v321.m128i_i64[0] = 4;
                    nullsub_1(v222, v221);
                    v223 = (void *)sub_140001650(13, 1);
                    v311 = (__int64)v223;
                    if ( !v223 )
                      sub_14196B2DB(1, 13);
                    qmemcpy(v223, "function_call", 13);
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = 13;
                    v330.m256i_i64[2] = (__int64)v223;
                    v330.m256i_i64[3] = 13;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    nullsub_1(v225, v224);
                    v226 = (_WORD *)sub_140001650(2, 1);
                    if ( !v226 )
                      sub_14196B2DB(1, 2);
                    *v226 = 25705;
                    v320.m128i_i64[0] = 2;
                    v311 = (__int64)v226;
                    v320.m128i_i64[1] = (__int64)v226;
                    v321.m128i_i64[0] = 2;
                    sub_141597890(&v330);
                    v290 = _mm_loadu_si128((const __m128i *)&v330);
                    v351.m256i_i64[0] = (__int64)&v290;
                    v351.m256i_i64[1] = (__int64)sub_1402230B0;
                    sub_1416DAFA0(&v330, &unk_141A53DD0, &v351);
                    v189 += 32;
                    v228 = v330.m256i_i64[2];
                    v300 = v330.m256i_i64[1];
                    v311 = v330.m256i_i64[0];
                    if ( v330.m256i_i64[2] < 0 )
                    {
                      v229 = 0;
LABEL_328:
                      v343 = 1;
                      sub_14196B2DB(v229, v228);
                    }
                    if ( v330.m256i_i64[2] )
                    {
                      nullsub_1(v330.m256i_i64[1], v227);
                      v229 = 1;
                      v230 = sub_140001650(v228, 1);
                      if ( !v230 )
                        goto LABEL_328;
                      v231 = v230;
                      sub_1419234B0(v230, v300, v228);
                    }
                    else
                    {
                      v231 = 1;
                    }
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = v228;
                    v330.m256i_i64[2] = v231;
                    v330.m256i_i64[3] = v228;
                    v343 = 0;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    v233 = v311;
                    if ( v311 )
                      sub_140001660(v300, v311, 1);
                    nullsub_1(v232, v233);
                    v234 = (_DWORD *)sub_140001650(7, 1);
                    v237 = (__int64)v319;
                    if ( !v234 )
                      sub_14196B2DB(1, 7);
                    *(_DWORD *)((char *)v234 + 3) = 1684627308;
                    *v234 = 1819042147;
                    v320.m128i_i64[0] = 7;
                    v320.m128i_i64[1] = (__int64)v234;
                    v321.m128i_i64[0] = 7;
                    v238 = 1;
                    if ( !v199 )
                    {
                      nullsub_1(v236, v235);
                      v239 = sub_140001650(v237, 1);
                      if ( !v239 )
                      {
                        v342 = 1;
                        sub_14196B2DB(1, v237);
                      }
                      v238 = v239;
                      sub_1419234B0(v239, v328, v237);
                    }
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = v237;
                    v330.m256i_i64[2] = v238;
                    v330.m256i_i64[3] = v237;
                    v342 = 0;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    nullsub_1(v241, v240);
                    v242 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v242 )
                      sub_14196B2DB(1, 4);
                    *v242 = 1701667182;
                    v320.m128i_i64[0] = 4;
                    v320.m128i_i64[1] = (__int64)v242;
                    v321.m128i_i64[0] = 4;
                    v245 = 1;
                    v246 = v313;
                    if ( !(_BYTE)v312 )
                    {
                      nullsub_1(v244, v243);
                      v247 = sub_140001650(v246, 1);
                      if ( !v247 )
                      {
                        v341 = 1;
                        sub_14196B2DB(1, v246);
                      }
                      v245 = v247;
                      sub_1419234B0(v247, *((_QWORD *)&v328 + 1), v246);
                    }
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = v246;
                    v330.m256i_i64[2] = v245;
                    v330.m256i_i64[3] = v246;
                    v341 = 0;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    nullsub_1(v249, v248);
                    v250 = sub_140001650(9, 1);
                    if ( !v250 )
                      sub_14196B2DB(1, 9);
                    *(_QWORD *)v250 = 0x746E656D75677261LL;
                    *(_BYTE *)(v250 + 8) = 115;
                    v320.m128i_i64[0] = 9;
                    v320.m128i_i64[1] = v250;
                    v321.m128i_i64[0] = 9;
                    v252 = v318;
                    if ( v318 < 0 )
                    {
                      v254 = 0;
LABEL_336:
                      v340 = 1;
                      sub_14196B2DB(v254, v252);
                    }
                    v253 = v317.m128i_i64[1];
                    if ( v318 )
                    {
                      nullsub_1(0x746E656D75677261LL, v251);
                      v254 = 1;
                      v255 = sub_140001650(v252, 1);
                      if ( !v255 )
                        goto LABEL_336;
                      v3 = v255;
                      sub_1419234B0(v255, v253, v252);
                    }
                    else
                    {
                      v3 = 1;
                    }
                    v311 = v253;
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = v252;
                    v330.m256i_i64[2] = v3;
                    v330.m256i_i64[3] = v252;
                    v340 = 0;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    LOBYTE(v3) = v324;
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    nullsub_1(v257, v256);
                    v258 = sub_140001650(6, 1);
                    if ( !v258 )
                      sub_14196B2DB(1, 6);
                    *(_WORD *)(v258 + 4) = 29557;
                    *(_DWORD *)v258 = 1952543859;
                    v320.m128i_i64[0] = 6;
                    v320.m128i_i64[1] = v258;
                    v321.m128i_i64[0] = 6;
                    nullsub_1(v260, v259);
                    v261 = sub_140001650(9, 1);
                    v312 = v261;
                    if ( !v261 )
                      sub_14196B2DB(1, 9);
                    *(_QWORD *)v261 = 0x6574656C706D6F63LL;
                    *(_BYTE *)(v261 + 8) = 100;
                    v330.m256i_i8[0] = 3;
                    v330.m256i_i64[1] = 9;
                    v330.m256i_i64[2] = v261;
                    v330.m256i_i64[3] = 9;
                    sub_140A68320(&v351, &v345, &v320, &v330);
                    if ( v351.m256i_i8[0] != -1 )
                      sub_140032FF0(&v351);
                    v325.m256i_i64[3] = v346;
                    *(__m128i *)&v325.m256i_u64[1] = _mm_loadu_si128(&v345);
                    v325.m256i_i8[0] = 5;
                    if ( v291 )
                    {
                      v361 = 1;
                      v262 = sub_1406CECD0(v293, v294);
                      _RAX = v262 >> 57;
                      v264 = _mm_cvtsi32_si128(v262 >> 57);
                      v265 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v264, v264), 0), 68);
                      for ( i = 0; ; i += 16 )
                      {
                        v267 = v307 & v262;
                        v268 = v305;
                        v269 = _mm_loadu_si128((const __m128i *)((char *)v305 + v267));
                        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v269, v265));
                        if ( _R15D )
                          break;
LABEL_294:
                        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v269, (__m128i)-1LL));
                        if ( (_DWORD)_RAX )
                          goto LABEL_307;
                        v262 = i + v267 + 16;
                      }
                      while ( 1 )
                      {
                        __asm { tzcnt   eax, r15d }
                        v271 = v313;
                        if ( v313 == *(_QWORD *)&v268[-24 * (v307 & (v267 + _RAX)) - 16] )
                        {
                          v272 = &v268[-24 * (v307 & (v267 + _RAX))];
                          v273 = sub_141923B40(*((_QWORD *)&v328 + 1), *((_QWORD *)v272 - 5), v313);
                          v268 = v305;
                          if ( !v273 )
                            break;
                        }
                        _RAX = (unsigned int)(_R15D - 1);
                        LOWORD(_RAX) = _R15D & (_R15D - 1);
                        _R15D = _RAX;
                        LOBYTE(v3) = v324;
                        if ( !(_WORD)_RAX )
                          goto LABEL_294;
                      }
                      v274 = *((_QWORD *)v272 - 1);
                      v275 = v274 - v271;
                      if ( v274 >= v271 )
                      {
                        v276 = *((_QWORD *)v272 - 2);
                        if ( !(unsigned int)sub_141923B40(*((_QWORD *)&v328 + 1), v276 + v275, v271) )
                        {
                          if ( v275 < 0 )
                          {
                            v279 = 0;
LABEL_340:
                            v361 = 1;
                            sub_14196B2DB(v279, v308);
                          }
                          if ( v275 )
                          {
                            nullsub_1(v278, v277);
                            v279 = 1;
                            v308 = sub_140001650(v275, 1);
                            if ( !v308 )
                            {
                              v308 = v274 - v271;
                              goto LABEL_340;
                            }
                          }
                          else
                          {
                            v308 = 1;
                          }
                          if ( v274 != v313 )
                            sub_1419234B0(v308, v276, v275);
                          v330.m256i_i64[1] = v274 - v271;
                          v330.m256i_i64[2] = v308;
                          v330.m256i_i64[3] = v274 - v271;
                          v330.m256i_i8[0] = 3;
                          v339 = 1;
                          v312 = sub_1416725D0(aNamespace, 9, &v325);
                          sub_140032FF0(v312);
                          v280 = _mm_loadu_si128((const __m128i *)&v330);
                          v281 = (_OWORD *)v312;
                          *(_OWORD *)(v312 + 16) = *(_OWORD *)&v330.m256i_u64[2];
                          *v281 = v280;
                        }
                      }
                      LOBYTE(v3) = v324;
                    }
LABEL_307:
                    *(__m128i *)&v330.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v325.m256i_u64[2]);
                    v330.m256i_i8[0] = v325.m256i_i8[0];
                    *(__int64 *)((char *)v330.m256i_i64 + 1) = *(__int64 *)((char *)v325.m256i_i64 + 1);
                    *(__int32 *)((char *)&v330.m256i_i32[2] + 1) = *(__int32 *)((char *)&v325.m256i_i32[2] + 1);
                    *(__int16 *)((char *)&v330.m256i_i16[6] + 1) = *(__int16 *)((char *)&v325.m256i_i16[6] + 1);
                    v330.m256i_i8[15] = v325.m256i_i8[15];
                    v282 = v316;
                    v190 = v292;
                    if ( v316 == v314 )
                      sub_1419397B0(&v314);
                    v283 = v315;
                    v284 = 32 * v282;
                    si128 = _mm_load_si128((const __m128i *)&v330);
                    *(_OWORD *)(v315 + v284 + 16) = *(_OWORD *)&v330.m256i_u64[2];
                    *(__m128i *)(v283 + v284) = si128;
                    v316 = v282 + 1;
                    if ( v317.m128i_i64[0] )
                      sub_140001660(v311, v317.m128i_i64[0], 1);
                    if ( v299 )
                      sub_140001660(v310, v299, 1);
                    if ( v313 )
                      sub_140001660(*((_QWORD *)&v328 + 1), v313, 1);
                    sub_140032FF0(&v322);
                    v16 = v348;
                    if ( v319 )
                      sub_140001660(v328, v319, 1);
                  }
                  v195 = &unk_141A53B24;
LABEL_215:
                  v196 = v348;
                  goto LABEL_216;
                }
                goto LABEL_322;
              }
LABEL_321:
              v16 = v348;
LABEL_322:
              v15 = v347;
              goto LABEL_23;
            }
            v318 = v330.m256i_i64[2];
            v317 = _mm_loadu_si128((const __m128i *)&v330);
            if ( v330.m256i_i64[3] )
              sub_140001660(v331, v330.m256i_i64[3], 1);
            v76 = v317.m128i_i64[0];
            if ( v317.m128i_i64[0] == -1 )
              goto LABEL_156;
          }
          v77 = v317.m128i_i64[1];
          v78 = v318;
          if ( v318 )
          {
            v319 = (_BYTE *)v317.m128i_i64[1];
            v313 = v76;
            v345.m128i_i64[0] = 0;
            v346 = 0;
            nullsub_1(v317.m128i_i64[1], v76);
            v79 = (_DWORD *)sub_140001650(4, 1);
            if ( !v79 )
              sub_14196B2DB(1, 4);
            *v79 = 1701869940;
            v325.m256i_i64[0] = 4;
            v325.m256i_i64[1] = (__int64)v79;
            v325.m256i_i64[2] = 4;
            nullsub_1(v81, v80);
            v82 = sub_140001650(9, 1);
            *(_QWORD *)&v328 = v82;
            if ( !v82 )
              sub_14196B2DB(1, 9);
            *(_QWORD *)v82 = 0x6E696E6F73616572LL;
            *(_BYTE *)(v82 + 8) = 103;
            v330.m256i_i8[0] = 3;
            v330.m256i_i64[1] = 9;
            v330.m256i_i64[2] = v82;
            v330.m256i_i64[3] = 9;
            sub_140A68320(&v351, &v345, &v325, &v330);
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            nullsub_1(v84, v83);
            v85 = (_WORD *)sub_140001650(2, 1);
            if ( !v85 )
              sub_14196B2DB(1, 2);
            *v85 = 25705;
            v325.m256i_i64[0] = 2;
            v305 = v85;
            v325.m256i_i64[1] = (__int64)v85;
            v325.m256i_i64[2] = 2;
            sub_141597890(&v330);
            v322 = _mm_loadu_si128((const __m128i *)&v330);
            v351.m256i_i64[0] = 0;
            *(_OWORD *)&v351.m256i_u64[1] = 1u;
            v330.m256i_i64[2] = 1610612768;
            v330.m256i_i64[0] = (__int64)&v351;
            v330.m256i_i64[1] = (__int64)&off_141A55F58;
            if ( (unsigned __int8)sub_141598A30(&v322, &v330) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_4,
                55,
                (unsigned int)&v309,
                (unsigned int)&unk_141A52978,
                (__int64)&off_141A56010);
            v328 = *(_OWORD *)v351.m256i_i8;
            if ( v351.m256i_i64[2] <= 0xCuLL )
            {
              if ( v351.m256i_i64[2] != 12 )
LABEL_84:
                sub_14196B4F0(v351.m256i_i32[2], v351.m256i_i32[4], 0, 12, (__int64)&off_141A53D80);
            }
            else if ( *(char *)(v351.m256i_i64[1] + 12) <= -65 )
            {
              goto LABEL_84;
            }
            v320.m128i_i64[0] = v351.m256i_i64[1];
            v320.m128i_i64[1] = 12;
            v351.m256i_i64[0] = (__int64)&v320;
            v351.m256i_i64[1] = (__int64)sub_140191200;
            sub_1416DAFA0(&v330, &unk_141A53D98, &v351);
            v103 = v328;
            if ( (_QWORD)v328 )
              sub_140001660(*((_QWORD *)&v328 + 1), v328, 1);
            v104 = v330.m256i_i64[2];
            v328 = *(_OWORD *)v330.m256i_i8;
            if ( v330.m256i_i64[2] < 0 )
            {
              v105 = 0;
              goto LABEL_125;
            }
            if ( v330.m256i_i64[2] )
            {
              v106 = v75;
              nullsub_1(v330.m256i_i64[1], v103);
              v105 = 1;
              v107 = sub_140001650(v104, 1);
              if ( !v107 )
              {
LABEL_125:
                v344 = 1;
                sub_14196B2DB(v105, v104);
              }
              v3 = v107;
              sub_1419234B0(v107, *((_QWORD *)&v328 + 1), v104);
              v75 = v106;
            }
            else
            {
              v3 = 1;
            }
            v330.m256i_i8[0] = 3;
            v330.m256i_i64[1] = v104;
            v330.m256i_i64[2] = v3;
            v330.m256i_i64[3] = v104;
            v344 = 0;
            sub_140A68320(&v351, &v345, &v325, &v330);
            LOBYTE(v3) = v324;
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            v109 = v328;
            if ( (_QWORD)v328 )
              sub_140001660(*((_QWORD *)&v328 + 1), v328, 1);
            nullsub_1(v108, v109);
            v110 = sub_140001650(6, 1);
            if ( !v110 )
              sub_14196B2DB(1, 6);
            *(_WORD *)(v110 + 4) = 29557;
            *(_DWORD *)v110 = 1952543859;
            v325.m256i_i64[0] = 6;
            v325.m256i_i64[1] = v110;
            v325.m256i_i64[2] = 6;
            nullsub_1(v112, v111);
            v113 = sub_140001650(9, 1);
            *(_QWORD *)&v328 = v113;
            if ( !v113 )
              sub_14196B2DB(1, 9);
            *(_QWORD *)v113 = 0x6574656C706D6F63LL;
            *(_BYTE *)(v113 + 8) = 100;
            v330.m256i_i8[0] = 3;
            v330.m256i_i64[1] = 9;
            v330.m256i_i64[2] = v113;
            v330.m256i_i64[3] = 9;
            sub_140A68320(&v351, &v345, &v325, &v330);
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            nullsub_1(v115, v114);
            v116 = (_DWORD *)sub_140001650(7, 1);
            if ( !v116 )
              sub_14196B2DB(1, 7);
            *(_DWORD *)((char *)v116 + 3) = 2037539181;
            *v116 = 1835890035;
            v320.m128i_i64[0] = 7;
            v320.m128i_i64[1] = (__int64)v116;
            v321.m128i_i64[0] = 7;
            nullsub_1(v118, v117);
            v119 = sub_140001650(32, 8);
            if ( !v119 )
            {
              v350 = 1;
              sub_14196B2C1(8, 32);
            }
            v122 = v119;
            v322.m128i_i64[0] = 0;
            v323.m128i_i64[0] = 0;
            nullsub_1(v121, v120);
            v123 = (_DWORD *)sub_140001650(4, 1);
            *(_QWORD *)&v328 = v122;
            if ( !v123 )
              sub_14196B2DB(1, 4);
            *v123 = 1701869940;
            v325.m256i_i64[0] = 4;
            v325.m256i_i64[1] = (__int64)v123;
            v325.m256i_i64[2] = 4;
            nullsub_1(v125, v124);
            v126 = (void *)sub_140001650(12, 1);
            *((_QWORD *)&v328 + 1) = v126;
            if ( !v126 )
              sub_14196B2DB(1, 12);
            qmemcpy(v126, "summary_text", 12);
            v330.m256i_i8[0] = 3;
            v330.m256i_i64[1] = 12;
            v330.m256i_i64[2] = (__int64)v126;
            v330.m256i_i64[3] = 12;
            sub_140A68320(&v351, &v322, &v325, &v330);
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            nullsub_1(v128, v127);
            v129 = (_DWORD *)sub_140001650(4, 1);
            if ( !v129 )
              sub_14196B2DB(1, 4);
            *v129 = 1954047348;
            v325.m256i_i64[0] = 4;
            v325.m256i_i64[1] = (__int64)v129;
            v325.m256i_i64[2] = 4;
            nullsub_1(v131, v130);
            v132 = sub_140001650(v78, 1);
            *((_QWORD *)&v328 + 1) = v132;
            if ( !v132 )
              sub_14196B2DB(1, v78);
            v133 = v132;
            sub_1419234B0(v132, v319, v78);
            v330.m256i_i8[0] = 3;
            v330.m256i_i64[1] = v78;
            v330.m256i_i64[2] = v133;
            v330.m256i_i64[3] = v78;
            sub_140A68320(&v351, &v322, &v325, &v330);
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            *(__m128i *)((char *)&v330.m256i_u32[1] + 3) = v322;
            *(__int64 *)((char *)&v330.m256i_i64[2] + 7) = v323.m128i_i64[0];
            v134 = v328;
            *(_BYTE *)v328 = 5;
            v135 = _mm_loadu_si128((const __m128i *)&v330);
            *(_OWORD *)(v134 + 16) = *(_OWORD *)((char *)&v330.m256i_u64[1] + 7);
            *(__m128i *)(v134 + 1) = v135;
            v330.m256i_i64[1] = 1;
            v330.m256i_i64[2] = v134;
            v330.m256i_i64[3] = 1;
            v330.m256i_i8[0] = 4;
            v350 = 0;
            sub_140A68320(&v351, &v345, &v320, &v330);
            if ( v351.m256i_i8[0] != -1 )
              sub_140032FF0(&v351);
            v136 = v75;
            *(__m128i *)&v330.m256i_u64[1] = _mm_loadu_si128(&v345);
            v330.m256i_i64[3] = v346;
            v330.m256i_i8[0] = 5;
            v137 = v316;
            if ( v316 == v314 )
              sub_1419397B0(&v314);
            v138 = v315;
            v139 = 32 * v137;
            v140 = _mm_loadu_si128((const __m128i *)&v330);
            *(_OWORD *)(v315 + v139 + 16) = *(_OWORD *)&v330.m256i_u64[2];
            *(__m128i *)(v138 + v139) = v140;
            v316 = v137 + 1;
            v75 = v136;
            v76 = v313;
            v77 = (__int64)v319;
          }
          if ( v76 )
            goto LABEL_155;
          goto LABEL_156;
        }
      }
    }
  }
LABEL_23:
  v330.m256i_i64[0] = 0;
  v330.m256i_i64[2] = 0;
  v331 = 0;
  v332 = 0;
  v333 = 0;
  v347 = v15;
  v327 = v15;
  v348 = v16;
  v329 = v16;
  v22 = sub_1416724D0(aUsage_0, 5, a2);
  if ( v22 )
  {
    v327 = v347;
    v329 = v348;
    sub_1407BD0F0(&v330, v22);
  }
  v327 = v347;
  v329 = v348;
  sub_1407BC940(&v325, &v330);
  v351.m256i_i8[0] = 0;
  if ( v325.m256i_i8[0] == -1 )
  {
    v321 = _mm_loadu_si128((const __m128i *)&v351.m256i_u64[2]);
    v320 = *(__m128i *)v351.m256i_i8;
  }
  else
  {
    v23 = _mm_loadu_si128((const __m128i *)&v325);
    v321 = *(__m128i *)&v325.m256i_u64[2];
    v320 = v23;
    v327 = v347;
    v329 = v348;
    sub_140032FF0(&v351);
  }
  sub_1406259E0(&v351, a2);
  if ( v351.m256i_i64[0] == -1 )
  {
    v27 = 0;
    if ( v348 != -1 )
      v27 = v347;
    sub_140625740(&v325, v27);
  }
  else
  {
    v326 = v352;
    v26 = _mm_loadu_si128((const __m128i *)&v351);
    *(_OWORD *)&v325.m256i_u64[2] = *(_OWORD *)&v351.m256i_u64[2];
    *(__m128i *)v325.m256i_i8 = v26;
  }
  if ( !__OFSUB__(0, v325.m256i_i64[0]) )
  {
    v28 = v315;
    v29 = v315 + 32 * v316;
    if ( v315 != v29 )
    {
      do
      {
        nullsub_1(v25, v24);
        v30 = (void *)sub_140001650(10, 1);
        if ( !v30 )
          sub_14196B2DB(1, 10);
        qmemcpy(v30, "incomplete", 10);
        v351.m256i_i8[0] = 3;
        v351.m256i_i64[1] = 10;
        v351.m256i_i64[2] = (__int64)v30;
        v351.m256i_i64[3] = 10;
        v338 = 1;
        v324 = sub_1416725D0(&aOutputstatus[7], 6, v28);
        sub_140032FF0(v324);
        v28 += 32;
        v31 = _mm_loadu_si128((const __m128i *)&v351);
        v32 = (_OWORD *)v324;
        *(_OWORD *)(v324 + 16) = *(_OWORD *)&v351.m256i_u64[2];
        *v32 = v31;
      }
      while ( v28 != v29 );
    }
  }
  v317.m128i_i64[0] = 0;
  v318 = 0;
  nullsub_1(v25, v24);
  v33 = (_WORD *)sub_140001650(2, 1);
  if ( !v33 )
    sub_14196B2DB(1, 2);
  *v33 = 25705;
  v345.m128i_i64[0] = 2;
  v345.m128i_i64[1] = (__int64)v33;
  v346 = 2;
  v36 = v297;
  if ( v297 < 0 )
  {
    v37 = 0;
    goto LABEL_40;
  }
  if ( v297 )
  {
    v38 = v296;
    nullsub_1(v35, v34);
    v37 = 1;
    v39 = sub_140001650(v36, 1);
    if ( !v39 )
    {
LABEL_40:
      v337 = 1;
      sub_14196B2DB(v37, v36);
    }
    v40 = v39;
    sub_1419234B0(v39, v38, v36);
  }
  else
  {
    v40 = 1;
  }
  v351.m256i_i8[0] = 3;
  v351.m256i_i64[1] = v36;
  v351.m256i_i64[2] = v40;
  v351.m256i_i64[3] = v36;
  v337 = 0;
  sub_140A68320(&v322, &v317, &v345, &v351);
  if ( v322.m128i_i8[0] != -1 )
    sub_140032FF0(&v322);
  nullsub_1(v42, v41);
  v43 = sub_140001650(6, 1);
  if ( !v43 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v43 + 4) = 29795;
  *(_DWORD *)v43 = 1701470831;
  v345.m128i_i64[0] = 6;
  v345.m128i_i64[1] = v43;
  v346 = 6;
  nullsub_1(v45, v44);
  v46 = (_QWORD *)sub_140001650(8, 1);
  v324 = (__int64)v46;
  if ( !v46 )
    sub_14196B2DB(1, 8);
  *v46 = 0x65736E6F70736572LL;
  v351.m256i_i8[0] = 3;
  v351.m256i_i64[1] = 8;
  v351.m256i_i64[2] = (__int64)v46;
  v351.m256i_i64[3] = 8;
  sub_140A68320(&v322, &v317, &v345, &v351);
  if ( v322.m128i_i8[0] != -1 )
    sub_140032FF0(&v322);
  nullsub_1(v48, v47);
  v49 = (void *)sub_140001650(10, 1);
  if ( !v49 )
    sub_14196B2DB(1, 10);
  qmemcpy(v49, "created_at", 10);
  v345.m128i_i64[0] = 10;
  v345.m128i_i64[1] = (__int64)v49;
  v346 = 10;
  v336 = 1;
  sub_1414331D0(v294);
  v50 = (SLODWORD(v294[0]) >> 13) - 1;
  v51 = 0;
  if ( SLODWORD(v294[0]) >> 13 <= 0 )
  {
    v52 = (1 - (SLODWORD(v294[0]) >> 13)) / 0x190u + 1;
    v50 += 400 * v52;
    v51 = -146097 * v52;
  }
  v351.m256i_i8[0] = 2;
  v351.m256i_i64[1] = ((unsigned __int64)HIDWORD(v294[0])
                     + 86400LL
                     * (((v50 / 100) >> 2)
                      + ((1461 * v50) >> 2)
                      + v51
                      + ((LODWORD(v294[0]) >> 4) & 0x1FF)
                      - v50 / 100
                      - 719163)) >> 63;
  v351.m256i_i64[2] = HIDWORD(v294[0])
                    + 86400LL
                    * (((v50 / 100) >> 2)
                     + ((1461 * v50) >> 2)
                     + v51
                     + ((LODWORD(v294[0]) >> 4) & 0x1FF)
                     - v50 / 100
                     - 719163);
  v336 = 0;
  sub_140A68320(&v322, &v317, &v345, &v351);
  if ( v322.m128i_i8[0] != -1 )
    sub_140032FF0(&v322);
  nullsub_1(v54, v53);
  v55 = 1;
  v56 = sub_140001650(5, 1);
  if ( !v56 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v56 + 4) = 108;
  *(_DWORD *)v56 = 1701080941;
  v345.m128i_i64[0] = 5;
  v345.m128i_i64[1] = v56;
  v346 = 5;
  if ( !(_BYTE)v3 )
  {
    nullsub_1(v58, v57);
    v59 = v306;
    v60 = sub_140001650(v306, 1);
    if ( !v60 )
    {
      v335 = 1;
      sub_14196B2DB(1, v59);
    }
    v55 = v60;
    sub_1419234B0(v60, v304, v59);
  }
  v351.m256i_i8[0] = 3;
  v351.m256i_i64[1] = v306;
  v351.m256i_i64[2] = v55;
  v351.m256i_i64[3] = v306;
  v335 = 0;
  sub_140A68320(&v322, &v317, &v345, &v351);
  if ( v322.m128i_i8[0] != -1 )
    sub_140032FF0(&v322);
  nullsub_1(v62, v61);
  v63 = sub_140001650(6, 1);
  if ( !v63 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v63 + 4) = 29813;
  *(_DWORD *)v63 = 1886680431;
  v345.m128i_i64[0] = 6;
  v345.m128i_i64[1] = v63;
  v346 = 6;
  v354 = 1;
  sub_1407B3D00(&v351, &v314);
  if ( v351.m256i_i8[0] == -1 )
  {
    v322.m128i_i64[0] = v351.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v322,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A53DE0);
  }
  v64 = _mm_loadu_si128((const __m128i *)&v351);
  v323 = *(__m128i *)&v351.m256i_u64[2];
  v322 = v64;
  v354 = 0;
  sub_140A68320(&v351, &v317, &v345, &v322);
  if ( v351.m256i_i8[0] != -1 )
    sub_140032FF0(&v351);
  nullsub_1(v66, v65);
  v67 = (void *)sub_140001650(11, 1);
  if ( !v67 )
    sub_14196B2DB(1, 11);
  qmemcpy(v67, "output_text", 11);
  v345.m128i_i64[0] = 11;
  v345.m128i_i64[1] = (__int64)v67;
  v346 = 11;
  v69 = v303;
  if ( v303 < 0 )
  {
    v70 = 0;
    goto LABEL_69;
  }
  if ( v303 )
  {
    v71 = v302;
    nullsub_1(0x745F74757074756FLL, v68);
    v70 = 1;
    v72 = sub_140001650(v69, 1);
    if ( !v72 )
    {
LABEL_69:
      v334 = 1;
      sub_14196B2DB(v70, v69);
    }
    v73 = v72;
    sub_1419234B0(v72, v71, v69);
  }
  else
  {
    v73 = 1;
  }
  v351.m256i_i8[0] = 3;
  v351.m256i_i64[1] = v69;
  v351.m256i_i64[2] = v73;
  v351.m256i_i64[3] = v69;
  v334 = 0;
  sub_140A68320(&v322, &v317, &v345, &v351);
  if ( v322.m128i_i8[0] != -1 )
    sub_140032FF0(&v322);
  nullsub_1(v87, v86);
  v88 = sub_140001650(5, 1);
  if ( !v88 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v88 + 4) = 101;
  *(_DWORD *)v88 = 1734439797;
  v345.m128i_i64[0] = 5;
  v345.m128i_i64[1] = v88;
  v346 = 5;
  v353 = 1;
  sub_140B73E90(&v351, &v320);
  if ( v351.m256i_i8[0] == -1 )
  {
    v322.m128i_i64[0] = v351.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v322,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A53DE0);
  }
  v89 = _mm_loadu_si128((const __m128i *)&v351);
  v323 = *(__m128i *)&v351.m256i_u64[2];
  v322 = v89;
  v353 = 0;
  sub_140A68320(&v351, &v317, &v345, &v322);
  if ( v351.m256i_i8[0] != -1 )
    sub_140032FF0(&v351);
  *(__m128i *)&v351.m256i_u64[1] = _mm_loadu_si128(&v317);
  v351.m256i_i64[3] = v318;
  v351.m256i_i8[0] = 5;
  sub_140625D70(&v325, &v351);
  v90 = _mm_loadu_si128((const __m128i *)&v351);
  v91 = v298;
  v298[1] = *(__m128i *)&v351.m256i_u64[2];
  *v91 = v90;
  if ( v325.m256i_i64[0] >= (__int64)0x8000000000000002uLL && v325.m256i_i64[0] )
    sub_140001660(v325.m256i_i64[1], v325.m256i_i64[0], 1);
  v327 = v347;
  v329 = v348;
  sub_140032FF0(&v320);
  if ( v348 > 0 )
    sub_140001660(v347, v348, 1);
  if ( v301 )
    sub_140001660(v302, v301, 1);
  v92 = v315;
  v348 = v316;
  v324 = 0;
  v347 = v315;
  while ( v348 != v324 )
  {
    ++v324;
    v93 = v92 + 32;
    sub_1401AB4D0();
    v92 = v93;
  }
  if ( v314 )
    sub_140001660(v315, 32 * v314, 8);
  if ( v306 )
    sub_140001660(v304, v306, 1);
  if ( v295 )
    sub_140001660(v296, v295, 1);
  return v298;
}
