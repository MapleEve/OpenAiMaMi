// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a40370 | successor of pre-update 0x140e28df0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_140A40370(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rax
  const __m128i *v5; // rcx
  __int64 v6; // rdx
  __int16 v7; // r8
  __int64 v8; // r9
  __m128i si128; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  const __m128i *v17; // r14
  __m128i v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r12
  _WORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  _DWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 v92; // rbx
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rbx
  __int64 v105; // rsi
  _QWORD *v106; // rcx
  __int64 v107; // r12
  _DWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  void *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  void *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  _DWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rsi
  __int64 v121; // rbx
  __int64 v122; // r14
  __int64 v123; // rax
  __int64 v124; // r12
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rbx
  __int64 v133; // r12
  _QWORD *v134; // rcx
  __int64 v135; // rsi
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // rcx
  _DWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  _OWORD *v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  _WORD *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r12
  __int64 v149; // r14
  __int64 v150; // r13
  __int64 v151; // rax
  __int64 v152; // rbx
  __int64 v153; // r12
  __int64 v154; // r15
  _QWORD *v155; // rcx
  __int64 v156; // rbx
  _DWORD *v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // rcx
  _DWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  void *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  _WORD *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r15
  __int64 v170; // rbx
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // r12
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  void *v179; // rax
  __int64 v180; // rdx
  _OWORD *v181; // rax
  __int128 v182; // xmm0
  _OWORD *v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int128 v186; // kr30_16
  __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // r15
  void *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int128 v193; // xmm0
  _OWORD *v194; // rax
  __int64 v195; // rsi
  __int64 v196; // r15
  __int64 v197; // r14
  __int64 v198; // rax
  __int64 v199; // rbx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  _DWORD *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r12
  __int64 v212; // r14
  __int64 v213; // r13
  __int64 v214; // rax
  __int64 v215; // rbx
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  _DWORD *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r15
  __int64 v228; // rbx
  __int64 v229; // r14
  __int64 v230; // rax
  __int64 v231; // r12
  __int64 v232; // rdx
  __int64 v233; // rcx
  _DWORD *v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r12
  __int64 v238; // r14
  __int64 v239; // r13
  __int64 v240; // rax
  __int64 v241; // rbx
  __int128 v242; // xmm0
  _OWORD *v243; // rax
  __int128 v244; // xmm0
  _OWORD *v245; // rax
  __int64 v246; // rsi
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rbx
  const __m128i *v250; // rdx
  __int64 v251; // rdx
  __int64 v252; // rcx
  _DWORD *v253; // rax
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r15
  __int64 v257; // rbx
  __int64 v258; // r14
  __int64 v259; // rax
  __int64 v260; // r12
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rbx
  __int64 v268; // rdx
  _DWORD *v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rcx
  void *v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  void *v275; // rax
  __int64 v276; // rdx
  __int64 v277; // rcx
  _DWORD *v278; // rax
  __int64 v279; // rbx
  __int64 v280; // r15
  _QWORD *v281; // rcx
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // rax
  __int64 v291; // rbx
  __int64 v292; // rdx
  __int64 *v293; // rcx
  unsigned __int64 v294; // rsi
  __int64 v296; // rbx
  __m128i v297; // xmm0
  __m128i v298; // xmm7
  unsigned __int64 v299; // r8
  __int64 v300; // r14
  _DWORD *i; // r9
  unsigned __int64 v302; // rsi
  __m128i v303; // xmm8
  __int64 v305; // r13
  unsigned __int64 v306; // r15
  int v307; // eax
  unsigned __int64 v308; // rbx
  __int64 v309; // rsi
  __int64 v310; // r12
  __int64 v311; // rax
  __int64 v312; // rbx
  __m128i v313; // xmm0
  _OWORD *v314; // rax
  _DWORD *v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // rax
  __int64 v319; // rdx
  __int64 v320; // rcx
  void *v321; // rax
  __int64 v322; // rdx
  __int64 v323; // rcx
  _DWORD *v324; // rax
  __m128i v325; // xmm0
  __int64 v326; // rsi
  __int64 v327; // r14
  _QWORD *v328; // rcx
  _DWORD *v329; // rbx
  __m128i v330; // xmm0
  __int64 v331; // rsi
  __int64 v332; // rax
  __int64 v333; // rcx
  __int64 v334; // rcx
  __int64 v336; // [rsp+30h] [rbp-50h] BYREF
  __int64 v337; // [rsp+38h] [rbp-48h]
  unsigned __int64 v338; // [rsp+40h] [rbp-40h]
  __int64 v339; // [rsp+48h] [rbp-38h]
  __int64 v340; // [rsp+50h] [rbp-30h] BYREF
  __int64 v341; // [rsp+58h] [rbp-28h]
  __int64 v342; // [rsp+60h] [rbp-20h]
  __int64 v343; // [rsp+68h] [rbp-18h]
  __int64 v344; // [rsp+70h] [rbp-10h]
  __int64 v345; // [rsp+78h] [rbp-8h]
  __int64 v346; // [rsp+80h] [rbp+0h]
  const __m128i *v347; // [rsp+88h] [rbp+8h]
  const __m128i *v348; // [rsp+90h] [rbp+10h] BYREF
  __m128i v349; // [rsp+98h] [rbp+18h] BYREF
  __int128 v350; // [rsp+A8h] [rbp+28h]
  __int128 v351; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v352; // [rsp+C8h] [rbp+48h]
  __int128 v353; // [rsp+D8h] [rbp+58h]
  __int128 v354; // [rsp+E8h] [rbp+68h]
  char v355; // [rsp+FFh] [rbp+7Fh] BYREF
  _DWORD *v356; // [rsp+100h] [rbp+80h]
  _DWORD *v357; // [rsp+108h] [rbp+88h]
  __int128 *v358; // [rsp+110h] [rbp+90h] BYREF
  __m128i v359; // [rsp+118h] [rbp+98h]
  __int64 v360; // [rsp+128h] [rbp+A8h]
  __m256i v361; // [rsp+130h] [rbp+B0h] BYREF
  char v362; // [rsp+157h] [rbp+D7h]
  _QWORD *v363; // [rsp+158h] [rbp+D8h]
  __m256i v364[2]; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v365; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v366; // [rsp+1B8h] [rbp+138h]
  char v367; // [rsp+1C0h] [rbp+140h]
  char v368; // [rsp+1C1h] [rbp+141h]
  char v369; // [rsp+1C2h] [rbp+142h]
  char v370; // [rsp+1C3h] [rbp+143h]
  char v371; // [rsp+1C4h] [rbp+144h]
  char v372; // [rsp+1C5h] [rbp+145h]
  char v373; // [rsp+1C6h] [rbp+146h]
  char v374; // [rsp+1C7h] [rbp+147h]
  char v375; // [rsp+1C8h] [rbp+148h]
  char v376; // [rsp+1C9h] [rbp+149h]
  char v377; // [rsp+1CAh] [rbp+14Ah]
  char v378; // [rsp+1CBh] [rbp+14Bh]
  char v379; // [rsp+1CCh] [rbp+14Ch]
  char v380; // [rsp+1CDh] [rbp+14Dh]
  char v381; // [rsp+1CEh] [rbp+14Eh]
  char v382; // [rsp+1CFh] [rbp+14Fh]
  char v383; // [rsp+1D0h] [rbp+150h]
  char v384; // [rsp+1D1h] [rbp+151h]
  char v385; // [rsp+1D2h] [rbp+152h]
  char v386; // [rsp+1D3h] [rbp+153h]
  char v387; // [rsp+1D4h] [rbp+154h]
  char v388; // [rsp+1D5h] [rbp+155h]
  char v389; // [rsp+1D6h] [rbp+156h]
  char v390; // [rsp+1D7h] [rbp+157h]
  __int64 v391; // [rsp+1D8h] [rbp+158h]
  __m256i v392; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v393; // [rsp+208h] [rbp+188h] BYREF
  __int64 v394; // [rsp+218h] [rbp+198h]
  char v395; // [rsp+227h] [rbp+1A7h]
  __int64 v396; // [rsp+228h] [rbp+1A8h]
  char v397; // [rsp+236h] [rbp+1B6h]
  char v398; // [rsp+237h] [rbp+1B7h]
  __int64 v399; // [rsp+238h] [rbp+1B8h]

  v399 = -2;
  v362 = a3;
  v363 = a2;
  v4 = a1 + 320;
  v5 = *(const __m128i **)(a1 + 320);
  v6 = (__int64)v5->m128i_i64 + *(_QWORD *)(a1 + 328) + 1;
  v7 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(v5));
  v8 = *(_QWORD *)(a1 + 344);
  v352 = *(_OWORD *)(a1 + 336);
  v351 = *(_OWORD *)(a1 + 320);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)&off_14196F5E0;
  si128 = _mm_loadu_si128((const __m128i *)&xmmword_14196F5F0);
  *(__m128i *)(a1 + 336) = si128;
  v348 = v5;
  v349.m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v349.m128i_i64[1] = v6;
  LOWORD(v350) = v7;
  *((_QWORD *)&v350 + 1) = v8;
  *(_QWORD *)&v353 = v4;
  sub_140213A80(&v336, &v348);
  v11 = v337;
  v12 = v338;
  v348 = (const __m128i *)&v355;
  if ( v338 >= 2 )
  {
    if ( v338 >= 0x15 )
    {
      v388 = 1;
      sub_1401B8C00(v337, v338, &v348);
    }
    else
    {
      sub_140CC52B0(v337, v338, 1, &v348);
    }
  }
  v13 = v336;
  v14 = v11 + 104 * v12;
  v15 = v11;
  if ( v11 != v14 )
  {
    while ( 1 )
    {
      v16 = v15 + 104;
      v17 = *(const __m128i **)v15;
      if ( *(_QWORD *)v15 == -1 )
        goto LABEL_310;
      v348 = *(const __m128i **)v15;
      v354 = *(_OWORD *)(v15 + 88);
      v353 = *(_OWORD *)(v15 + 72);
      v18 = _mm_loadu_si128((const __m128i *)(v15 + 8));
      v19 = *(_OWORD *)(v15 + 24);
      v20 = *(_OWORD *)(v15 + 40);
      v352 = *(_OWORD *)(v15 + 56);
      v351 = v20;
      v350 = v19;
      v349 = v18;
      v343 = v11;
      v344 = v13;
      v345 = v14;
      v346 = v15 + 104;
      v347 = v17;
      if ( v362 )
        break;
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(&v349, v10);
      v41 = (_WORD *)sub_140001650(2, 1);
      if ( !v41 )
        sub_14196B2DB(1, 2);
      *v41 = 25705;
      v393.m128i_i64[0] = 2;
      v396 = (__int64)v41;
      v393.m128i_i64[1] = (__int64)v41;
      v394 = 2;
      v44 = v349.m128i_i64[1];
      if ( v349.m128i_i64[1] < 0 )
      {
        v46 = 0;
LABEL_294:
        v387 = 1;
        sub_14196B2DB(v46, v44);
      }
      if ( v349.m128i_i64[1] )
      {
        v45 = v349.m128i_i64[0];
        nullsub_1(v43, v42);
        v46 = 1;
        v47 = sub_140001650(v44, 1);
        if ( !v47 )
          goto LABEL_294;
        v48 = v47;
        sub_1419234B0(v47, v45, v44);
      }
      else
      {
        v48 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v44;
      v392.m256i_i64[2] = v48;
      v392.m256i_i64[3] = v44;
      v387 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v69, v68);
      v70 = (_DWORD *)sub_140001650(7, 1);
      if ( !v70 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v70 + 3) = 1684627308;
      *v70 = 1819042147;
      v393.m128i_i64[0] = 7;
      v396 = (__int64)v70;
      v393.m128i_i64[1] = (__int64)v70;
      v394 = 7;
      v73 = v351;
      if ( (__int64)v351 < 0 )
      {
        v75 = 0;
LABEL_298:
        v386 = 1;
        sub_14196B2DB(v75, v73);
      }
      if ( (_QWORD)v351 )
      {
        v74 = *((_QWORD *)&v350 + 1);
        nullsub_1(v72, v71);
        v75 = 1;
        v76 = sub_140001650(v73, 1);
        if ( !v76 )
          goto LABEL_298;
        v77 = v76;
        sub_1419234B0(v76, v74, v73);
      }
      else
      {
        v77 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v73;
      v392.m256i_i64[2] = v77;
      v392.m256i_i64[3] = v73;
      v386 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v87, v86);
      v88 = (_DWORD *)sub_140001650(4, 1);
      if ( !v88 )
        sub_14196B2DB(1, 4);
      *v88 = 1701667182;
      v393.m128i_i64[0] = 4;
      v393.m128i_i64[1] = (__int64)v88;
      v394 = 4;
      v91 = *((_QWORD *)&v352 + 1);
      v396 = (__int64)v88;
      if ( v352 < 0 )
      {
        v93 = 0;
LABEL_306:
        v385 = 1;
        sub_14196B2DB(v93, v91);
      }
      if ( *((_QWORD *)&v352 + 1) )
      {
        v92 = v352;
        nullsub_1(v90, v89);
        v93 = 1;
        v94 = sub_140001650(v91, 1);
        if ( !v94 )
          goto LABEL_306;
        v95 = v94;
        sub_1419234B0(v94, v92, v91);
      }
      else
      {
        v95 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v91;
      v392.m256i_i64[2] = v95;
      v392.m256i_i64[3] = v91;
      v385 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v175, v174);
      v176 = sub_140001650(6, 1);
      if ( !v176 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v176 + 4) = 29557;
      *(_DWORD *)v176 = 1952543859;
      v393.m128i_i64[0] = 6;
      v391 = v176;
      v393.m128i_i64[1] = v176;
      v394 = 6;
      nullsub_1(v178, v177);
      v179 = (void *)sub_140001650(10, 1);
      v396 = (__int64)v179;
      if ( !v179 )
        sub_14196B2DB(1, 10);
      qmemcpy(v179, "incomplete", 10);
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 10;
      v392.m256i_i64[2] = (__int64)v179;
      v392.m256i_i64[3] = 10;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      v361.m256i_i64[3] = v366;
      *(__m128i *)&v361.m256i_u64[1] = v365;
      v361.m256i_i8[0] = 5;
      if ( BYTE14(v354) )
      {
        nullsub_1(&v361.m256i_u64[1], v180);
        v181 = (_OWORD *)sub_140001650(16, 1);
        if ( !v181 )
        {
          v398 = 1;
          sub_14196B2DB(1, 16);
        }
        *v181 = xmmword_141A6A650;
        v364[0].m256i_i8[0] = 3;
        v364[0].m256i_i64[1] = 16;
        v364[0].m256i_i64[2] = (__int64)v181;
        v364[0].m256i_i64[3] = 16;
        v382 = 1;
        v396 = sub_1416725D0(aType_10, 4, &v361);
        sub_140A192F0(v396);
        v182 = *(_OWORD *)v364[0].m256i_i8;
        v183 = (_OWORD *)v396;
        *(_OWORD *)(v396 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
        *v183 = v182;
        v398 = 1;
        sub_140891C50(&v392, *((_QWORD *)&v353 + 1), v354);
        v186 = *(_OWORD *)&v392.m256i_u64[1];
        v396 = v392.m256i_i64[1];
        if ( v392.m256i_i64[2] < 0 )
        {
          v187 = 0;
LABEL_320:
          sub_14196B2DB(v187, *((_QWORD *)&v186 + 1));
        }
        if ( v392.m256i_i64[2] )
        {
          nullsub_1(v185, v184);
          v187 = 1;
          v188 = sub_140001650(*((_QWORD *)&v186 + 1), 1);
          if ( !v188 )
            goto LABEL_320;
          v189 = v188;
          sub_1419234B0(v188, v186, *((_QWORD *)&v186 + 1));
        }
        else
        {
          v189 = 1;
        }
        v364[0].m256i_i8[0] = 3;
        v364[0].m256i_i64[1] = *((_QWORD *)&v186 + 1);
        v364[0].m256i_i64[2] = v189;
        v364[0].m256i_i64[3] = *((_QWORD *)&v186 + 1);
        v381 = 1;
        v391 = sub_1416725D0(aInput_4, 5, &v361);
        sub_140A192F0(v391);
        v244 = *(_OWORD *)v364[0].m256i_i8;
        v245 = (_OWORD *)v391;
        *(_OWORD *)(v391 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
        *v245 = v244;
        if ( v392.m256i_i64[0] )
          sub_140001660(v396, v392.m256i_i64[0], 1);
      }
      else
      {
        nullsub_1(&v361.m256i_u64[1], v180);
        v190 = (void *)sub_140001650(13, 1);
        if ( !v190 )
        {
          v398 = 1;
          sub_14196B2DB(1, 13);
        }
        qmemcpy(v190, "function_call", 13);
        v364[0].m256i_i8[0] = 3;
        v364[0].m256i_i64[1] = 13;
        v364[0].m256i_i64[2] = (__int64)v190;
        v364[0].m256i_i64[3] = 13;
        v384 = 1;
        v396 = sub_1416725D0(aType_10, 4, &v361);
        sub_140A192F0(v396);
        v193 = *(_OWORD *)v364[0].m256i_i8;
        v194 = (_OWORD *)v396;
        *(_OWORD *)(v396 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
        *v194 = v193;
        v195 = v354;
        if ( (__int64)v354 < 0 )
        {
          v197 = 0;
LABEL_318:
          v398 = 1;
          sub_14196B2DB(v197, v195);
        }
        if ( (_QWORD)v354 )
        {
          v196 = *((_QWORD *)&v353 + 1);
          nullsub_1(v192, v191);
          v197 = 1;
          v198 = sub_140001650(v195, 1);
          if ( !v198 )
            goto LABEL_318;
          v199 = v198;
          sub_1419234B0(v198, v196, v195);
        }
        else
        {
          v199 = 1;
        }
        v364[0].m256i_i8[0] = 3;
        v364[0].m256i_i64[1] = v195;
        v364[0].m256i_i64[2] = v199;
        v364[0].m256i_i64[3] = v195;
        v383 = 1;
        v396 = sub_1416725D0(aArguments_1, 9, &v361);
        sub_140A192F0(v396);
        v242 = *(_OWORD *)v364[0].m256i_i8;
        v243 = (_OWORD *)v396;
        *(_OWORD *)(v396 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
        *v243 = v242;
        v398 = 1;
        sub_1408AFC80(&v361, v352, *((_QWORD *)&v352 + 1), a1 + 368);
      }
      v364[0] = v361;
      v246 = *(_QWORD *)(a1 + 144);
      if ( v246 == *(_QWORD *)(a1 + 128) )
        sub_1419397B0(a1 + 128);
      v247 = *(_QWORD *)(a1 + 136);
      v248 = 32 * v246;
      si128 = _mm_load_si128((const __m128i *)v364);
      *(_OWORD *)(v247 + v248 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
      *(__m128i *)(v247 + v248) = si128;
      *(_QWORD *)(a1 + 144) = v246 + 1;
LABEL_188:
      v11 = v343;
      v13 = v344;
      v14 = v345;
      v249 = v346;
      v250 = v347;
      if ( v347 )
        goto LABEL_189;
LABEL_190:
      if ( (_QWORD)v350 )
        *(double *)si128.m128i_i64 = sub_140001660(*((_QWORD *)&v350 + 1), v350, 1);
      if ( *((_QWORD *)&v351 + 1) )
        *(double *)si128.m128i_i64 = sub_140001660(v352, *((_QWORD *)&v351 + 1), 1);
      v10 = v353;
      if ( (_QWORD)v353 )
        *(double *)si128.m128i_i64 = sub_140001660(*((_QWORD *)&v353 + 1), v353, 1);
      v15 = v249;
      if ( v249 == v14 )
        goto LABEL_309;
    }
    if ( !BYTE14(v354) )
    {
      if ( *((_QWORD *)&v352 + 1) == 11
        && !(*(_QWORD *)v352 ^ 0x61705F796C707061LL | *(_QWORD *)(v352 + 3) ^ 0x68637461705F796CLL) )
      {
        sub_1408AFA90((unsigned int)&v340, v352, 11, DWORD2(v353), v354);
      }
      else
      {
        sub_1408AFFD0(&v340, *((_QWORD *)&v353 + 1), v354);
      }
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(v50, v49);
      v51 = (_DWORD *)sub_140001650(4, 1);
      if ( !v51 )
        sub_14196B2DB(1, 4);
      *v51 = 1701869940;
      v393.m128i_i64[0] = 4;
      v391 = (__int64)v51;
      v393.m128i_i64[1] = (__int64)v51;
      v394 = 4;
      nullsub_1(v53, v52);
      v54 = (__m128i *)sub_140001650(37, 1);
      v396 = (__int64)v54;
      if ( !v54 )
        sub_14196B2DB(1, 37);
      qmemcpy(&v54[1], "n_call_arguments.done", 21);
      *v54 = _mm_loadu_si128((const __m128i *)&xmmword_141A6A660);
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 37;
      v392.m256i_i64[2] = (__int64)v54;
      v392.m256i_i64[3] = 37;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v56, v55);
      v57 = (void *)sub_140001650(12, 1);
      if ( !v57 )
        sub_14196B2DB(1, 12);
      qmemcpy(v57, "output_index", 12);
      v393.m128i_i64[0] = 12;
      v393.m128i_i64[1] = (__int64)v57;
      v394 = 12;
      v392.m256i_i8[0] = 2;
      v392.m256i_i64[1] = 0;
      v392.m256i_i64[2] = DWORD2(v354);
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v59, v58);
      v60 = (_DWORD *)sub_140001650(7, 1);
      if ( !v60 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v60 + 3) = 1684627309;
      *v60 = 1835365481;
      v393.m128i_i64[0] = 7;
      v396 = (__int64)v60;
      v393.m128i_i64[1] = (__int64)v60;
      v394 = 7;
      v63 = v349.m128i_i64[1];
      if ( v349.m128i_i64[1] < 0 )
      {
        v65 = 0;
LABEL_296:
        v380 = 1;
        sub_14196B2DB(v65, v63);
      }
      if ( v349.m128i_i64[1] )
      {
        v64 = v349.m128i_i64[0];
        nullsub_1(v62, v61);
        v65 = 1;
        v66 = sub_140001650(v63, 1);
        if ( !v66 )
          goto LABEL_296;
        v67 = v66;
        sub_1419234B0(v66, v64, v63);
      }
      else
      {
        v67 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v63;
      v392.m256i_i64[2] = v67;
      v392.m256i_i64[3] = v63;
      v380 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v79, v78);
      v80 = sub_140001650(9, 1);
      if ( !v80 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v80 = 0x746E656D75677261LL;
      *(_BYTE *)(v80 + 8) = 115;
      v393.m128i_i64[0] = 9;
      v393.m128i_i64[1] = v80;
      v394 = 9;
      v82 = v342;
      v396 = v80;
      if ( v342 < 0 )
      {
        v83 = 0;
LABEL_304:
        v379 = 1;
        sub_14196B2DB(v83, v82);
      }
      v391 = v341;
      if ( v342 )
      {
        nullsub_1(v80, v81);
        v83 = 1;
        v84 = sub_140001650(v82, 1);
        if ( !v84 )
          goto LABEL_304;
        v85 = v84;
        sub_1419234B0(v84, v391, v82);
      }
      else
      {
        v85 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v82;
      v392.m256i_i64[2] = v85;
      v392.m256i_i64[3] = v82;
      v379 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      v361.m256i_i64[3] = v366;
      *(__m128i *)&v361.m256i_u64[1] = _mm_loadu_si128(&v365);
      v361.m256i_i8[0] = 5;
      v358 = &xmmword_141A6A660;
      v359.m128i_i64[0] = 37;
      v393.m128i_i64[0] = (__int64)&v361;
      v364[0].m256i_i64[0] = (__int64)&v358;
      v364[0].m256i_i64[1] = (__int64)sub_140191200;
      v364[0].m256i_i64[2] = (__int64)&v393;
      v364[0].m256i_i64[3] = (__int64)sub_140BE6880;
      sub_1416DAFA0(&v392, &unk_141A6C33A, v364);
      v154 = v392.m256i_i64[2];
      v153 = v392.m256i_i64[1];
      v155 = v363;
      v156 = v363[2];
      if ( v392.m256i_i64[2] > (unsigned __int64)(*v363 - v156) )
      {
        v396 = v392.m256i_i64[1];
        sub_141939070((_DWORD)v363, v156, v392.m256i_i32[4], 1, 1);
        v155 = v363;
        v156 = v363[2];
        v153 = v396;
LABEL_118:
        sub_1419234B0(v156 + v155[1], v153, v154);
        v155 = v363;
      }
      else if ( v392.m256i_i64[2] )
      {
        goto LABEL_118;
      }
      v157 = (_DWORD *)(v154 + v156);
      v155[2] = v157;
      if ( v392.m256i_i64[0] )
        sub_140001660(v153, v392.m256i_i64[0], 1);
      sub_140A192F0(&v361);
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(v159, v158);
      v160 = (_DWORD *)sub_140001650(4, 1);
      if ( !v160 )
        sub_14196B2DB(1, 4);
      *v160 = 1701869940;
      v393.m128i_i64[0] = 4;
      v357 = v160;
      v393.m128i_i64[1] = (__int64)v160;
      v394 = 4;
      nullsub_1(v162, v161);
      v163 = (void *)sub_140001650(13, 1);
      v396 = (__int64)v163;
      if ( !v163 )
        sub_14196B2DB(1, 13);
      v356 = v157;
      qmemcpy(v163, "function_call", 13);
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 13;
      v392.m256i_i64[2] = (__int64)v163;
      v392.m256i_i64[3] = 13;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v165, v164);
      v166 = (_WORD *)sub_140001650(2, 1);
      if ( !v166 )
        sub_14196B2DB(1, 2);
      *v166 = 25705;
      v393.m128i_i64[0] = 2;
      v393.m128i_i64[1] = (__int64)v166;
      v394 = 2;
      v169 = v349.m128i_i64[1];
      v396 = (__int64)v166;
      if ( v349.m128i_i64[1] < 0 )
      {
        v171 = 0;
LABEL_314:
        v378 = 1;
        sub_14196B2DB(v171, v169);
      }
      if ( v349.m128i_i64[1] )
      {
        v170 = v349.m128i_i64[0];
        nullsub_1(v168, v167);
        v171 = 1;
        v172 = sub_140001650(v169, 1);
        if ( !v172 )
          goto LABEL_314;
        v173 = v172;
        sub_1419234B0(v172, v170, v169);
      }
      else
      {
        v173 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v169;
      v392.m256i_i64[2] = v173;
      v392.m256i_i64[3] = v169;
      v378 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v217, v216);
      v218 = sub_140001650(6, 1);
      if ( !v218 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v218 + 4) = 29557;
      *(_DWORD *)v218 = 1952543859;
      v393.m128i_i64[0] = 6;
      v357 = (_DWORD *)v218;
      v393.m128i_i64[1] = v218;
      v394 = 6;
      nullsub_1(v220, v219);
      v221 = sub_140001650(9, 1);
      v396 = v221;
      if ( !v221 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v221 = 0x6574656C706D6F63LL;
      *(_BYTE *)(v221 + 8) = 100;
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 9;
      v392.m256i_i64[2] = v221;
      v392.m256i_i64[3] = 9;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v223, v222);
      v224 = (_DWORD *)sub_140001650(7, 1);
      if ( !v224 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v224 + 3) = 1684627308;
      *v224 = 1819042147;
      v393.m128i_i64[0] = 7;
      v393.m128i_i64[1] = (__int64)v224;
      v394 = 7;
      v227 = v351;
      v396 = (__int64)v224;
      if ( (__int64)v351 < 0 )
      {
        v229 = 0;
LABEL_322:
        v377 = 1;
        sub_14196B2DB(v229, v227);
      }
      if ( (_QWORD)v351 )
      {
        v228 = *((_QWORD *)&v350 + 1);
        nullsub_1(v226, v225);
        v229 = 1;
        v230 = sub_140001650(v227, 1);
        if ( !v230 )
          goto LABEL_322;
        v231 = v230;
        sub_1419234B0(v230, v228, v227);
      }
      else
      {
        v231 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v227;
      v392.m256i_i64[2] = v231;
      v392.m256i_i64[3] = v227;
      v377 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v252, v251);
      v253 = (_DWORD *)sub_140001650(4, 1);
      if ( !v253 )
        sub_14196B2DB(1, 4);
      *v253 = 1701667182;
      v393.m128i_i64[0] = 4;
      v396 = (__int64)v253;
      v393.m128i_i64[1] = (__int64)v253;
      v394 = 4;
      v256 = *((_QWORD *)&v352 + 1);
      if ( v352 < 0 )
      {
        v258 = 0;
LABEL_326:
        v376 = 1;
        sub_14196B2DB(v258, v256);
      }
      if ( *((_QWORD *)&v352 + 1) )
      {
        v257 = v352;
        nullsub_1(v255, v254);
        v258 = 1;
        v259 = sub_140001650(v256, 1);
        if ( !v259 )
          goto LABEL_326;
        v260 = v259;
        sub_1419234B0(v259, v257, v256);
      }
      else
      {
        v260 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v256;
      v392.m256i_i64[2] = v260;
      v392.m256i_i64[3] = v256;
      v376 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v286, v285);
      v287 = sub_140001650(9, 1);
      if ( !v287 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v287 = 0x746E656D75677261LL;
      *(_BYTE *)(v287 + 8) = 115;
      v393.m128i_i64[0] = 9;
      v393.m128i_i64[1] = v287;
      v394 = 9;
      v396 = v287;
      if ( v82 )
      {
        nullsub_1(v289, v288);
        v290 = sub_140001650(v82, 1);
        if ( !v290 )
        {
          v375 = 1;
          sub_14196B2DB(1, v82);
        }
        v291 = v290;
        sub_1419234B0(v290, v391, v82);
      }
      else
      {
        v291 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v82;
      v392.m256i_i64[2] = v291;
      v392.m256i_i64[3] = v82;
      v375 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      v293 = &v361.m256i_i64[1];
      v361.m256i_i64[3] = v366;
      *(__m128i *)&v361.m256i_u64[1] = _mm_loadu_si128(&v365);
      v361.m256i_i8[0] = 5;
      if ( *(_QWORD *)(a1 + 392) )
      {
        v397 = 1;
        v294 = sub_1406CECD0(a1 + 400, (char *)&v351 + 8);
        _RAX = v294 >> 57;
        v296 = *(_QWORD *)(a1 + 368);
        v292 = *(_QWORD *)(a1 + 376);
        v297 = _mm_cvtsi32_si128(v294 >> 57);
        v298 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v297, v297), 0), 68);
        v299 = *((_QWORD *)&v352 + 1);
        v300 = v352;
        for ( i = nullptr; ; i += 4 )
        {
          v302 = v292 & v294;
          v303 = _mm_loadu_si128((const __m128i *)(v296 + v302));
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v303, v298));
          if ( _R12D )
            break;
LABEL_253:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v303, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
            goto LABEL_266;
          v294 = (unsigned __int64)i + v302 + 16;
        }
        v396 = v292;
        v357 = i;
        while ( 1 )
        {
          __asm { tzcnt   eax, r12d }
          if ( v299 == *(_QWORD *)(v296 - 48 * (v292 & (v302 + _RAX)) - 32) )
          {
            v305 = v296 - 48 * (v292 & (v302 + _RAX));
            v306 = v299;
            v307 = sub_141923B40(v300, *(_QWORD *)(v305 - 40), v299);
            v299 = v306;
            if ( !v307 )
              break;
          }
          _RAX = (unsigned int)(_R12D - 1);
          LOWORD(_RAX) = _R12D & (_R12D - 1);
          _R12D = _RAX;
          v292 = v396;
          i = v357;
          if ( !(_WORD)_RAX )
            goto LABEL_253;
        }
        v308 = *(_QWORD *)(v305 - 8);
        v309 = v308 - v306;
        if ( v308 >= v306 )
        {
          v310 = *(_QWORD *)(v305 - 16);
          if ( !(unsigned int)sub_141923B40(v300, v310 + v309, v306) )
          {
            if ( v309 < 0 )
            {
              v334 = 0;
LABEL_330:
              v397 = 1;
              sub_14196B2DB(v334, v339);
            }
            if ( v309 )
            {
              nullsub_1(v293, v292);
              v311 = sub_140001650(v309, 1);
              if ( !v311 )
              {
                v339 = v308 - v306;
                v334 = 1;
                goto LABEL_330;
              }
            }
            else
            {
              v311 = 1;
            }
            if ( v308 != v306 )
            {
              v312 = v311;
              sub_1419234B0(v311, v310, v309);
              v311 = v312;
            }
            v364[0].m256i_i64[1] = v309;
            v339 = v311;
            v364[0].m256i_i64[2] = v311;
            v364[0].m256i_i64[3] = v309;
            v364[0].m256i_i8[0] = 3;
            v374 = 1;
            v396 = sub_1416725D0(aNamespace_1, 9, &v361);
            sub_140A192F0(v396);
            v313 = _mm_loadu_si128((const __m128i *)v364);
            v314 = (_OWORD *)v396;
            *(_OWORD *)(v396 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
            *v314 = v313;
          }
        }
      }
LABEL_266:
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(v293, v292);
      v315 = (_DWORD *)sub_140001650(4, 1);
      if ( !v315 )
        sub_14196B2DB(1, 4);
      *v315 = 1701869940;
      v393.m128i_i64[0] = 4;
      v357 = v315;
      v393.m128i_i64[1] = (__int64)v315;
      v394 = 4;
      nullsub_1(v317, v316);
      v318 = sub_140001650(25, 1);
      v396 = v318;
      if ( !v318 )
        sub_14196B2DB(1, 25);
      *(_OWORD *)(v318 + 9) = *(__int128 *)((char *)&xmmword_141A6A618 + 9);
      *(__m128i *)v318 = _mm_loadu_si128((const __m128i *)&xmmword_141A6A618);
      v364[0].m256i_i8[0] = 3;
      v364[0].m256i_i64[1] = 25;
      v364[0].m256i_i64[2] = v318;
      v364[0].m256i_i64[3] = 25;
      sub_140A68320(&v392, &v365, &v393, v364);
      if ( v392.m256i_i8[0] != -1 )
        sub_140A192F0(&v392);
      nullsub_1(v320, v319);
      v321 = (void *)sub_140001650(12, 1);
      if ( !v321 )
        sub_14196B2DB(1, 12);
      qmemcpy(v321, "output_index", 12);
      v393.m128i_i64[0] = 12;
      v393.m128i_i64[1] = (__int64)v321;
      v394 = 12;
      v364[0].m256i_i8[0] = 2;
      v364[0].m256i_i64[1] = 0;
      v364[0].m256i_i64[2] = DWORD2(v354);
      sub_140A68320(&v392, &v365, &v393, v364);
      if ( v392.m256i_i8[0] != -1 )
        sub_140A192F0(&v392);
      nullsub_1(v323, v322);
      v324 = (_DWORD *)sub_140001650(4, 1);
      if ( !v324 )
        sub_14196B2DB(1, 4);
      *v324 = 1835365481;
      v393.m128i_i64[0] = 4;
      v396 = (__int64)v324;
      v393.m128i_i64[1] = (__int64)v324;
      v394 = 4;
      v390 = 1;
      sub_140B73E90(v364, &v361);
      if ( v364[0].m256i_i8[0] == -1 )
      {
        v392.m256i_i64[0] = v364[0].m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v392,
          (unsigned int)&off_141A699C8,
          (__int64)&off_141A6A690);
      }
      v325 = _mm_loadu_si128((const __m128i *)v364);
      *(_OWORD *)&v392.m256i_u64[2] = *(_OWORD *)&v364[0].m256i_u64[2];
      *(__m128i *)v392.m256i_i8 = v325;
      v390 = 0;
      sub_140A68320(v364, &v365, &v393, &v392);
      if ( v364[0].m256i_i8[0] != -1 )
        sub_140A192F0(v364);
      v360 = v366;
      v359 = _mm_loadu_si128(&v365);
      LOBYTE(v358) = 5;
      v393.m128i_i64[0] = (__int64)&xmmword_141A6A618;
      v393.m128i_i64[1] = 25;
      v365.m128i_i64[0] = (__int64)&v358;
      v364[0].m256i_i64[0] = (__int64)&v393;
      v364[0].m256i_i64[1] = (__int64)sub_140191200;
      v364[0].m256i_i64[2] = (__int64)&v365;
      v364[0].m256i_i64[3] = (__int64)sub_140BE6880;
      sub_1416DAFA0(&v392, &unk_141A6C33A, v364);
      v326 = v392.m256i_i64[2];
      v327 = v392.m256i_i64[1];
      v328 = v363;
      v329 = v356;
      if ( v392.m256i_i64[2] > *v363 - (_QWORD)v356 )
      {
        v396 = v392.m256i_i64[1];
        sub_141939070((_DWORD)v363, (_DWORD)v356, v392.m256i_i32[4], 1, 1);
        v328 = v363;
        v329 = (_DWORD *)v363[2];
        v327 = v396;
LABEL_279:
        sub_1419234B0((char *)v329 + v328[1], v327, v326);
        v328 = v363;
      }
      else if ( v392.m256i_i64[2] )
      {
        goto LABEL_279;
      }
      v328[2] = (char *)v329 + v326;
      if ( v392.m256i_i64[0] )
        sub_140001660(v327, v392.m256i_i64[0], 1);
      v397 = 1;
      sub_140A192F0(&v358);
      v330 = _mm_loadu_si128((const __m128i *)&v361);
      *(_OWORD *)&v364[0].m256i_u64[2] = *(_OWORD *)&v361.m256i_u64[2];
      *(__m128i *)v364[0].m256i_i8 = v330;
      v331 = *(_QWORD *)(a1 + 144);
      if ( v331 == *(_QWORD *)(a1 + 128) )
        sub_1419397B0(a1 + 128);
      v332 = *(_QWORD *)(a1 + 136);
      v333 = 32 * v331;
      si128 = _mm_load_si128((const __m128i *)v364);
      *(_OWORD *)(v332 + v333 + 16) = *(_OWORD *)&v364[0].m256i_u64[2];
      *(__m128i *)(v332 + v333) = si128;
      *(_QWORD *)(a1 + 144) = v331 + 1;
      if ( v340 )
        *(double *)si128.m128i_i64 = sub_140001660(v391, v340, 1);
      v250 = v347;
      v11 = v343;
      v13 = v344;
      v14 = v345;
      v249 = v346;
      if ( !v347 )
        goto LABEL_190;
LABEL_189:
      *(double *)si128.m128i_i64 = sub_140001660(v349.m128i_i64[0], v250, 1);
      goto LABEL_190;
    }
    sub_140891C50(&v340, *((_QWORD *)&v353 + 1), v354);
    v23 = v342;
    if ( !v342 )
    {
LABEL_77:
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(v22, v21);
      v108 = (_DWORD *)sub_140001650(4, 1);
      if ( !v108 )
        sub_14196B2DB(1, 4);
      *v108 = 1701869940;
      v393.m128i_i64[0] = 4;
      v391 = (__int64)v108;
      v393.m128i_i64[1] = (__int64)v108;
      v394 = 4;
      nullsub_1(v110, v109);
      v111 = (void *)sub_140001650(36, 1);
      v396 = (__int64)v111;
      if ( !v111 )
        sub_14196B2DB(1, 36);
      qmemcpy(v111, "response.custom_tool_call_input.done", 36);
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 36;
      v392.m256i_i64[2] = (__int64)v111;
      v392.m256i_i64[3] = 36;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v113, v112);
      v114 = (void *)sub_140001650(12, 1);
      if ( !v114 )
        sub_14196B2DB(1, 12);
      qmemcpy(v114, "output_index", 12);
      v393.m128i_i64[0] = 12;
      v393.m128i_i64[1] = (__int64)v114;
      v394 = 12;
      v392.m256i_i8[0] = 2;
      v392.m256i_i64[1] = 0;
      v392.m256i_i64[2] = DWORD2(v354);
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v116, v115);
      v117 = (_DWORD *)sub_140001650(7, 1);
      if ( !v117 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v117 + 3) = 1684627309;
      *v117 = 1835365481;
      v393.m128i_i64[0] = 7;
      v396 = (__int64)v117;
      v393.m128i_i64[1] = (__int64)v117;
      v394 = 7;
      v120 = v349.m128i_i64[1];
      if ( v349.m128i_i64[1] < 0 )
      {
        v122 = 0;
LABEL_300:
        v372 = 1;
        sub_14196B2DB(v122, v120);
      }
      if ( v349.m128i_i64[1] )
      {
        v121 = v349.m128i_i64[0];
        nullsub_1(v119, v118);
        v122 = 1;
        v123 = sub_140001650(v120, 1);
        if ( !v123 )
          goto LABEL_300;
        v124 = v123;
        sub_1419234B0(v123, v121, v120);
      }
      else
      {
        v124 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v120;
      v392.m256i_i64[2] = v124;
      v392.m256i_i64[3] = v120;
      v372 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v126, v125);
      v127 = sub_140001650(5, 1);
      if ( !v127 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v127 + 4) = 116;
      *(_DWORD *)v127 = 1970302569;
      v393.m128i_i64[0] = 5;
      v393.m128i_i64[1] = v127;
      v394 = 5;
      v396 = v341;
      v391 = v127;
      if ( v23 )
      {
        nullsub_1(v129, v128);
        v130 = sub_140001650(v23, 1);
        if ( !v130 )
        {
          v371 = 1;
          sub_14196B2DB(1, v23);
        }
        v131 = v130;
        sub_1419234B0(v130, v396, v23);
      }
      else
      {
        v131 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v23;
      v392.m256i_i64[2] = v131;
      v392.m256i_i64[3] = v23;
      v371 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      v361.m256i_i64[3] = v366;
      *(__m128i *)&v361.m256i_u64[1] = v365;
      v361.m256i_i8[0] = 5;
      v358 = &xmmword_141A6A6CD;
      v359.m128i_i64[0] = 36;
      v393.m128i_i64[0] = (__int64)&v361;
      v364[0].m256i_i64[0] = (__int64)&v358;
      v364[0].m256i_i64[1] = (__int64)sub_140191200;
      v364[0].m256i_i64[2] = (__int64)&v393;
      v364[0].m256i_i64[3] = (__int64)sub_140BE6880;
      sub_1416DAFA0(&v392, &unk_141A6C33A, v364);
      v133 = v392.m256i_i64[2];
      v132 = v392.m256i_i64[1];
      v134 = v363;
      v135 = v363[2];
      if ( v392.m256i_i64[2] > (unsigned __int64)(*v363 - v135) )
      {
        v391 = v392.m256i_i64[1];
        sub_141939070((_DWORD)v363, v135, v392.m256i_i32[4], 1, 1);
        v134 = v363;
        v135 = v363[2];
        v132 = v391;
      }
      else if ( !v392.m256i_i64[2] )
      {
        goto LABEL_102;
      }
      sub_1419234B0(v135 + v134[1], v132, v133);
      v134 = v363;
LABEL_102:
      v136 = v133 + v135;
      v134[2] = v136;
      if ( v392.m256i_i64[0] )
        sub_140001660(v132, v392.m256i_i64[0], 1);
      sub_140A192F0(&v361);
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(v138, v137);
      v139 = (_DWORD *)sub_140001650(4, 1);
      if ( !v139 )
        sub_14196B2DB(1, 4);
      *v139 = 1701869940;
      v393.m128i_i64[0] = 4;
      v356 = v139;
      v393.m128i_i64[1] = (__int64)v139;
      v394 = 4;
      nullsub_1(v141, v140);
      v142 = (_OWORD *)sub_140001650(16, 1);
      v391 = (__int64)v142;
      if ( !v142 )
        sub_14196B2DB(1, 16);
      *v142 = xmmword_141A6A650;
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 16;
      v392.m256i_i64[2] = (__int64)v142;
      v392.m256i_i64[3] = 16;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v144, v143);
      v145 = (_WORD *)sub_140001650(2, 1);
      if ( !v145 )
        sub_14196B2DB(1, 2);
      *v145 = 25705;
      v393.m128i_i64[0] = 2;
      v393.m128i_i64[1] = (__int64)v145;
      v394 = 2;
      v148 = v349.m128i_i64[1];
      v391 = (__int64)v145;
      if ( v349.m128i_i64[1] < 0 )
      {
        v150 = 0;
LABEL_308:
        v370 = 1;
        sub_14196B2DB(v150, v148);
      }
      if ( v349.m128i_i64[1] )
      {
        v149 = v349.m128i_i64[0];
        nullsub_1(v147, v146);
        v150 = 1;
        v151 = sub_140001650(v148, 1);
        if ( !v151 )
          goto LABEL_308;
        v152 = v151;
        sub_1419234B0(v151, v149, v148);
      }
      else
      {
        v152 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v148;
      v392.m256i_i64[2] = v152;
      v392.m256i_i64[3] = v148;
      v370 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v201, v200);
      v202 = sub_140001650(6, 1);
      if ( !v202 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v202 + 4) = 29557;
      *(_DWORD *)v202 = 1952543859;
      v393.m128i_i64[0] = 6;
      v356 = (_DWORD *)v202;
      v393.m128i_i64[1] = v202;
      v394 = 6;
      nullsub_1(v204, v203);
      v205 = sub_140001650(9, 1);
      v391 = v205;
      if ( !v205 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v205 = 0x6574656C706D6F63LL;
      *(_BYTE *)(v205 + 8) = 100;
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = 9;
      v392.m256i_i64[2] = v205;
      v392.m256i_i64[3] = 9;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v207, v206);
      v208 = (_DWORD *)sub_140001650(7, 1);
      if ( !v208 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v208 + 3) = 1684627308;
      *v208 = 1819042147;
      v393.m128i_i64[0] = 7;
      v391 = (__int64)v208;
      v393.m128i_i64[1] = (__int64)v208;
      v394 = 7;
      v211 = v351;
      if ( (__int64)v351 < 0 )
      {
        v213 = 0;
LABEL_316:
        v369 = 1;
        sub_14196B2DB(v213, v211);
      }
      if ( (_QWORD)v351 )
      {
        v212 = *((_QWORD *)&v350 + 1);
        nullsub_1(v210, v209);
        v213 = 1;
        v214 = sub_140001650(v211, 1);
        if ( !v214 )
          goto LABEL_316;
        v215 = v214;
        sub_1419234B0(v214, v212, v211);
      }
      else
      {
        v215 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v211;
      v392.m256i_i64[2] = v215;
      v392.m256i_i64[3] = v211;
      v369 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v233, v232);
      v234 = (_DWORD *)sub_140001650(4, 1);
      if ( !v234 )
        sub_14196B2DB(1, 4);
      *v234 = 1701667182;
      v393.m128i_i64[0] = 4;
      v391 = (__int64)v234;
      v393.m128i_i64[1] = (__int64)v234;
      v394 = 4;
      v237 = *((_QWORD *)&v352 + 1);
      if ( v352 < 0 )
      {
        v239 = 0;
LABEL_324:
        v368 = 1;
        sub_14196B2DB(v239, v237);
      }
      if ( *((_QWORD *)&v352 + 1) )
      {
        v238 = v352;
        nullsub_1(v236, v235);
        v239 = 1;
        v240 = sub_140001650(v237, 1);
        if ( !v240 )
          goto LABEL_324;
        v241 = v240;
        sub_1419234B0(v240, v238, v237);
      }
      else
      {
        v241 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v237;
      v392.m256i_i64[2] = v241;
      v392.m256i_i64[3] = v237;
      v368 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      nullsub_1(v262, v261);
      v263 = sub_140001650(5, 1);
      if ( !v263 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v263 + 4) = 116;
      *(_DWORD *)v263 = 1970302569;
      v393.m128i_i64[0] = 5;
      v391 = v263;
      v393.m128i_i64[1] = v263;
      v394 = 5;
      if ( v23 )
      {
        nullsub_1(v265, v264);
        v266 = sub_140001650(v23, 1);
        if ( !v266 )
        {
          v367 = 1;
          sub_14196B2DB(1, v23);
        }
        v267 = v266;
        sub_1419234B0(v266, v396, v23);
      }
      else
      {
        v267 = 1;
      }
      v392.m256i_i8[0] = 3;
      v392.m256i_i64[1] = v23;
      v392.m256i_i64[2] = v267;
      v392.m256i_i64[3] = v23;
      v367 = 0;
      sub_140A68320(&v358, &v365, &v393, &v392);
      if ( (_BYTE)v358 != 0xFF )
        sub_140A192F0(&v358);
      v361.m256i_i64[3] = v366;
      *(__m128i *)&v361.m256i_u64[1] = v365;
      v361.m256i_i8[0] = 5;
      v365.m128i_i64[0] = 0;
      v366 = 0;
      nullsub_1(&v361.m256i_u64[1], v268);
      v269 = (_DWORD *)sub_140001650(4, 1);
      if ( !v269 )
        sub_14196B2DB(1, 4);
      *v269 = 1701869940;
      v393.m128i_i64[0] = 4;
      v356 = v269;
      v393.m128i_i64[1] = (__int64)v269;
      v394 = 4;
      nullsub_1(v271, v270);
      v272 = (void *)sub_140001650(25, 1);
      v391 = (__int64)v272;
      if ( !v272 )
        sub_14196B2DB(1, 25);
      qmemcpy(v272, "response.output_item.done", 25);
      v364[0].m256i_i8[0] = 3;
      v364[0].m256i_i64[1] = 25;
      v364[0].m256i_i64[2] = (__int64)v272;
      v364[0].m256i_i64[3] = 25;
      sub_140A68320(&v392, &v365, &v393, v364);
      if ( v392.m256i_i8[0] != -1 )
        sub_140A192F0(&v392);
      nullsub_1(v274, v273);
      v275 = (void *)sub_140001650(12, 1);
      if ( !v275 )
        sub_14196B2DB(1, 12);
      qmemcpy(v275, "output_index", 12);
      v393.m128i_i64[0] = 12;
      v393.m128i_i64[1] = (__int64)v275;
      v394 = 12;
      v364[0].m256i_i8[0] = 2;
      v364[0].m256i_i64[1] = 0;
      v364[0].m256i_i64[2] = DWORD2(v354);
      sub_140A68320(&v392, &v365, &v393, v364);
      if ( v392.m256i_i8[0] != -1 )
        sub_140A192F0(&v392);
      nullsub_1(v277, v276);
      v278 = (_DWORD *)sub_140001650(4, 1);
      if ( !v278 )
        sub_14196B2DB(1, 4);
      *v278 = 1835365481;
      v393.m128i_i64[0] = 4;
      v391 = (__int64)v278;
      v393.m128i_i64[1] = (__int64)v278;
      v394 = 4;
      v389 = 1;
      sub_140B73E90(v364, &v361);
      if ( v364[0].m256i_i8[0] == -1 )
      {
        v392.m256i_i64[0] = v364[0].m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v392,
          (unsigned int)&off_141A699C8,
          (__int64)&off_141A6A6F8);
      }
      v392 = v364[0];
      v389 = 0;
      sub_140A68320(v364, &v365, &v393, &v392);
      if ( v364[0].m256i_i8[0] != -1 )
        sub_140A192F0(v364);
      v360 = v366;
      v359 = v365;
      LOBYTE(v358) = 5;
      v393.m128i_i64[0] = (__int64)&xmmword_141A6A618;
      v393.m128i_i64[1] = 25;
      v365.m128i_i64[0] = (__int64)&v358;
      v364[0].m256i_i64[0] = (__int64)&v393;
      v364[0].m256i_i64[1] = (__int64)sub_140191200;
      v364[0].m256i_i64[2] = (__int64)&v365;
      v364[0].m256i_i64[3] = (__int64)sub_140BE6880;
      sub_1416DAFA0(&v392, &unk_141A6C33A, v364);
      v280 = v392.m256i_i64[2];
      v279 = v392.m256i_i64[1];
      v281 = v363;
      if ( v392.m256i_i64[2] > (unsigned __int64)(*v363 - v136) )
      {
        v391 = v392.m256i_i64[1];
        sub_141939070((_DWORD)v363, v136, v392.m256i_i32[4], 1, 1);
        v281 = v363;
        v136 = v363[2];
        v279 = v391;
      }
      else if ( !v392.m256i_i64[2] )
      {
LABEL_230:
        v281[2] = v280 + v136;
        if ( v392.m256i_i64[0] )
          sub_140001660(v279, v392.m256i_i64[0], 1);
        v395 = 1;
        sub_140A192F0(&v358);
        v282 = *(_QWORD *)(a1 + 144);
        if ( v282 == *(_QWORD *)(a1 + 128) )
          sub_1419397B0(a1 + 128);
        v283 = *(_QWORD *)(a1 + 136);
        v284 = 32 * v282;
        si128 = _mm_loadu_si128((const __m128i *)&v361);
        *(_OWORD *)(v283 + v284 + 16) = *(_OWORD *)&v361.m256i_u64[2];
        *(__m128i *)(v283 + v284) = si128;
        *(_QWORD *)(a1 + 144) = v282 + 1;
        if ( v340 )
          *(double *)si128.m128i_i64 = sub_140001660(v396, v340, 1);
        goto LABEL_188;
      }
      sub_1419234B0(v136 + v281[1], v279, v280);
      v281 = v363;
      goto LABEL_230;
    }
    v393.m128i_i64[0] = 0;
    v394 = 0;
    nullsub_1(v22, v21);
    v24 = (_DWORD *)sub_140001650(4, 1);
    if ( !v24 )
      sub_14196B2DB(1, 4);
    *v24 = 1701869940;
    v361.m256i_i64[0] = 4;
    v391 = (__int64)v24;
    v361.m256i_i64[1] = (__int64)v24;
    v361.m256i_i64[2] = 4;
    nullsub_1(v26, v25);
    v27 = (__m128i *)sub_140001650(37, 1);
    v396 = (__int64)v27;
    if ( !v27 )
      sub_14196B2DB(1, 37);
    qmemcpy(&v27[1], "tool_call_input.delta", 21);
    *v27 = _mm_loadu_si128((const __m128i *)&xmmword_141A6A6A8);
    v364[0].m256i_i8[0] = 3;
    v364[0].m256i_i64[1] = 37;
    v364[0].m256i_i64[2] = (__int64)v27;
    v364[0].m256i_i64[3] = 37;
    sub_140A68320(&v392, &v393, &v361, v364);
    if ( v392.m256i_i8[0] != -1 )
      sub_140A192F0(&v392);
    nullsub_1(v29, v28);
    v30 = (void *)sub_140001650(12, 1);
    if ( !v30 )
      sub_14196B2DB(1, 12);
    qmemcpy(v30, "output_index", 12);
    v361.m256i_i64[0] = 12;
    v361.m256i_i64[1] = (__int64)v30;
    v361.m256i_i64[2] = 12;
    v364[0].m256i_i8[0] = 2;
    v364[0].m256i_i64[1] = 0;
    v364[0].m256i_i64[2] = DWORD2(v354);
    sub_140A68320(&v392, &v393, &v361, v364);
    if ( v392.m256i_i8[0] != -1 )
      sub_140A192F0(&v392);
    nullsub_1(v32, v31);
    v33 = (_DWORD *)sub_140001650(7, 1);
    if ( !v33 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v33 + 3) = 1684627309;
    *v33 = 1835365481;
    v361.m256i_i64[0] = 7;
    v361.m256i_i64[1] = (__int64)v33;
    v361.m256i_i64[2] = 7;
    v36 = v349.m128i_i64[1];
    v396 = (__int64)v33;
    if ( v349.m128i_i64[1] < 0 )
    {
      v38 = 0;
LABEL_302:
      v373 = 1;
      sub_14196B2DB(v38, v36);
    }
    if ( v349.m128i_i64[1] )
    {
      v37 = v349.m128i_i64[0];
      nullsub_1(v35, v34);
      v38 = 1;
      v39 = sub_140001650(v36, 1);
      if ( !v39 )
        goto LABEL_302;
      v40 = v39;
      sub_1419234B0(v39, v37, v36);
    }
    else
    {
      v40 = 1;
    }
    v364[0].m256i_i8[0] = 3;
    v364[0].m256i_i64[1] = v36;
    v364[0].m256i_i64[2] = v40;
    v364[0].m256i_i64[3] = v36;
    v373 = 0;
    sub_140A68320(&v392, &v393, &v361, v364);
    if ( v392.m256i_i8[0] != -1 )
      sub_140A192F0(&v392);
    nullsub_1(v97, v96);
    v98 = sub_140001650(5, 1);
    if ( !v98 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v98 + 4) = 97;
    *(_DWORD *)v98 = 1953260900;
    v361.m256i_i64[0] = 5;
    v391 = v98;
    v361.m256i_i64[1] = v98;
    v361.m256i_i64[2] = 5;
    v101 = v341;
    nullsub_1(v100, v99);
    v102 = sub_140001650(v23, 1);
    v396 = v102;
    if ( !v102 )
      sub_14196B2DB(1, v23);
    v103 = v102;
    sub_1419234B0(v102, v101, v23);
    v364[0].m256i_i8[0] = 3;
    v364[0].m256i_i64[1] = v23;
    v364[0].m256i_i64[2] = v103;
    v364[0].m256i_i64[3] = v23;
    sub_140A68320(&v392, &v393, &v361, v364);
    if ( v392.m256i_i8[0] != -1 )
      sub_140A192F0(&v392);
    v360 = v394;
    v359 = _mm_loadu_si128(&v393);
    LOBYTE(v358) = 5;
    v361.m256i_i64[0] = (__int64)&xmmword_141A6A6A8;
    v361.m256i_i64[1] = 37;
    v393.m128i_i64[0] = (__int64)&v358;
    v364[0].m256i_i64[0] = (__int64)&v361;
    v364[0].m256i_i64[1] = (__int64)sub_140191200;
    v364[0].m256i_i64[2] = (__int64)&v393;
    v364[0].m256i_i64[3] = (__int64)sub_140BE6880;
    sub_1416DAFA0(&v392, &unk_141A6C33A, v364);
    v105 = v392.m256i_i64[2];
    v104 = v392.m256i_i64[1];
    v106 = v363;
    v107 = v363[2];
    if ( v392.m256i_i64[2] > (unsigned __int64)(*v363 - v107) )
    {
      v396 = v392.m256i_i64[1];
      sub_141939070((_DWORD)v363, v107, v392.m256i_i32[4], 1, 1);
      v106 = v363;
      v107 = v363[2];
      v104 = v396;
    }
    else if ( !v392.m256i_i64[2] )
    {
LABEL_74:
      v106[2] = v105 + v107;
      if ( v392.m256i_i64[0] )
        sub_140001660(v104, v392.m256i_i64[0], 1);
      sub_140A192F0(&v358);
      goto LABEL_77;
    }
    sub_1419234B0(v107 + v106[1], v104, v105);
    v106 = v363;
    goto LABEL_74;
  }
LABEL_309:
  v16 = v14;
LABEL_310:
  sub_1401B32F0(v16, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v14 - v16) >> 3));
  if ( v13 )
    *(double *)si128.m128i_i64 = sub_140001660(v11, 104 * v13, 8);
  return *(double *)si128.m128i_i64;
}
