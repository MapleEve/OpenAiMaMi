// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x140a4c3f0
// name: make_relay_model_info
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::make_relay_model_info | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall make_relay_model_info(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  char v32; // r12
  unsigned __int8 v33; // al
  __int64 v34; // rdx
  __int64 v35; // r14
  const char *v36; // r8
  __int64 v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int8 v42; // al
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  void *v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  void *v65; // rax
  __int64 v66; // rcx
  _DWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rcx
  _DWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // rax
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rcx
  _DWORD *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  void *v89; // rax
  __int64 v90; // rcx
  _DWORD *v91; // rax
  __int128 v92; // xmm0
  __int128 v93; // xmm0
  __int128 v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rcx
  void *v97; // rcx
  __int64 v98; // rax
  unsigned __int8 v99; // bl
  _DWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rcx
  _DWORD *v107; // rax
  __int64 v108; // rcx
  void *v109; // rax
  __int64 v110; // rcx
  void *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  void *v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // r12
  _DWORD *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rcx
  _DWORD *v125; // rax
  __int64 v126; // rcx
  void *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  void *v135; // rax
  __int64 v136; // rcx
  void *v137; // rax
  __int128 v138; // xmm0
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rsi
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rcx
  void *v150; // rax
  __int64 v151; // rcx
  void *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  void *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rcx
  void *v158; // rax
  __int64 v159; // rcx
  void *v160; // rax
  _DWORD *v161; // rax
  __int64 v162; // rcx
  void *v163; // rax
  _DWORD *v164; // rax
  __int64 v165; // rcx
  _OWORD *v166; // rax
  __int64 v167; // rcx
  _QWORD *v168; // rax
  __int64 v169; // rcx
  void *v170; // rax
  __int64 v171; // rcx
  _OWORD *v172; // rax
  __int64 v173; // rcx
  _DWORD *v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rbx
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rcx
  void *v182; // rax
  bool v183; // al
  __int64 v184; // rcx
  void *v185; // rax
  __int64 v186; // rcx
  _DWORD *v187; // rax
  __int64 v188; // rcx
  void *v189; // rax
  __int64 v190; // rcx
  void *v191; // rax
  __int64 v192; // rcx
  __int64 v193; // rax
  __int64 v194; // rcx
  void *v195; // rax
  _QWORD *v196; // rax
  void *v197; // rax
  __int64 v198; // rcx
  _DWORD *v199; // rax
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rsi
  __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rcx
  void *v206; // rax
  __int64 v207; // rcx
  void *v208; // rax
  __int64 v209; // rcx
  void *v210; // rax
  bool v211; // al
  __int64 v212; // rcx
  void *v213; // rax
  __int64 v214; // rcx
  char *v215; // rax
  void *v216; // rax
  __int64 v217; // rcx
  char *v218; // rax
  char v219; // bl
  bool v220; // r14
  __int64 v221; // rax
  __int64 v222; // r8
  __int64 v223; // rcx
  bool v224; // bl
  __int64 v225; // rax
  __int64 v226; // rcx
  bool v227; // r12
  __int64 v228; // rcx
  bool v229; // zf
  bool v230; // r13
  char v231; // si
  __int64 v232; // rdx
  unsigned __int64 v233; // r15
  unsigned __int64 v234; // rdi
  __int64 v235; // rsi
  char v236; // r14
  void *v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rax
  bool v242; // di
  void *v243; // rax
  __int64 v244; // rcx
  void *v245; // rax
  __int64 v246; // rcx
  void *v247; // rax
  __int64 v248; // rcx
  void *v249; // rax
  __int64 v250; // rcx
  _OWORD *v251; // rax
  __int64 v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rcx
  __int128 v255; // rdi
  _DWORD *v256; // rax
  __int64 v257; // rcx
  __int64 v258; // rax
  __int128 v259; // xmm1
  __int64 v260; // rax
  __int64 v261; // rcx
  _DWORD *v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rax
  _DWORD *v265; // rdx
  _QWORD *v266; // r15
  __int64 v267; // r13
  __int64 v268; // r12
  __int64 v269; // rbx
  unsigned __int64 v270; // r8
  unsigned __int64 v271; // rdi
  __int64 v272; // rdi
  int v273; // eax
  char v274; // cl
  __int64 v275; // rbx
  __int64 result; // rax
  __int64 v277; // rcx
  _DWORD *v278; // rax
  __int64 v279; // rcx
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  _DWORD *v285; // rax
  __int64 v286; // rcx
  void *v287; // rax
  __int64 v288; // rcx
  void *v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rcx
  __int64 v293; // rax
  __int64 v294; // rcx
  void *v295; // rax
  __int64 v296; // rcx
  void *v297; // rax
  __int128 v298; // xmm0
  __int64 v299; // rax
  __int64 v300; // rcx
  void *v301; // rax
  __int64 v302; // rax
  __int64 v303; // rdi
  __int64 v304; // rsi
  __int64 v305; // rcx
  __int64 v306; // rdx
  __int64 v307; // rax
  __int64 v308; // rbx
  __int64 v309; // r14
  __int64 v310; // rax
  __int64 v311; // rcx
  __int64 v312; // rsi
  void *v313; // rax
  __int64 v314; // rax
  __int64 v315; // rdi
  __int64 v316; // rsi
  int v317; // eax
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rax
  __int64 v322; // rbx
  __int64 v323; // r14
  __int64 v324; // rax
  __int64 v325; // rcx
  _WORD *v326; // rdi
  __int64 v327; // rsi
  __int64 v328; // rax
  __int64 v329; // rbx
  __int64 v330; // r14
  _BYTE *v331; // rax
  __int64 v332; // rcx
  __int8 v333; // bl
  void *v334; // rax
  __int128 v335; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v336; // [rsp+D8h] [rbp+58h]
  char v337; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v338; // [rsp+E1h] [rbp+61h]
  __int32 v339; // [rsp+E9h] [rbp+69h]
  __int16 v340; // [rsp+EDh] [rbp+6Dh]
  __int8 v341; // [rsp+EFh] [rbp+6Fh]
  __int128 v342; // [rsp+F0h] [rbp+70h]
  __int64 v343; // [rsp+100h] [rbp+80h]
  __int64 v344; // [rsp+108h] [rbp+88h]
  __int128 v345; // [rsp+110h] [rbp+90h] BYREF
  __int64 v346; // [rsp+120h] [rbp+A0h]
  __int128 v347; // [rsp+128h] [rbp+A8h]
  __int128 v348; // [rsp+138h] [rbp+B8h]
  __int64 v349; // [rsp+148h] [rbp+C8h]
  __int128 v350; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v351; // [rsp+160h] [rbp+E0h]
  __m256i v352; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v353; // [rsp+188h] [rbp+108h]
  __int64 v354; // [rsp+190h] [rbp+110h]
  __int64 v355; // [rsp+198h] [rbp+118h]
  __int64 v356; // [rsp+1A0h] [rbp+120h]
  int v357; // [rsp+1ACh] [rbp+12Ch]
  __int128 v358; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v359; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v360; // [rsp+1C8h] [rbp+148h]
  __int64 v361; // [rsp+1D0h] [rbp+150h]
  __int128 v362; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v363; // [rsp+1E8h] [rbp+168h]
  __int64 v364; // [rsp+1F0h] [rbp+170h]
  const char *v365; // [rsp+1F8h] [rbp+178h]
  _DWORD *v366; // [rsp+200h] [rbp+180h]
  __int64 v367; // [rsp+208h] [rbp+188h]
  char v368; // [rsp+214h] [rbp+194h]
  char v369; // [rsp+215h] [rbp+195h]
  char v370; // [rsp+216h] [rbp+196h]
  bool v371; // [rsp+217h] [rbp+197h]
  __m256i v372; // [rsp+218h] [rbp+198h] BYREF
  char v373; // [rsp+23Eh] [rbp+1BEh]
  char v374; // [rsp+23Fh] [rbp+1BFh]
  _DWORD *v375; // [rsp+240h] [rbp+1C0h]
  char v376; // [rsp+24Dh] [rbp+1CDh]
  char v377; // [rsp+24Eh] [rbp+1CEh]
  unsigned __int8 v378; // [rsp+24Fh] [rbp+1CFh]
  __int128 v379; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v380; // [rsp+260h] [rbp+1E0h]
  char v381; // [rsp+276h] [rbp+1F6h]
  char v382; // [rsp+277h] [rbp+1F7h]
  __int64 v383; // [rsp+278h] [rbp+1F8h]
  __m256i v384; // [rsp+280h] [rbp+200h] BYREF
  __m256i v385; // [rsp+2A0h] [rbp+220h] BYREF
  char v386; // [rsp+2C5h] [rbp+245h]
  char v387; // [rsp+2C6h] [rbp+246h]
  char v388; // [rsp+2C7h] [rbp+247h]
  __int64 v389; // [rsp+2C8h] [rbp+248h]

  v389 = -2;
  v361 = a4;
  v343 = a1;
  v7 = a3 + 16;
  v385.m256i_i64[0] = a2;
  v8 = sub_1400015F0;
  v385.m256i_i64[1] = (__int64)sub_1400015F0;
  v385.m256i_i64[2] = a3 + 16;
  v385.m256i_i64[3] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v335, &unk_1417A8C71, &v385);
  v355 = a3;
  if ( *(_QWORD *)(a3 + 64) != -1
    && (v9 = *(_QWORD *)(v355 + 72), v10 = *(_QWORD *)(v355 + 80), v382 = 1, (v11 = sub_14033BC10(v9, v10)) != 0)
    && (v14 = v12) != 0 )
  {
    if ( v12 < 0 )
    {
      v15 = 0;
      goto LABEL_6;
    }
    v115 = v11;
    nullsub_1(v13);
    v15 = 1;
    v116 = sub_140001650(v14, 1);
    if ( !v116 )
    {
LABEL_6:
      v382 = 1;
      sub_1416C2D4B(v15, v14);
    }
    v117 = v116;
    sub_141684120(v116, v115, v14);
    *(_QWORD *)&v350 = v14;
    *((_QWORD *)&v350 + 1) = v117;
    v351 = v14;
  }
  else
  {
    v385.m256i_i64[0] = a2 + 24;
    v385.m256i_i64[1] = (__int64)sub_1400015F0;
    v385.m256i_i64[2] = v7;
    v385.m256i_i64[3] = (__int64)sub_1400015F0;
    v382 = 1;
    sub_14149C0F0(&v379, &unk_1417A8C77, &v385);
    v350 = v379;
    v351 = v380;
  }
  v16 = *(_QWORD *)(v355 + 48);
  v17 = *(_QWORD *)(v355 + 56);
  v377 = 1;
  v376 = 1;
  *(_QWORD *)&v18 = sub_14033BC10(v16, v17);
  *(_OWORD *)v372.m256i_i8 = v18;
  if ( *((_QWORD *)&v18 + 1) )
  {
    v385.m256i_i64[0] = (__int64)&v350;
    v385.m256i_i64[1] = (__int64)sub_1400015F0;
    v385.m256i_i64[2] = (__int64)&v372;
    v385.m256i_i64[3] = (__int64)sub_14041F680;
    v377 = 1;
    v376 = 1;
    sub_14149C0F0(&v379, &unk_1417A4948, &v385);
    v19 = DWORD2(v379);
    v348 = v379;
    v20 = v380;
    LOBYTE(v19) = 1;
    v357 = v19;
  }
  else
  {
    v348 = v350;
    v20 = v351;
    v357 = 0;
  }
  v385.m256i_i64[0] = a2 + 24;
  v385.m256i_i64[1] = (__int64)sub_1400015F0;
  v385.m256i_i64[2] = v7;
  v385.m256i_i64[3] = (__int64)sub_1400015F0;
  v374 = 1;
  v373 = 1;
  sub_14149C0F0(&v379, &unk_1417A8C7E, &v385);
  v347 = v379;
  v21 = v380;
  *(_QWORD *)&v362 = 0;
  v363 = 0;
  nullsub_1(v22);
  v23 = (_DWORD *)sub_140001650(4, 1);
  v371 = v23 == nullptr;
  if ( !v23 )
  {
    v387 = 1;
    v386 = 1;
    sub_1416C2D4B(1, 4);
  }
  *v23 = 1735748723;
  v372.m256i_i64[0] = 4;
  v372.m256i_i64[1] = (__int64)v23;
  v372.m256i_i64[2] = 4;
  v385.m256i_i64[3] = v336;
  *(_OWORD *)&v385.m256i_u64[1] = v335;
  v385.m256i_i8[0] = 3;
  v387 = 1;
  v386 = 1;
  sub_140307860(&v379, &v362, &v372, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v387 = 1;
    v386 = 1;
    sub_1400104F0(&v379);
  }
  nullsub_1(v24);
  v25 = (void *)sub_140001650(12, 1);
  if ( !v25 )
  {
    v387 = 1;
    v386 = 1;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(v25, "display_name", 12);
  v372.m256i_i64[0] = 12;
  v372.m256i_i64[1] = (__int64)v25;
  v372.m256i_i64[2] = 12;
  *(_OWORD *)&v385.m256i_u64[1] = v348;
  v385.m256i_i64[3] = v20;
  v385.m256i_i8[0] = 3;
  v387 = 1;
  v386 = 0;
  sub_140307860(&v379, &v362, &v372, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v387 = 1;
    v386 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v26);
  v27 = (void *)sub_140001650(11, 1);
  if ( !v27 )
  {
    v387 = 1;
    v386 = 0;
    sub_1416C2D4B(1, 11);
  }
  qmemcpy(v27, "description", 11);
  v372.m256i_i64[0] = 11;
  v372.m256i_i64[1] = (__int64)v27;
  v372.m256i_i64[2] = 11;
  *(_OWORD *)&v385.m256i_u64[1] = v347;
  v385.m256i_i64[3] = v21;
  v385.m256i_i8[0] = 3;
  v387 = 0;
  v386 = 0;
  sub_140307860(&v379, &v362, &v372, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v387 = 0;
    v386 = 0;
    sub_1400104F0(&v379);
  }
  LOBYTE(v8) = *(_BYTE *)(v355 + 88);
  LOBYTE(v28) = (_BYTE)v8 != 1;
  v383 = v28;
  v29 = *(_QWORD *)(v355 + 24);
  v30 = *(_QWORD *)(v355 + 32);
  v387 = 0;
  v386 = 0;
  v353 = v29;
  v356 = v30;
  v32 = sub_140AE11D0(a2, v29, v30, (unsigned int)v8);
  if ( v32 )
  {
    v387 = 0;
    v386 = 0;
    sub_140A4A810(v385.m256i_i64, v353, v356);
    v33 = *(_BYTE *)(a2 + 231);
    v378 = v33;
    if ( !v33 )
      v33 = sub_140AE5B30(v353, v356);
    if ( v33 == 4 )
    {
      v34 = v385.m256i_i64[2];
    }
    else
    {
      v34 = v385.m256i_i64[2];
      v40 = v385.m256i_i64[1];
      if ( v385.m256i_i64[2] < 4uLL || *(_DWORD *)v385.m256i_i64[1] != 1869441389 )
      {
        if ( v33 != 3
          && (v385.m256i_i64[2] < 7uLL
           || *(_DWORD *)v385.m256i_i64[1] ^ 0x696E696D | *(_DWORD *)(v385.m256i_i64[1] + 3) ^ 0x78616D69) )
        {
          v35 = 6;
          v365 = (const char *)&unk_1417A8D6C;
          v38 = 1;
          if ( v385.m256i_i64[0] )
            sub_140001660(v385.m256i_i64[1], v385.m256i_i64[0], 1);
          v37 = 0;
          v39 = 0;
          LODWORD(v375) = 0;
          LODWORD(v360) = 0;
          goto LABEL_101;
        }
        v35 = 6;
        v36 = (const char *)&unk_1417A8D6C;
        v38 = 1;
        v349 = 1000000;
        if ( v385.m256i_i64[2] == 10
          && (v98 = *(_QWORD *)v385.m256i_i64[1] ^ 0x2D78616D696E696DLL,
              !(v98 | *(unsigned __int16 *)(v385.m256i_i64[1] + 8) ^ 0x336DLL)) )
        {
          LOBYTE(v98) = 1;
          LODWORD(v375) = v98;
          v35 = 5;
          v36 = aBytes_1;
          v37 = 137;
          v38 = (__int64)&unk_1417A8EE3;
          v39 = 1;
          v40 = 1;
        }
        else
        {
          v39 = 0;
          v37 = 0;
          LODWORD(v375) = 0;
          v40 = 0;
        }
LABEL_94:
        v365 = v36;
        LODWORD(v360) = v40;
        if ( v385.m256i_i64[0] )
          sub_140001660(v385.m256i_i64[1], v385.m256i_i64[0], 1);
LABEL_101:
        nullsub_1(v40);
        v118 = (_DWORD *)sub_140001650(4, 1);
        if ( !v118 )
        {
          v387 = 0;
          v386 = 0;
          sub_1416C2D4B(1, 4);
        }
        v364 = (__int64)v118;
        *v118 = 1751607656;
        nullsub_1(v119);
        v120 = sub_140001650(64, 8);
        if ( !v120 )
          sub_1416C2D31(8, 64);
        v122 = v120;
        v384.m256i_i64[0] = 0;
        v384.m256i_i64[2] = 0;
        nullsub_1(v121);
        v123 = sub_140001650(6, 1);
        v367 = v122;
        if ( !v123 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v123 + 4) = 29810;
        *(_DWORD *)v123 = 1868981861;
        v372.m256i_i64[0] = 6;
        v372.m256i_i64[1] = v123;
        v372.m256i_i64[2] = 6;
        nullsub_1(v124);
        v125 = (_DWORD *)sub_140001650(4, 1);
        v383 = (__int64)v125;
        if ( !v125 )
          sub_1416C2D4B(1, 4);
        *v125 = 1701736302;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 4;
        v385.m256i_i64[2] = (__int64)v125;
        v385.m256i_i64[3] = 4;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v126);
        v127 = (void *)sub_140001650(11, 1);
        if ( !v127 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v127, "description", 11);
        v372.m256i_i64[0] = 11;
        v372.m256i_i64[1] = (__int64)v127;
        v372.m256i_i64[2] = 11;
        nullsub_1(v128);
        v383 = sub_140001650(12, 1);
        if ( !v383 )
          sub_1416C2D4B(1, 12);
        v129 = v383;
        *(_QWORD *)v383 = 0x6F73616572206F4ELL;
        *(_DWORD *)(v129 + 8) = 1735289198;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 12;
        v385.m256i_i64[2] = v129;
        v385.m256i_i64[3] = 12;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        *(_OWORD *)&v372.m256i_u64[1] = *(_OWORD *)v384.m256i_i8;
        v372.m256i_i64[3] = v384.m256i_i64[2];
        v372.m256i_i8[0] = 5;
        v352.m256i_i64[0] = 0;
        v352.m256i_i64[2] = 0;
        nullsub_1(v130);
        v131 = sub_140001650(6, 1);
        if ( !v131 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v131 + 4) = 29810;
        *(_DWORD *)v131 = 1868981861;
        v384.m256i_i64[0] = 6;
        v384.m256i_i64[1] = v131;
        v384.m256i_i64[2] = 6;
        nullsub_1(v132);
        v383 = sub_140001650(4, 1);
        if ( !v383 )
          sub_1416C2D4B(1, 4);
        v133 = v383;
        *(_DWORD *)v383 = 1751607656;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 4;
        v385.m256i_i64[2] = v133;
        v385.m256i_i64[3] = 4;
        sub_140307860(&v379, &v352, &v384, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v134);
        v135 = (void *)sub_140001650(11, 1);
        if ( !v135 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v135, "description", 11);
        v384.m256i_i64[0] = 11;
        v384.m256i_i64[1] = (__int64)v135;
        v384.m256i_i64[2] = 11;
        nullsub_1(v136);
        v137 = (void *)sub_140001650(21, 1);
        v383 = (__int64)v137;
        if ( !v137 )
          sub_1416C2D4B(1, 21);
        qmemcpy(v137, "High reasoning effort", 21);
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 21;
        v385.m256i_i64[2] = (__int64)v137;
        v385.m256i_i64[3] = 21;
        sub_140307860(&v379, &v352, &v384, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        v354 = v39;
        *(_OWORD *)((char *)&v385.m256i_u32[1] + 3) = *(_OWORD *)v352.m256i_i8;
        *(__int64 *)((char *)&v385.m256i_i64[2] + 7) = v352.m256i_i64[2];
        v138 = *(_OWORD *)v372.m256i_i8;
        v52 = v367;
        *(_OWORD *)(v367 + 16) = *(_OWORD *)&v372.m256i_u64[2];
        *(_OWORD *)v52 = v138;
        *(_BYTE *)(v52 + 32) = 5;
        v139 = *(__int64 *)((char *)&v385.m256i_i64[1] + 7);
        v140 = *(__int64 *)((char *)&v385.m256i_i64[2] + 7);
        *(_OWORD *)(v52 + 33) = *(_OWORD *)v385.m256i_i8;
        *(_QWORD *)(v52 + 48) = v139;
        *(_QWORD *)(v52 + 56) = v140;
        v51 = 2;
        LOBYTE(v140) = 1;
        v383 = v140;
        v48 = 4;
        v55 = 4;
        v53 = 2;
        goto LABEL_132;
      }
    }
    v35 = 6;
    v36 = (const char *)&unk_1417A8D6C;
    v37 = 124;
    v38 = (__int64)&unk_1417A8F6C;
    v39 = 1;
    v40 = 0;
    LODWORD(v375) = 0;
    v349 = 0x100000;
    if ( v34 == 9 )
    {
      v41 = *(_QWORD *)v385.m256i_i64[1] ^ 0x2E32762D6F6D696DLL | *(unsigned __int8 *)(v385.m256i_i64[1] + 8) ^ 0x35LL;
      LOBYTE(v41) = v41 == 0;
      LODWORD(v375) = v41;
      v40 = 0;
    }
    goto LABEL_94;
  }
  v42 = *(_BYTE *)(a2 + 231);
  v378 = v42;
  if ( (_BYTE)v8 )
  {
    LOBYTE(v31) = (_BYTE)v8 != 1 || a5 == 0;
    if ( (_BYTE)v31 )
      goto LABEL_37;
    v387 = 0;
    v386 = 0;
    v43 = sub_141433D50(aDefaultReasoni, 23, a5);
    if ( !v43 )
      goto LABEL_37;
    if ( *(_BYTE *)v43 != 3 )
      goto LABEL_37;
    v44 = *(_QWORD *)(v43 + 16);
    v45 = *(_QWORD *)(v43 + 24);
    v387 = 0;
    v386 = 0;
    v46 = sub_14033BC10(v44, v45);
    v48 = v47;
    v387 = 0;
    v386 = 0;
    v49 = sub_141433D50(&xmmword_1417A8C9E, 26, a5);
    if ( !v49 )
      goto LABEL_37;
    if ( *(_BYTE *)v49 == 4 && v48 && *(_QWORD *)(v49 + 24) )
    {
      v50 = v49;
      sub_140388B60((unsigned int)&v385, v48, 0, 1, 1);
      v367 = v385.m256i_i64[1];
      if ( v385.m256i_i32[0] == 1 )
      {
        v387 = 0;
        v386 = 0;
        sub_1416C2D4B(v367, v385.m256i_i64[2]);
      }
      v364 = v385.m256i_i64[2];
      sub_141684120(v385.m256i_i64[2], v46, v48);
      sub_1402CE260(&v385, *(_QWORD *)(v50 + 16), *(_QWORD *)(v50 + 24));
      v52 = v385.m256i_i64[1];
      v51 = v385.m256i_i64[0];
      v53 = v385.m256i_i64[2];
      v354 = 2;
      LODWORD(v360) = 1;
      v38 = 1;
      v54 = &unk_1417A8D6C;
      v365 = (const char *)&unk_1417A8D6C;
      v35 = 6;
      v37 = 0;
      LOBYTE(v54) = 1;
      LODWORD(v375) = (_DWORD)v54;
      v383 = 0;
      v55 = v367;
    }
    else
    {
LABEL_37:
      nullsub_1(v31);
      v56 = sub_140001650(6, 1);
      if ( !v56 )
      {
        v387 = 0;
        v386 = 0;
        sub_1416C2D4B(1, 6);
      }
      *(_WORD *)(v56 + 4) = 28021;
      v364 = v56;
      *(_DWORD *)v56 = 1768187245;
      nullsub_1(v57);
      v58 = sub_140001650(128, 8);
      if ( !v58 )
        sub_1416C2D31(8, 128);
      v60 = v58;
      v384.m256i_i64[0] = 0;
      v384.m256i_i64[2] = 0;
      nullsub_1(v59);
      v61 = sub_140001650(6, 1);
      v367 = v60;
      if ( !v61 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v61 + 4) = 29810;
      *(_DWORD *)v61 = 1868981861;
      v372.m256i_i64[0] = 6;
      v372.m256i_i64[1] = v61;
      v372.m256i_i64[2] = 6;
      nullsub_1(v62);
      v63 = sub_140001650(3, 1);
      v375 = (_DWORD *)v63;
      if ( !v63 )
        sub_1416C2D4B(1, 3);
      *(_BYTE *)(v63 + 2) = 119;
      *(_WORD *)v63 = 28524;
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 3;
      v385.m256i_i64[2] = v63;
      v385.m256i_i64[3] = 3;
      sub_140307860(&v379, &v384, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      nullsub_1(v64);
      v65 = (void *)sub_140001650(11, 1);
      if ( !v65 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v65, "description", 11);
      v372.m256i_i64[0] = 11;
      v372.m256i_i64[1] = (__int64)v65;
      v372.m256i_i64[2] = 11;
      nullsub_1(v66);
      v67 = (_DWORD *)sub_140001650(37, 1);
      v375 = v67;
      if ( !v67 )
        sub_1416C2D4B(1, 37);
      qmemcpy(v67, "Fast responses with lighter reasoning", 37);
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 37;
      v385.m256i_i64[2] = (__int64)v67;
      v385.m256i_i64[3] = 37;
      sub_140307860(&v379, &v384, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      *(_OWORD *)&v352.m256i_u64[1] = *(_OWORD *)v384.m256i_i8;
      v352.m256i_i64[3] = v384.m256i_i64[2];
      v352.m256i_i8[0] = 5;
      *(_QWORD *)&v358 = 0;
      v359 = 0;
      nullsub_1(v68);
      v69 = sub_140001650(6, 1);
      if ( !v69 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v69 + 4) = 29810;
      *(_DWORD *)v69 = 1868981861;
      v372.m256i_i64[0] = 6;
      v372.m256i_i64[1] = v69;
      v372.m256i_i64[2] = 6;
      nullsub_1(v70);
      v71 = sub_140001650(6, 1);
      v375 = (_DWORD *)v71;
      if ( !v71 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v71 + 4) = 28021;
      *(_DWORD *)v71 = 1768187245;
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 6;
      v385.m256i_i64[2] = v71;
      v385.m256i_i64[3] = 6;
      sub_140307860(&v379, &v358, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      nullsub_1(v72);
      v73 = (void *)sub_140001650(11, 1);
      if ( !v73 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v73, "description", 11);
      v372.m256i_i64[0] = 11;
      v372.m256i_i64[1] = (__int64)v73;
      v372.m256i_i64[2] = 11;
      nullsub_1(v74);
      v75 = (_DWORD *)sub_140001650(53, 1);
      v375 = v75;
      if ( !v75 )
        sub_1416C2D4B(1, 53);
      qmemcpy(v75, "Balances speed and reasoning depth for everyday tasks", 53);
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 53;
      v385.m256i_i64[2] = (__int64)v75;
      v385.m256i_i64[3] = 53;
      sub_140307860(&v379, &v358, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      *(_OWORD *)&v384.m256i_u64[1] = v358;
      v384.m256i_i64[3] = v359;
      v384.m256i_i8[0] = 5;
      *(_QWORD *)&v358 = 0;
      v359 = 0;
      nullsub_1(v76);
      v77 = sub_140001650(6, 1);
      if ( !v77 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v77 + 4) = 29810;
      *(_DWORD *)v77 = 1868981861;
      v372.m256i_i64[0] = 6;
      v372.m256i_i64[1] = v77;
      v372.m256i_i64[2] = 6;
      nullsub_1(v78);
      v79 = (_DWORD *)sub_140001650(4, 1);
      v375 = v79;
      if ( !v79 )
        sub_1416C2D4B(1, 4);
      *v79 = 1751607656;
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 4;
      v385.m256i_i64[2] = (__int64)v79;
      v385.m256i_i64[3] = 4;
      sub_140307860(&v379, &v358, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      nullsub_1(v80);
      v81 = (void *)sub_140001650(11, 1);
      if ( !v81 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v81, "description", 11);
      v372.m256i_i64[0] = 11;
      v372.m256i_i64[1] = (__int64)v81;
      v372.m256i_i64[2] = 11;
      nullsub_1(v82);
      v83 = (_DWORD *)sub_140001650(44, 1);
      v375 = v83;
      if ( !v83 )
        sub_1416C2D4B(1, 44);
      qmemcpy(v83, "Greater reasoning depth for complex problems", 44);
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 44;
      v385.m256i_i64[2] = (__int64)v83;
      v385.m256i_i64[3] = 44;
      sub_140307860(&v379, &v358, &v372, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      *(_OWORD *)&v372.m256i_u64[1] = v358;
      v372.m256i_i64[3] = v359;
      v372.m256i_i8[0] = 5;
      *(_QWORD *)&v345 = 0;
      v346 = 0;
      nullsub_1(v84);
      v85 = sub_140001650(6, 1);
      if ( !v85 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v85 + 4) = 29810;
      *(_DWORD *)v85 = 1868981861;
      *(_QWORD *)&v358 = 6;
      *((_QWORD *)&v358 + 1) = v85;
      v359 = 6;
      nullsub_1(v86);
      v87 = sub_140001650(5, 1);
      v375 = (_DWORD *)v87;
      if ( !v87 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v87 + 4) = 104;
      *(_DWORD *)v87 = 1734961272;
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 5;
      v385.m256i_i64[2] = v87;
      v385.m256i_i64[3] = 5;
      sub_140307860(&v379, &v345, &v358, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      nullsub_1(v88);
      v89 = (void *)sub_140001650(11, 1);
      if ( !v89 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v89, "description", 11);
      *(_QWORD *)&v358 = 11;
      *((_QWORD *)&v358 + 1) = v89;
      v359 = 11;
      nullsub_1(v90);
      v91 = (_DWORD *)sub_140001650(47, 1);
      v375 = v91;
      if ( !v91 )
        sub_1416C2D4B(1, 47);
      qmemcpy(v91, "Extra high reasoning depth for complex problems", 47);
      v385.m256i_i8[0] = 3;
      v385.m256i_i64[1] = 47;
      v385.m256i_i64[2] = (__int64)v91;
      v385.m256i_i64[3] = 47;
      sub_140307860(&v379, &v345, &v358, &v385);
      if ( (_BYTE)v379 != 0xFF )
        sub_1400104F0(&v379);
      *(_OWORD *)((char *)&v385.m256i_u32[1] + 3) = v345;
      *(__int64 *)((char *)&v385.m256i_i64[2] + 7) = v346;
      v92 = *(_OWORD *)v352.m256i_i8;
      v52 = v367;
      *(_OWORD *)(v367 + 16) = *(_OWORD *)&v352.m256i_u64[2];
      *(_OWORD *)v52 = v92;
      v93 = *(_OWORD *)v384.m256i_i8;
      *(_OWORD *)(v52 + 48) = *(_OWORD *)&v384.m256i_u64[2];
      *(_OWORD *)(v52 + 32) = v93;
      v94 = *(_OWORD *)v372.m256i_i8;
      *(_OWORD *)(v52 + 80) = *(_OWORD *)&v372.m256i_u64[2];
      *(_OWORD *)(v52 + 64) = v94;
      *(_BYTE *)(v52 + 96) = 5;
      v95 = *(__int64 *)((char *)&v385.m256i_i64[1] + 7);
      v96 = *(__int64 *)((char *)&v385.m256i_i64[2] + 7);
      *(_OWORD *)(v52 + 97) = *(_OWORD *)v385.m256i_i8;
      *(_QWORD *)(v52 + 112) = v95;
      *(_QWORD *)(v52 + 120) = v96;
      v51 = 4;
      v354 = 2;
      LODWORD(v360) = 1;
      v38 = 1;
      v97 = &unk_1417A8D6C;
      v365 = (const char *)&unk_1417A8D6C;
      v48 = 6;
      v37 = 0;
      v35 = 6;
      LOBYTE(v97) = 1;
      LODWORD(v375) = (_DWORD)v97;
      v55 = 6;
      v53 = 4;
    }
  }
  else
  {
    v99 = v42;
    if ( !v42 )
    {
      v387 = 0;
      v386 = 0;
      v99 = sub_140AE5B30(v353, v356);
    }
    nullsub_1(v31);
    switch ( v99 )
    {
      case 0u:
      case 6u:
        v141 = sub_140001650(6, 1);
        if ( !v141 )
        {
          v387 = 0;
          v386 = 0;
          sub_1416C2D4B(1, 6);
        }
        *(_WORD *)(v141 + 4) = 28021;
        v364 = v141;
        *(_DWORD *)v141 = 1768187245;
        nullsub_1(v142);
        v143 = sub_140001650(32, 8);
        if ( !v143 )
          sub_1416C2D31(8, 32);
        v145 = v143;
        v384.m256i_i64[0] = 0;
        v384.m256i_i64[2] = 0;
        nullsub_1(v144);
        v146 = sub_140001650(6, 1);
        v367 = v145;
        if ( !v146 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v146 + 4) = 29810;
        *(_DWORD *)v146 = 1868981861;
        v372.m256i_i64[0] = 6;
        v372.m256i_i64[1] = v146;
        v372.m256i_i64[2] = 6;
        nullsub_1(v147);
        v148 = sub_140001650(6, 1);
        v383 = v148;
        if ( !v148 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v148 + 4) = 28021;
        *(_DWORD *)v148 = 1768187245;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 6;
        v385.m256i_i64[2] = v148;
        v385.m256i_i64[3] = 6;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v149);
        v150 = (void *)sub_140001650(11, 1);
        if ( !v150 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v150, "description", 11);
        v372.m256i_i64[0] = 11;
        v372.m256i_i64[1] = (__int64)v150;
        v372.m256i_i64[2] = 11;
        nullsub_1(v151);
        v152 = (void *)sub_140001650(29, 1);
        v383 = (__int64)v152;
        if ( !v152 )
          sub_1416C2D4B(1, 29);
        qmemcpy(v152, "Relay default reasoning level", 29);
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 29;
        v385.m256i_i64[2] = (__int64)v152;
        v385.m256i_i64[3] = 29;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        *(_OWORD *)((char *)&v385.m256i_u32[1] + 3) = *(_OWORD *)v384.m256i_i8;
        *(__int64 *)((char *)&v385.m256i_i64[2] + 7) = v384.m256i_i64[2];
        v52 = v367;
        *(_BYTE *)v367 = 5;
        v153 = *(__int64 *)((char *)&v385.m256i_i64[1] + 7);
        v154 = *(__int64 *)((char *)&v385.m256i_i64[2] + 7);
        *(_OWORD *)(v52 + 1) = *(_OWORD *)v385.m256i_i8;
        *(_QWORD *)(v52 + 16) = v153;
        *(_QWORD *)(v52 + 24) = v154;
        v38 = 1;
        v354 = 2;
        LODWORD(v360) = 1;
        v155 = &unk_1417A8D6C;
        v365 = (const char *)&unk_1417A8D6C;
        v48 = 6;
        v37 = 0;
        v35 = 6;
        LOBYTE(v155) = 1;
        LODWORD(v375) = (_DWORD)v155;
        LOBYTE(v155) = 1;
        v383 = (__int64)v155;
        v55 = 6;
        goto LABEL_131;
      case 1u:
        v278 = (_DWORD *)sub_140001650(4, 1);
        if ( !v278 )
        {
          v387 = 0;
          v386 = 0;
          sub_1416C2D4B(1, 4);
        }
        v364 = (__int64)v278;
        *v278 = 1751607656;
        nullsub_1(v279);
        v280 = sub_140001650(64, 8);
        if ( !v280 )
          sub_1416C2D31(8, 64);
        v282 = v280;
        v384.m256i_i64[0] = 0;
        v384.m256i_i64[2] = 0;
        nullsub_1(v281);
        v283 = sub_140001650(6, 1);
        v367 = v282;
        if ( !v283 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v283 + 4) = 29810;
        *(_DWORD *)v283 = 1868981861;
        v372.m256i_i64[0] = 6;
        v372.m256i_i64[1] = v283;
        v372.m256i_i64[2] = 6;
        nullsub_1(v284);
        v285 = (_DWORD *)sub_140001650(4, 1);
        v383 = (__int64)v285;
        if ( !v285 )
          sub_1416C2D4B(1, 4);
        *v285 = 1751607656;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 4;
        v385.m256i_i64[2] = (__int64)v285;
        v385.m256i_i64[3] = 4;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v286);
        v287 = (void *)sub_140001650(11, 1);
        if ( !v287 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v287, "description", 11);
        v372.m256i_i64[0] = 11;
        v372.m256i_i64[1] = (__int64)v287;
        v372.m256i_i64[2] = 11;
        nullsub_1(v288);
        v289 = (void *)sub_140001650(30, 1);
        v383 = (__int64)v289;
        if ( !v289 )
          sub_1416C2D4B(1, 30);
        qmemcpy(v289, "DeepSeek high reasoning effort", 30);
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 30;
        v385.m256i_i64[2] = (__int64)v289;
        v385.m256i_i64[3] = 30;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        *(_OWORD *)&v372.m256i_u64[1] = *(_OWORD *)v384.m256i_i8;
        v372.m256i_i64[3] = v384.m256i_i64[2];
        v372.m256i_i8[0] = 5;
        v352.m256i_i64[0] = 0;
        v352.m256i_i64[2] = 0;
        nullsub_1(v290);
        v291 = sub_140001650(6, 1);
        if ( !v291 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v291 + 4) = 29810;
        *(_DWORD *)v291 = 1868981861;
        v384.m256i_i64[0] = 6;
        v384.m256i_i64[1] = v291;
        v384.m256i_i64[2] = 6;
        nullsub_1(v292);
        v293 = sub_140001650(5, 1);
        v383 = v293;
        if ( !v293 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v293 + 4) = 104;
        *(_DWORD *)v293 = 1734961272;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 5;
        v385.m256i_i64[2] = v293;
        v385.m256i_i64[3] = 5;
        sub_140307860(&v379, &v352, &v384, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v294);
        v295 = (void *)sub_140001650(11, 1);
        if ( !v295 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v295, "description", 11);
        v384.m256i_i64[0] = 11;
        v384.m256i_i64[1] = (__int64)v295;
        v384.m256i_i64[2] = 11;
        nullsub_1(v296);
        v297 = (void *)sub_140001650(29, 1);
        v383 = (__int64)v297;
        if ( !v297 )
          sub_1416C2D4B(1, 29);
        qmemcpy(v297, "DeepSeek max reasoning effort", 29);
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 29;
        v385.m256i_i64[2] = (__int64)v297;
        v385.m256i_i64[3] = 29;
        sub_140307860(&v379, &v352, &v384, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        *(_OWORD *)((char *)&v385.m256i_u32[1] + 3) = *(_OWORD *)v352.m256i_i8;
        *(__int64 *)((char *)&v385.m256i_i64[2] + 7) = v352.m256i_i64[2];
        v298 = *(_OWORD *)v372.m256i_i8;
        v52 = v367;
        *(_OWORD *)(v367 + 16) = *(_OWORD *)&v372.m256i_u64[2];
        *(_OWORD *)v52 = v298;
        *(_BYTE *)(v52 + 32) = 5;
        v299 = *(__int64 *)((char *)&v385.m256i_i64[1] + 7);
        v300 = *(__int64 *)((char *)&v385.m256i_i64[2] + 7);
        *(_OWORD *)(v52 + 33) = *(_OWORD *)v385.m256i_i8;
        *(_QWORD *)(v52 + 48) = v299;
        *(_QWORD *)(v52 + 56) = v300;
        v354 = 2;
        LODWORD(v360) = 1;
        v38 = 1;
        v301 = &unk_1417A8D6C;
        v365 = (const char *)&unk_1417A8D6C;
        v35 = 6;
        v48 = 4;
        v37 = 0;
        LOBYTE(v301) = 1;
        LODWORD(v375) = (_DWORD)v301;
        LOBYTE(v301) = 1;
        v383 = (__int64)v301;
        v55 = 4;
        v51 = 2;
        v53 = 2;
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
        v100 = (_DWORD *)sub_140001650(4, 1);
        if ( !v100 )
        {
          v387 = 0;
          v386 = 0;
          sub_1416C2D4B(1, 4);
        }
        v364 = (__int64)v100;
        *v100 = 1751607656;
        nullsub_1(v101);
        v102 = sub_140001650(32, 8);
        if ( !v102 )
          sub_1416C2D31(8, 32);
        v104 = v102;
        v384.m256i_i64[0] = 0;
        v384.m256i_i64[2] = 0;
        nullsub_1(v103);
        v105 = sub_140001650(6, 1);
        v367 = v104;
        if ( !v105 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v105 + 4) = 29810;
        *(_DWORD *)v105 = 1868981861;
        v372.m256i_i64[0] = 6;
        v372.m256i_i64[1] = v105;
        v372.m256i_i64[2] = 6;
        nullsub_1(v106);
        v107 = (_DWORD *)sub_140001650(4, 1);
        v383 = (__int64)v107;
        if ( !v107 )
          sub_1416C2D4B(1, 4);
        *v107 = 1751607656;
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 4;
        v385.m256i_i64[2] = (__int64)v107;
        v385.m256i_i64[3] = 4;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        nullsub_1(v108);
        v109 = (void *)sub_140001650(11, 1);
        if ( !v109 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v109, "description", 11);
        v372.m256i_i64[0] = 11;
        v372.m256i_i64[1] = (__int64)v109;
        v372.m256i_i64[2] = 11;
        nullsub_1(v110);
        v111 = (void *)sub_140001650(19, 1);
        v383 = (__int64)v111;
        if ( !v111 )
          sub_1416C2D4B(1, 19);
        qmemcpy(v111, "Relay thinking mode", 19);
        v385.m256i_i8[0] = 3;
        v385.m256i_i64[1] = 19;
        v385.m256i_i64[2] = (__int64)v111;
        v385.m256i_i64[3] = 19;
        sub_140307860(&v379, &v384, &v372, &v385);
        if ( (_BYTE)v379 != 0xFF )
          sub_1400104F0(&v379);
        *(_OWORD *)((char *)&v385.m256i_u32[1] + 3) = *(_OWORD *)v384.m256i_i8;
        *(__int64 *)((char *)&v385.m256i_i64[2] + 7) = v384.m256i_i64[2];
        v52 = v367;
        *(_BYTE *)v367 = 5;
        v112 = *(__int64 *)((char *)&v385.m256i_i64[1] + 7);
        v113 = *(__int64 *)((char *)&v385.m256i_i64[2] + 7);
        *(_OWORD *)(v52 + 1) = *(_OWORD *)v385.m256i_i8;
        *(_QWORD *)(v52 + 16) = v112;
        *(_QWORD *)(v52 + 24) = v113;
        v38 = 1;
        v354 = 2;
        LODWORD(v360) = 1;
        v114 = &unk_1417A8D6C;
        v365 = (const char *)&unk_1417A8D6C;
        v35 = 6;
        v48 = 4;
        v37 = 0;
        LOBYTE(v114) = 1;
        LODWORD(v375) = (_DWORD)v114;
        LOBYTE(v114) = 1;
        v383 = (__int64)v114;
        v55 = 4;
LABEL_131:
        v51 = 1;
        v53 = 1;
        break;
    }
  }
LABEL_132:
  v372.m256i_i8[0] = 4;
  v372.m256i_i64[1] = v51;
  v372.m256i_i64[2] = v52;
  v372.m256i_i64[3] = v53;
  nullsub_1(v53);
  v156 = sub_140001650(23, 1);
  v367 = v55;
  v344 = v156;
  if ( !v156 )
  {
    v388 = 1;
    sub_1416C2D4B(1, 23);
  }
  *(_OWORD *)v156 = *(_OWORD *)aDefaultReasoni;
  *(_QWORD *)(v156 + 15) = 0x6C6576656C5F676ELL;
  v384.m256i_i64[0] = 23;
  v384.m256i_i64[1] = v156;
  v384.m256i_i64[2] = 23;
  v385.m256i_i64[1] = v55;
  v385.m256i_i64[2] = v364;
  v385.m256i_i64[3] = v48;
  v385.m256i_i8[0] = 3;
  v388 = 1;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 1;
    sub_1400104F0(&v379);
  }
  nullsub_1(v157);
  v158 = (void *)sub_140001650(26, 1);
  if ( !v158 )
  {
    v388 = 1;
    sub_1416C2D4B(1, 26);
  }
  qmemcpy(v158, "supported_reasoning_levels", 26);
  v384.m256i_i64[0] = 26;
  v384.m256i_i64[1] = (__int64)v158;
  v384.m256i_i64[2] = 26;
  v385 = v372;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v159);
  v160 = (void *)sub_140001650(10, 1);
  if ( !v160 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 10);
  }
  qmemcpy(v160, "shell_type", 10);
  v384.m256i_i64[0] = 10;
  v384.m256i_i64[1] = (__int64)v160;
  v384.m256i_i64[2] = 10;
  nullsub_1(0x79745F6C6C656873LL);
  v161 = (_DWORD *)sub_140001650(13, 1);
  v366 = v161;
  if ( !v161 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v161, "shell_command", 13);
  v385.m256i_i64[1] = 13;
  v385.m256i_i64[2] = (__int64)v161;
  v385.m256i_i64[3] = 13;
  v385.m256i_i8[0] = 3;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v162);
  v163 = (void *)sub_140001650(10, 1);
  if ( !v163 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 10);
  }
  qmemcpy(v163, "visibility", 10);
  v384.m256i_i64[0] = 10;
  v384.m256i_i64[1] = (__int64)v163;
  v384.m256i_i64[2] = 10;
  nullsub_1(0x696C696269736976LL);
  v164 = (_DWORD *)sub_140001650(4, 1);
  v366 = v164;
  if ( !v164 )
    sub_1416C2D4B(1, 4);
  *v164 = 1953720684;
  v385.m256i_i64[1] = 4;
  v385.m256i_i64[2] = (__int64)v164;
  v385.m256i_i64[3] = 4;
  v385.m256i_i8[0] = 3;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v165);
  v166 = (_OWORD *)sub_140001650(16, 1);
  if ( !v166 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 16);
  }
  *v166 = *(_OWORD *)aSupportedInApi;
  v384.m256i_i64[0] = 16;
  v384.m256i_i64[1] = (__int64)v166;
  v384.m256i_i64[2] = 16;
  v385.m256i_i16[0] = 257;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v167);
  v168 = (_QWORD *)sub_140001650(8, 1);
  if ( !v168 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 8);
  }
  *v168 = 0x797469726F697270LL;
  v384.m256i_i64[0] = 8;
  v384.m256i_i64[1] = (__int64)v168;
  v384.m256i_i64[2] = 8;
  v385.m256i_i8[0] = 2;
  v385.m256i_i64[1] = 0;
  v385.m256i_i64[2] = 100;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v169);
  v170 = (void *)sub_140001650(22, 1);
  if ( !v170 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 22);
  }
  qmemcpy(v170, "additional_speed_tiers", 22);
  v384.m256i_i64[0] = 22;
  v384.m256i_i64[1] = (__int64)v170;
  v384.m256i_i64[2] = 22;
  v385.m256i_i64[1] = 0;
  *(_OWORD *)&v385.m256i_u64[2] = 8u;
  v385.m256i_i8[0] = 4;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v171);
  v172 = (_OWORD *)sub_140001650(16, 1);
  if ( !v172 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 16);
  }
  *v172 = xmmword_1417A8CCE;
  v384.m256i_i64[0] = 16;
  v384.m256i_i64[1] = (__int64)v172;
  v384.m256i_i64[2] = 16;
  v337 = 0;
  *(_OWORD *)&v385.m256i_u64[2] = v342;
  v385.m256i_i8[0] = 0;
  *(__int64 *)((char *)v385.m256i_i64 + 1) = v338;
  *(__int32 *)((char *)&v385.m256i_i32[2] + 1) = v339;
  *(__int16 *)((char *)&v385.m256i_i16[6] + 1) = v340;
  v385.m256i_i8[15] = v341;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v173);
  v174 = (_DWORD *)sub_140001650(7, 1);
  if ( !v174 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 7);
  }
  *(_DWORD *)((char *)v174 + 3) = 1701077362;
  *v174 = 1919381621;
  *(_QWORD *)&v379 = 7;
  *((_QWORD *)&v379 + 1) = v174;
  v380 = 7;
  v388 = 0;
  sub_140307860(&v385, &v362, &v379, &v337);
  if ( v385.m256i_i8[0] != -1 )
  {
    v388 = 0;
    sub_1400104F0(&v385);
  }
  nullsub_1(v175);
  v176 = 1;
  v177 = sub_140001650(17, 1);
  if ( !v177 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 17);
  }
  *(_OWORD *)v177 = *(_OWORD *)aBaseInstructio_1;
  *(_BYTE *)(v177 + 16) = 115;
  v384.m256i_i64[0] = 17;
  v384.m256i_i64[1] = v177;
  v384.m256i_i64[2] = 17;
  if ( v37 )
  {
    nullsub_1(v178);
    v179 = sub_140001650(v37, 1);
    if ( !v179 )
    {
      v370 = 1;
      sub_1416C2D4B(1, v37);
    }
    v176 = v179;
    sub_141684120(v179, v38, v37);
    v180 = v37;
  }
  else
  {
    v180 = 0;
  }
  v385.m256i_i64[1] = v37;
  v385.m256i_i64[2] = v176;
  v385.m256i_i64[3] = v180;
  v385.m256i_i8[0] = 3;
  v370 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v181);
  v182 = (void *)sub_140001650(28, 1);
  if ( !v182 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 28);
  }
  qmemcpy(v182, "supports_reasoning_summaries", 28);
  v384.m256i_i64[0] = 28;
  v384.m256i_i64[1] = (__int64)v182;
  v183 = 1;
  if ( (_BYTE)v8 != 1 )
    v183 = (_BYTE)v8 == 2;
  v384.m256i_i64[2] = 28;
  v385.m256i_i8[1] = v183;
  v385.m256i_i8[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v184);
  v185 = (void *)sub_140001650(25, 1);
  if ( !v185 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 25);
  }
  qmemcpy(v185, "default_reasoning_summary", 25);
  v384.m256i_i64[0] = 25;
  v384.m256i_i64[1] = (__int64)v185;
  v384.m256i_i64[2] = 25;
  nullsub_1(v186);
  v187 = (_DWORD *)sub_140001650(4, 1);
  v366 = v187;
  if ( !v187 )
    sub_1416C2D4B(1, 4);
  *v187 = 1701736302;
  v385.m256i_i64[1] = 4;
  v385.m256i_i64[2] = (__int64)v187;
  v385.m256i_i64[3] = 4;
  v385.m256i_i8[0] = 3;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v188);
  v189 = (void *)sub_140001650(17, 1);
  if ( !v189 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 17);
  }
  qmemcpy(v189, "support_verbosity", 17);
  v384.m256i_i64[0] = 17;
  v384.m256i_i64[1] = (__int64)v189;
  v384.m256i_i64[2] = 17;
  v385.m256i_i8[1] = v32 ^ 1;
  v385.m256i_i8[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  if ( !v32 )
  {
    nullsub_1(v190);
    v191 = (void *)sub_140001650(17, 1);
    if ( !v191 )
    {
      v388 = 0;
      sub_1416C2D4B(1, 17);
    }
    qmemcpy(v191, "default_verbosity", 17);
    v384.m256i_i64[0] = 17;
    v384.m256i_i64[1] = (__int64)v191;
    v384.m256i_i64[2] = 17;
    nullsub_1(v192);
    v193 = sub_140001650(3, 1);
    v366 = (_DWORD *)v193;
    if ( !v193 )
      sub_1416C2D4B(1, 3);
    *(_BYTE *)(v193 + 2) = 119;
    *(_WORD *)v193 = 28524;
    v385.m256i_i64[1] = 3;
    v385.m256i_i64[2] = v193;
    v385.m256i_i64[3] = 3;
    v385.m256i_i8[0] = 3;
    sub_140307860(&v379, &v362, &v384, &v385);
    if ( (_BYTE)v379 != 0xFF )
    {
      v388 = 0;
      sub_1400104F0(&v379);
    }
    nullsub_1(v194);
    v195 = (void *)sub_140001650(21, 1);
    if ( !v195 )
    {
      v388 = 0;
      sub_1416C2D4B(1, 21);
    }
    qmemcpy(v195, "apply_patch_tool_type", 21);
    v384.m256i_i64[0] = 21;
    v384.m256i_i64[1] = (__int64)v195;
    v384.m256i_i64[2] = 21;
    nullsub_1(0x657079745F6C6F6FLL);
    v196 = (_QWORD *)sub_140001650(8, 1);
    v366 = v196;
    if ( !v196 )
      sub_1416C2D4B(1, 8);
    *v196 = 0x6D726F6665657266LL;
    v385.m256i_i64[1] = 8;
    v385.m256i_i64[2] = (__int64)v196;
    v385.m256i_i64[3] = 8;
    v385.m256i_i8[0] = 3;
    sub_140307860(&v379, &v362, &v384, &v385);
    if ( (_BYTE)v379 != 0xFF )
    {
      v388 = 0;
      sub_1400104F0(&v379);
    }
  }
  nullsub_1(v190);
  v197 = (void *)sub_140001650(17, 1);
  if ( !v197 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 17);
  }
  qmemcpy(v197, "truncation_policy", 17);
  *(_QWORD *)&v358 = 17;
  *((_QWORD *)&v358 + 1) = v197;
  v359 = 17;
  v352.m256i_i64[0] = 0;
  v352.m256i_i64[2] = 0;
  nullsub_1(v198);
  v199 = (_DWORD *)sub_140001650(4, 1);
  if ( !v199 )
    sub_1416C2D4B(1, 4);
  *v199 = 1701080941;
  v384.m256i_i64[0] = 4;
  v384.m256i_i64[1] = (__int64)v199;
  v384.m256i_i64[2] = 4;
  nullsub_1(v200);
  v201 = sub_140001650(v35, 1);
  v366 = (_DWORD *)v201;
  if ( !v201 )
    sub_1416C2D4B(1, v35);
  v202 = v201;
  sub_141684120(v201, v365, v35);
  v385.m256i_i8[0] = 3;
  v385.m256i_i64[1] = v35;
  v385.m256i_i64[2] = v202;
  v385.m256i_i64[3] = v35;
  sub_140307860(&v379, &v352, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
    sub_1400104F0(&v379);
  nullsub_1(v203);
  v204 = sub_140001650(5, 1);
  if ( !v204 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v204 + 4) = 116;
  *(_DWORD *)v204 = 1768778092;
  v384.m256i_i64[0] = 5;
  v384.m256i_i64[1] = v204;
  v384.m256i_i64[2] = 5;
  v385.m256i_i8[0] = 2;
  v385.m256i_i64[1] = 0;
  v385.m256i_i64[2] = 10000;
  sub_140307860(&v379, &v352, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
    sub_1400104F0(&v379);
  *(_OWORD *)&v385.m256i_u64[1] = *(_OWORD *)v352.m256i_i8;
  v385.m256i_i64[3] = v352.m256i_i64[2];
  v385.m256i_i8[0] = 5;
  v369 = 0;
  sub_140307860(&v379, &v362, &v358, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v205);
  v206 = (void *)sub_140001650(28, 1);
  if ( !v206 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 28);
  }
  qmemcpy(v206, "supports_parallel_tool_calls", 28);
  v384.m256i_i64[0] = 28;
  v384.m256i_i64[1] = (__int64)v206;
  v384.m256i_i64[2] = 28;
  v385.m256i_i8[1] = v360;
  v385.m256i_i8[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v207);
  v208 = (void *)sub_140001650(30, 1);
  if ( !v208 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 30);
  }
  qmemcpy(v208, "supports_image_detail_original", 30);
  v384.m256i_i64[0] = 30;
  v384.m256i_i64[1] = (__int64)v208;
  v384.m256i_i64[2] = 30;
  v385.m256i_i8[1] = (char)v375;
  v385.m256i_i8[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v209);
  v210 = (void *)sub_140001650(20, 1);
  if ( !v210 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 20);
  }
  qmemcpy(v210, "supports_search_tool", 20);
  v384.m256i_i64[0] = 20;
  v384.m256i_i64[1] = (__int64)v210;
  v211 = 1;
  if ( (_BYTE)v383 )
    v211 = (_BYTE)v8 == 2;
  v384.m256i_i64[2] = 20;
  v385.m256i_i8[1] = v211;
  v385.m256i_i8[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  if ( (_BYTE)v383 )
  {
    if ( (_BYTE)v8 == 2 )
    {
      nullsub_1(v212);
      v213 = (void *)sub_140001650(20, 1);
      if ( !v213 )
      {
        v388 = 0;
        sub_1416C2D4B(1, 20);
      }
      qmemcpy(v213, "web_search_tool_type", 20);
      v384.m256i_i64[0] = 20;
      v384.m256i_i64[1] = (__int64)v213;
      v384.m256i_i64[2] = 20;
      nullsub_1(v214);
      v215 = (char *)sub_140001650(14, 1);
      v365 = v215;
      if ( !v215 )
        sub_1416C2D4B(1, 14);
      qmemcpy(v215, "text_and_image", 14);
      v385.m256i_i64[1] = 14;
      v385.m256i_i64[2] = (__int64)v215;
      v385.m256i_i64[3] = 14;
      v385.m256i_i8[0] = 3;
      sub_140307860(&v379, &v362, &v384, &v385);
      if ( (_BYTE)v379 != 0xFF )
      {
LABEL_219:
        v388 = 0;
        sub_1400104F0(&v379);
      }
    }
  }
  else
  {
    nullsub_1(v212);
    v216 = (void *)sub_140001650(20, 1);
    if ( !v216 )
    {
      v388 = 0;
      sub_1416C2D4B(1, 20);
    }
    qmemcpy(v216, "web_search_tool_type", 20);
    v384.m256i_i64[0] = 20;
    v384.m256i_i64[1] = (__int64)v216;
    v384.m256i_i64[2] = 20;
    nullsub_1(v217);
    v218 = (char *)sub_140001650(14, 1);
    v365 = v218;
    if ( !v218 )
      sub_1416C2D4B(1, 14);
    qmemcpy(v218, "text_and_image", 14);
    v385.m256i_i64[1] = 14;
    v385.m256i_i64[2] = (__int64)v218;
    v385.m256i_i64[3] = 14;
    v385.m256i_i8[0] = 3;
    sub_140307860(&v379, &v362, &v384, &v385);
    if ( (_BYTE)v379 != 0xFF )
      goto LABEL_219;
  }
  if ( !v378 )
  {
    v388 = 0;
    v378 = sub_140AE5B30(v353, v356);
  }
  LOBYTE(v365) = v383 | (v361 == 0);
  if ( (_BYTE)v365 )
  {
    v219 = 0;
    v220 = 0;
    goto LABEL_238;
  }
  v388 = 0;
  v221 = sub_141433D50(aContextWindow, 14, v361);
  if ( v221 )
  {
    v222 = v361;
    if ( *(_BYTE *)v221 != 2 )
      goto LABEL_229;
    v223 = *(_QWORD *)(v221 + 8);
    if ( !v223 )
    {
      v221 = *(_QWORD *)(v221 + 16);
      v224 = v221 >= 0;
      goto LABEL_232;
    }
    if ( (_DWORD)v223 == 1 )
    {
      v221 = *(_QWORD *)(v221 + 16);
      v224 = 1;
    }
    else
    {
LABEL_229:
      v224 = 0;
    }
  }
  else
  {
    v224 = 0;
    v222 = v361;
  }
LABEL_232:
  v366 = (_DWORD *)v221;
  LOBYTE(v202) = v221 > 0;
  v388 = 0;
  v225 = sub_141433D50(aMaxContextWind, 18, v222);
  v219 = v202 & v224;
  if ( v225 && *(_BYTE *)v225 == 2 && (v226 = *(_QWORD *)(v225 + 8), v226 != 2) )
  {
    v202 = *(_QWORD *)(v225 + 16);
    v220 = (_DWORD)v226 == 1 || v202 >= 0;
  }
  else
  {
    v220 = 0;
  }
LABEL_238:
  v227 = v202 > 0;
  v388 = 0;
  sub_140A4A810(v385.m256i_i64, v353, v356);
  v228 = v385.m256i_i64[1];
  v360 = v202;
  if ( v385.m256i_i64[2] == 7 )
  {
    v229 = (*(_DWORD *)v385.m256i_i64[1] ^ 0x2D747067 | *(_DWORD *)(v385.m256i_i64[1] + 3) ^ 0x362E352D) == 0;
    goto LABEL_244;
  }
  if ( v385.m256i_i64[2] > 7uLL )
  {
    v229 = *(_QWORD *)v385.m256i_i64[1] == 0x2D362E352D747067LL;
LABEL_244:
    v230 = v229;
    v231 = (char)v8;
    v232 = v385.m256i_i64[0];
    if ( !v385.m256i_i64[0] )
      goto LABEL_246;
    goto LABEL_245;
  }
  v230 = 0;
  v231 = (char)v8;
  v232 = v385.m256i_i64[0];
  if ( v385.m256i_i64[0] )
LABEL_245:
    sub_140001660(v385.m256i_i64[1], v232, 1);
LABEL_246:
  v233 = 372000;
  v234 = 372000;
  if ( !v230 )
  {
    v234 = v349;
    v233 = v349;
    if ( (v354 & 1) == 0 )
    {
      if ( v219 )
      {
        v234 = (unsigned __int64)v366;
        v233 = v360;
        if ( !v227 || !v220 )
          v233 = (unsigned __int64)v366;
      }
      else
      {
        v228 = v378;
        if ( v378 == 1 )
        {
          v233 = 1000000;
          v234 = 1000000;
        }
        else if ( v378 == 5 || v231 == 2 )
        {
          v233 = 200000;
          v234 = 200000;
        }
        else
        {
          v233 = 1000000;
          if ( v378 == 2 )
            v233 = 0x40000;
          v234 = 272000;
          if ( v378 == 2 )
            v234 = 0x40000;
        }
      }
    }
  }
  v235 = *(_QWORD *)(v355 + 8);
  v236 = *(_BYTE *)v355 & (v235 > 0);
  if ( v236 )
    v233 = *(_QWORD *)(v355 + 8);
  nullsub_1(v228);
  v237 = (void *)sub_140001650(14, 1);
  if ( !v237 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 14);
  }
  if ( v236 )
    v234 = v235;
  qmemcpy(v237, "context_window", 14);
  v384.m256i_i64[0] = 14;
  v384.m256i_i64[1] = (__int64)v237;
  v384.m256i_i64[2] = 14;
  v385.m256i_i8[0] = 2;
  v385.m256i_i64[1] = v234 >> 63;
  v385.m256i_i64[2] = v234;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v238);
  v239 = sub_140001650(18, 1);
  if ( !v239 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 18);
  }
  *(_OWORD *)v239 = *(_OWORD *)aMaxContextWind;
  *(_WORD *)(v239 + 16) = 30575;
  v384.m256i_i64[0] = 18;
  v384.m256i_i64[1] = v239;
  v384.m256i_i64[2] = 18;
  v385.m256i_i8[0] = 2;
  v385.m256i_i64[1] = v233 >> 63;
  v385.m256i_i64[2] = v233;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  if ( (_BYTE)v365
    || (v388 = 0, (v241 = sub_141433D50(&xmmword_1417A8DF4, 32, v361)) == 0)
    || *(_BYTE *)v241 != 2
    || (v240 = *(_QWORD *)(v241 + 8), v240 == 2) )
  {
    v242 = 0;
  }
  else
  {
    v235 = *(_QWORD *)(v241 + 16);
    v242 = (_DWORD)v240 == 1 || v235 >= 0;
  }
  nullsub_1(v240);
  v243 = (void *)sub_140001650(32, 1);
  if ( !v243 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 32);
  }
  if ( v235 <= 0 )
    v235 = 95;
  if ( !v242 )
    v235 = 95;
  qmemcpy(v243, "effective_context_window_percent", 32);
  v384.m256i_i64[0] = 32;
  v384.m256i_i64[1] = (__int64)v243;
  v384.m256i_i64[2] = 32;
  v385.m256i_i8[0] = 2;
  v385.m256i_i64[1] = (unsigned __int64)v235 >> 63;
  v385.m256i_i64[2] = v235;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v244);
  v245 = (void *)sub_140001650(28, 1);
  if ( !v245 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 28);
  }
  qmemcpy(v245, "experimental_supported_tools", 28);
  v384.m256i_i64[0] = 28;
  v384.m256i_i64[1] = (__int64)v245;
  v384.m256i_i64[2] = 28;
  v385.m256i_i64[1] = 0;
  *(_OWORD *)&v385.m256i_u64[2] = 8u;
  v385.m256i_i8[0] = 4;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v246);
  v247 = (void *)sub_140001650(18, 1);
  if ( !v247 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 18);
  }
  qmemcpy(v247, "use_responses_lite", 18);
  v384.m256i_i64[0] = 18;
  v384.m256i_i64[1] = (__int64)v247;
  v384.m256i_i64[2] = 18;
  v385.m256i_i16[0] = 1;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v248);
  v249 = (void *)sub_140001650(13, 1);
  if ( !v249 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 13);
  }
  qmemcpy(v249, "service_tiers", 13);
  v384.m256i_i64[0] = 13;
  v384.m256i_i64[1] = (__int64)v249;
  v384.m256i_i64[2] = 13;
  v385.m256i_i64[1] = 0;
  *(_OWORD *)&v385.m256i_u64[2] = 8u;
  v385.m256i_i8[0] = 4;
  v388 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  nullsub_1(v250);
  v251 = (_OWORD *)sub_140001650(16, 1);
  if ( !v251 )
  {
    v388 = 0;
    sub_1416C2D4B(1, 16);
  }
  *v251 = xmmword_1417A8E42;
  v384.m256i_i64[0] = 16;
  v384.m256i_i64[1] = (__int64)v251;
  v384.m256i_i64[2] = 16;
  nullsub_1(v252);
  if ( (_BYTE)v375 )
  {
    v253 = sub_140001650(64, 8);
    if ( !v253 )
    {
      v381 = 1;
      sub_1416C2D31(8, 64);
    }
    *(_QWORD *)&v255 = v253;
    nullsub_1(v254);
    v256 = (_DWORD *)sub_140001650(4, 1);
    if ( !v256 )
    {
      v383 = v255;
      sub_1416C2D4B(1, 4);
    }
    *v256 = 1954047348;
    v385.m256i_i8[0] = 3;
    v385.m256i_i64[1] = 4;
    v385.m256i_i64[2] = (__int64)v256;
    v385.m256i_i64[3] = 4;
    nullsub_1(v257);
    v258 = sub_140001650(5, 1);
    if ( !v258 )
    {
      v383 = v255;
      sub_1416C2D4B(1, 5);
    }
    *(_BYTE *)(v258 + 4) = 101;
    *(_DWORD *)v258 = 1734438249;
    *(_BYTE *)(v255 + 32) = 3;
    *(_QWORD *)(v255 + 40) = 5;
    *(_QWORD *)(v255 + 48) = v258;
    *(_QWORD *)(v255 + 56) = 5;
    v259 = *(_OWORD *)&v385.m256i_u64[2];
    *(_OWORD *)v255 = *(_OWORD *)v385.m256i_i8;
    *(_OWORD *)(v255 + 16) = v259;
    *((_QWORD *)&v255 + 1) = 2;
  }
  else
  {
    v260 = sub_140001650(32, 8);
    if ( !v260 )
    {
      v381 = 1;
      sub_1416C2D31(8, 32);
    }
    *(_QWORD *)&v255 = v260;
    nullsub_1(v261);
    *((_QWORD *)&v255 + 1) = 1;
    v262 = (_DWORD *)sub_140001650(4, 1);
    if ( !v262 )
    {
      v383 = v255;
      sub_1416C2D4B(1, 4);
    }
    *v262 = 1954047348;
    *(_BYTE *)v255 = 3;
    *(_QWORD *)(v255 + 8) = 4;
    *(_QWORD *)(v255 + 16) = v262;
    *(_QWORD *)(v255 + 24) = 4;
  }
  v385.m256i_i64[1] = *((_QWORD *)&v255 + 1);
  *(_OWORD *)&v385.m256i_u64[2] = v255;
  v385.m256i_i8[0] = 4;
  v381 = 0;
  sub_140307860(&v379, &v362, &v384, &v385);
  if ( (_BYTE)v379 != 0xFF )
  {
    v388 = 0;
    sub_1400104F0(&v379);
  }
  if ( !(_BYTE)v383 )
  {
    if ( v361 )
    {
      if ( *(_BYTE *)v361 == 5 )
      {
        v263 = *(_QWORD *)(v361 + 8);
        if ( v263 )
        {
          v355 = *(_QWORD *)(v361 + 16);
          v361 += 8;
LABEL_311:
          v264 = v263 + 360;
          v265 = (_DWORD *)*(unsigned __int16 *)(v263 + 626);
          v383 = v263;
          v266 = (_QWORD *)(v263 - 8);
          v375 = v265;
          v267 = 3LL * (unsigned int)(8 * (_DWORD)v265);
          v268 = -1;
          do
          {
            if ( !v267 )
            {
              v268 = (__int64)v375;
LABEL_321:
              if ( !v355 )
                goto LABEL_326;
              --v355;
              v263 = *(_QWORD *)(v383 + 8 * v268 + 632);
              goto LABEL_311;
            }
            v269 = v264 + 24;
            v270 = *(_QWORD *)(v264 + 16);
            v271 = v270 - 4;
            if ( v270 >= 4 )
              v270 = 4;
            v272 = -(__int64)v271;
            v273 = sub_1416847B0(aSlug, *(_QWORD *)(v264 + 8), v270);
            if ( v273 )
              v272 = v273;
            v274 = (v272 > 0) - (v272 < 0);
            v266 += 4;
            ++v268;
            v267 -= 24;
            v264 = v269;
          }
          while ( v274 == 1 );
          if ( v274 )
            goto LABEL_321;
          v275 = v361;
          if ( *((_BYTE *)v266 - 24) == 3 && *v266 == v356 && !(unsigned int)sub_1416847B0(*(v266 - 1), v353, v356) )
          {
            v302 = sub_1402B3A40(v275, aBaseInstructio_1, 17);
            if ( v302 )
            {
              if ( *(_BYTE *)v302 == 3 )
              {
                v303 = *(_QWORD *)(v302 + 16);
                v304 = *(_QWORD *)(v302 + 24);
                v388 = 0;
                sub_14033BC10(v303, v304);
                v275 = v361;
                if ( v306 )
                {
                  nullsub_1(v305);
                  v307 = sub_140001650(17, 1);
                  if ( !v307 )
                  {
                    v388 = 0;
                    sub_1416C2D4B(1, 17);
                  }
                  *(_OWORD *)v307 = *(_OWORD *)aBaseInstructio_1;
                  *(_BYTE *)(v307 + 16) = 115;
                  v384.m256i_i64[0] = 17;
                  v384.m256i_i64[1] = v307;
                  v384.m256i_i64[2] = 17;
                  sub_140388B60((unsigned int)&v385, v304, 0, 1, 1);
                  v308 = v385.m256i_i64[1];
                  LOBYTE(v383) = v385.m256i_i8[0];
                  if ( v385.m256i_i8[0] )
                    sub_1416C2D4B(v385.m256i_i64[1], v385.m256i_i64[2]);
                  v309 = v385.m256i_i64[2];
                  if ( v304 )
                    sub_141684120(v385.m256i_i64[2], v303, v304);
                  v385.m256i_i64[1] = v308;
                  v385.m256i_i64[2] = v309;
                  v385.m256i_i64[3] = v304;
                  v385.m256i_i8[0] = 3;
                  sub_140307860(&v379, &v362, &v384, &v385);
                  if ( (_BYTE)v379 != 0xFF )
                  {
                    v388 = 0;
                    sub_1400104F0(&v379);
                  }
                  v275 = v361;
                }
              }
            }
            v310 = sub_1402B3A40(v275, aModelMessages, 14);
            if ( v310 && *(_BYTE *)v310 == 5 && *(_QWORD *)(v310 + 24) )
            {
              v312 = v310;
              nullsub_1(v311);
              v313 = (void *)sub_140001650(14, 1);
              if ( !v313 )
              {
                v388 = 0;
                sub_1416C2D4B(1, 14);
              }
              qmemcpy(v313, "model_messages", 14);
              v384.m256i_i64[0] = 14;
              v384.m256i_i64[1] = (__int64)v313;
              v384.m256i_i64[2] = 14;
              v368 = 1;
              sub_140A67B00(&v385, v312);
              v368 = 0;
              sub_140307860(&v379, &v362, &v384, &v385);
              if ( (_BYTE)v379 != 0xFF )
              {
                v388 = 0;
                sub_1400104F0(&v379);
              }
              v275 = v361;
            }
            v314 = sub_1402B3A40(v275, aToolMode, 9);
            if ( !v314 || *(_BYTE *)v314 != 3 )
            {
LABEL_383:
              v324 = sub_1402B3A40(v275, aMultiAgentVers, 19);
              if ( v324 && *(_BYTE *)v324 == 3 )
              {
                v326 = *(_WORD **)(v324 + 16);
                v327 = *(_QWORD *)(v324 + 24);
                if ( v327 == 2 )
                {
                  if ( *v326 == 12662 || *v326 == 12918 )
                    goto LABEL_391;
                }
                else if ( v327 == 8 && *(_QWORD *)v326 == 0x64656C6261736964LL )
                {
LABEL_391:
                  nullsub_1(v325);
                  v328 = sub_140001650(19, 1);
                  if ( !v328 )
                  {
                    v388 = 0;
                    sub_1416C2D4B(1, 19);
                  }
                  *(_OWORD *)v328 = *(_OWORD *)aMultiAgentVers;
                  *(_DWORD *)(v328 + 15) = 1852795251;
                  v384.m256i_i64[0] = 19;
                  v384.m256i_i64[1] = v328;
                  v384.m256i_i64[2] = 19;
                  sub_140388B60((unsigned int)&v385, v327, 0, 1, 1);
                  v329 = v385.m256i_i64[1];
                  LOBYTE(v383) = v385.m256i_i8[0];
                  if ( v385.m256i_i8[0] )
                    sub_1416C2D4B(v385.m256i_i64[1], v385.m256i_i64[2]);
                  v330 = v385.m256i_i64[2];
                  sub_141684120(v385.m256i_i64[2], v326, v327);
                  v385.m256i_i64[1] = v329;
                  v385.m256i_i64[2] = v330;
                  v385.m256i_i64[3] = v327;
                  v385.m256i_i8[0] = 3;
                  sub_140307860(&v379, &v362, &v384, &v385);
                  if ( (_BYTE)v379 != 0xFF )
                  {
                    v388 = 0;
                    sub_1400104F0(&v379);
                  }
                  v275 = v361;
                }
              }
              v331 = (_BYTE *)sub_1402B3A40(v275, &xmmword_1417A9012, 33);
              if ( v331 && *v331 == 1 )
              {
                v333 = v331[1];
                nullsub_1(v332);
                v334 = (void *)sub_140001650(33, 1);
                if ( !v334 )
                {
                  v388 = 0;
                  sub_1416C2D4B(1, 33);
                }
                qmemcpy(v334, "include_skills_usage_instructions", 33);
                v384.m256i_i64[0] = 33;
                v384.m256i_i64[1] = (__int64)v334;
                v384.m256i_i64[2] = 33;
                v385.m256i_i8[1] = v333;
                v385.m256i_i8[0] = 1;
                v388 = 0;
                sub_140307860(&v379, &v362, &v384, &v385);
                if ( (_BYTE)v379 != 0xFF )
                {
                  v388 = 0;
                  sub_1400104F0(&v379);
                }
              }
              goto LABEL_326;
            }
            v315 = *(_QWORD *)(v314 + 16);
            v316 = *(_QWORD *)(v314 + 24);
            switch ( v316 )
            {
              case 14LL:
                v319 = *(_QWORD *)v315 ^ 0x646F6D5F65646F63LL;
                v320 = *(_QWORD *)(v315 + 6) ^ 0x796C6E6F5F65646FLL;
                break;
              case 9LL:
                v319 = *(_QWORD *)v315 ^ 0x646F6D5F65646F63LL;
                v320 = *(unsigned __int8 *)(v315 + 8) ^ 0x65LL;
                break;
              case 6LL:
                v317 = *(_DWORD *)v315 ^ 0x65726964;
                v318 = v317 | *(unsigned __int16 *)(v315 + 4) ^ 0x7463u;
                if ( v317 | *(unsigned __int16 *)(v315 + 4) ^ 0x7463 )
                  goto LABEL_383;
                goto LABEL_378;
              default:
                goto LABEL_383;
            }
            v318 = v319 | v320;
            if ( v318 )
              goto LABEL_383;
LABEL_378:
            nullsub_1(v318);
            v321 = sub_140001650(9, 1);
            if ( !v321 )
            {
              v388 = 0;
              sub_1416C2D4B(1, 9);
            }
            *(_QWORD *)v321 = 0x646F6D5F6C6F6F74LL;
            *(_BYTE *)(v321 + 8) = 101;
            v384.m256i_i64[0] = 9;
            v384.m256i_i64[1] = v321;
            v384.m256i_i64[2] = 9;
            sub_140388B60((unsigned int)&v385, v316, 0, 1, 1);
            v322 = v385.m256i_i64[1];
            LOBYTE(v383) = v385.m256i_i8[0];
            if ( v385.m256i_i8[0] )
              sub_1416C2D4B(v385.m256i_i64[1], v385.m256i_i64[2]);
            v323 = v385.m256i_i64[2];
            sub_141684120(v385.m256i_i64[2], v315, v316);
            v385.m256i_i64[1] = v322;
            v385.m256i_i64[2] = v323;
            v385.m256i_i64[3] = v316;
            v385.m256i_i8[0] = 3;
            sub_140307860(&v379, &v362, &v384, &v385);
            if ( (_BYTE)v379 != 0xFF )
            {
              v388 = 0;
              sub_1400104F0(&v379);
            }
            v275 = v361;
            goto LABEL_383;
          }
        }
      }
    }
  }
LABEL_326:
  result = v363;
  v277 = v343;
  *(_QWORD *)(v343 + 24) = v363;
  *(_OWORD *)(v277 + 8) = v362;
  *(_BYTE *)v277 = 5;
  if ( (_BYTE)v357 )
  {
    if ( (_QWORD)v350 )
      return sub_140001660(*((_QWORD *)&v350 + 1), v350, 1);
  }
  return result;
}