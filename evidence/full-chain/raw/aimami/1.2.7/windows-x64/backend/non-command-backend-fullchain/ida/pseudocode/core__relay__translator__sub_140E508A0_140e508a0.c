// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e508a0 | name sub_140E508A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
const __m128i *__fastcall sub_140E508A0(__int64 a1, __int64 a2, _DWORD *a3, int a4, _QWORD *a5)
{
  __int128 v5; // rdi
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rcx
  const __m128i *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r13
  const __m128i *v15; // rax
  __m128i *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  const __m128i *v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r15
  const __m128i *v27; // r12
  __int64 v28; // r13
  __m128i *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  _OWORD *v35; // rax
  __int64 v36; // rcx
  __m128i *v37; // rax
  __int64 v38; // r12
  unsigned __int64 v39; // rsi
  __int64 v40; // r14
  const __m128i *v41; // rbx
  signed __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // r12
  __m128i *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r15
  const __m128i *result; // rax
  _DWORD *v54; // rax
  __int64 v55; // rcx
  __m128i *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  void *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // r15d
  __int64 v64; // rdi
  __int64 v65; // r12
  __m128i *v66; // rax
  __int64 v67; // rbx
  __m128i *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rax
  __m128i *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  _WORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rbx
  __m128i *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rcx
  void *v83; // rax
  __int64 v84; // rcx
  __m128i *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r12
  __m128i *v88; // rax
  __int64 v89; // r13
  _DWORD *v90; // rax
  __int64 v91; // rcx
  __m128i *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r14
  __int64 v99; // rcx
  __m128i *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  _DWORD *v104; // rax
  __int64 v105; // rcx
  __int128 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  const __m128i *v109; // rbx
  _DWORD *v110; // rax
  __int64 v111; // rcx
  __m128i *v112; // rax
  __int64 v113; // rcx
  _DWORD *v114; // rax
  __int64 v115; // rcx
  __int128 v116; // rdi
  const __m128i *v117; // r15
  __int64 v118; // r14
  const __m128i *v119; // rsi
  __int64 v120; // r8
  const __m128i *v121; // rcx
  __int64 v122; // rdx
  unsigned __int64 v123; // rsi
  __int64 v124; // r13
  __int64 v125; // r13
  __int64 v126; // rcx
  _DWORD *v127; // rax
  __int64 v128; // rcx
  __m128i *v129; // rax
  __int64 v130; // rcx
  void *v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // rcx
  __m128i *v136; // rax
  __int64 v137; // rcx
  void *v138; // rax
  __int64 v139; // rcx
  __m128i *v140; // rax
  __int64 v141; // rcx
  const __m128i *v142; // rsi
  _DWORD *v143; // rax
  __int64 v144; // rcx
  _DWORD *v145; // rax
  __int64 v146; // rcx
  _DWORD *v147; // rax
  __int64 v148; // rcx
  __int64 v149; // r15
  __m128i *v150; // rax
  __int64 v151; // r12
  __int64 v152; // r15
  __m128i *v153; // rax
  __int64 v154; // rbx
  unsigned __int64 v155; // rsi
  const __m128i *v156; // r15
  __int64 v157; // rcx
  __m128i *v158; // rax
  __int64 v159; // rcx
  _QWORD *v160; // rax
  __int64 v161; // rcx
  __m128i *v162; // rax
  signed __int64 v163; // rbx
  __int64 v164; // rcx
  __int128 v165; // rdi
  const __m128i *v166; // r13
  __int64 v167; // r15
  __int64 v168; // r12
  __m128i *v169; // rax
  __int64 v170; // rbx
  __m128i *v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rdi
  __m128i *v175; // rax
  __int64 v176; // rsi
  __int64 v177; // rcx
  _QWORD *v178; // rbx
  __int64 *v179; // rax
  __int64 v180; // rcx
  __m128i *v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rdi
  unsigned __int64 v184; // r14
  __int64 v185; // rbx
  __m128i *v186; // rax
  __int64 v187; // rcx
  unsigned __int64 v188; // rsi
  const __m128i *v189; // r12
  __int64 v190; // r14
  const __m128i *v191; // r14
  __int64 v192; // rcx
  __m128i *v193; // rax
  __int64 v194; // rcx
  void *v195; // rax
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rcx
  _DWORD *v199; // rax
  __int64 v200; // rcx
  __int64 v201; // r14
  __int64 v202; // r12
  __m128i *v203; // rax
  __int64 v204; // rbx
  __int64 v205; // rcx
  _QWORD *v206; // rbx
  __int64 *v207; // rax
  __int64 v208; // rcx
  _DWORD *v209; // rax
  __int64 v210; // rcx
  _DWORD *v211; // rsi
  _DWORD *v212; // rax
  __int64 v213; // rcx
  __m128i *v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rsi
  __m128i *v217; // rax
  __int64 v218; // rcx
  unsigned __int64 v219; // r14
  __m128i *v220; // rax
  __int64 v221; // rcx
  __m128i *v222; // rax
  unsigned __int64 v223; // rsi
  const __m128i *v224; // r15
  const __m128i *v225; // r14
  __int64 v226; // rcx
  _DWORD *v227; // rax
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rcx
  __m128i *v231; // rax
  __int64 v232; // rcx
  __int128 v233; // rdi
  __int64 v234; // r14
  _QWORD *v235; // r15
  const __m128i *v236; // rbx
  __m128i *v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rcx
  __m128i *v241; // rax
  __int64 v242; // rcx
  _DWORD *v243; // rax
  __int64 v244; // rcx
  __m128i *v245; // rax
  __int64 v246; // rcx
  _DWORD *v247; // rax
  __int64 v248; // rcx
  _DWORD *v249; // rsi
  __int64 v250; // rax
  __int64 v251; // rcx
  const __m128i *v252; // rbx
  __m128i *v253; // rax
  __int64 v254; // rcx
  _QWORD *v255; // rax
  __int64 v256; // rcx
  __int64 v257; // rsi
  _DWORD *v258; // rax
  __int64 v259; // rcx
  unsigned __int64 v260; // rbx
  __m128i *v261; // rax
  __int64 v262; // rcx
  void *v263; // rax
  const __m128i *v264; // rcx
  __m128i v265; // xmm0
  __int64 v266; // r8
  _QWORD *v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // rsi
  __int64 v270; // rcx
  __int64 v271; // rsi
  int v272; // [rsp+68h] [rbp-18h]
  __int128 v273; // [rsp+70h] [rbp-10h] BYREF
  signed __int64 v274; // [rsp+80h] [rbp+0h]
  __int64 v275; // [rsp+88h] [rbp+8h]
  const __m128i *v276; // [rsp+90h] [rbp+10h]
  __int64 m128i_i64; // [rsp+98h] [rbp+18h]
  __int128 v278; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v279; // [rsp+B0h] [rbp+30h]
  const __m128i *v280; // [rsp+B8h] [rbp+38h]
  __m256i v281; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v282; // [rsp+E0h] [rbp+60h]
  __int128 v283; // [rsp+F0h] [rbp+70h]
  __int128 v284; // [rsp+100h] [rbp+80h]
  __int128 v285; // [rsp+110h] [rbp+90h]
  __int128 v286; // [rsp+120h] [rbp+A0h]
  __int64 v287; // [rsp+130h] [rbp+B0h]
  const __m128i *v288; // [rsp+138h] [rbp+B8h]
  _DWORD *v289; // [rsp+140h] [rbp+C0h]
  __int128 v290; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v291; // [rsp+158h] [rbp+D8h]
  _BYTE v292[24]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v293; // [rsp+178h] [rbp+F8h]
  __int64 v294; // [rsp+180h] [rbp+100h]
  const __m128i *v295; // [rsp+188h] [rbp+108h]
  __int128 v296; // [rsp+190h] [rbp+110h] BYREF
  __int64 v297; // [rsp+1A0h] [rbp+120h]
  char v298; // [rsp+1AEh] [rbp+12Eh]
  char v299; // [rsp+1AFh] [rbp+12Fh]
  char v300; // [rsp+1B0h] [rbp+130h]
  char v301; // [rsp+1B1h] [rbp+131h]
  char v302; // [rsp+1B2h] [rbp+132h]
  char v303; // [rsp+1B3h] [rbp+133h]
  char v304; // [rsp+1B4h] [rbp+134h]
  char v305; // [rsp+1B5h] [rbp+135h]
  char v306; // [rsp+1B6h] [rbp+136h]
  char v307; // [rsp+1B7h] [rbp+137h]
  char v308; // [rsp+1B8h] [rbp+138h]
  char v309; // [rsp+1B9h] [rbp+139h]
  char v310; // [rsp+1BAh] [rbp+13Ah]
  char v311; // [rsp+1BBh] [rbp+13Bh]
  char v312; // [rsp+1BCh] [rbp+13Ch]
  char v313; // [rsp+1BDh] [rbp+13Dh]
  char v314; // [rsp+1BEh] [rbp+13Eh]
  char v315; // [rsp+1BFh] [rbp+13Fh]
  __m256i v316[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __m256i v317; // [rsp+210h] [rbp+190h] BYREF
  char v318; // [rsp+234h] [rbp+1B4h]
  char v319; // [rsp+235h] [rbp+1B5h]
  char v320; // [rsp+236h] [rbp+1B6h]
  char v321; // [rsp+237h] [rbp+1B7h]
  __int64 v322; // [rsp+238h] [rbp+1B8h]
  const __m128i *v323; // [rsp+240h] [rbp+1C0h]
  char v324; // [rsp+24Ch] [rbp+1CCh]
  char v325; // [rsp+24Dh] [rbp+1CDh]
  char v326; // [rsp+24Eh] [rbp+1CEh]
  char v327; // [rsp+24Fh] [rbp+1CFh]
  const __m128i *v328; // [rsp+250h] [rbp+1D0h]
  _QWORD *v329; // [rsp+258h] [rbp+1D8h]
  __m256i v330; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v331; // [rsp+288h] [rbp+208h]

  v331 = -2;
  *(_QWORD *)&v5 = a1;
  v6 = 2;
  if ( *(__int64 *)a2 < 0 )
    v6 = *(_QWORD *)a2 ^ 0x8000000000000000uLL;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (const __m128i *)sub_140E566D0(a1, a2, (_DWORD)a3, a4, (__int64)a5);
    v289 = a3;
    v287 = *(_QWORD *)(a2 + 120);
    v286 = *(_OWORD *)(a2 + 104);
    v285 = *(_OWORD *)(a2 + 88);
    v284 = *(_OWORD *)(a2 + 72);
    v7 = *(_OWORD *)(a2 + 8);
    v8 = *(_OWORD *)(a2 + 24);
    v9 = *(_OWORD *)(a2 + 40);
    v283 = *(_OWORD *)(a2 + 56);
    v282 = v9;
    *(_OWORD *)&v281.m256i_u64[2] = v8;
    *(_OWORD *)v281.m256i_i8 = v7;
    v320 = 1;
    sub_140E4EF10(a1, (__int64)&v281, a5);
    v278 = v283;
    v279 = v284;
    v275 = v281.m256i_i64[3];
    v294 = *((_QWORD *)&v282 + 1);
    v280 = (const __m128i *)v282;
    v11 = *((const __m128i **)&v283 + 1);
    v12 = *((_QWORD *)&v283 + 1) + 32 * v284;
    v288 = (const __m128i *)(v5 + 768);
    v13 = 0x695F74757074756FLL;
    v14 = 0x5F746E65746E6F63LL;
    v15 = nullptr;
    v329 = a5;
    if ( *((_QWORD *)&v283 + 1) != v12 )
    {
      while ( 1 )
      {
        v328 = v15;
        *(_QWORD *)&v290 = 0;
        v291 = 0;
        nullsub_1(v10);
        v16 = (__m128i *)sub_140001650(4, 1);
        if ( !v16 )
          sub_141938D2B(1, 4);
        v16->m128i_i32[0] = 1701869940;
        *(_QWORD *)&v296 = 4;
        v295 = v16;
        *((_QWORD *)&v296 + 1) = v16;
        v297 = 4;
        nullsub_1(v17);
        v322 = sub_140001650(37, 1);
        if ( !v322 )
          sub_141938D2B(1, 37);
        v18 = v322;
        *(_OWORD *)(v322 + 16) = xmmword_141A542E8;
        *(_OWORD *)v18 = xmmword_141A542D8;
        *(_QWORD *)(v18 + 29) = 0x64656464612E6E6FLL;
        v330.m256i_i8[0] = 3;
        v330.m256i_i64[1] = 37;
        v330.m256i_i64[2] = v18;
        v330.m256i_i64[3] = 37;
        sub_140E72AA0(&v317, &v290, &v296, &v330);
        if ( v317.m256i_i8[0] != -1 )
          sub_140DF44E0(&v317);
        nullsub_1(v19);
        v20 = sub_140001650(12, 1);
        if ( !v20 )
          sub_141938D2B(1, 12);
        *(_QWORD *)v20 = v13;
        *(_DWORD *)(v20 + 8) = 2019910766;
        *(_QWORD *)&v296 = 12;
        *((_QWORD *)&v296 + 1) = v20;
        v297 = 12;
        v330.m256i_i8[0] = 2;
        v330.m256i_i64[1] = 0;
        v330.m256i_i64[2] = (unsigned int)v287;
        sub_140E72AA0(&v317, &v290, &v296, &v330);
        if ( v317.m256i_i8[0] != -1 )
          sub_140DF44E0(&v317);
        nullsub_1(v21);
        v22 = (_DWORD *)sub_140001650(7, 1);
        if ( !v22 )
          sub_141938D2B(1, 7);
        v23 = (const __m128i *)&v328->m128i_i8[1];
        *(_DWORD *)((char *)v22 + 3) = 1684627309;
        *v22 = 1835365481;
        *(_QWORD *)&v296 = 7;
        v322 = (__int64)v22;
        *((_QWORD *)&v296 + 1) = v22;
        v297 = 7;
        v24 = v281.m256i_u64[2];
        if ( v281.m256i_i64[2] < 0 )
        {
          v28 = 0;
LABEL_50:
          v298 = 1;
          sub_141938D2B(v28, v24);
        }
        v276 = v23;
        m128i_i64 = (__int64)v11[2].m128i_i64;
        v295 = (const __m128i *)v5;
        if ( v281.m256i_i64[2] )
        {
          v323 = v11;
          v25 = v13;
          v26 = v14;
          v27 = (const __m128i *)v281.m256i_i64[1];
          nullsub_1(v23);
          v28 = 1;
          v29 = (__m128i *)sub_140001650(v24, 1);
          if ( !v29 )
            goto LABEL_50;
          v30 = (__int64)v29;
          sub_1418F44E0(v29, v27, v24);
          v14 = v26;
          v13 = v25;
          v11 = v323;
        }
        else
        {
          v30 = 1;
        }
        v330.m256i_i8[0] = 3;
        v330.m256i_i64[1] = v24;
        v330.m256i_i64[2] = v30;
        v330.m256i_i64[3] = v24;
        v298 = 0;
        sub_140E72AA0(&v317, &v290, &v296, &v330);
        *(_QWORD *)&v5 = v295;
        v32 = v329;
        if ( v317.m256i_i8[0] != -1 )
          sub_140DF44E0(&v317);
        nullsub_1(v31);
        v33 = (__int64 *)sub_140001650(13, 1);
        if ( !v33 )
          sub_141938D2B(1, 13);
        *(__int64 *)((char *)v33 + 5) = 0x7865646E695F746ELL;
        *v33 = v14;
        *(_QWORD *)&v296 = 13;
        *((_QWORD *)&v296 + 1) = v33;
        v297 = 13;
        v330.m256i_i8[0] = 2;
        *(_OWORD *)&v330.m256i_u64[1] = 0;
        sub_140E72AA0(&v317, &v290, &v296, &v330);
        if ( v317.m256i_i8[0] != -1 )
          sub_140DF44E0(&v317);
        nullsub_1(v34);
        v35 = (_OWORD *)sub_140001650(16, 1);
        if ( !v35 )
          sub_141938D2B(1, 16);
        *v35 = xmmword_141A54318;
        *(_QWORD *)&v296 = 16;
        *((_QWORD *)&v296 + 1) = v35;
        v297 = 16;
        v330.m256i_i8[0] = 2;
        v330.m256i_i64[1] = 0;
        v330.m256i_i64[2] = (__int64)v328;
        sub_140E72AA0(&v317, &v290, &v296, &v330);
        if ( v317.m256i_i8[0] != -1 )
          sub_140DF44E0(&v317);
        nullsub_1(v36);
        v37 = (__m128i *)sub_140001650(10, 1);
        if ( !v37 )
          sub_141938D2B(1, 10);
        qmemcpy(v37, "annotation", 10);
        *(_QWORD *)&v296 = 10;
        v328 = v37;
        *((_QWORD *)&v296 + 1) = v37;
        v297 = 10;
        v324 = 1;
        sub_140412420(&v330, v11);
        if ( v330.m256i_i8[0] == -1 )
        {
          v317.m256i_i64[0] = v330.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v317,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54300);
        }
        v317 = v330;
        v324 = 0;
        sub_140E72AA0(&v330, &v290, &v296, &v317);
        if ( v330.m256i_i8[0] != -1 )
          sub_140DF44E0(&v330);
        v38 = v12;
        v293 = v291;
        *(_OWORD *)&v292[8] = v290;
        v292[0] = 5;
        sub_140E4D190((unsigned int)v316, (_DWORD)v288, (unsigned int)&xmmword_141A542D8, 37, (__int64)v292);
        v39 = v316[0].m256i_u64[2];
        v328 = (const __m128i *)v316[0].m256i_i64[1];
        v40 = v32[2];
        if ( v316[0].m256i_i64[2] > (unsigned __int64)(*v32 - v40) )
          break;
        if ( v316[0].m256i_i64[2] )
          goto LABEL_33;
LABEL_34:
        v32[2] = v39 + v40;
        if ( v316[0].m256i_i64[0] )
          sub_140001660(v328, v316[0].m256i_i64[0], 1);
        sub_140DF44E0(v292);
        v12 = v38;
        v11 = (const __m128i *)m128i_i64;
        v15 = v276;
        if ( m128i_i64 == v12 )
          goto LABEL_96;
      }
      sub_14190D590((_DWORD)v32, v40, v316[0].m256i_i32[4], 1, 1);
      v40 = v32[2];
LABEL_33:
      sub_1418F44E0((__m128i *)(v40 + v32[1]), v328, v39);
      goto LABEL_34;
    }
LABEL_96:
    *(_QWORD *)v292 = 0;
    *(_QWORD *)&v292[16] = 0;
    nullsub_1(v10);
    v90 = (_DWORD *)sub_140001650(4, 1);
    if ( !v90 )
      sub_141938D2B(1, 4);
    *v90 = 1701869940;
    v317.m256i_i64[0] = 4;
    v322 = (__int64)v90;
    v317.m256i_i64[1] = (__int64)v90;
    v317.m256i_i64[2] = 4;
    nullsub_1(v91);
    v92 = (__m128i *)sub_140001650(25, 1);
    v328 = v92;
    if ( !v92 )
      sub_141938D2B(1, 25);
    qmemcpy(v92, "response.output_text.done", 25);
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 25;
    v316[0].m256i_i64[2] = (__int64)v92;
    v316[0].m256i_i64[3] = 25;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v93);
    v94 = sub_140001650(12, 1);
    if ( !v94 )
      sub_141938D2B(1, 12);
    *(_QWORD *)v94 = v13;
    *(_DWORD *)(v94 + 8) = 2019910766;
    v317.m256i_i64[0] = 12;
    v317.m256i_i64[1] = v94;
    v317.m256i_i64[2] = 12;
    v316[0].m256i_i8[0] = 2;
    v316[0].m256i_i64[1] = 0;
    v316[0].m256i_i64[2] = (unsigned int)v287;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v95);
    v96 = sub_140001650(7, 1);
    if ( !v96 )
      sub_141938D2B(1, 7);
    *(_DWORD *)(v96 + 3) = 1684627309;
    *(_DWORD *)v96 = 1835365481;
    v317.m256i_i64[0] = 7;
    v317.m256i_i64[1] = v96;
    v317.m256i_i64[2] = 7;
    *((_QWORD *)&v5 + 1) = v281.m256i_i64[2];
    v328 = (const __m128i *)v96;
    if ( v281.m256i_i64[2] < 0 )
    {
      v98 = 0;
      goto LABEL_106;
    }
    if ( v281.m256i_i64[2] )
    {
      v152 = v5;
      *(_QWORD *)&v5 = v281.m256i_i64[1];
      nullsub_1(v97);
      v98 = 1;
      v153 = (__m128i *)sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v153 )
      {
LABEL_106:
        v305 = 1;
        sub_141938D2B(v98, *((_QWORD *)&v5 + 1));
      }
      v154 = (__int64)v153;
      sub_1418F44E0(v153, (const __m128i *)v5, *((unsigned __int64 *)&v5 + 1));
      *(_QWORD *)&v5 = v152;
      v13 = 0x695F74757074756FLL;
    }
    else
    {
      v154 = 1;
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = *((_QWORD *)&v5 + 1);
    v316[0].m256i_i64[2] = v154;
    v316[0].m256i_i64[3] = *((_QWORD *)&v5 + 1);
    v305 = 0;
    sub_140E72AA0(&v330, v292, &v317, v316);
    v178 = v329;
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v177);
    v179 = (__int64 *)sub_140001650(13, 1);
    if ( !v179 )
      sub_141938D2B(1, 13);
    *(__int64 *)((char *)v179 + 5) = 0x7865646E695F746ELL;
    *v179 = v14;
    v317.m256i_i64[0] = 13;
    v317.m256i_i64[1] = (__int64)v179;
    v317.m256i_i64[2] = 13;
    v316[0].m256i_i8[0] = 2;
    *(_OWORD *)&v316[0].m256i_u64[1] = 0;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v180);
    v181 = (__m128i *)sub_140001650(4, 1);
    if ( !v181 )
      sub_141938D2B(1, 4);
    v181->m128i_i32[0] = 1954047348;
    v317.m256i_i64[0] = 4;
    v317.m256i_i64[1] = (__int64)v181;
    v317.m256i_i64[2] = 4;
    v328 = v181;
    if ( v294 < 0 )
    {
      v183 = 0;
      v184 = v294;
      goto LABEL_226;
    }
    if ( v294 )
    {
      v185 = v5;
      nullsub_1(v182);
      v183 = 1;
      v184 = v294;
      v186 = (__m128i *)sub_140001650(v294, 1);
      if ( !v186 )
      {
LABEL_226:
        v304 = 1;
        sub_141938D2B(v183, v184);
      }
      *((_QWORD *)&v5 + 1) = v186;
      sub_1418F44E0(v186, v280, v184);
      *(_QWORD *)&v5 = v185;
      v178 = v329;
    }
    else
    {
      *((_QWORD *)&v5 + 1) = 1;
      v184 = 0;
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = v184;
    v316[0].m256i_i64[2] = *((_QWORD *)&v5 + 1);
    v316[0].m256i_i64[3] = v184;
    v304 = 0;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    *(_OWORD *)&v316[0].m256i_u64[1] = *(_OWORD *)v292;
    v316[0].m256i_i64[3] = *(_QWORD *)&v292[16];
    v316[0].m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v330, (_DWORD)v288, (unsigned int)&xmmword_141A53515, 25, (__int64)v316);
    v188 = v330.m256i_u64[2];
    v189 = (const __m128i *)v330.m256i_i64[1];
    v190 = v178[2];
    if ( v330.m256i_i64[2] > (unsigned __int64)(*v178 - v190) )
    {
      v328 = (const __m128i *)v330.m256i_i64[1];
      sub_14190D590((_DWORD)v178, v190, v330.m256i_i32[4], 1, 1);
      v178 = v329;
      v190 = v329[2];
      v189 = v328;
    }
    else if ( !v330.m256i_i64[2] )
    {
      goto LABEL_246;
    }
    sub_1418F44E0((__m128i *)(v190 + v178[1]), v189, v188);
LABEL_246:
    v191 = (const __m128i *)(v188 + v190);
    v178[2] = v191;
    if ( v330.m256i_i64[0] )
      sub_140001660(v189, v330.m256i_i64[0], 1);
    sub_140DF44E0(v316);
    *(_QWORD *)&v290 = 0;
    v291 = 0;
    nullsub_1(v192);
    v193 = (__m128i *)sub_140001650(4, 1);
    if ( !v193 )
      sub_141938D2B(1, 4);
    v193->m128i_i32[0] = 1701869940;
    v317.m256i_i64[0] = 4;
    v295 = v193;
    v317.m256i_i64[1] = (__int64)v193;
    v317.m256i_i64[2] = 4;
    nullsub_1(v194);
    v195 = (void *)sub_140001650(26, 1);
    v322 = (__int64)v195;
    if ( !v195 )
      sub_141938D2B(1, 26);
    v328 = v191;
    qmemcpy(v195, "response.content_part.done", 26);
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 26;
    v316[0].m256i_i64[2] = (__int64)v195;
    v316[0].m256i_i64[3] = 26;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v196);
    v197 = sub_140001650(12, 1);
    if ( !v197 )
      sub_141938D2B(1, 12);
    *(_QWORD *)v197 = v13;
    *(_DWORD *)(v197 + 8) = 2019910766;
    v317.m256i_i64[0] = 12;
    v317.m256i_i64[1] = v197;
    v317.m256i_i64[2] = 12;
    v316[0].m256i_i8[0] = 2;
    v316[0].m256i_i64[1] = 0;
    v316[0].m256i_i64[2] = (unsigned int)v287;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v198);
    v199 = (_DWORD *)sub_140001650(7, 1);
    if ( !v199 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v199 + 3) = 1684627309;
    *v199 = 1835365481;
    v317.m256i_i64[0] = 7;
    v317.m256i_i64[1] = (__int64)v199;
    v317.m256i_i64[2] = 7;
    *((_QWORD *)&v5 + 1) = v281.m256i_i64[2];
    v322 = (__int64)v199;
    if ( v281.m256i_i64[2] < 0 )
    {
      v201 = 0;
      goto LABEL_258;
    }
    if ( v281.m256i_i64[2] )
    {
      v202 = v5;
      *(_QWORD *)&v5 = v281.m256i_i64[1];
      nullsub_1(v200);
      v201 = 1;
      v203 = (__m128i *)sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v203 )
      {
LABEL_258:
        v303 = 1;
        sub_141938D2B(v201, *((_QWORD *)&v5 + 1));
      }
      v204 = (__int64)v203;
      sub_1418F44E0(v203, (const __m128i *)v5, *((unsigned __int64 *)&v5 + 1));
      *(_QWORD *)&v5 = v202;
    }
    else
    {
      v204 = 1;
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = *((_QWORD *)&v5 + 1);
    v316[0].m256i_i64[2] = v204;
    v316[0].m256i_i64[3] = *((_QWORD *)&v5 + 1);
    v303 = 0;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    v206 = v329;
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v205);
    v207 = (__int64 *)sub_140001650(13, 1);
    if ( !v207 )
      sub_141938D2B(1, 13);
    *(__int64 *)((char *)v207 + 5) = 0x7865646E695F746ELL;
    *v207 = v14;
    v317.m256i_i64[0] = 13;
    v317.m256i_i64[1] = (__int64)v207;
    v317.m256i_i64[2] = 13;
    v316[0].m256i_i8[0] = 2;
    *(_OWORD *)&v316[0].m256i_u64[1] = 0;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v208);
    v209 = (_DWORD *)sub_140001650(4, 1);
    if ( !v209 )
      sub_141938D2B(1, 4);
    v211 = v209;
    *v209 = 1953653104;
    *(_QWORD *)&v296 = 4;
    *((_QWORD *)&v296 + 1) = v209;
    v297 = 4;
    *(_QWORD *)v292 = 0;
    *(_QWORD *)&v292[16] = 0;
    nullsub_1(v210);
    v212 = (_DWORD *)sub_140001650(4, 1);
    v322 = (__int64)v211;
    if ( !v212 )
      sub_141938D2B(1, 4);
    *v212 = 1701869940;
    v317.m256i_i64[0] = 4;
    m128i_i64 = (__int64)v212;
    v317.m256i_i64[1] = (__int64)v212;
    v317.m256i_i64[2] = 4;
    nullsub_1(v213);
    v214 = (__m128i *)sub_140001650(11, 1);
    v295 = v214;
    if ( !v214 )
      sub_141938D2B(1, 11);
    qmemcpy(v214, "output_text", 11);
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 11;
    v316[0].m256i_i64[2] = (__int64)v214;
    v316[0].m256i_i64[3] = 11;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v215);
    v216 = 1;
    v217 = (__m128i *)sub_140001650(4, 1);
    if ( !v217 )
      sub_141938D2B(1, 4);
    v217->m128i_i32[0] = 1954047348;
    v317.m256i_i64[0] = 4;
    v317.m256i_i64[1] = (__int64)v217;
    v317.m256i_i64[2] = 4;
    v219 = v294;
    v295 = v217;
    if ( v294 )
    {
      nullsub_1(v218);
      v220 = (__m128i *)sub_140001650(v219, 1);
      if ( !v220 )
      {
        v302 = 1;
        sub_141938D2B(1, v219);
      }
      v216 = (__int64)v220;
      sub_1418F44E0(v220, v280, v219);
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = v219;
    v316[0].m256i_i64[2] = v216;
    v316[0].m256i_i64[3] = v219;
    v302 = 0;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v221);
    v222 = (__m128i *)sub_140001650(11, 1);
    if ( !v222 )
      sub_141938D2B(1, 11);
    qmemcpy(v222, "annotations", 11);
    v317.m256i_i64[0] = 11;
    v295 = v222;
    v317.m256i_i64[1] = (__int64)v222;
    v317.m256i_i64[2] = 11;
    v326 = 1;
    sub_140C0FE40(v316, &v278);
    if ( v316[0].m256i_i8[0] == -1 )
    {
      v330.m256i_i64[0] = v316[0].m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_16,
        43,
        (unsigned int)&v330,
        (unsigned int)&off_141A52FE8,
        (__int64)&off_141A542A8);
    }
    v330 = v316[0];
    v326 = 0;
    sub_140E72AA0(v316, v292, &v317, &v330);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)&v316[0].m256i_u64[1] = *(_OWORD *)v292;
    v316[0].m256i_i64[3] = *(_QWORD *)&v292[16];
    v316[0].m256i_i8[0] = 5;
    v301 = 0;
    sub_140E72AA0(&v330, &v290, &v296, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    *(_OWORD *)&v316[0].m256i_u64[1] = v290;
    v316[0].m256i_i64[3] = v291;
    v316[0].m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v330, (_DWORD)v288, (unsigned int)&xmmword_141A5352E, 26, (__int64)v316);
    v223 = v330.m256i_u64[2];
    v224 = (const __m128i *)v330.m256i_i64[1];
    v225 = v328;
    if ( v330.m256i_i64[2] > *v206 - (_QWORD)v328 )
    {
      v322 = v330.m256i_i64[1];
      sub_14190D590((_DWORD)v206, (_DWORD)v328, v330.m256i_i32[4], 1, 1);
      v206 = v329;
      v225 = (const __m128i *)v329[2];
      v224 = (const __m128i *)v322;
    }
    else if ( !v330.m256i_i64[2] )
    {
      goto LABEL_288;
    }
    sub_1418F44E0((__m128i *)((char *)v225 + v206[1]), v224, v223);
LABEL_288:
    v206[2] = (char *)v225 + v223;
    if ( v330.m256i_i64[0] )
      sub_140001660(v224, v330.m256i_i64[0], 1);
    sub_140DF44E0(v316);
    *(_QWORD *)&v290 = 0;
    v291 = 0;
    nullsub_1(v226);
    v227 = (_DWORD *)sub_140001650(4, 1);
    if ( !v227 )
      sub_141938D2B(1, 4);
    *v227 = 1701869940;
    v317.m256i_i64[0] = 4;
    v322 = (__int64)v227;
    v317.m256i_i64[1] = (__int64)v227;
    v317.m256i_i64[2] = 4;
    nullsub_1(v228);
    v229 = sub_140001650(7, 1);
    v328 = (const __m128i *)v229;
    if ( !v229 )
      sub_141938D2B(1, 7);
    *(_DWORD *)(v229 + 3) = 1701273971;
    *(_DWORD *)v229 = 1936942445;
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 7;
    v316[0].m256i_i64[2] = v229;
    v316[0].m256i_i64[3] = 7;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v230);
    v231 = (__m128i *)sub_140001650(2, 1);
    if ( !v231 )
      sub_141938D2B(1, 2);
    v231->m128i_i16[0] = 25705;
    v317.m256i_i64[0] = 2;
    v317.m256i_i64[1] = (__int64)v231;
    v317.m256i_i64[2] = 2;
    *((_QWORD *)&v233 + 1) = v281.m256i_i64[2];
    v328 = v231;
    if ( v281.m256i_i64[2] < 0 )
    {
      v234 = 0;
      goto LABEL_297;
    }
    v235 = (_QWORD *)v5;
    if ( v281.m256i_i64[2] )
    {
      v236 = (const __m128i *)v281.m256i_i64[1];
      nullsub_1(v232);
      v234 = 1;
      v237 = (__m128i *)sub_140001650(*((_QWORD *)&v233 + 1), 1);
      if ( !v237 )
      {
LABEL_297:
        v300 = 1;
        sub_141938D2B(v234, *((_QWORD *)&v233 + 1));
      }
      *(_QWORD *)&v233 = v237;
      sub_1418F44E0(v237, v236, *((unsigned __int64 *)&v233 + 1));
    }
    else
    {
      *(_QWORD *)&v233 = 1;
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = *((_QWORD *)&v233 + 1);
    *(_OWORD *)&v316[0].m256i_u64[2] = v233;
    v300 = 0;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v238);
    v239 = sub_140001650(6, 1);
    if ( !v239 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v239 + 4) = 29557;
    *(_DWORD *)v239 = 1952543859;
    v317.m256i_i64[0] = 6;
    v322 = v239;
    v317.m256i_i64[1] = v239;
    v317.m256i_i64[2] = 6;
    nullsub_1(v240);
    v241 = (__m128i *)sub_140001650(9, 1);
    v328 = v241;
    if ( !v241 )
      sub_141938D2B(1, 9);
    v241->m128i_i64[0] = 0x6574656C706D6F63LL;
    v241->m128i_i8[8] = 100;
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 9;
    v316[0].m256i_i64[2] = (__int64)v241;
    v316[0].m256i_i64[3] = 9;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v242);
    v243 = (_DWORD *)sub_140001650(4, 1);
    if ( !v243 )
      sub_141938D2B(1, 4);
    *v243 = 1701605234;
    v317.m256i_i64[0] = 4;
    v322 = (__int64)v243;
    v317.m256i_i64[1] = (__int64)v243;
    v317.m256i_i64[2] = 4;
    nullsub_1(v244);
    v245 = (__m128i *)sub_140001650(9, 1);
    v328 = v245;
    if ( !v245 )
      sub_141938D2B(1, 9);
    v245->m128i_i64[0] = 0x6E61747369737361LL;
    v245->m128i_i8[8] = 116;
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 9;
    v316[0].m256i_i64[2] = (__int64)v245;
    v316[0].m256i_i64[3] = 9;
    sub_140E72AA0(&v330, &v290, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v246);
    v247 = (_DWORD *)sub_140001650(7, 1);
    if ( !v247 )
      sub_141938D2B(1, 7);
    v249 = v247;
    *(_DWORD *)((char *)v247 + 3) = 1953391988;
    *v247 = 1953394531;
    *(_QWORD *)&v296 = 7;
    *((_QWORD *)&v296 + 1) = v247;
    v297 = 7;
    nullsub_1(v248);
    v250 = sub_140001650(32, 8);
    v322 = (__int64)v249;
    if ( !v250 )
    {
      v319 = 1;
      sub_141938D11(8, 32);
    }
    v252 = (const __m128i *)v250;
    *(_QWORD *)v292 = 0;
    *(_QWORD *)&v292[16] = 0;
    nullsub_1(v251);
    v253 = (__m128i *)sub_140001650(4, 1);
    v328 = v252;
    if ( !v253 )
      sub_141938D2B(1, 4);
    v253->m128i_i32[0] = 1701869940;
    v317.m256i_i64[0] = 4;
    v288 = v253;
    v317.m256i_i64[1] = (__int64)v253;
    v317.m256i_i64[2] = 4;
    nullsub_1(v254);
    v255 = (_QWORD *)sub_140001650(11, 1);
    v329 = v255;
    if ( !v255 )
      sub_141938D2B(1, 11);
    qmemcpy(v255, "output_text", 11);
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = 11;
    v316[0].m256i_i64[2] = (__int64)v255;
    v316[0].m256i_i64[3] = 11;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v256);
    v257 = 1;
    v258 = (_DWORD *)sub_140001650(4, 1);
    if ( !v258 )
      sub_141938D2B(1, 4);
    *v258 = 1954047348;
    v317.m256i_i64[0] = 4;
    v317.m256i_i64[1] = (__int64)v258;
    v317.m256i_i64[2] = 4;
    v260 = v294;
    v329 = v258;
    if ( v294 )
    {
      nullsub_1(v259);
      v261 = (__m128i *)sub_140001650(v260, 1);
      if ( !v261 )
      {
        v299 = 1;
        sub_141938D2B(1, v260);
      }
      v257 = (__int64)v261;
      sub_1418F44E0(v261, v280, v260);
    }
    v316[0].m256i_i8[0] = 3;
    v316[0].m256i_i64[1] = v260;
    v316[0].m256i_i64[2] = v257;
    v316[0].m256i_i64[3] = v260;
    v299 = 0;
    sub_140E72AA0(&v330, v292, &v317, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    nullsub_1(v262);
    v263 = (void *)sub_140001650(11, 1);
    if ( !v263 )
      sub_141938D2B(1, 11);
    qmemcpy(v263, "annotations", 11);
    v317.m256i_i64[0] = 11;
    v329 = v263;
    v317.m256i_i64[1] = (__int64)v263;
    v317.m256i_i64[2] = 11;
    v325 = 1;
    sub_140C0FE40(v316, &v278);
    if ( v316[0].m256i_i8[0] == -1 )
    {
      v330.m256i_i64[0] = v316[0].m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_16,
        43,
        (unsigned int)&v330,
        (unsigned int)&off_141A52FE8,
        (__int64)&off_141A542C0);
    }
    v330 = v316[0];
    v325 = 0;
    sub_140E72AA0(v316, v292, &v317, &v330);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)((char *)&v316[0].m256i_u32[1] + 3) = *(_OWORD *)v292;
    *(__int64 *)((char *)&v316[0].m256i_i64[2] + 7) = *(_QWORD *)&v292[16];
    v264 = v328;
    v328->m128i_i8[0] = 5;
    v265 = *(__m128i *)v316[0].m256i_i8;
    v264[1] = *(const __m128i *)((char *)&v316[0].m256i_u64[1] + 7);
    *(__m128i *)((char *)v264 + 1) = v265;
    v316[0].m256i_i64[1] = 1;
    v316[0].m256i_i64[2] = (__int64)v264;
    v316[0].m256i_i64[3] = 1;
    v316[0].m256i_i8[0] = 4;
    v319 = 0;
    sub_140E72AA0(&v330, &v290, &v296, v316);
    if ( v330.m256i_i8[0] != -1 )
      sub_140DF44E0(&v330);
    *(_OWORD *)&v317.m256i_u64[1] = v290;
    v317.m256i_i64[3] = v291;
    v317.m256i_i8[0] = 5;
    v266 = v235[45];
    if ( v235[43] == -1 )
      v267 = nullptr;
    else
      v267 = (_QWORD *)v235[44];
    v318 = 1;
    sub_1403619C0((__int64)&v317, v267, v266, v289 == nullptr);
    v316[0] = v317;
    v318 = 0;
    sub_140E7D900(&v330, v235 + 93, (unsigned int)v287, v316);
    if ( v330.m256i_i8[0] != -1 )
    {
      v318 = 0;
      sub_140DF44E0(&v330);
    }
    if ( v275 )
      sub_140001660(v280, v275, 1);
    v268 = *((_QWORD *)&v278 + 1);
    v322 = v279;
    v328 = nullptr;
    v329 = *((_QWORD **)&v278 + 1);
    while ( (const __m128i *)v322 != v328 )
    {
      v328 = (const __m128i *)((char *)v328 + 1);
      v269 = v268 + 32;
      sub_1403880E0(v268);
      v268 = v269;
    }
    if ( (_QWORD)v278 )
      sub_140001660(*((_QWORD *)&v278 + 1), 32 * v278, 8);
    if ( v281.m256i_i64[0] )
      sub_140001660(v281.m256i_i64[1], v281.m256i_i64[0], 1);
    v322 = *((_QWORD *)&v285 + 1);
    v270 = v285;
    v328 = nullptr;
    v329 = (_QWORD *)v285;
    while ( 1 )
    {
      result = v328;
      if ( (const __m128i *)v322 == v328 )
        break;
      v328 = (const __m128i *)((char *)v328 + 1);
      v271 = v270 + 32;
      sub_1403880E0(v270);
      v270 = v271;
    }
    if ( *((_QWORD *)&v284 + 1) )
    {
      v121 = (const __m128i *)v285;
      v122 = 32LL * *((_QWORD *)&v284 + 1);
      v120 = 8;
      return (const __m128i *)sub_140001660(v121, v122, v120);
    }
    return result;
  }
  v329 = a5;
  m128i_i64 = *(unsigned int *)(a2 + 104);
  v41 = *(const __m128i **)(a2 + 8);
  v288 = *(const __m128i **)(a2 + 16);
  v42 = *(_QWORD *)(a2 + 24);
  v274 = *(_QWORD *)(a2 + 48);
  v273 = *(_OWORD *)(a2 + 32);
  v43 = *(_QWORD *)(a2 + 56);
  v276 = *(const __m128i **)(a2 + 64);
  v44 = *(unsigned __int8 *)(a2 + 108);
  v45 = *(_QWORD *)(a2 + 80);
  v295 = *(const __m128i **)(a2 + 88);
  LOBYTE(v280) = v44;
  v328 = v41;
  v322 = v43;
  v275 = v45;
  if ( !(_BYTE)v44 )
  {
    v294 = *(_QWORD *)(a2 + 72);
    v317.m256i_i64[0] = 0;
    v317.m256i_i64[2] = 0;
    nullsub_1(v44);
    v54 = (_DWORD *)sub_140001650(4, 1);
    if ( !v54 )
      sub_141938D2B(1, 4);
    *v54 = 1701869940;
    v330.m256i_i64[0] = 4;
    v289 = v54;
    v330.m256i_i64[1] = (__int64)v54;
    v330.m256i_i64[2] = 4;
    nullsub_1(v55);
    v56 = (__m128i *)sub_140001650(36, 1);
    v323 = v56;
    if ( !v56 )
      sub_141938D2B(1, 36);
    qmemcpy(v56, "response.reasoning_summary_text.done", 36);
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = 36;
    v281.m256i_i64[2] = (__int64)v56;
    v281.m256i_i64[3] = 36;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    v58 = v329;
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v57);
    v59 = (void *)sub_140001650(12, 1);
    if ( !v59 )
      sub_141938D2B(1, 12);
    qmemcpy(v59, "output_index", 12);
    v330.m256i_i64[0] = 12;
    v330.m256i_i64[1] = (__int64)v59;
    v330.m256i_i64[2] = 12;
    v281.m256i_i8[0] = 2;
    v281.m256i_i64[1] = 0;
    v281.m256i_i64[2] = m128i_i64;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v60);
    v61 = sub_140001650(7, 1);
    if ( !v61 )
      sub_141938D2B(1, 7);
    v63 = v5 + 768;
    *(_DWORD *)(v61 + 3) = 1684627309;
    *(_DWORD *)v61 = 1835365481;
    v330.m256i_i64[0] = 7;
    v330.m256i_i64[1] = v61;
    v330.m256i_i64[2] = 7;
    v323 = (const __m128i *)v61;
    if ( v42 < 0 )
    {
      v64 = 0;
      goto LABEL_61;
    }
    if ( v42 )
    {
      v67 = v5;
      nullsub_1(v62);
      v64 = 1;
      v68 = (__m128i *)sub_140001650(v42, 1);
      if ( !v68 )
      {
LABEL_61:
        v315 = 1;
        sub_141938D2B(v64, v42);
      }
      *((_QWORD *)&v5 + 1) = v68;
      sub_1418F44E0(v68, v288, v42);
      *(_QWORD *)&v5 = v67;
      v58 = v329;
    }
    else
    {
      *((_QWORD *)&v5 + 1) = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = v42;
    v281.m256i_i64[2] = *((_QWORD *)&v5 + 1);
    v281.m256i_i64[3] = v42;
    v315 = 0;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v82);
    v83 = (void *)sub_140001650(13, 1);
    if ( !v83 )
      sub_141938D2B(1, 13);
    qmemcpy(v83, "summary_index", 13);
    v330.m256i_i64[0] = 13;
    v330.m256i_i64[1] = (__int64)v83;
    v330.m256i_i64[2] = 13;
    v281.m256i_i8[0] = 2;
    *(_OWORD *)&v281.m256i_u64[1] = 0;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v84);
    v85 = (__m128i *)sub_140001650(4, 1);
    if ( !v85 )
      sub_141938D2B(1, 4);
    v85->m128i_i32[0] = 1954047348;
    v330.m256i_i64[0] = 4;
    v330.m256i_i64[1] = (__int64)v85;
    v330.m256i_i64[2] = 4;
    v323 = v85;
    if ( v274 < 0 )
    {
      v87 = 0;
      goto LABEL_92;
    }
    if ( v274 )
    {
      v289 = (_DWORD *)v42;
      nullsub_1(v86);
      v87 = 1;
      v88 = (__m128i *)sub_140001650(v274, 1);
      if ( !v88 )
      {
LABEL_92:
        v314 = 1;
        sub_141938D2B(v87, v274);
      }
      v89 = (__int64)v88;
      sub_1418F44E0(v88, *((const __m128i **)&v273 + 1), v274);
      v42 = (signed __int64)v289;
    }
    else
    {
      v89 = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = v274;
    v281.m256i_i64[2] = v89;
    v281.m256i_i64[3] = v274;
    v314 = 0;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)&v281.m256i_u64[1] = *(_OWORD *)v317.m256i_i8;
    v281.m256i_i64[3] = v317.m256i_i64[2];
    v281.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)v316, v63, (unsigned int)&xmmword_141A53760, 36, (__int64)&v281);
    v123 = v316[0].m256i_u64[2];
    v323 = (const __m128i *)v316[0].m256i_i64[1];
    v124 = v58[2];
    if ( v316[0].m256i_i64[2] > (unsigned __int64)(*v58 - v124) )
    {
      sub_14190D590((_DWORD)v58, v124, v316[0].m256i_i32[4], 1, 1);
      v58 = v329;
      v124 = v329[2];
    }
    else if ( !v316[0].m256i_i64[2] )
    {
      goto LABEL_148;
    }
    sub_1418F44E0((__m128i *)(v124 + v58[1]), v323, v123);
LABEL_148:
    v125 = v123 + v124;
    v58[2] = v125;
    if ( v316[0].m256i_i64[0] )
      sub_140001660(v323, v316[0].m256i_i64[0], 1);
    sub_140DF44E0(&v281);
    *(_QWORD *)&v296 = 0;
    v297 = 0;
    nullsub_1(v126);
    v127 = (_DWORD *)sub_140001650(4, 1);
    if ( !v127 )
      sub_141938D2B(1, 4);
    *v127 = 1701869940;
    v330.m256i_i64[0] = 4;
    v289 = v127;
    v330.m256i_i64[1] = (__int64)v127;
    v330.m256i_i64[2] = 4;
    nullsub_1(v128);
    v129 = (__m128i *)sub_140001650(36, 1);
    v323 = v129;
    if ( !v129 )
      sub_141938D2B(1, 36);
    qmemcpy(v129, "response.reasoning_summary_part.done", 36);
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = 36;
    v281.m256i_i64[2] = (__int64)v129;
    v281.m256i_i64[3] = 36;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v130);
    v131 = (void *)sub_140001650(12, 1);
    if ( !v131 )
      sub_141938D2B(1, 12);
    qmemcpy(v131, "output_index", 12);
    v330.m256i_i64[0] = 12;
    v330.m256i_i64[1] = (__int64)v131;
    v330.m256i_i64[2] = 12;
    v281.m256i_i8[0] = 2;
    v281.m256i_i64[1] = 0;
    v281.m256i_i64[2] = m128i_i64;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v132);
    v133 = 1;
    v134 = sub_140001650(7, 1);
    if ( !v134 )
      sub_141938D2B(1, 7);
    *(_DWORD *)(v134 + 3) = 1684627309;
    *(_DWORD *)v134 = 1835365481;
    v330.m256i_i64[0] = 7;
    v323 = (const __m128i *)v134;
    v330.m256i_i64[1] = v134;
    v330.m256i_i64[2] = 7;
    if ( v42 )
    {
      nullsub_1(v135);
      v136 = (__m128i *)sub_140001650(v42, 1);
      if ( !v136 )
      {
        v313 = 1;
        sub_141938D2B(1, v42);
      }
      v133 = (__int64)v136;
      sub_1418F44E0(v136, v288, v42);
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = v42;
    v281.m256i_i64[2] = v133;
    v281.m256i_i64[3] = v42;
    v313 = 0;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v137);
    v138 = (void *)sub_140001650(13, 1);
    if ( !v138 )
      sub_141938D2B(1, 13);
    qmemcpy(v138, "summary_index", 13);
    v330.m256i_i64[0] = 13;
    v330.m256i_i64[1] = (__int64)v138;
    v330.m256i_i64[2] = 13;
    v281.m256i_i8[0] = 2;
    *(_OWORD *)&v281.m256i_u64[1] = 0;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v139);
    v140 = (__m128i *)sub_140001650(4, 1);
    if ( !v140 )
      sub_141938D2B(1, 4);
    v142 = v140;
    v140->m128i_i32[0] = 1953653104;
    *(_QWORD *)v292 = 4;
    *(_QWORD *)&v292[8] = v140;
    *(_QWORD *)&v292[16] = 4;
    v317.m256i_i64[0] = 0;
    v317.m256i_i64[2] = 0;
    nullsub_1(v141);
    v143 = (_DWORD *)sub_140001650(4, 1);
    v323 = v142;
    if ( !v143 )
      sub_141938D2B(1, 4);
    *v143 = 1701869940;
    v330.m256i_i64[0] = 4;
    v330.m256i_i64[1] = (__int64)v143;
    v330.m256i_i64[2] = 4;
    nullsub_1(v144);
    v145 = (_DWORD *)sub_140001650(12, 1);
    v289 = v145;
    if ( !v145 )
      sub_141938D2B(1, 12);
    qmemcpy(v145, "summary_text", 12);
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = 12;
    v281.m256i_i64[2] = (__int64)v145;
    v281.m256i_i64[3] = 12;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v146);
    v147 = (_DWORD *)sub_140001650(4, 1);
    if ( !v147 )
      sub_141938D2B(1, 4);
    *v147 = 1954047348;
    v330.m256i_i64[0] = 4;
    v330.m256i_i64[1] = (__int64)v147;
    v330.m256i_i64[2] = 4;
    v289 = v147;
    if ( v274 < 0 )
    {
      v149 = 0;
      goto LABEL_174;
    }
    if ( v274 )
    {
      v272 = v63;
      nullsub_1(v148);
      v149 = 1;
      v150 = (__m128i *)sub_140001650(v274, 1);
      if ( !v150 )
      {
LABEL_174:
        v312 = 1;
        sub_141938D2B(v149, v274);
      }
      v151 = (__int64)v150;
      sub_1418F44E0(v150, *((const __m128i **)&v273 + 1), v274);
      v58 = v329;
      v63 = v272;
    }
    else
    {
      v151 = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = v274;
    v281.m256i_i64[2] = v151;
    v281.m256i_i64[3] = v274;
    v312 = 0;
    sub_140E72AA0(v316, &v317, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)&v281.m256i_u64[1] = *(_OWORD *)v317.m256i_i8;
    v281.m256i_i64[3] = v317.m256i_i64[2];
    v281.m256i_i8[0] = 5;
    v311 = 0;
    sub_140E72AA0(v316, &v296, v292, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)&v281.m256i_u64[1] = v296;
    v281.m256i_i64[3] = v297;
    v281.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)v316, v63, (unsigned int)&xmmword_141A54268, 36, (__int64)&v281);
    v155 = v316[0].m256i_u64[2];
    v156 = (const __m128i *)v316[0].m256i_i64[1];
    if ( v316[0].m256i_i64[2] > (unsigned __int64)(*v58 - v125) )
    {
      v323 = (const __m128i *)v316[0].m256i_i64[1];
      sub_14190D590((_DWORD)v58, v125, v316[0].m256i_i32[4], 1, 1);
      v58 = v329;
      v125 = v329[2];
      v156 = v323;
    }
    else if ( !v316[0].m256i_i64[2] )
    {
      goto LABEL_189;
    }
    sub_1418F44E0((__m128i *)(v125 + v58[1]), v156, v155);
LABEL_189:
    v58[2] = v155 + v125;
    if ( v316[0].m256i_i64[0] )
      sub_140001660(v156, v316[0].m256i_i64[0], 1);
    sub_140DF44E0(&v281);
    *(_QWORD *)&v296 = 0;
    v297 = 0;
    nullsub_1(v157);
    v158 = (__m128i *)sub_140001650(4, 1);
    if ( !v158 )
      sub_141938D2B(1, 4);
    v158->m128i_i32[0] = 1701869940;
    v330.m256i_i64[0] = 4;
    v323 = v158;
    v330.m256i_i64[1] = (__int64)v158;
    v330.m256i_i64[2] = 4;
    nullsub_1(v159);
    v160 = (_QWORD *)sub_140001650(8, 1);
    v329 = v160;
    if ( !v160 )
      sub_141938D2B(1, 8);
    *v160 = 0x676E696B6E696874LL;
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = 8;
    v281.m256i_i64[2] = (__int64)v160;
    v281.m256i_i64[3] = 8;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v161);
    v162 = (__m128i *)sub_140001650(8, 1);
    v163 = v294;
    if ( !v162 )
      sub_141938D2B(1, 8);
    v162->m128i_i64[0] = 0x676E696B6E696874LL;
    *(_QWORD *)v292 = 8;
    v323 = v162;
    *(_QWORD *)&v292[8] = v162;
    *(_QWORD *)&v292[16] = 8;
    sub_1416AC440(&v330, &v273);
    *((_QWORD *)&v165 + 1) = v330.m256i_i64[2];
    v166 = (const __m128i *)v330.m256i_i64[1];
    v329 = (_QWORD *)v330.m256i_i64[1];
    if ( v330.m256i_i64[2] < 0 )
    {
      v167 = 0;
      goto LABEL_198;
    }
    v168 = v5;
    if ( v330.m256i_i64[2] )
    {
      nullsub_1(v164);
      v167 = 1;
      v169 = (__m128i *)sub_140001650(*((_QWORD *)&v165 + 1), 1);
      if ( !v169 )
      {
LABEL_198:
        v310 = 1;
        sub_141938D2B(v167, *((_QWORD *)&v165 + 1));
      }
      *(_QWORD *)&v165 = v169;
      sub_1418F44E0(v169, v166, *((unsigned __int64 *)&v165 + 1));
    }
    else
    {
      *(_QWORD *)&v165 = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = *((_QWORD *)&v165 + 1);
    *(_OWORD *)&v281.m256i_u64[2] = v165;
    v310 = 0;
    sub_140E72AA0(v316, &v296, v292, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    if ( v330.m256i_i64[0] )
      sub_140001660(v329, v330.m256i_i64[0], 1);
    nullsub_1(v172);
    v173 = sub_140001650(9, 1);
    if ( !v173 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v173 = 0x727574616E676973LL;
    *(_BYTE *)(v173 + 8) = 101;
    v330.m256i_i64[0] = 9;
    v330.m256i_i64[1] = v173;
    v330.m256i_i64[2] = 9;
    v329 = (_QWORD *)v173;
    if ( v163 < 0 )
    {
      v174 = 0;
      goto LABEL_213;
    }
    if ( v163 )
    {
      nullsub_1(0x727574616E676973LL);
      v174 = 1;
      v175 = (__m128i *)sub_140001650(v163, 1);
      if ( !v175 )
      {
LABEL_213:
        v309 = 1;
        sub_141938D2B(v174, v163);
      }
      v176 = (__int64)v175;
      sub_1418F44E0(v175, v276, v163);
    }
    else
    {
      v176 = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = v163;
    v281.m256i_i64[2] = v176;
    v281.m256i_i64[3] = v163;
    v309 = 0;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    v70 = v168;
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    *(_OWORD *)&v317.m256i_u64[1] = v296;
    v71 = v297;
    goto LABEL_72;
  }
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)v292 = 0;
  *(_QWORD *)&v292[16] = 0;
  nullsub_1(v44);
  v46 = (__m128i *)sub_140001650(4, 1);
  if ( !v46 )
    sub_141938D2B(1, 4);
  v46->m128i_i32[0] = 1701869940;
  v330.m256i_i64[0] = 4;
  v323 = v46;
  v330.m256i_i64[1] = (__int64)v46;
  v330.m256i_i64[2] = 4;
  nullsub_1(v47);
  v48 = (_QWORD *)sub_140001650(17, 1);
  v329 = v48;
  if ( !v48 )
    sub_141938D2B(1, 17);
  qmemcpy(v48, "redacted_thinking", 17);
  v281.m256i_i8[0] = 3;
  v281.m256i_i64[1] = 17;
  v281.m256i_i64[2] = (__int64)v48;
  v281.m256i_i64[3] = 17;
  sub_140E72AA0(v316, v292, &v330, &v281);
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  nullsub_1(v49);
  v50 = (_DWORD *)sub_140001650(4, 1);
  if ( !v50 )
    sub_141938D2B(1, 4);
  *v50 = 1635017060;
  v330.m256i_i64[0] = 4;
  v330.m256i_i64[1] = (__int64)v50;
  v330.m256i_i64[2] = 4;
  v329 = v50;
  if ( v5 < 0 )
  {
    v52 = 0;
    goto LABEL_47;
  }
  v65 = v5;
  if ( *((_QWORD *)&v5 + 1) )
  {
    nullsub_1(v51);
    v52 = 1;
    v66 = (__m128i *)sub_140001650(*((_QWORD *)&v5 + 1), 1);
    if ( !v66 )
    {
LABEL_47:
      v308 = 1;
      sub_141938D2B(v52, *((_QWORD *)&v5 + 1));
    }
    *(_QWORD *)&v5 = v66;
    sub_1418F44E0(v66, v295, *((unsigned __int64 *)&v5 + 1));
  }
  else
  {
    *(_QWORD *)&v5 = 1;
  }
  v281.m256i_i8[0] = 3;
  v281.m256i_i64[1] = *((_QWORD *)&v5 + 1);
  *(_OWORD *)&v281.m256i_u64[2] = v5;
  v308 = 0;
  sub_140E72AA0(v316, v292, &v330, &v281);
  v70 = v65;
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  *(_OWORD *)&v317.m256i_u64[1] = *(_OWORD *)v292;
  v71 = *(_QWORD *)&v292[16];
LABEL_72:
  v317.m256i_i64[3] = v71;
  v317.m256i_i8[0] = 5;
  *(_QWORD *)&v278 = 0;
  v279 = 0;
  nullsub_1(v69);
  v72 = (__m128i *)sub_140001650(4, 1);
  if ( !v72 )
    sub_141938D2B(1, 4);
  v72->m128i_i32[0] = 1701869940;
  v330.m256i_i64[0] = 4;
  v323 = v72;
  v330.m256i_i64[1] = (__int64)v72;
  v330.m256i_i64[2] = 4;
  nullsub_1(v73);
  v74 = sub_140001650(9, 1);
  v329 = (_QWORD *)v74;
  if ( !v74 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v74 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v74 + 8) = 103;
  v281.m256i_i8[0] = 3;
  v281.m256i_i64[1] = 9;
  v281.m256i_i64[2] = v74;
  v281.m256i_i64[3] = 9;
  sub_140E72AA0(v316, &v278, &v330, &v281);
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  nullsub_1(v75);
  v76 = (_WORD *)sub_140001650(2, 1);
  if ( !v76 )
    sub_141938D2B(1, 2);
  *v76 = 25705;
  v330.m256i_i64[0] = 2;
  v330.m256i_i64[1] = (__int64)v76;
  v330.m256i_i64[2] = 2;
  v329 = v76;
  if ( v42 < 0 )
  {
    v78 = 0;
    goto LABEL_79;
  }
  if ( v42 )
  {
    v79 = v70;
    nullsub_1(v77);
    v78 = 1;
    v80 = (__m128i *)sub_140001650(v42, 1);
    if ( !v80 )
    {
LABEL_79:
      v307 = 1;
      sub_141938D2B(v78, v42);
    }
    v81 = (__int64)v80;
    sub_1418F44E0(v80, v288, v42);
    v70 = v79;
  }
  else
  {
    v81 = 1;
  }
  v281.m256i_i8[0] = 3;
  v281.m256i_i64[1] = v42;
  v281.m256i_i64[2] = v81;
  v281.m256i_i64[3] = v42;
  v307 = 0;
  sub_140E72AA0(v316, &v278, &v330, &v281);
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  nullsub_1(v99);
  v100 = (__m128i *)sub_140001650(6, 1);
  if ( !v100 )
    sub_141938D2B(1, 6);
  v100->m128i_i16[2] = 29557;
  v100->m128i_i32[0] = 1952543859;
  v330.m256i_i64[0] = 6;
  v323 = v100;
  v330.m256i_i64[1] = (__int64)v100;
  v330.m256i_i64[2] = 6;
  nullsub_1(v101);
  v102 = sub_140001650(9, 1);
  v329 = (_QWORD *)v102;
  if ( !v102 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v102 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v102 + 8) = 100;
  v281.m256i_i8[0] = 3;
  v281.m256i_i64[1] = 9;
  v281.m256i_i64[2] = v102;
  v281.m256i_i64[3] = 9;
  sub_140E72AA0(v316, &v278, &v330, &v281);
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  nullsub_1(v103);
  v104 = (_DWORD *)sub_140001650(7, 1);
  if ( !v104 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v104 + 3) = 2037539181;
  *v104 = 1835890035;
  *(_QWORD *)&v290 = 7;
  *((_QWORD *)&v290 + 1) = v104;
  v291 = 7;
  *((_QWORD *)&v106 + 1) = 8;
  v329 = v104;
  if ( (_BYTE)v280 || !v274 )
  {
    *(_QWORD *)&v106 = 0;
  }
  else
  {
    nullsub_1(v105);
    v107 = sub_140001650(32, 8);
    if ( !v107 )
      sub_141938D11(8, 32);
    v109 = (const __m128i *)v107;
    *(_QWORD *)&v296 = 0;
    v297 = 0;
    nullsub_1(v108);
    v110 = (_DWORD *)sub_140001650(4, 1);
    v280 = v109;
    if ( !v110 )
      sub_141938D2B(1, 4);
    *v110 = 1701869940;
    v330.m256i_i64[0] = 4;
    v294 = (__int64)v110;
    v330.m256i_i64[1] = (__int64)v110;
    v330.m256i_i64[2] = 4;
    nullsub_1(v111);
    v112 = (__m128i *)sub_140001650(12, 1);
    v323 = v112;
    if ( !v112 )
      sub_141938D2B(1, 12);
    qmemcpy(v112, "summary_text", 12);
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = 12;
    v281.m256i_i64[2] = (__int64)v112;
    v281.m256i_i64[3] = 12;
    sub_140E72AA0(v316, &v296, &v330, &v281);
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    nullsub_1(v113);
    v114 = (_DWORD *)sub_140001650(4, 1);
    if ( !v114 )
      sub_141938D2B(1, 4);
    *v114 = 1954047348;
    *(_QWORD *)v292 = 4;
    v294 = (__int64)v114;
    *(_QWORD *)&v292[8] = v114;
    *(_QWORD *)&v292[16] = 4;
    sub_1416AC440(&v330, &v273);
    *((_QWORD *)&v116 + 1) = v330.m256i_i64[2];
    v117 = (const __m128i *)v330.m256i_i64[1];
    v323 = (const __m128i *)v330.m256i_i64[1];
    if ( v330.m256i_i64[2] < 0 )
    {
      v118 = 0;
      goto LABEL_125;
    }
    v170 = v70;
    if ( v330.m256i_i64[2] )
    {
      nullsub_1(v115);
      v118 = 1;
      v171 = (__m128i *)sub_140001650(*((_QWORD *)&v116 + 1), 1);
      if ( !v171 )
      {
LABEL_125:
        v306 = 1;
        sub_141938D2B(v118, *((_QWORD *)&v116 + 1));
      }
      *(_QWORD *)&v116 = v171;
      sub_1418F44E0(v171, v117, *((unsigned __int64 *)&v116 + 1));
    }
    else
    {
      *(_QWORD *)&v116 = 1;
    }
    v281.m256i_i8[0] = 3;
    v281.m256i_i64[1] = *((_QWORD *)&v116 + 1);
    *(_OWORD *)&v281.m256i_u64[2] = v116;
    v306 = 0;
    sub_140E72AA0(v316, &v296, v292, &v281);
    v70 = v170;
    if ( v316[0].m256i_i8[0] != -1 )
      sub_140DF44E0(v316);
    if ( v330.m256i_i64[0] )
      sub_140001660(v323, v330.m256i_i64[0], 1);
    *(_OWORD *)((char *)&v281.m256i_u32[1] + 3) = v296;
    *(__int64 *)((char *)&v281.m256i_i64[2] + 7) = v297;
    *((_QWORD *)&v106 + 1) = v280;
    v280->m128i_i8[0] = 5;
    *(_QWORD *)&v106 = *(__int64 *)((char *)&v281.m256i_i64[1] + 7);
    v187 = *(__int64 *)((char *)&v281.m256i_i64[2] + 7);
    *(_OWORD *)(*((_QWORD *)&v106 + 1) + 1LL) = *(_OWORD *)v281.m256i_i8;
    *(_QWORD *)(*((_QWORD *)&v106 + 1) + 16LL) = v106;
    *(_QWORD *)(*((_QWORD *)&v106 + 1) + 24LL) = v187;
    *(_QWORD *)&v106 = 1;
  }
  *(_OWORD *)&v281.m256i_u64[1] = v106;
  v281.m256i_i64[3] = v106;
  v281.m256i_i8[0] = 4;
  v327 = 1;
  sub_140412420(v316, &v281);
  if ( v316[0].m256i_i8[0] == -1 )
  {
    v330.m256i_i64[0] = v316[0].m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v330,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A54290);
  }
  v330 = v316[0];
  v327 = 0;
  sub_140E72AA0(v316, &v278, &v290, &v330);
  if ( v316[0].m256i_i8[0] != -1 )
    sub_140DF44E0(v316);
  sub_140DF44E0(&v281);
  *(_OWORD *)&v330.m256i_u64[1] = v278;
  v330.m256i_i64[3] = v279;
  v330.m256i_i8[0] = 5;
  v321 = 1;
  sub_140302A40(&v330, &v317);
  v281 = v330;
  v321 = 0;
  sub_140E7D900(v316, v70 + 744, m128i_i64, &v281);
  if ( v316[0].m256i_i8[0] != -1 )
  {
    v321 = 0;
    sub_140DF44E0(v316);
  }
  result = (const __m128i *)sub_140DF44E0(&v317);
  v119 = v328;
  if ( v275 )
    result = (const __m128i *)sub_140001660(v295, v275, 1);
  if ( v322 )
    result = (const __m128i *)sub_140001660(v276, v322, 1);
  if ( (_QWORD)v273 )
    result = (const __m128i *)sub_140001660(*((_QWORD *)&v273 + 1), v273, 1);
  if ( v119 )
  {
    v120 = 1;
    v121 = v288;
    v122 = (__int64)v119;
    return (const __m128i *)sub_140001660(v121, v122, v120);
  }
  return result;
}
