// __ZN13codexmate_lib4core8sessions13load_sessions @ 0x1005292a0 | 基线 same-set
// [FULL decompile]

_QWORD *__fastcall codexmate_lib::core::sessions::load_sessions::h8bd835a57b4abc44(
        _QWORD *a1,
        _QWORD *a2,
        __m128i si128)
{
  bool v4; // of
  const void *v5; // rsi
  __int64 v6; // r14
  size_t v7; // rbx
  const void *v8; // r12
  __int128 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 *v12; // r15
  __int128 v13; // rax
  __int64 v14; // r12
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 i; // rcx
  unsigned __int64 v23; // rax
  __m128i v24; // xmm2
  int v26; // esi
  bool v27; // zf
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __m128i v31; // xmm0
  __int64 j; // rcx
  unsigned __int64 v33; // rax
  __m128i v34; // xmm2
  unsigned __int64 v36; // r8
  unsigned __int64 v39; // rax
  __int64 k; // rcx
  unsigned __int64 v41; // rax
  __m128i v42; // xmm2
  unsigned __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // r14
  _QWORD *v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 m; // rcx
  unsigned __int64 v52; // rax
  __m128i v53; // xmm2
  unsigned __int64 v55; // rdi
  __int64 v56; // rsi
  _QWORD *v57; // rsi
  __int64 v58; // rdi
  int v59; // esi
  __int64 v60; // rcx
  __int128 *v61; // r14
  __int64 v62; // r13
  __int64 v63; // r14
  const __m128i *v65; // r15
  int v66; // r12d
  __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // r14
  __int128 v72; // rax
  _QWORD *v73; // r15
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r14
  __int64 v79; // r15
  __int128 v80; // rdi
  __int64 v81; // rdx
  __int128 *v82; // rcx
  __int64 v83; // r12
  __int64 v84; // r13
  __int128 *v85; // r14
  size_t v86; // rbx
  __int64 v87; // r12
  _QWORD *v88; // rax
  void *v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rax
  char v97; // r14
  signed __int64 v98; // rcx
  __int64 v99; // rsi
  signed __int64 v100; // r13
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rsi
  signed __int64 v106; // rbx
  __int64 v107; // r15
  __int64 v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rax
  void *v111; // rcx
  int v112; // esi
  int v113; // edx
  unsigned int v114; // ecx
  unsigned __int64 v115; // r14
  size_t v116; // r8
  const __m128i *v117; // r15
  void *v118; // rdi
  __m128i v119; // xmm1
  __int64 v121; // rcx
  size_t v122; // r14
  __m128i v123; // xmm2
  const void **v125; // r12
  int v126; // eax
  __int64 v127; // rsi
  __int64 v130; // rdx
  __int64 v131; // r14
  __int64 v132; // r13
  unsigned __int64 v133; // rcx
  char v134; // al
  __int64 v135; // rax
  __int64 v137; // rdi
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // r14
  __int64 v142; // r15
  __int128 *v143; // rcx
  _QWORD *v144; // r14
  __int128 *v145; // rcx
  int v146; // eax
  __int64 v147; // r8
  __int64 v148; // r9
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // r12
  __m128i *v151; // rsi
  __m128i *v152; // rcx
  signed __int64 v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // rax
  size_t v156; // rdx
  signed __int64 v157; // rbx
  unsigned __int64 v158; // r13
  __int64 v159; // rcx
  __int64 v161; // r14
  const __m128i *v162; // r15
  char *v164; // rsi
  double v165; // xmm1_8
  unsigned __int64 v166; // r9
  char v169; // r8
  __int64 v170; // r9
  char v171; // si
  __int64 v172; // r8
  int v173; // r12d
  unsigned __int64 v174; // r13
  __int64 v175; // rbx
  __m128i v176; // xmm1
  size_t v177; // r13
  __m128i v178; // xmm2
  __int64 v180; // rax
  __m128i v181; // xmm2
  size_t v182; // rbx
  __int64 v183; // rbx
  __int64 v184; // rsi
  __int64 v185; // rbx
  __int64 v186; // rsi
  __m128d v187; // xmm0
  __int64 v188; // r8
  __int128 *v189; // rbx
  __int64 v190; // rax
  __int64 v191; // rdx
  char *v192; // r15
  __int64 v193; // r13
  const __m128i *v194; // rbx
  int v197; // eax
  void *v199; // r15
  size_t v200; // r14
  int v201; // r14d
  __int64 v202; // rax
  __int64 v203; // r15
  __int64 v204; // r14
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 v208; // rax
  __int64 v209; // rax
  const void *v210; // rsi
  __int64 v211; // rax
  __int64 v212; // rdi
  __int64 v213; // rax
  _BYTE *v214; // rax
  __int64 v215; // rax
  int v216; // esi
  int v217; // edx
  unsigned int v218; // ecx
  __int64 v219; // rax
  __int64 v220; // rax
  const void *v221; // rsi
  __int64 v222; // rax
  __int64 v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rcx
  __int64 v226; // rax
  __int64 v227; // rax
  const void *v228; // rsi
  __int64 v229; // rax
  __int64 v230; // rdi
  __int64 v231; // rax
  const void *v232; // rsi
  __int64 v233; // rax
  __int64 v234; // rdi
  __int64 v235; // rax
  char *v236; // rsi
  __int64 v237; // rcx
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rdx
  __int64 v242; // rax
  __int64 v243; // rdx
  unsigned __int64 v244; // rax
  size_t v245; // rdi
  __int64 v246; // rcx
  __m128i v247; // xmm5
  __m128i v248; // xmm6
  __m128i v249; // xmm7
  __m128i v250; // xmm0
  __m128i v251; // xmm1
  __m128i v252; // xmm2
  __m128i v253; // xmm3
  unsigned __int64 v254; // rcx
  __m128i v255; // xmm3
  __m128i v256; // xmm4
  __m128i v257; // xmm5
  __m128i v258; // xmm0
  __m128i v259; // xmm1
  __m128i v260; // xmm1
  __m128i v261; // xmm1
  __m128i v262; // xmm1
  __m128i v263; // xmm1
  char v264; // al
  unsigned __int64 v265; // rax
  unsigned __int64 v266; // r14
  const __m128i *v267; // rcx
  size_t v268; // rdi
  __m128i v269; // xmm1
  const void *v270; // r15
  size_t v271; // rdx
  __int64 v273; // r8
  size_t v274; // r14
  __m128i v275; // xmm2
  const __m128i *v277; // r12
  const void *v278; // rsi
  const void *v279; // rdi
  size_t v280; // r15
  int v281; // eax
  unsigned int v282; // eax
  unsigned __int64 *v284; // r12
  char v285; // r14
  size_t v286; // rcx
  char v287; // dl
  __int64 v288; // rsi
  size_t jj; // rdx
  __int64 v294; // rbx
  __int64 ii; // rdi
  int v296; // r8d
  size_t v297; // r12
  unsigned __int64 v298; // rax
  __int64 v299; // r14
  __m128i v300; // xmm1
  __int64 v301; // r15
  __int64 v302; // rax
  __m128i v303; // xmm2
  __int64 v305; // r13
  int v306; // eax
  char *v307; // r12
  __int64 v308; // r14
  void *v309; // r15
  __int64 v310; // rbx
  unsigned __int64 v311; // r15
  unsigned __int64 v312; // rbx
  unsigned __int64 v313; // rax
  char *v314; // r12
  size_t v315; // rsi
  size_t v316; // r14
  unsigned __int64 v317; // rax
  __int64 v318; // r15
  __m128i v319; // xmm1
  char *v320; // rax
  __m128i v321; // xmm2
  __int64 v323; // r13
  size_t v324; // r12
  size_t v325; // r14
  int v326; // eax
  int v327; // eax
  __int64 v328; // r15
  __int128 *v329; // rbx
  __int64 v330; // r8
  void *v331; // rax
  unsigned __int64 v332; // rax
  __int64 v333; // r15
  __m128i v334; // xmm1
  unsigned __int64 v335; // rax
  __m128i v336; // xmm2
  unsigned __int64 v338; // r13
  __int64 v339; // r12
  int v340; // eax
  __int64 v341; // r12
  __int64 v342; // rax
  __int128 v343; // rax
  _BYTE *v344; // r15
  unsigned __int8 v346; // bl
  __int64 v347; // r14
  __int64 v348; // r15
  __int64 v349; // r12
  const __m128i *v351; // rbx
  int v352; // r13d
  __int64 v353; // rax
  unsigned __int64 v354; // rax
  __int64 v355; // r14
  size_t v356; // r14
  void *v357; // rax
  __int64 v358; // rdx
  size_t v359; // rbx
  void *v360; // rax
  __int64 v361; // rdx
  __int64 v362; // r15
  void *v363; // rax
  size_t v364; // r14
  __int64 v365; // r15
  void *v366; // rax
  void *v367; // rax
  __int64 v368; // rcx
  double *v369; // rax
  _BOOL8 v370; // rax
  double v371; // xmm0_8
  int v372; // ecx
  __int64 v373; // rbx
  size_t v374; // r14
  void *v375; // rax
  size_t v376; // rdx
  __int32 v377; // eax
  size_t v378; // rdx
  size_t v379; // rbx
  size_t v380; // rsi
  __int64 v381; // rbx
  char v382; // r14
  void *v383; // r15
  size_t v384; // rbx
  void *v385; // rdi
  size_t v386; // rsi
  unsigned __int64 v387; // rcx
  __int64 v388; // r15
  size_t v389; // r14
  __int64 v390; // rax
  size_t v391; // rsi
  _DWORD *v392; // rax
  unsigned int v393; // ebx
  __int64 v394; // rax
  __int64 v395; // rdi
  __int64 v396; // rcx
  _BYTE *v397; // rdi
  unsigned __int64 v398; // r12
  signed __int64 v399; // r15
  __int64 v400; // rsi
  __int64 v401; // rax
  __int64 v402; // rdx
  const void *v403; // r14
  bool v404; // r13
  __int64 v405; // r12
  __int64 v406; // rax
  __int64 v407; // rdi
  __int64 v408; // rax
  __int64 v409; // rbx
  size_t v410; // r15
  __int64 v411; // r14
  size_t v412; // r14
  size_t v413; // rsi
  __int64 v414; // r15
  void *v415; // rax
  size_t v416; // rbx
  char v417; // r12
  unsigned __int64 v418; // r14
  char v419; // al
  __int32 v420; // r8d
  unsigned __int64 v421; // r14
  __int64 v422; // r14
  __int64 v423; // rdi
  unsigned __int64 v424; // rsi
  __int64 v425; // rax
  __int64 v426; // r14
  _DWORD *v427; // rax
  unsigned __int64 v428; // rdx
  int v429; // ecx
  void *v430; // rax
  __int64 v431; // rdx
  size_t v432; // r15
  __int64 v433; // r14
  _QWORD *v434; // rax
  size_t v435; // r12
  void *v436; // rax
  size_t v437; // r12
  size_t v438; // r14
  char v439; // al
  size_t v440; // r14
  size_t v441; // r12
  unsigned __int128 v442; // kr180_16
  void *v443; // rax
  __int64 v444; // rdx
  __int64 v445; // rdi
  _QWORD *v446; // r13
  __int64 v447; // rbx
  __int64 v448; // r15
  __int64 v449; // r12
  __int64 v450; // rsi
  char v451; // bl
  __int64 v452; // rsi
  __int64 v453; // rax
  size_t v454; // rdx
  const void *v455; // r15
  __int64 v456; // rbx
  _QWORD *v457; // r14
  const void *v458; // rsi
  size_t v459; // r15
  __int64 v460; // r14
  _QWORD *v461; // rax
  unsigned __int64 v462; // rbx
  _QWORD *v463; // r15
  size_t v464; // rsi
  __int64 v465; // rax
  __int64 v466; // rdx
  __int64 v467; // rbx
  __int64 v468; // r14
  __int64 v469; // r15
  __int64 v470; // rbx
  __int64 v471; // r14
  __int64 v472; // r15
  __int64 v473; // rsi
  _QWORD *v474; // rax
  size_t v475; // rbx
  const void *v476; // r14
  size_t v477; // r13
  const void *v478; // r12
  __int64 v479; // rbx
  void *v480; // r14
  size_t v481; // rbx
  __int64 v482; // r15
  __int64 v483; // rsi
  __int64 v484; // rbx
  __int64 v485; // r14
  __int64 v486; // rdi
  void *v487; // rsi
  _QWORD *v488; // rax
  __int64 v489; // r14
  __int64 v490; // r15
  const void *v491; // r14
  size_t v492; // rdx
  __int64 v493; // rdi
  __int64 v494; // rsi
  __int64 v495; // rbx
  __int64 v496; // rdx
  __int64 v497; // r14
  __int64 v498; // rbx
  __int64 v499; // r14
  __int64 v500; // rdi
  void *v501; // rsi
  void *v502; // rax
  void *v503; // r15
  _QWORD *v504; // rax
  __int64 v505; // rbx
  __int64 v506; // r14
  __int64 v507; // r14
  size_t v508; // r15
  _QWORD *v509; // rdx
  __int64 v510; // rax
  __int64 v512; // rbx
  __int64 v513; // r14
  __int64 v514; // r12
  const __m128i *v516; // r15
  int v517; // r13d
  __int64 v518; // rax
  __int64 v519; // rsi
  unsigned __int64 v520; // rax
  __int64 v521; // rbx
  __int64 v523; // rdi
  __int64 v524; // rdi
  void *v525; // rsi
  char *v526; // rsi
  int v527; // r8d
  const void *v528; // r13
  void *v529; // r13
  __int128 v530; // rdi
  size_t v531; // r12
  unsigned __int128 v532; // kr1B0_16
  __int64 v533; // rbx
  __int64 v534; // r10
  double v535; // r14
  __int64 v536; // rdx
  void *v537; // r11
  __int128 v538; // rax
  __int64 v539; // r12
  __int64 v540; // rax
  const void *v541; // r14
  __int64 v542; // r12
  __int128 v543; // kr210_16
  __int64 v544; // rdx
  __int64 v545; // rax
  __int64 v546; // rcx
  __int64 v547; // rax
  bool v548; // r14
  bool v549; // bl
  unsigned __int64 v550; // rbx
  __int64 v551; // rdx
  const __m128i *v552; // rcx
  __m128i v553; // xmm1
  char *v555; // rsi
  unsigned __int64 v556; // rbx
  __m128i v557; // xmm2
  const void **v559; // r14
  const __m128i *v560; // r15
  int v561; // eax
  int v562; // eax
  __int64 v564; // rdi
  char *v565; // r14
  __int64 v566; // r12
  char v568; // bl
  const __m128i *v569; // r14
  __int8 v570; // dl
  unsigned __int64 v572; // rax
  __int64 n; // rcx
  unsigned __int64 v575; // rax
  __m128i v576; // xmm2
  unsigned __int64 v578; // rdi
  __int64 v579; // rsi
  __int64 v580; // rsi
  __int64 v581; // rdi
  int v582; // esi
  __int64 v583; // rdx
  __int64 v584; // rcx
  __int64 v585; // rdi
  unsigned __int64 v586; // rax
  __int64 v587; // rcx
  unsigned __int64 v589; // rax
  __m128i v590; // xmm2
  __int64 v592; // rsi
  _QWORD *v593; // rsi
  int v594; // esi
  __int64 v595; // rbx
  __int64 v596; // r14
  __int64 v597; // r15
  __int64 v598; // rdx
  __int64 v599; // rdx
  __int64 v600; // rdx
  _QWORD v601[21]; // [rsp+0h] [rbp-A10h] BYREF
  _QWORD v602[2]; // [rsp+A8h] [rbp-968h] BYREF
  _OWORD v603[3]; // [rsp+B8h] [rbp-958h] BYREF
  __int64 v604; // [rsp+E8h] [rbp-928h]
  __int64 v605; // [rsp+F0h] [rbp-920h]
  __int64 v606; // [rsp+F8h] [rbp-918h]
  __int64 v607; // [rsp+100h] [rbp-910h]
  __int64 v608; // [rsp+108h] [rbp-908h]
  signed __int64 v609; // [rsp+110h] [rbp-900h]
  size_t v610; // [rsp+118h] [rbp-8F8h]
  __int64 v611; // [rsp+120h] [rbp-8F0h]
  size_t v612; // [rsp+128h] [rbp-8E8h]
  size_t v613; // [rsp+130h] [rbp-8E0h]
  __int64 v614; // [rsp+138h] [rbp-8D8h] BYREF
  __int64 v615; // [rsp+140h] [rbp-8D0h]
  __int128 v616; // [rsp+150h] [rbp-8C0h] BYREF
  __int128 v617; // [rsp+160h] [rbp-8B0h]
  __int128 v618; // [rsp+170h] [rbp-8A0h] BYREF
  __int64 v619; // [rsp+180h] [rbp-890h]
  __int64 v620; // [rsp+188h] [rbp-888h]
  __int64 v621; // [rsp+190h] [rbp-880h]
  size_t v622; // [rsp+198h] [rbp-878h]
  _BYTE v623[24]; // [rsp+1A0h] [rbp-870h] BYREF
  __int128 v624; // [rsp+1B8h] [rbp-858h] BYREF
  __int64 v625; // [rsp+1C8h] [rbp-848h]
  __int64 v626; // [rsp+1D0h] [rbp-840h] BYREF
  _QWORD *v627; // [rsp+1D8h] [rbp-838h]
  __int64 v628; // [rsp+1E0h] [rbp-830h]
  size_t v629; // [rsp+1E8h] [rbp-828h] BYREF
  __int64 v630; // [rsp+1F0h] [rbp-820h]
  size_t v631; // [rsp+1F8h] [rbp-818h]
  __int128 *v632; // [rsp+200h] [rbp-810h] BYREF
  _BYTE v633[24]; // [rsp+208h] [rbp-808h] BYREF
  __int64 v634; // [rsp+220h] [rbp-7F0h]
  __int64 v635; // [rsp+228h] [rbp-7E8h]
  _OWORD v636[13]; // [rsp+230h] [rbp-7E0h] BYREF
  _OWORD v637[31]; // [rsp+300h] [rbp-710h] BYREF
  __int64 *v638; // [rsp+4F0h] [rbp-520h] BYREF
  __int64 (__fastcall *v639)(_QWORD, _QWORD); // [rsp+4F8h] [rbp-518h]
  _QWORD *v640; // [rsp+508h] [rbp-508h]
  __int64 v641; // [rsp+510h] [rbp-500h]
  unsigned __int64 v642; // [rsp+518h] [rbp-4F8h]
  signed __int64 v643; // [rsp+520h] [rbp-4F0h]
  __int64 v644; // [rsp+528h] [rbp-4E8h] BYREF
  __int64 v645; // [rsp+530h] [rbp-4E0h]
  __m128i v646; // [rsp+540h] [rbp-4D0h] BYREF
  __m128i v647; // [rsp+550h] [rbp-4C0h] BYREF
  __int64 v648; // [rsp+560h] [rbp-4B0h]
  __int64 v649; // [rsp+568h] [rbp-4A8h]
  __int64 v650; // [rsp+570h] [rbp-4A0h]
  __int128 v651; // [rsp+578h] [rbp-498h] BYREF
  __int64 v652; // [rsp+588h] [rbp-488h]
  __int128 v653; // [rsp+590h] [rbp-480h] BYREF
  __int64 v654; // [rsp+5A0h] [rbp-470h]
  __int128 v655; // [rsp+5A8h] [rbp-468h]
  __int64 v656; // [rsp+5B8h] [rbp-458h]
  __int64 v657; // [rsp+5C0h] [rbp-450h]
  __int64 v658; // [rsp+5C8h] [rbp-448h] BYREF
  __int64 v659; // [rsp+5D0h] [rbp-440h]
  unsigned __int64 v660; // [rsp+5D8h] [rbp-438h]
  __m128i v661; // [rsp+5E0h] [rbp-430h] BYREF
  __int128 v662; // [rsp+5F0h] [rbp-420h]
  __int64 v663; // [rsp+600h] [rbp-410h]
  __int128 v664; // [rsp+608h] [rbp-408h]
  sqlite3_stmt *v665; // [rsp+618h] [rbp-3F8h]
  void *v666[2]; // [rsp+620h] [rbp-3F0h] BYREF
  size_t v667; // [rsp+638h] [rbp-3D8h] BYREF
  void *v668; // [rsp+640h] [rbp-3D0h]
  size_t v669; // [rsp+648h] [rbp-3C8h]
  __int64 v670; // [rsp+650h] [rbp-3C0h]
  __int128 v671; // [rsp+658h] [rbp-3B8h] BYREF
  __int64 v672; // [rsp+668h] [rbp-3A8h]
  __m128i v673; // [rsp+670h] [rbp-3A0h] BYREF
  __m128i v674; // [rsp+680h] [rbp-390h] BYREF
  __int64 v675; // [rsp+690h] [rbp-380h] BYREF
  __int64 v676; // [rsp+698h] [rbp-378h]
  double v677; // [rsp+6A0h] [rbp-370h]
  __int64 v678; // [rsp+6A8h] [rbp-368h]
  _OWORD v679[7]; // [rsp+6B0h] [rbp-360h] BYREF
  __m128i v680; // [rsp+720h] [rbp-2F0h] BYREF
  void *v681; // [rsp+738h] [rbp-2D8h]
  double v682; // [rsp+740h] [rbp-2D0h]
  size_t v683; // [rsp+748h] [rbp-2C8h]
  __m128i v684; // [rsp+750h] [rbp-2C0h] BYREF
  __int64 v685; // [rsp+768h] [rbp-2A8h]
  __m128i v686; // [rsp+770h] [rbp-2A0h] BYREF
  unsigned __int128 v687; // [rsp+780h] [rbp-290h] BYREF
  __int128 v688; // [rsp+790h] [rbp-280h]
  __int64 v689; // [rsp+7A0h] [rbp-270h]
  __int128 v690; // [rsp+7A8h] [rbp-268h]
  __int128 *v691; // [rsp+7C0h] [rbp-250h]
  __int128 v692; // [rsp+7C8h] [rbp-248h] BYREF
  __m128i v693; // [rsp+7D8h] [rbp-238h] BYREF
  __int128 v694; // [rsp+7E8h] [rbp-228h] BYREF
  _BYTE v695[232]; // [rsp+7F8h] [rbp-218h] BYREF
  unsigned __int64 v696; // [rsp+8E0h] [rbp-130h]
  size_t v697; // [rsp+8E8h] [rbp-128h]
  size_t v698; // [rsp+8F0h] [rbp-120h]
  size_t v699; // [rsp+8F8h] [rbp-118h]
  __m128i v700; // [rsp+900h] [rbp-110h] BYREF
  char v701; // [rsp+91Eh] [rbp-F2h] BYREF
  char v702; // [rsp+91Fh] [rbp-F1h] BYREF
  void *v703; // [rsp+920h] [rbp-F0h]
  char *v704; // [rsp+928h] [rbp-E8h]
  void *__src[2]; // [rsp+930h] [rbp-E0h] BYREF
  unsigned __int64 v706; // [rsp+948h] [rbp-C8h]
  void *v707; // [rsp+950h] [rbp-C0h]
  void *v708; // [rsp+958h] [rbp-B8h]
  __int64 v709; // [rsp+960h] [rbp-B0h]
  size_t v710; // [rsp+968h] [rbp-A8h]
  void *__s2[2]; // [rsp+970h] [rbp-A0h] BYREF
  __m128i v712; // [rsp+980h] [rbp-90h] BYREF
  unsigned __int64 v713; // [rsp+998h] [rbp-78h]
  size_t v714[2]; // [rsp+9A0h] [rbp-70h] BYREF
  size_t __n; // [rsp+9B8h] [rbp-58h]
  unsigned __int64 v716; // [rsp+9C0h] [rbp-50h]
  size_t v717; // [rsp+9C8h] [rbp-48h]
  void *__s1; // [rsp+9D0h] [rbp-40h]
  __int64 v719; // [rsp+9D8h] [rbp-38h]
  void *v720; // [rsp+9E0h] [rbp-30h]

  v640 = a1;
  codexmate_lib::core::sessions::build_rollout_index::hd09fe8ff8627f787(v603, a2);
  v4 = __OFSUB__(0, a2[90]);
  v720 = a2;
  if ( v4 )
  {
    v5 = (const void *)a2[1];
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v629, v5, a2[2]);
    v6 = v630;
    v7 = v631;
  }
  else
  {
    v8 = (const void *)a2[91];
    v7 = a2[92];
    if ( v7 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v603, a2);
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1);
      if ( !v6 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7);
    }
    else
    {
      v6 = 1;
    }
    v629 = v7;
    v630 = v6;
    v5 = v8;
    memcpy((void *)v6, v8, v7);
    v631 = v7;
  }
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v12 = v9;
  if ( *((_BYTE *)v9 + 16) == 1 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)v9;
    *((_QWORD *)&v13 + 1) = *((_QWORD *)v12 + 1);
  }
  else
  {
    *(_QWORD *)&v13 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                        &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                        v5,
                        v10,
                        v11);
    *v12 = v13;
    *((_BYTE *)v12 + 16) = 1;
  }
  *(_QWORD *)v12 = v13 + 1;
  v693 = 0u;
  *((_QWORD *)&v692 + 1) = 0;
  *(_QWORD *)&v692 = &xmmword_1015FBEC0;
  v694 = v13;
  std::sys::fs::metadata::h32fa16d3052ea535(v637, v6, v7);
  v14 = *(_QWORD *)&v637[0];
  _RDI = v637[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    *(_QWORD *)&v637[0],
    *((_QWORD *)&v637[0] + 1));
  v691 = v12;
  if ( v14 )
  {
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    *(_OWORD *)v695 = v692;
    goto LABEL_89;
  }
  *((_QWORD *)&_RDI + 1) = v6;
  codexmate_lib::core::sessions::open_codex_db::h5838dac6be6fd626(v637, v6, v7, 1);
  if ( BYTE8(v637[6]) == 3 )
  {
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    *(_OWORD *)v695 = v692;
    *(_QWORD *)&_RDI = v637;
    *(double *)si128.i64 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v637);
    goto LABEL_89;
  }
  qmemcpy(v679, v637, sizeof(v679));
  *((_QWORD *)&_RDI + 1) = v679;
  codexmate_lib::core::sessions::sqlite_table_columns::hffa44fdbd9ac0916(v637, v679);
  if ( LODWORD(v637[0]) != 11 )
  {
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    *(_OWORD *)v695 = v692;
    *(double *)si128.i64 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v637);
    goto LABEL_88;
  }
  v676 = *(_QWORD *)&v637[3];
  v675 = *((_QWORD *)&v637[2] + 1);
  v18 = *(_QWORD *)&v637[2];
  v674 = *(__m128i *)((char *)&v637[1] + 8);
  v673 = *(__m128i *)((char *)v637 + 8);
  if ( !*(_QWORD *)&v637[2] )
  {
    *((_QWORD *)&_RDI + 1) = v673.i64[1];
LABEL_33:
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    HIDWORD(_RAX) = DWORD1(v692);
    v28 = *((_QWORD *)&v692 + 1);
    *(_OWORD *)v695 = v692;
    if ( *((_QWORD *)&_RDI + 1) )
      goto LABEL_78;
    goto LABEL_88;
  }
  v19 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, &anon_92869709a5e99ce1936aa4e326b6c562_188, 2);
  *((_QWORD *)&_RDI + 1) = v673.i64[1];
  v20 = v673.i64[0];
  si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v19 >> 57), (__m128i)0LL);
  v21 = v673.i64[0] - 24;
  for ( i = 0; ; i += 16 )
  {
    v23 = *((_QWORD *)&_RDI + 1) & v19;
    v24 = _mm_loadu_si128((const __m128i *)(v673.i64[0] + v23));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, si128));
    if ( _EDX )
      break;
LABEL_22:
    v17 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL));
    if ( (_DWORD)v17 )
      goto LABEL_33;
    v19 = v23 + i + 16;
  }
  __s1 = *((void **)&_RDI + 1);
  while ( 1 )
  {
    *(_QWORD *)&_RDI = *((_QWORD *)&_RDI + 1);
    __asm { tzcnt   esi, edx }
    *((_QWORD *)&_RDI + 1) = -3 * (_RDI & (v23 + *((_QWORD *)&_RDI + 1)));
    if ( *(_QWORD *)(v21 + 8LL * *((_QWORD *)&_RDI + 1) + 16) == 2
      && **(_WORD **)(v21 + 8LL * *((_QWORD *)&_RDI + 1) + 8) == 25705 )
    {
      break;
    }
    v26 = _EDX - 1;
    LOWORD(v26) = _EDX & (_EDX - 1);
    v27 = (_WORD)v26 == 0;
    _EDX = v26;
    *((_QWORD *)&_RDI + 1) = __s1;
    if ( v27 )
      goto LABEL_22;
  }
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v614,
    &v673,
    "title0agent_nicknameagent_role",
    5,
    "''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"",
    2,
    *(double *)si128.i64,
    NAN);
  v29 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, "recency_at_msupdated_at_mscreated_at_ms", 13);
  v31 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v29 >> 57), (__m128i)0LL);
  for ( j = 0; ; j += 16 )
  {
    v33 = (unsigned __int64)__s1 & v29;
    v34 = _mm_loadu_si128((const __m128i *)(v20 + v33));
    _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v34, v31));
    if ( _EDI )
    {
      while ( 1 )
      {
        __asm { tzcnt   r8d, edi }
        v36 = -3LL * ((unsigned __int64)__s1 & (v33 + _R8));
        if ( *(_QWORD *)(v21 + 8 * v36 + 16) == 13
          && !(**(_QWORD **)(v21 + 8 * v36 + 8) ^ 0x5F79636E65636572LL
             | *(_QWORD *)(*(_QWORD *)(v21 + 8 * v36 + 8) + 5LL) ^ 0x736D5F74615F7963LL) )
        {
          break;
        }
        _R8 = (unsigned int)(_EDI - 1);
        LOWORD(_R8) = _EDI & (_EDI - 1);
        _EDI = _R8;
        if ( !(_WORD)_R8 )
          goto LABEL_30;
      }
      _RDI = (unsigned __int64)&v675;
      v39 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, "updated_at_mscreated_at_ms", 13);
      si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v39 >> 57), (__m128i)0LL);
      for ( k = 0; ; k += 16 )
      {
        v41 = (unsigned __int64)__s1 & v39;
        v42 = _mm_loadu_si128((const __m128i *)(v20 + v41));
        _RSI = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v42, si128));
        if ( (_DWORD)_RSI )
        {
          while ( 1 )
          {
            __asm { tzcnt   edi, esi }
            v44 = -3LL * ((unsigned __int64)__s1 & (v41 + _RDI));
            if ( *(_QWORD *)(v21 + 8 * v44 + 16) == 13
              && !(**(_QWORD **)(v21 + 8 * v44 + 8) ^ 0x5F64657461647075LL
                 | *(_QWORD *)(*(_QWORD *)(v21 + 8 * v44 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
            {
              break;
            }
            _RDI = (unsigned int)(_RSI - 1);
            LOWORD(_RDI) = _RSI & (_RSI - 1);
            _RSI = (unsigned int)_RDI;
            if ( !(_WORD)_RDI )
              goto LABEL_40;
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, _RSI);
          v46 = 64;
          v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1);
          if ( v47 )
          {
            qmemcpy(v47, "CAST(COALESCE(recency_at_ms, updated_at_ms, 0) AS REAL) / 1000.0", 64);
            v48 = 64;
            goto LABEL_56;
          }
          goto LABEL_1019;
        }
LABEL_40:
        v45 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v42, (__m128i)-1LL));
        if ( (_DWORD)v45 )
          break;
        v39 = v41 + k + 16;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(_RDI, v45);
      v46 = 49;
      v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1);
      if ( v47 )
      {
        qmemcpy(v47 + 2, "cency_at_ms, 0) AS REAL) / 1000.", 32);
        v60 = 0x657228454353454CLL;
LABEL_55:
        v47[1] = v60;
        *v47 = 0x414F432854534143LL;
        *((_BYTE *)v47 + 48) = 48;
        v48 = 49;
        goto LABEL_56;
      }
LABEL_1019:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v46);
    }
LABEL_30:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v34, (__m128i)-1LL)) )
      break;
    v29 = v33 + j + 16;
  }
  v49 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, "updated_at_mscreated_at_ms", 13);
  si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v49 >> 57), (__m128i)0LL);
  for ( m = 0; ; m += 16 )
  {
    _RSI = __s1;
    v52 = (unsigned __int64)__s1 & v49;
    v53 = _mm_loadu_si128((const __m128i *)(v20 + v52));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v53, si128));
    if ( _EDX )
    {
      while ( 1 )
      {
        v55 = (unsigned __int64)_RSI;
        __asm { tzcnt   esi, edx }
        v56 = -3LL * (v55 & ((unsigned __int64)_RSI + v52));
        if ( *(_QWORD *)(v21 + 8 * v56 + 16) == 13 )
        {
          v57 = *(_QWORD **)(v21 + 8 * v56 + 8);
          v58 = *v57 ^ 0x5F64657461647075LL;
          if ( !(v58 | *(_QWORD *)((char *)v57 + 5) ^ 0x736D5F74615F6465LL) )
            break;
        }
        v59 = _EDX - 1;
        LOWORD(v59) = _EDX & (_EDX - 1);
        v27 = (_WORD)v59 == 0;
        _EDX = v59;
        _RSI = __s1;
        if ( v27 )
          goto LABEL_49;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, 0);
      v46 = 49;
      v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1);
      if ( v47 )
      {
        qmemcpy(v47 + 2, "dated_at_ms, 0) AS REAL) / 1000.", 32);
        v60 = 0x707528454353454CLL;
        goto LABEL_55;
      }
      goto LABEL_1019;
    }
LABEL_49:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v53, (__m128i)-1LL)) )
      break;
    v49 = v52 + m + 16;
  }
  v572 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, "updated_atelectron-saved-workspace-roots", 10);
  si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v572 >> 57), (__m128i)0LL);
  for ( n = 0; ; n += 16 )
  {
    _RSI = __s1;
    v575 = (unsigned __int64)__s1 & v572;
    v576 = _mm_loadu_si128((const __m128i *)(v20 + v575));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v576, si128));
    if ( _EDX )
    {
      while ( 1 )
      {
        v578 = (unsigned __int64)_RSI;
        __asm { tzcnt   esi, edx }
        v579 = -3LL * (v578 & ((unsigned __int64)_RSI + v575));
        if ( *(_QWORD *)(v21 + 8 * v579 + 16) == 10 )
        {
          v580 = *(_QWORD *)(v21 + 8 * v579 + 8);
          v581 = *(_QWORD *)v580 ^ 0x5F64657461647075LL;
          if ( !(v581 | *(unsigned __int16 *)(v580 + 8) ^ 0x7461LL) )
            break;
        }
        v582 = _EDX - 1;
        LOWORD(v582) = _EDX & (_EDX - 1);
        v27 = (_WORD)v582 == 0;
        _EDX = v582;
        _RSI = __s1;
        if ( v27 )
          goto LABEL_960;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v581, 0);
      v46 = 37;
      v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
      if ( v47 )
      {
        qmemcpy(v47, "CAST(COALESCE(updated_at, 0) AS REAL)", 37);
        v48 = 37;
        goto LABEL_56;
      }
      goto LABEL_1019;
    }
LABEL_960:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v576, (__m128i)-1LL)) )
      break;
    v572 = v575 + n + 16;
  }
  v585 = (__int64)&v675;
  v586 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, "created_at_ms", 13);
  si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v586 >> 57), (__m128i)0LL);
  v587 = 0;
  while ( 2 )
  {
    _RSI = __s1;
    v589 = (unsigned __int64)__s1 & v586;
    v590 = _mm_loadu_si128((const __m128i *)(v20 + v589));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v590, si128));
    if ( _EDX )
    {
      while ( 1 )
      {
        v585 = (__int64)_RSI;
        __asm { tzcnt   esi, edx }
        v592 = -3LL * (v585 & ((unsigned __int64)_RSI + v589));
        if ( *(_QWORD *)(v21 + 8 * v592 + 16) == 13 )
        {
          v593 = *(_QWORD **)(v21 + 8 * v592 + 8);
          v585 = *v593 ^ 0x5F64657461657263LL;
          if ( !(v585 | *(_QWORD *)((char *)v593 + 5) ^ 0x736D5F74615F6465LL) )
            break;
        }
        v594 = _EDX - 1;
        LOWORD(v594) = _EDX & (_EDX - 1);
        v27 = (_WORD)v594 == 0;
        _EDX = v594;
        _RSI = __s1;
        if ( v27 )
          goto LABEL_995;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v585, 0);
      v46 = 49;
      v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1);
      if ( v47 )
      {
        qmemcpy(v47 + 2, "eated_at_ms, 0) AS REAL) / 1000.", 32);
        v60 = 0x726328454353454CLL;
        goto LABEL_55;
      }
      goto LABEL_1019;
    }
LABEL_995:
    if ( !_mm_movemask_epi8(_mm_cmpeq_epi8(v590, (__m128i)-1LL)) )
    {
      v586 = v589 + v587 + 16;
      v587 += 16;
      continue;
    }
    break;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v585, _RSI);
  v46 = 3;
  v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v47 )
    goto LABEL_1019;
  *((_BYTE *)v47 + 2) = 48;
  *(_WORD *)v47 = 11824;
  v48 = 3;
LABEL_56:
  v626 = v48;
  v627 = v47;
  v628 = v48;
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v644,
    &v673,
    "cwd",
    3,
    "NULLUser.gitAuth",
    4,
    *(double *)si128.i64,
    NAN);
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v638,
    &v673,
    "archivedAuthFile~/.codexsessionsccswitchorphaned",
    8,
    "0agent_nicknameagent_role",
    1,
    *(double *)si128.i64,
    NAN);
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v658,
    &v673,
    "agent_nicknameagent_role",
    14,
    "NULLUser.gitAuth",
    4,
    *(double *)si128.i64,
    NAN);
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v653,
    &v673,
    "agent_role",
    10,
    "NULLUser.gitAuth",
    4,
    *(double *)si128.i64,
    NAN);
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v651,
    &v673,
    "source",
    6,
    "''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"",
    2,
    *(double *)si128.i64,
    NAN);
  v61 = &v671;
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v671,
    &v673,
    "model_provider",
    14,
    "''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"",
    2,
    *(double *)si128.i64,
    NAN);
  codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
    &v667,
    &v673,
    &unk_1015FC569,
    12,
    "NULLUser.gitAuth",
    4,
    *(double *)si128.i64,
    NAN);
  *(_QWORD *)&v637[0] = &v614;
  *((_QWORD *)&v637[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[1] = &v626;
  *((_QWORD *)&v637[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[2] = &v644;
  *((_QWORD *)&v637[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[3] = &v638;
  *((_QWORD *)&v637[3] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[4] = &v658;
  *((_QWORD *)&v637[4] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[5] = &v653;
  *((_QWORD *)&v637[5] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[6] = &v651;
  *((_QWORD *)&v637[6] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[7] = &v671;
  *((_QWORD *)&v637[7] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v637[8] = &v667;
  *((_QWORD *)&v637[8] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v695, &unk_1017C1A9E, v637);
  v697 = *(_QWORD *)v695;
  LOBYTE(v61) = 1;
  v678 = *(_QWORD *)&v695[8];
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v637, v679, *(_QWORD *)&v695[8], *(_QWORD *)&v695[16]);
  if ( LOBYTE(v637[0]) )
  {
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    *(_OWORD *)v695 = v692;
    HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$core..result..Result$LT$rusqlite..statement..Statement$C$rusqlite..error..Error$GT$$GT$::hc0d218cca20dac30(v637) >> 32;
    if ( v697 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v678, v697, 1);
    if ( v667 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v668, v667, 1);
    if ( (_QWORD)v671 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v671 + 1), v671, 1);
    if ( (_QWORD)v651 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v651 + 1), v651, 1);
    if ( (_QWORD)v653 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v653 + 1), v653, 1);
    if ( v658 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v659, v658, 1);
    if ( v638 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v639, v638, 1);
    if ( v644 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v645, v644, 1);
    if ( v626 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v627, v626, 1);
    if ( v614 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v615, v614, 1);
    *((_QWORD *)&_RDI + 1) = __s1;
    if ( __s1 )
    {
LABEL_78:
      v62 = *((_QWORD *)&_RDI + 1);
      if ( v18 )
      {
        v63 = v673.i64[0];
        si128 = _mm_load_si128((const __m128i *)v673.i64[0]);
        _R12D = ~_mm_movemask_epi8(si128);
        v65 = (const __m128i *)(v673.i64[0] + 16);
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              si128 = _mm_load_si128(v65);
              v66 = _mm_movemask_epi8(si128);
              v63 -= 384;
              ++v65;
            }
            while ( v66 == 0xFFFF );
            _R12D = ~v66;
          }
          __asm { tzcnt   eax, r12d }
          v67 = -3 * _RAX;
          v68 = *(_QWORD *)(v63 + 8 * v67 - 24);
          if ( v68 )
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v63 + 8 * v67 - 16), v68, 1);
          --v18;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v18 );
      }
      v69 = (24 * v62 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      *((_QWORD *)&_RDI + 1) = v69 + v62 + 17;
      v12 = v691;
      if ( v69 + v62 != -17 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                 v673.i64[0] - v69,
                                 *((_QWORD *)&_RDI + 1),
                                 16);
    }
LABEL_88:
    *(_QWORD *)&_RDI = v679;
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v679, *((_QWORD *)&_RDI + 1), v17, v28);
    goto LABEL_89;
  }
  v665 = *(sqlite3_stmt **)&v637[4];
  v664 = v637[3];
  v663 = *((_QWORD *)&v637[2] + 1);
  v662 = *(_OWORD *)((char *)&v637[1] + 8);
  v661 = *(__m128i *)((char *)v637 + 8);
  v146 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v637[4]);
  v149 = 0x8000000000000013LL;
  v150 = 0x8000000000000016LL;
  v151 = nullptr;
  v152 = &v661;
  if ( !v146 )
  {
    v151 = &v661;
    v149 = 0x8000000000000016LL;
  }
  *((_QWORD *)&v687 + 1) = v151;
  *(_QWORD *)&v688 = v146;
  *(_QWORD *)&v687 = v149;
  if ( v146 )
  {
    *(_OWORD *)&v695[32] = v694;
    *(__m128i *)&v695[16] = v693;
    *(_OWORD *)v695 = v692;
    goto LABEL_968;
  }
  *(_QWORD *)&v637[0] = 1;
  *((_QWORD *)&v637[0] + 1) = &v661;
  *(_QWORD *)&v637[1] = 0;
  *((_QWORD *)&v637[1] + 1) = 0x8000000000000001LL;
  v642 = 0x8000000000000001LL;
  *(_QWORD *)&v637[16] = 0x8000000000000001LL;
  v696 = 0x8000000000000016LL;
  while ( 2 )
  {
    while ( 2 )
    {
      v526 = (char *)v637 + 8;
      _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa(
        v695,
        (char *)v637 + 8,
        v149,
        v152,
        v147,
        v148,
        v601[0],
        v601[1],
        v601[2]);
      __s1 = v61;
      v528 = *(const void **)v695;
      if ( *(_QWORD *)v695 != v150 )
      {
        v531 = *(_QWORD *)&v695[8];
        v532 = *(_OWORD *)&v695[16];
        v533 = *(_QWORD *)&v695[40];
        v534 = *(_QWORD *)&v695[32];
        v535 = *(double *)&v695[48];
        v536 = *(_QWORD *)&v695[56];
        v537 = (void *)0x8000000000000000LL;
        goto LABEL_919;
      }
      if ( !*(_QWORD *)&v637[1] )
        goto LABEL_964;
      rusqlite::row::Row::get::h97011a0484b66d6b(v695, &v637[1], 7, &off_1019645A0);
      v529 = __s1;
      if ( *(_QWORD *)v695 == v150 )
      {
        v700.i64[0] = *(_QWORD *)&v695[8];
        v530 = *(_OWORD *)&v695[16];
      }
      else
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
        v530 = 1u;
        v700.i64[0] = 0;
      }
      v680.i64[0] = *((_QWORD *)&v530 + 1);
      v677 = *(double *)&v530;
      *(_QWORD *)&v538 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(
                           v530,
                           *((_QWORD *)&v530 + 1));
      LODWORD(v685) = 0;
      if ( *((_QWORD *)&v538 + 1) && *(_BYTE *)v538 == 123 )
      {
        *(_OWORD *)v695 = v538;
        *(_OWORD *)&v695[16] = 0u;
        *(_OWORD *)&v695[32] = v538;
        serde_json::de::from_trait::h51e180b4bb6af5e0(&v632, v695);
        if ( (_BYTE)v632 == 6 )
        {
          core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v633);
          goto LABEL_850;
        }
        *(_OWORD *)&v695[16] = *(_OWORD *)&v633[8];
        *(_OWORD *)v695 = __PAIR128__(*(unsigned __int64 *)v633, (unsigned __int64)v632);
        v540 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v695, &unk_1015FEFFA, 39);
        if ( v540 )
        {
          v27 = *(_BYTE *)v540 == 3;
          v686.i64[0] = 0x8000000000000000LL;
          if ( v27 )
          {
            v541 = *(const void **)(v540 + 16);
            v529 = *(void **)(v540 + 24);
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v632, v529, 0, 1, 1);
            v686.i64[0] = *(_QWORD *)v633;
            if ( (_DWORD)v632 == 1 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v686.i64[0], *(_QWORD *)&v633[8]);
            v683 = *(_QWORD *)&v633[8];
            memcpy(*(void **)&v633[8], v541, (size_t)v529);
          }
        }
        else
        {
          v686.i64[0] = 0x8000000000000000LL;
        }
        v545 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v695, &unk_1015FF021, 28);
        LODWORD(v685) = 0;
        if ( v545 && *(_BYTE *)v545 == 2 )
        {
          v546 = *(_QWORD *)(v545 + 8);
          if ( v546 )
          {
            if ( (_DWORD)v546 == 1 )
            {
              v547 = *(_QWORD *)(v545 + 16);
              goto LABEL_951;
            }
          }
          else
          {
            v547 = *(_QWORD *)(v545 + 16);
            if ( v547 >= 0 )
LABEL_951:
              LODWORD(v685) = v547;
          }
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v695);
      }
      else
      {
LABEL_850:
        v686.i64[0] = 0x8000000000000000LL;
      }
      __s1 = v529;
      rusqlite::row::Row::get::h97011a0484b66d6b(v695, &v637[1], 0, &off_1019645B8);
      v698 = *(_QWORD *)&v695[8];
      v528 = *(const void **)v695;
      v699 = *(_QWORD *)&v695[24];
      v704 = *(char **)&v695[16];
      if ( *(_QWORD *)v695 != v150 )
      {
        v533 = *(_QWORD *)&v695[40];
        v539 = *(_QWORD *)&v695[32];
        v535 = *(double *)&v695[48];
        v680.i64[0] = *(_QWORD *)&v695[56];
        if ( 2 * v686.i64[0] )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v683, v686.i64[0], 1);
        v647.i64[0] = v539;
        v526 = (char *)v700.i64[0];
        if ( v700.i64[0] )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v677, v700.i64[0], 1);
        v537 = (void *)0x8000000000000000LL;
        v531 = v698;
        v536 = v680.i64[0];
        v527 = v685;
        v534 = v647.i64[0];
        v532 = __PAIR128__(v699, (unsigned __int64)v704);
        goto LABEL_919;
      }
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 1, &off_1019645D0);
      if ( *(_QWORD *)v695 == v150 )
      {
        v682 = *(double *)&v695[8];
        if ( *(__int64 *)&v695[8] >= (__int64)0x8000000000000002LL )
        {
          v647.i64[0] = *(_QWORD *)&v695[24];
          v656 = *(_QWORD *)&v695[16];
          goto LABEL_862;
        }
      }
      else
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
      }
      v656 = 1;
      v647.i64[0] = 0;
      v682 = 0.0;
LABEL_862:
      rusqlite::row::Row::get::h8876d97ff3115cec(v695, &v637[1], 2, &off_1019645E8);
      if ( *(_QWORD *)v695 == v150 )
      {
        si128.i64[0] = *(_QWORD *)&v695[8];
        v648 = *(_QWORD *)&v695[8];
      }
      else
      {
        si128.i64[0] = 0;
        v648 = 0;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
      }
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 3, &off_101964600);
      if ( *(_QWORD *)v695 != v150 )
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
LABEL_869:
        v712.i64[0] = 0x8000000000000000LL;
        goto LABEL_876;
      }
      v712.i64[0] = *(_QWORD *)&v695[8];
      if ( *(__int64 *)&v695[8] < (__int64)0x8000000000000002LL )
      {
        v712.i64[0] = 0x8000000000000000LL;
        goto LABEL_876;
      }
      if ( !*(_QWORD *)&v695[24] )
      {
        if ( v712.i64[0] )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v695[16], v712.i64[0], 1);
        goto LABEL_869;
      }
      v655 = *(_OWORD *)&v695[16];
LABEL_876:
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 9, &off_101964618);
      if ( *(_QWORD *)v695 == v150 )
      {
        v542 = *(_QWORD *)&v695[8];
        if ( *(__int64 *)&v695[8] >= (__int64)0x8000000000000002LL )
        {
          v543 = *(_OWORD *)&v695[16];
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v695[16], *(_QWORD *)&v695[24]);
          if ( v544 )
          {
            v702 = 92;
            v701 = 47;
            *(_QWORD *)v695 = v543;
            *(_QWORD *)&v695[8] = v543 + *((_QWORD *)&v543 + 1);
            *(_QWORD *)&v695[16] = &v702;
            *(_QWORD *)&v695[24] = &v701;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hee7ab80f55dd7f09(
              &v632,
              v695);
            if ( v542 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v543, v542, 1);
            v706 = (unsigned __int64)v632;
            v684.i64[0] = *(_QWORD *)v633;
            v681 = *(void **)&v633[8];
          }
          else
          {
            if ( v542 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v543, v542, 1);
            v706 = 0x8000000000000000LL;
          }
        }
        else
        {
          v706 = 0x8000000000000000LL;
        }
        v150 = v696;
      }
      else
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
        v706 = 0x8000000000000000LL;
      }
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 8, &off_101964630);
      if ( *(_QWORD *)v695 == v150 )
      {
        v713 = *(_QWORD *)&v695[8];
        if ( *(__int64 *)&v695[8] >= (__int64)0x8000000000000002LL )
        {
          __s2[0] = *(void **)&v695[24];
          v719 = *(_QWORD *)&v695[16];
          goto LABEL_901;
        }
      }
      else
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
      }
      v719 = 1;
      __s2[0] = nullptr;
      v713 = 0;
LABEL_901:
      rusqlite::row::Row::get::h100bc309f48de08a(v695, &v637[1], 4, &off_101964648);
      v548 = *(_QWORD *)v695 == v150;
      v549 = *(_QWORD *)&v695[8] != 0;
      if ( *(_QWORD *)v695 != v150 )
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 5, &off_101964660);
      if ( *(_QWORD *)v695 != v150 )
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
LABEL_907:
        __n = 0x8000000000000000LL;
        goto LABEL_910;
      }
      __n = *(_QWORD *)&v695[8];
      if ( *(__int64 *)&v695[8] < (__int64)0x8000000000000002LL )
      {
        __n = 0x8000000000000000LL;
        goto LABEL_910;
      }
      if ( !*(_QWORD *)&v695[24] )
      {
        if ( __n )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v695[16], __n, 1);
        goto LABEL_907;
      }
      v666[0] = *(void **)&v695[24];
      v707 = *(void **)&v695[16];
LABEL_910:
      rusqlite::row::Row::get::hcedcbe2f57af1c50(v695, &v637[1], 6, &off_101964678);
      if ( *(_QWORD *)v695 != v150 )
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v695);
LABEL_914:
        v526 = (char *)0x8000000000000000LL;
        goto LABEL_917;
      }
      if ( *(__int64 *)&v695[8] < (__int64)0x8000000000000002LL )
      {
        v526 = (char *)0x8000000000000000LL;
        goto LABEL_917;
      }
      v526 = *(char **)&v695[8];
      if ( !*(_QWORD *)&v695[24] )
      {
        if ( *(_QWORD *)&v695[8] )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                   *(_QWORD *)&v695[16],
                                   *(_QWORD *)&v695[8],
                                   1);
        goto LABEL_914;
      }
      v641 = *(_QWORD *)&v695[24];
      v646.i64[0] = *(_QWORD *)&v695[16];
LABEL_917:
      if ( v698 == v642 )
      {
LABEL_964:
        if ( *(_QWORD *)&v637[0] )
          core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553((char *)v637 + 8);
        *(_QWORD *)&v637[0] = 0;
        goto LABEL_967;
      }
      LOBYTE(__src[0]) = v549 && v548;
      v537 = (void *)v698;
      v528 = v704;
      v531 = v699;
      v717 = v686.i64[0];
      v714[0] = v683;
      v709 = (__int64)__s1;
      v533 = v700.i64[0];
      v535 = v677;
      v536 = v680.i64[0];
      v527 = v685;
      v534 = v647.i64[0];
      si128.i64[0] = v648;
      v532 = __PAIR128__(v656, *(unsigned __int64 *)&v682);
LABEL_919:
      *(_QWORD *)v695 = v537;
      *(_QWORD *)&v695[8] = v528;
      *(_QWORD *)&v695[16] = v531;
      *(_OWORD *)&v695[24] = v532;
      *(_QWORD *)&v695[40] = v534;
      *(_QWORD *)&v695[48] = v533;
      *(double *)&v695[56] = v535;
      *(_QWORD *)&v695[64] = v536;
      *(_QWORD *)&v695[72] = v713;
      *(_QWORD *)&v695[80] = v719;
      *(void **)&v695[88] = __s2[0];
      *(_QWORD *)&v695[96] = v712.i64[0];
      *(_OWORD *)&v695[104] = v655;
      *(_QWORD *)&v695[120] = v706;
      *(_QWORD *)&v695[128] = v684.i64[0];
      *(_QWORD *)&v695[136] = v681;
      *(_QWORD *)&v695[144] = __n;
      *(_QWORD *)&v695[152] = v707;
      *(void **)&v695[160] = v666[0];
      *(_QWORD *)&v695[168] = v526;
      *(_QWORD *)&v695[176] = v646.i64[0];
      *(_QWORD *)&v695[184] = v641;
      *(_QWORD *)&v695[192] = v717;
      *(_QWORD *)&v695[200] = v714[0];
      *(_QWORD *)&v695[208] = v709;
      *(_QWORD *)&v695[216] = si128.i64[0];
      *(_DWORD *)&v695[224] = v527;
      v695[228] = __src[0];
      if ( v537 == (void *)0x8000000000000000LL )
      {
        v150 = v696;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v695[8]);
        v61 = (__int128 *)__s1;
        if ( !LOBYTE(v637[0]) )
          goto LABEL_967;
        continue;
      }
      break;
    }
    *((_QWORD *)&v636[9] + 1) = v646.i64[0];
    *(_QWORD *)&v636[10] = v641;
    *((_QWORD *)&v636[10] + 1) = v717;
    *(_QWORD *)&v636[11] = v714[0];
    *((_QWORD *)&v636[11] + 1) = v709;
    v636[0] = v532;
    *(_QWORD *)&v636[1] = v534;
    *((_QWORD *)&v636[1] + 1) = v533;
    *(double *)&v636[2] = v535;
    *((_QWORD *)&v636[2] + 1) = v536;
    *(_QWORD *)&v636[3] = v713;
    *((_QWORD *)&v636[3] + 1) = v719;
    *(void **)&v636[4] = __s2[0];
    *((_QWORD *)&v636[4] + 1) = v712.i64[0];
    v636[5] = v655;
    *(_QWORD *)&v636[6] = v706;
    *((_QWORD *)&v636[6] + 1) = v684.i64[0];
    *(_QWORD *)&v636[7] = v681;
    *((_QWORD *)&v636[7] + 1) = __n;
    *(_QWORD *)&v636[8] = v707;
    *((void **)&v636[8] + 1) = v666[0];
    *(_QWORD *)&v636[9] = v526;
    *(_QWORD *)&v636[12] = si128.i64[0];
    DWORD2(v636[12]) = v527;
    BYTE12(v636[12]) = __src[0];
    __src[0] = v537;
    *(_QWORD *)v623 = v537;
    *(_QWORD *)&v623[8] = v528;
    *(_QWORD *)&v623[16] = v531;
    v550 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v694, v623);
    if ( !v693.i64[0] )
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h1d47a6143b03c168(&v692, 1, &v694, 1);
    v698 = v531;
    v551 = *((_QWORD *)&v692 + 1);
    v552 = (const __m128i *)v692;
    v680.i64[0] = v550 >> 57;
    v553 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v550 >> 57), (__m128i)0LL);
    _RAX = 0;
    v555 = nullptr;
    while ( 2 )
    {
      v556 = v551 & v550;
      v557 = _mm_loadu_si128((const __m128i *)((char *)v552 + v556));
      si128 = _mm_cmpeq_epi8(v557, v553);
      _R12D = _mm_movemask_epi8(si128);
      if ( !_R12D )
      {
LABEL_930:
        v12 = v691;
        if ( _RAX != 1 )
        {
          _RAX = (unsigned int)_mm_movemask_epi8(v557);
          if ( !(_DWORD)_RAX )
          {
            v564 = 0;
LABEL_936:
            v550 = (unsigned __int64)&v555[v556 + 16];
            v555 += 16;
            _RAX = v564;
            continue;
          }
          __asm { tzcnt   eax, eax }
          v685 = v551 & (v556 + _RAX);
        }
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v557, (__m128i)-1LL)) )
        {
          v566 = v551;
          _R13 = v685;
          v568 = v552->i8[v685];
          v569 = v552;
          if ( v568 >= 0 )
          {
            _EAX = _mm_movemask_epi8(_mm_load_si128(v552));
            __asm { tzcnt   r13d, eax }
            v568 = v552->i8[_R13];
          }
          *(_QWORD *)&v695[16] = *(_QWORD *)&v623[16];
          *(_OWORD *)v695 = *(_OWORD *)v623;
          memcpy(&v695[24], v636, 0xD0u);
          v570 = v680.i8[0];
          v569->i8[_R13] = v680.i8[0];
          v569[1].i8[v566 & (_R13 - 16)] = v570;
          si128 = _mm_sub_epi64(
                    _mm_loadu_si128(&v693),
                    _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v568 & 1, 0));
          v693 = si128;
          memcpy((char *)&v569[-14] - 232 * _R13 - 8, v695, 0xE8u);
          v150 = v696;
          v61 = (__int128 *)__s1;
          goto LABEL_948;
        }
        v564 = 1;
        goto LABEL_936;
      }
      break;
    }
    v686.i64[0] = v551;
    v700 = v553;
    v704 = v555;
    v699 = _RAX;
    v647 = v557;
    while ( 1 )
    {
      __asm { tzcnt   eax, r12d }
      if ( *((_QWORD *)&v552[-13] - 29 * (v551 & (v556 + _RAX)) - 1) == v698 )
      {
        v559 = (const void **)v552 - 29 * (v551 & (v556 + _RAX));
        v560 = v552;
        v561 = memcmp(v528, *(v559 - 28), v698);
        v552 = v560;
        if ( !v561 )
          break;
      }
      v562 = _R12D - 1;
      LOWORD(v562) = _R12D & (_R12D - 1);
      v27 = (_WORD)v562 == 0;
      _R12D = v562;
      v551 = v686.i64[0];
      v553 = _mm_load_si128(&v700);
      v555 = v704;
      _RAX = v699;
      v557 = _mm_load_si128(&v647);
      if ( v27 )
        goto LABEL_930;
    }
    v565 = (char *)(v559 - 26);
    memcpy(v695, v565, 0xD0u);
    memcpy(v565, v636, 0xD0u);
    if ( __src[0] )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v528, __src[0], 1);
    v12 = v691;
    v150 = v696;
    v61 = (__int128 *)__s1;
    if ( *(_QWORD *)v695 != 0x8000000000000000LL )
      core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..CodexThreadRow$GT$::heda2cea59689e1d6(
        v695,
        *(double *)si128.i64);
LABEL_948:
    if ( LOBYTE(v637[0]) )
      continue;
    break;
  }
LABEL_967:
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$rusqlite..row..MappedRows$LT$codexmate_lib..core..sessions..load_codex_threads..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h35f3de6a6635af4f(v637);
  *(_OWORD *)v695 = v692;
  *(__m128i *)&v695[16] = v693;
  *(_OWORD *)&v695[32] = v694;
  if ( (_QWORD)v687 != v150 )
LABEL_968:
    core::ptr::drop_in_place$LT$core..result..Result$LT$rusqlite..row..MappedRows$LT$codexmate_lib..core..sessions..load_codex_threads..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$rusqlite..error..Error$GT$$GT$::h1a0bae1b732442e9(&v687);
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v661);
  if ( v697 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v678, v697, 1);
  if ( v667 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v668, v667, 1);
  if ( (_QWORD)v671 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v671 + 1), v671, 1);
  if ( (_QWORD)v651 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v651 + 1), v651, 1);
  if ( (_QWORD)v653 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v653 + 1), v653, 1);
  if ( v658 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v659, v658, 1);
  if ( v638 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v639, v638, 1);
  if ( v644 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v645, v644, 1);
  if ( v626 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v627, v626, 1);
  *((_QWORD *)&_RDI + 1) = v614;
  if ( v614 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v615, v614, 1);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v673);
  *(_QWORD *)&_RDI = v679;
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v679, *((_QWORD *)&_RDI + 1), v583, v584);
LABEL_89:
  v616 = *(_OWORD *)v695;
  v617 = *(_OWORD *)&v695[16];
  v618 = *(_OWORD *)&v695[32];
  v70 = *((_QWORD *)v720 + 10);
  v71 = *((_QWORD *)v720 + 11);
  if ( *((_BYTE *)v12 + 16) == 1 )
  {
    v72 = *v12;
  }
  else
  {
    *(_QWORD *)&v72 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                        _RDI,
                        *((_QWORD *)&_RDI + 1),
                        v16,
                        *(_QWORD *)&v695[8]);
    *v12 = v72;
    *((_BYTE *)v12 + 16) = 1;
  }
  *(_QWORD *)v12 = v72 + 1;
  v679[1] = 0u;
  *((_QWORD *)&v679[0] + 1) = 0;
  *(_QWORD *)&v679[0] = &xmmword_1015FBEC0;
  v679[2] = v72;
  std::sys::fs::metadata::h32fa16d3052ea535(v637, v70, v71);
  v73 = v720;
  v74 = *(_QWORD *)&v637[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    *(_QWORD *)&v637[0],
    *((_QWORD *)&v637[0] + 1));
  if ( v74 )
  {
    *(_OWORD *)v695 = *(_OWORD *)((char *)v679 + 8);
    v75 = *(_QWORD *)&v679[0];
    *(_OWORD *)&v695[16] = *(_OWORD *)((char *)&v679[1] + 8);
    *(_QWORD *)&v695[32] = *((_QWORD *)&v679[2] + 1);
    goto LABEL_93;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v637, v70, v71);
  v86 = *((_QWORD *)&v637[0] + 1);
  v87 = *(_QWORD *)&v637[0];
  if ( *(_QWORD *)&v637[0] == 0x8000000000000000LL )
  {
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h362fc81914fac8a3(v679);
    v88 = v640;
    *v640 = 2;
    v88[1] = v86;
LABEL_103:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd36f081da926e1f0(&v616);
    if ( v629 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v630, v629, 1);
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h91af55984fa5bad2(v603);
    return v640;
  }
  *(_QWORD *)&v637[0] = 0;
  *((_QWORD *)&v637[0] + 1) = *(_QWORD *)&v637[1];
  __n = v86;
  *(_QWORD *)&v637[1] = v86;
  *(_OWORD *)((char *)&v637[1] + 8) = *((unsigned __int64 *)&v637[0] + 1);
  *((_QWORD *)&v637[2] + 1) = *((_QWORD *)&v637[0] + 1);
  *(_QWORD *)&v637[3] = 0xA0000000ALL;
  BYTE8(v637[3]) = 1;
  LOWORD(v637[4]) = 0;
  while ( 2 )
  {
    v91 = *(_QWORD *)&v637[1];
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      v636,
      &v637[1]);
    if ( LODWORD(v636[0]) == 1 )
    {
      v92 = *(_QWORD *)&v637[0];
      *(_QWORD *)&v637[0] = *(_QWORD *)&v636[1];
      v93 = *(_QWORD *)&v636[1] - v92;
      v94 = v92 + v91;
      if ( *(_QWORD *)&v636[1] == v92 )
        goto LABEL_121;
LABEL_115:
      if ( *(_BYTE *)(v94 + v93 - 1) == 10 )
      {
        if ( v93 == 1 )
        {
          v93 = 0;
        }
        else if ( *(_BYTE *)(v94 + v93 - 2) == 13 )
        {
          v93 -= 2;
        }
        else
        {
          --v93;
        }
      }
    }
    else
    {
      if ( BYTE1(v637[4]) )
        break;
      BYTE1(v637[4]) = 1;
      v93 = *((_QWORD *)&v637[0] + 1) - *(_QWORD *)&v637[0];
      if ( (LOBYTE(v637[4]) | (*((_QWORD *)&v637[0] + 1) != *(_QWORD *)&v637[0])) != 1 )
        break;
      v94 = *(_QWORD *)&v637[1] + *(_QWORD *)&v637[0];
      if ( v93 )
        goto LABEL_115;
    }
LABEL_121:
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v94, v93);
    if ( !v95 )
      goto LABEL_108;
    *(_QWORD *)&v636[0] = v94;
    *((_QWORD *)&v636[0] + 1) = v93;
    v636[1] = 0u;
    *(_QWORD *)&v636[2] = v94;
    *((_QWORD *)&v636[2] + 1) = v93;
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v687, v636);
    if ( (_BYTE)v687 == 6 )
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb((char *)&v687 + 8);
      goto LABEL_108;
    }
    v636[1] = v688;
    v636[0] = v687;
    v96 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            &anon_92869709a5e99ce1936aa4e326b6c562_188,
            2,
            v636);
    v97 = 1;
    v98 = (signed __int64)__s1;
    v99 = 1;
    if ( v96 && *(_BYTE *)v96 == 3 )
    {
      v100 = *(_QWORD *)(v96 + 24);
      if ( v100 < 0 )
      {
        v137 = 0;
        goto LABEL_179;
      }
      v101 = *(_QWORD *)(v96 + 16);
      if ( v100 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_92869709a5e99ce1936aa4e326b6c562_188, 1);
        v102 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v100, 1);
        if ( v102 )
        {
          v103 = v102;
          v97 = 0;
          goto LABEL_173;
        }
        v98 = v100;
        v137 = 1;
LABEL_179:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v137, v98);
      }
      v100 = 0;
      v103 = 1;
LABEL_173:
      v99 = v101;
      v73 = v720;
    }
    else
    {
      v100 = 0;
      v103 = 1;
    }
    __s1 = (void *)v103;
    memcpy((void *)v103, (const void *)v99, v100);
    v104 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "thread_nameupdated_atelectron-saved-workspace-roots",
             11,
             v636);
    v105 = 1;
    if ( v104 && *(_BYTE *)v104 == 3 )
    {
      v106 = *(_QWORD *)(v104 + 24);
      if ( v106 < 0 )
      {
        v138 = 0;
        goto LABEL_181;
      }
      v107 = *(_QWORD *)(v104 + 16);
      if ( v106 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
          "thread_nameupdated_atelectron-saved-workspace-roots",
          1);
        v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v106, 1);
        if ( v108 )
        {
          v109 = v108;
          v105 = v107;
          goto LABEL_175;
        }
        v712.i64[0] = v106;
        v138 = 1;
LABEL_181:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v138, v712.i64[0]);
      }
      v109 = 1;
      v105 = *(_QWORD *)(v104 + 16);
      v106 = 0;
LABEL_175:
      v73 = v720;
    }
    else
    {
      v106 = 0;
      v109 = 1;
    }
    v712.i64[0] = v109;
    memcpy((void *)v109, (const void *)v105, v106);
    v110 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "updated_atelectron-saved-workspace-roots",
             10,
             v636);
    si128.i64[0] = 0;
    v111 = __s1;
    if ( v110 && *(_BYTE *)v110 == 3 )
    {
      chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
        &v661,
        *(_QWORD *)(v110 + 16),
        *(_QWORD *)(v110 + 24));
      si128.i64[0] = 0;
      if ( v661.i32[0] )
      {
        v112 = (v661.i32[0] >> 13) - 1;
        v113 = 0;
        if ( v661.i32[0] >> 13 <= 0 )
        {
          v114 = (1 - (v661.i32[0] >> 13)) / 0x190u + 1;
          v112 += 400 * v114;
          v113 = -146097 * v114;
        }
        *(double *)si128.i64 = (double)(v661.i32[1]
                                      + 86400
                                      * (((v112 / 100) >> 2)
                                       + ((1461 * v112) >> 2)
                                       + v113
                                       + (((unsigned __int32)v661.i32[0] >> 4) & 0x1FF)
                                       - v112 / 100
                                       - 719163));
      }
      v111 = __s1;
    }
    if ( v97 )
    {
      if ( v106 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v712.i64[0], v106, 1);
      if ( v100 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v100, 1);
      goto LABEL_171;
    }
    v706 = si128.i64[0];
    v673.i64[0] = v100;
    v673.i64[1] = (__int64)v111;
    v674.i64[0] = v100;
    v115 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v679[2], &v673);
    if ( !*(_QWORD *)&v679[1] )
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h91f6fb7ca59ec1ac(v679, 1, &v679[2], 1);
    v713 = v106;
    v116 = *((_QWORD *)&v679[0] + 1);
    v117 = *(const __m128i **)&v679[0];
    v118 = (void *)(v115 >> 57);
    v119 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v115 >> 57), (__m128i)0LL);
    _RAX = 0;
    v121 = 0;
    while ( 2 )
    {
      v122 = v116 & v115;
      v123 = _mm_loadu_si128((const __m128i *)((char *)v117 + v122));
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v123, v119));
      if ( !_EBX )
      {
LABEL_157:
        v127 = v713;
        _R9 = v696;
        if ( _RAX != 1 )
        {
          if ( !_mm_movemask_epi8(v123) )
          {
            v130 = 0;
LABEL_163:
            v115 = v121 + v122 + 16;
            v121 += 16;
            _RAX = v130;
            continue;
          }
          __asm { tzcnt   r9d, eax }
          _R9 = v116 & (v122 + _R9);
        }
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v123, (__m128i)-1LL)) )
        {
          v134 = v117->i8[_R9];
          if ( v134 >= 0 )
          {
            _EAX = _mm_movemask_epi8(_mm_load_si128(v117));
            __asm { tzcnt   r9d, eax }
            v134 = v117->i8[_R9];
          }
          *(_QWORD *)&v662 = v674.i64[0];
          v661 = v673;
          v117->i8[_R9] = (char)v118;
          v117[1].i8[v116 & (_R9 - 16)] = (char)v118;
          v679[1] = _mm_sub_epi64(
                      _mm_loadu_si128((const __m128i *)&v679[1]),
                      _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v134 & 1, 0));
          v135 = 0x1FFFFFFFFFFFFFF9LL * _R9;
          *(_QWORD *)((char *)&v117[-2] + v135 * 8 - 8) = v662;
          *(__m128i *)((char *)v117 + v135 * 8 - 56) = v661;
          v117[-2].i64[v135] = v127;
          *(_QWORD *)((char *)&v117[-1] + v135 * 8 - 8) = v712.i64[0];
          v117[-1].i64[v135] = v127;
          si128.i64[0] = v706;
          v117->i64[v135 - 1] = v706;
          v73 = v720;
          goto LABEL_171;
        }
        v696 = _R9;
        v130 = 1;
        goto LABEL_163;
      }
      break;
    }
    v719 = v87;
    __s2[0] = v118;
    v717 = v116;
    *(__m128i *)v714 = v119;
    v709 = v121;
    __src[0] = (void *)_RAX;
    v680 = v123;
    while ( 1 )
    {
      __asm { tzcnt   eax, ebx }
      if ( v100 == *((_QWORD *)&v117[-2] - 7 * (v116 & (v122 + _RAX)) - 1) )
      {
        v125 = (const void **)v117 - 7 * (v116 & (v122 + _RAX));
        if ( !memcmp(__s1, *(v125 - 6), v100) )
          break;
      }
      v126 = _EBX - 1;
      LOWORD(v126) = _EBX & (_EBX - 1);
      v27 = (_WORD)v126 == 0;
      _EBX = v126;
      v87 = v719;
      v118 = __s2[0];
      v116 = v717;
      v119 = _mm_load_si128((const __m128i *)v714);
      v121 = v709;
      _RAX = (__int64)__src[0];
      v123 = _mm_load_si128(&v680);
      if ( v27 )
        goto LABEL_157;
    }
    v131 = (__int64)*(v125 - 4);
    v132 = (__int64)*(v125 - 3);
    v133 = v713;
    *(v125 - 4) = (const void *)v713;
    *(v125 - 3) = (const void *)v712.i64[0];
    *(v125 - 2) = (const void *)v133;
    si128.i64[0] = v706;
    *(v125 - 1) = (const void *)v706;
    if ( v673.i64[0] )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v673.i64[1], v673.i64[0], 1);
    v73 = v720;
    v87 = v719;
    if ( 2 * v131 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1);
LABEL_171:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v636);
LABEL_108:
    if ( !BYTE1(v637[4]) )
      continue;
    break;
  }
  v75 = *(_QWORD *)&v679[0];
  *(_OWORD *)v695 = *(_OWORD *)((char *)v679 + 8);
  *(_OWORD *)&v695[16] = *(_OWORD *)((char *)&v679[1] + 8);
  *(_QWORD *)&v695[32] = *((_QWORD *)&v679[2] + 1);
  if ( v87 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, v87, 1);
LABEL_93:
  *(_OWORD *)&v623[8] = *(_OWORD *)v695;
  v624 = *(_OWORD *)&v695[16];
  v625 = *(_QWORD *)&v695[32];
  v680.i64[0] = v75;
  *(_QWORD *)v623 = v75;
  v76 = v73[2];
  v696 = v73[1];
  v685 = v76;
  std::path::Path::_join::hb1a495d4f06b13b8(&v687, v696, v76, &unk_1015FEE21, 24);
  v77 = *((_QWORD *)&v687 + 1);
  v78 = v688;
  std::sys::fs::metadata::h32fa16d3052ea535(v637, *((_QWORD *)&v687 + 1), v688);
  v79 = *(_QWORD *)&v637[0];
  v80 = v637[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    *(_QWORD *)&v637[0],
    *((_QWORD *)&v637[0] + 1));
  if ( v79 )
  {
    v82 = v691;
    if ( *((_BYTE *)v691 + 16) == 1 )
    {
      v83 = *(_QWORD *)v691;
      v84 = *((_QWORD *)v691 + 1);
    }
    else
    {
      v83 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v80, *((_QWORD *)&v80 + 1), v81, v691);
      v84 = v598;
      v82 = v691;
      *(_QWORD *)v691 = v83;
      *((_QWORD *)v82 + 1) = v598;
      *((_BYTE *)v82 + 16) = 1;
    }
    *(_QWORD *)v82 = v83 + 1;
    si128.i64[0] = 0;
    v661 = 0;
    *(_QWORD *)&v662 = 0;
    v85 = &xmmword_1015FBEC0;
    goto LABEL_206;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v637, v77, v78);
  v89 = *((void **)&v637[0] + 1);
  if ( *(_QWORD *)&v637[0] == 0x8000000000000000LL )
  {
    v90 = v640;
    *v640 = 2;
    v90[1] = v89;
    if ( (_QWORD)v687 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v687, 1);
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h362fc81914fac8a3(v623);
    goto LABEL_103;
  }
  v720 = *(void **)&v637[0];
  v637[0] = *(_OWORD *)((char *)v637 + 8);
  v637[1] = 0u;
  __s1 = v89;
  v637[2] = __PAIR128__(*((unsigned __int64 *)&v637[0] + 1), (unsigned __int64)v89);
  serde_json::de::from_trait::h51e180b4bb6af5e0(v695, v637);
  LOBYTE(v637[0]) = 0;
  if ( v695[0] == 6 )
  {
    v636[1] = v637[1];
    v636[0] = v637[0];
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v695[8]);
  }
  else
  {
    v636[1] = *(_OWORD *)&v695[16];
    v636[0] = *(_OWORD *)v695;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v637);
  }
  v139 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           "electron-saved-workspace-roots",
           30,
           v636);
  if ( v139 && *(_BYTE *)v139 == 4 )
  {
    v141 = *(_QWORD *)(v139 + 16);
    v142 = *(_QWORD *)(v139 + 24);
    v143 = v691;
    if ( *((_BYTE *)v691 + 16) == 1 )
    {
      v83 = *(_QWORD *)v691;
      v84 = *((_QWORD *)v691 + 1);
    }
    else
    {
      v83 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45("electron-saved-workspace-roots", 30, v140, v691);
      v84 = v600;
      v143 = v691;
      *(_QWORD *)v691 = v83;
      *((_QWORD *)v143 + 1) = v600;
      *((_BYTE *)v143 + 16) = 1;
    }
    *(_QWORD *)v143 = v83 + 1;
    v637[1] = 0u;
    *((_QWORD *)&v637[0] + 1) = 0;
    *(_QWORD *)&v637[0] = &xmmword_1015FBEC0;
    *(_QWORD *)&v637[2] = v83;
    *((_QWORD *)&v637[2] + 1) = v84;
    if ( v142 )
    {
      v144 = (_QWORD *)(v141 + 24);
      do
      {
        if ( *((_BYTE *)v144 - 24) == 3 )
        {
          codexmate_lib::core::sessions::normalize_workspace_root::ha1815fb1396eaf1b(v695, *(v144 - 1), *v144);
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v637, v695);
        }
        v144 += 4;
        --v142;
      }
      while ( v142 );
      v85 = *(__int128 **)&v637[0];
      v84 = *((_QWORD *)&v637[2] + 1);
      v83 = *(_QWORD *)&v637[2];
    }
    else
    {
      v85 = &xmmword_1015FBEC0;
    }
    *(_QWORD *)&v679[1] = *((_QWORD *)&v637[1] + 1);
    v679[0] = *(_OWORD *)((char *)v637 + 8);
  }
  else
  {
    v145 = v691;
    if ( *((_BYTE *)v691 + 16) == 1 )
    {
      v83 = *(_QWORD *)v691;
      v84 = *((_QWORD *)v691 + 1);
    }
    else
    {
      v83 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45("electron-saved-workspace-roots", 30, v140, v691);
      v84 = v599;
      v145 = v691;
      *(_QWORD *)v691 = v83;
      *((_QWORD *)v145 + 1) = v599;
      *((_BYTE *)v145 + 16) = 1;
    }
    *(_QWORD *)v145 = v83 + 1;
    si128.i64[0] = 0;
    memset(v679, 0, 24);
    v85 = &xmmword_1015FBEC0;
  }
  *(_QWORD *)&v662 = *(_QWORD *)&v679[1];
  v661 = (__m128i)v679[0];
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v636);
  if ( v720 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v720, 1);
LABEL_206:
  *(__m128i *)v633 = v661;
  *(_QWORD *)&v633[16] = v662;
  v632 = v85;
  v634 = v83;
  v635 = v84;
  if ( (_QWORD)v687 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v687, 1);
  v153 = v696;
  v154 = v685;
  v155 = std::path::Path::parent::h4c3ac26770731fbb(v696, v685);
  *(_QWORD *)&v655 = v85;
  if ( v155 )
  {
    std::path::Path::_join::hb1a495d4f06b13b8(v637, v155, v156, "DocumentsCodexsession-migration-backupsrollout", 9);
    v157 = *((_QWORD *)&v637[0] + 1);
    v153 = (signed __int64)v695;
    std::path::Path::_join::hb1a495d4f06b13b8(
      v695,
      *((_QWORD *)&v637[0] + 1),
      *(_QWORD *)&v637[1],
      "Codexsession-migration-backupsrollout",
      5);
    v154 = *(_QWORD *)&v637[0];
    if ( *(_QWORD *)&v637[0] )
    {
      v153 = v157;
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, *(_QWORD *)&v637[0], 1);
    }
    *((_QWORD *)&v655 + 1) = *(_QWORD *)&v695[8];
    v158 = *(_QWORD *)v695;
    v641 = *(_QWORD *)&v695[16];
  }
  else
  {
    v158 = 0x8000000000000000LL;
  }
  v694 = v603[2];
  v693 = (__m128i)v603[1];
  v159 = *((_QWORD *)&v603[0] + 1);
  v692 = v603[0];
  HIDWORD(_RAX) = HIDWORD(v617);
  v712.i64[0] = *((_QWORD *)&v617 + 1);
  v719 = v158;
  if ( *((_QWORD *)&v617 + 1) )
  {
    v161 = v616;
    v162 = (const __m128i *)(v616 + 16);
    _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v616));
    do
    {
      if ( !(_WORD)_R12D )
      {
        do
        {
          v173 = _mm_movemask_epi8(_mm_load_si128(v162));
          v161 -= 3712;
          ++v162;
        }
        while ( v173 == 0xFFFF );
        _R12D = ~v173;
      }
      __asm { tzcnt   eax, r12d }
      v720 = (void *)(-232 * _RAX);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
        v637,
        v161 - 232 * _RAX - 232);
      v154 = (__int64)v637;
      v174 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v694, v637);
      _R12D &= _R12D - 1;
      v720 = (char *)v720 + v161;
      --v712.i64[0];
      v156 = *((_QWORD *)&v692 + 1);
      v175 = v692;
      v713 = v174 >> 57;
      v176 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v174 >> 57), (__m128i)0LL);
      __s1 = *((void **)&v637[0] + 1);
      __n = *(_QWORD *)&v637[1];
      v153 = 0;
      v706 = v174;
      while ( 1 )
      {
        v177 = v156 & v174;
        v178 = _mm_loadu_si128((const __m128i *)(v175 + v177));
        si128 = _mm_cmpeq_epi8(v178, v176);
        _RAX = (unsigned int)_mm_movemask_epi8(si128);
        if ( (_DWORD)_RAX )
        {
          v717 = v156;
          *(__m128i *)v714 = v176;
          v709 = v153;
          *(__m128i *)__src = v178;
          while ( 1 )
          {
            __s2[0] = (void *)_RAX;
            __asm { tzcnt   eax, eax }
            v180 = -80LL * (v156 & (v177 + _RAX));
            if ( *(_QWORD *)(v175 + v180 - 64) == __n )
            {
              v153 = *(_QWORD *)(v175 + v180 - 72);
              v154 = (__int64)__s1;
              if ( !memcmp((const void *)v153, __s1, __n) )
                break;
            }
            _RAX = (unsigned int)(LODWORD(__s2[0]) - 1);
            LOWORD(_RAX) = LOWORD(__s2[0]) & (LOWORD(__s2[0]) - 1);
            v156 = v717;
            v176 = _mm_load_si128((const __m128i *)v714);
            v153 = v709;
            v178 = _mm_load_si128((const __m128i *)__src);
            if ( !(_WORD)_RAX )
              goto LABEL_232;
          }
          v154 = *(_QWORD *)&v637[0];
          v158 = v719;
          if ( *(_QWORD *)&v637[0] )
          {
            v153 = (signed __int64)__s1;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, *(_QWORD *)&v637[0], 1);
          }
          goto LABEL_222;
        }
LABEL_232:
        si128.i64[0] = -1;
        v181 = _mm_cmpeq_epi8(v178, (__m128i)-1LL);
        if ( _mm_movemask_epi8(v181) )
          break;
        v174 = v177 + v153 + 16;
        v153 += 16LL;
      }
      if ( !v693.i64[0] )
      {
        v154 = 1;
        v153 = (signed __int64)&v692;
        hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h935c410c969819e9(&v692, 1, &v694, 1);
      }
      v159 = *(_QWORD *)&v637[0];
      HIDWORD(_RAX) = 0x80000000;
      __s2[0] = *(void **)&v637[0];
      v158 = v719;
      v182 = __n;
      if ( *(_QWORD *)&v637[0] != 0x8000000000000000LL )
      {
        if ( *((_QWORD *)v720 - 14) == 0x8000000000000000LL )
        {
          *(_QWORD *)&v636[0] = 0x8000000000000000LL;
        }
        else
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            v636,
            (char *)v720 - 112);
          if ( *(_QWORD *)&v636[0] != 0x8000000000000000LL )
          {
            v709 = *((_QWORD *)&v636[0] + 1);
            v714[0] = *(_QWORD *)&v636[0];
            std::sys::fs::metadata::h32fa16d3052ea535(v637, *((_QWORD *)&v636[0] + 1), *(_QWORD *)&v636[1]);
            if ( !LOBYTE(v637[0]) )
            {
              qmemcpy(&v695[8], &v637[1], 0x58u);
              *(_QWORD *)&v695[136] = *(_QWORD *)&v637[9];
              *(_OWORD *)&v695[120] = v637[8];
              *(_OWORD *)&v695[104] = v637[7];
              *(_QWORD *)v695 = *((_QWORD *)&v637[0] + 1);
              v717 = *((_QWORD *)&v637[6] + 1);
              *(_QWORD *)&v695[96] = *((_QWORD *)&v637[6] + 1);
              std::fs::Metadata::modified::h0e075817eaa8c909(v637, v695);
              if ( DWORD2(v637[0]) == 1000000000 )
              {
                if ( (v637[0] & 3) == 1 )
                {
                  v684.i64[0] = *(_QWORD *)&v637[0] - 1LL;
                  __src[0] = *(void **)(*(_QWORD *)&v637[0] - 1LL);
                  v185 = *(_QWORD *)(*(_QWORD *)&v637[0] + 7LL);
                  if ( *(_QWORD *)v185 )
                    (*(void (__fastcall **)(void *))v185)(__src[0]);
                  v186 = *(_QWORD *)(v185 + 8);
                  if ( v186 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v186, *(_QWORD *)(v185 + 16));
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v684.i64[0], 24, 8);
                  v182 = __n;
                }
              }
              else
              {
                *(_QWORD *)v695 = *(_QWORD *)&v637[0];
                *(_DWORD *)&v695[8] = DWORD2(v637[0]);
                std::time::SystemTime::duration_since::had059553cab94f96(v637, v695, 0, 0);
                if ( LODWORD(v637[0]) != 1 )
                {
                  v187 = _mm_sub_pd(
                           (__m128d)_mm_unpacklo_ps(
                                      (__m128)*((unsigned __int64 *)&v637[0] + 1),
                                      (__m128)xmmword_1015DBA50),
                           (__m128d)xmmword_1015DBA60);
                  *(double *)v181.i64 = (double)SLODWORD(v637[1]) / 1000000000.0
                                      + _mm_unpackhi_pd(v187, v187).f64[0]
                                      + v187.f64[0];
                  v164 = (char *)v720;
                  v165 = _mm_blendv_pd(
                           (__m128d)*((unsigned __int64 *)v720 - 2),
                           (__m128d)v181,
                           _mm_cmplt_sd((__m128d)0LL, (__m128d)v181)).f64[0];
                  _RAX = 1;
                  goto LABEL_218;
                }
              }
              _RAX = 1;
              goto LABEL_217;
            }
            if ( (BYTE8(v637[0]) & 3) == 1 )
            {
              __src[0] = (void *)(*((_QWORD *)&v637[0] + 1) - 1LL);
              v717 = *(_QWORD *)(*((_QWORD *)&v637[0] + 1) - 1LL);
              v183 = *(_QWORD *)(*((_QWORD *)&v637[0] + 1) + 7LL);
              if ( *(_QWORD *)v183 )
                (*(void (__fastcall **)(size_t))v183)(v717);
              v184 = *(_QWORD *)(v183 + 8);
              if ( v184 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v717, v184, *(_QWORD *)(v183 + 16));
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], 24, 8);
              _RAX = 0;
              v182 = __n;
LABEL_217:
              v164 = (char *)v720;
              v165 = *((double *)v720 - 2);
LABEL_218:
              *(_QWORD *)&v637[1] = *(_QWORD *)&v636[1];
              v637[0] = v636[0];
              v159 = (unsigned __int8)*(v164 - 4);
              v156 = v692;
              v166 = *((_QWORD *)&v692 + 1) & v706;
              _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v692
                                                                                     + (*((_QWORD *)&v692 + 1) & v706))));
              if ( !(_DWORD)_RDI )
              {
                v188 = 16;
                do
                {
                  v166 = *((_QWORD *)&v692 + 1) & (v188 + v166);
                  _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v692 + v166)));
                  v188 += 16;
                }
                while ( !(_DWORD)_RDI );
              }
              __asm { tzcnt   edi, edi }
              _RDI = *((_QWORD *)&v692 + 1) & (v166 + _RDI);
              v169 = *(_BYTE *)(v692 + _RDI);
              if ( v169 >= 0 )
              {
                _RDI = (unsigned int)_mm_movemask_epi8(_mm_load_si128((const __m128i *)v692));
                __asm { tzcnt   edi, edi }
                v169 = *(_BYTE *)(v692 + _RDI);
              }
              v170 = *((_QWORD *)&v692 + 1) & (_RDI - 16);
              v171 = v713;
              *(_BYTE *)(v692 + _RDI) = v713;
              *(_BYTE *)(v156 + v170 + 16) = v171;
              v154 = -80LL * _RDI;
              v153 = v169 & 1;
              *(void **)(v156 + v154 - 80) = __s2[0];
              *(_QWORD *)(v156 + v154 - 72) = __s1;
              *(_QWORD *)(v156 + v154 - 64) = v182;
              *(_QWORD *)(v156 + v154 - 56) = _RAX;
              *(_QWORD *)(v156 + v154 - 48) = v717;
              v172 = *((_QWORD *)&v637[0] + 1);
              *(_QWORD *)(v156 + v154 - 40) = *(_QWORD *)&v637[0];
              *(_QWORD *)(v156 + v154 - 32) = v172;
              HIDWORD(_RAX) = DWORD1(v637[1]);
              *(_QWORD *)(v156 + v154 - 24) = *(_QWORD *)&v637[1];
              *(double *)(v156 + v154 - 16) = v165;
              *(_BYTE *)(v156 + v154 - 8) = v159;
              si128 = _mm_sub_epi64(
                        _mm_loadu_si128(&v693),
                        _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v153, 0));
              v693 = si128;
              continue;
            }
          }
        }
        _RAX = 0;
        goto LABEL_217;
      }
LABEL_222:
      ;
    }
    while ( v712.i64[0] );
  }
  v189 = v691;
  if ( *((_BYTE *)v691 + 16) == 1 )
  {
    v190 = *(_QWORD *)v691;
    v191 = *((_QWORD *)v691 + 1);
  }
  else
  {
    v190 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v153, v154, v156, v159);
    *(_QWORD *)v189 = v190;
    *((_QWORD *)v189 + 1) = v191;
    *((_BYTE *)v189 + 16) = 1;
  }
  *(_QWORD *)v189 = v190 + 1;
  v674 = 0u;
  v673.i64[1] = 0;
  v673.i64[0] = (__int64)&xmmword_1015FBEC0;
  v675 = v190;
  v676 = v191;
  v192 = (char *)v693.i64[1];
  if ( !v693.i64[1] )
  {
    v658 = 0;
    v659 = 8;
    v660 = 0;
    goto LABEL_809;
  }
  v193 = v692;
  v194 = (const __m128i *)(v692 + 16);
  si128 = _mm_load_si128((const __m128i *)v692);
  _RAX = (unsigned int)~_mm_movemask_epi8(si128);
  while ( 2 )
  {
    if ( !(_WORD)_RAX )
    {
      do
      {
        si128 = _mm_load_si128(v194);
        v197 = _mm_movemask_epi8(si128);
        v193 -= 1280;
        ++v194;
      }
      while ( v197 == 0xFFFF );
      _RAX = (unsigned int)~v197;
    }
    _R14 = (unsigned int)_RAX;
    __asm { tzcnt   eax, r14d }
    _R12 = -80 * _RAX;
    if ( *(_QWORD *)(v193 - 80 * _RAX - 40) == 0x8000000000000000LL )
      goto LABEL_268;
    __s1 = (void *)_R14;
    v720 = v192;
    v199 = *(void **)(v193 - 80 * _RAX - 32);
    v200 = *(_QWORD *)(v193 - 80 * _RAX - 24);
    if ( (unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v199, v200) )
    {
      v602[0] = v199;
      v602[1] = v200;
      *(_DWORD *)v695 = 0;
      *(_WORD *)&v695[4] = 438;
      *(_WORD *)&v695[10] = 0;
      *(_DWORD *)&v695[6] = 1;
      std::fs::OpenOptions::_open::h1dad73452047b8aa(v637, v695, v199, v200);
      if ( LOBYTE(v637[0]) )
      {
        *(_QWORD *)v695 = 2;
        *(_QWORD *)&v695[8] = *((_QWORD *)&v637[0] + 1);
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)&v636[0] = v602;
          *((_QWORD *)&v636[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          *(_QWORD *)&v636[1] = v695;
          *((_QWORD *)&v636[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          *(_QWORD *)&v637[3] = 2;
          *((_QWORD *)&v637[3] + 1) = &unk_1015FEE39;
          *(_QWORD *)&v637[4] = 29;
          *(_QWORD *)&v637[5] = &unk_1017C189C;
          *((_QWORD *)&v637[5] + 1) = v636;
          *(_QWORD *)&v637[0] = 0;
          *((_QWORD *)&v637[0] + 1) = &unk_1015FEE39;
          v637[1] = 0x1Du;
          *(_QWORD *)&v637[2] = "src/core/sessions.rs";
          *((_QWORD *)&v637[2] + 1) = 20;
          *((_QWORD *)&v637[4] + 1) = 0x3800000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v679, v637);
        }
        *(double *)si128.i64 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v695);
        goto LABEL_266;
      }
      v201 = DWORD1(v637[0]);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v637, v695);
      v202 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1);
      if ( !v202 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000);
      __n = v193 + _R12 - 80;
      memset(&v636[1], 0, 24);
      *(_QWORD *)&v637[1] = 0x8000000000000000LL;
      *((_QWORD *)&v637[2] + 1) = 0x8000000000000000LL;
      *(_QWORD *)&v637[0] = 0;
      *(_QWORD *)&v637[4] = 0x8000000000000000LL;
      *((_QWORD *)&v637[5] + 1) = 0x8000000000000000LL;
      LODWORD(v637[10]) = 0;
      *(_QWORD *)&v637[7] = 0x8000000000000000LL;
      *((_QWORD *)&v637[8] + 1) = 0x8000000000000000LL;
      *(_QWORD *)&v636[0] = v202;
      *((_QWORD *)&v636[0] + 1) = 0x2000;
      DWORD2(v636[2]) = v201;
      v712.i64[0] = 0;
      while ( 1 )
      {
LABEL_280:
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82(
          &v671,
          v636);
        v203 = v671;
        if ( (_QWORD)v671 == 0x8000000000000001LL )
        {
          if ( *((_QWORD *)&v636[0] + 1) )
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                     *(_QWORD *)&v636[0],
                                     *((_QWORD *)&v636[0] + 1),
                                     1);
          close_NOCANCEL(DWORD2(v636[2]));
          memcpy(&v601[3], (char *)&v637[1] + 8, 0x90u);
          v601[0] = v712.i64[0];
          v601[1] = *((_QWORD *)&v637[0] + 1);
          v601[2] = *(_QWORD *)&v637[1];
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, __n);
          v266 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v675, v695);
          if ( !v674.i64[0] )
            hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hbbc51ee863b8f788(
              &v673,
              1,
              &v675,
              1,
              *(double *)si128.i64);
          v268 = v673.u64[1];
          v267 = (const __m128i *)v673.i64[0];
          v713 = v266 >> 57;
          v269 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v266 >> 57), (__m128i)0LL);
          v270 = *(const void **)&v695[8];
          v271 = *(_QWORD *)&v695[16];
          _RAX = 0;
          v273 = 0;
          __n = v673.u64[1];
          v712.i64[0] = v673.i64[0];
          while ( 2 )
          {
            v274 = v268 & v266;
            v275 = _mm_loadu_si128((const __m128i *)((char *)v267 + v274));
            si128 = _mm_cmpeq_epi8(v275, v269);
            _R9 = (unsigned int)_mm_movemask_epi8(si128);
            if ( (_DWORD)_R9 )
            {
              v717 = _R12;
              *(__m128i *)v714 = v269;
              v709 = v273;
              __src[0] = (void *)_RAX;
              v684 = v275;
              while ( 1 )
              {
                __s2[0] = (void *)_R9;
                __asm { tzcnt   eax, r9d }
                if ( v271 == v267[-12 * (v268 & (v274 + _RAX)) - 11].i64[0] )
                {
                  v277 = &v267[-12 * (v268 & (v274 + _RAX))];
                  v278 = (const void *)v277[-12].i64[1];
                  v279 = v270;
                  v706 = (unsigned __int64)v270;
                  v280 = v271;
                  v281 = memcmp(v279, v278, v271);
                  v271 = v280;
                  v267 = (const __m128i *)v712.i64[0];
                  v270 = (const void *)v706;
                  if ( !v281 )
                    break;
                }
                v282 = LODWORD(__s2[0]) - 1;
                LOWORD(v282) = LOWORD(__s2[0]) & (LOWORD(__s2[0]) - 1);
                _R9 = v282;
                v268 = __n;
                _R12 = v717;
                v269 = _mm_load_si128((const __m128i *)v714);
                v273 = v709;
                _RAX = (__int64)__src[0];
                v275 = _mm_load_si128(&v684);
                if ( ((__int64)__s2[0] & (unsigned __int16)(LOWORD(__s2[0]) - 1)) == 0 )
                  goto LABEL_454;
              }
              v284 = &v277[-11].u64[1];
              memcpy(v637, v284, 0xA8u);
              memcpy(v284, v601, 0xA8u);
              if ( *(_QWORD *)v695 )
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v270, *(_QWORD *)v695, 1);
              v192 = (char *)v720;
              LODWORD(_R14) = (_DWORD)__s1;
              if ( *(_QWORD *)&v637[0] != 2 )
                core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..RolloutSummaryData$GT$::ha583597ecc5c28f7(
                  v637,
                  *(double *)si128.i64);
              goto LABEL_268;
            }
LABEL_454:
            if ( _RAX == 1 )
            {
LABEL_457:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v275, (__m128i)-1LL)) )
              {
                v285 = v267->i8[_R12];
                v192 = (char *)v720;
                if ( v285 >= 0 )
                {
                  _EAX = _mm_movemask_epi8(_mm_load_si128(v267));
                  __asm { tzcnt   r12d, eax }
                  v285 = v267->i8[_R12];
                }
                *(_QWORD *)&v637[1] = *(_QWORD *)&v695[16];
                v637[0] = *(_OWORD *)v695;
                memcpy((char *)&v637[1] + 8, v601, 0xA8u);
                v286 = __n & (_R12 - 16);
                v287 = v713;
                v288 = v712.i64[0];
                *(_BYTE *)(v712.i64[0] + _R12) = v713;
                *(_BYTE *)(v288 + v286 + 16) = v287;
                si128 = _mm_sub_epi64(
                          _mm_loadu_si128(&v674),
                          _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v285 & 1, 0));
                v674 = si128;
                memcpy((void *)(v288 - 192 * _R12 - 192), v637, 0xC0u);
                goto LABEL_267;
              }
              _RAX = 1;
            }
            else
            {
              if ( _mm_movemask_epi8(v275) )
              {
                __asm { tzcnt   r12d, eax }
                _R12 = v268 & (v274 + _R12);
                goto LABEL_457;
              }
              _RAX = 0;
            }
            v266 = v273 + v274 + 16;
            v273 += 16;
            continue;
          }
        }
        v204 = *((_QWORD *)&v671 + 1);
        if ( (_QWORD)v671 != 0x8000000000000000LL )
          break;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4(
          0x8000000000000000LL,
          *((_QWORD *)&v671 + 1));
      }
      _R12 = v672;
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*((_QWORD *)&v671 + 1), v672);
      if ( !v205 )
        goto LABEL_299;
      *(_QWORD *)v695 = v204;
      *(_QWORD *)&v695[8] = _R12;
      *(_OWORD *)&v695[16] = 0u;
      *(_QWORD *)&v695[32] = v204;
      *(_QWORD *)&v695[40] = _R12;
      serde_json::de::from_trait::h51e180b4bb6af5e0(v679, v695);
      if ( LOBYTE(v679[0]) == 6 )
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb((char *)v679 + 8);
        goto LABEL_299;
      }
      v688 = v679[1];
      v687 = v679[0];
      v206 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "typefullargsopenwithkindsavetrueuuidemitshowhide",
               4,
               &v687);
      if ( !v206 || *(_BYTE *)v206 != 3 )
        goto LABEL_298;
      v207 = *(_QWORD *)(v206 + 16);
      v208 = *(_QWORD *)(v206 + 24);
      if ( v208 != 13 )
      {
        if ( v208 != 12 || *(_QWORD *)v207 ^ 0x5F6E6F6973736573LL | *(unsigned int *)(v207 + 8) ^ 0x6174656DLL )
          goto LABEL_298;
        if ( *(_QWORD *)&v637[4] == 0x8000000000000000LL )
        {
          v209 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v687, "/payload/cwdcwd", 12);
          if ( v209 && *(_BYTE *)v209 == 3 )
          {
            _R12 = *(_QWORD *)(v209 + 24);
            if ( _R12 < 0 )
            {
              v524 = 0;
              v525 = v707;
              goto LABEL_838;
            }
            v210 = *(const void **)(v209 + 16);
            if ( _R12 )
            {
              v713 = *(_QWORD *)(v209 + 16);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v687, v210);
              v211 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(_R12, 1);
              if ( !v211 )
                goto LABEL_1021;
              v212 = v211;
              v210 = (const void *)v713;
            }
            else
            {
              v212 = 1;
            }
            v707 = (void *)v212;
            memcpy((void *)v212, v210, _R12);
          }
          else
          {
            _R12 = 0x8000000000000000LL;
          }
          *(_QWORD *)&v637[4] = _R12;
          *((_QWORD *)&v637[4] + 1) = v707;
          *(_QWORD *)&v637[5] = _R12;
        }
        if ( v712.i64[0] )
        {
          if ( *((_QWORD *)&v637[5] + 1) != 0x8000000000000000LL )
            goto LABEL_333;
LABEL_325:
          v220 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
                   &v687,
                   "/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/thread_spawn/depth/payload/agent_nickname/payload/agent_role",
                   54);
          if ( v220 && *(_BYTE *)v220 == 3 )
          {
            _R12 = *(_QWORD *)(v220 + 24);
            if ( _R12 < 0 )
            {
              v524 = 0;
              v525 = v681;
              goto LABEL_838;
            }
            v221 = *(const void **)(v220 + 16);
            if ( _R12 )
            {
              v713 = *(_QWORD *)(v220 + 16);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v687, v221);
              v222 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(_R12, 1);
              if ( !v222 )
                goto LABEL_1021;
              v223 = v222;
              v221 = (const void *)v713;
            }
            else
            {
              v223 = 1;
            }
            v681 = (void *)v223;
            memcpy((void *)v223, v221, _R12);
          }
          else
          {
            _R12 = 0x8000000000000000LL;
          }
          *((_QWORD *)&v637[5] + 1) = _R12;
          *(_QWORD *)&v637[6] = v681;
          *((_QWORD *)&v637[6] + 1) = _R12;
        }
        else
        {
          v215 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
                   &v687,
                   "/payload/timestamp/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/thread_spawn/depth/payload/agent_nickname/payload/agent_role",
                   18);
          if ( v215
            && *(_BYTE *)v215 == 3
            && (chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
                  v695,
                  *(_QWORD *)(v215 + 16),
                  *(_QWORD *)(v215 + 24)),
                *(_DWORD *)v695) )
          {
            v216 = (*(int *)v695 >> 13) - 1;
            v217 = 0;
            if ( *(int *)v695 >> 13 <= 0 )
            {
              v218 = (1 - (*(int *)v695 >> 13)) / 0x190u + 1;
              v216 += 400 * v218;
              v217 = -146097 * v218;
            }
            *(double *)si128.i64 = (double)(*(_DWORD *)&v695[4]
                                          + 86400
                                          * (((v216 / 100) >> 2)
                                           + ((1461 * v216) >> 2)
                                           + v217
                                           + ((*(_DWORD *)v695 >> 4) & 0x1FF)
                                           - v216 / 100
                                           - 719163));
            v219 = 1;
          }
          else
          {
            v219 = 0;
          }
          v712.i64[0] = v219;
          *(_QWORD *)&v637[0] = v219;
          *((_QWORD *)&v637[0] + 1) = si128.i64[0];
          if ( *((_QWORD *)&v637[5] + 1) == 0x8000000000000000LL )
            goto LABEL_325;
        }
LABEL_333:
        v224 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
                 &v687,
                 "/payload/source/subagent/thread_spawn/depth/payload/agent_nickname/payload/agent_role",
                 43);
        if ( v224 )
        {
          if ( *(_BYTE *)v224 == 2 )
          {
            v225 = *(_QWORD *)(v224 + 8);
            if ( v225 != 2 )
            {
              if ( (_DWORD)v225 == 1 )
              {
                v226 = *(_QWORD *)(v224 + 16);
LABEL_340:
                LODWORD(v637[10]) = v226;
                if ( *(_QWORD *)&v637[7] == 0x8000000000000000LL )
                {
                  v227 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
                           &v687,
                           "/payload/agent_nickname/payload/agent_role",
                           23);
                  if ( v227 && *(_BYTE *)v227 == 3 )
                  {
                    _R12 = *(_QWORD *)(v227 + 24);
                    if ( _R12 < 0 )
                    {
                      v524 = 0;
                      v525 = (void *)v646.i64[0];
                      goto LABEL_838;
                    }
                    v228 = *(const void **)(v227 + 16);
                    if ( _R12 )
                    {
                      v713 = *(_QWORD *)(v227 + 16);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v687, v228);
                      v229 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(_R12, 1);
                      if ( !v229 )
                        goto LABEL_1021;
                      v230 = v229;
                      v228 = (const void *)v713;
                    }
                    else
                    {
                      v230 = 1;
                    }
                    v646.i64[0] = v230;
                    memcpy((void *)v230, v228, _R12);
                  }
                  else
                  {
                    _R12 = 0x8000000000000000LL;
                  }
                  *(_QWORD *)&v637[7] = _R12;
                  *((_QWORD *)&v637[7] + 1) = v646.i64[0];
                  *(_QWORD *)&v637[8] = _R12;
                }
                if ( *((_QWORD *)&v637[8] + 1) == 0x8000000000000000LL )
                {
                  v231 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v687, "/payload/agent_role", 19);
                  if ( v231 && *(_BYTE *)v231 == 3 )
                  {
                    _R12 = *(_QWORD *)(v231 + 24);
                    if ( _R12 < 0 )
                    {
                      v524 = 0;
                      v525 = v666[0];
                      goto LABEL_838;
                    }
                    v232 = *(const void **)(v231 + 16);
                    if ( _R12 )
                    {
                      v713 = *(_QWORD *)(v231 + 16);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v687, v232);
                      v233 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(_R12, 1);
                      if ( !v233 )
                      {
LABEL_1021:
                        v525 = (void *)_R12;
                        v524 = 1;
LABEL_838:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v524, v525);
                      }
                      v234 = v233;
                      v232 = (const void *)v713;
                    }
                    else
                    {
                      v234 = 1;
                    }
                    v666[0] = (void *)v234;
                    memcpy((void *)v234, v232, _R12);
                  }
                  else
                  {
                    _R12 = 0x8000000000000000LL;
                  }
                  *((_QWORD *)&v637[8] + 1) = _R12;
                  *(void **)&v637[9] = v666[0];
                  *((_QWORD *)&v637[9] + 1) = _R12;
                }
LABEL_298:
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v687);
LABEL_299:
                if ( v203 )
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, v203, 1);
                goto LABEL_280;
              }
              v226 = *(_QWORD *)(v224 + 16);
              if ( v226 >= 0 )
                goto LABEL_340;
            }
          }
        }
        LODWORD(v226) = v637[10];
        goto LABEL_340;
      }
      if ( *(_QWORD *)v207 ^ 0x65736E6F70736572LL | *(_QWORD *)(v207 + 5) ^ 0x6D6574695F65736ELL )
        goto LABEL_298;
      v706 = *(_QWORD *)&v637[1];
      v713 = *((_QWORD *)&v637[2] + 1);
      if ( *(_QWORD *)&v637[1] != 0x8000000000000000LL && *((_QWORD *)&v637[2] + 1) != 0x8000000000000000LL )
        goto LABEL_298;
      _R12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "payloadbase_instructions",
               7,
               &v687);
      if ( !_R12 )
        _R12 = (__int64)&unk_1015FEEE0;
      v213 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "typefullargsopenwithkindsavetrueuuidemitshowhide",
               4,
               _R12);
      if ( !v213
        || *(_BYTE *)v213 != 3
        || *(_QWORD *)(v213 + 24) != 7
        || **(_DWORD **)(v213 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v213 + 16) + 3LL) ^ 0x65676173 )
      {
        goto LABEL_298;
      }
      v214 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "contentgit-C--porcelain",
                        7,
                        _R12);
      if ( v214 && *v214 == 4 )
      {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v667, v214 + 8);
        __s2[0] = v668;
        v661.i64[0] = 0;
        v661.i64[1] = 8;
        *(_QWORD *)&v662 = 0;
        if ( v669 )
        {
          _R12 = 0;
          v717 = 32 * v669;
          do
          {
            v238 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                     4,
                     (char *)__s2[0] + _R12);
            if ( v238 && *(_BYTE *)v238 == 3 )
            {
              __src[0] = *(void **)(v238 + 16);
              v714[0] = *(_QWORD *)(v238 + 24);
              alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v679, v714[0], 0, 1, 1);
              v709 = *((_QWORD *)&v679[0] + 1);
              if ( LODWORD(v679[0]) == 1 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v709, *(_QWORD *)&v679[1]);
              v684.i64[0] = *(_QWORD *)&v679[1];
              memcpy(*(void **)&v679[1], __src[0], v714[0]);
              __src[0] = (void *)v662;
              if ( (_QWORD)v662 == v661.i64[0] )
                *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v661);
              v235 = v661.i64[1];
              v236 = (char *)__src[0];
              v237 = 3 * (__int64)__src[0];
              *(_QWORD *)(v661.i64[1] + 8 * v237) = v709;
              *(_QWORD *)(v235 + 8 * v237 + 8) = v684.i64[0];
              *(_QWORD *)(v235 + 8 * v237 + 16) = v714[0];
              *(_QWORD *)&v662 = v236 + 1;
            }
            _R12 += 32;
          }
          while ( v717 != _R12 );
          v239 = v661.i64[1];
          v241 = v661.i64[0];
          v240 = v662;
LABEL_375:
          *(_QWORD *)v695 = v239;
          *(_QWORD *)&v695[16] = v241;
          *(_QWORD *)&v695[8] = v239;
          *(_QWORD *)&v695[24] = v239 + 24 * v240;
          v717 = 0x8000000000000000LL;
          if ( v240 )
          {
            *(_QWORD *)&v695[8] = v239 + 24;
            v717 = *(_QWORD *)v239;
            v698 = *(_QWORD *)(v239 + 8);
            v686.i64[0] = *(_QWORD *)(v239 + 16);
          }
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b3f1b4c8214e60(&v667);
          if ( v667 )
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2[0], 32 * v667, 8);
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9b2ebb73e163c75e(v695);
          if ( v717 == 0x8000000000000000LL )
            goto LABEL_298;
          v242 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v687, "/payload/role", 13);
          v709 = 1;
          if ( v242 && *(_BYTE *)v242 == 3 )
          {
            v709 = *(_QWORD *)(v242 + 16);
            LOBYTE(v242) = *(_QWORD *)(v242 + 24) == 4;
            v684.i32[0] = v242;
          }
          else
          {
            v684.i32[0] = 0;
          }
          __s2[0] = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v698, v686.i64[0]);
          if ( !v243 )
            goto LABEL_420;
          _R12 = v243;
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v679, v243, 0, 1, 1);
          __src[0] = *((void **)&v679[0] + 1);
          if ( LODWORD(v679[0]) == 1 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__src[0], *(_QWORD *)&v679[1]);
          v714[0] = *(_QWORD *)&v679[1];
          memcpy(*(void **)&v679[1], __s2[0], _R12);
          if ( (unsigned __int64)_R12 < 8 )
          {
            v244 = 0;
            v245 = v714[0];
            goto LABEL_400;
          }
          if ( (unsigned __int64)_R12 < 0x20 )
          {
            v244 = 0;
            v245 = v714[0];
LABEL_396:
            v254 = v244;
            v244 = _R12 & 0xFFFFFFFFFFFFFFF8LL;
            v255 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
            v256 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
            v257 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
            do
            {
              v258 = _mm_loadl_epi64((const __m128i *)(v245 + v254));
              v259 = _mm_add_epi8(v258, v255);
              *(_QWORD *)(v245 + v254) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v259, v256), v259), v257),
                                           v258).u64[0];
              v254 += 8LL;
            }
            while ( v244 != v254 );
            goto LABEL_401;
          }
          v244 = _R12 & 0xFFFFFFFFFFFFFFE0LL;
          v246 = 0;
          v247 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
          v248 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
          v249 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
          v245 = v714[0];
          do
          {
            v250 = _mm_loadu_si128((const __m128i *)(v245 + v246));
            v251 = _mm_loadu_si128((const __m128i *)(v245 + v246 + 16));
            v252 = _mm_add_epi8(v250, v247);
            v253 = _mm_add_epi8(v251, v247);
            *(__m128i *)(v245 + v246) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v252, v248), v252), v249),
                                          v250);
            *(__m128i *)(v245 + v246 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v253, v248), v253), v249),
                                               v251);
            v246 += 32;
          }
          while ( v244 != v246 );
          if ( _R12 != v244 )
          {
            if ( (_R12 & 0x18) != 0 )
              goto LABEL_396;
            do
            {
LABEL_400:
              *(_BYTE *)(v245 + v244) |= 32 * ((unsigned __int8)(*(_BYTE *)(v245 + v244) - 65) < 0x1Au);
              ++v244;
LABEL_401:
              ;
            }
            while ( _R12 != v244 );
          }
          if ( (unsigned __int64)_R12 >= 0x18 )
          {
            v260 = _mm_or_si128(
                     _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(v245 + 16)), (__m128i)xmmword_1015FBDC0),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v245), (__m128i)xmmword_1015FBDD0));
            if ( _mm_testz_si128(v260, v260) )
              goto LABEL_419;
          }
          else if ( (unsigned __int64)_R12 < 0xE )
          {
            if ( _R12 != 13 )
            {
              if ( (unsigned __int64)_R12 < 0xB )
              {
LABEL_418:
                v264 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                         "role & communication directivesfilesystem sandboxing defines",
                         0x1Fu,
                         (void *)v245);
                v245 = v714[0];
                if ( v264 )
                  goto LABEL_419;
                v700.i8[0] = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               "filesystem sandboxing defines",
                               0x1Du,
                               (void *)v714[0]);
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v714[0], __src[0], 1);
                if ( !v700.i8[0] )
                {
                  *(_QWORD *)v695 = 0;
                  *(_QWORD *)&v695[8] = _R12;
                  *(void **)&v695[16] = __s2[0];
                  *(_QWORD *)&v695[24] = _R12;
                  *(void **)&v695[32] = __s2[0];
                  *(_QWORD *)&v695[40] = (char *)__s2[0] + _R12;
                  *(_QWORD *)&v695[48] = 0;
                  *(_WORD *)&v695[56] = 1;
                  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h31ab29ecbdaf6895(
                    &v661,
                    v695,
                    *(double *)si128.i64);
                  _R12 = v661.i64[1];
                  alloc::str::join_generic_copy::ha9d2732844b8793d(v679, v661.i64[1], v662, &unk_1015FEE56, 1);
                  __src[0] = *((void **)&v679[0] + 1);
                  v700.i64[0] = *(_QWORD *)&v679[0];
                  v714[0] = *(_QWORD *)&v679[1];
                  if ( v661.i64[0] )
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_R12, 16 * v661.i64[0], 8);
                  __s2[0] = (void *)0x8000000000000000LL;
                  if ( v714[0] )
                  {
                    if ( v714[0] >= 0x20 )
                      v265 = core::str::count::do_count_chars::h4875767a8f682eeb(__src[0], v714[0]);
                    else
                      v265 = core::str::count::char_count_general_case::h35f326d7c82e4f55(__src[0], v714[0]);
                    if ( v265 >= 0xFA1 )
                    {
                      codexmate_lib::core::sessions::truncate_chars::h3765a461484b5383(
                        v679,
                        __src[0],
                        v714[0],
                        4000,
                        *(double *)si128.i64);
                      v704 = *((char **)&v679[0] + 1);
                      __s2[0] = *(void **)&v679[0];
                      v699 = *(_QWORD *)&v679[1];
                      goto LABEL_431;
                    }
                    v704 = (char *)__src[0];
                    v699 = v714[0];
                    __s2[0] = (void *)v700.i64[0];
                  }
                  else
                  {
LABEL_431:
                    if ( v700.i64[0] )
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v700.i64[0], 1);
                  }
                  if ( __s2[0] != (void *)0x8000000000000000LL )
                  {
                    if ( v684.i8[0] && v706 == 0x8000000000000000LL && *(_DWORD *)v709 == 1919251317 )
                    {
                      codexmate_lib::core::sessions::truncate_chars::h3765a461484b5383(
                        v695,
                        v704,
                        v699,
                        88,
                        *(double *)si128.i64);
                      *(_QWORD *)&v637[2] = *(_QWORD *)&v695[16];
                      v637[1] = *(_OWORD *)v695;
                    }
                    if ( v713 == 0x8000000000000000LL )
                    {
                      codexmate_lib::core::sessions::truncate_chars::h3765a461484b5383(
                        v695,
                        v704,
                        v699,
                        160,
                        *(double *)si128.i64);
                      *((_QWORD *)&v637[3] + 1) = *(_QWORD *)&v695[16];
                      *(_OWORD *)((char *)&v637[2] + 8) = *(_OWORD *)v695;
                    }
                    if ( __s2[0] )
                      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v704, __s2[0], 1);
                    if ( !v717 )
                      goto LABEL_298;
LABEL_443:
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v698, v717, 1);
                    goto LABEL_298;
                  }
                }
LABEL_420:
                if ( !v717 )
                  goto LABEL_298;
                goto LABEL_443;
              }
LABEL_417:
              if ( *(_QWORD *)v245 ^ 0x73746E6567612023LL | *(_QWORD *)(v245 + 3) ^ 0x646D2E73746E6567LL )
                goto LABEL_418;
LABEL_419:
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v245, __src[0], 1);
              goto LABEL_420;
            }
LABEL_411:
            if ( *(_QWORD *)v245 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v245 + 5) ^ 0x3E747865746E6F63LL )
              goto LABEL_417;
            goto LABEL_419;
          }
          if ( !(*(_QWORD *)v245 ^ 0x63757274736E693CLL | *(_QWORD *)(v245 + 6) ^ 0x3E736E6F69746375LL) )
            goto LABEL_419;
          if ( (unsigned __int64)_R12 >= 0x1A )
          {
            v261 = _mm_or_si128(
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v245 + 10)), (__m128i)xmmword_1015FBDE0),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v245), (__m128i)xmmword_1015FBDF0));
            if ( _mm_testz_si128(v261, v261) )
              goto LABEL_419;
          }
          else if ( (unsigned __int64)_R12 < 0x15 )
          {
            goto LABEL_411;
          }
          v262 = _mm_or_si128(
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v245 + 5)), (__m128i)xmmword_1015FBE00),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)v245), (__m128i)xmmword_1015FBE10));
          if ( !_mm_testz_si128(v262, v262) )
          {
            if ( *(_QWORD *)v245 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v245 + 5) ^ 0x3E747865746E6F63LL )
            {
              v263 = _mm_or_si128(
                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v245 + 5)), (__m128i)xmmword_1015FBE20),
                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v245), (__m128i)xmmword_1015FBE30));
              if ( !_mm_testz_si128(v263, v263) )
                goto LABEL_417;
            }
          }
          goto LABEL_419;
        }
        v239 = 8;
      }
      else
      {
        v667 = 0;
        v668 = (void *)8;
        v669 = 0;
        v239 = 8;
        __s2[0] = (void *)8;
      }
      v240 = 0;
      v241 = 0;
      goto LABEL_375;
    }
LABEL_266:
    v192 = (char *)v720;
LABEL_267:
    LODWORD(_R14) = (_DWORD)__s1;
LABEL_268:
    _RAX = (unsigned int)_R14 & ((_DWORD)_R14 - 1);
    if ( --v192 )
      continue;
    break;
  }
  _RAX = v693.i64[1];
  v658 = 0;
  v659 = 8;
  v660 = 0;
  v158 = v719;
  if ( !v693.i64[1] )
    goto LABEL_809;
  _RCX = v692;
  jj = v692 + 16;
  _R8 = (unsigned int)~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v692));
  v294 = v680.i64[0];
  ii = v680.i64[0] - 56;
  v647.i64[0] = v680.i64[0] - 56;
  while ( 2 )
  {
    v706 = _RAX;
    if ( !(_WORD)_R8 )
    {
      do
      {
        v296 = _mm_movemask_epi8(_mm_load_si128((const __m128i *)jj));
        _RCX -= 1280LL;
        jj += 16LL;
      }
      while ( v296 == 0xFFFF );
      _R8 = (unsigned int)~v296;
    }
    v698 = jj;
    v713 = _RCX;
    v709 = _R8;
    __asm { tzcnt   eax, r8d }
    __s1 = (void *)(-80 * _RAX);
    if ( v674.i64[1] )
    {
      v297 = *(_QWORD *)((char *)__s1 + v713 - 64);
      v720 = *(void **)((char *)__s1 + v713 - 72);
      v298 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v675, v720, v297);
      _RCX = v298 >> 57;
      jj = v673.u64[1];
      v299 = v673.i64[0];
      v300 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v298 >> 57), (__m128i)0LL);
      v301 = v673.i64[0] - 192;
      for ( ii = 0; ; ii += 16 )
      {
        v302 = jj & v298;
        v303 = _mm_loadu_si128((const __m128i *)(v299 + v302));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v303, v300));
        if ( _EBX )
          break;
LABEL_480:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v303, (__m128i)-1LL));
        v294 = v680.i64[0];
        if ( (_DWORD)_RCX )
          goto LABEL_482;
        v298 = v302 + ii + 16;
      }
      v712.i64[0] = v302;
      __n = jj;
      *(__m128i *)__s2 = v300;
      v717 = ii;
      *(__m128i *)v714 = v303;
      while ( 1 )
      {
        __asm { tzcnt   ecx, ebx }
        _RCX = -(__int64)(jj & (v302 + _RCX));
        v305 = 192 * _RCX;
        if ( v297 == *(_QWORD *)(v301 + 192 * _RCX + 16) && !memcmp(v720, *(const void **)(v301 + v305 + 8), v297) )
          break;
        v306 = _EBX - 1;
        LOWORD(v306) = _EBX & (_EBX - 1);
        v27 = (_WORD)v306 == 0;
        _EBX = v306;
        v302 = v712.i64[0];
        v158 = v719;
        jj = __n;
        v300 = _mm_load_si128((const __m128i *)__s2);
        ii = v717;
        v303 = _mm_load_si128((const __m128i *)v714);
        if ( v27 )
          goto LABEL_480;
      }
      if ( *(_QWORD *)(v299 + v305 - 152) == 0x8000000000000000LL )
        *(_QWORD *)v695 = 0x8000000000000000LL;
      else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, v299 + v305 - 152);
      v307 = (char *)__s1;
      v308 = v305 + v299;
      v309 = (void *)0x8000000000000000LL;
      v158 = v719;
      if ( *(_QWORD *)(v308 - 128) != 0x8000000000000000LL )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v637, v308 - 128);
        v642 = *((_QWORD *)&v637[0] + 1);
        v309 = *(void **)&v637[0];
        v604 = *(_QWORD *)&v637[1];
      }
      __src[0] = *(void **)(v308 - 168);
      v648 = *(_QWORD *)(v308 - 160);
      v310 = 0x8000000000000000LL;
      v27 = *(_QWORD *)(v308 - 104) == 0x8000000000000000LL;
      v720 = v309;
      if ( !v27 )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v637, v308 - 104);
        v678 = *((_QWORD *)&v637[0] + 1);
        v310 = *(_QWORD *)&v637[0];
        v683 = *(_QWORD *)&v637[1];
      }
      v311 = 0x8000000000000000LL;
      v27 = *(_QWORD *)(v308 - 80) == 0x8000000000000000LL;
      v712.i64[0] = v310;
      if ( !v27 )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v637, v308 - 80);
        v619 = *((_QWORD *)&v637[0] + 1);
        v311 = *(_QWORD *)&v637[0];
        v605 = *(_QWORD *)&v637[1];
      }
      v684.i64[0] = *(unsigned int *)(v308 - 8);
      v312 = 0x8000000000000000LL;
      if ( *(_QWORD *)(v308 - 56) != 0x8000000000000000LL )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v637, v308 - 56);
        v620 = *((_QWORD *)&v637[0] + 1);
        v312 = *(_QWORD *)&v637[0];
        v606 = *(_QWORD *)&v637[1];
      }
      v313 = 0x8000000000000000LL;
      if ( *(_QWORD *)(v308 - 32) != 0x8000000000000000LL )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v637, v308 - 32);
        v313 = *(_QWORD *)&v637[0];
        v679[0] = *(_OWORD *)((char *)v637 + 8);
      }
      *(_QWORD *)&v636[2] = *(_QWORD *)&v695[16];
      v636[1] = *(_OWORD *)v695;
      *((_QWORD *)&v636[2] + 1) = v720;
      *(_QWORD *)&v636[3] = v642;
      *((_QWORD *)&v636[3] + 1) = v604;
      ii = v712.i64[0];
      *(_QWORD *)&v636[4] = v712.i64[0];
      *((_QWORD *)&v636[4] + 1) = v678;
      *(_QWORD *)&v636[5] = v683;
      *((_QWORD *)&v636[5] + 1) = v311;
      *(_QWORD *)&v636[6] = v619;
      *((_QWORD *)&v636[6] + 1) = v605;
      *(_QWORD *)&v636[7] = v312;
      *((_QWORD *)&v636[7] + 1) = v620;
      *(_QWORD *)&v636[8] = v606;
      v636[9] = v679[0];
      _RCX = 0x8000000000000000LL;
      LOBYTE(__s2[0]) = v712.i64[0] == 0x8000000000000000LL;
      LOBYTE(v681) = v720 == (void *)0x8000000000000000LL;
      jj = (size_t)__src[0];
      *(void **)&v636[0] = __src[0];
      *((_QWORD *)&v636[0] + 1) = v648;
      *((_QWORD *)&v636[8] + 1) = v313;
      LOBYTE(v717) = v312 == 0x8000000000000000LL;
      LOBYTE(v714[0]) = v313 == 0x8000000000000000LL;
      LODWORD(v636[10]) = v684.i32[0];
      v646.i8[0] = v311 == 0x8000000000000000LL;
      v294 = v680.i64[0];
    }
    else
    {
LABEL_482:
      *(_QWORD *)&v636[1] = 0x8000000000000000LL;
      *((_QWORD *)&v636[2] + 1) = 0x8000000000000000LL;
      *(_QWORD *)&v636[0] = 0;
      *(_QWORD *)&v636[4] = 0x8000000000000000LL;
      *((_QWORD *)&v636[5] + 1) = 0x8000000000000000LL;
      LODWORD(v636[10]) = 0;
      *(_QWORD *)&v636[7] = 0x8000000000000000LL;
      *((_QWORD *)&v636[8] + 1) = 0x8000000000000000LL;
      v684.i64[0] = 0;
      LOBYTE(v717) = 1;
      v646.i8[0] = 1;
      LOBYTE(__s2[0]) = 1;
      LOBYTE(v681) = 1;
      LOBYTE(v714[0]) = 1;
      __src[0] = nullptr;
      v307 = (char *)__s1;
    }
    v314 = &v307[v713];
    v315 = *((_QWORD *)v314 - 9);
    v316 = *((_QWORD *)v314 - 8);
    __s1 = v314;
    __n = v315;
    if ( !*((_QWORD *)&v617 + 1) )
    {
      v720 = nullptr;
      if ( (_QWORD)v624 )
        goto LABEL_514;
LABEL_508:
      v712.i64[0] = 0;
      v329 = v691;
      if ( v720 )
        goto LABEL_527;
      goto LABEL_509;
    }
    v317 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v618, v315, v316);
    _RCX = v317 >> 57;
    v315 = *((_QWORD *)&v616 + 1);
    v318 = v616;
    v319 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v317 >> 57), (__m128i)0LL);
    jj = v616 - 232;
    for ( ii = 0; ; ii += 16 )
    {
      v320 = (char *)(v315 & v317);
      v321 = _mm_loadu_si128((const __m128i *)&v320[v318]);
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v321, v319));
      if ( _EBX )
        break;
LABEL_504:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v321, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
      {
        v328 = 0;
        v294 = v680.i64[0];
        goto LABEL_511;
      }
      v317 = (unsigned __int64)&v320[ii + 16];
    }
    v720 = v320;
    v712 = v319;
    v707 = (void *)v315;
    v666[0] = (void *)ii;
    v686 = v321;
    while ( 1 )
    {
      __asm { tzcnt   ecx, ebx }
      _RCX = -(__int64)(v315 & (unsigned __int64)&v320[_RCX]);
      v323 = 232 * _RCX;
      v324 = v316;
      if ( v316 == *(_QWORD *)(jj + 232 * _RCX + 16) )
      {
        v315 = *(_QWORD *)(jj + v323 + 8);
        ii = __n;
        v325 = jj;
        v326 = memcmp((const void *)__n, (const void *)v315, v324);
        jj = v325;
        if ( !v326 )
          break;
      }
      v327 = _EBX - 1;
      LOWORD(v327) = _EBX & (_EBX - 1);
      v27 = (_WORD)v327 == 0;
      _EBX = v327;
      v320 = (char *)v720;
      v158 = v719;
      v319 = _mm_load_si128(&v712);
      v316 = v324;
      v315 = (size_t)v707;
      ii = (__int64)v666[0];
      v321 = _mm_load_si128(&v686);
      if ( v27 )
        goto LABEL_504;
    }
    v328 = v323 + v318;
    v158 = v719;
    v294 = v680.i64[0];
    v316 = v324;
LABEL_511:
    v331 = (void *)(v328 - 208);
    if ( !v328 )
      v331 = nullptr;
    v314 = (char *)__s1;
    v720 = v331;
    if ( !(_QWORD)v624 )
      goto LABEL_508;
LABEL_514:
    ii = (__int64)&v624 + 8;
    v315 = __n;
    v332 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345((char *)&v624 + 8, __n, v316);
    _RCX = v332 >> 57;
    v333 = *(_QWORD *)&v623[8];
    v334 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v332 >> 57), (__m128i)0LL);
    for ( jj = 0; ; jj += 16LL )
    {
      v335 = v333 & v332;
      v336 = _mm_loadu_si128((const __m128i *)(v294 + v335));
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v336, v334));
      if ( _EBX )
        break;
LABEL_520:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v336, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
      {
        v341 = 0;
        goto LABEL_524;
      }
      v332 = v335 + jj + 16;
      v294 = v680.i64[0];
    }
    v712 = v334;
    v707 = (void *)jj;
    *(__m128i *)v666 = v336;
    while ( 1 )
    {
      __asm { tzcnt   ecx, ebx }
      v338 = v335;
      _RCX = -(__int64)(v333 & (v335 + _RCX));
      v339 = 56 * _RCX;
      if ( v316 == *(_QWORD *)(v647.i64[0] + 56 * _RCX + 16) )
      {
        v315 = *(_QWORD *)(v339 + v647.i64[0] + 8);
        ii = __n;
        if ( !memcmp((const void *)__n, (const void *)v315, v316) )
          break;
      }
      v340 = _EBX - 1;
      LOWORD(v340) = _EBX & (_EBX - 1);
      v27 = (_WORD)v340 == 0;
      _EBX = v340;
      v335 = v338;
      v158 = v719;
      v334 = _mm_load_si128(&v712);
      jj = (size_t)v707;
      v336 = _mm_load_si128((const __m128i *)v666);
      if ( v27 )
        goto LABEL_520;
    }
    v341 = v680.i64[0] + v339;
    v158 = v719;
LABEL_524:
    v342 = v341 - 32;
    if ( !v341 )
      v342 = 0;
    v712.i64[0] = v342;
    v329 = v691;
    v314 = (char *)__s1;
    if ( !v720 )
    {
LABEL_509:
      v686.i64[0] = (__int64)(v314 - 8);
      v700.i32[0] = 0;
      v330 = v712.i64[0];
      goto LABEL_554;
    }
LABEL_527:
    if ( *((_BYTE *)v329 + 16) == 1 )
    {
      v343 = *v329;
    }
    else
    {
      *(_QWORD *)&v343 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(ii, v315, jj, _RCX);
      *v329 = v343;
      *((_BYTE *)v329 + 16) = 1;
    }
    v344 = v720;
    *(_QWORD *)v329 = v343 + 1;
    v637[1] = 0u;
    *((_QWORD *)&v637[0] + 1) = 0;
    *(_QWORD *)&v637[0] = &xmmword_1015FBEC0;
    v637[2] = v343;
    v315 = v316;
    _RAX = codexmate_lib::core::sessions::is_codex_visible_session::h7d18eca42be782d4(
             __n,
             v316,
             &v616,
             &v673,
             &v632,
             v637);
    v346 = _RAX;
    v347 = *((_QWORD *)&v637[0] + 1);
    if ( *((_QWORD *)&v637[0] + 1) )
    {
      LOBYTE(__n) = _RAX;
      v348 = *((_QWORD *)&v637[1] + 1);
      if ( *((_QWORD *)&v637[1] + 1) )
      {
        v349 = *(_QWORD *)&v637[0];
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v637[0]));
        v351 = (const __m128i *)(*(_QWORD *)&v637[0] + 16LL);
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v352 = _mm_movemask_epi8(_mm_load_si128(v351));
              v349 -= 384;
              ++v351;
            }
            while ( v352 == 0xFFFF );
            _R13D = ~v352;
          }
          __asm { tzcnt   eax, r13d }
          v353 = -3 * _RAX;
          v315 = *(_QWORD *)(v349 + 8 * v353 - 24);
          if ( v315 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v349 + 8 * v353 - 16), v315, 1);
          --v348;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v348 );
      }
      v354 = (24 * v347 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v355 = v354 + v347;
      v27 = v355 == -17;
      v356 = v355 + 17;
      v158 = v719;
      v314 = (char *)__s1;
      v344 = v720;
      v346 = __n;
      if ( !v27 )
      {
        v315 = v356;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v637[0] - v354, v356, 16);
      }
    }
    ii = (__int64)(v314 - 8);
    v27 = *(v314 - 8) == 0;
    v686.i64[0] = (__int64)(v314 - 8);
    if ( v27 )
    {
      v330 = v712.i64[0];
      if ( (v344[204] | v346) == 1
        || *((_QWORD *)v344 + 21) != 0x8000000000000000LL
        || *((_QWORD *)v344 + 5) != 6
        || v158 == 0x8000000000000000LL
        || (v315 = (size_t)v720,
            **((_DWORD **)v720 + 4) ^ 0x6F637376 | *(unsigned __int16 *)(*((_QWORD *)v720 + 4) + 4LL) ^ 0x6564) )
      {
        v700.i32[0] = 0;
      }
      else
      {
        if ( *((_QWORD *)v720 + 9) == 0x8000000000000000LL )
        {
          v315 = v683;
          if ( LOBYTE(__s2[0]) )
            v315 = 0;
          ii = v678;
          if ( LOBYTE(__s2[0]) )
            ii = 1;
        }
        else
        {
          v315 = v683;
          ii = v678;
          if ( LOBYTE(__s2[0]) )
          {
            ii = *((_QWORD *)v720 + 10);
            v315 = *((_QWORD *)v720 + 11);
          }
        }
        v700.i32[0] = std::path::Path::_starts_with::hb7d30f62bcd7f24f(ii, v315, *((_QWORD *)&v655 + 1), v641);
        v330 = v712.i64[0];
      }
    }
    else
    {
      v700.i32[0] = 0;
      v330 = v712.i64[0];
    }
LABEL_554:
    v666[0] = *((void **)v314 - 9);
    __n = *((_QWORD *)v314 - 8);
    if ( v330 )
    {
      ii = *(_QWORD *)(v712.i64[0] + 8);
      v315 = *(_QWORD *)(v712.i64[0] + 16);
      v357 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(ii, v315);
      v359 = v358;
      if ( v357 != nullptr && v358 != 0 )
      {
        if ( v358 < 0 )
        {
          v362 = 0;
          v359 = v610;
LABEL_829:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v362, v359);
        }
        v707 = v357;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(ii, v315);
        v362 = 1;
        v363 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v359, 1);
        if ( !v363 )
          goto LABEL_829;
        v364 = (size_t)v363;
        ii = (__int64)v363;
        v315 = (size_t)v707;
        memcpy(v363, v707, v359);
        v610 = v364;
        goto LABEL_568;
      }
    }
    if ( v720 )
    {
      ii = *((_QWORD *)v720 + 1);
      v315 = *((_QWORD *)v720 + 2);
      v360 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(ii, v315);
      v359 = v361;
      if ( v360 != nullptr && v361 != 0 )
      {
        if ( v361 < 0 )
        {
          v365 = 0;
        }
        else
        {
          v707 = v360;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(ii, v315);
          v365 = 1;
          v366 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v359, 1);
          if ( v366 )
          {
            v364 = (size_t)v366;
            ii = (__int64)v366;
            v315 = (size_t)v707;
            memcpy(v366, v707, v359);
            v622 = v364;
LABEL_568:
            *(_QWORD *)v695 = v359;
            *(_QWORD *)&v695[8] = v364;
            *(_QWORD *)&v695[16] = v359;
            goto LABEL_569;
          }
          v622 = v359;
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v365, v622);
      }
    }
    if ( *(_QWORD *)&v636[1] == 0x8000000000000000LL
      || (ii = (__int64)v695,
          v315 = (size_t)&v636[1],
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, &v636[1]),
          *(_QWORD *)v695 == 0x8000000000000000LL) )
    {
      if ( !(_BYTE)v681 )
      {
        ii = (__int64)v679;
        v315 = (size_t)&v636[2] + 8;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          v679,
          (char *)&v636[2] + 8);
        goto LABEL_570;
      }
      goto LABEL_571;
    }
LABEL_569:
    *(_QWORD *)&v679[1] = *(_QWORD *)&v695[16];
    v679[0] = *(_OWORD *)v695;
LABEL_570:
    v707 = *(void **)&v679[0];
    if ( *(_QWORD *)&v679[0] != 0x8000000000000000LL )
    {
      v699 = *((_QWORD *)&v679[0] + 1);
      v656 = *(_QWORD *)&v679[1];
      v368 = v712.i64[0];
      v369 = (double *)v720;
      if ( !v720 )
        goto LABEL_577;
      goto LABEL_575;
    }
LABEL_571:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(ii, v315);
    v359 = 16;
    v362 = 1;
    ii = 16;
    v315 = 1;
    v367 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
    if ( !v367 )
      goto LABEL_829;
    v699 = (size_t)v367;
    qmemcpy(v367, "Untitled Session", 16);
    v707 = (void *)16;
    v656 = 16;
    v368 = v712.i64[0];
    v369 = (double *)v720;
    if ( v720 )
    {
LABEL_575:
      v682 = v369[24];
      if ( v682 <= 0.0 )
        goto LABEL_577;
      v370 = 1;
LABEL_579:
      v704 = (char *)v370;
      v371 = *((double *)v314 - 2);
      v677 = v371;
      if ( !(_BYTE)v717 )
        goto LABEL_582;
      goto LABEL_583;
    }
LABEL_577:
    if ( v368 )
    {
      v682 = *(double *)(v368 + 24);
      v370 = v682 > 0.0;
      goto LABEL_579;
    }
    v704 = nullptr;
    v371 = *((double *)v314 - 2);
    v677 = v371;
    if ( (_BYTE)v717 )
    {
LABEL_583:
      if ( v720 && *((_QWORD *)v720 + 15) != 0x8000000000000000LL )
      {
        v315 = (size_t)v720 + 120;
        ii = (__int64)&v653;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          &v653,
          (char *)v720 + 120);
      }
      else
      {
        *(_QWORD *)&v653 = 0x8000000000000000LL;
      }
      goto LABEL_588;
    }
LABEL_582:
    ii = (__int64)v695;
    v315 = (size_t)&v636[7];
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, &v636[7]);
    if ( *(_QWORD *)v695 == 0x8000000000000000LL )
      goto LABEL_583;
    v653 = *(_OWORD *)v695;
    v654 = *(_QWORD *)&v695[16];
LABEL_588:
    if ( LOBYTE(v714[0])
      || (ii = (__int64)v695,
          v315 = (size_t)&v636[8] + 8,
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            v695,
            (char *)&v636[8] + 8),
          *(_QWORD *)v695 == 0x8000000000000000LL) )
    {
      if ( v720 && *((_QWORD *)v720 + 18) != 0x8000000000000000LL )
      {
        v315 = (size_t)v720 + 144;
        ii = (__int64)&v651;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          &v651,
          (char *)v720 + 144);
      }
      else
      {
        *(_QWORD *)&v651 = 0x8000000000000000LL;
      }
    }
    else
    {
      v651 = *(_OWORD *)v695;
      v652 = *(_QWORD *)&v695[16];
    }
    if ( !LOBYTE(__s2[0]) )
    {
      ii = (__int64)v695;
      v315 = (size_t)&v636[4];
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, &v636[4]);
      if ( *(_QWORD *)v695 != 0x8000000000000000LL )
      {
        v373 = *(_QWORD *)&v695[8];
        v374 = *(_QWORD *)&v695[16];
        v671 = *(_OWORD *)v695;
        v672 = *(_QWORD *)&v695[16];
LABEL_604:
        v375 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v373, v374);
        if ( v376 )
        {
          v377 = std::path::Path::is_dir::h7ca012509d3e379e(v375, v376);
          LOBYTE(v377) = v377 ^ 1;
          v712.i32[0] = v377;
        }
        else
        {
          v712.i32[0] = 0;
        }
        ii = v373;
        v315 = v374;
        __s2[0] = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v373, v374);
        v379 = v378;
        if ( !v378 )
          goto LABEL_615;
        std::path::Path::_join::hb1a495d4f06b13b8(
          v695,
          v696,
          v685,
          "worktreesthread_nameupdated_atelectron-saved-workspace-roots",
          9);
        v380 = v379;
        v381 = *(_QWORD *)&v695[8];
        ii = (__int64)__s2[0];
        v717 = v380;
        v382 = std::path::Path::_starts_with::hb7d30f62bcd7f24f(
                 __s2[0],
                 v380,
                 *(_QWORD *)&v695[8],
                 *(_QWORD *)&v695[16]);
        v315 = *(_QWORD *)v695;
        if ( *(_QWORD *)v695 )
        {
          ii = v381;
          v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v381, *(_QWORD *)v695, 1);
        }
        if ( !v382 )
        {
LABEL_615:
          *(_QWORD *)&v679[0] = 0x8000000000000000LL;
          goto LABEL_616;
        }
        std::path::Path::_join::hb1a495d4f06b13b8(&v667, __s2[0], v717, ".gitAuth", 4);
        v383 = v668;
        v384 = v669;
        v385 = v668;
        v386 = v669;
        if ( (unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v668, v669) )
        {
          std::fs::read_to_string::inner::hcce2334f4117b5b3(v695, v383, v384);
          v387 = *(_QWORD *)&v695[8];
          v714[0] = *(_QWORD *)v695;
          if ( *(_QWORD *)v695 == 0x8000000000000000LL )
          {
            v388 = 2;
            v389 = 30;
            v390 = *(_QWORD *)&v695[8];
            v391 = v667;
            if ( !v667 )
              goto LABEL_650;
LABEL_649:
            v714[0] = v384;
            v409 = v388;
            v410 = v389;
            v411 = v390;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v668, v391, 1);
            v390 = v411;
            v389 = v410;
            v388 = v409;
            v384 = v714[0];
            goto LABEL_650;
          }
          *(_QWORD *)v695 = 0;
          *(_QWORD *)&v695[8] = *(_QWORD *)&v695[16];
          v716 = v387;
          *(_QWORD *)&v695[16] = v387;
          *(_QWORD *)&v695[24] = *(_QWORD *)&v695[8];
          *(_OWORD *)&v695[32] = __PAIR128__(*(unsigned __int64 *)&v695[8], 0);
          *(_QWORD *)&v695[48] = 0xA0000000ALL;
          v695[56] = 1;
          *(_WORD *)&v695[64] = 0;
          while ( 1 )
          {
            v422 = *(_QWORD *)&v695[16];
            v423 = (__int64)&v687;
            v424 = (unsigned __int64)&v695[16];
            _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
              &v687,
              &v695[16]);
            if ( (_DWORD)v687 == 1 )
            {
              v425 = *(_QWORD *)v695;
              *(_QWORD *)v695 = v688;
              v424 = v688 - v425;
              v426 = v425 + v422;
            }
            else
            {
              if ( v695[65] )
                goto LABEL_694;
              v695[65] = 1;
              v424 = *(_QWORD *)&v695[8] - *(_QWORD *)v695;
              if ( (v695[64] | (*(_QWORD *)&v695[8] != *(_QWORD *)v695)) != 1 )
                goto LABEL_694;
              v426 = *(_QWORD *)&v695[16] + *(_QWORD *)v695;
            }
            if ( v424 && *(_BYTE *)(v426 + v424 - 1) == 10 )
            {
              if ( v424 == 1 )
              {
                v424 = 0;
              }
              else if ( *(_BYTE *)(v426 + v424 - 2) == 13 )
              {
                v424 -= 2LL;
              }
              else
              {
                --v424;
              }
            }
            if ( !v426 )
              goto LABEL_694;
            v423 = v426;
            v427 = (_DWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v426, v424);
            if ( v428 >= 7 )
            {
              v429 = *v427 ^ 0x64746967;
              v423 = 980576612;
              v424 = v429 | *(_DWORD *)((char *)v427 + 3) ^ 0x3A726964u;
              if ( !(v429 | *(_DWORD *)((char *)v427 + 3) ^ 0x3A726964) )
                break;
            }
            if ( v695[65] )
              goto LABEL_694;
          }
          v423 = (__int64)v427 + 7;
          v424 = v428 - 7;
          v430 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85((char *)v427 + 7, v428 - 7);
          LOBYTE(v424) = v430 == nullptr || v431 == 0;
          if ( (_BYTE)v424 )
          {
LABEL_694:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v423, v424);
            v432 = 30;
            v433 = 1;
            v434 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1);
            if ( !v434 )
              goto LABEL_1011;
            v384 = (size_t)v434;
            *(_QWORD *)((char *)v434 + 22) = 0x7269647469672091LL;
            v434[2] = 0x2091B0E5BABCE7B6LL;
            v434[1] = 0xBBE48796E68892E9LL;
            *v434 = 0x878CE6207469672ELL;
            v388 = 9;
            v389 = 30;
            if ( v714[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v716, v714[0], 1);
            v390 = 30;
            v391 = v667;
            if ( v667 )
              goto LABEL_649;
            goto LABEL_650;
          }
          if ( v431 < 0 )
          {
            v433 = 0;
            v432 = v613;
          }
          else
          {
            v708 = v430;
            v435 = v431;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v423, v424);
            v433 = 1;
            v710 = v435;
            v436 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v435, 1);
            if ( v436 )
            {
              v437 = (size_t)v436;
              v438 = v710;
              memcpy(v436, v708, v710);
              v439 = std::path::Path::is_absolute::hc49e17bd8982fd90(v437, v438);
              v613 = v437;
              if ( v439 )
              {
                v440 = v437;
                v441 = v710;
                v442 = __PAIR128__(v440, v710);
              }
              else
              {
                v443 = (void *)std::path::Path::parent::h4c3ac26770731fbb(v383, v384);
                if ( !v443 )
                {
                  v443 = &unk_1015FEE00;
                  v444 = 1;
                }
                *(_QWORD *)v695 = v710;
                *(_QWORD *)&v695[8] = v437;
                *(_QWORD *)&v695[16] = v710;
                std::path::Path::join::hd8b46286031c5a87(&v687, v443, v444, v695);
                v442 = v687;
                v441 = v688;
              }
              if ( v714[0] )
                v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v716, v714[0], 1);
              v703 = *((void **)&v442 + 1);
              v710 = v442;
              std::path::Path::_join::hb1a495d4f06b13b8(&v661, *((_QWORD *)&v442 + 1), v441, "commondir", 9);
              v657 = v661.i64[1];
              std::fs::read_to_string::inner::hcce2334f4117b5b3(&v687, v661.i64[1], v662);
              v445 = *((_QWORD *)&v687 + 1);
              v708 = (void *)v687;
              if ( (_QWORD)v687 == 0x8000000000000000LL )
              {
                v644 = *((_QWORD *)&v687 + 1);
                v638 = &v644;
                v639 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v695, &unk_1017C1B26, &v638);
                v446 = *(_QWORD **)&v695[8];
                v716 = *(_QWORD *)v695;
                v714[0] = *(_QWORD *)&v695[16];
                if ( (v644 & 3) == 1 )
                {
                  v447 = v644 - 1;
                  v448 = *(_QWORD *)(v644 - 1);
                  v449 = *(_QWORD *)(v644 + 7);
                  if ( *(_QWORD *)v449 )
                    (*(void (__fastcall **)(__int64, double))v449)(v448, v371);
                  v450 = *(_QWORD *)(v449 + 8);
                  if ( v450 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v448, v450, *(_QWORD *)(v449 + 16));
                  v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v447, 24, 8);
                }
                v388 = 10;
                v451 = 0;
              }
              else
              {
                v452 = v688;
                v650 = *((_QWORD *)&v687 + 1);
                v453 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*((_QWORD *)&v687 + 1), v688);
                v714[0] = v454;
                if ( v454 )
                {
                  v455 = (const void *)v453;
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v714[0], 0, 1, 1);
                  v456 = *(_QWORD *)&v695[8];
                  if ( v695[0] )
                  {
                    v460 = *(_QWORD *)&v695[16];
LABEL_1023:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v456, v460);
                  }
                  v457 = *(_QWORD **)&v695[16];
                  v458 = v455;
                  v459 = v714[0];
                  memcpy(*(void **)&v695[16], v458, v714[0]);
                  v446 = v457;
                  if ( (unsigned __int8)std::path::Path::is_absolute::hc49e17bd8982fd90(v457, v459) )
                  {
                    *(_QWORD *)&v687 = v456;
                  }
                  else
                  {
                    *(_QWORD *)v695 = v456;
                    *(_QWORD *)&v695[8] = v457;
                    *(_QWORD *)&v695[16] = v714[0];
                    std::path::Path::join::hd8b46286031c5a87(&v687, v703, v441, v695);
                    v446 = *((_QWORD **)&v687 + 1);
                    v714[0] = v688;
                  }
                  std::sys::fs::canonicalize::h06efd38dcb2724a4(v695, v446, v714[0]);
                  v716 = v687;
                  v462 = *(_QWORD *)v695;
                  if ( *(_QWORD *)v695 == 0x8000000000000000LL )
                  {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4(
                      0x8000000000000000LL,
                      *(_QWORD *)&v695[8]);
                  }
                  else
                  {
                    v463 = *(_QWORD **)&v695[8];
                    v714[0] = *(_QWORD *)&v695[16];
                    if ( v716 )
                      v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v446, v716, 1);
                    v716 = v462;
                    v446 = v463;
                  }
                  v388 = 11;
                  v451 = 1;
                  if ( v708 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v650, v708, 1);
                }
                else
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v445, v452);
                  v460 = 16;
                  v456 = 1;
                  v461 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
                  if ( !v461 )
                    goto LABEL_1023;
                  v446 = v461;
                  v461[1] = 0xBAA9E7BAB8E42072LL;
                  *v461 = 0x69646E6F6D6D6F63LL;
                  v388 = 9;
                  v714[0] = 16;
                  if ( v708 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v650, v708, 1);
                  v451 = 0;
                  v716 = 16;
                }
              }
              if ( v661.i64[0] )
                v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v657, v661.i64[0], 1);
              if ( v451 )
              {
                v464 = v714[0];
                v465 = std::path::Path::parent::h4c3ac26770731fbb(v446, v714[0]);
                v467 = v465;
                if ( v465 )
                {
                  v468 = v466;
                  std::sys::fs::canonicalize::h06efd38dcb2724a4(v695, v465, v466);
                  if ( *(_QWORD *)v695 == 0x8000000000000000LL )
                  {
                    v469 = *(_QWORD *)&v695[8];
                    std::path::Path::to_path_buf::h73855ce4b54f7174(&v687, v467, v468);
                    if ( (v469 & 3) == 1 )
                    {
                      v470 = v469 - 1;
                      v471 = *(_QWORD *)(v469 - 1);
                      v472 = *(_QWORD *)(v469 + 7);
                      if ( *(_QWORD *)v472 )
                        (*(void (__fastcall **)(__int64, double))v472)(v471, v371);
                      v473 = *(_QWORD *)(v472 + 8);
                      if ( v473 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v471, v473, *(_QWORD *)(v472 + 16));
                      v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v470, 24, 8);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v688 = *(_QWORD *)&v695[16];
                    v687 = *(_OWORD *)v695;
                  }
                  v714[0] = *((_QWORD *)&v687 + 1);
                  v708 = (void *)v687;
                  v475 = v688;
                  if ( v716 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v446, v716, 1);
                  if ( v710 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v703, v710, 1);
                  if ( v667 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v668, v667, 1);
                  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v687, v714[0], v475);
                  v476 = *((const void **)&v687 + 1);
                  v477 = v688;
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v688, 0, 1, 1);
                  v716 = *(_QWORD *)&v695[8];
                  if ( v695[0] )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v716, *(_QWORD *)&v695[16]);
                  v478 = *(const void **)&v695[16];
                  memcpy(*(void **)&v695[16], v476, v477);
                  if ( 2LL * (_QWORD)v687 )
                    v371 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v476, v687, 1);
                  if ( v477 == v717 && !memcmp(v478, __s2[0], v717) )
                  {
                    *(_QWORD *)&v679[0] = 0x8000000000000000LL;
                    ii = (__int64)v478;
                    v315 = v716;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v478, v716, 1);
                    if ( !v708 )
                      goto LABEL_804;
                    goto LABEL_803;
                  }
                  if ( (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e((void *)v714[0], v475) )
                  {
                    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(v695, "git-C--porcelain", 3);
                    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v695, "-C--porcelain", 2);
                    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v695, __s2[0], v717);
                    v667 = (size_t)"status";
                    v668 = (void *)6;
                    v669 = (size_t)"--porcelain";
                    v670 = 11;
                    std::process::Command::args::ha58aff0f41d174cb(v695, &v667, v371);
                    std::process::Command::output::h737eedd4de2ee22e(&v687, v695);
                    v479 = *((_QWORD *)&v687 + 1);
                    if ( (_QWORD)v687 == 0x8000000000000000LL )
                    {
                      v644 = *((_QWORD *)&v687 + 1);
                      v638 = &v644;
                      v639 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v667, &unk_1017C1A80, &v638);
                      v710 = v667;
                      v480 = v668;
                      v481 = v669;
                      if ( (v644 & 3) == 1 )
                      {
                        v657 = v644 - 1;
                        v703 = *(void **)(v644 - 1);
                        v482 = *(_QWORD *)(v644 + 7);
                        if ( *(_QWORD *)v482 )
                          (*(void (__fastcall **)(void *))v482)(v703);
                        v483 = *(_QWORD *)(v482 + 8);
                        if ( v483 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v703, v483, *(_QWORD *)(v482 + 16));
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v657, 24, 8);
                      }
                      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v695);
                      goto LABEL_801;
                    }
                    v489 = v688;
                    v664 = v690;
                    v663 = v689;
                    v661 = (__m128i)v687;
                    v662 = v688;
                    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v695);
                    if ( DWORD2(v664) )
                    {
                      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v687, v663, v664);
                      v490 = *((_QWORD *)&v687 + 1);
                      v491 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                                             *((_QWORD *)&v687 + 1),
                                             v688);
                      v481 = v492;
                      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v492, 0, 1, 1);
                      v710 = *(_QWORD *)&v695[8];
                      if ( *(_DWORD *)v695 == 1 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v710, *(_QWORD *)&v695[16]);
                      v493 = *(_QWORD *)&v695[16];
                      v703 = *(void **)&v695[16];
                      memcpy(*(void **)&v695[16], v491, v481);
                      v494 = v687;
                      if ( 2LL * (_QWORD)v687 )
                      {
                        v493 = v490;
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v490, v687, 1);
                      }
                      if ( v481 )
                      {
                        v480 = v703;
                      }
                      else
                      {
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v493, v494);
                        v504 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
                        if ( !v504 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
                        v480 = v504;
                        *(_QWORD *)((char *)v504 + 15) = 0xA5B4E8B1A4E59E9BLL;
                        v504[1] = 0x9BE594BFE8207375LL;
                        *v504 = 0x7461747320746967LL;
                        v481 = 23;
                        if ( v710 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v703, v710, 1);
                        v710 = 23;
                      }
                      core::ptr::drop_in_place$LT$std..process..Output$GT$::hfd0096d3b70b62ff(&v661);
LABEL_801:
                      *(_QWORD *)v695 = 10;
                      *(_QWORD *)&v695[8] = v710;
                      *(_QWORD *)&v695[16] = v480;
                      *(_QWORD *)&v695[24] = v481;
                      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v687, v717, 0, 1, 1);
                      v505 = *((_QWORD *)&v687 + 1);
                      if ( (_BYTE)v687 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v687 + 1), v688);
                      v506 = v688;
                      memcpy((void *)v688, __s2[0], v717);
                      v661.i64[0] = (__int64)v695;
                      v661.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                      v315 = (size_t)&unk_1017C1BF2;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v687, &unk_1017C1BF2, &v661);
                      *(_QWORD *)&v679[4] = v688;
                      v679[3] = v687;
                      *(_QWORD *)&v679[0] = v505;
                      *((_QWORD *)&v679[0] + 1) = v506;
                      *(_QWORD *)&v679[1] = v717;
                      *((_QWORD *)&v679[1] + 1) = v716;
                      *(_QWORD *)&v679[2] = v478;
                      *((_QWORD *)&v679[2] + 1) = v477;
                      WORD4(v679[4]) = 1;
                      ii = (__int64)v695;
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v695);
                      if ( !v708 )
                        goto LABEL_804;
                      goto LABEL_803;
                    }
                    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v695, v479, v489);
                    v495 = *(_QWORD *)&v695[8];
                    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                      *(_QWORD *)&v695[8],
                      *(_QWORD *)&v695[16]);
                    v497 = v496;
                    core::ptr::drop_in_place$LT$std..process..Output$GT$::hfd0096d3b70b62ff(&v661);
                    if ( 2LL * *(_QWORD *)v695 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v495, *(_QWORD *)v695, 1);
                    if ( v497 )
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v717, 0, 1, 1);
                      v498 = *(_QWORD *)&v695[8];
                      if ( v695[0] )
                        goto LABEL_1032;
                      v499 = *(_QWORD *)&v695[16];
                      v500 = *(_QWORD *)&v695[16];
                      v501 = __s2[0];
                      memcpy(*(void **)&v695[16], __s2[0], v717);
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v500, v501);
                      v502 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1);
                      if ( !v502 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 70);
                      v503 = v502;
                      ii = (__int64)v502;
                      v315 = (size_t)&unk_1015FF0BA;
                      memcpy(v502, &unk_1015FF0BA, 0x46u);
                      *(_QWORD *)&v679[0] = v498;
                      *((_QWORD *)&v679[0] + 1) = v499;
                      *(_QWORD *)&v679[1] = v717;
                      *((_QWORD *)&v679[1] + 1) = v716;
                      *(_QWORD *)&v679[2] = v478;
                      *((_QWORD *)&v679[2] + 1) = v477;
                      *(_QWORD *)&v679[3] = 70;
                      *((_QWORD *)&v679[3] + 1) = v503;
                      *(_QWORD *)&v679[4] = 70;
                      WORD4(v679[4]) = 1;
                      if ( !v708 )
                        goto LABEL_804;
                    }
                    else
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v717, 0, 1, 1);
                      v498 = *(_QWORD *)&v695[8];
                      if ( v695[0] )
LABEL_1032:
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v498, *(_QWORD *)&v695[16]);
                      v507 = *(_QWORD *)&v695[16];
                      ii = *(_QWORD *)&v695[16];
                      v315 = (size_t)__s2[0];
                      v508 = v717;
                      memcpy(*(void **)&v695[16], __s2[0], v717);
                      *((_QWORD *)&v679[1] + 1) = v716;
                      *(_QWORD *)&v679[2] = v478;
                      *((_QWORD *)&v679[2] + 1) = v477;
                      *(_QWORD *)&v679[0] = v498;
                      *((_QWORD *)&v679[0] + 1) = v507;
                      *(_QWORD *)&v679[1] = v508;
                      *(_QWORD *)&v679[3] = 0x8000000000000000LL;
                      WORD4(v679[4]) = 256;
                      if ( !v708 )
                        goto LABEL_804;
                    }
                  }
                  else
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v695, v717, 0, 1, 1);
                    v484 = *(_QWORD *)&v695[8];
                    if ( v695[0] )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&v695[8], *(_QWORD *)&v695[16]);
                    v485 = *(_QWORD *)&v695[16];
                    v486 = *(_QWORD *)&v695[16];
                    v487 = __s2[0];
                    memcpy(*(void **)&v695[16], __s2[0], v717);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v486, v487);
                    ii = 45;
                    v315 = 1;
                    v488 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
                    if ( !v488 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45);
                    *(_QWORD *)((char *)v488 + 37) = 0xBBA7E781BFE8A88ALL;
                    v488[4] = 0xE8A88AE5AA87E8BDLL;
                    v488[3] = 0x83E88DB8E48CBCEFLL;
                    v488[2] = 0xA89CE598ADE58DB8LL;
                    v488[1] = 0xE495BDE5AE9BE793LL;
                    *v488 = 0xBAE593BBE4BBB8E4LL;
                    *(_QWORD *)&v679[0] = v484;
                    *((_QWORD *)&v679[0] + 1) = v485;
                    *(_QWORD *)&v679[1] = v717;
                    v372 = v716;
                    *((_QWORD *)&v679[1] + 1) = v716;
                    *(_QWORD *)&v679[2] = v478;
                    *((_QWORD *)&v679[2] + 1) = v477;
                    *(_QWORD *)&v679[3] = 45;
                    *((_QWORD *)&v679[3] + 1) = v488;
                    *(_QWORD *)&v679[4] = 45;
                    WORD4(v679[4]) = 1;
                    if ( !v708 )
                      goto LABEL_804;
                  }
LABEL_803:
                  ii = v714[0];
                  v315 = (size_t)v708;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v714[0], v708, 1);
LABEL_804:
                  v158 = v719;
                  v314 = (char *)__s1;
                  goto LABEL_616;
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v446, v464);
                v474 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
                if ( !v474 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46);
                v384 = (size_t)v474;
                *(_QWORD *)((char *)v474 + 38) = 0x95BDE5AE9BE793BALL;
                v474[4] = 0x93BAE593BBE4BBB8LL;
                v474[3] = 0xE4BCAFE5A88EE620LL;
                v474[2] = 0x7269642074696720LL;
                v474[1] = 0x6E6F6D6D6F63208ELL;
                *v474 = 0xBBE495B3E6A097E6LL;
                v388 = 9;
                v714[0] = 46;
                if ( v716 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v446, v716, 1);
                v716 = 46;
              }
              else
              {
                v384 = (size_t)v446;
              }
              if ( v710 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v703, v710, 1);
              v158 = v719;
              v314 = (char *)__s1;
              v390 = v716;
              v389 = v714[0];
              v391 = v667;
              if ( v667 )
                goto LABEL_649;
LABEL_650:
              *(_QWORD *)v695 = v388;
              *(_QWORD *)&v695[8] = v390;
              *(_QWORD *)&v695[16] = v384;
              *(_QWORD *)&v695[24] = v389;
              v661.i64[0] = (__int64)v695;
              v661.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v687, &unk_1017C1C20, &v661);
              v714[0] = *((_QWORD *)&v687 + 1);
              v412 = v717;
              v413 = v612;
              if ( (v717 & 0x8000000000000000LL) != 0LL )
              {
                v414 = 0;
              }
              else
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v687, v612);
                v414 = 1;
                v415 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v412, 1);
                if ( v415 )
                {
                  v416 = (size_t)v415;
                  v315 = (size_t)__s2[0];
                  memcpy(v415, __s2[0], v412);
                  v679[3] = v687;
                  *(_QWORD *)&v679[4] = v688;
                  *(_QWORD *)&v679[0] = v412;
                  v612 = v416;
                  *((_QWORD *)&v679[0] + 1) = v416;
                  v679[1] = v412;
                  v679[2] = 1u;
                  WORD4(v679[4]) = 1;
                  ii = (__int64)v695;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v695);
                  goto LABEL_616;
                }
                v413 = v412;
              }
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v414, v413);
            }
            v432 = v710;
          }
LABEL_1011:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v433, v432);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, v386);
        v408 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
        if ( !v408 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
        v384 = v408;
        *(_QWORD *)(v408 + 24) = 0xBBE48796E68892E9LL;
        *(_QWORD *)(v408 + 16) = 0x878CE62065657274LL;
        *(_QWORD *)(v408 + 8) = 0x6B726F7720AF98E6LL;
        *(_QWORD *)v408 = 0x8DB8E4207469672ELL;
        *(_BYTE *)(v408 + 32) = -74;
        v388 = 9;
        v389 = 33;
        v390 = 33;
        v391 = v667;
        if ( v667 )
          goto LABEL_649;
        goto LABEL_650;
      }
    }
    v372 = (int)v720;
    if ( !v720 || *((_QWORD *)v720 + 9) == 0x8000000000000000LL )
    {
      *(_QWORD *)&v671 = 0x8000000000000000LL;
      goto LABEL_600;
    }
    v315 = (size_t)v720 + 72;
    ii = (__int64)&v671;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v671, (char *)v720 + 72);
    if ( (_QWORD)v671 != 0x8000000000000000LL )
    {
      v373 = *((_QWORD *)&v671 + 1);
      v374 = v672;
      goto LABEL_604;
    }
LABEL_600:
    *(_QWORD *)&v679[0] = 0x8000000000000000LL;
    v712.i32[0] = 0;
LABEL_616:
    if ( !v720
      || (v372 = (int)v720, *((_QWORD *)v720 + 21) == 0x8000000000000000LL)
      || (v315 = (size_t)v720 + 168,
          ii = (__int64)v695,
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            v695,
            (char *)v720 + 168),
          v372 = 0,
          *(_QWORD *)v695 == 0x8000000000000000LL) )
    {
      if ( v646.i8[0] )
      {
        *(_QWORD *)&v687 = 0x8000000000000000LL;
      }
      else
      {
        ii = (__int64)&v687;
        v315 = (size_t)&v636[5] + 8;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          &v687,
          (char *)&v636[5] + 8);
      }
      v392 = v720;
      if ( !v720 )
      {
        v372 = 0;
        goto LABEL_626;
      }
    }
    else
    {
      v372 = *(_DWORD *)&v695[8];
      v687 = *(_OWORD *)v695;
      *(_QWORD *)&v688 = *(_QWORD *)&v695[16];
      v392 = v720;
    }
    LODWORD(v717) = v392[50];
    LOBYTE(v372) = 1;
LABEL_626:
    v393 = v709 & (v709 - 1);
    --v706;
    if ( (__n & 0x8000000000000000LL) != 0LL )
    {
      v523 = 0;
      goto LABEL_827;
    }
    LODWORD(v714[0]) = v372;
    if ( __n )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(ii, v315);
      v394 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      if ( v394 )
      {
        v395 = v394;
        goto LABEL_631;
      }
      v697 = __n;
      v523 = 1;
LABEL_827:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v523, v697);
    }
    v395 = 1;
LABEL_631:
    v697 = v395;
    memcpy((void *)v395, v666[0], __n);
    v646 = *(__m128i *)(v314 - 56);
    v396 = *((_QWORD *)v314 - 5);
    __s2[0] = (void *)0x8000000000000000LL;
    v709 = v396;
    if ( v396 != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, v314 - 40);
      v649 = *(_QWORD *)&v695[8];
      __s2[0] = *(void **)v695;
      v607 = *(_QWORD *)&v695[16];
    }
    v397 = *((_BYTE **)&v671 + 1);
    v398 = v671;
    v399 = 0x8000000000000000LL;
    v666[0] = *((void **)&v671 + 1);
    if ( (_QWORD)v671 == 0x8000000000000000LL )
    {
      v716 = 0x8000000000000000LL;
    }
    else
    {
      v399 = v672;
      v400 = v672;
      v401 = std::path::Path::file_name::hf6c2daad91e50ebf(*((_QWORD *)&v671 + 1), v672);
      if ( v401 )
      {
        v397 = v695;
        v400 = v401;
        core::str::converts::from_utf8::hb32deb9559450f6e(v695, v401, v402);
        if ( v695[0] )
          v403 = nullptr;
        else
          v403 = *(const void **)&v695[8];
        v401 = *(_QWORD *)&v695[16];
      }
      else
      {
        v403 = nullptr;
      }
      v404 = v403 == nullptr || v401 == 0;
      if ( !v404 )
        v399 = v401;
      if ( v399 < 0 )
      {
        v405 = 0;
        goto LABEL_833;
      }
      v716 = v398;
      if ( v399 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v397, v400);
        v405 = 1;
        v406 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v399, 1);
        if ( !v406 )
        {
          v643 = v399;
LABEL_833:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v405, v643);
        }
        v407 = v406;
      }
      else
      {
        v407 = 1;
      }
      if ( v404 )
        v403 = v666[0];
      v643 = v407;
      memcpy((void *)v407, v403, v399);
      v609 = v399;
      v158 = v719;
    }
    v657 = *((_QWORD *)&v687 + 1);
    v710 = v687;
    v650 = *((_QWORD *)&v653 + 1);
    v708 = (void *)v653;
    v611 = *((_QWORD *)&v651 + 1);
    v703 = (void *)v651;
    v417 = *(_BYTE *)v686.i64[0];
    if ( v720 && !v417 )
      v417 = *((_BYTE *)v720 + 204);
    v418 = 0x8000000000000000LL;
    if ( !(_BYTE)v681 )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v695, (char *)&v636[2] + 8);
      v621 = *(_QWORD *)&v695[8];
      v418 = *(_QWORD *)v695;
      v608 = *(_QWORD *)&v695[16];
    }
    v419 = 1;
    if ( v709 != 0x8000000000000000LL )
      v419 = std::path::Path::is_file::h8e542e1d1cac781b(*((void **)__s1 - 4), *((_QWORD *)__s1 - 3)) ^ 1;
    v420 = v717;
    if ( (int)v717 <= 0 )
      v420 = v684.i32[0];
    if ( !LOBYTE(v714[0]) )
      v420 = v684.i32[0];
    if ( ((unsigned __int8)v704 & 1) == 0 )
      *(_QWORD *)&v682 = v648;
    if ( (unsigned __int64)__src[0] | (unsigned __int8)v704 & 1 )
      v677 = v682;
    qmemcpy((char *)&v637[14] + 8, v679, 0x50u);
    *(_QWORD *)&v637[1] = __n;
    *((_QWORD *)&v637[1] + 1) = v697;
    *(_QWORD *)&v637[2] = __n;
    *((_QWORD *)&v637[2] + 1) = v707;
    *(_QWORD *)&v637[3] = v699;
    *((_QWORD *)&v637[3] + 1) = v656;
    *((double *)&v637[19] + 1) = v677;
    si128 = _mm_load_si128(&v646);
    v637[0] = si128;
    *(void **)&v637[4] = __s2[0];
    *((_QWORD *)&v637[4] + 1) = v649;
    *(_QWORD *)&v637[5] = v607;
    *((_QWORD *)&v637[5] + 1) = v399;
    *(_QWORD *)&v637[6] = v643;
    *((_QWORD *)&v637[6] + 1) = v609;
    *(_QWORD *)&v637[8] = v672;
    v637[7] = v671;
    *((_QWORD *)&v637[9] + 1) = v688;
    *(_OWORD *)((char *)&v637[8] + 8) = v687;
    LODWORD(v637[20]) = v420;
    *(_QWORD *)&v637[11] = v654;
    v637[10] = v653;
    *((_QWORD *)&v637[12] + 1) = v652;
    *(_OWORD *)((char *)&v637[11] + 8) = v651;
    BYTE4(v637[20]) = v417;
    *(_QWORD *)&v637[13] = v418;
    *((_QWORD *)&v637[13] + 1) = v621;
    *(_QWORD *)&v637[14] = v608;
    BYTE5(v637[20]) = v712.i8[0];
    BYTE6(v637[20]) = v700.i8[0];
    BYTE7(v637[20]) = v419;
    v421 = v660;
    if ( v660 == v658 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h47184ee96d99d12d(&v658);
    memcpy((void *)(v659 + 328 * v421), v637, 0x148u);
    v660 = v421 + 1;
    ii = (__int64)v636;
    core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..RolloutSummaryData$GT$::ha583597ecc5c28f7(
      v636,
      *(double *)si128.i64);
    _R8 = v393;
    _RAX = v706;
    v294 = v680.i64[0];
    _RCX = v713;
    jj = v698;
    if ( v706 )
      continue;
    break;
  }
  v595 = v659;
  *(_QWORD *)&v637[0] = v679;
  if ( v660 >= 2 )
  {
    if ( v660 >= 0x15 )
    {
      core::slice::sort::stable::driftsort_main::hbe5dce7b87b0c025(v659, v660, v637, v713, _R8);
    }
    else
    {
      v596 = 328 * v660;
      v597 = 328;
      do
      {
        core::slice::sort::shared::smallsort::insert_tail::h320d3e6c05857c95(v595, v595 + v597, jj, _RCX, _R8);
        v597 += 328;
      }
      while ( v596 != v597 );
    }
  }
LABEL_809:
  v509 = v640;
  v640[3] = v660;
  v510 = v658;
  v509[2] = v659;
  v509[1] = v510;
  *v509 = 11;
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9c1624955708f3e4(
    &v673,
    *(double *)si128.i64);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h91af55984fa5bad2(&v692);
  _RAX = 2 * v158;
  if ( 2 * v158 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v655 + 1), v158, 1);
    v512 = *(_QWORD *)v633;
    if ( *(_QWORD *)v633 )
      goto LABEL_813;
  }
  else
  {
    v512 = *(_QWORD *)v633;
    if ( !*(_QWORD *)v633 )
      goto LABEL_823;
LABEL_813:
    v513 = *(_QWORD *)&v633[16];
    if ( *(_QWORD *)&v633[16] )
    {
      v514 = v655;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v655));
      v516 = (const __m128i *)(v655 + 16);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v517 = _mm_movemask_epi8(_mm_load_si128(v516));
            v514 -= 384;
            ++v516;
          }
          while ( v517 == 0xFFFF );
          _R13D = ~v517;
        }
        __asm { tzcnt   eax, r13d }
        v518 = -3 * _RAX;
        v519 = *(_QWORD *)(v514 + 8 * v518 - 24);
        if ( v519 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v514 + 8 * v518 - 16), v519, 1);
        --v513;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v513 );
    }
    v520 = (24 * v512 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v521 = v520 + v512 + 17;
    if ( v521 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v655 - v520, v521, 16);
  }
LABEL_823:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h362fc81914fac8a3(v623);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd36f081da926e1f0(&v616);
  if ( v629 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v630, v629, 1);
  return v640;
}
