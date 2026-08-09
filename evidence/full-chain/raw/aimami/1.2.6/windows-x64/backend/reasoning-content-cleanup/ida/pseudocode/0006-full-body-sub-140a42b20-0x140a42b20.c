__m128i *__fastcall sub_140A42B20(__m128i *a1, __m128i *a2, _WORD *a3, __int64 a4, __int64 a5, const __m128i *a6)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __m128i si128; // xmm6
  __m128i v14; // xmm7
  __m128i v15; // xmm13
  __m128i v16; // xmm9
  __int128 v17; // xmm10
  __m128i v18; // xmm14
  __m128i v19; // xmm15
  __m128i v20; // xmm12
  __m128i v21; // xmm11
  __m128i v22; // xmm8
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  char v29; // bl
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  __m128i v34; // kr10_16
  unsigned __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // r8
  __int64 v39; // rsi
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // rsi
  __m128i v43; // kr20_16
  unsigned __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // r8
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __m128i *v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  const __m128i *v55; // r9
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  const __m128i *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // di
  const __m128i *v65; // rbx
  __int64 v66; // rsi
  __m128i v67; // kr30_16
  unsigned __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // r14
  __int64 v71; // r8
  __int64 v72; // rsi
  __m128i v73; // xmm0
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r12
  __int64 v79; // r14
  _DWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __m128i *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _DWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  const char *v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // r12
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rbx
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  __m128i v118; // xmm0
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r8
  const __m128i *v123; // rcx
  __int64 v124; // rsi
  __int64 v125; // rax
  __m128i v126; // xmm11
  __m128i v127; // xmm15
  __m128i v128; // xmm14
  __int128 v129; // rdi
  const char *v130; // rbx
  __int64 v131; // r8
  __m128i v132; // xmm10
  unsigned __int64 v133; // rax
  const __m128i *v135; // rdi
  __int64 v136; // r12
  __m128i v137; // xmm0
  __m128i v138; // xmm9
  __int64 i; // rdx
  __int64 v140; // rax
  __m128i v141; // xmm13
  int v143; // eax
  __int64 v144; // rax
  __int64 *v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __m128i v149; // xmm1
  __int64 v150; // rbx
  __int64 *v151; // rax
  __int64 v152; // rsi
  __int64 v153; // r14
  __int64 *v154; // rdi
  unsigned __int64 v155; // r8
  unsigned __int64 v156; // r12
  __int64 v157; // r12
  int v158; // eax
  char v159; // cl
  __m128i v161; // xmm0
  __int64 v162; // rax
  __int64 v163; // rdi
  __int64 v164; // r8
  __int64 v165; // rbx
  const __m128i *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __m128i v171; // xmm0
  __m128i v172; // xmm0
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // r8
  __m128i v177; // kr40_16
  __int64 v178; // r12
  __int64 v179; // rdi
  __int64 v180; // rdx
  __int64 v181; // rbx
  __m128i v182; // xmm0
  __int64 v183; // rcx
  __int64 v184; // rbx
  const char *v185; // rbx
  __int64 v186; // rdx
  __m128i v187; // kr50_16
  unsigned __int64 v188; // rax
  __int64 v189; // r12
  __int64 v190; // rcx
  __int64 v191; // rdi
  __m128i v192; // xmm0
  __int64 v193; // rdi
  unsigned __int8 *v194; // rax
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rdi
  __int64 v199; // rcx
  unsigned __int8 *v200; // rsi
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rdi
  _DWORD *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __m128i *v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  _DWORD *v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  unsigned __int8 *v222; // rax
  __int128 v223; // rdi
  __int64 v224; // r14
  __int64 v225; // r12
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // r12
  __int64 v229; // r12
  __int64 v230; // rdi
  __int64 v231; // rsi
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rax
  __int64 v235; // rax
  unsigned __int64 v236; // rsi
  __int64 v237; // r14
  unsigned __int64 v238; // rsi
  __int64 v239; // r14
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // r9
  _DWORD *v243; // rax
  __m128i v244; // xmm0
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  _DWORD *v254; // rax
  __m128i v255; // xmm0
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  void *v260; // rax
  __m128i v261; // xmm0
  __int64 v262; // rdx
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  _DWORD *v266; // rax
  __m128i v267; // xmm0
  __int64 v268; // rsi
  __int64 v269; // rax
  __int64 v270; // rcx
  __m128i v271; // xmm0
  __m128i v272; // xmm1
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rcx
  __int64 v278; // rax
  _DWORD *v279; // rax
  __m128i v280; // xmm0
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  _DWORD *v285; // rax
  __m128i v286; // xmm0
  unsigned __int8 *v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  char v292; // di
  __int128 v293; // xmm1
  __m128i v294; // xmm1
  __int64 *v295; // r12
  __int64 v296; // rax
  __int64 *v297; // rcx
  __int64 v298; // rax
  __int64 v299; // rdx
  __m128i v300; // xmm0
  __int64 v301; // rax
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  __int128 v306; // kr70_16
  __int64 v307; // rdi
  __int64 v308; // rax
  __int64 v309; // rbx
  __int128 v310; // xmm0
  __m128i v311; // xmm1
  unsigned __int8 *v312; // rax
  int v313; // ecx
  __m128i v314; // xmm0
  _DWORD *v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __m128i *v320; // rax
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  _WORD *v325; // rax
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  __int64 v330; // rdi
  __int64 v331; // rax
  __int64 v332; // r14
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  _DWORD *v337; // rax
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  __m128i *v342; // rax
  __int64 v343; // rdx
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  __int64 v347; // rax
  __m128i v348; // xmm0
  __int8 v349; // bl
  __m128i v350; // xmm0
  _DWORD *v351; // rax
  __int64 v352; // rdx
  __int64 v353; // rcx
  __int64 v354; // r8
  __int64 v355; // r9
  __m128i *v356; // rax
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  _WORD *v361; // rax
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rsi
  __int64 v367; // rbx
  __int64 v368; // rdi
  __int64 v369; // rax
  __int64 v370; // r13
  __int64 v371; // rdx
  __int64 v372; // rcx
  __int64 v373; // r8
  __int64 v374; // r9
  _DWORD *v375; // rax
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // r14
  __int64 v381; // rdi
  __int64 v382; // rax
  __int64 v383; // rsi
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // r9
  __int64 v388; // rax
  __int64 v389; // rdx
  __int64 v390; // rcx
  __int64 v391; // r8
  __int64 v392; // r9
  __int64 v393; // rax
  __m128i v394; // xmm0
  __int64 v395; // rsi
  unsigned __int128 v396; // krB0_16
  __m128i v397; // xmm1
  __m128i v398; // xmm1
  __int64 v399; // r14
  __int64 v400; // rdx
  __int64 v401; // rax
  char v402; // al
  __int64 v403; // rsi
  __m128i v404; // xmm0
  __int64 v405; // rcx
  __int64 v406; // rsi
  __int64 v407; // rax
  __int64 v408; // rdx
  __int64 v409; // r12
  __int64 v410; // rax
  __int64 v411; // rdx
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __int64 v415; // rax
  __int64 v416; // rbx
  __int64 v417; // r12
  __int64 v418; // rbx
  __int64 v419; // r12
  __int64 v420; // rdi
  __int64 v421; // r14
  __int64 v422; // rax
  char v423; // bl
  char v424; // si
  const __m128i *v425; // rcx
  __int64 v426; // rax
  __int64 v427; // rax
  __int64 v428; // rcx
  __int64 v429; // rax
  __int64 v430; // rax
  __int64 v431; // rcx
  __int64 v432; // rax
  __int64 v433; // rax
  __int64 v434; // r14
  __int64 v435; // rax
  unsigned __int64 v436; // rsi
  __int64 v437; // rax
  __int64 v438; // r14
  __int64 v439; // rdx
  __int64 v440; // rcx
  unsigned __int64 v441; // rsi
  __int64 v442; // rax
  __int64 v443; // rcx
  __m128i v444; // xmm0
  __int64 j; // rcx
  __int64 v446; // rax
  __int64 v447; // rdi
  __int64 v448; // rsi
  __int64 v449; // rbx
  __int64 v450; // r14
  unsigned __int64 v451; // r8
  unsigned __int64 v452; // r12
  __int64 v453; // r12
  int v454; // eax
  _DWORD *v455; // rax
  __int64 v456; // rdx
  __int64 v457; // rcx
  __int64 v458; // r8
  __int64 v459; // r9
  _QWORD *v460; // rax
  __int64 v461; // rdx
  __int64 v462; // rcx
  __int64 v463; // r8
  __int64 v464; // r9
  _WORD *v465; // rax
  __int64 v466; // rdx
  __int64 v467; // rcx
  __int64 v468; // r8
  __int64 v469; // r9
  __int64 v470; // rsi
  __m128i *v471; // rdi
  __int64 v472; // rax
  __int64 v473; // rdx
  __int64 v474; // rcx
  __int64 v475; // r8
  __int64 v476; // r9
  _DWORD *v477; // rax
  __int64 v478; // rdx
  __int64 v479; // rcx
  __int64 v480; // r8
  __int64 v481; // r9
  __int64 v482; // rdi
  __int64 v483; // rsi
  __int64 v484; // rbx
  __int64 v485; // rax
  __int64 v486; // rdx
  __int64 v487; // rcx
  __int64 v488; // r8
  __int64 v489; // r9
  __int64 v490; // rax
  __m128i v491; // xmm0
  __int64 v492; // rax
  __int64 v493; // rdx
  __int64 v494; // r8
  __int64 v495; // r9
  __int64 v496; // rcx
  __int64 v497; // rax
  _DWORD *v498; // rax
  __m128i v499; // xmm0
  __int64 v500; // rdx
  __int64 v501; // rcx
  __int64 v502; // r8
  __int64 v503; // r9
  _DWORD *v504; // rax
  __m128i v505; // xmm0
  __int64 v506; // rax
  __int64 v507; // rdx
  __int64 v508; // r8
  __int64 v509; // r9
  __int64 v510; // rcx
  __int64 v511; // rax
  _DWORD *v512; // rax
  __m128i v513; // xmm0
  __int64 v514; // rdx
  __int64 v515; // rcx
  __int64 v516; // r8
  __int64 v517; // r9
  _QWORD *v518; // rax
  __m128i v519; // xmm0
  __int64 v520; // rdx
  __int64 v521; // rcx
  __int64 v522; // r8
  __int64 v523; // r9
  __int64 v524; // rax
  __m128i v525; // xmm0
  __m128i v526; // xmm1
  __int64 v527; // rax
  __int64 v528; // rbx
  __int64 v529; // rsi
  __int64 v530; // rdx
  __int64 v531; // rcx
  __int64 v532; // r8
  __int64 v533; // r9
  _DWORD *v534; // rax
  __int64 v535; // rdx
  __int64 v536; // rcx
  __int64 v537; // r8
  __int64 v538; // r9
  __m128i *v539; // rax
  __int64 v540; // rdx
  __int64 v541; // rcx
  __int64 v542; // r8
  __int64 v543; // r9
  _DWORD *v544; // rax
  __int64 v545; // rdx
  __int64 v546; // rcx
  __int64 v547; // r8
  __int64 v548; // r9
  __int64 v549; // r15
  __m128i v550; // krE0_16
  __int64 v551; // r12
  __int64 v552; // r8
  __int64 v553; // rdi
  __m128i v554; // xmm0
  __int64 v555; // rcx
  __int64 v556; // rsi
  __int64 v557; // rax
  __int64 v558; // r14
  __int64 v559; // rcx
  __int64 v560; // rdx
  __int64 v561; // rcx
  __int64 v562; // rcx
  __int64 v563; // rdx
  const __m128i *v564; // rsi
  __m128i *v565; // rbx
  __int64 v566; // rax
  __int64 v567; // rdx
  __int64 v568; // rcx
  __int64 v569; // r8
  __int64 v570; // r9
  _DWORD *v571; // rax
  __int64 v572; // rdx
  __int64 v573; // rcx
  __int64 v574; // r8
  __int64 v575; // r9
  __m128i *v576; // rax
  __int64 v577; // rdx
  __int64 v578; // rcx
  __int64 v579; // r8
  __int64 v580; // r9
  _DWORD *v581; // rax
  __int64 v582; // rdx
  __int64 v583; // rcx
  __int64 v584; // r8
  __int64 v585; // r9
  __int64 v586; // rax
  __int64 v587; // rdx
  __int64 v588; // rcx
  __int64 v589; // r8
  __int64 v590; // r9
  const __m128i *v591; // rdi
  _DWORD *v592; // rax
  __int64 v593; // rdx
  __int64 v594; // rcx
  __int64 v595; // r8
  __int64 v596; // r9
  _DWORD *v597; // rax
  __int64 v598; // rdx
  __int64 v599; // rcx
  __int64 v600; // r8
  __int64 v601; // r9
  _DWORD *v602; // rax
  __int64 v603; // rdx
  __int64 v604; // rcx
  __int64 v605; // r8
  __int64 v606; // r9
  __int64 v607; // rax
  __int64 v608; // rcx
  __m128i v609; // xmm0
  __m128i v610; // xmm1
  __int64 v611; // rax
  __int64 v612; // rdx
  __int64 v613; // rcx
  __int64 v614; // r8
  __int64 v615; // r9
  __int64 v616; // rdi
  bool v617; // zf
  __int64 v618; // rsi
  __m128i *v620; // rcx
  __int64 v621; // rsi
  __int64 v622; // rdi
  const __m128i *v623; // rbx
  const __m128i *v624; // r14
  __m128i v626; // xmm0
  __int64 v627; // rax
  __int64 v628; // rdx
  unsigned __int64 v629; // rax
  __int64 v630; // rsi
  __int64 v631; // rcx
  __int64 v632; // rsi
  __int64 v633; // rax
  char v634; // r14
  __int64 v635; // rax
  __int64 v636; // rdx
  __int64 v637; // r8
  __int64 v638; // r9
  __int64 v639; // rbx
  char v640; // al
  __int64 v641; // rsi
  __int64 v642; // rax
  __int64 v643; // rdx
  __int64 v644; // rcx
  __int64 v645; // r8
  __int64 v646; // r9
  __int64 v647; // rax
  __int64 v648; // rdx
  __int64 v649; // rcx
  __int64 v650; // r8
  __int64 v651; // r9
  _QWORD *v652; // rax
  __m128i v653; // xmm0
  __int64 v654; // rdx
  __int64 v655; // rcx
  __int64 v656; // r8
  __int64 v657; // r9
  void *v658; // rax
  __m128i v659; // xmm0
  _OWORD *v660; // rax
  __int64 v661; // r12
  __m128i *v663; // rcx
  __int64 v664; // rax
  __int64 v665; // rax
  __int64 v666; // rax
  __int64 v667; // rax
  __int64 v668; // rdx
  __int64 v669; // rcx
  __int64 v670; // r8
  __int64 v671; // r9
  unsigned __int64 v672; // rsi
  __int64 v673; // rdi
  __int64 v674; // r15
  __int64 v675; // rax
  __int64 v676; // r14
  __int64 v677; // rax
  __int64 v678; // r8
  __int64 v679; // r8
  bool v680; // r15
  char v681; // si
  bool v682; // di
  bool v683; // r14
  unsigned __int64 v684; // rdx
  unsigned __int64 v685; // rcx
  __int64 v686; // r8
  __int64 v687; // r9
  char v688; // r15
  char v689; // di
  unsigned __int8 v690; // r14
  __int64 v691; // rax
  char v692; // di
  char v693; // al
  _DWORD *v694; // rax
  __int64 v695; // rdx
  __int64 v696; // rcx
  __int64 v697; // r8
  __int64 v698; // r9
  __m128i *v699; // rax
  _DWORD *v700; // rax
  __int64 v701; // rdx
  __int64 v702; // rcx
  __int64 v703; // r8
  __int64 v704; // r9
  __m128i *v705; // rax
  _WORD *v706; // rsi
  __int64 v707; // rdx
  __int64 v708; // rcx
  __int64 v709; // r8
  __int64 v710; // r9
  __int64 v711; // rax
  __m128i v712; // xmm0
  _OWORD *v713; // rax
  __int64 v714; // r9
  __m128i v715; // xmm0
  _OWORD *v716; // rax
  __int64 v717; // rax
  __m128i v718; // xmm0
  unsigned __int64 v719; // rsi
  __int64 v720; // rax
  __int64 v721; // r9
  _DWORD *v722; // rax
  __m128i v723; // xmm0
  __int64 v724; // rdx
  __int64 v725; // rcx
  __int64 v726; // r8
  __int64 v727; // r9
  void *v728; // rax
  __m128i v729; // xmm0
  _OWORD *v730; // rax
  __int64 v731; // r9
  __int64 v732; // rax
  __m128i v733; // xmm0
  __m128i v734; // xmm0
  _OWORD *v735; // rax
  _DWORD *v736; // rax
  __int64 v737; // rdx
  __int64 v738; // rcx
  __int64 v739; // r8
  __int64 v740; // r9
  __m128i *v741; // rax
  _DWORD *v742; // rax
  __int64 v743; // rdx
  __int64 v744; // rcx
  __int64 v745; // r8
  __int64 v746; // r9
  __m128i *v747; // rax
  __m128i v748; // xmm0
  _OWORD *v749; // rax
  __int64 v750; // rax
  __int64 v751; // rcx
  __int64 v752; // rdx
  __m128i v753; // xmm6
  __m128i v754; // xmm7
  _BYTE *v755; // rax
  __int64 v756; // rax
  __int64 v757; // rdx
  __int64 v758; // rcx
  __int64 v759; // r8
  __m128i *v760; // rdi
  __int64 v761; // r14
  __int64 v762; // rax
  __int64 v763; // rcx
  __int64 v764; // rdx
  __int64 v765; // rax
  __int64 v766; // rcx
  __int64 v767; // rdx
  const __m128i *v768; // r8
  __int64 v769; // rdi
  __int64 v770; // r15
  __int64 v771; // r12
  __int64 v772; // rax
  __int64 v773; // rax
  __int64 v774; // rax
  __int64 v775; // r12
  __int64 v776; // rsi
  __int64 v777; // rax
  __int64 v778; // r9
  __int64 v779; // rcx
  const __m128i *v780; // rax
  __int64 v781; // rdx
  __int64 v782; // rax
  const __m128i *v783; // rax
  __int64 v784; // r10
  __int64 v785; // r11
  char v788; // r11
  __int64 v789; // rdx
  __int64 v790; // r9
  __int64 v791; // rax
  __m128i v792; // xmm8
  __m128i v793; // xmm9
  __int64 v794; // rax
  __m128i v795; // xmm0
  __int64 v796; // rsi
  __int64 v797; // rax
  __int64 v798; // rcx
  unsigned __int64 v799; // rax
  __int64 v800; // rax
  __int64 v801; // rcx
  __int64 v802; // rsi
  __int64 v803; // rsi
  __int64 v804; // rax
  __m128i v805; // xmm0
  __int64 v806; // rax
  __int64 v807; // rcx
  unsigned __int64 v808; // rax
  __int64 v809; // rax
  unsigned __int64 v810; // rsi
  __int64 v811; // rsi
  __int64 v812; // rsi
  __int64 v813; // rax
  __int64 v814; // r9
  __int64 v815; // rdx
  __int64 v816; // rcx
  unsigned __int64 v817; // r8
  int v818; // eax
  __int64 v819; // rcx
  __int64 v820; // rax
  __int64 v821; // rax
  __m128i *v822; // r9
  unsigned __int128 v823; // kr00_16
  unsigned __int64 v824; // rax
  __int64 v825; // r8
  __m128i v826; // xmm0
  __m128i v827; // xmm11
  unsigned __int64 v828; // rax
  __m128i v829; // xmm12
  __int64 v831; // rax
  __int64 v832; // rdx
  int v833; // eax
  unsigned int v834; // eax
  unsigned __int64 v835; // r8
  __int64 v836; // rax
  __m128i *v837; // rax
  __m128i *v838; // r9
  __int64 v839; // r8
  int v840; // eax
  __int64 v841; // rsi
  __int64 v842; // rax
  __int64 v843; // rcx
  __m128i v844; // xmm0
  __int64 v845; // rax
  __int64 v846; // r9
  __int64 v847; // rcx
  __int64 v848; // rdx
  __int64 v849; // rsi
  __int64 v850; // r13
  __int64 v851; // rax
  int v852; // edi
  unsigned __int8 *v853; // rax
  __int64 v854; // rdx
  __int64 v855; // r8
  __int64 v856; // r9
  unsigned __int8 *v857; // rsi
  int v858; // eax
  _QWORD *v859; // rax
  __int64 v860; // rcx
  _DWORD *v861; // rax
  __m128i v862; // xmm0
  __int64 v863; // rax
  __int64 v864; // r15
  __int64 v865; // r12
  __int8 v866; // cl
  __int64 v867; // rax
  __int64 v868; // rdx
  __int64 v869; // r8
  __int64 v870; // r9
  __int64 v871; // rcx
  __int64 v872; // r13
  __int64 v873; // rdx
  __int64 v874; // r13
  unsigned __int64 v875; // r13
  __int64 v876; // rax
  __int64 v877; // rcx
  __m128i v878; // xmm0
  __int64 v879; // rcx
  __int64 v880; // rax
  __int64 v881; // r8
  __int64 v882; // r9
  _QWORD *v883; // rcx
  __int64 v884; // rax
  _DWORD *v885; // rax
  __m128i v886; // xmm0
  __int64 v887; // rdx
  __int64 v888; // rcx
  __int64 v889; // r8
  __int64 v890; // r9
  _DWORD *v891; // rax
  __m128i v892; // xmm0
  __int64 v893; // rcx
  __int64 v894; // rsi
  __int64 v896; // rsi
  __int64 v897; // rdi
  __int64 v898; // rbx
  const __m128i *v899; // r14
  __m128i v901; // xmm0
  __int64 v902; // rax
  __int64 v903; // rdx
  unsigned __int64 v904; // rax
  __int64 v905; // rsi
  __int64 v906; // rsi
  __int64 v907; // rbx
  __int64 v908; // r14
  const __m128i *v909; // r15
  __m128i v911; // xmm0
  __int64 v913; // rax
  __int64 v914; // rdx
  __int64 v915; // rax
  __int64 v916; // rsi
  __int64 v917; // rsi
  __m128i v918; // xmm0
  __m128i v919; // xmm1
  __m128i v920; // xmm0
  _OWORD *v921; // rax
  __int64 v922; // rax
  __m128i v923; // xmm0
  __m128i v924; // xmm0
  _OWORD *v925; // rax
  _DWORD *v926; // rax
  __m128i v927; // xmm0
  __int64 v928; // rcx
  __int64 v929; // rcx
  __m128i v930; // xmm0
  __m128i v931; // xmm1
  __m128i v932; // xmm2
  __m128i v933; // xmm3
  __m128i v934; // xmm4
  __m128i v935; // xmm5
  __m128i v936; // xmm6
  __int64 v937; // rcx
  __m128i v938; // xmm0
  __m128i v939; // xmm1
  __m128i v940; // xmm2
  __m128i v941; // xmm3
  __m128i v942; // xmm4
  _DWORD *v943; // rax
  __m128i v944; // xmm0
  char v945; // si
  __m128i v946; // xmm0
  _OWORD *v947; // rax
  const __m128i *v948; // rax
  __int64 v949; // rdx
  __int64 v950; // rcx
  __int64 v951; // r8
  __int64 v952; // r9
  __int64 v953; // rax
  __int64 v954; // rsi
  __m128i v955; // xmm0
  _OWORD *v956; // rax
  __int64 v957; // rax
  _BYTE *v958; // rax
  __int64 v959; // rax
  __int64 v960; // rax
  __int64 v961; // rdx
  __int64 v962; // rcx
  __int64 v963; // r8
  __int64 v964; // r9
  _DWORD *v965; // rax
  __m128i v966; // xmm0
  __m128i v967; // xmm0
  _OWORD *v968; // rax
  _BYTE *v969; // rax
  __int64 v970; // rdx
  __int64 v971; // rcx
  __int64 v972; // r8
  __int64 v973; // r9
  _BYTE *v974; // rsi
  __int64 v975; // rax
  __int64 v976; // rax
  __int64 v977; // rsi
  __int64 v978; // rax
  __int64 v979; // rbx
  __int64 v980; // rdx
  __int64 v981; // rax
  __int64 v982; // rdx
  __int64 v983; // rcx
  __int64 v984; // r8
  __int64 v985; // r9
  unsigned __int64 v986; // r14
  __int64 v987; // rdi
  __int64 v988; // rsi
  __int64 v989; // rax
  __m128i *v990; // r15
  __int64 v991; // rax
  unsigned __int64 v992; // rcx
  __m128i v993; // xmm0
  __m128i v994; // xmm1
  __m128i v995; // xmm2
  __m128i v996; // xmm3
  __m128i v997; // xmm4
  __m128i v998; // xmm5
  __m128i v999; // xmm6
  __int64 v1000; // rcx
  __m128i v1001; // xmm0
  __m128i v1002; // xmm1
  __m128i v1003; // xmm2
  __m128i v1004; // xmm3
  __m128i v1005; // xmm4
  __int64 v1006; // rax
  __int64 v1007; // rax
  __int64 v1008; // rsi
  unsigned __int64 v1009; // rbx
  __m128i *v1010; // r14
  __int64 v1012; // rdi
  __int64 v1013; // r14
  const __m128i *v1015; // r15
  __m128i v1016; // xmm0
  __int64 v1017; // rsi
  const __m128i *v1018; // rsi
  __int64 v1019; // rcx
  __int64 v1020; // rcx
  unsigned __int64 v1021; // rax
  unsigned __int64 v1022; // rcx
  int v1023; // edx
  __int64 v1024; // r15
  __int64 v1025; // rdi
  __int64 v1026; // rdx
  __int64 v1027; // rcx
  __int64 v1028; // r8
  __int64 v1029; // r9
  _DWORD *v1030; // rax
  __m128i v1031; // xmm0
  __int64 v1032; // rdx
  __int64 v1033; // rcx
  __int64 v1034; // r8
  __int64 v1035; // r9
  _DWORD *v1036; // rax
  __m128i v1037; // xmm0
  __m128i *v1038; // r14
  __int64 v1039; // rsi
  __int64 v1040; // rsi
  __int64 v1041; // rsi
  __int64 v1042; // rsi
  __int64 v1043; // rdi
  __int64 v1044; // rdx
  __int64 v1045; // rcx
  __int64 v1046; // r8
  __int64 v1047; // r9
  __int64 v1048; // rax
  __int64 v1049; // rdx
  __int64 v1050; // rcx
  __int64 v1051; // r8
  __int64 v1052; // r9
  char v1053; // bl
  _BYTE *v1054; // rax
  _DWORD *v1055; // rax
  __m128i v1056; // xmm0
  __m128i v1057; // xmm0
  __m128i *v1058; // rax
  __int64 v1059; // rax
  __m128i v1060; // xmm0
  __m128i *v1061; // rax
  _DWORD *v1062; // rax
  __m128i v1063; // xmm0
  __m128i v1064; // xmm0
  _OWORD *v1065; // rax
  _DWORD *v1066; // rax
  __int64 v1067; // rdx
  __int64 v1068; // rcx
  __int64 v1069; // r8
  __int64 v1070; // r9
  __m128i *v1071; // rax
  const __m128i *v1072; // rax
  __m128i v1073; // xmm0
  __int64 v1074; // r14
  __int64 v1075; // r15
  const __m128i *v1076; // rax
  __m128i v1077; // xmm0
  __int64 v1078; // rdx
  __m128i v1079; // xmm0
  _OWORD *v1080; // rax
  __int64 v1081; // rdx
  __int64 v1082; // r8
  __m128i *v1083; // rcx
  __m128i *v1084; // rdx
  __int64 v1085; // r8
  __int64 v1086; // r9
  char v1087; // di
  __int64 v1088; // rbx
  __int128 v1089; // rdi
  __int64 v1090; // rax
  __int64 v1091; // rdx
  __int64 v1092; // rcx
  __int64 v1093; // r8
  __int64 v1094; // r9
  __m128i *v1095; // r14
  _DWORD *v1096; // rax
  __int64 v1097; // rdx
  __int64 v1098; // rcx
  __int64 v1099; // r8
  __int64 v1100; // r9
  _DWORD *v1101; // rax
  __int64 v1102; // rdx
  __int64 v1103; // rcx
  __int64 v1104; // r8
  __int64 v1105; // r9
  _DWORD *v1106; // rax
  __int64 v1107; // rdx
  __int64 v1108; // rcx
  __int64 v1109; // r8
  __int64 v1110; // r9
  __int64 v1111; // rbx
  __int64 v1112; // rdi
  __int64 v1113; // rax
  __m128i v1114; // xmm0
  __int64 v1115; // rsi
  __int64 v1116; // rdi
  void *v1117; // rax
  __m128i v1118; // xmm0
  __m128i v1119; // xmm0
  __m128i *v1120; // rax
  __int64 v1121; // rax
  __int64 v1122; // rdi
  __int64 v1123; // rbx
  __int64 v1124; // rdi
  __int64 v1125; // rax
  unsigned __int32 v1126; // eax
  const __m128i *v1127; // rax
  __m128i v1128; // xmm0
  int v1129; // eax
  __int64 v1130; // rsi
  __int64 v1131; // rbx
  void *v1132; // rax
  __m128i v1133; // xmm0
  __m128i v1134; // xmm0
  __m128i *v1135; // rax
  char v1136; // si
  __int64 v1137; // rdx
  __int64 v1138; // rcx
  __int64 v1139; // r8
  __int64 v1140; // r9
  _DWORD *v1141; // rax
  __m128i v1142; // xmm0
  __int64 v1143; // rdx
  __int64 v1144; // rcx
  __int64 v1145; // r8
  __int64 v1146; // r9
  _DWORD *v1147; // rax
  __m128i v1148; // xmm0
  __int64 v1149; // rdx
  __int64 v1150; // rcx
  __int64 v1151; // r8
  __int64 v1152; // r9
  void *v1153; // rax
  __m128i v1154; // xmm0
  __m128i *v1155; // rcx
  __m128i v1156; // xmm0
  __m128i v1157; // xmm0
  __m128i *v1158; // rax
  __m128i v1159; // xmm0
  __m128i v1160; // xmm1
  __m128i v1161; // xmm2
  __m128i v1162; // xmm3
  __m128i v1163; // xmm4
  __m128i *v1164; // rax
  __int64 v1165; // rcx
  __int64 v1167; // rsi
  __int64 v1168; // rsi
  __int64 v1169; // rdi
  const __m128i *v1170; // rbx
  const __m128i *v1171; // r14
  __m128i v1173; // xmm0
  __int64 v1174; // rax
  __int64 v1175; // rdx
  unsigned __int64 v1176; // rax
  __int64 v1177; // rsi
  __int64 v1178; // rcx
  __int64 v1179; // rsi
  __int64 v1181; // [rsp+20h] [rbp-60h]
  __int64 v1182; // [rsp+20h] [rbp-60h]
  __int64 v1183; // [rsp+20h] [rbp-60h]
  __int64 v1184; // [rsp+20h] [rbp-60h]
  __int64 v1185; // [rsp+20h] [rbp-60h]
  __int64 v1186; // [rsp+20h] [rbp-60h]
  __int64 v1187; // [rsp+20h] [rbp-60h]
  __int64 v1188; // [rsp+20h] [rbp-60h]
  __int64 v1189; // [rsp+20h] [rbp-60h]
  __int64 v1190; // [rsp+20h] [rbp-60h]
  __int64 v1191; // [rsp+20h] [rbp-60h]
  __int64 v1192; // [rsp+20h] [rbp-60h]
  __int64 v1193; // [rsp+20h] [rbp-60h]
  __int64 v1194; // [rsp+20h] [rbp-60h]
  __int64 v1195; // [rsp+20h] [rbp-60h]
  __int64 v1196; // [rsp+20h] [rbp-60h]
  __int64 v1197; // [rsp+20h] [rbp-60h]
  __int64 v1198; // [rsp+20h] [rbp-60h]
  __int64 v1199; // [rsp+20h] [rbp-60h]
  __int64 v1200; // [rsp+20h] [rbp-60h]
  __int64 v1201; // [rsp+20h] [rbp-60h]
  __int64 v1202; // [rsp+20h] [rbp-60h]
  __int64 v1203; // [rsp+20h] [rbp-60h]
  __int64 v1204; // [rsp+20h] [rbp-60h]
  __int64 v1205; // [rsp+20h] [rbp-60h]
  __int64 v1206; // [rsp+20h] [rbp-60h]
  __int64 v1207; // [rsp+20h] [rbp-60h]
  __int64 v1208; // [rsp+20h] [rbp-60h]
  __int64 v1209; // [rsp+20h] [rbp-60h]
  __int64 v1210; // [rsp+20h] [rbp-60h]
  __int64 v1211; // [rsp+20h] [rbp-60h]
  __int64 v1212; // [rsp+20h] [rbp-60h]
  __int64 v1213; // [rsp+20h] [rbp-60h]
  __int64 v1214; // [rsp+20h] [rbp-60h]
  __int64 v1215; // [rsp+20h] [rbp-60h]
  __int64 v1216; // [rsp+20h] [rbp-60h]
  __int64 v1217; // [rsp+20h] [rbp-60h]
  __int64 v1218; // [rsp+20h] [rbp-60h]
  __int64 v1219; // [rsp+20h] [rbp-60h]
  __int64 v1220; // [rsp+20h] [rbp-60h]
  __int64 v1221; // [rsp+20h] [rbp-60h]
  __int64 v1222; // [rsp+20h] [rbp-60h]
  __int64 v1223; // [rsp+20h] [rbp-60h]
  __int64 v1224; // [rsp+20h] [rbp-60h]
  __int64 v1225; // [rsp+20h] [rbp-60h]
  __int64 v1226; // [rsp+20h] [rbp-60h]
  __int64 v1227; // [rsp+20h] [rbp-60h]
  __int64 v1228; // [rsp+20h] [rbp-60h]
  __int64 v1229; // [rsp+20h] [rbp-60h]
  __int64 v1230; // [rsp+20h] [rbp-60h]
  __int64 v1231; // [rsp+20h] [rbp-60h]
  __int64 v1232; // [rsp+20h] [rbp-60h]
  __int64 v1233; // [rsp+20h] [rbp-60h]
  __int64 v1234; // [rsp+20h] [rbp-60h]
  __int64 v1235; // [rsp+20h] [rbp-60h]
  __int64 v1236; // [rsp+20h] [rbp-60h]
  __m128i v1237; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v1238; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v1239; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v1240; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v1241; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v1242; // [rsp+180h] [rbp+100h] BYREF
  __int64 v1243; // [rsp+198h] [rbp+118h] BYREF
  __int128 v1244; // [rsp+1A0h] [rbp+120h]
  const __m128i *v1245; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v1246; // [rsp+1B8h] [rbp+138h]
  __int64 v1247; // [rsp+1C8h] [rbp+148h]
  char v1248[16]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v1249; // [rsp+1E0h] [rbp+160h] BYREF
  unsigned __int64 v1250; // [rsp+1E8h] [rbp+168h]
  __int64 v1251; // [rsp+1F0h] [rbp+170h]
  __int64 v1252; // [rsp+1F8h] [rbp+178h]
  __m128i *v1253; // [rsp+200h] [rbp+180h]
  __int64 v1254; // [rsp+208h] [rbp+188h]
  unsigned __int128 v1255; // [rsp+210h] [rbp+190h] BYREF
  __int64 v1256; // [rsp+220h] [rbp+1A0h]
  __m128i *v1257; // [rsp+228h] [rbp+1A8h]
  __m128i v1258; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i *v1259; // [rsp+240h] [rbp+1C0h]
  __int64 v1260; // [rsp+248h] [rbp+1C8h]
  __int64 v1261; // [rsp+250h] [rbp+1D0h]
  __int64 v1262; // [rsp+258h] [rbp+1D8h]
  __int64 v1263; // [rsp+260h] [rbp+1E0h]
  __m128i v1264; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v1265; // [rsp+278h] [rbp+1F8h]
  __m256i v1266; // [rsp+280h] [rbp+200h] BYREF
  __int64 v1267; // [rsp+2A0h] [rbp+220h]
  __int64 v1268; // [rsp+2A8h] [rbp+228h]
  const __m128i *v1269; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v1270; // [rsp+2B8h] [rbp+238h]
  const __m128i *v1271; // [rsp+2C0h] [rbp+240h]
  __int64 k; // [rsp+2C8h] [rbp+248h]
  __int64 v1273; // [rsp+2D0h] [rbp+250h]
  __int64 v1274; // [rsp+2D8h] [rbp+258h] BYREF
  __m128i v1275; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v1276; // [rsp+2F0h] [rbp+270h]
  __int64 v1277; // [rsp+2F8h] [rbp+278h]
  __m128i v1278; // [rsp+300h] [rbp+280h] BYREF
  __int64 v1279; // [rsp+310h] [rbp+290h]
  _BYTE v1280[31]; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v1281; // [rsp+340h] [rbp+2C0h]
  _WORD *v1282; // [rsp+348h] [rbp+2C8h]
  char v1283; // [rsp+355h] [rbp+2D5h]
  char v1284; // [rsp+356h] [rbp+2D6h]
  char v1285; // [rsp+357h] [rbp+2D7h]
  char v1286; // [rsp+358h] [rbp+2D8h]
  char v1287; // [rsp+359h] [rbp+2D9h]
  char v1288; // [rsp+35Ah] [rbp+2DAh]
  char v1289; // [rsp+35Bh] [rbp+2DBh]
  char v1290; // [rsp+35Ch] [rbp+2DCh]
  char v1291; // [rsp+35Dh] [rbp+2DDh]
  char v1292; // [rsp+35Eh] [rbp+2DEh]
  char v1293; // [rsp+35Fh] [rbp+2DFh]
  char v1294; // [rsp+360h] [rbp+2E0h]
  char v1295; // [rsp+361h] [rbp+2E1h]
  char v1296; // [rsp+362h] [rbp+2E2h]
  char v1297; // [rsp+363h] [rbp+2E3h]
  char v1298; // [rsp+364h] [rbp+2E4h]
  char v1299; // [rsp+365h] [rbp+2E5h]
  char v1300; // [rsp+366h] [rbp+2E6h]
  char v1301; // [rsp+367h] [rbp+2E7h]
  char v1302; // [rsp+368h] [rbp+2E8h]
  char v1303; // [rsp+369h] [rbp+2E9h]
  char v1304; // [rsp+36Ah] [rbp+2EAh]
  char v1305; // [rsp+36Bh] [rbp+2EBh]
  char v1306; // [rsp+36Ch] [rbp+2ECh]
  char v1307; // [rsp+36Dh] [rbp+2EDh]
  char v1308; // [rsp+36Eh] [rbp+2EEh]
  char v1309; // [rsp+36Fh] [rbp+2EFh]
  char v1310; // [rsp+370h] [rbp+2F0h]
  char v1311; // [rsp+371h] [rbp+2F1h]
  char v1312; // [rsp+372h] [rbp+2F2h]
  char v1313; // [rsp+373h] [rbp+2F3h]
  char v1314; // [rsp+374h] [rbp+2F4h]
  char v1315; // [rsp+375h] [rbp+2F5h]
  char v1316; // [rsp+376h] [rbp+2F6h]
  char v1317; // [rsp+377h] [rbp+2F7h]
  __int64 v1318; // [rsp+378h] [rbp+2F8h]
  __m128i v1319; // [rsp+380h] [rbp+300h] BYREF
  unsigned __int64 v1320; // [rsp+390h] [rbp+310h]
  __int64 v1321; // [rsp+3A0h] [rbp+320h]
  __int64 v1322; // [rsp+3A8h] [rbp+328h]
  __m256i v1323; // [rsp+3B0h] [rbp+330h] BYREF
  __m128i v1324; // [rsp+3D0h] [rbp+350h] BYREF
  char v1325; // [rsp+3EFh] [rbp+36Fh]
  char v1326; // [rsp+3F0h] [rbp+370h]
  char v1327; // [rsp+3F1h] [rbp+371h]
  char v1328; // [rsp+3F2h] [rbp+372h]
  char v1329; // [rsp+3F3h] [rbp+373h]
  char v1330; // [rsp+3F4h] [rbp+374h]
  char v1331; // [rsp+3F5h] [rbp+375h]
  char v1332; // [rsp+3F6h] [rbp+376h]
  char v1333; // [rsp+3F7h] [rbp+377h] BYREF
  _BYTE v1334[24]; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v1335; // [rsp+410h] [rbp+390h]
  __int64 v1336; // [rsp+418h] [rbp+398h]
  __m128i *v1337; // [rsp+420h] [rbp+3A0h]
  char v1338; // [rsp+429h] [rbp+3A9h]
  char v1339; // [rsp+42Ah] [rbp+3AAh]
  char v1340; // [rsp+42Bh] [rbp+3ABh]
  char v1341; // [rsp+42Ch] [rbp+3ACh]
  char v1342; // [rsp+42Dh] [rbp+3ADh]
  char v1343; // [rsp+42Eh] [rbp+3AEh]
  char v1344; // [rsp+42Fh] [rbp+3AFh]
  char v1345; // [rsp+430h] [rbp+3B0h]
  char v1346; // [rsp+431h] [rbp+3B1h]
  char v1347; // [rsp+432h] [rbp+3B2h]
  char v1348; // [rsp+433h] [rbp+3B3h]
  char v1349; // [rsp+434h] [rbp+3B4h]
  char v1350; // [rsp+435h] [rbp+3B5h]
  char v1351; // [rsp+436h] [rbp+3B6h]
  char v1352; // [rsp+437h] [rbp+3B7h]
  char v1353; // [rsp+438h] [rbp+3B8h]
  char v1354; // [rsp+439h] [rbp+3B9h]
  char v1355; // [rsp+43Ah] [rbp+3BAh]
  char v1356; // [rsp+43Bh] [rbp+3BBh]
  char v1357; // [rsp+43Ch] [rbp+3BCh]
  char v1358; // [rsp+43Dh] [rbp+3BDh]
  char v1359; // [rsp+43Eh] [rbp+3BEh]
  char v1360; // [rsp+43Fh] [rbp+3BFh]
  char v1361; // [rsp+440h] [rbp+3C0h]
  char v1362; // [rsp+441h] [rbp+3C1h]
  char v1363; // [rsp+442h] [rbp+3C2h]
  char v1364; // [rsp+443h] [rbp+3C3h]
  char v1365; // [rsp+444h] [rbp+3C4h]
  char v1366; // [rsp+445h] [rbp+3C5h]
  __int8 v1367; // [rsp+446h] [rbp+3C6h]
  char v1368; // [rsp+447h] [rbp+3C7h]
  char v1369; // [rsp+448h] [rbp+3C8h]
  char v1370; // [rsp+449h] [rbp+3C9h]
  char v1371; // [rsp+44Ah] [rbp+3CAh]
  char v1372; // [rsp+44Bh] [rbp+3CBh]
  char v1373; // [rsp+44Ch] [rbp+3CCh]
  char v1374; // [rsp+44Dh] [rbp+3CDh]
  char v1375; // [rsp+44Eh] [rbp+3CEh]
  char v1376; // [rsp+44Fh] [rbp+3CFh]
  __int64 v1377; // [rsp+450h] [rbp+3D0h]
  char v1378; // [rsp+45Ch] [rbp+3DCh]
  char v1379; // [rsp+45Dh] [rbp+3DDh]
  char v1380; // [rsp+45Eh] [rbp+3DEh]
  char v1381; // [rsp+45Fh] [rbp+3DFh]
  __m256i v1382; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v1383; // [rsp+480h] [rbp+400h]
  __int64 v1384; // [rsp+498h] [rbp+418h]
  char v1385; // [rsp+4A7h] [rbp+427h]
  __int64 v1386; // [rsp+4A8h] [rbp+428h]
  __m256i v1387; // [rsp+4B0h] [rbp+430h] BYREF
  const __m128i *v1388; // [rsp+4D8h] [rbp+458h]
  __int64 v1389; // [rsp+4E0h] [rbp+460h]
  char v1390; // [rsp+4EFh] [rbp+46Fh]
  _BYTE v1391[80]; // [rsp+4F0h] [rbp+470h] BYREF
  void *v1392; // [rsp+540h] [rbp+4C0h]
  __m256i *v1393; // [rsp+548h] [rbp+4C8h]
  __m256i v1394; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v1395; // [rsp+580h] [rbp+500h] BYREF
  const __m128i *v1396; // [rsp+598h] [rbp+518h]
  char v1397; // [rsp+5A7h] [rbp+527h]
  __m128i *v1398; // [rsp+5A8h] [rbp+528h]
  char v1399; // [rsp+5B5h] [rbp+535h]
  char v1400; // [rsp+5B6h] [rbp+536h]
  char v1401; // [rsp+5B7h] [rbp+537h]
  __int64 v1402; // [rsp+5B8h] [rbp+538h]
  char v1403; // [rsp+5C7h] [rbp+547h]
  __int64 v1404; // [rsp+5C8h] [rbp+548h]

  v1404 = -2;
  v1321 = a4;
  v1282 = a3;
  v1257 = a1;
  v1269 = nullptr;
  v1270 = 8;
  v1271 = nullptr;
  v1254 = -1;
  v1332 = 1;
  v1337 = a2;
  v7 = sub_1414D4800(aTools_3, 5, a2);
  v1254 = -1;
  v1332 = 1;
  sub_140A39720(&v1245, v7);
  v1277 = -1;
  v1399 = 1;
  v8 = sub_1414D4800(aInstructions, 12, v1337);
  v9 = -1;
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v11 = *(_QWORD *)(v8 + 24);
    v1277 = -1;
    v1399 = 1;
    sub_140A02410(v1391, v10, v11);
    v8 = *(_QWORD *)&v1391[16];
    *(_QWORD *)v1334 = *(_QWORD *)&v1391[16];
    if ( *(_QWORD *)&v1391[16] )
    {
      v8 = *(_QWORD *)&v1391[8];
      v9 = *(_QWORD *)v1391;
    }
    else if ( *(_QWORD *)v1391 )
    {
      v8 = sub_140001660(*(_QWORD *)&v1391[8], *(_QWORD *)v1391, 1);
    }
  }
  v1322 = v8;
  v1273 = v8;
  v1396 = (const __m128i *)v9;
  v1277 = v9;
  v1399 = 1;
  v12 = sub_1414D4800(aInput_3, 5, v1337);
  if ( !v12 || *(_BYTE *)v12 != 4 )
  {
    v1273 = v1322;
    v1277 = (__int64)v1396;
    v1399 = 1;
    v527 = sub_1414D4800(aInput_3, 5, v1337);
    if ( !v527 )
      goto LABEL_617;
    if ( *(_BYTE *)v527 != 3 )
      goto LABEL_617;
    v528 = *(_QWORD *)(v527 + 16);
    v529 = *(_QWORD *)(v527 + 24);
    sub_140A82F20(v528, v529);
    if ( !v530 )
      goto LABEL_617;
    v1323.m256i_i64[0] = 0;
    v1323.m256i_i64[2] = 0;
    nullsub_1(v531, v530, v532, v533, v1181);
    v534 = (_DWORD *)sub_140001650(4, 1);
    if ( !v534 )
      sub_14176E54B(1, 4);
    *v534 = 1701869940;
    v1382.m256i_i64[0] = 4;
    v1382.m256i_i64[1] = (__int64)v534;
    v1382.m256i_i64[2] = 4;
    nullsub_1(v536, v535, v537, v538, v1210);
    v539 = (__m128i *)sub_140001650(4, 1);
    v1402 = (__int64)v539;
    if ( !v539 )
      sub_14176E54B(1, 4);
    v539->m128i_i32[0] = 1954047348;
    v1391[0] = 3;
    *(_QWORD *)&v1391[8] = 4;
    *(_QWORD *)&v1391[16] = v539;
    *(_QWORD *)&v1391[24] = 4;
    sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
    if ( v1394.m256i_i8[0] != -1 )
      sub_1401FF690(&v1394);
    nullsub_1(v541, v540, v542, v543, v1211);
    v544 = (_DWORD *)sub_140001650(4, 1);
    if ( !v544 )
      sub_14176E54B(1, 4);
    *v544 = 1954047348;
    v1382.m256i_i64[0] = 4;
    v1382.m256i_i64[1] = (__int64)v544;
    v1382.m256i_i64[2] = 4;
    if ( v529 < 0 )
    {
      v549 = 0;
      goto LABEL_588;
    }
    if ( v529 )
    {
      nullsub_1(v546, v545, v547, v548, v1181);
      v549 = 1;
      v557 = sub_140001650(v529, 1);
      if ( !v557 )
      {
LABEL_588:
        v1306 = 1;
        sub_14176E54B(v549, v529);
      }
      v558 = v557;
      sub_14172B820(v557, v528, v529);
    }
    else
    {
      v558 = 1;
    }
    v1391[0] = 3;
    *(_QWORD *)&v1391[8] = v529;
    *(_QWORD *)&v1391[16] = v558;
    *(_QWORD *)&v1391[24] = v529;
    v1306 = 0;
    sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
    if ( v1394.m256i_i8[0] != -1 )
      sub_1401FF690(&v1394);
    *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
    *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
    v1391[0] = 5;
    v1273 = v1322;
    v1277 = (__int64)v1396;
    v1399 = 1;
    sub_140A21BF0(&v1269, "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone", 4, v1391);
    goto LABEL_617;
  }
  v1319.m128i_i64[0] = 0;
  v1319.m128i_i64[1] = 8;
  v1320 = 0;
  v6 = *(_QWORD *)(v12 + 16);
  v1262 = v6 + 32LL * *(_QWORD *)(v12 + 24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_14184EC10);
  v14 = _mm_load_si128((const __m128i *)&xmmword_14184ED80);
  v15 = _mm_load_si128((const __m128i *)&xmmword_141801A40);
  v16 = _mm_load_si128((const __m128i *)&xmmword_141801A50);
  v17 = 0;
  v18 = _mm_load_si128((const __m128i *)&xmmword_141801AA0);
  v19 = _mm_cvtsi32_si128(0x67u);
  v20 = _mm_cvtsi32_si128(0x7475u);
  v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
  v22 = _mm_load_si128((const __m128i *)&xmmword_14184ED70);
  v23 = 0x6E61747369737361LL;
  while ( 1 )
  {
    v1386 = v6;
    if ( v6 == v1262 )
      break;
    v24 = v23;
    v1388 = v1396;
    v25 = sub_1414D4800(aType_8, 4, v6);
    v6 = v1386 + 32;
    v23 = v24;
    if ( v25 && *(_BYTE *)v25 == 3 )
    {
      v27 = *(_QWORD *)(v25 + 16);
      v28 = *(_QWORD *)(v25 + 24);
      if ( v28 == 16 )
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), si128)) == 0xFFFF
          || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), v14)) == 0xFFFF )
        {
          v29 = 0;
LABEL_18:
          v1388 = v1396;
          v30 = sub_1414D4800(aStatus_6, 6, v1386);
          if ( !v30 )
            goto LABEL_24;
          if ( *(_BYTE *)v30 != 3 )
            goto LABEL_24;
          v23 = v24;
          if ( *(_QWORD *)(v30 + 24) == 9 )
          {
            v26 = 0x6574656C706D6F63LL;
            v23 = v24;
            if ( !(**(_QWORD **)(v30 + 16) ^ 0x6574656C706D6F63LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v30 + 16) + 8LL) ^ 0x64LL) )
              goto LABEL_24;
          }
        }
        else
        {
LABEL_36:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), si128)) == 0xFFFF )
          {
            v67 = v1319;
            v68 = v1320;
            v1319.m128i_i64[0] = 0;
            v1319.m128i_i64[1] = 8;
            v1320 = 0;
            v69 = 32 * v68;
            v70 = v67.m128i_i64[1] + 32 * v68;
            v1394.m256i_i64[0] = v67.m128i_i64[1];
            v1394.m256i_i64[1] = v67.m128i_i64[1];
            v1394.m256i_i64[2] = v67.m128i_i64[0];
            v1394.m256i_i64[3] = v70;
            v71 = v67.m128i_i64[1];
            if ( v68 )
            {
              v71 = v67.m128i_i64[1] + 32;
              while ( *(_BYTE *)(v71 - 32) != 0xFF )
              {
                v72 = v71 - 32;
                v1391[0] = *(_BYTE *)(v71 - 32);
                v73 = _mm_loadu_si128((const __m128i *)(v71 - 32 + 1));
                *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v71 - 32 + 16));
                *(__m128i *)&v1391[1] = v73;
                v1389 = v71;
                sub_140A284E0(&v1269, v1391);
                v71 = v1389 + 32;
                if ( v72 + 32 == v70 )
                {
                  v71 = v70;
                  break;
                }
              }
              v1394.m256i_i64[1] = v71;
            }
            v1281 = v69;
            v1377 = v67.m128i_i64[1];
            v1384 = v67.m128i_i64[0];
            v1398 = (__m128i *)((unsigned __int64)(v70 - v71) >> 5);
            v1389 = v71;
            v74 = v71;
            v1402 = 0;
            while ( v1398 != (__m128i *)v1402 )
            {
              ++v1402;
              v75 = v74 + 32;
              sub_1403FF680(v74, v26);
              v74 = v75;
            }
            if ( v1384 )
              sub_140001660(v1377, 32 * v1384, 8);
            v1388 = v1396;
            v76 = sub_1414D4800(aCallId, 7, v1386);
            if ( v76 || (v1388 = v1396, (v76 = sub_1414D4800(aId_7, 2, v1386)) != 0) )
            {
              v77 = v1386;
              if ( *(_BYTE *)v76 == 3 )
              {
                v78 = *(_QWORD *)(v76 + 16);
                v79 = *(_QWORD *)(v76 + 24);
              }
              else
              {
                v78 = 1;
                v79 = 0;
              }
            }
            else
            {
              v78 = 1;
              v79 = 0;
              v77 = v1386;
            }
            v1388 = v1396;
            v162 = sub_1414D4800(aName_7, 4, v77);
            v163 = 1;
            if ( v162 )
            {
              v164 = v1386;
              if ( *(_BYTE *)v162 == 3 )
              {
                v163 = *(_QWORD *)(v162 + 16);
                v165 = *(_QWORD *)(v162 + 24);
              }
              else
              {
                v165 = 0;
              }
            }
            else
            {
              v165 = 0;
              v164 = v1386;
            }
            v1388 = v1396;
            v166 = (const __m128i *)sub_1414D4800(aInput_3, 5, v164);
            if ( v166 )
            {
              switch ( v166->m128i_i8[0] )
              {
                case 0:
                  v1391[0] = 0;
                  break;
                case 1:
                case 2:
                  v171 = _mm_loadu_si128(v166);
                  *(__m128i *)&v1391[16] = _mm_loadu_si128(v166 + 1);
                  *(__m128i *)v1391 = v171;
                  break;
                case 3:
                  v1388 = v1396;
                  sub_141543F00(&v1391[8], &v166->m128i_u64[1]);
                  v1391[0] = 3;
                  break;
                case 4:
                  v1388 = v1396;
                  sub_140465C50(&v1391[8], &v166->m128i_u64[1]);
                  v1391[0] = 4;
                  break;
                case 5:
                  if ( v166[1].m128i_i64[1] )
                  {
                    v175 = v166->m128i_i64[1];
                    if ( !v175 )
                    {
                      v1388 = v1396;
                      sub_14176E840(&off_1417E9A90);
                    }
                    v176 = v166[1].m128i_i64[0];
                    v1388 = v1396;
                    sub_14005C470(&v1391[8], v175, v176);
                  }
                  else
                  {
                    *(_QWORD *)&v1391[8] = 0;
                    *(_QWORD *)&v1391[24] = 0;
                  }
                  v1391[0] = 5;
                  break;
              }
              v168 = *(_QWORD *)&v1391[1];
              v167 = *(unsigned int *)&v1391[9];
              v169 = *(unsigned __int16 *)&v1391[13];
              v170 = v1391[15];
              *(__m128i *)&v1387.m256i_u64[2] = _mm_load_si128((const __m128i *)&v1391[16]);
              v1387.m256i_i8[0] = v1391[0];
              *(__int64 *)((char *)v1387.m256i_i64 + 1) = *(_QWORD *)&v1391[1];
              *(__int32 *)((char *)&v1387.m256i_i32[2] + 1) = *(_DWORD *)&v1391[9];
              *(__int16 *)((char *)&v1387.m256i_i16[6] + 1) = *(_WORD *)&v1391[13];
              v1387.m256i_i8[15] = v1391[15];
            }
            else
            {
              v1387.m256i_i8[0] = 3;
              v1387.m256i_i64[1] = 0;
              *(_OWORD *)&v1387.m256i_u64[2] = 1u;
            }
            v1278.m128i_i64[0] = 0;
            v1279 = 0;
            nullsub_1(v168, v167, v169, v170, v1181);
            v351 = (_DWORD *)sub_140001650(4, 1);
            if ( !v351 )
              sub_14176E54B(1, 4);
            *v351 = 1701869940;
            v1382.m256i_i64[0] = 4;
            v1382.m256i_i64[1] = (__int64)v351;
            v1382.m256i_i64[2] = 4;
            nullsub_1(v353, v352, v354, v355, v1198);
            v356 = (__m128i *)sub_140001650(8, 1);
            v1402 = (__int64)v356;
            if ( !v356 )
              sub_14176E54B(1, 8);
            v356->m128i_i64[0] = 0x6573755F6C6F6F74LL;
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = 8;
            *(_QWORD *)&v1391[16] = v356;
            *(_QWORD *)&v1391[24] = 8;
            sub_1401A27E0(&v1394, &v1278, &v1382, v1391);
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v358, v357, v359, v360, v1199);
            v361 = (_WORD *)sub_140001650(2, 1);
            if ( !v361 )
              sub_14176E54B(1, 2);
            *v361 = 25705;
            v1382.m256i_i64[0] = 2;
            v1382.m256i_i64[1] = (__int64)v361;
            v1382.m256i_i64[2] = 2;
            if ( v79 < 0 )
            {
              v368 = 0;
LABEL_608:
              v1315 = 1;
              sub_14176E54B(v368, v79);
            }
            v1402 = v6;
            if ( v79 )
            {
              v366 = v165;
              v367 = v163;
              nullsub_1(v363, v362, v364, v365, v1200);
              v368 = 1;
              v369 = sub_140001650(v79, 1);
              if ( !v369 )
                goto LABEL_608;
              v370 = v369;
              sub_14172B820(v369, v78, v79);
              v163 = v367;
              v165 = v366;
            }
            else
            {
              v370 = 1;
            }
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = v79;
            *(_QWORD *)&v1391[16] = v370;
            *(_QWORD *)&v1391[24] = v79;
            v1315 = 0;
            sub_1401A27E0(&v1394, &v1278, &v1382, v1391);
            v6 = v1402;
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v372, v371, v373, v374, v1200);
            v375 = (_DWORD *)sub_140001650(4, 1);
            if ( !v375 )
              sub_14176E54B(1, 4);
            *v375 = 1701667182;
            v1382.m256i_i64[0] = 4;
            v1382.m256i_i64[1] = (__int64)v375;
            v1382.m256i_i64[2] = 4;
            if ( v165 < 0 )
            {
              v381 = 0;
LABEL_717:
              v1314 = 1;
              sub_14176E54B(v381, v165);
            }
            if ( v165 )
            {
              v380 = v163;
              nullsub_1(v377, v376, v378, v379, v1201);
              v381 = 1;
              v382 = sub_140001650(v165, 1);
              if ( !v382 )
                goto LABEL_717;
              v383 = v382;
              sub_14172B820(v382, v380, v165);
            }
            else
            {
              v383 = 1;
            }
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = v165;
            *(_QWORD *)&v1391[16] = v383;
            *(_QWORD *)&v1391[24] = v165;
            v1314 = 0;
            sub_1401A27E0(&v1394, &v1278, &v1382, v1391);
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v385, v384, v386, v387, v1201);
            v388 = sub_140001650(5, 1);
            if ( !v388 )
              sub_14176E54B(1, 5);
            *(_BYTE *)(v388 + 4) = 116;
            *(_DWORD *)v388 = 1970302569;
            *(_QWORD *)v1280 = 5;
            *(_QWORD *)&v1280[8] = v388;
            *(_QWORD *)&v1280[16] = 5;
            v1274 = 0;
            v1275.m128i_i64[1] = 0;
            nullsub_1(v390, v389, v391, v392, v1202);
            v393 = sub_140001650(5, 1);
            if ( !v393 )
              sub_14176E54B(1, 5);
            *(_BYTE *)(v393 + 4) = 116;
            *(_DWORD *)v393 = 1970302569;
            *(_QWORD *)&v1334[8] = 5;
            *(_QWORD *)&v1334[16] = v393;
            v1335 = 5;
            v1368 = 1;
            sub_1404B9F30(v1391, &v1387);
            if ( v1391[0] == 0xFF )
            {
              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v1394,
                (unsigned int)&off_141851870,
                (__int64)&off_141856278);
            }
            v394 = _mm_loadu_si128((const __m128i *)v1391);
            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
            *(__m128i *)v1394.m256i_i8 = v394;
            v1368 = 0;
            sub_1401A27E0(v1391, &v1274, &v1334[8], &v1394);
            if ( v1391[0] != 0xFF )
              sub_1401FF690(v1391);
            v1382.m256i_i64[3] = v1275.m128i_i64[1];
            *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1274);
            v1382.m256i_i8[0] = 5;
            v1313 = 0;
            sub_1401A27E0(v1391, &v1278, v1280, &v1382);
            if ( v1391[0] != 0xFF )
              sub_1401FF690(v1391);
            v1323.m256i_i64[3] = v1279;
            *(__m128i *)&v1323.m256i_u64[1] = _mm_loadu_si128(&v1278);
            v1323.m256i_i8[0] = 5;
            sub_140A21BF0(&v1269, aAssistant_0, 9, &v1323);
            v1388 = v1396;
            sub_1401FF690(&v1387);
            v23 = v24;
          }
          else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), v14)) == 0xFFFF )
          {
            v34 = v1319;
            v35 = v1320;
            v1319.m128i_i64[0] = 0;
            v1319.m128i_i64[1] = 8;
            v1320 = 0;
            v36 = 32 * v35;
            v37 = v34.m128i_i64[1] + 32 * v35;
            v1394.m256i_i64[0] = v34.m128i_i64[1];
            v1394.m256i_i64[1] = v34.m128i_i64[1];
            v1394.m256i_i64[2] = v34.m128i_i64[0];
            v1394.m256i_i64[3] = v37;
            v38 = v34.m128i_i64[1];
            if ( v35 )
            {
              v38 = v34.m128i_i64[1] + 32;
              while ( *(_BYTE *)(v38 - 32) != 0xFF )
              {
                v39 = v38 - 32;
                v1391[0] = *(_BYTE *)(v38 - 32);
                v40 = _mm_loadu_si128((const __m128i *)(v38 - 32 + 1));
                *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v38 - 32 + 16));
                *(__m128i *)&v1391[1] = v40;
                v1389 = v38;
                sub_140A284E0(&v1269, v1391);
                v38 = v1389 + 32;
                if ( v39 + 32 == v37 )
                {
                  v38 = v37;
                  break;
                }
              }
              v1394.m256i_i64[1] = v38;
            }
            v1281 = v36;
            v1377 = v34.m128i_i64[1];
            v1384 = v34.m128i_i64[0];
            v1398 = (__m128i *)((unsigned __int64)(v37 - v38) >> 5);
            v1389 = v38;
            v41 = v38;
            v1402 = 0;
            while ( v1398 != (__m128i *)v1402 )
            {
              ++v1402;
              v42 = v41 + 32;
              sub_1403FF680(v41, v26);
              v41 = v42;
            }
            if ( v1384 )
              sub_140001660(v1377, 32 * v1384, 8);
            v1388 = v1396;
            v108 = sub_1414D4800(aCallId, 7, v1386);
            if ( v108 || (v1388 = v1396, (v108 = sub_1414D4800(aId_7, 2, v1386)) != 0) )
            {
              v109 = v1386;
              if ( *(_BYTE *)v108 == 3 )
              {
                v110 = *(_QWORD *)(v108 + 16);
                v111 = *(_QWORD *)(v108 + 24);
              }
              else
              {
                v110 = 1;
                v111 = 0;
              }
            }
            else
            {
              v110 = 1;
              v111 = 0;
              v109 = v1386;
            }
            v1388 = v1396;
            v287 = (unsigned __int8 *)sub_1414D4800(aArguments_1, 9, v109);
            if ( v287 )
            {
              v292 = *v287;
              v289 = *v287;
              switch ( *v287 )
              {
                case 0u:
                  goto LABEL_336;
                case 1u:
                case 2u:
                  v293 = *((_OWORD *)v287 + 1);
                  *(_OWORD *)v1391 = *(_OWORD *)v287;
                  *(_OWORD *)&v1391[16] = v293;
                  v292 = v1391[0];
                  v294 = _mm_loadu_si128((const __m128i *)v287 + 1);
                  *(__m128i *)v1394.m256i_i8 = _mm_loadu_si128((const __m128i *)(v287 + 1));
                  *(__m128i *)((char *)&v1394.m256i_u64[1] + 7) = v294;
                  if ( v1391[0] == 0xFF )
                    break;
                  goto LABEL_337;
                case 3u:
                  v1388 = v1396;
                  sub_141543F00(&v1391[8], v287 + 8);
                  goto LABEL_336;
                case 4u:
                  v1388 = v1396;
                  sub_140465C50(&v1391[8], v287 + 8);
                  goto LABEL_336;
                case 5u:
                  v1388 = v1396;
                  sub_1401A7FA0(&v1391[8], v287 + 8);
LABEL_336:
                  v314 = _mm_loadu_si128((const __m128i *)&v1391[1]);
                  *(__m128i *)((char *)&v1394.m256i_u64[1] + 7) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                  *(__m128i *)v1394.m256i_i8 = v314;
LABEL_337:
                  v1391[0] = v292;
                  *(_OWORD *)&v1391[16] = *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7);
                  *(__m128i *)&v1391[1] = _mm_load_si128((const __m128i *)&v1394);
                  if ( v292 == 5 )
                  {
                    *(_OWORD *)&v1323.m256i_u64[2] = *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7);
                    *(__m128i *)&v1323.m256i_i8[1] = _mm_load_si128((const __m128i *)&v1394);
                    goto LABEL_341;
                  }
                  v1388 = v1396;
                  sub_1401FF690(v1391);
                  break;
              }
            }
            v1323.m256i_i64[1] = 0;
            v1323.m256i_i64[3] = 0;
LABEL_341:
            v1323.m256i_i8[0] = 5;
            *(_QWORD *)&v1334[8] = 0;
            v1335 = 0;
            nullsub_1(v289, v288, v290, v291, v1181);
            v315 = (_DWORD *)sub_140001650(4, 1);
            if ( !v315 )
              sub_14176E54B(1, 4);
            *v315 = 1701869940;
            v1387.m256i_i64[0] = 4;
            v1387.m256i_i64[1] = (__int64)v315;
            v1387.m256i_i64[2] = 4;
            nullsub_1(v317, v316, v318, v319, v1193);
            v320 = (__m128i *)sub_140001650(8, 1);
            v1402 = (__int64)v320;
            if ( !v320 )
              sub_14176E54B(1, 8);
            v320->m128i_i64[0] = 0x6573755F6C6F6F74LL;
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = 8;
            *(_QWORD *)&v1391[16] = v320;
            *(_QWORD *)&v1391[24] = 8;
            sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v322, v321, v323, v324, v1194);
            v325 = (_WORD *)sub_140001650(2, 1);
            if ( !v325 )
              sub_14176E54B(1, 2);
            *v325 = 25705;
            v1387.m256i_i64[0] = 2;
            v1387.m256i_i64[1] = (__int64)v325;
            v1387.m256i_i64[2] = 2;
            if ( v111 < 0 )
            {
              v330 = 0;
LABEL_714:
              v1316 = 1;
              sub_14176E54B(v330, v111);
            }
            if ( v111 )
            {
              nullsub_1(v327, v326, v328, v329, v1195);
              v330 = 1;
              v331 = sub_140001650(v111, 1);
              if ( !v331 )
                goto LABEL_714;
              v332 = v331;
              sub_14172B820(v331, v110, v111);
            }
            else
            {
              v332 = 1;
            }
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = v111;
            *(_QWORD *)&v1391[16] = v332;
            *(_QWORD *)&v1391[24] = v111;
            v1316 = 0;
            sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v334, v333, v335, v336, v1195);
            v337 = (_DWORD *)sub_140001650(4, 1);
            if ( !v337 )
              sub_14176E54B(1, 4);
            *v337 = 1701667182;
            v1387.m256i_i64[0] = 4;
            v1387.m256i_i64[1] = (__int64)v337;
            v1387.m256i_i64[2] = 4;
            nullsub_1(v339, v338, v340, v341, v1196);
            v342 = (__m128i *)sub_140001650(11, 1);
            v1402 = (__int64)v342;
            if ( !v342 )
              sub_14176E54B(1, 11);
            qmemcpy(v342, "tool_search", 11);
            v1391[0] = 3;
            *(_QWORD *)&v1391[8] = 11;
            *(_QWORD *)&v1391[16] = v342;
            *(_QWORD *)&v1391[24] = 11;
            sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
            if ( v1394.m256i_i8[0] != -1 )
              sub_1401FF690(&v1394);
            nullsub_1(v344, v343, v345, v346, v1197);
            v347 = sub_140001650(5, 1);
            if ( !v347 )
              sub_14176E54B(1, 5);
            *(_BYTE *)(v347 + 4) = 116;
            *(_DWORD *)v347 = 1970302569;
            v1387.m256i_i64[0] = 5;
            v1387.m256i_i64[1] = v347;
            v1387.m256i_i64[2] = 5;
            v1369 = 1;
            sub_1404B9F30(v1391, &v1323);
            if ( v1391[0] == 0xFF )
            {
              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v1394,
                (unsigned int)&off_141851870,
                (__int64)&off_141856260);
            }
            v348 = _mm_loadu_si128((const __m128i *)v1391);
            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
            *(__m128i *)v1394.m256i_i8 = v348;
            v1369 = 0;
            sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
            if ( v1391[0] != 0xFF )
              sub_1401FF690(v1391);
            v1382.m256i_i64[3] = v1335;
            *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1334[8]);
            v1382.m256i_i8[0] = 5;
            sub_140A21BF0(&v1269, aAssistant_0, 9, &v1382);
            v1388 = v1396;
            sub_1401FF690(&v1323);
            v23 = v24;
          }
        }
      }
      else
      {
        if ( v28 == 13 )
        {
          if ( *(_QWORD *)v27 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v27 + 5) ^ 0x6C6C61635F6E6F69LL )
            goto LABEL_34;
          v29 = 1;
          goto LABEL_18;
        }
        v29 = 0;
LABEL_24:
        if ( v28 == 7 )
        {
          v26 = 1701273971;
          if ( *(_DWORD *)v27 ^ 0x7373656D | *(_DWORD *)(v27 + 3) ^ 0x65676173 )
          {
LABEL_33:
            if ( v29 )
            {
LABEL_34:
              v26 = 0x6C6C61635F6E6F69LL;
              if ( *(_QWORD *)v27 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v27 + 5) ^ 0x6C6C61635F6E6F69LL )
                goto LABEL_35;
              v43 = v1319;
              v44 = v1320;
              v1319.m128i_i64[0] = 0;
              v1319.m128i_i64[1] = 8;
              v1320 = 0;
              v45 = 32 * v44;
              v46 = v43.m128i_i64[1] + 32 * v44;
              v1394.m256i_i64[0] = v43.m128i_i64[1];
              v1394.m256i_i64[1] = v43.m128i_i64[1];
              v1394.m256i_i64[2] = v43.m128i_i64[0];
              v1394.m256i_i64[3] = v46;
              v47 = v43.m128i_i64[1];
              if ( v44 )
              {
                v47 = v43.m128i_i64[1] + 32;
                while ( *(_BYTE *)(v47 - 32) != 0xFF )
                {
                  v48 = v47 - 32;
                  v1391[0] = *(_BYTE *)(v47 - 32);
                  v49 = _mm_loadu_si128((const __m128i *)(v47 - 32 + 1));
                  *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v47 - 32 + 16));
                  *(__m128i *)&v1391[1] = v49;
                  v1389 = v47;
                  sub_140A284E0(&v1269, v1391);
                  v47 = v1389 + 32;
                  if ( v48 + 32 == v46 )
                  {
                    v47 = v46;
                    break;
                  }
                }
                v1394.m256i_i64[1] = v47;
              }
              v1281 = v45;
              v1377 = v43.m128i_i64[1];
              v1384 = v43.m128i_i64[0];
              v50 = (__m128i *)((unsigned __int64)(v46 - v47) >> 5);
              v1398 = v50;
              v1389 = v47;
              v51 = v47;
              v1402 = 0;
              while ( v1398 != (__m128i *)v1402 )
              {
                ++v1402;
                v52 = v51 + 32;
                sub_1403FF680(v51, v26);
                v51 = v52;
              }
              if ( v1384 )
                sub_140001660(v1377, 32 * v1384, 8);
              v1388 = v1396;
              v53 = sub_1414D4800(aCallId, 7, v1386);
              if ( !v53 )
              {
                v1388 = v1396;
                v53 = sub_1414D4800(aId_7, 2, v1386);
                if ( !v53 )
                {
                  k = 1;
                  LOBYTE(v50) = 1;
                  v1398 = nullptr;
LABEL_130:
                  v56 = v1386;
                  goto LABEL_131;
                }
              }
              v55 = v1396;
              v56 = v1386;
              LOBYTE(v50) = 1;
              if ( *(_BYTE *)v53 != 3 )
              {
                k = 1;
                v1398 = nullptr;
                goto LABEL_131;
              }
              v57 = *(_QWORD *)(v53 + 24);
              if ( v57 < 0 )
              {
                v559 = 0;
                v560 = k;
                goto LABEL_606;
              }
              v1398 = *(__m128i **)(v53 + 24);
              if ( v57 )
              {
                v58 = *(_QWORD *)(v53 + 16);
                nullsub_1(v57, v54, v1386, v1396, v1181);
                k = sub_140001650(v1398, 1);
                if ( !k )
                {
                  v560 = (__int64)v1398;
                  v559 = 1;
                  v55 = v1396;
LABEL_606:
                  v1388 = v55;
                  sub_14176E54B(v559, v560);
                }
                sub_14172B820(k, v58, v1398);
                LODWORD(v50) = 0;
                goto LABEL_130;
              }
              k = 1;
              v1398 = nullptr;
              v56 = v1386;
              LOBYTE(v50) = 1;
LABEL_131:
              v119 = sub_1414D4800(aName_7, 4, v56);
              if ( !v119 )
              {
                LODWORD(v1389) = 1;
                goto LABEL_138;
              }
              v122 = v1386;
              if ( *(_BYTE *)v119 == 3 )
              {
                v123 = *(const __m128i **)(v119 + 24);
                if ( (__int64)v123 < 0 )
                {
                  v562 = 0;
                  v563 = v1318;
                  goto LABEL_612;
                }
                LOBYTE(v120) = 1;
                LODWORD(v1389) = v120;
                v1402 = (__int64)v123;
                if ( v123 )
                {
                  v124 = *(_QWORD *)(v119 + 16);
                  nullsub_1(v123, v120, v1386, v121, v1181);
                  v1318 = sub_140001650(v1402, 1);
                  if ( v1318 )
                  {
                    sub_14172B820(v1318, v124, v1402);
                    LODWORD(v1389) = 0;
LABEL_139:
                    v122 = v1386;
                    goto LABEL_141;
                  }
                  v563 = v1402;
                  v562 = 1;
LABEL_612:
                  sub_14176E54B(v562, v563);
                }
LABEL_138:
                v1318 = 1;
                v1402 = 0;
                goto LABEL_139;
              }
              LOBYTE(v119) = 1;
              LODWORD(v1389) = v119;
              v1318 = 1;
              v1402 = 0;
LABEL_141:
              v125 = sub_1414D4800(aArguments_1, 9, v122);
              v126 = v19;
              v127 = v18;
              v128 = v16;
              if ( v125 )
              {
                *((_QWORD *)&v129 + 1) = *(_QWORD *)(v125 + 24);
                if ( *(_BYTE *)v125 != 3 )
                  *((_QWORD *)&v129 + 1) = 2;
                v130 = *(const char **)(v125 + 16);
                if ( *(_BYTE *)v125 != 3 )
                  v130 = asc_141851235;
              }
              else
              {
                *((_QWORD *)&v129 + 1) = 2;
                v130 = asc_141851235;
              }
              v131 = v1402;
              *(_QWORD *)v1280 = v1318;
              *(_QWORD *)&v1280[8] = v1402;
              if ( v1247 )
              {
                LODWORD(v1384) = (_DWORD)v50;
                v132 = v15;
                v133 = sub_1404C46C0(v1248, v1318, v1402);
                _RCX = v133 >> 57;
                v135 = v1245;
                v136 = v1246;
                v137 = _mm_cvtsi32_si128(v133 >> 57);
                v138 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v137, v137), 0), 68);
                for ( i = 0; ; i += 16 )
                {
                  v140 = v136 & v133;
                  v141 = _mm_loadu_si128((const __m128i *)((char *)v135 + v140));
                  _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v141, v138));
                  if ( _R14D )
                    break;
LABEL_155:
                  _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v141, (__m128i)-1LL));
                  v15 = v132;
                  v131 = v1402;
                  LODWORD(v50) = v1384;
                  if ( (_DWORD)_RCX )
                    goto LABEL_157;
                  v133 = i + v140 + 16;
                }
                v1377 = v140;
                v1281 = i;
                while ( 1 )
                {
                  __asm { tzcnt   ecx, r14d }
                  _RCX = -(__int64)(v136 & (v140 + _RCX));
                  if ( v1402 == v135->m128i_i64[3 * _RCX - 1]
                    && !(unsigned int)sub_14172BEB0(v1318, v135[-1].m128i_i64[3 * _RCX], v1402) )
                  {
                    break;
                  }
                  v143 = _R14D - 1;
                  LOWORD(v143) = _R14D & (_R14D - 1);
                  v617 = (_WORD)v143 == 0;
                  _R14D = v143;
                  v140 = v1377;
                  i = v1281;
                  if ( v617 )
                    goto LABEL_155;
                }
                v144 = sub_140A82F20(v130, *((_QWORD *)&v129 + 1));
                v15 = v132;
                v16 = v128;
                v17 = 0;
                v18 = v127;
                LODWORD(v50) = v1384;
                if ( !v145 )
                {
                  v1266.m256i_i64[1] = 0;
                  v1266.m256i_i64[3] = 0;
                  v1266.m256i_i8[0] = 5;
                  v19 = v126;
                  v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
                  goto LABEL_320;
                }
LABEL_162:
                *(_QWORD *)v1391 = v130;
                *(_QWORD *)&v1391[8] = *((_QWORD *)&v129 + 1);
                *(_OWORD *)&v1391[16] = v17;
                *(_QWORD *)&v1391[32] = v130;
                *(_QWORD *)&v1391[40] = *((_QWORD *)&v129 + 1);
                sub_14086BB40(&v1394, v1391);
                v19 = v126;
                v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
                if ( v1394.m256i_i8[0] != -1 )
                {
                  v149 = _mm_loadu_si128((const __m128i *)&v1394.m256i_u64[2]);
                  *(__m128i *)v1266.m256i_i8 = _mm_loadu_si128((const __m128i *)&v1394);
                  *(__m128i *)&v1266.m256i_u64[2] = v149;
                  LODWORD(v144) = v1266.m256i_u8[0];
                  if ( v1266.m256i_u8[0] != 3 )
                  {
                    if ( v1266.m256i_u8[0] != 5 )
                      goto LABEL_321;
                    v146 = v1266.m256i_i64[1];
                    LOBYTE(v144) = 5;
                    if ( !v1266.m256i_i64[1] )
                      goto LABEL_321;
                    LODWORD(v1384) = (_DWORD)v50;
                    v150 = v1266.m256i_i64[2];
                    v1251 = v1266.m256i_i64[2];
                    v1267 = v1266.m256i_i64[1];
                    while ( 1 )
                    {
                      v151 = (__int64 *)(v146 + 360);
                      v1377 = v146;
                      v1281 = *(unsigned __int16 *)(v146 + 626);
                      v152 = 3LL * (unsigned int)(8 * v1281);
                      v153 = -1;
                      do
                      {
                        if ( !v152 )
                        {
                          v153 = v1281;
                          goto LABEL_177;
                        }
                        v154 = v151 + 3;
                        v155 = v151[2];
                        v156 = v155 - 5;
                        if ( v155 >= 5 )
                          v155 = 5;
                        v157 = -(__int64)v156;
                        v158 = sub_14172BEB0(aInput_3, v151[1], v155);
                        if ( v158 )
                          v157 = v158;
                        v159 = (v157 > 0) - (v157 < 0);
                        ++v153;
                        v152 -= 24;
                        v151 = v154;
                      }
                      while ( v159 == 1 );
                      if ( !v159 )
                      {
LABEL_516:
                        v146 = (__int64)&v1266.m256i_i64[1];
                        v145 = &v1323.m256i_i64[1];
                        *(__int64 *)((char *)&v1323.m256i_i64[2] + 7) = v1266.m256i_i64[3];
                        *(_OWORD *)((char *)&v1323.m256i_u32[1] + 3) = *(_OWORD *)&v1266.m256i_u64[1];
                        LOBYTE(v50) = v1384;
                        goto LABEL_517;
                      }
LABEL_177:
                      if ( v150-- == 0 )
                        break;
                      v146 = *(_QWORD *)(v1377 + 8 * v153 + 632);
                    }
                    for ( j = v1267; ; j = *(_QWORD *)(v1267 + 8 * v449 + 632) )
                    {
                      v446 = j + 360;
                      v1267 = j;
                      v447 = *(unsigned __int16 *)(j + 626);
                      v146 = (unsigned int)(8 * v447);
                      v448 = 3 * v146;
                      v449 = -1;
                      do
                      {
                        if ( !v448 )
                        {
                          v449 = v447;
                          goto LABEL_514;
                        }
                        v450 = v446 + 24;
                        v451 = *(_QWORD *)(v446 + 16);
                        v452 = v451 - 5;
                        if ( v451 >= 5 )
                          v451 = 5;
                        v453 = -(__int64)v452;
                        v454 = sub_14172BEB0(aPatch_0, *(_QWORD *)(v446 + 8), v451);
                        if ( v454 )
                          v453 = v454;
                        LOBYTE(v146) = (v453 > 0) - (v453 < 0);
                        ++v449;
                        v448 -= 24;
                        v446 = v450;
                      }
                      while ( (_BYTE)v146 == 1 );
                      if ( !(_BYTE)v146 )
                        goto LABEL_516;
LABEL_514:
                      LODWORD(v144) = v1251 - 1;
                      if ( !v1251 )
                        break;
                      --v1251;
                    }
                    LOBYTE(v50) = v1384;
LABEL_320:
                    LOBYTE(v144) = 5;
LABEL_321:
                    LODWORD(v1384) = v144;
                    v300 = _mm_load_si128((const __m128i *)&v1266);
                    *(__m128i *)&v1382.m256i_u64[2] = _mm_load_si128((const __m128i *)&v1266.m256i_u64[2]);
                    *(__m128i *)v1382.m256i_i8 = v300;
                    v1274 = 0;
                    v1275.m128i_i64[1] = 0;
                    nullsub_1(v146, v145, v147, v148, v1181);
                    v301 = sub_140001650(5, 1);
                    if ( !v301 )
                      sub_14176E54B(1, 5);
                    *(_BYTE *)(v301 + 4) = 116;
                    *(_DWORD *)v301 = 1970302569;
                    *(_QWORD *)&v1334[8] = 5;
                    v1377 = v301;
                    *(_QWORD *)&v1334[16] = v301;
                    v1335 = 5;
                    v1394.m256i_i64[0] = 0;
                    *(_OWORD *)&v1394.m256i_u64[1] = 1u;
                    *(_QWORD *)&v1391[16] = 1610612768;
                    *(_QWORD *)v1391 = &v1394;
                    *(_QWORD *)&v1391[8] = &off_141857488;
                    if ( (unsigned __int8)sub_1414D5DA0(&v1382, v1391) )
                      sub_14176E860(
                        (unsigned int)aADisplayImplem_8,
                        55,
                        (unsigned int)&v1333,
                        (unsigned int)&unk_141851890,
                        (__int64)&off_141857540);
                    v306 = *(_OWORD *)&v1394.m256i_u64[1];
                    v1281 = v1394.m256i_i64[1];
                    v1377 = v1394.m256i_i64[0];
                    if ( v1394.m256i_i64[2] < 0 )
                    {
                      v307 = 0;
LABEL_974:
                      v1311 = 1;
                      sub_14176E54B(v307, *((_QWORD *)&v306 + 1));
                    }
                    if ( v1394.m256i_i64[2] )
                    {
                      nullsub_1(v303, v302, v304, v305, v1181);
                      v307 = 1;
                      v308 = sub_140001650(*((_QWORD *)&v306 + 1), 1);
                      if ( !v308 )
                        goto LABEL_974;
                      v309 = v308;
                      sub_14172B820(v308, v306, *((_QWORD *)&v306 + 1));
                    }
                    else
                    {
                      v309 = 1;
                    }
                    v1391[0] = 3;
                    *(_QWORD *)&v1391[8] = *((_QWORD *)&v306 + 1);
                    *(_QWORD *)&v1391[16] = v309;
                    *(_QWORD *)&v1391[24] = *((_QWORD *)&v306 + 1);
                    v1311 = 0;
                    sub_1401A27E0(&v1394, &v1274, &v1334[8], v1391);
                    if ( v1394.m256i_i8[0] != -1 )
                      sub_1401FF690(&v1394);
                    if ( v1377 )
                      sub_140001660(v1281, v1377, 1);
                    *(__m128i *)v1391 = _mm_loadu_si128((const __m128i *)&v1274);
                    *(_QWORD *)&v1391[16] = v1275.m128i_i64[1];
                    *(__int64 *)((char *)&v1323.m256i_i64[2] + 7) = v1275.m128i_i64[1];
                    *(_OWORD *)((char *)&v1323.m256i_u32[1] + 3) = *(_OWORD *)v1391;
                    v1367 = v1384;
                    v1366 = 0;
                    sub_1401FF690(&v1382);
                    v397 = _mm_loadu_si128((const __m128i *)((char *)&v1323.m256i_u64[1] + 7));
                    *(_OWORD *)v1387.m256i_i8 = *(_OWORD *)v1323.m256i_i8;
                    *(__m128i *)((char *)&v1387.m256i_u64[1] + 7) = v397;
                    goto LABEL_519;
                  }
                  *(_QWORD *)&v129 = v1263;
                  goto LABEL_428;
                }
                v295 = (__int64 *)v1394.m256i_i64[1];
                *(_QWORD *)v1391 = v1394.m256i_i64[1];
                if ( v129 < 0 )
                {
                  v928 = 0;
                }
                else
                {
                  if ( !*((_QWORD *)&v129 + 1) )
                  {
                    *(_QWORD *)&v129 = 1;
                    goto LABEL_422;
                  }
                  nullsub_1(v146, v145, v147, v148, v1181);
                  v296 = sub_140001650(*((_QWORD *)&v129 + 1), 1);
                  if ( v296 )
                  {
                    *(_QWORD *)&v129 = v296;
                    sub_14172B820(v296, v130, *((_QWORD *)&v129 + 1));
LABEL_422:
                    v1266.m256i_i64[1] = *((_QWORD *)&v129 + 1);
                    *(_OWORD *)&v1266.m256i_u64[2] = v129;
                    v1266.m256i_i8[0] = 3;
                    v407 = *v295;
                    v617 = *v295 == 1;
                    v1384 = (__int64)v295;
                    if ( v617 )
                    {
                      sub_1400478E0(v295 + 1);
                    }
                    else if ( !v407 )
                    {
                      v408 = *(_QWORD *)(v1384 + 16);
                      if ( v408 )
                        sub_140001660(*(_QWORD *)(v1384 + 8), v408, 1);
                    }
                    sub_140001660(v1384, 40, 8);
LABEL_428:
                    v409 = v1266.m256i_i64[1];
                    *((_QWORD *)&v129 + 1) = v1266.m256i_i64[3];
                    v1377 = v1266.m256i_i64[2];
                    *(_QWORD *)&v1334[8] = 0;
                    v1335 = 0;
                    nullsub_1(v146, v145, v147, v148, v1181);
                    v410 = sub_140001650(5, 1);
                    v1384 = v409;
                    if ( !v410 )
                      sub_14176E54B(1, 5);
                    *(_BYTE *)(v410 + 4) = 116;
                    *(_DWORD *)v410 = 1970302569;
                    v1382.m256i_i64[0] = 5;
                    v1382.m256i_i64[1] = v410;
                    v1382.m256i_i64[2] = 5;
                    if ( v129 < 0 )
                    {
                      *(_QWORD *)&v129 = 0;
LABEL_1019:
                      v1312 = 1;
                      sub_14176E54B(v129, *((_QWORD *)&v129 + 1));
                    }
                    v1263 = v129;
                    if ( *((_QWORD *)&v129 + 1) )
                    {
                      nullsub_1(v412, v411, v413, v414, v1181);
                      *(_QWORD *)&v129 = 1;
                      v415 = sub_140001650(*((_QWORD *)&v129 + 1), 1);
                      if ( !v415 )
                        goto LABEL_1019;
                      v416 = v415;
                      sub_14172B820(v415, v1377, *((_QWORD *)&v129 + 1));
                    }
                    else
                    {
                      v416 = 1;
                    }
                    v1391[0] = 3;
                    *(_QWORD *)&v1391[8] = *((_QWORD *)&v129 + 1);
                    *(_QWORD *)&v1391[16] = v416;
                    *(_QWORD *)&v1391[24] = *((_QWORD *)&v129 + 1);
                    v1312 = 0;
                    sub_1401A27E0(&v1394, &v1334[8], &v1382, v1391);
                    if ( v1394.m256i_i8[0] != -1 )
                      sub_1401FF690(&v1394);
                    *(_OWORD *)v1391 = *(_OWORD *)&v1334[8];
                    *(_QWORD *)&v1391[16] = v1335;
                    v146 = (__int64)&v1323.m256i_i64[1];
                    *(__int64 *)((char *)&v1323.m256i_i64[2] + 7) = v1335;
                    *(_OWORD *)((char *)&v1323.m256i_u32[1] + 3) = *(_OWORD *)&v1334[8];
                    v145 = (__int64 *)v1384;
                    if ( v1384 )
                      sub_140001660(v1377, v1384, 1);
LABEL_517:
                    v310 = *(_OWORD *)v1323.m256i_i8;
                    v311 = _mm_loadu_si128((const __m128i *)((char *)&v1323.m256i_u64[1] + 7));
                    goto LABEL_518;
                  }
                  v1263 = *((_QWORD *)&v129 + 1);
                  v928 = 1;
                }
                sub_14176E54B(v928, v1263);
              }
LABEL_157:
              if ( v131 != 11 )
              {
                sub_140A82F20(v130, *((_QWORD *)&v129 + 1));
                v16 = v128;
                v17 = 0;
                v18 = v127;
                if ( v145 )
                  goto LABEL_180;
                v1266.m256i_i64[1] = 0;
                v1266.m256i_i64[3] = 0;
                v19 = v126;
                v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
LABEL_328:
                v310 = *(_OWORD *)&v1266.m256i_i8[1];
                v311 = _mm_loadu_si128((const __m128i *)&v1266.m256i_u64[2]);
LABEL_518:
                *(__m128i *)((char *)&v1387.m256i_u64[1] + 7) = v311;
                *(_OWORD *)v1387.m256i_i8 = v310;
LABEL_519:
                v1323.m256i_i8[0] = 5;
                *(_OWORD *)&v1323.m256i_u64[2] = *(_OWORD *)((char *)&v1387.m256i_u64[1] + 7);
                *(__m128i *)&v1323.m256i_i8[1] = _mm_load_si128((const __m128i *)&v1387);
                *(_QWORD *)&v1334[8] = 0;
                v1335 = 0;
                nullsub_1(v146, v145, v147, v148, v1181);
                v455 = (_DWORD *)sub_140001650(4, 1);
                if ( !v455 )
                  sub_14176E54B(1, 4);
                *v455 = 1701869940;
                v1387.m256i_i64[0] = 4;
                v1387.m256i_i64[1] = (__int64)v455;
                v1387.m256i_i64[2] = 4;
                nullsub_1(v457, v456, v458, v459, v1203);
                v460 = (_QWORD *)sub_140001650(8, 1);
                v1384 = (__int64)v460;
                if ( !v460 )
                  sub_14176E54B(1, 8);
                *v460 = 0x6573755F6C6F6F74LL;
                v1391[0] = 3;
                *(_QWORD *)&v1391[8] = 8;
                *(_QWORD *)&v1391[16] = v460;
                *(_QWORD *)&v1391[24] = 8;
                sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
                if ( v1394.m256i_i8[0] != -1 )
                  sub_1401FF690(&v1394);
                nullsub_1(v462, v461, v463, v464, v1204);
                v465 = (_WORD *)sub_140001650(2, 1);
                if ( !v465 )
                  sub_14176E54B(1, 2);
                *v465 = 25705;
                v1387.m256i_i64[0] = 2;
                v1387.m256i_i64[1] = (__int64)v465;
                v1387.m256i_i64[2] = 2;
                v470 = 1;
                v471 = v1398;
                if ( !(_BYTE)v50 )
                {
                  nullsub_1(v467, v466, v468, v469, v1205);
                  v472 = sub_140001650(v471, 1);
                  if ( !v472 )
                  {
                    v1310 = 1;
                    sub_14176E54B(1, v471);
                  }
                  v470 = v472;
                  sub_14172B820(v472, k, v471);
                }
                v1391[0] = 3;
                *(_QWORD *)&v1391[8] = v471;
                *(_QWORD *)&v1391[16] = v470;
                *(_QWORD *)&v1391[24] = v471;
                v1310 = 0;
                sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
                if ( v1394.m256i_i8[0] != -1 )
                  sub_1401FF690(&v1394);
                nullsub_1(v474, v473, v475, v476, v1205);
                v477 = (_DWORD *)sub_140001650(4, 1);
                v482 = v1318;
                if ( !v477 )
                  sub_14176E54B(1, 4);
                *v477 = 1701667182;
                v1387.m256i_i64[0] = 4;
                v1387.m256i_i64[1] = (__int64)v477;
                v1387.m256i_i64[2] = 4;
                v483 = 1;
                v484 = v1402;
                if ( !(_BYTE)v1389 )
                {
                  nullsub_1(v479, v478, v480, v481, v1206);
                  v485 = sub_140001650(v484, 1);
                  if ( !v485 )
                  {
                    v1309 = 1;
                    sub_14176E54B(1, v484);
                  }
                  v483 = v485;
                  sub_14172B820(v485, v482, v484);
                }
                v1391[0] = 3;
                *(_QWORD *)&v1391[8] = v484;
                *(_QWORD *)&v1391[16] = v483;
                *(_QWORD *)&v1391[24] = v484;
                v1309 = 0;
                sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
                if ( v1394.m256i_i8[0] != -1 )
                  sub_1401FF690(&v1394);
                nullsub_1(v487, v486, v488, v489, v1206);
                v490 = sub_140001650(5, 1);
                if ( !v490 )
                  sub_14176E54B(1, 5);
                *(_BYTE *)(v490 + 4) = 116;
                *(_DWORD *)v490 = 1970302569;
                v1387.m256i_i64[0] = 5;
                v1387.m256i_i64[1] = v490;
                v1387.m256i_i64[2] = 5;
                v1365 = 1;
                sub_1404B9F30(v1391, &v1323);
                if ( v1391[0] == 0xFF )
                {
                  v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                  sub_14176E860(
                    (unsigned int)aCalledResultUn_15,
                    43,
                    (unsigned int)&v1394,
                    (unsigned int)&off_141851870,
                    (__int64)&off_141856290);
                }
                v491 = _mm_loadu_si128((const __m128i *)v1391);
                *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                *(__m128i *)v1394.m256i_i8 = v491;
                v1365 = 0;
                sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                if ( v1391[0] != 0xFF )
                  sub_1401FF690(v1391);
                v1382.m256i_i64[3] = v1335;
                *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1334[8]);
                v1382.m256i_i8[0] = 5;
                sub_140A21BF0(&v1269, aAssistant_0, 9, &v1382);
                sub_1401FF690(&v1323);
                goto LABEL_540;
              }
              LODWORD(v129) = (*(_QWORD *)v1318 ^ 0x61705F796C707061LL | *(_QWORD *)(v1318 + 3) ^ 0x68637461705F796CLL) != 0;
              v144 = sub_140A82F20(v130, *((_QWORD *)&v129 + 1));
              v16 = v128;
              v17 = 0;
              if ( !v145 )
              {
                v1266.m256i_i64[1] = 0;
                v1266.m256i_i64[3] = 0;
                v1266.m256i_i8[0] = 5;
                v18 = v127;
                v19 = v126;
                v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
                if ( !(_DWORD)v129 )
                  goto LABEL_320;
                goto LABEL_328;
              }
              v18 = v127;
              if ( !(_DWORD)v129 )
                goto LABEL_162;
LABEL_180:
              *(_QWORD *)v1391 = v130;
              *(_QWORD *)&v1391[8] = *((_QWORD *)&v129 + 1);
              *(_OWORD *)&v1391[16] = v17;
              *(_QWORD *)&v1391[32] = v130;
              *(_QWORD *)&v1391[40] = *((_QWORD *)&v129 + 1);
              sub_14086BB40(&v1382, v1391);
              v19 = v126;
              v21 = _mm_load_si128((const __m128i *)&xmmword_1417EBDC0);
              if ( v1382.m256i_i8[0] == -1 )
              {
                v297 = (__int64 *)v1382.m256i_i64[1];
                v1323.m256i_i64[0] = v1382.m256i_i64[1];
                if ( *(_QWORD *)off_141FB9E30 >= 2u )
                {
                  v1394.m256i_i64[0] = (__int64)v1280;
                  v1394.m256i_i64[1] = (__int64)sub_1402DDC10;
                  v1394.m256i_i64[2] = (__int64)&v1323;
                  v1394.m256i_i64[3] = (__int64)sub_1414D7A50;
                  *(_QWORD *)v1391 = 0;
                  *(_QWORD *)&v1391[8] = aCodexmateLibCo_6;
                  *(_OWORD *)&v1391[16] = 0x26u;
                  *(_QWORD *)&v1391[32] = aSrcCoreRelayTr;
                  *(_QWORD *)&v1391[40] = 28;
                  *(_QWORD *)&v1391[48] = 2;
                  *(_QWORD *)&v1391[56] = aCodexmateLibCo_6;
                  *(_QWORD *)&v1391[64] = 38;
                  *(_QWORD *)&v1391[72] = 0x16AE00000001LL;
                  v1392 = &unk_1418561DD;
                  v1393 = &v1394;
                  sub_14136A9F0(&v1333, v1391);
                  v297 = (__int64 *)v1323.m256i_i64[0];
                }
                v298 = *v297;
                v617 = *v297 == 1;
                v1389 = (__int64)v297;
                if ( v617 )
                {
                  sub_1400478E0(v297 + 1);
                }
                else if ( !v298 )
                {
                  v299 = *(_QWORD *)(v1389 + 16);
                  if ( v299 )
                    sub_140001660(*(_QWORD *)(v1389 + 8), v299, 1);
                }
                sub_140001660(v1389, 40, 8);
                goto LABEL_540;
              }
              v161 = _mm_loadu_si128((const __m128i *)&v1382);
              *(__m128i *)&v1266.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1382.m256i_u64[2]);
              *(__m128i *)v1266.m256i_i8 = v161;
              if ( v161.m128i_i8[0] == 5 )
                goto LABEL_328;
              v1367 = v161.m128i_i8[0];
              v1366 = 0;
              sub_1401FF690(&v1266);
LABEL_540:
              if ( v1402 )
                sub_140001660(v1318, v1402, 1);
              v173 = (__int64)v1398;
              v23 = v24;
              if ( v1398 )
              {
                v174 = k;
LABEL_544:
                sub_140001660(v174, v173, 1);
                v23 = v24;
              }
            }
            else
            {
LABEL_35:
              v23 = v24;
              switch ( v28 )
              {
                case 16LL:
                  goto LABEL_36;
                case 18LL:
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v27 + 16)), v20),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), (__m128i)xmmword_14184ED50))) == 0xFFFF )
                    goto LABEL_70;
                  continue;
                case 20LL:
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v27 + 16)), (__m128i)xmmword_1417EBDB0),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), v21))) == 0xFFFF )
                    goto LABEL_70;
                  continue;
                case 23LL:
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v27), si128),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v27 + 7)), v22))) != 0xFFFF )
                    continue;
LABEL_70:
                  v1388 = v1396;
                  v59 = sub_1414D4800(aCallId, 7, v1386);
                  v64 = 1;
                  if ( v59 )
                  {
                    v60 = v1396;
                    if ( *(_BYTE *)v59 == 3 )
                    {
                      v65 = *(const __m128i **)(v59 + 24);
                      if ( (__int64)v65 < 0 )
                      {
                        v561 = 0;
                      }
                      else
                      {
                        if ( !v65 )
                        {
                          v1268 = 1;
                          v65 = nullptr;
                          goto LABEL_577;
                        }
                        v66 = *(_QWORD *)(v59 + 16);
                        nullsub_1(v61, v1396, v62, v63, v1181);
                        v1268 = sub_140001650(v65, 1);
                        if ( v1268 )
                        {
                          sub_14172B820(v1268, v66, v65);
                          v64 = 0;
LABEL_577:
                          v17 = 0;
                          goto LABEL_92;
                        }
                        v1268 = (__int64)v65;
                        v561 = 1;
                        v60 = v1396;
                      }
                      v1388 = v60;
                      sub_14176E54B(v561, v1268);
                    }
                  }
                  v1268 = 1;
                  v65 = nullptr;
LABEL_92:
                  v1402 = (__int64)v65;
                  v1278.m128i_i64[0] = 0;
                  v1279 = 0;
                  nullsub_1(v61, v60, v62, v63, v1181);
                  v80 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v80 )
                    sub_14176E54B(1, 4);
                  *v80 = 1701869940;
                  v1382.m256i_i64[0] = 4;
                  v1382.m256i_i64[1] = (__int64)v80;
                  v1382.m256i_i64[2] = 4;
                  nullsub_1(v82, v81, v83, v84, v1182);
                  v85 = (__m128i *)sub_140001650(11, 1);
                  v1398 = v85;
                  if ( !v85 )
                    sub_14176E54B(1, 11);
                  qmemcpy(v85, "tool_result", 11);
                  v1391[0] = 3;
                  *(_QWORD *)&v1391[8] = 11;
                  *(_QWORD *)&v1391[16] = v85;
                  *(_QWORD *)&v1391[24] = 11;
                  sub_1401A27E0(&v1394, &v1278, &v1382, v1391);
                  if ( v1394.m256i_i8[0] != -1 )
                    sub_1401FF690(&v1394);
                  nullsub_1(v87, v86, v88, v89, v1183);
                  v90 = (void *)sub_140001650(11, 1);
                  if ( !v90 )
                    sub_14176E54B(1, 11);
                  qmemcpy(v90, "tool_use_id", 11);
                  v1382.m256i_i64[0] = 11;
                  v1382.m256i_i64[1] = (__int64)v90;
                  v1382.m256i_i64[2] = 11;
                  v94 = 1;
                  v617 = v64 == 0;
                  v95 = v1402;
                  if ( v617 )
                  {
                    nullsub_1(0x6573755F6C6F6F74LL, v91, v92, v93, v1184);
                    v96 = sub_140001650(v95, 1);
                    if ( !v96 )
                    {
                      v1317 = 1;
                      sub_14176E54B(1, v95);
                    }
                    v94 = v96;
                    sub_14172B820(v96, v1268, v95);
                  }
                  v1391[0] = 3;
                  *(_QWORD *)&v1391[8] = v95;
                  *(_QWORD *)&v1391[16] = v94;
                  *(_QWORD *)&v1391[24] = v95;
                  v1317 = 0;
                  sub_1401A27E0(&v1394, &v1278, &v1382, v1391);
                  if ( v1394.m256i_i8[0] != -1 )
                    sub_1401FF690(&v1394);
                  nullsub_1(v98, v97, v99, v100, v1184);
                  v101 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v101 )
                    sub_14176E54B(1, 7);
                  *(_DWORD *)((char *)v101 + 3) = 1953391988;
                  *v101 = 1953394531;
                  *(_QWORD *)v1280 = 7;
                  v1398 = (__m128i *)v101;
                  *(_QWORD *)&v1280[8] = v101;
                  *(_QWORD *)&v1280[16] = 7;
                  v102 = sub_1414D4800("outputresponse.output_item.added", 6, v1386);
                  if ( v102 )
                  {
                    sub_140A21770(&v1323, v102);
                  }
                  else
                  {
                    v114 = sub_1414D4800(aTools_3, 5, v1386);
                    if ( v114 )
                    {
                      v1274 = 0;
                      v1275.m128i_i64[1] = 0;
                      nullsub_1(v113, v112, v115, v116, v1181);
                      v117 = sub_140001650(5, 1);
                      if ( !v117 )
                        sub_14176E54B(1, 5);
                      *(_BYTE *)(v117 + 4) = 115;
                      *(_DWORD *)v117 = 1819242356;
                      *(_QWORD *)&v1334[8] = 5;
                      *(_QWORD *)&v1334[16] = v117;
                      v1335 = 5;
                      v1371 = 1;
                      sub_1404B9F30(v1391, v114);
                      if ( v1391[0] == 0xFF )
                      {
                        v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                        sub_14176E860(
                          (unsigned int)aCalledResultUn_15,
                          43,
                          (unsigned int)&v1394,
                          (unsigned int)&off_141851870,
                          (__int64)&off_141855988);
                      }
                      v118 = _mm_loadu_si128((const __m128i *)v1391);
                      *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                      *(__m128i *)v1394.m256i_i8 = v118;
                      v1371 = 0;
                      sub_1401A27E0(v1391, &v1274, &v1334[8], &v1394);
                      if ( v1391[0] != 0xFF )
                        sub_1401FF690(v1391);
                      v1382.m256i_i64[3] = v1275.m128i_i64[1];
                      *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1274);
                      v1382.m256i_i8[0] = 5;
                      v1394.m256i_i64[0] = 0;
                      *(_OWORD *)&v1394.m256i_u64[1] = 1u;
                      *(_QWORD *)&v1391[16] = 1610612768;
                      *(_QWORD *)v1391 = &v1394;
                      *(_QWORD *)&v1391[8] = &off_141857488;
                      if ( (unsigned __int8)sub_1414D5DA0(&v1382, v1391) )
                        sub_14176E860(
                          (unsigned int)aADisplayImplem_8,
                          55,
                          (unsigned int)&v1333,
                          (unsigned int)&unk_141851890,
                          (__int64)&off_141857540);
                      v1323.m256i_i64[3] = v1394.m256i_i64[2];
                      *(__m128i *)&v1323.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1394);
                      v1323.m256i_i8[0] = 3;
                      sub_1401FF690(&v1382);
                    }
                    else
                    {
                      v1394.m256i_i64[0] = 0;
                      *(_OWORD *)&v1394.m256i_u64[1] = 1u;
                      *(_QWORD *)&v1391[16] = 1610612768;
                      *(_QWORD *)v1391 = &v1394;
                      *(_QWORD *)&v1391[8] = &off_141857488;
                      if ( (unsigned __int8)sub_1414D5DA0(v1386, v1391) )
                        sub_14176E860(
                          (unsigned int)aADisplayImplem_8,
                          55,
                          (unsigned int)&v1333,
                          (unsigned int)&unk_141851890,
                          (__int64)&off_141857540);
                      v1323.m256i_i64[3] = v1394.m256i_i64[2];
                      *(__m128i *)&v1323.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1394);
                      v1323.m256i_i8[0] = 3;
                    }
                  }
                  v1370 = 1;
                  sub_1404B9F30(v1391, &v1323);
                  if ( v1391[0] == 0xFF )
                  {
                    v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                    sub_14176E860(
                      (unsigned int)aCalledResultUn_15,
                      43,
                      (unsigned int)&v1394,
                      (unsigned int)&off_141851870,
                      (__int64)&off_141856248);
                  }
                  v172 = _mm_loadu_si128((const __m128i *)v1391);
                  *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                  *(__m128i *)v1394.m256i_i8 = v172;
                  v1370 = 0;
                  sub_1401A27E0(v1391, &v1278, v1280, &v1394);
                  if ( v1391[0] != 0xFF )
                    sub_1401FF690(v1391);
                  sub_1401FF690(&v1323);
                  v1387.m256i_i64[3] = v1279;
                  *(__m128i *)&v1387.m256i_u64[1] = _mm_loadu_si128(&v1278);
                  v1387.m256i_i8[0] = 5;
                  sub_140B4EAF0(&v1269, &v1387);
                  v173 = v1402;
                  v23 = v24;
                  if ( v1402 )
                  {
                    v174 = v1268;
                    goto LABEL_544;
                  }
                  break;
                default:
                  continue;
              }
            }
          }
          else
          {
            v1388 = v1396;
            v103 = sub_1414D4800(
                     "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
                     "eraturemax_tokensstreamdoubaoreasoning_effortnone",
                     4,
                     v1386);
            v104 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
            if ( !v103 || (v104 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone", *(_BYTE *)v103 != 3) )
            {
LABEL_208:
              v107 = v1320;
              if ( !v1320 )
              {
                v1402 = 4;
                v185 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
                goto LABEL_236;
              }
              LODWORD(v106) = 0;
              goto LABEL_210;
            }
            v104 = *(const char **)(v103 + 16);
            v105 = *(_QWORD *)(v103 + 24);
            if ( v105 == 6 )
            {
              if ( *(_DWORD *)v104 ^ 0x74737973 | *((unsigned __int16 *)v104 + 2) ^ 0x6D65 )
                goto LABEL_208;
LABEL_329:
              v1388 = v1396;
              v312 = (unsigned __int8 *)sub_1414D4800(
                                          "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加"
                                          "解释。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                          7,
                                          v1386);
              if ( !v312 )
                goto LABEL_397;
              v313 = *v312;
              if ( v313 == 4 )
              {
                *(_QWORD *)v1391 = 0;
                *(_QWORD *)&v1391[8] = 1;
                *(_QWORD *)&v1391[16] = 0;
                v417 = *((_QWORD *)v312 + 3);
                if ( !v417 )
                {
LABEL_483:
                  v1323.m256i_i64[2] = *(_QWORD *)&v1391[16];
                  *(_OWORD *)v1323.m256i_i8 = *(_OWORD *)v1391;
                  goto LABEL_484;
                }
                v418 = *((_QWORD *)v312 + 2);
                v419 = 32 * v417;
                v420 = 1;
                v421 = 0;
                while ( 2 )
                {
                  v430 = sub_1414D4800(aType_8, 4, v418);
                  if ( v430 && *(_BYTE *)v430 == 3 )
                  {
                    v431 = *(_QWORD *)(v430 + 16);
                    v432 = *(_QWORD *)(v430 + 24);
                    if ( v432 == 11 )
                    {
                      if ( !(*(_QWORD *)v431 ^ 0x745F74757074756FLL | *(_QWORD *)(v431 + 3) ^ 0x747865745F747570LL) )
                        goto LABEL_468;
                      if ( !(*(_QWORD *)v431 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v431 + 3) ^ 0x6567616D695F7475LL) )
                      {
                        v433 = *(_QWORD *)v1391;
                        if ( v421 )
                        {
                          if ( *(_QWORD *)v1391 == v421 )
                          {
                            sub_14172C420((unsigned int)v1391, v421, 1, 1, 1);
                            v420 = *(_QWORD *)&v1391[8];
                          }
                          *(_BYTE *)(v420 + v421) = 10;
                          v434 = v421 + 1;
                          *(_QWORD *)&v1391[16] = v434;
                          v433 = *(_QWORD *)v1391;
                        }
                        else
                        {
                          v434 = 0;
                        }
                        if ( (unsigned __int64)(v433 - v434) <= 0x1E )
                        {
                          sub_14172C420((unsigned int)v1391, v434, 31, 1, 1);
                          v434 = *(_QWORD *)&v1391[16];
                        }
                        v420 = *(_QWORD *)&v1391[8];
                        *(_OWORD *)(*(_QWORD *)&v1391[8] + v434 + 15) = *(__int128 *)((char *)&xmmword_141854F70 + 15);
                        *(__m128i *)(v420 + v434) = _mm_loadu_si128((const __m128i *)&xmmword_141854F70);
                        v421 = v434 + 31;
LABEL_454:
                        *(_QWORD *)&v1391[16] = v421;
                      }
                    }
                    else if ( v432 == 10
                           && !(*(_QWORD *)v431 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v431 + 8) ^ 0x7478LL) )
                    {
LABEL_468:
                      v435 = sub_1414D4800(aText_9, 4, v418);
                      if ( v435 && *(_BYTE *)v435 == 3 )
                      {
                        v1402 = *(_QWORD *)(v435 + 16);
                        v436 = *(_QWORD *)(v435 + 24);
                        v437 = *(_QWORD *)v1391;
                        if ( v421 )
                        {
                          if ( *(_QWORD *)v1391 == v421 )
                          {
                            sub_14172C420((unsigned int)v1391, v421, 1, 1, 1);
                            v420 = *(_QWORD *)&v1391[8];
                          }
                          *(_BYTE *)(v420 + v421) = 10;
                          v438 = v421 + 1;
                          *(_QWORD *)&v1391[16] = v438;
                          v437 = *(_QWORD *)v1391;
                        }
                        else
                        {
                          v438 = 0;
                        }
                        if ( v436 > v437 - v438 )
                        {
                          sub_14172C420((unsigned int)v1391, v438, v436, 1, 1);
                          v438 = *(_QWORD *)&v1391[16];
                        }
                        else if ( !v436 )
                        {
LABEL_453:
                          v421 = v436 + v438;
                          goto LABEL_454;
                        }
                        v420 = *(_QWORD *)&v1391[8];
                        sub_14172B820(*(_QWORD *)&v1391[8] + v438, v1402, v436);
                        goto LABEL_453;
                      }
                    }
                  }
                  v418 += 32;
                  v419 -= 32;
                  if ( !v419 )
                    goto LABEL_483;
                  continue;
                }
              }
              if ( v313 != 3 )
              {
LABEL_397:
                v395 = *(_QWORD *)v1334;
                v396 = __PAIR128__(v1322, (unsigned __int64)v1396);
                goto LABEL_493;
              }
              v1388 = v1396;
              sub_141543F00(&v1323, v312 + 8);
LABEL_484:
              v395 = v1323.m256i_i64[2];
              if ( !v1323.m256i_i64[2] )
              {
                v395 = *(_QWORD *)v1334;
                v396 = __PAIR128__(v1322, (unsigned __int64)v1396);
                goto LABEL_490;
              }
              v23 = v24;
              if ( v1396 == (const __m128i *)-1LL )
              {
                v396 = *(_OWORD *)v1323.m256i_i8;
              }
              else
              {
                if ( *(_QWORD *)v1334 )
                {
                  v1382.m256i_i64[0] = (__int64)v1396;
                  v1382.m256i_i64[1] = v1322;
                  v1382.m256i_i64[2] = *(_QWORD *)v1334;
                  *(_QWORD *)v1391 = &v1382;
                  *(_QWORD *)&v1391[8] = sub_1400015F0;
                  *(_QWORD *)&v1391[16] = &v1323;
                  *(_QWORD *)&v1391[24] = sub_1400015F0;
                  sub_141543AF0(&v1394, &unk_1418561D8, v1391);
                  v396 = *(_OWORD *)v1394.m256i_i8;
                  v395 = v1394.m256i_i64[2];
                  if ( v1382.m256i_i64[0] )
                    sub_140001660(v1382.m256i_i64[1], v1382.m256i_i64[0], 1);
LABEL_490:
                  v439 = v1323.m256i_i64[0];
                  if ( v1323.m256i_i64[0] )
                  {
                    v440 = v1323.m256i_i64[1];
                    goto LABEL_492;
                  }
                  goto LABEL_493;
                }
                v439 = (__int64)v1396;
                v396 = *(_OWORD *)v1323.m256i_i8;
                if ( v1396 )
                {
                  v440 = v1322;
LABEL_492:
                  sub_140001660(v440, v439, 1);
LABEL_493:
                  v23 = v24;
                }
              }
              *(_QWORD *)v1334 = v395;
              v1322 = *((_QWORD *)&v396 + 1);
              v1396 = (const __m128i *)v396;
            }
            else
            {
              if ( v105 != 9 )
                goto LABEL_208;
              if ( !(*(_QWORD *)v104 ^ 0x65706F6C65766564LL | *((unsigned __int8 *)v104 + 8) ^ 0x72LL) )
                goto LABEL_329;
              v106 = v24 ^ *(_QWORD *)v104;
              if ( !(v106 | *((unsigned __int8 *)v104 + 8) ^ 0x74LL) )
                goto LABEL_220;
              v107 = v1320;
              LOBYTE(v106) = 1;
              if ( !v1320 )
                goto LABEL_220;
LABEL_210:
              LODWORD(v1377) = v106;
              v177 = v1319;
              v1319.m128i_i64[0] = 0;
              v1319.m128i_i64[1] = 8;
              v1320 = 0;
              v178 = 32 * v107;
              v179 = v177.m128i_i64[1] + v178;
              v1394.m256i_i64[0] = v177.m128i_i64[1];
              v1394.m256i_i64[2] = v177.m128i_i64[0];
              v1394.m256i_i64[3] = v177.m128i_i64[1] + v178;
              v1281 = v177.m128i_i64[1];
              v180 = v177.m128i_i64[1] + 32;
              v1384 = v177.m128i_i64[0];
              v1267 = v178;
              while ( *(_BYTE *)(v180 - 32) != 0xFF )
              {
                v181 = v180 - 32;
                v1391[0] = *(_BYTE *)(v180 - 32);
                v182 = _mm_loadu_si128((const __m128i *)(v180 - 32 + 1));
                *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v180 - 32 + 16));
                *(__m128i *)&v1391[1] = v182;
                v1389 = v180;
                sub_140A284E0(&v1269, v1391);
                v180 = v1389 + 32;
                if ( v181 + 32 == v179 )
                {
                  v180 = v177.m128i_i64[1] + v178;
                  break;
                }
              }
              v1394.m256i_i64[1] = v180;
              v1398 = (__m128i *)((unsigned __int64)(v179 - v180) >> 5);
              v1389 = v180;
              v183 = v180;
              v1402 = 0;
              while ( v1398 != (__m128i *)v1402 )
              {
                ++v1402;
                v184 = v183 + 32;
                ((void (*)(void))sub_1403FF680)();
                v183 = v184;
              }
              if ( v1384 )
                sub_140001660(v1281, 32 * v1384, 8);
              v1402 = 4;
              v185 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
              if ( (_BYTE)v1377 )
              {
LABEL_220:
                v186 = v24;
                if ( !(v24 ^ *(_QWORD *)v104 | *((unsigned __int8 *)v104 + 8) ^ 0x74LL) )
                {
                  v187 = v1319;
                  v188 = v1320;
                  v1319.m128i_i64[0] = 0;
                  v1319.m128i_i64[1] = 8;
                  v1320 = 0;
                  v1281 = 32 * v188;
                  v189 = v187.m128i_i64[1] + 32 * v188;
                  v1394.m256i_i64[0] = v187.m128i_i64[1];
                  v1394.m256i_i64[1] = v187.m128i_i64[1];
                  v1394.m256i_i64[2] = v187.m128i_i64[0];
                  v1394.m256i_i64[3] = v189;
                  v190 = v187.m128i_i64[1];
                  if ( v188 )
                  {
                    v190 = v187.m128i_i64[1] + 32;
                    while ( *(_BYTE *)(v190 - 32) != 0xFF )
                    {
                      v191 = v190 - 32;
                      v1391[0] = *(_BYTE *)(v190 - 32);
                      v192 = _mm_loadu_si128((const __m128i *)(v190 - 32 + 1));
                      *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v190 - 32 + 16));
                      *(__m128i *)&v1391[1] = v192;
                      v1389 = v190;
                      sub_140A284E0(&v1269, v1391);
                      v190 = v1389 + 32;
                      if ( v191 + 32 == v189 )
                      {
                        v190 = v189;
                        break;
                      }
                    }
                    v1394.m256i_i64[1] = v190;
                  }
                  v1377 = v187.m128i_i64[1];
                  v1384 = v187.m128i_i64[0];
                  v1398 = (__m128i *)((unsigned __int64)(v189 - v190) >> 5);
                  v1389 = v190;
                  v1402 = 0;
                  while ( v1398 != (__m128i *)v1402 )
                  {
                    ++v1402;
                    v193 = v190 + 32;
                    sub_1403FF680(v190, v186);
                    v190 = v193;
                  }
                  if ( v1384 )
                    sub_140001660(v1377, 32 * v1384, 8);
                  v186 = v24;
                }
                v617 = (v186 ^ *(_QWORD *)v104 | *((unsigned __int8 *)v104 + 8) ^ 0x74LL) == 0;
                v1402 = 5LL * v617 + 4;
                v185 = "usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
                if ( v617 )
                  v185 = aAssistant_0;
              }
LABEL_236:
              v1388 = v1396;
              v194 = (unsigned __int8 *)sub_1414D4800(
                                          "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加"
                                          "解释。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                          7,
                                          v1386);
              v198 = 8;
              if ( !v194 )
                goto LABEL_250;
              v199 = *v194;
              if ( (_DWORD)v199 == 4 )
              {
                v1278.m128i_i64[0] = 0;
                v1278.m128i_i64[1] = 8;
                v1279 = 0;
                v229 = *((_QWORD *)v194 + 2);
                v230 = v229 + 32LL * *((_QWORD *)v194 + 3);
                while ( 1 )
                {
                  do
                  {
                    if ( v229 == v230 )
                    {
                      v198 = v1278.m128i_i64[1];
                      v228 = v1278.m128i_i64[0];
                      v227 = v1279;
                      goto LABEL_410;
                    }
                    v231 = v229;
                    v232 = sub_1414D4800(aType_8, 4, v229);
                    v229 += 32;
                  }
                  while ( !v232 || *(_BYTE *)v232 != 3 );
                  v233 = *(_QWORD *)(v232 + 16);
                  v234 = *(_QWORD *)(v232 + 24);
                  if ( v234 == 11 )
                  {
                    if ( *(_QWORD *)v233 ^ 0x745F74757074756FLL | *(_QWORD *)(v233 + 3) ^ 0x747865745F747570LL )
                    {
                      if ( !(*(_QWORD *)v233 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v233 + 3) ^ 0x6567616D695F7475LL) )
                      {
                        v235 = sub_1414D4800(aImageUrl_2, 9, v231);
                        if ( v235 )
                        {
                          if ( *(_BYTE *)v235 == 3 )
                          {
                            v236 = *(_QWORD *)(v235 + 24);
                            if ( v236 >= 5 )
                            {
                              v237 = *(_QWORD *)(v235 + 16);
                              if ( !(*(_DWORD *)v237 ^ 0x61746164 | *(unsigned __int8 *)(v237 + 4) ^ 0x3A) )
                              {
                                v238 = v236 - 5;
                                v239 = v237 + 5;
                                sub_14154A390((unsigned int)v1391, v239, v238, (unsigned int)aBase64_0, 8);
                                sub_140A827C0(&v1394, v1391);
                                if ( v1394.m256i_i8[0] )
                                {
                                  v1264.m128i_i64[0] = v239;
                                  v1264.m128i_i64[1] = v1394.m256i_i64[1];
                                  *(_QWORD *)&v1255 = v239 + v1394.m256i_i64[2];
                                  *((_QWORD *)&v1255 + 1) = v238 - v1394.m256i_i64[2];
                                  *(_QWORD *)v1280 = 0;
                                  *(_QWORD *)&v1280[16] = 0;
                                  nullsub_1(v239 + v1394.m256i_i64[2], v240, v241, v242, v1181);
                                  v243 = (_DWORD *)sub_140001650(4, 1);
                                  if ( !v243 )
                                    sub_14176E54B(1, 4);
                                  *v243 = 1701869940;
                                  v1382.m256i_i64[0] = 4;
                                  v1382.m256i_i64[1] = (__int64)v243;
                                  v1382.m256i_i64[2] = 4;
                                  v1364 = 1;
                                  sub_1404A1EA0(v1391, &off_141855A30);
                                  if ( v1391[0] == 0xFF )
                                  {
                                    v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                    sub_14176E860(
                                      (unsigned int)aCalledResultUn_15,
                                      43,
                                      (unsigned int)&v1394,
                                      (unsigned int)&off_141851870,
                                      (__int64)&off_141855A40);
                                  }
                                  v244 = _mm_loadu_si128((const __m128i *)v1391);
                                  *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                  *(__m128i *)v1394.m256i_i8 = v244;
                                  v1364 = 0;
                                  sub_1401A27E0(v1391, v1280, &v1382, &v1394);
                                  if ( v1391[0] != 0xFF )
                                    sub_1401FF690(v1391);
                                  nullsub_1(v246, v245, v247, v248, v1188);
                                  v249 = sub_140001650(6, 1);
                                  if ( !v249 )
                                    sub_14176E54B(1, 6);
                                  *(_WORD *)(v249 + 4) = 25955;
                                  *(_DWORD *)v249 = 1920298867;
                                  v1274 = 6;
                                  v1275.m128i_i64[0] = v249;
                                  v1275.m128i_i64[1] = 6;
                                  *(_QWORD *)&v1334[8] = 0;
                                  v1335 = 0;
                                  nullsub_1(v251, v250, v252, v253, v1189);
                                  v254 = (_DWORD *)sub_140001650(4, 1);
                                  if ( !v254 )
                                    sub_14176E54B(1, 4);
                                  *v254 = 1701869940;
                                  v1387.m256i_i64[0] = 4;
                                  v1387.m256i_i64[1] = (__int64)v254;
                                  v1387.m256i_i64[2] = 4;
                                  v1363 = 1;
                                  sub_1404A1EA0(v1391, &off_141855A60);
                                  if ( v1391[0] == 0xFF )
                                  {
                                    v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                    sub_14176E860(
                                      (unsigned int)aCalledResultUn_15,
                                      43,
                                      (unsigned int)&v1394,
                                      (unsigned int)&off_141851870,
                                      (__int64)&off_141855A40);
                                  }
                                  v255 = _mm_loadu_si128((const __m128i *)v1391);
                                  *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                  *(__m128i *)v1394.m256i_i8 = v255;
                                  v1363 = 0;
                                  sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                                  if ( v1391[0] != 0xFF )
                                    sub_1401FF690(v1391);
                                  nullsub_1(v257, v256, v258, v259, v1190);
                                  v260 = (void *)sub_140001650(10, 1);
                                  if ( !v260 )
                                    sub_14176E54B(1, 10);
                                  qmemcpy(v260, "media_type", 10);
                                  v1387.m256i_i64[0] = 10;
                                  v1387.m256i_i64[1] = (__int64)v260;
                                  v1387.m256i_i64[2] = 10;
                                  v1362 = 1;
                                  sub_1404A1EA0(v1391, &v1264);
                                  if ( v1391[0] == 0xFF )
                                  {
                                    v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                    sub_14176E860(
                                      (unsigned int)aCalledResultUn_15,
                                      43,
                                      (unsigned int)&v1394,
                                      (unsigned int)&off_141851870,
                                      (__int64)&off_141855A40);
                                  }
                                  v261 = _mm_loadu_si128((const __m128i *)v1391);
                                  *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                  *(__m128i *)v1394.m256i_i8 = v261;
                                  v1362 = 0;
                                  sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                                  if ( v1391[0] != 0xFF )
                                    sub_1401FF690(v1391);
                                  nullsub_1(v263, v262, v264, v265, v1191);
                                  v266 = (_DWORD *)sub_140001650(4, 1);
                                  if ( !v266 )
                                    sub_14176E54B(1, 4);
                                  *v266 = 1635017060;
                                  v1387.m256i_i64[0] = 4;
                                  v1387.m256i_i64[1] = (__int64)v266;
                                  v1387.m256i_i64[2] = 4;
                                  v1361 = 1;
                                  sub_1404A1EA0(v1391, &v1255);
                                  if ( v1391[0] == 0xFF )
                                  {
                                    v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                    sub_14176E860(
                                      (unsigned int)aCalledResultUn_15,
                                      43,
                                      (unsigned int)&v1394,
                                      (unsigned int)&off_141851870,
                                      (__int64)&off_141855A40);
                                  }
                                  v267 = _mm_loadu_si128((const __m128i *)v1391);
                                  *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                  *(__m128i *)v1394.m256i_i8 = v267;
                                  v1361 = 0;
                                  sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                                  if ( v1391[0] != 0xFF )
                                    sub_1401FF690(v1391);
                                  v1382.m256i_i64[3] = v1335;
                                  *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1334[8]);
                                  v1382.m256i_i8[0] = 5;
                                  v1307 = 0;
                                  sub_1401A27E0(v1391, v1280, &v1274, &v1382);
                                  if ( v1391[0] != 0xFF )
                                    sub_1401FF690(v1391);
                                  v1323.m256i_i64[3] = *(_QWORD *)&v1280[16];
                                  *(__m128i *)&v1323.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v1280);
                                  v1323.m256i_i8[0] = 5;
                                  v268 = v1279;
                                  if ( v1279 == v1278.m128i_i64[0] )
                                    sub_14172C8D0(&v1278);
                                  v269 = v1278.m128i_i64[1];
                                  v270 = 32 * v268;
                                  v271 = _mm_loadu_si128((const __m128i *)&v1323);
                                  v272 = _mm_loadu_si128((const __m128i *)&v1323.m256i_u64[2]);
LABEL_302:
                                  *(__m128i *)(v269 + v270 + 16) = v272;
                                  *(__m128i *)(v269 + v270) = v271;
                                  v1279 = v268 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
LABEL_288:
                      v273 = sub_1414D4800(aText_9, 4, v231);
                      if ( v273 )
                      {
                        if ( *(_BYTE *)v273 == 3 )
                        {
                          v277 = *(_QWORD *)(v273 + 16);
                          v278 = *(_QWORD *)(v273 + 24);
                          *(_QWORD *)&v1334[8] = v277;
                          *(_QWORD *)&v1334[16] = v278;
                          if ( v278 )
                          {
                            v1387.m256i_i64[0] = 0;
                            v1387.m256i_i64[2] = 0;
                            nullsub_1(v277, v274, v275, v276, v1181);
                            v279 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v279 )
                              sub_14176E54B(1, 4);
                            *v279 = 1701869940;
                            v1323.m256i_i64[0] = 4;
                            v1323.m256i_i64[1] = (__int64)v279;
                            v1323.m256i_i64[2] = 4;
                            v1360 = 1;
                            sub_1404A1EA0(v1391, &off_141850468);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_141855A78);
                            }
                            v280 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v280;
                            v1360 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1323, &v1394);
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            nullsub_1(v282, v281, v283, v284, v1192);
                            v285 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v285 )
                              sub_14176E54B(1, 4);
                            *v285 = 1954047348;
                            v1323.m256i_i64[0] = 4;
                            v1323.m256i_i64[1] = (__int64)v285;
                            v1323.m256i_i64[2] = 4;
                            v1359 = 1;
                            sub_1404A1EA0(v1391, &v1334[8]);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_141855A78);
                            }
                            v286 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v286;
                            v1359 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1323, &v1394);
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            v1382.m256i_i64[3] = v1387.m256i_i64[2];
                            *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1387);
                            v1382.m256i_i8[0] = 5;
                            v268 = v1279;
                            if ( v1279 == v1278.m128i_i64[0] )
                              sub_14172C8D0(&v1278);
                            v269 = v1278.m128i_i64[1];
                            v270 = 32 * v268;
                            v271 = _mm_loadu_si128((const __m128i *)&v1382);
                            v272 = _mm_loadu_si128((const __m128i *)&v1382.m256i_u64[2]);
                            goto LABEL_302;
                          }
                        }
                      }
                    }
                  }
                  else if ( v234 == 10
                         && !(*(_QWORD *)v233 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v233 + 8) ^ 0x7478LL) )
                  {
                    goto LABEL_288;
                  }
                }
              }
              if ( (_DWORD)v199 != 3 || !*((_QWORD *)v194 + 3) )
              {
LABEL_250:
                v227 = 0;
                v228 = 0;
                goto LABEL_410;
              }
              v200 = v194;
              nullsub_1(v199, v195, v196, v197, v1181);
              v201 = sub_140001650(32, 8);
              if ( !v201 )
              {
                v1388 = v1396;
                sub_14176E531(8, 32);
              }
              v206 = v201;
              v1387.m256i_i64[0] = 0;
              v1387.m256i_i64[2] = 0;
              nullsub_1(v203, v202, v204, v205, v1185);
              v207 = (_DWORD *)sub_140001650(4, 1);
              v1377 = v206;
              if ( !v207 )
                sub_14176E54B(1, 4);
              *v207 = 1701869940;
              v1323.m256i_i64[0] = 4;
              v1323.m256i_i64[1] = (__int64)v207;
              v1323.m256i_i64[2] = 4;
              nullsub_1(v209, v208, v210, v211, v1186);
              v212 = (__m128i *)sub_140001650(4, 1);
              v1398 = v212;
              if ( !v212 )
                sub_14176E54B(1, 4);
              v212->m128i_i32[0] = 1954047348;
              v1391[0] = 3;
              *(_QWORD *)&v1391[8] = 4;
              *(_QWORD *)&v1391[16] = v212;
              *(_QWORD *)&v1391[24] = 4;
              sub_1401A27E0(&v1394, &v1387, &v1323, v1391);
              if ( v1394.m256i_i8[0] != -1 )
                sub_1401FF690(&v1394);
              nullsub_1(v214, v213, v215, v216, v1187);
              v217 = (_DWORD *)sub_140001650(4, 1);
              if ( !v217 )
                sub_14176E54B(1, 4);
              *v217 = 1954047348;
              v1323.m256i_i64[0] = 4;
              v1323.m256i_i64[1] = (__int64)v217;
              v1323.m256i_i64[2] = 4;
              v222 = v200;
              *((_QWORD *)&v223 + 1) = *((_QWORD *)v200 + 3);
              if ( v223 < 0 )
              {
                v225 = 0;
LABEL_1009:
                v1308 = 1;
                sub_14176E54B(v225, *((_QWORD *)&v223 + 1));
              }
              if ( *((_QWORD *)&v223 + 1) )
              {
                v224 = *((_QWORD *)v222 + 2);
                nullsub_1(v219, v218, v220, v221, v1181);
                v225 = 1;
                v226 = sub_140001650(*((_QWORD *)&v223 + 1), 1);
                if ( !v226 )
                  goto LABEL_1009;
                *(_QWORD *)&v223 = v226;
                sub_14172B820(v226, v224, *((_QWORD *)&v223 + 1));
              }
              else
              {
                *(_QWORD *)&v223 = 1;
              }
              v1391[0] = 3;
              *(_QWORD *)&v1391[8] = *((_QWORD *)&v223 + 1);
              *(_OWORD *)&v1391[16] = v223;
              v1308 = 0;
              sub_1401A27E0(&v1394, &v1387, &v1323, v1391);
              if ( v1394.m256i_i8[0] != -1 )
                sub_1401FF690(&v1394);
              *(_OWORD *)v1391 = *(_OWORD *)v1387.m256i_i8;
              *(_QWORD *)&v1391[16] = v1387.m256i_i64[2];
              *(__int64 *)((char *)&v1382.m256i_i64[2] + 7) = v1387.m256i_i64[2];
              *(_OWORD *)((char *)&v1382.m256i_u32[1] + 3) = *(_OWORD *)v1387.m256i_i8;
              v198 = v1377;
              *(_BYTE *)v1377 = 5;
              v398 = _mm_loadu_si128((const __m128i *)((char *)&v1382.m256i_u64[1] + 7));
              *(__m128i *)(v198 + 1) = _mm_loadu_si128((const __m128i *)&v1382);
              *(__m128i *)(v198 + 16) = v398;
              v227 = 1;
              v228 = 1;
LABEL_410:
              v399 = v198 + 32 * v227;
              v1394.m256i_i64[0] = v198;
              v1394.m256i_i64[1] = v198;
              v1394.m256i_i64[2] = v228;
              v1394.m256i_i64[3] = v399;
              v400 = v198;
              if ( v227 )
              {
                v401 = v198 + 32;
                do
                {
                  v400 = v401;
                  v402 = *(_BYTE *)(v401 - 32);
                  if ( v402 == -1 )
                    break;
                  v403 = v400 - 32;
                  v1391[0] = v402;
                  v404 = _mm_loadu_si128((const __m128i *)(v400 - 32 + 1));
                  *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v400 - 32 + 16));
                  *(__m128i *)&v1391[1] = v404;
                  v1389 = v400;
                  sub_140A21BF0(&v1269, v185, v1402, v1391);
                  v400 = v1389;
                  v401 = v1389 + 32;
                }
                while ( v403 + 32 != v399 );
                v1394.m256i_i64[1] = v400;
              }
              v1384 = v228;
              v1377 = v198;
              v1398 = (__m128i *)((unsigned __int64)(v399 - v400) >> 5);
              v1389 = v400;
              v405 = v400;
              v1402 = 0;
              while ( v1398 != (__m128i *)v1402 )
              {
                ++v1402;
                v406 = v405 + 32;
                ((void (*)(void))sub_1403FF680)();
                v405 = v406;
              }
              if ( v1384 )
                sub_140001660(v1377, 32 * v1384, 8);
              v23 = v24;
            }
          }
        }
        else
        {                                       // 【中文证据注释】识别/清理侧(读取) private carrier 前缀的具体字节位置，在 sub_140A42B20(0x140a42b20, 0xc100=49408字节巨型多用途分发函数, 未整体重命名, 理由见下) 内部。本段(0x140a42ed9-0x140a42f65)与 mac 侧 response_item_id_compat::is_unusable_store_false_reasoning_item(0x10024df90) 行为模板逐字节对应: ① cmp rdi,9 + xor 比对 8+1 字节常量 0x6E696E6F73616572/0x67 = 字符串值=="reasoning"(9字节, 对应 mac 侧 payload.type!='reasoning' 判断, 不匹配跳 loc_140A42F8E 保留)；② 0x140a42f12 mov edx,11h + lea rcx,aEncryptedConte_0 调用 sub_1414D4800查字段 "encrypted_content"(17字节, 对应 mac 侧 17字节字段名); ③ 0x140a42f39 cmp r9,1Dh 长度>=29检查(对应 mac 侧 <29 保留判断); ④ 0x140a42f43-0x140a42f60 双16字节SIMD重叠比对(bytes[0:16)对xmm9、bytes[13:29)对xmm13)实现 29字节完整比对私有前缀 'aimami-anthropic-thinking-v1:'(@0x141855e45, 实测两段字节与该地址字节完全匹配, 根据 get_bytes 实测确认); ⑤ 0xFFFF全匹配后 jz loc_140A45BC1: r8+=0x1D(29)/r9-=0x1D 定位前缀后的 base64 后缀, 调用 sub_140B9FFD0(推断为 UTF-8 校验/构造 owned 字符串) + sub_14086E7A0(推断为 base64 解码) 尝试重建原始 Anthropic thinking/redacted_thinking 内容块。【与 mac 侧的差异】mac 侧 is_unusable_store_false_reasoning_item 是纯布尔判定函数(仅用于 store:false 请求清理时判定是否丢弃)；win 侧本段在前缀匹配后执行的是【解码重建】而非纯布尔丢弃——未能在本函数内找到与 mac 侧完全等价的纯判定-丢弃分支, 如实标注不臃造。sub_140A42B20 本身同时包含Doubao请求构建/语音转写后处理系统提示词等与本话题无关的分支, 因此未整体改名。完整字节级证据见 evidence.md 及 gate-report.json。
          if ( v28 != 9 || *(_QWORD *)v27 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v27 + 8) ^ 0x67LL )
            goto LABEL_33;
          v1388 = v1396;
          v31 = sub_1414D4800(aEncryptedConte_0, 17, v1386);
          if ( v31 )
          {
            if ( *(_BYTE *)v31 == 3 )
            {
              v32 = *(_QWORD *)(v31 + 24);
              if ( v32 >= 0x1D )
              {
                v33 = *(_QWORD *)(v31 + 16);
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v33 + 13)), v15),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v33), v16))) == 0xFFFF )
                {
                  v1388 = v1396;
                  sub_140B9FFD0(v1391, &unk_141855E62, v33 + 29, v32 - 29);
                  if ( *(_QWORD *)v1391 != -1 )
                  {
                    v1398 = *(__m128i **)&v1391[8];
                    v1402 = *(_QWORD *)v1391;
                    *(_OWORD *)v1391 = *(_OWORD *)&v1391[8];
                    *(_OWORD *)&v1391[16] = v17;
                    sub_14086E7A0(&v1394, v1391);
                    v349 = v1394.m256i_i8[0];
                    if ( v1394.m256i_i8[0] == -1 )
                    {
                      sub_14051D8C0(&v1394);
                    }
                    else
                    {
                      v350 = _mm_loadu_si128((const __m128i *)&v1394.m256i_i8[1]);
                      *(__m128i *)((char *)&v1323.m256i_u64[1] + 7) = _mm_loadu_si128((const __m128i *)&v1394.m256i_u64[2]);
                      *(__m128i *)v1323.m256i_i8 = v350;
                    }
                    if ( v1402 )
                      sub_140001660(v1398, v1402, 1);
                    if ( v349 != -1 )
                    {
                      *(_OWORD *)&v1382.m256i_u64[2] = *(_OWORD *)((char *)&v1323.m256i_u64[1] + 7);
                      *(__m128i *)&v1382.m256i_i8[1] = _mm_load_si128((const __m128i *)&v1323);
                      v1382.m256i_i8[0] = v349;
                      v422 = sub_1414D4800(aType_8, 4, &v1382);
                      v423 = -1;
                      v424 = 1;
                      if ( v422 && *(_BYTE *)v422 == 3 )
                      {
                        v425 = *(const __m128i **)(v422 + 16);
                        v426 = *(_QWORD *)(v422 + 24);
                        if ( v426 == 17 )
                        {
                          if ( _mm_movemask_epi8(
                                 _mm_and_si128(
                                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(v425[1].m128i_u8[0]), v19),
                                   _mm_cmpeq_epi8(_mm_loadu_si128(v425), v18))) != 0xFFFF )
                            goto LABEL_499;
                          v492 = sub_1414D4800("data", 4, &v1382);
                          if ( !v492 )
                            goto LABEL_573;
                          if ( *(_BYTE *)v492 != 3 )
                            goto LABEL_573;
                          v496 = *(_QWORD *)(v492 + 16);
                          v497 = *(_QWORD *)(v492 + 24);
                          v1274 = v496;
                          v1275.m128i_i64[0] = v497;
                          if ( !v497 )
                            goto LABEL_573;
                          *(_QWORD *)&v1334[8] = 0;
                          v1335 = 0;
                          nullsub_1(v496, v493, v494, v495, v1181);
                          v498 = (_DWORD *)sub_140001650(4, 1);
                          if ( !v498 )
                            sub_14176E54B(1, 4);
                          *v498 = 1701869940;
                          v1387.m256i_i64[0] = 4;
                          v1387.m256i_i64[1] = (__int64)v498;
                          v1387.m256i_i64[2] = 4;
                          v1376 = 1;
                          sub_1404A1EA0(v1391, &off_141856578);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_141856588);
                          }
                          v499 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v499;
                          v1376 = 0;
                          sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                          if ( v1391[0] != 0xFF )
                            sub_1401FF690(v1391);
                          nullsub_1(v501, v500, v502, v503, v1207);
                          v504 = (_DWORD *)sub_140001650(4, 1);
                          if ( !v504 )
                            sub_14176E54B(1, 4);
                          *v504 = 1635017060;
                          v1387.m256i_i64[0] = 4;
                          v1387.m256i_i64[1] = (__int64)v504;
                          v1387.m256i_i64[2] = 4;
                          v1375 = 1;
                          sub_1404A1EA0(v1391, &v1274);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_141856588);
                          }
                          v505 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v505;
                          v1375 = 0;
                          sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                          if ( v1391[0] == 0xFF )
                            goto LABEL_572;
LABEL_571:
                          sub_1401FF690(v1391);
LABEL_572:
                          *(_OWORD *)v1391 = *(_OWORD *)&v1334[8];
                          *(_QWORD *)&v1391[16] = v1335;
                          *(__int64 *)((char *)&v1323.m256i_i64[2] + 7) = v1335;
                          *(_OWORD *)((char *)&v1323.m256i_u32[1] + 3) = *(_OWORD *)&v1334[8];
                          v526 = _mm_loadu_si128((const __m128i *)((char *)&v1323.m256i_u64[1] + 7));
                          *(__m128i *)v1394.m256i_i8 = _mm_loadu_si128((const __m128i *)&v1323);
                          *(__m128i *)((char *)&v1394.m256i_u64[1] + 7) = v526;
                          v423 = 5;
                          v424 = 0;
                          v17 = 0;
                          goto LABEL_499;
                        }
                        if ( v426 == 8 && v425->m128i_i64[0] == 0x676E696B6E696874LL )
                        {
                          v427 = sub_1414D4800(aThinking_1, 8, &v1382);
                          v428 = 1;
                          if ( v427 && *(_BYTE *)v427 == 3 )
                          {
                            v428 = *(_QWORD *)(v427 + 16);
                            v429 = *(_QWORD *)(v427 + 24);
                          }
                          else
                          {
                            v429 = 0;
                          }
                          *(_QWORD *)v1280 = v428;
                          *(_QWORD *)&v1280[8] = v429;
                          v506 = sub_1414D4800(aSignature, 9, &v1382);
                          if ( !v506
                            || *(_BYTE *)v506 != 3
                            || (v510 = *(_QWORD *)(v506 + 16),
                                v511 = *(_QWORD *)(v506 + 24),
                                v1274 = v510,
                                (v1275.m128i_i64[0] = v511) == 0) )
                          {
LABEL_573:
                            v1388 = v1396;
                            sub_1401FF690(&v1382);
                            v17 = 0;
                            goto LABEL_31;
                          }
                          *(_QWORD *)&v1334[8] = 0;
                          v1335 = 0;
                          nullsub_1(v510, v507, v508, v509, v1181);
                          v512 = (_DWORD *)sub_140001650(4, 1);
                          if ( !v512 )
                            sub_14176E54B(1, 4);
                          *v512 = 1701869940;
                          v1387.m256i_i64[0] = 4;
                          v1387.m256i_i64[1] = (__int64)v512;
                          v1387.m256i_i64[2] = 4;
                          v1374 = 1;
                          sub_1404A1EA0(v1391, &off_1418565A0);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_1418565B0);
                          }
                          v513 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v513;
                          v1374 = 0;
                          sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                          if ( v1391[0] != 0xFF )
                            sub_1401FF690(v1391);
                          nullsub_1(v515, v514, v516, v517, v1208);
                          v518 = (_QWORD *)sub_140001650(8, 1);
                          if ( !v518 )
                            sub_14176E54B(1, 8);
                          *v518 = 0x676E696B6E696874LL;
                          v1387.m256i_i64[0] = 8;
                          v1387.m256i_i64[1] = (__int64)v518;
                          v1387.m256i_i64[2] = 8;
                          v1373 = 1;
                          sub_1404A1EA0(v1391, v1280);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_1418565B0);
                          }
                          v519 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v519;
                          v1373 = 0;
                          sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                          if ( v1391[0] != 0xFF )
                            sub_1401FF690(v1391);
                          nullsub_1(v521, v520, v522, v523, v1209);
                          v524 = sub_140001650(9, 1);
                          if ( !v524 )
                            sub_14176E54B(1, 9);
                          *(_QWORD *)v524 = 0x727574616E676973LL;
                          *(_BYTE *)(v524 + 8) = 101;
                          v1387.m256i_i64[0] = 9;
                          v1387.m256i_i64[1] = v524;
                          v1387.m256i_i64[2] = 9;
                          v1372 = 1;
                          sub_1404A1EA0(v1391, &v1274);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_1418565B0);
                          }
                          v525 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v525;
                          v1372 = 0;
                          sub_1401A27E0(v1391, &v1334[8], &v1387, &v1394);
                          if ( v1391[0] == 0xFF )
                            goto LABEL_572;
                          goto LABEL_571;
                        }
                      }
LABEL_499:
                      v1388 = v1396;
                      sub_1401FF690(&v1382);
                      if ( !v424 )
                      {
                        v1391[0] = v423;
                        *(_OWORD *)&v1391[16] = *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7);
                        *(_OWORD *)&v1391[1] = *(_OWORD *)v1394.m256i_i8;
                        v441 = v1320;
                        if ( v1320 == v1319.m128i_i64[0] )
                          sub_14172C8D0(&v1319);
                        v442 = v1319.m128i_i64[1];
                        v443 = 32 * v441;
                        v444 = _mm_loadu_si128((const __m128i *)v1391);
                        *(__m128i *)(v1319.m128i_i64[1] + v443 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                        *(__m128i *)(v442 + v443) = v444;
                        v1320 = v441 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_31:
          v23 = v24;
        }
      }
    }
  }
  v550 = v1319;
  v551 = v1319.m128i_i64[1] + 32 * v1320;
  v1394.m256i_i64[0] = v1319.m128i_i64[1];
  v1394.m256i_i64[1] = v1319.m128i_i64[1];
  v1394.m256i_i64[2] = v1319.m128i_i64[0];
  v1394.m256i_i64[3] = v551;
  v552 = v1319.m128i_i64[1];
  if ( v1320 )
  {
    v552 = v1319.m128i_i64[1] + 32;
    while ( *(_BYTE *)(v552 - 32) != 0xFF )
    {
      v553 = v552 - 32;
      v1391[0] = *(_BYTE *)(v552 - 32);
      v554 = _mm_loadu_si128((const __m128i *)(v552 - 32 + 1));
      *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v552 - 32 + 16));
      *(__m128i *)&v1391[1] = v554;
      v1389 = v552;
      sub_140A284E0(&v1269, v1391);
      v552 = v1389 + 32;
      if ( v553 + 32 == v551 )
      {
        v552 = v551;
        break;
      }
    }
    v1394.m256i_i64[1] = v552;
  }
  v1318 = v550.m128i_i64[1];
  v1384 = v550.m128i_i64[0];
  v1398 = (__m128i *)((unsigned __int64)(v551 - v552) >> 5);
  v1402 = 0;
  v1389 = v552;
  v555 = v552;
  while ( v1398 != (__m128i *)v1402 )
  {
    ++v1402;
    v556 = v555 + 32;
    ((void (*)(void))sub_1403FF680)();
    v555 = v556;
  }
  if ( v1384 )
    sub_140001660(v1318, 32 * v1384, 8);
LABEL_617:
  v1273 = v1322;
  v1277 = (__int64)v1396;
  v1399 = 1;
  sub_140B4B600(&v1269);
  v564 = v1271;
  if ( !v1271 )
  {
LABEL_648:
    _RAX = aCannotConvertC;
    v620 = v1257;
    v1257->m128i_i64[1] = (__int64)aCannotConvertC;
    v620[1].m128i_i64[0] = 44;
    v620->m128i_i8[0] = -1;
    goto LABEL_649;
  }
  v565 = (__m128i *)v1270;
  v1273 = v1322;
  v1277 = (__int64)v1396;
  v1399 = 1;
  v566 = sub_1414D4800(
           "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax"
           "_tokensstreamdoubaoreasoning_effortnone",
           4,
           v1270);
  if ( !v566 || *(_BYTE *)v566 != 3 || *(_QWORD *)(v566 + 24) == 4 && **(_DWORD **)(v566 + 16) == 1919251317 )
  {
    if ( v1271 )
      goto LABEL_642;
    goto LABEL_648;
  }
  *(_QWORD *)&v1334[8] = 0;
  v1335 = 0;
  nullsub_1(v568, v567, v569, v570, v1181);
  v571 = (_DWORD *)sub_140001650(4, 1);
  if ( !v571 )
    sub_14176E54B(1, 4);
  *v571 = 1701605234;
  v1382.m256i_i64[0] = 4;
  v1382.m256i_i64[1] = (__int64)v571;
  v1382.m256i_i64[2] = 4;
  nullsub_1(v573, v572, v574, v575, v1212);
  v576 = (__m128i *)sub_140001650(4, 1);
  v1402 = (__int64)v576;
  if ( !v576 )
    sub_14176E54B(1, 4);
  v576->m128i_i32[0] = 1919251317;
  v1391[0] = 3;
  *(_QWORD *)&v1391[8] = 4;
  *(_QWORD *)&v1391[16] = v576;
  *(_QWORD *)&v1391[24] = 4;
  sub_1401A27E0(&v1394, &v1334[8], &v1382, v1391);
  if ( v1394.m256i_i8[0] != -1 )
    sub_1401FF690(&v1394);
  nullsub_1(v578, v577, v579, v580, v1213);
  v581 = (_DWORD *)sub_140001650(7, 1);
  if ( !v581 )
    sub_14176E54B(1, 7);
  *(_DWORD *)((char *)v581 + 3) = 1953391988;
  *v581 = 1953394531;
  v1387.m256i_i64[0] = 7;
  v1387.m256i_i64[1] = (__int64)v581;
  v1387.m256i_i64[2] = 7;
  nullsub_1(v583, v582, v584, v585, v1214);
  v586 = sub_140001650(32, 8);
  if ( !v586 )
  {
    v1331 = 1;
    sub_14176E531(8, 32);
  }
  v591 = (const __m128i *)v586;
  v1323.m256i_i64[0] = 0;
  v1323.m256i_i64[2] = 0;
  nullsub_1(v588, v587, v589, v590, v1215);
  v592 = (_DWORD *)sub_140001650(4, 1);
  v1402 = (__int64)v591;
  if ( !v592 )
    sub_14176E54B(1, 4);
  *v592 = 1701869940;
  v1382.m256i_i64[0] = 4;
  v1382.m256i_i64[1] = (__int64)v592;
  v1382.m256i_i64[2] = 4;
  nullsub_1(v594, v593, v595, v596, v1216);
  v597 = (_DWORD *)sub_140001650(4, 1);
  v1386 = (__int64)v597;
  if ( !v597 )
    sub_14176E54B(1, 4);
  *v597 = 1954047348;
  v1391[0] = 3;
  *(_QWORD *)&v1391[8] = 4;
  *(_QWORD *)&v1391[16] = v597;
  *(_QWORD *)&v1391[24] = 4;
  sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
  if ( v1394.m256i_i8[0] != -1 )
    sub_1401FF690(&v1394);
  nullsub_1(v599, v598, v600, v601, v1217);
  v602 = (_DWORD *)sub_140001650(4, 1);
  if ( !v602 )
    sub_14176E54B(1, 4);
  *v602 = 1954047348;
  v1382.m256i_i64[0] = 4;
  v1382.m256i_i64[1] = (__int64)v602;
  v1382.m256i_i64[2] = 4;
  nullsub_1(v604, v603, v605, v606, v1218);
  v607 = sub_140001650(29, 1);
  v1386 = v607;
  if ( !v607 )
    sub_14176E54B(1, 29);
  *(_OWORD *)(v607 + 13) = *(__int128 *)((char *)&xmmword_141856150 + 13);
  *(__m128i *)v607 = _mm_loadu_si128((const __m128i *)&xmmword_141856150);
  v1391[0] = 3;
  *(_QWORD *)&v1391[8] = 29;
  *(_QWORD *)&v1391[16] = v607;
  *(_QWORD *)&v1391[24] = 29;
  sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
  if ( v1394.m256i_i8[0] != -1 )
    sub_1401FF690(&v1394);
  *(_OWORD *)&v1391[7] = *(_OWORD *)v1323.m256i_i8;
  *(_QWORD *)&v1391[23] = v1323.m256i_i64[2];
  v608 = v1402;
  *(_BYTE *)v1402 = 5;
  v609 = _mm_loadu_si128((const __m128i *)v1391);
  *(_OWORD *)(v608 + 16) = *(_OWORD *)&v1391[15];
  *(__m128i *)(v608 + 1) = v609;
  *(_QWORD *)&v1391[8] = 1;
  *(_QWORD *)&v1391[16] = v608;
  *(_QWORD *)&v1391[24] = 1;
  v1391[0] = 4;
  v1331 = 0;
  sub_1401A27E0(&v1394, &v1334[8], &v1387, v1391);
  if ( v1394.m256i_i8[0] != -1 )
    sub_1401FF690(&v1394);
  *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1334[8]);
  *(_QWORD *)&v1391[24] = v1335;
  v1391[0] = 5;
  if ( v564 == v1269 )
  {
    sub_14172C8D0(&v1269);
    v565 = (__m128i *)v1270;
  }
  sub_14172B820(&v565[2], v565, 32LL * (_QWORD)v564);
  v610 = _mm_loadu_si128((const __m128i *)&v1391[16]);
  *v565 = _mm_loadu_si128((const __m128i *)v1391);
  v565[1] = v610;
  v1271 = (const __m128i *)&v564->m128i_i8[1];
LABEL_642:
  v1273 = v1322;
  v1277 = (__int64)v1396;
  v1399 = 1;
  v611 = sub_1414D4800(aModel_5, 5, v1337);
  if ( v611 )
  {
    v616 = v1321;
    if ( *(_BYTE *)v611 == 3 )
    {
      v616 = *(_QWORD *)(v611 + 24);
      v1282 = *(_WORD **)(v611 + 16);
    }
    v617 = v616 == 0;
    if ( v616 < 0 )
    {
LABEL_646:
      v618 = 0;
      goto LABEL_647;
    }
  }
  else
  {
    v616 = v1321;
    v617 = v1321 == 0;
    if ( v1321 < 0 )
      goto LABEL_646;
  }
  v1321 = v616;
  if ( v617 )
  {
    v1386 = 1;
  }
  else
  {
    nullsub_1(v613, v612, v614, v615, v1181);
    v618 = 1;
    v633 = sub_140001650(v616, 1);
    if ( !v633 )
    {
LABEL_647:
      v1273 = v1322;
      v1277 = (__int64)v1396;
      v1399 = 1;
      sub_14176E54B(v618, v616);
    }
    v1386 = v633;
    sub_14172B820(v633, v1282, v616);
  }
  v1390 = 1;
  v634 = sub_140B4EFE0(v1270, v1271);
  if ( v634 || (v1390 = 1, sub_1405D62A0(v1391, v1386, v1321), v1391[20] == 2) || !v1391[18] )
  {
    v1390 = 1;
    v635 = sub_1414D4800(aMaxOutputToken_0, 17, v1337);
    if ( v635 || (v1390 = 1, (v635 = sub_1414D4800("max_tokensstreamdoubaoreasoning_effortnone", 10, v1337)) != 0) )
    {
      v639 = v1321;
      if ( *(_BYTE *)v635 == 2 && !*(_QWORD *)(v635 + 8) )
      {
        v616 = *(_QWORD *)(v635 + 16);
        v640 = 1;
      }
      else
      {
        v640 = 0;
      }
    }
    else
    {
      v640 = 0;
      v639 = v1321;
    }
    if ( !v616 )
      v616 = 0x2000;
    if ( !v640 )
      v616 = 0x2000;
    v1323.m256i_i64[0] = 0;
    v1323.m256i_i64[2] = 0;
    nullsub_1(0x2000, v636, v637, v638, v1181);
    v641 = 1;
    v642 = sub_140001650(5, 1);
    if ( !v642 )
      sub_14176E54B(1, 5);
    *(_BYTE *)(v642 + 4) = 108;
    *(_DWORD *)v642 = 1701080941;
    v1382.m256i_i64[0] = 5;
    v1382.m256i_i64[1] = v642;
    v1382.m256i_i64[2] = 5;
    if ( v639 )
    {
      nullsub_1(v644, v643, v645, v646, v1219);
      v647 = sub_140001650(v639, 1);
      if ( !v647 )
      {
        v1305 = 1;
        sub_14176E54B(1, v639);
      }
      v641 = v647;
      sub_14172B820(v647, v1386, v639);
    }
    v1391[0] = 3;
    *(_QWORD *)&v1391[8] = v639;
    *(_QWORD *)&v1391[16] = v641;
    *(_QWORD *)&v1391[24] = v639;
    v1305 = 0;
    sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
    if ( v1394.m256i_i8[0] != -1 )
      sub_1401FF690(&v1394);
    nullsub_1(v649, v648, v650, v651, v1219);
    v652 = (_QWORD *)sub_140001650(8, 1);
    if ( !v652 )
      sub_14176E54B(1, 8);
    *v652 = 0x736567617373656DLL;
    v1382.m256i_i64[0] = 8;
    v1382.m256i_i64[1] = (__int64)v652;
    v1382.m256i_i64[2] = 8;
    v1358 = 1;
    sub_140AB4550(v1391, &v1269);
    if ( v1391[0] == 0xFF )
    {
      v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
      sub_14176E860(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v1394,
        (unsigned int)&off_141851870,
        (__int64)&off_141856338);
    }
    v653 = _mm_loadu_si128((const __m128i *)v1391);
    *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
    *(__m128i *)v1394.m256i_i8 = v653;
    v1358 = 0;
    sub_1401A27E0(v1391, &v1323, &v1382, &v1394);
    if ( v1391[0] != 0xFF )
      sub_1401FF690(v1391);
    nullsub_1(v655, v654, v656, v657, v1220);
    v658 = (void *)sub_140001650(10, 1);
    if ( !v658 )
      sub_14176E54B(1, 10);
    qmemcpy(v658, "max_tokens", 10);
    v1382.m256i_i64[0] = 10;
    v1382.m256i_i64[1] = (__int64)v658;
    v1382.m256i_i64[2] = 10;
    v1391[0] = 2;
    *(_QWORD *)&v1391[8] = 0;
    *(_QWORD *)&v1391[16] = v616;
    sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
    if ( v1394.m256i_i8[0] != -1 )
      sub_1401FF690(&v1394);
    v1275 = _mm_loadu_si128((const __m128i *)&v1323);
    v1276 = v1323.m256i_i64[2];
    LOBYTE(v1274) = 5;
    LOBYTE(v1262) = &v1396->m128i_i8[1] == nullptr;
    if ( v1396 != (const __m128i *)-1LL )
    {
      *(_QWORD *)&v1391[8] = v1396;
      *(_QWORD *)&v1391[16] = v1322;
      *(_QWORD *)&v1391[24] = *(_QWORD *)v1334;
      v1391[0] = 3;
      v1304 = 1;
      v1402 = sub_1414D4900(
                "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturema"
                "x_tokensstreamdoubaoreasoning_effortnone",
                6,
                &v1274);
      sub_1401FF690(v1402);
      v659 = _mm_loadu_si128((const __m128i *)v1391);
      v660 = (_OWORD *)v1402;
      *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
      *v660 = v659;
    }
    LOBYTE(v1398) = v634;
    v661 = a5;
    if ( !a5 )
    {
      v1403 = 1;
      v664 = sub_1414D4800(aReasoning_1, 9, v1337);
      if ( !v664 || (v1403 = 1, (v665 = sub_1414D4800(aEffort_0, 6, v664)) == 0) || *(_BYTE *)v665 != 3 )
      {
        v1403 = 1;
        v665 = sub_1414D4800("reasoning_effortnone", 16, v1337);
        if ( !v665 || *(_BYTE *)v665 != 3 )
        {
          v661 = 0;
LABEL_708:
          v1403 = 1;
          v666 = sub_1414D5590(v1337, aReasoningSumma, 18);
          if ( !v666 || *(_BYTE *)v666 != 3 )
            goto LABEL_722;
          v667 = sub_140A82F20(*(_QWORD *)(v666 + 16), *(_QWORD *)(v666 + 24));
          v672 = v668;
          if ( v668 < 0 )
          {
            v673 = 0;
            goto LABEL_712;
          }
          if ( !v668 )
          {
LABEL_722:
            v1282 = nullptr;
            v679 = v1321;
            goto LABEL_723;
          }
          v674 = v667;
          nullsub_1(v669, v668, v670, v671, v1221);
          v673 = 1;
          v675 = sub_140001650(v672, 1);
          if ( !v675 )
          {
LABEL_712:
            v1403 = 1;
            sub_14176E54B(v673, v672);
          }
          v676 = v675;
          sub_14172B820(v675, v674, v672);
          if ( v672 < 8 )
          {
            v677 = 0;
            v678 = v1321;
            goto LABEL_1282;
          }
          v678 = v1321;
          if ( v672 >= 0x20 )
          {
            v677 = v672 & 0x7FFFFFFFFFFFFFE0LL;
            v929 = 0;
            v930 = _mm_load_si128((const __m128i *)&xmmword_1417EB690);
            v931 = _mm_load_si128((const __m128i *)&xmmword_1417EB6A0);
            v932 = _mm_load_si128((const __m128i *)&xmmword_1417EB6B0);
            do
            {
              v933 = _mm_loadu_si128((const __m128i *)(v676 + v929));
              v934 = _mm_loadu_si128((const __m128i *)(v676 + v929 + 16));
              v935 = _mm_add_epi8(v933, v930);
              v936 = _mm_add_epi8(v934, v930);
              *(__m128i *)(v676 + v929) = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v935, v931), v935), v932),
                                            v933);
              *(__m128i *)(v676 + v929 + 16) = _mm_or_si128(
                                                 _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v936, v931), v936), v932),
                                                 v934);
              v929 += 32;
            }
            while ( v677 != v929 );
            if ( v672 == v677 )
              goto LABEL_1284;
            if ( (v672 & 0x18) == 0 )
            {
              do
              {
LABEL_1282:
                *(_BYTE *)(v676 + v677) |= 32 * ((unsigned __int8)(*(_BYTE *)(v676 + v677) - 65) < 0x1Au);
                ++v677;
LABEL_1283:
                ;
              }
              while ( v672 != v677 );
LABEL_1284:
              v1043 = v678;
              if ( v672 == 8 )
              {
                if ( *(_QWORD *)v676 != 0x64656C6961746564LL )
                  goto LABEL_1290;
              }
              else
              {
                if ( v672 != 7 )
                {
                  if ( v672 == 4 && *(_DWORD *)v676 == 1869903201 )
                    goto LABEL_1292;
LABEL_1290:
                  v1282 = nullptr;
LABEL_1293:
                  sub_140001660(v676, v672, 1);
                  v679 = v1043;
LABEL_723:
                  v1403 = 1;
                  sub_1405D62A0(v1391, v1386, v679);
                  LOBYTE(v639) = v1391[16];
                  v680 = v1391[20] == 2;
                  v1403 = 1;
                  sub_1405D62A0(v1391, v1386, v1321);
                  v681 = v1391[17];
                  v682 = v1391[20] != 2;
                  v1403 = 1;
                  sub_1405D62A0(v1391, v1386, v1321);
                  LOBYTE(v6) = v1391[18];
                  v683 = v1391[20] != 2;
                  v1403 = 1;
                  LOBYTE(v1389) = sub_1405D72E0(v661, v1402);
                  v688 = v639 | v680;
                  v689 = v681 & v682;
                  v690 = v6 & v683;
                  if ( v661 )
                  {
                    v1403 = 1;
                    v691 = sub_1405D6AB0(v1386, v1321, v661, v1402);
                    v6 = v691;
                    v639 = v684;
                    if ( (v688 & 1) == 0 )
                    {
                      v692 = (v691 != 0) | v689;
                      v693 = (char)v1398;
                      if ( !v692 )
                      {
LABEL_741:
                        if ( v693 )
                        {
                          if ( v690 | (unsigned __int8)v1389 ^ 1 )
                          {
                            v661 = 0;
                            if ( !v690 )
                              goto LABEL_796;
                            v6 = 0;
LABEL_745:
                            v1323.m256i_i64[0] = 0;
                            v1323.m256i_i64[2] = 0;
                            nullsub_1(v685, v684, v686, v687, v1221);
                            v700 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v700 )
                              sub_14176E54B(1, 4);
                            *v700 = 1701869940;
                            v1382.m256i_i64[0] = 4;
                            v1382.m256i_i64[1] = (__int64)v700;
                            v1382.m256i_i64[2] = 4;
                            nullsub_1(v702, v701, v703, v704, v1223);
                            v705 = (__m128i *)sub_140001650(8, 1);
                            v706 = v1282;
                            v1402 = (__int64)v705;
                            if ( !v705 )
                              sub_14176E54B(1, 8);
                            v705->m128i_i64[0] = 0x6576697470616461LL;
                            v1391[0] = 3;
                            *(_QWORD *)&v1391[8] = 8;
                            *(_QWORD *)&v1391[16] = v705;
                            *(_QWORD *)&v1391[24] = 8;
                            sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
                            if ( v1394.m256i_i8[0] != -1 )
                              sub_1401FF690(&v1394);
                            *(__m128i *)&v1382.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1323);
                            v1382.m256i_i64[3] = v1323.m256i_i64[2];
                            v1382.m256i_i8[0] = 5;
                            if ( v706 )
                            {
                              nullsub_1(v708, v707, v709, v710, v1221);
                              v711 = sub_140001650(10, 1);
                              if ( !v711 )
                              {
                                v1397 = 1;
                                sub_14176E54B(1, 10);
                              }
                              *(_WORD *)(v711 + 8) = v706[4];
                              *(_QWORD *)v711 = *(_QWORD *)v706;
                              *(_QWORD *)&v1391[8] = 10;
                              *(_QWORD *)&v1391[16] = v711;
                              *(_QWORD *)&v1391[24] = 10;
                              v1391[0] = 3;
                              v1298 = 1;
                              v1402 = sub_1414D4900(aDisplay, 7, &v1382);
                              sub_1401FF690(v1402);
                              v712 = _mm_loadu_si128((const __m128i *)v1391);
                              v713 = (_OWORD *)v1402;
                              *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *v713 = v712;
                            }
                            *(__m256i *)v1391 = v1382;
                            v1297 = 1;
                            v1402 = sub_1414D4900(aThinking_1, 8, &v1274);
                            sub_1401FF690(v1402);
                            v715 = _mm_load_si128((const __m128i *)v1391);
                            v716 = (_OWORD *)v1402;
                            *(__m128i *)(v1402 + 16) = _mm_load_si128((const __m128i *)&v1391[16]);
                            *v716 = v715;
                            if ( v6 )
                            {
                              *(_QWORD *)&v1334[8] = v6;
                              *(_QWORD *)&v1334[16] = v639;
                              v1387.m256i_i64[0] = 0;
                              v1387.m256i_i64[2] = 0;
                              nullsub_1(v685, v684, v686, v714, v1221);
                              v717 = sub_140001650(6, 1);
                              if ( !v717 )
                                sub_14176E54B(1, 6);
                              *(_WORD *)(v717 + 4) = 29810;
                              *(_DWORD *)v717 = 1868981861;
                              v1323.m256i_i64[0] = 6;
                              v1323.m256i_i64[1] = v717;
                              v1323.m256i_i64[2] = 6;
                              v1355 = 1;
                              sub_1404A1EA0(v1391, &v1334[8]);
                              if ( v1391[0] == 0xFF )
                              {
                                v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                sub_14176E860(
                                  (unsigned int)aCalledResultUn_15,
                                  43,
                                  (unsigned int)&v1394,
                                  (unsigned int)&off_141851870,
                                  (__int64)&off_141855C30);
                              }
                              v718 = _mm_loadu_si128((const __m128i *)v1391);
                              *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *(__m128i *)v1394.m256i_i8 = v718;
                              v1355 = 0;
                              sub_1401A27E0(v1391, &v1387, &v1323, &v1394);
                              if ( v1391[0] != 0xFF )
                                sub_1401FF690(v1391);
                              *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1387);
                              *(_QWORD *)&v1391[24] = v1387.m256i_i64[2];
                              v1391[0] = 5;
                              v1296 = 1;
                              v1402 = sub_1414D4900(aOutputConfig, 13, &v1274);
                              sub_1401FF690(v1402);
                            }
                            else
                            {
                              if ( (v690 & (unsigned __int8)v1389) == 0 )
                              {
LABEL_1017:
                                LOBYTE(v661) = 1;
                                goto LABEL_796;
                              }
                              v1387.m256i_i64[0] = 0;
                              v1387.m256i_i64[2] = 0;
                              nullsub_1(v685, v684, v686, v714, v1221);
                              v922 = sub_140001650(6, 1);
                              if ( !v922 )
                                sub_14176E54B(1, 6);
                              *(_WORD *)(v922 + 4) = 29810;
                              *(_DWORD *)v922 = 1868981861;
                              v1323.m256i_i64[0] = 6;
                              v1323.m256i_i64[1] = v922;
                              v1323.m256i_i64[2] = 6;
                              v1354 = 1;
                              sub_1404A1EA0(v1391, &off_141855C50);
                              if ( v1391[0] == 0xFF )
                              {
                                v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                sub_14176E860(
                                  (unsigned int)aCalledResultUn_15,
                                  43,
                                  (unsigned int)&v1394,
                                  (unsigned int)&off_141851870,
                                  (__int64)&off_141855C60);
                              }
                              v923 = _mm_loadu_si128((const __m128i *)v1391);
                              *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *(__m128i *)v1394.m256i_i8 = v923;
                              v1354 = 0;
                              sub_1401A27E0(v1391, &v1387, &v1323, &v1394);
                              if ( v1391[0] != 0xFF )
                                sub_1401FF690(v1391);
                              *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1387);
                              *(_QWORD *)&v1391[24] = v1387.m256i_i64[2];
                              v1391[0] = 5;
                              v1295 = 1;
                              v1402 = sub_1414D4900(aOutputConfig, 13, &v1274);
                              sub_1401FF690(v1402);
                            }
                            v924 = _mm_loadu_si128((const __m128i *)v1391);
                            v925 = (_OWORD *)v1402;
                            *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *v925 = v924;
                            goto LABEL_1017;
                          }
                          goto LABEL_789;
                        }
                        if ( v690 )
                          goto LABEL_784;
LABEL_795:
                        v661 = 0;
                        goto LABEL_796;
                      }
LABEL_738:
                      if ( v693 )
                      {
                        if ( v690 | (unsigned __int8)v1389 ^ 1 )
                          goto LABEL_745;
LABEL_789:
                        v1323.m256i_i64[0] = 0;
                        v1323.m256i_i64[2] = 0;
                        nullsub_1(v685, v684, v686, v687, v1221);
                        v742 = (_DWORD *)sub_140001650(4, 1);
                        if ( !v742 )
                          sub_14176E54B(1, 4);
                        *v742 = 1701869940;
                        v1382.m256i_i64[0] = 4;
                        v1382.m256i_i64[1] = (__int64)v742;
                        v1382.m256i_i64[2] = 4;
                        nullsub_1(v744, v743, v745, v746, v1226);
                        v747 = (__m128i *)sub_140001650(8, 1);
                        v1402 = (__int64)v747;
                        if ( !v747 )
                          sub_14176E54B(1, 8);
                        v747->m128i_i64[0] = 0x64656C6261736964LL;
                        v1391[0] = 3;
                        *(_QWORD *)&v1391[8] = 8;
                        *(_QWORD *)&v1391[16] = v747;
                        *(_QWORD *)&v1391[24] = 8;
                        sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
                        if ( v1394.m256i_i8[0] != -1 )
                          sub_1401FF690(&v1394);
                        *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
                        *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
                        v1391[0] = 5;
                        v1299 = 1;
                        v1402 = sub_1414D4900(aThinking_1, 8, &v1274);
                        sub_1401FF690(v1402);
LABEL_794:
                        v748 = _mm_loadu_si128((const __m128i *)v1391);
                        v749 = (_OWORD *)v1402;
                        *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                        *v749 = v748;
                        goto LABEL_795;
                      }
LABEL_784:
                      v1323.m256i_i64[0] = 0;
                      v1323.m256i_i64[2] = 0;
                      nullsub_1(v685, v684, v686, v687, v1221);
                      v736 = (_DWORD *)sub_140001650(4, 1);
                      if ( !v736 )
                        sub_14176E54B(1, 4);
                      *v736 = 1701869940;
                      v1382.m256i_i64[0] = 4;
                      v1382.m256i_i64[1] = (__int64)v736;
                      v1382.m256i_i64[2] = 4;
                      nullsub_1(v738, v737, v739, v740, v1225);
                      v741 = (__m128i *)sub_140001650(8, 1);
                      v1402 = (__int64)v741;
                      if ( !v741 )
                        sub_14176E54B(1, 8);
                      v741->m128i_i64[0] = 0x64656C6261736964LL;
                      v1391[0] = 3;
                      *(_QWORD *)&v1391[8] = 8;
                      *(_QWORD *)&v1391[16] = v741;
                      *(_QWORD *)&v1391[24] = 8;
                      sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
                      if ( v1394.m256i_i8[0] != -1 )
                        sub_1401FF690(&v1394);
                      *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
                      *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
                      v1391[0] = 5;
                      v1300 = 1;
                      v1402 = sub_1414D4900(aThinking_1, 8, &v1274);
                      sub_1401FF690(v1402);
                      goto LABEL_794;
                    }
                  }
                  else
                  {
                    if ( (v688 & 1) == 0 )
                    {
                      v693 = (char)v1398;
                      if ( !v689 )
                        goto LABEL_741;
                      v6 = 0;
                      goto LABEL_738;
                    }
                    v6 = 0;
                  }
                  if ( (_BYTE)v1398 )
                  {
                    if ( (_BYTE)v1389 )
                    {
                      v1323.m256i_i64[0] = 0;
                      v1323.m256i_i64[2] = 0;
                      nullsub_1(v685, v684, v686, v687, v1221);
                      v694 = (_DWORD *)sub_140001650(4, 1);
                      if ( !v694 )
                        sub_14176E54B(1, 4);
                      *v694 = 1701869940;
                      v1382.m256i_i64[0] = 4;
                      v1382.m256i_i64[1] = (__int64)v694;
                      v1382.m256i_i64[2] = 4;
                      nullsub_1(v696, v695, v697, v698, v1222);
                      v699 = (__m128i *)sub_140001650(8, 1);
                      v1402 = (__int64)v699;
                      if ( !v699 )
                        sub_14176E54B(1, 8);
                      v699->m128i_i64[0] = 0x64656C6261736964LL;
                      v1391[0] = 3;
                      *(_QWORD *)&v1391[8] = 8;
                      *(_QWORD *)&v1391[16] = v699;
                      *(_QWORD *)&v1391[24] = 8;
                      sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
                      if ( v1394.m256i_i8[0] != -1 )
                        sub_1401FF690(&v1394);
                      *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
                      *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
                      v1391[0] = 5;
                      v1301 = 1;
                      v1402 = sub_1414D4900(aThinking_1, 8, &v1274);
                      sub_1401FF690(v1402);
                      goto LABEL_794;
                    }
                    if ( v661 )
                    {
                      v1403 = 1;
                      if ( sub_1405D7030(v661, v1402) == 1 )
                      {
                        v719 = v684;
                        v1403 = 1;
                        v720 = sub_1414D4800("max_tokensstreamdoubaoreasoning_effortnone", 10, &v1274);
                        v685 = 0x2000;
                        if ( v720 && *(_BYTE *)v720 == 2 && !*(_QWORD *)(v720 + 8) )
                          v685 = *(_QWORD *)(v720 + 16) >> 1;
                        if ( v685 < v719 )
                          v719 = v685;
                        if ( v719 >= 0x400 )
                        {
                          v1323.m256i_i64[0] = 0;
                          v1323.m256i_i64[2] = 0;
                          nullsub_1(v685, v684, v686, v721, v1221);
                          v722 = (_DWORD *)sub_140001650(4, 1);
                          if ( !v722 )
                            sub_14176E54B(1, 4);
                          *v722 = 1701869940;
                          v1382.m256i_i64[0] = 4;
                          v1382.m256i_i64[1] = (__int64)v722;
                          v1382.m256i_i64[2] = 4;
                          v1357 = 1;
                          sub_1404A1EA0(v1391, &off_141855BD8);
                          if ( v1391[0] == 0xFF )
                          {
                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                            sub_14176E860(
                              (unsigned int)aCalledResultUn_15,
                              43,
                              (unsigned int)&v1394,
                              (unsigned int)&off_141851870,
                              (__int64)&off_141855BE8);
                          }
                          v723 = _mm_loadu_si128((const __m128i *)v1391);
                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *(__m128i *)v1394.m256i_i8 = v723;
                          v1357 = 0;
                          sub_1401A27E0(v1391, &v1323, &v1382, &v1394);
                          if ( v1391[0] != 0xFF )
                            sub_1401FF690(v1391);
                          nullsub_1(v725, v724, v726, v727, v1224);
                          v728 = (void *)sub_140001650(13, 1);
                          if ( !v728 )
                            sub_14176E54B(1, 13);
                          qmemcpy(v728, "budget_tokens", 13);
                          v1382.m256i_i64[0] = 13;
                          v1382.m256i_i64[1] = (__int64)v728;
                          v1382.m256i_i64[2] = 13;
                          v1391[0] = 2;
                          *(_QWORD *)&v1391[8] = 0;
                          *(_QWORD *)&v1391[16] = v719;
                          sub_1401A27E0(&v1394, &v1323, &v1382, v1391);
                          if ( v1394.m256i_i8[0] != -1 )
                            sub_1401FF690(&v1394);
                          *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
                          *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
                          v1391[0] = 5;
                          v1303 = 1;
                          v1402 = sub_1414D4900(aThinking_1, 8, &v1274);
                          sub_1401FF690(v1402);
                          v729 = _mm_loadu_si128((const __m128i *)v1391);
                          v730 = (_OWORD *)v1402;
                          *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                          *v730 = v729;
                          v1403 = 1;
                          sub_1405D62A0(v1391, v1386, v1321);
                          LOBYTE(v661) = 1;
                          if ( v1391[20] != 2 && *(_QWORD *)&v1391[8] && v6 )
                          {
                            v1387.m256i_i64[0] = v6;
                            v1387.m256i_i64[1] = v639;
                            v1323.m256i_i64[0] = 0;
                            v1323.m256i_i64[2] = 0;
                            nullsub_1(v685, v684, v686, v731, v1221);
                            v732 = sub_140001650(6, 1);
                            if ( !v732 )
                              sub_14176E54B(1, 6);
                            *(_WORD *)(v732 + 4) = 29810;
                            *(_DWORD *)v732 = 1868981861;
                            v1382.m256i_i64[0] = 6;
                            v1382.m256i_i64[1] = v732;
                            v1382.m256i_i64[2] = 6;
                            v1356 = 1;
                            sub_1404A1EA0(v1391, &v1387);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_141855C00);
                            }
                            v733 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v733;
                            v1356 = 0;
                            sub_1401A27E0(v1391, &v1323, &v1382, &v1394);
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1323);
                            *(_QWORD *)&v1391[24] = v1323.m256i_i64[2];
                            v1391[0] = 5;
                            v1302 = 1;
                            v1402 = sub_1414D4900(aOutputConfig, 13, &v1274);
                            sub_1401FF690(v1402);
                            v734 = _mm_loadu_si128((const __m128i *)v1391);
                            v735 = (_OWORD *)v1402;
                            *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *v735 = v734;
                          }
LABEL_796:
                          v1403 = 1;
                          v750 = sub_1415181D0(v685, v684, v686);
                          if ( *(_BYTE *)(v750 + 16) == 1 )
                          {
                            v751 = *(_QWORD *)v750;
                            v752 = *(_QWORD *)(v750 + 8);
                          }
                          else
                          {
                            v1403 = 1;
                            v1039 = v750;
                            v751 = sub_14152E890();
                            v750 = v1039;
                            *(_QWORD *)v1039 = v751;
                            *(_QWORD *)(v1039 + 8) = v752;
                            *(_BYTE *)(v1039 + 16) = 1;
                          }
                          *(_QWORD *)v750 = v751 + 1;
                          v753 = _mm_loadu_si128((const __m128i *)&xmmword_141850580);
                          *(__m128i *)&v1323.m256i_u64[2] = v753;
                          v754 = _mm_loadu_si128((const __m128i *)&off_141850570);
                          *(__m128i *)v1323.m256i_i8 = v754;
                          v1324.m128i_i64[0] = v751;
                          v1324.m128i_i64[1] = v752;
                          v1353 = 1;
                          v755 = (_BYTE *)sub_1414D4800(aTools_3, 5, v1337);
                          if ( v755 && *v755 == 4 )
                          {
                            v1353 = 1;
                            sub_140465C50(v1391, v755 + 8);
                            v1259 = *(__m128i **)&v1391[16];
                            v1258 = _mm_loadu_si128((const __m128i *)v1391);
                          }
                          else
                          {
                            v1258.m128i_i64[0] = 0;
                            v1258.m128i_i64[1] = 8;
                            v1259 = nullptr;
                          }
                          v756 = sub_1414D4800(aInput_3, 5, v1337);
                          if ( v756 )
                            sub_140A2C080(v756, &v1258);
                          v760 = v1259;
                          if ( v1259 )
                          {
                            v761 = v1258.m128i_i64[1];
                            v1264.m128i_i64[0] = 0;
                            v1264.m128i_i64[1] = 8;
                            v1265 = 0;
                            v1330 = 1;
                            v762 = sub_1415181D0(v758, v757, v759);
                            if ( *(_BYTE *)(v762 + 16) == 1 )
                            {
                              v763 = *(_QWORD *)v762;
                              v764 = *(_QWORD *)(v762 + 8);
                            }
                            else
                            {
                              v1330 = 1;
                              v1040 = v762;
                              v763 = sub_14152E890();
                              v762 = v1040;
                              *(_QWORD *)v1040 = v763;
                              *(_QWORD *)(v1040 + 8) = v764;
                              *(_BYTE *)(v1040 + 16) = 1;
                            }
                            *(_QWORD *)v762 = v763 + 1;
                            *(__m128i *)&v1382.m256i_u64[2] = v753;
                            *(__m128i *)v1382.m256i_i8 = v754;
                            *(_QWORD *)&v1383 = v763;
                            *((_QWORD *)&v1383 + 1) = v764;
                            v1326 = 1;
                            v765 = sub_1415181D0(v763, v764, v763 + 1);
                            if ( *(_BYTE *)(v765 + 16) == 1 )
                            {
                              v766 = *(_QWORD *)v765;
                              v767 = *(_QWORD *)(v765 + 8);
                            }
                            else
                            {
                              v1326 = 1;
                              v1041 = v765;
                              v766 = sub_14152E890();
                              v765 = v1041;
                              *(_QWORD *)v1041 = v766;
                              *(_QWORD *)(v1041 + 8) = v767;
                              *(_BYTE *)(v1041 + 16) = 1;
                            }
                            v1389 = v661;
                            v768 = (const __m128i *)(v766 + 1);
                            *(_QWORD *)v765 = v766 + 1;
                            *(__m128i *)&v1394.m256i_u64[2] = v753;
                            *(__m128i *)v1394.m256i_i8 = v754;
                            v1395.m128i_i64[0] = v766;
                            v1395.m128i_i64[1] = v767;
                            v769 = v761 + 32LL * (_QWORD)v760;
                            v770 = v761;
LABEL_810:
                            while ( v770 != v769 )
                            {
                              v771 = v770;
                              v1400 = 1;
                              v772 = sub_1414D4800(aType_8, 4, v770);
                              v770 += 32;
                              if ( v772 )
                              {
                                if ( *(_BYTE *)v772 == 3 && *(_QWORD *)(v772 + 24) == 9 )
                                {
                                  v773 = *(_QWORD *)(v772 + 16);
                                  v767 = 0x63617073656D616ELL;
                                  v766 = *(_QWORD *)v773 ^ 0x63617073656D616ELL;
                                  if ( !(v766 | *(unsigned __int8 *)(v773 + 8) ^ 0x65LL) )
                                  {
                                    v1400 = 1;
                                    v774 = sub_1414D4800(aTools_3, 5, v771);
                                    if ( v774 )
                                    {
                                      if ( *(_BYTE *)v774 == 4 )
                                      {
                                        v775 = *(_QWORD *)(v774 + 16);
                                        v776 = v775 + 32LL * *(_QWORD *)(v774 + 24);
                                        while ( 1 )
                                        {
                                          do
                                          {
                                            if ( v775 == v776 )
                                              goto LABEL_810;
                                            v1400 = 1;
                                            v777 = sub_1414D4800(aName_7, 4, v775);
                                            v775 += 32;
                                          }
                                          while ( !v777 || *(_BYTE *)v777 != 3 );
                                          v779 = *(_QWORD *)(v777 + 24);
                                          if ( v779 < 0 )
                                            break;
                                          if ( v779 )
                                          {
                                            v1402 = *(_QWORD *)(v777 + 16);
                                            v1398 = (__m128i *)v779;
                                            nullsub_1(v779, v767, v768, v778, v1221);
                                            v780 = (const __m128i *)sub_140001650(v1398, 1);
                                            if ( !v780 )
                                            {
                                              v1402 = (__int64)v1398;
                                              v1019 = 1;
LABEL_1119:
                                              v1400 = 1;
                                              sub_14176E54B(v1019, v1402);
                                            }
                                            v781 = v1402;
                                            v1402 = (__int64)v780;
                                            sub_14172B820(v780, v781, v1398);
                                            v782 = v1402;
                                            v779 = (__int64)v1398;
                                          }
                                          else
                                          {
                                            v782 = 1;
                                          }
                                          v1387.m256i_i64[0] = v779;
                                          v1402 = v782;
                                          v1387.m256i_i64[1] = v782;
                                          v1387.m256i_i64[2] = v779;
                                          v1400 = 1;
                                          sub_140432880(v1391, &v1394, &v1387);
                                          v783 = *(const __m128i **)&v1391[8];
                                          v766 = *(_QWORD *)v1391;
                                          if ( *(_QWORD *)v1391 != -1 )
                                          {
                                            v1282 = *(_WORD **)&v1391[8];
                                            *(_QWORD *)v1334 = *(_QWORD *)v1391;
                                            v768 = **(const __m128i ***)&v1391[24];
                                            v1398 = *(__m128i **)&v1391[24];
                                            v784 = *(_QWORD *)(*(_QWORD *)&v1391[24] + 8LL);
                                            v785 = *(_QWORD *)&v1391[32] & v784;
                                            _RCX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v768 + (*(_QWORD *)&v1391[32] & v784))));
                                            if ( !(_DWORD)_RCX )
                                            {
                                              v791 = 16;
                                              do
                                              {
                                                v785 = v784 & (v791 + v785);
                                                _RCX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v768 + v785)));
                                                v791 += 16;
                                              }
                                              while ( !(_DWORD)_RCX );
                                            }
                                            __asm { tzcnt   ecx, ecx }
                                            _RCX = v784 & (v785 + _RCX);
                                            v788 = v768->m128i_i8[_RCX];
                                            if ( v788 >= 0 )
                                            {
                                              _RCX = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v768));
                                              __asm { tzcnt   ecx, ecx }
                                              v788 = v768->m128i_i8[_RCX];
                                            }
                                            v789 = *(_QWORD *)&v1391[16];
                                            v790 = *(_QWORD *)&v1391[32] >> 57;
                                            v768->m128i_i8[_RCX] = *(_QWORD *)&v1391[32] >> 57;
                                            v768[1].m128i_i8[v784 & (_RCX - 16)] = v790;
                                            v783 = &v768[-2 * _RCX];
                                            v783[-2].m128i_i64[0] = *(_QWORD *)v1334;
                                            v783[-2].m128i_i64[1] = (__int64)v1282;
                                            v783[-1].m128i_i64[0] = v789;
                                            v783[-1].m128i_i64[1] = 0;
                                            v767 = (__int64)v1398;
                                            v766 = v788 & 1;
                                            v1398[1] = _mm_sub_epi64(
                                                         _mm_loadu_si128(v1398 + 1),
                                                         (__m128i)_mm_shuffle_ps(
                                                                    (__m128)_mm_cvtsi32_si128(v766),
                                                                    (__m128)xmmword_141801A20,
                                                                    228));
                                          }
                                          ++v783[-1].m128i_i64[1];
                                        }
                                        v1019 = 0;
                                        goto LABEL_1119;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            v792 = _mm_load_si128((const __m128i *)&xmmword_141803650);
                            v793 = _mm_cvtsi32_si128(0x7765u);
                            LODWORD(v1282) = 0;
LABEL_837:
                            v796 = v761;
                            while ( v796 != v769 )
                            {
                              v1400 = 1;
                              v797 = sub_1414D4800(aType_8, 4, v796);
                              v761 = v796 + 32;
                              if ( !v797 || *(_BYTE *)v797 != 3 )
                                goto LABEL_852;
                              v798 = *(_QWORD *)(v797 + 16);
                              v799 = *(_QWORD *)(v797 + 24);
                              if ( v799 == 18 )
                              {
                                if ( _mm_movemask_epi8(
                                       _mm_and_si128(
                                         _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v798 + 16)), v793),
                                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v798), v792))) == 0xFFFF )
                                  goto LABEL_855;
LABEL_850:
                                v800 = *(_QWORD *)v798 ^ 0x726165735F626577LL;
                                v801 = *(_QWORD *)(v798 + 3) ^ 0x5F6863726165735FLL;
LABEL_851:
                                if ( !(v800 | v801) )
                                {
LABEL_855:
                                  v1400 = 1;
                                  sub_140A2E7E0(&v1241, v796);
                                  if ( v1241.m128i_i8[0] != -1 )
                                  {
                                    v803 = v1265;
                                    if ( v1265 == v1264.m128i_i64[0] )
                                      sub_14172C8D0(&v1264);
                                    v804 = v1264.m128i_i64[1];
                                    v766 = 32 * v803;
                                    v805 = _mm_loadu_si128(&v1241);
                                    *(__m128i *)(v1264.m128i_i64[1] + v766 + 16) = _mm_loadu_si128(&v1242);
                                    *(__m128i *)(v804 + v766) = v805;
                                    v1265 = v803 + 1;
                                    LOBYTE(v804) = 1;
                                    LODWORD(v1282) = v804;
                                  }
                                  goto LABEL_837;
                                }
                                goto LABEL_852;
                              }
                              if ( v799 == 10 )
                              {
                                v800 = *(_QWORD *)v798 ^ 0x726165735F626577LL;
                                v801 = *(unsigned __int16 *)(v798 + 8) ^ 0x6863LL;
                                goto LABEL_851;
                              }
                              if ( v799 > 0xA )
                                goto LABEL_850;
                              if ( v799 == 9
                                && !(*(_QWORD *)v798 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v798 + 8) ^ 0x65LL) )
                              {
                                v1400 = 1;
                                v806 = sub_1414D4800(aName_7, 4, v796);
                                v807 = 1;
                                if ( v806 && *(_BYTE *)v806 == 3 )
                                {
                                  v807 = *(_QWORD *)(v806 + 16);
                                  v808 = *(_QWORD *)(v806 + 24);
                                }
                                else
                                {
                                  v808 = 0;
                                }
                                v1249 = v807;
                                v1250 = v808;
                                v1400 = 1;
                                v809 = sub_1414D4800(aTools_3, 5, v796);
                                if ( !v809 || *(_BYTE *)v809 != 4 )
                                  goto LABEL_837;
                                v810 = v1250;
                                if ( v1250 >= 2 )
                                {
                                  if ( *(_WORD *)(v1249 + v1250 - 2) != 24415 )
                                    goto LABEL_869;
                                  *(_QWORD *)v1334 = v1249;
                                  v1398 = (__m128i *)v809;
                                  sub_14019C7D0((unsigned int)v1391, v1250, 0, 1, 1);
                                  v1402 = *(_QWORD *)&v1391[8];
                                  if ( v1391[0] )
                                  {
                                    v1400 = 1;
                                    sub_14176E54B(v1402, *(_QWORD *)&v1391[16]);
                                  }
                                  v1384 = *(_QWORD *)&v1391[16];
                                  sub_14172B820(*(_QWORD *)&v1391[16], *(_QWORD *)v1334, v810);
                                  v1319.m128i_i64[0] = v1402;
                                  v1319.m128i_i64[1] = v1384;
                                  v1320 = v810;
                                  v809 = (__int64)v1398;
                                }
                                else
                                {
                                  if ( !v1250 )
                                  {
                                    v1319.m128i_i64[0] = 0;
                                    v1319.m128i_i64[1] = 1;
                                    v1320 = 0;
                                    goto LABEL_872;
                                  }
LABEL_869:
                                  v1387.m256i_i64[0] = (__int64)&v1249;
                                  v1387.m256i_i64[1] = (__int64)sub_1402DDC10;
                                  v1400 = 1;
                                  v811 = v809;
                                  sub_141543AF0(v1391, &unk_141855427, &v1387);
                                  v809 = v811;
                                  v1319 = _mm_loadu_si128((const __m128i *)v1391);
                                  v1320 = *(_QWORD *)&v1391[16];
                                }
LABEL_872:
                                v766 = *(_QWORD *)(v809 + 16);
                                v1402 = v766 + 32LL * *(_QWORD *)(v809 + 24);
                                do
                                {
LABEL_873:
                                  if ( v766 == v1402 )
                                  {
                                    v767 = v1319.m128i_i64[0];
                                    if ( v1319.m128i_i64[0] )
                                      sub_140001660(v1319.m128i_i64[1], v1319.m128i_i64[0], 1);
                                    goto LABEL_837;
                                  }
                                  v812 = v766;
                                  v813 = sub_1414D4800(aName_7, 4, v766);
                                  v766 = v812 + 32;
                                }
                                while ( !v813 || *(_BYTE *)v813 != 3 );
                                v1384 = v812 + 32;
                                v815 = *(_QWORD *)(v813 + 16);
                                v816 = *(_QWORD *)(v813 + 24);
                                v1255 = __PAIR128__(v816, v815);
                                v817 = v1320;
                                if ( v1320
                                  && (v816 < v1320
                                   || (v1398 = (__m128i *)v816,
                                       *(_QWORD *)v1334 = v815,
                                       v818 = sub_14172BEB0(v1319.m128i_i64[1], v815, v1320),
                                       v815 = *(_QWORD *)v1334,
                                       v816 = (__int64)v1398,
                                       v818)) )
                                {
                                  *(_QWORD *)v1391 = &v1319;
                                  *(_QWORD *)&v1391[8] = sub_1400015F0;
                                  *(_QWORD *)&v1391[16] = &v1255;
                                  *(_QWORD *)&v1391[24] = sub_1402DDC10;
                                  sub_141543AF0(&v1387, &unk_1418512F7, v1391);
                                  v1278 = _mm_loadu_si128((const __m128i *)&v1387);
                                  v820 = v1387.m256i_i64[2];
                                }
                                else
                                {
                                  if ( v816 < 0 )
                                  {
                                    v1020 = 0;
                                    goto LABEL_1121;
                                  }
                                  *(_QWORD *)v1334 = v815;
                                  v1398 = (__m128i *)v816;
                                  if ( v816 )
                                  {
                                    nullsub_1(v816, v815, v817, v814, v1221);
                                    v821 = sub_140001650(v1398, 1);
                                    if ( !v821 )
                                    {
                                      v1318 = (__int64)v1398;
                                      v1020 = 1;
LABEL_1121:
                                      sub_14176E54B(v1020, v1318);
                                    }
                                    v1318 = v821;
                                    sub_14172B820(v821, *(_QWORD *)v1334, v1398);
                                  }
                                  else
                                  {
                                    v1318 = 1;
                                  }
                                  v820 = (__int64)v1398;
                                  v1278.m128i_i64[0] = (__int64)v1398;
                                  v819 = v1318;
                                  v1278.m128i_i64[1] = v1318;
                                }
                                v1279 = v820;
                                v822 = *((__m128i **)&v1255 + 1);
                                v823 = v1255;
                                v1398 = (__m128i *)(v823 >> 64);
                                *(_QWORD *)v1334 = v823;
                                if ( !v1394.m256i_i64[3] )
                                  goto LABEL_896;
                                v824 = sub_1404C46C0(&v1395, *(_QWORD *)v1334, *((_QWORD *)&v1255 + 1));
                                v825 = v1394.m256i_i64[1];
                                v815 = v1394.m256i_i64[0];
                                v826 = _mm_cvtsi32_si128(v824 >> 57);
                                v827 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v826, v826), 0), 68);
                                for ( k = 0; ; k += 16 )
                                {
                                  v828 = v825 & v824;
                                  v829 = _mm_loadu_si128((const __m128i *)(v815 + v828));
                                  _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v829, v827));
                                  if ( (_DWORD)_RCX )
                                    break;
LABEL_893:
                                  v819 = v828;
                                  v822 = v1398;
                                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v829, (__m128i)-1LL)) )
                                    goto LABEL_896;
                                  v824 = k + v828 + 16;
                                }
                                v1281 = v828;
                                v1267 = v815;
                                v1263 = v825;
                                while ( 1 )
                                {
                                  v1268 = _RCX;
                                  __asm { tzcnt   ecx, ecx }
                                  v831 = v815 - 32 * (v825 & (v828 + _RCX));
                                  if ( v1398 == *(__m128i **)(v831 - 16) )
                                  {
                                    v832 = *(_QWORD *)(v831 - 24);
                                    v1377 = v831;
                                    v833 = sub_14172BEB0(*(_QWORD *)v1334, v832, v1398);
                                    v822 = v1398;
                                    if ( !v833 )
                                      break;
                                  }
                                  v834 = v1268 - 1;
                                  LOWORD(v834) = v1268 & (v1268 - 1);
                                  _RCX = v834;
                                  v828 = v1281;
                                  v815 = v1267;
                                  v825 = v1263;
                                  if ( ((unsigned __int16)v1268 & (unsigned __int16)(v1268 - 1)) == 0 )
                                    goto LABEL_893;
                                }
                                if ( *(_QWORD *)(v1377 - 8) < 2u )
                                {
LABEL_896:
                                  v835 = v1320;
                                  if ( v1320 )
                                  {
                                    if ( (unsigned __int64)v822 < v1320 )
                                    {
                                      if ( !v1398 )
                                      {
                                        v1377 = 1;
                                        goto LABEL_903;
                                      }
LABEL_901:
                                      nullsub_1(v819, v815, v835, v822, v1221);
                                      v836 = sub_140001650(v1398, 1);
                                      if ( !v836 )
                                      {
                                        v1328 = 1;
                                        sub_14176E54B(1, v1398);
                                      }
                                      v1377 = v836;
                                      sub_14172B820(v836, *(_QWORD *)v1334, v1398);
LABEL_903:
                                      v837 = v1398;
                                      *(_QWORD *)v1280 = v1398;
                                      *(_QWORD *)&v1280[8] = v1377;
                                      *(_QWORD *)&v1280[16] = v1398;
LABEL_905:
                                      v1398 = v837;
                                      if ( v837 == (__m128i *)v1279
                                        && (*(_QWORD *)v1334 = *(_QWORD *)&v1280[8],
                                            !(unsigned int)sub_14172BEB0(
                                                             *(_QWORD *)&v1280[8],
                                                             v1278.m128i_i64[1],
                                                             v1398)) )
                                      {
                                        v840 = 1;
                                        v838 = v1398;
                                        v839 = *(_QWORD *)v1334;
                                      }
                                      else
                                      {
                                        v1327 = 1;
                                        sub_141543F00(&v1387, v1280);
                                        *(_QWORD *)&v1391[16] = v1279;
                                        *(__m128i *)v1391 = _mm_load_si128(&v1278);
                                        v1327 = 0;
                                        sub_14043A9A0(&v1334[8], &v1382, &v1387, v1391);
                                        if ( *(_QWORD *)&v1334[8] == -1 )
                                        {
                                          v838 = v1398;
                                        }
                                        else
                                        {
                                          v838 = v1398;
                                          if ( *(_QWORD *)&v1334[8] )
                                          {
                                            sub_140001660(*(_QWORD *)&v1334[16], *(_QWORD *)&v1334[8], 1);
                                            v838 = *(__m128i **)&v1280[16];
                                          }
                                        }
                                        v839 = *(_QWORD *)&v1280[8];
                                        v840 = 0;
                                      }
                                      LODWORD(v1398) = v840;
                                      v1327 = v840;
                                      *(_QWORD *)v1334 = v839;
                                      sub_140A271C0(&v1239, v812, v839, v838);
                                      if ( v1239.m128i_i8[0] != -1 )
                                      {
                                        v841 = v1265;
                                        if ( v1265 == v1264.m128i_i64[0] )
                                          sub_14172C8D0(&v1264);
                                        v842 = v1264.m128i_i64[1];
                                        v843 = 32 * v841;
                                        v844 = _mm_loadu_si128(&v1239);
                                        *(__m128i *)(v1264.m128i_i64[1] + v843 + 16) = _mm_loadu_si128(&v1240);
                                        *(__m128i *)(v842 + v843) = v844;
                                        v1265 = v841 + 1;
                                      }
                                      if ( *(_QWORD *)v1280 )
                                        sub_140001660(*(_QWORD *)v1334, *(_QWORD *)v1280, 1);
                                      if ( (_BYTE)v1398 && v1278.m128i_i64[0] )
                                      {
                                        sub_140001660(v1278.m128i_i64[1], v1278.m128i_i64[0], 1);
                                        v766 = v1384;
                                      }
                                      else
                                      {
                                        v766 = v1384;
                                      }
                                      goto LABEL_873;
                                    }
                                    if ( (unsigned int)sub_14172BEB0(v1319.m128i_i64[1], *(_QWORD *)v1334, v1320) )
                                      goto LABEL_901;
                                  }
                                }
                                v1328 = 1;
                                sub_141543F00(v1280, &v1278);
                                v837 = *(__m128i **)&v1280[16];
                                goto LABEL_905;
                              }
LABEL_852:
                              v1400 = 1;
                              sub_140A2E7E0(&v1237, v796);
                              v796 += 32;
                              if ( v1237.m128i_i8[0] != -1 )
                              {
                                v802 = v1265;
                                if ( v1265 == v1264.m128i_i64[0] )
                                  sub_14172C8D0(&v1264);
                                v794 = v1264.m128i_i64[1];
                                v766 = 32 * v802;
                                v795 = _mm_loadu_si128(&v1237);
                                *(__m128i *)(v1264.m128i_i64[1] + v766 + 16) = _mm_loadu_si128(&v1238);
                                *(__m128i *)(v794 + v766) = v795;
                                v1265 = v802 + 1;
                                goto LABEL_837;
                              }
                            }
                            v1256 = v1265;
                            v1255 = (unsigned __int128)_mm_loadu_si128(&v1264);
                            v1329 = 1;
                            v845 = sub_1415181D0(v766, v767, v768);
                            if ( *(_BYTE *)(v845 + 16) == 1 )
                            {
                              v847 = *(_QWORD *)v845;
                              v848 = *(_QWORD *)(v845 + 8);
                            }
                            else
                            {
                              v1329 = 1;
                              v1042 = v845;
                              v847 = sub_14152E890();
                              v845 = v1042;
                              *(_QWORD *)v1042 = v847;
                              *(_QWORD *)(v1042 + 8) = v848;
                              *(_BYTE *)(v1042 + 16) = 1;
                            }
                            *(_QWORD *)v845 = v847 + 1;
                            *(__m128i *)&v1391[16] = v753;
                            *(__m128i *)v1391 = v754;
                            *(_QWORD *)&v1391[32] = v847;
                            *(_QWORD *)&v1391[40] = v848;
                            v849 = v1256;
                            v850 = 32 * v1256;
                            if ( v1256 )
                            {
                              nullsub_1(v847, v848, v847 + 1, v846, v1221);
                              v851 = sub_140001650(v850, 8);
                              if ( !v851 )
                              {
                                v1294 = 1;
                                sub_14176E54B(8, v850);
                              }
                            }
                            else
                            {
                              v851 = 8;
                            }
                            v1319.m128i_i64[0] = v849;
                            v1319.m128i_i64[1] = v851;
                            v1320 = 0;
                            v6 = *((_QWORD *)&v1255 + 1) + v850;
                            *(_QWORD *)&v1334[16] = *((_QWORD *)&v1255 + 1);
                            *(_OWORD *)v1334 = v1255;
                            v1335 = v1255;
                            v1336 = v6;
                            v1384 = *((_QWORD *)&v1255 + 1);
                            v863 = *((_QWORD *)&v1255 + 1);
                            v864 = v6;
                            if ( *((_QWORD *)&v1255 + 1) != v6 )
                            {
                              while ( 1 )
                              {
                                v865 = v863 + 32;
                                *(_QWORD *)&v1334[16] = v863 + 32;
                                v866 = *(_BYTE *)v863;
                                *(_OWORD *)&v1280[15] = *(_OWORD *)(v863 + 16);
                                *(_OWORD *)v1280 = *(_OWORD *)(v863 + 1);
                                if ( v866 == -1 )
                                {
LABEL_978:
                                  v893 = v865;
                                  goto LABEL_979;
                                }
                                v1387.m256i_i8[0] = v866;
                                *(_OWORD *)&v1387.m256i_u64[2] = *(_OWORD *)&v1280[15];
                                *(__m128i *)&v1387.m256i_i8[1] = _mm_load_si128((const __m128i *)v1280);
                                v1352 = 1;
                                v867 = sub_1414D4800(aName_7, 4, &v1387);
                                if ( !v867 || *(_BYTE *)v867 != 3 )
                                  break;
                                v871 = *(_QWORD *)(v867 + 24);
                                if ( v871 < 0 )
                                {
                                  v879 = 0;
                                  goto LABEL_959;
                                }
                                v1398 = *(__m128i **)(v867 + 24);
                                if ( !v871 )
                                  break;
                                v872 = *(_QWORD *)(v867 + 16);
                                nullsub_1(v871, v868, v869, v870, v1221);
                                v1402 = sub_140001650(v1398, 1);
                                if ( !v1402 )
                                {
                                  v1402 = (__int64)v1398;
                                  v879 = 1;
LABEL_959:
                                  v1352 = 1;
                                  sub_14176E54B(v879, v1402);
                                }
                                v873 = v872;
                                v874 = (__int64)v1398;
                                sub_14172B820(v1402, v873, v1398);
                                v1278.m128i_i64[0] = v874;
                                v1278.m128i_i64[1] = v1402;
                                v1279 = v874;
                                v1381 = 0;
                                v1261 = v1402;
                                v1260 = v874;
                                v1380 = 1;
                                if ( !(unsigned __int8)sub_14043E640(v1391, &v1278) )
                                {
                                  v875 = v1320;
                                  if ( v1320 == v1319.m128i_i64[0] )
LABEL_952:
                                    sub_14172C8D0(&v1319);
LABEL_953:
                                  v876 = v1319.m128i_i64[1];
                                  v877 = 32 * v875;
                                  v878 = _mm_loadu_si128((const __m128i *)&v1387);
                                  *(__m128i *)(v1319.m128i_i64[1] + v877 + 16) = _mm_loadu_si128((const __m128i *)&v1387.m256i_u64[2]);
                                  *(__m128i *)(v876 + v877) = v878;
                                  v1320 = v875 + 1;
                                  goto LABEL_954;
                                }
                                sub_1401FF690(&v1387);
LABEL_954:
                                v863 = v865;
                                v6 = v864;
                                if ( v865 == v864 )
                                  goto LABEL_977;
                              }
                              v875 = v1320;
                              v1402 = 1;
                              if ( v1320 == v1319.m128i_i64[0] )
                                goto LABEL_952;
                              goto LABEL_953;
                            }
LABEL_977:
                            v893 = v6;
LABEL_979:
                            v6 = (unsigned __int64)(v6 - v893) >> 5;
                            v1398 = (__m128i *)v6;
                            v1402 = 0;
                            v1318 = v893;
                            v661 = v1389;
                            while ( v1398 != (__m128i *)v1402 )
                            {
                              ++v1402;
                              v894 = v893 + 32;
                              ((void (*)(void))sub_1403FF680)();
                              v893 = v894;
                            }
                            if ( *(_QWORD *)v1334 )
                              sub_140001660(v1384, 32LL * *(_QWORD *)v1334, 8);
                            *(__m128i *)v1387.m256i_i8 = _mm_loadu_si128(&v1319);
                            HIDWORD(_RAX) = HIDWORD(v1320);
                            v1387.m256i_i64[2] = v1320;
                            v896 = *(_QWORD *)&v1391[8];
                            if ( *(_QWORD *)&v1391[8] )
                            {
                              v897 = *(_QWORD *)&v1391[24];
                              if ( *(_QWORD *)&v1391[24] )
                              {
                                v898 = *(_QWORD *)v1391;
                                v899 = (const __m128i *)(*(_QWORD *)v1391 + 16LL);
                                _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v1391));
                                do
                                {
                                  if ( !(_WORD)_R15D )
                                  {
                                    do
                                    {
                                      v901 = _mm_load_si128(v899);
                                      v898 -= 384;
                                      ++v899;
                                      _R15D = _mm_movemask_epi8(v901) ^ 0xFFFF;
                                    }
                                    while ( !_R15D );
                                  }
                                  __asm { tzcnt   eax, r15d }
                                  v902 = -3 * _RAX;
                                  v903 = *(_QWORD *)(v898 + 8 * v902 - 24);
                                  if ( v903 )
                                    sub_140001660(*(_QWORD *)(v898 + 8 * v902 - 16), v903, 1);
                                  --v897;
                                  _RAX = _R15D & (unsigned int)(_R15D - 1);
                                  _R15D &= _R15D - 1;
                                }
                                while ( v897 );
                              }
                              v904 = (24 * v896 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                              v905 = v904 + v896 + 17;
                              if ( v905 )
                                sub_140001660(*(_QWORD *)v1391 - v904, v905, 16);
                            }
                            *(__m256i *)&v1391[24] = v1382;
                            *(_OWORD *)&v1391[56] = v1383;
                            *(__m128i *)v1391 = _mm_load_si128((const __m128i *)&v1387);
                            *(_QWORD *)&v1391[16] = v1387.m256i_i64[2];
                            v906 = v1394.m256i_i64[1];
                            if ( v1394.m256i_i64[1] )
                            {
                              v907 = v1394.m256i_i64[3];
                              if ( v1394.m256i_i64[3] )
                              {
                                v908 = v1394.m256i_i64[0];
                                v909 = (const __m128i *)(v1394.m256i_i64[0] + 16);
                                _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v1394.m256i_i64[0]));
                                do
                                {
                                  if ( !(_WORD)_R12D )
                                  {
                                    do
                                    {
                                      v911 = _mm_load_si128(v909);
                                      v908 -= 512;
                                      ++v909;
                                      _R12D = _mm_movemask_epi8(v911) ^ 0xFFFF;
                                    }
                                    while ( !_R12D );
                                  }
                                  __asm { tzcnt   ecx, r12d }
                                  v913 = v908 - (unsigned int)(32 * _ECX);
                                  v914 = *(_QWORD *)(v913 - 32);
                                  if ( v914 )
                                    sub_140001660(*(_QWORD *)(v913 - 24), v914, 1);
                                  --v907;
                                  _R12D &= _R12D - 1;
                                }
                                while ( v907 );
                              }
                              v915 = 32 * v906;
                              v916 = 33 * v906;
                              v617 = v916 == -49;
                              v917 = v916 + 49;
                              v661 = v1389;
                              if ( !v617 )
                                sub_140001660(v1394.m256i_i64[0] - v915 - 32, v917, 16);
                            }
                            v1382.m256i_i64[2] = *(_QWORD *)&v1391[16];
                            *(_OWORD *)v1382.m256i_i8 = *(_OWORD *)v1391;
                            v1395 = *(__m128i *)&v1391[56];
                            v1394 = *(__m256i *)&v1391[24];
                            sub_14051F720(&v1323);
                            v918 = _mm_load_si128((const __m128i *)&v1394);
                            v919 = _mm_load_si128((const __m128i *)&v1394.m256i_u64[2]);
                            v1324 = _mm_load_si128(&v1395);
                            *(__m128i *)&v1323.m256i_u64[2] = v919;
                            *(__m128i *)v1323.m256i_i8 = v918;
                            v852 = (int)v1282;
                            if ( v1382.m256i_i64[2] )
                            {
                              *(_QWORD *)&v1391[24] = v1382.m256i_i64[2];
                              *(__m128i *)&v1391[8] = _mm_load_si128((const __m128i *)&v1382);
                              v1391[0] = 4;
                              v1293 = 1;
                              v1402 = sub_1414D4900(aTools_3, 5, &v1274);
                              sub_1401FF690(v1402);
                              v920 = _mm_loadu_si128((const __m128i *)v1391);
                              v921 = (_OWORD *)v1402;
                              *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *v921 = v920;
                            }
                            else if ( v1382.m256i_i64[0] )
                            {
                              sub_140001660(v1382.m256i_i64[1], 32 * v1382.m256i_i64[0], 8);
                            }
                          }
                          else
                          {
                            v852 = 0;
                          }
                          v853 = (unsigned __int8 *)sub_1414D4800(aToolChoice_0, 11, v1337);
                          v857 = v853;
                          if ( !v853 )
                            goto LABEL_1041;
                          v858 = *v853;
                          if ( v858 != 5 )
                          {
                            if ( v858 != 3 )
                              goto LABEL_1041;
                            v859 = *((_QWORD **)v857 + 2);
                            v860 = *((_QWORD *)v857 + 3);
                            if ( v860 != 4 )
                            {
                              if ( v860 == 8 && *v859 == 0x6465726975716572LL )
                              {
                                v1387.m256i_i64[0] = 0;
                                v1387.m256i_i64[2] = 0;
                                nullsub_1(0x6465726975716572LL, v854, v855, v856, v1221);
                                v861 = (_DWORD *)sub_140001650(4, 1);
                                if ( !v861 )
                                  sub_14176E54B(1, 4);
                                *v861 = 1701869940;
                                v1382.m256i_i64[0] = 4;
                                v1382.m256i_i64[1] = (__int64)v861;
                                v1382.m256i_i64[2] = 4;
                                v1350 = 1;
                                sub_1404A1EA0(v1391, &off_141855BA0);
                                if ( v1391[0] == 0xFF )
                                {
                                  v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                  sub_14176E860(
                                    (unsigned int)aCalledResultUn_15,
                                    43,
                                    (unsigned int)&v1394,
                                    (unsigned int)&off_141851870,
                                    (__int64)&off_1418560A8);
                                }
                                v862 = _mm_loadu_si128((const __m128i *)v1391);
                                *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                *(__m128i *)v1394.m256i_i8 = v862;
                                v1350 = 0;
                                sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                                if ( v1391[0] == 0xFF )
                                  goto LABEL_1039;
                                goto LABEL_1038;
                              }
LABEL_1041:
                              if ( (v852 & 1) != 0 )
                              {
                                v1382.m256i_i64[0] = (__int64)aYouHaveAWebSea_0;
                                v1382.m256i_i64[1] = 462;
                                v948 = (const __m128i *)sub_1414D4800(
                                                          "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润"
                                                          "色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdoubao"
                                                          "reasoning_effortnone",
                                                          6,
                                                          &v1274);
                                if ( v948 && v948->m128i_i8[0] == 3 )
                                {
                                  *(__m128i *)v1394.m256i_i8 = _mm_loadu_si128(v948 + 1);
                                  *(_QWORD *)v1391 = &v1394;
                                  *(_QWORD *)&v1391[8] = sub_1402DDC10;
                                  *(_QWORD *)&v1391[16] = &v1382;
                                  *(_QWORD *)&v1391[24] = sub_1402DDC10;
                                  sub_141543AF0(&v1243, &unk_14185651E, v1391);
                                }
                                else
                                {
                                  nullsub_1(v950, v949, v951, v952, v1221);
                                  v953 = sub_140001650(462, 1);
                                  if ( !v953 )
                                    sub_14176E54B(1, 462);
                                  v954 = v953;
                                  sub_14172B820(v953, aYouHaveAWebSea_0, 462);
                                  v1243 = 462;
                                  *(_QWORD *)&v1244 = v954;
                                  *((_QWORD *)&v1244 + 1) = 462;
                                }
                                *(_QWORD *)&v1391[8] = v1243;
                                *(_OWORD *)&v1391[16] = v1244;
                                v1391[0] = 3;
                                v1291 = 1;
                                v1402 = sub_1414D4900(
                                          "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结"
                                          "果，不要添加解释。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                          6,
                                          &v1274);
                                sub_1401FF690(v1402);
                                v955 = _mm_loadu_si128((const __m128i *)v1391);
                                v956 = (_OWORD *)v1402;
                                *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                *v956 = v955;
                              }
                              sub_140A410E0(&v1274);
                              v957 = sub_1414D4800(aTools_3, 5, &v1274);
                              if ( v957 )
                              {
                                if ( *(_BYTE *)v957 == 4 )
                                {
                                  if ( *(_QWORD *)(v957 + 24) )
                                  {
                                    v958 = (_BYTE *)sub_1414D4800(aParallelToolCa, 19, v1337);
                                    if ( v958 )
                                    {
                                      if ( *v958 == 1 && !v958[1] )
                                      {
                                        v959 = sub_1414D4800(aToolChoice_0, 11, &v1274);
                                        if ( !v959
                                          || (v960 = sub_1414D4800(aType_8, 4, v959)) == 0
                                          || *(_BYTE *)v960 != 3
                                          || *(_QWORD *)(v960 + 24) != 4
                                          || **(_DWORD **)(v960 + 16) != 1701736302 )
                                        {
                                          if ( !sub_1414D4800(aToolChoice_0, 11, &v1274) )
                                          {
                                            v1387.m256i_i64[0] = 0;
                                            v1387.m256i_i64[2] = 0;
                                            nullsub_1(v962, v961, v963, v964, v1221);
                                            v965 = (_DWORD *)sub_140001650(4, 1);
                                            if ( !v965 )
                                              sub_14176E54B(1, 4);
                                            *v965 = 1701869940;
                                            v1382.m256i_i64[0] = 4;
                                            v1382.m256i_i64[1] = (__int64)v965;
                                            v1382.m256i_i64[2] = 4;
                                            v1344 = 1;
                                            sub_1404A1EA0(v1391, &off_141855BB0);
                                            if ( v1391[0] == 0xFF )
                                            {
                                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                              sub_14176E860(
                                                (unsigned int)aCalledResultUn_15,
                                                43,
                                                (unsigned int)&v1394,
                                                (unsigned int)&off_141851870,
                                                (__int64)&off_141856138);
                                            }
                                            v966 = _mm_loadu_si128((const __m128i *)v1391);
                                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                            *(__m128i *)v1394.m256i_i8 = v966;
                                            v1344 = 0;
                                            sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                                            if ( v1391[0] != 0xFF )
                                              sub_1401FF690(v1391);
                                            *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1387);
                                            *(_QWORD *)&v1391[24] = v1387.m256i_i64[2];
                                            v1391[0] = 5;
                                            v1290 = 1;
                                            v1402 = sub_1414D4900(aToolChoice_0, 11, &v1274);
                                            sub_1401FF690(v1402);
                                            v967 = _mm_loadu_si128((const __m128i *)v1391);
                                            v968 = (_OWORD *)v1402;
                                            *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                            *v968 = v967;
                                          }
                                          v969 = (_BYTE *)sub_1414D4800(aToolChoice_0, 11, &v1274);
                                          v974 = v969;
                                          if ( v969 && *v969 == 5 )
                                          {
                                            nullsub_1(v971, v970, v972, v973, v1221);
                                            v975 = sub_140001650(25, 1);
                                            if ( !v975 )
                                              sub_14176E54B(1, 25);
                                            *(_OWORD *)(v975 + 9) = *(__int128 *)((char *)&xmmword_141856048 + 9);
                                            *(__m128i *)v975 = _mm_loadu_si128((const __m128i *)&xmmword_141856048);
                                            v1382.m256i_i64[0] = 25;
                                            v1382.m256i_i64[1] = v975;
                                            v1382.m256i_i64[2] = 25;
                                            *(_WORD *)v1391 = 257;
                                            sub_1401A27E0(&v1394, v974 + 8, &v1382, v1391);
                                            if ( v1394.m256i_i8[0] != -1 )
                                              sub_1401FF690(&v1394);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              v976 = sub_1414D4800(aToolChoice_0, 11, &v1274);
                              v977 = 1;
                              if ( v976 && (v978 = sub_1414D4800(aType_8, 4, v976)) != 0 )
                              {
                                v979 = v1321;
                                if ( *(_BYTE *)v978 == 3 )
                                {
                                  v977 = *(_QWORD *)(v978 + 16);
                                  v980 = *(_QWORD *)(v978 + 24);
                                }
                                else
                                {
                                  v980 = 0;
                                }
                              }
                              else
                              {
                                v980 = 0;
                                v979 = v1321;
                              }
                              v981 = sub_140A82F20(v977, v980);
                              v986 = v982;
                              if ( v982 < 0 )
                              {
                                v987 = 0;
                                goto LABEL_1078;
                              }
                              if ( !v982 )
                              {
                                if ( (_BYTE)v661 )
                                  goto LABEL_1324;
                                goto LABEL_1323;
                              }
                              v988 = v981;
                              nullsub_1(v983, v982, v984, v985, v1221);
                              v987 = 1;
                              v989 = sub_140001650(v986, 1);
                              if ( !v989 )
LABEL_1078:
                                sub_14176E54B(v987, v986);
                              v990 = (__m128i *)v989;
                              sub_14172B820(v989, v988, v986);
                              if ( v986 < 8 )
                              {
                                v991 = 0;
                                goto LABEL_1294;
                              }
                              if ( v986 >= 0x20 )
                              {
                                v991 = v986 & 0x7FFFFFFFFFFFFFE0LL;
                                v992 = 0;
                                v993 = _mm_load_si128((const __m128i *)&xmmword_1417EB690);
                                v994 = _mm_load_si128((const __m128i *)&xmmword_1417EB6A0);
                                v995 = _mm_load_si128((const __m128i *)&xmmword_1417EB6B0);
                                do
                                {
                                  v996 = _mm_loadu_si128(&v990[v992 / 0x10]);
                                  v997 = _mm_loadu_si128(&v990[v992 / 0x10 + 1]);
                                  v998 = _mm_add_epi8(v996, v993);
                                  v999 = _mm_add_epi8(v997, v993);
                                  v990[v992 / 0x10] = _mm_or_si128(
                                                        _mm_and_si128(
                                                          _mm_cmpeq_epi8(_mm_min_epu8(v998, v994), v998),
                                                          v995),
                                                        v996);
                                  v990[v992 / 0x10 + 1] = _mm_or_si128(
                                                            _mm_and_si128(
                                                              _mm_cmpeq_epi8(_mm_min_epu8(v999, v994), v999),
                                                              v995),
                                                            v997);
                                  v992 += 32LL;
                                }
                                while ( v991 != v992 );
                                if ( v986 == v991 )
                                  goto LABEL_1296;
                                if ( (v986 & 0x18) == 0 )
                                {
                                  do
                                  {
LABEL_1294:
                                    v990->m128i_i8[v991] |= 32 * ((unsigned __int8)(v990->m128i_i8[v991] - 65) < 0x1Au);
                                    ++v991;
LABEL_1295:
                                    ;
                                  }
                                  while ( v986 != v991 );
LABEL_1296:
                                  if ( !(_BYTE)v661 )
                                  {
LABEL_1322:
                                    sub_140001660(v990, v986, 1);
LABEL_1323:
                                    sub_1405D62A0(v1391, v1386, v979);
                                    if ( (v1391[20] & 1) == 0 )
                                    {
                                      *(_QWORD *)&v1391[16] = "temperaturemax_tokensstreamdoubaoreasoning_effortnone";
                                      *(_QWORD *)&v1391[24] = 11;
                                      *(_QWORD *)&v1391[32] = aTopP;
                                      *(_QWORD *)&v1391[40] = 5;
                                      *(_QWORD *)&v1391[48] = aTopK;
                                      *(_QWORD *)&v1391[56] = 5;
                                      v865 = 0;
                                      while ( v865 != 3 )
                                      {
                                        v1074 = *(_QWORD *)&v1391[16 * v865 + 16];
                                        v1075 = *(_QWORD *)&v1391[16 * v865 + 24];
                                        v1076 = (const __m128i *)sub_1414D4800(v1074, v1075, v1337);
                                        ++v865;
                                        if ( v1076 )
                                        {
                                          switch ( v1076->m128i_i8[0] )
                                          {
                                            case 0:
                                              v1394.m256i_i8[0] = 0;
                                              goto LABEL_1344;
                                            case 1:
                                            case 2:
                                              v1077 = _mm_loadu_si128(v1076);
                                              *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128(v1076 + 1);
                                              *(__m128i *)v1394.m256i_i8 = v1077;
                                              goto LABEL_1344;
                                            case 3:
                                              sub_141543F00(&v1394.m256i_u64[1], &v1076->m128i_u64[1]);
                                              v1394.m256i_i8[0] = 3;
                                              goto LABEL_1344;
                                            case 4:
                                              sub_140465C50(&v1394.m256i_u64[1], &v1076->m128i_u64[1]);
                                              v1394.m256i_i8[0] = 4;
                                              goto LABEL_1344;
                                            case 5:
                                              if ( v1076[1].m128i_i64[1] )
                                              {
                                                v1078 = v1076->m128i_i64[1];
                                                if ( !v1078 )
                                                  sub_14176E840(&off_1417E9A90);
                                                sub_14005C470(&v1394.m256i_u64[1], v1078, v1076[1].m128i_i64[0]);
                                              }
                                              else
                                              {
                                                v1394.m256i_i64[1] = 0;
                                                v1394.m256i_i64[3] = 0;
                                              }
                                              v1394.m256i_i8[0] = 5;
LABEL_1344:
                                              v1287 = 1;
                                              v1402 = sub_1414D4900(v1074, v1075, &v1274);
                                              sub_1401FF690(v1402);
                                              v1079 = _mm_load_si128((const __m128i *)&v1394);
                                              v1080 = (_OWORD *)v1402;
                                              *(__m128i *)(v1402 + 16) = _mm_load_si128((const __m128i *)&v1394.m256i_u64[2]);
                                              *v1080 = v1079;
                                              continue;
                                            default:
                                              goto LABEL_978;
                                          }
                                        }
                                      }
                                    }
LABEL_1324:
                                    *(_QWORD *)&v1334[8] = 0;
                                    v1335 = 0;
                                    nullsub_1(v983, v982, v984, v985, v1221);
                                    v1066 = (_DWORD *)sub_140001650(4, 1);
                                    if ( !v1066 )
                                      sub_14176E54B(1, 4);
                                    *v1066 = 1701869940;
                                    v1382.m256i_i64[0] = 4;
                                    v1382.m256i_i64[1] = (__int64)v1066;
                                    v1382.m256i_i64[2] = 4;
                                    nullsub_1(v1068, v1067, v1069, v1070, v1229);
                                    v1071 = (__m128i *)sub_140001650(9, 1);
                                    v1402 = (__int64)v1071;
                                    if ( !v1071 )
                                      sub_14176E54B(1, 9);
                                    v1071->m128i_i64[0] = 0x6172656D65687065LL;
                                    v1071->m128i_i8[8] = 108;
                                    v1391[0] = 3;
                                    *(_QWORD *)&v1391[8] = 9;
                                    *(_QWORD *)&v1391[16] = v1071;
                                    *(_QWORD *)&v1391[24] = 9;
                                    sub_1401A27E0(&v1394, &v1334[8], &v1382, v1391);
                                    if ( v1394.m256i_i8[0] != -1 )
                                      sub_1401FF690(&v1394);
                                    *(__m128i *)&v1387.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v1334[8]);
                                    v1387.m256i_i64[3] = v1335;
                                    v1387.m256i_i8[0] = 5;
                                    v1401 = 1;
                                    v1072 = (const __m128i *)sub_1414D4800(
                                                               "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求"
                                                               "进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensst"
                                                               "reamdoubaoreasoning_effortnone",
                                                               6,
                                                               &v1274);
                                    if ( !v1072 )
                                      goto LABEL_1388;
                                    switch ( v1072->m128i_i8[0] )
                                    {
                                      case 0:
                                        v1391[0] = 0;
                                        break;
                                      case 1:
                                      case 2:
                                        v1073 = _mm_loadu_si128(v1072);
                                        *(__m128i *)&v1391[16] = _mm_loadu_si128(v1072 + 1);
                                        *(__m128i *)v1391 = v1073;
                                        break;
                                      case 3:
                                        v1401 = 1;
                                        sub_141543F00(&v1391[8], &v1072->m128i_u64[1]);
                                        v1391[0] = 3;
                                        break;
                                      case 4:
                                        v1401 = 1;
                                        sub_140465C50(&v1391[8], &v1072->m128i_u64[1]);
                                        v1391[0] = 4;
                                        break;
                                      case 5:
                                        if ( v1072[1].m128i_i64[1] )
                                        {
                                          v1081 = v1072->m128i_i64[1];
                                          if ( !v1081 )
                                          {
                                            v1401 = 1;
                                            sub_14176E840(&off_1417E9A90);
                                          }
                                          v1082 = v1072[1].m128i_i64[0];
                                          v1401 = 1;
                                          sub_14005C470(&v1391[8], v1081, v1082);
                                        }
                                        else
                                        {
                                          *(_QWORD *)&v1391[8] = 0;
                                          *(_QWORD *)&v1391[24] = 0;
                                        }
                                        v1391[0] = 5;
                                        break;
                                    }
                                    v1083 = *(__m128i **)&v1391[1];
                                    v1084 = (__m128i *)*(unsigned int *)&v1391[9];
                                    v1085 = *(unsigned __int16 *)&v1391[13];
                                    v1086 = v1391[15];
                                    *(__m128i *)&v1382.m256i_u64[2] = _mm_load_si128((const __m128i *)&v1391[16]);
                                    v1382.m256i_i8[0] = v1391[0];
                                    *(__int64 *)((char *)v1382.m256i_i64 + 1) = *(_QWORD *)&v1391[1];
                                    *(__int32 *)((char *)&v1382.m256i_i32[2] + 1) = *(_DWORD *)&v1391[9];
                                    *(__int16 *)((char *)&v1382.m256i_i16[6] + 1) = *(_WORD *)&v1391[13];
                                    v1382.m256i_i8[15] = v1391[15];
                                    v1087 = v1391[0];
                                    if ( v1391[0] == 4 )
                                    {
                                      LODWORD(v1402) = 4;
                                      v1112 = v1382.m256i_i64[3];
                                      v1280[0] = v1382.m256i_i8[8];
                                      *(_DWORD *)&v1280[1] = *(__int32 *)((char *)&v1382.m256i_i32[2] + 1);
                                      *(_WORD *)&v1280[5] = *(__int16 *)((char *)&v1382.m256i_i16[6] + 1);
                                      v1280[7] = v1382.m256i_i8[15];
                                      *(_OWORD *)&v1280[8] = *(_OWORD *)&v1382.m256i_u64[2];
                                      if ( !v1382.m256i_i64[3] )
                                      {
                                        v1087 = v1402;
                                        if ( *(_QWORD *)v1280 )
                                          sub_140001660(*(_QWORD *)&v1280[8], 32LL * *(_QWORD *)v1280, 8);
                                        goto LABEL_1386;
                                      }
                                    }
                                    else
                                    {
                                      if ( v1391[0] != 3 )
                                      {
LABEL_1386:
                                        if ( (unsigned __int8)(v1087 - 3) >= 2u )
                                        {
                                          v1401 = 1;
                                          sub_1401FF690(&v1382);
                                        }
LABEL_1388:
                                        v1401 = 1;
                                        v1121 = sub_1414D4800(
                                                  "messagesrolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进"
                                                  "行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdoubaoreas"
                                                  "oning_effortnone",
                                                  8,
                                                  &v1274);
                                        if ( !v1121 )
                                          goto LABEL_1434;
                                        if ( *(_BYTE *)v1121 != 4 )
                                          goto LABEL_1434;
                                        v1122 = *(_QWORD *)(v1121 + 24);
                                        if ( !v1122 )
                                          goto LABEL_1434;
                                        v1123 = *(_QWORD *)(v1121 + 16);
                                        v1124 = v1123 + 32 * v1122;
                                        while ( 1 )
                                        {
                                          v1124 -= 32;
                                          v1401 = 1;
                                          v1125 = sub_1414D4800(
                                                    "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、"
                                                    "整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                                    4,
                                                    v1124);
                                          if ( v1125 )
                                          {
                                            if ( *(_BYTE *)v1125 == 3 && *(_QWORD *)(v1125 + 24) == 4 )
                                            {
                                              v1126 = _byteswap_ulong(**(_DWORD **)(v1125 + 16));
                                              if ( v1126 >= 0x75736573 == v1126 < 0x75736572 )
                                                break;
                                            }
                                          }
                                          if ( v1123 == v1124 )
                                            goto LABEL_1434;
                                        }
                                        v1401 = 1;
                                        v1127 = (const __m128i *)sub_1414D4800(
                                                                   "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行"
                                                                   "文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokens"
                                                                   "streamdoubaoreasoning_effortnone",
                                                                   7,
                                                                   v1124);
                                        if ( !v1127 )
                                        {
LABEL_1434:
                                          sub_1401FF690(&v1387);
LABEL_1435:
                                          v1159 = _mm_loadu_si128((const __m128i *)&v1274);
                                          v1160 = _mm_loadu_si128((const __m128i *)&v1275.m128i_u64[1]);
                                          *(__m128i *)&v1391[16] = v1160;
                                          *(__m128i *)v1391 = v1159;
                                          v1161 = _mm_load_si128((const __m128i *)&v1323);
                                          v1162 = _mm_load_si128((const __m128i *)&v1323.m256i_u64[2]);
                                          v1163 = _mm_load_si128(&v1324);
                                          *(__m128i *)&v1391[32] = v1161;
                                          *(__m128i *)&v1391[48] = v1162;
                                          *(__m128i *)&v1391[64] = v1163;
                                          v1164 = v1257;
                                          v1257[4] = v1163;
                                          v1164[3] = v1162;
                                          v1164[2] = v1161;
                                          v1164[1] = v1160;
                                          *v1164 = v1159;
                                          v1165 = v1258.m128i_i64[1];
                                          v1337 = v1259;
                                          v1402 = 0;
                                          v1398 = (__m128i *)v1258.m128i_i64[1];
                                          while ( 1 )
                                          {
                                            HIDWORD(_RAX) = HIDWORD(v1402);
                                            if ( v1337 == (__m128i *)v1402 )
                                              break;
                                            ++v1402;
                                            v1167 = v1165 + 32;
                                            ((void (*)(void))sub_1403FF680)();
                                            v1165 = v1167;
                                          }
                                          if ( v1258.m128i_i64[0] )
                                            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(
                                                                                v1258.m128i_i64[1],
                                                                                32 * v1258.m128i_i64[0],
                                                                                8) >> 32;
                                          if ( v1321 )
                                            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v1386, v1321, 1) >> 32;
                                          v1168 = v1246;
                                          if ( v1246 )
                                          {
                                            v1169 = v1247;
                                            if ( v1247 )
                                            {
                                              v1170 = v1245;
                                              v1171 = v1245 + 1;
                                              _R15D = ~_mm_movemask_epi8(_mm_load_si128(v1245));
                                              do
                                              {
                                                if ( !(_WORD)_R15D )
                                                {
                                                  do
                                                  {
                                                    v1173 = _mm_load_si128(v1171);
                                                    v1170 -= 24;
                                                    ++v1171;
                                                    _R15D = _mm_movemask_epi8(v1173) ^ 0xFFFF;
                                                  }
                                                  while ( !_R15D );
                                                }
                                                __asm { tzcnt   eax, r15d }
                                                v1174 = -3 * _RAX;
                                                v1175 = *((_QWORD *)&v1170[-1] + v1174 - 1);
                                                if ( v1175 )
                                                  sub_140001660(v1170[-1].m128i_i64[v1174], v1175, 1);
                                                --v1169;
                                                _RAX = _R15D & (unsigned int)(_R15D - 1);
                                                _R15D &= _R15D - 1;
                                              }
                                              while ( v1169 );
                                            }
                                            v1176 = (24 * v1168 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                                            v1177 = v1176 + v1168 + 17;
                                            if ( v1177 )
                                              sub_140001660((char *)v1245 - v1176, v1177, 16);
                                          }
                                          v1178 = v1270;
                                          v1402 = (__int64)v1271;
                                          v1396 = nullptr;
                                          v1386 = v1270;
                                          while ( (const __m128i *)v1402 != v1396 )
                                          {
                                            v1396 = (const __m128i *)((char *)v1396 + 1);
                                            v1179 = v1178 + 32;
                                            ((void (*)(void))sub_1403FF680)();
                                            v1178 = v1179;
                                          }
                                          goto LABEL_1455;
                                        }
                                        switch ( v1127->m128i_i8[0] )
                                        {
                                          case 0:
                                            v1391[0] = 0;
                                            break;
                                          case 1:
                                          case 2:
                                            v1128 = _mm_loadu_si128(v1127);
                                            *(__m128i *)&v1391[16] = _mm_loadu_si128(v1127 + 1);
                                            *(__m128i *)v1391 = v1128;
                                            break;
                                          case 3:
                                            v1401 = 1;
                                            sub_141543F00(&v1391[8], &v1127->m128i_u64[1]);
                                            v1391[0] = 3;
                                            break;
                                          case 4:
                                            v1401 = 1;
                                            sub_140465C50(&v1391[8], &v1127->m128i_u64[1]);
                                            v1391[0] = 4;
                                            break;
                                          case 5:
                                            v1401 = 1;
                                            sub_1401A7FA0(&v1391[8], &v1127->m128i_u64[1]);
                                            v1391[0] = 5;
                                            break;
                                        }
                                        *(__m128i *)&v1382.m256i_u64[2] = _mm_load_si128((const __m128i *)&v1391[16]);
                                        v1382.m256i_i8[0] = v1391[0];
                                        *(__int64 *)((char *)v1382.m256i_i64 + 1) = *(_QWORD *)&v1391[1];
                                        *(__int32 *)((char *)&v1382.m256i_i32[2] + 1) = *(_DWORD *)&v1391[9];
                                        *(__int16 *)((char *)&v1382.m256i_i16[6] + 1) = *(_WORD *)&v1391[13];
                                        v1382.m256i_i8[15] = v1391[15];
                                        v1129 = v1391[0];
                                        if ( v1391[0] == 3 )
                                        {
                                          v1398 = (__m128i *)v1382.m256i_i64[2];
                                          v1402 = v1382.m256i_i64[1];
                                          nullsub_1(
                                            *(_QWORD *)&v1391[1],
                                            *(unsigned int *)&v1391[9],
                                            *(unsigned __int16 *)&v1391[13],
                                            v1391[15],
                                            v1230);
                                          v1337 = (__m128i *)sub_140001650(32, 8);
                                          if ( !v1337 )
                                            sub_14176E531(8, 32);
                                          *(_QWORD *)v1280 = 0;
                                          *(_QWORD *)&v1280[16] = 0;
                                          nullsub_1(v1138, v1137, v1139, v1140, v1234);
                                          v1141 = (_DWORD *)sub_140001650(4, 1);
                                          if ( !v1141 )
                                            sub_14176E54B(1, 4);
                                          *v1141 = 1701869940;
                                          *(_QWORD *)&v1334[8] = 4;
                                          *(_QWORD *)&v1334[16] = v1141;
                                          v1335 = 4;
                                          v1340 = 1;
                                          sub_1404A1EA0(v1391, &off_141850468);
                                          if ( v1391[0] == 0xFF )
                                          {
                                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                            sub_14176E860(
                                              (unsigned int)aCalledResultUn_15,
                                              43,
                                              (unsigned int)&v1394,
                                              (unsigned int)&off_141851870,
                                              (__int64)&off_141855B38);
                                          }
                                          v1142 = _mm_loadu_si128((const __m128i *)v1391);
                                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *(__m128i *)v1394.m256i_i8 = v1142;
                                          v1340 = 0;
                                          sub_1401A27E0(v1391, v1280, &v1334[8], &v1394);
                                          if ( v1391[0] != 0xFF )
                                            sub_1401FF690(v1391);
                                          nullsub_1(v1144, v1143, v1145, v1146, v1235);
                                          v1147 = (_DWORD *)sub_140001650(4, 1);
                                          if ( !v1147 )
                                            sub_14176E54B(1, 4);
                                          *v1147 = 1954047348;
                                          *(_QWORD *)&v1334[8] = 4;
                                          *(_QWORD *)&v1334[16] = v1147;
                                          v1335 = 4;
                                          v1339 = 1;
                                          sub_1404A0860(v1391, &v1382.m256i_u64[1]);
                                          if ( v1391[0] == 0xFF )
                                          {
                                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                            sub_14176E860(
                                              (unsigned int)aCalledResultUn_15,
                                              43,
                                              (unsigned int)&v1394,
                                              (unsigned int)&off_141851870,
                                              (__int64)&off_141855B38);
                                          }
                                          v1148 = _mm_loadu_si128((const __m128i *)v1391);
                                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *(__m128i *)v1394.m256i_i8 = v1148;
                                          v1339 = 0;
                                          sub_1401A27E0(v1391, v1280, &v1334[8], &v1394);
                                          if ( v1391[0] != 0xFF )
                                            sub_1401FF690(v1391);
                                          nullsub_1(v1150, v1149, v1151, v1152, v1236);
                                          v1153 = (void *)sub_140001650(13, 1);
                                          if ( !v1153 )
                                            sub_14176E54B(1, 13);
                                          qmemcpy(v1153, "cache_control", 13);
                                          *(_QWORD *)&v1334[8] = 13;
                                          *(_QWORD *)&v1334[16] = v1153;
                                          v1335 = 13;
                                          v1338 = 1;
                                          sub_1404B9F30(v1391, &v1387);
                                          if ( v1391[0] == 0xFF )
                                          {
                                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                            sub_14176E860(
                                              (unsigned int)aCalledResultUn_15,
                                              43,
                                              (unsigned int)&v1394,
                                              (unsigned int)&off_141851870,
                                              (__int64)&off_141855B38);
                                          }
                                          v1154 = _mm_loadu_si128((const __m128i *)v1391);
                                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *(__m128i *)v1394.m256i_i8 = v1154;
                                          v1338 = 0;
                                          sub_1401A27E0(v1391, v1280, &v1334[8], &v1394);
                                          if ( v1391[0] != 0xFF )
                                            sub_1401FF690(v1391);
                                          *(_OWORD *)&v1391[7] = *(_OWORD *)v1280;
                                          *(_QWORD *)&v1391[23] = *(_QWORD *)&v1280[16];
                                          v1155 = v1337;
                                          v1337->m128i_i8[0] = 5;
                                          v1156 = _mm_loadu_si128((const __m128i *)v1391);
                                          v1155[1] = *(__m128i *)&v1391[15];
                                          *(__m128i *)((char *)v1155 + 1) = v1156;
                                          *(_QWORD *)&v1391[8] = 1;
                                          *(_QWORD *)&v1391[16] = v1155;
                                          *(_QWORD *)&v1391[24] = 1;
                                          v1391[0] = 4;
                                          v1284 = 1;
                                          v1337 = (__m128i *)sub_1414D4900(
                                                               "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色"
                                                               "、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdo"
                                                               "ubaoreasoning_effortnone",
                                                               7,
                                                               v1124);
                                          sub_1401FF690(v1337);
                                          v1157 = _mm_loadu_si128((const __m128i *)v1391);
                                          v1158 = v1337;
                                          v1337[1] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *v1158 = v1157;
                                          v1136 = 1;
                                          if ( v1402 )
                                            sub_140001660(v1398, v1402, 1);
                                        }
                                        else
                                        {
                                          if ( v1391[0] != 4 )
                                          {
                                            v1136 = 1;
                                            goto LABEL_1430;
                                          }
                                          *(_QWORD *)&v1280[16] = v1382.m256i_i64[3];
                                          *(__m128i *)v1280 = _mm_loadu_si128((const __m128i *)&v1382.m256i_u64[1]);
                                          LOBYTE(v1129) = 1;
                                          LODWORD(v1402) = v1129;
                                          if ( v1382.m256i_i64[3] )
                                          {
                                            v1130 = *(_QWORD *)&v1280[8];
                                            v1131 = 32 * v1382.m256i_i64[3];
                                            if ( *(_BYTE *)(*(_QWORD *)&v1280[8] + 32 * v1382.m256i_i64[3] - 32) == 5 )
                                            {
                                              nullsub_1(
                                                *(_QWORD *)&v1391[1],
                                                *(unsigned int *)&v1391[9],
                                                *(unsigned __int16 *)&v1391[13],
                                                v1391[15],
                                                v1230);
                                              v1132 = (void *)sub_140001650(13, 1);
                                              if ( !v1132 )
                                              {
                                                v1379 = 1;
                                                v1378 = 1;
                                                sub_14176E54B(1, 13);
                                              }
                                              qmemcpy(v1132, "cache_control", 13);
                                              *(_QWORD *)&v1334[8] = 13;
                                              *(_QWORD *)&v1334[16] = v1132;
                                              v1335 = 13;
                                              v1133 = _mm_loadu_si128((const __m128i *)&v1387);
                                              *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)&v1387.m256i_u64[2]);
                                              *(__m128i *)v1391 = v1133;
                                              v1379 = 0;
                                              v1378 = 1;
                                              sub_1401A27E0(&v1394, v1131 + v1130 - 24, &v1334[8], v1391);
                                              if ( v1394.m256i_i8[0] != -1 )
                                              {
                                                v1379 = 0;
                                                v1378 = 1;
                                                sub_1401FF690(&v1394);
                                              }
                                              LODWORD(v1402) = 0;
                                            }
                                          }
                                          *(_QWORD *)&v1391[24] = v1382.m256i_i64[3];
                                          *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1382.m256i_u64[1]);
                                          v1391[0] = 4;
                                          v1283 = 1;
                                          v1337 = (__m128i *)sub_1414D4900(
                                                               "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色"
                                                               "、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdo"
                                                               "ubaoreasoning_effortnone",
                                                               7,
                                                               v1124);
                                          sub_1401FF690(v1337);
                                          v1134 = _mm_loadu_si128((const __m128i *)v1391);
                                          v1135 = v1337;
                                          v1337[1] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *v1135 = v1134;
                                          v1136 = v1402;
                                        }
                                        LOBYTE(v1129) = v1382.m256i_i8[0];
LABEL_1430:
                                        if ( (unsigned int)(unsigned __int8)v1129 - 3 >= 2
                                          && (unsigned __int8)v1129 != 255 )
                                        {
                                          v1401 = v1136;
                                          sub_1401FF690(&v1382);
                                        }
                                        if ( !v1136 )
                                          goto LABEL_1435;
                                        goto LABEL_1434;
                                      }
                                      v1088 = v1382.m256i_i64[1];
                                      *((_QWORD *)&v1089 + 1) = v1382.m256i_i64[3];
                                      v1389 = v1382.m256i_i64[2];
                                      nullsub_1(
                                        *(_QWORD *)&v1391[1],
                                        *(unsigned int *)&v1391[9],
                                        *(unsigned __int16 *)&v1391[13],
                                        v1391[15],
                                        v1230);
                                      v1090 = sub_140001650(32, 8);
                                      LODWORD(v1402) = 3;
                                      v1337 = (__m128i *)v1088;
                                      if ( !v1090 )
                                        sub_14176E531(8, 32);
                                      v1095 = (__m128i *)v1090;
                                      *(_QWORD *)v1280 = 0;
                                      *(_QWORD *)&v1280[16] = 0;
                                      nullsub_1(v1092, v1091, v1093, v1094, v1231);
                                      v1096 = (_DWORD *)sub_140001650(4, 1);
                                      v1398 = v1095;
                                      if ( !v1096 )
                                        sub_14176E54B(1, 4);
                                      *v1096 = 1701869940;
                                      *(_QWORD *)&v1334[8] = 4;
                                      *(_QWORD *)&v1334[16] = v1096;
                                      v1335 = 4;
                                      nullsub_1(v1098, v1097, v1099, v1100, v1232);
                                      v1101 = (_DWORD *)sub_140001650(4, 1);
                                      v1282 = v1101;
                                      if ( !v1101 )
                                        sub_14176E54B(1, 4);
                                      *v1101 = 1954047348;
                                      v1391[0] = 3;
                                      *(_QWORD *)&v1391[8] = 4;
                                      *(_QWORD *)&v1391[16] = v1101;
                                      *(_QWORD *)&v1391[24] = 4;
                                      sub_1401A27E0(&v1394, v1280, &v1334[8], v1391);
                                      if ( v1394.m256i_i8[0] != -1 )
                                        sub_1401FF690(&v1394);
                                      nullsub_1(v1103, v1102, v1104, v1105, v1233);
                                      v1106 = (_DWORD *)sub_140001650(4, 1);
                                      if ( !v1106 )
                                        sub_14176E54B(1, 4);
                                      *v1106 = 1954047348;
                                      *(_QWORD *)&v1334[8] = 4;
                                      *(_QWORD *)&v1334[16] = v1106;
                                      v1335 = 4;
                                      if ( v1089 < 0 )
                                      {
                                        v1111 = 0;
                                        goto LABEL_1363;
                                      }
                                      if ( *((_QWORD *)&v1089 + 1) )
                                      {
                                        nullsub_1(v1108, v1107, v1109, v1110, v1230);
                                        v1111 = 1;
                                        v1113 = sub_140001650(*((_QWORD *)&v1089 + 1), 1);
                                        if ( !v1113 )
                                        {
LABEL_1363:
                                          v1286 = 1;
                                          sub_14176E54B(v1111, *((_QWORD *)&v1089 + 1));
                                        }
                                        *(_QWORD *)&v1089 = v1113;
                                        sub_14172B820(v1113, v1389, *((_QWORD *)&v1089 + 1));
                                      }
                                      else
                                      {
                                        *(_QWORD *)&v1089 = 1;
                                      }
                                      v1391[0] = 3;
                                      *(_QWORD *)&v1391[8] = *((_QWORD *)&v1089 + 1);
                                      *(_OWORD *)&v1391[16] = v1089;
                                      v1286 = 0;
                                      sub_1401A27E0(&v1394, v1280, &v1334[8], v1391);
                                      if ( v1394.m256i_i8[0] != -1 )
                                        sub_1401FF690(&v1394);
                                      *(_OWORD *)&v1391[7] = *(_OWORD *)v1280;
                                      *(_QWORD *)&v1391[23] = *(_QWORD *)&v1280[16];
                                      v1083 = v1398;
                                      v1398->m128i_i8[0] = 5;
                                      v1114 = _mm_loadu_si128((const __m128i *)v1391);
                                      v1083[1] = *(__m128i *)&v1391[15];
                                      *(__m128i *)((char *)v1083 + 1) = v1114;
                                      *(_QWORD *)v1280 = 1;
                                      *(_QWORD *)&v1280[8] = v1083;
                                      *(_QWORD *)&v1280[16] = 1;
                                      v1084 = v1337;
                                      v1112 = 1;
                                      if ( v1337 )
                                        sub_140001660(v1389, v1337, 1);
                                    }
                                    v1115 = *(_QWORD *)&v1280[8];
                                    v1116 = 32 * v1112;
                                    if ( *(_BYTE *)(*(_QWORD *)&v1280[8] + v1116 - 32) == 5 )
                                    {
                                      nullsub_1(v1083, v1084, v1085, v1086, v1230);
                                      v1117 = (void *)sub_140001650(13, 1);
                                      if ( !v1117 )
                                      {
                                        v1385 = 1;
                                        sub_14176E54B(1, 13);
                                      }
                                      qmemcpy(v1117, "cache_control", 13);
                                      *(_QWORD *)&v1334[8] = 13;
                                      *(_QWORD *)&v1334[16] = v1117;
                                      v1335 = 13;
                                      switch ( v1387.m256i_i8[0] )
                                      {
                                        case 0:
                                          v1391[0] = 0;
                                          break;
                                        case 1:
                                        case 2:
                                          v1118 = _mm_loadu_si128((const __m128i *)&v1387);
                                          *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)&v1387.m256i_u64[2]);
                                          *(__m128i *)v1391 = v1118;
                                          break;
                                        case 3:
                                          v1341 = 1;
                                          sub_141543F00(&v1391[8], &v1387.m256i_u64[1]);
                                          v1391[0] = 3;
                                          break;
                                        case 4:
                                          v1341 = 1;
                                          sub_140465C50(&v1391[8], &v1387.m256i_u64[1]);
                                          v1391[0] = 4;
                                          break;
                                        case 5:
                                          v1341 = 1;
                                          sub_1401A7FA0(&v1391[8], &v1387.m256i_u64[1]);
                                          v1391[0] = 5;
                                          break;
                                      }
                                      v1341 = 0;
                                      sub_1401A27E0(&v1394, v1116 + v1115 - 24, &v1334[8], v1391);
                                      if ( v1394.m256i_i8[0] != -1 )
                                      {
                                        v1385 = 1;
                                        sub_1401FF690(&v1394);
                                      }
                                    }
                                    *(_QWORD *)&v1391[24] = *(_QWORD *)&v1280[16];
                                    *(__m128i *)&v1391[8] = _mm_load_si128((const __m128i *)v1280);
                                    v1391[0] = 4;
                                    v1285 = 1;
                                    v1337 = (__m128i *)sub_1414D4900(
                                                         "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色"
                                                         "、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstreamdoubaore"
                                                         "asoning_effortnone",
                                                         6,
                                                         &v1274);
                                    sub_1401FF690(v1337);
                                    v1119 = _mm_loadu_si128((const __m128i *)v1391);
                                    v1120 = v1337;
                                    v1337[1] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                    *v1120 = v1119;
                                    v1087 = v1402;
                                    goto LABEL_1386;
                                  }
                                  if ( v986 == 4 )
                                  {
                                    if ( v990->m128i_i32[0] == 1819242356 )
                                    {
LABEL_1302:
                                      v1398 = v990;
                                      v1402 = v986;
                                      sub_1405D62A0(v1391, v1386, v979);
                                      if ( v1391[20] != 2 && !v1391[16] )
                                      {
                                        sub_1405D62A0(v1391, v1386, v1321);
                                        v986 = v1402;
                                        v990 = v1398;
                                        if ( v1391[20] == 2 || !v1391[19] )
                                        {
                                          v1048 = sub_1414D4800(aToolChoice_0, 11, &v1274);
                                          v1053 = 2;
                                          if ( v1048 )
                                          {
                                            v1054 = (_BYTE *)sub_1414D4800(&xmmword_141856048, 25, v1048);
                                            if ( v1054 )
                                            {
                                              if ( *v1054 == 1 )
                                                v1053 = v1054[1];
                                            }
                                          }
                                          v1387.m256i_i64[0] = 0;
                                          v1387.m256i_i64[2] = 0;
                                          nullsub_1(v1050, v1049, v1051, v1052, v1221);
                                          v1055 = (_DWORD *)sub_140001650(4, 1);
                                          if ( !v1055 )
                                            sub_14176E54B(1, 4);
                                          *v1055 = 1701869940;
                                          v1382.m256i_i64[0] = 4;
                                          v1382.m256i_i64[1] = (__int64)v1055;
                                          v1382.m256i_i64[2] = 4;
                                          v1342 = 1;
                                          sub_1404A1EA0(v1391, &off_141855BB0);
                                          if ( v1391[0] == 0xFF )
                                          {
                                            v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                            sub_14176E860(
                                              (unsigned int)aCalledResultUn_15,
                                              43,
                                              (unsigned int)&v1394,
                                              (unsigned int)&off_141851870,
                                              (__int64)&off_141856068);
                                          }
                                          v1056 = _mm_loadu_si128((const __m128i *)v1391);
                                          *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *(__m128i *)v1394.m256i_i8 = v1056;
                                          v1342 = 0;
                                          sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                                          if ( v1391[0] != 0xFF )
                                            sub_1401FF690(v1391);
                                          *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1387);
                                          *(_QWORD *)&v1391[24] = v1387.m256i_i64[2];
                                          v1391[0] = 5;
                                          v1288 = 1;
                                          v1337 = (__m128i *)sub_1414D4900(aToolChoice_0, 11, &v1274);
                                          sub_1401FF690(v1337);
                                          v1057 = _mm_loadu_si128((const __m128i *)v1391);
                                          v1058 = v1337;
                                          v1337[1] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                          *v1058 = v1057;
                                          v986 = v1402;
                                          v990 = v1398;
                                          if ( v1053 != 2 )
                                          {
                                            v1391[1] = v1053;
                                            v1391[0] = 1;
                                            v1325 = 1;
                                            v1059 = sub_1414D4900(aToolChoice_0, 11, &v1274);
                                            v1325 = 1;
                                            v1337 = (__m128i *)sub_1414D4900(&xmmword_141856048, 25, v1059);
                                            sub_1401FF690(v1337);
                                            v1060 = _mm_loadu_si128((const __m128i *)v1391);
                                            v1061 = v1337;
                                            v1337[1] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                            *v1061 = v1060;
                                            v986 = v1402;
                                            v990 = v1398;
                                          }
                                        }
                                        goto LABEL_1316;
                                      }
                                      v1387.m256i_i64[0] = 0;
                                      v1387.m256i_i64[2] = 0;
                                      nullsub_1(v1045, v1044, v1046, v1047, v1221);
                                      v1062 = (_DWORD *)sub_140001650(4, 1);
                                      if ( !v1062 )
                                        sub_14176E54B(1, 4);
                                      *v1062 = 1701869940;
                                      v1382.m256i_i64[0] = 4;
                                      v1382.m256i_i64[1] = (__int64)v1062;
                                      v1382.m256i_i64[2] = 4;
                                      v1343 = 1;
                                      sub_1404A1EA0(v1391, &off_14184F5E8);
                                      if ( v1391[0] == 0xFF )
                                      {
                                        v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                        sub_14176E860(
                                          (unsigned int)aCalledResultUn_15,
                                          43,
                                          (unsigned int)&v1394,
                                          (unsigned int)&off_141851870,
                                          (__int64)&off_141856030);
                                      }
                                      v1063 = _mm_loadu_si128((const __m128i *)v1391);
                                      *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                      *(__m128i *)v1394.m256i_i8 = v1063;
                                      v1343 = 0;
                                      sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                                      if ( v1391[0] != 0xFF )
                                        sub_1401FF690(v1391);
                                      *(__m128i *)&v1391[8] = _mm_loadu_si128((const __m128i *)&v1387);
                                      *(_QWORD *)&v1391[24] = v1387.m256i_i64[2];
                                      v1391[0] = 5;
                                      v1289 = 1;
                                      v1389 = sub_1414D4900(aThinking_1, 8, &v1274);
                                      sub_1401FF690(v1389);
                                      v1064 = _mm_loadu_si128((const __m128i *)v1391);
                                      v1065 = (_OWORD *)v1389;
                                      *(__m128i *)(v1389 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                                      *v1065 = v1064;
                                      v979 = v1321;
                                      v986 = v1402;
                                      v990 = v1398;
                                      goto LABEL_1322;
                                    }
                                  }
                                  else if ( v986 == 3 && !(v990->m128i_i16[0] ^ 0x6E61 | v990->m128i_u8[2] ^ 0x79) )
                                  {
                                    goto LABEL_1302;
                                  }
LABEL_1316:
                                  sub_140001660(v990, v986, 1);
                                  goto LABEL_1324;
                                }
                              }
                              else
                              {
                                v991 = 0;
                              }
                              v1000 = v991;
                              v991 = v986 & 0x7FFFFFFFFFFFFFF8LL;
                              v1001 = _mm_load_si128((const __m128i *)&xmmword_1417EBCB0);
                              v1002 = _mm_load_si128((const __m128i *)&xmmword_1417EBCC0);
                              v1003 = _mm_load_si128((const __m128i *)&xmmword_1417EBCD0);
                              do
                              {
                                v1004 = _mm_loadl_epi64((__m128i *)((char *)v990 + v1000));
                                v1005 = _mm_add_epi8(v1004, v1001);
                                *(__int64 *)((char *)v990->m128i_i64 + v1000) = _mm_or_si128(
                                                                                  _mm_andnot_si128(
                                                                                    _mm_cmpeq_epi8(
                                                                                      _mm_max_epu8(v1005, v1002),
                                                                                      v1005),
                                                                                    v1003),
                                                                                  v1004).m128i_u64[0];
                                v1000 += 8;
                              }
                              while ( v991 != v1000 );
                              goto LABEL_1295;
                            }
                            if ( *(_DWORD *)v859 == 1869903201 )
                            {
                              v1387.m256i_i64[0] = 0;
                              v1387.m256i_i64[2] = 0;
                              nullsub_1(4, v854, v855, v856, v1221);
                              v943 = (_DWORD *)sub_140001650(4, 1);
                              if ( !v943 )
                                sub_14176E54B(1, 4);
                              *v943 = 1701869940;
                              v1382.m256i_i64[0] = 4;
                              v1382.m256i_i64[1] = (__int64)v943;
                              v1382.m256i_i64[2] = 4;
                              v1349 = 1;
                              sub_1404A1EA0(v1391, &off_141855BB0);
                              if ( v1391[0] == 0xFF )
                              {
                                v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                sub_14176E860(
                                  (unsigned int)aCalledResultUn_15,
                                  43,
                                  (unsigned int)&v1394,
                                  (unsigned int)&off_141851870,
                                  (__int64)&off_1418560C0);
                              }
                              v944 = _mm_loadu_si128((const __m128i *)v1391);
                              *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *(__m128i *)v1394.m256i_i8 = v944;
                              v1349 = 0;
                              sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                              if ( v1391[0] == 0xFF )
                                goto LABEL_1039;
                            }
                            else
                            {
                              if ( *(_DWORD *)v859 != 1701736302 )
                                goto LABEL_1041;
                              v1387.m256i_i64[0] = 0;
                              v1387.m256i_i64[2] = 0;
                              nullsub_1(4, v854, v855, v856, v1221);
                              v926 = (_DWORD *)sub_140001650(4, 1);
                              if ( !v926 )
                                sub_14176E54B(1, 4);
                              *v926 = 1701869940;
                              v1382.m256i_i64[0] = 4;
                              v1382.m256i_i64[1] = (__int64)v926;
                              v1382.m256i_i64[2] = 4;
                              v1351 = 1;
                              sub_1404A1EA0(v1391, &off_14184F5A8);
                              if ( v1391[0] == 0xFF )
                              {
                                v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                                sub_14176E860(
                                  (unsigned int)aCalledResultUn_15,
                                  43,
                                  (unsigned int)&v1394,
                                  (unsigned int)&off_141851870,
                                  (__int64)&off_141856090);
                              }
                              v927 = _mm_loadu_si128((const __m128i *)v1391);
                              *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                              *(__m128i *)v1394.m256i_i8 = v927;
                              v1351 = 0;
                              sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                              if ( v1391[0] == 0xFF )
                                goto LABEL_1039;
                            }
LABEL_1038:
                            sub_1401FF690(v1391);
LABEL_1039:
                            *(_OWORD *)&v1391[7] = *(_OWORD *)v1387.m256i_i8;
                            *(_QWORD *)&v1391[23] = v1387.m256i_i64[2];
                            *(__m128i *)v1394.m256i_i8 = _mm_loadu_si128((const __m128i *)v1391);
                            *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7) = *(_OWORD *)&v1387.m256i_u64[1];
                            v945 = 5;
LABEL_1040:
                            *(_OWORD *)&v1391[16] = *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7);
                            *(__m128i *)&v1391[1] = _mm_load_si128((const __m128i *)&v1394);
                            v1391[0] = v945;
                            v1292 = 1;
                            v1402 = sub_1414D4900(aToolChoice_0, 11, &v1274);
                            sub_1401FF690(v1402);
                            v946 = _mm_loadu_si128((const __m128i *)v1391);
                            v947 = (_OWORD *)v1402;
                            *(__m128i *)(v1402 + 16) = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *v947 = v946;
                            goto LABEL_1041;
                          }
                          v880 = sub_1414D4800(aType_8, 4, v857);
                          if ( !v880 || *(_BYTE *)v880 != 3 )
                            goto LABEL_1041;
                          v883 = *(_QWORD **)(v880 + 16);
                          v884 = *(_QWORD *)(v880 + 24);
                          if ( v884 != 8 )
                          {
                            if ( v884 != 11
                              || *v883 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)v883 + 3) ^ 0x6863726165735F6CLL )
                            {
                              goto LABEL_1041;
                            }
                            v1387.m256i_i64[0] = 0;
                            v1387.m256i_i64[2] = 0;
                            nullsub_1(v883, 0, v881, v882, v1221);
                            v885 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v885 )
                              sub_14176E54B(1, 4);
                            *v885 = 1701869940;
                            v1382.m256i_i64[0] = 4;
                            v1382.m256i_i64[1] = (__int64)v885;
                            v1382.m256i_i64[2] = 4;
                            v1346 = 1;
                            sub_1404A1EA0(v1391, &off_1418552F8);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_1418560F0);
                            }
                            v886 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v886;
                            v1346 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            nullsub_1(v888, v887, v889, v890, v1227);
                            v891 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v891 )
                              sub_14176E54B(1, 4);
                            *v891 = 1701667182;
                            v1382.m256i_i64[0] = 4;
                            v1382.m256i_i64[1] = (__int64)v891;
                            v1382.m256i_i64[2] = 4;
                            v1345 = 1;
                            sub_1404A1EA0(v1391, &off_141855CD0);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_1418560F0);
                            }
                            v892 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v892;
                            v1345 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                            if ( v1391[0] == 0xFF )
                              goto LABEL_1039;
                            goto LABEL_1038;
                          }
                          if ( *v883 != 0x6E6F6974636E7566LL )
                            goto LABEL_1041;
                          v1006 = sub_1414D4800(aFunction_1, 8, v857);
                          if ( !v1006 || (v1007 = sub_1414D4800(aName_7, 4, v1006)) == 0 || *(_BYTE *)v1007 != 3 )
                          {
                            v1007 = sub_1414D4800(aName_7, 4, v857);
                            if ( !v1007 || *(_BYTE *)v1007 != 3 )
                              goto LABEL_1041;
                          }
                          v1008 = *(_QWORD *)(v1007 + 16);
                          v1009 = *(_QWORD *)(v1007 + 24);
                          sub_14019C7D0((unsigned int)v1391, v1009, 0, 1, 1);
                          v1010 = *(__m128i **)&v1391[8];
                          if ( *(_DWORD *)v1391 == 1 )
                            sub_14176E54B(*(_QWORD *)&v1391[8], *(_QWORD *)&v1391[16]);
                          LODWORD(v1282) = v852;
                          HIDWORD(_RAX) = *(_DWORD *)&v1391[20];
                          v1402 = *(_QWORD *)&v1391[16];
                          if ( v1009 )
                            HIDWORD(_RAX) = (unsigned __int64)sub_14172B820(v1402, v1008, v1009) >> 32;
                          v1398 = v1010;
                          v6 = v661;
                          v1012 = v1323.m256i_i64[3];
                          if ( v1323.m256i_i64[3] )
                          {
                            v1013 = v1323.m256i_i64[0];
                            _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v1323.m256i_i64[0]));
                            v1015 = (const __m128i *)(v1323.m256i_i64[0] + 16);
                            while ( 1 )
                            {
                              if ( !(_WORD)_R12D )
                              {
                                do
                                {
                                  v1016 = _mm_load_si128(v1015);
                                  v1013 -= 768;
                                  ++v1015;
                                  _R12D = _mm_movemask_epi8(v1016) ^ 0xFFFF;
                                }
                                while ( !_R12D );
                              }
                              __asm { tzcnt   eax, r12d }
                              if ( *(_QWORD *)(v1013 - 48 * _RAX - 8) == v1009 )
                              {
                                v1017 = v1013 - 48 * _RAX;
                                if ( !(unsigned int)sub_14172BEB0(*(_QWORD *)(v1017 - 16), v1402, v1009) )
                                  break;
                              }
                              _RAX = _R12D & (unsigned int)(_R12D - 1);
                              _R12D &= _R12D - 1;
                              if ( !--v1012 )
                                goto LABEL_1113;
                            }
                            v1253 = v1398;
                            v1252 = v1402;
                            sub_141543F00(v1391, v1017 - 48);
                            if ( v1398 )
                              sub_140001660(v1402, v1398, 1);
                            v1402 = *(_QWORD *)&v1391[8];
                            v1398 = *(__m128i **)v1391;
                            v1009 = *(_QWORD *)&v1391[16];
                          }
LABEL_1113:
                          if ( v1009 == 18 )
                          {
                            if ( _mm_movemask_epi8(
                                   _mm_and_si128(
                                     _mm_cmpeq_epi8(
                                       _mm_cvtsi32_si128(*(unsigned __int16 *)(v1402 + 16)),
                                       (__m128i)xmmword_141803660),
                                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v1402), (__m128i)xmmword_141803650))) == 0xFFFF )
                            {
                              v1018 = (const __m128i *)&qword_141853BC0;
LABEL_1125:
                              v1009 = 10;
                              goto LABEL_1135;
                            }
                          }
                          else
                          {
                            if ( v1009 == 10 )
                            {
                              v1018 = (const __m128i *)&qword_141853BC0;
                              if ( *(_QWORD *)v1402 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v1402 + 8) ^ 0x6863LL )
                                v1018 = (const __m128i *)v1402;
                              goto LABEL_1125;
                            }
                            if ( v1009 <= 0xA )
                            {
                              v1018 = (const __m128i *)v1402;
                              goto LABEL_1135;
                            }
                          }
                          v1021 = _byteswap_uint64(*(_QWORD *)v1402);
                          v1022 = 0x7765625F73656172LL;
                          if ( v1021 != 0x7765625F73656172LL
                            || (v1021 = _byteswap_uint64(*(_QWORD *)(v1402 + 3)),
                                v1022 = 0x5F7365617263685FLL,
                                v1023 = 0,
                                v1021 != 0x5F7365617263685FLL) )
                          {
                            v1023 = 2 * (v1022 >= v1021) - 1;
                          }
                          if ( !v1023 )
                            v1009 = 10;
                          v1018 = (const __m128i *)&qword_141853BC0;
                          if ( v1023 )
                            v1018 = (const __m128i *)v1402;
LABEL_1135:
                          sub_14019C7D0((unsigned int)v1391, v1009, 0, 1, 1);
                          v1024 = *(_QWORD *)&v1391[8];
                          if ( *(_DWORD *)v1391 == 1 )
                          {
                            v1253 = v1398;
                            v1252 = v1402;
                            sub_14176E54B(*(_QWORD *)&v1391[8], *(_QWORD *)&v1391[16]);
                          }
                          v1025 = *(_QWORD *)&v1391[16];
                          v1389 = *(_QWORD *)&v1391[16];
                          if ( v1009 )
                          {
                            sub_14172B820(*(_QWORD *)&v1391[16], v1018, v1009);
                            *(_QWORD *)v1334 = v1024;
                            *(_QWORD *)&v1334[8] = v1024;
                            *(_QWORD *)&v1334[16] = v1025;
                            v1335 = v1009;
                            v1387.m256i_i64[0] = 0;
                            v1387.m256i_i64[2] = 0;
                            nullsub_1(v1027, v1026, v1028, v1029, v1221);
                            v1030 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v1030 )
                              sub_14176E54B(1, 4);
                            *v1030 = 1701869940;
                            v1382.m256i_i64[0] = 4;
                            v1382.m256i_i64[1] = (__int64)v1030;
                            v1382.m256i_i64[2] = 4;
                            v1348 = 1;
                            sub_1404A1EA0(v1391, &off_1418552F8);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_1418560D8);
                            }
                            v1031 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v1031;
                            v1348 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            nullsub_1(v1033, v1032, v1034, v1035, v1228);
                            v1036 = (_DWORD *)sub_140001650(4, 1);
                            if ( !v1036 )
                              sub_14176E54B(1, 4);
                            *v1036 = 1701667182;
                            v1382.m256i_i64[0] = 4;
                            v1382.m256i_i64[1] = (__int64)v1036;
                            v1382.m256i_i64[2] = 4;
                            v1347 = 1;
                            sub_1404A0860(v1391, &v1334[8]);
                            if ( v1391[0] == 0xFF )
                            {
                              v1394.m256i_i64[0] = *(_QWORD *)&v1391[8];
                              sub_14176E860(
                                (unsigned int)aCalledResultUn_15,
                                43,
                                (unsigned int)&v1394,
                                (unsigned int)&off_141851870,
                                (__int64)&off_1418560D8);
                            }
                            v1037 = _mm_loadu_si128((const __m128i *)v1391);
                            *(__m128i *)&v1394.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v1391[16]);
                            *(__m128i *)v1394.m256i_i8 = v1037;
                            v1347 = 0;
                            sub_1401A27E0(v1391, &v1387, &v1382, &v1394);
                            LOBYTE(v661) = v6;
                            LOBYTE(v852) = (_BYTE)v1282;
                            if ( v1391[0] != 0xFF )
                              sub_1401FF690(v1391);
                            *(_OWORD *)&v1391[7] = *(_OWORD *)v1387.m256i_i8;
                            *(_QWORD *)&v1391[23] = v1387.m256i_i64[2];
                            *(__m128i *)v1394.m256i_i8 = _mm_loadu_si128((const __m128i *)v1391);
                            *(_OWORD *)((char *)&v1394.m256i_u64[1] + 7) = *(_OWORD *)&v1387.m256i_u64[1];
                            v945 = 5;
                            v1024 = *(_QWORD *)v1334;
                          }
                          else
                          {
                            *(_QWORD *)&v1334[8] = *(_QWORD *)&v1391[8];
                            v945 = -1;
                            LOBYTE(v661) = v6;
                            LOBYTE(v852) = (_BYTE)v1282;
                          }
                          v1038 = v1398;
                          if ( v1024 )
                            sub_140001660(v1389, v1024, 1);
                          if ( v1038 )
                            sub_140001660(v1402, v1038, 1);
                          if ( v1009 )
                            goto LABEL_1040;
                          goto LABEL_1041;
                        }
                      }
                    }
                  }
                  goto LABEL_795;
                }
                if ( *(_DWORD *)v676 ^ 0x636E6F63 | *(_DWORD *)(v676 + 3) ^ 0x65736963 )
                  goto LABEL_1290;
              }
LABEL_1292:
              v1282 = &unk_14185552B;
              goto LABEL_1293;
            }
          }
          else
          {
            v677 = 0;
          }
          v937 = v677;
          v677 = v672 & 0x7FFFFFFFFFFFFFF8LL;
          v938 = _mm_load_si128((const __m128i *)&xmmword_1417EBCB0);
          v939 = _mm_load_si128((const __m128i *)&xmmword_1417EBCC0);
          v940 = _mm_load_si128((const __m128i *)&xmmword_1417EBCD0);
          do
          {
            v941 = _mm_loadl_epi64((const __m128i *)(v676 + v937));
            v942 = _mm_add_epi8(v941, v938);
            *(_QWORD *)(v676 + v937) = _mm_or_si128(
                                         _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v942, v939), v942), v940),
                                         v941).m128i_u64[0];
            v937 += 8;
          }
          while ( v677 != v937 );
          goto LABEL_1283;
        }
      }
      v661 = *(_QWORD *)(v665 + 16);
      a6 = *(const __m128i **)(v665 + 24);
    }
    v1402 = (__int64)a6;
    goto LABEL_708;
  }
  _RAX = aAnthropicModel;
  v663 = v1257;
  v1257->m128i_i64[1] = (__int64)aAnthropicModel;
  v663[1].m128i_i64[0] = 94;
  v663->m128i_i8[0] = -1;
  if ( v1321 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v1386, v1321, 1) >> 32;
LABEL_649:
  v621 = v1246;
  if ( v1246 )
  {
    v622 = v1247;
    if ( v1247 )
    {
      v623 = v1245;
      v624 = v1245 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v1245));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v626 = _mm_load_si128(v624);
            v623 -= 24;
            ++v624;
            _R15D = _mm_movemask_epi8(v626) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v627 = -3LL * (_QWORD)_RAX;
        v628 = *((_QWORD *)&v623[-1] + v627 - 1);
        if ( v628 )
          sub_140001660(v623[-1].m128i_i64[v627], v628, 1);
        --v622;
        _RAX = (const char *)(_R15D & (unsigned int)(_R15D - 1));
        _R15D &= _R15D - 1;
      }
      while ( v622 );
    }
    v629 = (24 * v621 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v630 = v629 + v621 + 17;
    if ( v630 )
      sub_140001660((char *)v1245 - v629, v630, 16);
  }
  if ( (unsigned __int64)&v1396[-1].m128i_u64[1] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v1322, v1396, 1);
  v631 = v1270;
  v1402 = (__int64)v1271;
  v1396 = nullptr;
  v1386 = v1270;
  while ( (const __m128i *)v1402 != v1396 )
  {
    v1396 = (const __m128i *)((char *)v1396 + 1);
    v632 = v631 + 32;
    ((void (*)(void))sub_1403FF680)();
    v631 = v632;
  }
LABEL_1455:
  if ( v1269 )
    sub_140001660(v1270, 32LL * (_QWORD)v1269, 8);
  return v1257;
}
