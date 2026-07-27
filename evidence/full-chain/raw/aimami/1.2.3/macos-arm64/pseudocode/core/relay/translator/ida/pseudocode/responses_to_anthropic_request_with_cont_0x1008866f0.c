// __ZN13codexmate_lib4core5relay10translator43responses_to_anthropic_request_with_context @ 0x1008866f0 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::responses_to_anthropic_request_with_context::hdbf5dfcfd9ec55c0(
        __int64 a1,
        void *a2,
        const void *a3,
        size_t a4,
        void *a5,
        void *a6,
        __m128i si128)
{
  void *v7; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  const void *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r15
  void *v17; // rbx
  unsigned __int128 v18; // kr150_16
  size_t v19; // rsi
  __m256i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  signed __int64 v28; // r14
  char *v29; // rbx
  int v30; // r14d
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm1
  size_t v35; // rbx
  __m256i *v36; // r15
  __int8 v37; // r14
  __m128i v38; // xmm1
  __int64 v39; // rax
  signed __int64 v40; // rbx
  char *v41; // r15
  __int64 v42; // rax
  char v43; // bl
  __int64 v44; // r13
  _DWORD *v45; // rax
  __int64 v46; // rax
  __m256i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  _BYTE *v51; // rsi
  __int64 v52; // r13
  __int64 v53; // rax
  signed __int64 v54; // r13
  char *v55; // rbx
  _QWORD *v56; // rsi
  __int64 v57; // r13
  _DWORD *v58; // rax
  void *v59; // rax
  __m256i *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  _BYTE *v64; // rsi
  void *v65; // rax
  __int64 v66; // r14
  __int64 v67; // rax
  size_t v68; // rbx
  __m256i *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  _BYTE *v73; // rsi
  _DWORD *v74; // rax
  __m256i *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // r15
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // r13
  _DWORD *v84; // rax
  _DWORD *v85; // rax
  __m256i *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  _BYTE *v90; // rsi
  _DWORD *v91; // rax
  __int64 v92; // rax
  _OWORD *v93; // r13
  __int64 v94; // rdx
  __int64 v95; // rbx
  _DWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 i; // r13
  __int64 v100; // r14
  __int64 v101; // rsi
  __m256i *v102; // rdi
  unsigned __int8 *v103; // rax
  int v104; // ecx
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 j; // r14
  __int64 v108; // r14
  __int64 v109; // rax
  signed __int64 v110; // r15
  char *v111; // r13
  __int64 v112; // rax
  __int64 v113; // r15
  _DWORD *v114; // rax
  _DWORD *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __m256i *v118; // rdi
  __int64 v119; // rsi
  __m256i *v120; // rbx
  __int64 v121; // rax
  size_t v122; // r13
  unsigned __int8 *v123; // rax
  int v124; // ecx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v132; // r13
  unsigned __int64 v133; // r13
  __int64 v134; // r13
  _DWORD *v135; // rax
  _WORD *v136; // rax
  __int64 v137; // r13
  _DWORD *v138; // rax
  void *v139; // rax
  _DWORD *v140; // rax
  __int64 v141; // r13
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  _DWORD *v145; // rax
  _DWORD *v146; // rax
  __int64 v147; // r15
  bool v148; // zf
  char *v149; // rax
  size_t v150; // rbx
  __int64 v151; // r14
  _DWORD *v152; // rax
  void *v153; // rax
  __int64 v154; // r14
  __m256i *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  _BYTE *v159; // rsi
  _DWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rbx
  __int64 k; // r15
  __int64 v164; // r14
  __int64 v165; // rsi
  unsigned __int64 v166; // rax
  const __m128i *v168; // rbx
  __int64 v169; // r14
  __m128i v170; // xmm1
  __int8 *v171; // r15
  __int64 m; // rdx
  char *v173; // rax
  __m128i v174; // xmm2
  __int64 v176; // rax
  int v177; // eax
  unsigned __int16 *v178; // rcx
  unsigned __int16 *v179; // rax
  __int64 v180; // r13
  __int64 v181; // r15
  unsigned __int16 *v182; // rbx
  size_t v183; // rdx
  size_t v184; // r14
  __int64 v185; // r14
  int v186; // eax
  char v187; // cl
  __int64 v188; // rbx
  signed __int64 v189; // r13
  __int64 v190; // rax
  __int64 v191; // rbx
  __int64 v192; // rax
  __int64 v193; // r14
  __int64 v194; // rax
  size_t v195; // r15
  __int64 v196; // rbx
  __int64 v197; // rax
  __int64 v198; // r14
  __int64 v199; // rax
  __int64 v200; // rbx
  __int64 v201; // r15
  __int64 v202; // rbx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // r15
  __int64 v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // r14
  __int64 v210; // rbx
  __int64 v211; // r14
  __int64 v212; // r13
  size_t v213; // r15
  __int64 v214; // rax
  __int8 v215; // bl
  char v216; // r14
  const __m128i *v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rcx
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // r13
  __int64 v224; // r15
  _DWORD *v225; // rax
  _QWORD *v226; // rax
  __m256i *v227; // rdi
  __int64 v228; // rax
  __int64 v229; // rcx
  __int64 v230; // rdx
  _BYTE *v231; // rsi
  _WORD *v232; // rax
  __int64 v233; // r14
  __int64 v234; // rax
  __m256i *v235; // rdi
  __int64 v236; // rax
  __int64 v237; // rcx
  __int64 v238; // rdx
  _BYTE *v239; // rsi
  _DWORD *v240; // rax
  __int64 v241; // r14
  __int64 v242; // r15
  __int64 v243; // rax
  __m256i *v244; // rdi
  __int64 v245; // rax
  __int64 v246; // rcx
  __int64 v247; // rdx
  _BYTE *v248; // rsi
  __int64 v249; // rax
  __int64 v250; // r9
  __int64 v251; // rdx
  __int64 v252; // rbx
  __int64 v253; // rbx
  __int64 v254; // rbx
  __int64 v255; // rax
  const void *v256; // r15
  __m256i *v257; // rdi
  __int64 v258; // rbx
  __int64 v259; // rax
  __int64 v260; // rcx
  __int128 v261; // kr100_16
  __int64 v262; // r15
  _DWORD *v263; // rax
  __int64 v264; // rax
  __m256i *v265; // rdi
  __int64 v266; // rax
  __int64 v267; // rcx
  __int64 v268; // rdx
  _BYTE *v269; // rsi
  _DWORD *v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rbx
  __int64 v273; // rdi
  __int64 n; // r15
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // rdx
  __int64 v278; // rax
  __int64 v279; // r14
  __int64 v280; // rbx
  __int64 v281; // r14
  __int64 v282; // rax
  __int64 v283; // rax
  __int64 v284; // rbx
  __int64 v285; // r14
  size_t v286; // r15
  __int64 v287; // rax
  __int64 v288; // r9
  __int64 v289; // rcx
  __int64 v290; // rax
  size_t v291; // rcx
  __int64 v292; // rax
  __int64 v293; // r9
  size_t v294; // rdx
  __int64 v295; // rax
  size_t v296; // rcx
  size_t v297; // r15
  size_t v298; // r13
  __m128i v299; // xmm1
  __int64 v300; // rbx
  __int64 v301; // rax
  __int64 v302; // rcx
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rax
  _DWORD *v306; // rax
  _DWORD *v307; // rax
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // r15
  _DWORD *v312; // rax
  _QWORD *v313; // rax
  __int64 v314; // rax
  __int64 v315; // r14
  _DWORD *v316; // rax
  __int64 v317; // rax
  __m256i *v318; // rdi
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rdx
  _BYTE *v322; // rsi
  _DWORD *v323; // rax
  __int64 v324; // rdx
  __int64 v325; // rbx
  __int64 v326; // rax
  __int64 v327; // rcx
  __int64 v328; // rdi
  __int64 ii; // r15
  __int64 v330; // rax
  __int64 v331; // rbx
  const void *v332; // r14
  __int64 v333; // rax
  __int64 v334; // r12
  _BYTE *v335; // rdi
  __int64 v336; // rsi
  __int64 v337; // rax
  __int64 v338; // rbx
  size_t v339; // rsi
  __int64 v340; // r14
  __int64 v341; // rbx
  __int64 v342; // rax
  __int64 v343; // r15
  __int64 v344; // rax
  __m256i *v345; // rdi
  __int64 v346; // rax
  __int64 v347; // rcx
  __int64 v348; // rdx
  _BYTE *v349; // rsi
  _QWORD *v350; // rax
  __m256i *v351; // rdi
  __int64 v352; // rax
  __int64 v353; // rcx
  __int64 v354; // rdx
  _BYTE *v355; // rsi
  void *v356; // rax
  __int64 v357; // rdx
  _OWORD *v358; // rbx
  __int64 v359; // rax
  __int64 v360; // rcx
  __int64 v361; // rsi
  _OWORD *v362; // rbx
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // rsi
  _OWORD *v366; // rbx
  void *v367; // rdi
  __int64 v368; // rax
  __int64 v369; // rax
  size_t v370; // rsi
  void *v371; // rsi
  __int64 v372; // rax
  __int64 v373; // rdx
  size_t v374; // rbx
  __int64 v375; // r12
  const void *v376; // r15
  unsigned int *v377; // rax
  unsigned int *v378; // r14
  __int64 v379; // rax
  unsigned __int64 v380; // rcx
  __m128i v381; // xmm1
  __m128i v382; // xmm2
  __m128i v383; // xmm3
  __m128i v384; // xmm4
  __m128i v385; // xmm5
  __m128i v386; // xmm6
  __int64 v387; // rcx
  __m128i v388; // xmm1
  __m128i v389; // xmm2
  __m128i v390; // xmm3
  __m128i v391; // xmm4
  __int64 v392; // rdi
  __int64 v393; // r13
  char *v394; // r12
  unsigned __int32 v395; // eax
  int v396; // eax
  void *v397; // rdi
  size_t v398; // rsi
  _DWORD *v399; // rax
  _QWORD *v400; // rax
  __int64 v401; // rdx
  void *v402; // rdi
  _OWORD *v403; // rdi
  size_t v404; // r14
  __int64 v405; // rdi
  size_t v406; // rsi
  __int64 v407; // rax
  char *v408; // r15
  bool v409; // zf
  char *v410; // rax
  void *v411; // rdi
  _DWORD *v412; // rax
  _QWORD *v413; // rax
  __int64 v414; // rdx
  unsigned __int64 v415; // r15
  unsigned __int32 v416; // eax
  int v417; // eax
  void *v418; // rax
  __int64 v419; // r12
  __int64 v420; // rdx
  _OWORD *v421; // rbx
  __int64 *v422; // rax
  __int64 v423; // rdx
  __int64 v424; // rcx
  __int64 *v425; // rbx
  __int64 v426; // rax
  size_t v427; // rdx
  __int64 v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rcx
  __int64 v431; // r13
  __int64 *v432; // rsi
  __int64 v433; // rbx
  __int64 v434; // rax
  size_t v435; // rdx
  const char *v436; // rdi
  __int64 v437; // rbx
  __int64 v438; // r12
  __int64 v439; // rax
  __int64 v440; // rax
  __int64 v441; // rcx
  char *v442; // r15
  __int64 v443; // r9
  __int64 v445; // r11
  char v447; // r9
  __int64 v448; // r11
  __int64 v449; // rdi
  const __m128i *v450; // rdi
  const __m128i *v451; // rax
  __int64 v452; // rax
  signed __int64 v453; // r14
  const void *v454; // rsi
  __int64 v455; // rax
  __int64 v456; // rdx
  const __m128i *v457; // rcx
  const __m128i *v458; // rsi
  __int64 v459; // r8
  int v461; // r15d
  unsigned __int8 *v462; // rax
  unsigned __int8 *v463; // rbx
  int v464; // eax
  _QWORD *v465; // rax
  __int64 v466; // rcx
  _DWORD *v467; // rax
  _DWORD *v468; // rax
  __int64 v469; // rdx
  __int64 v470; // rax
  __int64 v471; // rax
  __int64 v472; // rax
  const void *v473; // r12
  void *v474; // r13
  size_t v475; // rbx
  __int64 v477; // r13
  __int64 v478; // r15
  const __m128i *v479; // r14
  size_t v481; // rdx
  __int64 v482; // rax
  __int64 v483; // rcx
  __int64 v484; // rax
  __int64 v485; // rcx
  unsigned __int64 v486; // rax
  __int64 v487; // rax
  __int64 v488; // rcx
  __m128i v489; // xmm1
  __int64 v490; // rax
  __int64 v491; // rcx
  __int64 v492; // rax
  __int64 v493; // r12
  __int64 v494; // r12
  __int64 v495; // rax
  __int64 v496; // rcx
  _QWORD *v497; // rax
  _QWORD *v498; // r12
  size_t v499; // r12
  __int64 v500; // r12
  void *v501; // r12
  __int64 v502; // rax
  void *v503; // rsi
  void *v504; // rcx
  int v505; // eax
  __m256i *v506; // rdi
  __int64 v507; // rsi
  void *v508; // rax
  __int64 v509; // rax
  __int64 v510; // r12
  void *v511; // rcx
  unsigned __int64 v512; // rax
  size_t v513; // rcx
  __m128i v514; // xmm1
  __int64 v515; // rdx
  unsigned __int64 v516; // rax
  __m128i v517; // xmm2
  __int64 v519; // r12
  __int64 v520; // rax
  int v521; // eax
  unsigned __int32 v522; // eax
  void *v523; // r12
  size_t v524; // rax
  void *v525; // r12
  size_t v526; // r12
  __int64 v527; // rcx
  void *v528; // rdx
  size_t v529; // rsi
  __int64 v530; // r12
  __int64 v531; // rax
  __int64 v532; // rcx
  __int64 v533; // rdx
  _BYTE *v534; // rsi
  __int128 v535; // rax
  __int64 v536; // r14
  __int64 v537; // r15
  __int64 v538; // rax
  __int64 v539; // r15
  __int64 v540; // rbx
  __int8 v541; // al
  __int64 v542; // rax
  __int64 v543; // rsi
  signed __int64 v544; // r13
  __int64 v545; // r14
  void *v546; // r14
  __int64 v547; // r14
  __int64 v548; // rax
  __int64 v549; // rcx
  __int64 v550; // rdx
  __int128 v551; // kr1F0_16
  __int64 v552; // rax
  int v553; // ebx
  __int64 v554; // r12
  int v555; // eax
  _DWORD *v556; // rax
  __int64 v557; // rax
  __int64 v558; // rdx
  __int64 v559; // rdi
  _OWORD *v560; // rbx
  __int64 v561; // rax
  __int64 v562; // rcx
  __int64 v563; // rax
  size_t v564; // r15
  void *v565; // rax
  void *v566; // r14
  _OWORD *v567; // rbx
  __int64 v568; // rax
  __int64 v569; // rbx
  __int64 v570; // rax
  __int64 v571; // rsi
  __int64 v572; // rax
  __int64 v573; // rdx
  const void *v574; // r14
  _BYTE *v575; // rax
  _BYTE *v576; // r12
  __int64 v577; // rax
  __int64 v578; // rcx
  __m128i v579; // xmm0
  __m128i v580; // xmm1
  __m128i v581; // xmm2
  __m128i v582; // xmm3
  __m128i v583; // xmm4
  __m128i v584; // xmm5
  __m128i v585; // xmm6
  __int64 v586; // rcx
  __m128i v587; // xmm0
  __m128i v588; // xmm1
  __m128i v589; // xmm2
  __m128i v590; // xmm3
  __m128i v591; // xmm4
  __int64 v593; // rbx
  __int64 v594; // r14
  __int64 v595; // r15
  const __m128i *v597; // r12
  int v598; // r13d
  __int64 v599; // rax
  __int64 v600; // rsi
  unsigned __int64 v601; // rax
  __int64 v602; // rbx
  __int64 v603; // rbx
  __int64 v604; // r15
  __int64 v605; // r12
  const __m128i *v607; // r13
  int v608; // r14d
  __int64 v610; // rax
  __int64 v611; // rsi
  __int64 v612; // rax
  __int64 v613; // rbx
  _OWORD *v614; // rbx
  _OWORD *v615; // rbx
  __int64 v616; // r14
  _DWORD *v617; // rax
  _DWORD *v618; // rax
  __m256i *v619; // rdi
  __int64 v620; // rax
  __int64 v621; // rcx
  __int64 v622; // rdx
  _BYTE *v623; // rsi
  void *v624; // rax
  __int64 v625; // rdx
  _OWORD *v626; // rbx
  __int64 v627; // rax
  unsigned __int64 v628; // rcx
  __int64 *v629; // rax
  __m128i v630; // xmm1
  __int64 *v631; // rax
  size_t v632; // rsi
  unsigned __int64 v633; // rax
  unsigned __int64 v634; // rcx
  int v635; // edx
  bool v636; // zf
  size_t v637; // r13
  void *v638; // r12
  __int64 v639; // rdi
  _DWORD *v640; // rax
  _DWORD *v641; // rax
  __int64 v642; // rdi
  __int64 v643; // rdi
  __int64 v644; // rsi
  __int64 v645; // rax
  __int64 v646; // rbx
  __int64 v647; // rax
  __int64 v648; // rsi
  __int64 v649; // rax
  __int64 v650; // rdx
  const void *v651; // r14
  _DWORD *v652; // rax
  _DWORD *v653; // r12
  __int64 v654; // rax
  unsigned __int64 v655; // rcx
  __m128i v656; // xmm0
  __m128i v657; // xmm1
  __m128i v658; // xmm2
  __m128i v659; // xmm3
  __m128i v660; // xmm4
  __m128i v661; // xmm5
  __m128i v662; // xmm6
  __int64 v663; // rcx
  __m128i v664; // xmm0
  __m128i v665; // xmm1
  __m128i v666; // xmm2
  __m128i v667; // xmm3
  __m128i v668; // xmm4
  _OWORD *v669; // rbx
  _DWORD *v670; // rax
  __int64 v671; // rax
  __int64 v672; // rdx
  __m256i *v673; // rdi
  __int64 v674; // rsi
  __int64 v675; // rax
  __int64 v676; // rcx
  __int64 v677; // r14
  signed __int64 v678; // r14
  __int64 v679; // rax
  __int64 v680; // r12
  _DWORD *v681; // rax
  _DWORD *v682; // rax
  __m256i *v683; // rdi
  __int64 v684; // rax
  __int64 v685; // rcx
  __int64 v686; // rdx
  _BYTE *v687; // rsi
  _DWORD *v688; // rax
  __int64 v689; // rbx
  __int64 v690; // rax
  __int64 v691; // r15
  __int64 v692; // rdx
  __int64 v693; // rbx
  __int64 v694; // r14
  void *v695; // rax
  __int64 v696; // rdx
  _OWORD *v697; // rbx
  __int64 v698; // rax
  __int64 v699; // r14
  __int64 v700; // r15
  __int64 v701; // r14
  __int64 v702; // rax
  unsigned __int32 v703; // eax
  const char *v704; // rdi
  __int64 v705; // rsi
  __int64 v706; // rax
  __int64 v707; // rcx
  unsigned __int8 v708; // al
  char v709; // r13
  __int64 v710; // r15
  __int64 v711; // r12
  void *v712; // rax
  _OWORD *v713; // rbx
  __int64 v714; // rbx
  __int64 v715; // rax
  __int64 v716; // r12
  __int64 v717; // r15
  _DWORD *v718; // rax
  _DWORD *v719; // rax
  void *v720; // rax
  _OWORD *v721; // r14
  int v722; // ecx
  __int64 v723; // rdx
  __int64 v724; // rax
  __int64 v725; // rcx
  void *v726; // rbx
  __int64 v728; // rbx
  __int64 v729; // r14
  const __m128i *v730; // r15
  const __m128i *v732; // r12
  int v733; // r13d
  __int64 v734; // rax
  __int64 v735; // rsi
  unsigned __int64 v736; // rax
  __int64 v737; // rbx
  __int64 v738; // rdi
  __int64 jj; // r15
  __m128i v741; // [rsp+30h] [rbp-480h] BYREF
  _QWORD v742[2]; // [rsp+48h] [rbp-468h] BYREF
  const __m128i *v743; // [rsp+58h] [rbp-458h] BYREF
  __int64 v744; // [rsp+60h] [rbp-450h]
  __int64 v745; // [rsp+70h] [rbp-440h]
  _BYTE v746[16]; // [rsp+78h] [rbp-438h] BYREF
  _QWORD v747[2]; // [rsp+88h] [rbp-428h] BYREF
  __int128 v748; // [rsp+98h] [rbp-418h]
  _QWORD v749[2]; // [rsp+A8h] [rbp-408h] BYREF
  __int128 v750; // [rsp+B8h] [rbp-3F8h]
  _QWORD v751[2]; // [rsp+C8h] [rbp-3E8h] BYREF
  __int128 v752; // [rsp+D8h] [rbp-3D8h]
  __m256i v753; // [rsp+E8h] [rbp-3C8h]
  __int64 v754; // [rsp+108h] [rbp-3A8h]
  __m128i v755; // [rsp+110h] [rbp-3A0h] BYREF
  __int128 v756; // [rsp+128h] [rbp-388h] BYREF
  __int64 v757; // [rsp+138h] [rbp-378h]
  void *v758; // [rsp+140h] [rbp-370h] BYREF
  void *v759; // [rsp+148h] [rbp-368h]
  __m256i v760; // [rsp+150h] [rbp-360h]
  __int64 v761; // [rsp+170h] [rbp-340h]
  size_t v762; // [rsp+178h] [rbp-338h]
  __int64 v763; // [rsp+180h] [rbp-330h]
  __m256i v764; // [rsp+188h] [rbp-328h] BYREF
  __int64 v765; // [rsp+1A8h] [rbp-308h]
  signed __int64 v766; // [rsp+1B0h] [rbp-300h]
  __int64 v767; // [rsp+1B8h] [rbp-2F8h]
  void *v768[2]; // [rsp+1C0h] [rbp-2F0h] BYREF
  __int128 v769; // [rsp+1D0h] [rbp-2E0h] BYREF
  __int64 v770; // [rsp+1E0h] [rbp-2D0h]
  __int64 v771; // [rsp+1E8h] [rbp-2C8h]
  __int64 v772; // [rsp+1F0h] [rbp-2C0h]
  void *__src; // [rsp+1F8h] [rbp-2B8h]
  __m128i v774; // [rsp+200h] [rbp-2B0h] BYREF
  void *v775[2]; // [rsp+210h] [rbp-2A0h]
  __int128 v776; // [rsp+228h] [rbp-288h] BYREF
  __int64 v777; // [rsp+238h] [rbp-278h]
  void *v778; // [rsp+240h] [rbp-270h]
  __int64 v779; // [rsp+248h] [rbp-268h] BYREF
  __int64 v780; // [rsp+250h] [rbp-260h]
  __int64 v781; // [rsp+258h] [rbp-258h]
  void *v782; // [rsp+260h] [rbp-250h]
  __int64 v783; // [rsp+268h] [rbp-248h]
  size_t v784; // [rsp+270h] [rbp-240h]
  void *v785; // [rsp+278h] [rbp-238h]
  __int64 v786; // [rsp+280h] [rbp-230h]
  __m256i v787; // [rsp+288h] [rbp-228h] BYREF
  __int64 v788; // [rsp+2A8h] [rbp-208h] BYREF
  __int128 v789; // [rsp+2B0h] [rbp-200h] BYREF
  __int64 v790; // [rsp+2C0h] [rbp-1F0h]
  size_t v791; // [rsp+2C8h] [rbp-1E8h]
  __m256i v792; // [rsp+2D0h] [rbp-1E0h] BYREF
  _BYTE v793[24]; // [rsp+2F0h] [rbp-1C0h] BYREF
  void *__dst; // [rsp+308h] [rbp-1A8h]
  void *__s1; // [rsp+310h] [rbp-1A0h]
  void *v796; // [rsp+318h] [rbp-198h]
  __m256i v797; // [rsp+320h] [rbp-190h] BYREF
  __int64 v798; // [rsp+340h] [rbp-170h]
  size_t v799; // [rsp+348h] [rbp-168h]
  __m256i v800; // [rsp+350h] [rbp-160h] BYREF
  __m256i v801; // [rsp+370h] [rbp-140h] BYREF
  __int64 v802; // [rsp+390h] [rbp-120h]
  size_t v803; // [rsp+398h] [rbp-118h]
  size_t __n; // [rsp+3A0h] [rbp-110h]
  __m256i v805; // [rsp+3A8h] [rbp-108h] BYREF
  _BYTE v806[56]; // [rsp+3C8h] [rbp-E8h] BYREF
  __int64 v807; // [rsp+400h] [rbp-B0h]
  size_t v808; // [rsp+408h] [rbp-A8h]
  __m256i v809; // [rsp+430h] [rbp-80h] BYREF
  __int128 v810; // [rsp+450h] [rbp-60h] BYREF
  __int64 v811; // [rsp+460h] [rbp-50h]
  __m256i v812[2]; // [rsp+468h] [rbp-48h] BYREF

  v782 = a6;
  v775[0] = a5;
  v784 = a4;
  v763 = a1;
  v779 = 0;
  v780 = 8;
  v781 = 0;
  v796 = a2;
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674ECD, 5, a2);
  codexmate_lib::core::relay::translator::collect_responses_custom_tool_names::hd34953133905955d((__int128 **)&v743, v9);
  v786 = 0x8000000000000000LL;
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("instructions", 12, v796);
  if ( !v10 || *(_BYTE *)v10 != 3 )
  {
LABEL_5:
    v786 = 0x8000000000000000LL;
    goto LABEL_6;
  }
  v11 = *(const void **)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 24);
  v786 = 0x8000000000000000LL;
  codexmate_lib::core::relay::translator::strip_billing_header::h742dc2e7fc7a94c2((__int64 *)v806, v11, v12);
  v7 = *(void **)&v806[16];
  if ( !*(_QWORD *)&v806[16] )
  {
    if ( *(_QWORD *)v806 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v806[8], *(_QWORD *)v806, 1);
    goto LABEL_5;
  }
  v771 = *(_QWORD *)&v806[8];
  v786 = *(_QWORD *)v806;
LABEL_6:
  v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          &anon_10420c9971c21f44d230d15b39fb3fec_146,
          5,
          v796);
  if ( !v13 || *(_BYTE *)v13 != 4 )
    goto LABEL_518;
  *(_QWORD *)v793 = 0;
  *(_OWORD *)&v793[8] = 8u;
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 )
  {
    v783 = (__int64)a3;
    v785 = v7;
    v15 = *(_QWORD *)(v13 + 16);
    v772 = v15 + 32 * v14;
    while ( 1 )
    {
      v19 = 4;
      v20 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
      v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              &anon_10420c9971c21f44d230d15b39fb3fec_75,
              4,
              v15);
      if ( v21 )
      {
        if ( *(_BYTE *)v21 == 3 )
          break;
      }
LABEL_15:
      v15 += 32;
      if ( v15 == v772 )
      {
        if ( *(_QWORD *)&v793[16] )
        {
          v800.i64[0] = 0;
          v800.i64[2] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v19);
          v315 = 4;
          v316 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          v7 = v785;
          a3 = (const void *)v783;
          if ( !v316 )
            goto LABEL_645;
          *v316 = 1701605234;
          v805.i64[0] = 4;
          v805.i64[1] = (__int64)v316;
          v805.i64[2] = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v317 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v317 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
          *(_QWORD *)v317 = 0x6E61747369737361LL;
          *(_BYTE *)(v317 + 8) = 116;
          v812[0].i8[0] = 3;
          v812[0].i64[1] = 9;
          v812[0].i64[2] = v317;
          v812[0].i64[3] = 9;
          v318 = &v809;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v800, &v805);
          if ( v809.i64[0] == 0x8000000000000000LL )
          {
            v319 = v809.i64[1];
            v320 = 32 * v809.i64[3];
            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
            v321 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
            v801.i64[0] = v321;
            *(_OWORD *)(v809.i64[1] + v320 + 16) = v812[0].i128[1];
            v322 = (_BYTE *)v812[0].i64[1];
            *(_OWORD *)(v319 + v320) = v812[0].i128[0];
            if ( v801.i8[0] != 6 )
            {
              v318 = &v801;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
            }
          }
          else
          {
            *(_QWORD *)&v806[48] = v811;
            *(_OWORD *)&v806[32] = v810;
            *(__m256i *)v806 = v809;
            v797 = v812[0];
            v318 = &v801;
            v322 = v806;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v801,
              v806,
              &v797);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v318, v322);
          v315 = 7;
          v323 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v323 )
LABEL_645:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v315);
          *(_DWORD *)((char *)v323 + 3) = 1953391988;
          *v323 = 1953394531;
          v805.i64[0] = 7;
          v805.i64[1] = (__int64)v323;
          v805.i64[2] = 7;
          serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v806, v793);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196CFF8);
          }
          v812[0] = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v800, &v805);
          if ( v809.i64[0] == 0x8000000000000000LL )
          {
            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
            v324 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
            v801.i64[0] = v324;
            *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
            if ( v801.i8[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
          }
          else
          {
            *(_QWORD *)&v806[48] = v811;
            *(_OWORD *)&v806[32] = v810;
            *(__m256i *)v806 = v809;
            v797 = v812[0];
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v801,
              v806,
              &v797);
          }
          *(_OWORD *)&v806[8] = v800.i128[0];
          *(_QWORD *)&v806[24] = v800.i64[2];
          v806[0] = 5;
          v325 = v781;
          if ( v781 == v779 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v779);
          v326 = v780;
          v327 = 32 * v325;
          *(_OWORD *)(v780 + v327 + 16) = *(_OWORD *)&v806[16];
          *(_OWORD *)(v326 + v327) = *(_OWORD *)v806;
          v781 = v325 + 1;
          v16 = *(_QWORD *)&v793[16];
        }
        else
        {
          v16 = 0;
          v7 = v785;
          a3 = (const void *)v783;
        }
        goto LABEL_513;
      }
    }
    v22 = *(_QWORD *)(v21 + 24) - 7LL;
    v23 = *(_QWORD *)(v21 + 16);
    switch ( v22 )
    {
      case 0LL:
        if ( *(_DWORD *)v23 ^ 0x7373656D | *(_DWORD *)(v23 + 3) ^ 0x65676173 )
          goto LABEL_15;
        v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                4,
                v15);
        v25 = 4;
        if ( !v24 || *(_BYTE *)v24 != 3 )
        {
          LODWORD(v791) = 0;
          __n = (size_t)"usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
LABEL_48:
          if ( !*(_QWORD *)&v793[16] )
            goto LABEL_124;
LABEL_49:
          v788 = 0;
          *((_QWORD *)&v789 + 1) = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
            "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
            4);
          v44 = 4;
          v45 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v45 )
            goto LABEL_654;
          *v45 = 1701605234;
          v800.i64[0] = 4;
          v800.i64[1] = (__int64)v45;
          v800.i64[2] = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v46 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
          *(_QWORD *)v46 = 0x6E61747369737361LL;
          *(_BYTE *)(v46 + 8) = 116;
          v812[0].i8[0] = 3;
          v812[0].i64[1] = 9;
          v812[0].i64[2] = v46;
          v812[0].i64[3] = 9;
          v47 = &v809;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v788, &v800);
          if ( v809.i64[0] == 0x8000000000000000LL )
          {
            v48 = v809.i64[1];
            v49 = 32 * v809.i64[3];
            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
            v50 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
            v801.i64[0] = v50;
            *(_OWORD *)(v809.i64[1] + v49 + 16) = v812[0].i128[1];
            v51 = (_BYTE *)v812[0].i64[1];
            *(_OWORD *)(v48 + v49) = v812[0].i128[0];
            if ( v801.i8[0] != 6 )
            {
              v47 = &v801;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
            }
          }
          else
          {
            *(_QWORD *)&v806[48] = v811;
            *(_OWORD *)&v806[32] = v810;
            *(__m256i *)v806 = v809;
            v797 = v812[0];
            v47 = &v801;
            v51 = v806;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v801,
              v806,
              &v797);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v51);
          v44 = 7;
          v96 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v96 )
LABEL_654:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v44);
          *(_DWORD *)((char *)v96 + 3) = 1953391988;
          *v96 = 1953394531;
          v792.i64[0] = 7;
          v792.i64[1] = (__int64)v96;
          v792.i64[2] = 7;
          *(__int128 *)((char *)v800.i128 + 8) = *(_OWORD *)&v793[8];
          v800.i64[0] = *(_QWORD *)v793;
          *(_QWORD *)v793 = 0;
          *(_OWORD *)&v793[8] = 8u;
          serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v806, &v800);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196CFC8);
          }
          v812[0] = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v788, &v792);
          if ( v809.i64[0] == 0x8000000000000000LL )
          {
            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
            v97 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
            v801.i64[0] = v97;
            *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
            if ( v801.i8[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
          }
          else
          {
            *(_QWORD *)&v806[48] = v811;
            *(_OWORD *)&v806[32] = v810;
            *(__m256i *)v806 = v809;
            v797 = v812[0];
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v801,
              v806,
              &v797);
            v801.i8[0] = 6;
          }
          v98 = v800.i64[1];
          for ( i = v800.i64[2] + 1; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v98);
            v98 += 32;
          }
          if ( v800.i64[0] )
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v800.i64[1], 32 * v800.i64[0], 8);
          v805.i128[1] = v789;
          v805.i64[1] = v788;
          v805.i8[0] = 5;
          v100 = v781;
          if ( v781 == v779 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v779);
          *(__m256i *)(v780 + 32 * v100) = v805;
          v781 = v100 + 1;
          goto LABEL_124;
        }
        __n = *(_QWORD *)(v24 + 16);
        v25 = *(_QWORD *)(v24 + 24);
        if ( v25 != 6 )
        {
          if ( v25 == 9 )
          {
            if ( !(*(_QWORD *)__n ^ 0x65706F6C65766564LL | *(unsigned __int8 *)(__n + 8) ^ 0x72LL) )
              goto LABEL_161;
            v26 = *(_QWORD *)__n ^ 0x6E61747369737361LL;
            v148 = (v26 | *(unsigned __int8 *)(__n + 8) ^ 0x74LL) == 0;
            LOBYTE(v26) = 1;
            LODWORD(v791) = v26;
            v25 = 9;
            if ( v148 )
            {
LABEL_124:
              v101 = 7;
              v102 = (__m256i *)"contentpattern.output_modehead_limit";
              v103 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                          "contentpattern.output_modehead_limit",
                                          7,
                                          v15);
              if ( v103 )
              {
                v104 = *v103;
                if ( v104 == 3 )
                {
                  v805.i64[0] = (__int64)(v103 + 8);
                  if ( *((_QWORD *)v103 + 3) )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                      "contentpattern.output_modehead_limit",
                      7);
                    v112 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                    if ( !v112 )
                      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                    v113 = v112;
                    v812[0].i64[0] = 0;
                    v812[0].i64[2] = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
                    v114 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v114 )
                      goto LABEL_665;
                    *v114 = 1701869940;
                    v797.i64[0] = 4;
                    v797.i64[1] = (__int64)v114;
                    v797.i64[2] = 4;
                    serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196C7F8);
                    if ( v806[0] == 6 )
                    {
                      v809.i64[0] = *(_QWORD *)&v806[8];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v809,
                        &off_10196D480,
                        &off_10196CCC0);
                    }
                    v809 = *(__m256i *)v806;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      v806,
                      v812,
                      &v797,
                      &v809);
                    if ( v806[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, v812);
                    v115 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v115 )
LABEL_665:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                    *v115 = 1954047348;
                    v797.i64[0] = 4;
                    v797.i64[1] = (__int64)v115;
                    v797.i64[2] = 4;
                    serde_json::value::to_value::h0f7564ed1b35caf0(v806, &v805);
                    if ( v806[0] == 6 )
                    {
                      v809.i64[0] = *(_QWORD *)&v806[8];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v809,
                        &off_10196D480,
                        &off_10196CCC0);
                    }
                    v809 = *(__m256i *)v806;
                    v102 = (__m256i *)v806;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                      v806,
                      v812,
                      &v797,
                      &v809);
                    if ( v806[0] != 6 )
                    {
                      v102 = (__m256i *)v806;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                    }
                    *(_QWORD *)v806 = v812[0].i64[0];
                    *(_OWORD *)&v806[8] = *(__int128 *)((char *)v812[0].i128 + 8);
                    v101 = (__int64)&v801.i64[1];
                    *(__int128 *)((char *)v801.i128 + 15) = *(__int128 *)((char *)v812[0].i128 + 8);
                    *(__int64 *)((char *)v801.i64 + 7) = v812[0].i64[0];
                    *(_BYTE *)v113 = 5;
                    v116 = v801.i64[1];
                    *(_QWORD *)(v113 + 1) = v801.i64[0];
                    *(_OWORD *)(v113 + 9) = __PAIR128__(v801.u64[2], v116);
                    *(_QWORD *)(v113 + 24) = *(__int64 *)((char *)&v801.i64[2] + 7);
                    v117 = 1;
                  }
                  else
                  {
                    v113 = 8;
                    v117 = 0;
                  }
                  v787.i64[0] = v117;
                  v787.i64[1] = v113;
                  v787.i64[2] = v117;
                  goto LABEL_219;
                }
                if ( v104 == 4 )
                {
                  v788 = 0;
                  v789 = 8u;
                  v105 = *((_QWORD *)v103 + 3);
                  if ( v105 )
                  {
                    v106 = *((_QWORD *)v103 + 2);
                    for ( j = 32 * v105; j; j -= 32 )
                    {
                      v101 = 4;
                      v102 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                      v128 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               &anon_10420c9971c21f44d230d15b39fb3fec_75,
                               4,
                               v106);
                      if ( !v128 || *(_BYTE *)v128 != 3 )
                        goto LABEL_169;
                      v129 = *(_QWORD *)(v128 + 16);
                      v130 = *(_QWORD *)(v128 + 24);
                      if ( v130 == 11 )
                      {
                        v101 = 0x747865745F747570LL;
                        if ( *(_QWORD *)v129 ^ 0x745F74757074756FLL | *(_QWORD *)(v129 + 3) ^ 0x747865745F747570LL )
                        {
                          if ( *(_QWORD *)v129 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v129 + 3) ^ 0x6567616D695F7475LL )
                            goto LABEL_169;
                          v101 = 9;
                          v102 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_117;
                          v131 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                   &anon_10420c9971c21f44d230d15b39fb3fec_117,
                                   9,
                                   v106);
                          if ( !v131 )
                            goto LABEL_169;
                          if ( *(_BYTE *)v131 != 3 )
                            goto LABEL_169;
                          v132 = *(_QWORD *)(v131 + 24);
                          if ( v132 < 5 )
                            goto LABEL_169;
                          v101 = *(_QWORD *)(v131 + 16);
                          if ( *(_DWORD *)v101 ^ 0x61746164 | *(unsigned __int8 *)(v101 + 4) ^ 0x3A )
                            goto LABEL_169;
                          v133 = v132 - 5;
                          v778 = (void *)(v101 + 5);
                          core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(
                            v806,
                            v101 + 5,
                            v133,
                            &unk_101674A88,
                            8);
                          v102 = &v809;
                          v101 = (__int64)v806;
                          _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5(
                            &v809,
                            v806);
                          if ( !v809.i8[0] )
                            goto LABEL_169;
                          *(_QWORD *)&v776 = v778;
                          *((_QWORD *)&v776 + 1) = v809.i64[1];
                          v787.i64[0] = (__int64)v778 + v809.i64[2];
                          v787.i64[1] = v133 - v809.i64[2];
                          v792.i64[0] = 0;
                          v792.i64[2] = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v809, v806);
                          v134 = 4;
                          v135 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v135 )
                            goto LABEL_677;
                          *v135 = 1701869940;
                          v801.i64[0] = 4;
                          v801.i64[1] = (__int64)v135;
                          v801.i64[2] = 4;
                          serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196CCD8);
                          if ( v806[0] == 6 )
                          {
                            v809.i64[0] = *(_QWORD *)&v806[8];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                              43,
                              &v809,
                              &off_10196D480,
                              &off_10196CCE8);
                          }
                          v809 = *(__m256i *)v806;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v806,
                            &v792,
                            &v801,
                            &v809);
                          if ( v806[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v792);
                          v134 = 6;
                          v136 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                          if ( !v136 )
LABEL_677:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v134);
                          v136[2] = 25955;
                          *(_DWORD *)v136 = 1920298867;
                          v800.i64[0] = 6;
                          v778 = v136;
                          v800.i64[1] = (__int64)v136;
                          v800.i64[2] = 6;
                          v805.i64[0] = 0;
                          v805.i64[2] = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
                          v137 = 4;
                          v138 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v138 )
                            goto LABEL_676;
                          *v138 = 1701869940;
                          v812[0].i64[0] = 4;
                          v812[0].i64[1] = (__int64)v138;
                          v812[0].i64[2] = 4;
                          serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196CD00);
                          if ( v806[0] == 6 )
                          {
                            v809.i64[0] = *(_QWORD *)&v806[8];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                              43,
                              &v809,
                              &off_10196D480,
                              &off_10196CCE8);
                          }
                          v809 = *(__m256i *)v806;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v806,
                            &v805,
                            v812,
                            &v809);
                          if ( v806[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
                          v137 = 10;
                          v139 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                          if ( !v139 )
                            goto LABEL_676;
                          qmemcpy(v139, "media_type", 10);
                          v812[0].i64[0] = 10;
                          v812[0].i64[1] = (__int64)v139;
                          v812[0].i64[2] = 10;
                          serde_json::value::to_value::h29e3c39dc75a9151(v806, &v776);
                          if ( v806[0] == 6 )
                          {
                            v809.i64[0] = *(_QWORD *)&v806[8];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                              43,
                              &v809,
                              &off_10196D480,
                              &off_10196CCE8);
                          }
                          v809 = *(__m256i *)v806;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v806,
                            &v805,
                            v812,
                            &v809);
                          if ( v806[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
                          v137 = 4;
                          v140 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v140 )
LABEL_676:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v137);
                          *v140 = 1635017060;
                          v812[0].i64[0] = 4;
                          v812[0].i64[1] = (__int64)v140;
                          v812[0].i64[2] = 4;
                          serde_json::value::to_value::h29e3c39dc75a9151(v806, &v787);
                          if ( v806[0] == 6 )
                          {
                            v809.i64[0] = *(_QWORD *)&v806[8];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                              43,
                              &v809,
                              &off_10196D480,
                              &off_10196CCE8);
                          }
                          v809 = *(__m256i *)v806;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v806,
                            &v805,
                            v812,
                            &v809);
                          if ( v806[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                          v801.i64[3] = v805.i64[2];
                          *(__int128 *)((char *)v801.i128 + 8) = v805.i128[0];
                          v801.i8[0] = 5;
                          v102 = (__m256i *)v806;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v806,
                            &v792,
                            &v800,
                            &v801);
                          if ( v806[0] != 6 )
                          {
                            v102 = (__m256i *)v806;
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                          }
                          v797.i128[1] = *(__int128 *)((char *)v792.i128 + 8);
                          v797.i64[1] = v792.i64[0];
                          v797.i8[0] = 5;
                          v141 = *((_QWORD *)&v789 + 1);
                          if ( *((_QWORD *)&v789 + 1) == v788 )
                          {
                            v102 = (__m256i *)&v788;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v788);
                          }
                          v125 = v789;
                          v126 = 32 * v141;
                          *(_OWORD *)(v789 + 32 * v141 + 16) = v797.i128[1];
                          v101 = v797.i64[1];
                          v127 = v797.i64[0];
                          goto LABEL_168;
                        }
                      }
                      else if ( v130 != 10
                             || *(_QWORD *)v129 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v129 + 8) ^ 0x7478LL )
                      {
                        goto LABEL_169;
                      }
                      v101 = 4;
                      v102 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_110;
                      v142 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               &anon_10420c9971c21f44d230d15b39fb3fec_110,
                               4,
                               v106);
                      if ( !v142 )
                        goto LABEL_169;
                      if ( *(_BYTE *)v142 != 3 )
                        goto LABEL_169;
                      v143 = *(_QWORD *)(v142 + 16);
                      v144 = *(_QWORD *)(v142 + 24);
                      *(_QWORD *)&v769 = v143;
                      *((_QWORD *)&v769 + 1) = v144;
                      if ( !v144 )
                        goto LABEL_169;
                      v812[0].i64[0] = 0;
                      v812[0].i64[2] = 0;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                        &anon_10420c9971c21f44d230d15b39fb3fec_110,
                        4);
                      v145 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                      if ( !v145 )
                        goto LABEL_668;
                      *v145 = 1701869940;
                      v797.i64[0] = 4;
                      v797.i64[1] = (__int64)v145;
                      v797.i64[2] = 4;
                      serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196C7F8);
                      if ( v806[0] == 6 )
                      {
                        v809.i64[0] = *(_QWORD *)&v806[8];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v809,
                          &off_10196D480,
                          &off_10196CD10);
                      }
                      v809 = *(__m256i *)v806;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                        v806,
                        v812,
                        &v797,
                        &v809);
                      if ( v806[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, v812);
                      v146 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                      if ( !v146 )
LABEL_668:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                      *v146 = 1954047348;
                      v797.i64[0] = 4;
                      v797.i64[1] = (__int64)v146;
                      v797.i64[2] = 4;
                      serde_json::value::to_value::h29e3c39dc75a9151(v806, &v769);
                      if ( v806[0] == 6 )
                      {
                        v809.i64[0] = *(_QWORD *)&v806[8];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v809,
                          &off_10196D480,
                          &off_10196CD10);
                      }
                      v809 = *(__m256i *)v806;
                      v102 = (__m256i *)v806;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                        v806,
                        v812,
                        &v797,
                        &v809);
                      if ( v806[0] != 6 )
                      {
                        v102 = (__m256i *)v806;
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
                      }
                      v801.i128[1] = *(__int128 *)((char *)v812[0].i128 + 8);
                      v801.i64[1] = v812[0].i64[0];
                      v801.i8[0] = 5;
                      v141 = *((_QWORD *)&v789 + 1);
                      if ( *((_QWORD *)&v789 + 1) == v788 )
                      {
                        v102 = (__m256i *)&v788;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v788);
                      }
                      v125 = v789;
                      v126 = 32 * v141;
                      *(_OWORD *)(v789 + 32 * v141 + 16) = v801.i128[1];
                      v101 = v801.i64[1];
                      v127 = v801.i64[0];
LABEL_168:
                      *(_QWORD *)(v125 + v126 + 8) = v101;
                      *(_QWORD *)(v125 + v126) = v127;
                      *((_QWORD *)&v789 + 1) = v141 + 1;
LABEL_169:
                      v106 += 32;
                    }
                  }
                  *(__int128 *)((char *)v787.i128 + 8) = v789;
                  v787.i64[0] = v788;
LABEL_219:
                  if ( (_BYTE)v791 )
                  {
                    if ( !memcmp((const void *)__n, "assistant", v25) && *(_QWORD *)&v793[16] )
                    {
                      *(__int128 *)((char *)v809.i128 + 8) = *(_OWORD *)&v793[8];
                      v809.i64[0] = *(_QWORD *)v793;
                      *(_QWORD *)v793 = 0;
                      *(_OWORD *)&v793[8] = 8u;
                      *(_QWORD *)v806 = v787.i64[1];
                      *(_QWORD *)&v806[8] = v787.i64[1];
                      *(_QWORD *)&v806[16] = v787.i64[0];
                      *(_QWORD *)&v806[24] = v787.i64[1] + 32 * v787.i64[2];
                      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h8a138e0665e30b4d(
                        &v809,
                        v806);
                      v787.i64[0] = v809.i64[0];
                      *(__int128 *)((char *)v787.i128 + 8) = *(__int128 *)((char *)v809.i128 + 8);
                    }
                    v147 = v787.i64[2];
                    if ( v787.i64[2] )
                    {
                      v102 = (__m256i *)__n;
                      v101 = (__int64)"assistant";
                      v148 = memcmp((const void *)__n, "assistant", v25) == 0;
                      v149 = "usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                      if ( v148 )
                        v149 = "assistant";
                      v150 = 5LL * v148 + 4;
                      goto LABEL_228;
                    }
                  }
                  else
                  {
                    v147 = v787.i64[2];
                    v150 = 4;
                    v149 = "usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                    if ( v787.i64[2] )
                    {
LABEL_228:
                      __n = (size_t)v149;
                      v792.i64[0] = 0;
                      v792.i64[2] = 0;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v101);
                      v151 = 4;
                      v152 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                      if ( !v152 )
                        goto LABEL_653;
                      *v152 = 1701605234;
                      v800.i64[0] = 4;
                      v800.i64[1] = (__int64)v152;
                      v800.i64[2] = 4;
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                      v153 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v150, 1);
                      if ( !v153 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v150);
                      v154 = (__int64)v153;
                      memcpy(v153, (const void *)__n, v150);
                      v812[0].i8[0] = 3;
                      v812[0].i64[1] = v150;
                      v812[0].i64[2] = v154;
                      v812[0].i64[3] = v150;
                      v155 = &v809;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                        &v809,
                        &v792,
                        &v800);
                      if ( v809.i64[0] == 0x8000000000000000LL )
                      {
                        v156 = v809.i64[1];
                        v157 = 32 * v809.i64[3];
                        v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                        v158 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                        v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                        v801.i64[0] = v158;
                        *(_OWORD *)(v809.i64[1] + v157 + 16) = v812[0].i128[1];
                        v159 = (_BYTE *)v812[0].i64[1];
                        *(_OWORD *)(v156 + v157) = v812[0].i128[0];
                        if ( v801.i8[0] != 6 )
                        {
                          v155 = &v801;
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v806[48] = v811;
                        *(_OWORD *)&v806[32] = v810;
                        *(__m256i *)v806 = v809;
                        v797 = v812[0];
                        v155 = &v801;
                        v159 = v806;
                        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                          &v801,
                          v806,
                          &v797);
                      }
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v159);
                      v151 = 7;
                      v160 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                      if ( !v160 )
LABEL_653:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v151);
                      *(_DWORD *)((char *)v160 + 3) = 1953391988;
                      *v160 = 1953394531;
                      v800.i64[0] = 7;
                      v800.i64[1] = (__int64)v160;
                      v800.i64[2] = 7;
                      serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v806, &v787);
                      if ( v806[0] == 6 )
                      {
                        v809.i64[0] = *(_QWORD *)&v806[8];
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                          43,
                          &v809,
                          &off_10196D480,
                          &off_10196CFE0);
                      }
                      v812[0] = *(__m256i *)v806;
                      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                        &v809,
                        &v792,
                        &v800);
                      if ( v809.i64[0] == 0x8000000000000000LL )
                      {
                        v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                        v161 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                        v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                        v801.i64[0] = v161;
                        *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                        if ( v801.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                      }
                      else
                      {
                        *(_QWORD *)&v806[48] = v811;
                        *(_OWORD *)&v806[32] = v810;
                        *(__m256i *)v806 = v809;
                        v797 = v812[0];
                        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                          &v801,
                          v806,
                          &v797);
                      }
                      v805.i128[1] = *(__int128 *)((char *)v792.i128 + 8);
                      v805.i64[1] = v792.i64[0];
                      v805.i8[0] = 5;
                      v162 = v781;
                      if ( v781 == v779 )
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v779);
                      *(__m256i *)(v780 + 32 * v162) = v805;
                      v781 = v162 + 1;
                      goto LABEL_244;
                    }
                  }
                  v147 = 0;
LABEL_244:
                  v20 = (__m256i *)v787.i64[1];
                  for ( k = v147 + 1; k != 1; --k )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v20++);
                  v19 = v787.i64[0];
                  if ( v787.i64[0] )
                  {
                    v20 = (__m256i *)v787.i64[1];
                    v19 = 32 * v787.i64[0];
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                             v787.i64[1],
                                             32 * v787.i64[0],
                                             8);
                  }
                  goto LABEL_15;
                }
              }
              v787.i64[0] = 0;
              *(__int128 *)((char *)v787.i128 + 8) = 8u;
              goto LABEL_219;
            }
            goto LABEL_48;
          }
LABEL_159:
          LODWORD(v791) = 0;
          if ( !*(_QWORD *)&v793[16] )
            goto LABEL_124;
          goto LABEL_49;
        }
        if ( *(_DWORD *)__n ^ 0x74737973 | *(unsigned __int16 *)(__n + 4) ^ 0x6D65 )
        {
          v25 = 6;
          goto LABEL_159;
        }
LABEL_161:
        v19 = 7;
        v20 = (__m256i *)"contentpattern.output_modehead_limit";
        v123 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                    "contentpattern.output_modehead_limit",
                                    7,
                                    v15);
        if ( !v123 )
          goto LABEL_13;
        v124 = *v123;
        if ( v124 != 4 )
        {
          if ( v124 == 3 )
          {
            v20 = &v797;
            v19 = (size_t)(v123 + 8);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v797, v123 + 8);
            goto LABEL_448;
          }
LABEL_13:
          v17 = v785;
          v18 = __PAIR128__(v771, v786);
LABEL_14:
          v785 = v17;
          v771 = *((_QWORD *)&v18 + 1);
          v786 = v18;
          goto LABEL_15;
        }
        *(_QWORD *)v806 = 0;
        *(_OWORD *)&v806[8] = 1u;
        v209 = *((_QWORD *)v123 + 3);
        if ( v209 )
        {
          v210 = *((_QWORD *)v123 + 2);
          v211 = 32 * v209;
          v212 = 1;
          v213 = 0;
          while ( 1 )
          {
            v19 = 4;
            v20 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
            v287 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &anon_10420c9971c21f44d230d15b39fb3fec_75,
                     4,
                     v210);
            if ( !v287 || *(_BYTE *)v287 != 3 )
              goto LABEL_423;
            v289 = *(_QWORD *)(v287 + 16);
            v290 = *(_QWORD *)(v287 + 24);
            if ( v290 != 11 )
            {
              if ( v290 != 10 || *(_QWORD *)v289 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v289 + 8) ^ 0x7478LL )
                goto LABEL_423;
LABEL_437:
              v19 = 4;
              v20 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_110;
              v292 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       &anon_10420c9971c21f44d230d15b39fb3fec_110,
                       4,
                       v210);
              if ( !v292 || *(_BYTE *)v292 != 3 )
                goto LABEL_423;
              v791 = *(_QWORD *)(v292 + 16);
              v294 = *(_QWORD *)(v292 + 24);
              v295 = *(_QWORD *)v806;
              __n = v294;
              if ( v213 )
              {
                v296 = v213;
                if ( *(_QWORD *)v806 == v213 )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    v806,
                    v213,
                    1,
                    1,
                    1,
                    v293);
                  v296 = *(_QWORD *)&v806[16];
                  v212 = *(_QWORD *)&v806[8];
                }
                *(_BYTE *)(v212 + v296) = 10;
                v297 = v213 + 1;
                *(_QWORD *)&v806[16] = v297;
                v295 = *(_QWORD *)v806;
                v294 = __n;
              }
              else
              {
                v297 = 0;
              }
              if ( v294 > v295 - v297 )
              {
                v298 = v294;
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  v806,
                  v297,
                  v294,
                  1,
                  1,
                  v293);
                v297 = *(_QWORD *)&v806[16];
                v294 = v298;
              }
              v212 = *(_QWORD *)&v806[8];
              v20 = (__m256i *)(*(_QWORD *)&v806[8] + v297);
              v19 = v791;
              memcpy((void *)(*(_QWORD *)&v806[8] + v297), (const void *)v791, v294);
              v213 = __n + v297;
              goto LABEL_422;
            }
            v19 = 0x747865745F747570LL;
            if ( !(*(_QWORD *)v289 ^ 0x745F74757074756FLL | *(_QWORD *)(v289 + 3) ^ 0x747865745F747570LL) )
              goto LABEL_437;
            if ( *(_QWORD *)v289 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v289 + 3) ^ 0x6567616D695F7475LL )
              goto LABEL_423;
            if ( v213 )
              break;
            v286 = 0;
            if ( *(_QWORD *)v806 <= 0x1Eu )
              goto LABEL_436;
LABEL_421:
            v212 = *(_QWORD *)&v806[8];
            *(_QWORD *)(*(_QWORD *)&v806[8] + v286 + 23) = 0x5D64656472617772LL;
            qmemcpy((void *)(v212 + v286), "[image attached, not for", 24);
            v213 = v286 + 31;
LABEL_422:
            *(_QWORD *)&v806[16] = v213;
LABEL_423:
            v210 += 32;
            v211 -= 32;
            if ( !v211 )
              goto LABEL_447;
          }
          v291 = v213;
          if ( *(_QWORD *)v806 == v213 )
          {
            v20 = (__m256i *)v806;
            v19 = v213;
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              v806,
              v213,
              1,
              1,
              1,
              v288);
            v291 = *(_QWORD *)&v806[16];
            v212 = *(_QWORD *)&v806[8];
          }
          *(_BYTE *)(v212 + v291) = 10;
          v286 = v213 + 1;
          *(_QWORD *)&v806[16] = v286;
          if ( *(_QWORD *)v806 - v286 > 0x1E )
            goto LABEL_421;
LABEL_436:
          v20 = (__m256i *)v806;
          v19 = v286;
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            v806,
            v286,
            31,
            1,
            1,
            v288);
          v286 = *(_QWORD *)&v806[16];
          goto LABEL_421;
        }
LABEL_447:
        *(__int128 *)((char *)v797.i128 + 8) = *(_OWORD *)&v806[8];
        v797.i64[0] = *(_QWORD *)v806;
LABEL_448:
        v17 = (void *)v797.i64[2];
        if ( v797.i64[2] )
        {
          if ( v786 == 0x8000000000000000LL )
          {
            v18 = v797.i128[0];
            goto LABEL_14;
          }
          if ( !v785 )
          {
            v19 = v786;
            v18 = v797.i128[0];
            if ( !v786 )
              goto LABEL_14;
            v20 = (__m256i *)v771;
            goto LABEL_457;
          }
          v801.i64[0] = v786;
          v801.i64[1] = v771;
          v801.i64[2] = (__int64)v785;
          *(_QWORD *)v806 = &v801;
          *(_QWORD *)&v806[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          *(_QWORD *)&v806[16] = &v797;
          *(_QWORD *)&v806[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          v20 = &v809;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v809, &unk_1017C5D97, v806);
          v17 = (void *)v809.i64[2];
          v18 = v809.i128[0];
          if ( v801.i64[0] )
          {
            v20 = (__m256i *)v801.i64[1];
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v801.i64[1], v801.i64[0], 1);
          }
        }
        else
        {
          v17 = v785;
          v18 = __PAIR128__(v771, v786);
        }
        v19 = v797.i64[0];
        if ( !v797.i64[0] )
          goto LABEL_14;
        v20 = (__m256i *)v797.i64[1];
LABEL_457:
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1);
        goto LABEL_14;
      case 2LL:
        if ( *(_QWORD *)v23 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v23 + 8) ^ 0x67LL )
          goto LABEL_15;
        v19 = 17;
        v20 = (__m256i *)"encrypted_contentsignaturegeminiclaude";
        v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "encrypted_contentsignaturegeminiclaude",
                17,
                v15);
        if ( !v31 )
          goto LABEL_15;
        if ( *(_BYTE *)v31 != 3 )
          goto LABEL_15;
        v32 = *(_QWORD *)(v31 + 24);
        if ( v32 < 0x1D )
          goto LABEL_15;
        v33 = *(_QWORD *)(v31 + 16);
        si128 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v33), (__m128i)xmmword_101673290);
        v34 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v33 + 13)), (__m128i)xmmword_101673280),
                si128);
        if ( !_mm_testz_si128(v34, v34) )
          goto LABEL_15;
        v20 = (__m256i *)v806;
        v19 = (size_t)&anon_10420c9971c21f44d230d15b39fb3fec_509;
        base64::engine::Engine::decode::inner::h0ef0f283e408ae41(
          v806,
          &anon_10420c9971c21f44d230d15b39fb3fec_509,
          v33 + 29,
          v32 - 29);
        v35 = *(_QWORD *)v806;
        if ( *(_QWORD *)v806 == 0x8000000000000000LL )
          goto LABEL_15;
        v36 = *(__m256i **)&v806[8];
        *(_OWORD *)v806 = *(_OWORD *)&v806[8];
        *(_OWORD *)&v806[16] = 0u;
        v20 = &v809;
        v19 = (size_t)v806;
        serde_json::de::from_trait::ha73f8db442141d1f(&v809, v806);
        v37 = v809.i8[0];
        if ( v809.i8[0] == 6 )
        {
          v20 = &v809;
          core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v809);
        }
        else
        {
          *(__int64 *)((char *)&v797.i64[2] + 7) = v809.i64[3];
          *(__int128 *)((char *)v797.i128 + 8) = *(__int128 *)((char *)v809.i128 + 9);
          v797.i64[0] = *(__int64 *)((char *)v809.i64 + 1);
        }
        if ( v35 )
        {
          v20 = v36;
          v19 = v35;
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1);
        }
        if ( v37 == 6 )
          goto LABEL_15;
        v801.i64[3] = *(__int64 *)((char *)&v797.i64[2] + 7);
        *(__int128 *)((char *)v801.i128 + 9) = *(__int128 *)((char *)v797.i128 + 8);
        *(__int64 *)((char *)v801.i64 + 1) = v797.i64[0];
        v801.i8[0] = v37;
        v19 = 4;
        v214 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &anon_10420c9971c21f44d230d15b39fb3fec_75,
                 4,
                 &v801);
        v215 = 6;
        v216 = 1;
        if ( !v214 || *(_BYTE *)v214 != 3 )
          goto LABEL_461;
        v217 = *(const __m128i **)(v214 + 16);
        v218 = *(_QWORD *)(v214 + 24);
        if ( v218 == 17 )
        {
          si128 = _mm_xor_si128(_mm_loadu_si128(v217), (__m128i)xmmword_1016748D0);
          v299 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(v217[1].u8[0]), (__m128i)xmmword_1015DCA40), si128);
          if ( !_mm_testz_si128(v299, v299) )
            goto LABEL_461;
          v19 = 4;
          v303 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                   4,
                   &v801);
          if ( !v303 )
            goto LABEL_493;
          if ( *(_BYTE *)v303 != 3 )
            goto LABEL_493;
          v304 = *(_QWORD *)(v303 + 16);
          v305 = *(_QWORD *)(v303 + 24);
          v800.i64[0] = v304;
          v800.i64[1] = v305;
          if ( !v305 )
            goto LABEL_493;
          v805.i64[0] = 0;
          v805.i64[2] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
            "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
            4);
          v306 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v306 )
            goto LABEL_679;
          *v306 = 1701869940;
          v812[0].i64[0] = 4;
          v812[0].i64[1] = (__int64)v306;
          v812[0].i64[2] = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196D068);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196D078);
          }
          v809 = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
          if ( v806[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
          v307 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v307 )
LABEL_679:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v307 = 1635017060;
          v812[0].i64[0] = 4;
          v812[0].i64[1] = (__int64)v307;
          v812[0].i64[2] = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v806, &v800);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196D078);
          }
          v809 = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
          if ( v806[0] != 6 )
LABEL_491:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
LABEL_492:
          v19 = (size_t)&v797.u64[1];
          *(__int128 *)((char *)v797.i128 + 15) = *(__int128 *)((char *)v805.i128 + 8);
          *(__int64 *)((char *)v797.i64 + 7) = v805.i64[0];
          *(_QWORD *)v806 = v797.i64[0];
          *(_OWORD *)&v806[8] = *(__int128 *)((char *)v797.i128 + 8);
          *(_QWORD *)&v806[23] = v805.i64[2];
          v215 = 5;
          v216 = 0;
          goto LABEL_461;
        }
        if ( v218 == 8 && v217->i64[0] == 0x676E696B6E696874LL )
        {
          v219 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_101674AA0,
                   8,
                   &v801);
          v220 = 1;
          if ( v219 && *(_BYTE *)v219 == 3 )
          {
            v220 = *(_QWORD *)(v219 + 16);
            v221 = *(_QWORD *)(v219 + 24);
          }
          else
          {
            v221 = 0;
          }
          v792.i64[0] = v220;
          v792.i64[1] = v221;
          v19 = 9;
          v308 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "signaturegeminiclaude",
                   9,
                   &v801);
          if ( !v308
            || *(_BYTE *)v308 != 3
            || (v309 = *(_QWORD *)(v308 + 16),
                v310 = *(_QWORD *)(v308 + 24),
                v800.i64[0] = v309,
                (v800.i64[1] = v310) == 0) )
          {
LABEL_493:
            v20 = &v801;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
            goto LABEL_15;
          }
          v805.i64[0] = 0;
          v805.i64[2] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("signaturegeminiclaude", 9);
          v311 = 4;
          v312 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v312 )
            goto LABEL_678;
          *v312 = 1701869940;
          v812[0].i64[0] = 4;
          v812[0].i64[1] = (__int64)v312;
          v812[0].i64[2] = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196D090);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196D0A0);
          }
          v809 = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
          if ( v806[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
          v311 = 8;
          v313 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
          if ( !v313 )
            goto LABEL_678;
          *v313 = 0x676E696B6E696874LL;
          v812[0].i64[0] = 8;
          v812[0].i64[1] = (__int64)v313;
          v812[0].i64[2] = 8;
          serde_json::value::to_value::h29e3c39dc75a9151(v806, &v792);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196D0A0);
          }
          v809 = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
          if ( v806[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
          v311 = 9;
          v314 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v314 )
LABEL_678:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v311);
          *(_QWORD *)v314 = 0x727574616E676973LL;
          *(_BYTE *)(v314 + 8) = 101;
          v812[0].i64[0] = 9;
          v812[0].i64[1] = v314;
          v812[0].i64[2] = 9;
          serde_json::value::to_value::h29e3c39dc75a9151(v806, &v800);
          if ( v806[0] == 6 )
          {
            v809.i64[0] = *(_QWORD *)&v806[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v809,
              &off_10196D480,
              &off_10196D0A0);
          }
          v809 = *(__m256i *)v806;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
          if ( v806[0] != 6 )
            goto LABEL_491;
          goto LABEL_492;
        }
LABEL_461:
        v20 = &v801;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
        if ( !v216 )
        {
          v753.i8[0] = v215;
          v753.i64[3] = *(_QWORD *)&v806[23];
          *(__int128 *)((char *)v753.i128 + 9) = *(_OWORD *)&v806[8];
          *(__int64 *)((char *)v753.i64 + 1) = *(_QWORD *)v806;
          v300 = *(_QWORD *)&v793[16];
          if ( *(_QWORD *)&v793[16] == *(_QWORD *)v793 )
          {
            v20 = (__m256i *)v793;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v793);
          }
          v301 = *(_QWORD *)&v793[8];
          v302 = 32 * v300;
          *(_OWORD *)(*(_QWORD *)&v793[8] + v302 + 16) = v753.i128[1];
          v19 = v753.u64[1];
          *(_OWORD *)(v301 + v302) = v753.i128[0];
          *(_QWORD *)&v793[16] = v300 + 1;
        }
        goto LABEL_15;
      case 6LL:
        if ( *(_QWORD *)v23 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v23 + 5) ^ 0x6C6C61635F6E6F69LL )
          goto LABEL_15;
        v27 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_101674E0C,
                7,
                v15);
        v28 = 13;
        if ( !v27 )
        {
          v29 = "toolu_unknowncontent_filter";
          goto LABEL_55;
        }
        v29 = "toolu_unknowncontent_filter";
        if ( *(_BYTE *)v27 != 3 )
          goto LABEL_55;
        v28 = *(_QWORD *)(v27 + 24);
        if ( v28 >= 0 )
        {
          v29 = *(char **)(v27 + 16);
          if ( !v28 )
          {
            __dst = (void *)1;
            v30 = 1;
            __n = 0;
            goto LABEL_57;
          }
LABEL_55:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E0C, 7);
          v52 = 1;
          __n = v28;
          __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1);
          if ( !__dst )
            goto LABEL_650;
          v30 = 0;
LABEL_57:
          memcpy(__dst, v29, __n);
          v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v15);
          v54 = 4;
          if ( v53 )
          {
            v55 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
            if ( *(_BYTE *)v53 == 3 )
            {
              v54 = *(_QWORD *)(v53 + 24);
              if ( v54 < 0 )
              {
                v108 = 0;
                goto LABEL_578;
              }
              LODWORD(v778) = v30;
              v55 = *(char **)(v53 + 16);
              if ( !v54 )
              {
                __s1 = (void *)1;
                LOBYTE(v30) = 1;
                v54 = 0;
LABEL_133:
                v791 = v54;
                memcpy(__s1, v55, v54);
                v109 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "arguments{}",
                         9,
                         v15);
                if ( v109 )
                {
                  v110 = *(_QWORD *)(v109 + 24);
                  if ( *(_BYTE *)v109 != 3 )
                    v110 = 2;
                  v111 = *(char **)(v109 + 16);
                  if ( *(_BYTE *)v109 != 3 )
                    v111 = "{}";
                }
                else
                {
                  v110 = 2;
                  v111 = "{}";
                }
                *(_QWORD *)v806 = v111;
                *(_OWORD *)&v806[8] = (unsigned __int64)v110;
                *(_QWORD *)&v806[24] = 0;
                *(_QWORD *)&v806[32] = v111;
                *(_QWORD *)&v806[40] = v110;
                v118 = &v809;
                v119 = (__int64)v806;
                serde_json::de::from_trait::h51e180b4bb6af5e0(&v809, v806);
                if ( v809.i8[0] == 6 )
                {
                  v120 = (__m256i *)v809.i64[1];
                  *(_QWORD *)v806 = v809.i64[1];
                  if ( v110 < 0 )
                  {
                    v392 = 0;
LABEL_619:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v392, v766);
                  }
                  LODWORD(v765) = v30;
                  if ( v110 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v809, v806);
                    v121 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v110, 1);
                    if ( !v121 )
                    {
                      v766 = v110;
                      v392 = 1;
                      goto LABEL_619;
                    }
                  }
                  else
                  {
                    v121 = 1;
                  }
                  v164 = v121;
                  memcpy((void *)v121, v111, v110);
                  v800.i64[1] = v110;
                  v766 = v164;
                  v800.i64[2] = v164;
                  v800.i64[3] = v110;
                  v800.i8[0] = 3;
                  if ( v120->i64[0] == 1 )
                  {
                    v122 = v791;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v120->u32[2]);
                  }
                  else
                  {
                    v122 = v791;
                    if ( !v120->i64[0] )
                    {
                      v165 = v120->i64[2];
                      if ( v165 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120->i64[1], v165, 1);
                    }
                  }
                  v119 = 40;
                  v118 = v120;
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 40, 8);
                }
                else
                {
                  LODWORD(v765) = v30;
                  v800 = v809;
                  v122 = v791;
                }
                if ( v745 )
                {
                  v118 = (__m256i *)v746;
                  v119 = (__int64)__s1;
                  v166 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v746, __s1, v122);
                  _RCX = v166 >> 57;
                  v168 = v743;
                  v169 = v744;
                  v170 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v166 >> 57), (__m128i)0LL);
                  v171 = &v743[-2].i8[8];
                  for ( m = 0; ; m += 16 )
                  {
                    v173 = (char *)(v169 & v166);
                    v174 = _mm_loadu_si128((const __m128i *)&v173[(_QWORD)v168]);
                    si128 = _mm_cmpeq_epi8(v174, v170);
                    _R13D = _mm_movemask_epi8(si128);
                    if ( _R13D )
                      break;
LABEL_263:
                    si128 = (__m128i)-1LL;
                    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v174, (__m128i)-1LL));
                    v122 = v791;
                    if ( (_DWORD)_RCX )
                      goto LABEL_265;
                    v166 = (unsigned __int64)&v173[m + 16];
                  }
                  v768[0] = v173;
                  v774 = v170;
                  v767 = m;
                  v755 = v174;
                  while ( 1 )
                  {
                    __asm { tzcnt   ecx, r13d }
                    v176 = -3LL * (v169 & (unsigned __int64)&v173[_RCX]);
                    HIDWORD(_RCX) = HIDWORD(v791);
                    if ( v791 == *(_QWORD *)&v171[8 * v176 + 16] )
                    {
                      v119 = *(_QWORD *)&v171[8 * v176 + 8];
                      v118 = (__m256i *)__s1;
                      if ( !memcmp(__s1, (const void *)v119, v791) )
                        break;
                    }
                    v177 = _R13D - 1;
                    LOWORD(v177) = _R13D & (_R13D - 1);
                    v148 = (_WORD)v177 == 0;
                    _R13D = v177;
                    v173 = (char *)v768[0];
                    v170 = _mm_load_si128(&v774);
                    m = v767;
                    v174 = _mm_load_si128(&v755);
                    if ( v148 )
                      goto LABEL_263;
                  }
                }
                else
                {
LABEL_265:
                  if ( v122 != 11
                    || *(_QWORD *)__s1 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)__s1 + 3) ^ 0x68637461705F796CLL )
                  {
                    v792 = v800;
LABEL_334:
                    v223 = __n;
                    goto LABEL_335;
                  }
                }
                if ( v800.u8[0] == 3 )
                {
                  v188 = v800.i64[1];
                  v189 = v800.i64[3];
                  v768[0] = (void *)v800.i64[2];
                  v788 = 0;
                  *((_QWORD *)&v789 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v118, v119);
                  v190 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v190 )
                  {
                    v774.i64[0] = v188;
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
                  }
                  *(_BYTE *)(v190 + 4) = 116;
                  *(_DWORD *)v190 = 1970302569;
                  v805.i64[0] = 5;
                  v805.i64[1] = v190;
                  v805.i64[2] = 5;
                  if ( v189 < 0 )
                  {
                    v774.i64[0] = v188;
                    v191 = 0;
LABEL_623:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v191, v189);
                  }
                  if ( v189 )
                  {
                    v774.i64[0] = v188;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
                    v191 = 1;
                    v192 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v189, 1);
                    if ( !v192 )
                      goto LABEL_623;
                    v193 = v192;
                    v188 = v774.i64[0];
                  }
                  else
                  {
                    v193 = 1;
                  }
                  memcpy((void *)v193, v768[0], v189);
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = v189;
                  v812[0].i64[2] = v193;
                  v812[0].i64[3] = v189;
                  v118 = &v809;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v788,
                    &v805);
                  v223 = __n;
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v275 = v809.i64[1];
                    v276 = 32 * v809.i64[3];
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v277 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v277;
                    *(_OWORD *)(v809.i64[1] + v276 + 16) = v812[0].i128[1];
                    v119 = v812[0].i64[1];
                    *(_OWORD *)(v275 + v276) = v812[0].i128[0];
                    if ( v801.i8[0] != 6 )
                    {
                      v118 = &v801;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    v118 = &v801;
                    v119 = (__int64)v806;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  v792.i128[1] = v789;
                  v792.i64[1] = v788;
                  v792.i8[0] = 5;
                  if ( v188 )
                  {
                    v118 = (__m256i *)v768[0];
                    v119 = v188;
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v768[0], v188, 1);
                  }
LABEL_335:
                  v800.i64[0] = 0;
                  v800.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v118, v119);
                  v224 = 4;
                  v225 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v225 )
                    goto LABEL_652;
                  *v225 = 1701869940;
                  v805.i64[0] = 4;
                  v805.i64[1] = (__int64)v225;
                  v805.i64[2] = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v226 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                  if ( !v226 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                  *v226 = 0x6573755F6C6F6F74LL;
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = 8;
                  v812[0].i64[2] = (__int64)v226;
                  v812[0].i64[3] = 8;
                  v227 = &v809;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v228 = v809.i64[1];
                    v229 = 32 * v809.i64[3];
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v230 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v230;
                    *(_OWORD *)(v809.i64[1] + v229 + 16) = v812[0].i128[1];
                    v231 = (_BYTE *)v812[0].i64[1];
                    *(_OWORD *)(v228 + v229) = v812[0].i128[0];
                    if ( v801.i8[0] != 6 )
                    {
                      v227 = &v801;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    v227 = &v801;
                    v231 = v806;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v227, v231);
                  v224 = 2;
                  v232 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v232 )
                    goto LABEL_652;
                  *v232 = 25705;
                  v805.i64[0] = 2;
                  v805.i64[1] = (__int64)v232;
                  v805.i64[2] = 2;
                  v233 = 1;
                  if ( !(_BYTE)v778 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                    v234 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v223, 1);
                    if ( !v234 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v223);
                    v233 = v234;
                  }
                  memcpy((void *)v233, __dst, v223);
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = v223;
                  v812[0].i64[2] = v233;
                  v812[0].i64[3] = v223;
                  v235 = &v809;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v236 = v809.i64[1];
                    v237 = 32 * v809.i64[3];
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v238 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v238;
                    *(_OWORD *)(v809.i64[1] + v237 + 16) = v812[0].i128[1];
                    v239 = (_BYTE *)v812[0].i64[1];
                    *(_OWORD *)(v236 + v237) = v812[0].i128[0];
                    if ( v801.i8[0] != 6 )
                    {
                      v235 = &v801;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    v235 = &v801;
                    v239 = v806;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v235, v239);
                  v224 = 4;
                  v240 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v240 )
                    goto LABEL_652;
                  *v240 = 1701667182;
                  v805.i64[0] = 4;
                  v805.i64[1] = (__int64)v240;
                  v805.i64[2] = 4;
                  v241 = 1;
                  v242 = v791;
                  if ( !(_BYTE)v765 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                    v243 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v242, 1);
                    if ( !v243 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v242);
                    v241 = v243;
                  }
                  memcpy((void *)v241, __s1, v242);
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = v242;
                  v812[0].i64[2] = v241;
                  v812[0].i64[3] = v242;
                  v244 = &v809;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v245 = v809.i64[1];
                    v246 = 32 * v809.i64[3];
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v247 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v247;
                    *(_OWORD *)(v809.i64[1] + v246 + 16) = v812[0].i128[1];
                    v248 = (_BYTE *)v812[0].i64[1];
                    *(_OWORD *)(v245 + v246) = v812[0].i128[0];
                    if ( v801.i8[0] != 6 )
                    {
                      v244 = &v801;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    v244 = &v801;
                    v248 = v806;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v244, v248);
                  v224 = 5;
                  v249 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v249 )
LABEL_652:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v224);
                  *(_BYTE *)(v249 + 4) = 116;
                  *(_DWORD *)v249 = 1970302569;
                  v805.i64[0] = 5;
                  v805.i64[1] = v249;
                  v805.i64[2] = 5;
                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                    v806,
                    &v792);
                  if ( v806[0] == 6 )
                  {
                    v809.i64[0] = *(_QWORD *)&v806[8];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                      43,
                      &v809,
                      &off_10196D480,
                      &off_10196CF98);
                  }
                  v812[0] = *(__m256i *)v806;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v251 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v251;
                    *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                    if ( v801.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  v764.i64[3] = v800.i64[2];
                  *(__int128 *)((char *)v764.i128 + 8) = v800.i128[0];
                  v764.i8[0] = 5;
                  v252 = *(_QWORD *)&v793[16];
                  if ( *(_QWORD *)&v793[16] )
                  {
                    v787.i64[0] = 0;
                    *(__int128 *)((char *)v787.i128 + 8) = 8u;
                  }
                  else
                  {
                    v253 = v780 + 32 * v781;
                    v148 = v253 == 32;
                    v254 = v253 - 32;
                    if ( v781 != 0 && !v148 )
                    {
                      v255 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                               4,
                               v254);
                      if ( v255 )
                      {
                        if ( *(_BYTE *)v255 == 3
                          && *(_QWORD *)(v255 + 24) == 9
                          && !(**(_QWORD **)(v255 + 16) ^ 0x6E61747369737361LL
                             | *(unsigned __int8 *)(*(_QWORD *)(v255 + 16) + 8LL) ^ 0x74LL) )
                        {
                          v278 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                   "contentpattern.output_modehead_limit",
                                   7,
                                   v254);
                          if ( v278 )
                          {
                            if ( *(_BYTE *)v278 == 4 )
                            {
                              v279 = *(_QWORD *)(v278 + 24);
                              if ( v279 )
                              {
                                v280 = *(_QWORD *)(v278 + 16);
                                v281 = 32 * v279;
                                while ( 1 )
                                {
                                  v282 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                           &anon_10420c9971c21f44d230d15b39fb3fec_75,
                                           4,
                                           v280);
                                  if ( v282 )
                                  {
                                    if ( *(_BYTE *)v282 == 3
                                      && *(_QWORD *)(v282 + 24) == 8
                                      && **(_QWORD **)(v282 + 16) == 0x6573755F6C6F6F74LL )
                                    {
                                      break;
                                    }
                                  }
                                  v280 += 32;
                                  v281 -= 32;
                                  if ( !v281 )
                                    goto LABEL_370;
                                }
                                if ( v781
                                  && (v283 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                                               "contentpattern.output_modehead_limit",
                                               7,
                                               v780 + 32 * v781 - 32),
                                      (v284 = v283) != 0)
                                  && *(_BYTE *)v283 == 4 )
                                {
                                  v285 = *(_QWORD *)(v283 + 24);
                                  if ( v285 == *(_QWORD *)(v283 + 8) )
                                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v283 + 8);
                                  *(__m256i *)(*(_QWORD *)(v284 + 16) + 32 * v285) = v764;
                                  *(_QWORD *)(v284 + 24) = v285 + 1;
                                }
                                else
                                {
                                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v764);
                                }
                                goto LABEL_394;
                              }
                            }
                          }
                        }
                      }
                    }
LABEL_370:
                    v252 = *(_QWORD *)&v793[16];
                    v787.i64[0] = 0;
                    *(__int128 *)((char *)v787.i128 + 8) = 8u;
                    if ( !*(_QWORD *)&v793[16] )
                    {
                      *(__m256i *)v806 = v764;
                      v258 = 0;
                      goto LABEL_374;
                    }
                  }
                  v256 = *(const void **)&v793[8];
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    &v787,
                    0,
                    v252,
                    8,
                    32,
                    v250);
                  v257 = (__m256i *)(v787.i64[1] + 32 * v787.i64[2]);
                  memcpy(v257, v256, 32 * v252);
                  v258 = v787.i64[2] + v252;
                  v787.i64[2] = v258;
                  *(_QWORD *)&v793[16] = 0;
                  *(__m256i *)v806 = v764;
                  if ( v258 != v787.i64[0] )
                  {
LABEL_375:
                    v259 = v787.i64[1];
                    v260 = 32 * v258;
                    *(_OWORD *)(v787.i64[1] + v260 + 16) = *(_OWORD *)&v806[16];
                    v261 = *(_OWORD *)v806;
                    *(_OWORD *)(v259 + v260) = *(_OWORD *)v806;
                    v787.i64[2] = v258 + 1;
                    v788 = 0;
                    *((_QWORD *)&v789 + 1) = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v257, *((_QWORD *)&v261 + 1));
                    v262 = 4;
                    v263 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v263 )
                      goto LABEL_658;
                    *v263 = 1701605234;
                    v800.i64[0] = 4;
                    v800.i64[1] = (__int64)v263;
                    v800.i64[2] = 4;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                    v264 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                    if ( !v264 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                    *(_QWORD *)v264 = 0x6E61747369737361LL;
                    *(_BYTE *)(v264 + 8) = 116;
                    v812[0].i8[0] = 3;
                    v812[0].i64[1] = 9;
                    v812[0].i64[2] = v264;
                    v812[0].i64[3] = 9;
                    v265 = &v809;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                      &v809,
                      &v788,
                      &v800);
                    if ( v809.i64[0] == 0x8000000000000000LL )
                    {
                      v266 = v809.i64[1];
                      v267 = 32 * v809.i64[3];
                      v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                      v268 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                      v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                      v801.i64[0] = v268;
                      *(_OWORD *)(v809.i64[1] + v267 + 16) = v812[0].i128[1];
                      v269 = (_BYTE *)v812[0].i64[1];
                      *(_OWORD *)(v266 + v267) = v812[0].i128[0];
                      if ( v801.i8[0] != 6 )
                      {
                        v265 = &v801;
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                      }
                    }
                    else
                    {
                      *(_QWORD *)&v806[48] = v811;
                      *(_OWORD *)&v806[32] = v810;
                      *(__m256i *)v806 = v809;
                      v797 = v812[0];
                      v265 = &v801;
                      v269 = v806;
                      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                        &v801,
                        v806,
                        &v797);
                    }
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v265, v269);
                    v262 = 7;
                    v270 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                    if ( !v270 )
LABEL_658:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v262);
                    *(_DWORD *)((char *)v270 + 3) = 1953391988;
                    *v270 = 1953394531;
                    v800.i64[0] = 7;
                    v800.i64[1] = (__int64)v270;
                    v800.i64[2] = 7;
                    serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v806, &v787);
                    if ( v806[0] == 6 )
                    {
                      v809.i64[0] = *(_QWORD *)&v806[8];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                        43,
                        &v809,
                        &off_10196D480,
                        &off_10196CFB0);
                    }
                    v812[0] = *(__m256i *)v806;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                      &v809,
                      &v788,
                      &v800);
                    if ( v809.i64[0] == 0x8000000000000000LL )
                    {
                      v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                      v271 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                      v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                      v801.i64[0] = v271;
                      *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                      if ( v801.i8[0] != 6 )
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                    }
                    else
                    {
                      *(_QWORD *)&v806[48] = v811;
                      *(_OWORD *)&v806[32] = v810;
                      *(__m256i *)v806 = v809;
                      v797 = v812[0];
                      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                        &v801,
                        v806,
                        &v797);
                    }
                    v805.i128[1] = v789;
                    v805.i64[1] = v788;
                    v805.i8[0] = 5;
                    v272 = v781;
                    if ( v781 == v779 )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v779);
                    *(__m256i *)(v780 + 32 * v272) = v805;
                    v781 = v272 + 1;
                    v273 = v787.i64[1];
                    for ( n = v787.i64[2] + 1; n != 1; --n )
                    {
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v273);
                      v273 += 32;
                    }
                    if ( v787.i64[0] )
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                               v787.i64[1],
                                               32 * v787.i64[0],
                                               8);
LABEL_394:
                    v20 = &v792;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v792);
                    if ( v791 )
                    {
                      v20 = (__m256i *)__s1;
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v791, 1);
                    }
                    v19 = __n;
                    if ( __n )
                    {
                      v20 = (__m256i *)__dst;
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __n, 1);
                    }
                    goto LABEL_15;
                  }
LABEL_374:
                  v257 = &v787;
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v787);
                  goto LABEL_375;
                }
                if ( v800.u8[0] == 5 )
                {
                  v178 = (unsigned __int16 *)v800.i64[1];
                  if ( v800.i64[1] )
                  {
                    v774.i64[0] = v800.i64[2];
                    while ( 1 )
                    {
                      v179 = v178 + 180;
                      v768[0] = v178;
                      v767 = v178[313];
                      v180 = 3LL * (unsigned int)(8 * v767);
                      v181 = -1;
                      do
                      {
                        if ( !v180 )
                        {
                          v181 = v767;
                          goto LABEL_282;
                        }
                        v182 = v179 + 12;
                        v119 = *((_QWORD *)v179 + 1);
                        v183 = *((_QWORD *)v179 + 2);
                        v184 = v183 - 5;
                        if ( v183 >= 5 )
                          v183 = 5;
                        v185 = -(__int64)v184;
                        v118 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_146;
                        v186 = memcmp(&anon_10420c9971c21f44d230d15b39fb3fec_146, (const void *)v119, v183);
                        if ( v186 )
                          v185 = v186;
                        v187 = (v185 > 0) - (v185 < 0);
                        ++v181;
                        v180 -= 24;
                        v179 = v182;
                      }
                      while ( v187 == 1 );
                      if ( !v187 )
                        goto LABEL_290;
LABEL_282:
                      if ( !v774.i64[0] )
                        break;
                      --v774.i64[0];
                      v178 = *((unsigned __int16 **)v768[0] + v181 + 79);
                    }
                  }
                  v118 = (__m256i *)&v800.u32[2];
                  v119 = (__int64)"patchminimallowmediumxhighmaxultrasysteminstructions";
                  if ( alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                         &v800.u32[2],
                         "patchminimallowmediumxhighmaxultrasysteminstructions",
                         5) )
                  {
LABEL_290:
                    v792.i64[3] = v800.i64[3];
                    *(__int128 *)((char *)v792.i128 + 8) = *(__int128 *)((char *)v800.i128 + 8);
                    v792.i8[0] = 5;
                    goto LABEL_334;
                  }
                }
                v805 = v800;
                v787.i64[0] = 0;
                v787.i64[2] = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v118, v119);
                v194 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                if ( !v194 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
                *(_BYTE *)(v194 + 4) = 116;
                *(_DWORD *)v194 = 1970302569;
                v788 = 5;
                *(_QWORD *)&v789 = v194;
                *((_QWORD *)&v789 + 1) = 5;
                v809.i64[0] = 0;
                *(__int128 *)((char *)v809.i128 + 8) = 1u;
                *(_QWORD *)&v806[16] = 1610612768;
                *(_QWORD *)v806 = &v809;
                *(_QWORD *)&v806[8] = &anon_10420c9971c21f44d230d15b39fb3fec_964;
                if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                                        &v805,
                                        v806) )
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &anon_10420c9971c21f44d230d15b39fb3fec_965,
                    55,
                    &v801,
                    &anon_10420c9971c21f44d230d15b39fb3fec_976,
                    &anon_10420c9971c21f44d230d15b39fb3fec_967);
                v768[0] = (void *)v809.i64[1];
                v774.i64[0] = v809.i64[0];
                v195 = v809.u64[2];
                if ( v809.i64[2] < 0 )
                {
                  v196 = 0;
LABEL_621:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v196, v195);
                }
                if ( v809.i64[2] )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v805, v806);
                  v196 = 1;
                  v197 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v195, 1);
                  if ( !v197 )
                    goto LABEL_621;
                  v198 = v197;
                }
                else
                {
                  v198 = 1;
                }
                memcpy((void *)v198, v768[0], v195);
                v812[0].i8[0] = 3;
                v812[0].i64[1] = v195;
                v812[0].i64[2] = v198;
                v812[0].i64[3] = v195;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v787, &v788);
                if ( v809.i64[0] == 0x8000000000000000LL )
                {
                  v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                  v222 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                  v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                  v801.i64[0] = v222;
                  *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                  if ( v801.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                }
                else
                {
                  *(_QWORD *)&v806[48] = v811;
                  *(_OWORD *)&v806[32] = v810;
                  *(__m256i *)v806 = v809;
                  v797 = v812[0];
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v801,
                    v806,
                    &v797);
                }
                v119 = v774.i64[0];
                if ( v774.i64[0] )
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v768[0], v774.i64[0], 1);
                v792.i128[1] = *(__int128 *)((char *)v787.i128 + 8);
                v792.i64[1] = v787.i64[0];
                v792.i8[0] = 5;
                v118 = &v805;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v805);
                goto LABEL_334;
              }
              v30 = (int)v778;
            }
          }
          else
          {
            v55 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
          }
          LODWORD(v778) = v30;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
          v108 = 1;
          __s1 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v54, 1);
          if ( __s1 )
          {
            v30 = 0;
            goto LABEL_133;
          }
          __s1 = (void *)v54;
LABEL_578:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v108, __s1);
        }
        v52 = 0;
        v339 = (size_t)__dst;
        goto LABEL_542;
      case 13LL:
        si128 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v23), (__m128i)xmmword_1015DCA60);
        v38 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v23 + 16)), (__m128i)xmmword_1015DCA50), si128);
        if ( !_mm_testz_si128(v38, v38) )
          goto LABEL_15;
        v39 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_101674E0C,
                7,
                v15);
        v40 = 13;
        if ( v39 )
        {
          v41 = "toolu_unknowncontent_filter";
          if ( *(_BYTE *)v39 == 3 )
          {
            v40 = *(_QWORD *)(v39 + 24);
            if ( v40 < 0 )
            {
              v52 = 0;
              v339 = (size_t)__src;
              goto LABEL_542;
            }
            v41 = *(char **)(v39 + 16);
            if ( !v40 )
            {
              v42 = 1;
              v43 = 1;
              __n = 0;
LABEL_65:
              __src = (void *)v42;
              memcpy((void *)v42, v41, __n);
              v56 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                "output",
                                6,
                                v15);
              codexmate_lib::core::relay::translator::flatten_function_call_output::h9e1aa310da980a1b(&v792, v56);
              v788 = 0;
              *((_QWORD *)&v789 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v792, v56);
              v57 = 4;
              v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v58 )
                goto LABEL_644;
              *v58 = 1701869940;
              v805.i64[0] = 4;
              v805.i64[1] = (__int64)v58;
              v805.i64[2] = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
              if ( !v59 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
              qmemcpy(v59, "tool_result", 11);
              v812[0].i8[0] = 3;
              v812[0].i64[1] = 11;
              v812[0].i64[2] = (__int64)v59;
              v812[0].i64[3] = 11;
              v60 = &v809;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v788, &v805);
              if ( v809.i64[0] == 0x8000000000000000LL )
              {
                v61 = v809.i64[1];
                v62 = 32 * v809.i64[3];
                v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                v63 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                v801.i64[0] = v63;
                *(_OWORD *)(v809.i64[1] + v62 + 16) = v812[0].i128[1];
                v64 = (_BYTE *)v812[0].i64[1];
                *(_OWORD *)(v61 + v62) = v812[0].i128[0];
                if ( v801.i8[0] != 6 )
                {
                  v60 = &v801;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                }
              }
              else
              {
                *(_QWORD *)&v806[48] = v811;
                *(_OWORD *)&v806[32] = v810;
                *(__m256i *)v806 = v809;
                v797 = v812[0];
                v60 = &v801;
                v64 = v806;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v801,
                  v806,
                  &v797);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v64);
              v57 = 11;
              v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
              if ( !v65 )
                goto LABEL_644;
              qmemcpy(v65, "tool_use_id", 11);
              v805.i64[0] = 11;
              v805.i64[1] = (__int64)v65;
              v805.i64[2] = 11;
              v66 = 1;
              if ( !v43 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
                v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
                if ( !v67 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
                v66 = v67;
              }
              v68 = __n;
              memcpy((void *)v66, __src, __n);
              v812[0].i8[0] = 3;
              v812[0].i64[1] = v68;
              v812[0].i64[2] = v66;
              v812[0].i64[3] = v68;
              v69 = &v809;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v788, &v805);
              if ( v809.i64[0] == 0x8000000000000000LL )
              {
                v70 = v809.i64[1];
                v71 = 32 * v809.i64[3];
                v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                v72 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                v801.i64[0] = v72;
                *(_OWORD *)(v809.i64[1] + v71 + 16) = v812[0].i128[1];
                v73 = (_BYTE *)v812[0].i64[1];
                *(_OWORD *)(v70 + v71) = v812[0].i128[0];
                if ( v801.i8[0] != 6 )
                {
                  v69 = &v801;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                }
              }
              else
              {
                *(_QWORD *)&v806[48] = v811;
                *(_OWORD *)&v806[32] = v810;
                *(__m256i *)v806 = v809;
                v797 = v812[0];
                v69 = &v801;
                v73 = v806;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v801,
                  v806,
                  &v797);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, v73);
              v57 = 7;
              v74 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v74 )
LABEL_644:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v57);
              *(_DWORD *)((char *)v74 + 3) = 1953391988;
              *v74 = 1953394531;
              v805.i64[0] = 7;
              v805.i64[1] = (__int64)v74;
              v805.i64[2] = 7;
              serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                v806,
                &v792);
              if ( v806[0] == 6 )
              {
                v809.i64[0] = *(_QWORD *)&v806[8];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v809,
                  &off_10196D480,
                  &off_10196CF68);
              }
              v812[0] = *(__m256i *)v806;
              v75 = &v809;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v788, &v805);
              if ( v809.i64[0] == 0x8000000000000000LL )
              {
                v76 = v809.i64[1];
                v77 = 32 * v809.i64[3];
                v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                v78 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                v801.i64[0] = v78;
                *(_OWORD *)(v809.i64[1] + v77 + 16) = v812[0].i128[1];
                v79 = v812[0].i64[1];
                *(_OWORD *)(v76 + v77) = v812[0].i128[0];
                if ( v801.i8[0] != 6 )
                {
                  v75 = &v801;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                }
              }
              else
              {
                *(_QWORD *)&v806[48] = v811;
                *(_OWORD *)&v806[32] = v810;
                *(__m256i *)v806 = v809;
                v797 = v812[0];
                v75 = &v801;
                v79 = (__int64)v806;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v801,
                  v806,
                  &v797);
              }
              v800.i128[1] = v789;
              v800.i64[1] = v788;
              v80 = v780 + 32 * v781;
              v800.i8[0] = 5;
              v148 = v80 == 32;
              v81 = v80 - 32;
              if ( v781 != 0
                && !v148
                && (v79 = 4,
                    v75 = (__m256i *)"roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                    (v82 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                             4,
                             v81)) != 0)
                && *(_BYTE *)v82 == 3
                && *(_QWORD *)(v82 + 24) == 4
                && **(_DWORD **)(v82 + 16) == 1919251317
                && (v79 = 7,
                    v75 = (__m256i *)"contentpattern.output_modehead_limit",
                    (v199 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                              "contentpattern.output_modehead_limit",
                              7,
                              v81)) != 0)
                && *(_BYTE *)v199 == 4
                && (v200 = *(_QWORD *)(v199 + 24)) != 0 )
              {
                v201 = *(_QWORD *)(v199 + 16);
                v202 = 32 * v200;
                while ( 1 )
                {
                  v79 = 4;
                  v75 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                  v203 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           &anon_10420c9971c21f44d230d15b39fb3fec_75,
                           4,
                           v201);
                  if ( v203 )
                  {
                    if ( *(_BYTE *)v203 == 3
                      && *(_QWORD *)(v203 + 24) == 11
                      && !(**(_QWORD **)(v203 + 16) ^ 0x7365725F6C6F6F74LL
                         | *(_QWORD *)(*(_QWORD *)(v203 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
                    {
                      break;
                    }
                  }
                  v201 += 32;
                  v202 -= 32;
                  if ( !v202 )
                    goto LABEL_90;
                }
                if ( v781 )
                {
                  v204 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                           "contentpattern.output_modehead_limit",
                           7,
                           v780 + 32 * v781 - 32);
                  v205 = v204;
                  if ( v204 )
                  {
                    if ( *(_BYTE *)v204 == 4 )
                    {
                      *(__m256i *)v806 = v800;
                      v206 = *(_QWORD *)(v204 + 24);
                      if ( v206 == *(_QWORD *)(v204 + 8) )
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v204 + 8);
                      v207 = *(_QWORD *)(v205 + 16);
                      v208 = 32 * v206;
                      *(_OWORD *)(v207 + v208 + 16) = *(_OWORD *)&v806[16];
                      *(_OWORD *)(v207 + v208) = *(_OWORD *)v806;
                      *(_QWORD *)(v205 + 24) = v206 + 1;
                      goto LABEL_107;
                    }
                  }
                }
              }
              else
              {
LABEL_90:
                v787.i64[0] = 0;
                v787.i64[2] = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v79);
                v83 = 4;
                v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v84 )
                  goto LABEL_651;
                *v84 = 1701605234;
                v788 = 4;
                *(_QWORD *)&v789 = v84;
                *((_QWORD *)&v789 + 1) = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v85 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v85 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                *v85 = 1919251317;
                v812[0].i8[0] = 3;
                v812[0].i64[1] = 4;
                v812[0].i64[2] = (__int64)v85;
                v812[0].i64[3] = 4;
                v86 = &v809;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v787, &v788);
                if ( v809.i64[0] == 0x8000000000000000LL )
                {
                  v87 = v809.i64[1];
                  v88 = 32 * v809.i64[3];
                  v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                  v89 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                  v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                  v801.i64[0] = v89;
                  *(_OWORD *)(v809.i64[1] + v88 + 16) = v812[0].i128[1];
                  v90 = (_BYTE *)v812[0].i64[1];
                  *(_OWORD *)(v87 + v88) = v812[0].i128[0];
                  if ( v801.i8[0] != 6 )
                  {
                    v86 = &v801;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                  }
                }
                else
                {
                  *(_QWORD *)&v806[48] = v811;
                  *(_OWORD *)&v806[32] = v810;
                  *(__m256i *)v806 = v809;
                  v797 = v812[0];
                  v86 = &v801;
                  v90 = v806;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v801,
                    v806,
                    &v797);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v90);
                v83 = 7;
                v91 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                if ( !v91 )
LABEL_651:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v83);
                *(_DWORD *)((char *)v91 + 3) = 1953391988;
                *v91 = 1953394531;
                v788 = 7;
                *(_QWORD *)&v789 = v91;
                *((_QWORD *)&v789 + 1) = 7;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
                v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                if ( !v92 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                v93 = (_OWORD *)v92;
                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                  v806,
                  &v800);
                if ( v806[0] == 6 )
                {
                  v809.i64[0] = *(_QWORD *)&v806[8];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v809,
                    &off_10196D480,
                    &off_10196CF80);
                }
                v93[1] = *(_OWORD *)&v806[16];
                *v93 = *(_OWORD *)v806;
                v812[0].i64[1] = 1;
                v812[0].i64[2] = (__int64)v93;
                v812[0].i64[3] = 1;
                v812[0].i8[0] = 4;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v787, &v788);
                if ( v809.i64[0] == 0x8000000000000000LL )
                {
                  v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                  v94 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                  v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                  v801.i64[0] = v94;
                  *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                  if ( v801.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                }
                else
                {
                  *(_QWORD *)&v806[48] = v811;
                  *(_OWORD *)&v806[32] = v810;
                  *(__m256i *)v806 = v809;
                  v797 = v812[0];
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v801,
                    v806,
                    &v797);
                }
                v805.i128[1] = *(__int128 *)((char *)v787.i128 + 8);
                v805.i64[1] = v787.i64[0];
                v805.i8[0] = 5;
                v95 = v781;
                if ( v781 == v779 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v779);
                *(__m256i *)(v780 + 32 * v95) = v805;
                v781 = v95 + 1;
              }
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v800);
LABEL_107:
              v20 = &v792;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v792);
              v19 = __n;
              if ( __n )
              {
                v20 = (__m256i *)__src;
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1);
              }
              goto LABEL_15;
            }
          }
        }
        else
        {
          v41 = "toolu_unknowncontent_filter";
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E0C, 7);
        v52 = 1;
        __n = v40;
        v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v40, 1);
        if ( v42 )
        {
          v43 = 0;
          goto LABEL_65;
        }
LABEL_650:
        v339 = __n;
LABEL_542:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v52, v339);
      default:
        goto LABEL_15;
    }
  }
  v16 = 0;
LABEL_513:
  v328 = *(_QWORD *)&v793[8];
  for ( ii = v16 + 1; ii != 1; --ii )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v328);
    v328 += 32;
  }
  if ( *(_QWORD *)v793 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v793[8], 32LL * *(_QWORD *)v793, 8);
LABEL_518:
  v330 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v796);
  if ( v330 && *(_BYTE *)v330 == 3 )
  {
    v784 = *(_QWORD *)(v330 + 24);
    a3 = *(const void **)(v330 + 16);
  }
  if ( (v784 & 0x8000000000000000LL) != 0LL )
  {
    v331 = 0;
    goto LABEL_523;
  }
  v332 = a3;
  if ( v784 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5);
    v331 = 1;
    v333 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v784, 1);
    if ( !v333 )
LABEL_523:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v331, v784);
    v334 = v333;
  }
  else
  {
    v334 = 1;
  }
  memcpy((void *)v334, v332, v784);
  LOBYTE(v772) = 1;
  v335 = &unk_101674E9D;
  v336 = 17;
  v785 = (void *)v334;
  v337 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674E9D,
           17,
           v796);
  if ( v337
    || (v335 = &unk_101674EAE,
        v336 = 10,
        (v337 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_101674EAE,
                  10,
                  v796)) != 0) )
  {
    LOBYTE(v338) = *(_BYTE *)v337;
    switch ( *(_BYTE *)v337 )
    {
      case 0:
        goto LABEL_544;
      case 1:
      case 2:
        v338 = *(_QWORD *)v337;
        *(_QWORD *)&v806[8] = *(_QWORD *)(v337 + 8);
        *(_QWORD *)v806 = v338;
        *(_OWORD *)&v806[16] = *(_OWORD *)(v337 + 16);
        *(__int64 *)((char *)&v809.i64[2] + 7) = *(_QWORD *)&v806[24];
        v809.i128[0] = *(_OWORD *)&v806[1];
        v809.i64[2] = *(_QWORD *)&v806[17];
        v806[0] = 2;
        *(_QWORD *)&v806[8] = 0;
        *(_QWORD *)&v806[16] = 0x4000;
        if ( (_BYTE)v338 == 6 )
          goto LABEL_539;
        goto LABEL_545;
      case 3:
        v336 = v337 + 8;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v806[8], v337 + 8);
        goto LABEL_544;
      case 4:
        v336 = v337 + 8;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &v806[8],
          v337 + 8);
        goto LABEL_544;
      case 5:
        if ( *(_QWORD *)(v337 + 24) )
        {
          v336 = *(_QWORD *)(v337 + 8);
          if ( !v336 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v806[8],
            v336,
            *(_QWORD *)(v337 + 16));
        }
        else
        {
          *(_QWORD *)&v806[8] = 0;
          *(_QWORD *)&v806[24] = 0;
        }
LABEL_544:
        *(__int64 *)((char *)&v809.i64[2] + 7) = *(_QWORD *)&v806[24];
        *(__int128 *)((char *)v809.i128 + 8) = *(_OWORD *)&v806[9];
        v809.i64[0] = *(_QWORD *)&v806[1];
        v806[0] = 2;
        *(_QWORD *)&v806[8] = 0;
        *(_QWORD *)&v806[16] = 0x4000;
LABEL_545:
        v787.i8[0] = v338;
        *(__int128 *)((char *)v787.i128 + 1) = v809.i128[0];
        *(__int64 *)((char *)&v787.i64[2] + 1) = v809.i64[2];
        v787.i64[3] = *(__int64 *)((char *)&v809.i64[2] + 7);
        v335 = v806;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
        break;
    }
  }
  else
  {
    v806[0] = 2;
    *(_QWORD *)&v806[8] = 0;
    *(_QWORD *)&v806[16] = 0x4000;
LABEL_539:
    v787 = *(__m256i *)v806;
  }
  v800.i64[0] = 0;
  v800.i64[2] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v335, v336);
  v340 = 5;
  v341 = 1;
  v342 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v342 )
    goto LABEL_642;
  *(_BYTE *)(v342 + 4) = 108;
  *(_DWORD *)v342 = 1701080941;
  v805.i64[0] = 5;
  v805.i64[1] = v342;
  v805.i64[2] = 5;
  v343 = v784;
  if ( v784 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v344 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v343, 1);
    if ( !v344 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v784);
    v341 = v344;
    v343 = v784;
  }
  memcpy((void *)v341, (const void *)v334, v343);
  v812[0].i8[0] = 3;
  v812[0].i64[1] = v343;
  v812[0].i64[2] = v341;
  v812[0].i64[3] = v343;
  v345 = &v809;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v800, &v805);
  if ( v809.i64[0] == 0x8000000000000000LL )
  {
    v346 = v809.i64[1];
    v347 = 32 * v809.i64[3];
    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
    v348 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
    v801.i64[0] = v348;
    *(_OWORD *)(v809.i64[1] + v347 + 16) = v812[0].i128[1];
    v349 = (_BYTE *)v812[0].i64[1];
    *(_OWORD *)(v346 + v347) = v812[0].i128[0];
    if ( v801.i8[0] != 6 )
    {
      v345 = &v801;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
    }
  }
  else
  {
    *(_QWORD *)&v806[48] = v811;
    *(_OWORD *)&v806[32] = v810;
    *(__m256i *)v806 = v809;
    v797 = v812[0];
    v345 = &v801;
    v349 = v806;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v801,
      v806,
      &v797);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v345, v349);
  v340 = 8;
  v350 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v350 )
    goto LABEL_642;
  *v350 = 0x736567617373656DLL;
  v805.i64[0] = 8;
  v805.i64[1] = (__int64)v350;
  v805.i64[2] = 8;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v806, &v779);
  if ( v806[0] == 6 )
  {
    v809.i64[0] = *(_QWORD *)&v806[8];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v809,
      &off_10196D480,
      &off_10196D010);
  }
  v812[0] = *(__m256i *)v806;
  v351 = &v809;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v800, &v805);
  if ( v809.i64[0] == 0x8000000000000000LL )
  {
    v352 = v809.i64[1];
    v353 = 32 * v809.i64[3];
    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
    v354 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
    v801.i64[0] = v354;
    *(_OWORD *)(v809.i64[1] + v353 + 16) = v812[0].i128[1];
    v355 = (_BYTE *)v812[0].i64[1];
    *(_OWORD *)(v352 + v353) = v812[0].i128[0];
    if ( v801.i8[0] != 6 )
    {
      v351 = &v801;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
    }
  }
  else
  {
    *(_QWORD *)&v806[48] = v811;
    *(_OWORD *)&v806[32] = v810;
    *(__m256i *)v806 = v809;
    v797 = v812[0];
    v351 = &v801;
    v355 = v806;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v801,
      v806,
      &v797);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v351, v355);
  v340 = 10;
  v356 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v356 )
LABEL_642:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v340);
  qmemcpy(v356, "max_tokens", 10);
  v805.i64[0] = 10;
  v805.i64[1] = (__int64)v356;
  v805.i64[2] = 10;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    v806,
    &v787);
  if ( v806[0] == 6 )
  {
    v809.i64[0] = *(_QWORD *)&v806[8];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v809,
      &off_10196D480,
      &off_10196D010);
  }
  v812[0] = *(__m256i *)v806;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v800, &v805);
  if ( v809.i64[0] == 0x8000000000000000LL )
  {
    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
    v357 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
    v801.i64[0] = v357;
    *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
    if ( v801.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
  }
  else
  {
    *(_QWORD *)&v806[48] = v811;
    *(_OWORD *)&v806[32] = v810;
    *(__m256i *)v806 = v809;
    v797 = v812[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v801,
      v806,
      &v797);
  }
  v789 = v800.i128[0];
  v790 = v800.i64[2];
  LOBYTE(v788) = 5;
  LOBYTE(v772) = v786 == 0x8000000000000000LL;
  if ( v786 != 0x8000000000000000LL )
  {
    *(_QWORD *)&v806[8] = v786;
    *(_QWORD *)&v806[16] = v771;
    *(_QWORD *)&v806[24] = v7;
    v806[0] = 3;
    v358 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                       "systeminstructions",
                       6u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v358);
    v358[1] = *(_OWORD *)&v806[16];
    *v358 = *(_OWORD *)v806;
  }
  v359 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &unk_101674E8D,
           11,
           v796);
  if ( v359 )
  {
    switch ( *(_BYTE *)v359 )
    {
      case 0:
        v806[0] = 0;
        goto LABEL_581;
      case 1:
      case 2:
        *(_OWORD *)&v806[16] = *(_OWORD *)(v359 + 16);
        v360 = *(_QWORD *)v359;
        *(_QWORD *)&v806[8] = *(_QWORD *)(v359 + 8);
        *(_QWORD *)v806 = v360;
        goto LABEL_581;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v806[8], v359 + 8);
        v806[0] = 3;
        goto LABEL_581;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &v806[8],
          v359 + 8);
        v806[0] = 4;
        goto LABEL_581;
      case 5:
        if ( *(_QWORD *)(v359 + 24) )
        {
          v361 = *(_QWORD *)(v359 + 8);
          if ( !v361 )
            goto LABEL_627;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v806[8],
            v361,
            *(_QWORD *)(v359 + 16));
        }
        else
        {
          *(_QWORD *)&v806[8] = 0;
          *(_QWORD *)&v806[24] = 0;
        }
        v806[0] = 5;
LABEL_581:
        v362 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                           &unk_101674E8D,
                           0xBu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v362);
        v362[1] = *(_OWORD *)&v806[16];
        *v362 = *(_OWORD *)v806;
        break;
    }
  }
  v363 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E98, 5, v796);
  if ( !v363 )
    goto LABEL_594;
  switch ( *(_BYTE *)v363 )
  {
    case 0:
      v806[0] = 0;
      goto LABEL_593;
    case 1:
    case 2:
      *(_OWORD *)&v806[16] = *(_OWORD *)(v363 + 16);
      v364 = *(_QWORD *)v363;
      *(_QWORD *)&v806[8] = *(_QWORD *)(v363 + 8);
      *(_QWORD *)v806 = v364;
      goto LABEL_593;
    case 3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v806[8], v363 + 8);
      v806[0] = 3;
      goto LABEL_593;
    case 4:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v806[8], v363 + 8);
      v806[0] = 4;
      goto LABEL_593;
    case 5:
      if ( *(_QWORD *)(v363 + 24) )
      {
        v365 = *(_QWORD *)(v363 + 8);
        if ( v365 )
        {
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v806[8],
            v365,
            *(_QWORD *)(v363 + 16));
          goto LABEL_592;
        }
LABEL_627:
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
      }
      *(_QWORD *)&v806[8] = 0;
      *(_QWORD *)&v806[24] = 0;
LABEL_592:
      v806[0] = 5;
LABEL_593:
      v366 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                         &unk_101674E98,
                         5u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v366);
      v366[1] = *(_OWORD *)&v806[16];
      *v366 = *(_OWORD *)v806;
LABEL_594:
      v367 = v775[0];
      if ( !v775[0] )
      {
        v368 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "reasoningarguments{}",
                 9,
                 v796);
        if ( !v368
          || (v369 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "effortoutput_config",
                       6,
                       v368)) == 0
          || *(_BYTE *)v369 != 3 )
        {
          v370 = 16;
          v369 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                   16,
                   v796);
          if ( !v369 || *(_BYTE *)v369 != 3 )
            goto LABEL_764;
        }
        v367 = *(void **)(v369 + 16);
        v782 = *(void **)(v369 + 24);
      }
      v371 = v782;
      v372 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v367, v782);
      v374 = v373;
      if ( v373 < 0 )
      {
        v375 = 0;
        goto LABEL_603;
      }
      if ( v373 )
      {
        v376 = (const void *)v372;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v367, v371);
        v375 = 1;
        v377 = (unsigned int *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v374, 1);
        if ( !v377 )
LABEL_603:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v375, v374);
        v378 = v377;
        memcpy(v377, v376, v374);
        if ( v374 < 8 )
        {
          v379 = 0;
          goto LABEL_680;
        }
        if ( v374 >= 0x20 )
        {
          v379 = v374 & 0x7FFFFFFFFFFFFFE0LL;
          v380 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
          v381 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
          v382 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
          do
          {
            v383 = _mm_loadu_si128((const __m128i *)&v378[v380 / 4]);
            v384 = _mm_loadu_si128((const __m128i *)&v378[v380 / 4 + 4]);
            v385 = _mm_add_epi8(v383, si128);
            v386 = _mm_add_epi8(v384, si128);
            *(__m128i *)&v378[v380 / 4] = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v385, v381), v385), v382),
                                            v383);
            *(__m128i *)&v378[v380 / 4 + 4] = _mm_or_si128(
                                                _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v386, v381), v386), v382),
                                                v384);
            v380 += 32LL;
          }
          while ( v379 != v380 );
          if ( v374 == v379 )
          {
LABEL_682:
            switch ( v374 )
            {
              case 3uLL:
                v393 = 3;
                if ( *(_WORD *)v378 ^ 0x6F6C | *((unsigned __int8 *)v378 + 2) ^ 0x77 )
                {
                  if ( *(_WORD *)v378 ^ 0x616D | *((unsigned __int8 *)v378 + 2) ^ 0x78 )
                    goto LABEL_705;
                  v394 = "maxultrasysteminstructions";
                }
                else
                {
                  v394 = "lowmediumxhighmaxultrasysteminstructions";
                }
                goto LABEL_707;
              case 4uLL:
                switch ( *v378 )
                {
                  case 0x656E6F6Eu:
                    v394 = "nonehosttoolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                    break;
                  case 0x6F747561u:
                    v394 = "autohighUSERkeysNULLUser.gitAuth";
                    break;
                  case 0x68676968u:
                    v394 = "highUSERkeysNULLUser.gitAuth";
                    break;
                  default:
                    goto LABEL_705;
                }
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v378, v374, 1);
                v393 = 4;
                if ( *(_DWORD *)v394 != 1701736302 )
                  goto LABEL_708;
                v411 = v785;
                v370 = v784;
                if ( (unsigned __int8)codexmate_lib::core::relay::translator::uses_anthropic_adaptive_thinking::h2b5189cc4d9f10d2(
                                        v785,
                                        v784)
                  || (v411 = v785,
                      v370 = v784,
                      (unsigned __int8)codexmate_lib::core::relay::translator::supports_anthropic_budget_thinking::hacd8f49936a3d342(
                                         v785,
                                         v784)) )
                {
                  v800.i64[0] = 0;
                  v800.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v411, v370);
                  v412 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v412 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                  *v412 = 1701869940;
                  v805.i64[0] = 4;
                  v805.i64[1] = (__int64)v412;
                  v805.i64[2] = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v413 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                  if ( !v413 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                  *v413 = 0x64656C6261736964LL;
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = 8;
                  v812[0].i64[2] = (__int64)v413;
                  v812[0].i64[3] = 8;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v414 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v414;
                    *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                    if ( v801.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  *(_OWORD *)&v806[8] = v800.i128[0];
                  *(_QWORD *)&v806[24] = v800.i64[2];
                  v806[0] = 5;
                  v370 = 8;
                  v615 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                     &unk_101674AA0,
                                     8u);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v615);
                  v615[1] = *(_OWORD *)&v806[16];
                  *v615 = *(_OWORD *)v806;
                  codexmate_lib::core::relay::translator::remove_anthropic_output_config_effort::hd25abaccb71c0d64(&v788);
                }
                goto LABEL_764;
              case 5uLL:
                v393 = 5;
                if ( *v378 ^ 0x67696878 | *((unsigned __int8 *)v378 + 4) ^ 0x68 )
                {
                  v395 = _byteswap_ulong(*v378);
                  if ( v395 == 1970041970 )
                    v396 = *((unsigned __int8 *)v378 + 4) - 97;
                  else
                    v396 = 2 * (v395 >= 0x756C7472) - 1;
                  if ( v396 )
                  {
LABEL_705:
                    v370 = v374;
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v378, v374, 1);
                    goto LABEL_764;
                  }
                  v394 = "ultrasysteminstructions";
                }
                else
                {
                  v394 = "xhighmaxultrasysteminstructions";
                }
LABEL_707:
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v378, v374, 1);
LABEL_708:
                v397 = v785;
                v398 = v784;
                if ( (unsigned __int8)codexmate_lib::core::relay::translator::uses_anthropic_adaptive_thinking::h2b5189cc4d9f10d2(
                                        v785,
                                        v784) )
                {
                  v800.i64[0] = 0;
                  v800.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v397, v398);
                  v399 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v399 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                  *v399 = 1701869940;
                  v805.i64[0] = 4;
                  v805.i64[1] = (__int64)v399;
                  v805.i64[2] = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v400 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                  if ( !v400 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                  *v400 = 0x6576697470616461LL;
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = 8;
                  v812[0].i64[2] = (__int64)v400;
                  v812[0].i64[3] = 8;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v401 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v401;
                    *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                    if ( v801.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  *(_OWORD *)&v806[8] = v800.i128[0];
                  *(_QWORD *)&v806[24] = v800.i64[2];
                  v806[0] = 5;
                  v403 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                     &unk_101674AA0,
                                     8u);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v403);
                  v403[1] = *(_OWORD *)&v806[16];
                  *v403 = *(_OWORD *)v806;
                  v800.i64[0] = 0;
                  v800.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, 8);
                  v404 = 6;
                  v405 = 6;
                  v406 = 1;
                  v407 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                  if ( !v407 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
                  *(_WORD *)(v407 + 4) = 29810;
                  *(_DWORD *)v407 = 1868981861;
                  v805.i64[0] = 6;
                  v805.i64[1] = v407;
                  v805.i64[2] = 6;
                  v408 = "mediumxhighmaxultrasysteminstructions";
                  switch ( v393 )
                  {
                    case 3LL:
                      if ( !(*(_WORD *)v394 ^ 0x6F6C | (unsigned __int8)v394[2] ^ 0x77) )
                      {
                        v408 = "lowmediumxhighmaxultrasysteminstructions";
                        goto LABEL_756;
                      }
                      if ( !(*(_WORD *)v394 ^ 0x616D | (unsigned __int8)v394[2] ^ 0x78) )
                        goto LABEL_752;
                      break;
                    case 4LL:
                      if ( *(_DWORD *)v394 == 1869903201 )
                        goto LABEL_754;
                      v409 = *(_DWORD *)v394 == 1751607656;
                      v404 = 2LL * (*(_DWORD *)v394 != 1751607656) + 4;
                      v410 = "highUSERkeysNULLUser.gitAuth";
                      goto LABEL_731;
                    case 5LL:
                      if ( !(*(_DWORD *)v394 ^ 0x67696878 | (unsigned __int8)v394[4] ^ 0x68)
                        || !(*(_DWORD *)v394 ^ 0x72746C75 | (unsigned __int8)v394[4] ^ 0x61) )
                      {
LABEL_752:
                        v405 = (__int64)v785;
                        v406 = v784;
                        if ( (unsigned __int8)codexmate_lib::core::relay::translator::anthropic_adaptive_supports_max::h6aa9d469c96f5816(
                                                v785,
                                                v784) )
                        {
                          v408 = "maxultrasysteminstructions";
LABEL_756:
                          v404 = 3;
                        }
                        else
                        {
LABEL_754:
                          v408 = "highUSERkeysNULLUser.gitAuth";
                          v404 = 4;
                        }
                      }
                      break;
                    case 7LL:
                      v409 = (*(_DWORD *)v394 ^ 0x696E696D | *(_DWORD *)(v394 + 3) ^ 0x6C616D69) == 0;
                      v404 = 3LL * ((*(_DWORD *)v394 ^ 0x696E696D | *(_DWORD *)(v394 + 3) ^ 0x6C616D69) != 0) + 3;
                      v410 = "lowmediumxhighmaxultrasysteminstructions";
LABEL_731:
                      v408 = "mediumxhighmaxultrasysteminstructions";
                      if ( v409 )
                        v408 = v410;
                      break;
                    default:
                      break;
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v405, v406);
                  v418 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v404, 1);
                  if ( !v418 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v404);
                  v419 = (__int64)v418;
                  memcpy(v418, v408, v404);
                  v812[0].i8[0] = 3;
                  v812[0].i64[1] = v404;
                  v812[0].i64[2] = v419;
                  v812[0].i64[3] = v404;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v809,
                    &v800,
                    &v805);
                  if ( v809.i64[0] == 0x8000000000000000LL )
                  {
                    v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                    v420 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                    v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                    v801.i64[0] = v420;
                    *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                    if ( v801.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                  }
                  else
                  {
                    *(_QWORD *)&v806[48] = v811;
                    *(_OWORD *)&v806[32] = v810;
                    *(__m256i *)v806 = v809;
                    v797 = v812[0];
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v801,
                      v806,
                      &v797);
                  }
                  *(_OWORD *)&v806[8] = v800.i128[0];
                  *(_QWORD *)&v806[24] = v800.i64[2];
                  v806[0] = 5;
                  v370 = 13;
                  v421 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                     "output_config",
                                     0xDu);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v421);
LABEL_763:
                  v421[1] = *(_OWORD *)&v806[16];
                  *v421 = *(_OWORD *)v806;
                }
                else
                {
                  v402 = v785;
                  v370 = v784;
                  if ( (unsigned __int8)codexmate_lib::core::relay::translator::supports_anthropic_budget_thinking::hacd8f49936a3d342(
                                          v785,
                                          v784) )
                  {
                    switch ( v393 )
                    {
                      case 3LL:
                        if ( !(*(_WORD *)v394 ^ 0x6F6C | (unsigned __int8)v394[2] ^ 0x77) )
                        {
                          v415 = 1024;
                          goto LABEL_1019;
                        }
                        if ( !(*(_WORD *)v394 ^ 0x616D | (unsigned __int8)v394[2] ^ 0x78) )
                          goto LABEL_1018;
                        break;
                      case 4LL:
                        if ( *(_DWORD *)v394 == 1751607656 )
                        {
                          v415 = 24576;
                          goto LABEL_1019;
                        }
                        break;
                      case 5LL:
                        if ( !(*(_DWORD *)v394 ^ 0x67696878 | (unsigned __int8)v394[4] ^ 0x68) )
                        {
                          v415 = 0x8000;
                          goto LABEL_1019;
                        }
                        v416 = _byteswap_ulong(*(_DWORD *)v394);
                        if ( v416 == 1970041970 )
                          v417 = (unsigned __int8)v394[4] - 97;
                        else
                          v417 = 2 * (v416 >= 0x756C7472) - 1;
                        if ( !v417 )
                        {
LABEL_1018:
                          v415 = 128000;
                          goto LABEL_1019;
                        }
                        break;
                      case 6LL:
                        if ( !(*(_DWORD *)v394 ^ 0x6964656D | *((unsigned __int16 *)v394 + 2) ^ 0x6D75) )
                        {
                          v415 = 0x2000;
                          goto LABEL_1019;
                        }
                        break;
                      case 7LL:
                        if ( !(*(_DWORD *)v394 ^ 0x696E696D | *(_DWORD *)(v394 + 3) ^ 0x6C616D69) )
                        {
                          v415 = 512;
LABEL_1019:
                          v800.i64[0] = 0;
                          v800.i64[2] = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v402, v370);
                          v616 = 4;
                          v617 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v617 )
                            goto LABEL_1088;
                          *v617 = 1701869940;
                          v805.i64[0] = 4;
                          v805.i64[1] = (__int64)v617;
                          v805.i64[2] = 4;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                          v618 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                          if ( !v618 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
                          *(_DWORD *)((char *)v618 + 3) = 1684368482;
                          *v618 = 1650552421;
                          v812[0].i8[0] = 3;
                          v812[0].i64[1] = 7;
                          v812[0].i64[2] = (__int64)v618;
                          v812[0].i64[3] = 7;
                          v619 = &v809;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v809,
                            &v800,
                            &v805);
                          if ( v809.i64[0] == 0x8000000000000000LL )
                          {
                            v620 = v809.i64[1];
                            v621 = 32 * v809.i64[3];
                            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                            v622 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                            v801.i64[0] = v622;
                            *(_OWORD *)(v809.i64[1] + v621 + 16) = v812[0].i128[1];
                            v623 = (_BYTE *)v812[0].i64[1];
                            *(_OWORD *)(v620 + v621) = v812[0].i128[0];
                            if ( v801.i8[0] != 6 )
                            {
                              v619 = &v801;
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                            }
                          }
                          else
                          {
                            *(_QWORD *)&v806[48] = v811;
                            *(_OWORD *)&v806[32] = v810;
                            *(__m256i *)v806 = v809;
                            v797 = v812[0];
                            v619 = &v801;
                            v623 = v806;
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v801,
                              v806,
                              &v797);
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v619, v623);
                          v616 = 13;
                          v624 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                          if ( !v624 )
LABEL_1088:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v616);
                          qmemcpy(v624, "budget_tokens", 13);
                          v805.i64[0] = 13;
                          v805.i64[1] = (__int64)v624;
                          v805.i64[2] = 13;
                          v812[0].i8[0] = 2;
                          v812[0].i64[1] = 0;
                          v812[0].i64[2] = v415;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                            &v809,
                            &v800,
                            &v805);
                          if ( v809.i64[0] == 0x8000000000000000LL )
                          {
                            v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
                            v625 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
                            v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
                            v801.i64[0] = v625;
                            *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v812[0];
                            if ( v801.i8[0] != 6 )
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
                          }
                          else
                          {
                            *(_QWORD *)&v806[48] = v811;
                            *(_OWORD *)&v806[32] = v810;
                            *(__m256i *)v806 = v809;
                            v797 = v812[0];
                            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                              &v801,
                              v806,
                              &v797);
                          }
                          *(_OWORD *)&v806[8] = v800.i128[0];
                          *(_QWORD *)&v806[24] = v800.i64[2];
                          v806[0] = 5;
                          v626 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                             &unk_101674AA0,
                                             8u);
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v626);
                          v626[1] = *(_OWORD *)&v806[16];
                          *v626 = *(_OWORD *)v806;
                          v370 = 10;
                          v627 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                   &unk_101674EAE,
                                   10,
                                   &v788);
                          v628 = 0x4000;
                          if ( v627 && *(_BYTE *)v627 == 2 && !*(_QWORD *)(v627 + 8) )
                            v628 = *(_QWORD *)(v627 + 16);
                          if ( v628 <= v415 )
                          {
                            v806[0] = 2;
                            *(_QWORD *)&v806[8] = 0;
                            *(_QWORD *)&v806[16] = v415 + 4096;
                            v370 = 10;
                            v421 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                               &unk_101674EAE,
                                               0xAu);
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v421);
                            goto LABEL_763;
                          }
                        }
                        break;
                    }
                  }
                }
                break;
              case 6uLL:
                if ( *v378 ^ 0x6964656D | *((unsigned __int16 *)v378 + 2) ^ 0x6D75 )
                  goto LABEL_705;
                v394 = "mediumxhighmaxultrasysteminstructions";
                v393 = 6;
                goto LABEL_707;
              case 7uLL:
                if ( *v378 ^ 0x696E696D | *(unsigned int *)((char *)v378 + 3) ^ 0x6C616D69 )
                  goto LABEL_705;
                v394 = "minimallowmediumxhighmaxultrasysteminstructions";
                v393 = 7;
                goto LABEL_707;
              case 0xAuLL:
                v394 = "xhighmaxultrasysteminstructions";
                v393 = 5;
                if ( !(*(_QWORD *)v378 ^ 0x69685F6172747865LL | *((unsigned __int16 *)v378 + 4) ^ 0x6867LL)
                  || !(*(_QWORD *)v378 ^ 0x69682D6172747865LL | *((unsigned __int16 *)v378 + 4) ^ 0x6867LL) )
                {
                  goto LABEL_707;
                }
                goto LABEL_705;
              default:
                goto LABEL_705;
            }
            goto LABEL_764;
          }
          if ( (v374 & 0x18) == 0 )
          {
            do
            {
LABEL_680:
              *((_BYTE *)v378 + v379) |= 32 * ((unsigned __int8)(*((_BYTE *)v378 + v379) - 65) < 0x1Au);
              ++v379;
LABEL_681:
              ;
            }
            while ( v374 != v379 );
            goto LABEL_682;
          }
        }
        else
        {
          v379 = 0;
        }
        v387 = v379;
        v379 = v374 & 0x7FFFFFFFFFFFFFF8LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
        v388 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
        v389 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
        do
        {
          v390 = _mm_loadl_epi64((const __m128i *)((char *)v378 + v387));
          v391 = _mm_add_epi8(v390, si128);
          *(_QWORD *)((char *)v378 + v387) = _mm_or_si128(
                                               _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v391, v388), v391), v389),
                                               v390).u64[0];
          v387 += 8;
        }
        while ( v379 != v387 );
        goto LABEL_681;
      }
      v370 = v372;
LABEL_764:
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
      v425 = v422;
      if ( *((_BYTE *)v422 + 16) == 1 )
      {
        v426 = *v422;
        v427 = v425[1];
      }
      else
      {
        v426 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                 &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                 v370,
                 v423,
                 v424);
        *v425 = v426;
        v425[1] = v427;
        *((_BYTE *)v425 + 16) = 1;
      }
      *v425 = v426 + 1;
      memset(&v797.u32[2], 0, 24);
      v797.i64[0] = (__int64)&xmmword_1015FBEC0;
      v798 = v426;
      v799 = v427;
      v428 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674ECD,
               5,
               v796);
      if ( !v428 || *(_BYTE *)v428 != 4 )
      {
        v461 = 0;
        goto LABEL_798;
      }
      v431 = *(_QWORD *)(v428 + 16);
      v432 = v425;
      v433 = *(_QWORD *)(v428 + 24);
      *(_QWORD *)&v769 = 0;
      *((_QWORD *)&v769 + 1) = 8;
      v770 = 0;
      if ( *((_BYTE *)v432 + 16) == 1 )
      {
        v434 = *v432;
        v435 = v432[1];
      }
      else
      {
        v434 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&unk_101674ECD, v432, v429, v430);
        *v432 = v434;
        v432[1] = v435;
        *((_BYTE *)v432 + 16) = 1;
      }
      v436 = nullptr;
      memset(&v801.u32[2], 0, 24);
      v801.i64[0] = (__int64)&xmmword_1015FBEC0;
      v802 = v434;
      v803 = v435;
      v782 = v432;
      *v432 = v434 + 2;
      memset(&v809.u32[2], 0, 24);
      v809.i64[0] = (__int64)&xmmword_1015FBEC0;
      *(_QWORD *)&v810 = v434 + 1;
      *((_QWORD *)&v810 + 1) = v435;
      if ( v433 )
      {
        v437 = v431 + 32 * v433;
        v438 = v431;
        do
        {
          v439 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &anon_10420c9971c21f44d230d15b39fb3fec_75,
                   4,
                   v438);
          if ( v439 )
          {
            if ( *(_BYTE *)v439 == 3
              && *(_QWORD *)(v439 + 24) == 9
              && !(**(_QWORD **)(v439 + 16) ^ 0x63617073656D616ELL
                 | *(unsigned __int8 *)(*(_QWORD *)(v439 + 16) + 8LL) ^ 0x65LL) )
            {
              v440 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       &unk_101674ECD,
                       5,
                       v438);
              if ( v440 )
              {
                if ( *(_BYTE *)v440 == 4 )
                {
                  v441 = *(_QWORD *)(v440 + 24);
                  if ( v441 )
                  {
                    v442 = *(char **)(v440 + 16);
                    v775[0] = &v442[32 * v441];
                    do
                    {
                      v452 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               "name",
                               4,
                               v442);
                      if ( v452 && *(_BYTE *)v452 == 3 )
                      {
                        v453 = *(_QWORD *)(v452 + 24);
                        if ( v453 < 0 )
                        {
                          v559 = 0;
                          goto LABEL_954;
                        }
                        v454 = *(const void **)(v452 + 16);
                        if ( v453 )
                        {
                          v783 = *(_QWORD *)(v452 + 16);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v454);
                          v455 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v453, 1);
                          if ( !v455 )
                          {
                            v783 = v453;
                            v559 = 1;
LABEL_954:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v559, v783);
                          }
                          v454 = (const void *)v783;
                        }
                        else
                        {
                          v455 = 1;
                        }
                        v783 = v455;
                        memcpy((void *)v455, v454, v453);
                        v812[0].i64[0] = v453;
                        v812[0].i64[1] = v783;
                        v812[0].i64[2] = v453;
                        hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h48bd67d3bca7c611(
                          v806,
                          &v809,
                          v812);
                        v451 = *(const __m128i **)&v806[8];
                        v456 = *(_QWORD *)v806;
                        if ( *(_QWORD *)v806 != 0x8000000000000000LL )
                        {
                          v457 = *(const __m128i **)&v806[24];
                          v458 = **(const __m128i ***)&v806[24];
                          v459 = *(_QWORD *)(*(_QWORD *)&v806[24] + 8LL);
                          v443 = *(_QWORD *)&v806[32] & v459;
                          _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(**(_QWORD **)&v806[24]
                                                                                                 + (*(_QWORD *)&v806[32]
                                                                                                  & v459))));
                          if ( !(_DWORD)_R10 )
                          {
                            v445 = 16;
                            do
                            {
                              v443 = v459 & (v445 + v443);
                              _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v458 + v443)));
                              v445 += 16;
                            }
                            while ( !(_DWORD)_R10 );
                          }
                          __asm { tzcnt   r10d, r10d }
                          _R10 = v459 & (v443 + _R10);
                          v447 = v458->i8[_R10];
                          if ( v447 >= 0 )
                          {
                            _R9D = _mm_movemask_epi8(_mm_load_si128(v458));
                            __asm { tzcnt   r10d, r9d }
                            v447 = v458->i8[_R10];
                          }
                          v448 = *(_QWORD *)&v806[16];
                          v449 = *(_QWORD *)&v806[32] >> 57;
                          v458->i8[_R10] = *(_QWORD *)&v806[32] >> 57;
                          v458[1].i8[v459 & (_R10 - 16)] = v449;
                          v450 = &v458[-2 * _R10];
                          v450[-2].i64[0] = v456;
                          v450[-2].i64[1] = (__int64)v451;
                          v450[-1].i64[0] = v448;
                          v450[-1].i64[1] = 0;
                          v457[1] = _mm_sub_epi64(
                                      _mm_loadu_si128(v457 + 1),
                                      _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v447 & 1, 0));
                          v451 = v450;
                        }
                        ++v451[-1].i64[1];
                      }
                      v442 += 32;
                    }
                    while ( v442 != v775[0] );
                  }
                }
              }
            }
          }
          v438 += 32;
        }
        while ( v438 != v437 );
        si128 = (__m128i)0x69766572705F6863uLL;
        *(__m128i *)v775 = _mm_unpacklo_epi64((__m128i)0x726165735F626577uLL, (__m128i)0x69766572705F6863uLL);
        LODWORD(v783) = 0;
        while ( 1 )
        {
          v484 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &anon_10420c9971c21f44d230d15b39fb3fec_75,
                   4,
                   v431);
          if ( !v484 || *(_BYTE *)v484 != 3 )
            goto LABEL_839;
          v485 = *(_QWORD *)(v484 + 16);
          v486 = *(_QWORD *)(v484 + 24);
          if ( v486 == 18 )
            break;
          if ( v486 == 10 )
          {
            v487 = *(_QWORD *)v485 ^ 0x726165735F626577LL;
            v488 = *(unsigned __int16 *)(v485 + 8) ^ 0x6863LL;
LABEL_838:
            if ( !(v487 | v488) )
            {
LABEL_842:
              v436 = (const char *)v751;
              *(double *)si128.i64 = codexmate_lib::core::relay::translator::responses_tool_to_anthropic_tool::h3e01159f33a1ab88(
                                       (__int64)v751,
                                       v431);
              if ( LOBYTE(v751[0]) != 6 )
              {
                v494 = v770;
                if ( v770 == (_QWORD)v769 )
                {
                  v436 = (const char *)&v769;
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v769);
                }
                v495 = *((_QWORD *)&v769 + 1);
                v496 = 32 * v494;
                *(_OWORD *)(*((_QWORD *)&v769 + 1) + v496 + 16) = v752;
                v435 = v751[0];
                *(_QWORD *)(v495 + v496 + 8) = v751[1];
                *(_QWORD *)(v495 + v496) = v435;
                v770 = v494 + 1;
                LOBYTE(v495) = 1;
                LODWORD(v783) = v495;
              }
              goto LABEL_823;
            }
LABEL_839:
            v436 = (const char *)v747;
            *(double *)si128.i64 = codexmate_lib::core::relay::translator::responses_tool_to_anthropic_tool::h3e01159f33a1ab88(
                                     (__int64)v747,
                                     v431);
            if ( LOBYTE(v747[0]) != 6 )
            {
              v493 = v770;
              if ( v770 == (_QWORD)v769 )
              {
                v436 = (const char *)&v769;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v769);
              }
              v482 = *((_QWORD *)&v769 + 1);
              v483 = 32 * v493;
              *(_OWORD *)(*((_QWORD *)&v769 + 1) + v483 + 16) = v748;
              v435 = v747[0];
              *(_QWORD *)(v482 + v483 + 8) = v747[1];
              *(_QWORD *)(v482 + v483) = v435;
              v770 = v493 + 1;
            }
            goto LABEL_823;
          }
          if ( v486 > 0xA )
            goto LABEL_837;
          if ( v486 != 9 || *(_QWORD *)v485 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v485 + 8) ^ 0x65LL )
            goto LABEL_839;
          v490 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v431);
          v491 = 1;
          if ( v490 && *(_BYTE *)v490 == 3 )
          {
            v491 = *(_QWORD *)(v490 + 16);
            v492 = *(_QWORD *)(v490 + 24);
          }
          else
          {
            v492 = 0;
          }
          *(_QWORD *)&v776 = v491;
          *((_QWORD *)&v776 + 1) = v492;
          v436 = (const char *)&unk_101674ECD;
          v497 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             &unk_101674ECD,
                             5,
                             v431);
          if ( v497 && *(_BYTE *)v497 == 4 )
          {
            if ( *((_QWORD *)&v776 + 1) >= 2u )
            {
              __n = v776;
              if ( *(_WORD *)(v776 + *((_QWORD *)&v776 + 1) - 2) != 24415 )
                goto LABEL_853;
              __s1 = v497;
              v499 = *((_QWORD *)&v776 + 1);
              alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(
                v806,
                *((_QWORD *)&v776 + 1),
                0,
                1,
                1);
              __dst = *(void **)&v806[8];
              if ( v806[0] )
              {
                v783 = *(_QWORD *)&v806[16];
                v559 = (__int64)__dst;
                goto LABEL_954;
              }
              v436 = *(const char **)&v806[16];
              __src = *(void **)&v806[16];
              memcpy(*(void **)&v806[16], (const void *)__n, v499);
              *(_QWORD *)v793 = __dst;
              *(_QWORD *)&v793[8] = __src;
              *(_QWORD *)&v793[16] = v499;
              v497 = __s1;
            }
            else
            {
              if ( !*((_QWORD *)&v776 + 1) )
              {
                *(_QWORD *)v793 = 0;
                *(_OWORD *)&v793[8] = 1u;
                goto LABEL_856;
              }
LABEL_853:
              v812[0].i64[0] = (__int64)&v776;
              v812[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
              v436 = v806;
              v498 = v497;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v806, &unk_1017C5D0B, v812);
              v497 = v498;
              v435 = *(_QWORD *)&v806[8];
              *(_QWORD *)v793 = *(_QWORD *)v806;
              *(_OWORD *)&v793[8] = *(_OWORD *)&v806[8];
            }
LABEL_856:
            v500 = v497[3];
            if ( !v500 )
            {
LABEL_909:
              if ( *(_QWORD *)v793 )
              {
                v436 = *(const char **)&v793[8];
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                         *(_QWORD *)&v793[8],
                                         *(_QWORD *)v793,
                                         1);
              }
              goto LABEL_823;
            }
            v435 = v497[2];
            v501 = (void *)(v435 + 32 * v500);
            __src = v501;
            while ( 2 )
            {
              v436 = "name";
              __n = v435;
              v502 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "name",
                       4,
                       v435);
              if ( !v502 || *(_BYTE *)v502 != 3 )
                goto LABEL_858;
              v503 = *(void **)(v502 + 16);
              v504 = *(void **)(v502 + 24);
              v758 = v503;
              v759 = v504;
              if ( *(_QWORD *)&v793[16]
                && ((unsigned __int64)v504 < *(_QWORD *)&v793[16]
                 || (__dst = v504,
                     v436 = *(const char **)&v793[8],
                     __s1 = v503,
                     v505 = memcmp(*(const void **)&v793[8], v503, *(size_t *)&v793[16]),
                     v503 = __s1,
                     v504 = __dst,
                     v505)) )
              {
                *(_QWORD *)v806 = v793;
                *(_QWORD *)&v806[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                *(_QWORD *)&v806[16] = &v758;
                *(_QWORD *)&v806[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                v506 = v812;
                v507 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_280;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(
                  v812,
                  &anon_10420c9971c21f44d230d15b39fb3fec_280,
                  v806);
                v792.i128[0] = v812[0].i128[0];
                v508 = (void *)v812[0].i64[2];
              }
              else
              {
                if ( (__int64)v504 < 0 )
                {
                  v642 = 0;
                  goto LABEL_1074;
                }
                __s1 = v503;
                __dst = v504;
                if ( v504 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v436, v503);
                  v509 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__dst, 1);
                  if ( !v509 )
                  {
                    v765 = (__int64)__dst;
                    v642 = 1;
LABEL_1074:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v642, v765);
                  }
                  v510 = v509;
                }
                else
                {
                  v510 = 1;
                }
                v506 = (__m256i *)v510;
                v507 = (__int64)__s1;
                memcpy((void *)v510, __s1, (size_t)__dst);
                v508 = __dst;
                v792.i64[0] = (__int64)__dst;
                v765 = v510;
                v792.i64[1] = v510;
              }
              v792.i64[2] = (__int64)v508;
              __dst = v758;
              v511 = v759;
              if ( !v809.i64[3] )
                goto LABEL_881;
              __s1 = v759;
              v512 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v810, __dst, v759);
              v507 = v809.i64[1];
              v513 = v809.i64[0];
              v514 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v512 >> 57), (__m128i)0LL);
              v515 = v809.i64[0] - 32;
              v766 = 0;
              v791 = v809.i64[0];
              *(__m128i *)v768 = v514;
              while ( 1 )
              {
                v516 = v507 & v512;
                v517 = _mm_loadu_si128((const __m128i *)(v513 + v516));
                si128 = _mm_cmpeq_epi8(v517, v514);
                _RCX = (unsigned int)_mm_movemask_epi8(si128);
                if ( (_DWORD)_RCX )
                  break;
LABEL_878:
                v506 = (__m256i *)v515;
                si128 = (__m128i)-1LL;
                v511 = __s1;
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v517, (__m128i)-1LL)) )
                  goto LABEL_881;
                v512 = v516 + v766 + 16;
                v766 += 16LL;
                v513 = v791;
                v514 = _mm_load_si128((const __m128i *)v768);
              }
              v767 = v516;
              v755.i64[0] = v507;
              v754 = v515;
              v741 = v517;
              while ( 1 )
              {
                v774.i64[0] = _RCX;
                __asm { tzcnt   ecx, ecx }
                v519 = v507 & (v516 + _RCX);
                v520 = v515 - 32 * v519;
                if ( __s1 == *(void **)(v520 + 16) )
                {
                  v507 = *(_QWORD *)(v520 + 8);
                  v506 = (__m256i *)__dst;
                  v521 = memcmp(__dst, (const void *)v507, (size_t)__s1);
                  v511 = __s1;
                  if ( !v521 )
                    break;
                }
                v522 = v774.i32[0] - 1;
                LOWORD(v522) = v774.i16[0] & (v774.i16[0] - 1);
                _RCX = v522;
                v516 = v767;
                v507 = v755.i64[0];
                v515 = v754;
                v517 = _mm_load_si128(&v741);
                if ( (v774.i16[0] & (unsigned __int16)(v774.i16[0] - 1)) == 0 )
                  goto LABEL_878;
              }
              if ( *(_QWORD *)(v791 - 32 * v519 - 8) < 2u )
              {
LABEL_881:
                if ( *(_QWORD *)&v793[16] )
                {
                  if ( (unsigned __int64)v511 < *(_QWORD *)&v793[16] )
                  {
                    v523 = v511;
                    if ( v511 )
                      goto LABEL_884;
                    __s1 = nullptr;
                    v778 = (void *)1;
                    goto LABEL_891;
                  }
                  v506 = *(__m256i **)&v793[8];
                  v507 = (__int64)__dst;
                  v523 = v511;
                  if ( memcmp(*(const void **)&v793[8], __dst, *(size_t *)&v793[16]) )
                  {
                    if ( (__int64)v523 < 0 )
                    {
                      v791 = 0;
LABEL_1076:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v791, v778);
                    }
LABEL_884:
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v506, v507);
                    v791 = 1;
                    __s1 = v523;
                    v778 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v523, 1);
                    if ( !v778 )
                    {
                      v778 = __s1;
                      goto LABEL_1076;
                    }
LABEL_891:
                    v525 = __s1;
                    memcpy(v778, __dst, (size_t)__s1);
                    v524 = (size_t)v525;
                    v800.i64[0] = (__int64)v525;
                    v800.i64[1] = (__int64)v778;
                    v800.i64[2] = (__int64)v525;
LABEL_892:
                    v526 = v524;
                    if ( v524 == v792.i64[2]
                      && (__s1 = (void *)v800.i64[1],
                          LODWORD(v524) = memcmp((const void *)v800.i64[1], (const void *)v792.i64[1], v524),
                          !(_DWORD)v524) )
                    {
                      LODWORD(__dst) = 1;
                      v529 = __n;
                      v527 = v526;
                      v528 = __s1;
                    }
                    else
                    {
                      LOBYTE(v524) = 1;
                      LODWORD(__dst) = v524;
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                        v812,
                        &v800);
                      *(_OWORD *)&v806[8] = *(__int128 *)((char *)v792.i128 + 8);
                      *(_QWORD *)v806 = v792.i64[0];
                      LODWORD(__dst) = 0;
                      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(&v805, &v801, v812, v806);
                      if ( v805.i64[0] == 0x8000000000000000LL )
                      {
                        v527 = v526;
                      }
                      else
                      {
                        v527 = v526;
                        if ( v805.i64[0] )
                        {
                          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                                   v805.i64[1],
                                                   v805.i64[0],
                                                   1);
                          v527 = v800.i64[2];
                        }
                      }
                      v528 = (void *)v800.i64[1];
                      LODWORD(__dst) = 0;
                      v529 = __n;
                    }
                    v436 = (const char *)v749;
                    __s1 = v528;
                    codexmate_lib::core::relay::translator::build_anthropic_function_tool::h3dd52af57e76e160(
                      v749,
                      v529,
                      v528,
                      v527);
                    v501 = __src;
                    if ( LOBYTE(v749[0]) != 6 )
                    {
                      v530 = v770;
                      if ( v770 == (_QWORD)v769 )
                      {
                        v436 = (const char *)&v769;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v769);
                      }
                      v531 = *((_QWORD *)&v769 + 1);
                      v532 = 32 * v530;
                      *(_OWORD *)(*((_QWORD *)&v769 + 1) + v532 + 16) = v750;
                      v533 = v749[0];
                      *(_QWORD *)(v531 + v532 + 8) = v749[1];
                      *(_QWORD *)(v531 + v532) = v533;
                      v770 = v530 + 1;
                      v501 = __src;
                    }
                    if ( v800.i64[0] )
                    {
                      v436 = (const char *)__s1;
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v800.i64[0], 1);
                    }
                    if ( (_BYTE)__dst && v792.i64[0] )
                    {
                      v436 = (const char *)v792.i64[1];
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v792.i64[1], v792.i64[0], 1);
                    }
LABEL_858:
                    v435 = __n + 32;
                    if ( (void *)(__n + 32) == v501 )
                      goto LABEL_909;
                    continue;
                  }
                }
              }
              break;
            }
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v800, &v792);
            v524 = v800.u64[2];
            goto LABEL_892;
          }
LABEL_823:
          v431 += 32;
          if ( v431 == v437 )
            goto LABEL_912;
        }
        si128 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v485), *(__m128i *)v775);
        v489 = _mm_or_si128(
                 _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v485 + 16)), (__m128i)xmmword_1015E35E0),
                 si128);
        if ( _mm_testz_si128(v489, v489) )
          goto LABEL_842;
LABEL_837:
        v487 = *(_QWORD *)v485 ^ 0x726165735F626577LL;
        v488 = *(_QWORD *)(v485 + 3) ^ 0x5F6863726165735FLL;
        goto LABEL_838;
      }
      LODWORD(v783) = 0;
LABEL_912:
      v777 = v770;
      v776 = v769;
      v534 = v782;
      if ( *((_BYTE *)v782 + 16) == 1 )
      {
        v535 = *(_OWORD *)v782;
      }
      else
      {
        *(_QWORD *)&v535 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                             v436,
                             v782,
                             v435,
                             *((_QWORD *)&v769 + 1));
        v534 = v782;
        *(_OWORD *)v782 = v535;
        v534[16] = 1;
      }
      *(_QWORD *)v534 = v535 + 1;
      memset(&v806[8], 0, 24);
      *(_QWORD *)v806 = &xmmword_1015FBEC0;
      *(_OWORD *)&v806[32] = v535;
      v536 = v777;
      v537 = 32 * v777;
      if ( v777 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, v534);
        v538 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v537, 8);
        if ( !v538 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v537);
      }
      else
      {
        v538 = 8;
      }
      v539 = *((_QWORD *)&v776 + 1) + v537;
      *(_QWORD *)v793 = v536;
      *(_OWORD *)&v793[8] = (unsigned __int64)v538;
      v805.i64[0] = *((_QWORD *)&v776 + 1);
      v805.i64[1] = *((_QWORD *)&v776 + 1);
      v805.i64[2] = v776;
      v805.i64[3] = v539;
      if ( !v536 )
        goto LABEL_986;
      v540 = *((_QWORD *)&v776 + 1) + 32LL;
      do
      {
        v541 = *(_BYTE *)(v540 - 32);
        *(__int64 *)((char *)&v800.i64[2] + 7) = *(_QWORD *)(v540 - 8);
        v800.i64[2] = *(_QWORD *)(v540 - 15);
        v800.i128[0] = *(_OWORD *)(v540 - 31);
        if ( v541 == 6 )
          goto LABEL_985;
        v812[0].i8[0] = v541;
        v812[0].i64[3] = *(__int64 *)((char *)&v800.i64[2] + 7);
        *(__int64 *)((char *)&v812[0].i64[2] + 1) = v800.i64[2];
        *(__int128 *)((char *)v812[0].i128 + 1) = v800.i128[0];
        v542 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v812);
        if ( !v542 || *(_BYTE *)v542 != 3 )
        {
LABEL_928:
          v547 = *(_QWORD *)&v793[16];
          v431 = 1;
          if ( *(_QWORD *)&v793[16] == *(_QWORD *)v793 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v793);
          goto LABEL_930;
        }
        v543 = v431;
        v544 = *(_QWORD *)(v542 + 24);
        if ( v544 < 0 )
        {
          v545 = 0;
          goto LABEL_937;
        }
        if ( !v544 )
          goto LABEL_928;
        v782 = *(void **)(v542 + 16);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v543);
        v545 = 1;
        v775[0] = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v544, 1);
        if ( !v775[0] )
        {
          v543 = v544;
LABEL_937:
          v805.i64[1] = v540;
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v545, v543);
        }
        v546 = v775[0];
        memcpy(v775[0], v782, v544);
        v792.i64[0] = v544;
        v792.i64[1] = (__int64)v546;
        v792.i64[2] = v544;
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v806, &v792) )
        {
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v812);
          v431 = (__int64)v775[0];
          goto LABEL_931;
        }
        v547 = *(_QWORD *)&v793[16];
        if ( *(_QWORD *)&v793[16] == *(_QWORD *)v793 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v793);
        v431 = (__int64)v775[0];
LABEL_930:
        v548 = *(_QWORD *)&v793[8];
        v549 = 32 * v547;
        v550 = v812[0].i64[0];
        v551 = *(__int128 *)((char *)v812[0].i128 + 8);
        *(_QWORD *)(*(_QWORD *)&v793[8] + v549 + 24) = v812[0].i64[3];
        *(_OWORD *)(v548 + v549 + 8) = v551;
        *(_QWORD *)(v548 + v549) = v550;
        *(_QWORD *)&v793[16] = v547 + 1;
LABEL_931:
        v552 = v540 - 32;
        v540 += 32;
      }
      while ( v552 + 32 != v539 );
      v540 = v539;
LABEL_985:
      v805.i64[1] = v540;
LABEL_986:
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v805);
      v812[0].i64[0] = *(_QWORD *)v793;
      *(__int128 *)((char *)v812[0].i128 + 8) = *(_OWORD *)&v793[8];
      HIDWORD(_RAX) = *(_DWORD *)&v793[20];
      v593 = *(_QWORD *)&v806[8];
      if ( *(_QWORD *)&v806[8] )
      {
        v594 = *(_QWORD *)&v806[24];
        if ( *(_QWORD *)&v806[24] )
        {
          v595 = *(_QWORD *)v806;
          si128 = _mm_load_si128(*(const __m128i **)v806);
          _R13D = ~_mm_movemask_epi8(si128);
          v597 = (const __m128i *)(*(_QWORD *)v806 + 16LL);
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                si128 = _mm_load_si128(v597);
                v598 = _mm_movemask_epi8(si128);
                v595 -= 384;
                ++v597;
              }
              while ( v598 == 0xFFFF );
              _R13D = ~v598;
            }
            __asm { tzcnt   eax, r13d }
            v599 = -3 * _RAX;
            v600 = *(_QWORD *)(v595 + 8 * v599 - 24);
            if ( v600 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                       *(_QWORD *)(v595 + 8 * v599 - 16),
                                       v600,
                                       1);
            --v594;
            _RAX = _R13D & (unsigned int)(_R13D - 1);
            _R13D &= _R13D - 1;
          }
          while ( v594 );
        }
        v601 = (24 * v593 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v602 = v601 + v593 + 17;
        if ( v602 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v806 - v601, v602, 16);
      }
      *(__m256i *)&v806[24] = v801;
      v807 = v802;
      v808 = v803;
      *(_QWORD *)v806 = v812[0].i64[0];
      *(_OWORD *)&v806[8] = *(__int128 *)((char *)v812[0].i128 + 8);
      v603 = v809.i64[1];
      if ( v809.i64[1] )
      {
        v604 = v809.i64[3];
        if ( v809.i64[3] )
        {
          v605 = v809.i64[0];
          si128 = _mm_load_si128((const __m128i *)v809.i64[0]);
          _R14D = ~_mm_movemask_epi8(si128);
          v607 = (const __m128i *)(v809.i64[0] + 16);
          do
          {
            if ( !(_WORD)_R14D )
            {
              do
              {
                si128 = _mm_load_si128(v607);
                v608 = _mm_movemask_epi8(si128);
                v605 -= 512;
                ++v607;
              }
              while ( v608 == 0xFFFF );
              _R14D = ~v608;
            }
            __asm { tzcnt   ecx, r14d }
            v610 = v605 - (unsigned int)(32 * _ECX);
            v611 = *(_QWORD *)(v610 - 32);
            if ( v611 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v610 - 24), v611, 1);
            --v604;
            _R14D &= _R14D - 1;
          }
          while ( v604 );
        }
        v612 = 32 * v603;
        v613 = 33 * v603 + 49;
        if ( v613 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v809.i64[0] - v612 - 32, v613, 16);
      }
      *(__int128 *)((char *)v809.i128 + 8) = *(_OWORD *)&v806[8];
      v809.i64[0] = *(_QWORD *)v806;
      v760 = *(__m256i *)&v806[24];
      v761 = v807;
      v762 = v808;
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(&v797);
      v799 = v762;
      v798 = v761;
      v797 = v760;
      v461 = v783;
      if ( v809.i64[2] )
      {
        *(_QWORD *)&v806[24] = v809.i64[2];
        *(_OWORD *)&v806[8] = v809.i128[0];
        v806[0] = 4;
        v614 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                           &unk_101674ECD,
                           5u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v614);
        v614[1] = *(_OWORD *)&v806[16];
        *v614 = *(_OWORD *)v806;
      }
      else if ( v809.i64[0] )
      {
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v809.i64[1], 32 * v809.i64[0], 8);
      }
LABEL_798:
      v462 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                  "tool_choicestop_sequences",
                                  11,
                                  v796);
      v463 = v462;
      if ( !v462 )
        goto LABEL_958;
      v464 = *v462;
      if ( v464 == 5 )
      {
        v470 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &anon_10420c9971c21f44d230d15b39fb3fec_75,
                 4,
                 v463);
        if ( !v470
          || *(_BYTE *)v470 != 3
          || *(_QWORD *)(v470 + 24) != 8
          || **(_QWORD **)(v470 + 16) != 0x6E6F6974636E7566LL )
        {
          goto LABEL_958;
        }
        v471 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_101674A90,
                 8,
                 v463);
        if ( !v471
          || (v472 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "name",
                       4,
                       v471)) == 0
          || *(_BYTE *)v472 != 3 )
        {
          v472 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v463);
          if ( !v472 || *(_BYTE *)v472 != 3 )
            goto LABEL_958;
        }
        v473 = *(const void **)(v472 + 16);
        v474 = *(void **)(v472 + 24);
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v806, v474, 0, 1, 1);
        v475 = *(_QWORD *)&v806[8];
        if ( *(_DWORD *)v806 == 1 )
        {
          v564 = *(_QWORD *)&v806[16];
          goto LABEL_1120;
        }
        v796 = *(void **)&v806[16];
        v775[0] = v474;
        HIDWORD(_RAX) = (unsigned __int64)memcpy(*(void **)&v806[16], v473, (size_t)v474) >> 32;
        v477 = v797.i64[3];
        if ( v797.i64[3] )
        {
          __n = v475;
          LODWORD(v783) = v461;
          v478 = v797.i64[0];
          v479 = (const __m128i *)(v797.i64[0] + 16);
          si128 = _mm_load_si128((const __m128i *)v797.i64[0]);
          _EBX = ~_mm_movemask_epi8(si128);
          v481 = (size_t)v775[0];
          while ( 1 )
          {
            if ( !(_WORD)_EBX )
            {
              do
              {
                si128 = _mm_load_si128(v479);
                v553 = _mm_movemask_epi8(si128);
                v478 -= 768;
                ++v479;
              }
              while ( v553 == 0xFFFF );
              _EBX = ~v553;
            }
            __asm { tzcnt   eax, ebx }
            if ( *(_QWORD *)(v478 - 48 * _RAX - 8) == v481 )
            {
              v554 = v478 - 48 * _RAX;
              v555 = memcmp(*(const void **)(v554 - 16), v796, v481);
              v481 = (size_t)v775[0];
              if ( !v555 )
                break;
            }
            _RAX = _EBX & (unsigned int)(_EBX - 1);
            _EBX &= _EBX - 1;
            if ( !--v477 )
            {
              LOBYTE(v461) = v783;
              v475 = __n;
              goto LABEL_1038;
            }
          }
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v806, v554 - 48);
          LOBYTE(v461) = v783;
          if ( __n )
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v796, __n, 1);
          v475 = *(_QWORD *)v806;
          v481 = *(_QWORD *)&v806[16];
          v796 = *(void **)&v806[8];
        }
        else
        {
          v481 = (size_t)v775[0];
        }
LABEL_1038:
        if ( v481 == 18 )
        {
          si128 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v796), (__m128i)xmmword_1015E35D0);
          v630 = _mm_or_si128(
                   _mm_xor_si128(_mm_cvtsi32_si128(*((unsigned __int16 *)v796 + 8)), (__m128i)xmmword_1015E35E0),
                   si128);
          if ( _mm_testz_si128(v630, v630) )
          {
            v629 = &anon_10420c9971c21f44d230d15b39fb3fec_363;
LABEL_1045:
            v782 = v629;
            v481 = 10;
LABEL_1056:
            v637 = v481;
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v806, v481, 0, 1, 1);
            v775[0] = *(void **)&v806[8];
            if ( *(_DWORD *)v806 == 1 )
            {
              __n = v475;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v775[0], *(_QWORD *)&v806[16]);
            }
            v638 = *(void **)&v806[16];
            v639 = *(_QWORD *)&v806[16];
            memcpy(*(void **)&v806[16], v782, v637);
            v805.i64[0] = (__int64)v775[0];
            v782 = v638;
            v805.i64[1] = (__int64)v638;
            v805.i64[2] = v637;
            if ( !v637 )
            {
              if ( v775[0] )
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v782, v775[0], 1);
              if ( v475 )
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v796, v475, 1);
              goto LABEL_958;
            }
            v812[0].i64[0] = 0;
            v812[0].i64[2] = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v639, v775[0]);
            v640 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v640 )
              goto LABEL_1097;
            *v640 = 1701869940;
            v801.i64[0] = 4;
            v801.i64[1] = (__int64)v640;
            v801.i64[2] = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196C948);
            if ( v806[0] == 6 )
            {
              __n = v475;
              v809.i64[0] = *(_QWORD *)&v806[8];
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                43,
                &v809,
                &off_10196D480,
                &off_10196CED8);
            }
            v809 = *(__m256i *)v806;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              v806,
              v812,
              &v801,
              &v809);
            if ( v806[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, v812);
            v641 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v641 )
LABEL_1097:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
            *v641 = 1701667182;
            v801.i64[0] = 4;
            v801.i64[1] = (__int64)v641;
            v801.i64[2] = 4;
            serde_json::value::to_value::hf4a5c51664f5d8d6(v806, &v805);
            if ( v806[0] == 6 )
            {
              __n = v475;
              v809.i64[0] = *(_QWORD *)&v806[8];
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                43,
                &v809,
                &off_10196D480,
                &off_10196CED8);
            }
            v809 = *(__m256i *)v806;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              v806,
              v812,
              &v801,
              &v809);
            if ( v806[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
            *(_OWORD *)&v806[15] = *(__int128 *)((char *)v812[0].i128 + 8);
            *(_QWORD *)&v806[7] = v812[0].i64[0];
            *(__int64 *)((char *)&v809.i64[2] + 7) = v812[0].i64[2];
            v809.i128[0] = *(_OWORD *)v806;
            v809.i64[2] = *(unsigned __int128 *)((char *)v812[0].i128 + 8) >> 8;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v782, v775[0], 1);
            if ( v475 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v796, v475, 1);
LABEL_957:
            *(_QWORD *)&v806[24] = *(__int64 *)((char *)&v809.i64[2] + 7);
            *(_OWORD *)&v806[9] = *(__int128 *)((char *)v809.i128 + 8);
            *(_QWORD *)&v806[1] = v809.i64[0];
            v806[0] = 5;
            v560 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                               "tool_choicestop_sequences",
                               0xBu);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v560);
            v560[1] = *(_OWORD *)&v806[16];
            *v560 = *(_OWORD *)v806;
            goto LABEL_958;
          }
        }
        else
        {
          if ( v481 == 10 )
          {
            v629 = &anon_10420c9971c21f44d230d15b39fb3fec_363;
            if ( *(_QWORD *)v796 ^ 0x726165735F626577LL | *((unsigned __int16 *)v796 + 4) ^ 0x6863LL )
              v629 = (__int64 *)v796;
            goto LABEL_1045;
          }
          if ( v481 <= 0xA )
          {
            v631 = (__int64 *)v796;
LABEL_1055:
            v782 = v631;
            goto LABEL_1056;
          }
        }
        v632 = v481;
        v633 = 0x7765625F73656172LL;
        v634 = _byteswap_uint64(*(_QWORD *)v796);
        if ( v634 != 0x7765625F73656172LL
          || (v633 = 0x5F7365617263685FLL,
              v634 = _byteswap_uint64(*(_QWORD *)((char *)v796 + 3)),
              v635 = 0,
              v634 != 0x5F7365617263685FLL) )
        {
          v635 = 2 * (v633 >= v634) - 1;
        }
        v636 = v635 == 0;
        v481 = v632;
        if ( v636 )
          v481 = 10;
        v631 = &anon_10420c9971c21f44d230d15b39fb3fec_363;
        if ( !v636 )
          v631 = (__int64 *)v796;
        goto LABEL_1055;
      }
      if ( v464 != 3 )
        goto LABEL_958;
      v465 = *((_QWORD **)v463 + 2);
      v466 = *((_QWORD *)v463 + 3);
      if ( v466 == 8 )
      {
        if ( *v465 != 0x6465726975716572LL )
          goto LABEL_958;
        v792.i64[0] = 0;
        v792.i64[2] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_choicestop_sequences", 11);
        v556 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v556 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v556 = 1701869940;
        v800.i64[0] = 4;
        v800.i64[1] = (__int64)v556;
        v800.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v557 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
        if ( !v557 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3);
        *(_BYTE *)(v557 + 2) = 121;
        *(_WORD *)v557 = 28257;
        v805.i8[0] = 3;
        v805.i64[1] = 3;
        v805.i64[2] = v557;
        v805.i64[3] = 3;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v792, &v800);
        if ( v809.i64[0] != 0x8000000000000000LL )
          goto LABEL_955;
        v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
        v558 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
        v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
        v801.i64[0] = v558;
        *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v805;
        if ( v801.i8[0] != 6 )
LABEL_808:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
LABEL_956:
        *(_QWORD *)&v806[7] = v792.i64[0];
        *(_OWORD *)&v806[15] = *(__int128 *)((char *)v792.i128 + 8);
        *(__int64 *)((char *)&v809.i64[2] + 7) = v792.i64[2];
        v809.i128[0] = *(_OWORD *)v806;
        v809.i64[2] = *(unsigned __int128 *)((char *)v792.i128 + 8) >> 8;
        goto LABEL_957;
      }
      if ( v466 == 4 && *(_DWORD *)v465 == 1869903201 )
      {
        v792.i64[0] = 0;
        v792.i64[2] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_choicestop_sequences", 11);
        v467 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v467 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v467 = 1701869940;
        v800.i64[0] = 4;
        v800.i64[1] = (__int64)v467;
        v800.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v468 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v468 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v468 = 1869903201;
        v805.i8[0] = 3;
        v805.i64[1] = 4;
        v805.i64[2] = (__int64)v468;
        v805.i64[3] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v792, &v800);
        if ( v809.i64[0] == 0x8000000000000000LL )
        {
          v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
          v469 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
          v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
          v801.i64[0] = v469;
          *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v805;
          if ( v801.i8[0] != 6 )
            goto LABEL_808;
          goto LABEL_956;
        }
LABEL_955:
        *(_QWORD *)&v806[48] = v811;
        *(_OWORD *)&v806[32] = v810;
        *(__m256i *)v806 = v809;
        v812[0] = v805;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v801,
          v806,
          v812);
        goto LABEL_956;
      }
LABEL_958:
      if ( (v461 & 1) == 0 )
        goto LABEL_965;
      v742[0] = "You have a web_search tool available. Use it proactively whenever up-to-date or external information would improve your answer — including but not limited to: latest documentation, API references, library versions, error messages, best practices, real-time data (weather, news, prices, events), unfamiliar tools or frameworks, and any question where your training data may be outdated. Do not tell the user you lack internet access; search first, then respond.redacted_thinking";
      v742[1] = 462;
      v561 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "systeminstructions",
               6,
               &v788);
      if ( v561 && *(_BYTE *)v561 == 3 )
      {
        v562 = *(_QWORD *)(v561 + 16);
        v563 = *(_QWORD *)(v561 + 24);
        v809.i64[0] = v562;
        v809.i64[1] = v563;
        *(_QWORD *)v806 = &v809;
        *(_QWORD *)&v806[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        *(_QWORD *)&v806[16] = v742;
        *(_QWORD *)&v806[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v756, &unk_1017C5D9C, v806);
        goto LABEL_964;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("systeminstructions", 6);
      v564 = 462;
      v475 = 1;
      v565 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(462, 1);
      if ( !v565 )
        goto LABEL_1120;
      v566 = v565;
      memcpy(
        v565,
        "You have a web_search tool available. Use it proactively whenever up-to-date or external information would improve your answer — including but not limited to: latest documentation, API references, library versions, error messages, best practices, real-time data (weather, news, prices, events), unfamiliar tools or frameworks, and any question where your training data may be outdated. Do not tell the user you lack internet access; search first, then respond.redacted_thinking",
        0x1CEu);
      *(_QWORD *)&v756 = 462;
      *((_QWORD *)&v756 + 1) = v566;
      v757 = 462;
LABEL_964:
      *(_QWORD *)&v806[24] = v757;
      *(_OWORD *)&v806[8] = v756;
      v806[0] = 3;
      v567 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                         "systeminstructions",
                         6u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v567);
      v567[1] = *(_OWORD *)&v806[16];
      *v567 = *(_OWORD *)v806;
LABEL_965:
      codexmate_lib::core::relay::translator::normalize_anthropic_tool_choice_for_tools::hc02ad13318440a11(&v788, si128);
      v568 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "tool_choicestop_sequences",
               11,
               &v788);
      v569 = 1;
      if ( v568
        && (v570 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &anon_10420c9971c21f44d230d15b39fb3fec_75,
                     4,
                     v568)) != 0
        && *(_BYTE *)v570 == 3 )
      {
        v569 = *(_QWORD *)(v570 + 16);
        v571 = *(_QWORD *)(v570 + 24);
      }
      else
      {
        v571 = 0;
      }
      v572 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v569, v571);
      v564 = v573;
      if ( v573 < 0 )
      {
LABEL_1119:
        v475 = 0;
        goto LABEL_1120;
      }
      if ( !v573 )
        goto LABEL_1112;
      v574 = (const void *)v572;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v569, v571);
      v475 = 1;
      v575 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v564, 1);
      if ( !v575 )
        goto LABEL_1120;
      v576 = v575;
      memcpy(v575, v574, v564);
      if ( v564 < 8 )
      {
        v577 = 0;
        goto LABEL_1100;
      }
      if ( v564 < 0x20 )
      {
        v577 = 0;
        goto LABEL_982;
      }
      v577 = v564 & 0x7FFFFFFFFFFFFFE0LL;
      v578 = 0;
      v579 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
      v580 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
      v581 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
      do
      {
        v582 = _mm_loadu_si128((const __m128i *)&v576[v578]);
        v583 = _mm_loadu_si128((const __m128i *)&v576[v578 + 16]);
        v584 = _mm_add_epi8(v582, v579);
        v585 = _mm_add_epi8(v583, v579);
        *(__m128i *)&v576[v578] = _mm_or_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v584, v580), v584), v581),
                                    v582);
        *(__m128i *)&v576[v578 + 16] = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v585, v580), v585), v581),
                                         v583);
        v578 += 32;
      }
      while ( v577 != v578 );
      if ( v564 != v577 )
      {
        if ( (v564 & 0x18) != 0 )
        {
LABEL_982:
          v586 = v577;
          v577 = v564 & 0x7FFFFFFFFFFFFFF8LL;
          v587 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
          v588 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
          v589 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
          do
          {
            v590 = _mm_loadl_epi64((const __m128i *)&v576[v586]);
            v591 = _mm_add_epi8(v590, v587);
            *(_QWORD *)&v576[v586] = _mm_or_si128(
                                       _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v591, v588), v591), v589),
                                       v590).u64[0];
            v586 += 8;
          }
          while ( v577 != v586 );
          goto LABEL_1101;
        }
        do
        {
LABEL_1100:
          v576[v577] |= 32 * ((unsigned __int8)(v576[v577] - 65) < 0x1Au);
          ++v577;
LABEL_1101:
          ;
        }
        while ( v564 != v577 );
      }
      if ( v564 == 3 )
      {
        if ( !(*(_WORD *)v576 ^ 0x6E61 | (unsigned __int8)v576[2] ^ 0x79) )
          goto LABEL_1107;
      }
      else if ( v564 == 4 && *(_DWORD *)v576 == 1819242356 )
      {
LABEL_1107:
        if ( (_BYTE)v788 == 5 )
        {
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d(
            v806,
            &v789,
            &unk_101674AA0,
            8);
          if ( v806[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
        }
        codexmate_lib::core::relay::translator::remove_anthropic_output_config_effort::hd25abaccb71c0d64(&v788);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v576, v564, 1);
LABEL_1112:
      v643 = (__int64)&unk_101674E8D;
      v644 = 11;
      if ( !_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              &unk_101674E8D,
              11,
              &v788) )
        goto LABEL_1147;
      v645 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_101674AA0,
               8,
               &v788);
      v646 = 1;
      if ( v645
        && (v647 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &anon_10420c9971c21f44d230d15b39fb3fec_75,
                     4,
                     v645)) != 0
        && *(_BYTE *)v647 == 3 )
      {
        v646 = *(_QWORD *)(v647 + 16);
        v648 = *(_QWORD *)(v647 + 24);
      }
      else
      {
        v648 = 0;
      }
      v649 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v646, v648);
      v564 = v650;
      if ( v650 < 0 )
        goto LABEL_1119;
      if ( !v650 )
      {
        v643 = 1;
        v644 = v649;
        goto LABEL_1147;
      }
      v651 = (const void *)v649;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v646, v648);
      v475 = 1;
      v652 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v564, 1);
      if ( !v652 )
LABEL_1120:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v475, v564);
      v653 = v652;
      memcpy(v652, v651, v564);
      if ( v564 < 8 )
      {
        v654 = 0;
        goto LABEL_1135;
      }
      if ( v564 < 0x20 )
      {
        v654 = 0;
        goto LABEL_1132;
      }
      v654 = v564 & 0x7FFFFFFFFFFFFFE0LL;
      v655 = 0;
      v656 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
      v657 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
      v658 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
      do
      {
        v659 = _mm_loadu_si128((const __m128i *)&v653[v655 / 4]);
        v660 = _mm_loadu_si128((const __m128i *)&v653[v655 / 4 + 4]);
        v661 = _mm_add_epi8(v659, v656);
        v662 = _mm_add_epi8(v660, v656);
        *(__m128i *)&v653[v655 / 4] = _mm_or_si128(
                                        _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v661, v657), v661), v658),
                                        v659);
        *(__m128i *)&v653[v655 / 4 + 4] = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v662, v657), v662), v658),
                                            v660);
        v655 += 32LL;
      }
      while ( v654 != v655 );
      if ( v564 != v654 )
      {
        if ( (v564 & 0x18) != 0 )
        {
LABEL_1132:
          v663 = v654;
          v654 = v564 & 0x7FFFFFFFFFFFFFF8LL;
          v664 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
          v665 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
          v666 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
          do
          {
            v667 = _mm_loadl_epi64((const __m128i *)((char *)v653 + v663));
            v668 = _mm_add_epi8(v667, v664);
            *(_QWORD *)((char *)v653 + v663) = _mm_or_si128(
                                                 _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v668, v665), v668), v666),
                                                 v667).u64[0];
            v663 += 8;
          }
          while ( v654 != v663 );
          goto LABEL_1136;
        }
        do
        {
LABEL_1135:
          *((_BYTE *)v653 + v654) |= 32 * ((unsigned __int8)(*((_BYTE *)v653 + v654) - 65) < 0x1Au);
          ++v654;
LABEL_1136:
          ;
        }
        while ( v564 != v654 );
      }
      if ( v564 == 4 )
      {
        if ( *v653 == 1869903201 )
          goto LABEL_1145;
      }
      else if ( v564 == 7 )
      {
        if ( !(*v653 ^ 0x62616E65 | *(_DWORD *)((char *)v653 + 3) ^ 0x64656C62) )
          goto LABEL_1145;
      }
      else if ( v564 == 8 && *(_QWORD *)v653 == 0x6576697470616461LL )
      {
LABEL_1145:
        v806[0] = 2;
        *(_QWORD *)&v806[8] = 0;
        *(_QWORD *)&v806[16] = 1;
        v669 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                           &unk_101674E8D,
                           0xBu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v669);
        v669[1] = *(_OWORD *)&v806[16];
        *v669 = *(_OWORD *)v806;
      }
      v643 = (__int64)v653;
      v644 = v564;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v653, v564, 1);
LABEL_1147:
      *(_QWORD *)v793 = 0;
      *(_QWORD *)&v793[16] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v643, v644);
      v670 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v670 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      *v670 = 1701869940;
      v800.i64[0] = 4;
      v800.i64[1] = (__int64)v670;
      v800.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v671 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v671 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
      *(_QWORD *)v671 = 0x6172656D65687065LL;
      *(_BYTE *)(v671 + 8) = 108;
      v805.i8[0] = 3;
      v805.i64[1] = 9;
      v805.i64[2] = v671;
      v805.i64[3] = 9;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, v793, &v800);
      if ( v809.i64[0] == 0x8000000000000000LL )
      {
        v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
        v672 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
        v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
        v801.i64[0] = v672;
        *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v805;
        if ( v801.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
      }
      else
      {
        *(_QWORD *)&v806[48] = v811;
        *(_OWORD *)&v806[32] = v810;
        *(__m256i *)v806 = v809;
        v812[0] = v805;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v801,
          v806,
          v812);
      }
      *(__int128 *)((char *)v792.i128 + 8) = *(_OWORD *)v793;
      v792.i64[3] = *(_QWORD *)&v793[16];
      v792.i8[0] = 5;
      v673 = (__m256i *)"systeminstructions";
      v674 = 6;
      v675 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "systeminstructions",
               6,
               &v788);
      if ( !v675 )
        goto LABEL_1209;
      switch ( *(_BYTE *)v675 )
      {
        case 0:
          v806[0] = 0;
          break;
        case 1:
        case 2:
          *(_OWORD *)&v806[16] = *(_OWORD *)(v675 + 16);
          v676 = *(_QWORD *)v675;
          *(_QWORD *)&v806[8] = *(_QWORD *)(v675 + 8);
          *(_QWORD *)v806 = v676;
          break;
        case 3:
          v673 = (__m256i *)&v806[8];
          v674 = v675 + 8;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v806[8], v675 + 8);
          v806[0] = 3;
          break;
        case 4:
          v673 = (__m256i *)&v806[8];
          v674 = v675 + 8;
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &v806[8],
            v675 + 8);
          v806[0] = 4;
          break;
        case 5:
          if ( *(_QWORD *)(v675 + 24) )
          {
            v674 = *(_QWORD *)(v675 + 8);
            if ( !v674 )
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
            v673 = (__m256i *)&v806[8];
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
              &v806[8],
              v674,
              *(_QWORD *)(v675 + 16));
          }
          else
          {
            *(_QWORD *)&v806[8] = 0;
            *(_QWORD *)&v806[24] = 0;
          }
          v806[0] = 5;
          break;
      }
      v800 = *(__m256i *)v806;
      if ( v806[0] == 3 )
      {
        v775[0] = (void *)v800.i64[1];
        v678 = v800.i64[3];
        v796 = (void *)v800.i64[2];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v673, v674);
        v679 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v679 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v680 = v679;
        *(_QWORD *)&v776 = 0;
        v777 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
        v681 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v681 )
          goto LABEL_1284;
        *v681 = 1701869940;
        *(_QWORD *)v793 = 4;
        *(_QWORD *)&v793[8] = v681;
        *(_QWORD *)&v793[16] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v682 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v682 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v682 = 1954047348;
        v805.i8[0] = 3;
        v805.i64[1] = 4;
        v805.i64[2] = (__int64)v682;
        v805.i64[3] = 4;
        v683 = &v809;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v776, v793);
        if ( v809.i64[0] == 0x8000000000000000LL )
        {
          v684 = v809.i64[1];
          v685 = 32 * v809.i64[3];
          v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
          v686 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
          v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
          v801.i64[0] = v686;
          *(_OWORD *)(v809.i64[1] + v685 + 16) = v805.i128[1];
          v687 = (_BYTE *)v805.i64[1];
          *(_OWORD *)(v684 + v685) = v805.i128[0];
          if ( v801.i8[0] != 6 )
          {
            v683 = &v801;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
          }
        }
        else
        {
          *(_QWORD *)&v806[48] = v811;
          *(_OWORD *)&v806[32] = v810;
          *(__m256i *)v806 = v809;
          v812[0] = v805;
          v683 = &v801;
          v687 = v806;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v801,
            v806,
            v812);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v683, v687);
        v688 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v688 )
LABEL_1284:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v688 = 1954047348;
        *(_QWORD *)v793 = 4;
        *(_QWORD *)&v793[8] = v688;
        *(_QWORD *)&v793[16] = 4;
        if ( v678 < 0 )
        {
          v689 = 0;
          goto LABEL_1179;
        }
        if ( v678 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v689 = 1;
          v690 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v678, 1);
          if ( !v690 )
LABEL_1179:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v689, v678);
          v691 = v690;
        }
        else
        {
          v691 = 1;
        }
        memcpy((void *)v691, v796, v678);
        v805.i8[0] = 3;
        v805.i64[1] = v678;
        v805.i64[2] = v691;
        v805.i64[3] = v678;
        v673 = &v809;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v809, &v776, v793);
        if ( v809.i64[0] == 0x8000000000000000LL )
        {
          v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
          v692 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
          v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
          v801.i64[0] = v692;
          *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v805;
          if ( v801.i8[0] != 6 )
          {
            v673 = &v801;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
          }
        }
        else
        {
          *(_QWORD *)&v806[48] = v811;
          *(_OWORD *)&v806[32] = v810;
          *(__m256i *)v806 = v809;
          v812[0] = v805;
          v673 = &v801;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v801,
            v806,
            v812);
        }
        *(_OWORD *)&v806[7] = v776;
        *(_QWORD *)&v806[23] = v777;
        *(_BYTE *)v680 = 5;
        *(_QWORD *)(v680 + 24) = *(_QWORD *)&v806[23];
        *(_QWORD *)(v680 + 17) = *(_QWORD *)&v806[16];
        *(_OWORD *)(v680 + 1) = *(_OWORD *)v806;
        *(_QWORD *)&v776 = 1;
        *((_QWORD *)&v776 + 1) = v680;
        v777 = 1;
        v674 = (__int64)v775[0];
        v677 = 1;
        if ( v775[0] )
        {
          v673 = (__m256i *)v796;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v796, v775[0], 1);
        }
        goto LABEL_1190;
      }
      if ( v806[0] != 4 )
        goto LABEL_1207;
      v677 = v800.i64[3];
      v777 = v800.i64[3];
      v776 = *(__int128 *)((char *)v800.i128 + 8);
      if ( !v800.i64[3] )
      {
        if ( (_QWORD)v776 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v776 + 1), 32 * v776, 8);
        goto LABEL_1207;
      }
LABEL_1190:
      v693 = *((_QWORD *)&v776 + 1);
      v694 = 32 * v677;
      if ( *(_BYTE *)(*((_QWORD *)&v776 + 1) + v694 - 32) == 5 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v673, v674);
        v695 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
        if ( !v695 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
        qmemcpy(v695, "cache_control", 13);
        *(_QWORD *)v793 = 13;
        *(_QWORD *)&v793[8] = v695;
        *(_QWORD *)&v793[16] = 13;
        switch ( v792.i8[0] )
        {
          case 0:
            v805.i8[0] = 0;
            break;
          case 1:
          case 2:
            v805 = v792;
            break;
          case 3:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &v805.u32[2],
              &v792.u32[2]);
            v805.i8[0] = 3;
            break;
          case 4:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
              &v805.u32[2],
              &v792.u32[2]);
            v805.i8[0] = 4;
            break;
          case 5:
            if ( v792.i64[3] )
            {
              if ( !v792.i64[1] )
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                &v805.u32[2],
                v792.i64[1],
                v792.i64[2]);
            }
            else
            {
              v805.i64[1] = 0;
              v805.i64[3] = 0;
            }
            v805.i8[0] = 5;
            break;
        }
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
          &v809,
          v694 + v693 - 24,
          v793);
        if ( v809.i64[0] == 0x8000000000000000LL )
        {
          v801.i128[1] = *(_OWORD *)(v809.i64[1] + 32 * v809.i64[3] + 16);
          v696 = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3]);
          v801.i64[1] = *(_QWORD *)(v809.i64[1] + 32 * v809.i64[3] + 8);
          v801.i64[0] = v696;
          *(__m256i *)(v809.i64[1] + 32 * v809.i64[3]) = v805;
          if ( v801.i8[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
        }
        else
        {
          *(_QWORD *)&v806[48] = v811;
          *(_OWORD *)&v806[32] = v810;
          *(__m256i *)v806 = v809;
          v812[0] = v805;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v801,
            v806,
            v812);
        }
      }
      *(_QWORD *)&v806[24] = v777;
      *(_OWORD *)&v806[8] = v776;
      v806[0] = 4;
      v697 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                         "systeminstructions",
                         6u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v697);
      v697[1] = *(_OWORD *)&v806[16];
      *v697 = *(_OWORD *)v806;
LABEL_1207:
      if ( (unsigned __int8)(v800.i8[0] - 3) >= 2u )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v800);
LABEL_1209:
      v698 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
               "messagesobjectpropertiesdescriptionparametersstrict",
               8,
               &v788);
      if ( !v698 )
        goto LABEL_1255;
      if ( *(_BYTE *)v698 != 4 )
        goto LABEL_1255;
      v699 = *(_QWORD *)(v698 + 24);
      if ( !v699 )
        goto LABEL_1255;
      v700 = *(_QWORD *)(v698 + 16);
      v701 = 32 * v699;
      while ( 1 )
      {
        v702 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                 4,
                 v700 - 32 + v701);
        if ( v702 )
        {
          if ( *(_BYTE *)v702 == 3 && *(_QWORD *)(v702 + 24) == 4 )
          {
            v703 = _byteswap_ulong(**(_DWORD **)(v702 + 16));
            if ( v703 >= 0x75736573 == v703 < 0x75736572 )
              break;
          }
        }
        v701 -= 32;
        if ( !v701 )
          goto LABEL_1255;
      }
      v704 = "contentpattern.output_modehead_limit";
      v705 = 7;
      v706 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "contentpattern.output_modehead_limit",
               7,
               v700 + v701 - 32);
      if ( !v706 )
        goto LABEL_1255;
      switch ( *(_BYTE *)v706 )
      {
        case 0:
          v806[0] = 0;
          break;
        case 1:
        case 2:
          *(_OWORD *)&v806[16] = *(_OWORD *)(v706 + 16);
          v707 = *(_QWORD *)v706;
          *(_QWORD *)&v806[8] = *(_QWORD *)(v706 + 8);
          *(_QWORD *)v806 = v707;
          break;
        case 3:
          v704 = &v806[8];
          v705 = v706 + 8;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v806[8], v706 + 8);
          v806[0] = 3;
          break;
        case 4:
          v704 = &v806[8];
          v705 = v706 + 8;
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &v806[8],
            v706 + 8);
          v806[0] = 4;
          break;
        case 5:
          v704 = &v806[8];
          v705 = v706 + 8;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
            &v806[8],
            v706 + 8);
          v806[0] = 5;
          break;
      }
      v801 = *(__m256i *)v806;
      v708 = v806[0];
      if ( v806[0] == 3 )
      {
        v796 = (void *)v801.i64[2];
        v714 = v801.i64[1];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v704, v705);
        v715 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v715 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v716 = v715;
        v805.i64[0] = 0;
        v805.i64[2] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
        v717 = 4;
        v718 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v718 )
          goto LABEL_1287;
        *v718 = 1701869940;
        v812[0].i64[0] = 4;
        v812[0].i64[1] = (__int64)v718;
        v812[0].i64[2] = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v806, &off_10196C7F8);
        if ( v806[0] == 6 )
        {
          v809.i64[0] = *(_QWORD *)&v806[8];
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
            43,
            &v809,
            &off_10196D480,
            &off_10196CDB0);
        }
        v809 = *(__m256i *)v806;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
        if ( v806[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
        v719 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v719 )
          goto LABEL_1287;
        *v719 = 1954047348;
        v812[0].i64[0] = 4;
        v812[0].i64[1] = (__int64)v719;
        v812[0].i64[2] = 4;
        serde_json::value::to_value::hf4a5c51664f5d8d6(v806, &v801.u32[2]);
        if ( v806[0] == 6 )
        {
          v809.i64[0] = *(_QWORD *)&v806[8];
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
            43,
            &v809,
            &off_10196D480,
            &off_10196CDB0);
        }
        v809 = *(__m256i *)v806;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
        if ( v806[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v806, &v805);
        v717 = 13;
        v720 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
        if ( !v720 )
LABEL_1287:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v717);
        qmemcpy(v720, "cache_control", 13);
        v812[0].i64[0] = 13;
        v812[0].i64[1] = (__int64)v720;
        v812[0].i64[2] = 13;
        serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
          v806,
          &v792);
        if ( v806[0] == 6 )
        {
          v809.i64[0] = *(_QWORD *)&v806[8];
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
            43,
            &v809,
            &off_10196D480,
            &off_10196CDB0);
        }
        v809 = *(__m256i *)v806;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v806, &v805, v812, &v809);
        if ( v806[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v806);
        *(_OWORD *)&v806[7] = v805.i128[0];
        *(_QWORD *)&v806[23] = v805.i64[2];
        *(_BYTE *)v716 = 5;
        *(_QWORD *)(v716 + 24) = *(_QWORD *)&v806[23];
        *(_QWORD *)(v716 + 17) = *(_QWORD *)&v806[16];
        *(_OWORD *)(v716 + 1) = *(_OWORD *)v806;
        *(_QWORD *)&v806[8] = 1;
        *(_QWORD *)&v806[16] = v716;
        *(_QWORD *)&v806[24] = 1;
        v806[0] = 4;
        v721 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                           "contentpattern.output_modehead_limit",
                           7u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v721);
        v721[1] = *(_OWORD *)&v806[16];
        *v721 = *(_OWORD *)v806;
        v709 = 1;
        if ( v714 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v796, v714, 1);
LABEL_1249:
        v708 = v801.i8[0];
      }
      else
      {
        if ( v806[0] == 4 )
        {
          v709 = 1;
          if ( v801.i64[3] )
          {
            v710 = v801.i64[2];
            v711 = 32 * v801.i64[3];
            if ( *(_BYTE *)(v801.i64[2] + 32 * v801.i64[3] - 32) == 5 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v704, v705);
              v712 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
              if ( !v712 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
              qmemcpy(v712, "cache_control", 13);
              v812[0].i64[0] = 13;
              v812[0].i64[1] = (__int64)v712;
              v812[0].i64[2] = 13;
              *(__m256i *)v806 = v792;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v809,
                v711 + v710 - 24,
                v812,
                v806);
              if ( v809.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v809);
              v709 = 0;
            }
          }
          *(_QWORD *)&v806[24] = v801.i64[3];
          *(_OWORD *)&v806[8] = *(__int128 *)((char *)v801.i128 + 8);
          v806[0] = 4;
          v713 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                             "contentpattern.output_modehead_limit",
                             7u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v713);
          v713[1] = *(_OWORD *)&v806[16];
          *v713 = *(_OWORD *)v806;
          goto LABEL_1249;
        }
        v709 = 1;
      }
      if ( v708 > 6u || (v722 = 88, !_bittest(&v722, v708)) )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v801);
      if ( v709 )
LABEL_1255:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v792);
      v723 = v763;
      *(_QWORD *)(v763 + 24) = v790;
      *(_QWORD *)(v723 + 16) = *((_QWORD *)&v789 + 1);
      v724 = v788;
      *(_QWORD *)(v723 + 8) = v789;
      *(_QWORD *)v723 = v724;
      v725 = v797.i64[1];
      *(_QWORD *)(v723 + 32) = v797.i64[0];
      *(_OWORD *)(v723 + 40) = __PAIR128__(v797.u64[2], v725);
      *(_QWORD *)(v723 + 56) = v797.i64[3];
      *(_QWORD *)(v723 + 64) = v798;
      *(_QWORD *)(v723 + 72) = v799;
      v726 = v785;
      HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v787) >> 32;
      if ( v784 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v726, v784, 1);
      v728 = v744;
      if ( v744 )
      {
        v729 = v745;
        if ( v745 )
        {
          v730 = v743;
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v743));
          v732 = v743 + 1;
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                v733 = _mm_movemask_epi8(_mm_load_si128(v732));
                v730 -= 24;
                ++v732;
              }
              while ( v733 == 0xFFFF );
              _R13D = ~v733;
            }
            __asm { tzcnt   eax, r13d }
            v734 = -3 * _RAX;
            v735 = *((_QWORD *)&v730[-1] + v734 - 1);
            if ( v735 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v730[-1].i64[v734], v735, 1);
            --v729;
            _RAX = _R13D & (unsigned int)(_R13D - 1);
            _R13D &= _R13D - 1;
          }
          while ( v729 );
        }
        v736 = (24 * v728 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v737 = v736 + v728 + 17;
        if ( v737 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v743 - v736, v737, 16);
      }
      v738 = v780;
      for ( jj = v781 + 1; jj != 1; --jj )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v738);
        v738 += 32;
      }
      if ( v779 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v780, 32 * v779, 8);
      return v763;
  }
}
