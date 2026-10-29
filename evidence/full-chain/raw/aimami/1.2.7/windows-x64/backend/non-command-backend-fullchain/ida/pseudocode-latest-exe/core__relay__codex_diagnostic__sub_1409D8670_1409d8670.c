// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1409d8670 | successor of pre-update 0x140f427e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.878, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1409D8670(__m128i *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  __int64 v12; // r14
  __int64 v13; // r15
  __m128i si128; // xmm0
  char v15; // r9
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // r14
  __m128i v19; // xmm8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  const __m128i *v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r12
  char v36; // al
  __int8 *v37; // r15
  const __m128i *v38; // rax
  __int64 v39; // r9
  __int64 v40; // r10
  char v43; // r10
  __m128i v44; // kr30_16
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v57; // r12
  const __m128i *v58; // rdi
  __m128i v60; // xmm0
  __int64 v61; // r14
  unsigned __int64 v62; // r14
  unsigned __int64 *v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __m128i v67; // xmm0
  __m128i v68; // xmm2
  __int64 v69; // r13
  __int64 v70; // r12
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // r15
  char v81; // al
  char v82; // al
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v89; // r12
  __int64 v90; // r14
  __int64 v91; // rsi
  __m128i v92; // xmm0
  __m128i v93; // xmm7
  __int64 i; // rdi
  __int64 v95; // rax
  __int64 v96; // r13
  __m128i v97; // xmm8
  __int64 v99; // r12
  int v100; // eax
  bool v101; // zf
  unsigned __int64 v102; // rsi
  __int64 v103; // rdi
  __m128i v104; // xmm0
  __m128i v105; // xmm7
  __int64 j; // r13
  unsigned __int64 v107; // rsi
  __m128i v108; // xmm8
  __int64 v110; // r12
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdi
  __int64 v115; // rsi
  int v116; // eax
  __int64 v117; // rsi
  unsigned __int64 v118; // rax
  __m128i v119; // xmm0
  __m128i v120; // xmm7
  __int64 k; // r13
  unsigned __int64 v122; // rax
  __m128i v123; // xmm8
  unsigned __int64 v125; // r12
  __int64 v126; // rax
  int v127; // eax
  int v128; // eax
  unsigned __int64 v129; // rax
  __m128i v130; // xmm0
  __m128i v131; // xmm7
  __int64 m; // rdi
  unsigned __int64 v133; // rax
  __m128i v134; // xmm8
  unsigned __int64 v136; // r12
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // r8
  unsigned __int64 v141; // rsi
  __int64 v143; // rdi
  __m128i v144; // xmm0
  __m128i v145; // xmm7
  __int64 n; // r12
  unsigned __int64 v147; // rsi
  __m128i v148; // xmm8
  __int64 v150; // r13
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  unsigned __int64 v155; // rsi
  __int64 v157; // rdi
  __m128i v158; // xmm0
  __m128i v159; // xmm7
  __int64 ii; // r12
  unsigned __int64 v161; // rsi
  __m128i v162; // xmm8
  __int64 v164; // r13
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdi
  __int64 v170; // r8
  unsigned __int64 v171; // rsi
  __int64 v173; // rcx
  __int64 v174; // r13
  __m128i v175; // xmm0
  __m128i v176; // xmm7
  __int64 jj; // rdx
  unsigned __int64 v178; // rsi
  __m128i v179; // xmm8
  __int64 v181; // r12
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  unsigned __int64 v186; // r13
  unsigned __int64 *v187; // rsi
  unsigned __int64 *v188; // r15
  unsigned __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rdx
  char v197; // al
  __int64 v198; // rsi
  __int64 v199; // rdi
  const __m128i *v200; // r15
  __m128i v202; // xmm0
  unsigned __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rsi
  __int64 v208; // rsi
  unsigned __int64 v209; // rdi
  __int64 v210; // rdi
  const __m128i *v211; // r15
  __m128i v213; // xmm0
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rsi
  __int64 v217; // rsi
  __int64 v218; // rdi
  const __m128i *v219; // r15
  __m128i v221; // xmm0
  __int64 v222; // rax
  __int64 v223; // rdx
  unsigned __int64 v224; // rax
  __int64 v225; // rsi
  __m128i *v226; // rcx
  __int64 result; // rax
  __m128i v228; // xmm6
  __int64 v229; // rsi
  __int64 v230; // rsi
  __int64 v231; // rdi
  __int64 v232; // r14
  __int64 v233; // rax
  __int64 v234; // r12
  __int64 v235; // r15
  __int64 v236; // rbx
  __int64 v237; // rdi
  __int64 v238; // rdx
  __m128i *v239; // rcx
  __m128i v240; // xmm1
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rdx
  __int64 v245; // rcx
  _QWORD *v246; // rsi
  __int64 v247; // rax
  __m128i v248; // xmm0
  __m128i *v249; // rcx
  int v250; // edx
  int v251; // ecx
  unsigned int v252; // ecx
  __int64 v253; // rdx
  __int64 v254; // r15
  __int64 v255; // rax
  __m128i v256; // xmm0
  const __m128i *v257; // rsi
  __int64 v258; // rdi
  __m128i v259; // xmm0
  __int64 v260; // r15
  __int64 v261; // r14
  _QWORD *v262; // rax
  __int64 v263; // rax
  __int64 v264; // rcx
  __int64 v265; // rdx
  __int64 v266; // rsi
  __int64 v267; // r14
  __int64 v268; // r15
  __int64 v269; // rbx
  __m128i v270; // xmm2
  __m128i v271; // xmm0
  __int64 v272; // r12
  __int64 v273; // rbx
  __m128i v274; // xmm0
  __m128i v275; // xmm0
  char v276; // cl
  int v277; // eax
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // rbx
  __int64 v281; // r15
  __int64 v282; // rsi
  __int64 v283; // rax
  char v284; // bl
  __int64 v285; // rsi
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  _DWORD *v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // rax
  __int64 v295; // rdx
  __int64 v296; // rcx
  _QWORD *v297; // rax
  __int64 v298; // rdx
  __int64 v299; // rcx
  void *v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rcx
  __m128i *v303; // rax
  __int64 v304; // rdx
  __int64 v305; // rcx
  void *v306; // rax
  __int64 v307; // rdx
  __int64 v308; // r12
  char v309; // di
  __int64 v310; // r15
  __int64 v311; // rax
  __m128i v312; // xmm2
  __m128i v313; // xmm0
  __m128i v314; // xmm2
  __m128i v315; // xmm2
  __int64 v316; // rsi
  _QWORD *v317; // rdi
  __int64 v318; // r14
  __int64 v319; // rsi
  __int64 v320; // r15
  __int64 v321; // rdx
  __int64 v322; // rcx
  void *v323; // rax
  __m128i v324; // xmm0
  __int64 v325; // rdx
  __int64 v326; // rcx
  _DWORD *v327; // rax
  __m128i v328; // xmm0
  __int64 v329; // rbx
  __int64 v330; // rcx
  __int64 v331; // r14
  __int64 v332; // rcx
  __int64 v333; // r14
  __int64 v334; // rcx
  __int64 v335; // rdi
  __int64 v336; // rcx
  __int64 v337; // rdi
  __m128i *v338; // rcx
  __m128i v339; // xmm1
  __m128i v340; // xmm2
  __m128i v341; // xmm3
  __int64 v342; // rsi
  __int64 *v343; // rax
  __int64 v344; // rdx
  int v345; // edi
  __int64 *v346; // rbx
  unsigned __int64 v347; // r8
  __m128i v348; // xmm0
  __m128i v349; // xmm2
  __int64 v350; // rbx
  __int64 v351; // r14
  __int64 v352; // r12
  __int64 v353; // r15
  __int64 v354; // rsi
  __int64 v355; // rdi
  __int8 v356; // r13
  __m128i v357; // xmm0
  __m128i v358; // xmm0
  __int64 v359; // rax
  const char *v360; // rcx
  const char *v361; // rax
  __int64 v362; // rcx
  __int64 v363; // r11
  unsigned __int64 v364; // rdi
  __int128 v365; // rax
  __int64 v366; // r10
  __int64 v367; // rsi
  __int64 v368; // r9
  __int64 v369; // rcx
  int v370; // edi
  int v371; // eax
  int v372; // esi
  __int64 v373; // r9
  int v374; // eax
  __int64 v375; // r8
  unsigned int v376; // eax
  _QWORD *v377; // r9
  __int64 v378; // r15
  __int64 v379; // r12
  unsigned __int128 v380; // kr120_16
  __int64 v381; // r14
  __int64 v382; // r13
  __int64 v383; // rsi
  __int64 v384; // rdi
  __int64 v385; // r13
  __int64 *v386; // rbx
  __m128i v387; // xmm0
  __m128i v388; // xmm2
  __int64 v389; // rsi
  __int8 v390; // bl
  __m128i v391; // xmm0
  __m128i v392; // xmm2
  __m128i v393; // xmm0
  __m128i v394; // xmm2
  __m128i v395; // xmm2
  __m128i v396; // xmm0
  __m128i v397; // xmm2
  __m128i v398; // xmm2
  __m128i v399; // xmm2
  __m128i v400; // xmm0
  __m128i v401; // xmm2
  __int64 v402; // rsi
  __m128i v403; // xmm2
  __m128i *v404; // rcx
  __m128i v405; // xmm1
  __m128i v406; // xmm2
  __m128i v407; // xmm3
  __int64 v408; // rsi
  _QWORD *v409; // rdi
  __int64 v410; // rdx
  __int64 v411; // rsi
  __int64 v412; // r8
  __int64 v413; // r9
  __m128i v414; // xmm0
  __int64 v415; // r10
  __int64 v416; // rax
  __m128d v417; // xmm6
  __int64 v418; // r12
  __int64 *v419; // r14
  __int64 v420; // rdx
  __int64 v421; // rdi
  __int64 *v422; // rsi
  __int64 *v423; // r15
  __int64 v424; // rdx
  __int64 v425; // r14
  __m128i v426; // xmm6
  __int64 v427; // r15
  __int64 v428; // rsi
  _QWORD *v429; // rcx
  __int64 v430; // rdx
  _QWORD *v431; // r12
  __int64 (__fastcall ***v432)(); // rbx
  __int64 v433; // rdx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 v436; // rax
  __int64 v437; // rsi
  unsigned __int64 v438; // r13
  __m128i v439; // xmm2
  __int64 v440; // rcx
  bool v441; // si
  __int64 v442; // rdx
  bool v443; // al
  __int64 v444; // rcx
  bool v445; // si
  __int64 v446; // rdx
  bool v447; // al
  __int64 v448; // rsi
  __int64 v449; // rsi
  __int64 v450; // rdi
  __int64 v451; // r12
  unsigned __int64 v452; // rcx
  __int64 v453; // rsi
  __int128 v454; // xmm7
  __int64 v455; // rdi
  unsigned __int64 v456; // rsi
  __int64 v458; // rdi
  __int64 v459; // r9
  __m128i v460; // xmm0
  __m128i v461; // xmm7
  __int64 kk; // rbx
  unsigned __int64 v463; // rsi
  __m128i v464; // xmm8
  __int64 v466; // r14
  __int64 v467; // r8
  __int64 v468; // r12
  __int64 v469; // r9
  __int64 v470; // r12
  unsigned __int64 *v471; // r14
  __int64 v472; // r15
  unsigned __int64 *v473; // rdi
  __int64 v474; // r15
  __int64 v475; // r12
  unsigned __int64 v476; // rsi
  __int64 v477; // rbx
  unsigned __int64 v478; // r13
  unsigned __int64 v479; // rcx
  __int64 v480; // rbx
  unsigned __int64 v481; // r15
  unsigned __int64 *v482; // r13
  __int64 v483; // rcx
  __int64 v484; // rdx
  unsigned __int64 v485; // rdx
  _QWORD *v486; // rcx
  __int64 v487; // rdi
  __int64 v488; // rbx
  __int64 v489; // rax
  __int64 v490; // rbx
  unsigned __int64 *v491; // r15
  unsigned __int64 *v492; // r13
  unsigned __int64 v493; // rcx
  __int64 v494; // rax
  __int64 v495; // r14
  __int64 v496; // rdi
  __int64 v497; // rax
  __int64 v498; // rcx
  __int64 v499; // rax
  __int64 v500; // rdi
  __int64 v501; // r14
  __int64 v502; // rax
  __int64 v503; // rcx
  __int64 v504; // rdi
  __int64 v505; // r14
  __int64 v506; // rax
  __int64 v507; // rcx
  __int64 v508; // rdx
  __int64 v509; // r8
  __int64 v510; // r15
  __int64 v511; // rbx
  _QWORD *v512; // rdi
  __int64 v513; // r14
  __int64 v514; // rdx
  __int64 v515; // rdi
  __int64 v516; // rbx
  __int64 v517; // rax
  __int64 v518; // rdi
  unsigned __int64 *v519; // rbx
  unsigned __int64 *v520; // r15
  unsigned __int64 v521; // rcx
  unsigned __int64 v522; // rax
  __int64 v523; // r14
  __int64 v524; // r13
  __int64 v525; // rax
  __int64 v526; // rcx
  __int64 v527; // rax
  __int64 v528; // rsi
  __int64 v529; // rbx
  __int64 v530; // rax
  __int64 v531; // rcx
  __int64 v532; // rsi
  __int64 v533; // rbx
  __int64 v534; // rax
  __int64 v535; // rcx
  __int64 v536; // rbx
  __int64 v537; // rdx
  __int64 v538; // rsi
  __int64 v539; // rdx
  __int64 v540; // r15
  __int64 v541; // r13
  __int64 v542; // rdx
  unsigned __int64 *v543; // r14
  char v544; // di
  unsigned __int64 v545; // rcx
  __int64 v546; // r15
  __int64 v547; // rsi
  __int64 v548; // rbx
  __int64 v549; // rax
  __int64 v550; // r15
  char v551; // bl
  __int64 v552; // rdx
  __int64 v553; // rcx
  __int64 v554; // r14
  __int64 v555; // rax
  __int64 v556; // rsi
  __int64 v557; // rcx
  char v558; // r14
  char v559; // r15
  __int64 v560; // rbx
  __int64 v561; // rdi
  unsigned __int64 v562; // rsi
  __int64 v563; // rdx
  __m128i v564; // xmm0
  __m128i v565; // xmm2
  __int64 v566; // rdx
  __m128i v567; // xmm2
  __m128i v568; // xmm0
  __m128i v569; // xmm0
  __m128i v570; // xmm2
  __m128i *v571; // rax
  __m128i v572; // xmm0
  __m128i v573; // xmm1
  __m128i v574; // xmm2
  __int64 v575; // rsi
  __int64 v576; // rdi
  _QWORD *v577; // rbx
  __int64 v578; // rdx
  __int64 v579; // rdx
  __int64 v580; // rdi
  __int64 v581; // rsi
  _QWORD *v582; // rbx
  __int64 v583; // rdx
  __int64 v584; // rdi
  __m128i v585; // xmm2
  __int64 v586; // rdi
  __int64 v587; // rsi
  __int64 v588; // r9
  unsigned __int64 v589; // rcx
  unsigned __int8 *v590; // r11
  __int64 v591; // rdx
  __int64 v592; // r9
  __int64 v593; // rdx
  void *v594; // rax
  __int64 v595; // rcx
  _OWORD *v596; // rdx
  __m128i v597; // xmm0
  __m128i *v598; // rcx
  __int64 v599; // rbx
  __int64 v600; // r14
  __int64 v601; // [rsp+30h] [rbp-50h]
  __int64 v602; // [rsp+40h] [rbp-40h] BYREF
  __m128i v603[2]; // [rsp+48h] [rbp-38h] BYREF
  __m128i v604[19]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v605[24]; // [rsp+198h] [rbp+118h] BYREF
  __int64 v606; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v607; // [rsp+1B8h] [rbp+138h]
  __int128 v608; // [rsp+1C8h] [rbp+148h]
  __m128i v609[7]; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v610; // [rsp+248h] [rbp+1C8h] BYREF
  __m128i v611; // [rsp+250h] [rbp+1D0h]
  __int64 v612; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v613; // [rsp+268h] [rbp+1E8h]
  __int64 v614; // [rsp+278h] [rbp+1F8h] BYREF
  __m128i v615; // [rsp+280h] [rbp+200h]
  __int64 v616; // [rsp+290h] [rbp+210h] BYREF
  __m128i v617; // [rsp+298h] [rbp+218h] BYREF
  __int128 v618; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v619; // [rsp+2B8h] [rbp+238h]
  __m128i v620; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v621; // [rsp+2D0h] [rbp+250h]
  __int64 v622; // [rsp+2D8h] [rbp+258h] BYREF
  __m128i v623; // [rsp+2E0h] [rbp+260h]
  __int128 v624; // [rsp+2F0h] [rbp+270h]
  __int128 v625; // [rsp+300h] [rbp+280h]
  __m128i v626; // [rsp+310h] [rbp+290h] BYREF
  __int64 v627; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v628; // [rsp+330h] [rbp+2B0h]
  __int64 v629; // [rsp+338h] [rbp+2B8h]
  _BYTE v630[104]; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 (__fastcall **v631)(); // [rsp+3A8h] [rbp+328h] BYREF
  __int64 v632; // [rsp+3B0h] [rbp+330h]
  __int64 v633; // [rsp+3B8h] [rbp+338h]
  __int64 v634; // [rsp+3C8h] [rbp+348h]
  __int64 v635; // [rsp+3D0h] [rbp+350h]
  __int64 v636; // [rsp+3D8h] [rbp+358h]
  __int64 v637; // [rsp+3E0h] [rbp+360h]
  __int64 v638; // [rsp+3E8h] [rbp+368h]
  __int64 v639; // [rsp+3F0h] [rbp+370h]
  __int64 v640; // [rsp+3F8h] [rbp+378h]
  __int64 v641; // [rsp+400h] [rbp+380h]
  __int64 v642; // [rsp+5B8h] [rbp+538h]
  __int64 *v643; // [rsp+5C0h] [rbp+540h]
  __int64 v644; // [rsp+5C8h] [rbp+548h]
  __int128 v645; // [rsp+5D0h] [rbp+550h]
  __m128i v646; // [rsp+5E0h] [rbp+560h]
  __m128i v647; // [rsp+5F8h] [rbp+578h] BYREF
  unsigned __int64 v648; // [rsp+608h] [rbp+588h]
  unsigned __int64 v649; // [rsp+610h] [rbp+590h]
  __int64 v650; // [rsp+618h] [rbp+598h]
  __m128i v651; // [rsp+620h] [rbp+5A0h] BYREF
  __int64 v652; // [rsp+630h] [rbp+5B0h]
  __int64 v653; // [rsp+640h] [rbp+5C0h]
  __int64 v654; // [rsp+648h] [rbp+5C8h]
  __int64 v655; // [rsp+650h] [rbp+5D0h]
  __int64 v656; // [rsp+658h] [rbp+5D8h]
  __m128i v657; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v658; // [rsp+670h] [rbp+5F0h]
  __m256i v659; // [rsp+680h] [rbp+600h] BYREF
  __int64 v660; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v661; // [rsp+6A8h] [rbp+628h]
  __m128i v662; // [rsp+6B0h] [rbp+630h]
  __int64 v663; // [rsp+6C0h] [rbp+640h]
  _BYTE v664[72]; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v665; // [rsp+718h] [rbp+698h] BYREF
  __m128i v666; // [rsp+720h] [rbp+6A0h]
  __int64 v667; // [rsp+7C0h] [rbp+740h] BYREF
  __m128i v668; // [rsp+7C8h] [rbp+748h]
  __int64 v669; // [rsp+7D8h] [rbp+758h] BYREF
  __int64 v670; // [rsp+7E0h] [rbp+760h]
  __int64 v671; // [rsp+7E8h] [rbp+768h]
  __int64 *v672; // [rsp+7F0h] [rbp+770h]
  _QWORD *v673; // [rsp+7F8h] [rbp+778h]
  __m128i v674; // [rsp+800h] [rbp+780h] BYREF
  __int64 v675; // [rsp+810h] [rbp+790h]
  __m128i v676; // [rsp+820h] [rbp+7A0h] BYREF
  __int128 v677; // [rsp+830h] [rbp+7B0h]
  __m128i v678; // [rsp+840h] [rbp+7C0h] BYREF
  __m256i v679; // [rsp+850h] [rbp+7D0h] BYREF
  __m128i v680; // [rsp+870h] [rbp+7F0h]
  __int128 v681; // [rsp+880h] [rbp+800h] BYREF
  __int64 v682; // [rsp+890h] [rbp+810h]
  __m128i v683; // [rsp+8A0h] [rbp+820h]
  __int64 v684; // [rsp+8B0h] [rbp+830h]
  __int64 v685; // [rsp+8B8h] [rbp+838h] BYREF
  __m128i v686; // [rsp+8C0h] [rbp+840h] BYREF
  _BYTE v687[104]; // [rsp+8D0h] [rbp+850h] BYREF
  __int64 (__fastcall **v688)(); // [rsp+938h] [rbp+8B8h] BYREF
  __m128i v689; // [rsp+940h] [rbp+8C0h]
  __int64 v690; // [rsp+950h] [rbp+8D0h]
  __int64 v691; // [rsp+958h] [rbp+8D8h]
  __int64 v692; // [rsp+960h] [rbp+8E0h]
  __int64 *v693; // [rsp+968h] [rbp+8E8h]
  __int64 v694; // [rsp+970h] [rbp+8F0h]
  __int64 v695; // [rsp+978h] [rbp+8F8h]
  __int64 v696; // [rsp+980h] [rbp+900h]
  __int64 v697; // [rsp+988h] [rbp+908h]
  _QWORD *v698; // [rsp+990h] [rbp+910h]
  __int64 v699; // [rsp+998h] [rbp+918h]
  char v700; // [rsp+9A0h] [rbp+920h]
  char v701; // [rsp+9A1h] [rbp+921h]
  __m128i v702; // [rsp+A28h] [rbp+9A8h]
  __int64 v703; // [rsp+A38h] [rbp+9B8h]
  __m128i v704; // [rsp+A40h] [rbp+9C0h]
  __int64 v705; // [rsp+A50h] [rbp+9D0h]
  bool v706; // [rsp+A58h] [rbp+9D8h]
  __m128i *v707; // [rsp+B40h] [rbp+AC0h]
  __int64 v708; // [rsp+B48h] [rbp+AC8h]
  __m128i v709; // [rsp+B50h] [rbp+AD0h] BYREF
  unsigned __int64 v710; // [rsp+B60h] [rbp+AE0h]
  __int64 v711; // [rsp+B68h] [rbp+AE8h]
  __m128i v712; // [rsp+B70h] [rbp+AF0h] BYREF
  _OWORD v713[2]; // [rsp+B80h] [rbp+B00h]
  __m128i v714; // [rsp+BA0h] [rbp+B20h] BYREF
  __m128i v715; // [rsp+BB0h] [rbp+B30h] BYREF
  _BYTE v716[63]; // [rsp+BC0h] [rbp+B40h] BYREF
  _BYTE v717[39]; // [rsp+C00h] [rbp+B80h] BYREF
  __m128i v718; // [rsp+C30h] [rbp+BB0h] BYREF
  __m256i v719; // [rsp+C40h] [rbp+BC0h] BYREF
  __m128i v720; // [rsp+C60h] [rbp+BE0h]
  __int64 v721; // [rsp+C78h] [rbp+BF8h]
  __int64 v722; // [rsp+C80h] [rbp+C00h]
  unsigned __int64 v723; // [rsp+C88h] [rbp+C08h]
  __m128i v724; // [rsp+C90h] [rbp+C10h] BYREF
  unsigned __int64 v725; // [rsp+CA0h] [rbp+C20h]
  __m256i v726; // [rsp+CB0h] [rbp+C30h] BYREF
  _BYTE v727[24]; // [rsp+CD0h] [rbp+C50h] BYREF
  __int16 v728; // [rsp+CE8h] [rbp+C68h]
  char v729; // [rsp+CEAh] [rbp+C6Ah]
  __int64 v730; // [rsp+CF8h] [rbp+C78h]
  __int128 v731; // [rsp+D00h] [rbp+C80h]
  _BYTE v732[96]; // [rsp+D10h] [rbp+C90h] BYREF
  char v733; // [rsp+D7Fh] [rbp+CFFh]
  __int64 v734; // [rsp+D80h] [rbp+D00h]
  __int64 v735; // [rsp+D88h] [rbp+D08h]
  __int64 v736; // [rsp+D90h] [rbp+D10h]
  __int64 v737; // [rsp+D98h] [rbp+D18h]
  char v738; // [rsp+DA4h] [rbp+D24h]
  char v739; // [rsp+DA5h] [rbp+D25h]
  char v740; // [rsp+DA6h] [rbp+D26h]
  char v741; // [rsp+DA7h] [rbp+D27h]
  __int64 v742; // [rsp+DA8h] [rbp+D28h]
  _QWORD *v743; // [rsp+DB0h] [rbp+D30h]
  __int64 v744; // [rsp+DB8h] [rbp+D38h]
  char v745; // [rsp+DC3h] [rbp+D43h]
  char v746; // [rsp+DC4h] [rbp+D44h]
  char v747; // [rsp+DC5h] [rbp+D45h]
  char v748; // [rsp+DC6h] [rbp+D46h]
  char v749; // [rsp+DC7h] [rbp+D47h]
  __int64 v750; // [rsp+DC8h] [rbp+D48h]
  char v751; // [rsp+DD2h] [rbp+D52h]
  char v752; // [rsp+DD3h] [rbp+D53h]
  char v753; // [rsp+DD4h] [rbp+D54h]
  char v754; // [rsp+DD5h] [rbp+D55h]
  char v755; // [rsp+DD6h] [rbp+D56h]
  char v756; // [rsp+DD7h] [rbp+D57h] BYREF
  __int64 mm; // [rsp+DD8h] [rbp+D58h]
  char v758; // [rsp+DE6h] [rbp+D66h]
  char v759; // [rsp+DE7h] [rbp+D67h]
  unsigned __int64 v760; // [rsp+DE8h] [rbp+D68h]
  char v761; // [rsp+DF7h] [rbp+D77h]
  __int64 v762; // [rsp+DF8h] [rbp+D78h]
  char v763; // [rsp+E03h] [rbp+D83h]
  char v764; // [rsp+E04h] [rbp+D84h]
  char v765; // [rsp+E05h] [rbp+D85h]
  char v766; // [rsp+E06h] [rbp+D86h]
  char v767; // [rsp+E07h] [rbp+D87h]
  __int64 v768; // [rsp+E08h] [rbp+D88h]

  v768 = -2;
  v654 = a2;
  v707 = a1;
  v642 = *(_QWORD *)(a3 + 8);
  v653 = *(_QWORD *)(a3 + 16);
  v7 = sub_1416AE140();
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    v8 = *(_QWORD *)v7;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v584 = v7;
    v8 = sub_1416C5230();
    v7 = v584;
    *(_QWORD *)v584 = v8;
    *(_QWORD *)(v584 + 8) = v9;
    *(_BYTE *)(v584 + 16) = 1;
  }
  *(_QWORD *)v7 = v8 + 1;
  v10 = _mm_loadu_si128((const __m128i *)&xmmword_141A57990);
  *(__m128i *)&v687[16] = v10;
  v11 = _mm_loadu_si128((const __m128i *)&off_141A57980);
  *(__m128i *)v687 = v11;
  *(_QWORD *)&v687[32] = v8;
  *(_QWORD *)&v687[40] = v9;
  if ( v653 )
  {
    v4 = (unsigned __int64)v687;
    v12 = v642;
    v13 = v653;
    do
    {
      sub_1416DB410(v630, v12);
      sub_140871180(v687, v630);
      v12 += 256;
      --v13;
    }
    while ( v13 );
  }
  si128 = _mm_load_si128((const __m128i *)v687);
  v719 = *(__m256i *)&v687[16];
  v718 = si128;
  v15 = *(_BYTE *)(a3 + 364);
  v16 = v654;
  v733 = v15;
  sub_1409C6370(&v678, v654, &v718);
  v743 = a4;
  sub_1409C81C0(v687, v16);
  v18 = *(_QWORD *)&v687[8];
  v17 = *(_QWORD *)v687;
  v19 = _mm_loadu_si128((const __m128i *)&v687[16]);
  if ( *(_QWORD *)v687 != -1 )
  {
    v750 = *(_QWORD *)&v687[40];
    v762 = *(_QWORD *)&v687[32];
    mm = *(_QWORD *)&v687[48];
    v683 = *(__m128i *)&v687[56];
    HIDWORD(_RAX) = *(_DWORD *)&v687[76];
    v684 = *(_QWORD *)&v687[72];
    v646 = _mm_loadu_si128((const __m128i *)&v687[80]);
    v21 = v678.m128i_i64[1];
    if ( !v678.m128i_i64[1] )
      goto LABEL_211;
    goto LABEL_202;
  }
  v672 = *(__int64 **)&v687[8];
  v622 = *(_QWORD *)&v687[8];
  v714 = v19;
  v623 = v19;
  v22 = sub_1416AE140();
  v23 = v22;
  if ( *(_BYTE *)(v22 + 16) == 1 )
  {
    v24 = *(_QWORD *)v22;
    v25 = *(const __m128i **)(v23 + 8);
  }
  else
  {
    v24 = sub_1416C5230();
    *(_QWORD *)v23 = v24;
    *(_QWORD *)(v23 + 8) = v25;
    *(_BYTE *)(v23 + 16) = 1;
  }
  v26 = _mm_load_si128(&v714);
  v27 = v26.m128i_i64[0];
  v28 = v24 + 1;
  *(_QWORD *)v23 = v24 + 1;
  *(__m128i *)&v726.m256i_u64[2] = v10;
  *(__m128i *)v726.m256i_i8 = v11;
  *(_QWORD *)v727 = v24;
  *(_QWORD *)&v727[8] = v25;
  v760 = _mm_shuffle_epi32(v26, 238).m128i_u64[0];
  v762 = v26.m128i_i64[0] + 192 * v760;
  v29 = 0;
  v750 = v26.m128i_i64[0];
  while ( v27 != v762 )
  {
    v30 = v27;
    v31 = v29;
    v27 += 192;
    ++v29;
    if ( *(_QWORD *)(v30 + 80) != -1 )
    {
      v32 = *(_QWORD *)(v30 + 96);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v30 + 88);
        nullsub_1(v28, v25);
        v34 = sub_140001650(v32, 1);
        if ( !v34 )
          sub_14196B2DB(1, v32);
        v35 = v34;
        sub_1419234B0(v34, v33, v32);
      }
      else
      {
        v35 = 1;
      }
      v36 = *(_BYTE *)(v30 + 104);
      *(_QWORD *)v630 = v32;
      *(_QWORD *)&v630[8] = v35;
      *(_QWORD *)&v630[16] = v32;
      v630[24] = v36;
      sub_140867CF0(v687, &v726, v630);
      v37 = *(__int8 **)&v687[8];
      v28 = *(_QWORD *)v687;
      if ( *(_QWORD *)v687 != -1 )
      {
        v38 = *(const __m128i **)&v687[32];
        v25 = **(const __m128i ***)&v687[32];
        v39 = *(_QWORD *)(*(_QWORD *)&v687[32] + 8LL);
        v40 = *(_QWORD *)&v687[40] & v39;
        _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(**(_QWORD **)&v687[32]
                                                                               + (*(_QWORD *)&v687[40] & v39))));
        if ( !(_DWORD)_R11 )
        {
          v48 = 16;
          do
          {
            v40 = v39 & (v48 + v40);
            _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v25 + v40)));
            v48 += 16;
          }
          while ( !(_DWORD)_R11 );
        }
        __asm { tzcnt   r11d, r11d }
        _R11 = v39 & (v40 + _R11);
        v43 = v25->m128i_i8[_R11];
        if ( v43 >= 0 )
        {
          _R10D = _mm_movemask_epi8(_mm_load_si128(v25));
          __asm { tzcnt   r11d, r10d }
          v43 = v25->m128i_i8[_R11];
        }
        v44 = *(__m128i *)&v687[16];
        v45 = *(_QWORD *)&v687[40] >> 57;
        v25->m128i_i8[_R11] = *(_QWORD *)&v687[40] >> 57;
        v25[1].m128i_i8[v39 & (_R11 - 16)] = v45;
        v46 = -7 * _R11;
        *(_QWORD *)((char *)&v25[-3] + v46 * 8 - 8) = v28;
        v25[-3].m128i_i64[v46] = (__int64)v37;
        v37 = &v25->m128i_i8[-56 * _R11];
        *(__m128i *)((char *)v25 + v46 * 8 - 40) = v44;
        *(_QWORD *)((char *)&v25[-1] + v46 * 8 - 8) = 0;
        v25[-1].m128i_i64[v46] = 8;
        v25->m128i_i64[v46 - 1] = 0;
        v28 = v43 & 1;
        v38[1] = _mm_sub_epi64(
                   _mm_loadu_si128(v38 + 1),
                   (__m128i)_mm_shuffle_ps((__m128)_mm_cvtsi32_si128(v28), (__m128)xmmword_14196F130, 228));
      }
      v47 = *((_QWORD *)v37 - 1);
      if ( v47 == *((_QWORD *)v37 - 3) )
        sub_1419395F0(v37 - 24);
      *(_QWORD *)(*((_QWORD *)v37 - 2) + 8 * v47) = v31;
      *((_QWORD *)v37 - 1) = v47 + 1;
    }
  }
  v50 = sub_1416AE140();
  v51 = v50;
  if ( *(_BYTE *)(v50 + 16) == 1 )
  {
    v52 = *(_QWORD *)v50;
    v53 = *(_QWORD *)(v51 + 8);
  }
  else
  {
    v52 = sub_1416C5230();
    *(_QWORD *)v51 = v52;
    *(_QWORD *)(v51 + 8) = v53;
    *(_BYTE *)(v51 + 16) = 1;
  }
  *(_QWORD *)v51 = v52 + 1;
  *(__m128i *)&v659.m256i_u64[2] = v10;
  *(__m128i *)v659.m256i_i8 = v11;
  v660 = v52;
  v661 = v53;
  v54 = sub_1416AE140();
  v55 = v54;
  if ( *(_BYTE *)(v54 + 16) == 1 )
  {
    _RAX = *(_OWORD *)v54;
  }
  else
  {
    *(_QWORD *)&_RAX = sub_1416C5230();
    *(_OWORD *)v55 = _RAX;
    *(_BYTE *)(v55 + 16) = 1;
  }
  *(_QWORD *)v55 = _RAX + 1;
  *(__m128i *)v716 = v10;
  v715 = v11;
  *(_OWORD *)&v716[16] = _RAX;
  v4 = v726.m256i_i64[0];
  v57 = v726.m256i_i64[3];
  v58 = (const __m128i *)(v726.m256i_i64[0] + 16);
  _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v726.m256i_i64[0]));
  while ( v57 )
  {
    if ( !(_WORD)_ESI )
    {
      do
      {
        v60 = _mm_load_si128(v58);
        v4 -= 896LL;
        ++v58;
        _ESI = _mm_movemask_epi8(v60) ^ 0xFFFF;
      }
      while ( !_ESI );
    }
    __asm { tzcnt   eax, esi }
    v61 = -56 * _RAX;
    sub_140A934F0(v687, *(_QWORD *)(v4 - 56 * _RAX - 48), *(_QWORD *)(v4 - 56 * _RAX - 40));
    DWORD1(_RAX) = *(_DWORD *)&v687[36];
    if ( *(_QWORD *)&v687[32] == -1 )
    {
      v18 = *(_QWORD *)v687;
      v17 = 2;
      goto LABEL_196;
    }
    _ESI &= _ESI - 1;
    --v57;
    if ( *(_DWORD *)&v687[32] != 2 && *(_QWORD *)v687 )
    {
      sub_140001660(*(_QWORD *)&v687[8], *(_QWORD *)v687, 1);
      goto LABEL_43;
    }
    if ( *(_DWORD *)&v687[32] != 2 )
    {
LABEL_43:
      v62 = v4 + v61;
      if ( !*(_QWORD *)(v62 - 8) )
        sub_14196B673(0, 0, &off_141A62A18);
      v63 = *(unsigned __int64 **)(v62 - 16);
      v64 = *v63;
      if ( *v63 >= v760 )
        sub_14196B673(v64, v760, &off_141A62A30);
      sub_1407E4440(
        (unsigned int)&v602,
        *(_QWORD *)(v62 - 48),
        *(_QWORD *)(v62 - 40),
        *(_QWORD *)(v750 + 192 * v64 + 40),
        *(_QWORD *)(v750 + 192 * v64 + 48));
      if ( v602 == -1 )
      {
        v73 = *(_QWORD *)(v62 - 40);
        if ( v73 )
        {
          mm = v57;
          v74 = *(_QWORD *)(v62 - 48);
          nullsub_1(v66, v65);
          v75 = sub_140001650(v73, 1);
          if ( !v75 )
            sub_14196B2DB(1, v73);
          v76 = v75;
          sub_1419234B0(v75, v74, v73);
          v57 = mm;
        }
        else
        {
          v76 = 1;
        }
        v82 = *(_BYTE *)(v62 - 32);
        *(_QWORD *)v687 = v73;
        *(_QWORD *)&v687[8] = v76;
        *(_QWORD *)&v687[16] = v73;
        v687[24] = v82;
        nullsub_1(v66, v65);
        v83 = sub_140001650(32, 1);
        mm = v83;
        if ( !v83 )
          sub_14196B2DB(1, 32);
        *(_OWORD *)(v83 + 16) = xmmword_141A62A58;
        *(__m128i *)v83 = _mm_loadu_si128((const __m128i *)&xmmword_141A62A48);
        *(_QWORD *)v630 = 32;
        *(_QWORD *)&v630[8] = v83;
        *(_QWORD *)&v630[16] = 32;
        DWORD1(_RAX) = (unsigned __int64)sub_14086C4A0(v664, &v715, v687, v630) >> 32;
        if ( *(_QWORD *)v664 != -1 && *(_QWORD *)v664 )
          sub_140001660(*(_QWORD *)&v664[8], *(_QWORD *)v664, 1);
      }
      else if ( v602 == -2 )
      {
        *(__m128i *)&v687[80] = v604[3];
        *(__m128i *)&v687[64] = v604[2];
        v67 = _mm_loadu_si128(v603);
        v68 = _mm_loadu_si128(v604);
        *(__m128i *)&v687[48] = v604[1];
        *(__m128i *)&v687[32] = v68;
        *(__m128i *)&v687[16] = v603[1];
        *(__m128i *)v687 = v67;
        v69 = *(_QWORD *)(v62 - 40);
        if ( v69 )
        {
          mm = v57;
          v70 = *(_QWORD *)(v62 - 48);
          nullsub_1(v66, v65);
          v71 = sub_140001650(v69, 1);
          if ( !v71 )
            sub_14196B2DB(1, v69);
          v72 = v71;
          sub_1419234B0(v71, v70, v69);
          v57 = mm;
        }
        else
        {
          v72 = 1;
        }
        v81 = *(_BYTE *)(v62 - 32);
        *(_QWORD *)v630 = v69;
        *(_QWORD *)&v630[8] = v72;
        *(_QWORD *)&v630[16] = v69;
        v630[24] = v81;
        *(_QWORD *)v732 = 0;
        *(_QWORD *)&v732[8] = 1;
        *(_QWORD *)&v732[16] = 0;
        *(_QWORD *)&v664[16] = 1610612768;
        *(_QWORD *)v664 = v732;
        *(_QWORD *)&v664[8] = &off_141A66E10;
        if ( (unsigned __int8)sub_140D76130(v687, v664) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_5,
            55,
            (unsigned int)&v756,
            (unsigned int)&unk_141A5A890,
            (__int64)&off_141A66EC8);
        *(_QWORD *)&v717[16] = *(_QWORD *)&v732[16];
        *(__m128i *)v717 = _mm_loadu_si128((const __m128i *)v732);
        v740 = 0;
        sub_14086C4A0(v664, &v715, v630, v717);
        if ( *(_QWORD *)v664 != -1 && *(_QWORD *)v664 )
          sub_140001660(*(_QWORD *)&v664[8], *(_QWORD *)v664, 1);
        DWORD1(_RAX) = (unsigned __int64)sub_140906570(v687) >> 32;
      }
      else
      {
        v77 = *(_QWORD *)(v62 - 40);
        if ( v77 )
        {
          mm = v57;
          v78 = *(_QWORD *)(v62 - 48);
          nullsub_1(v66, v65);
          v79 = sub_140001650(v77, 1);
          if ( !v79 )
          {
            v741 = 1;
            sub_14196B2DB(1, v77);
          }
          v80 = v79;
          sub_1419234B0(v79, v78, v77);
          v57 = mm;
        }
        else
        {
          v80 = 1;
        }
        v84 = *(_BYTE *)(v62 - 32);
        *(_QWORD *)v664 = v77;
        *(_QWORD *)&v664[8] = v80;
        *(_QWORD *)&v664[16] = v77;
        v664[24] = v84;
        sub_1419234B0(v687, &v602, 344);
        v741 = 0;
        DWORD1(_RAX) = (unsigned __int64)sub_14086CB80(v630, &v659, v664, v687) >> 32;
        if ( *(_QWORD *)v630 != -1 )
          DWORD1(_RAX) = (unsigned __int64)sub_1400393B0(v630) >> 32;
      }
    }
  }
  v85 = sub_1416AE140();
  v86 = v85;
  if ( *(_BYTE *)(v85 + 16) == 1 )
  {
    _RAX = *(_OWORD *)v85;
  }
  else
  {
    *(_QWORD *)&_RAX = sub_1416C5230();
    *(_OWORD *)v86 = _RAX;
    *(_BYTE *)(v86 + 16) = 1;
  }
  _RCX = _RAX + 1;
  *(_QWORD *)v86 = _RAX + 1;
  *(__m128i *)&v732[16] = v10;
  *(__m128i *)v732 = v11;
  *(_OWORD *)&v732[32] = _RAX;
  mm = v679.m256i_i64[1];
  v735 = v678.m128i_i64[1];
  v742 = v678.m128i_i64[0];
  v10 = (__m128i)-1LL;
  v89 = v750;
  while ( v89 != v762 )
  {
    v90 = v89;
    v91 = *(_QWORD *)(v89 + 64);
    v4 = *(_QWORD *)(v89 + 72);
    if ( v4 == 12 )
    {
      _RCX = *(_QWORD *)v91 ^ 0x725F696D616D6961LL;
      *((_QWORD *)&_RAX + 1) = _RCX | *(_DWORD *)(v91 + 8) ^ 0x79616C65u;
      BYTE8(_RAX) = *((_QWORD *)&_RAX + 1) == 0;
      LOBYTE(_RCX) = mm == 0 || (_RCX | *(_DWORD *)(v91 + 8) ^ 0x79616C65u) != 0;
      if ( (_BYTE)_RCX )
        goto LABEL_93;
      goto LABEL_85;
    }
    if ( v4 <= 0xC || (_RCX = *(_QWORD *)v91 ^ 0x725F696D616D6961LL | *(_QWORD *)(v91 + 5) ^ 0x5F79616C65725F69LL) != 0 )
    {
      if ( v4 == 6 )
      {
        _RCX = *(_DWORD *)v91 ^ 0x616D6961u;
        *((_QWORD *)&_RAX + 1) = (unsigned int)_RCX | *(_WORD *)(v91 + 4) ^ 0x3169;
        BYTE8(_RAX) = ((unsigned int)_RCX | *(_WORD *)(v91 + 4) ^ 0x3169) == 0;
        LOBYTE(_RCX) = mm == 0 || ((unsigned int)_RCX | *(_WORD *)(v91 + 4) ^ 0x3169) != 0;
        if ( (_BYTE)_RCX )
        {
LABEL_93:
          v89 = v90 + 192;
          if ( *(_QWORD *)(v90 + 80) == -1 )
            goto LABEL_129;
          goto LABEL_94;
        }
LABEL_85:
        *(_QWORD *)&_RAX = sub_1406D0E00(&v679.m256i_u64[2], *(_QWORD *)(v89 + 64), *(_QWORD *)(v89 + 72));
        _RCX = (unsigned __int64)_RAX >> 57;
        v92 = _mm_cvtsi32_si128((unsigned __int64)_RAX >> 57);
        v93 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v92, v92), 0), 68);
        for ( i = 0; ; i += 16 )
        {
          v95 = v735 & _RAX;
          v96 = v742;
          v97 = _mm_loadu_si128((const __m128i *)(v742 + v95));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v97, v93));
          if ( _R15D )
            break;
LABEL_90:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v97, (__m128i)-1LL));
          BYTE8(_RAX) = 1;
          if ( (_DWORD)_RCX )
            goto LABEL_93;
          *(_QWORD *)&_RAX = i + v95 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   ecx, r15d }
          v99 = v95;
          _RCX = -(__int64)(v735 & (v95 + _RCX));
          if ( v4 == *(_QWORD *)(v96 + 24 * _RCX - 8)
            && !(unsigned int)sub_141923B40(v91, *(_QWORD *)(v96 + 24 * _RCX - 16), v4) )
          {
            break;
          }
          v100 = _R15D - 1;
          LOWORD(v100) = _R15D & (_R15D - 1);
          v101 = (_WORD)v100 == 0;
          _R15D = v100;
          v95 = v99;
          if ( v101 )
            goto LABEL_90;
        }
      }
      else if ( v4 == 19 )
      {
        _RCX = (unsigned int)_mm_movemask_epi8(
                               _mm_and_si128(
                                 _mm_cmpeq_epi8(
                                   _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A54ABD + 3)),
                                   _mm_loadu_si128((const __m128i *)(v91 + 3))),
                                 _mm_cmpeq_epi8(
                                   _mm_loadu_si128((const __m128i *)v91),
                                   _mm_loadu_si128((const __m128i *)&xmmword_141A54ABD))));
        BYTE8(_RAX) = (_DWORD)_RCX == 0xFFFF;
        LOBYTE(_RCX) = mm == 0 || (_DWORD)_RCX != 0xFFFF;
        if ( (_BYTE)_RCX )
          goto LABEL_93;
        goto LABEL_85;
      }
      *((_QWORD *)&_RAX + 1) = 0;
      goto LABEL_93;
    }
    if ( mm )
      goto LABEL_85;
    BYTE8(_RAX) = 1;
    v89 += 192;
    if ( *(_QWORD *)(v90 + 80) == -1 )
    {
LABEL_129:
      if ( !BYTE8(_RAX) )
        continue;
      goto LABEL_142;
    }
LABEL_94:
    if ( !v659.m256i_i64[3] )
      goto LABEL_129;
    LODWORD(v730) = DWORD2(_RAX);
    v767 = 1;
    v102 = sub_1406CFD80(&v660, v90 + 80);
    *(_QWORD *)&_RAX = v102 >> 57;
    v4 = v659.m256i_u64[1];
    v103 = v659.m256i_i64[0];
    v104 = _mm_cvtsi32_si128(v102 >> 57);
    v105 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v104, v104), 0), 68);
    for ( j = 0; ; j += 16 )
    {
      v107 = v4 & v102;
      v108 = _mm_loadu_si128((const __m128i *)(v103 + v107));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v108, v105));
      if ( _R15D )
        break;
LABEL_99:
      *(_QWORD *)&_RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v108, (__m128i)-1LL));
      v89 = v90 + 192;
      *((_QWORD *)&_RAX + 1) = (unsigned int)v730;
      if ( (_DWORD)_RAX )
        goto LABEL_129;
      v102 = j + v107 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   eax, r15d }
      v110 = -376 * (v4 & (v107 + _RAX));
      v111 = *(_QWORD *)(v90 + 88);
      *((_QWORD *)&_RAX + 1) = *(_QWORD *)(v90 + 96);
      v112 = *(_QWORD *)(v103 - 376 * (v4 & (v107 + _RAX)) - 368);
      v113 = *(_QWORD *)(v103 - 376 * (v4 & (v107 + _RAX)) - 360);
      v767 = 1;
      if ( (unsigned __int8)sub_140222930(v111, *((_QWORD *)&_RAX + 1), v112, v113) )
        break;
      *(_QWORD *)&_RAX = (unsigned int)(_R15D - 1);
      LOWORD(_RAX) = _R15D & (_R15D - 1);
      _R15D = _RAX;
      if ( !(_WORD)_RAX )
        goto LABEL_99;
    }
    v114 = v110 + v103;
    v115 = *(_QWORD *)(v114 - 280);
    v4 = *(_QWORD *)(v114 - 272);
    if ( v4 == 12 )
    {
      _RCX = *(_QWORD *)v115 ^ 0x725F696D616D6961LL | *(_DWORD *)(v115 + 8) ^ 0x79616C65u;
      if ( _RCX )
        goto LABEL_111;
    }
    else if ( v4 <= 0xC
           || (_RCX = *(_QWORD *)v115 ^ 0x725F696D616D6961LL | *(_QWORD *)(v115 + 5) ^ 0x5F79616C65725F69LL) != 0 )
    {
      if ( v4 == 6 )
      {
        v116 = *(_DWORD *)v115 ^ 0x616D6961;
        _RCX = v116 | *(_WORD *)(v115 + 4) ^ 0x3169u;
        if ( v116 | *(_WORD *)(v115 + 4) ^ 0x3169 )
          goto LABEL_111;
      }
      else if ( v4 != 19
             || _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A54ABD + 3)),
                      _mm_loadu_si128((const __m128i *)(v115 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v115),
                      _mm_loadu_si128((const __m128i *)&xmmword_141A54ABD)))) != 0xFFFF )
      {
        goto LABEL_111;
      }
    }
    v89 = v90 + 192;
    if ( !mm )
      goto LABEL_142;
    v118 = sub_1406D0E00(&v679.m256i_u64[2], *(_QWORD *)(v114 - 280), *(_QWORD *)(v114 - 272));
    v119 = _mm_cvtsi32_si128(v118 >> 57);
    v120 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v119, v119), 0), 68);
    for ( k = 0; ; k += 16 )
    {
      v122 = v735 & v118;
      HIDWORD(_RCX) = HIDWORD(v742);
      v123 = _mm_loadu_si128((const __m128i *)(v742 + v122));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v123, v120));
      if ( _R15D )
        break;
LABEL_126:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v123, (__m128i)-1LL)) )
        goto LABEL_142;
      v118 = k + v122 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   ecx, r15d }
      v125 = v122;
      v126 = -3LL * (v735 & (v122 + _RCX));
      HIDWORD(_RCX) = HIDWORD(v742);
      if ( v4 == *(_QWORD *)(v742 + 8 * v126 - 8)
        && !(unsigned int)sub_141923B40(v115, *(_QWORD *)(v742 + 8 * v126 - 16), v4) )
      {
        break;
      }
      v127 = _R15D - 1;
      LOWORD(v127) = _R15D & (_R15D - 1);
      v101 = (_WORD)v127 == 0;
      _R15D = v127;
      v122 = v125;
      v89 = v90 + 192;
      if ( v101 )
        goto LABEL_126;
    }
LABEL_111:
    v117 = *(_QWORD *)(v114 - 208);
    v4 = *(_QWORD *)(v114 - 200);
    if ( v4 == 12 )
    {
      _RCX = *(_QWORD *)v117 ^ 0x725F696D616D6961LL | *(_DWORD *)(v117 + 8) ^ 0x79616C65u;
      if ( !_RCX )
        goto LABEL_134;
    }
    else
    {
      if ( v4 > 0xC )
      {
        _RCX = *(_QWORD *)v117 ^ 0x725F696D616D6961LL | *(_QWORD *)(v117 + 5) ^ 0x5F79616C65725F69LL;
        if ( !_RCX )
        {
LABEL_134:
          v89 = v90 + 192;
          if ( !mm )
            goto LABEL_142;
          v129 = sub_1406D0E00(&v679.m256i_u64[2], *(_QWORD *)(v114 - 208), *(_QWORD *)(v114 - 200));
          v130 = _mm_cvtsi32_si128(v129 >> 57);
          v131 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v130, v130), 0), 68);
          for ( m = 0; ; m += 16 )
          {
            v133 = v735 & v129;
            HIDWORD(_RCX) = HIDWORD(v742);
            v134 = _mm_loadu_si128((const __m128i *)(v742 + v133));
            _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v134, v131));
            if ( _R15D )
              break;
LABEL_140:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v134, (__m128i)-1LL)) )
              goto LABEL_142;
            v129 = m + v133 + 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   ecx, r15d }
            v136 = v133;
            v137 = -3LL * (v735 & (v133 + _RCX));
            HIDWORD(_RCX) = HIDWORD(v742);
            if ( v4 == *(_QWORD *)(v742 + 8 * v137 - 8)
              && !(unsigned int)sub_141923B40(v117, *(_QWORD *)(v742 + 8 * v137 - 16), v4) )
            {
              goto LABEL_132;
            }
            v138 = _R15D - 1;
            LOWORD(v138) = _R15D & (_R15D - 1);
            v101 = (_WORD)v138 == 0;
            _R15D = v138;
            v133 = v136;
            v89 = v90 + 192;
            if ( v101 )
              goto LABEL_140;
          }
        }
      }
      if ( v4 == 6 )
      {
        v128 = *(_DWORD *)v117 ^ 0x616D6961;
        _RCX = v128 | *(_WORD *)(v117 + 4) ^ 0x3169u;
        if ( !(v128 | *(_WORD *)(v117 + 4) ^ 0x3169) )
          goto LABEL_134;
      }
      else if ( v4 == 19
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A54ABD + 3)),
                      _mm_loadu_si128((const __m128i *)(v117 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v117),
                      _mm_loadu_si128((const __m128i *)&xmmword_141A54ABD)))) == 0xFFFF )
      {
        goto LABEL_134;
      }
    }
LABEL_132:
    v89 = v90 + 192;
    if ( !(_BYTE)v730 )
      continue;
LABEL_142:
    if ( *(_QWORD *)(v90 + 80) == -1 )
    {
      *(_QWORD *)v630 = v90 + 32;
      *(_QWORD *)&v630[8] = sub_1400015F0;
      v767 = 1;
      sub_1416DAFA0(&v687[8], &unk_141A59CF3, v630);
LABEL_183:
      v18 = *(_QWORD *)&v687[8];
      v10 = *(__m128i *)&v687[16];
      v750 = *(_QWORD *)&v687[40];
      v762 = *(_QWORD *)&v687[32];
      mm = *(_QWORD *)&v687[48];
      v683 = *(__m128i *)&v687[56];
      v684 = *(_QWORD *)&v687[72];
      v646 = _mm_loadu_si128((const __m128i *)&v687[80]);
      v17 = 10;
LABEL_186:
      v198 = *(_QWORD *)&v732[8];
      if ( *(_QWORD *)&v732[8] )
      {
        v199 = *(_QWORD *)&v732[24];
        if ( *(_QWORD *)&v732[24] )
        {
          v4 = *(_QWORD *)v732;
          v200 = (const __m128i *)(*(_QWORD *)v732 + 16LL);
          _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v732));
          do
          {
            if ( !(_WORD)_R12D )
            {
              do
              {
                v202 = _mm_load_si128(v200);
                v4 -= 512LL;
                ++v200;
                _R12D = _mm_movemask_epi8(v202) ^ 0xFFFF;
              }
              while ( !_R12D );
            }
            __asm { tzcnt   ecx, r12d }
            v204 = v4 - (unsigned int)(32 * _ECX);
            v205 = *(_QWORD *)(v204 - 32);
            if ( v205 )
              sub_140001660(*(_QWORD *)(v204 - 24), v205, 1);
            --v199;
            _R12D &= _R12D - 1;
          }
          while ( v199 );
        }
        v206 = 32 * v198;
        v207 = 33 * v198 + 49;
        if ( v207 )
          sub_140001660(*(_QWORD *)v732 - v206 - 32, v207, 16);
      }
      goto LABEL_196;
    }
    v730 = v89;
    v139 = *(_QWORD *)(v90 + 88);
    v140 = *(_QWORD *)(v90 + 96);
    v767 = 1;
    sub_140A934F0(v687, v139, v140);
    if ( *(_QWORD *)&v687[32] == -1 )
    {
      v18 = *(_QWORD *)v687;
      v17 = 2;
      goto LABEL_186;
    }
    if ( *(_DWORD *)&v687[32] == 2 || !*(_QWORD *)v687 )
    {
      if ( *(_DWORD *)&v687[32] == 2 )
      {
        *(__m128i *)v630 = _mm_loadu_si128((const __m128i *)(v90 + 88));
        *(_QWORD *)v687 = v90 + 32;
        *(_QWORD *)&v687[8] = sub_1400015F0;
        *(_QWORD *)&v687[16] = v630;
        *(_QWORD *)&v687[24] = sub_1416CE600;
        v767 = 1;
        sub_1416DAFA0(&v616, &unk_141A6273E, v687);
        v18 = v616;
        v17 = 10;
        v10 = _mm_loadu_si128(&v617);
        goto LABEL_186;
      }
    }
    else
    {
      sub_140001660(*(_QWORD *)&v687[8], *(_QWORD *)v687, 1);
    }
    if ( *(_QWORD *)&v716[8] )
    {
      v767 = 1;
      v141 = sub_1406CFD80(&v716[16], v90 + 80);
      _RAX = v141 >> 57;
      v4 = v715.m128i_u64[1];
      v143 = v715.m128i_i64[0];
      v144 = _mm_cvtsi32_si128(v141 >> 57);
      v145 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v144, v144), 0), 68);
      for ( n = 0; ; n += 16 )
      {
        v147 = v4 & v141;
        v148 = _mm_loadu_si128((const __m128i *)(v143 + v147));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v148, v145));
        if ( _R15D )
          break;
LABEL_153:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v148, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_155;
        v141 = n + v147 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r15d }
        v150 = -56LL * (v4 & (v147 + _RAX));
        v151 = *(_QWORD *)(v90 + 88);
        v152 = *(_QWORD *)(v90 + 96);
        v153 = *(_QWORD *)(v143 - 56 * (v4 & (v147 + _RAX)) - 48);
        v154 = *(_QWORD *)(v143 - 56 * (v4 & (v147 + _RAX)) - 40);
        v767 = 1;
        if ( (unsigned __int8)sub_140222930(v151, v152, v153, v154) )
          break;
        _RAX = (unsigned int)(_R15D - 1);
        LOWORD(_RAX) = _R15D & (_R15D - 1);
        _R15D = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_153;
      }
      *(_QWORD *)v630 = v150 + v143 - 24;
      *(_QWORD *)v687 = v90 + 32;
      *(_QWORD *)&v687[8] = sub_1400015F0;
      *(_QWORD *)&v687[16] = v630;
      *(_QWORD *)&v687[24] = sub_14021E5E0;
      v767 = 1;
      sub_1416DAFA0(&v614, &unk_141A6277F, v687);
      v18 = v614;
      v10 = v615;
      v17 = 10;
      goto LABEL_186;
    }
LABEL_155:
    if ( !v659.m256i_i64[3] )
    {
LABEL_182:
      *(_QWORD *)v630 = v90 + 32;
      *(_QWORD *)&v630[8] = sub_1400015F0;
      v767 = 1;
      sub_1416DAFA0(&v687[8], &unk_141A59D2F, v630);
      goto LABEL_183;
    }
    v767 = 1;
    v155 = sub_1406CFD80(&v660, v90 + 80);
    _RAX = v155 >> 57;
    v4 = v659.m256i_u64[1];
    v157 = v659.m256i_i64[0];
    v158 = _mm_cvtsi32_si128(v155 >> 57);
    v159 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v158, v158), 0), 68);
    for ( ii = 0; ; ii += 16 )
    {
      v161 = v4 & v155;
      v162 = _mm_loadu_si128((const __m128i *)(v157 + v161));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v162, v159));
      if ( _R15D )
        break;
LABEL_160:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v162, (__m128i)-1LL));
      if ( (_DWORD)_RAX )
        goto LABEL_182;
      v155 = ii + v161 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   eax, r15d }
      v164 = -376LL * (v4 & (v161 + _RAX));
      v165 = *(_QWORD *)(v90 + 88);
      v166 = *(_QWORD *)(v90 + 96);
      v167 = *(_QWORD *)(v157 - 376 * (v4 & (v161 + _RAX)) - 368);
      v168 = *(_QWORD *)(v157 - 376 * (v4 & (v161 + _RAX)) - 360);
      v767 = 1;
      if ( (unsigned __int8)sub_140222930(v165, v166, v167, v168) )
        break;
      _RAX = (unsigned int)(_R15D - 1);
      LOWORD(_RAX) = _R15D & (_R15D - 1);
      _R15D = _RAX;
      if ( !(_WORD)_RAX )
        goto LABEL_160;
    }
    v169 = v164 + v157;
    v170 = *(_QWORD *)(v169 - 296);
    if ( v170 != *(_QWORD *)(v90 + 48)
      || (unsigned int)sub_141923B40(*(_QWORD *)(v169 - 304), *(_QWORD *)(v90 + 40), v170) )
    {
      *(_QWORD *)v687 = v90 + 32;
      *(_QWORD *)&v687[8] = sub_1400015F0;
      *(_QWORD *)&v687[16] = v169 - 312;
      *(_QWORD *)&v687[24] = sub_1400015F0;
      v767 = 1;
      sub_1416DAFA0(&v612, &unk_141A6287F, v687);
      v18 = v612;
      v17 = 9;
      v10 = v613;
      goto LABEL_186;
    }
    v721 = v90 + 32;
    if ( !v726.m256i_i64[3] )
    {
LABEL_184:
      v767 = 1;
      sub_14196B590(aNoEntryFoundFo, 22, &off_141A627C8);
    }
    v767 = 1;
    v171 = sub_1406CFD80(v727, v90 + 80);
    _RAX = v171 >> 57;
    v173 = v726.m256i_i64[1];
    v174 = v726.m256i_i64[0];
    v175 = _mm_cvtsi32_si128(v171 >> 57);
    v176 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v175, v175), 0), 68);
    for ( jj = 0; ; jj += 16 )
    {
      v178 = v173 & v171;
      v179 = _mm_loadu_si128((const __m128i *)(v174 + v178));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v179, v176));
      if ( _R15D )
        break;
LABEL_170:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v179, (__m128i)-1LL));
      if ( (_DWORD)_RAX )
        goto LABEL_184;
      v171 = jj + v178 + 16;
    }
    v744 = jj;
    while ( 1 )
    {
      __asm { tzcnt   eax, r15d }
      v181 = v173;
      v4 = -56LL * (v173 & (v178 + _RAX));
      v182 = *(_QWORD *)(v90 + 88);
      v183 = *(_QWORD *)(v90 + 96);
      v184 = *(_QWORD *)(v174 + v4 - 48);
      v185 = *(_QWORD *)(v174 + v4 - 40);
      v767 = 1;
      if ( (unsigned __int8)sub_140222930(v182, v183, v184, v185) )
        break;
      _RAX = (unsigned int)(_R15D - 1);
      LOWORD(_RAX) = _R15D & (_R15D - 1);
      _R15D = _RAX;
      jj = v744;
      v173 = v181;
      if ( !(_WORD)_RAX )
        goto LABEL_170;
    }
    v186 = v4 + v174;
    v187 = *(unsigned __int64 **)(v186 - 16);
    v188 = &v187[*(_QWORD *)(v186 - 8)];
    while ( v187 != v188 )
    {
      v189 = *v187;
      if ( *v187 >= v760 )
      {
        v767 = 1;
        sub_14196B673(v189, v760, &off_141A59D78);
      }
      v190 = 192 * v189;
      v191 = *(_QWORD *)(v750 + 192 * v189 + 64);
      v192 = *(_QWORD *)(v750 + v190 + 72);
      v767 = 1;
      ++v187;
      if ( !(unsigned __int8)sub_1407DF9B0(v191, v192) )
        goto LABEL_185;
    }
    v193 = *(_QWORD *)(v169 - 280);
    v194 = *(_QWORD *)(v169 - 272);
    v767 = 1;
    if ( !(unsigned __int8)sub_1407DF9B0(v193, v194)
      || (v195 = *(_QWORD *)(v169 - 208),
          v196 = *(_QWORD *)(v169 - 200),
          v767 = 1,
          !(unsigned __int8)sub_1407DF9B0(v195, v196)) )
    {
LABEL_185:
      *(_QWORD *)v687 = v721;
      *(_QWORD *)&v687[8] = sub_1400015F0;
      v767 = 1;
      sub_1416DAFA0(&v610, &unk_141A627E0, v687);
      v18 = v610;
      v17 = 10;
      v10 = v611;
      goto LABEL_186;
    }
    v767 = 1;
    sub_14022C3D0(v630, v90 + 80);
    v197 = *(_BYTE *)(v90 + 104);
    *(_QWORD *)&v687[16] = *(_QWORD *)&v630[16];
    *(__m128i *)v687 = _mm_loadu_si128((const __m128i *)v630);
    v687[24] = v197;
    v767 = 1;
    sub_14086D5C0(v732, v687);
    v89 = v730;
  }
  v317 = v743;
  if ( *v743 == -1 )
  {
    v647.m128i_i64[0] = -1;
    v319 = -1;
  }
  else
  {
    v318 = v743[1];
    v4 = v743[2];
    sub_1401E7560((unsigned int)v687, v4, 0, 1, 1);
    v319 = *(_QWORD *)&v687[8];
    if ( v687[0] )
    {
      v767 = 1;
      sub_14196B2DB(*(_QWORD *)&v687[8], *(_QWORD *)&v687[16]);
    }
    v320 = *(_QWORD *)&v687[16];
    if ( v4 )
      sub_1419234B0(*(_QWORD *)&v687[16], v318, v4);
    v647.m128i_i64[0] = v319;
    v647.m128i_i64[1] = v320;
    v648 = v4;
  }
  if ( !*(_QWORD *)&v732[24] )
  {
    v684 = v648;
    v683 = _mm_loadu_si128(&v647);
    v10 = (__m128i)8u;
    v17 = -1;
    v750 = 8;
    v762 = 0;
    mm = 0;
    v18 = 0;
    goto LABEL_186;
  }
  v4 = *((unsigned __int8 *)v317 + 168);
  if ( !(_BYTE)v4 )
  {
    nullsub_1(_RCX, *((_QWORD *)&_RAX + 1));
    v18 = 156;
    v416 = sub_140001650(156, 1);
    if ( !v416 )
    {
      v749 = 1;
      sub_14196B2DB(1, 156);
    }
    v417 = (__m128d)(unsigned __int64)v416;
    sub_1419234B0(v416, aChatgpt_5, 156);
    v10 = (__m128i)_mm_shuffle_pd(v417, (__m128d)xmmword_141A572D0, 2);
    v17 = 10;
LABEL_666:
    if ( v319 != -1 && v319 )
      sub_140001660(v647.m128i_i64[1], v319, 1);
    if ( !(_BYTE)v4 )
      goto LABEL_186;
LABEL_196:
    sub_14018E2D0(&v715);
    sub_14018E5B0(&v659);
    sub_14018E1B0(&v726);
    v208 = v623.m128i_i64[0];
    v209 = v760;
    if ( v760 )
    {
      v4 = v623.m128i_i64[0];
      do
      {
        sub_1401B0EA0(v4);
        v4 += 192LL;
        --v209;
      }
      while ( v209 );
    }
    HIDWORD(_RAX) = HIDWORD(v672);
    if ( v672 )
      sub_140001660(v208, 192LL * (_QWORD)v672, 8);
    v19 = v10;
    v21 = v678.m128i_i64[1];
    if ( !v678.m128i_i64[1] )
    {
LABEL_211:
      v217 = v718.m128i_i64[1];
      if ( v718.m128i_i64[1] )
      {
        v218 = v719.m256i_i64[1];
        if ( v719.m256i_i64[1] )
        {
          v4 = v718.m128i_i64[0];
          v219 = (const __m128i *)(v718.m128i_i64[0] + 16);
          _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v718.m128i_i64[0]));
          do
          {
            if ( !(_WORD)_R12D )
            {
              do
              {
                v221 = _mm_load_si128(v219);
                v4 -= 384LL;
                ++v219;
                _R12D = _mm_movemask_epi8(v221) ^ 0xFFFF;
              }
              while ( !_R12D );
            }
            __asm { tzcnt   eax, r12d }
            v222 = -3LL * _RAX;
            v223 = *(_QWORD *)(v4 + 8 * v222 - 24);
            if ( v223 )
              sub_140001660(*(_QWORD *)(v4 + 8 * v222 - 16), v223, 1);
            --v218;
            _RAX = _R12D & (unsigned int)(_R12D - 1);
            _R12D &= _R12D - 1;
          }
          while ( v218 );
        }
        v224 = (24 * v217 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v225 = v224 + v217 + 17;
        if ( v225 )
          sub_140001660(v718.m128i_i64[0] - v224, v225, 16);
      }
      if ( v17 != -1 )
      {
        v621 = v684;
        v620 = v683;
        v226 = v707;
        v707[5] = v646;
        v226[4].m128i_i64[1] = v621;
        *(__m128i *)((char *)v226 + 56) = _mm_load_si128(&v620);
        v226->m128i_i64[0] = v17;
        v226->m128i_i64[1] = v18;
        v226[1] = v19;
        v226[2].m128i_i64[0] = v762;
        v226[2].m128i_i64[1] = v750;
        result = mm;
        v226[3].m128i_i64[0] = mm;
        return result;
      }
      v228 = v19;
      goto LABEL_224;
    }
LABEL_202:
    v210 = v679.m256i_i64[1];
    if ( v679.m256i_i64[1] )
    {
      v4 = v678.m128i_i64[0];
      v211 = (const __m128i *)(v678.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v678.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v213 = _mm_load_si128(v211);
            v4 -= 384LL;
            ++v211;
            _R12D = _mm_movemask_epi8(v213) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v214 = -3LL * _RAX;
        v215 = *(_QWORD *)(v4 + 8 * v214 - 24);
        if ( v215 )
          sub_140001660(*(_QWORD *)(v4 + 8 * v214 - 16), v215, 1);
        --v210;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v210 );
    }
    _RAX = (24 * v21 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v216 = _RAX + v21 + 17;
    if ( v216 )
      sub_140001660(v678.m128i_i64[0] - _RAX, v216, 16);
    goto LABEL_211;
  }
  LOBYTE(v649) = *((_BYTE *)v317 + 168);
  v749 = 1;
  sub_140A2E010(&v709, v654);
  v414 = _mm_load_si128(*(const __m128i **)v732);
  if ( *(_QWORD *)&v732[8] )
  {
    v412 = 33LL * *(_QWORD *)&v732[8] + 49;
    v413 = *(_QWORD *)v732 - 32LL * *(_QWORD *)&v732[8] - 32;
    v415 = 16;
  }
  else
  {
    v415 = 0;
  }
  *(_QWORD *)v687 = v415;
  *(_QWORD *)&v687[8] = v412;
  *(_QWORD *)&v687[16] = v413;
  *(_QWORD *)&v687[24] = *(_QWORD *)v732;
  *(_QWORD *)&v687[32] = *(_QWORD *)v732 + 16LL;
  *(_QWORD *)&v687[40] = *(_QWORD *)v732 + *(_QWORD *)&v732[8] + 1LL;
  *(_WORD *)&v687[48] = ~(unsigned __int16)_mm_movemask_epi8(v414);
  *(_QWORD *)&v687[56] = *(_QWORD *)&v732[24];
  sub_14020E320(&v627, v687);
  v449 = v628;
  v753 = 1;
  v450 = v629;
  sub_140908CB0(v628);
  sub_1401E7560((unsigned int)v687, v450, 0, 8, 400);
  if ( *(_DWORD *)v687 == 1 )
  {
    v753 = 1;
    sub_14196B2DB(*(_QWORD *)&v687[8], *(_QWORD *)&v687[16]);
  }
  v685 = *(_QWORD *)&v687[8];
  v686 = (__m128i)*(unsigned __int64 *)&v687[16];
  v669 = 0;
  v670 = 8;
  v671 = 0;
  v712.m128i_i64[0] = v449;
  v712.m128i_i64[1] = v449;
  *(_QWORD *)&v713[0] = v627;
  *((_QWORD *)&v713[0] + 1) = v449 + 32 * v450;
  v4 = (unsigned __int64)&v717[8];
  v17 = (__int64)&v688;
  v737 = *((_QWORD *)&v713[0] + 1);
  if ( v449 != *((_QWORD *)&v713[0] + 1) )
  {
    while ( 1 )
    {
      v451 = v449 + 32;
      v712.m128i_i64[1] = v449 + 32;
      v452 = *(_QWORD *)v449;
      v682 = *(_QWORD *)(v449 + 24);
      v681 = *(_OWORD *)(v449 + 8);
      if ( v452 == -1 )
        goto LABEL_656;
      v723 = v452;
      *(_QWORD *)v717 = v452;
      *(_QWORD *)&v717[24] = v682;
      *(_OWORD *)&v717[8] = v681;
      sub_140844DA0(v687, &v659, v717);
      v453 = *(_QWORD *)v687;
      if ( *(_QWORD *)v687 == -1 )
        break;
      v650 = v451;
      v454 = *(_OWORD *)&v687[40];
      v455 = *(_QWORD *)&v687[56];
      v676 = *(__m128i *)&v687[64];
      *(_QWORD *)&v677 = *(_QWORD *)&v687[80];
      v724 = *(__m128i *)&v687[88];
      sub_1419234B0(&v631, &v688, 240);
      v658 = v677;
      v657 = _mm_load_si128(&v676);
      v626 = v724;
      *(_OWORD *)&v630[8] = *(_OWORD *)&v687[8];
      *(_OWORD *)&v630[24] = *(_OWORD *)&v687[24];
      *(_OWORD *)&v630[40] = v454;
      *(_QWORD *)&v630[56] = v455;
      *(_QWORD *)&v630[80] = v677;
      *(__m128i *)&v630[64] = v657;
      *(__m128i *)&v630[88] = v724;
      *(_QWORD *)v630 = v453;
      if ( !v726.m256i_i64[3] )
      {
LABEL_660:
        v766 = 1;
        sub_14092F660(v687);
        v18 = *(_QWORD *)&v687[8];
        v17 = *(_QWORD *)v687;
        v10 = _mm_loadu_si128((const __m128i *)&v687[16]);
        v750 = *(_QWORD *)&v687[40];
        v762 = *(_QWORD *)&v687[32];
        mm = *(_QWORD *)&v687[48];
        v683 = *(__m128i *)&v687[56];
        v684 = *(_QWORD *)&v687[72];
        v646 = _mm_loadu_si128((const __m128i *)&v687[80]);
        goto LABEL_661;
      }
      v766 = 1;
      v456 = sub_1406CFD80(v727, v717);
      _RAX = v456 >> 57;
      v458 = v726.m256i_i64[1];
      v459 = v726.m256i_i64[0];
      v460 = _mm_cvtsi32_si128(v456 >> 57);
      v461 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v460, v460), 0), 68);
      for ( kk = 0; ; kk += 16 )
      {
        v463 = v458 & v456;
        v464 = _mm_loadu_si128((const __m128i *)(v459 + v463));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v464, v461));
        if ( _R15D )
          break;
LABEL_554:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v464, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_660;
        v456 = kk + v463 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r15d }
        v466 = -56LL * (v458 & (v463 + _RAX));
        v467 = *(_QWORD *)(v459 - 56 * (v458 & (v463 + _RAX)) - 48);
        v468 = v459;
        v469 = *(_QWORD *)(v459 - 56 * (v458 & (v463 + _RAX)) - 40);
        v766 = 1;
        if ( (unsigned __int8)sub_140222930(*(_QWORD *)&v717[8], *(_QWORD *)&v717[16], v467, v469) )
          break;
        _RAX = (unsigned int)(_R15D - 1);
        LOWORD(_RAX) = _R15D & (_R15D - 1);
        _R15D = _RAX;
        v459 = v468;
        if ( !(_WORD)_RAX )
          goto LABEL_554;
      }
      v470 = v466 + v468;
      v471 = *(unsigned __int64 **)(v470 - 16);
      v762 = v470;
      v472 = *(_QWORD *)(v470 - 8);
      v473 = &v471[v472];
      v474 = 8 * v472;
      v475 = v623.m128i_i64[0];
      v476 = *(_QWORD *)&v630[40];
      v477 = *(_QWORD *)&v630[48];
      v478 = 0;
      while ( v474 != v478 )
      {
        v479 = v471[v478 / 8];
        if ( v479 >= v760 )
        {
          v766 = 1;
          sub_14196B673(v479, v760, &off_141A59DE8);
        }
        if ( *(_QWORD *)(v475 + 192 * v479 + 48) == v477 )
        {
          v478 += 8LL;
          if ( !(unsigned int)sub_141923B40(*(_QWORD *)(v475 + 192 * v479 + 40), v476, v477) )
            continue;
        }
        *(_OWORD *)v664 = *(_OWORD *)&v717[8];
        *(_QWORD *)v687 = v664;
        *(_QWORD *)&v687[8] = sub_1416CE600;
        v766 = 1;
        sub_1416DAFA0(&v667, &unk_141A629E0, v687);
        v18 = v667;
        v17 = 9;
        v10 = v668;
        goto LABEL_661;
      }
      v480 = v709.m128i_i64[1];
      v481 = v710;
      do
      {
        v482 = v471;
        if ( v471 == v473 )
          break;
        v476 = *v471;
        if ( *v471 >= v760 )
        {
          v766 = 1;
          sub_14196B673(v476, v760, &off_141A59E00);
        }
        v483 = *(_QWORD *)(v475 + 192 * v476 + 8);
        v484 = *(_QWORD *)(v475 + 192 * v476 + 16);
        v766 = 1;
        ++v471;
      }
      while ( !(unsigned __int8)sub_140222930(v483, v484, v480, v481) );
      if ( !*(_QWORD *)(v762 - 8) )
      {
        v766 = 1;
        sub_14196B673(0, 0, &off_141A62968);
      }
      if ( v482 == v473 )
        v476 = **(_QWORD **)(v762 - 16);
      v485 = v760;
      if ( v476 >= v760 )
      {
        v766 = 1;
        sub_14196B673(v476, v760, &off_141A62980);
      }
      v486 = (_QWORD *)(v475 + 192 * v476);
      v724.m128i_i64[0] = 0;
      v724.m128i_i64[1] = 8;
      v725 = 0;
      v101 = v486[17] == -1;
      v750 = (__int64)v486;
      if ( v101 )
      {
        v490 = 0;
      }
      else
      {
        v487 = v486[18];
        v488 = v486[19];
        v764 = 1;
        v763 = 1;
        sub_141939660(&v724);
        v489 = v724.m128i_i64[1];
        *(_QWORD *)v724.m128i_i64[1] = v487;
        *(_QWORD *)(v489 + 8) = v488;
        v725 = 1;
        v490 = 1;
        v485 = v760;
      }
      v491 = *(unsigned __int64 **)(v762 - 16);
      v492 = &v491[*(_QWORD *)(v762 - 8)];
      while ( v491 != v492 )
      {
        v493 = *v491++;
        if ( v493 != v476 )
        {
          if ( v493 >= v485 )
          {
            v764 = 1;
            v763 = 1;
            sub_14196B673(v493, v485, &off_141A62998);
          }
          if ( *(_QWORD *)(v475 + 192 * v493 + 136) != -1 )
          {
            v494 = v475 + 192 * v493;
            v495 = *(_QWORD *)(v494 + 144);
            v496 = *(_QWORD *)(v494 + 152);
            if ( v490 == v724.m128i_i64[0] )
            {
              v764 = 1;
              v763 = 1;
              sub_141939660(&v724);
            }
            v497 = v724.m128i_i64[1];
            v498 = 16 * v490;
            *(_QWORD *)(v724.m128i_i64[1] + v498) = v495;
            *(_QWORD *)(v497 + v498 + 8) = v496;
            v725 = ++v490;
            v485 = v760;
          }
        }
      }
      v499 = v724.m128i_i64[0];
      if ( v636 != -1 )
      {
        v500 = v637;
        v501 = v638;
        if ( v490 == v724.m128i_i64[0] )
        {
          v764 = 1;
          v763 = 1;
          sub_141939660(&v724);
        }
        v502 = v724.m128i_i64[1];
        v503 = 16 * v490;
        *(_QWORD *)(v724.m128i_i64[1] + v503) = v500;
        *(_QWORD *)(v502 + v503 + 8) = v501;
        v725 = ++v490;
        v499 = v724.m128i_i64[0];
      }
      if ( *(_QWORD *)&v630[80] != -1 )
      {
        v504 = *(_QWORD *)&v630[88];
        v505 = *(_QWORD *)&v630[96];
        if ( v490 == v499 )
        {
          v764 = 1;
          v763 = 1;
          sub_141939660(&v724);
        }
        v506 = v724.m128i_i64[1];
        v507 = 16 * v490;
        *(_QWORD *)(v724.m128i_i64[1] + v507) = v504;
        *(_QWORD *)(v506 + v507 + 8) = v505;
        v725 = ++v490;
        v499 = v724.m128i_i64[0];
      }
      *(_QWORD *)v687 = v724.m128i_i64[1];
      *(_QWORD *)&v687[16] = v499;
      *(_QWORD *)&v687[8] = v724.m128i_i64[1];
      *(_QWORD *)&v687[24] = v724.m128i_i64[1] + 16 * v490;
      v736 = sub_1401D0330(v687, v743);
      v509 = v645;
      if ( v736 )
      {
        v510 = v508;
        sub_1401E7560((unsigned int)v664, v508, 0, 1, 1);
        v511 = *(_QWORD *)&v664[8];
        if ( v664[0] )
          sub_14196B2DB(*(_QWORD *)&v664[8], *(_QWORD *)&v664[16]);
        v512 = v743;
        *((_QWORD *)&v645 + 1) = *(_QWORD *)&v664[16];
        if ( v510 )
        {
          sub_1419234B0(*(_QWORD *)&v664[16], v736, v510);
          v509 = v510;
        }
        else
        {
          v509 = 0;
        }
      }
      else
      {
        v511 = -1;
        v512 = v743;
      }
      if ( *(_QWORD *)&v687[16] )
      {
        v513 = v509;
        sub_140001660(*(_QWORD *)v687, 16LL * *(_QWORD *)&v687[16], 8);
        v509 = v513;
      }
      *(_QWORD *)&v645 = v509;
      if ( v511 == -1 )
      {
        if ( v647.m128i_i64[0] == -1
          || (v764 = 0, v763 = 1, sub_1416DB410(v664, &v647), v511 = *(_QWORD *)v664, *(_QWORD *)v664 == -1) )
        {
          v676.m128i_i64[0] = (__int64)&v630[32];
          v676.m128i_i64[1] = (__int64)sub_1400015F0;
          v764 = 0;
          v763 = 1;
          sub_1416DAFA0(&v687[8], &unk_141A59E18, &v676);
          v18 = *(_QWORD *)&v687[8];
          v10 = *(__m128i *)&v687[16];
          v750 = *(_QWORD *)&v687[40];
          v762 = *(_QWORD *)&v687[32];
          mm = *(_QWORD *)&v687[48];
          v683 = *(__m128i *)&v687[56];
          v684 = *(_QWORD *)&v687[72];
          v646 = *(__m128i *)&v687[80];
          goto LABEL_754;
        }
        v514 = *(_QWORD *)&v664[8];
        v509 = *(_QWORD *)&v664[16];
        v512 = v743;
      }
      else
      {
        v514 = *((_QWORD *)&v645 + 1);
      }
      v674.m128i_i64[0] = v511;
      v674.m128i_i64[1] = v514;
      v675 = v509;
      if ( !v736 )
        goto LABEL_625;
      *(_QWORD *)v664 = 0;
      *(_QWORD *)&v664[8] = 8;
      *(_QWORD *)&v664[16] = 0;
      if ( *(_QWORD *)(v750 + 160) == -1 )
      {
        v518 = 0;
      }
      else
      {
        v515 = *(_QWORD *)(v750 + 168);
        v516 = *(_QWORD *)(v750 + 176);
        sub_141939660(v664);
        v517 = *(_QWORD *)&v664[8];
        **(_QWORD **)&v664[8] = v515;
        *(_QWORD *)(v517 + 8) = v516;
        *(_QWORD *)&v664[16] = 1;
        v518 = 1;
      }
      v519 = *(unsigned __int64 **)(v762 - 16);
      v520 = &v519[*(_QWORD *)(v762 - 8)];
      while ( v519 != v520 )
      {
        v521 = *v519++;
        if ( v521 != v476 )
        {
          if ( v521 >= v760 )
            sub_14196B673(v521, v760, &off_141A629B0);
          if ( *(_QWORD *)(v475 + 192 * v521 + 160) != -1 )
          {
            v522 = v475 + 192 * v521;
            v523 = *(_QWORD *)(v522 + 168);
            v524 = *(_QWORD *)(v522 + 176);
            if ( v518 == *(_QWORD *)v664 )
              sub_141939660(v664);
            v525 = *(_QWORD *)&v664[8];
            v526 = 16 * v518;
            *(_QWORD *)(*(_QWORD *)&v664[8] + v526) = v523;
            *(_QWORD *)(v525 + v526 + 8) = v524;
            *(_QWORD *)&v664[16] = ++v518;
          }
        }
      }
      v527 = *(_QWORD *)v664;
      if ( v639 != -1 )
      {
        v528 = v640;
        v529 = v641;
        if ( v518 == *(_QWORD *)v664 )
          sub_141939660(v664);
        v530 = *(_QWORD *)&v664[8];
        v531 = 16 * v518;
        *(_QWORD *)(*(_QWORD *)&v664[8] + v531) = v528;
        *(_QWORD *)(v530 + v531 + 8) = v529;
        *(_QWORD *)&v664[16] = ++v518;
        v527 = *(_QWORD *)v664;
      }
      if ( v631 != (__int64 (__fastcall **)())-1LL )
      {
        v532 = v632;
        v533 = v633;
        if ( v518 == v527 )
          sub_141939660(v664);
        v534 = *(_QWORD *)&v664[8];
        v535 = 16 * v518;
        *(_QWORD *)(*(_QWORD *)&v664[8] + v535) = v532;
        *(_QWORD *)(v534 + v535 + 8) = v533;
        *(_QWORD *)&v664[16] = ++v518;
        v527 = *(_QWORD *)v664;
      }
      *(_QWORD *)v687 = *(_QWORD *)&v664[8];
      *(_QWORD *)&v687[16] = v527;
      *(_QWORD *)&v687[8] = *(_QWORD *)&v664[8];
      *(_QWORD *)&v687[24] = *(_QWORD *)&v664[8] + 16 * v518;
      v512 = v743;
      v536 = sub_1401D04C0(v687, v743, &v674);
      v538 = v537;
      if ( *(_QWORD *)&v687[16] )
        sub_140001660(*(_QWORD *)v687, 16LL * *(_QWORD *)&v687[16], 8);
      if ( !v536 )
      {
LABEL_625:
        v761 = 1;
        v536 = sub_140D29A20(v512);
        v538 = v539;
        LODWORD(v512) = (_DWORD)v743;
      }
      if ( !v536
        || !v538
        || (v761 = 1, !(unsigned __int8)sub_140D29830((_DWORD)v512, v674.m128i_i32[2], v675, v536, v538)) )
      {
        *(_QWORD *)v664 = &v630[32];
        *(_QWORD *)&v664[8] = sub_1400015F0;
        *(_QWORD *)&v664[16] = &v674;
        *(_QWORD *)&v664[24] = sub_1400015F0;
        v761 = 1;
        sub_1416DAFA0(&v687[8], &unk_141A59E77, v664);
        v18 = *(_QWORD *)&v687[8];
        v10 = *(__m128i *)&v687[16];
        v750 = *(_QWORD *)&v687[40];
        v762 = *(_QWORD *)&v687[32];
        mm = *(_QWORD *)&v687[48];
        v683 = *(__m128i *)&v687[56];
        v684 = *(_QWORD *)&v687[72];
        v646 = *(__m128i *)&v687[80];
        if ( v674.m128i_i64[0] )
        {
          sub_140001660(v674.m128i_i64[1], v674.m128i_i64[0], 1);
          v17 = 10;
          goto LABEL_661;
        }
LABEL_754:
        v17 = 10;
LABEL_661:
        v562 = v723;
        sub_1400393B0(v630);
        if ( v562 )
LABEL_662:
          sub_140001660(*(_QWORD *)&v717[8], v562, 1);
LABEL_663:
        sub_140001000(&v712, v563);
        sub_140902E50(&v669);
        v753 = 0;
        sub_140902DC0(&v685);
        if ( v709.m128i_i64[0] )
          sub_140001660(v709.m128i_i64[1], v709.m128i_i64[0], 1);
        v319 = v647.m128i_i64[0];
        v4 = (unsigned __int8)v649;
        goto LABEL_666;
      }
      sub_1401E7560((unsigned int)v687, v538, 0, 1, 1);
      v540 = *(_QWORD *)&v687[8];
      if ( v687[0] )
      {
        v761 = 1;
        sub_14196B2DB(*(_QWORD *)&v687[8], *(_QWORD *)&v687[16]);
      }
      v541 = *(_QWORD *)&v687[16];
      sub_1419234B0(*(_QWORD *)&v687[16], v536, v538);
      v651.m128i_i64[0] = v540;
      v651.m128i_i64[1] = v541;
      v652 = v538;
      v543 = *(unsigned __int64 **)(v762 - 16);
      *((_QWORD *)&v731 + 1) = &v543[*(_QWORD *)(v762 - 8)];
      v655 = *(_QWORD *)&v717[8];
      v762 = *(_QWORD *)&v717[16];
      v544 = v717[24];
      v17 = (__int64)&v688;
      while ( 1 )
      {
        v750 = (__int64)v543;
        if ( v543 == *((unsigned __int64 **)&v731 + 1) )
          break;
        v545 = *v543;
        if ( *v543 >= v760 )
          sub_14196B673(v545, v760, &off_141A629C8);
        v546 = 192 * v545;
        mm = *(_QWORD *)(v475 + 192 * v545 + 16);
        v547 = mm;
        if ( mm )
        {
          v548 = *(_QWORD *)(v475 + v546 + 8);
          nullsub_1(v545, v542);
          v549 = sub_140001650(v547, 1);
          if ( !v549 )
            sub_14196B2DB(1, v547);
          v735 = v549;
          sub_1419234B0(v549, v548, v547);
        }
        else
        {
          v735 = 1;
        }
        v550 = v475 + v546;
        v551 = *(_BYTE *)(v550 + 24);
        sub_1416DB410(&v657, v550 + 32);
        v554 = v762;
        if ( v762 )
        {
          nullsub_1(v553, v552);
          v555 = sub_140001650(v554, 1);
          if ( !v555 )
            sub_14196B2DB(1, v554);
          v721 = v555;
          sub_1419234B0(v555, v655, v554);
        }
        else
        {
          v721 = 1;
        }
        v556 = -1;
        v557 = -1;
        if ( *(_QWORD *)(v550 + 112) != -1 )
        {
          sub_1416DB410(v664, v550 + 112);
          *(_QWORD *)&v731 = *(_QWORD *)&v664[8];
          v557 = *(_QWORD *)v664;
          v643 = *(__int64 **)&v664[16];
        }
        v742 = v557;
        if ( *(_QWORD *)(v550 + 136) != -1 )
        {
          sub_1416DB410(v664, v550 + 136);
          v734 = *(_QWORD *)&v664[8];
          v556 = *(_QWORD *)v664;
          v644 = *(_QWORD *)&v664[16];
        }
        v101 = *(_QWORD *)(v550 + 160) == -1;
        v730 = v556;
        if ( v101 )
        {
          v744 = -1;
        }
        else
        {
          sub_1416DB410(v664, v550 + 160);
          v673 = *(_QWORD **)&v664[8];
          v744 = *(_QWORD *)v664;
          v722 = *(_QWORD *)&v664[16];
        }
        v558 = *(_BYTE *)(v550 + 184);
        v559 = *(_BYTE *)(v550 + 185);
        sub_1416DB410(&v676, &v674);
        sub_1416DB410(v664, &v651);
        *(_QWORD *)v687 = mm;
        *(_QWORD *)&v687[8] = v735;
        *(_QWORD *)&v687[16] = mm;
        v687[24] = v551;
        *(_QWORD *)&v687[48] = v658;
        *(__m128i *)&v687[32] = v657;
        *(_QWORD *)&v687[56] = v762;
        *(_QWORD *)&v687[64] = v721;
        *(_QWORD *)&v687[72] = v762;
        v687[80] = v544;
        v691 = v742;
        v692 = v731;
        v693 = v643;
        v694 = v730;
        v695 = v734;
        v696 = v644;
        v697 = v744;
        v698 = v673;
        v699 = v722;
        v700 = v558;
        v701 = v559;
        v688 = (__int64 (__fastcall **)())v677;
        *(__m128i *)&v687[88] = v676;
        v690 = *(_QWORD *)&v664[16];
        v689 = _mm_loadu_si128((const __m128i *)v664);
        v560 = v671;
        if ( v671 == v669 )
          sub_14193A0E0(&v669);
        v543 = (unsigned __int64 *)(v750 + 8);
        sub_1419234B0(v670 + 216 * v560, v687, 216);
        v671 = v560 + 1;
      }
      sub_1419234B0(v687, v630, 344);
      v703 = v675;
      v702 = v674;
      v704 = _mm_loadu_si128(&v651);
      v705 = v652;
      v706 = v736 != 0;
      v561 = v686.m128i_i64[1];
      if ( v686.m128i_i64[1] == v685 )
        sub_14193A070(&v685);
      sub_1419234B0(v686.m128i_i64[0] + 400 * v561, v687, 400);
      v686.m128i_i64[1] = v561 + 1;
      v4 = (unsigned __int64)&v717[8];
      v449 = v650;
      if ( v723 )
        sub_140001660(v655, v723, 1);
      if ( v449 == v737 )
        goto LABEL_656;
    }
    v674 = _mm_loadu_si128((const __m128i *)&v717[8]);
    v651.m128i_i64[0] = (__int64)&v674;
    v651.m128i_i64[1] = (__int64)sub_1416CE600;
    sub_1416DAFA0(&v664[8], &unk_141A59D90, &v651);
    v18 = *(_QWORD *)&v664[8];
    v10 = _mm_loadu_si128((const __m128i *)&v664[16]);
    v750 = *(_QWORD *)&v664[40];
    v762 = *(_QWORD *)&v664[32];
    mm = *(_QWORD *)&v664[48];
    v676 = *(__m128i *)&v664[56];
    *(_QWORD *)&v677 = v665;
    v724 = v666;
    v657 = *(__m128i *)&v664[56];
    v658 = v665;
    v626 = v666;
    v684 = v665;
    v683 = *(__m128i *)&v664[56];
    v646 = _mm_load_si128(&v626);
    v17 = 10;
    v562 = v723;
    if ( v723 )
      goto LABEL_662;
    goto LABEL_663;
  }
LABEL_656:
  sub_140001000(&v712, &v659);
  v18 = v685;
  v228 = _mm_loadu_si128(&v686);
  v762 = v669;
  v750 = v670;
  mm = v671;
  v683 = _mm_loadu_si128(&v647);
  v684 = v648;
  if ( v709.m128i_i64[0] )
    sub_140001660(v709.m128i_i64[1], v709.m128i_i64[0], 1);
  sub_14018E2D0(&v715);
  sub_14018E5B0(&v659);
  sub_14018E1B0(&v726);
  sub_140902D50(&v622);
  sub_140190060(&v678);
  sub_140190060(&v718);
LABEL_224:
  v662 = v683;
  v663 = v684;
  v659.m256i_i64[0] = v18;
  *(__m128i *)&v659.m256i_u64[1] = v228;
  v659.m256i_i64[3] = v762;
  v660 = v750;
  v661 = mm;
  if ( !_mm_shuffle_epi32(v228, 238).m128i_u64[0] )
  {
    sub_14099F160(v664);
    *(_QWORD *)v630 = 0;
    *(_QWORD *)&v630[8] = 8;
    *(_QWORD *)&v630[16] = 0;
    nullsub_1(v242, v241);
    v243 = sub_140001650(24, 8);
    if ( !v243 )
      sub_14196B2C1(8, 24);
    v246 = (_QWORD *)v243;
    nullsub_1(v245, v244);
    v247 = sub_140001650(36, 1);
    if ( !v247 )
    {
      v762 = (__int64)v246;
      sub_14196B2DB(1, 36);
    }
    *(_OWORD *)(v247 + 16) = xmmword_141A640E3;
    *(_OWORD *)v247 = xmmword_141A640D3;
    *(_DWORD *)(v247 + 32) = -1951864897;
    *v246 = 36;
    v246[1] = v247;
    v246[2] = 36;
    *(_QWORD *)&v687[16] = *(_QWORD *)&v664[16];
    v248 = _mm_loadu_si128((const __m128i *)v664);
    *(__m128i *)v687 = v248;
    *(_QWORD *)&v687[40] = *(_QWORD *)&v630[16];
    *(_OWORD *)&v687[24] = *(_OWORD *)v630;
    v249 = v707;
    v707[2].m128i_i64[1] = *(_QWORD *)&v630[8];
    v249[3].m128i_i64[0] = *(_QWORD *)&v687[40];
    *(__m128i *)((char *)v249 + 24) = *(__m128i *)&v687[16];
    *(__m128i *)((char *)v249 + 8) = v248;
    v249[3].m128i_i64[1] = 1;
    v249[4].m128i_i64[0] = (__int64)v246;
    v249[4].m128i_i64[1] = 1;
    v249->m128i_i64[0] = -1;
    return sub_140906F50(&v659);
  }
  sub_1402285C0(&v685, v750, v750 + 216 * mm);
  if ( v686.m128i_i64[1] >= 2uLL )
  {
    v586 = v686.m128i_i64[0];
    if ( v686.m128i_i64[1] >= 0x15uLL )
    {
      sub_1401B6A30(v686.m128i_i64[0], v686.m128i_i64[1], &v756);
    }
    else
    {
      v587 = v686.m128i_i64[0] + 32 * v686.m128i_i64[1];
      v4 = v686.m128i_i64[0] + 32;
      do
      {
        sub_140CBC880(v586, v4);
        v4 += 32LL;
      }
      while ( v4 != v587 );
    }
  }
  sub_14019C450(&v685);
  v229 = v686.m128i_i64[0];
  *(_QWORD *)v687 = v686.m128i_i64[0];
  v743 = (_QWORD *)(v686.m128i_i64[0] + 32 * v686.m128i_i64[1]);
  *(_QWORD *)&v687[8] = v743;
  *(_QWORD *)&v687[16] = v654;
  sub_140217E60(&v669, v687);
  v750 = v229;
  v230 = v670;
  v231 = v671;
  sub_1416B18A0((unsigned int)&v715, *(_QWORD *)(v654 + 776), *(_QWORD *)(v654 + 784), (unsigned int)&unk_141A63EC1, 25);
  v687[0] = 1;
  v232 = *(_QWORD *)v716;
  mm = v715.m128i_i64[1];
  v233 = sub_1416B9760(v687, v715.m128i_i64[1], *(_QWORD *)v716);
  if ( !v233 )
  {
    sub_1414331D0(v687);
    v250 = (*(int *)v687 >> 13) - 1;
    v251 = 0;
    if ( *(int *)v687 >> 13 <= 0 )
    {
      v252 = (1 - (*(int *)v687 >> 13)) / 0x190u + 1;
      v250 += 400 * v252;
      v251 = -146097 * v252;
    }
    v651.m128i_i64[0] = 1000
                      * (*(unsigned int *)&v687[4]
                       + 86400LL
                       * (((v250 / 100) >> 2)
                        + ((1461 * v250) >> 2)
                        + v251
                        + ((*(_DWORD *)v687 >> 4) & 0x1FF)
                        - v250 / 100
                        - 719163))
                      + *(unsigned int *)&v687[8] / 0xF4240uLL;
    sub_141597890(v687);
    *(__m128i *)v630 = _mm_loadu_si128((const __m128i *)v687);
    *(_QWORD *)v687 = &v651;
    *(_QWORD *)&v687[8] = sub_1416EBBB0;
    *(_QWORD *)&v687[16] = v630;
    *(_QWORD *)&v687[24] = sub_1402230B0;
    sub_1416DAFA0(&v676, &unk_141A63EDA, v687);
    v762 = v676.m128i_i64[1];
    sub_1416B18A0((unsigned int)v732, mm, v232, v676.m128i_i32[2], v677);
    v253 = v676.m128i_i64[0];
    if ( v676.m128i_i64[0] )
      sub_140001660(v762, v676.m128i_i64[0], 1);
    v254 = v659.m256i_i64[2];
    *(_QWORD *)v664 = v659.m256i_i64[1];
    *(_QWORD *)&v664[8] = v659.m256i_i64[1] + 400 * v659.m256i_i64[2];
    *(_QWORD *)&v664[16] = &v659;
    if ( v659.m256i_i64[2] )
    {
      v4 = 32 * v659.m256i_i64[2];
      nullsub_1(v659.m256i_i64[1] + 400 * v659.m256i_i64[2], v253);
      v255 = sub_140001650(32 * v254, 8);
      if ( !v255 )
      {
        v759 = 1;
        sub_14196B2DB(8, 32 * v254);
      }
    }
    else
    {
      v255 = 8;
    }
    *(_QWORD *)v630 = v254;
    *(_QWORD *)&v630[8] = v255;
    *(_QWORD *)&v630[16] = 0;
    *(_QWORD *)&v687[16] = v255;
    *(_OWORD *)v687 = (unsigned __int64)&v630[16];
    sub_140857B10(v664, v687);
    v709 = _mm_loadu_si128((const __m128i *)v630);
    v710 = *(_QWORD *)&v630[16];
    if ( v231 )
    {
      v4 = 32 * v231;
      nullsub_1(v287, v286);
      v288 = sub_140001650(32 * v231, 8);
      if ( !v288 )
      {
        v758 = 1;
        sub_14196B2DB(8, 32 * v231);
      }
    }
    else
    {
      v288 = 8;
    }
    *(_QWORD *)v630 = v231;
    *(_QWORD *)&v630[8] = v288;
    *(_QWORD *)&v630[16] = 0;
    *(_QWORD *)&v687[16] = v288;
    *(_OWORD *)v687 = (unsigned __int64)&v630[16];
    sub_14085A8B0(v230, v230 + (v231 << 6), v687);
    v712 = _mm_loadu_si128((const __m128i *)v630);
    *(_QWORD *)&v713[0] = *(_QWORD *)&v630[16];
    *(_QWORD *)v717 = 0;
    *(_QWORD *)&v717[16] = 0;
    nullsub_1(v290, v289);
    v291 = (_DWORD *)sub_140001650(7, 1);
    if ( !v291 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v291 + 3) = 1852795251;
    *v291 = 1936876918;
    v718.m128i_i64[0] = 7;
    v718.m128i_i64[1] = (__int64)v291;
    v719.m256i_i64[0] = 7;
    v687[0] = 2;
    *(_QWORD *)&v687[8] = 0;
    *(_QWORD *)&v687[16] = 1;
    sub_140A68320(v630, v717, &v718, v687);
    if ( v630[0] != 0xFF )
      sub_140032FF0(v630);
    nullsub_1(v293, v292);
    v294 = sub_140001650(6, 1);
    if ( !v294 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v294 + 4) = 29557;
    *(_DWORD *)v294 = 1952543859;
    v718.m128i_i64[0] = 6;
    v718.m128i_i64[1] = v294;
    v719.m256i_i64[0] = 6;
    nullsub_1(v296, v295);
    v297 = (_QWORD *)sub_140001650(8, 1);
    v762 = (__int64)v297;
    if ( !v297 )
      sub_14196B2DB(1, 8);
    *v297 = 0x6465726170657270LL;
    v687[0] = 3;
    *(_QWORD *)&v687[8] = 8;
    *(_QWORD *)&v687[16] = v297;
    *(_QWORD *)&v687[24] = 8;
    sub_140A68320(v630, v717, &v718, v687);
    if ( v630[0] != 0xFF )
      sub_140032FF0(v630);
    nullsub_1(v299, v298);
    v300 = (void *)sub_140001650(11, 1);
    if ( !v300 )
      sub_14196B2DB(1, 11);
    qmemcpy(v300, "createdAtMs", 11);
    v718.m128i_i64[0] = 11;
    v718.m128i_i64[1] = (__int64)v300;
    v719.m256i_i64[0] = 11;
    v687[0] = 2;
    *(_QWORD *)&v687[8] = (unsigned __int64)v651.m128i_i64[0] >> 63;
    *(_QWORD *)&v687[16] = v651.m128i_i64[0];
    sub_140A68320(v630, v717, &v718, v687);
    if ( v630[0] != 0xFF )
      sub_140032FF0(v630);
    nullsub_1(v302, v301);
    v303 = (__m128i *)sub_140001650(17, 1);
    if ( !v303 )
      sub_14196B2DB(1, 17);
    *v303 = _mm_loadu_si128(&xmmword_141A63F00);
    v303[1].m128i_i8[0] = 110;
    v718.m128i_i64[0] = 17;
    v718.m128i_i64[1] = (__int64)v303;
    v719.m256i_i64[0] = 17;
    *(_WORD *)v687 = 257;
    sub_140A68320(v630, v717, &v718, v687);
    if ( v630[0] != 0xFF )
      sub_140032FF0(v630);
    nullsub_1(v305, v304);
    v306 = (void *)sub_140001650(13, 1);
    if ( !v306 )
      sub_14196B2DB(1, 13);
    qmemcpy(v306, "fallbackModel", 13);
    v718.m128i_i64[0] = 13;
    v718.m128i_i64[1] = (__int64)v306;
    v719.m256i_i64[0] = 13;
    if ( v662.m128i_i64[0] == -1 )
    {
      v309 = 0;
    }
    else
    {
      v230 = v663;
      if ( v663 < 0 )
      {
        v308 = 0;
        goto LABEL_316;
      }
      v309 = 3;
      if ( v663 )
      {
        v310 = v662.m128i_i64[1];
        nullsub_1(0x6B6361626C6C6166LL, v307);
        v308 = 1;
        v311 = sub_140001650(v230, 1);
        if ( !v311 )
        {
LABEL_316:
          v739 = 1;
          sub_14196B2DB(v308, v230);
        }
        v4 = v311;
        sub_1419234B0(v311, v310, v230);
      }
      else
      {
        v4 = 1;
        v230 = 0;
      }
    }
    v687[0] = v309;
    *(_QWORD *)&v687[8] = v230;
    *(_QWORD *)&v687[16] = v4;
    *(_QWORD *)&v687[24] = v230;
    v739 = 0;
    sub_140A68320(v630, v717, &v718, v687);
    if ( v630[0] != 0xFF )
      sub_140032FF0(v630);
    nullsub_1(v322, v321);
    v323 = (void *)sub_140001650(15, 1);
    if ( !v323 )
      sub_14196B2DB(1, 15);
    qmemcpy(v323, "databaseBackups", 15);
    v718.m128i_i64[0] = 15;
    v718.m128i_i64[1] = (__int64)v323;
    v719.m256i_i64[0] = 15;
    v752 = 1;
    sub_1407B3D00(v687, &v712);
    if ( v687[0] == 0xFF )
    {
      *(_QWORD *)v630 = *(_QWORD *)&v687[8];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)v630,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A63EE8);
    }
    v324 = _mm_loadu_si128((const __m128i *)v687);
    *(_OWORD *)&v630[16] = *(_OWORD *)&v687[16];
    *(__m128i *)v630 = v324;
    v752 = 0;
    sub_140A68320(v687, v717, &v718, v630);
    if ( v687[0] != 0xFF )
      sub_140032FF0(v687);
    nullsub_1(v326, v325);
    v327 = (_DWORD *)sub_140001650(7, 1);
    if ( !v327 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v327 + 3) = 1935958373;
    *v327 = 1701996660;
    v718.m128i_i64[0] = 7;
    v718.m128i_i64[1] = (__int64)v327;
    v719.m256i_i64[0] = 7;
    v751 = 1;
    sub_1407B3D00(v687, &v709);
    if ( v687[0] == 0xFF )
    {
      *(_QWORD *)v630 = *(_QWORD *)&v687[8];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)v630,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A63EE8);
    }
    v328 = _mm_loadu_si128((const __m128i *)v687);
    *(_OWORD *)&v630[16] = *(_OWORD *)&v687[16];
    *(__m128i *)v630 = v328;
    v751 = 0;
    sub_140A68320(v687, v717, &v718, v630);
    if ( v687[0] != 0xFF )
      sub_140032FF0(v687);
    *(__m128i *)&v664[8] = _mm_loadu_si128((const __m128i *)v717);
    *(_QWORD *)&v664[24] = *(_QWORD *)&v717[16];
    v664[0] = 5;
    v235 = *(_QWORD *)&v732[8];
    v236 = *(_QWORD *)&v732[16];
    sub_1409E56A0(v687, *(_QWORD *)&v732[8], *(_QWORD *)&v732[16], v664);
    v237 = *(_QWORD *)v687;
    if ( *(_QWORD *)v687 != -1 )
    {
      v234 = *(_QWORD *)&v687[8];
      v17 = *(_QWORD *)&v687[24];
      v329 = *(_QWORD *)&v687[16];
      v230 = *(_QWORD *)&v687[32];
      v726 = *(__m256i *)&v687[40];
      v657 = _mm_loadu_si128((const __m128i *)&v687[72]);
      v658 = *(_QWORD *)&v687[88];
      sub_140032FF0(v664);
      v330 = v712.m128i_i64[1];
      v760 = *(_QWORD *)&v713[0];
      v762 = 0;
      v714.m128i_i64[0] = v712.m128i_i64[1];
      while ( v760 != v762 )
      {
        ++v762;
        v331 = v330 + 32;
        sub_1401AB4D0();
        v330 = v331;
      }
      if ( v712.m128i_i64[0] )
        sub_140001660(v712.m128i_i64[1], 32 * v712.m128i_i64[0], 8);
      v332 = v709.m128i_i64[1];
      v760 = v710;
      v762 = 0;
      v714.m128i_i64[0] = v709.m128i_i64[1];
      while ( v760 != v762 )
      {
        ++v762;
        v333 = v332 + 32;
        sub_1401AB4D0();
        v332 = v333;
      }
      if ( v709.m128i_i64[0] )
        sub_140001660(v709.m128i_i64[1], 32 * v709.m128i_i64[0], 8);
      if ( *(_QWORD *)v732 )
        sub_140001660(v235, *(_QWORD *)v732, 1);
      v235 = v329;
      v236 = v17;
      v238 = v715.m128i_i64[0];
      if ( !v715.m128i_i64[0] )
        goto LABEL_232;
      goto LABEL_231;
    }
    sub_1416C4AC0(v687, mm, v232);
    if ( *(_DWORD *)v687 == 2 )
    {
      *(_QWORD *)&v630[8] = *(_QWORD *)&v687[8];
      *(_QWORD *)v630 = 2;
    }
    else
    {
      sub_1419234B0(v630, v687, 624);
      if ( *(_QWORD *)v630 != 2 )
      {
        sub_1419234B0(v687, v630, 624);
        sub_140210890(v630, v687);
        v411 = *(_QWORD *)&v630[16];
        if ( *(_QWORD *)&v630[16] >= 0x15u )
        {
          v17 = v236;
          v418 = v235;
          v419 = *(__int64 **)&v630[8];
          v738 = 1;
          sub_1401B6A30(*(_QWORD *)&v630[8], *(_QWORD *)&v630[16], &v756);
          v421 = v411 - 20;
          v422 = &v419[4 * v411];
          *(_QWORD *)v687 = v419;
          *(_QWORD *)&v687[8] = v419;
          *(_QWORD *)&v687[16] = *(_QWORD *)v630;
          *(_QWORD *)&v687[24] = v422;
          do
          {
            *(_QWORD *)&v687[32] = --v421;
            if ( v419 == v422 )
              break;
            v423 = v419 + 4;
            *(_QWORD *)&v687[8] = v419 + 4;
            if ( *v419 == -1 )
              break;
            v762 = *v419;
            v424 = v419[2];
            v760 = v419[1];
            v425 = sub_1416C4110(v760, v424);
            v420 = v762;
            if ( v762 )
              sub_140001660(v760, v762, 1);
            if ( v425 && (unsigned int)(v425 & 3) - 2 >= 2 && (v425 & 3) != 0 )
            {
              v718.m128i_i64[1] = v425 - 1;
              v718.m128i_i8[0] = 3;
              sub_1416EBAD0(&v718.m128i_u64[1]);
            }
            v419 = v423;
          }
          while ( v421 );
          sub_140001000(v687, v420);
          v235 = v418;
        }
        else
        {
          sub_140234510(v630);
          if ( *(_QWORD *)v630 )
            sub_140001660(*(_QWORD *)&v630[8], 32LL * *(_QWORD *)v630, 8);
        }
LABEL_361:
        v234 = *(_QWORD *)v732;
        v230 = *(_QWORD *)&v732[24];
        *(__m128i *)v726.m256i_i8 = _mm_loadu_si128((const __m128i *)v664);
        *(_OWORD *)&v726.m256i_u64[2] = *(_OWORD *)&v664[16];
        v334 = v712.m128i_i64[1];
        v760 = *(_QWORD *)&v713[0];
        v762 = 0;
        v714.m128i_i64[0] = v712.m128i_i64[1];
        while ( v760 != v762 )
        {
          ++v762;
          v335 = v334 + 32;
          sub_1401AB4D0();
          v334 = v335;
        }
        if ( v712.m128i_i64[0] )
          sub_140001660(v712.m128i_i64[1], 32 * v712.m128i_i64[0], 8);
        v336 = v709.m128i_i64[1];
        v760 = v710;
        v762 = 0;
        v714.m128i_i64[0] = v709.m128i_i64[1];
        while ( v760 != v762 )
        {
          ++v762;
          v337 = v336 + 32;
          sub_1401AB4D0();
          v336 = v337;
        }
        if ( v709.m128i_i64[0] )
          sub_140001660(v709.m128i_i64[1], 32 * v709.m128i_i64[0], 8);
        v237 = -1;
        v238 = v715.m128i_i64[0];
        if ( !v715.m128i_i64[0] )
          goto LABEL_232;
LABEL_231:
        sub_140001660(mm, v238, 1);
        goto LABEL_232;
      }
    }
    sub_140776A60(v630);
    goto LABEL_361;
  }
  *(_QWORD *)v664 = v233;
  *(_QWORD *)v630 = v664;
  *(_QWORD *)&v630[8] = sub_1416EA080;
  sub_1416DAFA0(v687, &unk_141A5A1E9, v630);
  v235 = *(_QWORD *)&v687[8];
  v234 = *(_QWORD *)v687;
  v236 = *(_QWORD *)&v687[16];
  if ( (v664[0] & 3u) - 2 >= 2 && (v664[0] & 3) != 0 )
  {
    *(_QWORD *)&v630[8] = *(_QWORD *)v664 - 1LL;
    v630[0] = 3;
    sub_1416EBAD0(&v630[8]);
  }
  v237 = 10;
  v238 = v715.m128i_i64[0];
  if ( v715.m128i_i64[0] )
    goto LABEL_231;
LABEL_232:
  v678 = *(__m128i *)v726.m256i_i8;
  *(_OWORD *)v679.m256i_i8 = *(_OWORD *)&v726.m256i_u64[2];
  if ( (_DWORD)v237 != -1 )
  {
    v239 = v707;
    v707[5].m128i_i64[1] = v658;
    *(__m128i *)((char *)v239 + 72) = v657;
    v239->m128i_i64[1] = v234;
    v239[1].m128i_i64[0] = v235;
    v239[1].m128i_i64[1] = v236;
    v239[2].m128i_i64[0] = v230;
    v240 = *(__m128i *)v679.m256i_i8;
    *(__m128i *)((char *)v239 + 40) = _mm_load_si128(&v678);
    *(__m128i *)((char *)v239 + 56) = v240;
    v239->m128i_i64[0] = v237;
    goto LABEL_693;
  }
  v742 = v236;
  v730 = v234;
  v735 = v235;
  v653 = v642 + (v653 << 8);
  v256 = _mm_load_si128(&v678);
  v677 = *(_OWORD *)v679.m256i_i8;
  v676 = v256;
  *(_QWORD *)&v681 = 0;
  *((_QWORD *)&v681 + 1) = 8;
  v682 = 0;
  v257 = (const __m128i *)v659.m256i_i64[1];
  v258 = v659.m256i_i64[1] + 400 * v659.m256i_i64[2];
  while ( v257 != (const __m128i *)v258 )
  {
    v259 = _mm_loadu_si128(v257 + 22);
    sub_1407FAE60(
      (unsigned int)&v606,
      (_DWORD)v257,
      (unsigned int)aOpenai_2,
      6,
      v259.m128i_i64[0],
      v259.m128i_i64[1],
      v257[23].m128i_i64[1],
      v257[24].m128i_i64[0]);
    v257 += 25;
    if ( v606 != -1 )
    {
      if ( v606 == -2 )
      {
        *(__m128i *)&v732[80] = v609[3];
        *(__m128i *)&v732[64] = v609[2];
        v312 = _mm_loadu_si128(v609);
        *(__m128i *)&v732[48] = v609[1];
        *(__m128i *)&v732[32] = v312;
        *(_OWORD *)&v732[16] = v608;
        *(_OWORD *)v732 = v607;
        v313 = _mm_loadu_si128((const __m128i *)((char *)&v681 + 8));
        v748 = 1;
        sub_1409CBF90((unsigned int)v664, v660, v661, 8, 0, v313.m128i_i64[0], v313.m128i_i64[1]);
        *(_QWORD *)v630 = 0;
        *(_QWORD *)&v630[8] = 1;
        *(_QWORD *)&v630[16] = 0;
        *(_QWORD *)&v687[16] = 1610612768;
        *(_QWORD *)v687 = v630;
        *(_QWORD *)&v687[8] = &off_141A66E10;
        if ( (unsigned __int8)sub_140D76130(v732, v687) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_5,
            55,
            (unsigned int)&v756,
            (unsigned int)&unk_141A5A890,
            (__int64)&off_141A66EC8);
        v760 = *(_QWORD *)&v630[8];
        v762 = *(_QWORD *)v630;
        sub_1409D7580(
          v735,
          v742,
          (unsigned int)&v676,
          (unsigned int)&unk_141A640F7,
          11,
          *(__int64 *)&v630[8],
          *(__int64 *)&v630[16]);
        if ( v762 )
          sub_140001660(v760, v762, 1);
        *(_OWORD *)&v630[80] = *(_OWORD *)&v732[80];
        *(_OWORD *)&v630[64] = *(_OWORD *)&v732[64];
        v314 = _mm_load_si128((const __m128i *)&v732[32]);
        *(_OWORD *)&v630[48] = *(_OWORD *)&v732[48];
        *(__m128i *)&v630[32] = v314;
        *(_OWORD *)&v630[16] = *(_OWORD *)&v732[16];
        *(_OWORD *)v630 = *(_OWORD *)v732;
        if ( *(_QWORD *)v664 == -1 )
        {
          v316 = *(_QWORD *)v630;
          v715 = *(__m128i *)&v732[8];
          *(_QWORD *)v716 = *(_QWORD *)&v732[24];
          *(_OWORD *)v687 = *(_OWORD *)&v732[32];
          *(_OWORD *)&v687[16] = *(_OWORD *)&v732[48];
          *(_OWORD *)&v687[32] = *(_OWORD *)&v732[64];
          *(__m128i *)&v687[48] = _mm_load_si128((const __m128i *)&v732[80]);
        }
        else
        {
          *(_QWORD *)v687 = *(_QWORD *)v664;
          v315 = _mm_loadu_si128((const __m128i *)&v664[40]);
          *(_OWORD *)&v687[8] = *(_OWORD *)&v664[8];
          *(_OWORD *)&v687[24] = *(_OWORD *)&v664[24];
          *(__m128i *)&v687[40] = v315;
          *(_OWORD *)&v687[56] = *(_OWORD *)&v664[56];
          *(__m128i *)&v687[72] = _mm_loadu_si128((const __m128i *)&v665);
          *(_QWORD *)&v687[88] = v666.m128i_i64[1];
          v715.m128i_i64[0] = (__int64)v630;
          v715.m128i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v716 = v687;
          *(_QWORD *)&v716[8] = sub_140D76130;
          sub_1416DAFA0(&v726, &unk_141A62056, &v715);
          v715 = _mm_loadu_si128((const __m128i *)&v726);
          *(_QWORD *)v716 = v726.m256i_i64[2];
          sub_140906570(v687);
          v755 = 0;
          v316 = 10;
          sub_140906570(v630);
        }
        v338 = v707;
        v707->m128i_i64[0] = v316;
        *(__m128i *)((char *)v338 + 8) = v715;
        v338[1].m128i_i64[1] = *(_QWORD *)v716;
        v339 = *(__m128i *)&v687[16];
        v340 = _mm_load_si128((const __m128i *)&v687[32]);
        v341 = *(__m128i *)&v687[48];
        v338[2] = _mm_load_si128((const __m128i *)v687);
        v338[3] = v339;
        v338[4] = v340;
        v338[5] = v341;
        goto LABEL_689;
      }
      v260 = v682;
      if ( v682 == (_QWORD)v681 )
        sub_141939890(&v681);
      sub_1419234B0(*((_QWORD *)&v681 + 1) + 152 * v260, &v606, 152);
      v682 = v260 + 1;
    }
  }
  v667 = 0;
  v668 = (__m128i)8uLL;
  v627 = 0;
  v261 = 0;
  v262 = (_QWORD *)v750;
LABEL_254:
  if ( v262 == v743 )
  {
    v644 = v660;
    v750 = v660 + 216 * v661;
    sub_1402285C0(&v724, v660, v750);
    v342 = v725;
    if ( v725 >= 2 )
    {
      v599 = v724.m128i_i64[1];
      if ( v725 >= 0x15 )
      {
        v765 = 1;
        sub_1401B6A30(v724.m128i_i64[1], v725, &v756);
      }
      else
      {
        v342 = v724.m128i_i64[1] + 32 * v725;
        v600 = v724.m128i_i64[1] + 32;
        do
        {
          v765 = 1;
          sub_140CBC880(v599, v600);
          v600 += 32;
        }
        while ( v600 != v342 );
      }
    }
    v765 = 1;
    sub_14019C450(&v724);
    v343 = (__int64 *)v724.m128i_i64[1];
    v344 = v724.m128i_i64[1] + 32 * v725;
    v709.m128i_i64[0] = v724.m128i_i64[1];
    v709.m128i_i64[1] = v724.m128i_i64[1];
    v710 = v724.m128i_i64[0];
    v643 = (__int64 *)v344;
    v711 = v344;
    v345 = v742;
LABEL_377:
    if ( v343 != v643 )
    {
      v346 = v343 + 4;
      v709.m128i_i64[1] = (__int64)(v343 + 4);
      if ( *v343 != -1 )
      {
        v714.m128i_i64[0] = *v343;
        v347 = v343[2];
        v762 = v343[1];
        v760 = v347;
        sub_1409016A0(v687, v762, v347, 32769);
        if ( (_BYTE)v688 == 0xFF )
        {
          v564 = _mm_load_si128((const __m128i *)v687);
          v565 = _mm_load_si128((const __m128i *)&v687[32]);
          *(_OWORD *)&v732[48] = *(_OWORD *)&v687[48];
          *(__m128i *)&v732[32] = v565;
          *(_OWORD *)&v732[16] = *(_OWORD *)&v687[16];
          *(__m128i *)v732 = v564;
          *(_QWORD *)v717 = v762;
          *(_QWORD *)&v717[8] = v760;
          v715.m128i_i64[0] = (__int64)v717;
          v715.m128i_i64[1] = (__int64)sub_1416CE600;
          *(_QWORD *)v716 = v732;
          *(_QWORD *)&v716[8] = sub_14142D4D0;
          sub_1416DAFA0(&v726, &unk_141A59CCD, &v715);
          v426 = _mm_load_si128((const __m128i *)&v726);
          v427 = v726.m256i_i64[2];
          sub_140904700(v732);
          goto LABEL_681;
        }
        v672 = v346;
        v348 = _mm_load_si128((const __m128i *)&v687[16]);
        v349 = _mm_load_si128((const __m128i *)&v687[48]);
        *(_OWORD *)&v630[32] = *(_OWORD *)&v687[32];
        *(__m128i *)&v630[48] = v349;
        *(_OWORD *)&v630[64] = *(_OWORD *)&v687[64];
        *(_OWORD *)&v630[80] = *(_OWORD *)&v687[80];
        v631 = v688;
        *(__m128i *)&v630[16] = v348;
        *(_OWORD *)v630 = *(_OWORD *)v687;
        *(_QWORD *)&v630[96] = *(_QWORD *)&v687[96];
        v350 = v644;
        while ( 1 )
        {
          if ( v350 == v750 )
          {
            sub_140903740(v630);
            v345 = v742;
            v386 = v672;
            v343 = v672;
            v344 = v714.m128i_i64[0];
            if ( v714.m128i_i64[0] )
            {
              sub_140001660(v762, v714.m128i_i64[0], 1);
              v343 = v386;
            }
            goto LABEL_377;
          }
          v351 = v350;
          sub_1416B0AC0(&v726, *(_QWORD *)(v350 + 8), *(_QWORD *)(v350 + 16));
          sub_1416B0AC0(&v715, v762, v760);
          v352 = v342;
          v353 = v17;
          v350 += 216;
          v354 = v726.m256i_i64[1];
          v355 = v715.m128i_i64[1];
          if ( v726.m256i_i64[1] == v715.m128i_i64[1] )
          {
            v356 = v726.m256i_i8[16];
            if ( (_BYTE)v728 == v716[40]
              && HIBYTE(v728) == 2
              && v716[41] == 2
              && v726.m256i_i8[16] < 3u == v716[0] < 3u
              && !(unsigned int)sub_141923B40(v726.m256i_i64[0], v715.m128i_i64[0], v726.m256i_i64[1]) )
            {
              v17 = v353;
              goto LABEL_395;
            }
          }
          else
          {
            v356 = v726.m256i_i8[16];
          }
          if ( v356 != -1 )
          {
            *(_QWORD *)((char *)v713 + 15) = *(_QWORD *)&v727[16];
            v357 = _mm_loadu_si128((const __m128i *)((char *)&v726.m256i_u64[2] + 1));
            v713[0] = *(_OWORD *)&v727[1];
            v712 = v357;
          }
          *(_QWORD *)v732 = v726.m256i_i64[0];
          *(_QWORD *)&v732[8] = v354;
          v732[16] = v356;
          *(_QWORD *)&v732[48] = *(_QWORD *)((char *)v713 + 15);
          *(_OWORD *)&v732[33] = v713[0];
          *(__m128i *)&v732[17] = v712;
          *(_WORD *)&v732[56] = v728;
          v732[58] = v729;
          if ( v716[0] != 0xFF )
          {
            *(_QWORD *)&v717[31] = *(_QWORD *)&v716[32];
            *(_OWORD *)&v717[16] = *(_OWORD *)&v716[17];
            *(_OWORD *)v717 = *(_OWORD *)&v716[1];
          }
          *(_QWORD *)v687 = v715.m128i_i64[0];
          *(_QWORD *)&v687[8] = v355;
          v687[16] = v716[0];
          *(_QWORD *)&v687[48] = *(_QWORD *)&v717[31];
          v358 = _mm_load_si128((const __m128i *)v717);
          *(_OWORD *)&v687[33] = *(_OWORD *)&v717[16];
          *(__m128i *)&v687[17] = v358;
          *(_WORD *)&v687[56] = *(_WORD *)&v716[40];
          v687[58] = v716[42];
          v17 = v353;
          v342 = v352;
          if ( (unsigned __int8)sub_140865EB0(v732, v687) )
          {
LABEL_395:
            v359 = *(unsigned __int8 *)(v351 + 208);
            v360 = (const char *)&unk_141A61FAE;
            if ( *(_BYTE *)(v351 + 208) )
              v360 = aModel_3;
            v712.m128i_i64[0] = (__int64)v360;
            v712.m128i_i64[1] = v359 | 4;
            v361 = (const char *)&unk_141A61FAE;
            if ( *(_BYTE *)(v351 + 209) )
              v361 = aReasoningEffor_2;
            v362 = 4;
            if ( *(_BYTE *)(v351 + 209) )
              v362 = 16;
            *(_QWORD *)v717 = v361;
            *(_QWORD *)&v717[8] = v362;
            *(_QWORD *)v687 = &v712;
            *(_QWORD *)&v687[8] = sub_140191200;
            *(_QWORD *)&v687[16] = v717;
            *(_QWORD *)&v687[24] = sub_140191200;
            sub_1416DAFA0(v732, &unk_141A61FC2, v687);
            v673 = *(_QWORD **)&v732[8];
            v721 = *(_QWORD *)v732;
            sub_140930990(v687, v630, *(_QWORD *)&v732[8], *(_QWORD *)&v732[16]);
            v363 = v351 + 32;
            v364 = *(_QWORD *)&v687[8];
            v365 = *(_OWORD *)&v687[24];
            v366 = *(_QWORD *)&v687[16];
            v367 = *(_QWORD *)&v687[40];
            v368 = *(_QWORD *)&v687[56];
            v369 = *(_QWORD *)&v687[64];
            if ( *(_DWORD *)v687 == 1 )
            {
              v378 = *(_QWORD *)&v687[24];
              v379 = *(_QWORD *)&v687[48];
              goto LABEL_677;
            }
            v650 = v351 + 32;
            v743 = *(_QWORD **)&v687[8];
            *(_OWORD *)v732 = *(_OWORD *)&v687[8];
            *(_OWORD *)&v732[16] = *(_OWORD *)&v687[24];
            *(_QWORD *)&v732[32] = *(_QWORD *)&v687[40];
            *(_OWORD *)&v732[40] = *(_OWORD *)&v687[48];
            *(_QWORD *)&v732[56] = *(_QWORD *)&v687[64];
            v370 = *(_DWORD *)&v687[64];
            v371 = sub_1417D8600();
            if ( !v371 )
            {
              v744 = 1;
              v364 = 0x8000000000000013uLL;
              v378 = 0;
              goto LABEL_414;
            }
            v372 = v371;
            v373 = *(_QWORD *)(v351 + 48);
            v374 = 0;
            LODWORD(v375) = 1;
            if ( v373 )
              v375 = *(_QWORD *)(v351 + 40);
            LOBYTE(v374) = v373 != 0;
            v376 = sub_1417D81D0(v370, 1, v375, v373, -v374, 1);
            v377 = v743;
            if ( *v743 >= 0x7FFFFFFFFFFFFFFFuLL )
              sub_14196B550(&off_141A5AC58);
            ++*v743;
            sub_14142D4A0(v687, v377[2], v376);
            --*v743;
            v364 = *(_QWORD *)v687;
            if ( *(_QWORD *)v687 != -1 )
            {
              v744 = *(_QWORD *)&v687[8];
              v17 = *(_QWORD *)&v687[24];
              v378 = *(_QWORD *)&v687[16];
              v379 = *(_QWORD *)&v687[40];
              v342 = *(_QWORD *)&v687[32];
              v380 = *(_OWORD *)&v687[48];
              goto LABEL_415;
            }
            if ( v372 != 1 )
            {
              v378 = v372;
              v744 = 1;
              v364 = 0x8000000000000013uLL;
LABEL_414:
              v342 = v352;
              v379 = v655;
              v380 = __PAIR128__(v649, v723);
LABEL_415:
              mm = -2;
              v734 = v17;
              v722 = v342;
              v655 = v379;
              v723 = v380;
              v649 = v380 >> 64;
              *(_QWORD *)&v731 = v380;
              *((_QWORD *)&v731 + 1) = *((_QWORD *)&v380 + 1);
              goto LABEL_416;
            }
            v715 = (__m128i)(unsigned __int64)v732;
            sub_140A07DF0(v687, &v715);
            v342 = v352;
            v364 = *(_QWORD *)v687;
            if ( *(_QWORD *)v687 == -1 )
            {
              mm = -2;
              if ( v715.m128i_i64[1] )
              {
                sub_1406583D0(v687, &v715.m128i_u64[1], 0, &off_141A59C30);
                v744 = *(_QWORD *)&v687[8];
                v364 = *(_QWORD *)v687;
                v734 = *(_QWORD *)&v687[24];
                v737 = *(_QWORD *)&v687[16];
                if ( *(_QWORD *)v687 == -1 )
                {
                  sub_1406583D0(v687, &v715.m128i_u64[1], 1, &off_141A59C48);
                  v708 = *(_QWORD *)&v687[8];
                  v364 = *(_QWORD *)v687;
                  v382 = *(_QWORD *)&v687[24];
                  v656 = *(_QWORD *)&v687[16];
                  if ( *(_QWORD *)v687 == -1 )
                  {
                    sub_1406583D0(v687, &v715.m128i_u64[1], 2, &off_141A59C60);
                    v383 = *(_QWORD *)&v687[8];
                    *((_QWORD *)&v731 + 1) = *(_QWORD *)&v687[24];
                    v384 = *(_QWORD *)&v687[16];
                    v743 = *(_QWORD **)v687;
                    if ( *(_QWORD *)v687 == -1 )
                    {
                      mm = v744;
                      v744 = v734;
                      v734 = v656;
                      v722 = v382;
                      *(_QWORD *)&v731 = *(_QWORD *)&v687[16];
                      v364 = v737;
                      v17 = v353;
                      v378 = v708;
                      v342 = v352;
                      v379 = *(_QWORD *)&v687[8];
                    }
                    else
                    {
                      v736 = *(_QWORD *)&v687[40];
                      v722 = *(_QWORD *)&v687[32];
                      v385 = *(_QWORD *)&v687[56];
                      *(_QWORD *)&v731 = *(_QWORD *)&v687[48];
                      if ( (unsigned __int64)(v708 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                        sub_140001660(v656, v708, 1);
                      if ( (unsigned __int64)(v744 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                        sub_140001660(v737, v744, 1);
                      v734 = *((_QWORD *)&v731 + 1);
                      *((_QWORD *)&v731 + 1) = v385;
                      v744 = v383;
                      v17 = v353;
                      v378 = v384;
                      v342 = v352;
                      v364 = (unsigned __int64)v743;
                      v379 = v736;
                    }
                  }
                  else
                  {
                    v379 = *(_QWORD *)&v687[40];
                    v722 = *(_QWORD *)&v687[32];
                    v731 = *(_OWORD *)&v687[48];
                    if ( (unsigned __int64)(v744 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                      sub_140001660(v737, v744, 1);
                    v734 = v382;
                    v744 = v708;
                    v17 = v353;
                    v378 = v656;
                  }
                }
                else
                {
                  v379 = *(_QWORD *)&v687[40];
                  v722 = *(_QWORD *)&v687[32];
                  v731 = *(_OWORD *)&v687[48];
                  v378 = v737;
                }
              }
              else
              {
                v734 = *((_QWORD *)&v645 + 1);
                v379 = *((_QWORD *)&v624 + 1);
                v722 = v624;
                v731 = v625;
                v378 = v645;
                v744 = (__int64)&v715.m128i_i64[1];
                v364 = 0x8000000000000009uLL;
              }
            }
            else
            {
              v744 = *(_QWORD *)&v687[8];
              v378 = *(_QWORD *)&v687[16];
              v379 = *(_QWORD *)&v687[40];
              mm = -2;
              v734 = *(_QWORD *)&v687[24];
              v722 = *(_QWORD *)&v687[32];
              v624 = *(_OWORD *)&v687[32];
              v731 = *(_OWORD *)&v687[48];
              v625 = *(_OWORD *)&v687[48];
              v645 = *(_OWORD *)&v687[16];
            }
            sub_1409044F0(&v715);
LABEL_416:
            sub_140904890(v732);
            if ( mm == -2 )
            {
              v363 = v650;
              *((_QWORD *)&v365 + 1) = v734;
              v368 = v731;
              v366 = v744;
              v369 = *((_QWORD *)&v731 + 1);
              v367 = v722;
LABEL_677:
              *(_QWORD *)v687 = v364;
              *(_QWORD *)&v687[8] = v366;
              *(_QWORD *)&v687[16] = v378;
              *(_QWORD *)&v687[24] = *((_QWORD *)&v365 + 1);
              *(_QWORD *)&v687[32] = v367;
              *(_QWORD *)&v687[40] = v379;
              *(_QWORD *)&v687[48] = v368;
              *(_QWORD *)&v687[56] = v369;
              v726.m256i_i64[0] = v762;
              v726.m256i_i64[1] = v760;
              *(_QWORD *)v732 = v363;
              *(_QWORD *)&v732[8] = sub_1400015F0;
              *(_QWORD *)&v732[16] = &v726;
              *(_QWORD *)&v732[24] = sub_1416CE600;
              *(_QWORD *)&v732[32] = v687;
              *(_QWORD *)&v732[40] = sub_14142D4D0;
              sub_1416DAFA0(&v715, &unk_141A59C78, v732);
              v426 = _mm_load_si128(&v715);
              v427 = *(_QWORD *)v716;
              sub_140904700(v687);
              v430 = v721;
              v345 = v742;
              if ( v721 )
              {
                v429 = v673;
LABEL_679:
                sub_140001660(v429, v430, 1);
              }
LABEL_680:
              sub_140903740(v630);
LABEL_681:
              v566 = v714.m128i_i64[0];
              if ( v714.m128i_i64[0] )
                sub_140001660(v762, v714.m128i_i64[0], 1);
              sub_140001000(&v709, v566);
              v437 = 10;
LABEL_684:
              *(_QWORD *)v732 = v437;
              *(__m128i *)&v732[8] = v426;
              *(_QWORD *)&v732[24] = v427;
              v567 = _mm_load_si128((const __m128i *)&v719.m256i_u64[2]);
              *(__m128i *)&v732[32] = v718;
              *(_OWORD *)&v732[48] = *(_OWORD *)v719.m256i_i8;
              *(__m128i *)&v732[64] = v567;
              *(__m128i *)&v732[80] = v720;
              v568 = _mm_loadu_si128((const __m128i *)((char *)&v681 + 8));
              v746 = 1;
              sub_1409CBF90(
                (unsigned int)v664,
                v660,
                v661,
                v668.m128i_i32[0],
                v668.m128i_i64[1],
                v568.m128i_i64[0],
                v568.m128i_i64[1]);
              v745 = 1;
              sub_140A08B00(v687, v732);
              v762 = *(_QWORD *)&v687[8];
              sub_1409D7580(
                v735,
                v345,
                (unsigned int)&v676,
                (unsigned int)&unk_141A640F7,
                11,
                *(__int64 *)&v687[8],
                *(__int64 *)&v687[16]);
              if ( *(_QWORD *)v687 )
                sub_140001660(v762, *(_QWORD *)v687, 1);
              *(_OWORD *)&v687[80] = *(_OWORD *)&v732[80];
              *(_OWORD *)&v687[64] = *(_OWORD *)&v732[64];
              v569 = _mm_loadu_si128((const __m128i *)v732);
              v570 = _mm_loadu_si128((const __m128i *)&v732[32]);
              *(_OWORD *)&v687[48] = *(_OWORD *)&v732[48];
              *(__m128i *)&v687[32] = v570;
              *(_OWORD *)&v687[16] = *(_OWORD *)&v732[16];
              *(__m128i *)v687 = v569;
              v745 = 0;
              sub_1409C7180(v630, v687, v664);
              v571 = v707;
              v707[5] = *(__m128i *)&v630[80];
              v571[4] = *(__m128i *)&v630[64];
              v572 = _mm_loadu_si128((const __m128i *)v630);
              v573 = *(__m128i *)&v630[16];
              v574 = _mm_loadu_si128((const __m128i *)&v630[32]);
              v571[3] = *(__m128i *)&v630[48];
              v571[2] = v574;
              v571[1] = v573;
              *v571 = v572;
              v408 = v668.m128i_i64[1];
              if ( v668.m128i_i64[1] )
                goto LABEL_471;
              goto LABEL_687;
            }
            if ( v721 )
              sub_140001660(v673, v721, 1);
            if ( mm == -1 || v744 != 6 || *(_DWORD *)v364 ^ 0x6E65706F | *(unsigned __int16 *)(v364 + 4) ^ 0x6961 )
            {
LABEL_501:
              v743 = (_QWORD *)v364;
LABEL_502:
              v736 = v379;
              v750 = v379;
LABEL_503:
              v737 = v378;
              v760 = v378;
LABEL_504:
              *(_QWORD *)v687 = v650;
              *(_QWORD *)&v687[8] = sub_1400015F0;
              sub_1416DAFA0(&v674, &unk_141A6201A, v687);
              v345 = v742;
              v426 = _mm_load_si128(&v674);
              v427 = v675;
              if ( (unsigned __int64)(v750 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v731, v736, 1);
              v428 = mm;
              if ( v760 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v734, v737, 1);
              if ( (unsigned __int64)(v428 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                v429 = v743;
                v430 = v428;
                goto LABEL_679;
              }
              goto LABEL_680;
            }
            if ( *(_BYTE *)(v351 + 208) )
            {
              if ( v378 == -1 )
              {
                v737 = -1;
                v743 = (_QWORD *)v364;
                v760 = -1;
                v736 = v379;
                v750 = v379;
                goto LABEL_504;
              }
              if ( v722 != *(_QWORD *)(v351 + 104) || (unsigned int)sub_141923B40(v734, *(_QWORD *)(v351 + 96), v722) )
                goto LABEL_501;
            }
            if ( *(_BYTE *)(v351 + 209) )
            {
              v743 = (_QWORD *)v364;
              if ( v379 == -1 )
              {
                v736 = -1;
                v750 = -1;
                goto LABEL_503;
              }
              if ( *((_QWORD *)&v731 + 1) != *(_QWORD *)(v351 + 128)
                || (unsigned int)sub_141923B40(v731, *(_QWORD *)(v351 + 120), *((_QWORD *)&v731 + 1)) )
              {
                goto LABEL_502;
              }
              v364 = (unsigned __int64)v743;
              if ( v379 )
LABEL_431:
                sub_140001660(v731, v379, 1);
            }
            else if ( (unsigned __int64)(v379 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
            {
              goto LABEL_431;
            }
            v381 = mm;
            if ( (unsigned __int64)(v378 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v734, v378, 1);
            if ( v381 )
              sub_140001660(v364, v381, 1);
          }
        }
      }
    }
    sub_140001000(&v709, v344);
    v431 = (_QWORD *)v659.m256i_i64[1];
    v762 = v659.m256i_i64[1] + 400 * v659.m256i_i64[2];
    v432 = &v688;
    if ( v659.m256i_i64[1] == v762 )
    {
LABEL_539:
      v765 = 0;
      sub_14092D750(v732, v642, v653);
      v448 = v654;
      LOBYTE(v432) = v733;
      sub_1409A2250(v630, v654, v732, (unsigned int)v432);
      sub_1409C72E0(v687, v448, v732, (unsigned int)v432);
      if ( *(_QWORD *)&v630[40] != 2
        || **(_WORD **)&v630[32] != 27503
        || *(_QWORD *)&v687[40] != 2
        || **(_WORD **)&v687[32] != 27503 )
      {
        v715.m128i_i64[0] = (__int64)&v630[48];
        v715.m128i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)v716 = &v687[48];
        *(_QWORD *)&v716[8] = sub_1400015F0;
        sub_1416DAFA0(&v657, &unk_141A61F5B, &v715);
        v426 = _mm_load_si128(&v657);
        v427 = v658;
        sub_140906D60(v687);
        sub_140906D60(v630);
        v765 = 0;
        sub_140190060(v732);
        goto LABEL_672;
      }
      sub_140906D60(v687);
      sub_140906D60(v630);
      v765 = 0;
      sub_140190060(v732);
      v345 = v742;
    }
    else
    {
      while ( 1 )
      {
        v433 = v431[1];
        v434 = v431[2];
        v435 = v431[5];
        v436 = v431[6];
        v765 = 0;
        sub_1407E4440((unsigned int)v687, v433, v434, v435, v436);
        v437 = *(_QWORD *)&v687[8];
        v438 = *(_QWORD *)v687;
        v426 = _mm_loadu_si128((const __m128i *)&v687[16]);
        v427 = *(_QWORD *)&v687[32];
        v678 = *(__m128i *)&v687[40];
        v679 = *(__m256i *)&v687[56];
        v680 = *(__m128i *)&v687[88];
        if ( *(_QWORD *)v687 == -2 )
          break;
        sub_1419234B0(v664, &v688, 240);
        if ( v438 == -1 )
        {
          *(_QWORD *)v732 = v431 + 4;
          *(_QWORD *)&v732[8] = sub_1400015F0;
          v765 = 0;
          sub_1416DAFA0(&v687[8], &unk_141A59C9B, v732);
          v426 = _mm_loadu_si128((const __m128i *)&v687[8]);
          v427 = *(_QWORD *)&v687[24];
          v718 = *(__m128i *)&v687[32];
          v719 = *(__m256i *)&v687[48];
          v720 = _mm_loadu_si128((const __m128i *)&v687[80]);
          v437 = 9;
          goto LABEL_673;
        }
        v760 = (unsigned __int64)(v431 + 4);
        sub_1419234B0(&v631, v664, 240);
        *(__m128i *)&v630[16] = v426;
        *(_QWORD *)&v630[32] = v427;
        v439 = _mm_load_si128((const __m128i *)&v679.m256i_u64[2]);
        *(__m128i *)&v630[40] = _mm_load_si128(&v678);
        *(_OWORD *)&v630[56] = *(_OWORD *)v679.m256i_i8;
        *(__m128i *)&v630[72] = v439;
        *(__m128i *)&v630[88] = v680;
        *(_OWORD *)v630 = __PAIR128__(v437, v438);
        *(_QWORD *)v732 = aFirst_0;
        *(_QWORD *)&v732[8] = 5;
        v440 = v431[10];
        v441 = (v440 & v439.m128i_i64[1]) == -1;
        if ( v440 != -1 && *(_QWORD *)&v630[80] != -1 )
          v441 = *(_QWORD *)&v630[96] == v431[45]
              && (unsigned int)sub_141923B40(*(_QWORD *)&v630[88], v431[44], *(_QWORD *)&v630[96]) == 0;
        v442 = v431[13];
        v443 = (v442 & (unsigned __int64)v631) == -1;
        if ( v442 != -1 && v631 != (__int64 (__fastcall **)())-1LL )
          v443 = v633 == v431[48] && (unsigned int)sub_141923B40(v632, v431[47], v633) == 0;
        if ( *(_QWORD *)&v630[72] != 6
          || !v443
          || !v441
          || (**(_DWORD **)&v630[64] ^ 0x6E65706F | *(unsigned __int16 *)(*(_QWORD *)&v630[64] + 4LL) ^ 0x6961) != 0 )
        {
          goto LABEL_671;
        }
        *(_QWORD *)v732 = aLast_1;
        *(_QWORD *)&v732[8] = 4;
        v444 = v431[19];
        v445 = (v444 & v636) == -1;
        if ( v444 != -1 && v636 != -1 )
          v445 = v638 == v431[45] && (unsigned int)sub_141923B40(v637, v431[44], v638) == 0;
        v446 = v431[22];
        v447 = (v446 & v639) == -1;
        if ( v446 != -1 && v639 != -1 )
          v447 = v641 == v431[48] && (unsigned int)sub_141923B40(v640, v431[47], v641) == 0;
        if ( v635 != 6
          || !v447
          || !v445
          || (*(_DWORD *)v634 ^ 0x6E65706F | *(unsigned __int16 *)(v634 + 4) ^ 0x6961) != 0 )
        {
LABEL_671:
          *(_QWORD *)v687 = v732;
          *(_QWORD *)&v687[8] = sub_140191200;
          *(_QWORD *)&v687[16] = v760;
          *(_QWORD *)&v687[24] = sub_1400015F0;
          sub_1416DAFA0(&v651, &unk_141A61F26, v687);
          v426 = v651;
          v427 = v652;
          sub_1400393B0(v630);
LABEL_672:
          v437 = 10;
LABEL_673:
          v345 = v742;
          goto LABEL_684;
        }
        v431 += 50;
        sub_1400393B0(v630);
        if ( v431 == (_QWORD *)v762 )
          goto LABEL_539;
      }
      v585 = _mm_load_si128((const __m128i *)&v679.m256i_u64[2]);
      v718 = _mm_load_si128(&v678);
      *(_OWORD *)v719.m256i_i8 = *(_OWORD *)v679.m256i_i8;
      *(__m128i *)&v719.m256i_u64[2] = v585;
      v720 = v680;
      v345 = v742;
      if ( *(_QWORD *)&v687[8] != -1 )
        goto LABEL_684;
    }
    sub_1409D7580(v735, v345, (unsigned int)&v676, (unsigned int)aCompleted_2, 9, 0, v601);
    if ( v659.m256i_i64[2] )
    {
      if ( v659.m256i_i64[2] >= 4uLL )
      {
        v590 = (unsigned __int8 *)(v659.m256i_i64[1] + 1592);
        v588 = 0;
        v589 = 0;
        do
        {
          v589 += *(v590 - 1200) + *(v590 - 800) + (unsigned __int64)*(v590 - 400) + *v590;
          v588 += 4;
          v590 += 1600;
        }
        while ( (v659.m256i_i64[2] & 0xFFFFFFFFFFFFFFFCuLL) != v588 );
        if ( (v659.m256i_i8[16] & 3) == 0 )
          goto LABEL_743;
      }
      else
      {
        v588 = 0;
        v589 = 0;
      }
      v591 = 400 * v588 + v659.m256i_i64[1] + 392;
      v592 = 0;
      do
      {
        v589 += *(unsigned __int8 *)(v591 + v592);
        v592 += 400;
      }
      while ( 400LL * (v659.m256i_i8[16] & 3) != v592 );
    }
    else
    {
      v589 = 0;
    }
LABEL_743:
    *(_QWORD *)v717 = v589;
    v593 = 0;
    if ( v659.m256i_i64[2] >= v589 )
      v593 = v659.m256i_i64[2] - v589;
    v678.m128i_i64[0] = v593;
    *(_QWORD *)v664 = v659.m256i_i64[2];
    *(_QWORD *)v630 = v682;
    *(_QWORD *)v687 = v664;
    *(_QWORD *)&v687[8] = sub_1416EBAE0;
    *(_QWORD *)&v687[16] = &v627;
    *(_QWORD *)&v687[24] = sub_1416EBAE0;
    *(_QWORD *)&v687[32] = v630;
    *(_QWORD *)&v687[40] = sub_1416EBAE0;
    *(_QWORD *)&v687[48] = v717;
    *(_QWORD *)&v687[56] = sub_1416EBAE0;
    *(_QWORD *)&v687[64] = &v678;
    *(_QWORD *)&v687[72] = sub_1416EBAE0;
    sub_1416DAFA0(v605, &unk_141A6410B, v687);
    sub_1406C9730((unsigned int)aRelayDiagnosti, 32, (unsigned int)aCompleted_2, 9, (__int64)v605);
    sub_14099F160(v664);
    *(_QWORD *)v630 = 0;
    *(_QWORD *)&v630[8] = 8;
    *(_QWORD *)&v630[16] = 0;
    v762 = sub_14017AA90();
    v726.m256i_i64[0] = v659.m256i_i64[2];
    v594 = &unk_141A6417C;
    if ( v662.m128i_i64[0] != -1 )
      v594 = (void *)v662.m128i_i64[1];
    v595 = 9;
    if ( v662.m128i_i64[0] != -1 )
      v595 = v663;
    v715.m128i_i64[0] = v682;
    *(_QWORD *)v732 = v594;
    *(_QWORD *)&v732[8] = v595;
    *(_QWORD *)v687 = &v726;
    *(_QWORD *)&v687[8] = sub_1416EBAE0;
    *(_QWORD *)&v687[16] = &v627;
    *(_QWORD *)&v687[24] = sub_1416EBAE0;
    *(_QWORD *)&v687[32] = &v715;
    *(_QWORD *)&v687[40] = sub_1416EBAE0;
    *(_QWORD *)&v687[48] = v717;
    *(_QWORD *)&v687[56] = sub_1416EBAE0;
    *(_QWORD *)&v687[64] = v732;
    *(_QWORD *)&v687[72] = sub_140191200;
    *(_QWORD *)&v687[80] = &v678;
    *(_QWORD *)&v687[88] = sub_1416EBAE0;
    sub_1416DAFA0(&v618, &unk_141A64185, v687);
    v596 = (_OWORD *)v762;
    *(_QWORD *)(v762 + 16) = v619;
    *v596 = v618;
    v597 = _mm_loadu_si128((const __m128i *)v664);
    *(__m128i *)v687 = v597;
    *(_QWORD *)&v687[16] = *(_QWORD *)&v664[16];
    *(_OWORD *)&v687[24] = *(_OWORD *)v630;
    *(_QWORD *)&v687[40] = *(_QWORD *)&v630[16];
    v598 = v707;
    v707[2].m128i_i64[1] = *(_QWORD *)&v630[8];
    v598[3].m128i_i64[0] = *(_QWORD *)&v687[40];
    *(__m128i *)((char *)v598 + 24) = *(__m128i *)&v687[16];
    *(__m128i *)((char *)v598 + 8) = v597;
    v598[3].m128i_i64[1] = 1;
    v598[4].m128i_i64[0] = (__int64)v596;
    v598[4].m128i_i64[1] = 1;
    v598->m128i_i64[0] = -1;
    sub_1400293E0(&v667);
    sub_140902E90(&v681);
    sub_140032FF0(&v676);
    if ( v730 )
      sub_140001660(v735, v730, 1);
    sub_1401A4090(&v669);
    sub_1400293E0(&v685);
    return sub_140906F50(&v659);
  }
  v714.m128i_i64[0] = v261;
  v266 = v262[1];
  v750 = (__int64)v262;
  v267 = v262[2];
  v268 = v660;
  v269 = v661;
  sub_1409016A0(v687, v266, v267, 32838);
  if ( (_BYTE)v688 == 0xFF )
  {
    v387 = _mm_load_si128((const __m128i *)v687);
    v388 = _mm_load_si128((const __m128i *)&v687[32]);
    *(_OWORD *)&v664[48] = *(_OWORD *)&v687[48];
    *(__m128i *)&v664[32] = v388;
    *(_OWORD *)&v664[16] = *(_OWORD *)&v687[16];
    *(__m128i *)v664 = v387;
    v678.m128i_i64[0] = v266;
    v678.m128i_i64[1] = v267;
    *(_QWORD *)v732 = &v678;
    *(_QWORD *)&v732[8] = sub_1416CE600;
    *(_QWORD *)&v732[16] = v664;
    *(_QWORD *)&v732[24] = sub_14142D4D0;
    sub_1416DAFA0(&v726, &unk_141A59ED5, v732);
    v389 = v726.m256i_i64[0];
    v390 = v726.m256i_i8[8];
    v718.m128i_i64[0] = *(__int64 *)((char *)&v726.m256i_i64[1] + 1);
    *(__int64 *)((char *)v718.m128i_i64 + 7) = v726.m256i_i64[2];
    sub_140904700(v664);
    v712.m128i_i64[0] = v718.m128i_i64[0];
    *(__int64 *)((char *)v712.m128i_i64 + 7) = *(__int64 *)((char *)v718.m128i_i64 + 7);
    v715.m128i_i64[0] = v712.m128i_i64[0];
    *(__int64 *)((char *)v715.m128i_i64 + 7) = *(__int64 *)((char *)v718.m128i_i64 + 7);
    goto LABEL_464;
  }
  *(__int64 *)((char *)v718.m128i_i64 + 7) = *(_QWORD *)&v687[24];
  v718.m128i_i64[0] = *(_QWORD *)&v687[17];
  v270 = _mm_load_si128((const __m128i *)&v687[64]);
  *(_OWORD *)&v630[80] = *(_OWORD *)&v687[80];
  *(__m128i *)&v630[64] = v270;
  *(_OWORD *)&v630[48] = *(_OWORD *)&v687[48];
  *(_OWORD *)&v630[32] = *(_OWORD *)&v687[32];
  HIDWORD(v631) = HIDWORD(v688);
  *(_DWORD *)((char *)&v631 + 1) = *(_DWORD *)((char *)&v688 + 1);
  v271 = _mm_load_si128((const __m128i *)v687);
  *(__int64 *)((char *)v712.m128i_i64 + 7) = *(__int64 *)((char *)v718.m128i_i64 + 7);
  v712.m128i_i64[0] = *(_QWORD *)&v687[17];
  v630[16] = v687[16];
  *(_QWORD *)&v630[24] = *(__int64 *)((char *)v712.m128i_i64 + 7);
  *(_QWORD *)&v630[17] = *(_QWORD *)&v687[17];
  *(__m128i *)v630 = v271;
  *(_QWORD *)&v630[96] = *(_QWORD *)&v687[96];
  LOBYTE(v631) = (_BYTE)v688;
  sub_141431450(v664, v630, 5, 0);
  if ( *(_QWORD *)v664 != -1 )
  {
    v391 = _mm_loadu_si128((const __m128i *)v664);
    v392 = _mm_loadu_si128((const __m128i *)&v664[32]);
    *(_OWORD *)&v687[48] = *(_OWORD *)&v664[48];
    *(__m128i *)&v687[32] = v392;
    *(_OWORD *)&v687[16] = *(_OWORD *)&v664[16];
    *(__m128i *)v687 = v391;
    v678.m128i_i64[0] = v266;
    v678.m128i_i64[1] = v267;
    *(_QWORD *)v732 = &v678;
    *(_QWORD *)&v732[8] = sub_1416CE600;
    *(_QWORD *)&v732[16] = v687;
    *(_QWORD *)&v732[24] = sub_14142D4D0;
    sub_1416DAFA0(&v726, &unk_141A59F67, v732);
    v389 = v726.m256i_i64[0];
    v390 = v726.m256i_i8[8];
    *(_QWORD *)v732 = *(__int64 *)((char *)&v726.m256i_i64[1] + 1);
    *(_QWORD *)&v732[7] = v726.m256i_i64[2];
    sub_140904700(v687);
    v715.m128i_i64[0] = *(_QWORD *)v732;
    *(__int64 *)((char *)v715.m128i_i64 + 7) = *(_QWORD *)&v732[7];
    goto LABEL_463;
  }
  sub_141431530(
    v687,
    v630,
    *(&off_141A672A8 + (unsigned int)(unsigned __int8)v631),
    qword_141A672C0[(unsigned __int8)v631]);
  if ( *(_QWORD *)v687 != -1 )
  {
    *(_OWORD *)&v664[48] = *(_OWORD *)&v687[48];
    *(_OWORD *)&v664[33] = *(_OWORD *)&v687[33];
    *(__m128i *)&v664[17] = _mm_loadu_si128((const __m128i *)&v687[17]);
    *(_OWORD *)v664 = *(_OWORD *)v687;
    v664[16] = v687[16];
    v726.m256i_i64[0] = v266;
    v726.m256i_i64[1] = v267;
    *(_QWORD *)v687 = &v726;
    *(_QWORD *)&v687[8] = sub_1416CE600;
    *(_QWORD *)&v687[16] = v664;
    *(_QWORD *)&v687[24] = sub_14142D4D0;
    sub_1416DAFA0(v732, &unk_141A59EFE, v687);
    v389 = *(_QWORD *)v732;
    v390 = v732[8];
    *(_QWORD *)v687 = *(_QWORD *)&v732[9];
    *(_QWORD *)&v687[7] = *(_QWORD *)&v732[16];
    sub_140904700(v664);
    goto LABEL_462;
  }
  v672 = (__int64 *)(v750 + 32);
  v760 = v268 + 216 * v269;
  for ( mm = 0; ; ++mm )
  {
    do
    {
      v762 = v268;
      if ( v268 == v760 )
      {
        sub_141431530(v732, v630, aCommit_1, 6);
        if ( *(_QWORD *)v630 >= 0x7FFFFFFFFFFFFFFFuLL )
          sub_14196B550(&off_141A5A9A0);
        ++*(_QWORD *)v630;
        v277 = sub_1417DE470(*(_QWORD *)&v630[16]);
        --*(_QWORD *)v630;
        if ( !v277 )
        {
          sub_141431530(v687, v630, aRollback_2, 8);
          if ( *(_QWORD *)v687 != -1 )
            sub_140904700(v687);
        }
        if ( *(_QWORD *)v732 == -1 )
        {
          sub_140903740(v630);
          v261 = mm + v714.m128i_i64[0];
          v627 = mm + v714.m128i_i64[0];
          v280 = v750;
          v762 = *(_QWORD *)(v750 + 16);
          v281 = v762;
          if ( v762 )
          {
            v282 = *(_QWORD *)(v750 + 8);
            nullsub_1(v279, v278);
            v283 = sub_140001650(v281, 1);
            if ( !v283 )
              sub_14196B2DB(1, v281);
            v760 = v283;
            sub_1419234B0(v283, v282, v281);
            v284 = *(_BYTE *)(v280 + 24);
            v285 = v668.m128i_i64[1];
            if ( v668.m128i_i64[1] != v667 )
              goto LABEL_253;
          }
          else
          {
            v760 = 1;
            v284 = *(_BYTE *)(v750 + 24);
            v285 = v668.m128i_i64[1];
            if ( v668.m128i_i64[1] != v667 )
              goto LABEL_253;
          }
          sub_1419397B0(&v667);
LABEL_253:
          v263 = v668.m128i_i64[0];
          v264 = 32 * v285;
          v265 = v762;
          *(_QWORD *)(v668.m128i_i64[0] + v264) = v762;
          *(_QWORD *)(v263 + v264 + 8) = v760;
          *(_QWORD *)(v263 + v264 + 16) = v265;
          *(_BYTE *)(v263 + v264 + 24) = v284;
          v668.m128i_i64[1] = v285 + 1;
          v262 = v672;
          goto LABEL_254;
        }
        v396 = _mm_loadu_si128((const __m128i *)v732);
        v397 = _mm_loadu_si128((const __m128i *)&v732[32]);
        *(_OWORD *)&v664[48] = *(_OWORD *)&v732[48];
        *(__m128i *)&v664[32] = v397;
        *(_OWORD *)&v664[16] = *(_OWORD *)&v732[16];
        *(__m128i *)v664 = v396;
        v678.m128i_i64[0] = v266;
        v678.m128i_i64[1] = v267;
        *(_QWORD *)v687 = &v678;
        *(_QWORD *)&v687[8] = sub_1416CE600;
        *(_QWORD *)&v687[16] = v664;
        *(_QWORD *)&v687[24] = sub_14142D4D0;
        sub_1416DAFA0(&v726, &unk_141A59F45, v687);
        v389 = v726.m256i_i64[0];
        v390 = v726.m256i_i8[8];
        *(_QWORD *)v687 = *(__int64 *)((char *)&v726.m256i_i64[1] + 1);
        *(_QWORD *)&v687[7] = v726.m256i_i64[2];
        sub_140904700(v664);
LABEL_462:
        v398 = _mm_loadu_si128((const __m128i *)&v687[32]);
        v715 = *(__m128i *)v687;
        *(_OWORD *)v716 = *(_OWORD *)&v687[16];
        *(__m128i *)&v716[16] = v398;
        *(_OWORD *)&v716[32] = *(_OWORD *)&v687[48];
        *(__m128i *)&v716[47] = _mm_loadu_si128((const __m128i *)&v687[63]);
        goto LABEL_463;
      }
      sub_1416B0AC0(&v726, *(_QWORD *)(v268 + 8), *(_QWORD *)(v268 + 16));
      sub_1416B0AC0(v732, v266, v267);
      v268 = v762 + 216;
      v272 = v726.m256i_i64[1];
      v273 = *(_QWORD *)&v732[8];
      if ( v726.m256i_i64[1] == *(_QWORD *)&v732[8] )
      {
        v17 = v726.m256i_u8[16];
        if ( (_BYTE)v728 == v732[56]
          && HIBYTE(v728) == 2
          && v732[57] == 2
          && v726.m256i_i8[16] < 3u == v732[16] < 3u
          && !(unsigned int)sub_141923B40(v726.m256i_i64[0], *(_QWORD *)v732, v726.m256i_i64[1]) )
        {
          break;
        }
      }
      else
      {
        v17 = v726.m256i_u8[16];
      }
      if ( (_BYTE)v17 != 0xFF )
      {
        *(__int64 *)((char *)&v719.m256i_i64[1] + 7) = *(_QWORD *)&v727[16];
        v274 = _mm_loadu_si128((const __m128i *)((char *)&v726.m256i_u64[2] + 1));
        *(_OWORD *)v719.m256i_i8 = *(_OWORD *)&v727[1];
        v718 = v274;
      }
      *(_QWORD *)v664 = v726.m256i_i64[0];
      *(_QWORD *)&v664[8] = v272;
      v664[16] = v17;
      *(_QWORD *)&v664[48] = *(__int64 *)((char *)&v719.m256i_i64[1] + 7);
      *(_OWORD *)&v664[33] = *(_OWORD *)v719.m256i_i8;
      *(__m128i *)&v664[17] = v718;
      *(_WORD *)&v664[56] = v728;
      v664[58] = v729;
      if ( v732[16] != 0xFF )
      {
        *(__int64 *)((char *)&v679.m256i_i64[1] + 7) = *(_QWORD *)&v732[48];
        *(_OWORD *)v679.m256i_i8 = *(_OWORD *)&v732[33];
        v678 = *(__m128i *)&v732[17];
      }
      *(_QWORD *)v687 = *(_QWORD *)v732;
      *(_QWORD *)&v687[8] = v273;
      v687[16] = v732[16];
      *(_QWORD *)&v687[48] = *(__int64 *)((char *)&v679.m256i_i64[1] + 7);
      v275 = _mm_load_si128(&v678);
      *(_OWORD *)&v687[33] = *(_OWORD *)v679.m256i_i8;
      *(__m128i *)&v687[17] = v275;
      *(_WORD *)&v687[56] = *(_WORD *)&v732[56];
      v687[58] = v732[58];
    }
    while ( !(unsigned __int8)sub_140865EB0(v664, v687) );
    *(_QWORD *)v664 = aOpenai_2;
    *(_QWORD *)&v664[8] = 6;
    v276 = *(_BYTE *)(v762 + 209);
    if ( *(_BYTE *)(v762 + 208) )
    {
      *(_QWORD *)v687 = v664;
      *(_QWORD *)&v687[8] = &unk_141A62CF0;
      *(_QWORD *)&v687[16] = v762 + 88;
      *(_QWORD *)&v687[24] = &off_141A62D10;
      if ( v276 )
      {
        *(_QWORD *)&v687[32] = v762 + 112;
        *(_QWORD *)&v687[40] = &off_141A62D10;
        *(_QWORD *)&v687[48] = v762 + 32;
        *(_QWORD *)&v687[56] = &off_141A62D10;
        *(_QWORD *)&v687[64] = v762 + 136;
        *(_QWORD *)&v687[72] = &off_141A62D30;
        *(_QWORD *)&v687[80] = v762 + 160;
        *(_QWORD *)&v687[88] = &off_141A62D30;
        *(_QWORD *)&v687[96] = v762 + 184;
        v688 = &off_141A62D30;
        sub_140901E00((unsigned int)v732, (unsigned int)v630, (unsigned int)aUpdateThreadsS_6, 185, (__int64)v687, 7);
      }
      else
      {
        *(_QWORD *)&v687[32] = v762 + 32;
        *(_QWORD *)&v687[40] = &off_141A62D10;
        *(_QWORD *)&v687[48] = v762 + 136;
        *(_QWORD *)&v687[56] = &off_141A62D30;
        *(_QWORD *)&v687[64] = v762 + 160;
        *(_QWORD *)&v687[72] = &off_141A62D30;
        sub_140901E00((unsigned int)v732, (unsigned int)v630, (unsigned int)aUpdateThreadsS_5, 135, (__int64)v687, 5);
      }
    }
    else
    {
      *(_QWORD *)v687 = v664;
      *(_QWORD *)&v687[8] = &unk_141A62CF0;
      if ( v276 )
      {
        *(_QWORD *)&v687[16] = v762 + 112;
        *(_QWORD *)&v687[24] = &off_141A62D10;
        *(_QWORD *)&v687[32] = v762 + 32;
        *(_QWORD *)&v687[40] = &off_141A62D10;
        *(_QWORD *)&v687[48] = v762 + 136;
        *(_QWORD *)&v687[56] = &off_141A62D30;
        *(_QWORD *)&v687[64] = v762 + 184;
        *(_QWORD *)&v687[72] = &off_141A62D30;
        sub_140901E00((unsigned int)v732, (unsigned int)v630, (unsigned int)aUpdateThreadsS_4, 157, (__int64)v687, 5);
      }
      else
      {
        *(_QWORD *)&v687[16] = v762 + 32;
        *(_QWORD *)&v687[24] = &off_141A62D10;
        *(_QWORD *)&v687[32] = v762 + 136;
        *(_QWORD *)&v687[40] = &off_141A62D30;
        sub_140901E00((unsigned int)v732, (unsigned int)v630, (unsigned int)aUpdateThreadsS_3, 107, (__int64)v687, 3);
      }
    }
    if ( *(_QWORD *)v732 != -1 )
    {
      v393 = _mm_loadu_si128((const __m128i *)v732);
      v394 = _mm_loadu_si128((const __m128i *)&v732[32]);
      *(_OWORD *)&v664[48] = *(_OWORD *)&v732[48];
      *(__m128i *)&v664[32] = v394;
      *(_OWORD *)&v664[16] = *(_OWORD *)&v732[16];
      *(__m128i *)v664 = v393;
      v678.m128i_i64[0] = v266;
      v678.m128i_i64[1] = v267;
      *(_QWORD *)v687 = v762 + 32;
      *(_QWORD *)&v687[8] = sub_1400015F0;
      *(_QWORD *)&v687[16] = &v678;
      *(_QWORD *)&v687[24] = sub_1416CE600;
      *(_QWORD *)&v687[32] = v664;
      *(_QWORD *)&v687[40] = sub_14142D4D0;
      sub_1416DAFA0(&v726, &unk_141A59F2B, v687);
      v389 = v726.m256i_i64[0];
      v390 = v726.m256i_i8[8];
      *(_QWORD *)v687 = *(__int64 *)((char *)&v726.m256i_i64[1] + 1);
      *(_QWORD *)&v687[7] = v726.m256i_i64[2];
      sub_140904700(v664);
      v395 = _mm_loadu_si128((const __m128i *)&v687[32]);
      v715 = *(__m128i *)v687;
      *(_OWORD *)v716 = *(_OWORD *)&v687[16];
      *(__m128i *)&v716[16] = v395;
      *(_OWORD *)&v716[32] = *(_OWORD *)&v687[48];
      *(__m128i *)&v716[47] = _mm_loadu_si128((const __m128i *)&v687[63]);
      goto LABEL_460;
    }
    v718.m128i_i64[0] = *(_QWORD *)&v732[8];
    if ( *(_QWORD *)&v732[8] != 1 )
      break;
  }
  *(_QWORD *)v664 = v266;
  *(_QWORD *)&v664[8] = v267;
  *(_QWORD *)v687 = v762 + 32;
  *(_QWORD *)&v687[8] = sub_1400015F0;
  *(_QWORD *)&v687[16] = v664;
  *(_QWORD *)&v687[24] = sub_1416CE600;
  *(_QWORD *)&v687[32] = &v718;
  *(_QWORD *)&v687[40] = sub_1416EBAE0;
  sub_1416DAFA0(v717, &unk_141A62AB6, v687);
  v389 = *(_QWORD *)v717;
  v390 = v717[8];
  v715.m128i_i64[0] = *(_QWORD *)&v717[9];
  *(__int64 *)((char *)v715.m128i_i64 + 7) = *(_QWORD *)&v717[16];
LABEL_460:
  sub_140904470(v630);
LABEL_463:
  sub_140903740(v630);
LABEL_464:
  *(_QWORD *)v732 = 10;
  *(_QWORD *)&v732[8] = v389;
  v732[16] = v390;
  v399 = _mm_load_si128((const __m128i *)&v716[32]);
  *(__m128i *)&v732[17] = v715;
  *(_OWORD *)&v732[33] = *(_OWORD *)v716;
  *(_OWORD *)&v732[49] = *(_OWORD *)&v716[16];
  *(__m128i *)&v732[65] = v399;
  *(_OWORD *)&v732[80] = *(_OWORD *)&v716[47];
  v400 = _mm_loadu_si128((const __m128i *)((char *)&v681 + 8));
  v747 = 1;
  sub_1409CBF90(
    (unsigned int)v664,
    v660,
    v661,
    v668.m128i_i32[0],
    v668.m128i_i64[1],
    v400.m128i_i64[0],
    v400.m128i_i64[1]);
  *(_QWORD *)v630 = 0;
  *(_QWORD *)&v630[8] = 1;
  *(_QWORD *)&v630[16] = 0;
  *(_QWORD *)&v687[16] = 1610612768;
  *(_QWORD *)v687 = v630;
  *(_QWORD *)&v687[8] = &off_141A66E10;
  if ( (unsigned __int8)sub_140D76130(v732, v687) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_5,
      55,
      (unsigned int)&v756,
      (unsigned int)&unk_141A5A890,
      (__int64)&off_141A66EC8);
  v760 = *(_QWORD *)&v630[8];
  v762 = *(_QWORD *)v630;
  sub_1409D7580(
    v735,
    v742,
    (unsigned int)&v676,
    (unsigned int)&unk_141A640F7,
    11,
    *(__int64 *)&v630[8],
    *(__int64 *)&v630[16]);
  if ( v762 )
    sub_140001660(v760, v762, 1);
  *(_OWORD *)&v630[80] = *(_OWORD *)&v732[80];
  *(_OWORD *)&v630[64] = *(_OWORD *)&v732[64];
  *(_OWORD *)&v630[48] = *(_OWORD *)&v732[48];
  *(_OWORD *)&v630[32] = *(_OWORD *)&v732[32];
  *(_OWORD *)&v630[16] = *(_OWORD *)&v732[16];
  *(_OWORD *)v630 = *(_OWORD *)v732;
  if ( *(_QWORD *)v664 == -1 )
  {
    v402 = *(_QWORD *)v630;
    *(_OWORD *)v726.m256i_i8 = *(_OWORD *)&v732[8];
    v726.m256i_i64[2] = *(_QWORD *)&v732[24];
    v403 = _mm_loadu_si128((const __m128i *)&v732[64]);
    *(__m128i *)v687 = _mm_loadu_si128((const __m128i *)&v732[32]);
    *(_OWORD *)&v687[16] = *(_OWORD *)&v732[48];
    *(__m128i *)&v687[32] = v403;
    *(_OWORD *)&v687[48] = *(_OWORD *)&v732[80];
  }
  else
  {
    *(_QWORD *)v687 = *(_QWORD *)v664;
    v401 = _mm_loadu_si128((const __m128i *)&v664[40]);
    *(_OWORD *)&v687[8] = *(_OWORD *)&v664[8];
    *(_OWORD *)&v687[24] = *(_OWORD *)&v664[24];
    *(__m128i *)&v687[40] = v401;
    *(_OWORD *)&v687[56] = *(_OWORD *)&v664[56];
    *(__m128i *)&v687[72] = _mm_loadu_si128((const __m128i *)&v665);
    *(_QWORD *)&v687[88] = v666.m128i_i64[1];
    v726.m256i_i64[0] = (__int64)v630;
    v726.m256i_i64[1] = (__int64)sub_140D76130;
    v726.m256i_i64[2] = (__int64)v687;
    v726.m256i_i64[3] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v678, &unk_141A62056, &v726);
    *(__m128i *)v726.m256i_i8 = _mm_loadu_si128(&v678);
    v726.m256i_i64[2] = v679.m256i_i64[0];
    sub_140906570(v687);
    v754 = 0;
    v402 = 10;
    sub_140906570(v630);
  }
  v404 = v707;
  v707->m128i_i64[0] = v402;
  *(__m128i *)((char *)v404 + 8) = *(__m128i *)v726.m256i_i8;
  v404[1].m128i_i64[1] = v726.m256i_i64[2];
  v405 = *(__m128i *)&v687[16];
  v406 = _mm_load_si128((const __m128i *)&v687[32]);
  v407 = *(__m128i *)&v687[48];
  v404[2] = _mm_load_si128((const __m128i *)v687);
  v404[3] = v405;
  v404[4] = v406;
  v404[5] = v407;
  v408 = v668.m128i_i64[1];
  if ( v668.m128i_i64[1] )
  {
LABEL_471:
    v409 = (_QWORD *)(v668.m128i_i64[0] + 8);
    do
    {
      v410 = *(v409 - 1);
      if ( v410 )
        sub_140001660(*v409, v410, 1);
      v409 += 4;
      --v408;
    }
    while ( v408 );
  }
LABEL_687:
  if ( v667 )
    sub_140001660(v668.m128i_i64[0], 32 * v667, 8);
LABEL_689:
  sub_140235AA0(&v681);
  if ( (_QWORD)v681 )
    sub_140001660(*((_QWORD *)&v681 + 1), 152 * v681, 8);
  sub_140032FF0(&v676);
  if ( v730 )
    sub_140001660(v735, v730, 1);
LABEL_693:
  v575 = v670;
  v576 = v671;
  if ( v671 )
  {
    v577 = (_QWORD *)(v670 + 40);
    do
    {
      v578 = *(v577 - 5);
      if ( v578 )
        sub_140001660(*(v577 - 4), v578, 1);
      v579 = *(v577 - 1);
      if ( v579 )
        sub_140001660(*v577, v579, 1);
      v577 += 8;
      --v576;
    }
    while ( v576 );
  }
  if ( v669 )
    sub_140001660(v575, v669 << 6, 8);
  v580 = v686.m128i_i64[1];
  v581 = v686.m128i_i64[0];
  if ( v686.m128i_i64[1] )
  {
    v582 = (_QWORD *)(v686.m128i_i64[0] + 8);
    do
    {
      v583 = *(v582 - 1);
      if ( v583 )
        sub_140001660(*v582, v583, 1);
      v582 += 4;
      --v580;
    }
    while ( v580 );
  }
  if ( v685 )
    sub_140001660(v581, 32 * v685, 8);
  return sub_140906F50(&v659);
}
