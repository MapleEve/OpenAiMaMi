// __ZN13codexmate_lib4core5relay10translator25responses_to_chat_request @ 0x100852ed0 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::translator::responses_to_chat_request::h058cf2d5ed326101(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        size_t a4,
        int a5)
{
  __int64 v5; // r12
  __int64 v7; // rax
  const void *v8; // rsi
  size_t v9; // rbx
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rax
  __m256i *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m256i *p_b; // rsi
  _DWORD *v18; // rax
  const void *v19; // r14
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // r13
  char *v26; // rcx
  size_t v27; // rdx
  char *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  char *v33; // rbx
  __m128i v34; // xmm1
  __int64 v35; // rax
  int v36; // ecx
  signed __int64 v37; // r12
  const void *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  __int128 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rsi
  const char *v48; // rdi
  __int64 v49; // rax
  const void *v50; // r15
  __int64 v51; // rcx
  __m128i v52; // xmm1
  __int64 v53; // rax
  const void *v54; // r15
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // r14
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  __m256i *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __m256i *v64; // rsi
  __int64 v65; // rsi
  __m256i *v66; // rdi
  unsigned __int8 *v67; // rax
  int v68; // ecx
  void *v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // r14
  _DWORD *v72; // rax
  _DWORD *v73; // rax
  __m256i *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __m256i *v78; // rsi
  void *v79; // rax
  __int64 v80; // r14
  __int64 v81; // rax
  __m256i *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __m256i *v86; // rsi
  void *v87; // rax
  __int64 v88; // r14
  __int64 v89; // rax
  __m256i *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __m256i *v94; // rsi
  _DWORD *v95; // rax
  __int64 v96; // rdx
  _DWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rbx
  void *v100; // rdi
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // r15
  char *v104; // rbx
  __int64 v105; // rax
  int v106; // r15d
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // r12
  char v110; // r14
  size_t v111; // rdi
  __int64 v112; // r15
  __int64 v113; // rax
  size_t v114; // r14
  signed __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // r14
  __int64 v118; // rax
  __int64 v119; // r12
  __int64 v120; // r14
  _DWORD *v121; // rax
  _DWORD *v122; // rax
  void *v123; // rax
  __int64 v124; // rbx
  void *v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // r14
  _WORD *v128; // rax
  __int64 v129; // r14
  size_t v130; // rbx
  __int64 v131; // rax
  __m256i *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __m256i *v136; // rsi
  _DWORD *v137; // rax
  _QWORD *v138; // rax
  __m256i *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rdx
  __m256i *v143; // rsi
  _QWORD *v144; // rax
  __int64 v145; // r14
  _DWORD *v146; // rax
  __int64 v147; // r14
  __int64 v148; // rax
  __int64 v149; // rbx
  __m256i *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rdx
  __m256i *v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rbx
  __int64 v157; // rax
  __int64 v158; // r14
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rax
  __m256i *v168; // rdi
  __int64 v169; // rax
  size_t v170; // r14
  __int64 v171; // r15
  __int64 v172; // r14
  _DWORD *v173; // rax
  __int64 v174; // rax
  __int64 v175; // r14
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rax
  _DWORD *v181; // rax
  _DWORD *v182; // rax
  __int64 v183; // r15
  __int64 v184; // r14
  _DWORD *v185; // rax
  __int64 v186; // r15
  __int64 v187; // rax
  __int64 v188; // r14
  __int64 v189; // rbx
  __m256i *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rcx
  __int64 v193; // rdx
  __m256i *v194; // rsi
  _DWORD *v195; // rax
  size_t v196; // rbx
  __int64 v197; // rdx
  __int64 v198; // r14
  __int64 v199; // rax
  __int64 v200; // rcx
  __int64 v201; // rdx
  __m256i *v202; // rdi
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rdx
  __int64 v206; // rsi
  __int64 v207; // rdx
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // r14
  _DWORD *v211; // rax
  __int64 v212; // rax
  __m256i *v213; // rdi
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rdx
  __m256i *v217; // rsi
  _DWORD *v218; // rax
  __m256i *v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rdx
  __m256i *v223; // rsi
  void *v224; // rax
  __int64 v225; // rax
  __m256i *v226; // r15
  __int64 v227; // rdx
  __int64 v228; // rbx
  __int64 v229; // rsi
  __m256i *v230; // rbx
  __int64 v231; // rbx
  __int64 v232; // rax
  __int64 v233; // rbx
  __int64 v234; // r14
  __int64 v235; // rax
  __m256i *v236; // rbx
  __m256i *v237; // rbx
  __int64 v238; // rax
  const void *v239; // r15
  __int64 v240; // rcx
  char v241; // r12
  __int64 v242; // rax
  char *v243; // rbx
  __int64 v244; // rcx
  __int64 v245; // r15
  __int64 *v246; // rax
  __int64 v247; // rsi
  __m256i *v248; // rdi
  _WORD *v249; // rax
  __int64 *v250; // rsi
  __int64 v251; // rax
  __m256i *v252; // rdi
  _QWORD *v253; // rbx
  _WORD *v254; // rax
  _QWORD *v255; // r15
  __int64 v256; // rsi
  __int64 v257; // rbx
  _WORD *v258; // rax
  __int64 v259; // r15
  size_t v260; // r12
  __int64 v261; // rax
  __m256i *v262; // rdi
  __int64 v263; // rax
  __int64 v264; // rcx
  __int64 v265; // rdx
  __m256i *v266; // rsi
  _DWORD *v267; // rax
  _QWORD *v268; // rax
  __m256i *v269; // rdi
  __int64 v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rdx
  __m256i *v273; // rsi
  _QWORD *v274; // rax
  __int64 v275; // rbx
  _DWORD *v276; // rax
  __int64 v277; // r15
  __int64 v278; // rax
  __int64 v279; // rbx
  __m256i *v280; // rdi
  __int64 v281; // rax
  __int64 v282; // rcx
  __int64 v283; // rdx
  __m256i *v284; // rsi
  __int64 v285; // rax
  __int64 v286; // r12
  __int64 v287; // rax
  __int64 v288; // rbx
  size_t v289; // r15
  __int64 v290; // rdx
  __m256i *v291; // rdi
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rsi
  __int64 v296; // rax
  size_t v297; // rbx
  const void *v298; // r14
  __int64 v299; // rdx
  __int64 v300; // rdx
  __int64 v301; // rax
  __int64 v302; // r14
  _DWORD *v303; // rax
  __int64 v304; // rax
  __m256i *v305; // rdi
  __int64 v306; // rax
  __int64 v307; // rcx
  __int64 v308; // rdx
  __m256i *v309; // rsi
  _DWORD *v310; // rax
  __m256i *v311; // rdi
  __int64 v312; // rax
  __int64 v313; // rcx
  __int64 v314; // rdx
  __m256i *v315; // rsi
  void *v316; // rax
  __int64 v317; // rax
  __m256i *v318; // r15
  __int64 v319; // rdx
  char v320; // bl
  __m256i *v321; // rbx
  __int64 v322; // r14
  void *v323; // rsi
  size_t v324; // rbx
  __int64 v325; // rbx
  __int64 v326; // rax
  __int64 v327; // r14
  __int64 v328; // r15
  char v329; // r14
  __int64 v330; // rax
  __m256i *v331; // r15
  __m256i *v332; // r15
  __int64 v333; // rax
  __m256i *v334; // rbx
  unsigned __int64 v335; // r13
  __int64 v336; // rax
  __int64 v337; // rbx
  __int64 v338; // rax
  __int64 v339; // rdi
  void *v340; // rsi
  __int64 v341; // r14
  __int64 v342; // rbx
  __int64 v343; // rax
  __int64 v344; // r15
  __int64 v345; // rax
  __m256i *v346; // rdi
  __int64 v347; // rax
  __int64 v348; // rcx
  __int64 v349; // rdx
  __m256i *v350; // rsi
  _QWORD *v351; // rax
  __int64 v352; // rdx
  __int64 v353; // rax
  __int64 v354; // rcx
  __int64 v355; // rsi
  size_t v356; // rsi
  __m256i *v357; // rbx
  __int64 v358; // rax
  __int64 v359; // rcx
  __int64 v360; // rsi
  __m256i *v361; // rbx
  __int64 v362; // rax
  __int64 v363; // rcx
  __int64 v364; // rsi
  __m256i *v365; // rbx
  __int64 v366; // rax
  __int64 v367; // rcx
  __int64 v368; // rsi
  __m256i *v369; // rbx
  __int64 v370; // rbx
  __int64 v371; // rax
  __int64 v372; // rax
  __int64 v373; // rsi
  __int64 v374; // rsi
  __m256i *v375; // rbx
  __int64 v376; // rax
  __int64 v377; // rcx
  __int64 v378; // rsi
  __m256i *v379; // rbx
  __int64 v380; // rax
  __int64 v381; // rcx
  __int64 v382; // rsi
  __m256i *v383; // rbx
  __int64 v384; // rax
  __int64 v385; // rdx
  __int64 v386; // rcx
  __int64 v387; // rbx
  __int64 v388; // rax
  __int64 v389; // rdx
  __m256i *v390; // rdi
  _BYTE *v391; // rax
  __int64 v392; // rdx
  __int64 v393; // rcx
  _QWORD *v394; // rbx
  __int64 v395; // rsi
  __int64 v396; // rax
  __int64 v397; // rdx
  __int64 v398; // r13
  __int64 v399; // r13
  __int64 v401; // rax
  __int64 v402; // rax
  __int64 v403; // rcx
  char *v404; // r15
  __int64 v405; // rax
  void *v406; // r14
  void *v407; // rsi
  __int64 v408; // rax
  void *v409; // rbx
  __int64 v410; // rcx
  const __m128i *v411; // rax
  const __m128i *v412; // rsi
  __int64 v413; // r8
  __int64 v414; // r9
  char v417; // r9
  __int64 v418; // r11
  unsigned __int64 v419; // rdi
  __int64 v420; // r11
  __int64 v422; // rcx
  char *v423; // r13
  __int64 v424; // rax
  __int64 v425; // r9
  __int128 v426; // kr40_16
  size_t v427; // r15
  __int64 v428; // rax
  __int64 v429; // rcx
  size_t v430; // rax
  __int64 v431; // rax
  void *v432; // rbx
  __int64 v433; // rbx
  __int64 v434; // r15
  __m256i *v435; // rax
  __m256i *v436; // r14
  __int64 v437; // r15
  void *v438; // r15
  __int64 v439; // rsi
  __int64 v440; // rax
  void *v441; // rbx
  __m256i *i; // rdi
  char *v443; // rsi
  __int64 v444; // rax
  unsigned __int64 v445; // rax
  __int64 v446; // rdx
  __int64 v447; // r15
  __m128i si128; // xmm1
  size_t v449; // rax
  __m128i v450; // xmm2
  __int64 v452; // r13
  size_t v453; // r14
  char *v454; // rax
  int v455; // eax
  __int64 v456; // r15
  bool v457; // cf
  __int64 v458; // r15
  __int64 v459; // rax
  void *v460; // rax
  __int64 v461; // rax
  __int64 v462; // rsi
  __int64 v463; // rax
  __int64 v464; // rcx
  __int64 v465; // r12
  _DWORD *v466; // rax
  __int64 v467; // rax
  __m256i *v468; // rdi
  __int64 v469; // rax
  __int64 v470; // rcx
  __int64 v471; // rdx
  __m256i *v472; // rsi
  void *v473; // rax
  __int64 v474; // rax
  __int64 v475; // rcx
  __int64 v476; // rdx
  __int64 v477; // r12
  _DWORD *v478; // rax
  __m256i *v479; // rdi
  __int64 v480; // rax
  __int64 v481; // rcx
  __int64 v482; // rdx
  __m256i *v483; // rsi
  void *v484; // rax
  __int64 v485; // r12
  __int64 v486; // rax
  __int64 v487; // r15
  __int64 v488; // rax
  __int64 v489; // rcx
  __int64 v490; // rdx
  void *v491; // rax
  __int64 v492; // rdx
  __int64 v493; // rsi
  __m256i *v494; // rdi
  _BYTE *v495; // rax
  __int64 v496; // rax
  __int64 v497; // rax
  __int64 v498; // rcx
  __int64 v499; // rdx
  __int64 v500; // r15
  _DWORD *v501; // rax
  _QWORD *v502; // rax
  __m256i *v503; // rdi
  __int64 v504; // rax
  __int64 v505; // rcx
  __int64 v506; // rdx
  __m256i *v507; // rsi
  _QWORD *v508; // rax
  __int64 v509; // rdx
  __int64 v510; // rbx
  __int64 v511; // rax
  __int64 v512; // rcx
  __int64 v513; // rsi
  __int64 v514; // rax
  __int64 v515; // rdx
  __int64 v516; // r14
  __int64 v517; // r15
  __int64 v518; // rax
  __int64 v519; // r15
  __int64 v520; // rbx
  __int8 v521; // al
  __int64 v522; // rax
  __int64 v523; // rax
  __int64 v524; // rsi
  signed __int64 v525; // r12
  __int64 v526; // r14
  void *v527; // r14
  __int64 v528; // r14
  __int64 v529; // rax
  __int64 v530; // rcx
  __int128 v531; // krD0_16
  __int64 v532; // rax
  __int64 v533; // rdi
  __int128 v535; // krE0_16
  void *v536; // r12
  __int64 v537; // r15
  __int64 v538; // r13
  __int64 v539; // r14
  const __m128i *v541; // rbx
  int v542; // r12d
  __int64 v543; // rax
  __int64 v544; // rsi
  unsigned __int64 v545; // rax
  unsigned __int64 v546; // r15
  unsigned __int64 v547; // r15
  __m256i *v548; // rbx
  __int64 v549; // rbx
  __int64 v550; // r14
  __int64 v551; // r15
  const __m128i *v553; // r12
  int v554; // r13d
  __int64 v556; // rax
  __int64 v557; // rsi
  __int64 v558; // rax
  __int64 v559; // rbx
  __int64 v560; // rbx
  __int64 v561; // rax
  bool v562; // bl
  unsigned __int8 *v563; // rax
  int v564; // r12d
  _QWORD *v565; // rcx
  __int64 v566; // rdx
  unsigned __int8 *v567; // rbx
  __int64 v568; // rax
  __int64 v569; // rax
  __int64 v570; // rcx
  __int64 v571; // rax
  __int64 v572; // r14
  _DWORD *v573; // rax
  _QWORD *v574; // rax
  _DWORD *v575; // rax
  __int64 v576; // rax
  char **v577; // rbx
  __int64 v578; // rax
  const void *v579; // r13
  size_t v580; // r14
  char *v582; // rcx
  size_t v583; // rbx
  __int64 v584; // r12
  const __m128i *v585; // r14
  int v587; // r15d
  __int64 v588; // r13
  const void *v589; // rdi
  int v590; // eax
  __m256i *v591; // r14
  __m256i *v592; // rbx
  __int64 v593; // rax
  __int64 v594; // rcx
  __int64 v595; // rsi
  __m256i *v596; // rbx
  _BYTE *v597; // rax
  void *v598; // rax
  __int64 v599; // rdx
  __m256i *v600; // rbx
  __int64 v601; // rax
  __int64 v602; // rcx
  __int64 v603; // rsi
  __m256i *v604; // r15
  __int64 v605; // rax
  __int64 v606; // rcx
  __int64 v607; // rsi
  __m256i *v608; // r15
  __int64 v609; // rax
  __int64 v610; // rcx
  __int64 v611; // rsi
  __m256i *v612; // r15
  __int64 v613; // rax
  __int64 v614; // rcx
  __int64 v615; // rsi
  __m256i *v616; // r15
  __int64 v617; // rdx
  _QWORD *v618; // r12
  char *v619; // rcx
  bool v620; // zf
  __int64 v621; // rsi
  __int64 v622; // rax
  __int64 v623; // rdx
  unsigned __int64 v624; // rbx
  __int64 v625; // r13
  unsigned __int64 v627; // rcx
  __int64 v628; // rbx
  __int64 v629; // r15
  const __m128i *v631; // r14
  int v632; // r12d
  __int64 v633; // rax
  __int64 v634; // rsi
  __int64 v635; // rbx
  void *v636; // r15
  const __m128i *v638; // r14
  __int64 v639; // r13
  int v640; // r12d
  __int64 v641; // rax
  __int64 v642; // rsi
  unsigned __int64 v643; // rbx
  unsigned __int64 v644; // rbx
  unsigned __int64 v645; // rsi
  __int64 v646; // rax
  __int64 v647; // rcx
  __int64 v648; // rsi
  size_t v649; // r15
  unsigned __int64 v650; // rbx
  char *v652; // rsi
  __m128i v653; // xmm1
  __int64 v654; // r14
  size_t j; // rdi
  unsigned __int64 v656; // rbx
  __m128i v657; // xmm2
  __int64 v659; // rax
  unsigned __int64 v660; // rbx
  unsigned __int64 v661; // rax
  unsigned __int64 v662; // rbx
  __int64 v663; // rdi
  __int8 v664; // r14
  __int64 v665; // r14
  __int64 v666; // r15
  __int64 k; // r14
  __int64 v668; // rax
  __int64 v669; // r13
  signed __int64 v670; // rbx
  void *v671; // rsi
  __int64 v672; // r13
  __int64 v673; // rbx
  __int64 v674; // r14
  __int64 v675; // r15
  const __m128i *v677; // r12
  int v678; // r13d
  __int64 v679; // rax
  __int64 v680; // rsi
  unsigned __int64 v681; // rax
  unsigned __int64 v682; // rbx
  unsigned __int64 v683; // rbx
  unsigned __int64 v684; // r13
  unsigned __int64 v685; // rbx
  __int64 v686; // rbx
  __int64 v687; // rax
  __int64 v688; // rax
  __int64 v689; // rcx
  unsigned __int64 v690; // rsi
  __int64 v691; // rax
  __int64 v692; // rax
  __int64 v693; // rdx
  __int64 v694; // rcx
  __int64 v695; // rsi
  __int64 v696; // rax
  __int64 v697; // rdx
  unsigned __int64 v698; // r13
  __int64 v699; // rbx
  __int64 v700; // rax
  __int64 v701; // rcx
  unsigned __int64 v702; // rsi
  __int64 v703; // rax
  void *v704; // r15
  _QWORD *v705; // r14
  const void *v706; // r12
  __int64 v707; // rax
  const void *v708; // rsi
  void *v709; // r12
  _QWORD *v710; // rdi
  __int64 v711; // r8
  __int8 v712; // al
  _BYTE *v713; // r12
  void *v714; // rdx
  char *v715; // rcx
  unsigned __int64 v716; // r15
  char **v717; // r8
  __int64 v718; // rbx
  __int64 v719; // rcx
  unsigned __int64 v720; // r14
  void *v721; // r10
  __int64 v722; // rcx
  __int64 v723; // rax
  __m256i *v724; // rbx
  char *v725; // rcx
  __int64 v727; // r15
  __int64 v728; // rbx
  const __m128i *v730; // r12
  int v731; // r14d
  __int64 v732; // rax
  __int64 v733; // rsi
  unsigned __int64 v734; // rax
  _QWORD *v735; // rbx
  char *v736; // r14
  __int64 v737; // rsi
  __int64 v738; // r13
  __int64 v739; // rbx
  __int64 v740; // r15
  __int64 v741; // r12
  __int64 v742; // rax
  __int64 v743; // rax
  __int64 v744; // rdi
  __int64 v745; // rax
  __int64 v746; // rax
  void *v747; // rax
  __m256i *v748; // r12
  __int64 v749; // rsi
  __int64 v750; // rax
  __int64 v751; // rbx
  __int64 v752; // r14
  __int64 v753; // rax
  __int64 v754; // r12
  __int64 v755; // r14
  unsigned __int64 v756; // rdx
  __int64 v757; // rax
  __int64 v758; // rbx
  __int64 v759; // rax
  __int64 v760; // rcx
  unsigned __int64 v761; // rdx
  __int64 v762; // rax
  void *v763; // rbx
  void *v764; // rax
  void *v765; // rsi
  __int64 v766; // rbx
  __int64 v767; // rax
  __int64 v768; // rcx
  __int64 v769; // r9
  __int64 v770; // r15
  _DWORD *v771; // rax
  __int64 v772; // rax
  __m256i *v773; // rdi
  __int64 v774; // rax
  __int64 v775; // rcx
  __int64 v776; // rdx
  __m256i *v777; // rsi
  __int64 v778; // r15
  _DWORD *v779; // rax
  __int64 v780; // rsi
  __int64 v781; // rbx
  size_t v782; // r14
  __int64 v783; // r15
  __int64 v784; // rax
  __int64 v785; // r12
  __int64 v786; // r15
  _QWORD *v787; // rbx
  __int64 v788; // rdx
  __int64 v789; // r15
  __int128 v790; // kr110_16
  size_t v791; // r13
  unsigned __int64 v792; // rbx
  __int64 v793; // rbx
  _QWORD *v794; // r14
  __int64 v795; // rsi
  __int64 v796; // rdx
  __int64 v797; // rax
  __int64 v798; // rcx
  __int64 v799; // rdi
  __int64 m; // r14
  __int64 v802; // rdi
  char **v803; // rdi
  char **v804; // rdx
  __int64 v805; // rdi
  __int64 v806; // rdi
  _QWORD v807[3]; // [rsp+0h] [rbp-3E0h] BYREF
  _QWORD v808[2]; // [rsp+18h] [rbp-3C8h] BYREF
  unsigned __int64 v809; // [rsp+28h] [rbp-3B8h]
  __int64 v810; // [rsp+30h] [rbp-3B0h]
  __int128 v811; // [rsp+38h] [rbp-3A8h]
  void *v812; // [rsp+48h] [rbp-398h] BYREF
  size_t v813; // [rsp+50h] [rbp-390h]
  __int128 v814; // [rsp+58h] [rbp-388h] BYREF
  __int64 v815; // [rsp+68h] [rbp-378h]
  __int64 v816; // [rsp+70h] [rbp-370h]
  __int64 v817; // [rsp+78h] [rbp-368h] BYREF
  __int128 v818; // [rsp+80h] [rbp-360h]
  __int64 v819; // [rsp+90h] [rbp-350h] BYREF
  __int128 v820; // [rsp+98h] [rbp-348h]
  __int64 v821; // [rsp+A8h] [rbp-338h]
  __int64 v822; // [rsp+B0h] [rbp-330h]
  __int128 v823; // [rsp+B8h] [rbp-328h] BYREF
  __int64 v824; // [rsp+C8h] [rbp-318h]
  __int128 v825; // [rsp+D0h] [rbp-310h] BYREF
  size_t v826; // [rsp+E0h] [rbp-300h]
  void *v827; // [rsp+E8h] [rbp-2F8h]
  size_t v828[2]; // [rsp+F0h] [rbp-2F0h] BYREF
  __int64 v829; // [rsp+108h] [rbp-2D8h] BYREF
  __int128 v830; // [rsp+110h] [rbp-2D0h]
  __m128i v831; // [rsp+120h] [rbp-2C0h] BYREF
  void *v832; // [rsp+138h] [rbp-2A8h]
  void *v833; // [rsp+140h] [rbp-2A0h]
  void *v834; // [rsp+148h] [rbp-298h]
  __m128i v835; // [rsp+150h] [rbp-290h]
  __m256i v836; // [rsp+168h] [rbp-278h] BYREF
  void *v837; // [rsp+188h] [rbp-258h]
  void *v838; // [rsp+190h] [rbp-250h]
  __int64 v839; // [rsp+198h] [rbp-248h] BYREF
  __int128 v840; // [rsp+1A0h] [rbp-240h] BYREF
  __int64 v841; // [rsp+1B0h] [rbp-230h]
  size_t v842; // [rsp+1B8h] [rbp-228h]
  char **v843; // [rsp+1C0h] [rbp-220h]
  size_t v844; // [rsp+1C8h] [rbp-218h]
  size_t v845[2]; // [rsp+1D0h] [rbp-210h] BYREF
  __int64 v846; // [rsp+1E0h] [rbp-200h] BYREF
  __int64 v847; // [rsp+1E8h] [rbp-1F8h]
  __int64 v848; // [rsp+1F0h] [rbp-1F0h]
  void *__dst; // [rsp+1F8h] [rbp-1E8h]
  void *v850; // [rsp+200h] [rbp-1E0h]
  __int64 v851; // [rsp+208h] [rbp-1D8h] BYREF
  __int128 v852; // [rsp+210h] [rbp-1D0h]
  __int64 v853; // [rsp+220h] [rbp-1C0h]
  size_t v854; // [rsp+228h] [rbp-1B8h]
  size_t v855[2]; // [rsp+230h] [rbp-1B0h] BYREF
  unsigned __int64 v856; // [rsp+240h] [rbp-1A0h]
  void *v857; // [rsp+248h] [rbp-198h]
  __m256i v858; // [rsp+250h] [rbp-190h] BYREF
  __int64 v859; // [rsp+270h] [rbp-170h]
  __int64 v860; // [rsp+278h] [rbp-168h]
  void *__s2; // [rsp+280h] [rbp-160h]
  void *v862; // [rsp+288h] [rbp-158h]
  __m256i v863; // [rsp+290h] [rbp-150h] BYREF
  __m256i v864; // [rsp+2B0h] [rbp-130h] BYREF
  void *v865; // [rsp+2D0h] [rbp-110h]
  __m256i v866; // [rsp+2D8h] [rbp-108h] BYREF
  __m256i v867; // [rsp+2F8h] [rbp-E8h] BYREF
  _QWORD v868[2]; // [rsp+318h] [rbp-C8h] BYREF
  __m256i v869; // [rsp+328h] [rbp-B8h] BYREF
  unsigned __int64 v870; // [rsp+348h] [rbp-98h]
  __int64 v871; // [rsp+350h] [rbp-90h]
  __int64 v872; // [rsp+358h] [rbp-88h]
  __m256i v873; // [rsp+360h] [rbp-80h] BYREF
  __m256i __b; // [rsp+380h] [rbp-60h] BYREF
  unsigned __int64 v875; // [rsp+3A0h] [rbp-40h] BYREF
  __int64 v876; // [rsp+3A8h] [rbp-38h]
  __int64 v877; // [rsp+3B0h] [rbp-30h]

  LODWORD(v850) = a5;
  v842 = a4;
  v857 = a3;
  v816 = a1;
  v846 = 0;
  v847 = 8;
  v848 = 0;
  v7 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("instructions", 12, a2);
  if ( v7 && *(_BYTE *)v7 == 3 )
  {
    v8 = *(const void **)(v7 + 16);
    codexmate_lib::core::relay::translator::strip_billing_header::h742dc2e7fc7a94c2(v863.i64, v8, *(_QWORD *)(v7 + 24));
    v9 = v863.u64[2];
    if ( v863.i64[2] )
    {
      v864.i64[0] = 0;
      v864.i64[2] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v863, v8);
      v10 = 4;
      v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v11 )
        goto LABEL_1282;
      *v11 = 1701605234;
      v866.i64[0] = 4;
      v866.i64[1] = (__int64)v11;
      v866.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v12 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
      *(_WORD *)(v12 + 4) = 28005;
      *(_DWORD *)v12 = 1953724787;
      v873.i8[0] = 3;
      v873.i64[1] = 6;
      v873.i64[2] = v12;
      v873.i64[3] = 6;
      v13 = &v869;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v864, &v866);
      if ( __OFSUB__(0, v869.i64[0]) )
      {
        v14 = v869.i64[1];
        v15 = 32 * v869.i64[3];
        v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
        v16 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
        v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
        v867.i64[0] = v16;
        *(_OWORD *)(v869.i64[1] + v15 + 16) = v873.i128[1];
        p_b = (__m256i *)v873.i64[1];
        *(_OWORD *)(v14 + v15) = v873.i128[0];
        if ( v867.i8[0] != 6 )
        {
          v13 = &v867;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
        }
      }
      else
      {
        v877 = v872;
        v876 = v871;
        v875 = v870;
        __b = v869;
        v858 = v873;
        v13 = &v867;
        p_b = &__b;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v867,
          &__b,
          &v858);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, p_b);
      v10 = 7;
      v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v18 )
LABEL_1282:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10);
      *(_DWORD *)((char *)v18 + 3) = 1953391988;
      *v18 = 1953394531;
      v866.i64[0] = 7;
      v866.i64[1] = (__int64)v18;
      v866.i64[2] = 7;
      v19 = (const void *)v863.i64[1];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1);
      if ( !v20 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9);
      v5 = (__int64)v20;
      memcpy(v20, v19, v9);
      v873.i8[0] = 3;
      v873.i64[1] = v9;
      v873.i64[2] = v5;
      v873.i64[3] = v9;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v864, &v866);
      if ( v869.i64[0] == 0x8000000000000000LL )
      {
        v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
        v21 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
        v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
        v867.i64[0] = v21;
        *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
        if ( v867.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
      }
      else
      {
        v877 = v872;
        v876 = v871;
        v875 = v870;
        __b = v869;
        v858 = v873;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v867,
          &__b,
          &v858);
      }
      __b.i64[1] = v864.i64[0];
      __b.i128[1] = *(__int128 *)((char *)v864.i128 + 8);
      __b.i8[0] = 5;
      v22 = v848;
      if ( v848 == v846 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
      *(__m256i *)(v847 + 32 * v22) = __b;
      v848 = v22 + 1;
    }
    if ( v863.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v863.i64[1], v863.i64[0], 1);
  }
  v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          &anon_10420c9971c21f44d230d15b39fb3fec_146,
          5,
          a2);
  v856 = a2;
  if ( v23 )
  {
    if ( *(_BYTE *)v23 == 4 )
    {
      v24 = *(_QWORD *)(v23 + 24);
      if ( v24 )
      {
        v25 = *(char **)(v23 + 16);
        v26 = &v25[32 * v24];
        v27 = 0x745F6D6F74737563LL;
        v835 = _mm_unpacklo_epi64((__m128i)0x745F6D6F74737563uLL, (__m128i)0x6C6C61635F6C6F6FuLL);
LABEL_25:
        __s2 = (void *)v27;
        v843 = (char **)v5;
        v865 = (void *)0x8000000000000000LL;
        v5 = (__int64)v26;
        while ( 2 )
        {
          v28 = v25;
          v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &anon_10420c9971c21f44d230d15b39fb3fec_75,
                  4,
                  v25);
          v25 += 32;
          if ( !v29 || *(_BYTE *)v29 != 3 )
            goto LABEL_27;
          v30 = *(_QWORD *)(v29 + 24) - 7LL;
          v31 = *(_QWORD *)(v29 + 16);
          switch ( v30 )
          {
            case 0LL:
              if ( *(_DWORD *)v31 ^ 0x7373656D | *(_DWORD *)(v31 + 3) ^ 0x65676173 )
                goto LABEL_27;
              v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                      4,
                      v28);
              v855[0] = 4;
              if ( v32 )
              {
                v33 = "usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                if ( *(_BYTE *)v32 == 3 )
                {
                  v33 = *(char **)(v32 + 16);
                  v855[0] = *(_QWORD *)(v32 + 24);
                  if ( v855[0] == 9 )
                  {
                    v620 = (*(_QWORD *)v33 ^ 0x65706F6C65766564LL | (unsigned __int8)v33[8] ^ 0x72LL) == 0;
                    v855[0] = 3LL * ((*(_QWORD *)v33 ^ 0x65706F6C65766564LL | (unsigned __int8)v33[8] ^ 0x72LL) != 0)
                            + 6;
                    if ( v620 )
                      v33 = "systeminstructions";
                  }
                }
              }
              else
              {
                v33 = "usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
              }
              v65 = 7;
              v66 = (__m256i *)"contentpattern.output_modehead_limit";
              v67 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                         "contentpattern.output_modehead_limit",
                                         7,
                                         v28);
              if ( !v67 )
                goto LABEL_81;
              v68 = *v67;
              if ( v68 != 4 )
              {
                if ( v68 == 3 && *((_QWORD *)v67 + 3) )
                {
                  v66 = (__m256i *)&v864.u32[2];
                  v65 = (__int64)(v67 + 8);
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    &v864.u32[2],
                    v67 + 8);
                  v864.i8[0] = 3;
                  goto LABEL_264;
                }
LABEL_81:
                v864.i8[0] = 0;
LABEL_82:
                if ( v855[0] == 9 && !(*(_QWORD *)v33 ^ 0x6E61747369737361LL | (unsigned __int8)v33[8] ^ 0x74LL) )
                {
                  v69 = (void *)0x8000000000000000LL;
                  if ( v865 != (void *)0x8000000000000000LL )
                  {
                    v866.i64[0] = (__int64)v865;
                    v866.i64[1] = v831.i64[0];
                    v866.i64[2] = v821;
                    v873.i64[0] = 0;
                    v873.i64[2] = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v65);
                    v120 = 4;
                    v121 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v121 )
                      goto LABEL_1320;
                    *v121 = 1701605234;
                    v858.i64[0] = 4;
                    v858.i64[1] = (__int64)v121;
                    v858.i64[2] = 4;
                    serde_json::value::to_value::h29e3c39dc75a9151(&__b, &off_10196C970);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196C9F8);
                    }
                    v869 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &__b,
                      &v873,
                      &v858,
                      &v869);
                    if ( __b.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, &v873);
                    v120 = 7;
                    v122 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                    if ( !v122 )
                      goto LABEL_1320;
                    *(_DWORD *)((char *)v122 + 3) = 1953391988;
                    *v122 = 1953394531;
                    v858.i64[0] = 7;
                    v858.i64[1] = (__int64)v122;
                    v858.i64[2] = 7;
                    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                      &__b,
                      &unk_101674E38);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196C9F8);
                    }
                    v869 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &__b,
                      &v873,
                      &v858,
                      &v869);
                    if ( __b.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, &v873);
                    v120 = 17;
                    v123 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
                    if ( !v123 )
LABEL_1320:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v120);
                    qmemcpy(v123, "reasoning_content", 17);
                    v858.i64[0] = 17;
                    v858.i64[1] = (__int64)v123;
                    v858.i64[2] = 17;
                    serde_json::value::to_value::hf4a5c51664f5d8d6(&__b, &v866);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196C9F8);
                    }
                    v869 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &__b,
                      &v873,
                      &v858,
                      &v869);
                    if ( __b.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                    v867.i128[1] = *(__int128 *)((char *)v873.i128 + 8);
                    v867.i64[1] = v873.i64[0];
                    v867.i8[0] = 5;
                    v124 = v848;
                    if ( v848 == v846 )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
                    *(__m256i *)(v847 + 32 * v124) = v867;
                    v848 = v124 + 1;
                    if ( v865 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v831.i64[0], v865, 1);
                    v69 = (void *)0x8000000000000000LL;
                  }
                }
                else
                {
                  v69 = v865;
                }
                v865 = v69;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
                goto LABEL_86;
              }
              v862 = (void *)v5;
              v863.i64[0] = 0;
              *(__int128 *)((char *)v863.i128 + 8) = 8u;
              v107 = *((_QWORD *)v67 + 3);
              if ( !v107 )
                goto LABEL_260;
              v845[0] = (size_t)v33;
              v108 = *((_QWORD *)v67 + 2);
              v109 = 32 * v107;
              v110 = 0;
              do
              {
                v65 = 4;
                v66 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                v161 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &anon_10420c9971c21f44d230d15b39fb3fec_75,
                         4,
                         v108);
                if ( !v161 || *(_BYTE *)v161 != 3 )
                  goto LABEL_213;
                v162 = *(_QWORD *)(v161 + 16);
                v163 = *(_QWORD *)(v161 + 24);
                if ( v163 != 11 )
                {
                  if ( v163 != 10 || *(_QWORD *)v162 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v162 + 8) ^ 0x7478LL )
                    goto LABEL_213;
LABEL_243:
                  v65 = 4;
                  v66 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_110;
                  v178 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           &anon_10420c9971c21f44d230d15b39fb3fec_110,
                           4,
                           v108);
                  if ( v178 )
                  {
                    if ( *(_BYTE *)v178 == 3 )
                    {
                      v179 = *(_QWORD *)(v178 + 16);
                      v180 = *(_QWORD *)(v178 + 24);
                      v836.i64[0] = v179;
                      v836.i64[1] = v180;
                      if ( v180 )
                      {
                        v873.i64[0] = 0;
                        v873.i64[2] = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                          &anon_10420c9971c21f44d230d15b39fb3fec_110,
                          4);
                        v181 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v181 )
                          goto LABEL_1328;
                        *v181 = 1701869940;
                        v858.i64[0] = 4;
                        v858.i64[1] = (__int64)v181;
                        v858.i64[2] = 4;
                        serde_json::value::to_value::h29e3c39dc75a9151(&__b, &off_10196C7F8);
                        if ( __b.i8[0] == 6 )
                        {
                          v869.i64[0] = __b.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                            43,
                            &v869,
                            &off_10196D480,
                            &off_10196C808);
                        }
                        v869 = __b;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &__b,
                          &v873,
                          &v858,
                          &v869);
                        if ( __b.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, &v873);
                        v182 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v182 )
LABEL_1328:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                        *v182 = 1954047348;
                        v858.i64[0] = 4;
                        v858.i64[1] = (__int64)v182;
                        v858.i64[2] = 4;
                        serde_json::value::to_value::h29e3c39dc75a9151(&__b, &v836);
                        if ( __b.i8[0] == 6 )
                        {
                          v869.i64[0] = __b.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                            43,
                            &v869,
                            &off_10196D480,
                            &off_10196C808);
                        }
                        v869 = __b;
                        v66 = &__b;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &__b,
                          &v873,
                          &v858,
                          &v869);
                        if ( __b.i8[0] != 6 )
                        {
                          v66 = &__b;
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                        }
                        v867.i128[1] = *(__int128 *)((char *)v873.i128 + 8);
                        v867.i64[1] = v873.i64[0];
                        v867.i8[0] = 5;
                        v183 = v863.i64[2];
                        if ( v863.i64[2] == v863.i64[0] )
                        {
                          v66 = &v863;
                          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v863);
                        }
                        v159 = v863.i64[1];
                        v160 = 32 * v183;
                        *(_OWORD *)(v863.i64[1] + v160 + 16) = v867.i128[1];
                        v65 = v867.i64[1];
                        *(_OWORD *)(v159 + v160) = v867.i128[0];
                        v863.i64[2] = v183 + 1;
                      }
                    }
                  }
                  goto LABEL_213;
                }
                v65 = 0x747865745F747570LL;
                if ( !(*(_QWORD *)v162 ^ 0x745F74757074756FLL | *(_QWORD *)(v162 + 3) ^ 0x747865745F747570LL) )
                  goto LABEL_243;
                if ( !(*(_QWORD *)v162 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v162 + 3) ^ 0x6567616D695F7475LL) )
                {
                  v65 = 9;
                  v66 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_117;
                  v164 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           &anon_10420c9971c21f44d230d15b39fb3fec_117,
                           9,
                           v108);
                  if ( v164 )
                  {
                    if ( *(_BYTE *)v164 == 3 )
                    {
                      v165 = *(_QWORD *)(v164 + 16);
                      v166 = *(_QWORD *)(v164 + 24);
                      v851 = v165;
                      *(_QWORD *)&v852 = v166;
                      v873.i64[0] = 0;
                      v873.i64[2] = 0;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                        &anon_10420c9971c21f44d230d15b39fb3fec_117,
                        9);
                      v167 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
                      if ( !v167 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3);
                      *(_BYTE *)(v167 + 2) = 108;
                      *(_WORD *)v167 = 29301;
                      v867.i64[0] = 3;
                      v867.i64[1] = v167;
                      v867.i64[2] = 3;
                      serde_json::value::to_value::h29e3c39dc75a9151(&__b, &v851);
                      if ( __b.i8[0] == 6 )
                      {
                        v869.i64[0] = __b.i64[1];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v869,
                          &off_10196D480,
                          &off_10196C7B8);
                      }
                      v869 = __b;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                        &__b,
                        &v873,
                        &v867,
                        &v869);
                      if ( __b.i8[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                      v858.i128[1] = *(__int128 *)((char *)v873.i128 + 8);
                      v858.i64[1] = v873.i64[0];
                      v858.i8[0] = 5;
                      v168 = (__m256i *)&unk_101674CBD;
                      v169 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               &unk_101674CBD,
                               6,
                               v108);
                      if ( v169 && *(_BYTE *)v169 == 3 )
                      {
                        v854 = *(_QWORD *)(v169 + 16);
                        v170 = *(_QWORD *)(v169 + 24);
                        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&__b, v170, 0, 1, 1);
                        v171 = __b.i64[1];
                        if ( __b.i32[0] == 1 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__b.i64[1], __b.i64[2]);
                        v828[0] = __b.u64[2];
                        memcpy((void *)__b.i64[2], (const void *)v854, v170);
                        __b.i64[1] = v171;
                        __b.i64[2] = v828[0];
                        __b.i64[3] = v170;
                        __b.i8[0] = 3;
                        v168 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                            &unk_101674CBD,
                                            6u);
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v168);
                        *v168 = __b;
                      }
                      v866.i64[0] = 0;
                      v866.i64[2] = 0;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v168, 6);
                      v172 = 4;
                      v173 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                      if ( !v173 )
                        goto LABEL_1337;
                      *v173 = 1701869940;
                      v873.i64[0] = 4;
                      v873.i64[1] = (__int64)v173;
                      v873.i64[2] = 4;
                      serde_json::value::to_value::h29e3c39dc75a9151(&__b, &off_10196C7D0);
                      if ( __b.i8[0] == 6 )
                      {
                        v869.i64[0] = __b.i64[1];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v869,
                          &off_10196D480,
                          &off_10196C7E0);
                      }
                      v869 = __b;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                        &__b,
                        &v866,
                        &v873,
                        &v869);
                      if ( __b.i8[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, &v866);
                      v172 = 9;
                      v174 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                      if ( !v174 )
LABEL_1337:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v172);
                      *(_QWORD *)v174 = 0x72755F6567616D69LL;
                      *(_BYTE *)(v174 + 8) = 108;
                      v873.i64[0] = 9;
                      v873.i64[1] = v174;
                      v873.i64[2] = 9;
                      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                        &__b,
                        &v858);
                      if ( __b.i8[0] == 6 )
                      {
                        v869.i64[0] = __b.i64[1];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v869,
                          &off_10196D480,
                          &off_10196C7E0);
                      }
                      v869 = __b;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                        &__b,
                        &v866,
                        &v873,
                        &v869);
                      if ( __b.i8[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                      v867.i128[1] = *(__int128 *)((char *)v866.i128 + 8);
                      v867.i64[1] = v866.i64[0];
                      v867.i8[0] = 5;
                      v175 = v863.i64[2];
                      if ( v863.i64[2] == v863.i64[0] )
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v863);
                      v176 = v863.i64[1];
                      v177 = 32 * v175;
                      *(_OWORD *)(v863.i64[1] + v177 + 16) = v867.i128[1];
                      v65 = v867.i64[1];
                      *(_OWORD *)(v176 + v177) = v867.i128[0];
                      v863.i64[2] = v175 + 1;
                      v66 = &v858;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v858);
                      v110 = 1;
                    }
                  }
                }
LABEL_213:
                v108 += 32;
                v109 -= 32;
              }
              while ( v109 );
              v33 = (char *)v845[0];
              if ( !v863.i64[2] )
              {
LABEL_260:
                v864.i8[0] = 0;
                v5 = (__int64)v862;
                goto LABEL_261;
              }
              if ( ((v863.i64[2] == 1) & (unsigned __int8)~v110) != 0 )
              {
                v199 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &anon_10420c9971c21f44d230d15b39fb3fec_110,
                         4,
                         v863.i64[1]);
                v5 = (__int64)v862;
                if ( v199 )
                {
                  switch ( *(_BYTE *)v199 )
                  {
                    case 0:
                      __b.i8[0] = 0;
                      break;
                    case 1:
                    case 2:
                      __b.i128[1] = *(_OWORD *)(v199 + 16);
                      v200 = *(_QWORD *)v199;
                      __b.i64[1] = *(_QWORD *)(v199 + 8);
                      __b.i64[0] = v200;
                      break;
                    case 3:
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                        &__b.u32[2],
                        v199 + 8);
                      __b.i8[0] = 3;
                      break;
                    case 4:
                      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                        &__b.u32[2],
                        v199 + 8);
                      __b.i8[0] = 4;
                      break;
                    case 5:
                      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                        &__b.u32[2],
                        v199 + 8);
                      __b.i8[0] = 5;
                      break;
                  }
                  v864 = __b;
                  __b.i8[0] = 0;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                }
                else
                {
                  __b.i8[0] = 0;
                  v864 = __b;
                }
              }
              else
              {
                v5 = (__int64)v862;
                if ( (v110 & 1) != 0 )
                {
                  v864.i128[1] = *(__int128 *)((char *)v863.i128 + 8);
                  v864.i64[1] = v863.i64[0];
                  v864.i8[0] = 4;
                  goto LABEL_264;
                }
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd6848453e6db7cc6(
                  &v869,
                  v863.i64[1],
                  v863.i64[1] + 32 * v863.i64[2]);
                v231 = v869.i64[1];
                alloc::str::join_generic_copy::ha9d2732844b8793d(
                  &__b,
                  v869.i64[1],
                  v869.i64[2],
                  "\n"
                  "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
                  1);
                v867.i64[2] = __b.i64[2];
                v867.i128[0] = __b.i128[0];
                if ( v869.i64[0] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, 16 * v869.i64[0], 8);
                v864.i64[3] = v867.i64[2];
                *(__int128 *)((char *)v864.i128 + 8) = v867.i128[0];
                v864.i8[0] = 3;
                v33 = (char *)v845[0];
              }
LABEL_261:
              v66 = &v863;
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b3f1b4c8214e60(&v863);
              v65 = v863.i64[0];
              if ( v863.i64[0] )
              {
                v66 = (__m256i *)v863.i64[1];
                v65 = 32 * v863.i64[0];
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v863.i64[1], 32 * v863.i64[0], 8);
              }
              if ( !v864.i8[0] )
                goto LABEL_82;
LABEL_264:
              v845[0] = (size_t)v33;
              v851 = 0;
              *((_QWORD *)&v852 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v65);
              v184 = 4;
              v185 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v185 )
                goto LABEL_1309;
              *v185 = 1701605234;
              v863.i64[0] = 4;
              v863.i64[1] = (__int64)v185;
              v863.i64[2] = 4;
              if ( (v855[0] & 0x8000000000000000LL) != 0LL )
              {
                v186 = 0;
                goto LABEL_833;
              }
              if ( v855[0] )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v186 = 1;
                v187 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v855[0], 1);
                if ( v187 )
                {
                  v188 = v187;
                  goto LABEL_270;
                }
LABEL_833:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v186, v855[0]);
              }
              v188 = 1;
LABEL_270:
              v189 = v855[0];
              memcpy((void *)v188, (const void *)v845[0], v855[0]);
              v873.i8[0] = 3;
              v873.i64[1] = v189;
              v873.i64[2] = v188;
              v873.i64[3] = v189;
              v190 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v191 = v869.i64[1];
                v192 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v193 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v193;
                *(_OWORD *)(v869.i64[1] + v192 + 16) = v873.i128[1];
                v194 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v191 + v192) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v190 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v190 = &v867;
                v194 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v190, v194);
              v184 = 7;
              v195 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v195 )
LABEL_1309:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v184);
              *(_DWORD *)((char *)v195 + 3) = 1953391988;
              *v195 = 1953394531;
              v863.i64[0] = 7;
              v863.i64[1] = (__int64)v195;
              v863.i64[2] = 7;
              serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                &__b,
                &v864);
              if ( __b.i8[0] == 6 )
              {
                v869.i64[0] = __b.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v869,
                  &off_10196D480,
                  &off_10196CA10);
              }
              v873 = __b;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              v196 = v845[0];
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v197 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v197;
                *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                if ( v867.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              v866.i128[1] = v852;
              v866.i64[1] = v851;
              v866.i8[0] = 5;
              if ( v855[0] == 9 && !(*(_QWORD *)v196 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v196 + 8) ^ 0x74LL) )
              {
                v69 = (void *)0x8000000000000000LL;
                if ( v865 != (void *)0x8000000000000000LL )
                {
                  __b.i64[2] = v831.i64[0];
                  __b.i64[3] = v821;
                  __b.i64[1] = (__int64)v865;
                  __b.i8[0] = 3;
                  v230 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                      "reasoning_content",
                                      0x11u);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v230);
                  *v230 = __b;
                  v69 = (void *)0x8000000000000000LL;
                }
              }
              else
              {
                v69 = v865;
              }
              __b = v866;
              v198 = v848;
              if ( v848 == v846 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
              *(__m256i *)(v847 + 32 * v198) = __b;
              v848 = v198 + 1;
              v865 = v69;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
LABEL_86:
              v865 = v69;
LABEL_27:
              if ( v25 == (char *)v5 )
              {
                if ( 2LL * (_QWORD)v865 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v831.i64[0], v865, 1);
                break;
              }
              continue;
            case 2LL:
              if ( !(*(_QWORD *)v31 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v31 + 8) ^ 0x67LL) )
              {
                v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_10420c9971c21f44d230d15b39fb3fec_109,
                        7,
                        v28);
                if ( v40 )
                {
                  if ( *(_BYTE *)v40 == 4 )
                  {
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfc9393bf4960b1da(
                      &v869,
                      *(_QWORD *)(v40 + 16),
                      *(_QWORD *)(v40 + 16) + 32LL * *(_QWORD *)(v40 + 24));
                    v41 = v5;
                    v42 = v869.i64[1];
                    alloc::str::join_generic_copy::ha9d2732844b8793d(
                      &__b,
                      v869.i64[1],
                      v869.i64[2],
                      "\n"
                      "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
                      1);
                    v43 = __b.i128[0];
                    v44 = __b.i64[2];
                    if ( v869.i64[0] )
                    {
                      v45 = v42;
                      v46 = __b.i64[0];
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 16 * v869.i64[0], 8);
                      *(_QWORD *)&v43 = v46;
                    }
                    if ( v44 )
                    {
                      if ( 2LL * (_QWORD)v865 )
                      {
                        v855[0] = *((_QWORD *)&v43 + 1);
                        v125 = (void *)v43;
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v831.i64[0], v865, 1);
                        v821 = v44;
                        v831.i64[0] = v855[0];
                        v865 = v125;
                      }
                      else
                      {
                        v821 = v44;
                        v831.i64[0] = *((_QWORD *)&v43 + 1);
                        v865 = (void *)v43;
                      }
                      v5 = v41;
                    }
                    else
                    {
                      if ( (_QWORD)v43 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v43 + 1), v43, 1);
                      v5 = v41;
                    }
                  }
                }
              }
              goto LABEL_27;
            case 6LL:
              if ( *(_QWORD *)v31 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v31 + 5) ^ 0x6C6C61635F6E6F69LL )
                goto LABEL_27;
              v238 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       &unk_101674E0C,
                       7,
                       v28);
              v855[0] = 12;
              if ( v238 )
              {
                v239 = &unk_101674E13;
                if ( *(_BYTE *)v238 == 3 )
                {
                  v240 = *(_QWORD *)(v238 + 24);
                  if ( v240 < 0 )
                  {
                    v55 = 0;
                    v356 = (size_t)v827;
                    goto LABEL_587;
                  }
                  v855[0] = *(_QWORD *)(v238 + 24);
                  v862 = (void *)v5;
                  v239 = *(const void **)(v238 + 16);
                  if ( !v240 )
                  {
                    v827 = (void *)1;
                    v241 = 1;
                    v855[0] = 0;
                    goto LABEL_361;
                  }
                  v5 = (__int64)v862;
                }
              }
              else
              {
                v239 = &unk_101674E13;
              }
              v862 = (void *)v5;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E0C, 7);
              v55 = 1;
              v827 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v855[0], 1);
              if ( !v827 )
                goto LABEL_1307;
              v241 = 0;
LABEL_361:
              memcpy(v827, v239, v855[0]);
              v242 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "name",
                       4,
                       v28);
              v845[0] = 4;
              if ( v242 )
              {
                v243 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                if ( *(_BYTE *)v242 == 3 )
                {
                  v244 = *(_QWORD *)(v242 + 24);
                  if ( v244 < 0 )
                  {
                    v245 = 0;
                    goto LABEL_1172;
                  }
                  v845[0] = *(_QWORD *)(v242 + 24);
                  v243 = *(char **)(v242 + 16);
                  if ( !v244 )
                  {
                    v834 = (void *)1;
                    LODWORD(v828[0]) = 1;
                    v845[0] = 0;
                    goto LABEL_369;
                  }
                }
              }
              else
              {
                v243 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
              v245 = 1;
              v834 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v845[0], 1);
              if ( !v834 )
              {
                v834 = (void *)v845[0];
LABEL_1172:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v245, v834);
              }
              LODWORD(v828[0]) = 0;
LABEL_369:
              memcpy(v834, v243, v845[0]);
              v246 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                  "arguments{}",
                                  9,
                                  v28);
              if ( v246 )
              {
                if ( *(_BYTE *)v246 != 3 )
                {
                  v250 = v246;
                  codexmate_lib::core::relay::translator::canonicalize_json_value::h3e049d9080b6c150(
                    (__int64)&__b,
                    v246);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, v250);
                  v251 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
                  if ( !v251 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
                  v869.i64[0] = 128;
                  *(__int128 *)((char *)v869.i128 + 8) = (unsigned __int64)v251;
                  v858.i64[0] = (__int64)&v869;
                  v252 = &__b;
                  v247 = (__int64)&v858;
                  v253 = (_QWORD *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4(
                                     &__b,
                                     &v858);
                  if ( v253 )
                  {
                    v247 = v869.i64[0];
                    if ( v869.i64[0] )
                    {
                      v252 = (__m256i *)v869.i64[1];
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v869.i64[1], v869.i64[0], 1);
                    }
LABEL_379:
                    v869.i64[0] = (__int64)v253;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v252, v247);
                    v254 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                    if ( !v254 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
                    *v254 = 32123;
                    v867.i64[0] = 2;
                    v255 = v254;
                    v867.i64[1] = (__int64)v254;
                    v867.i64[2] = 2;
                    if ( *v253 == 1 )
                    {
                      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v253 + 1);
                    }
                    else if ( !*v253 )
                    {
                      v256 = v253[2];
                      if ( v256 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v253[1], v256, 1);
                    }
                    v247 = 40;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v253, 40, 8);
                    v854 = 2;
                    v837 = (void *)2;
                    v253 = v255;
                  }
                  else
                  {
                    v253 = (_QWORD *)v869.i64[1];
                    if ( v869.i64[0] == 0x8000000000000000LL )
                      goto LABEL_379;
                    v837 = (void *)v869.i64[0];
                    v867.i128[0] = v869.i128[0];
                    v854 = v869.u64[2];
                    v867.i64[2] = v869.i64[2];
                  }
                  v248 = &__b;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                  v833 = v253;
                  goto LABEL_387;
                }
                v247 = v246[2];
                v248 = &v867;
                codexmate_lib::core::relay::translator::canonicalize_tool_arguments_str::h6c8f7253e4a406b3(
                  &v867,
                  v247,
                  v246[3]);
                v833 = (void *)v867.i64[1];
                v837 = (void *)v867.i64[0];
                v854 = v867.u64[2];
              }
              else
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("arguments{}", 9);
                v248 = (__m256i *)2;
                v247 = 1;
                v249 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v249 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
                v833 = v249;
                *v249 = 32123;
                v854 = 2;
                v837 = (void *)2;
              }
LABEL_387:
              v839 = 0;
              *((_QWORD *)&v840 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v248, v247);
              v257 = 2;
              v258 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v258 )
                goto LABEL_1329;
              *v258 = 25705;
              v866.i64[0] = 2;
              v866.i64[1] = (__int64)v258;
              v866.i64[2] = 2;
              v259 = 1;
              v620 = v241 == 0;
              v260 = v855[0];
              if ( v620 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                v261 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v260, 1);
                if ( !v261 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v260);
                v259 = v261;
              }
              memcpy((void *)v259, v827, v260);
              v873.i8[0] = 3;
              v873.i64[1] = v260;
              v873.i64[2] = v259;
              v873.i64[3] = v260;
              v262 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v839, &v866);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v263 = v869.i64[1];
                v264 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v265 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v265;
                *(_OWORD *)(v869.i64[1] + v264 + 16) = v873.i128[1];
                v266 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v263 + v264) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v262 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v262 = &v867;
                v266 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v262, v266);
              v257 = 4;
              v267 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v267 )
                goto LABEL_1329;
              *v267 = 1701869940;
              v866.i64[0] = 4;
              v866.i64[1] = (__int64)v267;
              v866.i64[2] = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v268 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v268 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
              *v268 = 0x6E6F6974636E7566LL;
              v873.i8[0] = 3;
              v873.i64[1] = 8;
              v873.i64[2] = (__int64)v268;
              v873.i64[3] = 8;
              v269 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v839, &v866);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v270 = v869.i64[1];
                v271 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v272 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v272;
                *(_OWORD *)(v869.i64[1] + v271 + 16) = v873.i128[1];
                v273 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v270 + v271) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v269 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v269 = &v867;
                v273 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v269, v273);
              v257 = 8;
              v274 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v274 )
LABEL_1329:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v257);
              *v274 = 0x6E6F6974636E7566LL;
              v836.i64[0] = 8;
              v822 = (__int64)v274;
              v836.i64[1] = (__int64)v274;
              v836.i64[2] = 8;
              v851 = 0;
              *((_QWORD *)&v852 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
              v275 = 4;
              v276 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v276 )
                goto LABEL_1335;
              *v276 = 1701667182;
              v863.i64[0] = 4;
              v863.i64[1] = (__int64)v276;
              v863.i64[2] = 4;
              v277 = 1;
              if ( !LOBYTE(v828[0]) )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v278 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v845[0], 1);
                if ( !v278 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v845[0]);
                v277 = v278;
              }
              v279 = v845[0];
              memcpy((void *)v277, v834, v845[0]);
              v873.i8[0] = 3;
              v873.i64[1] = v279;
              v873.i64[2] = v277;
              v873.i64[3] = v279;
              v280 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v281 = v869.i64[1];
                v282 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v283 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v283;
                *(_OWORD *)(v869.i64[1] + v282 + 16) = v873.i128[1];
                v284 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v281 + v282) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v280 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v280 = &v867;
                v284 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v280, v284);
              v275 = 9;
              v285 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v285 )
LABEL_1335:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v275);
              *(_QWORD *)v285 = 0x746E656D75677261LL;
              *(_BYTE *)(v285 + 8) = 115;
              v863.i64[0] = 9;
              v863.i64[1] = v285;
              v863.i64[2] = 9;
              if ( (v854 & 0x8000000000000000LL) != 0LL )
              {
                v286 = 0;
LABEL_1170:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v286, v854);
              }
              if ( v854 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
                v286 = 1;
                v287 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v854, 1);
                if ( !v287 )
                  goto LABEL_1170;
                v288 = v287;
              }
              else
              {
                v288 = 1;
              }
              v289 = v854;
              memcpy((void *)v288, v833, v854);
              v873.i8[0] = 3;
              v873.i64[1] = v289;
              v873.i64[2] = v288;
              v873.i64[3] = v289;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v290 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v290;
                *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                if ( v867.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              v866.i128[1] = v852;
              v866.i64[1] = v851;
              v866.i8[0] = 5;
              v291 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v839, &v836);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v292 = v869.i64[1];
                v293 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v294 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v294;
                *(_OWORD *)(v869.i64[1] + v293 + 16) = v866.i128[1];
                v295 = v866.i64[1];
                *(_OWORD *)(v292 + v293) = v866.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v291 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v866;
                v291 = &v867;
                v295 = (__int64)&__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              v864.i128[1] = v840;
              v864.i64[1] = v839;
              v864.i8[0] = 5;
              v5 = v821;
              v854 = v831.i64[0];
              if ( v865 == (void *)0x8000000000000000LL )
              {
                v295 = 17;
                v291 = (__m256i *)"reasoning_content";
                v296 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "reasoning_content",
                         17,
                         v28);
                if ( v296 && *(_BYTE *)v296 == 3 )
                {
                  v297 = *(_QWORD *)(v296 + 24);
                  v5 = (__int64)v843;
                  v854 = (size_t)__s2;
                  v865 = (void *)0x8000000000000000LL;
                  if ( v297 )
                  {
                    v298 = *(const void **)(v296 + 16);
                    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&__b, v297, 0, 1, 1);
                    v865 = (void *)__b.i64[1];
                    if ( __b.i32[0] == 1 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v865, __b.i64[2]);
                    v291 = (__m256i *)__b.i64[2];
                    v854 = __b.u64[2];
                    v295 = (__int64)v298;
                    memcpy((void *)__b.i64[2], v298, v297);
                    v5 = v297;
                  }
                }
                else
                {
                  v5 = (__int64)v843;
                  v854 = (size_t)__s2;
                  v865 = (void *)0x8000000000000000LL;
                }
              }
              v299 = v847 + 32 * v848;
              v620 = v299 == 32;
              v300 = v299 - 32;
              if ( v848 == 0
                || v620
                || (v295 = 4,
                    v291 = (__m256i *)"roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                    (v301 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                              "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                              4,
                              v300)) == 0)
                || *(_BYTE *)v301 != 3
                || *(_QWORD *)(v301 + 24) != 9
                || **(_QWORD **)(v301 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v301 + 16) + 8LL) ^ 0x74LL )
              {
                v851 = 0;
                *((_QWORD *)&v852 + 1) = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v291, v295);
                v302 = 4;
                v303 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v303 )
                  goto LABEL_1339;
                *v303 = 1701605234;
                v863.i64[0] = 4;
                v863.i64[1] = (__int64)v303;
                v863.i64[2] = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v304 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                if ( !v304 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                *(_QWORD *)v304 = 0x6E61747369737361LL;
                *(_BYTE *)(v304 + 8) = 116;
                v873.i8[0] = 3;
                v873.i64[1] = 9;
                v873.i64[2] = v304;
                v873.i64[3] = 9;
                v305 = &v869;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
                if ( v869.i64[0] == 0x8000000000000000LL )
                {
                  v306 = v869.i64[1];
                  v307 = 32 * v869.i64[3];
                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                  v308 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                  v867.i64[0] = v308;
                  *(_OWORD *)(v869.i64[1] + v307 + 16) = v873.i128[1];
                  v309 = (__m256i *)v873.i64[1];
                  *(_OWORD *)(v306 + v307) = v873.i128[0];
                  if ( v867.i8[0] != 6 )
                  {
                    v305 = &v867;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                  }
                }
                else
                {
                  v877 = v872;
                  v876 = v871;
                  v875 = v870;
                  __b = v869;
                  v858 = v873;
                  v305 = &v867;
                  v309 = &__b;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v867,
                    &__b,
                    &v858);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v305, v309);
                v302 = 7;
                v310 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                if ( !v310 )
                  goto LABEL_1339;
                *(_DWORD *)((char *)v310 + 3) = 1953391988;
                *v310 = 1953394531;
                v863.i64[0] = 7;
                v863.i64[1] = (__int64)v310;
                v863.i64[2] = 7;
                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                  &__b,
                  &unk_101674E38);
                if ( __b.i8[0] == 6 )
                {
                  v869.i64[0] = __b.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v869,
                    &off_10196D480,
                    &off_10196C9C8);
                }
                v873 = __b;
                v311 = &v869;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
                if ( v869.i64[0] == 0x8000000000000000LL )
                {
                  v312 = v869.i64[1];
                  v313 = 32 * v869.i64[3];
                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                  v314 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                  v867.i64[0] = v314;
                  *(_OWORD *)(v869.i64[1] + v313 + 16) = v873.i128[1];
                  v315 = (__m256i *)v873.i64[1];
                  *(_OWORD *)(v312 + v313) = v873.i128[0];
                  if ( v867.i8[0] != 6 )
                  {
                    v311 = &v867;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                  }
                }
                else
                {
                  v877 = v872;
                  v876 = v871;
                  v875 = v870;
                  __b = v869;
                  v858 = v873;
                  v311 = &v867;
                  v315 = &__b;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v867,
                    &__b,
                    &v858);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v311, v315);
                v302 = 10;
                v316 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                if ( !v316 )
LABEL_1339:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v302);
                qmemcpy(v316, "tool_calls", 10);
                v863.i64[0] = 10;
                v863.i64[1] = (__int64)v316;
                v863.i64[2] = 10;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1);
                v317 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                if ( !v317 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                v318 = (__m256i *)v317;
                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                  &__b,
                  &v864);
                if ( __b.i8[0] == 6 )
                {
                  v869.i64[0] = __b.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v869,
                    &off_10196D480,
                    &off_10196C9C8);
                }
                *v318 = __b;
                v873.i64[1] = 1;
                v873.i64[2] = (__int64)v318;
                v873.i64[3] = 1;
                v873.i8[0] = 4;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
                if ( v869.i64[0] == 0x8000000000000000LL )
                {
                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                  v319 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                  v867.i64[0] = v319;
                  *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                  if ( v867.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
                else
                {
                  v877 = v872;
                  v876 = v871;
                  v875 = v870;
                  __b = v869;
                  v858 = v873;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v867,
                    &__b,
                    &v858);
                }
                v866.i128[1] = v852;
                v866.i64[1] = v851;
                v866.i8[0] = 5;
                v320 = 1;
                if ( v865 != (void *)0x8000000000000000LL )
                {
                  __b.i64[1] = (__int64)v865;
                  __b.i64[2] = v854;
                  __b.i64[3] = v5;
                  __b.i8[0] = 3;
                  v321 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                      "reasoning_content",
                                      0x11u);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v321);
                  *v321 = __b;
                  v320 = 0;
                }
                __b = v866;
                v322 = v848;
                if ( v848 == v846 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
                *(__m256i *)(v847 + 32 * v322) = __b;
                v848 = v322 + 1;
                v323 = v865;
                if ( ((unsigned __int8)v320 & (((unsigned __int64)v865 & 0x7FFFFFFFFFFFFFFFLL) != 0)) == 0 )
                  goto LABEL_461;
LABEL_460:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v854, v323, 1);
                goto LABEL_461;
              }
              if ( v848 )
              {
                v325 = v847 + 32 * v848 - 32;
                v326 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                         "tool_callsreasoning_content",
                         10,
                         v325);
                v327 = v326;
                if ( v326 && *(_BYTE *)v326 == 4 )
                {
                  __b = v864;
                  v328 = *(_QWORD *)(v326 + 24);
                  if ( v328 == *(_QWORD *)(v326 + 8) )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v326 + 8);
                  *(__m256i *)(*(_QWORD *)(v327 + 16) + 32 * v328) = __b;
                  *(_QWORD *)(v327 + 24) = v328 + 1;
                  v329 = 0;
                }
                else
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_callsreasoning_content", 10);
                  v330 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                  if ( !v330 )
                    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                  v331 = (__m256i *)v330;
                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                    &__b,
                    &v864);
                  if ( __b.i8[0] == 6 )
                  {
                    v869.i64[0] = __b.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                      43,
                      &v869,
                      &off_10196D480,
                      &off_10196C9E0);
                  }
                  *v331 = __b;
                  __b.i64[1] = 1;
                  __b.i64[2] = (__int64)v331;
                  __b.i64[3] = 1;
                  __b.i8[0] = 4;
                  v332 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                      "tool_callsreasoning_content",
                                      0xAu);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v332);
                  *v332 = __b;
                  v329 = 1;
                }
                if ( v865 != (void *)0x8000000000000000LL )
                {
                  v333 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           "reasoning_content",
                           17,
                           v325);
                  if ( v333 && *(_BYTE *)v333 == 3 && *(_QWORD *)(v333 + 24) )
                  {
                    if ( v865 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v854, v865, 1);
                  }
                  else
                  {
                    __b.i64[1] = (__int64)v865;
                    __b.i64[2] = v854;
                    __b.i64[3] = v5;
                    __b.i8[0] = 3;
                    v334 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                        "reasoning_content",
                                        0x11u);
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v334);
                    *v334 = __b;
                  }
                }
                if ( !v329 )
                  goto LABEL_462;
                goto LABEL_461;
              }
              v323 = v865;
              if ( 2LL * (_QWORD)v865 )
                goto LABEL_460;
LABEL_461:
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
LABEL_462:
              v324 = v845[0];
              if ( v837 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v833, v837, 1);
              if ( v324 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v834, v324, 1);
              if ( v855[0] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v827, v855[0], 1);
              v26 = (char *)v862;
              v27 = v854;
              if ( v25 == v862 )
                goto LABEL_494;
              goto LABEL_25;
            case 9LL:
              if ( *(_QWORD *)v31 ^ 0x745F6D6F74737563LL | *(_QWORD *)(v31 + 8) ^ 0x6C6C61635F6C6F6FLL )
                goto LABEL_27;
              v47 = 7;
              v48 = (const char *)&unk_101674E0C;
              v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_101674E0C,
                      7,
                      v28);
              if ( v49 && *(_BYTE *)v49 == 3 )
                goto LABEL_58;
              v47 = 2;
              v48 = "idassistant";
              v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "idassistant",
                      2,
                      v28);
              v855[0] = 12;
              if ( v49 )
              {
                v50 = &unk_101674E13;
                if ( *(_BYTE *)v49 == 3 )
                {
LABEL_58:
                  v51 = *(_QWORD *)(v49 + 24);
                  if ( v51 < 0 )
                  {
                    v55 = 0;
                    v356 = v844;
                    goto LABEL_587;
                  }
                  v855[0] = *(_QWORD *)(v49 + 24);
                  v50 = *(const void **)(v49 + 16);
                  if ( !v51 )
                  {
                    v844 = 1;
                    LODWORD(v854) = 1;
                    v855[0] = 0;
                    goto LABEL_137;
                  }
                }
              }
              else
              {
                v50 = &unk_101674E13;
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v47);
              v55 = 1;
              v844 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v855[0], 1);
              if ( v844 )
              {
                LODWORD(v854) = 0;
LABEL_137:
                memcpy((void *)v844, v50, v855[0]);
                v102 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "name",
                         4,
                         v28);
                v103 = 4;
                if ( v102 )
                {
                  v104 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                  if ( *(_BYTE *)v102 == 3 )
                  {
                    v103 = *(_QWORD *)(v102 + 24);
                    if ( v103 < 0 )
                    {
                      v112 = 0;
                      goto LABEL_831;
                    }
                    v104 = *(char **)(v102 + 16);
                    if ( !v103 )
                    {
                      v105 = 1;
                      v106 = 1;
                      v845[0] = 0;
LABEL_147:
                      v832 = (void *)v105;
                      memcpy((void *)v105, v104, v845[0]);
                      v113 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               &anon_10420c9971c21f44d230d15b39fb3fec_146,
                               5,
                               v28);
                      v114 = 1;
                      LODWORD(v833) = v106;
                      if ( v113 && *(_BYTE *)v113 == 3 )
                      {
                        v114 = *(_QWORD *)(v113 + 16);
                        v115 = *(_QWORD *)(v113 + 24);
                      }
                      else
                      {
                        v115 = 0;
                      }
                      v863.i64[0] = 0;
                      v863.i64[2] = 0;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                        &anon_10420c9971c21f44d230d15b39fb3fec_146,
                        5);
                      v116 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                      if ( !v116 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
                      *(_BYTE *)(v116 + 4) = 116;
                      *(_DWORD *)v116 = 1970302569;
                      v864.i64[0] = 5;
                      v864.i64[1] = v116;
                      v864.i64[2] = 5;
                      if ( v115 < 0 )
                      {
                        v117 = 0;
                      }
                      else
                      {
                        v862 = (void *)v5;
                        if ( !v115 )
                        {
                          v119 = 1;
LABEL_179:
                          memcpy((void *)v119, (const void *)v114, v115);
                          v873.i8[0] = 3;
                          v873.i64[1] = v115;
                          v873.i64[2] = v119;
                          v873.i64[3] = v115;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v863,
                            &v864);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v126 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v867.i64[0] = v126;
                            *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                            if ( v867.i8[0] != 6 )
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v858 = v873;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v867,
                              &__b,
                              &v858);
                          }
                          v866.i128[1] = *(__int128 *)((char *)v863.i128 + 8);
                          v866.i64[1] = v863.i64[0];
                          v866.i8[0] = 5;
                          v869.i64[0] = 0;
                          *(__int128 *)((char *)v869.i128 + 8) = 1u;
                          __b.i64[2] = 1610612768;
                          __b.i64[0] = (__int64)&v869;
                          __b.i64[1] = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_964;
                          if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                                                  &v866,
                                                  &__b) )
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &anon_10420c9971c21f44d230d15b39fb3fec_965,
                              55,
                              &v867,
                              &anon_10420c9971c21f44d230d15b39fb3fec_976,
                              &anon_10420c9971c21f44d230d15b39fb3fec_967);
                          v837 = (void *)v869.i64[1];
                          v822 = v869.i64[0];
                          v828[0] = v869.u64[2];
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v866);
                          v839 = 0;
                          *((_QWORD *)&v840 + 1) = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v866, &__b);
                          v127 = 2;
                          v128 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                          if ( !v128 )
                            goto LABEL_1308;
                          *v128 = 25705;
                          v866.i64[0] = 2;
                          v866.i64[1] = (__int64)v128;
                          v866.i64[2] = 2;
                          v129 = 1;
                          v130 = v855[0];
                          if ( !(_BYTE)v854 )
                          {
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                            v131 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v130, 1);
                            if ( !v131 )
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v130);
                            v129 = v131;
                          }
                          memcpy((void *)v129, (const void *)v844, v130);
                          v873.i8[0] = 3;
                          v873.i64[1] = v130;
                          v873.i64[2] = v129;
                          v873.i64[3] = v130;
                          v132 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v839,
                            &v866);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v133 = v869.i64[1];
                            v134 = 32 * v869.i64[3];
                            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v135 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v867.i64[0] = v135;
                            *(_OWORD *)(v869.i64[1] + v134 + 16) = v873.i128[1];
                            v136 = (__m256i *)v873.i64[1];
                            *(_OWORD *)(v133 + v134) = v873.i128[0];
                            if ( v867.i8[0] != 6 )
                            {
                              v132 = &v867;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v858 = v873;
                            v132 = &v867;
                            v136 = &__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v867,
                              &__b,
                              &v858);
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v132, v136);
                          v127 = 4;
                          v137 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v137 )
                            goto LABEL_1308;
                          *v137 = 1701869940;
                          v866.i64[0] = 4;
                          v866.i64[1] = (__int64)v137;
                          v866.i64[2] = 4;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                          v138 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                          if ( !v138 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                          *v138 = 0x6E6F6974636E7566LL;
                          v873.i8[0] = 3;
                          v873.i64[1] = 8;
                          v873.i64[2] = (__int64)v138;
                          v873.i64[3] = 8;
                          v139 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v839,
                            &v866);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v140 = v869.i64[1];
                            v141 = 32 * v869.i64[3];
                            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v142 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v867.i64[0] = v142;
                            *(_OWORD *)(v869.i64[1] + v141 + 16) = v873.i128[1];
                            v143 = (__m256i *)v873.i64[1];
                            *(_OWORD *)(v140 + v141) = v873.i128[0];
                            if ( v867.i8[0] != 6 )
                            {
                              v139 = &v867;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v858 = v873;
                            v139 = &v867;
                            v143 = &__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v867,
                              &__b,
                              &v858);
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v139, v143);
                          v127 = 8;
                          v144 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                          if ( !v144 )
LABEL_1308:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v127);
                          *v144 = 0x6E6F6974636E7566LL;
                          v836.i64[0] = 8;
                          v836.i64[1] = (__int64)v144;
                          v836.i64[2] = 8;
                          v851 = 0;
                          *((_QWORD *)&v852 + 1) = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
                          v145 = 4;
                          v146 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v146 )
                            goto LABEL_1318;
                          *v146 = 1701667182;
                          v863.i64[0] = 4;
                          v863.i64[1] = (__int64)v146;
                          v863.i64[2] = 4;
                          v147 = 1;
                          if ( !(_BYTE)v833 )
                          {
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                            v148 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v845[0], 1);
                            if ( !v148 )
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v845[0]);
                            v147 = v148;
                          }
                          v149 = v845[0];
                          memcpy((void *)v147, v832, v845[0]);
                          v873.i8[0] = 3;
                          v873.i64[1] = v149;
                          v873.i64[2] = v147;
                          v873.i64[3] = v149;
                          v150 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v851,
                            &v863);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v151 = v869.i64[1];
                            v152 = 32 * v869.i64[3];
                            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v153 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v867.i64[0] = v153;
                            *(_OWORD *)(v869.i64[1] + v152 + 16) = v873.i128[1];
                            v154 = (__m256i *)v873.i64[1];
                            *(_OWORD *)(v151 + v152) = v873.i128[0];
                            if ( v867.i8[0] != 6 )
                            {
                              v150 = &v867;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v858 = v873;
                            v150 = &v867;
                            v154 = &__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v867,
                              &__b,
                              &v858);
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v150, v154);
                          v145 = 9;
                          v155 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                          if ( !v155 )
LABEL_1318:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v145);
                          *(_QWORD *)v155 = 0x746E656D75677261LL;
                          *(_BYTE *)(v155 + 8) = 115;
                          v863.i64[0] = 9;
                          v863.i64[1] = v155;
                          v863.i64[2] = 9;
                          if ( (v828[0] & 0x8000000000000000LL) != 0LL )
                          {
                            v156 = 0;
                          }
                          else
                          {
                            if ( !v828[0] )
                            {
                              v158 = 1;
LABEL_291:
                              memcpy((void *)v158, v837, v828[0]);
                              v873.i8[0] = 3;
                              v873.i64[1] = v828[0];
                              v873.i64[2] = v158;
                              v873.i64[3] = v828[0];
                              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                                &v869,
                                &v851,
                                &v863);
                              if ( v869.i64[0] == 0x8000000000000000LL )
                              {
                                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                                v201 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                                v867.i64[0] = v201;
                                *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                                if ( v867.i8[0] != 6 )
                                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                              }
                              else
                              {
                                v877 = v872;
                                v876 = v871;
                                v875 = v870;
                                __b = v869;
                                v858 = v873;
                                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                                  &v867,
                                  &__b,
                                  &v858);
                              }
                              v866.i128[1] = v852;
                              v866.i64[1] = v851;
                              v866.i8[0] = 5;
                              v202 = &v869;
                              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                                &v869,
                                &v839,
                                &v836);
                              if ( v869.i64[0] == 0x8000000000000000LL )
                              {
                                v203 = v869.i64[1];
                                v204 = 32 * v869.i64[3];
                                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                                v205 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                                v867.i64[0] = v205;
                                *(_OWORD *)(v869.i64[1] + v204 + 16) = v866.i128[1];
                                v206 = v866.i64[1];
                                *(_OWORD *)(v203 + v204) = v866.i128[0];
                                if ( v867.i8[0] != 6 )
                                {
                                  v202 = &v867;
                                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                                }
                              }
                              else
                              {
                                v877 = v872;
                                v876 = v871;
                                v875 = v870;
                                __b = v869;
                                v858 = v866;
                                v202 = &v867;
                                v206 = (__int64)&__b;
                                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                                  &v867,
                                  &__b,
                                  &v858);
                              }
                              v864.i128[1] = v840;
                              v864.i64[1] = v839;
                              v207 = v847 + 32 * v848;
                              v864.i8[0] = 5;
                              v620 = v207 == 32;
                              v208 = v207 - 32;
                              v5 = (__int64)v862;
                              if ( v848 != 0
                                && !v620
                                && (v206 = 4,
                                    v202 = (__m256i *)"roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                                    (v209 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                              "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                                              4,
                                              v208)) != 0)
                                && *(_BYTE *)v209 == 3
                                && *(_QWORD *)(v209 + 24) == 9
                                && !(**(_QWORD **)(v209 + 16) ^ 0x6E61747369737361LL
                                   | *(unsigned __int8 *)(*(_QWORD *)(v209 + 16) + 8LL) ^ 0x74LL) )
                              {
                                if ( v848 )
                                {
                                  v232 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                                           "tool_callsreasoning_content",
                                           10,
                                           v847 + 32 * v848 - 32);
                                  v233 = v232;
                                  if ( v232 && *(_BYTE *)v232 == 4 )
                                  {
                                    __b = v864;
                                    v234 = *(_QWORD *)(v232 + 24);
                                    if ( v234 == *(_QWORD *)(v232 + 8) )
                                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v232 + 8);
                                    *(__m256i *)(*(_QWORD *)(v233 + 16) + 32 * v234) = __b;
                                    *(_QWORD *)(v233 + 24) = v234 + 1;
                                    v5 = (__int64)v862;
                                    v229 = v822;
                                    if ( !v822 )
                                      goto LABEL_328;
                                    goto LABEL_327;
                                  }
                                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                                    "tool_callsreasoning_content",
                                    10);
                                  v235 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                                  if ( !v235 )
                                    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                                  v236 = (__m256i *)v235;
                                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                                    &__b,
                                    &v864);
                                  if ( __b.i8[0] == 6 )
                                  {
                                    v869.i64[0] = __b.i64[1];
                                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                                      43,
                                      &v869,
                                      &off_10196D480,
                                      &off_10196C998);
                                  }
                                  *v236 = __b;
                                  __b.i64[1] = 1;
                                  __b.i64[2] = (__int64)v236;
                                  __b.i64[3] = 1;
                                  __b.i8[0] = 4;
                                  v237 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                                      "tool_callsreasoning_content",
                                                      0xAu);
                                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v237);
                                  *v237 = __b;
                                  v5 = (__int64)v862;
                                }
                              }
                              else
                              {
                                v851 = 0;
                                *((_QWORD *)&v852 + 1) = 0;
                                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v202, v206);
                                v210 = 4;
                                v211 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                                if ( !v211 )
                                  goto LABEL_1319;
                                *v211 = 1701605234;
                                v863.i64[0] = 4;
                                v863.i64[1] = (__int64)v211;
                                v863.i64[2] = 4;
                                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                                v212 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                                if ( !v212 )
                                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                                *(_QWORD *)v212 = 0x6E61747369737361LL;
                                *(_BYTE *)(v212 + 8) = 116;
                                v873.i8[0] = 3;
                                v873.i64[1] = 9;
                                v873.i64[2] = v212;
                                v873.i64[3] = 9;
                                v213 = &v869;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                                  &v869,
                                  &v851,
                                  &v863);
                                if ( v869.i64[0] == 0x8000000000000000LL )
                                {
                                  v214 = v869.i64[1];
                                  v215 = 32 * v869.i64[3];
                                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                                  v216 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                                  v867.i64[0] = v216;
                                  *(_OWORD *)(v869.i64[1] + v215 + 16) = v873.i128[1];
                                  v217 = (__m256i *)v873.i64[1];
                                  *(_OWORD *)(v214 + v215) = v873.i128[0];
                                  if ( v867.i8[0] != 6 )
                                  {
                                    v213 = &v867;
                                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                                  }
                                }
                                else
                                {
                                  v877 = v872;
                                  v876 = v871;
                                  v875 = v870;
                                  __b = v869;
                                  v858 = v873;
                                  v213 = &v867;
                                  v217 = &__b;
                                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                                    &v867,
                                    &__b,
                                    &v858);
                                }
                                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v213, v217);
                                v210 = 7;
                                v218 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                                if ( !v218 )
                                  goto LABEL_1319;
                                *(_DWORD *)((char *)v218 + 3) = 1953391988;
                                *v218 = 1953394531;
                                v863.i64[0] = 7;
                                v863.i64[1] = (__int64)v218;
                                v863.i64[2] = 7;
                                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                                  &__b,
                                  &unk_101674E38);
                                if ( __b.i8[0] == 6 )
                                {
                                  v869.i64[0] = __b.i64[1];
                                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                                    43,
                                    &v869,
                                    &off_10196D480,
                                    &off_10196C980);
                                }
                                v873 = __b;
                                v219 = &v869;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                                  &v869,
                                  &v851,
                                  &v863);
                                if ( v869.i64[0] == 0x8000000000000000LL )
                                {
                                  v220 = v869.i64[1];
                                  v221 = 32 * v869.i64[3];
                                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                                  v222 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                                  v867.i64[0] = v222;
                                  *(_OWORD *)(v869.i64[1] + v221 + 16) = v873.i128[1];
                                  v223 = (__m256i *)v873.i64[1];
                                  *(_OWORD *)(v220 + v221) = v873.i128[0];
                                  if ( v867.i8[0] != 6 )
                                  {
                                    v219 = &v867;
                                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                                  }
                                }
                                else
                                {
                                  v877 = v872;
                                  v876 = v871;
                                  v875 = v870;
                                  __b = v869;
                                  v858 = v873;
                                  v219 = &v867;
                                  v223 = &__b;
                                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                                    &v867,
                                    &__b,
                                    &v858);
                                }
                                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v219, v223);
                                v210 = 10;
                                v224 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                                if ( !v224 )
LABEL_1319:
                                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v210);
                                qmemcpy(v224, "tool_calls", 10);
                                v863.i64[0] = 10;
                                v863.i64[1] = (__int64)v224;
                                v863.i64[2] = 10;
                                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1);
                                v225 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                                if ( !v225 )
                                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                                v226 = (__m256i *)v225;
                                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                                  &__b,
                                  &v864);
                                if ( __b.i8[0] == 6 )
                                {
                                  v869.i64[0] = __b.i64[1];
                                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                                    43,
                                    &v869,
                                    &off_10196D480,
                                    &off_10196C980);
                                }
                                *v226 = __b;
                                v873.i64[1] = 1;
                                v873.i64[2] = (__int64)v226;
                                v873.i64[3] = 1;
                                v873.i8[0] = 4;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                                  &v869,
                                  &v851,
                                  &v863);
                                if ( v869.i64[0] == 0x8000000000000000LL )
                                {
                                  v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                                  v227 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                                  v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                                  v867.i64[0] = v227;
                                  *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                                  if ( v867.i8[0] != 6 )
                                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                                }
                                else
                                {
                                  v877 = v872;
                                  v876 = v871;
                                  v875 = v870;
                                  __b = v869;
                                  v858 = v873;
                                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                                    &v867,
                                    &__b,
                                    &v858);
                                }
                                v866.i128[1] = v852;
                                v866.i64[1] = v851;
                                v866.i8[0] = 5;
                                v228 = v848;
                                if ( v848 == v846 )
                                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
                                *(__m256i *)(v847 + 32 * v228) = v866;
                                v848 = v228 + 1;
                              }
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
                              v229 = v822;
                              if ( !v822 )
                              {
LABEL_328:
                                if ( v845[0] )
                                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v832, v845[0], 1);
                                if ( v855[0] )
                                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v844, v855[0], 1);
                                goto LABEL_27;
                              }
LABEL_327:
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v837, v229, 1);
                              goto LABEL_328;
                            }
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
                            v156 = 1;
                            v157 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v828[0], 1);
                            if ( v157 )
                            {
                              v158 = v157;
                              goto LABEL_291;
                            }
                          }
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v156, v828[0]);
                        }
                        v828[0] = v114;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
                        v117 = 1;
                        v118 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v115, 1);
                        if ( v118 )
                        {
                          v119 = v118;
                          v114 = v828[0];
                          goto LABEL_179;
                        }
                      }
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v117, v115);
                    }
                  }
                }
                else
                {
                  v104 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
                v111 = v103;
                v112 = 1;
                v845[0] = v111;
                v105 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v111, 1);
                if ( v105 )
                {
                  v106 = 0;
                  goto LABEL_147;
                }
                v832 = (void *)v845[0];
LABEL_831:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v112, v832);
              }
LABEL_1307:
              v356 = v855[0];
              goto LABEL_587;
            case 13LL:
              v52 = _mm_or_si128(
                      _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v31 + 16)), (__m128i)xmmword_1015DCA50),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v31), (__m128i)xmmword_1015DCA60));
              if ( !_mm_testz_si128(v52, v52) )
                goto LABEL_27;
              v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_101674E0C,
                      7,
                      v28);
              v862 = (void *)v5;
              v37 = 12;
              if ( v53 )
              {
                v54 = &unk_101674E13;
                if ( *(_BYTE *)v53 == 3 )
                {
                  v37 = *(_QWORD *)(v53 + 24);
                  if ( v37 < 0 )
                  {
                    v55 = 0;
                    v356 = (size_t)__dst;
                    goto LABEL_587;
                  }
                  v54 = *(const void **)(v53 + 16);
                  if ( !v37 )
                  {
                    __dst = (void *)1;
                    LODWORD(v855[0]) = 1;
                    v37 = 0;
LABEL_90:
                    memcpy(__dst, v54, v37);
                    v70 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                            "output",
                            6,
                            v28);
                    codexmate_lib::core::relay::translator::flatten_function_call_output::h9e1aa310da980a1b(&v864, v70);
                    v851 = 0;
                    *((_QWORD *)&v852 + 1) = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v864, v70);
                    v71 = 4;
                    v72 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v72 )
                      goto LABEL_1291;
                    *v72 = 1701605234;
                    v863.i64[0] = 4;
                    v863.i64[1] = (__int64)v72;
                    v863.i64[2] = 4;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                    v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v73 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                    *v73 = 1819242356;
                    v873.i8[0] = 3;
                    v873.i64[1] = 4;
                    v873.i64[2] = (__int64)v73;
                    v873.i64[3] = 4;
                    v74 = &v869;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                      &v869,
                      &v851,
                      &v863);
                    if ( v869.i64[0] == 0x8000000000000000LL )
                    {
                      v75 = v869.i64[1];
                      v76 = 32 * v869.i64[3];
                      v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                      v77 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                      v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                      v867.i64[0] = v77;
                      *(_OWORD *)(v869.i64[1] + v76 + 16) = v873.i128[1];
                      v78 = (__m256i *)v873.i64[1];
                      *(_OWORD *)(v75 + v76) = v873.i128[0];
                      if ( v867.i8[0] != 6 )
                      {
                        v74 = &v867;
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                      }
                    }
                    else
                    {
                      v877 = v872;
                      v876 = v871;
                      v875 = v870;
                      __b = v869;
                      v858 = v873;
                      v74 = &v867;
                      v78 = &__b;
                      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                        &v867,
                        &__b,
                        &v858);
                    }
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v74, v78);
                    v71 = 12;
                    v87 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                    if ( !v87 )
                      goto LABEL_1291;
                    qmemcpy(v87, "tool_call_id", 12);
                    v863.i64[0] = 12;
                    v863.i64[1] = (__int64)v87;
                    v863.i64[2] = 12;
                    v88 = 1;
                    if ( !LOBYTE(v855[0]) )
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
                      v89 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
                      if ( !v89 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37);
                      v88 = v89;
                    }
                    memcpy((void *)v88, __dst, v37);
                    v873.i8[0] = 3;
                    v873.i64[1] = v37;
                    v873.i64[2] = v88;
                    v873.i64[3] = v37;
                    v90 = &v869;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                      &v869,
                      &v851,
                      &v863);
                    if ( v869.i64[0] == 0x8000000000000000LL )
                    {
                      v91 = v869.i64[1];
                      v92 = 32 * v869.i64[3];
                      v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                      v93 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                      v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                      v867.i64[0] = v93;
                      *(_OWORD *)(v869.i64[1] + v92 + 16) = v873.i128[1];
                      v94 = (__m256i *)v873.i64[1];
                      *(_OWORD *)(v91 + v92) = v873.i128[0];
                      if ( v867.i8[0] != 6 )
                      {
                        v90 = &v867;
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                      }
                    }
                    else
                    {
                      v877 = v872;
                      v876 = v871;
                      v875 = v870;
                      __b = v869;
                      v858 = v873;
                      v90 = &v867;
                      v94 = &__b;
                      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                        &v867,
                        &__b,
                        &v858);
                    }
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v94);
                    v71 = 7;
                    v97 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                    if ( !v97 )
LABEL_1291:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v71);
                    *(_DWORD *)((char *)v97 + 3) = 1953391988;
                    *v97 = 1953394531;
                    v863.i64[0] = 7;
                    v863.i64[1] = (__int64)v97;
                    v863.i64[2] = 7;
                    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                      &__b,
                      &v864);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196C9B0);
                    }
                    v873 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                      &v869,
                      &v851,
                      &v863);
                    if ( v869.i64[0] == 0x8000000000000000LL )
                    {
                      v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                      v98 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                      v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                      v867.i64[0] = v98;
                      *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                      if ( v867.i8[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                    }
                    else
                    {
                      v877 = v872;
                      v876 = v871;
                      v875 = v870;
                      __b = v869;
                      v858 = v873;
                      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                        &v867,
                        &__b,
                        &v858);
                    }
                    v866.i128[1] = v852;
                    v866.i64[1] = v851;
                    v866.i8[0] = 5;
                    v101 = v848;
                    if ( v848 == v846 )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
                    *(__m256i *)(v847 + 32 * v101) = v866;
                    v848 = v101 + 1;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
                    v100 = __dst;
                    if ( v37 )
                      goto LABEL_132;
                    goto LABEL_133;
                  }
                }
              }
              else
              {
                v54 = &unk_101674E13;
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E0C, 7);
              v55 = 1;
              __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
              if ( __dst )
              {
                LODWORD(v855[0]) = 0;
                goto LABEL_90;
              }
              goto LABEL_1295;
            case 16LL:
              v34 = _mm_or_si128(
                      _mm_xor_si128(
                        _mm_loadu_si128((const __m128i *)(v31 + 7)),
                        *(__m128i *)"tool_call_outputcustom_tool_calltool_search_output"),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v31), v835));
              if ( !_mm_testz_si128(v34, v34) )
                goto LABEL_27;
              v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_101674E0C,
                      7,
                      v28);
              v862 = (void *)v5;
              v37 = 12;
              if ( v35 )
              {
                v38 = &unk_101674E13;
                if ( *(_BYTE *)v35 == 3 )
                {
                  v37 = *(_QWORD *)(v35 + 24);
                  if ( v37 < 0 )
                  {
                    v55 = 0;
                    v356 = (size_t)v838;
                    goto LABEL_587;
                  }
                  v38 = *(const void **)(v35 + 16);
                  if ( !v37 )
                  {
                    v39 = 1;
                    LOBYTE(v36) = 1;
                    LODWORD(v855[0]) = v36;
                    v37 = 0;
                    goto LABEL_70;
                  }
                }
              }
              else
              {
                v38 = &unk_101674E13;
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E0C, 7);
              v55 = 1;
              v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
              if ( !v39 )
              {
LABEL_1295:
                v356 = v37;
LABEL_587:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v55, v356);
              }
              LODWORD(v855[0]) = 0;
LABEL_70:
              v838 = (void *)v39;
              memcpy((void *)v39, v38, v37);
              v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "output",
                      6,
                      v28);
              codexmate_lib::core::relay::translator::flatten_function_call_output::h9e1aa310da980a1b(&v864, v56);
              v851 = 0;
              *((_QWORD *)&v852 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v864, v56);
              v57 = 4;
              v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v58 )
                goto LABEL_1290;
              *v58 = 1701605234;
              v863.i64[0] = 4;
              v863.i64[1] = (__int64)v58;
              v863.i64[2] = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v59 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
              *v59 = 1819242356;
              v873.i8[0] = 3;
              v873.i64[1] = 4;
              v873.i64[2] = (__int64)v59;
              v873.i64[3] = 4;
              v60 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v61 = v869.i64[1];
                v62 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v63 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v63;
                *(_OWORD *)(v869.i64[1] + v62 + 16) = v873.i128[1];
                v64 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v61 + v62) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v60 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v60 = &v867;
                v64 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v64);
              v57 = 12;
              v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
              if ( !v79 )
                goto LABEL_1290;
              qmemcpy(v79, "tool_call_id", 12);
              v863.i64[0] = 12;
              v863.i64[1] = (__int64)v79;
              v863.i64[2] = 12;
              v80 = 1;
              if ( !LOBYTE(v855[0]) )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
                v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
                if ( !v81 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37);
                v80 = v81;
              }
              memcpy((void *)v80, v838, v37);
              v873.i8[0] = 3;
              v873.i64[1] = v37;
              v873.i64[2] = v80;
              v873.i64[3] = v37;
              v82 = &v869;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v83 = v869.i64[1];
                v84 = 32 * v869.i64[3];
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v85 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v85;
                *(_OWORD *)(v869.i64[1] + v84 + 16) = v873.i128[1];
                v86 = (__m256i *)v873.i64[1];
                *(_OWORD *)(v83 + v84) = v873.i128[0];
                if ( v867.i8[0] != 6 )
                {
                  v82 = &v867;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
                }
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                v82 = &v867;
                v86 = &__b;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v86);
              v57 = 7;
              v95 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v95 )
LABEL_1290:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v57);
              *(_DWORD *)((char *)v95 + 3) = 1953391988;
              *v95 = 1953394531;
              v863.i64[0] = 7;
              v863.i64[1] = (__int64)v95;
              v863.i64[2] = 7;
              serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                &__b,
                &v864);
              if ( __b.i8[0] == 6 )
              {
                v869.i64[0] = __b.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v869,
                  &off_10196D480,
                  &off_10196C958);
              }
              v873 = __b;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v851, &v863);
              if ( v869.i64[0] == 0x8000000000000000LL )
              {
                v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                v96 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                v867.i64[0] = v96;
                *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
                if ( v867.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
              }
              else
              {
                v877 = v872;
                v876 = v871;
                v875 = v870;
                __b = v869;
                v858 = v873;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v867,
                  &__b,
                  &v858);
              }
              v866.i128[1] = v852;
              v866.i64[1] = v851;
              v866.i8[0] = 5;
              v99 = v848;
              if ( v848 == v846 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v846);
              *(__m256i *)(v847 + 32 * v99) = v866;
              v848 = v99 + 1;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
              if ( v37 )
              {
                v100 = v838;
LABEL_132:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v37, 1);
                v5 = (__int64)v862;
                goto LABEL_27;
              }
LABEL_133:
              v5 = (__int64)v862;
              goto LABEL_27;
            default:
              goto LABEL_27;
          }
          break;
        }
      }
    }
  }
LABEL_494:
  v335 = v856;
  v336 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v856);
  if ( v336 && *(_BYTE *)v336 == 3 )
  {
    v842 = *(_QWORD *)(v336 + 24);
    v857 = *(void **)(v336 + 16);
  }
  if ( (v842 & 0x8000000000000000LL) != 0LL )
  {
    v337 = 0;
    goto LABEL_499;
  }
  if ( v842 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5);
    v337 = 1;
    v338 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v842, 1);
    if ( !v338 )
LABEL_499:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v337, v842);
    v339 = v338;
  }
  else
  {
    v339 = 1;
  }
  v340 = v857;
  v865 = (void *)v339;
  memcpy((void *)v339, v857, v842);
  v864.i64[0] = 0;
  v864.i64[2] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v339, v340);
  v341 = 5;
  v342 = 1;
  v343 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v343 )
    goto LABEL_1277;
  *(_BYTE *)(v343 + 4) = 108;
  *(_DWORD *)v343 = 1701080941;
  v866.i64[0] = 5;
  v866.i64[1] = v343;
  v866.i64[2] = 5;
  v344 = v842;
  if ( v842 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v345 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v344, 1);
    if ( !v345 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v842);
    v342 = v345;
    v344 = v842;
  }
  memcpy((void *)v342, v865, v344);
  v873.i8[0] = 3;
  v873.i64[1] = v344;
  v873.i64[2] = v342;
  v873.i64[3] = v344;
  v346 = &v869;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v864, &v866);
  if ( __OFSUB__(0, v869.i64[0]) )
  {
    v347 = v869.i64[1];
    v348 = 32 * v869.i64[3];
    v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
    v349 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
    v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
    v867.i64[0] = v349;
    *(_OWORD *)(v869.i64[1] + v348 + 16) = v873.i128[1];
    v350 = (__m256i *)v873.i64[1];
    *(_OWORD *)(v347 + v348) = v873.i128[0];
    if ( v867.i8[0] != 6 )
    {
      v346 = &v867;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
    }
  }
  else
  {
    v877 = v872;
    v876 = v871;
    v875 = v870;
    __b = v869;
    v858 = v873;
    v346 = &v867;
    v350 = &__b;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v867,
      &__b,
      &v858);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v346, v350);
  v341 = 8;
  v351 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v351 )
LABEL_1277:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v341);
  *v351 = 0x736567617373656DLL;
  v866.i64[0] = 8;
  v866.i64[1] = (__int64)v351;
  v866.i64[2] = 8;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&__b, &v846);
  if ( __b.i8[0] == 6 )
  {
    v869.i64[0] = __b.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v869,
      &off_10196D480,
      &off_10196CA28);
  }
  v873 = __b;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v864, &v866);
  if ( v869.i64[0] == 0x8000000000000000LL )
  {
    v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
    v352 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
    v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
    v867.i64[0] = v352;
    *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v873;
    if ( v867.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
  }
  else
  {
    v877 = v872;
    v876 = v871;
    v875 = v870;
    __b = v869;
    v858 = v873;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v867,
      &__b,
      &v858);
  }
  v840 = v864.i128[0];
  v841 = v864.i64[2];
  LOBYTE(v839) = 5;
  v353 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E74, 6, v335);
  if ( v353 )
  {
    switch ( *(_BYTE *)v353 )
    {
      case 0:
        __b.i8[0] = 0;
        goto LABEL_530;
      case 1:
      case 2:
        __b.i128[1] = *(_OWORD *)(v353 + 16);
        v354 = *(_QWORD *)v353;
        __b.i64[1] = *(_QWORD *)(v353 + 8);
        __b.i64[0] = v354;
        goto LABEL_530;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v353 + 8);
        __b.i8[0] = 3;
        goto LABEL_530;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &__b.u32[2],
          v353 + 8);
        __b.i8[0] = 4;
        goto LABEL_530;
      case 5:
        if ( *(_QWORD *)(v353 + 24) )
        {
          v355 = *(_QWORD *)(v353 + 8);
          if ( !v355 )
            goto LABEL_1251;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v355,
            *(_QWORD *)(v353 + 16));
        }
        else
        {
          __b.i64[1] = 0;
          __b.i64[3] = 0;
        }
        __b.i8[0] = 5;
LABEL_530:
        v357 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674E74,
                            6u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v357);
        *v357 = __b;
        break;
    }
  }
  v358 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674E7A,
           19,
           v335);
  if ( v358 )
  {
    switch ( *(_BYTE *)v358 )
    {
      case 0:
        __b.i8[0] = 0;
        goto LABEL_542;
      case 1:
      case 2:
        __b.i128[1] = *(_OWORD *)(v358 + 16);
        v359 = *(_QWORD *)v358;
        __b.i64[1] = *(_QWORD *)(v358 + 8);
        __b.i64[0] = v359;
        goto LABEL_542;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v358 + 8);
        __b.i8[0] = 3;
        goto LABEL_542;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &__b.u32[2],
          v358 + 8);
        __b.i8[0] = 4;
        goto LABEL_542;
      case 5:
        if ( *(_QWORD *)(v358 + 24) )
        {
          v360 = *(_QWORD *)(v358 + 8);
          if ( !v360 )
            goto LABEL_1251;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v360,
            *(_QWORD *)(v358 + 16));
        }
        else
        {
          __b.i64[1] = 0;
          __b.i64[3] = 0;
        }
        __b.i8[0] = 5;
LABEL_542:
        v361 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674E7A,
                            0x13u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v361);
        *v361 = __b;
        break;
    }
  }
  v362 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674E8D,
           11,
           v335);
  if ( v362 )
  {
    switch ( *(_BYTE *)v362 )
    {
      case 0:
        __b.i8[0] = 0;
        goto LABEL_554;
      case 1:
      case 2:
        __b.i128[1] = *(_OWORD *)(v362 + 16);
        v363 = *(_QWORD *)v362;
        __b.i64[1] = *(_QWORD *)(v362 + 8);
        __b.i64[0] = v363;
        goto LABEL_554;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v362 + 8);
        __b.i8[0] = 3;
        goto LABEL_554;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &__b.u32[2],
          v362 + 8);
        __b.i8[0] = 4;
        goto LABEL_554;
      case 5:
        if ( *(_QWORD *)(v362 + 24) )
        {
          v364 = *(_QWORD *)(v362 + 8);
          if ( !v364 )
            goto LABEL_1251;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v364,
            *(_QWORD *)(v362 + 16));
        }
        else
        {
          __b.i64[1] = 0;
          __b.i64[3] = 0;
        }
        __b.i8[0] = 5;
LABEL_554:
        v365 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674E8D,
                            0xBu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v365);
        *v365 = __b;
        break;
    }
  }
  v366 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E98, 5, v335);
  if ( v366 )
  {
    switch ( *(_BYTE *)v366 )
    {
      case 0:
        __b.i8[0] = 0;
        goto LABEL_566;
      case 1:
      case 2:
        __b.i128[1] = *(_OWORD *)(v366 + 16);
        v367 = *(_QWORD *)v366;
        __b.i64[1] = *(_QWORD *)(v366 + 8);
        __b.i64[0] = v367;
        goto LABEL_566;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v366 + 8);
        __b.i8[0] = 3;
        goto LABEL_566;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &__b.u32[2],
          v366 + 8);
        __b.i8[0] = 4;
        goto LABEL_566;
      case 5:
        if ( *(_QWORD *)(v366 + 24) )
        {
          v368 = *(_QWORD *)(v366 + 8);
          if ( !v368 )
            goto LABEL_1251;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v368,
            *(_QWORD *)(v366 + 16));
        }
        else
        {
          __b.i64[1] = 0;
          __b.i64[3] = 0;
        }
        __b.i8[0] = 5;
LABEL_566:
        v369 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674E98,
                            5u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v369);
        *v369 = __b;
        break;
    }
  }
  v370 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674E9D,
           17,
           v335);
  if ( v370 )
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::dialects::generic::is_openai_o_series::h79a14a2f0cc4992a(
                            (__int64)v865,
                            v842) )
    {
      switch ( *(_BYTE *)v370 )
      {
        case 0:
          __b.i8[0] = 0;
          goto LABEL_592;
        case 1:
        case 2:
          __b.i128[1] = *(_OWORD *)(v370 + 16);
          v371 = *(_QWORD *)v370;
          __b.i64[1] = *(_QWORD *)(v370 + 8);
          __b.i64[0] = v371;
          goto LABEL_592;
        case 3:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v370 + 8);
          __b.i8[0] = 3;
          goto LABEL_592;
        case 4:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &__b.u32[2],
            v370 + 8);
          __b.i8[0] = 4;
          goto LABEL_592;
        case 5:
          if ( *(_QWORD *)(v370 + 24) )
          {
            v373 = *(_QWORD *)(v370 + 8);
            if ( !v373 )
              goto LABEL_1251;
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
              &__b.u32[2],
              v373,
              *(_QWORD *)(v370 + 16));
          }
          else
          {
            __b.i64[1] = 0;
            __b.i64[3] = 0;
          }
          __b.i8[0] = 5;
LABEL_592:
          v375 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                              &unk_101674EB8,
                              0x15u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v375);
          break;
      }
    }
    else
    {
      switch ( *(_BYTE *)v370 )
      {
        case 0:
          __b.i8[0] = 0;
          goto LABEL_595;
        case 1:
        case 2:
          __b.i128[1] = *(_OWORD *)(v370 + 16);
          v372 = *(_QWORD *)v370;
          __b.i64[1] = *(_QWORD *)(v370 + 8);
          __b.i64[0] = v372;
          goto LABEL_595;
        case 3:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v370 + 8);
          __b.i8[0] = 3;
          goto LABEL_595;
        case 4:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &__b.u32[2],
            v370 + 8);
          __b.i8[0] = 4;
          goto LABEL_595;
        case 5:
          if ( *(_QWORD *)(v370 + 24) )
          {
            v374 = *(_QWORD *)(v370 + 8);
            if ( !v374 )
              goto LABEL_1251;
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
              &__b.u32[2],
              v374,
              *(_QWORD *)(v370 + 16));
          }
          else
          {
            __b.i64[1] = 0;
            __b.i64[3] = 0;
          }
          __b.i8[0] = 5;
LABEL_595:
          v375 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                              &unk_101674EAE,
                              0xAu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v375);
          break;
      }
    }
    *v375 = __b;
  }
  v376 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674EAE,
           10,
           v335);
  if ( v376 )
  {
    switch ( *(_BYTE *)v376 )
    {
      case 0:
        __b.i8[0] = 0;
        goto LABEL_608;
      case 1:
      case 2:
        __b.i128[1] = *(_OWORD *)(v376 + 16);
        v377 = *(_QWORD *)v376;
        __b.i64[1] = *(_QWORD *)(v376 + 8);
        __b.i64[0] = v377;
        goto LABEL_608;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v376 + 8);
        __b.i8[0] = 3;
        goto LABEL_608;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &__b.u32[2],
          v376 + 8);
        __b.i8[0] = 4;
        goto LABEL_608;
      case 5:
        if ( *(_QWORD *)(v376 + 24) )
        {
          v378 = *(_QWORD *)(v376 + 8);
          if ( !v378 )
            goto LABEL_1251;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v378,
            *(_QWORD *)(v376 + 16));
        }
        else
        {
          __b.i64[1] = 0;
          __b.i64[3] = 0;
        }
        __b.i8[0] = 5;
LABEL_608:
        v379 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674EAE,
                            0xAu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v379);
        *v379 = __b;
        break;
    }
  }
  v380 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674EB8,
           21,
           v335);
  if ( !v380 )
    goto LABEL_621;
  switch ( *(_BYTE *)v380 )
  {
    case 0:
      __b.i8[0] = 0;
      goto LABEL_620;
    case 1:
    case 2:
      __b.i128[1] = *(_OWORD *)(v380 + 16);
      v381 = *(_QWORD *)v380;
      __b.i64[1] = *(_QWORD *)(v380 + 8);
      __b.i64[0] = v381;
      goto LABEL_620;
    case 3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__b.u32[2], v380 + 8);
      __b.i8[0] = 3;
      goto LABEL_620;
    case 4:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
        &__b.u32[2],
        v380 + 8);
      __b.i8[0] = 4;
      goto LABEL_620;
    case 5:
      if ( *(_QWORD *)(v380 + 24) )
      {
        v382 = *(_QWORD *)(v380 + 8);
        if ( v382 )
        {
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &__b.u32[2],
            v382,
            *(_QWORD *)(v380 + 16));
          goto LABEL_619;
        }
LABEL_1251:
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
      }
      __b.i64[1] = 0;
      __b.i64[3] = 0;
LABEL_619:
      __b.i8[0] = 5;
LABEL_620:
      v383 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                          &unk_101674EB8,
                          0x15u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v383);
      *v383 = __b;
LABEL_621:
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
      v387 = v384;
      if ( *(_BYTE *)(v384 + 16) == 1 )
      {
        v388 = *(_QWORD *)v384;
        v389 = *(_QWORD *)(v387 + 8);
      }
      else
      {
        v388 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                 &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                 21,
                 v385,
                 v386);
        *(_QWORD *)v387 = v388;
        *(_QWORD *)(v387 + 8) = v389;
        *(_BYTE *)(v387 + 16) = 1;
      }
      v835.i64[0] = v387;
      *(_QWORD *)v387 = v388 + 1;
      memset(&v858.u32[2], 0, 24);
      v858.i64[0] = (__int64)&xmmword_1015FBEC0;
      v859 = v388;
      v860 = v389;
      v390 = (__m256i *)&unk_101674ECD;
      v391 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &unk_101674ECD,
                        5,
                        v335);
      v394 = v391;
      if ( !v391 || *v391 != 4 )
        goto LABEL_861;
      v829 = 0;
      v830 = 8u;
      v395 = v835.i64[0];
      if ( *(_BYTE *)(v835.i64[0] + 16) == 1 )
      {
        v396 = *(_QWORD *)v835.i64[0];
        v397 = *(_QWORD *)(v835.i64[0] + 8);
      }
      else
      {
        v396 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&unk_101674ECD, v835.i64[0], v392, v393);
        v395 = v835.i64[0];
        *(_QWORD *)v835.i64[0] = v396;
        *(_QWORD *)(v395 + 8) = v397;
        *(_BYTE *)(v395 + 16) = 1;
      }
      *(_QWORD *)v395 = v396 + 1;
      memset(&v867.u32[2], 0, 24);
      v867.i64[0] = (__int64)&xmmword_1015FBEC0;
      v868[0] = v396;
      v868[1] = v397;
      v398 = v394[3];
      if ( v398 )
      {
        v5 = v394[2];
        v399 = v5 + 32 * v398;
        _R14 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
        do
        {
          v390 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
          v401 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &anon_10420c9971c21f44d230d15b39fb3fec_75,
                   4,
                   v5);
          if ( v401 )
          {
            if ( *(_BYTE *)v401 == 3 && *(_QWORD *)(v401 + 24) == 9 )
            {
              v397 = 0x63617073656D616ELL;
              if ( !(**(_QWORD **)(v401 + 16) ^ 0x63617073656D616ELL
                   | *(unsigned __int8 *)(*(_QWORD *)(v401 + 16) + 8LL) ^ 0x65LL) )
              {
                v390 = (__m256i *)&unk_101674ECD;
                v402 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &unk_101674ECD,
                         5,
                         v5);
                if ( v402 )
                {
                  if ( *(_BYTE *)v402 == 4 )
                  {
                    v403 = *(_QWORD *)(v402 + 24);
                    if ( v403 )
                    {
                      v404 = *(char **)(v402 + 16);
                      v857 = &v404[32 * v403];
                      do
                      {
                        v390 = (__m256i *)"name";
                        v405 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                 "name",
                                 4,
                                 v404);
                        if ( v405 && *(_BYTE *)v405 == 3 )
                        {
                          v406 = *(void **)(v405 + 24);
                          if ( (__int64)v406 < 0 )
                          {
                            v533 = 0;
                            goto LABEL_829;
                          }
                          v407 = *(void **)(v405 + 16);
                          __s2 = v394;
                          if ( v406 )
                          {
                            v862 = v407;
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v407);
                            v408 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v406, 1);
                            if ( !v408 )
                            {
                              v862 = v406;
                              goto LABEL_1311;
                            }
                            v407 = v862;
                          }
                          else
                          {
                            v408 = 1;
                          }
                          v409 = (void *)v408;
                          memcpy((void *)v408, v407, (size_t)v406);
                          v869.i64[0] = (__int64)v406;
                          v862 = v409;
                          v869.i64[1] = (__int64)v409;
                          v869.i64[2] = (__int64)v406;
                          v390 = &__b;
                          hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h48bd67d3bca7c611(
                            &__b,
                            &v867,
                            &v869);
                          v394 = __s2;
                          _R14 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                          v410 = __b.i64[1];
                          v397 = __b.i64[0];
                          if ( __b.i64[0] == 0x8000000000000000LL )
                          {
                            ++*(_QWORD *)(__b.i64[1] - 8);
                          }
                          else
                          {
                            v411 = (const __m128i *)__b.i64[3];
                            v412 = *(const __m128i **)__b.i64[3];
                            v413 = *(_QWORD *)(__b.i64[3] + 8);
                            v414 = v875 & v413;
                            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)__b.i64[3] + (v875 & v413))));
                            if ( !(_DWORD)_R10 )
                            {
                              v420 = 16;
                              do
                              {
                                v414 = v413 & (v420 + v414);
                                _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v412 + v414)));
                                v420 += 16;
                              }
                              while ( !(_DWORD)_R10 );
                            }
                            __asm { tzcnt   r10d, r10d }
                            _R10 = v413 & (v414 + _R10);
                            v417 = v412->i8[_R10];
                            if ( v417 >= 0 )
                            {
                              _R9D = _mm_movemask_epi8(_mm_load_si128(v412));
                              __asm { tzcnt   r10d, r9d }
                              v417 = v412->i8[_R10];
                            }
                            v418 = __b.i64[2];
                            v419 = v875 >> 57;
                            v412->i8[_R10] = v875 >> 57;
                            v412[1].i8[v413 & (_R10 - 16)] = v419;
                            v390 = (__m256i *)&v412[-2 * _R10];
                            v390[-1].i64[0] = v397;
                            v390[-1].i64[1] = v410;
                            v390[-1].i64[2] = v418;
                            v390[-1].i64[3] = 0;
                            v411[1] = _mm_sub_epi64(
                                        _mm_loadu_si128(v411 + 1),
                                        _mm_insert_epi64(
                                          _mm_load_si128((const __m128i *)&xmmword_1015FB9F0),
                                          v417 & 1,
                                          0));
                            ++v390[-1].i64[3];
                            _R14 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                          }
                        }
                        v404 += 32;
                      }
                      while ( v404 != v857 );
                    }
                  }
                }
              }
            }
          }
          v5 += 32;
        }
        while ( v5 != v399 );
        v422 = v394[3];
        if ( v422 )
        {
          v423 = (char *)v394[2];
          v862 = &v423[32 * v422];
          do
          {
            v424 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &anon_10420c9971c21f44d230d15b39fb3fec_75,
                     4,
                     v423);
            if ( v424
              && *(_BYTE *)v424 == 3
              && *(_QWORD *)(v424 + 24) == 9
              && !(**(_QWORD **)(v424 + 16) ^ 0x63617073656D616ELL
                 | *(unsigned __int8 *)(*(_QWORD *)(v424 + 16) + 8LL) ^ 0x65LL) )
            {
              v428 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "name",
                       4,
                       v423);
              v429 = 1;
              if ( v428 && *(_BYTE *)v428 == 3 )
              {
                v429 = *(_QWORD *)(v428 + 16);
                v430 = *(_QWORD *)(v428 + 24);
              }
              else
              {
                v430 = 0;
              }
              v812 = (void *)v429;
              v813 = v430;
              v390 = (__m256i *)&unk_101674ECD;
              v431 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       &unk_101674ECD,
                       5,
                       v423);
              if ( v431 && *(_BYTE *)v431 == 4 )
              {
                v5 = v813;
                if ( v813 >= 2 )
                {
                  v432 = v812;
                  if ( *(_WORD *)((char *)v812 + v813 - 2) != 24415 )
                    goto LABEL_676;
                  __s2 = (void *)_R14;
                  v434 = v431;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674ECD, 5);
                  v435 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1);
                  if ( !v435 )
                  {
                    v862 = (void *)v5;
LABEL_1311:
                    v533 = 1;
LABEL_829:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v533, v862);
                  }
                  v436 = v435;
                  v390 = v435;
                  memcpy(v435, v432, v5);
                  *(_QWORD *)&v825 = v5;
                  *((_QWORD *)&v825 + 1) = v436;
                  v826 = v5;
                  v431 = v434;
                  _R14 = (__int64)__s2;
                }
                else
                {
                  if ( !v813 )
                  {
                    *(_QWORD *)&v825 = 0;
                    *((_QWORD *)&v825 + 1) = 1;
                    v826 = 0;
                    goto LABEL_679;
                  }
LABEL_676:
                  v869.i64[0] = (__int64)&v812;
                  v869.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                  v390 = &__b;
                  v433 = v431;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(&__b, &unk_1017C5D0B, &v869);
                  v431 = v433;
                  v397 = __b.i64[1];
                  v825 = __b.i128[0];
                  v826 = __b.u64[2];
                }
LABEL_679:
                v437 = *(_QWORD *)(v431 + 24);
                if ( !v437 )
                {
LABEL_799:
                  if ( (_QWORD)v825 )
                  {
                    v390 = *((__m256i **)&v825 + 1);
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v825 + 1), v825, 1);
                  }
                  goto LABEL_664;
                }
                v5 = *(_QWORD *)(v431 + 16);
                v438 = (void *)(v5 + 32 * v437);
                v838 = v438;
                while ( 2 )
                {
                  v439 = 4;
                  v390 = (__m256i *)"name";
                  v440 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           "name",
                           4,
                           v5);
                  if ( !v440 || *(_BYTE *)v440 != 3 )
                    goto LABEL_681;
                  v441 = *(void **)(v440 + 24);
                  __s2 = *(void **)(v440 + 16);
                  v808[0] = __s2;
                  v808[1] = v441;
                  if ( !v826
                    || (unsigned __int64)v441 >= v826
                    && (v390 = *((__m256i **)&v825 + 1),
                        v439 = (__int64)__s2,
                        !memcmp(*((const void **)&v825 + 1), __s2, v826)) )
                  {
                    if ( (__int64)v441 < 0 )
                    {
                      v744 = 0;
                      goto LABEL_1159;
                    }
                    if ( v441 )
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v390, v439);
                      v444 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v441, 1);
                      if ( !v444 )
                      {
                        _R14 = (__int64)v441;
                        v744 = 1;
LABEL_1159:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v744, _R14);
                      }
                      _R14 = v444;
                    }
                    else
                    {
                      _R14 = 1;
                    }
                    i = (__m256i *)_R14;
                    v443 = (char *)__s2;
                    memcpy((void *)_R14, __s2, (size_t)v441);
                    *(_QWORD *)&v823 = v441;
                    *((_QWORD *)&v823 + 1) = _R14;
                    v824 = (__int64)v441;
                  }
                  else
                  {
                    __b.i64[0] = (__int64)&v825;
                    __b.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                    __b.i64[2] = (__int64)v808;
                    __b.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                    i = &v869;
                    v443 = (char *)&anon_10420c9971c21f44d230d15b39fb3fec_280;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(
                      &v869,
                      &anon_10420c9971c21f44d230d15b39fb3fec_280,
                      &__b);
                    v823 = v869.i128[0];
                    v824 = v869.i64[2];
                  }
                  v843 = (char **)v5;
                  if ( !v867.i64[3] )
                  {
LABEL_703:
                    v456 = (__int64)__dst;
                    goto LABEL_705;
                  }
                  v445 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v868, __s2, v441);
                  v446 = v867.i64[1];
                  v447 = v867.i64[0];
                  si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v445 >> 57), (__m128i)0LL);
                  v443 = (char *)(v867.i64[0] - 32);
                  for ( i = nullptr; ; i = (__m256i *)((char *)i + 16) )
                  {
                    v449 = v446 & v445;
                    v450 = _mm_loadu_si128((const __m128i *)(v447 + v449));
                    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v450, si128));
                    if ( _R12D )
                      break;
LABEL_701:
                    v5 = (__int64)v843;
                    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v450, (__m128i)-1LL)) )
                      goto LABEL_703;
                    v445 = (unsigned __int64)&i->u64[2] + v449;
                  }
                  v855[0] = v449;
                  v857 = v423;
                  v844 = v446;
                  *(__m128i *)v845 = si128;
                  v832 = v443;
                  v854 = (size_t)i;
                  *(__m128i *)v828 = v450;
                  while ( 1 )
                  {
                    v452 = _R14;
                    __asm { tzcnt   r14d, r12d }
                    v453 = v446 & (v449 + _R14);
                    v454 = &v443[-32 * v453];
                    if ( v441 == *((void **)v454 + 2) )
                    {
                      v443 = *((char **)v454 + 1);
                      i = (__m256i *)__s2;
                      if ( !memcmp(__s2, v443, (size_t)v441) )
                        break;
                    }
                    v455 = _R12D - 1;
                    LOWORD(v455) = _R12D & (_R12D - 1);
                    v620 = (_WORD)v455 == 0;
                    _R12D = v455;
                    v449 = v855[0];
                    _R14 = v452;
                    v423 = (char *)v857;
                    v446 = v844;
                    si128 = _mm_load_si128((const __m128i *)v845);
                    v443 = (char *)v832;
                    i = (__m256i *)v854;
                    v450 = _mm_load_si128((const __m128i *)v828);
                    if ( v620 )
                      goto LABEL_701;
                  }
                  v457 = *(_QWORD *)(v447 - 32 * v453 - 8) < 2u;
                  _R14 = v452;
                  v423 = (char *)v857;
                  v456 = (__int64)__dst;
                  v5 = (__int64)v843;
                  if ( v457 )
                  {
LABEL_705:
                    if ( v826 )
                    {
                      if ( (unsigned __int64)v441 < v826 )
                      {
                        if ( v441 )
                          goto LABEL_708;
                        v456 = 1;
                        goto LABEL_715;
                      }
                      i = *((__m256i **)&v825 + 1);
                      v443 = (char *)__s2;
                      if ( memcmp(*((const void **)&v825 + 1), __s2, v826) )
                      {
                        if ( (__int64)v441 < 0 )
                        {
                          v458 = 0;
                          goto LABEL_1167;
                        }
LABEL_708:
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(i, v443);
                        v458 = 1;
                        v459 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v441, 1);
                        if ( !v459 )
                        {
                          __dst = v441;
LABEL_1167:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v458, __dst);
                        }
                        v456 = v459;
LABEL_715:
                        v460 = memcpy((void *)v456, __s2, (size_t)v441);
                        v819 = (__int64)v441;
                        *(_QWORD *)&v820 = v456;
                        *((_QWORD *)&v820 + 1) = v441;
LABEL_716:
                        if ( v441 == (void *)v824
                          && (LODWORD(v460) = memcmp((const void *)v820, *((const void **)&v823 + 1), (size_t)v441),
                              !(_DWORD)v460) )
                        {
                          LODWORD(__s2) = 1;
                        }
                        else
                        {
                          LOBYTE(v460) = 1;
                          LODWORD(__s2) = (_DWORD)v460;
                          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                            &v869,
                            &v819);
                          __b.i64[2] = v824;
                          __b.i128[0] = v823;
                          LODWORD(__s2) = 0;
                          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(
                            &v873,
                            &v858,
                            &v869,
                            &__b);
                          if ( v873.i64[0] != 0x8000000000000000LL && v873.i64[0] )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v873.i64[1], v873.i64[0], 1);
                          LODWORD(__s2) = 0;
                        }
                        v461 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                 "descriptionparametersstrict",
                                 11,
                                 v5);
                        if ( v461 )
                        {
                          if ( *(_BYTE *)v461 == 3 )
                            v855[0] = *(_QWORD *)(v461 + 16);
                          else
                            v855[0] = 0;
                          v844 = *(_QWORD *)(v461 + 24);
                        }
                        else
                        {
                          v855[0] = 0;
                        }
                        v462 = 10;
                        v463 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                 "parametersstrict",
                                 10,
                                 v5);
                        __dst = (void *)v456;
                        if ( v463 )
                        {
                          switch ( *(_BYTE *)v463 )
                          {
                            case 0:
                              __b.i8[0] = 0;
                              break;
                            case 1:
                            case 2:
                              __b.i128[1] = *(_OWORD *)(v463 + 16);
                              v464 = *(_QWORD *)v463;
                              __b.i64[1] = *(_QWORD *)(v463 + 8);
                              __b.i64[0] = v464;
                              break;
                            case 3:
                              v462 = v463 + 8;
                              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                                &__b.u32[2],
                                v463 + 8);
                              __b.i8[0] = 3;
                              break;
                            case 4:
                              v462 = v463 + 8;
                              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                                &__b.u32[2],
                                v463 + 8);
                              __b.i8[0] = 4;
                              break;
                            case 5:
                              if ( *(_QWORD *)(v463 + 24) )
                              {
                                v462 = *(_QWORD *)(v463 + 8);
                                if ( !v462 )
                                  core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                                  &__b.u32[2],
                                  v462,
                                  *(_QWORD *)(v463 + 16));
                              }
                              else
                              {
                                __b.i64[1] = 0;
                                __b.i64[3] = 0;
                              }
                              __b.i8[0] = 5;
                              break;
                          }
                          v836 = __b;
                        }
                        else
                        {
                          v851 = 0;
                          *((_QWORD *)&v852 + 1) = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("parametersstrict", 10);
                          v465 = 4;
                          v466 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v466 )
                            goto LABEL_1321;
                          *v466 = 1701869940;
                          v863.i64[0] = 4;
                          v863.i64[1] = (__int64)v466;
                          v863.i64[2] = 4;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                          v467 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                          if ( !v467 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
                          *(_WORD *)(v467 + 4) = 29795;
                          *(_DWORD *)v467 = 1701470831;
                          v864.i8[0] = 3;
                          v864.i64[1] = 6;
                          v864.i64[2] = v467;
                          v864.i64[3] = 6;
                          v468 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v851,
                            &v863);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v469 = v869.i64[1];
                            v470 = 32 * v869.i64[3];
                            v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v471 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v873.i64[0] = v471;
                            *(_OWORD *)(v869.i64[1] + v470 + 16) = v864.i128[1];
                            v472 = (__m256i *)v864.i64[1];
                            *(_OWORD *)(v469 + v470) = v864.i128[0];
                            if ( v873.i8[0] != 6 )
                            {
                              v468 = &v873;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v866 = v864;
                            v468 = &v873;
                            v472 = &__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v873,
                              &__b,
                              &v866);
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v468, v472);
                          v465 = 10;
                          v473 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                          if ( !v473 )
LABEL_1321:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v465);
                          qmemcpy(v473, "properties", 10);
                          v863.i64[0] = 10;
                          v863.i64[1] = (__int64)v473;
                          v863.i64[2] = 10;
                          v864.i64[1] = 0;
                          v864.i64[3] = 0;
                          v864.i8[0] = 5;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v851,
                            &v863);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v474 = v869.i64[1];
                            v475 = 32 * v869.i64[3];
                            v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v476 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v873.i64[0] = v476;
                            *(_OWORD *)(v869.i64[1] + v475 + 16) = v864.i128[1];
                            v462 = v864.i64[1];
                            *(_OWORD *)(v474 + v475) = v864.i128[0];
                            if ( v873.i8[0] != 6 )
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v866 = v864;
                            v462 = (__int64)&__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v873,
                              &__b,
                              &v866);
                          }
                          v836.i128[1] = v852;
                          v836.i64[1] = v851;
                          v836.i8[0] = 5;
                        }
                        codexmate_lib::core::relay::translator::clean_tool_schema::hcd696520e11343af(&v836);
                        v817 = 0;
                        *((_QWORD *)&v818 + 1) = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v836, v462);
                        v477 = 4;
                        v478 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v478 )
LABEL_1303:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v477);
                        *v478 = 1701667182;
                        v863.i64[0] = 4;
                        v863.i64[1] = (__int64)v478;
                        v863.i64[2] = 4;
                        v864.i128[1] = v820;
                        v864.i64[1] = v819;
                        v864.i8[0] = 3;
                        v479 = &v869;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                          &v869,
                          &v817,
                          &v863);
                        if ( v869.i64[0] == 0x8000000000000000LL )
                        {
                          v480 = v869.i64[1];
                          v481 = 32 * v869.i64[3];
                          v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                          v482 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                          v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                          v873.i64[0] = v482;
                          *(_OWORD *)(v869.i64[1] + v481 + 16) = v864.i128[1];
                          v483 = (__m256i *)v864.i64[1];
                          *(_OWORD *)(v480 + v481) = v864.i128[0];
                          if ( v873.i8[0] != 6 )
                          {
                            v479 = &v873;
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                          }
                        }
                        else
                        {
                          v877 = v872;
                          v876 = v871;
                          v875 = v870;
                          __b = v869;
                          v866 = v864;
                          v479 = &v873;
                          v483 = &__b;
                          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                            &v873,
                            &__b,
                            &v866);
                        }
                        if ( v855[0] )
                        {
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v479, v483);
                          v477 = 11;
                          v484 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
                          if ( !v484 )
                            goto LABEL_1303;
                          qmemcpy(v484, "description", 11);
                          v863.i64[0] = 11;
                          v863.i64[1] = (__int64)v484;
                          v863.i64[2] = 11;
                          v485 = v844;
                          if ( (v844 & 0x8000000000000000LL) != 0LL )
                          {
                            v806 = 0;
LABEL_1165:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v806, v831.i64[0]);
                          }
                          if ( v844 )
                          {
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
                            v486 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v485, 1);
                            if ( !v486 )
                            {
                              v831.i64[0] = v485;
                              v806 = 1;
                              goto LABEL_1165;
                            }
                          }
                          else
                          {
                            v486 = 1;
                          }
                          v487 = v486;
                          memcpy((void *)v486, (const void *)v855[0], v485);
                          v864.i64[1] = v485;
                          v831.i64[0] = v487;
                          v864.i64[2] = v487;
                          v864.i64[3] = v485;
                          v864.i8[0] = 3;
                          v479 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v817,
                            &v863);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v488 = v869.i64[1];
                            v489 = 32 * v869.i64[3];
                            v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v490 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v873.i64[0] = v490;
                            *(_OWORD *)(v869.i64[1] + v489 + 16) = v864.i128[1];
                            v483 = (__m256i *)v864.i64[1];
                            *(_OWORD *)(v488 + v489) = v864.i128[0];
                            if ( v873.i8[0] != 6 )
                            {
                              v479 = &v873;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v866 = v864;
                            v479 = &v873;
                            v483 = &__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v873,
                              &__b,
                              &v866);
                          }
                        }
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v479, v483);
                        v477 = 10;
                        v491 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                        if ( !v491 )
                          goto LABEL_1303;
                        qmemcpy(v491, "parameters", 10);
                        v863.i64[0] = 10;
                        v863.i64[1] = (__int64)v491;
                        v863.i64[2] = 10;
                        v864 = v836;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                          &v869,
                          &v817,
                          &v863);
                        v5 = (__int64)v843;
                        if ( v869.i64[0] == 0x8000000000000000LL )
                        {
                          v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                          v492 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                          v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                          v873.i64[0] = v492;
                          *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v864;
                          if ( v873.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                        }
                        else
                        {
                          v877 = v872;
                          v876 = v871;
                          v875 = v870;
                          __b = v869;
                          v866 = v864;
                          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                            &v873,
                            &__b,
                            &v866);
                        }
                        v493 = 6;
                        v494 = (__m256i *)"strict";
                        v495 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                          "strict",
                                          6,
                                          v5);
                        if ( v495 && *v495 == 1 && (v495[1] & 1) != 0 )
                        {
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("strict", 6);
                          v496 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                          if ( !v496 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
                          *(_WORD *)(v496 + 4) = 29795;
                          *(_DWORD *)v496 = 1769108595;
                          v863.i64[0] = 6;
                          v863.i64[1] = v496;
                          v863.i64[2] = 6;
                          v864.i16[0] = 257;
                          v494 = &v869;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v869,
                            &v817,
                            &v863);
                          if ( v869.i64[0] == 0x8000000000000000LL )
                          {
                            v497 = v869.i64[1];
                            v498 = 32 * v869.i64[3];
                            v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                            v499 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                            v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                            v873.i64[0] = v499;
                            *(_OWORD *)(v869.i64[1] + v498 + 16) = v864.i128[1];
                            v493 = v864.i64[1];
                            *(_OWORD *)(v497 + v498) = v864.i128[0];
                            if ( v873.i8[0] != 6 )
                            {
                              v494 = &v873;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                            }
                          }
                          else
                          {
                            v877 = v872;
                            v876 = v871;
                            v875 = v870;
                            __b = v869;
                            v866 = v864;
                            v494 = &v873;
                            v493 = (__int64)&__b;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v873,
                              &__b,
                              &v866);
                          }
                        }
                        *(_QWORD *)&v814 = 0;
                        v815 = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v494, v493);
                        v500 = 4;
                        v501 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v501 )
                          goto LABEL_1313;
                        *v501 = 1701869940;
                        v863.i64[0] = 4;
                        v863.i64[1] = (__int64)v501;
                        v863.i64[2] = 4;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                        v502 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                        if ( !v502 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                        *v502 = 0x6E6F6974636E7566LL;
                        v864.i8[0] = 3;
                        v864.i64[1] = 8;
                        v864.i64[2] = (__int64)v502;
                        v864.i64[3] = 8;
                        v503 = &v869;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                          &v869,
                          &v814,
                          &v863);
                        if ( v869.i64[0] == 0x8000000000000000LL )
                        {
                          v504 = v869.i64[1];
                          v505 = 32 * v869.i64[3];
                          v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                          v506 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                          v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                          v873.i64[0] = v506;
                          *(_OWORD *)(v869.i64[1] + v505 + 16) = v864.i128[1];
                          v507 = (__m256i *)v864.i64[1];
                          *(_OWORD *)(v504 + v505) = v864.i128[0];
                          if ( v873.i8[0] != 6 )
                          {
                            v503 = &v873;
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                          }
                        }
                        else
                        {
                          v877 = v872;
                          v876 = v871;
                          v875 = v870;
                          __b = v869;
                          v866 = v864;
                          v503 = &v873;
                          v507 = &__b;
                          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                            &v873,
                            &__b,
                            &v866);
                        }
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v503, v507);
                        v500 = 8;
                        v508 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                        if ( !v508 )
LABEL_1313:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v500);
                        *v508 = 0x6E6F6974636E7566LL;
                        v807[0] = 8;
                        v807[1] = v508;
                        v807[2] = 8;
                        v864.i128[1] = v818;
                        v864.i64[1] = v817;
                        v864.i8[0] = 5;
                        serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                          &__b,
                          &v864);
                        v438 = v838;
                        if ( __b.i8[0] == 6 )
                        {
                          v869.i64[0] = __b.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                            43,
                            &v869,
                            &off_10196D480,
                            &off_10196CA40);
                        }
                        v863 = __b;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                          &v869,
                          &v814,
                          v807);
                        if ( v869.i64[0] == 0x8000000000000000LL )
                        {
                          v873.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
                          v509 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
                          v873.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
                          v873.i64[0] = v509;
                          *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v863;
                          if ( v873.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v873);
                        }
                        else
                        {
                          v877 = v872;
                          v876 = v871;
                          v875 = v870;
                          __b = v869;
                          v866 = v863;
                          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                            &v873,
                            &__b,
                            &v866);
                        }
                        v390 = &v864;
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v864);
                        v853 = v815;
                        v852 = v814;
                        LOBYTE(v851) = 5;
                        v510 = *((_QWORD *)&v830 + 1);
                        if ( *((_QWORD *)&v830 + 1) == v829 )
                        {
                          v390 = (__m256i *)&v829;
                          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v829);
                        }
                        v511 = v830;
                        v512 = 32 * v510;
                        *(_QWORD *)(v830 + v512 + 24) = v853;
                        *(_QWORD *)(v511 + v512 + 16) = *((_QWORD *)&v852 + 1);
                        v397 = v851;
                        *(_QWORD *)(v511 + v512 + 8) = v852;
                        *(_QWORD *)(v511 + v512) = v397;
                        *((_QWORD *)&v830 + 1) = v510 + 1;
                        if ( (_BYTE)__s2 && (_QWORD)v823 )
                        {
                          v390 = *((__m256i **)&v823 + 1);
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v823 + 1), v823, 1);
                        }
LABEL_681:
                        v5 += 32;
                        if ( (void *)v5 == v438 )
                          goto LABEL_799;
                        continue;
                      }
                    }
                  }
                  break;
                }
                v460 = (void *)_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                                 &v819,
                                 &v823);
                v441 = *((void **)&v820 + 1);
                goto LABEL_716;
              }
            }
            else
            {
              codexmate_lib::core::relay::translator::responses_tool_to_chat_tools::h6084d502058dbcf5(&v869, v423);
              v857 = v423;
              v426 = *(__int128 *)((char *)v869.i128 + 8);
              v427 = 32 * v869.i64[2];
              __b.i64[0] = v869.i64[1];
              __b.i64[1] = v869.i64[1];
              __b.i64[2] = v869.i64[0];
              __b.i64[3] = v869.i64[1] + 32 * v869.i64[2];
              v5 = *((_QWORD *)&v830 + 1);
              if ( v869.i64[2] > (unsigned __int64)(v829 - *((_QWORD *)&v830 + 1)) )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v829,
                  *((_QWORD *)&v830 + 1),
                  v869.i64[2],
                  8,
                  32,
                  v425);
                v5 = *((_QWORD *)&v830 + 1);
              }
              memcpy((void *)(v830 + 32 * v5), (const void *)v426, v427);
              *((_QWORD *)&v830 + 1) = v5 + *((_QWORD *)&v426 + 1);
              __b.i64[3] = v426;
              v390 = &__b;
              _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&__b);
              v423 = (char *)v857;
            }
LABEL_664:
            v423 += 32;
          }
          while ( v423 != v862 );
        }
      }
      v852 = v830;
      v851 = v829;
      v513 = v835.i64[0];
      if ( *(_BYTE *)(v835.i64[0] + 16) == 1 )
      {
        v514 = *(_QWORD *)v835.i64[0];
        v515 = *(_QWORD *)(v835.i64[0] + 8);
      }
      else
      {
        v514 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v390, v835.i64[0], v397, v830);
        v513 = v835.i64[0];
        *(_QWORD *)v835.i64[0] = v514;
        *(_QWORD *)(v513 + 8) = v515;
        *(_BYTE *)(v513 + 16) = 1;
      }
      v335 = v856;
      *(_QWORD *)v513 = v514 + 1;
      memset(&__b.u32[2], 0, 24);
      __b.i64[0] = (__int64)&xmmword_1015FBEC0;
      v875 = v514;
      v876 = v515;
      v516 = *((_QWORD *)&v852 + 1);
      v517 = 32LL * *((_QWORD *)&v852 + 1);
      if ( *((_QWORD *)&v852 + 1) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v390, v513);
        v518 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v517, 8);
        if ( !v518 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v517);
      }
      else
      {
        v518 = 8;
      }
      v519 = v852 + v517;
      v863.i64[0] = v516;
      *(__int128 *)((char *)v863.i128 + 8) = (unsigned __int64)v518;
      v873.i64[0] = v852;
      v873.i64[1] = v852;
      v873.i64[2] = v851;
      v873.i64[3] = v519;
      if ( !v516 )
        goto LABEL_835;
      v520 = v852 + 32;
      do
      {
        v521 = *(_BYTE *)(v520 - 32);
        *(__int64 *)((char *)&v866.i64[2] + 7) = *(_QWORD *)(v520 - 8);
        v866.i64[2] = *(_QWORD *)(v520 - 15);
        v866.i128[0] = *(_OWORD *)(v520 - 31);
        if ( v521 == 6 )
          goto LABEL_834;
        v869.i8[0] = v521;
        v869.i64[3] = *(__int64 *)((char *)&v866.i64[2] + 7);
        *(__int64 *)((char *)&v869.i64[2] + 1) = v866.i64[2];
        *(__int128 *)((char *)v869.i128 + 1) = v866.i128[0];
        v522 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_101674A90,
                 8,
                 &v869);
        if ( !v522
          || (v523 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "name",
                       4,
                       v522)) == 0
          || *(_BYTE *)v523 != 3 )
        {
LABEL_818:
          v528 = v863.i64[2];
          v5 = 1;
          if ( v863.i64[2] == v863.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v863);
          goto LABEL_820;
        }
        v524 = v5;
        v525 = *(_QWORD *)(v523 + 24);
        if ( v525 < 0 )
        {
          v526 = 0;
          goto LABEL_827;
        }
        if ( !v525 )
          goto LABEL_818;
        v862 = *(void **)(v523 + 16);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v524);
        v526 = 1;
        v857 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v525, 1);
        if ( !v857 )
        {
          v524 = v525;
LABEL_827:
          v873.i64[1] = v520;
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v526, v524);
        }
        v527 = v857;
        memcpy(v857, v862, v525);
        v864.i64[0] = v525;
        v864.i64[1] = (__int64)v527;
        v864.i64[2] = v525;
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&__b, &v864) )
        {
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v869);
          v5 = (__int64)v857;
          goto LABEL_821;
        }
        v528 = v863.i64[2];
        if ( v863.i64[2] == v863.i64[0] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v863);
        v5 = (__int64)v857;
LABEL_820:
        v529 = v863.i64[1];
        v530 = 32 * v528;
        v531 = v869.i128[0];
        *(_OWORD *)(v863.i64[1] + v530 + 16) = v869.i128[1];
        *(_OWORD *)(v529 + v530) = v531;
        v863.i64[2] = v528 + 1;
LABEL_821:
        v532 = v520 - 32;
        v520 += 32;
      }
      while ( v532 + 32 != v519 );
      v520 = v519;
LABEL_834:
      v873.i64[1] = v520;
      v335 = v856;
LABEL_835:
      HIDWORD(_RAX) = (unsigned __int64)_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v873) >> 32;
      v535 = v863.i128[0];
      v536 = (void *)v863.i64[2];
      v537 = __b.i64[1];
      if ( __b.i64[1] )
      {
        __s2 = (void *)v863.i64[2];
        v862 = (void *)v863.i64[1];
        v857 = (void *)v863.i64[0];
        v538 = __b.i64[3];
        if ( __b.i64[3] )
        {
          v539 = __b.i64[0];
          _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__b.i64[0]));
          v541 = (const __m128i *)(__b.i64[0] + 16);
          do
          {
            if ( !(_WORD)_R12D )
            {
              do
              {
                v542 = _mm_movemask_epi8(_mm_load_si128(v541));
                v539 -= 384;
                ++v541;
              }
              while ( v542 == 0xFFFF );
              _R12D = ~v542;
            }
            __asm { tzcnt   eax, r12d }
            v543 = -3 * _RAX;
            v544 = *(_QWORD *)(v539 + 8 * v543 - 24);
            if ( v544 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v539 + 8 * v543 - 16), v544, 1);
            --v538;
            _RAX = _R12D & (unsigned int)(_R12D - 1);
            _R12D &= _R12D - 1;
          }
          while ( v538 );
        }
        v545 = (24 * v537 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v546 = v545 + v537;
        v620 = v546 == -17;
        v547 = v546 + 17;
        v335 = v856;
        v536 = __s2;
        v535 = __PAIR128__((unsigned __int64)v862, (unsigned __int64)v857);
        if ( !v620 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__b.i64[0] - v545, v547, 16);
      }
      if ( v536 )
      {
        *(__int128 *)((char *)__b.i128 + 8) = v535;
        __b.i64[3] = (__int64)v536;
        __b.i8[0] = 4;
        v548 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674ECD,
                            5u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v548);
        *v548 = __b;
      }
      else if ( (_QWORD)v535 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v535 + 1), 32 * v535, 8);
      }
      v549 = v867.i64[1];
      if ( v867.i64[1] )
      {
        v550 = v867.i64[3];
        if ( v867.i64[3] )
        {
          v551 = v867.i64[0];
          _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v867.i64[0]));
          v553 = (const __m128i *)(v867.i64[0] + 16);
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                v554 = _mm_movemask_epi8(_mm_load_si128(v553));
                v551 -= 512;
                ++v553;
              }
              while ( v554 == 0xFFFF );
              _R13D = ~v554;
            }
            __asm { tzcnt   ecx, r13d }
            v556 = v551 - (unsigned int)(32 * _ECX);
            v557 = *(_QWORD *)(v556 - 32);
            if ( v557 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v556 - 24), v557, 1);
            --v550;
            _R13D &= _R13D - 1;
          }
          while ( v550 );
        }
        v558 = 32 * v549;
        v559 = 33 * v549;
        v620 = v559 == -49;
        v560 = v559 + 49;
        v335 = v856;
        if ( !v620 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v867.i64[0] - v558 - 32, v560, 16);
      }
LABEL_861:
      v561 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674ECD,
               5,
               &v839);
      if ( v561 && *(_BYTE *)v561 == 4 )
      {
        v562 = *(_QWORD *)(v561 + 24) != 0;
        if ( *(_QWORD *)(v561 + 24) )
          goto LABEL_869;
      }
      else
      {
        v562 = 0;
      }
      if ( (_BYTE)v839 == 5 )
      {
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d(
          &__b,
          &v840,
          &unk_101674E7A,
          19);
        if ( __b.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
      }
LABEL_869:
      if ( v562 )
      {
        v563 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                    "tool_choicestop_sequences",
                                    11,
                                    v335);
        if ( v563 )
        {
          v564 = *v563;
          if ( v564 == 5 )
          {
            v567 = v563;
            v568 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &anon_10420c9971c21f44d230d15b39fb3fec_75,
                     4,
                     v563);
            if ( v568 )
            {
              if ( *(_BYTE *)v568 == 3
                && *(_QWORD *)(v568 + 24) == 8
                && **(_QWORD **)(v568 + 16) == 0x6E6F6974636E7566LL )
              {
                v569 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "name",
                         4,
                         v567);
                if ( v569 )
                {
                  if ( *(_BYTE *)v569 == 3 )
                  {
                    v570 = *(_QWORD *)(v569 + 16);
                    v571 = *(_QWORD *)(v569 + 24);
                    v863.i64[0] = v570;
                    v863.i64[1] = v571;
                    v864.i64[0] = 0;
                    v864.i64[2] = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
                    v572 = 4;
                    v573 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v573 )
                      goto LABEL_1344;
                    *v573 = 1701869940;
                    v867.i64[0] = 4;
                    v867.i64[1] = (__int64)v573;
                    v867.i64[2] = 4;
                    serde_json::value::to_value::h29e3c39dc75a9151(&__b, &off_10196C878);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196CCA8);
                    }
                    v869 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &__b,
                      &v864,
                      &v867,
                      &v869);
                    if ( __b.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, &v864);
                    v572 = 8;
                    v574 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                    if ( !v574 )
LABEL_1344:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v572);
                    *v574 = 0x6E6F6974636E7566LL;
                    v866.i64[0] = 8;
                    v866.i64[1] = (__int64)v574;
                    v866.i64[2] = 8;
                    v873.i64[0] = 0;
                    v873.i64[2] = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
                    v575 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v575 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                    *v575 = 1701667182;
                    v867.i64[0] = 4;
                    v867.i64[1] = (__int64)v575;
                    v867.i64[2] = 4;
                    serde_json::value::to_value::h29e3c39dc75a9151(&__b, &v863);
                    if ( __b.i8[0] == 6 )
                    {
                      v869.i64[0] = __b.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v869,
                        &off_10196D480,
                        &off_10196CCA8);
                    }
                    v869 = __b;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &__b,
                      &v873,
                      &v867,
                      &v869);
                    if ( __b.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&__b);
                    *(__int128 *)((char *)__b.i128 + 8) = v873.i128[0];
                    __b.i64[3] = v873.i64[2];
                    __b.i8[0] = 5;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      &v869,
                      &v864,
                      &v866,
                      &__b);
                    if ( v869.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v869);
                    v869.i64[1] = v864.i64[1];
                    *(__int64 *)((char *)__b.i64 + 7) = v864.i64[0];
                    *(__int128 *)((char *)__b.i128 + 15) = *(__int128 *)((char *)v864.i128 + 8);
                    *(__int64 *)((char *)&v867.i64[2] + 7) = v864.i64[2];
LABEL_898:
                    v867.i128[0] = __b.i128[0];
                    v867.i64[2] = __b.i64[2];
                    v869.i8[0] = v564;
                    *(__int128 *)((char *)v869.i128 + 1) = __b.i128[0];
                    *(__int64 *)((char *)&v869.i64[2] + 1) = __b.i64[2];
                    v869.i64[3] = *(__int64 *)((char *)&v867.i64[2] + 7);
                    v576 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                             &unk_101674A90,
                             8,
                             &v869);
                    v577 = (char **)v576;
                    if ( v576 )
                    {
                      v578 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               "name",
                               4,
                               v576);
                      if ( v578 )
                      {
                        if ( *(_BYTE *)v578 == 3 )
                        {
                          v579 = *(const void **)(v578 + 16);
                          v580 = *(_QWORD *)(v578 + 24);
                          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&__b, v580, 0, 1, 1);
                          __s2 = (void *)__b.i64[1];
                          if ( __b.i32[0] == 1 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__s2, __b.i64[2]);
                          v843 = v577;
                          v862 = (void *)__b.i64[2];
                          HIDWORD(_RAX) = (unsigned __int64)memcpy((void *)__b.i64[2], v579, v580) >> 32;
                          v582 = (char *)v858.i64[3];
                          if ( v858.i64[3] )
                          {
                            v583 = v580;
                            v584 = v858.i64[0];
                            v585 = (const __m128i *)(v858.i64[0] + 16);
                            _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v858.i64[0]));
                            while ( 1 )
                            {
                              if ( !(_WORD)_R15D )
                              {
                                do
                                {
                                  v587 = _mm_movemask_epi8(_mm_load_si128(v585));
                                  v584 -= 768;
                                  ++v585;
                                }
                                while ( v587 == 0xFFFF );
                                _R15D = ~v587;
                              }
                              __asm { tzcnt   eax, r15d }
                              if ( *(_QWORD *)(v584 - 48 * _RAX - 8) == v583 )
                              {
                                v588 = v584 - 48 * _RAX;
                                v589 = *(const void **)(v588 - 16);
                                v857 = v582;
                                v590 = memcmp(v589, v862, v583);
                                v582 = (char *)v857;
                                if ( !v590 )
                                  break;
                              }
                              _RAX = _R15D & (unsigned int)(_R15D - 1);
                              _R15D &= _R15D - 1;
                              if ( !--v582 )
                                goto LABEL_911;
                            }
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                              &v873,
                              v588 - 48);
                            __b.i64[3] = v873.i64[2];
                            *(__int128 *)((char *)__b.i128 + 8) = v873.i128[0];
                            __b.i8[0] = 3;
                            v591 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                                "name",
                                                4u);
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v591);
                            *v591 = __b;
                          }
LABEL_911:
                          v335 = v856;
                          if ( __s2 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v862, __s2, 1);
                        }
                      }
                    }
                    __b = v869;
                    v592 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                        "tool_choicestop_sequences",
                                        0xBu);
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v592);
                    *v592 = __b;
                  }
                }
              }
            }
          }
          else if ( v564 == 3 )
          {
            v565 = *((_QWORD **)v563 + 2);
            v566 = *((_QWORD *)v563 + 3);
            if ( v566 == 8 )
            {
              if ( *v565 == 0x6465726975716572LL )
                goto LABEL_897;
            }
            else if ( v566 == 4 && (*(_DWORD *)v565 == 1869903201 || *(_DWORD *)v565 == 1701736302) )
            {
LABEL_897:
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v869, v563 + 8);
              *(__int64 *)((char *)&__b.i64[2] + 7) = v869.i64[2];
              *(__int128 *)((char *)__b.i128 + 7) = v869.i128[0];
              *(__int64 *)((char *)&v867.i64[2] + 7) = v869.i64[2];
              goto LABEL_898;
            }
          }
        }
      }
      codexmate_lib::core::relay::dialects::apply_chat_reasoning::hb69c929a1b8ab454(
        &v839,
        v335,
        (unsigned __int8)v850,
        v865,
        v842);
      v593 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "stop_sequences",
               14,
               v335);
      if ( v593 )
      {
        switch ( *(_BYTE *)v593 )
        {
          case 0:
            __b.i8[0] = 0;
            goto LABEL_925;
          case 1:
          case 2:
            __b.i128[1] = *(_OWORD *)(v593 + 16);
            v594 = *(_QWORD *)v593;
            __b.i64[1] = *(_QWORD *)(v593 + 8);
            __b.i64[0] = v594;
            goto LABEL_925;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &__b.u32[2],
              v593 + 8);
            __b.i8[0] = 3;
            goto LABEL_925;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &__b.u32[2],
              v593 + 8);
            __b.i8[0] = 4;
            goto LABEL_925;
          case 5:
            if ( *(_QWORD *)(v593 + 24) )
            {
              v595 = *(_QWORD *)(v593 + 8);
              if ( !v595 )
              {
                v803 = &anon_a8580c566d8025b0f516de1c9be9088f_1248;
LABEL_1261:
                core::option::unwrap_failed::h44626cade04bbf1e(v803);
              }
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &__b.u32[2],
                v595,
                *(_QWORD *)(v593 + 16));
            }
            else
            {
              __b.i64[1] = 0;
              __b.i64[3] = 0;
            }
            __b.i8[0] = 5;
LABEL_925:
            v596 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                "stopLeftDownmovecell",
                                4u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v596);
            *v596 = __b;
            break;
        }
      }
      v597 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &unk_101674E74,
                        6,
                        v335);
      if ( v597 && *v597 == 1 && (v597[1] & 1) != 0 )
      {
        v863.i64[0] = 0;
        v863.i64[2] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E74, 6);
        v598 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
        if ( !v598 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
        qmemcpy(v598, "include_usage", 13);
        v864.i64[0] = 13;
        v864.i64[1] = (__int64)v598;
        v864.i64[2] = 13;
        v866.i16[0] = 257;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v863, &v864);
        if ( v869.i64[0] == 0x8000000000000000LL )
        {
          v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
          v599 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
          v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
          v867.i64[0] = v599;
          *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v866;
          if ( v867.i8[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
        }
        else
        {
          v877 = v872;
          v876 = v871;
          v875 = v870;
          __b = v869;
          v873 = v866;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v867,
            &__b,
            &v873);
        }
        __b.i64[1] = v863.i64[0];
        __b.i128[1] = *(__int128 *)((char *)v863.i128 + 8);
        __b.i8[0] = 5;
        v600 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            &unk_101674EFB,
                            0xEu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v600);
        *v600 = __b;
      }
      v601 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674F09,
               17,
               v335);
      if ( v601 )
      {
        switch ( *(_BYTE *)v601 )
        {
          case 0:
            __b.i8[0] = 0;
            goto LABEL_946;
          case 1:
          case 2:
            __b.i128[1] = *(_OWORD *)(v601 + 16);
            v602 = *(_QWORD *)v601;
            __b.i64[1] = *(_QWORD *)(v601 + 8);
            __b.i64[0] = v602;
            goto LABEL_946;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &__b.u32[2],
              v601 + 8);
            __b.i8[0] = 3;
            goto LABEL_946;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &__b.u32[2],
              v601 + 8);
            __b.i8[0] = 4;
            goto LABEL_946;
          case 5:
            if ( *(_QWORD *)(v601 + 24) )
            {
              v603 = *(_QWORD *)(v601 + 8);
              if ( !v603 )
                goto LABEL_1255;
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &__b.u32[2],
                v603,
                *(_QWORD *)(v601 + 16));
            }
            else
            {
              __b.i64[1] = 0;
              __b.i64[3] = 0;
            }
            __b.i8[0] = 5;
LABEL_946:
            v604 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                &unk_101674F09,
                                0x11u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v604);
            *v604 = __b;
            break;
        }
      }
      v605 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674A50,
               16,
               v335);
      if ( v605 )
      {
        switch ( *(_BYTE *)v605 )
        {
          case 0:
            __b.i8[0] = 0;
            goto LABEL_958;
          case 1:
          case 2:
            __b.i128[1] = *(_OWORD *)(v605 + 16);
            v606 = *(_QWORD *)v605;
            __b.i64[1] = *(_QWORD *)(v605 + 8);
            __b.i64[0] = v606;
            goto LABEL_958;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &__b.u32[2],
              v605 + 8);
            __b.i8[0] = 3;
            goto LABEL_958;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &__b.u32[2],
              v605 + 8);
            __b.i8[0] = 4;
            goto LABEL_958;
          case 5:
            if ( *(_QWORD *)(v605 + 24) )
            {
              v607 = *(_QWORD *)(v605 + 8);
              if ( !v607 )
                goto LABEL_1255;
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &__b.u32[2],
                v607,
                *(_QWORD *)(v605 + 16));
            }
            else
            {
              __b.i64[1] = 0;
              __b.i64[3] = 0;
            }
            __b.i8[0] = 5;
LABEL_958:
            v608 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                &unk_101674A50,
                                0x10u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v608);
            *v608 = __b;
            break;
        }
      }
      v609 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "seedopus\n",
               4,
               v335);
      if ( v609 )
      {
        switch ( *(_BYTE *)v609 )
        {
          case 0:
            __b.i8[0] = 0;
            goto LABEL_970;
          case 1:
          case 2:
            __b.i128[1] = *(_OWORD *)(v609 + 16);
            v610 = *(_QWORD *)v609;
            __b.i64[1] = *(_QWORD *)(v609 + 8);
            __b.i64[0] = v610;
            goto LABEL_970;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &__b.u32[2],
              v609 + 8);
            __b.i8[0] = 3;
            goto LABEL_970;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &__b.u32[2],
              v609 + 8);
            __b.i8[0] = 4;
            goto LABEL_970;
          case 5:
            if ( *(_QWORD *)(v609 + 24) )
            {
              v611 = *(_QWORD *)(v609 + 8);
              if ( !v611 )
                goto LABEL_1255;
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &__b.u32[2],
                v611,
                *(_QWORD *)(v609 + 16));
            }
            else
            {
              __b.i64[1] = 0;
              __b.i64[3] = 0;
            }
            __b.i8[0] = 5;
LABEL_970:
            v612 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                "seedopus\n",
                                4u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v612);
            *v612 = __b;
            break;
        }
      }
      v613 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674F1A,
               15,
               v335);
      if ( v613 )
      {
        switch ( *(_BYTE *)v613 )
        {
          case 0:
            __b.i8[0] = 0;
            goto LABEL_982;
          case 1:
          case 2:
            __b.i128[1] = *(_OWORD *)(v613 + 16);
            v614 = *(_QWORD *)v613;
            __b.i64[1] = *(_QWORD *)(v613 + 8);
            __b.i64[0] = v614;
            goto LABEL_982;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &__b.u32[2],
              v613 + 8);
            __b.i8[0] = 3;
            goto LABEL_982;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &__b.u32[2],
              v613 + 8);
            __b.i8[0] = 4;
            goto LABEL_982;
          case 5:
            if ( !*(_QWORD *)(v613 + 24) )
            {
              __b.i64[1] = 0;
              __b.i64[3] = 0;
LABEL_981:
              __b.i8[0] = 5;
LABEL_982:
              v616 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                  &unk_101674F1A,
                                  0xFu);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v616);
              *v616 = __b;
              goto LABEL_983;
            }
            v615 = *(_QWORD *)(v613 + 8);
            if ( v615 )
            {
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &__b.u32[2],
                v615,
                *(_QWORD *)(v613 + 16));
              goto LABEL_981;
            }
            break;
        }
LABEL_1255:
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
      }
LABEL_983:
      v850 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                       "messagesobjectpropertiesdescriptionparametersstrict",
                       8,
                       &v839);
      v618 = v850;
      if ( !v850 )
        goto LABEL_1183;
      v619 = nullptr;
      v620 = *(_BYTE *)v850 == 4;
      if ( *(_BYTE *)v850 == 4 )
        v619 = (char *)v850 + 8;
      v857 = v619;
      if ( !v620 )
        goto LABEL_1183;
      v621 = v835.i64[0];
      v620 = *(_BYTE *)(v835.i64[0] + 16) == 1;
      v862 = (char *)v850 + 8;
      if ( v620 )
      {
        v622 = *(_QWORD *)v835.i64[0];
        v623 = *(_QWORD *)(v835.i64[0] + 8);
      }
      else
      {
        v622 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                 "messagesobjectpropertiesdescriptionparametersstrict",
                 v835.i64[0],
                 v617,
                 v619);
        v621 = v835.i64[0];
        *(_QWORD *)v835.i64[0] = v622;
        *(_QWORD *)(v621 + 8) = v623;
        *(_BYTE *)(v621 + 16) = 1;
      }
      *(_QWORD *)v621 = v622 + 1;
      memset(&__b.u32[2], 0, 24);
      __b.i64[0] = (__int64)&xmmword_1015FBEC0;
      v875 = v622;
      v876 = v623;
      if ( v618[3] )
      {
        v843 = &off_10196CB50;
        v624 = 0;
        while ( 1 )
        {
          v625 = 32 * v624;
          _RAX = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                   4,
                   32 * v624 + v618[2]);
          v856 = v624;
          if ( !_RAX || *(_BYTE *)_RAX != 3 )
            goto LABEL_1005;
          v627 = *(_QWORD *)(_RAX + 16);
          _RAX = *(_QWORD *)(_RAX + 24);
          if ( _RAX != 4 )
            break;
          if ( *(_DWORD *)v627 != 1819242356 )
            goto LABEL_1005;
          v645 = v618[3];
          if ( v624 >= v645 )
            goto LABEL_1297;
          v646 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_101674E1F,
                   12,
                   v625 + v618[2]);
          v648 = 1;
          if ( v646 && *(_BYTE *)v646 == 3 )
          {
            v648 = *(_QWORD *)(v646 + 16);
            v649 = *(_QWORD *)(v646 + 24);
            if ( __b.i64[3] )
              goto LABEL_1029;
          }
          else
          {
            v649 = 0;
            if ( __b.i64[3] )
            {
LABEL_1029:
              __s2 = (void *)v648;
              v650 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v875, v648, v649);
              _RAX = v650 >> 57;
              v647 = __b.i64[1];
              v652 = (char *)__b.i64[0];
              v653 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v650 >> 57), (__m128i)0LL);
              v654 = __b.i64[0] - 24;
              for ( j = 0; ; j += 16LL )
              {
                v656 = v647 & v650;
                v657 = _mm_loadu_si128((const __m128i *)&v652[v656]);
                _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v657, v653));
                if ( _R12D )
                  break;
LABEL_1035:
                _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v657, (__m128i)-1LL));
                v618 = v850;
                if ( (_DWORD)_RAX )
                  goto LABEL_1041;
                v650 = v656 + j + 16;
              }
              __dst = (void *)v647;
              *(__m128i *)v855 = v653;
              v838 = v652;
              v844 = j;
              v831 = v657;
              while ( 1 )
              {
                __asm { tzcnt   eax, r12d }
                v659 = -3LL * (v647 & (v656 + _RAX));
                if ( v649 == *(_QWORD *)(v654 + 8 * v659 + 16)
                  && !memcmp(__s2, *(const void **)(v654 + 8 * v659 + 8), v649) )
                {
                  break;
                }
                _RAX = (unsigned int)(_R12D - 1);
                LOWORD(_RAX) = _R12D & (_R12D - 1);
                _R12D = _RAX;
                v647 = (__int64)__dst;
                v653 = _mm_load_si128((const __m128i *)v855);
                v652 = (char *)v838;
                j = v844;
                v657 = _mm_load_si128(&v831);
                if ( !(_WORD)_RAX )
                  goto LABEL_1035;
              }
              v624 = v856 + 1;
              v618 = v850;
              goto LABEL_1021;
            }
          }
LABEL_1041:
          v662 = v618[3];
          if ( v856 >= v662 )
            goto LABEL_1300;
          v663 = v618[2] + v625;
          v664 = *(_BYTE *)v663;
          *(__int64 *)((char *)&v867.i64[2] + 7) = *(_QWORD *)(v663 + 24);
          v867.i64[2] = *(_QWORD *)(v663 + 17);
          v867.i128[0] = *(_OWORD *)(v663 + 1);
          memmove((void *)v663, (const void *)(v663 + 32), 32 * (v662 + ~v856));
          v618[3] = --v662;
          if ( v664 == 6 )
LABEL_1300:
            alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h08ec7ef24832c20e(v856, v662, &off_10196CB68, v647);
          v869.i8[0] = v664;
          v869.i64[3] = *(__int64 *)((char *)&v867.i64[2] + 7);
          *(__int128 *)((char *)v869.i128 + 9) = *(__int128 *)((char *)v867.i128 + 8);
          *(__int64 *)((char *)v869.i64 + 1) = v867.i64[0];
          HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v869) >> 32;
          v624 = v856;
LABEL_1021:
          if ( v624 >= v618[3] )
          {
            v673 = __b.i64[1];
            if ( __b.i64[1] )
            {
              v674 = __b.i64[3];
              if ( __b.i64[3] )
              {
                v675 = __b.i64[0];
                _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__b.i64[0]));
                v677 = (const __m128i *)(__b.i64[0] + 16);
                do
                {
                  if ( !(_WORD)_R13D )
                  {
                    do
                    {
                      v678 = _mm_movemask_epi8(_mm_load_si128(v677));
                      v675 -= 384;
                      ++v677;
                    }
                    while ( v678 == 0xFFFF );
                    _R13D = ~v678;
                  }
                  __asm { tzcnt   eax, r13d }
                  v679 = -3LL * _RAX;
                  v680 = *(_QWORD *)(v675 + 8 * v679 - 24);
                  if ( v680 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v675 + 8 * v679 - 16), v680, 1);
                  --v674;
                  _RAX = _R13D & (unsigned int)(_R13D - 1);
                  _R13D &= _R13D - 1;
                }
                while ( v674 );
              }
              v681 = (24 * v673 + 39) & 0xFFFFFFFFFFFFFFF0LL;
              v682 = v681 + v673;
              v620 = v682 == -17;
              v683 = v682 + 17;
              v618 = v850;
              if ( !v620 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__b.i64[0] - v681, v683, 16);
            }
            goto LABEL_1072;
          }
        }
        if ( _RAX != 9
          || (_RAX = *(_QWORD *)v627 ^ 0x6E61747369737361LL, (v627 = _RAX | *(unsigned __int8 *)(v627 + 8) ^ 0x74LL) != 0) )
        {
LABEL_1005:
          v635 = __b.i64[3];
          if ( __b.i64[3] )
          {
            v636 = (void *)__b.i64[0];
            _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__b.i64[0]));
            v638 = (const __m128i *)(__b.i64[0] + 16);
            v639 = __b.i64[0];
            do
            {
              if ( !(_WORD)_R12D )
              {
                do
                {
                  v640 = _mm_movemask_epi8(_mm_load_si128(v638));
                  v639 -= 384;
                  ++v638;
                }
                while ( v640 == 0xFFFF );
                _R12D = ~v640;
              }
              __asm { tzcnt   eax, r12d }
              v641 = -3LL * _RAX;
              v642 = *(_QWORD *)(v639 + 8 * v641 - 24);
              if ( v642 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v639 + 8 * v641 - 16), v642, 1);
              _RAX = _R12D & (unsigned int)(_R12D - 1);
              _R12D &= _R12D - 1;
              --v635;
            }
            while ( v635 );
            v643 = __b.u64[1];
            if ( __b.i64[1] )
            {
              memset(v636, 255, __b.i64[1] + 17);
              _RAX = ((v643 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v643 + 1) >> 3);
              if ( v643 < 8 )
                _RAX = v643;
            }
            else
            {
              _RAX = 0;
            }
            v618 = v850;
            __b.i128[1] = _RAX;
          }
          v644 = v856;
        }
        else
        {
          v628 = __b.i64[3];
          if ( __b.i64[3] )
          {
            v629 = __b.i64[0];
            _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__b.i64[0]));
            v631 = (const __m128i *)(__b.i64[0] + 16);
            __s2 = (void *)__b.i64[0];
            do
            {
              if ( !(_WORD)_R12D )
              {
                do
                {
                  v632 = _mm_movemask_epi8(_mm_load_si128(v631));
                  v629 -= 384;
                  ++v631;
                }
                while ( v632 == 0xFFFF );
                _R12D = ~v632;
              }
              __asm { tzcnt   eax, r12d }
              v633 = -3LL * _RAX;
              v634 = *(_QWORD *)(v629 + 8 * v633 - 24);
              if ( v634 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v629 + 8 * v633 - 16), v634, 1);
              _RAX = _R12D & (unsigned int)(_R12D - 1);
              _R12D &= _R12D - 1;
              --v628;
            }
            while ( v628 );
            v660 = __b.u64[1];
            if ( __b.i64[1] )
            {
              memset(__s2, 255, __b.i64[1] + 17);
              v627 = (v660 + 1) >> 3;
              v661 = ((v660 + 1) & 0xFFFFFFFFFFFFFFF8LL) - v627;
              if ( v660 < 8 )
                v661 = v660;
            }
            else
            {
              v661 = 0;
            }
            v618 = v850;
            __b.i128[1] = v661;
          }
          v645 = v618[3];
          v644 = v856;
          if ( v856 >= v645 )
          {
            v843 = &off_10196CB80;
LABEL_1297:
            core::panicking::panic_bounds_check::h56740b1198b22635(v856, v645, v843, v627);
          }
          _RAX = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "tool_callsreasoning_content",
                   10,
                   v618[2] + v625);
          if ( _RAX )
          {
            if ( *(_BYTE *)_RAX == 4 )
            {
              v665 = *(_QWORD *)(_RAX + 24);
              if ( v665 )
              {
                v666 = *(_QWORD *)(_RAX + 16);
                for ( k = 32 * v665; k; k -= 32 )
                {
                  _RAX = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           "idassistant",
                           2,
                           v666);
                  if ( _RAX && *(_BYTE *)_RAX == 3 )
                  {
                    v670 = *(_QWORD *)(_RAX + 24);
                    if ( v670 < 0 )
                    {
                      v672 = 0;
                      goto LABEL_1157;
                    }
                    v671 = *(void **)(_RAX + 16);
                    if ( v670 )
                    {
                      __s2 = *(void **)(_RAX + 16);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", v671);
                      v672 = 1;
                      v668 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v670, 1);
                      if ( !v668 )
                      {
                        v845[0] = v670;
LABEL_1157:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v672, v845[0]);
                      }
                      v671 = __s2;
                    }
                    else
                    {
                      v668 = 1;
                    }
                    v669 = v668;
                    memcpy((void *)v668, v671, v670);
                    v869.i64[0] = v670;
                    v845[0] = v669;
                    v869.i64[1] = v669;
                    v869.i64[2] = v670;
                    HIDWORD(_RAX) = (unsigned __int64)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(
                                                        &__b,
                                                        &v869) >> 32;
                    v644 = v856;
                  }
                  v666 += 32;
                }
              }
            }
          }
        }
        v624 = v644 + 1;
        goto LABEL_1021;
      }
LABEL_1072:
      if ( !v618[3] )
        goto LABEL_1183;
      v684 = 0;
      do
      {
        while ( 1 )
        {
          v686 = 32 * v684;
          v687 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                   4,
                   32 * v684 + *((_QWORD *)v857 + 1));
          if ( v687 )
          {
            if ( *(_BYTE *)v687 == 3 && *(_QWORD *)(v687 + 24) == 9 )
            {
              v688 = *(_QWORD *)(v687 + 16);
              v689 = *(_QWORD *)v688 ^ 0x6E61747369737361LL;
              if ( !(v689 | *(unsigned __int8 *)(v688 + 8) ^ 0x74LL) )
              {
                v690 = v618[3];
                if ( v684 >= v690 )
                {
                  v804 = &off_10196CD28;
                  goto LABEL_1294;
                }
                v691 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "tool_callsreasoning_content",
                         10,
                         v686 + *((_QWORD *)v857 + 1));
                if ( v691 )
                {
                  if ( *(_BYTE *)v691 == 4 && *(_QWORD *)(v691 + 24) )
                    break;
                }
              }
            }
          }
          ++v684;
          v685 = v618[3];
          if ( v684 >= v685 )
            goto LABEL_1145;
        }
        v690 = v618[3];
        if ( v684 >= v690 )
        {
          v804 = &off_10196CD40;
LABEL_1294:
          core::panicking::panic_bounds_check::h56740b1198b22635(v684, v690, v804, v689);
        }
        v692 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "tool_callsreasoning_content",
                 10,
                 v686 + *((_QWORD *)v857 + 1));
        if ( !v692 || *(_BYTE *)v692 != 4 )
        {
          v803 = &off_10196CD88;
          goto LABEL_1261;
        }
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8c70b0402d184891(
          &v864,
          *(_QWORD *)(v692 + 16),
          *(_QWORD *)(v692 + 16) + 32LL * *(_QWORD *)(v692 + 24));
        v695 = v835.i64[0];
        if ( *(_BYTE *)(v835.i64[0] + 16) == 1 )
        {
          v696 = *(_QWORD *)v835.i64[0];
          v697 = *(_QWORD *)(v835.i64[0] + 8);
        }
        else
        {
          v696 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&v864, v835.i64[0], v693, v694);
          v695 = v835.i64[0];
          *(_QWORD *)v835.i64[0] = v696;
          *(_QWORD *)(v695 + 8) = v697;
          *(_BYTE *)(v695 + 16) = 1;
        }
        *(_QWORD *)v695 = v696 + 1;
        memset(&__b.u32[2], 0, 24);
        __b.i64[0] = (__int64)&xmmword_1015FBEC0;
        v875 = v696;
        v876 = v697;
        v698 = v684 + 1;
        if ( v698 < v618[3] )
        {
          v699 = v686 + 32;
          do
          {
            v700 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                     4,
                     v699 + *((_QWORD *)v857 + 1));
            if ( !v700 || *(_BYTE *)v700 != 3 || *(_QWORD *)(v700 + 24) != 4 || **(_DWORD **)(v700 + 16) != 1819242356 )
              break;
            v702 = v618[3];
            if ( v698 >= v702 )
              core::panicking::panic_bounds_check::h56740b1198b22635(v698, v702, &off_10196CD58, v701);
            v703 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &unk_101674E1F,
                     12,
                     v699 + *((_QWORD *)v857 + 1));
            if ( v703 && *(_BYTE *)v703 == 3 )
            {
              v704 = *(void **)(v703 + 24);
              if ( (__int64)v704 < 0 )
              {
                v805 = 0;
LABEL_1161:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v805, v838);
              }
              v705 = v618;
              v706 = *(const void **)(v703 + 16);
              if ( v704 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E1F, 12);
                v707 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v704, 1);
                if ( !v707 )
                {
                  v838 = v704;
                  v805 = 1;
                  goto LABEL_1161;
                }
              }
              else
              {
                v707 = 1;
              }
              v708 = v706;
              v709 = (void *)v707;
              memcpy((void *)v707, v708, (size_t)v704);
              v869.i64[0] = (__int64)v704;
              v838 = v709;
              v869.i64[1] = (__int64)v709;
              v869.i64[2] = (__int64)v704;
              hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&__b, &v869);
              v618 = v705;
            }
            ++v698;
            v699 += 32;
          }
          while ( v698 < v618[3] );
        }
        __dst = (void *)v864.i64[2];
        v855[0] = v864.u64[1];
        v873.i64[0] = v864.i64[1];
        v873.i64[1] = v864.i64[1] + 24 * v864.i64[2];
        v873.i64[2] = (__int64)&__b;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd95b936631d26eab(
          &v866,
          &v873);
        v710 = v862;
        if ( v866.i64[2] )
        {
          v711 = 32 * v866.i64[2];
          v869.i64[0] = v866.i64[1];
          v869.i64[2] = v866.i64[0];
          v869.i64[3] = v866.i64[1] + 32 * v866.i64[2];
          v870 = 0;
          v712 = *(_BYTE *)v866.i64[1];
          v713 = (_BYTE *)(v866.i64[1] + 32);
          if ( *(_BYTE *)v866.i64[1] == 6 )
          {
            v714 = nullptr;
          }
          else
          {
            v844 = v866.i64[1] + v711;
            v716 = *((_QWORD *)v850 + 3);
            v717 = (char **)(v711 - 32);
            v718 = 32 * v698;
            v719 = 1;
            v720 = v698;
            while ( 1 )
            {
              v721 = (void *)v719;
              v867.i64[3] = *((_QWORD *)v713 - 1);
              *(__int64 *)((char *)&v867.i64[2] + 1) = *(_QWORD *)(v713 - 15);
              v722 = *(_QWORD *)(v713 - 31);
              *(__int64 *)((char *)&v867.i64[1] + 1) = *(_QWORD *)(v713 - 23);
              *(__int64 *)((char *)v867.i64 + 1) = v722;
              v867.i8[0] = v712;
              if ( v716 < v720 )
              {
                v869.i64[1] = (__int64)v713;
                v870 = (unsigned __int64)v721;
                alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(
                  v720,
                  v716,
                  &off_10196CD70,
                  v722);
              }
              __s2 = v721;
              v843 = v717;
              if ( v716 == *v710 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v710);
              v723 = *((_QWORD *)v857 + 1);
              v856 = v718;
              v724 = (__m256i *)(v723 + v718);
              if ( v716 > v720 )
                memmove((void *)(v723 + v856 + 32), v724, 32 * (v716 - v720));
              *v724 = v867;
              *((_QWORD *)v850 + 3) = ++v716;
              if ( !v843 )
                break;
              v712 = *v713;
              v713 += 32;
              v717 = v843 - 4;
              ++v720;
              v718 = v856 + 32;
              v714 = __s2;
              v719 = (__int64)__s2 + 1;
              v710 = v862;
              if ( v712 == 6 )
                goto LABEL_1121;
            }
            v713 = (_BYTE *)v844;
            v714 = __s2;
          }
LABEL_1121:
          v869.i64[1] = (__int64)v713;
          v870 = (unsigned __int64)v714;
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v869);
          v725 = nullptr;
          if ( (unsigned __int64)__dst >= __b.i64[3] )
            v725 = (char *)__dst - __b.i64[3];
          v856 = (unsigned __int64)v725;
          v618 = v850;
        }
        else
        {
          v715 = nullptr;
          if ( (unsigned __int64)__dst >= __b.i64[3] )
            v715 = (char *)__dst - __b.i64[3];
          v856 = (unsigned __int64)v715;
          if ( v866.i64[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v866.i64[1], 32 * v866.i64[0], 8);
        }
        HIDWORD(_RAX) = __b.i32[3];
        if ( __b.i64[1] )
        {
          __s2 = (void *)__b.i64[1];
          v727 = __b.i64[3];
          if ( __b.i64[3] )
          {
            v728 = __b.i64[0];
            _R14D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__b.i64[0]));
            v730 = (const __m128i *)(__b.i64[0] + 16);
            do
            {
              if ( !(_WORD)_R14D )
              {
                do
                {
                  v731 = _mm_movemask_epi8(_mm_load_si128(v730));
                  v728 -= 384;
                  ++v730;
                }
                while ( v731 == 0xFFFF );
                _R14D = ~v731;
              }
              __asm { tzcnt   eax, r14d }
              v732 = -3 * _RAX;
              v733 = *(_QWORD *)(v728 + 8 * v732 - 24);
              if ( v733 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v728 + 8 * v732 - 16), v733, 1);
              --v727;
              _RAX = _R14D & (unsigned int)(_R14D - 1);
              _R14D &= _R14D - 1;
            }
            while ( v727 );
          }
          v734 = (24LL * (_QWORD)__s2 + 39) & 0xFFFFFFFFFFFFFFF0LL;
          v618 = v850;
          if ( (char *)__s2 + v734 != (void *)-17LL )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__b.i64[0] - v734, (char *)__s2 + v734 + 17, 16);
        }
        if ( __dst )
        {
          v735 = (_QWORD *)(v855[0] + 8);
          v736 = (char *)__dst;
          do
          {
            v737 = *(v735 - 1);
            if ( v737 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v735, v737, 1);
            v735 += 3;
            --v736;
          }
          while ( v736 );
        }
        if ( v864.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v855[0], 24 * v864.i64[0], 8);
        v684 = v856 + v698;
        v685 = v618[3];
      }
      while ( v684 < v685 );
LABEL_1145:
      if ( v685 )
      {
        v738 = v618[2];
        v739 = 32 * v685;
        v740 = v739;
        v741 = v738;
        while ( 1 )
        {
          v742 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                   4,
                   v741);
          if ( v742 )
          {
            if ( *(_BYTE *)v742 == 3
              && *(_QWORD *)(v742 + 24) == 9
              && !(**(_QWORD **)(v742 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v742 + 16) + 8LL) ^ 0x74LL) )
            {
              v743 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "reasoning_content",
                       17,
                       v741);
              if ( v743 )
              {
                if ( *(_BYTE *)v743 == 3 && *(_QWORD *)(v743 + 24) )
                  break;
              }
            }
          }
          v741 += 32;
          v740 -= 32;
          if ( !v740 )
            goto LABEL_1183;
        }
        do
        {
          v745 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                   4,
                   v738);
          if ( v745 )
          {
            if ( *(_BYTE *)v745 == 3
              && *(_QWORD *)(v745 + 24) == 9
              && !(**(_QWORD **)(v745 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v745 + 16) + 8LL) ^ 0x74LL) )
            {
              v746 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "reasoning_content",
                       17,
                       v738);
              if ( !v746 || *(_BYTE *)v746 != 3 || !*(_QWORD *)(v746 + 24) )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("reasoning_content", 17);
                v747 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
                if ( !v747 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
                qmemcpy(v747, "(this turn ran without thinking mode)", 37);
                __b.i64[1] = 37;
                __b.i64[2] = (__int64)v747;
                __b.i64[3] = 37;
                __b.i8[0] = 3;
                v748 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                    "reasoning_content",
                                    0x11u);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v748);
                *v748 = __b;
              }
            }
          }
          v738 += 32;
          v739 -= 32;
        }
        while ( v739 );
      }
LABEL_1183:
      v749 = 8;
      v750 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
               "messagesobjectpropertiesdescriptionparametersstrict",
               8,
               &v839);
      v751 = v750;
      if ( v750 && *(_BYTE *)v750 == 4 )
      {
        v836.i64[0] = 0;
        *(__int128 *)((char *)v836.i128 + 8) = 8u;
        v851 = 0;
        v852 = 8u;
        v752 = *(_QWORD *)(v750 + 16);
        v753 = *(_QWORD *)(v750 + 24);
        *(_QWORD *)(v751 + 24) = 0;
        v754 = 32 * v753;
        __b.i64[0] = v752;
        __b.i64[1] = v752 + 32 * v753;
        v857 = (void *)(v751 + 8);
        __b.i64[2] = v751 + 8;
        __b.i64[3] = v753;
        v875 = 0;
        v856 = v751;
        if ( v753 )
        {
          v850 = (void *)(v752 + 32 * v753);
          v755 = v752 + 32;
          do
          {
            v811 = *(_OWORD *)(v755 - 16);
            v756 = *(_QWORD *)(v755 - 32);
            v810 = *(_QWORD *)(v755 - 24);
            v809 = v756;
            v869.i128[1] = v811;
            v869.i128[0] = __PAIR128__(v810, v756);
            v757 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                     4,
                     &v869);
            if ( v757
              && *(_BYTE *)v757 == 3
              && *(_QWORD *)(v757 + 24) == 6
              && !(**(_DWORD **)(v757 + 16) ^ 0x74737973 | *(unsigned __int16 *)(*(_QWORD *)(v757 + 16) + 4LL) ^ 0x6D65) )
            {
              v749 = 7;
              v762 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "contentpattern.output_modehead_limit",
                       7,
                       &v869);
              if ( v762 )
              {
                if ( *(_BYTE *)v762 == 3 )
                {
                  v763 = *(void **)(v762 + 24);
                  if ( v763 )
                  {
                    if ( (__int64)v763 < 0 )
                    {
                      v802 = 0;
                      goto LABEL_1248;
                    }
                    v862 = *(void **)(v762 + 16);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                      "contentpattern.output_modehead_limit",
                      7);
                    v764 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v763, 1);
                    if ( !v764 )
                    {
                      v835.i64[0] = (__int64)v763;
                      v802 = 1;
LABEL_1248:
                      __b.i64[0] = v755;
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v802, v835.i64[0]);
                    }
                    v835.i64[0] = (__int64)v764;
                    v765 = v862;
                    v862 = v763;
                    memcpy(v764, v765, (size_t)v763);
                    v766 = v836.i64[2];
                    if ( v836.i64[2] == v836.i64[0] )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v836);
                    v767 = v836.i64[1];
                    v768 = 3 * v766;
                    v749 = (__int64)v862;
                    *(_QWORD *)(v836.i64[1] + 8 * v768) = v862;
                    *(_QWORD *)(v767 + 8 * v768 + 8) = v835.i64[0];
                    *(_QWORD *)(v767 + 8 * v768 + 16) = v749;
                    v836.i64[2] = v766 + 1;
                  }
                }
              }
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v869);
            }
            else
            {
              v758 = *((_QWORD *)&v852 + 1);
              if ( *((_QWORD *)&v852 + 1) == v851 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v851);
              v759 = v852;
              v760 = 32 * v758;
              *(_OWORD *)(v852 + v760 + 16) = v811;
              v761 = v809;
              v749 = v810;
              *(_QWORD *)(v759 + v760 + 8) = v810;
              *(_QWORD *)(v759 + v760) = v761;
              *((_QWORD *)&v852 + 1) = v758 + 1;
            }
            v755 += 32;
            v754 -= 32;
          }
          while ( v754 );
          __b.i64[0] = (__int64)v850;
          v751 = v856;
        }
        _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h860e708ab46d1ae2(&__b);
        if ( v836.i64[2] )
        {
          v863.i64[0] = 0;
          v863.i64[2] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, v749);
          v770 = 4;
          v771 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v771 )
            goto LABEL_1289;
          *v771 = 1701605234;
          v864.i64[0] = 4;
          v864.i64[1] = (__int64)v771;
          v864.i64[2] = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v772 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
          if ( !v772 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
          *(_WORD *)(v772 + 4) = 28005;
          *(_DWORD *)v772 = 1953724787;
          v866.i8[0] = 3;
          v866.i64[1] = 6;
          v866.i64[2] = v772;
          v866.i64[3] = 6;
          v773 = &v869;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v863, &v864);
          if ( v869.i64[0] == 0x8000000000000000LL )
          {
            v774 = v869.i64[1];
            v775 = 32 * v869.i64[3];
            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
            v776 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
            v867.i64[0] = v776;
            *(_OWORD *)(v869.i64[1] + v775 + 16) = v866.i128[1];
            v777 = (__m256i *)v866.i64[1];
            *(_OWORD *)(v774 + v775) = v866.i128[0];
            if ( v867.i8[0] != 6 )
            {
              v773 = &v867;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
            }
          }
          else
          {
            v877 = v872;
            v876 = v871;
            v875 = v870;
            __b = v869;
            v873 = v866;
            v773 = &v867;
            v777 = &__b;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v867,
              &__b,
              &v873);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v773, v777);
          v770 = 7;
          v779 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v779 )
LABEL_1289:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v770);
          *(_DWORD *)((char *)v779 + 3) = 1953391988;
          *v779 = 1953394531;
          v864.i64[0] = 7;
          v864.i64[1] = (__int64)v779;
          v864.i64[2] = 7;
          v780 = v836.i64[1];
          alloc::str::join_generic_copy::heca7a5e86402c6b6(&__b, v836.i64[1], v836.i64[2], &unk_101674D32, 2);
          v850 = (void *)__b.i64[1];
          v781 = __b.i64[0];
          v782 = __b.u64[2];
          if ( __b.i64[2] < 0 )
          {
            v783 = 0;
            goto LABEL_1216;
          }
          if ( __b.i64[2] )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__b, v780);
            v783 = 1;
            v784 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v782, 1);
            if ( !v784 )
LABEL_1216:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v783, v782);
            v785 = v784;
            v786 = v781;
          }
          else
          {
            v786 = __b.i64[0];
            v785 = 1;
          }
          memcpy((void *)v785, v850, v782);
          v866.i8[0] = 3;
          v866.i64[1] = v782;
          v866.i64[2] = v785;
          v866.i64[3] = v782;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v869, &v863, &v864);
          v787 = (_QWORD *)v856;
          if ( v869.i64[0] == 0x8000000000000000LL )
          {
            v867.i128[1] = *(_OWORD *)(v869.i64[1] + 32 * v869.i64[3] + 16);
            v788 = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3]);
            v867.i64[1] = *(_QWORD *)(v869.i64[1] + 32 * v869.i64[3] + 8);
            v867.i64[0] = v788;
            *(__m256i *)(v869.i64[1] + 32 * v869.i64[3]) = v866;
            if ( v867.i8[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v867);
          }
          else
          {
            v877 = v872;
            v876 = v871;
            v875 = v870;
            __b = v869;
            v873 = v866;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v867,
              &__b,
              &v873);
          }
          if ( v786 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v850, v786, 1);
          __b.i64[1] = v863.i64[0];
          __b.i128[1] = *(__int128 *)((char *)v863.i128 + 8);
          __b.i8[0] = 5;
          v789 = v787[3];
          if ( v789 == v787[1] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v857);
          *(__m256i *)(v787[2] + 32 * v789) = __b;
          v778 = v789 + 1;
          v787[3] = v778;
        }
        else
        {
          v778 = *(_QWORD *)(v751 + 24);
        }
        v790 = v852;
        v791 = 32LL * *((_QWORD *)&v852 + 1);
        __b.i64[0] = v852;
        __b.i64[2] = v851;
        __b.i64[1] = v852;
        __b.i64[3] = v852 + 32LL * *((_QWORD *)&v852 + 1);
        if ( *((_QWORD *)&v852 + 1) > (unsigned __int64)(*(_QWORD *)v857 - v778) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            v857,
            v778,
            *((_QWORD *)&v852 + 1),
            8,
            32,
            v769);
          v778 = *(_QWORD *)(v856 + 24);
        }
        v792 = v856;
        memcpy((void *)(*(_QWORD *)(v856 + 16) + 32 * v778), (const void *)v790, v791);
        *(_QWORD *)(v792 + 24) = v778 + *((_QWORD *)&v790 + 1);
        __b.i64[3] = v790;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&__b);
        v793 = v836.i64[2];
        if ( v836.i64[2] )
        {
          v794 = (_QWORD *)(v836.i64[1] + 8);
          do
          {
            v795 = *(v794 - 1);
            if ( v795 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v794, v795, 1);
            v794 += 3;
            --v793;
          }
          while ( v793 );
        }
        if ( v836.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v836.i64[1], 24 * v836.i64[0], 8);
      }
      v796 = v816;
      *(_QWORD *)(v816 + 24) = v841;
      *(_QWORD *)(v796 + 16) = *((_QWORD *)&v840 + 1);
      v797 = v839;
      *(_QWORD *)(v796 + 8) = v840;
      *(_QWORD *)v796 = v797;
      v798 = v858.i64[1];
      *(_QWORD *)(v796 + 32) = v858.i64[0];
      *(_QWORD *)(v796 + 40) = v798;
      *(_OWORD *)(v796 + 48) = v858.i128[1];
      *(_QWORD *)(v796 + 64) = v859;
      *(_QWORD *)(v796 + 72) = v860;
      if ( v842 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v865, v842, 1);
      v799 = v847;
      for ( m = v848 + 1; m != 1; --m )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v799);
        v799 += 32;
      }
      if ( v846 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v847, 32 * v846, 8);
      return v816;
  }
}
