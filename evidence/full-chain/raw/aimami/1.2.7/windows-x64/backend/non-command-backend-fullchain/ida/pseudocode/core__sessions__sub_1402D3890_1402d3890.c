// win 1.2.7 | module src/core/sessions.rs | ea 0x1402d3890 | name sub_1402D3890
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402D3890(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i si128; // xmm8
  __m128i v10; // xmm9
  __m128i v11; // xmm10
  __m128i v12; // xmm11
  const __m128i *v13; // rbx
  __int64 v14; // rsi
  const __m128i *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  __m128i *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned __int64 v22; // r15
  _QWORD *v23; // r14
  __int64 i; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // xmm12_8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // r11
  __int64 v41; // rcx
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rdx
  __int64 v51; // r8
  char v52; // r9
  char v53; // cl
  char v54; // cl
  char v55; // cl
  char v56; // cl
  __int8 v57; // al
  unsigned __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r14
  _QWORD *v61; // rax
  signed __int64 v62; // rdi
  __int64 v63; // r15
  __m128i *v64; // r14
  unsigned __int128 v65; // kr00_16
  __int64 v66; // rsi
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // r12
  __int64 v71; // r13
  const __m128i *v72; // rbx
  __m128i v74; // xmm0
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rsi
  const __m128i *v82; // rbx
  __m128i *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rsi
  bool v86; // zf
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 result; // rax
  char v90; // bl
  int v91; // ecx
  __int64 v92; // r8
  __int128 v93; // xmm0
  __m128i v94; // xmm0
  __m128i v95; // xmm1
  signed __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rdi
  const __m128i *v99; // rbx
  __m128i v101; // xmm0
  __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // r14
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rdx
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __int64 v112; // rcx
  _QWORD *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rcx
  __m128i v118; // xmm0
  __m128i v119; // xmm1
  __int64 v120; // rdi
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rsi
  __int64 v127; // rdi
  char v128; // al
  __int64 v129; // rdi
  __int64 v130; // rax
  __int64 v131; // r13
  __int64 v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __m128i v136; // xmm0
  __int64 v137; // rax
  char v138; // r13
  __int64 v139; // rcx
  const __m128i *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // rcx
  const __m128i *v143; // rdi
  __int64 v144; // rax
  double v145; // xmm9_8
  __int64 v146; // rdx
  __int64 v147; // r8
  __int32 v148; // r8d
  int v149; // edx
  unsigned __int32 v150; // ecx
  const __m128i *v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rbx
  __int64 v155; // r14
  const __m128i *v156; // r15
  __m128i v158; // xmm0
  __int64 v159; // rsi
  __int64 v160; // rdx
  __m128i v161; // xmm9
  __int64 v162; // r13
  unsigned __int64 v163; // rsi
  const __m128i *v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  char v169; // dl
  unsigned __int64 v170; // rsi
  __int64 v171; // rcx
  __m128i v172; // xmm1
  __m128i v173; // xmm2
  __int64 v174; // r9
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v181; // r14
  const __m128i *v182; // rbx
  __m128i v184; // xmm8
  __m128i v185; // xmm9
  __m128i v186; // xmm10
  __m128i v187; // xmm11
  __m128i v188; // xmm12
  __m128i v189; // xmm13
  __m128i *v190; // rax
  __m128i v191; // xmm15
  __int64 v193; // rdx
  unsigned int v194; // eax
  unsigned __int64 v195; // r9
  __int64 j; // r11
  unsigned __int64 v197; // rax
  __m128i v198; // xmm0
  unsigned __int64 v199; // r12
  __int64 *v200; // rsi
  __int64 v201; // rdi
  __m128i v202; // xmm0
  __m128i v203; // xmm14
  __int64 v204; // rsi
  __int64 v205; // r13
  unsigned __int64 v206; // rdi
  __int64 v207; // rsi
  void *v208; // rsi
  __int64 v209; // rax
  unsigned __int64 v210; // r12
  __int64 v211; // rcx
  __m128i *v212; // r12
  __int64 v213; // r13
  const __m128i *v214; // r13
  unsigned __int64 v215; // rdx
  __m128i *v216; // rax
  const __m128i *v217; // r8
  const __m128i *v218; // rdx
  const __m128i *v219; // rax
  char v220; // al
  int v221; // eax
  unsigned __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // r13
  __m128i v225; // xmm0
  __m128i v226; // xmm14
  __m128i *v227; // r8
  __m128i *k; // r11
  unsigned __int64 v229; // rax
  __m128i v230; // xmm15
  __int64 v232; // r12
  __int64 v233; // rdx
  int v234; // eax
  unsigned int v235; // eax
  __int64 v236; // rdi
  __int64 v237; // r13
  __m128i v238; // xmm0
  __m128i v239; // xmm2
  char v240; // al
  char v241; // al
  __int64 v242; // rcx
  void *v243; // rdx
  __int64 v244; // rax
  void *v245; // rdx
  char v246; // al
  __int64 v247; // rcx
  double v248; // xmm0_8
  __int64 v249; // rax
  __int64 v250; // rcx
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rsi
  void *v254; // rsi
  __int64 v255; // rax
  __int64 v256; // rax
  __int32 v257; // r8d
  int v258; // edx
  unsigned __int32 v259; // ecx
  __int64 v260; // rax
  __int64 v261; // rsi
  __int64 v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rsi
  __int64 v267; // rax
  __int64 v268; // rsi
  __int64 v269; // rax
  __int64 v270; // r12
  __int64 v271; // rsi
  __int64 v272; // r12
  __int64 v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rax
  const __m128i *v276; // r13
  __int64 v277; // r13
  __int64 v278; // rax
  __int64 v279; // r12
  bool v280; // r13
  __int64 v281; // rax
  unsigned __int64 v282; // rdx
  const __m128i *v283; // rsi
  unsigned __int64 v284; // rax
  unsigned __int64 v285; // rcx
  __m128i *v286; // rdx
  __m128i v287; // xmm0
  __m128i v288; // xmm1
  __m128i v289; // xmm2
  __m128i v290; // xmm3
  unsigned __int64 v291; // rcx
  __m128i v292; // xmm0
  __m128i v293; // xmm1
  unsigned __int64 v294; // rsi
  unsigned __int64 v295; // rax
  __int64 v296; // rcx
  __m128i v297; // xmm0
  __m128i v298; // xmm2
  char v299; // al
  __m128i v300; // xmm2
  __m128i v301; // xmm3
  __m128i v302; // xmm2
  __m128i v303; // xmm3
  __int64 v304; // rdi
  int v305; // eax
  __int64 v307; // rsi
  const __m128i *v308; // r12
  const __m128i *v310; // rdi
  __int64 v311; // rdx
  __m128i v312; // xmm0
  __int64 v313; // rax
  __int64 v314; // rcx
  __int64 v315; // rdx
  __int64 v316; // rdi
  unsigned __int64 v317; // rsi
  unsigned __int64 v318; // rax
  __int64 v319; // rcx
  char v320; // al
  __m128i v321; // xmm2
  __m128i v322; // xmm3
  __m128i v323; // xmm0
  __m128i v324; // xmm2
  __m128i v325; // xmm0
  __m128i v326; // xmm2
  __m128i v327; // xmm0
  __int64 v329; // rbx
  const __m128i *v330; // r13
  __m128i v332; // xmm0
  __int64 v333; // rax
  __int64 *v334; // rdi
  __int64 v335; // r14
  unsigned __int64 v336; // rax
  __int64 v337; // rsi
  __int64 v338; // rdi
  __m128i v339; // xmm0
  __m128i v340; // xmm7
  _QWORD *m; // rdx
  __m128i *v342; // rax
  __m128i v343; // xmm8
  int v345; // eax
  unsigned __int64 v346; // rdi
  __int64 v347; // rdx
  __int64 v348; // rcx
  __m128i v349; // xmm0
  __m128i v350; // xmm7
  unsigned __int64 n; // r8
  unsigned __int64 v352; // rdi
  __m128i v353; // xmm8
  __int64 v355; // rsi
  unsigned __int64 v356; // r15
  __int64 v357; // r14
  int v358; // eax
  const __m128i *v359; // r10
  __m128i *v360; // r11
  unsigned __int64 v361; // rax
  __m128i v363; // kr90_16
  __m128i v364; // xmm0
  __m128i v365; // xmm7
  __m128i *ii; // rdx
  unsigned __int64 v367; // rax
  __m128i v368; // xmm8
  unsigned __int64 v370; // r14
  int v371; // eax
  int v372; // eax
  __int64 v373; // r15
  __int64 v374; // rdi
  unsigned __int64 v375; // rax
  __m128i v376; // xmm0
  __m128i v377; // xmm7
  unsigned __int64 jj; // rdx
  unsigned __int64 v379; // rax
  __m128i v381; // xmm8
  unsigned __int64 v383; // rsi
  __int64 v384; // r14
  int v385; // eax
  int v386; // eax
  char v387; // al
  __int64 v388; // rcx
  __int64 v389; // rdx
  __int64 v390; // rsi
  __int64 v391; // rsi
  __int64 v392; // rcx
  __int64 v394; // rsi
  __int64 v395; // rdi
  __int64 v396; // rbx
  const __m128i *v397; // r14
  __m128i v399; // xmm0
  __int64 v400; // r12
  __int64 v401; // rdx
  __int64 v402; // rdx
  __int64 v403; // rax
  __int64 v404; // rsi
  __int64 v406; // rdx
  __m128i *v407; // rsi
  __int64 v408; // rdi
  const __m128i *v409; // rbx
  const __m128i *v410; // r14
  __m128i v412; // xmm0
  const __m128i *v413; // r12
  __int64 v414; // rdx
  unsigned __int64 v415; // rax
  __int64 v416; // rsi
  __int64 v417; // rdx
  __int64 v418; // rax
  __int64 v419; // rdi
  _QWORD *v420; // rbx
  __int64 v421; // rdx
  __int64 v423; // rbx
  const __m128i *v424; // r15
  const __m128i *v425; // r12
  __m128i v427; // xmm0
  const __m128i *v428; // rdi
  __int64 v429; // rdx
  __int64 v430; // rdx
  __int64 v431; // rcx
  __int64 v432; // rcx
  __int64 v433; // rcx
  __int64 v434; // rsi
  __int64 v435; // r15
  __int64 v436; // rdi
  __int64 v437; // rbx
  __m128i v438; // [rsp+58h] [rbp-28h] BYREF
  __int64 v439; // [rsp+68h] [rbp-18h]
  _QWORD v440[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v441; // [rsp+80h] [rbp+0h] BYREF
  __m128i v442; // [rsp+88h] [rbp+8h]
  __m128i v443; // [rsp+98h] [rbp+18h] BYREF
  __int64 v444; // [rsp+A8h] [rbp+28h]
  const __m128i *v445; // [rsp+B0h] [rbp+30h] BYREF
  __m128i *v446; // [rsp+B8h] [rbp+38h]
  __int64 v447; // [rsp+C8h] [rbp+48h]
  __int64 v448; // [rsp+E0h] [rbp+60h]
  __int64 v449; // [rsp+E8h] [rbp+68h]
  __m128i v450; // [rsp+F0h] [rbp+70h]
  _BYTE v451[24]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v452; // [rsp+118h] [rbp+98h]
  __m128i v453; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v454; // [rsp+130h] [rbp+B0h]
  __m128i v455; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v456; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v457[56]; // [rsp+160h] [rbp+E0h]
  __m128i v458; // [rsp+198h] [rbp+118h]
  __m128i v459; // [rsp+1A8h] [rbp+128h]
  __m128i v460; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v461; // [rsp+1C8h] [rbp+148h]
  __m128i v462; // [rsp+1D8h] [rbp+158h] BYREF
  __m128i v463; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v464; // [rsp+200h] [rbp+180h] BYREF
  __m128i v465; // [rsp+210h] [rbp+190h]
  _QWORD v466[2]; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v467; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v468; // [rsp+240h] [rbp+1C0h]
  __m128i v469; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v470; // [rsp+260h] [rbp+1E0h]
  __m128i v471; // [rsp+270h] [rbp+1F0h]
  _BYTE v472[104]; // [rsp+280h] [rbp+200h] BYREF
  __m128i v473; // [rsp+2E8h] [rbp+268h] BYREF
  __int128 v474; // [rsp+2F8h] [rbp+278h]
  __m128i v475; // [rsp+308h] [rbp+288h] BYREF
  __m128i v476; // [rsp+318h] [rbp+298h] BYREF
  __int64 v477; // [rsp+328h] [rbp+2A8h]
  int v478; // [rsp+330h] [rbp+2B0h]
  unsigned __int64 v479; // [rsp+334h] [rbp+2B4h]
  __m128i v480; // [rsp+4A0h] [rbp+420h] BYREF
  __m128i v481[2]; // [rsp+4B0h] [rbp+430h] BYREF
  char v482; // [rsp+4D0h] [rbp+450h]
  HANDLE hObject; // [rsp+4D8h] [rbp+458h]
  __m128i v484; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v485; // [rsp+4F0h] [rbp+470h]
  __m128i v486; // [rsp+500h] [rbp+480h] BYREF
  __m128i v487; // [rsp+510h] [rbp+490h] BYREF
  __m128i v488; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v489; // [rsp+530h] [rbp+4B0h] BYREF
  __m128i v490; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v491; // [rsp+550h] [rbp+4D0h] BYREF
  __m128i v492; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v493; // [rsp+570h] [rbp+4F0h]
  __int128 v494; // [rsp+580h] [rbp+500h]
  __m128i v495; // [rsp+590h] [rbp+510h]
  __m128i v496; // [rsp+5A0h] [rbp+520h]
  int v497; // [rsp+5C0h] [rbp+540h]
  signed __int64 v498; // [rsp+5E0h] [rbp+560h] BYREF
  __int64 v499; // [rsp+5E8h] [rbp+568h]
  signed __int64 v500; // [rsp+5F0h] [rbp+570h]
  char v501; // [rsp+5F8h] [rbp+578h]
  _OWORD v502[2]; // [rsp+600h] [rbp+580h] BYREF
  __int64 *v503; // [rsp+620h] [rbp+5A0h] BYREF
  __int64 v504; // [rsp+628h] [rbp+5A8h]
  unsigned __int64 v505; // [rsp+630h] [rbp+5B0h]
  __int64 v506; // [rsp+638h] [rbp+5B8h] BYREF
  __int64 v507; // [rsp+640h] [rbp+5C0h]
  unsigned __int64 v508; // [rsp+648h] [rbp+5C8h]
  __m128i v509; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v510; // [rsp+660h] [rbp+5E0h]
  __int64 v511; // [rsp+668h] [rbp+5E8h]
  __int64 v512; // [rsp+670h] [rbp+5F0h]
  __int64 v513; // [rsp+678h] [rbp+5F8h]
  __m128i v514; // [rsp+680h] [rbp+600h] BYREF
  __m128i v515; // [rsp+690h] [rbp+610h]
  __m128i v516; // [rsp+6A0h] [rbp+620h] BYREF
  __m128i v517; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v518; // [rsp+6C0h] [rbp+640h]
  __m128i v519; // [rsp+6D0h] [rbp+650h] BYREF
  __m128i *v520; // [rsp+6E0h] [rbp+660h]
  __int128 v521; // [rsp+6E8h] [rbp+668h] BYREF
  __m128i v522; // [rsp+6F8h] [rbp+678h] BYREF
  __int64 v523; // [rsp+708h] [rbp+688h]
  _BYTE v524[48]; // [rsp+710h] [rbp+690h] BYREF
  __m128i v525; // [rsp+740h] [rbp+6C0h] BYREF
  __m128i v526; // [rsp+750h] [rbp+6D0h]
  __int64 v527; // [rsp+768h] [rbp+6E8h]
  __m128i *v528; // [rsp+770h] [rbp+6F0h]
  _QWORD *v529; // [rsp+778h] [rbp+6F8h]
  __m128i v530; // [rsp+780h] [rbp+700h] BYREF
  __m128i v531; // [rsp+790h] [rbp+710h]
  const __m128i *v532; // [rsp+7A0h] [rbp+720h]
  __int8 *v533; // [rsp+7A8h] [rbp+728h]
  __int64 v534; // [rsp+7B0h] [rbp+730h]
  __int16 v535; // [rsp+7B8h] [rbp+738h]
  unsigned __int64 v536; // [rsp+7C0h] [rbp+740h]
  __int64 v537; // [rsp+7C8h] [rbp+748h]
  char v538; // [rsp+7D7h] [rbp+757h] BYREF
  __int64 v539; // [rsp+7D8h] [rbp+758h]
  __int64 v540; // [rsp+7E0h] [rbp+760h]
  __int64 v541; // [rsp+7E8h] [rbp+768h]
  __int64 v542; // [rsp+7F0h] [rbp+770h]
  char v543; // [rsp+7FBh] [rbp+77Bh]
  char v544; // [rsp+7FCh] [rbp+77Ch]
  char v545; // [rsp+7FDh] [rbp+77Dh]
  char v546; // [rsp+7FEh] [rbp+77Eh]
  char v547; // [rsp+7FFh] [rbp+77Fh]
  __int64 v548; // [rsp+800h] [rbp+780h]
  __int64 v549; // [rsp+808h] [rbp+788h]
  char v550; // [rsp+814h] [rbp+794h]
  char v551; // [rsp+815h] [rbp+795h]
  char v552; // [rsp+816h] [rbp+796h]
  char v553; // [rsp+817h] [rbp+797h]
  __int64 v554; // [rsp+818h] [rbp+798h]
  __m128i *v555; // [rsp+820h] [rbp+7A0h]
  const __m128i *v556; // [rsp+828h] [rbp+7A8h]
  char v557; // [rsp+835h] [rbp+7B5h]
  char v558; // [rsp+836h] [rbp+7B6h]
  char v559; // [rsp+837h] [rbp+7B7h]
  __int64 v560; // [rsp+838h] [rbp+7B8h]

  v560 = -2;
  v511 = a1;
  v503 = a3;
  v4 = sub_14167F170();
  if ( *(_BYTE *)(v4 + 16) == 1 )
  {
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v434 = v4;
    v5 = sub_141696260();
    v4 = v434;
    *(_QWORD *)v434 = v5;
    *(_QWORD *)(v434 + 8) = v6;
    *(_BYTE *)(v434 + 16) = 1;
  }
  *(_QWORD *)v4 = v5 + 1;
  v7 = _mm_loadu_si128((const __m128i *)&MEMORY[0x1419E4880]);
  *(__m128i *)&v524[16] = v7;
  v8 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  *(__m128i *)v524 = v8;
  *(_QWORD *)&v524[32] = v5;
  *(_QWORD *)&v524[40] = v6;
  v529 = a2;
  v530.m128i_i64[0] = (__int64)(a2 + 20);
  v530.m128i_i8[8] = 0;
  v531.m128i_i64[0] = (__int64)(a2 + 24);
  v531.m128i_i8[8] = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4510);
  v10 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
  v11 = _mm_load_si128((const __m128i *)&xmmword_1419E44F0);
  v12 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
  v13 = nullptr;
  do
  {
    while ( 1 )
    {
      v14 = *(__int64 *)((char *)v530.m128i_i64 + (_QWORD)v13);
      sub_141695A00(v472, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
      v15 = v13 + 1;
      if ( *(_DWORD *)v472 != 2 )
        break;
      if ( (v472[8] & 3u) - 2 >= 2 && (v472[8] & 3) != 0 )
      {
        --*(_QWORD *)&v472[8];
        v472[0] = 3;
        sub_1416BCB00(&v472[8]);
      }
      ++v13;
      if ( v15 == (const __m128i *)32 )
        goto LABEL_74;
    }
    v16 = *(_QWORD *)(v14 + 8);
    v17 = *(_QWORD *)(v14 + 16);
    v514.m128i_i64[0] = 0;
    v514.m128i_i64[1] = 8;
    v515.m128i_i64[0] = 0;
    sub_140363E50(v472, v16, v17, &v514);
    v18 = *(_QWORD *)v472;
    if ( *(_QWORD *)v472 != -1 )
    {
      v64 = *(__m128i **)&v472[8];
      v65 = *(_OWORD *)&v472[16];
      v488 = *(__m128i *)&v472[32];
      v489 = *(__m128i *)&v472[48];
      v490 = *(__m128i *)&v472[64];
      v491 = _mm_loadu_si128((const __m128i *)&v472[80]);
      v66 = v515.m128i_i64[0];
      if ( v515.m128i_i64[0] )
      {
        v67 = (_QWORD *)(v514.m128i_i64[1] + 8);
        do
        {
          v68 = *(v67 - 1);
          if ( v68 )
            sub_140001660(*v67, v68, 1);
          v67 += 6;
          --v66;
        }
        while ( v66 );
      }
      if ( v514.m128i_i64[0] )
        sub_140001660(v514.m128i_i64[1], 48 * v514.m128i_i64[0], 8);
      v456 = _mm_load_si128(&v488);
      *(__m128i *)v457 = _mm_load_si128(&v489);
      *(__m128i *)&v457[16] = _mm_load_si128(&v490);
      *(__m128i *)&v457[32] = _mm_load_si128(&v491);
      v69 = *(_QWORD *)&v524[8];
      if ( *(_QWORD *)&v524[8] )
      {
        v556 = *((const __m128i **)&v65 + 1);
        v540 = v65;
        v554 = (__int64)v64;
        v70 = *(_QWORD *)&v524[24];
        if ( *(_QWORD *)&v524[24] )
        {
          v71 = *(_QWORD *)v524;
          v72 = (const __m128i *)(*(_QWORD *)v524 + 16LL);
          _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v524));
          do
          {
            for ( ; !(_DWORD)_RAX; _RAX = _mm_movemask_epi8(v74) ^ 0xFFFFu )
            {
              v74 = _mm_load_si128(v72);
              v71 -= 1280;
              ++v72;
            }
            _R14D = _RAX;
            __asm { tzcnt   eax, r14d }
            v76 = -80 * _RAX + v71;
            v77 = *(_QWORD *)(v76 - 80);
            if ( v77 )
              sub_140001660(*(_QWORD *)(v76 - 72), v77, 1);
            v78 = *(_QWORD *)(v76 - 40);
            if ( v78 != -1 && v78 )
              sub_140001660(*(_QWORD *)(v76 - 32), v78, 1);
            _RAX = _R14D & (unsigned int)(_R14D - 1);
            --v70;
          }
          while ( v70 );
        }
        v84 = 80 * v69;
        v85 = 81 * v69;
        v86 = v85 == -97;
        v87 = v85 + 97;
        v64 = (__m128i *)v554;
        v65 = __PAIR128__((unsigned __int64)v556, v540);
        if ( !v86 )
          sub_140001660(*(_QWORD *)v524 - v84 - 80, v87, 16);
      }
      v469 = v456;
      *(_QWORD *)&v470 = *(_QWORD *)v457;
      v88 = v511;
      *(_QWORD *)(v511 + 88) = *(_QWORD *)&v457[40];
      *(_OWORD *)(v88 + 72) = *(_OWORD *)&v457[24];
      *(_OWORD *)(v88 + 56) = *(_OWORD *)&v457[8];
      result = v470;
      *(_QWORD *)(v88 + 48) = v470;
      *(__m128i *)(v88 + 32) = v469;
      *(_QWORD *)v88 = v18;
      *(_QWORD *)(v88 + 8) = v64;
      *(_OWORD *)(v88 + 16) = v65;
      return result;
    }
    v556 = v13 + 1;
    v19 = (__m128i *)v514.m128i_i64[0];
    v20 = 16 * v515.m128i_i64[0];
    v21 = v514.m128i_i64[1] + 48 * v515.m128i_i64[0];
    v514.m128i_i64[0] = v514.m128i_i64[1];
    v548 = (__int64)v19;
    v515.m128i_i64[0] = (__int64)v19;
    v515.m128i_i64[1] = v21;
    v22 = 3 * v20 - 48;
    v23 = (_QWORD *)(v514.m128i_i64[1] + 56);
    v527 = v514.m128i_i64[1];
    for ( i = v514.m128i_i64[1]; i != v21; i = v25 )
    {
      v25 = i + 48;
      v514.m128i_i64[1] = i + 48;
      v554 = *(_QWORD *)i;
      if ( v554 == -1 )
      {
        if ( v21 != v25 )
        {
          v58 = v22 / 0x30;
          do
          {
            v59 = *(v23 - 1);
            if ( v59 )
              sub_140001660(*v23, v59, 1);
            v23 += 6;
            --v58;
          }
          while ( v58 );
        }
        break;
      }
      v26 = *(_QWORD *)(i + 16);
      v27 = *(_QWORD *)(i + 32);
      v28 = *(_QWORD *)(i + 40);
      v540 = *(_QWORD *)(i + 8);
      v29 = sub_141682C30(v540, v26);
      if ( !v29 )
        goto LABEL_64;
      sub_1416B3AE0(v472, v29, v30);
      if ( *(_DWORD *)v472 == 1 )
        goto LABEL_64;
      v31 = *(_QWORD *)&v472[16];
      if ( *(_QWORD *)&v472[16] < 8u )
        goto LABEL_64;
      v32 = *(_QWORD *)&v472[8];
      if ( **(_QWORD **)&v472[8] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(*(_QWORD *)&v472[8] + *(_QWORD *)&v472[16] - 6LL) ^ 0x6F736A2E
         | *(unsigned __int16 *)(*(_QWORD *)&v472[8] + *(_QWORD *)&v472[16] - 2LL) ^ 0x6C6E )
      {
        goto LABEL_64;
      }
      v33 = *(_QWORD *)&v472[16] - 6LL;
      if ( (unsigned __int64)(*(_QWORD *)&v472[16] - 6LL) < 8
        || *(char *)(*(_QWORD *)&v472[8] + 8LL) <= -65
        || *(char *)(*(_QWORD *)&v472[8] + v33) <= -65 )
      {
        sub_141938F40(*(_DWORD *)&v472[8], *(_DWORD *)&v472[16], 8, v33, (__int64)&off_1419E7D48);
      }
      *(_QWORD *)v472 = 0;
      *(_QWORD *)&v472[8] = *(_QWORD *)&v472[16] - 14LL;
      *(_QWORD *)&v472[16] = v32 + 8;
      *(_QWORD *)&v472[24] = v31 - 14;
      *(_QWORD *)&v472[32] = 0;
      *(_QWORD *)&v472[40] = v31 - 14;
      *(_QWORD *)&v472[48] = 0x2D0000002DLL;
      v472[56] = 1;
      *(_WORD *)&v472[64] = 1;
      sub_1403DEFC0(&v464, v472);
      if ( v465.m128i_i64[0] <= 4uLL )
      {
        if ( !v464.m128i_i64[0] )
          goto LABEL_64;
        v34 = v464.m128i_i64[1];
        v35 = 16 * v464.m128i_i64[0];
        goto LABEL_63;
      }
      v539 = v464.m128i_i64[1];
      sub_140D1F3D0(
        (unsigned int)v472,
        v464.m128i_i32[2] + 16 * v465.m128i_i32[0] - 80,
        5,
        (unsigned int)&unk_1419E7D60,
        1);
      *(_QWORD *)&v485 = *(_QWORD *)&v472[16];
      v484 = _mm_loadu_si128((const __m128i *)v472);
      sub_1416AB5A0(&v480, v540, v26);
      v37 = v481[0].m128i_i64[0];
      v549 = v480.m128i_i64[1];
      if ( v481[0].m128i_i64[0] < 0 )
      {
        v38 = 0;
LABEL_79:
        v547 = 1;
        sub_141938D2B(v38, v37);
      }
      if ( !v481[0].m128i_i64[0] )
      {
        v39 = 1;
        goto LABEL_55;
      }
      v536 = v481[0].m128i_i64[0];
      nullsub_1(v36);
      v38 = 1;
      v39 = sub_140001650(v536, 1);
      v37 = v536;
      if ( !v39 )
        goto LABEL_79;
      v40 = v549;
      if ( v536 < 8 || (unsigned __int64)(v39 - v549) < 0x20 )
      {
        v41 = 0;
      }
      else
      {
        if ( v536 < 0x20 )
        {
          v41 = 0;
LABEL_37:
          v47 = v41;
          v41 = v37 & 0x7FFFFFFFFFFFFFF8LL;
          do
          {
            v48 = _mm_loadl_epi64((const __m128i *)(v40 + v47));
            v49 = _mm_cmpeq_epi8(v48, si128);
            *(_QWORD *)(v39 + v47) = _mm_or_si128(_mm_and_si128(v49, v10), _mm_andnot_si128(v49, v48)).m128i_u64[0];
            v47 += 8;
          }
          while ( v41 != v47 );
          if ( v37 == v41 )
            goto LABEL_55;
          goto LABEL_40;
        }
        v41 = v536 & 0x7FFFFFFFFFFFFFE0LL;
        v42 = 0;
        do
        {
          v43 = _mm_loadu_si128((const __m128i *)(v40 + v42));
          v44 = _mm_loadu_si128((const __m128i *)(v40 + v42 + 16));
          v45 = _mm_cmpeq_epi8(v43, v11);
          v46 = _mm_cmpeq_epi8(v44, v11);
          *(__m128i *)(v39 + v42) = _mm_or_si128(_mm_and_si128(v45, v12), _mm_andnot_si128(v45, v43));
          *(__m128i *)(v39 + v42 + 16) = _mm_or_si128(_mm_and_si128(v46, v12), _mm_andnot_si128(v46, v44));
          v42 += 32;
        }
        while ( v41 != v42 );
        if ( v37 == v41 )
          goto LABEL_55;
        if ( (v37 & 0x18) != 0 )
          goto LABEL_37;
      }
LABEL_40:
      v50 = v41;
      v51 = v37 & 3;
      if ( (v37 & 3) != 0 )
      {
        v50 = v41;
        do
        {
          v52 = *(_BYTE *)(v40 + v50);
          if ( v52 == 92 )
            v52 = 47;
          *(_BYTE *)(v39 + v50++) = v52;
          --v51;
        }
        while ( v51 );
      }
      v37 = v536;
      if ( v41 - v536 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v53 = *(_BYTE *)(v40 + v50);
          if ( v53 == 92 )
            v53 = 47;
          *(_BYTE *)(v39 + v50) = v53;
          v54 = *(_BYTE *)(v40 + v50 + 1);
          if ( v54 == 92 )
            v54 = 47;
          *(_BYTE *)(v39 + v50 + 1) = v54;
          v55 = *(_BYTE *)(v40 + v50 + 2);
          if ( v55 == 92 )
            v55 = 47;
          *(_BYTE *)(v39 + v50 + 2) = v55;
          v56 = *(_BYTE *)(v40 + v50 + 3);
          if ( v56 == 92 )
            v56 = 47;
          *(_BYTE *)(v39 + v50 + 3) = v56;
          v50 += 4;
        }
        while ( v37 != v50 );
      }
LABEL_55:
      *(_QWORD *)&v472[16] = v37;
      *(_QWORD *)&v472[24] = v39;
      *(_QWORD *)&v472[32] = v37;
      v57 = v530.m128i_i8[(_QWORD)v13 + 8];
      *(_QWORD *)v472 = 1;
      *(_QWORD *)&v472[8] = v27;
      v472[48] = v57;
      *(_QWORD *)&v472[40] = v28;
      v547 = 0;
      sub_1403A9690(&v488, v524, &v484, v472);
      if ( v488.m128i_i32[0] != 2 && v489.m128i_i64[0] != -1 && v489.m128i_i64[0] )
        sub_140001660(v489.m128i_i64[1], v489.m128i_i64[0], 1);
      if ( v480.m128i_i64[0] > 0 )
        sub_140001660(v549, v480.m128i_i64[0], 1);
      if ( v464.m128i_i64[0] )
      {
        v35 = 16 * v464.m128i_i64[0];
        v34 = v539;
LABEL_63:
        sub_140001660(v34, v35, 8);
      }
LABEL_64:
      if ( v554 )
        sub_140001660(v540, v554, 1);
      v22 -= 48LL;
      v23 += 6;
    }
    if ( v548 )
      sub_140001660(v527, 48 * v548, 8);
    v13 = v556;
  }
  while ( v556 != (const __m128i *)32 );
LABEL_74:
  v60 = *(_QWORD *)&v524[8];
  *(__m128i *)&v451[8] = _mm_loadu_si128((const __m128i *)&v524[24]);
  v452 = *(_QWORD *)&v524[40];
  v450 = *(__m128i *)v524;
  *(_QWORD *)v451 = *(_QWORD *)&v524[16];
  v61 = v529;
  if ( v529[120] == -1 )
  {
    v79 = v529[1];
    v80 = v529[2];
    v552 = 1;
    sub_1401B8620(&v498, v79, v80);
    v81 = v499;
    v62 = v500;
  }
  else
  {
    v62 = v529[122];
    if ( v62 < 0 )
    {
      v63 = 0;
      goto LABEL_77;
    }
    if ( v62 )
    {
      v82 = (const __m128i *)v529[121];
      nullsub_1(*(_QWORD *)&v524[16]);
      v63 = 1;
      v83 = (__m128i *)sub_140001650(v62, 1);
      if ( !v83 )
      {
LABEL_77:
        v552 = 1;
        sub_141938D2B(v63, v62);
      }
      v81 = (__int64)v83;
      v498 = v62;
      v499 = (__int64)v83;
      sub_1418F44E0(v83, v82, v62);
      v500 = v62;
      v61 = v529;
    }
    else
    {
      v498 = 0;
      v499 = 1;
      v500 = 0;
      v81 = 1;
    }
    v501 = *((_BYTE *)v61 + 984);
  }
  v546 = 1;
  sub_1402C9920(v472, v81, v62);
  result = *(_QWORD *)v472;
  v488 = *(__m128i *)&v472[8];
  v489 = *(__m128i *)&v472[24];
  v490 = *(__m128i *)&v472[40];
  v90 = v472[56];
  if ( *(_QWORD *)v472 != -1 )
  {
    v91 = *(_DWORD *)&v472[57];
    v92 = v511;
    *(_DWORD *)(v511 + 60) = *(_DWORD *)&v472[60];
    *(_DWORD *)(v92 + 57) = v91;
    v93 = *(_OWORD *)&v472[64];
    *(_OWORD *)(v92 + 80) = *(_OWORD *)&v472[80];
    *(_OWORD *)(v92 + 64) = v93;
    v94 = _mm_load_si128(&v488);
    v95 = _mm_load_si128(&v489);
    *(__m128i *)(v92 + 40) = _mm_load_si128(&v490);
    *(__m128i *)(v92 + 24) = v95;
    *(__m128i *)(v92 + 8) = v94;
    *(_QWORD *)v92 = result;
    *(_BYTE *)(v92 + 56) = v90;
    v96 = v498;
    if ( v498 )
      goto LABEL_109;
    goto LABEL_110;
  }
  v110 = _mm_load_si128(&v488);
  v111 = _mm_load_si128(&v489);
  v455 = _mm_load_si128(&v490);
  v454 = v111;
  v453 = v110;
  v545 = 1;
  sub_1402DB340(&v445, v81, v62);
  v509.m128i_i64[0] = 0;
  v509.m128i_i64[1] = 8;
  v510 = 0;
  v86 = (v90 & 1) == 0;
  v113 = v529;
  if ( v86 )
  {
    nullsub_1(v112);
    v114 = sub_140001650(23, 1);
    if ( !v114 )
    {
      v557 = 1;
      sub_141938D2B(1, 23);
    }
    *(__m128i *)v114 = _mm_loadu_si128(&xmmword_1419E80CD);
    v554 = v114;
    *(_QWORD *)(v114 + 15) = 0x454C42414C494156LL;
    v488.m128i_i64[0] = v81;
    v488.m128i_i64[1] = v62;
    *(_QWORD *)v472 = &v488;
    *(_QWORD *)&v472[8] = sub_14169F630;
    sub_1416ABFD0(&v438, &unk_1419E80E4, v472);
    *(_QWORD *)v472 = 23;
    *(_QWORD *)&v472[8] = v554;
    *(_QWORD *)&v472[16] = 23;
    *(__m128i *)&v472[24] = _mm_loadu_si128(&v438);
    *(_QWORD *)&v472[40] = v439;
    v115 = v510;
    if ( v510 == v509.m128i_i64[0] )
      sub_14190F490(&v509);
    v116 = v509.m128i_i64[1];
    v117 = 48 * v115;
    v118 = _mm_loadu_si128((const __m128i *)v472);
    v119 = _mm_loadu_si128((const __m128i *)&v472[16]);
    *(__m128i *)(v509.m128i_i64[1] + v117 + 32) = _mm_loadu_si128((const __m128i *)&v472[32]);
    *(__m128i *)(v116 + v117 + 16) = v119;
    *(__m128i *)(v116 + v117) = v118;
    v510 = v115 + 1;
  }
  v120 = v113[13];
  v121 = v113[14];
  v557 = 1;
  v122 = sub_14167F170();
  if ( *(_BYTE *)(v122 + 16) == 1 )
  {
    v123 = *(_QWORD *)v122;
    v124 = *(_QWORD *)(v122 + 8);
  }
  else
  {
    v557 = 1;
    v435 = v122;
    v123 = sub_141696260();
    v122 = v435;
    *(_QWORD *)v435 = v123;
    *(_QWORD *)(v435 + 8) = v124;
    *(_BYTE *)(v435 + 16) = 1;
  }
  *(_QWORD *)v122 = v123 + 1;
  *(__m128i *)&v524[16] = v7;
  *(__m128i *)v524 = v8;
  *(_QWORD *)&v524[32] = v123;
  *(_QWORD *)&v524[40] = v124;
  sub_141695A00(v472, v120, v121);
  if ( *(_DWORD *)v472 == 2 )
  {
    if ( (v472[8] & 3u) - 2 >= 2 && (v472[8] & 3) != 0 )
    {
      --*(_QWORD *)&v472[8];
      v472[0] = 3;
      sub_1416BCB00(&v472[8]);
    }
    v125 = *(_QWORD *)v524;
    v488 = *(__m128i *)&v524[8];
    v489 = *(__m128i *)&v524[24];
    v490.m128i_i64[0] = *(_QWORD *)&v524[40];
    goto LABEL_135;
  }
  sub_14169D1D0(v472, v120, v121);
  v127 = *(_QWORD *)&v472[8];
  if ( *(_QWORD *)v472 == -1 )
  {
    sub_14029A620(v524);
    v418 = v511;
    *(_QWORD *)v511 = 2;
    *(_QWORD *)(v418 + 8) = v127;
    v419 = v510;
    if ( v510 )
    {
      v420 = (_QWORD *)(v509.m128i_i64[1] + 32);
      do
      {
        v421 = *(v420 - 4);
        if ( v421 )
          sub_140001660(*(v420 - 3), v421, 1);
        v417 = *(v420 - 1);
        if ( v417 )
          sub_140001660(*v420, v417, 1);
        v420 += 6;
        --v419;
      }
      while ( v419 );
    }
    if ( v509.m128i_i64[0] )
      sub_140001660(v509.m128i_i64[1], 48 * v509.m128i_i64[0], 8);
    HIDWORD(_RAX) = HIDWORD(v446);
    if ( v446 )
    {
      v554 = (__int64)v446;
      v423 = v447;
      if ( v447 )
      {
        v424 = v445;
        v425 = v445 + 1;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v445));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v427 = _mm_load_si128(v425);
              v424 -= 48;
              ++v425;
              _R13D = _mm_movemask_epi8(v427) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v428 = &v424[-3 * _RAX];
          v429 = v428[-3].m128i_i64[0];
          if ( v429 )
            sub_140001660(v428[-3].m128i_i64[1], v429, 1);
          v430 = v428[-2].m128i_i64[1];
          if ( v430 != -1 && v430 )
            sub_140001660(v428[-1].m128i_i64[0], v430, 1);
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
          --v423;
        }
        while ( v423 );
      }
      v417 = 49 * v554 + 65;
      if ( 49 * v554 != -65 )
        sub_140001660(&v445[-3 * v554 - 3], v417, 16);
    }
    result = sub_140298940(&v453, v417);
    v96 = v498;
    if ( v498 )
    {
LABEL_109:
      result = sub_140001660(v81, v96, 1);
      v60 = v450.m128i_i64[1];
    }
LABEL_110:
    if ( v60 )
    {
      v97 = *(_QWORD *)&v451[8];
      if ( *(_QWORD *)&v451[8] )
      {
        v98 = v450.m128i_i64[0];
        v99 = (const __m128i *)(v450.m128i_i64[0] + 16);
        _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v450.m128i_i64[0]));
        do
        {
          for ( ; !(_DWORD)_RAX; _RAX = _mm_movemask_epi8(v101) ^ 0xFFFFu )
          {
            v101 = _mm_load_si128(v99);
            v98 -= 1280;
            ++v99;
          }
          _R15D = _RAX;
          __asm { tzcnt   eax, r15d }
          v103 = v98 - 80 * _RAX;
          v104 = *(_QWORD *)(v103 - 80);
          if ( v104 )
            sub_140001660(*(_QWORD *)(v103 - 72), v104, 1);
          v105 = *(_QWORD *)(v103 - 40);
          if ( v105 != -1 )
          {
            if ( v105 )
              sub_140001660(*(_QWORD *)(v103 - 32), v105, 1);
          }
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          --v97;
        }
        while ( v97 );
      }
      result = 80 * v60;
      v106 = 81 * v60 + 97;
      if ( v106 )
      {
        v107 = v450.m128i_i64[0] - result - 80;
        v108 = 16;
        v109 = v106;
        return sub_140001660(v107, v109, v108);
      }
    }
    return result;
  }
  v540 = *(_QWORD *)v472;
  *(_QWORD *)v472 = 0;
  *(_QWORD *)&v472[8] = *(_QWORD *)&v472[16];
  v527 = v127;
  *(_QWORD *)&v472[16] = v127;
  *(_QWORD *)&v472[24] = *(_QWORD *)&v472[8];
  *(_OWORD *)&v472[32] = __PAIR128__(*(unsigned __int64 *)&v472[8], 0);
  *(_QWORD *)&v472[48] = 0xA0000000ALL;
  v472[56] = 1;
  *(_WORD *)&v472[64] = 0;
  v128 = 0;
  while ( 2 )
  {
    if ( (v128 & 1) == 0 )
    {
      v129 = *(_QWORD *)&v472[16];
      sub_14036BCE0(&v456, &v472[16]);
      if ( v456.m128i_i32[0] == 1 )
      {
        v130 = *(_QWORD *)v472;
        *(_QWORD *)v472 = *(_QWORD *)v457;
        v131 = *(_QWORD *)v457 - v130;
        v132 = v130 + v129;
        if ( *(_QWORD *)v457 == v130 )
          goto LABEL_159;
LABEL_150:
        if ( *(_BYTE *)(v132 + v131 - 1) == 10 )
        {
          v133 = v131 - 1;
          if ( v131 == 1 )
          {
            v131 = -1;
            v134 = 0;
          }
          else
          {
            v86 = *(_BYTE *)(v132 + v131 - 2) == 13;
            v131 -= 2;
            v134 = v132;
            if ( !v86 )
              v134 = 0;
          }
          if ( v134 )
            v132 = v134;
          else
            v131 = v133;
        }
      }
      else
      {
        if ( v472[65] )
          break;
        v472[65] = 1;
        v131 = *(_QWORD *)&v472[8] - *(_QWORD *)v472;
        if ( (v472[64] | (*(_QWORD *)&v472[8] != *(_QWORD *)v472)) != 1 )
          break;
        v132 = *(_QWORD *)&v472[16] + *(_QWORD *)v472;
        if ( v131 )
          goto LABEL_150;
      }
LABEL_159:
      sub_140E91160(v132, v131);
      if ( v135 )
      {
        v456.m128i_i64[0] = v132;
        v456.m128i_i64[1] = v131;
        *(_OWORD *)v457 = 0;
        *(_QWORD *)&v457[16] = v132;
        *(_QWORD *)&v457[24] = v131;
        sub_14062D280(&v480, &v456);
        if ( v480.m128i_i8[0] == -1 )
        {
          sub_14002F910(&v480.m128i_u64[1]);
        }
        else
        {
          v136 = _mm_loadu_si128(&v480);
          v531 = _mm_loadu_si128(v481);
          v530 = v136;
          v137 = sub_1416419F0(aId_1, 2, &v530);
          v138 = 1;
          if ( !v137 || *(_BYTE *)v137 != 3 )
            goto LABEL_167;
          v139 = *(_QWORD *)(v137 + 24);
          if ( v139 < 0 )
          {
            v431 = 0;
            goto LABEL_616;
          }
          v556 = *(const __m128i **)(v137 + 24);
          if ( v139 )
          {
            v140 = *(const __m128i **)(v137 + 16);
            nullsub_1(v139);
            v554 = sub_140001650(v556, 1);
            if ( !v554 )
            {
              v554 = (__int64)v556;
              v431 = 1;
LABEL_616:
              sub_141938D2B(v431, v554);
            }
            sub_1418F44E0((__m128i *)v554, v140, (unsigned __int64)v556);
            v138 = 0;
          }
          else
          {
LABEL_167:
            v554 = 1;
            v556 = nullptr;
          }
          v553 = 1;
          v141 = sub_1416419F0(aThreadName, 11, &v530);
          if ( !v141 || *(_BYTE *)v141 != 3 )
            goto LABEL_174;
          v142 = *(_QWORD *)(v141 + 24);
          if ( v142 < 0 )
          {
            v432 = 0;
            goto LABEL_622;
          }
          v549 = *(_QWORD *)(v141 + 24);
          if ( v142 )
          {
            v143 = *(const __m128i **)(v141 + 16);
            nullsub_1(v142);
            v548 = sub_140001650(v549, 1);
            if ( !v548 )
            {
              v548 = v549;
              v432 = 1;
LABEL_622:
              v553 = 1;
              sub_141938D2B(v432, v548);
            }
            sub_1418F44E0((__m128i *)v548, v143, v549);
          }
          else
          {
LABEL_174:
            v548 = 1;
            v549 = 0;
          }
          v551 = 1;
          v144 = sub_1416419F0(aUpdatedAt, 10, &v530);
          v145 = 0.0;
          if ( v144 )
          {
            if ( *(_BYTE *)v144 == 3 )
            {
              v146 = *(_QWORD *)(v144 + 16);
              v147 = *(_QWORD *)(v144 + 24);
              v551 = 1;
              sub_14140B4F0(&v456, v146, v147);
              if ( v456.m128i_i32[0] )
              {
                v148 = (v456.m128i_i32[0] >> 13) - 1;
                v149 = 0;
                if ( v456.m128i_i32[0] >> 13 <= 0 )
                {
                  v150 = (1 - (v456.m128i_i32[0] >> 13)) / 0x190u + 1;
                  v148 += 400 * v150;
                  v149 = -146097 * v150;
                }
                v145 = (double)(v456.m128i_i32[1]
                              + 86400
                              * (((v148 / 100) >> 2)
                               + ((1461 * v148) >> 2)
                               + v149
                               + (((unsigned __int32)v456.m128i_i32[0] >> 4) & 0x1FF)
                               - v148 / 100
                               - 719163));
              }
            }
          }
          v151 = v556;
          if ( v138 )
          {
            if ( v549 )
              sub_140001660(v548, v549, 1);
            if ( v151 )
            {
              v152 = v554;
              v153 = (__int64)v151;
              goto LABEL_189;
            }
          }
          else
          {
            v484.m128i_i64[0] = (__int64)v556;
            v484.m128i_i64[1] = v554;
            *(_QWORD *)&v485 = v556;
            v456.m128i_i64[0] = v549;
            v456.m128i_i64[1] = v548;
            *(_QWORD *)v457 = v549;
            *(double *)&v457[8] = v145;
            v551 = 0;
            sub_1403A9DA0(&v514, v524, &v484, &v456);
            v153 = v514.m128i_i64[0];
            if ( v514.m128i_i64[0] != -1 && v514.m128i_i64[0] )
            {
              v152 = v514.m128i_i64[1];
LABEL_189:
              sub_140001660(v152, v153, 1);
            }
          }
          sub_14002F9D0(&v530);
        }
      }
      v128 = v472[65];
      continue;
    }
    break;
  }
  v125 = *(_QWORD *)v524;
  v488 = *(__m128i *)&v524[8];
  v489 = *(__m128i *)&v524[24];
  v490.m128i_i64[0] = *(_QWORD *)&v524[40];
  if ( v540 )
    sub_140001660(v527, v540, 1);
LABEL_135:
  v442 = _mm_load_si128(&v488);
  v443 = v489;
  v444 = v490.m128i_i64[0];
  v441 = v125;
  v550 = 1;
  sub_14149D230(&v488);
  HIDWORD(_RAX) = v488.m128i_i32[1];
  v527 = v125;
  if ( v488.m128i_i64[0] == -1 )
  {
    v512 = -1;
  }
  else
  {
    v540 = v488.m128i_i64[1];
    v554 = v488.m128i_i64[0];
    sub_1416828D0((unsigned int)v472, v488.m128i_i32[2], v489.m128i_i32[0], (unsigned int)&unk_1419E6080, 5);
    if ( v554 )
      sub_140001660(v540, v554, 1);
    v504 = *(_QWORD *)&v472[8];
    v512 = *(_QWORD *)v472;
    HIDWORD(_RAX) = *(_DWORD *)&v472[20];
    v448 = *(_QWORD *)&v472[16];
  }
  v471 = _mm_loadu_si128((const __m128i *)&v451[16]);
  v470 = *(_OWORD *)v451;
  v469 = v450;
  v154 = v453.m128i_i64[0];
  v155 = v454.m128i_i64[1];
  v156 = (const __m128i *)(v453.m128i_i64[0] + 16);
  _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v453.m128i_i64[0]));
  while ( v155 )
  {
    if ( !(_WORD)_R12D )
    {
      do
      {
        v158 = _mm_load_si128(v156);
        v154 -= 6656;
        ++v156;
        _R12D = _mm_movemask_epi8(v158) ^ 0xFFFF;
      }
      while ( !_R12D );
    }
    __asm { tzcnt   eax, r12d }
    v159 = -416 * _RAX;
    sub_1416AC440(&v488, v154 - 416 * _RAX - 416);
    sub_1403A35E0(v472, &v469, &v488);
    _R12D &= _R12D - 1;
    --v155;
    HIDWORD(_RAX) = *(_DWORD *)&v472[4];
    if ( *(_QWORD *)v472 != -1 )
    {
      v554 = *(_QWORD *)v472;
      v160 = v154 + v159 - 392;
      v161 = _mm_loadu_si128((const __m128i *)&v472[8]);
      v540 = *(_QWORD *)&v472[8];
      v162 = *(_QWORD *)&v472[24];
      v163 = *(_QWORD *)&v472[32];
      sub_1402DC970(&v488, v160);
      *(_QWORD *)&v472[48] = v491.m128i_i64[0];
      *(__m128i *)&v472[32] = _mm_loadu_si128(&v490);
      *(__m128i *)&v472[16] = v489;
      *(__m128i *)v472 = v488;
      v164 = *(const __m128i **)v162;
      v165 = *(_QWORD *)(v162 + 8);
      v166 = v163 & v165;
      _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v162 + (v163 & v165))));
      if ( !(_DWORD)_R8 )
      {
        v174 = 16;
        do
        {
          v166 = v165 & (v174 + v166);
          _R8 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v164 + v166)));
          v174 += 16;
        }
        while ( !(_DWORD)_R8 );
      }
      __asm { tzcnt   r8d, r8d }
      _R8 = v165 & (v166 + _R8);
      v169 = v164->m128i_i8[_R8];
      if ( v169 >= 0 )
      {
        _EDX = _mm_movemask_epi8(_mm_load_si128(v164));
        __asm { tzcnt   r8d, edx }
        v169 = v164->m128i_i8[_R8];
      }
      v170 = v163 >> 57;
      v164->m128i_i8[_R8] = v170;
      v164[1].m128i_i8[v165 & (_R8 - 16)] = v170;
      v171 = -5 * _R8;
      v164[v171 - 5].m128i_i64[0] = v554;
      *(__m128i *)((char *)&v164[v171 - 4] - 8) = v161;
      v172 = *(__m128i *)&v472[16];
      v173 = _mm_load_si128((const __m128i *)&v472[32]);
      *(const __m128i *)((char *)&v164[v171 - 3] - 8) = *(const __m128i *)v472;
      *(__m128i *)((char *)&v164[v171 - 2] - 8) = v172;
      *(__m128i *)((char *)&v164[v171 - 1] - 8) = v173;
      v164[v171 - 1].m128i_i64[1] = *(_QWORD *)&v472[48];
      _RAX = v169 & 1;
      *(__m128i *)(v162 + 16) = _mm_sub_epi64(
                                  _mm_loadu_si128((const __m128i *)(v162 + 16)),
                                  (__m128i)_mm_shuffle_ps(
                                             (__m128)_mm_cvtsi32_si128(_RAX),
                                             (__m128)xmmword_1419D3560,
                                             228));
    }
  }
  v176 = sub_14167F170();
  v177 = v176;
  if ( *(_BYTE *)(v176 + 16) == 1 )
  {
    v178 = *(_QWORD *)v176;
    v179 = *(_QWORD *)(v177 + 8);
  }
  else
  {
    v178 = sub_141696260();
    *(_QWORD *)v177 = v178;
    *(_QWORD *)(v177 + 8) = v179;
    *(_BYTE *)(v177 + 16) = 1;
  }
  _RCX = v178 + 1;
  *(_QWORD *)v177 = v178 + 1;
  v465 = v7;
  v464 = v8;
  v466[0] = v178;
  v466[1] = v179;
  v181 = v469.m128i_i64[0];
  v554 = *((_QWORD *)&v470 + 1);
  v182 = (const __m128i *)(v469.m128i_i64[0] + 16);
  _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v469.m128i_i64[0]));
  v184 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
  v185 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
  v186 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
  v187 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v188 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v189 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
LABEL_214:
  while ( 2 )
  {
    if ( v554 )
    {
      if ( !(_WORD)_R15D )
      {
        do
        {
          v198 = _mm_load_si128(v182);
          v181 -= 1280;
          ++v182;
          _R15D = _mm_movemask_epi8(v198) ^ 0xFFFF;
        }
        while ( !_R15D );
      }
      __asm { tzcnt   ecx, r15d }
      _R15D &= _R15D - 1;
      _RCX = -(__int64)_RCX;
      v199 = v181 + 80 * _RCX;
      --v554;
      v540 = v199 - 80;
      v200 = v503;
      if ( v503 )
      {
        if ( !v503[3] )
          continue;
        v197 = sub_140D2AC70(v503 + 4, v540);
        _RCX = v197 >> 57;
        v201 = *v200;
        v195 = v200[1];
        v202 = _mm_cvtsi32_si128(v197 >> 57);
        v203 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v202, v202), 0), 68);
        v204 = *(_QWORD *)(v199 - 72);
        v205 = *(_QWORD *)(v199 - 64);
        for ( j = 0; ; j += 16 )
        {
          v190 = (__m128i *)(v195 & v197);
          v191 = _mm_loadu_si128((__m128i *)((char *)v190 + v201));
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v191, v203));
          if ( (_DWORD)_RDX )
            break;
LABEL_212:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v191, (__m128i)-1LL)) )
            goto LABEL_214;
          v197 = (unsigned __int64)v190[1].m128i_u64 + j;
        }
        v548 = (__int64)v190;
        v549 = v195;
        v539 = j;
        while ( 1 )
        {
          v556 = (const __m128i *)_RDX;
          __asm { tzcnt   edx, edx }
          v193 = -(__int64)(v195 & ((unsigned __int64)v190->m128i_u64 + _RDX));
          if ( v205 == *(_QWORD *)(v201 + 24 * v193 - 8)
            && !(unsigned int)sub_1418F4B70(v204, *(_QWORD *)(v201 + 24 * v193 - 16)) )
          {
            break;
          }
          v194 = (_DWORD)v556 - 1;
          LOWORD(v194) = (unsigned __int16)v556 & ((_WORD)v556 - 1);
          _RDX = v194;
          v190 = (__m128i *)v548;
          v195 = v549;
          j = v539;
          if ( ((unsigned __int16)v556 & (unsigned __int16)((_WORD)v556 - 1)) == 0 )
            goto LABEL_212;
        }
      }
      if ( *(_QWORD *)(v199 - 40) == -1 )
        continue;
      v206 = *(_QWORD *)(v199 - 32);
      v207 = *(_QWORD *)(v199 - 24);
      if ( !(unsigned __int8)sub_141682B30(v206, v207) )
        continue;
      v440[0] = v206;
      v440[1] = v207;
      sub_141695A00(v472, v206, v207);
      if ( *(_DWORD *)v472 == 2 )
      {
        v208 = *(void **)&v472[8];
        v209 = 2;
        goto LABEL_484;
      }
      v548 = *(_QWORD *)&v472[56];
      v210 = *(_QWORD *)&v472[48];
      sub_1416AB5A0(v472, v206, v207);
      if ( *(_QWORD *)v472 == -1 )
      {
        v214 = *(const __m128i **)&v472[16];
        v215 = v536;
        if ( *(__int64 *)&v472[16] < 0 )
        {
          v433 = 0;
          goto LABEL_626;
        }
        v549 = v210;
        if ( *(_QWORD *)&v472[16] )
        {
          v556 = *(const __m128i **)&v472[8];
          nullsub_1(v211);
          v216 = (__m128i *)sub_140001650(v214, 1);
          v217 = v214;
          v212 = &v530;
          if ( !v216 )
          {
            v215 = (unsigned __int64)v214;
            v433 = 1;
LABEL_626:
            sub_141938D2B(v433, v215);
          }
          v213 = (__int64)v216;
          v218 = v556;
          v556 = v217;
          sub_1418F44E0(v216, v218, (unsigned __int64)v217);
          v219 = v556;
        }
        else
        {
          v219 = nullptr;
          v213 = 1;
          v212 = &v530;
        }
        v519.m128i_i64[0] = (__int64)v219;
        v519.m128i_i64[1] = v213;
        v520 = (__m128i *)v219;
      }
      else
      {
        v549 = v210;
        v520 = *(__m128i **)&v472[16];
        v519 = _mm_loadu_si128((const __m128i *)v472);
        v212 = &v530;
        v213 = v536;
      }
      if ( dword_1421E0140 )
      {
        v559 = 1;
        sub_141911584(&byte_1421E0108);
      }
      LOBYTE(v211) = 1;
      if ( _InterlockedCompareExchange8(&byte_1421E0108, 1, 0) )
      {
        v559 = 1;
        sub_141937480(&byte_1421E0108);
      }
      if ( 2 * *off_1421E7210 )
      {
        v559 = 1;
        v221 = sub_141938160(v211);
        LOBYTE(v221) = v221 ^ 1;
        LODWORD(v556) = v221;
        v536 = v213;
        if ( byte_1421E0109 )
          goto LABEL_238;
      }
      else
      {
        LODWORD(v556) = 0;
        v536 = v213;
        if ( byte_1421E0109 )
        {
LABEL_238:
          if ( !(_BYTE)v556 )
          {
            if ( 2 * *off_1421E7210 )
            {
              v559 = 1;
              if ( !(unsigned __int8)sub_141938160(v211) )
                byte_1421E0109 = 1;
            }
          }
          v220 = byte_1421E0108;
          byte_1421E0108 = 0;
          if ( v220 == 2 )
            goto LABEL_259;
          goto LABEL_260;
        }
      }
      if ( qword_1421E0128 )
      {
        v222 = sub_140D2AC70(&unk_1421E0130, &v519);
        v223 = qword_1421E0118;
        v224 = qword_1421E0110;
        v225 = _mm_cvtsi32_si128(v222 >> 57);
        v226 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v225, v225), 0), 68);
        v211 = v519.m128i_i64[1];
        v227 = v520;
        for ( k = nullptr; ; ++k )
        {
          v229 = v223 & v222;
          v230 = _mm_loadu_si128((const __m128i *)(v224 + v229));
          _R10 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v230, v226));
          if ( (_DWORD)_R10 )
            break;
LABEL_250:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v230, (__m128i)-1LL)) )
            goto LABEL_256;
          v222 = (unsigned __int64)k[1].m128i_u64 + v229;
        }
        v537 = v229;
        v542 = v223;
        v528 = k;
        while ( 1 )
        {
          v541 = _R10;
          __asm { tzcnt   r10d, r10d }
          if ( v227 == *(__m128i **)(v224 - 216 * (v223 & (v229 + _R10)) - 200) )
          {
            v232 = v224 - 216 * (v223 & (v229 + _R10));
            v233 = *(_QWORD *)(v232 - 208);
            v539 = v211;
            v555 = v227;
            v234 = sub_1418F4B70(v211, v233);
            v227 = v555;
            v211 = v539;
            if ( !v234 )
              break;
          }
          v235 = v541 - 1;
          LOWORD(v235) = v541 & (v541 - 1);
          _R10 = v235;
          v229 = v537;
          v223 = v542;
          k = v528;
          if ( ((unsigned __int16)v541 & (unsigned __int16)(v541 - 1)) == 0 )
            goto LABEL_250;
        }
        if ( *(_QWORD *)(v232 - 24) == v548 && *(_DWORD *)(v232 - 16) == 1 && *(_QWORD *)(v232 - 12) == v549 )
        {
          sub_14036A280(v472, v232 - 192);
          v236 = *(_QWORD *)&v472[8];
          v237 = *(_QWORD *)v472;
          v208 = *(void **)&v472[16];
          v518 = *(__m128i *)&v472[88];
          v517 = *(__m128i *)&v472[72];
          v516 = *(__m128i *)&v472[56];
          v515 = *(__m128i *)&v472[40];
          v514 = *(__m128i *)&v472[24];
          v238 = _mm_loadu_si128(&v473);
          v239 = _mm_loadu_si128(&v475);
          v487 = _mm_loadu_si128(&v476);
          v486 = v239;
          v485 = v474;
          v484 = v238;
          v559 = 1;
          sub_140028CC0(&byte_1421E0108, (unsigned int)v556);
          v209 = v236;
          goto LABEL_455;
        }
      }
LABEL_256:
      if ( !(_BYTE)v556 )
      {
        if ( 2 * *off_1421E7210 )
        {
          v559 = 1;
          if ( !(unsigned __int8)sub_141938160(v211) )
            byte_1421E0109 = 1;
        }
      }
      v240 = byte_1421E0108;
      byte_1421E0108 = 0;
      v212 = &v530;
      if ( v240 == 2 )
      {
LABEL_259:
        v559 = 1;
        WakeByAddressSingle(&byte_1421E0108);
      }
LABEL_260:
      *(_DWORD *)v472 = 0;
      *(_QWORD *)&v472[8] = 0;
      *(_DWORD *)&v472[16] = 7;
      *(_QWORD *)&v472[25] = 0;
      *(_QWORD *)&v472[20] = 0x100000000LL;
      v559 = 1;
      v241 = sub_141690E40(v472);
      v208 = v243;
      if ( (v241 & 1) != 0 )
        goto LABEL_454;
      nullsub_1(v242);
      v244 = sub_140001650(0x2000, 1);
      if ( !v244 )
      {
        v541 = (__int64)v208;
        sub_141938D2B(1, 0x2000);
      }
      v481[1] = 0;
      v482 = 0;
      v481[0].m128i_i64[0] = v244;
      v481[0].m128i_i64[1] = 0x2000;
      hObject = v208;
      v480.m128i_i64[0] = 0x400000;
      v480.m128i_i64[1] = 0x400000;
      *(_QWORD *)&v472[16] = -1;
      *(_QWORD *)&v472[40] = -1;
      *(_QWORD *)v472 = 0;
      *(_QWORD *)&v472[64] = -1;
      *(_QWORD *)&v472[88] = -1;
      v476.m128i_i32[2] = 0;
      v473.m128i_i64[1] = -1;
      v475.m128i_i64[0] = -1;
      v506 = 0;
      v507 = 1;
      v237 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_263:
          v508 = 0;
          v530.m128i_i64[0] = (__int64)&v480;
          v530.m128i_i64[1] = 262145;
          v531.m128i_i64[0] = 262145;
          LOBYTE(v245) = 10;
          v246 = sub_140BAF170(&v530, v245, &v506);
          v208 = v245;
          if ( (v246 & 1) != 0 )
            goto LABEL_449;
          if ( !v245 )
            goto LABEL_432;
          if ( v508 <= 0x40000 )
            break;
          if ( *(_BYTE *)(v507 + v508 - 1) != 10 )
          {
            LOBYTE(v245) = 10;
            if ( sub_140BAFDC0(&v480, v245) == 1 )
            {
              v208 = v245;
LABEL_449:
              if ( v506 )
                sub_140001660(v507, v506, 1);
              sub_14029DF00(v472);
              if ( v481[0].m128i_i64[1] )
                sub_140001660(v481[0].m128i_i64[0], v481[0].m128i_i64[1], 1);
              CloseHandle(hObject);
LABEL_454:
              v526 = _mm_loadu_si128(&v492);
              v302 = _mm_loadu_si128(&v489);
              v303 = _mm_loadu_si128(&v490);
              v525 = _mm_loadu_si128(&v491);
              v514 = v488;
              v515 = v302;
              v516 = v303;
              v517 = v525;
              v518 = v526;
              v209 = 2;
              v237 = 2;
LABEL_455:
              if ( v519.m128i_i64[0] )
              {
                v304 = v209;
                sub_140001660(v519.m128i_i64[1], v519.m128i_i64[0], 1);
                v209 = v304;
              }
LABEL_483:
              if ( v237 == 2 )
              {
LABEL_484:
                v488.m128i_i64[0] = v209;
                v488.m128i_i64[1] = (__int64)v208;
                v493 = v518;
                v323 = _mm_load_si128(&v514);
                v324 = _mm_load_si128(&v516);
                v492 = _mm_load_si128(&v517);
                v491 = v324;
                v490 = v515;
                v489 = v323;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  v456.m128i_i64[0] = (__int64)v440;
                  v456.m128i_i64[1] = (__int64)sub_140186EE0;
                  *(_QWORD *)v457 = &v488;
                  *(_QWORD *)&v457[8] = sub_14104A7D0;
                  *(_QWORD *)&v472[48] = 2;
                  *(_QWORD *)&v472[56] = aCodexmateLibCo_2;
                  *(_QWORD *)&v472[64] = 29;
                  *(_QWORD *)&v472[80] = &unk_1419E8128;
                  *(_QWORD *)&v472[88] = &v456;
                  *(_QWORD *)v472 = 0;
                  *(_QWORD *)&v472[8] = aCodexmateLibCo_2;
                  *(_OWORD *)&v472[16] = 0x1Du;
                  *(_QWORD *)&v472[32] = aSrcCoreSession_5;
                  *(_QWORD *)&v472[40] = 20;
                  *(_QWORD *)&v472[72] = 0x13B00000001LL;
                  sub_1414D53A0(&v538, v472);
                }
                sub_14029DA50(&v488);
              }
              else
              {
                v456.m128i_i64[0] = v237;
                v456.m128i_i64[1] = v209;
                *(_QWORD *)v457 = v208;
                v459 = v518;
                v458 = v517;
                *(__m128i *)&v457[40] = v516;
                *(__m128i *)&v457[24] = v515;
                *(__m128i *)&v457[8] = v514;
                v325 = _mm_load_si128(&v484);
                v326 = _mm_load_si128(&v486);
                v463 = _mm_load_si128(&v487);
                v462 = v326;
                v461 = v485;
                v460 = v325;
                v543 = 1;
                sub_1416AC440(v524, v540);
                sub_1418F44E0((__m128i *)v472, &v456, 0xA8u);
                v543 = 0;
                sub_1403AA0E0(&v488, &v464, v524, v472);
                if ( v488.m128i_i32[0] != 2 )
                  sub_14029DF00(&v488);
              }
              goto LABEL_214;
            }
          }
        }
        if ( v508 )
        {
          v247 = v507;
          if ( *(_BYTE *)(v507 + v508 - 1) != 10 && !v480.m128i_i64[1] )
          {
LABEL_432:
            v208 = *(void **)&v472[16];
            goto LABEL_433;
          }
        }
        else
        {
          if ( !v480.m128i_i64[1] )
            goto LABEL_432;
          v247 = v507;
        }
        v530.m128i_i64[0] = v247;
        v530.m128i_i64[1] = v508;
        v531 = 0;
        sub_14062F970(&v521, &v530);
        if ( (_BYTE)v521 != 0xFF )
          break;
        sub_14002F910((char *)&v521 + 8);
      }
      v248 = *(double *)&v521;
      v502[1] = _mm_loadu_si128(&v522);
      v502[0] = v521;
      v249 = sub_1416419F0(aType_4, 4, v502);
      if ( !v249 || *(_BYTE *)v249 != 3 )
        goto LABEL_346;
      v250 = *(_QWORD *)(v249 + 16);
      v251 = *(_QWORD *)(v249 + 24);
      if ( v251 != 13 )
      {
        if ( v251 == 12 && !(*(_QWORD *)v250 ^ 0x5F6E6F6973736573LL | *(unsigned int *)(v250 + 8) ^ 0x6174656DLL) )
        {
          if ( *(_QWORD *)&v472[64] == -1 )
          {
            v252 = sub_141642800(v502, aPayloadCwd, 12);
            v253 = -1;
            if ( v252 && *(_BYTE *)v252 == 3 )
            {
              v556 = *(const __m128i **)(v252 + 16);
              v206 = *(_QWORD *)(v252 + 24);
              sub_14072C410((unsigned int)&v530, v206, 0, 1, 1);
              v253 = v530.m128i_i64[1];
              if ( v530.m128i_i32[0] == 1 )
                sub_141938D2B(v530.m128i_i64[1], v531.m128i_i64[0]);
              v212 = (__m128i *)v531.m128i_i64[0];
              if ( v206 )
                sub_1418F44E0((__m128i *)v531.m128i_i64[0], v556, v206);
              else
                v206 = 0;
            }
            *(_QWORD *)&v472[64] = v253;
            *(_QWORD *)&v472[72] = v212;
            *(_QWORD *)&v472[80] = v206;
          }
          v86 = v237 == 0;
          v237 = 1;
          if ( v86 )
          {
            v256 = sub_141642800(v502, aPayloadTimesta, 18);
            if ( v256
              && *(_BYTE *)v256 == 3
              && (sub_14140B4F0(&v530, *(_QWORD *)(v256 + 16), *(_QWORD *)(v256 + 24)), v530.m128i_i32[0]) )
            {
              v257 = (v530.m128i_i32[0] >> 13) - 1;
              v258 = 0;
              if ( v530.m128i_i32[0] >> 13 <= 0 )
              {
                v259 = (1 - (v530.m128i_i32[0] >> 13)) / 0x190u + 1;
                v257 += 400 * v259;
                v258 = -146097 * v259;
              }
              v248 = (double)(v530.m128i_i32[1]
                            + 86400
                            * (((v257 / 100) >> 2)
                             + ((1461 * v257) >> 2)
                             + v258
                             + (((unsigned __int32)v530.m128i_i32[0] >> 4) & 0x1FF)
                             - v257 / 100
                             - 719163));
            }
            else
            {
              v237 = 0;
            }
            *(_QWORD *)v472 = v237;
            *(double *)&v472[8] = v248;
          }
          if ( *(_QWORD *)&v472[88] == -1 )
          {
            v260 = sub_141642800(v502, aPayloadSourceS, 54);
            v261 = -1;
            if ( v260 && *(_BYTE *)v260 == 3 )
            {
              v556 = *(const __m128i **)(v260 + 16);
              v206 = *(_QWORD *)(v260 + 24);
              sub_14072C410((unsigned int)&v530, v206, 0, 1, 1);
              v261 = v530.m128i_i64[1];
              if ( v530.m128i_i32[0] == 1 )
                sub_141938D2B(v530.m128i_i64[1], v531.m128i_i64[0]);
              v212 = (__m128i *)v531.m128i_i64[0];
              if ( v206 )
                sub_1418F44E0((__m128i *)v531.m128i_i64[0], v556, v206);
              else
                v206 = 0;
            }
            *(_QWORD *)&v472[88] = v261;
            *(_QWORD *)&v472[96] = v212;
            v473.m128i_i64[0] = v206;
          }
          v262 = sub_141642800(v502, aPayloadSourceS_0, 43);
          if ( !v262 )
            goto LABEL_326;
          if ( *(_BYTE *)v262 != 2 )
            goto LABEL_326;
          v263 = *(_QWORD *)(v262 + 8);
          if ( v263 == 2 )
            goto LABEL_326;
          if ( (_DWORD)v263 == 1 )
          {
            v264 = *(_QWORD *)(v262 + 16);
            goto LABEL_327;
          }
          v264 = *(_QWORD *)(v262 + 16);
          if ( v264 < 0 )
LABEL_326:
            LODWORD(v264) = v476.m128i_i32[2];
LABEL_327:
          v476.m128i_i32[2] = v264;
          if ( v473.m128i_i64[1] == -1 )
          {
            v265 = sub_141642800(v502, aPayloadAgentNi, 23);
            v266 = -1;
            if ( v265 && *(_BYTE *)v265 == 3 )
            {
              v556 = *(const __m128i **)(v265 + 16);
              v206 = *(_QWORD *)(v265 + 24);
              sub_14072C410((unsigned int)&v530, v206, 0, 1, 1);
              v266 = v530.m128i_i64[1];
              if ( v530.m128i_i32[0] == 1 )
                sub_141938D2B(v530.m128i_i64[1], v531.m128i_i64[0]);
              v212 = (__m128i *)v531.m128i_i64[0];
              if ( v206 )
                sub_1418F44E0((__m128i *)v531.m128i_i64[0], v556, v206);
              else
                v206 = 0;
            }
            v473.m128i_i64[1] = v266;
            *(_QWORD *)&v474 = v212;
            *((_QWORD *)&v474 + 1) = v206;
          }
          if ( v475.m128i_i64[0] == -1 )
          {
            v267 = sub_141642800(v502, aPayloadAgentRo, 19);
            v268 = -1;
            if ( v267 && *(_BYTE *)v267 == 3 )
            {
              v556 = *(const __m128i **)(v267 + 16);
              v206 = *(_QWORD *)(v267 + 24);
              sub_14072C410((unsigned int)&v530, v206, 0, 1, 1);
              v268 = v530.m128i_i64[1];
              if ( v530.m128i_i32[0] == 1 )
                sub_141938D2B(v530.m128i_i64[1], v531.m128i_i64[0]);
              v212 = (__m128i *)v531.m128i_i64[0];
              if ( v206 )
                sub_1418F44E0((__m128i *)v531.m128i_i64[0], v556, v206);
              else
                v206 = 0;
            }
            v475.m128i_i64[0] = v268;
            v475.m128i_i64[1] = (__int64)v212;
            v476.m128i_i64[0] = v206;
          }
          v212 = &v530;
        }
LABEL_346:
        if ( v237 )
        {
          v208 = *(void **)&v472[16];
          if ( *(_QWORD *)&v472[16] != -1 && *(_QWORD *)&v472[40] != -1 )
          {
            sub_14002F9D0(v502);
            v237 = 1;
LABEL_433:
            v539 = *(_QWORD *)&v472[8];
            sub_1418F44E0(&v488, (const __m128i *)&v472[24], 0x90u);
            if ( v506 )
              sub_140001660(v507, v506, 1);
            if ( v481[0].m128i_i64[1] )
              sub_140001660(v481[0].m128i_i64[0], v481[0].m128i_i64[1], 1);
            CloseHandle(hObject);
            v526 = v492;
            v525 = v491;
            *(__m128i *)&v524[32] = v490;
            *(__m128i *)&v524[16] = v489;
            *(__m128i *)v524 = v488;
            v463 = v496;
            v462 = v495;
            v461 = v494;
            v460 = v493;
            v459 = v492;
            v297 = _mm_load_si128((const __m128i *)v524);
            v298 = _mm_load_si128((const __m128i *)&v524[32]);
            v458 = _mm_load_si128(&v525);
            *(__m128i *)&v457[40] = v298;
            *(__m128i *)&v457[24] = v489;
            *(__m128i *)&v457[8] = v297;
            v456.m128i_i64[0] = v237;
            v456.m128i_i64[1] = v539;
            *(_QWORD *)v457 = v208;
            if ( dword_1421E0140 )
            {
              v558 = 1;
              sub_141911584(&byte_1421E0108);
            }
            LOBYTE(v296) = 1;
            if ( _InterlockedCompareExchange8(&byte_1421E0108, 1, 0) )
            {
              v558 = 1;
              sub_141937480(&byte_1421E0108);
            }
            if ( 2 * *off_1421E7210 )
            {
              v558 = 1;
              LODWORD(v555) = sub_141938160(v296);
              v305 = (int)v555;
              LOBYTE(v305) = (unsigned __int8)v555 ^ 1;
              LODWORD(v555) = v305;
              if ( byte_1421E0109 )
                goto LABEL_443;
            }
            else
            {
              LODWORD(v555) = 0;
              if ( byte_1421E0109 )
              {
LABEL_443:
                if ( !(_BYTE)v555 )
                {
                  if ( 2 * *off_1421E7210 )
                  {
                    v558 = 1;
                    if ( !(unsigned __int8)sub_141938160(v296) )
                      byte_1421E0109 = 1;
                  }
                }
                v299 = byte_1421E0108;
                byte_1421E0108 = 0;
                if ( v299 == 2 )
                {
                  v558 = 1;
                  WakeByAddressSingle(&byte_1421E0108);
                }
                v518 = v459;
                v517 = v458;
                v516 = *(__m128i *)&v457[40];
                v515 = *(__m128i *)&v457[24];
                v514 = *(__m128i *)&v457[8];
                v300 = _mm_loadu_si128(&v462);
                v301 = _mm_loadu_si128(&v463);
                v484 = _mm_loadu_si128(&v460);
                v485 = v461;
                v486 = v300;
                v487 = v301;
                if ( v519.m128i_i64[0] )
                  sub_140001660(v519.m128i_i64[1], v519.m128i_i64[0], 1);
LABEL_482:
                v209 = v539;
                goto LABEL_483;
              }
            }
            v541 = (__int64)v208;
            HIDWORD(_RAX) = HIDWORD(qword_1421E0128);
            if ( (unsigned __int64)qword_1421E0128 >= 0x1000 )
            {
              v556 = (const __m128i *)qword_1421E0128;
              v537 = v237;
              v307 = qword_1421E0110;
              v308 = (const __m128i *)(qword_1421E0110 + 16);
              _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)qword_1421E0110));
              v542 = qword_1421E0110;
              do
              {
                if ( !(_WORD)_R13D )
                {
                  do
                  {
                    v312 = _mm_load_si128(v308);
                    v307 -= 3456;
                    ++v308;
                    _R13D = _mm_movemask_epi8(v312) ^ 0xFFFF;
                  }
                  while ( !_R13D );
                }
                __asm { tzcnt   eax, r13d }
                v313 = -216 * _RAX;
                v314 = v307 + v313;
                v315 = *(_QWORD *)(v307 + v313 - 216);
                if ( v315 )
                {
                  v316 = v307 + v313;
                  sub_140001660(*(_QWORD *)(v314 - 208), v315, 1);
                  v314 = v316;
                }
                _R13D &= _R13D - 1;
                v310 = (const __m128i *)((char *)v556 - 1);
                HIDWORD(_RAX) = (unsigned __int64)sub_14029DF00(v314 - 192) >> 32;
                v556 = v310;
              }
              while ( v310 );
              v317 = qword_1421E0118;
              if ( qword_1421E0118 )
              {
                LOBYTE(v311) = -1;
                sub_1418F4C70(v542, v311, qword_1421E0118 + 17);
                v318 = ((v317 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v317 + 1) >> 3);
                if ( v317 < 8 )
                  v318 = v317;
              }
              else
              {
                v318 = 0;
              }
              v237 = v537;
              qword_1421E0128 = 0;
              qword_1421E0120 = v318;
            }
            *(_QWORD *)&v524[16] = v520;
            *(__m128i *)v524 = _mm_load_si128(&v519);
            v544 = 1;
            sub_14036A280(&v488, &v456);
            v477 = v548;
            v478 = 1;
            v479 = v549;
            sub_1418F44E0((__m128i *)v472, &v488, 0xA8u);
            v544 = 0;
            sub_1403AA460(&v488, &qword_1421E0110, v524, v472);
            if ( v488.m128i_i32[0] != 2 )
              sub_14029DF00(&v488);
            v208 = (void *)v541;
            if ( !(_BYTE)v555 )
            {
              if ( 2 * *off_1421E7210 )
              {
                v558 = 0;
                if ( !(unsigned __int8)sub_141938160(v319) )
                  byte_1421E0109 = 1;
              }
            }
            v320 = byte_1421E0108;
            byte_1421E0108 = 0;
            if ( v320 == 2 )
            {
              v558 = 0;
              WakeByAddressSingle(&byte_1421E0108);
            }
            v518 = v459;
            v517 = v458;
            v516 = *(__m128i *)&v457[40];
            v515 = *(__m128i *)&v457[24];
            v514 = *(__m128i *)&v457[8];
            v321 = _mm_loadu_si128(&v462);
            v322 = _mm_loadu_si128(&v463);
            v484 = _mm_loadu_si128(&v460);
            v485 = v461;
            v486 = v321;
            v487 = v322;
            goto LABEL_482;
          }
        }
        sub_14002F9D0(v502);
        goto LABEL_263;
      }
      if ( *(_QWORD *)v250 ^ 0x65736E6F70736572LL | *(_QWORD *)(v250 + 5) ^ 0x6D6574695F65736ELL )
        goto LABEL_346;
      v537 = v237;
      v556 = *(const __m128i **)&v472[40];
      v539 = *(_QWORD *)&v472[16];
      if ( *(_QWORD *)&v472[16] != -1 && v556 != (const __m128i *)-1LL )
        goto LABEL_291;
      v254 = (void *)sub_1416419F0(aPayload, 7, v502);
      if ( !v254 )
        v254 = &unk_1419E7C48;
      v255 = sub_1416419F0(aType_4, 4, v254);
      if ( v255
        && *(_BYTE *)v255 == 3
        && *(_QWORD *)(v255 + 24) == 7
        && !(**(_DWORD **)(v255 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v255 + 16) + 3LL) ^ 0x65676173) )
      {
        v269 = sub_1416419F0(
                 "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tok"
                 "ensstreamdoubaoreasoning_effortnone",
                 7,
                 v254);
        if ( v269 && *(_BYTE *)v269 == 4 )
        {
          sub_1403918C0(&v530, *(_QWORD *)(v269 + 16), *(_QWORD *)(v269 + 24));
          v467 = v530;
          v270 = v531.m128i_i64[0];
          v468 = v531.m128i_i64[0];
          v542 = v530.m128i_i64[1];
        }
        else
        {
          v467.m128i_i64[0] = 0;
          v467.m128i_i64[1] = 8;
          v468 = 0;
          v542 = 8;
          v270 = 0;
        }
        *(_QWORD *)&v521 = 0;
        *((_QWORD *)&v521 + 1) = 8;
        v522.m128i_i64[0] = 0;
        v271 = v542;
        v272 = v542 + 32 * v270;
        while ( v271 != v272 )
        {
          v275 = sub_1416419F0(aText_3, 4, v271);
          v271 += 32;
          if ( v275 && *(_BYTE *)v275 == 3 )
          {
            v276 = *(const __m128i **)(v275 + 16);
            v206 = *(_QWORD *)(v275 + 24);
            sub_14072C410((unsigned int)&v530, v206, 0, 1, 1);
            v541 = v530.m128i_i64[1];
            if ( v530.m128i_i32[0] == 1 )
              sub_141938D2B(v541, v531.m128i_i64[0]);
            v555 = (__m128i *)v531.m128i_i64[0];
            if ( v206 )
              sub_1418F44E0(v555, v276, v206);
            v277 = v522.m128i_i64[0];
            if ( v522.m128i_i64[0] == (_QWORD)v521 )
              sub_14190FDC0(&v521);
            v273 = *((_QWORD *)&v521 + 1);
            v274 = 3 * v277;
            *(_QWORD *)(*((_QWORD *)&v521 + 1) + 8 * v274) = v541;
            *(_QWORD *)(v273 + 8 * v274 + 8) = v555;
            *(_QWORD *)(v273 + 8 * v274 + 16) = v206;
            v522.m128i_i64[0] = v277 + 1;
          }
        }
        v530.m128i_i64[0] = *((_QWORD *)&v521 + 1);
        v530.m128i_i64[1] = *((_QWORD *)&v521 + 1);
        v531.m128i_i64[0] = v521;
        v531.m128i_i64[1] = *((_QWORD *)&v521 + 1) + 24 * v522.m128i_i64[0];
        if ( v522.m128i_i64[0] )
        {
          v530.m128i_i64[1] = *((_QWORD *)&v521 + 1) + 24LL;
          v541 = **((_QWORD **)&v521 + 1);
          v513 = *(_QWORD *)(*((_QWORD *)&v521 + 1) + 8LL);
          v449 = *(_QWORD *)(*((_QWORD *)&v521 + 1) + 16LL);
        }
        else
        {
          v541 = -1;
        }
        sub_1403FB000(&v467);
        if ( v467.m128i_i64[0] )
          sub_140001660(v542, 32 * v467.m128i_i64[0], 8);
        sub_140383620(&v530);
        if ( v541 != -1 )
        {
          v278 = sub_141642800(v502, aPayloadRole, 13);
          v279 = 1;
          if ( v278 && *(_BYTE *)v278 == 3 )
          {
            v279 = *(_QWORD *)(v278 + 16);
            v280 = *(_QWORD *)(v278 + 24) == 4;
          }
          else
          {
            v280 = 0;
          }
          v281 = sub_140E91160(v513, v449);
          v206 = v282;
          if ( !v282 )
            goto LABEL_407;
          v283 = (const __m128i *)v281;
          sub_14072C410((unsigned int)&v530, v282, 0, 1, 1);
          v542 = v530.m128i_i64[1];
          if ( v530.m128i_i32[0] == 1 )
            sub_141938D2B(v542, v531.m128i_i64[0]);
          v555 = (__m128i *)v531.m128i_i64[0];
          sub_1418F44E0((__m128i *)v531.m128i_i64[0], v283, v206);
          if ( v206 < 8 )
          {
            v284 = 0;
            goto LABEL_387;
          }
          if ( v206 < 0x20 )
          {
            v284 = 0;
LABEL_384:
            v291 = v284;
            v284 = v206 & 0xFFFFFFFFFFFFFFF8uLL;
            do
            {
              v292 = _mm_loadl_epi64((__m128i *)((char *)v555 + v291));
              v293 = _mm_add_epi8(v292, v184);
              *(__int64 *)((char *)v555->m128i_i64 + v291) = _mm_or_si128(
                                                               _mm_andnot_si128(
                                                                 _mm_cmpeq_epi8(_mm_max_epu8(v293, v185), v293),
                                                                 v186),
                                                               v292).m128i_u64[0];
              v291 += 8LL;
            }
            while ( v284 != v291 );
            goto LABEL_388;
          }
          v284 = v206 & 0xFFFFFFFFFFFFFFE0uLL;
          v285 = 0;
          do
          {
            v286 = v555;
            v287 = _mm_loadu_si128(&v555[v285 / 0x10]);
            v288 = _mm_loadu_si128(&v555[v285 / 0x10 + 1]);
            v289 = _mm_add_epi8(v287, v187);
            v290 = _mm_add_epi8(v288, v187);
            v555[v285 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v289, v188), v289), v189), v287);
            v286[v285 / 0x10 + 1] = _mm_or_si128(
                                      _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v290, v188), v290), v189),
                                      v288);
            v285 += 32LL;
          }
          while ( v284 != v285 );
          if ( v206 != v284 )
          {
            if ( (v206 & 0x18) != 0 )
              goto LABEL_384;
            do
            {
LABEL_387:
              v555->m128i_i8[v284] |= 32 * ((unsigned __int8)(v555->m128i_i8[v284] - 65) < 0x1Au);
              ++v284;
LABEL_388:
              ;
            }
            while ( v206 != v284 );
          }
          if ( v206 >= 0x18 )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadl_epi64(v555 + 1), (__m128i)xmmword_1419E4590),
                     _mm_cmpeq_epi8(_mm_loadu_si128(v555), (__m128i)xmmword_1419E45A0))) == 0xFFFF )
              goto LABEL_406;
          }
          else if ( v206 < 0xE )
          {
            if ( v206 != 13 )
            {
              if ( v206 < 0xB )
                goto LABEL_405;
              goto LABEL_404;
            }
LABEL_398:
            if ( !(v555->m128i_i64[0] ^ 0x6E6F632D7070613CLL
                 | *(__int64 *)((char *)v555->m128i_i64 + 5) ^ 0x3E747865746E6F63LL) )
              goto LABEL_406;
            goto LABEL_404;
          }
          if ( !(v555->m128i_i64[0] ^ 0x63757274736E693CLL
               | *(__int64 *)((char *)v555->m128i_i64 + 6) ^ 0x3E736E6F69746375LL) )
            goto LABEL_406;
          if ( v206 >= 0x1A )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(
                       _mm_loadu_si128((const __m128i *)((char *)&v555->m128i_u64[1] + 2)),
                       (__m128i)xmmword_1419E45B0),
                     _mm_cmpeq_epi8(_mm_loadu_si128(v555), (__m128i)xmmword_1419E45C0))) == 0xFFFF )
              goto LABEL_406;
          }
          else if ( v206 < 0x15 )
          {
            goto LABEL_398;
          }
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v555->m128i_u8[5]), (__m128i)xmmword_1419E45D0),
                   _mm_cmpeq_epi8(_mm_loadu_si128(v555), (__m128i)xmmword_1419E45E0))) == 0xFFFF
            || !(v555->m128i_i64[0] ^ 0x6E6F632D7070613CLL
               | *(__int64 *)((char *)v555->m128i_i64 + 5) ^ 0x3E747865746E6F63LL)
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v555->m128i_u8[5]), (__m128i)xmmword_1419E45F0),
                   _mm_cmpeq_epi8(_mm_loadu_si128(v555), (__m128i)xmmword_1419E4600))) == 0xFFFF )
          {
LABEL_406:
            sub_140001660(v555, v542, 1);
LABEL_407:
            if ( v541 )
              sub_140001660(v513, v541, 1);
LABEL_291:
            sub_14002F9D0(v502);
            v212 = &v530;
            v237 = v537;
            goto LABEL_263;
          }
LABEL_404:
          if ( !(v555->m128i_i64[0] ^ 0x73746E6567612023LL
               | *(__int64 *)((char *)v555->m128i_i64 + 3) ^ 0x646D2E73746E6567LL) )
            goto LABEL_406;
LABEL_405:
          if ( (unsigned __int8)sub_140371F30(aRoleCommunicat, 31, v555, v206) )
            goto LABEL_406;
          LOBYTE(v528) = sub_140371F30(aFilesystemSand, 29, v555, v206);
          sub_140001660(v555, v542, 1);
          if ( (_BYTE)v528 )
            goto LABEL_407;
          v530.m128i_i64[0] = 0;
          v530.m128i_i64[1] = v206;
          v531.m128i_i64[0] = (__int64)v283;
          v531.m128i_i64[1] = v206;
          v532 = v283;
          v533 = &v283->m128i_i8[v206];
          v534 = 0;
          v535 = 1;
          sub_1403E1480(&v521, &v530);
          v555 = *((__m128i **)&v521 + 1);
          sub_140D1F3D0((unsigned int)&v530, DWORD2(v521), v522.m128i_i32[0], (unsigned int)asc_1419E825D, 1);
          v542 = v530.m128i_i64[1];
          v528 = (__m128i *)v530.m128i_i64[0];
          v294 = v531.m128i_i64[0];
          if ( (_QWORD)v521 )
            sub_140001660(v555, 16 * v521, 8);
          if ( v294 )
          {
            if ( v294 >= 0x20 )
              v295 = sub_1416B3400(v542, v294);
            else
              v295 = sub_1416B3A20(v542, v294);
            if ( v295 >= 0xFA1 )
            {
              sub_1402C8BE0(&v530, v542, v294, 4000);
              v523 = v530.m128i_i64[1];
              v555 = (__m128i *)v530.m128i_i64[0];
              v505 = v531.m128i_i64[0];
              goto LABEL_419;
            }
            v523 = v542;
            v505 = v294;
            v555 = v528;
          }
          else
          {
            v555 = (__m128i *)-1LL;
LABEL_419:
            if ( v528 )
              sub_140001660(v542, v528, 1);
          }
          if ( v555 == (__m128i *)-1LL )
            goto LABEL_407;
          if ( v280 && v539 == -1 && *(_DWORD *)v279 == 1919251317 )
          {
            sub_1402C8BE0(&v530, v523, v505, 88);
            *(_QWORD *)&v472[32] = v531.m128i_i64[0];
            *(__m128i *)&v472[16] = _mm_loadu_si128(&v530);
          }
          if ( v556 == (const __m128i *)-1LL )
          {
            sub_1402C8BE0(&v530, v523, v505, 160);
            *(_QWORD *)&v472[56] = v531.m128i_i64[0];
            *(__m128i *)&v472[40] = _mm_loadu_si128(&v530);
          }
          if ( v555 )
            sub_140001660(v523, v555, 1);
          if ( v541 )
            sub_140001660(v513, v541, 1);
        }
      }
      v212 = &v530;
      v237 = v537;
      goto LABEL_346;
    }
    break;
  }
  v327 = _mm_load_si128((const __m128i *)v469.m128i_i64[0]);
  *(_QWORD *)v472 = v469.m128i_i64[0];
  *(_QWORD *)&v472[8] = v469.m128i_i64[0] + 16;
  *(_QWORD *)&v472[16] = v469.m128i_i64[0] + v469.m128i_i64[1] + 1;
  *(_WORD *)&v472[24] = ~(unsigned __int16)_mm_movemask_epi8(v327);
  *(_QWORD *)&v472[32] = *((_QWORD *)&v470 + 1);
  *(_QWORD *)&v472[40] = &v503;
  *(_QWORD *)&v472[48] = &v464;
  *(_QWORD *)&v472[56] = &v453;
  sub_140BE2630(&v456, v529, v472);
  *(_QWORD *)v524 = 0;
  *(_QWORD *)&v524[8] = 8;
  *(_QWORD *)&v524[16] = 0;
  v329 = v469.m128i_i64[0];
  v556 = *((const __m128i **)&v470 + 1);
  v330 = (const __m128i *)(v469.m128i_i64[0] + 16);
  _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v469.m128i_i64[0]));
  v549 = v442.m128i_i64[0];
  v539 = v443.m128i_i64[0];
LABEL_497:
  while ( 2 )
  {
    if ( v556 )
    {
      if ( !(_WORD)_R12D )
      {
        do
        {
          v332 = _mm_load_si128(v330);
          v329 -= 1280;
          ++v330;
          _R12D = _mm_movemask_epi8(v332) ^ 0xFFFF;
        }
        while ( !_R12D );
      }
      __asm { tzcnt   ecx, r12d }
      _R12D &= _R12D - 1;
      v333 = -80LL * _RCX;
      v556 = (const __m128i *)((char *)v556 - 1);
      v334 = v503;
      _RCX = *(_QWORD *)(v329 - 80 * _RCX - 72);
      v554 = _RCX;
      v540 = v333;
      v335 = *(_QWORD *)(v329 + v333 - 64);
      if ( v503 )
      {
        if ( !v503[3] )
          continue;
        v336 = sub_140D2CC10(v503 + 4, v554, *(_QWORD *)(v329 + v333 - 64));
        _RCX = v336 >> 57;
        v337 = *v334;
        v338 = v334[1];
        v339 = _mm_cvtsi32_si128(v336 >> 57);
        v340 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v339, v339), 0), 68);
        for ( m = nullptr; ; m += 2 )
        {
          v342 = (__m128i *)(v338 & v336);
          v343 = _mm_loadu_si128((__m128i *)((char *)v342 + v337));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v343, v340));
          if ( _R15D )
            break;
LABEL_508:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v343, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_497;
          v336 = (unsigned __int64)v342[1].m128i_u64 + (_QWORD)m;
        }
        v548 = (__int64)v342;
        v529 = m;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r15d }
          _RCX = -(__int64)(v338 & ((unsigned __int64)v342->m128i_u64 + _RCX));
          if ( v335 == *(_QWORD *)(v337 + 24 * _RCX - 8)
            && !(unsigned int)sub_1418F4B70(v554, *(_QWORD *)(v337 + 24 * _RCX - 16)) )
          {
            break;
          }
          v345 = _R15D - 1;
          LOWORD(v345) = _R15D & (_R15D - 1);
          v86 = (_WORD)v345 == 0;
          _R15D = v345;
          v342 = (__m128i *)v548;
          m = v529;
          if ( v86 )
            goto LABEL_508;
        }
      }
      if ( v465.m128i_i64[1] )
      {
        v346 = sub_140D2CC10(v466, v554, v335);
        v347 = v464.m128i_i64[1];
        v348 = v464.m128i_i64[0];
        v349 = _mm_cvtsi32_si128(v346 >> 57);
        v350 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v349, v349), 0), 68);
        for ( n = 0; ; n += 16LL )
        {
          v352 = v347 & v346;
          v353 = _mm_loadu_si128((const __m128i *)(v348 + v352));
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v353, v350));
          if ( (_DWORD)_RAX )
            break;
LABEL_517:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v353, (__m128i)-1LL)) )
            goto LABEL_519;
          v346 = n + v352 + 16;
        }
        v529 = (_QWORD *)v347;
        v536 = n;
        while ( 1 )
        {
          v548 = _RAX;
          __asm { tzcnt   eax, eax }
          v355 = v335;
          if ( v335 == *(_QWORD *)(v348 - 192 * (v347 & (v352 + _RAX)) - 176) )
          {
            v356 = v348 - 192 * (v347 & (v352 + _RAX));
            v357 = v348;
            v358 = sub_1418F4B70(v554, *(_QWORD *)(v356 - 184));
            v348 = v357;
            if ( !v358 )
              break;
          }
          _RAX = (unsigned int)(v548 - 1);
          LOWORD(_RAX) = v548 & (v548 - 1);
          v335 = v355;
          v347 = (__int64)v529;
          n = v536;
          if ( !(_WORD)_RAX )
            goto LABEL_517;
        }
        sub_14036A280(v472, v356 - 168);
        sub_1418F44E0(&v488, (const __m128i *)v472, 0xA8u);
      }
      else
      {
LABEL_519:
        v489.m128i_i64[0] = -1;
        v490.m128i_i64[1] = -1;
        v488.m128i_i64[0] = 0;
        v492.m128i_i64[0] = -1;
        v493.m128i_i64[1] = -1;
        v497 = 0;
        v495.m128i_i64[0] = -1;
        v496.m128i_i64[1] = -1;
      }
      v359 = *(const __m128i **)(v329 + v540 - 72);
      v529 = (_QWORD *)(v329 + v540);
      v360 = *(__m128i **)(v329 + v540 - 64);
      v554 = (__int64)v359;
      v548 = (__int64)v360;
      if ( v454.m128i_i64[1] )
      {
        v361 = sub_140D2CC10(&v455, v359, v360);
        v360 = (__m128i *)v548;
        v359 = (const __m128i *)v554;
        _RCX = v361 >> 57;
        v363 = v453;
        v364 = _mm_cvtsi32_si128(v361 >> 57);
        v365 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v364, v364), 0), 68);
        for ( ii = nullptr; ; ++ii )
        {
          v367 = v363.m128i_i64[1] & v361;
          v368 = _mm_loadu_si128((const __m128i *)(v363.m128i_i64[0] + v367));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v368, v365));
          if ( _R15D )
            break;
LABEL_528:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v368, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            v370 = 0;
            goto LABEL_534;
          }
          v361 = (unsigned __int64)ii[1].m128i_u64 + v367;
        }
        v536 = v367;
        v555 = ii;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r15d }
          _RCX = -(__int64)(v363.m128i_i64[1] & (v367 + _RCX));
          if ( v360 == *(__m128i **)(v363.m128i_i64[0] + 416 * _RCX - 400) )
          {
            v370 = v363.m128i_i64[0] + 416 * _RCX;
            v371 = sub_1418F4B70(v359, *(_QWORD *)(v370 - 408));
            v360 = (__m128i *)v548;
            v359 = (const __m128i *)v554;
            if ( !v371 )
              break;
          }
          v372 = _R15D - 1;
          LOWORD(v372) = _R15D & (_R15D - 1);
          v86 = (_WORD)v372 == 0;
          _R15D = v372;
          v367 = v536;
          ii = v555;
          if ( v86 )
            goto LABEL_528;
        }
LABEL_534:
        v373 = v370 - 392;
        if ( !v370 )
          v373 = 0;
        if ( v539 )
        {
LABEL_537:
          v375 = sub_140D2CC10(&v443.m128i_u64[1], v359, v360);
          v360 = (__m128i *)v548;
          v359 = (const __m128i *)v554;
          v376 = _mm_cvtsi32_si128(v375 >> 57);
          v377 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v376, v376), 0), 68);
          for ( jj = 0; ; jj += 16LL )
          {
            v379 = v549 & v375;
            HIDWORD(_RCX) = HIDWORD(v527);
            v381 = _mm_loadu_si128((const __m128i *)(v527 + v379));
            _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v381, v377));
            if ( _EDI )
              break;
LABEL_543:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v381, (__m128i)-1LL)) )
            {
              v384 = 0;
              goto LABEL_546;
            }
            v375 = jj + v379 + 16;
          }
          v536 = jj;
          while ( 1 )
          {
            __asm { tzcnt   ecx, edi }
            v383 = v379;
            _RCX = -(__int64)(v549 & (v379 + _RCX));
            if ( v360 == *(__m128i **)(v527 + 56 * _RCX - 40) )
            {
              v384 = v527 + 56 * _RCX;
              v385 = sub_1418F4B70(v359, *(_QWORD *)(v384 - 48));
              v360 = (__m128i *)v548;
              v359 = (const __m128i *)v554;
              if ( !v385 )
                break;
            }
            v386 = _EDI - 1;
            LOWORD(v386) = _EDI & (_EDI - 1);
            v86 = (_WORD)v386 == 0;
            _EDI = v386;
            v379 = v383;
            jj = v536;
            if ( v86 )
              goto LABEL_543;
          }
LABEL_546:
          v374 = v384 - 32;
          if ( !v384 )
            v374 = 0;
          if ( v373 )
          {
LABEL_549:
            if ( *(_QWORD *)(v373 + 160) == -1 && *(_QWORD *)(v373 + 56) == 6 )
            {
              v387 = 0;
              if ( v512 != -1
                && !(**(_DWORD **)(v373 + 48) ^ 0x6F637376 | *(unsigned __int16 *)(*(_QWORD *)(v373 + 48) + 4LL)
                                                           ^ 0x6564) )
              {
                v388 = v492.m128i_i64[1];
                v389 = v493.m128i_i64[0];
                if ( *(_QWORD *)(v373 + 64) == -1 )
                {
                  if ( v492.m128i_i64[0] == -1 )
                  {
                    v389 = 0;
                    v388 = 1;
                  }
                }
                else if ( v492.m128i_i64[0] == -1 )
                {
                  v388 = *(_QWORD *)(v373 + 72);
                  v389 = *(_QWORD *)(v373 + 80);
                }
                v387 = sub_141681D40(v388, v389, v504, v448);
                v359 = (const __m128i *)*(v529 - 9);
                v360 = (__m128i *)*(v529 - 8);
              }
              goto LABEL_557;
            }
          }
LABEL_556:
          v387 = 0;
LABEL_557:
          sub_1402CF8D0(
            (__int64)v472,
            v359,
            (signed __int64)v360,
            (const __m128i *)(v329 + v540 - 56),
            v373,
            v374,
            (__int64)&v488,
            v387,
            (__int64 *)&v445,
            v456.m128i_i64);
          v390 = *(_QWORD *)&v524[16];
          if ( *(_QWORD *)&v524[16] == *(_QWORD *)v524 )
            sub_14190FAB0(v524);
          sub_1418F44E0((__m128i *)(*(_QWORD *)&v524[8] + 536 * v390), (const __m128i *)v472, 0x218u);
          *(_QWORD *)&v524[16] = v390 + 1;
          sub_14029DF00(&v488);
          continue;
        }
      }
      else
      {
        v373 = 0;
        if ( v539 )
          goto LABEL_537;
      }
      v374 = 0;
      if ( v373 )
        goto LABEL_549;
      goto LABEL_556;
    }
    break;
  }
  v391 = *(_QWORD *)&v524[8];
  *(_QWORD *)v472 = &v538;
  if ( *(_QWORD *)&v524[16] >= 2u )
  {
    if ( *(_QWORD *)&v524[16] >= 0x15u )
    {
      sub_14065BDC0(*(_QWORD *)&v524[8], *(_QWORD *)&v524[16], v472);
    }
    else
    {
      v436 = 536LL * *(_QWORD *)&v524[16];
      v437 = 536;
      do
      {
        sub_140DF9380(v391, v391 + v437);
        v437 += 536;
      }
      while ( v436 != v437 );
    }
  }
  *(_QWORD *)&v472[16] = *(_QWORD *)&v524[16];
  *(__m128i *)v472 = _mm_loadu_si128((const __m128i *)v524);
  *(_QWORD *)&v472[40] = v510;
  *(__m128i *)&v472[24] = _mm_loadu_si128(&v509);
  v392 = v511;
  *(_OWORD *)(v511 + 8) = *(_OWORD *)v472;
  *(_OWORD *)(v392 + 40) = *(_OWORD *)&v472[32];
  *(_OWORD *)(v392 + 24) = *(_OWORD *)&v472[16];
  *(_QWORD *)v392 = -1;
  sub_14036FF00(&v456);
  HIDWORD(_RAX) = (unsigned __int64)sub_14029A740(&v464) >> 32;
  v394 = v469.m128i_i64[1];
  if ( v469.m128i_i64[1] )
  {
    v395 = *((_QWORD *)&v470 + 1);
    if ( *((_QWORD *)&v470 + 1) )
    {
      v396 = v469.m128i_i64[0];
      v397 = (const __m128i *)(v469.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v469.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v399 = _mm_load_si128(v397);
            v396 -= 1280;
            ++v397;
            _R15D = _mm_movemask_epi8(v399) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v400 = v396 - 80 * _RAX;
        v401 = *(_QWORD *)(v400 - 80);
        if ( v401 )
          sub_140001660(*(_QWORD *)(v400 - 72), v401, 1);
        v402 = *(_QWORD *)(v400 - 40);
        if ( v402 != -1 && v402 )
          sub_140001660(*(_QWORD *)(v400 - 32), v402, 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v395;
      }
      while ( v395 );
    }
    v403 = 80 * v394;
    v404 = 81 * v394 + 97;
    if ( v404 )
      sub_140001660(v469.m128i_i64[0] - v403 - 80, v404, 16);
  }
  if ( (unsigned __int64)(v512 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v504, v512, 1);
  HIDWORD(_RAX) = (unsigned __int64)sub_14029A620(&v441) >> 32;
  v407 = v446;
  if ( v446 )
  {
    v408 = v447;
    if ( v447 )
    {
      v409 = v445;
      v410 = v445 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v445));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v412 = _mm_load_si128(v410);
            v409 -= 48;
            ++v410;
            _R15D = _mm_movemask_epi8(v412) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v413 = &v409[-3 * _RAX];
        v414 = v413[-3].m128i_i64[0];
        if ( v414 )
          sub_140001660(v413[-3].m128i_i64[1], v414, 1);
        v406 = v413[-2].m128i_i64[1];
        if ( v406 != -1 && v406 )
          sub_140001660(v413[-1].m128i_i64[0], v406, 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v408;
      }
      while ( v408 );
    }
    v415 = 48LL * (_QWORD)v407;
    v416 = 49LL * (_QWORD)v407 + 65;
    if ( v416 )
      sub_140001660(&v445[v415 / 0xFFFFFFFFFFFFFFF0uLL - 3], v416, 16);
  }
  result = sub_140298940(&v453, v406);
  v109 = v498;
  if ( v498 )
  {
    v107 = v499;
    v108 = 1;
    return sub_140001660(v107, v109, v108);
  }
  return result;
}
