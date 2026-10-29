// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1408b2800 | successor of pre-update 0x140315080 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__m128i *__fastcall sub_1408B2800(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  __m128i *v8; // r14
  __m128i *v9; // rcx
  __m128i si128; // xmm7
  __m128i v11; // xmm8
  __int64 v12; // rax
  __int64 v13; // r15
  const char *v14; // rsi
  unsigned __int8 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _BYTE *v41; // rsi
  _BYTE *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  void *v46; // r15
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rax
  _BYTE *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r13
  unsigned __int16 *v57; // r12
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r15
  const char *v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _WORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  _DWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __m128i v93; // xmm0
  __m128i v94; // xmm1
  __int64 v95; // r15
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 v98; // rdx
  __int64 v99; // rcx
  _DWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  _DWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r15
  __m128i *v107; // rdi
  __int64 v108; // r14
  _DWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r13
  __int64 v113; // rbx
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // r12
  unsigned __int128 v117; // kr00_16
  __int64 v118; // rsi
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  __m128i v122; // xmm0
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rsi
  void *v127; // r15
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  _DWORD *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  _DWORD *v137; // rax
  __m128i v138; // xmm0
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rcx
  __m128i v142; // xmm0
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rsi
  __int64 v146; // r8
  __int64 v147; // r12
  __int64 v148; // rax
  char v149; // si
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r15
  _DWORD *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  _DWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  _DWORD *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  _BYTE *v165; // r12
  _DWORD *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  void *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  void *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // r13
  __int64 v175; // rsi
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  _DWORD *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rax
  __int128 v185; // xmm0
  __int64 v186; // rsi
  __int64 v187; // rax
  __int64 v188; // rcx
  __m128i v189; // xmm0
  __int64 v190; // rax
  __int64 v191; // r15
  __int64 v192; // r13
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rsi
  _DWORD *v196; // rax
  __m128i v197; // xmm0
  __int64 v198; // rdx
  __int64 v199; // rcx
  _DWORD *v200; // rax
  __m128i v201; // xmm0
  __int64 v202; // rsi
  __int64 v203; // rax
  __int64 v204; // rcx
  __m128i v205; // xmm0
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rsi
  bool v210; // zf
  __int64 v211; // r14
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  char v216; // bl
  __int64 v217; // rdx
  __int64 v218; // r8
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // rbx
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rsi
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  _QWORD *v229; // rax
  __m128i v230; // xmm0
  __int64 v231; // rdx
  __int64 v232; // rcx
  void *v233; // rax
  __m128i v234; // xmm0
  __m128i v235; // xmm0
  __m128i *v236; // rax
  __int64 v237; // rax
  __int8 v238; // bl
  __int64 v239; // rdx
  __m128i v240; // xmm0
  __m128i *v241; // rax
  __int64 v242; // rax
  __int8 v243; // bl
  __int64 v244; // rdx
  __m128i v245; // xmm0
  __m128i *v246; // rax
  __int64 v247; // rax
  __int8 v248; // bl
  __int64 v249; // rdx
  __m128i v250; // xmm0
  __m128i *v251; // rax
  __int64 v252; // rax
  __int8 v253; // bl
  __int64 v254; // rdx
  __m128i v255; // xmm0
  __m128i *v256; // rax
  __int64 v257; // rax
  __m128i v258; // xmm0
  __m128i *v259; // rax
  unsigned __int8 *v260; // rax
  __int64 v261; // rdx
  int v262; // ecx
  _DWORD *v263; // rcx
  __int64 v264; // rax
  _DWORD *v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // rax
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // rdx
  unsigned __int64 v272; // rcx
  unsigned __int16 *v273; // rdi
  __int64 v274; // rbx
  unsigned __int64 v275; // rax
  unsigned __int64 v276; // rcx
  _DWORD *v277; // rax
  __m128i v278; // xmm0
  _DWORD *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  __m128i *v282; // rax
  unsigned __int64 v283; // rax
  unsigned __int64 v284; // rax
  _DWORD *v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  __m128i *v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  _DWORD *v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r15
  __int64 v295; // rax
  __int64 v296; // r14
  __m128i v297; // xmm0
  __m128i *v298; // rax
  __m128i v299; // xmm0
  __m128i *v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // rsi
  __int64 v305; // rcx
  _BYTE v306[23]; // [rsp+B1h] [rbp+31h] BYREF
  __int64 v307; // [rsp+C8h] [rbp+48h]
  __m128i *v308; // [rsp+D0h] [rbp+50h]
  __int64 v309; // [rsp+D8h] [rbp+58h]
  void *v310; // [rsp+E0h] [rbp+60h]
  __int64 v311; // [rsp+E8h] [rbp+68h]
  __int64 v312; // [rsp+F0h] [rbp+70h] BYREF
  _DWORD *v313; // [rsp+F8h] [rbp+78h]
  __int64 v314; // [rsp+100h] [rbp+80h]
  int v315; // [rsp+10Ch] [rbp+8Ch]
  __int64 v316; // [rsp+110h] [rbp+90h]
  __int64 v317; // [rsp+118h] [rbp+98h]
  char v318; // [rsp+127h] [rbp+A7h] BYREF
  __int128 v319; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v320; // [rsp+138h] [rbp+B8h]
  __int64 v321; // [rsp+140h] [rbp+C0h]
  _BYTE *v322; // [rsp+148h] [rbp+C8h]
  char v323; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v324[15]; // [rsp+151h] [rbp+D1h]
  unsigned __int128 v325; // [rsp+160h] [rbp+E0h]
  __int64 v326; // [rsp+170h] [rbp+F0h]
  __int64 v327; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v328; // [rsp+180h] [rbp+100h]
  __int64 v329; // [rsp+188h] [rbp+108h]
  __int64 v330; // [rsp+190h] [rbp+110h]
  __int128 v331; // [rsp+198h] [rbp+118h] BYREF
  __int64 v332; // [rsp+1A8h] [rbp+128h]
  __int64 v333; // [rsp+1B0h] [rbp+130h]
  __int64 v334; // [rsp+1B8h] [rbp+138h]
  __int64 v335; // [rsp+1C0h] [rbp+140h]
  __int64 v336; // [rsp+1C8h] [rbp+148h]
  __m256i v337; // [rsp+1D0h] [rbp+150h] BYREF
  char v338; // [rsp+1FAh] [rbp+17Ah]
  char v339; // [rsp+1FBh] [rbp+17Bh]
  char v340; // [rsp+1FCh] [rbp+17Ch]
  char v341; // [rsp+1FDh] [rbp+17Dh]
  char v342; // [rsp+1FEh] [rbp+17Eh]
  char v343; // [rsp+1FFh] [rbp+17Fh]
  char v344; // [rsp+200h] [rbp+180h]
  char v345; // [rsp+201h] [rbp+181h]
  char v346; // [rsp+202h] [rbp+182h]
  char v347; // [rsp+203h] [rbp+183h]
  char v348; // [rsp+204h] [rbp+184h]
  char v349; // [rsp+205h] [rbp+185h]
  char v350; // [rsp+206h] [rbp+186h]
  char v351; // [rsp+207h] [rbp+187h]
  _BYTE v352[31]; // [rsp+208h] [rbp+188h] BYREF
  __m128i *v353; // [rsp+228h] [rbp+1A8h]
  __m256i v354; // [rsp+230h] [rbp+1B0h] BYREF
  _BYTE v355[24]; // [rsp+258h] [rbp+1D8h] BYREF
  char v356; // [rsp+277h] [rbp+1F7h]
  __int64 v357; // [rsp+278h] [rbp+1F8h]
  __int64 v358; // [rsp+280h] [rbp+200h]
  char v359; // [rsp+289h] [rbp+209h]
  char v360; // [rsp+28Ah] [rbp+20Ah]
  char v361; // [rsp+28Bh] [rbp+20Bh]
  char v362; // [rsp+28Ch] [rbp+20Ch]
  char v363; // [rsp+28Dh] [rbp+20Dh]
  char v364; // [rsp+28Eh] [rbp+20Eh]
  char v365; // [rsp+28Fh] [rbp+20Fh]
  __m256i v366; // [rsp+290h] [rbp+210h] BYREF
  const char *v367; // [rsp+2B0h] [rbp+230h]
  __int64 v368; // [rsp+2B8h] [rbp+238h]
  char v369; // [rsp+2C6h] [rbp+246h]
  char v370; // [rsp+2C7h] [rbp+247h]
  __int64 v371; // [rsp+2C8h] [rbp+248h]

  v371 = -2;
  v321 = a4;
  v6 = a2;
  v308 = a1;
  v327 = 0;
  v328 = 8;
  v329 = 0;
  v334 = -1;
  v370 = 1;
  v7 = sub_1416724D0(aMessages_0, 8, a2);
  v357 = -1;
  if ( v7 && *(_BYTE *)v7 == 4 )
  {
    v8 = *(__m128i **)(v7 + 16);
    v9 = &v8[2 * *(_QWORD *)(v7 + 24)];
    v357 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A50580);
    v11 = _mm_cvtsi32_si128(0x7765u);
    v353 = v9;
    if ( v8 != v9 )
    {
      while ( 1 )
      {
        v333 = v335;
        v334 = v357;
        v370 = 1;
        v12 = sub_1416724D0(aRole_2, 4, v8);
        v13 = 4;
        if ( v12 )
        {
          v14 = aUser_2;
          if ( *(_BYTE *)v12 == 3 )
          {
            v14 = *(const char **)(v12 + 16);
            v13 = *(_QWORD *)(v12 + 24);
          }
        }
        else
        {
          v14 = aUser_2;
        }
        v333 = v335;
        v334 = v357;
        v370 = 1;
        v15 = (unsigned __int8 *)sub_1416724D0(aContent_5, 7, v8);
        if ( v15 )
        {
          LODWORD(v4) = *v15;
          switch ( (char)v4 )
          {
            case 0:
              break;
            case 1:
              v366.m256i_i8[1] = v15[1];
              break;
            case 2:
              *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v15 + 8));
              break;
            case 3:
              v333 = v335;
              v334 = v357;
              v370 = 1;
              sub_1416DB410(&v366.m256i_u64[1], v15 + 8);
              break;
            case 4:
              v16 = *((_QWORD *)v15 + 2);
              v17 = *((_QWORD *)v15 + 3);
              v333 = v335;
              v334 = v357;
              v370 = 1;
              sub_1401C07A0(&v366.m256i_u64[1], v16, v17);
              break;
            case 5:
              if ( *((_QWORD *)v15 + 3) )
              {
                v18 = *((_QWORD *)v15 + 1);
                if ( !v18 )
                {
                  v333 = v335;
                  v334 = v357;
                  v370 = 1;
                  sub_14196B5D0(&off_141A6CB98);
                }
                v19 = *((_QWORD *)v15 + 2);
                v333 = v335;
                v334 = v357;
                v370 = 1;
                sub_140A21590(&v366.m256i_u64[1], v18, v19);
              }
              else
              {
                v366.m256i_i64[1] = 0;
                v366.m256i_i64[3] = 0;
              }
              break;
          }
          v325 = *(_OWORD *)&v366.m256i_u64[2];
          v323 = v4;
          v324[0] = v366.m256i_i8[1];
          *(_DWORD *)&v324[1] = *(__int32 *)((char *)v366.m256i_i32 + 2);
          *(_WORD *)&v324[5] = v366.m256i_i16[3];
          *(_QWORD *)&v324[7] = v366.m256i_i64[1];
          v366.m256i_i8[0] = 0;
          v333 = v335;
          v334 = v357;
          v370 = 1;
          sub_140032FF0(&v366);
        }
        else
        {
          v366.m256i_i8[0] = 0;
          v325 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
          v323 = 0;
          *(_QWORD *)v324 = *(__int64 *)((char *)v366.m256i_i64 + 1);
          *(_DWORD *)&v324[8] = *(__int32 *)((char *)&v366.m256i_i32[2] + 1);
          *(_WORD *)&v324[12] = *(__int16 *)((char *)&v366.m256i_i16[6] + 1);
          v324[14] = v366.m256i_i8[15];
        }
        if ( v13 == 4 )
          break;
        if ( v13 == 9 )
        {
          if ( *(_QWORD *)v14 ^ 0x65706F6C65766564LL | *((unsigned __int8 *)v14 + 8) ^ 0x72LL )
          {
            if ( *(_QWORD *)v14 ^ 0x6E61747369737361LL | *((unsigned __int8 *)v14 + 8) ^ 0x74LL )
              goto LABEL_122;
            *(_QWORD *)&v331 = 0;
            *((_QWORD *)&v331 + 1) = 8;
            v332 = 0;
            sub_140890E30(&v312, &v323);
            v22 = v314;
            if ( v314 )
            {
              *(_QWORD *)v355 = 0;
              *(_QWORD *)&v355[16] = 0;
              nullsub_1(v21, v20);
              v23 = (_DWORD *)sub_140001650(4, 1);
              if ( !v23 )
                sub_14196B2DB(1, 4);
              *v23 = 1701869940;
              *(_QWORD *)v352 = 4;
              *(_QWORD *)&v352[8] = v23;
              *(_QWORD *)&v352[16] = 4;
              nullsub_1(v25, v24);
              v26 = (_DWORD *)sub_140001650(4, 1);
              v358 = (__int64)v26;
              if ( !v26 )
                sub_14196B2DB(1, 4);
              *v26 = 1954047348;
              v366.m256i_i8[0] = 3;
              v366.m256i_i64[1] = 4;
              v366.m256i_i64[2] = (__int64)v26;
              v366.m256i_i64[3] = 4;
              sub_140A68320(&v354, v355, v352, &v366);
              if ( v354.m256i_i8[0] != -1 )
                sub_140032FF0(&v354);
              nullsub_1(v28, v27);
              v29 = (_DWORD *)sub_140001650(4, 1);
              if ( !v29 )
                sub_14196B2DB(1, 4);
              *v29 = 1954047348;
              *(_QWORD *)v352 = 4;
              *(_QWORD *)&v352[8] = v29;
              *(_QWORD *)&v352[16] = 4;
              v4 = (__int64)v313;
              nullsub_1(v31, v30);
              v32 = sub_140001650(v22, 1);
              v358 = v32;
              if ( !v32 )
                sub_14196B2DB(1, v22);
              v33 = v32;
              sub_1419234B0(v32, v4, v22);
              v366.m256i_i8[0] = 3;
              v366.m256i_i64[1] = v22;
              v366.m256i_i64[2] = v33;
              v366.m256i_i64[3] = v22;
              sub_140A68320(&v354, v355, v352, &v366);
              if ( v354.m256i_i8[0] != -1 )
                sub_140032FF0(&v354);
              v337.m256i_i64[3] = *(_QWORD *)&v355[16];
              *(__m128i *)&v337.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v355);
              v337.m256i_i8[0] = 5;
              v34 = v332;
              if ( v332 == (_QWORD)v331 )
                sub_1419397B0(&v331);
              v35 = *((_QWORD *)&v331 + 1);
              v36 = 32 * v34;
              v37 = _mm_loadu_si128((const __m128i *)&v337);
              *(__m128i *)(*((_QWORD *)&v331 + 1) + v36 + 16) = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
              *(__m128i *)(v35 + v36) = v37;
              v332 = v34 + 1;
            }
            v38 = sub_1416724D0(aToolCalls, 10, v8);
            if ( !v38
              || *(_BYTE *)v38 != 4
              || (v41 = *(_BYTE **)(v38 + 16), v322 = &v41[32 * *(_QWORD *)(v38 + 24)], v41 == v322) )
            {
LABEL_152:
              if ( v332 == 1
                && (v130 = sub_1416724D0(aType_8, 4, *((_QWORD *)&v331 + 1))) != 0
                && *(_BYTE *)v130 == 3
                && *(_QWORD *)(v130 + 24) == 4
                && **(_DWORD **)(v130 + 16) == 1954047348 )
              {
                if ( !v332 )
                  sub_14196B673(0, 0, &off_141A54280);
                v190 = sub_1416724D0(aText_8, 4, *((_QWORD *)&v331 + 1));
                v191 = 1;
                if ( v190 && *(_BYTE *)v190 == 3 )
                {
                  v191 = *(_QWORD *)(v190 + 16);
                  v192 = *(_QWORD *)(v190 + 24);
                }
                else
                {
                  v192 = 0;
                }
                sub_1401E7560((unsigned int)&v366, v192, 0, 1, 1);
                v4 = v366.m256i_i64[1];
                if ( v366.m256i_i32[0] == 1 )
                  sub_14196B2DB(v366.m256i_i64[1], v366.m256i_i64[2]);
                v195 = v366.m256i_i64[2];
                if ( v192 )
                  sub_1419234B0(v366.m256i_i64[2], v191, v192);
                v358 = v4;
                *(_QWORD *)&v319 = v4;
                v336 = v195;
                *((_QWORD *)&v319 + 1) = v195;
                v320 = v192;
                *(_QWORD *)v355 = 0;
                *(_QWORD *)&v355[16] = 0;
                nullsub_1(v194, v193);
                v196 = (_DWORD *)sub_140001650(4, 1);
                if ( !v196 )
                  sub_14196B2DB(1, 4);
                *v196 = 1701605234;
                *(_QWORD *)v352 = 4;
                *(_QWORD *)&v352[8] = v196;
                *(_QWORD *)&v352[16] = 4;
                v364 = 1;
                sub_140B72ED0((__int64)&v366, (__int64 *)&off_141A520F8);
                if ( v366.m256i_i8[0] == -1 )
                {
                  v354.m256i_i64[0] = v366.m256i_i64[1];
                  sub_14196B5F0(
                    (unsigned int)aCalledResultUn_11,
                    43,
                    (unsigned int)&v354,
                    (unsigned int)&off_141A52958,
                    (__int64)&off_141A54298);
                }
                v197 = _mm_loadu_si128((const __m128i *)&v366);
                *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
                *(__m128i *)v354.m256i_i8 = v197;
                v364 = 0;
                sub_140A68320(&v366, v355, v352, &v354);
                if ( v366.m256i_i8[0] != -1 )
                  sub_140032FF0(&v366);
                nullsub_1(v199, v198);
                v200 = (_DWORD *)sub_140001650(7, 1);
                if ( !v200 )
                  sub_14196B2DB(1, 7);
                *(_DWORD *)((char *)v200 + 3) = 1953391988;
                *v200 = 1953394531;
                *(_QWORD *)v352 = 7;
                *(_QWORD *)&v352[8] = v200;
                *(_QWORD *)&v352[16] = 7;
                v363 = 1;
                sub_140B72E40((__int64)&v366, (__int64)&v319);
                if ( v366.m256i_i8[0] == -1 )
                {
                  v354.m256i_i64[0] = v366.m256i_i64[1];
                  sub_14196B5F0(
                    (unsigned int)aCalledResultUn_11,
                    43,
                    (unsigned int)&v354,
                    (unsigned int)&off_141A52958,
                    (__int64)&off_141A54298);
                }
                v201 = _mm_loadu_si128((const __m128i *)&v366);
                *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
                *(__m128i *)v354.m256i_i8 = v201;
                v363 = 0;
                sub_140A68320(&v366, v355, v352, &v354);
                if ( v366.m256i_i8[0] != -1 )
                  sub_140032FF0(&v366);
                v337.m256i_i64[3] = *(_QWORD *)&v355[16];
                *(__m128i *)&v337.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v355);
                v337.m256i_i8[0] = 5;
                v202 = v329;
                if ( v329 == v327 )
                  sub_1419397B0(&v327);
                v203 = v328;
                v204 = 32 * v202;
                v205 = _mm_loadu_si128((const __m128i *)&v337);
                *(__m128i *)(v328 + v204 + 16) = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
                *(__m128i *)(v203 + v204) = v205;
                v329 = v202 + 1;
                if ( v358 )
                  sub_140001660(v336, v358, 1);
              }
              else
              {
                *(_QWORD *)v355 = 0;
                *(_QWORD *)&v355[16] = 0;
                nullsub_1(v40, v39);
                v131 = (_DWORD *)sub_140001650(4, 1);
                if ( !v131 )
                  sub_14196B2DB(1, 4);
                *v131 = 1701605234;
                *(_QWORD *)v352 = 4;
                *(_QWORD *)&v352[8] = v131;
                *(_QWORD *)&v352[16] = 4;
                nullsub_1(v133, v132);
                v134 = sub_140001650(9, 1);
                v358 = v134;
                if ( !v134 )
                  sub_14196B2DB(1, 9);
                *(_QWORD *)v134 = 0x6E61747369737361LL;
                *(_BYTE *)(v134 + 8) = 116;
                v366.m256i_i8[0] = 3;
                v366.m256i_i64[1] = 9;
                v366.m256i_i64[2] = v134;
                v366.m256i_i64[3] = 9;
                sub_140A68320(&v354, v355, v352, &v366);
                if ( v354.m256i_i8[0] != -1 )
                  sub_140032FF0(&v354);
                nullsub_1(v136, v135);
                v137 = (_DWORD *)sub_140001650(7, 1);
                if ( !v137 )
                  sub_14196B2DB(1, 7);
                *(_DWORD *)((char *)v137 + 3) = 1953391988;
                *v137 = 1953394531;
                *(_QWORD *)v352 = 7;
                *(_QWORD *)&v352[8] = v137;
                *(_QWORD *)&v352[16] = 7;
                v362 = 1;
                sub_1407B3D00(&v366, &v331);
                if ( v366.m256i_i8[0] == -1 )
                {
                  v354.m256i_i64[0] = v366.m256i_i64[1];
                  sub_14196B5F0(
                    (unsigned int)aCalledResultUn_11,
                    43,
                    (unsigned int)&v354,
                    (unsigned int)&off_141A52958,
                    (__int64)&off_141A542B0);
                }
                v138 = _mm_loadu_si128((const __m128i *)&v366);
                *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
                *(__m128i *)v354.m256i_i8 = v138;
                v362 = 0;
                sub_140A68320(&v366, v355, v352, &v354);
                if ( v366.m256i_i8[0] != -1 )
                  sub_140032FF0(&v366);
                v337.m256i_i64[3] = *(_QWORD *)&v355[16];
                *(__m128i *)&v337.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v355);
                v337.m256i_i8[0] = 5;
                v139 = v329;
                if ( v329 == v327 )
                  sub_1419397B0(&v327);
                v140 = v328;
                v141 = 32 * v139;
                v142 = _mm_loadu_si128((const __m128i *)&v337);
                *(__m128i *)(v328 + v141 + 16) = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
                *(__m128i *)(v140 + v141) = v142;
                v329 = v139 + 1;
              }
              v143 = v312;
              if ( v312 )
                sub_140001660(v313, v312, 1);
              v144 = *((_QWORD *)&v331 + 1);
              v336 = v332;
              v322 = *((_BYTE **)&v331 + 1);
              v358 = 0;
              while ( v336 != v358 )
              {
                ++v358;
                v145 = v144 + 32;
                sub_1401AB4D0(v144, v143);
                v144 = v145;
              }
              if ( !(_QWORD)v331 )
                goto LABEL_225;
              v129 = *((_QWORD *)&v331 + 1);
              v128 = 32 * v331;
              v146 = 8;
              goto LABEL_224;
            }
            while ( 2 )
            {
              v42 = v41;
              v43 = sub_1416724D0(aId_5, 2, v41);
              v44 = 13;
              v358 = 13;
              v45 = v317;
              if ( v43 )
              {
                v46 = &unk_141A541E3;
                if ( *(_BYTE *)v43 != 3 )
                  goto LABEL_48;
                v44 = *(_QWORD *)(v43 + 24);
                if ( v44 < 0 )
                {
                  v47 = 0;
                  goto LABEL_373;
                }
                v358 = *(_QWORD *)(v43 + 24);
                if ( v44 )
                {
                  v46 = *(void **)(v43 + 16);
                  goto LABEL_48;
                }
                v317 = 1;
                LOBYTE(v4) = 1;
                v358 = 0;
              }
              else
              {
                v46 = &unk_141A541E3;
LABEL_48:
                nullsub_1(v44, v317);
                v47 = 1;
                v48 = v358;
                v49 = sub_140001650(v358, 1);
                if ( !v49 )
                {
                  v45 = v48;
LABEL_373:
                  sub_14196B2DB(v47, v45);
                }
                v317 = v49;
                sub_1419234B0(v49, v46, v48);
                LODWORD(v4) = 0;
              }
              v50 = v42;
              v51 = sub_1416724D0(aFunction_0, 8, v42);
              v52 = v51;
              if ( v51 )
              {
                v53 = sub_1416724D0(aName_6, 4, v51);
                v56 = 4;
                LODWORD(v310) = v4;
                if ( !v53 )
                {
                  v57 = (unsigned __int16 *)&unk_141A53B30;
                  goto LABEL_77;
                }
                v57 = (unsigned __int16 *)&unk_141A53B30;
                if ( *(_BYTE *)v53 != 3 )
                  goto LABEL_77;
                v57 = *(unsigned __int16 **)(v53 + 16);
                v56 = *(_QWORD *)(v53 + 24);
                if ( v56 == 18 )
                {
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_cvtsi32_si128(v57[8]), v11),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v57), si128))) == 0xFFFF )
                    goto LABEL_76;
                  v60 = _byteswap_uint64(*(_QWORD *)v57);
                  v55 = 0x7765625F73656172LL;
                  if ( v60 != 0x7765625F73656172LL
                    || (v60 = _byteswap_uint64(*(_QWORD *)((char *)v57 + 3)),
                        v54 = 0,
                        v55 = 0x5F7365617263685FLL,
                        v60 != 0x5F7365617263685FLL) )
                  {
                    v54 = 2 * (unsigned int)(v55 >= v60) - 1;
                  }
                  v56 = 18;
                }
                else
                {
                  if ( v56 == 10 )
                  {
                    v58 = _byteswap_uint64(*(_QWORD *)v57);
                    v54 = 0x7765625F73656172LL;
                    v59 = 0x7765625F73656172LL;
                    if ( v58 != 0x7765625F73656172LL )
                      goto LABEL_58;
                    v58 = (unsigned __int16)__ROL2__(v57[4], 8);
                    v55 = 0;
                    if ( (unsigned __int16)v58 != 25448 )
                    {
                      v59 = 25448;
LABEL_58:
                      v54 = v58 >= v59;
                      v55 = (unsigned int)(2 * v54 - 1);
                    }
                    v56 = 10;
                    if ( !(_DWORD)v55 )
                    {
LABEL_76:
                      v56 = 10;
                      v57 = (unsigned __int16 *)&unk_141A52378;
                    }
LABEL_77:
                    nullsub_1(v55, v54);
                    v62 = sub_140001650(v56, 1);
                    if ( !v62 )
                      sub_14196B2DB(1, v56);
                    v330 = v62;
                    v336 = v56;
                    sub_1419234B0(v62, v57, v56);
                    v315 = 0;
LABEL_79:
                    v63 = sub_1416724D0(aArguments_0, 9, v52);
                    v64 = 2;
                    if ( v63 )
                    {
                      v65 = asc_141A520D5;
                      if ( *(_BYTE *)v63 == 3 )
                      {
                        v65 = *(const char **)(v63 + 16);
                        v64 = *(_QWORD *)(v63 + 24);
                      }
                    }
                    else
                    {
                      v65 = asc_141A520D5;
                    }
                    v366.m256i_i64[0] = (__int64)v65;
                    v366.m256i_i64[1] = v64;
                    *(_OWORD *)&v366.m256i_u64[2] = 0;
                    v367 = v65;
                    v368 = v64;
                    sub_140D8B500(&v354, (__int128 *)v366.m256i_i8);
                    if ( v354.m256i_i8[0] == -1 )
                    {
                      v366.m256i_i64[0] = v354.m256i_i64[1];
                      v69 = v311;
                      if ( v64 < 0 )
                      {
                        v305 = 0;
                        goto LABEL_413;
                      }
                      if ( v64 )
                      {
                        nullsub_1(v67, v311);
                        v70 = sub_140001650(v64, 1);
                        if ( !v70 )
                        {
                          v69 = v64;
                          v305 = 1;
LABEL_413:
                          sub_14196B2DB(v305, v69);
                        }
                        v311 = v70;
                        sub_1419234B0(v70, v65, v64);
                        v71 = v311;
                      }
                      else
                      {
                        v71 = 1;
                      }
                      v337.m256i_i64[1] = v64;
                      v311 = v71;
                      v337.m256i_i64[2] = v71;
                      v337.m256i_i64[3] = v64;
                      v337.m256i_i8[0] = 3;
                      sub_140032F30(&v366);
                    }
                    else
                    {
                      v68 = _mm_loadu_si128((const __m128i *)&v354);
                      *(__m128i *)&v337.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v354.m256i_u64[2]);
                      *(__m128i *)v337.m256i_i8 = v68;
                    }
                    *(_QWORD *)&v319 = 0;
                    v320 = 0;
                    nullsub_1(v67, v66);
                    v72 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v72 )
                      sub_14196B2DB(1, 4);
                    *v72 = 1701869940;
                    *(_QWORD *)v355 = 4;
                    *(_QWORD *)&v355[8] = v72;
                    *(_QWORD *)&v355[16] = 4;
                    nullsub_1(v74, v73);
                    v75 = (_QWORD *)sub_140001650(8, 1);
                    if ( !v75 )
                      sub_14196B2DB(1, 8);
                    *v75 = 0x6573755F6C6F6F74LL;
                    v366.m256i_i8[0] = 3;
                    v366.m256i_i64[1] = 8;
                    v366.m256i_i64[2] = (__int64)v75;
                    v366.m256i_i64[3] = 8;
                    sub_140A68320(&v354, &v319, v355, &v366);
                    LODWORD(v4) = (_DWORD)v310;
                    if ( v354.m256i_i8[0] != -1 )
                      sub_140032FF0(&v354);
                    nullsub_1(v77, v76);
                    v78 = (_WORD *)sub_140001650(2, 1);
                    if ( !v78 )
                      sub_14196B2DB(1, 2);
                    *v78 = 25705;
                    *(_QWORD *)v355 = 2;
                    *(_QWORD *)&v355[8] = v78;
                    *(_QWORD *)&v355[16] = 2;
                    v81 = 1;
                    if ( !(_BYTE)v4 )
                    {
                      nullsub_1(v80, v79);
                      v4 = v358;
                      v82 = sub_140001650(v358, 1);
                      if ( !v82 )
                      {
                        v348 = 1;
                        sub_14196B2DB(1, v4);
                      }
                      v81 = v82;
                      sub_1419234B0(v82, v317, v4);
                    }
                    v366.m256i_i8[0] = 3;
                    v366.m256i_i64[1] = v358;
                    v366.m256i_i64[2] = v81;
                    v366.m256i_i64[3] = v358;
                    v348 = 0;
                    sub_140A68320(&v354, &v319, v355, &v366);
                    if ( v354.m256i_i8[0] != -1 )
                      sub_140032FF0(&v354);
                    nullsub_1(v84, v83);
                    v85 = (_DWORD *)sub_140001650(4, 1);
                    if ( !v85 )
                      sub_14196B2DB(1, 4);
                    *v85 = 1701667182;
                    *(_QWORD *)v355 = 4;
                    *(_QWORD *)&v355[8] = v85;
                    *(_QWORD *)&v355[16] = 4;
                    v88 = 1;
                    if ( !(_BYTE)v315 )
                    {
                      nullsub_1(v87, v86);
                      v4 = v336;
                      v89 = sub_140001650(v336, 1);
                      if ( !v89 )
                      {
                        v347 = 1;
                        sub_14196B2DB(1, v4);
                      }
                      v88 = v89;
                      sub_1419234B0(v89, v330, v4);
                    }
                    v366.m256i_i8[0] = 3;
                    v366.m256i_i64[1] = v336;
                    v366.m256i_i64[2] = v88;
                    v366.m256i_i64[3] = v336;
                    v347 = 0;
                    sub_140A68320(&v354, &v319, v355, &v366);
                    if ( v354.m256i_i8[0] != -1 )
                      sub_140032FF0(&v354);
                    nullsub_1(v91, v90);
                    v92 = sub_140001650(5, 1);
                    if ( !v92 )
                      sub_14196B2DB(1, 5);
                    *(_BYTE *)(v92 + 4) = 116;
                    *(_DWORD *)v92 = 1970302569;
                    *(_QWORD *)v355 = 5;
                    *(_QWORD *)&v355[8] = v92;
                    *(_QWORD *)&v355[16] = 5;
                    v365 = 1;
                    sub_140B73E90(&v366, &v337);
                    if ( v366.m256i_i8[0] == -1 )
                    {
                      v354.m256i_i64[0] = v366.m256i_i64[1];
                      sub_14196B5F0(
                        (unsigned int)aCalledResultUn_11,
                        43,
                        (unsigned int)&v354,
                        (unsigned int)&off_141A52958,
                        (__int64)&off_141A54250);
                    }
                    v93 = _mm_loadu_si128((const __m128i *)&v366);
                    *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
                    *(__m128i *)v354.m256i_i8 = v93;
                    v365 = 0;
                    sub_140A68320(&v366, &v319, v355, &v354);
                    if ( v366.m256i_i8[0] != -1 )
                      sub_140032FF0(&v366);
                    *(_OWORD *)v366.m256i_i8 = v319;
                    v366.m256i_i64[2] = v320;
                    *(_QWORD *)&v352[23] = v320;
                    *(_OWORD *)&v352[7] = v319;
                    v94 = _mm_loadu_si128((const __m128i *)&v352[15]);
                    *(__m128i *)v354.m256i_i8 = _mm_loadu_si128((const __m128i *)v352);
                    *(__m128i *)((char *)&v354.m256i_u64[1] + 7) = v94;
                    sub_140032FF0(&v337);
                    if ( v336 )
                      sub_140001660(v330, v336, 1);
                    v39 = v358;
                    if ( v358 )
                      sub_140001660(v317, v358, 1);
                    v366.m256i_i8[0] = 5;
                    *(_OWORD *)&v366.m256i_u64[2] = *(_OWORD *)((char *)&v354.m256i_u64[1] + 7);
                    *(__m128i *)&v366.m256i_i8[1] = _mm_load_si128((const __m128i *)&v354);
                    v95 = v332;
                    if ( v332 == (_QWORD)v331 )
                      sub_1419397B0(&v331);
                    v96 = *((_QWORD *)&v331 + 1);
                    v40 = 32 * v95;
                    v97 = _mm_loadu_si128((const __m128i *)&v366);
                    *(__m128i *)(*((_QWORD *)&v331 + 1) + v40 + 16) = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
                    *(__m128i *)(v96 + v40) = v97;
                    v332 = v95 + 1;
LABEL_118:
                    v41 = v50 + 32;
                    if ( v41 == v322 )
                      goto LABEL_152;
                    continue;
                  }
                  if ( v56 <= 0xA )
                  {
                    if ( v56 )
                      goto LABEL_77;
                    v330 = 1;
                    v315 = 1;
                    v336 = 0;
                    goto LABEL_79;
                  }
                  v61 = _byteswap_uint64(*(_QWORD *)v57);
                  v55 = 0x7765625F73656172LL;
                  if ( v61 != 0x7765625F73656172LL
                    || (v61 = _byteswap_uint64(*(_QWORD *)((char *)v57 + 3)),
                        v54 = 0,
                        v55 = 0x5F7365617263685FLL,
                        v61 != 0x5F7365617263685FLL) )
                  {
                    v54 = 2 * (unsigned int)(v55 >= v61) - 1;
                  }
                }
                if ( !(_DWORD)v54 )
                  goto LABEL_76;
                goto LABEL_77;
              }
              break;
            }
            v39 = v358;
            if ( v358 )
              sub_140001660(v317, v358, 1);
            goto LABEL_118;
          }
        }
        else if ( v13 != 6 || *(_DWORD *)v14 ^ 0x74737973 | *((unsigned __int16 *)v14 + 2) ^ 0x6D65 )
        {
LABEL_122:
          v326 = v357;
          sub_140890E30(&v319, &v323);
          *(_QWORD *)v355 = 0;
          *(_QWORD *)&v355[16] = 0;
          nullsub_1(v99, v98);
          v100 = (_DWORD *)sub_140001650(4, 1);
          if ( !v100 )
            sub_14196B2DB(1, 4);
          *v100 = 1701605234;
          *(_QWORD *)v352 = 4;
          *(_QWORD *)&v352[8] = v100;
          *(_QWORD *)&v352[16] = 4;
          nullsub_1(v102, v101);
          v103 = (_DWORD *)sub_140001650(4, 1);
          v358 = (__int64)v103;
          if ( !v103 )
            sub_14196B2DB(1, 4);
          *v103 = 1919251317;
          v366.m256i_i8[0] = 3;
          v366.m256i_i64[1] = 4;
          v366.m256i_i64[2] = (__int64)v103;
          v366.m256i_i64[3] = 4;
          sub_140A68320(&v354, v355, v352, &v366);
          if ( v354.m256i_i8[0] != -1 )
            sub_140032FF0(&v354);
          v106 = v6;
          v107 = v8;
          v108 = a3;
          nullsub_1(v105, v104);
          v109 = (_DWORD *)sub_140001650(7, 1);
          if ( !v109 )
            sub_14196B2DB(1, 7);
          *(_DWORD *)((char *)v109 + 3) = 1953391988;
          *v109 = 1953394531;
          *(_QWORD *)v352 = 7;
          *(_QWORD *)&v352[8] = v109;
          *(_QWORD *)&v352[16] = 7;
          v112 = v320;
          if ( v320 < 0 )
          {
            v114 = 0;
LABEL_259:
            v351 = 1;
            sub_14196B2DB(v114, v112);
          }
          v113 = *((_QWORD *)&v319 + 1);
          if ( v320 )
          {
            nullsub_1(v111, v110);
            v114 = 1;
            v115 = sub_140001650(v112, 1);
            if ( !v115 )
              goto LABEL_259;
            v116 = v115;
            sub_1419234B0(v115, v113, v112);
          }
          else
          {
            v116 = 1;
          }
          v366.m256i_i8[0] = 3;
          v366.m256i_i64[1] = v112;
          v366.m256i_i64[2] = v116;
          v366.m256i_i64[3] = v112;
          v351 = 0;
          sub_140A68320(&v354, v355, v352, &v366);
          v4 = v108;
          v8 = v107;
          v6 = v106;
          if ( v354.m256i_i8[0] != -1 )
            sub_140032FF0(&v354);
          v337.m256i_i64[3] = *(_QWORD *)&v355[16];
          *(__m128i *)&v337.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v355);
          v337.m256i_i8[0] = 5;
          v119 = v329;
          if ( v329 == v327 )
            sub_1419397B0(&v327);
          v120 = v328;
          v121 = 32 * v119;
          v122 = _mm_loadu_si128((const __m128i *)&v337);
          *(__m128i *)(v328 + v121 + 16) = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
          *(__m128i *)(v120 + v121) = v122;
          v329 = v119 + 1;
          if ( (_QWORD)v319 )
            sub_140001660(v113, v319, 1);
          a3 = v4;
          goto LABEL_225;
        }
        v326 = v357;
        sub_140890E30(v352, &v323);
        if ( v357 != -1 )
        {
          if ( *(_QWORD *)&v352[16] )
          {
            LODWORD(v4) = v6;
            v337.m256i_i64[0] = v357;
            v337.m256i_i64[1] = v335;
            v337.m256i_i64[2] = v309;
            v366.m256i_i64[0] = (__int64)&v337;
            v366.m256i_i64[1] = (__int64)sub_1400015F0;
            v366.m256i_i64[2] = (__int64)v352;
            v366.m256i_i64[3] = (__int64)sub_1400015F0;
            sub_1416DAFA0(&v354, &unk_141A542C8, &v366);
            v117 = *(_OWORD *)v354.m256i_i8;
            v118 = v354.m256i_i64[2];
            if ( v337.m256i_i64[0] )
              sub_140001660(v337.m256i_i64[1], v337.m256i_i64[0], 1);
            if ( v118 )
            {
              v335 = v117 >> 64;
              v357 = v117;
              v309 = v118;
            }
            else
            {
              v357 = -1;
              if ( (_QWORD)v117 )
                sub_140001660(*((_QWORD *)&v117 + 1), v117, 1);
            }
          }
          v128 = *(_QWORD *)v352;
          if ( !*(_QWORD *)v352 )
            goto LABEL_225;
          v129 = *(_QWORD *)&v352[8];
          v146 = 1;
          goto LABEL_224;
        }
        v129 = *(_QWORD *)&v352[8];
        v128 = *(_QWORD *)v352;
        if ( *(_QWORD *)&v352[16] )
        {
          v335 = *(_QWORD *)&v352[8];
          v357 = *(_QWORD *)v352;
          v309 = *(_QWORD *)&v352[16];
        }
        else
        {
          v357 = -1;
          if ( *(_QWORD *)v352 )
          {
            v146 = 1;
LABEL_224:
            sub_140001660(v129, v128, v146);
          }
        }
LABEL_225:
        v333 = v335;
        v334 = v357;
        v370 = 1;
        sub_140032FF0(&v323);
        v8 += 2;
        if ( v8 == v353 )
          goto LABEL_272;
      }
      if ( *(_DWORD *)v14 != 1819242356 )
        goto LABEL_122;
      v326 = v357;
      v123 = sub_1416724D0(aToolCallId, 12, v8);
      v126 = 12;
      if ( v123 )
      {
        v127 = &unk_141A53B24;
        if ( *(_BYTE *)v123 == 3 )
        {
          v126 = *(_QWORD *)(v123 + 24);
          if ( v126 < 0 )
          {
            v147 = 0;
            goto LABEL_276;
          }
          if ( !v126 )
          {
            v316 = 1;
            v149 = 1;
            v358 = 0;
            goto LABEL_178;
          }
          v127 = *(void **)(v123 + 16);
        }
      }
      else
      {
        v127 = &unk_141A53B24;
      }
      nullsub_1(v125, v124);
      v147 = 1;
      v148 = sub_140001650(v126, 1);
      if ( v148 )
      {
        v316 = v148;
        v358 = v126;
        sub_1419234B0(v148, v127, v126);
        v149 = 0;
LABEL_178:
        sub_140890E30(&v337, &v323);
        v152 = v337.m256i_i64[2];
        if ( v337.m256i_i64[2] )
        {
          v330 = v337.m256i_i64[1];
          v336 = v337.m256i_i64[0];
        }
        else
        {
          if ( v323 )
          {
            v354.m256i_i64[0] = 0;
            *(_OWORD *)&v354.m256i_u64[1] = 1u;
            v366.m256i_i64[2] = 1610612768;
            v366.m256i_i64[0] = (__int64)&v354;
            v366.m256i_i64[1] = (__int64)&off_141A55F58;
            if ( (unsigned __int8)sub_14166C3A0(&v323, &v366) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_4,
                55,
                (unsigned int)&v318,
                (unsigned int)&unk_141A52978,
                (__int64)&off_141A56010);
            v330 = v354.m256i_i64[1];
            v336 = v354.m256i_i64[0];
            v152 = v354.m256i_i64[2];
          }
          else
          {
            v330 = 1;
            v152 = 0;
            v336 = 0;
          }
          v150 = v337.m256i_i64[0];
          if ( v337.m256i_i64[0] )
            sub_140001660(v337.m256i_i64[1], v337.m256i_i64[0], 1);
        }
        *(_QWORD *)&v331 = 0;
        v332 = 0;
        nullsub_1(v151, v150);
        v153 = (_DWORD *)sub_140001650(4, 1);
        if ( !v153 )
          sub_14196B2DB(1, 4);
        *v153 = 1701605234;
        *(_QWORD *)v352 = 4;
        *(_QWORD *)&v352[8] = v153;
        *(_QWORD *)&v352[16] = 4;
        nullsub_1(v155, v154);
        v156 = (_DWORD *)sub_140001650(4, 1);
        v322 = v156;
        if ( !v156 )
          sub_14196B2DB(1, 4);
        *v156 = 1919251317;
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = 4;
        v366.m256i_i64[2] = (__int64)v156;
        v366.m256i_i64[3] = 4;
        sub_140A68320(&v354, &v331, v352, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        nullsub_1(v158, v157);
        v159 = (_DWORD *)sub_140001650(7, 1);
        if ( !v159 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v159 + 3) = 1953391988;
        *v159 = 1953394531;
        v312 = 7;
        v313 = v159;
        v314 = 7;
        nullsub_1(v161, v160);
        v162 = sub_140001650(32, 8);
        if ( !v162 )
        {
          v356 = 1;
          sub_14196B2C1(8, 32);
        }
        v165 = (_BYTE *)v162;
        *(_QWORD *)&v319 = 0;
        v320 = 0;
        nullsub_1(v164, v163);
        v166 = (_DWORD *)sub_140001650(4, 1);
        v322 = v165;
        if ( !v166 )
          sub_14196B2DB(1, 4);
        *v166 = 1701869940;
        *(_QWORD *)v355 = 4;
        *(_QWORD *)&v355[8] = v166;
        *(_QWORD *)&v355[16] = 4;
        nullsub_1(v168, v167);
        v169 = (void *)sub_140001650(11, 1);
        v310 = v169;
        if ( !v169 )
          sub_14196B2DB(1, 11);
        qmemcpy(v169, "tool_result", 11);
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = 11;
        v366.m256i_i64[2] = (__int64)v169;
        v366.m256i_i64[3] = 11;
        sub_140A68320(&v354, &v319, v355, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        nullsub_1(v171, v170);
        v172 = (void *)sub_140001650(11, 1);
        if ( !v172 )
          sub_14196B2DB(1, 11);
        qmemcpy(v172, "tool_use_id", 11);
        *(_QWORD *)v355 = 11;
        *(_QWORD *)&v355[8] = v172;
        *(_QWORD *)&v355[16] = 11;
        v174 = 1;
        v210 = v149 == 0;
        v175 = v358;
        if ( v210 )
        {
          nullsub_1(0x6573755F6C6F6F74LL, v173);
          v176 = sub_140001650(v175, 1);
          if ( !v176 )
          {
            v350 = 1;
            sub_14196B2DB(1, v175);
          }
          v174 = v176;
          sub_1419234B0(v176, v316, v175);
        }
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = v175;
        v366.m256i_i64[2] = v174;
        v366.m256i_i64[3] = v175;
        v350 = 0;
        sub_140A68320(&v354, &v319, v355, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        nullsub_1(v178, v177);
        v179 = (_DWORD *)sub_140001650(7, 1);
        if ( !v179 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v179 + 3) = 1953391988;
        *v179 = 1953394531;
        *(_QWORD *)v355 = 7;
        *(_QWORD *)&v355[8] = v179;
        *(_QWORD *)&v355[16] = 7;
        if ( v152 < 0 )
        {
          v182 = 0;
LABEL_274:
          v349 = 1;
          sub_14196B2DB(v182, v152);
        }
        if ( v152 )
        {
          nullsub_1(v181, v180);
          v182 = 1;
          v183 = sub_140001650(v152, 1);
          if ( !v183 )
            goto LABEL_274;
          v4 = v183;
          sub_1419234B0(v183, v330, v152);
        }
        else
        {
          v4 = 1;
        }
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = v152;
        v366.m256i_i64[2] = v4;
        v366.m256i_i64[3] = v152;
        v349 = 0;
        sub_140A68320(&v354, &v319, v355, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        v366.m256i_i64[0] = v319;
        *(_QWORD *)&v352[23] = v320;
        *(_OWORD *)&v352[7] = v319;
        v184 = (__int64)v322;
        *v322 = 5;
        v185 = *(_OWORD *)v352;
        *(_OWORD *)(v184 + 16) = *(_OWORD *)&v352[15];
        *(_OWORD *)(v184 + 1) = v185;
        v366.m256i_i64[1] = 1;
        v366.m256i_i64[2] = v184;
        v366.m256i_i64[3] = 1;
        v366.m256i_i8[0] = 4;
        v356 = 0;
        sub_140A68320(&v354, &v331, &v312, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        v337.m256i_i64[3] = v332;
        *(_OWORD *)&v337.m256i_u64[1] = v331;
        v337.m256i_i8[0] = 5;
        v186 = v329;
        if ( v329 == v327 )
          sub_1419397B0(&v327);
        v187 = v328;
        v188 = 32 * v186;
        v189 = _mm_loadu_si128((const __m128i *)&v337);
        *(__m128i *)(v328 + v188 + 16) = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
        *(__m128i *)(v187 + v188) = v189;
        v329 = v186 + 1;
        if ( v336 )
          sub_140001660(v330, v336, 1);
        v128 = v358;
        if ( !v358 )
          goto LABEL_225;
        v146 = 1;
        v129 = v316;
        goto LABEL_224;
      }
      v316 = v126;
LABEL_276:
      v326 = v357;
      sub_14196B2DB(v147, v316);
    }
LABEL_272:
    v7 = v335;
  }
  v335 = v7;
  v333 = v7;
  v334 = v357;
  v370 = 1;
  v206 = sub_1416724D0(aModel_2, 5, v6);
  if ( v206 )
  {
    v209 = v321;
    if ( *(_BYTE *)v206 == 3 )
    {
      v209 = *(_QWORD *)(v206 + 24);
      a3 = *(_QWORD *)(v206 + 16);
    }
    v210 = v209 == 0;
    if ( v209 < 0 )
      goto LABEL_252;
  }
  else
  {
    v209 = v321;
    v210 = v321 == 0;
    if ( v321 < 0 )
    {
LABEL_252:
      v211 = 0;
      goto LABEL_253;
    }
  }
  v321 = v209;
  if ( v210 )
  {
    v358 = 1;
  }
  else
  {
    nullsub_1(v208, v207);
    v211 = 1;
    v212 = sub_140001650(v209, 1);
    if ( !v212 )
    {
LABEL_253:
      v333 = v335;
      v334 = v357;
      v370 = 1;
      sub_14196B2DB(v211, v209);
    }
    v358 = v212;
    sub_1419234B0(v212, a3, v209);
  }
  v369 = 1;
  v213 = sub_1416724D0("max_tokens", 10, v6);
  if ( v213 || (v369 = 1, (v213 = sub_1416724D0(aMaxCompletionT, 21, v6)) != 0) )
  {
    v216 = *(_BYTE *)v213;
    switch ( *(_BYTE *)v213 )
    {
      case 0:
        break;
      case 1:
        v366.m256i_i8[1] = *(_BYTE *)(v213 + 1);
        break;
      case 2:
        *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v213 + 8));
        break;
      case 3:
        v369 = 1;
        sub_1416DB410(&v366.m256i_u64[1], v213 + 8);
        break;
      case 4:
        v217 = *(_QWORD *)(v213 + 16);
        v218 = *(_QWORD *)(v213 + 24);
        v369 = 1;
        sub_1401C07A0(&v366.m256i_u64[1], v217, v218);
        break;
      case 5:
        if ( *(_QWORD *)(v213 + 24) )
        {
          v219 = *(_QWORD *)(v213 + 8);
          if ( !v219 )
          {
            v369 = 1;
            sub_14196B5D0(&off_141A6CB98);
          }
          v220 = *(_QWORD *)(v213 + 16);
          v369 = 1;
          sub_140A21590(&v366.m256i_u64[1], v219, v220);
        }
        else
        {
          v366.m256i_i64[1] = 0;
          v366.m256i_i64[3] = 0;
        }
        break;
    }
    v325 = *(_OWORD *)&v366.m256i_u64[2];
    v324[0] = v366.m256i_i8[1];
    *(_DWORD *)&v324[1] = *(__int32 *)((char *)v366.m256i_i32 + 2);
    *(_WORD *)&v324[5] = v366.m256i_i16[3];
    *(_QWORD *)&v324[7] = v366.m256i_i64[1];
    LOBYTE(v325) = v366.m256i_i8[16];
    v366.m256i_i8[0] = 2;
    v366.m256i_i64[1] = 0;
    v366.m256i_i64[2] = 1024;
    v323 = v216;
    v369 = 1;
    sub_140032FF0(&v366);
  }
  else
  {
    v366.m256i_i8[0] = 2;
    v366.m256i_i64[1] = 0;
    v366.m256i_i64[2] = 1024;
    v323 = 2;
    *(_DWORD *)v324 = *(__int32 *)((char *)v366.m256i_i32 + 1);
    *(_WORD *)&v324[4] = *(__int16 *)((char *)&v366.m256i_i16[2] + 1);
    v324[6] = v366.m256i_i8[7];
    *(_QWORD *)&v324[7] = 0;
    v325 = __PAIR128__(v366.m256i_u64[3], 1024);
  }
  *(_QWORD *)v352 = 0;
  *(_QWORD *)&v352[16] = 0;
  nullsub_1(v215, v214);
  v221 = 1;
  v222 = sub_140001650(5, 1);
  if ( !v222 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v222 + 4) = 108;
  *(_DWORD *)v222 = 1701080941;
  v337.m256i_i64[0] = 5;
  v337.m256i_i64[1] = v222;
  v337.m256i_i64[2] = 5;
  v225 = v321;
  if ( v321 )
  {
    nullsub_1(v224, v223);
    v226 = sub_140001650(v225, 1);
    if ( !v226 )
    {
      v346 = 1;
      sub_14196B2DB(1, v225);
    }
    v221 = v226;
    sub_1419234B0(v226, v358, v225);
  }
  v366.m256i_i8[0] = 3;
  v366.m256i_i64[1] = v225;
  v366.m256i_i64[2] = v221;
  v366.m256i_i64[3] = v225;
  v346 = 0;
  sub_140A68320(&v354, v352, &v337, &v366);
  if ( v354.m256i_i8[0] != -1 )
    sub_140032FF0(&v354);
  nullsub_1(v228, v227);
  v229 = (_QWORD *)sub_140001650(8, 1);
  if ( !v229 )
    sub_14196B2DB(1, 8);
  *v229 = 0x736567617373656DLL;
  v337.m256i_i64[0] = 8;
  v337.m256i_i64[1] = (__int64)v229;
  v337.m256i_i64[2] = 8;
  v361 = 1;
  sub_1407B3D00(&v366, &v327);
  if ( v366.m256i_i8[0] == -1 )
  {
    v354.m256i_i64[0] = v366.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v354,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A54190);
  }
  v230 = _mm_loadu_si128((const __m128i *)&v366);
  *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
  *(__m128i *)v354.m256i_i8 = v230;
  v361 = 0;
  sub_140A68320(&v366, v352, &v337, &v354);
  if ( v366.m256i_i8[0] != -1 )
    sub_140032FF0(&v366);
  nullsub_1(v232, v231);
  v233 = (void *)sub_140001650(10, 1);
  if ( !v233 )
    sub_14196B2DB(1, 10);
  qmemcpy(v233, "max_tokens", 10);
  v337.m256i_i64[0] = 10;
  v337.m256i_i64[1] = (__int64)v233;
  v337.m256i_i64[2] = 10;
  v360 = 1;
  sub_140B73E90(&v366, &v323);
  if ( v366.m256i_i8[0] == -1 )
  {
    v354.m256i_i64[0] = v366.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v354,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A54190);
  }
  v234 = _mm_loadu_si128((const __m128i *)&v366);
  *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
  *(__m128i *)v354.m256i_i8 = v234;
  v360 = 0;
  sub_140A68320(&v366, v352, &v337, &v354);
  if ( v366.m256i_i8[0] != -1 )
    sub_140032FF0(&v366);
  *(__m128i *)&v337.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v352);
  v337.m256i_i64[3] = *(_QWORD *)&v352[16];
  v337.m256i_i8[0] = 5;
  LOBYTE(v336) = v357 == -1;
  if ( v357 != -1 )
  {
    v366.m256i_i64[1] = v357;
    v366.m256i_i64[2] = v335;
    v366.m256i_i64[3] = v309;
    v366.m256i_i8[0] = 3;
    v345 = 1;
    v353 = (__m128i *)sub_1416725D0(aSystem_0, 6, &v337);
    sub_140032FF0(v353);
    v235 = _mm_loadu_si128((const __m128i *)&v366);
    v236 = v353;
    v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
    *v236 = v235;
  }
  v237 = sub_1416724D0(aStream_1, 6, v6);
  if ( v237 )
  {
    v238 = *(_BYTE *)v237;
    switch ( *(_BYTE *)v237 )
    {
      case 0:
        break;
      case 1:
        v366.m256i_i8[1] = *(_BYTE *)(v237 + 1);
        break;
      case 2:
        *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v237 + 8));
        break;
      case 3:
        sub_1416DB410(&v366.m256i_u64[1], v237 + 8);
        break;
      case 4:
        sub_1401C07A0(&v366.m256i_u64[1], *(_QWORD *)(v237 + 16), *(_QWORD *)(v237 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v237 + 24) )
        {
          v239 = *(_QWORD *)(v237 + 8);
          if ( !v239 )
            sub_14196B5D0(&off_141A6CB98);
          sub_140A21590(&v366.m256i_u64[1], v239, *(_QWORD *)(v237 + 16));
        }
        else
        {
          v366.m256i_i64[1] = 0;
          v366.m256i_i64[3] = 0;
        }
        break;
    }
    v366.m256i_i8[0] = v238;
    v344 = 1;
    v353 = (__m128i *)sub_1416725D0(aStream_1, 6, &v337);
    sub_140032FF0(v353);
    v240 = _mm_loadu_si128((const __m128i *)&v366);
    v241 = v353;
    v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
    *v241 = v240;
  }
  v242 = sub_1416724D0(aTemperature, 11, v6);
  if ( v242 )
  {
    v243 = *(_BYTE *)v242;
    switch ( *(_BYTE *)v242 )
    {
      case 0:
        break;
      case 1:
        v366.m256i_i8[1] = *(_BYTE *)(v242 + 1);
        break;
      case 2:
        *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v242 + 8));
        break;
      case 3:
        sub_1416DB410(&v366.m256i_u64[1], v242 + 8);
        break;
      case 4:
        sub_1401C07A0(&v366.m256i_u64[1], *(_QWORD *)(v242 + 16), *(_QWORD *)(v242 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v242 + 24) )
        {
          v244 = *(_QWORD *)(v242 + 8);
          if ( !v244 )
            sub_14196B5D0(&off_141A6CB98);
          sub_140A21590(&v366.m256i_u64[1], v244, *(_QWORD *)(v242 + 16));
        }
        else
        {
          v366.m256i_i64[1] = 0;
          v366.m256i_i64[3] = 0;
        }
        break;
    }
    v366.m256i_i8[0] = v243;
    v343 = 1;
    v353 = (__m128i *)sub_1416725D0(aTemperature, 11, &v337);
    sub_140032FF0(v353);
    v245 = _mm_loadu_si128((const __m128i *)&v366);
    v246 = v353;
    v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
    *v246 = v245;
  }
  v247 = sub_1416724D0(aTopP, 5, v6);
  if ( v247 )
  {
    v248 = *(_BYTE *)v247;
    switch ( *(_BYTE *)v247 )
    {
      case 0:
        break;
      case 1:
        v366.m256i_i8[1] = *(_BYTE *)(v247 + 1);
        break;
      case 2:
        *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v247 + 8));
        break;
      case 3:
        sub_1416DB410(&v366.m256i_u64[1], v247 + 8);
        break;
      case 4:
        sub_1401C07A0(&v366.m256i_u64[1], *(_QWORD *)(v247 + 16), *(_QWORD *)(v247 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v247 + 24) )
        {
          v249 = *(_QWORD *)(v247 + 8);
          if ( !v249 )
            sub_14196B5D0(&off_141A6CB98);
          sub_140A21590(&v366.m256i_u64[1], v249, *(_QWORD *)(v247 + 16));
        }
        else
        {
          v366.m256i_i64[1] = 0;
          v366.m256i_i64[3] = 0;
        }
        break;
    }
    v366.m256i_i8[0] = v248;
    v342 = 1;
    v353 = (__m128i *)sub_1416725D0(aTopP, 5, &v337);
    sub_140032FF0(v353);
    v250 = _mm_loadu_si128((const __m128i *)&v366);
    v251 = v353;
    v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
    *v251 = v250;
  }
  v252 = sub_1416724D0(aStop, 4, v6);
  if ( v252 )
  {
    v253 = *(_BYTE *)v252;
    switch ( *(_BYTE *)v252 )
    {
      case 0:
        break;
      case 1:
        v366.m256i_i8[1] = *(_BYTE *)(v252 + 1);
        break;
      case 2:
        *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v252 + 8));
        break;
      case 3:
        sub_1416DB410(&v366.m256i_u64[1], v252 + 8);
        break;
      case 4:
        sub_1401C07A0(&v366.m256i_u64[1], *(_QWORD *)(v252 + 16), *(_QWORD *)(v252 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v252 + 24) )
        {
          v254 = *(_QWORD *)(v252 + 8);
          if ( !v254 )
            sub_14196B5D0(&off_141A6CB98);
          sub_140A21590(&v366.m256i_u64[1], v254, *(_QWORD *)(v252 + 16));
        }
        else
        {
          v366.m256i_i64[1] = 0;
          v366.m256i_i64[3] = 0;
        }
        break;
    }
    v366.m256i_i8[0] = v253;
    v341 = 1;
    v353 = (__m128i *)sub_1416725D0(aStopSequences, 14, &v337);
    sub_140032FF0(v353);
    v255 = _mm_loadu_si128((const __m128i *)&v366);
    v256 = v353;
    v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
    *v256 = v255;
  }
  v257 = sub_1416724D0(aTools_2, 5, v6);
  if ( v257 && *(_BYTE *)v257 == 4 )
  {
    sub_14020DC90(&v354, *(_QWORD *)(v257 + 16), *(_QWORD *)(v257 + 16) + 32LL * *(_QWORD *)(v257 + 24));
    if ( v354.m256i_i64[2] )
    {
      v366.m256i_i64[3] = v354.m256i_i64[2];
      *(__m128i *)&v366.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v354);
      v366.m256i_i8[0] = 4;
      v340 = 1;
      v353 = (__m128i *)sub_1416725D0(aTools_2, 5, &v337);
      sub_140032FF0(v353);
      v258 = _mm_loadu_si128((const __m128i *)&v366);
      v259 = v353;
      v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
      *v259 = v258;
    }
    else if ( v354.m256i_i64[0] )
    {
      sub_140001660(v354.m256i_i64[1], 32 * v354.m256i_i64[0], 8);
    }
  }
  v260 = (unsigned __int8 *)sub_1416724D0(aToolChoice_0, 11, v6);
  if ( !v260 )
    goto LABEL_404;
  v262 = *v260;
  if ( v262 == 5 )
  {
    v269 = sub_1416724D0(aFunction_0, 8, v260);
    if ( !v269 )
      goto LABEL_404;
    v270 = sub_1416724D0(aName_6, 4, v269);
    if ( !v270 || *(_BYTE *)v270 != 3 )
      goto LABEL_404;
    v273 = *(unsigned __int16 **)(v270 + 16);
    v274 = *(_QWORD *)(v270 + 24);
    if ( v274 == 18 )
    {
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(v273[8]), (__m128i)xmmword_141A50590),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v273), (__m128i)xmmword_141A50580))) == 0xFFFF )
      {
LABEL_388:
        v273 = (unsigned __int16 *)&unk_141A52378;
        v274 = 10;
LABEL_389:
        *(_QWORD *)v355 = 0;
        *(_QWORD *)&v355[16] = 0;
        nullsub_1(v272, v271);
        v285 = (_DWORD *)sub_140001650(4, 1);
        if ( !v285 )
          sub_14196B2DB(1, 4);
        *v285 = 1701869940;
        *(_QWORD *)v352 = 4;
        *(_QWORD *)&v352[8] = v285;
        *(_QWORD *)&v352[16] = 4;
        nullsub_1(v287, v286);
        v288 = (__m128i *)sub_140001650(4, 1);
        v353 = v288;
        if ( !v288 )
          sub_14196B2DB(1, 4);
        v288->m128i_i32[0] = 1819242356;
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = 4;
        v366.m256i_i64[2] = (__int64)v288;
        v366.m256i_i64[3] = 4;
        sub_140A68320(&v354, v355, v352, &v366);
        if ( v354.m256i_i8[0] != -1 )
          sub_140032FF0(&v354);
        nullsub_1(v290, v289);
        v291 = (_DWORD *)sub_140001650(4, 1);
        if ( !v291 )
          sub_14196B2DB(1, 4);
        *v291 = 1701667182;
        *(_QWORD *)v352 = 4;
        *(_QWORD *)&v352[8] = v291;
        *(_QWORD *)&v352[16] = 4;
        if ( v274 < 0 )
        {
          v294 = 0;
          goto LABEL_396;
        }
        if ( v274 )
        {
          nullsub_1(v293, v292);
          v294 = 1;
          v295 = sub_140001650(v274, 1);
          if ( !v295 )
          {
LABEL_396:
            v339 = 1;
            sub_14196B2DB(v294, v274);
          }
          v296 = v295;
          sub_1419234B0(v295, v273, v274);
        }
        else
        {
          v296 = 1;
        }
        v366.m256i_i8[0] = 3;
        v366.m256i_i64[1] = v274;
        v366.m256i_i64[2] = v296;
        v366.m256i_i64[3] = v274;
        v339 = 0;
        sub_140A68320(&v354, v355, v352, &v366);
        if ( v354.m256i_i8[0] != -1 )
LABEL_402:
          sub_140032FF0(&v354);
LABEL_403:
        *(_OWORD *)&v306[7] = *(_OWORD *)v355;
        v307 = *(_QWORD *)&v355[16];
        v366.m256i_i8[0] = 5;
        *(__m128i *)&v366.m256i_i8[1] = _mm_loadu_si128((const __m128i *)v306);
        *(_OWORD *)&v366.m256i_u64[2] = *(_OWORD *)&v355[8];
        v338 = 1;
        v353 = (__m128i *)sub_1416725D0(aToolChoice_0, 11, &v337);
        sub_140032FF0(v353);
        v297 = _mm_loadu_si128((const __m128i *)&v366);
        v298 = v353;
        v353[1] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
        *v298 = v297;
        goto LABEL_404;
      }
      v283 = _byteswap_uint64(*(_QWORD *)v273);
      v272 = 0x7765625F73656172LL;
      if ( v283 != 0x7765625F73656172LL
        || (v283 = _byteswap_uint64(*(_QWORD *)((char *)v273 + 3)),
            v272 = 0x5F7365617263685FLL,
            v271 = 0,
            v283 != 0x5F7365617263685FLL) )
      {
        v271 = 2 * (unsigned int)(v272 >= v283) - 1;
      }
      v274 = 18;
    }
    else
    {
      if ( v274 == 10 )
      {
        v275 = _byteswap_uint64(*(_QWORD *)v273);
        v276 = 0x7765625F73656172LL;
        if ( v275 == 0x7765625F73656172LL )
        {
          v275 = (unsigned __int16)__ROL2__(v273[4], 8);
          v272 = 0;
          if ( (unsigned __int16)v275 == 25448 )
            goto LABEL_364;
          v276 = 25448;
        }
        v271 = v275 >= v276;
        v272 = (unsigned int)(2 * v271 - 1);
LABEL_364:
        v274 = 10;
        if ( (_DWORD)v272 )
          goto LABEL_389;
        goto LABEL_388;
      }
      if ( (unsigned __int64)v274 <= 0xA )
        goto LABEL_389;
      v284 = _byteswap_uint64(*(_QWORD *)v273);
      v272 = 0x7765625F73656172LL;
      if ( v284 != 0x7765625F73656172LL
        || (v284 = _byteswap_uint64(*(_QWORD *)((char *)v273 + 3)),
            v272 = 0x5F7365617263685FLL,
            v271 = 0,
            v284 != 0x5F7365617263685FLL) )
      {
        v271 = 2 * (unsigned int)(v272 >= v284) - 1;
      }
    }
    if ( (_DWORD)v271 )
      goto LABEL_389;
    goto LABEL_388;
  }
  if ( v262 != 3 )
    goto LABEL_404;
  v263 = *((_DWORD **)v260 + 2);
  v264 = *((_QWORD *)v260 + 3);
  if ( v264 == 4 )
  {
    if ( *v263 != 1869903201 )
    {
      if ( *v263 != 1701736302 )
        goto LABEL_404;
      *(_QWORD *)v355 = 0;
      *(_QWORD *)&v355[16] = 0;
      nullsub_1(v263, v261);
      v277 = (_DWORD *)sub_140001650(4, 1);
      if ( !v277 )
        sub_14196B2DB(1, 4);
      *v277 = 1701869940;
      *(_QWORD *)v352 = 4;
      *(_QWORD *)&v352[8] = v277;
      *(_QWORD *)&v352[16] = 4;
      v359 = 1;
      sub_140B72ED0((__int64)&v366, (__int64 *)&off_141A54150);
      if ( v366.m256i_i8[0] == -1 )
      {
        v354.m256i_i64[0] = v366.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_11,
          43,
          (unsigned int)&v354,
          (unsigned int)&off_141A52958,
          (__int64)&off_141A54160);
      }
      v278 = _mm_loadu_si128((const __m128i *)&v366);
      *(__m128i *)&v354.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v366.m256i_u64[2]);
      *(__m128i *)v354.m256i_i8 = v278;
      v359 = 0;
      sub_140A68320(&v366, v355, v352, &v354);
      if ( v366.m256i_i8[0] != -1 )
        sub_140032FF0(&v366);
      goto LABEL_403;
    }
    *(_QWORD *)v355 = 0;
    *(_QWORD *)&v355[16] = 0;
    nullsub_1(v263, v261);
    v279 = (_DWORD *)sub_140001650(4, 1);
    if ( !v279 )
      sub_14196B2DB(1, 4);
    *v279 = 1701869940;
    *(_QWORD *)v352 = 4;
    *(_QWORD *)&v352[8] = v279;
    *(_QWORD *)&v352[16] = 4;
    nullsub_1(v281, v280);
    v282 = (__m128i *)sub_140001650(4, 1);
    v353 = v282;
    if ( !v282 )
      sub_14196B2DB(1, 4);
    v282->m128i_i32[0] = 1869903201;
    v366.m256i_i8[0] = 3;
    v366.m256i_i64[1] = 4;
    v366.m256i_i64[2] = (__int64)v282;
    v366.m256i_i64[3] = 4;
    sub_140A68320(&v354, v355, v352, &v366);
    if ( v354.m256i_i8[0] != -1 )
      goto LABEL_402;
    goto LABEL_403;
  }
  if ( v264 == 8 && *(_QWORD *)v263 == 0x6465726975716572LL )
  {
    *(_QWORD *)v355 = 0;
    *(_QWORD *)&v355[16] = 0;
    nullsub_1(v263, v261);
    v265 = (_DWORD *)sub_140001650(4, 1);
    if ( !v265 )
      sub_14196B2DB(1, 4);
    *v265 = 1701869940;
    *(_QWORD *)v352 = 4;
    *(_QWORD *)&v352[8] = v265;
    *(_QWORD *)&v352[16] = 4;
    nullsub_1(v267, v266);
    v268 = sub_140001650(3, 1);
    v353 = (__m128i *)v268;
    if ( !v268 )
      sub_14196B2DB(1, 3);
    *(_BYTE *)(v268 + 2) = 121;
    *(_WORD *)v268 = 28257;
    v366.m256i_i8[0] = 3;
    v366.m256i_i64[1] = 3;
    v366.m256i_i64[2] = v268;
    v366.m256i_i64[3] = 3;
    sub_140A68320(&v354, v355, v352, &v366);
    if ( v354.m256i_i8[0] == -1 )
      goto LABEL_403;
    goto LABEL_402;
  }
LABEL_404:
  v299 = _mm_loadu_si128((const __m128i *)&v337);
  v300 = v308;
  v308[1] = _mm_loadu_si128((const __m128i *)&v337.m256i_u64[2]);
  *v300 = v299;
  v369 = v336;
  sub_140032FF0(&v323);
  v301 = v321;
  if ( v321 )
    sub_140001660(v358, v321, 1);
  v302 = v328;
  v335 = v329;
  v357 = 0;
  v321 = v328;
  while ( v335 != v357 )
  {
    ++v357;
    v303 = v302 + 32;
    sub_1401AB4D0(v302, v301);
    v302 = v303;
  }
  if ( v327 )
    sub_140001660(v328, 32 * v327, 8);
  return v308;
}
