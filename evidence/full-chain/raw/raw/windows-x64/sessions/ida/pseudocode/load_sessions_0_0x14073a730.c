// module: codexmate_lib/core/sessions
// addr: 0x14073a730
// name: load_sessions_0
// win 1.2.1 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::sessions::load_sessions | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall load_sessions_0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // xmm9_8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i si128; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r12
  __m128i v39; // xmm1
  __int64 *v40; // r13
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rdi
  const __m128i *v49; // rbx
  __int64 v50; // rdi
  char v51; // al
  __int64 v52; // rcx
  __m128i v53; // xmm0
  __int64 v54; // r13
  __int64 v55; // rax
  char *v56; // r15
  __int64 v57; // r13
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __int64 v60; // rax
  char v61; // r13
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r15
  __int64 v67; // rax
  double v68; // xmm9_8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int32 v71; // r8d
  int v72; // r11d
  unsigned __int32 v73; // ecx
  __int64 v74; // rdx
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __m128i v80; // xmm0
  __m128i v81; // xmm1
  unsigned __int64 v82; // rax
  __int128 v84; // kr00_16
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  __int64 i; // rcx
  __m128i v88; // xmm2
  __int64 v90; // r8
  _QWORD *v91; // rax
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __m128i v95; // xmm1
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // r14
  const __m128i *v99; // r15
  __m128i v101; // xmm0
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r14
  __int64 v108; // r15
  __int64 v109; // rax
  __int64 v110; // rbx
  _QWORD *v111; // r14
  __int64 v112; // rax
  __int64 v113; // rbx
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  unsigned __int64 v116; // rax
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __int64 j; // rcx
  unsigned __int64 v121; // rax
  __m128i v122; // xmm2
  __int64 v124; // r10
  char v125; // r15
  const __m128i *v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // r14
  const __m128i *v131; // r15
  __m128i v133; // xmm0
  __int64 v134; // rsi
  __int64 v135; // rsi
  __m128i v136; // xmm13
  __int64 v137; // r12
  unsigned __int64 v138; // rdi
  __int64 v139; // rax
  __m128d v140; // xmm1
  double v141; // xmm0_8
  __int64 v142; // r8
  __int64 v143; // r9
  char v146; // r9
  unsigned __int64 v147; // rdi
  __int64 v148; // r8
  __int64 v149; // r11
  __int64 v151; // rax
  __int64 v152; // rsi
  __int64 v154; // rdx
  __int64 v156; // r15
  __int64 v157; // rdi
  const __m128i *v158; // r14
  __int128 v160; // xmm8
  __m128i v161; // xmm9
  __m128i v162; // xmm10
  __m128i v163; // xmm11
  __m128i v164; // xmm12
  __m128i v165; // xmm13
  __m128i v166; // xmm14
  __m128i v167; // xmm15
  __m128i v168; // xmm0
  __int64 v169; // r12
  __int64 v170; // rsi
  __int64 v171; // rbx
  char v172; // al
  __int64 v173; // rdx
  __int64 v174; // rcx
  void *v175; // rsi
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 v178; // rdx
  double v179; // xmm0_8
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rbx
  __int64 v186; // rsi
  __int64 v187; // rax
  __int64 v188; // rsi
  void *v189; // rbx
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // r12
  __int64 v193; // rbx
  bool v194; // zf
  __int64 v195; // rax
  __int32 v196; // r8d
  int v197; // edx
  unsigned __int32 v198; // ecx
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rbx
  __int64 v203; // rsi
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rbx
  __int64 v211; // rsi
  __int64 v212; // rax
  __int64 v213; // r12
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // r9
  __int64 v219; // rcx
  __int64 v220; // r8
  __m128i v221; // kr40_16
  __int64 v222; // rax
  __int64 v223; // rcx
  __int64 v224; // r12
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rbx
  __int64 v228; // rsi
  __int64 v229; // rax
  __int64 v230; // rcx
  __int64 v231; // rbx
  unsigned __int64 v232; // rbx
  _QWORD *v233; // r12
  __int64 v234; // rdx
  __int64 v235; // rax
  __int64 v236; // rcx
  unsigned __int64 v237; // rdx
  unsigned __int64 v238; // rbx
  unsigned __int64 v239; // rax
  __int64 v240; // r9
  __int64 v241; // rcx
  __m128i v242; // xmm7
  __m128i v243; // xmm8
  __m128i v244; // xmm5
  __m128i v245; // xmm0
  __m128i v246; // xmm1
  __m128i v247; // xmm2
  __m128i v248; // xmm3
  unsigned __int64 v249; // rcx
  __m128i v250; // xmm3
  __m128i v251; // xmm4
  __m128i v252; // xmm5
  __m128i v253; // xmm0
  __m128i v254; // xmm1
  char v255; // al
  __int64 v256; // rdx
  __int64 v257; // rcx
  char v258; // r12
  unsigned __int64 v259; // rbx
  unsigned __int64 v260; // rax
  __int128 v261; // xmm8
  __int128 v262; // xmm7
  __m128i v263; // xmm6
  __m128i v264; // xmm15
  __m128i v265; // xmm14
  __m128i v266; // xmm13
  __m128i v267; // xmm12
  __m128i v268; // xmm11
  __m128i v269; // xmm10
  __int128 v270; // xmm9
  const __m128i *v272; // r13
  __m128i *v274; // r12
  __int64 v275; // rdx
  __m128i v276; // xmm0
  __int64 v277; // rax
  __int64 m; // rdx
  unsigned __int64 v279; // rax
  __m128i v280; // kr70_16
  __m128i v281; // xmm0
  unsigned __int64 v282; // rax
  __m128i v283; // xmm12
  unsigned __int64 v285; // r14
  __int64 v286; // rsi
  int v287; // eax
  bool v288; // al
  __int64 v289; // rdi
  __int64 v290; // rdi
  __int64 v291; // r8
  __int64 v292; // rax
  unsigned __int64 v293; // rax
  __m128i v294; // krC0_16
  __m128i v295; // xmm0
  unsigned __int64 v296; // rax
  __m128i v297; // xmm12
  unsigned __int64 v299; // r12
  __int64 v300; // rbx
  int v301; // eax
  __int64 v302; // r14
  __m128i *v303; // rbx
  unsigned __int64 v304; // rax
  __int64 v305; // rsi
  __m128i v306; // xmm0
  __int64 n; // rdi
  unsigned __int64 v308; // rax
  __m128i v309; // xmm12
  unsigned __int64 v311; // r14
  __int64 v312; // r12
  __int64 v313; // r12
  int v314; // eax
  __int64 v315; // rdi
  __int64 v316; // rax
  __int64 v317; // rsi
  __int128 v318; // rax
  __int64 v320; // rsi
  __int64 v321; // rdi
  __int64 v322; // r14
  const __m128i *v323; // rbx
  __m128i v325; // xmm0
  __int64 v326; // rax
  __int64 v327; // rdx
  unsigned __int64 v328; // rax
  __int64 v329; // rsi
  __int64 v330; // rsi
  __int64 v331; // rax
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // rax
  __int64 v336; // rdx
  __int64 v337; // rsi
  __m128i *v338; // r12
  __int64 v339; // rbx
  __int64 v340; // r14
  __int64 v341; // rax
  __int64 v342; // rdi
  __int64 v343; // rax
  __int64 v344; // rdx
  __int64 v345; // rbx
  __int64 v346; // r14
  __int64 v347; // rax
  __int64 v348; // rcx
  __m128i *v349; // rax
  __int64 v350; // xmm12_8
  __int128 v351; // rdi
  __int64 v352; // rax
  __int64 v353; // rdx
  int v354; // eax
  __int64 v355; // rax
  __int64 v356; // rdx
  __int64 v357; // rbx
  __int64 v358; // r14
  __int64 v359; // rcx
  __int64 v360; // rcx
  char v361; // al
  __int64 v362; // rsi
  __int64 v363; // rax
  __int64 v364; // rdx
  __int64 v365; // rsi
  _DWORD *v366; // rax
  unsigned __int64 v367; // rdx
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rsi
  char v371; // r14
  int v372; // edi
  __int64 v373; // rsi
  __int64 v374; // rax
  __m128i v375; // xmm13
  __int64 v376; // rbx
  __int64 v377; // rcx
  char v378; // r15
  __m128i *v379; // r14
  __int64 v380; // rsi
  __int64 v381; // r12
  __int64 v382; // rax
  __int64 v383; // rdx
  __int64 v384; // rcx
  __int64 v385; // rax
  __int64 v386; // r12
  __int64 v387; // rax
  __int64 v388; // rax
  __int64 v389; // r14
  __int64 v390; // rbx
  __int64 v391; // rax
  char v392; // si
  __int64 v393; // r10
  char v394; // al
  int v395; // r9d
  char v396; // al
  unsigned __int64 v397; // rsi
  __int64 v398; // rax
  __int64 v399; // rcx
  __int64 v400; // rdx
  __int64 v401; // rsi
  __int64 v402; // rax
  const char *v403; // rax
  int v404; // edx
  int v405; // r8d
  __int64 v406; // rbx
  __int64 v407; // rsi
  __int64 v408; // rax
  __int64 v409; // rdx
  __int64 v410; // rcx
  __int64 v411; // r14
  __int64 v412; // rdx
  char v413; // si
  __m128i *v414; // rax
  __int64 v415; // rsi
  __int64 v416; // r14
  __int64 v417; // rax
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 v420; // rsi
  __int64 v421; // rbx
  __m128i v422; // xmm0
  __int64 v423; // rax
  __m128i v424; // kr140_16
  __int64 v425; // rbx
  __int64 v426; // rcx
  __int64 v427; // rsi
  __int64 v428; // r14
  __int64 v429; // rax
  __int64 v430; // rsi
  __int64 v431; // rsi
  __m128i v432; // xmm0
  __int64 v433; // r12
  __int64 v434; // rsi
  __int64 v435; // rdx
  __int64 v436; // r14
  __int64 v437; // rcx
  __int64 v438; // rbx
  __int64 v439; // rcx
  __int64 v440; // rax
  __int64 v441; // rdx
  __int64 v442; // rsi
  __int64 v443; // rcx
  __int64 v444; // rax
  __int64 v445; // rdx
  __int64 v446; // rax
  __int64 v447; // rcx
  __int64 v448; // rcx
  __int64 v449; // rsi
  _QWORD *v450; // rcx
  __int64 v452; // rsi
  __int64 v453; // rdi
  const __m128i *v454; // r14
  const __m128i *v455; // rbx
  __m128i v457; // xmm0
  __int64 v458; // rax
  __int64 v459; // rdx
  unsigned __int64 v460; // rax
  __m128i v462; // xmm0
  __m128i v463; // xmm0
  __int64 k; // rcx
  unsigned __int64 v465; // rax
  __m128i v466; // xmm2
  __int64 v468; // r10
  __int64 v469; // rsi
  __m128i *v470; // rax
  __m128i v471; // xmm0
  __int64 *v472; // r14
  __int64 **v473; // r15
  __m128i *v474; // r12
  __m256i *v475; // rsi
  __int64 v476; // rdi
  __m128i v477; // xmm0
  __m128i v478; // xmm1
  __m128i v479; // xmm0
  __m128i v480; // xmm1
  __m128i v481; // xmm2
  int v482; // eax
  unsigned __int64 v483; // rdx
  __m128i *v484; // r8
  __m128i v485; // xmm0
  __m128i v486; // xmm1
  unsigned __int64 v487; // rax
  __int64 v488; // rsi
  __int64 v489; // r10
  unsigned __int128 v490; // kr160_16
  __int64 v491; // r11
  __int64 v492; // rcx
  __int64 v493; // rax
  __int64 v494; // r15
  __int64 v495; // r13
  __int128 v496; // kr170_16
  __int128 v497; // rax
  __m128i v498; // xmm0
  __int64 v499; // rax
  __int64 v500; // rdi
  __int64 v501; // rsi
  __int64 v502; // rax
  __int64 v503; // rcx
  __int64 v504; // rax
  __int64 v505; // r14
  __m128i *v506; // r9
  void *v507; // r15
  __int64 v508; // rsi
  __int64 v509; // rdx
  bool v510; // si
  bool v511; // di
  __int64 v512; // r14
  __int64 v513; // rcx
  char v514; // si
  __int64 v515; // rcx
  __int64 v516; // rcx
  __int64 v517; // rcx
  __int64 v518; // rcx
  __int64 v519; // rcx
  __m128i v520; // xmm1
  __m128i v521; // xmm2
  __int64 v523; // rsi
  __int64 v524; // rdi
  __int64 v525; // r14
  const __m128i *v526; // r15
  __m128i v528; // xmm0
  __int64 v529; // rax
  __int64 v530; // rdx
  __int64 v531; // r14
  __int64 v532; // r14
  __int64 v533; // rcx
  __int64 v534; // rcx
  __int64 v535; // rdx
  __int64 v536; // rdx
  __int64 v537; // rdx
  __int64 v538; // rdi
  __int64 v539; // rbx
  __int64 v540; // [rsp+20h] [rbp-60h]
  __int64 v541; // [rsp+20h] [rbp-60h]
  __int64 v542; // [rsp+20h] [rbp-60h]
  __int64 v543; // [rsp+20h] [rbp-60h]
  __int64 v544; // [rsp+20h] [rbp-60h]
  __int64 v545; // [rsp+20h] [rbp-60h]
  __int64 v546; // [rsp+20h] [rbp-60h]
  __int64 v547; // [rsp+28h] [rbp-58h]
  __int64 v548; // [rsp+28h] [rbp-58h]
  __int64 v549; // [rsp+28h] [rbp-58h]
  __int64 v550; // [rsp+28h] [rbp-58h]
  __int64 v551; // [rsp+28h] [rbp-58h]
  __int64 v552; // [rsp+28h] [rbp-58h]
  __int64 v553; // [rsp+28h] [rbp-58h]
  __int64 v554; // [rsp+30h] [rbp-50h]
  __int64 v555; // [rsp+30h] [rbp-50h]
  __int64 v556; // [rsp+30h] [rbp-50h]
  __int64 v557; // [rsp+30h] [rbp-50h]
  __int64 v558; // [rsp+30h] [rbp-50h]
  __int64 v559; // [rsp+30h] [rbp-50h]
  __m128i v560; // [rsp+38h] [rbp-48h] BYREF
  __m128i v561; // [rsp+48h] [rbp-38h]
  __m128i v562; // [rsp+58h] [rbp-28h]
  __int64 v563; // [rsp+68h] [rbp-18h]
  __int64 v564; // [rsp+70h] [rbp-10h]
  __int64 v565; // [rsp+78h] [rbp-8h]
  __int64 v566; // [rsp+80h] [rbp+0h]
  __int64 v567; // [rsp+88h] [rbp+8h]
  __m128i v568; // [rsp+90h] [rbp+10h] BYREF
  __m128i v569; // [rsp+A0h] [rbp+20h]
  __m128i v570; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v571; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v572; // [rsp+C8h] [rbp+48h]
  __int64 v573; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v574; // [rsp+E0h] [rbp+60h]
  __m128i v575; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v576; // [rsp+100h] [rbp+80h]
  __m128i v577; // [rsp+110h] [rbp+90h]
  __m128i v578; // [rsp+120h] [rbp+A0h]
  __m128i v579; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v580; // [rsp+140h] [rbp+C0h] BYREF
  _QWORD v581[4]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v582; // [rsp+170h] [rbp+F0h]
  __int64 v583; // [rsp+178h] [rbp+F8h]
  __int64 v584; // [rsp+180h] [rbp+100h]
  __int64 v585; // [rsp+188h] [rbp+108h]
  __int64 v586; // [rsp+190h] [rbp+110h]
  __int64 v587; // [rsp+198h] [rbp+118h]
  __m256i v588; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v589; // [rsp+1C0h] [rbp+140h]
  HANDLE hObject[3]; // [rsp+1C8h] [rbp+148h] BYREF
  _QWORD v591[3]; // [rsp+1E0h] [rbp+160h] BYREF
  _QWORD v592[3]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v593[3]; // [rsp+210h] [rbp+190h] BYREF
  __int64 v594; // [rsp+228h] [rbp+1A8h] BYREF
  __m128i v595; // [rsp+230h] [rbp+1B0h]
  int v596; // [rsp+240h] [rbp+1C0h]
  __int64 v597; // [rsp+288h] [rbp+208h] BYREF
  __m128i *v598; // [rsp+290h] [rbp+210h]
  __int64 v599; // [rsp+298h] [rbp+218h]
  _BYTE v600[48]; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v601; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v602; // [rsp+2E0h] [rbp+260h]
  __int64 v603; // [rsp+388h] [rbp+308h] BYREF
  __int64 v604; // [rsp+390h] [rbp+310h]
  __int64 v605; // [rsp+398h] [rbp+318h]
  char v606; // [rsp+3A0h] [rbp+320h]
  __int64 v607; // [rsp+3A8h] [rbp+328h]
  _BYTE v608[56]; // [rsp+3B0h] [rbp+330h] BYREF
  const char *v609; // [rsp+3E8h] [rbp+368h] BYREF
  __int128 v610; // [rsp+3F0h] [rbp+370h]
  __int128 v611; // [rsp+400h] [rbp+380h]
  __int128 v612; // [rsp+410h] [rbp+390h]
  __m128i v613; // [rsp+420h] [rbp+3A0h]
  __m128i *v614; // [rsp+430h] [rbp+3B0h]
  __m128i v615; // [rsp+438h] [rbp+3B8h]
  __int64 v616; // [rsp+448h] [rbp+3C8h]
  __m128i v617; // [rsp+450h] [rbp+3D0h]
  __int64 v618; // [rsp+460h] [rbp+3E0h]
  __m128i v619; // [rsp+468h] [rbp+3E8h]
  __int64 v620; // [rsp+478h] [rbp+3F8h]
  __int64 v621; // [rsp+480h] [rbp+400h]
  __int64 v622; // [rsp+488h] [rbp+408h]
  __int64 v623; // [rsp+490h] [rbp+410h]
  __int128 v624; // [rsp+498h] [rbp+418h]
  __int128 v625; // [rsp+4A8h] [rbp+428h]
  __int128 v626; // [rsp+4B8h] [rbp+438h]
  __m128i v627; // [rsp+4C8h] [rbp+448h]
  __int128 v628; // [rsp+4D8h] [rbp+458h]
  __int64 v629; // [rsp+4E8h] [rbp+468h]
  int v630; // [rsp+4F0h] [rbp+470h]
  char v631; // [rsp+4F4h] [rbp+474h]
  char v632; // [rsp+4F5h] [rbp+475h]
  char v633; // [rsp+4F6h] [rbp+476h]
  char v634; // [rsp+4F7h] [rbp+477h]
  __int64 *v635; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 (__fastcall *v636)(); // [rsp+5A8h] [rbp+528h]
  __int64 v637; // [rsp+5B8h] [rbp+538h] BYREF
  __int64 v638; // [rsp+5C0h] [rbp+540h]
  _QWORD *v639; // [rsp+5D0h] [rbp+550h]
  __int64 v640; // [rsp+5D8h] [rbp+558h]
  __m256i v641; // [rsp+5E0h] [rbp+560h] BYREF
  __m128i v642; // [rsp+600h] [rbp+580h] BYREF
  _BYTE v643[40]; // [rsp+610h] [rbp+590h] BYREF
  __int64 v644; // [rsp+638h] [rbp+5B8h]
  __m128i v645; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v646; // [rsp+650h] [rbp+5D0h]
  __m128i v647; // [rsp+658h] [rbp+5D8h] BYREF
  __int64 v648; // [rsp+668h] [rbp+5E8h]
  __m128i v649; // [rsp+670h] [rbp+5F0h] BYREF
  unsigned __int128 v650; // [rsp+680h] [rbp+600h] BYREF
  __m256i v651; // [rsp+690h] [rbp+610h]
  __int128 v652; // [rsp+6B0h] [rbp+630h]
  __int128 v653; // [rsp+6C0h] [rbp+640h]
  __int128 v654; // [rsp+6D0h] [rbp+650h]
  __m128i v655; // [rsp+6E8h] [rbp+668h] BYREF
  unsigned __int64 v656; // [rsp+6F8h] [rbp+678h]
  __m128i v657; // [rsp+700h] [rbp+680h] BYREF
  __int64 v658; // [rsp+710h] [rbp+690h]
  __int64 v659; // [rsp+718h] [rbp+698h]
  __m128i v660; // [rsp+720h] [rbp+6A0h] BYREF
  __m128i v661; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v662; // [rsp+740h] [rbp+6C0h]
  void *v663; // [rsp+748h] [rbp+6C8h]
  __int64 v664; // [rsp+750h] [rbp+6D0h]
  __int64 v665; // [rsp+758h] [rbp+6D8h]
  const __m128i *v666; // [rsp+760h] [rbp+6E0h]
  __int64 v667; // [rsp+768h] [rbp+6E8h]
  __m128i v668; // [rsp+770h] [rbp+6F0h] BYREF
  __m256i v669; // [rsp+780h] [rbp+700h] BYREF
  __int64 v670; // [rsp+7A0h] [rbp+720h]
  __int64 v671; // [rsp+7A8h] [rbp+728h]
  __int64 v672; // [rsp+7B0h] [rbp+730h]
  __int64 v673; // [rsp+7B8h] [rbp+738h]
  __int64 v674; // [rsp+7C0h] [rbp+740h]
  __int64 v675; // [rsp+7C8h] [rbp+748h]
  __int64 v676; // [rsp+7D0h] [rbp+750h]
  __int64 *v677; // [rsp+7D8h] [rbp+758h]
  __int64 v678; // [rsp+7E0h] [rbp+760h]
  __int64 v679; // [rsp+7E8h] [rbp+768h]
  __int64 v680; // [rsp+7F0h] [rbp+770h]
  __int64 v681; // [rsp+7F8h] [rbp+778h]
  __int64 v682; // [rsp+800h] [rbp+780h]
  __int64 v683; // [rsp+808h] [rbp+788h]
  __int64 v684; // [rsp+810h] [rbp+790h]
  __int64 v685; // [rsp+818h] [rbp+798h]
  __int64 v686; // [rsp+820h] [rbp+7A0h]
  __int64 v687; // [rsp+828h] [rbp+7A8h]
  __int64 v688; // [rsp+830h] [rbp+7B0h]
  __int64 v689; // [rsp+838h] [rbp+7B8h]
  __int64 v690; // [rsp+840h] [rbp+7C0h]
  __int64 v691; // [rsp+848h] [rbp+7C8h]
  int v692; // [rsp+850h] [rbp+7D0h]
  char v693; // [rsp+854h] [rbp+7D4h]
  __int64 v694; // [rsp+860h] [rbp+7E0h]
  __int64 v695; // [rsp+868h] [rbp+7E8h]
  __int64 v696; // [rsp+870h] [rbp+7F0h]
  __int64 v697; // [rsp+878h] [rbp+7F8h]
  __int64 *v698; // [rsp+880h] [rbp+800h]
  __int64 v699; // [rsp+888h] [rbp+808h]
  void *v700; // [rsp+890h] [rbp+810h]
  __int64 v701; // [rsp+898h] [rbp+818h]
  _BYTE v702[56]; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v703; // [rsp+8D8h] [rbp+858h]
  __int64 v704; // [rsp+8E0h] [rbp+860h]
  __int64 v705; // [rsp+8E8h] [rbp+868h]
  __int64 v706; // [rsp+8F0h] [rbp+870h]
  char v707; // [rsp+8FDh] [rbp+87Dh] BYREF
  char v708; // [rsp+8FEh] [rbp+87Eh] BYREF
  char v709; // [rsp+8FFh] [rbp+87Fh] BYREF
  __int64 v710; // [rsp+900h] [rbp+880h]
  __int64 v711; // [rsp+908h] [rbp+888h]
  __int64 v712; // [rsp+910h] [rbp+890h]
  __int64 v713; // [rsp+918h] [rbp+898h]
  __int64 v714; // [rsp+920h] [rbp+8A0h]
  __int64 v715; // [rsp+928h] [rbp+8A8h]
  __int64 v716; // [rsp+930h] [rbp+8B0h]
  __int64 v717; // [rsp+938h] [rbp+8B8h]
  __int64 v718; // [rsp+940h] [rbp+8C0h]
  char v719; // [rsp+94Ah] [rbp+8CAh]
  char v720; // [rsp+94Bh] [rbp+8CBh]
  char v721; // [rsp+94Ch] [rbp+8CCh]
  char v722; // [rsp+94Dh] [rbp+8CDh]
  char v723; // [rsp+94Eh] [rbp+8CEh]
  char v724; // [rsp+94Fh] [rbp+8CFh]
  char v725; // [rsp+950h] [rbp+8D0h]
  char v726; // [rsp+951h] [rbp+8D1h]
  char v727; // [rsp+952h] [rbp+8D2h]
  char v728; // [rsp+953h] [rbp+8D3h]
  char v729; // [rsp+954h] [rbp+8D4h]
  char v730; // [rsp+955h] [rbp+8D5h]
  char v731; // [rsp+956h] [rbp+8D6h]
  char v732; // [rsp+957h] [rbp+8D7h]
  __int64 v733; // [rsp+958h] [rbp+8D8h]
  __int64 v734; // [rsp+960h] [rbp+8E0h]
  __int64 v735; // [rsp+968h] [rbp+8E8h]
  __int64 v736; // [rsp+970h] [rbp+8F0h]
  __int64 v737; // [rsp+978h] [rbp+8F8h]
  char v738; // [rsp+981h] [rbp+901h]
  char v739; // [rsp+982h] [rbp+902h]
  char v740; // [rsp+983h] [rbp+903h]
  char v741; // [rsp+984h] [rbp+904h]
  char v742; // [rsp+985h] [rbp+905h]
  char v743; // [rsp+986h] [rbp+906h]
  char v744; // [rsp+987h] [rbp+907h]
  __int64 v745; // [rsp+988h] [rbp+908h]
  __int64 v746; // [rsp+990h] [rbp+910h]
  __int64 v747; // [rsp+998h] [rbp+918h]
  char v748; // [rsp+9A4h] [rbp+924h]
  char v749; // [rsp+9A5h] [rbp+925h]
  char v750; // [rsp+9A6h] [rbp+926h]
  char v751; // [rsp+9A7h] [rbp+927h]
  char v752; // [rsp+9A8h] [rbp+928h]
  char v753; // [rsp+9A9h] [rbp+929h]
  char v754; // [rsp+9AAh] [rbp+92Ah]
  char v755; // [rsp+9ABh] [rbp+92Bh]
  char v756; // [rsp+9ACh] [rbp+92Ch]
  char v757; // [rsp+9ADh] [rbp+92Dh]
  char v758; // [rsp+9AEh] [rbp+92Eh]
  char v759; // [rsp+9AFh] [rbp+92Fh]
  __int64 v760; // [rsp+9B0h] [rbp+930h]
  __int64 v761; // [rsp+9B8h] [rbp+938h]
  __int64 v762; // [rsp+9C0h] [rbp+940h]
  char v763; // [rsp+9CDh] [rbp+94Dh]
  char v764; // [rsp+9CEh] [rbp+94Eh]
  char v765; // [rsp+9CFh] [rbp+94Fh]
  __int64 v766; // [rsp+9D0h] [rbp+950h]
  __int64 v767; // [rsp+9D8h] [rbp+958h]
  char v768; // [rsp+9E1h] [rbp+961h]
  char v769; // [rsp+9E2h] [rbp+962h]
  char v770; // [rsp+9E3h] [rbp+963h]
  char v771; // [rsp+9E4h] [rbp+964h]
  char v772; // [rsp+9E5h] [rbp+965h]
  char v773; // [rsp+9E6h] [rbp+966h]
  char v774; // [rsp+9E7h] [rbp+967h]
  __int64 v775; // [rsp+9E8h] [rbp+968h]

  v775 = -2;
  v639 = a1;
  sub_14074CFA0(&v560);
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_QWORD *)(a2 + 16);
    v744 = 1;
    sub_140713CC0(&v603, v8, v9);
    v10 = v604;
    v6 = v605;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 976);
    if ( v6 < 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    if ( v6 )
    {
      v11 = *(_QWORD *)(a2 + 968);
      nullsub_1(v5);
      v7 = 1;
      v12 = sub_140001650(v6, 1);
      if ( !v12 )
      {
LABEL_4:
        v744 = 1;
        sub_1416C2D4B(v7, v6);
      }
      v10 = v12;
      v603 = v6;
      v604 = v12;
      sub_141684120(v12, v11, v6);
      v605 = v6;
    }
    else
    {
      v603 = 0;
      v604 = 1;
      v605 = 0;
      v10 = 1;
    }
    v606 = *(_BYTE *)(a2 + 984);
  }
  v768 = 1;
  v13 = sub_141470CD0(v5, v4);
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v768 = 1;
    v531 = v13;
    v14 = sub_141486EF0();
    v13 = v531;
    *(_QWORD *)v531 = v14;
    *(_QWORD *)(v531 + 8) = v15;
    *(_BYTE *)(v531 + 16) = 1;
  }
  *(_QWORD *)v13 = v14 + 1;
  v16 = *(&off_141786750 + 1);
  *(_OWORD *)&v643[16] = *(&off_141786750 + 1);
  v17 = off_141786750;
  *(_OWORD *)v643 = off_141786750;
  *(_QWORD *)&v643[32] = v14;
  v644 = v15;
  v769 = 1;
  sub_141486710(v608, v10, v6);
  if ( *(_DWORD *)v608 == 2 )
  {
    v769 = 1;
    sub_1401DD260(*(_QWORD *)&v608[8]);
    si128 = _mm_load_si128((const __m128i *)v643);
    v22 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v22;
    v668 = si128;
    goto LABEL_20;
  }
  v769 = 1;
  LOBYTE(v18) = 1;
  sub_140748E40(v608, v10, v6, v18);
  if ( BYTE8(v612) == 0xFF )
  {
    v29 = _mm_load_si128((const __m128i *)v643);
    v30 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v30;
    v668 = v29;
    v769 = 0;
    sub_1406CDA20(v608);
    goto LABEL_20;
  }
  v654 = v612;
  v653 = v611;
  v652 = v610;
  v23 = _mm_loadu_si128((const __m128i *)v608);
  v24 = _mm_loadu_si128((const __m128i *)&v608[16]);
  v25 = _mm_loadu_si128((const __m128i *)&v608[32]);
  *(__m128i *)&v651.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v608[48]);
  *(__m128i *)v651.m256i_i8 = v25;
  v650 = (unsigned __int128)v24;
  v649 = v23;
  v743 = 1;
  HIDWORD(_RAX) = (unsigned __int64)sub_14074E320(v608, &v649) >> 32;
  if ( *(_DWORD *)v608 != -1 )
  {
    v27 = _mm_load_si128((const __m128i *)v643);
    v28 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v28;
    v668 = v27;
    v743 = 0;
    sub_1406CDA20(v608);
    goto LABEL_899;
  }
  v80 = _mm_loadu_si128((const __m128i *)&v608[8]);
  v81 = _mm_loadu_si128((const __m128i *)&v608[24]);
  v642 = _mm_loadu_si128((const __m128i *)&v608[40]);
  *(__m128i *)&v641.m256i_u64[2] = v81;
  *(__m128i *)v641.m256i_i8 = v80;
  if ( !v81.m128i_i64[1] )
  {
LABEL_102:
    v94 = _mm_load_si128((const __m128i *)v643);
    v95 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v95;
    v668 = v94;
    goto LABEL_103;
  }
  v82 = sub_1403795A0(&v642, aId_3, 2);
  v84 = *(_OWORD *)v641.m256i_i8;
  v85 = _mm_cvtsi32_si128(v82 >> 57);
  v86 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v85, v85), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    _RAX = v641.m256i_i64[1] & v82;
    v88 = _mm_loadu_si128((const __m128i *)(v641.m256i_i64[0] + _RAX));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v88, v86));
    if ( _EDX )
      break;
LABEL_89:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v88, (__m128i)-1LL)) )
      goto LABEL_102;
    v82 = i + _RAX + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r8d, edx }
    v90 = -3 * (v641.m256i_i64[1] & (_RAX + _R8));
    if ( *(_QWORD *)(v641.m256i_i64[0] + 8 * v90 - 8) == 2 && **(_WORD **)(v641.m256i_i64[0] + 8 * v90 - 16) == 25705 )
      break;
    _R8 = (unsigned int)(_EDX - 1);
    LOWORD(_R8) = _EDX & (_EDX - 1);
    _EDX = _R8;
    if ( !(_WORD)_R8 )
      goto LABEL_89;
  }
  v732 = 1;
  sub_14074E1A0((unsigned int)&v573, (unsigned int)&v641, (unsigned int)aTitle_2, 5, (__int64)asc_14178A3F4, 2);
  v116 = sub_1403795A0(&v642, "recency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home", 13);
  v118 = _mm_cvtsi32_si128(v116 >> 57);
  v119 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v118, v118), 0), 68);
  for ( j = 0; ; j += 16 )
  {
    v121 = *((_QWORD *)&v84 + 1) & v116;
    v122 = _mm_loadu_si128((const __m128i *)(v84 + v121));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v122, v119));
    if ( _R9D )
      break;
LABEL_131:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v122, (__m128i)-1LL)) )
    {
      v125 = 0;
      goto LABEL_714;
    }
    v116 = j + v121 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v124 = -3LL * (*((_QWORD *)&v84 + 1) & (v121 + _R10));
    if ( *(_QWORD *)(v84 + 8 * v124 - 8) == 13 )
    {
      v125 = 1;
      if ( !(**(_QWORD **)(v84 + 8 * v124 - 16) ^ 0x5F79636E65636572LL
           | *(_QWORD *)(*(_QWORD *)(v84 + 8 * v124 - 16) + 5LL) ^ 0x736D5F74615F7963LL) )
        break;
    }
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_131;
  }
LABEL_714:
  v460 = sub_1403795A0(&v642, "updated_at_msupdated_atarchivedstate_.sqlitesqlite_home", 13);
  v462 = _mm_cvtsi32_si128(v460 >> 57);
  v463 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v462, v462), 0), 68);
  for ( k = 0; ; k += 16 )
  {
    v465 = *((_QWORD *)&v84 + 1) & v460;
    v466 = _mm_loadu_si128((const __m128i *)(v84 + v465));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v466, v463));
    if ( _R9D )
    {
      while ( 1 )
      {
        __asm { tzcnt   r10d, r9d }
        v468 = -3LL * (*((_QWORD *)&v84 + 1) & (v465 + _R10));
        if ( *(_QWORD *)(v84 + 8 * v468 - 8) == 13
          && !(**(_QWORD **)(v84 + 8 * v468 - 16) ^ 0x5F64657461647075LL
             | *(_QWORD *)(*(_QWORD *)(v84 + 8 * v468 - 16) + 5LL) ^ 0x736D5F74615F6465LL) )
        {
          break;
        }
        _R10 = (unsigned int)(_R9D - 1);
        LOWORD(_R10) = _R9D & (_R9D - 1);
        _R9D = _R10;
        if ( !(_WORD)_R10 )
          goto LABEL_719;
      }
      nullsub_1(k);
      if ( !v125 )
      {
        v469 = 49;
        v470 = (__m128i *)sub_140001650(49, 1);
        if ( !v470 )
        {
          v772 = 1;
          sub_1416C2D4B(1, 49);
        }
        qmemcpy(&v470[1], "dated_at_ms, 0) AS REAL) / 1000.", 32);
        v471 = _mm_loadu_si128((const __m128i *)&xmmword_14178B17E);
        goto LABEL_729;
      }
      v469 = 64;
      v470 = (__m128i *)sub_140001650(64, 1);
      if ( !v470 )
      {
        v772 = 1;
        sub_1416C2D4B(1, 64);
      }
      qmemcpy(&v470[1], "cency_at_ms, updated_at_ms, 0) AS REAL) / 1000.0", 48);
      *v470 = _mm_loadu_si128((const __m128i *)&xmmword_14178B1E0);
      goto LABEL_730;
    }
LABEL_719:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v466, (__m128i)-1LL)) )
      break;
    v460 = k + v465 + 16;
  }
  if ( v125 )
  {
    nullsub_1(k);
    v469 = 49;
    v470 = (__m128i *)sub_140001650(49, 1);
    if ( !v470 )
    {
      v772 = 1;
      sub_1416C2D4B(1, 49);
    }
    qmemcpy(&v470[1], "cency_at_ms, 0) AS REAL) / 1000.", 32);
    v471 = _mm_loadu_si128((const __m128i *)&xmmword_14178B1AF);
LABEL_729:
    *v470 = v471;
    v470[3].m128i_i8[0] = 48;
    goto LABEL_730;
  }
  v772 = 1;
  if ( sub_14042ABF0(v641.m256i_i64, (__int64)"updated_atarchivedstate_.sqlitesqlite_home", 10) )
  {
    nullsub_1(v513);
    v469 = 37;
    v470 = (__m128i *)sub_140001650(37, 1);
    if ( !v470 )
    {
      v772 = 1;
      sub_1416C2D4B(1, 37);
    }
    qmemcpy(&v470[1], "dated_at, 0) AS REAL)", 21);
    *v470 = _mm_loadu_si128((const __m128i *)&xmmword_14178B159);
  }
  else
  {
    v772 = 1;
    v514 = sub_14042ABF0(v641.m256i_i64, (__int64)aCreatedAtMs, 13);
    nullsub_1(v515);
    if ( v514 )
    {
      v469 = 49;
      v470 = (__m128i *)sub_140001650(49, 1);
      if ( !v470 )
      {
        v772 = 1;
        sub_1416C2D4B(1, 49);
      }
      qmemcpy(&v470[1], "eated_at_ms, 0) AS REAL) / 1000.", 32);
      v471 = _mm_loadu_si128((const __m128i *)&xmmword_14178B128);
      goto LABEL_729;
    }
    v469 = 3;
    v470 = (__m128i *)sub_140001650(3, 1);
    if ( !v470 )
    {
      v772 = 1;
      sub_1416C2D4B(1, 3);
    }
    v470->m128i_i8[2] = 48;
    v470->m128i_i16[0] = 11824;
  }
LABEL_730:
  v597 = v469;
  v598 = v470;
  v599 = v469;
  v731 = 1;
  sub_14074E1A0((unsigned int)&v571, (unsigned int)&v641, (unsigned int)aCwd_1, 3, (__int64)aNull_5, 4);
  v730 = 1;
  v472 = &v637;
  sub_14074E1A0(
    (unsigned int)&v637,
    (unsigned int)&v641,
    (unsigned int)"archivedstate_.sqlitesqlite_home",
    8,
    (__int64)&unk_141788030,
    1);
  v729 = 1;
  v473 = &v635;
  sub_14074E1A0((unsigned int)&v635, (unsigned int)&v641, (unsigned int)aAgentNickname, 14, (__int64)aNull_5, 4);
  v728 = 1;
  v474 = &v655;
  sub_14074E1A0((unsigned int)&v655, (unsigned int)&v641, (unsigned int)aAgentRole, 10, (__int64)aNull_5, 4);
  v727 = 1;
  sub_14074E1A0((unsigned int)&v647, (unsigned int)&v641, (unsigned int)aSource_1, 6, (__int64)asc_14178A3F4, 2);
  v726 = 1;
  v475 = (__m256i *)&v645;
  sub_14074E1A0((unsigned int)&v645, (unsigned int)&v641, (unsigned int)aModelProvider_0, 14, (__int64)asc_14178A3F4, 2);
  v725 = 1;
  v476 = (__int64)&v657;
  sub_14074E1A0((unsigned int)&v657, (unsigned int)&v641, (unsigned int)"rollout_path", 12, (__int64)aNull_5, 4);
  *(_QWORD *)v608 = &v573;
  *(_QWORD *)&v608[8] = sub_1400015F0;
  *(_QWORD *)&v608[16] = &v597;
  *(_QWORD *)&v608[24] = sub_1400015F0;
  *(_QWORD *)&v608[32] = &v571;
  *(_QWORD *)&v608[40] = sub_1400015F0;
  *(_QWORD *)&v608[48] = &v637;
  v609 = (const char *)sub_1400015F0;
  *(_QWORD *)&v610 = &v635;
  *((_QWORD *)&v610 + 1) = sub_1400015F0;
  *(_QWORD *)&v611 = &v655;
  *((_QWORD *)&v611 + 1) = sub_1400015F0;
  *(_QWORD *)&v612 = &v647;
  *((_QWORD *)&v612 + 1) = sub_1400015F0;
  v613.m128i_i64[0] = (__int64)&v645;
  v613.m128i_i64[1] = (__int64)sub_1400015F0;
  v614 = &v657;
  v615.m128i_i64[0] = (__int64)sub_1400015F0;
  v724 = 1;
  sub_14149C0F0(&v668, &unk_14178AC8A, v608);
  v666 = (const __m128i *)v668.m128i_i64[0];
  v759 = 1;
  v662 = v668.m128i_i64[1];
  sub_140716FD0(v608, &v649, v668.m128i_i64[1], v669.m256i_i64[0], v540, v547);
  if ( v608[0] )
  {
    v477 = _mm_load_si128((const __m128i *)v643);
    v478 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v478;
    v668 = v477;
    v759 = 0;
    HIDWORD(_RAX) = (unsigned __int64)sub_1406CBAD0(&v608[8]) >> 32;
    if ( v666 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v662, v666, 1) >> 32;
    if ( v657.m128i_i64[0] )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v657.m128i_i64[1], v657.m128i_i64[0], 1) >> 32;
    if ( v645.m128i_i64[0] )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v645.m128i_i64[1], v645.m128i_i64[0], 1) >> 32;
    if ( v647.m128i_i64[0] )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v647.m128i_i64[1], v647.m128i_i64[0], 1) >> 32;
    if ( v655.m128i_i64[0] )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v655.m128i_i64[1], v655.m128i_i64[0], 1) >> 32;
    if ( v635 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v636, v635, 1) >> 32;
    if ( v637 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v638, v637, 1) >> 32;
    if ( v571 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v572, v571, 1) >> 32;
    if ( v597 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v598, v597, 1) >> 32;
    if ( v573 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v574, v573, 1) >> 32;
LABEL_103:
    v96 = v641.m256i_i64[1];
    if ( v641.m256i_i64[1] )
    {
      v97 = v641.m256i_i64[3];
      if ( v641.m256i_i64[3] )
      {
        v98 = v641.m256i_i64[0];
        v99 = (const __m128i *)(v641.m256i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v641.m256i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v101 = _mm_load_si128(v99);
              v98 -= 384;
              ++v99;
              _R12D = _mm_movemask_epi8(v101) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v102 = -3 * _RAX;
          v103 = *(_QWORD *)(v98 + 8 * v102 - 24);
          if ( v103 )
            sub_140001660(*(_QWORD *)(v98 + 8 * v102 - 16), v103, 1);
          --v97;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v97 );
      }
      v114 = (24 * v96 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v115 = v114 + v96 + 17;
      if ( v115 )
        goto LABEL_898;
    }
    goto LABEL_899;
  }
  v479 = _mm_loadu_si128((const __m128i *)&v608[8]);
  v480 = _mm_loadu_si128((const __m128i *)&v608[24]);
  v481 = _mm_loadu_si128((const __m128i *)&v608[40]);
  v578 = _mm_loadu_si128((const __m128i *)&v609);
  v577 = v481;
  v576 = v480;
  v575 = v479;
  v482 = sub_1414B6B70(v578.m128i_i64[1]);
  v483 = -(__int64)(v482 == 0) | 0x8000000000000013uLL;
  v484 = nullptr;
  if ( !v482 )
    v484 = &v575;
  v579.m128i_i64[1] = (__int64)v484;
  v580.m128i_i64[0] = v482;
  v579.m128i_i64[0] = -(__int64)(v482 == 0) | 0x8000000000000013uLL;
  if ( v482 )
  {
    v485 = _mm_load_si128((const __m128i *)v643);
    v486 = _mm_load_si128((const __m128i *)&v643[16]);
    *(__m128i *)&v669.m256i_u64[2] = _mm_load_si128((const __m128i *)&v643[32]);
    *(__m128i *)v669.m256i_i8 = v486;
    v668 = v485;
    goto LABEL_868;
  }
  *(_QWORD *)v608 = 1;
  *(_QWORD *)&v608[8] = &v575;
  *(_QWORD *)&v608[16] = 0;
  *(_QWORD *)&v608[24] = -2;
  *((_QWORD *)&v625 + 1) = -2;
  while ( *(_DWORD *)v608 == 1 )
  {
    sub_1407BAD50(v702, &v608[8]);
    if ( *(_QWORD *)v702 != -1 )
    {
      v745 = *(_QWORD *)v702;
      v767 = (__int64)v473;
      v489 = *(_QWORD *)&v702[8];
      v490 = *(_OWORD *)&v702[16];
      v491 = *(_QWORD *)&v702[32];
      v492 = *(_QWORD *)&v702[40];
      v493 = *(_QWORD *)&v702[48];
      v494 = v703;
      v495 = -1;
      goto LABEL_837;
    }
    if ( !*(_QWORD *)&v608[16] )
    {
      v668.m128i_i64[0] = -2;
LABEL_864:
      if ( *(_QWORD *)v608 )
        sub_1406CB9C0(&v608[8]);
      *(_QWORD *)v608 = 0;
      break;
    }
    sub_14042B0E0(v702, &v608[16], 7);
    if ( *(_QWORD *)v702 == -1 )
    {
      v718 = *(_QWORD *)&v702[8];
      v496 = *(_OWORD *)&v702[16];
    }
    else
    {
      sub_1406CBAD0(v702);
      v718 = 0;
      v496 = 1u;
    }
    *(_QWORD *)&v497 = sub_14033C560(v496, *((_QWORD *)&v496 + 1));
    LODWORD(v711) = 0;
    v716 = v496;
    if ( !*((_QWORD *)&v497 + 1) || *(_BYTE *)v497 != 123 )
    {
      v734 = -1;
      goto LABEL_786;
    }
    v734 = -1;
    *(_OWORD *)v702 = v497;
    *(_OWORD *)&v702[16] = 0;
    *(_OWORD *)&v702[32] = v497;
    sub_1408A6200(&v660, v702);
    if ( v660.m128i_i8[0] == -1 )
    {
      sub_1406C9CF0((__int64)&v660);
      goto LABEL_786;
    }
    v498 = _mm_loadu_si128(&v660);
    *(__m128i *)&v702[16] = _mm_loadu_si128(&v661);
    *(__m128i *)v702 = v498;
    v499 = sub_14142E200(v702, aSubagentThread, 39);
    v734 = -1;
    v500 = v699;
    if ( v499 && *(_BYTE *)v499 == 3 )
    {
      v501 = *(_QWORD *)(v499 + 16);
      v473 = *(__int64 ***)(v499 + 24);
      sub_140388B60((unsigned int)&v660, (_DWORD)v473, 0, 1, 1);
      v734 = v660.m128i_i64[1];
      if ( v660.m128i_i32[0] == 1 )
        sub_1416C2D4B(v734, v661.m128i_i64[0]);
      v500 = v661.m128i_i64[0];
      if ( v473 )
        sub_141684120(v661.m128i_i64[0], v501, v473);
      else
        v473 = nullptr;
    }
    v699 = v500;
    v502 = sub_14142E200(v702, aSubagentThread_0, 28);
    LODWORD(v711) = 0;
    if ( v502 && *(_BYTE *)v502 == 2 )
    {
      v503 = *(_QWORD *)(v502 + 8);
      if ( v503 )
      {
        if ( (_DWORD)v503 == 1 )
        {
          v504 = *(_QWORD *)(v502 + 16);
LABEL_784:
          LODWORD(v711) = v504;
        }
      }
      else
      {
        v504 = *(_QWORD *)(v502 + 16);
        if ( v504 >= 0 )
          goto LABEL_784;
      }
    }
    sub_1400104F0(v702);
LABEL_786:
    v667 = *((_QWORD *)&v496 + 1);
    v698 = v472;
    sub_14042B0E0(v702, &v608[16], 0);
    v715 = *(_QWORD *)&v702[8];
    v505 = *(_QWORD *)v702;
    v474 = *(__m128i **)&v702[16];
    v767 = (__int64)v473;
    v712 = *(_QWORD *)&v702[24];
    if ( *(_QWORD *)v702 != -1 )
    {
      v663 = *(void **)&v702[32];
      v475 = *(__m256i **)&v702[40];
      v476 = *(_QWORD *)&v702[48];
      v494 = v703;
      if ( (unsigned __int64)(v734 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v699, v734, 1);
      v495 = -1;
      if ( v718 )
        sub_140001660(v716, v718, 1);
      v493 = v476;
      v492 = (__int64)v475;
      v506 = v474;
      v489 = v715;
      v745 = v505;
      v472 = v698;
      LODWORD(v474) = v711;
      v491 = (__int64)v663;
      v490 = __PAIR128__(v712, (unsigned __int64)v506);
      goto LABEL_837;
    }
    v745 = *(_QWORD *)&v702[16];
    v741 = 1;
    sub_14042AE90(
      v702,
      &v608[16],
      1,
      &off_141788740,
      v541,
      v548,
      v554,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    LODWORD(v474) = v711;
    if ( *(_QWORD *)v702 != -1 )
    {
      v741 = 1;
      sub_1406CBAD0(v702);
LABEL_795:
      v696 = 1;
      v507 = nullptr;
      v700 = nullptr;
      goto LABEL_796;
    }
    if ( *(_QWORD *)&v702[8] > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_795;
    v700 = *(void **)&v702[8];
    v507 = *(void **)&v702[24];
    v696 = *(_QWORD *)&v702[16];
LABEL_796:
    v765 = 1;
    sub_14042B320(v702, &v608[16], 2, &off_141788758);
    if ( *(_QWORD *)v702 == -1 )
      v2 = *(_QWORD *)&v702[8];
    else
      v2 = 0;
    if ( *(_QWORD *)v702 != -1 )
    {
      v765 = 1;
      sub_1406CBAD0(v702);
    }
    v765 = 1;
    sub_14042AE90(
      v702,
      &v608[16],
      3,
      &off_141788770,
      v542,
      v549,
      v555,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    if ( *(_QWORD *)v702 == -1 )
    {
      v761 = -1;
      if ( *(_QWORD *)&v702[8] <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_QWORD *)&v702[24] )
        {
          v695 = *(_QWORD *)&v702[24];
          v698 = *(__int64 **)&v702[16];
          v761 = *(_QWORD *)&v702[8];
        }
        else if ( *(_QWORD *)&v702[8] )
        {
          sub_140001660(*(_QWORD *)&v702[16], *(_QWORD *)&v702[8], 1);
        }
      }
    }
    else
    {
      v765 = 1;
      sub_1406CBAD0(v702);
      v761 = -1;
    }
    v764 = 1;
    sub_14042AE90(
      v702,
      &v608[16],
      9,
      &off_141788788,
      v543,
      v550,
      v556,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    if ( *(_QWORD *)v702 == -1 )
    {
      v747 = -1;
      if ( *(_QWORD *)&v702[8] <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v736 = *(_QWORD *)&v702[8];
        v508 = *(_QWORD *)&v702[24];
        v760 = *(_QWORD *)&v702[16];
        sub_14033BC10(*(_QWORD *)&v702[16], *(_QWORD *)&v702[24]);
        if ( v509 )
        {
          v709 = 92;
          v708 = 47;
          *(_QWORD *)v702 = v760;
          *(_QWORD *)&v702[8] = v760 + v508;
          *(_QWORD *)&v702[16] = &v709;
          *(_QWORD *)&v702[24] = &v708;
          sub_14032B280(&v660, v702);
          if ( v736 )
            sub_140001660(v760, v736, 1);
          v710 = v660.m128i_i64[1];
          v747 = v660.m128i_i64[0];
          v714 = v661.m128i_i64[0];
        }
        else if ( v736 )
        {
          sub_140001660(v760, v736, 1);
        }
      }
    }
    else
    {
      v764 = 1;
      sub_1406CBAD0(v702);
      v747 = -1;
    }
    sub_14042AE90(
      v702,
      &v608[16],
      8,
      &off_1417887A0,
      v544,
      v551,
      v557,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    if ( *(_QWORD *)v702 == -1 )
    {
      v760 = *(_QWORD *)&v702[8];
      if ( *(_QWORD *)&v702[8] <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v746 = *(_QWORD *)&v702[24];
        v659 = *(_QWORD *)&v702[16];
        goto LABEL_822;
      }
    }
    else
    {
      sub_1406CBAD0(v702);
    }
    v659 = 1;
    v746 = 0;
    v760 = 0;
LABEL_822:
    sub_14042B4E0(v702, &v608[16], 4);
    v510 = *(_QWORD *)v702 == -1;
    v511 = *(_QWORD *)&v702[8] != 0;
    if ( *(_QWORD *)v702 != -1 )
      sub_1406CBAD0(v702);
    sub_14042AE90(
      v702,
      &v608[16],
      5,
      &off_1417887D0,
      v545,
      v552,
      v558,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    if ( *(_QWORD *)v702 == -1 )
    {
      v736 = -1;
      if ( *(_QWORD *)&v702[8] <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_QWORD *)&v702[24] )
        {
          v705 = *(_QWORD *)&v702[24];
          v697 = *(_QWORD *)&v702[16];
          v736 = *(_QWORD *)&v702[8];
        }
        else if ( *(_QWORD *)&v702[8] )
        {
          sub_140001660(*(_QWORD *)&v702[16], *(_QWORD *)&v702[8], 1);
        }
      }
    }
    else
    {
      sub_1406CBAD0(v702);
      v736 = -1;
    }
    sub_14042AE90(
      v702,
      &v608[16],
      6,
      &off_1417887E8,
      v546,
      v553,
      v559,
      v560.m128i_i64[0],
      v560.m128i_i64[1],
      v561.m128i_i64[0],
      v561.m128i_i64[1],
      v562.m128i_i64[0],
      v562.m128i_i64[1],
      v563,
      v564,
      v565,
      v566,
      v567,
      v568.m128i_i64[0],
      v568.m128i_i64[1],
      v569.m128i_i64[0],
      v569.m128i_i64[1]);
    LOBYTE(v475) = v511 && v510;
    if ( *(_QWORD *)v702 != -1 )
    {
      sub_1406CBAD0(v702);
      v476 = -1;
LABEL_835:
      v737 = v767;
      v766 = v699;
      v694 = v734;
LABEL_836:
      v495 = v715;
      v472 = v698;
      v493 = v716;
      v492 = v718;
      v491 = (__int64)v507;
      v494 = v667;
      v489 = v712;
      v490 = __PAIR128__(v696, (unsigned __int64)v700);
      goto LABEL_837;
    }
    v476 = -1;
    if ( *(_QWORD *)&v702[8] > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_835;
    v512 = v699;
    if ( *(_QWORD *)&v702[24] )
    {
      v665 = *(_QWORD *)&v702[24];
      v717 = *(_QWORD *)&v702[16];
      v737 = v767;
      v766 = v699;
      v694 = v734;
      v476 = *(_QWORD *)&v702[8];
      goto LABEL_836;
    }
    v663 = v507;
    if ( *(_QWORD *)&v702[8] )
      sub_140001660(*(_QWORD *)&v702[16], *(_QWORD *)&v702[8], 1);
    v737 = v767;
    v766 = v512;
    v694 = v734;
    v495 = v715;
    v472 = v698;
    v493 = v716;
    v492 = v718;
    v494 = v667;
    v489 = v712;
    v491 = (__int64)v663;
    v490 = __PAIR128__(v696, (unsigned __int64)v700);
LABEL_837:
    v668.m128i_i64[0] = v495;
    v483 = v745;
    v668.m128i_i64[1] = v745;
    v669.m256i_i64[0] = v489;
    *(_OWORD *)&v669.m256i_u64[1] = v490;
    v669.m256i_i64[3] = v491;
    v670 = v492;
    v671 = v493;
    v672 = v494;
    v673 = v760;
    v674 = v659;
    v675 = v746;
    v676 = v761;
    v677 = v472;
    v678 = v695;
    v679 = v747;
    v680 = v710;
    v681 = v714;
    v682 = v736;
    v683 = v697;
    v684 = v705;
    v685 = v476;
    v686 = v717;
    v687 = v665;
    v688 = v694;
    v689 = v766;
    v690 = v737;
    v691 = v2;
    v692 = (int)v474;
    v693 = (char)v475;
    if ( v495 == -2 )
      goto LABEL_864;
    v476 = (__int64)&v588;
    sub_141684120(&v588, &v668.m128i_u64[1], 224);
    v668.m128i_i64[0] = v495;
    v475 = (__m256i *)&v668.m128i_u64[1];
    sub_141684120(&v668.m128i_u64[1], &v588, 224);
    if ( v495 == -1 )
    {
      sub_1406CBAD0(&v668.m128i_u64[1]);
      v473 = (__int64 **)v767;
    }
    else
    {
      v475 = &v588;
      sub_141684120(v600, &v588, 224);
      *(_QWORD *)v702 = v495;
      *(__m128i *)&v702[8] = _mm_loadu_si128((const __m128i *)v600);
      v476 = (__int64)&v668;
      sub_141684120(&v668, &v600[16], 208);
      sub_140473660(&v588, v643, v702, &v668);
      v473 = (__int64 **)v767;
      if ( v588.m256i_i64[0] != -1 )
        sub_14043E9B0(&v588);
    }
  }
  sub_1406CB290(v608, v483);
  v520 = _mm_load_si128((const __m128i *)&v643[16]);
  v521 = _mm_load_si128((const __m128i *)&v643[32]);
  v668 = _mm_load_si128((const __m128i *)v643);
  *(__m128i *)v669.m256i_i8 = v520;
  *(__m128i *)&v669.m256i_u64[2] = v521;
  if ( v579.m128i_i64[0] != -1 )
  {
LABEL_868:
    v742 = 0;
    sub_1406CBAD0(&v579);
  }
  v759 = 0;
  HIDWORD(_RAX) = (unsigned __int64)sub_1406CBC60(&v575) >> 32;
  if ( v666 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v662, v666, 1) >> 32;
  if ( v657.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v657.m128i_i64[1], v657.m128i_i64[0], 1) >> 32;
  if ( v645.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v645.m128i_i64[1], v645.m128i_i64[0], 1) >> 32;
  if ( v647.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v647.m128i_i64[1], v647.m128i_i64[0], 1) >> 32;
  if ( v655.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v655.m128i_i64[1], v655.m128i_i64[0], 1) >> 32;
  if ( v635 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v636, v635, 1) >> 32;
  if ( v637 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v638, v637, 1) >> 32;
  if ( v571 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v572, v571, 1) >> 32;
  if ( v597 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v598, v597, 1) >> 32;
  if ( v573 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v574, v573, 1) >> 32;
  v523 = v641.m256i_i64[1];
  if ( v641.m256i_i64[1] )
  {
    v524 = v641.m256i_i64[3];
    if ( v641.m256i_i64[3] )
    {
      v525 = v641.m256i_i64[0];
      v526 = (const __m128i *)(v641.m256i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v641.m256i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v528 = _mm_load_si128(v526);
            v525 -= 384;
            ++v526;
            _R12D = _mm_movemask_epi8(v528) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v529 = -3 * _RAX;
        v530 = *(_QWORD *)(v525 + 8 * v529 - 24);
        if ( v530 )
          sub_140001660(*(_QWORD *)(v525 + 8 * v529 - 16), v530, 1);
        --v524;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v524 );
    }
    v114 = (24 * v523 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v115 = v114 + v523 + 17;
    if ( v115 )
LABEL_898:
      sub_140001660(v641.m256i_i64[0] - v114, v115, 16);
  }
LABEL_899:
  v769 = 0;
  sub_1406CB500(&v649);
LABEL_20:
  v31 = _mm_load_si128((const __m128i *)&v669);
  v32 = _mm_load_si128((const __m128i *)&v669.m256i_u64[2]);
  v568 = _mm_load_si128(&v668);
  v569 = v31;
  v570 = v32;
  v33 = *(_QWORD *)(a2 + 104);
  v34 = *(_QWORD *)(a2 + 112);
  v770 = 1;
  v35 = sub_141470CD0(v20, v19);
  if ( *(_BYTE *)(v35 + 16) == 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(_QWORD *)(v35 + 8);
  }
  else
  {
    v770 = 1;
    v532 = v35;
    v36 = sub_141486EF0();
    v35 = v532;
    *(_QWORD *)v532 = v36;
    *(_QWORD *)(v532 + 8) = v37;
    *(_BYTE *)(v532 + 16) = 1;
  }
  *(_QWORD *)v35 = v36 + 1;
  *(_OWORD *)&v600[16] = *(&off_141786750 + 1);
  *(_OWORD *)v600 = off_141786750;
  *(_QWORD *)&v600[32] = v36;
  *(_QWORD *)&v600[40] = v37;
  sub_141486710(v608, v33, v34);
  if ( *(_DWORD *)v608 == 2 )
  {
    sub_1401DD260(*(_QWORD *)&v608[8]);
    v38 = *(_QWORD *)v600;
    v668 = *(__m128i *)&v600[8];
    *(_OWORD *)v669.m256i_i8 = *(_OWORD *)&v600[24];
    v669.m256i_i64[2] = *(_QWORD *)&v600[40];
    goto LABEL_24;
  }
  sub_14148D130(v608, v33, v34);
  v50 = *(_QWORD *)&v608[8];
  if ( *(_QWORD *)v608 == -1 )
  {
    v770 = 1;
    sub_14067F5D0(v600);
    v78 = v639;
    *v639 = 2;
    v78[1] = v50;
    goto LABEL_94;
  }
  v745 = *(_QWORD *)v608;
  *(_QWORD *)v608 = 0;
  *(_QWORD *)&v608[8] = *(_QWORD *)&v608[16];
  v747 = v50;
  *(_QWORD *)&v608[16] = v50;
  *(_QWORD *)&v608[24] = *(_QWORD *)&v608[8];
  *(_OWORD *)&v608[32] = __PAIR128__(*(unsigned __int64 *)&v608[8], 0);
  *(_QWORD *)&v608[48] = 0xA0000000ALL;
  LOBYTE(v609) = 1;
  LOWORD(v610) = 0;
  v51 = 0;
  while ( 2 )
  {
    if ( (v51 & 1) == 0 )
    {
      v54 = *(_QWORD *)&v608[16];
      sub_1407BC790(&v588, &v608[16]);
      if ( v588.m256i_i32[0] == 1 )
      {
        v55 = *(_QWORD *)v608;
        *(_QWORD *)v608 = v588.m256i_i64[2];
        v56 = (char *)(v588.m256i_i64[2] - v55);
        v57 = v55 + v54;
        if ( v588.m256i_i64[2] == v55 )
          goto LABEL_48;
LABEL_42:
        if ( v56[v57 - 1] == 10 )
        {
          if ( v56 == (char *)1 )
          {
            v56 = nullptr;
          }
          else if ( v56[v57 - 2] == 13 )
          {
            v56 -= 2;
          }
          else
          {
            --v56;
          }
        }
      }
      else
      {
        if ( BYTE1(v610) )
          break;
        BYTE1(v610) = 1;
        v56 = (char *)(*(_QWORD *)&v608[8] - *(_QWORD *)v608);
        if ( ((unsigned __int8)v610 | (*(_QWORD *)&v608[8] != *(_QWORD *)v608)) != 1 )
          break;
        v57 = *(_QWORD *)&v608[16] + *(_QWORD *)v608;
        if ( v56 )
          goto LABEL_42;
      }
LABEL_48:
      sub_14033BC10(v57, v56);
      if ( v58 )
      {
        v588.m256i_i64[0] = v57;
        v588.m256i_i64[1] = (__int64)v56;
        *(_OWORD *)&v588.m256i_u64[2] = 0;
        v589 = v57;
        hObject[0] = v56;
        sub_1408A6200(&v579, &v588);
        if ( v579.m128i_i8[0] == -1 )
        {
          sub_1406C9CF0((__int64)&v579);
        }
        else
        {
          v59 = _mm_loadu_si128(&v579);
          *(__m128i *)&v702[16] = _mm_loadu_si128(&v580);
          *(__m128i *)v702 = v59;
          v60 = sub_141433D50(aId_3, 2, v702);
          v61 = 1;
          if ( !v60 || *(_BYTE *)v60 != 3 )
            goto LABEL_56;
          v62 = *(_QWORD *)(v60 + 24);
          if ( v62 < 0 )
          {
            v79 = 0;
            goto LABEL_82;
          }
          v760 = *(_QWORD *)(v60 + 24);
          if ( v62 )
          {
            v63 = *(_QWORD *)(v60 + 16);
            nullsub_1(v62);
            v767 = sub_140001650(v760, 1);
            if ( !v767 )
            {
              v767 = v760;
              v79 = 1;
LABEL_82:
              sub_1416C2D4B(v79, v767);
            }
            sub_141684120(v767, v63, v760);
            v61 = 0;
          }
          else
          {
LABEL_56:
            v767 = 1;
            v760 = 0;
          }
          v758 = 1;
          v64 = sub_141433D50(aThreadName, 11, v702);
          if ( !v64 || *(_BYTE *)v64 != 3 )
            goto LABEL_63;
          v65 = *(_QWORD *)(v64 + 24);
          if ( v65 < 0 )
          {
            v93 = 0;
            goto LABEL_99;
          }
          v736 = *(_QWORD *)(v64 + 24);
          if ( v65 )
          {
            v66 = *(_QWORD *)(v64 + 16);
            nullsub_1(v65);
            v761 = sub_140001650(v736, 1);
            if ( !v761 )
            {
              v761 = v736;
              v93 = 1;
LABEL_99:
              v758 = 1;
              sub_1416C2D4B(v93, v761);
            }
            sub_141684120(v761, v66, v736);
          }
          else
          {
LABEL_63:
            v761 = 1;
            v736 = 0;
          }
          v740 = 1;
          v67 = sub_141433D50("updated_atarchivedstate_.sqlitesqlite_home", 10, v702);
          v68 = 0.0;
          if ( v67
            && *(_BYTE *)v67 == 3
            && (v69 = *(_QWORD *)(v67 + 16),
                v70 = *(_QWORD *)(v67 + 24),
                v740 = 1,
                sub_140FFC360(&v588, v69, v70),
                v588.m256i_i32[0]) )
          {
            v71 = (v588.m256i_i32[0] >> 13) - 1;
            v72 = 0;
            if ( v588.m256i_i32[0] >> 13 <= 0 )
            {
              v73 = (1 - (v588.m256i_i32[0] >> 13)) / 0x190u + 1;
              v71 += 400 * v73;
              v72 = -146097 * v73;
            }
            v74 = v736;
            v68 = (double)(v588.m256i_i32[1]
                         + 86400
                         * (((v71 / 100) >> 2)
                          + ((1461 * v71) >> 2)
                          + v72
                          + (((unsigned __int32)v588.m256i_i32[0] >> 4) & 0x1FF)
                          - v71 / 100
                          - 719163));
            v75 = v760;
            if ( !v61 )
            {
LABEL_70:
              v575.m128i_i64[0] = v75;
              v575.m128i_i64[1] = v767;
              v576.m128i_i64[0] = v75;
              v588.m256i_i64[0] = v74;
              v588.m256i_i64[1] = v761;
              v588.m256i_i64[2] = v74;
              *(double *)&v588.m256i_i64[3] = v68;
              v740 = 0;
              sub_1404739F0(&v649, v600, &v575, &v588);
              v76 = v649.m128i_i64[0];
              if ( v649.m128i_i64[0] != -1 && v649.m128i_i64[0] )
              {
                v77 = v649.m128i_i64[1];
                goto LABEL_78;
              }
              goto LABEL_79;
            }
          }
          else
          {
            v75 = v760;
            v74 = v736;
            if ( !v61 )
              goto LABEL_70;
          }
          if ( v74 )
            sub_140001660(v761, v74, 1);
          if ( v75 )
          {
            v77 = v767;
            v76 = v75;
LABEL_78:
            sub_140001660(v77, v76, 1);
          }
LABEL_79:
          sub_1400104F0(v702);
        }
      }
      v51 = BYTE1(v610);
      continue;
    }
    break;
  }
  v38 = *(_QWORD *)v600;
  v668 = *(__m128i *)&v600[8];
  *(_OWORD *)v669.m256i_i8 = *(_OWORD *)&v600[24];
  v669.m256i_i64[2] = *(_QWORD *)&v600[40];
  if ( v745 )
    sub_140001660(v747, v745, 1);
LABEL_24:
  v39 = _mm_load_si128((const __m128i *)&v669);
  *(__m128i *)&v643[8] = _mm_load_si128(&v668);
  *(__m128i *)&v643[24] = v39;
  v644 = v669.m256i_i64[2];
  *(_QWORD *)v643 = v38;
  v40 = *(__int64 **)(a2 + 8);
  v41 = *(_QWORD *)(a2 + 16);
  v739 = 1;
  v659 = v41;
  sub_141473FA0((unsigned int)v600, (_DWORD)v40, v41, (unsigned int)&unk_14178A9B0, 24);
  v42 = *(_QWORD *)&v600[16];
  v767 = *(_QWORD *)&v600[8];
  sub_141486710(v608, *(_QWORD *)&v600[8], *(_QWORD *)&v600[16]);
  if ( *(_DWORD *)v608 == 2 )
  {
    sub_1401DD260(*(_QWORD *)&v608[8]);
    v45 = sub_141470CD0(v44, v43);
    v46 = v45;
    if ( *(_BYTE *)(v45 + 16) == 1 )
    {
      v47 = *(_QWORD *)v45;
      v48 = *(_QWORD *)(v45 + 8);
    }
    else
    {
      v47 = sub_141486EF0();
      v48 = v535;
      *(_QWORD *)v46 = v47;
      *(_QWORD *)(v46 + 8) = v535;
      *(_BYTE *)(v46 + 16) = 1;
    }
    *(_QWORD *)v46 = v47 + 1;
    memset(v702, 0, 24);
    v49 = (const __m128i *)&unk_141786740;
    goto LABEL_138;
  }
  sub_14148D130(v608, v767, v42);
  v52 = *(_QWORD *)&v608[8];
  if ( *(_QWORD *)v608 != -1 )
  {
    v745 = *(_QWORD *)v608;
    *(_OWORD *)v608 = *(_OWORD *)&v608[8];
    *(_OWORD *)&v608[16] = 0;
    v760 = v52;
    *(_OWORD *)&v608[32] = __PAIR128__(*(unsigned __int64 *)&v608[8], v52);
    sub_1408A6200(&v668, v608);
    v608[0] = 0;
    if ( v668.m128i_i8[0] == -1 )
    {
      *(__m128i *)&v588.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v608[16]);
      v588.m256i_i8[0] = v608[0];
      *(__int64 *)((char *)v588.m256i_i64 + 1) = *(_QWORD *)&v608[1];
      *(__int32 *)((char *)&v588.m256i_i32[2] + 1) = *(_DWORD *)&v608[9];
      *(__int16 *)((char *)&v588.m256i_i16[6] + 1) = *(_WORD *)&v608[13];
      v588.m256i_i8[15] = v608[15];
      sub_1406C9CF0((__int64)&v668);
    }
    else
    {
      v53 = _mm_loadu_si128(&v668);
      *(__m128i *)&v588.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v669);
      *(__m128i *)v588.m256i_i8 = v53;
      sub_1400104F0(v608);
    }
    v104 = sub_141433D50(aElectronSavedW, 30, &v588);
    if ( v104 && *(_BYTE *)v104 == 4 )
    {
      v107 = *(_QWORD *)(v104 + 16);
      v108 = *(_QWORD *)(v104 + 24);
      v109 = sub_141470CD0(v106, v105);
      v110 = v109;
      if ( *(_BYTE *)(v109 + 16) == 1 )
      {
        v47 = *(_QWORD *)v109;
        v48 = *(_QWORD *)(v109 + 8);
      }
      else
      {
        v47 = sub_141486EF0();
        v48 = v537;
        *(_QWORD *)v110 = v47;
        *(_QWORD *)(v110 + 8) = v537;
        *(_BYTE *)(v110 + 16) = 1;
      }
      *(_QWORD *)v110 = v47 + 1;
      *(_OWORD *)&v608[16] = *(&off_141786750 + 1);
      *(_OWORD *)v608 = off_141786750;
      *(_QWORD *)&v608[32] = v47;
      *(_QWORD *)&v608[40] = v48;
      if ( v108 )
      {
        v111 = (_QWORD *)(v107 + 24);
        do
        {
          if ( *((_BYTE *)v111 - 24) == 3 )
          {
            sub_1407531F0(&v668, *(v111 - 1), *v111);
            sub_140474440(v608, &v668);
          }
          v111 += 4;
          --v108;
        }
        while ( v108 );
        v49 = *(const __m128i **)v608;
        v48 = *(_QWORD *)&v608[40];
        v47 = *(_QWORD *)&v608[32];
      }
      else
      {
        v49 = (const __m128i *)&unk_141786740;
      }
      *(_QWORD *)&v650 = *(_QWORD *)&v608[24];
      v649 = _mm_loadu_si128((const __m128i *)&v608[8]);
    }
    else
    {
      v112 = sub_141470CD0(v106, v105);
      v113 = v112;
      if ( *(_BYTE *)(v112 + 16) == 1 )
      {
        v47 = *(_QWORD *)v112;
        v48 = *(_QWORD *)(v112 + 8);
      }
      else
      {
        v47 = sub_141486EF0();
        v48 = v536;
        *(_QWORD *)v113 = v47;
        *(_QWORD *)(v113 + 8) = v536;
        *(_BYTE *)(v113 + 16) = 1;
      }
      *(_QWORD *)v113 = v47 + 1;
      v649 = 0;
      *(_QWORD *)&v650 = 0;
      v49 = (const __m128i *)&unk_141786740;
    }
    *(_QWORD *)&v702[16] = v650;
    *(__m128i *)v702 = _mm_load_si128(&v649);
    sub_1400104F0(&v588);
    if ( v745 )
      sub_140001660(v760, v745, 1);
LABEL_138:
    *(__m128i *)&v641.m256i_u64[1] = _mm_load_si128((const __m128i *)v702);
    v641.m256i_i64[3] = *(_QWORD *)&v702[16];
    v666 = v49;
    v641.m256i_i64[0] = (__int64)v49;
    v642.m128i_i64[0] = v47;
    v642.m128i_i64[1] = v48;
    if ( *(_QWORD *)v600 )
      sub_140001660(v767, *(_QWORD *)v600, 1);
    v757 = 1;
    _RAX = sub_1414740B0(v40, v659);
    v736 = v38;
    v698 = v40;
    if ( _RAX )
    {
      v757 = 1;
      sub_141473FA0((unsigned int)v608, _RAX, (_DWORD)v127, (unsigned int)&unk_1417888DD, 9);
      v767 = *(_QWORD *)&v608[8];
      sub_141473FA0((unsigned int)&v668, *(_DWORD *)&v608[8], *(_DWORD *)&v608[16], (unsigned int)&unk_1417888E6, 5);
      v127 = *(const __m128i **)v608;
      if ( *(_QWORD *)v608 )
        sub_140001660(v767, *(_QWORD *)v608, 1);
      v662 = v668.m128i_i64[1];
      v694 = v668.m128i_i64[0];
      HIDWORD(_RAX) = v669.m256i_i32[1];
      v564 = v669.m256i_i64[0];
    }
    else
    {
      v694 = -1;
    }
    v577 = v562;
    v576 = v561;
    v575 = v560;
    v129 = v568.m128i_i64[0];
    v130 = v569.m128i_i64[1];
    v131 = (const __m128i *)(v568.m128i_i64[0] + 16);
    _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v568.m128i_i64[0]));
    while ( v130 )
    {
      if ( !(_WORD)_R13D )
      {
        do
        {
          v133 = _mm_load_si128(v131);
          v129 -= 3712;
          ++v131;
          _R13D = _mm_movemask_epi8(v133) ^ 0xFFFF;
        }
        while ( !_R13D );
      }
      __asm { tzcnt   eax, r13d }
      v134 = -232 * _RAX;
      sub_14149C500(&v668, v129 - 232 * _RAX - 232);
      sub_14046CC10(v608, &v575, &v668);
      _R13D &= _R13D - 1;
      --v130;
      HIDWORD(_RAX) = *(_DWORD *)&v608[4];
      if ( *(_QWORD *)v608 != -1 )
      {
        v767 = *(_QWORD *)v608;
        v135 = v129 + v134;
        v136 = _mm_loadu_si128((const __m128i *)&v608[8]);
        v137 = *(_QWORD *)&v608[24];
        v138 = *(_QWORD *)&v608[32];
        if ( *(_QWORD *)(v135 - 112) == -1 )
        {
          v668.m128i_i64[0] = -1;
          v139 = 0;
          goto LABEL_159;
        }
        v760 = *(_QWORD *)&v608[8];
        sub_14149C500(&v668, v135 - 112);
        if ( v668.m128i_i64[0] == -1 )
          goto LABEL_154;
        v747 = v668.m128i_i64[1];
        v761 = v668.m128i_i64[0];
        sub_141486710(v608, v668.m128i_i64[1], v669.m256i_i64[0]);
        if ( *(_DWORD *)v608 == 2 )
        {
          sub_1401DD260(*(_QWORD *)&v608[8]);
LABEL_154:
          v139 = 0;
          goto LABEL_159;
        }
        v745 = (__int64)v609;
        v588.m256i_i64[0] = *(_QWORD *)&v608[48];
        sub_141475530(v608, &v588, 3577643008LL, 27111902);
        if ( *(_DWORD *)v608 == 1 )
        {
          v139 = 1;
          goto LABEL_159;
        }
        v140 = _mm_sub_pd(
                 (__m128d)_mm_unpacklo_ps((__m128)*(unsigned __int64 *)&v608[8], (__m128)0x4530000043300000uLL),
                 (__m128d)xmmword_1416C6280);
        v141 = (double)*(int *)&v608[16] / 1000000000.0 + _mm_unpackhi_pd(v140, v140).m128d_f64[0] + v140.m128d_f64[0];
        v139 = 1;
        if ( v141 <= 0.0 )
LABEL_159:
          v141 = *(double *)(v135 - 16);
        *(_QWORD *)&v608[16] = v669.m256i_i64[0];
        *(__m128i *)v608 = v668;
        v128 = *(unsigned __int8 *)(v135 - 4);
        v127 = *(const __m128i **)v137;
        v142 = *(_QWORD *)(v137 + 8);
        v143 = v138 & v142;
        _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v137 + (v138 & v142))));
        if ( !(_DWORD)_R10 )
        {
          v149 = 16;
          do
          {
            v143 = v142 & (v149 + v143);
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v127 + v143)));
            v149 += 16;
          }
          while ( !(_DWORD)_R10 );
        }
        __asm { tzcnt   r10d, r10d }
        _R10 = v142 & (v143 + _R10);
        v146 = v127->m128i_i8[_R10];
        if ( v146 >= 0 )
        {
          _R9D = _mm_movemask_epi8(_mm_load_si128(v127));
          __asm { tzcnt   r10d, r9d }
          v146 = v127->m128i_i8[_R10];
        }
        v147 = v138 >> 57;
        v127->m128i_i8[_R10] = v147;
        v127[1].m128i_i8[v142 & (_R10 - 16)] = v147;
        v148 = -5 * _R10;
        v127[v148 - 5].m128i_i64[0] = v767;
        *(__m128i *)((char *)&v127[v148 - 4] - 8) = v136;
        *((_QWORD *)&v127[v148 - 3] - 1) = v139;
        v127[v148 - 3].m128i_i64[0] = v745;
        *(const __m128i *)((char *)&v127[v148 - 2] - 8) = *(const __m128i *)v608;
        *((_QWORD *)&v127[v148 - 1] - 1) = *(_QWORD *)&v608[16];
        *(double *)v127[v148 - 1].m128i_i64 = v141;
        v127[v148 - 1].m128i_i8[8] = v128;
        _RAX = v146 & 1;
        *(__m128i *)(v137 + 16) = _mm_sub_epi64(
                                    _mm_loadu_si128((const __m128i *)(v137 + 16)),
                                    (__m128i)_mm_shuffle_ps(
                                               (__m128)_mm_cvtsi32_si128(_RAX),
                                               (__m128)xmmword_141748CD0,
                                               228));
        continue;
      }
    }
    v151 = sub_141470CD0(v128, v127);
    v152 = v151;
    if ( *(_BYTE *)(v151 + 16) == 1 )
    {
      _RAX = *(_QWORD *)v151;
      v154 = *(_QWORD *)(v152 + 8);
    }
    else
    {
      _RAX = sub_141486EF0();
      *(_QWORD *)v152 = _RAX;
      *(_QWORD *)(v152 + 8) = v154;
      *(_BYTE *)(v152 + 16) = 1;
    }
    _RCX = _RAX + 1;
    *(_QWORD *)v152 = _RAX + 1;
    v580 = *((__m128i *)&off_141786750 + 1);
    v579 = (__m128i)off_141786750;
    v581[0] = _RAX;
    v581[1] = v154;
    v156 = v575.m128i_i64[0];
    v157 = v576.m128i_i64[1];
    v158 = (const __m128i *)(v575.m128i_i64[0] + 16);
    _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v575.m128i_i64[0]));
    v160 = 0;
    v161 = _mm_load_si128((const __m128i *)&xmmword_1417863A0);
    v162 = _mm_load_si128((const __m128i *)&xmmword_1417863B0);
    v163 = _mm_load_si128((const __m128i *)&xmmword_1417863C0);
    v164 = _mm_load_si128((const __m128i *)&xmmword_1417863D0);
    v165 = _mm_load_si128((const __m128i *)&xmmword_141786380);
    v166 = _mm_load_si128((const __m128i *)&xmmword_141786390);
    v167 = _mm_loadl_epi64((const __m128i *)&qword_141786360);
LABEL_170:
    while ( v157 )
    {
      if ( !(_WORD)_R13D )
      {
        do
        {
          v168 = _mm_load_si128(v158);
          v156 -= 1280;
          ++v158;
          _R13D = _mm_movemask_epi8(v168) ^ 0xFFFF;
        }
        while ( !_R13D );
      }
      __asm { tzcnt   ecx, r13d }
      _RAX = _R13D & (unsigned int)(_R13D - 1);
      _R13D &= _R13D - 1;
      _RCX = -_RCX;
      v169 = 80 * _RCX;
      --v157;
      if ( *(_QWORD *)(v156 + 80 * _RCX - 40) != -1 )
      {
        v170 = *(_QWORD *)(v156 + v169 - 32);
        v171 = *(_QWORD *)(v156 + v169 - 24);
        _RAX = sub_1414741E0(v170, v171);
        if ( (_BYTE)_RAX )
        {
          v660.m128i_i64[0] = v170;
          v660.m128i_i64[1] = v171;
          *(_DWORD *)v608 = 0;
          *(_QWORD *)&v608[8] = 0;
          *(_DWORD *)&v608[16] = 7;
          *(_QWORD *)&v608[25] = 0;
          *(_QWORD *)&v608[20] = 0x100000000LL;
          v172 = sub_141481480(v608, v170, v171);
          v175 = (void *)v173;
          if ( (v172 & 1) != 0 )
          {
            v668.m128i_i64[0] = 2;
            v668.m128i_i64[1] = v173;
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v588.m256i_i64[0] = (__int64)&v660;
              v588.m256i_i64[1] = (__int64)sub_14041F680;
              v588.m256i_i64[2] = (__int64)&v668;
              v588.m256i_i64[3] = (__int64)sub_140B036A0;
              *(_QWORD *)v608 = 0;
              *(_QWORD *)&v608[8] = aCodexmateLibCo_28;
              *(_OWORD *)&v608[16] = 0x1Du;
              *(_QWORD *)&v608[32] = aSrcCoreSession;
              *(_QWORD *)&v608[40] = 20;
              *(_QWORD *)&v608[48] = 2;
              v609 = aCodexmateLibCo_28;
              *(_QWORD *)&v610 = 29;
              *((_QWORD *)&v610 + 1) = 0x3800000001LL;
              *(_QWORD *)&v611 = &unk_14178A9C8;
              *((_QWORD *)&v611 + 1) = &v588;
              sub_1412C36A0(&v707, v608);
            }
            HIDWORD(_RAX) = (unsigned __int64)sub_1406CDA20(&v668) >> 32;
            continue;
          }
          nullsub_1(v174);
          v176 = sub_140001650(0x2000, 1);
          if ( !v176 )
          {
            v767 = (__int64)v175;
            sub_1416C2D4B(1, 0x2000);
          }
          v761 = v156 + v169 - 80;
          *(_OWORD *)&v588.m256i_u64[2] = v160;
          LOBYTE(v589) = 0;
          *(_QWORD *)&v608[16] = -1;
          *(_QWORD *)&v608[40] = -1;
          *(_QWORD *)v608 = 0;
          *(_QWORD *)&v610 = -1;
          *((_QWORD *)&v611 + 1) = -1;
          v617.m128i_i32[0] = 0;
          v613.m128i_i64[0] = -1;
          v615.m128i_i64[0] = -1;
          v588.m256i_i64[0] = v176;
          v588.m256i_i64[1] = 0x2000;
          hObject[0] = v175;
          v760 = 0;
          while ( 1 )
          {
LABEL_182:
            sub_140423A60(v702, &v588);
            if ( *(_QWORD *)v702 == -2 )
            {
              v261 = v17;
              v262 = v16;
              v263 = v167;
              v264 = v166;
              v265 = v165;
              v266 = v164;
              v267 = v163;
              v268 = v162;
              v269 = v161;
              if ( v588.m256i_i64[1] )
                sub_140001660(v588.m256i_i64[0], v588.m256i_i64[1], 1);
              CloseHandle(hObject[0]);
              v270 = *(_OWORD *)&v608[8];
              sub_141684120(&v588.m256i_u64[3], &v608[24], 144);
              v588.m256i_i64[0] = v760;
              *(_OWORD *)&v588.m256i_u64[1] = v270;
              v719 = 1;
              sub_14149C500(v600, v761);
              sub_141684120(v608, &v588, 168);
              v719 = 0;
              HIDWORD(_RAX) = (unsigned __int64)sub_140473D30(&v668, &v579, v600, v608) >> 32;
              v161 = v269;
              if ( v668.m128i_i32[0] != 2 )
                HIDWORD(_RAX) = (unsigned __int64)sub_14043EAB0(&v668) >> 32;
              v162 = v268;
              v163 = v267;
              v164 = v266;
              v165 = v265;
              v166 = v264;
              v167 = v263;
              v16 = v262;
              v17 = v261;
              v160 = 0;
              goto LABEL_170;
            }
            if ( *(_QWORD *)v702 != -1 )
              break;
            sub_1401DD260(*(_QWORD *)&v702[8]);
          }
          v745 = *(_QWORD *)v702;
          v177 = *(_QWORD *)&v702[16];
          v767 = *(_QWORD *)&v702[8];
          sub_14033BC10(*(_QWORD *)&v702[8], *(_QWORD *)&v702[16]);
          if ( !v178 )
            goto LABEL_273;
          v668.m128i_i64[0] = v767;
          v668.m128i_i64[1] = v177;
          *(_OWORD *)v669.m256i_i8 = v160;
          v669.m256i_i64[2] = v767;
          v669.m256i_i64[3] = v177;
          sub_1408A6200(v600, &v668);
          if ( v600[0] == 0xFF )
          {
            sub_1406C9CF0((__int64)v600);
            goto LABEL_273;
          }
          v179 = *(double *)v600;
          v650 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v600[16]);
          v649 = *(__m128i *)v600;
          v180 = sub_141433D50(aType_6, 4, &v649);
          if ( !v180 || *(_BYTE *)v180 != 3 )
            goto LABEL_272;
          v181 = *(_QWORD *)(v180 + 16);
          v182 = *(_QWORD *)(v180 + 24);
          if ( v182 != 13 )
          {
            if ( v182 == 12 && !(*(_QWORD *)v181 ^ 0x5F6E6F6973736573LL | *(unsigned int *)(v181 + 8) ^ 0x6174656DLL) )
            {
              if ( (_QWORD)v610 == -1 )
              {
                v183 = sub_14142E200(&v649, aPayloadCwd, 12);
                v185 = -1;
                if ( v183 && *(_BYTE *)v183 == 3 )
                {
                  v185 = *(_QWORD *)(v183 + 24);
                  if ( v185 < 0 )
                  {
                    v516 = 0;
                    goto LABEL_854;
                  }
                  if ( v185 )
                  {
                    v186 = *(_QWORD *)(v183 + 16);
                    nullsub_1(v184);
                    v187 = sub_140001650(v185, 1);
                    if ( !v187 )
                    {
                      v766 = v185;
                      v516 = 1;
LABEL_854:
                      sub_1416C2D4B(v516, v766);
                    }
                    v766 = v187;
                    v179 = sub_141684120(v187, v186, v185);
                  }
                  else
                  {
                    v766 = 1;
                    v185 = 0;
                  }
                }
                *(_QWORD *)&v610 = v185;
                *((_QWORD *)&v610 + 1) = v766;
                *(_QWORD *)&v611 = v185;
              }
              v194 = v760 == 0;
              v760 = 1;
              if ( v194 )
              {
                v195 = sub_14142E200(&v649, aPayloadTimesta_0, 18);
                if ( v195
                  && *(_BYTE *)v195 == 3
                  && (sub_140FFC360(&v668, *(_QWORD *)(v195 + 16), *(_QWORD *)(v195 + 24)), v668.m128i_i32[0]) )
                {
                  v196 = (v668.m128i_i32[0] >> 13) - 1;
                  v197 = 0;
                  if ( v668.m128i_i32[0] >> 13 <= 0 )
                  {
                    v198 = (1 - (v668.m128i_i32[0] >> 13)) / 0x190u + 1;
                    v196 += 400 * v198;
                    v197 = -146097 * v198;
                  }
                  v179 = (double)(v668.m128i_i32[1]
                                + 86400
                                * (((v196 / 100) >> 2)
                                 + ((1461 * v196) >> 2)
                                 + v197
                                 + (((unsigned __int32)v668.m128i_i32[0] >> 4) & 0x1FF)
                                 - v196 / 100
                                 - 719163));
                  v199 = 1;
                }
                else
                {
                  v199 = 0;
                }
                v760 = v199;
                *(_QWORD *)v608 = v199;
                *(double *)&v608[8] = v179;
              }
              if ( *((_QWORD *)&v611 + 1) == -1 )
              {
                v200 = sub_14142E200(&v649, aPayloadSourceS, 54);
                v202 = -1;
                if ( v200 && *(_BYTE *)v200 == 3 )
                {
                  v202 = *(_QWORD *)(v200 + 24);
                  if ( v202 < 0 )
                  {
                    v517 = 0;
                    goto LABEL_858;
                  }
                  if ( v202 )
                  {
                    v203 = *(_QWORD *)(v200 + 16);
                    nullsub_1(v201);
                    v204 = sub_140001650(v202, 1);
                    if ( !v204 )
                    {
                      v710 = v202;
                      v517 = 1;
LABEL_858:
                      sub_1416C2D4B(v517, v710);
                    }
                    v710 = v204;
                    sub_141684120(v204, v203, v202);
                  }
                  else
                  {
                    v710 = 1;
                    v202 = 0;
                  }
                }
                *((_QWORD *)&v611 + 1) = v202;
                *(_QWORD *)&v612 = v710;
                *((_QWORD *)&v612 + 1) = v202;
              }
              v205 = sub_14142E200(&v649, aPayloadSourceS_0, 43);
              if ( !v205 )
                goto LABEL_238;
              if ( *(_BYTE *)v205 != 2 )
                goto LABEL_238;
              v206 = *(_QWORD *)(v205 + 8);
              if ( v206 == 2 )
                goto LABEL_238;
              if ( (_DWORD)v206 == 1 )
              {
                v207 = *(_QWORD *)(v205 + 16);
                goto LABEL_239;
              }
              v207 = *(_QWORD *)(v205 + 16);
              if ( v207 < 0 )
LABEL_238:
                LODWORD(v207) = v617.m128i_i32[0];
LABEL_239:
              v617.m128i_i32[0] = v207;
              if ( v613.m128i_i64[0] == -1 )
              {
                v208 = sub_14142E200(&v649, aPayloadAgentNi, 23);
                v210 = -1;
                if ( v208 && *(_BYTE *)v208 == 3 )
                {
                  v210 = *(_QWORD *)(v208 + 24);
                  if ( v210 < 0 )
                  {
                    v518 = 0;
                    goto LABEL_860;
                  }
                  if ( v210 )
                  {
                    v211 = *(_QWORD *)(v208 + 16);
                    nullsub_1(v209);
                    v212 = sub_140001650(v210, 1);
                    if ( !v212 )
                    {
                      v697 = v210;
                      v518 = 1;
LABEL_860:
                      sub_1416C2D4B(v518, v697);
                    }
                    v697 = v212;
                    sub_141684120(v212, v211, v210);
                  }
                  else
                  {
                    v697 = 1;
                    v210 = 0;
                  }
                }
                v613.m128i_i64[0] = v210;
                v613.m128i_i64[1] = v697;
                v614 = (__m128i *)v210;
              }
              if ( v615.m128i_i64[0] == -1 )
              {
                v225 = sub_14142E200(&v649, aPayloadAgentRo, 19);
                v227 = -1;
                if ( v225 && *(_BYTE *)v225 == 3 )
                {
                  v227 = *(_QWORD *)(v225 + 24);
                  if ( v227 < 0 )
                  {
                    v519 = 0;
                    goto LABEL_862;
                  }
                  if ( v227 )
                  {
                    v228 = *(_QWORD *)(v225 + 16);
                    nullsub_1(v226);
                    v229 = sub_140001650(v227, 1);
                    if ( !v229 )
                    {
                      v695 = v227;
                      v519 = 1;
LABEL_862:
                      sub_1416C2D4B(v519, v695);
                    }
                    v695 = v229;
                    sub_141684120(v229, v228, v227);
                  }
                  else
                  {
                    v695 = 1;
                    v227 = 0;
                  }
                }
                v615.m128i_i64[0] = v227;
                v615.m128i_i64[1] = v695;
                v616 = v227;
              }
            }
LABEL_272:
            sub_1400104F0(&v649);
LABEL_273:
            if ( v745 )
              sub_140001660(v767, v745, 1);
            goto LABEL_182;
          }
          if ( *(_QWORD *)v181 ^ 0x65736E6F70736572LL | *(_QWORD *)(v181 + 5) ^ 0x6D6574695F65736ELL )
            goto LABEL_272;
          v188 = *(_QWORD *)&v608[16];
          if ( *(_QWORD *)&v608[16] != -1 && *(_QWORD *)&v608[40] != -1 )
            goto LABEL_272;
          v737 = *(_QWORD *)&v608[40];
          v189 = (void *)sub_141433D50(aPayload_1, 7, &v649);
          if ( !v189 )
            v189 = &unk_14178AC20;
          v190 = sub_141433D50(aType_6, 4, v189);
          if ( !v190
            || *(_BYTE *)v190 != 3
            || *(_QWORD *)(v190 + 24) != 7
            || **(_DWORD **)(v190 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v190 + 16) + 3LL) ^ 0x65676173 )
          {
            goto LABEL_272;
          }
          v191 = sub_141433D50(aContent_4, 7, v189);
          if ( v191 && *(_BYTE *)v191 == 4 )
          {
            sub_1402CE260(&v668, *(_QWORD *)(v191 + 16), *(_QWORD *)(v191 + 24));
            *(__m128i *)v600 = v668;
            v192 = v669.m256i_i64[0];
            *(_QWORD *)&v600[16] = v669.m256i_i64[0];
            v193 = v668.m128i_i64[1];
          }
          else
          {
            *(_QWORD *)v600 = 0;
            *(_QWORD *)&v600[8] = 8;
            *(_QWORD *)&v600[16] = 0;
            v193 = 8;
            v192 = 0;
          }
          v668.m128i_i64[0] = 0;
          v668.m128i_i64[1] = 8;
          v669.m256i_i64[0] = 0;
          v746 = v192;
          v213 = v193 + 32 * v192;
          v705 = v193;
          while ( v193 != v213 )
          {
            v214 = sub_141433D50(aText_6, 4, v193);
            v193 += 32;
            if ( v214 && *(_BYTE *)v214 == 3 )
            {
              v215 = *(_QWORD *)(v214 + 24);
              if ( v215 < 0 )
              {
                v534 = 0;
                goto LABEL_905;
              }
              v747 = *(_QWORD *)(v214 + 24);
              if ( v215 )
              {
                v714 = *(_QWORD *)(v214 + 16);
                nullsub_1(v215);
                v216 = sub_140001650(v747, 1);
                if ( !v216 )
                {
                  v715 = v747;
                  v534 = 1;
LABEL_905:
                  sub_1416C2D4B(v534, v715);
                }
                v715 = v216;
                sub_141684120(v216, v714, v747);
              }
              else
              {
                v715 = 1;
              }
              v714 = v669.m256i_i64[0];
              if ( v669.m256i_i64[0] == v668.m128i_i64[0] )
                sub_141689AB0(&v668);
              v217 = v668.m128i_i64[1];
              v218 = v714;
              v219 = 3 * v714;
              v220 = v747;
              *(_QWORD *)(v668.m128i_i64[1] + 8 * v219) = v747;
              *(_QWORD *)(v217 + 8 * v219 + 8) = v715;
              *(_QWORD *)(v217 + 8 * v219 + 16) = v220;
              v669.m256i_i64[0] = v218 + 1;
            }
          }
          v221 = v668;
          v222 = v669.m256i_i64[0];
          v223 = v668.m128i_i64[1] + 24 * v669.m256i_i64[0];
          v668.m128i_i64[0] = v668.m128i_i64[1];
          v669.m256i_i64[0] = v221.m128i_i64[0];
          v665 = v223;
          v669.m256i_i64[1] = v223;
          v711 = v668.m128i_i64[1];
          v717 = v221.m128i_i64[0];
          if ( v222 )
          {
            v224 = v221.m128i_i64[1] + 24;
            v668.m128i_i64[1] = v221.m128i_i64[1] + 24;
            v714 = *(_QWORD *)v221.m128i_i64[1];
            v734 = *(_QWORD *)(v221.m128i_i64[1] + 8);
            v718 = *(_QWORD *)(v221.m128i_i64[1] + 16);
          }
          else
          {
            v714 = -1;
            v224 = v221.m128i_i64[1];
          }
          v230 = v705;
          v747 = 0;
          while ( v746 != v747 )
          {
            ++v747;
            v231 = v230 + 32;
            sub_1402C3260();
            v230 = v231;
          }
          if ( *(_QWORD *)v600 )
            sub_140001660(v705, 32LL * *(_QWORD *)v600, 8);
          if ( v665 != v224 )
          {
            v232 = (v665 - v224) / 0x18uLL;
            v233 = (_QWORD *)(v224 + 8);
            do
            {
              v234 = *(v233 - 1);
              if ( v234 )
                sub_140001660(*v233, v234, 1);
              v233 += 3;
              --v232;
            }
            while ( v232 );
          }
          if ( v717 )
            sub_140001660(v711, 24 * v717, 8);
          if ( v714 == -1 )
            goto LABEL_272;
          v235 = sub_14142E200(&v649, aPayloadRole, 13);
          v705 = 1;
          if ( v235 )
          {
            v236 = v734;
            if ( *(_BYTE *)v235 == 3 )
            {
              v705 = *(_QWORD *)(v235 + 16);
              LOBYTE(v235) = *(_QWORD *)(v235 + 24) == 4;
              LODWORD(v665) = v235;
            }
            else
            {
              LODWORD(v665) = 0;
            }
          }
          else
          {
            LODWORD(v665) = 0;
            v236 = v734;
          }
          v747 = sub_14033BC10(v236, v718);
          v238 = v237;
          if ( !v237 )
            goto LABEL_327;
          sub_140388B60((unsigned int)&v668, v237, 0, 1, 1);
          v717 = v668.m128i_i64[1];
          if ( v668.m128i_i32[0] == 1 )
            sub_1416C2D4B(v717, v669.m256i_i64[0]);
          v746 = v669.m256i_i64[0];
          sub_141684120(v669.m256i_i64[0], v747, v238);
          if ( v238 < 8 )
          {
            v239 = 0;
            v240 = v746;
            goto LABEL_307;
          }
          if ( v238 < 0x20 )
          {
            v239 = 0;
            v240 = v746;
LABEL_304:
            v249 = v239;
            v239 = v238 & 0xFFFFFFFFFFFFFFF8uLL;
            v250 = _mm_load_si128((const __m128i *)&xmmword_141742480);
            v251 = _mm_load_si128((const __m128i *)&xmmword_141742490);
            v252 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
            do
            {
              v253 = _mm_loadl_epi64((const __m128i *)(v240 + v249));
              v254 = _mm_add_epi8(v253, v250);
              *(_QWORD *)(v240 + v249) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v254, v251), v254), v252),
                                           v253).m128i_u64[0];
              v249 += 8LL;
            }
            while ( v239 != v249 );
            goto LABEL_308;
          }
          v239 = v238 & 0xFFFFFFFFFFFFFFE0uLL;
          v241 = 0;
          v242 = _mm_load_si128((const __m128i *)&xmmword_141742460);
          v243 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
          v244 = _mm_load_si128((const __m128i *)&xmmword_141742470);
          v240 = v746;
          do
          {
            v245 = _mm_loadu_si128((const __m128i *)(v240 + v241));
            v246 = _mm_loadu_si128((const __m128i *)(v240 + v241 + 16));
            v247 = _mm_add_epi8(v245, v242);
            v248 = _mm_add_epi8(v246, v242);
            *(__m128i *)(v240 + v241) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v247, v243), v247), v244),
                                          v245);
            *(__m128i *)(v240 + v241 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v248, v243), v248), v244),
                                               v246);
            v241 += 32;
          }
          while ( v239 != v241 );
          v17 = off_141786750;
          v160 = 0;
          if ( v238 != v239 )
          {
            if ( (v238 & 0x18) != 0 )
              goto LABEL_304;
            do
            {
LABEL_307:
              *(_BYTE *)(v240 + v239) |= 32 * ((unsigned __int8)(*(_BYTE *)(v240 + v239) - 65) < 0x1Au);
              ++v239;
LABEL_308:
              ;
            }
            while ( v238 != v239 );
          }
          if ( v238 >= 0x18 )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v240 + 16)), v167),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v240), (__m128i)xmmword_141786370))) == 0xFFFF )
              goto LABEL_326;
          }
          else if ( v238 < 0xE )
          {
            if ( v238 != 13 )
            {
              if ( v238 < 0xB )
              {
LABEL_325:
                v255 = sub_1407BE9C0(aRoleCommunicat, 31, v240, v238);
                v240 = v746;
                if ( v255 )
                  goto LABEL_326;
                v258 = sub_1407BE9C0(aFilesystemSand, 29, v746, v238);
                sub_140001660(v746, v717, 1);
                if ( !v258 )
                {
                  v668.m128i_i64[0] = 0;
                  v668.m128i_i64[1] = v238;
                  *(_OWORD *)v669.m256i_i8 = __PAIR128__(v238, v747);
                  v669.m256i_i64[2] = v747;
                  v669.m256i_i64[3] = v747 + v238;
                  v670 = 0;
                  LOWORD(v671) = 1;
                  sub_14031CE70(v600, &v668);
                  v747 = *(_QWORD *)&v600[8];
                  sub_1404408C0(
                    (unsigned int)&v668,
                    *(_DWORD *)&v600[8],
                    *(_DWORD *)&v600[16],
                    (unsigned int)&unk_14178AA17,
                    1);
                  v746 = v668.m128i_i64[1];
                  v717 = v668.m128i_i64[0];
                  v259 = v669.m256i_i64[0];
                  if ( *(_QWORD *)v600 )
                    sub_140001660(v747, 16LL * *(_QWORD *)v600, 8);
                  if ( v259 )
                  {
                    if ( v259 >= 0x20 )
                      v260 = sub_1414A35B0(v746, v259);
                    else
                      v260 = sub_1414A3BD0(v746, v259);
                    if ( v260 >= 0xFA1 )
                    {
                      sub_140749160(&v668, v746, v259, 4000);
                      v712 = v668.m128i_i64[1];
                      v747 = v668.m128i_i64[0];
                      v716 = v669.m256i_i64[0];
                      goto LABEL_339;
                    }
                    v712 = v746;
                    v716 = v259;
                    v747 = v717;
                  }
                  else
                  {
                    v747 = -1;
LABEL_339:
                    if ( v717 )
                      sub_140001660(v746, v717, 1);
                  }
                  if ( v747 != -1 )
                  {
                    if ( (_BYTE)v665 && v188 == -1 && *(_DWORD *)v705 == 1919251317 )
                    {
                      sub_140749160(&v668, v712, v716, 88);
                      *(_QWORD *)&v608[32] = v669.m256i_i64[0];
                      *(__m128i *)&v608[16] = _mm_loadu_si128(&v668);
                    }
                    if ( v737 == -1 )
                    {
                      sub_140749160(&v668, v712, v716, 160);
                      v609 = (const char *)v669.m256i_i64[0];
                      *(__m128i *)&v608[40] = _mm_loadu_si128(&v668);
                    }
                    if ( v747 )
                      sub_140001660(v712, v747, 1);
                    if ( v714 )
                      sub_140001660(v734, v714, 1);
                    v160 = 0;
                    goto LABEL_272;
                  }
                }
                v160 = 0;
                v256 = v714;
                v257 = v734;
                if ( !v714 )
                  goto LABEL_272;
LABEL_328:
                sub_140001660(v257, v256, 1);
                goto LABEL_272;
              }
LABEL_324:
              if ( *(_QWORD *)v240 ^ 0x73746E6567612023LL | *(_QWORD *)(v240 + 3) ^ 0x646D2E73746E6567LL )
                goto LABEL_325;
LABEL_326:
              sub_140001660(v240, v717, 1);
LABEL_327:
              v256 = v714;
              v257 = v734;
              if ( !v714 )
                goto LABEL_272;
              goto LABEL_328;
            }
LABEL_318:
            if ( *(_QWORD *)v240 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v240 + 5) ^ 0x3E747865746E6F63LL )
              goto LABEL_324;
            goto LABEL_326;
          }
          if ( !(*(_QWORD *)v240 ^ 0x63757274736E693CLL | *(_QWORD *)(v240 + 6) ^ 0x3E736E6F69746375LL) )
            goto LABEL_326;
          if ( v238 >= 0x1A )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v240 + 10)), v165),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v240), v166))) == 0xFFFF )
              goto LABEL_326;
          }
          else if ( v238 < 0x15 )
          {
            goto LABEL_318;
          }
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v240 + 5)), v161),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v240), v162))) != 0xFFFF
            && *(_QWORD *)v240 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v240 + 5) ^ 0x3E747865746E6F63LL
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v240 + 5)), v163),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v240), v164))) != 0xFFFF )
          {
            goto LABEL_324;
          }
          goto LABEL_326;
        }
      }
    }
    v655.m128i_i64[0] = 0;
    v655.m128i_i64[1] = 8;
    v656 = 0;
    _RCX = v575.m128i_i64[0];
    v272 = (const __m128i *)(v575.m128i_i64[0] + 16);
    _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v575.m128i_i64[0]));
    v274 = &v668;
    v275 = v576.m128i_i64[1] - 1;
    if ( !v576.m128i_i64[1] )
      goto LABEL_702;
    while ( 2 )
    {
      v665 = v275;
      if ( !(_WORD)_R15D )
      {
        do
        {
          v276 = _mm_load_si128(v272);
          _RCX -= 1280;
          ++v272;
          _R15D = _mm_movemask_epi8(v276) ^ 0xFFFF;
        }
        while ( !_R15D );
      }
      __asm { tzcnt   eax, r15d }
      v277 = -80 * _RAX;
      m = *(_QWORD *)(_RCX + v277 - 72);
      v745 = m;
      v747 = _RCX;
      v760 = v277;
      v767 = *(_QWORD *)(_RCX + v277 - 64);
      if ( !v580.m128i_i64[1] )
      {
LABEL_372:
        v588.m256i_i64[2] = -1;
        hObject[0] = (HANDLE)-1LL;
        v588.m256i_i64[0] = 0;
        v591[0] = -1;
        v592[0] = -1;
        v596 = 0;
        v593[0] = -1;
        v594 = -1;
        v695 = 0;
        LOBYTE(m) = 1;
        v288 = 1;
        LOBYTE(v746) = 1;
        LOBYTE(v705) = 1;
        LOBYTE(_RCX) = 1;
        v697 = 0;
        goto LABEL_388;
      }
      v279 = sub_1403795A0(v581, v745, v767);
      _RCX = v279 >> 57;
      v280 = v579;
      v281 = _mm_cvtsi32_si128(v279 >> 57);
      v163 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v281, v281), 0), 68);
      for ( m = 0; ; m += 16 )
      {
        v282 = v280.m128i_i64[1] & v279;
        v283 = _mm_loadu_si128((const __m128i *)(v280.m128i_i64[0] + v282));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v283, v163));
        if ( _R12D )
          break;
LABEL_370:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v283, (__m128i)-1LL));
        v274 = &v668;
        if ( (_DWORD)_RCX )
          goto LABEL_372;
        v279 = m + v282 + 16;
      }
      v761 = m;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        v285 = v282;
        _RCX = -(__int64)(v280.m128i_i64[1] & (v282 + _RCX));
        if ( v767 == *(_QWORD *)(v280.m128i_i64[0] + 192 * _RCX - 176) )
        {
          v286 = v280.m128i_i64[0] + 192 * _RCX;
          if ( !(unsigned int)sub_1416847B0(v745, *(_QWORD *)(v286 - 184), v767) )
            break;
        }
        v287 = _R12D - 1;
        LOWORD(v287) = _R12D & (_R12D - 1);
        v194 = (_WORD)v287 == 0;
        _R12D = v287;
        v282 = v285;
        m = v761;
        if ( v194 )
          goto LABEL_370;
      }
      if ( *(_QWORD *)(v286 - 152) == -1 )
      {
        v668.m128i_i64[0] = -1;
        v274 = &v668;
        v289 = -1;
        v194 = *(_QWORD *)(v286 - 128) == -1;
        v761 = -1;
        if ( v194 )
          goto LABEL_378;
      }
      else
      {
        v274 = &v668;
        sub_14149C500(&v668, v286 - 152);
        v289 = -1;
        v194 = *(_QWORD *)(v286 - 128) == -1;
        v761 = -1;
        if ( v194 )
        {
LABEL_378:
          v697 = *(_QWORD *)(v286 - 168);
          v162.m128i_i64[0] = *(_QWORD *)(v286 - 160);
          if ( *(_QWORD *)(v286 - 104) != -1 )
          {
            sub_14149C500(v608, v286 - 104);
            v716 = *(_QWORD *)&v608[8];
            v289 = *(_QWORD *)v608;
            v667 = *(_QWORD *)&v608[16];
          }
          v746 = v289;
          v290 = -1;
          v291 = -1;
          if ( *(_QWORD *)(v286 - 80) != -1 )
          {
            sub_14149C500(v608, v286 - 80);
            v699 = *(_QWORD *)&v608[8];
            v291 = *(_QWORD *)v608;
            v696 = *(_QWORD *)&v608[16];
          }
          v695 = *(unsigned int *)(v286 - 8);
          v194 = *(_QWORD *)(v286 - 56) == -1;
          v737 = v291;
          if ( !v194 )
          {
            sub_14149C500(v608, v286 - 56);
            v582 = *(_QWORD *)&v608[8];
            v290 = *(_QWORD *)v608;
            v563 = *(_QWORD *)&v608[16];
            v291 = v737;
          }
          if ( *(_QWORD *)(v286 - 32) == -1 )
          {
            v292 = -1;
          }
          else
          {
            v766 = v290;
            sub_14149C500(v608, v286 - 32);
            v292 = *(_QWORD *)v608;
            *(__m128i *)v600 = _mm_loadu_si128((const __m128i *)&v608[8]);
            v291 = v737;
            v290 = v766;
          }
          v589 = v669.m256i_i64[0];
          *(__m128i *)&v588.m256i_u64[2] = v668;
          m = v761;
          hObject[0] = (HANDLE)v761;
          hObject[1] = v663;
          hObject[2] = v700;
          v591[0] = v746;
          LOBYTE(v746) = v746 == -1;
          v591[1] = v716;
          v591[2] = v667;
          v592[0] = v291;
          v592[1] = v699;
          v592[2] = v696;
          v593[0] = v290;
          LOBYTE(v705) = v761 == -1;
          v593[1] = v582;
          v593[2] = v563;
          v595 = _mm_load_si128((const __m128i *)v600);
          _RCX = v697;
          v588.m256i_i64[0] = v697;
          v588.m256i_i64[1] = v162.m128i_i64[0];
          v594 = v292;
          LOBYTE(m) = v290 == -1;
          LOBYTE(_RCX) = v292 == -1;
          v596 = v695;
          v288 = v291 == -1;
LABEL_388:
          LOBYTE(v714) = v288;
          LOBYTE(v766) = _RCX;
          LOBYTE(v737) = m;
          if ( v569.m128i_i64[1] )
          {
            v293 = sub_1403795A0(&v570, v745, v767);
            _RCX = v293 >> 57;
            v294 = v568;
            v295 = _mm_cvtsi32_si128(v293 >> 57);
            v163 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v295, v295), 0), 68);
            for ( m = 0; ; m += 16 )
            {
              v296 = v294.m128i_i64[1] & v293;
              v297 = _mm_loadu_si128((const __m128i *)(v294.m128i_i64[0] + v296));
              _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v297, v163));
              if ( _R14D )
                break;
LABEL_395:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v297, (__m128i)-1LL));
              if ( (_DWORD)_RCX )
              {
                v300 = 0;
                goto LABEL_400;
              }
              v293 = m + v296 + 16;
            }
            v761 = m;
            while ( 1 )
            {
              __asm { tzcnt   ecx, r14d }
              v299 = v296;
              _RCX = -(__int64)(v294.m128i_i64[1] & (v296 + _RCX));
              if ( v767 == *(_QWORD *)(v294.m128i_i64[0] + 232 * _RCX - 216) )
              {
                v300 = v294.m128i_i64[0] + 232 * _RCX;
                if ( !(unsigned int)sub_1416847B0(v745, *(_QWORD *)(v300 - 224), v767) )
                  break;
              }
              v301 = _R14D - 1;
              LOWORD(v301) = _R14D & (_R14D - 1);
              v194 = (_WORD)v301 == 0;
              _R14D = v301;
              v296 = v299;
              m = v761;
              if ( v194 )
                goto LABEL_395;
            }
LABEL_400:
            v302 = v300 - 208;
            if ( !v300 )
              v302 = 0;
            v274 = &v668;
            v761 = v302;
            if ( *(_QWORD *)&v643[24] )
            {
LABEL_403:
              v304 = sub_1403795A0(&v643[32], v745, v767);
              v305 = *(_QWORD *)&v643[8];
              v306 = _mm_cvtsi32_si128(v304 >> 57);
              v163 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v306, v306), 0), 68);
              for ( n = 0; ; n += 16 )
              {
                v308 = v305 & v304;
                HIDWORD(_RCX) = HIDWORD(v736);
                v309 = _mm_loadu_si128((const __m128i *)(v736 + v308));
                _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v309, v163));
                if ( _EBX )
                  break;
LABEL_408:
                _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v309, (__m128i)-1LL));
                if ( (_DWORD)_RCX )
                {
                  v313 = 0;
                  goto LABEL_411;
                }
                v304 = n + v308 + 16;
              }
              while ( 1 )
              {
                __asm { tzcnt   ecx, ebx }
                v311 = v308;
                v312 = -56LL * (v305 & (v308 + _RCX));
                HIDWORD(_RCX) = HIDWORD(v767);
                if ( v767 == *(_QWORD *)(v736 + v312 - 40) )
                {
                  v313 = v736 + v312;
                  if ( !(unsigned int)sub_1416847B0(v745, *(_QWORD *)(v313 - 48), v767) )
                    break;
                }
                v314 = _EBX - 1;
                LOWORD(v314) = _EBX & (_EBX - 1);
                v194 = (_WORD)v314 == 0;
                _EBX = v314;
                v308 = v311;
                if ( v194 )
                  goto LABEL_408;
              }
LABEL_411:
              v303 = (__m128i *)(v313 - 32);
              if ( !v313 )
                v303 = nullptr;
              v274 = &v668;
              v302 = v761;
LABEL_414:
              v315 = v747 + v760;
              v760 += v747;
              if ( v302 )
              {
                v316 = sub_141470CD0(_RCX, m);
                v317 = v316;
                if ( *(_BYTE *)(v316 + 16) == 1 )
                {
                  v318 = *(_OWORD *)v316;
                }
                else
                {
                  *(_QWORD *)&v318 = sub_141486EF0();
                  *(_OWORD *)v317 = v318;
                  *(_BYTE *)(v317 + 16) = 1;
                }
                *(_QWORD *)v317 = v318 + 1;
                *(_OWORD *)&v608[16] = v16;
                *(_OWORD *)v608 = v17;
                *(_OWORD *)&v608[32] = v318;
                _RAX = sub_140750C80(
                         v745,
                         v767,
                         (unsigned int)&v568,
                         (unsigned int)&v579,
                         (__int64)&v641,
                         (__int64)v608);
                LOBYTE(v710) = _RAX;
                v320 = *(_QWORD *)&v608[8];
                if ( *(_QWORD *)&v608[8] )
                {
                  v717 = (__int64)v303;
                  v321 = *(_QWORD *)&v608[24];
                  if ( *(_QWORD *)&v608[24] )
                  {
                    v322 = *(_QWORD *)v608;
                    v323 = (const __m128i *)(*(_QWORD *)v608 + 16LL);
                    _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v608));
                    do
                    {
                      if ( !(_WORD)_R12D )
                      {
                        do
                        {
                          v325 = _mm_load_si128(v323);
                          v322 -= 384;
                          ++v323;
                          _R12D = _mm_movemask_epi8(v325) ^ 0xFFFF;
                        }
                        while ( !_R12D );
                      }
                      __asm { tzcnt   eax, r12d }
                      v326 = -3 * _RAX;
                      v327 = *(_QWORD *)(v322 + 8 * v326 - 24);
                      if ( v327 )
                        sub_140001660(*(_QWORD *)(v322 + 8 * v326 - 16), v327, 1);
                      --v321;
                      _RAX = _R12D & (unsigned int)(_R12D - 1);
                      _R12D &= _R12D - 1;
                    }
                    while ( v321 );
                  }
                  v328 = (24 * v320 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                  v329 = v328 + v320;
                  v194 = v329 == -17;
                  v330 = v329 + 17;
                  v274 = &v668;
                  v315 = v760;
                  v302 = v761;
                  v303 = (__m128i *)v717;
                  if ( !v194 )
                    sub_140001660(*(_QWORD *)v608 - v328, v330, 16);
                }
                v194 = *(_BYTE *)(v315 - 8) == 0;
                v734 = v315 - 8;
                if ( v194
                  && (*(_BYTE *)(v302 + 204) | (unsigned __int8)v710) != 1
                  && *(_QWORD *)(v302 + 168) == -1
                  && *(_QWORD *)(v302 + 40) == 6
                  && v694 != -1 )
                {
                  v331 = *(_QWORD *)(v302 + 32);
                  _RCX = *(_DWORD *)v331 ^ 0x6F637376u;
                  if ( !((unsigned int)_RCX | *(unsigned __int16 *)(v331 + 4) ^ 0x6564) )
                  {
                    if ( *(_QWORD *)(v302 + 72) == -1 )
                    {
                      v332 = v667;
                      if ( (_BYTE)v746 )
                        v332 = 0;
                      v333 = v716;
                      if ( (_BYTE)v746 )
                        v333 = 1;
                      v334 = v662;
                    }
                    else
                    {
                      v332 = v667;
                      v333 = v716;
                      v334 = v662;
                      if ( (_BYTE)v746 )
                      {
                        v333 = *(_QWORD *)(v302 + 80);
                        v332 = *(_QWORD *)(v302 + 88);
                      }
                    }
                    LODWORD(v711) = sub_1414734E0(v333, v332, v334, v564);
LABEL_438:
                    if ( v303
                      && (v335 = sub_14033BC10(v303->m128i_i64[1], v303[1].m128i_i64[0])) != 0
                      && (v337 = v336) != 0 )
                    {
                      if ( v336 < 0 )
                      {
                        v340 = 0;
                        goto LABEL_695;
                      }
                      v338 = v303;
                      v339 = v335;
                      nullsub_1(_RCX);
                      v340 = 1;
                      v341 = sub_140001650(v337, 1);
                      if ( !v341 )
                      {
                        v586 = v337;
LABEL_695:
                        sub_1416C2D4B(v340, v586);
                      }
                      v342 = v341;
                      sub_141684120(v341, v339, v337);
                      v586 = v342;
LABEL_450:
                      v668.m128i_i64[0] = v337;
                      v668.m128i_i64[1] = v342;
                      v669.m256i_i64[0] = v337;
                      v315 = v760;
                      v302 = v761;
                      v303 = v338;
                      v274 = &v668;
LABEL_453:
                      *(_QWORD *)&v600[16] = v669.m256i_i64[0];
                      *(__m128i *)v600 = v668;
LABEL_457:
                      if ( *(_QWORD *)v600 != -1 )
                      {
                        v710 = *(_QWORD *)v600;
                        v348 = *(_QWORD *)&v600[16];
                        v715 = *(_QWORD *)&v600[16];
                        v717 = *(_QWORD *)&v600[8];
                        if ( !v302 )
                          goto LABEL_465;
LABEL_462:
                        v163.m128i_i64[0] = *(_QWORD *)(v302 + 192);
                        if ( *(double *)v163.m128i_i64 <= 0.0 )
                          goto LABEL_465;
                        v712 = 1;
                        v350 = *(_QWORD *)(v315 - 16);
                        if ( (_BYTE)v737 )
                        {
LABEL_472:
                          if ( !v302 || *(_QWORD *)(v302 + 120) == -1 )
                          {
                            v647.m128i_i64[0] = -1;
                            if ( !(_BYTE)v766 )
                              goto LABEL_477;
                          }
                          else
                          {
                            v756 = 1;
                            sub_14149C500(&v647, v302 + 120);
                            if ( (_BYTE)v766 )
                              goto LABEL_480;
LABEL_477:
                            v755 = 1;
                            v754 = 1;
                            sub_14149C500(v274, &v594);
                            if ( v668.m128i_i64[0] != -1 )
                            {
                              v348 = v668.m128i_i64[1];
                              v645 = v668;
                              v646 = v669.m256i_i64[0];
                              if ( !(_BYTE)v746 )
                              {
LABEL_485:
                                v753 = 1;
                                v752 = 1;
                                sub_14149C500(v274, v591);
                                if ( v668.m128i_i64[0] != -1 )
                                {
                                  *((_QWORD *)&v351 + 1) = v668.m128i_i64[1];
                                  *(_QWORD *)&v351 = v669.m256i_i64[0];
                                  v657 = v668;
                                  v658 = v669.m256i_i64[0];
                                  goto LABEL_491;
                                }
                              }
LABEL_487:
                              if ( !v302 || *(_QWORD *)(v302 + 72) == -1 )
                              {
                                v657.m128i_i64[0] = -1;
LABEL_494:
                                *(_QWORD *)v600 = -1;
                                LODWORD(v746) = 0;
                                goto LABEL_524;
                              }
                              v753 = 1;
                              v752 = 1;
                              sub_14149C500(&v657, v302 + 72);
                              if ( v657.m128i_i64[0] == -1 )
                                goto LABEL_494;
                              *((_QWORD *)&v351 + 1) = v657.m128i_i64[1];
                              *(_QWORD *)&v351 = v658;
LABEL_491:
                              v774 = 1;
                              v773 = 1;
                              v352 = sub_14033BC10(*((_QWORD *)&v351 + 1), v351);
                              if ( v353 )
                              {
                                v774 = 1;
                                v773 = 1;
                                v354 = sub_141474040(v352);
                                LOBYTE(v354) = v354 ^ 1;
                                LODWORD(v746) = v354;
                              }
                              else
                              {
                                LODWORD(v746) = 0;
                              }
                              v774 = 1;
                              v773 = 1;
                              v355 = sub_14033BC10(*((_QWORD *)&v351 + 1), v351);
                              *(_QWORD *)&v351 = v356;
                              if ( !v356 )
                                goto LABEL_523;
                              *((_QWORD *)&v351 + 1) = v355;
                              v774 = 1;
                              v773 = 1;
                              sub_141473FA0((_DWORD)v274, (_DWORD)v698, v659, (unsigned int)&unk_14178B075, 9);
                              v737 = *((_QWORD *)&v351 + 1);
                              v766 = v668.m128i_i64[1];
                              LODWORD(v303) = sub_1414734E0(
                                                *((_QWORD *)&v351 + 1),
                                                v351,
                                                v668.m128i_i64[1],
                                                v669.m256i_i64[0]);
                              if ( v668.m128i_i64[0] )
                                sub_140001660(v766, v668.m128i_i64[0], 1);
                              if ( !(_BYTE)v303 )
                              {
LABEL_523:
                                *(_QWORD *)v600 = -1;
                                goto LABEL_524;
                              }
                              v774 = 1;
                              v773 = 1;
                              sub_141473FA0((unsigned int)&v660, v737, v351, (unsigned int)&unk_14178B0F6, 4);
                              v357 = v660.m128i_i64[1];
                              v358 = v661.m128i_i64[0];
                              if ( !(unsigned __int8)sub_1414741E0(v660.m128i_i64[1], v661.m128i_i64[0]) )
                              {
                                nullsub_1(v359);
                                v388 = sub_140001650(33, 1);
                                if ( !v388 )
                                  sub_1416C2D4B(1, 33);
                                *((_QWORD *)&v351 + 1) = v388;
                                *(_OWORD *)(v388 + 16) = xmmword_14178B10A;
                                *(__m128i *)v388 = _mm_loadu_si128((const __m128i *)&xmmword_14178B0FA);
                                *(_BYTE *)(v388 + 32) = -74;
                                v389 = 9;
                                v390 = 33;
                                v391 = 33;
LABEL_583:
                                v766 = v391;
                                goto LABEL_584;
                              }
                              sub_14148D130(v274, v357, v358);
                              v360 = v668.m128i_i64[1];
                              v766 = v668.m128i_i64[1];
                              if ( v668.m128i_i64[0] == -1 )
                              {
                                v389 = 2;
                                v390 = 30;
                                goto LABEL_584;
                              }
                              v733 = v668.m128i_i64[0];
                              v668.m128i_i64[0] = 0;
                              v668.m128i_i64[1] = v669.m256i_i64[0];
                              v669.m256i_i64[0] = v360;
                              v669.m256i_i64[1] = v668.m128i_i64[1];
                              *(_OWORD *)&v669.m256i_u64[2] = __PAIR128__(v668.m128i_u64[1], 0);
                              v670 = 0xA0000000ALL;
                              LOBYTE(v671) = 1;
                              LOWORD(v672) = 0;
                              v361 = 0;
LABEL_504:
                              if ( (v361 & 1) != 0 )
                                goto LABEL_579;
                              v362 = v669.m256i_i64[0];
                              sub_1407BC790(&v649, &v669);
                              if ( v649.m128i_i32[0] == 1 )
                              {
                                v363 = v668.m128i_i64[0];
                                v668.m128i_i64[0] = v650;
                                v364 = v650 - v363;
                                v365 = v363 + v362;
                                if ( (_QWORD)v650 == v363 )
                                {
LABEL_517:
                                  v366 = (_DWORD *)sub_14033BC10(v365, v364);
                                  if ( v367 >= 7 )
                                  {
                                    v360 = *v366 ^ 0x64746967u;
                                    if ( !((unsigned int)v360 | *(_DWORD *)((char *)v366 + 3) ^ 0x3A726964) )
                                    {
                                      v368 = sub_14033BC10((char *)v366 + 7, v367 - 7);
                                      if ( !v368 || !v369 )
                                      {
LABEL_579:
                                        nullsub_1(v360);
                                        v398 = sub_140001650(30, 1);
                                        if ( !v398 )
                                          sub_1416C2D4B(1, 30);
                                        *((_QWORD *)&v351 + 1) = v398;
                                        *(_OWORD *)(v398 + 14) = *(__int128 *)((char *)&xmmword_1417888BF + 14);
                                        *(__m128i *)v398 = _mm_loadu_si128((const __m128i *)&xmmword_1417888BF);
                                        v389 = 9;
                                        v390 = 30;
                                        if ( v733 )
                                          sub_140001660(v766, v733, 1);
                                        v391 = 30;
                                        goto LABEL_583;
                                      }
                                      sub_14149BB70(v274, v368, v369);
                                      v735 = v668.m128i_i64[0];
                                      v370 = v669.m256i_i64[0];
                                      v738 = 1;
                                      v762 = v668.m128i_i64[1];
                                      if ( (unsigned __int8)sub_141473380(v668.m128i_i64[1], v669.m256i_i64[0]) )
                                      {
                                        v668.m128i_i64[0] = v735;
                                        v668.m128i_i64[1] = v762;
                                        v669.m256i_i64[0] = v370;
                                      }
                                      else
                                      {
                                        v738 = 1;
                                        v403 = (const char *)sub_1414740B0(v357, v358);
                                        v405 = v404;
                                        if ( !v403 )
                                        {
                                          v403 = asc_141789390;
                                          v405 = 1;
                                        }
                                        sub_141473FA0((_DWORD)v274, (_DWORD)v403, v405, v762, v370);
                                        if ( v735 )
                                          sub_140001660(v762, v735, 1);
                                        v735 = v668.m128i_i64[0];
                                      }
                                      v406 = v668.m128i_i64[1];
                                      v407 = v669.m256i_i64[0];
                                      if ( v733 )
                                        sub_140001660(v766, v733, 1);
                                      v713 = v406;
                                      sub_141473FA0((unsigned int)v702, v406, v407, (unsigned int)&unk_14178ADF6, 9);
                                      v704 = *(_QWORD *)&v702[8];
                                      sub_14148D130(&v649, *(_QWORD *)&v702[8], *(_QWORD *)&v702[16]);
                                      if ( v649.m128i_i64[0] == -1 )
                                      {
                                        v637 = v649.m128i_i64[1];
                                        v635 = &v637;
                                        v636 = sub_141490720;
                                        sub_14149C0F0(v274, &unk_14178883D, &v635);
                                        v762 = v668.m128i_i64[1];
                                        v766 = v668.m128i_i64[0];
                                        v390 = v669.m256i_i64[0];
                                        sub_1401DD260(v637);
                                        v389 = 10;
                                        v413 = 0;
                                      }
                                      else
                                      {
                                        v664 = v649.m128i_i64[1];
                                        v701 = v649.m128i_i64[0];
                                        v408 = sub_14033BC10(v649.m128i_i64[1], v650);
                                        if ( v409 )
                                        {
                                          sub_14149BB70(v274, v408, v409);
                                          v733 = v668.m128i_i64[0];
                                          v411 = v669.m256i_i64[1];
                                          v390 = v669.m256i_i64[0];
                                          v751 = 1;
                                          v762 = v668.m128i_i64[1];
                                          if ( (unsigned __int8)sub_141473380(v668.m128i_i64[1], v669.m256i_i64[0]) )
                                          {
                                            v649.m128i_i64[0] = v733;
                                            v412 = v762;
                                            v649.m128i_i64[1] = v762;
                                            v650 = __PAIR128__(v411, v390);
                                          }
                                          else
                                          {
                                            v668.m128i_i64[0] = v733;
                                            v668.m128i_i64[1] = v762;
                                            *(_OWORD *)v669.m256i_i8 = __PAIR128__(v411, v390);
                                            v751 = 0;
                                            sub_14033DC20(&v649, v713, v407, v274);
                                            v412 = v649.m128i_i64[1];
                                            v390 = v650;
                                          }
                                          v723 = 1;
                                          v607 = v412;
                                          sub_141485FE0(v274, v412, v390);
                                          v415 = v649.m128i_i64[0];
                                          v766 = v668.m128i_i64[0];
                                          if ( v668.m128i_i64[0] == -1 )
                                          {
                                            v416 = *((_QWORD *)&v650 + 1);
                                            v723 = 0;
                                            sub_1401DD260(v668.m128i_i64[1]);
                                            v733 = v416;
                                            v766 = v415;
                                            v762 = v607;
                                          }
                                          else
                                          {
                                            v390 = v669.m256i_i64[0];
                                            v762 = v668.m128i_i64[1];
                                            v733 = v669.m256i_i64[1];
                                            if ( v649.m128i_i64[0] )
                                              sub_140001660(v607, v649.m128i_i64[0], 1);
                                          }
                                          v389 = -1;
                                          v413 = 1;
                                          if ( v701 )
                                            sub_140001660(v664, v701, 1);
                                        }
                                        else
                                        {
                                          nullsub_1(v410);
                                          v414 = (__m128i *)sub_140001650(16, 1);
                                          if ( !v414 )
                                            sub_1416C2D4B(1, 16);
                                          v762 = (__int64)v414;
                                          *v414 = _mm_loadu_si128((const __m128i *)&xmmword_14178ADFF);
                                          v389 = 9;
                                          v390 = 16;
                                          if ( v701 )
                                            sub_140001660(v664, v701, 1);
                                          v413 = 0;
                                          v766 = 16;
                                        }
                                      }
                                      if ( *(_QWORD *)v702 )
                                        sub_140001660(v704, *(_QWORD *)v702, 1);
                                      if ( !v413 )
                                      {
                                        *((_QWORD *)&v351 + 1) = v762;
                                        goto LABEL_630;
                                      }
                                      v417 = sub_1414740B0(v762, v390);
                                      v420 = v417;
                                      if ( !v417 )
                                      {
                                        nullsub_1(v419);
                                        v423 = sub_140001650(46, 1);
                                        if ( !v423 )
                                          sub_1416C2D4B(1, 46);
                                        *((_QWORD *)&v351 + 1) = v423;
                                        *(_OWORD *)(v423 + 30) = *(__int128 *)((char *)&xmmword_141788974 + 14);
                                        *(_OWORD *)(v423 + 16) = xmmword_141788974;
                                        *(__m128i *)v423 = _mm_loadu_si128((const __m128i *)&xmmword_141788964);
                                        v389 = 9;
                                        v390 = 46;
                                        if ( v766 )
                                          sub_140001660(v762, v766, 1);
                                        v766 = 46;
LABEL_630:
                                        if ( v735 )
                                          sub_140001660(v713, v735, 1);
LABEL_584:
                                        if ( v660.m128i_i64[0] )
                                          sub_140001660(v660.m128i_i64[1], v660.m128i_i64[0], 1);
                                        v668.m128i_i64[0] = v389;
                                        v668.m128i_i64[1] = v766;
                                        v669.m256i_i64[0] = *((_QWORD *)&v351 + 1);
                                        v669.m256i_i64[1] = v390;
                                        v669.m256i_i64[2] = v733;
                                        *(_QWORD *)v702 = v274;
                                        *(_QWORD *)&v702[8] = sub_140B036A0;
                                        sub_14149C0F0(&v649, &unk_14178B03F, v702);
                                        v733 = v649.m128i_i64[1];
                                        v766 = v649.m128i_i64[0];
                                        v400 = v567;
                                        v302 = v761;
                                        v303 = (__m128i *)v737;
                                        if ( (__int64)v351 < 0 )
                                        {
                                          v401 = 0;
                                        }
                                        else
                                        {
                                          nullsub_1(v399);
                                          v401 = 1;
                                          v402 = sub_140001650(v351, 1);
                                          if ( v402 )
                                          {
                                            *((_QWORD *)&v351 + 1) = v402;
                                            sub_141684120(v402, v303, v351);
                                            v601 = _mm_loadu_si128(&v649);
                                            *(_QWORD *)&v602 = v650;
                                            *(_OWORD *)v600 = v351;
                                            v567 = *((_QWORD *)&v351 + 1);
                                            *(_OWORD *)&v600[16] = (unsigned __int64)v351;
                                            *(_OWORD *)&v600[32] = 1u;
                                            WORD4(v602) = 1;
                                            v774 = 1;
                                            v773 = 1;
                                            sub_1406CDA20(v274);
                                            goto LABEL_524;
                                          }
                                          v400 = v351;
                                        }
                                        sub_1416C2D4B(v401, v400);
                                      }
                                      v421 = v418;
                                      sub_141485FE0(v274, v417, v418);
                                      if ( v668.m128i_i64[0] == -1 )
                                      {
                                        sub_140710010(&v649, v420, v421, v668.m128i_i64[1]);
                                      }
                                      else
                                      {
                                        v422 = _mm_loadu_si128(&v668);
                                        v650 = *(_OWORD *)v669.m256i_i8;
                                        v649 = v422;
                                      }
                                      v424 = v649;
                                      v425 = v650;
                                      if ( v766 )
                                        sub_140001660(v762, v766, 1);
                                      if ( v735 )
                                        sub_140001660(v713, v735, 1);
                                      v733 = v424.m128i_i64[0];
                                      if ( v660.m128i_i64[0] )
                                        sub_140001660(v660.m128i_i64[1], v660.m128i_i64[0], 1);
                                      v766 = v424.m128i_i64[1];
                                      sub_14149B760(v274, v424.m128i_i64[1], v425);
                                      v427 = v668.m128i_i64[1];
                                      v428 = v669.m256i_i64[0];
                                      if ( v669.m256i_i64[0] < 0 )
                                      {
                                        v767 = v668.m128i_i64[1];
                                        v533 = 0;
                                        goto LABEL_903;
                                      }
                                      v704 = v425;
                                      if ( v669.m256i_i64[0] )
                                      {
                                        nullsub_1(v426);
                                        v429 = sub_140001650(v428, 1);
                                        if ( v429 )
                                        {
                                          v706 = v429;
                                          v303 = (__m128i *)v427;
                                          sub_141684120(v429, v427, v428);
                                          goto LABEL_645;
                                        }
                                        v767 = v427;
                                        v706 = v428;
                                        v533 = 1;
LABEL_903:
                                        sub_1416C2D4B(v533, v706);
                                      }
                                      v303 = (__m128i *)v668.m128i_i64[1];
                                      v706 = 1;
LABEL_645:
                                      v430 = v766;
                                      if ( v668.m128i_i64[0] > 0 )
                                        sub_140001660(v303, v668.m128i_i64[0], 1);
                                      v735 = v428;
                                      if ( v428 == (_QWORD)v351 && !(unsigned int)sub_1416847B0(v706, v737, v351) )
                                      {
                                        *(_QWORD *)v600 = -1;
                                        sub_140001660(v706, v351, 1);
LABEL_663:
                                        v302 = v761;
                                        if ( v733 )
                                          sub_140001660(v766, v733, 1);
                                        goto LABEL_524;
                                      }
                                      v771 = 1;
                                      if ( !(unsigned __int8)sub_141474040(v430) )
                                      {
                                        sub_140388B60((_DWORD)v274, v351, 0, 1, 1);
                                        v762 = v668.m128i_i64[1];
                                        if ( v668.m128i_i8[0] )
                                        {
                                          v771 = 1;
                                          sub_1416C2D4B(v762, v669.m256i_i64[0]);
                                        }
                                        *((_QWORD *)&v351 + 1) = v669.m256i_i64[0];
                                        sub_141684120(v669.m256i_i64[0], v737, v351);
                                        nullsub_1(v439);
                                        v440 = sub_140001650(45, 1);
                                        if ( !v440 )
                                        {
                                          v767 = *((_QWORD *)&v351 + 1);
                                          sub_1416C2D4B(1, 45);
                                        }
                                        *(_OWORD *)(v440 + 29) = *(__int128 *)((char *)&xmmword_14178AFAE + 13);
                                        *(_OWORD *)(v440 + 16) = xmmword_14178AFAE;
                                        *(__m128i *)v440 = _mm_loadu_si128((const __m128i *)&xmmword_14178AF9E);
                                        *(_QWORD *)v600 = v762;
                                        *(_QWORD *)&v600[8] = *((_QWORD *)&v351 + 1);
                                        *(_QWORD *)&v600[16] = v351;
                                        *(_QWORD *)&v600[24] = v735;
                                        v348 = v706;
                                        *(_QWORD *)&v600[32] = v706;
                                        *(_QWORD *)&v600[40] = v735;
                                        v601.m128i_i64[0] = 45;
                                        v601.m128i_i64[1] = v440;
                                        *(_QWORD *)&v602 = 45;
                                        WORD4(v602) = 1;
                                        v274 = &v668;
                                        goto LABEL_663;
                                      }
                                      v771 = 1;
                                      sub_14147B720(v274, aGit, 3);
                                      sub_14147B600(v274, aC_4, 2);
                                      sub_14147B600(v274, v737, v351);
                                      v660.m128i_i64[0] = (__int64)aStatus_3;
                                      v660.m128i_i64[1] = 6;
                                      v661.m128i_i64[0] = (__int64)aPorcelain;
                                      v661.m128i_i64[1] = 11;
                                      sub_140347FA0(v274, &v660);
                                      sub_141481530(&v649, v274);
                                      if ( v649.m128i_i64[0] == -1 )
                                      {
                                        v637 = v649.m128i_i64[1];
                                        v635 = &v637;
                                        v636 = sub_141490720;
                                        sub_14149C0F0(&v660, &unk_1417886DD, &v635);
                                        v438 = v660.m128i_i64[1];
                                        v762 = v660.m128i_i64[0];
                                        v436 = v661.m128i_i64[0];
                                        sub_1401DD260(v637);
                                        v771 = 1;
                                        sub_1406CC740(&v668);
                                        goto LABEL_685;
                                      }
                                      v431 = v650;
                                      v432 = _mm_loadu_si128((const __m128i *)((char *)&v650 + 8));
                                      *(_OWORD *)&v702[40] = *(_OWORD *)&v651.m256i_u64[1];
                                      *(__m128i *)&v702[24] = v432;
                                      v713 = v649.m128i_i64[0];
                                      *(__m128i *)v702 = v649;
                                      v704 = v649.m128i_i64[1];
                                      *(_QWORD *)&v702[16] = v650;
                                      sub_1406CC740(v274);
                                      if ( *(_DWORD *)&v702[48] )
                                      {
                                        v433 = *(_QWORD *)&v702[32];
                                        sub_141499F00(&v649, *(_QWORD *)&v702[32], *(_QWORD *)&v702[40]);
                                        v664 = v649.m128i_i64[1];
                                        v434 = sub_14033BC10(v649.m128i_i64[1], v650);
                                        v436 = v435;
                                        sub_140388B60((unsigned int)&v668, v435, 0, 1, 1);
                                        v762 = v668.m128i_i64[1];
                                        if ( v668.m128i_i32[0] == 1 )
                                          sub_1416C2D4B(v762, v669.m256i_i64[0]);
                                        v701 = v669.m256i_i64[0];
                                        if ( v436 )
                                          sub_141684120(v701, v434, v436);
                                        if ( v649.m128i_i64[0] > 0 )
                                          sub_140001660(v664, v649.m128i_i64[0], 1);
                                        if ( v436 )
                                        {
                                          v438 = v701;
                                        }
                                        else
                                        {
                                          nullsub_1(v437);
                                          v446 = sub_140001650(23, 1);
                                          if ( !v446 )
                                            sub_1416C2D4B(1, 23);
                                          v438 = v446;
                                          *(__m128i *)v446 = _mm_loadu_si128(&xmmword_14178AC57);
                                          *(_QWORD *)(v446 + 15) = 0xA5B4E8B1A4E59E9BuLL;
                                          v436 = 23;
                                          if ( v762 )
                                            sub_140001660(v701, v762, 1);
                                          v762 = 23;
                                        }
                                        if ( v713 )
                                          sub_140001660(v704, v713, 1);
                                        if ( *(_QWORD *)&v702[24] )
                                          sub_140001660(v433, *(_QWORD *)&v702[24], 1);
LABEL_685:
                                        v668.m128i_i64[0] = 10;
                                        v668.m128i_i64[1] = v762;
                                        v669.m256i_i64[0] = v438;
                                        v669.m256i_i64[1] = v436;
                                        v303 = &v649;
                                        sub_140388B60((unsigned int)&v649, v351, 0, 1, 1);
                                        v762 = v649.m128i_i64[1];
                                        LOBYTE(v704) = v649.m128i_i8[0];
                                        if ( v649.m128i_i8[0] )
                                          sub_1416C2D4B(v762, v650);
                                        v713 = v650;
                                        sub_141684120(v650, v737, v351);
                                        *(_QWORD *)v702 = &v668;
                                        *(_QWORD *)&v702[8] = sub_140B036A0;
                                        sub_14149C0F0(&v649, &unk_14178B011, v702);
                                        *(_QWORD *)&v602 = v650;
                                        v601 = _mm_loadu_si128(&v649);
                                        *(_QWORD *)v600 = v762;
                                        *(_QWORD *)&v600[8] = v713;
                                        *(_QWORD *)&v600[16] = v351;
                                        *(_QWORD *)&v600[24] = v735;
                                        *(_QWORD *)&v600[32] = v706;
                                        *(_QWORD *)&v600[40] = v735;
                                        WORD4(v602) = 1;
                                        v763 = 0;
                                        sub_1406CDA20(&v668);
                                        v445 = v733;
                                        if ( v733 )
LABEL_687:
                                          sub_140001660(v766, v445, 1);
                                      }
                                      else
                                      {
                                        sub_141499F00(&v668, v704, v431);
                                        v762 = v668.m128i_i64[1];
                                        sub_14033BC10(v668.m128i_i64[1], v669.m256i_i64[0]);
                                        v442 = v441;
                                        if ( v713 )
                                          sub_140001660(v704, v713, 1);
                                        if ( *(_QWORD *)&v702[24] )
                                          sub_140001660(*(_QWORD *)&v702[32], *(_QWORD *)&v702[24], 1);
                                        if ( v668.m128i_i64[0] > 0 )
                                          sub_140001660(v762, v668.m128i_i64[0], 1);
                                        if ( v442 )
                                        {
                                          sub_140388B60((unsigned int)&v668, v351, 0, 1, 1);
                                          v762 = v668.m128i_i64[1];
                                          if ( v668.m128i_i8[0] )
                                          {
                                            v763 = 1;
                                            sub_1416C2D4B(v762, v669.m256i_i64[0]);
                                          }
                                          v713 = v669.m256i_i64[0];
                                          sub_141684120(v669.m256i_i64[0], v737, v351);
                                          nullsub_1(v443);
                                          v444 = sub_140001650(70, 1);
                                          if ( !v444 )
                                            sub_1416C2D4B(1, 70);
                                          *(_OWORD *)(v444 + 48) = xmmword_14178AFFB;
                                          *(_OWORD *)(v444 + 32) = xmmword_14178AFEB;
                                          *(_OWORD *)(v444 + 16) = xmmword_14178AFDB;
                                          *(__m128i *)v444 = _mm_loadu_si128((const __m128i *)&xmmword_14178AFCB);
                                          *(_QWORD *)(v444 + 62) = 0xBBA7E781BFE88D86uLL;
                                          *(_QWORD *)v600 = v762;
                                          *(_QWORD *)&v600[8] = v713;
                                          *(_QWORD *)&v600[16] = v351;
                                          *(_QWORD *)&v600[24] = v735;
                                          v348 = v706;
                                          *(_QWORD *)&v600[32] = v706;
                                          *(_QWORD *)&v600[40] = v735;
                                          v601.m128i_i64[0] = 70;
                                          v601.m128i_i64[1] = v444;
                                          *(_QWORD *)&v602 = 70;
                                          WORD4(v602) = 1;
                                          v445 = v733;
                                          if ( v733 )
                                            goto LABEL_687;
                                        }
                                        else
                                        {
                                          sub_140388B60((unsigned int)&v668, v351, 0, 1, 1);
                                          *((_QWORD *)&v351 + 1) = v668.m128i_i64[1];
                                          if ( v668.m128i_i8[0] )
                                          {
                                            v763 = 1;
                                            sub_1416C2D4B(v668.m128i_i64[1], v669.m256i_i64[0]);
                                          }
                                          v303 = (__m128i *)v669.m256i_i64[0];
                                          sub_141684120(v669.m256i_i64[0], v737, v351);
                                          v348 = v735;
                                          *(_QWORD *)&v600[24] = v735;
                                          *(_QWORD *)&v600[32] = v706;
                                          *(_QWORD *)&v600[40] = v735;
                                          *(_QWORD *)v600 = *((_QWORD *)&v351 + 1);
                                          *(_QWORD *)&v600[8] = v303;
                                          *(_QWORD *)&v600[16] = v351;
                                          v601.m128i_i64[0] = -1;
                                          WORD4(v602) = 256;
                                          v445 = v733;
                                          if ( v733 )
                                            goto LABEL_687;
                                        }
                                      }
                                      v274 = &v668;
                                      v302 = v761;
LABEL_524:
                                      if ( v302 )
                                      {
                                        if ( *(_QWORD *)(v302 + 168) != -1 )
                                        {
                                          v750 = 1;
                                          v749 = 1;
                                          sub_14149C500(v274, v302 + 168);
                                          if ( v668.m128i_i64[0] != -1 )
                                          {
                                            v348 = v668.m128i_i64[1];
                                            v649 = v668;
                                            *(_QWORD *)&v650 = v669.m256i_i64[0];
                                            goto LABEL_532;
                                          }
                                        }
                                      }
                                      if ( (_BYTE)v714 )
                                      {
                                        v649.m128i_i64[0] = -1;
                                      }
                                      else
                                      {
                                        v750 = 1;
                                        v749 = 1;
                                        sub_14149C500(&v649, v592);
                                      }
                                      if ( v302 )
                                      {
LABEL_532:
                                        LODWORD(v303) = *(_DWORD *)(v302 + 200);
                                        v371 = 1;
                                      }
                                      else
                                      {
                                        v371 = 0;
                                      }
                                      v372 = _R15D & (_R15D - 1);
                                      v373 = v767;
                                      if ( v767 < 0 )
                                      {
                                        v447 = 0;
                                        goto LABEL_693;
                                      }
                                      LODWORD(v766) = (_DWORD)v303;
                                      if ( v767 )
                                      {
                                        nullsub_1(v348);
                                        v374 = sub_140001650(v373, 1);
                                        if ( v374 )
                                        {
                                          v718 = v374;
                                          sub_141684120(v374, v745, v373);
                                          goto LABEL_539;
                                        }
                                        v718 = v373;
                                        v447 = 1;
LABEL_693:
                                        v722 = 1;
                                        v721 = 1;
                                        sub_1416C2D4B(v447, v718);
                                      }
                                      v718 = 1;
LABEL_539:
                                      v375 = _mm_loadu_si128((const __m128i *)(v760 - 56));
                                      v376 = *(_QWORD *)(v760 - 40);
                                      v377 = -1;
                                      if ( v376 != -1 )
                                      {
                                        v720 = 1;
                                        sub_14149C500(v274, v760 - 40);
                                        v583 = v668.m128i_i64[1];
                                        v377 = v668.m128i_i64[0];
                                        v565 = v669.m256i_i64[0];
                                      }
                                      v745 = v377;
                                      v714 = v657.m128i_i64[0];
                                      if ( v657.m128i_i64[0] == -1 )
                                      {
                                        v737 = -1;
                                      }
                                      else
                                      {
                                        v378 = v371;
                                        v379 = v274;
                                        v380 = v657.m128i_i64[1];
                                        v748 = 1;
                                        v381 = v658;
                                        v382 = sub_1414742C0(v657.m128i_i64[1], v658);
                                        if ( v382 )
                                        {
                                          v748 = 1;
                                          sub_1414A3C90(v379, v382, v383);
                                          if ( v668.m128i_i8[0] )
                                            v385 = 0;
                                          else
                                            v385 = v668.m128i_i64[1];
                                          v384 = v669.m256i_i64[0];
                                        }
                                        else
                                        {
                                          v385 = 0;
                                        }
                                        if ( v385 != 0 && v384 != 0 )
                                        {
                                          v381 = v384;
                                          v380 = v385;
                                        }
                                        v737 = v381;
                                        if ( v381 < 0 )
                                        {
                                          v448 = 0;
                                          goto LABEL_699;
                                        }
                                        if ( v381 )
                                        {
                                          nullsub_1(v384);
                                          v386 = v737;
                                          v387 = sub_140001650(v737, 1);
                                          if ( v387 )
                                          {
                                            v640 = v387;
                                            sub_141684120(v387, v380, v386);
                                            v585 = v386;
                                            goto LABEL_558;
                                          }
                                          v640 = v386;
                                          v448 = 1;
LABEL_699:
                                          v748 = 1;
                                          sub_1416C2D4B(v448, v640);
                                        }
                                        v640 = 1;
                                        v737 = 0;
                                        v585 = 0;
LABEL_558:
                                        v274 = v379;
                                        v371 = v378;
                                      }
                                      v713 = v657.m128i_i64[1];
                                      v704 = v649.m128i_i64[1];
                                      v733 = v649.m128i_i64[0];
                                      v735 = v647.m128i_i64[0];
                                      v762 = v645.m128i_i64[0];
                                      v392 = *(_BYTE *)v734;
                                      v701 = v647.m128i_i64[1];
                                      v664 = v645.m128i_i64[1];
                                      if ( v761 && !v392 )
                                        v392 = *(_BYTE *)(v761 + 204);
                                      v393 = -1;
                                      if ( !(_BYTE)v705 )
                                      {
                                        sub_14149C500(v274, hObject);
                                        v584 = v668.m128i_i64[1];
                                        v393 = v668.m128i_i64[0];
                                        v566 = v669.m256i_i64[0];
                                      }
                                      if ( v376 == -1 )
                                      {
                                        v396 = 1;
                                        v395 = v766;
                                      }
                                      else
                                      {
                                        v761 = v393;
                                        v394 = sub_1414741E0(*(_QWORD *)(v760 - 32), *(_QWORD *)(v760 - 24));
                                        v395 = v766;
                                        v396 = v394 ^ 1;
                                        v393 = v761;
                                      }
                                      if ( v395 <= 0 )
                                        v395 = v695;
                                      if ( !v371 )
                                        v395 = v695;
                                      if ( (v712 & 1) == 0 )
                                        v163.m128i_i64[0] = v162.m128i_i64[0];
                                      if ( v697 | v712 )
                                        v350 = v163.m128i_i64[0];
                                      v628 = v602;
                                      v627 = _mm_loadu_si128(&v601);
                                      v626 = *(_OWORD *)&v600[32];
                                      v625 = *(_OWORD *)&v600[16];
                                      v624 = *(_OWORD *)v600;
                                      *(_QWORD *)&v608[16] = v767;
                                      *(_QWORD *)&v608[24] = v718;
                                      *(_QWORD *)&v608[32] = v767;
                                      *(_QWORD *)&v608[40] = v710;
                                      *(_QWORD *)&v608[48] = v717;
                                      v609 = (const char *)v715;
                                      v629 = v350;
                                      *(__m128i *)v608 = v375;
                                      *(_QWORD *)&v610 = v745;
                                      *((_QWORD *)&v610 + 1) = v583;
                                      *(_QWORD *)&v611 = v565;
                                      *((_QWORD *)&v611 + 1) = v737;
                                      *(_QWORD *)&v612 = v640;
                                      *((_QWORD *)&v612 + 1) = v585;
                                      v614 = (__m128i *)v658;
                                      v613 = v657;
                                      v616 = v650;
                                      v615 = v649;
                                      v630 = v395;
                                      v618 = v648;
                                      v617 = v647;
                                      v620 = v646;
                                      v619 = _mm_loadu_si128(&v645);
                                      v631 = v392;
                                      v621 = v393;
                                      v622 = v584;
                                      v623 = v566;
                                      v632 = v746;
                                      v633 = v711;
                                      v634 = v396;
                                      v397 = v656;
                                      if ( v656 == v655.m128i_i64[0] )
                                        sub_141689570(&v655, &v608[8], v767);
                                      sub_141684120(v655.m128i_i64[1] + 328 * v397, v608, 328);
                                      v656 = v397 + 1;
                                      HIDWORD(_RAX) = (unsigned __int64)sub_14043EAB0(&v588) >> 32;
                                      _R15D = v372;
                                      _RCX = v747;
                                      v275 = v665 - 1;
                                      if ( !v665 )
                                      {
LABEL_702:
                                        v449 = v655.m128i_i64[1];
                                        *(_QWORD *)v608 = &v707;
                                        if ( v656 >= 2 )
                                        {
                                          if ( v656 >= 0x15 )
                                          {
                                            sub_140B593F0(v655.m128i_i64[1], v656, v608);
                                          }
                                          else
                                          {
                                            v538 = 328 * v656;
                                            v539 = 328;
                                            do
                                            {
                                              sub_140551740(v449, v449 + v539);
                                              v539 += 328;
                                            }
                                            while ( v538 != v539 );
                                          }
                                        }
                                        v450 = v639;
                                        v639[3] = v656;
                                        *(__m128i *)(v450 + 1) = _mm_loadu_si128(&v655);
                                        *v450 = -1;
                                        sub_14067F940(&v579);
                                        sub_14067F6F0((const __m128i **)&v575);
                                        _RAX = v694 - 1;
                                        if ( (unsigned __int64)(v694 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                                          HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v662, v694, 1) >> 32;
                                        v452 = v641.m256i_i64[1];
                                        if ( v641.m256i_i64[1] )
                                        {
                                          v453 = v641.m256i_i64[3];
                                          if ( v641.m256i_i64[3] )
                                          {
                                            v454 = v666;
                                            v455 = v666 + 1;
                                            _R15D = ~_mm_movemask_epi8(_mm_load_si128(v666));
                                            do
                                            {
                                              if ( !(_WORD)_R15D )
                                              {
                                                do
                                                {
                                                  v457 = _mm_load_si128(v455);
                                                  v454 -= 24;
                                                  ++v455;
                                                  _R15D = _mm_movemask_epi8(v457) ^ 0xFFFF;
                                                }
                                                while ( !_R15D );
                                              }
                                              __asm { tzcnt   eax, r15d }
                                              v458 = -3 * _RAX;
                                              v459 = *((_QWORD *)&v454[-1] + v458 - 1);
                                              if ( v459 )
                                                sub_140001660(v454[-1].m128i_i64[v458], v459, 1);
                                              --v453;
                                              _RAX = _R15D & (unsigned int)(_R15D - 1);
                                              _R15D &= _R15D - 1;
                                            }
                                            while ( v453 );
                                          }
                                          v487 = (24 * v452 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                                          v488 = v487 + v452 + 17;
                                          if ( v488 )
                                            sub_140001660((char *)v666 - v487, v488, 16);
                                        }
                                        v770 = 0;
                                        sub_14067F5D0(v643);
                                        v768 = 0;
                                        sub_14067F810((const __m128i **)&v568);
                                        if ( v603 )
                                          sub_140001660(v604, v603, 1);
                                        return v639;
                                      }
                                      continue;
                                    }
                                  }
                                  v361 = BYTE1(v672);
                                  goto LABEL_504;
                                }
                              }
                              else
                              {
                                if ( BYTE1(v672) )
                                  goto LABEL_579;
                                BYTE1(v672) = 1;
                                v364 = v668.m128i_i64[1] - v668.m128i_i64[0];
                                if ( ((unsigned __int8)v672 | (v668.m128i_i64[1] != v668.m128i_i64[0])) != 1 )
                                  goto LABEL_579;
                                v365 = v669.m256i_i64[0] + v668.m128i_i64[0];
                                if ( !v364 )
                                  goto LABEL_517;
                              }
                              if ( *(_BYTE *)(v365 + v364 - 1) == 10 )
                              {
                                if ( v364 == 1 )
                                {
                                  v364 = 0;
                                }
                                else if ( *(_BYTE *)(v365 + v364 - 2) == 13 )
                                {
                                  v364 -= 2;
                                }
                                else
                                {
                                  --v364;
                                }
                              }
                              goto LABEL_517;
                            }
                          }
LABEL_480:
                          if ( !v302 || *(_QWORD *)(v302 + 144) == -1 )
                          {
                            v645.m128i_i64[0] = -1;
                            if ( !(_BYTE)v746 )
                              goto LABEL_485;
                          }
                          else
                          {
                            v755 = 1;
                            v754 = 1;
                            sub_14149C500(&v645, v302 + 144);
                            if ( !(_BYTE)v746 )
                              goto LABEL_485;
                          }
                          goto LABEL_487;
                        }
LABEL_469:
                        v756 = 1;
                        sub_14149C500(v274, v593);
                        if ( v668.m128i_i64[0] == -1 )
                          goto LABEL_472;
                        v348 = v668.m128i_i64[1];
                        v647 = v668;
                        v648 = v669.m256i_i64[0];
                        if ( !(_BYTE)v766 )
                          goto LABEL_477;
                        goto LABEL_480;
                      }
                    }
                    else
                    {
                      if ( v302 )
                      {
                        v343 = sub_14033BC10(*(_QWORD *)(v302 + 8), *(_QWORD *)(v302 + 16));
                        if ( v343 )
                        {
                          v337 = v344;
                          if ( v344 )
                          {
                            if ( v344 < 0 )
                            {
                              v346 = 0;
                              goto LABEL_697;
                            }
                            v338 = v303;
                            v345 = v343;
                            nullsub_1(_RCX);
                            v346 = 1;
                            v347 = sub_140001650(v337, 1);
                            if ( !v347 )
                            {
                              v587 = v337;
LABEL_697:
                              sub_1416C2D4B(v346, v587);
                            }
                            v342 = v347;
                            sub_141684120(v347, v345, v337);
                            v587 = v342;
                            goto LABEL_450;
                          }
                        }
                      }
                      if ( v588.m256i_i64[2] == -1 )
                      {
                        v668.m128i_i64[0] = -1;
                      }
                      else
                      {
                        sub_14149C500(v274, &v588.m256i_u64[2]);
                        if ( v668.m128i_i64[0] != -1 )
                          goto LABEL_453;
                      }
                      if ( !(_BYTE)v705 )
                      {
                        sub_14149C500(v600, hObject);
                        goto LABEL_457;
                      }
                    }
                    nullsub_1(_RCX);
                    v349 = (__m128i *)sub_140001650(16, 1);
                    if ( !v349 )
                      sub_1416C2D4B(1, 16);
                    *v349 = _mm_loadu_si128((const __m128i *)&xmmword_141788800);
                    v348 = 16;
                    v710 = 16;
                    v715 = 16;
                    v717 = (__int64)v349;
                    if ( v302 )
                      goto LABEL_462;
LABEL_465:
                    if ( v303 )
                    {
                      v163.m128i_i64[0] = v303[1].m128i_i64[1];
                      v712 = *(double *)v163.m128i_i64 > 0.0;
                      v350 = *(_QWORD *)(v315 - 16);
                      if ( (_BYTE)v737 )
                        goto LABEL_472;
                    }
                    else
                    {
                      v712 = 0;
                      v350 = *(_QWORD *)(v315 - 16);
                      if ( (_BYTE)v737 )
                        goto LABEL_472;
                    }
                    goto LABEL_469;
                  }
                }
              }
              else
              {
                v734 = v315 - 8;
              }
              LODWORD(v711) = 0;
              goto LABEL_438;
            }
          }
          else
          {
            v302 = 0;
            v761 = 0;
            if ( *(_QWORD *)&v643[24] )
              goto LABEL_403;
          }
          v303 = nullptr;
          goto LABEL_414;
        }
      }
      break;
    }
    sub_14149C500(v608, v286 - 128);
    v663 = *(void **)&v608[8];
    v761 = *(_QWORD *)v608;
    v700 = *(void **)&v608[16];
    goto LABEL_378;
  }
  v91 = v639;
  *v639 = 2;
  v91[1] = v52;
  if ( *(_QWORD *)v600 )
    sub_140001660(v767, *(_QWORD *)v600, 1);
  v770 = 1;
  sub_14067F5D0(v643);
LABEL_94:
  v768 = 1;
  sub_14067F810((const __m128i **)&v568);
  if ( v603 )
    sub_140001660(v604, v603, 1);
  sub_14067F6F0((const __m128i **)&v560);
  return v639;
}