// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140892090 | successor of pre-update 0x1402e40b0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140892090(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // rdi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r10
  __m128i v48; // xmm6
  __m128i v49; // xmm7
  __m128i v50; // xmm8
  __m128i v51; // xmm9
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  const char *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdi
  void *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdi
  void *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // r13
  void *v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int128 v79; // kr20_16
  __int64 v80; // rdi
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdi
  void *v86; // rsi
  __int64 v87; // rax
  char v88; // di
  __int64 v89; // rax
  __m128i v90; // xmm0
  _DWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __m128i *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  void *v97; // rax
  __int64 v98; // rdx
  bool v99; // zf
  __int128 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  _DWORD *v104; // rax
  __m128i v105; // xmm0
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rcx
  __m128i v109; // xmm0
  __int64 v110; // rsi
  __int64 v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r12
  __int64 v115; // rax
  char v116; // r13
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdi
  void *v121; // rsi
  __int64 v122; // rax
  __m128i v123; // xmm0
  _DWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r13
  __int64 v128; // rax
  __int64 v129; // r15
  __int64 v130; // rax
  char v131; // di
  __int64 v132; // rax
  __m128i v133; // xmm0
  _DWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __m128i *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  void *v140; // rax
  __int64 v141; // rdx
  __int128 v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  _DWORD *v146; // rax
  __m128i v147; // xmm0
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rcx
  __m128i v151; // xmm0
  __int64 v152; // rax
  __int64 v153; // rsi
  __int64 v154; // rax
  char v155; // di
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r13
  void *v160; // rsi
  __int64 v161; // r12
  __int64 v162; // rax
  char v163; // di
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r12
  __int64 v172; // rsi
  __int64 v173; // r12
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r15
  __int64 v179; // rsi
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r13
  __int64 v184; // rax
  __int64 v185; // r12
  _WORD *v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rcx
  _DWORD *v191; // rax
  __m128i v192; // xmm0
  _DWORD *v193; // rax
  __m128i v194; // xmm0
  __int64 v195; // rdx
  __int64 v196; // rcx
  _DWORD *v197; // rax
  __m128i v198; // xmm0
  __int64 v199; // rdx
  __int64 v200; // rcx
  __m128i *v201; // rax
  __m128i v202; // xmm0
  __int64 v203; // rsi
  __int64 v204; // rax
  __int64 v205; // rcx
  __m128i v206; // xmm0
  __int64 v207; // rsi
  __int64 v208; // rdx
  __int64 v209; // rcx
  _WORD *v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r15
  __int64 v214; // rdi
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  _DWORD *v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  _QWORD *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  _QWORD *v224; // rax
  __int64 v225; // rdx
  _DWORD *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rdi
  __int64 v230; // r15
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rax
  __int64 v237; // r15
  __m128i v238; // xmm0
  _OWORD *v239; // rax
  _WORD *v240; // rax
  _WORD *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r12
  __int64 v245; // r13
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  _DWORD *v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  _QWORD *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  _QWORD *v255; // rax
  __int64 v256; // rdx
  _DWORD *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r12
  __int64 v261; // rdi
  __int64 v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // r13
  __int64 v268; // rax
  __int64 v269; // r12
  __int64 v270; // rdx
  __int64 v271; // rcx
  __int64 v272; // rdi
  __int64 v273; // r12
  __int64 v274; // rax
  __int64 v275; // rsi
  __int64 v276; // rax
  __int64 v277; // rax
  _DWORD *v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // rax
  __int64 v282; // rdx
  __int64 v283; // rcx
  _DWORD *v284; // rax
  __m128i v285; // xmm0
  __int64 v286; // rdx
  __int64 v287; // rcx
  void *v288; // rax
  __int64 v289; // rdx
  __m128i v290; // xmm0
  __m128i *v291; // rax
  __int64 v292; // rsi
  __int32 v293; // eax
  __m128i v294; // xmm0
  __m128i *v295; // rax
  __m128i v296; // xmm0
  __int64 v297; // rsi
  __int64 v298; // rax
  __int64 v299; // rcx
  __m128i v300; // xmm0
  __int64 v301; // rsi
  __int64 v302; // r15
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // rax
  __int64 v306; // rax
  _DWORD *v307; // rax
  __int64 v308; // rdx
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rcx
  _DWORD *v313; // rax
  __m128i v314; // xmm0
  __int64 v315; // rdx
  __int64 v316; // rcx
  void *v317; // rax
  __int64 v318; // rdx
  __m128i v319; // xmm0
  _OWORD *v320; // rax
  __int64 v321; // rsi
  __int64 v322; // rax
  __int64 v323; // rcx
  __m128i v324; // xmm0
  __int64 v325; // rdx
  __int64 v326; // r15
  __int64 v327; // rsi
  __int64 v328; // rax
  __int64 v329; // rcx
  __m128i v330; // xmm0
  __int64 v331; // rsi
  __int64 v332; // rax
  __int64 v333; // rdx
  __int64 v334; // rcx
  __m128i v335; // xmm0
  __int64 v336; // r12
  __int64 v337; // rcx
  __int64 v338; // rdx
  __m128i v339; // xmm0
  __m128i v340; // xmm0
  __m128i *v341; // rax
  __m128i v342; // xmm0
  __m128i *v343; // rax
  __int64 v344; // rax
  __int64 v345; // rsi
  __int64 v346; // rax
  __int64 v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // r15
  __m128i v350; // xmm0
  __int64 v351; // rsi
  __int64 v352; // rax
  __int64 v353; // rcx
  __m128i v354; // xmm0
  __m128i v355; // xmm0
  __m128i *v356; // rax
  __m128i v357; // xmm0
  _OWORD *v358; // rax
  __m128i v359; // xmm0
  _OWORD *v360; // rax
  __int64 v361; // rax
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // rsi
  __int64 v365; // rdi
  __int64 v366; // rax
  __int128 v367; // rdi
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // rax
  __int64 v372; // rdx
  __int64 v373; // rcx
  _QWORD *v374; // rax
  __m128i v375; // xmm0
  __int64 v376; // rax
  __int8 v377; // bl
  __int64 v378; // rdx
  __int64 v379; // rdx
  __int64 v380; // rdx
  __int64 v381; // rdx
  __m128i v382; // xmm0
  _OWORD *v383; // rax
  __int64 v384; // rax
  __int8 v385; // bl
  __int64 v386; // rdx
  __m128i v387; // xmm0
  _OWORD *v388; // rax
  __int64 v389; // rax
  __int8 v390; // bl
  __int64 v391; // rdx
  __m128i v392; // xmm0
  _OWORD *v393; // rax
  __int64 v394; // rax
  __int8 v395; // bl
  __int64 v396; // rdx
  __m128i v397; // xmm0
  _OWORD *v398; // rax
  __int64 v399; // rsi
  __int8 v400; // bl
  __int8 v401; // bl
  __int64 v402; // rdx
  __int64 v403; // rdx
  __int64 v404; // rdx
  __m128i v405; // xmm0
  _OWORD *v406; // rax
  __int64 v407; // rax
  __int8 v408; // bl
  __int64 v409; // rdx
  __m128i v410; // xmm0
  _OWORD *v411; // rax
  __int64 v412; // rax
  __int64 v413; // rcx
  __int8 v414; // bl
  __int64 v415; // rdx
  __m128i v416; // xmm0
  _OWORD *v417; // rax
  __int64 v418; // rax
  __int64 v419; // rdx
  __int64 v420; // rcx
  __int64 v421; // r8
  __int64 v422; // r9
  __int64 v423; // rsi
  __int128 v424; // rax
  __m128i v425; // xmm6
  __m128i v426; // xmm7
  _BYTE *v427; // rax
  __int64 v428; // rcx
  _BYTE *v429; // rbx
  __int64 v430; // rax
  __int64 v431; // rdx
  __int64 v432; // rcx
  __int64 v433; // r8
  __int64 v434; // r9
  __int64 v435; // rcx
  __int64 v436; // rdx
  __int64 v437; // r13
  __int64 v438; // rdi
  __int64 v439; // rsi
  __int64 v440; // rax
  __int64 v441; // rax
  __int64 v442; // rax
  __int64 v443; // rsi
  __int64 v444; // r12
  __int64 v445; // rax
  __int64 v446; // rdx
  __int64 v447; // rcx
  __int64 v448; // rax
  __int64 v449; // rdx
  __int64 v450; // rcx
  __int64 v451; // rax
  unsigned __int64 v452; // rax
  __int64 v453; // r8
  const __m128i *v454; // r9
  __m128i v455; // xmm0
  __m128i v456; // xmm10
  __int64 v457; // rcx
  __int64 v458; // rdx
  __int64 v459; // rdx
  __m128i v460; // xmm11
  const __m128i *v462; // r9
  int v463; // eax
  __int64 v464; // rdx
  __int64 v467; // rdx
  __int8 v468; // r8
  const __m128i *v469; // rdx
  __int64 v470; // r8
  __int64 v471; // rcx
  __int64 v472; // rsi
  __int64 v473; // r15
  __int64 v474; // rax
  __int64 v475; // rdi
  __int128 v476; // kr70_16
  __int64 v477; // rbx
  __int64 v478; // r13
  __int64 v479; // r12
  __int64 v480; // rax
  __int64 v481; // rcx
  unsigned __int64 v482; // rax
  __int64 v483; // rax
  __int64 v484; // rdx
  __int64 v485; // rsi
  __int64 v486; // rbx
  __int64 v487; // rsi
  __int64 v488; // r12
  __int64 v489; // rax
  __int64 v490; // r14
  __int64 v491; // r12
  __int64 v492; // r14
  __int64 v493; // rax
  const __m128i *i; // rdx
  __int64 v495; // r13
  __int64 v496; // rsi
  __int64 v497; // rax
  __int64 v498; // rbx
  unsigned __int64 v499; // r14
  __int64 v501; // rbx
  __m128i v502; // xmm0
  __m128i v503; // xmm9
  unsigned __int64 v504; // r14
  __m128i v505; // xmm10
  __int64 v507; // rbx
  __int64 v508; // rbx
  __int64 v509; // rax
  __int64 v510; // rax
  __int64 v511; // rsi
  __int64 v512; // rax
  __int64 v513; // rdx
  __int64 v514; // rcx
  __int8 v515; // bl
  _DWORD *v516; // rax
  __int64 v517; // rdx
  __int64 v518; // rcx
  __int64 v519; // rax
  __int64 v520; // rdx
  __int64 v521; // rcx
  void *v522; // rax
  __int64 v523; // rdx
  __int64 v524; // r8
  __int64 v525; // rdx
  __int64 v526; // r8
  __int64 v527; // rdx
  __int64 v528; // rcx
  _DWORD *v529; // rax
  __int64 v530; // rdx
  __int64 v531; // rcx
  __int64 v532; // r13
  void *v533; // rax
  __int64 v534; // rdx
  __int64 v535; // rax
  __int64 v536; // rbx
  void *v537; // rax
  __m128i si128; // xmm0
  _BYTE *v539; // rax
  __int64 v540; // rdx
  __int64 v541; // rcx
  __int64 v542; // rax
  _DWORD *v543; // rax
  __int64 v544; // rdx
  __int64 v545; // rcx
  _QWORD *v546; // rax
  __int64 v547; // rdx
  __int64 v548; // rcx
  _QWORD *v549; // rax
  __m128i v550; // xmm0
  __int64 v551; // rsi
  __int64 v552; // rax
  __m128i v553; // xmm0
  __int64 v554; // rax
  __int64 v555; // rdx
  __int64 v556; // rcx
  __int64 v557; // r8
  __int64 v558; // r9
  __int64 v559; // rcx
  __int64 v560; // rdx
  __int64 v561; // rsi
  __int64 v562; // r12
  __int64 v563; // rax
  __int64 v564; // rax
  __int64 v565; // r13
  __int8 v566; // cl
  __int64 v567; // rax
  __int64 v568; // rax
  __int64 v569; // rcx
  __int64 v570; // r12
  __int64 v571; // r12
  __int64 v572; // r12
  __int64 v573; // rax
  __int64 v574; // rcx
  __m128i v575; // xmm0
  __int64 v576; // rcx
  __int64 v578; // rsi
  __int64 v579; // rbx
  __int64 v580; // rsi
  __int64 v581; // rdi
  __int64 v582; // r15
  const __m128i *v583; // r13
  __m128i v585; // xmm0
  __int64 v586; // rax
  __int64 v587; // rdx
  unsigned __int64 v588; // rax
  unsigned __int64 v589; // r14
  __m128i v590; // xmm0
  _OWORD *v591; // rax
  __int64 v592; // rsi
  __int64 v593; // rdi
  __int64 v594; // rbx
  __m128i v596; // xmm0
  __int64 v598; // rax
  __int64 v599; // rdx
  __int64 v600; // rax
  __int64 v601; // rsi
  __int64 v602; // rax
  bool v603; // si
  unsigned __int8 *v604; // rax
  int v605; // esi
  _DWORD *v606; // rcx
  __int64 v607; // rdx
  unsigned __int8 *v608; // rdi
  __int64 v609; // rax
  const __m128i *v610; // rax
  __int64 v611; // rdx
  __int64 v612; // rcx
  _DWORD *v613; // rax
  __m128i v614; // xmm0
  __int64 v615; // rdx
  __int64 v616; // rcx
  _QWORD *v617; // rax
  __int64 v618; // rdx
  __int64 v619; // rcx
  _DWORD *v620; // rax
  __m128i v621; // xmm0
  __int64 v622; // rax
  __int64 v623; // rsi
  __int64 v624; // rax
  __int64 v625; // rbx
  __int64 v627; // rdi
  __int64 v628; // rdi
  __int64 v629; // r15
  __m128i v631; // xmm0
  __m128i v632; // xmm0
  _OWORD *v633; // rax
  __m128i v634; // xmm0
  __m128i v635; // xmm0
  _OWORD *v636; // rax
  __int64 v637; // rax
  __int8 v638; // bl
  __int64 v639; // rdx
  __m128i v640; // xmm0
  _OWORD *v641; // rax
  _BYTE *v642; // rax
  __int64 v643; // rdx
  __int64 v644; // rcx
  void *v645; // rax
  __m128i v646; // xmm0
  _OWORD *v647; // rax
  __int64 v648; // rcx
  __int64 v649; // r13
  __int64 v650; // rcx
  __int64 v651; // r15
  __int64 v652; // rax
  __int8 v653; // si
  __int64 v654; // rdx
  __m128i v655; // xmm0
  _OWORD *v656; // rax
  _BYTE *v657; // rax
  __int64 v658; // rcx
  _BYTE *v659; // rdi
  __int64 v660; // rax
  __int64 v661; // rdx
  __int64 v662; // rcx
  __int64 v663; // r8
  __int64 v664; // r9
  __int64 v665; // rsi
  __int128 v666; // rax
  unsigned __int64 v667; // r12
  __int64 v669; // rcx
  unsigned __int64 v670; // rdx
  __int64 v671; // rax
  __int64 v672; // rbx
  __int64 v673; // r15
  unsigned __int64 v674; // r13
  __int128 v676; // krC0_16
  __m128i v677; // xmm0
  __m128i v678; // xmm9
  __int64 j; // rcx
  unsigned __int64 v680; // r13
  __m128i v681; // xmm10
  __int64 v683; // rax
  unsigned __int64 v684; // rbx
  __int64 v685; // rcx
  __int8 v686; // si
  __int64 v688; // rsi
  __int64 v689; // rbx
  const __m128i *v690; // r14
  __int64 v692; // r15
  __m128i v693; // xmm0
  __int64 v694; // rax
  __int64 v695; // rdx
  unsigned __int64 v696; // rsi
  unsigned __int64 v697; // rax
  __int64 v698; // r14
  __int64 v699; // rsi
  __int64 v700; // rbx
  const __m128i *v701; // r15
  __int64 v703; // r13
  __m128i v704; // xmm0
  __int64 v705; // rax
  __int64 v706; // rdx
  unsigned __int64 v707; // rsi
  unsigned __int64 v708; // rax
  unsigned __int64 v709; // rdx
  __int64 v710; // rax
  __int64 v711; // rbx
  __int64 v712; // rsi
  __int64 v713; // rax
  __int64 v714; // rdx
  __int64 v715; // rcx
  __int64 v716; // r14
  __int64 v717; // r15
  __int64 v718; // rax
  __int64 v719; // rdx
  __int64 v720; // r15
  __int64 v721; // rax
  __int64 v722; // rsi
  __int64 v723; // rbx
  __int64 v724; // r14
  const __m128i *v725; // r15
  __m128i v727; // xmm0
  __int64 v728; // rax
  __int64 v729; // rdx
  unsigned __int64 v730; // rax
  unsigned __int64 v731; // rsi
  unsigned __int64 v732; // rsi
  unsigned __int64 v733; // r12
  __int64 v734; // rsi
  unsigned __int64 v735; // r13
  __int64 v736; // r13
  __int64 v737; // r14
  __int64 v738; // rbx
  __int64 v739; // rax
  unsigned __int64 v740; // rdx
  __int64 v741; // rax
  unsigned __int64 v742; // rdx
  __int64 v743; // rax
  __int64 v744; // rcx
  __int64 v745; // rax
  __int64 v746; // rdx
  __int64 v747; // rcx
  __int64 v748; // r8
  __int64 v749; // r9
  __int64 v750; // rsi
  __int128 v751; // rax
  __int64 v752; // rax
  unsigned __int64 v753; // rdx
  __int64 v754; // rax
  __int64 v755; // rdx
  __int64 v756; // rcx
  __int128 v757; // rdi
  __int64 v758; // rbx
  __int64 v759; // rax
  unsigned __int64 v760; // rbx
  __int64 v761; // rdx
  __int64 v762; // r14
  __int64 v763; // rax
  __m128i v764; // xmm0
  __int64 v765; // r13
  __int8 v766; // cl
  __m128i v767; // xmm0
  __int64 v768; // rdi
  unsigned __int64 v769; // r14
  unsigned __int64 v770; // rbx
  __m128i *v771; // rsi
  __int64 v772; // r13
  unsigned __int64 v773; // rdx
  __int64 v774; // rcx
  __int64 v775; // rsi
  __int64 v777; // r13
  __int64 v778; // r14
  const __m128i *v779; // rsi
  __m128i v781; // xmm0
  __int64 v782; // rax
  __int64 v783; // rdx
  unsigned __int64 v784; // rax
  __int64 v785; // rsi
  _QWORD *v786; // rdi
  __int64 v787; // rdx
  __int64 v788; // rax
  __int64 v789; // rax
  __int64 v790; // r14
  __int64 v791; // rax
  __int64 v792; // rax
  __int64 v793; // rdx
  __int64 v794; // rcx
  void *v795; // rax
  __m128i v796; // xmm0
  _OWORD *v797; // rax
  __int64 v798; // rax
  _QWORD *v799; // rdi
  __int64 v800; // rax
  __int64 v801; // rcx
  __int64 v802; // rbx
  __int64 v803; // rax
  __int64 v804; // rcx
  __m128i v805; // xmm0
  __int64 v806; // r12
  __int128 v807; // xmm1
  __int64 v808; // rax
  __int64 v809; // r13
  __int64 v810; // rax
  __int64 v811; // rdx
  __int64 v812; // rcx
  __int64 v813; // r13
  __int64 v814; // rax
  __int64 v815; // rdx
  __int64 v816; // r13
  __int64 v817; // rax
  __int64 v818; // rcx
  __int64 v819; // r8
  __int64 v820; // rdx
  __int64 v821; // rcx
  _DWORD *v822; // rax
  __int64 v823; // rdx
  __int64 v824; // rcx
  __int64 v825; // rax
  __int64 v826; // rdx
  __int64 v827; // rcx
  _DWORD *v828; // rax
  __int64 v829; // rdx
  __int64 v830; // rcx
  __int128 v831; // krD0_16
  __int64 v832; // r15
  __int64 v833; // rsi
  __int64 v834; // rax
  __int64 v835; // r14
  __int64 v836; // rcx
  __int64 v837; // rsi
  __int64 v838; // rax
  __int64 v839; // rcx
  __m128i v840; // xmm0
  __int128 v841; // krF0_16
  __int64 v842; // r12
  __int64 v843; // r13
  __int64 v844; // rsi
  _QWORD *v845; // rdi
  __int64 v846; // rdx
  __m128i v847; // xmm0
  __m128i v848; // xmm1
  __m128i v849; // xmm2
  __m128i v850; // xmm3
  __m128i *v851; // rax
  __int64 v852; // rdx
  __int64 v853; // rcx
  __int64 v854; // rsi
  __int64 v855; // rcx
  __int64 v856; // rcx
  _BYTE *v857; // rax
  __int64 v858; // rsi
  __int64 v859; // rcx
  _BYTE *v860; // rax
  __int64 v861; // rdx
  __int64 v862; // rcx
  _BYTE *v863; // rax
  __int64 v865; // rcx
  __int64 v866; // rcx
  __int64 v867; // rsi
  __int64 v868; // rsi
  _QWORD v869[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v870; // [rsp+60h] [rbp-20h] BYREF
  __int128 v871; // [rsp+70h] [rbp-10h]
  _QWORD *v872; // [rsp+80h] [rbp+0h]
  __int64 v873; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v874; // [rsp+90h] [rbp+10h]
  __m128i v875; // [rsp+98h] [rbp+18h] BYREF
  __int64 v876; // [rsp+A8h] [rbp+28h]
  __m128i v877; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v878; // [rsp+C0h] [rbp+40h]
  __int64 v879; // [rsp+C8h] [rbp+48h]
  __m128i v880; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v881; // [rsp+E0h] [rbp+60h]
  __m128i v882; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v883; // [rsp+100h] [rbp+80h]
  __int64 v884; // [rsp+120h] [rbp+A0h]
  __int64 v885; // [rsp+128h] [rbp+A8h]
  __m128i v886; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int64 v887; // [rsp+140h] [rbp+C0h]
  __int64 v888; // [rsp+150h] [rbp+D0h]
  __int64 v889; // [rsp+158h] [rbp+D8h]
  __int64 v890; // [rsp+160h] [rbp+E0h]
  __m128i *v891; // [rsp+168h] [rbp+E8h]
  __m128i v892; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v893; // [rsp+180h] [rbp+100h]
  __int64 v894; // [rsp+188h] [rbp+108h]
  __int64 v895; // [rsp+190h] [rbp+110h]
  __m128i v896; // [rsp+198h] [rbp+118h] BYREF
  __int64 v897; // [rsp+1A8h] [rbp+128h]
  char v898; // [rsp+1B7h] [rbp+137h] BYREF
  __int64 v899; // [rsp+1B8h] [rbp+138h]
  __int64 v900; // [rsp+1C0h] [rbp+140h]
  __int64 v901; // [rsp+1C8h] [rbp+148h] BYREF
  __m128i v902; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v903; // [rsp+1E0h] [rbp+160h]
  __int64 v904; // [rsp+1E8h] [rbp+168h]
  __int64 v905; // [rsp+1F0h] [rbp+170h]
  __int64 v906; // [rsp+1F8h] [rbp+178h]
  __m256i v907; // [rsp+200h] [rbp+180h] BYREF
  const __m128i *v908; // [rsp+228h] [rbp+1A8h]
  __int64 v909; // [rsp+230h] [rbp+1B0h]
  __int64 v910; // [rsp+238h] [rbp+1B8h]
  __m256i v911; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v912; // [rsp+260h] [rbp+1E0h]
  __int64 v913; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v914; // [rsp+280h] [rbp+200h]
  __int64 v915; // [rsp+288h] [rbp+208h]
  __int64 v916; // [rsp+290h] [rbp+210h]
  __int64 v917; // [rsp+298h] [rbp+218h]
  char v918; // [rsp+2A2h] [rbp+222h]
  char v919; // [rsp+2A3h] [rbp+223h]
  char v920; // [rsp+2A4h] [rbp+224h]
  char v921; // [rsp+2A5h] [rbp+225h]
  char v922; // [rsp+2A6h] [rbp+226h]
  char v923; // [rsp+2A7h] [rbp+227h]
  char v924; // [rsp+2A8h] [rbp+228h]
  char v925; // [rsp+2A9h] [rbp+229h]
  char v926; // [rsp+2AAh] [rbp+22Ah]
  char v927; // [rsp+2ABh] [rbp+22Bh]
  char v928; // [rsp+2ACh] [rbp+22Ch]
  char v929; // [rsp+2ADh] [rbp+22Dh]
  char v930; // [rsp+2AEh] [rbp+22Eh]
  char v931; // [rsp+2AFh] [rbp+22Fh]
  char v932; // [rsp+2B0h] [rbp+230h]
  char v933; // [rsp+2B1h] [rbp+231h]
  char v934; // [rsp+2B2h] [rbp+232h]
  char v935; // [rsp+2B3h] [rbp+233h]
  char v936; // [rsp+2B4h] [rbp+234h]
  char v937; // [rsp+2B5h] [rbp+235h]
  char v938; // [rsp+2B6h] [rbp+236h]
  char v939; // [rsp+2B7h] [rbp+237h]
  char v940; // [rsp+2B8h] [rbp+238h]
  char v941; // [rsp+2B9h] [rbp+239h]
  char v942; // [rsp+2BAh] [rbp+23Ah]
  char v943; // [rsp+2BBh] [rbp+23Bh]
  char v944; // [rsp+2BCh] [rbp+23Ch]
  char v945; // [rsp+2BDh] [rbp+23Dh]
  char v946; // [rsp+2BEh] [rbp+23Eh]
  char v947; // [rsp+2BFh] [rbp+23Fh]
  char v948; // [rsp+2C0h] [rbp+240h]
  char v949; // [rsp+2C1h] [rbp+241h]
  char v950; // [rsp+2C2h] [rbp+242h]
  char v951; // [rsp+2C3h] [rbp+243h]
  char v952; // [rsp+2C4h] [rbp+244h]
  char v953; // [rsp+2C5h] [rbp+245h]
  char v954; // [rsp+2C6h] [rbp+246h]
  char v955; // [rsp+2C7h] [rbp+247h]
  __int64 v956; // [rsp+2C8h] [rbp+248h]
  __m256i v957; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v958; // [rsp+2F8h] [rbp+278h]
  __m128i *v959; // [rsp+300h] [rbp+280h]
  char v960; // [rsp+309h] [rbp+289h]
  char v961; // [rsp+30Ah] [rbp+28Ah]
  char v962; // [rsp+30Bh] [rbp+28Bh]
  char v963; // [rsp+30Ch] [rbp+28Ch]
  char v964; // [rsp+30Dh] [rbp+28Dh]
  char v965; // [rsp+30Eh] [rbp+28Eh]
  char v966; // [rsp+30Fh] [rbp+28Fh]
  unsigned __int64 v967; // [rsp+310h] [rbp+290h]
  __int64 v968; // [rsp+318h] [rbp+298h]
  char v969; // [rsp+320h] [rbp+2A0h]
  char v970; // [rsp+321h] [rbp+2A1h]
  char v971; // [rsp+322h] [rbp+2A2h]
  char v972; // [rsp+323h] [rbp+2A3h]
  char v973; // [rsp+324h] [rbp+2A4h]
  char v974; // [rsp+326h] [rbp+2A6h]
  char v975; // [rsp+327h] [rbp+2A7h]
  char v976; // [rsp+328h] [rbp+2A8h]
  char v977; // [rsp+329h] [rbp+2A9h]
  char v978; // [rsp+32Ch] [rbp+2ACh]
  char v979; // [rsp+32Dh] [rbp+2ADh]
  char v980; // [rsp+32Eh] [rbp+2AEh]
  char v981; // [rsp+32Fh] [rbp+2AFh]
  __m256i v982; // [rsp+330h] [rbp+2B0h] BYREF
  __m256i v983; // [rsp+350h] [rbp+2D0h] BYREF
  _QWORD v984[3]; // [rsp+370h] [rbp+2F0h] BYREF
  char v985; // [rsp+38Ch] [rbp+30Ch]
  char v986; // [rsp+38Dh] [rbp+30Dh]
  char v987; // [rsp+38Eh] [rbp+30Eh]
  char v988; // [rsp+38Fh] [rbp+30Fh]
  __m128i v989; // [rsp+390h] [rbp+310h] BYREF
  __int128 v990; // [rsp+3A0h] [rbp+320h]
  char v991; // [rsp+3BCh] [rbp+33Ch]
  char v992; // [rsp+3BDh] [rbp+33Dh]
  char v993; // [rsp+3BEh] [rbp+33Eh]
  char v994; // [rsp+3BFh] [rbp+33Fh]
  __m256i v995; // [rsp+3C0h] [rbp+340h] BYREF
  __m256i v996; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v997; // [rsp+400h] [rbp+380h]
  char v998; // [rsp+417h] [rbp+397h]
  __int64 v999; // [rsp+418h] [rbp+398h]
  char v1000; // [rsp+424h] [rbp+3A4h]
  char v1001; // [rsp+425h] [rbp+3A5h]
  char v1002; // [rsp+426h] [rbp+3A6h]
  char v1003; // [rsp+427h] [rbp+3A7h]
  __int64 v1004; // [rsp+428h] [rbp+3A8h]
  char v1005; // [rsp+435h] [rbp+3B5h]
  char v1006; // [rsp+436h] [rbp+3B6h]
  char v1007; // [rsp+437h] [rbp+3B7h]
  __int64 v1008; // [rsp+438h] [rbp+3B8h]

  v1008 = -2;
  v904 = a4;
  v958 = a3;
  v890 = a1;
  v913 = 0;
  v914 = 8;
  v915 = 0;
  v967 = a2;
  v7 = sub_1416724D0(aInstructions, 12, a2);
  if ( v7 && *(_BYTE *)v7 == 3 )
  {
    sub_140891010(&v989, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24));
    *((_QWORD *)&v10 + 1) = v990;
    if ( (_QWORD)v990 )
    {
      v982.m256i_i64[0] = 0;
      v982.m256i_i64[2] = 0;
      nullsub_1(v9, v8);
      v11 = (_DWORD *)sub_140001650(4, 1);
      if ( !v11 )
        sub_14196B2DB(1, 4);
      *v11 = 1701605234;
      v911.m256i_i64[0] = 4;
      v911.m256i_i64[1] = (__int64)v11;
      v911.m256i_i64[2] = 4;
      nullsub_1(v13, v12);
      v14 = sub_140001650(6, 1);
      v1004 = v14;
      if ( !v14 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v14 + 4) = 28005;
      *(_DWORD *)v14 = 1953724787;
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = 6;
      v995.m256i_i64[2] = v14;
      v995.m256i_i64[3] = 6;
      sub_140A68320(&v983, &v982, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v16, v15);
      v17 = (_DWORD *)sub_140001650(7, 1);
      if ( !v17 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v17 + 3) = 1953391988;
      *v17 = 1953394531;
      v911.m256i_i64[0] = 7;
      v911.m256i_i64[1] = (__int64)v17;
      v911.m256i_i64[2] = 7;
      v6 = v989.m128i_i64[1];
      nullsub_1(v19, v18);
      v20 = sub_140001650(*((_QWORD *)&v10 + 1), 1);
      v1004 = v20;
      if ( !v20 )
        sub_14196B2DB(1, *((_QWORD *)&v10 + 1));
      *(_QWORD *)&v10 = v20;
      sub_1419234B0(v20, v6, *((_QWORD *)&v10 + 1));
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = *((_QWORD *)&v10 + 1);
      *(_OWORD *)&v995.m256i_u64[2] = v10;
      sub_140A68320(&v983, &v982, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v982);
      v995.m256i_i64[3] = v982.m256i_i64[2];
      v995.m256i_i8[0] = 5;
      v21 = v915;
      if ( v915 == v913 )
        sub_1419397B0(&v913);
      v22 = v914;
      v23 = 32 * v21;
      v24 = _mm_loadu_si128((const __m128i *)&v995);
      *(__m128i *)(v914 + v23 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
      *(__m128i *)(v22 + v23) = v24;
      v915 = v21 + 1;
    }
    if ( v989.m128i_i64[0] )
      sub_140001660(v989.m128i_i64[1], v989.m128i_i64[0], 1);
  }
  v25 = sub_1416724D0(aInput_3, 5, v967);
  if ( v25 && *(_BYTE *)v25 == 3 )
  {
    v6 = *(_QWORD *)(v25 + 16);
    v28 = *(_QWORD *)(v25 + 24);
    v982.m256i_i64[0] = 0;
    v982.m256i_i64[2] = 0;
    nullsub_1(v27, v26);
    v29 = (_DWORD *)sub_140001650(4, 1);
    if ( !v29 )
      sub_14196B2DB(1, 4);
    *v29 = 1701605234;
    v911.m256i_i64[0] = 4;
    v911.m256i_i64[1] = (__int64)v29;
    v911.m256i_i64[2] = 4;
    nullsub_1(v31, v30);
    v32 = (_DWORD *)sub_140001650(4, 1);
    v1004 = (__int64)v32;
    if ( !v32 )
      sub_14196B2DB(1, 4);
    *v32 = 1919251317;
    v995.m256i_i8[0] = 3;
    v995.m256i_i64[1] = 4;
    v995.m256i_i64[2] = (__int64)v32;
    v995.m256i_i64[3] = 4;
    sub_140A68320(&v983, &v982, &v911, &v995);
    if ( v983.m256i_i8[0] != -1 )
      sub_140032FF0(&v983);
    nullsub_1(v34, v33);
    v35 = (_DWORD *)sub_140001650(7, 1);
    if ( !v35 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v35 + 3) = 1953391988;
    *v35 = 1953394531;
    v911.m256i_i64[0] = 7;
    v911.m256i_i64[1] = (__int64)v35;
    v911.m256i_i64[2] = 7;
    if ( v28 < 0 )
    {
      v5 = 0;
      goto LABEL_26;
    }
    if ( v28 )
    {
      nullsub_1(v37, v36);
      v5 = 1;
      v38 = sub_140001650(v28, 1);
      if ( !v38 )
      {
LABEL_26:
        v955 = 1;
        sub_14196B2DB(v5, v28);
      }
      v39 = v38;
      sub_1419234B0(v38, v6, v28);
    }
    else
    {
      v39 = 1;
    }
    v995.m256i_i8[0] = 3;
    v995.m256i_i64[1] = v28;
    v995.m256i_i64[2] = v39;
    v995.m256i_i64[3] = v28;
    v955 = 0;
    sub_140A68320(&v983, &v982, &v911, &v995);
    if ( v983.m256i_i8[0] != -1 )
      sub_140032FF0(&v983);
    *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v982);
    v995.m256i_i64[3] = v982.m256i_i64[2];
    v995.m256i_i8[0] = 5;
    v40 = v915;
    if ( v915 == v913 )
      sub_1419397B0(&v913);
    v41 = v914;
    v42 = 32 * v40;
    v43 = _mm_loadu_si128((const __m128i *)&v995);
    *(__m128i *)(v914 + v42 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
    *(__m128i *)(v41 + v42) = v43;
    v915 = v40 + 1;
  }
  v44 = sub_1416724D0(aInput_3, 5, v967);
  if ( !v44 || *(_BYTE *)v44 != 4 )
  {
LABEL_382:
    v361 = sub_1416724D0(aModel_2, 5, v967);
    if ( v361 && *(_BYTE *)v361 == 3 )
    {
      v363 = *(_QWORD *)(v361 + 24);
      v904 = v363;
      v958 = *(_QWORD *)(v361 + 16);
    }
    if ( v904 < 0 )
    {
      v364 = 0;
      v365 = v904;
      goto LABEL_387;
    }
    if ( v904 )
    {
      nullsub_1(v363, v362);
      v364 = 1;
      v365 = v904;
      v366 = sub_140001650(v904, 1);
      if ( !v366 )
LABEL_387:
        sub_14196B2DB(v364, v365);
      v968 = v366;
      sub_1419234B0(v366, v958, v365);
    }
    else
    {
      v968 = 1;
    }
    v982.m256i_i64[0] = 0;
    v982.m256i_i64[2] = 0;
    nullsub_1(v363, v362);
    *((_QWORD *)&v367 + 1) = 1;
    v368 = sub_140001650(5, 1);
    if ( !v368 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v368 + 4) = 108;
    *(_DWORD *)v368 = 1701080941;
    v911.m256i_i64[0] = 5;
    v911.m256i_i64[1] = v368;
    v911.m256i_i64[2] = 5;
    *(_QWORD *)&v367 = v904;
    if ( v904 )
    {
      nullsub_1(v370, v369);
      v371 = sub_140001650(v367, 1);
      if ( !v371 )
      {
        v937 = 1;
        sub_14196B2DB(1, v367);
      }
      *((_QWORD *)&v367 + 1) = v371;
      sub_1419234B0(v371, v968, v367);
    }
    v995.m256i_i8[0] = 3;
    *(_OWORD *)&v995.m256i_u64[1] = v367;
    v995.m256i_i64[3] = v367;
    v937 = 0;
    sub_140A68320(&v983, &v982, &v911, &v995);
    if ( v983.m256i_i8[0] != -1 )
      sub_140032FF0(&v983);
    nullsub_1(v373, v372);
    v374 = (_QWORD *)sub_140001650(8, 1);
    if ( !v374 )
      sub_14196B2DB(1, 8);
    *v374 = 0x736567617373656DLL;
    v911.m256i_i64[0] = 8;
    v911.m256i_i64[1] = (__int64)v374;
    v911.m256i_i64[2] = 8;
    v973 = 1;
    sub_1407B3D00(&v995, &v913);
    if ( v995.m256i_i8[0] == -1 )
    {
      v983.m256i_i64[0] = v995.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_11,
        43,
        (unsigned int)&v983,
        (unsigned int)&off_141A52958,
        (__int64)&off_141A53C08);
    }
    v375 = _mm_loadu_si128((const __m128i *)&v995);
    *(_OWORD *)&v983.m256i_u64[2] = *(_OWORD *)&v995.m256i_u64[2];
    *(__m128i *)v983.m256i_i8 = v375;
    v973 = 0;
    sub_140A68320(&v995, &v982, &v911, &v983);
    if ( v995.m256i_i8[0] != -1 )
      sub_140032FF0(&v995);
    v902 = _mm_loadu_si128((const __m128i *)&v982);
    v903 = v982.m256i_i64[2];
    LOBYTE(v901) = 5;
    v376 = sub_1416724D0(aStream_1, 6, v967);
    if ( v376 )
    {
      v377 = *(_BYTE *)v376;
      switch ( *(_BYTE *)v376 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v376 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v376 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v376 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v376 + 16), *(_QWORD *)(v376 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v376 + 24) )
          {
            v378 = *(_QWORD *)(v376 + 8);
            if ( !v378 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v378, *(_QWORD *)(v376 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v377;
      v936 = 1;
      v1004 = sub_1416725D0(aStream_1, 6, &v901);
      sub_140032FF0(v1004);
      v382 = _mm_loadu_si128((const __m128i *)&v995);
      v383 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v383 = v382;
    }
    v384 = sub_1416724D0(aParallelToolCa_0, 19, v967);
    if ( v384 )
    {
      v385 = *(_BYTE *)v384;
      switch ( *(_BYTE *)v384 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v384 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v384 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v384 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v384 + 16), *(_QWORD *)(v384 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v384 + 24) )
          {
            v386 = *(_QWORD *)(v384 + 8);
            if ( !v386 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v386, *(_QWORD *)(v384 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v385;
      v935 = 1;
      v1004 = sub_1416725D0(aParallelToolCa_0, 19, &v901);
      sub_140032FF0(v1004);
      v387 = _mm_loadu_si128((const __m128i *)&v995);
      v388 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v388 = v387;
    }
    v389 = sub_1416724D0(aTemperature, 11, v967);
    if ( v389 )
    {
      v390 = *(_BYTE *)v389;
      switch ( *(_BYTE *)v389 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v389 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v389 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v389 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v389 + 16), *(_QWORD *)(v389 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v389 + 24) )
          {
            v391 = *(_QWORD *)(v389 + 8);
            if ( !v391 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v391, *(_QWORD *)(v389 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v390;
      v934 = 1;
      v1004 = sub_1416725D0(aTemperature, 11, &v901);
      sub_140032FF0(v1004);
      v392 = _mm_loadu_si128((const __m128i *)&v995);
      v393 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v393 = v392;
    }
    v394 = sub_1416724D0(aTopP, 5, v967);
    if ( v394 )
    {
      v395 = *(_BYTE *)v394;
      switch ( *(_BYTE *)v394 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v394 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v394 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v394 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v394 + 16), *(_QWORD *)(v394 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v394 + 24) )
          {
            v396 = *(_QWORD *)(v394 + 8);
            if ( !v396 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v396, *(_QWORD *)(v394 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v395;
      v933 = 1;
      v1004 = sub_1416725D0(aTopP, 5, &v901);
      sub_140032FF0(v1004);
      v397 = _mm_loadu_si128((const __m128i *)&v995);
      v398 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v398 = v397;
    }
    v399 = sub_1416724D0(aMaxOutputToken_3, 17, v967);
    if ( v399 )
    {
      if ( (unsigned __int8)sub_140D6F080(v968, v904) )
      {
        v400 = *(_BYTE *)v399;
        switch ( *(_BYTE *)v399 )
        {
          case 0:
            break;
          case 1:
            v995.m256i_i8[1] = *(_BYTE *)(v399 + 1);
            break;
          case 2:
            *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v399 + 8));
            break;
          case 3:
            sub_1416DB410(&v995.m256i_u64[1], v399 + 8);
            break;
          case 4:
            sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v399 + 16), *(_QWORD *)(v399 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v399 + 24) )
            {
              v402 = *(_QWORD *)(v399 + 8);
              if ( !v402 )
                sub_14196B5D0(&off_141A6CB98);
              sub_140A21590(&v995.m256i_u64[1], v402, *(_QWORD *)(v399 + 16));
            }
            else
            {
              v995.m256i_i64[1] = 0;
              v995.m256i_i64[3] = 0;
            }
            break;
        }
        v995.m256i_i8[0] = v400;
        v931 = 1;
        v1004 = sub_1416725D0(aMaxCompletionT, 21, &v901);
        sub_140032FF0(v1004);
      }
      else
      {
        v401 = *(_BYTE *)v399;
        switch ( *(_BYTE *)v399 )
        {
          case 0:
            break;
          case 1:
            v995.m256i_i8[1] = *(_BYTE *)(v399 + 1);
            break;
          case 2:
            *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v399 + 8));
            break;
          case 3:
            sub_1416DB410(&v995.m256i_u64[1], v399 + 8);
            break;
          case 4:
            sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v399 + 16), *(_QWORD *)(v399 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v399 + 24) )
            {
              v403 = *(_QWORD *)(v399 + 8);
              if ( !v403 )
                sub_14196B5D0(&off_141A6CB98);
              sub_140A21590(&v995.m256i_u64[1], v403, *(_QWORD *)(v399 + 16));
            }
            else
            {
              v995.m256i_i64[1] = 0;
              v995.m256i_i64[3] = 0;
            }
            break;
        }
        v995.m256i_i8[0] = v401;
        v932 = 1;
        v1004 = sub_1416725D0("max_tokens", 10, &v901);
        sub_140032FF0(v1004);
      }
      v405 = _mm_loadu_si128((const __m128i *)&v995);
      v406 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v406 = v405;
    }
    v407 = sub_1416724D0("max_tokens", 10, v967);
    if ( v407 )
    {
      v408 = *(_BYTE *)v407;
      switch ( *(_BYTE *)v407 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v407 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v407 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v407 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v407 + 16), *(_QWORD *)(v407 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v407 + 24) )
          {
            v409 = *(_QWORD *)(v407 + 8);
            if ( !v409 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v409, *(_QWORD *)(v407 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v408;
      v930 = 1;
      v1004 = sub_1416725D0("max_tokens", 10, &v901);
      sub_140032FF0(v1004);
      v410 = _mm_loadu_si128((const __m128i *)&v995);
      v411 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v411 = v410;
    }
    v412 = sub_1416724D0(aMaxCompletionT, 21, v967);
    if ( v412 )
    {
      v414 = *(_BYTE *)v412;
      switch ( *(_BYTE *)v412 )
      {
        case 0:
          break;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v412 + 1);
          break;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v412 + 8));
          break;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v412 + 8);
          break;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v412 + 16), *(_QWORD *)(v412 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v412 + 24) )
          {
            v415 = *(_QWORD *)(v412 + 8);
            if ( !v415 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v415, *(_QWORD *)(v412 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
          break;
      }
      v995.m256i_i8[0] = v414;
      v929 = 1;
      v1004 = sub_1416725D0(aMaxCompletionT, 21, &v901);
      sub_140032FF0(v1004);
      v416 = _mm_loadu_si128((const __m128i *)&v995);
      v417 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v417 = v416;
    }
    v418 = sub_1416AE140(v413);
    v423 = v418;
    if ( *(_BYTE *)(v418 + 16) == 1 )
    {
      v424 = *(_OWORD *)v418;
    }
    else
    {
      *(_QWORD *)&v424 = sub_1416C5230(v420, v419, v421, v422);
      *(_OWORD *)v423 = v424;
      *(_BYTE *)(v423 + 16) = 1;
    }
    *(_QWORD *)v423 = v424 + 1;
    v425 = _mm_loadu_si128((const __m128i *)&xmmword_141A51860);
    *(__m128i *)&v911.m256i_u64[2] = v425;
    v426 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(__m128i *)v911.m256i_i8 = v426;
    v912 = v424;
    v427 = (_BYTE *)sub_1416724D0(aTools_2, 5, v967);
    v429 = v427;
    if ( v427 && *v427 == 4 )
    {
      v892.m128i_i64[0] = 0;
      v892.m128i_i64[1] = 8;
      v893 = 0;
      v963 = 1;
      v430 = sub_1416AE140(v428);
      if ( *(_BYTE *)(v430 + 16) == 1 )
      {
        v435 = *(_QWORD *)v430;
        v436 = *(_QWORD *)(v430 + 8);
      }
      else
      {
        v963 = 1;
        v867 = v430;
        v435 = sub_1416C5230(v432, v431, v433, v434);
        v430 = v867;
        *(_QWORD *)v867 = v435;
        *(_QWORD *)(v867 + 8) = v436;
        *(_BYTE *)(v867 + 16) = 1;
      }
      *(_QWORD *)v430 = v435 + 1;
      *(__m128i *)&v983.m256i_u64[2] = v425;
      *(__m128i *)v983.m256i_i8 = v426;
      v984[0] = v435;
      v984[1] = v436;
      v437 = *((_QWORD *)v429 + 2);
      v438 = v437 + 32LL * *((_QWORD *)v429 + 3);
LABEL_516:
      while ( v437 != v438 )
      {
        v439 = v437;
        v1007 = 1;
        v440 = sub_1416724D0(aType_8, 4, v437);
        v437 += 32;
        if ( v440 )
        {
          if ( *(_BYTE *)v440 == 3 && *(_QWORD *)(v440 + 24) == 9 )
          {
            v441 = *(_QWORD *)(v440 + 16);
            v435 = *(_QWORD *)v441 ^ 0x63617073656D616ELL;
            if ( !(v435 | *(unsigned __int8 *)(v441 + 8) ^ 0x65LL) )
            {
              v1007 = 1;
              v442 = sub_1416724D0(aTools_2, 5, v439);
              if ( v442 )
              {
                if ( *(_BYTE *)v442 == 4 )
                {
                  v443 = *(_QWORD *)(v442 + 16);
                  v444 = v443 + 32LL * *(_QWORD *)(v442 + 24);
                  while ( 1 )
                  {
                    do
                    {
LABEL_524:
                      if ( v443 == v444 )
                        goto LABEL_516;
                      v1007 = 1;
                      v445 = sub_1416724D0(aName_6, 4, v443);
                      v443 += 32;
                    }
                    while ( !v445 || *(_BYTE *)v445 != 3 );
                    v447 = *(_QWORD *)(v445 + 24);
                    v1004 = v447;
                    if ( v447 < 0 )
                      break;
                    if ( v447 )
                    {
                      v999 = *(_QWORD *)(v445 + 16);
                      nullsub_1(v447, v446);
                      v448 = sub_140001650(v1004, 1);
                      if ( !v448 )
                      {
                        v999 = v1004;
                        v859 = 1;
LABEL_1065:
                        v1007 = 1;
                        sub_14196B2DB(v859, v999);
                      }
                      v449 = v999;
                      v999 = v448;
                      sub_1419234B0(v448, v449, v1004);
                      v450 = v1004;
                      v451 = v999;
                    }
                    else
                    {
                      v451 = 1;
                      v450 = v1004;
                    }
                    v995.m256i_i64[0] = v450;
                    v999 = v451;
                    v995.m256i_i64[1] = v451;
                    v995.m256i_i64[2] = v450;
                    v452 = sub_1406CECD0(v984, &v995);
                    v453 = v983.m256i_i64[1];
                    v454 = (const __m128i *)v983.m256i_i64[0];
                    v916 = v452 >> 57;
                    v455 = _mm_cvtsi32_si128(v452 >> 57);
                    v456 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v455, v455), 0), 68);
                    v457 = 0;
                    v917 = v452;
                    v458 = v452;
                    while ( 1 )
                    {
                      v459 = v453 & v458;
                      v460 = _mm_loadu_si128((const __m128i *)((char *)v454 + v459));
                      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v460, v456));
                      if ( (_DWORD)_RAX )
                        break;
LABEL_538:
                      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v460, (__m128i)-1LL)) )
                      {
                        if ( !v983.m256i_i64[2] )
                        {
                          LOBYTE(v454) = 1;
                          sub_141931DB0(&v983, 1, v984, v454);
                          v453 = v983.m256i_i64[1];
                          v454 = (const __m128i *)v983.m256i_i64[0];
                        }
                        v464 = v453 & v917;
                        _RAX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v454
                                                                                               + (v453 & v917))));
                        if ( !(_DWORD)_RAX )
                        {
                          v471 = 16;
                          do
                          {
                            v464 = v453 & (v471 + v464);
                            _RAX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v454 + v464)));
                            v471 += 16;
                          }
                          while ( !(_DWORD)_RAX );
                        }
                        __asm { tzcnt   eax, eax }
                        _RAX = v453 & (v464 + _RAX);
                        v435 = v454->m128i_u8[_RAX];
                        if ( (v435 & 0x80u) == 0LL )
                        {
                          _RAX = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v454));
                          __asm { tzcnt   eax, eax }
                          v435 = v454->m128i_u8[_RAX];
                        }
                        v467 = v453 & (_RAX - 16);
                        v468 = v916;
                        v454->m128i_i8[_RAX] = v916;
                        v454[1].m128i_i8[v467] = v468;
                        v469 = &v454[-2 * _RAX];
                        LOBYTE(v435) = v435 & 1;
                        v470 = v1004;
                        v469[-2].m128i_i64[0] = v1004;
                        v469[-2].m128i_i64[1] = v999;
                        v469[-1].m128i_i64[0] = v470;
                        v469[-1].m128i_i64[1] = 0;
                        *(__m128i *)&v983.m256i_u64[2] = _mm_sub_epi64(
                                                           _mm_load_si128((const __m128i *)&v983.m256i_u64[2]),
                                                           (__m128i)_mm_shuffle_ps(
                                                                      (__m128)_mm_cvtsi32_si128((unsigned __int8)v435),
                                                                      (__m128)xmmword_14196F130,
                                                                      228));
                        ++v469[-1].m128i_i64[1];
                        goto LABEL_524;
                      }
                      v458 = v457 + v459 + 16;
                      v457 += 16;
                    }
                    v908 = v454;
                    v905 = v453;
                    v899 = v457;
                    v910 = v459;
                    while ( 1 )
                    {
                      v906 = _RAX;
                      __asm { tzcnt   eax, eax }
                      v462 = &v454[-2 * (v453 & (v459 + _RAX))];
                      if ( v462[-1].m128i_i64[0] == v1004 )
                      {
                        v958 = (__int64)v462;
                        v463 = sub_141923B40(v462[-2].m128i_i64[1], v999, v1004);
                        v435 = v958;
                        if ( !v463 )
                          break;
                      }
                      _RAX = (unsigned int)(v906 - 1);
                      LOWORD(_RAX) = v906 & (v906 - 1);
                      v454 = v908;
                      v453 = v905;
                      v457 = v899;
                      v459 = v910;
                      if ( !(_WORD)_RAX )
                        goto LABEL_538;
                    }
                    if ( v1004 )
                    {
                      sub_140001660(v999, v1004, 1);
                      v435 = v958;
                    }
                    ++*(_QWORD *)(v435 - 8);
                  }
                  v859 = 0;
                  goto LABEL_1065;
                }
              }
            }
          }
        }
      }
      v472 = *((_QWORD *)v429 + 2);
      v473 = v472 + 32LL * *((_QWORD *)v429 + 3);
      while ( v472 != v473 )
      {
        v1007 = 1;
        v474 = sub_1416724D0(aType_8, 4, v472);
        v475 = v472 + 32;
        if ( v474
          && *(_BYTE *)v474 == 3
          && *(_QWORD *)(v474 + 24) == 9
          && !(**(_QWORD **)(v474 + 16) ^ 0x63617073656D616ELL
             | *(unsigned __int8 *)(*(_QWORD *)(v474 + 16) + 8LL) ^ 0x65LL) )
        {
          v1007 = 1;
          v480 = sub_1416724D0(aName_6, 4, v472);
          v481 = 1;
          if ( v480 && *(_BYTE *)v480 == 3 )
          {
            v481 = *(_QWORD *)(v480 + 16);
            v482 = *(_QWORD *)(v480 + 24);
          }
          else
          {
            v482 = 0;
          }
          v873 = v481;
          v874 = v482;
          v1007 = 1;
          v483 = sub_1416724D0(aTools_2, 5, v472);
          if ( v483 && *(_BYTE *)v483 == 4 )
          {
            v485 = v874;
            if ( v874 < 2 )
            {
              if ( !v874 )
              {
                v886.m128i_i64[0] = 0;
                v886.m128i_i64[1] = 1;
                v887 = 0;
                goto LABEL_579;
              }
LABEL_575:
              v982.m256i_i64[0] = (__int64)&v873;
              v982.m256i_i64[1] = (__int64)sub_140191200;
              v1007 = 1;
              v487 = v483;
              sub_1416DAFA0(&v995, &unk_141A53C57, &v982);
              v483 = v487;
              v886 = _mm_loadu_si128((const __m128i *)&v995);
              v435 = v995.m256i_i64[2];
              v887 = v995.m256i_u64[2];
              goto LABEL_579;
            }
            v486 = v873;
            if ( *(_WORD *)(v873 + v874 - 2) != 24415 )
              goto LABEL_575;
            v488 = v483;
            nullsub_1(v435, v484);
            v489 = sub_140001650(v485, 1);
            if ( !v489 )
            {
              v1007 = 1;
              sub_14196B2DB(1, v485);
            }
            v490 = v489;
            sub_1419234B0(v489, v486, v485);
            v886.m128i_i64[0] = v485;
            v886.m128i_i64[1] = v490;
            v887 = v485;
            v483 = v488;
LABEL_579:
            v491 = *(_QWORD *)(v483 + 16);
            v492 = v491 + 32LL * *(_QWORD *)(v483 + 24);
            v999 = v492;
            if ( v491 != v492 )
            {
              while ( 1 )
              {
                v493 = sub_1416724D0(aName_6, 4, v491);
                if ( !v493 || *(_BYTE *)v493 != 3 )
                  goto LABEL_581;
                v495 = *(_QWORD *)(v493 + 16);
                v496 = *(_QWORD *)(v493 + 24);
                v869[0] = v495;
                v869[1] = v496;
                if ( v887 && (v496 < v887 || (unsigned int)sub_141923B40(v886.m128i_i64[1], v495, v887)) )
                {
                  v995.m256i_i64[0] = (__int64)&v886;
                  v995.m256i_i64[1] = (__int64)sub_1400015F0;
                  v995.m256i_i64[2] = (__int64)v869;
                  v995.m256i_i64[3] = (__int64)sub_140191200;
                  sub_1416DAFA0(&v982, &unk_141A52135, &v995);
                  v882 = _mm_loadu_si128((const __m128i *)&v982);
                  v883 = v982.m256i_i64[2];
                }
                else
                {
                  if ( v496 < 0 )
                  {
                    v855 = 0;
                    goto LABEL_1060;
                  }
                  if ( v496 )
                  {
                    nullsub_1(v435, i);
                    v497 = sub_140001650(v496, 1);
                    if ( !v497 )
                    {
                      v906 = v496;
                      v855 = 1;
LABEL_1060:
                      sub_14196B2DB(v855, v906);
                    }
                    v498 = v497;
                    sub_1419234B0(v497, v495, v496);
                  }
                  else
                  {
                    v498 = 1;
                  }
                  v882.m128i_i64[0] = v496;
                  v906 = v498;
                  v882.m128i_i64[1] = v498;
                  v883 = v496;
                }
                if ( v983.m256i_i64[3] )
                {
                  v1004 = v491;
                  v499 = sub_1406D0E00(v984, v495, v496);
                  _RAX = v499 >> 57;
                  v435 = v983.m256i_i64[1];
                  v501 = v983.m256i_i64[0];
                  v502 = _mm_cvtsi32_si128(v499 >> 57);
                  v503 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v502, v502), 0), 68);
                  for ( i = nullptr; ; ++i )
                  {
                    v504 = v435 & v499;
                    v505 = _mm_loadu_si128((const __m128i *)(v501 + v504));
                    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v505, v503));
                    if ( _R12D )
                      break;
LABEL_601:
                    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v505, (__m128i)-1LL));
                    v491 = v1004;
                    if ( (_DWORD)_RAX )
                      goto LABEL_603;
                    v499 = (unsigned __int64)i[1].m128i_u64 + v504;
                  }
                  v958 = v501;
                  v916 = v435;
                  v908 = i;
                  while ( 1 )
                  {
                    __asm { tzcnt   eax, r12d }
                    v507 = v501 - 32 * (v435 & (v504 + _RAX));
                    if ( v496 == *(_QWORD *)(v507 - 16)
                      && !(unsigned int)sub_141923B40(v495, *(_QWORD *)(v507 - 24), v496) )
                    {
                      break;
                    }
                    _RAX = (unsigned int)(_R12D - 1);
                    LOWORD(_RAX) = _R12D & (_R12D - 1);
                    _R12D = _RAX;
                    v501 = v958;
                    v435 = v916;
                    i = v908;
                    if ( !(_WORD)_RAX )
                      goto LABEL_601;
                  }
                  v491 = v1004;
                  v492 = v999;
                  if ( *(_QWORD *)(v507 - 8) >= 2u )
                    goto LABEL_613;
                }
                else
                {
LABEL_603:
                  v492 = v999;
                }
                if ( v887 )
                {
                  if ( v496 < v887 )
                  {
                    if ( v496 )
                    {
LABEL_610:
                      nullsub_1(v435, i);
                      v509 = sub_140001650(v496, 1);
                      if ( !v509 )
                      {
                        v972 = 1;
                        sub_14196B2DB(1, v496);
                      }
                      v508 = v509;
                      sub_1419234B0(v509, v495, v496);
                    }
                    else
                    {
                      v508 = 1;
                    }
                    v877.m128i_i64[0] = v496;
                    v877.m128i_i64[1] = v508;
                    v878 = v496;
                    goto LABEL_614;
                  }
                  if ( (unsigned int)sub_141923B40(v886.m128i_i64[1], v495, v887) )
                    goto LABEL_610;
                }
LABEL_613:
                v972 = 1;
                sub_1416DB410(&v877, &v882);
                v496 = v878;
LABEL_614:
                if ( v496 == v883 && !(unsigned int)sub_141923B40(v877.m128i_i64[1], v882.m128i_i64[1], v496) )
                {
                  LOBYTE(v495) = 1;
                }
                else
                {
                  v1001 = 1;
                  v1000 = 1;
                  sub_1416DB410(&v995, &v877);
                  v1001 = 0;
                  v1000 = 1;
                  sub_14086D860(&v982, &v911, &v995, &v882);
                  if ( v982.m256i_i64[0] != -1 && v982.m256i_i64[0] )
                    sub_140001660(v982.m256i_i64[1], v982.m256i_i64[0], 1);
                  LODWORD(v495) = 0;
                }
                v1001 = v495;
                v1000 = 1;
                v510 = sub_1416724D0(aDescription_1, 11, v491);
                if ( v510 )
                {
                  if ( *(_BYTE *)v510 == 3 )
                    v511 = *(_QWORD *)(v510 + 16);
                  else
                    v511 = 0;
                  v958 = *(_QWORD *)(v510 + 24);
                }
                else
                {
                  v511 = 0;
                }
                v1001 = v495;
                v1000 = 1;
                v512 = sub_1416724D0(aParameters_0, 10, v491);
                LODWORD(v1004) = v495;
                if ( v512 )
                {
                  v515 = *(_BYTE *)v512;
                  switch ( *(_BYTE *)v512 )
                  {
                    case 0:
                      break;
                    case 1:
                      v995.m256i_i8[1] = *(_BYTE *)(v512 + 1);
                      break;
                    case 2:
                      *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v512 + 8));
                      break;
                    case 3:
                      v1001 = v495;
                      v1000 = 1;
                      sub_1416DB410(&v995.m256i_u64[1], v512 + 8);
                      break;
                    case 4:
                      v523 = *(_QWORD *)(v512 + 16);
                      v524 = *(_QWORD *)(v512 + 24);
                      v1001 = v495;
                      v1000 = 1;
                      sub_1401C07A0(&v995.m256i_u64[1], v523, v524);
                      break;
                    case 5:
                      if ( *(_QWORD *)(v512 + 24) )
                      {
                        v525 = *(_QWORD *)(v512 + 8);
                        if ( !v525 )
                        {
                          v1001 = v495;
                          v1000 = 1;
                          sub_14196B5D0(&off_141A6CB98);
                        }
                        v526 = *(_QWORD *)(v512 + 16);
                        v1001 = v495;
                        v1000 = 1;
                        sub_140A21590(&v995.m256i_u64[1], v525, v526);
                      }
                      else
                      {
                        v995.m256i_i64[1] = 0;
                        v995.m256i_i64[3] = 0;
                      }
                      break;
                  }
                  v995.m256i_i8[0] = v515;
                  *(_OWORD *)&v907.m256i_u64[2] = *(_OWORD *)&v995.m256i_u64[2];
                  v907.m256i_i16[0] = __PAIR16__(v995.m256i_u8[1], v515);
                  *(__int32 *)((char *)v907.m256i_i32 + 2) = *(__int32 *)((char *)v995.m256i_i32 + 2);
                  v907.m256i_i16[3] = v995.m256i_i16[3];
                  v907.m256i_i64[1] = v995.m256i_i64[1];
                }
                else
                {
                  v957.m256i_i64[0] = 0;
                  v957.m256i_i64[2] = 0;
                  nullsub_1(v514, v513);
                  v516 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v516 )
                    sub_14196B2DB(1, 4);
                  *v516 = 1701869940;
                  v989.m128i_i64[0] = 4;
                  v989.m128i_i64[1] = (__int64)v516;
                  *(_QWORD *)&v990 = 4;
                  nullsub_1(v518, v517);
                  v519 = sub_140001650(6, 1);
                  v916 = v519;
                  if ( !v519 )
                    sub_14196B2DB(1, 6);
                  *(_WORD *)(v519 + 4) = 29795;
                  *(_DWORD *)v519 = 1701470831;
                  v995.m256i_i8[0] = 3;
                  v995.m256i_i64[1] = 6;
                  v995.m256i_i64[2] = v519;
                  v995.m256i_i64[3] = 6;
                  sub_140A68320(&v982, &v957, &v989, &v995);
                  if ( v982.m256i_i8[0] != -1 )
                    sub_140032FF0(&v982);
                  nullsub_1(v521, v520);
                  v522 = (void *)sub_140001650(10, 1);
                  if ( !v522 )
                    sub_14196B2DB(1, 10);
                  qmemcpy(v522, "properties", 10);
                  v989.m128i_i64[0] = 10;
                  v989.m128i_i64[1] = (__int64)v522;
                  *(_QWORD *)&v990 = 10;
                  v995.m256i_i64[1] = 0;
                  v995.m256i_i64[3] = 0;
                  v995.m256i_i8[0] = 5;
                  sub_140A68320(&v982, &v957, &v989, &v995);
                  if ( v982.m256i_i8[0] != -1 )
                    sub_140032FF0(&v982);
                  v907.m256i_i64[3] = v957.m256i_i64[2];
                  *(__m128i *)&v907.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
                  v907.m256i_i8[0] = 5;
                }
                v961 = 1;
                v960 = 1;
                sub_140890A00(&v907);
                v875.m128i_i64[0] = 0;
                v876 = 0;
                nullsub_1(v528, v527);
                v529 = (_DWORD *)sub_140001650(4, 1);
                LOBYTE(v916) = v529 == nullptr;
                if ( !v529 )
                {
                  v1006 = 1;
                  v1005 = 1;
                  sub_14196B2DB(1, 4);
                }
                *v529 = 1701667182;
                v989.m128i_i64[0] = 4;
                v989.m128i_i64[1] = (__int64)v529;
                *(_QWORD *)&v990 = 4;
                v995.m256i_i64[3] = v878;
                *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v877);
                v995.m256i_i8[0] = 3;
                v1006 = 1;
                v1005 = 1;
                sub_140A68320(&v982, &v875, &v989, &v995);
                if ( v982.m256i_i8[0] != -1 )
                {
                  v1006 = 1;
                  v1005 = 1;
                  sub_140032FF0(&v982);
                }
                v532 = v958;
                if ( v511 )
                {
                  nullsub_1(v531, v530);
                  v533 = (void *)sub_140001650(11, 1);
                  v534 = v917;
                  if ( !v533 )
                  {
                    v1006 = 1;
                    v1005 = 1;
                    sub_14196B2DB(1, 11);
                  }
                  qmemcpy(v533, "description", 11);
                  v989.m128i_i64[0] = 11;
                  v989.m128i_i64[1] = (__int64)v533;
                  *(_QWORD *)&v990 = 11;
                  if ( v532 < 0 )
                  {
                    v856 = 0;
                    goto LABEL_1062;
                  }
                  if ( v532 )
                  {
                    nullsub_1(0x7470697263736564LL, v534);
                    v535 = sub_140001650(v532, 1);
                    if ( !v535 )
                    {
                      v534 = v532;
                      v856 = 1;
LABEL_1062:
                      v927 = 1;
                      sub_14196B2DB(v856, v534);
                    }
                    v536 = v535;
                    sub_1419234B0(v535, v511, v532);
                  }
                  else
                  {
                    v536 = 1;
                  }
                  v995.m256i_i64[1] = v532;
                  v917 = v536;
                  v995.m256i_i64[2] = v536;
                  v995.m256i_i64[3] = v532;
                  v995.m256i_i8[0] = 3;
                  v927 = 0;
                  sub_140A68320(&v982, &v875, &v989, &v995);
                  if ( v982.m256i_i8[0] != -1 )
                  {
                    v1006 = 1;
                    v1005 = 1;
                    sub_140032FF0(&v982);
                  }
                }
                nullsub_1(v531, v530);
                v537 = (void *)sub_140001650(10, 1);
                if ( !v537 )
                {
                  v1006 = 1;
                  v1005 = 1;
                  sub_14196B2DB(1, 10);
                }
                qmemcpy(v537, "parameters", 10);
                v989.m128i_i64[0] = 10;
                v989.m128i_i64[1] = (__int64)v537;
                *(_QWORD *)&v990 = 10;
                si128 = _mm_load_si128((const __m128i *)&v907);
                *(_OWORD *)&v995.m256i_u64[2] = *(_OWORD *)&v907.m256i_u64[2];
                *(__m128i *)v995.m256i_i8 = si128;
                v1006 = 1;
                v1005 = 0;
                sub_140A68320(&v982, &v875, &v989, &v995);
                if ( v982.m256i_i8[0] != -1 )
                {
                  v1006 = 1;
                  v1005 = 0;
                  sub_140032FF0(&v982);
                }
                v1006 = 1;
                v1005 = 0;
                v539 = (_BYTE *)sub_1416724D0(aStrict_1, 6, v491);
                if ( v539 && *v539 == 1 && (v539[1] & 1) != 0 )
                {
                  nullsub_1(v541, v540);
                  v542 = sub_140001650(6, 1);
                  if ( !v542 )
                  {
                    v1006 = 1;
                    v1005 = 0;
                    sub_14196B2DB(1, 6);
                  }
                  *(_WORD *)(v542 + 4) = 29795;
                  *(_DWORD *)v542 = 1769108595;
                  v989.m128i_i64[0] = 6;
                  v989.m128i_i64[1] = v542;
                  *(_QWORD *)&v990 = 6;
                  v995.m256i_i16[0] = 257;
                  v1006 = 1;
                  v1005 = 0;
                  sub_140A68320(&v982, &v875, &v989, &v995);
                  if ( v982.m256i_i8[0] != -1 )
                  {
                    v1006 = 1;
                    v1005 = 0;
                    sub_140032FF0(&v982);
                  }
                }
                v880.m128i_i64[0] = 0;
                v881 = 0;
                nullsub_1(v541, v540);
                v543 = (_DWORD *)sub_140001650(4, 1);
                if ( !v543 )
                {
                  v994 = 1;
                  sub_14196B2DB(1, 4);
                }
                *v543 = 1701869940;
                v989.m128i_i64[0] = 4;
                v989.m128i_i64[1] = (__int64)v543;
                *(_QWORD *)&v990 = 4;
                nullsub_1(v545, v544);
                v546 = (_QWORD *)sub_140001650(8, 1);
                v958 = (__int64)v546;
                if ( !v546 )
                  sub_14196B2DB(1, 8);
                *v546 = 0x6E6F6974636E7566LL;
                v995.m256i_i8[0] = 3;
                v995.m256i_i64[1] = 8;
                v995.m256i_i64[2] = (__int64)v546;
                v995.m256i_i64[3] = 8;
                sub_140A68320(&v982, &v880, &v989, &v995);
                if ( v982.m256i_i8[0] != -1 )
                {
                  v994 = 1;
                  sub_140032FF0(&v982);
                }
                nullsub_1(v548, v547);
                v549 = (_QWORD *)sub_140001650(8, 1);
                if ( !v549 )
                {
                  v994 = 1;
                  sub_14196B2DB(1, 8);
                }
                *v549 = 0x6E6F6974636E7566LL;
                v896.m128i_i64[0] = 8;
                v896.m128i_i64[1] = (__int64)v549;
                v897 = 8;
                v995.m256i_i64[3] = v876;
                *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v875);
                v995.m256i_i8[0] = 5;
                v971 = 1;
                sub_140B73E90(&v982, &v995);
                if ( v982.m256i_i8[0] == -1 )
                {
                  v989.m128i_i64[0] = v982.m256i_i64[1];
                  sub_14196B5F0(
                    (unsigned int)aCalledResultUn_11,
                    43,
                    (unsigned int)&v989,
                    (unsigned int)&off_141A52958,
                    (__int64)&off_141A53C60);
                }
                v550 = _mm_loadu_si128((const __m128i *)&v982);
                v990 = *(_OWORD *)&v982.m256i_u64[2];
                v989 = v550;
                v971 = 0;
                sub_140A68320(&v982, &v880, &v896, &v989);
                if ( v982.m256i_i8[0] != -1 )
                  sub_140032FF0(&v982);
                v994 = 0;
                sub_140032FF0(&v995);
                v957.m256i_i64[3] = v881;
                *(__m128i *)&v957.m256i_u64[1] = _mm_loadu_si128(&v880);
                v957.m256i_i8[0] = 5;
                v551 = v893;
                if ( v893 == v892.m128i_i64[0] )
                  sub_1419397B0(&v892);
                v552 = v892.m128i_i64[1];
                v435 = 32 * v551;
                v553 = _mm_loadu_si128((const __m128i *)&v957);
                *(_OWORD *)(v892.m128i_i64[1] + v435 + 16) = *(_OWORD *)&v957.m256i_u64[2];
                *(__m128i *)(v552 + v435) = v553;
                v893 = v551 + 1;
                if ( (_BYTE)v1004 && v882.m128i_i64[0] )
                {
                  sub_140001660(v882.m128i_i64[1], v882.m128i_i64[0], 1);
                  v491 += 32;
                  if ( v491 == v492 )
                    break;
                }
                else
                {
LABEL_581:
                  v491 += 32;
                  if ( v491 == v492 )
                    break;
                }
              }
            }
            if ( v886.m128i_i64[0] )
              sub_140001660(v886.m128i_i64[1], v886.m128i_i64[0], 1);
            v472 = v475;
          }
          else
          {
            v472 += 32;
          }
        }
        else
        {
          v1007 = 1;
          sub_1408AAEB0(&v982, v472);
          v476 = *(_OWORD *)v982.m256i_i8;
          v477 = v982.m256i_i64[2];
          v478 = 32 * v982.m256i_i64[2];
          v995.m256i_i64[0] = v982.m256i_i64[1];
          v995.m256i_i64[1] = v982.m256i_i64[1];
          v995.m256i_i64[2] = v982.m256i_i64[0];
          v995.m256i_i64[3] = v982.m256i_i64[1] + 32 * v982.m256i_i64[2];
          v479 = v893;
          if ( v982.m256i_i64[2] > (unsigned __int64)(v892.m128i_i64[0] - v893) )
          {
            sub_141939070((unsigned int)&v892, v893, v982.m256i_i32[4], 8, 32);
            v479 = v893;
          }
          else if ( !v982.m256i_i64[2] )
          {
            goto LABEL_562;
          }
          sub_1419234B0(v892.m128i_i64[1] + 32 * v479, *((_QWORD *)&v476 + 1), v478);
LABEL_562:
          v893 = v477 + v479;
          if ( (_QWORD)v476 )
            sub_140001660(*((_QWORD *)&v476 + 1), 32 * v476, 8);
          v472 += 32;
        }
      }
      v881 = v893;
      v880 = _mm_loadu_si128(&v892);
      v962 = 1;
      v554 = sub_1416AE140(v435);
      if ( *(_BYTE *)(v554 + 16) == 1 )
      {
        v559 = *(_QWORD *)v554;
        v560 = *(_QWORD *)(v554 + 8);
      }
      else
      {
        v962 = 1;
        v868 = v554;
        v559 = sub_1416C5230(v556, v555, v557, v558);
        v554 = v868;
        *(_QWORD *)v868 = v559;
        *(_QWORD *)(v868 + 8) = v560;
        *(_BYTE *)(v868 + 16) = 1;
      }
      *(_QWORD *)v554 = v559 + 1;
      *(__m128i *)&v995.m256i_u64[2] = v425;
      *(__m128i *)v995.m256i_i8 = v426;
      v996.m256i_i64[0] = v559;
      v996.m256i_i64[1] = v560;
      v561 = v881;
      v562 = 32 * v881;
      if ( v881 )
      {
        nullsub_1(v559, v560);
        v563 = sub_140001650(v562, 8);
        if ( !v563 )
        {
          v928 = 1;
          sub_14196B2DB(8, v562);
        }
      }
      else
      {
        v563 = 8;
      }
      v896.m128i_i64[0] = v561;
      v896.m128i_i64[1] = v563;
      v897 = 0;
      v5 = v880.m128i_i64[1] + v562;
      v989.m128i_i64[0] = v880.m128i_i64[1];
      v989.m128i_i64[1] = v880.m128i_i64[1];
      v958 = v880.m128i_i64[0];
      *(_QWORD *)&v990 = v880.m128i_i64[0];
      *((_QWORD *)&v990 + 1) = v5;
      v916 = v880.m128i_i64[1];
      v564 = v880.m128i_i64[1];
      v565 = v5;
      if ( v880.m128i_i64[1] != v5 )
      {
        while ( 1 )
        {
          v6 = v564 + 32;
          v989.m128i_i64[1] = v564 + 32;
          v566 = *(_BYTE *)v564;
          *(_OWORD *)((char *)&v957.m256i_u64[1] + 7) = *(_OWORD *)(v564 + 16);
          *(_OWORD *)v957.m256i_i8 = *(_OWORD *)(v564 + 1);
          if ( v566 == -1 )
          {
LABEL_709:
            v576 = v6;
            goto LABEL_710;
          }
          v982.m256i_i8[0] = v566;
          *(_OWORD *)&v982.m256i_u64[2] = *(_OWORD *)((char *)&v957.m256i_u64[1] + 7);
          *(__m128i *)&v982.m256i_i8[1] = _mm_load_si128((const __m128i *)&v957);
          v987 = 1;
          v567 = sub_1416724D0(aFunction_0, 8, &v982);
          if ( !v567 )
            break;
          v987 = 1;
          v568 = sub_1416724D0(aName_6, 4, v567);
          if ( !v568 || *(_BYTE *)v568 != 3 )
            break;
          v569 = *(_QWORD *)(v568 + 24);
          if ( v569 < 0 )
          {
            v570 = 0;
            goto LABEL_707;
          }
          v999 = *(_QWORD *)(v568 + 24);
          if ( !v569 )
            break;
          v917 = *(_QWORD *)(v568 + 16);
          nullsub_1(v569, v560);
          v570 = 1;
          v1004 = sub_140001650(v999, 1);
          if ( !v1004 )
          {
            v1004 = v999;
LABEL_707:
            v987 = 1;
            sub_14196B2DB(v570, v1004);
          }
          v571 = v999;
          sub_1419234B0(v1004, v917, v999);
          v907.m256i_i64[0] = v571;
          v907.m256i_i64[1] = v1004;
          v907.m256i_i64[2] = v571;
          v986 = 0;
          v889 = v1004;
          v888 = v571;
          v985 = 1;
          if ( !(unsigned __int8)sub_140871180((__int64)&v995, &v907) )
          {
            v572 = v897;
            if ( v897 == v896.m128i_i64[0] )
LABEL_700:
              sub_1419397B0(&v896);
LABEL_701:
            v573 = v896.m128i_i64[1];
            v574 = 32 * v572;
            v575 = _mm_loadu_si128((const __m128i *)&v982);
            *(_OWORD *)(v896.m128i_i64[1] + v574 + 16) = *(_OWORD *)&v982.m256i_u64[2];
            *(__m128i *)(v573 + v574) = v575;
            v897 = v572 + 1;
            goto LABEL_702;
          }
          sub_140032FF0(&v982);
LABEL_702:
          v564 = v6;
          v5 = v565;
          if ( v6 == v565 )
            goto LABEL_708;
        }
        v572 = v897;
        v1004 = 1;
        if ( v897 == v896.m128i_i64[0] )
          goto LABEL_700;
        goto LABEL_701;
      }
LABEL_708:
      v576 = v5;
LABEL_710:
      v5 = (unsigned __int64)(v5 - v576) >> 5;
      v999 = v5;
      v1004 = 0;
      v917 = v576;
      while ( 1 )
      {
        HIDWORD(_RAX) = HIDWORD(v1004);
        if ( v999 == v1004 )
          break;
        ++v1004;
        v578 = v576 + 32;
        sub_1401AB4D0(v576, v560);
        v576 = v578;
      }
      if ( v958 )
        sub_140001660(v916, 32 * v958, 8);
      v579 = v896.m128i_i64[1];
      v580 = v896.m128i_i64[0];
      v581 = v897;
      v6 = v995.m256i_i64[1];
      if ( v995.m256i_i64[1] )
      {
        v1004 = v896.m128i_i64[1];
        v582 = v995.m256i_i64[3];
        if ( v995.m256i_i64[3] )
        {
          v5 = v995.m256i_i64[0];
          v583 = (const __m128i *)(v995.m256i_i64[0] + 16);
          _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v995.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_EBX )
            {
              do
              {
                v585 = _mm_load_si128(v583);
                v5 -= 384;
                ++v583;
                _EBX = _mm_movemask_epi8(v585) ^ 0xFFFF;
              }
              while ( !_EBX );
            }
            __asm { tzcnt   eax, ebx }
            v586 = -3 * _RAX;
            v587 = *(_QWORD *)(v5 + 8 * v586 - 24);
            if ( v587 )
              sub_140001660(*(_QWORD *)(v5 + 8 * v586 - 16), v587, 1);
            --v582;
            _RAX = _EBX & (unsigned int)(_EBX - 1);
            _EBX &= _EBX - 1;
          }
          while ( v582 );
        }
        v588 = (24 * v6 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v589 = v588 + v6;
        v99 = v589 == -17;
        v6 = v589 + 17;
        v579 = v1004;
        if ( !v99 )
          sub_140001660(v995.m256i_i64[0] - v588, v6, 16);
      }
      if ( v581 )
      {
        v995.m256i_i64[1] = v580;
        v995.m256i_i64[2] = v579;
        v995.m256i_i64[3] = v581;
        v995.m256i_i8[0] = 4;
        v926 = 1;
        v1004 = sub_1416725D0(aTools_2, 5, &v901);
        sub_140032FF0(v1004);
        v590 = _mm_loadu_si128((const __m128i *)&v995);
        v591 = (_OWORD *)v1004;
        *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
        *v591 = v590;
      }
      else if ( v580 )
      {
        sub_140001660(v579, 32 * v580, 8);
      }
      v592 = v983.m256i_i64[1];
      if ( v983.m256i_i64[1] )
      {
        v593 = v983.m256i_i64[3];
        if ( v983.m256i_i64[3] )
        {
          v594 = v983.m256i_i64[0];
          v6 = v983.m256i_i64[0] + 16;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v983.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v596 = _mm_load_si128((const __m128i *)v6);
                v594 -= 512;
                v6 += 16;
                _R15D = _mm_movemask_epi8(v596) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   ecx, r15d }
            v598 = v594 - (unsigned int)(32 * _ECX);
            v599 = *(_QWORD *)(v598 - 32);
            if ( v599 )
              sub_140001660(*(_QWORD *)(v598 - 24), v599, 1);
            --v593;
            _R15D &= _R15D - 1;
          }
          while ( v593 );
        }
        v600 = 32 * v592;
        v601 = 33 * v592 + 49;
        if ( v601 )
          sub_140001660(v983.m256i_i64[0] - v600 - 32, v601, 16);
      }
    }
    v602 = sub_1416724D0(aTools_2, 5, &v901);
    if ( v602 && *(_BYTE *)v602 == 4 )
    {
      v603 = *(_QWORD *)(v602 + 24) != 0;
      if ( *(_QWORD *)(v602 + 24) )
        goto LABEL_747;
    }
    else
    {
      v603 = 0;
    }
    if ( (_BYTE)v901 == 5 )
    {
      sub_140A13D20(&v995, &v902, aParallelToolCa_0, 19);
      if ( v995.m256i_i8[0] != -1 )
        sub_140032FF0(&v995);
    }
LABEL_747:
    if ( v603 )
    {
      v604 = (unsigned __int8 *)sub_1416724D0(aToolChoice_0, 11, v967);
      if ( v604 )
      {
        v605 = *v604;
        if ( v605 == 5 )
        {
          v608 = v604;
          v609 = sub_1416724D0(aType_8, 4, v604);
          if ( !v609 )
            goto LABEL_793;
          if ( *(_BYTE *)v609 != 3 )
            goto LABEL_793;
          if ( *(_QWORD *)(v609 + 24) != 8 )
            goto LABEL_793;
          if ( **(_QWORD **)(v609 + 16) != 0x6E6F6974636E7566LL )
            goto LABEL_793;
          v610 = (const __m128i *)sub_1416724D0(aName_6, 4, v608);
          if ( !v610 || v610->m128i_i8[0] != 3 )
            goto LABEL_793;
          v896 = _mm_loadu_si128(v610 + 1);
          v907.m256i_i64[0] = 0;
          v907.m256i_i64[2] = 0;
          nullsub_1(v612, v611);
          v613 = (_DWORD *)sub_140001650(4, 1);
          if ( !v613 )
            sub_14196B2DB(1, 4);
          *v613 = 1701869940;
          v982.m256i_i64[0] = 4;
          v982.m256i_i64[1] = (__int64)v613;
          v982.m256i_i64[2] = 4;
          v970 = 1;
          sub_140B72ED0((__int64)&v995, (__int64 *)&off_141A52158);
          if ( v995.m256i_i8[0] == -1 )
          {
            v983.m256i_i64[0] = v995.m256i_i64[1];
            sub_14196B5F0(
              (unsigned int)aCalledResultUn_11,
              43,
              (unsigned int)&v983,
              (unsigned int)&off_141A52958,
              (__int64)&off_141A54088);
          }
          v614 = _mm_loadu_si128((const __m128i *)&v995);
          *(_OWORD *)&v983.m256i_u64[2] = *(_OWORD *)&v995.m256i_u64[2];
          *(__m128i *)v983.m256i_i8 = v614;
          v970 = 0;
          sub_140A68320(&v995, &v907, &v982, &v983);
          if ( v995.m256i_i8[0] != -1 )
            sub_140032FF0(&v995);
          nullsub_1(v616, v615);
          v617 = (_QWORD *)sub_140001650(8, 1);
          if ( !v617 )
            sub_14196B2DB(1, 8);
          *v617 = 0x6E6F6974636E7566LL;
          v957.m256i_i64[0] = 8;
          v957.m256i_i64[1] = (__int64)v617;
          v957.m256i_i64[2] = 8;
          v989.m128i_i64[0] = 0;
          *(_QWORD *)&v990 = 0;
          nullsub_1(v619, v618);
          v620 = (_DWORD *)sub_140001650(4, 1);
          if ( !v620 )
            sub_14196B2DB(1, 4);
          *v620 = 1701667182;
          v982.m256i_i64[0] = 4;
          v982.m256i_i64[1] = (__int64)v620;
          v982.m256i_i64[2] = 4;
          v969 = 1;
          sub_140B72ED0((__int64)&v995, v896.m128i_i64);
          if ( v995.m256i_i8[0] == -1 )
          {
            v983.m256i_i64[0] = v995.m256i_i64[1];
            sub_14196B5F0(
              (unsigned int)aCalledResultUn_11,
              43,
              (unsigned int)&v983,
              (unsigned int)&off_141A52958,
              (__int64)&off_141A54088);
          }
          v621 = _mm_loadu_si128((const __m128i *)&v995);
          *(_OWORD *)&v983.m256i_u64[2] = *(_OWORD *)&v995.m256i_u64[2];
          *(__m128i *)v983.m256i_i8 = v621;
          v969 = 0;
          sub_140A68320(&v995, &v989, &v982, &v983);
          if ( v995.m256i_i8[0] != -1 )
            sub_140032FF0(&v995);
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v989);
          v995.m256i_i64[3] = v990;
          v995.m256i_i8[0] = 5;
          v925 = 0;
          sub_140A68320(&v983, &v907, &v957, &v995);
          if ( v983.m256i_i8[0] != -1 )
            sub_140032FF0(&v983);
          *(_OWORD *)((char *)&v995.m256i_u32[1] + 3) = *(_OWORD *)v907.m256i_i8;
          *(__int64 *)((char *)&v995.m256i_i64[2] + 7) = v907.m256i_i64[2];
        }
        else
        {
          if ( v605 != 3 )
            goto LABEL_793;
          v606 = *((_DWORD **)v604 + 2);
          v607 = *((_QWORD *)v604 + 3);
          if ( v607 == 4 )
          {
            if ( *v606 != 1869903201 && *v606 != 1701736302 )
              goto LABEL_793;
          }
          else if ( v607 != 8 || *(_QWORD *)v606 != 0x6465726975716572LL )
          {
            goto LABEL_793;
          }
          sub_1416DB410(&v983, v604 + 8);
          *(__int64 *)((char *)&v995.m256i_i64[2] + 7) = v983.m256i_i64[2];
          *(_OWORD *)((char *)&v995.m256i_u32[1] + 3) = *(_OWORD *)v983.m256i_i8;
        }
        *(_OWORD *)v982.m256i_i8 = *(_OWORD *)v995.m256i_i8;
        *(_OWORD *)((char *)&v982.m256i_u64[1] + 7) = *(_OWORD *)((char *)&v995.m256i_u64[1] + 7);
        v983.m256i_i8[0] = v605;
        *(__m128i *)&v983.m256i_i8[1] = _mm_load_si128((const __m128i *)&v982);
        *(_OWORD *)&v983.m256i_u64[2] = *(_OWORD *)((char *)&v995.m256i_u64[1] + 7);
        v992 = 1;
        v622 = sub_1416724D0(aFunction_0, 8, &v983);
        v623 = v622;
        if ( v622 )
        {
          v992 = 1;
          v624 = sub_1416724D0(aName_6, 4, v622);
          if ( v624 )
          {
            if ( *(_BYTE *)v624 == 3 )
            {
              v6 = *(_QWORD *)(v624 + 16);
              v625 = *(_QWORD *)(v624 + 24);
              HIDWORD(_RAX) = (unsigned __int64)sub_1401E7560((unsigned int)&v995, v625, 0, 1, 1) >> 32;
              if ( v995.m256i_i32[0] == 1 )
              {
                v992 = 1;
                sub_14196B2DB(v995.m256i_i64[1], v995.m256i_i64[2]);
              }
              v627 = v995.m256i_i64[2];
              v999 = v995.m256i_i64[1];
              if ( v625 )
                sub_1419234B0(v995.m256i_i64[2], v6, v625);
              v1004 = v627;
              v628 = v911.m256i_i64[3];
              if ( v911.m256i_i64[3] )
              {
                v629 = v911.m256i_i64[0];
                _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v911.m256i_i64[0]));
                v5 = v911.m256i_i64[0] + 16;
                while ( 1 )
                {
                  if ( !(_WORD)_R13D )
                  {
                    do
                    {
                      v631 = _mm_load_si128((const __m128i *)v5);
                      v629 -= 768;
                      v5 += 16;
                      _R13D = _mm_movemask_epi8(v631) ^ 0xFFFF;
                    }
                    while ( !_R13D );
                  }
                  __asm { tzcnt   eax, r13d }
                  v6 = -48 * _RAX;
                  if ( *(_QWORD *)(v629 - 48 * _RAX - 8) == v625 )
                  {
                    v6 = v629 - 48 * _RAX;
                    if ( !(unsigned int)sub_141923B40(*(_QWORD *)(v6 - 16), v1004, v625) )
                      break;
                  }
                  _RAX = _R13D & (unsigned int)(_R13D - 1);
                  _R13D &= _R13D - 1;
                  if ( !--v628 )
                    goto LABEL_790;
                }
                v6 -= 48;
                sub_1416DB410(&v989, v6);
                v995.m256i_i64[3] = v990;
                *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v989);
                v995.m256i_i8[0] = 3;
                v924 = 1;
                v958 = sub_1416725D0(aName_6, 4, v623);
                sub_140032FF0(v958);
                v632 = _mm_loadu_si128((const __m128i *)&v995);
                v633 = (_OWORD *)v958;
                *(_OWORD *)(v958 + 16) = *(_OWORD *)&v995.m256i_u64[2];
                *v633 = v632;
              }
LABEL_790:
              if ( v999 )
                sub_140001660(v1004, v999, 1);
            }
          }
        }
        v634 = _mm_loadu_si128((const __m128i *)&v983);
        *(_OWORD *)&v995.m256i_u64[2] = *(_OWORD *)&v983.m256i_u64[2];
        *(__m128i *)v995.m256i_i8 = v634;
        v923 = 1;
        v1004 = sub_1416725D0(aToolChoice_0, 11, &v901);
        sub_140032FF0(v1004);
        v635 = _mm_load_si128((const __m128i *)&v995);
        v636 = (_OWORD *)v1004;
        *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
        *v636 = v635;
      }
    }
LABEL_793:
    sub_140D6D090((unsigned int)&v901, v967, a5, v968, v904);
    v637 = sub_1416724D0(aStopSequences, 14, v967);
    if ( v637 )
    {
      v638 = *(_BYTE *)v637;
      switch ( *(_BYTE *)v637 )
      {
        case 0:
          goto LABEL_803;
        case 1:
          v995.m256i_i8[1] = *(_BYTE *)(v637 + 1);
          goto LABEL_803;
        case 2:
          *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v637 + 8));
          goto LABEL_803;
        case 3:
          sub_1416DB410(&v995.m256i_u64[1], v637 + 8);
          goto LABEL_803;
        case 4:
          sub_1401C07A0(&v995.m256i_u64[1], *(_QWORD *)(v637 + 16), *(_QWORD *)(v637 + 24));
          goto LABEL_803;
        case 5:
          if ( *(_QWORD *)(v637 + 24) )
          {
            v639 = *(_QWORD *)(v637 + 8);
            if ( !v639 )
              sub_14196B5D0(&off_141A6CB98);
            sub_140A21590(&v995.m256i_u64[1], v639, *(_QWORD *)(v637 + 16));
          }
          else
          {
            v995.m256i_i64[1] = 0;
            v995.m256i_i64[3] = 0;
          }
LABEL_803:
          v995.m256i_i8[0] = v638;
          v922 = 1;
          v1004 = sub_1416725D0(aStop, 4, &v901);
          sub_140032FF0(v1004);
          v640 = _mm_loadu_si128((const __m128i *)&v995);
          v641 = (_OWORD *)v1004;
          *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
          *v641 = v640;
          break;
        default:
          goto LABEL_709;
      }
    }
    v642 = (_BYTE *)sub_1416724D0(aStream_1, 6, v967);
    if ( v642 && *v642 == 1 && (v642[1] & 1) != 0 )
    {
      v989.m128i_i64[0] = 0;
      *(_QWORD *)&v990 = 0;
      nullsub_1(v644, v643);
      v645 = (void *)sub_140001650(13, 1);
      if ( !v645 )
        sub_14196B2DB(1, 13);
      qmemcpy(v645, "include_usage", 13);
      v982.m256i_i64[0] = 13;
      v982.m256i_i64[1] = (__int64)v645;
      v982.m256i_i64[2] = 13;
      v995.m256i_i16[0] = 257;
      sub_140A68320(&v983, &v989, &v982, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v989);
      v995.m256i_i64[3] = v990;
      v995.m256i_i8[0] = 5;
      v921 = 1;
      v1004 = sub_1416725D0(aStreamOptions, 14, &v901);
      sub_140032FF0(v1004);
      v646 = _mm_loadu_si128((const __m128i *)&v995);
      v647 = (_OWORD *)v1004;
      *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *v647 = v646;
    }
    v995.m256i_i64[1] = 4;
    v995.m256i_i64[2] = (__int64)aFrequencyPenal;
    v995.m256i_i64[3] = 17;
    v996.m256i_i64[0] = (__int64)aPresencePenalt;
    v996.m256i_i64[1] = 16;
    v996.m256i_i64[2] = (__int64)aSeed;
    v996.m256i_i64[3] = 4;
    *(_QWORD *)&v997 = aResponseFormat;
    *((_QWORD *)&v997 + 1) = 15;
    v648 = 0;
    while ( v648 != 4 )
    {
      v649 = v648 + 1;
      v995.m256i_i64[0] = v648 + 1;
      v650 = 2 * v648;
      v6 = v995.m256i_i64[v650 + 2];
      v651 = v995.m256i_i64[v650 + 3];
      v652 = sub_1416724D0(v6, v651, v967);
      v648 = v649;
      if ( v652 )
      {
        v653 = *(_BYTE *)v652;
        switch ( *(_BYTE *)v652 )
        {
          case 0:
            goto LABEL_823;
          case 1:
            v983.m256i_i8[1] = *(_BYTE *)(v652 + 1);
            goto LABEL_823;
          case 2:
            *(__m128i *)&v983.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v652 + 8));
            goto LABEL_823;
          case 3:
            sub_1416DB410(&v983.m256i_u64[1], v652 + 8);
            goto LABEL_823;
          case 4:
            sub_1401C07A0(&v983.m256i_u64[1], *(_QWORD *)(v652 + 16), *(_QWORD *)(v652 + 24));
            goto LABEL_823;
          case 5:
            if ( *(_QWORD *)(v652 + 24) )
            {
              v654 = *(_QWORD *)(v652 + 8);
              if ( !v654 )
                sub_14196B5D0(&off_141A6CB98);
              sub_140A21590(&v983.m256i_u64[1], v654, *(_QWORD *)(v652 + 16));
            }
            else
            {
              v983.m256i_i64[1] = 0;
              v983.m256i_i64[3] = 0;
            }
LABEL_823:
            v983.m256i_i8[0] = v653;
            v918 = 1;
            v1004 = sub_1416725D0(v6, v651, &v901);
            sub_140032FF0(v1004);
            v655 = _mm_loadu_si128((const __m128i *)&v983);
            v656 = (_OWORD *)v1004;
            *(_OWORD *)(v1004 + 16) = *(_OWORD *)&v983.m256i_u64[2];
            *v656 = v655;
            v648 = v649;
            continue;
          default:
            goto LABEL_709;
        }
      }
    }
    v657 = (_BYTE *)sub_1416724D0(aMessages_0, 8, &v901);
    v659 = v657;
    if ( v657 && *v657 == 4 )
    {
      v660 = sub_1416AE140(v658);
      v665 = v660;
      if ( *(_BYTE *)(v660 + 16) == 1 )
      {
        v666 = *(_OWORD *)v660;
      }
      else
      {
        *(_QWORD *)&v666 = sub_1416C5230(v662, v661, v663, v664);
        *(_OWORD *)v665 = v666;
        *(_BYTE *)(v665 + 16) = 1;
      }
      v916 = (__int64)(v659 + 8);
      *(_QWORD *)v665 = v666 + 1;
      *(__m128i *)&v995.m256i_u64[2] = v425;
      *(__m128i *)v995.m256i_i8 = v426;
      *(_OWORD *)v996.m256i_i8 = v666;
      v667 = 0;
      v1004 = (__int64)v659;
LABEL_867:
      HIDWORD(_RAX) = ~HIDWORD(v667);
      v999 = ~v667;
      v698 = 32 * v667;
      v967 = v667;
      while ( v667 < *((_QWORD *)v659 + 3) )
      {
        _RAX = sub_1416724D0(aRole_2, 4, v698 + *((_QWORD *)v659 + 2));
        if ( !_RAX || *(_BYTE *)_RAX != 3 )
          goto LABEL_853;
        v669 = *(_QWORD *)(_RAX + 16);
        _RAX = *(_QWORD *)(_RAX + 24);
        if ( _RAX != 4 )
        {
          if ( _RAX != 9
            || (_RAX = *(_QWORD *)v669 ^ 0x6E61747369737361LL, _RAX | *(unsigned __int8 *)(v669 + 8) ^ 0x74LL) )
          {
LABEL_853:
            v688 = v995.m256i_i64[3];
            if ( v995.m256i_i64[3] )
            {
              v689 = v995.m256i_i64[0];
              v690 = (const __m128i *)(v995.m256i_i64[0] + 16);
              _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v995.m256i_i64[0]));
              v692 = v995.m256i_i64[0];
              do
              {
                if ( !(_WORD)_EDI )
                {
                  do
                  {
                    v693 = _mm_load_si128(v690);
                    v692 -= 384;
                    ++v690;
                    _EDI = _mm_movemask_epi8(v693) ^ 0xFFFF;
                  }
                  while ( !_EDI );
                }
                __asm { tzcnt   eax, edi }
                v694 = -3 * _RAX;
                v695 = *(_QWORD *)(v692 + 8 * v694 - 24);
                if ( v695 )
                  sub_140001660(*(_QWORD *)(v692 + 8 * v694 - 16), v695, 1);
                _RAX = _EDI & (unsigned int)(_EDI - 1);
                _EDI &= _EDI - 1;
                --v688;
              }
              while ( v688 );
              v696 = v995.m256i_u64[1];
              if ( v995.m256i_i64[1] )
              {
                LOBYTE(v695) = -1;
                sub_141923C40(v689, v695, v995.m256i_i64[1] + 17);
                v697 = ((v696 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v696 + 1) >> 3);
                if ( v696 < 8 )
                  v697 = v696;
              }
              else
              {
                v697 = 0;
              }
              *(_OWORD *)&v995.m256i_u64[2] = v697;
            }
LABEL_866:
            v667 = v967 + 1;
            v659 = (_BYTE *)v1004;
            goto LABEL_867;
          }
          v699 = v995.m256i_i64[3];
          if ( v995.m256i_i64[3] )
          {
            v700 = v995.m256i_i64[0];
            v701 = (const __m128i *)(v995.m256i_i64[0] + 16);
            _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v995.m256i_i64[0]));
            v703 = v995.m256i_i64[0];
            do
            {
              if ( !(_WORD)_EDI )
              {
                do
                {
                  v704 = _mm_load_si128(v701);
                  v703 -= 384;
                  ++v701;
                  _EDI = _mm_movemask_epi8(v704) ^ 0xFFFF;
                }
                while ( !_EDI );
              }
              __asm { tzcnt   eax, edi }
              v705 = -3 * _RAX;
              v706 = *(_QWORD *)(v703 + 8 * v705 - 24);
              if ( v706 )
                sub_140001660(*(_QWORD *)(v703 + 8 * v705 - 16), v706, 1);
              _RAX = _EDI & (unsigned int)(_EDI - 1);
              _EDI &= _EDI - 1;
              --v699;
            }
            while ( v699 );
            v707 = v995.m256i_u64[1];
            if ( v995.m256i_i64[1] )
            {
              LOBYTE(v706) = -1;
              sub_141923C40(v700, v706, v995.m256i_i64[1] + 17);
              v708 = ((v707 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v707 + 1) >> 3);
              if ( v707 < 8 )
                v708 = v707;
            }
            else
            {
              v708 = 0;
            }
            v659 = (_BYTE *)v1004;
            *(_OWORD *)&v995.m256i_u64[2] = v708;
          }
          v709 = *((_QWORD *)v659 + 3);
          if ( v667 >= v709 )
            sub_14196B673(v667, v709, &off_141A53E28);
          v710 = sub_1416724D0(aToolCalls, 10, *((_QWORD *)v659 + 2) + v698);
          if ( v710 && *(_BYTE *)v710 == 4 )
          {
            v711 = *(_QWORD *)(v710 + 16);
            v712 = v711 + 32LL * *(_QWORD *)(v710 + 24);
            while ( 1 )
            {
              do
              {
                if ( v711 == v712 )
                  goto LABEL_894;
                v713 = sub_1416724D0(aId_5, 2, v711);
                v711 += 32;
              }
              while ( !v713 || *(_BYTE *)v713 != 3 );
              v716 = *(_QWORD *)(v713 + 24);
              if ( v716 < 0 )
                break;
              if ( v716 )
              {
                v717 = *(_QWORD *)(v713 + 16);
                nullsub_1(v715, v714);
                v718 = sub_140001650(v716, 1);
                if ( !v718 )
                {
                  v917 = v716;
                  v865 = 1;
LABEL_1081:
                  sub_14196B2DB(v865, v917);
                }
                v719 = v717;
                v720 = v718;
                sub_1419234B0(v718, v719, v716);
                v721 = v720;
              }
              else
              {
                v721 = 1;
              }
              v983.m256i_i64[0] = v716;
              v917 = v721;
              v983.m256i_i64[1] = v721;
              v983.m256i_i64[2] = v716;
              sub_140871180((__int64)&v995, &v983);
            }
            v865 = 0;
            goto LABEL_1081;
          }
LABEL_894:
          ++v667;
          goto LABEL_867;
        }
        if ( *(_DWORD *)v669 != 1819242356 )
          goto LABEL_853;
        v670 = *((_QWORD *)v659 + 3);
        if ( v667 >= v670 )
          sub_14196B673(v667, v670, &off_141A53DF8);
        v671 = sub_1416724D0(aToolCallId, 12, v698 + *((_QWORD *)v659 + 2));
        v672 = 1;
        if ( v671 && *(_BYTE *)v671 == 3 )
        {
          v672 = *(_QWORD *)(v671 + 16);
          v673 = *(_QWORD *)(v671 + 24);
          if ( v995.m256i_i64[3] )
            goto LABEL_840;
        }
        else
        {
          v673 = 0;
          if ( v995.m256i_i64[3] )
          {
LABEL_840:
            v674 = sub_1406D0E00(&v996, v672, v673);
            _RAX = v674 >> 57;
            v676 = *(_OWORD *)v995.m256i_i8;
            v677 = _mm_cvtsi32_si128(v674 >> 57);
            v678 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v677, v677), 0), 68);
            for ( j = 0; ; j += 16 )
            {
              v680 = *((_QWORD *)&v676 + 1) & v674;
              v681 = _mm_loadu_si128((const __m128i *)(v676 + v680));
              _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v681, v678));
              if ( _ESI )
                break;
LABEL_846:
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v681, (__m128i)-1LL));
              if ( (_DWORD)_RAX )
                goto LABEL_848;
              v674 = j + v680 + 16;
            }
            v958 = j;
            while ( 1 )
            {
              __asm { tzcnt   eax, esi }
              v683 = -3LL * (*((_QWORD *)&v676 + 1) & (v680 + _RAX));
              if ( v673 == *(_QWORD *)(v676 + 8 * v683 - 8)
                && !(unsigned int)sub_141923B40(v672, *(_QWORD *)(v676 + 8 * v683 - 16), v673) )
              {
                goto LABEL_866;
              }
              _RAX = (unsigned int)(_ESI - 1);
              LOWORD(_RAX) = _ESI & (_ESI - 1);
              _ESI = _RAX;
              j = v958;
              if ( !(_WORD)_RAX )
                goto LABEL_846;
            }
          }
        }
LABEL_848:
        v659 = (_BYTE *)v1004;
        v684 = *(_QWORD *)(v1004 + 24);
        v667 = v967;
        if ( v967 >= v684
          || (v685 = *(_QWORD *)(v1004 + 16) + v698,
              v686 = *(_BYTE *)v685,
              *(_OWORD *)((char *)&v982.m256i_u64[1] + 7) = *(_OWORD *)(v685 + 16),
              *(__m128i *)v982.m256i_i8 = _mm_loadu_si128((const __m128i *)(v685 + 1)),
              sub_1419234B0(v685, v685 + 32, 32 * (v684 + v999)),
              --v684,
              *((_QWORD *)v659 + 3) = v684,
              v686 == -1) )
        {
          sub_14196B3AB(v667, v684, &off_141A53E10);
        }
        v983.m256i_i8[0] = v686;
        *(_OWORD *)&v983.m256i_u64[2] = *(_OWORD *)((char *)&v982.m256i_u64[1] + 7);
        *(__m128i *)&v983.m256i_i8[1] = _mm_load_si128((const __m128i *)&v982);
        HIDWORD(_RAX) = (unsigned __int64)sub_140032FF0(&v983) >> 32;
      }
      v722 = v995.m256i_i64[1];
      if ( v995.m256i_i64[1] )
      {
        v723 = v995.m256i_i64[3];
        if ( v995.m256i_i64[3] )
        {
          v724 = v995.m256i_i64[0];
          v725 = (const __m128i *)(v995.m256i_i64[0] + 16);
          _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v995.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_EDI )
            {
              do
              {
                v727 = _mm_load_si128(v725);
                v724 -= 384;
                ++v725;
                _EDI = _mm_movemask_epi8(v727) ^ 0xFFFF;
              }
              while ( !_EDI );
            }
            __asm { tzcnt   eax, edi }
            v728 = -3 * _RAX;
            v729 = *(_QWORD *)(v724 + 8 * v728 - 24);
            if ( v729 )
              sub_140001660(*(_QWORD *)(v724 + 8 * v728 - 16), v729, 1);
            --v723;
            _RAX = _EDI & (unsigned int)(_EDI - 1);
            _EDI &= _EDI - 1;
          }
          while ( v723 );
        }
        v730 = (24 * v722 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v731 = v730 + v722;
        v99 = v731 == -17;
        v732 = v731 + 17;
        v659 = (_BYTE *)v1004;
        if ( !v99 )
          sub_140001660(v995.m256i_i64[0] - v730, v732, 16);
      }
      v733 = 0;
      v734 = *((_QWORD *)v659 + 2);
      v735 = *((_QWORD *)v659 + 3);
      if ( v735 )
      {
        do
        {
          while ( 1 )
          {
            v738 = 32 * v733;
            v739 = sub_1416724D0(aRole_2, 4, 32 * v733 + v734);
            if ( v739 )
            {
              if ( *(_BYTE *)v739 == 3
                && *(_QWORD *)(v739 + 24) == 9
                && !(**(_QWORD **)(v739 + 16) ^ 0x6E61747369737361LL
                   | *(unsigned __int8 *)(*(_QWORD *)(v739 + 16) + 8LL) ^ 0x74LL) )
              {
                v740 = *((_QWORD *)v659 + 3);
                if ( v733 >= v740 )
                  sub_14196B673(v733, v740, &off_141A540A0);
                v741 = sub_1416724D0(aToolCalls, 10, v738 + *((_QWORD *)v659 + 2));
                if ( v741 )
                {
                  if ( *(_BYTE *)v741 == 4 && *(_QWORD *)(v741 + 24) )
                    break;
                }
              }
            }
            ++v733;
            v734 = *((_QWORD *)v659 + 2);
            v735 = *((_QWORD *)v659 + 3);
            if ( v733 >= v735 )
              goto LABEL_906;
          }
          v742 = *((_QWORD *)v659 + 3);
          if ( v733 >= v742 )
            sub_14196B673(v733, v742, &off_141A540B8);
          v743 = sub_1416724D0(aToolCalls, 10, *((_QWORD *)v659 + 2) + v738);
          if ( !v743 || *(_BYTE *)v743 != 4 )
            sub_14196B5D0(&off_141A54100);
          sub_140207C90(&v957, *(_QWORD *)(v743 + 16), *(_QWORD *)(v743 + 16) + 32LL * *(_QWORD *)(v743 + 24));
          v745 = sub_1416AE140(v744);
          v750 = v745;
          if ( *(_BYTE *)(v745 + 16) == 1 )
          {
            v751 = *(_OWORD *)v745;
          }
          else
          {
            *(_QWORD *)&v751 = sub_1416C5230(v747, v746, v748, v749);
            *(_OWORD *)v750 = v751;
            *(_BYTE *)(v750 + 16) = 1;
          }
          *(_QWORD *)v750 = v751 + 1;
          *(__m128i *)&v995.m256i_u64[2] = v425;
          *(__m128i *)v995.m256i_i8 = v426;
          *(_OWORD *)v996.m256i_i8 = v751;
          while ( ++v733 < *((_QWORD *)v659 + 3) )
          {
            v752 = sub_1416724D0(aRole_2, 4, 32 * v733 + *((_QWORD *)v659 + 2));
            if ( !v752 || *(_BYTE *)v752 != 3 || *(_QWORD *)(v752 + 24) != 4 || **(_DWORD **)(v752 + 16) != 1819242356 )
              break;
            v753 = *((_QWORD *)v659 + 3);
            if ( v733 >= v753 )
              sub_14196B673(v733, v753, &off_141A540E8);
            v754 = sub_1416724D0(aToolCallId, 12, *((_QWORD *)v659 + 2) + 32 * v733);
            if ( v754 && *(_BYTE *)v754 == 3 )
            {
              *((_QWORD *)&v757 + 1) = *(_QWORD *)(v754 + 24);
              if ( v757 < 0 )
              {
                v866 = 0;
                goto LABEL_1083;
              }
              if ( *((_QWORD *)&v757 + 1) )
              {
                v758 = *(_QWORD *)(v754 + 16);
                nullsub_1(v756, v755);
                v759 = sub_140001650(*((_QWORD *)&v757 + 1), 1);
                if ( !v759 )
                {
                  v905 = *((_QWORD *)&v757 + 1);
                  v866 = 1;
LABEL_1083:
                  sub_14196B2DB(v866, v905);
                }
                *(_QWORD *)&v757 = v759;
                sub_1419234B0(v759, v758, *((_QWORD *)&v757 + 1));
              }
              else
              {
                *(_QWORD *)&v757 = 1;
              }
              v983.m256i_i64[0] = *((_QWORD *)&v757 + 1);
              v905 = v757;
              *(_OWORD *)&v983.m256i_u64[1] = v757;
              sub_140871180((__int64)&v995, &v983);
              v659 = (_BYTE *)v1004;
            }
          }
          v760 = v957.m256i_u64[2];
          v983.m256i_i64[0] = v957.m256i_i64[1];
          v983.m256i_i64[1] = v957.m256i_i64[1] + 24 * v957.m256i_i64[2];
          v983.m256i_i64[2] = (__int64)&v995;
          sub_14020DF00(&v989, &v983);
          if ( (_QWORD)v990 )
          {
            v906 = 32 * v990;
            v761 = v989.m128i_i64[1] + 32 * v990;
            v983.m256i_i64[0] = v989.m128i_i64[1];
            v983.m256i_i64[1] = v989.m128i_i64[1];
            v958 = v989.m128i_i64[0];
            v983.m256i_i64[2] = v989.m128i_i64[0];
            v983.m256i_i64[3] = v761;
            v984[0] = 0;
            v762 = 0;
            v917 = v989.m128i_i64[1];
            v763 = v989.m128i_i64[1];
            v999 = v761;
            while ( v763 != v761 )
            {
              v765 = v763 + 32;
              v983.m256i_i64[1] = v763 + 32;
              v766 = *(_BYTE *)v763;
              if ( *(_BYTE *)v763 == 0xFF )
                goto LABEL_952;
              v767 = _mm_loadu_si128((const __m128i *)(v763 + 1));
              *(_OWORD *)&v982.m256i_u64[2] = *(_OWORD *)(v763 + 16);
              *(__m128i *)&v982.m256i_i8[1] = v767;
              v768 = v762 + 1;
              v984[0] = v762 + 1;
              v982.m256i_i8[0] = v766;
              v769 = v733 + v762;
              v770 = *(_QWORD *)(v1004 + 24);
              if ( v770 < v769 )
                sub_14196B324(v769, *(_QWORD *)(v1004 + 24), &off_141A540D0);
              if ( v770 == *(_QWORD *)v916 )
                sub_1419397B0(v916);
              v771 = (__m128i *)(*(_QWORD *)(v1004 + 16) + 32 * v769);
              if ( v770 > v769 )
                sub_1419234B0(&v771[2], *(_QWORD *)(v1004 + 16) + 32 * v769, 32 * (v770 - v769));
              v764 = _mm_loadu_si128((const __m128i *)&v982);
              v771[1] = *(__m128i *)&v982.m256i_u64[2];
              *v771 = v764;
              *(_QWORD *)(v1004 + 24) = v770 + 1;
              v762 = v768;
              v763 = v765;
              v761 = v999;
            }
            v765 = v761;
LABEL_952:
            v773 = (unsigned __int64)(v761 - v765) >> 5;
            v999 = v773;
            v908 = (const __m128i *)v765;
            v774 = v765;
            v967 = 0;
            while ( v999 != v967 )
            {
              ++v967;
              v775 = v774 + 32;
              sub_1401AB4D0(v774, v773);
              v774 = v775;
            }
            if ( v958 )
              sub_140001660(v917, 32 * v958, 8);
            v760 = v957.m256i_u64[2];
            v772 = 0;
            if ( v957.m256i_i64[2] >= (unsigned __int64)v995.m256i_i64[3] )
              v772 = v957.m256i_i64[2] - v995.m256i_i64[3];
          }
          else
          {
            v772 = 0;
            if ( v760 >= v995.m256i_i64[3] )
              v772 = v760 - v995.m256i_i64[3];
            if ( v989.m128i_i64[0] )
              sub_140001660(v989.m128i_i64[1], 32 * v989.m128i_i64[0], 8);
          }
          HIDWORD(_RAX) = v995.m256i_i32[3];
          if ( v995.m256i_i64[1] )
          {
            v999 = v995.m256i_i64[1];
            v967 = v772;
            v777 = v995.m256i_i64[3];
            if ( v995.m256i_i64[3] )
            {
              v778 = v995.m256i_i64[0];
              v779 = (const __m128i *)(v995.m256i_i64[0] + 16);
              _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v995.m256i_i64[0]));
              do
              {
                if ( !(_WORD)_EDI )
                {
                  do
                  {
                    v781 = _mm_load_si128(v779);
                    v778 -= 384;
                    ++v779;
                    _EDI = _mm_movemask_epi8(v781) ^ 0xFFFF;
                  }
                  while ( !_EDI );
                }
                __asm { tzcnt   eax, edi }
                v782 = -3 * _RAX;
                v783 = *(_QWORD *)(v778 + 8 * v782 - 24);
                if ( v783 )
                  sub_140001660(*(_QWORD *)(v778 + 8 * v782 - 16), v783, 1);
                --v777;
                _RAX = _EDI & (unsigned int)(_EDI - 1);
                _EDI &= _EDI - 1;
              }
              while ( v777 );
            }
            v784 = (24 * v999 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v772 = v967;
            if ( v784 + v999 != -17 )
              sub_140001660(v995.m256i_i64[0] - v784, v784 + v999 + 17, 16);
          }
          v785 = v957.m256i_i64[1];
          if ( v760 )
          {
            v786 = (_QWORD *)(v957.m256i_i64[1] + 8);
            do
            {
              v787 = *(v786 - 1);
              if ( v787 )
                sub_140001660(*v786, v787, 1);
              v786 += 3;
              --v760;
            }
            while ( v760 );
          }
          if ( v957.m256i_i64[0] )
            sub_140001660(v785, 24 * v957.m256i_i64[0], 8);
          v733 += v772;
          v659 = (_BYTE *)v1004;
          v734 = *(_QWORD *)(v1004 + 16);
          v735 = *(_QWORD *)(v1004 + 24);
        }
        while ( v733 < v735 );
      }
LABEL_906:
      if ( v735 )
      {
        v736 = v734 + 32 * v735;
        v737 = v734;
        while ( 1 )
        {
          v788 = sub_1416724D0(aRole_2, 4, v737);
          if ( v788 )
          {
            if ( *(_BYTE *)v788 == 3
              && *(_QWORD *)(v788 + 24) == 9
              && !(**(_QWORD **)(v788 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v788 + 16) + 8LL) ^ 0x74LL) )
            {
              v789 = sub_1416724D0(aReasoningConte, 17, v737);
              if ( v789 )
              {
                if ( *(_BYTE *)v789 == 3 && *(_QWORD *)(v789 + 24) )
                  break;
              }
            }
          }
          v737 += 32;
          if ( v737 == v736 )
            goto LABEL_997;
        }
        while ( v734 != v736 )
        {
          v790 = v734;
          v791 = sub_1416724D0(aRole_2, 4, v734);
          v734 += 32;
          if ( v791 )
          {
            if ( *(_BYTE *)v791 == 3
              && *(_QWORD *)(v791 + 24) == 9
              && !(**(_QWORD **)(v791 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v791 + 16) + 8LL) ^ 0x74LL) )
            {
              v792 = sub_1416724D0(aReasoningConte, 17, v790);
              if ( !v792 || *(_BYTE *)v792 != 3 || !*(_QWORD *)(v792 + 24) )
              {
                nullsub_1(v794, v793);
                v795 = (void *)sub_140001650(37, 1);
                if ( !v795 )
                  sub_14196B2DB(1, 37);
                qmemcpy(v795, "(this turn ran without thinking mode)", 37);
                v995.m256i_i64[1] = 37;
                v995.m256i_i64[2] = (__int64)v795;
                v995.m256i_i64[3] = 37;
                v995.m256i_i8[0] = 3;
                v919 = 1;
                v967 = sub_1416725D0(aReasoningConte, 17, v790);
                sub_140032FF0(v967);
                v796 = _mm_loadu_si128((const __m128i *)&v995);
                v797 = (_OWORD *)v967;
                *(_OWORD *)(v967 + 16) = *(_OWORD *)&v995.m256i_u64[2];
                *v797 = v796;
              }
            }
          }
        }
      }
    }
LABEL_997:
    v798 = sub_1416724D0(aMessages_0, 8, &v901);
    v799 = (_QWORD *)v798;
    if ( !v798 || *(_BYTE *)v798 != 4 )
      goto LABEL_1052;
    v907.m256i_i64[0] = 0;
    *(_OWORD *)&v907.m256i_u64[1] = 8u;
    v957.m256i_i64[0] = 0;
    *(_OWORD *)&v957.m256i_u64[1] = 8u;
    v800 = *(_QWORD *)(v798 + 16);
    v801 = v799[3];
    v799[3] = 0;
    v802 = v800 + 32 * v801;
    v995.m256i_i64[0] = v800;
    v995.m256i_i64[1] = v802;
    v967 = (unsigned __int64)(v799 + 1);
    v995.m256i_i64[2] = (__int64)(v799 + 1);
    v995.m256i_i64[3] = v801;
    v996.m256i_i64[0] = 0;
    if ( v800 != v802 )
    {
      do
      {
        while ( 1 )
        {
          v806 = v800 + 32;
          v995.m256i_i64[0] = v800 + 32;
          v807 = *(_OWORD *)(v800 + 16);
          v870 = _mm_loadu_si128((const __m128i *)v800);
          v871 = v807;
          *(_OWORD *)&v983.m256i_u64[2] = v807;
          *(__m128i *)v983.m256i_i8 = v870;
          v991 = 1;
          v808 = sub_1416724D0(aRole_2, 4, &v983);
          if ( v808 )
          {
            if ( *(_BYTE *)v808 == 3
              && *(_QWORD *)(v808 + 24) == 6
              && !(**(_DWORD **)(v808 + 16) ^ 0x74737973 | *(unsigned __int16 *)(*(_QWORD *)(v808 + 16) + 4LL) ^ 0x6D65) )
            {
              break;
            }
          }
          v809 = v957.m256i_i64[2];
          if ( v957.m256i_i64[2] == v957.m256i_i64[0] )
            sub_1419397B0(&v957);
          v803 = v957.m256i_i64[1];
          v804 = 32 * v809;
          v805 = _mm_load_si128(&v870);
          *(_OWORD *)(v957.m256i_i64[1] + v804 + 16) = v871;
          *(__m128i *)(v803 + v804) = v805;
          v957.m256i_i64[2] = v809 + 1;
          v800 = v806;
          if ( v806 == v802 )
            goto LABEL_1017;
        }
        v991 = 1;
        v810 = sub_1416724D0(aContent_5, 7, &v983);
        if ( v810 )
        {
          if ( *(_BYTE *)v810 == 3 )
          {
            v813 = *(_QWORD *)(v810 + 24);
            if ( v813 )
            {
              if ( v813 < 0 )
              {
                v836 = 0;
                goto LABEL_1031;
              }
              v999 = *(_QWORD *)(v810 + 16);
              nullsub_1(v812, v811);
              v814 = sub_140001650(v813, 1);
              if ( !v814 )
              {
                v1004 = v813;
                v836 = 1;
LABEL_1031:
                v991 = 1;
                sub_14196B2DB(v836, v1004);
              }
              v1004 = v814;
              v815 = v999;
              v999 = v813;
              sub_1419234B0(v814, v815, v813);
              v816 = v907.m256i_i64[2];
              if ( v907.m256i_i64[2] == v907.m256i_i64[0] )
                sub_141939F90(&v907);
              v817 = v907.m256i_i64[1];
              v818 = 3 * v816;
              v819 = v999;
              *(_QWORD *)(v907.m256i_i64[1] + 8 * v818) = v999;
              *(_QWORD *)(v817 + 8 * v818 + 8) = v1004;
              *(_QWORD *)(v817 + 8 * v818 + 16) = v819;
              v907.m256i_i64[2] = v816 + 1;
            }
          }
        }
        sub_140032FF0(&v983);
        v800 = v806;
      }
      while ( v806 != v802 );
    }
LABEL_1017:
    v993 = 1;
    sub_1402210E0(&v995);
    if ( v907.m256i_i64[2] )
    {
      v989.m128i_i64[0] = 0;
      *(_QWORD *)&v990 = 0;
      nullsub_1(v821, v820);
      v822 = (_DWORD *)sub_140001650(4, 1);
      if ( !v822 )
        sub_14196B2DB(1, 4);
      *v822 = 1701605234;
      v982.m256i_i64[0] = 4;
      v982.m256i_i64[1] = (__int64)v822;
      v982.m256i_i64[2] = 4;
      nullsub_1(v824, v823);
      v825 = sub_140001650(6, 1);
      v1004 = v825;
      if ( !v825 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v825 + 4) = 28005;
      *(_DWORD *)v825 = 1953724787;
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = 6;
      v995.m256i_i64[2] = v825;
      v995.m256i_i64[3] = 6;
      sub_140A68320(&v983, &v989, &v982, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v827, v826);
      v828 = (_DWORD *)sub_140001650(7, 1);
      if ( !v828 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v828 + 3) = 1953391988;
      *v828 = 1953394531;
      v982.m256i_i64[0] = 7;
      v1004 = (__int64)v828;
      v982.m256i_i64[1] = (__int64)v828;
      v982.m256i_i64[2] = 7;
      sub_1406C5480((unsigned int)&v995, v907.m256i_i32[2], v907.m256i_i32[4], (unsigned int)asc_141A53A9A, 2);
      v831 = *(_OWORD *)&v995.m256i_u64[1];
      v999 = v995.m256i_i64[1];
      v1004 = v995.m256i_i64[0];
      if ( v995.m256i_i64[2] < 0 )
      {
        v832 = 0;
        goto LABEL_1025;
      }
      if ( v995.m256i_i64[2] )
      {
        nullsub_1(v830, v829);
        v832 = 1;
        v834 = sub_140001650(*((_QWORD *)&v831 + 1), 1);
        if ( !v834 )
        {
LABEL_1025:
          v920 = 1;
          sub_14196B2DB(v832, *((_QWORD *)&v831 + 1));
        }
        v835 = v834;
        sub_1419234B0(v834, v831, *((_QWORD *)&v831 + 1));
      }
      else
      {
        v835 = 1;
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = *((_QWORD *)&v831 + 1);
      v995.m256i_i64[2] = v835;
      v995.m256i_i64[3] = *((_QWORD *)&v831 + 1);
      v920 = 0;
      sub_140A68320(&v983, &v989, &v982, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      if ( v1004 )
        sub_140001660(v999, v1004, 1);
      *(__m128i *)&v995.m256i_u64[1] = _mm_loadu_si128(&v989);
      v995.m256i_i64[3] = v990;
      v995.m256i_i8[0] = 5;
      v837 = v799[3];
      if ( v837 == v799[1] )
        sub_1419397B0(v967);
      v838 = v799[2];
      v839 = 32 * v837;
      v840 = _mm_loadu_si128((const __m128i *)&v995);
      *(_OWORD *)(v838 + v839 + 16) = *(_OWORD *)&v995.m256i_u64[2];
      *(__m128i *)(v838 + v839) = v840;
      v833 = v837 + 1;
      v799[3] = v833;
    }
    else
    {
      v833 = v799[3];
    }
    v841 = *(_OWORD *)v957.m256i_i8;
    v842 = v957.m256i_i64[2];
    v843 = 32 * v957.m256i_i64[2];
    v995.m256i_i64[0] = v957.m256i_i64[1];
    v995.m256i_i64[1] = v957.m256i_i64[1];
    v995.m256i_i64[2] = v957.m256i_i64[0];
    v995.m256i_i64[3] = v957.m256i_i64[1] + 32 * v957.m256i_i64[2];
    if ( v957.m256i_i64[2] > (unsigned __int64)(*(_QWORD *)v967 - v833) )
    {
      sub_141939070(v967, v833, v957.m256i_i32[4], 8, 32);
      v833 = v799[3];
    }
    else if ( !v957.m256i_i64[2] )
    {
LABEL_1043:
      v799[3] = v842 + v833;
      if ( (_QWORD)v841 )
        sub_140001660(*((_QWORD *)&v841 + 1), 32 * v841, 8);
      v844 = v907.m256i_i64[2];
      if ( v907.m256i_i64[2] )
      {
        v845 = (_QWORD *)(v907.m256i_i64[1] + 8);
        do
        {
          v846 = *(v845 - 1);
          if ( v846 )
            sub_140001660(*v845, v846, 1);
          v845 += 3;
          --v844;
        }
        while ( v844 );
      }
      if ( v907.m256i_i64[0] )
        sub_140001660(v907.m256i_i64[1], 24 * v907.m256i_i64[0], 8);
LABEL_1052:
      v847 = _mm_loadu_si128((const __m128i *)&v901);
      v848 = _mm_loadu_si128((const __m128i *)&v902.m128i_u64[1]);
      *(__m128i *)&v995.m256i_u64[2] = v848;
      *(__m128i *)v995.m256i_i8 = v847;
      v849 = *(__m128i *)v911.m256i_i8;
      v850 = *(__m128i *)&v911.m256i_u64[2];
      v996 = v911;
      v997 = v912;
      v851 = (__m128i *)v890;
      *(_OWORD *)(v890 + 64) = v912;
      v851[3] = v850;
      v851[2] = v849;
      v851[1] = v848;
      *v851 = v847;
      v852 = v904;
      if ( v904 )
        sub_140001660(v968, v904, 1);
      v853 = v914;
      v1004 = v915;
      v967 = 0;
      v904 = v914;
      while ( v1004 != v967 )
      {
        ++v967;
        v854 = v853 + 32;
        sub_1401AB4D0(v853, v852);
        v853 = v854;
      }
      goto LABEL_1074;
    }
    sub_1419234B0(v799[2] + 32 * v833, *((_QWORD *)&v841 + 1), v843);
    goto LABEL_1043;
  }
  v6 = *(_QWORD *)(v44 + 16);
  v46 = v6 + 32LL * *(_QWORD *)(v44 + 24);
  v47 = -1;
  v48 = _mm_load_si128((const __m128i *)&xmmword_141A046D0);
  v49 = _mm_cvtsi32_si128(0x74757074u);
  v50 = _mm_load_si128((const __m128i *)&xmmword_141A45200);
  v51 = _mm_load_si128((const __m128i *)&xmmword_141A451E0);
  while ( 1 )
  {
LABEL_39:
    v52 = v47;
    if ( v6 == v46 )
    {
      if ( (unsigned __int64)(v47 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v45, v47, 1);
      goto LABEL_382;
    }
    v53 = v6;
    v1004 = v45;
    v956 = v47;
    v54 = sub_1416724D0(aType_8, 4, v6);
    v6 += 32;
    v45 = v1004;
    v47 = v52;
    if ( v54 )
    {
      v45 = v1004;
      v47 = v52;
      if ( *(_BYTE *)v54 == 3 )
        break;
    }
  }
  v55 = *(_QWORD *)(v54 + 24);
  v56 = *(_QWORD *)(v54 + 16);
  v999 = v52;
  switch ( v55 )
  {
    case 7LL:
      v45 = v1004;
      v47 = v52;
      if ( *(_DWORD *)v56 ^ 0x7373656D | *(_DWORD *)(v56 + 3) ^ 0x65676173 )
        goto LABEL_39;
      v956 = v52;
      v57 = sub_1416724D0(aRole_2, 4, v53);
      v5 = 4;
      if ( v57 )
      {
        v58 = aUser_2;
        v59 = v999;
        if ( *(_BYTE *)v57 == 3 )
        {
          v58 = *(const char **)(v57 + 16);
          v5 = *(_QWORD *)(v57 + 24);
          if ( v5 == 9 )
          {
            v5 = 3LL * ((*(_QWORD *)v58 ^ 0x65706F6C65766564LL | *((unsigned __int8 *)v58 + 8) ^ 0x72LL) != 0) + 6;
            if ( !(*(_QWORD *)v58 ^ 0x65706F6C65766564LL | *((unsigned __int8 *)v58 + 8) ^ 0x72LL) )
              v58 = aSystem_0;
          }
        }
      }
      else
      {
        v58 = aUser_2;
        v59 = v999;
      }
      v956 = v59;
      v122 = sub_1416724D0(aContent_5, 7, v53);
      v956 = v59;
      sub_140832AA0(&v995, v122, v58, v5);
      if ( v995.m256i_i8[0] == -1 )
      {
        v857 = (_BYTE *)v890;
        *(__m128i *)(v890 + 8) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[1]);
        *v857 = -1;
        v858 = v999;
        goto LABEL_1071;
      }
      v982.m256i_i32[1] = v995.m256i_i32[1];
      *(__int32 *)((char *)v982.m256i_i32 + 1) = *(__int32 *)((char *)v995.m256i_i32 + 1);
      v123 = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
      v982.m256i_i8[0] = v995.m256i_i8[0];
      v982.m256i_i64[1] = v995.m256i_i64[1];
      *(__m128i *)&v982.m256i_u64[2] = v123;
      if ( v995.m256i_i8[0] )
      {
        v957.m256i_i64[0] = 0;
        v957.m256i_i64[2] = 0;
        nullsub_1(v995.m256i_i64[1], v995.m256i_u32[1]);
        v124 = (_DWORD *)sub_140001650(4, 1);
        if ( !v124 )
          sub_14196B2DB(1, 4);
        *v124 = 1701605234;
        v989.m128i_i64[0] = 4;
        v989.m128i_i64[1] = (__int64)v124;
        *(_QWORD *)&v990 = 4;
        if ( v5 < 0 )
        {
          v127 = 0;
LABEL_420:
          v939 = 1;
          sub_14196B2DB(v127, v5);
        }
        if ( v5 )
        {
          nullsub_1(v126, v125);
          v127 = 1;
          v128 = sub_140001650(v5, 1);
          if ( !v128 )
            goto LABEL_420;
          v129 = v128;
          sub_1419234B0(v128, v58, v5);
        }
        else
        {
          v129 = 1;
        }
        v995.m256i_i8[0] = 3;
        v995.m256i_i64[1] = v5;
        v995.m256i_i64[2] = v129;
        v995.m256i_i64[3] = v5;
        v939 = 0;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        nullsub_1(v190, v189);
        v191 = (_DWORD *)sub_140001650(7, 1);
        if ( !v191 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v191 + 3) = 1953391988;
        *v191 = 1953394531;
        v989.m128i_i64[0] = 7;
        v989.m128i_i64[1] = (__int64)v191;
        *(_QWORD *)&v990 = 7;
        v974 = 1;
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53BF0);
        }
        v192 = _mm_loadu_si128((const __m128i *)&v995);
        *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)v983.m256i_i8 = v192;
        v974 = 0;
        sub_140A68320(&v995, &v957, &v989, &v983);
        if ( v995.m256i_i8[0] != -1 )
          sub_140032FF0(&v995);
        v911.m256i_i64[3] = v957.m256i_i64[2];
        *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
        v911.m256i_i8[0] = 5;
        if ( v5 == 9 && !(*(_QWORD *)v58 ^ 0x6E61747369737361LL | *((unsigned __int8 *)v58 + 8) ^ 0x74LL) )
        {
          if ( v999 == -1 )
          {
            v999 = -1;
          }
          else
          {
            v995.m256i_i64[2] = v1004;
            v995.m256i_i64[3] = v885;
            v995.m256i_i64[1] = v999;
            v995.m256i_i8[0] = 3;
            v938 = 1;
            v968 = sub_1416725D0(aReasoningConte, 17, &v911);
            sub_140032FF0(v968);
            v999 = -1;
            v238 = _mm_loadu_si128((const __m128i *)&v995);
            v239 = (_OWORD *)v968;
            *(__m128i *)(v968 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
            *v239 = v238;
          }
        }
        *(__m128i *)&v995.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
        v995.m256i_i8[0] = v911.m256i_i8[0];
        *(__int64 *)((char *)v995.m256i_i64 + 1) = *(__int64 *)((char *)v911.m256i_i64 + 1);
        *(__int32 *)((char *)&v995.m256i_i32[2] + 1) = *(__int32 *)((char *)&v911.m256i_i32[2] + 1);
        *(__int16 *)((char *)&v995.m256i_i16[6] + 1) = *(__int16 *)((char *)&v911.m256i_i16[6] + 1);
        v995.m256i_i8[15] = v911.m256i_i8[15];
        v327 = v915;
        if ( v915 == v913 )
          sub_1419397B0(&v913);
        v328 = v914;
        v329 = 32 * v327;
        v330 = _mm_load_si128((const __m128i *)&v995);
        *(__m128i *)(v914 + v329 + 16) = _mm_load_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)(v328 + v329) = v330;
        v915 = v327 + 1;
        v956 = v999;
        sub_140032FF0(&v982);
        v45 = v1004;
        v47 = v999;
      }
      else
      {
        if ( v5 == 9 && !(*(_QWORD *)v58 ^ 0x6E61747369737361LL | *((unsigned __int8 *)v58 + 8) ^ 0x74LL) )
        {
          v152 = -1;
          if ( v999 != -1 )
          {
            v907.m256i_i64[0] = v999;
            v907.m256i_i64[1] = v1004;
            v907.m256i_i64[2] = v885;
            v957.m256i_i64[0] = 0;
            v957.m256i_i64[2] = 0;
            nullsub_1(0, v995.m256i_u32[1]);
            v193 = (_DWORD *)sub_140001650(4, 1);
            if ( !v193 )
              sub_14196B2DB(1, 4);
            *v193 = 1701605234;
            v989.m128i_i64[0] = 4;
            v989.m128i_i64[1] = (__int64)v193;
            *(_QWORD *)&v990 = 4;
            v977 = 1;
            sub_140B72ED0((__int64)&v995, (__int64 *)&off_141A520F8);
            if ( v995.m256i_i8[0] == -1 )
            {
              v983.m256i_i64[0] = v995.m256i_i64[1];
              sub_14196B5F0(
                (unsigned int)aCalledResultUn_11,
                43,
                (unsigned int)&v983,
                (unsigned int)&off_141A52958,
                (__int64)&off_141A53BD8);
            }
            v194 = _mm_loadu_si128((const __m128i *)&v995);
            *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
            *(__m128i *)v983.m256i_i8 = v194;
            v977 = 0;
            sub_140A68320(&v995, &v957, &v989, &v983);
            if ( v995.m256i_i8[0] != -1 )
              sub_140032FF0(&v995);
            nullsub_1(v196, v195);
            v197 = (_DWORD *)sub_140001650(7, 1);
            if ( !v197 )
              sub_14196B2DB(1, 7);
            *(_DWORD *)((char *)v197 + 3) = 1953391988;
            *v197 = 1953394531;
            v989.m128i_i64[0] = 7;
            v989.m128i_i64[1] = (__int64)v197;
            *(_QWORD *)&v990 = 7;
            v976 = 1;
            sub_140B73E90(&v995, &unk_141A532B0);
            if ( v995.m256i_i8[0] == -1 )
            {
              v983.m256i_i64[0] = v995.m256i_i64[1];
              sub_14196B5F0(
                (unsigned int)aCalledResultUn_11,
                43,
                (unsigned int)&v983,
                (unsigned int)&off_141A52958,
                (__int64)&off_141A53BD8);
            }
            v198 = _mm_loadu_si128((const __m128i *)&v995);
            *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
            *(__m128i *)v983.m256i_i8 = v198;
            v976 = 0;
            sub_140A68320(&v995, &v957, &v989, &v983);
            if ( v995.m256i_i8[0] != -1 )
              sub_140032FF0(&v995);
            nullsub_1(v200, v199);
            v201 = (__m128i *)sub_140001650(17, 1);
            if ( !v201 )
              sub_14196B2DB(1, 17);
            *v201 = _mm_loadu_si128((const __m128i *)aReasoningConte);
            v201[1].m128i_i8[0] = 116;
            v989.m128i_i64[0] = 17;
            v989.m128i_i64[1] = (__int64)v201;
            *(_QWORD *)&v990 = 17;
            v975 = 1;
            sub_140B72E40((__int64)&v995, (__int64)&v907);
            if ( v995.m256i_i8[0] == -1 )
            {
              v983.m256i_i64[0] = v995.m256i_i64[1];
              sub_14196B5F0(
                (unsigned int)aCalledResultUn_11,
                43,
                (unsigned int)&v983,
                (unsigned int)&off_141A52958,
                (__int64)&off_141A53BD8);
            }
            v202 = _mm_loadu_si128((const __m128i *)&v995);
            *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
            *(__m128i *)v983.m256i_i8 = v202;
            v975 = 0;
            sub_140A68320(&v995, &v957, &v989, &v983);
            if ( v995.m256i_i8[0] != -1 )
              sub_140032FF0(&v995);
            v911.m256i_i64[3] = v957.m256i_i64[2];
            *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
            v911.m256i_i8[0] = 5;
            v203 = v915;
            if ( v915 == v913 )
              sub_1419397B0(&v913);
            v204 = v914;
            v205 = 32 * v203;
            v206 = _mm_loadu_si128((const __m128i *)&v911);
            *(__m128i *)(v914 + v205 + 16) = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
            *(__m128i *)(v204 + v205) = v206;
            v915 = v203 + 1;
            if ( v999 )
              sub_140001660(v1004, v999, 1);
            v152 = -1;
          }
        }
        else
        {
          v152 = v999;
        }
        v153 = v152;
        v956 = v152;
        sub_140032FF0(&v982);
        v45 = v1004;
        v47 = v153;
      }
      goto LABEL_39;
    case 9LL:
      v45 = v1004;
      v47 = v52;
      if ( !(*(_QWORD *)v56 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v56 + 8) ^ 0x67LL) )
      {
        v956 = v52;
        v76 = sub_1416724D0(aSummary_2, 7, v53);
        v45 = v1004;
        v47 = v52;
        if ( v76 )
        {
          v45 = v1004;
          v47 = v52;
          if ( *(_BYTE *)v76 == 4 )
          {
            v77 = *(_QWORD *)(v76 + 16);
            v78 = v77 + 32LL * *(_QWORD *)(v76 + 24);
            v956 = v52;
            sub_140216CB0(&v983, v77, v78);
            v968 = v983.m256i_i64[1];
            sub_1406C5A40((unsigned int)&v995, v983.m256i_i32[2], v983.m256i_i32[4], (unsigned int)asc_141A51870, 1);
            v79 = *(_OWORD *)v995.m256i_i8;
            v80 = v995.m256i_i64[2];
            if ( v983.m256i_i64[0] )
              sub_140001660(v968, 16 * v983.m256i_i64[0], 8);
            v5 = v1004;
            v81 = v999;
            if ( v80 )
            {
              v885 = v80;
              v45 = *((_QWORD *)&v79 + 1);
              v47 = v79;
              if ( (unsigned __int64)(v999 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                sub_140001660(v1004, v999, 1);
                v885 = v80;
                v45 = *((_QWORD *)&v79 + 1);
                v47 = v79;
              }
            }
            else
            {
              v45 = v1004;
              v47 = v999;
              if ( (_QWORD)v79 )
              {
                sub_140001660(*((_QWORD *)&v79 + 1), v79, 1);
                v45 = v5;
                v47 = v81;
              }
            }
          }
        }
      }
      goto LABEL_39;
    case 13LL:
      v45 = v1004;
      v47 = v52;
      if ( *(_QWORD *)v56 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v56 + 5) ^ 0x6C6C61635F6E6F69LL )
        goto LABEL_39;
      v956 = v52;
      v65 = sub_1416724D0(aCallId_0, 7, v53);
      v68 = 12;
      if ( !v65 )
      {
        v69 = &unk_141A53B24;
        goto LABEL_107;
      }
      v69 = &unk_141A53B24;
      v67 = v999;
      if ( *(_BYTE *)v65 != 3 )
        goto LABEL_107;
      v68 = *(_QWORD *)(v65 + 24);
      if ( v68 < 0 )
      {
        v114 = 0;
        v381 = v906;
        goto LABEL_418;
      }
      if ( v68 )
      {
        v69 = *(void **)(v65 + 16);
LABEL_107:
        nullsub_1(v67, v66);
        v114 = 1;
        v115 = sub_140001650(v68, 1);
        if ( v115 )
        {
          v906 = v115;
          v968 = v68;
          sub_1419234B0(v115, v69, v68);
          v116 = 0;
          goto LABEL_109;
        }
        v381 = v68;
        v67 = v999;
LABEL_418:
        v956 = v67;
        sub_14196B2DB(v114, v381);
      }
      v906 = 1;
      v116 = 1;
      v968 = 0;
LABEL_109:
      v879 = v999;
      v117 = sub_1416724D0(aName_6, 4, v53);
      v120 = 4;
      if ( v117 )
      {
        v121 = &unk_141A53B30;
        if ( *(_BYTE *)v117 == 3 )
        {
          v120 = *(_QWORD *)(v117 + 24);
          if ( v120 < 0 )
          {
            v161 = 0;
            v404 = v899;
            goto LABEL_477;
          }
          if ( !v120 )
          {
            v899 = 1;
            v163 = 1;
            v908 = nullptr;
            goto LABEL_160;
          }
          v121 = *(void **)(v117 + 16);
        }
      }
      else
      {
        v121 = &unk_141A53B30;
      }
      nullsub_1(v119, v118);
      v161 = 1;
      v162 = sub_140001650(v120, 1);
      if ( !v162 )
      {
        v404 = v120;
LABEL_477:
        v879 = v999;
        sub_14196B2DB(v161, v404);
      }
      v899 = v162;
      v908 = (const __m128i *)v120;
      sub_1419234B0(v162, v121, v120);
      v163 = 0;
LABEL_160:
      v900 = v999;
      v164 = sub_1416724D0(aArguments_0, 9, v53);
      if ( v164 )
      {
        if ( *(_BYTE *)v164 == 3 )
        {
          v167 = *(_QWORD *)(v164 + 16);
          v168 = *(_QWORD *)(v164 + 24);
          v900 = v999;
          sub_1408AFFD0(&v911, v167, v168);
          v171 = v911.m256i_i64[1];
          v910 = v911.m256i_i64[0];
          v172 = v911.m256i_i64[2];
        }
        else
        {
          v900 = v999;
          sub_1408913B0(&v995, v164);
          sub_14084D9C0(&v983, (__int64)&v995);
          v171 = v983.m256i_i64[1];
          if ( v983.m256i_i64[0] == -1 )
          {
            v983.m256i_i64[0] = v983.m256i_i64[1];
            nullsub_1(v188, v187);
            v240 = (_WORD *)sub_140001650(2, 1);
            if ( !v240 )
              sub_14196B2DB(1, 2);
            v171 = (__int64)v240;
            *v240 = 32123;
            v911.m256i_i64[0] = 2;
            v911.m256i_i64[1] = (__int64)v240;
            v911.m256i_i64[2] = 2;
            sub_140032F30(&v983);
            v172 = 2;
            v910 = 2;
          }
          else
          {
            v172 = v983.m256i_i64[2];
            v910 = v983.m256i_i64[0];
            *(_OWORD *)v911.m256i_i8 = *(_OWORD *)v983.m256i_i8;
            v911.m256i_i64[2] = v983.m256i_i64[2];
          }
          v900 = v999;
          sub_140032FF0(&v995);
        }
      }
      else
      {
        nullsub_1(v166, v165);
        v186 = (_WORD *)sub_140001650(2, 1);
        if ( !v186 )
        {
          v900 = v999;
          sub_14196B2DB(1, 2);
        }
        v171 = (__int64)v186;
        *v186 = 32123;
        v172 = 2;
        v910 = 2;
      }
      v894 = v171;
      v901 = 0;
      v902.m128i_i64[1] = 0;
      nullsub_1(v170, v169);
      v241 = (_WORD *)sub_140001650(2, 1);
      if ( !v241 )
        sub_14196B2DB(1, 2);
      *v241 = 25705;
      v911.m256i_i64[0] = 2;
      v911.m256i_i64[1] = (__int64)v241;
      v911.m256i_i64[2] = 2;
      v244 = 1;
      v99 = v116 == 0;
      v245 = v968;
      if ( v99 )
      {
        nullsub_1(v243, v242);
        v246 = sub_140001650(v245, 1);
        if ( !v246 )
        {
          v946 = 1;
          sub_14196B2DB(1, v245);
        }
        v244 = v246;
        sub_1419234B0(v246, v906, v245);
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v245;
      v995.m256i_i64[2] = v244;
      v995.m256i_i64[3] = v245;
      v946 = 0;
      sub_140A68320(&v983, &v901, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v248, v247);
      v249 = (_DWORD *)sub_140001650(4, 1);
      if ( !v249 )
        sub_14196B2DB(1, 4);
      *v249 = 1701869940;
      v911.m256i_i64[0] = 4;
      v911.m256i_i64[1] = (__int64)v249;
      v911.m256i_i64[2] = 4;
      nullsub_1(v251, v250);
      v252 = (_QWORD *)sub_140001650(8, 1);
      v909 = (__int64)v252;
      if ( !v252 )
        sub_14196B2DB(1, 8);
      *v252 = 0x6E6F6974636E7566LL;
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = 8;
      v995.m256i_i64[2] = (__int64)v252;
      v995.m256i_i64[3] = 8;
      sub_140A68320(&v983, &v901, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v254, v253);
      v255 = (_QWORD *)sub_140001650(8, 1);
      if ( !v255 )
        sub_14196B2DB(1, 8);
      *v255 = 0x6E6F6974636E7566LL;
      v907.m256i_i64[0] = 8;
      v907.m256i_i64[1] = (__int64)v255;
      v907.m256i_i64[2] = 8;
      v957.m256i_i64[0] = 0;
      v957.m256i_i64[2] = 0;
      nullsub_1(0x6E6F6974636E7566LL, v256);
      v257 = (_DWORD *)sub_140001650(4, 1);
      if ( !v257 )
        sub_14196B2DB(1, 4);
      *v257 = 1701667182;
      v989.m128i_i64[0] = 4;
      v989.m128i_i64[1] = (__int64)v257;
      *(_QWORD *)&v990 = 4;
      v260 = 1;
      v99 = v163 == 0;
      v261 = (__int64)v908;
      if ( v99 )
      {
        nullsub_1(v259, v258);
        v262 = sub_140001650(v261, 1);
        if ( !v262 )
        {
          v945 = 1;
          sub_14196B2DB(1, v261);
        }
        v260 = v262;
        sub_1419234B0(v262, v899, v261);
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v261;
      v995.m256i_i64[2] = v260;
      v995.m256i_i64[3] = v261;
      v945 = 0;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v264, v263);
      v265 = sub_140001650(9, 1);
      if ( !v265 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v265 = 0x746E656D75677261LL;
      *(_BYTE *)(v265 + 8) = 115;
      v989.m128i_i64[0] = 9;
      v989.m128i_i64[1] = v265;
      *(_QWORD *)&v990 = 9;
      if ( v172 < 0 )
      {
        v267 = 0;
LABEL_422:
        v944 = 1;
        sub_14196B2DB(v267, v172);
      }
      if ( v172 )
      {
        nullsub_1(0x746E656D75677261LL, v266);
        v267 = 1;
        v268 = sub_140001650(v172, 1);
        if ( !v268 )
          goto LABEL_422;
        v269 = v268;
        sub_1419234B0(v268, v894, v172);
      }
      else
      {
        v269 = 1;
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v172;
      v995.m256i_i64[2] = v269;
      v995.m256i_i64[3] = v172;
      v944 = 0;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      v911.m256i_i64[3] = v957.m256i_i64[2];
      *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
      v911.m256i_i8[0] = 5;
      v943 = 0;
      sub_140A68320(&v995, &v901, &v907, &v911);
      if ( v995.m256i_i8[0] != -1 )
        sub_140032FF0(&v995);
      v271 = (__int64)v982.m256i_i64 + 1;
      v982.m256i_i64[3] = v902.m128i_i64[1];
      *(__m128i *)&v982.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v901);
      v982.m256i_i8[0] = 5;
      v272 = v885;
      v909 = v1004;
      v273 = v999;
      if ( v999 == -1 )
      {
        v988 = 1;
        v274 = sub_1416724D0(aReasoningConte, 17, v53);
        v271 = (__int64)v959;
        v273 = -1;
        v272 = (__int64)v891;
        if ( v274 && *(_BYTE *)v274 == 3 )
        {
          v275 = *(_QWORD *)(v274 + 24);
          v909 = (__int64)v959;
          if ( v275 )
          {
            v53 = *(_QWORD *)(v274 + 16);
            sub_1401E7560((unsigned int)&v995, v275, 0, 1, 1);
            v273 = v995.m256i_i64[1];
            if ( v995.m256i_i32[0] == 1 )
            {
              v988 = 1;
              sub_14196B2DB(v995.m256i_i64[1], v995.m256i_i64[2]);
            }
            v909 = v995.m256i_i64[2];
            sub_1419234B0(v995.m256i_i64[2], v53, v275);
            v272 = v275;
          }
        }
        else
        {
          v909 = (__int64)v959;
        }
      }
      v999 = v273;
      if ( !v915
        || (v271 = v914, v914 + 32 * v915 == 32)
        || (v1003 = 1, v1002 = 1, v276 = sub_1416724D0(aRole_2, 4, v914 + 32 * v915 - 32), v270 = v999, !v276)
        || *(_BYTE *)v276 != 3
        || *(_QWORD *)(v276 + 24) != 9
        || (v277 = *(_QWORD *)(v276 + 16),
            v271 = *(_QWORD *)v277 ^ 0x6E61747369737361LL,
            v271 | *(unsigned __int8 *)(v277 + 8) ^ 0x74LL) )
      {
        v957.m256i_i64[0] = 0;
        v957.m256i_i64[2] = 0;
        nullsub_1(v271, v270);
        v278 = (_DWORD *)sub_140001650(4, 1);
        if ( !v278 )
          sub_14196B2DB(1, 4);
        *v278 = 1701605234;
        v989.m128i_i64[0] = 4;
        v989.m128i_i64[1] = (__int64)v278;
        *(_QWORD *)&v990 = 4;
        nullsub_1(v280, v279);
        v281 = sub_140001650(9, 1);
        v959 = (__m128i *)v281;
        if ( !v281 )
          sub_14196B2DB(1, 9);
        *(_QWORD *)v281 = 0x6E61747369737361LL;
        *(_BYTE *)(v281 + 8) = 116;
        v995.m256i_i8[0] = 3;
        v995.m256i_i64[1] = 9;
        v995.m256i_i64[2] = v281;
        v995.m256i_i64[3] = 9;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        nullsub_1(v283, v282);
        v284 = (_DWORD *)sub_140001650(7, 1);
        if ( !v284 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v284 + 3) = 1953391988;
        *v284 = 1953394531;
        v989.m128i_i64[0] = 7;
        v989.m128i_i64[1] = (__int64)v284;
        *(_QWORD *)&v990 = 7;
        v978 = 1;
        sub_140B73E90(&v995, &unk_141A532B0);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53BA8);
        }
        v285 = _mm_loadu_si128((const __m128i *)&v995);
        *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)v983.m256i_i8 = v285;
        v978 = 0;
        sub_140A68320(&v995, &v957, &v989, &v983);
        if ( v995.m256i_i8[0] != -1 )
          sub_140032FF0(&v995);
        nullsub_1(v287, v286);
        v288 = (void *)sub_140001650(10, 1);
        if ( !v288 )
          sub_14196B2DB(1, 10);
        qmemcpy(v288, "tool_calls", 10);
        v989.m128i_i64[0] = 10;
        v989.m128i_i64[1] = (__int64)v288;
        *(_QWORD *)&v990 = 10;
        nullsub_1(0x6C61635F6C6F6F74LL, v289);
        v959 = (__m128i *)sub_140001650(32, 8);
        if ( !v959 )
        {
          v965 = 1;
          sub_14196B2C1(8, 32);
        }
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53BA8);
        }
        v290 = _mm_loadu_si128((const __m128i *)&v995);
        v291 = v959;
        v959[1] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v291 = v290;
        v995.m256i_i64[1] = 1;
        v995.m256i_i64[2] = (__int64)v291;
        v995.m256i_i64[3] = 1;
        v995.m256i_i8[0] = 4;
        v965 = 0;
        sub_140A68320(&v983, &v957, &v989, &v995);
        v292 = v999;
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        v293 = v957.m256i_i32[4];
        v911.m256i_i64[3] = v957.m256i_i64[2];
        *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
        v911.m256i_i8[0] = 5;
        if ( v292 == -1 )
        {
          LOBYTE(v293) = 1;
          LODWORD(v959) = v293;
        }
        else
        {
          v995.m256i_i64[1] = v292;
          v995.m256i_i64[2] = v909;
          v995.m256i_i64[3] = v272;
          v995.m256i_i8[0] = 3;
          v942 = 1;
          v959 = (__m128i *)sub_1416725D0(aReasoningConte, 17, &v911);
          sub_140032FF0(v959);
          v294 = _mm_loadu_si128((const __m128i *)&v995);
          v295 = v959;
          v959[1] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
          *v295 = v294;
          LODWORD(v959) = 0;
        }
        v296 = _mm_loadu_si128((const __m128i *)&v911);
        *(__m128i *)&v995.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
        *(__m128i *)v995.m256i_i8 = v296;
        v297 = v915;
        if ( v915 == v913 )
          sub_1419397B0(&v913);
        v298 = v914;
        v299 = 32 * v297;
        v300 = _mm_load_si128((const __m128i *)&v995);
        *(__m128i *)(v914 + v299 + 16) = _mm_load_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)(v298 + v299) = v300;
        v915 = v297 + 1;
        v270 = v999;
        v5 = v909;
        if ( (((unsigned __int64)(v999 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v959) != 0 )
LABEL_299:
          sub_140001660(v5, v270, 1);
LABEL_300:
        v884 = -1;
        sub_140032FF0(&v982);
        goto LABEL_301;
      }
      if ( !v915 )
      {
        v5 = v909;
        if ( (unsigned __int64)(v999 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_299;
        goto LABEL_300;
      }
      v331 = v914 + 32 * v915 - 32;
      v1003 = 1;
      v1002 = 1;
      v332 = sub_1416724D0(aToolCalls, 10, v331);
      if ( v332 && *(_BYTE *)v332 == 4 )
      {
        v335 = _mm_loadu_si128((const __m128i *)&v982);
        *(__m128i *)&v995.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v982.m256i_u64[2]);
        *(__m128i *)v995.m256i_i8 = v335;
        v53 = *(_QWORD *)(v332 + 24);
        if ( v53 == *(_QWORD *)(v332 + 8) )
        {
          v336 = v332;
          sub_1419397B0(v332 + 8);
          v332 = v336;
        }
        v337 = *(_QWORD *)(v332 + 16);
        v338 = 32 * v53;
        v339 = _mm_load_si128((const __m128i *)&v995);
        *(__m128i *)(v337 + v338 + 16) = _mm_load_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)(v337 + v338) = v339;
        *(_QWORD *)(v332 + 24) = v53 + 1;
        LODWORD(v53) = 0;
      }
      else
      {
        nullsub_1(v334, v333);
        v959 = (__m128i *)sub_140001650(32, 8);
        if ( !v959 )
        {
          v1003 = 1;
          v1002 = 1;
          sub_14196B2C1(8, 32);
        }
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53BC0);
        }
        v340 = _mm_loadu_si128((const __m128i *)&v995);
        v341 = v959;
        v959[1] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v341 = v340;
        v995.m256i_i64[1] = 1;
        v995.m256i_i64[2] = (__int64)v341;
        v995.m256i_i64[3] = 1;
        v995.m256i_i8[0] = 4;
        v941 = 1;
        v959 = (__m128i *)sub_1416725D0(aToolCalls, 10, v331);
        sub_140032FF0(v959);
        v342 = _mm_loadu_si128((const __m128i *)&v995);
        v343 = v959;
        v959[1] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v343 = v342;
        LOBYTE(v53) = 1;
      }
      v5 = v909;
      if ( v999 != -1 )
      {
        LODWORD(v959) = v53;
        v964 = 1;
        v344 = sub_1416724D0(aReasoningConte, 17, v331);
        if ( v344 && *(_BYTE *)v344 == 3 && *(_QWORD *)(v344 + 24) )
        {
          v5 = v909;
          LOBYTE(v53) = (_BYTE)v959;
          if ( v999 )
            sub_140001660(v909, v999, 1);
        }
        else
        {
          v995.m256i_i64[1] = v999;
          v995.m256i_i64[2] = v909;
          v995.m256i_i64[3] = v272;
          v995.m256i_i8[0] = 3;
          v940 = 1;
          v891 = (__m128i *)sub_1416725D0(aReasoningConte, 17, v331);
          sub_140032FF0(v891);
          v355 = _mm_loadu_si128((const __m128i *)&v995);
          v356 = v891;
          v891[1] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
          *v356 = v355;
          v5 = v909;
          LOBYTE(v53) = (_BYTE)v959;
        }
      }
      if ( (_BYTE)v53 )
        goto LABEL_300;
LABEL_301:
      if ( v910 )
        sub_140001660(v894, v910, 1);
      v301 = v1004;
      v302 = v968;
      if ( v908 )
        sub_140001660(v899, v908, 1);
      v891 = (__m128i *)v272;
      v959 = (__m128i *)v5;
      v45 = v301;
      v47 = -1;
      if ( v302 )
      {
        sub_140001660(v906, v302, 1);
        v891 = (__m128i *)v272;
        v959 = (__m128i *)v5;
        v45 = v301;
        v47 = -1;
      }
      goto LABEL_39;
    case 16LL:
      v45 = v1004;
      v47 = v52;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v56), v48)) != 0xFFFF )
        goto LABEL_39;
      v956 = v52;
      v70 = sub_1416724D0(aCallId_0, 7, v53);
      v73 = v52;
      if ( v70 && *(_BYTE *)v70 == 3 )
        goto LABEL_67;
      v956 = v52;
      v70 = sub_1416724D0(aId_5, 2, v53);
      v74 = 12;
      if ( v70 )
      {
        v75 = &unk_141A53B24;
        v73 = v999;
        if ( *(_BYTE *)v70 == 3 )
        {
LABEL_67:
          v74 = *(_QWORD *)(v70 + 24);
          if ( v74 < 0 )
          {
            v5 = 0;
            goto LABEL_412;
          }
          if ( !v74 )
          {
            v905 = 1;
            v155 = 1;
            v968 = 0;
            goto LABEL_152;
          }
          v75 = *(void **)(v70 + 16);
        }
      }
      else
      {
        v75 = &unk_141A53B24;
        v73 = v999;
      }
      nullsub_1(v72, v71);
      v5 = 1;
      v154 = sub_140001650(v74, 1);
      if ( !v154 )
      {
        v905 = v74;
LABEL_412:
        v956 = v73;
        sub_14196B2DB(v5, v905);
      }
      v905 = v154;
      v968 = v74;
      sub_1419234B0(v154, v75, v74);
      v155 = 0;
LABEL_152:
      v156 = sub_1416724D0(aName_6, 4, v53);
      v159 = 4;
      if ( v156 )
      {
        v160 = &unk_141A53B30;
        if ( *(_BYTE *)v156 == 3 )
        {
          v159 = *(_QWORD *)(v156 + 24);
          if ( v159 < 0 )
          {
            v173 = 0;
            goto LABEL_481;
          }
          if ( !v159 )
          {
            v895 = 1;
            LOBYTE(v5) = 1;
            v908 = nullptr;
            goto LABEL_166;
          }
          v160 = *(void **)(v156 + 16);
        }
      }
      else
      {
        v160 = &unk_141A53B30;
      }
      nullsub_1(v158, v157);
      v173 = 1;
      v174 = sub_140001650(v159, 1);
      if ( !v174 )
      {
        v895 = v159;
LABEL_481:
        sub_14196B2DB(v173, v895);
      }
      v895 = v174;
      v908 = (const __m128i *)v159;
      sub_1419234B0(v174, v160, v159);
      LODWORD(v5) = 0;
LABEL_166:
      v175 = sub_1416724D0(aInput_3, 5, v53);
      v178 = 1;
      if ( v175 && *(_BYTE *)v175 == 3 )
      {
        v178 = *(_QWORD *)(v175 + 16);
        v179 = *(_QWORD *)(v175 + 24);
      }
      else
      {
        v179 = 0;
      }
      v989.m128i_i64[0] = 0;
      *(_QWORD *)&v990 = 0;
      nullsub_1(v177, v176);
      v180 = sub_140001650(5, 1);
      if ( !v180 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v180 + 4) = 116;
      *(_DWORD *)v180 = 1970302569;
      v982.m256i_i64[0] = 5;
      v982.m256i_i64[1] = v180;
      v982.m256i_i64[2] = 5;
      if ( v179 < 0 )
      {
        v183 = 0;
LABEL_479:
        v953 = 1;
        sub_14196B2DB(v183, v179);
      }
      LODWORD(v910) = v5;
      if ( v179 )
      {
        nullsub_1(v182, v181);
        v183 = 1;
        v184 = sub_140001650(v179, 1);
        if ( !v184 )
          goto LABEL_479;
        v185 = v184;
        sub_1419234B0(v184, v178, v179);
      }
      else
      {
        v185 = 1;
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v179;
      v995.m256i_i64[2] = v185;
      v995.m256i_i64[3] = v179;
      v953 = 0;
      sub_140A68320(&v983, &v989, &v982, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      v911.m256i_i64[3] = v990;
      *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128(&v989);
      v911.m256i_i8[0] = 5;
      v983.m256i_i64[0] = 0;
      *(_OWORD *)&v983.m256i_u64[1] = 1u;
      v995.m256i_i64[2] = 1610612768;
      v995.m256i_i64[0] = (__int64)&v983;
      v995.m256i_i64[1] = (__int64)&off_141A55F58;
      if ( (unsigned __int8)sub_14166C3A0(&v911, &v995) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_4,
          55,
          (unsigned int)&v898,
          (unsigned int)&unk_141A52978,
          (__int64)&off_141A56010);
      v909 = v983.m256i_i64[1];
      v894 = v983.m256i_i64[0];
      v207 = v983.m256i_i64[2];
      sub_140032FF0(&v911);
      v901 = 0;
      v902.m128i_i64[1] = 0;
      nullsub_1(v209, v208);
      v210 = (_WORD *)sub_140001650(2, 1);
      if ( !v210 )
        sub_14196B2DB(1, 2);
      *v210 = 25705;
      v911.m256i_i64[0] = 2;
      v911.m256i_i64[1] = (__int64)v210;
      v911.m256i_i64[2] = 2;
      v213 = 1;
      v99 = v155 == 0;
      v214 = v968;
      if ( v99 )
      {
        nullsub_1(v212, v211);
        v215 = sub_140001650(v214, 1);
        if ( !v215 )
        {
          v952 = 1;
          sub_14196B2DB(1, v214);
        }
        v213 = v215;
        sub_1419234B0(v215, v905, v214);
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v214;
      v995.m256i_i64[2] = v213;
      v995.m256i_i64[3] = v214;
      v952 = 0;
      sub_140A68320(&v983, &v901, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v217, v216);
      v218 = (_DWORD *)sub_140001650(4, 1);
      if ( !v218 )
        sub_14196B2DB(1, 4);
      *v218 = 1701869940;
      v911.m256i_i64[0] = 4;
      v911.m256i_i64[1] = (__int64)v218;
      v911.m256i_i64[2] = 4;
      nullsub_1(v220, v219);
      v221 = (_QWORD *)sub_140001650(8, 1);
      v872 = v221;
      if ( !v221 )
        sub_14196B2DB(1, 8);
      *v221 = 0x6E6F6974636E7566LL;
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = 8;
      v995.m256i_i64[2] = (__int64)v221;
      v995.m256i_i64[3] = 8;
      sub_140A68320(&v983, &v901, &v911, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v223, v222);
      v224 = (_QWORD *)sub_140001650(8, 1);
      v5 = (unsigned int)v910;
      if ( !v224 )
        sub_14196B2DB(1, 8);
      *v224 = 0x6E6F6974636E7566LL;
      v907.m256i_i64[0] = 8;
      v907.m256i_i64[1] = (__int64)v224;
      v907.m256i_i64[2] = 8;
      v957.m256i_i64[0] = 0;
      v957.m256i_i64[2] = 0;
      nullsub_1(0x6E6F6974636E7566LL, v225);
      v226 = (_DWORD *)sub_140001650(4, 1);
      v229 = (__int64)v908;
      if ( !v226 )
        sub_14196B2DB(1, 4);
      *v226 = 1701667182;
      v989.m128i_i64[0] = 4;
      v989.m128i_i64[1] = (__int64)v226;
      *(_QWORD *)&v990 = 4;
      v230 = 1;
      if ( !(_BYTE)v5 )
      {
        nullsub_1(v228, v227);
        v231 = sub_140001650(v229, 1);
        if ( !v231 )
        {
          v951 = 1;
          sub_14196B2DB(1, v229);
        }
        v230 = v231;
        sub_1419234B0(v231, v895, v229);
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v229;
      v995.m256i_i64[2] = v230;
      v995.m256i_i64[3] = v229;
      v951 = 0;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v233, v232);
      v234 = sub_140001650(9, 1);
      if ( !v234 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v234 = 0x746E656D75677261LL;
      *(_BYTE *)(v234 + 8) = 115;
      v989.m128i_i64[0] = 9;
      v989.m128i_i64[1] = v234;
      *(_QWORD *)&v990 = 9;
      if ( v207 < 0 )
      {
        v5 = 0;
LABEL_1058:
        v950 = 1;
        sub_14196B2DB(v5, v207);
      }
      if ( v207 )
      {
        nullsub_1(0x746E656D75677261LL, v235);
        v5 = 1;
        v236 = sub_140001650(v207, 1);
        if ( !v236 )
          goto LABEL_1058;
        v237 = v236;
        sub_1419234B0(v236, v909, v207);
      }
      else
      {
        v237 = 1;
      }
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = v207;
      v995.m256i_i64[2] = v237;
      v995.m256i_i64[3] = v207;
      v950 = 0;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      v911.m256i_i64[3] = v957.m256i_i64[2];
      *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
      v911.m256i_i8[0] = 5;
      v949 = 0;
      sub_140A68320(&v995, &v901, &v907, &v911);
      if ( v995.m256i_i8[0] != -1 )
        sub_140032FF0(&v995);
      v304 = (__int64)v982.m256i_i64 + 1;
      v982.m256i_i64[3] = v902.m128i_i64[1];
      *(__m128i *)&v982.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v901);
      v982.m256i_i8[0] = 5;
      if ( !v915
        || (v304 = v914, v914 + 32 * v915 == 32)
        || (v998 = 1, (v305 = sub_1416724D0(aRole_2, 4, v914 + 32 * v915 - 32)) == 0)
        || *(_BYTE *)v305 != 3
        || *(_QWORD *)(v305 + 24) != 9
        || (v306 = *(_QWORD *)(v305 + 16),
            v303 = 0x6E61747369737361LL,
            v304 = *(_QWORD *)v306 ^ 0x6E61747369737361LL,
            v304 | *(unsigned __int8 *)(v306 + 8) ^ 0x74LL) )
      {
        v957.m256i_i64[0] = 0;
        v957.m256i_i64[2] = 0;
        nullsub_1(v304, v303);
        v307 = (_DWORD *)sub_140001650(4, 1);
        if ( !v307 )
          sub_14196B2DB(1, 4);
        *v307 = 1701605234;
        v989.m128i_i64[0] = 4;
        v989.m128i_i64[1] = (__int64)v307;
        *(_QWORD *)&v990 = 4;
        nullsub_1(v309, v308);
        v310 = sub_140001650(9, 1);
        v910 = v310;
        if ( !v310 )
          sub_14196B2DB(1, 9);
        *(_QWORD *)v310 = 0x6E61747369737361LL;
        *(_BYTE *)(v310 + 8) = 116;
        v995.m256i_i8[0] = 3;
        v995.m256i_i64[1] = 9;
        v995.m256i_i64[2] = v310;
        v995.m256i_i64[3] = 9;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        nullsub_1(v312, v311);
        v313 = (_DWORD *)sub_140001650(7, 1);
        if ( !v313 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v313 + 3) = 1953391988;
        *v313 = 1953394531;
        v989.m128i_i64[0] = 7;
        v989.m128i_i64[1] = (__int64)v313;
        *(_QWORD *)&v990 = 7;
        v980 = 1;
        sub_140B73E90(&v995, &unk_141A532B0);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53B60);
        }
        v314 = _mm_loadu_si128((const __m128i *)&v995);
        *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)v983.m256i_i8 = v314;
        v980 = 0;
        sub_140A68320(&v995, &v957, &v989, &v983);
        if ( v995.m256i_i8[0] != -1 )
          sub_140032FF0(&v995);
        nullsub_1(v316, v315);
        v317 = (void *)sub_140001650(10, 1);
        if ( !v317 )
          sub_14196B2DB(1, 10);
        qmemcpy(v317, "tool_calls", 10);
        v989.m128i_i64[0] = 10;
        v989.m128i_i64[1] = (__int64)v317;
        *(_QWORD *)&v990 = 10;
        nullsub_1(0x6C61635F6C6F6F74LL, v318);
        v910 = sub_140001650(32, 8);
        if ( !v910 )
        {
          v966 = 1;
          sub_14196B2C1(8, 32);
        }
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53B60);
        }
        v319 = _mm_loadu_si128((const __m128i *)&v995);
        v320 = (_OWORD *)v910;
        *(__m128i *)(v910 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v320 = v319;
        v995.m256i_i64[1] = 1;
        v995.m256i_i64[2] = (__int64)v320;
        v995.m256i_i64[3] = 1;
        v995.m256i_i8[0] = 4;
        v966 = 0;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        v911.m256i_i64[3] = v957.m256i_i64[2];
        *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
        v911.m256i_i8[0] = 5;
        v321 = v915;
        if ( v915 == v913 )
          sub_1419397B0(&v913);
        v322 = v914;
        v323 = 32 * v321;
        v324 = _mm_loadu_si128((const __m128i *)&v911);
        *(__m128i *)(v914 + v323 + 16) = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
        *(__m128i *)(v322 + v323) = v324;
        v915 = v321 + 1;
        goto LABEL_334;
      }
      if ( !v915 )
        goto LABEL_334;
      v345 = v914 + 32 * v915 - 32;
      v998 = 1;
      v346 = sub_1416724D0(aToolCalls, 10, v345);
      v349 = v346;
      if ( !v346 || *(_BYTE *)v346 != 4 )
      {
        nullsub_1(v348, v347);
        v910 = sub_140001650(32, 8);
        if ( !v910 )
        {
          v998 = 1;
          sub_14196B2C1(8, 32);
        }
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53B78);
        }
        v357 = _mm_loadu_si128((const __m128i *)&v995);
        v358 = (_OWORD *)v910;
        *(__m128i *)(v910 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v358 = v357;
        v995.m256i_i64[1] = 1;
        v995.m256i_i64[2] = (__int64)v358;
        v995.m256i_i64[3] = 1;
        v995.m256i_i8[0] = 4;
        v948 = 1;
        v910 = sub_1416725D0(aToolCalls, 10, v345);
        sub_140032FF0(v910);
        v359 = _mm_loadu_si128((const __m128i *)&v995);
        v360 = (_OWORD *)v910;
        *(__m128i *)(v910 + 16) = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *v360 = v359;
LABEL_334:
        sub_140032FF0(&v982);
        v325 = v894;
        if ( !v894 )
          goto LABEL_336;
LABEL_335:
        sub_140001660(v909, v325, 1);
        goto LABEL_336;
      }
      v350 = _mm_loadu_si128((const __m128i *)&v982);
      *(__m128i *)&v995.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v982.m256i_u64[2]);
      *(__m128i *)v995.m256i_i8 = v350;
      v351 = *(_QWORD *)(v346 + 24);
      if ( v351 == *(_QWORD *)(v346 + 8) )
        sub_1419397B0(v346 + 8);
      v352 = *(_QWORD *)(v349 + 16);
      v353 = 32 * v351;
      v354 = _mm_load_si128((const __m128i *)&v995);
      *(__m128i *)(v352 + v353 + 16) = _mm_load_si128((const __m128i *)&v995.m256i_u64[2]);
      *(__m128i *)(v352 + v353) = v354;
      *(_QWORD *)(v349 + 24) = v351 + 1;
      v325 = v894;
      if ( v894 )
        goto LABEL_335;
LABEL_336:
      v110 = v1004;
      v111 = v999;
      v326 = v968;
      if ( v908 )
        sub_140001660(v895, v908, 1);
      v45 = v110;
      v47 = v111;
      if ( !v326 )
        goto LABEL_39;
      v113 = v905;
      v112 = v326;
      goto LABEL_144;
    case 20LL:
      v45 = v1004;
      v47 = v52;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v56 + 16)), v49),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v56), v50))) != 0xFFFF )
        goto LABEL_39;
      v956 = v52;
      v60 = sub_1416724D0(aCallId_0, 7, v53);
      v63 = 12;
      if ( v60 )
      {
        v64 = &unk_141A53B24;
        v62 = v999;
        if ( *(_BYTE *)v60 == 3 )
        {
          v63 = *(_QWORD *)(v60 + 24);
          if ( v63 < 0 )
          {
            v5 = 0;
            v379 = v916;
            goto LABEL_414;
          }
          if ( !v63 )
          {
            v916 = 1;
            v88 = 1;
            v968 = 0;
            goto LABEL_87;
          }
          v64 = *(void **)(v60 + 16);
        }
      }
      else
      {
        v64 = &unk_141A53B24;
      }
      nullsub_1(v62, v61);
      v5 = 1;
      v87 = sub_140001650(v63, 1);
      if ( !v87 )
      {
        v379 = v63;
        v62 = v999;
LABEL_414:
        v956 = v62;
        sub_14196B2DB(v5, v379);
      }
      v916 = v87;
      v968 = v63;
      sub_1419234B0(v87, v64, v63);
      v88 = 0;
LABEL_87:
      v89 = sub_1416724D0(aOutput_3, 6, v53);
      sub_140832980(&v995, v89);
      if ( v995.m256i_i8[0] == -1 )
      {
        v860 = (_BYTE *)v890;
        *(_OWORD *)(v890 + 8) = *(_OWORD *)&v995.m256i_u64[1];
        *v860 = -1;
        v861 = v968;
        v858 = v999;
        if ( v968 )
        {
          v862 = v916;
          goto LABEL_1070;
        }
        goto LABEL_1071;
      }
      v982.m256i_i32[1] = v995.m256i_i32[1];
      *(__int32 *)((char *)v982.m256i_i32 + 1) = *(__int32 *)((char *)v995.m256i_i32 + 1);
      v90 = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
      v982.m256i_i8[0] = v995.m256i_i8[0];
      v982.m256i_i64[1] = v995.m256i_i64[1];
      *(__m128i *)&v982.m256i_u64[2] = v90;
      v957.m256i_i64[0] = 0;
      v957.m256i_i64[2] = 0;
      nullsub_1(v995.m256i_i64[1], v995.m256i_u32[1]);
      v91 = (_DWORD *)sub_140001650(4, 1);
      if ( !v91 )
        sub_14196B2DB(1, 4);
      *v91 = 1701605234;
      v989.m128i_i64[0] = 4;
      v989.m128i_i64[1] = (__int64)v91;
      *(_QWORD *)&v990 = 4;
      nullsub_1(v93, v92);
      v94 = (__m128i *)sub_140001650(4, 1);
      v908 = v94;
      if ( !v94 )
        sub_14196B2DB(1, 4);
      v94->m128i_i32[0] = 1819242356;
      v995.m256i_i8[0] = 3;
      v995.m256i_i64[1] = 4;
      v995.m256i_i64[2] = (__int64)v94;
      v995.m256i_i64[3] = 4;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v96, v95);
      v97 = (void *)sub_140001650(12, 1);
      if ( !v97 )
        sub_14196B2DB(1, 12);
      qmemcpy(v97, "tool_call_id", 12);
      v989.m128i_i64[0] = 12;
      v989.m128i_i64[1] = (__int64)v97;
      *(_QWORD *)&v990 = 12;
      *((_QWORD *)&v100 + 1) = 1;
      v99 = v88 == 0;
      *(_QWORD *)&v100 = v968;
      if ( v99 )
      {
        nullsub_1(0x6C61635F6C6F6F74LL, v98);
        v101 = sub_140001650(v100, 1);
        if ( !v101 )
        {
          v947 = 1;
          sub_14196B2DB(1, v100);
        }
        *((_QWORD *)&v100 + 1) = v101;
        sub_1419234B0(v101, v916, v100);
      }
      v995.m256i_i8[0] = 3;
      *(_OWORD *)&v995.m256i_u64[1] = v100;
      v995.m256i_i64[3] = v100;
      v947 = 0;
      sub_140A68320(&v983, &v957, &v989, &v995);
      if ( v983.m256i_i8[0] != -1 )
        sub_140032FF0(&v983);
      nullsub_1(v103, v102);
      v104 = (_DWORD *)sub_140001650(7, 1);
      if ( !v104 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v104 + 3) = 1953391988;
      *v104 = 1953394531;
      v989.m128i_i64[0] = 7;
      v989.m128i_i64[1] = (__int64)v104;
      *(_QWORD *)&v990 = 7;
      v979 = 1;
      sub_140B73E90(&v995, &v982);
      if ( v995.m256i_i8[0] == -1 )
      {
        v983.m256i_i64[0] = v995.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_11,
          43,
          (unsigned int)&v983,
          (unsigned int)&off_141A52958,
          (__int64)&off_141A53B90);
      }
      v105 = _mm_loadu_si128((const __m128i *)&v995);
      *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
      *(__m128i *)v983.m256i_i8 = v105;
      v979 = 0;
      sub_140A68320(&v995, &v957, &v989, &v983);
      if ( v995.m256i_i8[0] != -1 )
        sub_140032FF0(&v995);
      v911.m256i_i64[3] = v957.m256i_i64[2];
      *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
      v911.m256i_i8[0] = 5;
      v106 = v915;
      if ( v915 == v913 )
        sub_1419397B0(&v913);
      v107 = v914;
      v108 = 32 * v106;
      v109 = _mm_loadu_si128((const __m128i *)&v911);
      *(__m128i *)(v914 + v108 + 16) = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
      *(__m128i *)(v107 + v108) = v109;
      v915 = v106 + 1;
      sub_140032FF0(&v982);
      v110 = v1004;
      v45 = v1004;
      v111 = v999;
      v47 = v999;
      v112 = v968;
      if ( v968 )
      {
        v113 = v916;
        goto LABEL_144;
      }
      goto LABEL_39;
    case 23LL:
      v45 = v1004;
      v47 = v52;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v56), v48),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v56 + 7)), v51))) != 0xFFFF )
        goto LABEL_39;
      v956 = v52;
      v82 = sub_1416724D0(aCallId_0, 7, v53);
      v85 = 12;
      if ( !v82 )
      {
        v86 = &unk_141A53B24;
        goto LABEL_123;
      }
      v86 = &unk_141A53B24;
      v84 = v999;
      if ( *(_BYTE *)v82 != 3 )
        goto LABEL_123;
      v85 = *(_QWORD *)(v82 + 24);
      if ( v85 < 0 )
      {
        v5 = 0;
        v380 = v917;
        goto LABEL_416;
      }
      if ( v85 )
      {
        v86 = *(void **)(v82 + 16);
LABEL_123:
        nullsub_1(v84, v83);
        v5 = 1;
        v130 = sub_140001650(v85, 1);
        if ( v130 )
        {
          v917 = v130;
          v968 = v85;
          sub_1419234B0(v130, v86, v85);
          v131 = 0;
          goto LABEL_125;
        }
        v380 = v85;
        v84 = v999;
LABEL_416:
        v956 = v84;
        sub_14196B2DB(v5, v380);
      }
      v917 = 1;
      v131 = 1;
      v968 = 0;
LABEL_125:
      v132 = sub_1416724D0(aOutput_3, 6, v53);
      sub_140832980(&v995, v132);
      if ( v995.m256i_i8[0] != -1 )
      {
        v982.m256i_i32[1] = v995.m256i_i32[1];
        *(__int32 *)((char *)v982.m256i_i32 + 1) = *(__int32 *)((char *)v995.m256i_i32 + 1);
        v133 = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        v982.m256i_i8[0] = v995.m256i_i8[0];
        v982.m256i_i64[1] = v995.m256i_i64[1];
        *(__m128i *)&v982.m256i_u64[2] = v133;
        v957.m256i_i64[0] = 0;
        v957.m256i_i64[2] = 0;
        nullsub_1(v995.m256i_i64[1], v995.m256i_u32[1]);
        v134 = (_DWORD *)sub_140001650(4, 1);
        if ( !v134 )
          sub_14196B2DB(1, 4);
        *v134 = 1701605234;
        v989.m128i_i64[0] = 4;
        v989.m128i_i64[1] = (__int64)v134;
        *(_QWORD *)&v990 = 4;
        nullsub_1(v136, v135);
        v137 = (__m128i *)sub_140001650(4, 1);
        v908 = v137;
        if ( !v137 )
          sub_14196B2DB(1, 4);
        v137->m128i_i32[0] = 1819242356;
        v995.m256i_i8[0] = 3;
        v995.m256i_i64[1] = 4;
        v995.m256i_i64[2] = (__int64)v137;
        v995.m256i_i64[3] = 4;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        nullsub_1(v139, v138);
        v140 = (void *)sub_140001650(12, 1);
        if ( !v140 )
          sub_14196B2DB(1, 12);
        qmemcpy(v140, "tool_call_id", 12);
        v989.m128i_i64[0] = 12;
        v989.m128i_i64[1] = (__int64)v140;
        *(_QWORD *)&v990 = 12;
        *((_QWORD *)&v142 + 1) = 1;
        v99 = v131 == 0;
        *(_QWORD *)&v142 = v968;
        if ( v99 )
        {
          nullsub_1(0x6C61635F6C6F6F74LL, v141);
          v143 = sub_140001650(v142, 1);
          if ( !v143 )
          {
            v954 = 1;
            sub_14196B2DB(1, v142);
          }
          *((_QWORD *)&v142 + 1) = v143;
          sub_1419234B0(v143, v917, v142);
        }
        v995.m256i_i8[0] = 3;
        *(_OWORD *)&v995.m256i_u64[1] = v142;
        v995.m256i_i64[3] = v142;
        v954 = 0;
        sub_140A68320(&v983, &v957, &v989, &v995);
        if ( v983.m256i_i8[0] != -1 )
          sub_140032FF0(&v983);
        nullsub_1(v145, v144);
        v146 = (_DWORD *)sub_140001650(7, 1);
        if ( !v146 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v146 + 3) = 1953391988;
        *v146 = 1953394531;
        v989.m128i_i64[0] = 7;
        v989.m128i_i64[1] = (__int64)v146;
        *(_QWORD *)&v990 = 7;
        v981 = 1;
        sub_140B73E90(&v995, &v982);
        if ( v995.m256i_i8[0] == -1 )
        {
          v983.m256i_i64[0] = v995.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_11,
            43,
            (unsigned int)&v983,
            (unsigned int)&off_141A52958,
            (__int64)&off_141A53B38);
        }
        v147 = _mm_loadu_si128((const __m128i *)&v995);
        *(__m128i *)&v983.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v995.m256i_u64[2]);
        *(__m128i *)v983.m256i_i8 = v147;
        v981 = 0;
        sub_140A68320(&v995, &v957, &v989, &v983);
        if ( v995.m256i_i8[0] != -1 )
          sub_140032FF0(&v995);
        v911.m256i_i64[3] = v957.m256i_i64[2];
        *(__m128i *)&v911.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v957);
        v911.m256i_i8[0] = 5;
        v148 = v915;
        if ( v915 == v913 )
          sub_1419397B0(&v913);
        v149 = v914;
        v150 = 32 * v148;
        v151 = _mm_loadu_si128((const __m128i *)&v911);
        *(__m128i *)(v914 + v150 + 16) = _mm_loadu_si128((const __m128i *)&v911.m256i_u64[2]);
        *(__m128i *)(v149 + v150) = v151;
        v915 = v148 + 1;
        sub_140032FF0(&v982);
        v110 = v1004;
        v45 = v1004;
        v111 = v999;
        v47 = v999;
        v112 = v968;
        if ( v968 )
        {
          v113 = v917;
LABEL_144:
          sub_140001660(v113, v112, 1);
          v45 = v110;
          v47 = v111;
        }
        goto LABEL_39;
      }
      v863 = (_BYTE *)v890;
      *(_OWORD *)(v890 + 8) = *(_OWORD *)&v995.m256i_u64[1];
      *v863 = -1;
      v861 = v968;
      v858 = v999;
      if ( v968 )
      {
        v862 = v917;
LABEL_1070:
        sub_140001660(v862, v861, 1);
      }
LABEL_1071:
      if ( (unsigned __int64)(v858 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v1004, v858, 1);
      sub_1402348C0(&v913);
LABEL_1074:
      if ( v913 )
        sub_140001660(v914, 32 * v913, 8);
      return v890;
    default:
      v45 = v1004;
      v47 = v52;
      goto LABEL_39;
  }
}
