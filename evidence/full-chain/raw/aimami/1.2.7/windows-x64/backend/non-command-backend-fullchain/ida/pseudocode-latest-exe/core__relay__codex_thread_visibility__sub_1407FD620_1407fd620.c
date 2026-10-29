// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407fd620 | successor of pre-update 0x140255f10 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1407FD620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  __m128i v27; // xmm7
  __int64 v28; // r10
  __int128 *v29; // r11
  __int64 v30; // rbx
  __int64 v31; // r13
  unsigned __int64 v32; // rsi
  __int64 v33; // r15
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __m128i v37; // xmm8
  __m128i v38; // xmm9
  __int64 v39; // r9
  __int64 v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // r13
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  char *v48; // rdi
  __int64 v49; // rcx
  int v50; // eax
  __int128 *v51; // r14
  __int64 v52; // rbx
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rdi
  __int128 v58; // kr40_16
  __m128i v59; // xmm10
  __int64 v60; // rdi
  __int64 v61; // r12
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rsi
  __int128 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // r12
  __int64 v73; // r13
  const __m128i *v74; // rdi
  __m128i si128; // xmm0
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // r14
  __int64 v82; // r12
  __int64 v83; // r13
  const __m128i *v84; // rdi
  __m128i v86; // xmm0
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rsi
  bool v92; // zf
  __int64 v93; // rsi
  __int64 v94; // r12
  __m128i v95; // xmm0
  __m128i v96; // xmm1
  __int64 v97; // rax
  __int64 v98; // rsi
  __int64 v99; // rsi
  __m128i v100; // xmm1
  __int64 v101; // r12
  __m128i v102; // kr30_16
  __int64 v103; // rdi
  __m128i v104; // xmm0
  __m128i v105; // xmm1
  unsigned __int64 v106; // r13
  __int64 v107; // r15
  __int64 v108; // rbx
  unsigned __int64 v109; // rsi
  __int64 v110; // r14
  __int64 v111; // r12
  unsigned __int64 v112; // r15
  unsigned __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rbx
  __int64 v116; // r14
  unsigned __int64 v117; // r8
  __int64 v118; // rsi
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rbx
  unsigned __int64 v127; // rdi
  __int64 v128; // r15
  unsigned __int64 v129; // r14
  unsigned __int64 v130; // rdi
  _QWORD *v131; // r8
  __int64 v132; // rdx
  _QWORD *v133; // rsi
  __int64 v134; // r15
  const __m128i *v135; // rdi
  const __m128i *v136; // r13
  __int64 v137; // rax
  __int64 v138; // rcx
  const __m128i *v139; // rsi
  __m128i v140; // xmm7
  __int64 v141; // rdi
  __int64 v142; // rdx
  char v143; // al
  __int64 v144; // rdi
  unsigned __int64 v145; // r13
  unsigned __int64 v146; // r13
  __int64 *v147; // rdi
  __int64 v148; // rdx
  unsigned __int64 v149; // r12
  __int64 v150; // r13
  unsigned __int64 v151; // rdx
  __m128i v152; // xmm0
  __m128i v153; // xmm1
  __int64 v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r15
  __int64 v159; // rax
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rcx
  unsigned __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // rcx
  const __m128i *v167; // r12
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rdi
  __int64 v172; // r15
  __int64 v173; // rax
  __int64 v174; // r14
  __int64 v175; // rdi
  unsigned __int64 v176; // rax
  __int64 v177; // r15
  __int64 v178; // r12
  __int64 v179; // rdi
  __int64 v180; // r14
  char v181; // al
  __int64 v182; // rbx
  __int64 v183; // rdi
  __int64 v184; // rax
  char v185; // al
  __m128i v186; // xmm0
  __int64 v187; // rdi
  __int64 v188; // rax
  __int64 v189; // rcx
  __m128i v190; // xmm0
  __m128i v191; // xmm1
  __int128 v192; // xmm2
  char v193; // di
  unsigned __int128 v194; // kr60_16
  __int64 v195; // r14
  __int64 v196; // rax
  __m128i v197; // xmm1
  char v198; // di
  __int64 v199; // rsi
  __m128i v200; // xmm0
  __m128i v201; // xmm1
  unsigned __int64 v202; // rdi
  __int64 v203; // rax
  __int64 v204; // rcx
  __m128i v205; // xmm0
  __m128i v206; // xmm1
  __int128 v207; // xmm2
  bool v208; // r15
  __int64 v209; // rdi
  __int64 v210; // r14
  bool v211; // al
  int v212; // eax
  __m128i v213; // xmm0
  __m128i v214; // xmm1
  __int64 *v215; // rdi
  __int64 *v216; // rsi
  __int64 *v217; // r12
  __int64 v218; // r15
  __m128i v219; // xmm1
  __int128 v220; // xmm2
  __int128 v221; // xmm3
  __m128i v222; // xmm0
  __m128i v223; // xmm1
  __int64 v224; // rdi
  __int64 v225; // rdi
  __int64 *v226; // rdi
  __m128i v227; // xmm0
  __m128i v228; // xmm1
  __int128 v229; // xmm2
  __m128i v230; // xmm0
  __m128i v231; // xmm1
  __m128i v232; // xmm2
  __int64 v233; // rdx
  __m128i v234; // xmm1
  __int64 v235; // rdi
  _QWORD *v236; // rsi
  __int64 v237; // rdi
  __int64 v238; // rsi
  __m128i v239; // kr70_16
  __int64 v240; // r13
  __m128i v241; // xmm0
  __m128i v242; // xmm1
  _QWORD *v243; // rdi
  __int64 v244; // rdx
  __int64 v245; // rdi
  unsigned __int64 i; // r12
  unsigned __int64 v247; // rax
  char *v248; // r13
  __int128 v249; // rdi
  __int64 v250; // r15
  __int64 v251; // rax
  __int64 v252; // r14
  char v253; // al
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r14
  __int64 v257; // rax
  char v258; // al
  __int64 v259; // rcx
  int v260; // edx
  int v261; // r8d
  int v262; // r9d
  __m128i v263; // xmm1
  __m128i v264; // xmm0
  __m128i v265; // xmm1
  __int64 v266; // rsi
  _QWORD *v267; // rsi
  __int64 v268; // rdx
  __int64 v269; // rcx
  unsigned __int64 v270; // rdi
  __int64 v271; // rdx
  __int64 v272; // rcx
  __m128i *v273; // rcx
  __int64 v274; // rsi
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // rsi
  __int64 v278; // rsi
  _QWORD *v279; // rax
  __int64 v280; // rsi
  unsigned __int64 v281; // rdi
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rsi
  __int64 v286; // rax
  __int64 v287; // rcx
  __int64 v288; // rsi
  __int64 v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rsi
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rsi
  __int64 v295; // rax
  __int64 v296; // rcx
  __int64 v297; // rsi
  _QWORD *v298; // rdi
  __int64 v299; // rdx
  __m128i *v300; // rcx
  _QWORD *v301; // rbx
  __int64 v302; // rdx
  _QWORD *v303; // rbx
  __int64 v304; // rdx
  __int64 v306; // [rsp+20h] [rbp-60h]
  __int64 v307; // [rsp+28h] [rbp-58h]
  __int64 v308; // [rsp+30h] [rbp-50h]
  int v309; // [rsp+38h] [rbp-48h]
  __m128i v310; // [rsp+40h] [rbp-40h] BYREF
  __m128i v311[5]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v312; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v313; // [rsp+B0h] [rbp+30h]
  __m128i v314; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v315; // [rsp+C8h] [rbp+48h]
  __m128i v316; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v317; // [rsp+E0h] [rbp+60h]
  __m128i v318; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v319; // [rsp+F8h] [rbp+78h]
  __m128i v320; // [rsp+100h] [rbp+80h] BYREF
  __int64 v321; // [rsp+110h] [rbp+90h]
  __m128i v322; // [rsp+118h] [rbp+98h] BYREF
  __int64 v323; // [rsp+128h] [rbp+A8h]
  __m128i v324; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v325; // [rsp+140h] [rbp+C0h]
  __m256i v326; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v327; // [rsp+170h] [rbp+F0h]
  __m128i v328; // [rsp+180h] [rbp+100h] BYREF
  __m256i v329; // [rsp+190h] [rbp+110h]
  __m128i v330; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v331; // [rsp+1C8h] [rbp+148h]
  __int128 *v332; // [rsp+1D0h] [rbp+150h]
  __int64 v333; // [rsp+1D8h] [rbp+158h]
  __m128i v334; // [rsp+1E0h] [rbp+160h]
  __int64 v335; // [rsp+1F0h] [rbp+170h]
  __m128i v336; // [rsp+1F8h] [rbp+178h]
  __int64 v337; // [rsp+208h] [rbp+188h]
  __m128i v338; // [rsp+210h] [rbp+190h]
  __int64 v339; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v340; // [rsp+228h] [rbp+1A8h]
  __m128i v341; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v342; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v343; // [rsp+250h] [rbp+1D0h]
  unsigned __int128 v344; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v345; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v346; // [rsp+280h] [rbp+200h]
  __int128 v347; // [rsp+290h] [rbp+210h]
  __int64 v348; // [rsp+310h] [rbp+290h] BYREF
  __int64 *v349; // [rsp+318h] [rbp+298h]
  __int64 v350; // [rsp+320h] [rbp+2A0h]
  __m128i v351; // [rsp+328h] [rbp+2A8h] BYREF
  unsigned __int64 v352; // [rsp+338h] [rbp+2B8h]
  __int64 *v353; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 *v354; // [rsp+348h] [rbp+2C8h]
  __int64 v355; // [rsp+350h] [rbp+2D0h]
  __int64 *v356; // [rsp+358h] [rbp+2D8h]
  __m128i v357; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v358; // [rsp+370h] [rbp+2F0h]
  __int64 v359; // [rsp+378h] [rbp+2F8h] BYREF
  __int128 v360; // [rsp+380h] [rbp+300h] BYREF
  _BYTE v361[72]; // [rsp+390h] [rbp+310h]
  __int64 v362; // [rsp+3D8h] [rbp+358h]
  __int64 v363; // [rsp+3E0h] [rbp+360h]
  __int64 v364; // [rsp+3E8h] [rbp+368h]
  __m128i v365; // [rsp+3F0h] [rbp+370h] BYREF
  __m128i v366; // [rsp+400h] [rbp+380h] BYREF
  __int128 v367; // [rsp+410h] [rbp+390h]
  __int128 v368; // [rsp+420h] [rbp+3A0h]
  __int128 v369; // [rsp+430h] [rbp+3B0h]
  __int128 v370; // [rsp+440h] [rbp+3C0h]
  _QWORD v371[3]; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v372; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v373; // [rsp+478h] [rbp+3F8h]
  __int128 v374; // [rsp+480h] [rbp+400h] BYREF
  __int64 v375; // [rsp+490h] [rbp+410h]
  __int128 v376; // [rsp+498h] [rbp+418h] BYREF
  __int64 v377; // [rsp+4A8h] [rbp+428h]
  __int128 v378; // [rsp+4B0h] [rbp+430h] BYREF
  __int64 v379; // [rsp+4C0h] [rbp+440h]
  __int64 v380; // [rsp+4C8h] [rbp+448h]
  __m128i v381; // [rsp+4D0h] [rbp+450h] BYREF
  __m128i v382; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v383; // [rsp+4F0h] [rbp+470h]
  __m128i v384; // [rsp+500h] [rbp+480h] BYREF
  __int128 v385; // [rsp+510h] [rbp+490h]
  __int128 v386; // [rsp+520h] [rbp+4A0h]
  __int128 v387; // [rsp+530h] [rbp+4B0h]
  __int128 v388; // [rsp+540h] [rbp+4C0h]
  __int128 v389; // [rsp+550h] [rbp+4D0h]
  __int64 v390; // [rsp+560h] [rbp+4E0h]
  unsigned __int8 v391; // [rsp+568h] [rbp+4E8h]
  _BYTE v392[7]; // [rsp+569h] [rbp+4E9h]
  __m128i v393; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v394; // [rsp+580h] [rbp+500h]
  __m128i v395; // [rsp+590h] [rbp+510h] BYREF
  _BYTE v396[48]; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v397; // [rsp+648h] [rbp+5C8h] BYREF
  __int128 v398; // [rsp+650h] [rbp+5D0h]
  __int64 v399; // [rsp+660h] [rbp+5E0h]
  __int64 v400; // [rsp+668h] [rbp+5E8h]
  unsigned __int64 v401; // [rsp+670h] [rbp+5F0h]
  __m128i v402; // [rsp+678h] [rbp+5F8h] BYREF
  __int64 v403; // [rsp+688h] [rbp+608h]
  __int128 *v404; // [rsp+690h] [rbp+610h] BYREF
  unsigned __int64 v405; // [rsp+698h] [rbp+618h]
  __m128i v406; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v407; // [rsp+6B0h] [rbp+630h]
  __m128i v408; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v409; // [rsp+6C8h] [rbp+648h]
  __m128i v410; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v411; // [rsp+6E0h] [rbp+660h]
  unsigned __int64 v412; // [rsp+6E8h] [rbp+668h]
  unsigned __int64 v413; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v414; // [rsp+6F8h] [rbp+678h] BYREF
  _QWORD v415[3]; // [rsp+708h] [rbp+688h] BYREF
  unsigned __int128 v416; // [rsp+720h] [rbp+6A0h] BYREF
  __m128i v417; // [rsp+730h] [rbp+6B0h] BYREF
  __m256i v418; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v419; // [rsp+760h] [rbp+6E0h]
  __m128i v420[15]; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v421; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v422; // [rsp+870h] [rbp+7F0h]
  unsigned __int64 v423; // [rsp+878h] [rbp+7F8h]
  __m128i v424; // [rsp+880h] [rbp+800h] BYREF
  __int64 v425; // [rsp+890h] [rbp+810h]
  _BYTE v426[112]; // [rsp+8A0h] [rbp+820h] BYREF
  unsigned __int64 v427; // [rsp+910h] [rbp+890h]
  __m128i v428; // [rsp+A48h] [rbp+9C8h] BYREF
  __int64 v429; // [rsp+A58h] [rbp+9D8h]
  __m128i v430; // [rsp+A60h] [rbp+9E0h] BYREF
  __int64 v431; // [rsp+A70h] [rbp+9F0h]
  __int64 v432; // [rsp+A78h] [rbp+9F8h]
  __int64 v433; // [rsp+A80h] [rbp+A00h] BYREF
  __int64 v434; // [rsp+A88h] [rbp+A08h]
  unsigned __int64 v435; // [rsp+A90h] [rbp+A10h]
  __int64 v436; // [rsp+A98h] [rbp+A18h]
  __int64 v437; // [rsp+AA0h] [rbp+A20h]
  __int64 v438; // [rsp+AA8h] [rbp+A28h]
  __int64 v439; // [rsp+AB0h] [rbp+A30h]
  __int64 v440; // [rsp+AB8h] [rbp+A38h]
  __m128i v441; // [rsp+AC0h] [rbp+A40h] BYREF
  __m128i v442; // [rsp+AD0h] [rbp+A50h]
  __int128 v443; // [rsp+AE0h] [rbp+A60h]
  unsigned __int64 v444; // [rsp+AF0h] [rbp+A70h]
  unsigned __int64 v445; // [rsp+AF8h] [rbp+A78h]
  volatile signed __int64 *v446; // [rsp+B00h] [rbp+A80h] BYREF
  __int64 v447; // [rsp+B08h] [rbp+A88h]
  __int64 v448; // [rsp+B10h] [rbp+A90h]
  unsigned __int64 v449; // [rsp+B18h] [rbp+A98h]
  __int64 v450; // [rsp+B20h] [rbp+AA0h]
  char v451; // [rsp+B2Eh] [rbp+AAEh]
  char v452; // [rsp+B2Fh] [rbp+AAFh]
  __int64 v453; // [rsp+B30h] [rbp+AB0h]
  __int64 v454; // [rsp+B38h] [rbp+AB8h]
  char v455; // [rsp+B46h] [rbp+AC6h]
  char v456; // [rsp+B47h] [rbp+AC7h]
  unsigned __int64 v457; // [rsp+B48h] [rbp+AC8h]
  __int64 v458; // [rsp+B58h] [rbp+AD8h]

  v458 = -2;
  v399 = a2;
  v437 = a1;
  v395.m128i_i64[0] = a3;
  v395.m128i_i64[1] = a4;
  if ( a4 != 6
    || (v7 = a3, v8 = *(_DWORD *)a3 ^ 0x6E65706F, (v9 = v8 | *(unsigned __int16 *)(a3 + 4) ^ 0x6961u) != 0)
    && (v10 = *(_DWORD *)a3 ^ 0x616D6961, (v9 = v10 | *(unsigned __int16 *)(a3 + 4) ^ 0x3169u) != 0) )
  {
    *(_QWORD *)&v416 = &v395;
    *((_QWORD *)&v416 + 1) = sub_140191200;
    sub_1416DAFA0(&v426[8], &unk_141A4A9C6, &v416);
    *(_QWORD *)v426 = 10;
    v11 = v437;
    *(_OWORD *)(v437 + 88) = *(_OWORD *)&v426[80];
    v12 = _mm_loadu_si128((const __m128i *)&v426[16]);
    v13 = _mm_loadu_si128((const __m128i *)&v426[32]);
    v14 = *(_OWORD *)&v426[48];
    *(_OWORD *)(v11 + 72) = *(_OWORD *)&v426[64];
    *(_OWORD *)(v11 + 56) = v14;
    *(__m128i *)(v11 + 40) = v13;
    *(__m128i *)(v11 + 24) = v12;
    *(_OWORD *)(v11 + 8) = *(_OWORD *)v426;
    *(_QWORD *)v11 = -1;
    return *(double *)v12.m128i_i64;
  }
  nullsub_1(v9, a2);
  v15 = sub_140001650(6, 1);
  if ( !v15 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v15 + 4) = *(_WORD *)(v7 + 4);
  *(_DWORD *)v15 = *(_DWORD *)v7;
  v371[0] = 6;
  v371[1] = v15;
  v371[2] = 6;
  v381 = 0;
  v382 = 0;
  v383 = 0;
  v372 = 0;
  v373 = 8;
  v374 = 0;
  v375 = 8;
  v376 = 0;
  v377 = 8;
  v378 = 0;
  v379 = 8;
  v380 = 0;
  sub_140A2C460(&v421, v399);
  v16 = v422;
  v362 = v422 + 32 * v423;
  v363 = v7;
  while ( v16 != v362 )
  {
    v436 = v6;
    v17 = *(_QWORD *)(v16 + 8);
    v18 = *(_QWORD *)(v16 + 16);
    v433 = v7;
    v434 = 6;
    sub_1416C49D0(v426, v17, v18);
    if ( *(_DWORD *)v426 == 2 )
    {
      v19 = v426[8] & 3;
      v20 = (unsigned int)(v19 - 2);
      if ( (unsigned int)v20 < 2 || (v426[8] & 3) == 0 )
      {
        v21 = 6;
        v22 = v7;
        goto LABEL_14;
      }
      --*(_QWORD *)&v426[8];
      v426[0] = 3;
      sub_1416EBAD0(&v426[8]);
      v21 = v434;
      if ( v434 < 0 )
      {
        v23 = 0;
        v268 = v364;
      }
      else
      {
        v432 = v16;
        if ( !v434 )
        {
          v26 = 1;
          v25 = 0;
          goto LABEL_16;
        }
        v22 = v433;
        v16 = v432;
LABEL_14:
        nullsub_1(v19, v20);
        v23 = 1;
        v24 = sub_140001650(v21, 1);
        v25 = v21;
        if ( v24 )
        {
          v26 = v24;
          v432 = v16;
          sub_1419234B0(v24, v22, v21);
LABEL_16:
          v443 = 0;
          v442 = 0;
          v441 = 0;
          v27 = 0;
          v28 = 8;
          v450 = 0;
          v444 = 0;
          v29 = nullptr;
          v30 = 8;
          v31 = 0;
          v32 = 0;
          v33 = 8;
          v34 = 0;
          v449 = 0;
          v35 = 8;
          v36 = 0;
          v364 = v26;
          v37 = 0;
          v38 = 0;
          v39 = v25;
          goto LABEL_89;
        }
        v268 = v21;
      }
      sub_14196B2DB(v23, v268);
    }
    sub_1407E1670((__int64)v426, v17, v18);
    v448 = v17;
    v449 = v18;
    v435 = v5;
    v432 = v16;
    v39 = *(_QWORD *)&v426[8];
    v26 = *(_QWORD *)v426;
    v28 = *(_QWORD *)&v426[24];
    v29 = *(__int128 **)&v426[16];
    v31 = *(_QWORD *)&v426[56];
    v30 = *(_QWORD *)&v426[48];
    v33 = *(_QWORD *)&v426[72];
    if ( v426[104] == 0xFF )
    {
      v449 = *(_QWORD *)&v426[88];
      v444 = *(_QWORD *)&v426[40];
      v450 = *(_QWORD *)&v426[32];
      v32 = *(_QWORD *)&v426[64];
      v34 = *(_QWORD *)&v426[80];
LABEL_308:
      v279 = (_QWORD *)v437;
      *(_QWORD *)(v437 + 24) = v29;
      v279[4] = v28;
      v279[5] = v450;
      v279[6] = v444;
      v279[7] = v30;
      v279[8] = v31;
      v279[9] = v32;
      v279[10] = v33;
      v279[11] = v34;
      v279[12] = v449;
      v279[1] = v26;
      v279[2] = v39;
      *v279 = -1;
      v280 = v422;
      v281 = v423;
      if ( !v423 )
      {
LABEL_347:
        if ( v421 )
          sub_140001660(v280, 32 * v421, 8);
        *(double *)v12.m128i_i64 = sub_1407798A0(v371);
        return *(double *)v12.m128i_i64;
      }
LABEL_343:
      v301 = (_QWORD *)(v280 + 8);
      do
      {
        v302 = *(v301 - 1);
        if ( v302 )
          sub_140001660(*v301, v302, 1);
        v301 += 4;
        --v281;
      }
      while ( v281 );
      goto LABEL_347;
    }
    v450 = *(_QWORD *)&v426[80];
    *(_DWORD *)&v392[3] = *(_DWORD *)&v426[108];
    *(_DWORD *)v392 = *(_DWORD *)&v426[105];
    v384 = *(__m128i *)v426;
    v385 = *(_OWORD *)&v426[16];
    v386 = *(_OWORD *)&v426[32];
    v387 = *(_OWORD *)&v426[48];
    v388 = *(_OWORD *)&v426[64];
    v389 = *(_OWORD *)&v426[80];
    v390 = *(_QWORD *)&v426[96];
    v391 = v426[104];
    sub_1407F8DF0((__int64)v426, (__int64)&v384);
    v40 = *(_QWORD *)&v426[8];
    v41 = *(_QWORD *)&v426[24];
    v454 = *(_QWORD *)v426;
    if ( *(_QWORD *)v426 != -1 )
    {
      v42 = *(_QWORD *)&v426[8];
      v453 = *(_QWORD *)&v426[16];
      v27 = _mm_loadu_si128((const __m128i *)&v426[32]);
      v30 = *(_QWORD *)&v426[48];
      v37 = _mm_loadu_si128((const __m128i *)&v426[56]);
      v33 = *(_QWORD *)&v426[72];
      v38 = _mm_loadu_si128((const __m128i *)&v426[80]);
      v25 = -1;
      goto LABEL_87;
    }
    v397 = *(_QWORD *)&v426[8];
    v398 = *(_OWORD *)&v426[16];
    v42 = v434;
    if ( v434 < 0 )
    {
      v269 = 0;
      goto LABEL_294;
    }
    v43 = *(_QWORD *)&v426[24];
    v453 = *(_QWORD *)&v426[16];
    v44 = v433;
    if ( v434 )
    {
      nullsub_1(*(_QWORD *)v426, *(_QWORD *)&v426[24]);
      v45 = sub_140001650(v42, 1);
      if ( !v45 )
      {
        v400 = v42;
        v269 = 1;
LABEL_294:
        sub_14196B2DB(v269, v400);
      }
      v46 = v45;
      sub_1419234B0(v45, v44, v42);
    }
    else
    {
      v46 = 1;
    }
    v402.m128i_i64[0] = v42;
    v402.m128i_i64[1] = v46;
    v403 = v42;
    v413 = v43;
    memset(v415, 0, sizeof(v415));
    v414 = 0;
    v404 = nullptr;
    v405 = 8;
    v406 = 0;
    v407 = 8;
    v408 = 0;
    v409 = 8;
    v410 = 0;
    v411 = 8;
    v412 = 0;
    v400 = v46;
    if ( !v43 )
    {
      v52 = v40;
      v53 = _mm_loadu_si128((const __m128i *)&v413);
      v54 = _mm_loadu_si128((const __m128i *)((char *)&v414 + 8));
      v443 = *(_OWORD *)&v415[1];
      v442 = v54;
      v441 = v53;
      v27 = 0;
      v457 = 8;
      v55 = v453;
      v453 = 0;
      v448 = 8;
      v436 = 8;
      v435 = 0;
      v56 = v46;
      v57 = 8;
      v454 = v56;
      v25 = v42;
      v37 = 0;
      v38 = 0;
      v58 = (unsigned __int64)v55;
      goto LABEL_84;
    }
    v444 = v44;
    v450 = v42;
    v457 = v43;
    v47 = v453;
    v48 = (char *)(v453 + 104 * v43);
    do
    {
      sub_1407DA970(v426, v47);
      v50 = *(_DWORD *)v426;
      if ( *(_QWORD *)v426 != -1 )
      {
        v454 = *(_QWORD *)v426;
        v59 = _mm_loadu_si128((const __m128i *)&v426[8]);
        v457 = *(_QWORD *)&v426[24];
        v27 = _mm_loadu_si128((const __m128i *)&v426[32]);
        v448 = *(_QWORD *)&v426[48];
        v37 = _mm_loadu_si128((const __m128i *)&v426[56]);
        v57 = *(_QWORD *)&v426[72];
        v38 = _mm_loadu_si128((const __m128i *)&v426[80]);
        goto LABEL_83;
      }
      v47 += 104;
    }
    while ( (char *)v47 != v48 );
    LOBYTE(v50) = 1;
    v51 = (__int128 *)v453;
    if ( !a5 )
    {
      if ( v450 == 6 )
      {
        v50 = *(_DWORD *)v444 ^ 0x6E65706F;
        v49 = v50 | *(unsigned __int16 *)(v444 + 4) ^ 0x6961u;
        LOBYTE(v50) = (v50 | *(unsigned __int16 *)(v444 + 4) ^ 0x6961) == 0;
      }
      else
      {
        v50 = 0;
      }
    }
    LODWORD(v445) = v50;
    v60 = v433;
    v61 = v434;
    v62 = v457;
    v447 = v40;
    v454 = v434;
    if ( v457 < 8 )
      goto LABEL_73;
    v63 = sub_1416AE140(v49);
    v68 = v63;
    v438 = v60;
    if ( *(_BYTE *)(v63 + 16) == 1 )
    {
      v69 = *(_OWORD *)v63;
    }
    else
    {
      *(_QWORD *)&v69 = sub_1416C5230(v65, v64, v66, v67);
      *(_OWORD *)v68 = v69;
      *(_BYTE *)(v68 + 16) = 1;
    }
    v51 = (__int128 *)v453;
    v61 = v454;
    *(_QWORD *)v68 = v69 + 1;
    *(_OWORD *)&v426[16] = xmmword_141A46B20;
    *(__m128i *)v426 = _mm_loadu_si128((const __m128i *)&off_141A46B10);
    *(_OWORD *)&v426[32] = v69;
    v70 = 0;
    do
    {
      if ( *(_QWORD *)((char *)v51 + v70 + 48) != -1 )
      {
        sub_1407D9200(&v416, *(_QWORD *)((char *)v51 + v70 + 56), *(_QWORD *)((char *)v51 + v70 + 64));
        if ( (unsigned __int8)sub_14086D5C0(v426, &v416) )
        {
          v71 = *(_QWORD *)&v426[8];
          if ( *(_QWORD *)&v426[8] )
          {
            v72 = *(_QWORD *)&v426[24];
            if ( *(_QWORD *)&v426[24] )
            {
              v73 = *(_QWORD *)v426;
              v74 = (const __m128i *)(*(_QWORD *)v426 + 16LL);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v426));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    si128 = _mm_load_si128(v74);
                    v73 -= 512;
                    ++v74;
                    _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   ecx, r15d }
                v78 = v73 - (unsigned int)(32 * _ECX);
                v79 = *(_QWORD *)(v78 - 32);
                if ( v79 )
                  sub_140001660(*(_QWORD *)(v78 - 24), v79, 1);
                --v72;
                _R15D &= _R15D - 1;
              }
              while ( v72 );
            }
            v97 = 32 * v71;
            v98 = 33 * v71;
            v92 = v98 == -49;
            v99 = v98 + 49;
            v40 = v447;
            v51 = (__int128 *)v453;
            v61 = v454;
            if ( !v92 )
              sub_140001660(*(_QWORD *)v426 - v97 - 32, v99, 16);
          }
          v62 = v457;
          v60 = v438;
LABEL_73:
          sub_1407EF070((__int64)v426, (__int64)v51, v62, v60, v61);
          v416 = *(_OWORD *)v426;
          v417.m128i_i64[0] = *(_QWORD *)&v426[16];
          if ( *(_QWORD *)&v426[24] == -1 )
          {
            v324 = _mm_load_si128((const __m128i *)&v416);
            v325 = v417.m128i_i64[0];
            LOBYTE(v308) = v445;
            sub_1407F69E0((__int64)&v357, (__int128 *)v453, v457, v60, v454, &v324);
            goto LABEL_76;
          }
          *(_QWORD *)&v361[64] = v427;
          *(_OWORD *)&v361[48] = *(_OWORD *)&v426[96];
          v100 = _mm_loadu_si128((const __m128i *)&v426[48]);
          *(_OWORD *)&v361[32] = *(_OWORD *)&v426[80];
          *(_OWORD *)&v361[16] = *(_OWORD *)&v426[64];
          *(__m128i *)v361 = v100;
          v360 = *(_OWORD *)&v426[32];
          v357 = _mm_load_si128((const __m128i *)&v416);
          v358 = v417.m128i_i64[0];
          v359 = *(_QWORD *)&v426[24];
LABEL_77:
          v101 = v40;
          v102 = v357;
          v103 = v358;
          v420[0] = *(__m128i *)&v361[56];
          v419 = *(_OWORD *)&v361[40];
          v104 = _mm_loadu_si128((const __m128i *)&v359);
          v105 = _mm_loadu_si128((const __m128i *)((char *)&v360 + 8));
          v418 = *(__m256i *)&v361[8];
          v417 = v105;
          v416 = (unsigned __int128)v104;
          sub_1407F2190(v426, v357.m128i_i64[1], v358, &v416);
          v454 = *(_QWORD *)v426;
          v59 = _mm_loadu_si128((const __m128i *)&v426[8]);
          v106 = *(_QWORD *)&v426[24];
          v27 = _mm_loadu_si128((const __m128i *)&v426[32]);
          v448 = *(_QWORD *)&v426[48];
          v37 = _mm_loadu_si128((const __m128i *)&v426[56]);
          v107 = *(_QWORD *)&v426[72];
          v38 = _mm_loadu_si128((const __m128i *)&v426[80]);
          if ( v103 )
          {
            v108 = v102.m128i_i64[1];
            do
            {
              sub_1401B1470(v108);
              v108 += 176;
              --v103;
            }
            while ( v103 );
          }
          if ( v102.m128i_i64[0] )
            sub_140001660(v102.m128i_i64[1], 176 * v102.m128i_i64[0], 8);
          v457 = v106;
          v57 = v107;
          v40 = v101;
LABEL_83:
          v52 = v40;
          sub_1407798A0(&v402);
          v58 = v398;
          v42 = v59.m128i_i64[0];
          v453 = _mm_shuffle_epi32(v59, 238).m128i_u64[0];
          v25 = -1;
LABEL_84:
          v33 = v57;
          sub_1401B3250(v58, *((__int64 *)&v58 + 1));
          if ( v52 )
            sub_140001660(v58, 104 * v52, 8);
          v30 = v448;
          v41 = v457;
LABEL_87:
          v457 = v41;
          v447 = v42;
          sub_140777BC0(&v384);
          v109 = v435;
          goto LABEL_88;
        }
      }
      v70 += 104;
    }
    while ( 104 * v43 != v70 );
    v80 = *(_QWORD *)&v426[8];
    v81 = v438;
    if ( *(_QWORD *)&v426[8] )
    {
      v82 = *(_QWORD *)&v426[24];
      if ( *(_QWORD *)&v426[24] )
      {
        v83 = *(_QWORD *)v426;
        v84 = (const __m128i *)(*(_QWORD *)v426 + 16LL);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v426));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v86 = _mm_load_si128(v84);
              v83 -= 512;
              ++v84;
              _R15D = _mm_movemask_epi8(v86) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v88 = v83 - (unsigned int)(32 * _ECX);
          v89 = *(_QWORD *)(v88 - 32);
          if ( v89 )
            sub_140001660(*(_QWORD *)(v88 - 24), v89, 1);
          --v82;
          _R15D &= _R15D - 1;
        }
        while ( v82 );
      }
      v90 = 32 * v80;
      v91 = 33 * v80;
      v92 = v91 == -49;
      v93 = v91 + 49;
      v40 = v447;
      if ( !v92 )
        sub_140001660(*(_QWORD *)v426 - v90 - 32, v93, 16);
    }
    *(_QWORD *)v426 = 0;
    *(_OWORD *)&v426[16] = 4u;
    *(_QWORD *)&v426[40] = 1;
    *(_QWORD *)&v426[48] = &unk_141A049D8;
    *(_QWORD *)&v426[56] = 0;
    *(_QWORD *)&v426[72] = 0;
    *(_WORD *)&v426[88] = 0;
    sub_140199620(&v416, v426);
    if ( (_QWORD)v416 != -1 )
    {
      v344 = v416;
      *(_QWORD *)v426 = 0;
      *(_QWORD *)&v426[8] = 8;
      *(_QWORD *)&v426[16] = 0;
      *(_QWORD *)&v416 = &v344;
      *((_QWORD *)&v416 + 1) = sub_1411ED6B0;
      sub_1416DAFA0(&v312, &unk_141A4BCAE, &v416);
      v395 = v312;
      *(_QWORD *)v396 = v313;
      v424 = _mm_loadu_si128((const __m128i *)v426);
      v425 = *(_QWORD *)&v426[16];
      if ( (unsigned int)v344 >= 2 && (BYTE8(v344) & 3u) - 2 >= 2 && (BYTE8(v344) & 3) != 0 )
      {
        *(_QWORD *)&v426[8] = *((_QWORD *)&v344 + 1) - 1LL;
        v426[0] = 3;
        sub_1416EBAD0(&v426[8]);
      }
      v94 = 10;
      goto LABEL_69;
    }
    v446 = *((volatile signed __int64 **)&v416 + 1);
    *(_QWORD *)v426 = v453;
    *(_QWORD *)&v426[8] = v457;
    *(_QWORD *)&v426[16] = v81;
    *(_QWORD *)&v426[24] = v454;
    sub_14019AAB0(&v348, *((_QWORD *)&v416 + 1) + 128LL, v426);
    v158 = v350;
    if ( v350 )
    {
      nullsub_1(v157, v156);
      v159 = sub_140001650(424 * v158, 8);
      if ( !v159 )
      {
        v452 = 1;
        sub_14196B2DB(8, 424 * v158);
      }
    }
    else
    {
      v159 = 8;
    }
    v430.m128i_i64[0] = v158;
    v430.m128i_i64[1] = v159;
    v431 = 0;
    v428.m128i_i64[0] = 0;
    v428.m128i_i64[1] = 8;
    v429 = 0;
    v326.m256i_i64[0] = -1;
    v215 = v349;
    v216 = &v349[53 * v158];
    v353 = v349;
    v354 = v349;
    v355 = v348;
    v356 = v216;
    while ( v215 != v216 )
    {
      v217 = v215 + 53;
      v354 = v215 + 53;
      v218 = *v215;
      if ( *v215 == -2 )
        break;
      v219 = *(__m128i *)(v215 + 3);
      v220 = *(_OWORD *)(v215 + 5);
      v221 = *(_OWORD *)(v215 + 7);
      v365 = *(__m128i *)(v215 + 1);
      v366 = v219;
      v367 = v220;
      v368 = v221;
      v369 = *(_OWORD *)(v215 + 9);
      v370 = *(_OWORD *)(v215 + 11);
      sub_1419234B0(&v416, v215 + 13, 320);
      if ( v218 == -1 )
      {
        v226 = v215 + 1;
        *(_OWORD *)&v426[80] = *((_OWORD *)v226 + 5);
        *(_OWORD *)&v426[64] = *((_OWORD *)v226 + 4);
        v227 = _mm_loadu_si128((const __m128i *)v226);
        v228 = _mm_loadu_si128((const __m128i *)v226 + 1);
        v229 = *((_OWORD *)v226 + 2);
        *(_OWORD *)&v426[48] = *((_OWORD *)v226 + 3);
        *(_OWORD *)&v426[32] = v229;
        *(__m128i *)&v426[16] = v228;
        *(__m128i *)v426 = v227;
        if ( v326.m256i_i32[0] == -1 )
        {
          v329 = *(__m256i *)((_BYTE *)v226 + 2);
          v230 = _mm_loadu_si128((const __m128i *)v226);
          v231 = _mm_loadu_si128((const __m128i *)v226 + 1);
          v232 = *((__m128i *)v226 + 2);
          v328 = *((__m128i *)v226 + 3);
          v327 = v232;
          *(__m128i *)&v326.m256i_u64[2] = v231;
          *(__m128i *)v326.m256i_i8 = v230;
        }
        else
        {
          sub_140778C60(v426);
        }
        v215 = v217;
      }
      else
      {
        *(_QWORD *)v426 = v218;
        *(_OWORD *)&v426[88] = v370;
        *(_OWORD *)&v426[72] = v369;
        v222 = _mm_load_si128(&v365);
        v223 = _mm_load_si128(&v366);
        *(_OWORD *)&v426[56] = v368;
        *(_OWORD *)&v426[40] = v367;
        *(__m128i *)&v426[24] = v223;
        *(__m128i *)&v426[8] = v222;
        sub_1419234B0(&v426[104], &v416, 320);
        if ( *(_QWORD *)&v426[24] != -1 )
        {
          v456 = 1;
          sub_14083E5B0((__int64)&v395, (__int64)&v426[24]);
          sub_1419234B0(&v344, &v395, 176);
          v224 = v429;
          if ( v429 == v428.m128i_i64[0] )
            sub_14193A230(v428.m128i_i64);
          sub_1419234B0(v428.m128i_i64[1] + 176 * v224, &v344, 176);
          v429 = v224 + 1;
        }
        v225 = v431;
        if ( v431 == v430.m128i_i64[0] )
          sub_141939AC0(&v430);
        sub_1419234B0(v430.m128i_i64[1] + 424 * v225, v426, 424);
        v431 = v225 + 1;
        v215 = v217;
      }
    }
    sub_140232060(&v353);
    v94 = v326.m256i_i64[0];
    v40 = v447;
    if ( v326.m256i_i64[0] == -1 )
    {
      v425 = v431;
      v424 = _mm_loadu_si128(&v430);
      v237 = v429;
      if ( v429 )
      {
        v238 = v428.m128i_i64[1];
        do
        {
          sub_1401B1470(v238);
          v238 += 176;
          --v237;
        }
        while ( v237 );
      }
      if ( v428.m128i_i64[0] )
        sub_140001660(v428.m128i_i64[1], 176 * v428.m128i_i64[0], 8);
      sub_1411EE6A0(&v446, v233);
      if ( !_InterlockedDecrement64(v446) )
        sub_1411ED250(&v446);
      v239 = v424;
      v240 = v425;
      LOBYTE(v309) = v445;
      v308 = v454;
      v307 = v81;
      v306 = v425;
      sub_1407F2550((__int64)&v310, (__int128 *)v453, v457);
      if ( v310.m128i_i32[0] == -1 )
      {
        v358 = v425;
        v357 = _mm_load_si128(&v424);
        v359 = -1;
      }
      else
      {
        v451 = 1;
        sub_140213580(&v416, v239.m128i_i64[1], v239.m128i_i64[1] + 424 * v240);
        *(__m128i *)&v426[80] = v311[4];
        *(__m128i *)&v426[64] = v311[3];
        v241 = _mm_loadu_si128(&v310);
        v242 = _mm_loadu_si128(v311);
        *(__m128i *)&v426[48] = v311[2];
        *(__m128i *)&v426[32] = v311[1];
        *(__m128i *)&v426[16] = v242;
        *(__m128i *)v426 = v241;
        v451 = 0;
        sub_1407F11F0((__int64)&v357, v453, v457, v81, v454, &v416, (__int64)v426, v445);
        if ( v240 )
        {
          v243 = (_QWORD *)v239.m128i_i64[1];
          do
          {
            sub_1401B1290(v243);
            v243 += 53;
            --v240;
          }
          while ( v240 );
        }
        if ( v239.m128i_i64[0] )
          sub_140001660(v239.m128i_i64[1], 424 * v239.m128i_i64[0], 8);
      }
    }
    else
    {
      *(_QWORD *)v396 = v326.m256i_i64[3];
      v395 = *(__m128i *)&v326.m256i_u64[1];
      v234 = _mm_loadu_si128(&v328);
      v416 = (unsigned __int128)v327;
      v417 = v234;
      v418 = v329;
      v424 = _mm_loadu_si128(&v428);
      v425 = v429;
      v235 = v431;
      if ( v431 )
      {
        v236 = (_QWORD *)v430.m128i_i64[1];
        do
        {
          sub_1401B1290(v236);
          v236 += 53;
          --v235;
        }
        while ( v235 );
      }
      if ( v430.m128i_i64[0] )
        sub_140001660(v430.m128i_i64[1], 424 * v430.m128i_i64[0], 8);
      sub_1411EE6A0(&v446, v233);
      if ( !_InterlockedDecrement64(v446) )
        sub_1411ED250(&v446);
LABEL_69:
      *(_QWORD *)v426 = v94;
      *(_QWORD *)&v426[24] = *(_QWORD *)v396;
      *(__m128i *)&v426[8] = v395;
      v95 = _mm_load_si128((const __m128i *)&v416);
      v96 = _mm_load_si128(&v417);
      *(__m256i *)&v426[64] = v418;
      *(__m128i *)&v426[48] = v96;
      *(__m128i *)&v426[32] = v95;
      sub_1407F11F0((__int64)&v357, v453, v457, v81, v454, &v424, (__int64)v426, v445);
    }
LABEL_76:
    if ( v359 != -1 )
      goto LABEL_77;
    v149 = v358;
    v394 = v358;
    v393 = _mm_load_si128(&v357);
    v453 = v393.m128i_i64[1];
    sub_140213580(&v365, v393.m128i_i64[1], v393.m128i_i64[1] + 424 * v358);
    v150 = v366.m128i_i64[0];
    v415[1] = v366.m128i_i64[0];
    sub_141431530(v426, &v384, *(&off_141A4EEB8 + (unsigned int)v391), qword_141A4EED0[v391]);
    if ( *(_QWORD *)v426 != -1 )
    {
      v152 = _mm_loadu_si128((const __m128i *)&v426[17]);
      v153 = _mm_loadu_si128((const __m128i *)&v426[33]);
      *(_OWORD *)&v396[32] = *(_OWORD *)&v426[48];
      *(__m128i *)&v396[17] = v153;
      *(__m128i *)&v396[1] = v152;
      v395 = *(__m128i *)v426;
      v396[0] = v426[16];
      v154 = v365.m128i_i64[1];
      *(_QWORD *)&v416 = &v395;
      *((_QWORD *)&v416 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v320, &unk_141A4A7E2, &v416);
      *(_QWORD *)&v426[24] = v321;
      *(__m128i *)&v426[8] = _mm_loadu_si128(&v320);
      *(_QWORD *)v426 = 10;
      sub_1407F2190(&v416, v154, v150, v426);
      v454 = v416;
      v59 = _mm_loadu_si128((const __m128i *)((char *)&v416 + 8));
      v457 = v417.m128i_u64[1];
      v27 = _mm_loadu_si128((const __m128i *)&v418);
      v448 = v418.m256i_i64[2];
      v37 = _mm_loadu_si128((const __m128i *)&v418.m256i_u64[3]);
      v155 = *((_QWORD *)&v419 + 1);
      v38 = _mm_loadu_si128(v420);
      sub_1407785F0(&v395);
LABEL_279:
      if ( v150 )
      {
        v266 = v154;
        do
        {
          sub_1401B1470(v266);
          v266 += 176;
          --v150;
        }
        while ( v150 );
      }
      if ( v365.m128i_i64[0] )
      {
        sub_140001660(v154, 176 * v365.m128i_i64[0], 8);
        v453 = v393.m128i_i64[1];
        v149 = v394;
      }
      if ( v149 )
      {
        v267 = (_QWORD *)v453;
        do
        {
          sub_1401B1290(v267);
          v267 += 53;
          --v149;
        }
        while ( v149 );
      }
      v57 = v155;
      if ( v393.m128i_i64[0] )
        sub_140001660(v453, 424 * v393.m128i_i64[0], 8);
      goto LABEL_83;
    }
    v160 = *((_QWORD *)&v398 + 1);
    v454 = v398;
    v401 = v149;
    if ( v149 < *((_QWORD *)&v398 + 1) )
      v160 = v149;
    v445 = v160;
    v161 = 0;
    while ( 1 )
    {
      v164 = v161;
      if ( v161 >= v445 )
        break;
      ++v161;
      v165 = v454 + 104 * v164;
      v166 = v453;
      v167 = (const __m128i *)(v453 + 424 * v164);
      v168 = v167[22].m128i_i64[0];
      if ( v168 == -2 )
      {
        v457 = v164 + 1;
        v438 = v164;
        ++v415[2];
        *(_QWORD *)&v416 = (char *)v167 + 360;
        if ( v406.m128i_i64[0] < 3uLL )
        {
          *(_QWORD *)v426 = v454 + 104 * v164;
          *(_QWORD *)&v426[8] = sub_1400015F0;
          *(_QWORD *)&v426[16] = &v416;
          *(_QWORD *)&v426[24] = sub_14021E5E0;
          sub_1416DAFA0(&v351, &unk_141A46156, v426);
          v175 = v406.m128i_i64[0];
          if ( (__int128 *)v406.m128i_i64[0] == v404 )
            sub_141939F90(&v404);
          v176 = v405;
          v166 = 3 * v175;
          v151 = v352;
          *(_QWORD *)(v405 + 8 * v166 + 16) = v352;
          *(__m128i *)(v176 + 8 * v166) = _mm_loadu_si128(&v351);
          v406.m128i_i64[0] = v175 + 1;
        }
        if ( *(_QWORD *)(v165 + 48) != -1 )
        {
          v177 = v407;
          v178 = v407 + 32 * v408.m128i_i64[0];
          v179 = *(_QWORD *)(v165 + 56);
          v180 = *(_QWORD *)(v165 + 64);
          while ( v177 != v178 )
          {
            v181 = sub_140222930(*(_QWORD *)(v177 + 8), *(_QWORD *)(v177 + 16), v179, v180);
            v177 += 32;
            if ( v181 )
              goto LABEL_146;
          }
          v440 = *(_QWORD *)(v165 + 64);
          v182 = v440;
          if ( v440 )
          {
            v183 = *(_QWORD *)(v165 + 56);
            nullsub_1(v166, v151);
            v184 = sub_140001650(v182, 1);
            if ( !v184 )
              sub_14196B2DB(1, v182);
            v439 = v184;
            sub_1419234B0(v184, v183, v182);
          }
          else
          {
            v439 = 1;
          }
          v198 = *(_BYTE *)(v165 + 72);
          v199 = v408.m128i_i64[0];
          if ( v408.m128i_i64[0] == v406.m128i_i64[1] )
            sub_1419397B0(&v406.m128i_u64[1]);
          v162 = v407;
          v163 = 32 * v199;
          v151 = v440;
          *(_QWORD *)(v407 + v163) = v440;
          *(_QWORD *)(v162 + v163 + 8) = v439;
          *(_QWORD *)(v162 + v163 + 16) = v151;
          *(_BYTE *)(v162 + v163 + 24) = v198;
          v408.m128i_i64[0] = v199 + 1;
        }
        goto LABEL_146;
      }
      if ( (v168 == -1 || (unsigned __int8)sub_1407DF9B0(v167[22].m128i_i64[1], v167[23].m128i_i64[0]))
        && (v167[23].m128i_i64[1] == -1 || (unsigned __int8)sub_1407DF9B0(v167[24].m128i_i64[0], v167[24].m128i_i64[1]))
        && (v167[25].m128i_i64[0] == -1 || (unsigned __int8)sub_1407DF9B0(v167[25].m128i_i64[1], v167[26].m128i_i64[0])) )
      {
        v438 = v164;
        if ( v167[16].m128i_i64[1] != -1 )
        {
          sub_1416DB410(&v416, &v167[16].m128i_u64[1]);
          v171 = v167[19].m128i_i64[0];
          if ( v171 )
          {
            v172 = v167[18].m128i_i64[1];
            nullsub_1(v170, v169);
            v173 = sub_140001650(v171, 1);
            if ( !v173 )
              sub_14196B2DB(1, v171);
            v174 = v173;
            sub_1419234B0(v173, v172, v171);
          }
          else
          {
            v174 = 1;
          }
          v185 = v167[19].m128i_i8[8];
          *(_QWORD *)&v426[24] = v171;
          *(_QWORD *)&v426[32] = v174;
          *(_QWORD *)&v426[40] = v171;
          v186 = v167[20];
          *(__m128i *)&v426[72] = _mm_loadu_si128(v167 + 21);
          *(__m128i *)&v426[56] = v186;
          *(_QWORD *)&v426[16] = v417.m128i_i64[0];
          *(__m128i *)v426 = _mm_loadu_si128((const __m128i *)&v416);
          v426[48] = v185;
          v187 = v410.m128i_i64[0];
          if ( v410.m128i_i64[0] == v408.m128i_i64[1] )
            sub_14193A150(&v408.m128i_u64[1]);
          v188 = v409;
          v189 = 88 * v187;
          v151 = *(_QWORD *)&v426[80];
          *(_QWORD *)(v409 + v189 + 80) = *(_QWORD *)&v426[80];
          *(_OWORD *)(v188 + v189 + 64) = *(_OWORD *)&v426[64];
          v190 = _mm_load_si128((const __m128i *)v426);
          v191 = _mm_load_si128((const __m128i *)&v426[16]);
          v192 = *(_OWORD *)&v426[32];
          *(_OWORD *)(v188 + v189 + 48) = *(_OWORD *)&v426[48];
          *(_OWORD *)(v188 + v189 + 32) = v192;
          *(__m128i *)(v188 + v189 + 16) = v191;
          *(__m128i *)(v188 + v189) = v190;
          v410.m128i_i64[0] = v187 + 1;
        }
        v457 = v161;
        if ( v450 == 6 )
        {
          v151 = v444;
          if ( !(*(_DWORD *)v444 ^ 0x6E65706F | *(unsigned __int16 *)(v444 + 4) ^ 0x6961)
            && *(_QWORD *)(v165 + 48) != -1 )
          {
            sub_1416DB410(&v344, v165);
            sub_14022C3D0(&v416, v165 + 48);
            v193 = *(_BYTE *)(v165 + 72);
            v194 = v416;
            v195 = v417.m128i_i64[0];
            if ( v167[12].m128i_i64[1] == -1 )
            {
              v196 = -1;
            }
            else
            {
              v439 = *((_QWORD *)&v416 + 1);
              v440 = v416;
              sub_14083F2A0(&v416, &v167[12].m128i_u64[1]);
              v196 = v416;
              v197 = _mm_loadu_si128((const __m128i *)&v417.m128i_u64[1]);
              v395 = _mm_loadu_si128((const __m128i *)((char *)&v416 + 8));
              *(__m128i *)v396 = v197;
              *(_OWORD *)&v396[16] = *(_OWORD *)&v418.m256i_u64[1];
              *(_QWORD *)&v396[32] = v418.m256i_i64[3];
              v194 = __PAIR128__(v439, v440);
            }
            *(_QWORD *)&v426[16] = v345.m128i_i64[0];
            *(_OWORD *)v426 = v344;
            *(_OWORD *)&v426[24] = v194;
            *(_QWORD *)&v426[40] = v195;
            v426[48] = v193;
            *(_QWORD *)&v426[56] = v196;
            v427 = *(_QWORD *)&v396[32];
            v200 = _mm_load_si128(&v395);
            v201 = _mm_load_si128((const __m128i *)v396);
            *(_OWORD *)&v426[96] = *(_OWORD *)&v396[16];
            *(__m128i *)&v426[80] = v201;
            *(__m128i *)&v426[64] = v200;
            v202 = v412;
            if ( v412 == v410.m128i_i64[1] )
              sub_14193A1C0(&v410.m128i_u64[1]);
            v203 = v411;
            v204 = 120 * v202;
            v151 = v427;
            *(_QWORD *)(v411 + v204 + 112) = v427;
            *(_OWORD *)(v203 + v204 + 96) = *(_OWORD *)&v426[96];
            *(_OWORD *)(v203 + v204 + 80) = *(_OWORD *)&v426[80];
            *(_OWORD *)(v203 + v204 + 64) = *(_OWORD *)&v426[64];
            v205 = _mm_load_si128((const __m128i *)v426);
            v206 = _mm_load_si128((const __m128i *)&v426[16]);
            v207 = *(_OWORD *)&v426[32];
            *(_OWORD *)(v203 + v204 + 48) = *(_OWORD *)&v426[48];
            *(_OWORD *)(v203 + v204 + 32) = v207;
            *(__m128i *)(v203 + v204 + 16) = v206;
            *(__m128i *)(v203 + v204) = v205;
            v412 = v202 + 1;
          }
        }
        v208 = 1;
        if ( *(_QWORD *)(v165 + 40) == v450 )
          v208 = (unsigned int)sub_141923B40(*(_QWORD *)(v165 + 32), v444, v450) != 0;
        v209 = v433;
        v210 = v434;
        if ( v167[22].m128i_i64[0] != -1
          && (v167[23].m128i_i64[0] != v434 || (unsigned int)sub_141923B40(v167[22].m128i_i64[1], v433, v434))
          || v167[23].m128i_i64[1] != -1
          && (v167[24].m128i_i64[1] != v210 || (unsigned int)sub_141923B40(v167[24].m128i_i64[0], v209, v210)) )
        {
          goto LABEL_198;
        }
        if ( v167[25].m128i_i64[0] == -1 )
        {
          if ( v208 )
            goto LABEL_200;
          goto LABEL_204;
        }
        if ( v167[26].m128i_i64[0] == v210 )
        {
          v211 = (unsigned int)sub_141923B40(v167[25].m128i_i64[1], v209, v210) == 0;
          goto LABEL_199;
        }
LABEL_198:
        v211 = 0;
LABEL_199:
        if ( v208 )
        {
LABEL_200:
          v357.m128i_i64[0] = v165;
          v357.m128i_i64[1] = (__int64)&off_141A4A730;
          v358 = (__int64)&v433;
          v359 = (__int64)&unk_141A454D8;
          sub_140772660((unsigned int)&v344, (unsigned int)&v384, (unsigned int)aUpdateThreadsS, 52, (__int64)&v357, 2);
          if ( (_QWORD)v344 != -1 )
          {
            v264 = _mm_loadu_si128((const __m128i *)&v344);
            v265 = _mm_loadu_si128(&v345);
            *(_OWORD *)&v396[32] = v347;
            *(_OWORD *)&v396[16] = v346;
            *(__m128i *)v396 = v265;
            v395 = v264;
            v154 = v365.m128i_i64[1];
            *(_QWORD *)&v416 = v165;
            *((_QWORD *)&v416 + 1) = sub_1400015F0;
            v417.m128i_i64[0] = (__int64)&v395;
            v417.m128i_i64[1] = (__int64)sub_14142D4D0;
            sub_1416DAFA0(&v318, &unk_141A4A7B6, &v416);
            *(_QWORD *)&v426[24] = v319;
            *(__m128i *)&v426[8] = _mm_loadu_si128(&v318);
            *(_QWORD *)v426 = 10;
            sub_1407F2190(&v416, v154, v150, v426);
            v454 = v416;
            v59 = _mm_loadu_si128((const __m128i *)((char *)&v416 + 8));
            v457 = v417.m128i_u64[1];
            v27 = _mm_loadu_si128((const __m128i *)&v418);
            v448 = v418.m256i_i64[2];
            v37 = _mm_loadu_si128((const __m128i *)&v418.m256i_u64[3]);
            v155 = *((_QWORD *)&v419 + 1);
            v38 = _mm_loadu_si128(v420);
            sub_1407785F0(&v395);
LABEL_278:
            sub_140778460(&v384);
            v40 = v447;
            v149 = v401;
            goto LABEL_279;
          }
          if ( !*((_QWORD *)&v344 + 1) )
          {
            v154 = v365.m128i_i64[1];
            *(_QWORD *)&v416 = v165;
            *((_QWORD *)&v416 + 1) = sub_1400015F0;
            sub_1416DAFA0(&v316, &unk_141A4A784, &v416);
            *(_QWORD *)&v426[24] = v317;
            *(__m128i *)&v426[8] = _mm_loadu_si128(&v316);
            *(_QWORD *)v426 = 10;
            sub_1407F2190(&v416, v154, v150, v426);
            v454 = v416;
            v59 = _mm_loadu_si128((const __m128i *)((char *)&v416 + 8));
            v457 = v417.m128i_u64[1];
            v27 = _mm_loadu_si128((const __m128i *)&v418);
            v448 = v418.m256i_i64[2];
            v37 = _mm_loadu_si128((const __m128i *)&v418.m256i_u64[3]);
            v155 = *((_QWORD *)&v419 + 1);
            v38 = _mm_loadu_si128(v420);
            goto LABEL_278;
          }
          ++v415[0];
          ++*((_QWORD *)&v414 + 1);
          goto LABEL_146;
        }
        if ( v211 )
LABEL_204:
          *(_QWORD *)&v414 = v414 + 1;
        else
          ++*((_QWORD *)&v414 + 1);
LABEL_146:
        v161 = v457;
        continue;
      }
    }
    v438 = v161;
    sub_141431530(&v344, &v384, aCommit_0, 6);
    if ( v384.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
      sub_14196B550(&off_141A48288);
    ++v384.m128i_i64[0];
    v212 = sub_1417DE470(v385);
    --v384.m128i_i64[0];
    if ( !v212 )
    {
      sub_141431530(v426, &v384, aRollback_0, 8);
      if ( *(_QWORD *)v426 != -1 )
        sub_1407785F0(v426);
    }
    if ( (_QWORD)v344 != -1 )
    {
      v213 = _mm_loadu_si128((const __m128i *)&v344);
      v214 = _mm_loadu_si128(&v345);
      *(_OWORD *)&v396[32] = v347;
      *(_OWORD *)&v396[16] = v346;
      *(__m128i *)v396 = v214;
      v395 = v213;
      v154 = v365.m128i_i64[1];
      *(_QWORD *)&v416 = &v395;
      *((_QWORD *)&v416 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v314, &unk_141A4A654, &v416);
      *(_QWORD *)&v426[24] = v315;
      *(__m128i *)&v426[8] = _mm_loadu_si128(&v314);
      *(_QWORD *)v426 = 10;
      sub_1407F2190(&v416, v154, v150, v426);
      v454 = v416;
      v59 = _mm_loadu_si128((const __m128i *)((char *)&v416 + 8));
      v457 = v417.m128i_u64[1];
      v27 = _mm_loadu_si128((const __m128i *)&v418);
      v448 = v418.m256i_i64[2];
      v37 = _mm_loadu_si128((const __m128i *)&v418.m256i_u64[3]);
      v155 = *((_QWORD *)&v419 + 1);
      v38 = _mm_loadu_si128(v420);
      sub_1407785F0(&v395);
      v40 = v447;
      v149 = v401;
      goto LABEL_279;
    }
    sub_1407E5410(&v384, aThreadProvider_0, 27);
    v245 = v449;
    if ( a5 )
    {
      for ( i = 0; i < v445; ++i )
      {
        v247 = i;
        if ( *(_QWORD *)(v454 + 104 * v247 + 48) != -1 )
        {
          v248 = (char *)(v453 + 424 * v247);
          if ( *((_QWORD *)v248 + 25) != -1 )
          {
            *((_QWORD *)&v249 + 1) = v454 + 104 * v247;
            *(_QWORD *)&v249 = *(_QWORD *)(*((_QWORD *)&v249 + 1) + 64LL);
            if ( (_QWORD)v249 )
            {
              v250 = *(_QWORD *)(*((_QWORD *)&v249 + 1) + 56LL);
              nullsub_1(v454, v244);
              v251 = sub_140001650(v249, 1);
              if ( !v251 )
                sub_14196B2DB(1, v249);
              v252 = v251;
              sub_1419234B0(v251, v250, v249);
            }
            else
            {
              v252 = 1;
            }
            v253 = *(_BYTE *)(*((_QWORD *)&v249 + 1) + 72LL);
            v395.m128i_i64[0] = v249;
            v395.m128i_i64[1] = v252;
            *(_QWORD *)v396 = v249;
            v396[8] = v253;
            v455 = 1;
            sub_1416DB410(&v416, *((_QWORD *)&v249 + 1));
            *((_QWORD *)&v249 + 1) = *((_QWORD *)v248 + 27);
            if ( *((_QWORD *)&v249 + 1) )
            {
              v256 = *((_QWORD *)v248 + 26);
              nullsub_1(v255, v254);
              v257 = sub_140001650(*((_QWORD *)&v249 + 1), 1);
              if ( !v257 )
                sub_14196B2DB(1, *((_QWORD *)&v249 + 1));
              *(_QWORD *)&v249 = v257;
              sub_1419234B0(v257, v256, *((_QWORD *)&v249 + 1));
            }
            else
            {
              *(_QWORD *)&v249 = 1;
            }
            v258 = v248[224];
            v259 = *((_QWORD *)v248 + 29);
            v260 = *((_DWORD *)v248 + 62);
            v261 = *((_DWORD *)v248 + 63);
            v262 = *((_DWORD *)v248 + 64);
            *(_QWORD *)&v426[16] = v417.m128i_i64[0];
            *(__m128i *)v426 = _mm_loadu_si128((const __m128i *)&v416);
            *(_QWORD *)&v426[24] = *((_QWORD *)&v249 + 1);
            *(_OWORD *)&v426[32] = v249;
            v426[48] = v258;
            *(_QWORD *)&v426[56] = v259;
            *(_QWORD *)&v426[64] = *((_QWORD *)v248 + 30);
            *(_DWORD *)&v426[72] = v260;
            *(_DWORD *)&v426[76] = v261;
            *(_DWORD *)&v426[80] = v262;
            v455 = 0;
            sub_14086CF20(&v416, a5, &v395, v426, v306, v307, v308, v309);
            v244 = v416;
            v245 = v449;
            if ( (_QWORD)v416 != -1 )
            {
              if ( (_QWORD)v416 )
                sub_140001660(*((_QWORD *)&v416 + 1), v416, 1);
              v244 = v417.m128i_i64[1];
              if ( v417.m128i_i64[1] )
                sub_140001660(v418.m256i_i64[0], v417.m128i_i64[1], 1);
            }
          }
        }
      }
    }
    if ( *((_QWORD *)&v414 + 1) | v415[2] && *(_QWORD *)off_14223FF10 >= 3u )
    {
      v395.m128i_i64[0] = v448;
      v395.m128i_i64[1] = v245;
      *(_QWORD *)v426 = &v395;
      *(_QWORD *)&v426[8] = sub_1416CE600;
      *(_QWORD *)&v426[16] = &v433;
      *(_QWORD *)&v426[24] = sub_140191200;
      *(_QWORD *)&v426[32] = &v413;
      *(_QWORD *)&v426[40] = sub_1416EBAE0;
      *(_QWORD *)&v426[48] = (char *)&v414 + 8;
      *(_QWORD *)&v426[56] = sub_1416EBAE0;
      *(_QWORD *)&v426[64] = v415;
      *(_QWORD *)&v426[72] = sub_1416EBAE0;
      *(_QWORD *)&v426[80] = &v415[1];
      *(_QWORD *)&v426[88] = sub_1416EBAE0;
      *(_QWORD *)&v426[96] = &v415[2];
      *(_QWORD *)&v426[104] = sub_1416EBAE0;
      *(_QWORD *)&v416 = aCodexmateLibCo_11;
      *((_QWORD *)&v416 + 1) = 51;
      v417.m128i_i64[0] = (__int64)aCodexmateLibCo_11;
      v417.m128i_i64[1] = 51;
      v418.m256i_i64[0] = (__int64)&off_141A4A718;
      sub_140AF72B0(&unk_141A4A6AC, v426, 3, &v416);
    }
    v454 = v402.m128i_i64[1];
    v25 = v402.m128i_i64[0];
    v447 = v403;
    v453 = (__int64)v404;
    v457 = v405;
    v27 = _mm_loadu_si128(&v406);
    v30 = v407;
    v37 = _mm_loadu_si128(&v408);
    v33 = v409;
    v38 = _mm_loadu_si128(&v410);
    v436 = v411;
    v109 = v412;
    v263 = _mm_loadu_si128((const __m128i *)((char *)&v414 + 8));
    v441 = _mm_loadu_si128((const __m128i *)&v413);
    v442 = v263;
    v443 = *(_OWORD *)&v415[1];
    sub_140777180(&v365);
    sub_140777030(&v393);
    sub_1407770A0(&v397);
    sub_140777BC0(&v384);
LABEL_88:
    v449 = _mm_shuffle_epi32(v38, 238).m128i_u64[0];
    v34 = v38.m128i_i64[0];
    v36 = v109;
    v32 = _mm_shuffle_epi32(v37, 238).m128i_u64[0];
    v31 = v37.m128i_i64[0];
    v444 = _mm_shuffle_epi32(v27, 238).m128i_u64[0];
    v450 = v27.m128i_i64[0];
    v35 = v436;
    v39 = v447;
    v28 = v457;
    v29 = (__int128 *)v453;
    v26 = v454;
    if ( v25 == -1 )
      goto LABEL_308;
LABEL_89:
    v436 = v35;
    v339 = v35;
    v435 = v36;
    v340 = v36;
    v343 = v443;
    v342 = v442;
    v341 = v441;
    v453 = (__int64)v29;
    v332 = v29;
    v457 = v28;
    v333 = v28;
    v334 = v27;
    v448 = v30;
    v335 = v30;
    v336 = v37;
    v337 = v33;
    v338 = v38;
    v447 = v25;
    v330.m128i_i64[0] = v25;
    v330.m128i_i64[1] = v26;
    v331 = v39;
    v381 = _mm_add_epi64(_mm_loadu_si128(&v381), _mm_loadu_si128(&v341));
    v382 = _mm_add_epi64(_mm_loadu_si128(&v382), _mm_loadu_si128(&v342));
    *(_QWORD *)&v383 = v443 + v383;
    *(_QWORD *)v426 = v33;
    *(_QWORD *)&v426[16] = v32;
    v110 = v33;
    *(_QWORD *)&v426[8] = v33;
    *(_QWORD *)&v426[24] = v33 + 88 * v34;
    v111 = v378;
    if ( v34 > *((_QWORD *)&v376 + 1) - (_QWORD)v378 )
    {
      sub_141939070((unsigned int)&v376 + 8, v378, v34, 8, 88);
      v112 = v449;
      v111 = v378;
LABEL_91:
      sub_1419234B0(v377 + 88 * v111, v110, 88 * v34);
    }
    else
    {
      v112 = v449;
      if ( v34 )
        goto LABEL_91;
    }
    *(_QWORD *)&v378 = v34 + v111;
    if ( v32 )
      sub_140001660(v110, 88 * v32, 8);
    v113 = v435;
    v114 = 120 * v435;
    v6 = v436;
    *(_QWORD *)v426 = v436;
    *(_QWORD *)&v426[16] = v112;
    *(_QWORD *)&v426[8] = v436;
    *(_QWORD *)&v426[24] = v436 + 120 * v435;
    v115 = v380;
    if ( v435 > *((_QWORD *)&v378 + 1) - v380 )
    {
      sub_141939070((unsigned int)&v378 + 8, v380, v435, 8, 120);
      v116 = v450;
      v115 = v380;
LABEL_96:
      sub_1419234B0(v379 + 120 * v115, v6, v114);
    }
    else
    {
      v116 = v450;
      if ( v435 )
        goto LABEL_96;
    }
    v380 = v113 + v115;
    if ( v112 )
      sub_140001660(v6, 120 * v112, 8);
    *((_QWORD *)&v383 + 1) += *((_QWORD *)&v343 + 1);
    v117 = v457;
    v118 = v457 + 24 * v116;
    *(_QWORD *)v426 = v457;
    *(_QWORD *)&v426[8] = v457;
    *(_QWORD *)&v426[16] = v453;
    *(_QWORD *)&v426[24] = v118;
    if ( v116 )
    {
      v119 = v457 + 24;
      while ( 1 )
      {
        v117 = v119;
        v123 = *(_QWORD *)(v119 - 24);
        if ( v123 == -1 )
        {
LABEL_106:
          *(_QWORD *)&v426[8] = v117;
          goto LABEL_109;
        }
        v124 = *(_QWORD *)(v119 - 16);
        v125 = v374;
        if ( (unsigned __int64)v374 > 2 )
          break;
        v454 = *(_QWORD *)(v119 - 16);
        v450 = v123;
        v449 = v119;
        v126 = *(_QWORD *)(v119 - 8);
        if ( (_QWORD)v374 == v372 )
          sub_141939F90(&v372);
        v117 = v449;
        v120 = v449 - 24;
        v121 = v373;
        v122 = 3 * v125;
        *(_QWORD *)(v373 + 8 * v122) = v450;
        *(_QWORD *)(v121 + 8 * v122 + 8) = v454;
        *(_QWORD *)(v121 + 8 * v122 + 16) = v126;
        *(_QWORD *)&v374 = v125 + 1;
        v119 = v117 + 24;
        if ( v120 + 24 == v118 )
          goto LABEL_106;
      }
      *(_QWORD *)&v426[8] = v119;
      if ( v123 )
      {
        v127 = v119;
        sub_140001660(v124, v123, 1);
        v117 = v127;
      }
    }
LABEL_109:
    v128 = v432;
    v129 = v444;
    if ( v118 != v117 )
    {
      v130 = (v118 - v117) / 0x18;
      v131 = (_QWORD *)(v117 + 8);
      do
      {
        v132 = *(v131 - 1);
        if ( v132 )
        {
          v133 = v131;
          sub_140001660(*v131, v132, 1);
          v131 = v133;
        }
        v131 += 3;
        --v130;
      }
      while ( v130 );
    }
    if ( v453 )
      sub_140001660(v457, 24 * v453, 8);
    v134 = v128 + 32;
    v135 = (const __m128i *)v448;
    v136 = (const __m128i *)(v448 + 32 * v31);
    *(_QWORD *)v426 = v448;
    *(_QWORD *)&v426[8] = v448;
    *(_QWORD *)&v426[16] = v129;
    *(_QWORD *)&v426[24] = v136;
LABEL_118:
    while ( v135 != v136 )
    {
      v139 = v135 + 2;
      *(_QWORD *)&v426[8] = v135 + 2;
      if ( v135->m128i_i64[0] == -1 )
      {
        v135 += 2;
        break;
      }
      v457 = v135->m128i_i64[0];
      v449 = v135->m128i_u64[1];
      v140 = _mm_loadu_si128(v135 + 1);
      v141 = v135[1].m128i_i64[0];
      v142 = v375;
      v454 = v375 + 32 * v376;
      while ( 1 )
      {
        v450 = v142;
        if ( v142 == v454 )
          break;
        v143 = sub_140222930(*(_QWORD *)(v142 + 8), *(_QWORD *)(v142 + 16), v449, v141);
        v142 = v450 + 32;
        if ( v143 )
        {
          v135 = v139;
          if ( v457 )
          {
            sub_140001660(v449, v457, 1);
            v135 = v139;
          }
          goto LABEL_118;
        }
      }
      v144 = v376;
      if ( (_QWORD)v376 == *((_QWORD *)&v374 + 1) )
        sub_1419397B0((char *)&v374 + 8);
      v137 = v375;
      v138 = 32 * v144;
      *(_QWORD *)(v375 + v138) = v457;
      *(_QWORD *)(v137 + v138 + 8) = v449;
      *(__m128i *)(v137 + v138 + 16) = v140;
      *(_QWORD *)&v376 = v144 + 1;
      v135 = v139;
    }
    v145 = (char *)v136 - (char *)v135;
    v5 = v435;
    if ( v145 )
    {
      v146 = v145 >> 5;
      v147 = &v135->m128i_i64[1];
      do
      {
        v148 = *(v147 - 1);
        if ( v148 )
          sub_140001660(*v147, v148, 1);
        v147 += 4;
        --v146;
      }
      while ( v146 );
    }
    if ( v129 )
      sub_140001660(v448, 32 * v129, 8);
    v16 = v134;
    if ( v447 )
      sub_140001660(v330.m128i_i64[1], v447, 1);
    v7 = v363;
  }
  v270 = v423;
  if ( v423 > 1 )
  {
    sub_1407F4CD0(v426, v399, v7, 6);
    if ( *(_QWORD *)&v426[80]
      || __PAIR128__(*(unsigned __int64 *)&v426[88], 0) != *(unsigned __int64 *)&v426[96]
      || *(_QWORD *)&v426[40] )
    {
      nullsub_1(v272, v271);
      v450 = sub_140001650(24, 8);
      if ( !v450 )
        sub_14196B2C1(8, 24);
      *(_QWORD *)&v416 = v426;
      *((_QWORD *)&v416 + 1) = sub_1400015F0;
      sub_1416DAFA0(&v326, &unk_141A4B020, &v416);
      v273 = (__m128i *)v450;
      *(_QWORD *)(v450 + 16) = v326.m256i_i64[2];
      *v273 = _mm_loadu_si128((const __m128i *)&v326);
      v441.m128i_i64[0] = 1;
      v441.m128i_i64[1] = (__int64)v273;
      v442.m128i_i64[0] = 1;
      if ( *(_QWORD *)&v426[80] )
      {
        *(_QWORD *)&v416 = &v426[80];
        *((_QWORD *)&v416 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v365, &unk_141A4B02A, &v416);
        v274 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v275 = v441.m128i_i64[1];
        v276 = 3 * v274;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v276 + 16) = v366.m128i_i64[0];
        *(__m128i *)(v275 + 8 * v276) = _mm_loadu_si128(&v365);
        v277 = v274 + 1;
        v442.m128i_i64[0] = v277;
      }
      else
      {
        LODWORD(v277) = 1;
      }
      if ( *(_QWORD *)&v426[88] )
      {
        *(_QWORD *)&v416 = &v426[88];
        *((_QWORD *)&v416 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v384, &unk_141A4B03B, &v416);
        v282 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v283 = v441.m128i_i64[1];
        v284 = 3 * v282;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v284 + 16) = v385;
        *(__m128i *)(v283 + 8 * v284) = _mm_loadu_si128(&v384);
        v277 = v282 + 1;
        v442.m128i_i64[0] = v277;
      }
      if ( *(_QWORD *)&v426[96] )
      {
        *(_QWORD *)&v416 = &v426[96];
        *((_QWORD *)&v416 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v357, &unk_141A4B051, &v416);
        v285 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v286 = v441.m128i_i64[1];
        v287 = 3 * v285;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v287 + 16) = v358;
        *(__m128i *)(v286 + 8 * v287) = _mm_loadu_si128(&v357);
        v277 = v285 + 1;
        v442.m128i_i64[0] = v277;
      }
      if ( *(_QWORD *)&v426[104] )
      {
        *(_QWORD *)&v416 = &v426[104];
        *((_QWORD *)&v416 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v330, &unk_141A4B065, &v416);
        v288 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v289 = v441.m128i_i64[1];
        v290 = 3 * v288;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v290 + 16) = v331;
        *(__m128i *)(v289 + 8 * v290) = _mm_loadu_si128(&v330);
        v277 = v288 + 1;
        v442.m128i_i64[0] = v277;
      }
      if ( *(_QWORD *)&v426[40] )
      {
        v395.m128i_i64[0] = *(_QWORD *)&v426[40];
        *(_QWORD *)&v416 = &v395;
        *((_QWORD *)&v416 + 1) = sub_1416EBAE0;
        sub_1416DAFA0(&v402, &unk_141A4B07C, &v416);
        v291 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v292 = v441.m128i_i64[1];
        v293 = 3 * v291;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v293 + 16) = v403;
        *(__m128i *)(v292 + 8 * v293) = _mm_loadu_si128(&v402);
        v277 = v291 + 1;
        v442.m128i_i64[0] = v277;
      }
      if ( *(_QWORD *)&v426[64] )
      {
        sub_1406C5480((unsigned int)&v416, *(_DWORD *)&v426[56], *(_DWORD *)&v426[64], (unsigned int)&unk_141A4B08B, 3);
        *(_QWORD *)v396 = v417.m128i_i64[0];
        v395 = _mm_loadu_si128((const __m128i *)&v416);
        *(_QWORD *)&v416 = &v395;
        *((_QWORD *)&v416 + 1) = sub_1400015F0;
        sub_1416DAFA0(&v344, &unk_141A4B08E, &v416);
        if ( v395.m128i_i64[0] )
          sub_140001660(v395.m128i_i64[1], v395.m128i_i64[0], 1);
        v294 = v442.m128i_i64[0];
        if ( v442.m128i_i64[0] == v441.m128i_i64[0] )
          sub_141939F90(&v441);
        v295 = v441.m128i_i64[1];
        v296 = 3 * v294;
        *(_QWORD *)(v441.m128i_i64[1] + 8 * v296 + 16) = v345.m128i_i64[0];
        *(__m128i *)(v295 + 8 * v296) = _mm_loadu_si128((const __m128i *)&v344);
        v277 = v294 + 1;
        v442.m128i_i64[0] = v277;
      }
      sub_1406C5480((unsigned int)&v416, v441.m128i_i32[2], v277, (unsigned int)&unk_141A4B09A, 2);
      *(_QWORD *)v396 = v417.m128i_i64[0];
      v395 = _mm_loadu_si128((const __m128i *)&v416);
      v297 = v442.m128i_i64[0];
      if ( v442.m128i_i64[0] )
      {
        v298 = (_QWORD *)(v441.m128i_i64[1] + 8);
        do
        {
          v299 = *(v298 - 1);
          if ( v299 )
            sub_140001660(*v298, v299, 1);
          v298 += 3;
          --v297;
        }
        while ( v297 );
      }
      if ( v441.m128i_i64[0] )
        sub_140001660(v441.m128i_i64[1], 24 * v441.m128i_i64[0], 8);
      *(_QWORD *)&v416 = &v395;
      *((_QWORD *)&v416 + 1) = sub_1400015F0;
      sub_1416DAFA0(&v322, &unk_141A4C495, &v416);
      if ( v395.m128i_i64[0] )
        sub_140001660(v395.m128i_i64[1], v395.m128i_i64[0], 1);
      v300 = (__m128i *)v437;
      *(_QWORD *)(v437 + 32) = v323;
      v300[1] = _mm_loadu_si128(&v322);
      v300->m128i_i64[1] = 10;
      v300->m128i_i64[0] = -1;
      sub_140779A80(v426);
      v280 = v422;
      v281 = v423;
      if ( !v423 )
        goto LABEL_347;
      goto LABEL_343;
    }
    sub_140779A80(v426);
    *(double *)v12.m128i_i64 = sub_1419234B0(v437, v371, 168);
    v278 = v422;
    goto LABEL_351;
  }
  *(double *)v12.m128i_i64 = sub_1419234B0(v437, v371, 168);
  v278 = v422;
  if ( v270 )
  {
LABEL_351:
    v303 = (_QWORD *)(v278 + 8);
    do
    {
      v304 = *(v303 - 1);
      if ( v304 )
        *(double *)v12.m128i_i64 = sub_140001660(*v303, v304, 1);
      v303 += 4;
      --v270;
    }
    while ( v270 );
  }
  if ( v421 )
    *(double *)v12.m128i_i64 = sub_140001660(v278, 32 * v421, 8);
  return *(double *)v12.m128i_i64;
}
