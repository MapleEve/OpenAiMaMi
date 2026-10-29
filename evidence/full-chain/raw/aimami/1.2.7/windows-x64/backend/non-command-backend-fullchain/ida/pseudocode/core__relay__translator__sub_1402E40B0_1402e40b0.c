// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e40b0 | name sub_1402E40B0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402E40B0(__int64 a1, unsigned __int64 a2, const __m128i *a3, __int64 a4, char a5)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rsi
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __m128i *v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i *v37; // rcx
  __int64 v38; // rbx
  unsigned __int64 v39; // r10
  __m128i v40; // xmm6
  __m128i v41; // xmm7
  __m128i v42; // xmm8
  __m128i v43; // xmm9
  unsigned __int64 v44; // rsi
  const __m128i *v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i *v50; // rsi
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  signed __int64 v54; // rdi
  const __m128i *v55; // rsi
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  signed __int64 v58; // rdi
  const __m128i *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int64 v62; // rdi
  signed __int64 v63; // r13
  const __m128i *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int128 v68; // kr20_16
  __int64 v69; // rdi
  unsigned __int64 v70; // r13
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  signed __int64 v73; // rdi
  const __m128i *v74; // rsi
  __m128i *v75; // rax
  char v76; // di
  __int64 v77; // rax
  __m128i v78; // xmm0
  _DWORD *v79; // rax
  __int64 v80; // rcx
  _DWORD *v81; // rax
  __int64 v82; // rcx
  void *v83; // rax
  bool v84; // zf
  __int128 v85; // rdi
  __m128i *v86; // rax
  __int64 v87; // rcx
  _DWORD *v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int64 v94; // rsi
  unsigned __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r12
  __m128i *v99; // rax
  char v100; // r13
  __int64 v101; // rax
  __int64 v102; // rcx
  signed __int64 v103; // rdi
  const __m128i *v104; // rsi
  unsigned __int8 *v105; // rax
  __m128i v106; // xmm0
  _DWORD *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r13
  __m128i *v110; // rax
  __int64 v111; // r15
  __m128i *v112; // rax
  char v113; // di
  __int64 v114; // rax
  __m128i v115; // xmm0
  _DWORD *v116; // rax
  __int64 v117; // rcx
  _DWORD *v118; // rax
  __int64 v119; // rcx
  void *v120; // rax
  __int128 v121; // rdi
  __m128i *v122; // rax
  __int64 v123; // rcx
  _DWORD *v124; // rax
  __m128i v125; // xmm0
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rcx
  __m128i v129; // xmm0
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rsi
  __m128i *v132; // rax
  char v133; // di
  __int64 v134; // rax
  __int64 v135; // rcx
  signed __int64 v136; // r13
  const __m128i *v137; // rsi
  __int64 v138; // r12
  __m128i *v139; // rax
  char v140; // di
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // rcx
  const __m128i *v146; // r12
  signed __int64 v147; // rsi
  __int64 v148; // r12
  __m128i *v149; // rax
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // r15
  signed __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // r13
  __m128i *v157; // rax
  __int64 v158; // r12
  __m128i *v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rcx
  _DWORD *v162; // rax
  __m128i v163; // xmm0
  _DWORD *v164; // rax
  __m128i v165; // xmm0
  __int64 v166; // rcx
  _DWORD *v167; // rax
  __m128i v168; // xmm0
  __int64 v169; // rcx
  __m128i *v170; // rax
  __m128i v171; // xmm0
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rcx
  __m128i v175; // xmm0
  signed __int64 v176; // rsi
  __int64 v177; // rcx
  _WORD *v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r15
  const __m128i *v181; // rdi
  __m128i *v182; // rax
  __int64 v183; // rcx
  _DWORD *v184; // rax
  __int64 v185; // rcx
  _QWORD *v186; // rax
  __int64 v187; // rcx
  _QWORD *v188; // rax
  _DWORD *v189; // rax
  __int64 v190; // rcx
  unsigned __int64 v191; // rdi
  __int64 v192; // r15
  __m128i *v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rax
  __m128i *v196; // rax
  __int64 v197; // r15
  __m128i v198; // xmm0
  _OWORD *v199; // rax
  __m128i *v200; // rax
  _WORD *v201; // rax
  __int64 v202; // rcx
  __int64 v203; // r12
  const __m128i *v204; // r13
  __m128i *v205; // rax
  __int64 v206; // rcx
  _DWORD *v207; // rax
  __int64 v208; // rcx
  __m128i *v209; // rax
  __int64 v210; // rcx
  _QWORD *v211; // rax
  _DWORD *v212; // rax
  __int64 v213; // rcx
  __int64 v214; // r12
  unsigned __int64 v215; // rdi
  __m128i *v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // r13
  __m128i *v220; // rax
  __int64 v221; // r12
  __int64 v222; // rcx
  __int64 v223; // rdi
  __int64 v224; // r12
  __int64 v225; // rax
  unsigned __int64 v226; // rsi
  __int64 v227; // rax
  unsigned __int64 v228; // rdx
  __int64 v229; // rax
  _DWORD *v230; // rax
  __int64 v231; // rcx
  __int64 v232; // rax
  __int64 v233; // rcx
  _DWORD *v234; // rax
  __m128i v235; // xmm0
  __int64 v236; // rcx
  void *v237; // rax
  __m128i v238; // xmm0
  __m128i *v239; // rax
  __int64 v240; // rsi
  __int32 v241; // eax
  __m128i v242; // xmm0
  __m128i *v243; // rax
  __m128i v244; // xmm0
  __int64 v245; // rsi
  __int64 v246; // rax
  __int64 v247; // rcx
  __m128i v248; // xmm0
  __int64 v249; // rsi
  __int64 v250; // r15
  __int64 v251; // rcx
  __int64 v252; // rax
  __int64 v253; // rax
  _DWORD *v254; // rax
  __int64 v255; // rcx
  __int64 v256; // rax
  __int64 v257; // rcx
  _DWORD *v258; // rax
  __m128i v259; // xmm0
  __int64 v260; // rcx
  void *v261; // rax
  __m128i v262; // xmm0
  _OWORD *v263; // rax
  __int64 v264; // rsi
  __int64 v265; // rax
  __int64 v266; // rcx
  __m128i v267; // xmm0
  const __m128i *v268; // rdx
  __int64 v269; // r15
  __int64 v270; // rsi
  __int64 v271; // rax
  __int64 v272; // rcx
  __m128i v273; // xmm0
  __int64 v274; // rsi
  __int64 v275; // rax
  __int64 v276; // rcx
  __m128i v277; // xmm0
  __int64 v278; // r12
  __int64 v279; // rcx
  __int64 v280; // rdx
  __m128i v281; // xmm0
  __m128i v282; // xmm0
  __m128i *v283; // rax
  __m128i v284; // xmm0
  __m128i *v285; // rax
  __int64 v286; // rax
  __int64 v287; // rsi
  __int64 v288; // rax
  __int64 v289; // rcx
  __int64 v290; // r15
  __m128i v291; // xmm0
  __int64 v292; // rsi
  __int64 v293; // rax
  __int64 v294; // rcx
  __m128i v295; // xmm0
  __m128i v296; // xmm0
  __m128i *v297; // rax
  __m128i v298; // xmm0
  _OWORD *v299; // rax
  __m128i v300; // xmm0
  _OWORD *v301; // rax
  __int64 v302; // rax
  __int64 v303; // rcx
  __int64 v304; // rsi
  unsigned __int64 v305; // rdi
  __m128i *v306; // rax
  __int128 v307; // rdi
  __int64 v308; // rax
  __int64 v309; // rcx
  __m128i *v310; // rax
  __int64 v311; // rcx
  _QWORD *v312; // rax
  __m128i v313; // xmm0
  __int64 v314; // rax
  __int8 v315; // bl
  __int64 v316; // rdx
  __int64 v317; // rdx
  __int64 v318; // rdx
  __int64 v319; // rdx
  __m128i v320; // xmm0
  _OWORD *v321; // rax
  __int64 v322; // rax
  __int8 v323; // bl
  __int64 v324; // rdx
  __m128i v325; // xmm0
  _OWORD *v326; // rax
  __int64 v327; // rax
  __int8 v328; // bl
  __int64 v329; // rdx
  __m128i v330; // xmm0
  _OWORD *v331; // rax
  __int64 v332; // rax
  __int8 v333; // bl
  __int64 v334; // rdx
  __m128i v335; // xmm0
  _OWORD *v336; // rax
  __int64 v337; // rsi
  __int8 v338; // bl
  __int8 v339; // bl
  __int64 v340; // rdx
  __int64 v341; // rdx
  __int64 v342; // rdx
  __m128i v343; // xmm0
  _OWORD *v344; // rax
  __int64 v345; // rax
  __int8 v346; // bl
  __int64 v347; // rdx
  __m128i v348; // xmm0
  _OWORD *v349; // rax
  __int64 v350; // rax
  __int64 v351; // rcx
  __int8 v352; // bl
  __int64 v353; // rdx
  __m128i v354; // xmm0
  _OWORD *v355; // rax
  __int64 v356; // rax
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 v361; // rsi
  __int128 v362; // rax
  __m128i v363; // xmm6
  __m128i v364; // xmm7
  _BYTE *v365; // rax
  __int64 v366; // rcx
  _BYTE *v367; // rbx
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rcx
  __int64 v374; // rdx
  __int64 v375; // r12
  __int64 v376; // rdi
  __int64 v377; // r13
  __int64 v378; // rax
  __int64 v379; // rax
  __int64 v380; // rax
  __int64 v381; // r13
  __int64 v382; // r15
  __int64 v383; // rax
  __int64 v384; // rcx
  __m128i *v385; // rax
  const __m128i *v386; // rdx
  __int64 v387; // rax
  __int64 m128i_i64; // rax
  const __m128i *v389; // r8
  __int64 v390; // r10
  __int64 v391; // r11
  char v394; // r11
  __int64 v395; // rdx
  unsigned __int64 v396; // r9
  __int64 v397; // rax
  __int64 v398; // rsi
  __int64 v399; // r15
  __int64 v400; // rax
  __int64 v401; // rdi
  __int128 v402; // kr70_16
  __int64 v403; // rbx
  unsigned __int64 v404; // r13
  __int64 v405; // r12
  __int64 v406; // rax
  __int64 v407; // rcx
  unsigned __int64 v408; // rax
  __int64 v409; // rax
  unsigned __int64 v410; // rsi
  const __m128i *v411; // rbx
  __int64 v412; // rsi
  __int64 v413; // r12
  __m128i *v414; // rax
  __m128i *v415; // r14
  __m128i *v416; // r12
  unsigned __int64 v417; // r14
  __int64 v418; // rax
  const __m128i *v419; // r13
  const __m128i *v420; // rsi
  __m128i *v421; // rax
  __int64 v422; // rbx
  unsigned __int64 v423; // r14
  const __m128i *v425; // rbx
  __m128i v426; // xmm0
  __m128i v427; // xmm9
  _DWORD *i; // rdx
  unsigned __int64 v429; // r14
  __m128i v430; // xmm10
  const __m128i *v432; // rbx
  __int64 v433; // rbx
  __m128i *v434; // rax
  __int64 v435; // rax
  const __m128i *v436; // rsi
  __int64 v437; // rax
  __int64 v438; // rcx
  __int8 v439; // bl
  _DWORD *v440; // rax
  __int64 v441; // rcx
  __m128i *v442; // rax
  __int64 v443; // rcx
  void *v444; // rax
  __int64 v445; // rdx
  __int64 v446; // r8
  __int64 v447; // rdx
  __int64 v448; // r8
  __int64 v449; // rcx
  _DWORD *v450; // rax
  __int64 v451; // rcx
  const __m128i *v452; // r13
  void *v453; // rax
  __int64 v454; // rdx
  __m128i *v455; // rax
  __int64 v456; // rbx
  void *v457; // rax
  __m128i si128; // xmm0
  _BYTE *v459; // rax
  __int64 v460; // rcx
  __int64 v461; // rax
  _DWORD *v462; // rax
  __int64 v463; // rcx
  __m128i *v464; // rax
  __int64 v465; // rcx
  _QWORD *v466; // rax
  __m128i v467; // xmm0
  __int64 v468; // rsi
  __int64 v469; // rax
  __m128i v470; // xmm0
  __int64 v471; // rax
  __int64 v472; // rdx
  __int64 v473; // rcx
  __int64 v474; // r8
  __int64 v475; // r9
  __int64 v476; // rcx
  __int64 v477; // rdx
  __int64 v478; // rsi
  __int64 v479; // r12
  __int64 v480; // rax
  __int64 v481; // rax
  __int64 v482; // r13
  __int8 v483; // cl
  __int64 v484; // rax
  __int64 v485; // rax
  __int64 v486; // rcx
  __int64 v487; // r12
  __int64 v488; // r12
  __int64 v489; // r12
  __int64 v490; // rax
  __int64 v491; // rcx
  __m128i v492; // xmm0
  const __m128i *v493; // rcx
  const __m128i *v495; // rsi
  __int64 v496; // rbx
  __int64 v497; // rsi
  __int64 v498; // rdi
  __int64 v499; // r15
  const __m128i *v500; // r13
  __m128i v502; // xmm0
  __int64 v503; // rax
  __int64 v504; // rdx
  unsigned __int64 v505; // rax
  unsigned __int64 v506; // r14
  __m128i v507; // xmm0
  _OWORD *v508; // rax
  __int64 v509; // rsi
  __int64 v510; // rdi
  __int64 v511; // rbx
  __m128i v513; // xmm0
  __int64 v515; // rax
  __int64 v516; // rdx
  __int64 v517; // rax
  __int64 v518; // rsi
  __int64 v519; // rax
  bool v520; // si
  unsigned __int8 *v521; // rax
  int v522; // esi
  _DWORD *v523; // rcx
  __int64 v524; // rdx
  unsigned __int8 *v525; // rdi
  __int64 v526; // rax
  const __m128i *v527; // rax
  __int64 v528; // rcx
  _DWORD *v529; // rax
  __m128i v530; // xmm0
  __int64 v531; // rcx
  _QWORD *v532; // rax
  __int64 v533; // rcx
  _DWORD *v534; // rax
  __m128i v535; // xmm0
  __int64 v536; // rax
  __int64 v537; // rsi
  __int64 v538; // rax
  unsigned __int64 v539; // rbx
  __m128i *v541; // rdi
  __int64 v542; // rdi
  __int64 v543; // r15
  __m128i v545; // xmm0
  __m128i v546; // xmm0
  _OWORD *v547; // rax
  __m128i v548; // xmm0
  __m128i v549; // xmm0
  _OWORD *v550; // rax
  __int64 v551; // rax
  __int8 v552; // bl
  __int64 v553; // rdx
  __m128i v554; // xmm0
  _OWORD *v555; // rax
  _BYTE *v556; // rax
  __int64 v557; // rcx
  void *v558; // rax
  __m128i v559; // xmm0
  _OWORD *v560; // rax
  __int64 v561; // rcx
  __int64 v562; // r13
  __int64 v563; // rcx
  __int64 v564; // r15
  __int64 v565; // rax
  __int8 v566; // si
  __int64 v567; // rdx
  __m128i v568; // xmm0
  _OWORD *v569; // rax
  _BYTE *v570; // rax
  __int64 v571; // rcx
  __int64 v572; // rdi
  __int64 v573; // rax
  __int64 v574; // rdx
  __int64 v575; // rcx
  __int64 v576; // r8
  __int64 v577; // r9
  __int64 v578; // rsi
  __int128 v579; // rax
  unsigned __int64 v580; // r12
  __int64 v582; // rcx
  unsigned __int64 v583; // rdx
  __int64 v584; // rax
  __int64 v585; // rbx
  __int64 v586; // r15
  unsigned __int64 v587; // r13
  __int128 v589; // krC0_16
  __m128i v590; // xmm0
  __m128i v591; // xmm9
  const __m128i *j; // rcx
  unsigned __int64 v593; // r13
  __m128i v594; // xmm10
  __int64 v596; // rax
  unsigned __int64 v597; // rbx
  __int64 v598; // rcx
  __int8 v599; // si
  __int64 v601; // rsi
  __int64 v602; // rbx
  const __m128i *v603; // r14
  __int64 v605; // r15
  __m128i v606; // xmm0
  __int64 v607; // rax
  __int64 v608; // rdx
  unsigned __int64 v609; // rsi
  unsigned __int64 v610; // rax
  __int64 v611; // r14
  __int64 v612; // rsi
  __int64 v613; // rbx
  const __m128i *v614; // r15
  __int64 v616; // r13
  __m128i v617; // xmm0
  __int64 v618; // rax
  __int64 v619; // rdx
  unsigned __int64 v620; // rsi
  unsigned __int64 v621; // rax
  unsigned __int64 v622; // rdx
  __int64 v623; // rax
  __int64 v624; // rbx
  __int64 v625; // rsi
  __int64 v626; // rax
  __int64 v627; // rcx
  const __m128i *v628; // r14
  const __m128i *v629; // r15
  __m128i *v630; // rax
  const __m128i *v631; // rdx
  __m128i *v632; // r15
  __int64 v633; // rax
  __int64 v634; // rsi
  __int64 v635; // rbx
  __int64 v636; // r14
  const __m128i *v637; // r15
  __m128i v639; // xmm0
  __int64 v640; // rax
  __int64 v641; // rdx
  unsigned __int64 v642; // rax
  unsigned __int64 v643; // rsi
  unsigned __int64 v644; // rsi
  unsigned __int64 v645; // r12
  __int64 v646; // rsi
  unsigned __int64 v647; // r13
  unsigned __int64 v648; // r13
  __int64 v649; // r14
  __int64 v650; // rbx
  __int64 v651; // rax
  unsigned __int64 v652; // rdx
  __int64 v653; // rax
  unsigned __int64 v654; // rdx
  __int64 v655; // rax
  __int64 v656; // rcx
  __int64 v657; // rax
  __int64 v658; // rdx
  __int64 v659; // rcx
  __int64 v660; // r8
  __int64 v661; // r9
  __int64 v662; // rsi
  __int128 v663; // rax
  __int64 v664; // rax
  unsigned __int64 v665; // rdx
  __int64 v666; // rax
  __int64 v667; // rcx
  __int128 v668; // rdi
  const __m128i *v669; // rbx
  __m128i *v670; // rax
  unsigned __int64 v671; // rbx
  __int64 v672; // rdx
  __int64 v673; // r14
  __int64 v674; // rax
  __m128i v675; // xmm0
  __int64 v676; // r13
  __int8 v677; // cl
  __m128i v678; // xmm0
  __int64 v679; // rdi
  unsigned __int64 v680; // r14
  unsigned __int64 v681; // rbx
  __int64 v682; // rsi
  __int64 v683; // r13
  __int64 v684; // rcx
  __int64 v685; // rsi
  __int64 v687; // r13
  __int64 v688; // r14
  const __m128i *v689; // rsi
  __m128i v691; // xmm0
  __int64 v692; // rax
  __int64 v693; // rdx
  unsigned __int64 v694; // rax
  __int64 v695; // rsi
  _QWORD *v696; // rdi
  __int64 v697; // rdx
  __int64 v698; // rax
  __int64 v699; // rax
  __int64 v700; // r14
  __int64 v701; // rax
  __int64 v702; // rax
  __int64 v703; // rcx
  void *v704; // rax
  __m128i v705; // xmm0
  _OWORD *v706; // rax
  __int64 v707; // rax
  _QWORD *v708; // rdi
  __int64 v709; // rax
  __int64 v710; // rcx
  __int64 v711; // rbx
  __int64 v712; // rax
  __int64 v713; // rcx
  __m128i v714; // xmm0
  __int64 v715; // r12
  __int128 v716; // xmm1
  __int64 v717; // rax
  __int64 v718; // r13
  __int64 v719; // rax
  __int64 v720; // rcx
  __m128i *v721; // r13
  __m128i *v722; // rax
  const __m128i *v723; // rdx
  __int64 v724; // r13
  __int64 v725; // rax
  __int64 v726; // rcx
  unsigned __int64 v727; // r8
  __int64 v728; // rcx
  _DWORD *v729; // rax
  __int64 v730; // rcx
  __m128i *v731; // rax
  __int64 v732; // rcx
  __int64 v733; // rax
  __int64 v734; // rcx
  __int128 v735; // krD0_16
  __int64 v736; // r15
  __int64 v737; // rsi
  __m128i *v738; // rax
  __int64 v739; // r14
  __int64 v740; // rcx
  __int64 v741; // rsi
  __int64 v742; // rax
  __int64 v743; // rcx
  __m128i v744; // xmm0
  __int128 v745; // krF0_16
  __int64 v746; // r12
  unsigned __int64 v747; // r13
  __int64 v748; // rsi
  _QWORD *v749; // rdi
  __int64 v750; // rdx
  __m128i v751; // xmm0
  __m128i v752; // xmm1
  __m128i v753; // xmm2
  __m128i v754; // xmm3
  __m128i *v755; // rax
  __int64 v756; // rcx
  __int64 v757; // rsi
  __int64 v758; // rcx
  __int64 v759; // rcx
  _BYTE *v760; // rax
  unsigned __int64 v761; // rsi
  __int64 v762; // rcx
  _BYTE *v763; // rax
  __int64 v764; // rdx
  __int64 v765; // rcx
  _BYTE *v766; // rax
  __int64 v768; // rcx
  __int64 v769; // rcx
  __int64 v770; // rsi
  __int64 v771; // rsi
  _QWORD v772[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v773; // [rsp+60h] [rbp-20h] BYREF
  __int128 v774; // [rsp+70h] [rbp-10h]
  _QWORD *v775; // [rsp+80h] [rbp+0h]
  const __m128i *v776; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v777; // [rsp+90h] [rbp+10h]
  __m128i v778; // [rsp+98h] [rbp+18h] BYREF
  __int64 v779; // [rsp+A8h] [rbp+28h]
  __m128i v780; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v781; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v782; // [rsp+C8h] [rbp+48h]
  __m128i v783; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v784; // [rsp+E0h] [rbp+60h]
  __m128i v785; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v786; // [rsp+100h] [rbp+80h]
  __int64 v787; // [rsp+120h] [rbp+A0h]
  __int64 v788; // [rsp+128h] [rbp+A8h]
  __m128i v789; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int64 v790; // [rsp+140h] [rbp+C0h]
  __int64 v791; // [rsp+150h] [rbp+D0h]
  __int64 v792; // [rsp+158h] [rbp+D8h]
  __int64 v793; // [rsp+160h] [rbp+E0h]
  __int64 v794; // [rsp+168h] [rbp+E8h]
  __m128i *v795; // [rsp+170h] [rbp+F0h]
  __m128i v796; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v797; // [rsp+188h] [rbp+108h]
  const __m128i *v798; // [rsp+190h] [rbp+110h]
  __int64 v799; // [rsp+198h] [rbp+118h]
  __m128i v800; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v801; // [rsp+1B0h] [rbp+130h]
  char v802; // [rsp+1BFh] [rbp+13Fh] BYREF
  unsigned __int64 v803; // [rsp+1C0h] [rbp+140h]
  __int64 v804; // [rsp+1C8h] [rbp+148h]
  __int64 v805; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v806; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v807; // [rsp+1E8h] [rbp+168h]
  __int64 v808; // [rsp+1F0h] [rbp+170h]
  __int64 v809; // [rsp+1F8h] [rbp+178h]
  __m256i v810; // [rsp+200h] [rbp+180h] BYREF
  _DWORD *v811; // [rsp+220h] [rbp+1A0h]
  __int64 v812; // [rsp+228h] [rbp+1A8h]
  __int64 v813; // [rsp+230h] [rbp+1B0h]
  const __m128i *v814; // [rsp+238h] [rbp+1B8h]
  __m256i v815; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v816; // [rsp+260h] [rbp+1E0h]
  __m128i *v817; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v818; // [rsp+280h] [rbp+200h]
  __int64 v819; // [rsp+288h] [rbp+208h]
  __int64 v820; // [rsp+290h] [rbp+210h]
  char v821; // [rsp+29Ah] [rbp+21Ah]
  char v822; // [rsp+29Bh] [rbp+21Bh]
  char v823; // [rsp+29Ch] [rbp+21Ch]
  char v824; // [rsp+29Dh] [rbp+21Dh]
  char v825; // [rsp+29Eh] [rbp+21Eh]
  char v826; // [rsp+29Fh] [rbp+21Fh]
  char v827; // [rsp+2A0h] [rbp+220h]
  char v828; // [rsp+2A1h] [rbp+221h]
  char v829; // [rsp+2A2h] [rbp+222h]
  char v830; // [rsp+2A3h] [rbp+223h]
  char v831; // [rsp+2A4h] [rbp+224h]
  char v832; // [rsp+2A5h] [rbp+225h]
  char v833; // [rsp+2A6h] [rbp+226h]
  char v834; // [rsp+2A7h] [rbp+227h]
  char v835; // [rsp+2A8h] [rbp+228h]
  char v836; // [rsp+2A9h] [rbp+229h]
  char v837; // [rsp+2AAh] [rbp+22Ah]
  char v838; // [rsp+2ABh] [rbp+22Bh]
  char v839; // [rsp+2ACh] [rbp+22Ch]
  char v840; // [rsp+2ADh] [rbp+22Dh]
  char v841; // [rsp+2AEh] [rbp+22Eh]
  char v842; // [rsp+2AFh] [rbp+22Fh]
  char v843; // [rsp+2B0h] [rbp+230h]
  char v844; // [rsp+2B1h] [rbp+231h]
  char v845; // [rsp+2B2h] [rbp+232h]
  char v846; // [rsp+2B3h] [rbp+233h]
  char v847; // [rsp+2B4h] [rbp+234h]
  char v848; // [rsp+2B5h] [rbp+235h]
  char v849; // [rsp+2B6h] [rbp+236h]
  char v850; // [rsp+2B7h] [rbp+237h]
  char v851; // [rsp+2B8h] [rbp+238h]
  char v852; // [rsp+2B9h] [rbp+239h]
  char v853; // [rsp+2BAh] [rbp+23Ah]
  char v854; // [rsp+2BBh] [rbp+23Bh]
  char v855; // [rsp+2BCh] [rbp+23Ch]
  char v856; // [rsp+2BDh] [rbp+23Dh]
  char v857; // [rsp+2BEh] [rbp+23Eh]
  char v858; // [rsp+2BFh] [rbp+23Fh]
  unsigned __int64 v859; // [rsp+2C0h] [rbp+240h]
  __int64 v860; // [rsp+2C8h] [rbp+248h]
  __m256i v861; // [rsp+2D0h] [rbp+250h] BYREF
  const __m128i *v862; // [rsp+2F0h] [rbp+270h]
  char v863; // [rsp+2F9h] [rbp+279h]
  char v864; // [rsp+2FAh] [rbp+27Ah]
  char v865; // [rsp+2FBh] [rbp+27Bh]
  char v866; // [rsp+2FCh] [rbp+27Ch]
  char v867; // [rsp+2FDh] [rbp+27Dh]
  char v868; // [rsp+2FEh] [rbp+27Eh]
  char v869; // [rsp+2FFh] [rbp+27Fh]
  unsigned __int64 v870; // [rsp+300h] [rbp+280h]
  __int64 v871; // [rsp+308h] [rbp+288h]
  char v872; // [rsp+310h] [rbp+290h]
  char v873; // [rsp+311h] [rbp+291h]
  char v874; // [rsp+312h] [rbp+292h]
  char v875; // [rsp+313h] [rbp+293h]
  char v876; // [rsp+314h] [rbp+294h]
  char v877; // [rsp+316h] [rbp+296h]
  char v878; // [rsp+317h] [rbp+297h]
  char v879; // [rsp+318h] [rbp+298h]
  char v880; // [rsp+319h] [rbp+299h]
  char v881; // [rsp+31Ch] [rbp+29Ch]
  char v882; // [rsp+31Dh] [rbp+29Dh]
  char v883; // [rsp+31Eh] [rbp+29Eh]
  char v884; // [rsp+31Fh] [rbp+29Fh]
  __m256i v885; // [rsp+320h] [rbp+2A0h] BYREF
  _QWORD v886[2]; // [rsp+340h] [rbp+2C0h] BYREF
  __m256i v887; // [rsp+350h] [rbp+2D0h] BYREF
  char v888; // [rsp+37Ch] [rbp+2FCh]
  char v889; // [rsp+37Dh] [rbp+2FDh]
  char v890; // [rsp+37Eh] [rbp+2FEh]
  char v891; // [rsp+37Fh] [rbp+2FFh]
  __m128i v892; // [rsp+380h] [rbp+300h] BYREF
  __int128 v893; // [rsp+390h] [rbp+310h]
  char v894; // [rsp+3ACh] [rbp+32Ch]
  char v895; // [rsp+3ADh] [rbp+32Dh]
  char v896; // [rsp+3AEh] [rbp+32Eh]
  char v897; // [rsp+3AFh] [rbp+32Fh]
  __m256i v898; // [rsp+3B0h] [rbp+330h] BYREF
  __m256i v899; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v900; // [rsp+3F0h] [rbp+370h]
  __int64 v901; // [rsp+408h] [rbp+388h]
  char v902; // [rsp+413h] [rbp+393h]
  char v903; // [rsp+414h] [rbp+394h]
  char v904; // [rsp+415h] [rbp+395h]
  char v905; // [rsp+416h] [rbp+396h]
  char v906; // [rsp+417h] [rbp+397h]
  __int64 v907; // [rsp+418h] [rbp+398h]
  char v908; // [rsp+425h] [rbp+3A5h]
  char v909; // [rsp+426h] [rbp+3A6h]
  char v910; // [rsp+427h] [rbp+3A7h]
  __int64 v911; // [rsp+428h] [rbp+3A8h]

  v911 = -2;
  v809 = a4;
  v860 = (__int64)a3;
  v793 = a1;
  v817 = nullptr;
  v818 = 8;
  v819 = 0;
  v870 = a2;
  v7 = sub_1416419F0(aInstructions, 12, a2);
  if ( v7 && *(_BYTE *)v7 == 3 )
  {
    sub_1402E23A0(v892.m128i_i64, *(const __m128i **)(v7 + 16), *(_QWORD *)(v7 + 24));
    *((_QWORD *)&v9 + 1) = v893;
    if ( (_QWORD)v893 )
    {
      v887.m256i_i64[0] = 0;
      v887.m256i_i64[2] = 0;
      nullsub_1(v8);
      v10 = (_DWORD *)sub_140001650(4, 1);
      if ( !v10 )
        sub_141938D2B(1, 4);
      *v10 = 1701605234;
      v815.m256i_i64[0] = 4;
      v815.m256i_i64[1] = (__int64)v10;
      v815.m256i_i64[2] = 4;
      nullsub_1(v11);
      v12 = (__m128i *)sub_140001650(6, 1);
      v907 = (__int64)v12;
      if ( !v12 )
        sub_141938D2B(1, 6);
      v12->m128i_i16[2] = 28005;
      v12->m128i_i32[0] = 1953724787;
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = 6;
      v898.m256i_i64[2] = (__int64)v12;
      v898.m256i_i64[3] = 6;
      sub_140E72AA0(&v885, &v887, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v13);
      v14 = (_DWORD *)sub_140001650(7, 1);
      if ( !v14 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v14 + 3) = 1953391988;
      *v14 = 1953394531;
      v815.m256i_i64[0] = 7;
      v815.m256i_i64[1] = (__int64)v14;
      v815.m256i_i64[2] = 7;
      v6 = v892.m128i_i64[1];
      nullsub_1(v15);
      v16 = (__m128i *)sub_140001650(*((_QWORD *)&v9 + 1), 1);
      v907 = (__int64)v16;
      if ( !v16 )
        sub_141938D2B(1, *((_QWORD *)&v9 + 1));
      *(_QWORD *)&v9 = v16;
      sub_1418F44E0(v16, (const __m128i *)v6, *((unsigned __int64 *)&v9 + 1));
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = *((_QWORD *)&v9 + 1);
      *(_OWORD *)&v898.m256i_u64[2] = v9;
      sub_140E72AA0(&v885, &v887, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v887);
      v898.m256i_i64[3] = v887.m256i_i64[2];
      v898.m256i_i8[0] = 5;
      v17 = v819;
      if ( (__m128i *)v819 == v817 )
        sub_14190F570(&v817);
      v18 = v818;
      v19 = 32 * v17;
      v20 = _mm_loadu_si128((const __m128i *)&v898);
      *(__m128i *)(v818 + v19 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
      *(__m128i *)(v18 + v19) = v20;
      v819 = v17 + 1;
    }
    if ( v892.m128i_i64[0] )
      sub_140001660(v892.m128i_i64[1], v892.m128i_i64[0], 1);
  }
  v21 = sub_1416419F0(aInput_0, 5, v870);
  if ( v21 && *(_BYTE *)v21 == 3 )
  {
    v6 = *(_QWORD *)(v21 + 16);
    v23 = *(_QWORD *)(v21 + 24);
    v887.m256i_i64[0] = 0;
    v887.m256i_i64[2] = 0;
    nullsub_1(v22);
    v24 = (_DWORD *)sub_140001650(4, 1);
    if ( !v24 )
      sub_141938D2B(1, 4);
    *v24 = 1701605234;
    v815.m256i_i64[0] = 4;
    v815.m256i_i64[1] = (__int64)v24;
    v815.m256i_i64[2] = 4;
    nullsub_1(v25);
    v26 = (__m128i *)sub_140001650(4, 1);
    v907 = (__int64)v26;
    if ( !v26 )
      sub_141938D2B(1, 4);
    v26->m128i_i32[0] = 1919251317;
    v898.m256i_i8[0] = 3;
    v898.m256i_i64[1] = 4;
    v898.m256i_i64[2] = (__int64)v26;
    v898.m256i_i64[3] = 4;
    sub_140E72AA0(&v885, &v887, &v815, &v898);
    if ( v885.m256i_i8[0] != -1 )
      sub_14002F9D0(&v885);
    nullsub_1(v27);
    v28 = (_DWORD *)sub_140001650(7, 1);
    if ( !v28 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v28 + 3) = 1953391988;
    *v28 = 1953394531;
    v815.m256i_i64[0] = 7;
    v815.m256i_i64[1] = (__int64)v28;
    v815.m256i_i64[2] = 7;
    if ( v23 < 0 )
    {
      v5 = 0;
      goto LABEL_26;
    }
    if ( v23 )
    {
      nullsub_1(v29);
      v5 = 1;
      v30 = (__m128i *)sub_140001650(v23, 1);
      if ( !v30 )
      {
LABEL_26:
        v858 = 1;
        sub_141938D2B(v5, v23);
      }
      v31 = (__int64)v30;
      sub_1418F44E0(v30, (const __m128i *)v6, v23);
    }
    else
    {
      v31 = 1;
    }
    v898.m256i_i8[0] = 3;
    v898.m256i_i64[1] = v23;
    v898.m256i_i64[2] = v31;
    v898.m256i_i64[3] = v23;
    v858 = 0;
    sub_140E72AA0(&v885, &v887, &v815, &v898);
    if ( v885.m256i_i8[0] != -1 )
      sub_14002F9D0(&v885);
    *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v887);
    v898.m256i_i64[3] = v887.m256i_i64[2];
    v898.m256i_i8[0] = 5;
    v32 = v819;
    if ( (__m128i *)v819 == v817 )
      sub_14190F570(&v817);
    v33 = v818;
    v34 = 32 * v32;
    v35 = _mm_loadu_si128((const __m128i *)&v898);
    *(__m128i *)(v818 + v34 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
    *(__m128i *)(v33 + v34) = v35;
    v819 = v32 + 1;
  }
  v36 = sub_1416419F0(aInput_0, 5, v870);
  if ( !v36 || *(_BYTE *)v36 != 4 )
  {
LABEL_382:
    v302 = sub_1416419F0(aModel_1, 5, v870);
    if ( v302 && *(_BYTE *)v302 == 3 )
    {
      v303 = *(_QWORD *)(v302 + 24);
      v809 = v303;
      v860 = *(_QWORD *)(v302 + 16);
    }
    if ( v809 < 0 )
    {
      v304 = 0;
      v305 = v809;
      goto LABEL_387;
    }
    if ( v809 )
    {
      nullsub_1(v303);
      v304 = 1;
      v305 = v809;
      v306 = (__m128i *)sub_140001650(v809, 1);
      if ( !v306 )
LABEL_387:
        sub_141938D2B(v304, v305);
      v871 = (__int64)v306;
      sub_1418F44E0(v306, (const __m128i *)v860, v305);
    }
    else
    {
      v871 = 1;
    }
    v887.m256i_i64[0] = 0;
    v887.m256i_i64[2] = 0;
    nullsub_1(v303);
    *((_QWORD *)&v307 + 1) = 1;
    v308 = sub_140001650(5, 1);
    if ( !v308 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v308 + 4) = 108;
    *(_DWORD *)v308 = 1701080941;
    v815.m256i_i64[0] = 5;
    v815.m256i_i64[1] = v308;
    v815.m256i_i64[2] = 5;
    *(_QWORD *)&v307 = v809;
    if ( v809 )
    {
      nullsub_1(v309);
      v310 = (__m128i *)sub_140001650(v307, 1);
      if ( !v310 )
      {
        v840 = 1;
        sub_141938D2B(1, v307);
      }
      *((_QWORD *)&v307 + 1) = v310;
      sub_1418F44E0(v310, (const __m128i *)v871, v307);
    }
    v898.m256i_i8[0] = 3;
    *(_OWORD *)&v898.m256i_u64[1] = v307;
    v898.m256i_i64[3] = v307;
    v840 = 0;
    sub_140E72AA0(&v885, &v887, &v815, &v898);
    if ( v885.m256i_i8[0] != -1 )
      sub_14002F9D0(&v885);
    nullsub_1(v311);
    v312 = (_QWORD *)sub_140001650(8, 1);
    if ( !v312 )
      sub_141938D2B(1, 8);
    *v312 = 0x736567617373656DLL;
    v815.m256i_i64[0] = 8;
    v815.m256i_i64[1] = (__int64)v312;
    v815.m256i_i64[2] = 8;
    v876 = 1;
    sub_140C0FE40(&v898, &v817);
    if ( v898.m256i_i8[0] == -1 )
    {
      v885.m256i_i64[0] = v898.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v885,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E8608);
    }
    v313 = _mm_loadu_si128((const __m128i *)&v898);
    *(_OWORD *)&v885.m256i_u64[2] = *(_OWORD *)&v898.m256i_u64[2];
    *(__m128i *)v885.m256i_i8 = v313;
    v876 = 0;
    sub_140E72AA0(&v898, &v887, &v815, &v885);
    if ( v898.m256i_i8[0] != -1 )
      sub_14002F9D0(&v898);
    v806 = _mm_loadu_si128((const __m128i *)&v887);
    v807 = v887.m256i_i64[2];
    LOBYTE(v805) = 5;
    v314 = sub_1416419F0("streamdoubaoreasoning_effortnone", 6, v870);
    if ( v314 )
    {
      v315 = *(_BYTE *)v314;
      switch ( *(_BYTE *)v314 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v314 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v314 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v314 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v314 + 16), *(_QWORD *)(v314 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v314 + 24) )
          {
            v316 = *(_QWORD *)(v314 + 8);
            if ( !v316 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v316, *(_QWORD *)(v314 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v315;
      v839 = 1;
      v907 = sub_141641AF0("streamdoubaoreasoning_effortnone", 6, &v805);
      sub_14002F9D0(v907);
      v320 = _mm_loadu_si128((const __m128i *)&v898);
      v321 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v321 = v320;
    }
    v322 = sub_1416419F0(aParallelToolCa, 19, v870);
    if ( v322 )
    {
      v323 = *(_BYTE *)v322;
      switch ( *(_BYTE *)v322 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v322 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v322 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v322 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v322 + 16), *(_QWORD *)(v322 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v322 + 24) )
          {
            v324 = *(_QWORD *)(v322 + 8);
            if ( !v324 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v324, *(_QWORD *)(v322 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v323;
      v838 = 1;
      v907 = sub_141641AF0(aParallelToolCa, 19, &v805);
      sub_14002F9D0(v907);
      v325 = _mm_loadu_si128((const __m128i *)&v898);
      v326 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v326 = v325;
    }
    v327 = sub_1416419F0("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, v870);
    if ( v327 )
    {
      v328 = *(_BYTE *)v327;
      switch ( *(_BYTE *)v327 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v327 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v327 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v327 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v327 + 16), *(_QWORD *)(v327 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v327 + 24) )
          {
            v329 = *(_QWORD *)(v327 + 8);
            if ( !v329 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v329, *(_QWORD *)(v327 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v328;
      v837 = 1;
      v907 = sub_141641AF0("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, &v805);
      sub_14002F9D0(v907);
      v330 = _mm_loadu_si128((const __m128i *)&v898);
      v331 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v331 = v330;
    }
    v332 = sub_1416419F0(aTopP, 5, v870);
    if ( v332 )
    {
      v333 = *(_BYTE *)v332;
      switch ( *(_BYTE *)v332 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v332 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v332 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v332 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v332 + 16), *(_QWORD *)(v332 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v332 + 24) )
          {
            v334 = *(_QWORD *)(v332 + 8);
            if ( !v334 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v334, *(_QWORD *)(v332 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v333;
      v836 = 1;
      v907 = sub_141641AF0(aTopP, 5, &v805);
      sub_14002F9D0(v907);
      v335 = _mm_loadu_si128((const __m128i *)&v898);
      v336 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v336 = v335;
    }
    v337 = sub_1416419F0(aMaxOutputToken, 17, v870);
    if ( v337 )
    {
      if ( (unsigned __int8)sub_141042920(v871, v809) )
      {
        v338 = *(_BYTE *)v337;
        switch ( *(_BYTE *)v337 )
        {
          case 0:
            break;
          case 1:
            v898.m256i_i8[1] = *(_BYTE *)(v337 + 1);
            break;
          case 2:
            *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v337 + 8));
            break;
          case 3:
            sub_1416AC440(&v898.m256i_u64[1], v337 + 8);
            break;
          case 4:
            sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v337 + 16), *(_QWORD *)(v337 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v337 + 24) )
            {
              v340 = *(_QWORD *)(v337 + 8);
              if ( !v340 )
                sub_141939020(&off_141A54900);
              sub_140E11B90(&v898.m256i_u64[1], v340, *(_QWORD *)(v337 + 16));
            }
            else
            {
              v898.m256i_i64[1] = 0;
              v898.m256i_i64[3] = 0;
            }
            break;
        }
        v898.m256i_i8[0] = v338;
        v834 = 1;
        v907 = sub_141641AF0(aMaxCompletionT, 21, &v805);
        sub_14002F9D0(v907);
      }
      else
      {
        v339 = *(_BYTE *)v337;
        switch ( *(_BYTE *)v337 )
        {
          case 0:
            break;
          case 1:
            v898.m256i_i8[1] = *(_BYTE *)(v337 + 1);
            break;
          case 2:
            *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v337 + 8));
            break;
          case 3:
            sub_1416AC440(&v898.m256i_u64[1], v337 + 8);
            break;
          case 4:
            sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v337 + 16), *(_QWORD *)(v337 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v337 + 24) )
            {
              v341 = *(_QWORD *)(v337 + 8);
              if ( !v341 )
                sub_141939020(&off_141A54900);
              sub_140E11B90(&v898.m256i_u64[1], v341, *(_QWORD *)(v337 + 16));
            }
            else
            {
              v898.m256i_i64[1] = 0;
              v898.m256i_i64[3] = 0;
            }
            break;
        }
        v898.m256i_i8[0] = v339;
        v835 = 1;
        v907 = sub_141641AF0("max_tokensstreamdoubaoreasoning_effortnone", 10, &v805);
        sub_14002F9D0(v907);
      }
      v343 = _mm_loadu_si128((const __m128i *)&v898);
      v344 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v344 = v343;
    }
    v345 = sub_1416419F0("max_tokensstreamdoubaoreasoning_effortnone", 10, v870);
    if ( v345 )
    {
      v346 = *(_BYTE *)v345;
      switch ( *(_BYTE *)v345 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v345 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v345 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v345 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v345 + 16), *(_QWORD *)(v345 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v345 + 24) )
          {
            v347 = *(_QWORD *)(v345 + 8);
            if ( !v347 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v347, *(_QWORD *)(v345 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v346;
      v833 = 1;
      v907 = sub_141641AF0("max_tokensstreamdoubaoreasoning_effortnone", 10, &v805);
      sub_14002F9D0(v907);
      v348 = _mm_loadu_si128((const __m128i *)&v898);
      v349 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v349 = v348;
    }
    v350 = sub_1416419F0(aMaxCompletionT, 21, v870);
    if ( v350 )
    {
      v352 = *(_BYTE *)v350;
      switch ( *(_BYTE *)v350 )
      {
        case 0:
          break;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v350 + 1);
          break;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v350 + 8));
          break;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v350 + 8);
          break;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v350 + 16), *(_QWORD *)(v350 + 24));
          break;
        case 5:
          if ( *(_QWORD *)(v350 + 24) )
          {
            v353 = *(_QWORD *)(v350 + 8);
            if ( !v353 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v353, *(_QWORD *)(v350 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
          break;
      }
      v898.m256i_i8[0] = v352;
      v832 = 1;
      v907 = sub_141641AF0(aMaxCompletionT, 21, &v805);
      sub_14002F9D0(v907);
      v354 = _mm_loadu_si128((const __m128i *)&v898);
      v355 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v355 = v354;
    }
    v356 = sub_14167F170(v351);
    v361 = v356;
    if ( *(_BYTE *)(v356 + 16) == 1 )
    {
      v362 = *(_OWORD *)v356;
    }
    else
    {
      *(_QWORD *)&v362 = sub_141696260(v358, v357, v359, v360);
      *(_OWORD *)v361 = v362;
      *(_BYTE *)(v361 + 16) = 1;
    }
    *(_QWORD *)v361 = v362 + 1;
    v363 = _mm_loadu_si128((const __m128i *)&xmmword_1419E4880);
    *(__m128i *)&v815.m256i_u64[2] = v363;
    v364 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    *(__m128i *)v815.m256i_i8 = v364;
    v816 = v362;
    v365 = (_BYTE *)sub_1416419F0(aTools_1, 5, v870);
    v367 = v365;
    if ( v365 && *v365 == 4 )
    {
      v796.m128i_i64[0] = 0;
      v796.m128i_i64[1] = 8;
      v797 = 0;
      v866 = 1;
      v368 = sub_14167F170(v366);
      if ( *(_BYTE *)(v368 + 16) == 1 )
      {
        v373 = *(_QWORD *)v368;
        v374 = *(_QWORD *)(v368 + 8);
      }
      else
      {
        v866 = 1;
        v770 = v368;
        v373 = sub_141696260(v370, v369, v371, v372);
        v368 = v770;
        *(_QWORD *)v770 = v373;
        *(_QWORD *)(v770 + 8) = v374;
        *(_BYTE *)(v770 + 16) = 1;
      }
      *(_QWORD *)v368 = v373 + 1;
      *(__m128i *)&v885.m256i_u64[2] = v363;
      *(__m128i *)v885.m256i_i8 = v364;
      v886[0] = v373;
      v886[1] = v374;
      v375 = *((_QWORD *)v367 + 2);
      v376 = v375 + 32LL * *((_QWORD *)v367 + 3);
LABEL_516:
      while ( v375 != v376 )
      {
        v377 = v375;
        v910 = 1;
        v378 = sub_1416419F0(aType_4, 4, v375);
        v375 += 32;
        if ( v378 )
        {
          if ( *(_BYTE *)v378 == 3 && *(_QWORD *)(v378 + 24) == 9 )
          {
            v379 = *(_QWORD *)(v378 + 16);
            v373 = *(_QWORD *)v379 ^ 0x63617073656D616ELL;
            if ( !(v373 | *(unsigned __int8 *)(v379 + 8) ^ 0x65LL) )
            {
              v910 = 1;
              v380 = sub_1416419F0(aTools_1, 5, v377);
              if ( v380 )
              {
                if ( *(_BYTE *)v380 == 4 )
                {
                  v381 = *(_QWORD *)(v380 + 16);
                  v382 = v381 + 32LL * *(_QWORD *)(v380 + 24);
                  while ( 1 )
                  {
                    do
                    {
                      if ( v381 == v382 )
                        goto LABEL_516;
                      v910 = 1;
                      v383 = sub_1416419F0(aName_2, 4, v381);
                      v381 += 32;
                    }
                    while ( !v383 || *(_BYTE *)v383 != 3 );
                    v384 = *(_QWORD *)(v383 + 24);
                    if ( v384 < 0 )
                      break;
                    if ( v384 )
                    {
                      v907 = *(_QWORD *)(v383 + 16);
                      v901 = v384;
                      nullsub_1(v384);
                      v385 = (__m128i *)sub_140001650(v901, 1);
                      if ( !v385 )
                      {
                        v907 = v901;
                        v762 = 1;
LABEL_1054:
                        v910 = 1;
                        sub_141938D2B(v762, v907);
                      }
                      v386 = (const __m128i *)v907;
                      v907 = (__int64)v385;
                      sub_1418F44E0(v385, v386, v901);
                      v387 = v907;
                      v384 = v901;
                    }
                    else
                    {
                      v387 = 1;
                    }
                    v887.m256i_i64[0] = v384;
                    v907 = v387;
                    v887.m256i_i64[1] = v387;
                    v887.m256i_i64[2] = v384;
                    v910 = 1;
                    sub_1403A3CA0(&v898, &v885, &v887);
                    m128i_i64 = v898.m256i_i64[1];
                    v373 = v898.m256i_i64[0];
                    if ( v898.m256i_i64[0] != -1 )
                    {
                      v860 = v898.m256i_i64[1];
                      v820 = v898.m256i_i64[0];
                      v389 = *(const __m128i **)v898.m256i_i64[3];
                      v901 = v898.m256i_i64[3];
                      v390 = *(_QWORD *)(v898.m256i_i64[3] + 8);
                      v391 = v899.m256i_i64[0] & v390;
                      _RCX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v389
                                                                                             + (v899.m256i_i64[0] & v390))));
                      if ( !(_DWORD)_RCX )
                      {
                        v397 = 16;
                        do
                        {
                          v391 = v390 & (v397 + v391);
                          _RCX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v389 + v391)));
                          v397 += 16;
                        }
                        while ( !(_DWORD)_RCX );
                      }
                      __asm { tzcnt   ecx, ecx }
                      _RCX = v390 & (v391 + _RCX);
                      v394 = v389->m128i_i8[_RCX];
                      if ( v394 >= 0 )
                      {
                        _RCX = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v389));
                        __asm { tzcnt   ecx, ecx }
                        v394 = v389->m128i_i8[_RCX];
                      }
                      v395 = v898.m256i_i64[2];
                      v396 = (unsigned __int64)v899.m256i_i64[0] >> 57;
                      v389->m128i_i8[_RCX] = (unsigned __int64)v899.m256i_i64[0] >> 57;
                      v389[1].m128i_i8[v390 & (_RCX - 16)] = v396;
                      m128i_i64 = (__int64)v389[-2 * _RCX].m128i_i64;
                      *(_QWORD *)(m128i_i64 - 32) = v820;
                      *(_QWORD *)(m128i_i64 - 24) = v860;
                      *(_QWORD *)(m128i_i64 - 16) = v395;
                      *(_QWORD *)(m128i_i64 - 8) = 0;
                      v373 = v394 & 1;
                      *(__m128i *)(v901 + 16) = _mm_sub_epi64(
                                                  _mm_loadu_si128((const __m128i *)(v901 + 16)),
                                                  (__m128i)_mm_shuffle_ps(
                                                             (__m128)_mm_cvtsi32_si128(v373),
                                                             (__m128)xmmword_1419D3560,
                                                             228));
                    }
                    ++*(_QWORD *)(m128i_i64 - 8);
                  }
                  v762 = 0;
                  goto LABEL_1054;
                }
              }
            }
          }
        }
      }
      v398 = *((_QWORD *)v367 + 2);
      v399 = v398 + 32LL * *((_QWORD *)v367 + 3);
      while ( v398 != v399 )
      {
        v910 = 1;
        v400 = sub_1416419F0(aType_4, 4, v398);
        v401 = v398 + 32;
        if ( v400
          && *(_BYTE *)v400 == 3
          && *(_QWORD *)(v400 + 24) == 9
          && !(**(_QWORD **)(v400 + 16) ^ 0x63617073656D616ELL
             | *(unsigned __int8 *)(*(_QWORD *)(v400 + 16) + 8LL) ^ 0x65LL) )
        {
          v910 = 1;
          v406 = sub_1416419F0(aName_2, 4, v398);
          v407 = 1;
          if ( v406 && *(_BYTE *)v406 == 3 )
          {
            v407 = *(_QWORD *)(v406 + 16);
            v408 = *(_QWORD *)(v406 + 24);
          }
          else
          {
            v408 = 0;
          }
          v776 = (const __m128i *)v407;
          v777 = v408;
          v910 = 1;
          v409 = sub_1416419F0(aTools_1, 5, v398);
          if ( v409 && *(_BYTE *)v409 == 4 )
          {
            v410 = v777;
            if ( v777 < 2 )
            {
              if ( !v777 )
              {
                v789.m128i_i64[0] = 0;
                v789.m128i_i64[1] = 1;
                v790 = 0;
                goto LABEL_568;
              }
LABEL_564:
              v887.m256i_i64[0] = (__int64)&v776;
              v887.m256i_i64[1] = (__int64)sub_140186EE0;
              v910 = 1;
              v412 = v409;
              sub_1416ABFD0(&v898, &unk_1419E8638, &v887);
              v409 = v412;
              v789 = _mm_loadu_si128((const __m128i *)&v898);
              v373 = v898.m256i_i64[2];
              v790 = v898.m256i_u64[2];
              goto LABEL_568;
            }
            v411 = v776;
            if ( *(__int16 *)((char *)&v776->m128i_i16[-1] + v777) != 24415 )
              goto LABEL_564;
            v413 = v409;
            nullsub_1(v373);
            v414 = (__m128i *)sub_140001650(v410, 1);
            if ( !v414 )
            {
              v910 = 1;
              sub_141938D2B(1, v410);
            }
            v415 = v414;
            sub_1418F44E0(v414, v411, v410);
            v789.m128i_i64[0] = v410;
            v789.m128i_i64[1] = (__int64)v415;
            v790 = v410;
            v409 = v413;
LABEL_568:
            v416 = *(__m128i **)(v409 + 16);
            v417 = (unsigned __int64)&v416[2 * *(_QWORD *)(v409 + 24)];
            v901 = v417;
            if ( v416 != (__m128i *)v417 )
            {
              while ( 1 )
              {
                v418 = sub_1416419F0(aName_2, 4, v416);
                if ( !v418 || *(_BYTE *)v418 != 3 )
                  goto LABEL_570;
                v419 = *(const __m128i **)(v418 + 16);
                v420 = *(const __m128i **)(v418 + 24);
                v772[0] = v419;
                v772[1] = v420;
                if ( v790 && ((unsigned __int64)v420 < v790 || (unsigned int)sub_1418F4B70(v789.m128i_i64[1], v419)) )
                {
                  v898.m256i_i64[0] = (__int64)&v789;
                  v898.m256i_i64[1] = (__int64)sub_1400015F0;
                  v898.m256i_i64[2] = (__int64)v772;
                  v898.m256i_i64[3] = (__int64)sub_140186EE0;
                  sub_1416ABFD0(&v887, &unk_1419E6162, &v898);
                  v785 = _mm_loadu_si128((const __m128i *)&v887);
                  v786 = v887.m256i_i64[2];
                }
                else
                {
                  if ( (__int64)v420 < 0 )
                  {
                    v758 = 0;
                    goto LABEL_1049;
                  }
                  if ( v420 )
                  {
                    nullsub_1(v373);
                    v421 = (__m128i *)sub_140001650(v420, 1);
                    if ( !v421 )
                    {
                      v808 = (__int64)v420;
                      v758 = 1;
LABEL_1049:
                      sub_141938D2B(v758, v808);
                    }
                    v422 = (__int64)v421;
                    sub_1418F44E0(v421, v419, (unsigned __int64)v420);
                  }
                  else
                  {
                    v422 = 1;
                  }
                  v785.m128i_i64[0] = (__int64)v420;
                  v808 = v422;
                  v785.m128i_i64[1] = v422;
                  v786 = (__int64)v420;
                }
                if ( v885.m256i_i64[3] )
                {
                  v907 = (__int64)v416;
                  v423 = sub_140D2CC10(v886, v419, v420);
                  _RAX = v423 >> 57;
                  v373 = v885.m256i_i64[1];
                  v425 = (const __m128i *)v885.m256i_i64[0];
                  v426 = _mm_cvtsi32_si128(v423 >> 57);
                  v427 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v426, v426), 0), 68);
                  for ( i = nullptr; ; i += 4 )
                  {
                    v429 = v373 & v423;
                    v430 = _mm_loadu_si128((const __m128i *)((char *)v425 + v429));
                    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v430, v427));
                    if ( _R12D )
                      break;
LABEL_590:
                    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v430, (__m128i)-1LL));
                    v416 = (__m128i *)v907;
                    if ( (_DWORD)_RAX )
                      goto LABEL_592;
                    v423 = (unsigned __int64)i + v429 + 16;
                  }
                  v860 = (__int64)v425;
                  v820 = v373;
                  v811 = i;
                  while ( 1 )
                  {
                    __asm { tzcnt   eax, r12d }
                    v432 = &v425[-2 * (v373 & (v429 + _RAX))];
                    if ( v420 == (const __m128i *)v432[-1].m128i_i64[0]
                      && !(unsigned int)sub_1418F4B70(v419, v432[-2].m128i_i64[1]) )
                    {
                      break;
                    }
                    _RAX = (unsigned int)(_R12D - 1);
                    LOWORD(_RAX) = _R12D & (_R12D - 1);
                    _R12D = _RAX;
                    v425 = (const __m128i *)v860;
                    v373 = v820;
                    i = v811;
                    if ( !(_WORD)_RAX )
                      goto LABEL_590;
                  }
                  v416 = (__m128i *)v907;
                  v417 = v901;
                  if ( v432[-1].m128i_i64[1] >= 2uLL )
                    goto LABEL_602;
                }
                else
                {
LABEL_592:
                  v417 = v901;
                }
                if ( v790 )
                {
                  if ( (unsigned __int64)v420 < v790 )
                  {
                    if ( v420 )
                    {
LABEL_599:
                      nullsub_1(v373);
                      v434 = (__m128i *)sub_140001650(v420, 1);
                      if ( !v434 )
                      {
                        v875 = 1;
                        sub_141938D2B(1, v420);
                      }
                      v433 = (__int64)v434;
                      sub_1418F44E0(v434, v419, (unsigned __int64)v420);
                    }
                    else
                    {
                      v433 = 1;
                    }
                    v780.m128i_i64[0] = (__int64)v420;
                    v780.m128i_i64[1] = v433;
                    v781 = (__int64)v420;
                    goto LABEL_603;
                  }
                  if ( (unsigned int)sub_1418F4B70(v789.m128i_i64[1], v419) )
                    goto LABEL_599;
                }
LABEL_602:
                v875 = 1;
                sub_1416AC440(&v780, &v785);
                v420 = (const __m128i *)v781;
LABEL_603:
                if ( v420 == (const __m128i *)v786 && !(unsigned int)sub_1418F4B70(v780.m128i_i64[1], v785.m128i_i64[1]) )
                {
                  LOBYTE(v419) = 1;
                }
                else
                {
                  v904 = 1;
                  v903 = 1;
                  sub_1416AC440(&v887, &v780);
                  v898.m256i_i64[2] = v786;
                  *(__m128i *)v898.m256i_i8 = _mm_load_si128(&v785);
                  v904 = 0;
                  v903 = 1;
                  sub_1403A7230(&v892, &v815, &v887, &v898);
                  if ( v892.m128i_i64[0] != -1 && v892.m128i_i64[0] )
                    sub_140001660(v892.m128i_i64[1], v892.m128i_i64[0], 1);
                  LODWORD(v419) = 0;
                }
                v904 = (char)v419;
                v903 = 1;
                v435 = sub_1416419F0(aDescription_0, 11, v416);
                if ( v435 )
                {
                  if ( *(_BYTE *)v435 == 3 )
                    v436 = *(const __m128i **)(v435 + 16);
                  else
                    v436 = nullptr;
                  v860 = *(_QWORD *)(v435 + 24);
                }
                else
                {
                  v436 = nullptr;
                }
                v904 = (char)v419;
                v903 = 1;
                v437 = sub_1416419F0(aParameters_0, 10, v416);
                LODWORD(v907) = (_DWORD)v419;
                if ( v437 )
                {
                  v439 = *(_BYTE *)v437;
                  switch ( *(_BYTE *)v437 )
                  {
                    case 0:
                      break;
                    case 1:
                      v898.m256i_i8[1] = *(_BYTE *)(v437 + 1);
                      break;
                    case 2:
                      *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v437 + 8));
                      break;
                    case 3:
                      v904 = (char)v419;
                      v903 = 1;
                      sub_1416AC440(&v898.m256i_u64[1], v437 + 8);
                      break;
                    case 4:
                      v445 = *(_QWORD *)(v437 + 16);
                      v446 = *(_QWORD *)(v437 + 24);
                      v904 = (char)v419;
                      v903 = 1;
                      sub_1403918C0(&v898.m256i_u64[1], v445, v446);
                      break;
                    case 5:
                      if ( *(_QWORD *)(v437 + 24) )
                      {
                        v447 = *(_QWORD *)(v437 + 8);
                        if ( !v447 )
                        {
                          v904 = (char)v419;
                          v903 = 1;
                          sub_141939020(&off_141A54900);
                        }
                        v448 = *(_QWORD *)(v437 + 16);
                        v904 = (char)v419;
                        v903 = 1;
                        sub_140E11B90(&v898.m256i_u64[1], v447, v448);
                      }
                      else
                      {
                        v898.m256i_i64[1] = 0;
                        v898.m256i_i64[3] = 0;
                      }
                      break;
                  }
                  v898.m256i_i8[0] = v439;
                  *(_OWORD *)&v810.m256i_u64[2] = *(_OWORD *)&v898.m256i_u64[2];
                  v810.m256i_i16[0] = __PAIR16__(v898.m256i_u8[1], v439);
                  *(__int32 *)((char *)v810.m256i_i32 + 2) = *(__int32 *)((char *)v898.m256i_i32 + 2);
                  v810.m256i_i16[3] = v898.m256i_i16[3];
                  v810.m256i_i64[1] = v898.m256i_i64[1];
                }
                else
                {
                  v861.m256i_i64[0] = 0;
                  v861.m256i_i64[2] = 0;
                  nullsub_1(v438);
                  v440 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v440 )
                    sub_141938D2B(1, 4);
                  *v440 = 1701869940;
                  v892.m128i_i64[0] = 4;
                  v892.m128i_i64[1] = (__int64)v440;
                  *(_QWORD *)&v893 = 4;
                  nullsub_1(v441);
                  v442 = (__m128i *)sub_140001650(6, 1);
                  v820 = (__int64)v442;
                  if ( !v442 )
                    sub_141938D2B(1, 6);
                  v442->m128i_i16[2] = 29795;
                  v442->m128i_i32[0] = 1701470831;
                  v898.m256i_i8[0] = 3;
                  v898.m256i_i64[1] = 6;
                  v898.m256i_i64[2] = (__int64)v442;
                  v898.m256i_i64[3] = 6;
                  sub_140E72AA0(&v887, &v861, &v892, &v898);
                  if ( v887.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v887);
                  nullsub_1(v443);
                  v444 = (void *)sub_140001650(10, 1);
                  if ( !v444 )
                    sub_141938D2B(1, 10);
                  qmemcpy(v444, "properties", 10);
                  v892.m128i_i64[0] = 10;
                  v892.m128i_i64[1] = (__int64)v444;
                  *(_QWORD *)&v893 = 10;
                  v898.m256i_i64[1] = 0;
                  v898.m256i_i64[3] = 0;
                  v898.m256i_i8[0] = 5;
                  sub_140E72AA0(&v887, &v861, &v892, &v898);
                  if ( v887.m256i_i8[0] != -1 )
                    sub_14002F9D0(&v887);
                  v810.m256i_i64[3] = v861.m256i_i64[2];
                  *(__m128i *)&v810.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
                  v810.m256i_i8[0] = 5;
                }
                v864 = 1;
                v863 = 1;
                sub_1402E1D90(&v810);
                v778.m128i_i64[0] = 0;
                v779 = 0;
                nullsub_1(v449);
                v450 = (_DWORD *)sub_140001650(4, 1);
                LOBYTE(v820) = v450 == nullptr;
                if ( !v450 )
                {
                  v909 = 1;
                  v908 = 1;
                  sub_141938D2B(1, 4);
                }
                *v450 = 1701667182;
                v892.m128i_i64[0] = 4;
                v892.m128i_i64[1] = (__int64)v450;
                *(_QWORD *)&v893 = 4;
                v898.m256i_i64[3] = v781;
                *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v780);
                v898.m256i_i8[0] = 3;
                v909 = 1;
                v908 = 1;
                sub_140E72AA0(&v887, &v778, &v892, &v898);
                if ( v887.m256i_i8[0] != -1 )
                {
                  v909 = 1;
                  v908 = 1;
                  sub_14002F9D0(&v887);
                }
                v452 = (const __m128i *)v860;
                if ( v436 )
                {
                  nullsub_1(v451);
                  v453 = (void *)sub_140001650(11, 1);
                  v454 = v813;
                  if ( !v453 )
                  {
                    v909 = 1;
                    v908 = 1;
                    sub_141938D2B(1, 11);
                  }
                  qmemcpy(v453, "description", 11);
                  v892.m128i_i64[0] = 11;
                  v892.m128i_i64[1] = (__int64)v453;
                  *(_QWORD *)&v893 = 11;
                  if ( (__int64)v452 < 0 )
                  {
                    v759 = 0;
                    goto LABEL_1051;
                  }
                  if ( v452 )
                  {
                    nullsub_1(0x7470697263736564LL);
                    v455 = (__m128i *)sub_140001650(v452, 1);
                    if ( !v455 )
                    {
                      v454 = (__int64)v452;
                      v759 = 1;
LABEL_1051:
                      v830 = 1;
                      sub_141938D2B(v759, v454);
                    }
                    v456 = (__int64)v455;
                    sub_1418F44E0(v455, v436, (unsigned __int64)v452);
                  }
                  else
                  {
                    v456 = 1;
                  }
                  v898.m256i_i64[1] = (__int64)v452;
                  v813 = v456;
                  v898.m256i_i64[2] = v456;
                  v898.m256i_i64[3] = (__int64)v452;
                  v898.m256i_i8[0] = 3;
                  v830 = 0;
                  sub_140E72AA0(&v887, &v778, &v892, &v898);
                  if ( v887.m256i_i8[0] != -1 )
                  {
                    v909 = 1;
                    v908 = 1;
                    sub_14002F9D0(&v887);
                  }
                }
                nullsub_1(v451);
                v457 = (void *)sub_140001650(10, 1);
                if ( !v457 )
                {
                  v909 = 1;
                  v908 = 1;
                  sub_141938D2B(1, 10);
                }
                qmemcpy(v457, "parameters", 10);
                v892.m128i_i64[0] = 10;
                v892.m128i_i64[1] = (__int64)v457;
                *(_QWORD *)&v893 = 10;
                si128 = _mm_load_si128((const __m128i *)&v810);
                *(_OWORD *)&v898.m256i_u64[2] = *(_OWORD *)&v810.m256i_u64[2];
                *(__m128i *)v898.m256i_i8 = si128;
                v909 = 1;
                v908 = 0;
                sub_140E72AA0(&v887, &v778, &v892, &v898);
                if ( v887.m256i_i8[0] != -1 )
                {
                  v909 = 1;
                  v908 = 0;
                  sub_14002F9D0(&v887);
                }
                v909 = 1;
                v908 = 0;
                v459 = (_BYTE *)sub_1416419F0(aStrict_0, 6, v416);
                if ( v459 && *v459 == 1 && (v459[1] & 1) != 0 )
                {
                  nullsub_1(v460);
                  v461 = sub_140001650(6, 1);
                  if ( !v461 )
                  {
                    v909 = 1;
                    v908 = 0;
                    sub_141938D2B(1, 6);
                  }
                  *(_WORD *)(v461 + 4) = 29795;
                  *(_DWORD *)v461 = 1769108595;
                  v892.m128i_i64[0] = 6;
                  v892.m128i_i64[1] = v461;
                  *(_QWORD *)&v893 = 6;
                  v898.m256i_i16[0] = 257;
                  v909 = 1;
                  v908 = 0;
                  sub_140E72AA0(&v887, &v778, &v892, &v898);
                  if ( v887.m256i_i8[0] != -1 )
                  {
                    v909 = 1;
                    v908 = 0;
                    sub_14002F9D0(&v887);
                  }
                }
                v783.m128i_i64[0] = 0;
                v784 = 0;
                nullsub_1(v460);
                v462 = (_DWORD *)sub_140001650(4, 1);
                if ( !v462 )
                {
                  v897 = 1;
                  sub_141938D2B(1, 4);
                }
                *v462 = 1701869940;
                v892.m128i_i64[0] = 4;
                v892.m128i_i64[1] = (__int64)v462;
                *(_QWORD *)&v893 = 4;
                nullsub_1(v463);
                v464 = (__m128i *)sub_140001650(8, 1);
                v860 = (__int64)v464;
                if ( !v464 )
                  sub_141938D2B(1, 8);
                v464->m128i_i64[0] = 0x6E6F6974636E7566LL;
                v898.m256i_i8[0] = 3;
                v898.m256i_i64[1] = 8;
                v898.m256i_i64[2] = (__int64)v464;
                v898.m256i_i64[3] = 8;
                sub_140E72AA0(&v887, &v783, &v892, &v898);
                if ( v887.m256i_i8[0] != -1 )
                {
                  v897 = 1;
                  sub_14002F9D0(&v887);
                }
                nullsub_1(v465);
                v466 = (_QWORD *)sub_140001650(8, 1);
                if ( !v466 )
                {
                  v897 = 1;
                  sub_141938D2B(1, 8);
                }
                *v466 = 0x6E6F6974636E7566LL;
                v800.m128i_i64[0] = 8;
                v800.m128i_i64[1] = (__int64)v466;
                v801 = 8;
                v898.m256i_i64[3] = v779;
                *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v778);
                v898.m256i_i8[0] = 5;
                v874 = 1;
                sub_140412420(&v887, &v898);
                if ( v887.m256i_i8[0] == -1 )
                {
                  v892.m128i_i64[0] = v887.m256i_i64[1];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_2,
                    43,
                    (unsigned int)&v892,
                    (unsigned int)&off_1419E6A30,
                    (__int64)&off_1419E8640);
                }
                v467 = _mm_loadu_si128((const __m128i *)&v887);
                v893 = *(_OWORD *)&v887.m256i_u64[2];
                v892 = v467;
                v874 = 0;
                sub_140E72AA0(&v887, &v783, &v800, &v892);
                if ( v887.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v887);
                v897 = 0;
                sub_14002F9D0(&v898);
                v861.m256i_i64[3] = v784;
                *(__m128i *)&v861.m256i_u64[1] = _mm_loadu_si128(&v783);
                v861.m256i_i8[0] = 5;
                v468 = v797;
                if ( v797 == v796.m128i_i64[0] )
                  sub_14190F570(&v796);
                v469 = v796.m128i_i64[1];
                v373 = 32 * v468;
                v470 = _mm_loadu_si128((const __m128i *)&v861);
                *(_OWORD *)(v796.m128i_i64[1] + v373 + 16) = *(_OWORD *)&v861.m256i_u64[2];
                *(__m128i *)(v469 + v373) = v470;
                v797 = v468 + 1;
                if ( (_BYTE)v907 && v785.m128i_i64[0] )
                {
                  sub_140001660(v785.m128i_i64[1], v785.m128i_i64[0], 1);
                  v416 += 2;
                  if ( v416 == (__m128i *)v417 )
                    break;
                }
                else
                {
LABEL_570:
                  v416 += 2;
                  if ( v416 == (__m128i *)v417 )
                    break;
                }
              }
            }
            if ( v789.m128i_i64[0] )
              sub_140001660(v789.m128i_i64[1], v789.m128i_i64[0], 1);
            v398 = v401;
          }
          else
          {
            v398 += 32;
          }
        }
        else
        {
          v910 = 1;
          sub_1402FC360(&v887, v398);
          v402 = *(_OWORD *)v887.m256i_i8;
          v403 = v887.m256i_i64[2];
          v404 = 32 * v887.m256i_i64[2];
          v898.m256i_i64[0] = v887.m256i_i64[1];
          v898.m256i_i64[1] = v887.m256i_i64[1];
          v898.m256i_i64[2] = v887.m256i_i64[0];
          v898.m256i_i64[3] = v887.m256i_i64[1] + 32 * v887.m256i_i64[2];
          v405 = v797;
          if ( v887.m256i_i64[2] > (unsigned __int64)(v796.m128i_i64[0] - v797) )
          {
            sub_14190D590((unsigned int)&v796, v797, v887.m256i_i32[4], 8, 32);
            v405 = v797;
          }
          else if ( !v887.m256i_i64[2] )
          {
            goto LABEL_551;
          }
          sub_1418F44E0((__m128i *)(v796.m128i_i64[1] + 32 * v405), *((const __m128i **)&v402 + 1), v404);
LABEL_551:
          v797 = v403 + v405;
          if ( (_QWORD)v402 )
            sub_140001660(*((_QWORD *)&v402 + 1), 32 * v402, 8);
          v398 += 32;
        }
      }
      v784 = v797;
      v783 = _mm_loadu_si128(&v796);
      v865 = 1;
      v471 = sub_14167F170(v373);
      if ( *(_BYTE *)(v471 + 16) == 1 )
      {
        v476 = *(_QWORD *)v471;
        v477 = *(_QWORD *)(v471 + 8);
      }
      else
      {
        v865 = 1;
        v771 = v471;
        v476 = sub_141696260(v473, v472, v474, v475);
        v471 = v771;
        *(_QWORD *)v771 = v476;
        *(_QWORD *)(v771 + 8) = v477;
        *(_BYTE *)(v771 + 16) = 1;
      }
      *(_QWORD *)v471 = v476 + 1;
      *(__m128i *)&v898.m256i_u64[2] = v363;
      *(__m128i *)v898.m256i_i8 = v364;
      v899.m256i_i64[0] = v476;
      v899.m256i_i64[1] = v477;
      v478 = v784;
      v479 = 32 * v784;
      if ( v784 )
      {
        nullsub_1(v476);
        v480 = sub_140001650(v479, 8);
        if ( !v480 )
        {
          v831 = 1;
          sub_141938D2B(8, v479);
        }
      }
      else
      {
        v480 = 8;
      }
      v800.m128i_i64[0] = v478;
      v800.m128i_i64[1] = v480;
      v801 = 0;
      v5 = v783.m128i_i64[1] + v479;
      v892.m128i_i64[0] = v783.m128i_i64[1];
      v892.m128i_i64[1] = v783.m128i_i64[1];
      v860 = v783.m128i_i64[0];
      *(_QWORD *)&v893 = v783.m128i_i64[0];
      *((_QWORD *)&v893 + 1) = v5;
      v820 = v783.m128i_i64[1];
      v481 = v783.m128i_i64[1];
      v482 = v5;
      if ( v783.m128i_i64[1] != v5 )
      {
        while ( 1 )
        {
          v6 = v481 + 32;
          v892.m128i_i64[1] = v481 + 32;
          v483 = *(_BYTE *)v481;
          *(_OWORD *)((char *)&v861.m256i_u64[1] + 7) = *(_OWORD *)(v481 + 16);
          *(_OWORD *)v861.m256i_i8 = *(_OWORD *)(v481 + 1);
          if ( v483 == -1 )
          {
LABEL_698:
            v493 = (const __m128i *)v6;
            goto LABEL_699;
          }
          v887.m256i_i8[0] = v483;
          *(_OWORD *)&v887.m256i_u64[2] = *(_OWORD *)((char *)&v861.m256i_u64[1] + 7);
          *(__m128i *)&v887.m256i_i8[1] = _mm_load_si128((const __m128i *)&v861);
          v890 = 1;
          v484 = sub_1416419F0(aFunction_0, 8, &v887);
          if ( !v484 )
            break;
          v890 = 1;
          v485 = sub_1416419F0(aName_2, 4, v484);
          if ( !v485 || *(_BYTE *)v485 != 3 )
            break;
          v486 = *(_QWORD *)(v485 + 24);
          if ( v486 < 0 )
          {
            v487 = 0;
            goto LABEL_696;
          }
          v901 = *(_QWORD *)(v485 + 24);
          if ( !v486 )
            break;
          v813 = *(_QWORD *)(v485 + 16);
          nullsub_1(v486);
          v487 = 1;
          v907 = sub_140001650(v901, 1);
          if ( !v907 )
          {
            v907 = v901;
LABEL_696:
            v890 = 1;
            sub_141938D2B(v487, v907);
          }
          v488 = v901;
          sub_1418F44E0((__m128i *)v907, (const __m128i *)v813, v901);
          v810.m256i_i64[0] = v488;
          v810.m256i_i64[1] = v907;
          v810.m256i_i64[2] = v488;
          v889 = 0;
          v792 = v907;
          v791 = v488;
          v888 = 1;
          if ( !(unsigned __int8)sub_1403AAB80(&v898, &v810) )
          {
            v489 = v801;
            if ( v801 == v800.m128i_i64[0] )
LABEL_689:
              sub_14190F570(&v800);
LABEL_690:
            v490 = v800.m128i_i64[1];
            v491 = 32 * v489;
            v492 = _mm_loadu_si128((const __m128i *)&v887);
            *(_OWORD *)(v800.m128i_i64[1] + v491 + 16) = *(_OWORD *)&v887.m256i_u64[2];
            *(__m128i *)(v490 + v491) = v492;
            v801 = v489 + 1;
            goto LABEL_691;
          }
          sub_14002F9D0(&v887);
LABEL_691:
          v481 = v6;
          v5 = v482;
          if ( v6 == v482 )
            goto LABEL_697;
        }
        v489 = v801;
        v907 = 1;
        if ( v801 == v800.m128i_i64[0] )
          goto LABEL_689;
        goto LABEL_690;
      }
LABEL_697:
      v493 = (const __m128i *)v5;
LABEL_699:
      v5 = (unsigned __int64)(v5 - (_QWORD)v493) >> 5;
      v901 = v5;
      v907 = 0;
      v813 = (__int64)v493;
      while ( 1 )
      {
        HIDWORD(_RAX) = HIDWORD(v907);
        if ( v901 == v907 )
          break;
        ++v907;
        v495 = v493 + 2;
        sub_1403880E0(v493);
        v493 = v495;
      }
      if ( v860 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v820, 32 * v860, 8) >> 32;
      v496 = v800.m128i_i64[1];
      v497 = v800.m128i_i64[0];
      v498 = v801;
      v6 = v898.m256i_i64[1];
      if ( v898.m256i_i64[1] )
      {
        v907 = v800.m128i_i64[1];
        v499 = v898.m256i_i64[3];
        if ( v898.m256i_i64[3] )
        {
          v5 = v898.m256i_i64[0];
          v500 = (const __m128i *)(v898.m256i_i64[0] + 16);
          _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v898.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_EBX )
            {
              do
              {
                v502 = _mm_load_si128(v500);
                v5 -= 384;
                ++v500;
                _EBX = _mm_movemask_epi8(v502) ^ 0xFFFF;
              }
              while ( !_EBX );
            }
            __asm { tzcnt   eax, ebx }
            v503 = -3 * _RAX;
            v504 = *(_QWORD *)(v5 + 8 * v503 - 24);
            if ( v504 )
              sub_140001660(*(_QWORD *)(v5 + 8 * v503 - 16), v504, 1);
            --v499;
            _RAX = _EBX & (unsigned int)(_EBX - 1);
            _EBX &= _EBX - 1;
          }
          while ( v499 );
        }
        v505 = (24 * v6 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v506 = v505 + v6;
        v84 = v506 == -17;
        v6 = v506 + 17;
        v496 = v907;
        if ( !v84 )
          sub_140001660(v898.m256i_i64[0] - v505, v6, 16);
      }
      if ( v498 )
      {
        v898.m256i_i64[1] = v497;
        v898.m256i_i64[2] = v496;
        v898.m256i_i64[3] = v498;
        v898.m256i_i8[0] = 4;
        v829 = 1;
        v907 = sub_141641AF0(aTools_1, 5, &v805);
        sub_14002F9D0(v907);
        v507 = _mm_loadu_si128((const __m128i *)&v898);
        v508 = (_OWORD *)v907;
        *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
        *v508 = v507;
      }
      else if ( v497 )
      {
        sub_140001660(v496, 32 * v497, 8);
      }
      v509 = v885.m256i_i64[1];
      if ( v885.m256i_i64[1] )
      {
        v510 = v885.m256i_i64[3];
        if ( v885.m256i_i64[3] )
        {
          v511 = v885.m256i_i64[0];
          v6 = v885.m256i_i64[0] + 16;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v885.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v513 = _mm_load_si128((const __m128i *)v6);
                v511 -= 512;
                v6 += 16;
                _R15D = _mm_movemask_epi8(v513) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   ecx, r15d }
            v515 = v511 - (unsigned int)(32 * _ECX);
            v516 = *(_QWORD *)(v515 - 32);
            if ( v516 )
              sub_140001660(*(_QWORD *)(v515 - 24), v516, 1);
            --v510;
            _R15D &= _R15D - 1;
          }
          while ( v510 );
        }
        v517 = 32 * v509;
        v518 = 33 * v509 + 49;
        if ( v518 )
          sub_140001660(v885.m256i_i64[0] - v517 - 32, v518, 16);
      }
    }
    v519 = sub_1416419F0(aTools_1, 5, &v805);
    if ( v519 && *(_BYTE *)v519 == 4 )
    {
      v520 = *(_QWORD *)(v519 + 24) != 0;
      if ( *(_QWORD *)(v519 + 24) )
        goto LABEL_736;
    }
    else
    {
      v520 = 0;
    }
    if ( (_BYTE)v805 == 5 )
    {
      sub_140DED130(&v898, &v806, aParallelToolCa, 19);
      if ( v898.m256i_i8[0] != -1 )
        sub_14002F9D0(&v898);
    }
LABEL_736:
    if ( v520 )
    {
      v521 = (unsigned __int8 *)sub_1416419F0(aToolChoice_1, 11, v870);
      if ( v521 )
      {
        v522 = *v521;
        if ( v522 == 5 )
        {
          v525 = v521;
          v526 = sub_1416419F0(aType_4, 4, v521);
          if ( !v526 )
            goto LABEL_782;
          if ( *(_BYTE *)v526 != 3 )
            goto LABEL_782;
          if ( *(_QWORD *)(v526 + 24) != 8 )
            goto LABEL_782;
          if ( **(_QWORD **)(v526 + 16) != 0x6E6F6974636E7566LL )
            goto LABEL_782;
          v527 = (const __m128i *)sub_1416419F0(aName_2, 4, v525);
          if ( !v527 || v527->m128i_i8[0] != 3 )
            goto LABEL_782;
          v800 = _mm_loadu_si128(v527 + 1);
          v810.m256i_i64[0] = 0;
          v810.m256i_i64[2] = 0;
          nullsub_1(v528);
          v529 = (_DWORD *)sub_140001650(4, 1);
          if ( !v529 )
            sub_141938D2B(1, 4);
          *v529 = 1701869940;
          v887.m256i_i64[0] = 4;
          v887.m256i_i64[1] = (__int64)v529;
          v887.m256i_i64[2] = 4;
          v873 = 1;
          sub_14040FB10(&v898, &off_1419E6178);
          if ( v898.m256i_i8[0] == -1 )
          {
            v885.m256i_i64[0] = v898.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v885,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E8B50);
          }
          v530 = _mm_loadu_si128((const __m128i *)&v898);
          *(_OWORD *)&v885.m256i_u64[2] = *(_OWORD *)&v898.m256i_u64[2];
          *(__m128i *)v885.m256i_i8 = v530;
          v873 = 0;
          sub_140E72AA0(&v898, &v810, &v887, &v885);
          if ( v898.m256i_i8[0] != -1 )
            sub_14002F9D0(&v898);
          nullsub_1(v531);
          v532 = (_QWORD *)sub_140001650(8, 1);
          if ( !v532 )
            sub_141938D2B(1, 8);
          *v532 = 0x6E6F6974636E7566LL;
          v861.m256i_i64[0] = 8;
          v861.m256i_i64[1] = (__int64)v532;
          v861.m256i_i64[2] = 8;
          v892.m128i_i64[0] = 0;
          *(_QWORD *)&v893 = 0;
          nullsub_1(v533);
          v534 = (_DWORD *)sub_140001650(4, 1);
          if ( !v534 )
            sub_141938D2B(1, 4);
          *v534 = 1701667182;
          v887.m256i_i64[0] = 4;
          v887.m256i_i64[1] = (__int64)v534;
          v887.m256i_i64[2] = 4;
          v872 = 1;
          sub_14040FB10(&v898, &v800);
          if ( v898.m256i_i8[0] == -1 )
          {
            v885.m256i_i64[0] = v898.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v885,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E8B50);
          }
          v535 = _mm_loadu_si128((const __m128i *)&v898);
          *(_OWORD *)&v885.m256i_u64[2] = *(_OWORD *)&v898.m256i_u64[2];
          *(__m128i *)v885.m256i_i8 = v535;
          v872 = 0;
          sub_140E72AA0(&v898, &v892, &v887, &v885);
          if ( v898.m256i_i8[0] != -1 )
            sub_14002F9D0(&v898);
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v892);
          v898.m256i_i64[3] = v893;
          v898.m256i_i8[0] = 5;
          v828 = 0;
          sub_140E72AA0(&v885, &v810, &v861, &v898);
          if ( v885.m256i_i8[0] != -1 )
            sub_14002F9D0(&v885);
          *(_OWORD *)((char *)&v898.m256i_u32[1] + 3) = *(_OWORD *)v810.m256i_i8;
          *(__int64 *)((char *)&v898.m256i_i64[2] + 7) = v810.m256i_i64[2];
        }
        else
        {
          if ( v522 != 3 )
            goto LABEL_782;
          v523 = *((_DWORD **)v521 + 2);
          v524 = *((_QWORD *)v521 + 3);
          if ( v524 == 4 )
          {
            if ( *v523 != 1869903201 && *v523 != 1701736302 )
              goto LABEL_782;
          }
          else if ( v524 != 8 || *(_QWORD *)v523 != 0x6465726975716572LL )
          {
            goto LABEL_782;
          }
          sub_1416AC440(&v885, v521 + 8);
          *(__int64 *)((char *)&v898.m256i_i64[2] + 7) = v885.m256i_i64[2];
          *(_OWORD *)((char *)&v898.m256i_u32[1] + 3) = *(_OWORD *)v885.m256i_i8;
        }
        *(_OWORD *)v887.m256i_i8 = *(_OWORD *)v898.m256i_i8;
        *(_OWORD *)((char *)&v887.m256i_u64[1] + 7) = *(_OWORD *)((char *)&v898.m256i_u64[1] + 7);
        v885.m256i_i8[0] = v522;
        *(__m128i *)&v885.m256i_i8[1] = _mm_load_si128((const __m128i *)&v887);
        *(_OWORD *)&v885.m256i_u64[2] = *(_OWORD *)((char *)&v898.m256i_u64[1] + 7);
        v895 = 1;
        v536 = sub_1416419F0(aFunction_0, 8, &v885);
        v537 = v536;
        if ( v536 )
        {
          v895 = 1;
          v538 = sub_1416419F0(aName_2, 4, v536);
          if ( v538 )
          {
            if ( *(_BYTE *)v538 == 3 )
            {
              v6 = *(_QWORD *)(v538 + 16);
              v539 = *(_QWORD *)(v538 + 24);
              HIDWORD(_RAX) = (unsigned __int64)sub_14072C410((unsigned int)&v898, v539, 0, 1, 1) >> 32;
              if ( v898.m256i_i32[0] == 1 )
              {
                v895 = 1;
                sub_141938D2B(v898.m256i_i64[1], v898.m256i_i64[2]);
              }
              v541 = (__m128i *)v898.m256i_i64[2];
              v901 = v898.m256i_i64[1];
              if ( v539 )
                HIDWORD(_RAX) = (unsigned __int64)sub_1418F44E0((__m128i *)v898.m256i_i64[2], (const __m128i *)v6, v539) >> 32;
              v907 = (__int64)v541;
              v542 = v815.m256i_i64[3];
              if ( v815.m256i_i64[3] )
              {
                v543 = v815.m256i_i64[0];
                _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v815.m256i_i64[0]));
                v5 = v815.m256i_i64[0] + 16;
                while ( 1 )
                {
                  if ( !(_WORD)_R13D )
                  {
                    do
                    {
                      v545 = _mm_load_si128((const __m128i *)v5);
                      v543 -= 768;
                      v5 += 16;
                      _R13D = _mm_movemask_epi8(v545) ^ 0xFFFF;
                    }
                    while ( !_R13D );
                  }
                  __asm { tzcnt   eax, r13d }
                  v6 = -48 * _RAX;
                  if ( *(_QWORD *)(v543 - 48 * _RAX - 8) == v539 )
                  {
                    v6 = v543 - 48 * _RAX;
                    if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)(v6 - 16), v907) )
                      break;
                  }
                  _RAX = _R13D & (unsigned int)(_R13D - 1);
                  _R13D &= _R13D - 1;
                  if ( !--v542 )
                    goto LABEL_779;
                }
                v6 -= 48;
                sub_1416AC440(&v892, v6);
                v898.m256i_i64[3] = v893;
                *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v892);
                v898.m256i_i8[0] = 3;
                v827 = 1;
                v860 = sub_141641AF0(aName_2, 4, v537);
                sub_14002F9D0(v860);
                v546 = _mm_loadu_si128((const __m128i *)&v898);
                v547 = (_OWORD *)v860;
                *(_OWORD *)(v860 + 16) = *(_OWORD *)&v898.m256i_u64[2];
                *v547 = v546;
              }
LABEL_779:
              if ( v901 )
                sub_140001660(v907, v901, 1);
            }
          }
        }
        v548 = _mm_loadu_si128((const __m128i *)&v885);
        *(_OWORD *)&v898.m256i_u64[2] = *(_OWORD *)&v885.m256i_u64[2];
        *(__m128i *)v898.m256i_i8 = v548;
        v826 = 1;
        v907 = sub_141641AF0(aToolChoice_1, 11, &v805);
        sub_14002F9D0(v907);
        v549 = _mm_load_si128((const __m128i *)&v898);
        v550 = (_OWORD *)v907;
        *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
        *v550 = v549;
      }
    }
LABEL_782:
    sub_14102E380((__int64)&v805, v870, a5, v871, v809);
    v551 = sub_1416419F0(aStopSequences, 14, v870);
    if ( v551 )
    {
      v552 = *(_BYTE *)v551;
      switch ( *(_BYTE *)v551 )
      {
        case 0:
          goto LABEL_792;
        case 1:
          v898.m256i_i8[1] = *(_BYTE *)(v551 + 1);
          goto LABEL_792;
        case 2:
          *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v551 + 8));
          goto LABEL_792;
        case 3:
          sub_1416AC440(&v898.m256i_u64[1], v551 + 8);
          goto LABEL_792;
        case 4:
          sub_1403918C0(&v898.m256i_u64[1], *(_QWORD *)(v551 + 16), *(_QWORD *)(v551 + 24));
          goto LABEL_792;
        case 5:
          if ( *(_QWORD *)(v551 + 24) )
          {
            v553 = *(_QWORD *)(v551 + 8);
            if ( !v553 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v898.m256i_u64[1], v553, *(_QWORD *)(v551 + 16));
          }
          else
          {
            v898.m256i_i64[1] = 0;
            v898.m256i_i64[3] = 0;
          }
LABEL_792:
          v898.m256i_i8[0] = v552;
          v825 = 1;
          v907 = sub_141641AF0(aStop_0, 4, &v805);
          sub_14002F9D0(v907);
          v554 = _mm_loadu_si128((const __m128i *)&v898);
          v555 = (_OWORD *)v907;
          *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
          *v555 = v554;
          break;
        default:
          goto LABEL_698;
      }
    }
    v556 = (_BYTE *)sub_1416419F0("streamdoubaoreasoning_effortnone", 6, v870);
    if ( v556 && *v556 == 1 && (v556[1] & 1) != 0 )
    {
      v892.m128i_i64[0] = 0;
      *(_QWORD *)&v893 = 0;
      nullsub_1(v557);
      v558 = (void *)sub_140001650(13, 1);
      if ( !v558 )
        sub_141938D2B(1, 13);
      qmemcpy(v558, "include_usage", 13);
      v887.m256i_i64[0] = 13;
      v887.m256i_i64[1] = (__int64)v558;
      v887.m256i_i64[2] = 13;
      v898.m256i_i16[0] = 257;
      sub_140E72AA0(&v885, &v892, &v887, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v892);
      v898.m256i_i64[3] = v893;
      v898.m256i_i8[0] = 5;
      v824 = 1;
      v907 = sub_141641AF0(aStreamOptions, 14, &v805);
      sub_14002F9D0(v907);
      v559 = _mm_loadu_si128((const __m128i *)&v898);
      v560 = (_OWORD *)v907;
      *(_OWORD *)(v907 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *v560 = v559;
    }
    v898.m256i_i64[1] = 4;
    v898.m256i_i64[2] = (__int64)aFrequencyPenal;
    v898.m256i_i64[3] = 17;
    v899.m256i_i64[0] = (__int64)aPresencePenalt;
    v899.m256i_i64[1] = 16;
    v899.m256i_i64[2] = (__int64)aSeed;
    v899.m256i_i64[3] = 4;
    *(_QWORD *)&v900 = aResponseFormat;
    *((_QWORD *)&v900 + 1) = 15;
    v561 = 0;
    while ( v561 != 4 )
    {
      v562 = v561 + 1;
      v898.m256i_i64[0] = v561 + 1;
      v563 = 2 * v561;
      v6 = v898.m256i_i64[v563 + 2];
      v564 = v898.m256i_i64[v563 + 3];
      v565 = sub_1416419F0(v6, v564, v870);
      v561 = v562;
      if ( v565 )
      {
        v566 = *(_BYTE *)v565;
        switch ( *(_BYTE *)v565 )
        {
          case 0:
            goto LABEL_812;
          case 1:
            v885.m256i_i8[1] = *(_BYTE *)(v565 + 1);
            goto LABEL_812;
          case 2:
            *(__m128i *)&v885.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v565 + 8));
            goto LABEL_812;
          case 3:
            sub_1416AC440(&v885.m256i_u64[1], v565 + 8);
            goto LABEL_812;
          case 4:
            sub_1403918C0(&v885.m256i_u64[1], *(_QWORD *)(v565 + 16), *(_QWORD *)(v565 + 24));
            goto LABEL_812;
          case 5:
            if ( *(_QWORD *)(v565 + 24) )
            {
              v567 = *(_QWORD *)(v565 + 8);
              if ( !v567 )
                sub_141939020(&off_141A54900);
              sub_140E11B90(&v885.m256i_u64[1], v567, *(_QWORD *)(v565 + 16));
            }
            else
            {
              v885.m256i_i64[1] = 0;
              v885.m256i_i64[3] = 0;
            }
LABEL_812:
            v885.m256i_i8[0] = v566;
            v821 = 1;
            v907 = sub_141641AF0(v6, v564, &v805);
            sub_14002F9D0(v907);
            v568 = _mm_loadu_si128((const __m128i *)&v885);
            v569 = (_OWORD *)v907;
            *(_OWORD *)(v907 + 16) = *(_OWORD *)&v885.m256i_u64[2];
            *v569 = v568;
            v561 = v562;
            continue;
          default:
            goto LABEL_698;
        }
      }
    }
    v570 = (_BYTE *)sub_1416419F0(
                      "messagesrolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释"
                      "。usertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                      8,
                      &v805);
    v572 = (__int64)v570;
    if ( v570 && *v570 == 4 )
    {
      v573 = sub_14167F170(v571);
      v578 = v573;
      if ( *(_BYTE *)(v573 + 16) == 1 )
      {
        v579 = *(_OWORD *)v573;
      }
      else
      {
        *(_QWORD *)&v579 = sub_141696260(v575, v574, v576, v577);
        *(_OWORD *)v578 = v579;
        *(_BYTE *)(v578 + 16) = 1;
      }
      v820 = v572 + 8;
      *(_QWORD *)v578 = v579 + 1;
      *(__m128i *)&v898.m256i_u64[2] = v363;
      *(__m128i *)v898.m256i_i8 = v364;
      *(_OWORD *)v899.m256i_i8 = v579;
      v580 = 0;
      v907 = v572;
LABEL_856:
      HIDWORD(_RAX) = ~HIDWORD(v580);
      v901 = ~v580;
      v611 = 32 * v580;
      v870 = v580;
      while ( v580 < *(_QWORD *)(v572 + 24) )
      {
        _RAX = sub_1416419F0(
                 "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperat"
                 "uremax_tokensstreamdoubaoreasoning_effortnone",
                 4,
                 v611 + *(_QWORD *)(v572 + 16));
        if ( !_RAX || *(_BYTE *)_RAX != 3 )
          goto LABEL_842;
        v582 = *(_QWORD *)(_RAX + 16);
        _RAX = *(_QWORD *)(_RAX + 24);
        if ( _RAX != 4 )
        {
          if ( _RAX != 9
            || (_RAX = *(_QWORD *)v582 ^ 0x6E61747369737361LL, _RAX | *(unsigned __int8 *)(v582 + 8) ^ 0x74LL) )
          {
LABEL_842:
            v601 = v898.m256i_i64[3];
            if ( v898.m256i_i64[3] )
            {
              v602 = v898.m256i_i64[0];
              v603 = (const __m128i *)(v898.m256i_i64[0] + 16);
              _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v898.m256i_i64[0]));
              v605 = v898.m256i_i64[0];
              do
              {
                if ( !(_WORD)_EDI )
                {
                  do
                  {
                    v606 = _mm_load_si128(v603);
                    v605 -= 384;
                    ++v603;
                    _EDI = _mm_movemask_epi8(v606) ^ 0xFFFF;
                  }
                  while ( !_EDI );
                }
                __asm { tzcnt   eax, edi }
                v607 = -3 * _RAX;
                v608 = *(_QWORD *)(v605 + 8 * v607 - 24);
                if ( v608 )
                  sub_140001660(*(_QWORD *)(v605 + 8 * v607 - 16), v608, 1);
                _RAX = _EDI & (unsigned int)(_EDI - 1);
                _EDI &= _EDI - 1;
                --v601;
              }
              while ( v601 );
              v609 = v898.m256i_u64[1];
              if ( v898.m256i_i64[1] )
              {
                LOBYTE(v608) = -1;
                sub_1418F4C70(v602, v608, v898.m256i_i64[1] + 17);
                v610 = ((v609 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v609 + 1) >> 3);
                if ( v609 < 8 )
                  v610 = v609;
              }
              else
              {
                v610 = 0;
              }
              *(_OWORD *)&v898.m256i_u64[2] = v610;
            }
LABEL_855:
            v580 = v870 + 1;
            v572 = v907;
            goto LABEL_856;
          }
          v612 = v898.m256i_i64[3];
          if ( v898.m256i_i64[3] )
          {
            v613 = v898.m256i_i64[0];
            v614 = (const __m128i *)(v898.m256i_i64[0] + 16);
            _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v898.m256i_i64[0]));
            v616 = v898.m256i_i64[0];
            do
            {
              if ( !(_WORD)_EDI )
              {
                do
                {
                  v617 = _mm_load_si128(v614);
                  v616 -= 384;
                  ++v614;
                  _EDI = _mm_movemask_epi8(v617) ^ 0xFFFF;
                }
                while ( !_EDI );
              }
              __asm { tzcnt   eax, edi }
              v618 = -3 * _RAX;
              v619 = *(_QWORD *)(v616 + 8 * v618 - 24);
              if ( v619 )
                sub_140001660(*(_QWORD *)(v616 + 8 * v618 - 16), v619, 1);
              _RAX = _EDI & (unsigned int)(_EDI - 1);
              _EDI &= _EDI - 1;
              --v612;
            }
            while ( v612 );
            v620 = v898.m256i_u64[1];
            if ( v898.m256i_i64[1] )
            {
              LOBYTE(v619) = -1;
              sub_1418F4C70(v613, v619, v898.m256i_i64[1] + 17);
              v621 = ((v620 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v620 + 1) >> 3);
              if ( v620 < 8 )
                v621 = v620;
            }
            else
            {
              v621 = 0;
            }
            v572 = v907;
            *(_OWORD *)&v898.m256i_u64[2] = v621;
          }
          v622 = *(_QWORD *)(v572 + 24);
          if ( v580 >= v622 )
            sub_1419390C3(v580, v622, &off_1419E8830);
          v623 = sub_1416419F0("tool_callsYou have a web_search tool available.", 10, *(_QWORD *)(v572 + 16) + v611);
          if ( v623 && *(_BYTE *)v623 == 4 )
          {
            v624 = *(_QWORD *)(v623 + 16);
            v625 = v624 + 32LL * *(_QWORD *)(v623 + 24);
            while ( 1 )
            {
              do
              {
                if ( v624 == v625 )
                  goto LABEL_883;
                v626 = sub_1416419F0(aId_1, 2, v624);
                v624 += 32;
              }
              while ( !v626 || *(_BYTE *)v626 != 3 );
              v628 = *(const __m128i **)(v626 + 24);
              if ( (__int64)v628 < 0 )
                break;
              if ( v628 )
              {
                v629 = *(const __m128i **)(v626 + 16);
                nullsub_1(v627);
                v630 = (__m128i *)sub_140001650(v628, 1);
                if ( !v630 )
                {
                  v813 = (__int64)v628;
                  v768 = 1;
LABEL_1070:
                  sub_141938D2B(v768, v813);
                }
                v631 = v629;
                v632 = v630;
                sub_1418F44E0(v630, v631, (unsigned __int64)v628);
                v633 = (__int64)v632;
              }
              else
              {
                v633 = 1;
              }
              v885.m256i_i64[0] = (__int64)v628;
              v813 = v633;
              v885.m256i_i64[1] = v633;
              v885.m256i_i64[2] = (__int64)v628;
              sub_1403AAB80(&v898, &v885);
            }
            v768 = 0;
            goto LABEL_1070;
          }
LABEL_883:
          ++v580;
          goto LABEL_856;
        }
        if ( *(_DWORD *)v582 != 1819242356 )
          goto LABEL_842;
        v583 = *(_QWORD *)(v572 + 24);
        if ( v580 >= v583 )
          sub_1419390C3(v580, v583, &off_1419E8800);
        v584 = sub_1416419F0(aToolCallId, 12, v611 + *(_QWORD *)(v572 + 16));
        v585 = 1;
        if ( v584 && *(_BYTE *)v584 == 3 )
        {
          v585 = *(_QWORD *)(v584 + 16);
          v586 = *(_QWORD *)(v584 + 24);
          if ( v898.m256i_i64[3] )
            goto LABEL_829;
        }
        else
        {
          v586 = 0;
          if ( v898.m256i_i64[3] )
          {
LABEL_829:
            v587 = sub_140D2CC10(&v899, v585, v586);
            _RAX = v587 >> 57;
            v589 = *(_OWORD *)v898.m256i_i8;
            v590 = _mm_cvtsi32_si128(v587 >> 57);
            v591 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v590, v590), 0), 68);
            for ( j = nullptr; ; ++j )
            {
              v593 = *((_QWORD *)&v589 + 1) & v587;
              v594 = _mm_loadu_si128((const __m128i *)(v589 + v593));
              _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v594, v591));
              if ( _ESI )
                break;
LABEL_835:
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v594, (__m128i)-1LL));
              if ( (_DWORD)_RAX )
                goto LABEL_837;
              v587 = (unsigned __int64)j[1].m128i_u64 + v593;
            }
            v860 = (__int64)j;
            while ( 1 )
            {
              __asm { tzcnt   eax, esi }
              v596 = -3LL * (*((_QWORD *)&v589 + 1) & (v593 + _RAX));
              if ( v586 == *(_QWORD *)(v589 + 8 * v596 - 8)
                && !(unsigned int)sub_1418F4B70(v585, *(_QWORD *)(v589 + 8 * v596 - 16)) )
              {
                goto LABEL_855;
              }
              _RAX = (unsigned int)(_ESI - 1);
              LOWORD(_RAX) = _ESI & (_ESI - 1);
              _ESI = _RAX;
              j = (const __m128i *)v860;
              if ( !(_WORD)_RAX )
                goto LABEL_835;
            }
          }
        }
LABEL_837:
        v572 = v907;
        v597 = *(_QWORD *)(v907 + 24);
        v580 = v870;
        if ( v870 >= v597
          || (v598 = *(_QWORD *)(v907 + 16) + v611,
              v599 = *(_BYTE *)v598,
              *(_OWORD *)((char *)&v887.m256i_u64[1] + 7) = *(_OWORD *)(v598 + 16),
              *(__m128i *)v887.m256i_i8 = _mm_loadu_si128((const __m128i *)(v598 + 1)),
              sub_1418F44E0((__m128i *)v598, (const __m128i *)(v598 + 32), 32 * (v597 + v901)),
              --v597,
              *(_QWORD *)(v572 + 24) = v597,
              v599 == -1) )
        {
          sub_141938DFB(v580, v597, &off_1419E8818);
        }
        v885.m256i_i8[0] = v599;
        *(_OWORD *)&v885.m256i_u64[2] = *(_OWORD *)((char *)&v887.m256i_u64[1] + 7);
        *(__m128i *)&v885.m256i_i8[1] = _mm_load_si128((const __m128i *)&v887);
        HIDWORD(_RAX) = (unsigned __int64)sub_14002F9D0(&v885) >> 32;
      }
      v634 = v898.m256i_i64[1];
      if ( v898.m256i_i64[1] )
      {
        v635 = v898.m256i_i64[3];
        if ( v898.m256i_i64[3] )
        {
          v636 = v898.m256i_i64[0];
          v637 = (const __m128i *)(v898.m256i_i64[0] + 16);
          _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v898.m256i_i64[0]));
          do
          {
            if ( !(_WORD)_EDI )
            {
              do
              {
                v639 = _mm_load_si128(v637);
                v636 -= 384;
                ++v637;
                _EDI = _mm_movemask_epi8(v639) ^ 0xFFFF;
              }
              while ( !_EDI );
            }
            __asm { tzcnt   eax, edi }
            v640 = -3 * _RAX;
            v641 = *(_QWORD *)(v636 + 8 * v640 - 24);
            if ( v641 )
              sub_140001660(*(_QWORD *)(v636 + 8 * v640 - 16), v641, 1);
            --v635;
            _RAX = _EDI & (unsigned int)(_EDI - 1);
            _EDI &= _EDI - 1;
          }
          while ( v635 );
        }
        v642 = (24 * v634 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v643 = v642 + v634;
        v84 = v643 == -17;
        v644 = v643 + 17;
        v572 = v907;
        if ( !v84 )
          sub_140001660(v898.m256i_i64[0] - v642, v644, 16);
      }
      v645 = 0;
      v646 = *(_QWORD *)(v572 + 16);
      v647 = *(_QWORD *)(v572 + 24);
      if ( v647 )
      {
        do
        {
          while ( 1 )
          {
            v650 = 32 * v645;
            v651 = sub_1416419F0(
                     "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
                     "eraturemax_tokensstreamdoubaoreasoning_effortnone",
                     4,
                     32 * v645 + v646);
            if ( v651 )
            {
              if ( *(_BYTE *)v651 == 3
                && *(_QWORD *)(v651 + 24) == 9
                && !(**(_QWORD **)(v651 + 16) ^ 0x6E61747369737361LL
                   | *(unsigned __int8 *)(*(_QWORD *)(v651 + 16) + 8LL) ^ 0x74LL) )
              {
                v652 = *(_QWORD *)(v572 + 24);
                if ( v645 >= v652 )
                  sub_1419390C3(v645, v652, &off_1419E8B68);
                v653 = sub_1416419F0(
                         "tool_callsYou have a web_search tool available.",
                         10,
                         v650 + *(_QWORD *)(v572 + 16));
                if ( v653 )
                {
                  if ( *(_BYTE *)v653 == 4 && *(_QWORD *)(v653 + 24) )
                    break;
                }
              }
            }
            ++v645;
            v646 = *(_QWORD *)(v572 + 16);
            v647 = *(_QWORD *)(v572 + 24);
            if ( v645 >= v647 )
              goto LABEL_895;
          }
          v654 = *(_QWORD *)(v572 + 24);
          if ( v645 >= v654 )
            sub_1419390C3(v645, v654, &off_1419E8B80);
          v655 = sub_1416419F0("tool_callsYou have a web_search tool available.", 10, *(_QWORD *)(v572 + 16) + v650);
          if ( !v655 || *(_BYTE *)v655 != 4 )
            sub_141939020(&off_1419E8BC8);
          sub_1403D0F30(&v861, *(_QWORD *)(v655 + 16), *(_QWORD *)(v655 + 16) + 32LL * *(_QWORD *)(v655 + 24));
          v657 = sub_14167F170(v656);
          v662 = v657;
          if ( *(_BYTE *)(v657 + 16) == 1 )
          {
            v663 = *(_OWORD *)v657;
          }
          else
          {
            *(_QWORD *)&v663 = sub_141696260(v659, v658, v660, v661);
            *(_OWORD *)v662 = v663;
            *(_BYTE *)(v662 + 16) = 1;
          }
          *(_QWORD *)v662 = v663 + 1;
          *(__m128i *)&v898.m256i_u64[2] = v363;
          *(__m128i *)v898.m256i_i8 = v364;
          *(_OWORD *)v899.m256i_i8 = v663;
          while ( ++v645 < *(_QWORD *)(v572 + 24) )
          {
            v664 = sub_1416419F0(
                     "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
                     "eraturemax_tokensstreamdoubaoreasoning_effortnone",
                     4,
                     32 * v645 + *(_QWORD *)(v572 + 16));
            if ( !v664 || *(_BYTE *)v664 != 3 || *(_QWORD *)(v664 + 24) != 4 || **(_DWORD **)(v664 + 16) != 1819242356 )
              break;
            v665 = *(_QWORD *)(v572 + 24);
            if ( v645 >= v665 )
              sub_1419390C3(v645, v665, &off_1419E8BB0);
            v666 = sub_1416419F0(aToolCallId, 12, *(_QWORD *)(v572 + 16) + 32 * v645);
            if ( v666 && *(_BYTE *)v666 == 3 )
            {
              *((_QWORD *)&v668 + 1) = *(_QWORD *)(v666 + 24);
              if ( v668 < 0 )
              {
                v769 = 0;
                goto LABEL_1072;
              }
              if ( *((_QWORD *)&v668 + 1) )
              {
                v669 = *(const __m128i **)(v666 + 16);
                nullsub_1(v667);
                v670 = (__m128i *)sub_140001650(*((_QWORD *)&v668 + 1), 1);
                if ( !v670 )
                {
                  v804 = *((_QWORD *)&v668 + 1);
                  v769 = 1;
LABEL_1072:
                  sub_141938D2B(v769, v804);
                }
                *(_QWORD *)&v668 = v670;
                sub_1418F44E0(v670, v669, *((unsigned __int64 *)&v668 + 1));
              }
              else
              {
                *(_QWORD *)&v668 = 1;
              }
              v885.m256i_i64[0] = *((_QWORD *)&v668 + 1);
              v804 = v668;
              *(_OWORD *)&v885.m256i_u64[1] = v668;
              sub_1403AAB80(&v898, &v885);
              v572 = v907;
            }
          }
          v671 = v861.m256i_u64[2];
          v885.m256i_i64[0] = v861.m256i_i64[1];
          v885.m256i_i64[1] = v861.m256i_i64[1] + 24 * v861.m256i_i64[2];
          v885.m256i_i64[2] = (__int64)&v898;
          sub_1403D7C30(&v892, &v885);
          if ( (_QWORD)v893 )
          {
            v808 = 32 * v893;
            v672 = v892.m128i_i64[1] + 32 * v893;
            v885.m256i_i64[0] = v892.m128i_i64[1];
            v885.m256i_i64[1] = v892.m128i_i64[1];
            v860 = v892.m128i_i64[0];
            v885.m256i_i64[2] = v892.m128i_i64[0];
            v885.m256i_i64[3] = v672;
            v886[0] = 0;
            v673 = 0;
            v813 = v892.m128i_i64[1];
            v674 = v892.m128i_i64[1];
            v901 = v672;
            while ( v674 != v672 )
            {
              v676 = v674 + 32;
              v885.m256i_i64[1] = v674 + 32;
              v677 = *(_BYTE *)v674;
              if ( *(_BYTE *)v674 == 0xFF )
                goto LABEL_941;
              v678 = _mm_loadu_si128((const __m128i *)(v674 + 1));
              *(_OWORD *)&v887.m256i_u64[2] = *(_OWORD *)(v674 + 16);
              *(__m128i *)&v887.m256i_i8[1] = v678;
              v679 = v673 + 1;
              v886[0] = v673 + 1;
              v887.m256i_i8[0] = v677;
              v680 = v645 + v673;
              v681 = *(_QWORD *)(v907 + 24);
              if ( v681 < v680 )
                sub_141938D74(v680, *(_QWORD *)(v907 + 24), &off_1419E8B98);
              if ( v681 == *(_QWORD *)v820 )
                sub_14190F570(v820);
              v682 = *(_QWORD *)(v907 + 16) + 32 * v680;
              if ( v681 > v680 )
                sub_1418F44E0(
                  (__m128i *)(v682 + 32),
                  (const __m128i *)(*(_QWORD *)(v907 + 16) + 32 * v680),
                  32 * (v681 - v680));
              v675 = _mm_loadu_si128((const __m128i *)&v887);
              *(_OWORD *)(v682 + 16) = *(_OWORD *)&v887.m256i_u64[2];
              *(__m128i *)v682 = v675;
              *(_QWORD *)(v907 + 24) = v681 + 1;
              v673 = v679;
              v674 = v676;
              v672 = v901;
            }
            v676 = v672;
LABEL_941:
            v901 = (unsigned __int64)(v672 - v676) >> 5;
            v811 = (_DWORD *)v676;
            v684 = v676;
            v870 = 0;
            while ( v901 != v870 )
            {
              ++v870;
              v685 = v684 + 32;
              sub_1403880E0(v684);
              v684 = v685;
            }
            if ( v860 )
              sub_140001660(v813, 32 * v860, 8);
            v671 = v861.m256i_u64[2];
            v683 = 0;
            if ( v861.m256i_i64[2] >= (unsigned __int64)v898.m256i_i64[3] )
              v683 = v861.m256i_i64[2] - v898.m256i_i64[3];
          }
          else
          {
            v683 = 0;
            if ( v671 >= v898.m256i_i64[3] )
              v683 = v671 - v898.m256i_i64[3];
            if ( v892.m128i_i64[0] )
              sub_140001660(v892.m128i_i64[1], 32 * v892.m128i_i64[0], 8);
          }
          HIDWORD(_RAX) = v898.m256i_i32[3];
          if ( v898.m256i_i64[1] )
          {
            v901 = v898.m256i_i64[1];
            v870 = v683;
            v687 = v898.m256i_i64[3];
            if ( v898.m256i_i64[3] )
            {
              v688 = v898.m256i_i64[0];
              v689 = (const __m128i *)(v898.m256i_i64[0] + 16);
              _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v898.m256i_i64[0]));
              do
              {
                if ( !(_WORD)_EDI )
                {
                  do
                  {
                    v691 = _mm_load_si128(v689);
                    v688 -= 384;
                    ++v689;
                    _EDI = _mm_movemask_epi8(v691) ^ 0xFFFF;
                  }
                  while ( !_EDI );
                }
                __asm { tzcnt   eax, edi }
                v692 = -3 * _RAX;
                v693 = *(_QWORD *)(v688 + 8 * v692 - 24);
                if ( v693 )
                  sub_140001660(*(_QWORD *)(v688 + 8 * v692 - 16), v693, 1);
                --v687;
                _RAX = _EDI & (unsigned int)(_EDI - 1);
                _EDI &= _EDI - 1;
              }
              while ( v687 );
            }
            v694 = (24 * v901 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v683 = v870;
            if ( v694 + v901 != -17 )
              sub_140001660(v898.m256i_i64[0] - v694, v694 + v901 + 17, 16);
          }
          v695 = v861.m256i_i64[1];
          if ( v671 )
          {
            v696 = (_QWORD *)(v861.m256i_i64[1] + 8);
            do
            {
              v697 = *(v696 - 1);
              if ( v697 )
                sub_140001660(*v696, v697, 1);
              v696 += 3;
              --v671;
            }
            while ( v671 );
          }
          if ( v861.m256i_i64[0] )
            sub_140001660(v695, 24 * v861.m256i_i64[0], 8);
          v645 += v683;
          v572 = v907;
          v646 = *(_QWORD *)(v907 + 16);
          v647 = *(_QWORD *)(v907 + 24);
        }
        while ( v645 < v647 );
      }
LABEL_895:
      if ( v647 )
      {
        v648 = v646 + 32 * v647;
        v649 = v646;
        while ( 1 )
        {
          v698 = sub_1416419F0(
                   "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemper"
                   "aturemax_tokensstreamdoubaoreasoning_effortnone",
                   4,
                   v649);
          if ( v698 )
          {
            if ( *(_BYTE *)v698 == 3
              && *(_QWORD *)(v698 + 24) == 9
              && !(**(_QWORD **)(v698 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v698 + 16) + 8LL) ^ 0x74LL) )
            {
              v699 = sub_1416419F0(aReasoningConte, 17, v649);
              if ( v699 )
              {
                if ( *(_BYTE *)v699 == 3 && *(_QWORD *)(v699 + 24) )
                  break;
              }
            }
          }
          v649 += 32;
          if ( v649 == v648 )
            goto LABEL_986;
        }
        while ( v646 != v648 )
        {
          v700 = v646;
          v701 = sub_1416419F0(
                   "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemper"
                   "aturemax_tokensstreamdoubaoreasoning_effortnone",
                   4,
                   v646);
          v646 += 32;
          if ( v701 )
          {
            if ( *(_BYTE *)v701 == 3
              && *(_QWORD *)(v701 + 24) == 9
              && !(**(_QWORD **)(v701 + 16) ^ 0x6E61747369737361LL
                 | *(unsigned __int8 *)(*(_QWORD *)(v701 + 16) + 8LL) ^ 0x74LL) )
            {
              v702 = sub_1416419F0(aReasoningConte, 17, v700);
              if ( !v702 || *(_BYTE *)v702 != 3 || !*(_QWORD *)(v702 + 24) )
              {
                nullsub_1(v703);
                v704 = (void *)sub_140001650(37, 1);
                if ( !v704 )
                  sub_141938D2B(1, 37);
                qmemcpy(v704, "(this turn ran without thinking mode)", 37);
                v898.m256i_i64[1] = 37;
                v898.m256i_i64[2] = (__int64)v704;
                v898.m256i_i64[3] = 37;
                v898.m256i_i8[0] = 3;
                v822 = 1;
                v870 = sub_141641AF0(aReasoningConte, 17, v700);
                sub_14002F9D0(v870);
                v705 = _mm_loadu_si128((const __m128i *)&v898);
                v706 = (_OWORD *)v870;
                *(_OWORD *)(v870 + 16) = *(_OWORD *)&v898.m256i_u64[2];
                *v706 = v705;
              }
            }
          }
        }
      }
    }
LABEL_986:
    v707 = sub_1416419F0(
             "messagesrolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
             "eraturemax_tokensstreamdoubaoreasoning_effortnone",
             8,
             &v805);
    v708 = (_QWORD *)v707;
    if ( !v707 || *(_BYTE *)v707 != 4 )
      goto LABEL_1041;
    v810.m256i_i64[0] = 0;
    *(_OWORD *)&v810.m256i_u64[1] = 8u;
    v861.m256i_i64[0] = 0;
    *(_OWORD *)&v861.m256i_u64[1] = 8u;
    v709 = *(_QWORD *)(v707 + 16);
    v710 = v708[3];
    v708[3] = 0;
    v711 = v709 + 32 * v710;
    v898.m256i_i64[0] = v709;
    v898.m256i_i64[1] = v711;
    v870 = (unsigned __int64)(v708 + 1);
    v898.m256i_i64[2] = (__int64)(v708 + 1);
    v898.m256i_i64[3] = v710;
    v899.m256i_i64[0] = 0;
    if ( v709 != v711 )
    {
      do
      {
        while ( 1 )
        {
          v715 = v709 + 32;
          v898.m256i_i64[0] = v709 + 32;
          v716 = *(_OWORD *)(v709 + 16);
          v773 = _mm_loadu_si128((const __m128i *)v709);
          v774 = v716;
          *(_OWORD *)&v885.m256i_u64[2] = v716;
          *(__m128i *)v885.m256i_i8 = v773;
          v894 = 1;
          v717 = sub_1416419F0(
                   "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemper"
                   "aturemax_tokensstreamdoubaoreasoning_effortnone",
                   4,
                   &v885);
          if ( v717 )
          {
            if ( *(_BYTE *)v717 == 3
              && *(_QWORD *)(v717 + 24) == 6
              && !(**(_DWORD **)(v717 + 16) ^ 0x74737973 | *(unsigned __int16 *)(*(_QWORD *)(v717 + 16) + 4LL) ^ 0x6D65) )
            {
              break;
            }
          }
          v718 = v861.m256i_i64[2];
          if ( v861.m256i_i64[2] == v861.m256i_i64[0] )
            sub_14190F570(&v861);
          v712 = v861.m256i_i64[1];
          v713 = 32 * v718;
          v714 = _mm_load_si128(&v773);
          *(_OWORD *)(v861.m256i_i64[1] + v713 + 16) = v774;
          *(__m128i *)(v712 + v713) = v714;
          v861.m256i_i64[2] = v718 + 1;
          v709 = v715;
          if ( v715 == v711 )
            goto LABEL_1006;
        }
        v894 = 1;
        v719 = sub_1416419F0(
                 "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tok"
                 "ensstreamdoubaoreasoning_effortnone",
                 7,
                 &v885);
        if ( v719 )
        {
          if ( *(_BYTE *)v719 == 3 )
          {
            v721 = *(__m128i **)(v719 + 24);
            if ( v721 )
            {
              if ( (__int64)v721 < 0 )
              {
                v740 = 0;
                goto LABEL_1020;
              }
              v901 = *(_QWORD *)(v719 + 16);
              nullsub_1(v720);
              v722 = (__m128i *)sub_140001650(v721, 1);
              if ( !v722 )
              {
                v907 = (__int64)v721;
                v740 = 1;
LABEL_1020:
                v894 = 1;
                sub_141938D2B(v740, v907);
              }
              v907 = (__int64)v722;
              v723 = (const __m128i *)v901;
              v901 = (__int64)v721;
              sub_1418F44E0(v722, v723, (unsigned __int64)v721);
              v724 = v810.m256i_i64[2];
              if ( v810.m256i_i64[2] == v810.m256i_i64[0] )
                sub_14190FDC0(&v810);
              v725 = v810.m256i_i64[1];
              v726 = 3 * v724;
              v727 = v901;
              *(_QWORD *)(v810.m256i_i64[1] + 8 * v726) = v901;
              *(_QWORD *)(v725 + 8 * v726 + 8) = v907;
              *(_QWORD *)(v725 + 8 * v726 + 16) = v727;
              v810.m256i_i64[2] = v724 + 1;
            }
          }
        }
        sub_14002F9D0(&v885);
        v709 = v715;
      }
      while ( v715 != v711 );
    }
LABEL_1006:
    v896 = 1;
    sub_140C9C180(&v898);
    if ( v810.m256i_i64[2] )
    {
      v892.m128i_i64[0] = 0;
      *(_QWORD *)&v893 = 0;
      nullsub_1(v728);
      v729 = (_DWORD *)sub_140001650(4, 1);
      if ( !v729 )
        sub_141938D2B(1, 4);
      *v729 = 1701605234;
      v887.m256i_i64[0] = 4;
      v887.m256i_i64[1] = (__int64)v729;
      v887.m256i_i64[2] = 4;
      nullsub_1(v730);
      v731 = (__m128i *)sub_140001650(6, 1);
      v907 = (__int64)v731;
      if ( !v731 )
        sub_141938D2B(1, 6);
      v731->m128i_i16[2] = 28005;
      v731->m128i_i32[0] = 1953724787;
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = 6;
      v898.m256i_i64[2] = (__int64)v731;
      v898.m256i_i64[3] = 6;
      sub_140E72AA0(&v885, &v892, &v887, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v732);
      v733 = sub_140001650(7, 1);
      if ( !v733 )
        sub_141938D2B(1, 7);
      *(_DWORD *)(v733 + 3) = 1953391988;
      *(_DWORD *)v733 = 1953394531;
      v887.m256i_i64[0] = 7;
      v907 = v733;
      v887.m256i_i64[1] = v733;
      v887.m256i_i64[2] = 7;
      sub_140D1EE10((unsigned int)&v898, v810.m256i_i32[2], v810.m256i_i32[4], (unsigned int)&unk_1419E8418, 2);
      v735 = *(_OWORD *)&v898.m256i_u64[1];
      v901 = v898.m256i_i64[1];
      v907 = v898.m256i_i64[0];
      if ( v898.m256i_i64[2] < 0 )
      {
        v736 = 0;
        goto LABEL_1014;
      }
      if ( v898.m256i_i64[2] )
      {
        nullsub_1(v734);
        v736 = 1;
        v738 = (__m128i *)sub_140001650(*((_QWORD *)&v735 + 1), 1);
        if ( !v738 )
        {
LABEL_1014:
          v823 = 1;
          sub_141938D2B(v736, *((_QWORD *)&v735 + 1));
        }
        v739 = (__int64)v738;
        sub_1418F44E0(v738, (const __m128i *)v735, *((unsigned __int64 *)&v735 + 1));
      }
      else
      {
        v739 = 1;
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = *((_QWORD *)&v735 + 1);
      v898.m256i_i64[2] = v739;
      v898.m256i_i64[3] = *((_QWORD *)&v735 + 1);
      v823 = 0;
      sub_140E72AA0(&v885, &v892, &v887, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      if ( v907 )
        sub_140001660(v901, v907, 1);
      *(__m128i *)&v898.m256i_u64[1] = _mm_loadu_si128(&v892);
      v898.m256i_i64[3] = v893;
      v898.m256i_i8[0] = 5;
      v741 = v708[3];
      if ( v741 == v708[1] )
        sub_14190F570(v870);
      v742 = v708[2];
      v743 = 32 * v741;
      v744 = _mm_loadu_si128((const __m128i *)&v898);
      *(_OWORD *)(v742 + v743 + 16) = *(_OWORD *)&v898.m256i_u64[2];
      *(__m128i *)(v742 + v743) = v744;
      v737 = v741 + 1;
      v708[3] = v737;
    }
    else
    {
      v737 = v708[3];
    }
    v745 = *(_OWORD *)v861.m256i_i8;
    v746 = v861.m256i_i64[2];
    v747 = 32 * v861.m256i_i64[2];
    v898.m256i_i64[0] = v861.m256i_i64[1];
    v898.m256i_i64[1] = v861.m256i_i64[1];
    v898.m256i_i64[2] = v861.m256i_i64[0];
    v898.m256i_i64[3] = v861.m256i_i64[1] + 32 * v861.m256i_i64[2];
    if ( v861.m256i_i64[2] > (unsigned __int64)(*(_QWORD *)v870 - v737) )
    {
      sub_14190D590(v870, v737, v861.m256i_i32[4], 8, 32);
      v737 = v708[3];
    }
    else if ( !v861.m256i_i64[2] )
    {
LABEL_1032:
      v708[3] = v746 + v737;
      if ( (_QWORD)v745 )
        sub_140001660(*((_QWORD *)&v745 + 1), 32 * v745, 8);
      v748 = v810.m256i_i64[2];
      if ( v810.m256i_i64[2] )
      {
        v749 = (_QWORD *)(v810.m256i_i64[1] + 8);
        do
        {
          v750 = *(v749 - 1);
          if ( v750 )
            sub_140001660(*v749, v750, 1);
          v749 += 3;
          --v748;
        }
        while ( v748 );
      }
      if ( v810.m256i_i64[0] )
        sub_140001660(v810.m256i_i64[1], 24 * v810.m256i_i64[0], 8);
LABEL_1041:
      v751 = _mm_loadu_si128((const __m128i *)&v805);
      v752 = _mm_loadu_si128((const __m128i *)&v806.m128i_u64[1]);
      *(__m128i *)&v898.m256i_u64[2] = v752;
      *(__m128i *)v898.m256i_i8 = v751;
      v753 = *(__m128i *)v815.m256i_i8;
      v754 = *(__m128i *)&v815.m256i_u64[2];
      v899 = v815;
      v900 = v816;
      v755 = (__m128i *)v793;
      *(_OWORD *)(v793 + 64) = v816;
      v755[3] = v754;
      v755[2] = v753;
      v755[1] = v752;
      *v755 = v751;
      if ( v809 )
        sub_140001660(v871, v809, 1);
      v756 = v818;
      v907 = v819;
      v870 = 0;
      v809 = v818;
      while ( v907 != v870 )
      {
        ++v870;
        v757 = v756 + 32;
        sub_1403880E0(v756);
        v756 = v757;
      }
      goto LABEL_1063;
    }
    sub_1418F44E0((__m128i *)(v708[2] + 32 * v737), *((const __m128i **)&v745 + 1), v747);
    goto LABEL_1032;
  }
  v6 = *(_QWORD *)(v36 + 16);
  v38 = v6 + 32LL * *(_QWORD *)(v36 + 24);
  v39 = -1;
  v40 = _mm_load_si128((const __m128i *)&xmmword_14193C200);
  v41 = _mm_cvtsi32_si128(0x74757074u);
  v42 = _mm_load_si128((const __m128i *)&xmmword_1419D3770);
  v43 = _mm_load_si128((const __m128i *)&xmmword_1419D3750);
  while ( 1 )
  {
LABEL_39:
    v44 = v39;
    if ( v6 == v38 )
    {
      if ( v39 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v37, v39, 1);
      goto LABEL_382;
    }
    v45 = (const __m128i *)v6;
    v907 = (__int64)v37;
    v859 = v39;
    v46 = sub_1416419F0(aType_4, 4, v6);
    v6 += 32;
    v37 = (__m128i *)v907;
    v39 = v44;
    if ( v46 )
    {
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( *(_BYTE *)v46 == 3 )
        break;
    }
  }
  v47 = *(_QWORD *)(v46 + 24);
  v48 = *(_QWORD *)(v46 + 16);
  v901 = v44;
  switch ( v47 )
  {
    case 7LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( *(_DWORD *)v48 ^ 0x7373656D | *(_DWORD *)(v48 + 3) ^ 0x65676173 )
        goto LABEL_39;
      v859 = v44;
      v49 = sub_1416419F0(
              "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperature"
              "max_tokensstreamdoubaoreasoning_effortnone",
              4,
              v45);
      v5 = 4;
      if ( v49 )
      {
        v50 = (__m128i *)"usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
        v51 = v901;
        if ( *(_BYTE *)v49 == 3 )
        {
          v50 = *(__m128i **)(v49 + 16);
          v5 = *(_QWORD *)(v49 + 24);
          if ( v5 == 9 )
          {
            v5 = 3LL * ((v50->m128i_i64[0] ^ 0x65706F6C65766564LL | v50->m128i_u8[8] ^ 0x72LL) != 0) + 6;
            if ( !(v50->m128i_i64[0] ^ 0x65706F6C65766564LL | v50->m128i_u8[8] ^ 0x72LL) )
              v50 = (__m128i *)"systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。us"
                               "ertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
          }
        }
      }
      else
      {
        v50 = (__m128i *)"usertemperaturemax_tokensstreamdoubaoreasoning_effortnone";
        v51 = v901;
      }
      v859 = v51;
      v105 = (unsigned __int8 *)sub_1416419F0(
                                  "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usert"
                                  "emperaturemax_tokensstreamdoubaoreasoning_effortnone",
                                  7,
                                  v45);
      v859 = v51;
      sub_141041550((__int64)&v898, v105, v50, v5);
      if ( v898.m256i_i8[0] == -1 )
      {
        v760 = (_BYTE *)v793;
        *(__m128i *)(v793 + 8) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[1]);
        *v760 = -1;
        v761 = v901;
        goto LABEL_1060;
      }
      v887.m256i_i32[1] = v898.m256i_i32[1];
      *(__int32 *)((char *)v887.m256i_i32 + 1) = *(__int32 *)((char *)v898.m256i_i32 + 1);
      v106 = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
      v887.m256i_i8[0] = v898.m256i_i8[0];
      v887.m256i_i64[1] = v898.m256i_i64[1];
      *(__m128i *)&v887.m256i_u64[2] = v106;
      if ( v898.m256i_i8[0] )
      {
        v861.m256i_i64[0] = 0;
        v861.m256i_i64[2] = 0;
        nullsub_1(v898.m256i_i64[1]);
        v107 = (_DWORD *)sub_140001650(4, 1);
        if ( !v107 )
          sub_141938D2B(1, 4);
        *v107 = 1701605234;
        v892.m128i_i64[0] = 4;
        v892.m128i_i64[1] = (__int64)v107;
        *(_QWORD *)&v893 = 4;
        if ( v5 < 0 )
        {
          v109 = 0;
LABEL_420:
          v842 = 1;
          sub_141938D2B(v109, v5);
        }
        if ( v5 )
        {
          nullsub_1(v108);
          v109 = 1;
          v110 = (__m128i *)sub_140001650(v5, 1);
          if ( !v110 )
            goto LABEL_420;
          v111 = (__int64)v110;
          sub_1418F44E0(v110, v50, v5);
        }
        else
        {
          v111 = 1;
        }
        v898.m256i_i8[0] = 3;
        v898.m256i_i64[1] = v5;
        v898.m256i_i64[2] = v111;
        v898.m256i_i64[3] = v5;
        v842 = 0;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        nullsub_1(v161);
        v162 = (_DWORD *)sub_140001650(7, 1);
        if ( !v162 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v162 + 3) = 1953391988;
        *v162 = 1953394531;
        v892.m128i_i64[0] = 7;
        v892.m128i_i64[1] = (__int64)v162;
        *(_QWORD *)&v893 = 7;
        v877 = 1;
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E85F0);
        }
        v163 = _mm_loadu_si128((const __m128i *)&v898);
        *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)v885.m256i_i8 = v163;
        v877 = 0;
        sub_140E72AA0(&v898, &v861, &v892, &v885);
        if ( v898.m256i_i8[0] != -1 )
          sub_14002F9D0(&v898);
        v815.m256i_i64[3] = v861.m256i_i64[2];
        *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
        v815.m256i_i8[0] = 5;
        if ( v5 == 9 && !(v50->m128i_i64[0] ^ 0x6E61747369737361LL | v50->m128i_u8[8] ^ 0x74LL) )
        {
          if ( v901 == -1 )
          {
            v901 = -1;
          }
          else
          {
            v898.m256i_i64[2] = v907;
            v898.m256i_i64[3] = v788;
            v898.m256i_i64[1] = v901;
            v898.m256i_i8[0] = 3;
            v841 = 1;
            v871 = sub_141641AF0(aReasoningConte, 17, &v815);
            sub_14002F9D0(v871);
            v901 = -1;
            v198 = _mm_loadu_si128((const __m128i *)&v898);
            v199 = (_OWORD *)v871;
            *(__m128i *)(v871 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
            *v199 = v198;
          }
        }
        *(__m128i *)&v898.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
        v898.m256i_i8[0] = v815.m256i_i8[0];
        *(__int64 *)((char *)v898.m256i_i64 + 1) = *(__int64 *)((char *)v815.m256i_i64 + 1);
        *(__int32 *)((char *)&v898.m256i_i32[2] + 1) = *(__int32 *)((char *)&v815.m256i_i32[2] + 1);
        *(__int16 *)((char *)&v898.m256i_i16[6] + 1) = *(__int16 *)((char *)&v815.m256i_i16[6] + 1);
        v898.m256i_i8[15] = v815.m256i_i8[15];
        v270 = v819;
        if ( (__m128i *)v819 == v817 )
          sub_14190F570(&v817);
        v271 = v818;
        v272 = 32 * v270;
        v273 = _mm_load_si128((const __m128i *)&v898);
        *(__m128i *)(v818 + v272 + 16) = _mm_load_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)(v271 + v272) = v273;
        v819 = v270 + 1;
        v859 = v901;
        sub_14002F9D0(&v887);
        v37 = (__m128i *)v907;
        v39 = v901;
      }
      else
      {
        if ( v5 == 9 && !(v50->m128i_i64[0] ^ 0x6E61747369737361LL | v50->m128i_u8[8] ^ 0x74LL) )
        {
          v130 = -1;
          if ( v901 != -1 )
          {
            v810.m256i_i64[0] = v901;
            v810.m256i_i64[1] = v907;
            v810.m256i_i64[2] = v788;
            v861.m256i_i64[0] = 0;
            v861.m256i_i64[2] = 0;
            nullsub_1(0);
            v164 = (_DWORD *)sub_140001650(4, 1);
            if ( !v164 )
              sub_141938D2B(1, 4);
            *v164 = 1701605234;
            v892.m128i_i64[0] = 4;
            v892.m128i_i64[1] = (__int64)v164;
            *(_QWORD *)&v893 = 4;
            v880 = 1;
            sub_14040FB10(&v898, &off_1419E6108);
            if ( v898.m256i_i8[0] == -1 )
            {
              v885.m256i_i64[0] = v898.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v885,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E85D8);
            }
            v165 = _mm_loadu_si128((const __m128i *)&v898);
            *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
            *(__m128i *)v885.m256i_i8 = v165;
            v880 = 0;
            sub_140E72AA0(&v898, &v861, &v892, &v885);
            if ( v898.m256i_i8[0] != -1 )
              sub_14002F9D0(&v898);
            nullsub_1(v166);
            v167 = (_DWORD *)sub_140001650(7, 1);
            if ( !v167 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v167 + 3) = 1953391988;
            *v167 = 1953394531;
            v892.m128i_i64[0] = 7;
            v892.m128i_i64[1] = (__int64)v167;
            *(_QWORD *)&v893 = 7;
            v879 = 1;
            sub_140412420(&v898, &unk_1419E7C48);
            if ( v898.m256i_i8[0] == -1 )
            {
              v885.m256i_i64[0] = v898.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v885,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E85D8);
            }
            v168 = _mm_loadu_si128((const __m128i *)&v898);
            *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
            *(__m128i *)v885.m256i_i8 = v168;
            v879 = 0;
            sub_140E72AA0(&v898, &v861, &v892, &v885);
            if ( v898.m256i_i8[0] != -1 )
              sub_14002F9D0(&v898);
            nullsub_1(v169);
            v170 = (__m128i *)sub_140001650(17, 1);
            if ( !v170 )
              sub_141938D2B(1, 17);
            *v170 = _mm_loadu_si128((const __m128i *)aReasoningConte);
            v170[1].m128i_i8[0] = 116;
            v892.m128i_i64[0] = 17;
            v892.m128i_i64[1] = (__int64)v170;
            *(_QWORD *)&v893 = 17;
            v878 = 1;
            sub_14040F9F0(&v898, &v810);
            if ( v898.m256i_i8[0] == -1 )
            {
              v885.m256i_i64[0] = v898.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v885,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E85D8);
            }
            v171 = _mm_loadu_si128((const __m128i *)&v898);
            *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
            *(__m128i *)v885.m256i_i8 = v171;
            v878 = 0;
            sub_140E72AA0(&v898, &v861, &v892, &v885);
            if ( v898.m256i_i8[0] != -1 )
              sub_14002F9D0(&v898);
            v815.m256i_i64[3] = v861.m256i_i64[2];
            *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
            v815.m256i_i8[0] = 5;
            v172 = v819;
            if ( (__m128i *)v819 == v817 )
              sub_14190F570(&v817);
            v173 = v818;
            v174 = 32 * v172;
            v175 = _mm_loadu_si128((const __m128i *)&v815);
            *(__m128i *)(v818 + v174 + 16) = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
            *(__m128i *)(v173 + v174) = v175;
            v819 = v172 + 1;
            if ( v901 )
              sub_140001660(v907, v901, 1);
            v130 = -1;
          }
        }
        else
        {
          v130 = v901;
        }
        v131 = v130;
        v859 = v130;
        sub_14002F9D0(&v887);
        v37 = (__m128i *)v907;
        v39 = v131;
      }
      goto LABEL_39;
    case 9LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( !(*(_QWORD *)v48 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v48 + 8) ^ 0x67LL) )
      {
        v859 = v44;
        v65 = sub_1416419F0(aSummary, 7, v45);
        v37 = (__m128i *)v907;
        v39 = v44;
        if ( v65 )
        {
          v37 = (__m128i *)v907;
          v39 = v44;
          if ( *(_BYTE *)v65 == 4 )
          {
            v66 = *(_QWORD *)(v65 + 16);
            v67 = v66 + 32LL * *(_QWORD *)(v65 + 24);
            v859 = v44;
            sub_1403E0B90(&v885, v66, v67);
            v871 = v885.m256i_i64[1];
            sub_140D1F3D0((unsigned int)&v898, v885.m256i_i32[2], v885.m256i_i32[4], (unsigned int)&unk_1419E808A, 1);
            v68 = *(_OWORD *)v898.m256i_i8;
            v69 = v898.m256i_i64[2];
            if ( v885.m256i_i64[0] )
              sub_140001660(v871, 16 * v885.m256i_i64[0], 8);
            v5 = v907;
            v70 = v901;
            if ( v69 )
            {
              v788 = v69;
              v37 = *((__m128i **)&v68 + 1);
              v39 = v68;
              if ( (unsigned __int64)(v901 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                sub_140001660(v907, v901, 1);
                v788 = v69;
                v37 = *((__m128i **)&v68 + 1);
                v39 = v68;
              }
            }
            else
            {
              v37 = (__m128i *)v907;
              v39 = v901;
              if ( (_QWORD)v68 )
              {
                sub_140001660(*((_QWORD *)&v68 + 1), v68, 1);
                v37 = (__m128i *)v5;
                v39 = v70;
              }
            }
          }
        }
      }
      goto LABEL_39;
    case 13LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( *(_QWORD *)v48 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v48 + 5) ^ 0x6C6C61635F6E6F69LL )
        goto LABEL_39;
      v859 = v44;
      v56 = sub_1416419F0(aCallId, 7, v45);
      v58 = 12;
      if ( !v56 )
      {
        v59 = (const __m128i *)&unk_1419E8518;
        goto LABEL_107;
      }
      v59 = (const __m128i *)&unk_1419E8518;
      v57 = v901;
      if ( *(_BYTE *)v56 != 3 )
        goto LABEL_107;
      v58 = *(_QWORD *)(v56 + 24);
      if ( v58 < 0 )
      {
        v98 = 0;
        v319 = v808;
        goto LABEL_418;
      }
      if ( v58 )
      {
        v59 = *(const __m128i **)(v56 + 16);
LABEL_107:
        nullsub_1(v57);
        v98 = 1;
        v99 = (__m128i *)sub_140001650(v58, 1);
        if ( v99 )
        {
          v808 = (__int64)v99;
          v871 = v58;
          sub_1418F44E0(v99, v59, v58);
          v100 = 0;
          goto LABEL_109;
        }
        v319 = v58;
        v57 = v901;
LABEL_418:
        v859 = v57;
        sub_141938D2B(v98, v319);
      }
      v808 = 1;
      v100 = 1;
      v871 = 0;
LABEL_109:
      v782 = v901;
      v101 = sub_1416419F0(aName_2, 4, v45);
      v103 = 4;
      if ( v101 )
      {
        v104 = (const __m128i *)"tool";
        if ( *(_BYTE *)v101 == 3 )
        {
          v103 = *(_QWORD *)(v101 + 24);
          if ( v103 < 0 )
          {
            v138 = 0;
            v342 = v794;
            goto LABEL_477;
          }
          if ( !v103 )
          {
            v794 = 1;
            v140 = 1;
            v811 = nullptr;
            goto LABEL_160;
          }
          v104 = *(const __m128i **)(v101 + 16);
        }
      }
      else
      {
        v104 = (const __m128i *)"tool";
      }
      nullsub_1(v102);
      v138 = 1;
      v139 = (__m128i *)sub_140001650(v103, 1);
      if ( !v139 )
      {
        v342 = v103;
LABEL_477:
        v782 = v901;
        sub_141938D2B(v138, v342);
      }
      v794 = (__int64)v139;
      v811 = (_DWORD *)v103;
      sub_1418F44E0(v139, v104, v103);
      v140 = 0;
LABEL_160:
      v803 = v901;
      v141 = sub_1416419F0("argumentsephemeral", 9, v45);
      if ( v141 )
      {
        if ( *(_BYTE *)v141 == 3 )
        {
          v143 = *(_QWORD *)(v141 + 16);
          v144 = *(_QWORD *)(v141 + 24);
          v803 = v901;
          sub_1403101A0(&v815, v143, v144);
          v146 = (const __m128i *)v815.m256i_i64[1];
          v812 = v815.m256i_i64[0];
          v147 = v815.m256i_i64[2];
        }
        else
        {
          v803 = v901;
          sub_1402E2C00((__int64)&v898, (unsigned __int8 *)v141);
          sub_14029FA00(&v885, &v898);
          v146 = (const __m128i *)v885.m256i_i64[1];
          if ( v885.m256i_i64[0] == -1 )
          {
            v885.m256i_i64[0] = v885.m256i_i64[1];
            nullsub_1(v160);
            v200 = (__m128i *)sub_140001650(2, 1);
            if ( !v200 )
              sub_141938D2B(1, 2);
            v146 = v200;
            v200->m128i_i16[0] = 32123;
            v815.m256i_i64[0] = 2;
            v815.m256i_i64[1] = (__int64)v200;
            v815.m256i_i64[2] = 2;
            sub_14002F910(&v885);
            v147 = 2;
            v812 = 2;
          }
          else
          {
            v147 = v885.m256i_i64[2];
            v812 = v885.m256i_i64[0];
            *(_OWORD *)v815.m256i_i8 = *(_OWORD *)v885.m256i_i8;
            v815.m256i_i64[2] = v885.m256i_i64[2];
          }
          v803 = v901;
          sub_14002F9D0(&v898);
        }
      }
      else
      {
        nullsub_1(v142);
        v159 = (__m128i *)sub_140001650(2, 1);
        if ( !v159 )
        {
          v803 = v901;
          sub_141938D2B(1, 2);
        }
        v146 = v159;
        v159->m128i_i16[0] = 32123;
        v147 = 2;
        v812 = 2;
      }
      v798 = v146;
      v805 = 0;
      v806.m128i_i64[1] = 0;
      nullsub_1(v145);
      v201 = (_WORD *)sub_140001650(2, 1);
      if ( !v201 )
        sub_141938D2B(1, 2);
      *v201 = 25705;
      v815.m256i_i64[0] = 2;
      v815.m256i_i64[1] = (__int64)v201;
      v815.m256i_i64[2] = 2;
      v203 = 1;
      v84 = v100 == 0;
      v204 = (const __m128i *)v871;
      if ( v84 )
      {
        nullsub_1(v202);
        v205 = (__m128i *)sub_140001650(v204, 1);
        if ( !v205 )
        {
          v849 = 1;
          sub_141938D2B(1, v204);
        }
        v203 = (__int64)v205;
        sub_1418F44E0(v205, (const __m128i *)v808, (unsigned __int64)v204);
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = (__int64)v204;
      v898.m256i_i64[2] = v203;
      v898.m256i_i64[3] = (__int64)v204;
      v849 = 0;
      sub_140E72AA0(&v885, &v805, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v206);
      v207 = (_DWORD *)sub_140001650(4, 1);
      if ( !v207 )
        sub_141938D2B(1, 4);
      *v207 = 1701869940;
      v815.m256i_i64[0] = 4;
      v815.m256i_i64[1] = (__int64)v207;
      v815.m256i_i64[2] = 4;
      nullsub_1(v208);
      v209 = (__m128i *)sub_140001650(8, 1);
      v814 = v209;
      if ( !v209 )
        sub_141938D2B(1, 8);
      v209->m128i_i64[0] = 0x6E6F6974636E7566LL;
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = 8;
      v898.m256i_i64[2] = (__int64)v209;
      v898.m256i_i64[3] = 8;
      sub_140E72AA0(&v885, &v805, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v210);
      v211 = (_QWORD *)sub_140001650(8, 1);
      if ( !v211 )
        sub_141938D2B(1, 8);
      *v211 = 0x6E6F6974636E7566LL;
      v810.m256i_i64[0] = 8;
      v810.m256i_i64[1] = (__int64)v211;
      v810.m256i_i64[2] = 8;
      v861.m256i_i64[0] = 0;
      v861.m256i_i64[2] = 0;
      nullsub_1(0x6E6F6974636E7566LL);
      v212 = (_DWORD *)sub_140001650(4, 1);
      if ( !v212 )
        sub_141938D2B(1, 4);
      *v212 = 1701667182;
      v892.m128i_i64[0] = 4;
      v892.m128i_i64[1] = (__int64)v212;
      *(_QWORD *)&v893 = 4;
      v214 = 1;
      v84 = v140 == 0;
      v215 = (unsigned __int64)v811;
      if ( v84 )
      {
        nullsub_1(v213);
        v216 = (__m128i *)sub_140001650(v215, 1);
        if ( !v216 )
        {
          v848 = 1;
          sub_141938D2B(1, v215);
        }
        v214 = (__int64)v216;
        sub_1418F44E0(v216, (const __m128i *)v794, v215);
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = v215;
      v898.m256i_i64[2] = v214;
      v898.m256i_i64[3] = v215;
      v848 = 0;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v217);
      v218 = sub_140001650(9, 1);
      if ( !v218 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v218 = 0x746E656D75677261LL;
      *(_BYTE *)(v218 + 8) = 115;
      v892.m128i_i64[0] = 9;
      v892.m128i_i64[1] = v218;
      *(_QWORD *)&v893 = 9;
      if ( v147 < 0 )
      {
        v219 = 0;
LABEL_422:
        v847 = 1;
        sub_141938D2B(v219, v147);
      }
      if ( v147 )
      {
        nullsub_1(0x746E656D75677261LL);
        v219 = 1;
        v220 = (__m128i *)sub_140001650(v147, 1);
        if ( !v220 )
          goto LABEL_422;
        v221 = (__int64)v220;
        sub_1418F44E0(v220, v798, v147);
      }
      else
      {
        v221 = 1;
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = v147;
      v898.m256i_i64[2] = v221;
      v898.m256i_i64[3] = v147;
      v847 = 0;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      v815.m256i_i64[3] = v861.m256i_i64[2];
      *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
      v815.m256i_i8[0] = 5;
      v846 = 0;
      sub_140E72AA0(&v898, &v805, &v810, &v815);
      if ( v898.m256i_i8[0] != -1 )
        sub_14002F9D0(&v898);
      v222 = (__int64)v887.m256i_i64 + 1;
      v887.m256i_i64[3] = v806.m128i_i64[1];
      *(__m128i *)&v887.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v805);
      v887.m256i_i8[0] = 5;
      v223 = v788;
      v814 = (const __m128i *)v907;
      v224 = v901;
      if ( v901 == -1 )
      {
        v891 = 1;
        v225 = sub_1416419F0(aReasoningConte, 17, v45);
        v222 = (__int64)v862;
        v224 = -1;
        v223 = (__int64)v795;
        if ( v225 && *(_BYTE *)v225 == 3 )
        {
          v226 = *(_QWORD *)(v225 + 24);
          v814 = v862;
          if ( v226 )
          {
            v45 = *(const __m128i **)(v225 + 16);
            sub_14072C410((unsigned int)&v898, v226, 0, 1, 1);
            v224 = v898.m256i_i64[1];
            if ( v898.m256i_i32[0] == 1 )
            {
              v891 = 1;
              sub_141938D2B(v898.m256i_i64[1], v898.m256i_i64[2]);
            }
            v814 = (const __m128i *)v898.m256i_i64[2];
            sub_1418F44E0((__m128i *)v898.m256i_i64[2], v45, v226);
            v223 = v226;
          }
        }
        else
        {
          v814 = v862;
        }
      }
      v901 = v224;
      if ( !v819
        || (v222 = v818, v818 + 32 * v819 == 32)
        || (v906 = 1,
            v905 = 1,
            v227 = sub_1416419F0(
                     "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemp"
                     "eraturemax_tokensstreamdoubaoreasoning_effortnone",
                     4,
                     v818 + 32 * v819 - 32),
            v228 = v901,
            !v227)
        || *(_BYTE *)v227 != 3
        || *(_QWORD *)(v227 + 24) != 9
        || (v229 = *(_QWORD *)(v227 + 16),
            v222 = *(_QWORD *)v229 ^ 0x6E61747369737361LL,
            v222 | *(unsigned __int8 *)(v229 + 8) ^ 0x74LL) )
      {
        v861.m256i_i64[0] = 0;
        v861.m256i_i64[2] = 0;
        nullsub_1(v222);
        v230 = (_DWORD *)sub_140001650(4, 1);
        if ( !v230 )
          sub_141938D2B(1, 4);
        *v230 = 1701605234;
        v892.m128i_i64[0] = 4;
        v892.m128i_i64[1] = (__int64)v230;
        *(_QWORD *)&v893 = 4;
        nullsub_1(v231);
        v232 = sub_140001650(9, 1);
        v862 = (const __m128i *)v232;
        if ( !v232 )
          sub_141938D2B(1, 9);
        *(_QWORD *)v232 = 0x6E61747369737361LL;
        *(_BYTE *)(v232 + 8) = 116;
        v898.m256i_i8[0] = 3;
        v898.m256i_i64[1] = 9;
        v898.m256i_i64[2] = v232;
        v898.m256i_i64[3] = 9;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        nullsub_1(v233);
        v234 = (_DWORD *)sub_140001650(7, 1);
        if ( !v234 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v234 + 3) = 1953391988;
        *v234 = 1953394531;
        v892.m128i_i64[0] = 7;
        v892.m128i_i64[1] = (__int64)v234;
        *(_QWORD *)&v893 = 7;
        v881 = 1;
        sub_140412420(&v898, &unk_1419E7C48);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E85A8);
        }
        v235 = _mm_loadu_si128((const __m128i *)&v898);
        *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)v885.m256i_i8 = v235;
        v881 = 0;
        sub_140E72AA0(&v898, &v861, &v892, &v885);
        if ( v898.m256i_i8[0] != -1 )
          sub_14002F9D0(&v898);
        nullsub_1(v236);
        v237 = (void *)sub_140001650(10, 1);
        if ( !v237 )
          sub_141938D2B(1, 10);
        qmemcpy(v237, "tool_calls", 10);
        v892.m128i_i64[0] = 10;
        v892.m128i_i64[1] = (__int64)v237;
        *(_QWORD *)&v893 = 10;
        nullsub_1(0x6C61635F6C6F6F74LL);
        v862 = (const __m128i *)sub_140001650(32, 8);
        if ( !v862 )
        {
          v868 = 1;
          sub_141938D11(8, 32);
        }
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E85A8);
        }
        v238 = _mm_loadu_si128((const __m128i *)&v898);
        v239 = (__m128i *)v862;
        v862[1] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v239 = v238;
        v898.m256i_i64[1] = 1;
        v898.m256i_i64[2] = (__int64)v239;
        v898.m256i_i64[3] = 1;
        v898.m256i_i8[0] = 4;
        v868 = 0;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        v240 = v901;
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        v241 = v861.m256i_i32[4];
        v815.m256i_i64[3] = v861.m256i_i64[2];
        *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
        v815.m256i_i8[0] = 5;
        if ( v240 == -1 )
        {
          LOBYTE(v241) = 1;
          LODWORD(v862) = v241;
        }
        else
        {
          v898.m256i_i64[1] = v240;
          v898.m256i_i64[2] = (__int64)v814;
          v898.m256i_i64[3] = v223;
          v898.m256i_i8[0] = 3;
          v845 = 1;
          v862 = (const __m128i *)sub_141641AF0(aReasoningConte, 17, &v815);
          sub_14002F9D0(v862);
          v242 = _mm_loadu_si128((const __m128i *)&v898);
          v243 = (__m128i *)v862;
          v862[1] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
          *v243 = v242;
          LODWORD(v862) = 0;
        }
        v244 = _mm_loadu_si128((const __m128i *)&v815);
        *(__m128i *)&v898.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
        *(__m128i *)v898.m256i_i8 = v244;
        v245 = v819;
        if ( (__m128i *)v819 == v817 )
          sub_14190F570(&v817);
        v246 = v818;
        v247 = 32 * v245;
        v248 = _mm_load_si128((const __m128i *)&v898);
        *(__m128i *)(v818 + v247 + 16) = _mm_load_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)(v246 + v247) = v248;
        v819 = v245 + 1;
        v228 = v901;
        v5 = (__int64)v814;
        if ( (((unsigned __int64)(v901 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v862) != 0 )
LABEL_299:
          sub_140001660(v5, v228, 1);
LABEL_300:
        v787 = -1;
        sub_14002F9D0(&v887);
        goto LABEL_301;
      }
      if ( !v819 )
      {
        v5 = (__int64)v814;
        if ( (unsigned __int64)(v901 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_299;
        goto LABEL_300;
      }
      v274 = v818 + 32 * v819 - 32;
      v906 = 1;
      v905 = 1;
      v275 = sub_1416419F0("tool_callsYou have a web_search tool available.", 10, v274);
      if ( v275 && *(_BYTE *)v275 == 4 )
      {
        v277 = _mm_loadu_si128((const __m128i *)&v887);
        *(__m128i *)&v898.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v887.m256i_u64[2]);
        *(__m128i *)v898.m256i_i8 = v277;
        v45 = *(const __m128i **)(v275 + 24);
        if ( v45 == *(const __m128i **)(v275 + 8) )
        {
          v278 = v275;
          sub_14190F570(v275 + 8);
          v275 = v278;
        }
        v279 = *(_QWORD *)(v275 + 16);
        v280 = 32LL * (_QWORD)v45;
        v281 = _mm_load_si128((const __m128i *)&v898);
        *(__m128i *)(v279 + v280 + 16) = _mm_load_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)(v279 + v280) = v281;
        *(_QWORD *)(v275 + 24) = (char *)v45->m128i_i64 + 1;
        LODWORD(v45) = 0;
      }
      else
      {
        nullsub_1(v276);
        v862 = (const __m128i *)sub_140001650(32, 8);
        if ( !v862 )
        {
          v906 = 1;
          v905 = 1;
          sub_141938D11(8, 32);
        }
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E85C0);
        }
        v282 = _mm_loadu_si128((const __m128i *)&v898);
        v283 = (__m128i *)v862;
        v862[1] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v283 = v282;
        v898.m256i_i64[1] = 1;
        v898.m256i_i64[2] = (__int64)v283;
        v898.m256i_i64[3] = 1;
        v898.m256i_i8[0] = 4;
        v844 = 1;
        v862 = (const __m128i *)sub_141641AF0("tool_callsYou have a web_search tool available.", 10, v274);
        sub_14002F9D0(v862);
        v284 = _mm_loadu_si128((const __m128i *)&v898);
        v285 = (__m128i *)v862;
        v862[1] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v285 = v284;
        LOBYTE(v45) = 1;
      }
      v5 = (__int64)v814;
      if ( v901 != -1 )
      {
        LODWORD(v862) = (_DWORD)v45;
        v867 = 1;
        v286 = sub_1416419F0(aReasoningConte, 17, v274);
        if ( v286 && *(_BYTE *)v286 == 3 && *(_QWORD *)(v286 + 24) )
        {
          v5 = (__int64)v814;
          LOBYTE(v45) = (_BYTE)v862;
          if ( v901 )
            sub_140001660(v814, v901, 1);
        }
        else
        {
          v898.m256i_i64[1] = v901;
          v898.m256i_i64[2] = (__int64)v814;
          v898.m256i_i64[3] = v223;
          v898.m256i_i8[0] = 3;
          v843 = 1;
          v795 = (__m128i *)sub_141641AF0(aReasoningConte, 17, v274);
          sub_14002F9D0(v795);
          v296 = _mm_loadu_si128((const __m128i *)&v898);
          v297 = v795;
          v795[1] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
          *v297 = v296;
          v5 = (__int64)v814;
          LOBYTE(v45) = (_BYTE)v862;
        }
      }
      if ( (_BYTE)v45 )
        goto LABEL_300;
LABEL_301:
      if ( v812 )
        sub_140001660(v798, v812, 1);
      v249 = v907;
      v250 = v871;
      if ( v811 )
        sub_140001660(v794, v811, 1);
      v795 = (__m128i *)v223;
      v862 = (const __m128i *)v5;
      v37 = (__m128i *)v249;
      v39 = -1;
      if ( v250 )
      {
        sub_140001660(v808, v250, 1);
        v795 = (__m128i *)v223;
        v862 = (const __m128i *)v5;
        v37 = (__m128i *)v249;
        v39 = -1;
      }
      goto LABEL_39;
    case 16LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v48), v40)) != 0xFFFF )
        goto LABEL_39;
      v859 = v44;
      v60 = sub_1416419F0(aCallId, 7, v45);
      v62 = v44;
      if ( v60 && *(_BYTE *)v60 == 3 )
        goto LABEL_67;
      v859 = v44;
      v60 = sub_1416419F0(aId_1, 2, v45);
      v63 = 12;
      if ( v60 )
      {
        v64 = (const __m128i *)&unk_1419E8518;
        v62 = v901;
        if ( *(_BYTE *)v60 == 3 )
        {
LABEL_67:
          v63 = *(_QWORD *)(v60 + 24);
          if ( v63 < 0 )
          {
            v5 = 0;
            goto LABEL_412;
          }
          if ( !v63 )
          {
            v804 = 1;
            v133 = 1;
            v871 = 0;
            goto LABEL_152;
          }
          v64 = *(const __m128i **)(v60 + 16);
        }
      }
      else
      {
        v64 = (const __m128i *)&unk_1419E8518;
        v62 = v901;
      }
      nullsub_1(v61);
      v5 = 1;
      v132 = (__m128i *)sub_140001650(v63, 1);
      if ( !v132 )
      {
        v804 = v63;
LABEL_412:
        v859 = v62;
        sub_141938D2B(v5, v804);
      }
      v804 = (__int64)v132;
      v871 = v63;
      sub_1418F44E0(v132, v64, v63);
      v133 = 0;
LABEL_152:
      v134 = sub_1416419F0(aName_2, 4, v45);
      v136 = 4;
      if ( v134 )
      {
        v137 = (const __m128i *)"tool";
        if ( *(_BYTE *)v134 == 3 )
        {
          v136 = *(_QWORD *)(v134 + 24);
          if ( v136 < 0 )
          {
            v148 = 0;
            goto LABEL_481;
          }
          if ( !v136 )
          {
            v799 = 1;
            LOBYTE(v5) = 1;
            v811 = nullptr;
            goto LABEL_166;
          }
          v137 = *(const __m128i **)(v134 + 16);
        }
      }
      else
      {
        v137 = (const __m128i *)"tool";
      }
      nullsub_1(v135);
      v148 = 1;
      v149 = (__m128i *)sub_140001650(v136, 1);
      if ( !v149 )
      {
        v799 = v136;
LABEL_481:
        sub_141938D2B(v148, v799);
      }
      v799 = (__int64)v149;
      v811 = (_DWORD *)v136;
      sub_1418F44E0(v149, v137, v136);
      LODWORD(v5) = 0;
LABEL_166:
      v150 = sub_1416419F0(aInput_0, 5, v45);
      v152 = 1;
      if ( v150 && *(_BYTE *)v150 == 3 )
      {
        v152 = *(_QWORD *)(v150 + 16);
        v153 = *(_QWORD *)(v150 + 24);
      }
      else
      {
        v153 = 0;
      }
      v892.m128i_i64[0] = 0;
      *(_QWORD *)&v893 = 0;
      nullsub_1(v151);
      v154 = sub_140001650(5, 1);
      if ( !v154 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v154 + 4) = 116;
      *(_DWORD *)v154 = 1970302569;
      v887.m256i_i64[0] = 5;
      v887.m256i_i64[1] = v154;
      v887.m256i_i64[2] = 5;
      if ( v153 < 0 )
      {
        v156 = 0;
LABEL_479:
        v856 = 1;
        sub_141938D2B(v156, v153);
      }
      LODWORD(v812) = v5;
      if ( v153 )
      {
        nullsub_1(v155);
        v156 = 1;
        v157 = (__m128i *)sub_140001650(v153, 1);
        if ( !v157 )
          goto LABEL_479;
        v158 = (__int64)v157;
        sub_1418F44E0(v157, (const __m128i *)v152, v153);
      }
      else
      {
        v158 = 1;
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = v153;
      v898.m256i_i64[2] = v158;
      v898.m256i_i64[3] = v153;
      v856 = 0;
      sub_140E72AA0(&v885, &v892, &v887, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      v815.m256i_i64[3] = v893;
      *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128(&v892);
      v815.m256i_i8[0] = 5;
      v885.m256i_i64[0] = 0;
      *(_OWORD *)&v885.m256i_u64[1] = 1u;
      v898.m256i_i64[2] = 1610612768;
      v898.m256i_i64[0] = (__int64)&v885;
      v898.m256i_i64[1] = (__int64)&off_1419E98E0;
      if ( (unsigned __int8)sub_141642FA0(&v815, &v898) )
        sub_141939040(
          (unsigned int)aADisplayImplem_0,
          55,
          (unsigned int)&v802,
          (unsigned int)&unk_1419E6AE0,
          (__int64)&off_1419EB798);
      v814 = (const __m128i *)v885.m256i_i64[1];
      v798 = (const __m128i *)v885.m256i_i64[0];
      v176 = v885.m256i_i64[2];
      sub_14002F9D0(&v815);
      v805 = 0;
      v806.m128i_i64[1] = 0;
      nullsub_1(v177);
      v178 = (_WORD *)sub_140001650(2, 1);
      if ( !v178 )
        sub_141938D2B(1, 2);
      *v178 = 25705;
      v815.m256i_i64[0] = 2;
      v815.m256i_i64[1] = (__int64)v178;
      v815.m256i_i64[2] = 2;
      v180 = 1;
      v84 = v133 == 0;
      v181 = (const __m128i *)v871;
      if ( v84 )
      {
        nullsub_1(v179);
        v182 = (__m128i *)sub_140001650(v181, 1);
        if ( !v182 )
        {
          v855 = 1;
          sub_141938D2B(1, v181);
        }
        v180 = (__int64)v182;
        sub_1418F44E0(v182, (const __m128i *)v804, (unsigned __int64)v181);
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = (__int64)v181;
      v898.m256i_i64[2] = v180;
      v898.m256i_i64[3] = (__int64)v181;
      v855 = 0;
      sub_140E72AA0(&v885, &v805, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v183);
      v184 = (_DWORD *)sub_140001650(4, 1);
      if ( !v184 )
        sub_141938D2B(1, 4);
      *v184 = 1701869940;
      v815.m256i_i64[0] = 4;
      v815.m256i_i64[1] = (__int64)v184;
      v815.m256i_i64[2] = 4;
      nullsub_1(v185);
      v186 = (_QWORD *)sub_140001650(8, 1);
      v775 = v186;
      if ( !v186 )
        sub_141938D2B(1, 8);
      *v186 = 0x6E6F6974636E7566LL;
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = 8;
      v898.m256i_i64[2] = (__int64)v186;
      v898.m256i_i64[3] = 8;
      sub_140E72AA0(&v885, &v805, &v815, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v187);
      v188 = (_QWORD *)sub_140001650(8, 1);
      v5 = (unsigned int)v812;
      if ( !v188 )
        sub_141938D2B(1, 8);
      *v188 = 0x6E6F6974636E7566LL;
      v810.m256i_i64[0] = 8;
      v810.m256i_i64[1] = (__int64)v188;
      v810.m256i_i64[2] = 8;
      v861.m256i_i64[0] = 0;
      v861.m256i_i64[2] = 0;
      nullsub_1(0x6E6F6974636E7566LL);
      v189 = (_DWORD *)sub_140001650(4, 1);
      v191 = (unsigned __int64)v811;
      if ( !v189 )
        sub_141938D2B(1, 4);
      *v189 = 1701667182;
      v892.m128i_i64[0] = 4;
      v892.m128i_i64[1] = (__int64)v189;
      *(_QWORD *)&v893 = 4;
      v192 = 1;
      if ( !(_BYTE)v5 )
      {
        nullsub_1(v190);
        v193 = (__m128i *)sub_140001650(v191, 1);
        if ( !v193 )
        {
          v854 = 1;
          sub_141938D2B(1, v191);
        }
        v192 = (__int64)v193;
        sub_1418F44E0(v193, (const __m128i *)v799, v191);
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = v191;
      v898.m256i_i64[2] = v192;
      v898.m256i_i64[3] = v191;
      v854 = 0;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v194);
      v195 = sub_140001650(9, 1);
      if ( !v195 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v195 = 0x746E656D75677261LL;
      *(_BYTE *)(v195 + 8) = 115;
      v892.m128i_i64[0] = 9;
      v892.m128i_i64[1] = v195;
      *(_QWORD *)&v893 = 9;
      if ( v176 < 0 )
      {
        v5 = 0;
LABEL_1047:
        v853 = 1;
        sub_141938D2B(v5, v176);
      }
      if ( v176 )
      {
        nullsub_1(0x746E656D75677261LL);
        v5 = 1;
        v196 = (__m128i *)sub_140001650(v176, 1);
        if ( !v196 )
          goto LABEL_1047;
        v197 = (__int64)v196;
        sub_1418F44E0(v196, v814, v176);
      }
      else
      {
        v197 = 1;
      }
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = v176;
      v898.m256i_i64[2] = v197;
      v898.m256i_i64[3] = v176;
      v853 = 0;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      v815.m256i_i64[3] = v861.m256i_i64[2];
      *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
      v815.m256i_i8[0] = 5;
      v852 = 0;
      sub_140E72AA0(&v898, &v805, &v810, &v815);
      if ( v898.m256i_i8[0] != -1 )
        sub_14002F9D0(&v898);
      v251 = (__int64)v887.m256i_i64 + 1;
      v887.m256i_i64[3] = v806.m128i_i64[1];
      *(__m128i *)&v887.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v805);
      v887.m256i_i8[0] = 5;
      if ( !v819
        || (v251 = v818, v818 + 32 * v819 == 32)
        || (v902 = 1,
            (v252 = sub_1416419F0(
                      "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertem"
                      "peraturemax_tokensstreamdoubaoreasoning_effortnone",
                      4,
                      v818 + 32 * v819 - 32)) == 0)
        || *(_BYTE *)v252 != 3
        || *(_QWORD *)(v252 + 24) != 9
        || (v253 = *(_QWORD *)(v252 + 16),
            v251 = *(_QWORD *)v253 ^ 0x6E61747369737361LL,
            v251 | *(unsigned __int8 *)(v253 + 8) ^ 0x74LL) )
      {
        v861.m256i_i64[0] = 0;
        v861.m256i_i64[2] = 0;
        nullsub_1(v251);
        v254 = (_DWORD *)sub_140001650(4, 1);
        if ( !v254 )
          sub_141938D2B(1, 4);
        *v254 = 1701605234;
        v892.m128i_i64[0] = 4;
        v892.m128i_i64[1] = (__int64)v254;
        *(_QWORD *)&v893 = 4;
        nullsub_1(v255);
        v256 = sub_140001650(9, 1);
        v812 = v256;
        if ( !v256 )
          sub_141938D2B(1, 9);
        *(_QWORD *)v256 = 0x6E61747369737361LL;
        *(_BYTE *)(v256 + 8) = 116;
        v898.m256i_i8[0] = 3;
        v898.m256i_i64[1] = 9;
        v898.m256i_i64[2] = v256;
        v898.m256i_i64[3] = 9;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        nullsub_1(v257);
        v258 = (_DWORD *)sub_140001650(7, 1);
        if ( !v258 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v258 + 3) = 1953391988;
        *v258 = 1953394531;
        v892.m128i_i64[0] = 7;
        v892.m128i_i64[1] = (__int64)v258;
        *(_QWORD *)&v893 = 7;
        v883 = 1;
        sub_140412420(&v898, &unk_1419E7C48);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8560);
        }
        v259 = _mm_loadu_si128((const __m128i *)&v898);
        *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)v885.m256i_i8 = v259;
        v883 = 0;
        sub_140E72AA0(&v898, &v861, &v892, &v885);
        if ( v898.m256i_i8[0] != -1 )
          sub_14002F9D0(&v898);
        nullsub_1(v260);
        v261 = (void *)sub_140001650(10, 1);
        if ( !v261 )
          sub_141938D2B(1, 10);
        qmemcpy(v261, "tool_calls", 10);
        v892.m128i_i64[0] = 10;
        v892.m128i_i64[1] = (__int64)v261;
        *(_QWORD *)&v893 = 10;
        nullsub_1(0x6C61635F6C6F6F74LL);
        v812 = sub_140001650(32, 8);
        if ( !v812 )
        {
          v869 = 1;
          sub_141938D11(8, 32);
        }
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8560);
        }
        v262 = _mm_loadu_si128((const __m128i *)&v898);
        v263 = (_OWORD *)v812;
        *(__m128i *)(v812 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v263 = v262;
        v898.m256i_i64[1] = 1;
        v898.m256i_i64[2] = (__int64)v263;
        v898.m256i_i64[3] = 1;
        v898.m256i_i8[0] = 4;
        v869 = 0;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        v815.m256i_i64[3] = v861.m256i_i64[2];
        *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
        v815.m256i_i8[0] = 5;
        v264 = v819;
        if ( (__m128i *)v819 == v817 )
          sub_14190F570(&v817);
        v265 = v818;
        v266 = 32 * v264;
        v267 = _mm_loadu_si128((const __m128i *)&v815);
        *(__m128i *)(v818 + v266 + 16) = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
        *(__m128i *)(v265 + v266) = v267;
        v819 = v264 + 1;
        goto LABEL_334;
      }
      if ( !v819 )
        goto LABEL_334;
      v287 = v818 + 32 * v819 - 32;
      v902 = 1;
      v288 = sub_1416419F0("tool_callsYou have a web_search tool available.", 10, v287);
      v290 = v288;
      if ( !v288 || *(_BYTE *)v288 != 4 )
      {
        nullsub_1(v289);
        v812 = sub_140001650(32, 8);
        if ( !v812 )
        {
          v902 = 1;
          sub_141938D11(8, 32);
        }
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8578);
        }
        v298 = _mm_loadu_si128((const __m128i *)&v898);
        v299 = (_OWORD *)v812;
        *(__m128i *)(v812 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v299 = v298;
        v898.m256i_i64[1] = 1;
        v898.m256i_i64[2] = (__int64)v299;
        v898.m256i_i64[3] = 1;
        v898.m256i_i8[0] = 4;
        v851 = 1;
        v812 = sub_141641AF0("tool_callsYou have a web_search tool available.", 10, v287);
        sub_14002F9D0(v812);
        v300 = _mm_loadu_si128((const __m128i *)&v898);
        v301 = (_OWORD *)v812;
        *(__m128i *)(v812 + 16) = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *v301 = v300;
LABEL_334:
        sub_14002F9D0(&v887);
        v268 = v798;
        if ( !v798 )
          goto LABEL_336;
LABEL_335:
        sub_140001660(v814, v268, 1);
        goto LABEL_336;
      }
      v291 = _mm_loadu_si128((const __m128i *)&v887);
      *(__m128i *)&v898.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v887.m256i_u64[2]);
      *(__m128i *)v898.m256i_i8 = v291;
      v292 = *(_QWORD *)(v288 + 24);
      if ( v292 == *(_QWORD *)(v288 + 8) )
        sub_14190F570(v288 + 8);
      v293 = *(_QWORD *)(v290 + 16);
      v294 = 32 * v292;
      v295 = _mm_load_si128((const __m128i *)&v898);
      *(__m128i *)(v293 + v294 + 16) = _mm_load_si128((const __m128i *)&v898.m256i_u64[2]);
      *(__m128i *)(v293 + v294) = v295;
      *(_QWORD *)(v290 + 24) = v292 + 1;
      v268 = v798;
      if ( v798 )
        goto LABEL_335;
LABEL_336:
      v94 = v907;
      v95 = v901;
      v269 = v871;
      if ( v811 )
        sub_140001660(v799, v811, 1);
      v37 = (__m128i *)v94;
      v39 = v95;
      if ( !v269 )
        goto LABEL_39;
      v97 = v804;
      v96 = v269;
      goto LABEL_144;
    case 20LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v48 + 16)), v41),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v48), v42))) != 0xFFFF )
        goto LABEL_39;
      v859 = v44;
      v52 = sub_1416419F0(aCallId, 7, v45);
      v54 = 12;
      if ( v52 )
      {
        v55 = (const __m128i *)&unk_1419E8518;
        v53 = v901;
        if ( *(_BYTE *)v52 == 3 )
        {
          v54 = *(_QWORD *)(v52 + 24);
          if ( v54 < 0 )
          {
            v5 = 0;
            v317 = v820;
            goto LABEL_414;
          }
          if ( !v54 )
          {
            v820 = 1;
            v76 = 1;
            v871 = 0;
            goto LABEL_87;
          }
          v55 = *(const __m128i **)(v52 + 16);
        }
      }
      else
      {
        v55 = (const __m128i *)&unk_1419E8518;
      }
      nullsub_1(v53);
      v5 = 1;
      v75 = (__m128i *)sub_140001650(v54, 1);
      if ( !v75 )
      {
        v317 = v54;
        v53 = v901;
LABEL_414:
        v859 = v53;
        sub_141938D2B(v5, v317);
      }
      v820 = (__int64)v75;
      v871 = v54;
      sub_1418F44E0(v75, v55, v54);
      v76 = 0;
LABEL_87:
      v77 = sub_1416419F0(aOutput_1, 6, v45);
      sub_141041430(&v898, v77);
      if ( v898.m256i_i8[0] == -1 )
      {
        v763 = (_BYTE *)v793;
        *(_OWORD *)(v793 + 8) = *(_OWORD *)&v898.m256i_u64[1];
        *v763 = -1;
        v764 = v871;
        v761 = v901;
        if ( v871 )
        {
          v765 = v820;
          goto LABEL_1059;
        }
        goto LABEL_1060;
      }
      v887.m256i_i32[1] = v898.m256i_i32[1];
      *(__int32 *)((char *)v887.m256i_i32 + 1) = *(__int32 *)((char *)v898.m256i_i32 + 1);
      v78 = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
      v887.m256i_i8[0] = v898.m256i_i8[0];
      v887.m256i_i64[1] = v898.m256i_i64[1];
      *(__m128i *)&v887.m256i_u64[2] = v78;
      v861.m256i_i64[0] = 0;
      v861.m256i_i64[2] = 0;
      nullsub_1(v898.m256i_i64[1]);
      v79 = (_DWORD *)sub_140001650(4, 1);
      if ( !v79 )
        sub_141938D2B(1, 4);
      *v79 = 1701605234;
      v892.m128i_i64[0] = 4;
      v892.m128i_i64[1] = (__int64)v79;
      *(_QWORD *)&v893 = 4;
      nullsub_1(v80);
      v81 = (_DWORD *)sub_140001650(4, 1);
      v811 = v81;
      if ( !v81 )
        sub_141938D2B(1, 4);
      *v81 = 1819242356;
      v898.m256i_i8[0] = 3;
      v898.m256i_i64[1] = 4;
      v898.m256i_i64[2] = (__int64)v81;
      v898.m256i_i64[3] = 4;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v82);
      v83 = (void *)sub_140001650(12, 1);
      if ( !v83 )
        sub_141938D2B(1, 12);
      qmemcpy(v83, "tool_call_id", 12);
      v892.m128i_i64[0] = 12;
      v892.m128i_i64[1] = (__int64)v83;
      *(_QWORD *)&v893 = 12;
      *((_QWORD *)&v85 + 1) = 1;
      v84 = v76 == 0;
      *(_QWORD *)&v85 = v871;
      if ( v84 )
      {
        nullsub_1(0x6C61635F6C6F6F74LL);
        v86 = (__m128i *)sub_140001650(v85, 1);
        if ( !v86 )
        {
          v850 = 1;
          sub_141938D2B(1, v85);
        }
        *((_QWORD *)&v85 + 1) = v86;
        sub_1418F44E0(v86, (const __m128i *)v820, v85);
      }
      v898.m256i_i8[0] = 3;
      *(_OWORD *)&v898.m256i_u64[1] = v85;
      v898.m256i_i64[3] = v85;
      v850 = 0;
      sub_140E72AA0(&v885, &v861, &v892, &v898);
      if ( v885.m256i_i8[0] != -1 )
        sub_14002F9D0(&v885);
      nullsub_1(v87);
      v88 = (_DWORD *)sub_140001650(7, 1);
      if ( !v88 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v88 + 3) = 1953391988;
      *v88 = 1953394531;
      v892.m128i_i64[0] = 7;
      v892.m128i_i64[1] = (__int64)v88;
      *(_QWORD *)&v893 = 7;
      v882 = 1;
      sub_140412420(&v898, &v887);
      if ( v898.m256i_i8[0] == -1 )
      {
        v885.m256i_i64[0] = v898.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)&v885,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E8590);
      }
      v89 = _mm_loadu_si128((const __m128i *)&v898);
      *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
      *(__m128i *)v885.m256i_i8 = v89;
      v882 = 0;
      sub_140E72AA0(&v898, &v861, &v892, &v885);
      if ( v898.m256i_i8[0] != -1 )
        sub_14002F9D0(&v898);
      v815.m256i_i64[3] = v861.m256i_i64[2];
      *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
      v815.m256i_i8[0] = 5;
      v90 = v819;
      if ( (__m128i *)v819 == v817 )
        sub_14190F570(&v817);
      v91 = v818;
      v92 = 32 * v90;
      v93 = _mm_loadu_si128((const __m128i *)&v815);
      *(__m128i *)(v818 + v92 + 16) = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
      *(__m128i *)(v91 + v92) = v93;
      v819 = v90 + 1;
      sub_14002F9D0(&v887);
      v94 = v907;
      v37 = (__m128i *)v907;
      v95 = v901;
      v39 = v901;
      v96 = v871;
      if ( v871 )
      {
        v97 = v820;
        goto LABEL_144;
      }
      goto LABEL_39;
    case 23LL:
      v37 = (__m128i *)v907;
      v39 = v44;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v48), v40),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v48 + 7)), v43))) != 0xFFFF )
        goto LABEL_39;
      v859 = v44;
      v71 = sub_1416419F0(aCallId, 7, v45);
      v73 = 12;
      if ( !v71 )
      {
        v74 = (const __m128i *)&unk_1419E8518;
        goto LABEL_123;
      }
      v74 = (const __m128i *)&unk_1419E8518;
      v72 = v901;
      if ( *(_BYTE *)v71 != 3 )
        goto LABEL_123;
      v73 = *(_QWORD *)(v71 + 24);
      if ( v73 < 0 )
      {
        v5 = 0;
        v318 = v813;
        goto LABEL_416;
      }
      if ( v73 )
      {
        v74 = *(const __m128i **)(v71 + 16);
LABEL_123:
        nullsub_1(v72);
        v5 = 1;
        v112 = (__m128i *)sub_140001650(v73, 1);
        if ( v112 )
        {
          v813 = (__int64)v112;
          v871 = v73;
          sub_1418F44E0(v112, v74, v73);
          v113 = 0;
          goto LABEL_125;
        }
        v318 = v73;
        v72 = v901;
LABEL_416:
        v859 = v72;
        sub_141938D2B(v5, v318);
      }
      v813 = 1;
      v113 = 1;
      v871 = 0;
LABEL_125:
      v114 = sub_1416419F0(aOutput_1, 6, v45);
      sub_141041430(&v898, v114);
      if ( v898.m256i_i8[0] != -1 )
      {
        v887.m256i_i32[1] = v898.m256i_i32[1];
        *(__int32 *)((char *)v887.m256i_i32 + 1) = *(__int32 *)((char *)v898.m256i_i32 + 1);
        v115 = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        v887.m256i_i8[0] = v898.m256i_i8[0];
        v887.m256i_i64[1] = v898.m256i_i64[1];
        *(__m128i *)&v887.m256i_u64[2] = v115;
        v861.m256i_i64[0] = 0;
        v861.m256i_i64[2] = 0;
        nullsub_1(v898.m256i_i64[1]);
        v116 = (_DWORD *)sub_140001650(4, 1);
        if ( !v116 )
          sub_141938D2B(1, 4);
        *v116 = 1701605234;
        v892.m128i_i64[0] = 4;
        v892.m128i_i64[1] = (__int64)v116;
        *(_QWORD *)&v893 = 4;
        nullsub_1(v117);
        v118 = (_DWORD *)sub_140001650(4, 1);
        v811 = v118;
        if ( !v118 )
          sub_141938D2B(1, 4);
        *v118 = 1819242356;
        v898.m256i_i8[0] = 3;
        v898.m256i_i64[1] = 4;
        v898.m256i_i64[2] = (__int64)v118;
        v898.m256i_i64[3] = 4;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        nullsub_1(v119);
        v120 = (void *)sub_140001650(12, 1);
        if ( !v120 )
          sub_141938D2B(1, 12);
        qmemcpy(v120, "tool_call_id", 12);
        v892.m128i_i64[0] = 12;
        v892.m128i_i64[1] = (__int64)v120;
        *(_QWORD *)&v893 = 12;
        *((_QWORD *)&v121 + 1) = 1;
        v84 = v113 == 0;
        *(_QWORD *)&v121 = v871;
        if ( v84 )
        {
          nullsub_1(0x6C61635F6C6F6F74LL);
          v122 = (__m128i *)sub_140001650(v121, 1);
          if ( !v122 )
          {
            v857 = 1;
            sub_141938D2B(1, v121);
          }
          *((_QWORD *)&v121 + 1) = v122;
          sub_1418F44E0(v122, (const __m128i *)v813, v121);
        }
        v898.m256i_i8[0] = 3;
        *(_OWORD *)&v898.m256i_u64[1] = v121;
        v898.m256i_i64[3] = v121;
        v857 = 0;
        sub_140E72AA0(&v885, &v861, &v892, &v898);
        if ( v885.m256i_i8[0] != -1 )
          sub_14002F9D0(&v885);
        nullsub_1(v123);
        v124 = (_DWORD *)sub_140001650(7, 1);
        if ( !v124 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v124 + 3) = 1953391988;
        *v124 = 1953394531;
        v892.m128i_i64[0] = 7;
        v892.m128i_i64[1] = (__int64)v124;
        *(_QWORD *)&v893 = 7;
        v884 = 1;
        sub_140412420(&v898, &v887);
        if ( v898.m256i_i8[0] == -1 )
        {
          v885.m256i_i64[0] = v898.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v885,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8538);
        }
        v125 = _mm_loadu_si128((const __m128i *)&v898);
        *(__m128i *)&v885.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v898.m256i_u64[2]);
        *(__m128i *)v885.m256i_i8 = v125;
        v884 = 0;
        sub_140E72AA0(&v898, &v861, &v892, &v885);
        if ( v898.m256i_i8[0] != -1 )
          sub_14002F9D0(&v898);
        v815.m256i_i64[3] = v861.m256i_i64[2];
        *(__m128i *)&v815.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v861);
        v815.m256i_i8[0] = 5;
        v126 = v819;
        if ( (__m128i *)v819 == v817 )
          sub_14190F570(&v817);
        v127 = v818;
        v128 = 32 * v126;
        v129 = _mm_loadu_si128((const __m128i *)&v815);
        *(__m128i *)(v818 + v128 + 16) = _mm_loadu_si128((const __m128i *)&v815.m256i_u64[2]);
        *(__m128i *)(v127 + v128) = v129;
        v819 = v126 + 1;
        sub_14002F9D0(&v887);
        v94 = v907;
        v37 = (__m128i *)v907;
        v95 = v901;
        v39 = v901;
        v96 = v871;
        if ( v871 )
        {
          v97 = v813;
LABEL_144:
          sub_140001660(v97, v96, 1);
          v37 = (__m128i *)v94;
          v39 = v95;
        }
        goto LABEL_39;
      }
      v766 = (_BYTE *)v793;
      *(_OWORD *)(v793 + 8) = *(_OWORD *)&v898.m256i_u64[1];
      *v766 = -1;
      v764 = v871;
      v761 = v901;
      if ( v871 )
      {
        v765 = v813;
LABEL_1059:
        sub_140001660(v765, v764, 1);
      }
LABEL_1060:
      if ( v761 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v907, v761, 1);
      sub_1403FB000(&v817);
LABEL_1063:
      if ( v817 )
        sub_140001660(v818, 32LL * (_QWORD)v817, 8);
      return v793;
    default:
      v37 = (__m128i *)v907;
      v39 = v44;
      goto LABEL_39;
  }
}
