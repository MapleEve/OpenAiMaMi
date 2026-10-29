// win 1.2.7 latest-exe | module src/core/relay/codex_writer.rs | ea 0x1409e6e50 | successor of pre-update 0x140f51460 | session <审计会话>
// match evidence: {"verdict": "CONFIRMED_STR_CAND"}
__int64 __fastcall sub_1409E6E50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int128 v12; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __m128i si128; // xmm1
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 i; // rdx
  unsigned __int64 v24; // rax
  __m128i v25; // xmm2
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rcx
  __int64 v36; // rdi
  const __m128i *v37; // rbx
  __int64 v39; // r14
  unsigned int v40; // r15d
  __int64 v41; // rdx
  __m128i v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rcx
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i v48; // xmm2
  void *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rbx
  const __m128i *v59; // r14
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rdx
  __m128i v64; // xmm1
  __m128i v65; // xmm2
  __m128i v66; // xmm3
  __m128i v67; // kr10_16
  __int64 v68; // r15
  __m128i v69; // kr30_16
  __int64 v70; // rbx
  __int64 v71; // r14
  __int64 v72; // r15
  __int128 v73; // rdi
  _QWORD *v74; // rbx
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __int64 v80; // r8
  __m128i v81; // xmm2
  __m128i v82; // xmm3
  unsigned __int64 v83; // rax
  __m128i v84; // xmm4
  __int64 v86; // r10
  __int64 v87; // rdx
  __int64 v88; // rcx
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rcx
  __m128i v99; // xmm1
  __m128i v100; // xmm2
  __m128i v101; // xmm3
  __m128i v102; // kr50_16
  __int64 v103; // r15
  __int64 v104; // rsi
  __int128 v105; // kr70_16
  __int64 v106; // r14
  __int64 v107; // r15
  __m128i v108; // kr90_16
  __int64 v109; // rbx
  __int64 v110; // r14
  __int64 v111; // r15
  unsigned __int64 v112; // rax
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __int64 v116; // r8
  __m128i v117; // xmm2
  __m128i v118; // xmm3
  unsigned __int64 v119; // rax
  __m128i v120; // xmm4
  __int64 v122; // r10
  __int64 v123; // rdx
  __int64 v124; // rcx
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i v127; // xmm2
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rcx
  __m128i v135; // xmm1
  __m128i v136; // xmm2
  __m128i v137; // xmm3
  __m128i v138; // krB0_16
  __int64 v139; // r15
  __int64 v140; // rsi
  __int128 v141; // krD0_16
  __int64 v142; // r14
  __int64 v143; // r15
  __m128i v144; // krF0_16
  __int64 v145; // rbx
  __int64 v146; // r14
  __int64 v147; // r15
  unsigned __int64 v148; // rax
  __m128i v150; // xmm0
  __m128i v151; // xmm0
  __int64 v152; // r8
  __m128i v153; // xmm2
  __m128i v154; // xmm3
  unsigned __int64 v155; // rax
  __m128i v156; // xmm4
  __int64 v158; // r10
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int32 v161; // edi
  char v162; // si
  __m128i v163; // xmm0
  __m128i v164; // xmm1
  __m128i v165; // xmm2
  __m128i *v166; // rax
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rbx
  __int64 v171; // rax
  __int64 v172; // rcx
  __m128i *v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rbx
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rbx
  __int64 v181; // rcx
  __int64 v182; // rdx
  unsigned __int64 v183; // rax
  __m128i v185; // xmm0
  __m128i v186; // xmm0
  __int64 v187; // r8
  __m128i v188; // xmm2
  __m128i v189; // xmm3
  unsigned __int64 v190; // rax
  __m128i v191; // xmm4
  __int64 v193; // r10
  __int64 v194; // rdx
  __int64 v195; // rcx
  __m128i v196; // xmm0
  __m128i v197; // xmm1
  __m128i v198; // xmm2
  __m128i *v199; // rax
  __int64 v200; // rdi
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rdi
  __int64 v204; // rax
  __int64 v205; // rcx
  __m128i *v206; // rax
  __int64 v207; // rsi
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rsi
  __int64 v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rdx
  unsigned __int64 v216; // rax
  __m128i v218; // xmm0
  __m128i v219; // xmm0
  __int64 v220; // r8
  __m128i v221; // xmm2
  __m128i v222; // xmm3
  unsigned __int64 v223; // rax
  __m128i v224; // xmm4
  __int64 v226; // r10
  __int64 v227; // rdx
  __int64 v228; // rcx
  __m128i v229; // xmm0
  __m128i v230; // xmm1
  __m128i v231; // xmm2
  __int64 v232; // rax
  __int64 v233; // rdi
  __int64 v234; // rax
  __int64 v235; // rcx
  __int64 v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rsi
  __int64 v241; // rax
  __int64 v242; // rcx
  __int64 v243; // rsi
  __int64 v244; // rax
  __int64 v245; // rcx
  __int64 v246; // rsi
  __int64 v247; // rcx
  __int64 v248; // rdx
  unsigned __int64 v249; // rax
  __m128i v251; // xmm0
  __m128i v252; // xmm0
  __int64 j; // r8
  unsigned __int64 v254; // rax
  __m128i v255; // xmm2
  __int64 v257; // r10
  __int64 v258; // rdx
  __int64 v259; // rcx
  __m128i v260; // xmm0
  __m128i v261; // xmm1
  __m128i v262; // xmm2
  void *v263; // rax
  __int64 v264; // rdi
  __int64 v265; // rax
  __int64 v266; // rcx
  __int64 v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rcx
  unsigned __int64 v270; // rax
  __m128i v272; // xmm0
  __m128i v273; // xmm0
  __int64 v274; // r8
  __m128i v275; // xmm2
  __m128i v276; // xmm3
  unsigned __int64 v277; // rax
  __m128i v278; // xmm4
  __int64 v280; // r10
  __m128i *v281; // rax
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rsi
  __int64 v286; // rax
  __int64 v287; // rcx
  __int64 v288; // rdx
  __int64 v289; // rax
  __int64 v290; // rsi
  __int64 v291; // rax
  __int64 v292; // rcx
  unsigned __int64 v293; // rax
  unsigned __int128 v295; // kr110_16
  __m128i v296; // xmm0
  __m128i v297; // xmm0
  __int64 v298; // rcx
  __m128i v299; // xmm6
  __m128i v300; // xmm7
  unsigned __int64 v301; // rax
  __m128i v302; // xmm2
  __int64 v304; // r8
  void *v305; // rax
  __int64 v306; // rdi
  __int64 v307; // rax
  __int64 v308; // rcx
  __int64 v309; // rdi
  __int64 v310; // rax
  __int64 v311; // rcx
  __int64 v312; // rdi
  __int64 v313; // rcx
  __int64 v314; // rdx
  unsigned __int64 v315; // rax
  __m128i v317; // xmm0
  __m128i v318; // xmm0
  __int64 v319; // rcx
  __m128i v320; // xmm2
  __m128i v321; // xmm3
  unsigned __int64 v322; // rax
  __m128i v323; // xmm4
  __int64 v325; // r8
  unsigned __int64 v326; // rax
  __m128i v328; // xmm0
  __m128i v329; // xmm0
  __int64 k; // rcx
  unsigned __int64 v331; // rax
  __m128i v332; // xmm2
  __int64 v334; // r8
  __m128i *v335; // rax
  __int64 v336; // rsi
  __int64 v337; // rax
  __int64 v338; // rcx
  __int64 v339; // rsi
  __int64 v340; // rax
  __int64 v341; // rcx
  __int64 v342; // rdx
  unsigned __int128 v343; // kr120_16
  unsigned __int64 v344; // rax
  __m128i v346; // xmm0
  __m128i v347; // xmm0
  __int64 v348; // r8
  __m128i v349; // xmm2
  __m128i v350; // xmm3
  unsigned __int64 v351; // rax
  __m128i v352; // xmm4
  __int64 v354; // r10
  __int64 v355; // rax
  __int64 v356; // rsi
  __int64 v357; // rax
  __int64 v358; // rcx
  __int64 v359; // rsi
  __int64 v360; // rax
  __int64 v361; // rcx
  __int64 v362; // rdx
  __int64 v363; // rax
  __int64 v364; // rsi
  __int64 v365; // rax
  __int64 v366; // rcx
  __m128i v367; // xmm0
  __m128i v368; // xmm1
  __m128i v369; // xmm2
  __int64 v370; // rsi
  __int64 v371; // rax
  __int64 v372; // rcx
  __int64 v373; // r14
  __int64 v374; // rax
  __int64 v375; // rcx
  __int64 v376; // r13
  __int64 v377; // rbx
  __int64 v378; // rdi
  __int64 v379; // rsi
  __int64 v380; // r15
  __int64 v381; // r12
  __int64 v382; // rsi
  __int64 v383; // rbx
  __int64 v384; // r15
  __int64 v385; // rdi
  __int64 v386; // r12
  __int64 v387; // r14
  __int64 v388; // r13
  __int64 v389; // rsi
  __int64 v390; // rsi
  __int64 v391; // r15
  __int64 v392; // rbx
  __int64 v393; // rsi
  __int64 v394; // rax
  __int64 v395; // rcx
  __int64 v396; // rbx
  __int64 v397; // rsi
  __int64 v398; // rax
  __int64 v399; // rcx
  const char *v400; // rdi
  unsigned __int64 v401; // rax
  unsigned __int128 v403; // kr130_16
  __m128i v404; // xmm0
  __m128i v405; // xmm0
  __int64 v406; // rcx
  __m128i v407; // xmm6
  __m128i v408; // xmm7
  unsigned __int64 v409; // rax
  __m128i v410; // xmm2
  __int64 v412; // r8
  unsigned __int64 v413; // rax
  __m128i v415; // xmm0
  __m128i v416; // xmm0
  __int64 v417; // rcx
  __m128i v418; // xmm2
  __m128i v419; // xmm3
  unsigned __int64 v420; // rax
  __m128i v421; // xmm4
  __int64 v423; // r8
  unsigned __int64 v424; // rax
  __m128i v426; // xmm0
  __m128i v427; // xmm0
  __int64 m; // rcx
  unsigned __int64 v429; // rax
  __m128i v430; // xmm2
  int v432; // r10d
  __m128i v433; // xmm0
  __m128i v434; // xmm1
  __m128i v435; // xmm2
  unsigned __int64 v436; // rax
  __m128i v438; // xmm0
  __m128i v439; // xmm0
  __int64 n; // r8
  unsigned __int64 v441; // rax
  __m128i v442; // xmm2
  __int64 v444; // r10
  __m128i v445; // xmm1
  __m128i v446; // xmm2
  __m128i v447; // xmm3
  __m128i v448; // kr140_16
  __int64 v449; // r15
  __int64 v450; // rsi
  __int128 v451; // kr160_16
  __int64 v452; // r14
  __int64 v453; // r15
  __m128i v454; // kr180_16
  __int64 v455; // rbx
  __int64 v456; // r14
  __int64 v457; // r15
  __int64 v458; // rax
  __int64 v459; // rdi
  __int64 v460; // rax
  __int64 v461; // rcx
  unsigned __int64 v462; // rax
  __m128i v464; // xmm0
  __m128i v465; // xmm0
  __int64 v466; // r8
  __m128i v467; // xmm2
  __m128i v468; // xmm3
  unsigned __int64 v469; // rax
  __m128i v470; // xmm4
  __int64 v472; // r10
  __m128i *v473; // rax
  __int64 v474; // rdi
  __int64 v475; // rax
  __int64 v476; // rcx
  __int64 v477; // rsi
  __int64 v478; // rax
  __int64 v479; // rcx
  __int64 v480; // rbx
  __int64 v481; // rsi
  unsigned __int128 v482; // kr1A0_16
  __int64 v483; // rax
  char *v484; // rcx
  __int64 v485; // r14
  __int64 v486; // r12
  unsigned __int64 v487; // rbx
  __m128i v489; // xmm0
  __m128i v490; // xmm7
  __int64 ii; // rcx
  unsigned __int64 v492; // rbx
  __m128i v493; // xmm8
  __int64 v495; // rax
  __int64 v496; // rdx
  __int64 v497; // rcx
  __m128i v498; // xmm0
  __m128i v499; // xmm1
  __m128i v500; // xmm2
  __int64 v501; // rdi
  __int64 v502; // rsi
  __int64 v503; // rax
  __int64 v504; // rsi
  __m128i v505; // xmm1
  __m128i v506; // xmm2
  __m128i v507; // xmm3
  __m128i v508; // kr1B0_16
  __int64 v509; // rsi
  __int64 v510; // rdi
  __int128 v511; // kr1D0_16
  __int64 v512; // r12
  __int64 v513; // rsi
  __m128i v514; // kr1F0_16
  __int64 v515; // r14
  __int64 v516; // r12
  __int64 v517; // rsi
  __int64 v518; // rax
  __int64 v519; // rcx
  __int64 v520; // r8
  __int64 v521; // rsi
  __int64 v522; // rax
  __int64 v523; // rcx
  __int64 v524; // rcx
  __m128i v525; // xmm0
  __m128i v526; // xmm1
  __int64 v527; // rcx
  __int64 v528; // rsi
  _QWORD *v529; // rdi
  __int64 v530; // rdx
  __int64 v532; // rsi
  __int64 v533; // rbx
  const __m128i *v534; // r14
  __m128i v536; // xmm0
  __int64 v537; // rax
  __int64 v538; // rdx
  unsigned __int64 v539; // rax
  __int64 v540; // rdi
  __m128i v542; // [rsp+48h] [rbp-38h] BYREF
  __int64 v543; // [rsp+58h] [rbp-28h]
  __m128i v544; // [rsp+60h] [rbp-20h] BYREF
  __int64 v545; // [rsp+70h] [rbp-10h]
  __m128i v546; // [rsp+78h] [rbp-8h] BYREF
  __int64 v547; // [rsp+88h] [rbp+8h]
  __m128i v548; // [rsp+90h] [rbp+10h] BYREF
  __int64 v549; // [rsp+A0h] [rbp+20h]
  __m128i v550; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v551; // [rsp+B8h] [rbp+38h]
  __m128i v552; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v553; // [rsp+D0h] [rbp+50h]
  __m128i v554; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v555; // [rsp+E8h] [rbp+68h]
  __m128i v556; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v557; // [rsp+100h] [rbp+80h]
  __m128i v558; // [rsp+108h] [rbp+88h] BYREF
  __int64 v559; // [rsp+118h] [rbp+98h]
  __m128i v560; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v561; // [rsp+130h] [rbp+B0h]
  __m128i v562; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v563; // [rsp+148h] [rbp+C8h]
  __int64 v564; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v565; // [rsp+158h] [rbp+D8h]
  __int64 v566; // [rsp+160h] [rbp+E0h]
  __int64 *v567; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v568; // [rsp+178h] [rbp+F8h]
  __int64 v569; // [rsp+180h] [rbp+100h] BYREF
  __int64 v570; // [rsp+188h] [rbp+108h]
  __int64 v571; // [rsp+190h] [rbp+110h]
  __m128i v572; // [rsp+198h] [rbp+118h] BYREF
  __m128i v573; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v574; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v575; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v576; // [rsp+1D8h] [rbp+158h]
  __int128 v577; // [rsp+1E8h] [rbp+168h]
  __int64 v578; // [rsp+1F8h] [rbp+178h]
  unsigned __int128 v579; // [rsp+200h] [rbp+180h]
  __m128i v580; // [rsp+210h] [rbp+190h]
  __int128 v581; // [rsp+220h] [rbp+1A0h] BYREF
  char v582; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int64 v583; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v584; // [rsp+248h] [rbp+1C8h]
  __int64 v585; // [rsp+250h] [rbp+1D0h]
  __int64 v586; // [rsp+258h] [rbp+1D8h]
  __m128i v587; // [rsp+260h] [rbp+1E0h] BYREF
  __m256i v588; // [rsp+270h] [rbp+1F0h] BYREF
  __m128i v589; // [rsp+290h] [rbp+210h]
  __int128 v590; // [rsp+2A0h] [rbp+220h]
  __int128 v591; // [rsp+2B0h] [rbp+230h]
  __m128i v592; // [rsp+2D0h] [rbp+250h] BYREF
  __m256i v593; // [rsp+2E0h] [rbp+260h] BYREF
  char v594; // [rsp+306h] [rbp+286h]
  char v595; // [rsp+307h] [rbp+287h]
  char v596; // [rsp+308h] [rbp+288h]
  char v597; // [rsp+309h] [rbp+289h]
  char v598; // [rsp+30Ah] [rbp+28Ah]
  char v599; // [rsp+30Bh] [rbp+28Bh]
  __int64 v600; // [rsp+310h] [rbp+290h]
  __m128i v601; // [rsp+318h] [rbp+298h] BYREF
  __int64 v602; // [rsp+328h] [rbp+2A8h]
  __int64 (__fastcall *v603)(_QWORD, _QWORD); // [rsp+330h] [rbp+2B0h]
  char v604; // [rsp+338h] [rbp+2B8h]
  char v605; // [rsp+339h] [rbp+2B9h]
  char v606; // [rsp+33Ah] [rbp+2BAh]
  char v607; // [rsp+33Bh] [rbp+2BBh]
  char v608; // [rsp+33Ch] [rbp+2BCh]
  char v609; // [rsp+33Dh] [rbp+2BDh]
  char v610; // [rsp+33Eh] [rbp+2BEh]
  char v611; // [rsp+33Fh] [rbp+2BFh]
  __m128i v612; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v613; // [rsp+350h] [rbp+2D0h]
  char v614; // [rsp+35Fh] [rbp+2DFh]
  __int64 v615; // [rsp+360h] [rbp+2E0h]
  __int64 v616; // [rsp+368h] [rbp+2E8h]

  v616 = -2;
  v568 = a4;
  v570 = a1;
  v578 = a2;
  v571 = a3;
  sub_1409A45C0(&v564, a2, a3, 0);
  v8 = v565;
  v9 = v566;
  v10 = sub_1416AE140();
  v11 = v10;
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v12 = *(_OWORD *)v10;
  }
  else
  {
    *(_QWORD *)&v12 = sub_1416C5230();
    *(_OWORD *)v11 = v12;
    *(_BYTE *)(v11 + 16) = 1;
  }
  v13 = v12 + 1;
  *(_QWORD *)v11 = v12 + 1;
  *(_OWORD *)v588.m256i_i8 = xmmword_141A57990;
  v587 = _mm_loadu_si128((const __m128i *)&off_141A57980);
  for ( *(_OWORD *)&v588.m256i_u64[2] = v12; v9; --v9 )
  {
    if ( *(_BYTE *)(v8 + 96) == 1 && (*(_QWORD *)(v8 + 40) != 2 || **(_WORD **)(v8 + 32) != 27503) )
    {
      sub_1416DB410(&v572, v8);
      sub_140871180(&v587, &v572);
    }
    v8 += 104;
  }
  v14 = _mm_load_si128(&v587);
  si128 = _mm_load_si128((const __m128i *)&v588);
  HIDWORD(_RAX) = v588.m256i_i32[7];
  v581 = *(_OWORD *)&v588.m256i_u64[2];
  v580 = si128;
  v579 = (unsigned __int128)v14;
  v17 = si128.m128i_i64[1];
  if ( !si128.m128i_i64[1] )
  {
    v601.m128i_i64[0] = 0;
    v601.m128i_i64[1] = 8;
    v602 = 0;
    v572.m128i_i64[0] = 0;
    v572.m128i_i64[1] = 8;
    v573.m128i_i64[0] = 0;
    nullsub_1(v13, *((_QWORD *)&v12 + 1));
    v28 = sub_140001650(24, 8);
    if ( !v28 )
      sub_14196B2C1(8, 24);
    v31 = (_QWORD *)v28;
    nullsub_1(v30, v29);
    v32 = sub_140001650(33, 1);
    if ( !v32 )
    {
      v615 = (__int64)v31;
      sub_14196B2DB(1, 33);
    }
    *(_OWORD *)(v32 + 16) = xmmword_141A64845;
    *(_OWORD *)v32 = xmmword_141A64835;
    *(_BYTE *)(v32 + 32) = -115;
    *v31 = 33;
    v31[1] = v32;
    v31[2] = 33;
    v588.m256i_i64[0] = v602;
    v33 = _mm_loadu_si128(&v601);
    v587 = v33;
    v588.m256i_i64[3] = v573.m128i_i64[0];
    *(__m128i *)&v588.m256i_u64[1] = _mm_loadu_si128(&v572);
    v34 = v570;
    *(_OWORD *)(v570 + 40) = *(_OWORD *)&v588.m256i_u64[2];
    *(_QWORD *)(v34 + 24) = v588.m256i_i64[0];
    HIDWORD(_RAX) = v588.m256i_i32[3];
    *(_QWORD *)(v34 + 32) = v588.m256i_i64[1];
    *(__m128i *)(v34 + 8) = v33;
    *(_QWORD *)(v34 + 56) = 1;
    *(_QWORD *)(v34 + 64) = v31;
    *(_QWORD *)(v34 + 72) = 1;
    *(_QWORD *)v34 = -1;
    v36 = *((_QWORD *)&v579 + 1);
    if ( !*((_QWORD *)&v579 + 1) )
      goto LABEL_445;
    goto LABEL_38;
  }
  v18 = v579;
  if ( !a6 )
  {
    v37 = (const __m128i *)(v579 + 16);
    _ECX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v579));
    v39 = v579;
    do
    {
      if ( v17-- == 0 )
        goto LABEL_12;
      if ( !(_WORD)_ECX )
      {
        do
        {
          v43 = _mm_load_si128(v37);
          v39 -= 384;
          ++v37;
          _ECX = _mm_movemask_epi8(v43) ^ 0xFFFF;
        }
        while ( !_ECX );
      }
      __asm { tzcnt   eax, ecx }
      v40 = _ECX & (_ECX - 1);
      _RAX = sub_1409A3960(*(_QWORD *)(v39 - 24 * _RAX - 16), *(_QWORD *)(v39 - 24 * _RAX - 8));
      _ECX = v40;
    }
    while ( (_RAX & 1) == 0 );
    nullsub_1(v40, v41);
    _RAX = sub_140001650(59, 1);
    if ( !_RAX )
      sub_14196B2DB(1, 59);
    qmemcpy((void *)(_RAX + 16), "ll requires a verified ChatGPT quiet window", 43);
    *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A64856);
    v56 = (_QWORD *)v570;
    *(_QWORD *)v570 = 10;
    v56[1] = 59;
    v56[2] = _RAX;
    v56[3] = 59;
    v36 = *((_QWORD *)&v579 + 1);
    if ( !*((_QWORD *)&v579 + 1) )
      goto LABEL_445;
LABEL_38:
    v57 = v580.m128i_i64[1];
    if ( v580.m128i_i64[1] )
    {
      v58 = v579;
      v59 = (const __m128i *)(v579 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v579));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v61 = _mm_load_si128(v59);
            v58 -= 384;
            ++v59;
            _R15D = _mm_movemask_epi8(v61) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v62 = -3LL * _RAX;
        v63 = *(_QWORD *)(v58 + 8 * v62 - 24);
        if ( v63 )
          sub_140001660(*(_QWORD *)(v58 + 8 * v62 - 16), v63, 1);
        --v57;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v57 );
    }
    goto LABEL_443;
  }
LABEL_12:
  v592.m128i_i64[0] = 0;
  v592.m128i_i64[1] = 8;
  *(_OWORD *)v593.m256i_i8 = 0u;
  *(_OWORD *)&v593.m256i_u64[2] = 8u;
  v612.m128i_i64[0] = 0;
  v612.m128i_i64[1] = 8;
  v613 = 0;
  v583 = 0;
  v584 = 8;
  v585 = 0;
  v19 = sub_1406D0E00(&v581, aAuthIntegrity, 14);
  v21 = _mm_cvtsi32_si128(v19 >> 57);
  v22 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v21, v21), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v24 = *((_QWORD *)&v579 + 1) & v19;
    v25 = _mm_loadu_si128((const __m128i *)(v18 + v24));
    _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v25, v22));
    if ( _R8D )
      break;
LABEL_17:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v25, (__m128i)-1LL)) )
      goto LABEL_63;
    v19 = i + v24 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r9d, r8d }
    v27 = -3LL * (*((_QWORD *)&v579 + 1) & (v24 + _R9));
    if ( *(_QWORD *)(v18 + 8 * v27 - 8) == 14
      && !(**(_QWORD **)(v18 + 8 * v27 - 16) ^ 0x746E695F68747561LL
         | *(_QWORD *)(*(_QWORD *)(v18 + 8 * v27 - 16) + 6LL) ^ 0x797469726765746ELL) )
    {
      break;
    }
    _R9 = (unsigned int)(_R8D - 1);
    LOWORD(_R9) = _R8D & (_R8D - 1);
    _R8D = _R9;
    if ( !(_WORD)_R9 )
      goto LABEL_17;
  }
  sub_140A9C3A0((unsigned int)&v572, a8, (unsigned int)aAuthIntegrity, 14, v578, v571);
  if ( v572.m128i_i32[0] != -1 )
  {
    v591 = v577;
    v590 = v576;
    v46 = _mm_loadu_si128(&v572);
    v47 = _mm_loadu_si128(&v573);
    v48 = _mm_loadu_si128(&v574);
    v589 = _mm_loadu_si128(&v575);
    *(__m128i *)&v588.m256i_u64[2] = v48;
    *(__m128i *)v588.m256i_i8 = v47;
    v587 = v46;
    nullsub_1(v45, v44);
    v49 = (void *)sub_140001650(14, 1);
    if ( !v49 )
      sub_14196B2DB(1, 14);
    v615 = (__int64)v49;
    qmemcpy(v49, "auth_integrity", 14);
    v50 = v593.m256i_i64[3];
    if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
      sub_141939F90(&v593.m256i_u64[1]);
    v51 = v593.m256i_i64[2];
    v52 = 3 * v50;
    *(_QWORD *)(v593.m256i_i64[2] + 8 * v52) = 14;
    *(_QWORD *)(v51 + 8 * v52 + 8) = v615;
    *(_QWORD *)(v51 + 8 * v52 + 16) = 14;
    v593.m256i_i64[3] = v50 + 1;
    v601.m128i_i64[0] = (__int64)&v587;
    v601.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v562, &unk_141A64891, &v601);
    v53 = v613;
    if ( v613 == v612.m128i_i64[0] )
      sub_141939F90(&v612);
    v54 = v612.m128i_i64[1];
    v55 = 3 * v53;
    *(_QWORD *)(v612.m128i_i64[1] + 8 * v55 + 16) = v563;
    *(__m128i *)(v54 + 8 * v55) = _mm_loadu_si128(&v562);
    v613 = v53 + 1;
    sub_140906570(&v587);
    goto LABEL_62;
  }
  v64 = _mm_loadu_si128((const __m128i *)&v573.m128i_u64[1]);
  v65 = _mm_loadu_si128((const __m128i *)&v574.m128i_u64[1]);
  v66 = _mm_loadu_si128((const __m128i *)&v575.m128i_u64[1]);
  v587 = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
  *(__m128i *)v588.m256i_i8 = v64;
  *(_QWORD *)&v590 = *((_QWORD *)&v576 + 1);
  v589 = v66;
  *(__m128i *)&v588.m256i_u64[2] = v65;
  v67 = v587;
  v601.m128i_i64[0] = v587.m128i_i64[1];
  v601.m128i_i64[1] = v587.m128i_i64[1];
  v602 = v587.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v587.m128i_i64[1] + 24 * v64.m128i_i64[0]);
  v68 = v593.m256i_i64[0];
  if ( v64.m128i_i64[0] > (unsigned __int64)(v592.m128i_i64[0] - v593.m256i_i64[0]) )
  {
    sub_141939070((unsigned int)&v592, v593.m256i_i32[0], v64.m128i_i32[0], 8, 24);
    v68 = v593.m256i_i64[0];
  }
  else if ( !v64.m128i_i64[0] )
  {
    goto LABEL_48;
  }
  sub_1419234B0(v592.m128i_i64[1] + 24 * v68, v67.m128i_i64[1], 24 * v64.m128i_i64[0]);
LABEL_48:
  v593.m256i_i64[0] = v64.m128i_i64[0] + v68;
  if ( v67.m128i_i64[0] )
    sub_140001660(v67.m128i_i64[1], 24 * v67.m128i_i64[0], 8);
  v69 = v589;
  v70 = v590;
  v71 = 24 * v590;
  v601.m128i_i64[0] = v589.m128i_i64[1];
  v601.m128i_i64[1] = v589.m128i_i64[1];
  v602 = v589.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v589.m128i_i64[1] + 24 * v590);
  v72 = v613;
  if ( (unsigned __int64)v590 > v612.m128i_i64[0] - v613 )
  {
    sub_141939070((unsigned int)&v612, v613, v590, 8, 24);
    v72 = v613;
    goto LABEL_52;
  }
  if ( (_QWORD)v590 )
LABEL_52:
    sub_1419234B0(v612.m128i_i64[1] + 24 * v72, v69.m128i_i64[1], v71);
  v613 = v70 + v72;
  if ( v69.m128i_i64[0] )
    sub_140001660(v69.m128i_i64[1], 24 * v69.m128i_i64[0], 8);
  v73 = *(_OWORD *)&v588.m256i_u64[2];
  if ( v588.m256i_i64[3] )
  {
    v74 = (_QWORD *)(v588.m256i_i64[2] + 8);
    do
    {
      v75 = *(v74 - 1);
      if ( v75 )
        sub_140001660(*v74, v75, 1);
      v74 += 3;
      --*((_QWORD *)&v73 + 1);
    }
    while ( *((_QWORD *)&v73 + 1) );
  }
  if ( v588.m256i_i64[1] )
    sub_140001660(v73, 24 * v588.m256i_i64[1], 8);
LABEL_62:
  if ( !v580.m128i_i64[1] )
    goto LABEL_383;
LABEL_63:
  v76 = sub_1406D0E00(&v581, &xmmword_141A603E9, 26);
  v78 = _mm_cvtsi32_si128(v76 >> 57);
  v79 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v78, v78), 0), 68);
  v80 = 0;
  v81 = _mm_load_si128((const __m128i *)&xmmword_141A57110);
  v82 = _mm_load_si128((const __m128i *)&xmmword_141A57120);
  while ( 1 )
  {
    v83 = *((_QWORD *)&v579 + 1) & v76;
    v84 = _mm_loadu_si128((const __m128i *)(v579 + v83));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v84, v79));
    if ( _R9D )
      break;
LABEL_68:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v84, (__m128i)-1LL)) )
      goto LABEL_93;
    v76 = v80 + v83 + 16;
    v80 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v86 = -3LL * (*((_QWORD *)&v579 + 1) & (v83 + _R10));
    if ( *(_QWORD *)(v579 + 8 * v86 - 8) == 26
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v86 - 16) + 10LL)), v81),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v86 - 16)), v82))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_68;
  }
  sub_140A9C640((unsigned int)&v572, a8, (unsigned int)&xmmword_141A603E9, 26, v578, v571);
  if ( v572.m128i_i32[0] != -1 )
  {
    v591 = v577;
    v590 = v576;
    v89 = _mm_loadu_si128(&v572);
    v90 = _mm_loadu_si128(&v573);
    v91 = _mm_loadu_si128(&v574);
    v589 = _mm_loadu_si128(&v575);
    *(__m128i *)&v588.m256i_u64[2] = v91;
    *(__m128i *)v588.m256i_i8 = v90;
    v587 = v89;
    nullsub_1(v88, v87);
    v92 = sub_140001650(26, 1);
    if ( !v92 )
      sub_14196B2DB(1, 26);
    *(_OWORD *)(v92 + 10) = *(__int128 *)((char *)&xmmword_141A603E9 + 10);
    v615 = v92;
    *(__m128i *)v92 = _mm_loadu_si128((const __m128i *)&xmmword_141A603E9);
    v93 = v593.m256i_i64[3];
    if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
      sub_141939F90(&v593.m256i_u64[1]);
    v94 = v593.m256i_i64[2];
    v95 = 3 * v93;
    *(_QWORD *)(v593.m256i_i64[2] + 8 * v95) = 26;
    *(_QWORD *)(v94 + 8 * v95 + 8) = v615;
    *(_QWORD *)(v94 + 8 * v95 + 16) = 26;
    v593.m256i_i64[3] = v93 + 1;
    v601.m128i_i64[0] = (__int64)&v587;
    v601.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v560, &unk_141A648A4, &v601);
    v96 = v613;
    if ( v613 == v612.m128i_i64[0] )
      sub_141939F90(&v612);
    v97 = v612.m128i_i64[1];
    v98 = 3 * v96;
    *(_QWORD *)(v612.m128i_i64[1] + 8 * v98 + 16) = v561;
    *(__m128i *)(v97 + 8 * v98) = _mm_loadu_si128(&v560);
    v613 = v96 + 1;
    sub_140906570(&v587);
    goto LABEL_92;
  }
  v99 = _mm_loadu_si128((const __m128i *)&v573.m128i_u64[1]);
  v100 = _mm_loadu_si128((const __m128i *)&v574.m128i_u64[1]);
  v101 = _mm_loadu_si128((const __m128i *)&v575.m128i_u64[1]);
  v587 = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
  *(__m128i *)v588.m256i_i8 = v99;
  *(_QWORD *)&v590 = *((_QWORD *)&v576 + 1);
  v589 = v101;
  *(__m128i *)&v588.m256i_u64[2] = v100;
  v102 = v587;
  v601.m128i_i64[0] = v587.m128i_i64[1];
  v601.m128i_i64[1] = v587.m128i_i64[1];
  v602 = v587.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v587.m128i_i64[1] + 24 * v99.m128i_i64[0]);
  v103 = v593.m256i_i64[0];
  if ( v99.m128i_i64[0] > (unsigned __int64)(v592.m128i_i64[0] - v593.m256i_i64[0]) )
  {
    sub_141939070((unsigned int)&v592, v593.m256i_i32[0], v99.m128i_i32[0], 8, 24);
    v103 = v593.m256i_i64[0];
  }
  else if ( !v99.m128i_i64[0] )
  {
    goto LABEL_80;
  }
  sub_1419234B0(v592.m128i_i64[1] + 24 * v103, v102.m128i_i64[1], 24 * v99.m128i_i64[0]);
LABEL_80:
  v593.m256i_i64[0] = v99.m128i_i64[0] + v103;
  if ( v102.m128i_i64[0] )
    sub_140001660(v102.m128i_i64[1], 24 * v102.m128i_i64[0], 8);
  v104 = v588.m256i_i64[1];
  v105 = *(_OWORD *)&v588.m256i_u64[2];
  v106 = 24 * v588.m256i_i64[3];
  v601.m128i_i64[0] = v588.m256i_i64[2];
  v601.m128i_i64[1] = v588.m256i_i64[2];
  v602 = v588.m256i_i64[1];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v588.m256i_i64[2] + 24 * v588.m256i_i64[3]);
  v107 = v593.m256i_i64[3];
  if ( v588.m256i_i64[3] > (unsigned __int64)(v593.m256i_i64[1] - v593.m256i_i64[3]) )
  {
    sub_141939070((unsigned int)&v593.m256i_u32[2], v593.m256i_i32[6], v588.m256i_i32[6], 8, 24);
    v107 = v593.m256i_i64[3];
  }
  else if ( !v588.m256i_i64[3] )
  {
    goto LABEL_85;
  }
  sub_1419234B0(v593.m256i_i64[2] + 24 * v107, v105, v106);
LABEL_85:
  v593.m256i_i64[3] = *((_QWORD *)&v105 + 1) + v107;
  if ( v104 )
    sub_140001660(v105, 24 * v104, 8);
  v108 = v589;
  v109 = v590;
  v110 = 24 * v590;
  v601.m128i_i64[0] = v589.m128i_i64[1];
  v601.m128i_i64[1] = v589.m128i_i64[1];
  v602 = v589.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v589.m128i_i64[1] + 24 * v590);
  v111 = v613;
  if ( (unsigned __int64)v590 > v612.m128i_i64[0] - v613 )
  {
    sub_141939070((unsigned int)&v612, v613, v590, 8, 24);
    v111 = v613;
  }
  else if ( !(_QWORD)v590 )
  {
    goto LABEL_90;
  }
  sub_1419234B0(v612.m128i_i64[1] + 24 * v111, v108.m128i_i64[1], v110);
LABEL_90:
  v613 = v109 + v111;
  if ( v108.m128i_i64[0] )
    sub_140001660(v108.m128i_i64[1], 24 * v108.m128i_i64[0], 8);
LABEL_92:
  if ( !v580.m128i_i64[1] )
    goto LABEL_383;
LABEL_93:
  v112 = sub_1406D0E00(&v581, aTakeoverBackup, 22);
  v114 = _mm_cvtsi32_si128(v112 >> 57);
  v115 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v114, v114), 0), 68);
  v116 = 0;
  v117 = _mm_load_si128((const __m128i *)&xmmword_141A57150);
  v118 = _mm_load_si128((const __m128i *)&xmmword_141A57160);
  while ( 1 )
  {
    v119 = *((_QWORD *)&v579 + 1) & v112;
    v120 = _mm_loadu_si128((const __m128i *)(v579 + v119));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v120, v115));
    if ( _R9D )
      break;
LABEL_98:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v120, (__m128i)-1LL)) )
      goto LABEL_123;
    v112 = v116 + v119 + 16;
    v116 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v122 = -3LL * (*((_QWORD *)&v579 + 1) & (v119 + _R10));
    if ( *(_QWORD *)(v579 + 8 * v122 - 8) == 22
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v122 - 16) + 6LL)), v117),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v122 - 16)), v118))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_98;
  }
  sub_140A9C8E0((unsigned int)&v572, a8, (unsigned int)aTakeoverBackup, 22, v578, v571);
  if ( v572.m128i_i32[0] != -1 )
  {
    v591 = v577;
    v590 = v576;
    v125 = _mm_loadu_si128(&v572);
    v126 = _mm_loadu_si128(&v573);
    v127 = _mm_loadu_si128(&v574);
    v589 = _mm_loadu_si128(&v575);
    *(__m128i *)&v588.m256i_u64[2] = v127;
    *(__m128i *)v588.m256i_i8 = v126;
    v587 = v125;
    nullsub_1(v124, v123);
    v128 = sub_140001650(22, 1);
    if ( !v128 )
      sub_14196B2DB(1, 22);
    *(__m128i *)v128 = _mm_loadu_si128((const __m128i *)aTakeoverBackup);
    v615 = v128;
    *(_QWORD *)(v128 + 14) = 0x6E616870726F5F70LL;
    v129 = v593.m256i_i64[3];
    if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
      sub_141939F90(&v593.m256i_u64[1]);
    v130 = v593.m256i_i64[2];
    v131 = 3 * v129;
    *(_QWORD *)(v593.m256i_i64[2] + 8 * v131) = 22;
    *(_QWORD *)(v130 + 8 * v131 + 8) = v615;
    *(_QWORD *)(v130 + 8 * v131 + 16) = 22;
    v593.m256i_i64[3] = v129 + 1;
    v601.m128i_i64[0] = (__int64)&v587;
    v601.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v558, &unk_141A648C3, &v601);
    v132 = v613;
    if ( v613 == v612.m128i_i64[0] )
      sub_141939F90(&v612);
    v133 = v612.m128i_i64[1];
    v134 = 3 * v132;
    *(_QWORD *)(v612.m128i_i64[1] + 8 * v134 + 16) = v559;
    *(__m128i *)(v133 + 8 * v134) = _mm_loadu_si128(&v558);
    v613 = v132 + 1;
    sub_140906570(&v587);
    goto LABEL_122;
  }
  v135 = _mm_loadu_si128((const __m128i *)&v573.m128i_u64[1]);
  v136 = _mm_loadu_si128((const __m128i *)&v574.m128i_u64[1]);
  v137 = _mm_loadu_si128((const __m128i *)&v575.m128i_u64[1]);
  v587 = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
  *(__m128i *)v588.m256i_i8 = v135;
  *(_QWORD *)&v590 = *((_QWORD *)&v576 + 1);
  v589 = v137;
  *(__m128i *)&v588.m256i_u64[2] = v136;
  v138 = v587;
  v601.m128i_i64[0] = v587.m128i_i64[1];
  v601.m128i_i64[1] = v587.m128i_i64[1];
  v602 = v587.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v587.m128i_i64[1] + 24 * v135.m128i_i64[0]);
  v139 = v593.m256i_i64[0];
  if ( v135.m128i_i64[0] > (unsigned __int64)(v592.m128i_i64[0] - v593.m256i_i64[0]) )
  {
    sub_141939070((unsigned int)&v592, v593.m256i_i32[0], v135.m128i_i32[0], 8, 24);
    v139 = v593.m256i_i64[0];
  }
  else if ( !v135.m128i_i64[0] )
  {
    goto LABEL_110;
  }
  sub_1419234B0(v592.m128i_i64[1] + 24 * v139, v138.m128i_i64[1], 24 * v135.m128i_i64[0]);
LABEL_110:
  v593.m256i_i64[0] = v135.m128i_i64[0] + v139;
  if ( v138.m128i_i64[0] )
    sub_140001660(v138.m128i_i64[1], 24 * v138.m128i_i64[0], 8);
  v140 = v588.m256i_i64[1];
  v141 = *(_OWORD *)&v588.m256i_u64[2];
  v142 = 24 * v588.m256i_i64[3];
  v601.m128i_i64[0] = v588.m256i_i64[2];
  v601.m128i_i64[1] = v588.m256i_i64[2];
  v602 = v588.m256i_i64[1];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v588.m256i_i64[2] + 24 * v588.m256i_i64[3]);
  v143 = v593.m256i_i64[3];
  if ( v588.m256i_i64[3] > (unsigned __int64)(v593.m256i_i64[1] - v593.m256i_i64[3]) )
  {
    sub_141939070((unsigned int)&v593.m256i_u32[2], v593.m256i_i32[6], v588.m256i_i32[6], 8, 24);
    v143 = v593.m256i_i64[3];
  }
  else if ( !v588.m256i_i64[3] )
  {
    goto LABEL_115;
  }
  sub_1419234B0(v593.m256i_i64[2] + 24 * v143, v141, v142);
LABEL_115:
  v593.m256i_i64[3] = *((_QWORD *)&v141 + 1) + v143;
  if ( v140 )
    sub_140001660(v141, 24 * v140, 8);
  v144 = v589;
  v145 = v590;
  v146 = 24 * v590;
  v601.m128i_i64[0] = v589.m128i_i64[1];
  v601.m128i_i64[1] = v589.m128i_i64[1];
  v602 = v589.m128i_i64[0];
  v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v589.m128i_i64[1] + 24 * v590);
  v147 = v613;
  if ( (unsigned __int64)v590 > v612.m128i_i64[0] - v613 )
  {
    sub_141939070((unsigned int)&v612, v613, v590, 8, 24);
    v147 = v613;
  }
  else if ( !(_QWORD)v590 )
  {
    goto LABEL_120;
  }
  sub_1419234B0(v612.m128i_i64[1] + 24 * v147, v144.m128i_i64[1], v146);
LABEL_120:
  v613 = v145 + v147;
  if ( v144.m128i_i64[0] )
    sub_140001660(v144.m128i_i64[1], 24 * v144.m128i_i64[0], 8);
LABEL_122:
  if ( !v580.m128i_i64[1] )
    goto LABEL_383;
LABEL_123:
  v148 = sub_1406D0E00(&v581, aConfigTomlSynt, 18);
  v150 = _mm_cvtsi32_si128(v148 >> 57);
  v151 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v150, v150), 0), 68);
  v152 = 0;
  v153 = _mm_load_si128((const __m128i *)&xmmword_141A57210);
  v154 = _mm_cvtsi32_si128(0x7861u);
  while ( 1 )
  {
    v155 = *((_QWORD *)&v579 + 1) & v148;
    v156 = _mm_loadu_si128((const __m128i *)(v579 + v155));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v156, v151));
    if ( _R9D )
      break;
LABEL_128:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v156, (__m128i)-1LL)) )
    {
      v162 = 0;
LABEL_147:
      v183 = sub_1406D0E00(&v581, aConfigThirdPar, 18);
      v185 = _mm_cvtsi32_si128(v183 >> 57);
      v186 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v185, v185), 0), 68);
      v187 = 0;
      v188 = _mm_load_si128((const __m128i *)&xmmword_141A57230);
      v189 = _mm_cvtsi32_si128(0x7974u);
      while ( 1 )
      {
        v190 = *((_QWORD *)&v579 + 1) & v183;
        v191 = _mm_loadu_si128((const __m128i *)(v579 + v190));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v191, v186));
        if ( _R9D )
          break;
LABEL_152:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v191, (__m128i)-1LL)) )
          goto LABEL_172;
        v183 = v187 + v190 + 16;
        v187 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v193 = -3LL * (*((_QWORD *)&v579 + 1) & (v190 + _R10));
        if ( *(_QWORD *)(v579 + 8 * v193 - 8) == 18
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(
                   _mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v579 + 8 * v193 - 16) + 16LL)),
                   v189),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v193 - 16)), v188))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_152;
      }
      sub_140A9DE20((__int128 *)v572.m128i_i8, a8, (__int64)aConfigThirdPar);
      if ( v572.m128i_i32[0] == -1 )
      {
        v600 = v572.m128i_i64[1];
        v586 = v573.m128i_i64[0];
        nullsub_1(v195, v194);
        v206 = (__m128i *)sub_140001650(18, 1);
        if ( !v206 )
        {
          v598 = 1;
          sub_14196B2DB(1, 18);
        }
        *v206 = _mm_loadu_si128((const __m128i *)aConfigThirdPar);
        v206[1].m128i_i16[0] = 31092;
        v601.m128i_i64[0] = 18;
        v615 = (__int64)v206;
        v601.m128i_i64[1] = (__int64)v206;
        v602 = 18;
        v609 = 1;
        v608 = 1;
        sub_1416DB410(&v587, &v601);
        v207 = v593.m256i_i64[0];
        if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
          sub_141939F90(&v592);
        v208 = v592.m128i_i64[1];
        v209 = 3 * v207;
        *(_QWORD *)(v592.m128i_i64[1] + 8 * v209 + 16) = v588.m256i_i64[0];
        *(__m128i *)(v208 + 8 * v209) = _mm_loadu_si128(&v587);
        v593.m256i_i64[0] = v207 + 1;
        v210 = v585;
        if ( v585 == v583 )
          sub_141939F90(&v583);
        v211 = v584;
        v212 = 3 * v210;
        *(_QWORD *)(v584 + 8 * v212) = 18;
        *(_QWORD *)(v211 + 8 * v212 + 8) = v615;
        *(_QWORD *)(v211 + 8 * v212 + 16) = 18;
        v585 = v210 + 1;
        v213 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v214 = v612.m128i_i64[1];
        v215 = 3 * v213;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v215 + 16) = v573.m128i_i64[1];
        *(__m128i *)(v214 + 8 * v215) = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
        v613 = v213 + 1;
        v162 = 1;
        if ( !v580.m128i_i64[1] )
          goto LABEL_240;
      }
      else
      {
        v591 = v577;
        v590 = v576;
        v196 = _mm_loadu_si128(&v572);
        v197 = _mm_loadu_si128(&v573);
        v198 = _mm_loadu_si128(&v574);
        v589 = _mm_loadu_si128(&v575);
        *(__m128i *)&v588.m256i_u64[2] = v198;
        *(__m128i *)v588.m256i_i8 = v197;
        v587 = v196;
        nullsub_1(v195, v194);
        v199 = (__m128i *)sub_140001650(18, 1);
        if ( !v199 )
          sub_14196B2DB(1, 18);
        *v199 = _mm_loadu_si128((const __m128i *)aConfigThirdPar);
        v615 = (__int64)v199;
        v199[1].m128i_i16[0] = 31092;
        v200 = v593.m256i_i64[3];
        if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
          sub_141939F90(&v593.m256i_u64[1]);
        v201 = v593.m256i_i64[2];
        v202 = 3 * v200;
        *(_QWORD *)(v593.m256i_i64[2] + 8 * v202) = 18;
        *(_QWORD *)(v201 + 8 * v202 + 8) = v615;
        *(_QWORD *)(v201 + 8 * v202 + 16) = 18;
        v593.m256i_i64[3] = v200 + 1;
        v601.m128i_i64[0] = (__int64)&v587;
        v601.m128i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v554, &unk_141A64903, &v601);
        v203 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v204 = v612.m128i_i64[1];
        v205 = 3 * v203;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v205 + 16) = v555;
        *(__m128i *)(v204 + 8 * v205) = _mm_loadu_si128(&v554);
        v613 = v203 + 1;
        sub_140906570(&v587);
        if ( !v580.m128i_i64[1] )
        {
LABEL_240:
          if ( v162 )
            goto LABEL_279;
          goto LABEL_383;
        }
      }
LABEL_172:
      v216 = sub_1406D0E00(&v581, aConfigProfileC, 23);
      v218 = _mm_cvtsi32_si128(v216 >> 57);
      v219 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v218, v218), 0), 68);
      v220 = 0;
      v221 = _mm_load_si128((const __m128i *)&xmmword_141A57190);
      v222 = _mm_load_si128((const __m128i *)&xmmword_141A571A0);
      while ( 1 )
      {
        v223 = *((_QWORD *)&v579 + 1) & v216;
        v224 = _mm_loadu_si128((const __m128i *)(v579 + v223));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v224, v219));
        if ( _R9D )
          break;
LABEL_177:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v224, (__m128i)-1LL)) )
          goto LABEL_195;
        v216 = v220 + v223 + 16;
        v220 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v226 = -3LL * (*((_QWORD *)&v579 + 1) & (v223 + _R10));
        if ( *(_QWORD *)(v579 + 8 * v226 - 8) == 23
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v226 - 16) + 7LL)), v221),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v226 - 16)), v222))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_177;
      }
      sub_140A9E0E0((__int128 *)v572.m128i_i8, a8);
      if ( v572.m128i_i32[0] == -1 )
      {
        v600 = v572.m128i_i64[1];
        v586 = v573.m128i_i64[0];
        nullsub_1(v228, v227);
        v239 = sub_140001650(23, 1);
        if ( !v239 )
        {
          v597 = 1;
          sub_14196B2DB(1, 23);
        }
        *(__m128i *)v239 = _mm_loadu_si128((const __m128i *)aConfigProfileC);
        *(_QWORD *)(v239 + 15) = 0x7463696C666E6F63LL;
        v601.m128i_i64[0] = 23;
        v615 = v239;
        v601.m128i_i64[1] = v239;
        v602 = 23;
        v607 = 1;
        v606 = 1;
        sub_1416DB410(&v587, &v601);
        v240 = v593.m256i_i64[0];
        if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
          sub_141939F90(&v592);
        v241 = v592.m128i_i64[1];
        v242 = 3 * v240;
        *(_QWORD *)(v592.m128i_i64[1] + 8 * v242 + 16) = v588.m256i_i64[0];
        *(__m128i *)(v241 + 8 * v242) = _mm_loadu_si128(&v587);
        v593.m256i_i64[0] = v240 + 1;
        v243 = v585;
        if ( v585 == v583 )
          sub_141939F90(&v583);
        v244 = v584;
        v245 = 3 * v243;
        *(_QWORD *)(v584 + 8 * v245) = 23;
        *(_QWORD *)(v244 + 8 * v245 + 8) = v615;
        *(_QWORD *)(v244 + 8 * v245 + 16) = 23;
        v585 = v243 + 1;
        v246 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v247 = v612.m128i_i64[1];
        v248 = 3 * v246;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v248 + 16) = v573.m128i_i64[1];
        *(__m128i *)(v247 + 8 * v248) = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
        v613 = v246 + 1;
        v162 = 1;
        if ( !v580.m128i_i64[1] )
          goto LABEL_240;
      }
      else
      {
        v591 = v577;
        v590 = v576;
        v229 = _mm_loadu_si128(&v572);
        v230 = _mm_loadu_si128(&v573);
        v231 = _mm_loadu_si128(&v574);
        v589 = _mm_loadu_si128(&v575);
        *(__m128i *)&v588.m256i_u64[2] = v231;
        *(__m128i *)v588.m256i_i8 = v230;
        v587 = v229;
        nullsub_1(v228, v227);
        v232 = sub_140001650(23, 1);
        if ( !v232 )
          sub_14196B2DB(1, 23);
        *(__m128i *)v232 = _mm_loadu_si128((const __m128i *)aConfigProfileC);
        v615 = v232;
        *(_QWORD *)(v232 + 15) = 0x7463696C666E6F63LL;
        v233 = v593.m256i_i64[3];
        if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
          sub_141939F90(&v593.m256i_u64[1]);
        v234 = v593.m256i_i64[2];
        v235 = 3 * v233;
        *(_QWORD *)(v593.m256i_i64[2] + 8 * v235) = 23;
        *(_QWORD *)(v234 + 8 * v235 + 8) = v615;
        *(_QWORD *)(v234 + 8 * v235 + 16) = 23;
        v593.m256i_i64[3] = v233 + 1;
        v601.m128i_i64[0] = (__int64)&v587;
        v601.m128i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v552, &unk_141A6491A, &v601);
        v236 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v237 = v612.m128i_i64[1];
        v238 = 3 * v236;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v238 + 16) = v553;
        *(__m128i *)(v237 + 8 * v238) = _mm_loadu_si128(&v552);
        v613 = v236 + 1;
        sub_140906570(&v587);
        if ( !v580.m128i_i64[1] )
          goto LABEL_240;
      }
LABEL_195:
      v249 = sub_1406D0E00(&v581, aConfigStale, 12);
      v251 = _mm_cvtsi32_si128(v249 >> 57);
      v252 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v251, v251), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v254 = *((_QWORD *)&v579 + 1) & v249;
        v255 = _mm_loadu_si128((const __m128i *)(v579 + v254));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v255, v252));
        if ( _R9D )
          break;
LABEL_200:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v255, (__m128i)-1LL)) )
          goto LABEL_209;
        v249 = j + v254 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v257 = -3LL * (*((_QWORD *)&v579 + 1) & (v254 + _R10));
        if ( *(_QWORD *)(v579 + 8 * v257 - 8) == 12
          && !(**(_QWORD **)(v579 + 8 * v257 - 16) ^ 0x735F6769666E6F63LL
             | *(unsigned int *)(*(_QWORD *)(v579 + 8 * v257 - 16) + 8LL) ^ 0x656C6174LL) )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_200;
      }
      sub_140A9E3A0((__int128 *)v572.m128i_i8, a8);
      if ( v572.m128i_i32[0] == -1 )
      {
        v600 = v572.m128i_i64[1];
        v586 = v573.m128i_i64[0];
        nullsub_1(v259, v258);
        v305 = (void *)sub_140001650(12, 1);
        if ( !v305 )
        {
          v596 = 1;
          sub_14196B2DB(1, 12);
        }
        qmemcpy(v305, "config_stale", 12);
        v601.m128i_i64[0] = 12;
        v615 = (__int64)v305;
        v601.m128i_i64[1] = (__int64)v305;
        v602 = 12;
        v605 = 1;
        v604 = 1;
        sub_1416DB410(&v587, &v601);
        v306 = v593.m256i_i64[0];
        if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
          sub_141939F90(&v592);
        v307 = v592.m128i_i64[1];
        v308 = 3 * v306;
        *(_QWORD *)(v592.m128i_i64[1] + 8 * v308 + 16) = v588.m256i_i64[0];
        *(__m128i *)(v307 + 8 * v308) = _mm_loadu_si128(&v587);
        v593.m256i_i64[0] = v306 + 1;
        v309 = v585;
        if ( v585 == v583 )
          sub_141939F90(&v583);
        v310 = v584;
        v311 = 3 * v309;
        *(_QWORD *)(v584 + 8 * v311) = 12;
        *(_QWORD *)(v310 + 8 * v311 + 8) = v615;
        *(_QWORD *)(v310 + 8 * v311 + 16) = 12;
        v585 = v309 + 1;
        v312 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v313 = v612.m128i_i64[1];
        v314 = 3 * v312;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v314 + 16) = v573.m128i_i64[1];
        *(__m128i *)(v313 + 8 * v314) = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
        v613 = v312 + 1;
        v162 |= *(_BYTE *)(v571 + 364);
        if ( !v580.m128i_i64[1] )
          goto LABEL_240;
      }
      else
      {
        v591 = v577;
        v590 = v576;
        v260 = _mm_loadu_si128(&v572);
        v261 = _mm_loadu_si128(&v573);
        v262 = _mm_loadu_si128(&v574);
        v589 = _mm_loadu_si128(&v575);
        *(__m128i *)&v588.m256i_u64[2] = v262;
        *(__m128i *)v588.m256i_i8 = v261;
        v587 = v260;
        nullsub_1(v259, v258);
        v263 = (void *)sub_140001650(12, 1);
        if ( !v263 )
          sub_14196B2DB(1, 12);
        qmemcpy(v263, "config_stale", 12);
        v615 = (__int64)v263;
        v264 = v593.m256i_i64[3];
        if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
          sub_141939F90(&v593.m256i_u64[1]);
        v265 = v593.m256i_i64[2];
        v266 = 3 * v264;
        *(_QWORD *)(v593.m256i_i64[2] + 8 * v266) = 12;
        *(_QWORD *)(v265 + 8 * v266 + 8) = v615;
        *(_QWORD *)(v265 + 8 * v266 + 16) = 12;
        v593.m256i_i64[3] = v264 + 1;
        v601.m128i_i64[0] = (__int64)&v587;
        v601.m128i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v550, &unk_141A64936, &v601);
        v267 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v268 = v612.m128i_i64[1];
        v269 = 3 * v267;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v269 + 16) = v551;
        *(__m128i *)(v268 + 8 * v269) = _mm_loadu_si128(&v550);
        v613 = v267 + 1;
        sub_140906570(&v587);
        if ( !v580.m128i_i64[1] )
          goto LABEL_240;
      }
LABEL_209:
      v270 = sub_1406D0E00(&v581, aRouterHttpCont, 20);
      v272 = _mm_cvtsi32_si128(v270 >> 57);
      v273 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v272, v272), 0), 68);
      v274 = 0;
      v275 = _mm_cvtsi32_si128(0x74636172u);
      v276 = _mm_load_si128((const __m128i *)&xmmword_141A57270);
      while ( 1 )
      {
        v277 = *((_QWORD *)&v579 + 1) & v270;
        v278 = _mm_loadu_si128((const __m128i *)(v579 + v277));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v278, v273));
        if ( _R9D )
          break;
LABEL_214:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v278, (__m128i)-1LL)) )
          goto LABEL_225;
        v270 = v274 + v277 + 16;
        v274 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v280 = -3LL * (*((_QWORD *)&v579 + 1) & (v277 + _R10));
        if ( *(_QWORD *)(v579 + 8 * v280 - 8) == 20
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v579 + 8 * v280 - 16) + 16LL)), v275),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v280 - 16)), v276))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_214;
      }
      nullsub_1(v579, *((_QWORD *)&v579 + 1));
      v281 = (__m128i *)sub_140001650(20, 1);
      if ( !v281 )
        sub_14196B2DB(1, 20);
      *v281 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
      v281[1].m128i_i32[0] = 1952670066;
      v572.m128i_i64[0] = 20;
      v615 = (__int64)v281;
      v572.m128i_i64[1] = (__int64)v281;
      v573.m128i_i64[0] = 20;
      v614 = 1;
      sub_1416DB410(&v587, &v572);
      v282 = v593.m256i_i64[0];
      if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
        sub_141939F90(&v592);
      v283 = v592.m128i_i64[1];
      v284 = 3 * v282;
      *(_QWORD *)(v592.m128i_i64[1] + 8 * v284 + 16) = v588.m256i_i64[0];
      *(__m128i *)(v283 + 8 * v284) = _mm_loadu_si128(&v587);
      v593.m256i_i64[0] = v282 + 1;
      v285 = v585;
      if ( v585 == v583 )
        sub_141939F90(&v583);
      v286 = v584;
      v287 = 3 * v285;
      *(_QWORD *)(v584 + 8 * v287) = 20;
      v288 = v615;
      *(_QWORD *)(v286 + 8 * v287 + 8) = v615;
      *(_QWORD *)(v286 + 8 * v287 + 16) = 20;
      v585 = v285 + 1;
      nullsub_1(3 * v285, v288);
      v289 = sub_140001650(45, 1);
      if ( !v289 )
      {
        v614 = 0;
        sub_14196B2DB(1, 45);
      }
      *(_OWORD *)(v289 + 29) = *(__int128 *)((char *)&xmmword_141A64957 + 13);
      *(_OWORD *)(v289 + 16) = xmmword_141A64957;
      v600 = v289;
      *(__m128i *)v289 = _mm_loadu_si128((const __m128i *)&xmmword_141A64947);
      v290 = v613;
      if ( v613 == v612.m128i_i64[0] )
        sub_141939F90(&v612);
      v291 = v612.m128i_i64[1];
      v292 = 3 * v290;
      *(_QWORD *)(v612.m128i_i64[1] + 8 * v292) = 45;
      *(_QWORD *)(v291 + 8 * v292 + 8) = v600;
      *(_QWORD *)(v291 + 8 * v292 + 16) = 45;
      v613 = v290 + 1;
      v162 = 1;
      if ( v580.m128i_i64[1] )
      {
LABEL_225:
        v293 = sub_1406D0E00(&v581, aCatalogIntegri, 17);
        v295 = v579;
        v296 = _mm_cvtsi32_si128(v293 >> 57);
        v297 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v296, v296), 0), 68);
        v298 = 0;
        v299 = _mm_load_si128((const __m128i *)&xmmword_141A57290);
        v300 = _mm_cvtsi32_si128(0x79u);
        while ( 1 )
        {
          v301 = *((_QWORD *)&v579 + 1) & v293;
          v302 = _mm_loadu_si128((const __m128i *)(v579 + v301));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v302, v297));
          if ( _EDX )
            break;
LABEL_230:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v302, (__m128i)-1LL)) )
          {
            v315 = sub_1406D0E00(&v581, aCatalogPathVal, 21);
            v317 = _mm_cvtsi32_si128(v315 >> 57);
            v318 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v317, v317), 0), 68);
            v319 = 0;
            v320 = _mm_load_si128((const __m128i *)&xmmword_141A57130);
            v321 = _mm_load_si128((const __m128i *)&xmmword_141A57140);
            while ( 1 )
            {
              v322 = *((_QWORD *)&v295 + 1) & v315;
              v323 = _mm_loadu_si128((const __m128i *)(v295 + v322));
              _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v323, v318));
              if ( _EDX )
              {
                do
                {
                  __asm { tzcnt   r8d, edx }
                  v325 = -3LL * (*((_QWORD *)&v295 + 1) & (v322 + _R8));
                  if ( *(_QWORD *)(v295 + 8 * v325 - 8) == 21
                    && _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(
                             _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v295 + 8 * v325 - 16) + 5LL)),
                             v320),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v295 + 8 * v325 - 16)), v321))) == 0xFFFF )
                  {
                    goto LABEL_249;
                  }
                  _R8 = (unsigned int)(_EDX - 1);
                  LOWORD(_R8) = _EDX & (_EDX - 1);
                  _EDX = _R8;
                }
                while ( (_WORD)_R8 );
              }
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v323, (__m128i)-1LL)) )
                break;
              v315 = v319 + v322 + 16;
              v319 += 16;
            }
            if ( v162 )
              goto LABEL_279;
            goto LABEL_319;
          }
          v293 = v298 + v301 + 16;
          v298 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v304 = -3LL * (*((_QWORD *)&v579 + 1) & (v301 + _R8));
          if ( *(_QWORD *)(v579 + 8 * v304 - 8) == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_cvtsi32_si128(*(unsigned __int8 *)(*(_QWORD *)(v579 + 8 * v304 - 16) + 16LL)),
                     v300),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v304 - 16)), v299))) == 0xFFFF )
          {
            break;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_230;
        }
LABEL_249:
        v326 = sub_1406D0E00(&v581, aCatalogIntegri, 17);
        v328 = _mm_cvtsi32_si128(v326 >> 57);
        v329 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v328, v328), 0), 68);
        for ( k = 0; ; k += 16 )
        {
          v331 = *((_QWORD *)&v295 + 1) & v326;
          v332 = _mm_loadu_si128((const __m128i *)(v295 + v331));
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v332, v329));
          if ( (_DWORD)_RDX )
            break;
LABEL_254:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v332, (__m128i)-1LL)) )
            goto LABEL_262;
          v326 = k + v331 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v334 = -3LL * (*((_QWORD *)&v295 + 1) & (v331 + _R8));
          if ( *(_QWORD *)(v295 + 8 * v334 - 8) == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_cvtsi32_si128(*(unsigned __int8 *)(*(_QWORD *)(v295 + 8 * v334 - 16) + 16LL)),
                     v300),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v295 + 8 * v334 - 16)), v299))) == 0xFFFF )
          {
            break;
          }
          _R8 = (unsigned int)(_RDX - 1);
          LOWORD(_R8) = _RDX & (_RDX - 1);
          _RDX = (unsigned int)_R8;
          if ( !(_WORD)_R8 )
            goto LABEL_254;
        }
        nullsub_1(k, _RDX);
        v335 = (__m128i *)sub_140001650(17, 1);
        if ( !v335 )
          sub_14196B2DB(1, 17);
        *v335 = _mm_loadu_si128((const __m128i *)aCatalogIntegri);
        v335[1].m128i_i8[0] = 121;
        v572.m128i_i64[0] = 17;
        v615 = (__int64)v335;
        v572.m128i_i64[1] = (__int64)v335;
        v573.m128i_i64[0] = 17;
        v595 = 1;
        sub_1416DB410(&v587, &v572);
        v336 = v593.m256i_i64[0];
        if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
          sub_141939F90(&v592);
        v337 = v592.m128i_i64[1];
        v338 = 3 * v336;
        *(_QWORD *)(v592.m128i_i64[1] + 8 * v338 + 16) = v588.m256i_i64[0];
        *(__m128i *)(v337 + 8 * v338) = _mm_loadu_si128(&v587);
        v593.m256i_i64[0] = v336 + 1;
        v339 = v585;
        if ( v585 == v583 )
          sub_141939F90(&v583);
        v340 = v584;
        v341 = 3 * v339;
        *(_QWORD *)(v584 + 8 * v341) = 17;
        v342 = v615;
        *(_QWORD *)(v340 + 8 * v341 + 8) = v615;
        *(_QWORD *)(v340 + 8 * v341 + 16) = 17;
        v585 = v339 + 1;
        v343 = __PAIR128__(v342, 3 * v339);
        if ( v580.m128i_i64[1] )
        {
LABEL_262:
          v344 = sub_1406D0E00(&v581, aCatalogPathVal, 21);
          v343 = v579;
          v346 = _mm_cvtsi32_si128(v344 >> 57);
          v347 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v346, v346), 0), 68);
          v348 = 0;
          v349 = _mm_load_si128((const __m128i *)&xmmword_141A57130);
          v350 = _mm_load_si128((const __m128i *)&xmmword_141A57140);
          while ( 1 )
          {
            v351 = *((_QWORD *)&v579 + 1) & v344;
            v352 = _mm_loadu_si128((const __m128i *)(v579 + v351));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v352, v347));
            if ( _R9D )
              break;
LABEL_267:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v352, (__m128i)-1LL)) )
              goto LABEL_275;
            v344 = v348 + v351 + 16;
            v348 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v354 = -3LL * (*((_QWORD *)&v579 + 1) & (v351 + _R10));
            if ( *(_QWORD *)(v579 + 8 * v354 - 8) == 21
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v354 - 16) + 5LL)), v349),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v354 - 16)), v350))) == 0xFFFF )
            {
              break;
            }
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_267;
          }
          nullsub_1(v579, *((_QWORD *)&v579 + 1));
          v355 = sub_140001650(21, 1);
          if ( !v355 )
            sub_14196B2DB(1, 21);
          *(__m128i *)v355 = _mm_loadu_si128((const __m128i *)aCatalogPathVal);
          *(_QWORD *)(v355 + 13) = 0x79746964696C6176LL;
          v572.m128i_i64[0] = 21;
          v615 = v355;
          v572.m128i_i64[1] = v355;
          v573.m128i_i64[0] = 21;
          v594 = 1;
          sub_1416DB410(&v587, &v572);
          v356 = v593.m256i_i64[0];
          if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
            sub_141939F90(&v592);
          v357 = v592.m128i_i64[1];
          v358 = 3 * v356;
          *(_QWORD *)(v592.m128i_i64[1] + 8 * v358 + 16) = v588.m256i_i64[0];
          *(__m128i *)(v357 + 8 * v358) = _mm_loadu_si128(&v587);
          v593.m256i_i64[0] = v356 + 1;
          v359 = v585;
          if ( v585 == v583 )
            sub_141939F90(&v583);
          v360 = v584;
          v361 = 3 * v359;
          *(_QWORD *)(v584 + 8 * v361) = 21;
          v362 = v615;
          *(_QWORD *)(v360 + 8 * v361 + 8) = v615;
          *(_QWORD *)(v360 + 8 * v361 + 16) = 21;
          v585 = v359 + 1;
          v343 = __PAIR128__(v362, 3 * v359);
        }
LABEL_275:
        nullsub_1(v343, *((_QWORD *)&v343 + 1));
        v363 = sub_140001650(40, 1);
        if ( !v363 )
          sub_14196B2DB(1, 40);
        *(_OWORD *)(v363 + 16) = xmmword_141A64984;
        *(__m128i *)v363 = _mm_loadu_si128((const __m128i *)&xmmword_141A64974);
        v615 = v363;
        *(_QWORD *)(v363 + 32) = 0x676F6C6174614320LL;
        v364 = v613;
        if ( v613 == v612.m128i_i64[0] )
          sub_141939F90(&v612);
        v365 = v612.m128i_i64[1];
        v366 = 3 * v364;
        *(_QWORD *)(v612.m128i_i64[1] + 8 * v366) = 40;
        *(_QWORD *)(v365 + 8 * v366 + 8) = v615;
        *(_QWORD *)(v365 + 8 * v366 + 16) = 40;
        v613 = v364 + 1;
        goto LABEL_279;
      }
      goto LABEL_279;
    }
    v148 = v152 + v155 + 16;
    v152 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v158 = -3LL * (*((_QWORD *)&v579 + 1) & (v155 + _R10));
    if ( *(_QWORD *)(v579 + 8 * v158 - 8) == 18
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v579 + 8 * v158 - 16) + 16LL)), v154),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v158 - 16)), v153))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_128;
  }
  sub_140A9DB60((__int128 *)v572.m128i_i8, a8);
  v161 = v572.m128i_i32[0];
  v162 = v572.m128i_i64[0] == -1;
  if ( v572.m128i_i64[0] == -1 )
  {
    v600 = v572.m128i_i64[1];
    v586 = v573.m128i_i64[0];
    nullsub_1(v160, v159);
    v173 = (__m128i *)sub_140001650(18, 1);
    if ( !v173 )
    {
      v599 = 1;
      sub_14196B2DB(1, 18);
    }
    *v173 = _mm_loadu_si128((const __m128i *)aConfigTomlSynt);
    v173[1].m128i_i16[0] = 30817;
    v601.m128i_i64[0] = 18;
    v615 = (__int64)v173;
    v601.m128i_i64[1] = (__int64)v173;
    v602 = 18;
    v611 = 1;
    v610 = 1;
    sub_1416DB410(&v587, &v601);
    v174 = v593.m256i_i64[0];
    if ( v593.m256i_i64[0] == v592.m128i_i64[0] )
      sub_141939F90(&v592);
    v175 = v592.m128i_i64[1];
    v176 = 3 * v174;
    *(_QWORD *)(v592.m128i_i64[1] + 8 * v176 + 16) = v588.m256i_i64[0];
    *(__m128i *)(v175 + 8 * v176) = _mm_loadu_si128(&v587);
    v593.m256i_i64[0] = v174 + 1;
    v177 = v585;
    if ( v585 == v583 )
      sub_141939F90(&v583);
    v178 = v584;
    v179 = 3 * v177;
    *(_QWORD *)(v584 + 8 * v179) = 18;
    *(_QWORD *)(v178 + 8 * v179 + 8) = v615;
    *(_QWORD *)(v178 + 8 * v179 + 16) = 18;
    v585 = v177 + 1;
    v180 = v613;
    if ( v613 == v612.m128i_i64[0] )
      sub_141939F90(&v612);
    v181 = v612.m128i_i64[1];
    v182 = 3 * v180;
    *(_QWORD *)(v612.m128i_i64[1] + 8 * v182 + 16) = v573.m128i_i64[1];
    *(__m128i *)(v181 + 8 * v182) = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
    v613 = v180 + 1;
    if ( v580.m128i_i64[1] )
      goto LABEL_147;
  }
  else
  {
    v591 = v577;
    v590 = v576;
    v163 = _mm_loadu_si128(&v572);
    v164 = _mm_loadu_si128(&v573);
    v165 = _mm_loadu_si128(&v574);
    v589 = _mm_loadu_si128(&v575);
    *(__m128i *)&v588.m256i_u64[2] = v165;
    *(__m128i *)v588.m256i_i8 = v164;
    v587 = v163;
    nullsub_1(v160, v159);
    v166 = (__m128i *)sub_140001650(18, 1);
    if ( !v166 )
      sub_14196B2DB(1, 18);
    *v166 = _mm_loadu_si128((const __m128i *)aConfigTomlSynt);
    v615 = (__int64)v166;
    v166[1].m128i_i16[0] = 30817;
    v167 = v593.m256i_i64[3];
    if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
      sub_141939F90(&v593.m256i_u64[1]);
    v168 = v593.m256i_i64[2];
    v169 = 3 * v167;
    *(_QWORD *)(v593.m256i_i64[2] + 8 * v169) = 18;
    *(_QWORD *)(v168 + 8 * v169 + 8) = v615;
    *(_QWORD *)(v168 + 8 * v169 + 16) = 18;
    v593.m256i_i64[3] = v167 + 1;
    v601.m128i_i64[0] = (__int64)&v587;
    v601.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v556, &unk_141A648EC, &v601);
    v170 = v613;
    if ( v613 == v612.m128i_i64[0] )
      sub_141939F90(&v612);
    v171 = v612.m128i_i64[1];
    v172 = 3 * v170;
    *(_QWORD *)(v612.m128i_i64[1] + 8 * v172 + 16) = v557;
    *(__m128i *)(v171 + 8 * v172) = _mm_loadu_si128(&v556);
    v613 = v170 + 1;
    sub_140906570(&v587);
    if ( v580.m128i_i64[1] )
      goto LABEL_147;
  }
  if ( v161 == -1 )
  {
LABEL_279:
    sub_140A9EBD0((__int128 *)v572.m128i_i8, a8, (__int64)aAll);
    if ( v572.m128i_i32[0] == -1 )
    {
      sub_1409A45C0(&v587, v578, v571, 0);
      v383 = v584;
      v384 = v584 + 24 * v585;
      v385 = v587.m128i_i64[1];
      v615 = v588.m256i_i64[0];
      v386 = 104 * v588.m256i_i64[0];
      v586 = v384;
      if ( v584 != v384 )
      {
        do
        {
          while ( 1 )
          {
            v569 = v383;
            if ( v615 )
            {
              v387 = *(_QWORD *)(v383 + 8);
              v388 = *(_QWORD *)(v383 + 16);
              v389 = 0;
              while ( *(_QWORD *)(v385 + v389 + 16) != v388
                   || (unsigned int)sub_141923B40(*(_QWORD *)(v385 + v389 + 8), v387, v388) )
              {
                v389 += 104;
                if ( v386 == v389 )
                  goto LABEL_296;
              }
              if ( *(_QWORD *)(v385 + v389 + 40) != 2 || **(_WORD **)(v385 + v389 + 32) != 27503 )
                break;
            }
LABEL_296:
            v383 += 24;
            if ( v383 == v384 )
              goto LABEL_316;
          }
          v600 = v383;
          if ( v593.m256i_i64[3] )
          {
            v390 = v593.m256i_i64[2];
            v391 = 24 * v593.m256i_i64[3];
            v392 = 0;
            while ( *(_QWORD *)(v390 + v392 + 16) != v388
                 || (unsigned int)sub_141923B40(*(_QWORD *)(v390 + v392 + 8), v387, v388) )
            {
              v392 += 24;
              if ( v391 == v392 )
                goto LABEL_310;
            }
          }
          else
          {
LABEL_310:
            sub_1416DB410(&v601, v600);
            v393 = v593.m256i_i64[3];
            if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
              sub_141939F90(&v593.m256i_u64[1]);
            v394 = v593.m256i_i64[2];
            v395 = 3 * v393;
            *(_QWORD *)(v593.m256i_i64[2] + 8 * v395 + 16) = v602;
            *(__m128i *)(v394 + 8 * v395) = _mm_loadu_si128(&v601);
            v593.m256i_i64[3] = v393 + 1;
          }
          sub_14019B320(&v592, &v569);
          v601.m128i_i64[0] = (__int64)&v569;
          v601.m128i_i64[1] = (__int64)sub_14021E5E0;
          sub_1416DAFA0(&v546, &unk_141A649C5, &v601);
          v396 = v600;
          v397 = v613;
          v384 = v586;
          if ( v613 == v612.m128i_i64[0] )
            sub_141939F90(&v612);
          v398 = v612.m128i_i64[1];
          v399 = 3 * v397;
          *(_QWORD *)(v612.m128i_i64[1] + 8 * v399 + 16) = v547;
          *(__m128i *)(v398 + 8 * v399) = _mm_loadu_si128(&v546);
          v613 = v397 + 1;
          v383 = v396 + 24;
        }
        while ( v383 != v384 );
      }
LABEL_316:
      sub_140235740(&v587);
      if ( v587.m128i_i64[0] )
        sub_140001660(v385, 104 * v587.m128i_i64[0], 8);
    }
    else
    {
      v591 = v577;
      v590 = v576;
      v367 = _mm_loadu_si128(&v572);
      v368 = _mm_loadu_si128(&v573);
      v369 = _mm_loadu_si128(&v574);
      v589 = _mm_loadu_si128(&v575);
      *(__m128i *)&v588.m256i_u64[2] = v369;
      *(__m128i *)v588.m256i_i8 = v368;
      v587 = v367;
      v601.m128i_i64[0] = (__int64)&v587;
      v601.m128i_i64[1] = (__int64)sub_140D76130;
      sub_1416DAFA0(&v548, &unk_141A649AC, &v601);
      v370 = v613;
      if ( v613 == v612.m128i_i64[0] )
        sub_141939F90(&v612);
      v371 = v612.m128i_i64[1];
      v372 = 3 * v370;
      *(_QWORD *)(v612.m128i_i64[1] + 8 * v372 + 16) = v549;
      *(__m128i *)(v371 + 8 * v372) = _mm_loadu_si128(&v548);
      v613 = v370 + 1;
      v373 = v584;
      v615 = v584 + 24 * v585;
      if ( v584 != v615 )
      {
        do
        {
          while ( 1 )
          {
            v376 = v373 + 24;
            if ( v593.m256i_i64[3] )
              break;
LABEL_292:
            sub_1416DB410(&v601, v373);
            v382 = v593.m256i_i64[3];
            if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
              sub_141939F90(&v593.m256i_u64[1]);
            v374 = v593.m256i_i64[2];
            v375 = 3 * v382;
            *(_QWORD *)(v593.m256i_i64[2] + 8 * v375 + 16) = v602;
            *(__m128i *)(v374 + 8 * v375) = _mm_loadu_si128(&v601);
            v593.m256i_i64[3] = v382 + 1;
            v373 += 24;
            if ( v376 == v615 )
              goto LABEL_283;
          }
          v377 = v593.m256i_i64[2];
          v378 = 24 * v593.m256i_i64[3];
          v379 = *(_QWORD *)(v373 + 8);
          v380 = *(_QWORD *)(v373 + 16);
          v381 = 0;
          while ( *(_QWORD *)(v377 + v381 + 16) != v380
               || (unsigned int)sub_141923B40(*(_QWORD *)(v377 + v381 + 8), v379, v380) )
          {
            v381 += 24;
            if ( v378 == v381 )
              goto LABEL_292;
          }
          v373 += 24;
        }
        while ( v376 != v615 );
      }
LABEL_283:
      sub_14019B1A0(&v592, &v583);
      sub_140906570(&v587);
    }
    if ( !v580.m128i_i64[1] )
      goto LABEL_383;
LABEL_319:
    v400 = aDbOrphanProvid;
    v401 = sub_1406D0E00(&v581, aDbOrphanProvid, 19);
    v403 = v579;
    v404 = _mm_cvtsi32_si128(v401 >> 57);
    v405 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v404, v404), 0), 68);
    v406 = 0;
    v407 = _mm_load_si128((const __m128i *)&xmmword_141A570D0);
    v408 = _mm_load_si128((const __m128i *)&xmmword_141A570E0);
    while ( 1 )
    {
      v409 = *((_QWORD *)&v579 + 1) & v401;
      v410 = _mm_loadu_si128((const __m128i *)(v579 + v409));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v410, v405));
      if ( _EDX )
        break;
LABEL_324:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v410, (__m128i)-1LL)) )
      {
        v413 = sub_1406D0E00(&v581, aRolloutOrphanP, 24);
        v415 = _mm_cvtsi32_si128(v413 >> 57);
        v416 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v415, v415), 0), 68);
        v417 = 0;
        v418 = _mm_loadl_epi64((const __m128i *)&xmmword_141A57050);
        v419 = _mm_load_si128((const __m128i *)&xmmword_141A57060);
        while ( 1 )
        {
          v420 = *((_QWORD *)&v403 + 1) & v413;
          v421 = _mm_loadu_si128((const __m128i *)(v403 + v420));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v421, v416));
          if ( _EDX )
            break;
LABEL_331:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v421, (__m128i)-1LL)) )
            goto LABEL_383;
          v413 = v417 + v420 + 16;
          v417 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v423 = -3LL * (*((_QWORD *)&v403 + 1) & (v420 + _R8));
          if ( *(_QWORD *)(v403 + 8 * v423 - 8) == 24
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v403 + 8 * v423 - 16) + 16LL)), v418),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v403 + 8 * v423 - 16)), v419))) == 0xFFFF )
          {
            goto LABEL_333;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_331;
        }
      }
      v401 = v406 + v409 + 16;
      v406 += 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v412 = -3LL * (*((_QWORD *)&v579 + 1) & (v409 + _R8));
      if ( *(_QWORD *)(v579 + 8 * v412 - 8) == 19
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v412 - 16)), v408),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v412 - 16) + 3LL)), v407))) == 0xFFFF )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_324;
    }
LABEL_333:
    v424 = sub_1406D0E00(&v581, aDbOrphanProvid, 19);
    v426 = _mm_cvtsi32_si128(v424 >> 57);
    v427 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v426, v426), 0), 68);
    for ( m = 0; ; m += 16 )
    {
      v429 = *((_QWORD *)&v403 + 1) & v424;
      v430 = _mm_loadu_si128((const __m128i *)(v403 + v429));
      _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v430, v427));
      if ( _R8D )
        break;
LABEL_338:
      _R9 = 24;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v430, (__m128i)-1LL)) )
      {
        v400 = aRolloutOrphanP;
        goto LABEL_341;
      }
      v424 = m + v429 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r9d, r8d }
      _R9 = -3LL * (*((_QWORD *)&v403 + 1) & (v429 + _R9));
      if ( *(_QWORD *)(v403 + 8 * _R9 - 8) == 19 )
      {
        v432 = _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v403 + 8 * _R9 - 16)), v408),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v403 + 8 * _R9 - 16) + 3LL)), v407)));
        LODWORD(_R9) = 19;
        if ( v432 == 0xFFFF )
          break;
      }
      _R9 = (unsigned int)(_R8D - 1);
      LOWORD(_R9) = _R8D & (_R8D - 1);
      _R8D = _R9;
      if ( !(_WORD)_R9 )
        goto LABEL_338;
    }
LABEL_341:
    v587.m128i_i64[0] = v578;
    v587.m128i_i64[1] = v571;
    v588.m256i_i64[0] = (__int64)&a7;
    sub_140A9CB80((unsigned int)&v572, a8, (_DWORD)v400, _R9, (__int64)&v587);
    if ( v572.m128i_i32[0] != -1 )
    {
      v591 = v577;
      v590 = v576;
      v433 = _mm_loadu_si128(&v572);
      v434 = _mm_loadu_si128(&v573);
      v435 = _mm_loadu_si128(&v574);
      v589 = _mm_loadu_si128(&v575);
      *(__m128i *)&v588.m256i_u64[2] = v435;
      *(__m128i *)v588.m256i_i8 = v434;
      v587 = v433;
      if ( v580.m128i_i64[1] )
      {
        v436 = sub_1406D0E00(&v581, aDbOrphanProvid, 19);
        v438 = _mm_cvtsi32_si128(v436 >> 57);
        v439 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v438, v438), 0), 68);
        for ( n = 0; ; n += 16 )
        {
          v441 = *((_QWORD *)&v579 + 1) & v436;
          v442 = _mm_loadu_si128((const __m128i *)(v579 + v441));
          _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v442, v439));
          if ( _R9D )
            break;
LABEL_348:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v442, (__m128i)-1LL)) )
            goto LABEL_369;
          v436 = n + v441 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r10d, r9d }
          v444 = -3LL * (*((_QWORD *)&v579 + 1) & (v441 + _R10));
          if ( *(_QWORD *)(v579 + 8 * v444 - 8) == 19
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v444 - 16)), v408),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v579 + 8 * v444 - 16) + 3LL)), v407))) == 0xFFFF )
          {
            break;
          }
          _R10 = (unsigned int)(_R9D - 1);
          LOWORD(_R10) = _R9D & (_R9D - 1);
          _R9D = _R10;
          if ( !(_WORD)_R10 )
            goto LABEL_348;
        }
        nullsub_1(v579, *((_QWORD *)&v579 + 1));
        v458 = sub_140001650(19, 1);
        if ( !v458 )
          sub_14196B2DB(1, 19);
        *(__m128i *)v458 = _mm_loadu_si128((const __m128i *)aDbOrphanProvid);
        v615 = v458;
        *(_DWORD *)(v458 + 15) = 1936876900;
        v459 = v593.m256i_i64[3];
        if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
          sub_141939F90(&v593.m256i_u64[1]);
        v460 = v593.m256i_i64[2];
        v461 = 3 * v459;
        *(_QWORD *)(v593.m256i_i64[2] + 8 * v461) = 19;
        *(_QWORD *)(v460 + 8 * v461 + 8) = v615;
        *(_QWORD *)(v460 + 8 * v461 + 16) = 19;
        v593.m256i_i64[3] = v459 + 1;
        if ( v580.m128i_i64[1] )
        {
LABEL_369:
          v462 = sub_1406D0E00(&v581, aRolloutOrphanP, 24);
          v464 = _mm_cvtsi32_si128(v462 >> 57);
          v465 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v464, v464), 0), 68);
          v466 = 0;
          v467 = _mm_loadl_epi64((const __m128i *)&xmmword_141A57050);
          v468 = _mm_load_si128((const __m128i *)&xmmword_141A57060);
          while ( 1 )
          {
            v469 = *((_QWORD *)&v579 + 1) & v462;
            v470 = _mm_loadu_si128((const __m128i *)(v579 + v469));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v470, v465));
            if ( _R9D )
              break;
LABEL_374:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v470, (__m128i)-1LL)) )
              goto LABEL_380;
            v462 = v466 + v469 + 16;
            v466 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v472 = -3LL * (*((_QWORD *)&v579 + 1) & (v469 + _R10));
            if ( *(_QWORD *)(v579 + 8 * v472 - 8) == 24
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v579 + 8 * v472 - 16) + 16LL)), v467),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v579 + 8 * v472 - 16)), v468))) == 0xFFFF )
            {
              break;
            }
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_374;
          }
          nullsub_1(v579, *((_QWORD *)&v579 + 1));
          v473 = (__m128i *)sub_140001650(24, 1);
          if ( !v473 )
            sub_14196B2DB(1, 24);
          *v473 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
          v615 = (__int64)v473;
          v473[1].m128i_i64[0] = 0x7372656469766F72LL;
          v474 = v593.m256i_i64[3];
          if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
            sub_141939F90(&v593.m256i_u64[1]);
          v475 = v593.m256i_i64[2];
          v476 = 3 * v474;
          *(_QWORD *)(v593.m256i_i64[2] + 8 * v476) = 24;
          *(_QWORD *)(v475 + 8 * v476 + 8) = v615;
          *(_QWORD *)(v475 + 8 * v476 + 16) = 24;
          v593.m256i_i64[3] = v474 + 1;
        }
      }
LABEL_380:
      v601.m128i_i64[0] = (__int64)&v587;
      v601.m128i_i64[1] = (__int64)sub_140D76130;
      sub_1416DAFA0(&v544, &unk_141A649E3, &v601);
      v477 = v613;
      if ( v613 == v612.m128i_i64[0] )
        sub_141939F90(&v612);
      v478 = v612.m128i_i64[1];
      v479 = 3 * v477;
      *(_QWORD *)(v612.m128i_i64[1] + 8 * v479 + 16) = v545;
      *(__m128i *)(v478 + 8 * v479) = _mm_loadu_si128(&v544);
      v613 = v477 + 1;
      sub_140906570(&v587);
      goto LABEL_383;
    }
    v445 = _mm_loadu_si128((const __m128i *)&v573.m128i_u64[1]);
    v446 = _mm_loadu_si128((const __m128i *)&v574.m128i_u64[1]);
    v447 = _mm_loadu_si128((const __m128i *)&v575.m128i_u64[1]);
    v587 = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
    *(__m128i *)v588.m256i_i8 = v445;
    *(_QWORD *)&v590 = *((_QWORD *)&v576 + 1);
    v589 = v447;
    *(__m128i *)&v588.m256i_u64[2] = v446;
    v448 = v587;
    v601.m128i_i64[0] = v587.m128i_i64[1];
    v601.m128i_i64[1] = v587.m128i_i64[1];
    v602 = v587.m128i_i64[0];
    v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v587.m128i_i64[1] + 24 * v445.m128i_i64[0]);
    v449 = v593.m256i_i64[0];
    if ( v445.m128i_i64[0] > (unsigned __int64)(v592.m128i_i64[0] - v593.m256i_i64[0]) )
    {
      sub_141939070((unsigned int)&v592, v593.m256i_i32[0], v445.m128i_i32[0], 8, 24);
      v449 = v593.m256i_i64[0];
    }
    else if ( !v445.m128i_i64[0] )
    {
      goto LABEL_353;
    }
    sub_1419234B0(v592.m128i_i64[1] + 24 * v449, v448.m128i_i64[1], 24 * v445.m128i_i64[0]);
LABEL_353:
    v593.m256i_i64[0] = v445.m128i_i64[0] + v449;
    if ( v448.m128i_i64[0] )
      sub_140001660(v448.m128i_i64[1], 24 * v448.m128i_i64[0], 8);
    v450 = v588.m256i_i64[1];
    v451 = *(_OWORD *)&v588.m256i_u64[2];
    v452 = 24 * v588.m256i_i64[3];
    v601.m128i_i64[0] = v588.m256i_i64[2];
    v601.m128i_i64[1] = v588.m256i_i64[2];
    v602 = v588.m256i_i64[1];
    v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v588.m256i_i64[2] + 24 * v588.m256i_i64[3]);
    v453 = v593.m256i_i64[3];
    if ( v588.m256i_i64[3] > (unsigned __int64)(v593.m256i_i64[1] - v593.m256i_i64[3]) )
    {
      sub_141939070((unsigned int)&v593.m256i_u32[2], v593.m256i_i32[6], v588.m256i_i32[6], 8, 24);
      v453 = v593.m256i_i64[3];
    }
    else if ( !v588.m256i_i64[3] )
    {
      goto LABEL_358;
    }
    sub_1419234B0(v593.m256i_i64[2] + 24 * v453, v451, v452);
LABEL_358:
    v593.m256i_i64[3] = *((_QWORD *)&v451 + 1) + v453;
    if ( v450 )
      sub_140001660(v451, 24 * v450, 8);
    v454 = v589;
    v455 = v590;
    v456 = 24 * v590;
    v601.m128i_i64[0] = v589.m128i_i64[1];
    v601.m128i_i64[1] = v589.m128i_i64[1];
    v602 = v589.m128i_i64[0];
    v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v589.m128i_i64[1] + 24 * v590);
    v457 = v613;
    if ( (unsigned __int64)v590 > v612.m128i_i64[0] - v613 )
    {
      sub_141939070((unsigned int)&v612, v613, v590, 8, 24);
      v457 = v613;
    }
    else if ( !(_QWORD)v590 )
    {
      goto LABEL_363;
    }
    sub_1419234B0(v612.m128i_i64[1] + 24 * v457, v454.m128i_i64[1], v456);
LABEL_363:
    v613 = v455 + v457;
    if ( v454.m128i_i64[0] )
      sub_140001660(v454.m128i_i64[1], 24 * v454.m128i_i64[0], 8);
  }
LABEL_383:
  v480 = 0;
LABEL_384:
  v481 = v580.m128i_i64[1];
  v482 = v579;
LABEL_385:
  while ( v480 != 176 )
  {
    v483 = v480;
    v484 = (char *)&off_141A64A00 + v480;
    v480 += 16;
    v567 = (__int64 *)v484;
    if ( v481 )
    {
      v615 = v480;
      v485 = *(__int64 *)((char *)&off_141A64A00 + v483);
      v486 = *(__int64 *)((char *)&off_141A64A00 + v483 + 8);
      v487 = sub_1406D0E00(&v581, v485, v486);
      _RAX = v487 >> 57;
      v489 = _mm_cvtsi32_si128(v487 >> 57);
      v490 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v489, v489), 0), 68);
      for ( ii = 0; ; ii += 16 )
      {
        v492 = *((_QWORD *)&v482 + 1) & v487;
        v493 = _mm_loadu_si128((const __m128i *)(v482 + v492));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v493, v490));
        if ( _R15D )
          break;
LABEL_393:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v493, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
        {
          v480 = v615;
          goto LABEL_385;
        }
        v487 = ii + v492 + 16;
      }
      v600 = ii;
      while ( 1 )
      {
        __asm { tzcnt   eax, r15d }
        v495 = -3LL * (*((_QWORD *)&v482 + 1) & (v492 + _RAX));
        if ( v486 == *(_QWORD *)(v482 + 8 * v495 - 8)
          && !(unsigned int)sub_141923B40(v485, *(_QWORD *)(v482 + 8 * v495 - 16), v486) )
        {
          break;
        }
        _RAX = (unsigned int)(_R15D - 1);
        LOWORD(_RAX) = _R15D & (_R15D - 1);
        _R15D = _RAX;
        ii = v600;
        if ( !(_WORD)_RAX )
          goto LABEL_393;
      }
      v601.m128i_i64[0] = v485;
      v601.m128i_i64[1] = v486;
      v582 = a6;
      v569 = a7;
      v587.m128i_i64[0] = (__int64)&v601;
      v587.m128i_i64[1] = (__int64)&v582;
      v588.m256i_i64[0] = v578;
      v588.m256i_i64[1] = v571;
      v588.m256i_i64[2] = v568;
      v588.m256i_i64[3] = a5;
      v589.m128i_i64[0] = (__int64)&v569;
      sub_140A9CE20((unsigned int)&v572, a8, v485, v486, (__int64)&v587);
      v480 = v615;
      if ( v572.m128i_i32[0] == -1 )
      {
        v505 = _mm_loadu_si128((const __m128i *)&v573.m128i_u64[1]);
        v506 = _mm_loadu_si128((const __m128i *)&v574.m128i_u64[1]);
        v507 = _mm_loadu_si128((const __m128i *)&v575.m128i_u64[1]);
        v587 = _mm_loadu_si128((const __m128i *)&v572.m128i_u64[1]);
        *(__m128i *)v588.m256i_i8 = v505;
        *(_QWORD *)&v590 = *((_QWORD *)&v576 + 1);
        v589 = v507;
        *(__m128i *)&v588.m256i_u64[2] = v506;
        v508 = v587;
        v601.m128i_i64[0] = v587.m128i_i64[1];
        v601.m128i_i64[1] = v587.m128i_i64[1];
        v602 = v587.m128i_i64[0];
        v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v587.m128i_i64[1] + 24 * v505.m128i_i64[0]);
        v509 = v593.m256i_i64[0];
        if ( v505.m128i_i64[0] > (unsigned __int64)(v592.m128i_i64[0] - v593.m256i_i64[0]) )
        {
          sub_141939070((unsigned int)&v592, v593.m256i_i32[0], v505.m128i_i32[0], 8, 24);
          v509 = v593.m256i_i64[0];
LABEL_404:
          sub_1419234B0(v592.m128i_i64[1] + 24 * v509, v508.m128i_i64[1], 24 * v505.m128i_i64[0]);
        }
        else if ( v505.m128i_i64[0] )
        {
          goto LABEL_404;
        }
        v593.m256i_i64[0] = v505.m128i_i64[0] + v509;
        if ( v508.m128i_i64[0] )
          sub_140001660(v508.m128i_i64[1], 24 * v508.m128i_i64[0], 8);
        v510 = v588.m256i_i64[1];
        v511 = *(_OWORD *)&v588.m256i_u64[2];
        v512 = 24 * v588.m256i_i64[3];
        v601.m128i_i64[0] = v588.m256i_i64[2];
        v601.m128i_i64[1] = v588.m256i_i64[2];
        v602 = v588.m256i_i64[1];
        v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v588.m256i_i64[2] + 24 * v588.m256i_i64[3]);
        v513 = v593.m256i_i64[3];
        if ( v588.m256i_i64[3] > (unsigned __int64)(v593.m256i_i64[1] - v593.m256i_i64[3]) )
        {
          sub_141939070((unsigned int)&v593.m256i_u32[2], v593.m256i_i32[6], v588.m256i_i32[6], 8, 24);
          v513 = v593.m256i_i64[3];
LABEL_409:
          sub_1419234B0(v593.m256i_i64[2] + 24 * v513, v511, v512);
        }
        else if ( v588.m256i_i64[3] )
        {
          goto LABEL_409;
        }
        v593.m256i_i64[3] = *((_QWORD *)&v511 + 1) + v513;
        if ( v510 )
          sub_140001660(v511, 24 * v510, 8);
        v514 = v589;
        v515 = v590;
        v516 = 24 * v590;
        v601.m128i_i64[0] = v589.m128i_i64[1];
        v601.m128i_i64[1] = v589.m128i_i64[1];
        v602 = v589.m128i_i64[0];
        v603 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v589.m128i_i64[1] + 24 * v590);
        v517 = v613;
        if ( (unsigned __int64)v590 > v612.m128i_i64[0] - v613 )
        {
          sub_141939070((unsigned int)&v612, v613, v590, 8, 24);
          v517 = v613;
LABEL_414:
          sub_1419234B0(v612.m128i_i64[1] + 24 * v517, v514.m128i_i64[1], v516);
        }
        else if ( (_QWORD)v590 )
        {
          goto LABEL_414;
        }
        v613 = v515 + v517;
        if ( v514.m128i_i64[0] )
          sub_140001660(v514.m128i_i64[1], 24 * v514.m128i_i64[0], 8);
        v480 = v615;
        goto LABEL_384;
      }
      v591 = v577;
      v590 = v576;
      v498 = _mm_loadu_si128(&v572);
      v499 = _mm_loadu_si128(&v573);
      v500 = _mm_loadu_si128(&v574);
      v589 = _mm_loadu_si128(&v575);
      *(__m128i *)&v588.m256i_u64[2] = v500;
      *(__m128i *)v588.m256i_i8 = v499;
      v587 = v498;
      v501 = v567[1];
      if ( v501 < 0 )
      {
        v524 = 0;
        goto LABEL_427;
      }
      v600 = v567[1];
      if ( !v501 )
      {
        v586 = 1;
        v504 = v593.m256i_i64[3];
        if ( v593.m256i_i64[3] != v593.m256i_i64[1] )
          goto LABEL_420;
LABEL_419:
        sub_141939F90(&v593.m256i_u64[1]);
        goto LABEL_420;
      }
      v502 = *v567;
      nullsub_1(v497, v496);
      v503 = sub_140001650(v501, 1);
      if ( !v503 )
      {
        v586 = v501;
        v524 = 1;
LABEL_427:
        sub_14196B2DB(v524, v586);
      }
      v586 = v503;
      sub_1419234B0(v503, v502, v501);
      v504 = v593.m256i_i64[3];
      if ( v593.m256i_i64[3] == v593.m256i_i64[1] )
        goto LABEL_419;
LABEL_420:
      v518 = v593.m256i_i64[2];
      v519 = 3 * v504;
      v520 = v600;
      *(_QWORD *)(v593.m256i_i64[2] + 8 * v519) = v600;
      *(_QWORD *)(v518 + 8 * v519 + 8) = v586;
      *(_QWORD *)(v518 + 8 * v519 + 16) = v520;
      v593.m256i_i64[3] = v504 + 1;
      v601.m128i_i64[0] = (__int64)&v567;
      v601.m128i_i64[1] = (__int64)sub_140763620;
      v602 = (__int64)&v587;
      v603 = sub_140D76130;
      sub_1416DAFA0(&v542, &unk_141A58FE9, &v601);
      v521 = v613;
      if ( v613 == v612.m128i_i64[0] )
        sub_141939F90(&v612);
      v522 = v612.m128i_i64[1];
      v523 = 3 * v521;
      *(_QWORD *)(v612.m128i_i64[1] + 8 * v523 + 16) = v543;
      *(__m128i *)(v522 + 8 * v523) = _mm_loadu_si128(&v542);
      v613 = v521 + 1;
      sub_140906570(&v587);
      goto LABEL_384;
    }
  }
  v588 = v593;
  v525 = v592;
  v587 = v592;
  *(_QWORD *)&v590 = v613;
  v526 = _mm_loadu_si128(&v612);
  v589 = v526;
  v527 = v570;
  *(_QWORD *)(v570 + 72) = v613;
  *(__m128i *)(v527 + 56) = v526;
  *(__m128i *)(v527 + 8) = v525;
  *(_OWORD *)(v527 + 40) = *(_OWORD *)&v588.m256i_u64[2];
  *(__m128i *)(v527 + 24) = _mm_load_si128((const __m128i *)&v588);
  *(_QWORD *)v527 = -1;
  v528 = v585;
  if ( v585 )
  {
    v529 = (_QWORD *)(v584 + 8);
    do
    {
      v530 = *(v529 - 1);
      if ( v530 )
        sub_140001660(*v529, v530, 1);
      v529 += 3;
      --v528;
    }
    while ( v528 );
  }
  HIDWORD(_RAX) = HIDWORD(v583);
  if ( v583 )
    sub_140001660(v584, 24 * v583, 8);
  v36 = *((_QWORD *)&v579 + 1);
  if ( *((_QWORD *)&v579 + 1) )
  {
    v532 = v580.m128i_i64[1];
    if ( v580.m128i_i64[1] )
    {
      v533 = v579;
      v534 = (const __m128i *)(v579 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v579));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v536 = _mm_load_si128(v534);
            v533 -= 384;
            ++v534;
            _R15D = _mm_movemask_epi8(v536) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v537 = -3 * _RAX;
        v538 = *(_QWORD *)(v533 + 8 * v537 - 24);
        if ( v538 )
          sub_140001660(*(_QWORD *)(v533 + 8 * v537 - 16), v538, 1);
        --v532;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v532 );
    }
LABEL_443:
    v539 = (24 * v36 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v540 = v539 + v36 + 17;
    if ( v540 )
      sub_140001660(v579 - v539, v540, 16);
  }
LABEL_445:
  sub_140235740(&v564);
  if ( v564 )
    sub_140001660(v565, 104 * v564, 8);
  return v570;
}
