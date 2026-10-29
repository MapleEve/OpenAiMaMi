// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140255f10 | name sub_140255F10
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140255F10(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  const __m128i *v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __m128i *v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdi
  __m128i *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __m128i v26; // xmm7
  __int64 v27; // rbx
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // r10
  __int128 *v31; // r11
  unsigned __int64 v32; // r9
  __int64 v33; // r15
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __m128i v38; // xmm8
  __m128i v39; // xmm9
  __int64 v40; // r12
  unsigned __int64 v41; // r15
  __int128 *v42; // rsi
  __int64 v43; // r13
  unsigned __int64 v44; // rdx
  __int64 v45; // r14
  unsigned __int64 v46; // rdi
  __m128i *v47; // rax
  __int64 v48; // r12
  __int64 v49; // r13
  __int128 *v50; // rsi
  __int128 *v51; // rdi
  __int64 v52; // rcx
  _QWORD *v53; // rdi
  __int32 v54; // eax
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __m128i v57; // xmm10
  __m128i *v58; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned __int64 v68; // rsi
  char v69; // al
  __int64 v70; // rsi
  __int64 v71; // r12
  __int64 v72; // r13
  const __m128i *v73; // rdi
  __m128i si128; // xmm0
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rsi
  int v80; // ebx
  __int64 v81; // r12
  __int64 v82; // r13
  const __m128i *v83; // rdi
  __m128i v85; // xmm0
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rsi
  bool v91; // zf
  __int64 v92; // rsi
  __int64 v93; // rsi
  __m128i v94; // xmm0
  __m128i v95; // xmm1
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rsi
  __int64 v99; // rsi
  __m128i v100; // xmm1
  __int64 v101; // rsi
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  _QWORD *v104; // rcx
  _QWORD *v105; // rsi
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rsi
  __int64 v110; // r12
  unsigned __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rbx
  const __m128i *v114; // r12
  const __m128i *v115; // r14
  unsigned __int64 v116; // r8
  __int64 v117; // rsi
  unsigned __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  const __m128i *v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdi
  __int64 v125; // rbx
  unsigned __int64 v126; // rdi
  unsigned __int64 v127; // r14
  unsigned __int64 v128; // rdi
  _QWORD *v129; // r8
  __int64 v130; // rdx
  _QWORD *v131; // rsi
  const __m128i *v132; // r13
  const __m128i *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rcx
  const __m128i *v136; // rsi
  __m128i v137; // xmm7
  __int64 v138; // rdi
  const __m128i *v139; // rdx
  char v140; // al
  __int64 v141; // rdi
  unsigned __int64 v142; // r13
  unsigned __int64 v143; // r13
  __int64 *v144; // rdi
  __int64 v145; // rdx
  unsigned __int64 v146; // rsi
  __int64 v147; // r15
  __int64 v148; // rbx
  __m128i v149; // xmm0
  __m128i v150; // xmm1
  __int128 *v151; // r15
  __int128 *v152; // rcx
  __int128 *v153; // rsi
  __int64 v154; // rcx
  __int64 v155; // rsi
  __int64 v156; // rcx
  __int64 v157; // r15
  __int64 v158; // rax
  unsigned __int64 v159; // r13
  __int64 v160; // rdi
  __int64 *v161; // rdi
  __int64 *v162; // rsi
  __int64 *v163; // r12
  __int64 v164; // r15
  __m128i v165; // xmm1
  __int128 v166; // xmm2
  __int128 v167; // xmm3
  __m128i v168; // xmm0
  __m128i v169; // xmm1
  unsigned __int64 v170; // rdi
  unsigned __int64 v171; // rdi
  __int64 *v172; // rdi
  __m128i v173; // xmm0
  __m128i v174; // xmm1
  __int128 v175; // xmm2
  __m128i v176; // xmm0
  __m128i v177; // xmm1
  __m128i v178; // xmm2
  __m128i v179; // xmm1
  __int64 v180; // r13
  unsigned __int64 v181; // rsi
  unsigned __int64 v182; // rdi
  __m128i v183; // xmm0
  __m128i v184; // xmm1
  __int64 v185; // rax
  __int64 v186; // rcx
  unsigned __int64 v187; // rdx
  unsigned __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // rsi
  unsigned __int64 v191; // r12
  __int64 v192; // rax
  __int64 v193; // rcx
  signed __int64 v194; // rdi
  __int64 v195; // r13
  __m128i *v196; // rax
  __int64 v197; // r14
  __int64 v198; // rdi
  __int64 v199; // rax
  __int64 v200; // r12
  __int64 v201; // r13
  __int64 v202; // rdi
  __int64 v203; // r14
  char v204; // al
  signed __int64 v205; // r12
  const __m128i *v206; // rdi
  __int64 v207; // r14
  __m128i *v208; // rax
  char v209; // al
  __int128 v210; // xmm0
  __int64 v211; // rdi
  __int64 v212; // rax
  __int64 v213; // rcx
  __m128i v214; // xmm0
  __m128i v215; // xmm1
  __int128 v216; // xmm2
  char v217; // di
  unsigned __int128 v218; // kr60_16
  __int64 v219; // r14
  __int64 v220; // rax
  __m128i v221; // xmm1
  char v222; // di
  __int64 v223; // rsi
  __m128i v224; // xmm0
  __m128i v225; // xmm1
  unsigned __int64 v226; // rdi
  __int64 v227; // rax
  __int64 v228; // rcx
  __m128i v229; // xmm0
  __m128i v230; // xmm1
  __int128 v231; // xmm2
  bool v232; // r13
  const __m128i *v233; // rdi
  __int64 v234; // r14
  bool v235; // al
  int v236; // eax
  __m128i v237; // xmm0
  __m128i v238; // xmm1
  __int64 v239; // rdi
  unsigned __int64 v240; // rcx
  unsigned __int64 v241; // rbx
  __int64 v242; // rax
  __int64 v243; // r12
  __int128 v244; // rdi
  __int64 v245; // r13
  __m128i *v246; // rax
  __int64 v247; // r14
  char v248; // al
  __int64 v249; // rcx
  const __m128i *v250; // r14
  __int64 v251; // r13
  __m128i *v252; // rax
  char v253; // al
  __int64 v254; // rcx
  int v255; // edx
  int v256; // r8d
  int v257; // r9d
  __int64 v258; // rdi
  __m128i v259; // xmm1
  __m128i v260; // xmm0
  __m128i v261; // xmm1
  __int64 v262; // rsi
  __int64 v263; // rsi
  unsigned __int64 v264; // rdx
  __int64 v265; // rcx
  unsigned __int64 v266; // rdi
  __int64 v267; // rcx
  __m128i *v268; // rcx
  __int64 v269; // rsi
  __int64 v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rsi
  __int64 v273; // rsi
  __m128i *v274; // rax
  __int64 v275; // rsi
  unsigned __int64 v276; // rdi
  __int64 v277; // rsi
  __int64 v278; // rax
  __int64 v279; // rcx
  __int64 v280; // rsi
  __int64 v281; // rax
  __int64 v282; // rcx
  __int64 v283; // rsi
  __int64 v284; // rax
  __int64 v285; // rcx
  __int64 v286; // rsi
  __int64 v287; // rax
  __int64 v288; // rcx
  __int64 v289; // rsi
  __int64 v290; // rax
  __int64 v291; // rcx
  __int64 v292; // rsi
  _QWORD *v293; // rdi
  __int64 v294; // rdx
  __m128i *v295; // rcx
  _QWORD *v296; // rbx
  __int64 v297; // rdx
  _QWORD *v298; // rbx
  __int64 v299; // rdx
  __m128i v300; // [rsp+40h] [rbp-40h] BYREF
  __m128i v301[5]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v302; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v303; // [rsp+B0h] [rbp+30h]
  __m128i v304; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v305; // [rsp+C8h] [rbp+48h]
  __m128i v306; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v307; // [rsp+E0h] [rbp+60h]
  __m128i v308; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v309; // [rsp+F8h] [rbp+78h]
  __m128i v310; // [rsp+100h] [rbp+80h] BYREF
  __int64 v311; // [rsp+110h] [rbp+90h]
  __m128i v312; // [rsp+118h] [rbp+98h] BYREF
  __int64 v313; // [rsp+128h] [rbp+A8h]
  __m128i v314; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v315; // [rsp+140h] [rbp+C0h]
  __m256i v316; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v317; // [rsp+170h] [rbp+F0h]
  __m128i v318; // [rsp+180h] [rbp+100h] BYREF
  __m256i v319; // [rsp+190h] [rbp+110h]
  __m128i v320; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v321; // [rsp+1C8h] [rbp+148h]
  __int128 *v322; // [rsp+1D0h] [rbp+150h]
  unsigned __int64 v323; // [rsp+1D8h] [rbp+158h]
  __m128i v324; // [rsp+1E0h] [rbp+160h]
  __int64 v325; // [rsp+1F0h] [rbp+170h]
  __m128i v326; // [rsp+1F8h] [rbp+178h]
  __int64 v327; // [rsp+208h] [rbp+188h]
  __m128i v328; // [rsp+210h] [rbp+190h]
  __int64 v329; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v330; // [rsp+228h] [rbp+1A8h]
  __m128i v331; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v332; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v333; // [rsp+250h] [rbp+1D0h]
  unsigned __int128 v334; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v335; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v336; // [rsp+280h] [rbp+200h]
  __int128 v337; // [rsp+290h] [rbp+210h]
  __int64 v338; // [rsp+310h] [rbp+290h] BYREF
  __int64 *v339; // [rsp+318h] [rbp+298h]
  __int64 v340; // [rsp+320h] [rbp+2A0h]
  __m128i v341; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v342; // [rsp+338h] [rbp+2B8h]
  __int64 *v343; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 *v344; // [rsp+348h] [rbp+2C8h]
  __int64 v345; // [rsp+350h] [rbp+2D0h]
  __int64 *v346; // [rsp+358h] [rbp+2D8h]
  __m128i v347; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v348; // [rsp+370h] [rbp+2F0h]
  __int64 v349; // [rsp+378h] [rbp+2F8h] BYREF
  __int128 v350; // [rsp+380h] [rbp+300h] BYREF
  _BYTE v351[72]; // [rsp+390h] [rbp+310h]
  __int64 v352; // [rsp+3D8h] [rbp+358h]
  const __m128i *v353; // [rsp+3E0h] [rbp+360h]
  __int64 v354; // [rsp+3E8h] [rbp+368h]
  __int64 v355; // [rsp+3F0h] [rbp+370h]
  __int64 v356; // [rsp+3F8h] [rbp+378h]
  __m128i v357; // [rsp+400h] [rbp+380h] BYREF
  __m128i v358; // [rsp+410h] [rbp+390h] BYREF
  __int128 v359; // [rsp+420h] [rbp+3A0h]
  __int128 v360; // [rsp+430h] [rbp+3B0h]
  __int128 v361; // [rsp+440h] [rbp+3C0h]
  __int128 v362; // [rsp+450h] [rbp+3D0h]
  __m128i v363; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v364; // [rsp+478h] [rbp+3F8h]
  __int64 v365; // [rsp+480h] [rbp+400h] BYREF
  __int64 v366; // [rsp+488h] [rbp+408h]
  __int128 v367; // [rsp+490h] [rbp+410h] BYREF
  __int64 v368; // [rsp+4A0h] [rbp+420h]
  __int128 v369; // [rsp+4A8h] [rbp+428h] BYREF
  __int64 v370; // [rsp+4B8h] [rbp+438h]
  __int128 v371; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v372; // [rsp+4D0h] [rbp+450h]
  __int64 v373; // [rsp+4D8h] [rbp+458h]
  __m128i v374; // [rsp+4E0h] [rbp+460h] BYREF
  __m128i v375; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v376; // [rsp+500h] [rbp+480h]
  __m128i v377; // [rsp+510h] [rbp+490h] BYREF
  __int128 v378; // [rsp+520h] [rbp+4A0h]
  __int128 v379; // [rsp+530h] [rbp+4B0h]
  __int128 v380; // [rsp+540h] [rbp+4C0h]
  __int128 v381; // [rsp+550h] [rbp+4D0h]
  __int128 v382; // [rsp+560h] [rbp+4E0h]
  __int64 v383; // [rsp+570h] [rbp+4F0h]
  unsigned __int8 v384; // [rsp+578h] [rbp+4F8h]
  _BYTE v385[7]; // [rsp+579h] [rbp+4F9h]
  __m128i v386; // [rsp+580h] [rbp+500h] BYREF
  _BYTE v387[48]; // [rsp+590h] [rbp+510h] BYREF
  __m128i v388; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v389; // [rsp+640h] [rbp+5C0h]
  __m128i v390; // [rsp+650h] [rbp+5D0h] BYREF
  unsigned __int64 v391; // [rsp+660h] [rbp+5E0h]
  __int128 *v392; // [rsp+668h] [rbp+5E8h] BYREF
  __int64 v393; // [rsp+670h] [rbp+5F0h]
  __m128i v394; // [rsp+678h] [rbp+5F8h] BYREF
  __int64 v395; // [rsp+688h] [rbp+608h]
  __m128i v396; // [rsp+690h] [rbp+610h] BYREF
  __int64 v397; // [rsp+6A0h] [rbp+620h]
  __m128i v398; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v399; // [rsp+6B8h] [rbp+638h]
  unsigned __int64 v400; // [rsp+6C0h] [rbp+640h]
  __int64 v401; // [rsp+6C8h] [rbp+648h] BYREF
  __int128 v402; // [rsp+6D0h] [rbp+650h] BYREF
  _QWORD v403[3]; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v404; // [rsp+6F8h] [rbp+678h] BYREF
  __int128 v405; // [rsp+700h] [rbp+680h]
  unsigned __int128 v406; // [rsp+710h] [rbp+690h] BYREF
  __m128i v407; // [rsp+720h] [rbp+6A0h] BYREF
  __m256i v408; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v409; // [rsp+750h] [rbp+6D0h]
  __m128i v410[15]; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v411; // [rsp+858h] [rbp+7D8h] BYREF
  __int64 v412; // [rsp+860h] [rbp+7E0h]
  unsigned __int64 v413; // [rsp+868h] [rbp+7E8h]
  __m128i v414; // [rsp+870h] [rbp+7F0h] BYREF
  __int64 v415; // [rsp+880h] [rbp+800h]
  _BYTE v416[112]; // [rsp+890h] [rbp+810h] BYREF
  __int64 v417; // [rsp+900h] [rbp+880h]
  __int64 v418; // [rsp+A38h] [rbp+9B8h]
  __m128i v419; // [rsp+A40h] [rbp+9C0h] BYREF
  unsigned __int64 v420; // [rsp+A50h] [rbp+9D0h]
  __m128i v421; // [rsp+A58h] [rbp+9D8h] BYREF
  unsigned __int64 v422; // [rsp+A68h] [rbp+9E8h]
  const __m128i *v423; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v424; // [rsp+A78h] [rbp+9F8h]
  __m128i *v425; // [rsp+A80h] [rbp+A00h]
  unsigned __int64 v426; // [rsp+A88h] [rbp+A08h]
  __m128i v427; // [rsp+A90h] [rbp+A10h] BYREF
  __m128i v428; // [rsp+AA0h] [rbp+A20h]
  __int128 v429; // [rsp+AB0h] [rbp+A30h]
  __int64 v430; // [rsp+AC0h] [rbp+A40h]
  unsigned __int64 v431; // [rsp+AC8h] [rbp+A48h]
  volatile signed __int64 *v432; // [rsp+AD0h] [rbp+A50h] BYREF
  const __m128i *v433; // [rsp+AD8h] [rbp+A58h]
  unsigned __int64 v434; // [rsp+AE0h] [rbp+A60h]
  unsigned __int64 v435; // [rsp+AE8h] [rbp+A68h]
  __int64 v436; // [rsp+AF0h] [rbp+A70h]
  unsigned __int64 v437; // [rsp+AF8h] [rbp+A78h]
  const __m128i *v438; // [rsp+B00h] [rbp+A80h]
  __int64 v439; // [rsp+B08h] [rbp+A88h]
  __int64 v440; // [rsp+B10h] [rbp+A90h]
  char v441; // [rsp+B1Ch] [rbp+A9Ch]
  char v442; // [rsp+B1Eh] [rbp+A9Eh]
  char v443; // [rsp+B1Fh] [rbp+A9Fh]
  __m128i *v444; // [rsp+B20h] [rbp+AA0h]
  unsigned __int64 v445; // [rsp+B28h] [rbp+AA8h]
  char v446; // [rsp+B32h] [rbp+AB2h]
  char v447; // [rsp+B33h] [rbp+AB3h]
  char v448; // [rsp+B37h] [rbp+AB7h]
  __int64 v449; // [rsp+B38h] [rbp+AB8h]

  v449 = -2;
  v425 = a1;
  v386.m128i_i64[0] = a3;
  v386.m128i_i64[1] = a4;
  if ( a4 != 6
    || (v6 = (const __m128i *)a3,
        v7 = *(_DWORD *)a3 ^ 0x6E65706F,
        (v8 = v7 | *(unsigned __int16 *)(a3 + 4) ^ 0x6961u) != 0)
    && (v9 = *(_DWORD *)a3 ^ 0x616D6961, (v8 = v9 | *(unsigned __int16 *)(a3 + 4) ^ 0x3169u) != 0) )
  {
    *(_QWORD *)&v406 = &v386;
    *((_QWORD *)&v406 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v416[8], &unk_1419DE690, &v406);
    *(_QWORD *)v416 = 10;
    v10 = v425;
    *(__m128i *)((char *)v425 + 88) = *(__m128i *)&v416[80];
    v11 = _mm_loadu_si128((const __m128i *)&v416[16]);
    v12 = _mm_loadu_si128((const __m128i *)&v416[32]);
    v13 = *(__m128i *)&v416[48];
    *(__m128i *)((char *)v10 + 72) = *(__m128i *)&v416[64];
    *(__m128i *)((char *)v10 + 56) = v13;
    *(__m128i *)((char *)v10 + 40) = v12;
    *(__m128i *)((char *)v10 + 24) = v11;
    v10->m128i_i64[1] = *(_QWORD *)v416;
    result = *(_QWORD *)&v416[8];
    v10[1].m128i_i64[0] = *(_QWORD *)&v416[8];
    v10->m128i_i64[0] = -1;
    return result;
  }
  nullsub_1(v8);
  v16 = sub_140001650(6, 1);
  if ( !v16 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v16 + 4) = v6->m128i_i16[2];
  *(_DWORD *)v16 = v6->m128i_i32[0];
  v363.m128i_i64[0] = 6;
  v363.m128i_i64[1] = v16;
  v364 = 6;
  v374 = 0;
  v375 = 0;
  v376 = 0;
  v365 = 0;
  v366 = 8;
  v367 = 0;
  v368 = 8;
  v369 = 0;
  v370 = 8;
  v371 = 0;
  v372 = 8;
  v373 = 0;
  v356 = a2;
  sub_1401B7010(&v411, a2);
  v17 = v412;
  v352 = v412 + 32 * v413;
  v353 = v6;
  while ( v17 != v352 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(_QWORD *)(v17 + 16);
    v423 = v6;
    v424 = 6;
    sub_141695A00(v416, v18, v19);
    if ( *(_DWORD *)v416 == 2 )
    {
      v20 = v416[8] & 3;
      if ( (unsigned int)(v20 - 2) < 2 || (v416[8] & 3) == 0 )
      {
        v418 = v17;
        v21 = 6;
        goto LABEL_13;
      }
      --*(_QWORD *)&v416[8];
      v416[0] = 3;
      sub_1416BCB00(&v416[8]);
      v21 = v424;
      if ( v424 < 0 )
      {
        v22 = 0;
        v264 = v355;
      }
      else
      {
        v418 = v17;
        if ( !v424 )
        {
          v24 = 1;
          v25 = 0;
          goto LABEL_15;
        }
        v6 = v423;
LABEL_13:
        nullsub_1(v20);
        v22 = 1;
        v23 = (__m128i *)sub_140001650(v21, 1);
        if ( v23 )
        {
          v24 = (__int64)v23;
          sub_1418F44E0(v23, v6, v21);
          v25 = v21;
LABEL_15:
          v429 = 0;
          v428 = 0;
          v427 = 0;
          v26 = 0;
          v27 = 8;
          v444 = nullptr;
          v28 = 0;
          v29 = 0;
          v30 = 8;
          v31 = nullptr;
          v32 = 0;
          v33 = 8;
          v34 = 0;
          v35 = 0;
          v36 = 8;
          v37 = 0;
          v355 = v24;
          v38 = 0;
          v39 = 0;
          v40 = v25;
          goto LABEL_88;
        }
        v264 = v21;
      }
      sub_141938D2B(v22, v264);
    }
    sub_1402399D0((__int64)v416, v18, v19);
    v438 = (const __m128i *)v18;
    v440 = v19;
    v434 = v5;
    v418 = v17;
    v24 = *(_QWORD *)v416;
    v30 = *(_QWORD *)&v416[24];
    v31 = *(__int128 **)&v416[16];
    v28 = *(_QWORD *)&v416[40];
    v29 = *(_QWORD *)&v416[56];
    v27 = *(_QWORD *)&v416[48];
    v33 = *(_QWORD *)&v416[72];
    v34 = *(_QWORD *)&v416[80];
    if ( v416[104] == 0xFF )
    {
      v444 = *(__m128i **)&v416[32];
      v40 = *(_QWORD *)&v416[8];
      v35 = *(_QWORD *)&v416[88];
      v32 = *(_QWORD *)&v416[64];
LABEL_304:
      v274 = v425;
      v425[1].m128i_i64[1] = (__int64)v31;
      v274[2].m128i_i64[0] = v30;
      v274[2].m128i_i64[1] = (__int64)v444;
      v274[3].m128i_i64[0] = v28;
      v274[3].m128i_i64[1] = v27;
      v274[4].m128i_i64[0] = v29;
      v274[4].m128i_i64[1] = v32;
      v274[5].m128i_i64[0] = v33;
      v274[5].m128i_i64[1] = v34;
      v274[6].m128i_i64[0] = v35;
      v274->m128i_i64[1] = v24;
      v274[1].m128i_i64[0] = v40;
      v274->m128i_i64[0] = -1;
      v275 = v412;
      v276 = v413;
      if ( !v413 )
      {
LABEL_343:
        if ( v411 )
          sub_140001660(v275, 32 * v411, 8);
        return sub_1401968E0(&v363);
      }
LABEL_339:
      v296 = (_QWORD *)(v275 + 8);
      do
      {
        v297 = *(v296 - 1);
        if ( v297 )
          sub_140001660(*v296, v297, 1);
        v296 += 4;
        --v276;
      }
      while ( v276 );
      goto LABEL_343;
    }
    v444 = *(__m128i **)&v416[64];
    *(_DWORD *)&v385[3] = *(_DWORD *)&v416[108];
    *(_DWORD *)v385 = *(_DWORD *)&v416[105];
    v377 = *(__m128i *)v416;
    v378 = *(_OWORD *)&v416[16];
    v379 = *(_OWORD *)&v416[32];
    v380 = *(_OWORD *)&v416[48];
    v381 = *(_OWORD *)&v416[64];
    v382 = *(_OWORD *)&v416[80];
    v383 = *(_QWORD *)&v416[96];
    v384 = v416[104];
    sub_140251C90((__int64)v416, (__int64)&v377);
    v41 = v434;
    v40 = *(_QWORD *)&v416[8];
    v43 = *(_QWORD *)&v416[24];
    v42 = *(__int128 **)&v416[16];
    v44 = v354;
    v45 = (__int64)v433;
    if ( *(_QWORD *)v416 != -1 )
    {
      v438 = *(const __m128i **)v416;
      v26 = _mm_loadu_si128((const __m128i *)&v416[32]);
      v439 = *(_QWORD *)&v416[48];
      v38 = _mm_loadu_si128((const __m128i *)&v416[56]);
      v440 = *(_QWORD *)&v416[72];
      v39 = _mm_loadu_si128((const __m128i *)&v416[80]);
      v436 = -1;
      goto LABEL_86;
    }
    v426 = *(_QWORD *)&v416[8];
    v404 = *(_QWORD *)&v416[8];
    v445 = *(_QWORD *)&v416[16];
    v405 = *(_OWORD *)&v416[16];
    v46 = v424;
    if ( v424 < 0 )
    {
      v265 = 0;
      goto LABEL_290;
    }
    v444 = (__m128i *)v423;
    if ( v424 )
    {
      nullsub_1(*(_QWORD *)v416);
      v47 = (__m128i *)sub_140001650(v46, 1);
      if ( !v47 )
      {
        v44 = v46;
        v265 = 1;
LABEL_290:
        sub_141938D2B(v265, v44);
      }
      v48 = (__int64)v47;
      sub_1418F44E0(v47, v444, v46);
    }
    else
    {
      v48 = 1;
    }
    v390.m128i_i64[0] = v46;
    v390.m128i_i64[1] = v48;
    v391 = v46;
    v401 = v43;
    memset(v403, 0, sizeof(v403));
    v402 = 0;
    v392 = nullptr;
    v393 = 8;
    v394 = 0;
    v395 = 8;
    v396 = 0;
    v397 = 8;
    v398 = 0;
    v399 = 8;
    v400 = 0;
    v354 = v48;
    if ( !v43 )
    {
      v55 = _mm_loadu_si128((const __m128i *)&v401);
      v56 = _mm_loadu_si128((const __m128i *)((char *)&v402 + 8));
      v429 = *(_OWORD *)&v403[1];
      v428 = v56;
      v427 = v55;
      v26 = 0;
      v439 = 8;
      v43 = 8;
      v42 = nullptr;
      v440 = 8;
      v45 = 8;
      v41 = 0;
      v436 = v46;
      v38 = 0;
      v39 = 0;
      goto LABEL_83;
    }
    v439 = v46;
    v435 = v43;
    v49 = 104 * v43;
    v50 = (__int128 *)v445;
    v51 = (__int128 *)(v445 + v49);
    do
    {
      v448 = 1;
      sub_140232AD0((__int64)v416, (__int64)v50);
      v48 = *(_QWORD *)v416;
      if ( *(_QWORD *)v416 != -1 )
      {
        v57 = _mm_loadu_si128((const __m128i *)&v416[8]);
        v43 = *(_QWORD *)&v416[24];
        v26 = _mm_loadu_si128((const __m128i *)&v416[32]);
        v439 = *(_QWORD *)&v416[48];
        v38 = _mm_loadu_si128((const __m128i *)&v416[56]);
        v440 = *(_QWORD *)&v416[72];
        v39 = _mm_loadu_si128((const __m128i *)&v416[80]);
        goto LABEL_82;
      }
      v50 = (__int128 *)((char *)v50 + 104);
    }
    while ( v50 != v51 );
    LOBYTE(v48) = 1;
    v53 = (_QWORD *)v445;
    if ( !a5 )
    {
      if ( v439 == 6 )
      {
        v54 = v444->m128i_i32[0] ^ 0x6E65706F;
        v52 = v54 | v444->m128i_u16[2] ^ 0x6961u;
        LOBYTE(v48) = (v54 | v444->m128i_u16[2] ^ 0x6961) == 0;
      }
      else
      {
        LODWORD(v48) = 0;
      }
    }
    v58 = (__m128i *)v423;
    v59 = v424;
    v60 = v435;
    if ( v435 < 8 )
      goto LABEL_72;
    v436 = v424;
    v448 = 1;
    v61 = sub_14167F170(v52);
    if ( *(_BYTE *)(v61 + 16) == 1 )
    {
      v66 = *(_QWORD *)v61;
      v67 = *(_QWORD *)(v61 + 8);
    }
    else
    {
      v448 = 1;
      v263 = v61;
      v66 = sub_141696260(v63, v62, v64, v65);
      v61 = v263;
      *(_QWORD *)v263 = v66;
      *(_QWORD *)(v263 + 8) = v67;
      *(_BYTE *)(v263 + 16) = 1;
    }
    *(_QWORD *)v61 = v66 + 1;
    *(_OWORD *)&v416[16] = xmmword_1419D6520;
    *(__m128i *)v416 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
    *(_QWORD *)&v416[32] = v66;
    *(_QWORD *)&v416[40] = v67;
    v68 = 0;
    v53 = (_QWORD *)v445;
    do
    {
      if ( v53[v68 / 8 + 6] != -1 )
      {
        sub_140230FD0(&v406, v53[v68 / 8 + 7], v53[v68 / 8 + 8]);
        v69 = sub_1403A6F90(v416, &v406);
        v53 = (_QWORD *)v445;
        if ( v69 )
        {
          v70 = *(_QWORD *)&v416[8];
          if ( *(_QWORD *)&v416[8] )
          {
            LODWORD(v431) = v48;
            v71 = *(_QWORD *)&v416[24];
            if ( *(_QWORD *)&v416[24] )
            {
              v72 = *(_QWORD *)v416;
              v73 = (const __m128i *)(*(_QWORD *)v416 + 16LL);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v416));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    si128 = _mm_load_si128(v73);
                    v72 -= 512;
                    ++v73;
                    _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   ecx, r15d }
                v77 = v72 - (unsigned int)(32 * _ECX);
                v78 = *(_QWORD *)(v77 - 32);
                if ( v78 )
                  sub_140001660(*(_QWORD *)(v77 - 24), v78, 1);
                --v71;
                _R15D &= _R15D - 1;
              }
              while ( v71 );
            }
            v96 = 32 * v70;
            v97 = 33 * v70;
            v91 = v97 == -49;
            v98 = v97 + 49;
            v41 = v434;
            v53 = (_QWORD *)v445;
            if ( !v91 )
              sub_140001660(*(_QWORD *)v416 - v96 - 32, v98, 16);
          }
          v60 = v435;
          v59 = v436;
LABEL_72:
          v448 = 1;
          v99 = v59;
          sub_140247B30((__int64)v416, v53, v60, v58, v59);
          v406 = *(_OWORD *)v416;
          v407.m128i_i64[0] = *(_QWORD *)&v416[16];
          if ( *(_QWORD *)&v416[24] == -1 )
          {
            v314 = _mm_load_si128((const __m128i *)&v406);
            v315 = v407.m128i_i64[0];
            v448 = 1;
            sub_14024F710((__int64)&v347, (__int128 *)v445, v435, (__int128 *)v58->m128i_i8, v99, &v314);
            goto LABEL_75;
          }
          *(_QWORD *)&v351[64] = v417;
          *(_OWORD *)&v351[48] = *(_OWORD *)&v416[96];
          v100 = _mm_loadu_si128((const __m128i *)&v416[48]);
          *(_OWORD *)&v351[32] = *(_OWORD *)&v416[80];
          *(_OWORD *)&v351[16] = *(_OWORD *)&v416[64];
          *(__m128i *)v351 = v100;
          v350 = *(_OWORD *)&v416[32];
          v347 = _mm_load_si128((const __m128i *)&v406);
          v348 = v407.m128i_i64[0];
          v349 = *(_QWORD *)&v416[24];
LABEL_76:
          v101 = v347.m128i_i64[1];
          v445 = v347.m128i_i64[0];
          v410[0] = *(__m128i *)&v351[56];
          v409 = *(_OWORD *)&v351[40];
          v102 = _mm_loadu_si128((const __m128i *)&v349);
          v103 = _mm_loadu_si128((const __m128i *)((char *)&v350 + 8));
          v408 = *(__m256i *)&v351[8];
          v407 = v103;
          v406 = (unsigned __int128)v102;
          v438 = (const __m128i *)v348;
          sub_14024B1A0((__int64)v416, v347.m128i_i32[2], v348, (__int128 *)&v406);
          v48 = *(_QWORD *)v416;
          v57 = _mm_loadu_si128((const __m128i *)&v416[8]);
          v43 = *(_QWORD *)&v416[24];
          v26 = _mm_loadu_si128((const __m128i *)&v416[32]);
          v439 = *(_QWORD *)&v416[48];
          v38 = _mm_loadu_si128((const __m128i *)&v416[56]);
          v440 = *(_QWORD *)&v416[72];
          v39 = _mm_loadu_si128((const __m128i *)&v416[80]);
          v434 = v101;
          v104 = (_QWORD *)v101;
          v444 = nullptr;
          while ( v438 != v444 )
          {
            v444 = (__m128i *)((char *)v444 + 1);
            v105 = v104 + 22;
            sub_140196740(v104);
            v104 = v105;
          }
          if ( v445 )
          {
            v106 = 176 * v445;
            v107 = v434;
            goto LABEL_81;
          }
          goto LABEL_82;
        }
      }
      v68 += 104LL;
    }
    while ( v49 != v68 );
    v79 = *(_QWORD *)&v416[8];
    if ( *(_QWORD *)&v416[8] )
    {
      v437 = (unsigned __int64)v58;
      v80 = v48;
      v81 = *(_QWORD *)&v416[24];
      if ( *(_QWORD *)&v416[24] )
      {
        v82 = *(_QWORD *)v416;
        v83 = (const __m128i *)(*(_QWORD *)v416 + 16LL);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v416));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v85 = _mm_load_si128(v83);
              v82 -= 512;
              ++v83;
              _R15D = _mm_movemask_epi8(v85) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v87 = v82 - (unsigned int)(32 * _ECX);
          v88 = *(_QWORD *)(v87 - 32);
          if ( v88 )
            sub_140001660(*(_QWORD *)(v87 - 24), v88, 1);
          --v81;
          _R15D &= _R15D - 1;
        }
        while ( v81 );
      }
      v89 = 32 * v79;
      v90 = 33 * v79;
      v91 = v90 == -49;
      v92 = v90 + 49;
      v41 = v434;
      LODWORD(v48) = v80;
      v58 = (__m128i *)v437;
      if ( !v91 )
        sub_140001660(*(_QWORD *)v416 - v89 - 32, v92, 16);
    }
    *(_QWORD *)v416 = 0;
    *(_OWORD *)&v416[16] = 4u;
    *(_QWORD *)&v416[40] = 1;
    *(_QWORD *)&v416[48] = &unk_14193C930;
    *(_QWORD *)&v416[56] = 0;
    *(_QWORD *)&v416[72] = 0;
    *(_WORD *)&v416[88] = 0;
    v448 = 1;
    sub_14000B630(&v406, v416);
    if ( (_QWORD)v406 != -1 )
    {
      v334 = v406;
      *(_QWORD *)v416 = 0;
      *(_QWORD *)&v416[8] = 8;
      *(_QWORD *)&v416[16] = 0;
      *(_QWORD *)&v406 = &v334;
      *((_QWORD *)&v406 + 1) = sub_1411C6B40;
      sub_1416ABFD0(&v302, &unk_1419DF91E, &v406);
      v386 = v302;
      *(_QWORD *)v387 = v303;
      v414 = _mm_loadu_si128((const __m128i *)v416);
      v415 = *(_QWORD *)&v416[16];
      if ( (unsigned int)v334 >= 2 && (BYTE8(v334) & 3u) - 2 >= 2 && (BYTE8(v334) & 3) != 0 )
      {
        *(_QWORD *)&v416[8] = *((_QWORD *)&v334 + 1) - 1LL;
        v416[0] = 3;
        v448 = 1;
        sub_1416BCB00(&v416[8]);
      }
      v93 = 10;
      goto LABEL_68;
    }
    v432 = *((volatile signed __int64 **)&v406 + 1);
    *(_QWORD *)v416 = v445;
    *(_QWORD *)&v416[8] = v435;
    *(_QWORD *)&v416[16] = v58;
    *(_QWORD *)&v416[24] = v436;
    sub_14000C940(&v338, *((_QWORD *)&v406 + 1) + 128LL, v416);
    v157 = v340;
    LODWORD(v431) = v48;
    if ( v340 )
    {
      nullsub_1(v156);
      v158 = sub_140001650(424 * v157, 8);
      if ( !v158 )
      {
        v447 = 1;
        sub_141938D2B(8, 424 * v157);
      }
    }
    else
    {
      v158 = 8;
    }
    v421.m128i_i64[0] = v157;
    v421.m128i_i64[1] = v158;
    v422 = 0;
    v419.m128i_i64[0] = 0;
    v419.m128i_i64[1] = 8;
    v420 = 0;
    v316.m256i_i64[0] = -1;
    v161 = v339;
    v162 = &v339[53 * v157];
    v343 = v339;
    v344 = v339;
    v345 = v338;
    v346 = v162;
    while ( v161 != v162 )
    {
      v163 = v161 + 53;
      v344 = v161 + 53;
      v164 = *v161;
      if ( *v161 == -2 )
        break;
      v165 = *(__m128i *)(v161 + 3);
      v166 = *(_OWORD *)(v161 + 5);
      v167 = *(_OWORD *)(v161 + 7);
      v357 = *(__m128i *)(v161 + 1);
      v358 = v165;
      v359 = v166;
      v360 = v167;
      v361 = *(_OWORD *)(v161 + 9);
      v362 = *(_OWORD *)(v161 + 11);
      sub_1418F44E0((__m128i *)&v406, (const __m128i *)(v161 + 13), 0x140u);
      if ( v164 == -1 )
      {
        v172 = v161 + 1;
        *(_OWORD *)&v416[80] = *((_OWORD *)v172 + 5);
        *(_OWORD *)&v416[64] = *((_OWORD *)v172 + 4);
        v173 = _mm_loadu_si128((const __m128i *)v172);
        v174 = _mm_loadu_si128((const __m128i *)v172 + 1);
        v175 = *((_OWORD *)v172 + 2);
        *(_OWORD *)&v416[48] = *((_OWORD *)v172 + 3);
        *(_OWORD *)&v416[32] = v175;
        *(__m128i *)&v416[16] = v174;
        *(__m128i *)v416 = v173;
        if ( v316.m256i_i32[0] == -1 )
        {
          v319 = *(__m256i *)((_BYTE *)v172 + 2);
          v176 = _mm_loadu_si128((const __m128i *)v172);
          v177 = _mm_loadu_si128((const __m128i *)v172 + 1);
          v178 = *((__m128i *)v172 + 2);
          v318 = *((__m128i *)v172 + 3);
          v317 = v178;
          *(__m128i *)&v316.m256i_u64[2] = v177;
          *(__m128i *)v316.m256i_i8 = v176;
        }
        else
        {
          sub_1401954F0(v416);
        }
        v45 = (__int64)v433;
        v161 = v163;
      }
      else
      {
        *(_QWORD *)v416 = v164;
        *(_OWORD *)&v416[88] = v362;
        *(_OWORD *)&v416[72] = v361;
        v168 = _mm_load_si128(&v357);
        v169 = _mm_load_si128(&v358);
        *(_OWORD *)&v416[56] = v360;
        *(_OWORD *)&v416[40] = v359;
        *(__m128i *)&v416[24] = v169;
        *(__m128i *)&v416[8] = v168;
        sub_1418F44E0((__m128i *)&v416[104], (const __m128i *)&v406, 0x140u);
        v45 = (__int64)v433;
        if ( *(_QWORD *)&v416[24] != -1 )
        {
          v443 = 1;
          sub_140284530(&v386, &v416[24]);
          sub_1418F44E0((__m128i *)&v334, &v386, 0xB0u);
          v170 = v420;
          if ( v420 == v419.m128i_i64[0] )
            sub_14190FFF0(&v419);
          sub_1418F44E0((__m128i *)(v419.m128i_i64[1] + 176 * v170), (const __m128i *)&v334, 0xB0u);
          v420 = v170 + 1;
        }
        v171 = v422;
        if ( v422 == v421.m128i_i64[0] )
          sub_14190F880(&v421);
        sub_1418F44E0((__m128i *)(v421.m128i_i64[1] + 424 * v171), (const __m128i *)v416, 0x1A8u);
        v422 = v171 + 1;
        v161 = v163;
      }
    }
    sub_1403F83C0(&v343);
    v93 = v316.m256i_i64[0];
    v41 = v434;
    LOBYTE(v48) = v431;
    if ( v316.m256i_i64[0] == -1 )
    {
      v415 = v422;
      v414 = _mm_loadu_si128(&v421);
      sub_1403FBF90(&v419);
      if ( v419.m128i_i64[0] )
        sub_140001660(v419.m128i_i64[1], 176 * v419.m128i_i64[0], 8);
      sub_1411C79D0(&v432);
      if ( !_InterlockedDecrement64(v432) )
      {
        v448 = 1;
        sub_1411C66E0(&v432);
      }
      v180 = v414.m128i_i64[1];
      v437 = v414.m128i_i64[0];
      v181 = v415;
      v182 = v435;
      sub_14024B560((__int64)&v300, (__int128 *)v445, v435, v414.m128i_i64[1], v415, (__int128 *)v58->m128i_i8, v436);
      if ( v300.m128i_i32[0] == -1 )
      {
        v348 = v415;
        v347 = _mm_load_si128(&v414);
        v349 = -1;
      }
      else
      {
        v441 = 1;
        v430 = v180;
        sub_1403DCC10(&v406, v180, v180 + 424 * v181);
        *(__m128i *)&v416[80] = v301[4];
        *(__m128i *)&v416[64] = v301[3];
        v183 = _mm_loadu_si128(&v300);
        v184 = _mm_loadu_si128(v301);
        *(__m128i *)&v416[48] = v301[2];
        *(__m128i *)&v416[32] = v301[1];
        *(__m128i *)&v416[16] = v184;
        *(__m128i *)v416 = v183;
        v441 = 0;
        sub_140249F20((__int64)&v347, (_QWORD *)v445, v182, v58, v436, (__int64 *)&v406, (__int64)v416, v48);
        sub_1403FBEB0(&v414);
        if ( v437 )
          sub_140001660(v430, 424 * v437, 8);
      }
    }
    else
    {
      *(_QWORD *)v387 = v316.m256i_i64[3];
      v386 = *(__m128i *)&v316.m256i_u64[1];
      v179 = _mm_loadu_si128(&v318);
      v406 = (unsigned __int128)v317;
      v407 = v179;
      v408 = v319;
      v414 = _mm_loadu_si128(&v419);
      v415 = v420;
      sub_1403FBEB0(&v421);
      if ( v421.m128i_i64[0] )
        sub_140001660(v421.m128i_i64[1], 424 * v421.m128i_i64[0], 8);
      sub_1411C79D0(&v432);
      if ( !_InterlockedDecrement64(v432) )
      {
        v448 = 1;
        sub_1411C66E0(&v432);
      }
LABEL_68:
      *(_QWORD *)v416 = v93;
      *(_QWORD *)&v416[24] = *(_QWORD *)v387;
      *(__m128i *)&v416[8] = v386;
      v94 = _mm_load_si128((const __m128i *)&v406);
      v95 = _mm_load_si128(&v407);
      *(__m256i *)&v416[64] = v408;
      *(__m128i *)&v416[48] = v95;
      *(__m128i *)&v416[32] = v94;
      v448 = 1;
      sub_140249F20((__int64)&v347, (_QWORD *)v445, v435, v58, v436, v414.m128i_i64, (__int64)v416, v48);
    }
LABEL_75:
    if ( v349 != -1 )
      goto LABEL_76;
    v146 = v348;
    v389 = v348;
    v388 = _mm_load_si128(&v347);
    v147 = v388.m128i_i64[1];
    v446 = 1;
    sub_1403DCC10(&v357, v388.m128i_i64[1], v388.m128i_i64[1] + 424 * v348);
    v148 = v358.m128i_i64[0];
    v403[1] = v358.m128i_i64[0];
    sub_1414039F0(v416, &v377, *(&off_1419E2D48 + (unsigned int)v384), qword_1419E2D60[v384]);
    if ( *(_QWORD *)v416 != -1 )
    {
      v149 = _mm_loadu_si128((const __m128i *)&v416[17]);
      v150 = _mm_loadu_si128((const __m128i *)&v416[33]);
      *(_OWORD *)&v387[32] = *(_OWORD *)&v416[48];
      *(__m128i *)&v387[17] = v150;
      *(__m128i *)&v387[1] = v149;
      v386 = *(__m128i *)v416;
      v387[0] = v416[16];
      v151 = (__int128 *)v357.m128i_i64[1];
      *(_QWORD *)&v406 = &v386;
      *((_QWORD *)&v406 + 1) = sub_141404740;
      sub_1416ABFD0(&v310, &unk_1419DE4B2, &v406);
      *(_QWORD *)&v416[24] = v311;
      *(__m128i *)&v416[8] = _mm_loadu_si128(&v310);
      *(_QWORD *)v416 = 10;
      sub_14024B1A0((__int64)&v406, (int)v151, v148, (__int128 *)v416);
      v48 = v406;
      v57 = _mm_loadu_si128((const __m128i *)((char *)&v406 + 8));
      v43 = v407.m128i_i64[1];
      v26 = _mm_loadu_si128((const __m128i *)&v408);
      v439 = v408.m256i_i64[2];
      v38 = _mm_loadu_si128((const __m128i *)&v408.m256i_u64[3]);
      v440 = *((_QWORD *)&v409 + 1);
      v39 = _mm_loadu_si128(v410);
      sub_140193AA0(&v386);
LABEL_138:
      v438 = (const __m128i *)v148;
      v445 = (unsigned __int64)v151;
      v152 = v151;
      v444 = nullptr;
      v45 = (__int64)v433;
      v41 = v434;
      while ( v438 != v444 )
      {
        v444 = (__m128i *)((char *)v444 + 1);
        v153 = v152 + 11;
        sub_140196740(v152);
        v152 = v153;
      }
      if ( v357.m128i_i64[0] )
        sub_140001660(v445, 176 * v357.m128i_i64[0], 8);
      v154 = v388.m128i_i64[1];
      v438 = (const __m128i *)v389;
      v445 = v388.m128i_u64[1];
      v444 = nullptr;
      while ( v438 != v444 )
      {
        v444 = (__m128i *)((char *)v444 + 1);
        v155 = v154 + 424;
        sub_14038CC60();
        v154 = v155;
      }
      if ( v388.m128i_i64[0] )
      {
        v106 = 424 * v388.m128i_i64[0];
        v107 = v445;
LABEL_81:
        sub_140001660(v107, v106, 8);
      }
LABEL_82:
      sub_1401968E0(&v390);
      v46 = v57.m128i_i64[0];
      v42 = (__int128 *)_mm_shuffle_epi32(v57, 238).m128i_u64[0];
      v436 = -1;
LABEL_83:
      sub_1403FBEF0(&v404);
      v438 = (const __m128i *)v48;
      v433 = (const __m128i *)v45;
      if ( v426 )
        sub_140001660(v405, 104 * v426, 8);
      v40 = v46;
LABEL_86:
      v445 = (unsigned __int64)v42;
      v108 = v43;
      sub_1401923E0(&v377);
      goto LABEL_87;
    }
    v159 = *((_QWORD *)&v405 + 1);
    v435 = v405;
    if ( v146 < *((_QWORD *)&v405 + 1) )
      v159 = v146;
    v445 = 0;
    v160 = v439;
    v431 = v159;
    while ( 1 )
    {
      v188 = v445;
      v436 = v445;
      if ( v445 >= v159 )
        break;
      v189 = ++v445;
      v190 = v435 + 104 * v188;
      v191 = v147 + 424 * v188;
      v192 = *(_QWORD *)(v191 + 352);
      if ( v192 == -2 )
      {
        ++v403[2];
        *(_QWORD *)&v406 = v191 + 360;
        if ( v394.m128i_i64[0] < 3uLL )
        {
          *(_QWORD *)v416 = v190;
          *(_QWORD *)&v416[8] = sub_1400015F0;
          *(_QWORD *)&v416[16] = &v406;
          *(_QWORD *)&v416[24] = sub_140369D80;
          sub_1416ABFD0(&v341, &unk_1419D58EB, v416);
          v198 = v394.m128i_i64[0];
          if ( (__int128 *)v394.m128i_i64[0] == v392 )
            sub_14190FDC0(&v392);
          v199 = v393;
          v189 = 3 * v198;
          *(_QWORD *)(v393 + 8 * v189 + 16) = v342;
          *(__m128i *)(v199 + 8 * v189) = _mm_loadu_si128(&v341);
          v394.m128i_i64[0] = v198 + 1;
        }
        if ( *(_QWORD *)(v190 + 48) != -1 )
        {
          v200 = v395;
          v201 = v395 + 32 * v396.m128i_i64[0];
          v202 = *(_QWORD *)(v190 + 56);
          v203 = *(_QWORD *)(v190 + 64);
          while ( v200 != v201 )
          {
            v204 = sub_1402899E0(*(_QWORD *)(v200 + 8), *(_QWORD *)(v200 + 16), v202, v203);
            v200 += 32;
            if ( v204 )
              goto LABEL_183;
          }
          v205 = *(_QWORD *)(v190 + 64);
          if ( v205 < 0 )
          {
            v207 = 0;
LABEL_354:
            sub_141938D2B(v207, v205);
          }
          v437 = *(_QWORD *)(v190 + 64);
          if ( v205 )
          {
            v206 = *(const __m128i **)(v190 + 56);
            nullsub_1(v189);
            v207 = 1;
            v208 = (__m128i *)sub_140001650(v205, 1);
            if ( !v208 )
              goto LABEL_354;
            v430 = (__int64)v208;
            sub_1418F44E0(v208, v206, v205);
          }
          else
          {
            v430 = 1;
          }
          v222 = *(_BYTE *)(v190 + 72);
          v223 = v396.m128i_i64[0];
          if ( v396.m128i_i64[0] == v394.m128i_i64[1] )
            sub_14190F570(&v394.m128i_u64[1]);
          v185 = v395;
          v186 = 32 * v223;
          v187 = v437;
          *(_QWORD *)(v395 + v186) = v437;
          *(_QWORD *)(v185 + v186 + 8) = v430;
          *(_QWORD *)(v185 + v186 + 16) = v187;
          *(_BYTE *)(v185 + v186 + 24) = v222;
          v396.m128i_i64[0] = v223 + 1;
        }
LABEL_183:
        v160 = v439;
        v159 = v431;
      }
      else if ( (v192 == -1 || (unsigned __int8)sub_140237AF0(*(_QWORD *)(v191 + 360), *(_QWORD *)(v191 + 368)))
             && (*(_QWORD *)(v191 + 376) == -1
              || (unsigned __int8)sub_140237AF0(*(_QWORD *)(v191 + 384), *(_QWORD *)(v191 + 392)))
             && (*(_QWORD *)(v191 + 400) == -1
              || (unsigned __int8)sub_140237AF0(*(_QWORD *)(v191 + 408), *(_QWORD *)(v191 + 416))) )
      {
        if ( *(_QWORD *)(v191 + 264) != -1 )
        {
          sub_1416AC440(&v406, v191 + 264);
          v194 = *(_QWORD *)(v191 + 304);
          if ( v194 < 0 )
          {
            v195 = 0;
LABEL_352:
            sub_141938D2B(v195, v194);
          }
          if ( v194 )
          {
            v437 = *(_QWORD *)(v191 + 296);
            nullsub_1(v193);
            v195 = 1;
            v196 = (__m128i *)sub_140001650(v194, 1);
            if ( !v196 )
              goto LABEL_352;
            v197 = (__int64)v196;
            sub_1418F44E0(v196, (const __m128i *)v437, v194);
          }
          else
          {
            v197 = 1;
          }
          v209 = *(_BYTE *)(v191 + 312);
          *(_QWORD *)&v416[24] = v194;
          *(_QWORD *)&v416[32] = v197;
          *(_QWORD *)&v416[40] = v194;
          v210 = *(_OWORD *)(v191 + 320);
          *(__m128i *)&v416[72] = _mm_loadu_si128((const __m128i *)(v191 + 336));
          *(_OWORD *)&v416[56] = v210;
          *(_QWORD *)&v416[16] = v407.m128i_i64[0];
          *(__m128i *)v416 = _mm_loadu_si128((const __m128i *)&v406);
          v416[48] = v209;
          v211 = v398.m128i_i64[0];
          if ( v398.m128i_i64[0] == v396.m128i_i64[1] )
            sub_14190FF10(&v396.m128i_u64[1]);
          v212 = v397;
          v213 = 88 * v211;
          *(_QWORD *)(v397 + v213 + 80) = *(_QWORD *)&v416[80];
          *(_OWORD *)(v212 + v213 + 64) = *(_OWORD *)&v416[64];
          v214 = _mm_load_si128((const __m128i *)v416);
          v215 = _mm_load_si128((const __m128i *)&v416[16]);
          v216 = *(_OWORD *)&v416[32];
          *(_OWORD *)(v212 + v213 + 48) = *(_OWORD *)&v416[48];
          *(_OWORD *)(v212 + v213 + 32) = v216;
          *(__m128i *)(v212 + v213 + 16) = v215;
          *(__m128i *)(v212 + v213) = v214;
          v398.m128i_i64[0] = v211 + 1;
          v160 = v439;
        }
        if ( v160 == 6
          && !(v444->m128i_i32[0] ^ 0x6E65706F | v444->m128i_u16[2] ^ 0x6961)
          && *(_QWORD *)(v190 + 48) != -1 )
        {
          sub_1416AC440(&v334, v190);
          sub_1403F19B0(&v406, v190 + 48);
          v217 = *(_BYTE *)(v190 + 72);
          v218 = v406;
          v219 = v407.m128i_i64[0];
          if ( *(_QWORD *)(v191 + 200) == -1 )
          {
            v220 = -1;
          }
          else
          {
            v430 = *((_QWORD *)&v406 + 1);
            v437 = v406;
            sub_1402863C0(&v406, v191 + 200);
            v220 = v406;
            v221 = _mm_loadu_si128((const __m128i *)&v407.m128i_u64[1]);
            v386 = _mm_loadu_si128((const __m128i *)((char *)&v406 + 8));
            *(__m128i *)v387 = v221;
            *(_OWORD *)&v387[16] = *(_OWORD *)&v408.m256i_u64[1];
            *(_QWORD *)&v387[32] = v408.m256i_i64[3];
            v218 = __PAIR128__(v430, v437);
          }
          *(_QWORD *)&v416[16] = v335.m128i_i64[0];
          *(_OWORD *)v416 = v334;
          *(_OWORD *)&v416[24] = v218;
          *(_QWORD *)&v416[40] = v219;
          v416[48] = v217;
          *(_QWORD *)&v416[56] = v220;
          v417 = *(_QWORD *)&v387[32];
          v224 = _mm_load_si128(&v386);
          v225 = _mm_load_si128((const __m128i *)v387);
          *(_OWORD *)&v416[96] = *(_OWORD *)&v387[16];
          *(__m128i *)&v416[80] = v225;
          *(__m128i *)&v416[64] = v224;
          v226 = v400;
          if ( v400 == v398.m128i_i64[1] )
            sub_14190FF80(&v398.m128i_u64[1]);
          v227 = v399;
          v228 = 120 * v226;
          *(_QWORD *)(v399 + v228 + 112) = v417;
          *(_OWORD *)(v227 + v228 + 96) = *(_OWORD *)&v416[96];
          *(_OWORD *)(v227 + v228 + 80) = *(_OWORD *)&v416[80];
          *(_OWORD *)(v227 + v228 + 64) = *(_OWORD *)&v416[64];
          v229 = _mm_load_si128((const __m128i *)v416);
          v230 = _mm_load_si128((const __m128i *)&v416[16]);
          v231 = *(_OWORD *)&v416[32];
          *(_OWORD *)(v227 + v228 + 48) = *(_OWORD *)&v416[48];
          *(_OWORD *)(v227 + v228 + 32) = v231;
          *(__m128i *)(v227 + v228 + 16) = v230;
          *(__m128i *)(v227 + v228) = v229;
          v400 = v226 + 1;
          v160 = v439;
        }
        v232 = 1;
        if ( *(_QWORD *)(v190 + 40) == v160 )
          v232 = (unsigned int)sub_1418F4B70(*(_QWORD *)(v190 + 32), v444) != 0;
        v233 = v423;
        v234 = v424;
        if ( *(_QWORD *)(v191 + 352) != -1
          && (*(_QWORD *)(v191 + 368) != v424 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v191 + 360), v423))
          || *(_QWORD *)(v191 + 376) != -1
          && (*(_QWORD *)(v191 + 392) != v234 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v191 + 384), v233)) )
        {
          goto LABEL_237;
        }
        if ( *(_QWORD *)(v191 + 400) == -1 )
        {
          v160 = v439;
          if ( v232 )
            goto LABEL_239;
        }
        else
        {
          if ( *(_QWORD *)(v191 + 416) == v234 )
          {
            v235 = (unsigned int)sub_1418F4B70(*(_QWORD *)(v191 + 408), v233) == 0;
            goto LABEL_238;
          }
LABEL_237:
          v235 = 0;
LABEL_238:
          v160 = v439;
          if ( v232 )
          {
LABEL_239:
            v347.m128i_i64[0] = v190;
            v347.m128i_i64[1] = (__int64)&off_1419DE400;
            v348 = (__int64)&v423;
            v349 = (__int64)&unk_1419D4100;
            sub_1401895D0(
              (unsigned int)&v334,
              (unsigned int)&v377,
              (unsigned int)aUpdateThreadsS,
              52,
              (__int64)&v347,
              2);
            if ( (_QWORD)v334 != -1 )
            {
              v260 = _mm_loadu_si128((const __m128i *)&v334);
              v261 = _mm_loadu_si128(&v335);
              *(_OWORD *)&v387[32] = v337;
              *(_OWORD *)&v387[16] = v336;
              *(__m128i *)v387 = v261;
              v386 = v260;
              v151 = (__int128 *)v357.m128i_i64[1];
              *(_QWORD *)&v406 = v190;
              *((_QWORD *)&v406 + 1) = sub_1400015F0;
              v407.m128i_i64[0] = (__int64)&v386;
              v407.m128i_i64[1] = (__int64)sub_141404740;
              sub_1416ABFD0(&v308, &unk_1419DE486, &v406);
              *(_QWORD *)&v416[24] = v309;
              *(__m128i *)&v416[8] = _mm_loadu_si128(&v308);
              *(_QWORD *)v416 = 10;
              sub_14024B1A0((__int64)&v406, (int)v151, v148, (__int128 *)v416);
              v48 = v406;
              v57 = _mm_loadu_si128((const __m128i *)((char *)&v406 + 8));
              v43 = v407.m128i_i64[1];
              v26 = _mm_loadu_si128((const __m128i *)&v408);
              v439 = v408.m256i_i64[2];
              v38 = _mm_loadu_si128((const __m128i *)&v408.m256i_u64[3]);
              v262 = *((_QWORD *)&v409 + 1);
              v39 = _mm_loadu_si128(v410);
              sub_140193AA0(&v386);
              v440 = v262;
LABEL_284:
              sub_1401936A0(&v377);
              goto LABEL_138;
            }
            if ( !*((_QWORD *)&v334 + 1) )
            {
              v151 = (__int128 *)v357.m128i_i64[1];
              *(_QWORD *)&v406 = v190;
              *((_QWORD *)&v406 + 1) = sub_1400015F0;
              sub_1416ABFD0(&v306, &unk_1419DE454, &v406);
              *(_QWORD *)&v416[24] = v307;
              *(__m128i *)&v416[8] = _mm_loadu_si128(&v306);
              *(_QWORD *)v416 = 10;
              sub_14024B1A0((__int64)&v406, (int)v151, v148, (__int128 *)v416);
              v48 = v406;
              v57 = _mm_loadu_si128((const __m128i *)((char *)&v406 + 8));
              v43 = v407.m128i_i64[1];
              v26 = _mm_loadu_si128((const __m128i *)&v408);
              v439 = v408.m256i_i64[2];
              v38 = _mm_loadu_si128((const __m128i *)&v408.m256i_u64[3]);
              v440 = *((_QWORD *)&v409 + 1);
              v39 = _mm_loadu_si128(v410);
              goto LABEL_284;
            }
            ++v403[0];
            v160 = v439;
LABEL_244:
            ++*((_QWORD *)&v402 + 1);
LABEL_245:
            v159 = v431;
            continue;
          }
          if ( !v235 )
            goto LABEL_244;
        }
        *(_QWORD *)&v402 = v402 + 1;
        goto LABEL_245;
      }
    }
    sub_1414039F0(&v334, &v377, aCommit_0, 6);
    if ( v377.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
      sub_141938FA0(&off_1419D80F8);
    ++v377.m128i_i64[0];
    v236 = sub_1417AF4A0(v378);
    --v377.m128i_i64[0];
    if ( !v236 )
    {
      sub_1414039F0(v416, &v377, aRollback_0, 8);
      if ( *(_QWORD *)v416 != -1 )
        sub_140193AA0(v416);
    }
    if ( (_QWORD)v334 != -1 )
    {
      v237 = _mm_loadu_si128((const __m128i *)&v334);
      v238 = _mm_loadu_si128(&v335);
      *(_OWORD *)&v387[32] = v337;
      *(_OWORD *)&v387[16] = v336;
      *(__m128i *)v387 = v238;
      v386 = v237;
      v151 = (__int128 *)v357.m128i_i64[1];
      *(_QWORD *)&v406 = &v386;
      *((_QWORD *)&v406 + 1) = sub_141404740;
      sub_1416ABFD0(&v304, &unk_1419DE323, &v406);
      *(_QWORD *)&v416[24] = v305;
      *(__m128i *)&v416[8] = _mm_loadu_si128(&v304);
      *(_QWORD *)v416 = 10;
      sub_14024B1A0((__int64)&v406, (int)v151, v148, (__int128 *)v416);
      v48 = v406;
      v57 = _mm_loadu_si128((const __m128i *)((char *)&v406 + 8));
      v43 = v407.m128i_i64[1];
      v26 = _mm_loadu_si128((const __m128i *)&v408);
      v439 = v408.m256i_i64[2];
      v38 = _mm_loadu_si128((const __m128i *)&v408.m256i_u64[3]);
      v239 = *((_QWORD *)&v409 + 1);
      v39 = _mm_loadu_si128(v410);
      sub_140193AA0(&v386);
      v440 = v239;
      goto LABEL_138;
    }
    sub_14023D8C0((__int64)&v377, (__int64)aThreadProvider, 27);
    v240 = v431;
    if ( a5 )
    {
      v241 = 0;
      while ( v241 < v240 )
      {
        v242 = v241++;
        if ( *(_QWORD *)(v435 + 104 * v242 + 48) != -1 )
        {
          v243 = v147 + 424 * v242;
          if ( *(_QWORD *)(v243 + 200) != -1 )
          {
            *((_QWORD *)&v244 + 1) = v435 + 104 * v242;
            *(_QWORD *)&v244 = *(_QWORD *)(*((_QWORD *)&v244 + 1) + 64LL);
            if ( (__int64)v244 < 0 )
            {
              v245 = 0;
LABEL_356:
              sub_141938D2B(v245, v244);
            }
            if ( (_QWORD)v244 )
            {
              v444 = *(__m128i **)(*((_QWORD *)&v244 + 1) + 56LL);
              nullsub_1(v240);
              v245 = 1;
              v246 = (__m128i *)sub_140001650(v244, 1);
              if ( !v246 )
                goto LABEL_356;
              v247 = (__int64)v246;
              sub_1418F44E0(v246, v444, v244);
            }
            else
            {
              v247 = 1;
            }
            v248 = *(_BYTE *)(*((_QWORD *)&v244 + 1) + 72LL);
            v386.m128i_i64[0] = v244;
            v386.m128i_i64[1] = v247;
            *(_QWORD *)v387 = v244;
            v387[8] = v248;
            v442 = 1;
            sub_1416AC440(&v406, *((_QWORD *)&v244 + 1));
            *((_QWORD *)&v244 + 1) = *(_QWORD *)(v243 + 216);
            if ( v244 < 0 )
            {
              v251 = 0;
LABEL_358:
              sub_141938D2B(v251, *((_QWORD *)&v244 + 1));
            }
            if ( *((_QWORD *)&v244 + 1) )
            {
              v250 = *(const __m128i **)(v243 + 208);
              nullsub_1(v249);
              v251 = 1;
              v252 = (__m128i *)sub_140001650(*((_QWORD *)&v244 + 1), 1);
              if ( !v252 )
                goto LABEL_358;
              *(_QWORD *)&v244 = v252;
              sub_1418F44E0(v252, v250, *((unsigned __int64 *)&v244 + 1));
            }
            else
            {
              *(_QWORD *)&v244 = 1;
            }
            v253 = *(_BYTE *)(v243 + 224);
            v254 = *(_QWORD *)(v243 + 232);
            v255 = *(_DWORD *)(v243 + 248);
            v256 = *(_DWORD *)(v243 + 252);
            v257 = *(_DWORD *)(v243 + 256);
            *(_QWORD *)&v416[16] = v407.m128i_i64[0];
            *(__m128i *)v416 = _mm_loadu_si128((const __m128i *)&v406);
            *(_QWORD *)&v416[24] = *((_QWORD *)&v244 + 1);
            *(_OWORD *)&v416[32] = v244;
            v416[48] = v253;
            *(_QWORD *)&v416[56] = v254;
            *(_QWORD *)&v416[64] = *(_QWORD *)(v243 + 240);
            *(_DWORD *)&v416[72] = v255;
            *(_DWORD *)&v416[76] = v256;
            *(_DWORD *)&v416[80] = v257;
            v442 = 0;
            sub_1403A6BE0(&v406, a5, &v386, v416);
            if ( (_QWORD)v406 != -1 )
            {
              if ( (_QWORD)v406 )
                sub_140001660(*((_QWORD *)&v406 + 1), v406, 1);
              if ( v407.m128i_i64[1] )
                sub_140001660(v408.m256i_i64[0], v407.m128i_i64[1], 1);
            }
            v240 = v431;
          }
        }
      }
    }
    if ( *((_QWORD *)&v402 + 1) | v403[2] && *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      v386.m128i_i64[0] = (__int64)v438;
      v386.m128i_i64[1] = v440;
      *(_QWORD *)v416 = &v386;
      *(_QWORD *)&v416[8] = sub_14169F630;
      *(_QWORD *)&v416[16] = &v423;
      *(_QWORD *)&v416[24] = sub_140186EE0;
      *(_QWORD *)&v416[32] = &v401;
      *(_QWORD *)&v416[40] = sub_1416BCB10;
      *(_QWORD *)&v416[48] = (char *)&v402 + 8;
      *(_QWORD *)&v416[56] = sub_1416BCB10;
      *(_QWORD *)&v416[64] = v403;
      *(_QWORD *)&v416[72] = sub_1416BCB10;
      *(_QWORD *)&v416[80] = &v403[1];
      *(_QWORD *)&v416[88] = sub_1416BCB10;
      *(_QWORD *)&v416[96] = &v403[2];
      *(_QWORD *)&v416[104] = sub_1416BCB10;
      *(_QWORD *)&v406 = aCodexmateLibCo_0;
      *((_QWORD *)&v406 + 1) = 51;
      v407.m128i_i64[0] = (__int64)aCodexmateLibCo_0;
      v407.m128i_i64[1] = 51;
      v408.m256i_i64[0] = (__int64)&off_1419DE3E8;
      sub_140BAD520(&unk_1419DE37B, v416, 3, &v406);
    }
    v258 = v390.m128i_i64[1];
    v436 = v390.m128i_i64[0];
    v40 = v391;
    v445 = (unsigned __int64)v392;
    v108 = v393;
    v26 = _mm_loadu_si128(&v394);
    v439 = v395;
    v38 = _mm_loadu_si128(&v396);
    v440 = v397;
    v39 = _mm_loadu_si128(&v398);
    v433 = (const __m128i *)v399;
    v41 = v400;
    v259 = _mm_loadu_si128((const __m128i *)((char *)&v402 + 8));
    v427 = _mm_loadu_si128((const __m128i *)&v401);
    v428 = v259;
    v429 = *(_OWORD *)&v403[1];
    v446 = 0;
    sub_140191080(v357.m128i_i64);
    v448 = 0;
    sub_140190D60(&v388);
    sub_140190E90(&v404);
    sub_1401923E0(&v377);
    v438 = (const __m128i *)v258;
LABEL_87:
    v35 = _mm_shuffle_epi32(v39, 238).m128i_u64[0];
    v34 = v39.m128i_i64[0];
    v32 = _mm_shuffle_epi32(v38, 238).m128i_u64[0];
    v29 = v38.m128i_i64[0];
    v28 = _mm_shuffle_epi32(v26, 238).m128i_u64[0];
    v37 = v41;
    v444 = (__m128i *)v26.m128i_i64[0];
    v25 = v436;
    v36 = (__int64)v433;
    v30 = v108;
    v31 = (__int128 *)v445;
    v27 = v439;
    v33 = v440;
    v24 = (__int64)v438;
    if ( v436 == -1 )
      goto LABEL_304;
LABEL_88:
    v440 = v35;
    v426 = v28;
    v433 = (const __m128i *)v36;
    v329 = v36;
    v434 = v37;
    v330 = v37;
    v333 = v429;
    v332 = v428;
    v331 = v427;
    v445 = (unsigned __int64)v31;
    v322 = v31;
    v435 = v30;
    v323 = v30;
    v324 = v26;
    v439 = v27;
    v325 = v27;
    v326 = v38;
    v327 = v33;
    v328 = v39;
    v436 = v25;
    v320.m128i_i64[0] = v25;
    v320.m128i_i64[1] = v24;
    v321 = v40;
    v374 = _mm_add_epi64(_mm_loadu_si128(&v374), _mm_loadu_si128(&v331));
    v375 = _mm_add_epi64(_mm_loadu_si128(&v375), _mm_loadu_si128(&v332));
    *(_QWORD *)&v376 = v429 + v376;
    *(_QWORD *)v416 = v33;
    v109 = v32;
    *(_QWORD *)&v416[16] = v32;
    *(_QWORD *)&v416[8] = v33;
    *(_QWORD *)&v416[24] = v33 + 88 * v34;
    v110 = v371;
    if ( v34 > *((_QWORD *)&v369 + 1) - (_QWORD)v371 )
    {
      sub_14190D590((unsigned int)&v369 + 8, v371, v34, 8, 88);
      v110 = v371;
LABEL_90:
      sub_1418F44E0((__m128i *)(v370 + 88 * v110), (const __m128i *)v33, 88 * v34);
    }
    else if ( v34 )
    {
      goto LABEL_90;
    }
    *(_QWORD *)&v371 = v34 + v110;
    if ( v109 )
      sub_140001660(v33, 88 * v109, 8);
    v111 = 120 * v434;
    *(_QWORD *)v416 = v433;
    v112 = v440;
    *(_QWORD *)&v416[16] = v440;
    *(_QWORD *)&v416[8] = v433;
    *(_QWORD *)&v416[24] = (char *)v433 + 120 * v434;
    v113 = v373;
    v114 = (const __m128i *)v439;
    if ( v434 > *((_QWORD *)&v371 + 1) - v373 )
    {
      sub_14190D590((unsigned int)&v371 + 8, v373, v434, 8, 120);
      v115 = v444;
      v113 = v373;
LABEL_95:
      sub_1418F44E0((__m128i *)(v372 + 120 * v113), v433, v111);
    }
    else
    {
      v115 = v444;
      if ( v434 )
        goto LABEL_95;
    }
    v373 = v434 + v113;
    if ( v112 )
      sub_140001660(v433, 120 * v112, 8);
    *((_QWORD *)&v376 + 1) += *((_QWORD *)&v333 + 1);
    v116 = v435;
    v117 = v435 + 24LL * (_QWORD)v115;
    *(_QWORD *)v416 = v435;
    *(_QWORD *)&v416[8] = v435;
    *(_QWORD *)&v416[16] = v445;
    *(_QWORD *)&v416[24] = v117;
    v5 = v434;
    if ( v115 )
    {
      v118 = v435 + 24;
      while ( 1 )
      {
        v116 = v118;
        v122 = *(const __m128i **)(v118 - 24);
        if ( v122 == (const __m128i *)-1LL )
        {
LABEL_105:
          *(_QWORD *)&v416[8] = v116;
          goto LABEL_108;
        }
        v123 = *(_QWORD *)(v118 - 16);
        v124 = v367;
        if ( (unsigned __int64)v367 > 2 )
          break;
        v438 = *(const __m128i **)(v118 - 16);
        v444 = (__m128i *)v122;
        v440 = v118;
        v125 = *(_QWORD *)(v118 - 8);
        if ( (_QWORD)v367 == v365 )
          sub_14190FDC0(&v365);
        v116 = v440;
        v119 = v440 - 24;
        v120 = v366;
        v121 = 3 * v124;
        *(_QWORD *)(v366 + 8 * v121) = v444;
        *(_QWORD *)(v120 + 8 * v121 + 8) = v438;
        *(_QWORD *)(v120 + 8 * v121 + 16) = v125;
        *(_QWORD *)&v367 = v124 + 1;
        v118 = v116 + 24;
        if ( v119 + 24 == v117 )
          goto LABEL_105;
      }
      *(_QWORD *)&v416[8] = v118;
      if ( v122 )
      {
        v126 = v118;
        sub_140001660(v123, v122, 1);
        v116 = v126;
      }
    }
LABEL_108:
    v127 = v426;
    if ( v117 != v116 )
    {
      v128 = (v117 - v116) / 0x18;
      v129 = (_QWORD *)(v116 + 8);
      do
      {
        v130 = *(v129 - 1);
        if ( v130 )
        {
          v131 = v129;
          sub_140001660(*v129, v130, 1);
          v129 = v131;
        }
        v129 += 3;
        --v128;
      }
      while ( v128 );
    }
    if ( v445 )
      sub_140001660(v435, 24 * v445, 8);
    v418 += 32;
    v132 = &v114[2 * v29];
    *(_QWORD *)v416 = v114;
    *(_QWORD *)&v416[8] = v114;
    *(_QWORD *)&v416[16] = v127;
    *(_QWORD *)&v416[24] = v132;
    v133 = v114;
LABEL_117:
    while ( v133 != v132 )
    {
      v136 = v133 + 2;
      *(_QWORD *)&v416[8] = v133 + 2;
      if ( v133->m128i_i64[0] == -1 )
      {
        v133 += 2;
        break;
      }
      v445 = v133->m128i_i64[0];
      v440 = v133->m128i_i64[1];
      v137 = _mm_loadu_si128(v133 + 1);
      v138 = v133[1].m128i_i64[0];
      v139 = (const __m128i *)v368;
      v438 = (const __m128i *)(v368 + 32 * v369);
      while ( 1 )
      {
        v444 = (__m128i *)v139;
        if ( v139 == v438 )
          break;
        v140 = sub_1402899E0(v139->m128i_i64[1], v139[1].m128i_i64[0], v440, v138);
        v139 = v444 + 2;
        if ( v140 )
        {
          v133 = v136;
          if ( v445 )
          {
            sub_140001660(v440, v445, 1);
            v133 = v136;
          }
          goto LABEL_117;
        }
      }
      v141 = v369;
      if ( (_QWORD)v369 == *((_QWORD *)&v367 + 1) )
        sub_14190F570((char *)&v367 + 8);
      v134 = v368;
      v135 = 32 * v141;
      *(_QWORD *)(v368 + v135) = v445;
      *(_QWORD *)(v134 + v135 + 8) = v440;
      *(__m128i *)(v134 + v135 + 16) = v137;
      *(_QWORD *)&v369 = v141 + 1;
      v133 = v136;
    }
    v142 = (char *)v132 - (char *)v133;
    if ( v142 )
    {
      v143 = v142 >> 5;
      v144 = &v133->m128i_i64[1];
      do
      {
        v145 = *(v144 - 1);
        if ( v145 )
          sub_140001660(*v144, v145, 1);
        v144 += 4;
        --v143;
      }
      while ( v143 );
    }
    if ( v127 )
      sub_140001660(v114, 32 * v127, 8);
    v6 = v353;
    v17 = v418;
    if ( v436 )
      sub_140001660(v320.m128i_i64[1], v436, 1);
  }
  v266 = v413;
  if ( v413 > 1 )
  {
    sub_14024DBF0(v416, v356, v6, 6);
    if ( *(_QWORD *)&v416[80]
      || __PAIR128__(*(unsigned __int64 *)&v416[88], 0) != *(unsigned __int64 *)&v416[96]
      || *(_QWORD *)&v416[40] )
    {
      nullsub_1(v267);
      v444 = (__m128i *)sub_140001650(24, 8);
      if ( !v444 )
        sub_141938D11(8, 24);
      *(_QWORD *)&v406 = v416;
      *((_QWORD *)&v406 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v316, &unk_1419DECE8, &v406);
      v268 = v444;
      v444[1].m128i_i64[0] = v316.m256i_i64[2];
      *v268 = _mm_loadu_si128((const __m128i *)&v316);
      v427.m128i_i64[0] = 1;
      v427.m128i_i64[1] = (__int64)v268;
      v428.m128i_i64[0] = 1;
      if ( *(_QWORD *)&v416[80] )
      {
        *(_QWORD *)&v406 = &v416[80];
        *((_QWORD *)&v406 + 1) = sub_1416BCB10;
        sub_1416ABFD0(&v357, &unk_1419DECF2, &v406);
        v269 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v270 = v427.m128i_i64[1];
        v271 = 3 * v269;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v271 + 16) = v358.m128i_i64[0];
        *(__m128i *)(v270 + 8 * v271) = _mm_loadu_si128(&v357);
        v272 = v269 + 1;
        v428.m128i_i64[0] = v272;
      }
      else
      {
        LODWORD(v272) = 1;
      }
      if ( *(_QWORD *)&v416[88] )
      {
        *(_QWORD *)&v406 = &v416[88];
        *((_QWORD *)&v406 + 1) = sub_1416BCB10;
        sub_1416ABFD0(&v377, &unk_1419DED03, &v406);
        v277 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v278 = v427.m128i_i64[1];
        v279 = 3 * v277;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v279 + 16) = v378;
        *(__m128i *)(v278 + 8 * v279) = _mm_loadu_si128(&v377);
        v272 = v277 + 1;
        v428.m128i_i64[0] = v272;
      }
      if ( *(_QWORD *)&v416[96] )
      {
        *(_QWORD *)&v406 = &v416[96];
        *((_QWORD *)&v406 + 1) = sub_1416BCB10;
        sub_1416ABFD0(&v347, &unk_1419DED19, &v406);
        v280 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v281 = v427.m128i_i64[1];
        v282 = 3 * v280;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v282 + 16) = v348;
        *(__m128i *)(v281 + 8 * v282) = _mm_loadu_si128(&v347);
        v272 = v280 + 1;
        v428.m128i_i64[0] = v272;
      }
      if ( *(_QWORD *)&v416[104] )
      {
        *(_QWORD *)&v406 = &v416[104];
        *((_QWORD *)&v406 + 1) = sub_1416BCB10;
        sub_1416ABFD0(&v320, &unk_1419DED2D, &v406);
        v283 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v284 = v427.m128i_i64[1];
        v285 = 3 * v283;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v285 + 16) = v321;
        *(__m128i *)(v284 + 8 * v285) = _mm_loadu_si128(&v320);
        v272 = v283 + 1;
        v428.m128i_i64[0] = v272;
      }
      if ( *(_QWORD *)&v416[40] )
      {
        v386.m128i_i64[0] = *(_QWORD *)&v416[40];
        *(_QWORD *)&v406 = &v386;
        *((_QWORD *)&v406 + 1) = sub_1416BCB10;
        sub_1416ABFD0(&v390, &unk_1419DED44, &v406);
        v286 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v287 = v427.m128i_i64[1];
        v288 = 3 * v286;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v288 + 16) = v391;
        *(__m128i *)(v287 + 8 * v288) = _mm_loadu_si128(&v390);
        v272 = v286 + 1;
        v428.m128i_i64[0] = v272;
      }
      if ( *(_QWORD *)&v416[64] )
      {
        sub_140D1EE10((unsigned int)&v406, *(_DWORD *)&v416[56], *(_DWORD *)&v416[64], (unsigned int)&unk_1419DD3F1, 3);
        *(_QWORD *)v387 = v407.m128i_i64[0];
        v386 = _mm_loadu_si128((const __m128i *)&v406);
        *(_QWORD *)&v406 = &v386;
        *((_QWORD *)&v406 + 1) = sub_1400015F0;
        sub_1416ABFD0(&v334, &unk_1419DED53, &v406);
        if ( v386.m128i_i64[0] )
          sub_140001660(v386.m128i_i64[1], v386.m128i_i64[0], 1);
        v289 = v428.m128i_i64[0];
        if ( v428.m128i_i64[0] == v427.m128i_i64[0] )
          sub_14190FDC0(&v427);
        v290 = v427.m128i_i64[1];
        v291 = 3 * v289;
        *(_QWORD *)(v427.m128i_i64[1] + 8 * v291 + 16) = v335.m128i_i64[0];
        *(__m128i *)(v290 + 8 * v291) = _mm_loadu_si128((const __m128i *)&v334);
        v272 = v289 + 1;
        v428.m128i_i64[0] = v272;
      }
      sub_140D1EE10((unsigned int)&v406, v427.m128i_i32[2], v272, (unsigned int)&unk_1419D4620, 2);
      *(_QWORD *)v387 = v407.m128i_i64[0];
      v386 = _mm_loadu_si128((const __m128i *)&v406);
      v292 = v428.m128i_i64[0];
      if ( v428.m128i_i64[0] )
      {
        v293 = (_QWORD *)(v427.m128i_i64[1] + 8);
        do
        {
          v294 = *(v293 - 1);
          if ( v294 )
            sub_140001660(*v293, v294, 1);
          v293 += 3;
          --v292;
        }
        while ( v292 );
      }
      if ( v427.m128i_i64[0] )
        sub_140001660(v427.m128i_i64[1], 24 * v427.m128i_i64[0], 8);
      *(_QWORD *)&v406 = &v386;
      *((_QWORD *)&v406 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v312, &unk_1419E0105, &v406);
      if ( v386.m128i_i64[0] )
        sub_140001660(v386.m128i_i64[1], v386.m128i_i64[0], 1);
      v295 = v425;
      v425[2].m128i_i64[0] = v313;
      v295[1] = _mm_loadu_si128(&v312);
      v295->m128i_i64[1] = 10;
      v295->m128i_i64[0] = -1;
      sub_140196AD0(v416);
      v275 = v412;
      v276 = v413;
      if ( !v413 )
        goto LABEL_343;
      goto LABEL_339;
    }
    sub_140196AD0(v416);
    result = sub_1418F44E0(v425, &v363, 0xA8u);
    v273 = v412;
    goto LABEL_347;
  }
  result = sub_1418F44E0(v425, &v363, 0xA8u);
  v273 = v412;
  if ( v266 )
  {
LABEL_347:
    v298 = (_QWORD *)(v273 + 8);
    do
    {
      v299 = *(v298 - 1);
      if ( v299 )
        result = sub_140001660(*v298, v299, 1);
      v298 += 4;
      --v266;
    }
    while ( v266 );
  }
  if ( v411 )
    return sub_140001660(v273, 32 * v411, 8);
  return result;
}
