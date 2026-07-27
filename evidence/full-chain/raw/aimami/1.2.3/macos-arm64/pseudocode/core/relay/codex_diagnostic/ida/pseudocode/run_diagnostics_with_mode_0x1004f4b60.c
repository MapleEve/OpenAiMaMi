// __ZN13codexmate_lib4core5relay16codex_diagnostic25run_diagnostics_with_mode @ 0x1004f4b60 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode::h30a2ac42c421fd0d(
        _QWORD *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        int a4)
{
  __int64 v4; // rbx
  void (**v5)(void); // rdi
  __int128 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 *v9; // r15
  __int128 v10; // rax
  __int128 v11; // rax
  __m128i *v12; // r13
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 f_frsize; // r14
  void *v16; // rax
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int128 v30; // rdi
  void *v31; // rax
  void *v32; // rbx
  _DWORD *v33; // rax
  _DWORD *v34; // r14
  __int64 v35; // rax
  __int64 v36; // r15
  void *v37; // rax
  void *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rbx
  void *v42; // rax
  void *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r14
  _QWORD *v46; // rax
  _QWORD *v47; // r15
  __int64 v48; // rbx
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rdi
  unsigned __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // rdx
  void *v56; // rax
  void *v57; // r14
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // r12
  void *v62; // rax
  void *v63; // r14
  __int64 v64; // rax
  __int64 v65; // r15
  _QWORD *v66; // rax
  _QWORD *v67; // r12
  _QWORD *v68; // rax
  __int64 v69; // r15
  char v70; // r14
  __int64 v71; // r8
  void *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r13
  unsigned __int64 v75; // rdi
  void *v76; // rax
  unsigned __int64 v77; // r12
  __int64 v78; // rax
  _QWORD *v79; // r14
  __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // r12
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  void *v86; // rax
  void *v87; // r13
  __int64 v88; // rax
  _QWORD *v89; // rax
  void *v90; // rax
  __int64 v91; // r14
  __m128i *v92; // rsi
  _BYTE *v93; // r12
  unsigned __int64 v94; // r14
  void *v95; // rax
  void *v96; // rbx
  _WORD *v97; // rax
  _WORD *v98; // r14
  void *v99; // rax
  void *v100; // rbx
  _WORD *v101; // rax
  _WORD *v102; // r14
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rdi
  __int64 v106; // rsi
  _QWORD *v107; // rax
  _QWORD *v108; // r15
  unsigned __int64 v109; // r13
  _QWORD *v110; // rax
  _QWORD *v111; // rcx
  _QWORD *v112; // rax
  __m128i *v113; // rbx
  unsigned __int64 v114; // r13
  unsigned __int64 v115; // r15
  unsigned __int64 v116; // r12
  _QWORD *v117; // r12
  statvfs *f_namemax; // rdi
  unsigned __int64 v119; // rsi
  unsigned __int64 v120; // rsi
  unsigned __int64 v121; // rbx
  __int64 v122; // r15
  _QWORD *v123; // r13
  unsigned __int64 v124; // r14
  __int64 v125; // r14
  _QWORD *v126; // r12
  _QWORD *v127; // r12
  void *v128; // rax
  __int64 *v129; // rax
  char *v130; // rsi
  _QWORD *v131; // r15
  __int64 v132; // r13
  __int64 v133; // r12
  _QWORD *v134; // r15
  __int64 v135; // rsi
  _QWORD *v136; // r14
  __int64 v137; // rsi
  unsigned __int64 v138; // r15
  __int64 v139; // rax
  __int64 v140; // rcx
  bool v141; // zf
  unsigned __int64 v142; // rdi
  unsigned __int64 v143; // r12
  __int64 v144; // rax
  __int64 v145; // rcx
  void *v146; // rdx
  __int64 v147; // r8
  void *v148; // rcx
  __m128i *v149; // rbx
  __int64 v150; // r14
  _QWORD *v151; // r12
  unsigned __int64 v152; // rbx
  __int64 v153; // r15
  unsigned __int8 v154; // bl
  __int128 v155; // rdi
  __int64 v156; // r8
  void *v157; // rcx
  __int64 v158; // rsi
  unsigned __int64 v159; // rbx
  __int64 v160; // r12
  __int64 v161; // rbx
  unsigned __int64 v162; // r14
  void *v163; // rax
  void *v164; // r12
  __int64 v165; // r13
  _DWORD *v166; // rax
  _DWORD *v167; // rbx
  __int64 v168; // rax
  __int64 v169; // r14
  __int64 v170; // rax
  unsigned __int64 v171; // r13
  void *v172; // rax
  void *v173; // rbx
  _DWORD *v174; // rax
  _DWORD *v175; // r14
  __int64 v176; // rax
  __int64 v177; // rsi
  _BYTE *v178; // rax
  unsigned __int64 v179; // rbx
  __int64 v180; // r13
  __int64 v181; // rbx
  __int64 *v182; // r15
  __int64 *v183; // rbx
  unsigned __int64 v184; // rcx
  __m128i v185; // xmm2
  __int64 v187; // rax
  __m128i v188; // xmm1
  __int64 i; // rdx
  unsigned __int64 v190; // rcx
  __int64 v191; // rax
  size_t v192; // r14
  __int64 *v193; // r14
  __int64 v194; // rax
  __int64 v195; // r13
  __int64 *v196; // rdi
  _QWORD *v197; // r14
  void *v198; // rax
  void *v199; // r15
  _DWORD *v200; // rax
  _DWORD *v201; // rbx
  _QWORD *v202; // rax
  _QWORD *v203; // r14
  __int64 v204; // rax
  __int64 *v205; // r15
  __int64 *v206; // r12
  statvfs *v207; // rdi
  unsigned __int64 v208; // rsi
  __int64 v209; // r12
  unsigned __int64 v210; // rbx
  __int64 v211; // r14
  char v212; // r13
  __int64 v213; // r14
  __int64 v214; // rax
  __int64 v215; // rcx
  void *v216; // rax
  void *v217; // r15
  __int64 v218; // rax
  __int64 v219; // r12
  unsigned __int64 v220; // r14
  __int64 v221; // rbx
  __int64 v222; // rbx
  _QWORD *v223; // r14
  __int64 v224; // rsi
  signed __int64 v225; // rsi
  char v226; // bl
  statvfs *v227; // rdi
  unsigned __int64 v228; // r14
  unsigned __int64 v229; // r15
  __int64 v230; // rbx
  size_t v231; // rax
  __int64 v232; // rcx
  void *v233; // rdx
  __int64 v234; // rsi
  __int64 v235; // rbx
  __int64 v236; // r14
  __int64 v237; // r15
  __int64 v238; // rsi
  __int64 v239; // rdi
  void *v240; // rax
  void *v241; // rbx
  _WORD *v242; // rax
  _WORD *v243; // r14
  _QWORD *v244; // rax
  _QWORD *v245; // r15
  void *v246; // rax
  void *v247; // r12
  __int64 v248; // rsi
  __int64 v249; // rbx
  __int64 v250; // rax
  __int64 v251; // rsi
  __int64 v252; // rbx
  __int64 v253; // rax
  unsigned __int64 v254; // rdx
  unsigned __int8 *v255; // rcx
  int v256; // esi
  unsigned __int64 v257; // rbx
  unsigned __int8 *v258; // r11
  unsigned __int64 v259; // r14
  char v260; // r9
  unsigned __int64 v261; // r10
  unsigned __int64 v262; // r8
  unsigned __int8 *v263; // r15
  unsigned __int64 v264; // r10
  unsigned int v265; // r14d
  int v266; // ebx
  int v267; // r13d
  int v268; // r12d
  unsigned int v269; // r15d
  __int64 v270; // rcx
  __int64 v271; // r15
  unsigned __int64 *v272; // rax
  __int64 v273; // r14
  __int64 *v274; // rcx
  unsigned __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // rcx
  _BYTE *v278; // rsi
  int v279; // eax
  unsigned __int64 v280; // rsi
  char v281; // r14
  __int64 v282; // rcx
  _BYTE *v283; // rsi
  int v284; // eax
  __int64 v285; // rcx
  _BYTE *v286; // rsi
  int v287; // eax
  __int64 v288; // rdi
  _BYTE *v289; // rsi
  __int64 v290; // rcx
  __int64 v291; // rdx
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rax
  unsigned __int64 v295; // kr00_8
  __int64 v296; // r9
  bool v297; // cf
  void *v298; // rax
  void *v299; // r13
  _DWORD *v300; // rax
  __int64 v301; // rax
  __int64 v302; // rax
  __int64 v303; // r8
  _BYTE *v304; // rsi
  __int64 v305; // rcx
  __int64 v306; // rdx
  __int64 v307; // rax
  unsigned int v308; // r8d
  __int64 v309; // rcx
  _BYTE *v310; // rsi
  int v311; // eax
  __int64 v312; // r8
  _BYTE *v313; // rsi
  __int64 v314; // rcx
  __int64 v315; // rdx
  __int64 v316; // rax
  unsigned int v317; // r8d
  __int64 v318; // rcx
  _BYTE *v319; // rsi
  int v320; // eax
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // rax
  unsigned __int64 v324; // kr10_8
  __int64 v325; // r10
  bool v326; // cf
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // rax
  unsigned __int64 v330; // kr20_8
  __int64 v331; // r10
  bool v332; // cf
  __int64 v333; // rsi
  __int64 v334; // r14
  size_t v335; // rax
  __int64 v336; // rcx
  __int64 v337; // r14
  __int64 v338; // rax
  __int64 v339; // rbx
  __int64 v340; // r14
  size_t v341; // rax
  __int64 v342; // rcx
  void *v343; // rax
  void *v344; // rbx
  _WORD *v345; // rax
  __int128 v346; // kr90_16
  __int64 v347; // r15
  unsigned __int64 v348; // rax
  __int64 v349; // r13
  _QWORD *v350; // rbx
  __int64 v351; // rsi
  unsigned __int64 v352; // rbx
  unsigned __int64 v353; // rbx
  unsigned __int64 v354; // r12
  __int64 v355; // rax
  const char *v356; // rsi
  __int64 v357; // rax
  char v358; // r14
  unsigned __int64 v359; // rdx
  unsigned __int64 v360; // r15
  __int64 v361; // rax
  bool v362; // r13
  void *v363; // rax
  void *v364; // r14
  __int64 v365; // rax
  __int64 v366; // r15
  __int64 v367; // rax
  __int64 v368; // r13
  _QWORD *v369; // rax
  const __m128i *v370; // rbx
  _BYTE *v371; // r13
  unsigned __int64 v372; // rbx
  void *v373; // rbx
  __int64 v374; // rax
  __int64 v375; // rcx
  unsigned __int64 v376; // rbx
  void *v377; // rbx
  __int64 v378; // rax
  __int64 v379; // rcx
  unsigned __int64 v380; // rbx
  void *v381; // rbx
  __int64 v382; // rax
  __int64 v383; // rcx
  unsigned __int64 v384; // rbx
  __int128 v385; // rdi
  void *v386; // rbx
  __int64 v387; // rax
  __int64 v388; // rcx
  __int64 v389; // r14
  void *v390; // rbx
  __int64 v391; // rbx
  __int64 v392; // rax
  __int64 v393; // rcx
  unsigned __int64 v394; // r14
  void *v395; // r14
  void *v396; // r14
  size_t v397; // r15
  __int64 v398; // r12
  void *v399; // r15
  __int64 v400; // rax
  __int64 v401; // rcx
  __int64 v402; // rdx
  __int64 v403; // rax
  __int64 v404; // r14
  __int64 v405; // r15
  __int64 v406; // r12
  __int64 v407; // rsi
  __int64 v408; // r15
  __int64 v409; // rsi
  const void *v410; // r15
  unsigned __int64 v411; // r15
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 v414; // rsi
  __int64 v415; // rdx
  __int64 v416; // rcx
  void *v417; // rcx
  void *v418; // rbx
  __int64 v419; // rax
  __int64 v420; // rcx
  void *v421; // rdx
  statvfs *v422; // rsi
  __int64 v423; // rbx
  statvfs *v424; // rdi
  const char *v425; // rbx
  bool v426; // r13
  void *v427; // rax
  void *v428; // rbx
  __int64 v429; // rax
  __int64 v430; // r15
  __int128 v431; // krC0_16
  __int64 v432; // r12
  char *v433; // rbx
  __int64 v434; // r15
  _QWORD *v435; // r14
  __int64 v436; // rsi
  void *v437; // rax
  void *v438; // rbx
  __int64 v439; // rax
  __int64 v440; // r15
  unsigned __int64 v441; // r13
  __int64 v442; // r14
  _QWORD *v443; // rax
  statvfs *v444; // r14
  int v445; // eax
  void *v446; // rax
  void *v447; // rbx
  _DWORD *v448; // rax
  _DWORD *v449; // r15
  unsigned __int64 v450; // r13
  __int64 v451; // r14
  _QWORD *v452; // rax
  char *v453; // rbx
  _QWORD *v454; // r14
  __int64 v455; // rsi
  __int64 v456; // r14
  __int64 v457; // rsi
  __int64 v458; // rdi
  size_t v459; // rbx
  const void *v460; // r14
  __int64 v461; // r15
  __int64 v462; // r13
  char v463; // bl
  void **v464; // rdi
  statvfs *v465; // rsi
  void *v466; // rbx
  void *v467; // r13
  size_t v468; // r12
  void *v469; // r15
  unsigned __int64 v470; // r14
  __int64 v471; // r14
  __int64 v472; // rsi
  void *v473; // rax
  unsigned __int64 v474; // r12
  _DWORD *v475; // rax
  _DWORD *v476; // r13
  __int64 v477; // r15
  size_t v478; // r13
  _QWORD *v479; // r14
  __int64 v480; // rsi
  __int64 v481; // r14
  unsigned __int64 v482; // rbx
  unsigned __int64 v483; // rsi
  __int64 v484; // r14
  __int64 v485; // rdi
  __int64 v486; // rcx
  __int64 v487; // rax
  _WORD *v488; // rdx
  _QWORD *v489; // rax
  __int64 result; // rax
  __int64 v491; // rsi
  __int64 v492; // rbx
  __int64 v493; // r14
  __int64 v494; // r15
  const __m128i *v496; // r12
  int v497; // r13d
  __int64 v498; // rax
  __int64 v499; // rsi
  __int64 v500; // rbx
  __int64 v501; // rbx
  __int64 v502; // r14
  __int64 v503; // r15
  const __m128i *v505; // r12
  int v506; // r13d
  __int64 v507; // rax
  __int64 v508; // rsi
  __int64 v509; // rbx
  void *v510; // rax
  unsigned __int64 v511; // r14
  _DWORD *v512; // rax
  _DWORD *v513; // r15
  __int64 v514; // rax
  unsigned __int64 v515; // r12
  void *v516; // rax
  void *v517; // r13
  _QWORD *v518; // r15
  __int64 v519; // rsi
  __int64 v520; // r15
  _QWORD *v521; // r14
  __int64 v522; // rsi
  unsigned __int64 v523; // rax
  __int128 v524; // kr100_16
  void *v525; // rax
  _DWORD *v526; // rax
  _DWORD *v527; // r15
  __int64 v528; // r14
  void *v529; // rax
  __int64 v530; // r13
  void *v531; // rax
  void *v532; // r14
  _DWORD *v533; // rax
  _DWORD *v534; // r15
  _QWORD *v535; // rax
  _QWORD *v536; // r13
  __int64 v537; // rax
  void *v538; // rax
  __int64 v539; // rax
  __int64 v540; // r13
  _QWORD *v541; // rax
  _QWORD *v542; // r14
  __int128 v543; // kr110_16
  __int64 v544; // r8
  void *v545; // r13
  __int64 v546; // rax
  __int64 v547; // r15
  _QWORD *v548; // rax
  _QWORD *v549; // r14
  __int64 v550; // rax
  __int64 v551; // rax
  __int64 v552; // r8
  _BYTE *v553; // rsi
  __int64 v554; // rcx
  __int64 v555; // rdx
  __int64 v556; // rax
  unsigned int v557; // r8d
  __int64 v558; // r8
  _BYTE *v559; // rsi
  __int64 v560; // rcx
  __int64 v561; // rax
  unsigned int v562; // edx
  __int64 v563; // rcx
  __int64 v564; // r8
  __int64 v565; // rax
  unsigned __int64 v566; // kr30_8
  __int64 v567; // r10
  bool v568; // cf
  __int64 v569; // rcx
  __int64 v570; // r8
  __int64 v571; // rax
  __int64 v572; // rdx
  bool v573; // al
  __int64 v574; // rsi
  _BYTE *v575; // r8
  int v576; // ecx
  __int64 v577; // r9
  _BYTE *v578; // r8
  __int64 v579; // rsi
  __int64 v580; // rdx
  unsigned __int64 v581; // rcx
  unsigned int v582; // r9d
  __int64 v583; // rsi
  __int64 v584; // r9
  __int64 v585; // rcx
  __int64 v586; // r11
  bool v587; // cf
  _QWORD v588[13]; // [rsp+0h] [rbp-1050h] BYREF
  _BYTE v589[104]; // [rsp+68h] [rbp-FE8h] BYREF
  _BYTE v590[104]; // [rsp+D0h] [rbp-F80h] BYREF
  _BYTE v591[104]; // [rsp+138h] [rbp-F18h] BYREF
  _BYTE v592[104]; // [rsp+1A0h] [rbp-EB0h] BYREF
  _BYTE v593[104]; // [rsp+208h] [rbp-E48h] BYREF
  _BYTE v594[104]; // [rsp+270h] [rbp-DE0h] BYREF
  _BYTE v595[104]; // [rsp+2D8h] [rbp-D78h] BYREF
  _BYTE v596[104]; // [rsp+340h] [rbp-D10h] BYREF
  _BYTE v597[104]; // [rsp+3A8h] [rbp-CA8h] BYREF
  _BYTE v598[104]; // [rsp+410h] [rbp-C40h] BYREF
  _BYTE v599[104]; // [rsp+478h] [rbp-BD8h] BYREF
  _BYTE v600[104]; // [rsp+4E0h] [rbp-B70h] BYREF
  _BYTE v601[104]; // [rsp+548h] [rbp-B08h] BYREF
  _BYTE v602[104]; // [rsp+5B0h] [rbp-AA0h] BYREF
  _BYTE v603[104]; // [rsp+618h] [rbp-A38h] BYREF
  _BYTE v604[104]; // [rsp+680h] [rbp-9D0h] BYREF
  _BYTE v605[104]; // [rsp+6E8h] [rbp-968h] BYREF
  __m128i v606; // [rsp+750h] [rbp-900h] BYREF
  __m128i v607; // [rsp+760h] [rbp-8F0h] BYREF
  _QWORD v608[13]; // [rsp+770h] [rbp-8E0h] BYREF
  _QWORD v609[13]; // [rsp+7D8h] [rbp-878h] BYREF
  _QWORD v610[13]; // [rsp+840h] [rbp-810h] BYREF
  _QWORD v611[13]; // [rsp+8A8h] [rbp-7A8h] BYREF
  _QWORD v612[3]; // [rsp+910h] [rbp-740h] BYREF
  __int128 v613; // [rsp+928h] [rbp-728h] BYREF
  __int64 v614; // [rsp+938h] [rbp-718h]
  __int64 v615; // [rsp+940h] [rbp-710h]
  __int128 v616; // [rsp+948h] [rbp-708h]
  _QWORD *v617; // [rsp+958h] [rbp-6F8h]
  __int64 v618; // [rsp+960h] [rbp-6F0h]
  void *__s1; // [rsp+968h] [rbp-6E8h]
  unsigned __int64 v620; // [rsp+970h] [rbp-6E0h]
  __int64 v621; // [rsp+978h] [rbp-6D8h]
  _QWORD v622[13]; // [rsp+980h] [rbp-6D0h] BYREF
  __int64 v623; // [rsp+9E8h] [rbp-668h] BYREF
  __int64 v624; // [rsp+9F0h] [rbp-660h]
  __int64 v625; // [rsp+9F8h] [rbp-658h]
  __int64 v626; // [rsp+A00h] [rbp-650h] BYREF
  __int64 *v627; // [rsp+A08h] [rbp-648h]
  __int64 *v628; // [rsp+A10h] [rbp-640h]
  _BYTE v629[104]; // [rsp+A18h] [rbp-638h] BYREF
  _BYTE v630[104]; // [rsp+A80h] [rbp-5D0h] BYREF
  __int128 v631; // [rsp+AE8h] [rbp-568h] BYREF
  __int64 v632; // [rsp+AF8h] [rbp-558h]
  __int64 v633; // [rsp+B00h] [rbp-550h]
  __int128 v634; // [rsp+B08h] [rbp-548h] BYREF
  __int64 v635; // [rsp+B18h] [rbp-538h]
  __int64 v636; // [rsp+B20h] [rbp-530h]
  __int128 v637; // [rsp+B28h] [rbp-528h] BYREF
  __int64 v638; // [rsp+B38h] [rbp-518h]
  size_t v639; // [rsp+B40h] [rbp-510h] BYREF
  __int64 v640; // [rsp+B48h] [rbp-508h]
  size_t v641; // [rsp+B50h] [rbp-500h]
  void *__s2; // [rsp+B58h] [rbp-4F8h] BYREF
  unsigned __int64 v643; // [rsp+B60h] [rbp-4F0h]
  _BYTE v644[25]; // [rsp+B68h] [rbp-4E8h]
  _BYTE v645[15]; // [rsp+B81h] [rbp-4CFh]
  __int16 v646; // [rsp+B90h] [rbp-4C0h]
  char v647; // [rsp+B92h] [rbp-4BEh]
  _BYTE v648[104]; // [rsp+B98h] [rbp-4B8h] BYREF
  _BYTE v649[39]; // [rsp+C00h] [rbp-450h] BYREF
  _BYTE v650[104]; // [rsp+C28h] [rbp-428h] BYREF
  _QWORD v651[13]; // [rsp+C90h] [rbp-3C0h] BYREF
  __int128 v652; // [rsp+CF8h] [rbp-358h] BYREF
  __int64 v653; // [rsp+D08h] [rbp-348h]
  _BYTE v654[15]; // [rsp+D10h] [rbp-340h]
  __int128 v655; // [rsp+D20h] [rbp-330h] BYREF
  _BYTE v656[25]; // [rsp+D30h] [rbp-320h]
  _BYTE v657[15]; // [rsp+D49h] [rbp-307h]
  __int16 v658; // [rsp+D58h] [rbp-2F8h]
  char v659; // [rsp+D5Ah] [rbp-2F6h]
  void *v660; // [rsp+D60h] [rbp-2F0h] BYREF
  size_t __n; // [rsp+D68h] [rbp-2E8h]
  _BYTE v662[25]; // [rsp+D70h] [rbp-2E0h]
  _BYTE v663[15]; // [rsp+D89h] [rbp-2C7h]
  __int16 v664; // [rsp+D98h] [rbp-2B8h]
  char v665; // [rsp+D9Ah] [rbp-2B6h]
  _BYTE v666[176]; // [rsp+DA0h] [rbp-2B0h] BYREF
  __int64 *v667; // [rsp+E50h] [rbp-200h]
  _QWORD *v668; // [rsp+E58h] [rbp-1F8h]
  _QWORD *v669; // [rsp+E60h] [rbp-1F0h]
  _QWORD *v670; // [rsp+E68h] [rbp-1E8h]
  __int64 *v671; // [rsp+E70h] [rbp-1E0h]
  _BYTE v672[104]; // [rsp+E78h] [rbp-1D8h] BYREF
  _QWORD *v673; // [rsp+EE0h] [rbp-170h]
  _QWORD *v674; // [rsp+EE8h] [rbp-168h]
  statvfs __dst[3]; // [rsp+EF0h] [rbp-160h] BYREF
  __m128i *v676; // [rsp+FC0h] [rbp-90h]
  __m128i *v677; // [rsp+FC8h] [rbp-88h]
  char *v678; // [rsp+FD0h] [rbp-80h] BYREF
  __int64 v679; // [rsp+FD8h] [rbp-78h]
  char *v680; // [rsp+FE0h] [rbp-70h]
  unsigned __int64 v681; // [rsp+FE8h] [rbp-68h]
  __int128 v682; // [rsp+FF0h] [rbp-60h]
  _QWORD *v683; // [rsp+1000h] [rbp-50h]
  __int64 v684; // [rsp+1008h] [rbp-48h]
  unsigned __int64 f_bsize; // [rsp+1010h] [rbp-40h]
  unsigned __int64 v686; // [rsp+1018h] [rbp-38h]
  size_t v687; // [rsp+1020h] [rbp-30h]

  v588[5] = 0;
  LODWORD(v687) = a4;
  v676 = (__m128i *)a2;
  v617 = a1;
  v677 = *(__m128i **)(a3 + 8);
  v686 = a3;
  v4 = *(_QWORD *)(a3 + 16);
  v5 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v9 = v6;
  if ( *((_BYTE *)v6 + 16) == 1 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)v6;
    *((_QWORD *)&v10 + 1) = *((_QWORD *)v9 + 1);
  }
  else
  {
    *(_QWORD *)&v10 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                        &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                        a2,
                        v7,
                        v8);
    *v9 = v10;
    *((_BYTE *)v9 + 16) = 1;
  }
  *(_QWORD *)v9 = v10 + 1;
  *(_QWORD *)&__dst[0].f_bavail = 0;
  *(_QWORD *)&__dst[0].f_blocks = 0;
  __dst[0].f_frsize = 0;
  __dst[0].f_bsize = (unsigned __int64)&xmmword_1015FBEC0;
  *(_OWORD *)&__dst[0].f_ffree = v10;
  if ( v4 )
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(__dst, v4, &__dst[0].f_ffree, 1);
    a2 = v677;
    *((_QWORD *)&v682 + 1) = v4;
    do
    {
      *(_QWORD *)&v682 = a2;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v666, a2);
      v5 = (void (**)(void))__dst;
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(__dst, v666);
      a2 = (const __m128i *)(v682 + 232);
      --*((_QWORD *)&v682 + 1);
    }
    while ( *((_QWORD *)&v682 + 1) );
  }
  v616 = *(_OWORD *)&__dst[0].f_ffree;
  v615 = *(_QWORD *)&__dst[0].f_bavail;
  v614 = *(_QWORD *)&__dst[0].f_blocks;
  v613 = *(_OWORD *)&__dst[0].f_bsize;
  if ( *((_BYTE *)v9 + 16) == 1 )
  {
    v11 = *v9;
  }
  else
  {
    *(_QWORD *)&v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                        v5,
                        a2,
                        *((_QWORD *)&v10 + 1),
                        __dst[0].f_frsize);
    *v9 = v11;
    *((_BYTE *)v9 + 16) = 1;
  }
  *(_QWORD *)v9 = v11 + 1;
  *(_QWORD *)&__dst[0].f_bavail = 0;
  *(_QWORD *)&__dst[0].f_blocks = 0;
  __dst[0].f_frsize = 0;
  __dst[0].f_bsize = (unsigned __int64)&xmmword_1015FBEC0;
  *(_OWORD *)&__dst[0].f_ffree = v11;
  if ( v4 )
  {
    v12 = v677;
    v13 = v4;
    do
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v666, v12);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(__dst, v666);
      v12 = (__m128i *)((char *)v12 + 232);
      --v13;
    }
    while ( v13 );
  }
  v634 = *(_OWORD *)&__dst[0].f_ffree;
  v633 = *(_QWORD *)&__dst[0].f_bavail;
  v632 = *(_QWORD *)&__dst[0].f_blocks;
  v631 = *(_OWORD *)&__dst[0].f_bsize;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h322ab894fde71630(
    &v626,
    v677,
    (char *)v677 + 232 * v4);
  v14 = v676[3].i64[1];
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, v14, v676[4].i64[0]);
  f_frsize = __dst[0].f_frsize;
  f_bsize = __dst[0].f_bsize;
  if ( __dst[0].f_bsize != 0x8000000000000000LL )
  {
    v677 = (__m128i *)__dst[0].f_frsize;
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v611,
      &unk_1015FD9E5,
      13,
      &unk_1015FD9F2,
      27);
    *(_QWORD *)&v682 = *(_QWORD *)&__dst[0].f_blocks;
    goto LABEL_26;
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__dst[0].f_frsize) )
  {
    *(_QWORD *)v672 = f_frsize;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(f_frsize, v14);
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v16 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
    v17 = v16;
    qmemcpy(v16, "config_access", 13);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
    if ( !v18 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
    v19 = v18;
    *(_BYTE *)(v18 + 4) = 114;
    *(_DWORD *)v18 = 1869771365;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v20 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
    if ( !v20 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
    v21 = v20;
    v20[2] = 0x968FE5BBAFE895B3LL;
    v20[1] = 0xE6A097E6206C6D6FLL;
    *v20 = 0x742E6769666E6F63LL;
    *(_QWORD *)v666 = v672;
    *(_QWORD *)&v666[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v612, &unk_1017C010F, v666);
    v611[9] = v612[0];
    v611[10] = v612[1];
    v611[11] = v612[2];
    v611[0] = 13;
    v611[1] = v17;
    v611[2] = 13;
    v611[3] = 5;
    v611[4] = v19;
    v611[5] = 5;
    v611[6] = 24;
    v611[7] = v21;
    v611[8] = 24;
    LOBYTE(v611[12]) = 0;
    if ( (v672[0] & 3) != 1 )
      goto LABEL_25;
    v22 = *(_QWORD *)v672 - 1LL;
    v23 = *(_QWORD *)(*(_QWORD *)v672 - 1LL);
    v24 = *(_QWORD *)(*(_QWORD *)v672 + 7LL);
    if ( *(_QWORD *)v24 )
      (*(void (__fastcall **)(__int64))v24)(v23);
  }
  else
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v611,
      &unk_1015FD9E5,
      13,
      &unk_1015FDA0D,
      36);
    v25 = f_frsize;
    if ( (f_frsize & 3) != 1 )
    {
      v677 = nullptr;
      goto LABEL_26;
    }
    v22 = f_frsize - 1;
    v23 = *(_QWORD *)(f_frsize - 1);
    v24 = *(_QWORD *)(v25 + 7);
    if ( *(_QWORD *)v24 )
      (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v25 - 1));
  }
  v26 = *(_QWORD *)(v24 + 8);
  if ( v26 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v26, *(_QWORD *)(v24 + 16));
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8);
LABEL_25:
  v677 = nullptr;
LABEL_26:
  qmemcpy(v605, v611, sizeof(v605));
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v606, v612);
  v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3016, 8);
  if ( !v27 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 3016);
  v28 = v676[2].i64[1];
  v635 = v676[2].i64[0];
  v636 = v28;
  v684 = v27;
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, v635, v28);
  v29 = __dst[0].f_bsize;
  v30 = *(_OWORD *)&__dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v29 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, *((_QWORD *)&v30 + 1));
    v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( !v31 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
    v32 = v31;
    qmemcpy(v31, "auth_integrity", 14);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
    v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v33 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
    v34 = v33;
    *(_DWORD *)((char *)v33 + 3) = 1735289198;
    *v33 = 1852989815;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v35 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    v36 = v35;
    *(_QWORD *)(v35 + 8) = 0x98ADE58DB8E4206ELL;
    *(_QWORD *)v35 = 0x6F736A2E68747561LL;
    *(_DWORD *)(v35 + 15) = -1466112616;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
    v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1);
    if ( !v37 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 72);
    v38 = v37;
    memcpy(v37, &unk_1015FCC6F, 0x48u);
    v651[0] = 14;
    v651[1] = v32;
    v651[2] = 14;
    v651[3] = 7;
    v651[4] = v34;
    v651[5] = 7;
    v651[6] = 19;
    v651[7] = v36;
    v651[8] = 19;
    v651[9] = 72;
    v651[10] = v38;
    v651[11] = 72;
    LOBYTE(v651[12]) = 1;
    v39 = v682;
    goto LABEL_110;
  }
  v40 = v635;
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v666, v635, v636);
  v41 = *(_QWORD *)v666;
  if ( *(_QWORD *)v666 == 0x8000000000000000LL )
  {
    *(_QWORD *)v648 = *(_QWORD *)&v666[8];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v666, v40);
    v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( !v42 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
    v43 = v42;
    qmemcpy(v42, "auth_integrity", 14);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
    if ( !v44 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
    v45 = v44;
    *(_BYTE *)(v44 + 4) = 114;
    *(_DWORD *)v44 = 1869771365;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v46 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
    if ( !v46 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
    v47 = v46;
    *(_QWORD *)((char *)v46 + 14) = 0x968FE5BBAFE895B3LL;
    v46[1] = 0x95B3E6A097E6206ELL;
    *v46 = 0x6F736A2E68747561LL;
    *(_QWORD *)v672 = v648;
    *(_QWORD *)&v672[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9036, v672);
    *(_OWORD *)&v651[9] = *(_OWORD *)&__dst[0].f_bsize;
    v651[11] = *(_QWORD *)&__dst[0].f_blocks;
    v651[0] = 14;
    v651[1] = v43;
    v651[2] = 14;
    v651[3] = 5;
    v651[4] = v45;
    v651[5] = 5;
    v651[6] = 22;
    v651[7] = v47;
    v651[8] = 22;
    LOBYTE(v651[12]) = 1;
    if ( (v648[0] & 3) == 1 )
    {
      v48 = *(_QWORD *)v648 - 1LL;
      v49 = *(_QWORD *)(*(_QWORD *)v648 - 1LL);
      v50 = *(_QWORD *)(*(_QWORD *)v648 + 7LL);
      if ( *(_QWORD *)v50 )
        (*(void (__fastcall **)(__int64))v50)(v49);
      v51 = *(_QWORD *)(v50 + 8);
      if ( v51 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v51, *(_QWORD *)(v50 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8);
    }
    v39 = v682;
    goto LABEL_110;
  }
  v52 = *(_QWORD *)&v666[8];
  v53 = *(_QWORD *)&v666[16];
  *((_QWORD *)&v682 + 1) = *(_QWORD *)&v666[8];
  v54 = *(_QWORD *)&v666[16];
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v666[8], *(_QWORD *)&v666[16]);
  if ( !v55 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v54);
    v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( !v62 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
    v63 = v62;
    qmemcpy(v62, "auth_integrity", 14);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
    v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
    if ( !v64 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
    v65 = v64;
    *(_BYTE *)(v64 + 4) = 114;
    *(_DWORD *)v64 = 1869771365;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v66 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
    if ( !v66 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
    v67 = v66;
    v66[1] = 0xBAA9E7BAB8E4206ELL;
    *v66 = 0x6F736A2E68747561LL;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(16, 1);
    v68 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1);
    if ( !v68 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48);
    v68[5] = 0x839DE6B489E9B8B8LL;
    v68[4] = 0xE5A3ADE695B3E6A0LL;
    v68[3] = 0x97E6207865646F43LL;
    v68[2] = 0x8CBCEFBAA9E785B8LL;
    v68[1] = 0xE6ABA2E8B9AEE585LL;
    *v68 = 0x86E5B6BBE48796E6LL;
    v651[0] = 14;
    v651[1] = v63;
    v651[2] = 14;
    v651[3] = 5;
    v651[4] = v65;
    v651[5] = 5;
    v651[6] = 16;
    v651[7] = v67;
    v651[8] = 16;
    v651[9] = 48;
    v651[10] = v68;
    v651[11] = 48;
    LOBYTE(v651[12]) = 1;
    goto LABEL_108;
  }
  __dst[0].f_bsize = *((_QWORD *)&v682 + 1);
  __dst[0].f_frsize = v53;
  *(_QWORD *)&__dst[0].f_blocks = 0;
  *(_QWORD *)&__dst[0].f_bavail = 0;
  *(_QWORD *)&__dst[0].f_ffree = *((_QWORD *)&v682 + 1);
  __dst[0].f_fsid = v53;
  serde_json::de::from_trait::h51e180b4bb6af5e0(v666, __dst);
  if ( v666[0] == 6 )
  {
    *(_QWORD *)v650 = *(_QWORD *)&v666[8];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v666, __dst);
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( !v56 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
    v57 = v56;
    qmemcpy(v56, "auth_integrity", 14);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
    v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
    if ( !v58 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
    v59 = v58;
    *(_BYTE *)(v58 + 4) = 114;
    *(_DWORD *)v58 = 1869771365;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
    if ( !v60 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27);
    v61 = v60;
    *(_QWORD *)(v60 + 16) = 0x9F8DE68FBCE5BCA0LL;
    *(_QWORD *)(v60 + 8) = 0xE6204E4F534A206ELL;
    *(_QWORD *)v60 = 0x6F736A2E68747561LL;
    *(_DWORD *)(v60 + 23) = -1885477473;
    *(_QWORD *)v648 = v650;
    *(_QWORD *)&v648[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF93C, v648);
    *(_OWORD *)&v651[9] = *(_OWORD *)&__dst[0].f_bsize;
    v651[11] = *(_QWORD *)&__dst[0].f_blocks;
    v651[0] = 14;
    v651[1] = v57;
    v651[2] = 14;
    v651[3] = 5;
    v651[4] = v59;
    v651[5] = 5;
    v651[6] = 27;
    v651[7] = v61;
    v651[8] = 27;
    LOBYTE(v651[12]) = 1;
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v650);
    goto LABEL_108;
  }
  *(_QWORD *)&v672[24] = *(_QWORD *)&v666[24];
  *(_QWORD *)&v672[16] = *(_QWORD *)&v666[16];
  *(_OWORD *)v672 = *(_OWORD *)v666;
  switch ( v666[0] )
  {
    case 0:
      LOBYTE(__dst[0].f_bsize) = 0;
      break;
    case 1:
    case 2:
      *(_QWORD *)&__dst[0].f_bavail = *(_QWORD *)&v672[24];
      *(_QWORD *)&__dst[0].f_blocks = *(_QWORD *)&v672[16];
      *(_OWORD *)&__dst[0].f_bsize = *(_OWORD *)v672;
      break;
    case 3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
        &__dst[0].f_frsize,
        &v672[8]);
      LOBYTE(__dst[0].f_bsize) = 3;
      break;
    case 4:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
        &__dst[0].f_frsize,
        &v672[8]);
      LOBYTE(__dst[0].f_bsize) = 4;
      break;
    case 5:
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
        &__dst[0].f_frsize,
        &v672[8]);
      LOBYTE(__dst[0].f_bsize) = 5;
      break;
  }
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h5f0f946ee36a0d17(v666);
  v69 = *(_QWORD *)v666;
  if ( *(_QWORD *)v666 == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v666[8]);
  }
  else
  {
    memcpy(&__dst[0].f_frsize, &v666[8], 0xA8u);
    __dst[0].f_bsize = *(_QWORD *)v666;
    v70 = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(__dst);
    if ( v69 != 0x8000000000000000LL && v69 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].f_frsize, v69, 1);
    if ( *(_QWORD *)&__dst[0].f_bavail != 0x8000000000000000LL && *(_QWORD *)&__dst[0].f_bavail )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[0].f_ffree, *(_QWORD *)&__dst[0].f_bavail, 1);
    if ( __dst[0].f_flag != 0x8000000000000000LL && __dst[0].f_flag )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].f_namemax, __dst[0].f_flag, 1);
    if ( __dst[1].f_frsize != 0x8000000000000000LL && __dst[1].f_frsize )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[1].f_blocks, __dst[1].f_frsize, 1);
    if ( *(_QWORD *)&__dst[1].f_ffree != 0x8000000000000000LL && *(_QWORD *)&__dst[1].f_ffree )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1].f_fsid, *(_QWORD *)&__dst[1].f_ffree, 1);
    if ( __dst[1].f_namemax != 0x8000000000000000LL && __dst[1].f_namemax )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2].f_bsize, __dst[1].f_namemax, 1);
    if ( *(_QWORD *)&__dst[2].f_blocks != 0x8000000000000000LL && *(_QWORD *)&__dst[2].f_blocks )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[2].f_bavail, *(_QWORD *)&__dst[2].f_blocks, 1);
    if ( v70 )
    {
      v71 = 54;
      v72 = &unk_1015FCD8D;
      goto LABEL_86;
    }
  }
  v73 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v672, "/tokens/access_tokenOPENAI_API_KEY", 20);
  v670 = &v651[11];
  v671 = &v651[10];
  v674 = &v651[9];
  v683 = &v651[5];
  v673 = &v651[4];
  if ( !v73 || *(_BYTE *)v73 != 3 || (v74 = *(_QWORD *)(v73 + 24)) == 0 )
  {
    v85 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "OPENAI_API_KEY",
            14,
            v672);
    if ( !v85
      || *(_BYTE *)v85 != 3
      || *(_QWORD *)(v85 + 24) <= 2u
      || **(_WORD **)(v85 + 16) ^ 0x6B73 | *(unsigned __int8 *)(*(_QWORD *)(v85 + 16) + 2LL) ^ 0x2D )
    {
      v669 = &v651[6];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("OPENAI_API_KEY", 14);
      v86 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
      if ( v86 )
      {
        v87 = v86;
        qmemcpy(v86, "auth_integrity", 14);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
        v88 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
        if ( !v88 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
        v668 = &v651[7];
        v667 = &v651[8];
        *(_BYTE *)(v88 + 4) = 114;
        v681 = v88;
        *(_DWORD *)v88 = 1869771365;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
        v89 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1);
        if ( !v89 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29);
        v79 = v89;
        *(_QWORD *)((char *)v89 + 21) = 0xBAA9E7BAB8E4206ELL;
        v89[2] = 0xE4206E656B6F745FLL;
        qmemcpy(v89, "auth.json access", 16);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(29, 1);
        v82 = 97;
        v90 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(97, 1);
        if ( !v90 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 97);
        v81 = (__int64)v90;
        memcpy(v90, &unk_1015FCCEA, 0x61u);
        v651[0] = 14;
        v651[1] = v87;
        v651[2] = 14;
        v651[3] = 5;
        v83 = 29;
        v84 = 5;
        goto LABEL_106;
      }
      goto LABEL_861;
    }
    v71 = 36;
    v72 = &unk_1015FCD4B;
LABEL_86:
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v651,
      &anon_92869709a5e99ce1936aa4e326b6c562_374,
      14,
      v72,
      v71);
LABEL_107:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v672);
    goto LABEL_108;
  }
  v681 = *(_QWORD *)(v73 + 16);
  v75 = v681;
  if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_known_placeholder_token::h0dfcb00f92fc875c(
                          v681,
                          v74) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v74);
    v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( v76 )
    {
      v77 = (unsigned __int64)v76;
      qmemcpy(v76, "auth_integrity", 14);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
      v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v78 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      v79 = (_QWORD *)v78;
      *(_BYTE *)(v78 + 4) = 114;
      *(_DWORD *)v78 = 1869771365;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
      v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1);
      if ( !v80 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35);
      v81 = v80;
      *(_QWORD *)(v80 + 24) = 0x8DBDE4A08DE5BAB8LL;
      *(_QWORD *)(v80 + 16) = 0xE4206E656B6F745FLL;
      qmemcpy((void *)v80, "auth.json access", 16);
      *(_DWORD *)(v80 + 31) = -1498617971;
      __dst[0].f_bsize = v681;
      __dst[0].f_frsize = v681 + v74;
      *(_QWORD *)&__dst[0].f_blocks = 20;
      _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hd906709289eb08f4(
        v666,
        __dst);
      *(_QWORD *)v648 = v666;
      *(_QWORD *)&v648[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF8E0, v648);
      v681 = v77;
      if ( *(_QWORD *)v666 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v666[8], *(_QWORD *)v666, 1);
      v670 = &v651[8];
      v671 = &v651[7];
      v674 = &v651[6];
      v667 = &v651[5];
      v668 = &v651[4];
      v669 = &v651[3];
      v683 = &v651[2];
      v673 = &v651[1];
      *(_OWORD *)&v651[9] = *(_OWORD *)&__dst[0].f_bsize;
      v651[11] = *(_QWORD *)&__dst[0].f_blocks;
      v651[0] = 14;
      v82 = 35;
      v83 = 5;
      v84 = 14;
LABEL_106:
      *v673 = v681;
      *v683 = v84;
      *v669 = v83;
      *v668 = v79;
      *v667 = v83;
      *v674 = v82;
      *v671 = v81;
      *v670 = v82;
      LOBYTE(v651[12]) = 1;
      goto LABEL_107;
    }
    goto LABEL_861;
  }
  v142 = v681;
  if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_plausible_jwt::hcb88bef805a6093d(v681, v74) )
  {
    v669 = &v651[6];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v142, v74);
    v298 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( v298 )
    {
      v299 = v298;
      qmemcpy(v298, "auth_integrity", 14);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
      v300 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v300 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
      v668 = &v651[7];
      v667 = &v651[8];
      *(_DWORD *)((char *)v300 + 3) = 1735289198;
      v681 = (unsigned __int64)v300;
      *v300 = 1852989815;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v301 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1);
      if ( !v301 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35);
      v79 = (_QWORD *)v301;
      *(_QWORD *)(v301 + 24) = 0x82BCE58FBCE5BCA0LL;
      *(_QWORD *)(v301 + 16) = 0xE6206E656B6F745FLL;
      qmemcpy((void *)v301, "auth.json access", 16);
      *(_DWORD *)(v301 + 31) = -1195842174;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(35, 1);
      v82 = 58;
      v302 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1);
      if ( !v302 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58);
      v81 = v302;
      *(_QWORD *)(v302 + 48) = 0xE6A1AFE7ABA2E896LL;
      *(_QWORD *)(v302 + 40) = 0x88E68F9DE59F8DE6LL;
      *(_QWORD *)(v302 + 32) = 0xB2B7E5BD83E8AF8FLL;
      *(_QWORD *)(v302 + 24) = 0xE58CBCEF54574A20LL;
      *(_QWORD *)(v302 + 16) = 0x849AE78895E6899CLL;
      *(_QWORD *)(v302 + 8) = 0xE6AF98E68F83E58DLL;
      *(_QWORD *)v302 = 0xB8E4206E656B6F74LL;
      *(_WORD *)(v302 + 56) = -18028;
      v651[0] = 14;
      v651[1] = v299;
      v651[2] = 14;
      v651[3] = 7;
      v83 = 35;
      v84 = 7;
      goto LABEL_106;
    }
LABEL_861:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
  }
  codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
    v651,
    &anon_92869709a5e99ce1936aa4e326b6c562_374,
    14,
    &unk_1015FCD74,
    22);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v672);
LABEL_108:
  v39 = v682;
  if ( v41 )
  {
    v91 = v682;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v682 + 1), v41, 1);
    v39 = v91;
  }
LABEL_110:
  qmemcpy(v604, v605, sizeof(v604));
  v92 = v677;
  codexmate_lib::core::relay::codex_diagnostic::check_config_toml_syntax::ha7a46b071f53d04b(
    (__int64)v603,
    (__int64)v677,
    v39);
  v93 = &v629[72];
  BYTE8(v682) = *(_BYTE *)(v686 + 292);
  if ( !BYTE8(v682) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v603, v92);
    v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( v99 )
    {
      v100 = v99;
      qmemcpy(v99, "proxy_running", 13);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
      v101 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v101 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
      v102 = v101;
      *v101 = 27503;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
      v103 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1);
      if ( !v103 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54);
      *(_QWORD *)((char *)v103 + 46) = 0x89BCEF8BB5E680A3LL;
      v103[5] = 0x80A3E687BFE8B3B7LL;
      v103[4] = 0xE88CBCEFA894E7AFLL;
      v103[3] = 0x90E5AA9CE6B194E7LL;
      v103[2] = 0xAFB7E8BD83E8BA99LL;
      v103[1] = 0xE688BCEF8690E7A3LL;
      *v103 = 0xBBE4B09CE5AC9CE6LL;
      *(_QWORD *)v629 = 13;
      *(_QWORD *)&v629[8] = v100;
      *(_QWORD *)&v629[16] = 13;
      *(_QWORD *)&v629[24] = 2;
      *(_QWORD *)&v629[32] = v102;
      *(_QWORD *)&v629[40] = 2;
      *(_QWORD *)&v629[48] = 54;
      *(_QWORD *)&v629[56] = v103;
      *(_QWORD *)&v629[64] = 54;
      goto LABEL_119;
    }
LABEL_806:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
  }
  v94 = *(unsigned __int8 *)(v686 + 122);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v603, v92);
  v95 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  v96 = v95;
  if ( (_BYTE)v94 )
  {
    if ( v95 )
    {
      qmemcpy(v95, "proxy_running", 13);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
      v97 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v97 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
      v98 = v97;
      *v97 = 27503;
      *(_QWORD *)v666 = v686 + 120;
      *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF8C6, v666);
      *(_QWORD *)v629 = 13;
      *(_QWORD *)&v629[8] = v96;
      *(_QWORD *)&v629[16] = 13;
      *(_QWORD *)&v629[24] = 2;
      *(_QWORD *)&v629[32] = v98;
      *(_QWORD *)&v629[40] = 2;
      *(_OWORD *)&v629[48] = *(_OWORD *)&__dst[0].f_bsize;
      *(_QWORD *)&v629[64] = *(_QWORD *)&__dst[0].f_blocks;
LABEL_119:
      v94 = 0x8000000000000000LL;
      goto LABEL_131;
    }
    goto LABEL_806;
  }
  if ( !v95 )
    goto LABEL_806;
  qmemcpy(v95, "proxy_running", 13);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
  v104 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v104 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
  *((_BYTE *)v104 + 4) = 114;
  v683 = v104;
  *(_DWORD *)v104 = 1869771365;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
  v105 = 21;
  v106 = 1;
  v107 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
  if ( !v107 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21);
  v108 = v107;
  *(_QWORD *)((char *)v107 + 13) = 0x8CA1E890BFE8AA9CLL;
  v107[1] = 0xE8AA9CE68690E7A3LL;
  *v107 = 0xBBE4B09CE5AC9CE6LL;
  if ( *(_QWORD *)(v686 + 96) == 0x8000000000000000LL )
  {
    v109 = 0x8000000000000000LL;
  }
  else
  {
    v106 = v686 + 96;
    v105 = (__int64)__dst;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v686 + 96);
    v673 = (_QWORD *)__dst[0].f_frsize;
    v109 = __dst[0].f_bsize;
    v94 = *(_QWORD *)&__dst[0].f_blocks;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v105, v106);
  v110 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1);
  if ( !v110 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38);
  *(_QWORD *)((char *)v110 + 30) = 0xB7B5E8898BE6A88ALL;
  v110[3] = 0xA88AE5AA87E88690LL;
  v110[2] = 0xE7A3BBE4A9AEE820LL;
  v110[1] = 0x694D614D694120AFLL;
  *v110 = 0x90E58D87E9B7AFE8LL;
  if ( v109 == 0x8000000000000000LL )
  {
    v94 = 38;
    v111 = v110;
    v109 = 38;
    v112 = v683;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, 38, 1);
    v112 = v683;
    v111 = v673;
  }
  v93 = &v629[88];
  *(_QWORD *)v629 = 13;
  *(_QWORD *)&v629[8] = v96;
  *(_QWORD *)&v629[16] = 13;
  *(_QWORD *)&v629[24] = 5;
  *(_QWORD *)&v629[32] = v112;
  *(_QWORD *)&v629[40] = 5;
  *(_QWORD *)&v629[48] = 21;
  *(_QWORD *)&v629[56] = v108;
  *(_QWORD *)&v629[64] = 21;
  *(_QWORD *)&v629[72] = v109;
  *(_QWORD *)&v629[80] = v111;
LABEL_131:
  *(_QWORD *)v93 = v94;
  v629[96] = 0;
  v113 = v677;
  v114 = v682;
  codexmate_lib::core::relay::codex_diagnostic::check_config_third_party::h0fff69e9ac3abe91(
    (__int64)v602,
    (__int64)v677,
    v682,
    (__int64 *)&v613);
  v115 = BYTE8(v682);
  codexmate_lib::core::relay::codex_diagnostic::check_config_profile_conflict::h6d9e2a9aff7b2558(
    v601,
    v113,
    v114,
    BYTE8(v682));
  v116 = v686;
  codexmate_lib::core::relay::codex_diagnostic::check_config_stale::hd929a92a875899c8((__m128i *)v600, v113, v114, v686);
  codexmate_lib::core::relay::codex_diagnostic::check_router_http_contract::h1f5d10a08e55f54d(v599, v113, v114, v116);
  v117 = (_QWORD *)(BYTE8(v682) ^ 1u);
  codexmate_lib::core::relay::invariants::verify_invariants_with_depth::h960ecc8c9694ee1f(
    v648,
    v676,
    BYTE8(v682) ^ 1,
    0);
  f_namemax = __dst;
  codexmate_lib::core::relay::codex_diagnostic::check_config_stale::hd929a92a875899c8(
    (__m128i *)__dst,
    v677,
    v682,
    v686);
  if ( __dst[0].f_fsid != 2 )
  {
    LODWORD(v114) = 0;
    v119 = __dst[0].f_bsize;
    if ( !__dst[0].f_bsize )
      goto LABEL_136;
    goto LABEL_135;
  }
  LOBYTE(v114) = **(_WORD **)&__dst[0].f_ffree == 27503;
  v119 = __dst[0].f_bsize;
  if ( __dst[0].f_bsize )
  {
LABEL_135:
    f_namemax = (statvfs *)__dst[0].f_frsize;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].f_frsize, v119, 1);
  }
LABEL_136:
  if ( *(_QWORD *)&__dst[0].f_bavail )
  {
    f_namemax = *(statvfs **)&__dst[0].f_ffree;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[0].f_ffree, *(_QWORD *)&__dst[0].f_bavail, 1);
  }
  if ( __dst[0].f_flag )
  {
    f_namemax = (statvfs *)__dst[0].f_namemax;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].f_namemax, __dst[0].f_flag, 1);
  }
  v120 = __dst[1].f_frsize;
  if ( __dst[1].f_frsize != 0x8000000000000000LL && __dst[1].f_frsize )
  {
    f_namemax = *(statvfs **)&__dst[1].f_blocks;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[1].f_blocks, __dst[1].f_frsize, 1);
  }
  v673 = (_QWORD *)v115;
  LODWORD(v670) = v114;
  if ( (_BYTE)v114 )
  {
    v121 = *(_QWORD *)&v648[16];
    if ( !*(_QWORD *)&v648[16] )
      goto LABEL_192;
    goto LABEL_150;
  }
  v121 = *(_QWORD *)&v648[16];
  if ( *(_QWORD *)&v648[16] )
  {
    v122 = *(_QWORD *)&v648[8];
    v123 = (_QWORD *)(*(_QWORD *)&v648[8] + 32LL);
    v124 = 0;
    while ( *((_BYTE *)v123 - 8) )
    {
      ++v124;
      v123 += 4;
      if ( *(_QWORD *)&v648[16] == v124 )
        goto LABEL_150;
    }
    v120 = *(v123 - 4);
    if ( v120 )
    {
      f_namemax = (statvfs *)*(v123 - 3);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(f_namemax, v120, 1);
    }
    v683 = v117;
    if ( v124 + 1 < v121 )
    {
      v143 = v121 + ~v124;
      do
      {
        if ( *((_BYTE *)v123 + 24) )
        {
          v144 = 32 * v124;
          *(_QWORD *)(v122 + v144 + 24) = v123[3];
          *(_QWORD *)(v122 + v144 + 16) = v123[2];
          v145 = *v123;
          *(_QWORD *)(v122 + v144 + 8) = v123[1];
          *(_QWORD *)(v122 + v144) = v145;
          ++v124;
        }
        else
        {
          v120 = *v123;
          if ( *v123 )
          {
            f_namemax = (statvfs *)v123[1];
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(f_namemax, v120, 1);
          }
        }
        v123 += 4;
        --v143;
      }
      while ( v143 );
    }
    *(_QWORD *)&v648[16] = v124;
    v121 = v124;
    v115 = (unsigned __int64)v673;
    v117 = v683;
    LOBYTE(v114) = (_BYTE)v670;
    if ( v124 )
    {
LABEL_150:
      v683 = v117;
      v125 = *(_QWORD *)&v648[8];
      v126 = (_QWORD *)(*(_QWORD *)&v648[8] + 32LL);
      v114 = 0;
      while ( *((_BYTE *)v126 - 8) != 4 )
      {
        ++v114;
        v126 += 4;
        if ( v121 == v114 )
        {
          v127 = v683;
LABEL_154:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(f_namemax, v120);
          v128 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
          if ( !v128 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
          qmemcpy(v128, "router_postcondition", 20);
          v670 = v128;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1);
          v129 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2LL * (_QWORD)v127 + 5, 1);
          if ( !v129 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2LL * (_QWORD)v127 + 5);
          v130 = "warning";
          if ( BYTE8(v682) )
            v130 = "error";
          v671 = v129;
          memcpy(v129, v130, 2LL * (_QWORD)v127 + 5);
          *(_QWORD *)v672 = v121;
          *(_QWORD *)v666 = v672;
          *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          v683 = (_QWORD *)(2LL * (_QWORD)v127 + 5);
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C01D0, v666);
          v681 = __dst[0].f_frsize;
          v674 = (_QWORD *)__dst[0].f_bsize;
          v131 = *(_QWORD **)&__dst[0].f_blocks;
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heb7e760b39b3b7cc(
            v666,
            v125,
            v125 + 32 * v121);
          v669 = v131;
          v132 = *(_QWORD *)&v666[8];
          v133 = *(_QWORD *)&v666[16];
          alloc::str::join_generic_copy::heca7a5e86402c6b6(
            __dst,
            *(_QWORD *)&v666[8],
            *(_QWORD *)&v666[16],
            &unk_1015FD2A7,
            3);
          *(_QWORD *)&v672[16] = *(_QWORD *)&__dst[0].f_blocks;
          *(_OWORD *)v672 = *(_OWORD *)&__dst[0].f_bsize;
          if ( v133 )
          {
            v134 = (_QWORD *)(v132 + 8);
            do
            {
              v135 = *(v134 - 1);
              if ( v135 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v134, v135, 1);
              v134 += 3;
              --v133;
            }
            while ( v133 );
          }
          if ( *(_QWORD *)v666 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, 24LL * *(_QWORD *)v666, 8);
          *(_OWORD *)&v610[9] = *(_OWORD *)v672;
          v610[11] = *(_QWORD *)&v672[16];
          v610[0] = 20;
          v610[1] = v670;
          v610[2] = 20;
          v610[3] = v683;
          v610[4] = v671;
          v610[5] = v683;
          v610[6] = v674;
          v610[7] = v681;
          v610[8] = v669;
          LOBYTE(v610[12]) = 1;
          v136 = (_QWORD *)(v125 + 8);
          LODWORD(v115) = (_DWORD)v673;
          do
          {
            v137 = *(v136 - 1);
            if ( v137 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v136, v137, 1);
            v136 += 4;
            --v121;
          }
          while ( v121 );
          goto LABEL_199;
        }
      }
      v120 = *(v126 - 4);
      if ( v120 )
      {
        f_namemax = (statvfs *)*(v126 - 3);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(f_namemax, v120, 1);
      }
      if ( v114 + 1 < v121 )
      {
        v138 = v121 + ~v114;
        do
        {
          if ( *((_BYTE *)v126 + 24) == 4 )
          {
            v120 = *v126;
            if ( *v126 )
            {
              f_namemax = (statvfs *)v126[1];
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(f_namemax, v120, 1);
            }
          }
          else
          {
            v139 = 32 * v114;
            *(_QWORD *)(v125 + v139 + 24) = v126[3];
            *(_QWORD *)(v125 + v139 + 16) = v126[2];
            v140 = *v126;
            *(_QWORD *)(v125 + v139 + 8) = v126[1];
            *(_QWORD *)(v125 + v139) = v140;
            ++v114;
          }
          v126 += 4;
          --v138;
        }
        while ( v138 );
      }
      *(_QWORD *)&v648[16] = v114;
      v121 = v114;
      v141 = v114 == 0;
      v115 = (unsigned __int64)v673;
      v127 = v683;
      LOBYTE(v114) = (_BYTE)v670;
      if ( !v141 )
        goto LABEL_154;
    }
  }
LABEL_192:
  v146 = &unk_1015FDB20;
  if ( BYTE8(v682) )
    v146 = &unk_1015FDB08;
  v147 = 71;
  if ( (_BYTE)v114 )
    v147 = v115 ^ 0x19;
  v148 = &unk_1015FDB39;
  if ( (_BYTE)v114 )
    v148 = v146;
  codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
    v610,
    &anon_92869709a5e99ce1936aa4e326b6c562_607,
    20,
    v148,
    v147);
LABEL_199:
  if ( *(_QWORD *)v648 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v648[8], 32LL * *(_QWORD *)v648, 8);
  v149 = v676;
  codexmate_lib::core::relay::codex_diagnostic::check_takeover_backup_orphan::h805b70fc7987ba8a(
    v598,
    v676,
    (unsigned int)v115);
  v150 = v149[36].i64[1];
  v151 = (_QWORD *)v149[37].i64[0];
  codexmate_lib::core::relay::codex_diagnostic::check_catalog_path_validity::hd7a64d474efe9821(
    v597,
    v677,
    v682,
    v150,
    v151,
    (unsigned int)v115);
  codexmate_lib::core::relay::codex_diagnostic::check_router_unlock_auth_residue::he3db2ed88eec02b5(
    v596,
    v149,
    (unsigned int)v115);
  codexmate_lib::core::relay::codex_diagnostic::check_db_orphan_providers::h2885566813afde9a(
    (__int64)v595,
    (__int64)v149,
    (__int64)&v631);
  codexmate_lib::core::relay::codex_diagnostic::check_thread_missing_rollouts::h4f6480d24cccd89e(v594, v149);
  codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency::h1a6e8cd0b3bb277e(
    v593,
    v149,
    (unsigned int)v115);
  codexmate_lib::core::relay::codex_diagnostic::check_thread_model_catalog_consistency::h789673723c3e4b34(
    v592,
    v149,
    (unsigned int)v115);
  codexmate_lib::core::relay::codex_diagnostic::check_thread_poisoned_instructions::hdfb6c4ad26943df3(
    (__int64)v591,
    (__int64 (__fastcall **)())v149);
  codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h1ff1735494c71606(
    v590,
    v149,
    (unsigned int)v115);
  std::path::Path::_join::hb1a495d4f06b13b8(__dst, v150, v151, &unk_1015FCB64, 24);
  v152 = __dst[0].f_frsize;
  std::path::Path::_join::hb1a495d4f06b13b8(v666, __dst[0].f_frsize, *(_QWORD *)&__dst[0].f_blocks, &unk_1015FCEA6, 12);
  if ( __dst[0].f_bsize )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, __dst[0].f_bsize, 1);
  v153 = *(_QWORD *)&v666[8];
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, *(_QWORD *)&v666[8], *(_QWORD *)&v666[16]);
  v154 = __dst[0].f_bsize;
  v155 = *(_OWORD *)&__dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  v141 = (v154 | BYTE8(v682)) == 0;
  BYTE8(v682) |= v154;
  v683 = v151;
  if ( v141 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, *((_QWORD *)&v155 + 1));
    v163 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v163 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
    v164 = v163;
    v165 = v150;
    qmemcpy(v163, "residual_manifest", 17);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
    v166 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v166 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
    v167 = v166;
    *(_DWORD *)((char *)v166 + 3) = 1735289198;
    *v166 = 1852989815;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v168 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1);
    if ( !v168 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43);
    v169 = v168;
    *(_QWORD *)(v168 + 32) = 0x92BDE5AA9CE62074LL;
    *(_QWORD *)(v168 + 24) = 0x736566696E616D20LL;
    *(_QWORD *)(v168 + 16) = 0xBBA7E781BFE886BDLL;
    *(_QWORD *)(v168 + 8) = 0xE4AD97E9B385E5B2LL;
    *(_QWORD *)v168 = 0xB7E5B194E7AFB7E8LL;
    *(_DWORD *)(v168 + 39) = -1549670766;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(43, 1);
    v170 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1);
    if ( !v170 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51);
    *(_QWORD *)(v170 + 40) = 0x9F8AE58D93E5B1BDLL;
    *(_QWORD *)(v170 + 32) = 0xE58DB8E48E90E586LL;
    *(_QWORD *)(v170 + 24) = 0x90E785B8E68CBCEFLL;
    *(_QWORD *)(v170 + 16) = 0xAD96E6ADB8E4AD97LL;
    *(_QWORD *)(v170 + 8) = 0xE9B385E5A1ACE68ALL;
    *(_QWORD *)v170 = 0xB8E4BD83E8AF8FE5LL;
    *(_DWORD *)(v170 + 47) = -1115428705;
    v609[0] = 17;
    v609[1] = v164;
    v609[2] = 17;
    v609[3] = 7;
    v609[4] = v167;
    v609[5] = 7;
    v609[6] = 43;
    v609[7] = v169;
    v609[8] = 43;
    v609[9] = 51;
    v609[10] = v170;
    v609[11] = 51;
    LOBYTE(v609[12]) = 1;
    v150 = v165;
    v151 = v683;
    v158 = *(_QWORD *)v666;
    if ( *(_QWORD *)v666 )
      goto LABEL_209;
  }
  else
  {
    v156 = 52;
    if ( v154 )
      v156 = 24;
    v157 = &unk_1015FD2C8;
    if ( v154 )
      v157 = &unk_1015FD2AA;
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(v609, "residual_manifest", 17, v157, v156);
    v158 = *(_QWORD *)v666;
    if ( *(_QWORD *)v666 )
LABEL_209:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153, v158, 1);
  }
  std::path::Path::_join::hb1a495d4f06b13b8(__dst, v150, v151, &unk_1015FCB64, 24);
  v159 = __dst[0].f_frsize;
  std::path::Path::_join::hb1a495d4f06b13b8(v672, __dst[0].f_frsize, *(_QWORD *)&__dst[0].f_blocks, &unk_1015FCB7C, 22);
  *((_QWORD *)&v682 + 1) = v150;
  if ( __dst[0].f_bsize )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, __dst[0].f_bsize, 1);
  v160 = *(_QWORD *)&v672[8];
  v161 = *(_QWORD *)&v672[16];
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, *(_QWORD *)&v672[8], *(_QWORD *)&v672[16]);
  v162 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( !v162 )
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, v160, v161);
    v171 = __dst[0].f_bsize;
    if ( __dst[0].f_bsize == 0x8000000000000000LL )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v160);
      v172 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
      if ( !v172 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
      v173 = v172;
      qmemcpy(v172, "residual_cache", 14);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
      v174 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v174 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
      v175 = v174;
      *(_DWORD *)((char *)v174 + 3) = 1735289198;
      *v174 = 1852989815;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v176 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
      if ( !v176 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
      *(_QWORD *)(v176 + 24) = 0xAFE895B3E6A097E6LL;
      *(_QWORD *)(v176 + 16) = 0xB6BBE48796E62065LL;
      qmemcpy((void *)v176, "relay-state-cach", 16);
      *(_DWORD *)(v176 + 32) = -1768954437;
      v622[0] = 14;
      v622[1] = v173;
      v622[2] = 14;
      v622[3] = 7;
      v622[4] = v175;
      v622[5] = 7;
      v622[6] = 36;
      v622[7] = v176;
      v622[8] = 36;
      v622[9] = 0x8000000000000000LL;
      LOBYTE(v622[12]) = 1;
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4(
        0x8000000000000000LL,
        __dst[0].f_frsize);
      goto LABEL_271;
    }
    *(_OWORD *)&__dst[0].f_bsize = *(_OWORD *)&__dst[0].f_frsize;
    *(_QWORD *)&__dst[0].f_blocks = 0;
    *(_QWORD *)&__dst[0].f_bavail = 0;
    v670 = (_QWORD *)__dst[0].f_bsize;
    *(_OWORD *)&__dst[0].f_ffree = *(_OWORD *)&__dst[0].f_bsize;
    serde_json::de::from_trait::h51e180b4bb6af5e0(v666, __dst);
    if ( v666[0] == 6 )
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v666[8]);
      goto LABEL_268;
    }
    *(_QWORD *)&__dst[0].f_bavail = *(_QWORD *)&v666[24];
    *(_OWORD *)((char *)&__dst[0].f_frsize + 1) = *(_OWORD *)&v666[9];
    *(unsigned __int64 *)((char *)&__dst[0].f_bsize + 1) = *(_QWORD *)&v666[1];
    LOBYTE(__dst[0].f_bsize) = v666[0];
    v177 = 7;
    v178 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_1015FCDFD,
                      7,
                      __dst);
    if ( !v178 )
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
      goto LABEL_268;
    }
    v179 = 0x8000000000000000LL;
    if ( *v178 == 4 )
    {
      v177 = (__int64)(v178 + 8);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(v666, v178 + 8);
      *(_OWORD *)v648 = *(_OWORD *)&v666[8];
      v179 = *(_QWORD *)v666;
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
    if ( v179 == 0x8000000000000000LL )
      goto LABEL_268;
    v674 = (_QWORD *)v171;
    v180 = *(_QWORD *)&v648[8];
    v671 = *(__int64 **)v648;
    *(_OWORD *)&__dst[0].f_frsize = *(_OWORD *)v648;
    __dst[0].f_bsize = v179;
    v669 = (_QWORD *)v179;
    if ( *(_QWORD *)&v648[8] )
    {
      v181 = 4LL * *(_QWORD *)&v648[8];
      if ( !v633 )
      {
        v193 = v671;
        while ( 1 )
        {
          v177 = 5;
          v194 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "model",
                   5,
                   v193);
          if ( v194 )
          {
            if ( *(_BYTE *)v194 == 3
              && *(_QWORD *)(v194 + 24) >= 0xDu
              && !(**(_QWORD **)(v194 + 16) ^ 0x725F696D616D6961LL
                 | *(_QWORD *)(*(_QWORD *)(v194 + 16) + 5LL) ^ 0x5F79616C65725F69LL) )
            {
              break;
            }
          }
          v193 += 4;
          v181 -= 4;
          if ( !(v181 * 8) )
            goto LABEL_256;
        }
        LODWORD(v681) = 1;
LABEL_257:
        v195 = v180 + 1;
        v196 = v671;
        v197 = v669;
        while ( v195 != 1 )
        {
          --v195;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v196);
          v196 += 4;
        }
        if ( v197 )
        {
          v196 = v671;
          v177 = 32LL * (_QWORD)v197;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v671, 32LL * (_QWORD)v197, 8);
        }
        v171 = (unsigned __int64)v674;
        if ( (_BYTE)v681 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v196, v177);
          v198 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
          if ( !v198 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
          v199 = v198;
          qmemcpy(v198, "residual_cache", 14);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1);
          v200 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v200 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
          v201 = v200;
          *(_DWORD *)((char *)v200 + 3) = 1735289198;
          *v200 = 1852989815;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
          v202 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1);
          if ( !v202 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48);
          v203 = v202;
          v202[5] = 0x72656469766F7270LL;
          v202[4] = 0x20849AE7A499E9A0LL;
          v202[3] = 0x88E5B2B7E586BAE4LL;
          v202[2] = 0xA894E795BCE52065LL;
          qmemcpy(v202, "relay-state-cach", 16);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 1);
          v204 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
          if ( !v204 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42);
          *(_QWORD *)(v204 + 32) = 0xE593BCE7B096E68DLL;
          *(_QWORD *)(v204 + 24) = 0x87E99ABCE4B385E5LL;
          *(_QWORD *)(v204 + 16) = 0x80BCE5B194E7AFB7LL;
          *(_QWORD *)(v204 + 8) = 0xE8A1ACE68BB8E48ELL;
          *(_QWORD *)v204 = 0x90E58690E785B8E6LL;
          *(_WORD *)(v204 + 40) = -26451;
          v622[0] = 14;
          v622[1] = v199;
          v622[2] = 14;
          v622[3] = 7;
          v622[4] = v201;
          v622[5] = 7;
          v622[6] = 48;
          v622[7] = v203;
          v622[8] = 48;
          v622[9] = 42;
          v622[10] = v204;
          v622[11] = 42;
          LOBYTE(v622[12]) = 1;
          goto LABEL_269;
        }
LABEL_268:
        codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
          v622,
          "residual_cache",
          14,
          &unk_1015FCDDF,
          24);
LABEL_269:
        if ( v171 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v670, v171, 1);
        goto LABEL_271;
      }
      v182 = v671;
      v183 = &v671[v181];
      v667 = *((__int64 **)&v631 + 1);
      v618 = v631;
      v668 = (_QWORD *)(v631 - 24);
      do
      {
        v177 = 5;
        v191 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v182);
        if ( v191 )
        {
          if ( *(_BYTE *)v191 == 3 )
          {
            v192 = *(_QWORD *)(v191 + 24);
            if ( v192 >= 0xD )
            {
              v177 = *(_QWORD *)(v191 + 16);
              if ( !(*(_QWORD *)v177 ^ 0x725F696D616D6961LL | *(_QWORD *)(v177 + 5) ^ 0x5F79616C65725F69LL) )
              {
                __s1 = *(void **)(v191 + 16);
                v190 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v634, v177, v192);
                v188 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v190 >> 57), (__m128i)0LL);
                for ( i = 0; ; i += 16 )
                {
                  v184 = (unsigned __int64)v667 & v190;
                  v185 = _mm_loadu_si128((const __m128i *)(v618 + v184));
                  _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v185, v188));
                  if ( (_DWORD)_RAX )
                    break;
LABEL_240:
                  LOBYTE(v177) = 1;
                  LODWORD(v681) = v177;
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v185, (__m128i)-1LL)) )
                    goto LABEL_257;
                  v190 = v184 + i + 16;
                }
                v620 = v184;
                v606 = v188;
                v621 = i;
                v607 = v185;
                while ( 1 )
                {
                  v681 = _RAX;
                  __asm { tzcnt   eax, eax }
                  v187 = -3LL * ((unsigned __int64)v667 & (v184 + _RAX));
                  if ( v192 == v668[v187 + 2] )
                  {
                    v177 = v668[v187 + 1];
                    if ( !memcmp(__s1, (const void *)v177, v192) )
                      break;
                  }
                  _RAX = (unsigned int)(v681 - 1);
                  LOWORD(_RAX) = v681 & (v681 - 1);
                  v184 = v620;
                  v188 = _mm_load_si128(&v606);
                  i = v621;
                  v185 = _mm_load_si128(&v607);
                  if ( !(_WORD)_RAX )
                    goto LABEL_240;
                }
              }
            }
          }
        }
        v182 += 4;
      }
      while ( v182 != v183 );
    }
LABEL_256:
    LODWORD(v681) = 0;
    goto LABEL_257;
  }
  codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
    v622,
    "residual_cache",
    14,
    &unk_1015FCDC4,
    27);
LABEL_271:
  if ( *(_QWORD *)v672 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, *(_QWORD *)v672, 1);
  v205 = v627;
  v206 = v628;
  v207 = (statvfs *)v589;
  v208 = *((_QWORD *)&v682 + 1);
  codexmate_lib::core::relay::codex_diagnostic::check_catalog_integrity::h34bf487dee059d0c(
    (__int64)v589,
    *((__int64 *)&v682 + 1),
    (__int64)v683,
    v686,
    v627,
    v628);
  *(_QWORD *)v672 = 0;
  *(_QWORD *)&v672[8] = 8;
  *(_QWORD *)&v672[16] = 0;
  if ( !v206 )
    goto LABEL_294;
  v209 = 8LL * (_QWORD)v206;
  v210 = 0;
  do
  {
    v211 = v205[v210 / 8];
    if ( *(_BYTE *)(v211 + 228) )
    {
      v207 = __dst;
      codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53(
        __dst,
        v676,
        *(_QWORD *)(v211 + 8),
        *(_QWORD *)(v211 + 16));
      v208 = __dst[0].f_frsize;
      v212 = __dst[0].f_bsize;
      if ( (LOBYTE(__dst[0].f_bsize) | (__dst[0].f_frsize == 0x8000000000000000LL)) == 1
        || !*(_QWORD *)&__dst[0].f_bavail )
      {
        v686 = __dst[0].f_frsize;
        v207 = (statvfs *)v666;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v666, v211 + 24);
        v213 = *(_QWORD *)&v672[16];
        if ( *(_QWORD *)&v672[16] == *(_QWORD *)v672 )
        {
          v207 = (statvfs *)v672;
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v672);
        }
        v214 = *(_QWORD *)&v672[8];
        v215 = 3 * v213;
        *(_QWORD *)(*(_QWORD *)&v672[8] + 8 * v215 + 16) = *(_QWORD *)&v666[16];
        *(_OWORD *)(v214 + 8 * v215) = *(_OWORD *)v666;
        *(_QWORD *)&v672[16] = v213 + 1;
        if ( v212 )
        {
          v208 = v686;
          if ( !v686 )
            goto LABEL_277;
LABEL_276:
          v207 = *(statvfs **)&__dst[0].f_blocks;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[0].f_blocks, v208, 1);
          goto LABEL_277;
        }
        v208 = v686;
        if ( 2 * v686 )
          goto LABEL_276;
      }
      else if ( __dst[0].f_frsize )
      {
        goto LABEL_276;
      }
    }
LABEL_277:
    v210 += 8LL;
  }
  while ( v209 != v210 );
  if ( !*(_QWORD *)&v672[16] )
  {
LABEL_294:
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v608,
      &unk_1015FD010,
      17,
      &unk_1015FBF00,
      16);
    goto LABEL_295;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v207, v208);
  v216 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
  if ( !v216 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
  v217 = v216;
  qmemcpy(v216, "api_key_integrity", 17);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
  v218 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v218 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
  v219 = v218;
  *(_BYTE *)(v218 + 4) = 114;
  *(_DWORD *)v218 = 1869771365;
  *(_QWORD *)v648 = *(_QWORD *)&v672[16];
  *(_QWORD *)v666 = v648;
  *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF9A0, v666);
  v220 = __dst[0].f_frsize;
  v686 = __dst[0].f_bsize;
  v221 = *(_QWORD *)&__dst[0].f_blocks;
  alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, *(_QWORD *)&v672[8], *(_QWORD *)&v672[16], ", ", 2);
  *(_QWORD *)&v666[16] = *(_QWORD *)&__dst[0].f_blocks;
  *(_OWORD *)v666 = *(_OWORD *)&__dst[0].f_bsize;
  *(_QWORD *)v648 = v666;
  *(_QWORD *)&v648[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF9BD, v648);
  if ( *(_QWORD *)v666 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v666[8], *(_QWORD *)v666, 1);
  *(_OWORD *)&v608[9] = *(_OWORD *)&__dst[0].f_bsize;
  v608[11] = *(_QWORD *)&__dst[0].f_blocks;
  v608[0] = 17;
  v608[1] = v217;
  v608[2] = 17;
  v608[3] = 5;
  v608[4] = v219;
  v608[5] = 5;
  v608[6] = v686;
  v608[7] = v220;
  v608[8] = v221;
  LOBYTE(v608[12]) = 0;
LABEL_295:
  v222 = *(_QWORD *)&v672[16];
  if ( *(_QWORD *)&v672[16] )
  {
    v223 = (_QWORD *)(*(_QWORD *)&v672[8] + 8LL);
    do
    {
      v224 = *(v223 - 1);
      if ( v224 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v223, v224, 1);
      v223 += 3;
      --v222;
    }
    while ( v222 );
  }
  if ( *(_QWORD *)v672 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v672[8], 24LL * *(_QWORD *)v672, 8);
  v225 = (signed __int64)v677;
  codexmate_lib::core::relay::codex_diagnostic::check_config_global_validity::h5949efa6748ca09c(
    v588,
    v677,
    v682,
    *((_QWORD *)&v682 + 1),
    v683);
  v226 = codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151();
  v227 = __dst;
  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(__dst, v225);
  v228 = __dst[0].f_bsize;
  if ( __dst[0].f_bsize == 0x8000000000000000LL )
  {
    *(_QWORD *)v649 = 0x8000000000000000LL;
  }
  else
  {
    v229 = __dst[0].f_frsize;
    v227 = (statvfs *)v649;
    v225 = __dst[0].f_frsize;
    codexmate_lib::platform::process::read_macos_bundle_value::h039fd87931802e34(
      (size_t *)v649,
      __dst[0].f_frsize,
      *(__int64 *)&__dst[0].f_blocks,
      (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1187,
      26);
    if ( v228 )
    {
      v227 = (statvfs *)v229;
      v225 = v228;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v228, 1);
    }
  }
  if ( v226 )
  {
    v660 = nullptr;
    __n = 8;
    *(_QWORD *)v662 = 0;
    if ( *(_QWORD *)v649 != 0x8000000000000000LL )
    {
      *(_QWORD *)v666 = v649;
      __dst[0].f_bsize = (unsigned __int64)v666;
      __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_1017C000B, __dst);
      v230 = *(_QWORD *)v662;
      if ( *(void **)v662 == v660 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v660);
      v231 = __n;
      v232 = 3 * v230;
      *(_QWORD *)(__n + 8 * v232 + 16) = *(_QWORD *)v644;
      v233 = __s2;
      *(_QWORD *)(v231 + 8 * v232 + 8) = v643;
      *(_QWORD *)(v231 + 8 * v232) = v233;
      *(_QWORD *)v662 = v230 + 1;
    }
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__dst, "ps-ax-oetime=,comm=", 2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "-ax-oetime=,comm=", 3);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "-oetime=,comm=", 2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "etime=,comm=", 12);
    v234 = (__int64)__dst;
    std::process::Command::output::h737eedd4de2ee22e(v666, __dst);
    if ( *(_QWORD *)v666 == 0x8000000000000000LL )
    {
      if ( (v666[8] & 3) == 1 )
      {
        v235 = *(_QWORD *)&v666[8] - 1LL;
        v236 = *(_QWORD *)(*(_QWORD *)&v666[8] - 1LL);
        v237 = *(_QWORD *)(*(_QWORD *)&v666[8] + 7LL);
        if ( *(_QWORD *)v237 )
          (*(void (__fastcall **)(__int64))v237)(v236);
        v238 = *(_QWORD *)(v237 + 8);
        if ( v238 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v238, *(_QWORD *)(v237 + 16));
        v234 = 24;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, 24, 8);
      }
      v239 = (__int64)__dst;
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(__dst);
      goto LABEL_474;
    }
    *(_QWORD *)&v648[48] = *(_QWORD *)&v666[48];
    *(_QWORD *)&v648[40] = *(_QWORD *)&v666[40];
    *(_QWORD *)&v648[32] = *(_QWORD *)&v666[32];
    *(_QWORD *)&v648[24] = *(_QWORD *)&v666[24];
    *(_QWORD *)&v648[16] = *(_QWORD *)&v666[16];
    v686 = *(_QWORD *)v666;
    *(_OWORD *)v648 = *(_OWORD *)v666;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(__dst);
    *(_QWORD *)&v682 = *(_QWORD *)&v648[8];
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v655, *(_QWORD *)&v648[8], *(_QWORD *)&v648[16]);
    *(_QWORD *)v672 = 0;
    *(_QWORD *)&v672[8] = *(_QWORD *)v656;
    *((_QWORD *)&v682 + 1) = *((_QWORD *)&v655 + 1);
    *(_QWORD *)&v672[16] = *((_QWORD *)&v655 + 1);
    *(_QWORD *)&v672[24] = *(_QWORD *)v656;
    *(_QWORD *)&v672[32] = 0;
    *(_QWORD *)&v672[40] = *(_QWORD *)v656;
    *(_QWORD *)&v672[48] = 0xA0000000ALL;
    v672[56] = 1;
    *(_WORD *)&v672[64] = 0;
    while ( 1 )
    {
      v249 = *(_QWORD *)&v672[16];
      v239 = (__int64)__dst;
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        __dst,
        &v672[16]);
      if ( LODWORD(__dst[0].f_bsize) == 1 )
        break;
      if ( v672[65]
        || (v672[65] = 1,
            v251 = *(_QWORD *)&v672[8] - *(_QWORD *)v672,
            (v672[64] | (*(_QWORD *)&v672[8] != *(_QWORD *)v672)) != 1) )
      {
LABEL_381:
        if ( 2LL * (_QWORD)v655 )
        {
          v239 = *((_QWORD *)&v682 + 1);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v682 + 1), v655, 1);
          v280 = v686;
          if ( v686 )
          {
LABEL_383:
            v239 = v682;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v682, v280, 1);
          }
        }
        else
        {
          v280 = v686;
          if ( v686 )
            goto LABEL_383;
        }
        v234 = *(_QWORD *)&v648[24];
        if ( *(_QWORD *)&v648[24] )
        {
          v239 = *(_QWORD *)&v648[32];
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v648[32], *(_QWORD *)&v648[24], 1);
        }
LABEL_474:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v239, v234);
        v337 = 19;
        v343 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
        if ( v343 )
        {
          v344 = v343;
          qmemcpy(v343, "codex_process_state", 19);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
          v345 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
          if ( !v345 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
          *v345 = 27503;
          v686 = (unsigned __int64)v345;
          if ( *(_QWORD *)v649 == 0x8000000000000000LL )
          {
            *(_QWORD *)v666 = 0;
            *(_QWORD *)&v666[8] = 1;
            *(_QWORD *)&v666[16] = 0;
          }
          else
          {
            *(_OWORD *)v648 = *(_OWORD *)&v649[8];
            *(_QWORD *)v666 = v648;
            *(_QWORD *)&v666[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF55F, v666);
            *(_OWORD *)v666 = *(_OWORD *)&__dst[0].f_bsize;
            *(_QWORD *)&v666[16] = *(_QWORD *)&__dst[0].f_blocks;
          }
          *(_QWORD *)v648 = v666;
          *(_QWORD *)&v648[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C0038, v648);
          if ( *(_QWORD *)v666 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v666[8], *(_QWORD *)v666, 1);
          v346 = *(_OWORD *)&__dst[0].f_bsize;
          v347 = *(_QWORD *)&__dst[0].f_blocks;
          if ( *(_QWORD *)v662 )
          {
            alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, __n, *(_QWORD *)v662, &unk_1015FD582, 3);
            *(_QWORD *)v666 = __dst[0].f_frsize;
            v348 = __dst[0].f_bsize;
            *(_QWORD *)&v666[8] = *(_QWORD *)&__dst[0].f_blocks;
            v349 = *(_QWORD *)v662;
          }
          else
          {
            v349 = 0;
            v348 = 0x8000000000000000LL;
          }
          *(_QWORD *)v630 = 19;
          *(_QWORD *)&v630[8] = v344;
          *(_QWORD *)&v630[16] = 19;
          *(_QWORD *)&v630[24] = 2;
          *(_QWORD *)&v630[32] = v686;
          *(_QWORD *)&v630[40] = 2;
          *(_OWORD *)&v630[48] = v346;
          *(_QWORD *)&v630[64] = v347;
          *(_QWORD *)&v630[72] = v348;
          *(_OWORD *)&v630[80] = *(_OWORD *)v666;
          v630[96] = 0;
          if ( v349 )
          {
            v350 = (_QWORD *)(__n + 8);
            do
            {
              v351 = *(v350 - 1);
              if ( v351 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v350, v351, 1);
              v350 += 3;
              --v349;
            }
            while ( v349 );
          }
          if ( v660 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 24LL * (_QWORD)v660, 8);
          v248 = *(_QWORD *)v649;
          if ( *(_QWORD *)v649 != 0x8000000000000000LL )
            goto LABEL_492;
          goto LABEL_494;
        }
LABEL_811:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v337);
      }
      v252 = *(_QWORD *)&v672[16] + *(_QWORD *)v672;
      if ( v251 )
        goto LABEL_333;
LABEL_339:
      v239 = v252;
      v253 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v252, v251);
      if ( v254 >= 6 )
      {
        v255 = (unsigned __int8 *)(v253 + v254);
        if ( !(*(_DWORD *)(v253 + v254 - 6) ^ 0x646F432F | *(unsigned __int16 *)(v253 + v254 - 2) ^ 0x7865)
          || (v256 = *(_DWORD *)(v255 - 6) ^ 0x646F4320, (v239 = v256 | *((unsigned __int16 *)v255 - 1) ^ 0x7865u) == 0) )
        {
          v257 = 0;
          v239 = 0x100003E00LL;
          v258 = (unsigned __int8 *)v253;
          v259 = 0;
          v260 = 0;
LABEL_344:
          while ( 2 )
          {
            if ( (v260 & 1) != 0 )
            {
              v281 = 0;
LABEL_459:
              if ( (_QWORD)v655 != 0x8000000000000000LL && (_QWORD)v655 )
              {
                v239 = *((_QWORD *)&v655 + 1);
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v655 + 1), v655, 1);
              }
              if ( v686 )
              {
                v239 = *(_QWORD *)&v648[8];
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v648[8], v686, 1);
              }
              v234 = *(_QWORD *)&v648[24];
              if ( *(_QWORD *)&v648[24] )
              {
                v239 = *(_QWORD *)&v648[32];
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v648[32], *(_QWORD *)&v648[24], 1);
              }
              if ( !v281 )
                goto LABEL_474;
              *(_QWORD *)v648 = v257 / 0x15180;
              *(_QWORD *)v666 = (1193047 * (v257 % 0x15180)) >> 32;
              __dst[0].f_bsize = (unsigned __int64)v648;
              __dst[0].f_frsize = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              *(_QWORD *)&__dst[0].f_blocks = v666;
              *(_QWORD *)&__dst[0].f_bavail = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              v239 = (__int64)v672;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v672, &unk_1017C0017, __dst);
              v334 = *(_QWORD *)v662;
              if ( *(void **)v662 == v660 )
              {
                v239 = (__int64)&v660;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v660);
              }
              v335 = __n;
              v336 = 3 * v334;
              *(_QWORD *)(__n + 8 * v336 + 16) = *(_QWORD *)&v672[16];
              v234 = *(_QWORD *)&v672[8];
              *(_OWORD *)(v335 + 8 * v336) = *(_OWORD *)v672;
              *(_QWORD *)v662 = v334 + 1;
              if ( v257 <= 0x93A80 )
                goto LABEL_474;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v239, v234);
              v337 = 42;
              v239 = 42;
              v234 = 1;
              v338 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
              if ( v338 )
              {
                v339 = v338;
                *(_QWORD *)(v338 + 32) = 0x646F4320AF90E58DLL;
                *(_QWORD *)(v338 + 24) = 0x87E9AEAEE8BABBE5LL;
                *(_QWORD *)(v338 + 16) = 0x8CBCEFA9A4E52037LL;
                *(_QWORD *)(v338 + 8) = 0x2087BFE885B6E88CLL;
                *(_QWORD *)v338 = 0xA1E890BFE8B2B7E5LL;
                *(_WORD *)(v338 + 40) = 30821;
                v340 = *(_QWORD *)v662;
                if ( *(void **)v662 == v660 )
                {
                  v239 = (__int64)&v660;
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v660);
                }
                v341 = __n;
                v342 = 3 * v340;
                *(_QWORD *)(__n + 8 * v342) = 42;
                *(_QWORD *)(v341 + 8 * v342 + 8) = v339;
                *(_QWORD *)(v341 + 8 * v342 + 16) = 42;
                *(_QWORD *)v662 = v340 + 1;
                goto LABEL_474;
              }
              goto LABEL_811;
            }
            v262 = v259;
            v260 = 1;
            while ( v258 != v255 )
            {
              v263 = v258;
              v264 = v257;
              v265 = *v258;
              if ( (v265 & 0x80u) != 0 )
              {
                v266 = v265 & 0x1F;
                v267 = v258[1] & 0x3F;
                if ( (unsigned __int8)v265 <= 0xDFu )
                {
                  v258 += 2;
                  v265 = v267 | (v266 << 6);
                }
                else
                {
                  v268 = (v267 << 6) | v258[2] & 0x3F;
                  if ( (unsigned __int8)v265 < 0xF0u )
                  {
                    v258 += 3;
                    v265 = (v266 << 12) | v268;
                  }
                  else
                  {
                    v258 += 4;
                    v265 = ((v265 & 7) << 18) | (v268 << 6) | v263[3] & 0x3F;
                  }
                }
              }
              else
              {
                ++v258;
              }
              v257 = v264 + v258 - v263;
              if ( v265 <= 0x20 && _bittest64(&v239, v265) )
              {
LABEL_343:
                v260 = 0;
                v259 = v257;
                v261 = v264 - v262;
                if ( !v261 )
                  goto LABEL_344;
                goto LABEL_371;
              }
              if ( v265 >= 0x80 )
              {
                v269 = v265 >> 8;
                if ( v265 >> 8 > 0x1F )
                {
                  if ( v269 == 32 )
                  {
                    if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v265]
                        & 2) != 0 )
                      goto LABEL_343;
                  }
                  else if ( v269 == 48 && v265 == 12288 )
                  {
                    goto LABEL_343;
                  }
                }
                else if ( v269 )
                {
                  if ( v269 == 22 && v265 == 5760 )
                    goto LABEL_343;
                }
                else if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v265]
                         & 1) != 0 )
                {
                  goto LABEL_343;
                }
              }
            }
            v258 = (unsigned __int8 *)(v253 + v254);
            v259 = v262;
            v261 = v254 - v262;
            if ( v254 == v262 )
              continue;
            break;
          }
LABEL_371:
          *(_QWORD *)v666 = 0;
          *(_QWORD *)&v666[8] = v261;
          *(_QWORD *)&v666[16] = v253 + v262;
          *(_QWORD *)&v666[24] = v261;
          *(_QWORD *)&v666[32] = 0;
          *(_QWORD *)&v666[40] = v261;
          *(_QWORD *)&v666[48] = 0x2D0000002DLL;
          v666[56] = 1;
          *(_WORD *)&v666[64] = 1;
          v239 = (__int64)v630;
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07(
            (__int64 *)v630,
            (__int64 *)v666);
          if ( *(_QWORD *)&v630[16] == 2 )
          {
            v271 = *(_QWORD *)&v630[8];
            v282 = *(_QWORD *)(*(_QWORD *)&v630[8] + 8LL);
            if ( v282 )
            {
              v283 = **(_BYTE ***)&v630[8];
              if ( v282 == 1 )
              {
                v284 = (unsigned __int8)*v283;
                v281 = 0;
                if ( v284 == 43 || v284 == 45 )
                  goto LABEL_457;
              }
              else
              {
                LOBYTE(v284) = *v283;
              }
              v288 = (_BYTE)v284 == 43;
              v289 = &v283[v288];
              if ( (unsigned __int64)(v282 - v288) >= 0x11 )
              {
                v293 = v288 - v282;
                v239 = 0;
                v292 = 0;
                while ( v239 + v293 )
                {
                  v295 = v292;
                  v294 = 10 * v292;
                  if ( !is_mul_ok(0xAu, v295) )
                    goto LABEL_456;
                  v296 = (unsigned int)(unsigned __int8)v289[v239] - 48;
                  v297 = __CFADD__(v296, v294);
                  v292 = v296 + v294;
                  v281 = 0;
                  if ( (unsigned int)v296 <= 9 )
                  {
                    ++v239;
                    if ( !v297 )
                      continue;
                  }
                  goto LABEL_457;
                }
              }
              else
              {
                if ( v282 != v288 )
                {
                  v290 = v288 - v282;
                  v291 = 0;
                  v292 = 0;
                  while ( 1 )
                  {
                    v239 = (unsigned int)(unsigned __int8)v289[v291] - 48;
                    if ( (unsigned int)v239 > 9 )
                      goto LABEL_456;
                    v292 = (unsigned int)v239 + 10 * v292;
                    if ( !(++v291 + v290) )
                      goto LABEL_748;
                  }
                }
                v292 = 0;
              }
LABEL_748:
              v273 = 86400 * v292;
              v274 = (__int64 *)(*(_QWORD *)&v630[8] + 16LL);
              v272 = (unsigned __int64 *)(*(_QWORD *)&v630[8] + 24LL);
              goto LABEL_374;
            }
          }
          else
          {
            if ( !*(_QWORD *)&v630[16] )
              core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_101964208, v270);
            v271 = *(_QWORD *)&v630[8];
            v272 = (unsigned __int64 *)(*(_QWORD *)&v630[8] + 8LL);
            v273 = 0;
            v274 = *(__int64 **)&v630[8];
LABEL_374:
            v275 = *v272;
            v276 = *v274;
            __dst[0].f_bsize = 0;
            __dst[0].f_frsize = v275;
            *(_QWORD *)&__dst[0].f_blocks = v276;
            *(_QWORD *)&__dst[0].f_bavail = v275;
            *(_QWORD *)&__dst[0].f_ffree = 0;
            __dst[0].f_fsid = v275;
            __dst[0].f_flag = 0x3A0000003ALL;
            LOBYTE(__dst[0].f_namemax) = 1;
            LOWORD(__dst[1].f_bsize) = 1;
            v239 = (__int64)v650;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07(
              (__int64 *)v650,
              (__int64 *)__dst);
            if ( *(_QWORD *)&v650[16] == 2 )
            {
              v239 = *(_QWORD *)&v650[8];
              v285 = *(_QWORD *)(*(_QWORD *)&v650[8] + 8LL);
              if ( !v285 )
                goto LABEL_453;
              v286 = **(_BYTE ***)&v650[8];
              if ( v285 == 1 )
              {
                v287 = (unsigned __int8)*v286;
                if ( v287 == 43 || v287 == 45 )
                  goto LABEL_453;
              }
              else
              {
                LOBYTE(v287) = *v286;
              }
              v312 = (_BYTE)v287 == 43;
              v313 = &v286[v312];
              if ( (unsigned __int64)(v285 - v312) >= 0x11 )
              {
                v327 = v312 - v285;
                v328 = 0;
                v316 = 0;
                while ( v328 + v327 )
                {
                  v330 = v316;
                  v329 = 10 * v316;
                  if ( is_mul_ok(0xAu, v330) )
                  {
                    v331 = (unsigned int)(unsigned __int8)v313[v328] - 48;
                    v332 = __CFADD__(v331, v329);
                    v316 = v331 + v329;
                    if ( (unsigned int)v331 <= 9 )
                    {
                      ++v328;
                      if ( !v332 )
                        continue;
                    }
                  }
                  goto LABEL_453;
                }
LABEL_436:
                v273 += 60 * v316;
              }
              else if ( v285 != v312 )
              {
                v314 = v312 - v285;
                v315 = 0;
                v316 = 0;
                while ( 1 )
                {
                  v317 = (unsigned __int8)v313[v315] - 48;
                  if ( v317 > 9 )
                    goto LABEL_453;
                  v316 = v317 + 10 * v316;
                  if ( !(++v315 + v314) )
                    goto LABEL_436;
                }
              }
              v318 = *(_QWORD *)(*(_QWORD *)&v650[8] + 24LL);
              if ( !v318 )
                goto LABEL_453;
              v319 = *(_BYTE **)(*(_QWORD *)&v650[8] + 16LL);
              if ( v318 == 1 )
              {
                v320 = (unsigned __int8)*v319;
                if ( v320 == 43 || v320 == 45 )
                  goto LABEL_453;
              }
              else
              {
                LOBYTE(v320) = *v319;
              }
              v558 = (_BYTE)v320 == 43;
              v559 = &v319[v558];
              if ( (unsigned __int64)(v318 - v558) >= 0x11 )
              {
                v569 = v558 - v318;
                v570 = 0;
                v257 = 0;
                while ( v570 + v569 )
                {
                  v571 = 10 * v257;
                  if ( is_mul_ok(0xAu, v257) )
                  {
                    v572 = (unsigned int)(unsigned __int8)v559[v570] - 48;
                    v257 = v572 + v571;
                    v573 = __CFADD__(v572, v571);
                    if ( (unsigned int)v572 <= 9 )
                    {
                      ++v570;
                      if ( !v573 )
                        continue;
                    }
                  }
                  goto LABEL_453;
                }
LABEL_768:
                v257 += v273;
                goto LABEL_803;
              }
              if ( v318 == v558 )
              {
                v257 = v273;
                goto LABEL_803;
              }
              v560 = v558 - v318;
              v561 = 0;
              v257 = 0;
              while ( 1 )
              {
                v562 = (unsigned __int8)v559[v561] - 48;
                if ( v562 > 9 )
                  goto LABEL_453;
                v257 = v562 + 10 * v257;
                if ( !(++v561 + v560) )
                  goto LABEL_768;
              }
            }
            if ( *(_QWORD *)&v650[16] == 3 )
            {
              v239 = *(_QWORD *)&v650[8];
              v277 = *(_QWORD *)(*(_QWORD *)&v650[8] + 8LL);
              if ( v277 )
              {
                v278 = **(_BYTE ***)&v650[8];
                if ( v277 != 1 )
                {
                  LOBYTE(v279) = *v278;
                  goto LABEL_419;
                }
                v279 = (unsigned __int8)*v278;
                if ( v279 != 43 && v279 != 45 )
                {
LABEL_419:
                  v303 = (_BYTE)v279 == 43;
                  v304 = &v278[v303];
                  if ( (unsigned __int64)(v277 - v303) >= 0x11 )
                  {
                    v321 = v303 - v277;
                    v322 = 0;
                    v307 = 0;
                    while ( v322 + v321 )
                    {
                      v324 = v307;
                      v323 = 10 * v307;
                      if ( is_mul_ok(0xAu, v324) )
                      {
                        v325 = (unsigned int)(unsigned __int8)v304[v322] - 48;
                        v326 = __CFADD__(v325, v323);
                        v307 = v325 + v323;
                        if ( (unsigned int)v325 <= 9 )
                        {
                          ++v322;
                          if ( !v326 )
                            continue;
                        }
                      }
                      goto LABEL_453;
                    }
LABEL_424:
                    v273 += 3600 * v307;
                  }
                  else if ( v277 != v303 )
                  {
                    v305 = v303 - v277;
                    v306 = 0;
                    v307 = 0;
                    while ( 1 )
                    {
                      v308 = (unsigned __int8)v304[v306] - 48;
                      if ( v308 > 9 )
                        goto LABEL_453;
                      v307 = v308 + 10 * v307;
                      if ( !(++v306 + v305) )
                        goto LABEL_424;
                    }
                  }
                  v309 = *(_QWORD *)(*(_QWORD *)&v650[8] + 24LL);
                  if ( !v309 )
                    goto LABEL_453;
                  v310 = *(_BYTE **)(*(_QWORD *)&v650[8] + 16LL);
                  if ( v309 == 1 )
                  {
                    v311 = (unsigned __int8)*v310;
                    if ( v311 == 43 || v311 == 45 )
                      goto LABEL_453;
                  }
                  else
                  {
                    LOBYTE(v311) = *v310;
                  }
                  v552 = (_BYTE)v311 == 43;
                  v553 = &v310[v552];
                  if ( (unsigned __int64)(v309 - v552) >= 0x11 )
                  {
                    v563 = v552 - v309;
                    v564 = 0;
                    v556 = 0;
                    while ( v564 + v563 )
                    {
                      v566 = v556;
                      v565 = 10 * v556;
                      if ( is_mul_ok(0xAu, v566) )
                      {
                        v567 = (unsigned int)(unsigned __int8)v553[v564] - 48;
                        v568 = __CFADD__(v567, v565);
                        v556 = v567 + v565;
                        if ( (unsigned int)v567 <= 9 )
                        {
                          ++v564;
                          if ( !v568 )
                            continue;
                        }
                      }
                      goto LABEL_453;
                    }
                  }
                  else
                  {
                    if ( v309 != v552 )
                    {
                      v554 = v552 - v309;
                      v555 = 0;
                      v556 = 0;
                      while ( 1 )
                      {
                        v557 = (unsigned __int8)v553[v555] - 48;
                        if ( v557 > 9 )
                          goto LABEL_453;
                        v556 = v557 + 10 * v556;
                        if ( !(++v555 + v554) )
                          goto LABEL_782;
                      }
                    }
                    v556 = 0;
                  }
LABEL_782:
                  v574 = *(_QWORD *)(*(_QWORD *)&v650[8] + 40LL);
                  if ( !v574 )
                    goto LABEL_453;
                  v575 = *(_BYTE **)(*(_QWORD *)&v650[8] + 32LL);
                  if ( v574 == 1 )
                  {
                    v576 = (unsigned __int8)*v575;
                    if ( v576 == 43 || v576 == 45 )
                      goto LABEL_453;
                  }
                  else
                  {
                    LOBYTE(v576) = *v575;
                  }
                  v577 = (_BYTE)v576 == 43;
                  v578 = &v575[v577];
                  if ( (unsigned __int64)(v574 - v577) >= 0x11 )
                  {
                    v583 = v577 - v574;
                    v584 = 0;
                    v581 = 0;
                    while ( v584 + v583 )
                    {
                      if ( is_mul_ok(0xAu, v581) )
                      {
                        v585 = 10 * v581;
                        v586 = (unsigned int)(unsigned __int8)v578[v584] - 48;
                        v587 = __CFADD__(v586, v585);
                        v581 = v586 + v585;
                        if ( (unsigned int)v586 <= 9 )
                        {
                          ++v584;
                          if ( !v587 )
                            continue;
                        }
                      }
                      goto LABEL_453;
                    }
                  }
                  else
                  {
                    if ( v574 != v577 )
                    {
                      v579 = v577 - v574;
                      v580 = 0;
                      v581 = 0;
                      while ( 1 )
                      {
                        v582 = (unsigned __int8)v578[v580] - 48;
                        if ( v582 > 9 )
                          goto LABEL_453;
                        v581 = v582 + 10 * v581;
                        if ( !(++v580 + v579) )
                          goto LABEL_802;
                      }
                    }
                    v581 = 0;
                  }
LABEL_802:
                  v257 = v581 + v273 + 60 * v556;
LABEL_803:
                  v333 = *(_QWORD *)v650;
                  v281 = 1;
                  if ( !*(_QWORD *)v650 )
                  {
LABEL_457:
                    if ( *(_QWORD *)v630 )
                    {
                      v239 = v271;
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, 16LL * *(_QWORD *)v630, 8);
                    }
                    goto LABEL_459;
                  }
LABEL_455:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v239, 16 * v333, 8);
                  goto LABEL_457;
                }
              }
            }
LABEL_453:
            v333 = *(_QWORD *)v650;
            if ( *(_QWORD *)v650 )
            {
              v239 = *(_QWORD *)&v650[8];
              v281 = 0;
              goto LABEL_455;
            }
          }
LABEL_456:
          v281 = 0;
          goto LABEL_457;
        }
      }
      if ( v672[65] )
        goto LABEL_381;
    }
    v250 = *(_QWORD *)v672;
    *(_QWORD *)v672 = *(_QWORD *)&__dst[0].f_blocks;
    v251 = *(_QWORD *)&__dst[0].f_blocks - v250;
    v252 = v250 + v249;
    if ( *(_QWORD *)&__dst[0].f_blocks == v250 )
      goto LABEL_339;
LABEL_333:
    if ( *(_BYTE *)(v252 + v251 - 1) == 10 )
    {
      if ( v251 == 1 )
      {
        v251 = 0;
      }
      else if ( *(_BYTE *)(v252 + v251 - 2) == 13 )
      {
        v251 -= 2;
      }
      else
      {
        --v251;
      }
    }
    goto LABEL_339;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v227, v225);
  v240 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
  if ( !v240 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
  v241 = v240;
  qmemcpy(v240, "codex_process_state", 19);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
  v242 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v242 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
  v243 = v242;
  *v242 = 27503;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
  v244 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v244 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15);
  v245 = v244;
  *(_QWORD *)((char *)v244 + 7) = 0x8CA1E890BFE8AA9CLL;
  *v244 = 0x9CE6207865646F43LL;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(15, 1);
  v246 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(79, 1);
  if ( !v246 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 79);
  v247 = v246;
  memcpy(v246, &unk_1015FD531, 0x4Fu);
  *(_QWORD *)v630 = 19;
  *(_QWORD *)&v630[8] = v241;
  *(_QWORD *)&v630[16] = 19;
  *(_QWORD *)&v630[24] = 2;
  *(_QWORD *)&v630[32] = v243;
  *(_QWORD *)&v630[40] = 2;
  *(_QWORD *)&v630[48] = 15;
  *(_QWORD *)&v630[56] = v245;
  *(_QWORD *)&v630[64] = 15;
  *(_QWORD *)&v630[72] = 79;
  *(_QWORD *)&v630[80] = v247;
  *(_QWORD *)&v630[88] = 79;
  v630[96] = 0;
  v248 = *(_QWORD *)v649;
  if ( *(_QWORD *)v649 != 0x8000000000000000LL )
  {
LABEL_492:
    if ( v248 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v649[8], v248, 1);
  }
LABEL_494:
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, v635, v636);
  v352 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v352 )
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v650,
      &unk_1015FD021,
      17,
      &unk_1015FD032,
      46);
    goto LABEL_519;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, v676[2].i64[0], v676[2].i64[1]);
  v353 = __dst[0].f_bsize;
  if ( __dst[0].f_bsize == 0x8000000000000000LL )
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v650,
      &unk_1015FD021,
      17,
      &unk_1015FD12B,
      45);
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4(
      0x8000000000000000LL,
      __dst[0].f_frsize);
    goto LABEL_519;
  }
  v354 = __dst[0].f_frsize;
  *(_OWORD *)&__dst[0].f_bsize = *(_OWORD *)&__dst[0].f_frsize;
  *(_QWORD *)&__dst[0].f_blocks = 0;
  *(_QWORD *)&__dst[0].f_bavail = 0;
  *(_OWORD *)&__dst[0].f_ffree = *(_OWORD *)&__dst[0].f_bsize;
  serde_json::de::from_trait::h51e180b4bb6af5e0(v666, __dst);
  if ( v666[0] == 6 )
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v650,
      &unk_1015FD021,
      17,
      &unk_1015FD0FF,
      44);
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v666[8]);
    goto LABEL_517;
  }
  *(_QWORD *)&v672[24] = *(_QWORD *)&v666[24];
  *(_QWORD *)&v672[16] = *(_QWORD *)&v666[16];
  *(_OWORD *)v672 = *(_OWORD *)v666;
  v355 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           "auth_modeaimami_router_unlock_authlast_refresh",
           9,
           v672);
  if ( v355
    && *(_BYTE *)v355 == 3
    && *(_QWORD *)(v355 + 24) == 6
    && !(**(_DWORD **)(v355 + 16) ^ 0x6B697061 | *(unsigned __int16 *)(*(_QWORD *)(v355 + 16) + 4LL) ^ 0x7965) )
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v650,
      &unk_1015FD021,
      17,
      &unk_1015FD0CD,
      50);
    goto LABEL_516;
  }
  v356 = "/tokens/access_tokenOPENAI_API_KEY";
  v357 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v672, "/tokens/access_tokenOPENAI_API_KEY", 20);
  if ( !v357 || *(_BYTE *)v357 != 3 || (v356 = *(const char **)(v357 + 24)) == nullptr )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v672, v356);
    v363 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( v363 )
    {
      v364 = v363;
      qmemcpy(v363, "auth_token_expiry", 17);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
      v365 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v365 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      v366 = v365;
      *(_BYTE *)(v365 + 4) = 114;
      *(_DWORD *)v365 = 1869771365;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
      v367 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
      if ( !v367 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
      v368 = v367;
      *(_QWORD *)(v367 + 8) = 0xBAB8E4206E656B6FLL;
      *(_QWORD *)v367 = 0x745F737365636361LL;
      *(_DWORD *)(v367 + 15) = -1163270214;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
      v369 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
      if ( !v369 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45);
      *(_QWORD *)((char *)v369 + 37) = 0x95BDE5BB99E7B096LL;
      v369[4] = 0xE7B096E68D87E981LL;
      v369[3] = 0xA6E8809CE98CBCEFLL;
      v369[2] = 0x8180E6B68AE79F9CLL;
      v369[1] = 0xE687BFE88BB5E680LL;
      *v369 = 0xA3E695B3E6A097E6LL;
      *(_QWORD *)v650 = 17;
      *(_QWORD *)&v650[8] = v364;
      *(_QWORD *)&v650[16] = 17;
      *(_QWORD *)&v650[24] = 5;
      *(_QWORD *)&v650[32] = v366;
      *(_QWORD *)&v650[40] = 5;
      *(_QWORD *)&v650[48] = 19;
      *(_QWORD *)&v650[56] = v368;
      *(_QWORD *)&v650[64] = 19;
      *(_QWORD *)&v650[72] = 45;
      *(_QWORD *)&v650[80] = v369;
      *(_QWORD *)&v650[88] = 45;
      goto LABEL_515;
    }
    goto LABEL_846;
  }
  v358 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(*(_QWORD *)(v357 + 16));
  v360 = v359;
  v361 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v672, "/tokens/refresh_token", 21);
  v362 = v361 && *(_BYTE *)v361 == 3 && *(_QWORD *)(v361 + 24) != 0;
  if ( (v358 & 1) == 0 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v672, "/tokens/refresh_token");
    v531 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( v531 )
    {
      v532 = v531;
      qmemcpy(v531, "auth_token_expiry", 17);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
      v533 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v533 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
      v534 = v533;
      *(_DWORD *)((char *)v533 + 3) = 1735289198;
      *v533 = 1852989815;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v535 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1);
      if ( !v535 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38);
      v536 = v535;
      *(_QWORD *)((char *)v535 + 30) = 0xB497E9B697E69F9CLL;
      v535[3] = 0x9F9CE687BFE8206ELL;
      v535[2] = 0x656B6F745F737365LL;
      v535[1] = 0x63636120909EE6A3LL;
      *v535 = 0xA7E895B3E6A097E6LL;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(38, 1);
      v537 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1);
      if ( !v537 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43);
      *(_QWORD *)(v537 + 32) = 0x6C63207078652096LL;
      *(_QWORD *)(v537 + 24) = 0x8FE5908FE695B3E6LL;
      *(_QWORD *)(v537 + 16) = 0xA097E68CBCEFB8B8LL;
      *(_QWORD *)(v537 + 8) = 0xE582BCE58FBCE5BCLL;
      *(_QWORD *)v537 = 0xA0E6206E656B6F74LL;
      *(_DWORD *)(v537 + 39) = 1835622764;
      *(_QWORD *)v650 = 17;
      *(_QWORD *)&v650[8] = v532;
      *(_QWORD *)&v650[16] = 17;
      *(_QWORD *)&v650[24] = 7;
      *(_QWORD *)&v650[32] = v534;
      *(_QWORD *)&v650[40] = 7;
      *(_QWORD *)&v650[48] = 38;
      *(_QWORD *)&v650[56] = v536;
      *(_QWORD *)&v650[64] = 38;
      *(_QWORD *)&v650[72] = 43;
      *(_QWORD *)&v650[80] = v537;
      *(_QWORD *)&v650[88] = 43;
      goto LABEL_515;
    }
    goto LABEL_846;
  }
  if ( (__int64)v360 <= 0 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v672, "/tokens/refresh_token");
    v538 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( v362 )
    {
      if ( v538 )
      {
        qmemcpy(v538, "auth_token_expiry", 17);
        v686 = (unsigned __int64)v538;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
        v539 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
        if ( !v539 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
        v540 = v539;
        *(_BYTE *)(v539 + 4) = 114;
        *(_DWORD *)v539 = 1869771365;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
        v541 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
        if ( !v541 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
        v542 = v541;
        *(_QWORD *)((char *)v541 + 14) = 0x9F9CE687BFE8B2B7LL;
        v541[1] = 0xB2B7E5206E656B6FLL;
        *v541 = 0x745F737365636361LL;
        *(_QWORD *)v648 = ((unsigned __int64)(((unsigned __int128)((__int64)0x8888888888888889LL
                                                                 * (__int128)-(__int64)v360) >> 64)
                                            - v360) >> 63)
                        + ((__int64)(((unsigned __int128)((__int64)0x8888888888888889LL * (__int128)-(__int64)v360) >> 64)
                                   - v360) >> 5);
        *(_QWORD *)v666 = v648;
        *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFA7E, v666);
        *(_OWORD *)&v650[72] = *(_OWORD *)&__dst[0].f_bsize;
        *(_QWORD *)&v650[88] = *(_QWORD *)&__dst[0].f_blocks;
        *(_QWORD *)v650 = 17;
        *(_QWORD *)&v650[8] = v686;
        *(_QWORD *)&v650[16] = 17;
        *(_QWORD *)&v650[24] = 5;
        *(_QWORD *)&v650[32] = v540;
        *(_QWORD *)&v650[40] = 5;
        *(_QWORD *)&v650[48] = 22;
        *(_QWORD *)&v650[56] = v542;
        *(_QWORD *)&v650[64] = 22;
        goto LABEL_515;
      }
    }
    else if ( v538 )
    {
      qmemcpy(v538, "auth_token_expiry", 17);
      v545 = v538;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
      v546 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v546 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      v547 = v546;
      *(_BYTE *)(v546 + 4) = 114;
      *(_DWORD *)v546 = 1869771365;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
      v548 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
      if ( !v548 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42);
      v549 = v548;
      qmemcpy(v548 + 4, "resh_token", 10);
      v548[3] = 0x66657220A097E694LL;
      v548[2] = 0xB8E49F9CE687BFE8LL;
      v548[1] = 0xB2B7E5206E656B6FLL;
      *v548 = 0x745F737365636361LL;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(42, 1);
      v550 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
      if ( !v550 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
      *(_QWORD *)(v550 + 16) = 0x47746168432095BDLL;
      *(_QWORD *)(v550 + 8) = 0xE5BB99E7B096E68DLL;
      *(_QWORD *)v550 = 0x87E981A6E8809CE9LL;
      *(_WORD *)(v550 + 24) = 21584;
      *(_QWORD *)v650 = 17;
      *(_QWORD *)&v650[8] = v545;
      *(_QWORD *)&v650[16] = 17;
      *(_QWORD *)&v650[24] = 5;
      *(_QWORD *)&v650[32] = v547;
      *(_QWORD *)&v650[40] = 5;
      *(_QWORD *)&v650[48] = 42;
      *(_QWORD *)&v650[56] = v549;
      *(_QWORD *)&v650[64] = 42;
      *(_QWORD *)&v650[72] = 26;
      *(_QWORD *)&v650[80] = v550;
      *(_QWORD *)&v650[88] = 26;
      goto LABEL_515;
    }
    goto LABEL_846;
  }
  if ( v360 >= 0xE10 )
  {
    __s2 = (void *)(v360 / 0xE10);
    *(_QWORD *)&v655 = v360 / 0x15180;
    if ( v360 >= 0x15180 )
    {
      *(_QWORD *)v648 = v360 / 0xE10 - 24 * ((0xAAAAAAAAAAAAAABLL * (unsigned __int128)(v360 / 0xE10)) >> 64);
      __dst[0].f_bsize = (unsigned __int64)&v655;
      __dst[0].f_frsize = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
      *(_QWORD *)&__dst[0].f_blocks = v648;
      *(_QWORD *)&__dst[0].f_bavail = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v666, &unk_1017BFA24, __dst);
      v544 = *(_QWORD *)&v666[16];
      v543 = *(_OWORD *)v666;
    }
    else
    {
      *(_QWORD *)v666 = &__s2;
      *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BF9F9, v666);
      v543 = *(_OWORD *)&__dst[0].f_bsize;
      v544 = *(_QWORD *)&__dst[0].f_blocks;
    }
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v650,
      &unk_1015FD021,
      17,
      *((_QWORD *)&v543 + 1),
      v544);
    if ( (_QWORD)v543 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v543 + 1), v543, 1);
    goto LABEL_516;
  }
  *(_QWORD *)v648 = (unsigned int)(34953 * v360) >> 21;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v672, "/tokens/refresh_token");
  v525 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
  if ( !v525 )
LABEL_846:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
  qmemcpy(v525, "auth_token_expiry", 17);
  v686 = (unsigned __int64)v525;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
  v526 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v526 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
  v527 = v526;
  *(_DWORD *)((char *)v526 + 3) = 1735289198;
  *v526 = 1852989815;
  *(_QWORD *)v666 = v648;
  *(_QWORD *)&v666[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFA56, v666);
  v682 = *(_OWORD *)&__dst[0].f_bsize;
  v683 = *(_QWORD **)&__dst[0].f_blocks;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &unk_1017BFA56);
  if ( v362 )
  {
    v528 = 74;
    v529 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(74, 1);
    if ( v529 )
    {
      v530 = (__int64)v529;
      memcpy(v529, &unk_1015FD081, 0x4Au);
      goto LABEL_746;
    }
LABEL_878:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v528);
  }
  v528 = 44;
  v551 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(44, 1);
  if ( !v551 )
    goto LABEL_878;
  v530 = v551;
  *(_QWORD *)(v551 + 32) = 0x99E7B096E68D87E9LL;
  *(_QWORD *)(v551 + 24) = 0x809CE98E90E59F9CLL;
  *(_QWORD *)(v551 + 16) = 0xE687BFE88CBCEF6ELL;
  *(_QWORD *)(v551 + 8) = 0x656B6F745F687365LL;
  *(_QWORD *)v551 = 0x7266657220A097E6LL;
  *(_DWORD *)(v551 + 40) = -1782716997;
LABEL_746:
  *(_QWORD *)v650 = 17;
  *(_QWORD *)&v650[8] = v686;
  *(_QWORD *)&v650[16] = 17;
  *(_QWORD *)&v650[24] = 7;
  *(_QWORD *)&v650[32] = v527;
  *(_QWORD *)&v650[40] = 7;
  *(_OWORD *)&v650[48] = v682;
  *(_QWORD *)&v650[64] = v683;
  *(_QWORD *)&v650[72] = v528;
  *(_QWORD *)&v650[80] = v530;
  *(_QWORD *)&v650[88] = v528;
LABEL_515:
  v650[96] = 0;
LABEL_516:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v672);
LABEL_517:
  if ( v353 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v354, v353, 1);
LABEL_519:
  v370 = v676;
  codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers::h0fad5f388bab55aa(
    v648,
    v676,
    &v631,
    v673);
  v678 = nullptr;
  v679 = 8;
  v680 = nullptr;
  *(_QWORD *)v666 = v370;
  v371 = &v666[8];
  *(_QWORD *)&v666[8] = "~/.codexsessionsccswitchorphaned";
  *(_QWORD *)&v666[16] = 8;
  *(_QWORD *)&v666[24] = (char *)v370 + 120;
  *(_QWORD *)&v666[32] = "sessionsccswitchorphaned";
  *(_QWORD *)&v666[40] = 8;
  *(_QWORD *)&v666[48] = v370 + 21;
  *(_QWORD *)&v666[56] = &unk_1015FD236;
  *(_QWORD *)&v666[64] = 9;
  *(_QWORD *)&v666[72] = v370 + 36;
  *(_QWORD *)&v666[80] = &unk_1015FD23F;
  *(_QWORD *)&v666[88] = 5;
  if ( !(_BYTE)v687 )
  {
    v391 = 96;
    while ( 1 )
    {
      *(_QWORD *)&v655 = v371;
      std::sys::fs::metadata::h32fa16d3052ea535(
        __dst,
        *(_QWORD *)(*((_QWORD *)v371 - 1) + 8LL),
        *(_QWORD *)(*((_QWORD *)v371 - 1) + 16LL));
      v394 = __dst[0].f_bsize;
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
        __dst[0].f_bsize,
        __dst[0].f_frsize);
      if ( !v394 )
        break;
      __dst[0].f_bsize = (unsigned __int64)&v655;
      __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
      *(_QWORD *)&v385 = &v652;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v652, &unk_1017BFAE0, __dst);
      v395 = v680;
      if ( v680 == v678 )
      {
        *(_QWORD *)&v385 = &v678;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
      }
      v392 = v679;
      v393 = 3LL * (_QWORD)v395;
      *(_QWORD *)(v679 + 8 * v393 + 16) = v653;
      *((_QWORD *)&v385 + 1) = *((_QWORD *)&v652 + 1);
      *(_OWORD *)(v392 + 8 * v393) = v652;
      v680 = (char *)v395 + 1;
LABEL_540:
      v371 += 24;
      v391 -= 24;
      if ( !v391 )
        goto LABEL_536;
    }
    std::path::Path::_join::hb1a495d4f06b13b8(
      __dst,
      *(_QWORD *)(*((_QWORD *)v371 - 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)v371 - 1) + 16LL),
      &unk_1015FD244,
      13);
    v396 = (void *)__dst[0].f_frsize;
    v397 = *(_QWORD *)&__dst[0].f_blocks;
    v398 = std::fs::write::inner::had0c1bee0a2c1e21(
             (void *)__dst[0].f_frsize,
             *(size_t *)&__dst[0].f_blocks,
             &unk_1015FD251,
             5u);
    if ( v398 )
    {
      *(_QWORD *)v672 = &v655;
      *(_QWORD *)&v672[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
      *(_QWORD *)&v385 = v649;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v649, &unk_1017BFAF3, v672);
      v399 = v680;
      if ( v680 == v678 )
      {
        *(_QWORD *)&v385 = &v678;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
      }
      v400 = v679;
      v401 = 3LL * (_QWORD)v399;
      *(_QWORD *)(v679 + 8 * v401 + 16) = *(_QWORD *)&v649[16];
      v402 = *(_QWORD *)v649;
      *(_QWORD *)(v400 + 8 * v401 + 8) = *(_QWORD *)&v649[8];
      *(_QWORD *)(v400 + 8 * v401) = v402;
      v680 = (char *)v399 + 1;
      *((_QWORD *)&v385 + 1) = __dst[0].f_bsize;
      if ( !__dst[0].f_bsize )
        goto LABEL_552;
    }
    else
    {
      *(_QWORD *)&v385 = v396;
      v403 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v396, v397);
      if ( (v403 & 3) == 1 )
      {
        *(_QWORD *)&v682 = v403 - 1;
        v686 = *(_QWORD *)(v403 - 1);
        v408 = *(_QWORD *)(v403 + 7);
        if ( *(_QWORD *)v408 )
          (*(void (__fastcall **)(unsigned __int64))v408)(v686);
        v409 = *(_QWORD *)(v408 + 8);
        if ( v409 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v686, v409, *(_QWORD *)(v408 + 16));
        *(_QWORD *)&v385 = v682;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v682, 24, 8);
        *((_QWORD *)&v385 + 1) = __dst[0].f_bsize;
        if ( !__dst[0].f_bsize )
          goto LABEL_552;
      }
      else
      {
        *((_QWORD *)&v385 + 1) = __dst[0].f_bsize;
        if ( !__dst[0].f_bsize )
          goto LABEL_552;
      }
    }
    *(_QWORD *)&v385 = v396;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v396, *((_QWORD *)&v385 + 1), 1);
LABEL_552:
    if ( (v398 & 3) == 1 )
    {
      v404 = v398 - 1;
      v405 = *(_QWORD *)(v398 - 1);
      v406 = *(_QWORD *)(v398 + 7);
      if ( *(_QWORD *)v406 )
        (*(void (__fastcall **)(__int64))v406)(v405);
      v407 = *(_QWORD *)(v406 + 8);
      if ( v407 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v405, v407, *(_QWORD *)(v406 + 16));
      *((_QWORD *)&v385 + 1) = 24;
      *(_QWORD *)&v385 = v404;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v404, 24, 8);
    }
    goto LABEL_540;
  }
  *(_QWORD *)&v655 = &v666[8];
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, v370->i64[1], v370[1].i64[0]);
  v372 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v372 )
  {
    __dst[0].f_bsize = (unsigned __int64)&v655;
    __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v652, &unk_1017BFAE0, __dst);
    v373 = v680;
    if ( v680 == v678 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
    v374 = v679;
    v375 = 3LL * (_QWORD)v373;
    *(_QWORD *)(v679 + 8 * v375 + 16) = v653;
    *(_OWORD *)(v374 + 8 * v375) = v652;
    v680 = (char *)v373 + 1;
  }
  *(_QWORD *)&v655 = &v666[32];
  std::sys::fs::metadata::h32fa16d3052ea535(
    __dst,
    *(_QWORD *)(*(_QWORD *)&v666[24] + 8LL),
    *(_QWORD *)(*(_QWORD *)&v666[24] + 16LL));
  v376 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v376 )
  {
    __dst[0].f_bsize = (unsigned __int64)&v655;
    __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v652, &unk_1017BFAE0, __dst);
    v377 = v680;
    if ( v680 == v678 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
    v378 = v679;
    v379 = 3LL * (_QWORD)v377;
    *(_QWORD *)(v679 + 8 * v379 + 16) = v653;
    *(_OWORD *)(v378 + 8 * v379) = v652;
    v680 = (char *)v377 + 1;
  }
  *(_QWORD *)&v655 = &v666[56];
  std::sys::fs::metadata::h32fa16d3052ea535(
    __dst,
    *(_QWORD *)(*(_QWORD *)&v666[48] + 8LL),
    *(_QWORD *)(*(_QWORD *)&v666[48] + 16LL));
  v380 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v380 )
  {
    __dst[0].f_bsize = (unsigned __int64)&v655;
    __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v652, &unk_1017BFAE0, __dst);
    v381 = v680;
    if ( v680 == v678 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
    v382 = v679;
    v383 = 3LL * (_QWORD)v381;
    *(_QWORD *)(v679 + 8 * v383 + 16) = v653;
    *(_OWORD *)(v382 + 8 * v383) = v652;
    v680 = (char *)v381 + 1;
  }
  *(_QWORD *)&v655 = &v666[80];
  std::sys::fs::metadata::h32fa16d3052ea535(
    __dst,
    *(_QWORD *)(*(_QWORD *)&v666[72] + 8LL),
    *(_QWORD *)(*(_QWORD *)&v666[72] + 16LL));
  v384 = __dst[0].f_bsize;
  v385 = *(_OWORD *)&__dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( v384 )
  {
    __dst[0].f_bsize = (unsigned __int64)&v655;
    __dst[0].f_frsize = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
    *(_QWORD *)&v385 = &v652;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v652, &unk_1017BFAE0, __dst);
    v386 = v680;
    if ( v680 == v678 )
    {
      *(_QWORD *)&v385 = &v678;
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
    }
    v387 = v679;
    v388 = 3LL * (_QWORD)v386;
    *(_QWORD *)(v679 + 8 * v388 + 16) = v653;
    *((_QWORD *)&v385 + 1) = *((_QWORD *)&v652 + 1);
    *(_OWORD *)(v387 + 8 * v388) = v652;
    v680 = (char *)v386 + 1;
  }
LABEL_536:
  *((_QWORD *)&v682 + 1) = v676[45].i64[0];
  if ( *((_QWORD *)&v682 + 1) == 0x8000000000000000LL )
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(
      &v660,
      v676->i64[1],
      v676[1].i64[0]);
    v389 = __n;
    v390 = *(void **)v662;
  }
  else
  {
    v410 = (const void *)v676[45].i64[1];
    v390 = (void *)v676[46].i64[0];
    if ( v390 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, *((_QWORD *)&v385 + 1));
      v389 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v390, 1);
      if ( !v389 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v390);
    }
    else
    {
      v389 = 1;
    }
    v660 = v390;
    __n = v389;
    memcpy((void *)v389, v410, (size_t)v390);
    *(_QWORD *)v662 = v390;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, v389, v390);
  v411 = __dst[0].f_bsize;
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __dst[0].f_bsize,
    __dst[0].f_frsize);
  if ( !v411 )
  {
    v414 = v389;
    rusqlite::Connection::open_with_flags::h44d322d71fbb5f40(
      __dst,
      v389,
      v390,
      32770 - (unsigned int)(unsigned __int8)v687,
      v412,
      v413,
      v588[0],
      v588[1],
      v588[2]);
    if ( LOBYTE(__dst[1].f_fsid) != 3 )
      goto LABEL_576;
    *(statvfs *)v672 = __dst[0];
    v417 = &unk_1015FD256;
    if ( (_BYTE)v687 )
      v417 = &unk_1015FD25C;
    v639 = (size_t)v417;
    v640 = 6;
    *(_QWORD *)&v655 = &v639;
    *((_QWORD *)&v655 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    *(_QWORD *)v656 = v672;
    *(_QWORD *)&v656[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_1017BFB06, &v655);
    v418 = v680;
    if ( v680 == v678 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v678);
    v419 = v679;
    v420 = 3LL * (_QWORD)v418;
    *(_QWORD *)(v679 + 8 * v420 + 16) = *(_QWORD *)v644;
    v421 = __s2;
    v414 = v643;
    *(_QWORD *)(v419 + 8 * v420 + 8) = v643;
    *(_QWORD *)(v419 + 8 * v420) = v421;
    v680 = (char *)v418 + 1;
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v672);
    if ( LOBYTE(__dst[1].f_fsid) != 3 )
LABEL_576:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(__dst, v414, v415, v416);
  }
  v423 = v676[1].i64[0];
  v424 = (statvfs *)v672;
  *(_QWORD *)&v682 = v676->i64[1];
  v422 = (statvfs *)v682;
  core::str::converts::from_utf8::hb32deb9559450f6e(v672, v682, v423);
  v686 = v423;
  if ( *(_DWORD *)v672 == 1 )
  {
LABEL_581:
    v426 = 0;
  }
  else
  {
    v424 = __dst;
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h5c938f6cbb881cfe(
      __dst,
      *(_QWORD *)&v672[8],
      *(_QWORD *)&v672[16]);
    v425 = (const char *)__dst[0].f_frsize;
    v422 = (statvfs *)__dst[0].f_bsize;
    if ( !__OFSUB__(-__dst[0].f_bsize, 1) )
    {
      if ( __dst[0].f_bsize )
      {
        v424 = (statvfs *)__dst[0].f_frsize;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].f_frsize, __dst[0].f_bsize, 1);
      }
      goto LABEL_581;
    }
    v444 = *(statvfs **)&__dst[0].f_blocks;
    memset(__dst, 0, 64);
    v422 = __dst;
    v424 = (statvfs *)v425;
    v445 = statvfs(v425, __dst);
    v426 = v445 == 0;
    if ( !v445 )
      v411 = (__dst[0].f_frsize * __dst[0].f_bavail) >> 20;
    *v425 = 0;
    if ( v444 )
    {
      v424 = (statvfs *)v425;
      v422 = v444;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v425, v444, 1);
    }
  }
  if ( v680 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v424, v422);
    v427 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( v427 )
    {
      v428 = v427;
      qmemcpy(v427, "codex_home_writable", 19);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
      v429 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v429 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      v430 = v429;
      *(_BYTE *)(v429 + 4) = 114;
      *(_DWORD *)v429 = 1869771365;
      *(_QWORD *)&v655 = v680;
      *(_QWORD *)v672 = &v655;
      *(_QWORD *)&v672[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFBAA, v672);
      v431 = *(_OWORD *)&__dst[0].f_bsize;
      v432 = *(_QWORD *)&__dst[0].f_blocks;
      alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, v679, v680, &unk_1015FD2A7, 3);
      *(_QWORD *)&v672[88] = *(_QWORD *)&__dst[0].f_blocks;
      *(_OWORD *)&v672[72] = *(_OWORD *)&__dst[0].f_bsize;
      *(_QWORD *)v672 = 19;
      *(_QWORD *)&v672[8] = v428;
      *(_QWORD *)&v672[16] = 19;
      *(_QWORD *)&v672[24] = 5;
      *(_QWORD *)&v672[32] = v430;
      *(_QWORD *)&v672[40] = 5;
      *(_OWORD *)&v672[48] = v431;
      *(_QWORD *)&v672[64] = v432;
      v672[96] = 0;
      if ( v660 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, v660, 1);
      v433 = v680;
      v434 = v686;
      if ( v680 )
      {
        v435 = (_QWORD *)(v679 + 8);
        do
        {
          v436 = *(v435 - 1);
          if ( v436 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v435, v436, 1);
          v435 += 3;
          --v433;
        }
        while ( v433 );
      }
      goto LABEL_616;
    }
LABEL_807:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
  }
  if ( v426 )
  {
    if ( v411 < 0xA )
    {
      *(_QWORD *)&v655 = v411;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v424, v422);
      v437 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
      if ( !v437 )
        goto LABEL_807;
      v438 = v437;
      qmemcpy(v437, "codex_home_writable", 19);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
      v439 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v439 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      v440 = v439;
      *(_BYTE *)(v439 + 4) = 114;
      *(_DWORD *)v439 = 1869771365;
      *(_QWORD *)v672 = &v655;
      *(_QWORD *)&v672[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFB7E, v672);
      v441 = __dst[0].f_frsize;
      v683 = (_QWORD *)__dst[0].f_bsize;
      v442 = *(_QWORD *)&__dst[0].f_blocks;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &unk_1017BFB7E);
      v443 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(63, 1);
      if ( !v443 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 63);
      *(_QWORD *)((char *)v443 + 55) = 0xAE8DE6B095E6A585LL;
      v443[6] = 0x85E59986E5B8B8E5LL;
      v443[5] = 0xA3ADE695B3E6A097LL;
      v443[4] = 0xE6BD83E8AF8FE520LL;
      v443[3] = 0x7865646F438CBCEFLL;
      v443[2] = 0x424D20303120B3B6LL;
      v443[1] = 0xE88DB8E4B497E9BALL;
      *v443 = 0xA9E7A894E7AF8FE5LL;
      *(_QWORD *)v672 = 19;
      *(_QWORD *)&v672[8] = v438;
      *(_QWORD *)&v672[16] = 19;
      *(_QWORD *)&v672[24] = 5;
      *(_QWORD *)&v672[32] = v440;
      *(_QWORD *)&v672[40] = 5;
      *(_QWORD *)&v672[48] = v683;
      *(_QWORD *)&v672[56] = v441;
      *(_QWORD *)&v672[64] = v442;
      *(_QWORD *)&v672[72] = 63;
      *(_QWORD *)&v672[80] = v443;
      *(_QWORD *)&v672[88] = 63;
      goto LABEL_608;
    }
    if ( v411 >= 0x64 )
    {
      *(_QWORD *)&v655 = v411 >> 10;
      *(_QWORD *)v672 = &v655;
      *(_QWORD *)&v672[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFB32, v672);
      v434 = v686;
      v524 = *(_OWORD *)&__dst[0].f_bsize;
      codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
        v672,
        &unk_1015FD262,
        19,
        __dst[0].f_frsize,
        *(_QWORD *)&__dst[0].f_blocks);
      if ( (_QWORD)v524 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v524 + 1), v524, 1);
    }
    else
    {
      *(_QWORD *)&v655 = v411;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v424, v422);
      v446 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
      if ( !v446 )
        goto LABEL_807;
      v447 = v446;
      qmemcpy(v446, "codex_home_writable", 19);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
      v448 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v448 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
      v449 = v448;
      *(_DWORD *)((char *)v448 + 3) = 1735289198;
      *v448 = 1852989815;
      *(_QWORD *)v672 = &v655;
      *(_QWORD *)&v672[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017BFB58, v672);
      v450 = __dst[0].f_frsize;
      v683 = (_QWORD *)__dst[0].f_bsize;
      v451 = *(_QWORD *)&__dst[0].f_blocks;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &unk_1017BFB58);
      v452 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
      if ( !v452 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46);
      *(_QWORD *)((char *)v452 + 38) = 0x989BE781A3E78690LL;
      v452[4] = 0x8690E785B8E6AEAELL;
      v452[3] = 0xE8BABBE58CBCEF42LL;
      v452[2] = 0x4D2030303120B3B6LL;
      v452[1] = 0xE88DB8E4B497E9BALL;
      *v452 = 0xA9E7A894E7AF8FE5LL;
      *(_QWORD *)v672 = 19;
      *(_QWORD *)&v672[8] = v447;
      *(_QWORD *)&v672[16] = 19;
      *(_QWORD *)&v672[24] = 7;
      *(_QWORD *)&v672[32] = v449;
      *(_QWORD *)&v672[40] = 7;
      *(_QWORD *)&v672[48] = v683;
      *(_QWORD *)&v672[56] = v450;
      *(_QWORD *)&v672[64] = v451;
      *(_QWORD *)&v672[72] = 46;
      *(_QWORD *)&v672[80] = v452;
      *(_QWORD *)&v672[88] = 46;
LABEL_608:
      v672[96] = 0;
      v434 = v686;
    }
  }
  else
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      v672,
      &unk_1015FD262,
      19,
      &unk_1015FD275,
      45);
    v434 = v686;
  }
  if ( v660 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, v660, 1);
  v453 = v680;
  if ( v680 )
  {
    v454 = (_QWORD *)(v679 + 8);
    do
    {
      v455 = *(v454 - 1);
      if ( v455 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v454, v455, 1);
      v454 += 3;
      --v453;
    }
    while ( v453 );
  }
LABEL_616:
  if ( v678 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v679, 24LL * (_QWORD)v678, 8);
  codexmate_lib::core::relay::codex_diagnostic::check_project_state_integrity::h2781a40cec1df614(v666, v676);
  v456 = v682;
  std::path::Path::_join::hb1a495d4f06b13b8(&v623, v682, v434, &unk_1015FD3B6, 6);
  v457 = v456;
  codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hd0cd1e7be263d666(&v637, v456, v434);
  if ( *((_QWORD *)&v682 + 1) == 0x8000000000000000LL )
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v639, v456, v434);
    v458 = v640;
    v459 = v641;
  }
  else
  {
    v460 = (const void *)v676[45].i64[1];
    v459 = v676[46].u64[0];
    if ( v459 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v637, v457);
      v458 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v459, 1);
      if ( !v458 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v459);
    }
    else
    {
      v458 = 1;
    }
    v639 = v459;
    v640 = v458;
    memcpy((void *)v458, v460, v459);
    v641 = v459;
    v456 = v682;
  }
  v461 = v624;
  v462 = v625;
  v676 = (__m128i *)v458;
  v463 = std::path::Path::_starts_with::hb7d30f62bcd7f24f(v458, v459, v624, v625);
  v464 = (void **)&v678;
  v465 = (statvfs *)v456;
  codexmate_lib::core::relay::codex_diagnostic::list_root_state_dbs::h55608faea2116e07(&v678, v456, v686);
  if ( v463 && (v466 = v680) != nullptr )
  {
    v686 = v637;
    if ( (_QWORD)v637 != 0x8000000000000000LL )
    {
      std::path::Path::components::he8b0f71a48373be5(&v660, *((_QWORD *)&v637 + 1), v638);
      std::path::Path::components::he8b0f71a48373be5(&__s2, v461, v462);
      v467 = v660;
      v468 = __n;
      v469 = __s2;
      v470 = v643;
      if ( __n == v643
        && (_BYTE)v664 == (_BYTE)v646
        && HIBYTE(v664) == 2
        && HIBYTE(v646) == 2
        && !memcmp(v660, __s2, __n) )
      {
        goto LABEL_638;
      }
      if ( v662[0] != 6 )
      {
        *(_QWORD *)&v654[7] = *(_QWORD *)&v663[7];
        *(_QWORD *)v654 = *(_QWORD *)v663;
        v653 = *(_QWORD *)&v662[17];
        v652 = *(_OWORD *)&v662[1];
      }
      *(_QWORD *)&v655 = v467;
      *((_QWORD *)&v655 + 1) = v468;
      v656[0] = v662[0];
      *(_OWORD *)&v656[1] = v652;
      *(_QWORD *)&v656[17] = v653;
      *(_QWORD *)v657 = *(_QWORD *)v654;
      *(_QWORD *)&v657[7] = *(_QWORD *)&v654[7];
      v658 = v664;
      v659 = v665;
      if ( v644[0] != 6 )
      {
        *(_QWORD *)&v649[31] = *(_QWORD *)&v645[7];
        *(_QWORD *)&v649[24] = *(_QWORD *)v645;
        *(_QWORD *)&v649[16] = *(_QWORD *)&v644[17];
        *(_QWORD *)&v649[8] = *(_QWORD *)&v644[9];
        *(_QWORD *)v649 = *(_QWORD *)&v644[1];
      }
      __dst[0].f_bsize = (unsigned __int64)v469;
      __dst[0].f_frsize = v470;
      LOBYTE(__dst[0].f_blocks) = v644[0];
      *(_OWORD *)((char *)&__dst[0].f_blocks + 1) = *(_OWORD *)v649;
      *(_OWORD *)((char *)&__dst[0].f_ffree + 1) = *(_OWORD *)&v649[16];
      __dst[0].f_flag = *(_QWORD *)&v649[31];
      LOWORD(__dst[0].f_namemax) = v646;
      BYTE2(__dst[0].f_namemax) = v647;
      v464 = (void **)&v655;
      v465 = __dst;
      if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(&v655, __dst) )
      {
LABEL_638:
        v471 = v679;
        v472 = v679;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc38dac04cbb2e7be(
          &v660,
          v679,
          v679 + 24LL * (_QWORD)v466);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v660, v472);
        v473 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
        if ( !v473 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
        v474 = (unsigned __int64)v473;
        qmemcpy(v473, "state_db_relocation", 19);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
        v475 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v475 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
        v476 = v475;
        *((_QWORD *)&v682 + 1) = v471;
        *(_DWORD *)((char *)v475 + 3) = 1735289198;
        *v475 = 1852989815;
        __s2 = v466;
        *(_QWORD *)&v655 = &__s2;
        *((_QWORD *)&v655 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C00E2, &v655);
        v683 = (_QWORD *)__dst[0].f_frsize;
        *(_QWORD *)&v682 = __dst[0].f_bsize;
        v673 = *(_QWORD **)&__dst[0].f_blocks;
        v477 = *(_QWORD *)v662;
        v687 = __n;
        alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, __n, *(_QWORD *)v662, ", ", 2);
        *(_QWORD *)v656 = *(_QWORD *)&__dst[0].f_blocks;
        v655 = *(_OWORD *)&__dst[0].f_bsize;
        __dst[0].f_bsize = (unsigned __int64)&v655;
        __dst[0].f_frsize = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_1015FD5EA, __dst);
        if ( (_QWORD)v655 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v655 + 1), v655, 1);
        __dst[1].f_frsize = (unsigned __int64)__s2;
        *(_QWORD *)&__dst[1].f_blocks = v643;
        *(_QWORD *)&__dst[1].f_bavail = *(_QWORD *)v644;
        __dst[0].f_bsize = 19;
        __dst[0].f_frsize = v474;
        *(_QWORD *)&__dst[0].f_blocks = 19;
        *(_QWORD *)&__dst[0].f_bavail = 7;
        *(_QWORD *)&__dst[0].f_ffree = v476;
        __dst[0].f_fsid = 7;
        __dst[0].f_flag = v682;
        __dst[0].f_namemax = (unsigned __int64)v683;
        __dst[1].f_bsize = (unsigned __int64)v673;
        LOBYTE(__dst[1].f_ffree) = 1;
        v478 = v687;
        if ( v477 )
        {
          v479 = (_QWORD *)(v687 + 8);
          do
          {
            v480 = *(v479 - 1);
            if ( v480 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v479, v480, 1);
            v479 += 3;
            --v477;
          }
          while ( v477 );
        }
        if ( v660 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v478, 24LL * (_QWORD)v660, 8);
        v520 = *((_QWORD *)&v682 + 1);
        v521 = (_QWORD *)(*((_QWORD *)&v682 + 1) + 8LL);
        do
        {
          v522 = *(v521 - 1);
          if ( v522 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v521, v522, 1);
          v521 += 3;
          v466 = (char *)v466 - 1;
        }
        while ( v466 );
        if ( v678 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v520, 24LL * (_QWORD)v678, 8);
        v482 = f_bsize;
        v484 = v684;
        v523 = v686;
        if ( v639 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v676, v639, 1);
          v523 = v637;
        }
        if ( v523 != 0x8000000000000000LL && v523 )
        {
          v485 = *((_QWORD *)&v637 + 1);
          v483 = v523;
LABEL_655:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v485, v483, 1);
        }
        goto LABEL_656;
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v464, v465);
    v510 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v510 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    v511 = (unsigned __int64)v510;
    qmemcpy(v510, "state_db_relocation", 19);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
    v512 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v512 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
    v513 = v512;
    *(_DWORD *)((char *)v512 + 3) = 1735289198;
    *v512 = 1852989815;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v514 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
    if ( !v514 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
    v515 = v514;
    *(_QWORD *)(v514 + 24) = 0xBAE5AE8DE6B095E6LL;
    *(_QWORD *)(v514 + 16) = 0x8BA8E7BFBAE780B1LL;
    *(_QWORD *)(v514 + 8) = 0xE583B8E58C8FE5B0LL;
    *(_QWORD *)v514 = 0x88E58BB5E680A3E6LL;
    *(_BYTE *)(v514 + 32) = -109;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(33, 1);
    v516 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(164, 1);
    if ( !v516 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 164);
    v517 = v516;
    memcpy(v516, &unk_1015FD6F0, 0xA4u);
    __dst[0].f_bsize = 19;
    __dst[0].f_frsize = v511;
    *(_QWORD *)&__dst[0].f_blocks = 19;
    *(_QWORD *)&__dst[0].f_bavail = 7;
    *(_QWORD *)&__dst[0].f_ffree = v513;
    __dst[0].f_fsid = 7;
    __dst[0].f_flag = 33;
    __dst[0].f_namemax = v515;
    __dst[1].f_bsize = 33;
    __dst[1].f_frsize = 164;
    *(_QWORD *)&__dst[1].f_blocks = v517;
    *(_QWORD *)&__dst[1].f_bavail = 164;
    LOBYTE(__dst[1].f_ffree) = 0;
    v481 = v679;
LABEL_695:
    v518 = (_QWORD *)(v481 + 8);
    do
    {
      v519 = *(v518 - 1);
      if ( v519 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v518, v519, 1);
      v518 += 3;
      v466 = (char *)v466 - 1;
    }
    while ( v466 );
  }
  else
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701(
      __dst,
      "state_db_relocation",
      19,
      &unk_1015FD5CF,
      27);
    v481 = v679;
    v466 = v680;
    if ( v680 )
      goto LABEL_695;
  }
  if ( v678 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v481, 24LL * (_QWORD)v678, 8);
  v482 = f_bsize;
  if ( v639 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v676, v639, 1);
  v483 = v637;
  v484 = v684;
  if ( (_QWORD)v637 != 0x8000000000000000LL && (_QWORD)v637 )
  {
    v485 = *((_QWORD *)&v637 + 1);
    goto LABEL_655;
  }
LABEL_656:
  if ( v623 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v624, v623, 1);
  qmemcpy((void *)v484, v651, 0x68u);
  qmemcpy((void *)(v484 + 104), v604, 0x68u);
  qmemcpy((void *)(v484 + 208), v603, 0x68u);
  qmemcpy((void *)(v484 + 312), v629, 0x68u);
  qmemcpy((void *)(v484 + 416), v602, 0x68u);
  qmemcpy((void *)(v484 + 520), v601, 0x68u);
  qmemcpy((void *)(v484 + 624), v600, 0x68u);
  qmemcpy((void *)(v484 + 728), v599, 0x68u);
  qmemcpy((void *)(v484 + 832), v610, 0x68u);
  qmemcpy((void *)(v484 + 936), v598, 0x68u);
  qmemcpy((void *)(v484 + 1040), v597, 0x68u);
  qmemcpy((void *)(v484 + 1144), v596, 0x68u);
  qmemcpy((void *)(v484 + 1248), v595, 0x68u);
  qmemcpy((void *)(v484 + 1352), v594, 0x68u);
  qmemcpy((void *)(v484 + 1456), v593, 0x68u);
  qmemcpy((void *)(v484 + 1560), v592, 0x68u);
  qmemcpy((void *)(v484 + 1664), v591, 0x68u);
  qmemcpy((void *)(v484 + 1768), v590, 0x68u);
  qmemcpy((void *)(v484 + 1872), v609, 0x68u);
  qmemcpy((void *)(v484 + 1976), v622, 0x68u);
  qmemcpy((void *)(v484 + 2080), v589, 0x68u);
  qmemcpy((void *)(v484 + 2184), v608, 0x68u);
  qmemcpy((void *)(v484 + 2288), v588, 0x68u);
  qmemcpy((void *)(v484 + 2392), v630, 0x68u);
  qmemcpy((void *)(v484 + 2496), v650, 0x68u);
  qmemcpy((void *)(v484 + 2600), v648, 0x68u);
  qmemcpy((void *)(v484 + 2704), v672, 0x68u);
  qmemcpy((void *)(v484 + 2808), v666, 0x68u);
  qmemcpy((void *)(v484 + 2912), __dst, 0x68u);
  v486 = 40;
  do
  {
    v487 = v486;
    if ( v486 == 3056 )
      break;
    if ( *(_QWORD *)(v484 + v486) != 2 )
      break;
    v488 = *(_WORD **)(v484 + v486 - 8);
    v486 += 104;
  }
  while ( *v488 == 27503 );
  v141 = v487 == 3056;
  v489 = v617;
  *v617 = 29;
  v489[1] = v484;
  v489[2] = 29;
  *((_BYTE *)v489 + 24) = !v141;
  *((_BYTE *)v489 + 25) = 0;
  result = 2 * v482;
  if ( 2 * v482 )
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v677, v482, 1);
    v491 = v626;
    if ( v626 )
LABEL_664:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v627, 8 * v491, 8);
  }
  else
  {
    v491 = v626;
    if ( v626 )
      goto LABEL_664;
  }
  v492 = *((_QWORD *)&v631 + 1);
  if ( *((_QWORD *)&v631 + 1) )
  {
    v493 = v633;
    if ( v633 )
    {
      v494 = v631;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v631));
      v496 = (const __m128i *)(v631 + 16);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v497 = _mm_movemask_epi8(_mm_load_si128(v496));
            v494 -= 384;
            ++v496;
          }
          while ( v497 == 0xFFFF );
          _R13D = ~v497;
        }
        __asm { tzcnt   eax, r13d }
        v498 = -3 * result;
        v499 = *(_QWORD *)(v494 + 8 * v498 - 24);
        if ( v499 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v494 + 8 * v498 - 16), v499, 1);
        --v493;
        result = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v493 );
    }
    result = (24 * v492 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v500 = result + v492 + 17;
    if ( v500 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v631 - result, v500, 16);
  }
  v501 = *((_QWORD *)&v613 + 1);
  if ( *((_QWORD *)&v613 + 1) )
  {
    v502 = v615;
    if ( v615 )
    {
      v503 = v613;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v613));
      v505 = (const __m128i *)(v613 + 16);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v506 = _mm_movemask_epi8(_mm_load_si128(v505));
            v503 -= 384;
            ++v505;
          }
          while ( v506 == 0xFFFF );
          _R13D = ~v506;
        }
        __asm { tzcnt   eax, r13d }
        v507 = -3 * result;
        v508 = *(_QWORD *)(v503 + 8 * v507 - 24);
        if ( v508 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v503 + 8 * v507 - 16), v508, 1);
        --v502;
        result = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v502 );
    }
    result = (24 * v501 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v509 = result + v501 + 17;
    if ( v509 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v613 - result, v509, 16);
  }
  return result;
}
