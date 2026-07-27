// module: codexmate_lib/core/relay/translator
// addr: 0x140a41c10
// name: sub_140A41C10
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A41C10(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  const __m128i *v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  const char *v16; // r12
  __m128i si128; // xmm6
  __m128i v18; // xmm7
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rcx
  _WORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // r15
  const char *v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  const __m128i *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  bool v58; // r15
  __int64 v59; // r13
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rsi
  const char *v65; // r15
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r13
  _QWORD *v70; // rax
  const __m128i *v71; // rax
  __int64 v72; // r14
  __m128i v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 *v78; // rdi
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rsi
  _WORD *v82; // rax
  __int64 v83; // rax
  bool v84; // zf
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  void *v91; // rax
  __int64 v92; // rcx
  _WORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // r15
  __int64 v99; // rcx
  _DWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r15
  __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // rcx
  _DWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // r15
  _DWORD *v117; // rax
  __m128i v118; // xmm0
  __int64 v119; // rcx
  _DWORD *v120; // rax
  __m128i v121; // xmm0
  __int64 v122; // rcx
  _WORD *v123; // rax
  __m128i v124; // xmm0
  __int64 v125; // rcx
  _DWORD *v126; // rax
  __m128i v127; // xmm0
  __int64 v128; // rcx
  __int64 v129; // rax
  __m128i v130; // xmm0
  __int64 v131; // rcx
  _DWORD *v132; // rax
  __int64 v133; // rcx
  __m128i *v134; // rax
  __m128i v135; // xmm0
  __m128i v136; // xmm1
  __int8 v137; // r14
  _DWORD *v138; // rax
  __m128i v139; // xmm0
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __m128i v142; // xmm0
  __int64 v143; // rcx
  __int64 v144; // rax
  __m128i v145; // xmm0
  __int64 v146; // rcx
  _WORD *v147; // rax
  __int64 v148; // rcx
  _DWORD *v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  _DWORD *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rcx
  _DWORD *v159; // rax
  __int64 v160; // rcx
  _DWORD *v161; // rax
  __m128i v162; // xmm1
  __int128 v163; // xmm0
  _OWORD *v164; // rax
  __m128i v165; // xmm0
  __int64 v166; // r14
  __int64 v167; // rax
  __int64 v168; // rcx
  __m128i v169; // xmm0
  __m128i v170; // xmm1
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rax
  __m128i v179; // xmm0
  unsigned __int64 v180; // r14
  __int64 v181; // rax
  __int64 v182; // rcx
  __m128i v183; // xmm0
  __int64 v184; // rcx
  __int64 v185; // rdi
  __int64 v186; // rbx
  __int64 v187; // r14
  char v188; // si
  _DWORD *v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rcx
  __int64 *v193; // rax
  __int64 v194; // rcx
  __int64 v195; // r14
  __int64 v196; // r12
  __int64 v197; // rax
  __int64 v198; // r15
  __int64 v199; // rdx
  __int64 v200; // rcx
  _DWORD *v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rax
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rcx
  _DWORD *v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rcx
  __int64 *v213; // rdi
  _DWORD *v214; // rax
  __int64 v215; // rcx
  void *v216; // rax
  __int64 v217; // rcx
  _DWORD *v218; // rax
  __int64 v219; // rcx
  __int64 v220; // r15
  __int64 v221; // r14
  __int64 v222; // rax
  __int64 v223; // rcx
  void *v224; // rax
  __int64 *v225; // rcx
  __m128i v226; // xmm0
  __int64 v227; // rsi
  __int64 v228; // rax
  __int64 v229; // rcx
  __m128i v230; // xmm0
  __int64 v231; // rdi
  __int64 v232; // rbx
  __int64 v233; // r14
  unsigned __int64 v234; // r15
  __int64 v235; // r12
  __int64 v236; // r13
  __int64 v237; // rsi
  _QWORD *v238; // rbx
  __int64 v239; // rdx
  __int64 v240; // rax
  __int64 v241; // rcx
  __int64 v242; // rdi
  __int64 v243; // rax
  __int64 v244; // rcx
  __int64 v245; // rbx
  __int64 v246; // rax
  __int64 v247; // rcx
  __int64 v248; // rsi
  __int64 v249; // rax
  __int64 v250; // rcx
  __int64 v251; // r14
  __int64 v252; // rax
  __int64 v253; // rcx
  unsigned __int64 v254; // rdi
  void *v255; // rax
  unsigned __int64 v256; // rsi
  __int64 v257; // rcx
  void *v258; // rax
  __int64 v259; // rcx
  void *v260; // rax
  unsigned __int64 v261; // rdi
  _WORD *v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rbx
  __int64 v265; // r15
  char v266; // si
  __int64 v267; // rdi
  __int64 v268; // rax
  __int64 v269; // r14
  __int64 v270; // rcx
  __int64 v271; // rax
  __int64 v272; // rcx
  _QWORD *v273; // rax
  __int64 v274; // rcx
  void *v275; // rax
  __int32 v276; // edx
  int v277; // ecx
  unsigned __int32 v278; // ecx
  __int64 v279; // rcx
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rax
  __int64 v283; // rcx
  __int64 v284; // rbx
  __int64 v285; // rax
  __int64 v286; // rcx
  __int64 v287; // rsi
  __int64 v288; // rax
  __int64 v289; // rcx
  __int64 v290; // rax
  __m128i v291; // xmm0
  __int64 v292; // rcx
  void *v293; // rax
  __int64 v294; // r14
  __int64 v295; // r12
  __int64 v296; // rbx
  __int64 v297; // rax
  __int64 v298; // r15
  __int64 v299; // rcx
  __int64 v300; // rax
  __m128i v301; // xmm0
  __int64 v302; // rcx
  __int64 v303; // rsi
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rax
  __int64 v308; // rax
  _QWORD v309[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v310; // [rsp+58h] [rbp-28h] BYREF
  __int64 v311; // [rsp+68h] [rbp-18h]
  __int64 v312; // [rsp+70h] [rbp-10h]
  _QWORD v313[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v314; // [rsp+88h] [rbp+8h]
  __int64 v315; // [rsp+98h] [rbp+18h] BYREF
  __int64 v316; // [rsp+A0h] [rbp+20h]
  __int64 v317; // [rsp+A8h] [rbp+28h]
  signed __int64 v318; // [rsp+B0h] [rbp+30h]
  __int64 v319; // [rsp+B8h] [rbp+38h]
  int v320; // [rsp+C4h] [rbp+44h]
  __int128 v321; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v322; // [rsp+D8h] [rbp+58h]
  __int64 v323; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v324; // [rsp+E8h] [rbp+68h]
  unsigned __int64 v325; // [rsp+F0h] [rbp+70h]
  __int64 v326; // [rsp+F8h] [rbp+78h]
  __int64 v327; // [rsp+100h] [rbp+80h]
  __int64 v328; // [rsp+108h] [rbp+88h]
  __m128i v329; // [rsp+110h] [rbp+90h] BYREF
  __int64 v330; // [rsp+120h] [rbp+A0h]
  __int64 v331; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v332; // [rsp+130h] [rbp+B0h]
  __int64 v333; // [rsp+138h] [rbp+B8h]
  __int64 v334; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v335; // [rsp+148h] [rbp+C8h]
  __int64 v336; // [rsp+150h] [rbp+D0h]
  __int64 v337; // [rsp+158h] [rbp+D8h]
  __int64 v338; // [rsp+160h] [rbp+E0h]
  __int64 v339; // [rsp+168h] [rbp+E8h]
  __int64 v340; // [rsp+170h] [rbp+F0h]
  int v341; // [rsp+17Ch] [rbp+FCh]
  __int64 v342; // [rsp+180h] [rbp+100h]
  __int64 v343; // [rsp+188h] [rbp+108h]
  __m128i v344; // [rsp+190h] [rbp+110h] BYREF
  __int64 v345; // [rsp+1A0h] [rbp+120h]
  __int64 v346; // [rsp+1A8h] [rbp+128h]
  __int64 v347; // [rsp+1B0h] [rbp+130h]
  __int64 v348; // [rsp+1B8h] [rbp+138h]
  __int64 v349; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v350; // [rsp+1C8h] [rbp+148h]
  __int64 v351; // [rsp+1D0h] [rbp+150h]
  __int64 v352; // [rsp+1D8h] [rbp+158h]
  __m128i v353; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v354; // [rsp+1F0h] [rbp+170h]
  __int64 *v355; // [rsp+200h] [rbp+180h]
  __int64 v356; // [rsp+208h] [rbp+188h]
  char v357; // [rsp+213h] [rbp+193h]
  char v358; // [rsp+214h] [rbp+194h]
  char v359; // [rsp+215h] [rbp+195h]
  char v360; // [rsp+216h] [rbp+196h]
  char v361; // [rsp+217h] [rbp+197h]
  char v362; // [rsp+218h] [rbp+198h]
  char v363; // [rsp+219h] [rbp+199h]
  char v364; // [rsp+21Ah] [rbp+19Ah]
  char v365; // [rsp+21Bh] [rbp+19Bh]
  char v366; // [rsp+21Ch] [rbp+19Ch]
  char v367; // [rsp+21Dh] [rbp+19Dh]
  char v368; // [rsp+21Fh] [rbp+19Fh]
  _BYTE v369[24]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v370; // [rsp+238h] [rbp+1B8h]
  __m256i v371; // [rsp+240h] [rbp+1C0h] BYREF
  char v372; // [rsp+26Eh] [rbp+1EEh]
  char v373; // [rsp+26Fh] [rbp+1EFh]
  __m256i v374; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v375; // [rsp+290h] [rbp+210h]
  char v376; // [rsp+29Fh] [rbp+21Fh]
  char v377; // [rsp+2A0h] [rbp+220h]
  char v378; // [rsp+2A1h] [rbp+221h]
  char v379; // [rsp+2A2h] [rbp+222h]
  char v380; // [rsp+2A3h] [rbp+223h]
  char v381; // [rsp+2A4h] [rbp+224h]
  char v382; // [rsp+2A5h] [rbp+225h]
  char v383; // [rsp+2A6h] [rbp+226h]
  char v384; // [rsp+2A7h] [rbp+227h]
  char v385; // [rsp+2A8h] [rbp+228h]
  char v386; // [rsp+2A9h] [rbp+229h]
  char v387; // [rsp+2AAh] [rbp+22Ah]
  char v388; // [rsp+2ABh] [rbp+22Bh]
  char v389; // [rsp+2ACh] [rbp+22Ch]
  char v390; // [rsp+2ADh] [rbp+22Dh]
  char v391; // [rsp+2AEh] [rbp+22Eh]
  char v392; // [rsp+2AFh] [rbp+22Fh]
  __m256i v393; // [rsp+2B0h] [rbp+230h] BYREF
  __m256i v394; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v395; // [rsp+2F0h] [rbp+270h]
  __int64 v396; // [rsp+2F8h] [rbp+278h]
  char v397; // [rsp+307h] [rbp+287h]
  __int64 v398; // [rsp+308h] [rbp+288h]

  v398 = -2;
  v355 = a3;
  v6 = (const __m128i *)sub_141433D50(aId_6, 2, a2);
  if ( v6 && v6->m128i_i8[0] == 3 )
  {
    *(__m128i *)v393.m256i_i8 = _mm_loadu_si128(v6 + 1);
    v394.m256i_i64[0] = (__int64)&v393;
    v7 = sub_14041F680;
  }
  else
  {
    sub_141356270(&v393);
    v394.m256i_i64[0] = (__int64)&v393;
    v7 = sub_140421AE0;
  }
  v394.m256i_i64[1] = (__int64)v7;
  sub_14149C0F0(v313, &unk_1417A4F1F, &v394);
  v342 = a2;
  v8 = sub_141433D50(aModel_6, 5, a2);
  v10 = &unk_1417A4B5D;
  v11 = 7;
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v11 = *(_QWORD *)(v8 + 24);
    if ( v11 < 0 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    if ( !v11 )
    {
      v338 = 1;
      LOBYTE(v3) = 1;
      v337 = 0;
      goto LABEL_14;
    }
    v10 = *(void **)(v8 + 16);
  }
  nullsub_1(v9);
  v12 = 1;
  v13 = sub_140001650(v11, 1);
  if ( !v13 )
LABEL_9:
    sub_1416C2D4B(v12, v11);
  v338 = v13;
  v337 = v11;
  sub_141684120(v13, v10, v11);
  v3 = 0;
LABEL_14:
  v349 = 0;
  v350 = 8;
  v351 = 0;
  v331 = 0;
  v332 = 1;
  v333 = 0;
  v14 = sub_141433D50(aContent_6, 7, v342);
  if ( !v14 || *(_BYTE *)v14 != 4 )
    goto LABEL_318;
  v320 = v3;
  v334 = 0;
  v335 = 8;
  v336 = 0;
  v323 = 0;
  v324 = 8;
  v325 = 0;
  v15 = *(_QWORD *)(v14 + 16);
  v352 = v15 + 32LL * *(_QWORD *)(v14 + 24);
  v16 = aType_8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1417A2D10);
  v18 = _mm_cvtsi32_si128(0x67u);
  while ( v15 != v352 )
  {
    v19 = v15;
    v397 = 1;
    v20 = sub_141433D50(v16, 4, v15);
    v15 += 32;
    if ( v20 && *(_BYTE *)v20 == 3 )
    {
      v21 = *(_QWORD *)(v20 + 24);
      v22 = *(_QWORD *)(v20 + 16);
      switch ( v21 )
      {
        case 4LL:
          if ( *(_DWORD *)v22 != 1954047348 )
            continue;
          v397 = 1;
          v23 = sub_141433D50(aText_10, 4, v19);
          if ( !v23 )
            continue;
          LOBYTE(v24) = *(_BYTE *)v23 != 3;
          v25 = *(_QWORD *)(v23 + 24);
          if ( (unsigned __int8)v24 | (v25 == 0) )
            continue;
          if ( v25 < 0 )
          {
            v27 = 0;
            goto LABEL_426;
          }
          v26 = *(_QWORD *)(v23 + 16);
          nullsub_1(v24);
          v27 = 1;
          v28 = sub_140001650(v25, 1);
          if ( !v28 )
          {
            v340 = v25;
LABEL_426:
            v397 = 1;
            sub_1416C2D4B(v27, v340);
          }
          v340 = v28;
          v375 = v25;
          sub_141684120(v28, v26, v25);
          v29 = v336;
          if ( v336 == v334 )
            sub_141689AB0(&v334);
          v30 = v335;
          v31 = 3 * v29;
          v32 = v375;
          *(_QWORD *)(v335 + 8 * v31) = v375;
          *(_QWORD *)(v30 + 8 * v31 + 8) = v340;
          *(_QWORD *)(v30 + 8 * v31 + 16) = v32;
          v336 = v29 + 1;
          continue;
        case 8LL:
          if ( *(_QWORD *)v22 == 0x676E696B6E696874LL )
            goto LABEL_52;
          if ( *(_QWORD *)v22 != 0x6573755F6C6F6F74LL )
            continue;
          v397 = 1;
          v47 = sub_141433D50(aId_6, 2, v19);
          v48 = 12;
          v375 = 12;
          if ( v47 )
          {
            v49 = &unk_1417A7B30;
            if ( *(_BYTE *)v47 == 3 )
            {
              v48 = *(_QWORD *)(v47 + 24);
              if ( v48 < 0 )
              {
                v59 = 0;
                v199 = v343;
                goto LABEL_268;
              }
              v50 = v16;
              v375 = *(_QWORD *)(v47 + 24);
              v51 = a1;
              if ( !v48 )
              {
                v343 = 1;
                v341 = 1;
                v375 = 0;
                goto LABEL_63;
              }
              v49 = *(void **)(v47 + 16);
            }
          }
          else
          {
            v49 = &unk_1417A7B30;
          }
          v50 = v16;
          v51 = a1;
          nullsub_1(v48);
          v59 = 1;
          v60 = v375;
          v61 = sub_140001650(v375, 1);
          if ( !v61 )
          {
            v199 = v60;
LABEL_268:
            v397 = 1;
            sub_1416C2D4B(v59, v199);
          }
          v343 = v61;
          sub_141684120(v61, v49, v60);
          v341 = 0;
LABEL_63:
          v62 = sub_141433D50(aName_7, 4, v19);
          v16 = v50;
          v64 = 4;
          if ( v62 )
          {
            v65 = "tool";
            if ( *(_BYTE *)v62 == 3 )
            {
              v64 = *(_QWORD *)(v62 + 24);
              if ( v64 < 0 )
              {
                v69 = 0;
                goto LABEL_430;
              }
              if ( !v64 )
              {
                v346 = 1;
                v356 = 0;
                goto LABEL_75;
              }
              v65 = *(const char **)(v62 + 16);
            }
          }
          else
          {
            v65 = "tool";
          }
          nullsub_1(v63);
          v69 = 1;
          v70 = (_QWORD *)sub_140001650(v64, 1);
          if ( !v70 )
          {
            v346 = v64;
LABEL_430:
            sub_1416C2D4B(v69, v346);
          }
          v346 = (__int64)v70;
          v356 = v64;
          sub_141684120(v70, v65, v64);
LABEL_75:
          v71 = (const __m128i *)sub_141433D50(aInput_2, 5, v19);
          v72 = v51;
          if ( v71 )
          {
            switch ( v71->m128i_i8[0] )
            {
              case 0:
                v394.m256i_i8[0] = 0;
                break;
              case 1:
              case 2:
                v73 = _mm_loadu_si128(v71);
                *(__m128i *)&v394.m256i_u64[2] = _mm_loadu_si128(v71 + 1);
                *(__m128i *)v394.m256i_i8 = v73;
                break;
              case 3:
                sub_14149C500(&v394.m256i_u64[1], &v71->m128i_u64[1]);
                v394.m256i_i8[0] = 3;
                break;
              case 4:
                sub_1402CE260(&v394.m256i_u64[1], v71[1].m128i_i64[0], v71[1].m128i_i64[1]);
                v394.m256i_i8[0] = 4;
                break;
              case 5:
                sub_140323EA0(&v394.m256i_i64[1], &v71->m128i_i64[1]);
                v394.m256i_i8[0] = 5;
                break;
            }
            *(__m128i *)&v374.m256i_u64[2] = _mm_load_si128((const __m128i *)&v394.m256i_u64[2]);
            v374.m256i_i8[0] = v394.m256i_i8[0];
            *(__int64 *)((char *)v374.m256i_i64 + 1) = *(__int64 *)((char *)v394.m256i_i64 + 1);
            *(__int32 *)((char *)&v374.m256i_i32[2] + 1) = *(__int32 *)((char *)&v394.m256i_i32[2] + 1);
            *(__int16 *)((char *)&v374.m256i_i16[6] + 1) = *(__int16 *)((char *)&v394.m256i_i16[6] + 1);
            v374.m256i_i8[15] = v394.m256i_i8[15];
            v394.m256i_i8[0] = 0;
            sub_1400104F0(&v394);
          }
          else
          {
            v394.m256i_i8[0] = 0;
            *(__m128i *)&v374.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            v374.m256i_i8[0] = 0;
            *(__int64 *)((char *)v374.m256i_i64 + 1) = *(__int64 *)((char *)v394.m256i_i64 + 1);
            *(__int32 *)((char *)&v374.m256i_i32[2] + 1) = *(__int32 *)((char *)&v394.m256i_i32[2] + 1);
            *(__int16 *)((char *)&v374.m256i_i16[6] + 1) = *(__int16 *)((char *)&v394.m256i_i16[6] + 1);
            v374.m256i_i8[15] = v394.m256i_i8[15];
          }
          sub_140985700(&v394, (__int64)&v374);
          v78 = (__int64 *)v394.m256i_i64[1];
          v79 = v356;
          if ( v394.m256i_i64[0] == -1 )
          {
            v394.m256i_i64[0] = v394.m256i_i64[1];
            nullsub_1(v77);
            v82 = (_WORD *)sub_140001650(2, 1);
            if ( !v82 )
              sub_1416C2D4B(1, 2);
            v81 = (__int64)v82;
            *v82 = 32123;
            v83 = *v78;
            v84 = *v78 == 1;
            v347 = (__int64)v78;
            if ( v84 )
            {
              sub_140018650(v78 + 1);
            }
            else if ( !v83 )
            {
              v85 = *(_QWORD *)(v347 + 16);
              if ( v85 )
                sub_140001660(*(_QWORD *)(v347 + 8), v85, 1);
            }
            sub_140001660(v347, 40, 8);
            v80 = 2;
            v326 = 2;
            v79 = v356;
          }
          else
          {
            v326 = v394.m256i_i64[0];
            v80 = v394.m256i_i64[2];
            v81 = v394.m256i_i64[1];
          }
          v319 = v81;
          normalize_anthropic_tool_call_for_respon(
            (__int64)&v394,
            (_QWORD *)v346,
            v79,
            v81,
            (__int64 (__fastcall *)(_QWORD, _QWORD))v80);
          v339 = v394.m256i_i64[1];
          v347 = v394.m256i_i64[0];
          v317 = v394.m256i_i64[3];
          v86 = v394.m256i_i64[2];
          v328 = v395;
          v87 = v396;
          v353.m128i_i64[0] = 0;
          v354 = 0;
          nullsub_1(v88);
          v89 = (_DWORD *)sub_140001650(4, 1);
          if ( !v89 )
            sub_1416C2D4B(1, 4);
          *v89 = 1701869940;
          *(_QWORD *)v369 = 4;
          *(_QWORD *)&v369[8] = v89;
          *(_QWORD *)&v369[16] = 4;
          nullsub_1(v90);
          v91 = (void *)sub_140001650(13, 1);
          v348 = (__int64)v91;
          if ( !v91 )
            sub_1416C2D4B(1, 13);
          v318 = v86;
          qmemcpy(v91, "function_call", 13);
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = 13;
          v394.m256i_i64[2] = (__int64)v91;
          v394.m256i_i64[3] = 13;
          sub_140307860(&v393, &v353, v369, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          nullsub_1(v92);
          v93 = (_WORD *)sub_140001650(2, 1);
          if ( !v93 )
            sub_1416C2D4B(1, 2);
          v312 = v72;
          *v93 = 25705;
          *(_QWORD *)v369 = 2;
          v348 = (__int64)v93;
          *(_QWORD *)&v369[8] = v93;
          *(_QWORD *)&v369[16] = 2;
          sub_141356270(&v394);
          v344 = _mm_loadu_si128((const __m128i *)&v394);
          v393.m256i_i64[0] = (__int64)&v344;
          v393.m256i_i64[1] = (__int64)sub_140421AE0;
          sub_14149C0F0(&v394, &unk_1417A5F38, &v393);
          v327 = v394.m256i_i64[1];
          v348 = v394.m256i_i64[0];
          v95 = v394.m256i_i64[2];
          if ( v394.m256i_i64[2] < 0 )
          {
            v96 = 0;
LABEL_428:
            v366 = 1;
            sub_1416C2D4B(v96, v95);
          }
          if ( v394.m256i_i64[2] )
          {
            nullsub_1(v94);
            v96 = 1;
            v97 = sub_140001650(v95, 1);
            if ( !v97 )
              goto LABEL_428;
            v98 = v97;
            sub_141684120(v97, v327, v95);
          }
          else
          {
            v98 = 1;
          }
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = v95;
          v394.m256i_i64[2] = v98;
          v394.m256i_i64[3] = v95;
          v366 = 0;
          sub_140307860(&v393, &v353, v369, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          if ( v348 )
            sub_140001660(v327, v348, 1);
          nullsub_1(v99);
          v100 = (_DWORD *)sub_140001650(7, 1);
          v102 = v375;
          if ( !v100 )
            sub_1416C2D4B(1, 7);
          *(_DWORD *)((char *)v100 + 3) = 1684627308;
          *v100 = 1819042147;
          *(_QWORD *)v369 = 7;
          *(_QWORD *)&v369[8] = v100;
          *(_QWORD *)&v369[16] = 7;
          v103 = 1;
          if ( !(_BYTE)v341 )
          {
            nullsub_1(v101);
            v104 = sub_140001650(v102, 1);
            if ( !v104 )
            {
              v365 = 1;
              sub_1416C2D4B(1, v102);
            }
            v103 = v104;
            sub_141684120(v104, v343, v102);
          }
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = v102;
          v394.m256i_i64[2] = v103;
          v394.m256i_i64[3] = v102;
          v365 = 0;
          sub_140307860(&v393, &v353, v369, &v394);
          a1 = v312;
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          nullsub_1(v105);
          v106 = (_DWORD *)sub_140001650(4, 1);
          if ( !v106 )
            sub_1416C2D4B(1, 4);
          *v106 = 1701667182;
          *(_QWORD *)v369 = 4;
          *(_QWORD *)&v369[8] = v106;
          *(_QWORD *)&v369[16] = 4;
          v108 = v318;
          if ( v318 < 0 )
          {
            v109 = 0;
LABEL_432:
            v364 = 1;
            sub_1416C2D4B(v109, v108);
          }
          if ( v318 )
          {
            nullsub_1(v107);
            v109 = 1;
            v110 = sub_140001650(v108, 1);
            if ( !v110 )
              goto LABEL_432;
            v111 = v110;
            sub_141684120(v110, v339, v108);
          }
          else
          {
            v111 = 1;
          }
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = v108;
          v394.m256i_i64[2] = v111;
          v394.m256i_i64[3] = v108;
          v364 = 0;
          sub_140307860(&v393, &v353, v369, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          nullsub_1(v112);
          v113 = sub_140001650(9, 1);
          if ( !v113 )
            sub_1416C2D4B(1, 9);
          *(_QWORD *)v113 = 0x746E656D75677261LL;
          *(_BYTE *)(v113 + 8) = 115;
          *(_QWORD *)v369 = 9;
          *(_QWORD *)&v369[8] = v113;
          *(_QWORD *)&v369[16] = 9;
          if ( v87 < 0 )
          {
            v114 = 0;
LABEL_436:
            v363 = 1;
            sub_1416C2D4B(v114, v87);
          }
          if ( v87 )
          {
            nullsub_1(0x746E656D75677261LL);
            v114 = 1;
            v115 = sub_140001650(v87, 1);
            if ( !v115 )
              goto LABEL_436;
            v116 = v115;
            sub_141684120(v115, v328, v87);
          }
          else
          {
            v116 = 1;
          }
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = v87;
          v394.m256i_i64[2] = v116;
          v394.m256i_i64[3] = v87;
          v363 = 0;
          sub_140307860(&v393, &v353, v369, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          nullsub_1(v175);
          v176 = sub_140001650(6, 1);
          if ( !v176 )
            sub_1416C2D4B(1, 6);
          *(_WORD *)(v176 + 4) = 29557;
          *(_DWORD *)v176 = 1952543859;
          *(_QWORD *)v369 = 6;
          *(_QWORD *)&v369[8] = v176;
          *(_QWORD *)&v369[16] = 6;
          nullsub_1(v177);
          v178 = sub_140001650(9, 1);
          v348 = v178;
          if ( !v178 )
            sub_1416C2D4B(1, 9);
          *(_QWORD *)v178 = 0x6574656C706D6F63LL;
          *(_BYTE *)(v178 + 8) = 100;
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = 9;
          v394.m256i_i64[2] = v178;
          v394.m256i_i64[3] = 9;
          sub_140307860(&v393, &v353, v369, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          v371.m256i_i64[3] = v354;
          *(__m128i *)&v371.m256i_u64[1] = _mm_loadu_si128(&v353);
          v371.m256i_i8[0] = 5;
          v373 = 1;
          sub_140A0E950((__int64)&v371, v339, v318, v355);
          v179 = _mm_loadu_si128((const __m128i *)&v371);
          *(__m128i *)&v394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v371.m256i_u64[2]);
          *(__m128i *)v394.m256i_i8 = v179;
          v180 = v325;
          if ( v325 == v323 )
            sub_1416890A0(&v323);
          v181 = v324;
          v182 = 32 * v180;
          v183 = _mm_load_si128((const __m128i *)&v394);
          *(__m128i *)(v324 + v182 + 16) = _mm_load_si128((const __m128i *)&v394.m256i_u64[2]);
          *(__m128i *)(v181 + v182) = v183;
          v325 = v180 + 1;
          if ( v317 )
            sub_140001660(v328, v317, 1);
          if ( v347 )
            sub_140001660(v339, v347, 1);
          if ( v326 )
            sub_140001660(v319, v326, 1);
          sub_1400104F0(&v374);
          if ( v356 )
            sub_140001660(v346, v356, 1);
          if ( v375 )
            sub_140001660(v343, v375, 1);
          break;
        case 15LL:
          if ( *(_QWORD *)v22 ^ 0x745F726576726573LL | *(_QWORD *)(v22 + 7) ^ 0x6573755F6C6F6F74LL )
            continue;
          v397 = 1;
          v33 = sub_141433D50(aName_7, 4, v19);
          if ( !v33 )
            continue;
          if ( *(_BYTE *)v33 != 3 )
            continue;
          if ( *(_QWORD *)(v33 + 24) != 10 )
            continue;
          v34 = *(_QWORD *)(v33 + 16);
          v35 = *(_QWORD *)v34 ^ 0x726165735F626577LL;
          if ( v35 | *(unsigned __int16 *)(v34 + 8) ^ 0x6863LL )
            continue;
          *(_QWORD *)v369 = 0;
          *(_QWORD *)&v369[16] = 0;
          nullsub_1(v35);
          v36 = (_DWORD *)sub_140001650(4, 1);
          if ( !v36 )
            sub_1416C2D4B(1, 4);
          *v36 = 1701869940;
          v374.m256i_i64[0] = 4;
          v374.m256i_i64[1] = (__int64)v36;
          v374.m256i_i64[2] = 4;
          nullsub_1(v37);
          v38 = (void *)sub_140001650(15, 1);
          v375 = (__int64)v38;
          if ( !v38 )
            sub_1416C2D4B(1, 15);
          qmemcpy(v38, "web_search_call", 15);
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = 15;
          v394.m256i_i64[2] = (__int64)v38;
          v394.m256i_i64[3] = 15;
          sub_140307860(&v393, v369, &v374, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          nullsub_1(v39);
          v40 = (_WORD *)sub_140001650(2, 1);
          if ( !v40 )
            sub_1416C2D4B(1, 2);
          *v40 = 25705;
          v374.m256i_i64[0] = 2;
          v375 = (__int64)v40;
          v374.m256i_i64[1] = (__int64)v40;
          v374.m256i_i64[2] = 2;
          sub_141356270(&v394);
          v353 = _mm_loadu_si128((const __m128i *)&v394);
          v393.m256i_i64[0] = (__int64)&v353;
          v393.m256i_i64[1] = (__int64)sub_140421AE0;
          sub_14149C0F0(&v394, &unk_1417A6210, &v393);
          v42 = v394.m256i_i64[2];
          v356 = v394.m256i_i64[1];
          v375 = v394.m256i_i64[0];
          if ( v394.m256i_i64[2] < 0 )
          {
            v44 = 0;
LABEL_434:
            v367 = 1;
            sub_1416C2D4B(v44, v42);
          }
          v43 = a1;
          if ( v394.m256i_i64[2] )
          {
            nullsub_1(v41);
            v44 = 1;
            v45 = sub_140001650(v42, 1);
            if ( !v45 )
              goto LABEL_434;
            v46 = v45;
            sub_141684120(v45, v356, v42);
          }
          else
          {
            v46 = 1;
          }
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = v42;
          v394.m256i_i64[2] = v46;
          v394.m256i_i64[3] = v42;
          v367 = 0;
          sub_140307860(&v393, v369, &v374, &v394);
          a1 = v43;
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          if ( v375 )
            sub_140001660(v356, v375, 1);
          nullsub_1(v171);
          v172 = sub_140001650(6, 1);
          if ( !v172 )
            sub_1416C2D4B(1, 6);
          *(_WORD *)(v172 + 4) = 29557;
          *(_DWORD *)v172 = 1952543859;
          v374.m256i_i64[0] = 6;
          v374.m256i_i64[1] = v172;
          v374.m256i_i64[2] = 6;
          nullsub_1(v173);
          v174 = sub_140001650(9, 1);
          v375 = v174;
          if ( !v174 )
            sub_1416C2D4B(1, 9);
          *(_QWORD *)v174 = 0x6574656C706D6F63LL;
          *(_BYTE *)(v174 + 8) = 100;
          v394.m256i_i8[0] = 3;
          v394.m256i_i64[1] = 9;
          v394.m256i_i64[2] = v174;
          v394.m256i_i64[3] = 9;
          sub_140307860(&v393, v369, &v374, &v394);
          if ( v393.m256i_i8[0] != -1 )
            sub_1400104F0(&v393);
          v371.m256i_i64[3] = *(_QWORD *)&v369[16];
          *(_OWORD *)&v371.m256i_u64[1] = *(_OWORD *)v369;
          v371.m256i_i8[0] = 5;
          v166 = v351;
          if ( v351 == v349 )
            sub_1416890A0(&v349);
          v167 = v350;
          v168 = 32 * v166;
          v169 = _mm_loadu_si128((const __m128i *)&v371);
          v170 = _mm_loadu_si128((const __m128i *)&v371.m256i_u64[2]);
LABEL_229:
          *(__m128i *)(v167 + v168 + 16) = v170;
          *(__m128i *)(v167 + v168) = v169;
          v351 = v166 + 1;
          continue;
        case 17LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v22 + 16)), v18),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v22), si128))) != 0xFFFF )
            continue;
LABEL_52:
          v397 = 1;
          v52 = sub_141433D50(v16, 4, v19);
          if ( !v52 || *(_BYTE *)v52 != 3 )
            continue;
          v53 = *(const __m128i **)(v52 + 16);
          v54 = *(_QWORD *)(v52 + 24);
          if ( v54 == 17 )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(v53[1].m128i_u8[0]), v18),
                     _mm_cmpeq_epi8(_mm_loadu_si128(v53), si128))) != 0xFFFF )
              continue;
            v397 = 1;
            v66 = sub_141433D50("data", 4, v19);
            v67 = 1;
            if ( v66 )
            {
              if ( *(_BYTE *)v66 == 3 )
              {
                v67 = *(_QWORD *)(v66 + 16);
                v68 = *(_QWORD *)(v66 + 24);
              }
              else
              {
                v68 = 0;
              }
            }
            else
            {
              v68 = 0;
            }
            *(_QWORD *)&v321 = v67;
            *((_QWORD *)&v321 + 1) = v68;
            *(_QWORD *)v369 = 0;
            *(_QWORD *)&v369[16] = 0;
            nullsub_1(v67);
            v117 = (_DWORD *)sub_140001650(4, 1);
            if ( !v117 )
              sub_1416C2D4B(1, 4);
            *v117 = 1701869940;
            v374.m256i_i64[0] = 4;
            v374.m256i_i64[1] = (__int64)v117;
            v374.m256i_i64[2] = 4;
            v392 = 1;
            sub_140B56640(&v394, &off_1417A6360);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A8898);
            }
            v118 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v118;
            v392 = 0;
            sub_140307860(&v394, v369, &v374, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v119);
            v120 = (_DWORD *)sub_140001650(4, 1);
            if ( !v120 )
              sub_1416C2D4B(1, 4);
            *v120 = 1635017060;
            v374.m256i_i64[0] = 4;
            v374.m256i_i64[1] = (__int64)v120;
            v374.m256i_i64[2] = 4;
            v391 = 1;
            sub_140B56640(&v394, &v321);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A8898);
            }
            v121 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v121;
            v391 = 0;
            sub_140307860(&v394, v369, &v374, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            v371.m256i_i64[3] = *(_QWORD *)&v369[16];
            *(__m128i *)&v371.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v369);
            v371.m256i_i8[0] = 5;
            encode_anthropic_thinking_payload(&v394, (__int64)&v371);
            if ( v394.m256i_i64[0] == -1 )
            {
              v397 = 1;
              sub_1400104F0(&v371);
              continue;
            }
            v330 = v394.m256i_i64[2];
            v329 = _mm_loadu_si128((const __m128i *)&v394);
            v344.m128i_i64[0] = 0;
            v345 = 0;
            nullsub_1(v122);
            v123 = (_WORD *)sub_140001650(2, 1);
            if ( !v123 )
              sub_1416C2D4B(1, 2);
            *v123 = 25705;
            v353.m128i_i64[0] = 2;
            v375 = (__int64)v123;
            v353.m128i_i64[1] = (__int64)v123;
            v354 = 2;
            sub_141356270(&v394);
            *(__m128i *)v369 = _mm_loadu_si128((const __m128i *)&v394);
            v393.m256i_i64[0] = (__int64)v369;
            v393.m256i_i64[1] = (__int64)sub_140421AE0;
            sub_14149C0F0(&v394, &unk_1417A5EC8, &v393);
            *(__m128i *)v369 = _mm_loadu_si128((const __m128i *)&v394);
            *(_QWORD *)&v369[16] = v394.m256i_i64[2];
            v390 = 1;
            sub_140B56520(&v394, v369);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88B0);
            }
            v124 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v124;
            v390 = 0;
            sub_140307860(&v394, &v344, &v353, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            if ( *(_QWORD *)v369 )
              sub_140001660(*(_QWORD *)&v369[8], *(_QWORD *)v369, 1);
            nullsub_1(v125);
            v126 = (_DWORD *)sub_140001650(4, 1);
            if ( !v126 )
              sub_1416C2D4B(1, 4);
            *v126 = 1701869940;
            *(_QWORD *)v369 = 4;
            *(_QWORD *)&v369[8] = v126;
            *(_QWORD *)&v369[16] = 4;
            v389 = 1;
            sub_140B56640(&v394, &off_1417A5E60);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88B0);
            }
            v127 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v127;
            v389 = 0;
            sub_140307860(&v394, &v344, v369, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v128);
            v129 = sub_140001650(6, 1);
            if ( !v129 )
              sub_1416C2D4B(1, 6);
            *(_WORD *)(v129 + 4) = 29557;
            *(_DWORD *)v129 = 1952543859;
            *(_QWORD *)v369 = 6;
            *(_QWORD *)&v369[8] = v129;
            *(_QWORD *)&v369[16] = 6;
            v388 = 1;
            sub_140B56640(&v394, &off_1417A5B58);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88B0);
            }
            v130 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v130;
            v388 = 0;
            sub_140307860(&v394, &v344, v369, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v131);
            v132 = (_DWORD *)sub_140001650(7, 1);
            if ( !v132 )
              sub_1416C2D4B(1, 7);
            *(_DWORD *)((char *)v132 + 3) = 2037539181;
            *v132 = 1835890035;
            *(_QWORD *)v369 = 7;
            *(_QWORD *)&v369[8] = v132;
            *(_QWORD *)&v369[16] = 7;
            v394.m256i_i64[1] = 0;
            *(_OWORD *)&v394.m256i_u64[2] = 8u;
            v394.m256i_i8[0] = 4;
            sub_140307860(&v393, &v344, v369, &v394);
            if ( v393.m256i_i8[0] != -1 )
              sub_1400104F0(&v393);
            nullsub_1(v133);
            v134 = (__m128i *)sub_140001650(17, 1);
            if ( !v134 )
              sub_1416C2D4B(1, 17);
            *v134 = _mm_loadu_si128((const __m128i *)aEncryptedConte_0);
            v134[1].m128i_i8[0] = 116;
            *(_QWORD *)v369 = 17;
            *(_QWORD *)&v369[8] = v134;
            *(_QWORD *)&v369[16] = 17;
            v387 = 1;
            sub_140B56520(&v394, &v329);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88B0);
            }
            v135 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v135;
            v387 = 0;
            sub_140307860(&v394, &v344, v369, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            *(__m128i *)v394.m256i_i8 = v344;
            v394.m256i_i64[2] = v345;
            *(__int64 *)((char *)&v374.m256i_i64[2] + 7) = v345;
            *(__m128i *)((char *)&v374.m256i_u32[1] + 3) = v344;
            v136 = _mm_loadu_si128((const __m128i *)((char *)&v374.m256i_u64[1] + 7));
            *(__m128i *)v393.m256i_i8 = _mm_loadu_si128((const __m128i *)&v374);
            *(__m128i *)((char *)&v393.m256i_u64[1] + 7) = v136;
            if ( v329.m128i_i64[0] )
              sub_140001660(v329.m128i_i64[1], v329.m128i_i64[0], 1);
            v397 = 1;
            sub_1400104F0(&v371);
            v137 = 5;
LABEL_214:
            v394.m256i_i8[0] = v137;
            *(_OWORD *)&v394.m256i_u64[2] = *(_OWORD *)((char *)&v393.m256i_u64[1] + 7);
            *(_OWORD *)&v394.m256i_i8[1] = *(_OWORD *)v393.m256i_i8;
            v166 = v351;
            if ( v351 == v349 )
              sub_1416890A0(&v349);
            v167 = v350;
            v168 = 32 * v166;
            v169 = _mm_loadu_si128((const __m128i *)&v394);
            v170 = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            goto LABEL_229;
          }
          if ( v54 == 8 && v53->m128i_i64[0] == 0x676E696B6E696874LL )
          {
            v397 = 1;
            v55 = sub_141433D50(aThinking_0, 8, v19);
            if ( v55 && *(_BYTE *)v55 == 3 )
            {
              v56 = *(_QWORD *)(v55 + 16);
              v57 = *(_QWORD *)(v55 + 24);
              v315 = v56;
              v316 = v57;
              v58 = v57 == 0;
            }
            else
            {
              v315 = 1;
              v316 = 0;
              v58 = 1;
            }
            v397 = 1;
            v74 = sub_141433D50(aSignature, 9, v19);
            v75 = 1;
            if ( v74 )
            {
              if ( *(_BYTE *)v74 == 3 )
              {
                v75 = *(_QWORD *)(v74 + 16);
                v76 = *(_QWORD *)(v74 + 24);
              }
              else
              {
                v76 = 0;
              }
            }
            else
            {
              v76 = 0;
            }
            v309[0] = v75;
            v309[1] = v76;
            v374.m256i_i64[0] = 0;
            v374.m256i_i64[2] = 0;
            nullsub_1(v75);
            v138 = (_DWORD *)sub_140001650(4, 1);
            if ( !v138 )
              sub_1416C2D4B(1, 4);
            *v138 = 1701869940;
            v371.m256i_i64[0] = 4;
            v371.m256i_i64[1] = (__int64)v138;
            v371.m256i_i64[2] = 4;
            v386 = 1;
            sub_140B56640(&v394, &off_1417A6478);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88C8);
            }
            v139 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v139;
            v386 = 0;
            sub_140307860(&v394, &v374, &v371, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v140);
            v141 = (_QWORD *)sub_140001650(8, 1);
            if ( !v141 )
              sub_1416C2D4B(1, 8);
            *v141 = 0x676E696B6E696874LL;
            v371.m256i_i64[0] = 8;
            v371.m256i_i64[1] = (__int64)v141;
            v371.m256i_i64[2] = 8;
            v385 = 1;
            sub_140B56640(&v394, &v315);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88C8);
            }
            v142 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v142;
            v385 = 0;
            sub_140307860(&v394, &v374, &v371, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v143);
            v144 = sub_140001650(9, 1);
            if ( !v144 )
              sub_1416C2D4B(1, 9);
            *(_QWORD *)v144 = 0x727574616E676973LL;
            *(_BYTE *)(v144 + 8) = 101;
            v371.m256i_i64[0] = 9;
            v371.m256i_i64[1] = v144;
            v371.m256i_i64[2] = 9;
            v384 = 1;
            sub_140B56640(&v394, v309);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88C8);
            }
            v145 = _mm_loadu_si128((const __m128i *)&v394);
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v145;
            v384 = 0;
            sub_140307860(&v394, &v374, &v371, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            v370 = v374.m256i_i64[2];
            *(_OWORD *)&v369[8] = *(_OWORD *)v374.m256i_i8;
            v369[0] = 5;
            encode_anthropic_thinking_payload(&v310, (__int64)v369);
            *(_QWORD *)&v321 = 0;
            v322 = 0;
            nullsub_1(v146);
            v147 = (_WORD *)sub_140001650(2, 1);
            if ( !v147 )
              sub_1416C2D4B(1, 2);
            *v147 = 25705;
            v353.m128i_i64[0] = 2;
            v375 = (__int64)v147;
            v353.m128i_i64[1] = (__int64)v147;
            v354 = 2;
            sub_141356270(&v394);
            *(_OWORD *)v371.m256i_i8 = *(_OWORD *)v394.m256i_i8;
            v393.m256i_i64[0] = (__int64)&v371;
            v393.m256i_i64[1] = (__int64)sub_140421AE0;
            sub_14149C0F0(&v394, &unk_1417A5EC8, &v393);
            *(_OWORD *)v371.m256i_i8 = *(_OWORD *)v394.m256i_i8;
            v371.m256i_i64[2] = v394.m256i_i64[2];
            v383 = 1;
            sub_140B56520(&v394, &v371);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88E0);
            }
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(_OWORD *)v393.m256i_i8 = *(_OWORD *)v394.m256i_i8;
            v383 = 0;
            sub_140307860(&v394, &v321, &v353, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            if ( v371.m256i_i64[0] )
              sub_140001660(v371.m256i_i64[1], v371.m256i_i64[0], 1);
            nullsub_1(v148);
            v149 = (_DWORD *)sub_140001650(4, 1);
            if ( !v149 )
              sub_1416C2D4B(1, 4);
            *v149 = 1701869940;
            v371.m256i_i64[0] = 4;
            v371.m256i_i64[1] = (__int64)v149;
            v371.m256i_i64[2] = 4;
            v382 = 1;
            sub_140B56640(&v394, &off_1417A5E60);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88E0);
            }
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(_OWORD *)v393.m256i_i8 = *(_OWORD *)v394.m256i_i8;
            v382 = 0;
            sub_140307860(&v394, &v321, &v371, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v150);
            v151 = sub_140001650(6, 1);
            if ( !v151 )
              sub_1416C2D4B(1, 6);
            *(_WORD *)(v151 + 4) = 29557;
            *(_DWORD *)v151 = 1952543859;
            v371.m256i_i64[0] = 6;
            v371.m256i_i64[1] = v151;
            v371.m256i_i64[2] = 6;
            v381 = 1;
            sub_140B56640(&v394, &off_1417A5B58);
            if ( v394.m256i_i8[0] == -1 )
            {
              v393.m256i_i64[0] = v394.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v393,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88E0);
            }
            *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
            *(_OWORD *)v393.m256i_i8 = *(_OWORD *)v394.m256i_i8;
            v381 = 0;
            sub_140307860(&v394, &v321, &v371, &v393);
            if ( v394.m256i_i8[0] != -1 )
              sub_1400104F0(&v394);
            nullsub_1(v152);
            v153 = (_DWORD *)sub_140001650(7, 1);
            if ( !v153 )
              sub_1416C2D4B(1, 7);
            *(_DWORD *)((char *)v153 + 3) = 2037539181;
            *v153 = 1835890035;
            v329.m128i_i64[0] = 7;
            v329.m128i_i64[1] = (__int64)v153;
            v330 = 7;
            if ( v58 )
            {
              v155 = 8;
              v156 = 0;
            }
            else
            {
              v356 = (__int64)v153;
              nullsub_1(v154);
              v157 = sub_140001650(32, 8);
              if ( !v157 )
                sub_1416C2D31(8, 32);
              v375 = v157;
              v344.m128i_i64[0] = 0;
              v345 = 0;
              nullsub_1(v158);
              v159 = (_DWORD *)sub_140001650(4, 1);
              if ( !v159 )
                sub_1416C2D4B(1, 4);
              *v159 = 1701869940;
              v353.m128i_i64[0] = 4;
              v353.m128i_i64[1] = (__int64)v159;
              v354 = 4;
              v380 = 1;
              sub_140B56640(&v394, &off_1417A5E88);
              if ( v394.m256i_i8[0] == -1 )
              {
                v393.m256i_i64[0] = v394.m256i_i64[1];
                sub_1416C3060(
                  (unsigned int)aCalledResultUn_15,
                  43,
                  (unsigned int)&v393,
                  (unsigned int)&off_1417A5560,
                  (__int64)&off_1417A88F8);
              }
              *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
              *(_OWORD *)v393.m256i_i8 = *(_OWORD *)v394.m256i_i8;
              v380 = 0;
              sub_140307860(&v394, &v344, &v353, &v393);
              if ( v394.m256i_i8[0] != -1 )
                sub_1400104F0(&v394);
              nullsub_1(v160);
              v161 = (_DWORD *)sub_140001650(4, 1);
              if ( !v161 )
                sub_1416C2D4B(1, 4);
              *v161 = 1954047348;
              v353.m128i_i64[0] = 4;
              v353.m128i_i64[1] = (__int64)v161;
              v354 = 4;
              v379 = 1;
              sub_140B56640(&v394, &v315);
              if ( v394.m256i_i8[0] == -1 )
              {
                v393.m256i_i64[0] = v394.m256i_i64[1];
                sub_1416C3060(
                  (unsigned int)aCalledResultUn_15,
                  43,
                  (unsigned int)&v393,
                  (unsigned int)&off_1417A5560,
                  (__int64)&off_1417A88F8);
              }
              *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
              *(_OWORD *)v393.m256i_i8 = *(_OWORD *)v394.m256i_i8;
              v379 = 0;
              sub_140307860(&v394, &v344, &v353, &v393);
              if ( v394.m256i_i8[0] != -1 )
                sub_1400104F0(&v394);
              *(__m128i *)v394.m256i_i8 = v344;
              v394.m256i_i64[2] = v345;
              *(__int64 *)((char *)&v371.m256i_i64[2] + 7) = v345;
              *(__m128i *)((char *)&v371.m256i_u32[1] + 3) = v344;
              v155 = v375;
              *(_BYTE *)v375 = 5;
              v162 = _mm_loadu_si128((const __m128i *)((char *)&v371.m256i_u64[1] + 7));
              *(_OWORD *)(v155 + 1) = *(_OWORD *)v371.m256i_i8;
              *(__m128i *)(v155 + 16) = v162;
              v156 = 1;
            }
            v394.m256i_i64[1] = v156;
            v394.m256i_i64[2] = v155;
            v394.m256i_i64[3] = v156;
            v394.m256i_i8[0] = 4;
            v378 = 1;
            sub_140B842D0(&v393, &v394);
            if ( v393.m256i_i8[0] == -1 )
            {
              v371.m256i_i64[0] = v393.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v371,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A88E0);
            }
            *(__m128i *)&v371.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v393.m256i_u64[2]);
            *(_OWORD *)v371.m256i_i8 = *(_OWORD *)v393.m256i_i8;
            v378 = 0;
            sub_140307860(&v393, &v321, &v329, &v371);
            if ( v393.m256i_i8[0] != -1 )
              sub_1400104F0(&v393);
            sub_1400104F0(&v394);
            v374.m256i_i64[3] = v322;
            *(_OWORD *)&v374.m256i_u64[1] = v321;
            v374.m256i_i8[0] = 5;
            if ( (_QWORD)v310 == -1 )
            {
              v137 = 5;
            }
            else
            {
              v356 = v310;
              v394.m256i_i64[3] = v311;
              *(_OWORD *)&v394.m256i_u64[1] = v310;
              v394.m256i_i8[0] = 3;
              v368 = 1;
              v375 = sub_141433E50(aEncryptedConte_0, 17, &v374);
              sub_1400104F0(v375);
              v163 = *(_OWORD *)v394.m256i_i8;
              v164 = (_OWORD *)v375;
              *(__m128i *)(v375 + 16) = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
              *v164 = v163;
              v137 = v374.m256i_i8[0];
            }
            v165 = _mm_loadu_si128((const __m128i *)&v374.m256i_i8[1]);
            *(__m128i *)((char *)&v393.m256i_u64[1] + 7) = _mm_loadu_si128((const __m128i *)&v374.m256i_u64[2]);
            *(__m128i *)v393.m256i_i8 = v165;
            v397 = 1;
            sub_1400104F0(v369);
            if ( v137 != -1 )
              goto LABEL_214;
          }
          continue;
        default:
          continue;
      }
    }
  }
  if ( v336 )
  {
    v397 = 1;
    sub_140440300((unsigned int)&v394, v335, v336, (unsigned int)asc_1417A47C8, 1);
    v185 = v394.m256i_i64[1];
    v184 = v394.m256i_i64[0];
    v186 = v394.m256i_i64[2];
    v187 = v333;
    v356 = v394.m256i_i64[1];
    v352 = v394.m256i_i64[0];
    if ( v394.m256i_i64[2] > (unsigned __int64)(v331 - v333) )
    {
      sub_141688D30((unsigned int)&v331, v333, v394.m256i_i32[4], 1, 1);
      v187 = v333;
      v185 = v356;
    }
    else if ( !v394.m256i_i64[2] )
    {
      v188 = 1;
      goto LABEL_256;
    }
    sub_141684120(v187 + v332, v185, v186);
    v188 = 0;
LABEL_256:
    v333 = v186 + v187;
    v353.m128i_i64[0] = 0;
    v354 = 0;
    nullsub_1(v184);
    v189 = (_DWORD *)sub_140001650(4, 1);
    if ( !v189 )
      sub_1416C2D4B(1, 4);
    *v189 = 1701869940;
    v371.m256i_i64[0] = 4;
    v371.m256i_i64[1] = (__int64)v189;
    v371.m256i_i64[2] = 4;
    nullsub_1(v190);
    v191 = sub_140001650(7, 1);
    v355 = (__int64 *)v191;
    if ( !v191 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)(v191 + 3) = 1701273971;
    *(_DWORD *)v191 = 1936942445;
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = 7;
    v394.m256i_i64[2] = v191;
    v394.m256i_i64[3] = 7;
    sub_140307860(&v393, &v353, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v192);
    v193 = (__int64 *)sub_140001650(2, 1);
    if ( !v193 )
      sub_1416C2D4B(1, 2);
    *(_WORD *)v193 = 25705;
    v371.m256i_i64[0] = 2;
    v355 = v193;
    v371.m256i_i64[1] = (__int64)v193;
    v371.m256i_i64[2] = 2;
    sub_141356270(&v394);
    *(__m128i *)v374.m256i_i8 = _mm_loadu_si128((const __m128i *)&v394);
    v393.m256i_i64[0] = (__int64)&v374;
    v393.m256i_i64[1] = (__int64)sub_140421AE0;
    sub_14149C0F0(&v394, &unk_1417A59B0, &v393);
    v195 = v394.m256i_i64[2];
    v375 = v394.m256i_i64[1];
    v355 = (__int64 *)v394.m256i_i64[0];
    if ( v394.m256i_i64[2] < 0 )
    {
      v196 = 0;
      goto LABEL_263;
    }
    if ( v394.m256i_i64[2] )
    {
      nullsub_1(v194);
      v196 = 1;
      v197 = sub_140001650(v195, 1);
      if ( !v197 )
      {
LABEL_263:
        v362 = 1;
        sub_1416C2D4B(v196, v195);
      }
      v198 = v197;
      sub_141684120(v197, v375, v195);
    }
    else
    {
      v198 = 1;
    }
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = v195;
    v394.m256i_i64[2] = v198;
    v394.m256i_i64[3] = v195;
    v362 = 0;
    sub_140307860(&v393, &v353, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    if ( v355 )
      sub_140001660(v375, v355, 1);
    nullsub_1(v200);
    v201 = (_DWORD *)sub_140001650(4, 1);
    if ( !v201 )
      sub_1416C2D4B(1, 4);
    *v201 = 1701605234;
    v371.m256i_i64[0] = 4;
    v371.m256i_i64[1] = (__int64)v201;
    v371.m256i_i64[2] = 4;
    nullsub_1(v202);
    v203 = sub_140001650(9, 1);
    v355 = (__int64 *)v203;
    if ( !v203 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v203 = 0x6E61747369737361LL;
    *(_BYTE *)(v203 + 8) = 116;
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = 9;
    v394.m256i_i64[2] = v203;
    v394.m256i_i64[3] = 9;
    sub_140307860(&v393, &v353, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v204);
    v205 = sub_140001650(6, 1);
    if ( !v205 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v205 + 4) = 29557;
    *(_DWORD *)v205 = 1952543859;
    v371.m256i_i64[0] = 6;
    v371.m256i_i64[1] = v205;
    v371.m256i_i64[2] = 6;
    nullsub_1(v206);
    v207 = sub_140001650(9, 1);
    v355 = (__int64 *)v207;
    if ( !v207 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v207 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v207 + 8) = 100;
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = 9;
    v394.m256i_i64[2] = v207;
    v394.m256i_i64[3] = 9;
    sub_140307860(&v393, &v353, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v208);
    v209 = (_DWORD *)sub_140001650(7, 1);
    if ( !v209 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v209 + 3) = 1953391988;
    *v209 = 1953394531;
    *(_QWORD *)v369 = 7;
    *(_QWORD *)&v369[8] = v209;
    *(_QWORD *)&v369[16] = 7;
    nullsub_1(v210);
    v211 = sub_140001650(32, 8);
    if ( !v211 )
    {
      v372 = 1;
      sub_1416C2D31(8, 32);
    }
    v213 = (__int64 *)v211;
    v374.m256i_i64[0] = 0;
    v374.m256i_i64[2] = 0;
    nullsub_1(v212);
    v214 = (_DWORD *)sub_140001650(4, 1);
    v355 = v213;
    if ( !v214 )
      sub_1416C2D4B(1, 4);
    *v214 = 1701869940;
    v371.m256i_i64[0] = 4;
    v371.m256i_i64[1] = (__int64)v214;
    v371.m256i_i64[2] = 4;
    nullsub_1(v215);
    v216 = (void *)sub_140001650(11, 1);
    v375 = (__int64)v216;
    if ( !v216 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v216, "output_text", 11);
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = 11;
    v394.m256i_i64[2] = (__int64)v216;
    v394.m256i_i64[3] = 11;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v217);
    v218 = (_DWORD *)sub_140001650(4, 1);
    if ( !v218 )
      sub_1416C2D4B(1, 4);
    *v218 = 1954047348;
    v371.m256i_i64[0] = 4;
    v371.m256i_i64[1] = (__int64)v218;
    v371.m256i_i64[2] = 4;
    if ( v186 < 0 )
    {
      v220 = 0;
      goto LABEL_291;
    }
    v221 = 1;
    if ( !v188 )
    {
      nullsub_1(v219);
      v220 = 1;
      v222 = sub_140001650(v186, 1);
      if ( !v222 )
      {
LABEL_291:
        v361 = 1;
        sub_1416C2D4B(v220, v186);
      }
      v221 = v222;
      sub_141684120(v222, v356, v186);
    }
    v394.m256i_i8[0] = 3;
    v394.m256i_i64[1] = v186;
    v394.m256i_i64[2] = v221;
    v394.m256i_i64[3] = v186;
    v361 = 0;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v223);
    v224 = (void *)sub_140001650(11, 1);
    if ( !v224 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v224, "annotations", 11);
    v371.m256i_i64[0] = 11;
    v371.m256i_i64[1] = (__int64)v224;
    v371.m256i_i64[2] = 11;
    v394.m256i_i64[1] = 0;
    *(_OWORD *)&v394.m256i_u64[2] = 8u;
    v394.m256i_i8[0] = 4;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    *(_OWORD *)((char *)&v394.m256i_u32[1] + 3) = *(_OWORD *)v374.m256i_i8;
    *(__int64 *)((char *)&v394.m256i_i64[2] + 7) = v374.m256i_i64[2];
    v225 = v355;
    *(_BYTE *)v355 = 5;
    v226 = _mm_loadu_si128((const __m128i *)&v394);
    *((_OWORD *)v225 + 1) = *(_OWORD *)((char *)&v394.m256i_u64[1] + 7);
    *(__m128i *)((char *)v225 + 1) = v226;
    v394.m256i_i64[1] = 1;
    v394.m256i_i64[2] = (__int64)v225;
    v394.m256i_i64[3] = 1;
    v394.m256i_i8[0] = 4;
    v372 = 0;
    sub_140307860(&v393, &v353, v369, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    *(__m128i *)&v394.m256i_u64[1] = _mm_loadu_si128(&v353);
    v394.m256i_i64[3] = v354;
    v394.m256i_i8[0] = 5;
    v227 = v351;
    if ( v351 == v349 )
      sub_1416890A0(&v349);
    v228 = v350;
    v229 = 32 * v227;
    v230 = _mm_loadu_si128((const __m128i *)&v394);
    *(__m128i *)(v350 + v229 + 16) = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
    *(__m128i *)(v228 + v229) = v230;
    v351 = v227 + 1;
    if ( v352 )
      sub_140001660(v356, v352, 1);
  }
  v231 = a1;
  v232 = v323;
  v233 = v324;
  v234 = v325;
  v235 = 32 * v325;
  v394.m256i_i64[0] = v324;
  v394.m256i_i64[2] = v323;
  v394.m256i_i64[1] = v324;
  v394.m256i_i64[3] = v324 + 32 * v325;
  v236 = v351;
  if ( v325 > v349 - v351 )
  {
    sub_141688D30((unsigned int)&v349, v351, v325, 8, 32);
    v236 = v351;
    goto LABEL_308;
  }
  if ( v325 )
LABEL_308:
    sub_141684120(v350 + 32 * v236, v233, v235);
  v351 = v234 + v236;
  if ( v232 )
    sub_140001660(v233, 32 * v232, 8);
  v237 = v336;
  a1 = v231;
  LOBYTE(v3) = v320;
  if ( v336 )
  {
    v238 = (_QWORD *)(v335 + 8);
    do
    {
      v239 = *(v238 - 1);
      if ( v239 )
        sub_140001660(*v238, v239, 1);
      v238 += 3;
      --v237;
    }
    while ( v237 );
  }
  if ( v334 )
    sub_140001660(v335, 24 * v334, 8);
LABEL_318:
  v240 = sub_141433D50(aUsage_2, 5, v342);
  v242 = v240;
  if ( v240 )
  {
    v243 = sub_141433D50(aInputTokens_0, 12, v240);
    if ( v243 && *(_BYTE *)v243 == 2 && (v244 = *(_QWORD *)(v243 + 8), v244 != 2) )
    {
      if ( (_DWORD)v244 == 1 )
      {
        v245 = *(_QWORD *)(v243 + 16);
      }
      else
      {
        v305 = *(_QWORD *)(v243 + 16);
        v245 = 0;
        if ( v305 > 0 )
          v245 = v305;
      }
    }
    else
    {
      v245 = 0;
    }
    v246 = sub_141433D50(aCacheReadInput, 23, v242);
    if ( v246 && *(_BYTE *)v246 == 2 && (v247 = *(_QWORD *)(v246 + 8), v247 != 2) )
    {
      if ( (_DWORD)v247 == 1 )
      {
        v248 = *(_QWORD *)(v246 + 16);
      }
      else
      {
        v306 = *(_QWORD *)(v246 + 16);
        v248 = 0;
        if ( v306 > 0 )
          v248 = v306;
      }
    }
    else
    {
      v248 = 0;
    }
    v249 = sub_141433D50(aCacheCreationI, 27, v242);
    if ( v249 && *(_BYTE *)v249 == 2 && (v250 = *(_QWORD *)(v249 + 8), v250 != 2) )
    {
      if ( (_DWORD)v250 == 1 )
      {
        v251 = *(_QWORD *)(v249 + 16);
      }
      else
      {
        v307 = *(_QWORD *)(v249 + 16);
        v251 = 0;
        if ( v307 > 0 )
          v251 = v307;
      }
    }
    else
    {
      v251 = 0;
    }
    v252 = sub_141433D50(aOutputTokens_0, 13, v242);
    if ( v252 && *(_BYTE *)v252 == 2 && (v253 = *(_QWORD *)(v252 + 8), v253 != 2) )
    {
      if ( (_DWORD)v253 == 1 )
      {
        v254 = *(_QWORD *)(v252 + 16);
      }
      else
      {
        v308 = *(_QWORD *)(v252 + 16);
        v254 = 0;
        if ( v308 > 0 )
          v254 = v308;
      }
    }
    else
    {
      v254 = 0;
    }
    v374.m256i_i64[0] = 0;
    v374.m256i_i64[2] = 0;
    nullsub_1(v253);
    v255 = (void *)sub_140001650(12, 1);
    if ( !v255 )
      sub_1416C2D4B(1, 12);
    v256 = v251 + v245 + v248;
    qmemcpy(v255, "input_tokens", 12);
    v371.m256i_i64[0] = 12;
    v371.m256i_i64[1] = (__int64)v255;
    v371.m256i_i64[2] = 12;
    v394.m256i_i8[0] = 2;
    v394.m256i_i64[1] = v256 >> 63;
    v394.m256i_i64[2] = v256;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v257);
    v258 = (void *)sub_140001650(13, 1);
    if ( !v258 )
      sub_1416C2D4B(1, 13);
    qmemcpy(v258, "output_tokens", 13);
    v371.m256i_i64[0] = 13;
    v371.m256i_i64[1] = (__int64)v258;
    v371.m256i_i64[2] = 13;
    v394.m256i_i8[0] = 2;
    v394.m256i_i64[1] = v254 >> 63;
    v394.m256i_i64[2] = v254;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    nullsub_1(v259);
    v260 = (void *)sub_140001650(12, 1);
    if ( !v260 )
      sub_1416C2D4B(1, 12);
    qmemcpy(v260, "total_tokens", 12);
    v371.m256i_i64[0] = 12;
    v371.m256i_i64[1] = (__int64)v260;
    v371.m256i_i64[2] = 12;
    v261 = v256 + v254;
    v394.m256i_i8[0] = 2;
    v394.m256i_i64[1] = v261 >> 63;
    v394.m256i_i64[2] = v261;
    sub_140307860(&v393, &v374, &v371, &v394);
    if ( v393.m256i_i8[0] != -1 )
      sub_1400104F0(&v393);
    *(_OWORD *)((char *)&v394.m256i_u32[1] + 3) = *(_OWORD *)v374.m256i_i8;
    *(__int64 *)((char *)&v394.m256i_i64[2] + 7) = v374.m256i_i64[2];
    *(__m128i *)&v371.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v394);
    *(_OWORD *)&v371.m256i_u64[2] = *(_OWORD *)&v374.m256i_u64[1];
  }
  else
  {
    v371.m256i_i64[1] = 0;
    v371.m256i_i64[3] = 0;
  }
  v371.m256i_i8[0] = 5;
  *(_QWORD *)v369 = 0;
  *(_QWORD *)&v369[16] = 0;
  nullsub_1(v241);
  v262 = (_WORD *)sub_140001650(2, 1);
  if ( !v262 )
    sub_1416C2D4B(1, 2);
  *v262 = 25705;
  v374.m256i_i64[0] = 2;
  v374.m256i_i64[1] = (__int64)v262;
  v374.m256i_i64[2] = 2;
  v264 = v314;
  if ( v314 < 0 )
  {
    v265 = 0;
    goto LABEL_357;
  }
  v266 = v3;
  v267 = v313[1];
  if ( v314 )
  {
    nullsub_1(v263);
    v265 = 1;
    v268 = sub_140001650(v264, 1);
    if ( !v268 )
    {
LABEL_357:
      v360 = 1;
      sub_1416C2D4B(v265, v264);
    }
    v269 = v268;
    sub_141684120(v268, v267, v264);
  }
  else
  {
    v269 = 1;
  }
  v394.m256i_i8[0] = 3;
  v394.m256i_i64[1] = v264;
  v394.m256i_i64[2] = v269;
  v394.m256i_i64[3] = v264;
  v360 = 0;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v270);
  v271 = sub_140001650(6, 1);
  if ( !v271 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v271 + 4) = 29795;
  *(_DWORD *)v271 = 1701470831;
  v374.m256i_i64[0] = 6;
  v374.m256i_i64[1] = v271;
  v374.m256i_i64[2] = 6;
  nullsub_1(v272);
  v273 = (_QWORD *)sub_140001650(8, 1);
  v352 = (__int64)v273;
  if ( !v273 )
    sub_1416C2D4B(1, 8);
  *v273 = 0x65736E6F70736572LL;
  v394.m256i_i8[0] = 3;
  v394.m256i_i64[1] = 8;
  v394.m256i_i64[2] = (__int64)v273;
  v394.m256i_i64[3] = 8;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v274);
  v275 = (void *)sub_140001650(10, 1);
  if ( !v275 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v275, "created_at", 10);
  v374.m256i_i64[0] = 10;
  v374.m256i_i64[1] = (__int64)v275;
  v374.m256i_i64[2] = 10;
  v359 = 1;
  sub_140FFA6E0(&v353);
  v276 = (v353.m128i_i32[0] >> 13) - 1;
  v277 = 0;
  if ( v353.m128i_i32[0] >> 13 <= 0 )
  {
    v278 = (1 - (v353.m128i_i32[0] >> 13)) / 0x190u + 1;
    v276 += 400 * v278;
    v277 = -146097 * v278;
  }
  v394.m256i_i8[0] = 2;
  v394.m256i_i64[1] = ((unsigned __int64)v353.m128i_u32[1]
                     + 86400LL
                     * (((v276 / 100) >> 2)
                      + ((1461 * v276) >> 2)
                      + v277
                      + (((unsigned __int32)v353.m128i_i32[0] >> 4) & 0x1FF)
                      - v276 / 100
                      - 719163)) >> 63;
  v394.m256i_i64[2] = v353.m128i_u32[1]
                    + 86400LL
                    * (((v276 / 100) >> 2)
                     + ((1461 * v276) >> 2)
                     + v277
                     + (((unsigned __int32)v353.m128i_i32[0] >> 4) & 0x1FF)
                     - v276 / 100
                     - 719163);
  v359 = 0;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v279);
  v280 = sub_140001650(6, 1);
  if ( !v280 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v280 + 4) = 29557;
  *(_DWORD *)v280 = 1952543859;
  v374.m256i_i64[0] = 6;
  v374.m256i_i64[1] = v280;
  v374.m256i_i64[2] = 6;
  nullsub_1(v281);
  v282 = sub_140001650(9, 1);
  v352 = v282;
  if ( !v282 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v282 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v282 + 8) = 100;
  v394.m256i_i8[0] = 3;
  v394.m256i_i64[1] = 9;
  v394.m256i_i64[2] = v282;
  v394.m256i_i64[3] = 9;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v283);
  v284 = 1;
  v285 = sub_140001650(5, 1);
  if ( !v285 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v285 + 4) = 108;
  *(_DWORD *)v285 = 1701080941;
  v374.m256i_i64[0] = 5;
  v374.m256i_i64[1] = v285;
  v374.m256i_i64[2] = 5;
  v84 = v266 == 0;
  v287 = v337;
  if ( v84 )
  {
    nullsub_1(v286);
    v288 = sub_140001650(v287, 1);
    if ( !v288 )
    {
      v358 = 1;
      sub_1416C2D4B(1, v287);
    }
    v284 = v288;
    sub_141684120(v288, v338, v287);
  }
  v394.m256i_i8[0] = 3;
  v394.m256i_i64[1] = v287;
  v394.m256i_i64[2] = v284;
  v394.m256i_i64[3] = v287;
  v358 = 0;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v289);
  v290 = sub_140001650(6, 1);
  if ( !v290 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v290 + 4) = 29813;
  *(_DWORD *)v290 = 1886680431;
  v374.m256i_i64[0] = 6;
  v374.m256i_i64[1] = v290;
  v374.m256i_i64[2] = 6;
  v377 = 1;
  sub_140467C90(&v394, &v349);
  if ( v394.m256i_i8[0] == -1 )
  {
    v393.m256i_i64[0] = v394.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v393,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8850);
  }
  v291 = _mm_loadu_si128((const __m128i *)&v394);
  *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
  *(__m128i *)v393.m256i_i8 = v291;
  v377 = 0;
  sub_140307860(&v394, v369, &v374, &v393);
  if ( v394.m256i_i8[0] != -1 )
    sub_1400104F0(&v394);
  nullsub_1(v292);
  v293 = (void *)sub_140001650(11, 1);
  if ( !v293 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v293, "output_text", 11);
  v374.m256i_i64[0] = 11;
  v374.m256i_i64[1] = (__int64)v293;
  v374.m256i_i64[2] = 11;
  v294 = v333;
  if ( v333 < 0 )
  {
    v295 = 0;
    goto LABEL_390;
  }
  v296 = v332;
  if ( v333 )
  {
    nullsub_1(0x745F74757074756FLL);
    v295 = 1;
    v297 = sub_140001650(v294, 1);
    if ( !v297 )
    {
LABEL_390:
      v357 = 1;
      sub_1416C2D4B(v295, v294);
    }
    v298 = v297;
    sub_141684120(v297, v296, v294);
  }
  else
  {
    v298 = 1;
  }
  v394.m256i_i8[0] = 3;
  v394.m256i_i64[1] = v294;
  v394.m256i_i64[2] = v298;
  v394.m256i_i64[3] = v294;
  v357 = 0;
  sub_140307860(&v393, v369, &v374, &v394);
  if ( v393.m256i_i8[0] != -1 )
    sub_1400104F0(&v393);
  nullsub_1(v299);
  v300 = sub_140001650(5, 1);
  if ( !v300 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v300 + 4) = 101;
  *(_DWORD *)v300 = 1734439797;
  v374.m256i_i64[0] = 5;
  v374.m256i_i64[1] = v300;
  v374.m256i_i64[2] = 5;
  v376 = 1;
  sub_140B842D0(&v394, &v371);
  if ( v394.m256i_i8[0] == -1 )
  {
    v393.m256i_i64[0] = v394.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v393,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8850);
  }
  v301 = _mm_loadu_si128((const __m128i *)&v394);
  *(__m128i *)&v393.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v394.m256i_u64[2]);
  *(__m128i *)v393.m256i_i8 = v301;
  v376 = 0;
  sub_140307860(&v394, v369, &v374, &v393);
  if ( v394.m256i_i8[0] != -1 )
    sub_1400104F0(&v394);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v369[16];
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)v369);
  *(_BYTE *)a1 = 5;
  sub_1400104F0(&v371);
  if ( v331 )
    sub_140001660(v296, v331, 1);
  v302 = v350;
  v342 = v351;
  v352 = 0;
  v355 = (__int64 *)v350;
  while ( v342 != v352 )
  {
    ++v352;
    v303 = v302 + 32;
    sub_1402C3260();
    v302 = v303;
  }
  if ( v349 )
    sub_140001660(v350, 32 * v349, 8);
  if ( v337 )
    sub_140001660(v338, v337, 1);
  if ( v313[0] )
    sub_140001660(v267, v313[0], 1);
  return a1;
}