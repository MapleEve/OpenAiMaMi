// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14032e670 | name sub_14032E670
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14032E670(
        __m128i *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // rcx
  __int64 v12; // rcx
  __m128i *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int8 v17; // di
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE *v24; // rax
  __int128 v25; // rdi
  __int64 *v26; // r12
  __m128i si128; // xmm6
  __m128i v28; // xmm7
  __m128i v29; // xmm8
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // r13
  _QWORD *v33; // rax
  int v34; // eax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // r15
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int128 v40; // xmm2
  char v41; // bl
  __int64 v42; // r12
  unsigned __int128 v43; // kr00_16
  __int64 v44; // rax
  __int64 v45; // rdx
  char v46; // al
  __m128i *v47; // rax
  __m128i *v48; // rdx
  __int8 v49; // cl
  void *v50; // rax
  __int64 v51; // rcx
  const __m128i *v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rax
  const __m128i *v55; // rdx
  const __m128i *v56; // r15
  __int64 v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // r12
  int v60; // eax
  char v61; // cl
  __int8 v62; // si
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  unsigned int v71; // eax
  __m128i *v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  _OWORD *v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128i v88; // xmm0
  __m128i *v89; // rcx
  __m128i *v90; // rsi
  __m128i *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rcx
  __m128i *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  _BYTE *v99; // rax
  __m128i *v100; // rdx
  __int64 v101; // r12
  __m128i v102; // xmm6
  __m128i v103; // xmm7
  __m128i v104; // xmm8
  __int64 v105; // r13
  __int64 v106; // r15
  __int64 v107; // rbx
  _QWORD *v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // r14
  __m128i v116; // xmm0
  __m128i v117; // xmm1
  __int128 v118; // xmm2
  unsigned __int128 v119; // kr10_16
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r15
  __m128i *v123; // rdx
  __int64 v124; // rax
  const char *v125; // r8
  __int8 v126; // cl
  void *v127; // rax
  __m128i *v128; // rcx
  const __m128i *v129; // r15
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // r15
  int v133; // eax
  char v134; // cl
  __int8 v135; // si
  __int8 v136; // si
  __int8 v137; // si
  __int64 v138; // rcx
  _DWORD *v139; // rax
  __int64 v140; // rcx
  void *v141; // rax
  __int64 v142; // rcx
  _DWORD *v143; // rax
  __int64 v144; // rcx
  _DWORD *v145; // rax
  __int64 v146; // rcx
  void *v147; // rax
  __int64 v148; // rcx
  void *v149; // rax
  __m128i v150; // xmm0
  __int64 v151; // rsi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int128 v154; // xmm0
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // rax
  __m128i *v160; // rsi
  __int64 v161; // rcx
  unsigned int v162; // eax
  __int64 *v163; // r8
  __int64 v164; // rcx
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rdx
  _BYTE *v172; // rax
  _BYTE *v173; // rax
  _BYTE *v174; // r15
  __int64 v175; // rsi
  __m128i **v176; // rax
  __m128i v177; // xmm0
  _BYTE *v178; // rax
  __int64 v179; // rcx
  _DWORD *v180; // rax
  __int64 v181; // rcx
  void *v182; // rax
  __int64 v183; // rcx
  _DWORD *v184; // rax
  __int64 v185; // rcx
  _DWORD *v186; // rax
  __int64 v187; // rcx
  void *v188; // rax
  __int64 v189; // rcx
  _DWORD *v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r15
  unsigned __int64 v193; // rsi
  __m128i *v194; // rax
  __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rcx
  __m128i v198; // xmm0
  __int64 v199; // rcx
  __int64 v200; // rax
  __m128i *v201; // rdx
  _BYTE *v202; // r15
  __int64 v203; // r14
  __int64 v204; // rsi
  __int64 v205; // rdi
  __int64 v206; // r12
  int v207; // eax
  char v208; // cl
  __int64 v209; // rsi
  __int64 v210; // rax
  __int64 v211; // rcx
  __int128 v212; // xmm0
  __m128i v213; // xmm0
  const char *v214; // rcx
  const char *v215; // rsi
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // rsi
  __int64 v219; // rdi
  __int64 m128i_i64; // rbx
  unsigned __int8 v221; // al
  __int64 v222; // rdi
  __int64 v223; // rsi
  _BYTE *v224; // rax
  __int64 v225; // rax
  _QWORD *v226; // rax
  __int64 v227; // rdi
  __int64 v228; // rbx
  __int64 v229; // rax
  __m128i *v230; // rcx
  __int64 v231; // rdi
  __int64 v232; // rax
  __int64 v233; // rsi
  __int64 v234; // rdx
  __int64 v235; // r8
  __int64 v236; // rax
  __m128i *v237; // r15
  __m128i v238; // xmm6
  __m128i v239; // xmm7
  __m128i v240; // xmm8
  __m128i v241; // xmm9
  __m128i v242; // xmm10
  __m128i v243; // xmm11
  __m128i v244; // xmm12
  __m128i v245; // xmm13
  __m128i v246; // xmm14
  __m128i *v247; // rax
  __int64 v248; // rsi
  __int128 v249; // kr30_16
  __int64 v250; // r14
  unsigned __int64 v251; // r13
  __int64 v252; // rbx
  _QWORD *v253; // rax
  __int64 v254; // rcx
  __int64 v255; // rax
  _QWORD *v256; // rax
  _QWORD *v257; // rax
  __int64 v258; // rax
  __int64 v259; // rdx
  __m128i *v260; // rcx
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // rax
  __m256i *v264; // r12
  __int64 v265; // rax
  __int64 v266; // r14
  __int64 v267; // r13
  char v268; // di
  __m128i v269; // xmm0
  int v270; // eax
  __int64 v271; // rax
  __m128i v272; // xmm0
  __m128i v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rsi
  const __m128i *v276; // rdx
  const __m128i *v277; // rdi
  __m128i v278; // xmm0
  void *v279; // rax
  const char *v280; // rax
  __int64 v281; // rdx
  __m128i v282; // rax
  __int64 v283; // rcx
  __int64 v284; // rsi
  const __m128i *v285; // rdx
  const __m128i *v286; // rdi
  __m128i v287; // xmm0
  __int64 v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // rax
  __m128i v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rsi
  const __m128i *v295; // rdx
  const __m128i *v296; // rdi
  __m128i v297; // xmm0
  __int64 v298; // rax
  __int64 v299; // rbx
  unsigned __int64 v300; // rdi
  __m128i *v301; // rsi
  __int64 v302; // r14
  __int64 v303; // rax
  __int64 v304; // rdi
  unsigned __int64 v305; // r13
  __m128i v306; // xmm0
  __m128i v307; // xmm1
  int v308; // eax
  __m128i v309; // rax
  __int64 v310; // rcx
  __int64 v311; // rsi
  const __m128i *v312; // rdx
  const __m128i *v313; // rdi
  __m128i v314; // xmm0
  __int64 v315; // rax
  bool v316; // zf
  __int64 v317; // rdx
  unsigned __int64 v318; // rdi
  __m128i v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rsi
  const __m128i *v322; // rdx
  const __m128i *v323; // rdi
  __m128i v324; // xmm0
  __int64 v325; // rax
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // rax
  __int64 v329; // rax
  __int64 v330; // rax
  __int64 v331; // rdi
  char v332; // r14
  __int64 v333; // rsi
  const __m128i *v334; // rbx
  __int64 v335; // rax
  const char *v336; // rdi
  _QWORD *v337; // rsi
  __int64 v338; // rax
  __int64 v339; // rcx
  bool v340; // r8
  char v341; // dl
  __int64 v342; // rcx
  __m128i v343; // xmm0
  _DWORD *v344; // rax
  __m128i v345; // xmm0
  __int64 v346; // rcx
  _WORD *v347; // rax
  __m128i v348; // xmm0
  __int64 v349; // rcx
  _DWORD *v350; // rax
  __m128i v351; // xmm0
  __int64 v352; // rcx
  __int64 v353; // rax
  __m128i v354; // xmm0
  const __m128i *v355; // rsi
  __m128i v356; // xmm0
  _DWORD *v357; // rax
  __m128i v358; // xmm0
  __int64 v359; // rcx
  void *v360; // rax
  __m128i v361; // xmm0
  __int64 v362; // rcx
  _DWORD *v363; // rax
  __m128i v364; // xmm0
  __int64 v365; // rax
  __int64 v366; // rcx
  __int64 v367; // rdx
  __int64 v368; // rax
  __int64 v369; // rax
  __int64 v370; // rcx
  __m128i v371; // xmm0
  _DWORD *v372; // rax
  __m128i v373; // xmm0
  __int64 v374; // rcx
  _WORD *v375; // rax
  __m128i v376; // xmm0
  __int64 v377; // rcx
  _DWORD *v378; // rax
  __m128i v379; // xmm0
  __int64 v380; // rcx
  __int64 v381; // rax
  __int64 v382; // rcx
  __int64 v383; // rax
  __m128i v384; // xmm0
  __int64 v385; // rax
  __int64 v386; // rax
  __int64 v387; // rcx
  __int64 v388; // rdi
  const __m128i *v389; // rcx
  const __m128i *v390; // rsi
  __m128i v391; // xmm0
  __int64 v392; // r13
  const char *v393; // rdi
  __m128i v394; // rax
  __int64 v395; // rcx
  __int64 v396; // rsi
  const __m128i *v397; // rdx
  const __m128i *v398; // rdi
  __m128i v399; // xmm0
  __int64 v400; // rax
  __int64 v401; // rax
  __int64 v402; // rsi
  __int64 v403; // rax
  const __m128i *v404; // rdx
  const __m128i *v405; // rbx
  __m128i v406; // xmm0
  __int64 v407; // rax
  __int8 *v408; // rcx
  __m128i v409; // xmm1
  _DWORD *v410; // rax
  __m128i v411; // xmm0
  __int64 v412; // rcx
  _WORD *v413; // rax
  __m128i v414; // xmm0
  __int64 v415; // rcx
  _DWORD *v416; // rax
  __m128i v417; // xmm0
  __int64 v418; // rcx
  __int64 v419; // rax
  __m128i v420; // xmm0
  __int64 v421; // rax
  __int64 v422; // rax
  __int64 v423; // rsi
  char v424; // al
  __int64 v425; // rdi
  char v426; // al
  __int64 v427; // rcx
  __int64 v428; // rdx
  __int64 v429; // rcx
  _DWORD *v430; // rax
  __m128i v431; // xmm0
  __int64 v432; // rcx
  _DWORD *v433; // rax
  __m128i v434; // xmm0
  __int64 v435; // rax
  __int64 v436; // r8
  __int64 v437; // rdi
  __int64 v438; // rcx
  __int64 v439; // rdx
  _DWORD *v440; // rax
  __m128i v441; // xmm0
  __int64 v442; // rcx
  _DWORD *v443; // rax
  __m128i v444; // xmm0
  char *v445; // rax
  __int64 v446; // rdx
  __m128i *v447; // rcx
  __int64 v448; // rsi
  __m128i *v449; // rdi
  __int64 v450; // rcx
  __int64 v451; // rdi
  __m128i *v452; // rcx
  __int64 v453; // rsi
  __int64 v454; // rdx
  __int64 v455; // r15
  __m128i v456; // xmm0
  __int64 v457; // rsi
  __int64 v458; // rax
  __int64 v459; // rdx
  __m128i *v460; // rcx
  char v461; // si
  __m128i *v462; // rcx
  __m128i *v463; // rcx
  __int64 v464; // rcx
  __int64 v465; // rcx
  __int64 v466; // rax
  __m128i v467; // xmm0
  __int64 v468; // rcx
  _QWORD *v469; // rax
  __m128i v470; // xmm0
  __int64 v471; // rcx
  void *v472; // rax
  int v473; // eax
  __m128i v474; // xmm0
  __m128i *v475; // rax
  __m128i *v476; // rcx
  __int64 v477; // rax
  __int64 v478; // rcx
  __int64 v479; // rcx
  __int64 v480; // rsi
  __int64 v481; // rcx
  __int64 v482; // rsi
  int v483; // edi
  __int64 v484; // rdx
  __int64 v485; // rbx
  __int64 v486; // rax
  char v487; // r14
  __int64 v488; // rax
  __int64 v489; // rcx
  int v490; // ecx
  __m128i v491; // xmm0
  __int64 v492; // rax
  __m128i v493; // xmm0
  _OWORD *v494; // rax
  char v495; // al
  __m128i v496; // xmm0
  _OWORD *v497; // rax
  __int64 v498; // rax
  __m128i v499; // xmm0
  __m128i v500; // xmm0
  _OWORD *v501; // rax
  char v502; // cl
  char v503; // dl
  const __m128i *v504; // rax
  __int64 v505; // rcx
  __m128i *v506; // rax
  __m128i *v507; // rdi
  __m128i v508; // xmm0
  _OWORD *v509; // rax
  __m128i *v510; // rdx
  __int64 v511; // rcx
  __int64 v512; // rsi
  __m128i *v513; // rdx
  __m128i *v514; // rcx
  __m128i v515; // xmm0
  __m128i v516; // xmm1
  __m128i v517; // xmm2
  __m128i v518; // xmm3
  __m128i v519; // xmm4
  __m128i *v520; // rax
  __int64 v521; // rsi
  __int64 v522; // rdi
  char v523; // r14
  char v524; // bl
  __int64 v525; // r15
  __m128i *v526; // rcx
  __int64 v527; // rsi
  __int8 *v528; // rcx
  __int8 *v529; // rcx
  __int64 v530; // rbx
  __m128i *v531; // rdx
  __m128i *v532; // rcx
  __int64 v533; // rax
  char *v534; // rcx
  __m128i *v535; // rcx
  _BYTE v536[32]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v537; // [rsp+58h] [rbp-28h]
  __int64 v538; // [rsp+60h] [rbp-20h]
  __int64 v539; // [rsp+68h] [rbp-18h] BYREF
  __int128 v540; // [rsp+70h] [rbp-10h]
  _QWORD v541[3]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v542; // [rsp+98h] [rbp+18h] BYREF
  __int64 v543; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v544; // [rsp+B0h] [rbp+30h]
  __int64 v545; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v546; // [rsp+C0h] [rbp+40h]
  __int64 v547; // [rsp+C8h] [rbp+48h]
  __m128i v548; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v549; // [rsp+E0h] [rbp+60h]
  __m128i v550; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v551; // [rsp+100h] [rbp+80h]
  __int64 v552; // [rsp+118h] [rbp+98h]
  __int64 v553; // [rsp+120h] [rbp+A0h]
  __int64 v554; // [rsp+128h] [rbp+A8h]
  __int64 v555; // [rsp+130h] [rbp+B0h]
  __m128i *v556; // [rsp+138h] [rbp+B8h] BYREF
  __m128i *v557; // [rsp+140h] [rbp+C0h]
  __int64 v558; // [rsp+150h] [rbp+D0h]
  _BYTE v559[7]; // [rsp+158h] [rbp+D8h]
  _BYTE v560[7]; // [rsp+160h] [rbp+E0h]
  __int64 v561; // [rsp+170h] [rbp+F0h]
  __int64 v562; // [rsp+178h] [rbp+F8h]
  _BYTE v563[31]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v564; // [rsp+1A0h] [rbp+120h]
  __int64 v565; // [rsp+1A8h] [rbp+128h]
  __m128i v566; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v567; // [rsp+1C0h] [rbp+140h]
  __m128i v568; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v569; // [rsp+1D8h] [rbp+158h]
  int v570; // [rsp+1E4h] [rbp+164h]
  __int64 v571; // [rsp+1E8h] [rbp+168h]
  __int64 v572; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v573; // [rsp+1F8h] [rbp+178h]
  __int64 v574; // [rsp+200h] [rbp+180h]
  __int64 v575; // [rsp+208h] [rbp+188h]
  __m128i v576; // [rsp+210h] [rbp+190h] BYREF
  __int64 v577; // [rsp+220h] [rbp+1A0h]
  __int64 v578; // [rsp+228h] [rbp+1A8h]
  __int64 v579; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v580; // [rsp+238h] [rbp+1B8h]
  unsigned __int64 v581; // [rsp+240h] [rbp+1C0h]
  __int64 v582; // [rsp+248h] [rbp+1C8h]
  __m256i v583; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v584; // [rsp+278h] [rbp+1F8h]
  __int128 v585; // [rsp+280h] [rbp+200h] BYREF
  __int64 v586; // [rsp+290h] [rbp+210h]
  __m128i v587; // [rsp+298h] [rbp+218h] BYREF
  __int64 v588; // [rsp+2A8h] [rbp+228h]
  __m128i *v589; // [rsp+2B0h] [rbp+230h]
  char v590; // [rsp+2BFh] [rbp+23Fh]
  __m128i v591; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v592; // [rsp+2D0h] [rbp+250h]
  __int64 v593; // [rsp+2E0h] [rbp+260h]
  __int64 v594; // [rsp+2E8h] [rbp+268h]
  __int64 v595; // [rsp+2F0h] [rbp+270h]
  const char *v596; // [rsp+2F8h] [rbp+278h]
  __m128i *v597; // [rsp+300h] [rbp+280h]
  __int64 v598; // [rsp+308h] [rbp+288h]
  __m256i v599; // [rsp+310h] [rbp+290h] BYREF
  __m128i v600; // [rsp+330h] [rbp+2B0h]
  __m128i v601; // [rsp+340h] [rbp+2C0h]
  __m128i *v602; // [rsp+350h] [rbp+2D0h]
  __m128i v603; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v604; // [rsp+368h] [rbp+2E8h]
  __int64 v605; // [rsp+370h] [rbp+2F0h]
  char v606; // [rsp+37Bh] [rbp+2FBh]
  char v607; // [rsp+37Ch] [rbp+2FCh]
  char v608; // [rsp+37Dh] [rbp+2FDh]
  char v609; // [rsp+37Eh] [rbp+2FEh]
  char v610; // [rsp+37Fh] [rbp+2FFh]
  char v611; // [rsp+380h] [rbp+300h]
  char v612; // [rsp+381h] [rbp+301h]
  char v613; // [rsp+382h] [rbp+302h]
  char v614; // [rsp+383h] [rbp+303h]
  unsigned int v615; // [rsp+384h] [rbp+304h]
  __int64 v616; // [rsp+388h] [rbp+308h]
  __m256i v617; // [rsp+390h] [rbp+310h] BYREF
  __m256i v618; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v619; // [rsp+3D0h] [rbp+350h]
  __int128 v620; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v621; // [rsp+3F8h] [rbp+378h]
  __m128i *v622; // [rsp+400h] [rbp+380h]
  __m128i *v623; // [rsp+408h] [rbp+388h]
  __m256i v624; // [rsp+410h] [rbp+390h] BYREF
  char v625; // [rsp+436h] [rbp+3B6h]
  char v626; // [rsp+437h] [rbp+3B7h]
  unsigned __int64 v627; // [rsp+438h] [rbp+3B8h]
  char v628; // [rsp+445h] [rbp+3C5h]
  char v629; // [rsp+446h] [rbp+3C6h]
  char v630; // [rsp+447h] [rbp+3C7h]
  char v631; // [rsp+448h] [rbp+3C8h]
  char v632; // [rsp+449h] [rbp+3C9h]
  char v633; // [rsp+44Ah] [rbp+3CAh]
  char v634; // [rsp+44Bh] [rbp+3CBh]
  char v635; // [rsp+44Ch] [rbp+3CCh]
  char v636; // [rsp+44Dh] [rbp+3CDh]
  char v637; // [rsp+44Eh] [rbp+3CEh]
  char v638; // [rsp+44Fh] [rbp+3CFh]
  char v639; // [rsp+450h] [rbp+3D0h]
  char v640; // [rsp+451h] [rbp+3D1h]
  char v641; // [rsp+452h] [rbp+3D2h]
  char v642; // [rsp+453h] [rbp+3D3h]
  char v643; // [rsp+454h] [rbp+3D4h]
  char v644; // [rsp+455h] [rbp+3D5h]
  char v645; // [rsp+456h] [rbp+3D6h]
  char v646; // [rsp+457h] [rbp+3D7h]
  char v647; // [rsp+458h] [rbp+3D8h]
  char v648; // [rsp+459h] [rbp+3D9h]
  char v649; // [rsp+45Ah] [rbp+3DAh]
  char v650; // [rsp+45Bh] [rbp+3DBh]
  char v651; // [rsp+45Ch] [rbp+3DCh]
  char v652; // [rsp+45Dh] [rbp+3DDh]
  char v653; // [rsp+45Eh] [rbp+3DEh]
  char v654; // [rsp+45Fh] [rbp+3DFh]
  __m256i v655; // [rsp+460h] [rbp+3E0h] BYREF
  __m128i v656; // [rsp+480h] [rbp+400h] BYREF
  _BYTE v657[48]; // [rsp+490h] [rbp+410h]
  char v658; // [rsp+4C7h] [rbp+447h]
  __m128i *v659; // [rsp+4C8h] [rbp+448h]
  __int64 v660; // [rsp+4D0h] [rbp+450h]
  __int64 v661; // [rsp+4D8h] [rbp+458h]
  char v662; // [rsp+4E4h] [rbp+464h]
  char v663; // [rsp+4E5h] [rbp+465h]
  char v664; // [rsp+4E6h] [rbp+466h]
  char v665; // [rsp+4E7h] [rbp+467h]
  __int64 v666; // [rsp+4E8h] [rbp+468h]
  char v667; // [rsp+4F4h] [rbp+474h]
  char v668; // [rsp+4F5h] [rbp+475h]
  char v669; // [rsp+4F6h] [rbp+476h]
  char v670; // [rsp+4F7h] [rbp+477h]
  __int64 v671; // [rsp+4F8h] [rbp+478h]
  __int64 v672; // [rsp+500h] [rbp+480h]
  char v673; // [rsp+50Fh] [rbp+48Fh]
  char v674; // [rsp+510h] [rbp+490h]
  char v675; // [rsp+511h] [rbp+491h]
  char v676; // [rsp+512h] [rbp+492h]
  char v677; // [rsp+513h] [rbp+493h]
  char v678; // [rsp+514h] [rbp+494h]
  char v679; // [rsp+515h] [rbp+495h]
  char v680; // [rsp+516h] [rbp+496h]
  char v681; // [rsp+517h] [rbp+497h]
  __int64 v682; // [rsp+518h] [rbp+498h]

  v682 = -2;
  v627 = a4;
  v659 = (__m128i *)a3;
  v602 = a1;
  v579 = 0;
  v580 = 8;
  v581 = 0;
  v578 = -1;
  v670 = 1;
  v621 = a2;
  v8 = sub_1416419F0(aModel_1, 5, a2);
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v659 = *(__m128i **)(v8 + 16);
    v627 = *(_QWORD *)(v8 + 24);
  }
  v578 = -1;
  v670 = 1;
  v9 = sub_140362FB0(v621, v659, v627, 0);
  if ( v9 )
  {
    v11 = v602;
    v602->m128i_i64[0] = v9;
    v11->m128i_i64[1] = v10;
    v11[2].m128i_i64[0] = -2;
    goto LABEL_8;
  }
  v578 = -1;
  v670 = 1;
  sub_1401FA130(&v655, v621, v659, v627);
  if ( v655.m256i_i64[0] )
  {
    v12 = v655.m256i_i64[1];
    v13 = v602;
    v602->m128i_i64[0] = v655.m256i_i64[0];
    v13->m128i_i64[1] = v12;
    v13[2].m128i_i64[0] = -2;
    goto LABEL_8;
  }
  v17 = v655.m256i_i8[8];
  v537 = v655.m256i_i16[4] & 0xFF00;
  v544 = v655.m256i_u16[4] | (unsigned __int64)(v655.m256i_u8[10] << 16);
  if ( v537 == 512 )
  {
    v578 = -1;
    v670 = 1;
    v18 = (unsigned int)sub_14022F3D0(v659, v627);
  }
  else
  {
    v18 = ((unsigned int)(v655.m256i_u16[4] | (v655.m256i_u8[10] << 16)) >> 8) & 1;
  }
  v578 = -1;
  v670 = 1;
  v19 = sub_1416419F0(aTools_1, 5, v621);
  if ( v19 && *(_BYTE *)v19 == 4 )
  {
    v20 = *(_QWORD *)(v19 + 16);
    v21 = *(_QWORD *)(v19 + 24);
    v578 = -1;
    v670 = 1;
    sub_1403918C0(&v655, v20, v21);
    v567 = v655.m256i_i64[2];
    v566 = _mm_loadu_si128((const __m128i *)&v655);
    if ( (v17 & 1) != 0 )
      goto LABEL_24;
LABEL_22:
    v571 = -1;
    v665 = 1;
    v22 = sub_1416419F0(aInput_0, 5, v621);
    if ( v22 )
    {
      v571 = -1;
      v665 = 1;
      sub_140314C90(v22, &v566, (unsigned int)v18);
    }
    goto LABEL_24;
  }
  v566.m128i_i64[0] = 0;
  v566.m128i_i64[1] = 8;
  v567 = 0;
  if ( (v17 & 1) == 0 )
    goto LABEL_22;
LABEL_24:
  v571 = -1;
  v665 = 1;
  sub_140341340((unsigned int)&v655, v566.m128i_i32[2], v567, v18, v17 & 1, v18);
  v23 = v655.m256i_i64[2];
  if ( v655.m256i_i64[0] == -1 )
  {
    v91 = v602;
    v602->m128i_i64[0] = v655.m256i_i64[1];
    v91->m128i_i64[1] = v23;
    v91[2].m128i_i64[0] = -2;
    v92 = v566.m128i_i64[1];
    v621 = v567;
    v627 = 0;
    v659 = (__m128i *)v566.m128i_i64[1];
    while ( v621 != v627 )
    {
      ++v627;
      v93 = v92 + 32;
      sub_1403880E0(v92);
      v92 = v93;
    }
    if ( v566.m128i_i64[0] )
      sub_140001660(v566.m128i_i64[1], 32 * v566.m128i_i64[0], 8);
    goto LABEL_8;
  }
  v551 = *(__m128i *)&v657[24];
  v550 = *(__m128i *)&v657[8];
  v549 = _mm_loadu_si128((const __m128i *)&v656.m128i_u64[1]);
  v548 = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[3]);
  v654 = v657[40];
  v591 = *(__m128i *)v655.m256i_i8;
  v592 = v655.m256i_i64[2];
  v551.m128i_i16[4] = (unsigned int)v544 >> 8;
  if ( (v17 & 1) == 0 )
    goto LABEL_143;
  *(_QWORD *)&v585 = 0;
  v586 = 0;
  v24 = (_BYTE *)sub_1416419F0(aInput_0, 5, v621);
  if ( !v24 )
    v24 = off_1421E7108;
  *((_QWORD *)&v25 + 1) = v24 + 8;
  if ( *v24 != 4 )
    *((_QWORD *)&v25 + 1) = 0;
  v26 = &v655.m256i_i64[3];
  si128 = _mm_load_si128((const __m128i *)&xmmword_14193C270);
  v28 = _mm_load_si128((const __m128i *)&xmmword_14193C250);
  v29 = _mm_cvtsi32_si128(0x7475u);
  v30 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( !v30 || v30 == v6 )
        {
          if ( !*((_QWORD *)&v25 + 1) || (v32 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 16LL)) == 0 )
          {
            if ( (_BYTE)v18 && (v37 = sub_140362420(v591.m128i_i64[1], v592)) != 0 )
            {
              *((_QWORD *)&v25 + 1) = 72;
            }
            else
            {
              v655.m256i_i64[2] = v592;
              *(__m128i *)v655.m256i_i8 = _mm_loadu_si128(&v591);
              v591.m128i_i64[0] = 0;
              v591.m128i_i64[1] = 8;
              v592 = 0;
              sub_140301ED0(&v599, &v655);
              sub_1403FB000(&v591);
              if ( v591.m128i_i64[0] )
                sub_140001660(v591.m128i_i64[1], 32 * v591.m128i_i64[0], 8);
              v592 = v599.m256i_i64[2];
              v591 = _mm_loadu_si128((const __m128i *)&v599);
              v37 = 0;
            }
            goto LABEL_136;
          }
          v31 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
          v6 = v31 + 32 * v32;
          *((_QWORD *)&v25 + 1) = 0;
        }
        else
        {
          v31 = v30;
        }
        v33 = (_QWORD *)sub_1416419F0(aType_4, 4, v31);
        if ( !v33 )
          v33 = off_1421E7108;
        v30 = v31 + 32;
        if ( *(_BYTE *)v33 == 3 && v33[3] == 16 )
        {
          v34 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v33[2]), si128));
          if ( v34 == 0xFFFF )
            break;
        }
        v35 = (_QWORD *)sub_1416419F0(aType_4, 4, v31);
        if ( !v35 )
          v35 = off_1421E7108;
        if ( *(_BYTE *)v35 == 3
          && v35[3] == 18
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v35[2] + 16LL)), v29),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v35[2]), v28))) == 0xFFFF )
        {
          LODWORD(v671) = 0;
          goto LABEL_50;
        }
      }
      LOBYTE(v34) = 1;
      LODWORD(v671) = v34;
LABEL_50:
      v36 = (_QWORD *)sub_1416419F0(aTools_1, 5, v31);
      if ( !v36 )
        v36 = off_1421E7108;
    }
    while ( *(_BYTE *)v36 != 4 );
    sub_140341340((unsigned int)&v655, v36[2], v36[3], v18, 1, v671 | v18);
    v37 = v655.m256i_i64[1];
    if ( v655.m256i_i64[0] == -1 )
    {
      *((_QWORD *)&v25 + 1) = v655.m256i_i64[2];
      goto LABEL_136;
    }
    v615 = v18;
    v38 = _mm_loadu_si128((const __m128i *)v26);
    v39 = _mm_loadu_si128((const __m128i *)v26 + 1);
    v40 = *((_OWORD *)v26 + 2);
    v7 = (__int64)v26;
    v620 = *((_OWORD *)v26 + 3);
    v619 = v40;
    *(__m128i *)&v618.m256i_u64[2] = v39;
    *(__m128i *)v618.m256i_i8 = v38;
    v41 = v657[40];
    v598 = v655.m256i_i64[0];
    *(_OWORD *)v563 = *(_OWORD *)v655.m256i_i8;
    v42 = v655.m256i_i64[2];
    v43 = *(_OWORD *)&v655.m256i_u64[1];
    *(_QWORD *)&v563[16] = v43 >> 64;
    v596 = (const char *)v43;
    v650 = 1;
    v44 = sub_1402B83A0(&v548, &v618);
    if ( v44 )
    {
      v525 = v45;
      *(_QWORD *)&v25 = v44;
      sub_1403FB000(v563);
      v18 = v615;
      *((_QWORD *)&v25 + 1) = v525;
      if ( v598 )
        sub_140001660(v596, 32 * v598, 8);
      v37 = v25;
      goto LABEL_136;
    }
    v46 = v41;
    if ( (_BYTE)v671 )
      v46 = 0;
    v654 |= v46;
    v47 = (__m128i *)v596;
    v565 = 32 * v42;
    v48 = (__m128i *)&v596[32 * v42];
    v617.m256i_i64[0] = (__int64)v596;
    v617.m256i_i64[1] = (__int64)v596;
    v617.m256i_i64[2] = v598;
    v617.m256i_i64[3] = (__int64)v48;
    v18 = v615;
    v558 = *((_QWORD *)&v25 + 1);
    v26 = (__int64 *)v7;
    v605 = (__int64)v48;
    if ( v596 != (const char *)v48 )
      break;
LABEL_117:
    v89 = v48;
LABEL_119:
    v605 = (unsigned __int64)((char *)v48 - (char *)v89) >> 5;
    v597 = v89;
    v672 = 0;
    while ( v605 != v672 )
    {
      ++v672;
      v90 = v89 + 2;
      sub_1403880E0(v89);
      v89 = v90;
    }
    if ( v598 )
      sub_140001660(v596, 32 * v598, 8);
    *((_QWORD *)&v25 + 1) = v558;
  }
  while ( 1 )
  {
    v597 = v47 + 2;
    v617.m256i_i64[1] = (__int64)v47[2].m128i_i64;
    v49 = v47->m128i_i8[0];
    *(__m128i *)((char *)&v583.m256i_u64[1] + 7) = v47[1];
    *(__m128i *)v583.m256i_i8 = _mm_loadu_si128((const __m128i *)&v47->m128i_i8[1]);
    if ( v49 == -1 )
    {
      v89 = v597;
      goto LABEL_119;
    }
    v624.m256i_i8[0] = v49;
    *(_OWORD *)&v624.m256i_u64[2] = *(_OWORD *)((char *)&v583.m256i_u64[1] + 7);
    *(__m128i *)&v624.m256i_i8[1] = _mm_load_si128((const __m128i *)&v583);
    v649 = 1;
    v50 = (void *)sub_1416419F0(aName_2, 4, &v624);
    if ( !v50 )
      v50 = off_1421E7108;
    if ( *(_BYTE *)v50 != 3 )
    {
      v616 = 1;
      v623 = nullptr;
      v53 = v585;
      if ( (_QWORD)v585 )
        goto LABEL_67;
      goto LABEL_105;
    }
    v51 = *((_QWORD *)v50 + 3);
    if ( v51 < 0 )
    {
      v464 = 0;
      goto LABEL_779;
    }
    v623 = *((__m128i **)v50 + 3);
    if ( !v51 )
      break;
    v52 = *((const __m128i **)v50 + 2);
    nullsub_1(v51);
    v616 = sub_140001650(v623, 1);
    if ( !v616 )
    {
      v616 = (__int64)v623;
      v464 = 1;
LABEL_779:
      v649 = 1;
      sub_141938D2B(v464, v616);
    }
    sub_1418F44E0((__m128i *)v616, v52, (unsigned __int64)v623);
    v18 = v615;
    v53 = v585;
    if ( (_QWORD)v585 )
      goto LABEL_67;
LABEL_105:
    if ( !(_BYTE)v671 )
    {
      if ( (_BYTE)v18 )
      {
        v677 = 1;
        v676 = 1;
        if ( !sub_1416419F0(aType_4, 4, &v624) )
        {
          v655.m256i_i16[0] = 257;
          v611 = 1;
          v672 = sub_141641AF0(aDeferLoading_1, 13, &v624);
          sub_14002F9D0(v672);
          v82 = _mm_loadu_si128((const __m128i *)&v655);
          v83 = (_OWORD *)v672;
          *(__m128i *)(v672 + 16) = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
          *v83 = v82;
        }
      }
      v84 = _mm_loadu_si128((const __m128i *)&v624);
      *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v624.m256i_u64[2]);
      *(__m128i *)v655.m256i_i8 = v84;
      v85 = v592;
      if ( v592 == v591.m128i_i64[0] )
        sub_14190F570(&v591);
      v86 = v591.m128i_i64[1];
      v87 = 32 * v85;
      v88 = _mm_load_si128((const __m128i *)&v655);
      *(__m128i *)(v591.m128i_i64[1] + v87 + 16) = _mm_load_si128((const __m128i *)&v655.m256i_u64[2]);
      *(__m128i *)(v86 + v87) = v88;
      v592 = v85 + 1;
      goto LABEL_114;
    }
    v587.m128i_i64[0] = (__int64)v623;
    v587.m128i_i64[1] = v616;
    v588 = (__int64)v623;
    v81 = _mm_loadu_si128((const __m128i *)&v624);
    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v624.m256i_u64[2]);
    *(__m128i *)v655.m256i_i8 = v81;
    v677 = 0;
    v676 = 0;
    sub_140E72AA0(&v599, &v585, &v587, &v655);
    if ( v599.m256i_i8[0] != -1 )
    {
      v677 = 0;
      v676 = 0;
      sub_14002F9D0(&v599);
    }
LABEL_116:
    v48 = (__m128i *)v605;
    v47 = v597;
    if ( v597 == (__m128i *)v605 )
      goto LABEL_117;
  }
  v616 = 1;
  v623 = nullptr;
  v18 = v615;
  v53 = v585;
  if ( !(_QWORD)v585 )
    goto LABEL_105;
LABEL_67:
  v666 = *((_QWORD *)&v585 + 1);
LABEL_68:
  v54 = v53 + 360;
  v55 = (const __m128i *)*(unsigned __int16 *)(v53 + 626);
  v672 = v53;
  v56 = (const __m128i *)(v53 - 8);
  v661 = (__int64)v55;
  v57 = 3LL * (unsigned int)(8 * (_DWORD)v55);
  v58 = -1;
  do
  {
    if ( !v57 )
    {
      v58 = v661;
LABEL_76:
      v18 = v615;
      v26 = &v655.m256i_i64[3];
      if ( !v666 )
        goto LABEL_105;
      --v666;
      v53 = *(_QWORD *)(v672 + 8 * v58 + 632);
      goto LABEL_68;
    }
    v59 = v54 + 24;
    v7 = (__int64)v623->m128i_i64 - *(_QWORD *)(v54 + 16);
    v60 = sub_1418F4B70(v616, *(_QWORD *)(v54 + 8));
    if ( v60 )
      v7 = v60;
    v61 = (v7 > 0) - (v7 < 0);
    v56 += 2;
    ++v58;
    v57 -= 24;
    v54 = v59;
  }
  while ( v61 == 1 );
  if ( v61 )
    goto LABEL_76;
  v62 = v56[-2].m128i_i8[8];
  v18 = v615;
  v26 = &v655.m256i_i64[3];
  switch ( v62 )
  {
    case 0:
      break;
    case 1:
      v655.m256i_i8[1] = v56[-2].m128i_i8[9];
      break;
    case 2:
      *(__m128i *)&v655.m256i_u64[1] = _mm_loadu_si128(v56 - 1);
      break;
    case 3:
      v677 = 1;
      v676 = 1;
      sub_1416AC440(&v655.m256i_u64[1], &v56[-1]);
      break;
    case 4:
      v63 = v56[-1].m128i_i64[1];
      v64 = v56->m128i_i64[0];
      v677 = 1;
      v676 = 1;
      sub_1403918C0(&v655.m256i_u64[1], v63, v64);
      break;
    case 5:
      if ( v56->m128i_i64[0] )
      {
        v65 = v56[-1].m128i_i64[0];
        if ( !v65 )
        {
          v677 = 1;
          v676 = 1;
          sub_141939020(&off_141A54900);
        }
        v66 = v56[-1].m128i_i64[1];
        v677 = 1;
        v676 = 1;
        sub_140E11B90(&v655.m256i_u64[1], v65, v66);
      }
      else
      {
        v655.m256i_i64[1] = 0;
        v655.m256i_i64[3] = 0;
      }
      break;
  }
  v655.m256i_i8[0] = v62;
  v67 = _mm_loadu_si128((const __m128i *)&v624);
  v601 = _mm_loadu_si128((const __m128i *)&v624.m256i_u64[2]);
  v600 = v67;
  v599.m256i_i16[0] = __PAIR16__(v655.m256i_u8[1], v62);
  *(__int32 *)((char *)v599.m256i_i32 + 2) = *(__int32 *)((char *)v655.m256i_i32 + 2);
  v599.m256i_i16[3] = v655.m256i_i16[3];
  v599.m256i_i64[1] = v655.m256i_i64[1];
  *(_OWORD *)&v599.m256i_u64[2] = *(_OWORD *)&v655.m256i_u64[2];
  v68 = sub_140362420(&v599, 2);
  if ( !v68 )
  {
    v69 = 0;
    while ( v69 != 2 )
    {
      v70 = 32 * v69++;
      v71 = v599.m256i_u8[v70];
      if ( v71 >= 3 )
      {
        v72 = (__m128i *)&v599.m256i_i8[v70];
        if ( v71 == 3 )
        {
          v75 = v72->m128i_i64[1];
          if ( v75 )
            sub_140001660(v72[1].m128i_i64[0], v75, 1);
        }
        else
        {
          v661 = v69;
          if ( v71 == 4 )
          {
            v73 = v72[1].m128i_i64[0];
            v622 = v72;
            v666 = v72[1].m128i_i64[1];
            v582 = v73;
            v672 = 0;
            while ( v666 != v672 )
            {
              ++v672;
              v74 = v73 + 32;
              sub_1403880E0(v73);
              v73 = v74;
            }
            v80 = v622->m128i_i64[1];
            v69 = v661;
            if ( v80 )
              sub_140001660(v622[1].m128i_i64[0], 32 * v80, 8);
          }
          else
          {
            v76 = v72->m128i_i64[1];
            if ( v76 )
            {
              v77 = v72[1].m128i_i64[0];
              v78 = v72[1].m128i_i64[1];
              v655.m256i_i64[1] = 0;
              v655.m256i_i64[2] = v76;
              v655.m256i_i64[3] = v77;
              v656.m128i_i64[1] = 0;
              *(_QWORD *)v657 = v76;
              *(_QWORD *)&v657[8] = v77;
              v79 = 1;
            }
            else
            {
              v79 = 0;
              v78 = 0;
            }
            v655.m256i_i64[0] = v79;
            v656.m128i_i64[0] = v79;
            *(_QWORD *)&v657[16] = v78;
            sub_140DF2FD0(&v655);
            v69 = v661;
          }
        }
      }
    }
LABEL_114:
    if ( v623 )
      sub_140001660(v616, v623, 1);
    goto LABEL_116;
  }
  v527 = v68;
  v672 = 0;
  while ( v672 != 64 )
  {
    v528 = &v599.m256i_i8[v672];
    v672 += 32;
    sub_14002F9D0(v528);
  }
  if ( v623 )
    sub_140001660(v616, v623, 1);
  v650 = 0;
  sub_140383750(&v617);
  v37 = v527;
  *((_QWORD *)&v25 + 1) = 72;
  v18 = v615;
LABEL_136:
  if ( (_QWORD)v585 )
  {
    v94 = v586;
    v655.m256i_i64[1] = 0;
    *(_OWORD *)&v655.m256i_u64[2] = v585;
    v656.m128i_i64[1] = 0;
    *(_OWORD *)v657 = v585;
    v95 = 1;
  }
  else
  {
    v95 = 0;
    v94 = 0;
  }
  v655.m256i_i64[0] = v95;
  v656.m128i_i64[0] = v95;
  *(_QWORD *)&v657[16] = v94;
  v575 = -1;
  v669 = 1;
  v668 = 1;
  v667 = 1;
  sub_140DF2FD0(&v655);
  if ( v37 )
  {
    v96 = v602;
    v602->m128i_i64[0] = v37;
    goto LABEL_141;
  }
LABEL_143:
  v615 = v18;
  v545 = 0;
  v547 = 0;
  if ( !v551.m128i_i8[10] )
  {
    v218 = v546;
    v219 = 0;
    m128i_i64 = 0;
    goto LABEL_390;
  }
  v653 = 1;
  sub_140E170D0(&v556, v591.m128i_i64[1], v591.m128i_i64[1] + 32 * v592);
  v99 = (_BYTE *)sub_1416419F0(aInput_0, 5, v621);
  if ( !v99 )
    v99 = off_1421E7108;
  v100 = (__m128i *)(v99 + 8);
  if ( *v99 != 4 )
    v100 = nullptr;
  v616 = (__int64)v100;
  v101 = (__int64)&v655.m256i_i64[3];
  LOBYTE(v99) = 1;
  LODWORD(v661) = (_DWORD)v99;
  v102 = _mm_load_si128((const __m128i *)&xmmword_14193C200);
  v103 = _mm_load_si128((const __m128i *)&xmmword_14193C210);
  v104 = _mm_load_si128((const __m128i *)&xmmword_14193C270);
  *(_QWORD *)&v25 = &unk_1419EAE50;
  v7 = (__int64)&unk_1419EAD45;
  v672 = 0;
  v105 = 0;
  while ( 1 )
  {
    v666 = v672;
    if ( v105 && v105 != v18 )
    {
      v106 = v105;
      goto LABEL_155;
    }
    if ( !v616 || (v107 = *(_QWORD *)(v616 + 16)) == 0 )
    {
      v221 = sub_14022F3D0(v659, v627);
      if ( ((v547 != 0) & v221) != 0 )
      {
        v222 = v591.m128i_i64[1];
        v223 = v591.m128i_i64[1] + 32 * v592;
        v7 = (__int64)off_1421E7108;
        while ( v222 != v223 )
        {
          v224 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v222);
          if ( !v224 )
            v224 = (_BYTE *)v7;
          if ( *v224 == 1 )
          {
            v222 += 32;
            if ( v224[1] )
              continue;
          }
          goto LABEL_389;
        }
        v226 = (_QWORD *)sub_1416419F0(aInput_0, 5, v621);
        if ( !v226 )
          v226 = off_1421E7108;
        if ( *(_BYTE *)v226 == 4 )
        {
          v227 = v226[2];
          v228 = v227 + 32LL * v226[3];
          v7 = (__int64)off_1421E7108;
          while ( v227 != v228 )
          {
            v229 = sub_1416419F0(aType_2, 4, v227);
            if ( !v229 )
              v229 = v7;
            if ( *(_BYTE *)v229 == 3
              && *(_QWORD *)(v229 + 24) == 9
              && !(**(_QWORD **)(v229 + 16) ^ 0x6E696E6F73616572LL | *(_BYTE *)(*(_QWORD *)(v229 + 16) + 8LL) ^ 0x67u) )
            {
              sub_1402F5AF0(&v655, v227);
              if ( v655.m256i_i8[0] != -1 )
              {
                sub_14002F9D0(&v655);
                *(_QWORD *)&v25 = &unk_1419EACF6;
                *((_QWORD *)&v25 + 1) = 79;
                goto LABEL_885;
              }
            }
            v227 += 32;
          }
        }
      }
LABEL_389:
      m128i_i64 = v545;
      v218 = v546;
      v219 = v547;
      v653 = 0;
      sub_140E8AD60(&v556);
LABEL_390:
      v541[0] = m128i_i64;
      v541[1] = v218;
      v541[2] = v219;
      if ( (_BYTE)v615 )
      {
        if ( v592 )
        {
          v655.m256i_i64[0] = v591.m128i_i64[1];
          v655.m256i_i64[1] = v591.m128i_i64[1] + 32 * v592;
          v595 = -1;
          v675 = 1;
          v674 = 1;
          if ( (unsigned __int8)sub_1402B2C30(&v655) )
          {
            v230 = v602;
            v602->m128i_i64[0] = (__int64)aAnthropicDefer;
            v230->m128i_i64[1] = 69;
            v230[2].m128i_i64[0] = -2;
            LOBYTE(v7) = 1;
            v231 = -1;
            LOBYTE(m128i_i64) = 1;
            goto LABEL_801;
          }
        }
      }
      v595 = -1;
      v675 = 1;
      v674 = 1;
      v232 = sub_1416419F0(aInstructions, 12, v621);
      v233 = -1;
      if ( v232 && *(_BYTE *)v232 == 3 )
      {
        v234 = *(_QWORD *)(v232 + 16);
        v235 = *(_QWORD *)(v232 + 24);
        v595 = -1;
        v675 = 1;
        v674 = 1;
        sub_1402E23A0(&v655, v234, v235);
        v232 = v655.m256i_i64[2];
        v598 = v655.m256i_i64[2];
        if ( v655.m256i_i64[2] )
        {
          v232 = v655.m256i_i64[1];
          v233 = v655.m256i_i64[0];
        }
        else if ( v655.m256i_i64[0] )
        {
          v232 = sub_140001660(v655.m256i_i64[1], v655.m256i_i64[0], 1);
        }
      }
      v666 = v232;
      v584 = v232;
      v672 = v233;
      v595 = v233;
      v675 = 1;
      v674 = 1;
      v236 = sub_1416419F0(aInput_0, 5, v621);
      if ( v236 && *(_BYTE *)v236 == 4 )
      {
        v603.m128i_i64[0] = 0;
        v603.m128i_i64[1] = 8;
        v604 = 0;
        v572 = 0;
        v573 = 8;
        v574 = 0;
        v237 = *(__m128i **)(v236 + 16);
        v623 = &v237[2 * *(_QWORD *)(v236 + 24)];
        v238 = _mm_load_si128((const __m128i *)&xmmword_14193C200);
        v239 = _mm_load_si128((const __m128i *)&xmmword_14193C210);
        v240 = _mm_load_si128((const __m128i *)&xmmword_1419D37E0);
        v241 = _mm_load_si128((const __m128i *)&xmmword_1419D37F0);
        v242 = _mm_load_si128((const __m128i *)&xmmword_14193C250);
        v243 = _mm_cvtsi32_si128(0x7475u);
        v244 = _mm_cvtsi32_si128(0x74757074u);
        v245 = _mm_load_si128((const __m128i *)&xmmword_1419D3770);
        v246 = _mm_load_si128((const __m128i *)&xmmword_1419D3750);
        v596 = "This Claude model switch cannot hoist historical system instructions; start a new conversationThis Claude"
               " model cannot replay mid-conversation system instructions; use a compatible model or start a new conversation";
        v247 = nullptr;
        v605 = 0;
        v248 = v666;
        v7 = v672;
        while ( 1 )
        {
          v666 = v248;
          v672 = v7;
          if ( v237 == v623 )
          {
            v453 = v603.m128i_i64[1] + 32 * v604;
            v618.m256i_i64[0] = v603.m128i_i64[1];
            v618.m256i_i64[1] = v603.m128i_i64[1];
            v618.m256i_i64[2] = v603.m128i_i64[0];
            v618.m256i_i64[3] = v453;
            if ( v604 )
            {
              v454 = v603.m128i_i64[1] + 32;
              m128i_i64 = (__int64)&v579;
              do
              {
                if ( *(_BYTE *)(v454 - 32) == 0xFF )
                  goto LABEL_771;
                v455 = v454 - 32;
                v655.m256i_i8[0] = *(_BYTE *)(v454 - 32);
                v456 = _mm_loadu_si128((const __m128i *)(v454 - 32 + 1));
                *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(v454 - 32 + 16));
                *(__m128i *)&v655.m256i_i8[1] = v456;
                v671 = v454;
                sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                v454 = v671 + 32;
              }
              while ( v455 + 32 != v453 );
              v454 = v453;
LABEL_771:
              v618.m256i_i64[1] = v454;
              v7 = v672;
            }
            v457 = v666;
            v594 = v666;
            v593 = v7;
            v673 = 0;
            sub_140383750(&v618);
            v594 = v457;
            v593 = v7;
            v673 = 0;
            v458 = sub_14027C0A0(&v572, &v579);
            if ( v458 )
            {
              v460 = v602;
              v602->m128i_i64[0] = v458;
              v460->m128i_i64[1] = v459;
              v460[2].m128i_i64[0] = -2;
              v461 = 0;
              goto LABEL_798;
            }
            v553 = v457;
            v552 = v7;
            v626 = 0;
            sub_1401901C0(&v572);
            v436 = v666;
            goto LABEL_755;
          }
          v616 = (__int64)v247;
          v556 = v247;
          v594 = v248;
          v593 = v7;
          v673 = 1;
          sub_140DEF6A0(&v618, v541, &v556);
          if ( v618.m256i_i64[0] != -1 )
            break;
LABEL_412:
          v594 = v248;
          v593 = v7;
          v673 = 1;
          v253 = (_QWORD *)sub_1416419F0(aType_4, 4, v237);
          if ( !v253 )
            v253 = off_1421E7108;
          if ( *(_BYTE *)v253 != 3 )
          {
LABEL_424:
            v594 = v248;
            v593 = v7;
            v673 = 1;
            v256 = (_QWORD *)sub_1416419F0(aType_4, 4, v237);
            if ( !v256 )
              v256 = off_1421E7108;
            if ( *(_BYTE *)v256 != 3
              || v256[3] != 7
              || *(_DWORD *)v256[2] ^ 0x7373656D | *(_DWORD *)(v256[2] + 3LL) ^ 0x65676173 )
            {
              goto LABEL_435;
            }
            v594 = v248;
            v593 = v7;
            v673 = 1;
            v257 = (_QWORD *)sub_1416419F0(
                               "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解"
                               "释。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                               4,
                               v237);
            if ( !v257 )
              v257 = off_1421E7108;
            if ( *(_BYTE *)v257 != 3
              || v257[3] != 9
              || *(_QWORD *)v257[2] ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v257[2] + 8LL) ^ 0x74LL )
            {
              goto LABEL_435;
            }
            goto LABEL_434;
          }
          v254 = v253[2];
          v255 = v253[3];
          if ( v255 == 16 )
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v254), v238)) != 0xFFFF
              && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v254), v239)) != 0xFFFF )
            {
              goto LABEL_424;
            }
          }
          else if ( v255 == 13 )
          {
            if ( *(_QWORD *)v254 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v254 + 5) ^ 0x6C6C61635F6E6F69LL )
              goto LABEL_424;
          }
          else if ( v255 != 9 || *(_QWORD *)v254 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v254 + 8) ^ 0x67LL )
          {
            goto LABEL_424;
          }
LABEL_434:
          v594 = v248;
          v593 = v7;
          v673 = 1;
          v258 = sub_14027C0A0(&v572, &v579);
          LOBYTE(v260) = 1;
          v605 = (__int64)v260;
          if ( v258 )
          {
            v476 = v602;
            v602->m128i_i64[0] = v258;
            v476->m128i_i64[1] = v259;
            v476[2].m128i_i64[0] = -2;
            goto LABEL_797;
          }
LABEL_435:
          v660 = v7;
          v681 = 0;
          v261 = sub_1416419F0(aType_4, 4, v237);
          if ( v261 && *(_BYTE *)v261 == 3 )
          {
            v262 = *(_QWORD *)(v261 + 16);
            v263 = *(_QWORD *)(v261 + 24);
            if ( v263 == 16 )
            {
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v262), v238)) == 0xFFFF )
                goto LABEL_448;
            }
            else if ( v263 == 13
                   && !(*(_QWORD *)v262 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v262 + 5) ^ 0x6C6C61635F6E6F69LL) )
            {
LABEL_448:
              v660 = v672;
              v681 = 0;
              sub_14036A150(&v655, v237);
              v269 = _mm_loadu_si128((const __m128i *)&v655);
              *(__m128i *)&v583.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
              *(__m128i *)v583.m256i_i8 = v269;
              v270 = v672;
              v660 = v672;
              v681 = 1;
              LOBYTE(v270) = 1;
              LODWORD(v671) = v270;
              v264 = &v583;
              sub_1402B7FE0(&v548, &v583);
              goto LABEL_441;
            }
          }
          LODWORD(v671) = 0;
          v264 = (__m256i *)v237;
LABEL_441:
          v660 = v672;
          v681 = v671;
          v265 = sub_1416419F0(aType_4, 4, v264);
          if ( !v265 || *(_BYTE *)v265 != 3 )
            goto LABEL_707;
          v266 = *(_QWORD *)(v265 + 16);
          v267 = *(_QWORD *)(v265 + 24);
          if ( v267 == 16 )
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v238)) != 0xFFFF
              && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v239)) != 0xFFFF )
            {
LABEL_478:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v238)) == 0xFFFF )
              {
                v319 = v603;
                v320 = v604;
                v603.m128i_i64[0] = 0;
                v603.m128i_i64[1] = 8;
                v604 = 0;
                v321 = v319.m128i_i64[1] + 32 * v320;
                v618.m256i_i64[0] = v319.m128i_i64[1];
                v618.m256i_i64[1] = v319.m128i_i64[1];
                v618.m256i_i64[2] = v319.m128i_i64[0];
                v618.m256i_i64[3] = v321;
                if ( v320 )
                {
                  v322 = (const __m128i *)(v319.m128i_i64[1] + 32);
                  m128i_i64 = (__int64)v655.m256i_i64 + 1;
                  do
                  {
                    if ( v322[-2].m128i_i8[0] == -1 )
                      goto LABEL_533;
                    v323 = v322 - 2;
                    v655.m256i_i8[0] = v322[-2].m128i_i8[0];
                    v324 = _mm_loadu_si128((const __m128i *)&v322->m128i_i8[-31]);
                    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v322 - 1);
                    *(__m128i *)&v655.m256i_i8[1] = v324;
                    v661 = (__int64)v322;
                    sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                    v322 = (const __m128i *)(v661 + 32);
                  }
                  while ( &v323[2] != (const __m128i *)v321 );
                  v322 = (const __m128i *)v321;
LABEL_533:
                  v618.m256i_i64[1] = (__int64)v322;
                }
                v660 = v672;
                v681 = v671;
                sub_140383750(&v618);
                v660 = v672;
                v681 = v671;
                v325 = sub_1416419F0(aCallId, 7, v264);
                if ( v325 || (v660 = v672, v681 = v671, (v325 = sub_1416419F0(aId_1, 2, v264)) != 0) )
                {
                  v326 = v672;
                  if ( *(_BYTE *)v325 == 3 )
                  {
                    v327 = *(_QWORD *)(v325 + 16);
                    v328 = *(_QWORD *)(v325 + 24);
                  }
                  else
                  {
                    v327 = 1;
                    v328 = 0;
                  }
                }
                else
                {
                  v327 = 1;
                  v328 = 0;
                  v326 = v672;
                }
                *(_QWORD *)&v542 = v327;
                *((_QWORD *)&v542 + 1) = v328;
                v660 = v326;
                v681 = v671;
                v365 = sub_1416419F0(aName_2, 4, v264);
                v366 = 1;
                if ( v365 )
                {
                  v367 = v672;
                  if ( *(_BYTE *)v365 == 3 )
                  {
                    v366 = *(_QWORD *)(v365 + 16);
                    v368 = *(_QWORD *)(v365 + 24);
                  }
                  else
                  {
                    v368 = 0;
                  }
                }
                else
                {
                  v368 = 0;
                  v367 = v672;
                }
                v576.m128i_i64[0] = v366;
                v576.m128i_i64[1] = v368;
                v660 = v367;
                v681 = v671;
                v369 = sub_1416419F0(aInput_0, 5, v264);
                if ( v369 )
                {
                  v660 = v672;
                  v681 = v671;
                  sub_14036A150(&v655, v369);
                  v371 = _mm_loadu_si128((const __m128i *)&v655);
                  *(__m128i *)&v617.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                  *(__m128i *)v617.m256i_i8 = v371;
                }
                else
                {
                  v617.m256i_i8[0] = 3;
                  v617.m256i_i64[1] = 0;
                  *(_OWORD *)&v617.m256i_u64[2] = 1u;
                }
                v568.m128i_i64[0] = 0;
                v569 = 0;
                nullsub_1(v370);
                v372 = (_DWORD *)sub_140001650(4, 1);
                if ( !v372 )
                  sub_141938D2B(1, 4);
                *v372 = 1701869940;
                v599.m256i_i64[0] = 4;
                v599.m256i_i64[1] = (__int64)v372;
                v599.m256i_i64[2] = 4;
                v641 = 1;
                sub_14040FB10(&v655, &off_1419E61B8);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9398);
                }
                v373 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v373;
                v641 = 0;
                sub_140E72AA0(&v655, &v568, &v599, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v374);
                v375 = (_WORD *)sub_140001650(2, 1);
                if ( !v375 )
                  sub_141938D2B(1, 2);
                *v375 = 25705;
                v599.m256i_i64[0] = 2;
                v599.m256i_i64[1] = (__int64)v375;
                v599.m256i_i64[2] = 2;
                v640 = 1;
                sub_14040FB10(&v655, &v542);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9398);
                }
                v376 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v376;
                v640 = 0;
                sub_140E72AA0(&v655, &v568, &v599, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v377);
                v378 = (_DWORD *)sub_140001650(4, 1);
                if ( !v378 )
                  sub_141938D2B(1, 4);
                *v378 = 1701667182;
                v599.m256i_i64[0] = 4;
                v599.m256i_i64[1] = (__int64)v378;
                v599.m256i_i64[2] = 4;
                v639 = 1;
                sub_14040FB10(&v655, &v576);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9398);
                }
                v379 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v379;
                v639 = 0;
                sub_140E72AA0(&v655, &v568, &v599, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v380);
                v381 = sub_140001650(5, 1);
                if ( !v381 )
                  sub_141938D2B(1, 5);
                *(_BYTE *)(v381 + 4) = 116;
                *(_DWORD *)v381 = 1970302569;
                *(_QWORD *)&v585 = 5;
                *((_QWORD *)&v585 + 1) = v381;
                v586 = 5;
                *(_QWORD *)v563 = 0;
                *(_QWORD *)&v563[16] = 0;
                nullsub_1(v382);
                v383 = sub_140001650(5, 1);
                if ( !v383 )
                  sub_141938D2B(1, 5);
                *(_BYTE *)(v383 + 4) = 116;
                *(_DWORD *)v383 = 1970302569;
                v587.m128i_i64[0] = 5;
                v587.m128i_i64[1] = v383;
                v588 = 5;
                v638 = 1;
                sub_140412420(&v655, &v617);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9398);
                }
                v384 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v384;
                v638 = 0;
                sub_140E72AA0(&v655, v563, &v587, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                v599.m256i_i64[3] = *(_QWORD *)&v563[16];
                *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v563);
                v599.m256i_i8[0] = 5;
                v610 = 0;
                sub_140E72AA0(&v655, &v568, &v585, &v599);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                v624.m256i_i64[3] = v569;
                *(__m128i *)&v624.m256i_u64[1] = _mm_loadu_si128(&v568);
                v624.m256i_i8[0] = 5;
                sub_1402FBE50(&v579, aAssistant_1, 9, &v624);
                v660 = v672;
                v681 = v671;
                sub_14002F9D0(&v617);
                goto LABEL_707;
              }
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v239)) == 0xFFFF )
              {
                v282 = v603;
                v283 = v604;
                v603.m128i_i64[0] = 0;
                v603.m128i_i64[1] = 8;
                v604 = 0;
                v284 = v282.m128i_i64[1] + 32 * v283;
                v618.m256i_i64[0] = v282.m128i_i64[1];
                v618.m256i_i64[1] = v282.m128i_i64[1];
                v618.m256i_i64[2] = v282.m128i_i64[0];
                v618.m256i_i64[3] = v284;
                if ( v283 )
                {
                  v285 = (const __m128i *)(v282.m128i_i64[1] + 32);
                  m128i_i64 = (__int64)v655.m256i_i64 + 1;
                  do
                  {
                    if ( v285[-2].m128i_i8[0] == -1 )
                      goto LABEL_485;
                    v286 = v285 - 2;
                    v655.m256i_i8[0] = v285[-2].m128i_i8[0];
                    v287 = _mm_loadu_si128((const __m128i *)&v285->m128i_i8[-31]);
                    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v285 - 1);
                    *(__m128i *)&v655.m256i_i8[1] = v287;
                    v661 = (__int64)v285;
                    sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                    v285 = (const __m128i *)(v661 + 32);
                  }
                  while ( &v286[2] != (const __m128i *)v284 );
                  v285 = (const __m128i *)v284;
LABEL_485:
                  v618.m256i_i64[1] = (__int64)v285;
                }
                v660 = v672;
                v681 = v671;
                sub_140383750(&v618);
                v660 = v672;
                v681 = v671;
                v288 = sub_1416419F0(aCallId, 7, v264);
                if ( v288 || (v660 = v672, v681 = v671, (v288 = sub_1416419F0(aId_1, 2, v264)) != 0) )
                {
                  v289 = v672;
                  if ( *(_BYTE *)v288 == 3 )
                  {
                    v290 = *(_QWORD *)(v288 + 16);
                    v291 = *(_QWORD *)(v288 + 24);
                  }
                  else
                  {
                    v290 = 1;
                    v291 = 0;
                  }
                }
                else
                {
                  v290 = 1;
                  v291 = 0;
                  v289 = v672;
                }
                *(_QWORD *)v563 = v290;
                *(_QWORD *)&v563[8] = v291;
                v660 = v289;
                v681 = v671;
                v407 = sub_1416419F0("argumentsephemeral", 9, v264);
                if ( v407 )
                {
                  v660 = v672;
                  v681 = v671;
                  sub_14036A150(&v655, v407);
                  v408 = &v655.m256i_i8[1];
                  v409 = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                  *(__m128i *)v618.m256i_i8 = _mm_loadu_si128((const __m128i *)&v655.m256i_i8[1]);
                  *(__m128i *)((char *)&v618.m256i_u64[1] + 7) = v409;
                  if ( v655.m256i_i8[0] != -1 )
                  {
                    *(_OWORD *)&v655.m256i_u64[2] = *(_OWORD *)((char *)&v618.m256i_u64[1] + 7);
                    *(__m128i *)&v655.m256i_i8[1] = _mm_load_si128((const __m128i *)&v618);
                    if ( v655.m256i_i8[0] == 5 )
                    {
                      *(_OWORD *)&v624.m256i_u64[2] = *(_OWORD *)((char *)&v618.m256i_u64[1] + 7);
                      *(__m128i *)&v624.m256i_i8[1] = _mm_load_si128((const __m128i *)&v618);
                      goto LABEL_690;
                    }
                    v660 = v672;
                    v681 = v671;
                    sub_14002F9D0(&v655);
                  }
                }
                v624.m256i_i64[1] = 0;
                v624.m256i_i64[3] = 0;
LABEL_690:
                v624.m256i_i8[0] = 5;
                v587.m128i_i64[0] = 0;
                v588 = 0;
                nullsub_1(v408);
                v410 = (_DWORD *)sub_140001650(4, 1);
                if ( !v410 )
                  sub_141938D2B(1, 4);
                *v410 = 1701869940;
                v617.m256i_i64[0] = 4;
                v617.m256i_i64[1] = (__int64)v410;
                v617.m256i_i64[2] = 4;
                v645 = 1;
                sub_14040FB10(&v655, &off_1419E61B8);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9380);
                }
                v411 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v411;
                v645 = 0;
                sub_140E72AA0(&v655, &v587, &v617, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v412);
                v413 = (_WORD *)sub_140001650(2, 1);
                if ( !v413 )
                  sub_141938D2B(1, 2);
                *v413 = 25705;
                v617.m256i_i64[0] = 2;
                v617.m256i_i64[1] = (__int64)v413;
                v617.m256i_i64[2] = 2;
                v644 = 1;
                sub_14040FB10(&v655, v563);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9380);
                }
                v414 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v414;
                v644 = 0;
                sub_140E72AA0(&v655, &v587, &v617, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v415);
                v416 = (_DWORD *)sub_140001650(4, 1);
                if ( !v416 )
                  sub_141938D2B(1, 4);
                *v416 = 1701667182;
                v617.m256i_i64[0] = 4;
                v617.m256i_i64[1] = (__int64)v416;
                v617.m256i_i64[2] = 4;
                v643 = 1;
                sub_14040FB10(&v655, &off_1419E5508);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9380);
                }
                v417 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v417;
                v643 = 0;
                sub_140E72AA0(&v655, &v587, &v617, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v418);
                v419 = sub_140001650(5, 1);
                if ( !v419 )
                  sub_141938D2B(1, 5);
                *(_BYTE *)(v419 + 4) = 116;
                *(_DWORD *)v419 = 1970302569;
                v617.m256i_i64[0] = 5;
                v617.m256i_i64[1] = v419;
                v617.m256i_i64[2] = 5;
                v642 = 1;
                sub_140412420(&v655, &v624);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E9380);
                }
                v420 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v420;
                v642 = 0;
                sub_140E72AA0(&v655, &v587, &v617, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                v599.m256i_i64[3] = v588;
                *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128(&v587);
                v599.m256i_i8[0] = 5;
                sub_1402FBE50(&v579, aAssistant_1, 9, &v599);
                v660 = v672;
                v681 = v671;
                sub_14002F9D0(&v624);
              }
LABEL_707:
              v248 = v666;
              if ( (_BYTE)v671 )
              {
                v594 = v666;
                v7 = v672;
                v593 = v672;
                v673 = 1;
                sub_14002F9D0(&v583);
              }
              else
              {
                v7 = v672;
              }
              goto LABEL_402;
            }
            v268 = 0;
LABEL_452:
            v660 = v672;
            v681 = v671;
            v271 = sub_1416419F0(aStatus_3, 6, v264);
            if ( v271 )
            {
              v248 = v666;
              if ( *(_BYTE *)v271 == 3
                && (*(_QWORD *)(v271 + 24) != 9
                 || **(_QWORD **)(v271 + 16) ^ 0x6574656C706D6F63LL
                  | *(unsigned __int8 *)(*(_QWORD *)(v271 + 16) + 8LL) ^ 0x64LL) )
              {
                goto LABEL_472;
              }
            }
            goto LABEL_458;
          }
          if ( v267 == 13 )
          {
            if ( *(_QWORD *)v266 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v266 + 5) ^ 0x6C6C61635F6E6F69LL )
              goto LABEL_476;
            v268 = 1;
            goto LABEL_452;
          }
          v268 = 0;
LABEL_458:
          if ( v267 == 7 )
          {
            if ( !(*(_DWORD *)v266 ^ 0x7373656D | *(_DWORD *)(v266 + 3) ^ 0x65676173) )
            {
              v660 = v672;
              v681 = v671;
              v329 = sub_1416419F0(
                       "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。userte"
                       "mperaturemax_tokensstreamdoubaoreasoning_effortnone",
                       4,
                       v264);
              m128i_i64 = (__int64)"usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
              if ( !v329
                || (m128i_i64 = (__int64)"usertemperaturemax_tokensstreamdoubaoreasoning_effortnone", *(_BYTE *)v329 != 3) )
              {
LABEL_656:
                v331 = v604;
                if ( v604 )
                {
                  v332 = 0;
LABEL_658:
                  v387 = v603.m128i_i64[1];
                  v386 = v603.m128i_i64[0];
                  v603.m128i_i64[0] = 0;
                  v603.m128i_i64[1] = 8;
                  v604 = 0;
                  v388 = v387 + 32 * v331;
                  v618.m256i_i64[0] = v387;
                  v618.m256i_i64[2] = v386;
                  v618.m256i_i64[3] = v388;
                  v389 = (const __m128i *)(v387 + 32);
                  do
                  {
                    if ( v389[-2].m128i_i8[0] == -1 )
                      goto LABEL_662;
                    v390 = v389 - 2;
                    v655.m256i_i8[0] = v389[-2].m128i_i8[0];
                    v391 = _mm_loadu_si128((const __m128i *)&v389->m128i_i8[-31]);
                    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v389 - 1);
                    *(__m128i *)&v655.m256i_i8[1] = v391;
                    v661 = (__int64)v389;
                    sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                    v389 = (const __m128i *)(v661 + 32);
                  }
                  while ( &v390[2] != (const __m128i *)v388 );
                  v389 = (const __m128i *)v388;
LABEL_662:
                  v618.m256i_i64[1] = (__int64)v389;
                  v660 = v672;
                  v681 = v671;
                  sub_140383750(&v618);
                  v392 = 4;
                  v393 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
                  if ( v332 )
                  {
LABEL_663:
                    if ( !(*(_QWORD *)m128i_i64 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(m128i_i64 + 8) ^ 0x74LL) )
                    {
                      v394 = v603;
                      v395 = v604;
                      v603.m128i_i64[0] = 0;
                      v603.m128i_i64[1] = 8;
                      v604 = 0;
                      v396 = v394.m128i_i64[1] + 32 * v395;
                      v618.m256i_i64[0] = v394.m128i_i64[1];
                      v618.m256i_i64[1] = v394.m128i_i64[1];
                      v618.m256i_i64[2] = v394.m128i_i64[0];
                      v618.m256i_i64[3] = v396;
                      if ( v395 )
                      {
                        v397 = (const __m128i *)(v394.m128i_i64[1] + 32);
                        do
                        {
                          if ( v397[-2].m128i_i8[0] == -1 )
                            goto LABEL_669;
                          v398 = v397 - 2;
                          v655.m256i_i8[0] = v397[-2].m128i_i8[0];
                          v399 = _mm_loadu_si128((const __m128i *)&v397->m128i_i8[-31]);
                          *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v397 - 1);
                          *(__m128i *)&v655.m256i_i8[1] = v399;
                          v661 = (__int64)v397;
                          sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                          v397 = (const __m128i *)(v661 + 32);
                        }
                        while ( &v398[2] != (const __m128i *)v396 );
                        v397 = (const __m128i *)v396;
LABEL_669:
                        v618.m256i_i64[1] = (__int64)v397;
                      }
                      v660 = v672;
                      v681 = v671;
                      sub_140383750(&v618);
                    }
                    v392 = 5LL
                         * ((*(_QWORD *)m128i_i64 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(m128i_i64 + 8) ^ 0x74LL) == 0)
                         + 4;
                    v393 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
                    if ( !(*(_QWORD *)m128i_i64 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(m128i_i64 + 8) ^ 0x74LL) )
                      v393 = aAssistant_1;
                  }
                }
                else
                {
                  v392 = 4;
                  v393 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
                }
                v660 = v672;
                v681 = v671;
                v400 = sub_1416419F0(
                         "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatur"
                         "emax_tokensstreamdoubaoreasoning_effortnone",
                         7,
                         v264);
                v660 = v672;
                v681 = v671;
                sub_140E883C0(&v655, v400);
                v401 = v655.m256i_i64[2];
                if ( v655.m256i_i64[0] == -1 )
                {
                  v514 = v602;
                  v602->m128i_i64[0] = v655.m256i_i64[1];
                  v514->m128i_i64[1] = v401;
                  v514[2].m128i_i64[0] = -2;
                  goto LABEL_864;
                }
                v402 = v655.m256i_i64[1] + 32 * v655.m256i_i64[2];
                v618.m256i_i64[0] = v655.m256i_i64[1];
                v618.m256i_i64[1] = v655.m256i_i64[1];
                v618.m256i_i64[2] = v655.m256i_i64[0];
                v618.m256i_i64[3] = v402;
                v403 = v672;
                if ( v655.m256i_i64[2] )
                {
                  v404 = (const __m128i *)(v655.m256i_i64[1] + 32);
                  do
                  {
                    if ( v404[-2].m128i_i8[0] == -1 )
                      goto LABEL_681;
                    v405 = v404 - 2;
                    v655.m256i_i8[0] = v404[-2].m128i_i8[0];
                    v406 = _mm_loadu_si128((const __m128i *)&v404->m128i_i8[-31]);
                    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v404 - 1);
                    *(__m128i *)&v655.m256i_i8[1] = v406;
                    v661 = (__int64)v404;
                    sub_1402FBE50(&v579, v393, v392, &v655);
                    v404 = (const __m128i *)(v661 + 32);
                    m128i_i64 = (__int64)v405[2].m128i_i64;
                  }
                  while ( m128i_i64 != v402 );
                  v404 = (const __m128i *)v402;
LABEL_681:
                  v403 = v672;
                  v618.m256i_i64[1] = (__int64)v404;
                }
                v660 = v403;
                v681 = v671;
                sub_140383750(&v618);
                goto LABEL_707;
              }
              m128i_i64 = *(_QWORD *)(v329 + 16);
              v330 = *(_QWORD *)(v329 + 24);
              if ( v330 == 6 )
              {
                if ( *(_DWORD *)m128i_i64 ^ 0x74737973 | *(unsigned __int16 *)(m128i_i64 + 4) ^ 0x6D65 )
                  goto LABEL_656;
              }
              else
              {
                if ( v330 != 9 )
                  goto LABEL_656;
                if ( *(_QWORD *)m128i_i64 ^ 0x65706F6C65766564LL | *(unsigned __int8 *)(m128i_i64 + 8) ^ 0x72LL )
                {
                  if ( !(*(_QWORD *)m128i_i64 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(m128i_i64 + 8) ^ 0x74LL) )
                    goto LABEL_663;
                  v331 = v604;
                  v332 = 1;
                  if ( !v604 )
                    goto LABEL_663;
                  goto LABEL_658;
                }
              }
              v660 = v672;
              v681 = v671;
              v421 = sub_1416419F0(
                       "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
                       "ax_tokensstreamdoubaoreasoning_effortnone",
                       7,
                       v264);
              v660 = v672;
              v681 = v671;
              sub_140E86990(&v655, v421);
              v422 = v655.m256i_i64[2];
              if ( v655.m256i_i64[0] == -1 )
              {
                v531 = v602;
                v602->m128i_i64[0] = v655.m256i_i64[1];
                v531->m128i_i64[1] = v422;
                v531[2].m128i_i64[0] = -2;
                goto LABEL_864;
              }
              v587 = *(__m128i *)v655.m256i_i8;
              v588 = v655.m256i_i64[2];
              m128i_i64 = v666;
              v423 = v672;
              if ( !v655.m256i_i64[2] )
              {
                v425 = v672;
                goto LABEL_737;
              }
              if ( (v605 & 1) == 0 )
                goto LABEL_719;
              if ( (_DWORD)v537 == 512 )
              {
                v564 = v672;
                v424 = sub_14022DB50(v659, v627);
                m128i_i64 = v666;
                if ( !v424 )
                  goto LABEL_719;
                goto LABEL_718;
              }
              if ( (v544 & 0x10000) != 0 )
              {
                v564 = v672;
                if ( !(unsigned __int8)sub_14022F240(v659, v627) )
                {
                  v533 = 120;
                  v534 = "This Claude model cannot replay mid-conversation system instructions; use a compatible model or start a new conversation";
                  goto LABEL_914;
                }
                if ( v604 )
                {
                  v533 = 60;
                  v534 = aSystemInstruct;
LABEL_914:
                  v596 = v534;
LABEL_915:
                  v535 = v602;
                  v602->m128i_i64[0] = (__int64)v596;
                  v535->m128i_i64[1] = v533;
                  v535[2].m128i_i64[0] = -2;
                  if ( v587.m128i_i64[0] )
                    sub_140001660(v587.m128i_i64[1], v587.m128i_i64[0], 1);
                  goto LABEL_864;
                }
                v617.m256i_i64[0] = 0;
                v617.m256i_i64[2] = 0;
                nullsub_1(v429);
                v430 = (_DWORD *)sub_140001650(4, 1);
                if ( !v430 )
                  sub_141938D2B(1, 4);
                *v430 = 1701869940;
                v624.m256i_i64[0] = 4;
                v624.m256i_i64[1] = (__int64)v430;
                v624.m256i_i64[2] = 4;
                v633 = 1;
                sub_14040FB10(&v655, &off_1419E50A8);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E94A0);
                }
                v431 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v431;
                v633 = 0;
                sub_140E72AA0(&v655, &v617, &v624, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                nullsub_1(v432);
                v433 = (_DWORD *)sub_140001650(4, 1);
                if ( !v433 )
                  sub_141938D2B(1, 4);
                *v433 = 1954047348;
                v624.m256i_i64[0] = 4;
                v624.m256i_i64[1] = (__int64)v433;
                v624.m256i_i64[2] = 4;
                v632 = 1;
                sub_14040F9F0(&v655, &v587);
                if ( v655.m256i_i8[0] == -1 )
                {
                  v618.m256i_i64[0] = v655.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v618,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E94A0);
                }
                v434 = _mm_loadu_si128((const __m128i *)&v655);
                *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
                *(__m128i *)v618.m256i_i8 = v434;
                v632 = 0;
                sub_140E72AA0(&v655, &v617, &v624, &v618);
                if ( v655.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v655);
                v599.m256i_i64[3] = v617.m256i_i64[2];
                *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v617);
                v599.m256i_i8[0] = 5;
                v425 = v672;
                v564 = v672;
                sub_1401F46A0(&v572, &v599);
                m128i_i64 = v666;
LABEL_737:
                v428 = v587.m128i_i64[0];
                if ( v587.m128i_i64[0] )
                {
                  v427 = v587.m128i_i64[1];
LABEL_739:
                  sub_140001660(v427, v428, 1);
                }
              }
              else
              {
LABEL_718:
                v564 = v423;
                v426 = sub_14022F3D0(v659, v627);
                m128i_i64 = v666;
                if ( v426 )
                {
                  v533 = 94;
                  goto LABEL_915;
                }
LABEL_719:
                if ( v423 == -1 )
                {
                  m128i_i64 = v587.m128i_i64[1];
                  v425 = v587.m128i_i64[0];
                  v598 = v588;
                }
                else
                {
                  if ( v598 )
                  {
                    v599.m256i_i64[0] = v423;
                    v599.m256i_i64[1] = m128i_i64;
                    v599.m256i_i64[2] = v598;
                    v655.m256i_i64[0] = (__int64)&v599;
                    v655.m256i_i64[1] = (__int64)sub_1400015F0;
                    v655.m256i_i64[2] = (__int64)&v587;
                    v655.m256i_i64[3] = (__int64)sub_1400015F0;
                    sub_1416ABFD0(&v618, &unk_1419E92C0, &v655);
                    m128i_i64 = v618.m256i_i64[1];
                    v425 = v618.m256i_i64[0];
                    v598 = v618.m256i_i64[2];
                    if ( v599.m256i_i64[0] )
                      sub_140001660(v599.m256i_i64[1], v599.m256i_i64[0], 1);
                    goto LABEL_737;
                  }
                  m128i_i64 = v587.m128i_i64[1];
                  v425 = v587.m128i_i64[0];
                  v598 = v588;
                  if ( v423 )
                  {
                    v427 = v666;
                    v428 = v672;
                    goto LABEL_739;
                  }
                }
              }
              v248 = m128i_i64;
              v7 = v425;
              if ( (_BYTE)v671 )
                goto LABEL_592;
              goto LABEL_402;
            }
          }
          else if ( v267 == 9 && !(*(_QWORD *)v266 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v266 + 8) ^ 0x67LL) )
          {
            v660 = v672;
            v681 = v671;
            sub_1402F5AF0(&v655, v264);
            v660 = v672;
            v681 = v671;
            sub_140293180(&v624, &v655);
            if ( v624.m256i_i8[0] != -1 )
            {
              v272 = _mm_loadu_si128((const __m128i *)&v624);
              *(__m128i *)&v599.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v624.m256i_u64[2]);
              *(__m128i *)v599.m256i_i8 = v272;
              v273 = v603;
              v274 = v604;
              v603.m128i_i64[0] = 0;
              v603.m128i_i64[1] = 8;
              v604 = 0;
              v275 = v273.m128i_i64[1] + 32 * v274;
              v618.m256i_i64[0] = v273.m128i_i64[1];
              v618.m256i_i64[1] = v273.m128i_i64[1];
              v618.m256i_i64[2] = v273.m128i_i64[0];
              v618.m256i_i64[3] = v275;
              m128i_i64 = (__int64)v655.m256i_i64 + 1;
              if ( v274 )
              {
                v276 = (const __m128i *)(v273.m128i_i64[1] + 32);
                do
                {
                  if ( v276[-2].m128i_i8[0] == -1 )
                    goto LABEL_467;
                  v277 = v276 - 2;
                  v655.m256i_i8[0] = v276[-2].m128i_i8[0];
                  v278 = _mm_loadu_si128((const __m128i *)&v276->m128i_i8[-31]);
                  *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v276 - 1);
                  *(__m128i *)&v655.m256i_i8[1] = v278;
                  v661 = (__int64)v276;
                  sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
                  v276 = (const __m128i *)(v661 + 32);
                }
                while ( &v277[2] != (const __m128i *)v275 );
                v276 = (const __m128i *)v275;
LABEL_467:
                v618.m256i_i64[1] = (__int64)v276;
              }
              sub_140383750(&v618);
              v279 = (void *)sub_1416419F0(
                               "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
                               "eraturemax_tokensstreamdoubaoreasoning_effortnone",
                               7,
                               &v599);
              if ( !v279 )
                v279 = off_1421E7108;
              sub_14036A150(&v655, v279);
              v280 = sub_14027E150((__int128 *)v655.m256i_i8, (__int64)&v579);
              if ( v280 )
              {
                v526 = v602;
                v602->m128i_i64[0] = (__int64)v280;
                v526->m128i_i64[1] = v281;
                v526[2].m128i_i64[0] = -2;
                v660 = v672;
                v681 = v671;
                sub_14002F9D0(&v624);
                goto LABEL_864;
              }
              v660 = v672;
              v681 = v671;
              sub_14002F9D0(&v624);
              v248 = v666;
LABEL_472:
              v7 = v672;
              if ( !(_BYTE)v671 )
                goto LABEL_402;
LABEL_592:
              v594 = v248;
              v593 = v7;
              v673 = 1;
              sub_14002F9D0(&v583);
              goto LABEL_402;
            }
            v660 = v672;
            v681 = v671;
            sub_1403408D0(v536, v264);
            if ( v536[0] == 0xFF )
            {
              v660 = v672;
              v681 = v671;
              v385 = sub_1416419F0(aEncryptedConte_0, 17, v264);
              if ( v385
                && *(_BYTE *)v385 == 3
                && *(_QWORD *)(v385 + 24) >= 0x1Du
                && _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v385 + 16) + 13LL)), v240),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v385 + 16)), v241))) == 0xFFFF )
              {
                v532 = v602;
                v602->m128i_i64[0] = (__int64)aInvalidAnthrop_3;
                v532->m128i_i64[1] = 58;
                v532[2].m128i_i64[0] = -2;
LABEL_864:
                v512 = v666;
                v7 = v672;
                goto LABEL_865;
              }
            }
            else
            {
              v660 = v672;
              v681 = v671;
              sub_1401F46A0(&v603, v536);
            }
            goto LABEL_707;
          }
          if ( !v268 )
            goto LABEL_477;
LABEL_476:
          if ( *(_QWORD *)v266 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v266 + 5) ^ 0x6C6C61635F6E6F69LL )
          {
LABEL_477:
            switch ( v267 )
            {
              case 16LL:
                goto LABEL_478;
              case 18LL:
                v306 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v242);
                v307 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v266 + 16)), v243);
                goto LABEL_513;
              case 20LL:
                v306 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v245);
                v307 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v266 + 16)), v244);
LABEL_513:
                v308 = _mm_movemask_epi8(_mm_and_si128(v307, v306));
                goto LABEL_515;
              case 23LL:
                v308 = _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v238),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v266 + 7)), v246)));
LABEL_515:
                if ( v308 != 0xFFFF )
                  goto LABEL_707;
                v309 = v603;
                v310 = v604;
                v603.m128i_i64[0] = 0;
                v603.m128i_i64[1] = 8;
                v604 = 0;
                v311 = v309.m128i_i64[1] + 32 * v310;
                v618.m256i_i64[0] = v309.m128i_i64[1];
                v618.m256i_i64[1] = v309.m128i_i64[1];
                v618.m256i_i64[2] = v309.m128i_i64[0];
                v618.m256i_i64[3] = v311;
                if ( !v310 )
                  goto LABEL_522;
                v312 = (const __m128i *)(v309.m128i_i64[1] + 32);
                break;
              default:
                goto LABEL_707;
            }
            do
            {
              if ( v312[-2].m128i_i8[0] == -1 )
                goto LABEL_521;
              v313 = v312 - 2;
              v655.m256i_i8[0] = v312[-2].m128i_i8[0];
              v314 = _mm_loadu_si128((const __m128i *)&v312->m128i_i8[-31]);
              *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v312 - 1);
              *(__m128i *)&v655.m256i_i8[1] = v314;
              v661 = (__int64)v312;
              sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
              v312 = (const __m128i *)(v661 + 32);
            }
            while ( &v313[2] != (const __m128i *)v311 );
            v312 = (const __m128i *)v311;
LABEL_521:
            v618.m256i_i64[1] = (__int64)v312;
LABEL_522:
            v660 = v672;
            v681 = v671;
            sub_140383750(&v618);
            v660 = v672;
            v681 = v671;
            v315 = sub_1416419F0(aCallId, 7, v264);
            if ( v315 )
            {
              v316 = *(_BYTE *)v315 == 3;
              v317 = *(_QWORD *)(v315 + 16);
              if ( *(_BYTE *)v315 != 3 )
                v317 = 1;
              v661 = v317;
              v318 = *(_QWORD *)(v315 + 24);
              if ( !v316 )
                v318 = 0;
            }
            else
            {
              v661 = 1;
              v318 = 0;
            }
            sub_14072C410((unsigned int)&v655, v318, 0, 1, 1);
            v355 = (const __m128i *)v655.m256i_i64[1];
            if ( v655.m256i_i32[0] == 1 )
            {
              v660 = v672;
              v681 = v671;
              sub_141938D2B(v655.m256i_i64[1], v655.m256i_i64[2]);
            }
            m128i_i64 = v655.m256i_i64[2];
            if ( v318 )
              sub_1418F44E0((__m128i *)v655.m256i_i64[2], (const __m128i *)v661, v318);
            v661 = (__int64)v355;
            *(_QWORD *)v563 = v355;
            v622 = (__m128i *)m128i_i64;
            *(_QWORD *)&v563[8] = m128i_i64;
            *(_QWORD *)&v563[16] = v318;
            if ( ((v267 == 18) & (unsigned __int8)v615) != 0
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v266 + 16)), v243),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v266), v242))) == 0xFFFF )
            {
              sub_140361B50(&v655, v264);
            }
            else
            {
              sub_140E86D00(&v655, v264);
            }
            if ( v655.m256i_i8[0] == -1 )
            {
              v511 = v655.m256i_i64[2];
              v512 = v666;
              v7 = v672;
              v513 = v602;
              v602->m128i_i64[0] = v655.m256i_i64[1];
              v513->m128i_i64[1] = v511;
              v513[2].m128i_i64[0] = -2;
              if ( v661 )
                sub_140001660(v622, v661, 1);
LABEL_865:
              if ( (_BYTE)v671 )
              {
                v594 = v512;
                v593 = v7;
                v673 = 1;
                sub_14002F9D0(&v583);
              }
LABEL_797:
              v461 = 1;
LABEL_798:
              v553 = v666;
              v552 = v7;
              v626 = v461;
              sub_1401901C0(&v572);
              if ( v461 )
              {
                v584 = v666;
                v595 = v672;
                v675 = 1;
                v674 = 1;
                sub_1401901C0(&v603);
              }
LABEL_800:
              LOBYTE(v7) = 1;
              LOBYTE(m128i_i64) = 1;
              v218 = v666;
              v231 = v672;
LABEL_801:
              v554 = v218;
              v575 = v231;
              v669 = v7;
              v668 = m128i_i64;
              v667 = 1;
              sub_140E8CB20(v541);
              v666 = v218;
              v672 = v231;
              LODWORD(v671) = v7;
              if ( v550.m128i_i64[0] )
              {
                v477 = v551.m128i_i64[0];
                v655.m256i_i64[1] = 0;
                *(__m128i *)&v655.m256i_u64[2] = v550;
                v656.m128i_i64[1] = 0;
                *(__m128i *)v657 = v550;
                v478 = 1;
              }
              else
              {
                v478 = 0;
                v477 = 0;
              }
              LODWORD(v659) = m128i_i64;
              v655.m256i_i64[0] = v478;
              v656.m128i_i64[0] = v478;
              *(_QWORD *)&v657[16] = v477;
              sub_140E90CA0(&v655);
              if ( v548.m128i_i64[0] != -1 && v548.m128i_i64[0] )
                sub_140001660(v548.m128i_i64[1], v548.m128i_i64[0], 1);
              if ( (_BYTE)v671 )
                goto LABEL_808;
              goto LABEL_813;
            }
            v624.m256i_i32[1] = v655.m256i_i32[1];
            *(__int32 *)((char *)v624.m256i_i32 + 1) = *(__int32 *)((char *)v655.m256i_i32 + 1);
            v356 = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            v624.m256i_i8[0] = v655.m256i_i8[0];
            v624.m256i_i64[1] = v655.m256i_i64[1];
            *(__m128i *)&v624.m256i_u64[2] = v356;
            v587.m128i_i64[0] = 0;
            v588 = 0;
            nullsub_1(v655.m256i_i64[1]);
            v357 = (_DWORD *)sub_140001650(4, 1);
            if ( !v357 )
              sub_141938D2B(1, 4);
            *v357 = 1701869940;
            v617.m256i_i64[0] = 4;
            v617.m256i_i64[1] = (__int64)v357;
            v617.m256i_i64[2] = 4;
            v648 = 1;
            sub_14040FB10(&v655, &off_1419E54C0);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E9368);
            }
            v358 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v358;
            v648 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            nullsub_1(v359);
            v360 = (void *)sub_140001650(11, 1);
            if ( !v360 )
              sub_141938D2B(1, 11);
            qmemcpy(v360, "tool_use_id", 11);
            v617.m256i_i64[0] = 11;
            v617.m256i_i64[1] = (__int64)v360;
            v617.m256i_i64[2] = 11;
            v647 = 1;
            sub_14040F9F0(&v655, v563);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E9368);
            }
            v361 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v361;
            v647 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            nullsub_1(v362);
            v363 = (_DWORD *)sub_140001650(7, 1);
            if ( !v363 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v363 + 3) = 1953391988;
            *v363 = 1953394531;
            v617.m256i_i64[0] = 7;
            v617.m256i_i64[1] = (__int64)v363;
            v617.m256i_i64[2] = 7;
            v646 = 1;
            sub_140412420(&v655, &v624);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E9368);
            }
            v364 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v364;
            v646 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            v599.m256i_i64[3] = v588;
            *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128(&v587);
            v599.m256i_i8[0] = 5;
            sub_140346250(&v579, &v599);
            sub_14002F9D0(&v624);
            if ( v661 )
              sub_140001660(v622, v661, 1);
            goto LABEL_707;
          }
          v292 = v603;
          v293 = v604;
          v603.m128i_i64[0] = 0;
          v603.m128i_i64[1] = 8;
          v604 = 0;
          v294 = v292.m128i_i64[1] + 32 * v293;
          v618.m256i_i64[0] = v292.m128i_i64[1];
          v618.m256i_i64[1] = v292.m128i_i64[1];
          v618.m256i_i64[2] = v292.m128i_i64[0];
          v618.m256i_i64[3] = v294;
          if ( v293 )
          {
            v295 = (const __m128i *)(v292.m128i_i64[1] + 32);
            do
            {
              if ( v295[-2].m128i_i8[0] == -1 )
                goto LABEL_495;
              v296 = v295 - 2;
              v655.m256i_i8[0] = v295[-2].m128i_i8[0];
              v297 = _mm_loadu_si128((const __m128i *)&v295->m128i_i8[-31]);
              *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128(v295 - 1);
              *(__m128i *)&v655.m256i_i8[1] = v297;
              v661 = (__int64)v295;
              sub_1402FBE50(&v579, aAssistant_1, 9, &v655);
              v295 = (const __m128i *)(v661 + 32);
            }
            while ( &v296[2] != (const __m128i *)v294 );
            v295 = (const __m128i *)v294;
LABEL_495:
            v618.m256i_i64[1] = (__int64)v295;
          }
          v660 = v672;
          v681 = v671;
          sub_140383750(&v618);
          v660 = v672;
          v681 = v671;
          v298 = sub_1416419F0(aCallId, 7, v264);
          if ( v298 || (v660 = v672, v681 = v671, (v298 = sub_1416419F0(aId_1, 2, v264)) != 0) )
          {
            v299 = *(_QWORD *)(v298 + 16);
            if ( *(_BYTE *)v298 != 3 )
              v299 = 1;
            v300 = *(_QWORD *)(v298 + 24);
            if ( *(_BYTE *)v298 != 3 )
              v300 = 0;
          }
          else
          {
            v299 = 1;
            v300 = 0;
          }
          sub_14072C410((unsigned int)&v655, v300, 0, 1, 1);
          v301 = (__m128i *)v655.m256i_i64[1];
          if ( v655.m256i_i32[0] == 1 )
          {
            v660 = v672;
            v681 = v671;
            sub_141938D2B(v655.m256i_i64[1], v655.m256i_i64[2]);
          }
          v302 = v655.m256i_i64[2];
          if ( v300 )
            sub_1418F44E0((__m128i *)v655.m256i_i64[2], (const __m128i *)v299, v300);
          v622 = v301;
          *(_QWORD *)&v585 = v301;
          v582 = v302;
          *((_QWORD *)&v585 + 1) = v302;
          v586 = v300;
          v303 = sub_1416419F0(aName_2, 4, v264);
          if ( v303 )
          {
            v304 = *(_QWORD *)(v303 + 16);
            if ( *(_BYTE *)v303 != 3 )
              v304 = 1;
            v305 = *(_QWORD *)(v303 + 24);
            if ( *(_BYTE *)v303 != 3 )
              v305 = 0;
          }
          else
          {
            v304 = 1;
            v305 = 0;
          }
          sub_14072C410((unsigned int)&v655, v305, 0, 1, 1);
          v333 = v655.m256i_i64[1];
          if ( v655.m256i_i32[0] == 1 )
            sub_141938D2B(v655.m256i_i64[1], v655.m256i_i64[2]);
          v334 = (const __m128i *)v655.m256i_i64[2];
          if ( v305 )
            sub_1418F44E0((__m128i *)v655.m256i_i64[2], (const __m128i *)v304, v305);
          v597 = (__m128i *)v333;
          *(_QWORD *)v563 = v333;
          v661 = (__int64)v334;
          *(_QWORD *)&v563[8] = v334;
          *(_QWORD *)&v563[16] = v305;
          v335 = sub_1416419F0("argumentsephemeral", 9, v264);
          if ( v335 )
          {
            v336 = *(const char **)(v335 + 16);
            if ( *(_BYTE *)v335 != 3 )
              v336 = asc_1419E60E5;
            m128i_i64 = *(_QWORD *)(v335 + 24);
            if ( *(_BYTE *)v335 != 3 )
              m128i_i64 = 2;
          }
          else
          {
            m128i_i64 = 2;
            v336 = asc_1419E60E5;
          }
          v337 = (_QWORD *)v661;
          v338 = sub_140DEDB20(&v550, v661, v305);
          if ( v338 )
          {
            v339 = *(_QWORD *)(v338 + 32);
            LOBYTE(v338) = *(_QWORD *)(v338 + 40) != 6;
          }
          else
          {
            v339 = 0;
          }
          v340 = v305 == 11
              && (*v337 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)v337 + 3) ^ 0x68637461705F796CLL) == 0;
          if ( (v339 == 0) | v338 & 1 )
            v341 = v340 && v339 == 0;
          else
            v341 = (*(_DWORD *)v339 ^ 0x74737563 | *(unsigned __int16 *)(v339 + 4) ^ 0x6D6F) == 0;
          sub_14032D9F0((unsigned int)&v655, (_DWORD)v337, v305, (_DWORD)v336, m128i_i64, v341);
          if ( v655.m256i_i8[0] != -1 )
          {
            v343 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v624.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v624.m256i_i8 = v343;
            v587.m128i_i64[0] = 0;
            v588 = 0;
            nullsub_1(v342);
            v344 = (_DWORD *)sub_140001650(4, 1);
            if ( !v344 )
              sub_141938D2B(1, 4);
            *v344 = 1701869940;
            v617.m256i_i64[0] = 4;
            v617.m256i_i64[1] = (__int64)v344;
            v617.m256i_i64[2] = 4;
            v637 = 1;
            sub_14040FB10(&v655, &off_1419E61B8);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E93B0);
            }
            v345 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v345;
            v637 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            nullsub_1(v346);
            v347 = (_WORD *)sub_140001650(2, 1);
            if ( !v347 )
              sub_141938D2B(1, 2);
            *v347 = 25705;
            v617.m256i_i64[0] = 2;
            v617.m256i_i64[1] = (__int64)v347;
            v617.m256i_i64[2] = 2;
            v636 = 1;
            sub_14040F9F0(&v655, &v585);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E93B0);
            }
            v348 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v348;
            v636 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            nullsub_1(v349);
            v350 = (_DWORD *)sub_140001650(4, 1);
            if ( !v350 )
              sub_141938D2B(1, 4);
            *v350 = 1701667182;
            v617.m256i_i64[0] = 4;
            v617.m256i_i64[1] = (__int64)v350;
            v617.m256i_i64[2] = 4;
            v635 = 1;
            sub_14040F9F0(&v655, v563);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E93B0);
            }
            v351 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v351;
            v635 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            nullsub_1(v352);
            v353 = sub_140001650(5, 1);
            if ( !v353 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v353 + 4) = 116;
            *(_DWORD *)v353 = 1970302569;
            v617.m256i_i64[0] = 5;
            v617.m256i_i64[1] = v353;
            v617.m256i_i64[2] = 5;
            v634 = 1;
            sub_140412420(&v655, &v624);
            if ( v655.m256i_i8[0] == -1 )
            {
              v618.m256i_i64[0] = v655.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v618,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E93B0);
            }
            v354 = _mm_loadu_si128((const __m128i *)&v655);
            *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
            *(__m128i *)v618.m256i_i8 = v354;
            v634 = 0;
            sub_140E72AA0(&v655, &v587, &v617, &v618);
            if ( v655.m256i_i8[0] != -1 )
              sub_14002F9D0(&v655);
            v599.m256i_i64[3] = v588;
            *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128(&v587);
            v599.m256i_i8[0] = 5;
            sub_1402FBE50(&v579, aAssistant_1, 9, &v599);
            sub_14002F9D0(&v624);
            if ( v597 )
              sub_140001660(v661, v597, 1);
            if ( v622 )
              sub_140001660(v582, v622, 1);
            goto LABEL_707;
          }
          v248 = v666;
          v7 = v672;
          if ( v597 )
            sub_140001660(v661, v597, 1);
          if ( v622 )
            sub_140001660(v582, v622, 1);
          if ( (_BYTE)v671 )
            goto LABEL_592;
LABEL_402:
          v237 += 2;
          v247 = (__m128i *)(v616 + 1);
        }
        if ( v604 )
        {
          v463 = v602;
          v602->m128i_i64[0] = (__int64)aToolAdditionsC;
          v463->m128i_i64[1] = 55;
          v463[2].m128i_i64[0] = -2;
          v594 = v248;
          v593 = v7;
          v673 = 1;
          sub_1401901C0(&v618);
          goto LABEL_797;
        }
        v249 = *(_OWORD *)v618.m256i_i8;
        v250 = v618.m256i_i64[2];
        v251 = 32 * v618.m256i_i64[2];
        v655.m256i_i64[0] = v618.m256i_i64[1];
        v655.m256i_i64[1] = v618.m256i_i64[1];
        v655.m256i_i64[2] = v618.m256i_i64[0];
        v655.m256i_i64[3] = v618.m256i_i64[1] + 32 * v618.m256i_i64[2];
        v252 = v574;
        if ( v618.m256i_i64[2] > (unsigned __int64)(v572 - v574) )
        {
          sub_14190D590((unsigned int)&v572, v574, v618.m256i_i32[4], 8, 32);
          v252 = v574;
          v248 = v666;
        }
        else if ( !v618.m256i_i64[2] )
        {
LABEL_409:
          m128i_i64 = v250 + v252;
          v574 = m128i_i64;
          if ( (_QWORD)v249 )
            sub_140001660(*((_QWORD *)&v249 + 1), 32 * v249, 8);
          v7 = v672;
          goto LABEL_412;
        }
        sub_1418F44E0((__m128i *)(v573 + 32 * v252), *((const __m128i **)&v249 + 1), v251);
        goto LABEL_409;
      }
      v584 = v666;
      v595 = v672;
      v675 = 1;
      v674 = 1;
      v435 = sub_1416419F0(aInput_0, 5, v621);
      if ( v435 )
      {
        v436 = v666;
        v7 = v672;
        if ( *(_BYTE *)v435 != 3 )
          goto LABEL_755;
        v437 = *(_QWORD *)(v435 + 16);
        m128i_i64 = *(_QWORD *)(v435 + 24);
        v584 = v666;
        v595 = v672;
        v675 = 1;
        v674 = 1;
        sub_140E91160(v437, m128i_i64);
        if ( v439 )
        {
          v617.m256i_i64[0] = v437;
          v617.m256i_i64[1] = m128i_i64;
          v624.m256i_i64[0] = 0;
          v624.m256i_i64[2] = 0;
          nullsub_1(v438);
          v440 = (_DWORD *)sub_140001650(4, 1);
          if ( !v440 )
            sub_141938D2B(1, 4);
          *v440 = 1701869940;
          v599.m256i_i64[0] = 4;
          v599.m256i_i64[1] = (__int64)v440;
          v599.m256i_i64[2] = 4;
          v631 = 1;
          sub_14040FB10(&v655, &off_1419E50A8);
          if ( v655.m256i_i8[0] == -1 )
          {
            v618.m256i_i64[0] = v655.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v618,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E9530);
          }
          v441 = _mm_loadu_si128((const __m128i *)&v655);
          *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
          *(__m128i *)v618.m256i_i8 = v441;
          v631 = 0;
          sub_140E72AA0(&v655, &v624, &v599, &v618);
          if ( v655.m256i_i8[0] != -1 )
            sub_14002F9D0(&v655);
          nullsub_1(v442);
          v443 = (_DWORD *)sub_140001650(4, 1);
          if ( !v443 )
            sub_141938D2B(1, 4);
          *v443 = 1954047348;
          v599.m256i_i64[0] = 4;
          v599.m256i_i64[1] = (__int64)v443;
          v599.m256i_i64[2] = 4;
          v630 = 1;
          sub_14040FB10(&v655, &v617);
          if ( v655.m256i_i8[0] == -1 )
          {
            v618.m256i_i64[0] = v655.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v618,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E9530);
          }
          v444 = _mm_loadu_si128((const __m128i *)&v655);
          *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
          *(__m128i *)v618.m256i_i8 = v444;
          v630 = 0;
          sub_140E72AA0(&v655, &v624, &v599, &v618);
          if ( v655.m256i_i8[0] != -1 )
            sub_14002F9D0(&v655);
          *(__m128i *)&v655.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v624);
          v655.m256i_i64[3] = v624.m256i_i64[2];
          v655.m256i_i8[0] = 5;
          v584 = v666;
          v595 = v672;
          v675 = 1;
          v674 = 1;
          sub_1402FBE50(&v579, "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone", 4, &v655);
        }
      }
      v436 = v666;
      v7 = v672;
LABEL_755:
      v666 = v436;
      v584 = v436;
      v672 = v7;
      v595 = v7;
      v675 = 1;
      v674 = 1;
      v445 = sub_14027F810(v580, v581, v654 & 1);
      if ( v445 )
      {
        v447 = v602;
        v602->m128i_i64[0] = (__int64)v445;
        v447->m128i_i64[1] = v446;
        v447[2].m128i_i64[0] = -2;
        goto LABEL_800;
      }
      v584 = v666;
      v595 = v672;
      v675 = 1;
      v674 = 1;
      sub_140343470(&v579);
      v584 = v666;
      v595 = v672;
      v675 = 1;
      v674 = 1;
      sub_1403294A0(&v579);
      if ( !v581 )
      {
        v462 = v602;
        v602->m128i_i64[0] = (__int64)aCannotConvertC;
        v462->m128i_i64[1] = 44;
        v462[2].m128i_i64[0] = -2;
        goto LABEL_800;
      }
      v448 = v627;
      sub_14072C410((unsigned int)&v655, v627, 0, 1, 1);
      v449 = (__m128i *)v655.m256i_i64[1];
      if ( v655.m256i_i8[0] )
      {
        v584 = v666;
        v595 = v672;
        v675 = 1;
        v674 = 1;
        sub_141938D2B(v655.m256i_i64[1], v655.m256i_i64[2]);
      }
      m128i_i64 = v655.m256i_i64[2];
      if ( v448 )
      {
        sub_1418F44E0((__m128i *)v655.m256i_i64[2], v659, v627);
        v448 = v627;
      }
      v623 = v449;
      v583.m256i_i64[0] = (__int64)v449;
      v583.m256i_i64[1] = m128i_i64;
      v583.m256i_i64[2] = v448;
      v663 = 1;
      v662 = 1;
      v616 = m128i_i64;
      sub_14022DBF0(&v655, m128i_i64, v448);
      if ( v656.m128i_i8[5] == 2 || (LOBYTE(v7) = 1, v656.m128i_i8[1]) )
      {
        v663 = 1;
        v662 = 1;
        LODWORD(v7) = sub_140346740(v580, v581);
      }
      v663 = 1;
      v662 = 1;
      sub_1402E2B10(&v655, v621, v616, v627);
      v451 = v655.m256i_i64[1];
      if ( v655.m256i_i64[0] )
      {
        v452 = v602;
        *v602 = *(__m128i *)v655.m256i_i8;
        v452[2].m128i_i64[0] = -2;
        LOBYTE(v7) = 1;
        LOBYTE(m128i_i64) = 1;
        goto LABEL_846;
      }
      v617.m256i_i64[0] = 0;
      v617.m256i_i64[2] = 0;
      nullsub_1(v450);
      v466 = sub_140001650(5, 1);
      if ( !v466 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v466 + 4) = 108;
      *(_DWORD *)v466 = 1701080941;
      v624.m256i_i64[0] = 5;
      v624.m256i_i64[1] = v466;
      v624.m256i_i64[2] = 5;
      v629 = 1;
      sub_14040F9F0(&v655, &v583);
      if ( v655.m256i_i8[0] == -1 )
      {
        v618.m256i_i64[0] = v655.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)&v618,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E9578);
      }
      v467 = _mm_loadu_si128((const __m128i *)&v655);
      *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
      *(__m128i *)v618.m256i_i8 = v467;
      v629 = 0;
      sub_140E72AA0(&v655, &v617, &v624, &v618);
      if ( v655.m256i_i8[0] != -1 )
        sub_14002F9D0(&v655);
      nullsub_1(v468);
      v469 = (_QWORD *)sub_140001650(8, 1);
      if ( !v469 )
        sub_141938D2B(1, 8);
      *v469 = 0x736567617373656DLL;
      v624.m256i_i64[0] = 8;
      v624.m256i_i64[1] = (__int64)v469;
      v624.m256i_i64[2] = 8;
      v628 = 1;
      sub_140C0FE40(&v655, &v579);
      if ( v655.m256i_i8[0] == -1 )
      {
        v618.m256i_i64[0] = v655.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)&v618,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E9578);
      }
      v470 = _mm_loadu_si128((const __m128i *)&v655);
      *(__m128i *)&v618.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
      *(__m128i *)v618.m256i_i8 = v470;
      v628 = 0;
      sub_140E72AA0(&v655, &v617, &v624, &v618);
      if ( v655.m256i_i8[0] != -1 )
        sub_14002F9D0(&v655);
      nullsub_1(v471);
      v472 = (void *)sub_140001650(10, 1);
      if ( !v472 )
        sub_141938D2B(1, 10);
      qmemcpy(v472, "max_tokens", 10);
      v624.m256i_i64[0] = 10;
      v624.m256i_i64[1] = (__int64)v472;
      v624.m256i_i64[2] = 10;
      v655.m256i_i8[0] = 2;
      v655.m256i_i64[1] = 0;
      v655.m256i_i64[2] = v451;
      sub_140E72AA0(&v618, &v617, &v624, &v655);
      if ( v618.m256i_i8[0] != -1 )
        sub_14002F9D0(&v618);
      *(__m128i *)&v599.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v617);
      v599.m256i_i64[3] = v617.m256i_i64[2];
      v599.m256i_i8[0] = 5;
      v473 = v672;
      if ( v672 == -1 )
      {
        LOBYTE(v473) = 1;
      }
      else
      {
        v655.m256i_i64[1] = v672;
        v655.m256i_i64[2] = v666;
        v655.m256i_i64[3] = v598;
        v655.m256i_i8[0] = 3;
        v609 = 1;
        v659 = (__m128i *)sub_141641AF0(
                            "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usert"
                            "emperaturemax_tokensstreamdoubaoreasoning_effortnone",
                            6,
                            &v599);
        sub_14002F9D0(v659);
        v474 = _mm_loadu_si128((const __m128i *)&v655);
        v475 = v659;
        v659[1] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
        *v475 = v474;
        v473 = 0;
      }
      v679 = 1;
      LODWORD(v659) = v473;
      v678 = v473;
      v483 = sub_140293370(a5, a6, v621);
      v485 = v484;
      v679 = 1;
      v678 = (char)v659;
      v486 = sub_1402F5C50(v621);
      v679 = 1;
      v678 = (char)v659;
      v487 = sub_140312CD0((unsigned int)&v599, v616, v627, v483, v485, v486, v7);
      v679 = 1;
      v678 = (char)v659;
      sub_1403C6F20(&v655, v621, v616, v627);
      if ( v655.m256i_i8[0] == -2 )
      {
        v489 = v655.m256i_i64[2];
        v488 = v655.m256i_i64[1];
        LOBYTE(v7) = 1;
        LODWORD(m128i_i64) = (_DWORD)v659;
LABEL_845:
        v510 = v602;
        v602->m128i_i64[0] = v488;
        v510->m128i_i64[1] = v489;
        v510[2].m128i_i64[0] = -2;
        v663 = v7;
        v662 = m128i_i64;
        sub_14002F9D0(&v599);
LABEL_846:
        v218 = v666;
        v231 = v672;
        if ( v623 )
          sub_140001660(v616, v623, 1);
        goto LABEL_801;
      }
      v490 = *(__int32 *)((char *)v655.m256i_i32 + 1);
      *(_DWORD *)&v560[3] = v655.m256i_i32[1];
      *(_DWORD *)v560 = *(__int32 *)((char *)v655.m256i_i32 + 1);
      if ( v655.m256i_i8[0] != -1 )
      {
        v491 = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
        v655.m256i_i32[1] = *(_DWORD *)&v560[3];
        *(__int32 *)((char *)v655.m256i_i32 + 1) = *(_DWORD *)v560;
        *(__m128i *)&v655.m256i_u64[2] = v491;
        v625 = 1;
        v492 = sub_141641AF0(aOutputConfig, 13, &v599);
        v625 = 1;
        v671 = sub_141641AF0(aFormat_2, 6, v492);
        sub_14002F9D0(v671);
        v493 = _mm_loadu_si128((const __m128i *)&v655);
        v494 = (_OWORD *)v671;
        *(__m128i *)(v671 + 16) = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
        *v494 = v493;
      }
      v495 = (char)v659;
      if ( v592 )
      {
        v655.m256i_i64[3] = v592;
        *(__m128i *)&v655.m256i_u64[1] = _mm_load_si128(&v591);
        v655.m256i_i8[0] = 4;
        v608 = 1;
        v671 = sub_141641AF0(aTools_1, 5, &v599);
        sub_14002F9D0(v671);
        v496 = _mm_loadu_si128((const __m128i *)&v655);
        v497 = (_OWORD *)v671;
        *(__m128i *)(v671 + 16) = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
        *v497 = v496;
        v490 = 0;
        v495 = (char)v659;
      }
      else
      {
        LOBYTE(v490) = 1;
      }
      LODWORD(v671) = v490;
      v679 = v490;
      v678 = v495;
      v498 = sub_1416419F0(aToolChoice_1, 11, v621);
      if ( v498 )
      {
        v679 = v671;
        v678 = (char)v659;
        sub_1403266D0(&v655, v498, &v548);
        if ( v655.m256i_i8[0] == -2 )
        {
          v489 = v655.m256i_i64[2];
          v488 = v655.m256i_i64[1];
LABEL_844:
          LODWORD(m128i_i64) = (_DWORD)v659;
          LODWORD(v7) = v671;
          goto LABEL_845;
        }
        *(_DWORD *)&v559[3] = v655.m256i_i32[1];
        *(_DWORD *)v559 = *(__int32 *)((char *)v655.m256i_i32 + 1);
        if ( v655.m256i_i8[0] != -1 )
        {
          v499 = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
          v655.m256i_i32[1] = *(_DWORD *)&v559[3];
          *(__int32 *)((char *)v655.m256i_i32 + 1) = *(_DWORD *)v559;
          *(__m128i *)&v655.m256i_u64[2] = v499;
          v607 = 1;
          v661 = sub_141641AF0(aToolChoice_1, 11, &v599);
          sub_14002F9D0(v661);
          v500 = _mm_loadu_si128((const __m128i *)&v655);
          v501 = (_OWORD *)v661;
          *(__m128i *)(v661 + 16) = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
          *v501 = v500;
        }
      }
      v502 = (char)v659;
      v503 = v671;
      if ( (v654 & 1) != 0 )
      {
        v624.m256i_i64[0] = (__int64)aYouHaveAWebSea_0;
        v624.m256i_i64[1] = 462;
        v679 = v671;
        v678 = (char)v659;
        v504 = (const __m128i *)sub_1416419F0(
                                  "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释"
                                  "。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                  6,
                                  &v599);
        if ( v504 && v504->m128i_i8[0] == 3 )
        {
          *(__m128i *)v618.m256i_i8 = _mm_loadu_si128(v504 + 1);
          v655.m256i_i64[0] = (__int64)&v618;
          v655.m256i_i64[1] = (__int64)sub_140186EE0;
          v655.m256i_i64[2] = (__int64)&v624;
          v655.m256i_i64[3] = (__int64)sub_140186EE0;
          v679 = v671;
          v678 = (char)v659;
          sub_1416ABFD0(&v539, &unk_1419E975E, &v655);
        }
        else
        {
          nullsub_1(v505);
          v506 = (__m128i *)sub_140001650(462, 1);
          if ( !v506 )
          {
            v679 = v671;
            v678 = (char)v659;
            sub_141938D2B(1, 462);
          }
          v507 = v506;
          sub_1418F44E0(v506, (const __m128i *)aYouHaveAWebSea_0, 0x1CEu);
          v539 = 462;
          *(_QWORD *)&v540 = v507;
          *((_QWORD *)&v540 + 1) = 462;
        }
        v655.m256i_i64[1] = v539;
        *(_OWORD *)&v655.m256i_u64[2] = v540;
        v655.m256i_i8[0] = 3;
        v606 = 1;
        v661 = sub_141641AF0(
                 "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
                 "ax_tokensstreamdoubaoreasoning_effortnone",
                 6,
                 &v599);
        sub_14002F9D0(v661);
        v508 = _mm_loadu_si128((const __m128i *)&v655);
        v509 = (_OWORD *)v661;
        *(__m128i *)(v661 + 16) = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
        *v509 = v508;
        v502 = (char)v659;
        v503 = v671;
      }
      v679 = v503;
      v678 = v502;
      v488 = sub_140363720(&v599);
      if ( v488 )
      {
        v489 = 73;
      }
      else
      {
        v679 = v671;
        v678 = (char)v659;
        sub_14032D110(&v599);
        v679 = v671;
        v678 = (char)v659;
        sub_140328BA0(v621, &v599);
        v679 = v671;
        v678 = (char)v659;
        sub_140325F60((unsigned int)&v655, (unsigned int)&v599, v616, v627, v487);
        v488 = v655.m256i_i64[0];
        if ( !v655.m256i_i64[0] )
        {
          v679 = v671;
          v678 = (char)v659;
          sub_14030FF60(v621, (unsigned int)&v599, v616, v627, v655.m256i_i8[8]);
          v679 = v671;
          v678 = (char)v659;
          sub_1403026F0(&v599);
          v515 = _mm_loadu_si128((const __m128i *)&v599);
          v516 = _mm_loadu_si128((const __m128i *)&v599.m256i_u64[2]);
          *(__m128i *)&v655.m256i_u64[2] = v516;
          *(__m128i *)v655.m256i_i8 = v515;
          v517 = v548;
          v518 = v549;
          v519 = v550;
          v656 = v548;
          *(__m128i *)v657 = v549;
          *(__m128i *)&v657[16] = v550;
          *(__m128i *)&v657[32] = v551;
          v520 = v602;
          v602[5] = v551;
          v520[4] = v519;
          v520[3] = v518;
          v520[2] = v517;
          v520[1] = v516;
          *v520 = v515;
          if ( v623 )
            sub_140001660(v616, v623, 1);
          v521 = v666;
          v554 = v666;
          v522 = v672;
          v575 = v672;
          v523 = v671;
          v669 = v671;
          v524 = (char)v659;
          v668 = (char)v659;
          v667 = 0;
          sub_140E8CB20(v541);
          if ( v523 )
          {
            v561 = v521;
            v571 = v522;
            v665 = v524;
            sub_1401901C0(&v591);
          }
          v555 = v521;
          v578 = v522;
          v670 = v524;
          sub_1401901C0(&v566);
          sub_1401901C0(&v579);
          return v602;
        }
        v489 = v655.m256i_i64[1];
      }
      goto LABEL_844;
    }
    v106 = *(_QWORD *)(v616 + 8);
    v18 = v106 + 32 * v107;
    v616 = 0;
LABEL_155:
    v108 = (_QWORD *)sub_1416419F0(aType_4, 4, v106);
    if ( !v108 )
      v108 = off_1421E7108;
    if ( *(_BYTE *)v108 != 3 )
    {
LABEL_167:
      v111 = (_QWORD *)sub_1416419F0(aType_4, 4, v106);
      if ( !v111 )
        v111 = off_1421E7108;
      if ( *(_BYTE *)v111 != 3
        || v111[3] != 7
        || *(_DWORD *)v111[2] ^ 0x7373656D | *(_DWORD *)(v111[2] + 3LL) ^ 0x65676173 )
      {
        goto LABEL_178;
      }
      v112 = (_QWORD *)sub_1416419F0(
                         "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。user"
                         "temperaturemax_tokensstreamdoubaoreasoning_effortnone",
                         4,
                         v106);
      if ( !v112 )
        v112 = off_1421E7108;
      if ( *(_BYTE *)v112 != 3
        || v112[3] != 9
        || *(_QWORD *)v112[2] ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v112[2] + 8LL) ^ 0x74LL )
      {
        goto LABEL_178;
      }
      goto LABEL_177;
    }
    v109 = v108[2];
    v110 = v108[3];
    if ( v110 == 16 )
    {
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v109), v102)) != 0xFFFF
        && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v109), v103)) != 0xFFFF )
      {
        goto LABEL_167;
      }
    }
    else if ( v110 == 13 )
    {
      if ( *(_QWORD *)v109 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v109 + 5) ^ 0x6C6C61635F6E6F69LL )
        goto LABEL_167;
    }
    else if ( v110 != 9 || *(_QWORD *)v109 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v109 + 8) ^ 0x67LL )
    {
      goto LABEL_167;
    }
LABEL_177:
    LODWORD(v661) = 0;
LABEL_178:
    v113 = (_QWORD *)sub_1416419F0(aType_4, 4, v106);
    if ( !v113 )
      v113 = off_1421E7108;
    v105 = v106 + 32;
    v672 = v666 + 1;
    if ( *(_BYTE *)v113 != 3
      || v113[3] != 16
      || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v113[2]), v104)) != 0xFFFF )
    {
      continue;
    }
    v114 = (_QWORD *)sub_1416419F0(aTools_1, 5, v106);
    if ( !v114 )
      v114 = off_1421E7108;
    if ( *(_BYTE *)v114 != 4 )
    {
      *((_QWORD *)&v25 + 1) = 33;
      goto LABEL_885;
    }
    sub_140341340((unsigned int)&v655, v114[2], v114[3], v615, 1, 1);
    if ( v655.m256i_i64[0] == -1 )
    {
      v25 = *(_OWORD *)&v655.m256i_u64[1];
      goto LABEL_885;
    }
    *((_QWORD *)&v25 + 1) = v7;
    v115 = v25;
    v116 = _mm_loadu_si128((const __m128i *)v101);
    v117 = _mm_loadu_si128((const __m128i *)(v101 + 16));
    v118 = *(_OWORD *)(v101 + 32);
    v620 = *(_OWORD *)(v101 + 48);
    v619 = v118;
    *(__m128i *)&v618.m256i_u64[2] = v117;
    *(__m128i *)v618.m256i_i8 = v116;
    v590 = v657[40];
    v565 = v655.m256i_i64[0];
    v542 = *(_OWORD *)v655.m256i_i8;
    *(_QWORD *)&v25 = v655.m256i_i64[2];
    v119 = *(_OWORD *)&v655.m256i_u64[1];
    v543 = v119 >> 64;
    v562 = v119;
    v658 = 1;
    v120 = sub_1402B83A0(&v548, &v618);
    v671 = v121;
    v122 = v120;
    if ( v120 )
    {
      sub_1401901C0(&v542);
      *((_QWORD *)&v25 + 1) = v671;
      *(_QWORD *)&v25 = v122;
      goto LABEL_885;
    }
    v576.m128i_i64[0] = 0;
    v576.m128i_i64[1] = 8;
    v577 = 0;
    v538 = 32 * v25;
    v123 = (__m128i *)(v562 + 32 * v25);
    v587.m128i_i64[0] = v562;
    v587.m128i_i64[1] = v562;
    v588 = v565;
    v589 = v123;
    v124 = v562;
    *(_QWORD *)&v25 = v115;
    v7 = *((_QWORD *)&v25 + 1);
    v582 = (__int64)v123;
LABEL_189:
    if ( (__m128i *)v124 != v123 )
      break;
    v125 = (const char *)v123;
LABEL_347:
    v582 = (unsigned __int64)((char *)v123 - v125) >> 5;
    v596 = v125;
    v214 = v125;
    v671 = 0;
    while ( v582 != v671 )
    {
      ++v671;
      v215 = v214 + 32;
      sub_1403880E0(v214);
      v214 = v215;
    }
    if ( v565 )
      sub_140001660(v562, 32 * v565, 8);
    if ( (v661 & 1) != 0 )
    {
      v654 |= v590;
LABEL_359:
      sub_1403FB000(&v576);
      v216 = v576.m128i_i64[0];
      if ( v576.m128i_i64[0] )
      {
        v217 = v576.m128i_i64[1];
        goto LABEL_361;
      }
    }
    else
    {
      if ( !v577 )
        goto LABEL_359;
      v664 = 1;
      if ( !(unsigned __int8)sub_14022F240(v659, v627) )
      {
        *(_QWORD *)&v25 = v7;
        v530 = 69;
        goto LABEL_882;
      }
      v655.m256i_i64[2] = v577;
      *(__m128i *)v655.m256i_i8 = _mm_loadu_si128(&v576);
      v664 = 0;
      sub_140E7CA80(&v599, &v545, v666, &v655);
      if ( v599.m256i_i64[0] != -1 )
      {
        v666 = v599.m256i_i64[0];
        sub_1403FB000(&v599);
        v216 = v666;
        if ( v666 )
        {
          v217 = v599.m256i_i64[1];
LABEL_361:
          sub_140001660(v217, 32 * v216, 8);
          continue;
        }
      }
    }
  }
  v125 = (const char *)(v124 + 32);
  v587.m128i_i64[1] = v124 + 32;
  v126 = *(_BYTE *)v124;
  *(_OWORD *)&v563[15] = *(_OWORD *)(v124 + 16);
  *(__m128i *)v563 = _mm_loadu_si128((const __m128i *)(v124 + 1));
  if ( v126 == -1 )
    goto LABEL_347;
  v596 = (const char *)(v124 + 32);
  v583.m256i_i8[0] = v126;
  *(_OWORD *)&v583.m256i_u64[2] = *(_OWORD *)&v563[15];
  *(__m128i *)&v583.m256i_i8[1] = _mm_load_si128((const __m128i *)v563);
  v652 = 1;
  v127 = (void *)sub_1416419F0(aName_2, 4, &v583);
  if ( !v127 )
    v127 = off_1421E7108;
  if ( *(_BYTE *)v127 == 3 )
  {
    v128 = *((__m128i **)v127 + 3);
    if ( (__int64)v128 < 0 )
    {
      v465 = 0;
      goto LABEL_781;
    }
    LOBYTE(v123) = 1;
    v570 = (int)v123;
    v622 = v128;
    if ( v128 )
    {
      v129 = *((const __m128i **)v127 + 2);
      nullsub_1(v128);
      v605 = sub_140001650(v622, 1);
      if ( v605 )
      {
        sub_1418F44E0((__m128i *)v605, v129, (unsigned __int64)v622);
        v570 = 0;
        goto LABEL_200;
      }
      v605 = (__int64)v622;
      v465 = 1;
LABEL_781:
      v652 = 1;
      sub_141938D2B(v465, v605);
    }
  }
  else
  {
    LOBYTE(v127) = 1;
    v570 = (int)v127;
  }
  v605 = 1;
  v622 = nullptr;
LABEL_200:
  v130 = (__int64)v556;
  if ( !v556 )
  {
LABEL_214:
    if ( (v661 & 1) != 0 )
    {
      v137 = v583.m256i_i8[0];
      switch ( v583.m256i_i8[0] )
      {
        case 0:
          goto LABEL_340;
        case 1:
          v655.m256i_i8[1] = v583.m256i_i8[1];
          goto LABEL_340;
        case 2:
          *(__m128i *)&v655.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v583.m256i_u64[1]);
          goto LABEL_340;
        case 3:
          v680 = 1;
          sub_1416AC440(&v655.m256i_u64[1], &v583.m256i_u64[1]);
          goto LABEL_340;
        case 4:
          v680 = 1;
          sub_1403918C0(&v655.m256i_u64[1], v583.m256i_i64[2], v583.m256i_i64[3]);
          goto LABEL_340;
        case 5:
          v680 = 1;
          sub_140E8D7E0(&v655.m256i_u64[1], &v583.m256i_u64[1]);
LABEL_340:
          v655.m256i_i8[0] = v137;
          v209 = v592;
          if ( v592 == v591.m128i_i64[0] )
            sub_14190F570(&v591);
          v210 = v591.m128i_i64[1];
          v211 = 32 * v209;
          v212 = *(_OWORD *)v655.m256i_i8;
          *(_OWORD *)(v591.m128i_i64[1] + v211 + 16) = *(_OWORD *)&v655.m256i_u64[2];
          *(_OWORD *)(v210 + v211) = v212;
          v592 = v209 + 1;
          goto LABEL_343;
        default:
          goto LABEL_347;
      }
    }
    v680 = 1;
    if ( sub_1416419F0(aType_4, 4, &v583) )
    {
      v530 = 53;
      *((_QWORD *)&v25 + 1) = "Dynamic Anthropic additions support client tools only";
      goto LABEL_879;
    }
    if ( v583.m256i_i8[0] != 5 )
    {
      v680 = 1;
      sub_141939020(&off_1419EAE38);
    }
    v680 = 1;
    sub_140DED130(&v655, &v583.m256i_u64[1], aDeferLoading_1, 13);
    if ( v655.m256i_i8[0] != -1 )
    {
      v680 = 1;
      sub_14002F9D0(&v655);
    }
    v603.m128i_i64[0] = 0;
    v604 = 0;
    nullsub_1(v138);
    v139 = (_DWORD *)sub_140001650(4, 1);
    if ( !v139 )
      sub_141938D2B(1, 4);
    *v139 = 1701869940;
    v624.m256i_i64[0] = 4;
    v624.m256i_i64[1] = (__int64)v139;
    v624.m256i_i64[2] = 4;
    nullsub_1(v140);
    v141 = (void *)sub_140001650(13, 1);
    v671 = (__int64)v141;
    if ( !v141 )
      sub_141938D2B(1, 13);
    qmemcpy(v141, "tool_addition", 13);
    v655.m256i_i8[0] = 3;
    v655.m256i_i64[1] = 13;
    v655.m256i_i64[2] = (__int64)v141;
    v655.m256i_i64[3] = 13;
    sub_140E72AA0(&v599, &v603, &v624, &v655);
    if ( v599.m256i_i8[0] != -1 )
      sub_14002F9D0(&v599);
    nullsub_1(v142);
    v143 = (_DWORD *)sub_140001650(4, 1);
    if ( !v143 )
      sub_141938D2B(1, 4);
    *v143 = 1819242356;
    v572 = 4;
    v573 = (__int64)v143;
    v574 = 4;
    v568.m128i_i64[0] = 0;
    v569 = 0;
    nullsub_1(v144);
    v145 = (_DWORD *)sub_140001650(4, 1);
    if ( !v145 )
      sub_141938D2B(1, 4);
    *v145 = 1701869940;
    *(_QWORD *)&v585 = 4;
    *((_QWORD *)&v585 + 1) = v145;
    v586 = 4;
    nullsub_1(v146);
    v147 = (void *)sub_140001650(15, 1);
    v671 = (__int64)v147;
    if ( !v147 )
      sub_141938D2B(1, 15);
    qmemcpy(v147, "tool_definition", 15);
    v655.m256i_i8[0] = 3;
    v655.m256i_i64[1] = 15;
    v655.m256i_i64[2] = (__int64)v147;
    v655.m256i_i64[3] = 15;
    sub_140E72AA0(&v599, &v568, &v585, &v655);
    if ( v599.m256i_i8[0] != -1 )
      sub_14002F9D0(&v599);
    nullsub_1(v148);
    v149 = (void *)sub_140001650(10, 1);
    if ( !v149 )
      sub_141938D2B(1, 10);
    qmemcpy(v149, "definition", 10);
    *(_QWORD *)&v585 = 10;
    *((_QWORD *)&v585 + 1) = v149;
    v586 = 10;
    v651 = 1;
    sub_140412420(&v655, &v583);
    if ( v655.m256i_i8[0] == -1 )
    {
      v599.m256i_i64[0] = v655.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v599,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419EAE10);
    }
    v150 = _mm_loadu_si128((const __m128i *)&v655);
    *(__m128i *)&v599.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v655.m256i_u64[2]);
    *(__m128i *)v599.m256i_i8 = v150;
    v651 = 0;
    sub_140E72AA0(&v655, &v568, &v585, &v599);
    if ( v655.m256i_i8[0] != -1 )
      sub_14002F9D0(&v655);
    v624.m256i_i64[3] = v569;
    *(__m128i *)&v624.m256i_u64[1] = _mm_loadu_si128(&v568);
    v624.m256i_i8[0] = 5;
    v612 = 0;
    sub_140E72AA0(&v655, &v603, &v572, &v624);
    if ( v655.m256i_i8[0] != -1 )
      sub_14002F9D0(&v655);
    v617.m256i_i64[3] = v604;
    *(__m128i *)&v617.m256i_u64[1] = _mm_loadu_si128(&v603);
    v617.m256i_i8[0] = 5;
    v151 = v577;
    if ( v577 == v576.m128i_i64[0] )
      sub_14190F570(&v576);
    v152 = v576.m128i_i64[1];
    v153 = 32 * v151;
    v154 = *(_OWORD *)v617.m256i_i8;
    *(_OWORD *)(v576.m128i_i64[1] + v153 + 16) = *(_OWORD *)&v617.m256i_u64[2];
    *(_OWORD *)(v152 + v153) = v154;
    v577 = v151 + 1;
LABEL_343:
    v624.m256i_i64[0] = (__int64)v622;
    v624.m256i_i64[1] = v605;
    v624.m256i_i64[2] = (__int64)v622;
    v213 = _mm_loadu_si128((const __m128i *)&v583);
    *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v583.m256i_u64[2]);
    *(__m128i *)v655.m256i_i8 = v213;
    v680 = 0;
    sub_140E72AA0(&v599, &v556, &v624, &v655);
    if ( v599.m256i_i8[0] != -1 )
    {
LABEL_344:
      v680 = 0;
      sub_14002F9D0(&v599);
    }
LABEL_345:
    *(_QWORD *)&v25 = &unk_1419EAE50;
    v7 = (__int64)&unk_1419EAD45;
    v101 = (__int64)&v655.m256i_i64[3];
    v123 = (__m128i *)v582;
    v124 = (__int64)v596;
    goto LABEL_189;
  }
  v623 = v557;
LABEL_202:
  v131 = v130 + 360;
  v123 = (__m128i *)*(unsigned __int16 *)(v130 + 626);
  v671 = v130;
  v132 = v130 - 32;
  v597 = v123;
  v7 = 3LL * (unsigned int)(8 * (_DWORD)v123);
  *((_QWORD *)&v25 + 1) = -1;
  do
  {
    if ( !v7 )
    {
      *((_QWORD *)&v25 + 1) = v597;
LABEL_210:
      if ( !v623 )
        goto LABEL_214;
      v623 = (__m128i *)((char *)v623 - 1);
      v130 = *(_QWORD *)(v671 + 8LL * *((_QWORD *)&v25 + 1) + 632);
      goto LABEL_202;
    }
    *(_QWORD *)&v25 = v131 + 24;
    v101 = (__int64)v622->m128i_i64 - *(_QWORD *)(v131 + 16);
    v133 = sub_1418F4B70(v605, *(_QWORD *)(v131 + 8));
    if ( v133 )
      v101 = v133;
    v134 = (v101 > 0) - (v101 < 0);
    v132 += 32;
    ++*((_QWORD *)&v25 + 1);
    v7 -= 24;
    v131 = v25;
  }
  while ( v134 == 1 );
  if ( v134 )
    goto LABEL_210;
  v135 = *(_BYTE *)v132;
  switch ( *(_BYTE *)v132 )
  {
    case 0:
      goto LABEL_245;
    case 1:
      v624.m256i_i8[1] = *(_BYTE *)(v132 + 1);
      v624.m256i_i8[0] = v135;
      v136 = v583.m256i_i8[0];
      switch ( v583.m256i_i8[0] )
      {
        case 0:
          goto LABEL_255;
        case 1:
          goto LABEL_246;
        case 2:
          goto LABEL_248;
        case 3:
          goto LABEL_250;
        case 4:
          goto LABEL_249;
        case 5:
          goto LABEL_251;
        default:
          goto LABEL_347;
      }
    case 2:
      *(__m128i *)&v624.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v132 + 8));
      v624.m256i_i8[0] = v135;
      v136 = v583.m256i_i8[0];
      switch ( v583.m256i_i8[0] )
      {
        case 0:
          goto LABEL_255;
        case 1:
          goto LABEL_246;
        case 2:
          goto LABEL_248;
        case 3:
          goto LABEL_250;
        case 4:
          goto LABEL_249;
        case 5:
          goto LABEL_251;
        default:
          goto LABEL_347;
      }
    case 3:
      v680 = 1;
      sub_1416AC440(&v624.m256i_u64[1], v132 + 8);
      goto LABEL_245;
    case 4:
      v155 = *(_QWORD *)(v132 + 16);
      v156 = *(_QWORD *)(v132 + 24);
      v680 = 1;
      sub_1403918C0(&v624.m256i_u64[1], v155, v156);
      goto LABEL_245;
    case 5:
      if ( *(_QWORD *)(v132 + 24) )
      {
        v157 = *(_QWORD *)(v132 + 8);
        if ( !v157 )
        {
          v680 = 1;
          sub_141939020(&off_141A54900);
        }
        v158 = *(_QWORD *)(v132 + 16);
        v680 = 1;
        sub_140E11B90(&v624.m256i_u64[1], v157, v158);
LABEL_245:
        v624.m256i_i8[0] = v135;
        v136 = v583.m256i_i8[0];
        switch ( v583.m256i_i8[0] )
        {
          case 0:
            goto LABEL_255;
          case 1:
            goto LABEL_246;
          case 2:
            goto LABEL_248;
          case 3:
            goto LABEL_250;
          case 4:
            goto LABEL_249;
          case 5:
            goto LABEL_251;
          default:
            goto LABEL_347;
        }
      }
      break;
    default:
      goto LABEL_345;
  }
  v624.m256i_i64[1] = 0;
  v624.m256i_i64[3] = 0;
  v624.m256i_i8[0] = v135;
  v136 = v583.m256i_i8[0];
  switch ( v583.m256i_i8[0] )
  {
    case 0:
      goto LABEL_255;
    case 1:
LABEL_246:
      v655.m256i_i8[1] = v583.m256i_i8[1];
      goto LABEL_255;
    case 2:
LABEL_248:
      *(__m128i *)&v655.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v583.m256i_u64[1]);
      goto LABEL_255;
    case 3:
LABEL_250:
      sub_1416AC440(&v655.m256i_u64[1], &v583.m256i_u64[1]);
      goto LABEL_255;
    case 4:
LABEL_249:
      sub_1403918C0(&v655.m256i_u64[1], v583.m256i_i64[2], v583.m256i_i64[3]);
      goto LABEL_255;
    case 5:
LABEL_251:
      if ( v583.m256i_i64[3] )
      {
        if ( !v583.m256i_i64[1] )
          sub_141939020(&off_141A54900);
        sub_140E11B90(&v655.m256i_u64[1], v583.m256i_i64[1], v583.m256i_i64[2]);
      }
      else
      {
        v655.m256i_i64[1] = 0;
        v655.m256i_i64[3] = 0;
      }
LABEL_255:
      v655.m256i_i8[0] = v136;
      v599 = v624;
      v601 = *(__m128i *)&v655.m256i_u64[2];
      v600 = _mm_loadu_si128((const __m128i *)&v655);
      v159 = sub_140362420(&v599, 2);
      if ( !v159 )
      {
        v160 = nullptr;
        while ( v160 != (__m128i *)2 )
        {
          v161 = 4LL * (_QWORD)v160;
          v160 = (__m128i *)((char *)v160 + 1);
          v162 = v599.m256i_u8[v161 * 8];
          if ( v162 >= 3 )
          {
            v163 = &v599.m256i_i64[v161];
            if ( v162 == 3 )
            {
              v166 = v163[1];
              if ( v166 )
                sub_140001660(v163[2], v166, 1);
            }
            else
            {
              v597 = v160;
              if ( v162 == 4 )
              {
                v164 = v163[2];
                v598 = (__int64)v163;
                v623 = (__m128i *)v163[3];
                v558 = v164;
                v671 = 0;
                while ( v623 != (__m128i *)v671 )
                {
                  ++v671;
                  v165 = v164 + 32;
                  sub_1403880E0(v164);
                  v164 = v165;
                }
                v171 = *(_QWORD *)(v598 + 8);
                v160 = v597;
                if ( v171 )
                  sub_140001660(*(_QWORD *)(v598 + 16), 32 * v171, 8);
              }
              else
              {
                v167 = v163[1];
                if ( v167 )
                {
                  v168 = v163[2];
                  v169 = v163[3];
                  v655.m256i_i64[1] = 0;
                  v655.m256i_i64[2] = v167;
                  v655.m256i_i64[3] = v168;
                  v656.m128i_i64[1] = 0;
                  *(_QWORD *)v657 = v167;
                  *(_QWORD *)&v657[8] = v168;
                  v170 = 1;
                }
                else
                {
                  v170 = 0;
                  v169 = 0;
                }
                v655.m256i_i64[0] = v170;
                v656.m128i_i64[0] = v170;
                *(_QWORD *)&v657[16] = v169;
                sub_140DF2FD0(&v655);
                v160 = v597;
              }
            }
          }
        }
        if ( (v661 & 1) != 0 )
        {
          v680 = 1;
          v172 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v132);
          if ( !v172 )
            v172 = off_1421E7108;
          *(_QWORD *)&v25 = &unk_1419EAE50;
          v7 = (__int64)&unk_1419EAD45;
          v101 = (__int64)&v655.m256i_i64[3];
          if ( *v172 != 1 || v172[1] != 1 )
            goto LABEL_333;
          v680 = 1;
          v173 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, &v583);
          if ( !v173 )
            v173 = off_1421E7108;
          *(_QWORD *)&v25 = &unk_1419EAE50;
          v7 = (__int64)&unk_1419EAD45;
          if ( *v173 == 1 )
          {
            if ( v173[1] )
              goto LABEL_333;
          }
          if ( v592 )
          {
            v174 = (_BYTE *)v591.m128i_i64[1];
            v175 = v591.m128i_i64[1] + 32 * v592;
            while ( 1 )
            {
              v680 = 1;
              v176 = (__m128i **)sub_1416419F0(aName_2, 4, v174);
              if ( !v176 )
                v176 = (__m128i **)off_1421E7108;
              if ( *(_BYTE *)v176 == 3 && v176[3] == v622 && !(unsigned int)sub_1418F4B70(v176[2], v605) )
                break;
              v174 += 32;
              if ( v174 == (_BYTE *)v175 )
                goto LABEL_292;
            }
            if ( *v174 != 5 )
            {
              v680 = 1;
              sub_141939020(&off_1419EAD90);
            }
            v680 = 1;
            sub_140DED130(&v655, v174 + 8, aDeferLoading_1, 13);
            if ( v655.m256i_i8[0] != -1 )
            {
              v680 = 1;
              sub_14002F9D0(&v655);
            }
          }
LABEL_292:
          v624.m256i_i64[0] = (__int64)v622;
          v624.m256i_i64[1] = v605;
          v624.m256i_i64[2] = (__int64)v622;
          v177 = _mm_loadu_si128((const __m128i *)&v583);
          *(__m128i *)&v655.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v583.m256i_u64[2]);
          *(__m128i *)v655.m256i_i8 = v177;
          v680 = 0;
          sub_140E72AA0(&v599, &v556, &v624, &v655);
          if ( v599.m256i_i8[0] != -1 )
            goto LABEL_344;
          goto LABEL_345;
        }
        v680 = 1;
        v178 = (_BYTE *)sub_1416419F0(aDeferLoading_1, 13, v132);
        if ( !v178 )
          v178 = off_1421E7108;
        *(_QWORD *)&v25 = &unk_1419EAE50;
        v7 = (__int64)&unk_1419EAD45;
        v101 = (__int64)&v655.m256i_i64[3];
        if ( *v178 == 1 && v178[1] == 1 )
        {
          v603.m128i_i64[0] = 0;
          v604 = 0;
          nullsub_1(v179);
          v180 = (_DWORD *)sub_140001650(4, 1);
          if ( !v180 )
            sub_141938D2B(1, 4);
          *v180 = 1701869940;
          v624.m256i_i64[0] = 4;
          v624.m256i_i64[1] = (__int64)v180;
          v624.m256i_i64[2] = 4;
          nullsub_1(v181);
          v182 = (void *)sub_140001650(13, 1);
          v671 = (__int64)v182;
          if ( !v182 )
            sub_141938D2B(1, 13);
          qmemcpy(v182, "tool_addition", 13);
          v655.m256i_i8[0] = 3;
          v655.m256i_i64[1] = 13;
          v655.m256i_i64[2] = (__int64)v182;
          v655.m256i_i64[3] = 13;
          sub_140E72AA0(&v599, &v603, &v624, &v655);
          if ( v599.m256i_i8[0] != -1 )
            sub_14002F9D0(&v599);
          nullsub_1(v183);
          v184 = (_DWORD *)sub_140001650(4, 1);
          if ( !v184 )
            sub_141938D2B(1, 4);
          *v184 = 1819242356;
          v572 = 4;
          v573 = (__int64)v184;
          v574 = 4;
          v568.m128i_i64[0] = 0;
          v569 = 0;
          nullsub_1(v185);
          v186 = (_DWORD *)sub_140001650(4, 1);
          if ( !v186 )
            sub_141938D2B(1, 4);
          *v186 = 1701869940;
          *(_QWORD *)&v585 = 4;
          *((_QWORD *)&v585 + 1) = v186;
          v586 = 4;
          nullsub_1(v187);
          v188 = (void *)sub_140001650(14, 1);
          v671 = (__int64)v188;
          if ( !v188 )
            sub_141938D2B(1, 14);
          qmemcpy(v188, "tool_reference", 14);
          v655.m256i_i8[0] = 3;
          v655.m256i_i64[1] = 14;
          v655.m256i_i64[2] = (__int64)v188;
          v655.m256i_i64[3] = 14;
          sub_140E72AA0(&v599, &v568, &v585, &v655);
          if ( v599.m256i_i8[0] != -1 )
            sub_14002F9D0(&v599);
          nullsub_1(v189);
          v190 = (_DWORD *)sub_140001650(4, 1);
          if ( !v190 )
            sub_141938D2B(1, 4);
          *v190 = 1701667182;
          *(_QWORD *)&v585 = 4;
          *((_QWORD *)&v585 + 1) = v190;
          v586 = 4;
          v192 = 1;
          v193 = (unsigned __int64)v622;
          if ( !(_BYTE)v570 )
          {
            nullsub_1(v191);
            v194 = (__m128i *)sub_140001650(v193, 1);
            if ( !v194 )
            {
              v614 = 1;
              sub_141938D2B(1, v193);
            }
            v192 = (__int64)v194;
            sub_1418F44E0(v194, (const __m128i *)v605, v193);
          }
          v655.m256i_i8[0] = 3;
          v655.m256i_i64[1] = v193;
          v655.m256i_i64[2] = v192;
          v655.m256i_i64[3] = v193;
          v614 = 0;
          sub_140E72AA0(&v599, &v568, &v585, &v655);
          if ( v599.m256i_i8[0] != -1 )
            sub_14002F9D0(&v599);
          v624.m256i_i64[3] = v569;
          *(__m128i *)&v624.m256i_u64[1] = _mm_loadu_si128(&v568);
          v624.m256i_i8[0] = 5;
          v613 = 0;
          sub_140E72AA0(&v655, &v603, &v572, &v624);
          if ( v655.m256i_i8[0] != -1 )
            sub_14002F9D0(&v655);
          v617.m256i_i64[3] = v604;
          *(__m128i *)&v617.m256i_u64[1] = _mm_loadu_si128(&v603);
          v617.m256i_i8[0] = 5;
          v195 = v577;
          if ( v577 == v576.m128i_i64[0] )
            sub_14190F570(&v576);
          v196 = v576.m128i_i64[1];
          v197 = 32 * v195;
          v198 = _mm_loadu_si128((const __m128i *)&v617);
          *(__m128i *)(v576.m128i_i64[1] + v197 + 16) = _mm_loadu_si128((const __m128i *)&v617.m256i_u64[2]);
          *(__m128i *)(v196 + v197) = v198;
          v577 = v195 + 1;
          v199 = (__int64)v556;
          if ( v556 )
          {
            v623 = v557;
            while ( 1 )
            {
              v200 = v199 + 360;
              v201 = (__m128i *)*(unsigned __int16 *)(v199 + 626);
              v671 = v199;
              v202 = (_BYTE *)(v199 - 32);
              v597 = v201;
              v203 = 3LL * (unsigned int)(8 * (_DWORD)v201);
              v204 = -1;
              do
              {
                if ( !v203 )
                {
                  v204 = (__int64)v597;
                  goto LABEL_327;
                }
                v205 = v200 + 24;
                v206 = (__int64)v622->m128i_i64 - *(_QWORD *)(v200 + 16);
                v207 = sub_1418F4B70(v605, *(_QWORD *)(v200 + 8));
                if ( v207 )
                  v206 = v207;
                v208 = (v206 > 0) - (v206 < 0);
                v202 += 32;
                ++v204;
                v203 -= 24;
                v200 = v205;
              }
              while ( v208 == 1 );
              if ( !v208 )
              {
                if ( *v202 != 5 )
                {
                  v680 = 1;
                  sub_141939020(&off_1419EADC0);
                }
                v680 = 1;
                sub_140DED130(&v655, v202 + 8, aDeferLoading_1, 13);
                if ( v655.m256i_i8[0] != -1 )
                {
                  v680 = 1;
                  sub_14002F9D0(&v655);
                }
                *(_QWORD *)&v25 = &unk_1419EAE50;
                v7 = (__int64)&unk_1419EAD45;
                v101 = (__int64)&v655.m256i_i64[3];
                goto LABEL_333;
              }
LABEL_327:
              if ( !v623 )
                break;
              v623 = (__m128i *)((char *)v623 - 1);
              v199 = *(_QWORD *)(v671 + 8 * v204 + 632);
            }
          }
          v680 = 1;
          sub_141939020(&off_1419EADA8);
        }
LABEL_333:
        if ( v622 )
          sub_140001660(v605, v622, 1);
        sub_14002F9D0(&v583);
        v123 = (__m128i *)v582;
        v124 = (__int64)v596;
        goto LABEL_189;
      }
      *((_QWORD *)&v25 + 1) = v159;
      v627 = 0;
      while ( v627 != 64 )
      {
        v529 = &v599.m256i_i8[v627];
        v627 += 32LL;
        sub_14002F9D0(v529);
      }
      v530 = 72;
LABEL_879:
      if ( v622 )
        sub_140001660(v605, v622, 1);
      sub_14002F9D0(&v583);
      v664 = 1;
      sub_140383750(&v587);
      *(_QWORD *)&v25 = *((_QWORD *)&v25 + 1);
LABEL_882:
      sub_1403FB000(&v576);
      if ( v576.m128i_i64[0] )
        sub_140001660(v576.m128i_i64[1], 32 * v576.m128i_i64[0], 8);
      *((_QWORD *)&v25 + 1) = v530;
LABEL_885:
      v653 = 1;
      sub_140E8AD60(&v556);
      v575 = -1;
      v669 = 1;
      v668 = 1;
      v667 = 1;
      sub_140E8CB20(&v545);
      v96 = v602;
      v602->m128i_i64[0] = v25;
LABEL_141:
      v96->m128i_i64[1] = *((_QWORD *)&v25 + 1);
      v96[2].m128i_i64[0] = -2;
      if ( v550.m128i_i64[0] )
      {
        v97 = v551.m128i_i64[0];
        v655.m256i_i64[1] = 0;
        *(__m128i *)&v655.m256i_u64[2] = v550;
        v656.m128i_i64[1] = 0;
        *(__m128i *)v657 = v550;
        v98 = 1;
      }
      else
      {
        v98 = 0;
        v97 = 0;
      }
      v655.m256i_i64[0] = v98;
      v656.m128i_i64[0] = v98;
      *(_QWORD *)&v657[16] = v97;
      v225 = sub_140E90CA0(&v655);
      if ( v548.m128i_i64[0] != -1 && v548.m128i_i64[0] )
        v225 = sub_140001660(v548.m128i_i64[1], v548.m128i_i64[0], 1);
      LOBYTE(v225) = 1;
      LODWORD(v659) = v225;
      v672 = -1;
LABEL_808:
      v479 = v591.m128i_i64[1];
      v621 = v592;
      v627 = 0;
      v671 = v591.m128i_i64[1];
      while ( v621 != v627 )
      {
        ++v627;
        v480 = v479 + 32;
        sub_1403880E0(v479);
        v479 = v480;
      }
      if ( v591.m128i_i64[0] )
        sub_140001660(v591.m128i_i64[1], 32 * v591.m128i_i64[0], 8);
LABEL_813:
      v481 = v566.m128i_i64[1];
      v621 = v567;
      v627 = 0;
      v671 = v566.m128i_i64[1];
      while ( v621 != v627 )
      {
        ++v627;
        v482 = v481 + 32;
        sub_1403880E0(v481);
        v481 = v482;
      }
      if ( v566.m128i_i64[0] )
        sub_140001660(v566.m128i_i64[1], 32 * v566.m128i_i64[0], 8);
      if ( (((unsigned __int64)(v672 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v659) != 0 )
        sub_140001660(v666, v672, 1);
LABEL_8:
      v14 = v580;
      v621 = v581;
      v627 = 0;
      v659 = (__m128i *)v580;
      while ( v621 != v627 )
      {
        ++v627;
        v15 = v14 + 32;
        sub_1403880E0(v14);
        v14 = v15;
      }
      if ( v579 )
        sub_140001660(v580, 32 * v579, 8);
      return v602;
    default:
      goto LABEL_347;
  }
}
