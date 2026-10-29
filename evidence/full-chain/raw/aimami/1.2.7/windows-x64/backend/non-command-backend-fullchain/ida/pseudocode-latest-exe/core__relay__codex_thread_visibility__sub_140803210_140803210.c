// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x140803210 | successor of pre-update 0x14025c3f0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.536, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140803210(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // r13
  _QWORD *v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int128 v12; // rcx
  __int128 v13; // kr00_16
  __int64 v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // r14
  int v28; // eax
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  _DWORD *v33; // r8
  int v34; // ecx
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  const char *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  void *v67; // rax
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  _DWORD *v76; // rdx
  void *v77; // rax
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rax
  __int64 v97; // r14
  __int64 v98; // rax
  __int64 v99; // rcx
  __int128 v100; // xmm0
  __int64 v101; // rax
  __int64 v102; // rdx
  const char *v103; // rax
  __int64 v104; // rcx
  int v105; // r8d
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r14
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r14
  __int64 v121; // rax
  __int64 v122; // rcx
  _DWORD *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  void *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r10
  __int64 v130; // r8
  __int64 v131; // r14
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  char v135; // r11
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r14
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // r8
  __int64 v143; // rdx
  __int64 v144; // r14
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // rcx
  __int128 v150; // xmm0
  unsigned __int64 v151; // r13
  __int64 v152; // rdx
  __int64 v153; // rbx
  __int64 v154; // rdi
  __int64 v155; // r14
  int v156; // r15d
  __int64 v157; // rax
  __int128 v158; // xmm1
  __int128 v159; // xmm2
  __int128 v160; // xmm3
  __int128 v161; // xmm4
  __int128 v162; // xmm5
  __int64 v163; // rax
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm2
  __int64 v167; // rdx
  bool v168; // zf
  __int64 v169; // rsi
  unsigned __int64 v170; // r13
  __int64 v171; // rdx
  int v172; // edx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rax
  int v177; // edx
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  _DWORD *v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  _DWORD *v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  _QWORD *v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  _QWORD *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // r14
  __int64 v201; // rsi
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int128 v204; // xmm0
  __int128 v205; // xmm1
  __int128 v206; // xmm2
  __int64 v207; // rsi
  _QWORD *v208; // rdi
  __int64 v209; // rdx
  __int64 v210; // rax
  _OWORD *v211; // rcx
  __int64 v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rdi
  __int64 v216; // rdi
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rax
  int v220; // r8d
  __int64 v221; // rcx
  __int64 v222; // rsi
  __int64 v223; // rcx
  __int64 v224; // rdx
  __int64 v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rcx
  __int64 v228; // rdi
  __int64 v229; // rax
  __int64 v230; // rcx
  __int64 v231; // rsi
  _QWORD *v232; // rdi
  __int64 v233; // rdx
  __int64 v234; // rsi
  _QWORD *v235; // rdi
  __int64 v236; // rdx
  __int64 v237; // rsi
  _QWORD *v238; // rdi
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // rsi
  __int64 v242; // rsi
  _QWORD *v243; // rdi
  __int64 v244; // rdx
  __int64 v246; // rax
  _QWORD *v247; // rcx
  __int64 v248; // r14
  __int64 *v249; // rax
  void *v250; // rax
  __int64 *v251; // rax
  __int64 v252; // rax
  __int64 v253; // r14
  __int64 v254; // rax
  __int64 v255; // r14
  __int64 v256; // r14
  __int64 v257; // rdi
  __int64 v258; // rdi
  _QWORD *v259; // rcx
  __int64 v260; // rdi
  __int64 v261; // rdi
  _QWORD *v262; // rax
  _QWORD *v263; // rax
  __int128 v264; // [rsp+30h] [rbp-50h] BYREF
  __int64 v265; // [rsp+40h] [rbp-40h]
  __int64 v266; // [rsp+48h] [rbp-38h]
  _QWORD *v267; // [rsp+50h] [rbp-30h]
  __int64 v268; // [rsp+58h] [rbp-28h]
  __int64 v269; // [rsp+60h] [rbp-20h]
  _QWORD v270[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v271[3]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v272[4]; // [rsp+98h] [rbp+18h] BYREF
  __int64 *v273; // [rsp+B8h] [rbp+38h]
  __int64 v274; // [rsp+C0h] [rbp+40h]
  __int64 v275; // [rsp+C8h] [rbp+48h]
  __int64 v276; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v277; // [rsp+D8h] [rbp+58h]
  __int64 v278; // [rsp+E0h] [rbp+60h]
  __int64 v279; // [rsp+E8h] [rbp+68h]
  __m256i v280; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v281; // [rsp+110h] [rbp+90h]
  __int128 v282; // [rsp+120h] [rbp+A0h]
  __int128 v283; // [rsp+130h] [rbp+B0h]
  __int128 v284; // [rsp+140h] [rbp+C0h]
  int v285; // [rsp+15Ch] [rbp+DCh] BYREF
  __int64 v286; // [rsp+160h] [rbp+E0h]
  __int64 v287; // [rsp+168h] [rbp+E8h]
  __int64 v288; // [rsp+170h] [rbp+F0h]
  __int128 v289; // [rsp+178h] [rbp+F8h]
  __int64 v290; // [rsp+188h] [rbp+108h]
  __int64 v291; // [rsp+190h] [rbp+110h]
  __int64 v292; // [rsp+198h] [rbp+118h]
  __int64 v293; // [rsp+1A0h] [rbp+120h]
  __int64 v294; // [rsp+1A8h] [rbp+128h]
  _BYTE v295[24]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v296; // [rsp+1D8h] [rbp+158h]
  __int64 v297; // [rsp+1E0h] [rbp+160h]
  __int64 v298; // [rsp+1E8h] [rbp+168h]
  __int128 v299; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v300; // [rsp+200h] [rbp+180h] BYREF
  __int128 v301; // [rsp+210h] [rbp+190h]
  __int128 v302; // [rsp+220h] [rbp+1A0h]
  _BYTE v303[48]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v304; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v305; // [rsp+270h] [rbp+1F0h]
  __int64 v306; // [rsp+278h] [rbp+1F8h]
  __int64 *v307; // [rsp+280h] [rbp+200h]
  __int64 v308; // [rsp+288h] [rbp+208h]
  __int64 v309; // [rsp+290h] [rbp+210h]
  _DWORD *v310; // [rsp+298h] [rbp+218h]
  __int64 v311; // [rsp+2A0h] [rbp+220h]
  __int64 v312; // [rsp+2A8h] [rbp+228h]
  __int128 v313; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v314; // [rsp+2C0h] [rbp+240h]
  __int128 v315; // [rsp+2D0h] [rbp+250h]
  __int128 v316; // [rsp+2E0h] [rbp+260h]
  __int128 v317; // [rsp+2F0h] [rbp+270h]
  __int128 v318; // [rsp+300h] [rbp+280h]
  __int64 v319; // [rsp+310h] [rbp+290h]
  char v320; // [rsp+318h] [rbp+298h]
  _BYTE v321[7]; // [rsp+319h] [rbp+299h]
  _BYTE v322[104]; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v323; // [rsp+388h] [rbp+308h]
  __int64 v324; // [rsp+390h] [rbp+310h]
  __int64 v325; // [rsp+398h] [rbp+318h]
  __int64 v326; // [rsp+3A0h] [rbp+320h]
  __int64 v327; // [rsp+3A8h] [rbp+328h]
  __int128 v328; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v329[4]; // [rsp+3C0h] [rbp+340h]
  __int64 v330; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v331; // [rsp+3E8h] [rbp+368h]
  __int64 v332; // [rsp+3F0h] [rbp+370h]
  __int64 v333; // [rsp+3F8h] [rbp+378h]
  _BYTE v334[33]; // [rsp+400h] [rbp+380h] BYREF
  _BYTE v335[23]; // [rsp+421h] [rbp+3A1h]
  __int16 v336; // [rsp+438h] [rbp+3B8h]
  char v337; // [rsp+43Ah] [rbp+3BAh]
  __int128 v338; // [rsp+440h] [rbp+3C0h] BYREF
  _OWORD v339[2]; // [rsp+450h] [rbp+3D0h]
  _BYTE v340[33]; // [rsp+470h] [rbp+3F0h] BYREF
  _BYTE v341[23]; // [rsp+491h] [rbp+411h]
  __int16 v342; // [rsp+4A8h] [rbp+428h]
  char v343; // [rsp+4AAh] [rbp+42Ah]
  __int64 v344; // [rsp+4B0h] [rbp+430h]
  __int128 v345; // [rsp+4B8h] [rbp+438h] BYREF
  _BYTE v346[48]; // [rsp+4C8h] [rbp+448h]
  int v347; // [rsp+4FCh] [rbp+47Ch]
  _DWORD *v348; // [rsp+500h] [rbp+480h]
  __int64 *v349; // [rsp+508h] [rbp+488h]
  __int64 v350; // [rsp+510h] [rbp+490h]
  __int64 v351; // [rsp+518h] [rbp+498h]
  __int128 v352; // [rsp+520h] [rbp+4A0h] BYREF
  _BYTE v353[48]; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v354; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v355; // [rsp+570h] [rbp+4F0h]
  __int64 v356; // [rsp+580h] [rbp+500h]
  char v357; // [rsp+588h] [rbp+508h]
  _DWORD v358[5]; // [rsp+589h] [rbp+509h]
  char v359; // [rsp+5A0h] [rbp+520h]
  char v360; // [rsp+5A1h] [rbp+521h]
  char v361; // [rsp+5A2h] [rbp+522h]
  char v362; // [rsp+5A3h] [rbp+523h]
  char v363; // [rsp+5A4h] [rbp+524h]
  char v364; // [rsp+5A5h] [rbp+525h]
  char v365; // [rsp+5A6h] [rbp+526h]
  char v366; // [rsp+5A7h] [rbp+527h]
  __int128 v367; // [rsp+5A8h] [rbp+528h]
  char v368; // [rsp+5BDh] [rbp+53Dh]
  char v369; // [rsp+5BFh] [rbp+53Fh]
  _DWORD *v370; // [rsp+5C0h] [rbp+540h]
  char v371; // [rsp+5CDh] [rbp+54Dh]
  char v372; // [rsp+5CEh] [rbp+54Eh]
  char v373; // [rsp+5CFh] [rbp+54Fh] BYREF
  __int64 v374; // [rsp+5D0h] [rbp+550h]

  v374 = -2;
  v2 = a2;
  memset(&v303[8], 0, 40);
  *((_QWORD *)&v301 + 1) = -1;
  *(_QWORD *)&v300 = 0;
  *((_QWORD *)&v300 + 1) = 8;
  *(_QWORD *)&v301 = 0;
  v330 = 0;
  v331 = 8;
  v332 = 0;
  sub_140A2C460(&v352, a2);
  v325 = a1;
  v4 = *((__int64 **)&v352 + 1);
  v5 = *((_QWORD *)&v352 + 1) + 32LL * *(_QWORD *)v353;
  v266 = *((_QWORD *)&v352 + 1);
  v289 = v352;
  v268 = v352;
  v269 = v5;
  v6 = v5 - 32;
  v306 = v2[97];
  v290 = v2[98];
  v349 = v2;
  v311 = v5;
  v291 = v5 - 32;
LABEL_2:
  v7 = v6 - (_QWORD)v4;
  v8 = v4 + 5;
  v9 = v4;
  while ( 1 )
  {
    if ( v9 == (__int64 *)v5 )
      goto LABEL_240;
    v4 = v9 + 4;
    v267 = v9 + 4;
    if ( *v9 == -1 )
      break;
    v350 = *v9;
    v11 = v9[2];
    v351 = v9[1];
    sub_1416C49D0(&v352, v351, v11);
    if ( (_DWORD)v352 != 2 )
    {
      sub_1407E1670(&v352, v351, v11);
      if ( v357 == -1 )
      {
        *(_OWORD *)&v322[80] = v355;
        v158 = v354;
        *(_OWORD *)&v322[64] = v354;
        v159 = v352;
        v160 = *(_OWORD *)v353;
        v161 = *(_OWORD *)&v353[16];
        v162 = *(_OWORD *)&v353[32];
        *(_OWORD *)&v322[48] = *(_OWORD *)&v353[32];
        *(_OWORD *)&v322[32] = *(_OWORD *)&v353[16];
        *(_OWORD *)&v322[16] = *(_OWORD *)v353;
        *(_OWORD *)v322 = v352;
        v163 = v325;
        *(_OWORD *)(v325 + 88) = v355;
        *(_OWORD *)(v163 + 72) = v158;
        *(_OWORD *)(v163 + 56) = v162;
        *(_OWORD *)(v163 + 40) = v161;
        *(_OWORD *)(v163 + 24) = v160;
        *(_OWORD *)(v163 + 8) = v159;
        *(_QWORD *)v163 = 1;
        goto LABEL_252;
      }
      *(_QWORD *)&v322[96] = v356;
      *(_OWORD *)&v322[80] = v355;
      *(_OWORD *)&v322[64] = v354;
      *(_OWORD *)&v322[48] = *(_OWORD *)&v353[32];
      *(_OWORD *)&v322[32] = *(_OWORD *)&v353[16];
      *(_OWORD *)&v322[16] = *(_OWORD *)v353;
      *(_OWORD *)v322 = v352;
      *(_DWORD *)&v321[3] = *(_DWORD *)((char *)v358 + 3);
      *(_DWORD *)v321 = v358[0];
      v313 = v352;
      v314 = *(_OWORD *)v353;
      v315 = *(_OWORD *)&v353[16];
      v316 = *(_OWORD *)&v353[32];
      v317 = v354;
      v318 = v355;
      v319 = v356;
      v320 = v357;
      sub_1407F8DF0(&v352, &v313);
      v12 = v352;
      v13 = *(_OWORD *)v353;
      if ( (_QWORD)v352 != -1 )
      {
        v164 = *(_OWORD *)&v353[16];
        v165 = *(_OWORD *)&v353[32];
        v166 = v354;
        v167 = v325;
        *(_OWORD *)(v325 + 88) = v355;
        *(_OWORD *)(v167 + 72) = v166;
        *(_OWORD *)(v167 + 56) = v165;
        *(_OWORD *)(v167 + 40) = v164;
        *(_QWORD *)(v167 + 16) = *((_QWORD *)&v12 + 1);
        *(_OWORD *)(v167 + 24) = v13;
        *(_QWORD *)(v167 + 8) = v12;
        *(_QWORD *)v167 = 1;
        goto LABEL_251;
      }
      *(_QWORD *)&v303[8] += *(_QWORD *)&v353[8];
      if ( !*(_QWORD *)&v353[8] )
      {
        sub_1401B3250(*(_QWORD *)v353, 0);
        if ( *((_QWORD *)&v12 + 1) )
          sub_140001660(v13, 104LL * *((_QWORD *)&v12 + 1), 8);
        sub_140777BC0(&v313);
        v2 = v349;
        v5 = v311;
        goto LABEL_4;
      }
      v272[3] = *(_QWORD *)v353;
      v273 = *(__int64 **)v353;
      v274 = *((_QWORD *)&v352 + 1);
      v323 = *(_QWORD *)v353 + 104LL * *(_QWORD *)&v353[8];
      v275 = v323;
      LODWORD(v326) = 0;
      LODWORD(v14) = 0;
      v15 = *(__int64 **)v353;
      if ( *(_QWORD *)v353 != v323 )
      {
        while ( 1 )
        {
          v307 = v15 + 13;
          v273 = v15 + 13;
          v17 = *v15;
          v284 = *(_OWORD *)(v15 + 11);
          v283 = *(_OWORD *)(v15 + 9);
          v282 = *(_OWORD *)(v15 + 7);
          v281 = *(_OWORD *)(v15 + 5);
          v280 = *(__m256i *)(v15 + 1);
          if ( v17 == -1 )
          {
            v16 = v323;
            *(_QWORD *)&v12 = v307;
            goto LABEL_229;
          }
          *(_QWORD *)v322 = v17;
          *(_OWORD *)&v322[88] = v284;
          *(_OWORD *)&v322[72] = v283;
          *(_OWORD *)&v322[56] = v282;
          *(_OWORD *)&v322[40] = v281;
          *(__m256i *)&v322[8] = v280;
          *(_QWORD *)&v367 = *((_QWORD *)&v281 + 1);
          if ( *((_QWORD *)&v281 + 1) == -1 )
            break;
          sub_140A934F0(&v352, *(_QWORD *)&v322[56], *(_QWORD *)&v322[64]);
          if ( *(_QWORD *)&v353[16] == -1 )
          {
            v246 = v352;
            v247 = (_QWORD *)v325;
            *(_QWORD *)(v325 + 8) = 2;
            v247[2] = v246;
            *v247 = 1;
            goto LABEL_439;
          }
          if ( *(_DWORD *)&v353[16] == 2 || (v18 = (_DWORD *)v352) == nullptr )
          {
            if ( *(_DWORD *)&v353[16] != 2 )
              goto LABEL_135;
            ++*(_QWORD *)&v303[16];
            sub_1407DD730(
              (unsigned int)v295,
              (_DWORD)v349,
              *(_DWORD *)&v322[8],
              *(_DWORD *)&v322[16],
              *(__int64 *)&v322[56],
              *(__int64 *)&v322[64]);
            if ( *(_QWORD *)v295 != -1 )
            {
              v347 = v14;
              v367 = *(_OWORD *)&v295[8];
              v348 = *(_DWORD **)v295;
              v20 = *(_QWORD *)&v322[56];
              v299 = *(_OWORD *)&v322[8];
              v370 = *(_DWORD **)&v322[64];
              sub_140A934F0(&v352, *(_QWORD *)&v322[56], *(_QWORD *)&v322[64]);
              if ( *(_QWORD *)&v353[16] == -1 )
              {
                v40 = v352;
                v248 = 2;
                goto LABEL_437;
              }
              if ( *(_DWORD *)&v353[16] != 2 )
              {
                v22 = v352;
                if ( (_QWORD)v352 )
                {
                  v23 = *((_QWORD *)&v352 + 1);
                  goto LABEL_34;
                }
              }
              if ( *(_DWORD *)&v353[16] != 2 )
                goto LABEL_78;
              sub_140A934F0(&v352, v367, *((_QWORD *)&v367 + 1));
              v309 = v352;
              if ( *(_QWORD *)&v353[16] == -1 )
              {
                v248 = 2;
                v40 = v309;
                goto LABEL_437;
              }
              if ( *(_DWORD *)&v353[16] == 2 )
              {
                nullsub_1(v24, v21);
                v249 = (__int64 *)sub_140001650(25, 1);
                if ( !v249 )
                  sub_14196B2DB(1, 25);
                v21 = v249;
                qmemcpy(v249, "rollout backup is missing", 25);
                v248 = 10;
                v11 = 25;
                v40 = 25;
LABEL_437:
                v259 = (_QWORD *)v325;
                *(_QWORD *)(v325 + 8) = v248;
                v259[2] = v40;
                v259[3] = v21;
                v259[4] = v11;
                *v259 = 1;
                if ( v348 )
                  sub_140001660(v367, v348, 1);
LABEL_439:
                v260 = v323;
                if ( *(_QWORD *)v322 )
                  sub_140001660(*(_QWORD *)&v322[8], *(_QWORD *)v322, 1);
                if ( *(_QWORD *)&v322[48] != -1 && *(_QWORD *)&v322[48] )
                  sub_140001660(*(_QWORD *)&v322[56], *(_QWORD *)&v322[48], 1);
                if ( *(_QWORD *)&v322[24] )
                  sub_140001660(*(_QWORD *)&v322[32], *(_QWORD *)&v322[24], 1);
                if ( *(_QWORD *)&v322[80] != -1 && *(_QWORD *)&v322[80] )
                  sub_140001660(*(_QWORD *)&v322[88], *(_QWORD *)&v322[80], 1);
                sub_1401B3250(v307, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v260 - (_QWORD)v307) >> 3));
                if ( *((_QWORD *)&v12 + 1) )
                  sub_140001660(v13, 104LL * *((_QWORD *)&v12 + 1), 8);
LABEL_251:
                sub_140777BC0(&v313);
                v5 = v311;
LABEL_252:
                if ( v350 )
                  sub_140001660(v351, v350, 1);
                v168 = v5 == (_QWORD)v4;
                v169 = v289;
                if ( !v168 )
                {
                  v170 = v7 >> 5;
                  do
                  {
                    v171 = *(v8 - 1);
                    if ( v171 )
                      sub_140001660(*v8, v171, 1);
                    v8 += 4;
                    --v170;
                  }
                  while ( v170 );
                }
                if ( v169 )
                  sub_140001660(*((_QWORD *)&v289 + 1), 32 * v169, 8);
                v153 = v325;
LABEL_373:
                v240 = v331;
                v351 = v332;
                v350 = 0;
                v349 = (__int64 *)v331;
                while ( v351 != v350 )
                {
                  ++v350;
                  v241 = v240 + 32;
                  sub_1401AB4D0();
                  v240 = v241;
                }
                if ( v330 )
                  sub_140001660(v331, 32 * v330, 8);
                if ( *((_QWORD *)&v301 + 1) != -1 && *((_QWORD *)&v301 + 1) )
                  sub_140001660(v302, *((_QWORD *)&v301 + 1), 1);
                v242 = v301;
                if ( (_QWORD)v301 )
                {
                  v243 = (_QWORD *)(*((_QWORD *)&v300 + 1) + 8LL);
                  do
                  {
                    v244 = *(v243 - 1);
                    if ( v244 )
                      sub_140001660(*v243, v244, 1);
                    v243 += 3;
                    --v242;
                  }
                  while ( v242 );
                }
                if ( (_QWORD)v300 )
                {
                  v223 = *((_QWORD *)&v300 + 1);
                  v224 = 24 * v300;
LABEL_388:
                  sub_140001660(v223, v224, 8);
                }
                return v153;
              }
              v298 = *((_QWORD *)&v352 + 1);
              sub_1416B0AC0(v340, *((_QWORD *)&v352 + 1), *(_QWORD *)v353);
              sub_1416B0AC0(v334, v367, *((_QWORD *)&v367 + 1));
              v344 = v20;
              v25 = *(_QWORD *)&v340[8];
              v26 = *(_QWORD *)&v334[8];
              if ( *(_QWORD *)&v340[8] == *(_QWORD *)&v334[8] )
              {
                v27 = v340[16];
                if ( (_BYTE)v342 == (_BYTE)v336
                  && HIBYTE(v342) == 2
                  && HIBYTE(v336) == 2
                  && v340[16] < 3u == v334[16] < 3u )
                {
                  v327 = *(_QWORD *)&v340[8];
                  v308 = *(_QWORD *)&v334[8];
                  v28 = sub_141923B40(*(_QWORD *)v340, *(_QWORD *)v334, *(_QWORD *)&v340[8]);
                  v25 = v327;
                  v26 = v308;
                  if ( !v28 )
                  {
                    v29 = v344;
LABEL_54:
                    if ( !(unsigned __int8)sub_1407E31B0(v367, *((_QWORD *)&v367 + 1), v299, *((_QWORD *)&v299 + 1)) )
                    {
                      v345 = v367;
                      *(_QWORD *)&v352 = &v299;
                      *((_QWORD *)&v352 + 1) = sub_140191200;
                      *(_QWORD *)v353 = &v345;
                      *(_QWORD *)&v353[8] = sub_1416CE600;
                      sub_1416DAFA0(v272, &unk_141A4BCEF, &v352);
                      v40 = v272[0];
                      v349 = (__int64 *)v272[1];
                      v248 = 10;
                      v11 = v272[2];
                      goto LABEL_434;
                    }
                    v327 = sub_1416B19D0(v29, v370);
                    v308 = v39;
                    if ( !v327 )
                    {
                      nullsub_1(v38, 0);
                      v11 = 26;
                      v251 = (__int64 *)sub_140001650(26, 1);
                      if ( !v251 )
                        sub_14196B2DB(1, 26);
                      v349 = v251;
                      qmemcpy(v251, "rollout path has no parent", 26);
                      v248 = 9;
                      v40 = 26;
                      goto LABEL_434;
                    }
                    LOBYTE(v352) = 1;
                    v40 = sub_1416B9760(&v352, v327, v308);
                    if ( v40 )
                    {
                      v248 = 2;
                      goto LABEL_434;
                    }
                    v41 = sub_1416B1C00(v29, v370);
                    if ( v41 )
                    {
                      sub_1416E2AB0(&v352, v41, v42);
                      v43 = *((const char **)&v352 + 1);
                      if ( (_BYTE)v352 )
                        v43 = aRollout_1;
                      v44 = *(_QWORD *)v353;
                      if ( (_BYTE)v352 )
                        v44 = 7;
                    }
                    else
                    {
                      v44 = 7;
                      v43 = aRollout_1;
                    }
                    *(_QWORD *)v340 = v43;
                    *(_QWORD *)&v340[8] = v44;
                    LODWORD(v328) = GetCurrentProcessId();
                    sub_141597890(&v352);
                    *(_OWORD *)v334 = v352;
                    *(_QWORD *)&v352 = v340;
                    *((_QWORD *)&v352 + 1) = sub_140191200;
                    *(_QWORD *)v353 = &v328;
                    *(_QWORD *)&v353[8] = sub_1416EACD0;
                    *(_QWORD *)&v353[16] = v334;
                    *(_QWORD *)&v353[24] = sub_1402230B0;
                    sub_1416DAFA0(&v276, &unk_141A4BD1F, &v352);
                    v333 = v277;
                    sub_1416B18A0((unsigned int)&v345, v327, v308, v277, v278);
                    if ( v276 )
                      sub_140001660(v333, v276, 1);
                    v45 = *(_QWORD *)v346;
                    v333 = *((_QWORD *)&v345 + 1);
                    if ( sub_1416C4610(v367, *((_QWORD *)&v367 + 1)) == 1 )
                    {
                      *(_QWORD *)v334 = v46;
                      v252 = sub_1416C4110(v333, v45);
                      if ( v252 && (unsigned int)(v252 & 3) - 2 >= 2 && (v252 & 3) != 0 )
                      {
                        *((_QWORD *)&v352 + 1) = v252 - 1;
                        LOBYTE(v352) = 3;
                        sub_1416EBAD0((char *)&v352 + 8);
                      }
                      *(_QWORD *)&v352 = &v299;
                      *((_QWORD *)&v352 + 1) = sub_140191200;
                      *(_QWORD *)v353 = v334;
                      *(_QWORD *)&v353[8] = sub_1416EA080;
                      sub_1416DAFA0(v271, &unk_141A4BD31, &v352);
                      v40 = v271[0];
                      v349 = (__int64 *)v271[1];
                      v11 = v271[2];
                      if ( (v334[0] & 3u) - 2 >= 2 && (v334[0] & 3) != 0 )
                      {
                        v253 = v271[0];
                        *((_QWORD *)&v352 + 1) = *(_QWORD *)v334 - 1LL;
                        LOBYTE(v352) = 3;
                        sub_1416EBAD0((char *)&v352 + 8);
                        v40 = v253;
                      }
LABEL_431:
                      if ( (_QWORD)v345 )
                      {
                        v256 = v11;
                        v257 = v40;
                        sub_140001660(v333, v345, 1);
                        v40 = v257;
                        v11 = v256;
                      }
                      v248 = 10;
LABEL_434:
                      if ( v309 )
                      {
                        v306 = v11;
                        v258 = v40;
                        sub_140001660(v298, v309, 1);
                        v40 = v258;
                        v11 = v306;
                      }
                      v21 = v349;
                      goto LABEL_437;
                    }
                    v47 = sub_1407D7960(v333, v45, v344, v370);
                    if ( v47 )
                    {
                      *(_QWORD *)v334 = v47;
                      v254 = sub_1416C4110(v333, v45);
                      if ( v254 && (unsigned int)(v254 & 3) - 2 >= 2 && (v254 & 3) != 0 )
                      {
                        *((_QWORD *)&v352 + 1) = v254 - 1;
                        LOBYTE(v352) = 3;
                        sub_1416EBAD0((char *)&v352 + 8);
                      }
                      *(_QWORD *)&v352 = &v299;
                      *((_QWORD *)&v352 + 1) = sub_140191200;
                      *(_QWORD *)v353 = v334;
                      *(_QWORD *)&v353[8] = sub_1416EA080;
                      sub_1416DAFA0(v270, &unk_141A4BD57, &v352);
                      v40 = v270[0];
                      v349 = (__int64 *)v270[1];
                      v11 = v270[2];
                      if ( (v334[0] & 3u) - 2 >= 2 && (v334[0] & 3) != 0 )
                      {
                        v255 = v270[0];
                        *((_QWORD *)&v352 + 1) = *(_QWORD *)v334 - 1LL;
                        LOBYTE(v352) = 3;
                        sub_1416EBAD0((char *)&v352 + 8);
                        v40 = v255;
                      }
                      goto LABEL_431;
                    }
                    sub_1407D8110(v327, v308);
                    sub_1416C49D0(&v352, v367, *((_QWORD *)&v367 + 1));
                    if ( (_DWORD)v352 == 2 )
                    {
                      v285 = 0;
                      if ( (BYTE8(v352) & 3u) - 2 >= 2 && (BYTE8(v352) & 3) != 0 )
                      {
                        --*((_QWORD *)&v352 + 1);
                        LOBYTE(v352) = 3;
                        sub_1416EBAD0((char *)&v352 + 8);
                      }
                    }
                    else
                    {
                      v286 = *(_QWORD *)&v353[32];
                      v285 = 1;
                    }
                    sub_1407F0EA0(v344, v370, &v285);
                    if ( !(unsigned __int8)sub_1407E31B0(v344, v370, v299, *((_QWORD *)&v299 + 1)) )
                    {
                      *(_QWORD *)v334 = v344;
                      *(_QWORD *)&v334[8] = v370;
                      *(_QWORD *)&v352 = &v299;
                      *((_QWORD *)&v352 + 1) = sub_140191200;
                      *(_QWORD *)v353 = v334;
                      *(_QWORD *)&v353[8] = sub_1416CE600;
                      sub_1416DAFA0(&v304, &unk_141A4BD80, &v352);
                      v349 = *((__int64 **)&v304 + 1);
                      v40 = v304;
                      v11 = v305;
                      goto LABEL_431;
                    }
                    if ( (_QWORD)v345 )
                      sub_140001660(v333, v345, 1);
                    v22 = v309;
                    if ( v309 )
                    {
                      v23 = v298;
LABEL_34:
                      sub_140001660(v23, v22, 1);
                    }
LABEL_78:
                    ++*(_QWORD *)&v303[24];
                    *(_OWORD *)v334 = v367;
                    *(_QWORD *)&v352 = v322;
                    *((_QWORD *)&v352 + 1) = sub_1400015F0;
                    *(_QWORD *)v353 = v334;
                    *(_QWORD *)&v353[8] = sub_1416CE600;
                    sub_1416DAFA0(&v345, &unk_141A4C72D, &v352);
                    v338 = v345;
                    *(_QWORD *)&v339[0] = *(_QWORD *)v346;
                    sub_1416DB410(&v352, &v338);
                    v48 = v301;
                    if ( (_QWORD)v301 == (_QWORD)v300 )
                      sub_141939F90(&v300);
                    v49 = *((_QWORD *)&v300 + 1);
                    v50 = 3 * v48;
                    v51 = *(_QWORD *)v353;
                    *(_QWORD *)(*((_QWORD *)&v300 + 1) + 8 * v50 + 16) = *(_QWORD *)v353;
                    *(_OWORD *)(v49 + 8 * v50) = v352;
                    *(_QWORD *)&v301 = v48 + 1;
                    *(_QWORD *)&v328 = 0;
                    v329[0] = 0;
                    nullsub_1(3 * v48, v51);
                    v52 = sub_140001650(6, 1);
                    if ( !v52 )
                      sub_14196B2DB(1, 6);
                    *(_WORD *)(v52 + 4) = 28271;
                    *(_DWORD *)v52 = 1769235297;
                    *(_QWORD *)v340 = 6;
                    *(_QWORD *)&v340[8] = v52;
                    *(_QWORD *)&v340[16] = 6;
                    nullsub_1(v54, v53);
                    v55 = (_DWORD *)sub_140001650(7, 1);
                    v370 = v55;
                    if ( !v55 )
                      sub_14196B2DB(1, 7);
                    *(_DWORD *)((char *)v55 + 3) = 1701998452;
                    *v55 = 1953719666;
                    LOBYTE(v352) = 3;
                    *((_QWORD *)&v352 + 1) = 7;
                    *(_QWORD *)v353 = v55;
                    *(_QWORD *)&v353[8] = 7;
                    sub_140A68320(&v345, &v328, v340, &v352);
                    if ( (_BYTE)v345 != 0xFF )
                      sub_140032FF0(&v345);
                    nullsub_1(v57, v56);
                    v58 = (_QWORD *)sub_140001650(8, 1);
                    if ( !v58 )
                      sub_14196B2DB(1, 8);
                    *v58 = 0x6449646165726874LL;
                    *(_QWORD *)v340 = 8;
                    *(_QWORD *)&v340[8] = v58;
                    *(_QWORD *)&v340[16] = 8;
                    v60 = *(_QWORD *)&v322[16];
                    if ( *(__int64 *)&v322[16] < 0 )
                    {
                      v62 = 0;
LABEL_391:
                      v366 = 1;
                      sub_14196B2DB(v62, v60);
                    }
                    if ( *(_QWORD *)&v322[16] )
                    {
                      v370 = *(_DWORD **)&v322[8];
                      nullsub_1(0x6449646165726874LL, v59);
                      v61 = sub_140001650(v60, 1);
                      v62 = 1;
                      if ( !v61 )
                        goto LABEL_391;
                      v63 = v370;
                      v370 = (_DWORD *)v61;
                      sub_1419234B0(v61, v63, v60);
                      v64 = (__int64)v370;
                    }
                    else
                    {
                      v64 = 1;
                    }
                    LOBYTE(v352) = 3;
                    *((_QWORD *)&v352 + 1) = v60;
                    *(_QWORD *)v353 = v64;
                    *(_QWORD *)&v353[8] = v60;
                    v366 = 0;
                    sub_140A68320(&v345, &v328, v340, &v352);
                    if ( (_BYTE)v345 != 0xFF )
                      sub_140032FF0(&v345);
                    nullsub_1(v66, v65);
                    v67 = (void *)sub_140001650(11, 1);
                    if ( !v67 )
                      sub_14196B2DB(1, 11);
                    qmemcpy(v67, "rolloutPath", 11);
                    *(_QWORD *)v340 = 11;
                    v370 = v67;
                    *(_QWORD *)&v340[8] = v67;
                    *(_QWORD *)&v340[16] = 11;
                    v304 = *(_OWORD *)&v322[56];
                    *(_QWORD *)&v345 = 0;
                    *((_QWORD *)&v345 + 1) = 1;
                    *(_QWORD *)v346 = 0;
                    *(_QWORD *)v353 = 1610612768;
                    *(_QWORD *)&v352 = &v345;
                    *((_QWORD *)&v352 + 1) = &off_141A49990;
                    if ( (unsigned __int8)sub_1416CE600(&v304, &v352, v68) )
                      sub_14196B5F0(
                        (unsigned int)aADisplayImplem_59,
                        55,
                        (unsigned int)&v373,
                        (unsigned int)&unk_141A481A8,
                        (__int64)&off_141A4E498);
                    v344 = *((_QWORD *)&v345 + 1);
                    v370 = (_DWORD *)v345;
                    v71 = *(_QWORD *)v346;
                    if ( *(__int64 *)v346 < 0 )
                    {
                      v73 = 0;
LABEL_394:
                      v365 = 1;
                      sub_14196B2DB(v73, v71);
                    }
                    if ( *(_QWORD *)v346 )
                    {
                      nullsub_1(v70, v69);
                      v72 = sub_140001650(v71, 1);
                      v73 = 1;
                      if ( !v72 )
                        goto LABEL_394;
                      v327 = v72;
                      sub_1419234B0(v72, v344, v71);
                      v74 = v327;
                    }
                    else
                    {
                      v74 = 1;
                    }
                    LOBYTE(v352) = 3;
                    *((_QWORD *)&v352 + 1) = v71;
                    *(_QWORD *)v353 = v74;
                    *(_QWORD *)&v353[8] = v71;
                    v365 = 0;
                    sub_140A68320(&v345, &v328, v340, &v352);
                    if ( (_BYTE)v345 != 0xFF )
                      sub_140032FF0(&v345);
                    v76 = v370;
                    if ( v370 )
                      sub_140001660(v344, v370, 1);
                    nullsub_1(v75, v76);
                    v77 = (void *)sub_140001650(10, 1);
                    if ( !v77 )
                      sub_14196B2DB(1, 10);
                    qmemcpy(v77, "backupPath", 10);
                    *(_QWORD *)v340 = 10;
                    v370 = v77;
                    *(_QWORD *)&v340[8] = v77;
                    *(_QWORD *)&v340[16] = 10;
                    v304 = v367;
                    *(_QWORD *)&v345 = 0;
                    *((_QWORD *)&v345 + 1) = 1;
                    *(_QWORD *)v346 = 0;
                    *(_QWORD *)v353 = 1610612768;
                    *(_QWORD *)&v352 = &v345;
                    *((_QWORD *)&v352 + 1) = &off_141A49990;
                    if ( (unsigned __int8)sub_1416CE600(&v304, &v352, v78) )
                      sub_14196B5F0(
                        (unsigned int)aADisplayImplem_59,
                        55,
                        (unsigned int)&v373,
                        (unsigned int)&unk_141A481A8,
                        (__int64)&off_141A4E498);
                    v370 = *((_DWORD **)&v345 + 1);
                    *((_QWORD *)&v367 + 1) = v345;
                    v81 = *(_QWORD *)v346;
                    if ( *(__int64 *)v346 < 0 )
                    {
                      v83 = 0;
LABEL_397:
                      v364 = 1;
                      sub_14196B2DB(v83, v81);
                    }
                    if ( *(_QWORD *)v346 )
                    {
                      nullsub_1(v80, v79);
                      v82 = sub_140001650(v81, 1);
                      v83 = 1;
                      if ( !v82 )
                        goto LABEL_397;
                      v344 = v82;
                      sub_1419234B0(v82, v370, v81);
                      v84 = v344;
                    }
                    else
                    {
                      v84 = 1;
                    }
                    LOBYTE(v352) = 3;
                    *((_QWORD *)&v352 + 1) = v81;
                    *(_QWORD *)v353 = v84;
                    *(_QWORD *)&v353[8] = v81;
                    v364 = 0;
                    sub_140A68320(&v345, &v328, v340, &v352);
                    if ( (_BYTE)v345 != 0xFF )
                      sub_140032FF0(&v345);
                    v86 = *((_QWORD *)&v367 + 1);
                    if ( *((_QWORD *)&v367 + 1) )
                      sub_140001660(v370, *((_QWORD *)&v367 + 1), 1);
                    nullsub_1(v85, v86);
                    v87 = sub_140001650(6, 1);
                    if ( !v87 )
                      sub_14196B2DB(1, 6);
                    *(_WORD *)(v87 + 4) = 26740;
                    *(_DWORD *)v87 = 1632658020;
                    *(_QWORD *)v340 = 6;
                    *((_QWORD *)&v367 + 1) = v87;
                    *(_QWORD *)&v340[8] = v87;
                    *(_QWORD *)&v340[16] = 6;
                    *(_QWORD *)&v304 = v351;
                    *((_QWORD *)&v304 + 1) = v11;
                    *(_QWORD *)&v345 = 0;
                    *((_QWORD *)&v345 + 1) = 1;
                    *(_QWORD *)v346 = 0;
                    *(_QWORD *)v353 = 1610612768;
                    *(_QWORD *)&v352 = &v345;
                    *((_QWORD *)&v352 + 1) = &off_141A49990;
                    if ( (unsigned __int8)sub_1416CE600(&v304, &v352, v88) )
                      sub_14196B5F0(
                        (unsigned int)aADisplayImplem_59,
                        55,
                        (unsigned int)&v373,
                        (unsigned int)&unk_141A481A8,
                        (__int64)&off_141A4E498);
                    v370 = *((_DWORD **)&v345 + 1);
                    *((_QWORD *)&v367 + 1) = v345;
                    v91 = *(_QWORD *)v346;
                    if ( *(__int64 *)v346 < 0 )
                    {
                      v93 = 0;
LABEL_399:
                      v363 = 1;
                      sub_14196B2DB(v93, v91);
                    }
                    if ( *(_QWORD *)v346 )
                    {
                      nullsub_1(v90, v89);
                      v92 = sub_140001650(v91, 1);
                      v93 = 1;
                      if ( !v92 )
                        goto LABEL_399;
                      v344 = v92;
                      sub_1419234B0(v92, v370, v91);
                      v94 = v344;
                    }
                    else
                    {
                      v94 = 1;
                    }
                    LOBYTE(v352) = 3;
                    *((_QWORD *)&v352 + 1) = v91;
                    *(_QWORD *)v353 = v94;
                    *(_QWORD *)&v353[8] = v91;
                    v363 = 0;
                    sub_140A68320(&v345, &v328, v340, &v352);
                    if ( (_BYTE)v345 != 0xFF )
                      sub_140032FF0(&v345);
                    if ( *((_QWORD *)&v367 + 1) )
                      sub_140001660(v370, *((_QWORD *)&v367 + 1), 1);
                    *(_QWORD *)&v334[24] = v329[0];
                    *(_OWORD *)&v334[8] = v328;
                    v334[0] = 5;
                    v97 = v332;
                    if ( v332 == v330 )
                      sub_1419397B0(&v330);
                    v98 = v331;
                    v99 = 32 * v97;
                    v100 = *(_OWORD *)v334;
                    *(_OWORD *)(v331 + v99 + 16) = *(_OWORD *)&v334[16];
                    *(_OWORD *)(v98 + v99) = v100;
                    v332 = v97 + 1;
                    if ( (_QWORD)v338 )
                      sub_140001660(*((_QWORD *)&v338 + 1), v338, 1);
                    v18 = v348;
                    LODWORD(v14) = v347;
                    if ( !v348 )
                      goto LABEL_135;
                    v19 = v367;
                    goto LABEL_27;
                  }
                }
              }
              else
              {
                v27 = v340[16];
              }
              if ( v27 != -1 )
              {
                *(_QWORD *)((char *)v339 + 15) = *(_QWORD *)&v341[15];
                v339[0] = *(_OWORD *)v341;
                v338 = *(_OWORD *)&v340[17];
              }
              *(_QWORD *)&v345 = *(_QWORD *)v340;
              *((_QWORD *)&v345 + 1) = v25;
              v346[0] = v27;
              *(_QWORD *)&v346[32] = *(_QWORD *)((char *)v339 + 15);
              *(_OWORD *)&v346[17] = v339[0];
              *(_OWORD *)&v346[1] = v338;
              *(_WORD *)&v346[40] = v342;
              v346[42] = v343;
              if ( v334[16] != 0xFF )
              {
                *(__int64 *)((char *)&v329[1] + 7) = *(_QWORD *)&v335[15];
                *(_OWORD *)v329 = *(_OWORD *)v335;
                v328 = *(_OWORD *)&v334[17];
              }
              *(_QWORD *)&v352 = *(_QWORD *)v334;
              *((_QWORD *)&v352 + 1) = v26;
              v353[0] = v334[16];
              *(_QWORD *)&v353[32] = *(__int64 *)((char *)&v329[1] + 7);
              *(_OWORD *)&v353[17] = *(_OWORD *)v329;
              *(_OWORD *)&v353[1] = v328;
              *(_WORD *)&v353[40] = v336;
              v353[42] = v337;
              v35 = sub_140865EB0(&v345, &v352);
              v29 = v344;
              if ( !v35 )
              {
                nullsub_1(v37, v36);
                v11 = 56;
                v250 = (void *)sub_140001650(56, 1);
                if ( !v250 )
                  sub_14196B2DB(1, 56);
                qmemcpy(v250, "rollout backup representation changed; history preserved", 56);
                v349 = (__int64 *)v250;
                v248 = 10;
                v40 = 56;
                goto LABEL_434;
              }
              goto LABEL_54;
            }
            *((_QWORD *)&v367 + 1) = &v322[48];
            if ( (v326 & 1) == 0 )
              goto LABEL_46;
LABEL_169:
            v338 = *(_OWORD *)&v322[8];
            *(_QWORD *)&v328 = &v338;
            *((_QWORD *)&v328 + 1) = &unk_141A454D8;
            v107 = sub_140772660(
                     (unsigned int)&v345,
                     (unsigned int)&v313,
                     (unsigned int)aUpdateThreadsS_0,
                     75,
                     (__int64)&v328,
                     1);
            if ( (_QWORD)v345 != -1 )
            {
              *(_OWORD *)&v353[32] = *(_OWORD *)&v346[32];
              *(_OWORD *)&v353[16] = *(_OWORD *)&v346[16];
              *(_OWORD *)v353 = *(_OWORD *)v346;
              v352 = v345;
              *(_QWORD *)v334 = &v338;
              *(_QWORD *)&v334[8] = sub_140191200;
              *(_QWORD *)&v334[16] = &v352;
              *(_QWORD *)&v334[24] = sub_14142D4D0;
              sub_1416DAFA0(v340, &unk_141A47727, v334);
              v261 = *(_QWORD *)v340;
              *(_OWORD *)v295 = *(_OWORD *)&v340[8];
              sub_1407785F0(&v352);
              v262 = (_QWORD *)v325;
              *(_OWORD *)(v325 + 24) = *(_OWORD *)v295;
              v262[1] = 10;
              v262[2] = v261;
              *v262 = 1;
              goto LABEL_439;
            }
            if ( *((_QWORD *)&v345 + 1) )
            {
              ++*(_QWORD *)&v303[32];
              *(_QWORD *)&v345 = v322;
              *((_QWORD *)&v345 + 1) = sub_1400015F0;
              sub_1416DAFA0(&v352, &unk_141A4C741, &v345);
              v338 = v352;
              *(_QWORD *)&v339[0] = *(_QWORD *)v353;
              sub_1416DB410(&v352, &v338);
              v108 = v301;
              if ( (_QWORD)v301 == (_QWORD)v300 )
                sub_141939F90(&v300);
              v109 = *((_QWORD *)&v300 + 1);
              v110 = 3 * v108;
              v111 = *(_QWORD *)v353;
              *(_QWORD *)(*((_QWORD *)&v300 + 1) + 8 * v110 + 16) = *(_QWORD *)v353;
              *(_OWORD *)(v109 + 8 * v110) = v352;
              *(_QWORD *)&v301 = v108 + 1;
              *(_QWORD *)&v328 = 0;
              v329[0] = 0;
              nullsub_1(3 * v108, v111);
              v112 = sub_140001650(6, 1);
              if ( !v112 )
                sub_14196B2DB(1, 6);
              *(_WORD *)(v112 + 4) = 28271;
              *(_DWORD *)v112 = 1769235297;
              *(_QWORD *)v340 = 6;
              *(_QWORD *)&v340[8] = v112;
              *(_QWORD *)&v340[16] = 6;
              nullsub_1(v114, v113);
              v115 = (_DWORD *)sub_140001650(7, 1);
              v348 = v115;
              if ( !v115 )
                sub_14196B2DB(1, 7);
              *(_DWORD *)((char *)v115 + 3) = 1702125932;
              *v115 = 1819243369;
              LOBYTE(v352) = 3;
              *((_QWORD *)&v352 + 1) = 7;
              *(_QWORD *)v353 = v115;
              *(_QWORD *)&v353[8] = 7;
              sub_140A68320(&v345, &v328, v340, &v352);
              if ( (_BYTE)v345 != 0xFF )
                sub_140032FF0(&v345);
              nullsub_1(v117, v116);
              v118 = (_QWORD *)sub_140001650(8, 1);
              if ( !v118 )
                sub_14196B2DB(1, 8);
              *v118 = 0x6449646165726874LL;
              *(_QWORD *)v340 = 8;
              *(_QWORD *)&v340[8] = v118;
              *(_QWORD *)&v340[16] = 8;
              v120 = *(_QWORD *)&v322[16];
              if ( *(__int64 *)&v322[16] < 0 )
              {
                v122 = 0;
LABEL_401:
                v362 = 1;
                sub_14196B2DB(v122, v120);
              }
              if ( *(_QWORD *)&v322[16] )
              {
                v348 = *(_DWORD **)&v322[8];
                nullsub_1(0x6449646165726874LL, v119);
                v121 = sub_140001650(v120, 1);
                v122 = 1;
                if ( !v121 )
                  goto LABEL_401;
                v123 = v348;
                v348 = (_DWORD *)v121;
                sub_1419234B0(v121, v123, v120);
                v124 = (__int64)v348;
              }
              else
              {
                v124 = 1;
              }
              LOBYTE(v352) = 3;
              *((_QWORD *)&v352 + 1) = v120;
              *(_QWORD *)v353 = v124;
              *(_QWORD *)&v353[8] = v120;
              v362 = 0;
              sub_140A68320(&v345, &v328, v340, &v352);
              if ( (_BYTE)v345 != 0xFF )
                sub_140032FF0(&v345);
              nullsub_1(v126, v125);
              v127 = (void *)sub_140001650(11, 1);
              if ( !v127 )
                sub_14196B2DB(1, 11);
              qmemcpy(v127, "rolloutPath", 11);
              *(_QWORD *)v340 = 11;
              *(_QWORD *)&v340[8] = v127;
              *(_QWORD *)&v340[16] = 11;
              v129 = -1;
              LOBYTE(v128) = 1;
              v130 = v312;
              if ( (_QWORD)v367 == -1 )
              {
                v135 = 0;
                v132 = v324;
                v133 = v292;
              }
              else
              {
                *(_QWORD *)&v367 = v127;
                *(_OWORD *)v295 = *(_OWORD *)(*((_QWORD *)&v367 + 1) + 8LL);
                *(_QWORD *)&v345 = 0;
                *((_QWORD *)&v345 + 1) = 1;
                *(_QWORD *)v346 = 0;
                *(_QWORD *)v353 = 1610612768;
                *(_QWORD *)&v352 = &v345;
                *((_QWORD *)&v352 + 1) = &off_141A49990;
                if ( (unsigned __int8)sub_1416CE600(v295, &v352, v312) )
                  sub_14196B5F0(
                    (unsigned int)aADisplayImplem_59,
                    55,
                    (unsigned int)&v373,
                    (unsigned int)&unk_141A481A8,
                    (__int64)&off_141A4E498);
                v130 = *((_QWORD *)&v345 + 1);
                v131 = v345;
                v132 = v324;
                v133 = v292;
                LOBYTE(v128) = 1;
                if ( (_QWORD)v345 == -1 )
                {
                  v135 = 0;
                  v129 = -1;
                }
                else
                {
                  v134 = *(_QWORD *)v346;
                  if ( *(__int64 *)v346 < 0 )
                  {
                    v137 = 0;
LABEL_406:
                    v361 = 0;
                    v288 = v130;
                    v287 = v131;
                    v360 = 1;
                    sub_14196B2DB(v137, v134);
                  }
                  v135 = 3;
                  if ( *(_QWORD *)v346 )
                  {
                    v324 = *(_QWORD *)v346;
                    v312 = *((_QWORD *)&v345 + 1);
                    nullsub_1(v292, *(_QWORD *)v346);
                    v136 = sub_140001650(v324, 1);
                    v137 = 1;
                    v130 = v312;
                    v134 = v324;
                    if ( !v136 )
                      goto LABEL_406;
                    v293 = v136;
                    sub_1419234B0(v136, v312, v324);
                    v130 = v312;
                    v132 = v324;
                    v128 = 0;
                    v129 = v131;
                    v133 = v324;
                    v135 = 3;
                  }
                  else
                  {
                    v293 = 1;
                    v128 = 0;
                    v129 = v345;
                    v132 = 0;
                    v133 = 0;
                  }
                }
              }
              LOBYTE(v352) = v135;
              v324 = v132;
              *((_QWORD *)&v352 + 1) = v132;
              *(_QWORD *)v353 = v293;
              v292 = v133;
              *(_QWORD *)&v353[8] = v133;
              *(_QWORD *)&v367 = v128;
              v361 = v128;
              v312 = v130;
              v288 = v130;
              v138 = v129;
              v287 = v129;
              v360 = 0;
              sub_140A68320(&v345, &v328, v340, &v352);
              v140 = v367;
              if ( (_BYTE)v345 != 0xFF )
              {
                v368 = v367;
                v297 = v312;
                v296 = v138;
                sub_140032FF0(&v345);
                v140 = v367;
              }
              LOBYTE(v140) = (v138 == 0) | v140;
              if ( !(_BYTE)v140 )
                sub_140001660(v312, v138, 1);
              nullsub_1(v140, v139);
              v141 = sub_140001650(6, 1);
              if ( !v141 )
                sub_14196B2DB(1, 6);
              *(_WORD *)(v141 + 4) = 26740;
              *(_DWORD *)v141 = 1632658020;
              *(_QWORD *)v340 = 6;
              *(_QWORD *)&v367 = v141;
              *(_QWORD *)&v340[8] = v141;
              *(_QWORD *)&v340[16] = 6;
              *(_QWORD *)v295 = v351;
              *(_QWORD *)&v295[8] = v11;
              *(_QWORD *)&v345 = 0;
              *((_QWORD *)&v345 + 1) = 1;
              *(_QWORD *)v346 = 0;
              *(_QWORD *)v353 = 1610612768;
              *(_QWORD *)&v352 = &v345;
              *((_QWORD *)&v352 + 1) = &off_141A49990;
              if ( (unsigned __int8)sub_1416CE600(v295, &v352, v142) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_59,
                  55,
                  (unsigned int)&v373,
                  (unsigned int)&unk_141A481A8,
                  (__int64)&off_141A4E498);
              v144 = *(_QWORD *)v346;
              v367 = v345;
              if ( *(__int64 *)v346 < 0 )
              {
                v146 = 0;
LABEL_404:
                v359 = 1;
                sub_14196B2DB(v146, v144);
              }
              if ( *(_QWORD *)v346 )
              {
                nullsub_1(*((_QWORD *)&v345 + 1), v143);
                v145 = sub_140001650(v144, 1);
                v146 = 1;
                if ( !v145 )
                  goto LABEL_404;
                v348 = (_DWORD *)v145;
                sub_1419234B0(v145, *((_QWORD *)&v367 + 1), v144);
                v147 = (__int64)v348;
              }
              else
              {
                v147 = 1;
              }
              LOBYTE(v352) = 3;
              *((_QWORD *)&v352 + 1) = v144;
              *(_QWORD *)v353 = v147;
              *(_QWORD *)&v353[8] = v144;
              v359 = 0;
              sub_140A68320(&v345, &v328, v340, &v352);
              if ( (_BYTE)v345 != 0xFF )
                sub_140032FF0(&v345);
              if ( (_QWORD)v367 )
                sub_140001660(*((_QWORD *)&v367 + 1), v367, 1);
              *(_QWORD *)&v334[24] = v329[0];
              *(_OWORD *)&v334[8] = v328;
              v334[0] = 5;
              v148 = v332;
              if ( v332 == v330 )
                sub_1419397B0(&v330);
              v107 = v331;
              v149 = 32 * v148;
              v150 = *(_OWORD *)v334;
              *(_OWORD *)(v331 + v149 + 16) = *(_OWORD *)&v334[16];
              *(_OWORD *)(v107 + v149) = v150;
              v14 = v148 + 1;
              v332 = v14;
              if ( (_QWORD)v338 )
                sub_140001660(*((_QWORD *)&v338 + 1), v338, 1);
              LOBYTE(v14) = 1;
            }
            if ( *(_QWORD *)v322 )
              sub_140001660(*(_QWORD *)&v322[8], *(_QWORD *)v322, 1);
            if ( *(_QWORD *)&v322[48] != -1 && *(_QWORD *)&v322[48] )
              sub_140001660(*(_QWORD *)&v322[56], *(_QWORD *)&v322[48], 1);
            if ( *(_QWORD *)&v322[24] )
              sub_140001660(*(_QWORD *)&v322[32], *(_QWORD *)&v322[24], 1);
            if ( *(_QWORD *)&v322[80] != -1 && *(_QWORD *)&v322[80] )
              sub_140001660(*(_QWORD *)&v322[88], *(_QWORD *)&v322[80], 1);
            LOBYTE(v107) = 1;
            LODWORD(v326) = v107;
            v15 = v307;
            if ( v307 == (__int64 *)v323 )
              goto LABEL_19;
          }
          else
          {
            v19 = *((_QWORD *)&v352 + 1);
LABEL_27:
            sub_140001660(v19, v18, 1);
LABEL_135:
            if ( *(_QWORD *)v322 )
              sub_140001660(*(_QWORD *)&v322[8], *(_QWORD *)v322, 1);
            if ( *(_QWORD *)&v322[48] != -1 && *(_QWORD *)&v322[48] )
              sub_140001660(*(_QWORD *)&v322[56], *(_QWORD *)&v322[48], 1);
            if ( *(_QWORD *)&v322[24] )
              sub_140001660(*(_QWORD *)&v322[32], *(_QWORD *)&v322[24], 1);
            if ( *(_QWORD *)&v322[80] != -1 && *(_QWORD *)&v322[80] )
              sub_140001660(*(_QWORD *)&v322[88], *(_QWORD *)&v322[80], 1);
            v15 = v307;
            if ( v307 == (__int64 *)v323 )
              goto LABEL_19;
          }
        }
        v367 = 0xFFFFFFFFFFFFFFFFuLL;
        ++*(_QWORD *)&v303[16];
        if ( (v326 & 1) != 0 )
          goto LABEL_169;
LABEL_46:
        sub_1416B18A0((unsigned int)v334, v306, v290, (unsigned int)&unk_141A4CBE9, 16);
        LOBYTE(v352) = 1;
        v348 = *(_DWORD **)&v334[8];
        v370 = *(_DWORD **)&v334[16];
        v32 = sub_1416B9760(&v352, *(_QWORD *)&v334[8], *(_QWORD *)&v334[16]);
        v33 = v310;
        if ( v32 )
        {
          v326 = 2;
          v34 = 0;
        }
        else
        {
          LODWORD(v345) = sub_1416B2E50(v31, v30, v310);
          DWORD1(v345) = v95;
          sub_1416B2E00(&v352, &v345, 3577643008LL, 27111902);
          if ( (_BYTE)v352 )
            v96 = 0;
          else
            v96 = *((_QWORD *)&v352 + 1);
          *(_QWORD *)&v304 = v96;
          v101 = sub_1416B1C00(v351, v11);
          if ( v101 )
          {
            sub_1416E2AB0(&v352, v101, v102);
            v103 = *((const char **)&v352 + 1);
            if ( (_BYTE)v352 )
              v103 = aStateSqlite;
            v104 = *(_QWORD *)v353;
            if ( (_BYTE)v352 )
              v104 = 12;
          }
          else
          {
            v104 = 12;
            v103 = aStateSqlite;
          }
          *(_QWORD *)&v338 = v103;
          *((_QWORD *)&v338 + 1) = v104;
          sub_141597890(&v352);
          v328 = v352;
          *(_QWORD *)&v352 = &v304;
          *((_QWORD *)&v352 + 1) = sub_1416EBAE0;
          *(_QWORD *)v353 = &v328;
          *(_QWORD *)&v353[8] = sub_1402230B0;
          *(_QWORD *)&v353[16] = &v338;
          *(_QWORD *)&v353[24] = sub_140191200;
          sub_1416DAFA0(v340, &unk_141A4CC05, &v352);
          v105 = (int)v370;
          v370 = *(_DWORD **)&v340[8];
          sub_1416B18A0((unsigned int)&v345, (_DWORD)v348, v105, *(_DWORD *)&v340[8], *(__int64 *)&v340[16]);
          if ( *(_QWORD *)v340 )
            sub_140001660(v370, *(_QWORD *)v340, 1);
          v370 = *((_DWORD **)&v345 + 1);
          v294 = *(_QWORD *)v346;
          if ( sub_1416C4610(v351, v11) == 1 )
          {
            *(_QWORD *)v295 = v106;
            *(_QWORD *)&v328 = v295;
            *((_QWORD *)&v328 + 1) = sub_1416EA080;
            sub_1416DAFA0(&v352, &unk_141A47C14, &v328);
            v33 = *((_DWORD **)&v352 + 1);
            v32 = v352;
            v294 = *(_QWORD *)v353;
            if ( (v295[0] & 3u) - 2 >= 2 && (v295[0] & 3) != 0 )
            {
              v326 = v352;
              v347 = v14;
              v14 = *((_QWORD *)&v352 + 1);
              *((_QWORD *)&v328 + 1) = *(_QWORD *)v295 - 1LL;
              LOBYTE(v328) = 3;
              sub_1416EBAD0((char *)&v328 + 8);
              v33 = (_DWORD *)v14;
              LODWORD(v14) = v347;
              v32 = v326;
            }
            if ( (_QWORD)v345 )
            {
              v347 = v14;
              v310 = v33;
              v14 = v32;
              sub_140001660(v370, v345, 1);
              v32 = v14;
              v33 = v310;
              LODWORD(v14) = v347;
            }
            v326 = 10;
            v34 = 0;
          }
          else
          {
            v32 = v345;
            v279 = *(_QWORD *)&v346[8];
            v326 = -1;
            LOBYTE(v34) = 1;
            v33 = v370;
          }
        }
        v310 = v33;
        if ( *(_QWORD *)v334 )
        {
          v347 = v14;
          LODWORD(v370) = v34;
          v14 = v32;
          sub_140001660(v348, *(_QWORD *)v334, 1);
          LOBYTE(v34) = (_BYTE)v370;
          v32 = v14;
          v33 = v310;
          LODWORD(v14) = v347;
        }
        if ( !(_BYTE)v34 )
        {
          v263 = (_QWORD *)v325;
          *(_QWORD *)(v325 + 24) = v33;
          v263[4] = v294;
          v263[5] = v279;
          v263[1] = v326;
          v263[2] = v32;
          *v263 = 1;
          goto LABEL_439;
        }
        if ( v32 )
          sub_140001660(v310, v32, 1);
        ++*(_QWORD *)&v303[40];
        goto LABEL_169;
      }
LABEL_19:
      v16 = v323;
      *(_QWORD *)&v12 = v323;
LABEL_229:
      sub_1401B3250(v12, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v16 - v12) >> 3));
      if ( *((_QWORD *)&v12 + 1) )
        sub_140001660(v13, 104LL * *((_QWORD *)&v12 + 1), 8);
      if ( (v14 & 1) != 0 )
        sub_1407E5410(&v313, aMissingRollout, 22);
      sub_140777BC0(&v313);
      v2 = v349;
      v5 = v311;
      v10 = v350;
      v6 = v291;
      if ( v350 )
        goto LABEL_17;
      goto LABEL_2;
    }
    if ( (BYTE8(v352) & 3u) - 2 >= 2 && (BYTE8(v352) & 3) != 0 )
    {
      --*((_QWORD *)&v352 + 1);
      LOBYTE(v352) = 3;
      sub_1416EBAD0((char *)&v352 + 8);
    }
LABEL_4:
    v7 -= 32LL;
    v8 += 4;
    v9 = v4;
    v10 = v350;
    if ( v350 )
    {
      v6 = v291;
LABEL_17:
      sub_140001660(v351, v10, 1);
      goto LABEL_2;
    }
  }
  if ( (__int64 *)v5 != v4 )
  {
    v151 = v7 >> 5;
    do
    {
      v152 = *(v8 - 1);
      if ( v152 )
        sub_140001660(*v8, v152, 1);
      v8 += 4;
      --v151;
    }
    while ( v151 );
  }
LABEL_240:
  if ( (_QWORD)v289 )
    sub_140001660(*((_QWORD *)&v289 + 1), 32 * v289, 8);
  v153 = v325;
  if ( *(_OWORD *)&v303[24] != 0 )
  {
    v154 = v331;
    v155 = v332;
    sub_1416B18A0((unsigned int)&v345, v306, v290, (unsigned int)&unk_141A4C1CA, 22);
    LOBYTE(v352) = 1;
    v156 = *(_DWORD *)v346;
    v350 = *((_QWORD *)&v345 + 1);
    v157 = sub_1416B9760(&v352, *((_QWORD *)&v345 + 1), *(_QWORD *)v346);
    if ( v157 )
    {
      *(_QWORD *)v322 = v157;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v313 = v322;
        *((_QWORD *)&v313 + 1) = sub_1416EA080;
        *(_QWORD *)&v353[32] = 2;
        *(_QWORD *)&v353[40] = aCodexmateLibCo_11;
        *(_QWORD *)&v354 = 51;
        *(_QWORD *)&v355 = &unk_141A4C1E0;
        *((_QWORD *)&v355 + 1) = &v313;
        *(_QWORD *)&v352 = 0;
        *((_QWORD *)&v352 + 1) = aCodexmateLibCo_11;
        *(_OWORD *)v353 = 0x33u;
        *(_QWORD *)&v353[16] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v353[24] = 41;
        *((_QWORD *)&v354 + 1) = 0xF2100000001LL;
        sub_141503E20(&v373, &v352);
        v157 = *(_QWORD *)v322;
      }
      if ( (unsigned int)(v157 & 3) - 2 >= 2 && (v157 & 3) != 0 )
      {
        *((_QWORD *)&v352 + 1) = v157 - 1;
        LOBYTE(v352) = 3;
        sub_1416EBAD0((char *)&v352 + 8);
      }
    }
    else
    {
      LODWORD(v313) = ((__int64 (*)(void))sub_1416B2E50)();
      DWORD1(v313) = v172;
      sub_1416B2E00(&v352, &v313, 3577643008LL, 27111902);
      if ( (_BYTE)v352 )
        v173 = 0;
      else
        v173 = *((_QWORD *)&v352 + 1);
      *(_QWORD *)v322 = v173;
      sub_141597890(&v352);
      v313 = v352;
      *(_QWORD *)&v352 = v322;
      *((_QWORD *)&v352 + 1) = sub_1416EBAE0;
      *(_QWORD *)v353 = &v313;
      *(_QWORD *)&v353[8] = sub_1402230B0;
      sub_1416DAFA0(&v328, &unk_141A4C21F, &v352);
      v351 = *((_QWORD *)&v328 + 1);
      sub_1416B18A0((unsigned int)&v280, v350, v156, DWORD2(v328), v329[0]);
      v175 = v328;
      if ( (_QWORD)v328 )
        sub_140001660(v351, v328, 1);
      *(_QWORD *)v340 = 0;
      *(_QWORD *)&v340[16] = 0;
      nullsub_1(v174, v175);
      v176 = sub_140001650(9, 1);
      if ( !v176 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v176 = 0x4164657461657263LL;
      *(_BYTE *)(v176 + 8) = 116;
      *(_QWORD *)v334 = 9;
      *(_QWORD *)&v334[8] = v176;
      *(_QWORD *)&v334[16] = 9;
      v369 = 1;
      LODWORD(v313) = ((__int64 (*)(void))sub_1416B2E50)();
      DWORD1(v313) = v177;
      v369 = 1;
      sub_1416B2E00(&v352, &v313, 3577643008LL, 27111902);
      if ( (_BYTE)v352 )
        v178 = 0;
      else
        v178 = *((_QWORD *)&v352 + 1);
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = v178;
      v369 = 0;
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v180, v179);
      v181 = (_DWORD *)sub_140001650(7, 1);
      if ( !v181 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v181 + 3) = 1684369006;
      *v181 = 1851876211;
      *(_QWORD *)v334 = 7;
      *(_QWORD *)&v334[8] = v181;
      *(_QWORD *)&v334[16] = 7;
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = *(_QWORD *)&v303[8];
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v183, v182);
      v184 = (_DWORD *)sub_140001650(7, 1);
      if ( !v184 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v184 + 3) = 1735289203;
      *v184 = 1936943469;
      *(_QWORD *)v334 = 7;
      *(_QWORD *)&v334[8] = v184;
      *(_QWORD *)&v334[16] = 7;
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = *(_QWORD *)&v303[16];
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v186, v185);
      v187 = (_QWORD *)sub_140001650(8, 1);
      if ( !v187 )
        sub_14196B2DB(1, 8);
      *v187 = 0x6465726F74736572LL;
      *(_QWORD *)v334 = 8;
      *(_QWORD *)&v334[8] = v187;
      *(_QWORD *)&v334[16] = 8;
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = *(_QWORD *)&v303[24];
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v189, v188);
      v190 = (_QWORD *)sub_140001650(8, 1);
      if ( !v190 )
        sub_14196B2DB(1, 8);
      *v190 = 0x646574616C6F7369LL;
      *(_QWORD *)v334 = 8;
      *(_QWORD *)&v334[8] = v190;
      *(_QWORD *)&v334[16] = 8;
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = *(_QWORD *)&v303[32];
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v192, v191);
      v193 = sub_140001650(9, 1);
      if ( !v193 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v193 = 0x70756B6361426264LL;
      *(_BYTE *)(v193 + 8) = 115;
      *(_QWORD *)v334 = 9;
      *(_QWORD *)&v334[8] = v193;
      *(_QWORD *)&v334[16] = 9;
      LOBYTE(v352) = 2;
      *((_QWORD *)&v352 + 1) = 0;
      *(_QWORD *)v353 = *(_QWORD *)&v303[40];
      sub_140A68320(&v313, v340, v334, &v352);
      if ( (_BYTE)v313 != 0xFF )
        sub_140032FF0(&v313);
      nullsub_1(v195, v194);
      v196 = sub_140001650(6, 1);
      if ( !v196 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v196 + 4) = 29556;
      *(_DWORD *)v196 = 1852143205;
      *(_QWORD *)v334 = 6;
      *(_QWORD *)&v334[8] = v196;
      *(_QWORD *)&v334[16] = 6;
      v372 = 1;
      sub_1407B57E0(&v352, v154, v155);
      if ( (_BYTE)v352 == 0xFF )
      {
        *(_QWORD *)&v313 = *((_QWORD *)&v352 + 1);
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_8,
          43,
          (unsigned int)&v313,
          (unsigned int)&off_141A48108,
          (__int64)&off_141A4C248);
      }
      v314 = *(_OWORD *)v353;
      v313 = v352;
      v372 = 0;
      sub_140A68320(&v352, v340, v334, &v313);
      if ( (_BYTE)v352 != 0xFF )
        sub_140032FF0(&v352);
      *(_OWORD *)&v322[8] = *(_OWORD *)v340;
      *(_QWORD *)&v322[24] = *(_QWORD *)&v340[16];
      v322[0] = 5;
      nullsub_1(v198, v197);
      v199 = sub_140001650(128, 1);
      if ( !v199 )
        sub_14196B2DB(1, 128);
      *(_QWORD *)&v313 = 128;
      *((_QWORD *)&v313 + 1) = v199;
      *(_QWORD *)&v314 = 0;
      *(_QWORD *)&v352 = &v313;
      *((_QWORD *)&v352 + 1) = asc_141A45D28;
      *(_OWORD *)v353 = 2u;
      v353[16] = 0;
      sub_140785760(v322, &v352);
      if ( (_QWORD)v313 == -1 )
      {
        *(_QWORD *)v334 = *((_QWORD *)&v313 + 1);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v313 = v334;
          *((_QWORD *)&v313 + 1) = sub_14166FAD0;
          *(_QWORD *)&v352 = aCodexmateLibCo_11;
          *((_QWORD *)&v352 + 1) = 51;
          *(_QWORD *)v353 = aCodexmateLibCo_11;
          *(_QWORD *)&v353[8] = 51;
          *(_QWORD *)&v353[16] = &off_141A4C2F8;
          sub_140AF72B0(&unk_141A4C2B8, &v313, 2, &v352);
        }
        sub_140032F30(v334);
      }
      else
      {
        v311 = *((_QWORD *)&v313 + 1);
        v351 = v313;
        v200 = sub_1416CC660(v280.m256i_i64[1], v280.m256i_i64[2], *((_QWORD *)&v313 + 1), v314);
        if ( v351 )
          sub_140001660(v311, v351, 1);
        if ( !v200 )
        {
          v201 = v280.m256i_i64[0];
          v352 = *(_OWORD *)&v280.m256i_u64[1];
          *(_QWORD *)v353 = v280.m256i_i64[3];
          v371 = 0;
          sub_140032FF0(v322);
          goto LABEL_308;
        }
        *(_QWORD *)v334 = v200;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v313 = v334;
          *((_QWORD *)&v313 + 1) = sub_1416EA080;
          *(_QWORD *)&v352 = aCodexmateLibCo_11;
          *((_QWORD *)&v352 + 1) = 51;
          *(_QWORD *)v353 = aCodexmateLibCo_11;
          *(_QWORD *)&v353[8] = 51;
          *(_QWORD *)&v353[16] = &off_141A4C2A0;
          sub_140AF72B0(&unk_141A4C260, &v313, 2, &v352);
          v200 = *(_QWORD *)v334;
        }
        if ( (unsigned int)(v200 & 3) - 2 >= 2 && (v200 & 3) != 0 )
        {
          *((_QWORD *)&v352 + 1) = v200 - 1;
          LOBYTE(v352) = 3;
          sub_1416EBAD0((char *)&v352 + 8);
        }
      }
      v371 = 1;
      sub_140032FF0(v322);
      if ( v280.m256i_i64[0] )
        sub_140001660(v280.m256i_i64[1], v280.m256i_i64[0], 1);
    }
    v201 = -1;
LABEL_308:
    if ( (_QWORD)v345 )
      sub_140001660(v350, v345, 1);
    v2 = v349;
    if ( *((_QWORD *)&v301 + 1) != -1 && *((_QWORD *)&v301 + 1) )
      sub_140001660(v302, *((_QWORD *)&v301 + 1), 1);
    *((_QWORD *)&v301 + 1) = v201;
    v302 = v352;
    *(_QWORD *)v303 = *(_QWORD *)v353;
    if ( *(_QWORD *)off_14223FF10 >= 3u )
    {
      *(_QWORD *)&v313 = &v303[8];
      *((_QWORD *)&v313 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v314 = &v303[16];
      *((_QWORD *)&v314 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v315 = &v303[24];
      *((_QWORD *)&v315 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v316 = &v303[32];
      *((_QWORD *)&v316 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v317 = &v303[40];
      *((_QWORD *)&v317 + 1) = sub_1416EBAE0;
      *(_QWORD *)&v353[32] = 3;
      *(_QWORD *)&v353[40] = aCodexmateLibCo_11;
      *(_QWORD *)&v354 = 51;
      *(_QWORD *)&v355 = &unk_141A4C68F;
      *((_QWORD *)&v355 + 1) = &v313;
      *(_QWORD *)&v352 = 0;
      *((_QWORD *)&v352 + 1) = aCodexmateLibCo_11;
      *(_OWORD *)v353 = 0x33u;
      *(_QWORD *)&v353[16] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v353[24] = 41;
      *((_QWORD *)&v354 + 1) = 0x7DE00000001LL;
      sub_141503E20(&v373, &v352);
    }
  }
  sub_14080FF50(&v352, v2);
  if ( *(_QWORD *)&v353[40] | *(_QWORD *)v353 )
  {
    nullsub_1(v203, v202);
    v210 = sub_140001650(24, 8);
    if ( !v210 )
      sub_14196B2C1(8, 24);
    v350 = v210;
    *(_QWORD *)&v313 = &v353[40];
    *((_QWORD *)&v313 + 1) = sub_1416EBAE0;
    sub_1416DAFA0(&v328, &unk_141A4BC84, &v313);
    v211 = (_OWORD *)v350;
    *(_QWORD *)(v350 + 16) = v329[0];
    *v211 = v328;
    *(_QWORD *)&v338 = 1;
    *((_QWORD *)&v338 + 1) = v211;
    *(_QWORD *)&v339[0] = 1;
    if ( (_QWORD)v354 )
    {
      *(_QWORD *)&v313 = &v354;
      *((_QWORD *)&v313 + 1) = sub_1416EBAE0;
      sub_1416DAFA0(v340, &unk_141A4BC8F, &v313);
      v212 = *(_QWORD *)&v339[0];
      if ( *(_QWORD *)&v339[0] == (_QWORD)v338 )
        sub_141939F90(&v338);
      v213 = *((_QWORD *)&v338 + 1);
      v214 = 3 * v212;
      *(_QWORD *)(*((_QWORD *)&v338 + 1) + 8 * v214 + 16) = *(_QWORD *)&v340[16];
      *(_OWORD *)(v213 + 8 * v214) = *(_OWORD *)v340;
      v215 = v212 + 1;
      *(_QWORD *)&v339[0] = v215;
      if ( *((_QWORD *)&v354 + 1) )
      {
LABEL_328:
        *(_QWORD *)&v313 = (char *)&v354 + 8;
        *((_QWORD *)&v313 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(v334, &unk_141A4BC9D, &v313);
        v216 = *(_QWORD *)&v339[0];
        if ( *(_QWORD *)&v339[0] == (_QWORD)v338 )
          sub_141939F90(&v338);
        v217 = *((_QWORD *)&v338 + 1);
        v218 = 3 * v216;
        *(_QWORD *)(*((_QWORD *)&v338 + 1) + 8 * v218 + 16) = *(_QWORD *)&v334[16];
        *(_OWORD *)(v217 + 8 * v218) = *(_OWORD *)v334;
        v215 = v216 + 1;
        *(_QWORD *)&v339[0] = v215;
        v219 = *(_QWORD *)v353;
        if ( !*(_QWORD *)v353 )
        {
LABEL_331:
          v220 = *(_DWORD *)&v353[24];
          if ( !*(_QWORD *)&v353[24] )
          {
LABEL_350:
            sub_1406C5480((unsigned int)&v313, DWORD2(v338), v215, (unsigned int)&unk_141A4B09A, 2);
            *(_QWORD *)&v322[16] = v314;
            *(_OWORD *)v322 = v313;
            v231 = *(_QWORD *)&v339[0];
            if ( *(_QWORD *)&v339[0] )
            {
              v232 = (_QWORD *)(*((_QWORD *)&v338 + 1) + 8LL);
              do
              {
                v233 = *(v232 - 1);
                if ( v233 )
                  sub_140001660(*v232, v233, 1);
                v232 += 3;
                --v231;
              }
              while ( v231 );
            }
            if ( (_QWORD)v338 )
              sub_140001660(*((_QWORD *)&v338 + 1), 24 * v338, 8);
            *(_QWORD *)&v313 = v322;
            *((_QWORD *)&v313 + 1) = sub_1400015F0;
            sub_1416DAFA0(&v264, &unk_141A4C6E8, &v313);
            if ( *(_QWORD *)v322 )
              sub_140001660(*(_QWORD *)&v322[8], *(_QWORD *)v322, 1);
            *(_QWORD *)(v153 + 32) = v265;
            *(_OWORD *)(v153 + 16) = v264;
            *(_QWORD *)(v153 + 8) = 10;
            *(_QWORD *)v153 = 1;
            v234 = *(_QWORD *)v353;
            if ( *(_QWORD *)v353 )
            {
              v235 = (_QWORD *)(*((_QWORD *)&v352 + 1) + 8LL);
              do
              {
                v236 = *(v235 - 1);
                if ( v236 )
                  sub_140001660(*v235, v236, 1);
                v235 += 3;
                --v234;
              }
              while ( v234 );
            }
            if ( (_QWORD)v352 )
              sub_140001660(*((_QWORD *)&v352 + 1), 24 * v352, 8);
            v237 = *(_QWORD *)&v353[24];
            if ( *(_QWORD *)&v353[24] )
            {
              v238 = (_QWORD *)(*(_QWORD *)&v353[16] + 8LL);
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
            if ( *(_QWORD *)&v353[8] )
              sub_140001660(*(_QWORD *)&v353[16], 24LL * *(_QWORD *)&v353[8], 8);
            goto LABEL_373;
          }
LABEL_345:
          sub_1406C5480((unsigned int)&v313, *(_DWORD *)&v353[16], v220, (unsigned int)&unk_141A4B08B, 3);
          *(_QWORD *)&v322[16] = v314;
          *(_OWORD *)v322 = v313;
          *(_QWORD *)&v313 = v322;
          *((_QWORD *)&v313 + 1) = sub_1400015F0;
          sub_1416DAFA0(&v280, &unk_141A4B08E, &v313);
          if ( *(_QWORD *)v322 )
            sub_140001660(*(_QWORD *)&v322[8], *(_QWORD *)v322, 1);
          v228 = *(_QWORD *)&v339[0];
          if ( *(_QWORD *)&v339[0] == (_QWORD)v338 )
            sub_141939F90(&v338);
          v229 = *((_QWORD *)&v338 + 1);
          v230 = 3 * v228;
          *(_QWORD *)(*((_QWORD *)&v338 + 1) + 8 * v230 + 16) = v280.m256i_i64[2];
          *(_OWORD *)(v229 + 8 * v230) = *(_OWORD *)v280.m256i_i8;
          v215 = v228 + 1;
          *(_QWORD *)&v339[0] = v215;
          goto LABEL_350;
        }
LABEL_342:
        *(_QWORD *)v322 = v219;
        *(_QWORD *)&v313 = v322;
        *((_QWORD *)&v313 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v345, &unk_141A4B07C, &v313);
        v225 = *(_QWORD *)&v339[0];
        if ( *(_QWORD *)&v339[0] == (_QWORD)v338 )
          sub_141939F90(&v338);
        v226 = *((_QWORD *)&v338 + 1);
        v227 = 3 * v225;
        *(_QWORD *)(*((_QWORD *)&v338 + 1) + 8 * v227 + 16) = *(_QWORD *)v346;
        *(_OWORD *)(v226 + 8 * v227) = v345;
        v215 = v225 + 1;
        *(_QWORD *)&v339[0] = v215;
        v220 = *(_DWORD *)&v353[24];
        if ( !*(_QWORD *)&v353[24] )
          goto LABEL_350;
        goto LABEL_345;
      }
    }
    else
    {
      LODWORD(v215) = 1;
      if ( *((_QWORD *)&v354 + 1) )
        goto LABEL_328;
    }
    v219 = *(_QWORD *)v353;
    if ( !*(_QWORD *)v353 )
      goto LABEL_331;
    goto LABEL_342;
  }
  *(_OWORD *)(v153 + 88) = *(_OWORD *)&v303[32];
  *(_OWORD *)(v153 + 72) = *(_OWORD *)&v303[16];
  v204 = v300;
  v205 = v301;
  v206 = v302;
  *(_OWORD *)(v153 + 56) = *(_OWORD *)v303;
  *(_OWORD *)(v153 + 40) = v206;
  *(_OWORD *)(v153 + 24) = v205;
  *(_OWORD *)(v153 + 8) = v204;
  *(_QWORD *)v153 = 0;
  if ( (_QWORD)v352 )
    sub_140001660(*((_QWORD *)&v352 + 1), 24 * v352, 8);
  v207 = *(_QWORD *)&v353[24];
  if ( *(_QWORD *)&v353[24] )
  {
    v208 = (_QWORD *)(*(_QWORD *)&v353[16] + 8LL);
    do
    {
      v209 = *(v208 - 1);
      if ( v209 )
        sub_140001660(*v208, v209, 1);
      v208 += 3;
      --v207;
    }
    while ( v207 );
  }
  if ( *(_QWORD *)&v353[8] )
    sub_140001660(*(_QWORD *)&v353[16], 24LL * *(_QWORD *)&v353[8], 8);
  v221 = v331;
  v351 = v332;
  v350 = 0;
  v349 = (__int64 *)v331;
  while ( v351 != v350 )
  {
    ++v350;
    v222 = v221 + 32;
    sub_1401AB4D0();
    v221 = v222;
  }
  if ( v330 )
  {
    v223 = v331;
    v224 = 32 * v330;
    goto LABEL_388;
  }
  return v153;
}
