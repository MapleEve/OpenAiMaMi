// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e38370 | name sub_140E38370
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E38370(__m128i *a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  const __m128i *v14; // rbx
  _QWORD *v15; // rsi
  __int64 result; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  const __m128i *v27; // r15
  __int64 v28; // r14
  __int64 v29; // r12
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  const char *v35; // r14
  __int64 v36; // rax
  int v37; // edx
  char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rsi
  const __m128i *v43; // rcx
  const __m128i *v44; // rdx
  __int64 v45; // rdi
  _BYTE *v46; // r14
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // r8
  char *v50; // rax
  const __m128i *v51; // rsi
  unsigned __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rbx
  char v56; // dl
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // r10
  char v62; // r14
  unsigned __int64 v63; // rcx
  __int64 v64; // r9
  unsigned __int64 v65; // r10
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // r9
  _QWORD *v79; // rsi
  __int64 v80; // rax
  __int8 v81; // bl
  __int64 v82; // rax
  char v83; // bl
  unsigned __int64 v84; // rdx
  __int64 v85; // r8
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __m128i v89; // xmm1
  __int128 v90; // xmm2
  __int128 v91; // xmm3
  int v92; // r9d
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rcx
  const __m128i *v96; // rdi
  _OWORD *v97; // rcx
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __m128i si128; // xmm6
  __m128i v102; // xmm7
  _BYTE *i; // r13
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int64 v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r14
  __int64 v114; // r15
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rsi
  int v123; // r9d
  __int64 v124; // rcx
  __int64 v125; // rax
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __int128 v128; // xmm2
  __int64 v129; // rbx
  __int64 v130; // rax
  unsigned __int64 v131; // r14
  __int64 v132; // r15
  __int64 v133; // rbx
  __int64 v134; // rax
  __m128i v135; // xmm1
  __int128 v136; // xmm2
  __int128 v137; // xmm3
  __int64 v138; // rsi
  _QWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdi
  __int64 v144; // rcx
  unsigned __int64 v145; // rbx
  __int64 v146; // rax
  unsigned __int64 v147; // r12
  __int64 v148; // r14
  __int64 v149; // r15
  __int64 v150; // r13
  __int64 v151; // rax
  unsigned __int64 v152; // r14
  __int64 v153; // r15
  _DWORD *v154; // rsi
  __int64 v155; // rax
  unsigned __int64 v156; // r15
  __int64 v157; // r13
  __int64 v158; // rcx
  __int64 v159; // rsi
  __m128i *v160; // rax
  __m128i v161; // xmm0
  __int64 v162; // rcx
  void *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __m128i v166; // xmm0
  __int64 v167; // rcx
  __m128i *v168; // rax
  __int64 v169; // rcx
  __m128i *v170; // rax
  __m128i v171; // xmm0
  __int64 v172; // rcx
  __m128i *v173; // rax
  __m128i v174; // xmm0
  __int64 v175; // rcx
  __m128i *v176; // rax
  __m128i v177; // xmm0
  __int64 v178; // rcx
  _DWORD *v179; // rax
  __int64 v180; // rcx
  __m128i *v181; // rax
  __int64 v182; // rsi
  unsigned __int64 v183; // r13
  __int64 v184; // rdx
  __int64 v185; // rcx
  __m128i *v186; // rax
  __m128i v187; // xmm0
  __int64 v188; // rcx
  void *v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rax
  __m128i v192; // xmm0
  __int64 v193; // rcx
  void *v194; // rax
  __int64 v195; // rcx
  __m128i *v196; // rax
  __int64 v197; // rcx
  _DWORD *v198; // rax
  __m128i v199; // xmm0
  __int64 v200; // rcx
  _DWORD *v201; // rax
  __m128i v202; // xmm0
  unsigned __int64 v203; // r13
  __int64 v204; // rdx
  __m128i *v205; // rax
  __m128i v206; // xmm0
  __int64 v207; // rcx
  void *v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rax
  __m128i v211; // xmm0
  __int64 v212; // rcx
  void *v213; // rax
  __int64 v214; // rcx
  __m128i *v215; // rax
  __m128i v216; // xmm0
  const __m128i *v217; // r13
  unsigned __int64 v218; // r12
  __int64 v219; // rdx
  __int64 v220; // rsi
  bool v221; // al
  __int64 v222; // rbx
  _BYTE *v223; // rax
  _BYTE *v224; // rdx
  bool v225; // zf
  _BYTE *v226; // rax
  __int64 v227; // rcx
  __m128i *v228; // rax
  __m128i v229; // xmm0
  __int64 v230; // rcx
  void *v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rax
  __m128i v234; // xmm0
  __int64 v235; // rcx
  void *v236; // rax
  __int64 v237; // rcx
  __m128i *v238; // rax
  __m128i v239; // xmm0
  const __m128i *v240; // rdi
  unsigned __int64 v241; // rbx
  __int64 v242; // rdx
  __m128i v243; // xmm0
  __m128i v244; // xmm1
  __m128i *v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // r15
  __int64 v249; // rsi
  unsigned __int64 v250; // r14
  __int64 v251; // rax
  __int64 v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rbx
  __int64 v256; // r14
  _QWORD *v257; // rax
  _QWORD *v258; // rsi
  _QWORD *v259; // rdx
  __int64 v260; // rsi
  __int64 v261; // rcx
  const __m128i *v262; // rax
  __m128i v263; // xmm0
  __int64 v264; // rcx
  void *v265; // rax
  __int64 v266; // rcx
  __m128i *v267; // rax
  __m128i v268; // xmm0
  __int64 v269; // rcx
  void *v270; // rax
  __int64 v271; // rcx
  __m128i *v272; // rax
  __m128i v273; // xmm0
  unsigned __int64 v274; // rdi
  __int64 v275; // rdx
  __int64 v276; // rax
  const __m128i *v277; // r14
  unsigned __int64 v278; // rbx
  _QWORD *v279; // rax
  _QWORD *v280; // rdi
  __int64 v281; // rdx
  __int64 v282; // rax
  const __m128i *v283; // r14
  unsigned __int64 v284; // rbx
  _QWORD *v285; // rax
  _QWORD *v286; // rdi
  __int64 v287; // rdx
  __int64 v288; // rsi
  __int64 v289; // rcx
  const __m128i *v290; // rax
  __m128i v291; // xmm0
  __int64 v292; // rcx
  void *v293; // rax
  __int64 v294; // rcx
  __m128i *v295; // rax
  __m128i v296; // xmm0
  __int64 v297; // rcx
  void *v298; // rax
  __int64 v299; // rcx
  __m128i *v300; // rax
  __m128i v301; // xmm0
  unsigned __int64 v302; // rdi
  __int64 v303; // rdx
  __int64 v304; // r12
  __int64 v305; // r13
  _QWORD *v306; // rsi
  _QWORD *v307; // r13
  void *v308; // r15
  __int64 v309; // r12
  __int64 v310; // rdx
  __int64 v311; // rdx
  char v312; // bl
  unsigned __int64 v313; // rax
  __int64 *v314; // rax
  __m512i *v315; // rcx
  __int64 v316; // rdi
  __int64 v317; // rsi
  __int64 v318; // rdx
  __int64 v319; // rdx
  __int64 v320; // r8
  __int64 v321; // r8
  __int64 v322; // rcx
  __m128i *v323; // rax
  __int64 v324; // rcx
  signed __int64 v325; // rdi
  __int64 v326; // r15
  const __m128i *v327; // r14
  __m128i *v328; // rax
  __int64 v329; // rbx
  __int64 v330; // rcx
  __int64 v331; // rax
  __int64 v332; // rcx
  __m128i *v333; // rax
  __int64 v334; // rcx
  void *v335; // rax
  unsigned __int64 v336; // rax
  __int64 v337; // rcx
  __m128i *v338; // rax
  __int64 v339; // rcx
  signed __int64 v340; // rdi
  __int64 v341; // r15
  const __m128i *v342; // r14
  __m128i *v343; // rax
  __int64 v344; // rbx
  __int64 v345; // rcx
  __m128i *v346; // rax
  __int64 v347; // r9
  __int64 v348; // rax
  __int64 v349; // rcx
  unsigned __int64 v350; // rdx
  __int64 v351; // r8
  __m128i v352; // xmm0
  __m128i v353; // xmm0
  _OWORD *v354; // rax
  __int64 v355; // rax
  signed __int64 v356; // rdx
  __int64 v357; // rcx
  const __m128i *v358; // rbx
  signed __int64 v359; // rdi
  const char *v360; // r14
  int v361; // r15d
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 v364; // r9
  __int64 v365; // rax
  __m128i *v366; // rax
  __int64 v367; // rcx
  int v368; // esi
  __int64 v369; // r15
  __m128i *v370; // rax
  __int64 v371; // r14
  __int64 v372; // rcx
  __m128i *v373; // rax
  __m128i v374; // xmm0
  const __m128i *v375; // rsi
  unsigned __int64 v376; // rdi
  __int64 v377; // rbx
  __int64 v378; // rcx
  __int64 v379; // rdi
  const __m128i *v380; // r12
  __m128i *v381; // rax
  __m128i v382; // xmm0
  __int64 v383; // rcx
  void *v384; // rax
  __int64 v385; // rcx
  __int64 v386; // rax
  __m128i v387; // xmm0
  __int64 v388; // rcx
  _DWORD *v389; // rax
  __int64 v390; // rcx
  __m128i *v391; // rax
  __m128i v392; // xmm0
  __int64 v393; // rcx
  __m128i *v394; // rax
  __m128i v395; // xmm0
  __int64 v396; // rcx
  __m128i *v397; // rax
  __m128i v398; // xmm0
  __int64 v399; // rcx
  __m128i *v400; // rax
  __m128i v401; // xmm0
  __int64 v402; // rcx
  __m128i *v403; // rax
  __m128i v404; // xmm0
  __int64 v405; // rcx
  __int64 v406; // rax
  __int64 v407; // rcx
  _DWORD *v408; // rax
  __m128i v409; // xmm0
  __int64 v410; // rcx
  _DWORD *v411; // rax
  __m128i v412; // xmm0
  const __m128i *v413; // rcx
  __m128i v414; // xmm0
  int v415; // r15d
  const __m128i *v416; // rsi
  unsigned __int64 v417; // r12
  __int64 v418; // rdx
  __int64 v419; // rcx
  __m128i *v420; // rax
  __m128i v421; // xmm0
  __int64 v422; // rcx
  void *v423; // rax
  __int64 v424; // rcx
  __int64 v425; // rax
  __m128i v426; // xmm0
  __int64 v427; // rcx
  void *v428; // rax
  __int64 v429; // rcx
  __m128i *v430; // rax
  __int64 v431; // rcx
  _DWORD *v432; // rax
  __m128i v433; // xmm0
  __int64 v434; // rcx
  _DWORD *v435; // rax
  __m128i v436; // xmm0
  __int64 v437; // rcx
  void *v438; // rax
  unsigned __int64 v439; // r12
  __int64 v440; // rdx
  __int64 v441; // rsi
  __int64 v442; // rcx
  __m128i *v443; // rax
  __m128i v444; // xmm0
  __int64 v445; // rcx
  void *v446; // rax
  __int64 v447; // rcx
  __int64 v448; // rax
  __m128i v449; // xmm0
  __int64 v450; // rcx
  void *v451; // rax
  __int64 v452; // rcx
  __m128i *v453; // rax
  __m128i v454; // xmm0
  const __m128i *v455; // rdi
  unsigned __int64 v456; // r15
  __int64 v457; // rdx
  __int64 v458; // rax
  __int64 v459; // rdx
  __int64 v460; // r8
  __int64 v461; // rdx
  _QWORD *v462; // rdi
  __int64 v463; // rax
  __int64 v464; // rax
  const __m128i *v465; // r14
  unsigned __int64 v466; // rbx
  __int64 *v467; // rax
  __int64 *v468; // rdi
  __int64 v469; // rdx
  __int64 v470; // rsi
  __int64 v471; // rcx
  const __m128i *v472; // rax
  __m128i v473; // xmm0
  __int64 v474; // rcx
  void *v475; // rax
  __int64 v476; // rcx
  __m128i *v477; // rax
  __m128i v478; // xmm0
  __int64 v479; // rcx
  __m128i *v480; // rax
  __m128i v481; // xmm0
  unsigned __int64 v482; // rdi
  __int64 v483; // rdx
  __int64 v484; // rax
  unsigned __int64 v485; // r14
  __int64 v486; // r12
  __int64 v487; // r13
  _QWORD *v488; // r15
  _QWORD *v489; // rax
  __int64 v490; // rdx
  __int64 v491; // rcx
  __m128i *v492; // rax
  __m128i v493; // xmm0
  __int64 v494; // rcx
  __m128i *v495; // rax
  __m128i v496; // xmm0
  __int64 v497; // rcx
  __m128i *v498; // rax
  __m128i v499; // xmm0
  __int64 v500; // rcx
  __int64 v501; // rax
  __m128i v502; // xmm0
  __int64 v503; // rcx
  __m128i *v504; // rax
  __m128i v505; // xmm0
  __int64 v506; // rcx
  __int64 v507; // rax
  __int64 v508; // rcx
  char v509; // di
  char v510; // r14
  __int64 v511; // rsi
  char *v512; // r15
  __int64 v513; // rax
  __int64 v514; // rdx
  __int64 v515; // rcx
  __m128i *v516; // rax
  __m128i v517; // xmm0
  __int64 v518; // rcx
  __m128i *v519; // rax
  __m128i v520; // xmm0
  __int64 v521; // rcx
  __m128i *v522; // rax
  __m128i v523; // xmm0
  __int64 v524; // rcx
  __int64 v525; // rax
  __m128i v526; // xmm0
  __int64 v527; // rcx
  __m128i *v528; // rax
  __m128i v529; // xmm0
  __int64 v530; // rcx
  __m128i *v531; // rax
  __m128i v532; // xmm0
  __int64 v533; // rcx
  __m128i *v534; // rax
  __m128i v535; // xmm0
  __int64 v536; // rcx
  __m128i *v537; // rax
  __m128i v538; // xmm0
  __int64 v539; // rcx
  __m128i *v540; // rax
  __m128i v541; // xmm0
  __int64 v542; // rcx
  __int64 v543; // rax
  __m128i v544; // xmm0
  __int64 v545; // rcx
  __m128i *v546; // rax
  __m128i v547; // xmm0
  __int64 v548; // rcx
  __m128i *v549; // rax
  __m128i v550; // xmm0
  _QWORD *v551; // rax
  __int64 v552; // rdx
  __int64 v553; // rax
  __m128i *v554; // rax
  __m128i v555; // xmm0
  __int64 v556; // rcx
  void *v557; // rax
  __int64 v558; // rcx
  __int64 v559; // rax
  __m128i v560; // xmm0
  __int64 v561; // rcx
  __m128i *v562; // rax
  __m128i v563; // xmm0
  __int64 v564; // rsi
  const __m128i *v565; // r12
  unsigned __int64 v566; // r15
  __int64 v567; // rdx
  _BYTE *v568; // rax
  __int64 v569; // rcx
  __int64 v570; // rax
  __int64 v571; // rdx
  __m128i *v572; // rcx
  __m128i v573; // xmm0
  __int64 v574; // rsi
  __int64 v575; // r14
  __int64 v576; // r15
  const __m128i *v577; // r12
  __int64 v578; // rax
  __int64 v579; // rcx
  unsigned __int64 v580; // r15
  __int64 v581; // rsi
  __int64 v582; // r13
  const __m128i *v583; // rsi
  __int64 v584; // r12
  _DWORD *v585; // rax
  __m128i v586; // xmm0
  __int64 v587; // rcx
  void *v588; // rax
  __int64 v589; // rcx
  _DWORD *v590; // rax
  __int64 v591; // rcx
  __m128i *v592; // rax
  __m128i v593; // xmm0
  __int64 v594; // rcx
  __m128i *v595; // rax
  __m128i v596; // xmm0
  __int64 v597; // rcx
  __m128i *v598; // rax
  __m128i v599; // xmm0
  const __m128i *v600; // rsi
  unsigned __int64 v601; // r14
  __int64 v602; // rdx
  unsigned int v603; // r14d
  signed __int64 v604; // r15
  __int64 v605; // rsi
  __m128i v606; // xmm0
  const __m128i *v607; // r9
  __int64 v608; // rax
  unsigned __int64 v609; // rbx
  const __m128i *v610; // r14
  __int64 v611; // rdi
  const __m128i *v612; // rsi
  __int64 v613; // rcx
  __int64 v614; // rax
  __m128i v615; // xmm0
  __int64 v616; // rcx
  __int64 v617; // rax
  __m128i v618; // xmm0
  __int64 v619; // rcx
  _DWORD *v620; // rax
  __m128i v621; // xmm0
  __int64 v622; // rcx
  __int64 v623; // rax
  __m128i v624; // xmm0
  __int64 v625; // rcx
  void *v626; // rax
  __int64 v627; // rcx
  __int64 v628; // rax
  __m128i v629; // xmm0
  unsigned __int64 v630; // rdi
  __int64 v631; // rdx
  __int64 v632; // [rsp+60h] [rbp-20h] BYREF
  __m128i v633; // [rsp+68h] [rbp-18h]
  __m512i v634; // [rsp+78h] [rbp-8h]
  __m256i v635; // [rsp+B8h] [rbp+38h]
  __int64 v636; // [rsp+D8h] [rbp+58h]
  __m128i v637; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v638; // [rsp+F0h] [rbp+70h]
  __m128i v639; // [rsp+F8h] [rbp+78h] BYREF
  __m128i v640; // [rsp+108h] [rbp+88h] BYREF
  __int64 v641; // [rsp+118h] [rbp+98h]
  __m128i v642; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v643; // [rsp+130h] [rbp+B0h]
  _DWORD *v644; // [rsp+138h] [rbp+B8h]
  const __m128i *v645; // [rsp+140h] [rbp+C0h]
  _DWORD *v646; // [rsp+148h] [rbp+C8h]
  char v647; // [rsp+157h] [rbp+D7h] BYREF
  __m128i *v648; // [rsp+158h] [rbp+D8h]
  __m128i v649; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int64 v650; // [rsp+170h] [rbp+F0h]
  __m128i v651; // [rsp+180h] [rbp+100h] BYREF
  __int64 v652; // [rsp+190h] [rbp+110h]
  __int64 v653; // [rsp+1A0h] [rbp+120h]
  __int64 v654; // [rsp+1A8h] [rbp+128h]
  __m128i v655; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v656; // [rsp+1C0h] [rbp+140h]
  __m128i v657; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v658; // [rsp+1E8h] [rbp+168h]
  _BYTE v659[120]; // [rsp+1F0h] [rbp+170h] BYREF
  char v660; // [rsp+275h] [rbp+1F5h]
  char v661; // [rsp+276h] [rbp+1F6h]
  char v662; // [rsp+277h] [rbp+1F7h]
  char v663; // [rsp+278h] [rbp+1F8h]
  char v664; // [rsp+279h] [rbp+1F9h]
  char v665; // [rsp+27Ah] [rbp+1FAh]
  char v666; // [rsp+27Bh] [rbp+1FBh]
  char v667; // [rsp+27Ch] [rbp+1FCh]
  char v668; // [rsp+27Dh] [rbp+1FDh]
  char v669; // [rsp+27Eh] [rbp+1FEh]
  char v670; // [rsp+27Fh] [rbp+1FFh]
  __m128i v671; // [rsp+280h] [rbp+200h] BYREF
  __int64 v672; // [rsp+290h] [rbp+210h]
  char v673; // [rsp+299h] [rbp+219h]
  char v674; // [rsp+29Ah] [rbp+21Ah]
  char v675; // [rsp+29Bh] [rbp+21Bh]
  char v676; // [rsp+29Ch] [rbp+21Ch]
  char v677; // [rsp+29Dh] [rbp+21Dh]
  char v678; // [rsp+29Eh] [rbp+21Eh]
  char v679; // [rsp+29Fh] [rbp+21Fh]
  char v680; // [rsp+2A0h] [rbp+220h]
  char v681; // [rsp+2A1h] [rbp+221h]
  char v682; // [rsp+2A2h] [rbp+222h]
  char v683; // [rsp+2A3h] [rbp+223h]
  char v684; // [rsp+2A4h] [rbp+224h]
  char v685; // [rsp+2A5h] [rbp+225h]
  char v686; // [rsp+2A6h] [rbp+226h]
  char v687; // [rsp+2A7h] [rbp+227h]
  char v688; // [rsp+2A8h] [rbp+228h]
  char v689; // [rsp+2A9h] [rbp+229h]
  char v690; // [rsp+2AAh] [rbp+22Ah]
  char v691; // [rsp+2ABh] [rbp+22Bh]
  char v692; // [rsp+2ACh] [rbp+22Ch]
  char v693; // [rsp+2ADh] [rbp+22Dh]
  char v694; // [rsp+2AEh] [rbp+22Eh]
  char v695; // [rsp+2AFh] [rbp+22Fh]
  char v696; // [rsp+2B0h] [rbp+230h]
  char v697; // [rsp+2B1h] [rbp+231h]
  char v698; // [rsp+2B2h] [rbp+232h]
  char v699; // [rsp+2B3h] [rbp+233h]
  char v700; // [rsp+2B4h] [rbp+234h]
  char v701; // [rsp+2B5h] [rbp+235h]
  char v702; // [rsp+2B6h] [rbp+236h]
  char v703; // [rsp+2B7h] [rbp+237h]
  char v704; // [rsp+2B8h] [rbp+238h]
  char v705; // [rsp+2B9h] [rbp+239h]
  char v706; // [rsp+2BAh] [rbp+23Ah]
  char v707; // [rsp+2BBh] [rbp+23Bh]
  char v708; // [rsp+2BCh] [rbp+23Ch]
  char v709; // [rsp+2BDh] [rbp+23Dh]
  char v710; // [rsp+2BEh] [rbp+23Eh]
  char v711; // [rsp+2BFh] [rbp+23Fh]
  char v712; // [rsp+2C0h] [rbp+240h]
  char v713; // [rsp+2C1h] [rbp+241h]
  char v714; // [rsp+2C2h] [rbp+242h]
  char v715; // [rsp+2C3h] [rbp+243h]
  char v716; // [rsp+2C4h] [rbp+244h]
  char v717; // [rsp+2C5h] [rbp+245h]
  char v718; // [rsp+2C6h] [rbp+246h]
  char v719; // [rsp+2C7h] [rbp+247h]
  char v720; // [rsp+2C8h] [rbp+248h]
  char v721; // [rsp+2C9h] [rbp+249h]
  char v722; // [rsp+2CAh] [rbp+24Ah]
  char v723; // [rsp+2CBh] [rbp+24Bh]
  char v724; // [rsp+2CCh] [rbp+24Ch]
  char v725; // [rsp+2CDh] [rbp+24Dh]
  char v726; // [rsp+2CEh] [rbp+24Eh]
  char v727; // [rsp+2CFh] [rbp+24Fh]
  char v728; // [rsp+2D0h] [rbp+250h]
  char v729; // [rsp+2D1h] [rbp+251h]
  char v730; // [rsp+2D2h] [rbp+252h]
  char v731; // [rsp+2D3h] [rbp+253h]
  char v732; // [rsp+2D4h] [rbp+254h]
  char v733; // [rsp+2D5h] [rbp+255h]
  char v734; // [rsp+2D6h] [rbp+256h]
  char v735; // [rsp+2D7h] [rbp+257h]
  char v736; // [rsp+2D8h] [rbp+258h]
  char v737; // [rsp+2D9h] [rbp+259h]
  char v738; // [rsp+2DAh] [rbp+25Ah]
  char v739; // [rsp+2DBh] [rbp+25Bh]
  char v740; // [rsp+2DCh] [rbp+25Ch]
  char v741; // [rsp+2DDh] [rbp+25Dh]
  char v742; // [rsp+2DEh] [rbp+25Eh]
  char v743; // [rsp+2DFh] [rbp+25Fh]
  char v744; // [rsp+2E0h] [rbp+260h]
  char v745; // [rsp+2E1h] [rbp+261h]
  char v746; // [rsp+2E2h] [rbp+262h]
  char v747; // [rsp+2E3h] [rbp+263h]
  char v748; // [rsp+2E4h] [rbp+264h]
  char v749; // [rsp+2E5h] [rbp+265h]
  char v750; // [rsp+2E6h] [rbp+266h]
  char v751; // [rsp+2E7h] [rbp+267h]
  __m128i v752; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v753; // [rsp+2F8h] [rbp+278h]
  __m128i v754; // [rsp+300h] [rbp+280h] BYREF
  __m512i v755; // [rsp+310h] [rbp+290h] BYREF
  __m256i v756; // [rsp+350h] [rbp+2D0h]
  __m128i v757; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v758; // [rsp+380h] [rbp+300h]
  _BYTE v759[24]; // [rsp+390h] [rbp+310h] BYREF
  char v760; // [rsp+3AEh] [rbp+32Eh]
  char v761; // [rsp+3AFh] [rbp+32Fh]
  _BYTE v762[136]; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v763; // [rsp+438h] [rbp+3B8h]
  unsigned __int64 v764; // [rsp+448h] [rbp+3C8h]
  char v765; // [rsp+457h] [rbp+3D7h]
  __int64 v766; // [rsp+458h] [rbp+3D8h]
  _BYTE v767[24]; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v768; // [rsp+478h] [rbp+3F8h]
  char v769; // [rsp+48Eh] [rbp+40Eh]
  char v770; // [rsp+48Fh] [rbp+40Fh]
  const __m128i *v771; // [rsp+490h] [rbp+410h]
  char v772; // [rsp+49Ch] [rbp+41Ch]
  char v773; // [rsp+49Dh] [rbp+41Dh]
  char v774; // [rsp+49Eh] [rbp+41Eh]
  char v775; // [rsp+49Fh] [rbp+41Fh]
  __m128i *v776; // [rsp+4A0h] [rbp+420h]
  __int64 m128i_i64; // [rsp+4A8h] [rbp+428h]
  char v778; // [rsp+4B7h] [rbp+437h]
  __int64 v779; // [rsp+4B8h] [rbp+438h]

  v779 = -2;
  v3 = a3;
  m128i_i64 = (__int64)a2;
  v648 = a1;
  v752.m128i_i64[0] = 0;
  v752.m128i_i64[1] = 1;
  v753 = 0;
  v778 = 1;
  v4 = sub_1416419F0(aType_11, 4, a3);
  if ( v4 )
  {
    v5 = 0;
    if ( *(_BYTE *)v4 == 3 )
      v5 = *(_QWORD *)(v4 + 24);
    v6 = 1;
    if ( *(_BYTE *)v4 == 3 )
      v6 = *(_QWORD *)(v4 + 16);
    if ( *(_QWORD *)(m128i_i64 + 344) != -1 )
    {
LABEL_7:
      switch ( v5 )
      {
        case 5LL:
          goto LABEL_12;
        case 12LL:
          goto LABEL_18;
        case 13LL:
          if ( !(*(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(_QWORD *)(v6 + 5) ^ 0x74726174735F6567LL) )
            goto LABEL_53;
          goto LABEL_23;
        case 18LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v6 + 16)), (__m128i)xmmword_1419D34D0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D34C0))) != 0xFFFF )
            goto LABEL_35;
          goto LABEL_53;
        case 19LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D34C0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_1419D34E0))) != 0xFFFF
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D3500),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_1419D34F0))) != 0xFFFF )
          {
            goto LABEL_45;
          }
LABEL_53:
          v778 = 1;
          result = sub_140E4D8E0(
                     (_DWORD)v648,
                     m128i_i64,
                     (unsigned int)aUpstreamProtoc,
                     23,
                     (__int64)aAnthropicConte,
                     43,
                     0);
          goto LABEL_54;
        default:
          goto LABEL_892;
      }
    }
  }
  else
  {
    v6 = 1;
    v5 = 0;
    if ( *(_QWORD *)(m128i_i64 + 344) != -1 )
      goto LABEL_7;
  }
  switch ( v5 )
  {
    case 5LL:
LABEL_12:
      if ( *(_DWORD *)v6 ^ 0x6F727265 | *(unsigned __int8 *)(v6 + 4) ^ 0x72 )
        goto LABEL_892;
      v778 = 1;
      v7 = sub_1416419F0(aError_47, 5, v3);
      if ( v7 )
        v3 = v7;
      v778 = 1;
      v8 = sub_1416419F0(aType_11, 4, v3);
      if ( v8 && *(_BYTE *)v8 == 3 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        v8 = *(_QWORD *)(v8 + 24);
      }
      else
      {
        v9 = 0;
      }
      if ( !v8 )
        v9 = 0;
      v34 = 14;
      if ( v9 )
        v34 = v8;
      v35 = aUpstreamError_0;
      if ( v9 )
        LODWORD(v35) = v9;
      v778 = 1;
      v36 = sub_1416419F0("messagestackwindowLabelhref", 7, v3);
      if ( v36 )
      {
        v37 = m128i_i64;
        if ( *(_BYTE *)v36 == 3 )
        {
          v38 = *(char **)(v36 + 16);
          v36 = *(_QWORD *)(v36 + 24);
        }
        else
        {
          v38 = nullptr;
        }
      }
      else
      {
        v38 = nullptr;
        v37 = m128i_i64;
      }
      if ( !v36 )
        v38 = nullptr;
      v49 = 35;
      if ( v38 )
        v49 = v36;
      v50 = &aAnthropicConte[43];
      if ( v38 )
        v50 = v38;
      v778 = 1;
      sub_140E4D8E0((unsigned int)v762, v37, (_DWORD)v35, v34, (__int64)v50, v49, 0);
      v51 = *(const __m128i **)&v762[8];
      v52 = *(_QWORD *)&v762[16];
      v53 = v753;
      if ( *(_QWORD *)&v762[16] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
      {
        m128i_i64 = *(_QWORD *)&v762[8];
        sub_14190D590((unsigned int)&v752, v753, *(_DWORD *)&v762[16], 1, 1);
        v53 = v753;
        v51 = (const __m128i *)m128i_i64;
      }
      else if ( !*(_QWORD *)&v762[16] )
      {
        goto LABEL_100;
      }
      sub_1418F44E0((__m128i *)(v53 + v752.m128i_i64[1]), v51, v52);
LABEL_100:
      v753 = v52 + v53;
      v54 = *(_QWORD *)v762;
      if ( !*(_QWORD *)v762 )
        goto LABEL_892;
      goto LABEL_162;
    case 12LL:
LABEL_18:
      if ( *(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(unsigned int *)(v6 + 8) ^ 0x706F7473LL )
        goto LABEL_892;
      v778 = 1;
      v10 = sub_1416419F0(aUsage_5, 5, v3);
      if ( v10 )
      {
        v778 = 1;
        sub_1401C2AF0(m128i_i64, v10);
      }
      if ( *(_BYTE *)(m128i_i64 + 782) )
      {
        *(_QWORD *)v762 = 0;
        *(_QWORD *)&v762[8] = 1;
        *(_QWORD *)&v762[16] = 0;
        goto LABEL_158;
      }
      v776 = *(__m128i **)(m128i_i64 + 664);
      v42 = *(_QWORD *)(m128i_i64 + 344);
      v43 = *(const __m128i **)(m128i_i64 + 352);
      v44 = nullptr;
      v45 = *(_QWORD *)(m128i_i64 + 360);
      v771 = v43;
      if ( v42 != -1 )
        v44 = v43;
      v778 = 1;
      sub_1401640F0(&v754, v44, v45);
      v46 = *(_BYTE **)(m128i_i64 + 144);
      v47 = *(_QWORD *)(m128i_i64 + 152);
      LOBYTE(v766) = sub_1403283C0(v46, v47, m128i_i64 + 280, m128i_i64 + 584);
      v48 = v754.m128i_i64[0];
      if ( __OFSUB__(-v754.m128i_i64[0], 1) )
      {
        v653 = v754.m128i_i64[0];
        if ( (_BYTE)v766 )
        {
LABEL_87:
          if ( !(unsigned __int8)sub_14027D270(v46, v47) )
          {
            sub_140E4D8E0(
              (unsigned int)v762,
              m128i_i64,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)aInvalidAnthrop_0,
              38,
              0);
            goto LABEL_158;
          }
        }
        else if ( v47 )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1419D3570);
          v102 = _mm_load_si128((const __m128i *)&xmmword_1419D3580);
          for ( i = v46; i != &v46[32 * v47]; i += 32 )
          {
            v104 = (_QWORD *)sub_1416419F0(aType_11, 4, i);
            if ( !v104 )
              v104 = off_1421E7108;
            if ( *(_BYTE *)v104 == 3 )
            {
              v105 = v104[2];
              v106 = v104[3];
              if ( v106 == 22 )
              {
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v105 + 6)), si128),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v105), v102))) == 0xFFFF )
                  goto LABEL_87;
              }
              else if ( v106 == 15
                     && !(*(_QWORD *)v105 ^ 0x745F726576726573LL | *(_QWORD *)(v105 + 7) ^ 0x6573755F6C6F6F74LL) )
              {
                goto LABEL_87;
              }
            }
          }
        }
        if ( !*(_QWORD *)(m128i_i64 + 712)
          && (!*(_QWORD *)(m128i_i64 + 688)
           || v42 != -1 && v45 == 8 && v771->m128i_i64[0] == 0x6573755F6C6F6F74LL && *(_QWORD *)(m128i_i64 + 128)) )
        {
          if ( v776 )
          {
            sub_140E4D8E0(
              (unsigned int)v762,
              m128i_i64,
              (unsigned int)"stream_truncated",
              16,
              (__int64)&unk_141A5408A,
              54,
              0);
          }
          else
          {
            v306 = *(_QWORD **)(m128i_i64 + 120);
            v307 = &v306[16 * *(_QWORD *)(m128i_i64 + 128)];
            v46 = v762;
            while ( 1 )
            {
              v48 = v653;
              if ( v306 == v307 )
                goto LABEL_514;
              v308 = (void *)v306[10];
              v309 = v306[11];
              sub_140E91160(v308, v309);
              if ( !v310 )
              {
                v308 = (void *)v306[13];
                v309 = v306[14];
                sub_140E91160(v308, v309);
                if ( !v311 )
                {
                  v309 = 2;
                  v308 = &unk_141A53B20;
                }
              }
              *(_QWORD *)v762 = v308;
              *(_QWORD *)&v762[8] = v309;
              *(_OWORD *)&v762[16] = 0;
              *(_QWORD *)&v762[32] = v308;
              *(_QWORD *)&v762[40] = v309;
              sub_14062D280(v659, v762);
              if ( v659[0] == 0xFF )
                break;
              v312 = v659[0];
              sub_140DF44E0(v659);
              v306 += 16;
              if ( v312 != 5 )
                goto LABEL_896;
            }
            sub_14002F910(&v659[8]);
LABEL_896:
            sub_140E4D8E0(
              (unsigned int)v762,
              m128i_i64,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)&unk_141A54058,
              50,
              0);
          }
        }
        else
        {
          sub_140E4D8E0(
            (unsigned int)v762,
            m128i_i64,
            (unsigned int)aAnthropicConti_0,
            31,
            (__int64)&unk_141A540DF,
            90,
            0);
        }
LABEL_158:
        v51 = *(const __m128i **)&v762[8];
        v107 = *(_QWORD *)&v762[16];
        v108 = v753;
        if ( *(_QWORD *)&v762[16] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
        {
          m128i_i64 = *(_QWORD *)&v762[8];
          sub_14190D590((unsigned int)&v752, v753, *(_DWORD *)&v762[16], 1, 1);
          v108 = v753;
          v51 = (const __m128i *)m128i_i64;
        }
        else if ( !*(_QWORD *)&v762[16] )
        {
          goto LABEL_161;
        }
        sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v108), v51, v107);
        v108 = v753;
LABEL_161:
        v753 = v107 + v108;
        v54 = *(_QWORD *)v762;
        if ( *(_QWORD *)v762 )
LABEL_162:
          sub_140001660(v51, v54, 1);
        goto LABEL_892;
      }
LABEL_514:
      v313 = 2;
      if ( v48 < 0 )
        v313 = v48 ^ 0x8000000000000000uLL;
      if ( v313 )
      {
        if ( v313 == 1 )
        {
          v314 = &v754.m128i_i64[1];
          v315 = &v755;
        }
        else
        {
          v314 = &v755.m512i_i64[1];
          v315 = (__m512i *)&v755.m512i_u64[2];
        }
        v316 = *v314;
        v46 = (_BYTE *)v315->m512i_i64[0];
        sub_140E4F6F0(v762, m128i_i64, *v314, v315->m512i_i64[0]);
        sub_14019B500((unsigned int)aAnthropicStrea, 16, (unsigned int)aNotCompleted, 13, (__int64)v762);
        v317 = m128i_i64;
      }
      else
      {
        v316 = 0;
        v317 = m128i_i64;
      }
      v657.m128i_i64[0] = 0;
      v657.m128i_i64[1] = 1;
      v658 = 0;
      v770 = 1;
      sub_140E4BBB0(v317, &v657);
      v770 = 1;
      sub_140E4D370(v317, v316, v46, &v657);
      if ( __OFSUB__(-v48, 1) )
      {
        v319 = *(_QWORD *)(v317 + 144);
        v320 = *(_QWORD *)(v317 + 152);
        v770 = 1;
        sub_14027C620(&v655, v319, v320, v766);
        if ( v655.m128i_i8[0] != -1 )
        {
          v321 = *(unsigned int *)(v317 + 776);
          *(_DWORD *)(v317 + 776) = v321 + 1;
          v770 = 1;
          sub_140E7D900(v762, v317 + 744, v321, &v655);
          if ( v762[0] != 0xFF )
          {
            v770 = 1;
            sub_140DF44E0(v762);
          }
        }
      }
      LOBYTE(v318) = __OFSUB__(-v48, 1);
      v770 = 1;
      sub_140E4FB90(v317, v318, &v657);
      *(_BYTE *)(v317 + 782) = 1;
      v671.m128i_i64[0] = 0;
      v672 = 0;
      nullsub_1(v322);
      v323 = (__m128i *)sub_140001650(2, 1);
      if ( !v323 )
        sub_141938D2B(1, 2);
      v323->m128i_i16[0] = 25705;
      *(_QWORD *)v767 = 2;
      *(_QWORD *)&v767[8] = v323;
      *(_QWORD *)&v767[16] = 2;
      v325 = *(_QWORD *)(v317 + 104);
      m128i_i64 = (__int64)v323;
      if ( v325 < 0 )
      {
        v326 = 0;
        goto LABEL_529;
      }
      if ( v325 )
      {
        v327 = *(const __m128i **)(v317 + 96);
        nullsub_1(v324);
        v326 = 1;
        v328 = (__m128i *)sub_140001650(v325, 1);
        if ( !v328 )
        {
LABEL_529:
          v670 = 1;
          sub_141938D2B(v326, v325);
        }
        v329 = (__int64)v328;
        sub_1418F44E0(v328, v327, v325);
      }
      else
      {
        v329 = 1;
      }
      v762[0] = 3;
      *(_QWORD *)&v762[8] = v325;
      *(_QWORD *)&v762[16] = v329;
      *(_QWORD *)&v762[24] = v325;
      v670 = 0;
      sub_140E72AA0(v659, &v671, v767, v762);
      if ( v659[0] != 0xFF )
        sub_140DF44E0(v659);
      nullsub_1(v330);
      v331 = sub_140001650(6, 1);
      if ( !v331 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v331 + 4) = 29795;
      *(_DWORD *)v331 = 1701470831;
      *(_QWORD *)v767 = 6;
      v766 = v331;
      *(_QWORD *)&v767[8] = v331;
      *(_QWORD *)&v767[16] = 6;
      nullsub_1(v332);
      v333 = (__m128i *)sub_140001650(8, 1);
      m128i_i64 = (__int64)v333;
      if ( !v333 )
        sub_141938D2B(1, 8);
      v333->m128i_i64[0] = 0x65736E6F70736572LL;
      v762[0] = 3;
      *(_QWORD *)&v762[8] = 8;
      *(_QWORD *)&v762[16] = v333;
      *(_QWORD *)&v762[24] = 8;
      sub_140E72AA0(v659, &v671, v767, v762);
      if ( v659[0] != 0xFF )
        sub_140DF44E0(v659);
      nullsub_1(v334);
      v335 = (void *)sub_140001650(10, 1);
      if ( !v335 )
        sub_141938D2B(1, 10);
      qmemcpy(v335, "created_at", 10);
      *(_QWORD *)v767 = 10;
      *(_QWORD *)&v767[8] = v335;
      *(_QWORD *)&v767[16] = 10;
      v336 = *(_QWORD *)(v317 + 640);
      v762[0] = 2;
      *(_QWORD *)&v762[8] = v336 >> 63;
      *(_QWORD *)&v762[16] = v336;
      sub_140E72AA0(v659, &v671, v767, v762);
      if ( v659[0] != 0xFF )
        sub_140DF44E0(v659);
      nullsub_1(v337);
      v338 = (__m128i *)sub_140001650(5, 1);
      if ( !v338 )
        sub_141938D2B(1, 5);
      v338->m128i_i8[4] = 108;
      v338->m128i_i32[0] = 1701080941;
      *(_QWORD *)v767 = 5;
      *(_QWORD *)&v767[8] = v338;
      *(_QWORD *)&v767[16] = 5;
      v340 = *(_QWORD *)(v317 + 80);
      m128i_i64 = (__int64)v338;
      if ( v340 < 0 )
      {
        v341 = 0;
        goto LABEL_546;
      }
      if ( v340 )
      {
        v342 = *(const __m128i **)(v317 + 72);
        nullsub_1(v339);
        v341 = 1;
        v343 = (__m128i *)sub_140001650(v340, 1);
        if ( !v343 )
        {
LABEL_546:
          v669 = 1;
          sub_141938D2B(v341, v340);
        }
        v344 = (__int64)v343;
        sub_1418F44E0(v343, v342, v340);
      }
      else
      {
        v344 = 1;
      }
      v762[0] = 3;
      *(_QWORD *)&v762[8] = v340;
      *(_QWORD *)&v762[16] = v344;
      *(_QWORD *)&v762[24] = v340;
      v669 = 0;
      sub_140E72AA0(v659, &v671, v767, v762);
      if ( v659[0] != 0xFF )
        sub_140DF44E0(v659);
      nullsub_1(v345);
      v346 = (__m128i *)sub_140001650(6, 1);
      if ( !v346 )
        sub_141938D2B(1, 6);
      v346->m128i_i16[2] = 29813;
      v346->m128i_i32[0] = 1886680431;
      *(_QWORD *)v759 = 6;
      m128i_i64 = (__int64)v346;
      *(_QWORD *)&v759[8] = v346;
      *(_QWORD *)&v759[16] = 6;
      v348 = *(_QWORD *)(v317 + 744);
      v349 = *(_QWORD *)(v317 + 752);
      v350 = 0;
      v351 = v348;
      if ( v348 )
        v351 = *(_QWORD *)(v317 + 760);
      LOBYTE(v350) = v348 != 0;
      *(_OWORD *)v762 = v350;
      *(_QWORD *)&v762[16] = v348;
      *(_QWORD *)&v762[24] = v349;
      *(_QWORD *)&v762[32] = v350;
      *(_QWORD *)&v762[40] = 0;
      *(_QWORD *)&v762[48] = v348;
      *(_QWORD *)&v762[56] = v349;
      *(_QWORD *)&v762[64] = v351;
      LOBYTE(v347) = v348 != 0;
      sub_1403EF510(v767, v762, v351, v347);
      v751 = 1;
      sub_140C11330(v762, v767);
      if ( v762[0] == 0xFF )
      {
        *(_QWORD *)v659 = *(_QWORD *)&v762[8];
        sub_141939040(
          (unsigned int)aCalledResultUn_16,
          43,
          (unsigned int)v659,
          (unsigned int)&off_141A52FE8,
          (__int64)&off_141A54010);
      }
      v352 = _mm_loadu_si128((const __m128i *)v762);
      *(__m128i *)&v659[16] = _mm_loadu_si128((const __m128i *)&v762[16]);
      *(__m128i *)v659 = v352;
      v751 = 0;
      sub_140E72AA0(v762, &v671, v759, v659);
      if ( v762[0] != 0xFF )
        sub_140DF44E0(v762);
      if ( *(_QWORD *)v767 )
        sub_140001660(*(_QWORD *)&v767[8], 8LL * *(_QWORD *)v767, 8);
      *(__m128i *)&v767[8] = _mm_loadu_si128(&v671);
      v768 = v672;
      v767[0] = 5;
      sub_1401C2620(&v639, v317);
      if ( v639.m128i_i8[0] != -1 )
      {
        v668 = 1;
        m128i_i64 = sub_141641AF0(aUsage_5, 5, v767);
        sub_140DF44E0(m128i_i64);
        v353 = _mm_loadu_si128(&v639);
        v354 = (_OWORD *)m128i_i64;
        *(__m128i *)(m128i_i64 + 16) = _mm_loadu_si128(&v640);
        *v354 = v353;
      }
      v355 = sub_140164630(&v754, v767);
      v358 = (const __m128i *)v355;
      v359 = v356;
      if ( !*(_QWORD *)(v317 + 632) )
        goto LABEL_575;
      if ( v356 == 18 )
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v355 + 16)), (__m128i)xmmword_1419E4670),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v355), (__m128i)xmmword_1419E4660))) == 0xFFFF )
        {
          v360 = aCompleted_2;
          v361 = 9;
LABEL_570:
          v362 = sub_1416419F0(aUsage_5, 5, v767);
          sub_1401F6AE0(v317 + 632, v362);
          sub_1401F66E0(v317 + 632, v767);
          v363 = sub_141642800(v767, aErrorMessage_2, 14);
          LODWORD(v364) = 1;
          if ( v363 && *(_BYTE *)v363 == 3 )
          {
            v364 = *(_QWORD *)(v363 + 16);
            v365 = *(_QWORD *)(v363 + 24);
          }
          else
          {
            v365 = 0;
          }
          sub_1401F9370(v317 + 632, (_DWORD)v360, v361, v364, v365);
LABEL_575:
          v671.m128i_i64[0] = 0;
          v672 = 0;
          nullsub_1(v357);
          v366 = (__m128i *)sub_140001650(4, 1);
          if ( !v366 )
            sub_141938D2B(1, 4);
          v368 = v317 + 768;
          v366->m128i_i32[0] = 1701869940;
          *(_QWORD *)v759 = 4;
          *(_QWORD *)&v759[8] = v366;
          *(_QWORD *)&v759[16] = 4;
          m128i_i64 = (__int64)v366;
          if ( v359 < 0 )
          {
            v369 = 0;
            goto LABEL_578;
          }
          if ( v359 )
          {
            nullsub_1(v367);
            v369 = 1;
            v370 = (__m128i *)sub_140001650(v359, 1);
            if ( !v370 )
            {
LABEL_578:
              v667 = 1;
              sub_141938D2B(v369, v359);
            }
            v371 = (__int64)v370;
            sub_1418F44E0(v370, v358, v359);
          }
          else
          {
            v371 = 1;
          }
          v762[0] = 3;
          *(_QWORD *)&v762[8] = v359;
          *(_QWORD *)&v762[16] = v371;
          *(_QWORD *)&v762[24] = v359;
          v667 = 0;
          sub_140E72AA0(v659, &v671, v759, v762);
          if ( v659[0] != 0xFF )
            sub_140DF44E0(v659);
          nullsub_1(v372);
          v373 = (__m128i *)sub_140001650(8, 1);
          if ( !v373 )
            sub_141938D2B(1, 8);
          v373->m128i_i64[0] = 0x65736E6F70736572LL;
          *(_QWORD *)v759 = 8;
          m128i_i64 = (__int64)v373;
          *(_QWORD *)&v759[8] = v373;
          *(_QWORD *)&v759[16] = 8;
          v750 = 1;
          sub_140412420(v762, v767);
          if ( v762[0] == 0xFF )
          {
            *(_QWORD *)v659 = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)v659,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A54040);
          }
          v374 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)&v659[16] = _mm_loadu_si128((const __m128i *)&v762[16]);
          *(__m128i *)v659 = v374;
          v750 = 0;
          sub_140E72AA0(v762, &v671, v759, v659);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
          *(_QWORD *)&v762[24] = v672;
          v762[0] = 5;
          sub_140E4D190((unsigned int)v659, v368, (_DWORD)v358, v359, (__int64)v762);
          v375 = *(const __m128i **)&v659[8];
          v376 = *(_QWORD *)&v659[16];
          v377 = v658;
          if ( *(_QWORD *)&v659[16] > (unsigned __int64)(v657.m128i_i64[0] - v658) )
          {
            m128i_i64 = *(_QWORD *)&v659[8];
            sub_14190D590((unsigned int)&v657, v658, *(_DWORD *)&v659[16], 1, 1);
            v377 = v658;
            v375 = (const __m128i *)m128i_i64;
          }
          else if ( !*(_QWORD *)&v659[16] )
          {
LABEL_592:
            v658 = v376 + v377;
            if ( *(_QWORD *)v659 )
              sub_140001660(v375, *(_QWORD *)v659, 1);
            sub_140DF44E0(v762);
            *(__m128i *)v762 = _mm_loadu_si128(&v657);
            *(_QWORD *)&v762[16] = v658;
            v770 = 0;
            sub_140DF44E0(v767);
            if ( v754.m128i_i64[0] >= (__int64)0x8000000000000002uLL && v754.m128i_i64[0] )
              sub_140001660(v754.m128i_i64[1], v754.m128i_i64[0], 1);
            goto LABEL_158;
          }
          sub_1418F44E0((__m128i *)(v377 + v657.m128i_i64[1]), v375, v376);
          goto LABEL_592;
        }
      }
      else if ( v356 == 19
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v355), (__m128i)xmmword_141A51CA0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v355 + 3)), (__m128i)xmmword_141A51C90))) == 0xFFFF )
      {
        v360 = aIncomplete_0;
        v361 = 10;
        goto LABEL_570;
      }
      v360 = aFailed_2;
      v361 = 6;
      goto LABEL_570;
    case 13LL:
LABEL_23:
      if ( *(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(_QWORD *)(v6 + 5) ^ 0x74726174735F6567LL )
      {
        if ( !(*(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(_QWORD *)(v6 + 5) ^ 0x61746C65645F6567LL) )
        {
          v778 = 1;
          v11 = sub_1416419F0(aUsage_5, 5, v3);
          if ( v11 )
          {
            v778 = 1;
            sub_1401C2AF0(m128i_i64, v11);
          }
          v778 = 1;
          v12 = sub_141642800(v3, aDeltaStopReaso_0, 18);
          if ( v12 )
          {
            if ( *(_BYTE *)v12 == 3 )
            {
              v13 = *(_QWORD *)(v12 + 24);
              if ( v13 )
              {
                v14 = *(const __m128i **)(v12 + 16);
                v15 = (_QWORD *)m128i_i64;
                if ( *(_QWORD *)(m128i_i64 + 344) != -1
                  && (*(_QWORD *)(m128i_i64 + 360) != v13
                   || (unsigned int)sub_1418F4B70(*(_QWORD *)(m128i_i64 + 352), *(_QWORD *)(v12 + 16))) )
                {
                  v778 = 1;
                  result = sub_140E4D8E0(
                             (_DWORD)v648,
                             m128i_i64,
                             (unsigned int)aUpstreamProtoc,
                             23,
                             (__int64)&unk_141A53BD0,
                             33,
                             0);
                  goto LABEL_54;
                }
                sub_14072C410((unsigned int)v762, v13, 0, 1, 1);
                v113 = *(_QWORD *)&v762[8];
                if ( v762[0] )
                {
                  v778 = 1;
                  sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
                }
                v114 = *(_QWORD *)&v762[16];
                sub_1418F44E0(*(__m128i **)&v762[16], v14, v13);
                v115 = v15[43];
                if ( v115 != -1 && v115 )
                  sub_140001660(v15[44], v115, 1);
                v15[43] = v113;
                v15[44] = v114;
                v15[45] = v13;
              }
            }
          }
        }
      }
      else
      {
        v778 = 1;
        v24 = sub_1416419F0("messagestackwindowLabelhref", 7, v3);
        if ( v24 )
        {
          v778 = 1;
          v25 = sub_1416419F0(aModel_7, 5, v24);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 24);
            if ( *(_BYTE *)v25 == 3 && v26 != 0 )
            {
              v27 = *(const __m128i **)(v25 + 16);
              sub_14072C410((unsigned int)v762, v26, 0, 1, 1);
              v28 = *(_QWORD *)&v762[8];
              if ( *(_DWORD *)v762 == 1 )
              {
                v778 = 1;
                sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
              }
              v29 = *(_QWORD *)&v762[16];
              sub_1418F44E0(*(__m128i **)&v762[16], v27, v26);
              v30 = (_QWORD *)m128i_i64;
              v31 = *(_QWORD *)(m128i_i64 + 64);
              if ( v31 )
                sub_140001660(*(_QWORD *)(m128i_i64 + 72), v31, 1);
              v30[8] = v28;
              v30[9] = v29;
              v30[10] = v26;
            }
          }
        }
        v778 = 1;
        v32 = sub_1416419F0("messagestackwindowLabelhref", 7, v3);
        if ( v32 )
        {
          v778 = 1;
          v33 = sub_1416419F0(aUsage_5, 5, v32);
          if ( v33 )
          {
            v778 = 1;
            sub_1401C2AF0(m128i_i64, v33);
          }
        }
        v778 = 1;
        sub_140E4BBB0(m128i_i64, &v752);
      }
      goto LABEL_892;
    case 18LL:
LABEL_35:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v6 + 16)), (__m128i)xmmword_1419D34D0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D34C0))) != 0xFFFF )
        goto LABEL_892;
      v778 = 1;
      v17 = sub_1416419F0(aIndex_1, 5, v3);
      if ( v17 )
      {
        v18 = 0;
        v19 = 0;
        if ( !*(_QWORD *)(v17 + 8) )
          v19 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)v17 == 2 )
          v18 = v19;
        v20 = *(_QWORD *)(m128i_i64 + 648);
        if ( !v20 )
          goto LABEL_892;
      }
      else
      {
        v18 = 0;
        v20 = *(_QWORD *)(m128i_i64 + 648);
        if ( !v20 )
          goto LABEL_892;
      }
      v55 = *(_QWORD *)(m128i_i64 + 656);
      v56 = v55 + 7;
      v57 = 0;
      v58 = v55;
      v59 = v20;
      while ( 1 )
      {
        v60 = 8 * (unsigned int)*(unsigned __int16 *)(v59 + 1506);
        v61 = -1;
        do
        {
          if ( !v60 )
          {
            v61 = *(unsigned __int16 *)(v59 + 1506);
            goto LABEL_110;
          }
          v62 = (v18 > *(_QWORD *)(v59 + 8 * v61 + 1424)) - (v18 < *(_QWORD *)(v59 + 8 * v61 + 1424));
          ++v61;
          v60 -= 8;
        }
        while ( v62 == 1 );
        if ( !v62 )
        {
          v655.m128i_i8[0] = 0;
          if ( v58 )
          {
            v63 = *(_QWORD *)(v59 + 8 * v61 + 1512);
            v64 = v58 - 1;
            if ( v58 != 1 )
            {
              v65 = v55 - v57 - 2;
              if ( (v64 & 7) != 0 )
              {
                v66 = -(__int64)(v56 & 7);
                v67 = 1;
                do
                {
                  v63 = *(_QWORD *)(v63 + 8LL * *(unsigned __int16 *)(v63 + 1506) + 1512);
                  v68 = v66 + v67++ + 1;
                }
                while ( v68 != 1 );
                v64 = v58 - v67;
              }
              if ( v65 >= 7 )
              {
                do
                {
                  v69 = *(_QWORD *)(v63 + 8LL * *(unsigned __int16 *)(v63 + 1506) + 1512);
                  v70 = *(_QWORD *)(v69 + 8LL * *(unsigned __int16 *)(v69 + 1506) + 1512);
                  v71 = *(_QWORD *)(v70 + 8LL * *(unsigned __int16 *)(v70 + 1506) + 1512);
                  v72 = *(_QWORD *)(v71 + 8LL * *(unsigned __int16 *)(v71 + 1506) + 1512);
                  v73 = *(_QWORD *)(v72 + 8LL * *(unsigned __int16 *)(v72 + 1506) + 1512);
                  v74 = *(_QWORD *)(v73 + 8LL * *(unsigned __int16 *)(v73 + 1506) + 1512);
                  v75 = *(_QWORD *)(v74 + 8LL * *(unsigned __int16 *)(v74 + 1506) + 1512);
                  v63 = *(_QWORD *)(v75 + 8LL * *(unsigned __int16 *)(v75 + 1506) + 1512);
                  v64 -= 8;
                }
                while ( v64 );
              }
            }
            v76 = *(unsigned __int16 *)(v63 + 1506) - 1LL;
            *(_OWORD *)v767 = v63;
            *(_QWORD *)&v767[16] = v76;
            v778 = 1;
            sub_140DEA9D0(v762, v767, &v655);
            v754 = *(__m128i *)&v762[8];
            v755 = *(__m512i *)&v762[24];
            v756 = *(__m256i *)&v762[88];
            v757 = _mm_loadu_si128((const __m128i *)&v762[120]);
            v77 = v763;
            v78 = v764;
            if ( v764 >= *(unsigned __int16 *)(v763 + 1506) )
            {
              v79 = (_QWORD *)m128i_i64;
              do
              {
                v78 = *(unsigned __int16 *)(v77 + 1504);
                v77 = *(_QWORD *)(v77 + 1408);
              }
              while ( (unsigned __int16)v78 >= *(_WORD *)(v77 + 1506) );
            }
            else
            {
              v79 = (_QWORD *)m128i_i64;
            }
            v84 = v78 << 7;
            v85 = *(_QWORD *)(v77 + 8 * v78 + 1416);
            *(_QWORD *)(v77 + 8 * v78 + 1416) = *(_QWORD *)v762;
            *(_OWORD *)&v762[120] = *(_OWORD *)(v77 + (v78 << 7) + 112);
            *(_OWORD *)&v762[104] = *(_OWORD *)(v77 + (v78 << 7) + 96);
            *(_OWORD *)&v762[88] = *(_OWORD *)(v77 + (v78 << 7) + 80);
            *(_OWORD *)&v762[72] = *(_OWORD *)(v77 + (v78 << 7) + 64);
            v86 = *(_OWORD *)(v77 + (v78 << 7));
            v87 = *(_OWORD *)(v77 + (v78 << 7) + 16);
            v88 = *(_OWORD *)(v77 + (v78 << 7) + 32);
            *(_OWORD *)&v762[56] = *(_OWORD *)(v77 + (v78 << 7) + 48);
            *(_OWORD *)&v762[40] = v88;
            *(_OWORD *)&v762[24] = v87;
            *(_OWORD *)&v762[8] = v86;
            v89 = _mm_load_si128((const __m128i *)&v755);
            v90 = *(_OWORD *)&v755.m512i_u64[2];
            v91 = *(_OWORD *)&v755.m512i_u64[4];
            *(__m128i *)(v77 + v84) = v754;
            *(__m128i *)(v77 + v84 + 16) = v89;
            *(_OWORD *)(v77 + v84 + 32) = v90;
            *(_OWORD *)(v77 + v84 + 48) = v91;
            *(_OWORD *)(v77 + v84 + 64) = *(_OWORD *)&v755.m512i_u64[6];
            *(__m256i *)(v77 + v84 + 80) = v756;
            *(__m128i *)(v77 + v84 + 112) = _mm_load_si128(&v757);
            *(_QWORD *)v762 = v85;
          }
          else
          {
            v754 = (__m128i)(unsigned __int64)v59;
            v755.m512i_i64[0] = v61;
            v778 = 1;
            sub_140DEA9D0(v762, &v754, &v655);
            v79 = (_QWORD *)m128i_i64;
          }
          sub_1418F44E0(&v754, (const __m128i *)v762, 0x88u);
          --v79[83];
          if ( v655.m128i_i8[0] == 1 )
          {
            if ( !v55 )
              sub_141939280(aAssertionFaile_23, 33, &off_141A523F0);
            v93 = *(_QWORD *)(v20 + 1512);
            v79[81] = v93;
            v79[82] = v55 - 1;
            *(_QWORD *)(v93 + 1408) = 0;
            sub_140001660(v20, 1608, 8);
          }
          v94 = v754.m128i_i64[1];
          *(__m512i *)v659 = v755;
          *(__m256i *)&v659[64] = v756;
          *(__m128i *)&v659[96] = v757;
          *(_QWORD *)&v659[112] = v758;
          if ( v754.m128i_i64[1] != -1 )
          {
            v636 = *(_QWORD *)&v659[112];
            v635 = *(__m256i *)&v659[80];
            v634 = *(__m512i *)&v659[16];
            v633 = *(__m128i *)v659;
            v632 = v754.m128i_i64[1];
            v95 = 2;
            if ( v754.m128i_i64[1] < 0 )
              v95 = v754.m128i_i64[1] ^ 0x8000000000000000uLL;
            v766 = v95;
            if ( v95 )
            {
              if ( v95 == 1 )
              {
                v757.m128i_i64[0] = v636;
                v756 = v635;
                v755 = v634;
                v754 = v633;
                v675 = 1;
                v96 = (const __m128i *)m128i_i64;
                sub_140E4F640(m128i_i64, &v752);
                v675 = 1;
                sub_140E4EF10(v96, &v754, &v752);
                *(_QWORD *)&v762[112] = v757.m128i_i64[0];
                *(__m256i *)&v762[80] = v756;
                *(__m512i *)&v762[16] = v755;
                *(__m128i *)v762 = v754;
                m128i_i64 = (__int64)v96[10].m128i_i64;
                sub_140DF2190(&v96[10]);
                v97 = (_OWORD *)m128i_i64;
                *(_QWORD *)(m128i_i64 + 112) = *(_QWORD *)&v762[112];
                v97[6] = *(_OWORD *)&v762[96];
                v97[5] = *(_OWORD *)&v762[80];
                v97[4] = *(_OWORD *)&v762[64];
                v98 = *(_OWORD *)v762;
                v99 = *(_OWORD *)&v762[16];
                v100 = *(_OWORD *)&v762[32];
                v97[3] = *(_OWORD *)&v762[48];
                v97[2] = v100;
                v97[1] = v99;
                *v97 = v98;
              }
              else
              {
                v749 = 1;
                sub_140E68110(m128i_i64 + 112, &v632);
              }
              if ( __OFSUB__(-v94, 1) )
              {
                v778 = 1;
                sub_140DF5CA0(&v632);
              }
            }
            else
            {
              v749 = 0;
              sub_140E508A0(m128i_i64, (unsigned int)&v632, 0, v92, (__int64)&v752);
            }
          }
          goto LABEL_892;
        }
LABEL_110:
        if ( !v58 )
          goto LABEL_892;
        v59 = *(_QWORD *)(v59 + 8 * v61 + 1512);
        --v58;
        ++v57;
        v56 += 7;
      }
    case 19LL:
LABEL_45:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D34C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_1419D34E0))) != 0xFFFF )
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1419D3500),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_1419D34F0))) == 0xFFFF )
        {
          v778 = 1;
          v21 = sub_1416419F0(aIndex_1, 5, v3);
          if ( v21 )
          {
            v22 = 0;
            v23 = 0;
            if ( !*(_QWORD *)(v21 + 8) )
              v23 = *(_QWORD *)(v21 + 16);
            if ( *(_BYTE *)v21 == 2 )
              v22 = v23;
          }
          else
          {
            v22 = 0;
          }
          v778 = 1;
          v82 = sub_1416419F0(aDelta_4, 5, v3);
          if ( v82 )
          {
            v83 = *(_BYTE *)v82;
            switch ( *(_BYTE *)v82 )
            {
              case 0:
                break;
              case 1:
                v762[1] = *(_BYTE *)(v82 + 1);
                break;
              case 2:
                *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)(v82 + 8));
                break;
              case 3:
                v778 = 1;
                sub_1416AC440(&v762[8], v82 + 8);
                break;
              case 4:
                v116 = *(_QWORD *)(v82 + 16);
                v117 = *(_QWORD *)(v82 + 24);
                v778 = 1;
                sub_1403918C0(&v762[8], v116, v117);
                break;
              case 5:
                if ( *(_QWORD *)(v82 + 24) )
                {
                  v118 = *(_QWORD *)(v82 + 8);
                  if ( !v118 )
                  {
                    v778 = 1;
                    sub_141939020(&off_141A54900);
                  }
                  v119 = *(_QWORD *)(v82 + 16);
                  v778 = 1;
                  sub_140E11B90(&v754, v118, v119);
                }
                else
                {
                  v754.m128i_i64[0] = 0;
                  v755.m512i_i64[0] = 0;
                }
                *(_QWORD *)&v762[24] = v755.m512i_i64[0];
                *(__m128i *)&v762[8] = v754;
                break;
            }
            *(_OWORD *)&v659[16] = *(_OWORD *)&v762[16];
            v659[0] = v83;
            v659[1] = v762[1];
            *(_DWORD *)&v659[2] = *(_DWORD *)&v762[2];
            *(_WORD *)&v659[6] = *(_WORD *)&v762[6];
            *(_QWORD *)&v659[8] = *(_QWORD *)&v762[8];
            v762[0] = 0;
            v778 = 1;
            sub_140DF44E0(v762);
          }
          else
          {
            v762[0] = 0;
            *(__m128i *)&v659[16] = _mm_loadu_si128((const __m128i *)&v762[16]);
            v659[0] = 0;
            *(_QWORD *)&v659[1] = *(_QWORD *)&v762[1];
            *(_DWORD *)&v659[9] = *(_DWORD *)&v762[9];
            *(_WORD *)&v659[13] = *(_WORD *)&v762[13];
            v659[15] = v762[15];
          }
          v251 = sub_1416419F0(aType_11, 4, v659);
          if ( v251 && *(_BYTE *)v251 == 3 )
          {
            v252 = *(_QWORD *)(v251 + 24);
            v253 = *(_QWORD *)(v251 + 16);
            switch ( v252 )
            {
              case 10LL:
                if ( *(_QWORD *)v253 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v253 + 8) ^ 0x6174LL )
                  break;
                v254 = sub_1416419F0(aText_12, 4, v659);
                if ( !v254 )
                  break;
                if ( *(_BYTE *)v254 != 3 )
                  break;
                v255 = *(_QWORD *)(v254 + 16);
                v256 = *(_QWORD *)(v254 + 24);
                v657.m128i_i64[0] = v255;
                v657.m128i_i64[1] = v256;
                if ( !v256 )
                  break;
                v257 = (_QWORD *)sub_140DF0370(*(_QWORD *)(m128i_i64 + 648), *(_QWORD *)(m128i_i64 + 656), v22);
                if ( !v257 )
                  break;
                if ( *v257 != 0x8000000000000001uLL )
                  break;
                v258 = v257;
                sub_1402B7680(v257 + 4, v255, v256);
                v259 = v258 + 1;
                v260 = *((unsigned int *)v258 + 30);
                sub_1416AC440(v762, v259);
                v671 = _mm_loadu_si128((const __m128i *)&v762[8]);
                v766 = *(_QWORD *)v762;
                if ( *(_QWORD *)v762 == -1 )
                  break;
                *(_QWORD *)v759 = v766;
                *(__m128i *)&v759[8] = _mm_load_si128(&v671);
                v655.m128i_i64[0] = 0;
                v656.m128i_i64[0] = 0;
                nullsub_1(v261);
                v776 = (__m128i *)sub_140001650(4, 1);
                if ( !v776 )
                  sub_141938D2B(1, 4);
                v262 = v776;
                v776->m128i_i32[0] = 1701869940;
                *(_QWORD *)v767 = 4;
                *(_QWORD *)&v767[8] = v262;
                *(_QWORD *)&v767[16] = 4;
                v745 = 1;
                sub_14040FB10(v762, &off_141A53750);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C10);
                }
                v263 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v263;
                v745 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v264);
                v265 = (void *)sub_140001650(12, 1);
                if ( !v265 )
                  sub_141938D2B(1, 12);
                qmemcpy(v265, "output_index", 12);
                *(_QWORD *)v767 = 12;
                *(_QWORD *)&v767[8] = v265;
                *(_QWORD *)&v767[16] = 12;
                v762[0] = 2;
                *(_QWORD *)&v762[8] = 0;
                *(_QWORD *)&v762[16] = v260;
                sub_140E72AA0(&v754, &v655, v767, v762);
                if ( v754.m128i_i8[0] != -1 )
                  sub_140DF44E0(&v754);
                nullsub_1(v266);
                v776 = (__m128i *)sub_140001650(7, 1);
                if ( !v776 )
                  sub_141938D2B(1, 7);
                v267 = v776;
                *(__int32 *)((char *)v776->m128i_i32 + 3) = 1684627309;
                v267->m128i_i32[0] = 1835365481;
                *(_QWORD *)v767 = 7;
                *(_QWORD *)&v767[8] = v267;
                *(_QWORD *)&v767[16] = 7;
                v744 = 1;
                sub_14040F9F0(v762, v759);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C10);
                }
                v268 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v268;
                v744 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v269);
                v270 = (void *)sub_140001650(13, 1);
                if ( !v270 )
                  sub_141938D2B(1, 13);
                qmemcpy(v270, "content_index", 13);
                *(_QWORD *)v767 = 13;
                *(_QWORD *)&v767[8] = v270;
                *(_QWORD *)&v767[16] = 13;
                v762[0] = 2;
                *(_OWORD *)&v762[8] = 0;
                sub_140E72AA0(&v754, &v655, v767, v762);
                if ( v754.m128i_i8[0] != -1 )
                  sub_140DF44E0(&v754);
                nullsub_1(v271);
                v776 = (__m128i *)sub_140001650(5, 1);
                if ( !v776 )
                  sub_141938D2B(1, 5);
                v272 = v776;
                v776->m128i_i8[4] = 97;
                v272->m128i_i32[0] = 1953260900;
                *(_QWORD *)v767 = 5;
                *(_QWORD *)&v767[8] = v272;
                *(_QWORD *)&v767[16] = 5;
                v743 = 1;
                sub_14040FB10(v762, &v657);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C10);
                }
                v273 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v273;
                v743 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                *(__m128i *)&v762[8] = _mm_loadu_si128(&v655);
                *(_QWORD *)&v762[24] = v656.m128i_i64[0];
                v762[0] = 5;
                sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A53730, 26, (__int64)v762);
                m128i_i64 = v754.m128i_i64[1];
                v274 = v755.m512i_i64[0];
                v275 = v753;
                if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
                {
                  sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
                  v275 = v753;
                }
                else if ( !v755.m512i_i64[0] )
                {
                  goto LABEL_450;
                }
                sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v275), (const __m128i *)m128i_i64, v274);
                v275 = v753;
LABEL_450:
                v753 = v274 + v275;
                if ( v754.m128i_i64[0] )
                  sub_140001660(m128i_i64, v754.m128i_i64[0], 1);
                goto LABEL_752;
              case 14LL:
                if ( *(_QWORD *)v253 ^ 0x676E696B6E696874LL | *(_QWORD *)(v253 + 6) ^ 0x61746C65645F676ELL )
                  break;
                v282 = sub_1416419F0(aThinking_2, 8, v659);
                if ( !v282 )
                  break;
                if ( *(_BYTE *)v282 != 3 )
                  break;
                v283 = *(const __m128i **)(v282 + 16);
                v284 = *(_QWORD *)(v282 + 24);
                v657.m128i_i64[0] = (__int64)v283;
                v657.m128i_i64[1] = v284;
                if ( !v284 )
                  break;
                v285 = (_QWORD *)sub_140DF0370(*(_QWORD *)(m128i_i64 + 648), *(_QWORD *)(m128i_i64 + 656), v22);
                if ( !v285 )
                  break;
                v286 = v285;
                if ( !__OFSUB__(0, *v285) )
                  break;
                v287 = v285[6];
                if ( v284 > v285[4] - v287 )
                {
                  sub_14190D590((_DWORD)v285 + 32, v287, v284, 1, 1);
                  v287 = v286[6];
                }
                sub_1418F44E0((__m128i *)(v286[5] + v287), v283, v284);
                v286[6] += v284;
                v288 = *((unsigned int *)v286 + 26);
                sub_1416AC440(v762, v286 + 1);
                v671 = _mm_loadu_si128((const __m128i *)&v762[8]);
                v766 = *(_QWORD *)v762;
                if ( *(_QWORD *)v762 == -1 )
                  break;
                *(_QWORD *)v759 = v766;
                *(__m128i *)&v759[8] = _mm_load_si128(&v671);
                v655.m128i_i64[0] = 0;
                v656.m128i_i64[0] = 0;
                nullsub_1(v289);
                v776 = (__m128i *)sub_140001650(4, 1);
                if ( !v776 )
                  sub_141938D2B(1, 4);
                v290 = v776;
                v776->m128i_i32[0] = 1701869940;
                *(_QWORD *)v767 = 4;
                *(_QWORD *)&v767[8] = v290;
                *(_QWORD *)&v767[16] = 4;
                v742 = 1;
                sub_14040FB10(v762, &off_141A53838);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C40);
                }
                v291 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v291;
                v742 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v292);
                v293 = (void *)sub_140001650(12, 1);
                if ( !v293 )
                  sub_141938D2B(1, 12);
                qmemcpy(v293, "output_index", 12);
                *(_QWORD *)v767 = 12;
                *(_QWORD *)&v767[8] = v293;
                *(_QWORD *)&v767[16] = 12;
                v762[0] = 2;
                *(_QWORD *)&v762[8] = 0;
                *(_QWORD *)&v762[16] = v288;
                sub_140E72AA0(&v754, &v655, v767, v762);
                if ( v754.m128i_i8[0] != -1 )
                  sub_140DF44E0(&v754);
                nullsub_1(v294);
                v776 = (__m128i *)sub_140001650(7, 1);
                if ( !v776 )
                  sub_141938D2B(1, 7);
                v295 = v776;
                *(__int32 *)((char *)v776->m128i_i32 + 3) = 1684627309;
                v295->m128i_i32[0] = 1835365481;
                *(_QWORD *)v767 = 7;
                *(_QWORD *)&v767[8] = v295;
                *(_QWORD *)&v767[16] = 7;
                v741 = 1;
                sub_14040F9F0(v762, v759);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C40);
                }
                v296 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v296;
                v741 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v297);
                v298 = (void *)sub_140001650(13, 1);
                if ( !v298 )
                  sub_141938D2B(1, 13);
                qmemcpy(v298, "summary_index", 13);
                *(_QWORD *)v767 = 13;
                *(_QWORD *)&v767[8] = v298;
                *(_QWORD *)&v767[16] = 13;
                v762[0] = 2;
                *(_OWORD *)&v762[8] = 0;
                sub_140E72AA0(&v754, &v655, v767, v762);
                if ( v754.m128i_i8[0] != -1 )
                  sub_140DF44E0(&v754);
                nullsub_1(v299);
                v776 = (__m128i *)sub_140001650(5, 1);
                if ( !v776 )
                  sub_141938D2B(1, 5);
                v300 = v776;
                v776->m128i_i8[4] = 97;
                v300->m128i_i32[0] = 1953260900;
                *(_QWORD *)v767 = 5;
                *(_QWORD *)&v767[8] = v300;
                *(_QWORD *)&v767[16] = 5;
                v740 = 1;
                sub_14040FB10(v762, &v657);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53C40);
                }
                v301 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v301;
                v740 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                *(__m128i *)&v762[8] = _mm_loadu_si128(&v655);
                *(_QWORD *)&v762[24] = v656.m128i_i64[0];
                v762[0] = 5;
                sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A53810, 37, (__int64)v762);
                m128i_i64 = v754.m128i_i64[1];
                v302 = v755.m512i_i64[0];
                v303 = v753;
                if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
                {
                  sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
                  v303 = v753;
                }
                else if ( !v755.m512i_i64[0] )
                {
                  goto LABEL_493;
                }
                sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v303), (const __m128i *)m128i_i64, v302);
                v303 = v753;
LABEL_493:
                v753 = v302 + v303;
                if ( v754.m128i_i64[0] )
                  sub_140001660(m128i_i64, v754.m128i_i64[0], 1);
                goto LABEL_752;
              case 15LL:
                if ( *(_QWORD *)v253 ^ 0x6E6F697461746963LL | *(_QWORD *)(v253 + 7) ^ 0x61746C65645F736ELL )
                {
                  if ( !(*(_QWORD *)v253 ^ 0x727574616E676973LL | *(_QWORD *)(v253 + 7) ^ 0x61746C65645F6572LL) )
                  {
                    v276 = sub_1416419F0(aSignature_4, 9, v659);
                    if ( v276 )
                    {
                      if ( *(_BYTE *)v276 == 3 )
                      {
                        v277 = *(const __m128i **)(v276 + 16);
                        v278 = *(_QWORD *)(v276 + 24);
                        v279 = (_QWORD *)sub_140DF0370(*(_QWORD *)(m128i_i64 + 648), *(_QWORD *)(m128i_i64 + 656), v22);
                        if ( v279 )
                        {
                          v280 = v279;
                          if ( __OFSUB__(0, *v279) )
                          {
                            v281 = v279[9];
                            if ( v278 > v279[7] - v281 )
                            {
                              sub_14190D590((_DWORD)v279 + 56, v281, v278, 1, 1);
                              v281 = v280[9];
                            }
                            else if ( !v278 )
                            {
LABEL_462:
                              v280[9] = v278 + v281;
                              break;
                            }
                            sub_1418F44E0((__m128i *)(v280[8] + v281), v277, v278);
                            v281 = v280[9];
                            goto LABEL_462;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v462 = (_QWORD *)sub_140DF0370(*(_QWORD *)(m128i_i64 + 648), *(_QWORD *)(m128i_i64 + 656), v22);
                  v463 = sub_1416419F0(aCitation_0, 8, v659);
                  if ( v462 && v463 && *v462 == 0x8000000000000001uLL )
                  {
                    sub_140E8EDA0(v762, v463);
                    sub_140E68080(v462 + 10, v762);
                  }
                }
                break;
              case 16LL:
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v253), (__m128i)xmmword_1419D3510)) != 0xFFFF )
                  break;
                v464 = sub_1416419F0(aPartialJson_0, 12, v659);
                if ( !v464 )
                  break;
                if ( *(_BYTE *)v464 != 3 )
                  break;
                v465 = *(const __m128i **)(v464 + 16);
                v466 = *(_QWORD *)(v464 + 24);
                v657.m128i_i64[0] = (__int64)v465;
                v657.m128i_i64[1] = v466;
                if ( !v466 )
                  break;
                v467 = (__int64 *)sub_140DF0370(*(_QWORD *)(m128i_i64 + 648), *(_QWORD *)(m128i_i64 + 656), v22);
                if ( !v467 )
                  break;
                v468 = v467;
                if ( *v467 < 0 )
                  break;
                v469 = v467[11];
                if ( v466 > v467[9] - v469 )
                {
                  sub_14190D590((_DWORD)v467 + 72, v469, v466, 1, 1);
                  v469 = v468[11];
                }
                sub_1418F44E0((__m128i *)(v468[10] + v469), v465, v466);
                v468[11] += v466;
                if ( *((_BYTE *)v468 + 124) )
                  break;
                v470 = *((unsigned int *)v468 + 30);
                sub_1416AC440(v762, v468);
                v671 = _mm_loadu_si128((const __m128i *)&v762[8]);
                v766 = *(_QWORD *)v762;
                if ( *(_QWORD *)v762 == -1 )
                  break;
                *(_QWORD *)v759 = v766;
                *(__m128i *)&v759[8] = _mm_load_si128(&v671);
                v655.m128i_i64[0] = 0;
                v656.m128i_i64[0] = 0;
                nullsub_1(v471);
                v776 = (__m128i *)sub_140001650(4, 1);
                if ( !v776 )
                  sub_141938D2B(1, 4);
                v472 = v776;
                v776->m128i_i32[0] = 1701869940;
                *(_QWORD *)v767 = 4;
                *(_QWORD *)&v767[8] = v472;
                *(_QWORD *)&v767[16] = 4;
                v748 = 1;
                sub_14040FB10(v762, &off_141A538F0);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53BF8);
                }
                v473 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v473;
                v748 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v474);
                v475 = (void *)sub_140001650(12, 1);
                if ( !v475 )
                  sub_141938D2B(1, 12);
                qmemcpy(v475, "output_index", 12);
                *(_QWORD *)v767 = 12;
                *(_QWORD *)&v767[8] = v475;
                *(_QWORD *)&v767[16] = 12;
                v762[0] = 2;
                *(_QWORD *)&v762[8] = 0;
                *(_QWORD *)&v762[16] = v470;
                sub_140E72AA0(&v754, &v655, v767, v762);
                if ( v754.m128i_i8[0] != -1 )
                  sub_140DF44E0(&v754);
                nullsub_1(v476);
                v776 = (__m128i *)sub_140001650(7, 1);
                if ( !v776 )
                  sub_141938D2B(1, 7);
                v477 = v776;
                *(__int32 *)((char *)v776->m128i_i32 + 3) = 1684627309;
                v477->m128i_i32[0] = 1835365481;
                *(_QWORD *)v767 = 7;
                *(_QWORD *)&v767[8] = v477;
                *(_QWORD *)&v767[16] = 7;
                v747 = 1;
                sub_14040F9F0(v762, v759);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53BF8);
                }
                v478 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v478;
                v747 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v479);
                v776 = (__m128i *)sub_140001650(5, 1);
                if ( !v776 )
                  sub_141938D2B(1, 5);
                v480 = v776;
                v776->m128i_i8[4] = 97;
                v480->m128i_i32[0] = 1953260900;
                *(_QWORD *)v767 = 5;
                *(_QWORD *)&v767[8] = v480;
                *(_QWORD *)&v767[16] = 5;
                v746 = 1;
                sub_14040FB10(v762, &v657);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53BF8);
                }
                v481 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v481;
                v746 = 0;
                sub_140E72AA0(v762, &v655, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                *(__m128i *)&v762[8] = _mm_loadu_si128(&v655);
                *(_QWORD *)&v762[24] = v656.m128i_i64[0];
                v762[0] = 5;
                sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A538C8, 38, (__int64)v762);
                m128i_i64 = v754.m128i_i64[1];
                v482 = v755.m512i_i64[0];
                v483 = v753;
                if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
                {
                  sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
                  v483 = v753;
                }
                else if ( !v755.m512i_i64[0] )
                {
                  goto LABEL_750;
                }
                sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v483), (const __m128i *)m128i_i64, v482);
                v483 = v753;
LABEL_750:
                v753 = v482 + v483;
                if ( v754.m128i_i64[0] )
                  sub_140001660(m128i_i64, v754.m128i_i64[0], 1);
LABEL_752:
                sub_140DF44E0(v762);
                if ( v766 )
                  sub_140001660(*(_QWORD *)&v759[8], v766, 1);
                break;
              default:
                break;
            }
          }
          v778 = 1;
          sub_140DF44E0(v659);
        }
LABEL_892:
        result = v753;
        v572 = v648;
        v648[1].m128i_i64[0] = v753;
        *v572 = _mm_loadu_si128(&v752);
        return result;
      }
      v778 = 1;
      v39 = sub_1416419F0(aIndex_1, 5, v3);
      if ( v39 )
      {
        v40 = 0;
        v41 = 0;
        if ( !*(_QWORD *)(v39 + 8) )
          v41 = *(_QWORD *)(v39 + 16);
        if ( *(_BYTE *)v39 == 2 )
          v40 = v41;
        v766 = v40;
      }
      else
      {
        v766 = 0;
      }
      v778 = 1;
      v80 = sub_1416419F0(aContentBlock_0, 13, v3);
      if ( v80 )
      {
        v81 = *(_BYTE *)v80;
        switch ( *(_BYTE *)v80 )
        {
          case 0:
            break;
          case 1:
            v762[1] = *(_BYTE *)(v80 + 1);
            break;
          case 2:
            *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)(v80 + 8));
            break;
          case 3:
            v778 = 1;
            sub_1416AC440(&v762[8], v80 + 8);
            break;
          case 4:
            v109 = *(_QWORD *)(v80 + 16);
            v110 = *(_QWORD *)(v80 + 24);
            v778 = 1;
            sub_1403918C0(&v762[8], v109, v110);
            break;
          case 5:
            if ( *(_QWORD *)(v80 + 24) )
            {
              v111 = *(_QWORD *)(v80 + 8);
              if ( !v111 )
              {
                v778 = 1;
                sub_141939020(&off_141A54900);
              }
              v112 = *(_QWORD *)(v80 + 16);
              v778 = 1;
              sub_140E11B90(&v754, v111, v112);
            }
            else
            {
              v754.m128i_i64[0] = 0;
              v755.m512i_i64[0] = 0;
            }
            *(_QWORD *)&v762[24] = v755.m512i_i64[0];
            *(__m128i *)&v762[8] = v754;
            break;
        }
        v656 = *(__m128i *)&v762[16];
        v655.m128i_i8[0] = v81;
        v655.m128i_i8[1] = v762[1];
        *(__int32 *)((char *)v655.m128i_i32 + 2) = *(_DWORD *)&v762[2];
        v655.m128i_i16[3] = *(_WORD *)&v762[6];
        v655.m128i_i64[1] = *(_QWORD *)&v762[8];
        v762[0] = 0;
        v778 = 1;
        sub_140DF44E0(v762);
      }
      else
      {
        v762[0] = 0;
        v656 = _mm_loadu_si128((const __m128i *)&v762[16]);
        v655.m128i_i8[0] = 0;
        *(__int64 *)((char *)v655.m128i_i64 + 1) = *(_QWORD *)&v762[1];
        *(__int32 *)((char *)&v655.m128i_i32[2] + 1) = *(_DWORD *)&v762[9];
        *(__int16 *)((char *)&v655.m128i_i16[6] + 1) = *(_WORD *)&v762[13];
        v655.m128i_i8[15] = v762[15];
      }
      v120 = sub_1416419F0(aType_11, 4, &v655);
      if ( v120 )
      {
        v121 = 0;
        if ( *(_BYTE *)v120 == 3 )
          v121 = *(_QWORD *)(v120 + 24);
        v122 = 1;
        if ( *(_BYTE *)v120 == 3 )
          v122 = *(_QWORD *)(v120 + 16);
      }
      else
      {
        v122 = 1;
        v121 = 0;
      }
      sub_140E4BBB0(m128i_i64, &v752);
      v124 = m128i_i64;
      if ( v121 == 4 && *(_DWORD *)v122 == 1954047348 && !*(_QWORD *)(m128i_i64 + 664) )
        goto LABEL_223;
      v125 = *(_QWORD *)(m128i_i64 + 160);
      *(_QWORD *)(m128i_i64 + 160) = -1;
      if ( v125 != -1 )
      {
        *(_OWORD *)&v762[112] = *(_OWORD *)(v124 + 264);
        *(_OWORD *)&v762[96] = *(_OWORD *)(v124 + 248);
        *(_OWORD *)&v762[80] = *(_OWORD *)(v124 + 232);
        v126 = _mm_loadu_si128((const __m128i *)(v124 + 168));
        v127 = _mm_loadu_si128((const __m128i *)(v124 + 184));
        v128 = *(_OWORD *)(v124 + 200);
        *(_OWORD *)&v762[64] = *(_OWORD *)(v124 + 216);
        *(_OWORD *)&v762[48] = v128;
        *(__m128i *)&v762[32] = v127;
        *(__m128i *)&v762[16] = v126;
        *(_QWORD *)&v762[8] = v125;
        *(_QWORD *)v762 = 0x8000000000000001uLL;
        sub_140E508A0(v124, (unsigned int)v762, 0, v123, (__int64)&v752);
        v124 = m128i_i64;
      }
      switch ( v121 )
      {
        case 17LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v122 + 16)), (__m128i)xmmword_1419D35A0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v122), (__m128i)xmmword_1419D3590))) != 0xFFFF )
            goto LABEL_891;
          goto LABEL_216;
        case 8LL:
          if ( *(_QWORD *)v122 != 0x676E696B6E696874LL )
          {
            if ( *(_QWORD *)v122 == 0x6573755F6C6F6F74LL )
            {
              v129 = *(unsigned int *)(v124 + 776);
              *(_DWORD *)(v124 + 776) = v129 + 1;
              v130 = sub_1416419F0(aId_8, 2, &v655);
              if ( v130 )
              {
                v131 = 0;
                if ( *(_BYTE *)v130 == 3 )
                  v131 = *(_QWORD *)(v130 + 24);
                v132 = 1;
                if ( *(_BYTE *)v130 == 3 )
                  v132 = *(_QWORD *)(v130 + 16);
              }
              else
              {
                v132 = 1;
                v131 = 0;
              }
              sub_14072C410((unsigned int)v762, v131, 0, 1, 1);
              v304 = *(_QWORD *)&v762[8];
              if ( *(_DWORD *)v762 == 1 )
                sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
              v305 = *(_QWORD *)&v762[16];
              if ( v131 )
              {
                sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v132, v131);
                v651.m128i_i64[0] = v304;
                v651.m128i_i64[1] = v305;
                v652 = v131;
                goto LABEL_760;
              }
              v651 = *(__m128i *)&v762[8];
              v652 = 0;
              v765 = 1;
              sub_141568C20(v762);
              *(__m128i *)v659 = _mm_loadu_si128((const __m128i *)v762);
              v765 = 1;
              sub_140E8F110(v762, v659);
              v776 = *(__m128i **)&v762[8];
              if ( *(_QWORD *)&v762[16] <= 0x10u )
              {
                if ( *(_QWORD *)&v762[16] != 16 )
LABEL_504:
                  sub_141938F40(*(_DWORD *)&v762[8], *(_DWORD *)&v762[16], 0, 16, (__int64)&off_141A53D90);
              }
              else if ( *(char *)(*(_QWORD *)&v762[8] + 16LL) < -64 )
              {
                goto LABEL_504;
              }
              *(_QWORD *)v767 = *(_QWORD *)&v762[8];
              *(_QWORD *)&v767[8] = 16;
              v754.m128i_i64[0] = (__int64)v767;
              v754.m128i_i64[1] = (__int64)sub_140186EE0;
              sub_1416ABFD0(&v637, &unk_141A538A8, &v754);
              if ( *(_QWORD *)v762 )
                sub_140001660(v776, *(_QWORD *)v762, 1);
              if ( v651.m128i_i64[0] )
                sub_140001660(v651.m128i_i64[1], v651.m128i_i64[0], 1);
              v652 = v638;
              v651 = _mm_loadu_si128(&v637);
LABEL_760:
              v765 = 1;
              v484 = sub_1416419F0(aName_9, 4, &v655);
              if ( v484 )
              {
                v485 = 0;
                if ( *(_BYTE *)v484 == 3 )
                  v485 = *(_QWORD *)(v484 + 24);
                v486 = 1;
                if ( *(_BYTE *)v484 == 3 )
                  v486 = *(_QWORD *)(v484 + 16);
              }
              else
              {
                v486 = 1;
                v485 = 0;
              }
              sub_14072C410((unsigned int)v762, v485, 0, 1, 1);
              v487 = *(_QWORD *)&v762[8];
              if ( *(_DWORD *)v762 == 1 )
              {
                v765 = 1;
                sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
              }
              v488 = *(_QWORD **)&v762[16];
              if ( v485 )
              {
                sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v486, v485);
                v657.m128i_i64[0] = v487;
                v657.m128i_i64[1] = (__int64)v488;
                v658 = v485;
                if ( v485 == 11
                  && !(*v488 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)v488 + 3) ^ 0x6863726165735F6CLL) )
                {
                  v773 = 1;
                  v489 = (_QWORD *)sub_1402B82A0(m128i_i64 + 280, v488, 11);
                  if ( !v489
                    || v490 == 11
                    && !(*v489 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)v489 + 3) ^ 0x6863726165735F6CLL) )
                  {
                    v773 = 1;
                    sub_14026E410(&v671);
                    *(_QWORD *)v759 = 0;
                    *(_QWORD *)&v759[16] = 0;
                    nullsub_1(v491);
                    v492 = (__m128i *)sub_140001650(4, 1);
                    if ( !v492 )
                      sub_141938D2B(1, 4);
                    v492->m128i_i32[0] = 1701869940;
                    *(_QWORD *)v767 = 4;
                    v776 = v492;
                    *(_QWORD *)&v767[8] = v492;
                    *(_QWORD *)&v767[16] = 4;
                    v717 = 1;
                    sub_14040FB10(v762, &off_141A53E00);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E10);
                    }
                    v493 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v493;
                    v717 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v494);
                    v495 = (__m128i *)sub_140001650(2, 1);
                    if ( !v495 )
                      sub_141938D2B(1, 2);
                    v495->m128i_i16[0] = 25705;
                    *(_QWORD *)v767 = 2;
                    v776 = v495;
                    *(_QWORD *)&v767[8] = v495;
                    *(_QWORD *)&v767[16] = 2;
                    v649.m128i_i64[0] = (__int64)&v671;
                    v716 = 1;
                    sub_14040FA80(v762, &v649);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E10);
                    }
                    v496 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v496;
                    v716 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v497);
                    v498 = (__m128i *)sub_140001650(6, 1);
                    if ( !v498 )
                      sub_141938D2B(1, 6);
                    v498->m128i_i16[2] = 29557;
                    v498->m128i_i32[0] = 1952543859;
                    *(_QWORD *)v767 = 6;
                    v776 = v498;
                    *(_QWORD *)&v767[8] = v498;
                    *(_QWORD *)&v767[16] = 6;
                    v715 = 1;
                    sub_14040FB10(v762, &off_141A534D8);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E10);
                    }
                    v499 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v499;
                    v715 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v500);
                    v501 = sub_140001650(7, 1);
                    if ( !v501 )
                      sub_141938D2B(1, 7);
                    *(_DWORD *)(v501 + 3) = 1684627308;
                    *(_DWORD *)v501 = 1819042147;
                    *(_QWORD *)v767 = 7;
                    v776 = (__m128i *)v501;
                    *(_QWORD *)&v767[8] = v501;
                    *(_QWORD *)&v767[16] = 7;
                    v649.m128i_i64[0] = (__int64)&v651;
                    v714 = 1;
                    sub_14040FA80(v762, &v649);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E10);
                    }
                    v502 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v502;
                    v714 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v503);
                    v504 = (__m128i *)sub_140001650(9, 1);
                    if ( !v504 )
                      sub_141938D2B(1, 9);
                    v504->m128i_i64[0] = 0x6F69747563657865LL;
                    v504->m128i_i8[8] = 110;
                    *(_QWORD *)v767 = 9;
                    v776 = v504;
                    *(_QWORD *)&v767[8] = v504;
                    *(_QWORD *)&v767[16] = 9;
                    v713 = 1;
                    sub_14040FB10(v762, &off_141A53E30);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E10);
                    }
                    v505 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v505;
                    v713 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v506);
                    v507 = sub_140001650(9, 1);
                    if ( !v507 )
                      sub_141938D2B(1, 9);
                    *(_QWORD *)v507 = 0x746E656D75677261LL;
                    *(_BYTE *)(v507 + 8) = 115;
                    *(_QWORD *)v767 = 9;
                    *(_QWORD *)&v767[8] = v507;
                    *(_QWORD *)&v767[16] = 9;
                    *(_QWORD *)&v762[8] = 0;
                    *(_QWORD *)&v762[24] = 0;
                    v762[0] = 5;
                    sub_140E72AA0(&v754, v759, v767, v762);
                    if ( v754.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v754);
                    *(__m128i *)&v659[8] = _mm_loadu_si128((const __m128i *)v759);
                    *(_QWORD *)&v659[24] = *(_QWORD *)&v759[16];
                    v659[0] = 5;
                    v509 = 2;
                    v510 = 1;
                    v511 = m128i_i64;
LABEL_857:
                    if ( *(_QWORD *)(v511 + 632) )
                    {
                      v772 = 1;
                      v551 = (_QWORD *)sub_1416419F0(aType_11, 4, v659);
                      if ( !v551 )
                        v551 = off_1421E7108;
                      if ( *(_BYTE *)v551 == 3 )
                      {
                        v552 = v551[2];
                        v553 = v551[3];
                      }
                      else
                      {
                        v552 = 1;
                        v553 = 0;
                      }
                      v772 = 1;
                      sub_1401F5F00(v511 + 632, (unsigned int)aAdded_2, 5, v129, v552, v553, 0);
                    }
                    *(_QWORD *)v759 = 0;
                    *(_QWORD *)&v759[16] = 0;
                    nullsub_1(v508);
                    v554 = (__m128i *)sub_140001650(4, 1);
                    if ( !v554 )
                      sub_141938D2B(1, 4);
                    v554->m128i_i32[0] = 1701869940;
                    *(_QWORD *)v767 = 4;
                    v776 = v554;
                    *(_QWORD *)&v767[8] = v554;
                    *(_QWORD *)&v767[16] = 4;
                    v712 = 1;
                    sub_14040FB10(v762, &off_141A536D0);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E40);
                    }
                    v555 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v555;
                    v712 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v556);
                    v557 = (void *)sub_140001650(12, 1);
                    if ( !v557 )
                      sub_141938D2B(1, 12);
                    qmemcpy(v557, "output_index", 12);
                    *(_QWORD *)v767 = 12;
                    *(_QWORD *)&v767[8] = v557;
                    *(_QWORD *)&v767[16] = 12;
                    v762[0] = 2;
                    *(_QWORD *)&v762[8] = 0;
                    *(_QWORD *)&v762[16] = v129;
                    sub_140E72AA0(&v754, v759, v767, v762);
                    if ( v754.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v754);
                    nullsub_1(v558);
                    v559 = sub_140001650(7, 1);
                    if ( !v559 )
                      sub_141938D2B(1, 7);
                    *(_DWORD *)(v559 + 3) = 1684627309;
                    *(_DWORD *)v559 = 1835365481;
                    *(_QWORD *)v767 = 7;
                    v776 = (__m128i *)v559;
                    *(_QWORD *)&v767[8] = v559;
                    *(_QWORD *)&v767[16] = 7;
                    v649.m128i_i64[0] = (__int64)&v671;
                    v711 = 1;
                    sub_14040FA80(v762, &v649);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E40);
                    }
                    v560 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v560;
                    v711 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    nullsub_1(v561);
                    v562 = (__m128i *)sub_140001650(4, 1);
                    if ( !v562 )
                      sub_141938D2B(1, 4);
                    v562->m128i_i32[0] = 1835365481;
                    *(_QWORD *)v767 = 4;
                    v776 = v562;
                    *(_QWORD *)&v767[8] = v562;
                    *(_QWORD *)&v767[16] = 4;
                    v710 = 1;
                    sub_140412420(v762, v659);
                    if ( v762[0] == 0xFF )
                    {
                      v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v754,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A53E40);
                    }
                    v563 = _mm_loadu_si128((const __m128i *)v762);
                    *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                    v754 = v563;
                    v710 = 0;
                    sub_140E72AA0(v762, v759, v767, &v754);
                    if ( v762[0] != 0xFF )
                      sub_140DF44E0(v762);
                    v564 = m128i_i64;
                    *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v759);
                    *(_QWORD *)&v762[24] = *(_QWORD *)&v759[16];
                    v762[0] = 5;
                    sub_140E4D190(
                      (unsigned int)&v754,
                      m128i_i64 + 768,
                      (unsigned int)&xmmword_141A536B0,
                      26,
                      (__int64)v762);
                    v565 = (const __m128i *)v754.m128i_i64[1];
                    v566 = v755.m512i_i64[0];
                    v567 = v753;
                    if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
                    {
                      v776 = (__m128i *)v754.m128i_i64[1];
                      sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
                      v567 = v753;
                      v564 = m128i_i64;
                      v565 = v776;
                    }
                    else if ( !v755.m512i_i64[0] )
                    {
LABEL_882:
                      v753 = v566 + v567;
                      if ( v754.m128i_i64[0] )
                        sub_140001660(v565, v754.m128i_i64[0], 1);
                      v772 = 1;
                      sub_140DF44E0(v762);
                      v772 = 1;
                      v568 = (_BYTE *)sub_1416419F0(aInput_4, 5, &v655);
                      v569 = 1;
                      if ( v568 && *v568 )
                      {
                        v772 = 1;
                        sub_140E8F040(v762, v568);
                        v569 = *(_QWORD *)&v762[8];
                        v570 = *(_QWORD *)v762;
                        v571 = *(_QWORD *)&v762[16];
                      }
                      else
                      {
                        v570 = 0;
                        v571 = 0;
                      }
                      v755.m512i_i64[0] = v672;
                      v754 = _mm_load_si128(&v671);
                      *(__m128i *)&v755.m512i_u64[1] = v651;
                      v755.m512i_i64[3] = v652;
                      *(__m128i *)&v755.m512i_u64[4] = _mm_loadu_si128(&v657);
                      v755.m512i_i64[6] = v658;
                      *(__m128i *)v762 = v754;
                      *(_OWORD *)&v762[48] = *(_OWORD *)&v755.m512i_u64[4];
                      *(_QWORD *)&v762[64] = v658;
                      *(_QWORD *)&v762[16] = v672;
                      *(__m128i *)&v762[24] = v651;
                      *(_QWORD *)&v762[40] = v652;
                      *(_QWORD *)&v762[72] = 0;
                      *(_QWORD *)&v762[80] = 1;
                      *(_QWORD *)&v762[88] = 0;
                      *(_QWORD *)&v762[96] = v570;
                      *(_QWORD *)&v762[104] = v569;
                      *(_QWORD *)&v762[112] = v571;
                      *(_DWORD *)&v762[120] = v129;
                      v762[124] = v510;
                      v762[125] = v509;
                      v772 = 0;
                      sub_140E80090(&v754, v564 + 648, v766, v762);
                      if ( v754.m128i_i64[0] != -1 )
                      {
                        v772 = 0;
                        sub_140DF5CA0(&v754);
                      }
                      v760 = 0;
                      sub_140DF44E0(v659);
                      goto LABEL_891;
                    }
                    sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v567), v565, v566);
                    v567 = v753;
                    goto LABEL_882;
                  }
                }
              }
              else
              {
                v657 = *(__m128i *)&v762[8];
                v658 = 0;
              }
              v512 = (char *)(m128i_i64 + 280);
              v773 = 1;
              v513 = sub_1402B82A0(m128i_i64 + 280, v657.m128i_i64[1], v658);
              v773 = 1;
              v510 = sub_140DDF260(v513, v514, m128i_i64 + 584, &v657);
              if ( v510 )
              {
                v773 = 1;
                sub_14026E240(&v671);
                *(_QWORD *)v759 = 0;
                *(_QWORD *)&v759[16] = 0;
                nullsub_1(v515);
                v516 = (__m128i *)sub_140001650(4, 1);
                if ( !v516 )
                  sub_141938D2B(1, 4);
                v516->m128i_i32[0] = 1701869940;
                *(_QWORD *)v767 = 4;
                v776 = v516;
                *(_QWORD *)&v767[8] = v516;
                *(_QWORD *)&v767[16] = 4;
                v723 = 1;
                sub_14040FB10(v762, &off_141A535D8);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v517 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v517;
                v723 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v518);
                v519 = (__m128i *)sub_140001650(2, 1);
                if ( !v519 )
                  sub_141938D2B(1, 2);
                v519->m128i_i16[0] = 25705;
                *(_QWORD *)v767 = 2;
                v776 = v519;
                *(_QWORD *)&v767[8] = v519;
                *(_QWORD *)&v767[16] = 2;
                v649.m128i_i64[0] = (__int64)&v671;
                v722 = 1;
                sub_14040FA80(v762, &v649);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v520 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v520;
                v722 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v521);
                v522 = (__m128i *)sub_140001650(6, 1);
                if ( !v522 )
                  sub_141938D2B(1, 6);
                v522->m128i_i16[2] = 29557;
                v522->m128i_i32[0] = 1952543859;
                *(_QWORD *)v767 = 6;
                v776 = v522;
                *(_QWORD *)&v767[8] = v522;
                *(_QWORD *)&v767[16] = 6;
                v721 = 1;
                sub_14040FB10(v762, &off_141A534D8);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v523 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v523;
                v721 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v524);
                v525 = sub_140001650(7, 1);
                if ( !v525 )
                  sub_141938D2B(1, 7);
                *(_DWORD *)(v525 + 3) = 1684627308;
                *(_DWORD *)v525 = 1819042147;
                *(_QWORD *)v767 = 7;
                v776 = (__m128i *)v525;
                *(_QWORD *)&v767[8] = v525;
                *(_QWORD *)&v767[16] = 7;
                v649.m128i_i64[0] = (__int64)&v651;
                v720 = 1;
                sub_14040FA80(v762, &v649);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v526 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v526;
                v720 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v527);
                v528 = (__m128i *)sub_140001650(4, 1);
                if ( !v528 )
                  sub_141938D2B(1, 4);
                v528->m128i_i32[0] = 1701667182;
                *(_QWORD *)v767 = 4;
                v776 = v528;
                *(_QWORD *)&v767[8] = v528;
                *(_QWORD *)&v767[16] = 4;
                v649.m128i_i64[0] = (__int64)&v657;
                v719 = 1;
                sub_14040FA80(v762, &v649);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v529 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v529;
                v719 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                nullsub_1(v530);
                v531 = (__m128i *)sub_140001650(5, 1);
                if ( !v531 )
                  sub_141938D2B(1, 5);
                v531->m128i_i8[4] = 116;
                v531->m128i_i32[0] = 1970302569;
                *(_QWORD *)v767 = 5;
                v776 = v531;
                *(_QWORD *)&v767[8] = v531;
                *(_QWORD *)&v767[16] = 5;
                v718 = 1;
                sub_14040FB10(v762, &unk_141A52EE0);
                if ( v762[0] == 0xFF )
                {
                  v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                  sub_141939040(
                    (unsigned int)aCalledResultUn_16,
                    43,
                    (unsigned int)&v754,
                    (unsigned int)&off_141A52FE8,
                    (__int64)&off_141A53DD8);
                }
                v532 = _mm_loadu_si128((const __m128i *)v762);
                *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
                v754 = v532;
                v718 = 0;
                sub_140E72AA0(v762, v759, v767, &v754);
                if ( v762[0] != 0xFF )
                  sub_140DF44E0(v762);
                *(__m128i *)&v659[8] = _mm_loadu_si128((const __m128i *)v759);
                *(_QWORD *)&v659[24] = *(_QWORD *)&v759[16];
                v509 = 1;
LABEL_856:
                v659[0] = 5;
                v772 = 1;
                sub_1402B8770(v512, v659, v657.m128i_i64[1], v658);
                v511 = m128i_i64;
                goto LABEL_857;
              }
              v773 = 1;
              sub_141568C20(v762);
              *(__m128i *)v767 = _mm_loadu_si128((const __m128i *)v762);
              v773 = 1;
              sub_140E8F110(v762, v767);
              v776 = *(__m128i **)&v762[8];
              if ( *(_QWORD *)&v762[16] <= 0xCu )
              {
                if ( *(_QWORD *)&v762[16] != 12 )
LABEL_827:
                  sub_141938F40(*(_DWORD *)&v762[8], *(_DWORD *)&v762[16], 0, 12, (__int64)&off_141A53DA8);
              }
              else if ( *(char *)(*(_QWORD *)&v762[8] + 12LL) < -64 )
              {
                goto LABEL_827;
              }
              *(_QWORD *)v759 = *(_QWORD *)&v762[8];
              *(_QWORD *)&v759[8] = 12;
              *(_QWORD *)v659 = v759;
              *(_QWORD *)&v659[8] = sub_140186EE0;
              sub_1416ABFD0(&v754, &unk_141A53860, v659);
              if ( *(_QWORD *)v762 )
                sub_140001660(v776, *(_QWORD *)v762, 1);
              v671 = _mm_loadu_si128(&v754);
              v672 = v755.m512i_i64[0];
              *(_QWORD *)v759 = 0;
              *(_QWORD *)&v759[16] = 0;
              nullsub_1(v533);
              v534 = (__m128i *)sub_140001650(4, 1);
              if ( !v534 )
                sub_141938D2B(1, 4);
              v534->m128i_i32[0] = 1701869940;
              *(_QWORD *)v767 = 4;
              v776 = v534;
              *(_QWORD *)&v767[8] = v534;
              *(_QWORD *)&v767[16] = 4;
              v729 = 1;
              sub_14040FB10(v762, &off_141A535B8);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v535 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v535;
              v729 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              nullsub_1(v536);
              v537 = (__m128i *)sub_140001650(2, 1);
              if ( !v537 )
                sub_141938D2B(1, 2);
              v537->m128i_i16[0] = 25705;
              *(_QWORD *)v767 = 2;
              v776 = v537;
              *(_QWORD *)&v767[8] = v537;
              *(_QWORD *)&v767[16] = 2;
              v649.m128i_i64[0] = (__int64)&v671;
              v728 = 1;
              sub_14040FA80(v762, &v649);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v538 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v538;
              v728 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              nullsub_1(v539);
              v540 = (__m128i *)sub_140001650(6, 1);
              if ( !v540 )
                sub_141938D2B(1, 6);
              v540->m128i_i16[2] = 29557;
              v540->m128i_i32[0] = 1952543859;
              *(_QWORD *)v767 = 6;
              v776 = v540;
              *(_QWORD *)&v767[8] = v540;
              *(_QWORD *)&v767[16] = 6;
              v727 = 1;
              sub_14040FB10(v762, &off_141A534D8);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v541 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v541;
              v727 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              nullsub_1(v542);
              v543 = sub_140001650(7, 1);
              if ( !v543 )
                sub_141938D2B(1, 7);
              *(_DWORD *)(v543 + 3) = 1684627308;
              *(_DWORD *)v543 = 1819042147;
              *(_QWORD *)v767 = 7;
              v776 = (__m128i *)v543;
              *(_QWORD *)&v767[8] = v543;
              *(_QWORD *)&v767[16] = 7;
              v649.m128i_i64[0] = (__int64)&v651;
              v726 = 1;
              sub_14040FA80(v762, &v649);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v544 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v544;
              v726 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              nullsub_1(v545);
              v546 = (__m128i *)sub_140001650(4, 1);
              if ( !v546 )
                sub_141938D2B(1, 4);
              v546->m128i_i32[0] = 1701667182;
              *(_QWORD *)v767 = 4;
              v776 = v546;
              *(_QWORD *)&v767[8] = v546;
              *(_QWORD *)&v767[16] = 4;
              v649.m128i_i64[0] = (__int64)&v657;
              v725 = 1;
              sub_14040FA80(v762, &v649);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v547 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v547;
              v725 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              nullsub_1(v548);
              v549 = (__m128i *)sub_140001650(9, 1);
              if ( !v549 )
                sub_141938D2B(1, 9);
              v549->m128i_i64[0] = 0x746E656D75677261LL;
              v549->m128i_i8[8] = 115;
              *(_QWORD *)v767 = 9;
              v776 = v549;
              *(_QWORD *)&v767[8] = v549;
              *(_QWORD *)&v767[16] = 9;
              v724 = 1;
              sub_14040FB10(v762, &unk_141A52EE0);
              if ( v762[0] == 0xFF )
              {
                v754.m128i_i64[0] = *(_QWORD *)&v762[8];
                sub_141939040(
                  (unsigned int)aCalledResultUn_16,
                  43,
                  (unsigned int)&v754,
                  (unsigned int)&off_141A52FE8,
                  (__int64)&off_141A53DC0);
              }
              v550 = _mm_loadu_si128((const __m128i *)v762);
              *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
              v754 = v550;
              v724 = 0;
              sub_140E72AA0(v762, v759, v767, &v754);
              if ( v762[0] != 0xFF )
                sub_140DF44E0(v762);
              *(__m128i *)&v659[8] = _mm_loadu_si128((const __m128i *)v759);
              *(_QWORD *)&v659[24] = *(_QWORD *)&v759[16];
              v509 = 0;
              goto LABEL_856;
            }
LABEL_891:
            v778 = 1;
            sub_140DF44E0(&v655);
            goto LABEL_892;
          }
LABEL_216:
          v133 = *(unsigned int *)(v124 + 776);
          *(_DWORD *)(v124 + 776) = v133 + 1;
          if ( *(_QWORD *)(v124 + 632) )
            sub_1401F5F00(m128i_i64 + 632, (unsigned int)aAdded_2, 5, v133, (__int64)aReasoning_4, 9, 0);
          sub_141568C20(v762);
          *(__m128i *)v659 = _mm_loadu_si128((const __m128i *)v762);
          v754.m128i_i64[0] = 0;
          v754.m128i_i64[1] = 1;
          v755.m512i_i64[0] = 0;
          *(_QWORD *)&v762[16] = 1610612768;
          *(_QWORD *)v762 = &v754;
          *(_QWORD *)&v762[8] = &off_141A54A20;
          if ( (unsigned __int8)sub_141569DC0(v659, v762) )
            sub_141939040(
              (unsigned int)aADisplayImplem_9,
              55,
              (unsigned int)&v647,
              (unsigned int)&unk_141A53038,
              (__int64)&off_141A54AD8);
          v771 = (const __m128i *)v754.m128i_i64[1];
          v776 = (__m128i *)v754.m128i_i64[0];
          if ( v755.m512i_i64[0] <= 0xCuLL )
          {
            if ( v755.m512i_i64[0] != 12 )
LABEL_221:
              sub_141938F40(v754.m128i_i32[2], v755.m512i_i32[0], 0, 12, (__int64)&off_141A53F08);
          }
          else if ( *(char *)(v754.m128i_i64[1] + 12) < -64 )
          {
            goto LABEL_221;
          }
          *(_QWORD *)v767 = v754.m128i_i64[1];
          *(_QWORD *)&v767[8] = 12;
          v754.m128i_i64[0] = (__int64)v767;
          v754.m128i_i64[1] = (__int64)sub_140186EE0;
          sub_1416ABFD0(v762, &unk_141A537F0, &v754);
          if ( v776 )
            sub_140001660(v771, v776, 1);
          v651 = _mm_loadu_si128((const __m128i *)v762);
          v652 = *(_QWORD *)&v762[16];
          v690 = 1;
          v146 = sub_1416419F0(aThinking_2, 8, &v655);
          if ( v146 )
          {
            v147 = 0;
            if ( *(_BYTE *)v146 == 3 )
              v147 = *(_QWORD *)(v146 + 24);
            v148 = 1;
            if ( *(_BYTE *)v146 == 3 )
              v148 = *(_QWORD *)(v146 + 16);
          }
          else
          {
            v148 = 1;
            v147 = 0;
          }
          sub_14072C410((unsigned int)v762, v147, 0, 1, 1);
          v149 = *(_QWORD *)&v762[8];
          if ( *(_DWORD *)v762 == 1 )
          {
            v690 = 1;
            sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
          }
          v150 = *(_QWORD *)&v762[16];
          if ( v147 )
            sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v148, v147);
          v657.m128i_i64[0] = v149;
          v657.m128i_i64[1] = v150;
          v658 = v147;
          v689 = 1;
          v151 = sub_1416419F0(aSignature_4, 9, &v655);
          if ( v151 )
          {
            v152 = 0;
            if ( *(_BYTE *)v151 == 3 )
              v152 = *(_QWORD *)(v151 + 24);
            v153 = 1;
            if ( *(_BYTE *)v151 == 3 )
              v153 = *(_QWORD *)(v151 + 16);
          }
          else
          {
            v153 = 1;
            v152 = 0;
          }
          v645 = (const __m128i *)v122;
          sub_14072C410((unsigned int)v762, v152, 0, 1, 1);
          v653 = *(_QWORD *)&v762[8];
          if ( *(_DWORD *)v762 == 1 )
          {
            v689 = 1;
            sub_141938D2B(v653, *(_QWORD *)&v762[16]);
          }
          v154 = *(_DWORD **)&v762[16];
          if ( v152 )
            sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v153, v152);
          v646 = v154;
          v688 = 1;
          v155 = sub_1416419F0(aData_9, 4, &v655);
          if ( v155 )
          {
            v156 = 0;
            if ( *(_BYTE *)v155 == 3 )
              v156 = *(_QWORD *)(v155 + 24);
            v157 = 1;
            if ( *(_BYTE *)v155 == 3 )
              v157 = *(_QWORD *)(v155 + 16);
          }
          else
          {
            v157 = 1;
            v156 = 0;
          }
          sub_14072C410((unsigned int)v762, v156, 0, 1, 1);
          v654 = *(_QWORD *)&v762[8];
          if ( *(_DWORD *)v762 == 1 )
          {
            v688 = 1;
            sub_141938D2B(v654, *(_QWORD *)&v762[16]);
          }
          v159 = *(_QWORD *)&v762[16];
          if ( v156 )
            sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v157, v156);
          v641 = v159;
          v671.m128i_i64[0] = 0;
          v672 = 0;
          nullsub_1(v158);
          v160 = (__m128i *)sub_140001650(4, 1);
          if ( !v160 )
            sub_141938D2B(1, 4);
          v160->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v776 = v160;
          *(_QWORD *)&v659[8] = v160;
          *(_QWORD *)&v659[16] = 4;
          v687 = 1;
          sub_14040FB10(v762, &off_141A536D0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F20);
          }
          v161 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v161;
          v687 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v162);
          v163 = (void *)sub_140001650(12, 1);
          if ( !v163 )
            sub_141938D2B(1, 12);
          qmemcpy(v163, "output_index", 12);
          *(_QWORD *)v659 = 12;
          *(_QWORD *)&v659[8] = v163;
          *(_QWORD *)&v659[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v133;
          sub_140E72AA0(&v754, &v671, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v164);
          v165 = sub_140001650(7, 1);
          if ( !v165 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v165 + 3) = 1684627309;
          *(_DWORD *)v165 = 1835365481;
          *(_QWORD *)v659 = 7;
          v776 = (__m128i *)v165;
          *(_QWORD *)&v659[8] = v165;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)v767 = &v651;
          v686 = 1;
          sub_14040FA80(v762, v767);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F20);
          }
          v166 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v166;
          v686 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v167);
          v168 = (__m128i *)sub_140001650(4, 1);
          if ( !v168 )
            sub_141938D2B(1, 4);
          v168->m128i_i32[0] = 1835365481;
          *(_QWORD *)v759 = 4;
          v776 = v168;
          *(_QWORD *)&v759[8] = v168;
          *(_QWORD *)&v759[16] = 4;
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v169);
          v170 = (__m128i *)sub_140001650(4, 1);
          if ( !v170 )
            sub_141938D2B(1, 4);
          v170->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v170;
          *(_QWORD *)&v659[8] = v170;
          *(_QWORD *)&v659[16] = 4;
          v685 = 1;
          sub_14040FB10(v762, &off_141A53790);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F20);
          }
          v171 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v171;
          v685 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v172);
          v173 = (__m128i *)sub_140001650(2, 1);
          if ( !v173 )
            sub_141938D2B(1, 2);
          v173->m128i_i16[0] = 25705;
          *(_QWORD *)v659 = 2;
          v771 = v173;
          *(_QWORD *)&v659[8] = v173;
          *(_QWORD *)&v659[16] = 2;
          v649.m128i_i64[0] = (__int64)&v651;
          v684 = 1;
          sub_14040FA80(v762, &v649);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F20);
          }
          v174 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v174;
          v684 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v175);
          v176 = (__m128i *)sub_140001650(6, 1);
          if ( !v176 )
            sub_141938D2B(1, 6);
          v176->m128i_i16[2] = 29557;
          v176->m128i_i32[0] = 1952543859;
          *(_QWORD *)v659 = 6;
          v771 = v176;
          *(_QWORD *)&v659[8] = v176;
          *(_QWORD *)&v659[16] = 6;
          v683 = 1;
          sub_14040FB10(v762, &off_141A534D8);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F20);
          }
          v177 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v177;
          v683 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v178);
          v179 = (_DWORD *)sub_140001650(7, 1);
          if ( !v179 )
            sub_141938D2B(1, 7);
          *(_DWORD *)((char *)v179 + 3) = 2037539181;
          *v179 = 1835890035;
          *(_QWORD *)v659 = 7;
          *(_QWORD *)&v659[8] = v179;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = 8;
          *(_QWORD *)&v762[24] = 0;
          v762[0] = 4;
          sub_140E72AA0(&v754, v767, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v180);
          v181 = (__m128i *)sub_140001650(17, 1);
          if ( !v181 )
            sub_141938D2B(1, 17);
          *v181 = _mm_loadu_si128((const __m128i *)aEncryptedConte_2);
          v181[1].m128i_i8[0] = 116;
          *(_QWORD *)v659 = 17;
          *(_QWORD *)&v659[8] = v181;
          *(_QWORD *)&v659[16] = 17;
          v762[0] = 0;
          sub_140E72AA0(&v754, v767, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v767);
          *(_QWORD *)&v762[24] = *(_QWORD *)&v767[16];
          v762[0] = 5;
          v661 = 0;
          sub_140E72AA0(&v754, &v671, v759, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          v182 = m128i_i64;
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
          *(_QWORD *)&v762[24] = v672;
          v762[0] = 5;
          v776 = (__m128i *)(m128i_i64 + 768);
          sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A536B0, 26, (__int64)v762);
          v771 = (const __m128i *)v754.m128i_i64[1];
          v183 = v755.m512i_i64[0];
          v184 = v753;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v184 = v753;
            v182 = m128i_i64;
          }
          else if ( !v755.m512i_i64[0] )
          {
            goto LABEL_303;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v184), v771, v183);
          v184 = v753;
LABEL_303:
          v753 = v183 + v184;
          if ( v754.m128i_i64[0] )
            sub_140001660(v771, v754.m128i_i64[0], 1);
          v774 = 1;
          sub_140DF44E0(v762);
          if ( v121 == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(v645[1].m128i_u8[0]), (__m128i)xmmword_1419D35A0),
                   _mm_cmpeq_epi8(_mm_loadu_si128(v645), (__m128i)xmmword_1419D3590))) == 0xFFFF )
          {
LABEL_338:
            if ( !v147 )
            {
LABEL_363:
              v220 = v182 + 648;
              v221 = v121 == 17
                  && _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_cvtsi32_si128(v645[1].m128i_u8[0]), (__m128i)xmmword_1419D35A0),
                         _mm_cmpeq_epi8(_mm_loadu_si128(v645), (__m128i)xmmword_1419D3590))) == 0xFFFF;
              v755.m512i_i64[0] = v652;
              v754 = _mm_load_si128(&v651);
              *(__m128i *)&v755.m512i_u64[1] = _mm_loadu_si128(&v657);
              v755.m512i_i64[3] = v658;
              *(__m128i *)&v762[8] = v754;
              *(_OWORD *)&v762[24] = __PAIR128__(v755.m512i_u64[1], v652);
              *(_QWORD *)&v762[40] = v755.m512i_i64[2];
              *(_QWORD *)&v762[48] = v658;
              *(_QWORD *)&v762[56] = v653;
              *(_QWORD *)&v762[64] = v646;
              *(_QWORD *)&v762[72] = v152;
              *(_QWORD *)&v762[80] = v654;
              *(_QWORD *)&v762[88] = v641;
              *(_QWORD *)&v762[96] = v156;
              *(_DWORD *)&v762[104] = v133;
              v762[108] = v221;
              *(_QWORD *)v762 = 0x8000000000000000uLL;
              v774 = 0;
              sub_140E80090(&v754, v220, v766, v762);
              if ( v754.m128i_i64[0] != -1 )
              {
                v774 = 0;
                sub_140DF5CA0(&v754);
              }
              goto LABEL_891;
            }
            *(_QWORD *)v767 = 0;
            *(_QWORD *)&v767[16] = 0;
            nullsub_1(v185);
            v205 = (__m128i *)sub_140001650(4, 1);
            if ( !v205 )
              sub_141938D2B(1, 4);
            v205->m128i_i32[0] = 1701869940;
            *(_QWORD *)v659 = 4;
            v771 = v205;
            *(_QWORD *)&v659[8] = v205;
            *(_QWORD *)&v659[16] = 4;
            v678 = 1;
            sub_14040FB10(v762, &off_141A53838);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53F98);
            }
            v206 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v206;
            v678 = 0;
            sub_140E72AA0(v762, v767, v659, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            nullsub_1(v207);
            v208 = (void *)sub_140001650(12, 1);
            if ( !v208 )
              sub_141938D2B(1, 12);
            qmemcpy(v208, "output_index", 12);
            *(_QWORD *)v659 = 12;
            *(_QWORD *)&v659[8] = v208;
            *(_QWORD *)&v659[16] = 12;
            v762[0] = 2;
            *(_QWORD *)&v762[8] = 0;
            *(_QWORD *)&v762[16] = v133;
            sub_140E72AA0(&v754, v767, v659, v762);
            if ( v754.m128i_i8[0] != -1 )
              sub_140DF44E0(&v754);
            nullsub_1(v209);
            v210 = sub_140001650(7, 1);
            if ( !v210 )
              sub_141938D2B(1, 7);
            *(_DWORD *)(v210 + 3) = 1684627309;
            *(_DWORD *)v210 = 1835365481;
            *(_QWORD *)v659 = 7;
            v771 = (const __m128i *)v210;
            *(_QWORD *)&v659[8] = v210;
            *(_QWORD *)&v659[16] = 7;
            *(_QWORD *)v759 = &v651;
            v677 = 1;
            sub_14040FA80(v762, v759);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53F98);
            }
            v211 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v211;
            v677 = 0;
            sub_140E72AA0(v762, v767, v659, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            nullsub_1(v212);
            v213 = (void *)sub_140001650(13, 1);
            if ( !v213 )
              sub_141938D2B(1, 13);
            qmemcpy(v213, "summary_index", 13);
            *(_QWORD *)v659 = 13;
            *(_QWORD *)&v659[8] = v213;
            *(_QWORD *)&v659[16] = 13;
            v762[0] = 2;
            *(_OWORD *)&v762[8] = 0;
            sub_140E72AA0(&v754, v767, v659, v762);
            if ( v754.m128i_i8[0] != -1 )
              sub_140DF44E0(&v754);
            nullsub_1(v214);
            v215 = (__m128i *)sub_140001650(5, 1);
            if ( !v215 )
              sub_141938D2B(1, 5);
            v215->m128i_i8[4] = 97;
            v215->m128i_i32[0] = 1953260900;
            *(_QWORD *)v659 = 5;
            v771 = v215;
            *(_QWORD *)&v659[8] = v215;
            *(_QWORD *)&v659[16] = 5;
            v676 = 1;
            sub_14040F9F0(v762, &v657);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53F98);
            }
            v216 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v216;
            v676 = 0;
            sub_140E72AA0(v762, v767, v659, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v767);
            *(_QWORD *)&v762[24] = *(_QWORD *)&v767[16];
            v762[0] = 5;
            sub_140E4D190((unsigned int)&v754, (_DWORD)v776, (unsigned int)&xmmword_141A53810, 37, (__int64)v762);
            v217 = (const __m128i *)v754.m128i_i64[1];
            v218 = v755.m512i_i64[0];
            v219 = v753;
            v182 = m128i_i64;
            if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
            {
              v776 = (__m128i *)v754.m128i_i64[1];
              sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
              v219 = v753;
              v182 = m128i_i64;
              v217 = v776;
            }
            else if ( !v755.m512i_i64[0] )
            {
LABEL_360:
              v753 = v218 + v219;
              if ( v754.m128i_i64[0] )
                sub_140001660(v217, v754.m128i_i64[0], 1);
              v774 = 1;
              sub_140DF44E0(v762);
              goto LABEL_363;
            }
            sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v219), v217, v218);
            v219 = v753;
            goto LABEL_360;
          }
          v671.m128i_i64[0] = 0;
          v672 = 0;
          nullsub_1(v185);
          v186 = (__m128i *)sub_140001650(4, 1);
          if ( !v186 )
            sub_141938D2B(1, 4);
          v186->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v186;
          *(_QWORD *)&v659[8] = v186;
          *(_QWORD *)&v659[16] = 4;
          v682 = 1;
          sub_14040FB10(v762, &off_141A53F70);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F80);
          }
          v187 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v187;
          v682 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v188);
          v189 = (void *)sub_140001650(12, 1);
          if ( !v189 )
            sub_141938D2B(1, 12);
          qmemcpy(v189, "output_index", 12);
          *(_QWORD *)v659 = 12;
          *(_QWORD *)&v659[8] = v189;
          *(_QWORD *)&v659[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v133;
          sub_140E72AA0(&v754, &v671, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v190);
          v191 = sub_140001650(7, 1);
          if ( !v191 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v191 + 3) = 1684627309;
          *(_DWORD *)v191 = 1835365481;
          *(_QWORD *)v659 = 7;
          v771 = (const __m128i *)v191;
          *(_QWORD *)&v659[8] = v191;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)v767 = &v651;
          v681 = 1;
          sub_14040FA80(v762, v767);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F80);
          }
          v192 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v192;
          v681 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v193);
          v194 = (void *)sub_140001650(13, 1);
          if ( !v194 )
            sub_141938D2B(1, 13);
          qmemcpy(v194, "summary_index", 13);
          *(_QWORD *)v659 = 13;
          *(_QWORD *)&v659[8] = v194;
          *(_QWORD *)&v659[16] = 13;
          v762[0] = 2;
          *(_OWORD *)&v762[8] = 0;
          sub_140E72AA0(&v754, &v671, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v195);
          v196 = (__m128i *)sub_140001650(4, 1);
          if ( !v196 )
            sub_141938D2B(1, 4);
          v196->m128i_i32[0] = 1953653104;
          *(_QWORD *)v759 = 4;
          v771 = v196;
          *(_QWORD *)&v759[8] = v196;
          *(_QWORD *)&v759[16] = 4;
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v197);
          v198 = (_DWORD *)sub_140001650(4, 1);
          if ( !v198 )
            sub_141938D2B(1, 4);
          *v198 = 1701869940;
          *(_QWORD *)v659 = 4;
          v644 = v198;
          *(_QWORD *)&v659[8] = v198;
          *(_QWORD *)&v659[16] = 4;
          v680 = 1;
          sub_14040FB10(v762, &off_141A537B0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F80);
          }
          v199 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v199;
          v680 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v200);
          v201 = (_DWORD *)sub_140001650(4, 1);
          if ( !v201 )
            sub_141938D2B(1, 4);
          *v201 = 1954047348;
          *(_QWORD *)v659 = 4;
          v644 = v201;
          *(_QWORD *)&v659[8] = v201;
          *(_QWORD *)&v659[16] = 4;
          v679 = 1;
          sub_14040FB10(v762, &unk_141A52EE0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53F80);
          }
          v202 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v202;
          v679 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v767);
          *(_QWORD *)&v762[24] = *(_QWORD *)&v767[16];
          v762[0] = 5;
          v660 = 0;
          sub_140E72AA0(&v754, &v671, v759, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
          *(_QWORD *)&v762[24] = v672;
          v762[0] = 5;
          sub_140E4D190((unsigned int)&v754, (_DWORD)v776, (unsigned int)aResponseReason_0, 37, (__int64)v762);
          v771 = (const __m128i *)v754.m128i_i64[1];
          v203 = v755.m512i_i64[0];
          v204 = v753;
          v182 = m128i_i64;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v204 = v753;
            v182 = m128i_i64;
          }
          else if ( !v755.m512i_i64[0] )
          {
LABEL_335:
            v753 = v203 + v204;
            if ( v754.m128i_i64[0] )
              sub_140001660(v771, v754.m128i_i64[0], 1);
            v774 = 1;
            sub_140DF44E0(v762);
            goto LABEL_338;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v204), v771, v203);
          v204 = v753;
          goto LABEL_335;
        case 4LL:
LABEL_223:
          if ( *(_DWORD *)v122 != 1954047348 )
            goto LABEL_891;
          v134 = *(_QWORD *)(v124 + 160);
          *(_QWORD *)(v124 + 160) = -1;
          if ( v134 != -1 )
          {
            *(_QWORD *)v659 = v134;
            v135 = _mm_loadu_si128((const __m128i *)(v124 + 184));
            v136 = *(_OWORD *)(v124 + 200);
            v137 = *(_OWORD *)(v124 + 216);
            *(_OWORD *)&v659[8] = *(_OWORD *)(v124 + 168);
            *(__m128i *)&v659[24] = v135;
            *(_OWORD *)&v659[40] = v136;
            *(_OWORD *)&v659[56] = v137;
            *(_OWORD *)&v659[72] = *(_OWORD *)(v124 + 232);
            *(_OWORD *)&v659[88] = *(_OWORD *)(v124 + 248);
            v138 = v124;
            *(__m128i *)&v659[104] = _mm_loadu_si128((const __m128i *)(v124 + 264));
            v769 = 1;
            v139 = (_QWORD *)sub_1416419F0(aText_12, 4, &v655);
            if ( !v139 )
              v139 = off_1421E7108;
            if ( *(_BYTE *)v139 == 3 )
            {
              v140 = v139[2];
              v141 = v139[3];
            }
            else
            {
              v140 = 1;
              v141 = 0;
            }
            v671.m128i_i64[0] = v140;
            v671.m128i_i64[1] = v141;
            v769 = 1;
            sub_1402B7680(&v659[24], v140, v141);
            v769 = 1;
            v223 = (_BYTE *)sub_1416419F0(aCitations, 9, &v655);
            if ( !v223 )
              v223 = off_1421E7108;
            v224 = nullptr;
            v225 = *v223 == 4;
            v226 = v223 + 8;
            if ( v225 )
              v224 = v226;
            *(_QWORD *)v762 = 1;
            *(_QWORD *)&v762[8] = v224;
            *(_QWORD *)&v762[16] = 0;
            *(_QWORD *)&v762[32] = 0;
            v769 = 1;
            sub_14037ED60(&v659[72], v762);
            if ( !v141 )
              goto LABEL_401;
            *(_QWORD *)v759 = 0;
            *(_QWORD *)&v759[16] = 0;
            nullsub_1(v227);
            v228 = (__m128i *)sub_140001650(4, 1);
            if ( !v228 )
              sub_141938D2B(1, 4);
            v228->m128i_i32[0] = 1701869940;
            *(_QWORD *)v767 = 4;
            v776 = v228;
            *(_QWORD *)&v767[8] = v228;
            *(_QWORD *)&v767[16] = 4;
            v709 = 1;
            sub_14040FB10(v762, &off_141A53750);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53E68);
            }
            v229 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v229;
            v709 = 0;
            sub_140E72AA0(v762, v759, v767, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            nullsub_1(v230);
            v231 = (void *)sub_140001650(12, 1);
            if ( !v231 )
              sub_141938D2B(1, 12);
            qmemcpy(v231, "output_index", 12);
            *(_QWORD *)v767 = 12;
            *(_QWORD *)&v767[8] = v231;
            *(_QWORD *)&v767[16] = 12;
            v762[0] = 2;
            *(_QWORD *)&v762[8] = 0;
            *(_QWORD *)&v762[16] = *(unsigned int *)&v659[112];
            sub_140E72AA0(&v754, v759, v767, v762);
            if ( v754.m128i_i8[0] != -1 )
              sub_140DF44E0(&v754);
            nullsub_1(v232);
            v233 = sub_140001650(7, 1);
            if ( !v233 )
              sub_141938D2B(1, 7);
            *(_DWORD *)(v233 + 3) = 1684627309;
            *(_DWORD *)v233 = 1835365481;
            *(_QWORD *)v767 = 7;
            v776 = (__m128i *)v233;
            *(_QWORD *)&v767[8] = v233;
            *(_QWORD *)&v767[16] = 7;
            v708 = 1;
            sub_14040F9F0(v762, v659);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53E68);
            }
            v234 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v234;
            v708 = 0;
            sub_140E72AA0(v762, v759, v767, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            nullsub_1(v235);
            v236 = (void *)sub_140001650(13, 1);
            if ( !v236 )
              sub_141938D2B(1, 13);
            qmemcpy(v236, "content_index", 13);
            *(_QWORD *)v767 = 13;
            *(_QWORD *)&v767[8] = v236;
            *(_QWORD *)&v767[16] = 13;
            v762[0] = 2;
            *(_OWORD *)&v762[8] = 0;
            sub_140E72AA0(&v754, v759, v767, v762);
            if ( v754.m128i_i8[0] != -1 )
              sub_140DF44E0(&v754);
            nullsub_1(v237);
            v238 = (__m128i *)sub_140001650(5, 1);
            if ( !v238 )
              sub_141938D2B(1, 5);
            v238->m128i_i8[4] = 97;
            v238->m128i_i32[0] = 1953260900;
            *(_QWORD *)v767 = 5;
            v776 = v238;
            *(_QWORD *)&v767[8] = v238;
            *(_QWORD *)&v767[16] = 5;
            v707 = 1;
            sub_14040FB10(v762, &v671);
            if ( v762[0] == 0xFF )
            {
              v754.m128i_i64[0] = *(_QWORD *)&v762[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v754,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A53E68);
            }
            v239 = _mm_loadu_si128((const __m128i *)v762);
            *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
            v754 = v239;
            v707 = 0;
            sub_140E72AA0(v762, v759, v767, &v754);
            if ( v762[0] != 0xFF )
              sub_140DF44E0(v762);
            v138 = m128i_i64;
            *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v759);
            *(_QWORD *)&v762[24] = *(_QWORD *)&v759[16];
            v762[0] = 5;
            sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A53730, 26, (__int64)v762);
            v240 = (const __m128i *)v754.m128i_i64[1];
            v241 = v755.m512i_i64[0];
            v242 = v753;
            if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
            {
              v776 = (__m128i *)v754.m128i_i64[1];
              sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
              v242 = v753;
              v138 = m128i_i64;
              v240 = v776;
            }
            else if ( !v755.m512i_i64[0] )
            {
LABEL_398:
              v753 = v241 + v242;
              if ( v754.m128i_i64[0] )
                sub_140001660(v240, v754.m128i_i64[0], 1);
              v769 = 1;
              sub_140DF44E0(v762);
LABEL_401:
              *(_QWORD *)&v762[120] = *(_QWORD *)&v659[112];
              *(_OWORD *)&v762[104] = *(_OWORD *)&v659[96];
              *(_OWORD *)&v762[88] = *(_OWORD *)&v659[80];
              *(_OWORD *)&v762[72] = *(_OWORD *)&v659[64];
              v243 = _mm_loadu_si128((const __m128i *)v659);
              v244 = _mm_loadu_si128((const __m128i *)&v659[16]);
              *(_OWORD *)&v762[56] = *(_OWORD *)&v659[48];
              *(_OWORD *)&v762[40] = *(_OWORD *)&v659[32];
              *(__m128i *)&v762[24] = v244;
              *(__m128i *)&v762[8] = v243;
              *(_QWORD *)v762 = 0x8000000000000001uLL;
              v769 = 0;
              sub_140E80090(&v754, v138 + 648, v766, v762);
              if ( v754.m128i_i64[0] != -1 )
              {
                v769 = 0;
                sub_140DF5CA0(&v754);
              }
              v245 = v648;
              v648[1].m128i_i64[0] = v753;
              *v245 = _mm_loadu_si128(&v752);
              v778 = 0;
              return sub_140DF44E0(&v655);
            }
            sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v242), v240, v241);
            v242 = v753;
            goto LABEL_398;
          }
          v222 = *(unsigned int *)(v124 + 776);
          *(_DWORD *)(v124 + 776) = v222 + 1;
          sub_141568C20(v762);
          *(__m128i *)v767 = _mm_loadu_si128((const __m128i *)v762);
          sub_140E8F110(v762, v767);
          v776 = *(__m128i **)&v762[8];
          if ( *(_QWORD *)&v762[16] <= 0xCu )
          {
            if ( *(_QWORD *)&v762[16] != 12 )
LABEL_370:
              sub_141938F40(*(_DWORD *)&v762[8], *(_DWORD *)&v762[16], 0, 12, (__int64)&off_141A53E80);
          }
          else if ( *(char *)(*(_QWORD *)&v762[8] + 12LL) < -64 )
          {
            goto LABEL_370;
          }
          *(_QWORD *)v759 = *(_QWORD *)&v762[8];
          *(_QWORD *)&v759[8] = 12;
          *(_QWORD *)v659 = v759;
          *(_QWORD *)&v659[8] = sub_140186EE0;
          sub_1416ABFD0(&v754, &unk_141A533D0, v659);
          if ( *(_QWORD *)v762 )
            sub_140001660(v776, *(_QWORD *)v762, 1);
          v642 = _mm_loadu_si128(&v754);
          v643 = v755.m512i_i64[0];
          v674 = 1;
          v247 = sub_1416419F0(aText_12, 4, &v655);
          v248 = 1;
          if ( v247 )
          {
            v249 = m128i_i64;
            if ( *(_BYTE *)v247 == 3 )
            {
              v248 = *(_QWORD *)(v247 + 16);
              v250 = *(_QWORD *)(v247 + 24);
            }
            else
            {
              v250 = 0;
            }
          }
          else
          {
            v250 = 0;
            v249 = m128i_i64;
          }
          sub_14072C410((unsigned int)v762, v250, 0, 1, 1);
          v379 = *(_QWORD *)&v762[8];
          if ( *(_DWORD *)v762 == 1 )
          {
            v674 = 1;
            sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
          }
          v380 = *(const __m128i **)&v762[16];
          if ( v250 )
            sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v248, v250);
          v653 = v379;
          v649.m128i_i64[0] = v379;
          v776 = (__m128i *)v380;
          v649.m128i_i64[1] = (__int64)v380;
          v650 = v250;
          if ( *(_QWORD *)(v249 + 632) )
          {
            v775 = 1;
            sub_1401F5F00(
              v249 + 632,
              (unsigned int)aAdded_2,
              5,
              v222,
              (__int64)"messagestackwindowLabelhref",
              7,
              (__int64)aFinalAnswer);
          }
          v651.m128i_i64[0] = 0;
          v652 = 0;
          nullsub_1(v378);
          v381 = (__m128i *)sub_140001650(4, 1);
          if ( !v381 )
            sub_141938D2B(1, 4);
          v381->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v381;
          *(_QWORD *)&v659[8] = v381;
          *(_QWORD *)&v659[16] = 4;
          v706 = 1;
          sub_14040FB10(v762, &off_141A536D0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v382 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v382;
          v706 = 0;
          sub_140E72AA0(v762, &v651, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v383);
          v384 = (void *)sub_140001650(12, 1);
          if ( !v384 )
            sub_141938D2B(1, 12);
          qmemcpy(v384, "output_index", 12);
          *(_QWORD *)v659 = 12;
          *(_QWORD *)&v659[8] = v384;
          *(_QWORD *)&v659[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v222;
          sub_140E72AA0(&v754, &v651, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v385);
          v386 = sub_140001650(7, 1);
          if ( !v386 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v386 + 3) = 1684627309;
          *(_DWORD *)v386 = 1835365481;
          *(_QWORD *)v659 = 7;
          v771 = (const __m128i *)v386;
          *(_QWORD *)&v659[8] = v386;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)v767 = &v642;
          v705 = 1;
          sub_14040FA80(v762, v767);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v387 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v387;
          v705 = 0;
          sub_140E72AA0(v762, &v651, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v388);
          v389 = (_DWORD *)sub_140001650(4, 1);
          if ( !v389 )
            sub_141938D2B(1, 4);
          *v389 = 1835365481;
          v657.m128i_i64[0] = 4;
          v654 = (__int64)v389;
          v657.m128i_i64[1] = (__int64)v389;
          v658 = 4;
          v671.m128i_i64[0] = 0;
          v672 = 0;
          nullsub_1(v390);
          v391 = (__m128i *)sub_140001650(4, 1);
          if ( !v391 )
            sub_141938D2B(1, 4);
          v391->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v391;
          *(_QWORD *)&v659[8] = v391;
          *(_QWORD *)&v659[16] = 4;
          v704 = 1;
          sub_14040FB10(v762, &off_141A53388);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v392 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v392;
          v704 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v393);
          v394 = (__m128i *)sub_140001650(2, 1);
          if ( !v394 )
            sub_141938D2B(1, 2);
          v394->m128i_i16[0] = 25705;
          *(_QWORD *)v659 = 2;
          v771 = v394;
          *(_QWORD *)&v659[8] = v394;
          *(_QWORD *)&v659[16] = 2;
          *(_QWORD *)v767 = &v642;
          v703 = 1;
          sub_14040FA80(v762, v767);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v395 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v395;
          v703 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v396);
          v397 = (__m128i *)sub_140001650(4, 1);
          if ( !v397 )
            sub_141938D2B(1, 4);
          v397->m128i_i32[0] = 1701605234;
          *(_QWORD *)v659 = 4;
          v771 = v397;
          *(_QWORD *)&v659[8] = v397;
          *(_QWORD *)&v659[16] = 4;
          v702 = 1;
          sub_14040FB10(v762, &off_141A533A8);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v398 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v398;
          v702 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v399);
          v400 = (__m128i *)sub_140001650(5, 1);
          if ( !v400 )
            sub_141938D2B(1, 5);
          v400->m128i_i8[4] = 101;
          v400->m128i_i32[0] = 1935763568;
          *(_QWORD *)v659 = 5;
          v771 = v400;
          *(_QWORD *)&v659[8] = v400;
          *(_QWORD *)&v659[16] = 5;
          v701 = 1;
          sub_14040FB10(v762, &off_141A53EC8);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v401 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v401;
          v701 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v402);
          v403 = (__m128i *)sub_140001650(6, 1);
          if ( !v403 )
            sub_141938D2B(1, 6);
          v403->m128i_i16[2] = 29557;
          v403->m128i_i32[0] = 1952543859;
          *(_QWORD *)v659 = 6;
          v771 = v403;
          *(_QWORD *)&v659[8] = v403;
          *(_QWORD *)&v659[16] = 6;
          v700 = 1;
          sub_14040FB10(v762, &off_141A534D8);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v404 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v404;
          v700 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v405);
          v406 = sub_140001650(7, 1);
          if ( !v406 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v406 + 3) = 1953391988;
          *(_DWORD *)v406 = 1953394531;
          *(_QWORD *)v759 = 7;
          v645 = (const __m128i *)v406;
          *(_QWORD *)&v759[8] = v406;
          *(_QWORD *)&v759[16] = 7;
          v673 = 1;
          v771 = (const __m128i *)sub_1402BD6F0();
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v407);
          v408 = (_DWORD *)sub_140001650(4, 1);
          if ( !v408 )
            sub_141938D2B(1, 4);
          *v408 = 1701869940;
          *(_QWORD *)v659 = 4;
          v646 = v408;
          *(_QWORD *)&v659[8] = v408;
          *(_QWORD *)&v659[16] = 4;
          v699 = 1;
          sub_14040FB10(v762, &off_141A53558);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v409 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v409;
          v699 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v410);
          v411 = (_DWORD *)sub_140001650(4, 1);
          if ( !v411 )
            sub_141938D2B(1, 4);
          *v411 = 1954047348;
          *(_QWORD *)v659 = 4;
          v646 = v411;
          *(_QWORD *)&v659[8] = v411;
          *(_QWORD *)&v659[16] = 4;
          v698 = 1;
          sub_14040FB10(v762, &unk_141A52EE0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EA8);
          }
          v412 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v412;
          v698 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(_OWORD *)&v762[7] = *(_OWORD *)v767;
          *(_QWORD *)&v762[23] = *(_QWORD *)&v767[16];
          v413 = v771;
          v771->m128i_i8[0] = 5;
          v414 = _mm_loadu_si128((const __m128i *)v762);
          v413[1] = *(__m128i *)&v762[15];
          *(__m128i *)((char *)v413 + 1) = v414;
          *(_QWORD *)&v762[8] = 1;
          *(_QWORD *)&v762[16] = v413;
          *(_QWORD *)&v762[24] = 1;
          v762[0] = 4;
          v673 = 0;
          sub_140E72AA0(&v754, &v671, v759, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
          *(_QWORD *)&v762[24] = v672;
          v762[0] = 5;
          v663 = 0;
          sub_140E72AA0(&v754, &v651, &v657, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          v415 = m128i_i64 + 768;
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v651);
          *(_QWORD *)&v762[24] = v652;
          v762[0] = 5;
          sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A536B0, 26, (__int64)v762);
          v416 = (const __m128i *)v754.m128i_i64[1];
          v417 = v755.m512i_i64[0];
          v418 = v753;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            v771 = (const __m128i *)v754.m128i_i64[1];
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v418 = v753;
            v416 = v771;
          }
          else if ( !v755.m512i_i64[0] )
          {
            goto LABEL_651;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v418), v416, v417);
          v418 = v753;
LABEL_651:
          v753 = v417 + v418;
          if ( v754.m128i_i64[0] )
            sub_140001660(v416, v754.m128i_i64[0], 1);
          v775 = 1;
          sub_140DF44E0(v762);
          v671.m128i_i64[0] = 0;
          v672 = 0;
          nullsub_1(v419);
          v420 = (__m128i *)sub_140001650(4, 1);
          if ( !v420 )
            sub_141938D2B(1, 4);
          v420->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v420;
          *(_QWORD *)&v659[8] = v420;
          *(_QWORD *)&v659[16] = 4;
          v697 = 1;
          sub_14040FB10(v762, &off_141A53700);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53ED8);
          }
          v421 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v421;
          v697 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v422);
          v423 = (void *)sub_140001650(12, 1);
          if ( !v423 )
            sub_141938D2B(1, 12);
          qmemcpy(v423, "output_index", 12);
          *(_QWORD *)v659 = 12;
          *(_QWORD *)&v659[8] = v423;
          *(_QWORD *)&v659[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v222;
          sub_140E72AA0(&v754, &v671, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v424);
          v425 = sub_140001650(7, 1);
          if ( !v425 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v425 + 3) = 1684627309;
          *(_DWORD *)v425 = 1835365481;
          *(_QWORD *)v659 = 7;
          v771 = (const __m128i *)v425;
          *(_QWORD *)&v659[8] = v425;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)v767 = &v642;
          v696 = 1;
          sub_14040FA80(v762, v767);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53ED8);
          }
          v426 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v426;
          v696 = 0;
          sub_140E72AA0(v762, &v671, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v427);
          v428 = (void *)sub_140001650(13, 1);
          if ( !v428 )
            sub_141938D2B(1, 13);
          qmemcpy(v428, "content_index", 13);
          *(_QWORD *)v659 = 13;
          *(_QWORD *)&v659[8] = v428;
          *(_QWORD *)&v659[16] = 13;
          v762[0] = 2;
          *(_OWORD *)&v762[8] = 0;
          sub_140E72AA0(&v754, &v671, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v429);
          v430 = (__m128i *)sub_140001650(4, 1);
          if ( !v430 )
            sub_141938D2B(1, 4);
          v430->m128i_i32[0] = 1953653104;
          *(_QWORD *)v759 = 4;
          v771 = v430;
          *(_QWORD *)&v759[8] = v430;
          *(_QWORD *)&v759[16] = 4;
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v431);
          v432 = (_DWORD *)sub_140001650(4, 1);
          if ( !v432 )
            sub_141938D2B(1, 4);
          *v432 = 1701869940;
          *(_QWORD *)v659 = 4;
          v654 = (__int64)v432;
          *(_QWORD *)&v659[8] = v432;
          *(_QWORD *)&v659[16] = 4;
          v695 = 1;
          sub_14040FB10(v762, &off_141A53558);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53ED8);
          }
          v433 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v433;
          v695 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v434);
          v435 = (_DWORD *)sub_140001650(4, 1);
          if ( !v435 )
            sub_141938D2B(1, 4);
          *v435 = 1954047348;
          *(_QWORD *)v659 = 4;
          v654 = (__int64)v435;
          *(_QWORD *)&v659[8] = v435;
          *(_QWORD *)&v659[16] = 4;
          v694 = 1;
          sub_14040FB10(v762, &unk_141A52EE0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53ED8);
          }
          v436 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v436;
          v694 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v437);
          v438 = (void *)sub_140001650(11, 1);
          if ( !v438 )
            sub_141938D2B(1, 11);
          qmemcpy(v438, "annotations", 11);
          *(_QWORD *)v659 = 11;
          *(_QWORD *)&v659[8] = v438;
          *(_QWORD *)&v659[16] = 11;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = 8;
          *(_QWORD *)&v762[24] = 0;
          v762[0] = 4;
          sub_140E72AA0(&v754, v767, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v767);
          *(_QWORD *)&v762[24] = *(_QWORD *)&v767[16];
          v762[0] = 5;
          v662 = 0;
          sub_140E72AA0(&v754, &v671, v759, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
          *(_QWORD *)&v762[24] = v672;
          v762[0] = 5;
          sub_140E4D190((unsigned int)&v754, v415, (unsigned int)&xmmword_141A536E0, 27, (__int64)v762);
          v771 = (const __m128i *)v754.m128i_i64[1];
          v439 = v755.m512i_i64[0];
          v440 = v753;
          v441 = m128i_i64;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v440 = v753;
            v441 = m128i_i64;
          }
          else if ( !v755.m512i_i64[0] )
          {
            goto LABEL_684;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v440), v771, v439);
          v440 = v753;
LABEL_684:
          v753 = v439 + v440;
          if ( v754.m128i_i64[0] )
            sub_140001660(v771, v754.m128i_i64[0], 1);
          v775 = 1;
          sub_140DF44E0(v762);
          if ( !v250 )
          {
LABEL_711:
            *(_QWORD *)v659 = 0;
            *(_QWORD *)&v659[8] = 1;
            *(_OWORD *)&v659[16] = 0;
            *(_QWORD *)&v659[32] = 8;
            *(_OWORD *)&v659[40] = 0;
            *(_QWORD *)&v659[56] = 8;
            memset(&v659[64], 0, 24);
            v761 = 0;
            sub_1402B7680(v659, v776, v250);
            v761 = 0;
            v458 = sub_1416419F0(aCitations, 9, &v655);
            if ( v458 && *(_BYTE *)v458 == 4 )
            {
              v459 = *(_QWORD *)(v458 + 16);
              v460 = *(_QWORD *)(v458 + 24);
              v761 = 0;
              sub_1403918C0(v762, v459, v460);
              m128i_i64 = *(_QWORD *)&v762[8];
              v654 = *(_QWORD *)v762;
              v771 = *(const __m128i **)&v762[16];
            }
            else
            {
              m128i_i64 = 8;
              v771 = nullptr;
              v654 = 0;
            }
            sub_1401901C0(&v659[48]);
            *(_QWORD *)&v659[48] = v654;
            *(_QWORD *)&v659[56] = m128i_i64;
            *(_QWORD *)&v659[64] = v771;
            v755.m512i_i64[0] = v643;
            v754 = v642;
            *(__m128i *)&v755.m512i_u64[1] = _mm_loadu_si128((const __m128i *)v659);
            *(_OWORD *)&v755.m512i_u64[3] = *(_OWORD *)&v659[16];
            *(_OWORD *)&v755.m512i_u64[5] = *(_OWORD *)&v659[32];
            v755.m512i_i64[7] = v654;
            v756.m256i_i64[0] = m128i_i64;
            *(_OWORD *)&v756.m256i_u64[1] = __PAIR128__(*(unsigned __int64 *)&v659[72], (unsigned __int64)v771);
            v756.m256i_i64[3] = *(_QWORD *)&v659[80];
            *(__m128i *)&v762[8] = v642;
            *(_OWORD *)&v762[24] = *(_OWORD *)v755.m512i_i8;
            *(_OWORD *)&v762[40] = *(_OWORD *)&v755.m512i_u64[2];
            *(_OWORD *)&v762[56] = *(_OWORD *)&v755.m512i_u64[4];
            *(__m128i *)&v762[72] = _mm_load_si128((const __m128i *)&v755.m512i_u64[6]);
            *(_QWORD *)&v762[88] = m128i_i64;
            *(_OWORD *)&v762[96] = __PAIR128__(*(unsigned __int64 *)&v659[72], (unsigned __int64)v771);
            *(_QWORD *)&v762[112] = *(_QWORD *)&v659[80];
            *(_DWORD *)&v762[120] = v222;
            *(_QWORD *)v762 = 0x8000000000000001uLL;
            v761 = 1;
            sub_140E80090(&v754, v441 + 648, v766, v762);
            if ( v754.m128i_i64[0] != -1 )
            {
              v761 = 1;
              sub_140DF5CA0(&v754);
            }
            v461 = v653;
            if ( !v653 )
              goto LABEL_891;
            goto LABEL_718;
          }
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v442);
          v443 = (__m128i *)sub_140001650(4, 1);
          if ( !v443 )
            sub_141938D2B(1, 4);
          v443->m128i_i32[0] = 1701869940;
          *(_QWORD *)v659 = 4;
          v771 = v443;
          *(_QWORD *)&v659[8] = v443;
          *(_QWORD *)&v659[16] = 4;
          v693 = 1;
          sub_14040FB10(v762, &off_141A53750);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EF0);
          }
          v444 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v444;
          v693 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v445);
          v446 = (void *)sub_140001650(12, 1);
          if ( !v446 )
            sub_141938D2B(1, 12);
          qmemcpy(v446, "output_index", 12);
          *(_QWORD *)v659 = 12;
          *(_QWORD *)&v659[8] = v446;
          *(_QWORD *)&v659[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v222;
          sub_140E72AA0(&v754, v767, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v447);
          v448 = sub_140001650(7, 1);
          if ( !v448 )
            sub_141938D2B(1, 7);
          *(_DWORD *)(v448 + 3) = 1684627309;
          *(_DWORD *)v448 = 1835365481;
          *(_QWORD *)v659 = 7;
          v771 = (const __m128i *)v448;
          *(_QWORD *)&v659[8] = v448;
          *(_QWORD *)&v659[16] = 7;
          *(_QWORD *)v759 = &v642;
          v692 = 1;
          sub_14040FA80(v762, v759);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EF0);
          }
          v449 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v449;
          v692 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v450);
          v451 = (void *)sub_140001650(13, 1);
          if ( !v451 )
            sub_141938D2B(1, 13);
          qmemcpy(v451, "content_index", 13);
          *(_QWORD *)v659 = 13;
          *(_QWORD *)&v659[8] = v451;
          *(_QWORD *)&v659[16] = 13;
          v762[0] = 2;
          *(_OWORD *)&v762[8] = 0;
          sub_140E72AA0(&v754, v767, v659, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v452);
          v453 = (__m128i *)sub_140001650(5, 1);
          if ( !v453 )
            sub_141938D2B(1, 5);
          v453->m128i_i8[4] = 97;
          v453->m128i_i32[0] = 1953260900;
          *(_QWORD *)v659 = 5;
          v771 = v453;
          *(_QWORD *)&v659[8] = v453;
          *(_QWORD *)&v659[16] = 5;
          v691 = 1;
          sub_14040F9F0(v762, &v649);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53EF0);
          }
          v454 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v454;
          v691 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v767);
          *(_QWORD *)&v762[24] = *(_QWORD *)&v767[16];
          v762[0] = 5;
          sub_140E4D190((unsigned int)&v754, v415, (unsigned int)&xmmword_141A53730, 26, (__int64)v762);
          v455 = (const __m128i *)v754.m128i_i64[1];
          v456 = v755.m512i_i64[0];
          v457 = v753;
          v441 = m128i_i64;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            v771 = (const __m128i *)v754.m128i_i64[1];
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v457 = v753;
            v441 = m128i_i64;
            v455 = v771;
          }
          else if ( !v755.m512i_i64[0] )
          {
LABEL_708:
            v753 = v456 + v457;
            if ( v754.m128i_i64[0] )
              sub_140001660(v455, v754.m128i_i64[0], 1);
            v775 = 1;
            sub_140DF44E0(v762);
            goto LABEL_711;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v457), v455, v456);
          v457 = v753;
          goto LABEL_708;
        case 15LL:
          if ( *(_QWORD *)v122 ^ 0x745F726576726573LL | *(_QWORD *)(v122 + 7) ^ 0x6573755F6C6F6F74LL )
            goto LABEL_891;
          v246 = sub_1416419F0(aName_9, 4, &v655);
          if ( !v246
            || *(_BYTE *)v246 != 3
            || *(_QWORD *)(v246 + 24) != 10
            || **(_QWORD **)(v246 + 16) ^ 0x726165735F626577LL
             | *(unsigned __int16 *)(*(_QWORD *)(v246 + 16) + 8LL) ^ 0x6863LL )
          {
            sub_140E4D8E0(
              (_DWORD)v648,
              m128i_i64,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)"Unsupported Anthropic server toolDuplicate search call id",
              33,
              0);
            goto LABEL_953;
          }
          v608 = sub_1416419F0(aId_8, 2, &v655);
          if ( !v608 || *(_BYTE *)v608 != 3 || (v609 = *(_QWORD *)(v608 + 24)) == 0 )
          {
            sub_140E4D8E0(
              (_DWORD)v648,
              m128i_i64,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)"Search call has no id",
              21,
              0);
            goto LABEL_953;
          }
          v610 = *(const __m128i **)(v608 + 16);
          if ( sub_140DEDD70(*(_QWORD *)(m128i_i64 + 672), *(_QWORD *)(m128i_i64 + 680), v610, v609) )
          {
            sub_140E4D8E0(
              (_DWORD)v648,
              m128i_i64,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)"Duplicate search call id",
              24,
              0);
            goto LABEL_953;
          }
          v611 = *(unsigned int *)(m128i_i64 + 776);
          *(_DWORD *)(m128i_i64 + 776) = v611 + 1;
          sub_141568C20(v762);
          *(__m128i *)v659 = _mm_loadu_si128((const __m128i *)v762);
          v754.m128i_i64[0] = (__int64)v659;
          v754.m128i_i64[1] = (__int64)sub_14028A180;
          sub_1416ABFD0(v762, &unk_141A53C7C, &v754);
          v671 = _mm_loadu_si128((const __m128i *)v762);
          v672 = *(_QWORD *)&v762[16];
          sub_14072C410((unsigned int)v762, v609, 0, 1, 1);
          v766 = *(_QWORD *)&v762[8];
          if ( v762[0] )
            sub_141938D2B(v766, *(_QWORD *)&v762[16]);
          v612 = *(const __m128i **)&v762[16];
          sub_1418F44E0(*(__m128i **)&v762[16], v610, v609);
          *(_QWORD *)v659 = v766;
          v776 = (__m128i *)v612;
          *(_QWORD *)&v659[8] = v612;
          *(_QWORD *)&v659[16] = v609;
          v664 = 1;
          sub_1416AC440(&v754, &v671);
          *(_DWORD *)v762 = v611;
          *(__m128i *)&v762[8] = _mm_loadu_si128(&v754);
          *(_QWORD *)&v762[24] = v755.m512i_i64[0];
          v664 = 0;
          sub_140E783B0(&v754, m128i_i64 + 672, v659, v762);
          if ( v754.m128i_i64[1] > 0 )
            sub_140001660(v755.m512i_i64[0], v754.m128i_i64[1], 1);
          *(_QWORD *)v767 = 0;
          *(_QWORD *)&v767[16] = 0;
          nullsub_1(v613);
          v766 = sub_140001650(4, 1);
          if ( !v766 )
            sub_141938D2B(1, 4);
          v614 = v766;
          *(_DWORD *)v766 = 1701869940;
          *(_QWORD *)v659 = 4;
          *(_QWORD *)&v659[8] = v614;
          *(_QWORD *)&v659[16] = 4;
          v734 = 1;
          sub_14040FB10(v762, &off_141A53CC0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53D48);
          }
          v615 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v615;
          v734 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v616);
          v766 = sub_140001650(2, 1);
          if ( !v766 )
            sub_141938D2B(1, 2);
          v617 = v766;
          *(_WORD *)v766 = 25705;
          *(_QWORD *)v659 = 2;
          *(_QWORD *)&v659[8] = v617;
          *(_QWORD *)&v659[16] = 2;
          v733 = 1;
          sub_14040F9F0(v762, &v671);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53D48);
          }
          v618 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v618;
          v733 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v619);
          v766 = sub_140001650(6, 1);
          if ( !v766 )
            sub_141938D2B(1, 6);
          v620 = (_DWORD *)v766;
          *(_WORD *)(v766 + 4) = 29557;
          *v620 = 1952543859;
          *(_QWORD *)v659 = 6;
          *(_QWORD *)&v659[8] = v620;
          *(_QWORD *)&v659[16] = 6;
          v732 = 1;
          sub_14040FB10(v762, &off_141A534D8);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53D48);
          }
          v621 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v621;
          v732 = 0;
          sub_140E72AA0(v762, v767, v659, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(__m128i *)&v659[8] = _mm_loadu_si128((const __m128i *)v767);
          *(_QWORD *)&v659[24] = *(_QWORD *)&v767[16];
          v659[0] = 5;
          sub_140E8EDA0(v762, v659);
          sub_140E7D900(&v754, m128i_i64 + 744, (unsigned int)v611, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          if ( *(_QWORD *)(m128i_i64 + 632) )
            sub_1401F5F00(m128i_i64 + 632, (unsigned int)aAdded_2, 5, v611, (__int64)aWebSearchCall, 15, 0);
          *(_QWORD *)v759 = 0;
          *(_QWORD *)&v759[16] = 0;
          nullsub_1(v622);
          v766 = sub_140001650(4, 1);
          if ( !v766 )
            sub_141938D2B(1, 4);
          v623 = v766;
          *(_DWORD *)v766 = 1701869940;
          *(_QWORD *)v767 = 4;
          *(_QWORD *)&v767[8] = v623;
          *(_QWORD *)&v767[16] = 4;
          v731 = 1;
          sub_14040FB10(v762, &off_141A536D0);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53D60);
          }
          v624 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v624;
          v731 = 0;
          sub_140E72AA0(v762, v759, v767, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          nullsub_1(v625);
          v626 = (void *)sub_140001650(12, 1);
          if ( !v626 )
            sub_141938D2B(1, 12);
          qmemcpy(v626, "output_index", 12);
          *(_QWORD *)v767 = 12;
          *(_QWORD *)&v767[8] = v626;
          *(_QWORD *)&v767[16] = 12;
          v762[0] = 2;
          *(_QWORD *)&v762[8] = 0;
          *(_QWORD *)&v762[16] = v611;
          sub_140E72AA0(&v754, v759, v767, v762);
          if ( v754.m128i_i8[0] != -1 )
            sub_140DF44E0(&v754);
          nullsub_1(v627);
          v766 = sub_140001650(4, 1);
          if ( !v766 )
            sub_141938D2B(1, 4);
          v628 = v766;
          *(_DWORD *)v766 = 1835365481;
          *(_QWORD *)v767 = 4;
          *(_QWORD *)&v767[8] = v628;
          *(_QWORD *)&v767[16] = 4;
          v730 = 1;
          sub_140412420(v762, v659);
          if ( v762[0] == 0xFF )
          {
            v754.m128i_i64[0] = *(_QWORD *)&v762[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v754,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A53D60);
          }
          v629 = _mm_loadu_si128((const __m128i *)v762);
          *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
          v754 = v629;
          v730 = 0;
          sub_140E72AA0(v762, v759, v767, &v754);
          if ( v762[0] != 0xFF )
            sub_140DF44E0(v762);
          *(__m128i *)&v762[8] = _mm_loadu_si128((const __m128i *)v759);
          *(_QWORD *)&v762[24] = *(_QWORD *)&v759[16];
          v762[0] = 5;
          sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A536B0, 26, (__int64)v762);
          m128i_i64 = v754.m128i_i64[1];
          v630 = v755.m512i_i64[0];
          v631 = v753;
          if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
          {
            sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
            v631 = v753;
          }
          else if ( !v755.m512i_i64[0] )
          {
LABEL_1020:
            v753 = v630 + v631;
            if ( v754.m128i_i64[0] )
              sub_140001660(m128i_i64, v754.m128i_i64[0], 1);
            sub_140DF44E0(v762);
            sub_140DF44E0(v659);
            if ( v671.m128i_i64[0] )
              sub_140001660(v671.m128i_i64[1], v671.m128i_i64[0], 1);
            goto LABEL_891;
          }
          sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v631), (const __m128i *)m128i_i64, v630);
          v631 = v753;
          goto LABEL_1020;
      }
      if ( v121 != 22
        || _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v122), (__m128i)xmmword_1419D3580),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v122 + 6)), (__m128i)xmmword_1419D3570))) != 0xFFFF )
      {
        goto LABEL_891;
      }
      v142 = sub_1416419F0(aToolUseId_1, 11, &v655);
      v143 = 1;
      if ( v142 )
      {
        v144 = m128i_i64;
        if ( *(_BYTE *)v142 == 3 )
        {
          v143 = *(_QWORD *)(v142 + 16);
          v145 = *(_QWORD *)(v142 + 24);
        }
        else
        {
          v145 = 0;
        }
      }
      else
      {
        v145 = 0;
        v144 = m128i_i64;
      }
      sub_140DED130(v767, v144 + 696, v143, v145);
      if ( v767[0] != 0xFF )
      {
        v573 = _mm_loadu_si128((const __m128i *)v767);
        *(__m128i *)&v659[16] = _mm_loadu_si128((const __m128i *)&v767[16]);
        *(__m128i *)v659 = v573;
        v574 = m128i_i64;
        v575 = *(unsigned int *)(m128i_i64 + 776);
        *(_DWORD *)(m128i_i64 + 776) = v575 + 1;
        sub_141568C20(v762);
        *(__m128i *)v759 = _mm_loadu_si128((const __m128i *)v762);
        v754.m128i_i64[0] = (__int64)v759;
        v754.m128i_i64[1] = (__int64)sub_14028A180;
        sub_1416ABFD0(v762, &unk_141A53C7C, &v754);
        v649 = _mm_loadu_si128((const __m128i *)v762);
        v650 = *(_QWORD *)&v762[16];
        sub_14072C410((unsigned int)v762, v145, 0, 1, 1);
        v576 = *(_QWORD *)&v762[8];
        if ( v762[0] )
          sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
        v577 = *(const __m128i **)&v762[16];
        if ( v145 )
          sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v143, v145);
        v766 = v576;
        *(_QWORD *)v759 = v576;
        v776 = (__m128i *)v577;
        *(_QWORD *)&v759[8] = v577;
        *(_QWORD *)&v759[16] = v145;
        v666 = 1;
        sub_1416AC440(&v754, &v649);
        *(_DWORD *)v762 = v575;
        *(__m128i *)&v762[8] = _mm_loadu_si128(&v754);
        *(_QWORD *)&v762[24] = v755.m512i_i64[0];
        v666 = 0;
        sub_140E783B0(&v754, v574 + 672, v759, v762);
        if ( v754.m128i_i64[1] > 0 )
          sub_140001660(v755.m512i_i64[0], v754.m128i_i64[1], 1);
        v578 = sub_141642800(v659, aInputQuery_0, 12);
        if ( v578 && *(_BYTE *)v578 == 3 )
        {
          v776 = *(__m128i **)(v578 + 16);
          v580 = *(_QWORD *)(v578 + 24);
          sub_14072C410((unsigned int)v762, v145, 0, 1, 1);
          v766 = *(_QWORD *)&v762[8];
          if ( *(_DWORD *)v762 == 1 )
            sub_141938D2B(v766, *(_QWORD *)&v762[16]);
          v581 = *(_QWORD *)&v762[16];
          if ( v145 )
            sub_1418F44E0(*(__m128i **)&v762[16], (const __m128i *)v143, v145);
          v754.m128i_i64[0] = v766;
          v653 = v581;
          v754.m128i_i64[1] = v581;
          v755.m512i_i64[0] = v145;
          sub_14072C410((unsigned int)v762, v580, 0, 1, 1);
          v582 = *(_QWORD *)&v762[8];
          LOBYTE(v771) = v762[0];
          if ( v762[0] )
            sub_141938D2B(*(_QWORD *)&v762[8], *(_QWORD *)&v762[16]);
          v583 = (const __m128i *)(m128i_i64 + 720);
          v584 = *(_QWORD *)&v762[16];
          if ( v580 )
            sub_1418F44E0(*(__m128i **)&v762[16], v776, v580);
          *(_QWORD *)v762 = v582;
          *(_QWORD *)&v762[8] = v584;
          *(_QWORD *)&v762[16] = v580;
          sub_140E6F0A0(v759, v583, &v754, v762);
          if ( *(_QWORD *)v759 != -1 && *(_QWORD *)v759 )
            sub_140001660(*(_QWORD *)&v759[8], *(_QWORD *)v759, 1);
        }
        if ( *(_QWORD *)(m128i_i64 + 632) )
          sub_1401F5F00(m128i_i64 + 632, (unsigned int)aAdded_2, 5, v575, (__int64)aWebSearchCall, 15, 0);
        v651.m128i_i64[0] = 0;
        v652 = 0;
        nullsub_1(v579);
        v585 = (_DWORD *)sub_140001650(4, 1);
        if ( !v585 )
          sub_141938D2B(1, 4);
        *v585 = 1701869940;
        *(_QWORD *)v759 = 4;
        v766 = (__int64)v585;
        *(_QWORD *)&v759[8] = v585;
        *(_QWORD *)&v759[16] = 4;
        v739 = 1;
        sub_14040FB10(v762, &off_141A536D0);
        if ( v762[0] == 0xFF )
        {
          v754.m128i_i64[0] = *(_QWORD *)&v762[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v754,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A53CA8);
        }
        v586 = _mm_loadu_si128((const __m128i *)v762);
        *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
        v754 = v586;
        v739 = 0;
        sub_140E72AA0(v762, &v651, v759, &v754);
        if ( v762[0] != 0xFF )
          sub_140DF44E0(v762);
        nullsub_1(v587);
        v588 = (void *)sub_140001650(12, 1);
        if ( !v588 )
          sub_141938D2B(1, 12);
        qmemcpy(v588, "output_index", 12);
        *(_QWORD *)v759 = 12;
        *(_QWORD *)&v759[8] = v588;
        *(_QWORD *)&v759[16] = 12;
        v762[0] = 2;
        *(_QWORD *)&v762[8] = 0;
        *(_QWORD *)&v762[16] = v575;
        sub_140E72AA0(&v754, &v651, v759, v762);
        if ( v754.m128i_i8[0] != -1 )
          sub_140DF44E0(&v754);
        nullsub_1(v589);
        v590 = (_DWORD *)sub_140001650(4, 1);
        if ( !v590 )
          sub_141938D2B(1, 4);
        *v590 = 1835365481;
        v657.m128i_i64[0] = 4;
        v766 = (__int64)v590;
        v657.m128i_i64[1] = (__int64)v590;
        v658 = 4;
        v671.m128i_i64[0] = 0;
        v672 = 0;
        nullsub_1(v591);
        v592 = (__m128i *)sub_140001650(4, 1);
        if ( !v592 )
          sub_141938D2B(1, 4);
        v592->m128i_i32[0] = 1701869940;
        *(_QWORD *)v759 = 4;
        v776 = v592;
        *(_QWORD *)&v759[8] = v592;
        *(_QWORD *)&v759[16] = 4;
        v738 = 1;
        sub_14040FB10(v762, &off_141A53CC0);
        if ( v762[0] == 0xFF )
        {
          v754.m128i_i64[0] = *(_QWORD *)&v762[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v754,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A53CA8);
        }
        v593 = _mm_loadu_si128((const __m128i *)v762);
        *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
        v754 = v593;
        v738 = 0;
        sub_140E72AA0(v762, &v671, v759, &v754);
        if ( v762[0] != 0xFF )
          sub_140DF44E0(v762);
        nullsub_1(v594);
        v595 = (__m128i *)sub_140001650(2, 1);
        if ( !v595 )
          sub_141938D2B(1, 2);
        v595->m128i_i16[0] = 25705;
        *(_QWORD *)v759 = 2;
        v776 = v595;
        *(_QWORD *)&v759[8] = v595;
        *(_QWORD *)&v759[16] = 2;
        v737 = 1;
        sub_14040F9F0(v762, &v649);
        if ( v762[0] == 0xFF )
        {
          v754.m128i_i64[0] = *(_QWORD *)&v762[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v754,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A53CA8);
        }
        v596 = _mm_loadu_si128((const __m128i *)v762);
        *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
        v754 = v596;
        v737 = 0;
        sub_140E72AA0(v762, &v671, v759, &v754);
        if ( v762[0] != 0xFF )
          sub_140DF44E0(v762);
        nullsub_1(v597);
        v598 = (__m128i *)sub_140001650(6, 1);
        if ( !v598 )
          sub_141938D2B(1, 6);
        v598->m128i_i16[2] = 29557;
        v598->m128i_i32[0] = 1952543859;
        *(_QWORD *)v759 = 6;
        v776 = v598;
        *(_QWORD *)&v759[8] = v598;
        *(_QWORD *)&v759[16] = 6;
        v736 = 1;
        sub_14040FB10(v762, &off_141A534D8);
        if ( v762[0] == 0xFF )
        {
          v754.m128i_i64[0] = *(_QWORD *)&v762[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v754,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A53CA8);
        }
        v599 = _mm_loadu_si128((const __m128i *)v762);
        *(__m128i *)v755.m512i_i8 = _mm_loadu_si128((const __m128i *)&v762[16]);
        v754 = v599;
        v736 = 0;
        sub_140E72AA0(v762, &v671, v759, &v754);
        if ( v762[0] != 0xFF )
          sub_140DF44E0(v762);
        *(__m128i *)&v762[8] = _mm_loadu_si128(&v671);
        *(_QWORD *)&v762[24] = v672;
        v762[0] = 5;
        v665 = 0;
        sub_140E72AA0(&v754, &v651, &v657, v762);
        if ( v754.m128i_i8[0] != -1 )
          sub_140DF44E0(&v754);
        *(__m128i *)&v762[8] = _mm_loadu_si128(&v651);
        *(_QWORD *)&v762[24] = v652;
        v762[0] = 5;
        sub_140E4D190((unsigned int)&v754, m128i_i64 + 768, (unsigned int)&xmmword_141A536B0, 26, (__int64)v762);
        v600 = (const __m128i *)v754.m128i_i64[1];
        v601 = v755.m512i_i64[0];
        v602 = v753;
        if ( v755.m512i_i64[0] > (unsigned __int64)(v752.m128i_i64[0] - v753) )
        {
          v766 = v754.m128i_i64[1];
          sub_14190D590((unsigned int)&v752, v753, v755.m512i_i32[0], 1, 1);
          v602 = v753;
          v600 = (const __m128i *)v766;
        }
        else if ( !v755.m512i_i64[0] )
        {
LABEL_943:
          v753 = v601 + v602;
          if ( v754.m128i_i64[0] )
            sub_140001660(v600, v754.m128i_i64[0], 1);
          sub_140DF44E0(v762);
          if ( v649.m128i_i64[0] )
            sub_140001660(v649.m128i_i64[1], v649.m128i_i64[0], 1);
          sub_140DF44E0(v659);
          goto LABEL_948;
        }
        sub_1418F44E0((__m128i *)(v752.m128i_i64[1] + v602), v600, v601);
        v602 = v753;
        goto LABEL_943;
      }
LABEL_948:
      sub_140DEDE70(v762, m128i_i64 + 672, v143, v145);
      if ( *(_QWORD *)&v762[8] == -1 )
      {
        sub_140E4D8E0(
          (_DWORD)v648,
          m128i_i64,
          (unsigned int)aUpstreamProtoc,
          23,
          (__int64)"Search result has no matching callUnsupported Anthropic server toolDuplicate search call id",
          34,
          0);
      }
      else
      {
        v766 = *(_QWORD *)&v762[8];
        v603 = *(_DWORD *)v762;
        v776 = *(__m128i **)&v762[16];
        v604 = *(_QWORD *)&v762[24];
        sub_140280760(v762, &v655);
        v605 = m128i_i64;
        if ( *(_QWORD *)v762 != -2 )
        {
          *(_QWORD *)&v659[16] = *(_QWORD *)&v762[16];
          *(__m128i *)v659 = _mm_loadu_si128((const __m128i *)v762);
          v735 = 1;
          sub_140DEB400(v762, m128i_i64 + 720, v143, v145);
          v607 = nullptr;
          v653 = *(_QWORD *)&v762[8];
          v771 = *(const __m128i **)v762;
          if ( *(_QWORD *)v762 != -1 )
            v607 = *(const __m128i **)&v762[8];
          sub_14027D620(v754.m128i_i8, v776, v604, v607, *(__int64 *)&v762[16], (__int64 *)v659);
          if ( (__int64)v771 > 0 )
            sub_140001660(v653, v771, 1);
          v735 = 0;
          sub_140E7D900(v762, v605 + 744, v603, &v754);
          if ( v762[0] != 0xFF )
          {
            v735 = 0;
            sub_140DF44E0(v762);
          }
          v461 = v766;
          if ( !v766 )
            goto LABEL_891;
LABEL_718:
          sub_140001660(v776, v461, 1);
          goto LABEL_891;
        }
        v606 = _mm_loadu_si128((const __m128i *)&v762[8]);
        sub_140E4D8E0(
          (_DWORD)v648,
          m128i_i64,
          (unsigned int)"anthropic_search_incompleteSearch result has no matching callUnsupported Anthropic server toolDu"
                        "plicate search call id",
          27,
          v606.m128i_i64[0],
          v606.m128i_i64[1],
          0);
        if ( v766 )
          sub_140001660(v776, v766, 1);
      }
LABEL_953:
      v778 = 1;
      result = sub_140DF44E0(&v655);
LABEL_54:
      if ( v752.m128i_i64[0] )
        return sub_140001660(v752.m128i_i64[1], v752.m128i_i64[0], 1);
      return result;
    default:
      goto LABEL_892;
  }
}
