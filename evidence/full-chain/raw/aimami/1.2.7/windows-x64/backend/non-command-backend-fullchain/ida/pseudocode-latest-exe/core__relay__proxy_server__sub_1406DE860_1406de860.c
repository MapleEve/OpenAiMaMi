// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406de860 | successor of pre-update 0x140d46580 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
char __fastcall sub_1406DE860(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  volatile signed __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  __m128i v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r13
  _QWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  char *v17; // r9
  _BYTE *v18; // r13
  _OWORD *v19; // r12
  char *v20; // r10
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // bl
  __int64 v24; // r9
  __int64 v25; // r11
  __m128i v26; // xmm0
  char *v27; // rdi
  __int64 v28; // r8
  char *v29; // r11
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r15
  _BYTE *v34; // r9
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rdx
  char *v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rbx
  _QWORD *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // r15
  _BYTE *v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  char v50; // al
  char v51; // al
  volatile signed __int64 *v52; // r12
  _BYTE *v53; // rdi
  int v54; // eax
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i v58; // xmm2
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // r14
  __int64 v67; // rbx
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  _BYTE *v70; // r13
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rsi
  char v74; // al
  __int64 v75; // r13
  __int64 v76; // rsi
  _DWORD *v77; // rbx
  __int64 v78; // rsi
  __int64 v79; // r8
  __int64 v80; // r15
  __int128 v81; // xmm6
  unsigned __int8 v82; // si
  volatile signed __int64 *v83; // r12
  __int64 v84; // r14
  __int128 v85; // xmm1
  __int128 v86; // xmm1
  __int64 v87; // rax
  _BYTE *v88; // rax
  char v89; // cl
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // r14
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r12
  char v101; // al
  __int64 v102; // rax
  __int128 v103; // xmm0
  __m128i v104; // xmm1
  __m128i v105; // xmm2
  __m128i *v106; // rdi
  __int64 v107; // rax
  unsigned __int64 v108; // r15
  __m128i v109; // xmm0
  __int64 v110; // r8
  __m128i v111; // xmm0
  __int128 v112; // xmm2
  __int128 v113; // xmm3
  __int128 v114; // xmm1
  __int64 v115; // r9
  __int64 v116; // rsi
  __int64 v117; // rcx
  _QWORD *v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // rax
  __int64 v122; // r10
  __int64 v123; // rax
  __int64 v124; // rsi
  unsigned __int32 v125; // eax
  bool v126; // of
  signed __int32 v127; // eax
  int v128; // ett
  __int64 v129; // rt0
  __int64 v130; // rdx
  unsigned __int32 v131; // eax
  bool v132; // of
  signed __int32 v133; // eax
  int v134; // ett
  __int64 v135; // rt0
  __int64 v136; // rax
  __int64 v137; // r9
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // r8
  _BYTE *v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // r12
  __int64 v151; // r15
  __int64 v152; // rcx
  __int128 v153; // xmm1
  __int128 v154; // xmm2
  __int128 v155; // xmm3
  __int64 v156; // rdi
  _QWORD *v157; // rbx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // r10
  __int64 v163; // r11
  __int64 v164; // rsi
  __int64 v165; // rdx
  char *v166; // rdx
  __int64 v167; // rsi
  __int64 v168; // rdx
  __int64 v169; // rdx
  __int128 v170; // xmm6
  __int128 v171; // xmm6
  char v172; // of
  __int64 v173; // rcx
  volatile signed __int64 *v174; // rsi
  __int64 v175; // rt0
  volatile signed __int64 *v176; // r15
  __int64 v177; // rt0
  __int64 v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdi
  __int64 v183; // rbx
  __int128 v184; // xmm6
  __int64 v185; // r13
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rdx
  volatile signed __int64 *v192; // rbx
  int v193; // edi
  __int64 v194; // r14
  int v195; // edx
  __int64 v196; // rdi
  _QWORD *v197; // r12
  __int64 v198; // rsi
  signed __int64 v199; // rt0
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rax
  __m128i v203; // xmm0
  __int64 v204; // rax
  __int64 v205; // r8
  __int64 v206; // r9
  _BYTE *v207; // r15
  __int64 v208; // rbx
  __int64 v209; // rdi
  __m128i v210; // xmm0
  __int64 v211; // rdx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // r10
  __int64 v217; // r11
  __int64 v218; // rbx
  __int128 v219; // xmm1
  __int64 v220; // rsi
  __int64 v221; // r12
  __int64 v222; // r15
  __m128i v223; // xmm1
  __m128i v224; // xmm2
  __m128i v225; // xmm3
  unsigned __int64 v226; // rdx
  __int64 v227; // r12
  __int64 v228; // rcx
  _BYTE *v229; // r13
  __int64 v230; // rbx
  __m128i v231; // xmm0
  _BYTE *v232; // rbx
  int v233; // edx
  __m128i v234; // xmm0
  __int64 v235; // rsi
  unsigned __int64 v236; // rcx
  __int64 v237; // rdi
  __int64 v238; // r12
  __int64 v239; // rsi
  char result; // al
  unsigned __int8 v241; // al
  void *v242; // r9
  __int64 v243; // rcx
  __int64 v244; // rdx
  volatile signed __int64 *v245; // rbx
  int v246; // edi
  __int64 v247; // r14
  int v248; // edx
  __int64 v249; // rsi
  __int64 v250; // rsi
  __m128i v251; // xmm0
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // rcx
  __int64 v255; // rdx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rax
  __int64 v259; // r10
  __int64 v260; // r11
  unsigned __int16 *v261; // rsi
  int v262; // edi
  __int16 v263; // cx
  __m128i v264; // xmm0
  __int64 v265; // rbx
  __int16 v266; // kr80_2
  __m128i v267; // xmm0
  __int128 v268; // rax
  __m128i v269; // xmm0
  int v270; // edx
  __m128i v271; // xmm0
  __int64 v272; // rax
  __int16 v273; // r14
  __int64 v274; // rsi
  __int64 v275; // rdi
  __int64 v276; // rax
  __int64 v277; // rax
  __m128i v278; // xmm0
  int v279; // ecx
  unsigned int v280; // ecx
  int v281; // edx
  _BYTE *v282; // rsi
  __m128i v283; // xmm0
  __m128i v284; // xmm0
  __m128i v285; // xmm0
  void (__fastcall *v286)(unsigned __int64 *, __int64, __int64); // rax
  _BYTE *v287; // rsi
  __m128i v288; // xmm0
  __m128i v289; // xmm0
  __int64 v290; // rsi
  __int64 v291; // r14
  __int64 v292; // rsi
  const __m128i *v294; // r13
  const __m128i *v295; // rdi
  __m128i v297; // xmm0
  __int64 v298; // rax
  __int64 v299; // rdx
  unsigned __int64 v300; // rax
  __int64 v301; // r14
  bool v302; // zf
  __int64 v303; // r14
  __int64 v304; // rsi
  __int64 v305; // rdx
  __int64 v306; // rax
  int v307; // eax
  unsigned int v308; // eax
  int v309; // ecx
  __int64 v310; // rdx
  __int64 v311; // rcx
  __int64 v312; // rax
  __int64 v313; // r14
  __int128 v314; // xmm1
  __int64 v315; // rcx
  unsigned __int64 v316; // rax
  __int64 v317; // rcx
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // rax
  __int64 v321; // rsi
  unsigned __int32 v322; // eax
  bool v323; // of
  signed __int32 v324; // eax
  int v325; // ett
  __int64 v326; // rt0
  __int64 v327; // rdx
  unsigned __int32 v328; // eax
  bool v329; // of
  signed __int32 v330; // eax
  int v331; // ett
  __int64 v332; // rt0
  __int64 v333; // rax
  __int64 v334; // r9
  __int64 v335; // rax
  __m128i v336; // xmm0
  __int64 v337; // rax
  __m128i v338; // xmm0
  __int64 v339; // rax
  __int64 v340; // rcx
  __int64 v341; // rdx
  __int16 *v342; // r15
  __int64 v343; // rsi
  __int64 v344; // rdi
  __int64 v345; // rcx
  __int64 v346; // rdx
  __int64 v347; // rdx
  __int128 v348; // xmm1
  __int128 v349; // xmm2
  __int128 v350; // xmm3
  unsigned __int64 v351; // r9
  __int64 v352; // rdi
  __int64 v353; // rcx
  __int64 v354; // rbx
  __int64 v355; // rcx
  __int64 v356; // rdx
  int v357; // edi
  __int64 v358; // r14
  int v359; // edx
  __int64 v360; // rax
  __int64 v361; // rdx
  __m128i v362; // xmm0
  __m128i v363; // xmm0
  __int16 v364; // si
  __int64 v365; // r12
  __int64 v366; // rax
  __int64 v367; // rdi
  __int64 v368; // r12
  __int64 v369; // rbx
  __int64 v370; // rcx
  __int64 v371; // rdx
  __int64 v372; // r8
  __int64 v373; // r9
  __int64 v374; // r10
  __int64 v375; // r11
  __int64 v376; // rsi
  _BYTE *v377; // r12
  __int16 v378; // dx
  __int16 v379; // cx
  __m128i v380; // xmm0
  char v381; // of
  __int64 v382; // rdx
  __int64 v383; // rcx
  volatile signed __int64 *v384; // rsi
  __int64 v385; // rt0
  volatile signed __int64 *v386; // rax
  __int64 v387; // rt0
  __int64 v388; // rdx
  volatile signed __int64 *v389; // r14
  __int64 v390; // rdx
  __int64 v391; // rcx
  __int64 v392; // rax
  __m128i v393; // xmm0
  __int64 v394; // rax
  __m128i v395; // xmm0
  __int128 v396; // xmm1
  __int128 v397; // xmm2
  __int64 (__fastcall **v398)(); // rsi
  __int64 v399; // r13
  __int64 v400; // rbx
  __int64 v401; // rsi
  __int64 v402; // r10
  unsigned __int64 v403; // rdx
  __int64 v404; // rax
  __int64 v405; // rdx
  __int64 v406; // r8
  __int64 v407; // rdi
  __int64 i; // rax
  __int64 v409; // rcx
  __int64 v410; // rcx
  __int64 v411; // r9
  int v412; // edx
  __m128i v413; // xmm0
  void (__fastcall *v414)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v415; // rdx
  __int64 v416; // rdx
  __int64 v417; // r8
  __int64 v418; // r9
  __int64 v419; // rax
  __int64 v420; // rcx
  __int64 v421; // r10
  __int64 v422; // r11
  __int64 v423; // r15
  __int128 v424; // xmm6
  unsigned __int8 v425; // si
  __int64 v426; // r14
  __int64 v427; // rdx
  int v428; // edx
  __m128i v429; // xmm0
  __int64 v430; // rax
  __int64 v431; // rsi
  __int64 v432; // rdx
  __m128i v433; // xmm0
  __m128i v434; // xmm0
  volatile signed __int64 *v435; // r15
  __m128i v436; // xmm1
  __m128i *v437; // rax
  int v438; // ebx
  __int64 v439; // rdx
  __int64 v440; // r8
  __int64 v441; // r9
  _BYTE *v442; // rsi
  __int64 v443; // rdi
  __int64 v444; // r14
  __int64 v445; // rdx
  __int64 v446; // rsi
  __int64 v447; // rdx
  __int64 v448; // rax
  __int64 v449; // rax
  __int64 v450; // rsi
  __int64 v451; // rax
  __int128 v452; // xmm0
  _OWORD *v453; // rax
  __int128 v454; // xmm1
  const __m128i *v455; // r10
  __int64 v456; // rdx
  __int64 v457; // r8
  __int64 v458; // r9
  __int16 v459; // ax
  int v460; // ecx
  unsigned int v461; // ecx
  int v462; // edx
  __int64 v463; // rdx
  __int64 v464; // rdx
  void (__fastcall *v465)(__int64, __int64, __int64); // rax
  __int64 v466; // r8
  __int64 v467; // rsi
  __int64 v468; // rdx
  __int64 v469; // rax
  __int64 v470; // rax
  __m128i v471; // xmm0
  __m128i si128; // xmm0
  __int64 v473; // rdx
  __m128i v474; // xmm1
  __m128i v475; // xmm2
  __m128i v476; // xmm3
  __m128i v477; // xmm0
  __m128i v478; // xmm0
  __int64 v479; // rsi
  __m128i v480; // xmm0
  __int64 v481; // rcx
  __int64 v482; // rsi
  __int64 v483; // rcx
  __int64 v484; // rsi
  __int64 v485; // r14
  __int64 v486; // rax
  __int64 v487; // r15
  __m128i v488; // [rsp+60h] [rbp-20h] BYREF
  __int128 v489; // [rsp+70h] [rbp-10h]
  __int64 v490[142]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v491; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v492; // [rsp+500h] [rbp+480h]
  __m128i v493[3]; // [rsp+510h] [rbp+490h] BYREF
  _BYTE v494[1120]; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v495; // [rsp+9B0h] [rbp+930h]
  __int64 v496; // [rsp+9C0h] [rbp+940h]
  __m128i v497; // [rsp+9D0h] [rbp+950h] BYREF
  __m128i v498; // [rsp+9E0h] [rbp+960h]
  __m128i v499; // [rsp+9F0h] [rbp+970h]
  __m128i v500; // [rsp+A00h] [rbp+980h]
  __m128i v501; // [rsp+A10h] [rbp+990h]
  __m128i v502; // [rsp+A20h] [rbp+9A0h]
  __m128i v503; // [rsp+A30h] [rbp+9B0h] BYREF
  __m128i v504; // [rsp+A40h] [rbp+9C0h]
  __m128i v505; // [rsp+A50h] [rbp+9D0h]
  __m128i v506; // [rsp+A60h] [rbp+9E0h]
  __m128i v507; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 (__fastcall **v508)(); // [rsp+A80h] [rbp+A00h]
  __int64 v509; // [rsp+A90h] [rbp+A10h]
  _BYTE *v510; // [rsp+A98h] [rbp+A18h]
  _BYTE *v511; // [rsp+AA0h] [rbp+A20h]
  _BYTE *v512; // [rsp+AA8h] [rbp+A28h]
  __int64 v513; // [rsp+AB0h] [rbp+A30h]
  volatile signed __int64 *v514; // [rsp+AB8h] [rbp+A38h]
  __m128i v515; // [rsp+AC0h] [rbp+A40h]
  __m128i v516; // [rsp+AD0h] [rbp+A50h]
  __m128i v517; // [rsp+AE0h] [rbp+A60h]
  __m128i v518; // [rsp+AF0h] [rbp+A70h]
  __m128i v519; // [rsp+B00h] [rbp+A80h]
  __m128i v520; // [rsp+B10h] [rbp+A90h]
  __m128i v521; // [rsp+B20h] [rbp+AA0h] BYREF
  __int64 (__fastcall **v522)(); // [rsp+B30h] [rbp+AB0h]
  _BYTE v523[136]; // [rsp+B40h] [rbp+AC0h] BYREF
  __m128i v524; // [rsp+BC8h] [rbp+B48h] BYREF
  const char *v525; // [rsp+FE0h] [rbp+F60h]
  __int64 v526; // [rsp+FE8h] [rbp+F68h]
  __int64 v527; // [rsp+FF0h] [rbp+F70h]
  volatile signed __int64 *v528; // [rsp+FF8h] [rbp+F78h]
  volatile signed __int64 *v529; // [rsp+1000h] [rbp+F80h]
  char v530; // [rsp+1008h] [rbp+F88h]
  __int64 v531; // [rsp+1010h] [rbp+F90h]
  _BYTE *v532; // [rsp+1018h] [rbp+F98h]
  _BYTE *v533; // [rsp+1020h] [rbp+FA0h]
  _BYTE *v534; // [rsp+1028h] [rbp+FA8h]
  __int64 v535; // [rsp+1030h] [rbp+FB0h]
  __int64 v536; // [rsp+1038h] [rbp+FB8h]
  _BYTE *v537; // [rsp+1040h] [rbp+FC0h]
  _OWORD *v538; // [rsp+1048h] [rbp+FC8h]
  _BYTE *v539; // [rsp+1050h] [rbp+FD0h]
  __int64 v540; // [rsp+1058h] [rbp+FD8h]
  __int64 v541; // [rsp+1060h] [rbp+FE0h]
  __int64 v542; // [rsp+1068h] [rbp+FE8h]
  __m128i v543; // [rsp+1070h] [rbp+FF0h] BYREF
  __m128i v544; // [rsp+1080h] [rbp+1000h]
  __m128i v545; // [rsp+1090h] [rbp+1010h]
  __m128i v546; // [rsp+10A0h] [rbp+1020h]
  __m128i v547; // [rsp+10B0h] [rbp+1030h]
  __m128i v548; // [rsp+10C0h] [rbp+1040h]
  __m128i v549; // [rsp+10D0h] [rbp+1050h] BYREF
  __int64 (__fastcall **v550)(); // [rsp+10E0h] [rbp+1060h]
  _BYTE v551[112]; // [rsp+10F0h] [rbp+1070h] BYREF
  __int64 (__fastcall **v552)(); // [rsp+1160h] [rbp+10E0h]
  __int64 v553; // [rsp+1170h] [rbp+10F0h]
  _BYTE *v554; // [rsp+1178h] [rbp+10F8h]
  _BYTE *v555; // [rsp+1180h] [rbp+1100h]
  _BYTE *v556; // [rsp+1188h] [rbp+1108h]
  _BYTE *v557; // [rsp+1190h] [rbp+1110h]
  __int64 v558; // [rsp+1198h] [rbp+1118h]
  __m128i v559; // [rsp+11A0h] [rbp+1120h] BYREF
  __m128i v560; // [rsp+11B0h] [rbp+1130h]
  __m128i v561; // [rsp+11C0h] [rbp+1140h]
  __m128i v562; // [rsp+11D0h] [rbp+1150h]
  __m128i v563; // [rsp+11E0h] [rbp+1160h]
  __m128i v564; // [rsp+11F0h] [rbp+1170h]
  __m128i v565; // [rsp+1200h] [rbp+1180h]
  __int64 (__fastcall **v566)(); // [rsp+1210h] [rbp+1190h]
  __m128i v567; // [rsp+1230h] [rbp+11B0h] BYREF
  __m128i v568; // [rsp+1240h] [rbp+11C0h]
  __m128i v569; // [rsp+1250h] [rbp+11D0h]
  __m128i v570; // [rsp+1260h] [rbp+11E0h]
  __m128i v571; // [rsp+1270h] [rbp+11F0h] BYREF
  __m128i v572; // [rsp+1280h] [rbp+1200h] BYREF
  __m128i v573; // [rsp+1290h] [rbp+1210h] BYREF
  _QWORD v574[3]; // [rsp+12A8h] [rbp+1228h] BYREF
  _BYTE *v575; // [rsp+12C0h] [rbp+1240h]
  _BYTE *v576; // [rsp+12C8h] [rbp+1248h]
  __int64 v577; // [rsp+12D0h] [rbp+1250h]
  volatile signed __int64 *v578; // [rsp+12D8h] [rbp+1258h]
  __m128i v579; // [rsp+12E0h] [rbp+1260h] BYREF
  __int128 v580; // [rsp+12F0h] [rbp+1270h]
  __m128i v581; // [rsp+1300h] [rbp+1280h] BYREF
  __int128 v582; // [rsp+1310h] [rbp+1290h]
  __int128 v583; // [rsp+1320h] [rbp+12A0h]
  __int128 v584; // [rsp+1330h] [rbp+12B0h]
  __int128 v585; // [rsp+1340h] [rbp+12C0h]
  __int128 v586; // [rsp+1350h] [rbp+12D0h]
  __m128i v587; // [rsp+1360h] [rbp+12E0h] BYREF
  __int64 (__fastcall **v588)(); // [rsp+1370h] [rbp+12F0h]
  __m128i v589; // [rsp+1380h] [rbp+1300h] BYREF
  __m128i v590; // [rsp+1390h] [rbp+1310h] BYREF
  _BYTE *v591; // [rsp+13A8h] [rbp+1328h]
  __m128i v592; // [rsp+13B0h] [rbp+1330h] BYREF
  __m128i v593; // [rsp+13C0h] [rbp+1340h]
  __m128i v594; // [rsp+13D0h] [rbp+1350h]
  __m128i v595; // [rsp+13E0h] [rbp+1360h]
  __m128i v596; // [rsp+13F0h] [rbp+1370h]
  __m128i v597; // [rsp+1400h] [rbp+1380h]
  __m128i v598; // [rsp+1410h] [rbp+1390h]
  __int128 v599; // [rsp+1420h] [rbp+13A0h]
  _BYTE *v600; // [rsp+1438h] [rbp+13B8h]
  _BYTE *v601; // [rsp+1440h] [rbp+13C0h]
  _BYTE *v602; // [rsp+1448h] [rbp+13C8h]
  _BYTE *v603; // [rsp+1450h] [rbp+13D0h]
  _OWORD *v604; // [rsp+1458h] [rbp+13D8h]
  _BYTE *v605; // [rsp+1460h] [rbp+13E0h]
  _OWORD *v606; // [rsp+1468h] [rbp+13E8h]
  _BYTE *v607; // [rsp+1470h] [rbp+13F0h]
  _BYTE *v608; // [rsp+1478h] [rbp+13F8h]
  _BYTE *v609; // [rsp+1480h] [rbp+1400h]
  char v610; // [rsp+148Fh] [rbp+140Fh] BYREF
  __int64 v611; // [rsp+1490h] [rbp+1410h]
  __int64 v612; // [rsp+1498h] [rbp+1418h]
  _BYTE *v613; // [rsp+14A0h] [rbp+1420h]
  char v614; // [rsp+14ABh] [rbp+142Bh]
  char v615; // [rsp+14ACh] [rbp+142Ch]
  char v616; // [rsp+14ADh] [rbp+142Dh]
  char v617; // [rsp+14AEh] [rbp+142Eh]
  char v618; // [rsp+14AFh] [rbp+142Fh]
  volatile signed __int64 *v619; // [rsp+14B0h] [rbp+1430h]
  char v620; // [rsp+14BEh] [rbp+143Eh]
  char v621; // [rsp+14BFh] [rbp+143Fh]
  char *v622; // [rsp+14C0h] [rbp+1440h]
  char v623; // [rsp+14CCh] [rbp+144Ch]
  char v624; // [rsp+14CDh] [rbp+144Dh]
  char v625; // [rsp+14CEh] [rbp+144Eh]
  char v626; // [rsp+14CFh] [rbp+144Fh]
  __int64 v627; // [rsp+14D0h] [rbp+1450h]
  char v628; // [rsp+14DDh] [rbp+145Dh]
  char v629; // [rsp+14DEh] [rbp+145Eh]
  char v630; // [rsp+14DFh] [rbp+145Fh]
  __int64 v631; // [rsp+14E0h] [rbp+1460h]
  _BYTE *v632; // [rsp+14E8h] [rbp+1468h]
  __int64 v633; // [rsp+14F0h] [rbp+1470h]
  __int64 v634; // [rsp+14F8h] [rbp+1478h]

  v634 = -2;
  v3 = a3;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a2 + 192);
  v633 = a2;
  switch ( v5 )
  {
    case 0LL:
      v627 = a3;
      v619 = a1;
      *(_WORD *)(a2 + 193) = 256;
      v622 = *(char **)(a2 + 32);
      v6 = *(_QWORD *)(a2 + 40);
      v631 = *(_QWORD *)(a2 + 48);
      v7 = _mm_loadu_si128((const __m128i *)a2);
      *(_OWORD *)(a2 + 120) = *(_OWORD *)(a2 + 16);
      *(__m128i *)(a2 + 104) = v7;
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_QWORD *)(a2 + 64);
      v611 = *(_QWORD *)(a2 + 72);
      v632 = *(_BYTE **)(a2 + 80);
      v10 = *(_QWORD *)(a2 + 88);
      v11 = *(unsigned __int8 *)(v6 + 254);
      v12 = *(_QWORD *)(v6 + 56);
      v13 = *(_QWORD **)(v6 + 64);
      if ( v11 == 2 )
      {
        v15 = v9;
        v14 = v8;
        sub_140992AC0(v633 + 136, v12, (_DWORD)v13, v10, *(_QWORD *)(a2 + 96));
      }
      else if ( v11 == 1 )
      {
        v14 = v8;
        v15 = v9;
        v16 = sub_14076EEF0(aCompact, 7, v8, v9);
        v17 = "/responses/responses/compact";
        if ( v16 )
          v17 = "/responses/compact";
        sub_140992E20(v633 + 136, v12, (_DWORD)v13, (_DWORD)v17, 8LL * v16 + 10, v10);
      }
      else
      {
        v15 = v9;
        v14 = v8;
        sub_140992E20(v633 + 136, v12, (_DWORD)v13, (unsigned int)&xmmword_141A39A3C, 20, 0);
      }
      v41 = v633;
      v35 = v633 + 104;
      if ( *(_BYTE *)(v633 + 136) )
      {
        v632 = *(_BYTE **)(v633 + 144);
        v42 = *(_QWORD *)(v633 + 160);
        LOWORD(v41) = 400;
        v631 = *(_QWORD *)(v633 + 152);
        sub_1407360F0((unsigned int)v523, v41, v631, v42, (__int64)aProxyUpstream, 14);
        v522 = *(__int64 (__fastcall ***)())&v523[112];
        v521 = *(__m128i *)&v523[96];
        v520 = *(__m128i *)&v523[80];
        v519 = *(__m128i *)&v523[64];
        v518 = *(__m128i *)&v523[48];
        v517 = *(__m128i *)&v523[32];
        v516 = *(__m128i *)&v523[16];
        v515 = _mm_loadu_si128((const __m128i *)v523);
        v43 = *(_QWORD *)&v523[120];
        v44 = v619;
        if ( v632 )
          sub_140001660(v631, v632, 1);
LABEL_18:
        sub_1406C0ED0(v35);
        v45 = v633;
        *(_BYTE *)(v633 + 194) = 0;
        v46 = 5;
LABEL_365:
        *v44 = v46;
        v474 = v516;
        v475 = v517;
        v476 = v518;
        *(__m128i *)(v44 + 1) = v515;
        *(__m128i *)(v44 + 3) = v474;
        *(__m128i *)(v44 + 5) = v475;
        *(__m128i *)(v44 + 7) = v476;
        *(__m128i *)(v44 + 9) = v519;
        *(__m128i *)(v44 + 11) = v520;
        *(__m128i *)(v44 + 13) = _mm_load_si128(&v521);
        v44[15] = v522;
        v44[16] = v43;
        v44[17] = v35;
        v44[18] = v13;
        result = 1;
        goto LABEL_367;
      }
      *(_QWORD *)(v633 + 184) = *(_QWORD *)(v633 + 160);
      *(__m128i *)(v41 + 168) = _mm_loadu_si128((const __m128i *)(v41 + 144));
      v47 = (_BYTE *)sub_1416724D0(aStream, 6, v35);
      if ( v47 )
        v23 = v47[1] & (*v47 == 1);
      else
        v23 = 0;
      v32 = v14;
      v38 = v622;
      v54 = *(unsigned __int8 *)(v6 + 254);
      if ( v54 == 2 )
      {
        a2 = v633;
        v30 = *(_QWORD *)(v633 + 176);
        v31 = *(_QWORD *)(v633 + 184);
        *(_BYTE *)(v633 + 194) = 0;
        v28 = a2 + 200;
        v85 = *(_OWORD *)(v35 + 16);
        *(_OWORD *)(a2 + 200) = *(_OWORD *)v35;
        *(_OWORD *)(a2 + 216) = v85;
        *(_QWORD *)(a2 + 232) = v38;
        *(_QWORD *)(a2 + 240) = v6;
        *(_QWORD *)(a2 + 248) = v30;
        *(_QWORD *)(a2 + 256) = v31;
        v29 = v38;
        *(_QWORD *)(a2 + 264) = v631;
        *(_QWORD *)(a2 + 272) = v14;
        *(_QWORD *)(a2 + 280) = v15;
        v33 = v611;
        *(_QWORD *)(a2 + 288) = v611;
        v34 = v632;
        *(_QWORD *)(a2 + 296) = v632;
        v27 = (char *)(a2 + 1098);
        *(_BYTE *)(a2 + 1098) = 0;
        v3 = v627;
LABEL_67:
        *(_DWORD *)(a2 + 1103) = 0;
        *(_DWORD *)(a2 + 1100) = 0;
        *(_QWORD *)(a2 + 304) = v29;
        *(_QWORD *)(a2 + 312) = v6;
        *(_QWORD *)(a2 + 320) = v30;
        *(_QWORD *)(a2 + 328) = v31;
        *(_BYTE *)(a2 + 1106) = 1;
        v35 = a2 + 336;
        v632 = (_BYTE *)v28;
        v86 = *(_OWORD *)(v28 + 16);
        *(__m128i *)(a2 + 336) = _mm_loadu_si128((const __m128i *)v28);
        *(_OWORD *)(a2 + 352) = v86;
        *(_QWORD *)(a2 + 368) = v32;
        *(_QWORD *)(a2 + 376) = v15;
        if ( !v33 )
        {
          v33 = *(_QWORD *)(v6 + 104);
          v34 = *(_BYTE **)(v6 + 112);
        }
        v87 = v633;
        *(_QWORD *)(v633 + 384) = v33;
        *(_QWORD *)(v87 + 392) = v34;
        v512 = v632;
        v88 = (_BYTE *)sub_1416724D0(aStream, 6, v35);
        v622 = v27;
        if ( !v88 )
          v88 = off_142240158;
        v627 = v3;
        v89 = v88[1] & (*v88 == 1);
        v90 = v633;
        *(_BYTE *)(v633 + 1099) = v89;
        v91 = *(_QWORD **)(v90 + 312);
        v92 = v91[1];
        v93 = v91[2];
        v94 = v91[13];
        v95 = v91[14];
        v575 = v632;
        sub_140734C10(v523, v631);
        v96 = 0;
        v631 = *(_QWORD *)v523;
        v97 = *(_QWORD *)&v523[16];
        v611 = *(_QWORD *)&v523[8];
        if ( *(_QWORD *)v523 != -1 )
          v96 = *(_QWORD *)&v523[8];
        v98 = sub_14166BC00(v35, aReasoningEffor, 17);
        if ( v98 )
        {
          if ( *(_BYTE *)v98 == 3 )
            v99 = *(_QWORD *)(v98 + 16);
          else
            v99 = 0;
          v98 = *(_QWORD *)(v98 + 24);
        }
        else
        {
          v99 = 0;
        }
        v200 = sub_1407BFE10(v92, v93, v94, v95, v96, v97, v35, v99, v98, 1);
        v201 = v633;
        *(_QWORD *)(v633 + 400) = v200;
        *(_BYTE *)(v201 + 1103) = 1;
        if ( v631 > 0 )
          sub_140001660(v611, v631, 1);
        v202 = v633;
        *(_BYTE *)(v633 + 1106) = 0;
        v203 = _mm_loadu_si128((const __m128i *)v35);
        *(_OWORD *)&v523[16] = *(_OWORD *)(v35 + 16);
        *(__m128i *)v523 = v203;
        v204 = *(_QWORD *)(v202 + 312);
        v205 = *(_QWORD *)(v204 + 104);
        v206 = *(_QWORD *)(v204 + 112);
        v207 = v632;
        v557 = v632;
        sub_140758760(&v488, v523, v205, v206);
        v208 = v633;
        v209 = v633 + 400;
        if ( v490[0] == -1 )
        {
          v231 = _mm_loadu_si128(&v488);
          *(_OWORD *)&v494[16] = v489;
          *(__m128i *)v494 = v231;
          sub_1407C1CF0(v633 + 400, (unsigned int)aTranslationErr, 17, (unsigned int)aCcSwitchReques, 17);
          v592.m128i_i64[0] = 0;
          v592.m128i_i64[1] = 1;
          v593.m128i_i64[0] = 0;
          *(_QWORD *)&v523[16] = 1610612768;
          *(_QWORD *)v523 = &v592;
          *(_QWORD *)&v523[8] = &off_141A3F3B0;
          v232 = v494;
          if ( (unsigned __int8)sub_14115D480(v494, v523) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_58,
              55,
              (unsigned int)&v610,
              (unsigned int)&unk_141A3BA68,
              (__int64)&off_141A426B8);
          v631 = v592.m128i_i64[0];
          LOWORD(v233) = 400;
          v627 = v592.m128i_i64[1];
          sub_1407360F0((unsigned int)v523, v233, v592.m128i_i32[2], v593.m128i_i32[0], (__int64)aProxyAnthropic, 27);
          v588 = *(__int64 (__fastcall ***)())&v523[112];
          v587 = *(__m128i *)&v523[96];
          v586 = *(_OWORD *)&v523[80];
          v585 = *(_OWORD *)&v523[64];
          v234 = _mm_loadu_si128((const __m128i *)v523);
          v584 = *(_OWORD *)&v523[48];
          v583 = *(_OWORD *)&v523[32];
          v582 = *(_OWORD *)&v523[16];
          v581 = v234;
          v235 = *(_QWORD *)&v523[120];
          if ( v631 )
            sub_140001660(v627, v631, 1);
          v236 = 11;
          if ( (*(_QWORD *)v494 ^ 0x8000000000000000uLL) < 0x15 )
            v236 = *(_QWORD *)v494 ^ 0x8000000000000000uLL;
          v237 = (__int64)v632;
          switch ( v236 )
          {
            case 0uLL:
            case 1uLL:
            case 2uLL:
            case 4uLL:
            case 7uLL:
            case 8uLL:
            case 9uLL:
            case 0xCuLL:
            case 0x12uLL:
              break;
            case 0xBuLL:
              if ( *(_QWORD *)v494 != -1 )
                goto LABEL_147;
              break;
            default:
              v232 = &v494[8];
LABEL_147:
              if ( *(_QWORD *)v232 )
                sub_140001660(*((_QWORD *)v232 + 1), *(_QWORD *)v232, 1);
              break;
          }
          v46 = 5;
          v43 = v235;
LABEL_357:
          if ( *(_BYTE *)(v633 + 1103) && !_InterlockedDecrement64(*(volatile signed __int64 **)(v633 + 400)) )
          {
            v575 = (_BYTE *)v237;
            sub_140CA5C00(v633 + 400);
          }
          v45 = v633;
          *(_BYTE *)(v633 + 1103) = 0;
          *(_BYTE *)(v45 + 1106) = 0;
          v552 = v588;
          *(__m128i *)&v551[96] = v587;
          *(_OWORD *)&v551[80] = v586;
          *(_OWORD *)&v551[64] = v585;
          v471 = _mm_load_si128(&v581);
          *(_OWORD *)&v551[48] = v584;
          *(_OWORD *)&v551[32] = v583;
          *(_OWORD *)&v551[16] = v582;
          *(__m128i *)v551 = v471;
          *(_BYTE *)(v45 + 1098) = 1;
          v4 = v619;
          if ( v46 != -1 )
          {
            v44 = v619;
            v522 = v552;
            v521 = *(__m128i *)&v551[96];
            v520 = *(__m128i *)&v551[80];
            v519 = *(__m128i *)&v551[64];
            si128 = _mm_load_si128((const __m128i *)v551);
            v518 = *(__m128i *)&v551[48];
            v517 = *(__m128i *)&v551[32];
            v516 = *(__m128i *)&v551[16];
            v515 = si128;
            sub_1406BCA10(v237);
            v13 = (_QWORD *)v631;
            goto LABEL_362;
          }
LABEL_366:
          *v4 = -1;
          result = 5;
          goto LABEL_367;
        }
        v210 = _mm_loadu_si128(&v488);
        *(_OWORD *)(v633 + 424) = v489;
        *(__m128i *)(v208 + 408) = v210;
        *(_BYTE *)(v208 + 1102) = 1;
        sub_1419234B0(v208 + 440, v490, 168);
        v211 = *(_QWORD *)(v208 + 368);
        v212 = *(_QWORD *)(v208 + 376);
        v213 = *(_QWORD *)(v208 + 384);
        v214 = *(_QWORD *)(v208 + 392);
        v215 = *(_QWORD *)(v208 + 304);
        v216 = *(_QWORD *)(v208 + 312);
        v217 = *(_QWORD *)(v208 + 320);
        v534 = v207;
        sub_140733260(v215, v211, v212, v213, v214, v216, v217);
        v4 = v619;
        v218 = v633 + 408;
        v534 = v207;
        sub_1407C2100(v209, v633 + 408, 0);
        a2 = v633;
        v219 = *(_OWORD *)(v633 + 320);
        *(__m128i *)(v633 + 1112) = _mm_loadu_si128((const __m128i *)(v633 + 304));
        *(_OWORD *)(a2 + 1128) = v219;
        *(_QWORD *)(a2 + 1144) = v218;
        *(_BYTE *)(a2 + 1176) = 0;
        v3 = v627;
        v27 = v622;
LABEL_131:
        v631 = a2 + 1112;
        sub_1406F2540(v523, a2 + 1112, v3);
        v220 = *(_QWORD *)v523;
        if ( *(_QWORD *)v523 == -2 )
        {
          v74 = 3;
          goto LABEL_163;
        }
        v221 = *(_QWORD *)&v523[8];
        v543 = *(__m128i *)&v523[16];
        v544 = *(__m128i *)&v523[32];
        v545 = *(__m128i *)&v523[48];
        v546 = *(__m128i *)&v523[64];
        v547 = *(__m128i *)&v523[80];
        v548 = *(__m128i *)&v523[96];
        v549 = _mm_loadu_si128((const __m128i *)&v523[112]);
        v550 = *(__int64 (__fastcall ***)())&v523[128];
        if ( *(_BYTE *)(v633 + 1176) == 3 )
        {
          sub_1406C1D00(*(_QWORD *)(v633 + 1160), *(_QWORD *)(v633 + 1168));
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v633 + 1152)) )
          {
            v602 = v632;
            sub_141258070(v633 + 1152);
          }
        }
        if ( (_DWORD)v220 == -1 )
        {
          v631 = v221;
          v503.m128i_i64[0] = v221;
          v628 = 1;
          v241 = sub_141246860(&v503);
          v242 = &unk_141A39B2F;
          if ( v241 )
            v242 = &unk_141A3B448;
          v628 = 1;
          sub_1407C1CF0(v633 + 400, (unsigned int)aTransportError, 15, (_DWORD)v242, 3LL * (v241 ^ 1u) + 7);
          v243 = *(_QWORD *)(v633 + 304);
          v244 = *(unsigned __int8 *)(*(_QWORD *)(v633 + 312) + 253LL);
          v628 = 1;
          sub_14070F130(v243, v244);
          v628 = 0;
          v592.m128i_i64[0] = sub_1412469C0(v631);
          *(_QWORD *)v494 = &v592;
          *(_QWORD *)&v494[8] = sub_141246C00;
          sub_1416DAFA0(v523, &unk_141A39A80, v494);
          v628 = 0;
          sub_14028DCE0(v592.m128i_i64[0]);
          v245 = v4;
          v592 = _mm_loadu_si128((const __m128i *)v523);
          v246 = *(_DWORD *)&v523[16];
          v593.m128i_i64[0] = *(_QWORD *)&v523[16];
          v247 = v592.m128i_i64[1];
          sub_140733260(
            *(_QWORD *)(v633 + 304),
            *(_QWORD *)(v633 + 368),
            *(_QWORD *)(v633 + 376),
            *(_QWORD *)(v633 + 384),
            *(_QWORD *)(v633 + 392),
            *(_QWORD *)(v633 + 312),
            *(_QWORD *)(v633 + 320));
          sub_1416DB410(v494, &v592);
          LOWORD(v248) = 502;
          sub_1407360F0((unsigned int)v523, v248, v247, v246, (__int64)aProxyUpstream, 14);
          v46 = *(_QWORD *)v523;
          v581 = *(__m128i *)&v523[8];
          v582 = *(_OWORD *)&v523[24];
          v583 = *(_OWORD *)&v523[40];
          v584 = *(_OWORD *)&v523[56];
          v585 = *(_OWORD *)&v523[72];
          v586 = *(_OWORD *)&v523[88];
          v587 = _mm_loadu_si128((const __m128i *)&v523[104]);
          v588 = *(__int64 (__fastcall ***)())&v523[120];
          v35 = *(_QWORD *)&v494[8];
          v249 = *(_QWORD *)v494;
          v631 = *(_QWORD *)&v494[16];
          if ( v592.m128i_i64[0] )
            sub_140001660(v247, v592.m128i_i64[0], 1);
          v4 = v245;
          v237 = (__int64)v632;
          v43 = v249;
          goto LABEL_354;
        }
        v222 = v633;
        *(_BYTE *)(v633 + 1105) = 1;
        *(_QWORD *)(v222 + 608) = v220;
        *(_QWORD *)(v222 + 616) = v221;
        v223 = v544;
        v224 = v545;
        v225 = v546;
        *(__m128i *)(v222 + 624) = v543;
        *(__m128i *)(v222 + 640) = v223;
        *(__m128i *)(v222 + 656) = v224;
        *(__m128i *)(v222 + 672) = v225;
        *(__m128i *)(v222 + 688) = v547;
        *(__m128i *)(v222 + 704) = v548;
        *(__m128i *)(v222 + 720) = _mm_load_si128(&v549);
        *(_QWORD *)(v222 + 736) = v550;
        *(_WORD *)(v222 + 1096) = *(_WORD *)(v222 + 712);
        v226 = *(_QWORD *)(v222 + 688);
        v227 = 4 * v226;
        v228 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v228) = v226 >> 62 != 0 || 4 * v226 > 0x7FFFFFFFFFFFFFFELL;
        v229 = v632;
        if ( (_BYTE)v228 )
        {
          v230 = 0;
          goto LABEL_139;
        }
        v627 = *(_QWORD *)(v222 + 688);
        v619 = v4;
        v273 = *(_WORD *)(v222 + 696);
        v622 = v27;
        v509 = 4 * v226;
        if ( v227 )
        {
          v274 = v3;
          v275 = *(_QWORD *)(v222 + 680);
          nullsub_1(v228, v226);
          v230 = 2;
          v276 = sub_140001650(v227, 2);
          if ( !v276 )
          {
LABEL_139:
            v555 = v229;
            sub_14196B2DB(v230, v227);
          }
          v611 = v276;
          if ( v627 )
            sub_1419234B0(v276, v275, v227);
          v3 = v274;
        }
        else
        {
          v611 = 2;
        }
        sub_14022BA60(v494, v222 + 632);
        v399 = v3;
        sub_14022B8C0(v523, v222 + 656);
        v400 = v222 + 608;
        v401 = v222 + 744;
        *(_WORD *)(v222 + 832) = v273;
        *(_QWORD *)(v222 + 816) = v611;
        *(_QWORD *)(v222 + 824) = v627;
        *(_QWORD *)(v222 + 784) = *(_QWORD *)&v494[16];
        *(_OWORD *)(v222 + 768) = *(_OWORD *)v494;
        *(_QWORD *)(v222 + 808) = *(_QWORD *)&v523[16];
        *(_OWORD *)(v222 + 792) = *(_OWORD *)v523;
        *(_QWORD *)(v222 + 760) = *(_QWORD *)(v222 + 624);
        *(__m128i *)(v222 + 744) = _mm_loadu_si128((const __m128i *)(v222 + 608));
        v556 = v632;
        sub_1406CE2F0(v523, aContentType_0, 12, v222 + 608);
        if ( v523[0] )
        {
          v402 = v633;
          v403 = *(_QWORD *)(v633 + 648);
          if ( *(_QWORD *)&v523[16] >= v403 )
          {
            v556 = v632;
            sub_14196B673(*(_QWORD *)&v523[16], v403, &off_141A35658);
          }
          v404 = *(_QWORD *)(v633 + 640);
          v405 = *(_QWORD *)(v404 + 104LL * *(_QWORD *)&v523[16] + 40);
          v406 = 1;
          if ( !v405 )
          {
LABEL_311:
            v411 = 0;
LABEL_312:
            *(_QWORD *)(v402 + 840) = v411;
            *(_QWORD *)(v402 + 848) = v406;
            *(_QWORD *)(v402 + 856) = v411;
            v415 = *(unsigned __int16 *)(v402 + 1096);
            v609 = v632;
            sub_1407C25A0(v402 + 400, v415);
            v416 = *(_QWORD *)(v633 + 368);
            v417 = *(_QWORD *)(v633 + 376);
            v418 = *(_QWORD *)(v633 + 384);
            v419 = *(_QWORD *)(v633 + 392);
            v420 = *(_QWORD *)(v633 + 304);
            v421 = *(_QWORD *)(v633 + 312);
            v422 = *(_QWORD *)(v633 + 320);
            v609 = v632;
            v4 = v619;
            v27 = v622;
            sub_140733260(v420, v416, v417, v418, v419, v421, v422);
            v423 = v633;
            if ( (unsigned __int16)(*(_WORD *)(v633 + 1096) - 200) < 0x64u )
            {
              v424 = *(_OWORD *)(v633 + 368);
              *(_BYTE *)(v633 + 1105) = 0;
              sub_1419234B0(v523, v400, 136);
              *(_BYTE *)(v423 + 1102) = 0;
              sub_1419234B0(&v524, v423 + 440, 168);
              v425 = *(_BYTE *)(v423 + 1099);
              *(_BYTE *)(v423 + 1103) = 0;
              v426 = *(_QWORD *)(v423 + 400);
              v27 = v622;
              sub_1419234B0(v494, v523, 304);
              sub_1419234B0(v631, v494, 304);
              a2 = v423;
              *(__m128i *)(v423 + 1416) = _mm_loadu_si128((const __m128i *)(v423 + 304));
              *(_OWORD *)(v423 + 1432) = v424;
              *(_QWORD *)(v423 + 1448) = v426;
              v4 = v619;
              *(_WORD *)(v423 + 2610) = v425;
              v3 = v399;
LABEL_46:
              v627 = a2 + 1112;
              sub_1406F2900(v523, a2 + 1112, v3);
              v46 = *(_QWORD *)v523;
              if ( *(_QWORD *)v523 == -1 )
              {
                v74 = 7;
                goto LABEL_163;
              }
              v588 = *(__int64 (__fastcall ***)())&v523[120];
              v587 = *(__m128i *)&v523[104];
              v586 = *(_OWORD *)&v523[88];
              v585 = *(_OWORD *)&v523[72];
              v68 = _mm_loadu_si128((const __m128i *)&v523[8]);
              v584 = *(_OWORD *)&v523[56];
              v583 = *(_OWORD *)&v523[40];
              v582 = *(_OWORD *)&v523[24];
              v581 = v68;
              v43 = *(_QWORD *)&v523[128];
              v631 = v524.m128i_i64[1];
              v35 = v524.m128i_i64[0];
              v609 = v632;
              sub_1406BC500(v627);
              goto LABEL_351;
            }
            *(_BYTE *)(v633 + 1105) = 0;
            sub_1419234B0(v631, v400, 136);
            a2 = v423;
            *(_QWORD *)(v423 + 1248) = v401;
            *(_WORD *)(v423 + 1768) = 1;
            v3 = v399;
LABEL_55:
            v631 = a2 + 1112;
            sub_1406F51E0(v523, a2 + 1112, v3);
            v46 = *(_QWORD *)v523;
            if ( *(_QWORD *)v523 == -2 )
            {
              v74 = 4;
LABEL_163:
              v45 = v633;
              *v27 = v74;
              goto LABEL_366;
            }
            v498 = *(__m128i *)&v523[24];
            v497 = *(__m128i *)&v523[8];
            v567 = *(__m128i *)&v523[40];
            v568 = *(__m128i *)&v523[56];
            v569 = *(__m128i *)&v523[72];
            v570 = *(__m128i *)&v523[88];
            v571 = *(__m128i *)&v523[104];
            v572 = *(__m128i *)&v523[120];
            v573 = _mm_loadu_si128(&v524);
            v238 = v3;
            if ( *(_BYTE *)(v633 + 1769) == 3 )
            {
              if ( *(_BYTE *)(v633 + 1761) == 3 )
              {
                v609 = v632;
                sub_1406B87F0(v633 + 1408);
              }
              else if ( !*(_BYTE *)(v633 + 1761) )
              {
                v609 = v632;
                sub_1406C21E0(v633 + 1272);
              }
            }
            else if ( !*(_BYTE *)(v633 + 1769) )
            {
              v609 = v632;
              sub_1406C21E0(v631);
            }
            if ( (_DWORD)v46 != -1 )
            {
              *(_QWORD *)v523 = v46;
              *(__m128i *)&v523[8] = v497;
              *(__m128i *)&v523[24] = v498;
              *(__m128i *)&v523[40] = v567;
              *(__m128i *)&v523[56] = v568;
              *(__m128i *)&v523[72] = v569;
              *(__m128i *)&v523[88] = v570;
              *(__m128i *)&v523[104] = v571;
              *(__m128i *)&v523[120] = v572;
              v524 = _mm_load_si128(&v573);
              sub_1407C1CF0(v633 + 400, (unsigned int)aErrorBodyRead, 15, 1, 0);
              v588 = *(__int64 (__fastcall ***)())&v523[120];
              v587 = *(__m128i *)&v523[104];
              v586 = *(_OWORD *)&v523[88];
              v585 = *(_OWORD *)&v523[72];
              v434 = _mm_loadu_si128((const __m128i *)&v523[8]);
              v584 = *(_OWORD *)&v523[56];
              v583 = *(_OWORD *)&v523[40];
              v582 = *(_OWORD *)&v523[24];
              v581 = v434;
              v43 = *(_QWORD *)&v523[128];
              v631 = v524.m128i_i64[1];
              v35 = v524.m128i_i64[0];
LABEL_351:
              v467 = v633;
              v468 = *(_QWORD *)(v633 + 840);
              if ( v468 )
                sub_140001660(*(_QWORD *)(v633 + 848), v468, 1);
              v237 = (__int64)v632;
              v555 = v632;
              sub_1400366B0(v467 + 744);
LABEL_354:
              v619 = v4;
              v469 = v633;
              *(_BYTE *)(v633 + 1105) = 0;
              if ( *(_BYTE *)(v469 + 1102) )
              {
                v531 = v237;
                sub_1406C4300(v633 + 440);
              }
              v470 = v633;
              *(_BYTE *)(v633 + 1102) = 0;
              v557 = (_BYTE *)v237;
              sub_1406C0ED0(v470 + 408);
              goto LABEL_357;
            }
            v622 = v27;
            v435 = v4;
            v436 = v498;
            v437 = (__m128i *)v633;
            *(__m128i *)(v633 + 864) = _mm_load_si128(&v497);
            v437[55] = v436;
            v438 = (_DWORD)v437 + 400;
            v439 = v437[68].m128i_u16[4];
            v440 = v437[54].m128i_i64[1];
            v441 = v437[55].m128i_i64[0];
            v442 = v632;
            v511 = v632;
            sub_1407BFAB0(&v437[25], v439, v440, v441);
            v443 = *(_QWORD *)(v633 + 872);
            v444 = *(_QWORD *)(v633 + 880);
            sub_1401E7560((unsigned int)v523, v444, 0, 1, 1);
            v627 = *(_QWORD *)&v523[8];
            if ( *(_DWORD *)v523 == 1 )
            {
              v554 = v442;
              sub_14196B2DB(v627, *(_QWORD *)&v523[16]);
            }
            v445 = *(_QWORD *)&v523[16];
            v631 = *(_QWORD *)&v523[16];
            if ( v444 )
            {
              sub_1419234B0(*(_QWORD *)&v523[16], v443, v444);
              v445 = v631;
            }
            sub_1416E2AB0(v523, v445, v444);
            if ( v523[0] )
            {
              v446 = v633;
              *(_QWORD *)(v633 + 896) = -1;
              v70 = v632;
              if ( v627 )
              {
                sub_140001660(v631, v627, 1);
                v444 = *(_QWORD *)(v446 + 912);
                v302 = *(_QWORD *)(v446 + 896) == -1;
                *(_BYTE *)(v446 + 1101) = 1;
                if ( v302 )
                  v447 = 0;
                else
                  v447 = *(_QWORD *)(v446 + 904);
              }
              else
              {
                *(_BYTE *)(v446 + 1101) = 1;
                v447 = 0;
              }
            }
            else
            {
              v446 = v633;
              *(_QWORD *)(v633 + 896) = v627;
              v447 = v631;
              *(_QWORD *)(v446 + 904) = v631;
              *(_QWORD *)(v446 + 912) = v444;
              *(_BYTE *)(v446 + 1101) = 1;
              v70 = v632;
            }
            v27 = (char *)(v446 + 408);
            v600 = v70;
            v448 = sub_140757E70(v446 + 408, v447, v444);
            v4 = v435;
            if ( v448 == 1 )
            {
              v449 = v633;
              *(_QWORD *)(v633 + 920) = 0x2000;
              v450 = v449 + 928;
              v600 = v70;
              sub_140763ED0(v449 + 928, v27);
              v451 = *(_QWORD *)(v633 + 920);
              v523[0] = 2;
              *(_QWORD *)&v523[8] = 0;
              *(_QWORD *)&v523[16] = v451;
              v614 = 1;
              v631 = v450;
              v627 = sub_1416725D0(aMaxTokens, 10, v450);
              sub_1406C0ED0(v627);
              v27 = v622;
              v3 = v238;
              v452 = *(_OWORD *)v523;
              v453 = (_OWORD *)v627;
              *(_OWORD *)(v627 + 16) = *(_OWORD *)&v523[16];
              *v453 = v452;
              a2 = v633;
              v454 = *(_OWORD *)(v633 + 320);
              *(__m128i *)(v633 + 1112) = _mm_loadu_si128((const __m128i *)(v633 + 304));
              *(_OWORD *)(a2 + 1128) = v454;
              *(_QWORD *)(a2 + 1144) = v631;
              *(_BYTE *)(a2 + 1176) = 0;
LABEL_59:
              v631 = a2 + 1112;
              sub_1406F2540(&v559, a2 + 1112, v3);
              v74 = 5;
              if ( v559.m128i_i32[0] == -2 )
                goto LABEL_163;
              v75 = v3;
              v76 = v633;
              *(_BYTE *)(v633 + 1100) = 1;
              v77 = (_DWORD *)(v76 + 960);
              sub_1419234B0(v76 + 960, &v559, 136);
              if ( *(_BYTE *)(v76 + 1176) == 3 )
              {
                sub_1406C1D00(*(_QWORD *)(v633 + 1160), *(_QWORD *)(v633 + 1168));
                if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v633 + 1152)) )
                  sub_141258070(v633 + 1152);
              }
              v78 = v633;
              if ( *v77 != -1 && (unsigned __int16)(*(_WORD *)(v633 + 1064) - 200) <= 0x63u )
              {
                v622 = v27;
                *(_BYTE *)(v633 + 1100) = 0;
                *(_BYTE *)(v78 + 1104) = 1;
                sub_1419234B0(&v592, v77, 136);
                v533 = v632;
                LOBYTE(v79) = 1;
                sub_1407C2100(v78 + 400, v78 + 928, v79);
                v80 = v633;
                v81 = *(_OWORD *)(v633 + 368);
                *(_BYTE *)(v633 + 1104) = 0;
                sub_1419234B0(v523, &v592, 136);
                *(_BYTE *)(v80 + 1102) = 0;
                sub_1419234B0(&v524, v80 + 440, 168);
                v82 = *(_BYTE *)(v80 + 1099);
                *(_BYTE *)(v80 + 1103) = 0;
                v83 = v4;
                v84 = *(_QWORD *)(v80 + 400);
                sub_1419234B0(v494, v523, 304);
                sub_1419234B0(v631, v494, 304);
                a2 = v80;
                *(__m128i *)(v80 + 1416) = _mm_loadu_si128((const __m128i *)(v80 + 304));
                *(_OWORD *)(v80 + 1432) = v81;
                *(_QWORD *)(v80 + 1448) = v84;
                v4 = v83;
                *(_WORD *)(v80 + 2610) = v82;
                v3 = v75;
                v27 = v622;
LABEL_49:
                v627 = a2 + 1112;
                sub_1406F2900(v523, a2 + 1112, v3);
                v46 = *(_QWORD *)v523;
                if ( *(_QWORD *)v523 == -1 )
                {
                  v74 = 6;
                  goto LABEL_163;
                }
                v588 = *(__int64 (__fastcall ***)())&v523[120];
                v587 = *(__m128i *)&v523[104];
                v586 = *(_OWORD *)&v523[88];
                v585 = *(_OWORD *)&v523[72];
                v69 = _mm_loadu_si128((const __m128i *)&v523[8]);
                v584 = *(_OWORD *)&v523[56];
                v583 = *(_OWORD *)&v523[40];
                v582 = *(_OWORD *)&v523[24];
                v581 = v69;
                v43 = *(_QWORD *)&v523[128];
                v631 = v524.m128i_i64[1];
                v27 = (char *)v524.m128i_i64[0];
                v70 = v632;
                v533 = v632;
                sub_1406BC500(v627);
                v71 = v633;
                *(_BYTE *)(v633 + 1104) = 0;
                v532 = v70;
                sub_1406C0ED0(v71 + 928);
                if ( *(_DWORD *)(v633 + 960) == -1 )
                {
                  v72 = *(_QWORD *)(v633 + 968);
                  v601 = v70;
                  sub_14028DCE0(v72);
                }
                v73 = v633;
                *(_BYTE *)(v633 + 1100) = 0;
                if ( !*(_BYTE *)(v73 + 1101) )
                  goto LABEL_350;
                goto LABEL_347;
              }
              v70 = v632;
              v510 = v632;
              sub_1407C1CF0(v633 + 400, (unsigned int)aHttpError_0, 10, (unsigned int)&unk_141A3B46D, 22);
              v532 = v70;
              sub_1406C0ED0(v633 + 928);
              if ( *v77 == -1 )
              {
                v311 = *(_QWORD *)(v633 + 968);
                v601 = v70;
                sub_14028DCE0(v311);
              }
              else if ( *(_BYTE *)(v633 + 1100) )
              {
                v601 = v70;
                sub_1406C21E0(v77);
              }
              *(_BYTE *)(v633 + 1100) = 0;
            }
            else
            {
              v600 = v70;
              sub_1407C1CF0(v438, (unsigned int)aHttpError_0, 10, 1, 0);
            }
            v455 = (const __m128i *)v633;
            v456 = *(_QWORD *)(v633 + 312);
            v457 = *(_QWORD *)(v633 + 368);
            v458 = *(_QWORD *)(v633 + 376);
            v459 = *(_WORD *)(v633 + 1096);
            *(_BYTE *)(v633 + 1101) = 0;
            *(_QWORD *)&v494[16] = v455[57].m128i_i64[0];
            *(__m128i *)v494 = _mm_loadu_si128(v455 + 56);
            *(_WORD *)&v494[24] = v459;
            v600 = v70;
            sub_140757370((unsigned int)v523, v456, v457, v458, (__int64)v494);
            v73 = v633;
            v460 = *(unsigned __int16 *)(v633 + 1096);
            if ( (unsigned __int16)(v460 - 500) < 0x64u
              || (v461 = v460 - 401, v461 <= 0x1C) && (v462 = 268435917, _bittest(&v462, v461)) )
            {
              v632 = v70;
              v592.m128i_i64[0] = v633 + 1096;
              v592.m128i_i64[1] = (__int64)sub_141680990;
              sub_1416DAFA0(v494, &unk_141A3B483, &v592);
              v27 = *(char **)&v494[8];
              v43 = *(_QWORD *)v494;
              v631 = *(_QWORD *)&v494[16];
              v46 = *(_QWORD *)v523;
              v581 = *(__m128i *)&v523[8];
              v582 = *(_OWORD *)&v523[24];
              v583 = *(_OWORD *)&v523[40];
              v584 = *(_OWORD *)&v523[56];
              v585 = *(_OWORD *)&v523[72];
              v586 = *(_OWORD *)&v523[88];
              v587 = _mm_loadu_si128((const __m128i *)&v523[104]);
              v588 = *(__int64 (__fastcall ***)())&v523[120];
              v73 = v633;
              v70 = v632;
              if ( *(_BYTE *)(v633 + 1101) )
              {
LABEL_347:
                v463 = *(_QWORD *)(v73 + 896);
                if ( v463 != -1 && v463 )
                  sub_140001660(*(_QWORD *)(v73 + 904), v463, 1);
              }
            }
            else
            {
              v588 = *(__int64 (__fastcall ***)())&v523[112];
              v587 = *(__m128i *)&v523[96];
              v586 = *(_OWORD *)&v523[80];
              v585 = *(_OWORD *)&v523[64];
              v477 = _mm_loadu_si128((const __m128i *)v523);
              v584 = *(_OWORD *)&v523[48];
              v583 = *(_OWORD *)&v523[32];
              v582 = *(_OWORD *)&v523[16];
              v581 = v477;
              v46 = 5;
              v43 = *(_QWORD *)&v523[120];
              if ( *(_BYTE *)(v633 + 1101) )
                goto LABEL_347;
            }
LABEL_350:
            *(_BYTE *)(v73 + 1101) = 0;
            v464 = *(_QWORD *)(v73 + 872);
            v465 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v73 + 864) + 32LL);
            v466 = *(_QWORD *)(v73 + 880);
            v632 = v70;
            v609 = v70;
            v465(v73 + 888, v464, v466);
            v35 = (__int64)v27;
            goto LABEL_351;
          }
          v407 = *(_QWORD *)(v404 + 104LL * *(_QWORD *)&v523[16] + 32);
          for ( i = 0; i != v405; ++i )
          {
            v409 = *(unsigned __int8 *)(v407 + i);
            LOBYTE(v409) = (unsigned __int8)(v409 - 32) < 0x5Fu || (_BYTE)v409 == 9;
            if ( !(_BYTE)v409 )
              goto LABEL_311;
          }
          if ( v405 < 0 )
          {
            v410 = 0;
            goto LABEL_305;
          }
          v485 = v405;
          nullsub_1(v409, v405);
          v486 = sub_140001650(v485, 1);
          v410 = 1;
          v405 = v485;
          if ( !v486 )
          {
LABEL_305:
            v556 = v632;
            sub_14196B2DB(v410, v405);
          }
          v487 = v486;
          sub_1419234B0(v486, v407, v485);
          v406 = v487;
          v411 = v485;
        }
        else
        {
          v406 = 1;
          v411 = 0;
        }
        v402 = v633;
        goto LABEL_312;
      }
      if ( v54 == 1 )
      {
        v37 = v633;
        v39 = *(_QWORD *)(v633 + 176);
        v40 = *(_QWORD *)(v633 + 184);
        *(_BYTE *)(v633 + 194) = 0;
        v55 = *(__m128i *)v35;
        v597 = *(__m128i *)(v35 + 16);
        v592 = *(__m128i *)v523;
        v593 = *(__m128i *)&v523[16];
        v594 = *(__m128i *)&v523[32];
        v595 = *(__m128i *)&v523[48];
        v596 = v55;
        v598 = *(__m128i *)&v523[96];
        v599 = *(_OWORD *)&v523[112];
        v36 = v37 + 200;
        *(_OWORD *)(v37 + 312) = *(_OWORD *)&v523[112];
        *(__m128i *)(v37 + 296) = v598;
        *(__m128i *)(v37 + 280) = v597;
        *(__m128i *)(v37 + 264) = v596;
        v56 = v592;
        v57 = v593;
        v58 = v594;
        *(__m128i *)(v37 + 248) = v595;
        *(__m128i *)(v37 + 232) = v58;
        *(__m128i *)(v37 + 216) = v57;
        *(__m128i *)(v37 + 200) = v56;
        *(_QWORD *)(v37 + 328) = v39;
        *(_QWORD *)(v37 + 336) = v40;
        *(_QWORD *)(v37 + 344) = v14;
        *(_QWORD *)(v37 + 352) = v15;
        *(_QWORD *)(v37 + 416) = v38;
        *(_QWORD *)(v37 + 424) = v6;
        *(_QWORD *)(v37 + 432) = v631;
        v35 = v37 + 445;
        *(_BYTE *)(v37 + 445) = 0;
        v3 = v627;
LABEL_37:
        *(_DWORD *)(v37 + 440) = 0;
        *(_QWORD *)(v37 + 360) = v38;
        *(_QWORD *)(v37 + 368) = v6;
        *(_QWORD *)(v37 + 296) = v39;
        *(_QWORD *)(v37 + 304) = v40;
        *(_BYTE *)(v37 + 444) = 1;
        v59 = _mm_loadu_si128((const __m128i *)(v37 + 264));
        *(_OWORD *)(v36 + 16) = *(_OWORD *)(v37 + 280);
        *(__m128i *)v36 = v59;
        *(_QWORD *)(v37 + 312) = v32;
        *(_QWORD *)(v37 + 320) = v15;
        v540 = v36;
        v60 = sub_1416724D0(aModel_0, 5, v36);
        if ( v60 )
        {
          v62 = v3;
          v63 = 0;
          v64 = *(_QWORD *)(v60 + 24);
          v65 = 1;
          v66 = *(_QWORD *)(v60 + 16);
          if ( *(_BYTE *)v60 != 3 )
            v66 = 1;
          v67 = 0;
          if ( *(_BYTE *)v60 == 3 )
            v67 = *(_QWORD *)(v60 + 24);
          if ( v67 < 0 )
          {
LABEL_43:
            v540 = v36;
            sub_14196B2DB(v63, v67);
          }
          if ( v67 )
          {
            nullsub_1(0, v61);
            v272 = sub_140001650(v67, 1);
            v63 = 1;
            if ( !v272 )
              goto LABEL_43;
            v65 = v272;
            sub_1419234B0(v272, v66, v67);
          }
          else
          {
            v64 = 0;
          }
          v3 = v62;
        }
        else
        {
          v65 = 1;
          v64 = 0;
        }
        v312 = v633;
        *(_QWORD *)(v633 + 376) = v64;
        *(_QWORD *)(v312 + 384) = v65;
        *(_QWORD *)(v312 + 392) = v64;
        *(_WORD *)(v312 + 443) = 1;
        v313 = v312 + 232;
        v314 = *(_OWORD *)(v36 + 16);
        *(__m128i *)(v312 + 232) = _mm_loadu_si128((const __m128i *)v36);
        *(_OWORD *)(v312 + 248) = v314;
        v315 = *(_QWORD *)(v312 + 368);
        v541 = v36;
        v316 = sub_14073C7A0(v315, v312 + 232);
        v317 = v633 + 400;
        *(_QWORD *)(v633 + 400) = v316;
        if ( v316 && *(_QWORD *)off_14223FF10 >= 3u )
        {
          *(_QWORD *)v494 = v317;
          *(_QWORD *)&v494[8] = sub_1416EBAE0;
          *(_QWORD *)&v523[48] = 3;
          *(_QWORD *)&v523[56] = aCodexmateLibCo_5;
          *(_QWORD *)&v523[64] = 40;
          *(_QWORD *)&v523[80] = &unk_141A3A068;
          *(_QWORD *)&v523[88] = v494;
          *(_QWORD *)v523 = 0;
          *(_QWORD *)&v523[8] = aCodexmateLibCo_5;
          *(_OWORD *)&v523[16] = 0x28u;
          *(_QWORD *)&v523[32] = aSrcCoreRelayPr_0;
          *(_QWORD *)&v523[40] = 30;
          *(_QWORD *)&v523[72] = 0x95D00000001LL;
          v541 = v36;
          sub_141503E20(&v610, v523);
        }
        v318 = *(_QWORD *)(v633 + 368);
        v542 = v36;
        sub_140738A10(&v497, v318, v631, v313);
        v319 = v633;
        *(_BYTE *)(v633 + 442) = 1;
        v320 = *(_QWORD *)(v319 + 360);
        if ( *(_BYTE *)(*(_QWORD *)(v319 + 368) + 253LL) == 1 )
        {
          v321 = *(_QWORD *)(v320 + 32);
          v322 = *(_DWORD *)(v321 + 16);
          if ( v322 > 0x3FFFFFFD
            || (v325 = *(_DWORD *)(v321 + 16),
                v324 = _InterlockedCompareExchange((volatile signed __int32 *)(v321 + 16), v322 + 1, v322),
                v323 = __OFSUB__(v325, v324),
                v325 != v324) )
          {
            v603 = (_BYTE *)v36;
            sub_141969B00((volatile void *)(v321 + 16));
          }
          v326 = _InterlockedIncrement64(*(volatile signed __int64 **)(v321 + 32));
          if ( (v326 < 0) ^ v323 | (v326 == 0) )
            goto LABEL_396;
          v327 = *(_QWORD *)(v321 + 32);
          if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v321 + 16)) & 0xBFFFFFFF), 1) )
          {
LABEL_258:
            v603 = (_BYTE *)v36;
            v483 = v321 + 16;
            v484 = v327;
            sub_141969DF0(v483);
            v327 = v484;
          }
        }
        else
        {
          v321 = *(_QWORD *)(v320 + 24);
          v328 = *(_DWORD *)(v321 + 16);
          if ( v328 > 0x3FFFFFFD
            || (v331 = *(_DWORD *)(v321 + 16),
                v330 = _InterlockedCompareExchange((volatile signed __int32 *)(v321 + 16), v328 + 1, v328),
                v329 = __OFSUB__(v331, v330),
                v331 != v330) )
          {
            v603 = (_BYTE *)v36;
            sub_141969B00((volatile void *)(v321 + 16));
          }
          v332 = _InterlockedIncrement64(*(volatile signed __int64 **)(v321 + 32));
          if ( (v332 < 0) ^ v329 | (v332 == 0) )
            goto LABEL_396;
          v327 = *(_QWORD *)(v321 + 32);
          if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v321 + 16)) & 0xBFFFFFFF), 1) )
            goto LABEL_258;
        }
        v333 = v633;
        *(_QWORD *)(v633 + 408) = v327;
        v334 = *(_QWORD *)(v333 + 296);
        v335 = *(_QWORD *)(v333 + 304);
        v577 = v36;
        sub_140657900((unsigned int)v523, v327, (unsigned int)&unk_141A35958, v334, v335);
        *(_BYTE *)(v633 + 442) = 0;
        v572 = v502;
        v571 = v501;
        v336 = _mm_loadu_si128(&v497);
        v570 = v500;
        v569 = v499;
        v568 = v498;
        v567 = v336;
        v577 = v36;
        sub_14126FD80(v494, v523, &v567);
        v577 = v36;
        sub_14065F550(&v488, v494, v313);
        v337 = v633;
        *(_BYTE *)(v633 + 441) = 1;
        *(_BYTE *)(v337 + 443) = 0;
        v338 = _mm_loadu_si128((const __m128i *)v313);
        *(_OWORD *)&v523[16] = *(_OWORD *)(v313 + 16);
        *(__m128i *)v523 = v338;
        v513 = v36;
        sub_1406C0ED0(v523);
        *(_BYTE *)(v633 + 441) = 0;
        sub_1419234B0(v523, &v488, 272);
        v591 = (_BYTE *)v36;
        v339 = sub_14126FCB0(v523);
        v4 = v619;
        v632 = (_BYTE *)v36;
        v340 = v633;
        *(_QWORD *)(v633 + 448) = v339;
        v49 = v340;
        *(_QWORD *)(v340 + 456) = v341;
LABEL_260:
        v342 = (__int16 *)(v49 + 448);
        sub_141298A20(v523, v49 + 448, v3);
        v343 = *(_QWORD *)v523;
        if ( *(_QWORD *)v523 == -2 )
        {
          v50 = 3;
          goto LABEL_262;
        }
        v344 = *(_QWORD *)&v523[8];
        v581 = *(__m128i *)&v523[16];
        v582 = *(_OWORD *)&v523[32];
        v583 = *(_OWORD *)&v523[48];
        v584 = *(_OWORD *)&v523[64];
        v585 = *(_OWORD *)&v523[80];
        v586 = *(_OWORD *)&v523[96];
        v587 = _mm_loadu_si128((const __m128i *)&v523[112]);
        v588 = *(__int64 (__fastcall ***)())&v523[128];
        v345 = *(_QWORD *)(v633 + 448);
        v346 = *(_QWORD *)(v633 + 456);
        v591 = v632;
        sub_1406C1D00(v345, v346);
        if ( (_DWORD)v343 == -1 )
        {
          v631 = v344;
          v355 = *(_QWORD *)(v633 + 360);
          v356 = *(unsigned __int8 *)(*(_QWORD *)(v633 + 368) + 253LL);
          v625 = 1;
          sub_14070F130(v355, v356);
          v625 = 0;
          v567.m128i_i64[0] = sub_1412469C0(v631);
          *(_QWORD *)v494 = &v567;
          *(_QWORD *)&v494[8] = sub_141246C00;
          sub_1416DAFA0(v523, &unk_141A39A80, v494);
          v625 = 0;
          sub_14028DCE0(v567.m128i_i64[0]);
          v52 = v4;
          v567 = _mm_loadu_si128((const __m128i *)v523);
          v357 = *(_DWORD *)&v523[16];
          v568.m128i_i64[0] = *(_QWORD *)&v523[16];
          v358 = v567.m128i_i64[1];
          sub_140733260(
            *(_QWORD *)(v633 + 360),
            *(_QWORD *)(v633 + 312),
            *(_QWORD *)(v633 + 320),
            *(_QWORD *)(v633 + 384),
            *(_QWORD *)(v633 + 392),
            *(_QWORD *)(v633 + 368),
            *(_QWORD *)(v633 + 296));
          sub_1416DB410(v494, &v567);
          LOWORD(v359) = 502;
          sub_1407360F0((unsigned int)v523, v359, v358, v357, (__int64)aProxyUpstream, 14);
          v46 = *(_QWORD *)v523;
          v559 = *(__m128i *)&v523[8];
          v560 = *(__m128i *)&v523[24];
          v561 = *(__m128i *)&v523[40];
          v562 = *(__m128i *)&v523[56];
          v563 = *(__m128i *)&v523[72];
          v564 = *(__m128i *)&v523[88];
          v565 = _mm_loadu_si128((const __m128i *)&v523[104]);
          v566 = *(__int64 (__fastcall ***)())&v523[120];
          v35 = *(_QWORD *)&v494[8];
          v43 = *(_QWORD *)v494;
          v631 = *(_QWORD *)&v494[16];
          if ( v567.m128i_i64[0] )
            sub_140001660(v358, v567.m128i_i64[0], 1);
          v53 = v632;
LABEL_271:
          v360 = v633;
          *(_WORD *)(v633 + 440) = 0;
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v360 + 408)) )
          {
            v603 = v53;
            sub_141258070(v633 + 408);
          }
          v45 = v633;
          *(_BYTE *)(v633 + 442) = 0;
          *(_BYTE *)(v45 + 443) = 0;
          v361 = *(_QWORD *)(v45 + 376);
          if ( v361 )
            sub_140001660(*(_QWORD *)(v45 + 384), v361, 1);
          *(_BYTE *)(v45 + 444) = 0;
          v550 = v566;
          v549 = v565;
          v548 = v564;
          v547 = v563;
          v362 = _mm_load_si128(&v559);
          v546 = v562;
          v545 = v561;
          v544 = v560;
          v543 = v362;
          *(_BYTE *)(v45 + 445) = 1;
          v4 = v52;
          if ( v46 == -1 )
            goto LABEL_263;
          goto LABEL_276;
        }
        v347 = v633;
        *(_BYTE *)(v633 + 440) = 1;
        *(_QWORD *)(v347 + 456) = v343;
        *(_QWORD *)(v347 + 464) = v344;
        v348 = v582;
        v349 = v583;
        v350 = v584;
        *(__m128i *)(v347 + 472) = v581;
        *(_OWORD *)(v347 + 488) = v348;
        *(_OWORD *)(v347 + 504) = v349;
        *(_OWORD *)(v347 + 520) = v350;
        *(_OWORD *)(v347 + 536) = v585;
        *(_OWORD *)(v347 + 552) = v586;
        *(__m128i *)(v347 + 568) = _mm_load_si128(&v587);
        *(_QWORD *)(v347 + 584) = v588;
        *(_WORD *)(v347 + 448) = *(_WORD *)(v347 + 560);
        v351 = *(_QWORD *)(v347 + 536);
        v352 = 4 * v351;
        v353 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v353) = v351 >> 62 != 0 || 4 * v351 > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v353 )
        {
          v354 = 0;
          goto LABEL_267;
        }
        v631 = *(_QWORD *)(v347 + 536);
        v364 = *(_WORD *)(v347 + 544);
        v611 = 4 * v351;
        if ( v352 )
        {
          v365 = v3;
          v622 = *(char **)(v347 + 528);
          nullsub_1(v353, v347);
          v354 = 2;
          v366 = sub_140001650(v352, 2);
          if ( !v366 )
          {
LABEL_267:
            v576 = v632;
            sub_14196B2DB(v354, v352);
          }
          v627 = v366;
          if ( v631 )
            sub_1419234B0(v366, v622, v352);
          v3 = v365;
        }
        else
        {
          v627 = 2;
        }
        v367 = v633;
        sub_14022BA60(v494, v633 + 480);
        v368 = v3;
        v619 = v4;
        sub_14022B8C0(v523, v367 + 504);
        v369 = v367 + 1088;
        *(_WORD *)(v367 + 1176) = v364;
        *(_QWORD *)(v367 + 1160) = v627;
        *(_QWORD *)(v367 + 1168) = v631;
        *(_QWORD *)(v367 + 1128) = *(_QWORD *)&v494[16];
        *(_OWORD *)(v367 + 1112) = *(_OWORD *)v494;
        *(_QWORD *)(v367 + 1152) = *(_QWORD *)&v523[16];
        *(_OWORD *)(v367 + 1136) = *(_OWORD *)v523;
        *(__m128i *)(v367 + 1088) = _mm_loadu_si128((const __m128i *)(v367 + 456));
        *(_QWORD *)(v367 + 1104) = *(_QWORD *)(v367 + 472);
        if ( (unsigned __int16)(*(_DWORD *)(v367 + 448) - 200) < 0x64u )
        {
          v370 = *(_QWORD *)(v367 + 360);
          v371 = *(_QWORD *)(v367 + 312);
          v372 = *(_QWORD *)(v367 + 320);
          v373 = *(_QWORD *)(v367 + 384);
          v374 = *(_QWORD *)(v367 + 392);
          v375 = *(_QWORD *)(v367 + 368);
          v376 = *(_QWORD *)(v367 + 296);
          v377 = v632;
          v608 = v632;
          sub_140733260(v370, v371, v372, v373, v374, v375, v376);
          v608 = v377;
          sub_14167FD30(v523);
          v378 = *v342;
          v567 = *(__m128i *)&v523[8];
          v568 = *(__m128i *)&v523[24];
          v569 = *(__m128i *)&v523[40];
          v570 = *(__m128i *)&v523[56];
          v571 = *(__m128i *)&v523[72];
          v572 = *(__m128i *)&v523[88];
          v379 = *(_WORD *)&v523[104];
          v579.m128i_i32[0] = *(_DWORD *)&v523[106];
          v579.m128i_i16[2] = *(_WORD *)&v523[110];
          if ( *(_QWORD *)v523 != -1 )
          {
            v379 = 200;
            if ( (unsigned __int16)(v378 - 1000) >= 0xFC7Cu )
              v379 = v378;
            v572 = *(__m128i *)&v523[88];
            v571 = *(__m128i *)&v523[72];
            v570 = *(__m128i *)&v523[56];
            v569 = *(__m128i *)&v523[40];
            v568 = *(__m128i *)&v523[24];
            v567 = *(__m128i *)&v523[8];
            v579.m128i_i32[0] = *(_DWORD *)&v523[106];
            v579.m128i_i16[2] = *(_WORD *)&v523[110];
          }
          *(_QWORD *)v494 = *(_QWORD *)v523;
          *(__m128i *)&v494[8] = v567;
          *(__m128i *)&v494[24] = v568;
          *(__m128i *)&v494[40] = v569;
          *(__m128i *)&v494[56] = v570;
          *(__m128i *)&v494[72] = v571;
          *(__m128i *)&v494[88] = _mm_load_si128(&v572);
          *(_WORD *)&v494[104] = v379;
          *(_DWORD *)&v494[106] = v579.m128i_i32[0];
          *(_WORD *)&v494[110] = v579.m128i_i16[2];
          v630 = 0;
          sub_14073E440(v523, v369, v494);
          *(_OWORD *)&v494[96] = *(_OWORD *)&v523[96];
          *(_OWORD *)&v494[80] = *(_OWORD *)&v523[80];
          *(_OWORD *)&v494[64] = *(_OWORD *)&v523[64];
          v380 = _mm_loadu_si128((const __m128i *)v523);
          *(_OWORD *)&v494[48] = *(_OWORD *)&v523[48];
          *(_OWORD *)&v494[32] = *(_OWORD *)&v523[32];
          *(_OWORD *)&v494[16] = *(_OWORD *)&v523[16];
          *(__m128i *)v494 = v380;
          v567.m128i_i64[0] = (__int64)aXAimamiRoute;
          v567.m128i_i64[1] = 14;
          v568.m128i_i64[0] = (__int64)aRelayResponses;
          v568.m128i_i64[1] = 22;
          v630 = 0;
          sub_140656FD0(v523, v494, &v567);
          *(_OWORD *)v494 = *(_OWORD *)v523;
          *(_OWORD *)&v494[16] = *(_OWORD *)&v523[16];
          *(_OWORD *)&v494[32] = *(_OWORD *)&v523[32];
          *(_OWORD *)&v494[48] = *(_OWORD *)&v523[48];
          *(_OWORD *)&v494[64] = *(_OWORD *)&v523[64];
          *(_OWORD *)&v494[80] = *(_OWORD *)&v523[80];
          *(__m128i *)&v494[96] = _mm_loadu_si128((const __m128i *)&v523[96]);
          *(_BYTE *)(v633 + 440) = 0;
          sub_1419234B0(v523, v367 + 456, 136);
          v630 = 1;
          v627 = sub_14107D110(v523);
          v631 = v382;
          v383 = v633;
          v384 = **(volatile signed __int64 ***)(v633 + 360);
          v385 = _InterlockedIncrement64(v384);
          if ( !((v385 < 0) ^ v381 | (v385 == 0)) )
          {
            v578 = v384;
            v386 = *(volatile signed __int64 **)(*(_QWORD *)(v383 + 360) + 8LL);
            v387 = _InterlockedIncrement64(v386);
            if ( !((v387 < 0) ^ v381 | (v387 == 0)) )
            {
              v574[0] = v386;
              v388 = *(_QWORD *)(v383 + 368);
              v626 = 1;
              sub_1416DB410(v523, v388);
              v389 = (volatile signed __int64 *)v574[0];
              v579.m128i_i64[0] = (__int64)v384;
              v567.m128i_i64[0] = v574[0];
              nullsub_1(v391, v390);
              v392 = sub_140001650(24, 8);
              if ( !v392 )
              {
                v619 = v389;
                sub_14196B2C1(8, 24);
              }
              *(_QWORD *)v392 = 1;
              *(_QWORD *)(v392 + 8) = 1;
              *(_BYTE *)(v392 + 16) = 0;
              v53 = v632;
              if ( *(_QWORD *)v523 == -1 )
              {
                v630 = 1;
                sub_14196B5D0(&off_141A37B10);
              }
              v393 = _mm_loadu_si128((const __m128i *)&v523[8]);
              *(_QWORD *)&v523[24] = aCodexNativeRes;
              *(_QWORD *)&v523[32] = 36;
              *(_QWORD *)&v523[40] = v392;
              *(_QWORD *)&v523[48] = v389;
              *(_QWORD *)&v523[56] = v384;
              v523[64] = 0;
              *(_QWORD *)&v523[72] = v627;
              *(_QWORD *)&v523[80] = v631;
              *(__m128i *)&v523[8] = v393;
              nullsub_1(*(_QWORD *)v523, aCodexNativeRes);
              v394 = sub_140001650(88, 8);
              if ( !v394 )
                sub_14196B2C1(8, 88);
              *(_QWORD *)(v394 + 80) = *(_QWORD *)&v523[80];
              *(_OWORD *)(v394 + 64) = *(_OWORD *)&v523[64];
              v395 = _mm_loadu_si128((const __m128i *)v523);
              v396 = *(_OWORD *)&v523[16];
              v397 = *(_OWORD *)&v523[32];
              *(_OWORD *)(v394 + 48) = *(_OWORD *)&v523[48];
              *(_OWORD *)(v394 + 32) = v397;
              *(_OWORD *)(v394 + 16) = v396;
              *(__m128i *)v394 = v395;
              if ( *(_QWORD *)v494 == -1 )
              {
                v627 = *(_QWORD *)(v394 + 72);
                v631 = v394;
                v622 = *(char **)(v394 + 80);
                if ( *(_QWORD *)v622 )
                  (*(void (__fastcall **)(__int64))v622)(v627);
                v427 = *((_QWORD *)v622 + 1);
                if ( v427 )
                  sub_140001660(v627, v427, *((_QWORD *)v622 + 2));
                sub_14069B920(v631);
                sub_140001660(v631, 88, 8);
                v630 = 0;
                LOWORD(v428) = 500;
                sub_1407360F0((unsigned int)v523, v428, (unsigned int)aBuildStreaming, 27, (__int64)aProxyUpstream, 14);
                v398 = *(__int64 (__fastcall ***)())&v523[120];
                v53 = v632;
              }
              else
              {
                *(_OWORD *)&v523[10] = *(_OWORD *)&v494[10];
                *(_OWORD *)&v523[26] = *(_OWORD *)&v494[26];
                *(_OWORD *)&v523[42] = *(_OWORD *)&v494[42];
                *(_OWORD *)&v523[58] = *(_OWORD *)&v494[58];
                *(_OWORD *)&v523[74] = *(_OWORD *)&v494[74];
                *(__m128i *)&v523[90] = _mm_loadu_si128((const __m128i *)&v494[90]);
                *(_QWORD *)&v523[104] = *(_QWORD *)&v494[104];
                *(_QWORD *)v523 = *(_QWORD *)v494;
                *(_WORD *)&v523[8] = *(_WORD *)&v494[8];
                *(_QWORD *)&v523[112] = v394;
                v398 = &off_141A37B88;
              }
              v566 = *(__int64 (__fastcall ***)())&v523[112];
              v565 = *(__m128i *)&v523[96];
              v564 = *(__m128i *)&v523[80];
              v563 = *(__m128i *)&v523[64];
              v429 = _mm_loadu_si128((const __m128i *)&v523[16]);
              v562 = *(__m128i *)&v523[48];
              v561 = *(__m128i *)&v523[32];
              v560 = v429;
              v559 = *(__m128i *)v523;
              v576 = v53;
              sub_1400366B0(v369);
              v43 = (__int64)v398;
              v430 = v633;
              *(_WORD *)(v633 + 440) = 0;
              if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v430 + 408)) )
              {
                v603 = v53;
                sub_141258070(v633 + 408);
              }
              v431 = v633;
              *(_BYTE *)(v633 + 442) = 0;
              *(_BYTE *)(v431 + 443) = 0;
              v432 = *(_QWORD *)(v431 + 376);
              if ( v432 )
                sub_140001660(*(_QWORD *)(v431 + 384), v432, 1);
              *(_BYTE *)(v431 + 444) = 0;
              v550 = v566;
              v549 = v565;
              v548 = v564;
              v547 = v563;
              v433 = _mm_load_si128(&v559);
              v546 = v562;
              v545 = v561;
              v544 = v560;
              v543 = v433;
              *(_BYTE *)(v431 + 445) = 1;
              v46 = 3;
              v4 = v619;
LABEL_276:
              v44 = v4;
              v522 = v550;
              v521 = v549;
              v520 = v548;
              v519 = v547;
              v363 = _mm_load_si128(&v543);
              v518 = v546;
              v517 = v545;
              v516 = v544;
              v515 = v363;
              sub_1406BB240(v53);
              v13 = (_QWORD *)v631;
LABEL_362:
              v45 = v633;
              v473 = *(_QWORD *)(v633 + 168);
              if ( v473 )
                sub_140001660(*(_QWORD *)(v633 + 176), v473, 1);
              *(_BYTE *)(v45 + 194) = 0;
              goto LABEL_365;
            }
          }
LABEL_396:
          BUG();
        }
        *(_BYTE *)(v367 + 440) = 0;
        sub_1419234B0(v367 + 592, v367 + 456, 136);
        *(_WORD *)(v367 + 1080) = 1;
        v4 = v619;
        v3 = v368;
LABEL_23:
        v627 = v633 + 592;
        sub_1406DDA90(v523, v633 + 592, v3);
        v46 = *(_QWORD *)v523;
        if ( *(_QWORD *)v523 == -2 )
        {
          v50 = 4;
LABEL_262:
          *(_BYTE *)v35 = v50;
          v45 = v633;
LABEL_263:
          *v4 = -1;
          result = 3;
          goto LABEL_367;
        }
        v52 = v4;
        v590 = *(__m128i *)&v523[24];
        v589 = *(__m128i *)&v523[8];
        v503 = *(__m128i *)&v523[40];
        v504 = *(__m128i *)&v523[56];
        v505 = *(__m128i *)&v523[72];
        v506 = *(__m128i *)&v523[88];
        v507 = _mm_loadu_si128((const __m128i *)&v523[104]);
        v508 = *(__int64 (__fastcall ***)())&v523[120];
        v43 = *(_QWORD *)&v523[128];
        v631 = v524.m128i_i64[1];
        v35 = v524.m128i_i64[0];
        if ( *(_BYTE *)(v633 + 1081) == 3 )
        {
          v53 = v632;
          v608 = v632;
          sub_1406B87F0(v633 + 728);
        }
        else
        {
          v53 = v632;
          if ( !*(_BYTE *)(v633 + 1081) )
          {
            v608 = v632;
            sub_1406C21E0(v627);
          }
        }
        if ( (_DWORD)v46 != -1 )
        {
          v560 = v590;
          v559 = v589;
          v561 = v503;
          v562 = v504;
          v563 = v505;
          v564 = v506;
          v565 = _mm_load_si128(&v507);
          v566 = v508;
          v250 = v633;
LABEL_240:
          v576 = v53;
          sub_1400366B0(v250 + 1088);
          goto LABEL_271;
        }
        v251 = _mm_load_si128(&v589);
        v568 = v590;
        v567 = v251;
        v252 = *(unsigned __int16 *)(v633 + 448);
        v617 = 1;
        v631 = v251.m128i_i64[1];
        v627 = v590.m128i_i64[0];
        sub_140735280(v574, v252);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v253 = *(_QWORD *)(v633 + 368);
          *(_QWORD *)v523 = v633 + 312;
          *(_QWORD *)&v523[8] = sub_140191200;
          *(_QWORD *)&v523[16] = v253;
          *(_QWORD *)&v523[24] = sub_1400015F0;
          *(_QWORD *)&v523[32] = v574;
          *(_QWORD *)&v523[40] = sub_1400015F0;
          *(_QWORD *)v494 = aCodexmateLibCo_5;
          *(_QWORD *)&v494[8] = 40;
          *(_QWORD *)&v494[16] = aCodexmateLibCo_5;
          *(_QWORD *)&v494[24] = 40;
          *(_QWORD *)&v494[32] = &off_141A3A168;
          v629 = 1;
          sub_140AF72B0(&unk_141A3A110, v523, 2, v494);
        }
        v254 = *(_QWORD *)(v633 + 360);
        v255 = *(_QWORD *)(v633 + 312);
        v256 = *(_QWORD *)(v633 + 320);
        v257 = *(_QWORD *)(v633 + 384);
        v258 = *(_QWORD *)(v633 + 392);
        v259 = *(_QWORD *)(v633 + 368);
        v260 = *(_QWORD *)(v633 + 296);
        v629 = 1;
        sub_140733260(v254, v255, v256, v257, v258, v259, v260);
        v261 = (unsigned __int16 *)(v633 + 448);
        v262 = 502;
        if ( (unsigned __int16)(*(_DWORD *)(v633 + 448) - 1000) >= 0xFC7Cu )
          v262 = *(_DWORD *)(v633 + 448);
        v629 = 1;
        sub_14167FD30(v523);
        *(_OWORD *)v494 = *(_OWORD *)&v523[8];
        *(_OWORD *)&v494[16] = *(_OWORD *)&v523[24];
        *(_OWORD *)&v494[32] = *(_OWORD *)&v523[40];
        *(_OWORD *)&v494[48] = *(_OWORD *)&v523[56];
        *(_OWORD *)&v494[64] = *(_OWORD *)&v523[72];
        *(_OWORD *)&v494[80] = *(_OWORD *)&v523[88];
        v263 = *(_WORD *)&v523[104];
        v579.m128i_i32[0] = *(_DWORD *)&v523[106];
        v579.m128i_i16[2] = *(_WORD *)&v523[110];
        if ( *(_QWORD *)v523 != -1 )
        {
          *(_OWORD *)&v494[80] = *(_OWORD *)&v523[88];
          *(_OWORD *)&v494[64] = *(_OWORD *)&v523[72];
          *(_OWORD *)&v494[48] = *(_OWORD *)&v523[56];
          *(_OWORD *)&v494[32] = *(_OWORD *)&v523[40];
          *(_OWORD *)&v494[16] = *(_OWORD *)&v523[24];
          *(_OWORD *)v494 = *(_OWORD *)&v523[8];
          v579.m128i_i32[0] = *(_DWORD *)&v523[106];
          v579.m128i_i16[2] = *(_WORD *)&v523[110];
          v263 = v262;
        }
        *(_QWORD *)v551 = *(_QWORD *)v523;
        *(_OWORD *)&v551[8] = *(_OWORD *)v494;
        *(_OWORD *)&v551[24] = *(_OWORD *)&v494[16];
        *(_OWORD *)&v551[40] = *(_OWORD *)&v494[32];
        *(_OWORD *)&v551[56] = *(_OWORD *)&v494[48];
        *(_OWORD *)&v551[72] = *(_OWORD *)&v494[64];
        *(__m128i *)&v551[88] = _mm_load_si128((const __m128i *)&v494[80]);
        *(_WORD *)&v551[104] = v263;
        *(_DWORD *)&v551[106] = v579.m128i_i32[0];
        *(_WORD *)&v551[110] = v579.m128i_i16[2];
        v629 = 1;
        sub_14073E440(v523, v633 + 1088, v551);
        *(_OWORD *)&v551[96] = *(_OWORD *)&v523[96];
        *(_OWORD *)&v551[80] = *(_OWORD *)&v523[80];
        *(_OWORD *)&v551[64] = *(_OWORD *)&v523[64];
        v264 = _mm_loadu_si128((const __m128i *)v523);
        *(_OWORD *)&v551[48] = *(_OWORD *)&v523[48];
        *(_OWORD *)&v551[32] = *(_OWORD *)&v523[32];
        *(_OWORD *)&v551[16] = *(_OWORD *)&v523[16];
        *(__m128i *)v551 = v264;
        *(_QWORD *)v494 = aXAimamiRoute;
        *(_QWORD *)&v494[8] = 14;
        *(_QWORD *)&v494[16] = aRelayResponses;
        *(_QWORD *)&v494[24] = 22;
        v629 = 1;
        sub_140656FD0(v523, v551, v494);
        *(_OWORD *)v551 = *(_OWORD *)v523;
        *(_OWORD *)&v551[16] = *(_OWORD *)&v523[16];
        *(_OWORD *)&v551[32] = *(_OWORD *)&v523[32];
        *(_OWORD *)&v551[48] = *(_OWORD *)&v523[48];
        *(_OWORD *)&v551[64] = *(_OWORD *)&v523[64];
        *(_OWORD *)&v551[80] = *(_OWORD *)&v523[80];
        *(_OWORD *)&v551[96] = *(_OWORD *)&v523[96];
        v265 = *(_QWORD *)v523;
        v266 = *(_WORD *)&v523[8];
        v267 = _mm_load_si128(&v567);
        *(__m128i *)&v523[16] = v568;
        *(__m128i *)v523 = v267;
        v618 = 1;
        *(_QWORD *)&v268 = sub_1411E71E0(v523);
        if ( v265 == -1 )
        {
          v611 = *((_QWORD *)&v268 + 1);
          v622 = (char *)v268;
          if ( **((_QWORD **)&v268 + 1) )
            (**((void (__fastcall ***)(char *))&v268 + 1))(v622);
          v305 = *(_QWORD *)(v611 + 8);
          if ( v305 )
            sub_140001660(v622, v305, *(_QWORD *)(v611 + 16));
          v629 = 0;
          sub_1407360F0((unsigned int)v523, v262, (unsigned int)aBuildErrorPass, 35, (__int64)aProxyUpstream, 14);
        }
        else
        {
          *(_QWORD *)&v523[104] = *(_QWORD *)&v551[104];
          *(_OWORD *)&v523[90] = *(_OWORD *)&v551[90];
          *(_OWORD *)&v523[74] = *(_OWORD *)&v551[74];
          v269 = _mm_loadu_si128((const __m128i *)&v551[10]);
          *(_OWORD *)&v523[58] = *(_OWORD *)&v551[58];
          *(_OWORD *)&v523[42] = *(_OWORD *)&v551[42];
          *(_OWORD *)&v523[26] = *(_OWORD *)&v551[26];
          *(__m128i *)&v523[10] = v269;
          *(_QWORD *)v523 = v265;
          *(_WORD *)&v523[8] = v266;
          *(_OWORD *)&v523[112] = v268;
        }
        v306 = *(_QWORD *)(v633 + 368);
        *(_QWORD *)v494 = v261;
        *(_QWORD *)&v494[8] = sub_141680990;
        *(_QWORD *)&v494[16] = v306 + 24;
        *(_QWORD *)&v494[24] = sub_1400015F0;
        sub_1416DAFA0(&v579, &unk_141A39B67, v494);
        v35 = v579.m128i_i64[1];
        v43 = v579.m128i_i64[0];
        v307 = *v261;
        if ( (unsigned __int16)(v307 - 500) < 0x64u
          || (v308 = v307 - 401, v308 <= 0x1C) && (v309 = 268435917, _bittest(&v309, v308)) )
        {
          v631 = v580;
          v46 = *(_QWORD *)v523;
          v559 = *(__m128i *)&v523[8];
          v560 = *(__m128i *)&v523[24];
          v561 = *(__m128i *)&v523[40];
          v562 = *(__m128i *)&v523[56];
          v563 = *(__m128i *)&v523[72];
          v564 = *(__m128i *)&v523[88];
          v565 = _mm_loadu_si128((const __m128i *)&v523[104]);
          v566 = *(__int64 (__fastcall ***)())&v523[120];
          v53 = v632;
          v310 = v574[0];
          v250 = v633;
          if ( !v574[0] )
            goto LABEL_240;
        }
        else
        {
          v566 = *(__int64 (__fastcall ***)())&v523[112];
          v565 = *(__m128i *)&v523[96];
          v564 = *(__m128i *)&v523[80];
          v563 = *(__m128i *)&v523[64];
          v478 = _mm_loadu_si128((const __m128i *)v523);
          v562 = *(__m128i *)&v523[48];
          v561 = *(__m128i *)&v523[32];
          v560 = *(__m128i *)&v523[16];
          v559 = v478;
          v479 = *(_QWORD *)&v523[120];
          v46 = 5;
          v53 = v632;
          if ( v579.m128i_i64[0] )
            sub_140001660(v579.m128i_i64[1], v579.m128i_i64[0], 1);
          v43 = v479;
          v310 = v574[0];
          v250 = v633;
          if ( !v574[0] )
            goto LABEL_240;
        }
        sub_140001660(v574[1], v310, 1);
        goto LABEL_240;
      }
      v13 = (_QWORD *)(v633 + 168);
      v100 = v14;
      v101 = *(_BYTE *)(v6 + 255);
      if ( !v101 )
        v101 = sub_1409F8E90(*(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112), v48, v622);
      sub_140892090((unsigned int)&v491, v35, *(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112), v101);
      if ( (_BYTE)v491 == 0xFF )
      {
        sub_140767DC0(v494, *((_QWORD *)&v491 + 1), v492);
        LOWORD(v270) = 400;
        v632 = *(_BYTE **)&v494[8];
        sub_1407360F0((unsigned int)v523, v270, *(_DWORD *)&v494[8], *(_DWORD *)&v494[16], (__int64)aProxyChatTrans, 22);
        v522 = *(__int64 (__fastcall ***)())&v523[112];
        v521 = *(__m128i *)&v523[96];
        v520 = *(__m128i *)&v523[80];
        v519 = *(__m128i *)&v523[64];
        v271 = _mm_loadu_si128((const __m128i *)v523);
        v518 = *(__m128i *)&v523[48];
        v517 = *(__m128i *)&v523[32];
        v516 = *(__m128i *)&v523[16];
        v515 = v271;
        v43 = *(_QWORD *)&v523[120];
        if ( *(_QWORD *)v494 )
          sub_140001660(v632, *(_QWORD *)v494, 1);
        if ( *v13 )
          sub_140001660(*(_QWORD *)(v633 + 176), *v13, 1);
        v44 = v619;
        goto LABEL_18;
      }
      v102 = v633;
      *(_BYTE *)(v633 + 193) = 1;
      v103 = v491;
      *(_OWORD *)(v102 + 1184) = v492;
      *(_OWORD *)(v102 + 1168) = v103;
      v104 = v493[1];
      v105 = v493[2];
      *(__m128i *)(v102 + 1072) = _mm_loadu_si128(v493);
      *(__m128i *)(v102 + 1088) = v104;
      *(__m128i *)(v102 + 1104) = v105;
      if ( *(_BYTE *)(v102 + 1168) == 5 )
      {
        sub_1403F7CF0(&v488, aStream, 6);
        v523[1] = v23;
        v523[0] = 1;
        sub_140A68320(v494, v633 + 1176, &v488, v523);
        if ( v494[0] != 0xFF )
          sub_1406C0ED0(v494);
      }
      v106 = (__m128i *)(v633 + 1168);
      sub_140737D90(v6, v35, v631, v633 + 1168);
      v107 = sub_1416724D0(aTools_0, 5, v35);
      v108 = v633 + 1120;
      sub_1408BE8E0(v633 + 1120, v107);
      *(_BYTE *)(v633 + 194) = 0;
      v109 = _mm_loadu_si128((const __m128i *)v35);
      *(_OWORD *)&v523[16] = *(_OWORD *)(v35 + 16);
      *(__m128i *)v523 = v109;
      sub_1406C0ED0(v523);
      v110 = v633;
      v21 = *(_QWORD *)(v633 + 176);
      v22 = *(_QWORD *)(v633 + 184);
      *(_BYTE *)(v633 + 193) = 0;
      v111 = *v106;
      v500 = v106[1];
      v112 = *(_OWORD *)v523;
      v113 = *(_OWORD *)&v523[16];
      v497 = *(__m128i *)v523;
      v498 = *(__m128i *)&v523[16];
      v499 = v111;
      *(__m128i *)(v110 + 248) = v500;
      *(__m128i *)(v110 + 232) = v111;
      *(_OWORD *)(v110 + 216) = v113;
      *(_OWORD *)(v110 + 200) = v112;
      v25 = v611;
      *(_QWORD *)(v110 + 264) = v611;
      *(_QWORD *)(v110 + 272) = v632;
      *(_QWORD *)(v110 + 328) = v21;
      *(_QWORD *)(v110 + 336) = v22;
      v24 = v100;
      *(_QWORD *)(v110 + 344) = v100;
      *(_QWORD *)(v110 + 352) = v15;
      v20 = v622;
      *(_QWORD *)(v110 + 528) = v622;
      *(_QWORD *)(v110 + 536) = v6;
      *(_QWORD *)(v110 + 544) = v631;
      *(_QWORD *)(v110 + 552) = v110 + 1072;
      *(_QWORD *)(v110 + 560) = v108;
      v19 = (_OWORD *)(v110 + 200);
      a2 = v110;
      v18 = (_BYTE *)(v110 + 572);
      *(_BYTE *)(v110 + 572) = 0;
      *(_BYTE *)(v110 + 573) = v23;
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v110 + 1072), (__m128i)v108);
LABEL_83:
      *(_BYTE *)(a2 + 571) = 0;
      *(_QWORD *)(a2 + 360) = v20;
      *(_QWORD *)(a2 + 368) = v6;
      *(_QWORD *)(a2 + 280) = v21;
      *(_QWORD *)(a2 + 288) = v22;
      v114 = *(_OWORD *)(a2 + 232);
      v19[1] = *(_OWORD *)(a2 + 248);
      *v19 = v114;
      *(_BYTE *)(a2 + 570) = v23;
      *(_QWORD *)(a2 + 296) = v24;
      *(_QWORD *)(a2 + 304) = v15;
      *(__m128i *)(a2 + 376) = v26;
      v4 = v619;
      v3 = v627;
      if ( !v25 )
      {
        v539 = v18;
        v538 = v19;
        v189 = sub_1416724D0(aModel_0, 5, v19);
        if ( v189 )
        {
          a2 = v633;
          if ( *(_BYTE *)v189 == 3 )
          {
            v25 = *(_QWORD *)(v189 + 16);
            v632 = *(_BYTE **)(v189 + 24);
          }
          else
          {
            v25 = 0;
          }
        }
        else
        {
          v25 = 0;
          a2 = v633;
        }
      }
      v115 = 1;
      if ( v25 )
        v115 = v25;
      v116 = (__int64)v632;
      if ( !v25 )
        v116 = 0;
      *(_QWORD *)(a2 + 312) = v115;
      *(_QWORD *)(a2 + 320) = v116;
      v117 = *(_QWORD *)(a2 + 360);
      v118 = (_QWORD *)a2;
      v119 = *(_QWORD *)(a2 + 296);
      v120 = v118[38];
      v121 = v118[46];
      v122 = v118[35];
      v539 = v18;
      v538 = v19;
      sub_140733260(v117, v119, v120, v115, v116, v121, v122);
      v632 = v18;
      v123 = v118[45];
      if ( *(_BYTE *)(v118[46] + 253LL) == 1 )
      {
        v124 = *(_QWORD *)(v123 + 32);
        v125 = *(_DWORD *)(v124 + 16);
        if ( v125 > 0x3FFFFFFD
          || (v128 = *(_DWORD *)(v124 + 16),
              v127 = _InterlockedCompareExchange((volatile signed __int32 *)(v124 + 16), v125 + 1, v125),
              v126 = __OFSUB__(v128, v127),
              v128 != v127) )
        {
          v605 = v632;
          v604 = v19;
          sub_141969B00((volatile void *)(v124 + 16));
        }
        v129 = _InterlockedIncrement64(*(volatile signed __int64 **)(v124 + 32));
        if ( (v129 < 0) ^ v126 | (v129 == 0) )
          goto LABEL_396;
        v130 = *(_QWORD *)(v124 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v124 + 16)) & 0xBFFFFFFF), 1) )
        {
LABEL_98:
          v605 = v632;
          v604 = v19;
          v481 = v124 + 16;
          v482 = v130;
          sub_141969DF0(v481);
          v130 = v482;
        }
      }
      else
      {
        v124 = *(_QWORD *)(v123 + 24);
        v131 = *(_DWORD *)(v124 + 16);
        if ( v131 > 0x3FFFFFFD
          || (v134 = *(_DWORD *)(v124 + 16),
              v133 = _InterlockedCompareExchange((volatile signed __int32 *)(v124 + 16), v131 + 1, v131),
              v132 = __OFSUB__(v134, v133),
              v134 != v133) )
        {
          v605 = v632;
          v604 = v19;
          sub_141969B00((volatile void *)(v124 + 16));
        }
        v135 = _InterlockedIncrement64(*(volatile signed __int64 **)(v124 + 32));
        if ( (v135 < 0) ^ v132 | (v135 == 0) )
          goto LABEL_396;
        v130 = *(_QWORD *)(v124 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v124 + 16)) & 0xBFFFFFFF), 1) )
          goto LABEL_98;
      }
      v136 = v633;
      *(_QWORD *)(v633 + 576) = v130;
      v137 = *(_QWORD *)(v136 + 280);
      v138 = *(_QWORD *)(v136 + 288);
      v607 = v632;
      v606 = v19;
      sub_140657900((unsigned int)v523, v130, (unsigned int)&unk_141A35958, v137, v138);
      v631 = (__int64)v19;
      v139 = *(_QWORD *)(v633 + 368);
      v616 = 1;
      LOBYTE(v140) = 1;
      sub_140736EB0(&v488, v139, v140);
      v616 = 0;
      sub_14126FD80(v494, v523, &v488);
      v141 = v632;
      v607 = v632;
      v142 = v631;
      v606 = (_OWORD *)v631;
      sub_14065F550(v523, v494, v631);
      v607 = v141;
      v606 = (_OWORD *)v142;
      v143 = sub_14126FCB0(v523);
      v144 = v633;
      *(_QWORD *)(v633 + 584) = v143;
      *(_QWORD *)(v144 + 592) = v145;
      a2 = v144;
LABEL_100:
      sub_141298A20(v523, a2 + 584, v3);
      v146 = *(_QWORD *)v523;
      if ( *(_QWORD *)v523 == -2 )
      {
        v51 = 3;
        goto LABEL_156;
      }
      v147 = *(_QWORD *)&v523[8];
      v581 = *(__m128i *)&v523[16];
      v582 = *(_OWORD *)&v523[32];
      v583 = *(_OWORD *)&v523[48];
      v584 = *(_OWORD *)&v523[64];
      v585 = *(_OWORD *)&v523[80];
      v586 = *(_OWORD *)&v523[96];
      v587 = _mm_loadu_si128((const __m128i *)&v523[112]);
      v588 = *(__int64 (__fastcall ***)())&v523[128];
      v148 = *(_QWORD *)(v633 + 584);
      v149 = *(_QWORD *)(v633 + 592);
      v607 = v632;
      v150 = v631;
      v606 = (_OWORD *)v631;
      sub_1406C1D00(v148, v149);
      if ( (_DWORD)v146 == -1 )
      {
        v627 = v147;
        v190 = *(_QWORD *)(v633 + 360);
        v191 = *(unsigned __int8 *)(*(_QWORD *)(v633 + 368) + 253LL);
        v623 = 1;
        sub_14070F130(v190, v191);
        v623 = 0;
        v488.m128i_i64[0] = sub_1412469C0(v627);
        *(_QWORD *)v494 = &v488;
        *(_QWORD *)&v494[8] = sub_141246C00;
        sub_1416DAFA0(v523, &unk_141A39A80, v494);
        v623 = 0;
        sub_14028DCE0(v488.m128i_i64[0]);
        v192 = v4;
        v488 = _mm_loadu_si128((const __m128i *)v523);
        v193 = *(_DWORD *)&v523[16];
        *(_QWORD *)&v489 = *(_QWORD *)&v523[16];
        v194 = v488.m128i_i64[1];
        sub_140733260(
          *(_QWORD *)(v633 + 360),
          *(_QWORD *)(v633 + 296),
          *(_QWORD *)(v633 + 304),
          *(_QWORD *)(v633 + 312),
          *(_QWORD *)(v633 + 320),
          *(_QWORD *)(v633 + 368),
          *(_QWORD *)(v633 + 280));
        sub_1416DB410(v494, &v488);
        LOWORD(v195) = 502;
        sub_1407360F0((unsigned int)v523, v195, v194, v193, (__int64)aProxyUpstream, 14);
        v46 = *(_QWORD *)v523;
        v592 = *(__m128i *)&v523[8];
        v593 = *(__m128i *)&v523[24];
        v594 = *(__m128i *)&v523[40];
        v595 = *(__m128i *)&v523[56];
        v596 = *(__m128i *)&v523[72];
        v597 = *(__m128i *)&v523[88];
        v598 = _mm_loadu_si128((const __m128i *)&v523[104]);
        *(_QWORD *)&v599 = *(_QWORD *)&v523[120];
        v627 = *(_QWORD *)&v494[8];
        v196 = *(_QWORD *)v494;
        v197 = *(_QWORD **)&v494[16];
        v198 = v633;
        if ( v488.m128i_i64[0] )
          sub_140001660(v194, v488.m128i_i64[0], 1);
        v199 = _InterlockedDecrement64(*(volatile signed __int64 **)(v198 + 576));
        v185 = v631;
        if ( !v199 )
        {
          v605 = v632;
          v604 = (_OWORD *)v631;
          sub_141258070(v198 + 576);
        }
        v4 = v192;
        v43 = v196;
        v13 = v197;
        goto LABEL_209;
      }
      v151 = v3;
      v152 = v633;
      *(_BYTE *)(v633 + 571) = 1;
      *(_QWORD *)(v152 + 392) = v146;
      *(_QWORD *)(v152 + 400) = v147;
      v153 = v582;
      v154 = v583;
      v155 = v584;
      *(__m128i *)(v152 + 408) = v581;
      *(_OWORD *)(v152 + 424) = v153;
      *(_OWORD *)(v152 + 440) = v154;
      *(_OWORD *)(v152 + 456) = v155;
      *(_OWORD *)(v152 + 472) = v585;
      *(_OWORD *)(v152 + 488) = v586;
      *(__m128i *)(v152 + 504) = _mm_load_si128(&v587);
      *(_QWORD *)(v152 + 520) = v588;
      v156 = v152 + 576;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v152 + 576)) )
      {
        v613 = v632;
        v612 = v150;
        sub_141258070(v152 + 576);
      }
      v157 = (_QWORD *)v633;
      *(_WORD *)(v633 + 568) = *(_WORD *)(v633 + 496);
      v158 = v157[45];
      v159 = v157[37];
      v160 = v157[38];
      v161 = v157[39];
      v162 = v157[40];
      v163 = v157[46];
      v164 = v157[35];
      v613 = v632;
      v612 = v150;
      sub_140733260(v158, v159, v160, v161, v162, v163, v164);
      v165 = v633 + 392;
      v3 = v151;
      if ( (unsigned __int16)(*(_WORD *)(v633 + 568) - 200) > 0x63u )
      {
        v239 = v633;
        *(_BYTE *)(v633 + 571) = 0;
        sub_1419234B0(v156, v165, 136);
        a2 = v239;
        *(_WORD *)(v239 + 1064) = 1;
LABEL_154:
        v622 = (char *)(a2 + 576);
        sub_1406DDA90(v523, a2 + 576, v3);
        v46 = *(_QWORD *)v523;
        if ( *(_QWORD *)v523 == -2 )
        {
          v51 = 4;
          goto LABEL_156;
        }
        v580 = *(_OWORD *)&v523[24];
        v579 = *(__m128i *)&v523[8];
        v567 = *(__m128i *)&v523[40];
        v568 = *(__m128i *)&v523[56];
        v569 = *(__m128i *)&v523[72];
        v570 = *(__m128i *)&v523[88];
        v571 = _mm_loadu_si128((const __m128i *)&v523[104]);
        v572.m128i_i64[0] = *(_QWORD *)&v523[120];
        v43 = *(_QWORD *)&v523[128];
        v13 = (_QWORD *)v524.m128i_i64[1];
        v627 = v524.m128i_i64[0];
        if ( *(_BYTE *)(v633 + 1065) == 3 )
        {
          v613 = v632;
          v185 = v631;
          v612 = v631;
          sub_1406B87F0(v633 + 712);
        }
        else
        {
          v185 = v631;
          if ( !*(_BYTE *)(v633 + 1065) )
          {
            v613 = v632;
            v612 = v631;
            sub_1406C21E0(v622);
          }
        }
        if ( (_DWORD)v46 != -1 )
        {
          v593 = (__m128i)v580;
          v592 = v579;
          v594 = v567;
          v595 = v568;
          v596 = v569;
          v597 = v570;
          v598 = _mm_load_si128(&v571);
          v277 = v572.m128i_i64[0];
LABEL_208:
          *(_QWORD *)&v599 = v277;
          goto LABEL_209;
        }
        v278 = _mm_load_si128(&v579);
        *(_OWORD *)&v494[56] = v580;
        *(__m128i *)&v494[40] = v278;
        *(_WORD *)&v494[32] = *(_WORD *)(v633 + 568);
        *(_QWORD *)v494 = aContentType_0;
        *(_QWORD *)&v494[8] = 12;
        *(_QWORD *)&v494[16] = "application/json";
        *(_QWORD *)&v494[24] = 16;
        v613 = v632;
        v612 = v185;
        sub_140646440(v523, v494);
        v279 = *(unsigned __int16 *)(v633 + 568);
        if ( (unsigned __int16)(v279 - 500) < 0x64u
          || (v280 = v279 - 401, v280 <= 0x1C) && (v281 = 268435917, _bittest(&v281, v280)) )
        {
          v488.m128i_i64[0] = v633 + 568;
          v488.m128i_i64[1] = (__int64)sub_141680990;
          sub_1416DAFA0(v494, &unk_141A3B248, &v488);
          v627 = *(_QWORD *)&v494[8];
          v43 = *(_QWORD *)v494;
          v13 = *(_QWORD **)&v494[16];
          v46 = *(_QWORD *)v523;
          v592 = *(__m128i *)&v523[8];
          v593 = *(__m128i *)&v523[24];
          v594 = *(__m128i *)&v523[40];
          v595 = *(__m128i *)&v523[56];
          v596 = *(__m128i *)&v523[72];
          v597 = *(__m128i *)&v523[88];
          v598 = _mm_loadu_si128((const __m128i *)&v523[104]);
          *(_QWORD *)&v599 = *(_QWORD *)&v523[120];
          v185 = v631;
        }
        else
        {
          *(_QWORD *)&v599 = *(_QWORD *)&v523[112];
          v598 = *(__m128i *)&v523[96];
          v597 = *(__m128i *)&v523[80];
          v596 = *(__m128i *)&v523[64];
          v480 = _mm_loadu_si128((const __m128i *)v523);
          v595 = *(__m128i *)&v523[48];
          v594 = *(__m128i *)&v523[32];
          v593 = *(__m128i *)&v523[16];
          v592 = v480;
          v46 = 5;
          v43 = *(_QWORD *)&v523[120];
        }
LABEL_209:
        *(_BYTE *)(v633 + 571) = 0;
        v282 = v632;
        v537 = v632;
        v536 = v185;
        sub_1406C0ED0(v185);
        v550 = (__int64 (__fastcall **)())v599;
        v549 = v598;
        v548 = v597;
        v547 = v596;
        v283 = _mm_load_si128(&v592);
        v546 = v595;
        v545 = v594;
        v544 = v593;
        v543 = v283;
        *v282 = 1;
        if ( v46 == -1 )
          goto LABEL_157;
LABEL_214:
        v44 = v4;
        v522 = v550;
        v521 = v549;
        v520 = v548;
        v519 = v547;
        v289 = _mm_load_si128(&v543);
        v518 = v546;
        v517 = v545;
        v516 = v544;
        v515 = v289;
        sub_1406BC250(v185);
        v290 = v633;
        v291 = *(_QWORD *)(v633 + 1128);
        if ( v291 )
        {
          v631 = (__int64)v13;
          v632 = (_BYTE *)v43;
          v292 = *(_QWORD *)(v633 + 1144);
          if ( v292 )
          {
            HIDWORD(_RAX) = HIDWORD(v633);
            v294 = *(const __m128i **)(v633 + 1120);
            v295 = v294 + 1;
            _EBX = ~_mm_movemask_epi8(_mm_load_si128(v294));
            do
            {
              if ( !(_WORD)_EBX )
              {
                do
                {
                  v297 = _mm_load_si128(v295);
                  v294 -= 24;
                  ++v295;
                  _EBX = _mm_movemask_epi8(v297) ^ 0xFFFF;
                }
                while ( !_EBX );
              }
              __asm { tzcnt   eax, ebx }
              v298 = -3 * _RAX;
              v299 = *((_QWORD *)&v294[-1] + v298 - 1);
              if ( v299 )
                sub_140001660(v294[-1].m128i_i64[v298], v299, 1);
              --v292;
              _RAX = _EBX & (unsigned int)(_EBX - 1);
              _EBX &= _EBX - 1;
            }
            while ( v292 );
          }
          v300 = (24 * v291 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v301 = v300 + v291;
          v302 = v301 == -17;
          v303 = v301 + 17;
          v290 = v633;
          v43 = (__int64)v632;
          v13 = (_QWORD *)v631;
          if ( !v302 )
            sub_140001660(*(_QWORD *)(v633 + 1120) - v300, v303, 16);
        }
        sub_14018EA10(v290 + 1072);
        *(_BYTE *)(v633 + 193) = 0;
        v35 = v627;
        goto LABEL_362;
      }
      if ( *(_BYTE *)(v633 + 570) )
      {
        *(_BYTE *)(v633 + 571) = 0;
        sub_1419234B0(v523, v165, 136);
        v613 = v632;
        v612 = v150;
        v627 = sub_14107D110(v523);
        v622 = v166;
        v167 = v633;
        v168 = *(_QWORD *)(v633 + 368) + 96LL;
        v620 = 1;
        sub_1416DB410(&v559, v168);
        v169 = *(_QWORD *)(v167 + 376);
        v170 = *(_OWORD *)(v169 + 32);
        v621 = 1;
        sub_14018AE90(v494, v169);
        *(_OWORD *)&v494[32] = v170;
        v171 = *(_OWORD *)(*(_QWORD *)(v167 + 384) + 32LL);
        v615 = 1;
        sub_14018C870(v523);
        *(_OWORD *)&v523[32] = v171;
        v615 = 0;
        sub_140A1C5A0((unsigned int)&v488, v627, (_DWORD)v622, (unsigned int)&v559, (__int64)v494, (__int64)v523);
        sub_1419234B0(v523, &v488, 1160);
        v173 = v633;
        v174 = **(volatile signed __int64 ***)(v633 + 360);
        v175 = _InterlockedIncrement64(v174);
        if ( (v175 < 0) ^ v172 | (v175 == 0) )
          goto LABEL_396;
        v514 = v174;
        v176 = *(volatile signed __int64 **)(*(_QWORD *)(v173 + 360) + 8LL);
        v177 = _InterlockedIncrement64(v176);
        if ( (v177 < 0) ^ v172 | (v177 == 0) )
          goto LABEL_396;
        v578 = v176;
        v178 = *(_QWORD *)(v173 + 368);
        v624 = 1;
        sub_1416DB410(&v559, v178);
        v574[0] = v174;
        v589.m128i_i64[0] = (__int64)v176;
        nullsub_1(v180, v179);
        v181 = sub_140001650(24, 8);
        if ( !v181 )
        {
          v619 = v176;
          sub_14196B2C1(8, 24);
        }
        v182 = v181;
        *(_QWORD *)v181 = 1;
        *(_QWORD *)(v181 + 8) = 1;
        *(_BYTE *)(v181 + 16) = 0;
        v183 = *(_QWORD *)v523;
        v184 = *(_OWORD *)&v523[8];
        sub_1419234B0(v494, &v523[24], 1136);
        v495 = _mm_loadu_si128(&v559);
        v496 = v560.m128i_i64[0];
        v185 = v631;
        if ( v183 == -1 )
        {
          v613 = v632;
          v612 = v631;
          sub_14196B5D0(&off_141A37B10);
        }
        sub_1419234B0(&v523[24], v494, 1160);
        v525 = aCodexResponses;
        v526 = 40;
        v527 = v182;
        v528 = v176;
        v529 = v174;
        v530 = 0;
        *(_QWORD *)v523 = v183;
        *(_OWORD *)&v523[8] = v184;
        nullsub_1(v187, v186);
        v188 = sub_140001650(1232, 8);
        if ( !v188 )
          sub_14196B2C1(8, 1232);
        v13 = (_QWORD *)v188;
        sub_1419234B0(v188, v523, 1232);
        v565.m128i_i16[0] = 200;
        v559.m128i_i64[0] = (__int64)aContentType_0;
        v559.m128i_i64[1] = 12;
        v560.m128i_i64[0] = (__int64)aTextEventStrea;
        v560.m128i_i64[1] = 17;
        v561.m128i_i64[0] = (__int64)aCacheControl_0;
        v561.m128i_i64[1] = 13;
        v562.m128i_i64[0] = (__int64)aNoCache;
        v562.m128i_i64[1] = 8;
        v563.m128i_i64[0] = (__int64)aXAccelBufferin;
        v563.m128i_i64[1] = 17;
        v564.m128i_i64[0] = (__int64)aNo_0;
        v564.m128i_i64[1] = 2;
        v565.m128i_i64[1] = (__int64)v13;
        v566 = &off_141A37BE8;
        v613 = v632;
        v612 = v185;
        sub_140646510(v523, &v559);
        v592 = *(__m128i *)v523;
        v593 = *(__m128i *)&v523[16];
        v594 = *(__m128i *)&v523[32];
        v595 = *(__m128i *)&v523[48];
        v596 = *(__m128i *)&v523[64];
        v597 = *(__m128i *)&v523[80];
        v598 = _mm_loadu_si128((const __m128i *)&v523[96]);
        v43 = *(_QWORD *)&v523[120];
        *(_QWORD *)&v599 = *(_QWORD *)&v523[112];
        goto LABEL_213;
      }
      v304 = v633;
      *(_BYTE *)(v633 + 571) = 0;
      sub_1419234B0(v156, v165, 136);
      a2 = v304;
      *(_WORD *)(v304 + 1064) = 0;
LABEL_27:
      v622 = (char *)(a2 + 576);
      sub_1406DDA90(v523, a2 + 576, v3);
      v46 = *(_QWORD *)v523;
      if ( *(_QWORD *)v523 != -2 )
      {
        v504 = *(__m128i *)&v523[24];
        v503 = *(__m128i *)&v523[8];
        *(_OWORD *)v551 = *(_OWORD *)&v523[40];
        *(_OWORD *)&v551[16] = *(_OWORD *)&v523[56];
        *(_OWORD *)&v551[32] = *(_OWORD *)&v523[72];
        *(_OWORD *)&v551[48] = *(_OWORD *)&v523[88];
        *(__m128i *)&v551[64] = _mm_loadu_si128((const __m128i *)&v523[104]);
        *(_QWORD *)&v551[80] = *(_QWORD *)&v523[120];
        v43 = *(_QWORD *)&v523[128];
        v13 = (_QWORD *)v524.m128i_i64[1];
        v627 = v524.m128i_i64[0];
        if ( *(_BYTE *)(v633 + 1065) == 3 )
        {
          v613 = v632;
          v185 = v631;
          v612 = v631;
          sub_1406B87F0(v633 + 712);
        }
        else
        {
          v185 = v631;
          if ( !*(_BYTE *)(v633 + 1065) )
          {
            v613 = v632;
            v612 = v631;
            sub_1406C21E0(v622);
          }
        }
        if ( (_DWORD)v46 != -1 )
        {
          v593 = v504;
          v592 = v503;
          v594 = *(__m128i *)v551;
          v595 = *(__m128i *)&v551[16];
          v596 = *(__m128i *)&v551[32];
          v597 = *(__m128i *)&v551[48];
          v598 = _mm_load_si128((const __m128i *)&v551[64]);
          v277 = *(_QWORD *)&v551[80];
          goto LABEL_208;
        }
        v590 = v504;
        v589 = v503;
        *(__m128i *)v523 = _mm_loadu_si128((const __m128i *)&v589.m128i_u64[1]);
        *(_OWORD *)&v523[16] = 0;
        vendor_json_parse_str_with_trailing_check(v494, (__int128 *)v523);
        if ( v494[0] != 0xFF )
        {
          v284 = _mm_loadu_si128((const __m128i *)v494);
          v560 = *(__m128i *)&v494[16];
          v559 = v284;
          sub_1408A4ED0(&v488, (__int64)&v559, *(_QWORD **)(v633 + 376));
          v285 = _mm_loadu_si128(&v488);
          *(_OWORD *)&v494[22] = v489;
          *(__m128i *)&v494[6] = v285;
          v488 = v285;
          sub_140CA7480(v523, &v488);
          *(_WORD *)&v523[104] = 200;
          v592 = *(__m128i *)v523;
          v593 = *(__m128i *)&v523[16];
          v594 = *(__m128i *)&v523[32];
          v595 = *(__m128i *)&v523[48];
          v596 = *(__m128i *)&v523[64];
          v597 = _mm_loadu_si128((const __m128i *)&v523[80]);
          *(_QWORD *)&v599 = *(_QWORD *)&v523[112];
          v598.m128i_i64[0] = *(_QWORD *)&v523[96];
          v598.m128i_i16[4] = 200;
          *(__int32 *)((char *)&v598.m128i_i32[2] + 2) = *(_DWORD *)&v523[106];
          v598.m128i_i16[7] = *(_WORD *)&v523[110];
          v43 = *(_QWORD *)&v523[120];
          sub_1406C0ED0(&v559);
          v286 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v589.m128i_i64[0] + 32);
          v613 = v632;
          v185 = v631;
          v612 = v631;
          v286(&v590.m128i_u64[1], v589.m128i_i64[1], v590.m128i_i64[0]);
LABEL_213:
          *(_BYTE *)(v633 + 571) = 0;
          v287 = v632;
          v537 = v632;
          v536 = v185;
          sub_1406C0ED0(v185);
          v550 = (__int64 (__fastcall **)())v599;
          v549 = v598;
          v548 = v597;
          v547 = v596;
          v288 = _mm_load_si128(&v592);
          v546 = v595;
          v545 = v594;
          v544 = v593;
          v543 = v288;
          *v287 = 1;
          v46 = 3;
          goto LABEL_214;
        }
        v574[0] = *(_QWORD *)&v494[8];
        sub_1407381F0((__int128 *)v488.m128i_i8, *(_QWORD *)(v633 + 360));
        LOWORD(v412) = 502;
        v627 = v488.m128i_i64[1];
        sub_1407360F0((unsigned int)v523, v412, v488.m128i_i32[2], v489, (__int64)aProxyUpstream, 14);
        *(_QWORD *)&v599 = *(_QWORD *)&v523[112];
        v598 = *(__m128i *)&v523[96];
        v597 = *(__m128i *)&v523[80];
        v596 = *(__m128i *)&v523[64];
        v413 = _mm_loadu_si128((const __m128i *)v523);
        v595 = *(__m128i *)&v523[48];
        v594 = *(__m128i *)&v523[32];
        v593 = *(__m128i *)&v523[16];
        v592 = v413;
        v43 = *(_QWORD *)&v523[120];
        if ( v488.m128i_i64[0] )
          sub_140001660(v627, v488.m128i_i64[0], 1);
        sub_140032F30(v574);
        v414 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v589.m128i_i64[0] + 32);
        v613 = v632;
        v185 = v631;
        v612 = v631;
        v414(&v590.m128i_u64[1], v589.m128i_i64[1], v590.m128i_i64[0]);
        v46 = 5;
        goto LABEL_209;
      }
      v51 = 5;
LABEL_156:
      *v632 = v51;
LABEL_157:
      *v4 = -1;
      result = 4;
      v45 = v633;
LABEL_367:
      *(_BYTE *)(v45 + 192) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A39C30);
    case 2LL:
      sub_14196B9B0(&off_141A39C30);
    case 3LL:
      v35 = a2 + 445;
      v36 = a2 + 200;
      switch ( *(_BYTE *)(a2 + 445) )
      {
        case 0:
          v619 = a1;
          v37 = v633;
          v38 = *(char **)(v633 + 416);
          v6 = *(_QWORD *)(v633 + 424);
          v39 = *(_QWORD *)(v633 + 328);
          v40 = *(_QWORD *)(v633 + 336);
          v631 = *(_QWORD *)(v633 + 432);
          v32 = *(_QWORD *)(v633 + 344);
          v15 = *(_QWORD *)(v633 + 352);
          goto LABEL_37;
        case 1:
          v558 = a2 + 200;
          sub_14196B990(&off_141A3A0B0);
        case 2:
          v558 = a2 + 200;
          sub_14196B9B0(&off_141A3A0B0);
        case 3:
          v632 = (_BYTE *)(a2 + 200);
          v49 = v633;
          goto LABEL_260;
        case 4:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_23;
      }
    case 4LL:
      v18 = (_BYTE *)(a2 + 572);
      v19 = (_OWORD *)(a2 + 200);
      switch ( *(_BYTE *)(a2 + 572) )
      {
        case 0:
          v627 = a3;
          v619 = a1;
          v20 = *(char **)(a2 + 528);
          v6 = *(_QWORD *)(a2 + 536);
          v21 = *(_QWORD *)(a2 + 328);
          v22 = *(_QWORD *)(a2 + 336);
          v23 = *(_BYTE *)(a2 + 573);
          v24 = *(_QWORD *)(a2 + 344);
          v15 = *(_QWORD *)(a2 + 352);
          v25 = *(_QWORD *)(a2 + 264);
          v632 = *(_BYTE **)(a2 + 272);
          v26 = _mm_loadu_si128((const __m128i *)(a2 + 552));
          goto LABEL_83;
        case 1:
          v535 = a2 + 200;
          sub_14196B990(&off_141A3B208);
        case 2:
          v535 = a2 + 200;
          sub_14196B9B0(&off_141A3B208);
        case 3:
          v632 = (_BYTE *)(a2 + 572);
          v631 = a2 + 200;
          goto LABEL_100;
        case 4:
          v632 = (_BYTE *)(a2 + 572);
          v631 = a2 + 200;
          goto LABEL_154;
        case 5:
          v632 = (_BYTE *)(a2 + 572);
          v631 = a2 + 200;
          goto LABEL_27;
      }
    case 5LL:
      v27 = (char *)(a2 + 1098);
      v28 = a2 + 200;
      switch ( *(_BYTE *)(a2 + 1098) )
      {
        case 0:
          v619 = a1;
          v29 = *(char **)(a2 + 232);
          v6 = *(_QWORD *)(a2 + 240);
          v30 = *(_QWORD *)(a2 + 248);
          v31 = *(_QWORD *)(a2 + 256);
          v631 = *(_QWORD *)(a2 + 264);
          v32 = *(_QWORD *)(a2 + 272);
          v15 = *(_QWORD *)(a2 + 280);
          v33 = *(_QWORD *)(a2 + 288);
          v34 = *(_BYTE **)(a2 + 296);
          goto LABEL_67;
        case 1:
          v553 = a2 + 200;
          sub_14196B990(&off_141A3B430);
        case 2:
          v553 = a2 + 200;
          sub_14196B9B0(&off_141A3B430);
        case 3:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_131;
        case 4:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_55;
        case 5:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_59;
        case 6:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_49;
        case 7:
          v632 = (_BYTE *)(a2 + 200);
          goto LABEL_46;
      }
  }
}
