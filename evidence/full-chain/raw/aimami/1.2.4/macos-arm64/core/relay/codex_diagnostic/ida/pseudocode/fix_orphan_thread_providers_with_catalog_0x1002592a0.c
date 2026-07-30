// __ZN13codexmate_lib4core5relay16codex_diagnostic40fix_orphan_thread_providers_with_catalog @ 0x1002592a0 | 1.2.4 NEW-delta
// [FULL decompile]

void *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_orphan_thread_providers_with_catalog::h883d0680b72adb29(
        __m128i *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int128 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  const __m128i *v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __int64 v20; // rax
  const __m128i *v21; // rdx
  __m128i si128; // xmm0
  _QWORD *v23; // r15
  signed __int64 v24; // rcx
  _QWORD *v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r12
  const __m128i *v34; // r13
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  bool v39; // zf
  __int64 v40; // rbx
  __int64 v41; // rbx
  size_t v42; // r14
  __int64 v43; // r12
  const __m128i *v45; // r13
  int v46; // r15d
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // rsi
  __m128i v53; // xmm0
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rbx
  char *v57; // r15
  void *v58; // r13
  size_t v59; // r12
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // r12
  __int64 v63; // rbx
  __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // rsi
  __int64 v67; // r14
  _QWORD *v68; // rbx
  __int64 v69; // r13
  __int64 v70; // r12
  signed __int64 v71; // r14
  const void *v72; // rsi
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // r13
  const __m128i *v76; // r14
  const __m128i *v77; // rax
  __int64 v78; // r8
  char v81; // r8
  __int64 v82; // r10
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // r15
  __int64 v86; // r10
  __m128i *v88; // rdx
  __int64 v89; // rax
  void *result; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // r10
  __int64 v96; // r13
  const __m128i *v97; // r14
  int v99; // eax
  __int64 v101; // r12
  __int64 v102; // r12
  __int64 *v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rdx
  signed __int64 v106; // rcx
  char *v107; // rsi
  unsigned int v108; // r12d
  __int64 v109; // rbx
  __int64 v110; // rax
  signed __int64 v111; // rbx
  const void *v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rdi
  signed __int64 v115; // rbx
  const void *v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // r12
  __int64 v121; // rsi
  signed __int64 v122; // r12
  __int64 v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rcx
  void *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  _QWORD *v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rax
  __int128 v135; // kr50_16
  __int128 v136; // kr60_16
  __int64 *v137; // r9
  __int64 *v138; // rdx
  __int64 v139; // rcx
  int v140; // edx
  int v141; // ecx
  unsigned int v142; // ecx
  __int64 v143; // r14
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rbx
  _DWORD *v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  _QWORD *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  void *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  void *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  void *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  size_t v165; // rbx
  __int64 v166; // r15
  unsigned __int64 v167; // rcx
  __int64 v168; // r13
  __int64 v169; // r14
  __int64 v170; // rbx
  __int64 v171; // r15
  __m128i v172; // xmm1
  __m128i v173; // xmm2
  __int64 v174; // r12
  __int64 v175; // r15
  __int64 v176; // rbx
  char v177; // al
  char v178; // cl
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // rcx
  signed __int64 v182; // rbx
  const void *v183; // r13
  __int64 v184; // r15
  __int64 v185; // rax
  __int64 v186; // r14
  __int64 v187; // r15
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // r14
  size_t v191; // rsi
  char **v192; // r12
  _QWORD *v193; // r12
  __int64 v194; // r15
  void *v195; // rbx
  __int64 v196; // rdx
  __m128i v197; // xmm2
  __m128i v198; // xmm1
  __int64 v199; // rax
  _QWORD *v200; // rcx
  __int64 v201; // rsi
  __int128 v202; // kr70_16
  __int128 v203; // kr80_16
  char v204; // al
  __int64 v205; // rax
  char *v206; // rcx
  __int128 *v207; // rax
  __int64 v208; // rcx
  __int64 v209; // r14
  unsigned __int64 v210; // r15
  unsigned __int64 v211; // r8
  __int64 v212; // r13
  size_t v213; // rbx
  __int64 v214; // rsi
  int v215; // eax
  void *v216; // rbx
  __int64 v217; // r15
  const void *v218; // r12
  __int64 v219; // rax
  __int64 v220; // r13
  __int128 v221; // krD0_16
  __int64 v222; // rdx
  __int64 v223; // rcx
  void *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  _DWORD *v227; // rax
  __int64 (__fastcall *v228)(); // rsi
  __int64 v229; // rdx
  size_t v230; // rsi
  __int64 v231; // r12
  __int64 v232; // rbx
  __int64 v233; // r14
  __int64 v234; // r15
  __int64 v235; // rsi
  void *v236; // r15
  __int64 v237; // r13
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // rdi
  __int64 i2; // r12
  __int64 v242; // rsi
  __int64 v243; // rdi
  __int64 i3; // r12
  __int128 v245; // rax
  __int64 v247; // rax
  unsigned __int8 *v248; // rbx
  signed __int64 v249; // r14
  unsigned __int64 v250; // rax
  __m128i v251; // xmm1
  __int64 ii; // r15
  unsigned __int64 v253; // rax
  __m128i v254; // xmm2
  unsigned __int64 v255; // r13
  __int64 v256; // rax
  int v257; // eax
  int v258; // eax
  int v259; // eax
  int v260; // eax
  int v261; // eax
  int v262; // eax
  int v263; // eax
  __int64 v264; // r15
  __m128i v265; // xmm1
  char *i; // r8
  __m128i v267; // xmm2
  __int64 v268; // rbx
  __int64 v269; // r13
  int v270; // eax
  unsigned __int64 v271; // rbx
  __m128i v272; // xmm1
  char *j; // rcx
  unsigned __int64 v274; // rbx
  __m128i v276; // xmm2
  __int64 v277; // rax
  __int64 v278; // r15
  _BYTE *v279; // r13
  unsigned __int64 v280; // rbx
  __m128i v281; // xmm1
  __int64 k; // r15
  unsigned __int64 v283; // rbx
  __m128i v285; // xmm2
  __int64 v286; // rax
  bool v287; // al
  _QWORD *v288; // r15
  const __m128i *v289; // rdx
  unsigned __int64 v290; // rax
  const __m128i *v292; // rbx
  unsigned __int64 v293; // rsi
  __m128i v294; // xmm1
  char *m; // rdi
  unsigned __int64 v296; // rax
  __m128i v297; // xmm2
  unsigned __int64 v299; // r13
  __int64 v300; // r15
  int v301; // eax
  unsigned __int64 v302; // rax
  __int128 v304; // krF0_16
  __m128i v305; // xmm1
  __int64 v306; // rdx
  char *n; // rdi
  unsigned __int64 v308; // rax
  __m128i v309; // xmm2
  __int64 v311; // r15
  __int64 v312; // r14
  int v313; // eax
  __int64 v314; // r14
  size_t v315; // rdx
  _QWORD *v316; // r15
  const void *v317; // rsi
  const void *v318; // rdi
  __int64 v319; // rdx
  __int64 v320; // rcx
  signed __int64 v321; // rbx
  const void *v322; // r14
  __int64 v323; // r13
  __int64 v324; // rax
  signed __int64 v325; // rbx
  __int64 v326; // r13
  char *v327; // rsi
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // r8
  _QWORD *v331; // r12
  __int64 v332; // r15
  char *v333; // r14
  __int64 v334; // rax
  const __m128i *v335; // r15
  __int64 v336; // r12
  __int64 v337; // rbx
  __int64 v338; // rcx
  __int64 v339; // rsi
  __int64 v340; // rdi
  _QWORD *v341; // r12
  __int64 v342; // r12
  void *v343; // rax
  signed __int64 v344; // r13
  unsigned __int64 v345; // r15
  unsigned __int64 v346; // r14
  size_t v347; // r15
  unsigned __int64 v348; // rbx
  void *v349; // r12
  __int64 v350; // r13
  bool v351; // cf
  __int64 v352; // r15
  __int64 v353; // r12
  __int64 v354; // r13
  __int64 v355; // rsi
  __int64 v356; // rbx
  __int64 v357; // r15
  __int64 v358; // rsi
  __int64 v359; // rdx
  __int64 v360; // r13
  __int64 (__fastcall *v361)(); // r14
  _QWORD *v362; // r15
  __m128i v363; // xmm0
  __m128i v364; // xmm1
  __m128i v365; // xmm2
  __int64 v366; // rbx
  char v367; // r14
  int autocommit; // eax
  __int64 v369; // r15
  __int128 v370; // kr130_16
  const void *v371; // rbx
  __int64 v372; // rax
  __int64 v373; // rcx
  __int64 v374; // rdi
  __int64 nn; // r14
  __int64 v376; // rsi
  __int64 v377; // rdi
  __int64 i1; // r14
  __int64 (__fastcall *v379)(); // r15
  unsigned __int64 v380; // rsi
  _OWORD *v381; // rdi
  unsigned __int128 v382; // rax
  __int64 v383; // r9
  __int64 v384; // r10
  unsigned __int64 v385; // rbx
  __int64 v386; // rsi
  __int64 v387; // rbx
  __int64 v388; // r13
  unsigned __int64 v389; // rbx
  _QWORD *v390; // r12
  __int64 v391; // rsi
  __int64 v392; // r12
  _QWORD *v393; // r14
  __int64 v394; // rsi
  __int64 v395; // rdx
  __int64 v396; // rcx
  _QWORD *v397; // r14
  bool v398; // bl
  bool v399; // bl
  int v400; // eax
  bool v401; // al
  bool v402; // al
  int v403; // eax
  bool v404; // bl
  bool v405; // bl
  bool v406; // al
  bool v407; // al
  _QWORD *v408; // rbx
  unsigned int v409; // r14d
  __int128 v410; // kr150_16
  __int64 v411; // rbx
  _QWORD *v412; // r14
  __int64 v413; // rsi
  __int64 v414; // rdi
  __int64 i4; // r14
  const __m128i *v416; // rbx
  __int64 v417; // rbx
  char *v418; // r14
  _QWORD *v419; // r15
  __int64 v420; // rsi
  __int64 v421; // rsi
  __int64 v422; // rbx
  __int64 v423; // r14
  _QWORD *v424; // r15
  __int64 v425; // rsi
  __int64 v426; // rsi
  __int64 v427; // rdi
  __m128i v428; // xmm0
  unsigned __int64 v429; // r8
  __int64 v430; // r8
  __int64 *v431; // rdi
  char *v432; // rsi
  __int64 v433; // rcx
  __int128 *v434; // r8
  __int64 v435; // rdx
  unsigned __int64 v436; // rbx
  __int64 v437; // r14
  __int64 v438; // r12
  __int64 v439; // rax
  unsigned __int64 v440; // rcx
  __m128i v441; // xmm1
  __m128i v442; // xmm2
  __int64 v443; // rdi
  unsigned __int64 v444; // rcx
  unsigned __int8 *v445; // r9
  __int64 v446; // rdx
  __int64 v447; // rdi
  unsigned __int64 v448; // rdx
  __int64 v449; // rdx
  __int64 v450; // rcx
  __int64 v451; // rdx
  __int64 v452; // rcx
  __int64 v453; // rax
  _QWORD *v454; // rbx
  __int64 v455; // rax
  __int128 v456; // kr1A0_16
  __int64 v457; // rdx
  __int128 v458; // kr1B0_16
  __int64 *v459; // r9
  const __m128i *v460; // rbx
  __int64 v461; // rbx
  __int64 v462; // r14
  __int64 v463; // r15
  __int64 v464; // rbx
  size_t v465; // r14
  __int64 v466; // r15
  __int64 v467; // r14
  __int64 v468; // r15
  _BYTE *v469; // r9
  char *v470; // r14
  __int64 v471; // rcx
  char *v472; // rax
  char *v473; // r14
  char *v474; // rax
  void *v475; // rdx
  __int64 v476; // rcx
  __int64 v477; // rsi
  __int64 v478; // rdx
  __m128i v479; // xmm0
  unsigned __int64 v481; // rax
  __int64 v482; // rbx
  __m128i v483; // xmm1
  char *jj; // rdi
  unsigned __int64 v485; // rax
  __m128i v486; // xmm2
  __int64 v488; // r15
  __int64 v489; // r14
  int v490; // eax
  unsigned __int64 v491; // r14
  __int128 v492; // kr1D0_16
  __int64 v493; // r15
  __int64 v494; // r13
  __int64 v495; // rax
  signed __int64 v496; // r12
  __int64 v497; // rcx
  __int64 v498; // rbx
  char v499; // al
  __int64 v500; // r12
  _QWORD *v501; // rsi
  __int64 v502; // rbx
  __int64 v503; // r15
  __int64 v504; // rax
  __int64 v505; // rax
  __int64 v506; // r12
  char *v507; // rsi
  __int64 v508; // r12
  __int64 v509; // r15
  __int64 v510; // rax
  char *v511; // rdx
  __int64 v512; // rcx
  unsigned __int64 v513; // rdi
  __int64 v514; // rbx
  __int64 v515; // r13
  __int64 v516; // rax
  __int64 v517; // r12
  __int64 v518; // rbx
  __int64 v519; // r15
  void *v520; // r12
  __int64 v521; // rax
  __int64 v522; // rcx
  __int128 v523; // kr1E0_16
  size_t v524; // rdx
  __int64 v525; // r9
  const void *v526; // r12
  unsigned __int64 v527; // r15
  size_t v528; // rbx
  _QWORD *v529; // r12
  size_t v530; // r14
  __int64 v531; // rbx
  __int64 v532; // r15
  __int64 v533; // rax
  __int64 v534; // r15
  char *v535; // rsi
  __int64 v536; // r15
  __int64 v537; // r13
  __int64 v538; // rax
  char *v539; // rdx
  __int64 v540; // rcx
  unsigned __int64 v541; // rdi
  __int64 v542; // rbx
  __int64 v543; // r12
  char *v544; // rax
  char *v545; // r12
  __int128 v546; // kr1F0_16
  void *v547; // r12
  __int64 v548; // rbx
  __int64 v549; // r14
  __int64 v550; // rax
  __int64 v551; // rcx
  const void *v552; // r15
  size_t v553; // rdx
  size_t v554; // r12
  unsigned __int64 v555; // rax
  __m128i v557; // xmm1
  __int64 kk; // rbx
  unsigned __int64 v559; // rax
  __int64 v560; // rdx
  __m128i v561; // xmm2
  unsigned __int64 v563; // r12
  __int64 v564; // r13
  int v565; // eax
  int v566; // eax
  __int64 v567; // r9
  const __m128i *v568; // r14
  __int64 (__fastcall *v569)(); // rbx
  __int64 v570; // rdx
  __int64 v571; // rsi
  void *v572; // rdx
  __int64 v573; // r8
  unsigned __int64 v574; // rdi
  __int64 v575; // r15
  signed __int64 v576; // r14
  const void *v577; // rbx
  __int64 v578; // r12
  __int64 v579; // rax
  __int64 v580; // r13
  __int64 v581; // rdx
  __int64 v582; // rcx
  size_t v583; // r12
  const void *v584; // r13
  __int64 v585; // rbx
  unsigned __int64 v586; // rbx
  char v587; // r13
  char v588; // r15
  char *v589; // rbx
  __int64 v590; // rbx
  unsigned __int128 v591; // rax
  void *v592; // rbx
  _QWORD *v593; // r14
  unsigned __int64 v594; // rbx
  __int64 v595; // rsi
  __int64 v596; // rdi
  char *mm; // r14
  signed __int64 v599; // r15
  __int64 v600; // r14
  __int64 v601; // r12
  const __m128i *v603; // r13
  int v604; // ebx
  __int64 v605; // rax
  __int64 v606; // rsi
  unsigned __int64 v607; // rax
  unsigned __int64 v609; // r14
  const __m128i *v610; // r13
  const __m128i *v612; // r12
  int v613; // ebx
  const __m128i *v614; // r15
  __int64 v615; // rsi
  __int64 v616; // rsi
  __int64 v617; // r14
  __int64 v618; // r13
  const __m128i *v620; // r12
  int v621; // ebx
  __int64 v622; // r15
  __int64 v623; // rsi
  __int64 v624; // rsi
  __int64 v625; // rbx
  char *v626; // r12
  __int64 v627; // rdi
  unsigned __int64 v628; // rbx
  _QWORD *v629; // r14
  __int64 v630; // rsi
  __int64 v631; // rcx
  __int64 v632; // rsi
  unsigned __int64 v634; // r14
  const __m128i *v635; // r15
  const __m128i *v637; // r12
  int v638; // r13d
  const __m128i *v639; // rbx
  __int64 v640; // rsi
  __int64 v641; // rsi
  __int64 v643; // r14
  __int64 v644; // r15
  const __m128i *v646; // r13
  int v647; // r12d
  __int64 v648; // rbx
  __int64 v649; // rsi
  __int64 v650; // rsi
  char *v651; // r12
  __int64 v652; // rdi
  __int64 v653; // [rsp+0h] [rbp-AB0h]
  __int64 v654; // [rsp+8h] [rbp-AA8h]
  _QWORD v655[36]; // [rsp+10h] [rbp-AA0h] BYREF
  _QWORD __src[18]; // [rsp+130h] [rbp-980h] BYREF
  _BYTE v657[24]; // [rsp+1C0h] [rbp-8F0h] BYREF
  _QWORD v658[3]; // [rsp+1D8h] [rbp-8D8h] BYREF
  _QWORD v659[3]; // [rsp+1F0h] [rbp-8C0h] BYREF
  __int128 v660; // [rsp+208h] [rbp-8A8h]
  unsigned __int64 v661; // [rsp+218h] [rbp-898h] BYREF
  unsigned __int64 v662; // [rsp+220h] [rbp-890h]
  __int64 v663; // [rsp+228h] [rbp-888h]
  size_t v664; // [rsp+230h] [rbp-880h]
  __int64 v665; // [rsp+238h] [rbp-878h]
  __int64 v666; // [rsp+240h] [rbp-870h]
  __int64 v667; // [rsp+248h] [rbp-868h]
  __int64 v668; // [rsp+250h] [rbp-860h] BYREF
  __m128i v669; // [rsp+258h] [rbp-858h]
  __int64 v670; // [rsp+268h] [rbp-848h]
  __int128 v671; // [rsp+270h] [rbp-840h]
  __int64 v672; // [rsp+280h] [rbp-830h]
  __int64 v673; // [rsp+288h] [rbp-828h]
  __int64 v674; // [rsp+290h] [rbp-820h]
  __int64 v675; // [rsp+298h] [rbp-818h]
  __int64 v676; // [rsp+2A0h] [rbp-810h]
  __int64 v677; // [rsp+2A8h] [rbp-808h] BYREF
  __int64 v678; // [rsp+2B0h] [rbp-800h]
  unsigned __int64 v679; // [rsp+2B8h] [rbp-7F8h]
  size_t v680; // [rsp+2C0h] [rbp-7F0h]
  _QWORD *v681; // [rsp+2C8h] [rbp-7E8h]
  char *v682; // [rsp+2D0h] [rbp-7E0h] BYREF
  void *v683; // [rsp+2D8h] [rbp-7D8h]
  signed __int64 v684; // [rsp+2E0h] [rbp-7D0h]
  void *v685; // [rsp+2E8h] [rbp-7C8h]
  unsigned __int64 v686; // [rsp+2F0h] [rbp-7C0h]
  unsigned __int64 v687; // [rsp+2F8h] [rbp-7B8h]
  __m128i v688; // [rsp+300h] [rbp-7B0h] BYREF
  __int128 v689; // [rsp+310h] [rbp-7A0h] BYREF
  const __m128i **v690; // [rsp+320h] [rbp-790h]
  _BYTE *v691; // [rsp+328h] [rbp-788h]
  size_t v692; // [rsp+330h] [rbp-780h]
  const __m128i *v693; // [rsp+338h] [rbp-778h] BYREF
  __m128i v694; // [rsp+340h] [rbp-770h]
  unsigned __int64 v695; // [rsp+350h] [rbp-760h]
  __int64 v696; // [rsp+358h] [rbp-758h] BYREF
  __int64 v697; // [rsp+360h] [rbp-750h]
  __int64 v698; // [rsp+368h] [rbp-748h] BYREF
  __int128 v699; // [rsp+370h] [rbp-740h]
  _OWORD v700[18]; // [rsp+380h] [rbp-730h] BYREF
  __m128i v701; // [rsp+4A0h] [rbp-610h]
  unsigned __int64 v702; // [rsp+4B0h] [rbp-600h]
  char **v703; // [rsp+4B8h] [rbp-5F8h]
  __m128i v704; // [rsp+4C0h] [rbp-5F0h] BYREF
  _BYTE v705[24]; // [rsp+4D8h] [rbp-5D8h] BYREF
  __m128i v706; // [rsp+4F0h] [rbp-5C0h] BYREF
  const __m128i *v707; // [rsp+500h] [rbp-5B0h] BYREF
  __int64 (__fastcall *v708)(); // [rsp+508h] [rbp-5A8h]
  _QWORD *v709; // [rsp+510h] [rbp-5A0h]
  __int128 v710; // [rsp+518h] [rbp-598h] BYREF
  __m128i *v711; // [rsp+528h] [rbp-588h]
  void *v712[2]; // [rsp+530h] [rbp-580h] BYREF
  _OWORD v713[12]; // [rsp+540h] [rbp-570h] BYREF
  __int128 v714; // [rsp+600h] [rbp-4B0h] BYREF
  _BYTE v715[23]; // [rsp+610h] [rbp-4A0h] BYREF
  __int128 v716; // [rsp+630h] [rbp-480h] BYREF
  __int64 v717; // [rsp+640h] [rbp-470h]
  size_t v718; // [rsp+648h] [rbp-468h]
  __int128 v719; // [rsp+650h] [rbp-460h]
  _BYTE v720[24]; // [rsp+660h] [rbp-450h] BYREF
  __int64 v721; // [rsp+678h] [rbp-438h]
  __int128 v722; // [rsp+680h] [rbp-430h]
  void *v723[2]; // [rsp+690h] [rbp-420h] BYREF
  _OWORD __s2[5]; // [rsp+6A8h] [rbp-408h] BYREF
  unsigned __int64 v725; // [rsp+6F8h] [rbp-3B8h] BYREF
  __int64 v726; // [rsp+700h] [rbp-3B0h]
  char *v727; // [rsp+708h] [rbp-3A8h]
  __m128i v728; // [rsp+710h] [rbp-3A0h] BYREF
  __int64 v729; // [rsp+728h] [rbp-388h] BYREF
  __m128i v730; // [rsp+730h] [rbp-380h] BYREF
  _BYTE __s1[56]; // [rsp+740h] [rbp-370h] BYREF
  __int64 v732; // [rsp+778h] [rbp-338h]
  _OWORD v733[6]; // [rsp+780h] [rbp-330h] BYREF
  __int128 v734; // [rsp+7E8h] [rbp-2C8h] BYREF
  size_t v735; // [rsp+7F8h] [rbp-2B8h]
  _BYTE __dst[344]; // [rsp+800h] [rbp-2B0h] BYREF
  _BYTE v737[40]; // [rsp+958h] [rbp-158h] BYREF
  const __m128i *v738; // [rsp+980h] [rbp-130h]
  unsigned int v739; // [rsp+98Ch] [rbp-124h]
  __m128i v740; // [rsp+990h] [rbp-120h] BYREF
  void *v741; // [rsp+9A8h] [rbp-108h] BYREF
  __int128 v742; // [rsp+9B0h] [rbp-100h] BYREF
  char **v743; // [rsp+9C0h] [rbp-F0h]
  _BYTE v744[24]; // [rsp+9C8h] [rbp-E8h] BYREF
  __int128 v745; // [rsp+9E0h] [rbp-D0h] BYREF
  __int64 v746; // [rsp+9F0h] [rbp-C0h]
  char *v747; // [rsp+9F8h] [rbp-B8h]
  void *v748[2]; // [rsp+A00h] [rbp-B0h] BYREF
  void *v749[2]; // [rsp+A10h] [rbp-A0h] BYREF
  __int64 v750; // [rsp+A28h] [rbp-88h]
  _QWORD *v751; // [rsp+A30h] [rbp-80h]
  unsigned __int64 v752; // [rsp+A38h] [rbp-78h]
  __m128i v753; // [rsp+A40h] [rbp-70h] BYREF
  __int128 v754; // [rsp+A50h] [rbp-60h]
  void *v755[2]; // [rsp+A60h] [rbp-50h] BYREF
  _QWORD *v756; // [rsp+A78h] [rbp-38h]
  const __m128i *v757; // [rsp+A80h] [rbp-30h]

  v752 = (unsigned __int64)a4;
  v5 = a2;
  v711 = a1;
  v672 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a3 + 16);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v8 = v7;
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)v7;
    *((_QWORD *)&v9 + 1) = *(_QWORD *)(v8 + 8);
  }
  else
  {
    *(_QWORD *)&v9 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_OWORD *)v8 = v9;
    *(_BYTE *)(v8 + 16) = 1;
  }
  v753.i64[0] = v8;
  *(_QWORD *)v8 = v9 + 1;
  *(_QWORD *)&__dst[24] = 0;
  *(_QWORD *)&__dst[16] = 0;
  *(_OWORD *)__dst = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  *(_OWORD *)&__dst[32] = v9;
  v673 = v6;
  if ( v6 )
  {
    v740.i64[0] = (__int64)__dst;
    v10 = v672;
    v11 = v673;
    do
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v700, v10);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(__dst, v700);
      v10 += 232;
      --v11;
    }
    while ( v11 );
  }
  v719 = *(_OWORD *)&__dst[32];
  v718 = *(_QWORD *)&__dst[24];
  v717 = *(_QWORD *)&__dst[16];
  v716 = *(_OWORD *)__dst;
  v12 = a2[7];
  v13 = v5[8];
  v14 = *(unsigned __int8 *)(a3 + 316);
  v740.i64[0] = (__int64)&v716;
  codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::h0665f9b4390cad52(
    &v714,
    v12,
    v13,
    &v716,
    v14);
  v15 = (unsigned __int64)__dst;
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::he5b0204558ef5cef(__dst, v5);
  v17 = *(const __m128i **)&__dst[8];
  v18 = _mm_loadu_si128((const __m128i *)&__dst[16]);
  v751 = v5;
  v739 = v14;
  *(__m128i *)v749 = v18;
  if ( *(_QWORD *)__dst != 11 )
  {
    v753.i64[0] = *(_QWORD *)__dst;
    *(_QWORD *)&v754 = *(_QWORD *)&__dst[40];
    v752 = *(_QWORD *)&__dst[32];
    v721 = *(_QWORD *)&__dst[56];
    v755[0] = *(void **)&__dst[48];
    v722 = *(_OWORD *)&__dst[64];
    v701 = *(__m128i *)&__dst[80];
    HIDWORD(_RAX) = *(_DWORD *)&__dst[92];
    v30 = *((_QWORD *)&v714 + 1);
    v757 = *(const __m128i **)&__dst[8];
    if ( !*((_QWORD *)&v714 + 1) )
      goto LABEL_22;
    goto LABEL_12;
  }
  v668 = *(_QWORD *)&__dst[8];
  v669 = v18;
  v19 = v753.i64[0];
  if ( *(_BYTE *)(v753.i64[0] + 16) == 1 )
  {
    v20 = *(_QWORD *)v753.i64[0];
    v21 = *(const __m128i **)(v753.i64[0] + 8);
  }
  else
  {
    v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    v19 = v753.i64[0];
    *(_QWORD *)v753.i64[0] = v20;
    *(_QWORD *)(v19 + 8) = v21;
    *(_BYTE *)(v19 + 16) = 1;
  }
  si128 = _mm_load_si128((const __m128i *)v749);
  v23 = (_QWORD *)si128.i64[0];
  *(_QWORD *)v19 = v20 + 1;
  *(_OWORD *)&v737[16] = 0u;
  v24 = (signed __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  *(_OWORD *)v737 = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  *(_QWORD *)&v737[32] = v20;
  _R12 = _mm_extract_epi64(si128, 1);
  v738 = v21;
  v749[0] = (void *)(si128.i64[0] + 176 * _R12);
  v757 = v17;
  v756 = (_QWORD *)_R12;
  if ( _R12 )
  {
    v26 = (_QWORD *)si128.i64[0];
    v27 = 0;
    v28 = v753.i64[0];
    do
    {
      if ( v26[9] != 0x8000000000000000LL )
      {
        v71 = v26[11];
        if ( v71 < 0 )
        {
          v73 = 0;
LABEL_74:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v73, v71);
        }
        v755[0] = v23;
        v72 = (const void *)v26[10];
        if ( v71 )
        {
          *(_QWORD *)&v754 = v26[10];
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v72, v21, v24);
          v73 = 1;
          v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1);
          if ( !v74 )
            goto LABEL_74;
          v75 = v74;
          v72 = (const void *)v754;
        }
        else
        {
          v75 = 1;
        }
        memcpy((void *)v75, v72, v71);
        *(_QWORD *)&v700[0] = v71;
        *((_QWORD *)&v700[0] + 1) = v75;
        *(_QWORD *)&v700[1] = v71;
        v15 = (unsigned __int64)__dst;
        hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h402b9d35dee146ce(
          __dst,
          v737,
          v700);
        v76 = *(const __m128i **)&__dst[8];
        v24 = *(_QWORD *)__dst;
        if ( *(_QWORD *)__dst != 0x8000000000000000LL )
        {
          v77 = *(const __m128i **)&__dst[24];
          v21 = **(const __m128i ***)&__dst[24];
          v15 = *(_QWORD *)(*(_QWORD *)&__dst[24] + 8LL);
          v78 = *(_QWORD *)&__dst[32] & v15;
          _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(**(_QWORD **)&__dst[24]
                                                                                + (*(_QWORD *)&__dst[32] & v15))));
          if ( !(_DWORD)_R9 )
          {
            v86 = 16;
            do
            {
              v78 = v15 & (v86 + v78);
              _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v21 + v78)));
              v86 += 16;
            }
            while ( !(_DWORD)_R9 );
          }
          __asm { tzcnt   r9d, r9d }
          _R9 = v15 & (v78 + _R9);
          v81 = v21->i8[_R9];
          if ( v81 >= 0 )
          {
            _R8D = _mm_movemask_epi8(_mm_load_si128(v21));
            __asm { tzcnt   r9d, r8d }
            v81 = v21->i8[_R9];
          }
          v82 = *(_QWORD *)&__dst[16];
          v83 = *(_QWORD *)&__dst[32] >> 57;
          v21->i8[_R9] = *(_QWORD *)&__dst[32] >> 57;
          v21[1].i8[v15 & (_R9 - 16)] = v83;
          v84 = -3 * _R9;
          v21[v84 - 3].i64[0] = v24;
          *((_QWORD *)&v21[v84 - 2] - 1) = v76;
          v76 = &v21[-3 * _R9];
          v24 = v81 & 1;
          v21[v84 - 2].i64[0] = v82;
          *((_QWORD *)&v21[v84 - 1] - 1) = 0;
          v21[v84 - 1].i64[0] = 8;
          v21[v84 - 1].i64[1] = 0;
          v77[1] = _mm_sub_epi64(
                     _mm_loadu_si128(v77 + 1),
                     _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DFEA0), v24, 0));
        }
        v85 = v76[-1].i64[1];
        if ( v85 == v76[-2].i64[1] )
        {
          v15 = (unsigned __int64)&v76[-2].u64[1];
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he3f8c8d505fd1b0a(&v76[-2].u64[1]);
        }
        *(_QWORD *)(v76[-1].i64[0] + 8 * v85) = v27;
        v76[-1].i64[1] = v85 + 1;
        v23 = v755[0];
        v28 = v753.i64[0];
      }
      v26 += 22;
      ++v27;
    }
    while ( v26 != v749[0] );
    v14 = v739;
    _R12 = (signed __int64)v756;
    if ( *(_BYTE *)(v28 + 16) != 1 )
    {
      v91 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
      *(_QWORD *)v28 = v91;
      *(_QWORD *)(v28 + 8) = v92;
      *(_BYTE *)(v28 + 16) = 1;
      goto LABEL_78;
    }
  }
  else
  {
    v28 = v753.i64[0];
  }
  v91 = *(_QWORD *)v28;
  v92 = *(_QWORD *)(v28 + 8);
LABEL_78:
  v93 = 0;
  *(_QWORD *)&__s1[24] = 0;
  v94 = 0;
  *(_QWORD *)&__s1[16] = 0;
  *(_OWORD *)__s1 = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  *(_QWORD *)&__s1[32] = v91;
  *(_QWORD *)&__s1[40] = v92;
  v95 = *(_QWORD *)&v737[24];
  *(_QWORD *)v28 = v91 + 2;
  v695 = 0;
  v694 = 0u;
  v693 = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13;
  v696 = v91 + 1;
  v697 = v92;
  if ( !v95 )
    goto LABEL_281;
  *(_QWORD *)&v754 = v95;
  v755[0] = v23;
  v96 = *(_QWORD *)v737;
  v97 = (const __m128i *)(*(_QWORD *)v737 + 16LL);
  _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v737));
  v750 = (__int64)&off_10196B248;
  do
  {
    if ( !(_WORD)_RAX )
    {
      do
      {
        v99 = _mm_movemask_epi8(_mm_load_si128(v97));
        v96 -= 768;
        ++v97;
      }
      while ( v99 == 0xFFFF );
      _RAX = (unsigned int)~v99;
    }
    _R15D = _RAX;
    __asm { tzcnt   eax, r15d }
    v101 = -48 * _RAX;
    v93 = *(_QWORD *)(v96 - 48 * _RAX - 40);
    v94 = (__int64)__dst;
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v93, *(_QWORD *)(v96 - 48 * _RAX - 32));
    if ( __dst[0] )
    {
      _R12 = (signed __int64)v756;
      if ( (__dst[8] & 3) == 1 )
      {
        *((_QWORD *)&v754 + 1) = *(_QWORD *)&__dst[8] - 1LL;
        v119 = *(_QWORD *)(*(_QWORD *)&__dst[8] - 1LL);
        v120 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 7LL);
        if ( *(_QWORD *)v120 )
          (*(void (__fastcall **)(__int64))v120)(v119);
        v121 = *(_QWORD *)(v120 + 8);
        if ( v121 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v121, *(_QWORD *)(v120 + 16));
        v93 = 24;
        v94 = *((_QWORD *)&v754 + 1);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v754 + 1), 24, 8);
        v14 = v739;
        _R12 = (signed __int64)v756;
      }
    }
    else
    {
      v102 = v96 + v101;
      if ( !*(_QWORD *)(v102 - 8) )
      {
        v104 = 0;
        v756 = nullptr;
LABEL_628:
        core::panicking::panic_bounds_check::h56740b1198b22635(v104, v756, v750);
      }
      v103 = *(__int64 **)(v102 - 16);
      v104 = *v103;
      if ( *v103 >= (unsigned __int64)v756 )
      {
        v750 = (__int64)&off_10196B260;
        goto LABEL_628;
      }
      codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout::h4a8908f8faf37875(
        v655,
        *(_QWORD *)(v102 - 40),
        *(_QWORD *)(v102 - 32),
        *((_QWORD *)v755[0] + 22 * v104 + 4),
        *((_QWORD *)v755[0] + 22 * v104 + 5));
      if ( __OFSUB__(-v655[0], 1) )
      {
        v111 = *(_QWORD *)(v102 - 32);
        if ( v111 < 0 )
        {
          v114 = 0;
LABEL_236:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v114, v111);
        }
        v112 = *(const void **)(v102 - 40);
        if ( v111 )
        {
          *((_QWORD *)&v754 + 1) = *(_QWORD *)(v102 - 40);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v655, v112, v105, -v655[0]);
          v113 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v111, 1);
          v114 = 1;
          _R12 = (signed __int64)v756;
          if ( !v113 )
            goto LABEL_236;
          v112 = *((const void **)&v754 + 1);
        }
        else
        {
          v113 = 1;
          _R12 = (signed __int64)v756;
        }
        *((_QWORD *)&v754 + 1) = v113;
        v123 = v113;
        memcpy((void *)v113, v112, v111);
        *(_QWORD *)&v700[0] = v111;
        *((_QWORD *)&v700[0] + 1) = *((_QWORD *)&v754 + 1);
        *(_QWORD *)&v700[1] = v111;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v123, v112, v124, v125);
        v126 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1);
        if ( !v126 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32);
        qmemcpy(v126, "session_meta anchors are missing", 32);
        *(_QWORD *)__dst = 32;
        *(_QWORD *)&__dst[8] = v126;
        *(_QWORD *)&__dst[16] = 32;
        v94 = (__int64)v713;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hfde7da57730010df(v713, &v693, v700, __dst);
        v93 = *(_QWORD *)&v713[0];
        v14 = v739;
        if ( *(_QWORD *)&v713[0] != 0x8000000000000000LL && *(_QWORD *)&v713[0] )
        {
          v94 = *((_QWORD *)&v713[0] + 1);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v713[0] + 1), *(_QWORD *)&v713[0], 1);
        }
      }
      else if ( v655[0] == 0x8000000000000001LL )
      {
        qmemcpy(__dst, &v655[1], 0x60u);
        v106 = *(_QWORD *)(v102 - 32);
        if ( v106 < 0 )
        {
          v109 = 0;
LABEL_232:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v109, v106);
        }
        v107 = *(char **)(v102 - 40);
        *((_QWORD *)&v754 + 1) = *(_QWORD *)(v102 - 32);
        if ( v106 )
        {
          v747 = v107;
          v108 = v14;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst[96], v107, v105, v106);
          v109 = 1;
          v110 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&v754 + 1), 1);
          v106 = *((_QWORD *)&v754 + 1);
          if ( !v110 )
            goto LABEL_232;
          v14 = v108;
          v107 = v747;
        }
        else
        {
          v110 = 1;
        }
        v747 = (char *)v110;
        v122 = v106;
        memcpy((void *)v110, v107, v106);
        *(_QWORD *)&__s2[0] = v122;
        *((_QWORD *)&__s2[0] + 1) = v747;
        *(_QWORD *)&__s2[1] = v122;
        *(_QWORD *)&v713[0] = 0;
        *((_QWORD *)&v713[0] + 1) = 1;
        *(_QWORD *)&v713[1] = 0;
        *(_QWORD *)&v700[1] = 1610612768;
        *(_QWORD *)&v700[0] = v713;
        *((_QWORD *)&v700[0] + 1) = &anon_7245a3145add9b93f83b0a9aa358a664_1177;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                __dst,
                                v700) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Resul"
            "t::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
            55,
            &v710,
            &anon_7245a3145add9b93f83b0a9aa358a664_1194,
            &anon_7245a3145add9b93f83b0a9aa358a664_1180);
        v733[0] = v713[0];
        *(_QWORD *)&v733[1] = *(_QWORD *)&v713[1];
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hfde7da57730010df(v700, &v693, __s2, v733);
        v93 = *(_QWORD *)&v700[0];
        if ( *(_QWORD *)&v700[0] != 0x8000000000000000LL && *(_QWORD *)&v700[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v700[0] + 1), *(_QWORD *)&v700[0], 1);
        v94 = (__int64)__dst;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(__dst);
        _R12 = (signed __int64)v756;
      }
      else
      {
        v115 = *(_QWORD *)(v102 - 32);
        if ( v115 < 0 )
        {
          v118 = 0;
LABEL_234:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v118, v115);
        }
        v116 = *(const void **)(v102 - 40);
        if ( v115 )
        {
          *((_QWORD *)&v754 + 1) = *(_QWORD *)(v102 - 40);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v655, v116, v105, 0x8000000000000001LL);
          v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v115, 1);
          v118 = 1;
          _R12 = (signed __int64)v756;
          if ( !v117 )
            goto LABEL_234;
          v116 = *((const void **)&v754 + 1);
        }
        else
        {
          v117 = 1;
          _R12 = (signed __int64)v756;
        }
        *((_QWORD *)&v754 + 1) = v117;
        memcpy((void *)v117, v116, v115);
        *(_QWORD *)&v713[0] = v115;
        *((_QWORD *)&v713[0] + 1) = *((_QWORD *)&v754 + 1);
        *(_QWORD *)&v713[1] = v115;
        memcpy(__dst, v655, 0x120u);
        v94 = (__int64)v700;
        v93 = (__int64)__s1;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he5b940baefd1d09a(v700, __s1, v713, __dst);
        v14 = v739;
        if ( *(_QWORD *)&v700[0] != 0x8000000000000000LL )
        {
          v94 = (__int64)v700;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$::he5d7e949bdfe29f3(v700);
        }
      }
    }
    _RAX = _R15D & (unsigned int)(_R15D - 1);
    *(_QWORD *)&v754 = v754 - 1;
  }
  while ( (_QWORD)v754 );
  v28 = v753.i64[0];
  v23 = v755[0];
  if ( *(_BYTE *)(v753.i64[0] + 16) != 1 )
  {
    *(_QWORD *)&v245 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    v28 = v753.i64[0];
    *(_OWORD *)v753.i64[0] = v245;
    *(_BYTE *)(v28 + 16) = 1;
    _R12 = (signed __int64)v756;
    v23 = v755[0];
  }
  else
  {
LABEL_281:
    v245 = *(_OWORD *)v28;
  }
  *(_QWORD *)v28 = v245 + 1;
  __s2[1] = 0u;
  _RCX = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  __s2[0] = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  __s2[2] = v245;
  if ( _R12 )
  {
    v247 = *(_QWORD *)&v715[8];
    *(_QWORD *)&v754 = *((_QWORD *)&v714 + 1);
    *((_QWORD *)&v754 + 1) = v714;
    _RCX = v714 - 24;
    v747 = (char *)(v714 - 24);
    v750 = *(_QWORD *)&v715[8];
    while ( 1 )
    {
      v248 = (unsigned __int8 *)v23[7];
      v755[0] = v23;
      v249 = v23[8];
      if ( v247 )
        break;
LABEL_293:
      LOBYTE(_R12) = 1;
      *((_QWORD *)&v245 + 1) = 0x8000000000000000LL;
      if ( v249 == 6 )
      {
        v258 = *v248;
        _RCX = (unsigned int)(v258 - 65);
        LOBYTE(_RCX) = v258 | (32 * ((unsigned __int8)(v258 - 65) < 0x1Au));
        v93 = (__int64)v755[0];
        if ( (_BYTE)_RCX == 111 )
        {
          v259 = v248[1];
          _RCX = (unsigned int)(v259 - 65);
          LOBYTE(_RCX) = v259 | (32 * ((unsigned __int8)(v259 - 65) < 0x1Au));
          if ( (_BYTE)_RCX == 112 )
          {
            v260 = v248[2];
            _RCX = (unsigned int)(v260 - 65);
            LOBYTE(_RCX) = v260 | (32 * ((unsigned __int8)(v260 - 65) < 0x1Au));
            if ( (_BYTE)_RCX == 101 )
            {
              v261 = v248[3];
              _RCX = (unsigned int)(v261 - 65);
              LOBYTE(_RCX) = v261 | (32 * ((unsigned __int8)(v261 - 65) < 0x1Au));
              if ( (_BYTE)_RCX == 110 )
              {
                v262 = v248[4];
                _RCX = (unsigned int)(v262 - 65);
                LOBYTE(_RCX) = v262 | (32 * ((unsigned __int8)(v262 - 65) < 0x1Au));
                if ( (_BYTE)_RCX == 97 )
                {
                  v263 = v248[5];
                  _RCX = (unsigned int)(v263 - 65);
                  LOBYTE(_RCX) = v263 | (32 * ((unsigned __int8)(v263 - 65) < 0x1Au));
                  LOBYTE(_R12) = (_BYTE)_RCX != 105;
                  v753.i64[0] = (__int64)v755[0] + 72;
                  if ( *((_QWORD *)v755[0] + 9) == 0x8000000000000000LL )
                    goto LABEL_313;
                  goto LABEL_305;
                }
              }
            }
          }
        }
        goto LABEL_302;
      }
      v93 = (__int64)v755[0];
      v753.i64[0] = (__int64)v755[0] + 72;
      if ( *((_QWORD *)v755[0] + 9) == 0x8000000000000000LL )
        goto LABEL_313;
LABEL_305:
      if ( !*(_QWORD *)&__s1[24] )
      {
LABEL_313:
        if ( !(_BYTE)_R12 )
          goto LABEL_375;
        goto LABEL_349;
      }
      v93 = v753.i64[0];
      *(_QWORD *)&v245 = core::hash::BuildHasher::hash_one::h1ac6b07d23c3865d(
                           &__s1[32],
                           v753.i64[0],
                           0x8000000000000000LL);
      v728.i32[0] = _R12;
      _RCX = (unsigned __int64)v245 >> 57;
      v94 = *(_QWORD *)&__s1[8];
      v264 = *(_QWORD *)__s1;
      v265 = _mm_shuffle_epi8(_mm_cvtsi32_si128((unsigned __int64)v245 >> 57), (__m128i)0LL);
      *((_QWORD *)&v245 + 1) = *(_QWORD *)__s1 - 312LL;
      for ( i = nullptr; ; i += 16 )
      {
        *(_QWORD *)&v245 = v94 & v245;
        v267 = _mm_loadu_si128((const __m128i *)(v264 + v245));
        LODWORD(_R12) = _mm_movemask_epi8(_mm_cmpeq_epi8(v267, v265));
        if ( (_DWORD)_R12 )
          break;
LABEL_311:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v267, (__m128i)-1LL));
        LODWORD(_R12) = v728.i32[0];
        if ( (_DWORD)_RCX )
          goto LABEL_313;
        *(_QWORD *)&v245 = &i[v245 + 16];
      }
      *(__m128i *)v748 = v265;
      v723[0] = (void *)v245;
      v712[0] = i;
      v706 = v267;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        v249 = v94;
        v268 = *((_QWORD *)&v245 + 1);
        v269 = -312 * (v94 & (v245 + _RCX));
        v93 = *((_QWORD *)&v245 + 1) - 312 * (v94 & (v245 + _RCX));
        v94 = v753.i64[0];
        if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::hce3c02caa0e21aae(
                                v753.i64[0],
                                v93) )
          break;
        v270 = _R12 - 1;
        LOWORD(v270) = _R12 & (_R12 - 1);
        v39 = (_WORD)v270 == 0;
        LODWORD(_R12) = v270;
        *(void **)&v245 = v723[0];
        v265 = _mm_load_si128((const __m128i *)v748);
        *((_QWORD *)&v245 + 1) = v268;
        v94 = v249;
        i = (char *)v712[0];
        v267 = _mm_load_si128(&v706);
        if ( v39 )
          goto LABEL_311;
      }
      v93 = *(_QWORD *)(v264 + v269 - 232);
      v249 = *(_QWORD *)(v264 + v269 - 224);
      if ( v750 )
      {
        v94 = (__int64)&v715[16];
        v748[0] = *(void **)(v264 + v269 - 232);
        v271 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(&v715[16]);
        v272 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v271 >> 57), (__m128i)0LL);
        for ( j = nullptr; ; j += 16 )
        {
          v274 = v754 & v271;
          HIDWORD(_RAX) = HIDWORD(v754);
          v276 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v754 + 1) + v274));
          LODWORD(_R12) = _mm_movemask_epi8(_mm_cmpeq_epi8(v276, v272));
          if ( (_DWORD)_R12 )
            break;
LABEL_322:
          v93 = (__int64)v748[0];
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v276, (__m128i)-1LL)) )
            goto LABEL_324;
          v271 = (unsigned __int64)&j[v274 + 16];
        }
        *(__m128i *)v723 = v272;
        v712[0] = j;
        v706 = v276;
        while ( 1 )
        {
          __asm { tzcnt   eax, r12d }
          v277 = -3 * (v754 & (v274 + _RAX));
          v94 = (__int64)v748[0];
          if ( v249 == *(_QWORD *)&v747[8 * v277 + 16] )
          {
            v93 = *(_QWORD *)&v747[8 * v277 + 8];
            if ( !memcmp(v748[0], (const void *)v93, v249) )
              break;
          }
          _RAX = (unsigned int)(_R12 - 1);
          LOWORD(_RAX) = _R12 & (_R12 - 1);
          LODWORD(_R12) = _RAX;
          v272 = _mm_load_si128((const __m128i *)v723);
          j = (char *)v712[0];
          v276 = _mm_load_si128(&v706);
          if ( !(_WORD)_RAX )
            goto LABEL_322;
        }
      }
      else
      {
LABEL_324:
        if ( v249 != 6
          || (*(_BYTE *)v93 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v93 - 65) < 0x1Au))) != 111
          || (*(_BYTE *)(v93 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v93 + 1) - 65) < 0x1Au))) != 112
          || (*(_BYTE *)(v93 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v93 + 2) - 65) < 0x1Au))) != 101
          || (*(_BYTE *)(v93 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v93 + 3) - 65) < 0x1Au))) != 110
          || (*(_BYTE *)(v93 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v93 + 4) - 65) < 0x1Au))) != 97
          || (*(_BYTE *)(v93 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v93 + 5) - 65) < 0x1Au))) != 105 )
        {
          goto LABEL_349;
        }
      }
      v278 = v269 + v264;
      v279 = *(_BYTE **)(v278 - 160);
      v249 = *(_QWORD *)(v278 - 152);
      if ( v750 )
      {
        v94 = (__int64)&v715[16];
        v93 = *(_QWORD *)(v278 - 160);
        v280 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(&v715[16]);
        v281 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v280 >> 57), (__m128i)0LL);
        for ( k = 0; ; k += 16 )
        {
          v283 = v754 & v280;
          HIDWORD(_RAX) = HIDWORD(v754);
          v285 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v754 + 1) + v283));
          LODWORD(_R12) = _mm_movemask_epi8(_mm_cmpeq_epi8(v285, v281));
          if ( (_DWORD)_R12 )
            break;
LABEL_338:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v285, (__m128i)-1LL)) )
            goto LABEL_340;
          v280 = v283 + k + 16;
        }
        *(__m128i *)v748 = v281;
        *(__m128i *)v723 = v285;
        while ( 1 )
        {
          __asm { tzcnt   eax, r12d }
          v286 = -3 * (v754 & (v283 + _RAX));
          if ( v249 == *(_QWORD *)&v747[8 * v286 + 16] )
          {
            v93 = *(_QWORD *)&v747[8 * v286 + 8];
            v94 = (__int64)v279;
            if ( !memcmp(v279, (const void *)v93, v249) )
              break;
          }
          _RAX = (unsigned int)(_R12 - 1);
          LOWORD(_RAX) = _R12 & (_R12 - 1);
          LODWORD(_R12) = _RAX;
          v281 = _mm_load_si128((const __m128i *)v748);
          v285 = _mm_load_si128((const __m128i *)v723);
          if ( !(_WORD)_RAX )
            goto LABEL_338;
        }
        v287 = 0;
LABEL_348:
        _RCX = v728.u32[0];
        LOBYTE(_RCX) = v287 | v728.i8[0];
        if ( !(v287 | v728.i8[0]) )
          goto LABEL_375;
        goto LABEL_349;
      }
LABEL_340:
      if ( v249 == 6
        && (*v279 | (unsigned __int8)(32 * ((unsigned __int8)(*v279 - 65) < 0x1Au))) == 111
        && (v279[1] | (unsigned __int8)(32 * ((unsigned __int8)(v279[1] - 65) < 0x1Au))) == 112
        && (v279[2] | (unsigned __int8)(32 * ((unsigned __int8)(v279[2] - 65) < 0x1Au))) == 101
        && (v279[3] | (unsigned __int8)(32 * ((unsigned __int8)(v279[3] - 65) < 0x1Au))) == 110
        && (v279[4] | (unsigned __int8)(32 * ((unsigned __int8)(v279[4] - 65) < 0x1Au))) == 97 )
      {
        v287 = (v279[5] | (unsigned __int8)(32 * ((unsigned __int8)(v279[5] - 65) < 0x1Au))) != 105;
        goto LABEL_348;
      }
LABEL_349:
      if ( *(_QWORD *)v753.i64[0] == 0x8000000000000000LL )
      {
        *(_QWORD *)&v700[0] = (char *)v755[0] + 24;
        *((_QWORD *)&v700[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v327 = (char *)&unk_1017C2E51;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dst[8], &unk_1017C2E51, v700);
        v5 = v751;
        v331 = v756;
        goto LABEL_384;
      }
      v288 = v755[0];
      std::sys::fs::metadata::h32fa16d3052ea535(__dst, *((_QWORD *)v755[0] + 10), *((_QWORD *)v755[0] + 11));
      v5 = v751;
      if ( __dst[0] )
      {
        v331 = v756;
        if ( (__dst[8] & 3) == 1 )
        {
          v356 = *(_QWORD *)&__dst[8] - 1LL;
          v249 = *(_QWORD *)(*(_QWORD *)&__dst[8] - 1LL);
          v357 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 7LL);
          if ( *(_QWORD *)v357 )
            (*(void (__fastcall **)(signed __int64))v357)(v249);
          v358 = *(_QWORD *)(v357 + 8);
          if ( v358 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v249, v358, *(_QWORD *)(v357 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v356, 24, 8);
          v288 = v755[0];
        }
        v359 = v288[11];
        *(_QWORD *)&v713[0] = v288[10];
        *((_QWORD *)&v713[0] + 1) = v359;
        *(_QWORD *)__dst = v288 + 3;
        *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__dst[16] = v713;
        *(_QWORD *)&__dst[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        v327 = (char *)&unk_1017C2CA4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v700, &unk_1017C2CA4, __dst);
        v750 = *(_QWORD *)&v700[0];
        v332 = 10;
        goto LABEL_445;
      }
      if ( v695 )
      {
        v290 = core::hash::BuildHasher::hash_one::h1ac6b07d23c3865d(&v696, v753.i64[0], v289);
        _RCX = v290 >> 57;
        v292 = v693;
        v293 = v694.i64[0];
        v294 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v290 >> 57), (__m128i)0LL);
        v289 = v693 - 3;
        for ( m = nullptr; ; m += 16 )
        {
          v296 = v293 & v290;
          v297 = _mm_loadu_si128((const __m128i *)((char *)v292 + v296));
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v297, v294));
          if ( _R12D )
          {
            v728 = v294;
            v748[0] = (void *)v293;
            v723[0] = m;
            *(__m128i *)v712 = v297;
            do
            {
              __asm { tzcnt   ecx, r12d }
              v299 = v296;
              v300 = 0xFFFFFFFFFFFFFFDLL * (v293 & (v296 + _RCX));
              v249 = (signed __int64)v289;
              if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::hce3c02caa0e21aae(
                                      v753.i64[0],
                                      &v289[-3 * (v293 & (v296 + _RCX))]) )
              {
                *(_QWORD *)&v713[0] = (char *)&v292[v300 - 1] - 8;
                *(_QWORD *)__dst = (char *)v755[0] + 24;
                *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                *(_QWORD *)&__dst[16] = v713;
                *(_QWORD *)&__dst[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2451354914923f;
                v327 = (char *)&unk_1017C2CE5;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v700, &unk_1017C2CE5, __dst);
                v5 = v751;
                v331 = v756;
                v750 = *(_QWORD *)&v700[0];
                *(_OWORD *)v749 = *(_OWORD *)((char *)v700 + 8);
                v332 = 10;
                goto LABEL_784;
              }
              v301 = _R12D - 1;
              LOWORD(v301) = _R12D & (_R12D - 1);
              v39 = (_WORD)v301 == 0;
              _R12D = v301;
              v296 = v299;
              v5 = v751;
              v288 = v755[0];
              v294 = _mm_load_si128(&v728);
              v289 = (const __m128i *)v249;
              v293 = (unsigned __int64)v748[0];
              m = (char *)v723[0];
              v297 = _mm_load_si128((const __m128i *)v712);
            }
            while ( !v39 );
          }
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v297, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            break;
          v290 = (unsigned __int64)&m[v296 + 16];
        }
      }
      if ( !*(_QWORD *)&__s1[24] )
      {
LABEL_383:
        *(_QWORD *)&v700[0] = v288 + 3;
        *((_QWORD *)&v700[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v327 = (char *)&unk_1017C2E0B;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dst[8], &unk_1017C2E0B, v700);
        v331 = v756;
LABEL_384:
        v750 = *(_QWORD *)&__dst[8];
        *(__m128i *)v749 = _mm_loadu_si128((const __m128i *)&__dst[16]);
        *(_QWORD *)&v754 = *(_QWORD *)&__dst[40];
        v752 = *(_QWORD *)&__dst[32];
        v721 = *(_QWORD *)&__dst[56];
        v249 = *(_QWORD *)&__dst[48];
        v722 = *(_OWORD *)&__dst[64];
        v701 = *(__m128i *)&__dst[80];
        v332 = 10;
        goto LABEL_784;
      }
      v302 = core::hash::BuildHasher::hash_one::h1ac6b07d23c3865d(&__s1[32], v753.i64[0], v289);
      _RCX = v302 >> 57;
      v304 = *(_OWORD *)__s1;
      v305 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v302 >> 57), (__m128i)0LL);
      v306 = *(_QWORD *)__s1 - 312LL;
      for ( n = nullptr; ; n += 16 )
      {
        v308 = *((_QWORD *)&v304 + 1) & v302;
        v309 = _mm_loadu_si128((const __m128i *)(v304 + v308));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v309, v305));
        if ( _R13D )
          break;
LABEL_365:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v309, (__m128i)-1LL));
        v5 = v751;
        if ( (_DWORD)_RCX )
          goto LABEL_383;
        v302 = (unsigned __int64)&n[v308 + 16];
      }
      v728 = v305;
      v748[0] = (void *)v308;
      v723[0] = n;
      *(__m128i *)v712 = v309;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        v311 = -312LL * (*((_QWORD *)&v304 + 1) & (v308 + _RCX));
        v312 = v306;
        if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::hce3c02caa0e21aae(
                                v753.i64[0],
                                v306 - 312 * (*((_QWORD *)&v304 + 1) & (v308 + _RCX))) )
          break;
        v313 = _R13D - 1;
        LOWORD(v313) = _R13D & (_R13D - 1);
        v39 = (_WORD)v313 == 0;
        _R13D = v313;
        v308 = (unsigned __int64)v748[0];
        v288 = v755[0];
        v305 = _mm_load_si128(&v728);
        v306 = v312;
        n = (char *)v723[0];
        v309 = _mm_load_si128((const __m128i *)v712);
        if ( v39 )
          goto LABEL_365;
      }
      v314 = v304 + v311;
      v315 = *(_QWORD *)(v304 + v311 - 248);
      v316 = v755[0];
      if ( v315 != *((_QWORD *)v755[0] + 5)
        || (v317 = *((const void **)v755[0] + 4), v318 = *(const void **)(v314 - 256), memcmp(v318, v317, v315)) )
      {
        v249 = v314 - 264;
        *(_QWORD *)__dst = v316 + 3;
        *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__dst[16] = v249;
        *(_QWORD *)&__dst[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v327 = (char *)&unk_1017C2D28;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v700, &unk_1017C2D28, __dst);
        v5 = v751;
        v331 = v756;
        v750 = *(_QWORD *)&v700[0];
        v332 = 9;
LABEL_445:
        *(__m128i *)v749 = _mm_loadu_si128((const __m128i *)((char *)v700 + 8));
        goto LABEL_784;
      }
      v321 = v316[11];
      if ( v321 < 0 )
      {
        v323 = 0;
LABEL_386:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v323, v321);
      }
      v322 = (const void *)v316[10];
      if ( v321 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v318, v317, v319, v320);
        v323 = 1;
        v324 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v321, 1);
        if ( !v324 )
          goto LABEL_386;
        _R12 = v324;
      }
      else
      {
        _R12 = 1;
      }
      memcpy((void *)_R12, v322, v321);
      *(_QWORD *)__dst = v321;
      *(_QWORD *)&__dst[8] = _R12;
      *(_QWORD *)&__dst[16] = v321;
      v94 = (__int64)__s2;
      v93 = (__int64)__dst;
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::ha57a76b688271ff9(__s2, __dst);
LABEL_375:
      v23 = (char *)v755[0] + 176;
      v247 = v750;
      if ( (char *)v755[0] + 176 == v749[0] )
        goto LABEL_376;
    }
    v94 = (__int64)&v715[16];
    v250 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(&v715[16]);
    v251 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v250 >> 57), (__m128i)0LL);
    for ( ii = 0; ; ii += 16 )
    {
      v253 = v754 & v250;
      HIDWORD(_RCX) = HIDWORD(v754);
      v254 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v754 + 1) + v253));
      LODWORD(_R12) = _mm_movemask_epi8(_mm_cmpeq_epi8(v254, v251));
      if ( (_DWORD)_R12 )
        break;
LABEL_291:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v254, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_293;
      v250 = v253 + ii + 16;
    }
    v753 = v251;
    v728 = v254;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r12d }
      v255 = v253;
      v256 = -3 * (v754 & (v253 + _RCX));
      HIDWORD(_RCX) = HIDWORD(v747);
      if ( v249 == *(_QWORD *)&v747[8 * v256 + 16] )
      {
        v94 = (__int64)v248;
        if ( !memcmp(v248, *(const void **)&v747[8 * v256 + 8], v249) )
          break;
      }
      v257 = _R12 - 1;
      LOWORD(v257) = _R12 & (_R12 - 1);
      v39 = (_WORD)v257 == 0;
      LODWORD(_R12) = v257;
      v253 = v255;
      v251 = _mm_load_si128(&v753);
      v254 = _mm_load_si128(&v728);
      if ( v39 )
        goto LABEL_291;
    }
    LODWORD(_R12) = 0;
    *((_QWORD *)&v245 + 1) = 0x8000000000000000LL;
    v93 = (__int64)v755[0];
LABEL_302:
    v753.i64[0] = v93 + 72;
    if ( *(_QWORD *)(v93 + 72) == 0x8000000000000000LL )
      goto LABEL_313;
    goto LABEL_305;
  }
LABEL_376:
  v325 = *(_QWORD *)(v752 + 16);
  if ( v325 < 0 )
  {
    v326 = 0;
    goto LABEL_378;
  }
  v333 = *(char **)(v752 + 8);
  if ( v325 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v94, v93, *((_QWORD *)&v245 + 1), _RCX);
    v326 = 1;
    v334 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v325, 1);
    v335 = v757;
    if ( !v334 )
LABEL_378:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v326, v325);
    v336 = v334;
  }
  else
  {
    v336 = 1;
    v335 = v757;
  }
  v327 = v333;
  memcpy((void *)v336, v333, v325);
  *(_QWORD *)v705 = v325;
  *(_QWORD *)&v705[8] = v336;
  *(_QWORD *)&v705[16] = v325;
  v5 = v751;
  if ( !*((_QWORD *)&__s2[1] + 1) )
  {
    v329 = *(_QWORD *)&v705[8];
    v722 = *(_OWORD *)&v705[8];
    v721 = *(_QWORD *)v705;
    *(__m128i *)v749 = _mm_cvtsi32_si128(8u);
    v332 = 11;
    *(_QWORD *)&v754 = 8;
    v752 = 0;
    v249 = 0;
    v750 = 0;
    v331 = v756;
    goto LABEL_784;
  }
  v338 = *(unsigned __int8 *)(v752 + 168);
  if ( !(_BYTE)v338 )
  {
    BYTE8(v754) = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v336, v333, v328, v338);
    v249 = 132;
    v342 = 1;
    v343 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(132, 1);
    if ( v343 )
    {
      v344 = (signed __int64)v343;
      v327 = (char *)&unk_1015E2AA0;
      v750 = 132;
      memcpy(v343, &unk_1015E2AA0, 0x84u);
      *(__m128i *)v749 = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DFEB0), v344, 0);
      v332 = 10;
      v5 = v751;
      v331 = v756;
      goto LABEL_781;
    }
    goto LABEL_414;
  }
  if ( v751[90] == 0x8000000000000000LL )
  {
    BYTE8(v754) = *(_BYTE *)(v752 + 168);
    v339 = v751[1];
    v340 = (__int64)&v682;
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hd7b5e4062e681110(&v682, v339, v751[2]);
    v341 = v756;
    goto LABEL_567;
  }
  v249 = v751[92];
  if ( v249 < 0 )
  {
    v342 = 0;
    goto LABEL_414;
  }
  BYTE8(v754) = *(_BYTE *)(v752 + 168);
  v371 = (const void *)v751[91];
  if ( !v249 )
  {
    v340 = 1;
    goto LABEL_566;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v336, v327, v328, v338);
  v342 = 1;
  v372 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v249, 1);
  if ( !v372 )
LABEL_414:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v342, v249);
  v340 = v372;
LABEL_566:
  v682 = (char *)v249;
  v683 = (void *)v340;
  v339 = (__int64)v371;
  memcpy((void *)v340, v371, v249);
  v684 = v249;
  v341 = v756;
LABEL_567:
  v428 = _mm_load_si128(*(const __m128i **)&__s2[0]);
  if ( *((_QWORD *)&__s2[0] + 1) )
  {
    v429 = (24LL * *((_QWORD *)&__s2[0] + 1) + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v339 = *((_QWORD *)&__s2[0] + 1) + v429 + 17;
    v340 = *(_QWORD *)&__s2[0] - v429;
    v430 = 16;
  }
  else
  {
    v430 = 0;
  }
  *(_QWORD *)&v733[0] = v430;
  *((_QWORD *)&v733[0] + 1) = v339;
  *(_QWORD *)&v733[1] = v340;
  *((_QWORD *)&v733[1] + 1) = *(_QWORD *)&__s2[0];
  *(_QWORD *)&v733[2] = *(_QWORD *)&__s2[0] + 16LL;
  *((_QWORD *)&v733[2] + 1) = *(_QWORD *)&__s2[0] + *((_QWORD *)&__s2[0] + 1) + 1LL;
  LOWORD(v733[3]) = ~(unsigned __int16)_mm_movemask_epi8(v428);
  *((_QWORD *)&v733[3] + 1) = *((_QWORD *)&__s2[1] + 1);
  v431 = &v677;
  v432 = (char *)v733;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd51b4f021ab7a6b6(
    &v677,
    v733);
  v435 = v678;
  v436 = v679;
  v747 = (char *)v678;
  if ( v679 <= 1 )
  {
    v437 = 344 * v679;
    if ( 344 * v679 )
      goto LABEL_572;
LABEL_636:
    v439 = 8;
    v440 = 0;
    goto LABEL_637;
  }
  if ( v679 >= 0x15 )
  {
    v431 = (__int64 *)v747;
    v432 = (char *)v679;
    core::slice::sort::stable::driftsort_main::hfea424fbff2bc733(v747, v679, &v710);
  }
  else
  {
    v467 = 24 * v679;
    v468 = 24;
    do
    {
      v431 = (__int64 *)v747;
      v432 = &v747[v468];
      core::slice::sort::shared::smallsort::insert_tail::h80e3fbe26425d585(v747, &v747[v468]);
      v468 += 24;
    }
    while ( v467 != v468 );
  }
  v437 = 344 * v436;
  if ( v436 > 0x5F417D05F417D0LL )
  {
    v438 = 0;
LABEL_622:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v438, v437);
  }
  v5 = v751;
  v335 = v757;
  v341 = v756;
  v435 = (__int64)v747;
  if ( !v437 )
    goto LABEL_636;
LABEL_572:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v431, v432, v435, v433);
  v438 = 8;
  v439 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v437, 8);
  if ( !v439 )
    goto LABEL_622;
  v440 = v436;
  v341 = v756;
  v435 = (__int64)v747;
LABEL_637:
  v729 = v440;
  v730 = (__m128i)(unsigned __int64)v439;
  v725 = 0;
  v726 = 8;
  v727 = nullptr;
  v469 = (_BYTE *)(v435 + 24 * v436);
  *(_QWORD *)&v689 = v435;
  *((_QWORD *)&v689 + 1) = v435;
  v728.i64[0] = v677;
  v690 = (const __m128i **)v677;
  v691 = v469;
  v470 = (char *)v435;
  if ( !v436 )
  {
LABEL_831:
    v591 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v469 - v470);
    if ( v469 != v470 )
    {
      v628 = (v469 - v470) / 0x18uLL;
      v629 = v470 + 8;
      do
      {
        v630 = *(v629 - 1);
        if ( v630 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v629, v630, 1);
        v629 += 3;
        --v628;
      }
      while ( v628 );
    }
LABEL_836:
    if ( v728.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v747, 24 * v728.i64[0], 8);
    v750 = v729;
    *(__m128i *)v749 = _mm_loadu_si128(&v730);
    v752 = v725;
    *(_QWORD *)&v754 = v726;
    v755[0] = v727;
    v631 = *(_QWORD *)&v705[8];
    v721 = *(_QWORD *)v705;
    v722 = *(_OWORD *)&v705[8];
    v632 = (__int64)v682;
    if ( v682 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v683, v682, 1);
    HIDWORD(_RAX) = v694.i32[1];
    if ( v694.i64[0] )
    {
      v753.i64[0] = v694.i64[0];
      v634 = v695;
      if ( v695 )
      {
        v635 = v693;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v693));
        v637 = v693 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v638 = _mm_movemask_epi8(_mm_load_si128(v637));
              v635 -= 48;
              ++v637;
            }
            while ( v638 == 0xFFFF );
            _R13D = ~v638;
          }
          __asm { tzcnt   eax, r13d }
          v639 = &v635[-3 * _RAX];
          v640 = v639[-3].i64[0];
          if ( v640 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v639[-3].i64[1], v640, 1);
          v641 = v639[-2].i64[1];
          if ( v641 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v639[-1].i64[0], v641, 1);
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
          --v634;
        }
        while ( v634 );
      }
      v632 = 49 * v753.i64[0] + 65;
      v5 = v751;
      v335 = v757;
      v341 = v756;
      if ( 49 * v753.i64[0] != -65 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v693[-3 * v753.i64[0] - 3], v632, 16);
    }
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$$GT$::h181c919261f422fc(
      __s1,
      v632,
      *((_QWORD *)&v591 + 1),
      v631,
      v434);
    HIDWORD(_RAX) = *(_DWORD *)&v737[12];
    if ( *(_QWORD *)&v737[8] )
    {
      v753.i64[0] = *(_QWORD *)&v737[8];
      v643 = *(_QWORD *)&v737[24];
      if ( *(_QWORD *)&v737[24] )
      {
        v644 = *(_QWORD *)v737;
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v737));
        v646 = (const __m128i *)(*(_QWORD *)v737 + 16LL);
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v647 = _mm_movemask_epi8(_mm_load_si128(v646));
              v644 -= 768;
              ++v646;
            }
            while ( v647 == 0xFFFF );
            _R12D = ~v647;
          }
          __asm { tzcnt   eax, r12d }
          v648 = v644 - 48 * _RAX;
          v649 = *(_QWORD *)(v648 - 48);
          if ( v649 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v648 - 40), v649, 1);
          v650 = *(_QWORD *)(v648 - 24);
          if ( v650 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v648 - 16), 8 * v650, 8);
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
          --v643;
        }
        while ( v643 );
      }
      v632 = 49 * v753.i64[0] + 65;
      v5 = v751;
      v335 = v757;
      v341 = v756;
      if ( 49 * v753.i64[0] != -65 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v737 - 48 * v753.i64[0] - 48, v632, 16);
    }
    v625 = v669.i64[0];
    v651 = (char *)v341 + 1;
    v652 = v669.i64[0];
    while ( v651 != (char *)1 )
    {
      --v651;
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h657639c742bb6a00(
        v652,
        v632);
      v652 += 176;
    }
    HIDWORD(_RAX) = 0;
    v753.i64[0] = 11;
    goto LABEL_870;
  }
  v434 = &v742;
  v743 = (char **)(v752 + 24);
  v680 = *(_QWORD *)(v752 + 96);
  v681 = (_QWORD *)(v752 + 104);
  v750 = *(_QWORD *)(v752 + 72);
  *(_QWORD *)&v754 = *(_QWORD *)(v752 + 80);
  v471 = 24 * v436 - 24;
  v472 = (char *)(v435 + 32);
  v692 = (size_t)&off_10196B1D0;
  v703 = &off_10196B290;
  v473 = (char *)v435;
  v712[0] = (void *)(v435 + 24 * v436);
  while ( 1 )
  {
    v702 = v471;
    v723[0] = v472;
    v474 = v473;
    v470 = v473 + 24;
    *((_QWORD *)&v689 + 1) = v470;
    v475 = *(void **)v474;
    v476 = *((_QWORD *)v474 + 1);
    *((_QWORD *)&v660 + 1) = *((_QWORD *)v474 + 2);
    *(_QWORD *)&v660 = v476;
    if ( v475 == (void *)0x8000000000000000LL )
    {
      v335 = v757;
      goto LABEL_831;
    }
    v748[0] = v475;
    v741 = v475;
    v742 = v660;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h4daaa94d700852f2(__dst, __s1, &v741);
    if ( *(_QWORD *)__dst == 0x8000000000000000LL )
      break;
    v706.i64[0] = (__int64)v470;
    v753.i64[0] = *(_QWORD *)&__dst[40];
    v477 = (__int64)&__dst[104];
    *(_OWORD *)v744 = *(_OWORD *)&__dst[64];
    *(_QWORD *)&v744[16] = *(_QWORD *)&__dst[80];
    v745 = *(_OWORD *)&__dst[88];
    memcpy((char *)&v700[6] + 8, &__dst[104], 0xB8u);
    v479 = _mm_loadu_si128((const __m128i *)&__dst[8]);
    *(_OWORD *)v720 = *(_OWORD *)&__dst[64];
    *(_QWORD *)&v720[16] = *(_QWORD *)&__dst[80];
    v710 = *(_OWORD *)&__dst[88];
    *(__m128i *)((char *)v700 + 8) = v479;
    *(_OWORD *)((char *)&v700[1] + 8) = *(_OWORD *)&__dst[24];
    *((_QWORD *)&v700[2] + 1) = *(_QWORD *)&__dst[40];
    v700[3] = *(_OWORD *)&__dst[48];
    v700[5] = *(_OWORD *)&__dst[80];
    v700[4] = *(_OWORD *)&__dst[64];
    _RCX = *(_QWORD *)&__dst[96];
    *(_QWORD *)&v700[6] = *(_QWORD *)&__dst[96];
    *(_QWORD *)&v700[0] = *(_QWORD *)__dst;
    if ( !*(_QWORD *)&v737[24] )
    {
LABEL_760:
      codexmate_lib::core::relay::codex_diagnostic::prepare_orphan_thread_adoption::_$u7b$$u7b$closure$u7d$$u7d$::h2329b9aa67ac5f49(
        __dst,
        v477,
        v478,
        _RCX);
      v470 = (char *)v706.i64[0];
      v750 = *(_QWORD *)&__dst[8];
      v332 = *(_QWORD *)__dst;
      *(__m128i *)v749 = _mm_loadu_si128((const __m128i *)&__dst[16]);
      *(_QWORD *)&v754 = *(_QWORD *)&__dst[40];
      v752 = *(_QWORD *)&__dst[32];
      v721 = *(_QWORD *)&__dst[56];
      v755[0] = *(void **)&__dst[48];
      v722 = *(_OWORD *)&__dst[64];
      v701 = *(__m128i *)&__dst[80];
LABEL_761:
      v331 = v756;
      v592 = v748[0];
      goto LABEL_762;
    }
    v481 = core::hash::BuildHasher::hash_one::h1ac6b07d23c3865d(&v737[32], &v741, v478);
    _RCX = v481 >> 57;
    v477 = *(_QWORD *)&v737[8];
    v482 = *(_QWORD *)v737;
    v483 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v481 >> 57), (__m128i)0LL);
    v478 = *(_QWORD *)v737 - 48LL;
    for ( jj = nullptr; ; jj += 16 )
    {
      v485 = v477 & v481;
      v486 = _mm_loadu_si128((const __m128i *)(v482 + v485));
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v486, v483));
      if ( _R13D )
        break;
LABEL_647:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v486, (__m128i)-1LL));
      v5 = v751;
      if ( (_DWORD)_RCX )
        goto LABEL_760;
      v481 = (unsigned __int64)&jj[v485 + 16];
    }
    v753 = v483;
    v749[0] = (void *)v485;
    v755[0] = jj;
    v704 = v486;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r13d }
      v488 = -48LL * (v477 & (v485 + _RCX));
      v489 = v478;
      if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::hce3c02caa0e21aae(
                              &v741,
                              v478 - 48 * (v477 & (v485 + _RCX))) )
        break;
      v490 = _R13D - 1;
      LOWORD(v490) = _R13D & (_R13D - 1);
      v39 = (_WORD)v490 == 0;
      _R13D = v490;
      v485 = (unsigned __int64)v749[0];
      v483 = _mm_load_si128(&v753);
      v478 = v489;
      jj = (char *)v755[0];
      v486 = _mm_load_si128(&v704);
      if ( v39 )
        goto LABEL_647;
    }
    v704.i64[0] = v482 + v488;
    v749[0] = *(void **)(v482 + v488 - 16);
    v491 = v669.i64[0];
    v492 = v700[2];
    v493 = 8LL * *(_QWORD *)(v482 + v488 - 8);
    v494 = 0;
    v753.i64[0] = v669.i64[0];
    while ( v493 != v494 )
    {
      v491 = *(_QWORD *)((char *)v749[0] + v494);
      if ( v491 >= (unsigned __int64)v756 )
        goto LABEL_882;
      v495 = 176 * v491;
      v491 = v753.i64[0];
      if ( *(_QWORD *)(v753.i64[0] + v495 + 40) == *((_QWORD *)&v492 + 1) )
      {
        v494 += 8;
        if ( !memcmp(*(const void **)(v753.i64[0] + v495 + 32), (const void *)v492, *((size_t *)&v492 + 1)) )
          continue;
      }
      *(_OWORD *)v744 = v742;
      *(_QWORD *)&v713[0] = v744;
      *((_QWORD *)&v713[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C2DD3, v713);
      v5 = v751;
      v470 = (char *)v706.i64[0];
      v750 = *(_QWORD *)__dst;
      v332 = 9;
      *(_OWORD *)v749 = *(_OWORD *)&__dst[8];
      goto LABEL_761;
    }
    v755[0] = v683;
    v496 = v684;
    v497 = 0;
    v5 = v751;
    do
    {
      v498 = v497;
      if ( v493 == v497 )
        break;
      v491 = *(_QWORD *)((char *)v749[0] + v497);
      if ( v491 >= (unsigned __int64)v756 )
      {
        v703 = &off_10196B278;
LABEL_882:
        core::panicking::panic_bounds_check::h56740b1198b22635(v491, v756, v703);
      }
      v499 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
               *(_QWORD *)(v753.i64[0] + 176 * v491 + 8),
               *(_QWORD *)(v753.i64[0] + 176 * v491 + 16),
               v755[0],
               v496);
      v497 = v498 + 8;
    }
    while ( !v499 );
    v500 = v704.i64[0];
    if ( !*(_QWORD *)(v704.i64[0] - 8) )
    {
      v491 = 0;
      v756 = nullptr;
LABEL_887:
      core::panicking::panic_bounds_check::h56740b1198b22635(v491, v756, v692);
    }
    if ( v493 == v498 )
      v491 = **(_QWORD **)(v704.i64[0] - 16);
    if ( v491 >= (unsigned __int64)v756 )
    {
      v692 = (size_t)&off_10196B1E8;
      goto LABEL_887;
    }
    v501 = (_QWORD *)(v753.i64[0] + 176 * v491);
    *(_QWORD *)&v745 = 0;
    *((_QWORD *)&v745 + 1) = 8;
    v746 = 0;
    v39 = v501[15] == 0x8000000000000000LL;
    v688.i64[0] = (__int64)v501;
    if ( v39 )
    {
      v749[0] = nullptr;
    }
    else
    {
      v502 = v501[16];
      v503 = v501[17];
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v745);
      v504 = *((_QWORD *)&v745 + 1);
      **((_QWORD **)&v745 + 1) = v502;
      *(_QWORD *)(v504 + 8) = v503;
      v746 = 1;
      v749[0] = (void *)1;
    }
    v505 = v500;
    v506 = *(_QWORD *)(v500 - 8);
    if ( v506 )
    {
      v507 = *(char **)(v505 - 16);
      v508 = 8 * v506;
      v509 = 0;
      v755[0] = v507;
      do
      {
        v513 = *(_QWORD *)&v507[v509];
        if ( v513 != v491 )
        {
          if ( v513 >= (unsigned __int64)v756 )
            core::panicking::panic_bounds_check::h56740b1198b22635(v513, v756, &off_10196B200);
          if ( *(_QWORD *)(v753.i64[0] + 176 * v513 + 120) != 0x8000000000000000LL )
          {
            v514 = *(_QWORD *)(v753.i64[0] + 176 * v513 + 128);
            v515 = *(_QWORD *)(v753.i64[0] + 176 * v513 + 136);
            if ( v749[0] == (void *)v745 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v745);
            v510 = *((_QWORD *)&v745 + 1);
            v511 = (char *)v749[0];
            v512 = 16 * (__int64)v749[0];
            *(_QWORD *)(*((_QWORD *)&v745 + 1) + v512) = v514;
            *(_QWORD *)(v510 + v512 + 8) = v515;
            v749[0] = v511 + 1;
            v746 = (__int64)(v511 + 1);
            v5 = v751;
            v507 = (char *)v755[0];
          }
        }
        v509 += 8;
      }
      while ( v508 != v509 );
    }
    v516 = v745;
    if ( *(_QWORD *)&v700[9] == 0x8000000000000000LL )
    {
      v517 = (__int64)v749[0];
    }
    else
    {
      v518 = *((_QWORD *)&v700[9] + 1);
      v519 = *(_QWORD *)&v700[10];
      v520 = v749[0];
      if ( v749[0] == (void *)v745 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v745);
      v521 = *((_QWORD *)&v745 + 1);
      v522 = 16LL * (_QWORD)v520;
      *(_QWORD *)(*((_QWORD *)&v745 + 1) + v522) = v518;
      *(_QWORD *)(v521 + v522 + 8) = v519;
      v517 = (__int64)v520 + 1;
      v746 = v517;
      v516 = v745;
    }
    if ( *((_QWORD *)&v700[4] + 1) != 0x8000000000000000LL )
    {
      v523 = v700[5];
      if ( v517 == v516 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v745);
      *(_OWORD *)(*((_QWORD *)&v745 + 1) + 16 * v517++) = v523;
      v746 = v517;
      v516 = v745;
    }
    *(_QWORD *)__dst = *((_QWORD *)&v745 + 1);
    *(_QWORD *)&__dst[16] = v516;
    *(_QWORD *)&__dst[8] = *((_QWORD *)&v745 + 1);
    *(_QWORD *)&__dst[24] = *((_QWORD *)&v745 + 1) + 16 * v517;
    v526 = (const void *)_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h04cc940ebf42c6a7(
                           __dst,
                           v752);
    v527 = 0x8000000000000000LL;
    if ( v526 )
    {
      v528 = v524;
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5(
        v713,
        v524,
        0,
        1,
        1,
        v525,
        v653,
        v654,
        v655[0],
        v655[1]);
      v527 = *((_QWORD *)&v713[0] + 1);
      if ( LOBYTE(v713[0]) )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v713[0] + 1), *(_QWORD *)&v713[1]);
      v663 = *(_QWORD *)&v713[1];
      memcpy(*(void **)&v713[1], v526, v528);
      v664 = v528;
    }
    if ( *(_QWORD *)&__dst[16] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)__dst, 16LL * *(_QWORD *)&__dst[16], 8);
    v529 = v756;
    v662 = v527;
    if ( v527 == 0x8000000000000000LL )
    {
      if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h70703e9e16b491cb(
                               v743,
                               *(_QWORD *)&v705[8],
                               *(_QWORD *)&v705[16]) )
      {
        *(_QWORD *)&v713[0] = (char *)&v700[1] + 8;
        *((_QWORD *)&v713[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C2D6E, v713);
        v750 = *(_QWORD *)__dst;
        *(_OWORD *)v749 = *(_OWORD *)&__dst[8];
        v332 = 10;
        v5 = v751;
        v331 = v756;
        v592 = v748[0];
        v470 = (char *)v706.i64[0];
LABEL_762:
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$::he5d7e949bdfe29f3(v700);
        if ( !v592 )
          goto LABEL_764;
LABEL_763:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v742, v592, 1);
        goto LABEL_764;
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v734, v705);
      v749[0] = *((void **)&v734 + 1);
      v530 = v735;
    }
    else
    {
      *(_QWORD *)&v734 = v527;
      *((_QWORD *)&v734 + 1) = v663;
      v735 = v664;
      *(_QWORD *)&v713[0] = 0;
      *((_QWORD *)&v713[0] + 1) = 8;
      *(_QWORD *)&v713[1] = 0;
      if ( *(_QWORD *)(v688.i64[0] + 144) == 0x8000000000000000LL )
      {
        v749[0] = nullptr;
      }
      else
      {
        v531 = *(_QWORD *)(v688.i64[0] + 152);
        v532 = *(_QWORD *)(v688.i64[0] + 160);
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(v713);
        v533 = *((_QWORD *)&v713[0] + 1);
        **((_QWORD **)&v713[0] + 1) = v531;
        *(_QWORD *)(v533 + 8) = v532;
        *(_QWORD *)&v713[1] = 1;
        v749[0] = (void *)1;
      }
      v534 = *(_QWORD *)(v704.i64[0] - 8);
      if ( v534 )
      {
        v535 = *(char **)(v704.i64[0] - 16);
        v536 = 8 * v534;
        v537 = 0;
        v755[0] = v535;
        do
        {
          v541 = *(_QWORD *)&v535[v537];
          if ( v541 != v491 )
          {
            if ( v541 >= (unsigned __int64)v529 )
              core::panicking::panic_bounds_check::h56740b1198b22635(v541, v529, &off_10196B218);
            if ( *(_QWORD *)(v753.i64[0] + 176 * v541 + 144) != 0x8000000000000000LL )
            {
              v542 = *(_QWORD *)(v753.i64[0] + 176 * v541 + 152);
              v543 = *(_QWORD *)(v753.i64[0] + 176 * v541 + 160);
              if ( v749[0] == *(void **)&v713[0] )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(v713);
              v538 = *((_QWORD *)&v713[0] + 1);
              v539 = (char *)v749[0];
              v540 = 16 * (__int64)v749[0];
              *(_QWORD *)(*((_QWORD *)&v713[0] + 1) + v540) = v542;
              *(_QWORD *)(v538 + v540 + 8) = v543;
              v749[0] = v539 + 1;
              *(_QWORD *)&v713[1] = v539 + 1;
              v529 = v756;
              v535 = (char *)v755[0];
            }
          }
          v537 += 8;
        }
        while ( v536 != v537 );
      }
      v544 = *(char **)&v713[0];
      if ( *((_QWORD *)&v700[10] + 1) == 0x8000000000000000LL )
      {
        v5 = v751;
        v545 = (char *)v749[0];
      }
      else
      {
        v546 = v700[11];
        v547 = v749[0];
        v5 = v751;
        if ( v749[0] == *(void **)&v713[0] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(v713);
        *(_OWORD *)(*((_QWORD *)&v713[0] + 1) + 16LL * (_QWORD)v547) = v546;
        v545 = (char *)v547 + 1;
        *(_QWORD *)&v713[1] = v545;
        v544 = *(char **)&v713[0];
      }
      if ( *(_QWORD *)&v700[6] != 0x8000000000000000LL )
      {
        v548 = *((_QWORD *)&v700[6] + 1);
        v549 = *(_QWORD *)&v700[7];
        if ( v545 == v544 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(v713);
        v550 = *((_QWORD *)&v713[0] + 1);
        v551 = 16LL * (_QWORD)v545;
        *(_QWORD *)(*((_QWORD *)&v713[0] + 1) + v551) = v548;
        *(_QWORD *)(v550 + v551 + 8) = v549;
        *(_QWORD *)&v713[1] = ++v545;
        v544 = *(char **)&v713[0];
      }
      *(_QWORD *)__dst = *((_QWORD *)&v713[0] + 1);
      *(_QWORD *)&__dst[16] = v544;
      *(_QWORD *)&__dst[8] = *((_QWORD *)&v713[0] + 1);
      *(_QWORD *)&__dst[24] = *((_QWORD *)&v713[0] + 1) + 16LL * (_QWORD)v545;
      v552 = (const void *)_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h0fd184a1495b01e2(
                             __dst,
                             v752,
                             &v734);
      v554 = v553;
      if ( *(_QWORD *)&__dst[16] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)__dst, 16LL * *(_QWORD *)&__dst[16], 8);
      v749[0] = *((void **)&v734 + 1);
      v530 = v735;
      if ( v552 )
        goto LABEL_726;
    }
    if ( !v680 )
      goto LABEL_825;
    v555 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v681);
    _RCX = v555 >> 57;
    v557 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v555 >> 57), (__m128i)0LL);
    for ( kk = 0; ; kk += 16 )
    {
      v559 = v754 & v555;
      v560 = v750;
      v561 = _mm_loadu_si128((const __m128i *)(v750 + v559));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v561, v557));
      if ( _R15D )
        break;
LABEL_723:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v561, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_825;
      v555 = v559 + kk + 16;
    }
    *(__m128i *)v755 = v557;
    v688 = v561;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r15d }
      v563 = v559;
      _RCX = -(__int64)(v754 & (v559 + _RCX));
      if ( v530 == *(_QWORD *)(v560 + 48 * _RCX - 32) )
      {
        v564 = v560 + 48 * _RCX;
        v565 = memcmp(v749[0], *(const void **)(v564 - 40), v530);
        v560 = v750;
        if ( !v565 )
          break;
      }
      v566 = _R15D - 1;
      LOWORD(v566) = _R15D & (_R15D - 1);
      v39 = (_WORD)v566 == 0;
      _R15D = v566;
      v559 = v563;
      v5 = v751;
      v557 = _mm_load_si128((const __m128i *)v755);
      v561 = _mm_load_si128(&v688);
      if ( v39 )
        goto LABEL_723;
    }
    v552 = *(const void **)(v564 - 16);
    v554 = *(_QWORD *)(v564 - 8);
    v5 = v751;
LABEL_726:
    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_valid_codex_reasoning_effort::he7efcb1e7f105172(
                             v552,
                             v554)
      || !codexmate_lib::core::relay::codex_catalog::NativeThreadModelCatalog::supports_reasoning::hf70039d15a408170(
            (_QWORD *)v752,
            v749[0],
            v530,
            v552,
            v554) )
    {
LABEL_825:
      *(_QWORD *)&v713[0] = (char *)&v700[1] + 8;
      *((_QWORD *)&v713[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v713[1] = &v734;
      *((_QWORD *)&v713[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dst[8], &unk_1017C2E8D, v713);
      v331 = v756;
      v750 = *(_QWORD *)&__dst[8];
      *(_OWORD *)v749 = *(_OWORD *)&__dst[16];
      *(_QWORD *)&v754 = *(_QWORD *)&__dst[40];
      v752 = *(_QWORD *)&__dst[32];
      v721 = *(_QWORD *)&__dst[56];
      v755[0] = *(void **)&__dst[48];
      v722 = *(_OWORD *)&__dst[64];
      v701 = *(__m128i *)&__dst[80];
      v592 = v748[0];
      v470 = (char *)v706.i64[0];
      if ( (_QWORD)v734 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v734 + 1), v734, 1);
      v332 = 10;
      goto LABEL_762;
    }
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5(
      __dst,
      v554,
      0,
      1,
      1,
      v567,
      v653,
      v654,
      v655[0],
      v655[1]);
    v568 = *(const __m128i **)&__dst[8];
    if ( __dst[0] )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&__dst[8], *(_QWORD *)&__dst[16]);
    v569 = *(__int64 (__fastcall **)())&__dst[16];
    memcpy(*(void **)&__dst[16], v552, v554);
    v707 = v568;
    v708 = v569;
    v709 = (_QWORD *)v554;
    v570 = *(_QWORD *)(v704.i64[0] - 8);
    if ( v570 )
    {
      v571 = *(_QWORD *)(v704.i64[0] - 16);
      v572 = (void *)(8 * v570);
      v573 = 0;
      v341 = v756;
      do
      {
        v574 = *(_QWORD *)(v571 + v573);
        if ( v574 >= (unsigned __int64)v341 )
          core::panicking::panic_bounds_check::h56740b1198b22635(v574, v341, &off_10196B230);
        v575 = v753.i64[0] + 176 * v574;
        v576 = *(_QWORD *)(v575 + 16);
        if ( v576 < 0 )
        {
          v578 = 0;
LABEL_829:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v578, v576);
        }
        v688.i64[0] = v573;
        v704.i64[0] = v571;
        v755[0] = v572;
        v577 = *(const void **)(v753.i64[0] + 176 * v574 + 8);
        if ( v576 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v574, v571, v572, v753.i64[0]);
          v578 = 1;
          v579 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v576, 1);
          if ( !v579 )
            goto LABEL_829;
          v580 = v579;
        }
        else
        {
          v580 = 1;
        }
        memcpy((void *)v580, v577, v576);
        v749[0] = (void *)v580;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v720, v575 + 24);
        v583 = *((_QWORD *)&v742 + 1);
        if ( v742 < 0 )
        {
          v585 = 0;
LABEL_877:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v585, v583);
        }
        v584 = (const void *)v742;
        if ( *((_QWORD *)&v742 + 1) )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v720, v575 + 24, v581, v582);
          v585 = 1;
          v685 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v583, 1);
          if ( !v685 )
            goto LABEL_877;
        }
        else
        {
          v685 = (void *)1;
        }
        memcpy(v685, v584, v583);
        v686 = 0x8000000000000000LL;
        if ( *(_QWORD *)(v575 + 96) != 0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v713, v575 + 96);
          v674 = *((_QWORD *)&v713[0] + 1);
          v686 = *(_QWORD *)&v713[0];
          v665 = *(_QWORD *)&v713[1];
        }
        v687 = 0x8000000000000000LL;
        if ( *(_QWORD *)(v575 + 120) != 0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v713, v575 + 120);
          v675 = *((_QWORD *)&v713[0] + 1);
          v687 = *(_QWORD *)&v713[0];
          v666 = *(_QWORD *)&v713[1];
        }
        v586 = 0x8000000000000000LL;
        if ( *(_QWORD *)(v575 + 144) != 0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v713, v575 + 144);
          v676 = *((_QWORD *)&v713[0] + 1);
          v586 = *(_QWORD *)&v713[0];
          v667 = *(_QWORD *)&v713[1];
        }
        v587 = *(_BYTE *)(v575 + 168);
        v588 = *(_BYTE *)(v575 + 169);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v744, &v734);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v713, &v707);
        *(_QWORD *)__dst = v576;
        *(void **)&__dst[8] = v749[0];
        *(_QWORD *)&__dst[16] = v576;
        *(_OWORD *)&__dst[32] = *(_OWORD *)&v720[8];
        *(_QWORD *)&__dst[24] = *(_QWORD *)v720;
        *(_QWORD *)&__dst[48] = v583;
        *(_QWORD *)&__dst[56] = v685;
        *(_QWORD *)&__dst[64] = v583;
        *(_QWORD *)&__dst[120] = v686;
        *(_QWORD *)&__dst[128] = v674;
        *(_QWORD *)&__dst[136] = v665;
        *(_QWORD *)&__dst[144] = v687;
        *(_QWORD *)&__dst[152] = v675;
        *(_QWORD *)&__dst[160] = v666;
        *(_QWORD *)&__dst[168] = v586;
        *(_QWORD *)&__dst[176] = v676;
        *(_QWORD *)&__dst[184] = v667;
        __dst[192] = v587;
        __dst[193] = v588;
        *(_QWORD *)&__dst[88] = *(_QWORD *)&v744[16];
        *(_OWORD *)&__dst[72] = *(_OWORD *)v744;
        *(_QWORD *)&__dst[112] = *(_QWORD *)&v713[1];
        *(_OWORD *)&__dst[96] = v713[0];
        v589 = v727;
        if ( v727 == (char *)v725 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h40e22842a54b8c48(&v725);
        memcpy((void *)(v726 + 200LL * (_QWORD)v589), __dst, 0xC8u);
        v727 = v589 + 1;
        v573 = v688.i64[0] + 8;
        v572 = v755[0];
        v5 = v751;
        v341 = v756;
        v473 = (char *)v706.i64[0];
        v571 = v704.i64[0];
      }
      while ( v755[0] != (void *)(v688.i64[0] + 8) );
    }
    else
    {
      v341 = v756;
      v473 = (char *)v706.i64[0];
    }
    memcpy(__dst, v700, 0x120u);
    *(_QWORD *)&__dst[304] = v735;
    *(_OWORD *)&__dst[288] = v734;
    *(_QWORD *)&__dst[312] = v707;
    *(_QWORD *)&__dst[320] = v708;
    *(_QWORD *)&__dst[328] = v709;
    __dst[336] = v662 != 0x8000000000000000LL;
    v590 = v730.i64[1];
    if ( v730.i64[1] == v729 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h73430bb958e0170b(&v729);
    memcpy((void *)(v730.i64[0] + 344 * v590), __dst, 0x158u);
    v730.i64[1] = v590 + 1;
    if ( v748[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v742, v748[0], 1);
    v471 = v702 - 24;
    v472 = (char *)v723[0] + 24;
    v469 = v712[0];
    v434 = &v742;
    if ( v473 == v712[0] )
    {
      v335 = v757;
      goto LABEL_836;
    }
  }
  v734 = v742;
  v707 = (const __m128i *)&v734;
  v708 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
  alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)v713 + 8, &unk_1017C2EEB, &v707);
  v750 = *((_QWORD *)&v713[0] + 1);
  *(__m128i *)v749 = _mm_loadu_si128((const __m128i *)&v713[1]);
  *(_QWORD *)&v754 = *((_QWORD *)&v713[2] + 1);
  v752 = *(_QWORD *)&v713[2];
  *(_QWORD *)v744 = *((_QWORD *)&v713[3] + 1);
  v755[0] = *(void **)&v713[3];
  *(_OWORD *)&v744[8] = v713[4];
  v745 = v713[5];
  *(_OWORD *)&v720[8] = v713[4];
  *(_QWORD *)v720 = *((_QWORD *)&v713[3] + 1);
  v710 = v713[5];
  v722 = v713[4];
  v721 = *((_QWORD *)&v713[3] + 1);
  v701 = (__m128i)v713[5];
  v332 = 10;
  v331 = v756;
  v592 = v748[0];
  if ( v748[0] )
    goto LABEL_763;
LABEL_764:
  v39 = v712[0] == v470;
  v593 = v723[0];
  if ( !v39 )
  {
    v594 = v702 / 0x18;
    do
    {
      v595 = *(v593 - 1);
      if ( v595 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v593, v595, 1);
      v593 += 3;
      --v594;
    }
    while ( v594 );
  }
  if ( v728.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v747, 24 * v728.i64[0], 8);
  v596 = v726;
  for ( mm = v727 + 1; mm != (char *)1; --mm )
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionDbUpdate$GT$::hafa40bb0706d30c5();
    v596 += 200;
  }
  if ( v725 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v726, 200 * v725, 8);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h899427c649773817(&v729);
  v249 = (signed __int64)v755[0];
  if ( v729 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v730.i64[0], 344 * v729, 8);
  v327 = v682;
  if ( v682 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v683, v682, 1);
  v325 = *(_QWORD *)v705;
LABEL_781:
  if ( v325 )
  {
    v327 = (char *)v325;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v705[8], v325, 1);
  }
  if ( !BYTE8(v754) )
  {
LABEL_784:
    HIDWORD(_RAX) = HIDWORD(__s2[0]);
    if ( *((_QWORD *)&__s2[0] + 1) )
    {
      v755[0] = *((void **)&__s2[0] + 1);
      v753.i64[0] = v332;
      v599 = v249;
      v600 = *((_QWORD *)&__s2[1] + 1);
      if ( *((_QWORD *)&__s2[1] + 1) )
      {
        v601 = *(_QWORD *)&__s2[0];
        _EBX = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&__s2[0]));
        v603 = (const __m128i *)(*(_QWORD *)&__s2[0] + 16LL);
        do
        {
          if ( !(_WORD)_EBX )
          {
            do
            {
              v604 = _mm_movemask_epi8(_mm_load_si128(v603));
              v601 -= 384;
              ++v603;
            }
            while ( v604 == 0xFFFF );
            _EBX = ~v604;
          }
          __asm { tzcnt   eax, ebx }
          v605 = -3 * _RAX;
          v606 = *(_QWORD *)(v601 + 8 * v605 - 24);
          if ( v606 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v601 + 8 * v605 - 16), v606, 1);
          --v600;
          _RAX = _EBX & (unsigned int)(_EBX - 1);
          _EBX &= _EBX - 1;
        }
        while ( v600 );
      }
      v607 = (24 * (__int64)v755[0] + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v327 = (char *)v755[0] + v607 + 17;
      v249 = v599;
      if ( (char *)v755[0] + v607 != (void *)-17LL )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__s2[0] - v607, v327, 16);
      v5 = v751;
      v331 = v756;
      v332 = v753.i64[0];
    }
  }
  v753.i64[0] = v332;
  v755[0] = (void *)v249;
  HIDWORD(_RAX) = v694.i32[1];
  v335 = v757;
  if ( v694.i64[0] )
  {
    *((_QWORD *)&v754 + 1) = v694.i64[0];
    v609 = v695;
    if ( v695 )
    {
      v610 = v693;
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v693));
      v612 = v693 + 1;
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v613 = _mm_movemask_epi8(_mm_load_si128(v612));
            v610 -= 48;
            ++v612;
          }
          while ( v613 == 0xFFFF );
          _EBX = ~v613;
        }
        __asm { tzcnt   eax, ebx }
        v614 = &v610[-3 * _RAX];
        v615 = v614[-3].i64[0];
        if ( v615 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v614[-3].i64[1], v615, 1);
        v616 = v614[-2].i64[1];
        if ( v616 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v614[-1].i64[0], v616, 1);
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
        --v609;
      }
      while ( v609 );
    }
    v327 = (char *)(49LL * *((_QWORD *)&v754 + 1) + 65);
    v5 = v751;
    v335 = v757;
    v331 = v756;
    if ( 49LL * *((_QWORD *)&v754 + 1) != -65 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v693[-3 * *((_QWORD *)&v754 + 1) - 3], v327, 16);
  }
  core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$$GT$::h181c919261f422fc(
    __s1,
    v327,
    v328,
    v329,
    v330);
  HIDWORD(_RAX) = *(_DWORD *)&v737[12];
  if ( *(_QWORD *)&v737[8] )
  {
    *((_QWORD *)&v754 + 1) = *(_QWORD *)&v737[8];
    v617 = *(_QWORD *)&v737[24];
    if ( *(_QWORD *)&v737[24] )
    {
      v618 = *(_QWORD *)v737;
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v737));
      v620 = (const __m128i *)(*(_QWORD *)v737 + 16LL);
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v621 = _mm_movemask_epi8(_mm_load_si128(v620));
            v618 -= 768;
            ++v620;
          }
          while ( v621 == 0xFFFF );
          _EBX = ~v621;
        }
        __asm { tzcnt   eax, ebx }
        v622 = v618 - 48 * _RAX;
        v623 = *(_QWORD *)(v622 - 48);
        if ( v623 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v622 - 40), v623, 1);
        v624 = *(_QWORD *)(v622 - 24);
        if ( v624 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v622 - 16), 8 * v624, 8);
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
        --v617;
      }
      while ( v617 );
    }
    _RAX = 48LL * *((_QWORD *)&v754 + 1);
    v327 = (char *)(49LL * *((_QWORD *)&v754 + 1) + 65);
    v5 = v751;
    v335 = v757;
    v331 = v756;
    if ( 49LL * *((_QWORD *)&v754 + 1) != -65 )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                          *(_QWORD *)v737 - _RAX - 48,
                                          v327,
                                          16) >> 32;
  }
  v625 = v669.i64[0];
  v626 = (char *)v331 + 1;
  v627 = v669.i64[0];
  while ( v626 != (char *)1 )
  {
    --v626;
    HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h657639c742bb6a00(
                                        v627,
                                        v327) >> 32;
    v627 += 176;
  }
LABEL_870:
  if ( v335 )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v625, 176LL * (_QWORD)v335, 8) >> 32;
  v17 = (const __m128i *)v750;
  v30 = *((_QWORD *)&v714 + 1);
  v757 = (const __m128i *)v750;
  if ( *((_QWORD *)&v714 + 1) )
  {
LABEL_12:
    v31 = *(_QWORD *)&v715[8];
    if ( *(_QWORD *)&v715[8] )
    {
      v32 = v714;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v714));
      v34 = (const __m128i *)(v714 + 16);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v35 = _mm_movemask_epi8(_mm_load_si128(v34));
            v32 -= 384;
            ++v34;
          }
          while ( v35 == 0xFFFF );
          _R15D = ~v35;
        }
        __asm { tzcnt   eax, r15d }
        v36 = -3 * _RAX;
        v37 = *(_QWORD *)(v32 + 8 * v36 - 24);
        if ( v37 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1);
        --v31;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v31 );
    }
    _RAX = (24 * v30 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v38 = _RAX + v30;
    v39 = v38 == -17;
    v40 = v38 + 17;
    v5 = v751;
    v17 = v757;
    if ( !v39 )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v714 - _RAX, v40, 16) >> 32;
  }
LABEL_22:
  v41 = *((_QWORD *)&v716 + 1);
  if ( *((_QWORD *)&v716 + 1) )
  {
    v42 = v718;
    if ( v718 )
    {
      v43 = v716;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v716));
      v45 = (const __m128i *)(v716 + 16);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v46 = _mm_movemask_epi8(_mm_load_si128(v45));
            v43 -= 384;
            ++v45;
          }
          while ( v46 == 0xFFFF );
          _R15D = ~v46;
        }
        __asm { tzcnt   eax, r15d }
        v47 = -3 * _RAX;
        v48 = *(_QWORD *)(v43 + 8 * v47 - 24);
        if ( v48 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v43 + 8 * v47 - 16), v48, 1);
        --v42;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v42 );
    }
    v49 = (24 * v41 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v50 = v49 + v41;
    v39 = v50 == -17;
    v51 = v50 + 17;
    v5 = v751;
    v17 = v757;
    if ( !v39 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v716 - v49, v51, 16);
  }
  v670 = v721;
  v671 = v722;
  v52 = v753.i64[0];
  if ( v753.i64[0] == 11 )
  {
    v698 = v670;
    v699 = v671;
    v693 = v17;
    v53 = _mm_load_si128((const __m128i *)v749);
    v694 = v53;
    v695 = v752;
    v54 = v754;
    v696 = v754;
    v697 = (__int64)v755[0];
    if ( !_mm_extract_epi64(v53, 1) )
    {
      codexmate_lib::core::relay::codex_diagnostic::orphan_provider_fix_ids::h1efc66fdabad2717(
        v713,
        v754,
        v16,
        (__int64)v755[0]);
      *(_QWORD *)&v700[0] = 0;
      *((_QWORD *)&v700[0] + 1) = 8;
      *(_QWORD *)&v700[1] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v713, v54, v127, v128);
      v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v129 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v132 = (_QWORD *)v129;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8, v130, v131);
      v133 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
      if ( !v133 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
      *(_QWORD *)(v133 + 24) = 0xBAE7BBB8E4BF84E5LL;
      *(_QWORD *)(v133 + 16) = 0xA4ADE5849AE7A1AELL;
      *(_QWORD *)(v133 + 8) = 0xE7A58EE681A6E880LL;
      *(_QWORD *)v133 = 0x9CE9899CE6A1B2E6LL;
      *(_DWORD *)(v133 + 32) = -1951864897;
      *v132 = 36;
      v132[1] = v133;
      v132[2] = 36;
      v134 = *(_QWORD *)&v713[1];
      *(_QWORD *)&__dst[16] = *(_QWORD *)&v713[1];
      v135 = v713[0];
      *(_OWORD *)__dst = v713[0];
      v136 = v700[0];
      *(_OWORD *)&__dst[24] = v700[0];
      *(_QWORD *)&__dst[40] = *(_QWORD *)&v700[1];
      v137 = (__int64 *)v711;
      v711[3].i64[0] = *(_QWORD *)&v700[1];
      *((_OWORD *)v137 + 2) = v136;
      v137[3] = v134;
      *(_OWORD *)(v137 + 1) = v135;
      v137[7] = 1;
      v137[8] = (__int64)v132;
      v137[9] = 1;
      *v137 = 11;
      return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionPlan$GT$::h02e5454eb150e2f1(&v693);
    }
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hab0e223ee8e4d893(
      &v729,
      v754,
      v754 + 200 * (__int64)v755[0]);
    if ( v730.i64[1] >= 2uLL )
    {
      v461 = v730.i64[0];
      if ( v730.i64[1] >= 0x15uLL )
      {
        core::slice::sort::stable::driftsort_main::hfea424fbff2bc733(v730.i64[0], v730.i64[1], &v710);
      }
      else
      {
        v462 = 24 * v730.i64[1];
        v463 = 24;
        do
        {
          core::slice::sort::shared::smallsort::insert_tail::h80e3fbe26425d585(v461, v461 + v463);
          v463 += 24;
        }
        while ( v462 != v463 );
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h2f74b7d6142fa00d(&v729);
    v740.i64[0] = v730.i64[1];
    v55 = v730.i64[0];
    v659[0] = v730.i64[0];
    v756 = (_QWORD *)(v730.i64[0] + 24 * v730.i64[1]);
    v659[1] = v756;
    v659[2] = v5;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h56c1758085b98ecb(
      &v725,
      v659);
    v56 = v726;
    v57 = v727;
    std::path::Path::_join::hb1a495d4f06b13b8(&v734, v5[73], v5[74], "thread-provider-adoptionsversion", 25);
    *(_WORD *)__dst = 511;
    __dst[2] = 1;
    v58 = *((void **)&v734 + 1);
    v59 = v735;
    v60 = std::fs::DirBuilder::_create::h099c6e2853c95452(__dst, *((_QWORD *)&v734 + 1), v735);
    v753.i64[0] = v55;
    if ( v60 )
    {
      *(_QWORD *)&v713[0] = v60;
      *(_QWORD *)&v700[0] = v713;
      *((_QWORD *)&v700[0] + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C3936, v700);
      v749[0] = *(void **)&__dst[8];
      v757 = *(const __m128i **)__dst;
      v61 = *(_QWORD *)&__dst[16];
      if ( (v713[0] & 3) == 1 )
      {
        v62 = *(_QWORD *)&__dst[16];
        v63 = *(_QWORD *)&v713[0] - 1LL;
        v64 = *(_QWORD *)(*(_QWORD *)&v713[0] - 1LL);
        v65 = *(_QWORD *)(*(_QWORD *)&v713[0] + 7LL);
        if ( *(_QWORD *)v65 )
          (*(void (__fastcall **)(__int64))v65)(v64);
        v66 = *(_QWORD *)(v65 + 8);
        if ( v66 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v66, *(_QWORD *)(v65 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24, 8);
        v61 = v62;
      }
      v67 = 10;
      goto LABEL_44;
    }
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst);
    v140 = (*(int *)__dst >> 13) - 1;
    v141 = 0;
    if ( *(int *)__dst >> 13 <= 0 )
    {
      v142 = (1 - (*(int *)__dst >> 13)) / 0x190u + 1;
      v140 += 400 * v142;
      v141 = -146097 * v142;
    }
    *(_QWORD *)&v745 = 1000
                     * (*(unsigned int *)&__dst[4]
                      + 86400LL
                      * (((v140 / 100) >> 2)
                       + ((1461 * v140) >> 2)
                       + v141
                       + ((*(_DWORD *)__dst >> 4) & 0x1FF)
                       - v140 / 100
                       - 719163))
                     + *(unsigned int *)&__dst[8] / 0xF4240uLL;
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(__dst);
    v700[0] = *(_OWORD *)__dst;
    *(_QWORD *)__dst = &v745;
    *(_QWORD *)&__dst[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
    *(_QWORD *)&__dst[16] = v700;
    *(_QWORD *)&__dst[24] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v720, &unk_1017C392B, __dst);
    v143 = *(_QWORD *)&v720[8];
    std::path::Path::_join::hb1a495d4f06b13b8(&v707, v58, v59, *(_QWORD *)&v720[8], *(_QWORD *)&v720[16]);
    if ( *(_QWORD *)v720 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, *(_QWORD *)v720, 1);
    *(_QWORD *)&v689 = v694.i64[0];
    *((_QWORD *)&v689 + 1) = v694.i64[0] + 344 * v694.i64[1];
    v690 = &v693;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h91eded2bc256d38f(
      v744,
      &v689);
    v757 = (const __m128i *)v59;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h61981781b7744360(
      &v716,
      v56,
      v56 + 48LL * (_QWORD)v57);
    *(_QWORD *)&v714 = 0;
    *(_QWORD *)v715 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v716, v56, v144, v145);
    v146 = 7;
    v147 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v147 )
      goto LABEL_625;
    *(_DWORD *)((char *)v147 + 3) = 1852795251;
    *v147 = 1936876918;
    *(_QWORD *)v737 = 7;
    *(_QWORD *)&v737[8] = v147;
    *(_QWORD *)&v737[16] = 7;
    __dst[0] = 2;
    *(_QWORD *)&__dst[8] = 0;
    *(_QWORD *)&__dst[16] = 1;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v700, &v714, v737, __dst);
    if ( LOBYTE(v700[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v700);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, &v714, v148, v149);
    v146 = 6;
    v150 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v150 )
      goto LABEL_625;
    *(_WORD *)(v150 + 4) = 29557;
    *(_DWORD *)v150 = 1952543859;
    *(_QWORD *)v737 = 6;
    *(_QWORD *)&v737[8] = v150;
    *(_QWORD *)&v737[16] = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v151, v152);
    v153 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
    if ( !v153 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
    *v153 = 0x6465726170657270LL;
    __dst[0] = 3;
    *(_QWORD *)&__dst[8] = 8;
    *(_QWORD *)&__dst[16] = v153;
    *(_QWORD *)&__dst[24] = 8;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v700, &v714, v737, __dst);
    if ( LOBYTE(v700[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v700);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, &v714, v154, v155);
    v146 = 11;
    v156 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v156 )
      goto LABEL_625;
    qmemcpy(v156, "createdAtMs", 11);
    *(_QWORD *)v737 = 11;
    *(_QWORD *)&v737[8] = v156;
    *(_QWORD *)&v737[16] = 11;
    __dst[0] = 2;
    *(_QWORD *)&__dst[8] = (unsigned __int64)v745 >> 63;
    *(_QWORD *)&__dst[16] = v745;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v700, &v714, v737, __dst);
    if ( LOBYTE(v700[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v700);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, &v714, v157, v158);
    v146 = 17;
    v159 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v159 )
      goto LABEL_625;
    qmemcpy(v159, "permanentAdoption", 17);
    *(_QWORD *)v737 = 17;
    *(_QWORD *)&v737[8] = v159;
    *(_QWORD *)&v737[16] = 17;
    *(_WORD *)__dst = 257;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v700, &v714, v737, __dst);
    if ( LOBYTE(v700[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v700);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, &v714, v160, v161);
    v146 = 13;
    v162 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v162 )
      goto LABEL_625;
    qmemcpy(v162, "fallbackModel", 13);
    *(_QWORD *)v737 = 13;
    *(_QWORD *)&v737[8] = v162;
    *(_QWORD *)&v737[16] = 13;
    v165 = *((_QWORD *)&v699 + 1);
    v755[0] = v58;
    if ( v699 < 0 )
    {
      v166 = 0;
      goto LABEL_145;
    }
    v218 = (const void *)v699;
    if ( *((_QWORD *)&v699 + 1) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1, v163, v164);
      v166 = 1;
      v219 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v165, 1);
      if ( !v219 )
LABEL_145:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v166, v165);
      v220 = v219;
    }
    else
    {
      v220 = 1;
    }
    memcpy((void *)v220, v218, v165);
    __dst[0] = 3;
    *(_QWORD *)&__dst[8] = v165;
    *(_QWORD *)&__dst[16] = v220;
    *(_QWORD *)&__dst[24] = v165;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v700, &v714, v737, __dst);
    v58 = v755[0];
    if ( LOBYTE(v700[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v700);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, &v714, v222, v223);
    v146 = 15;
    v224 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
    if ( !v224 )
      goto LABEL_625;
    qmemcpy(v224, "databaseBackups", 15);
    *(_QWORD *)v737 = 15;
    *(_QWORD *)&v737[8] = v224;
    *(_QWORD *)&v737[16] = 15;
    serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(__dst, &v716);
    if ( __dst[0] == 6 )
    {
      *(_QWORD *)&v700[0] = *(_QWORD *)&__dst[8];
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "called `Result::unwrap()` on an `Err` valueError2.10.3",
        43,
        v700,
        &off_10196B8F0,
        &off_10196B3E0);
    }
    v700[1] = *(_OWORD *)&__dst[16];
    v700[0] = *(_OWORD *)__dst;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(__dst, &v714, v737, v700);
    if ( __dst[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(__dst);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &v714, v225, v226);
    v146 = 7;
    v227 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v227 )
LABEL_625:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v146);
    *(_DWORD *)((char *)v227 + 3) = 1935958373;
    *v227 = 1701996660;
    *(_QWORD *)v737 = 7;
    *(_QWORD *)&v737[8] = v227;
    *(_QWORD *)&v737[16] = 7;
    serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(__dst, v744);
    if ( __dst[0] == 6 )
    {
      *(_QWORD *)&v700[0] = *(_QWORD *)&__dst[8];
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "called `Result::unwrap()` on an `Err` valueError2.10.3",
        43,
        v700,
        &off_10196B8F0,
        &off_10196B3E0);
    }
    v700[1] = *(_OWORD *)&__dst[16];
    v700[0] = *(_OWORD *)__dst;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(__dst, &v714, v737, v700);
    if ( __dst[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(__dst);
    *(_OWORD *)((char *)v713 + 8) = v714;
    *((_QWORD *)&v713[1] + 1) = *(_QWORD *)v715;
    LOBYTE(v713[0]) = 5;
    v228 = v708;
    v61 = (__int64)v709;
    v749[0] = v708;
    codexmate_lib::core::relay::codex_diagnostic::write_orphan_thread_adoption_recovery_file::h68ccfd177436587f(
      __dst,
      v708,
      v709,
      v713);
    v67 = *(_QWORD *)__dst;
    if ( *(_QWORD *)__dst == 11 )
    {
      std::sys::fs::read_dir::h768dda1fe4336014(__dst, v58, v757);
      v230 = *(_QWORD *)__dst;
      if ( __dst[8] == 2 )
      {
        if ( (__dst[0] & 3) == 1 )
        {
          v231 = v61;
          v232 = *(_QWORD *)__dst - 1LL;
          v233 = *(_QWORD *)(*(_QWORD *)__dst - 1LL);
          v234 = *(_QWORD *)(*(_QWORD *)__dst + 7LL);
          if ( *(_QWORD *)v234 )
            (*(void (__fastcall **)(_QWORD, _QWORD))v234)(*(_QWORD *)(*(_QWORD *)__dst - 1LL), *(_QWORD *)__dst);
          v235 = *(_QWORD *)(v234 + 8);
          if ( v235 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233, v235, *(_QWORD *)(v234 + 16));
          v230 = 24;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, 24, 8);
          v61 = v231;
        }
      }
      else
      {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8c6be142584a926c(
          v700,
          *(_QWORD *)__dst,
          __dst[8]);
        v337 = *(_QWORD *)&v700[1];
        if ( *(_QWORD *)&v700[1] >= 0x15u )
        {
          v747 = (char *)v61;
          v345 = *((_QWORD *)&v700[0] + 1);
          v230 = *(_QWORD *)&v700[1];
          core::slice::sort::stable::driftsort_main::hfea424fbff2bc733(
            *((_QWORD *)&v700[0] + 1),
            *(_QWORD *)&v700[1],
            &v710);
          *(_QWORD *)__dst = v345;
          *(_QWORD *)&__dst[16] = *(_QWORD *)&v700[0];
          v752 = v345 + 24 * v337;
          *(_QWORD *)&__dst[24] = v752;
          v757 = (const __m128i *)(v337 - 21);
          v346 = v345 + 24;
          while ( 1 )
          {
            *(_QWORD *)&v754 = v345;
            v347 = *(_QWORD *)(v346 - 24);
            if ( v347 == 0x8000000000000000LL )
              break;
            v348 = v346 - 24;
            v349 = *(void **)(v346 - 24 + 8);
            v230 = *(_QWORD *)(v346 - 24 + 16);
            v350 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v349, v230);
            if ( v347 )
            {
              v230 = v347;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v349, v347, 1);
            }
            if ( (v350 & 3) == 1 )
            {
              v352 = v350 - 1;
              v353 = *(_QWORD *)(v350 - 1);
              v354 = *(_QWORD *)(v350 + 7);
              if ( *(_QWORD *)v354 )
                (*(void (__fastcall **)(__int64))v354)(v353);
              v355 = *(_QWORD *)(v354 + 8);
              if ( v355 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v353, v355, *(_QWORD *)(v354 + 16));
              v230 = 24;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v352, 24, 8);
              v351 = v757 == nullptr;
              v757 = (const __m128i *)((char *)v757 - 1);
              if ( v351 )
              {
LABEL_411:
                v346 = v754 + 24;
                v757 = nullptr;
                v58 = v755[0];
                break;
              }
            }
            else
            {
              v351 = v757 == nullptr;
              v757 = (const __m128i *)((char *)v757 - 1);
              if ( v351 )
                goto LABEL_411;
            }
            v346 += 24LL;
            v345 = v348 + 24;
            v58 = v755[0];
            if ( v348 + 24 == v752 )
            {
              v346 = v752;
              break;
            }
          }
          *(_QWORD *)&__dst[32] = v757;
          *(_QWORD *)&__dst[8] = v346;
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6d643a407793f71(__dst);
          v61 = (__int64)v747;
        }
        else
        {
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31defe952ca235e4(v700);
          if ( *(_QWORD *)&v700[0] )
          {
            v230 = 24LL * *(_QWORD *)&v700[0];
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v700[0] + 1), 24LL * *(_QWORD *)&v700[0], 8);
          }
        }
      }
      v757 = v707;
      v373 = *((_QWORD *)&v713[0] + 1);
      v733[0] = v713[0];
      v733[1] = v713[1];
      v374 = *((_QWORD *)&v716 + 1);
      for ( nn = v717 + 1; nn != 1; --nn )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v374, v230, v229, v373);
        v374 += 32;
      }
      v376 = v716;
      if ( (_QWORD)v716 )
      {
        v376 = 32 * v716;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v716 + 1), 32 * v716, 8);
      }
      v377 = *(_QWORD *)&v744[8];
      for ( i1 = *(_QWORD *)&v744[16] + 1LL; i1 != 1; --i1 )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v377, v376, v229, v373);
        v377 += 32;
      }
      if ( *(_QWORD *)v744 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v744[8], 32LL * *(_QWORD *)v744, 8);
      v67 = 11;
    }
    else
    {
      v757 = *(const __m128i **)&__dst[8];
      v236 = *(void **)&__dst[16];
      v237 = *(_QWORD *)&__dst[24];
      v733[0] = *(_OWORD *)&__dst[32];
      v733[1] = *(_OWORD *)&__dst[48];
      __s2[0] = *(_OWORD *)&__dst[64];
      __s2[1] = *(_OWORD *)&__dst[80];
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v713);
      v240 = *((_QWORD *)&v716 + 1);
      for ( i2 = v717 + 1; i2 != 1; --i2 )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v240, v228, v238, v239);
        v240 += 32;
      }
      v242 = v716;
      if ( (_QWORD)v716 )
      {
        v242 = 32 * v716;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v716 + 1), 32 * v716, 8);
      }
      v243 = *(_QWORD *)&v744[8];
      for ( i3 = *(_QWORD *)&v744[16] + 1LL; i3 != 1; --i3 )
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v243, v242, v238, v239);
        v243 += 32;
      }
      if ( *(_QWORD *)v744 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v744[8], 32LL * *(_QWORD *)v744, 8);
      if ( v707 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v749[0], v707, 1);
      v749[0] = v236;
      v61 = v237;
      v58 = v755[0];
    }
LABEL_44:
    if ( (_QWORD)v734 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v734, 1);
    *(_OWORD *)__s1 = v733[0];
    *(_OWORD *)&__s1[16] = v733[1];
    if ( (_DWORD)v67 != 11 )
    {
      v138 = (__int64 *)v711;
      v711[5] = (__m128i)__s2[1];
      *((_OWORD *)v138 + 4) = __s2[0];
      v138[1] = (__int64)v757;
      v138[2] = (__int64)v749[0];
      v138[3] = v61;
      v139 = *(_QWORD *)&__s1[8];
      v138[4] = *(_QWORD *)__s1;
      v138[5] = v139;
      v138[6] = *(_QWORD *)&__s1[16];
      v138[7] = *(_QWORD *)&__s1[24];
      *v138 = v67;
      goto LABEL_544;
    }
    v747 = (char *)v61;
    v691 = *(_BYTE **)&__s1[24];
    v690 = *(const __m128i ***)&__s1[16];
    v689 = *(_OWORD *)__s1;
    v741 = nullptr;
    v742 = 8u;
    if ( v694.i64[1] )
    {
      v68 = (_QWORD *)v694.i64[0];
      v69 = 344 * v694.i64[1];
      do
      {
        codexmate_lib::core::relay::codex_thread_visibility::apply_thread_metadata_rollout_adoption::hbbb470d2020894a4(
          (unsigned int)__src,
          (_DWORD)v68,
          (unsigned int)"openai",
          6,
          v68[37],
          v68[38],
          v68[40],
          v68[41]);
        if ( !__OFSUB__(-__src[0], 1) )
        {
          if ( __src[0] == 0x8000000000000001LL )
          {
            qmemcpy(v733, &__src[1], sizeof(v733));
            codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h6dbf5b1e432916a7(
              v713,
              v696,
              v697,
              8,
              0,
              v742,
              *((__int64 *)&v742 + 1));
            *(_QWORD *)&v700[0] = 0;
            *((_QWORD *)&v700[0] + 1) = 1;
            *(_QWORD *)&v700[1] = 0;
            *(_QWORD *)&__dst[16] = 1610612768;
            *(_QWORD *)__dst = v700;
            *(_QWORD *)&__dst[8] = &anon_7245a3145add9b93f83b0a9aa358a664_1177;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                    v733,
                                    __dst) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `R"
                "esult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
                55,
                &v710,
                &anon_7245a3145add9b93f83b0a9aa358a664_1194,
                &anon_7245a3145add9b93f83b0a9aa358a664_1180);
            v221 = v700[0];
            codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h9d2b56b357189005(
              (__int64)v749[0],
              (__int64)v747,
              (__int64)&v689,
              &unk_1015E3682,
              0xBu,
              *((const void **)&v700[0] + 1),
              *(__int64 *)&v700[1]);
            if ( (_QWORD)v221 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v221 + 1), v221, 1);
            qmemcpy(__dst, v733, 0x60u);
            codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::h9362363f19a5afff(
              v700,
              __dst,
              v713);
            qmemcpy(v711, v700, 0x60u);
            goto LABEL_537;
          }
          v70 = *((_QWORD *)&v742 + 1);
          if ( *((void **)&v742 + 1) == v741 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb07163da1c64f034(&v741);
          memcpy((void *)(v742 + 144 * v70), __src, 0x90u);
          *((_QWORD *)&v742 + 1) = v70 + 1;
        }
        v68 += 43;
        v69 -= 344;
      }
      while ( v69 );
    }
    *(_QWORD *)&v745 = 0;
    *((_QWORD *)&v745 + 1) = 8;
    v746 = 0;
    v668 = 0;
    v167 = v753.i64[0];
    if ( v740.i64[0] )
    {
      v740.i64[0] = 0x8000000000000016LL;
      v755[0] = (void *)0x7FFFFFFFFFFFFFFFLL;
      while ( 1 )
      {
        v168 = *(_QWORD *)(v167 + 8);
        v753.i64[0] = v167;
        v169 = *(_QWORD *)(v167 + 16);
        v170 = v696;
        v171 = v697;
        rusqlite::Connection::open_with_flags::hd1c0b64fdb0a2248(__dst, v168, v169, 32838);
        if ( __dst[104] == 3 )
        {
          v363 = _mm_load_si128((const __m128i *)__dst);
          v364 = _mm_load_si128((const __m128i *)&__dst[16]);
          v365 = _mm_load_si128((const __m128i *)&__dst[32]);
          v713[3] = *(_OWORD *)&__dst[48];
          v713[2] = v365;
          v713[1] = v364;
          v713[0] = v363;
          *(_QWORD *)&v714 = v168;
          *((_QWORD *)&v714 + 1) = v169;
          *(_QWORD *)&v733[0] = &v714;
          *((_QWORD *)&v733[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v733[1] = v713;
          *((_QWORD *)&v733[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2F8E, v733);
          v366 = *(_QWORD *)__s1;
          v367 = __s1[8];
          *(_QWORD *)&v716 = *(_QWORD *)&__s1[9];
          *(_QWORD *)((char *)&v716 + 7) = *(_QWORD *)&__s1[16];
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v713);
          *(_QWORD *)v744 = v716;
          *(_QWORD *)&v744[7] = *(_QWORD *)((char *)&v716 + 7);
          *(_QWORD *)&__s2[0] = *(_QWORD *)v744;
          *(_QWORD *)((char *)__s2 + 7) = *(_QWORD *)((char *)&v716 + 7);
          goto LABEL_440;
        }
        *(_QWORD *)((char *)&v716 + 7) = *(_QWORD *)&__dst[24];
        *(_QWORD *)&v716 = *(_QWORD *)&__dst[17];
        v172 = _mm_load_si128((const __m128i *)&__dst[48]);
        v173 = _mm_load_si128((const __m128i *)&__dst[64]);
        v700[5] = *(_OWORD *)&__dst[80];
        v700[4] = v173;
        v700[3] = v172;
        v700[2] = *(_OWORD *)&__dst[32];
        HIDWORD(v700[6]) = *(_DWORD *)&__dst[108];
        *(_DWORD *)((char *)&v700[6] + 9) = *(_DWORD *)&__dst[105];
        v53 = _mm_load_si128((const __m128i *)__dst);
        *(_QWORD *)&v744[7] = *(_QWORD *)((char *)&v716 + 7);
        *(_QWORD *)v744 = *(_QWORD *)&__dst[17];
        LOBYTE(v700[1]) = __dst[16];
        *((_QWORD *)&v700[1] + 1) = *(_QWORD *)&v744[7];
        *(_QWORD *)((char *)&v700[1] + 1) = *(_QWORD *)&__dst[17];
        v700[0] = v53;
        *(_QWORD *)&v700[6] = *(_QWORD *)&__dst[96];
        BYTE8(v700[6]) = __dst[104];
        rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v713, v700, 5, 0);
        if ( *(_QWORD *)&v713[0] != v740.i64[0] )
          break;
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
          __dst,
          v700,
          (&off_10196C458)[BYTE8(v700[6])],
          qword_1015E4C08[BYTE8(v700[6])]);
        if ( *(_QWORD *)__dst != v740.i64[0] )
        {
          *((_QWORD *)&v713[3] + 1) = *(_QWORD *)&__dst[56];
          *(_OWORD *)((char *)&v713[2] + 9) = *(_OWORD *)&__dst[41];
          *(_OWORD *)((char *)&v713[1] + 9) = *(_OWORD *)&__dst[25];
          *(_QWORD *)((char *)&v713[1] + 1) = *(_QWORD *)&__dst[17];
          v713[0] = *(_OWORD *)__dst;
          LOBYTE(v713[1]) = __dst[16];
          *(_QWORD *)__s1 = v168;
          *(_QWORD *)&__s1[8] = v169;
          *(_QWORD *)__dst = __s1;
          *(_QWORD *)&__dst[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&__dst[16] = v713;
          *(_QWORD *)&__dst[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v733, &unk_1017C2F61, __dst);
          v366 = *(_QWORD *)&v733[0];
          v367 = BYTE8(v733[0]);
          *(_QWORD *)__dst = *(_QWORD *)((char *)v733 + 9);
          *(_QWORD *)&__dst[7] = *(_QWORD *)&v733[1];
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v713);
          memcpy(__s2, __dst, 0x4Fu);
          goto LABEL_439;
        }
        v752 = v753.i64[0] + 24;
        v174 = v170 + 200 * v171;
        v175 = 0;
LABEL_152:
        v176 = v170 - 176;
        while ( v176 + 176 != v174 )
        {
          v177 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h48bb34749364d295(
                   *(_QWORD *)(v176 + 184),
                   *(_QWORD *)(v176 + 192),
                   v168,
                   v169);
          v176 += 200;
          if ( v177 )
          {
            *(_QWORD *)&v713[0] = "openai";
            *((_QWORD *)&v713[0] + 1) = 6;
            v178 = *(_BYTE *)(v176 + 169);
            if ( *(_BYTE *)(v176 + 168) )
            {
              *(_QWORD *)__dst = v713;
              *(_QWORD *)&__dst[8] = &unk_10196B338;
              *(_QWORD *)&__dst[16] = v176 + 48;
              *(_QWORD *)&__dst[24] = &off_10196B358;
              if ( v178 )
              {
                *(_QWORD *)&__dst[32] = v176 + 72;
                *(_QWORD *)&__dst[40] = &off_10196B358;
                *(_QWORD *)&__dst[48] = v176;
                *(_QWORD *)&__dst[56] = &off_10196B358;
                *(_QWORD *)&__dst[64] = v176 + 96;
                *(_QWORD *)&__dst[72] = &off_10196B378;
                *(_QWORD *)&__dst[80] = v176 + 120;
                *(_QWORD *)&__dst[88] = &off_10196B378;
                *(_QWORD *)&__dst[96] = v176 + 144;
                *(_QWORD *)&__dst[104] = &off_10196B378;
                rusqlite::Connection::execute::h6126d3d40dfec4ea(v733, v700, &unk_1015E2D11, 185, __dst, 7);
              }
              else
              {
                *(_QWORD *)&__dst[32] = v176;
                *(_QWORD *)&__dst[40] = &off_10196B358;
                *(_QWORD *)&__dst[48] = v176 + 96;
                *(_QWORD *)&__dst[56] = &off_10196B378;
                *(_QWORD *)&__dst[64] = v176 + 120;
                *(_QWORD *)&__dst[72] = &off_10196B378;
                rusqlite::Connection::execute::h6126d3d40dfec4ea(v733, v700, &unk_1015E2C8A, 135, __dst, 5);
              }
            }
            else
            {
              *(_QWORD *)__dst = v713;
              *(_QWORD *)&__dst[8] = &unk_10196B338;
              if ( v178 )
              {
                *(_QWORD *)&__dst[16] = v176 + 72;
                *(_QWORD *)&__dst[24] = &off_10196B358;
                *(_QWORD *)&__dst[32] = v176;
                *(_QWORD *)&__dst[40] = &off_10196B358;
                *(_QWORD *)&__dst[48] = v176 + 96;
                *(_QWORD *)&__dst[56] = &off_10196B378;
                *(_QWORD *)&__dst[64] = v176 + 144;
                *(_QWORD *)&__dst[72] = &off_10196B378;
                rusqlite::Connection::execute::h6126d3d40dfec4ea(v733, v700, &unk_1015E2BED, 157, __dst, 5);
              }
              else
              {
                *(_QWORD *)&__dst[16] = v176;
                *(_QWORD *)&__dst[24] = &off_10196B358;
                *(_QWORD *)&__dst[32] = v176 + 96;
                *(_QWORD *)&__dst[40] = &off_10196B378;
                rusqlite::Connection::execute::h6126d3d40dfec4ea(v733, v700, &unk_1015E2B82, 107, __dst, 3);
              }
            }
            if ( *(_QWORD *)&v733[0] != v740.i64[0] )
            {
              v713[3] = v733[3];
              v713[2] = v733[2];
              v713[1] = v733[1];
              v713[0] = v733[0];
              *(_QWORD *)&v714 = v168;
              *((_QWORD *)&v714 + 1) = v169;
              *(_QWORD *)__dst = v176;
              *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              *(_QWORD *)&__dst[16] = &v714;
              *(_QWORD *)&__dst[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
              *(_QWORD *)&__dst[32] = v713;
              *(_QWORD *)&__dst[40] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2FB7, __dst);
              v366 = *(_QWORD *)__s1;
              v367 = __s1[8];
              *(_QWORD *)__dst = *(_QWORD *)&__s1[9];
              *(_QWORD *)&__dst[7] = *(_QWORD *)&__s1[16];
              core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v713);
              memcpy(__s2, __dst, 0x4Fu);
              goto LABEL_435;
            }
            *(_QWORD *)&v716 = *((_QWORD *)&v733[0] + 1);
            if ( *((_QWORD *)&v733[0] + 1) == 1 )
            {
              v170 = v176 + 176;
              ++v175;
              goto LABEL_152;
            }
            *(_QWORD *)&v713[0] = v168;
            *((_QWORD *)&v713[0] + 1) = v169;
            *(_QWORD *)__dst = v176;
            *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *(_QWORD *)&__dst[16] = v713;
            *(_QWORD *)&__dst[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
            *(_QWORD *)&__dst[32] = &v716;
            *(_QWORD *)&__dst[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v737, &unk_1017C2F26, __dst);
            v366 = *(_QWORD *)v737;
            v367 = v737[8];
            *(_QWORD *)&__s2[0] = *(_QWORD *)&v737[9];
            *(_QWORD *)((char *)__s2 + 7) = *(_QWORD *)&v737[16];
LABEL_435:
            if ( (void *)*(_QWORD *)&v700[0] >= v755[0] )
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_10196C388);
            ++*(_QWORD *)&v700[0];
            autocommit = sqlite3_get_autocommit(*(sqlite3 **)&v700[1]);
            --*(_QWORD *)&v700[0];
            if ( !autocommit )
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__dst, v700, "ROLLBACK", 8);
              if ( *(_QWORD *)__dst != v740.i64[0] )
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst);
            }
LABEL_439:
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v700);
LABEL_440:
            *(_QWORD *)&v733[0] = 10;
            *((_QWORD *)&v733[0] + 1) = v366;
            LOBYTE(v733[1]) = v367;
            memcpy((char *)&v733[1] + 1, __s2, 0x4Fu);
            codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h6dbf5b1e432916a7(
              v713,
              v696,
              v697,
              *((__int64 *)&v745 + 1),
              v746,
              v742,
              *((__int64 *)&v742 + 1));
            v369 = (__int64)v747;
            *(_QWORD *)&v700[0] = 0;
            *((_QWORD *)&v700[0] + 1) = 1;
            *(_QWORD *)&v700[1] = 0;
            *(_QWORD *)&__dst[16] = 1610612768;
            *(_QWORD *)__dst = v700;
            *(_QWORD *)&__dst[8] = &anon_7245a3145add9b93f83b0a9aa358a664_1177;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                    v733,
                                    __dst) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `R"
                "esult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
                55,
                &v710,
                &anon_7245a3145add9b93f83b0a9aa358a664_1194,
                &anon_7245a3145add9b93f83b0a9aa358a664_1180);
            v370 = v700[0];
            codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h9d2b56b357189005(
              (__int64)v749[0],
              v369,
              (__int64)&v689,
              &unk_1015E3682,
              0xBu,
              *((const void **)&v700[0] + 1),
              *(__int64 *)&v700[1]);
            if ( (_QWORD)v370 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v370 + 1), v370, 1);
            goto LABEL_530;
          }
        }
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v713, v700, &unk_1015E4BDA, 6);
        if ( (void *)*(_QWORD *)&v700[0] >= v755[0] )
          core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_10196C388);
        ++*(_QWORD *)&v700[0];
        v179 = sqlite3_get_autocommit(*(sqlite3 **)&v700[1]);
        --*(_QWORD *)&v700[0];
        if ( !v179 )
        {
          rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__dst, v700, "ROLLBACK", 8);
          if ( *(_QWORD *)__dst != v740.i64[0] )
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst);
        }
        if ( *(_QWORD *)&v713[0] != v740.i64[0] )
        {
          *(_OWORD *)&__dst[48] = v713[3];
          *(_OWORD *)&__dst[32] = v713[2];
          *(_OWORD *)&__dst[16] = v713[1];
          *(_OWORD *)__dst = v713[0];
          *(_QWORD *)&v714 = v168;
          *((_QWORD *)&v714 + 1) = v169;
          *(_QWORD *)&v733[0] = &v714;
          *((_QWORD *)&v733[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v733[1] = __dst;
          *((_QWORD *)&v733[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2FD1, v733);
          v366 = *(_QWORD *)__s1;
          v367 = __s1[8];
          *(_QWORD *)&v733[0] = *(_QWORD *)&__s1[9];
          *(_QWORD *)((char *)v733 + 7) = *(_QWORD *)&__s1[16];
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst);
          goto LABEL_432;
        }
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v700);
        v668 += v175;
        v182 = *(_QWORD *)(v753.i64[0] + 16);
        if ( v182 < 0 )
        {
          v184 = 0;
LABEL_243:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v184, v182);
        }
        v183 = *(const void **)(v753.i64[0] + 8);
        if ( v182 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v700, v700, v180, v181);
          v184 = 1;
          v185 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v182, 1);
          if ( !v185 )
            goto LABEL_243;
          v186 = v185;
        }
        else
        {
          v186 = 1;
        }
        memcpy((void *)v186, v183, v182);
        v187 = v746;
        if ( v746 == (_QWORD)v745 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v745);
        v188 = *((_QWORD *)&v745 + 1);
        v189 = 3 * v187;
        *(_QWORD *)(*((_QWORD *)&v745 + 1) + 8 * v189) = v182;
        *(_QWORD *)(v188 + 8 * v189 + 8) = v186;
        *(_QWORD *)(v188 + 8 * v189 + 16) = v182;
        v746 = v187 + 1;
        v167 = v752;
        if ( (_QWORD *)v752 == v756 )
          goto LABEL_178;
      }
      *(_OWORD *)&__dst[48] = v713[3];
      *(_OWORD *)&__dst[32] = v713[2];
      *(_OWORD *)&__dst[16] = v713[1];
      *(_OWORD *)__dst = v713[0];
      *(_QWORD *)&v714 = v168;
      *((_QWORD *)&v714 + 1) = v169;
      *(_QWORD *)&v733[0] = &v714;
      *((_QWORD *)&v733[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      *(_QWORD *)&v733[1] = __dst;
      *((_QWORD *)&v733[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2FF3, v733);
      v366 = *(_QWORD *)__s1;
      v367 = __s1[8];
      *(_QWORD *)&v733[0] = *(_QWORD *)&__s1[9];
      *(_QWORD *)((char *)v733 + 7) = *(_QWORD *)&__s1[16];
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst);
LABEL_432:
      *(_QWORD *)&__s2[0] = *(_QWORD *)&v733[0];
      *(_QWORD *)((char *)__s2 + 7) = *(_QWORD *)((char *)v733 + 7);
      goto LABEL_439;
    }
LABEL_178:
    v750 = 200 * v697;
    v740.i64[0] = v696;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hab0e223ee8e4d893(
      &v734,
      v696,
      v696 + 200 * v697);
    if ( v735 >= 2 )
    {
      v464 = *((_QWORD *)&v734 + 1);
      if ( v735 >= 0x15 )
      {
        core::slice::sort::stable::driftsort_main::hfea424fbff2bc733(*((_QWORD *)&v734 + 1), v735, &v710);
      }
      else
      {
        v465 = 24 * v735;
        v466 = 24;
        do
        {
          core::slice::sort::shared::smallsort::insert_tail::h80e3fbe26425d585(v464, v464 + v466);
          v466 += 24;
        }
        while ( v465 != v466 );
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h2f74b7d6142fa00d(&v734);
    v190 = *((_QWORD *)&v734 + 1);
    v191 = *((_QWORD *)&v734 + 1) + 24 * v735;
    *(_QWORD *)&v716 = *((_QWORD *)&v734 + 1);
    *((_QWORD *)&v716 + 1) = *((_QWORD *)&v734 + 1);
    v704.i64[0] = v734;
    v717 = v734;
    v718 = v191;
    v192 = *((char ***)&v734 + 1);
    if ( v735 )
    {
      v703 = (char **)(*((_QWORD *)&v734 + 1) + 24 * v735);
      v692 = 24 * v735 - 24;
      v193 = (_QWORD *)(*((_QWORD *)&v734 + 1) + 32LL);
      v194 = v740.i64[0];
      v681 = (_QWORD *)(v740.i64[0] + 24);
      v688.i64[0] = *((_QWORD *)&v734 + 1);
      while ( 1 )
      {
        v743 = (char **)(v190 + 24);
        v195 = *(void **)v190;
        if ( *(_QWORD *)v190 == 0x8000000000000000LL )
        {
          v192 = v743;
          *((_QWORD *)&v716 + 1) = v743;
          v190 = v688.i64[0];
          v191 = (size_t)v703;
          break;
        }
        v196 = *(_QWORD *)(v190 + 16);
        *(_QWORD *)&v754 = *(_QWORD *)(v190 + 8);
        *((_QWORD *)&v754 + 1) = v196;
        v755[0] = v195;
        rusqlite::Connection::open_with_flags::h53b19d8e1caa0298(__dst, v754, v196, 32769);
        if ( __dst[104] == 3 )
        {
          *((_QWORD *)&v716 + 1) = v743;
          v53 = _mm_load_si128((const __m128i *)__dst);
          v441 = _mm_load_si128((const __m128i *)&__dst[16]);
          v442 = _mm_load_si128((const __m128i *)&__dst[32]);
          v733[3] = *(_OWORD *)&__dst[48];
          v733[2] = v442;
          v733[1] = v441;
          v733[0] = v53;
          *(_OWORD *)v737 = v754;
          *(_QWORD *)&__s2[0] = v737;
          *((_QWORD *)&__s2[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&__s2[1] = v733;
          *((_QWORD *)&__s2[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2BCC, __s2);
          v361 = *(__int64 (__fastcall **)())&__s1[8];
          v753.i64[0] = *(_QWORD *)__s1;
          v362 = *(_QWORD **)&__s1[16];
          v381 = v733;
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v733);
          v360 = v704.i64[0];
LABEL_470:
          if ( v195 )
          {
            v381 = (_OWORD *)v754;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v754, v195, 1);
          }
          if ( v703 != v743 )
          {
            v382 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)v692;
            v385 = v692 / 0x18;
            do
            {
              v386 = *(v193 - 1);
              if ( v386 )
              {
                v381 = (_OWORD *)*v193;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v193, v386, 1);
              }
              v193 += 3;
              --v385;
            }
            while ( v385 );
          }
          if ( v360 )
          {
            v381 = (_OWORD *)v688.i64[0];
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v688.i64[0], 24 * v360, 8);
          }
          v387 = 10;
          v388 = v753.i64[0];
LABEL_527:
          *(_QWORD *)&v733[0] = v387;
          *((_QWORD *)&v733[0] + 1) = v388;
          *(_QWORD *)&v733[1] = v361;
          *((_QWORD *)&v733[1] + 1) = v362;
          *(_QWORD *)&v733[2] = v383;
          *((_QWORD *)&v733[2] + 1) = v384;
          v733[3] = v53;
          *(_QWORD *)&v733[4] = v381;
          *((_QWORD *)&v733[4] + 1) = *((_QWORD *)&v382 + 1);
          v733[5] = *(_OWORD *)v705;
          codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h6dbf5b1e432916a7(
            v713,
            v696,
            v697,
            *((__int64 *)&v745 + 1),
            v746,
            v742,
            *((__int64 *)&v742 + 1));
          *(_QWORD *)&v700[0] = 0;
          *((_QWORD *)&v700[0] + 1) = 1;
          *(_QWORD *)&v700[1] = 0;
          *(_QWORD *)&__dst[16] = 1610612768;
          *(_QWORD *)__dst = v700;
          *(_QWORD *)&__dst[8] = &anon_7245a3145add9b93f83b0a9aa358a664_1177;
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                  v733,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Res"
              "ult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
              55,
              &v710,
              &anon_7245a3145add9b93f83b0a9aa358a664_1194,
              &anon_7245a3145add9b93f83b0a9aa358a664_1180);
          v410 = v700[0];
          codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h9d2b56b357189005(
            (__int64)v749[0],
            (__int64)v747,
            (__int64)&v689,
            &unk_1015E3682,
            0xBu,
            *((const void **)&v700[0] + 1),
            *(__int64 *)&v700[1]);
          if ( (_QWORD)v410 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v410 + 1), v410, 1);
LABEL_530:
          qmemcpy(__dst, v733, 0x60u);
          codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::h9362363f19a5afff(
            v700,
            __dst,
            v713);
          qmemcpy(v711, v700, 0x60u);
          v411 = v746;
          if ( v746 )
          {
            v412 = (_QWORD *)(*((_QWORD *)&v745 + 1) + 8LL);
            do
            {
              v413 = *(v412 - 1);
              if ( v413 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v412, v413, 1);
              v412 += 3;
              --v411;
            }
            while ( v411 );
          }
          if ( (_QWORD)v745 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v745 + 1), 24 * v745, 8);
LABEL_537:
          v414 = v742;
          for ( i4 = *((_QWORD *)&v742 + 1) + 1LL; i4 != 1; --i4 )
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedThreadMetadataRolloutPatch$GT$::h0f0318a3fdab0f5f();
            v414 += 144;
          }
          if ( v741 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v742, 144LL * (_QWORD)v741, 8);
          v416 = v757;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v689);
          if ( v416 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v749[0], v416, 1);
LABEL_544:
          v417 = v726;
          v418 = v727;
          if ( v727 )
          {
            v419 = (_QWORD *)(v726 + 32);
            do
            {
              v420 = *(v419 - 4);
              if ( v420 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v419 - 3), v420, 1);
              v421 = *(v419 - 1);
              if ( v421 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v419, v421, 1);
              v419 += 6;
              --v418;
            }
            while ( v418 );
          }
          if ( v725 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v417, 48 * v725, 8);
          v423 = v730.i64[1];
          v422 = v730.i64[0];
          if ( v730.i64[1] )
          {
            v424 = (_QWORD *)(v730.i64[0] + 8);
            do
            {
              v425 = *(v424 - 1);
              if ( v425 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v424, v425, 1);
              v424 += 3;
              --v423;
            }
            while ( v423 );
          }
          if ( v729 )
          {
            v426 = 24 * v729;
            v427 = v422;
            goto LABEL_560;
          }
          return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionPlan$GT$::h02e5454eb150e2f1(&v693);
        }
        v53 = _mm_load_si128((const __m128i *)&__dst[16]);
        v197 = _mm_load_si128((const __m128i *)&__dst[48]);
        v700[2] = *(_OWORD *)&__dst[32];
        v700[3] = v197;
        v700[4] = *(_OWORD *)&__dst[64];
        v700[5] = *(_OWORD *)&__dst[80];
        HIDWORD(v700[6]) = *(_DWORD *)&__dst[108];
        *(_DWORD *)((char *)&v700[6] + 9) = *(_DWORD *)&__dst[105];
        v198 = _mm_load_si128((const __m128i *)__dst);
        v700[1] = v53;
        v700[0] = v198;
        *(_QWORD *)&v700[6] = *(_QWORD *)&__dst[96];
        BYTE8(v700[6]) = __dst[104];
        v199 = 0;
        v200 = (_QWORD *)v194;
        while ( v750 != v199 )
        {
          v753.i64[0] = v199;
          v201 = v200[1];
          v756 = v200;
          std::path::Path::components::he8b0f71a48373be5(__s1, v201, v200[2]);
          std::path::Path::components::he8b0f71a48373be5(__s2, v754, *((_QWORD *)&v754 + 1));
          v202 = *(_OWORD *)__s1;
          v203 = __s2[0];
          if ( *(_QWORD *)&__s1[8] == *((_QWORD *)&__s2[0] + 1)
            && (_BYTE)v732 == BYTE8(__s2[3])
            && BYTE1(v732) == 2
            && BYTE9(__s2[3]) == 2
            && !memcmp(*(const void **)__s1, *(const void **)&__s2[0], *(size_t *)&__s1[8]) )
          {
            v195 = v755[0];
            v194 = v740.i64[0];
LABEL_197:
            v205 = *(unsigned __int8 *)(v194 + v753.i64[0] + 192);
            v206 = "NULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore";
            if ( *(_BYTE *)(v194 + v753.i64[0] + 192) )
              v206 = "modelmodel_messagestool_mode";
            v682 = v206;
            v683 = (void *)(v205 | 4);
            v207 = (__int128 *)"NULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore";
            if ( *(_BYTE *)(v194 + v753.i64[0] + 193) )
              v207 = &xmmword_1015DFE20;
            v208 = 4;
            if ( *(_BYTE *)(v194 + v753.i64[0] + 193) )
              v208 = 16;
            *(_QWORD *)&v714 = v207;
            *((_QWORD *)&v714 + 1) = v208;
            *(_QWORD *)__dst = &v682;
            *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446;
            *(_QWORD *)&__dst[16] = &v714;
            *(_QWORD *)&__dst[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(__s2, &unk_1017C2B15, __dst);
            v706.i64[0] = *((_QWORD *)&__s2[0] + 1);
            v728.i64[0] = *(_QWORD *)&__s2[0];
            rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
              __dst,
              v700,
              *((_QWORD *)&__s2[0] + 1),
              *(_QWORD *)&__s2[1]);
            __s2[0] = *(_OWORD *)&__dst[8];
            *(_QWORD *)&__s2[1] = *(_QWORD *)&__dst[24];
            *(_OWORD *)((char *)&__s2[1] + 8) = *(_OWORD *)&__dst[32];
            *(_OWORD *)((char *)&__s2[2] + 8) = *(_OWORD *)&__dst[48];
            *((_QWORD *)&__s2[3] + 1) = *(_QWORD *)&__dst[64];
            if ( *(_DWORD *)__dst == 1 )
            {
              *((_QWORD *)&v716 + 1) = v743;
              *(_QWORD *)&v733[4] = *((_QWORD *)&__s2[3] + 1);
              v733[3] = *(_OWORD *)((char *)&__s2[2] + 8);
              v733[2] = *(_OWORD *)((char *)&__s2[1] + 8);
              *((_QWORD *)&v733[1] + 1) = *(_QWORD *)&__s2[1];
              *(_OWORD *)((char *)v733 + 8) = __s2[0];
LABEL_426:
              *(_OWORD *)&__dst[48] = *(_OWORD *)((char *)&v733[3] + 8);
              *(_OWORD *)&__dst[32] = *(_OWORD *)((char *)&v733[2] + 8);
              *(_QWORD *)&__dst[24] = *(_QWORD *)&v733[2];
              *(_OWORD *)&__dst[8] = v733[1];
              *(_QWORD *)__dst = *((_QWORD *)&v733[0] + 1);
              *(_OWORD *)v737 = v754;
              *(_QWORD *)&__s2[0] = v194 + v753.i64[0] + 24;
              *((_QWORD *)&__s2[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              *(_QWORD *)&__s2[1] = v737;
              *((_QWORD *)&__s2[1] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
              *(_QWORD *)&__s2[2] = __dst;
              *((_QWORD *)&__s2[2] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(__s1, &unk_1017C2BA9, __s2);
              v360 = v704.i64[0];
              v361 = *(__int64 (__fastcall **)())&__s1[8];
              v753.i64[0] = *(_QWORD *)__s1;
              v362 = *(_QWORD **)&__s1[16];
              core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst);
              if ( v728.i64[0] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v706.i64[0], v728.i64[0], 1);
              goto LABEL_469;
            }
            v732 = *((_QWORD *)&__s2[3] + 1);
            *(_OWORD *)&__s1[40] = *(_OWORD *)((char *)&__s2[2] + 8);
            *(_OWORD *)&__s1[24] = *(_OWORD *)((char *)&__s2[1] + 8);
            *(_QWORD *)&__s1[16] = *(_QWORD *)&__s2[1];
            *(_OWORD *)__s1 = __s2[0];
            rusqlite::statement::Statement::query_row::haca4d7a32c475f70(v733, __s1, (char *)v681 + v753.i64[0]);
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h38b9ee1cf8eee5e7(__s1);
            v209 = *(_QWORD *)&v733[0];
            if ( *(_QWORD *)&v733[0] == 0x8000000000000001LL )
            {
              *((_QWORD *)&v716 + 1) = v743;
              v195 = v755[0];
              goto LABEL_426;
            }
            v210 = *((_QWORD *)&v733[0] + 1);
            v211 = *((_QWORD *)&v733[1] + 1);
            v212 = *(_QWORD *)&v733[1];
            v213 = *((_QWORD *)&v733[2] + 1);
            v712[0] = *(void **)&v733[2];
            v723[0] = *((void **)&v733[3] + 1);
            v748[0] = *(void **)&v733[3];
            v680 = *(_QWORD *)&v733[4];
            v752 = *((_QWORD *)&v733[1] + 1);
            if ( v728.i64[0] )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v706.i64[0], v728.i64[0], 1);
              v211 = v752;
            }
            v702 = v210;
            if ( v209 == 0x8000000000000000LL )
            {
              v194 = v740.i64[0];
LABEL_462:
              v214 = v753.i64[0];
LABEL_465:
              *((_QWORD *)&v716 + 1) = v743;
              *(_QWORD *)__dst = v194 + v214 + 24;
              *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v707, &unk_1017C2B6D, __dst);
              v360 = v704.i64[0];
              v753.i64[0] = (__int64)v707;
              v379 = v708;
              v751 = v709;
              if ( 2 * (__int64)v748[0] )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v723[0], v748[0], 1);
                v380 = v752;
                if ( 2 * v752 )
                  goto LABEL_481;
LABEL_467:
                if ( 2 * v209 )
LABEL_482:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v702, v209, 1);
              }
              else
              {
                v380 = v752;
                if ( !(2 * v752) )
                  goto LABEL_467;
LABEL_481:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v712[0], v380, 1);
                if ( 2 * v209 )
                  goto LABEL_482;
              }
              v195 = v755[0];
              v361 = v379;
              v362 = v751;
LABEL_469:
              v381 = v700;
              core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v700);
              goto LABEL_470;
            }
            v214 = v753.i64[0];
            if ( v212 != 6 || *(_DWORD *)v210 ^ 0x6E65706F | *(unsigned __int16 *)(v210 + 4) ^ 0x6961 )
            {
              v194 = v740.i64[0];
              goto LABEL_465;
            }
            v194 = v740.i64[0];
            if ( *(_BYTE *)(v740.i64[0] + v753.i64[0] + 192) )
            {
              if ( v211 == 0x8000000000000000LL )
              {
                v752 = 0x8000000000000000LL;
                v194 = v740.i64[0];
                goto LABEL_465;
              }
              v194 = v740.i64[0];
              if ( v213 != *(_QWORD *)(v740.i64[0] + v753.i64[0] + 88) )
                goto LABEL_465;
              v215 = memcmp(v712[0], *(const void **)(v740.i64[0] + v753.i64[0] + 80), v213);
              v211 = v752;
              v214 = v753.i64[0];
              if ( v215 )
                goto LABEL_465;
            }
            if ( *(_BYTE *)(v194 + v214 + 193) )
            {
              v216 = v748[0];
              if ( v748[0] == (void *)0x8000000000000000LL )
              {
                v748[0] = (void *)0x8000000000000000LL;
                goto LABEL_465;
              }
              if ( v680 != *(_QWORD *)(v194 + v214 + 112) )
                goto LABEL_465;
              if ( memcmp(v723[0], *(const void **)(v194 + v214 + 104), v680) )
                goto LABEL_462;
              v211 = v752;
              if ( v216 )
              {
LABEL_219:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v723[0], v216, 1);
                v211 = v752;
              }
            }
            else
            {
              v216 = v748[0];
              if ( 2 * (__int64)v748[0] )
                goto LABEL_219;
            }
            if ( 2 * v211 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v712[0], v211, 1);
            if ( v209 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v702, v209, 1);
            v195 = v755[0];
            goto LABEL_185;
          }
          if ( __s1[16] != 6 )
          {
            *(_QWORD *)&v715[15] = *(_QWORD *)&__s1[48];
            *(_OWORD *)v715 = *(_OWORD *)&__s1[33];
            v714 = *(_OWORD *)&__s1[17];
          }
          v733[0] = v202;
          LOBYTE(v733[1]) = __s1[16];
          *(_QWORD *)&v733[3] = *(_QWORD *)&v715[15];
          *(_OWORD *)((char *)&v733[2] + 1) = *(_OWORD *)v715;
          *(_OWORD *)((char *)&v733[1] + 1) = v714;
          WORD4(v733[3]) = v732;
          BYTE10(v733[3]) = BYTE2(v732);
          if ( LOBYTE(__s2[1]) != 6 )
          {
            *(_QWORD *)&v737[31] = *(_QWORD *)&__s2[3];
            *(_OWORD *)&v737[16] = *(_OWORD *)((char *)&__s2[2] + 1);
            *(_OWORD *)v737 = *(_OWORD *)((char *)&__s2[1] + 1);
          }
          *(_OWORD *)__dst = v203;
          __dst[16] = __s2[1];
          *(_QWORD *)&__dst[48] = *(_QWORD *)&v737[31];
          *(_OWORD *)&__dst[33] = *(_OWORD *)&v737[16];
          *(_OWORD *)&__dst[17] = *(_OWORD *)v737;
          *(_WORD *)&__dst[56] = WORD4(__s2[3]);
          __dst[58] = BYTE10(__s2[3]);
          v195 = v755[0];
          v204 = core::iter::traits::iterator::Iterator::eq_by::h297eb5c9d32a5bd4(v733, __dst);
          v194 = v740.i64[0];
          if ( v204 )
            goto LABEL_197;
LABEL_185:
          v200 = v756 + 25;
          v199 = v753.i64[0] + 200;
        }
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v700);
        if ( v195 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v754, v195, 1);
        v692 -= 24LL;
        v193 += 3;
        v190 = (__int64)v743;
        if ( v743 == v703 )
        {
          *((_QWORD *)&v716 + 1) = v743;
          v190 = v688.i64[0];
          v217 = v704.i64[0];
          goto LABEL_489;
        }
      }
    }
    v217 = v704.i64[0];
    if ( (char **)v191 != v192 )
    {
      v389 = (v191 - (unsigned __int64)v192) / 0x18;
      v390 = v192 + 1;
      do
      {
        v391 = *(v390 - 1);
        if ( v391 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v390, v391, 1);
        v390 += 3;
        --v389;
      }
      while ( v389 );
    }
LABEL_489:
    if ( v217 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, 24 * v217, 8);
    if ( v694.i64[1] )
    {
      v392 = v694.i64[0];
      v748[0] = (void *)(344 * v694.i64[1]);
      v393 = nullptr;
      *((_QWORD *)&v754 + 1) = 0x8000000000000001LL;
      v728.i64[0] = v694.i64[0];
      while ( 1 )
      {
        v394 = *(_QWORD *)((char *)v393 + v392 + 8);
        v395 = *(_QWORD *)((char *)v393 + v392 + 16);
        v396 = *(_QWORD *)((char *)v393 + v392 + 32);
        v756 = v393;
        codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout::h4a8908f8faf37875(
          __dst,
          v394,
          v395,
          v396,
          *(_QWORD *)((char *)v393 + v392 + 40));
        v387 = *(_QWORD *)&__dst[8];
        v388 = *(_QWORD *)&__dst[16];
        v361 = *(__int64 (__fastcall **)())&__dst[24];
        v383 = *(_QWORD *)&__dst[40];
        v362 = *(_QWORD **)&__dst[32];
        v384 = *(_QWORD *)&__dst[48];
        v53 = *(__m128i *)&__dst[56];
        v381 = *(_OWORD **)&__dst[72];
        *((_QWORD *)&v382 + 1) = *(_QWORD *)&__dst[80];
        v677 = *(_QWORD *)&__dst[88];
        v678 = *(_QWORD *)&__dst[96];
        v753.i64[0] = *(_QWORD *)__dst;
        if ( *(_QWORD *)__dst == *((_QWORD *)&v754 + 1) )
          break;
        v750 = *(_QWORD *)&__dst[48];
        *(_QWORD *)&v754 = *(_QWORD *)&__dst[40];
        v752 = *(_QWORD *)&__dst[72];
        v755[0] = *(void **)&__dst[80];
        v740 = *(__m128i *)&__dst[56];
        memcpy(v713, &__dst[104], 0xB8u);
        if ( v753.i64[0] == 0x8000000000000000LL )
        {
          *(_QWORD *)&v733[0] = (char *)v756 + v728.i64[0] + 24;
          *((_QWORD *)&v733[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dst[8], &unk_1017C2BF2, v733);
          v388 = *(_QWORD *)&__dst[8];
          v361 = *(__int64 (__fastcall **)())&__dst[16];
          v362 = *(_QWORD **)&__dst[24];
          v384 = *(_QWORD *)&__dst[40];
          v383 = *(_QWORD *)&__dst[32];
          v53 = _mm_loadu_si128((const __m128i *)&__dst[48]);
          *((_QWORD *)&v382 + 1) = *(_QWORD *)&__dst[72];
          v381 = *(_OWORD **)&__dst[64];
          *(_QWORD *)v705 = *(_QWORD *)&__dst[80];
          *(_QWORD *)&v705[8] = *(_QWORD *)&__dst[88];
          v387 = 9;
          goto LABEL_527;
        }
        memcpy((char *)&v700[6] + 8, v713, 0xB8u);
        *((_QWORD *)&v700[0] + 1) = *(_QWORD *)&__dst[8];
        v700[1] = *(_OWORD *)&__dst[16];
        *(_QWORD *)&v700[2] = *(_QWORD *)&__dst[32];
        *((_QWORD *)&v700[2] + 1) = v754;
        *(_QWORD *)&v700[3] = v750;
        v53 = _mm_load_si128(&v740);
        *(__m128i *)((char *)&v700[3] + 8) = v53;
        *((_QWORD *)&v700[4] + 1) = v752;
        *(void **)&v700[5] = v755[0];
        *((_QWORD *)&v700[5] + 1) = v677;
        *(_QWORD *)&v700[6] = v678;
        *(_QWORD *)&v700[0] = v753.i64[0];
        *(_QWORD *)&v733[0] = &unk_1015E29E9;
        *((_QWORD *)&v733[0] + 1) = 5;
        v392 = v728.i64[0];
        v397 = v756;
        v398 = *(_QWORD *)((char *)v756 + v728.i64[0] + 72) == 0x8000000000000000LL;
        if ( v752 == 0x8000000000000000LL || v398 )
        {
          v399 = v752 == 0x8000000000000000LL && v398;
        }
        else if ( *((_QWORD *)&v700[5] + 1) == *(_QWORD *)((char *)v756 + v728.i64[0] + 304) )
        {
          v400 = memcmp(v755[0], *(const void **)((char *)v756 + v728.i64[0] + 296), *((size_t *)&v700[5] + 1));
          v53 = _mm_load_si128(&v740);
          v399 = v400 == 0;
        }
        else
        {
          v399 = 0;
        }
        v401 = *(_QWORD *)((char *)v397 + v392 + 96) == 0x8000000000000000LL;
        if ( *(_QWORD *)&v700[6] == 0x8000000000000000LL || v401 )
        {
          v402 = *(_QWORD *)&v700[6] == 0x8000000000000000LL && v401;
        }
        else if ( *(_QWORD *)&v700[7] == *(_QWORD *)((char *)v397 + v392 + 328) )
        {
          v403 = memcmp(
                   *((const void **)&v700[6] + 1),
                   *(const void **)((char *)v397 + v392 + 320),
                   *(size_t *)&v700[7]);
          v53 = _mm_load_si128(&v740);
          v402 = v403 == 0;
        }
        else
        {
          v402 = 0;
        }
        if ( _mm_extract_epi64(v53, 1) != 6
          || (*(_DWORD *)v53.i64[0] ^ 0x6E65706F | *(unsigned __int16 *)(v53.i64[0] + 4) ^ 0x6961) != 0
          || !v399
          || !v402
          || ((*(_QWORD *)&v733[0] = "lastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
               *((_QWORD *)&v733[0] + 1) = 4,
               v404 = *(_QWORD *)((char *)v397 + v392 + 144) == 0x8000000000000000LL,
               *(_QWORD *)&v700[9] != 0x8000000000000000LL && !v404)
            ? (*(_QWORD *)&v700[10] != *(_QWORD *)((char *)v397 + v392 + 304)
             ? (v405 = 0)
             : (v405 = memcmp(
                         *((const void **)&v700[9] + 1),
                         *(const void **)((char *)v397 + v392 + 296),
                         *(size_t *)&v700[10]) == 0))
            : (v405 = *(_QWORD *)&v700[9] == 0x8000000000000000LL && v404),
              (v406 = *(_QWORD *)((char *)v397 + v392 + 168) == 0x8000000000000000LL,
               *((_QWORD *)&v700[10] + 1) != 0x8000000000000000LL && !v406)
            ? (*((_QWORD *)&v700[11] + 1) != *(_QWORD *)((char *)v397 + v392 + 328)
             ? (v407 = 0)
             : (v407 = memcmp(
                         *(const void **)&v700[11],
                         *(const void **)((char *)v397 + v392 + 320),
                         *((size_t *)&v700[11] + 1)) == 0))
            : (v407 = *((_QWORD *)&v700[10] + 1) == 0x8000000000000000LL && v406),
              *((_QWORD *)&v700[8] + 1) != 6
           || (**(_DWORD **)&v700[8] ^ 0x6E65706F | *(unsigned __int16 *)(*(_QWORD *)&v700[8] + 4LL) ^ 0x6961) != 0
           || !v405
           || !v407) )
        {
          *(_QWORD *)__dst = v733;
          *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446;
          *(_QWORD *)&__dst[16] = (char *)v397 + v392 + 24;
          *(_QWORD *)&__dst[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v720, &unk_1017C2A8D, __dst);
          v388 = *(_QWORD *)v720;
          v361 = *(__int64 (__fastcall **)())&v720[8];
          v362 = *(_QWORD **)&v720[16];
          v381 = v700;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$::he5d7e949bdfe29f3(v700);
          goto LABEL_526;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$::he5d7e949bdfe29f3(v700);
        v393 = v397 + 43;
        if ( v748[0] == v393 )
          goto LABEL_520;
      }
      *(_QWORD *)v705 = v677;
      *(_QWORD *)&v705[8] = v678;
      if ( *(_QWORD *)&__dst[8] != 11 )
        goto LABEL_527;
    }
    else
    {
LABEL_520:
      _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h71df8117d4d5dfc7(
        v733,
        v672,
        v672 + 232 * v673);
      v408 = v751;
      v409 = v739;
      codexmate_lib::core::relay::codex_diagnostic::check_db_orphan_providers::h07b9a8183995876e(v700, v751, v733, v739);
      codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers::h1439d2f79debe46e(
        __dst,
        v408,
        v733,
        v409);
      if ( *((_QWORD *)&v700[2] + 1) != 2
        || **(_WORD **)&v700[2] != 27503
        || *(_QWORD *)&__dst[40] != 2
        || **(_WORD **)&__dst[32] != 27503 )
      {
        *(_QWORD *)&__s2[0] = &v700[3];
        *((_QWORD *)&__s2[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__s2[1] = &__dst[48];
        *((_QWORD *)&__s2[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v744, &unk_1017C2AC2, __s2);
        v388 = *(_QWORD *)v744;
        v361 = *(__int64 (__fastcall **)())&v744[8];
        v362 = *(_QWORD **)&v744[16];
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::h861d55953b673d47(__dst);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::h861d55953b673d47(v700);
        v381 = v733;
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(v733);
LABEL_526:
        v387 = 10;
        goto LABEL_527;
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::h861d55953b673d47(__dst);
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::h861d55953b673d47(v700);
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(v733);
    }
    codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h9d2b56b357189005(
      (__int64)v749[0],
      (__int64)v747,
      (__int64)&v689,
      &unk_1015E368D,
      9u,
      nullptr,
      v653);
    if ( v694.i64[1] )
    {
      if ( v694.i64[1] >= 4uLL )
      {
        v445 = (unsigned __int8 *)(v694.i64[0] + 1368);
        v443 = 0;
        v444 = 0;
        do
        {
          v444 += *(v445 - 1032) + *(v445 - 688) + (unsigned __int64)*(v445 - 344) + *v445;
          v443 += 4;
          v445 += 1376;
        }
        while ( (v694.i64[1] & 0xFFFFFFFFFFFFFFFCLL) != v443 );
      }
      else
      {
        v443 = 0;
        v444 = 0;
      }
      if ( (v694.i8[8] & 3) != 0 )
      {
        v446 = 344 * v443 + v694.i64[0] + 336;
        v447 = 0;
        do
        {
          v444 += *(unsigned __int8 *)(v446 + v447);
          v447 += 344;
        }
        while ( 344LL * (v694.i8[8] & 3) != v447 );
      }
    }
    else
    {
      v444 = 0;
    }
    v661 = v444;
    v448 = 0;
    if ( v694.i64[1] >= v444 )
      v448 = v694.i64[1] - v444;
    *(_QWORD *)__s1 = v448;
    *(_QWORD *)&v713[0] = v694.i64[1];
    *(_QWORD *)&v700[0] = *((_QWORD *)&v742 + 1);
    *(_QWORD *)__dst = v713;
    *(_QWORD *)&__dst[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[16] = &v668;
    *(_QWORD *)&__dst[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[32] = v700;
    *(_QWORD *)&__dst[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[48] = &v661;
    *(_QWORD *)&__dst[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[64] = __s1;
    *(_QWORD *)&__dst[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v657, &unk_1017C3AAB, __dst);
    codexmate_lib::platform::debug_log::app_event::h6c61a8f2657e5fc6(
      &unk_1015E3696,
      32,
      &unk_1015E368D,
      9,
      v657,
      *(double *)v53.i64);
    codexmate_lib::core::relay::codex_diagnostic::orphan_provider_fix_ids::h1efc66fdabad2717(v713, 32, v449, v450);
    *(_QWORD *)&v700[0] = 0;
    *((_QWORD *)&v700[0] + 1) = 8;
    *(_QWORD *)&v700[1] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v713, 32, v451, v452);
    v453 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v453 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v454 = (_QWORD *)v453;
    *(_QWORD *)&__s2[0] = v694.i64[1];
    *(_QWORD *)&v733[0] = *((_QWORD *)&v742 + 1);
    *(_QWORD *)__dst = __s2;
    *(_QWORD *)&__dst[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[16] = &v668;
    *(_QWORD *)&__dst[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[32] = v733;
    *(_QWORD *)&__dst[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[48] = &v661;
    *(_QWORD *)&__dst[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&__dst[64] = &v698;
    *(_QWORD *)&__dst[72] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    *(_QWORD *)&__dst[80] = __s1;
    *(_QWORD *)&__dst[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v658, &unk_1017C3AFC, __dst);
    v454[2] = v658[2];
    v455 = v658[0];
    v454[1] = v658[1];
    *v454 = v455;
    v456 = v713[0];
    *(_OWORD *)__dst = v713[0];
    v457 = *(_QWORD *)&v713[1];
    *(_QWORD *)&__dst[16] = *(_QWORD *)&v713[1];
    v458 = v700[0];
    *(_OWORD *)&__dst[24] = v700[0];
    *(_QWORD *)&__dst[40] = *(_QWORD *)&v700[1];
    v459 = (__int64 *)v711;
    v711[3].i64[0] = *(_QWORD *)&v700[1];
    *((_OWORD *)v459 + 2) = v458;
    v459[3] = v457;
    *(_OWORD *)(v459 + 1) = v456;
    v459[7] = 1;
    v459[8] = (__int64)v454;
    v459[9] = 1;
    *v459 = 11;
    v460 = v757;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31defe952ca235e4(&v745);
    if ( (_QWORD)v745 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v745 + 1), 24 * v745, 8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h60cb92b7de86f335(&v741);
    if ( v741 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v742, 144LL * (_QWORD)v741, 8);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v689);
    if ( v460 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v749[0], v460, 1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0354c4de9f75ceb2(&v725);
    if ( v725 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v726, 48 * v725, 8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31defe952ca235e4(&v729);
    if ( v729 )
    {
      v427 = v730.i64[0];
      v426 = 24 * v729;
LABEL_560:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v427, v426, 8);
    }
    return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionPlan$GT$::h02e5454eb150e2f1(&v693);
  }
  else
  {
    v88 = v711;
    v711[5] = v701;
    v88[4].i64[1] = *((_QWORD *)&v671 + 1);
    v89 = v670;
    v88[4].i64[0] = v671;
    v88[3].i64[1] = v89;
    v88->i64[0] = v52;
    v88->i64[1] = (__int64)v17;
    v88[1] = _mm_load_si128((const __m128i *)v749);
    v88[2].i64[0] = v752;
    v88[2].i64[1] = v754;
    result = v755[0];
    v88[3].i64[0] = (__int64)v755[0];
  }
  return result;
}
