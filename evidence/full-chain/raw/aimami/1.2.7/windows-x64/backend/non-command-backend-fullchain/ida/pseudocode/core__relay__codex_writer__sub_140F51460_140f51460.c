// win 1.2.7 | module src/core/relay/codex_writer.rs | ea 0x140f51460 | name sub_140F51460 (via content-string anchor xref)
_QWORD *__fastcall sub_140F51460(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __m128i v16; // xmm0
  __m128i si128; // xmm1
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 i; // rdx
  unsigned __int64 v26; // rax
  __m128i v27; // xmm2
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v36; // rdi
  const __m128i *v37; // rbx
  __int64 v39; // r14
  unsigned int v40; // r15d
  __m128i v42; // xmm0
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  void *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rbx
  const __m128i *v57; // r14
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdi
  bool v64; // zf
  unsigned __int64 v65; // rdi
  __m128i v67; // xmm1
  __m128i v68; // xmm2
  __m128i v69; // xmm3
  __m128i v70; // kr10_16
  __int64 v71; // r12
  __m128i v72; // kr30_16
  __int64 v73; // r14
  unsigned __int64 v74; // r15
  __int64 v75; // r12
  __int128 v76; // rdi
  _QWORD *v77; // rbx
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  __int64 v83; // r8
  __m128i v84; // xmm2
  __m128i v85; // xmm3
  unsigned __int64 v86; // rax
  __m128i v87; // xmm4
  __int64 v89; // r10
  __int64 v90; // rcx
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __m128i v93; // xmm2
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rcx
  __m128i v101; // xmm1
  __m128i v102; // xmm2
  __m128i v103; // xmm3
  __m128i v104; // kr50_16
  __int64 v105; // r12
  __int64 v106; // rsi
  __int128 v107; // kr70_16
  unsigned __int64 v108; // r15
  __int64 v109; // r12
  __m128i v110; // kr90_16
  __int64 v111; // r14
  unsigned __int64 v112; // r15
  __int64 v113; // r12
  unsigned __int64 v114; // rax
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  __int64 v118; // r8
  __m128i v119; // xmm2
  __m128i v120; // xmm3
  unsigned __int64 v121; // rax
  __m128i v122; // xmm4
  __int64 v124; // r10
  __int64 v125; // rcx
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i v128; // xmm2
  __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // rcx
  __m128i v136; // xmm1
  __m128i v137; // xmm2
  __m128i v138; // xmm3
  __m128i v139; // krB0_16
  __int64 v140; // r12
  __int64 v141; // rsi
  __int128 v142; // krD0_16
  unsigned __int64 v143; // r15
  __int64 v144; // r12
  __m128i v145; // krF0_16
  __int64 v146; // r14
  unsigned __int64 v147; // r15
  __int64 v148; // r12
  unsigned __int64 v149; // rax
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  __int64 v153; // r8
  __m128i v154; // xmm2
  __m128i v155; // xmm3
  unsigned __int64 v156; // rax
  __m128i v157; // xmm4
  __int64 v159; // r10
  __int64 v160; // rcx
  __int32 v161; // esi
  char v162; // di
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
  __int64 v194; // rcx
  __m128i v195; // xmm0
  __m128i v196; // xmm1
  __m128i v197; // xmm2
  __m128i *v198; // rax
  __int64 v199; // rsi
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rsi
  __int64 v203; // rax
  __int64 v204; // rcx
  __m128i *v205; // rax
  __int64 v206; // rsi
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rsi
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rsi
  __int64 v213; // rcx
  __int64 v214; // rdx
  unsigned __int64 v215; // rax
  __m128i v217; // xmm0
  __m128i v218; // xmm0
  __int64 v219; // r8
  __m128i v220; // xmm2
  __m128i v221; // xmm3
  unsigned __int64 v222; // rax
  __m128i v223; // xmm4
  __int64 v225; // r10
  __int64 v226; // rcx
  __m128i v227; // xmm0
  __m128i v228; // xmm1
  __m128i v229; // xmm2
  __int64 v230; // rax
  __int64 v231; // rsi
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rsi
  __int64 v235; // rax
  __int64 v236; // rcx
  __int64 v237; // rax
  __int64 v238; // rsi
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rsi
  __int64 v242; // rax
  __int64 v243; // rcx
  __int64 v244; // rsi
  __int64 v245; // rcx
  __int64 v246; // rdx
  unsigned __int64 v247; // rax
  __m128i v249; // xmm0
  __m128i v250; // xmm0
  __int64 j; // r8
  unsigned __int64 v252; // rax
  __m128i v253; // xmm2
  __int64 v255; // r10
  __int64 v256; // rcx
  __m128i v257; // xmm0
  __m128i v258; // xmm1
  __m128i v259; // xmm2
  void *v260; // rax
  __int64 v261; // rsi
  __int64 v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rsi
  __int64 v265; // rax
  __int64 v266; // rcx
  unsigned __int64 v267; // rax
  __m128i v269; // xmm0
  __m128i v270; // xmm0
  __int64 v271; // r8
  __m128i v272; // xmm2
  __m128i v273; // xmm3
  unsigned __int64 v274; // rax
  __m128i v275; // xmm4
  __int64 v277; // r10
  __m128i *v278; // rax
  __int64 v279; // rsi
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rax
  __int64 v286; // rsi
  __int64 v287; // rax
  __int64 v288; // rcx
  unsigned __int64 v289; // rax
  __m128i v291; // kr110_16
  __m128i v292; // xmm0
  __m128i v293; // xmm0
  __int64 v294; // rcx
  __m128i v295; // xmm6
  __m128i v296; // xmm7
  unsigned __int64 v297; // rax
  __m128i v298; // xmm2
  __int64 v300; // r8
  void *v301; // rax
  __int64 v302; // rsi
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rsi
  __int64 v306; // rax
  __int64 v307; // rcx
  __int64 v308; // rsi
  __int64 v309; // rcx
  __int64 v310; // rdx
  unsigned __int64 v311; // rax
  __m128i v313; // xmm0
  __m128i v314; // xmm0
  __int64 v315; // rcx
  __m128i v316; // xmm2
  __m128i v317; // xmm3
  unsigned __int64 v318; // rax
  __m128i v319; // xmm4
  __int64 v321; // r8
  unsigned __int64 v322; // rax
  __m128i v324; // xmm0
  __m128i v325; // xmm0
  __int64 k; // rcx
  unsigned __int64 v327; // rax
  __m128i v328; // xmm2
  __int64 v330; // r8
  __m128i *v331; // rax
  __int64 v332; // rsi
  __int64 v333; // rax
  __int64 v334; // rcx
  __int64 v335; // rsi
  __int64 v336; // rax
  __int64 v337; // rcx
  unsigned __int64 v338; // rax
  __m128i v340; // xmm0
  __m128i v341; // xmm0
  __int64 v342; // r8
  __m128i v343; // xmm2
  __m128i v344; // xmm3
  unsigned __int64 v345; // rax
  __m128i v346; // xmm4
  __int64 v348; // r10
  __int64 v349; // rax
  __int64 v350; // rsi
  __int64 v351; // rax
  __int64 v352; // rcx
  __int64 v353; // rsi
  __int64 v354; // rax
  __int64 v355; // rax
  __int64 v356; // rsi
  __int64 v357; // rax
  __int64 v358; // rcx
  __m128i v359; // xmm0
  __m128i v360; // xmm1
  __m128i v361; // xmm2
  __int64 v362; // rsi
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // r14
  __int64 v366; // rax
  __int64 v367; // rcx
  __int64 v368; // r13
  __int64 v369; // r15
  __int64 v370; // rdi
  __int64 v371; // rbx
  __int64 v372; // r12
  __int64 v373; // rsi
  __int64 v374; // rsi
  __int64 v375; // rdi
  __int64 v376; // rbx
  __int64 v377; // rsi
  __int64 v378; // r15
  __int64 v379; // r14
  __int64 v380; // r13
  __int64 v381; // r12
  __int64 v382; // r12
  __int64 v383; // rsi
  __int64 v384; // rbx
  __int64 v385; // rsi
  __int64 v386; // rax
  __int64 v387; // rcx
  __int64 v388; // rsi
  __int64 v389; // rax
  __int64 v390; // rcx
  unsigned __int64 v391; // rax
  __m128i v393; // kr120_16
  __m128i v394; // xmm0
  __m128i v395; // xmm0
  __int64 v396; // rcx
  __m128i v397; // xmm6
  __m128i v398; // xmm7
  unsigned __int64 v399; // rax
  __m128i v400; // xmm2
  __int64 v402; // r8
  unsigned __int64 v403; // rax
  __m128i v405; // xmm0
  __m128i v406; // xmm0
  __int64 v407; // rcx
  __m128i v408; // xmm2
  __m128i v409; // xmm3
  unsigned __int64 v410; // rax
  __m128i v411; // xmm4
  __int64 v413; // r8
  __m128i v414; // xmm0
  __m128i v415; // xmm1
  __m128i v416; // xmm2
  unsigned __int64 v417; // rax
  __m128i v419; // xmm0
  __m128i v420; // xmm0
  __int64 m; // r8
  unsigned __int64 v422; // rax
  __m128i v423; // xmm2
  __int64 v425; // r10
  __m128i v426; // xmm1
  __m128i v427; // xmm2
  __m128i v428; // xmm3
  __m128i v429; // kr130_16
  __int64 v430; // r12
  __int64 v431; // rsi
  __int128 v432; // kr150_16
  unsigned __int64 v433; // r15
  __int64 v434; // r12
  __m128i v435; // kr170_16
  __int64 v436; // r14
  unsigned __int64 v437; // r15
  __int64 v438; // r12
  __int64 v439; // rax
  __int64 v440; // rsi
  __int64 v441; // rax
  __int64 v442; // rcx
  unsigned __int64 v443; // rax
  __m128i v445; // xmm0
  __m128i v446; // xmm0
  __int64 v447; // r8
  __m128i v448; // xmm2
  __m128i v449; // xmm3
  unsigned __int64 v450; // rax
  __m128i v451; // xmm4
  __int64 v453; // r10
  __m128i *v454; // rax
  __int64 v455; // rsi
  __int64 v456; // rax
  __int64 v457; // rcx
  __int64 v458; // rsi
  __int64 v459; // rax
  __int64 v460; // rcx
  __int64 v461; // r14
  __int64 v462; // rbx
  __m128i v463; // kr190_16
  __int64 v464; // rax
  char *v465; // rcx
  __int64 v466; // r12
  __int64 v467; // rdi
  unsigned __int64 v468; // r14
  __m128i v470; // xmm0
  __m128i v471; // xmm7
  __int64 n; // rcx
  unsigned __int64 v473; // r14
  __m128i v474; // xmm8
  __int64 v476; // rax
  __int64 v477; // rcx
  __m128i v478; // xmm0
  __m128i v479; // xmm1
  __m128i v480; // xmm2
  signed __int64 v481; // rsi
  const __m128i *v482; // rdi
  __m128i *v483; // rax
  __int64 v484; // rsi
  __m128i v485; // xmm1
  __m128i v486; // xmm2
  __m128i v487; // xmm3
  __m128i v488; // kr1A0_16
  __int64 v489; // rbx
  __int64 v490; // rsi
  __int128 v491; // kr1C0_16
  unsigned __int64 v492; // r12
  __int64 v493; // rbx
  __m128i v494; // kr1E0_16
  __int64 v495; // r14
  unsigned __int64 v496; // r12
  __int64 v497; // rbx
  __int64 v498; // rax
  __int64 v499; // rcx
  __int64 v500; // r8
  __int64 v501; // rsi
  __int64 v502; // rax
  __int64 v503; // rcx
  __int64 v504; // rcx
  __m128i v505; // xmm0
  __m128i v506; // xmm1
  __int64 v507; // rsi
  _QWORD *v508; // rdi
  __int64 v509; // rdx
  __int64 v511; // rdi
  __int64 v512; // rsi
  __int64 v513; // rbx
  const __m128i *v514; // r14
  __m128i v516; // xmm0
  __int64 v517; // rax
  __int64 v518; // rdx
  unsigned __int64 v519; // rax
  unsigned __int64 v520; // rdi
  unsigned __int64 v521; // rdi
  __m128i v522; // [rsp+48h] [rbp-38h] BYREF
  __int64 v523; // [rsp+58h] [rbp-28h]
  __m128i v524; // [rsp+60h] [rbp-20h] BYREF
  __int64 v525; // [rsp+70h] [rbp-10h]
  __m128i v526; // [rsp+78h] [rbp-8h] BYREF
  __int64 v527; // [rsp+88h] [rbp+8h]
  __m128i v528; // [rsp+90h] [rbp+10h] BYREF
  __int64 v529; // [rsp+A0h] [rbp+20h]
  __m128i v530; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v531; // [rsp+B8h] [rbp+38h]
  __m128i v532; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v533; // [rsp+D0h] [rbp+50h]
  __m128i v534; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v535; // [rsp+E8h] [rbp+68h]
  __m128i v536; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v537; // [rsp+100h] [rbp+80h]
  __m128i v538; // [rsp+108h] [rbp+88h] BYREF
  __int64 v539; // [rsp+118h] [rbp+98h]
  __m128i v540; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v541; // [rsp+130h] [rbp+B0h]
  __m128i v542; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v543; // [rsp+148h] [rbp+C8h]
  __int64 v544; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v545; // [rsp+158h] [rbp+D8h]
  __int64 v546; // [rsp+160h] [rbp+E0h]
  char *v547; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v548; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v549; // [rsp+180h] [rbp+100h]
  _QWORD *v550; // [rsp+188h] [rbp+108h]
  __int64 v551; // [rsp+190h] [rbp+110h]
  __m128i v552; // [rsp+198h] [rbp+118h] BYREF
  __m128i v553; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v554; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v555; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v556; // [rsp+1D8h] [rbp+158h]
  __int128 v557; // [rsp+1E8h] [rbp+168h]
  __int64 v558; // [rsp+1F8h] [rbp+178h]
  __m128i v559; // [rsp+200h] [rbp+180h]
  __m128i v560; // [rsp+210h] [rbp+190h]
  __int128 v561; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v562; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v563; // [rsp+240h] [rbp+1C0h]
  __int64 v564; // [rsp+248h] [rbp+1C8h]
  __m128i v565; // [rsp+250h] [rbp+1D0h] BYREF
  __m256i v566; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v567; // [rsp+280h] [rbp+200h]
  __int128 v568; // [rsp+290h] [rbp+210h]
  __int128 v569; // [rsp+2A0h] [rbp+220h]
  __int64 v570; // [rsp+2B0h] [rbp+230h]
  __m128i v571; // [rsp+2B8h] [rbp+238h] BYREF
  __m256i v572; // [rsp+2C8h] [rbp+248h] BYREF
  char v573; // [rsp+2EAh] [rbp+26Ah]
  char v574; // [rsp+2EBh] [rbp+26Bh]
  char v575; // [rsp+2ECh] [rbp+26Ch]
  char v576; // [rsp+2EDh] [rbp+26Dh]
  char v577; // [rsp+2EEh] [rbp+26Eh]
  char v578; // [rsp+2EFh] [rbp+26Fh]
  __int64 v579; // [rsp+2F0h] [rbp+270h]
  __m128i v580; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v581; // [rsp+308h] [rbp+288h]
  __int64 (__fastcall *v582)(_QWORD, _QWORD); // [rsp+310h] [rbp+290h]
  char v583; // [rsp+31Fh] [rbp+29Fh]
  char v584; // [rsp+320h] [rbp+2A0h]
  char v585; // [rsp+321h] [rbp+2A1h]
  char v586; // [rsp+322h] [rbp+2A2h]
  char v587; // [rsp+323h] [rbp+2A3h]
  char v588; // [rsp+324h] [rbp+2A4h]
  char v589; // [rsp+325h] [rbp+2A5h]
  char v590; // [rsp+326h] [rbp+2A6h]
  __m128i v591; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v592; // [rsp+338h] [rbp+2B8h]
  char v593; // [rsp+347h] [rbp+2C7h]
  __int64 v594; // [rsp+350h] [rbp+2D0h]
  __int64 v595; // [rsp+358h] [rbp+2D8h]

  v595 = -2;
  v549 = a4;
  v558 = a2;
  v551 = a3;
  sub_140F10F70(&v544, a2, a3, 0);
  v8 = v545;
  v9 = v546;
  v11 = sub_14167F170(v10);
  v12 = v11;
  if ( *(_BYTE *)(v11 + 16) == 1 )
  {
    v13 = *(_OWORD *)v11;
  }
  else
  {
    *(_QWORD *)&v13 = sub_141696260();
    *(_OWORD *)v12 = v13;
    *(_BYTE *)(v12 + 16) = 1;
  }
  v14 = v13 + 1;
  *(_QWORD *)v12 = v13 + 1;
  *(_OWORD *)v566.m256i_i8 = *(&off_141A56DB0 + 1);
  v565 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
  *(_OWORD *)&v566.m256i_u64[2] = v13;
  if ( v9 )
  {
    v15 = v8;
    do
    {
      if ( *(_BYTE *)(v15 + 96) == 1 && (*(_QWORD *)(v15 + 40) != 2 || **(_WORD **)(v15 + 32) != 27503) )
      {
        sub_1416AC440(&v552, v15);
        sub_1403AAB80(&v565, &v552);
      }
      v15 += 104;
      --v9;
    }
    while ( v9 );
  }
  v16 = _mm_load_si128(&v565);
  si128 = _mm_load_si128((const __m128i *)&v566);
  HIDWORD(_RAX) = v566.m256i_i32[7];
  v561 = *(_OWORD *)&v566.m256i_u64[2];
  v560 = si128;
  v559 = v16;
  v19 = si128.m128i_i64[1];
  if ( !si128.m128i_i64[1] )
  {
    v580.m128i_i64[0] = 0;
    v580.m128i_i64[1] = 8;
    v581 = 0;
    v552.m128i_i64[0] = 0;
    v552.m128i_i64[1] = 8;
    v553.m128i_i64[0] = 0;
    nullsub_1(v14);
    v30 = sub_140001650(24, 8);
    if ( !v30 )
      sub_141938D11(8, 24);
    v32 = (_QWORD *)v30;
    nullsub_1(v31);
    v33 = sub_140001650(33, 1);
    if ( !v33 )
    {
      v594 = (__int64)v32;
      sub_141938D2B(1, 33);
    }
    v594 = v8;
    *(_OWORD *)(v33 + 16) = xmmword_141A623F4;
    *(_OWORD *)v33 = xmmword_141A623E4;
    *(_BYTE *)(v33 + 32) = -115;
    *v32 = 33;
    v32[1] = v33;
    v32[2] = 33;
    v566.m256i_i64[0] = v581;
    v34 = _mm_loadu_si128(&v580);
    v565 = v34;
    v566.m256i_i64[3] = v553.m128i_i64[0];
    *(__m128i *)&v566.m256i_u64[1] = _mm_loadu_si128(&v552);
    *(_OWORD *)(a1 + 5) = *(_OWORD *)&v566.m256i_u64[2];
    a1[3] = v566.m256i_i64[0];
    HIDWORD(_RAX) = v566.m256i_i32[3];
    a1[4] = v566.m256i_i64[1];
    *(__m128i *)(a1 + 1) = v34;
    a1[7] = 1;
    a1[8] = v32;
    a1[9] = 1;
    *a1 = -1;
    v36 = v559.m128i_i64[1];
    if ( !v559.m128i_i64[1] )
      goto LABEL_47;
    goto LABEL_38;
  }
  v550 = a1;
  v20 = v559.m128i_i64[0];
  if ( !a6 )
  {
    v37 = (const __m128i *)(v559.m128i_i64[0] + 16);
    _ECX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v559.m128i_i64[0]));
    v39 = v559.m128i_i64[0];
    do
    {
      if ( v19-- == 0 )
        goto LABEL_12;
      if ( !(_WORD)_ECX )
      {
        do
        {
          v42 = _mm_load_si128(v37);
          v39 -= 384;
          ++v37;
          _ECX = _mm_movemask_epi8(v42) ^ 0xFFFF;
        }
        while ( !_ECX );
      }
      __asm { tzcnt   eax, ecx }
      v40 = _ECX & (_ECX - 1);
      _RAX = sub_140F10310(*(_QWORD *)(v39 - 24 * _RAX - 16), *(_QWORD *)(v39 - 24 * _RAX - 8));
      _ECX = v40;
    }
    while ( (_RAX & 1) == 0 );
    nullsub_1(v40);
    _RAX = sub_140001650(59, 1);
    if ( !_RAX )
      sub_141938D2B(1, 59);
    v594 = v8;
    qmemcpy((void *)(_RAX + 16), "ll requires a verified ChatGPT quiet window", 43);
    *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A62405);
    a1 = v550;
    *v550 = 10;
    a1[1] = 59;
    a1[2] = _RAX;
    a1[3] = 59;
    v36 = v559.m128i_i64[1];
    if ( !v559.m128i_i64[1] )
      goto LABEL_47;
LABEL_38:
    v54 = a1;
    v55 = v560.m128i_i64[1];
    if ( v560.m128i_i64[1] )
    {
      v56 = v559.m128i_i64[0];
      v57 = (const __m128i *)(v559.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v559.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v59 = _mm_load_si128(v57);
            v56 -= 384;
            ++v57;
            _R15D = _mm_movemask_epi8(v59) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v60 = -3LL * _RAX;
        v61 = *(_QWORD *)(v56 + 8 * v60 - 24);
        if ( v61 )
          sub_140001660(*(_QWORD *)(v56 + 8 * v60 - 16), v61, 1);
        --v55;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v55 );
    }
    v62 = (24 * v36 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v63 = v62 + v36;
    v64 = v63 == -17;
    v65 = v63 + 17;
    a1 = v54;
    if ( !v64 )
      sub_140001660(v559.m128i_i64[0] - v62, v65, 16);
LABEL_47:
    sub_1403FBD20(&v544);
    goto LABEL_48;
  }
LABEL_12:
  v571.m128i_i64[0] = 0;
  v571.m128i_i64[1] = 8;
  *(_OWORD *)v572.m256i_i8 = 0u;
  *(_OWORD *)&v572.m256i_u64[2] = 8u;
  v591.m128i_i64[0] = 0;
  v591.m128i_i64[1] = 8;
  v592 = 0;
  v562 = 0;
  v563 = 8;
  v564 = 0;
  v21 = sub_140D2CC10(&v561, aAuthIntegrity, 14);
  v23 = _mm_cvtsi32_si128(v21 >> 57);
  v24 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v23, v23), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v26 = v559.m128i_i64[1] & v21;
    v27 = _mm_loadu_si128((const __m128i *)(v20 + v26));
    _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v24));
    if ( _R8D )
      break;
LABEL_17:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL)) )
      goto LABEL_69;
    v21 = i + v26 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r9d, r8d }
    v29 = -3LL * (v559.m128i_i64[1] & (v26 + _R9));
    if ( *(_QWORD *)(v20 + 8 * v29 - 8) == 14
      && !(**(_QWORD **)(v20 + 8 * v29 - 16) ^ 0x746E695F68747561LL
         | *(_QWORD *)(*(_QWORD *)(v20 + 8 * v29 - 16) + 6LL) ^ 0x797469726765746ELL) )
    {
      break;
    }
    _R9 = (unsigned int)(_R8D - 1);
    LOWORD(_R9) = _R8D & (_R8D - 1);
    _R8D = _R9;
    if ( !(_WORD)_R9 )
      goto LABEL_17;
  }
  sub_140F04FE0(&v552, v558, *(unsigned __int8 *)(v551 + 364));
  if ( v552.m128i_i32[0] != -1 )
  {
    v569 = v557;
    v568 = v556;
    v44 = _mm_loadu_si128(&v552);
    v45 = _mm_loadu_si128(&v553);
    v46 = _mm_loadu_si128(&v554);
    v567 = _mm_loadu_si128(&v555);
    *(__m128i *)&v566.m256i_u64[2] = v46;
    *(__m128i *)v566.m256i_i8 = v45;
    v565 = v44;
    nullsub_1(v43);
    v47 = (void *)sub_140001650(14, 1);
    if ( !v47 )
      sub_141938D2B(1, 14);
    v594 = (__int64)v47;
    qmemcpy(v47, "auth_integrity", 14);
    v48 = v572.m256i_i64[3];
    if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
      sub_14190FDC0(&v572.m256i_u64[1]);
    v49 = v572.m256i_i64[2];
    v50 = 3 * v48;
    *(_QWORD *)(v572.m256i_i64[2] + 8 * v50) = 14;
    *(_QWORD *)(v49 + 8 * v50 + 8) = v594;
    *(_QWORD *)(v49 + 8 * v50 + 16) = 14;
    v572.m256i_i64[3] = v48 + 1;
    v580.m128i_i64[0] = (__int64)&v565;
    v580.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v542, &unk_141A62440, &v580);
    v51 = v592;
    if ( v592 == v591.m128i_i64[0] )
      sub_14190FDC0(&v591);
    v52 = v591.m128i_i64[1];
    v53 = 3 * v51;
    *(_QWORD *)(v591.m128i_i64[1] + 8 * v53 + 16) = v543;
    *(__m128i *)(v52 + 8 * v53) = _mm_loadu_si128(&v542);
    v592 = v51 + 1;
    sub_140E97700(&v565);
    goto LABEL_68;
  }
  v67 = _mm_loadu_si128((const __m128i *)&v553.m128i_u64[1]);
  v68 = _mm_loadu_si128((const __m128i *)&v554.m128i_u64[1]);
  v69 = _mm_loadu_si128((const __m128i *)&v555.m128i_u64[1]);
  v565 = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
  *(__m128i *)v566.m256i_i8 = v67;
  *(_QWORD *)&v568 = *((_QWORD *)&v556 + 1);
  v567 = v69;
  *(__m128i *)&v566.m256i_u64[2] = v68;
  v70 = v565;
  v580.m128i_i64[0] = v565.m128i_i64[1];
  v580.m128i_i64[1] = v565.m128i_i64[1];
  v581 = v565.m128i_i64[0];
  v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v565.m128i_i64[1] + 24 * v67.m128i_i64[0]);
  v71 = v572.m256i_i64[0];
  if ( v67.m128i_i64[0] > (unsigned __int64)(v571.m128i_i64[0] - v572.m256i_i64[0]) )
  {
    sub_14190D590((unsigned int)&v571, v572.m256i_i32[0], v67.m128i_i32[0], 8, 24);
    v71 = v572.m256i_i64[0];
  }
  else if ( !v67.m128i_i64[0] )
  {
    goto LABEL_54;
  }
  sub_1418F44E0((__m128i *)(v571.m128i_i64[1] + 24 * v71), (const __m128i *)v70.m128i_i64[1], 24 * v67.m128i_i64[0]);
LABEL_54:
  v572.m256i_i64[0] = v67.m128i_i64[0] + v71;
  if ( v70.m128i_i64[0] )
    sub_140001660(v70.m128i_i64[1], 24 * v70.m128i_i64[0], 8);
  v72 = v567;
  v73 = v568;
  v74 = 24 * v568;
  v580.m128i_i64[0] = v567.m128i_i64[1];
  v580.m128i_i64[1] = v567.m128i_i64[1];
  v581 = v567.m128i_i64[0];
  v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v567.m128i_i64[1] + 24 * v568);
  v75 = v592;
  if ( (unsigned __int64)v568 > v591.m128i_i64[0] - v592 )
  {
    sub_14190D590((unsigned int)&v591, v592, v568, 8, 24);
    v75 = v592;
    goto LABEL_58;
  }
  if ( (_QWORD)v568 )
LABEL_58:
    sub_1418F44E0((__m128i *)(v591.m128i_i64[1] + 24 * v75), (const __m128i *)v72.m128i_i64[1], v74);
  v592 = v73 + v75;
  if ( v72.m128i_i64[0] )
    sub_140001660(v72.m128i_i64[1], 24 * v72.m128i_i64[0], 8);
  v76 = *(_OWORD *)&v566.m256i_u64[2];
  if ( v566.m256i_i64[3] )
  {
    v77 = (_QWORD *)(v566.m256i_i64[2] + 8);
    do
    {
      v78 = *(v77 - 1);
      if ( v78 )
        sub_140001660(*v77, v78, 1);
      v77 += 3;
      --*((_QWORD *)&v76 + 1);
    }
    while ( *((_QWORD *)&v76 + 1) );
  }
  if ( v566.m256i_i64[1] )
    sub_140001660(v76, 24 * v566.m256i_i64[1], 8);
LABEL_68:
  if ( !v560.m128i_i64[1] )
    goto LABEL_381;
LABEL_69:
  v79 = sub_140D2CC10(&v561, &xmmword_141A5DF70, 26);
  v81 = _mm_cvtsi32_si128(v79 >> 57);
  v82 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v81, v81), 0), 68);
  v83 = 0;
  v84 = _mm_load_si128((const __m128i *)&xmmword_141A55690);
  v85 = _mm_load_si128((const __m128i *)&xmmword_141A556A0);
  while ( 1 )
  {
    v86 = v559.m128i_i64[1] & v79;
    v87 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v86));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v87, v82));
    if ( _R9D )
      break;
LABEL_74:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v87, (__m128i)-1LL)) )
      goto LABEL_99;
    v79 = v83 + v86 + 16;
    v83 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v89 = -3LL * (v559.m128i_i64[1] & (v86 + _R10));
    if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v89 - 8) == 26
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(
               _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v89 - 16) + 10LL)),
               v84),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v89 - 16)), v85))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_74;
  }
  sub_140F32530(&v552, v558, *(unsigned __int8 *)(v551 + 364), *(unsigned __int8 *)(v551 + 382));
  if ( v552.m128i_i32[0] != -1 )
  {
    v569 = v557;
    v568 = v556;
    v91 = _mm_loadu_si128(&v552);
    v92 = _mm_loadu_si128(&v553);
    v93 = _mm_loadu_si128(&v554);
    v567 = _mm_loadu_si128(&v555);
    *(__m128i *)&v566.m256i_u64[2] = v93;
    *(__m128i *)v566.m256i_i8 = v92;
    v565 = v91;
    nullsub_1(v90);
    v94 = sub_140001650(26, 1);
    if ( !v94 )
      sub_141938D2B(1, 26);
    *(_OWORD *)(v94 + 10) = *(__int128 *)((char *)&xmmword_141A5DF70 + 10);
    v594 = v94;
    *(__m128i *)v94 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DF70);
    v95 = v572.m256i_i64[3];
    if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
      sub_14190FDC0(&v572.m256i_u64[1]);
    v96 = v572.m256i_i64[2];
    v97 = 3 * v95;
    *(_QWORD *)(v572.m256i_i64[2] + 8 * v97) = 26;
    *(_QWORD *)(v96 + 8 * v97 + 8) = v594;
    *(_QWORD *)(v96 + 8 * v97 + 16) = 26;
    v572.m256i_i64[3] = v95 + 1;
    v580.m128i_i64[0] = (__int64)&v565;
    v580.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v540, &unk_141A62453, &v580);
    v98 = v592;
    if ( v592 == v591.m128i_i64[0] )
      sub_14190FDC0(&v591);
    v99 = v591.m128i_i64[1];
    v100 = 3 * v98;
    *(_QWORD *)(v591.m128i_i64[1] + 8 * v100 + 16) = v541;
    *(__m128i *)(v99 + 8 * v100) = _mm_loadu_si128(&v540);
    v592 = v98 + 1;
    sub_140E97700(&v565);
    goto LABEL_98;
  }
  v101 = _mm_loadu_si128((const __m128i *)&v553.m128i_u64[1]);
  v102 = _mm_loadu_si128((const __m128i *)&v554.m128i_u64[1]);
  v103 = _mm_loadu_si128((const __m128i *)&v555.m128i_u64[1]);
  v565 = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
  *(__m128i *)v566.m256i_i8 = v101;
  *(_QWORD *)&v568 = *((_QWORD *)&v556 + 1);
  v567 = v103;
  *(__m128i *)&v566.m256i_u64[2] = v102;
  v104 = v565;
  v580.m128i_i64[0] = v565.m128i_i64[1];
  v580.m128i_i64[1] = v565.m128i_i64[1];
  v581 = v565.m128i_i64[0];
  v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v565.m128i_i64[1] + 24 * v101.m128i_i64[0]);
  v105 = v572.m256i_i64[0];
  if ( v101.m128i_i64[0] > (unsigned __int64)(v571.m128i_i64[0] - v572.m256i_i64[0]) )
  {
    sub_14190D590((unsigned int)&v571, v572.m256i_i32[0], v101.m128i_i32[0], 8, 24);
    v105 = v572.m256i_i64[0];
  }
  else if ( !v101.m128i_i64[0] )
  {
    goto LABEL_86;
  }
  sub_1418F44E0((__m128i *)(v571.m128i_i64[1] + 24 * v105), (const __m128i *)v104.m128i_i64[1], 24 * v101.m128i_i64[0]);
LABEL_86:
  v572.m256i_i64[0] = v101.m128i_i64[0] + v105;
  if ( v104.m128i_i64[0] )
    sub_140001660(v104.m128i_i64[1], 24 * v104.m128i_i64[0], 8);
  v106 = v566.m256i_i64[1];
  v107 = *(_OWORD *)&v566.m256i_u64[2];
  v108 = 24 * v566.m256i_i64[3];
  v580.m128i_i64[0] = v566.m256i_i64[2];
  v580.m128i_i64[1] = v566.m256i_i64[2];
  v581 = v566.m256i_i64[1];
  v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v566.m256i_i64[2] + 24 * v566.m256i_i64[3]);
  v109 = v572.m256i_i64[3];
  if ( v566.m256i_i64[3] > (unsigned __int64)(v572.m256i_i64[1] - v572.m256i_i64[3]) )
  {
    sub_14190D590((unsigned int)&v572.m256i_u32[2], v572.m256i_i32[6], v566.m256i_i32[6], 8, 24);
    v109 = v572.m256i_i64[3];
  }
  else if ( !v566.m256i_i64[3] )
  {
    goto LABEL_91;
  }
  sub_1418F44E0((__m128i *)(v572.m256i_i64[2] + 24 * v109), (const __m128i *)v107, v108);
LABEL_91:
  v572.m256i_i64[3] = *((_QWORD *)&v107 + 1) + v109;
  if ( v106 )
    sub_140001660(v107, 24 * v106, 8);
  v110 = v567;
  v111 = v568;
  v112 = 24 * v568;
  v580.m128i_i64[0] = v567.m128i_i64[1];
  v580.m128i_i64[1] = v567.m128i_i64[1];
  v581 = v567.m128i_i64[0];
  v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v567.m128i_i64[1] + 24 * v568);
  v113 = v592;
  if ( (unsigned __int64)v568 > v591.m128i_i64[0] - v592 )
  {
    sub_14190D590((unsigned int)&v591, v592, v568, 8, 24);
    v113 = v592;
  }
  else if ( !(_QWORD)v568 )
  {
    goto LABEL_96;
  }
  sub_1418F44E0((__m128i *)(v591.m128i_i64[1] + 24 * v113), (const __m128i *)v110.m128i_i64[1], v112);
LABEL_96:
  v592 = v111 + v113;
  if ( v110.m128i_i64[0] )
    sub_140001660(v110.m128i_i64[1], 24 * v110.m128i_i64[0], 8);
LABEL_98:
  if ( !v560.m128i_i64[1] )
    goto LABEL_381;
LABEL_99:
  v114 = sub_140D2CC10(&v561, aTakeoverBackup, 22);
  v116 = _mm_cvtsi32_si128(v114 >> 57);
  v117 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v116, v116), 0), 68);
  v118 = 0;
  v119 = _mm_load_si128((const __m128i *)&xmmword_141A556D0);
  v120 = _mm_load_si128((const __m128i *)&xmmword_141A556E0);
  while ( 1 )
  {
    v121 = v559.m128i_i64[1] & v114;
    v122 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v121));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v122, v117));
    if ( _R9D )
      break;
LABEL_104:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v122, (__m128i)-1LL)) )
      goto LABEL_129;
    v114 = v118 + v121 + 16;
    v118 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v124 = -3LL * (v559.m128i_i64[1] & (v121 + _R10));
    if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v124 - 8) == 22
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(
               _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v124 - 16) + 6LL)),
               v119),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v124 - 16)), v120))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_104;
  }
  sub_140F23360(&v552, v558, *(unsigned __int8 *)(v551 + 364));
  if ( v552.m128i_i32[0] == -1 )
  {
    v136 = _mm_loadu_si128((const __m128i *)&v553.m128i_u64[1]);
    v137 = _mm_loadu_si128((const __m128i *)&v554.m128i_u64[1]);
    v138 = _mm_loadu_si128((const __m128i *)&v555.m128i_u64[1]);
    v565 = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
    *(__m128i *)v566.m256i_i8 = v136;
    *(_QWORD *)&v568 = *((_QWORD *)&v556 + 1);
    v567 = v138;
    *(__m128i *)&v566.m256i_u64[2] = v137;
    v139 = v565;
    v580.m128i_i64[0] = v565.m128i_i64[1];
    v580.m128i_i64[1] = v565.m128i_i64[1];
    v581 = v565.m128i_i64[0];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v565.m128i_i64[1] + 24 * v136.m128i_i64[0]);
    v140 = v572.m256i_i64[0];
    if ( v136.m128i_i64[0] > (unsigned __int64)(v571.m128i_i64[0] - v572.m256i_i64[0]) )
    {
      sub_14190D590((unsigned int)&v571, v572.m256i_i32[0], v136.m128i_i32[0], 8, 24);
      v140 = v572.m256i_i64[0];
    }
    else if ( !v136.m128i_i64[0] )
    {
      goto LABEL_116;
    }
    sub_1418F44E0(
      (__m128i *)(v571.m128i_i64[1] + 24 * v140),
      (const __m128i *)v139.m128i_i64[1],
      24 * v136.m128i_i64[0]);
LABEL_116:
    v572.m256i_i64[0] = v136.m128i_i64[0] + v140;
    if ( v139.m128i_i64[0] )
      sub_140001660(v139.m128i_i64[1], 24 * v139.m128i_i64[0], 8);
    v141 = v566.m256i_i64[1];
    v142 = *(_OWORD *)&v566.m256i_u64[2];
    v143 = 24 * v566.m256i_i64[3];
    v580.m128i_i64[0] = v566.m256i_i64[2];
    v580.m128i_i64[1] = v566.m256i_i64[2];
    v581 = v566.m256i_i64[1];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v566.m256i_i64[2] + 24 * v566.m256i_i64[3]);
    v144 = v572.m256i_i64[3];
    if ( v566.m256i_i64[3] > (unsigned __int64)(v572.m256i_i64[1] - v572.m256i_i64[3]) )
    {
      sub_14190D590((unsigned int)&v572.m256i_u32[2], v572.m256i_i32[6], v566.m256i_i32[6], 8, 24);
      v144 = v572.m256i_i64[3];
    }
    else if ( !v566.m256i_i64[3] )
    {
      goto LABEL_121;
    }
    sub_1418F44E0((__m128i *)(v572.m256i_i64[2] + 24 * v144), (const __m128i *)v142, v143);
LABEL_121:
    v572.m256i_i64[3] = *((_QWORD *)&v142 + 1) + v144;
    if ( v141 )
      sub_140001660(v142, 24 * v141, 8);
    v145 = v567;
    v146 = v568;
    v147 = 24 * v568;
    v580.m128i_i64[0] = v567.m128i_i64[1];
    v580.m128i_i64[1] = v567.m128i_i64[1];
    v581 = v567.m128i_i64[0];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v567.m128i_i64[1] + 24 * v568);
    v148 = v592;
    if ( (unsigned __int64)v568 > v591.m128i_i64[0] - v592 )
    {
      sub_14190D590((unsigned int)&v591, v592, v568, 8, 24);
      v148 = v592;
    }
    else if ( !(_QWORD)v568 )
    {
      goto LABEL_126;
    }
    sub_1418F44E0((__m128i *)(v591.m128i_i64[1] + 24 * v148), (const __m128i *)v145.m128i_i64[1], v147);
LABEL_126:
    v592 = v146 + v148;
    if ( v145.m128i_i64[0] )
      sub_140001660(v145.m128i_i64[1], 24 * v145.m128i_i64[0], 8);
    goto LABEL_128;
  }
  v569 = v557;
  v568 = v556;
  v126 = _mm_loadu_si128(&v552);
  v127 = _mm_loadu_si128(&v553);
  v128 = _mm_loadu_si128(&v554);
  v567 = _mm_loadu_si128(&v555);
  *(__m128i *)&v566.m256i_u64[2] = v128;
  *(__m128i *)v566.m256i_i8 = v127;
  v565 = v126;
  nullsub_1(v125);
  v129 = sub_140001650(22, 1);
  if ( !v129 )
    sub_141938D2B(1, 22);
  *(__m128i *)v129 = _mm_loadu_si128((const __m128i *)aTakeoverBackup);
  v594 = v129;
  *(_QWORD *)(v129 + 14) = 0x6E616870726F5F70LL;
  v130 = v572.m256i_i64[3];
  if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
    sub_14190FDC0(&v572.m256i_u64[1]);
  v131 = v572.m256i_i64[2];
  v132 = 3 * v130;
  *(_QWORD *)(v572.m256i_i64[2] + 8 * v132) = 22;
  *(_QWORD *)(v131 + 8 * v132 + 8) = v594;
  *(_QWORD *)(v131 + 8 * v132 + 16) = 22;
  v572.m256i_i64[3] = v130 + 1;
  v580.m128i_i64[0] = (__int64)&v565;
  v580.m128i_i64[1] = (__int64)sub_14104A7D0;
  sub_1416ABFD0(&v538, &unk_141A62472, &v580);
  v133 = v592;
  if ( v592 == v591.m128i_i64[0] )
    sub_14190FDC0(&v591);
  v134 = v591.m128i_i64[1];
  v135 = 3 * v133;
  *(_QWORD *)(v591.m128i_i64[1] + 8 * v135 + 16) = v539;
  *(__m128i *)(v134 + 8 * v135) = _mm_loadu_si128(&v538);
  v592 = v133 + 1;
  sub_140E97700(&v565);
LABEL_128:
  if ( !v560.m128i_i64[1] )
    goto LABEL_381;
LABEL_129:
  v149 = sub_140D2CC10(&v561, aConfigTomlSynt, 18);
  v151 = _mm_cvtsi32_si128(v149 >> 57);
  v152 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v151, v151), 0), 68);
  v153 = 0;
  v154 = _mm_load_si128((const __m128i *)&xmmword_141A55770);
  v155 = _mm_cvtsi32_si128(0x7861u);
  while ( 1 )
  {
    v156 = v559.m128i_i64[1] & v149;
    v157 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v156));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v157, v152));
    if ( _R9D )
      break;
LABEL_134:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v157, (__m128i)-1LL)) )
    {
      v162 = 0;
LABEL_153:
      v183 = sub_140D2CC10(&v561, aConfigThirdPar, 18);
      v185 = _mm_cvtsi32_si128(v183 >> 57);
      v186 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v185, v185), 0), 68);
      v187 = 0;
      v188 = _mm_load_si128((const __m128i *)&xmmword_141A55790);
      v189 = _mm_cvtsi32_si128(0x7974u);
      while ( 1 )
      {
        v190 = v559.m128i_i64[1] & v183;
        v191 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v190));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v191, v186));
        if ( _R9D )
          break;
LABEL_158:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v191, (__m128i)-1LL)) )
          goto LABEL_178;
        v183 = v187 + v190 + 16;
        v187 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v193 = -3LL * (v559.m128i_i64[1] & (v190 + _R10));
        if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v193 - 8) == 18
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(
                   _mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v193 - 16) + 16LL)),
                   v189),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v193 - 16)), v188))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_158;
      }
      sub_140F25EA0(&v552, v558, *(_QWORD *)(v551 + 8), *(_QWORD *)(v551 + 16));
      if ( v552.m128i_i32[0] == -1 )
      {
        v579 = v552.m128i_i64[1];
        v570 = v553.m128i_i64[0];
        nullsub_1(v194);
        v205 = (__m128i *)sub_140001650(18, 1);
        if ( !v205 )
        {
          v577 = 1;
          sub_141938D2B(1, 18);
        }
        *v205 = _mm_loadu_si128((const __m128i *)aConfigThirdPar);
        v205[1].m128i_i16[0] = 31092;
        v580.m128i_i64[0] = 18;
        v594 = (__int64)v205;
        v580.m128i_i64[1] = (__int64)v205;
        v581 = 18;
        v588 = 1;
        v587 = 1;
        sub_1416AC440(&v565, &v580);
        v206 = v572.m256i_i64[0];
        if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
          sub_14190FDC0(&v571);
        v207 = v571.m128i_i64[1];
        v208 = 3 * v206;
        *(_QWORD *)(v571.m128i_i64[1] + 8 * v208 + 16) = v566.m256i_i64[0];
        *(__m128i *)(v207 + 8 * v208) = _mm_loadu_si128(&v565);
        v572.m256i_i64[0] = v206 + 1;
        v209 = v564;
        if ( v564 == v562 )
          sub_14190FDC0(&v562);
        v210 = v563;
        v211 = 3 * v209;
        *(_QWORD *)(v563 + 8 * v211) = 18;
        *(_QWORD *)(v210 + 8 * v211 + 8) = v594;
        *(_QWORD *)(v210 + 8 * v211 + 16) = 18;
        v564 = v209 + 1;
        v212 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v213 = v591.m128i_i64[1];
        v214 = 3 * v212;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v214 + 16) = v553.m128i_i64[1];
        *(__m128i *)(v213 + 8 * v214) = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
        v592 = v212 + 1;
        v162 = 1;
        if ( !v560.m128i_i64[1] )
          goto LABEL_246;
      }
      else
      {
        v569 = v557;
        v568 = v556;
        v195 = _mm_loadu_si128(&v552);
        v196 = _mm_loadu_si128(&v553);
        v197 = _mm_loadu_si128(&v554);
        v567 = _mm_loadu_si128(&v555);
        *(__m128i *)&v566.m256i_u64[2] = v197;
        *(__m128i *)v566.m256i_i8 = v196;
        v565 = v195;
        nullsub_1(v194);
        v198 = (__m128i *)sub_140001650(18, 1);
        if ( !v198 )
          sub_141938D2B(1, 18);
        *v198 = _mm_loadu_si128((const __m128i *)aConfigThirdPar);
        v594 = (__int64)v198;
        v198[1].m128i_i16[0] = 31092;
        v199 = v572.m256i_i64[3];
        if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
          sub_14190FDC0(&v572.m256i_u64[1]);
        v200 = v572.m256i_i64[2];
        v201 = 3 * v199;
        *(_QWORD *)(v572.m256i_i64[2] + 8 * v201) = 18;
        *(_QWORD *)(v200 + 8 * v201 + 8) = v594;
        *(_QWORD *)(v200 + 8 * v201 + 16) = 18;
        v572.m256i_i64[3] = v199 + 1;
        v580.m128i_i64[0] = (__int64)&v565;
        v580.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v534, &unk_141A624A4, &v580);
        v202 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v203 = v591.m128i_i64[1];
        v204 = 3 * v202;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v204 + 16) = v535;
        *(__m128i *)(v203 + 8 * v204) = _mm_loadu_si128(&v534);
        v592 = v202 + 1;
        sub_140E97700(&v565);
        if ( !v560.m128i_i64[1] )
        {
LABEL_246:
          if ( v162 )
            goto LABEL_285;
          goto LABEL_381;
        }
      }
LABEL_178:
      v215 = sub_140D2CC10(&v561, aConfigProfileC, 23);
      v217 = _mm_cvtsi32_si128(v215 >> 57);
      v218 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v217, v217), 0), 68);
      v219 = 0;
      v220 = _mm_load_si128((const __m128i *)&xmmword_141A55710);
      v221 = _mm_load_si128((const __m128i *)&xmmword_141A55720);
      while ( 1 )
      {
        v222 = v559.m128i_i64[1] & v215;
        v223 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v222));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v223, v218));
        if ( _R9D )
          break;
LABEL_183:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v223, (__m128i)-1LL)) )
          goto LABEL_201;
        v215 = v219 + v222 + 16;
        v219 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v225 = -3LL * (v559.m128i_i64[1] & (v222 + _R10));
        if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v225 - 8) == 23
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(
                   _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v225 - 16) + 7LL)),
                   v220),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v225 - 16)), v221))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_183;
      }
      sub_140F39220(&v552, v558, v219);
      if ( v552.m128i_i32[0] == -1 )
      {
        v579 = v552.m128i_i64[1];
        v570 = v553.m128i_i64[0];
        nullsub_1(v226);
        v237 = sub_140001650(23, 1);
        if ( !v237 )
        {
          v576 = 1;
          sub_141938D2B(1, 23);
        }
        *(__m128i *)v237 = _mm_loadu_si128((const __m128i *)aConfigProfileC);
        *(_QWORD *)(v237 + 15) = 0x7463696C666E6F63LL;
        v580.m128i_i64[0] = 23;
        v594 = v237;
        v580.m128i_i64[1] = v237;
        v581 = 23;
        v586 = 1;
        v585 = 1;
        sub_1416AC440(&v565, &v580);
        v238 = v572.m256i_i64[0];
        if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
          sub_14190FDC0(&v571);
        v239 = v571.m128i_i64[1];
        v240 = 3 * v238;
        *(_QWORD *)(v571.m128i_i64[1] + 8 * v240 + 16) = v566.m256i_i64[0];
        *(__m128i *)(v239 + 8 * v240) = _mm_loadu_si128(&v565);
        v572.m256i_i64[0] = v238 + 1;
        v241 = v564;
        if ( v564 == v562 )
          sub_14190FDC0(&v562);
        v242 = v563;
        v243 = 3 * v241;
        *(_QWORD *)(v563 + 8 * v243) = 23;
        *(_QWORD *)(v242 + 8 * v243 + 8) = v594;
        *(_QWORD *)(v242 + 8 * v243 + 16) = 23;
        v564 = v241 + 1;
        v244 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v245 = v591.m128i_i64[1];
        v246 = 3 * v244;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v246 + 16) = v553.m128i_i64[1];
        *(__m128i *)(v245 + 8 * v246) = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
        v592 = v244 + 1;
        v162 = 1;
        if ( !v560.m128i_i64[1] )
          goto LABEL_246;
      }
      else
      {
        v569 = v557;
        v568 = v556;
        v227 = _mm_loadu_si128(&v552);
        v228 = _mm_loadu_si128(&v553);
        v229 = _mm_loadu_si128(&v554);
        v567 = _mm_loadu_si128(&v555);
        *(__m128i *)&v566.m256i_u64[2] = v229;
        *(__m128i *)v566.m256i_i8 = v228;
        v565 = v227;
        nullsub_1(v226);
        v230 = sub_140001650(23, 1);
        if ( !v230 )
          sub_141938D2B(1, 23);
        *(__m128i *)v230 = _mm_loadu_si128((const __m128i *)aConfigProfileC);
        v594 = v230;
        *(_QWORD *)(v230 + 15) = 0x7463696C666E6F63LL;
        v231 = v572.m256i_i64[3];
        if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
          sub_14190FDC0(&v572.m256i_u64[1]);
        v232 = v572.m256i_i64[2];
        v233 = 3 * v231;
        *(_QWORD *)(v572.m256i_i64[2] + 8 * v233) = 23;
        *(_QWORD *)(v232 + 8 * v233 + 8) = v594;
        *(_QWORD *)(v232 + 8 * v233 + 16) = 23;
        v572.m256i_i64[3] = v231 + 1;
        v580.m128i_i64[0] = (__int64)&v565;
        v580.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v532, &unk_141A624BB, &v580);
        v234 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v235 = v591.m128i_i64[1];
        v236 = 3 * v234;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v236 + 16) = v533;
        *(__m128i *)(v235 + 8 * v236) = _mm_loadu_si128(&v532);
        v592 = v234 + 1;
        sub_140E97700(&v565);
        if ( !v560.m128i_i64[1] )
          goto LABEL_246;
      }
LABEL_201:
      v247 = sub_140D2CC10(&v561, aConfigStale, 12);
      v249 = _mm_cvtsi32_si128(v247 >> 57);
      v250 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v249, v249), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v252 = v559.m128i_i64[1] & v247;
        v253 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v252));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v253, v250));
        if ( _R9D )
          break;
LABEL_206:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v253, (__m128i)-1LL)) )
          goto LABEL_215;
        v247 = j + v252 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v255 = -3LL * (v559.m128i_i64[1] & (v252 + _R10));
        if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v255 - 8) == 12
          && !(**(_QWORD **)(v559.m128i_i64[0] + 8 * v255 - 16) ^ 0x735F6769666E6F63LL
             | *(unsigned int *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v255 - 16) + 8LL) ^ 0x656C6174LL) )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_206;
      }
      sub_140F08900(&v552, *(_QWORD *)(v558 + 72), *(_QWORD *)(v558 + 80));
      if ( v552.m128i_i32[0] == -1 )
      {
        v579 = v552.m128i_i64[1];
        v570 = v553.m128i_i64[0];
        nullsub_1(v256);
        v301 = (void *)sub_140001650(12, 1);
        if ( !v301 )
        {
          v575 = 1;
          sub_141938D2B(1, 12);
        }
        qmemcpy(v301, "config_stale", 12);
        v580.m128i_i64[0] = 12;
        v594 = (__int64)v301;
        v580.m128i_i64[1] = (__int64)v301;
        v581 = 12;
        v584 = 1;
        v583 = 1;
        sub_1416AC440(&v565, &v580);
        v302 = v572.m256i_i64[0];
        if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
          sub_14190FDC0(&v571);
        v303 = v571.m128i_i64[1];
        v304 = 3 * v302;
        *(_QWORD *)(v571.m128i_i64[1] + 8 * v304 + 16) = v566.m256i_i64[0];
        *(__m128i *)(v303 + 8 * v304) = _mm_loadu_si128(&v565);
        v572.m256i_i64[0] = v302 + 1;
        v305 = v564;
        if ( v564 == v562 )
          sub_14190FDC0(&v562);
        v306 = v563;
        v307 = 3 * v305;
        *(_QWORD *)(v563 + 8 * v307) = 12;
        *(_QWORD *)(v306 + 8 * v307 + 8) = v594;
        *(_QWORD *)(v306 + 8 * v307 + 16) = 12;
        v564 = v305 + 1;
        v308 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v309 = v591.m128i_i64[1];
        v310 = 3 * v308;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v310 + 16) = v553.m128i_i64[1];
        *(__m128i *)(v309 + 8 * v310) = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
        v592 = v308 + 1;
        v162 |= *(_BYTE *)(v551 + 364);
        if ( !v560.m128i_i64[1] )
          goto LABEL_246;
      }
      else
      {
        v569 = v557;
        v568 = v556;
        v257 = _mm_loadu_si128(&v552);
        v258 = _mm_loadu_si128(&v553);
        v259 = _mm_loadu_si128(&v554);
        v567 = _mm_loadu_si128(&v555);
        *(__m128i *)&v566.m256i_u64[2] = v259;
        *(__m128i *)v566.m256i_i8 = v258;
        v565 = v257;
        nullsub_1(v256);
        v260 = (void *)sub_140001650(12, 1);
        if ( !v260 )
          sub_141938D2B(1, 12);
        qmemcpy(v260, "config_stale", 12);
        v594 = (__int64)v260;
        v261 = v572.m256i_i64[3];
        if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
          sub_14190FDC0(&v572.m256i_u64[1]);
        v262 = v572.m256i_i64[2];
        v263 = 3 * v261;
        *(_QWORD *)(v572.m256i_i64[2] + 8 * v263) = 12;
        *(_QWORD *)(v262 + 8 * v263 + 8) = v594;
        *(_QWORD *)(v262 + 8 * v263 + 16) = 12;
        v572.m256i_i64[3] = v261 + 1;
        v580.m128i_i64[0] = (__int64)&v565;
        v580.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v530, &unk_141A624D7, &v580);
        v264 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v265 = v591.m128i_i64[1];
        v266 = 3 * v264;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v266 + 16) = v531;
        *(__m128i *)(v265 + 8 * v266) = _mm_loadu_si128(&v530);
        v592 = v264 + 1;
        sub_140E97700(&v565);
        if ( !v560.m128i_i64[1] )
          goto LABEL_246;
      }
LABEL_215:
      v267 = sub_140D2CC10(&v561, aRouterHttpCont, 20);
      v269 = _mm_cvtsi32_si128(v267 >> 57);
      v270 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v269, v269), 0), 68);
      v271 = 0;
      v272 = _mm_cvtsi32_si128(0x74636172u);
      v273 = _mm_load_si128((const __m128i *)&xmmword_141A557C0);
      while ( 1 )
      {
        v274 = v559.m128i_i64[1] & v267;
        v275 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v274));
        _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v275, v270));
        if ( _R9D )
          break;
LABEL_220:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v275, (__m128i)-1LL)) )
          goto LABEL_231;
        v267 = v271 + v274 + 16;
        v271 += 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v277 = -3LL * (v559.m128i_i64[1] & (v274 + _R10));
        if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v277 - 8) == 20
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(
                   _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v277 - 16) + 16LL)),
                   v272),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v277 - 16)), v273))) == 0xFFFF )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_220;
      }
      nullsub_1(v559.m128i_i64[0]);
      v278 = (__m128i *)sub_140001650(20, 1);
      if ( !v278 )
        sub_141938D2B(1, 20);
      *v278 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
      v278[1].m128i_i32[0] = 1952670066;
      v552.m128i_i64[0] = 20;
      v594 = (__int64)v278;
      v552.m128i_i64[1] = (__int64)v278;
      v553.m128i_i64[0] = 20;
      v593 = 1;
      sub_1416AC440(&v565, &v552);
      v279 = v572.m256i_i64[0];
      if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
        sub_14190FDC0(&v571);
      v280 = v571.m128i_i64[1];
      v281 = 3 * v279;
      *(_QWORD *)(v571.m128i_i64[1] + 8 * v281 + 16) = v566.m256i_i64[0];
      *(__m128i *)(v280 + 8 * v281) = _mm_loadu_si128(&v565);
      v572.m256i_i64[0] = v279 + 1;
      v282 = v564;
      if ( v564 == v562 )
        sub_14190FDC0(&v562);
      v283 = v563;
      v284 = 3 * v282;
      *(_QWORD *)(v563 + 8 * v284) = 20;
      *(_QWORD *)(v283 + 8 * v284 + 8) = v594;
      *(_QWORD *)(v283 + 8 * v284 + 16) = 20;
      v564 = v282 + 1;
      nullsub_1(3 * v282);
      v285 = sub_140001650(45, 1);
      if ( !v285 )
      {
        v593 = 0;
        sub_141938D2B(1, 45);
      }
      *(_OWORD *)(v285 + 29) = *(__int128 *)((char *)&xmmword_141A624F8 + 13);
      *(_OWORD *)(v285 + 16) = xmmword_141A624F8;
      v579 = v285;
      *(__m128i *)v285 = _mm_loadu_si128((const __m128i *)&xmmword_141A624E8);
      v286 = v592;
      if ( v592 == v591.m128i_i64[0] )
        sub_14190FDC0(&v591);
      v287 = v591.m128i_i64[1];
      v288 = 3 * v286;
      *(_QWORD *)(v591.m128i_i64[1] + 8 * v288) = 45;
      *(_QWORD *)(v287 + 8 * v288 + 8) = v579;
      *(_QWORD *)(v287 + 8 * v288 + 16) = 45;
      v592 = v286 + 1;
      v162 = 1;
      if ( v560.m128i_i64[1] )
      {
LABEL_231:
        v289 = sub_140D2CC10(&v561, aCatalogIntegri, 17);
        v291 = v559;
        v292 = _mm_cvtsi32_si128(v289 >> 57);
        v293 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v292, v292), 0), 68);
        v294 = 0;
        v295 = _mm_load_si128((const __m128i *)&xmmword_141A557E0);
        v296 = _mm_cvtsi32_si128(0x79u);
        while ( 1 )
        {
          v297 = v559.m128i_i64[1] & v289;
          v298 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v297));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v298, v293));
          if ( _EDX )
            break;
LABEL_236:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v298, (__m128i)-1LL)) )
          {
            v311 = sub_140D2CC10(&v561, aCatalogPathVal, 21);
            v313 = _mm_cvtsi32_si128(v311 >> 57);
            v314 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v313, v313), 0), 68);
            v315 = 0;
            v316 = _mm_load_si128((const __m128i *)&xmmword_141A556B0);
            v317 = _mm_load_si128((const __m128i *)&xmmword_141A556C0);
            while ( 1 )
            {
              v318 = v291.m128i_i64[1] & v311;
              v319 = _mm_loadu_si128((const __m128i *)(v291.m128i_i64[0] + v318));
              _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v319, v314));
              if ( _EDX )
              {
                do
                {
                  __asm { tzcnt   r8d, edx }
                  v321 = -3LL * (v291.m128i_i64[1] & (v318 + _R8));
                  if ( *(_QWORD *)(v291.m128i_i64[0] + 8 * v321 - 8) == 21
                    && _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(
                             _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v291.m128i_i64[0] + 8 * v321 - 16) + 5LL)),
                             v316),
                           _mm_cmpeq_epi8(
                             _mm_loadu_si128((const __m128i *)*(_QWORD *)(v291.m128i_i64[0] + 8 * v321 - 16)),
                             v317))) == 0xFFFF )
                  {
                    goto LABEL_255;
                  }
                  _R8 = (unsigned int)(_EDX - 1);
                  LOWORD(_R8) = _EDX & (_EDX - 1);
                  _EDX = _R8;
                }
                while ( (_WORD)_R8 );
              }
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v319, (__m128i)-1LL)) )
                break;
              v311 = v315 + v318 + 16;
              v315 += 16;
            }
            if ( v162 )
              goto LABEL_285;
            goto LABEL_325;
          }
          v289 = v294 + v297 + 16;
          v294 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v300 = -3LL * (v559.m128i_i64[1] & (v297 + _R8));
          if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v300 - 8) == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_cvtsi32_si128(*(unsigned __int8 *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v300 - 16) + 16LL)),
                     v296),
                   _mm_cmpeq_epi8(
                     _mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v300 - 16)),
                     v295))) == 0xFFFF )
          {
            break;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_236;
        }
LABEL_255:
        v322 = sub_140D2CC10(&v561, aCatalogIntegri, 17);
        v324 = _mm_cvtsi32_si128(v322 >> 57);
        v325 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v324, v324), 0), 68);
        for ( k = 0; ; k += 16 )
        {
          v327 = v291.m128i_i64[1] & v322;
          v328 = _mm_loadu_si128((const __m128i *)(v291.m128i_i64[0] + v327));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v328, v325));
          if ( _EDX )
            break;
LABEL_260:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v328, (__m128i)-1LL)) )
            goto LABEL_268;
          v322 = k + v327 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v330 = -3LL * (v291.m128i_i64[1] & (v327 + _R8));
          if ( *(_QWORD *)(v291.m128i_i64[0] + 8 * v330 - 8) == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_cvtsi32_si128(*(unsigned __int8 *)(*(_QWORD *)(v291.m128i_i64[0] + 8 * v330 - 16) + 16LL)),
                     v296),
                   _mm_cmpeq_epi8(
                     _mm_loadu_si128((const __m128i *)*(_QWORD *)(v291.m128i_i64[0] + 8 * v330 - 16)),
                     v295))) == 0xFFFF )
          {
            break;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_260;
        }
        nullsub_1(k);
        v331 = (__m128i *)sub_140001650(17, 1);
        if ( !v331 )
          sub_141938D2B(1, 17);
        *v331 = _mm_loadu_si128((const __m128i *)aCatalogIntegri);
        v331[1].m128i_i8[0] = 121;
        v552.m128i_i64[0] = 17;
        v594 = (__int64)v331;
        v552.m128i_i64[1] = (__int64)v331;
        v553.m128i_i64[0] = 17;
        v574 = 1;
        sub_1416AC440(&v565, &v552);
        v332 = v572.m256i_i64[0];
        if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
          sub_14190FDC0(&v571);
        v333 = v571.m128i_i64[1];
        v334 = 3 * v332;
        *(_QWORD *)(v571.m128i_i64[1] + 8 * v334 + 16) = v566.m256i_i64[0];
        *(__m128i *)(v333 + 8 * v334) = _mm_loadu_si128(&v565);
        v572.m256i_i64[0] = v332 + 1;
        v335 = v564;
        if ( v564 == v562 )
          sub_14190FDC0(&v562);
        v336 = v563;
        v337 = 3 * v335;
        *(_QWORD *)(v563 + 8 * v337) = 17;
        *(_QWORD *)(v336 + 8 * v337 + 8) = v594;
        *(_QWORD *)(v336 + 8 * v337 + 16) = 17;
        v564 = v335 + 1;
        if ( v560.m128i_i64[1] )
        {
LABEL_268:
          v338 = sub_140D2CC10(&v561, aCatalogPathVal, 21);
          v337 = v559.m128i_i64[0];
          v340 = _mm_cvtsi32_si128(v338 >> 57);
          v341 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v340, v340), 0), 68);
          v342 = 0;
          v343 = _mm_load_si128((const __m128i *)&xmmword_141A556B0);
          v344 = _mm_load_si128((const __m128i *)&xmmword_141A556C0);
          while ( 1 )
          {
            v345 = v559.m128i_i64[1] & v338;
            v346 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v345));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v346, v341));
            if ( _R9D )
              break;
LABEL_273:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v346, (__m128i)-1LL)) )
              goto LABEL_281;
            v338 = v342 + v345 + 16;
            v342 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v348 = -3LL * (v559.m128i_i64[1] & (v345 + _R10));
            if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v348 - 8) == 21
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(
                       _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v348 - 16) + 5LL)),
                       v343),
                     _mm_cmpeq_epi8(
                       _mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v348 - 16)),
                       v344))) == 0xFFFF )
            {
              break;
            }
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_273;
          }
          nullsub_1(v559.m128i_i64[0]);
          v349 = sub_140001650(21, 1);
          if ( !v349 )
            sub_141938D2B(1, 21);
          *(__m128i *)v349 = _mm_loadu_si128((const __m128i *)aCatalogPathVal);
          *(_QWORD *)(v349 + 13) = 0x79746964696C6176LL;
          v552.m128i_i64[0] = 21;
          v594 = v349;
          v552.m128i_i64[1] = v349;
          v553.m128i_i64[0] = 21;
          v573 = 1;
          sub_1416AC440(&v565, &v552);
          v350 = v572.m256i_i64[0];
          if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
            sub_14190FDC0(&v571);
          v351 = v571.m128i_i64[1];
          v352 = 3 * v350;
          *(_QWORD *)(v571.m128i_i64[1] + 8 * v352 + 16) = v566.m256i_i64[0];
          *(__m128i *)(v351 + 8 * v352) = _mm_loadu_si128(&v565);
          v572.m256i_i64[0] = v350 + 1;
          v353 = v564;
          if ( v564 == v562 )
            sub_14190FDC0(&v562);
          v354 = v563;
          v337 = 3 * v353;
          *(_QWORD *)(v563 + 8 * v337) = 21;
          *(_QWORD *)(v354 + 8 * v337 + 8) = v594;
          *(_QWORD *)(v354 + 8 * v337 + 16) = 21;
          v564 = v353 + 1;
        }
LABEL_281:
        nullsub_1(v337);
        v355 = sub_140001650(40, 1);
        if ( !v355 )
          sub_141938D2B(1, 40);
        *(_OWORD *)(v355 + 16) = xmmword_141A62525;
        *(__m128i *)v355 = _mm_loadu_si128((const __m128i *)&xmmword_141A62515);
        v594 = v355;
        *(_QWORD *)(v355 + 32) = 0x676F6C6174614320LL;
        v356 = v592;
        if ( v592 == v591.m128i_i64[0] )
          sub_14190FDC0(&v591);
        v357 = v591.m128i_i64[1];
        v358 = 3 * v356;
        *(_QWORD *)(v591.m128i_i64[1] + 8 * v358) = 40;
        *(_QWORD *)(v357 + 8 * v358 + 8) = v594;
        *(_QWORD *)(v357 + 8 * v358 + 16) = 40;
        v592 = v356 + 1;
        goto LABEL_285;
      }
      goto LABEL_285;
    }
    v149 = v153 + v156 + 16;
    v153 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v159 = -3LL * (v559.m128i_i64[1] & (v156 + _R10));
    if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v159 - 8) == 18
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(
               _mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v159 - 16) + 16LL)),
               v155),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v159 - 16)), v154))) == 0xFFFF )
    {
      break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_134;
  }
  sub_140F296A0(&v552, v558, v153);
  v161 = v552.m128i_i32[0];
  v162 = v552.m128i_i64[0] == -1;
  if ( v552.m128i_i64[0] == -1 )
  {
    v579 = v552.m128i_i64[1];
    v570 = v553.m128i_i64[0];
    nullsub_1(v160);
    v173 = (__m128i *)sub_140001650(18, 1);
    if ( !v173 )
    {
      v578 = 1;
      sub_141938D2B(1, 18);
    }
    *v173 = _mm_loadu_si128((const __m128i *)aConfigTomlSynt);
    v173[1].m128i_i16[0] = 30817;
    v580.m128i_i64[0] = 18;
    v594 = (__int64)v173;
    v580.m128i_i64[1] = (__int64)v173;
    v581 = 18;
    v590 = 1;
    v589 = 1;
    sub_1416AC440(&v565, &v580);
    v174 = v572.m256i_i64[0];
    if ( v572.m256i_i64[0] == v571.m128i_i64[0] )
      sub_14190FDC0(&v571);
    v175 = v571.m128i_i64[1];
    v176 = 3 * v174;
    *(_QWORD *)(v571.m128i_i64[1] + 8 * v176 + 16) = v566.m256i_i64[0];
    *(__m128i *)(v175 + 8 * v176) = _mm_loadu_si128(&v565);
    v572.m256i_i64[0] = v174 + 1;
    v177 = v564;
    if ( v564 == v562 )
      sub_14190FDC0(&v562);
    v178 = v563;
    v179 = 3 * v177;
    *(_QWORD *)(v563 + 8 * v179) = 18;
    *(_QWORD *)(v178 + 8 * v179 + 8) = v594;
    *(_QWORD *)(v178 + 8 * v179 + 16) = 18;
    v564 = v177 + 1;
    v180 = v592;
    if ( v592 == v591.m128i_i64[0] )
      sub_14190FDC0(&v591);
    v181 = v591.m128i_i64[1];
    v182 = 3 * v180;
    *(_QWORD *)(v591.m128i_i64[1] + 8 * v182 + 16) = v553.m128i_i64[1];
    *(__m128i *)(v181 + 8 * v182) = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
    v592 = v180 + 1;
    if ( v560.m128i_i64[1] )
      goto LABEL_153;
  }
  else
  {
    v569 = v557;
    v568 = v556;
    v163 = _mm_loadu_si128(&v552);
    v164 = _mm_loadu_si128(&v553);
    v165 = _mm_loadu_si128(&v554);
    v567 = _mm_loadu_si128(&v555);
    *(__m128i *)&v566.m256i_u64[2] = v165;
    *(__m128i *)v566.m256i_i8 = v164;
    v565 = v163;
    nullsub_1(v160);
    v166 = (__m128i *)sub_140001650(18, 1);
    if ( !v166 )
      sub_141938D2B(1, 18);
    *v166 = _mm_loadu_si128((const __m128i *)aConfigTomlSynt);
    v594 = (__int64)v166;
    v166[1].m128i_i16[0] = 30817;
    v167 = v572.m256i_i64[3];
    if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
      sub_14190FDC0(&v572.m256i_u64[1]);
    v168 = v572.m256i_i64[2];
    v169 = 3 * v167;
    *(_QWORD *)(v572.m256i_i64[2] + 8 * v169) = 18;
    *(_QWORD *)(v168 + 8 * v169 + 8) = v594;
    *(_QWORD *)(v168 + 8 * v169 + 16) = 18;
    v572.m256i_i64[3] = v167 + 1;
    v580.m128i_i64[0] = (__int64)&v565;
    v580.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v536, &unk_141A6248D, &v580);
    v170 = v592;
    if ( v592 == v591.m128i_i64[0] )
      sub_14190FDC0(&v591);
    v171 = v591.m128i_i64[1];
    v172 = 3 * v170;
    *(_QWORD *)(v591.m128i_i64[1] + 8 * v172 + 16) = v537;
    *(__m128i *)(v171 + 8 * v172) = _mm_loadu_si128(&v536);
    v592 = v170 + 1;
    sub_140E97700(&v565);
    if ( v560.m128i_i64[1] )
      goto LABEL_153;
  }
  if ( v161 == -1 )
  {
LABEL_285:
    (*(void (__fastcall **)(__m128i *, __int64))(a5 + 40))(&v552, v549);
    if ( v552.m128i_i32[0] == -1 )
    {
      sub_140F10F70(&v565, v558, v551, 0);
      v375 = v563;
      v376 = v563 + 24 * v564;
      v377 = v565.m128i_i64[1];
      v594 = v566.m256i_i64[0];
      v378 = 104 * v566.m256i_i64[0];
      v579 = v565.m128i_i64[1];
      v570 = v376;
      if ( v563 != v376 )
      {
        do
        {
          while ( 1 )
          {
            v548 = v375;
            if ( v594 )
            {
              v379 = *(_QWORD *)(v375 + 8);
              v380 = *(_QWORD *)(v375 + 16);
              v381 = 0;
              while ( *(_QWORD *)(v377 + v381 + 16) != v380
                   || (unsigned int)sub_1418F4B70(*(_QWORD *)(v377 + v381 + 8), v379) )
              {
                v381 += 104;
                if ( v378 == v381 )
                  goto LABEL_302;
              }
              if ( *(_QWORD *)(v377 + v381 + 40) != 2 || **(_WORD **)(v377 + v381 + 32) != 27503 )
                break;
            }
LABEL_302:
            v375 += 24;
            if ( v375 == v376 )
              goto LABEL_322;
          }
          if ( v572.m256i_i64[3] )
          {
            v382 = v572.m256i_i64[2];
            v383 = 24 * v572.m256i_i64[3];
            v384 = 0;
            while ( *(_QWORD *)(v382 + v384 + 16) != v380
                 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v382 + v384 + 8), v379) )
            {
              v384 += 24;
              if ( v383 == v384 )
                goto LABEL_316;
            }
          }
          else
          {
LABEL_316:
            sub_1416AC440(&v580, v375);
            v385 = v572.m256i_i64[3];
            if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
              sub_14190FDC0(&v572.m256i_u64[1]);
            v386 = v572.m256i_i64[2];
            v387 = 3 * v385;
            *(_QWORD *)(v572.m256i_i64[2] + 8 * v387 + 16) = v581;
            *(__m128i *)(v386 + 8 * v387) = _mm_loadu_si128(&v580);
            v572.m256i_i64[3] = v385 + 1;
          }
          sub_140379AD0(&v571, &v548);
          v580.m128i_i64[0] = (__int64)&v548;
          v580.m128i_i64[1] = (__int64)sub_140369D80;
          sub_1416ABFD0(&v526, &unk_141A62556, &v580);
          v388 = v592;
          v376 = v570;
          if ( v592 == v591.m128i_i64[0] )
            sub_14190FDC0(&v591);
          v389 = v591.m128i_i64[1];
          v390 = 3 * v388;
          *(_QWORD *)(v591.m128i_i64[1] + 8 * v390 + 16) = v527;
          *(__m128i *)(v389 + 8 * v390) = _mm_loadu_si128(&v526);
          v592 = v388 + 1;
          v377 = v579;
          v375 += 24;
        }
        while ( v375 != v376 );
      }
LABEL_322:
      sub_1403FBD20(&v565);
      if ( v565.m128i_i64[0] )
        sub_140001660(v579, 104 * v565.m128i_i64[0], 8);
    }
    else
    {
      v569 = v557;
      v568 = v556;
      v359 = _mm_loadu_si128(&v552);
      v360 = _mm_loadu_si128(&v553);
      v361 = _mm_loadu_si128(&v554);
      v567 = _mm_loadu_si128(&v555);
      *(__m128i *)&v566.m256i_u64[2] = v361;
      *(__m128i *)v566.m256i_i8 = v360;
      v565 = v359;
      v580.m128i_i64[0] = (__int64)&v565;
      v580.m128i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v528, &unk_141A6253D, &v580);
      v362 = v592;
      if ( v592 == v591.m128i_i64[0] )
        sub_14190FDC0(&v591);
      v363 = v591.m128i_i64[1];
      v364 = 3 * v362;
      *(_QWORD *)(v591.m128i_i64[1] + 8 * v364 + 16) = v529;
      *(__m128i *)(v363 + 8 * v364) = _mm_loadu_si128(&v528);
      v592 = v362 + 1;
      v365 = v563;
      v594 = v563 + 24 * v564;
      if ( v563 != v594 )
      {
        do
        {
          while ( 1 )
          {
            v368 = v365 + 24;
            if ( v572.m256i_i64[3] )
              break;
LABEL_298:
            sub_1416AC440(&v580, v365);
            v374 = v572.m256i_i64[3];
            if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
              sub_14190FDC0(&v572.m256i_u64[1]);
            v366 = v572.m256i_i64[2];
            v367 = 3 * v374;
            *(_QWORD *)(v572.m256i_i64[2] + 8 * v367 + 16) = v581;
            *(__m128i *)(v366 + 8 * v367) = _mm_loadu_si128(&v580);
            v572.m256i_i64[3] = v374 + 1;
            v365 += 24;
            if ( v368 == v594 )
              goto LABEL_289;
          }
          v369 = v572.m256i_i64[2];
          v370 = 24 * v572.m256i_i64[3];
          v371 = *(_QWORD *)(v365 + 8);
          v372 = *(_QWORD *)(v365 + 16);
          v373 = 0;
          while ( *(_QWORD *)(v369 + v373 + 16) != v372
               || (unsigned int)sub_1418F4B70(*(_QWORD *)(v369 + v373 + 8), v371) )
          {
            v373 += 24;
            if ( v370 == v373 )
              goto LABEL_298;
          }
          v365 += 24;
        }
        while ( v368 != v594 );
      }
LABEL_289:
      sub_140379950(&v571, &v562);
      sub_140E97700(&v565);
    }
    if ( !v560.m128i_i64[1] )
      goto LABEL_381;
LABEL_325:
    v391 = sub_140D2CC10(&v561, aDbOrphanProvid, 19);
    v393 = v559;
    v394 = _mm_cvtsi32_si128(v391 >> 57);
    v395 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v394, v394), 0), 68);
    v396 = 0;
    v397 = _mm_load_si128((const __m128i *)&xmmword_141A41F40);
    v398 = _mm_load_si128((const __m128i *)&xmmword_141A41F50);
    while ( 1 )
    {
      v399 = v559.m128i_i64[1] & v391;
      v400 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v399));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v400, v395));
      if ( _EDX )
        break;
LABEL_330:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v400, (__m128i)-1LL)) )
      {
        v403 = sub_140D2CC10(&v561, aRolloutOrphanP, 24);
        v405 = _mm_cvtsi32_si128(v403 >> 57);
        v406 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v405, v405), 0), 68);
        v407 = 0;
        v408 = _mm_loadl_epi64((const __m128i *)&xmmword_141A41F20);
        v409 = _mm_load_si128((const __m128i *)&xmmword_141A41F30);
        while ( 1 )
        {
          v410 = v393.m128i_i64[1] & v403;
          v411 = _mm_loadu_si128((const __m128i *)(v393.m128i_i64[0] + v410));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v411, v406));
          if ( _EDX )
            break;
LABEL_337:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v411, (__m128i)-1LL)) )
            goto LABEL_381;
          v403 = v407 + v410 + 16;
          v407 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r8d, edx }
          v413 = -3LL * (v393.m128i_i64[1] & (v410 + _R8));
          if ( *(_QWORD *)(v393.m128i_i64[0] + 8 * v413 - 8) == 24
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v393.m128i_i64[0] + 8 * v413 - 16) + 16LL)),
                     v408),
                   _mm_cmpeq_epi8(
                     _mm_loadu_si128((const __m128i *)*(_QWORD *)(v393.m128i_i64[0] + 8 * v413 - 16)),
                     v409))) == 0xFFFF )
          {
            goto LABEL_339;
          }
          _R8 = (unsigned int)(_EDX - 1);
          LOWORD(_R8) = _EDX & (_EDX - 1);
          _EDX = _R8;
          if ( !(_WORD)_R8 )
            goto LABEL_337;
        }
      }
      v391 = v396 + v399 + 16;
      v396 += 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v402 = -3LL * (v559.m128i_i64[1] & (v399 + _R8));
      if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v402 - 8) == 19
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v402 - 16)), v398),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v402 - 16) + 3LL)),
                 v397))) == 0xFFFF )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_330;
    }
LABEL_339:
    sub_140F2BD30(&v552, v558, v551, a7);
    if ( v552.m128i_i32[0] != -1 )
    {
      v569 = v557;
      v568 = v556;
      v414 = _mm_loadu_si128(&v552);
      v415 = _mm_loadu_si128(&v553);
      v416 = _mm_loadu_si128(&v554);
      v567 = _mm_loadu_si128(&v555);
      *(__m128i *)&v566.m256i_u64[2] = v416;
      *(__m128i *)v566.m256i_i8 = v415;
      v565 = v414;
      if ( v560.m128i_i64[1] )
      {
        v417 = sub_140D2CC10(&v561, aDbOrphanProvid, 19);
        v419 = _mm_cvtsi32_si128(v417 >> 57);
        v420 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v419, v419), 0), 68);
        for ( m = 0; ; m += 16 )
        {
          v422 = v559.m128i_i64[1] & v417;
          v423 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v422));
          _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v423, v420));
          if ( _R9D )
            break;
LABEL_346:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v423, (__m128i)-1LL)) )
            goto LABEL_367;
          v417 = m + v422 + 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   r10d, r9d }
          v425 = -3LL * (v559.m128i_i64[1] & (v422 + _R10));
          if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v425 - 8) == 19
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(
                     _mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v425 - 16)),
                     v398),
                   _mm_cmpeq_epi8(
                     _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v425 - 16) + 3LL)),
                     v397))) == 0xFFFF )
          {
            break;
          }
          _R10 = (unsigned int)(_R9D - 1);
          LOWORD(_R10) = _R9D & (_R9D - 1);
          _R9D = _R10;
          if ( !(_WORD)_R10 )
            goto LABEL_346;
        }
        nullsub_1(v559.m128i_i64[0]);
        v439 = sub_140001650(19, 1);
        if ( !v439 )
          sub_141938D2B(1, 19);
        *(__m128i *)v439 = _mm_loadu_si128((const __m128i *)aDbOrphanProvid);
        v594 = v439;
        *(_DWORD *)(v439 + 15) = 1936876900;
        v440 = v572.m256i_i64[3];
        if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
          sub_14190FDC0(&v572.m256i_u64[1]);
        v441 = v572.m256i_i64[2];
        v442 = 3 * v440;
        *(_QWORD *)(v572.m256i_i64[2] + 8 * v442) = 19;
        *(_QWORD *)(v441 + 8 * v442 + 8) = v594;
        *(_QWORD *)(v441 + 8 * v442 + 16) = 19;
        v572.m256i_i64[3] = v440 + 1;
        if ( v560.m128i_i64[1] )
        {
LABEL_367:
          v443 = sub_140D2CC10(&v561, aRolloutOrphanP, 24);
          v445 = _mm_cvtsi32_si128(v443 >> 57);
          v446 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v445, v445), 0), 68);
          v447 = 0;
          v448 = _mm_loadl_epi64((const __m128i *)&xmmword_141A41F20);
          v449 = _mm_load_si128((const __m128i *)&xmmword_141A41F30);
          while ( 1 )
          {
            v450 = v559.m128i_i64[1] & v443;
            v451 = _mm_loadu_si128((const __m128i *)(v559.m128i_i64[0] + v450));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v451, v446));
            if ( _R9D )
              break;
LABEL_372:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v451, (__m128i)-1LL)) )
              goto LABEL_378;
            v443 = v447 + v450 + 16;
            v447 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v453 = -3LL * (v559.m128i_i64[1] & (v450 + _R10));
            if ( *(_QWORD *)(v559.m128i_i64[0] + 8 * v453 - 8) == 24
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(
                       _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v559.m128i_i64[0] + 8 * v453 - 16) + 16LL)),
                       v448),
                     _mm_cmpeq_epi8(
                       _mm_loadu_si128((const __m128i *)*(_QWORD *)(v559.m128i_i64[0] + 8 * v453 - 16)),
                       v449))) == 0xFFFF )
            {
              break;
            }
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_372;
          }
          nullsub_1(v559.m128i_i64[0]);
          v454 = (__m128i *)sub_140001650(24, 1);
          if ( !v454 )
            sub_141938D2B(1, 24);
          *v454 = _mm_loadu_si128((const __m128i *)aRolloutOrphanP);
          v594 = (__int64)v454;
          v454[1].m128i_i64[0] = 0x7372656469766F72LL;
          v455 = v572.m256i_i64[3];
          if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
            sub_14190FDC0(&v572.m256i_u64[1]);
          v456 = v572.m256i_i64[2];
          v457 = 3 * v455;
          *(_QWORD *)(v572.m256i_i64[2] + 8 * v457) = 24;
          *(_QWORD *)(v456 + 8 * v457 + 8) = v594;
          *(_QWORD *)(v456 + 8 * v457 + 16) = 24;
          v572.m256i_i64[3] = v455 + 1;
        }
      }
LABEL_378:
      v580.m128i_i64[0] = (__int64)&v565;
      v580.m128i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v524, &unk_141A62574, &v580);
      v458 = v592;
      if ( v592 == v591.m128i_i64[0] )
        sub_14190FDC0(&v591);
      v459 = v591.m128i_i64[1];
      v460 = 3 * v458;
      *(_QWORD *)(v591.m128i_i64[1] + 8 * v460 + 16) = v525;
      *(__m128i *)(v459 + 8 * v460) = _mm_loadu_si128(&v524);
      v592 = v458 + 1;
      sub_140E97700(&v565);
      goto LABEL_381;
    }
    v426 = _mm_loadu_si128((const __m128i *)&v553.m128i_u64[1]);
    v427 = _mm_loadu_si128((const __m128i *)&v554.m128i_u64[1]);
    v428 = _mm_loadu_si128((const __m128i *)&v555.m128i_u64[1]);
    v565 = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
    *(__m128i *)v566.m256i_i8 = v426;
    *(_QWORD *)&v568 = *((_QWORD *)&v556 + 1);
    v567 = v428;
    *(__m128i *)&v566.m256i_u64[2] = v427;
    v429 = v565;
    v580.m128i_i64[0] = v565.m128i_i64[1];
    v580.m128i_i64[1] = v565.m128i_i64[1];
    v581 = v565.m128i_i64[0];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v565.m128i_i64[1] + 24 * v426.m128i_i64[0]);
    v430 = v572.m256i_i64[0];
    if ( v426.m128i_i64[0] > (unsigned __int64)(v571.m128i_i64[0] - v572.m256i_i64[0]) )
    {
      sub_14190D590((unsigned int)&v571, v572.m256i_i32[0], v426.m128i_i32[0], 8, 24);
      v430 = v572.m256i_i64[0];
    }
    else if ( !v426.m128i_i64[0] )
    {
      goto LABEL_351;
    }
    sub_1418F44E0(
      (__m128i *)(v571.m128i_i64[1] + 24 * v430),
      (const __m128i *)v429.m128i_i64[1],
      24 * v426.m128i_i64[0]);
LABEL_351:
    v572.m256i_i64[0] = v426.m128i_i64[0] + v430;
    if ( v429.m128i_i64[0] )
      sub_140001660(v429.m128i_i64[1], 24 * v429.m128i_i64[0], 8);
    v431 = v566.m256i_i64[1];
    v432 = *(_OWORD *)&v566.m256i_u64[2];
    v433 = 24 * v566.m256i_i64[3];
    v580.m128i_i64[0] = v566.m256i_i64[2];
    v580.m128i_i64[1] = v566.m256i_i64[2];
    v581 = v566.m256i_i64[1];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v566.m256i_i64[2] + 24 * v566.m256i_i64[3]);
    v434 = v572.m256i_i64[3];
    if ( v566.m256i_i64[3] > (unsigned __int64)(v572.m256i_i64[1] - v572.m256i_i64[3]) )
    {
      sub_14190D590((unsigned int)&v572.m256i_u32[2], v572.m256i_i32[6], v566.m256i_i32[6], 8, 24);
      v434 = v572.m256i_i64[3];
    }
    else if ( !v566.m256i_i64[3] )
    {
      goto LABEL_356;
    }
    sub_1418F44E0((__m128i *)(v572.m256i_i64[2] + 24 * v434), (const __m128i *)v432, v433);
LABEL_356:
    v572.m256i_i64[3] = *((_QWORD *)&v432 + 1) + v434;
    if ( v431 )
      sub_140001660(v432, 24 * v431, 8);
    v435 = v567;
    v436 = v568;
    v437 = 24 * v568;
    v580.m128i_i64[0] = v567.m128i_i64[1];
    v580.m128i_i64[1] = v567.m128i_i64[1];
    v581 = v567.m128i_i64[0];
    v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v567.m128i_i64[1] + 24 * v568);
    v438 = v592;
    if ( (unsigned __int64)v568 > v591.m128i_i64[0] - v592 )
    {
      sub_14190D590((unsigned int)&v591, v592, v568, 8, 24);
      v438 = v592;
    }
    else if ( !(_QWORD)v568 )
    {
      goto LABEL_361;
    }
    sub_1418F44E0((__m128i *)(v591.m128i_i64[1] + 24 * v438), (const __m128i *)v435.m128i_i64[1], v437);
LABEL_361:
    v592 = v436 + v438;
    if ( v435.m128i_i64[0] )
      sub_140001660(v435.m128i_i64[1], 24 * v435.m128i_i64[0], 8);
  }
LABEL_381:
  v461 = 0;
LABEL_382:
  v462 = v560.m128i_i64[1];
  v463 = v559;
LABEL_383:
  while ( v461 != 176 )
  {
    v464 = v461;
    v465 = (char *)&off_141A62590 + v461;
    v461 += 16;
    v547 = v465;
    if ( v462 )
    {
      v594 = v461;
      v466 = *(__int64 *)((char *)&off_141A62590 + v464);
      v467 = *(__int64 *)((char *)&off_141A62590 + v464 + 8);
      v468 = sub_140D2CC10(&v561, v466, v467);
      _RAX = v468 >> 57;
      v470 = _mm_cvtsi32_si128(v468 >> 57);
      v471 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v470, v470), 0), 68);
      for ( n = 0; ; n += 16 )
      {
        v473 = v463.m128i_i64[1] & v468;
        v474 = _mm_loadu_si128((const __m128i *)(v463.m128i_i64[0] + v473));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v474, v471));
        if ( _R13D )
          break;
LABEL_391:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v474, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
        {
          v461 = v594;
          goto LABEL_383;
        }
        v468 = n + v473 + 16;
      }
      v579 = n;
      while ( 1 )
      {
        __asm { tzcnt   eax, r13d }
        v476 = -3LL * (v463.m128i_i64[1] & (v473 + _RAX));
        if ( v467 == *(_QWORD *)(v463.m128i_i64[0] + 8 * v476 - 8)
          && !(unsigned int)sub_1418F4B70(v466, *(_QWORD *)(v463.m128i_i64[0] + 8 * v476 - 16)) )
        {
          break;
        }
        _RAX = (unsigned int)(_R13D - 1);
        LOWORD(_RAX) = _R13D & (_R13D - 1);
        _R13D = _RAX;
        n = v579;
        if ( !(_WORD)_RAX )
          goto LABEL_391;
      }
      sub_140F58A10((unsigned int)&v552, v558, v551, v466, v467, v549, a5, a6, a7);
      v461 = v594;
      if ( v552.m128i_i32[0] == -1 )
      {
        v485 = _mm_loadu_si128((const __m128i *)&v553.m128i_u64[1]);
        v486 = _mm_loadu_si128((const __m128i *)&v554.m128i_u64[1]);
        v487 = _mm_loadu_si128((const __m128i *)&v555.m128i_u64[1]);
        v565 = _mm_loadu_si128((const __m128i *)&v552.m128i_u64[1]);
        *(__m128i *)v566.m256i_i8 = v485;
        *(_QWORD *)&v568 = *((_QWORD *)&v556 + 1);
        v567 = v487;
        *(__m128i *)&v566.m256i_u64[2] = v486;
        v488 = v565;
        v580.m128i_i64[0] = v565.m128i_i64[1];
        v580.m128i_i64[1] = v565.m128i_i64[1];
        v581 = v565.m128i_i64[0];
        v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v565.m128i_i64[1] + 24 * v485.m128i_i64[0]);
        v489 = v572.m256i_i64[0];
        if ( v485.m128i_i64[0] > (unsigned __int64)(v571.m128i_i64[0] - v572.m256i_i64[0]) )
        {
          sub_14190D590((unsigned int)&v571, v572.m256i_i32[0], v485.m128i_i32[0], 8, 24);
          v489 = v572.m256i_i64[0];
LABEL_402:
          sub_1418F44E0(
            (__m128i *)(v571.m128i_i64[1] + 24 * v489),
            (const __m128i *)v488.m128i_i64[1],
            24 * v485.m128i_i64[0]);
        }
        else if ( v485.m128i_i64[0] )
        {
          goto LABEL_402;
        }
        v572.m256i_i64[0] = v485.m128i_i64[0] + v489;
        if ( v488.m128i_i64[0] )
          sub_140001660(v488.m128i_i64[1], 24 * v488.m128i_i64[0], 8);
        v490 = v566.m256i_i64[1];
        v491 = *(_OWORD *)&v566.m256i_u64[2];
        v492 = 24 * v566.m256i_i64[3];
        v580.m128i_i64[0] = v566.m256i_i64[2];
        v580.m128i_i64[1] = v566.m256i_i64[2];
        v581 = v566.m256i_i64[1];
        v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v566.m256i_i64[2] + 24 * v566.m256i_i64[3]);
        v493 = v572.m256i_i64[3];
        if ( v566.m256i_i64[3] > (unsigned __int64)(v572.m256i_i64[1] - v572.m256i_i64[3]) )
        {
          sub_14190D590((unsigned int)&v572.m256i_u32[2], v572.m256i_i32[6], v566.m256i_i32[6], 8, 24);
          v493 = v572.m256i_i64[3];
LABEL_407:
          sub_1418F44E0((__m128i *)(v572.m256i_i64[2] + 24 * v493), (const __m128i *)v491, v492);
        }
        else if ( v566.m256i_i64[3] )
        {
          goto LABEL_407;
        }
        v572.m256i_i64[3] = *((_QWORD *)&v491 + 1) + v493;
        if ( v490 )
          sub_140001660(v491, 24 * v490, 8);
        v494 = v567;
        v495 = v568;
        v496 = 24 * v568;
        v580.m128i_i64[0] = v567.m128i_i64[1];
        v580.m128i_i64[1] = v567.m128i_i64[1];
        v581 = v567.m128i_i64[0];
        v582 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v567.m128i_i64[1] + 24 * v568);
        v497 = v592;
        if ( (unsigned __int64)v568 > v591.m128i_i64[0] - v592 )
        {
          sub_14190D590((unsigned int)&v591, v592, v568, 8, 24);
          v497 = v592;
LABEL_412:
          sub_1418F44E0((__m128i *)(v591.m128i_i64[1] + 24 * v497), (const __m128i *)v494.m128i_i64[1], v496);
        }
        else if ( (_QWORD)v568 )
        {
          goto LABEL_412;
        }
        v592 = v495 + v497;
        if ( v494.m128i_i64[0] )
          sub_140001660(v494.m128i_i64[1], 24 * v494.m128i_i64[0], 8);
        v461 = v594;
        goto LABEL_382;
      }
      v569 = v557;
      v568 = v556;
      v478 = _mm_loadu_si128(&v552);
      v479 = _mm_loadu_si128(&v553);
      v480 = _mm_loadu_si128(&v554);
      v567 = _mm_loadu_si128(&v555);
      *(__m128i *)&v566.m256i_u64[2] = v480;
      *(__m128i *)v566.m256i_i8 = v479;
      v565 = v478;
      v481 = *((_QWORD *)v547 + 1);
      if ( v481 < 0 )
      {
        v504 = 0;
        goto LABEL_425;
      }
      v579 = *((_QWORD *)v547 + 1);
      if ( !v481 )
      {
        v570 = 1;
        v484 = v572.m256i_i64[3];
        if ( v572.m256i_i64[3] != v572.m256i_i64[1] )
          goto LABEL_418;
LABEL_417:
        sub_14190FDC0(&v572.m256i_u64[1]);
        goto LABEL_418;
      }
      v482 = *(const __m128i **)v547;
      nullsub_1(v477);
      v483 = (__m128i *)sub_140001650(v481, 1);
      if ( !v483 )
      {
        v570 = v481;
        v504 = 1;
LABEL_425:
        sub_141938D2B(v504, v570);
      }
      v570 = (__int64)v483;
      sub_1418F44E0(v483, v482, v481);
      v484 = v572.m256i_i64[3];
      if ( v572.m256i_i64[3] == v572.m256i_i64[1] )
        goto LABEL_417;
LABEL_418:
      v498 = v572.m256i_i64[2];
      v499 = 3 * v484;
      v500 = v579;
      *(_QWORD *)(v572.m256i_i64[2] + 8 * v499) = v579;
      *(_QWORD *)(v498 + 8 * v499 + 8) = v570;
      *(_QWORD *)(v498 + 8 * v499 + 16) = v500;
      v572.m256i_i64[3] = v484 + 1;
      v580.m128i_i64[0] = (__int64)&v547;
      v580.m128i_i64[1] = (__int64)sub_1402862D0;
      v581 = (__int64)&v565;
      v582 = sub_14104A7D0;
      sub_1416ABFD0(&v522, &unk_141A5707C, &v580);
      v501 = v592;
      if ( v592 == v591.m128i_i64[0] )
        sub_14190FDC0(&v591);
      v502 = v591.m128i_i64[1];
      v503 = 3 * v501;
      *(_QWORD *)(v591.m128i_i64[1] + 8 * v503 + 16) = v523;
      *(__m128i *)(v502 + 8 * v503) = _mm_loadu_si128(&v522);
      v592 = v501 + 1;
      sub_140E97700(&v565);
      goto LABEL_382;
    }
  }
  v566 = v572;
  v505 = v571;
  v565 = v571;
  *(_QWORD *)&v568 = v592;
  v506 = _mm_loadu_si128(&v591);
  v567 = v506;
  a1 = v550;
  v550[9] = v592;
  *(__m128i *)(a1 + 7) = v506;
  *(__m128i *)(a1 + 1) = v505;
  *(_OWORD *)(a1 + 5) = *(_OWORD *)&v566.m256i_u64[2];
  *(__m128i *)(a1 + 3) = _mm_load_si128((const __m128i *)&v566);
  *a1 = -1;
  v507 = v564;
  if ( v564 )
  {
    v508 = (_QWORD *)(v563 + 8);
    do
    {
      v509 = *(v508 - 1);
      if ( v509 )
        sub_140001660(*v508, v509, 1);
      v508 += 3;
      --v507;
    }
    while ( v507 );
  }
  HIDWORD(_RAX) = HIDWORD(v562);
  if ( v562 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v563, 24 * v562, 8) >> 32;
  v511 = v559.m128i_i64[1];
  if ( v559.m128i_i64[1] )
  {
    v512 = v560.m128i_i64[1];
    if ( v560.m128i_i64[1] )
    {
      v513 = v559.m128i_i64[0];
      v514 = (const __m128i *)(v559.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v559.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v516 = _mm_load_si128(v514);
            v513 -= 384;
            ++v514;
            _R15D = _mm_movemask_epi8(v516) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v517 = -3 * _RAX;
        v518 = *(_QWORD *)(v513 + 8 * v517 - 24);
        if ( v518 )
          sub_140001660(*(_QWORD *)(v513 + 8 * v517 - 16), v518, 1);
        --v512;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v512 );
    }
    v519 = (24 * v511 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v520 = v519 + v511;
    v64 = v520 == -17;
    v521 = v520 + 17;
    a1 = v550;
    if ( !v64 )
      sub_140001660(v559.m128i_i64[0] - v519, v521, 16);
  }
  sub_1403FBD20(&v544);
LABEL_48:
  if ( v544 )
    sub_140001660(v545, 104 * v544, 8);
  return a1;
}
