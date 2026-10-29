// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140960310 | successor of pre-update 0x140c35490 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_140960310(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int128 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // r15
  _BYTE *v11; // rax
  _QWORD *v12; // rdx
  char v13; // r15
  __int64 *v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // r14
  unsigned __int64 v32; // r8
  int v33; // eax
  char v34; // cl
  bool v35; // cf
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // r14
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdi
  __int64 v44; // rdi
  int v45; // eax
  char v46; // cl
  __int64 v47; // rax
  const char *v48; // rcx
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r15
  __int64 v54; // r14
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdi
  __int64 v57; // rdi
  int v58; // eax
  char v59; // cl
  __int64 v60; // rax
  const char *v61; // rcx
  __int64 v62; // r13
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r15
  __int64 v67; // r14
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rdi
  int v70; // eax
  char v71; // cl
  __int64 v72; // rcx
  __int64 v73; // rax
  char v74; // r15
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 (__fastcall *v88)(); // r13
  _QWORD *v89; // rcx
  unsigned __int64 v90; // rax
  _QWORD *v91; // r9
  __int64 v92; // r11
  unsigned __int64 v93; // r8
  __int64 v94; // r14
  __int64 v95; // r10
  __int64 v96; // r14
  _QWORD *v97; // rdx
  __int64 v98; // rdi
  unsigned __int64 v99; // r12
  _QWORD *v100; // rdi
  __int64 v101; // r15
  unsigned __int64 v102; // r12
  _QWORD *v103; // rdi
  __int64 v104; // r15
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r13
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rdi
  _DWORD *v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // r13
  char v115; // al
  __int64 v116; // rdx
  _QWORD *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  _DWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  _DWORD *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r14
  __int8 v139; // r12
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  void *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r14
  __int8 v147; // r12
  __int64 v148; // rbx
  __int64 v149; // rax
  void *v150; // r15
  _BYTE *v151; // r14
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r12
  _BYTE *v157; // rdi
  void *v158; // rbx
  __int64 v159; // r15
  __int64 v160; // r14
  __int64 v161; // rax
  __int64 v162; // r15
  __int64 v163; // rax
  char v164; // al
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 v169; // r15
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rbx
  __int64 v173; // rax
  __int64 v174; // r8
  __int64 v175; // rbx
  __int64 v176; // rdi
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // r8
  char *v180; // r12
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rbx
  __int64 v184; // rax
  __int64 v185; // r8
  __int64 v186; // rbx
  __int64 v187; // rdi
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // r15
  __int64 v191; // rdx
  __int64 v192; // rcx
  _QWORD *v193; // rdi
  __int64 v194; // rax
  __int64 v195; // rcx
  __int64 v196; // r14
  __int64 v197; // rax
  __int64 v198; // rbx
  __int64 v199; // r15
  char *v200; // r8
  __int64 v201; // rdi
  int v202; // eax
  char v203; // cl
  __int64 v204; // rcx
  __int64 v205; // r15
  __int64 v206; // rax
  __int64 v207; // r8
  __int64 v208; // r15
  __int64 v209; // r12
  __int64 v210; // rdx
  __int64 v211; // rcx
  void *v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  void *v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  void *v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  void *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  void *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r14
  __int8 v228; // r12
  __int64 v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  void *v233; // rax
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // rax
  __int64 v237; // rbx
  __int64 v238; // rsi
  __int64 v239; // rdx
  __int64 v240; // rcx
  _DWORD *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  _DWORD *v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  void *v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  void *v253; // rax
  __int64 v254; // rsi
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // rdi
  _QWORD *v258; // r14
  _QWORD *v259; // rax
  __int64 v260; // rdi
  __int64 v261; // r14
  __int64 v262; // r12
  _QWORD *v263; // r13
  __int64 v264; // rdx
  __int64 v265; // rdx
  __int64 v266; // rcx
  void *v267; // rax
  __int64 v268; // rdx
  __int64 v269; // rcx
  void *v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rcx
  void *v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  void *v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  void *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  void *v282; // rax
  __int64 v283; // rdx
  __int64 v284; // rcx
  void *v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  void *v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  void *v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  double result; // xmm0_8
  __int64 v295; // rcx
  __int64 v296; // r15
  __int64 v297; // r15
  _QWORD *v298; // r12
  __int64 v299; // rdx
  _QWORD *v300; // r15
  __int64 v301; // rdx
  _QWORD *v302; // rsi
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // rbx
  char v306; // al
  bool v307; // al
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rcx
  _QWORD v313[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v314[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v315[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v316; // [rsp+70h] [rbp-10h] BYREF
  __int64 v317; // [rsp+80h] [rbp+0h]
  __int128 v318; // [rsp+88h] [rbp+8h] BYREF
  __int64 v319; // [rsp+98h] [rbp+18h]
  __int128 v320; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v321; // [rsp+B0h] [rbp+30h]
  __int128 v322; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v323; // [rsp+C8h] [rbp+48h]
  __int128 v324; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v325; // [rsp+E0h] [rbp+60h]
  __int64 v326; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v327; // [rsp+F0h] [rbp+70h]
  __int64 v328; // [rsp+F8h] [rbp+78h]
  __int128 v329; // [rsp+108h] [rbp+88h]
  __int64 v330; // [rsp+118h] [rbp+98h]
  __int64 v331; // [rsp+120h] [rbp+A0h]
  __int128 v332; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v333; // [rsp+138h] [rbp+B8h]
  __int64 v334; // [rsp+140h] [rbp+C0h] BYREF
  _QWORD *v335; // [rsp+148h] [rbp+C8h]
  __int64 v336; // [rsp+150h] [rbp+D0h]
  __int64 *v337; // [rsp+158h] [rbp+D8h]
  _QWORD *v338; // [rsp+160h] [rbp+E0h]
  __int128 v339; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v340; // [rsp+178h] [rbp+F8h]
  __int64 v341; // [rsp+180h] [rbp+100h]
  __int64 v342; // [rsp+188h] [rbp+108h]
  __int64 v343; // [rsp+190h] [rbp+110h]
  __int64 v344; // [rsp+198h] [rbp+118h]
  __int64 v345; // [rsp+1A0h] [rbp+120h]
  __int64 v346; // [rsp+1A8h] [rbp+128h]
  __int64 v347; // [rsp+1B0h] [rbp+130h]
  const char **v348; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 (__fastcall *v349)(); // [rsp+1C0h] [rbp+140h]
  _QWORD *v350; // [rsp+1C8h] [rbp+148h]
  __int64 v351; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v352; // [rsp+1D8h] [rbp+158h]
  _QWORD *v353; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v354; // [rsp+1E8h] [rbp+168h]
  __int128 v355; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v356; // [rsp+200h] [rbp+180h]
  __int64 v357; // [rsp+208h] [rbp+188h]
  __int128 v358; // [rsp+210h] [rbp+190h]
  __int64 v359; // [rsp+220h] [rbp+1A0h]
  __int128 v360; // [rsp+228h] [rbp+1A8h]
  __int64 v361; // [rsp+238h] [rbp+1B8h]
  __int64 v362; // [rsp+240h] [rbp+1C0h]
  __int64 v363; // [rsp+248h] [rbp+1C8h]
  __int64 v364; // [rsp+250h] [rbp+1D0h]
  __int64 v365; // [rsp+258h] [rbp+1D8h] BYREF
  __int128 v366; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v367; // [rsp+280h] [rbp+200h]
  __int16 v368; // [rsp+288h] [rbp+208h]
  char v369; // [rsp+28Ah] [rbp+20Ah]
  __int64 v370; // [rsp+290h] [rbp+210h]
  __int64 v371; // [rsp+298h] [rbp+218h]
  __int64 v372; // [rsp+2A0h] [rbp+220h]
  __int64 v373; // [rsp+2A8h] [rbp+228h]
  const char *v374; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v375; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v376; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v377; // [rsp+2D0h] [rbp+250h]
  __int128 v378; // [rsp+2E0h] [rbp+260h]
  __int128 v379; // [rsp+2F0h] [rbp+270h]
  __int64 v380; // [rsp+300h] [rbp+280h]
  __int64 v381; // [rsp+308h] [rbp+288h]
  unsigned __int64 v382; // [rsp+310h] [rbp+290h]
  __int64 v383; // [rsp+318h] [rbp+298h]
  __int64 v384; // [rsp+320h] [rbp+2A0h]
  __int64 v385; // [rsp+328h] [rbp+2A8h]
  _BYTE v386[80]; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v387; // [rsp+380h] [rbp+300h]
  __int128 v388; // [rsp+390h] [rbp+310h]
  __int64 v389; // [rsp+3A0h] [rbp+320h]
  _QWORD *v390; // [rsp+3A8h] [rbp+328h]
  __int64 v391; // [rsp+3B0h] [rbp+330h]
  __int64 v392; // [rsp+3B8h] [rbp+338h] BYREF
  __int128 v393; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v394; // [rsp+3D8h] [rbp+358h]
  __int64 v395; // [rsp+3E0h] [rbp+360h]
  __int16 v396; // [rsp+3E8h] [rbp+368h]
  bool v397; // [rsp+3EAh] [rbp+36Ah]
  __int128 v398; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v399; // [rsp+400h] [rbp+380h]
  __int64 v400; // [rsp+408h] [rbp+388h]
  __int64 *v401; // [rsp+410h] [rbp+390h]
  __int64 v402; // [rsp+418h] [rbp+398h]
  __m256i v403; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v404; // [rsp+440h] [rbp+3C0h]
  __int128 v405; // [rsp+450h] [rbp+3D0h]
  __int128 v406; // [rsp+460h] [rbp+3E0h]
  __int128 v407; // [rsp+470h] [rbp+3F0h]
  __int128 v408; // [rsp+480h] [rbp+400h]
  __m256i v409; // [rsp+490h] [rbp+410h] BYREF
  __int128 v410; // [rsp+4B0h] [rbp+430h]
  __int128 v411; // [rsp+4C0h] [rbp+440h]
  __int128 v412; // [rsp+4D0h] [rbp+450h]
  __int128 v413; // [rsp+4E0h] [rbp+460h]
  __int64 v414; // [rsp+4F0h] [rbp+470h]
  __int64 v415; // [rsp+4F8h] [rbp+478h]
  __int128 v416; // [rsp+500h] [rbp+480h] BYREF
  __int128 v417; // [rsp+510h] [rbp+490h]
  char v418; // [rsp+52Fh] [rbp+4AFh] BYREF
  unsigned __int64 v419; // [rsp+530h] [rbp+4B0h]
  __int64 v420; // [rsp+538h] [rbp+4B8h]
  __int64 v421; // [rsp+540h] [rbp+4C0h]
  char v422; // [rsp+54Ah] [rbp+4CAh]
  char v423; // [rsp+54Bh] [rbp+4CBh]
  char v424; // [rsp+54Ch] [rbp+4CCh]
  char v425; // [rsp+54Dh] [rbp+4CDh]
  char v426; // [rsp+54Eh] [rbp+4CEh]
  char v427; // [rsp+54Fh] [rbp+4CFh]
  _BYTE v428[48]; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v429; // [rsp+580h] [rbp+500h]
  __int64 v430; // [rsp+598h] [rbp+518h]
  char v431; // [rsp+5A7h] [rbp+527h]
  __int64 v432; // [rsp+5A8h] [rbp+528h]
  _QWORD *v433; // [rsp+5B0h] [rbp+530h]
  char v434; // [rsp+5B8h] [rbp+538h]
  char v435; // [rsp+5B9h] [rbp+539h]
  char v436; // [rsp+5BAh] [rbp+53Ah]
  char v437; // [rsp+5BBh] [rbp+53Bh]
  char v438; // [rsp+5BCh] [rbp+53Ch]
  char v439; // [rsp+5BDh] [rbp+53Dh]
  char v440; // [rsp+5BEh] [rbp+53Eh]
  char v441; // [rsp+5BFh] [rbp+53Fh]
  __int64 v442; // [rsp+5C0h] [rbp+540h]

  v442 = -2;
  *((_QWORD *)&v5 + 1) = a2;
  *(_QWORD *)&v5 = a1;
  v6 = sub_140953E00(a2);
  if ( v6 )
  {
    sub_14096A650(v5, v6, aThreadCatalogH, 26);
    return result;
  }
  v370 = a3;
  v330 = v5;
  sub_1416B18A0(
    (unsigned int)&v326,
    *(_QWORD *)(*((_QWORD *)&v5 + 1) + 776LL),
    *(_QWORD *)(*((_QWORD *)&v5 + 1) + 784LL),
    (unsigned int)"codex_router_catalog.jsonmodels_cache.json",
    25);
  *(_QWORD *)&v5 = v327;
  v7 = v328;
  sub_1416C49D0(v386, v327, v328);
  v8 = *(_DWORD *)v386;
  if ( *(_QWORD *)v386 == 2 && (v386[8] & 3u) - 2 >= 2 && (v386[8] & 3) != 0 )
  {
    --*(_QWORD *)&v386[8];
    v386[0] = 3;
    sub_1416EBAD0(&v386[8]);
  }
  sub_1416C49D0(v386, v5, v7);
  if ( *(_DWORD *)v386 == 2 )
  {
    v9 = *(_QWORD *)&v386[8];
    if ( (v386[8] & 3u) - 2 >= 2 && (v386[8] & 3) != 0 )
    {
      --*(_QWORD *)&v386[8];
      v386[0] = 3;
      sub_1416EBAD0(&v386[8]);
    }
    v10 = 0;
    if ( v8 != 2 )
    {
LABEL_12:
      sub_1416CC1A0(&v409, v5, v7);
      if ( v409.m256i_i64[0] == -1 )
      {
        *(_QWORD *)&v5 = v409.m256i_i64[1];
        *(_QWORD *)&v339 = v409.m256i_i64[1];
        v403.m256i_i64[0] = 0;
        *(_OWORD *)&v403.m256i_u64[1] = 1u;
        *(_QWORD *)&v386[16] = 1610612768;
        *(_QWORD *)v386 = &v403;
        *(_QWORD *)&v386[8] = &off_141A66E10;
        if ( (unsigned __int8)sub_1416EA080(&v339, v386) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_5,
            55,
            (unsigned int)&v418,
            (unsigned int)&unk_141A5A890,
            (__int64)&off_141A66EC8);
        v359 = v403.m256i_i64[2];
        v358 = *(_OWORD *)v403.m256i_i8;
        v368 = 1;
        v351 = v10;
        v352 = v9;
        *(_QWORD *)&v360 = -1;
        v353 = nullptr;
        v354 = 8;
        v355 = 0;
        v356 = 8;
        v357 = 0;
        v365 = 0;
        v367 = 0;
        v366 = 0;
        v362 = -1;
        v369 = 0;
        if ( (unsigned int)(v5 & 3) - 2 >= 2 && (v5 & 3) != 0 )
        {
          *(_QWORD *)&v5 = v5 - 1;
          *(_QWORD *)&v386[8] = v5;
          v386[0] = 3;
          sub_1416EBAD0(&v386[8]);
        }
      }
      else
      {
        v400 = v409.m256i_i64[0];
        *(_OWORD *)v386 = *(_OWORD *)&v409.m256i_u64[1];
        *(_OWORD *)&v386[16] = 0;
        v419 = v409.m256i_u64[1];
        *(_OWORD *)&v386[32] = *(_OWORD *)&v409.m256i_u64[1];
        sub_140D8B500(&v403, (__int128 *)v386);
        if ( v403.m256i_i8[0] != -1 )
        {
          v409 = v403;
          v396 = 257;
          *(_QWORD *)v386 = v10;
          *(_QWORD *)&v386[8] = v9;
          *(_QWORD *)&v386[64] = -1;
          *((_QWORD *)&v387 + 1) = -1;
          *(_QWORD *)&v386[16] = 0;
          *(_QWORD *)&v386[24] = 8;
          *(_OWORD *)&v386[32] = 0;
          *(_OWORD *)&v386[48] = 8u;
          v392 = 0;
          v395 = 0;
          v393 = 0;
          v389 = -1;
          v397 = 0;
          *(_QWORD *)v428 = 0;
          *(_QWORD *)&v428[16] = 0;
          v11 = (_BYTE *)sub_1416724D0(aModels_2, 6, &v409);
          if ( v11 )
          {
            v12 = nullptr;
            if ( *v11 == 4 )
              v12 = v11 + 8;
            v433 = v12;
          }
          else
          {
            v433 = nullptr;
          }
          v150 = &unk_141A5C7E9;
          v151 = v428;
          *(_QWORD *)&v5 = &v351;
          v3 = 0;
          while ( 1 )
          {
            do
            {
LABEL_262:
              if ( !v3 || v3 == v7 )
              {
                if ( !v433 || (v152 = v433[2]) == 0 )
                {
                  if ( *(_QWORD *)&v386[32] )
                  {
                    v304 = *(_QWORD *)&v386[24];
                    *(_QWORD *)&v5 = *(_QWORD *)&v386[24] + 24LL * *(_QWORD *)&v386[32];
                    do
                    {
                      v305 = v304;
                      if ( v304 == (_QWORD)v5 )
                        break;
                      v306 = sub_140D5F210(*(_QWORD *)(v304 + 8), *(_QWORD *)(v304 + 16));
                      v304 = v305 + 24;
                    }
                    while ( v306 );
                    v307 = v305 == (_QWORD)v5;
                  }
                  else
                  {
                    v307 = 0;
                  }
                  v397 = v307;
                  sub_1419234B0(&v351, v386, 192);
                  if ( *(_QWORD *)v428 )
                  {
                    v308 = *(_QWORD *)&v428[16];
                    v403.m256i_i64[1] = 0;
                    *(_OWORD *)&v403.m256i_u64[2] = *(_OWORD *)v428;
                    *((_QWORD *)&v404 + 1) = 0;
                    v405 = *(_OWORD *)v428;
                    v309 = 1;
                  }
                  else
                  {
                    v309 = 0;
                    v308 = 0;
                  }
                  v403.m256i_i64[0] = v309;
                  *(_QWORD *)&v404 = v309;
                  *(_QWORD *)&v406 = v308;
                  v431 = 0;
                  sub_140A6FD50(&v339, &v403);
                  v310 = v339;
                  if ( (_QWORD)v339 )
                  {
                    *(_QWORD *)&v5 = &v339;
                    do
                    {
                      v311 = *(_QWORD *)(v310 + 24 * v340 + 8);
                      if ( v311 )
                        sub_140001660(*(_QWORD *)(v310 + 24 * v340 + 16), v311, 1);
                      v431 = 0;
                      sub_140A6FD50(&v339, &v403);
                      v310 = v339;
                    }
                    while ( (_QWORD)v339 );
                  }
                  sub_140032FF0(&v409);
                  goto LABEL_476;
                }
                v3 = v433[1];
                v7 = v3 + 32 * v152;
                v433 = nullptr;
              }
              v153 = sub_1416724D0(v150, 4, v3);
              v3 += 32;
            }
            while ( !v153 || *(_BYTE *)v153 != 3 );
            v155 = *(_QWORD *)(v153 + 24);
            v432 = v155;
            if ( v155 < 0 )
              break;
            v401 = *(__int64 **)(v153 + 16);
            v421 = v7;
            if ( v155 )
            {
              v156 = v5;
              v157 = v151;
              v158 = v150;
              nullsub_1(v155, v154);
              v159 = 1;
              v160 = v432;
              v161 = sub_140001650(v432, 1);
              if ( !v161 )
              {
                v430 = v160;
LABEL_331:
                sub_14196B2DB(v159, v430);
              }
              v162 = v161;
              sub_1419234B0(v161, v401, v160);
              v163 = v162;
              v150 = v158;
              v7 = v421;
            }
            else
            {
              v163 = 1;
              v156 = v5;
              v157 = v151;
              v160 = v432;
            }
            v351 = v160;
            v430 = v163;
            v352 = v163;
            v353 = (_QWORD *)v160;
            v164 = sub_140A67680(v157, v156);
            v151 = v157;
            *(_QWORD *)&v5 = v156;
            if ( !v164 )
            {
              v167 = v432;
              if ( v432 )
              {
                nullsub_1(v166, v165);
                v168 = sub_140001650(v167, 1);
                if ( !v168 )
                  sub_14196B2DB(1, v167);
                v169 = v168;
                sub_1419234B0(v168, v401, v167);
              }
              else
              {
                v169 = 1;
              }
              v351 = v167;
              v352 = v169;
              v353 = (_QWORD *)v167;
              sub_140A67680(&v392, v156);
              v172 = v432;
              if ( v432 )
              {
                nullsub_1(v171, v170);
                v173 = sub_140001650(v172, 1);
                v174 = v172;
                if ( !v173 )
                  sub_14196B2DB(1, v172);
                v175 = v156;
                v414 = v173;
                sub_1419234B0(v173, v401, v174);
              }
              else
              {
                v175 = v156;
                v414 = 1;
              }
              v176 = *(_QWORD *)&v386[32];
              if ( *(_QWORD *)&v386[32] == *(_QWORD *)&v386[16] )
                sub_141939F90(&v386[16]);
              v177 = *(_QWORD *)&v386[24];
              v178 = 3 * v176;
              v179 = v432;
              *(_QWORD *)(*(_QWORD *)&v386[24] + 8 * v178) = v432;
              *(_QWORD *)(v177 + 8 * v178 + 8) = v414;
              *(_QWORD *)(v177 + 8 * v178 + 16) = v179;
              *(_QWORD *)&v386[32] = v176 + 1;
              *(_QWORD *)&v5 = v175;
              sub_1416E1760(v175, (_DWORD)v401, v179, (unsigned int)asc_141A5B788, 2);
              v150 = &unk_141A5C7E9;
              v7 = v421;
              sub_140A0A190(&v403, v5);
              if ( v403.m256i_i32[0] == 1
                && v403.m256i_i64[1] >= 0xDuLL
                && !(*v401 ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v401 + 5) ^ 0x5F79616C65725F69LL) )
              {
                v180 = (char *)(v432 - v403.m256i_i64[2]);
                v384 = v403.m256i_i64[2];
                v414 = (__int64)v401 + v403.m256i_i64[2];
                sub_1408FEA60((char *)v401 + v403.m256i_i64[2], v432 - v403.m256i_i64[2]);
                if ( v181 )
                {
                  v183 = v432;
                  if ( v432 )
                  {
                    nullsub_1(v182, v181);
                    v184 = sub_140001650(v183, 1);
                    v185 = v183;
                    if ( !v184 )
                      sub_14196B2DB(1, v183);
                    v186 = v5;
                    v420 = v184;
                    sub_1419234B0(v184, v401, v185);
                  }
                  else
                  {
                    v186 = v5;
                    v420 = 1;
                  }
                  v187 = *(_QWORD *)&v386[56];
                  if ( *(_QWORD *)&v386[56] == *(_QWORD *)&v386[40] )
                    sub_141939F90(&v386[40]);
                  v188 = *(_QWORD *)&v386[48];
                  v189 = 3 * v187;
                  v190 = v432;
                  *(_QWORD *)(*(_QWORD *)&v386[48] + 8 * v189) = v432;
                  v191 = v420;
                  *(_QWORD *)(v188 + 8 * v189 + 8) = v420;
                  *(_QWORD *)(v188 + 8 * v189 + 16) = v190;
                  *(_QWORD *)&v386[56] = v187 + 1;
                  v192 = v186;
                  v7 = v421;
                  if ( v389 == -1 )
                  {
                    sub_1401E7560(v192, v190, 0, 1, 1);
                    v192 = v352;
                    if ( (_DWORD)v351 == 1 )
                      sub_14196B2DB(v352, v353);
                    v420 = v352;
                    v193 = v353;
                    if ( v190 )
                      sub_1419234B0(v353, v401, v190);
                    v191 = v389;
                    if ( v389 != -1 && v389 )
                      sub_140001660(v390, v389, 1);
                    v389 = v420;
                    v390 = v193;
                    v190 = v432;
                    v391 = v432;
                  }
                  v380 = 1;
                  if ( v190 != v384 )
                  {
                    nullsub_1(v192, v191);
                    v194 = sub_140001650(v180, 1);
                    if ( !v194 )
                      sub_14196B2DB(1, v180);
                    v380 = v194;
                    sub_1419234B0(v194, v414, v180);
                  }
                  v195 = *((_QWORD *)&v393 + 1);
                  if ( *((_QWORD *)&v393 + 1) )
                  {
                    v420 = v394;
                    v196 = v380;
                    while ( 2 )
                    {
                      v197 = v195 + 8;
                      v415 = v195;
                      v371 = *(unsigned __int16 *)(v195 + 538);
                      v198 = 3LL * (unsigned int)(8 * v371);
                      v199 = -1;
                      do
                      {
                        if ( !v198 )
                        {
                          v199 = v371;
                          goto LABEL_318;
                        }
                        v414 = v197 + 24;
                        v200 = *(char **)(v197 + 16);
                        v201 = v180 - v200;
                        if ( v180 < v200 )
                          v200 = v180;
                        v202 = sub_141923B40(v196, *(_QWORD *)(v197 + 8), v200);
                        if ( v202 )
                          v201 = v202;
                        v203 = (v201 > 0) - (v201 < 0);
                        ++v199;
                        v198 -= 24;
                        v197 = v414;
                      }
                      while ( v203 == 1 );
                      if ( !v203 )
                      {
                        if ( v432 != v384 )
                          sub_140001660(v196, v180, 1);
                        v150 = &unk_141A5C7E9;
                        v151 = v428;
                        *(_QWORD *)&v5 = &v351;
                        v7 = v421;
                        goto LABEL_262;
                      }
LABEL_318:
                      v204 = v415;
                      if ( v420 )
                      {
                        --v420;
                        v195 = *(_QWORD *)(v415 + 8 * v199 + 544);
                        continue;
                      }
                      break;
                    }
                    v151 = v428;
                    v7 = v421;
                  }
                  else
                  {
                    v204 = 0;
                    v199 = v381;
                  }
                  v351 = (__int64)v180;
                  v352 = v380;
                  v353 = v180;
                  v354 = (__int64)&v393 + 8;
                  v355 = (unsigned __int64)v204;
                  v381 = v199;
                  v356 = v199;
                  v205 = v432;
                  *(_QWORD *)&v5 = &v351;
                  if ( v432 )
                  {
                    nullsub_1(v204, v191);
                    v206 = sub_140001650(v205, 1);
                    v207 = v205;
                    if ( !v206 )
                    {
                      v433 = v180;
                      sub_14196B2DB(1, v205);
                    }
                    v208 = v206;
                    v209 = v207;
                    sub_1419234B0(v206, v401, v207);
                  }
                  else
                  {
                    v209 = 0;
                    v208 = 1;
                  }
                  *(_QWORD *)&v339 = v209;
                  *((_QWORD *)&v339 + 1) = v208;
                  v340 = v209;
                  sub_140A54E50(&v403, &v351, &v339);
                  v150 = &unk_141A5C7E9;
                }
              }
            }
          }
          v159 = 0;
          goto LABEL_331;
        }
        *(_QWORD *)v428 = v403.m256i_i64[1];
        *(_QWORD *)&v339 = 0;
        *((_QWORD *)&v339 + 1) = 1;
        v340 = 0;
        *(_QWORD *)&v386[16] = 1610612768;
        *(_QWORD *)v386 = &v339;
        *(_QWORD *)&v386[8] = &off_141A66E10;
        if ( (unsigned __int8)sub_14166FAD0(v428, v386) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_5,
            55,
            (unsigned int)&v418,
            (unsigned int)&unk_141A5A890,
            (__int64)&off_141A66EC8);
        v361 = v340;
        v360 = v339;
        v368 = 1;
        v351 = v10;
        v352 = v9;
        *(_QWORD *)&v358 = -1;
        v353 = nullptr;
        v354 = 8;
        v355 = 0;
        v356 = 8;
        v357 = 0;
        v365 = 0;
        v367 = 0;
        v366 = 0;
        v362 = -1;
        v369 = 0;
        sub_140032F30(v428);
LABEL_476:
        if ( v400 )
          sub_140001660(v419, v400, 1);
      }
      goto LABEL_20;
    }
  }
  else
  {
    v9 = *(_QWORD *)&v386[56];
    v10 = 1;
    if ( v8 != 2 )
      goto LABEL_12;
  }
  v368 = 0;
  v351 = v10;
  v352 = v9;
  *(_QWORD *)&v358 = -1;
  *(_QWORD *)&v360 = -1;
  v353 = nullptr;
  v354 = 8;
  v355 = 0;
  v356 = 8;
  v357 = 0;
  v365 = 0;
  v367 = 0;
  v366 = 0;
  v362 = -1;
  v369 = 0;
LABEL_20:
  sub_1407F3500(&v339, *((_QWORD *)&v5 + 1));
  v13 = *(_BYTE *)(*((_QWORD *)&v5 + 1) + 1398LL);
  v409.m256i_i64[0] = 0;
  v409.m256i_i64[1] = 8;
  *(_OWORD *)&v409.m256i_u64[2] = 0;
  v411 = 0;
  v412 = 0;
  v413 = 0;
  v410 = 8u;
  *(_QWORD *)&v332 = 0;
  v333 = 0;
  v441 = 1;
  sub_140A2C460(v386, *((_QWORD *)&v5 + 1));
  v14 = *(__int64 **)&v386[8];
  v334 = *(_QWORD *)&v386[8];
  v329 = *(_OWORD *)v386;
  v336 = *(_QWORD *)v386;
  v401 = (__int64 *)(*(_QWORD *)&v386[8] + 32LL * *(_QWORD *)&v386[16]);
  v337 = v401;
  v331 = v362;
  v371 = (__int64)(v401 - 4);
  v414 = *(_QWORD *)(v370 + 8);
  v384 = *(_QWORD *)(v370 + 16);
  LOBYTE(v381) = v369 | v13;
LABEL_21:
  v419 = v371 - (_QWORD)v14;
  v433 = v14 + 5;
  v15 = v14;
  while ( v15 != v401 )
  {
    v14 = v15 + 4;
    v335 = v15 + 4;
    if ( *v15 == -1 )
    {
      if ( v401 != v14 )
      {
        v419 >>= 5;
        do
        {
          v117 = v433;
          v118 = *(v433 - 1);
          if ( v118 )
            sub_140001660(*v433, v118, 1);
          *((_QWORD *)&v5 + 1) = v117 + 4;
          v433 = *((_QWORD **)&v5 + 1);
          --v419;
        }
        while ( v419 );
      }
      break;
    }
    v400 = *v15;
    *((_QWORD *)&v5 + 1) = v15[2];
    v432 = v15[1];
    sub_1416C49D0(v386, v432, *((_QWORD *)&v5 + 1));
    if ( *(_DWORD *)v386 == 2 )
    {
      if ( (v386[8] & 3u) - 2 >= 2 && (v386[8] & 3) != 0 )
      {
        --*(_QWORD *)&v386[8];
        v386[0] = 3;
        sub_1416EBAD0(&v386[8]);
      }
      goto LABEL_23;
    }
    sub_1409016A0(v386, v432, *((_QWORD *)&v5 + 1), 32769);
    if ( BYTE8(v388) == 0xFF )
    {
      v429 = *(_OWORD *)&v386[48];
      *(_OWORD *)&v428[32] = *(_OWORD *)&v386[32];
      *(_OWORD *)&v428[16] = *(_OWORD *)&v386[16];
      *(_OWORD *)v428 = *(_OWORD *)v386;
      sub_1416DA570(&v376);
      v421 = *((_QWORD *)&v376 + 1);
      sub_14072B5B0((unsigned int)&v416, DWORD2(v376), v377, v414, v384);
      if ( (__int64)v376 > 0 )
        sub_140001660(v421, v376, 1);
      *(_QWORD *)&v376 = &v416;
      *((_QWORD *)&v376 + 1) = sub_1400015F0;
      *(_QWORD *)&v377 = v428;
      *((_QWORD *)&v377 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v324, &unk_141A5C97C, &v376);
      if ( (_QWORD)v416 )
        sub_140001660(*((_QWORD *)&v416 + 1), v416, 1);
      v21 = *((_QWORD *)&v410 + 1);
      if ( *((_QWORD *)&v410 + 1) == v409.m256i_i64[3] )
        sub_141939F90(&v409.m256i_u64[3]);
      v16 = v410;
      v17 = 3 * v21;
      *(_QWORD *)(v410 + 8 * v17 + 16) = v325;
      *(_OWORD *)(v16 + 8 * v17) = v324;
      *((_QWORD *)&v410 + 1) = v21 + 1;
      sub_140904700(v428);
      goto LABEL_23;
    }
    v430 = *((_QWORD *)&v5 + 1);
    v408 = v388;
    v407 = v387;
    v406 = *(_OWORD *)&v386[64];
    v405 = *(_OWORD *)&v386[48];
    v404 = *(_OWORD *)&v386[32];
    v403 = *(__m256i *)v386;
    sub_141431450(v386, &v403, 0, 500000000);
    if ( *(_QWORD *)v386 != -1 )
      sub_140904700(v386);
    v374 = aThreads_5;
    v375 = 7;
    v348 = &v374;
    v349 = sub_140191200;
    sub_1416DAFA0(&v398, &unk_141A5C41E, &v348);
    v420 = *((_QWORD *)&v398 + 1);
    sub_140930990(v386, &v403, *((_QWORD *)&v398 + 1), v399);
    v19 = *(_QWORD *)&v386[8];
    *((_QWORD *)&v5 + 1) = *(_QWORD *)&v386[32];
    v376 = *(_OWORD *)&v386[40];
    v377 = *(_OWORD *)&v386[56];
    if ( *(_DWORD *)v386 == 1 )
    {
      v421 = *(_QWORD *)&v386[24];
      v20 = *(_QWORD *)&v386[16];
      v417 = v377;
      v416 = v376;
      if ( (_QWORD)v398 )
        sub_140001660(v420, v398, 1);
      if ( v19 != -1 )
        goto LABEL_48;
    }
    else
    {
      *(_QWORD *)v428 = *(_QWORD *)&v386[8];
      *(_OWORD *)&v428[8] = *(_OWORD *)&v386[16];
      *(_QWORD *)&v428[24] = *(_QWORD *)&v386[32];
      v429 = v377;
      *(_OWORD *)&v428[32] = v376;
      if ( (_QWORD)v398 )
        sub_140001660(v420, v398, 1);
      v22 = sub_1417D8600(*((_QWORD *)&v429 + 1));
      if ( v22 )
      {
        v421 = v22;
        sub_140904890(v428);
        v19 = 0x8000000000000013uLL;
        *((_QWORD *)&v5 + 1) = v3;
        v20 = 0;
LABEL_48:
        *(_QWORD *)v386 = v19;
        *(_QWORD *)&v386[8] = v20;
        *(_QWORD *)&v386[16] = v421;
        *(_QWORD *)&v386[24] = *((_QWORD *)&v5 + 1);
        *(_OWORD *)&v386[48] = v417;
        *(_OWORD *)&v386[32] = v416;
        *(_QWORD *)&v5 = v428;
        sub_1416DA570(v428);
        v421 = *(_QWORD *)&v428[8];
        sub_14072B5B0((unsigned int)&v376, *(_DWORD *)&v428[8], *(_DWORD *)&v428[16], v414, v384);
        if ( *(__int64 *)v428 > 0 )
          sub_140001660(v421, *(_QWORD *)v428, 1);
        *(_QWORD *)v428 = &v376;
        *(_QWORD *)&v428[8] = sub_1400015F0;
        *(_QWORD *)&v428[16] = v386;
        *(_QWORD *)&v428[24] = sub_14142D4D0;
        sub_1416DAFA0(&v322, &unk_141A5C960, v428);
        if ( (_QWORD)v376 )
          sub_140001660(*((_QWORD *)&v376 + 1), v376, 1);
        v23 = *((_QWORD *)&v410 + 1);
        if ( *((_QWORD *)&v410 + 1) == v409.m256i_i64[3] )
          sub_141939F90(&v409.m256i_u64[3]);
        v24 = v410;
        v25 = 3 * v23;
        *(_QWORD *)(v410 + 8 * v25 + 16) = v323;
        *(_OWORD *)(v24 + 8 * v25) = v322;
        *((_QWORD *)&v410 + 1) = v23 + 1;
        sub_140904700(v386);
        goto LABEL_55;
      }
      sub_1408653F0(v386, v428, 0);
      v421 = *(_QWORD *)&v386[8];
      v20 = *(_QWORD *)v386;
      *((_QWORD *)&v5 + 1) = *(_QWORD *)&v386[16];
      sub_140904890(v428);
    }
    v380 = *((_QWORD *)&v5 + 1);
    v420 = v20;
    if ( !v20 )
    {
LABEL_121:
      sub_1416DA570(v386);
      v430 = *(_QWORD *)&v386[8];
      sub_14072B5B0((unsigned int)v428, *(_DWORD *)&v386[8], *(_DWORD *)&v386[16], v414, v384);
      if ( *(__int64 *)v386 > 0 )
        sub_140001660(v430, *(_QWORD *)v386, 1);
      *(_QWORD *)v386 = v428;
      *(_QWORD *)&v386[8] = sub_1400015F0;
      sub_1416DAFA0(&v320, &unk_141A5C93D, v386);
      *(_QWORD *)&v5 = v420;
      *((_QWORD *)&v5 + 1) = v380;
      if ( *(_QWORD *)v428 )
        sub_140001660(*(_QWORD *)&v428[8], *(_QWORD *)v428, 1);
      v78 = *((_QWORD *)&v410 + 1);
      if ( *((_QWORD *)&v410 + 1) == v409.m256i_i64[3] )
        sub_141939F90(&v409.m256i_u64[3]);
      v79 = v410;
      v80 = 3 * v78;
      *(_QWORD *)(v410 + 8 * v80 + 16) = v321;
      *(_OWORD *)(v79 + 8 * v80) = v320;
      *((_QWORD *)&v410 + 1) = v78 + 1;
      if ( !(_QWORD)v5 )
        goto LABEL_128;
      goto LABEL_140;
    }
    v26 = v421;
    v27 = v420;
LABEL_59:
    v28 = v27 + 8;
    v415 = *(unsigned __int16 *)(v27 + 274);
    v29 = 3LL * (unsigned int)(8 * v415);
    v30 = -1;
    do
    {
      if ( !v29 )
      {
        v30 = v415;
LABEL_69:
        v35 = v26-- == 0;
        if ( v35 )
          goto LABEL_121;
        v27 = *(_QWORD *)(v27 + 8 * v30 + 280);
        goto LABEL_59;
      }
      *((_QWORD *)&v5 + 1) = v14;
      v31 = v28 + 24;
      v32 = *(_QWORD *)(v28 + 16);
      *(_QWORD *)&v5 = v32 - 14;
      if ( v32 >= 0xE )
        v32 = 14;
      *(_QWORD *)&v5 = -(__int64)v5;
      v33 = sub_141923B40(aModelProvider_0, *(_QWORD *)(v28 + 8), v32);
      if ( v33 )
        *(_QWORD *)&v5 = v33;
      v34 = ((__int64)v5 > 0) - ((__int64)v5 < 0);
      ++v30;
      v29 -= 24;
      v28 = v31;
      v14 = *((__int64 **)&v5 + 1);
    }
    while ( v34 == 1 );
    if ( v34 )
      goto LABEL_69;
    v36 = v421;
    v37 = v420;
    while ( 2 )
    {
      v38 = v37 + 8;
      v415 = *(unsigned __int16 *)(v37 + 274);
      v39 = 3LL * (unsigned int)(8 * v415);
      v40 = -1;
      do
      {
        if ( !v39 )
        {
          v40 = v415;
          goto LABEL_82;
        }
        v41 = v38 + 24;
        v42 = *(_QWORD *)(v38 + 16);
        v43 = v42 - 5;
        if ( v42 >= 5 )
          v42 = 5;
        v44 = -(__int64)v43;
        v45 = sub_141923B40(aModel_3, *(_QWORD *)(v38 + 8), v42);
        if ( v45 )
          v44 = v45;
        v46 = (v44 > 0) - (v44 < 0);
        ++v40;
        v39 -= 24;
        v38 = v41;
      }
      while ( v46 == 1 );
      if ( !v46 )
      {
        v47 = 19;
        v48 = (const char *)&unk_141A5C879;
        goto LABEL_85;
      }
LABEL_82:
      v35 = v36-- == 0;
      if ( !v35 )
      {
        v37 = *(_QWORD *)(v37 + 8 * v40 + 280);
        continue;
      }
      break;
    }
    v47 = 2;
    v48 = asc_141A5C88C;
LABEL_85:
    v315[0] = v48;
    v315[1] = v47;
    v49 = v421;
    v50 = v420;
    while ( 2 )
    {
      v51 = v50 + 8;
      v415 = *(unsigned __int16 *)(v50 + 274);
      v52 = 3LL * (unsigned int)(8 * v415);
      v53 = -1;
      do
      {
        if ( !v52 )
        {
          v53 = v415;
          goto LABEL_96;
        }
        v54 = v51 + 24;
        v55 = *(_QWORD *)(v51 + 16);
        v56 = v55 - 6;
        if ( v55 >= 6 )
          v55 = 6;
        v57 = -(__int64)v56;
        v58 = sub_141923B40(
                "sourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns",
                *(_QWORD *)(v51 + 8),
                v55);
        if ( v58 )
          v57 = v58;
        v59 = (v57 > 0) - (v57 < 0);
        ++v53;
        v52 -= 24;
        v51 = v54;
      }
      while ( v59 == 1 );
      if ( !v59 )
      {
        v60 = 20;
        v61 = (const char *)&unk_141A5C88E;
        v14 = *((__int64 **)&v5 + 1);
        goto LABEL_99;
      }
LABEL_96:
      v14 = *((__int64 **)&v5 + 1);
      v35 = v49-- == 0;
      if ( !v35 )
      {
        v50 = *(_QWORD *)(v50 + 8 * v53 + 280);
        continue;
      }
      break;
    }
    v60 = 2;
    v61 = asc_141A5C88C;
LABEL_99:
    v314[0] = v61;
    v314[1] = v60;
    v62 = v421;
    v63 = v420;
    while ( 2 )
    {
      v64 = v63 + 8;
      v415 = *(unsigned __int16 *)(v63 + 274);
      v65 = 3LL * (unsigned int)(8 * v415);
      v66 = -1;
      do
      {
        if ( !v65 )
        {
          v66 = v415;
          goto LABEL_110;
        }
        v67 = v64 + 24;
        v68 = *(_QWORD *)(v64 + 16);
        v69 = v68 - 8;
        if ( v68 >= 8 )
          v68 = 8;
        *(_QWORD *)&v5 = -(__int64)v69;
        v70 = sub_141923B40(aArchived_0, *(_QWORD *)(v64 + 8), v68);
        if ( v70 )
          *(_QWORD *)&v5 = v70;
        v71 = ((__int64)v5 > 0) - ((__int64)v5 < 0);
        ++v66;
        v65 -= 24;
        v64 = v67;
        v14 = *((__int64 **)&v5 + 1);
      }
      while ( v71 == 1 );
      if ( !v71 )
      {
        v72 = 31;
        v73 = (__int64)&unk_141A5C8A2;
        goto LABEL_113;
      }
LABEL_110:
      v35 = v62-- == 0;
      if ( !v35 )
      {
        v63 = *(_QWORD *)(v63 + 8 * v66 + 280);
        continue;
      }
      break;
    }
    v73 = 1;
    v72 = 0;
LABEL_113:
    v313[0] = v73;
    v313[1] = v72;
    *(_QWORD *)v386 = v315;
    *(_QWORD *)&v386[8] = sub_140191200;
    *(_QWORD *)&v386[16] = v314;
    *(_QWORD *)&v386[24] = sub_140191200;
    *(_QWORD *)&v386[32] = v313;
    *(_QWORD *)&v386[40] = sub_140191200;
    sub_1416DAFA0(v428, &unk_141A5C8C1, v386);
    v74 = v381;
    v372 = *(_QWORD *)&v428[8];
    v415 = *(_QWORD *)v428;
    sub_140930990(v386, &v403, *(_QWORD *)&v428[8], *(_QWORD *)&v428[16]);
    *(_QWORD *)&v5 = v420;
    if ( *(_DWORD *)v386 == 1 )
    {
      v429 = *(_OWORD *)&v386[56];
      *(_OWORD *)&v428[32] = *(_OWORD *)&v386[40];
      *(_OWORD *)&v428[16] = *(_OWORD *)&v386[24];
      *(_OWORD *)v428 = *(_OWORD *)&v386[8];
      sub_1416DA570(&v416);
      v430 = *((_QWORD *)&v416 + 1);
      sub_14072B5B0((unsigned int)&v398, DWORD2(v416), v417, v414, v384);
      if ( (__int64)v416 > 0 )
        sub_140001660(v430, v416, 1);
      *(_QWORD *)&v416 = &v398;
      *((_QWORD *)&v416 + 1) = sub_1400015F0;
      *(_QWORD *)&v417 = v428;
      *((_QWORD *)&v417 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v318, &unk_141A5C91A, &v416);
      if ( (_QWORD)v398 )
        sub_140001660(*((_QWORD *)&v398 + 1), v398, 1);
      v75 = *((_QWORD *)&v410 + 1);
      if ( *((_QWORD *)&v410 + 1) == v409.m256i_i64[3] )
        sub_141939F90(&v409.m256i_u64[3]);
      v76 = v410;
      v77 = 3 * v75;
      *(_QWORD *)(v410 + 8 * v77 + 16) = v319;
      *(_OWORD *)(v76 + 8 * v77) = v318;
      *((_QWORD *)&v410 + 1) = v75 + 1;
      sub_140904700(v428);
      goto LABEL_137;
    }
    v379 = *(_OWORD *)&v386[56];
    v378 = *(_OWORD *)&v386[40];
    v377 = *(_OWORD *)&v386[24];
    v376 = *(_OWORD *)&v386[8];
    v83 = sub_1417D8600(*(_QWORD *)&v386[64]);
    if ( !v83 )
    {
      v374 = (const char *)&v376;
      v375 = v83;
      while ( 1 )
      {
        while ( 1 )
        {
          sub_140A07DF0(v386, &v374);
          v88 = *(__int64 (__fastcall **)())v386;
          if ( *(_QWORD *)v386 == -1 )
          {
            if ( !v375 )
              goto LABEL_200;
            sub_140658620(v386, &v375, 0, &off_141A594C8);
            v74 = v381;
            v433 = *(_QWORD **)&v386[8];
            v88 = *(__int64 (__fastcall **)())v386;
            *(_QWORD *)&v5 = *(_QWORD *)&v386[24];
            v90 = *(_QWORD *)&v386[16];
            if ( *(_QWORD *)v386 == -1 )
            {
              v419 = *(_QWORD *)&v386[16];
              sub_140658620(v386, &v375, 1, &off_141A594E0);
              v430 = *(_QWORD *)&v386[8];
              v88 = *(__int64 (__fastcall **)())v386;
              v96 = *(_QWORD *)&v386[24];
              v385 = *(_QWORD *)&v386[16];
              if ( *(_QWORD *)v386 == -1 )
              {
                sub_140658620(v386, &v375, 2, &off_141A594F8);
                v91 = *(_QWORD **)&v386[8];
                v88 = *(__int64 (__fastcall **)())v386;
                v93 = *(_QWORD *)&v386[16];
                if ( *(_QWORD *)v386 == -1 )
                {
                  v92 = v96;
                  v95 = (__int64)v433;
                  v14 = *((__int64 **)&v5 + 1);
                  if ( v433 == (_QWORD *)-2LL )
                  {
LABEL_200:
                    sub_1409044F0(&v374);
                    *((_QWORD *)&v5 + 1) = v420;
                    sub_140904890(&v376);
                    if ( v415 )
                      sub_140001660(v372, v415, 1);
                    *(_QWORD *)&v386[16] = *((_QWORD *)&v5 + 1);
                    *(_QWORD *)&v386[24] = v421;
                    *(_QWORD *)&v386[48] = *((_QWORD *)&v5 + 1);
                    *(_QWORD *)&v386[56] = v421;
                    *(_OWORD *)v386 = 1u;
                    *(_OWORD *)&v386[32] = 1u;
                    v3 = v380;
                    *(_QWORD *)&v386[64] = v380;
                    sub_140A6FD50(v428, v386);
                    while ( *(_QWORD *)v428 )
                    {
                      v116 = *(_QWORD *)(*(_QWORD *)v428 + 24LL * *(_QWORD *)&v428[16] + 8);
                      if ( v116 )
                        sub_140001660(*(_QWORD *)(*(_QWORD *)v428 + 24LL * *(_QWORD *)&v428[16] + 16), v116, 1);
                      sub_140A6FD50(v428, v386);
                    }
                    sub_140903740(&v403);
                    v18 = v400;
                    if ( v400 )
LABEL_208:
                      sub_140001660(v432, v18, 1);
                    goto LABEL_21;
                  }
                  v88 = (__int64 (__fastcall *)())v419;
                  v89 = (_QWORD *)v5;
                  v90 = v430;
                  *(_QWORD *)&v5 = v385;
                  v94 = *(_QWORD *)&v386[24];
                  v74 = v381;
                }
                else
                {
                  v338 = *(_QWORD **)&v386[8];
                  v402 = *(_QWORD *)&v386[24];
                  v382 = *(_QWORD *)&v386[16];
                  v91 = *(_QWORD **)&v386[40];
                  v92 = *(_QWORD *)&v386[32];
                  v94 = *(_QWORD *)&v386[56];
                  v93 = *(_QWORD *)&v386[48];
                  if ( v430 )
                  {
                    v99 = *(_QWORD *)&v386[48];
                    v100 = *(_QWORD **)&v386[40];
                    v101 = *(_QWORD *)&v386[32];
                    sub_140001660(v385, v430, 1);
                    v92 = v101;
                    v93 = v99;
                    v91 = v100;
                  }
                  v95 = -1;
                  if ( v433 )
                  {
                    v102 = v93;
                    v103 = v91;
                    v104 = v92;
                    sub_140001660(v419, v433, 1);
                    v92 = v104;
                    v93 = v102;
                    v91 = v103;
                    v95 = -1;
                  }
                  v89 = v338;
                  v90 = v382;
                  *(_QWORD *)&v5 = v402;
                  v74 = v381;
                }
              }
              else
              {
                v402 = *(_QWORD *)&v386[24];
                v91 = *(_QWORD **)&v386[40];
                v92 = *(_QWORD *)&v386[32];
                v94 = *(_QWORD *)&v386[56];
                v93 = *(_QWORD *)&v386[48];
                v95 = -1;
                v97 = v433;
                if ( v433 )
                {
                  v382 = *(_QWORD *)&v386[48];
                  v433 = *(_QWORD **)&v386[40];
                  v98 = *(_QWORD *)&v386[32];
                  sub_140001660(v419, v97, 1);
                  v92 = v98;
                  v93 = v382;
                  v91 = v433;
                  v95 = -1;
                }
                v89 = (_QWORD *)v430;
                v90 = v385;
                *(_QWORD *)&v5 = v402;
              }
            }
            else
            {
              v91 = *(_QWORD **)&v386[40];
              v92 = *(_QWORD *)&v386[32];
              v94 = *(_QWORD *)&v386[56];
              v93 = *(_QWORD *)&v386[48];
              v95 = -1;
              v89 = v433;
            }
          }
          else
          {
            v89 = *(_QWORD **)&v386[8];
            *(_QWORD *)&v5 = *(_QWORD *)&v386[24];
            v90 = *(_QWORD *)&v386[16];
            v91 = *(_QWORD **)&v386[40];
            v92 = *(_QWORD *)&v386[32];
            v94 = *(_QWORD *)&v386[56];
            v93 = *(_QWORD *)&v386[48];
            v95 = -1;
          }
          *(_QWORD *)v386 = v95;
          *(_QWORD *)&v386[8] = v88;
          *(_QWORD *)&v386[16] = v89;
          *(_QWORD *)&v386[24] = v90;
          *(_QWORD *)&v386[32] = v5;
          *(_QWORD *)&v386[40] = v92;
          *(_QWORD *)&v386[48] = v91;
          *(_QWORD *)&v386[56] = v93;
          *(_QWORD *)&v386[64] = v94;
          if ( v95 != -1 )
            break;
          sub_140904700(&v386[8]);
          v14 = *((__int64 **)&v5 + 1);
        }
        v402 = v92;
        v433 = v91;
        v430 = v5;
        v419 = v90;
        v385 = v95;
        v348 = (const char **)v95;
        v349 = v88;
        v350 = v89;
        v382 = v93;
        if ( (unsigned __int8)sub_140A09D60(aSubagent_1, 10, v93, v94) )
        {
          v14 = *((__int64 **)&v5 + 1);
          *(_QWORD *)&v5 = v419;
          goto LABEL_181;
        }
        v105 = sub_1408FEA60(v430, v402);
        if ( v106 < 0 )
        {
          v312 = 0;
          goto LABEL_479;
        }
        v108 = v106;
        v402 = v106;
        if ( v106 )
        {
          v109 = v105;
          nullsub_1(v107, v106);
          v110 = sub_140001650(v108, 1);
          if ( !v110 )
          {
            v383 = v108;
            v312 = 1;
LABEL_479:
            sub_14196B2DB(v312, v383);
          }
          v111 = v110;
          sub_1419234B0(v110, v109, v108);
          *(_QWORD *)&v398 = v108;
          *((_QWORD *)&v398 + 1) = v111;
          v399 = v108;
          v383 = v111;
          v373 = v111;
          sub_1416DB410(&v416, &v398);
        }
        else
        {
          *(_QWORD *)&v398 = 0;
          *((_QWORD *)&v398 + 1) = 1;
          v399 = 0;
          nullsub_1(v107, 0);
          v112 = (_DWORD *)sub_140001650(7, 1);
          if ( !v112 )
          {
            v373 = 1;
            sub_14196B2DB(1, 7);
          }
          *(_DWORD *)((char *)v112 + 3) = 1048147056;
          *v112 = 1886217532;
          *(_QWORD *)&v416 = 7;
          *((_QWORD *)&v416 + 1) = v112;
          *(_QWORD *)&v417 = 7;
          v383 = 1;
        }
        v440 = 1;
        sub_1416DB410(v386, &v348);
        v14 = *((__int64 **)&v5 + 1);
        *(_QWORD *)&v428[40] = v417;
        *(_OWORD *)&v428[24] = v416;
        *(_OWORD *)v428 = *(_OWORD *)v386;
        *(_QWORD *)&v428[16] = *(_QWORD *)&v386[16];
        v440 = 0;
        sub_140A6EFC0(v386, &v332, v428);
        v440 = 0;
        v113 = (_QWORD *)sub_140A53DC0(v386);
        ++*v113;
        *(_QWORD *)&v5 = v419;
        v114 = v402;
        if ( v350 != (_QWORD *)6 || *(_DWORD *)v349 ^ 0x616D6961 | *((unsigned __int16 *)v349 + 2) ^ 0x3169 )
          break;
        *(_QWORD *)&v411 = v411 + 1;
        if ( v402 && sub_140A13140(&v365, &v398) )
          goto LABEL_180;
        if ( (v74 & 1) == 0 )
        {
          v440 = 0;
          v115 = sub_1407FBA00(v383, v114);
          *(_QWORD *)&v5 = v419;
          v114 = v402;
          if ( v115 )
            break;
        }
        ++*((_QWORD *)&v411 + 1);
        if ( v114 )
        {
          if ( sub_140A122E0((char *)&v366 + 8, &v398) )
          {
            ++*((_QWORD *)&v412 + 1);
LABEL_180:
            sub_140001660(v383, v114, 1);
            goto LABEL_181;
          }
        }
        else
        {
          *(_QWORD *)&v412 = v412 + 1;
        }
        if ( v331 == -1 )
          ++*((_QWORD *)&v413 + 1);
        else
          *(_QWORD *)&v413 = v413 + 1;
        v74 = v381;
        v14 = *((__int64 **)&v5 + 1);
        *(_QWORD *)&v5 = v419;
        if ( v114 )
          goto LABEL_180;
LABEL_181:
        if ( v433 )
          sub_140001660(v382, v433, 1);
        if ( (_QWORD)v5 )
          sub_140001660(v430, v5, 1);
        if ( v385 )
          sub_140001660(v349, v385, 1);
      }
      if ( !v114 )
        goto LABEL_181;
      goto LABEL_180;
    }
    *(_OWORD *)v386 = 0x8000000000000013uLL;
    *(_QWORD *)&v386[16] = v83;
    sub_1416DA570(v428);
    v430 = *(_QWORD *)&v428[8];
    sub_14072B5B0((unsigned int)&v416, *(_DWORD *)&v428[8], *(_DWORD *)&v428[16], v414, v384);
    if ( *(__int64 *)v428 > 0 )
      sub_140001660(v430, *(_QWORD *)v428, 1);
    *(_QWORD *)v428 = &v416;
    *(_QWORD *)&v428[8] = sub_1400015F0;
    *(_QWORD *)&v428[16] = v386;
    *(_QWORD *)&v428[24] = sub_14142D4D0;
    sub_1416DAFA0(&v316, &unk_141A5C8F9, v428);
    if ( (_QWORD)v416 )
      sub_140001660(*((_QWORD *)&v416 + 1), v416, 1);
    v84 = *((_QWORD *)&v410 + 1);
    if ( *((_QWORD *)&v410 + 1) == v409.m256i_i64[3] )
      sub_141939F90(&v409.m256i_u64[3]);
    v85 = v410;
    v86 = 3 * v84;
    *(_QWORD *)(v410 + 8 * v86 + 16) = v317;
    *(_OWORD *)(v85 + 8 * v86) = v316;
    *((_QWORD *)&v410 + 1) = v84 + 1;
    sub_140904700(v386);
    sub_140904890(&v376);
LABEL_137:
    if ( v415 )
      sub_140001660(v372, v415, 1);
    *((_QWORD *)&v5 + 1) = v380;
    if ( !(_QWORD)v5 )
    {
LABEL_128:
      v81 = 0;
      v82 = 0;
      goto LABEL_141;
    }
LABEL_140:
    *(_QWORD *)&v386[8] = 0;
    *(_QWORD *)&v386[16] = v5;
    *(_QWORD *)&v386[24] = v421;
    *(_QWORD *)&v386[40] = 0;
    *(_QWORD *)&v386[48] = v5;
    *(_QWORD *)&v386[56] = v421;
    v81 = 1;
    v82 = *((_QWORD *)&v5 + 1);
LABEL_141:
    *(_QWORD *)v386 = v81;
    *(_QWORD *)&v386[32] = v81;
    *(_QWORD *)&v386[64] = v82;
    sub_140A6FD50(v428, v386);
    while ( *(_QWORD *)v428 )
    {
      v87 = *(_QWORD *)(*(_QWORD *)v428 + 24LL * *(_QWORD *)&v428[16] + 8);
      if ( v87 )
        sub_140001660(*(_QWORD *)(*(_QWORD *)v428 + 24LL * *(_QWORD *)&v428[16] + 16), v87, 1);
      sub_140A6FD50(v428, v386);
    }
LABEL_55:
    sub_140903740(&v403);
    v3 = *((_QWORD *)&v5 + 1);
LABEL_23:
    v419 -= 32LL;
    v433 += 4;
    v15 = v14;
    v18 = v400;
    if ( v400 )
      goto LABEL_208;
  }
  if ( (_QWORD)v329 )
    sub_140001660(*((_QWORD *)&v329 + 1), 32 * v329, 8);
  v119 = v332;
  if ( (_QWORD)v332 )
    v119 = v333;
  *(_OWORD *)v386 = (_QWORD)v332 != 0;
  *(_OWORD *)&v386[16] = v332;
  *(_OWORD *)&v386[32] = *(_OWORD *)v386;
  *(_OWORD *)&v386[48] = v332;
  *(_QWORD *)&v386[64] = v119;
  v441 = 0;
  sub_140228000(&v403, v386);
  v432 = v409.m256i_i64[2];
  v121 = v409.m256i_i64[1];
  v433 = nullptr;
  v400 = v409.m256i_i64[1];
  while ( (_QWORD *)v432 != v433 )
  {
    v433 = (_QWORD *)((char *)v433 + 1);
    *((_QWORD *)&v5 + 1) = v121 + 32;
    sub_1401AB4D0(v121, v120);
    v121 = *((_QWORD *)&v5 + 1);
  }
  v122 = v409.m256i_i64[0];
  if ( v409.m256i_i64[0] )
    sub_140001660(v409.m256i_i64[1], 32 * v409.m256i_i64[0], 8);
  v409.m256i_i64[2] = v403.m256i_i64[2];
  *(_OWORD *)v386 = *(_OWORD *)v403.m256i_i8;
  *(_OWORD *)&v386[32] = v410;
  *(_OWORD *)&v386[48] = v411;
  *(_OWORD *)&v386[64] = v412;
  v387 = v413;
  *(_OWORD *)&v386[16] = __PAIR128__(v409.m256i_u64[3], v403.m256i_u64[2]);
  *(_QWORD *)&v398 = 0;
  v399 = 0;
  nullsub_1(v121, v122);
  v123 = (_DWORD *)sub_140001650(7, 1);
  if ( !v123 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v123 + 3) = 1735355489;
  *v123 = 1635017059;
  *(_QWORD *)&v416 = 7;
  *((_QWORD *)&v416 + 1) = v123;
  *(_QWORD *)&v417 = 7;
  *(_QWORD *)&v376 = 0;
  *(_QWORD *)&v377 = 0;
  nullsub_1(v125, v124);
  v126 = sub_140001650(6, 1);
  if ( !v126 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v126 + 4) = 29556;
  *(_DWORD *)v126 = 1936291941;
  *(_QWORD *)v428 = 6;
  *(_QWORD *)&v428[8] = v126;
  *(_QWORD *)&v428[16] = 6;
  v403.m256i_i8[0] = 1;
  v403.m256i_i8[1] = v368;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v128, v127);
  v129 = sub_140001650(5, 1);
  if ( !v129 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v129 + 4) = 115;
  *(_DWORD *)v129 = 1702132066;
  *(_QWORD *)v428 = 5;
  *(_QWORD *)&v428[8] = v129;
  *(_QWORD *)&v428[16] = 5;
  v403.m256i_i8[0] = 2 * v351;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v352;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v131, v130);
  v132 = (_DWORD *)sub_140001650(7, 1);
  if ( !v132 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v132 + 3) = 1800365427;
  *v132 = 1936875888;
  *(_QWORD *)v428 = 7;
  *(_QWORD *)&v428[8] = v132;
  *(_QWORD *)&v428[16] = 7;
  v403.m256i_i8[0] = 1;
  v403.m256i_i8[1] = HIBYTE(v368);
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v134, v133);
  v135 = sub_140001650(9, 1);
  if ( !v135 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v135 = 0x6F72724564616572LL;
  *(_BYTE *)(v135 + 8) = 114;
  *(_QWORD *)v428 = 9;
  *(_QWORD *)&v428[8] = v135;
  *(_QWORD *)&v428[16] = 9;
  if ( (_QWORD)v358 == -1 )
  {
    v139 = 0;
  }
  else
  {
    *((_QWORD *)&v5 + 1) = v359;
    if ( v359 < 0 )
    {
      v138 = 0;
      goto LABEL_237;
    }
    v139 = 3;
    if ( v359 )
    {
      v140 = *((_QWORD *)&v358 + 1);
      nullsub_1(v137, v136);
      v138 = 1;
      v141 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v141 )
      {
LABEL_237:
        v427 = 1;
        sub_14196B2DB(v138, *((_QWORD *)&v5 + 1));
      }
      *(_QWORD *)&v5 = v141;
      sub_1419234B0(v141, v140, *((_QWORD *)&v5 + 1));
    }
    else
    {
      v5 = 1u;
    }
  }
  v403.m256i_i8[0] = v139;
  v403.m256i_i64[1] = *((_QWORD *)&v5 + 1);
  *(_OWORD *)&v403.m256i_u64[2] = v5;
  v427 = 0;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v143, v142);
  v144 = (void *)sub_140001650(10, 1);
  if ( !v144 )
    sub_14196B2DB(1, 10);
  qmemcpy(v144, "parseError", 10);
  *(_QWORD *)v428 = 10;
  *(_QWORD *)&v428[8] = v144;
  *(_QWORD *)&v428[16] = 10;
  if ( (_QWORD)v360 == -1 )
  {
    v147 = 0;
  }
  else
  {
    *((_QWORD *)&v5 + 1) = v361;
    if ( v361 < 0 )
    {
      v146 = 0;
      goto LABEL_255;
    }
    v147 = 3;
    if ( v361 )
    {
      v148 = *((_QWORD *)&v360 + 1);
      nullsub_1(0x7272456573726170LL, v145);
      v146 = 1;
      v149 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v149 )
      {
LABEL_255:
        v426 = 1;
        sub_14196B2DB(v146, *((_QWORD *)&v5 + 1));
      }
      *(_QWORD *)&v5 = v149;
      sub_1419234B0(v149, v148, *((_QWORD *)&v5 + 1));
    }
    else
    {
      v5 = 1u;
    }
  }
  v403.m256i_i8[0] = v147;
  v403.m256i_i64[1] = *((_QWORD *)&v5 + 1);
  *(_OWORD *)&v403.m256i_u64[2] = v5;
  v426 = 0;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v211, v210);
  v212 = (void *)sub_140001650(10, 1);
  if ( !v212 )
    sub_14196B2DB(1, 10);
  qmemcpy(v212, "modelCount", 10);
  *(_QWORD *)v428 = 10;
  *(_QWORD *)&v428[8] = v212;
  *(_QWORD *)&v428[16] = 10;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v355;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v214, v213);
  v215 = (void *)sub_140001650(15, 1);
  if ( !v215 )
    sub_14196B2DB(1, 15);
  *((_QWORD *)&v5 + 1) = 0x646F4D79616C6572LL;
  qmemcpy(v215, "relayModelCount", 15);
  *(_QWORD *)v428 = 15;
  *(_QWORD *)&v428[8] = v215;
  *(_QWORD *)&v428[16] = 15;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v357;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v217, v216);
  v218 = (void *)sub_140001650(10, 1);
  if ( !v218 )
    sub_14196B2DB(1, 10);
  qmemcpy(v218, "modelSlugs", 10);
  *(_QWORD *)v428 = 10;
  *(_QWORD *)&v428[8] = v218;
  *(_QWORD *)&v428[16] = 10;
  v439 = 1;
  sub_1407B3FB0(&v403, &v353);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v439 = 0;
  sub_140A68320(&v403, &v376, v428, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  nullsub_1(v220, v219);
  v221 = (void *)sub_140001650(15, 1);
  if ( !v221 )
    sub_14196B2DB(1, 15);
  qmemcpy(v221, "relayModelSlugs", 15);
  *(_QWORD *)v428 = 15;
  *(_QWORD *)&v428[8] = v221;
  *(_QWORD *)&v428[16] = 15;
  v438 = 1;
  sub_1407B3FB0(&v403, (char *)&v355 + 8);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v438 = 0;
  sub_140A68320(&v403, &v376, v428, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  nullsub_1(v223, v222);
  v224 = (void *)sub_140001650(17, 1);
  if ( !v224 )
    sub_14196B2DB(1, 17);
  qmemcpy(v224, "defaultRelayModel", 17);
  *(_QWORD *)v428 = 17;
  *(_QWORD *)&v428[8] = v224;
  *(_QWORD *)&v428[16] = 17;
  if ( v362 == -1 )
  {
    v228 = 0;
  }
  else
  {
    *((_QWORD *)&v5 + 1) = v364;
    if ( v364 < 0 )
    {
      v227 = 0;
      goto LABEL_353;
    }
    v228 = 3;
    if ( v364 )
    {
      v229 = v363;
      nullsub_1(v226, v225);
      v227 = 1;
      v230 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v230 )
      {
LABEL_353:
        v425 = 1;
        sub_14196B2DB(v227, *((_QWORD *)&v5 + 1));
      }
      *(_QWORD *)&v5 = v230;
      sub_1419234B0(v230, v229, *((_QWORD *)&v5 + 1));
    }
    else
    {
      v5 = 1u;
    }
  }
  v403.m256i_i8[0] = v228;
  v403.m256i_i64[1] = *((_QWORD *)&v5 + 1);
  *(_OWORD *)&v403.m256i_u64[2] = v5;
  v425 = 0;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  *(_OWORD *)&v403.m256i_u64[1] = v376;
  v403.m256i_i64[3] = v377;
  v403.m256i_i8[0] = 5;
  v424 = 0;
  sub_140A68320(&v409, &v398, &v416, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v232, v231);
  v233 = (void *)sub_140001650(28, 1);
  if ( !v233 )
    sub_14196B2DB(1, 28);
  qmemcpy(v233, "routerModelCatalogInspection", 28);
  v334 = 28;
  v335 = v233;
  v336 = 28;
  *(_QWORD *)&v416 = 0;
  *(_QWORD *)&v417 = 0;
  nullsub_1(v235, v234);
  v236 = sub_140001650(5, 1);
  if ( !v236 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v236 + 4) = 110;
  *(_DWORD *)v236 = 1634036835;
  *(_QWORD *)v428 = 5;
  *(_QWORD *)&v428[8] = v236;
  *(_QWORD *)&v428[16] = 5;
  v237 = v340;
  v238 = v346;
  v403.m256i_i8[0] = 1;
  v403.m256i_i8[1] = (v340 | v346) == 0;
  sub_140A68320(&v409, &v416, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v240, v239);
  v241 = (_DWORD *)sub_140001650(7, 1);
  if ( !v241 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v241 + 3) = 1684369006;
  *v241 = 1851876211;
  *(_QWORD *)v428 = 7;
  *(_QWORD *)&v428[8] = v241;
  *(_QWORD *)&v428[16] = 7;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v344;
  sub_140A68320(&v409, &v416, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v243, v242);
  v244 = sub_140001650(5, 1);
  if ( !v244 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v244 + 4) = 100;
  *(_DWORD *)v244 = 1768710518;
  *(_QWORD *)v428 = 5;
  *(_QWORD *)&v428[8] = v244;
  *(_QWORD *)&v428[16] = 5;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v345;
  sub_140A68320(&v409, &v416, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v246, v245);
  v247 = (_DWORD *)sub_140001650(7, 1);
  if ( !v247 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v247 + 3) = 1684630625;
  *v247 = 1635151465;
  *(_QWORD *)v428 = 7;
  *(_QWORD *)&v428[8] = v247;
  *(_QWORD *)&v428[16] = 7;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v238;
  sub_140A68320(&v409, &v416, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v249, v248);
  v250 = (void *)sub_140001650(12, 1);
  if ( !v250 )
    sub_14196B2DB(1, 12);
  qmemcpy(v250, "missingModel", 12);
  *(_QWORD *)v428 = 12;
  *(_QWORD *)&v428[8] = v250;
  *(_QWORD *)&v428[16] = 12;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v347;
  sub_140A68320(&v409, &v416, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v252, v251);
  v253 = (void *)sub_140001650(10, 1);
  if ( !v253 )
    sub_14196B2DB(1, 10);
  qmemcpy(v253, "readErrors", 10);
  *(_QWORD *)&v376 = 10;
  v433 = v253;
  *((_QWORD *)&v376 + 1) = v253;
  *(_QWORD *)&v377 = 10;
  v254 = *((_QWORD *)&v339 + 1);
  v403.m256i_i64[0] = *((_QWORD *)&v339 + 1);
  v403.m256i_i64[1] = *((_QWORD *)&v339 + 1) + 24 * v237;
  v403.m256i_i64[2] = v370;
  sub_140226750(v428, &v403);
  v437 = 1;
  sub_1407B3FB0(&v403, v428);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v437 = 0;
  sub_140A68320(&v403, &v416, &v376, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  v257 = *(_QWORD *)&v428[16];
  if ( *(_QWORD *)&v428[16] )
  {
    v258 = (_QWORD *)(*(_QWORD *)&v428[8] + 8LL);
    do
    {
      v255 = *(v258 - 1);
      if ( v255 )
        sub_140001660(*v258, v255, 1);
      v258 += 3;
      --v257;
    }
    while ( v257 );
  }
  if ( *(_QWORD *)v428 )
    sub_140001660(*(_QWORD *)&v428[8], 24LL * *(_QWORD *)v428, 8);
  nullsub_1(v256, v255);
  v259 = (_QWORD *)sub_140001650(8, 1);
  if ( !v259 )
    sub_14196B2DB(1, 8);
  *v259 = 0x73656C706D617865LL;
  *(_QWORD *)&v376 = 8;
  v433 = v259;
  *((_QWORD *)&v376 + 1) = v259;
  *(_QWORD *)&v377 = 8;
  v260 = v342;
  v261 = v343;
  v403.m256i_i64[0] = v342;
  v403.m256i_i64[1] = v342 + 24 * v343;
  v403.m256i_i64[2] = v370;
  sub_140226750(v428, &v403);
  v436 = 1;
  sub_1407B3FB0(&v403, v428);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v436 = 0;
  sub_140A68320(&v403, &v416, &v376, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  v262 = *(_QWORD *)&v428[16];
  if ( *(_QWORD *)&v428[16] )
  {
    v263 = (_QWORD *)(*(_QWORD *)&v428[8] + 8LL);
    do
    {
      v264 = *(v263 - 1);
      if ( v264 )
        sub_140001660(*v263, v264, 1);
      v263 += 3;
      --v262;
    }
    while ( v262 );
  }
  if ( *(_QWORD *)v428 )
    sub_140001660(*(_QWORD *)&v428[8], 24LL * *(_QWORD *)v428, 8);
  *(_OWORD *)&v403.m256i_u64[1] = v416;
  v403.m256i_i64[3] = v417;
  v403.m256i_i8[0] = 5;
  v423 = 0;
  sub_140A68320(&v409, &v398, &v334, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v266, v265);
  v267 = (void *)sub_140001650(41, 1);
  if ( !v267 )
    sub_14196B2DB(1, 41);
  qmemcpy(v267, "activeMainThreadProviderModelDistribution", 41);
  *(_QWORD *)v428 = 41;
  *(_QWORD *)&v428[8] = v267;
  *(_QWORD *)&v428[16] = 41;
  v435 = 1;
  sub_1407B3D00(&v403, v386);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v435 = 0;
  sub_140A68320(&v403, &v398, v428, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  nullsub_1(v269, v268);
  v270 = (void *)sub_140001650(20, 1);
  if ( !v270 )
    sub_14196B2DB(1, 20);
  qmemcpy(v270, "routerModelRemapPlan", 20);
  *(_QWORD *)&v416 = 20;
  *((_QWORD *)&v416 + 1) = v270;
  *(_QWORD *)&v417 = 20;
  *(_QWORD *)&v376 = 0;
  *(_QWORD *)&v377 = 0;
  nullsub_1(v272, v271);
  v273 = (void *)sub_140001650(13, 1);
  if ( !v273 )
    sub_14196B2DB(1, 13);
  qmemcpy(v273, "routerThreads", 13);
  *(_QWORD *)v428 = 13;
  *(_QWORD *)&v428[8] = v273;
  *(_QWORD *)&v428[16] = 13;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = *(_QWORD *)&v386[48];
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v275, v274);
  v276 = (void *)sub_140001650(19, 1);
  if ( !v276 )
    sub_14196B2DB(1, 19);
  qmemcpy(v276, "invalidModelThreads", 19);
  *(_QWORD *)v428 = 19;
  *(_QWORD *)&v428[8] = v276;
  *(_QWORD *)&v428[16] = 19;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = *(_QWORD *)&v386[56];
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v278, v277);
  v279 = (void *)sub_140001650(19, 1);
  if ( !v279 )
    sub_14196B2DB(1, 19);
  qmemcpy(v279, "missingModelThreads", 19);
  *(_QWORD *)v428 = 19;
  *(_QWORD *)&v428[8] = v279;
  *(_QWORD *)&v428[16] = 19;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = *(_QWORD *)&v386[64];
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v281, v280);
  v282 = (void *)sub_140001650(23, 1);
  if ( !v282 )
    sub_14196B2DB(1, 23);
  qmemcpy(v282, "autoMappableByBareModel", 23);
  *(_QWORD *)v428 = 23;
  *(_QWORD *)&v428[8] = v282;
  *(_QWORD *)&v428[16] = 23;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = *(_QWORD *)&v386[72];
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v284, v283);
  v285 = (void *)sub_140001650(12, 1);
  if ( !v285 )
    sub_14196B2DB(1, 12);
  qmemcpy(v285, "fallbackOnly", 12);
  *(_QWORD *)v428 = 12;
  *(_QWORD *)&v428[8] = v285;
  *(_QWORD *)&v428[16] = 12;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = v387;
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v287, v286);
  v288 = (void *)sub_140001650(10, 1);
  if ( !v288 )
    sub_14196B2DB(1, 10);
  qmemcpy(v288, "unresolved", 10);
  *(_QWORD *)v428 = 10;
  *(_QWORD *)&v428[8] = v288;
  *(_QWORD *)&v428[16] = 10;
  v403.m256i_i8[0] = 2;
  v403.m256i_i64[1] = 0;
  v403.m256i_i64[2] = *((_QWORD *)&v387 + 1);
  sub_140A68320(&v409, &v376, v428, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  *(_OWORD *)&v403.m256i_u64[1] = v376;
  v403.m256i_i64[3] = v377;
  v403.m256i_i8[0] = 5;
  v422 = 0;
  sub_140A68320(&v409, &v398, &v416, &v403);
  if ( v409.m256i_i8[0] != -1 )
    sub_140032FF0(&v409);
  nullsub_1(v290, v289);
  v291 = (void *)sub_140001650(10, 1);
  if ( !v291 )
    sub_14196B2DB(1, 10);
  qmemcpy(v291, "readErrors", 10);
  *(_QWORD *)v428 = 10;
  *(_QWORD *)&v428[8] = v291;
  *(_QWORD *)&v428[16] = 10;
  v434 = 1;
  sub_1407B3FB0(&v403, &v386[24]);
  if ( v403.m256i_i8[0] == -1 )
  {
    v409.m256i_i64[0] = v403.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v409,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C4A8);
  }
  v409 = v403;
  v434 = 0;
  sub_140A68320(&v403, &v398, v428, &v409);
  if ( v403.m256i_i8[0] != -1 )
    sub_140032FF0(&v403);
  v293 = v330;
  *(_QWORD *)(v330 + 24) = v399;
  result = *(double *)&v398;
  *(_OWORD *)(v293 + 8) = v398;
  *(_BYTE *)v293 = 5;
  v295 = *(_QWORD *)&v386[8];
  v432 = *(_QWORD *)&v386[16];
  v433 = nullptr;
  v400 = *(_QWORD *)&v386[8];
  while ( (_QWORD *)v432 != v433 )
  {
    v433 = (_QWORD *)((char *)v433 + 1);
    v296 = v295 + 32;
    sub_1401AB4D0(v295, v292);
    v295 = v296;
  }
  if ( *(_QWORD *)v386 )
    result = sub_140001660(*(_QWORD *)&v386[8], 32LL * *(_QWORD *)v386, 8);
  v297 = *(_QWORD *)&v386[40];
  if ( *(_QWORD *)&v386[40] )
  {
    v298 = (_QWORD *)(*(_QWORD *)&v386[32] + 8LL);
    do
    {
      v299 = *(v298 - 1);
      if ( v299 )
        result = sub_140001660(*v298, v299, 1);
      v298 += 3;
      --v297;
    }
    while ( v297 );
  }
  if ( *(_QWORD *)&v386[24] )
    result = sub_140001660(*(_QWORD *)&v386[32], 24LL * *(_QWORD *)&v386[24], 8);
  if ( v237 )
  {
    v300 = (_QWORD *)(v254 + 8);
    do
    {
      v301 = *(v300 - 1);
      if ( v301 )
        result = sub_140001660(*v300, v301, 1);
      v300 += 3;
      --v237;
    }
    while ( v237 );
  }
  if ( (_QWORD)v339 )
    result = sub_140001660(v254, 24 * v339, 8);
  if ( v261 )
  {
    v302 = (_QWORD *)(v260 + 8);
    do
    {
      v303 = *(v302 - 1);
      if ( v303 )
        result = sub_140001660(*v302, v303, 1);
      v302 += 3;
      --v261;
    }
    while ( v261 );
  }
  if ( v341 )
    result = sub_140001660(v260, 24 * v341, 8);
  sub_1409056D0(&v351);
  if ( v326 )
    return sub_140001660(v327, v326, 1);
  return result;
}
