// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14102fe90 | name sub_14102FE90
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14102FE90(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  const __m128i *v8; // rbx
  const __m128i *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  const __m128i *v13; // rax
  const __m128i *v14; // rdx
  const __m128i *v15; // r14
  void *v16; // rcx
  __int64 v17; // r15
  const __m128i *v18; // rbx
  signed __int64 v19; // rdx
  const __m128i *v20; // r12
  bool v21; // al
  signed __int64 v22; // rdi
  __int64 v23; // r13
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i si128; // xmm2
  char v27; // di
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i *v36; // rax
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  const __m128i *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __m128i *v60; // rax
  __int64 v61; // rcx
  __int32 v62; // eax
  char v63; // bl
  __int64 v64; // r12
  __m128i *v65; // rax
  const __m128i *v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // edx
  __int64 v71; // rax
  const __m128i *v72; // rbx
  __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 v81; // r14
  const __m128i *v82; // rbx
  __m128i *v83; // rax
  const __m128i *v84; // rdx
  const __m128i *v85; // r8
  __int64 v86; // r15
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // r13
  const __m128i *v92; // rbx
  __m128i *v93; // rax
  const __m128i *v94; // rdx
  const __m128i *v95; // r8
  __int64 v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // r12
  const __m128i *v102; // rbx
  __m128i *v103; // rax
  const __m128i *v104; // rdx
  const __m128i *v105; // rax
  __int64 v106; // r15
  __int64 v107; // r13
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned __int64 v113; // r14
  const __m128i *v114; // rbx
  __m128i *v115; // rax
  const __m128i *v116; // rdx
  signed __int64 v117; // r14
  __int64 v118; // rcx
  __int64 v119; // r13
  __int64 v120; // rbx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r15
  __int64 v124; // rcx
  __int64 v125; // r12
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r15
  __int64 v132; // r12
  __m128i *v133; // rax
  __int64 v134; // rcx
  unsigned __int64 v135; // rbx
  __m128i *v136; // rax
  PVOID v137; // rbx
  const __m128i *v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r13
  const __m128i *v142; // r13
  __int64 v143; // rcx
  unsigned __int64 v144; // r12
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rcx
  __int64 v151; // rdx
  __m128i v152; // xmm0
  __m128i v153; // xmm1
  const __m128i *v154; // rbx
  unsigned __int64 v155; // r13
  const __m128i *v156; // rdx
  __int64 v157; // r15
  const __m128i *v158; // r12
  const __m128i *v159; // rax
  const __m128i *v160; // r14
  __int64 v161; // r13
  const __m128i *v162; // rbx
  const __m128i *v163; // r15
  __int64 *v164; // rcx
  _QWORD *v165; // rcx
  __int64 v166; // r8
  const __m128i *v167; // rax
  __int64 *v168; // rcx
  __int64 v169; // rdx
  unsigned __int64 v170; // r15
  __int64 v171; // rcx
  __int64 v172; // rbx
  __int64 v173; // rcx
  __int64 v174; // rbx
  unsigned __int64 v175; // r13
  __m128i *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rbx
  unsigned __int64 v179; // r13
  unsigned __int64 i; // r15
  int v181; // eax
  __int64 v182; // rcx
  __int64 v183; // rcx
  int v184; // r13d
  int v185; // eax
  unsigned __int64 v186; // r9
  char v187; // r8
  unsigned int *v188; // rdx
  unsigned __int64 v189; // rcx
  unsigned int *v190; // rax
  char v191; // r8
  __int64 v192; // rcx
  unsigned int v193; // r8d
  char v194; // al
  int v195; // eax
  unsigned __int64 v196; // rbx
  unsigned __int64 v197; // rdi
  unsigned __int64 v198; // r15
  __int64 v199; // rbx
  unsigned __int64 v200; // r8
  unsigned __int64 v201; // r13
  char *v202; // rbx
  unsigned __int64 v203; // r14
  __int64 v205; // r12
  __int64 v206; // r13
  const __m128i *v207; // rbx
  __m128i v209; // xmm0
  __int64 v210; // rax
  __int64 v211; // rdx
  unsigned __int64 v212; // rax
  __int64 v213; // rbx
  unsigned __int64 v214; // r12
  __int64 v215; // rdx
  __int64 v216; // rax
  bool v217; // cf
  __int64 v218; // rbx
  __m128i *v219; // rax
  __int64 v220; // r15
  unsigned __int64 v221; // rcx
  unsigned __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  unsigned __int128 v225; // kr10_16
  signed __int64 v226; // r13
  const __m128i *v227; // rbx
  __int64 v228; // rax
  __int64 v229; // r12
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // rcx
  __int64 v234; // r14
  char v235; // r15
  __int64 v236; // rcx
  unsigned __int64 v237; // rbx
  __m128i *v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __m128i v242; // xmm6
  __int64 v243; // rbx
  int v244; // edx
  __int64 v245; // rax
  __int64 v246; // r14
  __int128 v247; // kr50_16
  char v248; // dl
  __m128i v249; // xmm0
  __m128i v250; // xmm1
  __m128i v251; // xmm2
  __int64 v252; // rcx
  __m128i v253; // xmm1
  __m128i v254; // xmm2
  __m128i v255; // xmm3
  char v256; // bl
  __int64 v257; // rcx
  void *v258; // rax
  void *v259; // r14
  __int64 v260; // rcx
  __m128i *v261; // rax
  __m128i v262; // xmm0
  __m128i v263; // xmm1
  __m128i v264; // xmm2
  void *v265; // rax
  void *v266; // r14
  __int64 v267; // rcx
  __m128i *v268; // rax
  __m128i v269; // kr70_16
  __int64 v270; // rax
  unsigned __int64 v271; // rbx
  __m128i *v272; // r14
  __int64 v273; // rdx
  __m128i *v274; // rcx
  __int64 v275; // r8
  __m128i *v276; // rbx
  __int32 v277; // edx
  __int64 v278; // rax
  __m128i v279; // xmm0
  __m128i v280; // xmm1
  __m128i v281; // xmm2
  PVOID v282; // rcx
  char v283; // al
  __int64 v284; // rdi
  __int64 v285; // rbx
  const __m128i *v286; // r14
  __int64 v287; // rcx
  PVOID v288; // rcx
  char v289; // al
  __m128i v290; // xmm1
  __m128i v291; // xmm2
  __m128i v292; // xmm3
  const __m128i *v293; // rdi
  __int64 v294; // rdx
  __int64 v295; // rdx
  __int64 v296; // rdx
  __int64 v297; // rdx
  __int64 v298; // rcx
  __m128i v299; // xmm0
  __m128i v300; // xmm1
  __m128i v301; // xmm2
  __m128i v302; // xmm3
  __m128i v303; // xmm4
  __m128i v304; // xmm5
  __m128i v305; // xmm6
  __int64 v306; // rbx
  __int64 v307; // r14
  __int64 v308; // rax
  __int64 v309; // r14
  __int64 v310; // rcx
  __int64 v311; // rdx
  unsigned __int64 v312; // r8
  __m128i v313; // xmm0
  __m128i v314; // xmm1
  __m128i v315; // xmm2
  __m128i v316; // xmm3
  __m128i v317; // xmm4
  __int64 v318; // rax
  __int64 v319; // r15
  __int64 v320; // rcx
  __int64 v321; // rax
  __int64 v322; // rbx
  __int64 v323; // rbx
  __int64 v324; // rax
  __int64 v325; // rcx
  __int64 v326; // rax
  __int64 v327; // rcx
  __int64 v328; // [rsp+40h] [rbp-40h] BYREF
  __m128i v329; // [rsp+48h] [rbp-38h]
  __m128i v330; // [rsp+58h] [rbp-28h]
  __m128i v331; // [rsp+68h] [rbp-18h]
  __m128i v332; // [rsp+78h] [rbp-8h]
  __m128i v333; // [rsp+88h] [rbp+8h]
  __m128i v334; // [rsp+98h] [rbp+18h]
  __m256i v335; // [rsp+A8h] [rbp+28h]
  __int64 v336; // [rsp+C8h] [rbp+48h]
  __m128i v337; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v338; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v339; // [rsp+F0h] [rbp+70h]
  __int128 v340; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v341; // [rsp+108h] [rbp+88h]
  __int128 v342; // [rsp+110h] [rbp+90h] BYREF
  __int64 v343; // [rsp+120h] [rbp+A0h]
  __int128 v344; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v345; // [rsp+138h] [rbp+B8h]
  __int128 v346; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v347; // [rsp+150h] [rbp+D0h]
  __int128 v348; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v349; // [rsp+168h] [rbp+E8h]
  __int128 v350; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v351; // [rsp+180h] [rbp+100h]
  __int128 v352; // [rsp+188h] [rbp+108h] BYREF
  __int64 v353; // [rsp+198h] [rbp+118h]
  __m128i v354; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v355; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v356; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v357[4]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v358; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v359[3]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v360; // [rsp+238h] [rbp+1B8h]
  __int64 v361; // [rsp+240h] [rbp+1C0h]
  __int64 v362; // [rsp+248h] [rbp+1C8h]
  __int64 v363; // [rsp+250h] [rbp+1D0h]
  const __m128i *v364; // [rsp+258h] [rbp+1D8h]
  __int64 v365; // [rsp+260h] [rbp+1E0h]
  unsigned int *v366; // [rsp+268h] [rbp+1E8h]
  unsigned __int64 *v367; // [rsp+270h] [rbp+1F0h]
  _QWORD v368[3]; // [rsp+278h] [rbp+1F8h] BYREF
  _BYTE v369[104]; // [rsp+290h] [rbp+210h] BYREF
  __m256i v370; // [rsp+2F8h] [rbp+278h]
  __int128 v371; // [rsp+318h] [rbp+298h]
  __int64 v372; // [rsp+328h] [rbp+2A8h]
  __int128 v373; // [rsp+330h] [rbp+2B0h]
  __int64 v374; // [rsp+340h] [rbp+2C0h]
  __int128 v375; // [rsp+348h] [rbp+2C8h]
  __int64 v376; // [rsp+358h] [rbp+2D8h]
  __int128 v377; // [rsp+360h] [rbp+2E0h]
  __int64 v378; // [rsp+370h] [rbp+2F0h]
  __int128 v379; // [rsp+378h] [rbp+2F8h]
  __int64 v380; // [rsp+388h] [rbp+308h]
  __int128 v381; // [rsp+390h] [rbp+310h]
  unsigned __int64 v382; // [rsp+3A0h] [rbp+320h]
  __int128 v383; // [rsp+3A8h] [rbp+328h]
  unsigned __int64 v384; // [rsp+3B8h] [rbp+338h]
  __int128 v385; // [rsp+3C0h] [rbp+340h]
  unsigned __int64 v386; // [rsp+3D0h] [rbp+350h]
  __int128 v387; // [rsp+3D8h] [rbp+358h]
  __int64 v388; // [rsp+3E8h] [rbp+368h]
  __m128i v389; // [rsp+3F0h] [rbp+370h]
  void *v390; // [rsp+400h] [rbp+380h]
  __int64 v391; // [rsp+408h] [rbp+388h]
  __int64 v392; // [rsp+410h] [rbp+390h]
  __int64 v393; // [rsp+418h] [rbp+398h]
  __int64 v394; // [rsp+420h] [rbp+3A0h]
  __m128i v395; // [rsp+428h] [rbp+3A8h]
  __int64 v396; // [rsp+438h] [rbp+3B8h]
  char v397; // [rsp+440h] [rbp+3C0h]
  __m128i v398; // [rsp+448h] [rbp+3C8h]
  signed __int64 v399; // [rsp+458h] [rbp+3D8h]
  __m128i v400; // [rsp+460h] [rbp+3E0h]
  __m128i v401; // [rsp+470h] [rbp+3F0h]
  __m128i v402; // [rsp+480h] [rbp+400h]
  __m128i v403; // [rsp+490h] [rbp+410h]
  __m128i v404; // [rsp+4A0h] [rbp+420h]
  __m128i v405; // [rsp+4B0h] [rbp+430h]
  __m128i v406; // [rsp+4C0h] [rbp+440h]
  __m128i v407; // [rsp+4D0h] [rbp+450h]
  __int128 v408; // [rsp+4E0h] [rbp+460h]
  __int64 v409; // [rsp+4F0h] [rbp+470h]
  __int128 v410; // [rsp+4F8h] [rbp+478h]
  __int64 v411; // [rsp+508h] [rbp+488h]
  PVOID v412; // [rsp+510h] [rbp+490h]
  __int64 v413; // [rsp+518h] [rbp+498h]
  __int128 v414; // [rsp+520h] [rbp+4A0h] BYREF
  __int64 v415; // [rsp+530h] [rbp+4B0h]
  __int128 v416; // [rsp+538h] [rbp+4B8h] BYREF
  __int64 v417; // [rsp+548h] [rbp+4C8h]
  __int64 v418; // [rsp+550h] [rbp+4D0h]
  __int64 v419; // [rsp+558h] [rbp+4D8h]
  __m128i v420; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v421; // [rsp+570h] [rbp+4F0h] BYREF
  __m256i v422; // [rsp+580h] [rbp+500h] BYREF
  __m128i v423; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v424[24]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v425; // [rsp+5C8h] [rbp+548h]
  _QWORD v426[3]; // [rsp+5D0h] [rbp+550h] BYREF
  __m128i v427; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v428; // [rsp+5F8h] [rbp+578h]
  _QWORD v429[3]; // [rsp+600h] [rbp+580h] BYREF
  _QWORD v430[3]; // [rsp+618h] [rbp+598h] BYREF
  _QWORD v431[3]; // [rsp+630h] [rbp+5B0h] BYREF
  _QWORD v432[3]; // [rsp+648h] [rbp+5C8h] BYREF
  __m128i v433; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v434; // [rsp+670h] [rbp+5F0h]
  _QWORD v435[3]; // [rsp+678h] [rbp+5F8h] BYREF
  _QWORD v436[3]; // [rsp+690h] [rbp+610h] BYREF
  _QWORD v437[3]; // [rsp+6A8h] [rbp+628h] BYREF
  _QWORD v438[3]; // [rsp+6C0h] [rbp+640h] BYREF
  _QWORD v439[3]; // [rsp+6D8h] [rbp+658h] BYREF
  _QWORD v440[3]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v441; // [rsp+708h] [rbp+688h]
  char v442; // [rsp+710h] [rbp+690h]
  _BYTE v443[24]; // [rsp+720h] [rbp+6A0h] BYREF
  __m128i v444; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v445; // [rsp+748h] [rbp+6C8h]
  __m128i v446; // [rsp+750h] [rbp+6D0h]
  __int64 v447; // [rsp+760h] [rbp+6E0h]
  __m128i v448; // [rsp+768h] [rbp+6E8h] BYREF
  const __m128i *v449; // [rsp+778h] [rbp+6F8h]
  __int64 v450; // [rsp+780h] [rbp+700h]
  __int64 v451; // [rsp+788h] [rbp+708h]
  __int128 v452; // [rsp+790h] [rbp+710h] BYREF
  unsigned __int64 v453; // [rsp+7A0h] [rbp+720h]
  PVOID v454; // [rsp+7A8h] [rbp+728h]
  signed __int64 v455; // [rsp+7B0h] [rbp+730h]
  PVOID v456; // [rsp+7B8h] [rbp+738h]
  signed __int64 v457; // [rsp+7C0h] [rbp+740h]
  __int64 v458; // [rsp+7C8h] [rbp+748h]
  __int64 v459; // [rsp+7D0h] [rbp+750h]
  __int64 v460; // [rsp+7D8h] [rbp+758h]
  __int64 v461; // [rsp+7E0h] [rbp+760h]
  __int128 v462; // [rsp+7E8h] [rbp+768h] BYREF
  unsigned __int64 v463; // [rsp+7F8h] [rbp+778h]
  PVOID v464; // [rsp+800h] [rbp+780h]
  signed __int64 v465; // [rsp+808h] [rbp+788h]
  __int64 v466; // [rsp+810h] [rbp+790h]
  __int64 v467; // [rsp+818h] [rbp+798h]
  __int64 v468; // [rsp+820h] [rbp+7A0h]
  __int64 v469; // [rsp+828h] [rbp+7A8h]
  __int64 v470; // [rsp+830h] [rbp+7B0h]
  __int64 v471; // [rsp+838h] [rbp+7B8h]
  __int64 v472; // [rsp+840h] [rbp+7C0h]
  __int64 v473; // [rsp+848h] [rbp+7C8h]
  _BYTE v474[88]; // [rsp+850h] [rbp+7D0h] BYREF
  __m128i v475; // [rsp+8A8h] [rbp+828h]
  __m256i v476; // [rsp+8B8h] [rbp+838h]
  __int64 v477; // [rsp+8D8h] [rbp+858h]
  __m128i v478; // [rsp+8E0h] [rbp+860h] BYREF
  __m128i v479; // [rsp+8F0h] [rbp+870h] BYREF
  __m128i v480; // [rsp+900h] [rbp+880h] BYREF
  __m128i v481; // [rsp+910h] [rbp+890h] BYREF
  __int128 v482; // [rsp+920h] [rbp+8A0h]
  __m128i v483; // [rsp+930h] [rbp+8B0h] BYREF
  __int128 v484; // [rsp+948h] [rbp+8C8h] BYREF
  unsigned __int64 v485; // [rsp+958h] [rbp+8D8h]
  __m128i v486; // [rsp+960h] [rbp+8E0h] BYREF
  signed __int64 v487; // [rsp+970h] [rbp+8F0h]
  __int64 v488; // [rsp+978h] [rbp+8F8h]
  unsigned __int64 v489; // [rsp+980h] [rbp+900h]
  unsigned __int64 v490; // [rsp+988h] [rbp+908h]
  __m128i *v491; // [rsp+990h] [rbp+910h]
  unsigned __int64 v492; // [rsp+998h] [rbp+918h]
  PVOID v493; // [rsp+9A0h] [rbp+920h]
  __int64 v494; // [rsp+9A8h] [rbp+928h]
  __m128i v495; // [rsp+9B0h] [rbp+930h] BYREF
  void *v496; // [rsp+9C0h] [rbp+940h]
  __int128 v497; // [rsp+9C8h] [rbp+948h] BYREF
  __int64 v498; // [rsp+9D8h] [rbp+958h]
  __int64 v499; // [rsp+9E0h] [rbp+960h]
  unsigned __int64 v500; // [rsp+9E8h] [rbp+968h]
  __int64 v501; // [rsp+9F0h] [rbp+970h]
  _BYTE v502[24]; // [rsp+9F8h] [rbp+978h] BYREF
  __int128 v503; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v504; // [rsp+A20h] [rbp+9A0h]
  __int64 v505; // [rsp+A28h] [rbp+9A8h]
  __int64 v506; // [rsp+A30h] [rbp+9B0h]
  __int64 v507; // [rsp+A38h] [rbp+9B8h]
  __int64 v508; // [rsp+A40h] [rbp+9C0h]
  const __m128i *v509; // [rsp+A48h] [rbp+9C8h]
  const __m128i *v510; // [rsp+A50h] [rbp+9D0h]
  unsigned __int64 v511; // [rsp+A58h] [rbp+9D8h]
  __int64 v512; // [rsp+A60h] [rbp+9E0h]
  __int64 v513; // [rsp+A68h] [rbp+9E8h]
  char v514; // [rsp+A77h] [rbp+9F7h] BYREF
  const __m128i *v515; // [rsp+A78h] [rbp+9F8h]
  __int64 v516; // [rsp+A80h] [rbp+A00h]
  __int64 v517; // [rsp+A88h] [rbp+A08h]
  unsigned __int64 v518; // [rsp+A90h] [rbp+A10h]
  __int64 v519; // [rsp+A98h] [rbp+A18h]
  const __m128i *v520; // [rsp+AA0h] [rbp+A20h]
  char v521; // [rsp+AA8h] [rbp+A28h]
  char v522; // [rsp+AA9h] [rbp+A29h]
  char v523; // [rsp+AAAh] [rbp+A2Ah]
  char v524; // [rsp+AABh] [rbp+A2Bh]
  char v525; // [rsp+AACh] [rbp+A2Ch]
  char v526; // [rsp+AADh] [rbp+A2Dh]
  char v527; // [rsp+AAEh] [rbp+A2Eh]
  char v528; // [rsp+AAFh] [rbp+A2Fh]
  char v529; // [rsp+AB0h] [rbp+A30h]
  char v530; // [rsp+AB1h] [rbp+A31h]
  char v531; // [rsp+AB2h] [rbp+A32h]
  char v532; // [rsp+AB3h] [rbp+A33h]
  char v533; // [rsp+AB4h] [rbp+A34h]
  char v534; // [rsp+AB5h] [rbp+A35h]
  char v535; // [rsp+AB6h] [rbp+A36h]
  char v536; // [rsp+AB7h] [rbp+A37h]
  __int64 v537; // [rsp+AB8h] [rbp+A38h]
  __int64 v538; // [rsp+AC0h] [rbp+A40h]
  char v539; // [rsp+AD5h] [rbp+A55h]
  char v540; // [rsp+AD6h] [rbp+A56h]
  char v541; // [rsp+AD7h] [rbp+A57h]
  char v542; // [rsp+AD8h] [rbp+A58h]
  char v543; // [rsp+AD9h] [rbp+A59h]
  char v544; // [rsp+ADAh] [rbp+A5Ah]
  char v545; // [rsp+ADBh] [rbp+A5Bh]
  char v546; // [rsp+ADCh] [rbp+A5Ch]
  char v547; // [rsp+ADDh] [rbp+A5Dh]
  char v548; // [rsp+ADEh] [rbp+A5Eh]
  char v549; // [rsp+ADFh] [rbp+A5Fh]
  char v550; // [rsp+AE0h] [rbp+A60h]
  char v551; // [rsp+AE1h] [rbp+A61h]
  char v552; // [rsp+AE2h] [rbp+A62h]
  char v553; // [rsp+AE3h] [rbp+A63h]
  char v554; // [rsp+AE4h] [rbp+A64h]
  char v555; // [rsp+AE5h] [rbp+A65h]
  char v556; // [rsp+AE6h] [rbp+A66h]
  char v557; // [rsp+AE7h] [rbp+A67h]
  char v558; // [rsp+AE8h] [rbp+A68h]
  char v559; // [rsp+AE9h] [rbp+A69h]
  char v560; // [rsp+AEAh] [rbp+A6Ah]
  __int64 v561; // [rsp+B00h] [rbp+A80h]
  char v562; // [rsp+B0Fh] [rbp+A8Fh]
  char v563; // [rsp+B10h] [rbp+A90h]
  char v564; // [rsp+B11h] [rbp+A91h]
  char v565; // [rsp+B12h] [rbp+A92h]
  char v566; // [rsp+B13h] [rbp+A93h]
  char v567; // [rsp+B14h] [rbp+A94h]
  char v568; // [rsp+B15h] [rbp+A95h]
  char v569; // [rsp+B16h] [rbp+A96h]
  char v570; // [rsp+B17h] [rbp+A97h]
  PVOID Address; // [rsp+B18h] [rbp+A98h]
  char v572; // [rsp+B27h] [rbp+AA7h]
  char v573; // [rsp+B28h] [rbp+AA8h]
  char v574; // [rsp+B29h] [rbp+AA9h]
  char v575; // [rsp+B2Ah] [rbp+AAAh]
  char v576; // [rsp+B2Bh] [rbp+AABh]
  char v577; // [rsp+B2Ch] [rbp+AACh]
  char v578; // [rsp+B2Dh] [rbp+AADh]
  char v579; // [rsp+B2Eh] [rbp+AAEh]
  char v580; // [rsp+B2Fh] [rbp+AAFh]
  char v581; // [rsp+B30h] [rbp+AB0h]
  char v582; // [rsp+B31h] [rbp+AB1h]
  char v583; // [rsp+B32h] [rbp+AB2h]
  char v584; // [rsp+B33h] [rbp+AB3h]
  char v585; // [rsp+B34h] [rbp+AB4h]
  char v586; // [rsp+B35h] [rbp+AB5h]
  char v587; // [rsp+B36h] [rbp+AB6h]
  char v588; // [rsp+B37h] [rbp+AB7h]
  __int64 v589; // [rsp+B38h] [rbp+AB8h]

  v589 = -2;
  v520 = a3;
  v570 = 1;
  v569 = 1;
  v568 = 1;
  v567 = 1;
  v566 = 1;
  v565 = 1;
  v564 = 1;
  v563 = 1;
  v562 = 1;
  sub_14103B320(v369);
  v420 = *(__m128i *)&v369[8];
  v421 = *(__m128i *)&v369[24];
  v422 = *(__m256i *)&v369[40];
  v423 = *(__m128i *)&v369[72];
  *(_OWORD *)v424 = *(_OWORD *)&v369[88];
  if ( *(_QWORD *)v369 == -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)v424;
    *(__m128i *)(a1 + 72) = v423;
    v24 = _mm_load_si128(&v420);
    v25 = _mm_load_si128(&v421);
    si128 = _mm_load_si128((const __m128i *)&v422);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v422.m256i_u64[2]);
    *(__m128i *)(a1 + 40) = si128;
    *(__m128i *)(a1 + 24) = v25;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_24;
  }
  v336 = v371;
  v335 = v370;
  v329 = v420;
  v330 = _mm_load_si128(&v421);
  v331 = _mm_load_si128((const __m128i *)&v422);
  v332 = _mm_load_si128((const __m128i *)&v422.m256i_u64[2]);
  v333 = v423;
  v334 = _mm_load_si128((const __m128i *)v424);
  v328 = *(_QWORD *)v369;
  v8 = v520;
  v9 = (const __m128i *)sub_140E91160(v520[3].m128i_i64[0], v520[3].m128i_i64[1]);
  if ( !v10 )
  {
    nullsub_1(v11);
    v36 = (__m128i *)sub_140001650(24, 1);
    if ( !v36 )
    {
      v585 = 1;
      v584 = 1;
      v583 = 1;
      v582 = 1;
      v581 = 1;
      v580 = 1;
      v579 = 1;
      v578 = 1;
      v577 = 1;
      sub_141938D2B(1, 24);
    }
    *v36 = _mm_loadu_si128(&xmmword_141A7123C);
    v36[1].m128i_i64[0] = 0x7974706D65206562LL;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 24;
    *(_QWORD *)(a1 + 24) = v36;
    *(_QWORD *)(a1 + 32) = 24;
    goto LABEL_22;
  }
  v517 = (__int64)v9;
  v12 = v8[10].m128i_i64[0] == -1;
  v537 = v10;
  v513 = a4;
  if ( v12
    || (v13 = (const __m128i *)sub_140E91160(v8[10].m128i_i64[1], v8[11].m128i_i64[0])) == nullptr
    || (v15 = v14) == nullptr )
  {
    if ( v329.m128i_i64[1] )
    {
      v28 = v520[1].m128i_i64[1];
      v29 = v520[2].m128i_i64[0];
      v30 = 0;
      while ( *(_QWORD *)(v329.m128i_i64[0] + v30 + 16) != v29
           || (unsigned int)sub_1418F4B70(*(_QWORD *)(v329.m128i_i64[0] + v30 + 8), v28) )
      {
        v30 += 112;
        if ( 112 * v329.m128i_i64[1] == v30 )
          goto LABEL_21;
      }
      v585 = 1;
      v584 = 1;
      v583 = 1;
      v582 = 1;
      v581 = 1;
      v580 = 1;
      v579 = 1;
      v578 = 1;
      v577 = 1;
      sub_1416AC440(v502, v30 + v329.m128i_i64[0]);
      sub_1416AC440(&v495, v30 + v329.m128i_i64[0] + 24);
      sub_1416AC440(&v478, v30 + v329.m128i_i64[0] + 48);
      v31 = *(unsigned __int8 *)(v329.m128i_i64[0] + v30 + 105);
      sub_1416AC440(&v354, v30 + v329.m128i_i64[0] + 72);
      v32 = *(unsigned __int8 *)(v329.m128i_i64[0] + v30 + 104);
      v33 = *(_QWORD *)(v329.m128i_i64[0] + v30 + 96);
      *(_OWORD *)v369 = *(_OWORD *)&v502[8];
      *(__m128i *)&v369[16] = v495;
      *(_QWORD *)&v369[32] = v496;
      *(__m128i *)&v369[40] = v478;
      *(_QWORD *)&v369[56] = v479.m128i_i64[0];
      *(__m128i *)&v369[64] = v354;
      *(_QWORD *)&v369[80] = v355.m128i_i64[0];
      *(_QWORD *)v424 = v355.m128i_i64[0];
      v423 = v354;
      v422.m256i_i64[3] = v479.m128i_i64[0];
      v422.m256i_i64[0] = (__int64)v496;
      *(__m128i *)&v422.m256i_u64[1] = v478;
      v421 = v495;
      v420 = *(__m128i *)&v502[8];
      *(_QWORD *)&v474[80] = v355.m128i_i64[0];
      *(__m128i *)&v474[64] = v354;
      *(_QWORD *)&v474[56] = v479.m128i_i64[0];
      *(_QWORD *)&v474[32] = v496;
      *(__m128i *)&v474[40] = v478;
      *(__m128i *)&v474[16] = v495;
      *(_OWORD *)v474 = *(_OWORD *)&v502[8];
      v449 = (const __m128i *)v355.m128i_i64[0];
      v448 = v354;
      v34 = _mm_load_si128((const __m128i *)v474);
      v35 = _mm_load_si128((const __m128i *)&v474[16]);
      v447 = v479.m128i_i64[0];
      v445 = (__int64)v496;
      v446 = v478;
      v444 = v35;
      *(__m128i *)&v443[8] = v34;
      *(_QWORD *)v443 = *(_QWORD *)v502;
      v450 = v33;
      v451 = v32 | (unsigned int)(v31 << 8);
      goto LABEL_87;
    }
LABEL_21:
    v354.m128i_i64[0] = (__int64)v520[1].m128i_i64;
    v354.m128i_i64[1] = (__int64)sub_1400015F0;
    v585 = 1;
    v584 = 1;
    v583 = 1;
    v582 = 1;
    v581 = 1;
    v580 = 1;
    v579 = 1;
    v578 = 1;
    v577 = 1;
    sub_1416ABFD0(&v369[8], &unk_141A6D281, &v354);
    *(_QWORD *)v369 = 8;
    v421 = *(__m128i *)&v369[16];
    v422 = *(__m256i *)&v369[32];
    v423 = *(__m128i *)&v369[64];
    v420 = _mm_loadu_si128((const __m128i *)v369);
    v37 = *(_QWORD *)&v369[88];
    *(_OWORD *)&v474[16] = *(_OWORD *)&v369[16];
    *(_OWORD *)&v474[32] = *(_OWORD *)&v369[32];
    *(_OWORD *)&v474[48] = *(_OWORD *)&v369[48];
    *(_OWORD *)&v474[64] = *(_OWORD *)&v369[64];
    *(_QWORD *)&v474[80] = *(_QWORD *)&v369[80];
    *(__m128i *)v474 = v420;
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v369[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v474[64];
    v38 = _mm_load_si128((const __m128i *)v474);
    v39 = _mm_load_si128((const __m128i *)&v474[16]);
    v40 = _mm_load_si128((const __m128i *)&v474[32]);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v474[48]);
    *(__m128i *)(a1 + 40) = v40;
    *(__m128i *)(a1 + 24) = v39;
    *(__m128i *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 96) = v37;
LABEL_22:
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_23;
  }
  v561 = (__int64)v13;
  v585 = 1;
  v584 = 1;
  v583 = 1;
  v582 = 1;
  v581 = 1;
  v580 = 1;
  v579 = 1;
  v578 = 1;
  v577 = 1;
  sub_1416AC440(&v420, &v8[1]);
  v17 = a2;
  v18 = v520;
  if ( v520[11].m128i_i64[1] == -1 )
  {
    v20 = (const __m128i *)&unk_141A71254;
    v22 = 15;
  }
  else
  {
    v20 = (const __m128i *)sub_140E91160(v520[12].m128i_i64[0], v520[12].m128i_i64[1]);
    v21 = v20 == nullptr || v19 == 0;
    v22 = 15;
    if ( !v21 )
      v22 = v19;
    if ( v22 < 0 )
    {
      v23 = 0;
      goto LABEL_11;
    }
    v16 = &unk_141A71254;
    if ( v21 )
      v20 = (const __m128i *)&unk_141A71254;
  }
  nullsub_1(v16);
  v23 = 1;
  v60 = (__m128i *)sub_140001650(v22, 1);
  if ( !v60 )
  {
    v19 = v22;
LABEL_11:
    sub_141938D2B(v23, v19);
  }
  v508 = (__int64)v60;
  v538 = v22;
  sub_1418F44E0(v60, v20, v22);
  v62 = v18[26].m128i_i32[2];
  v63 = 5;
  if ( (_BYTE)v62 != 0xFF )
    v63 = v62;
  if ( (__int64)v15 < 0 )
  {
    v64 = 0;
    goto LABEL_81;
  }
  nullsub_1(v61);
  v64 = 1;
  v65 = (__m128i *)sub_140001650(v15, 1);
  if ( !v65 )
LABEL_81:
    sub_141938D2B(v64, v15);
  v509 = v65;
  v66 = (const __m128i *)v561;
  v561 = (__int64)v15;
  sub_1418F44E0(v65, v66, (unsigned __int64)v15);
  a2 = v17;
  *(_DWORD *)v474 = sub_141683E80(v68, v67, v69);
  *(_DWORD *)&v474[4] = v70;
  sub_141683E30(v369, v474, 3577643008LL, 27111902);
  if ( v369[0] )
    v71 = 0;
  else
    v71 = *(_QWORD *)&v369[8];
  *(__m128i *)v443 = _mm_loadu_si128(&v420);
  *(_QWORD *)&v443[16] = v421.m128i_i64[0];
  v444.m128i_i64[0] = v538;
  v444.m128i_i64[1] = v508;
  v445 = v538;
  v446.m128i_i64[0] = 0;
  v446.m128i_i64[1] = 1;
  v447 = 0;
  BYTE1(v451) = v63;
  v448.m128i_i64[0] = v561;
  v448.m128i_i64[1] = (__int64)v509;
  v449 = (const __m128i *)v561;
  LOBYTE(v451) = 0;
  v450 = v71;
LABEL_87:
  v72 = v520;
  v73 = v520[4].m128i_i64[0];
  v74 = 0;
  v75 = 1;
  v76 = v520[4].m128i_i64[1];
  if ( v73 == -1 )
    v76 = 1;
  v77 = v520[5].m128i_i64[0];
  if ( v73 == -1 )
  {
    v77 = 0;
    v73 = 0;
  }
  v561 = v76;
  v78 = sub_140E91160(v76, v77);
  v81 = v79;
  if ( v79 < 0 )
  {
LABEL_92:
    v537 = v73;
    sub_141938D2B(v74, v81);
  }
  if ( v79 )
  {
    v82 = (const __m128i *)v78;
    nullsub_1(v80);
    v74 = 1;
    v83 = (__m128i *)sub_140001650(v81, 1);
    v84 = v82;
    v72 = v520;
    if ( !v83 )
      goto LABEL_92;
    v75 = (__int64)v83;
    sub_1418F44E0(v83, v84, v81);
  }
  if ( v73 )
    sub_140001660(v561, v73, 1);
  v85 = (const __m128i *)v72[5].m128i_i64[1];
  v86 = 0;
  v87 = v72[6].m128i_i64[0];
  if ( v85 == (const __m128i *)-1LL )
    v87 = 1;
  v88 = v72[6].m128i_i64[1];
  if ( v85 == (const __m128i *)-1LL )
  {
    v88 = 0;
    v85 = nullptr;
  }
  v561 = (__int64)v85;
  v538 = v87;
  v89 = sub_140E91160(v87, v88);
  v91 = v90;
  v509 = (const __m128i *)v75;
  v508 = v81;
  if ( v90 < 0 )
LABEL_103:
    sub_141938D2B(v86, v91);
  v499 = 1;
  if ( v90 )
  {
    v92 = (const __m128i *)v89;
    nullsub_1(1);
    v86 = 1;
    v93 = (__m128i *)sub_140001650(v91, 1);
    v94 = v92;
    v72 = v520;
    if ( !v93 )
      goto LABEL_103;
    v499 = (__int64)v93;
    sub_1418F44E0(v93, v94, v91);
  }
  if ( v561 )
    sub_140001660(v538, v561, 1);
  v95 = (const __m128i *)v72[7].m128i_i64[0];
  v96 = 0;
  v97 = v72[7].m128i_i64[1];
  if ( v95 == (const __m128i *)-1LL )
    v97 = 1;
  v98 = v72[8].m128i_i64[0];
  if ( v95 == (const __m128i *)-1LL )
  {
    v98 = 0;
    v95 = nullptr;
  }
  v561 = (__int64)v95;
  v538 = v97;
  v99 = sub_140E91160(v97, v98);
  v101 = v100;
  v500 = v91;
  if ( v100 < 0 )
LABEL_114:
    sub_141938D2B(v96, v101);
  v501 = 1;
  if ( v100 )
  {
    v102 = (const __m128i *)v99;
    nullsub_1(1);
    v96 = 1;
    v103 = (__m128i *)sub_140001650(v101, 1);
    v104 = v102;
    v72 = v520;
    if ( !v103 )
      goto LABEL_114;
    v501 = (__int64)v103;
    sub_1418F44E0(v103, v104, v101);
  }
  if ( v561 )
    sub_140001660(v538, v561, 1);
  v105 = (const __m128i *)v72[8].m128i_i64[1];
  v106 = 0;
  v107 = 1;
  v108 = v72[9].m128i_i64[0];
  if ( v105 == (const __m128i *)-1LL )
    v108 = 1;
  v109 = v72[9].m128i_i64[1];
  if ( v105 == (const __m128i *)-1LL )
  {
    v109 = 0;
    v105 = nullptr;
  }
  v561 = (__int64)v105;
  v538 = v108;
  v110 = sub_140E91160(v108, v109);
  v113 = v111;
  v489 = v101;
  if ( v111 < 0 )
LABEL_125:
    sub_141938D2B(v106, v113);
  if ( v111 )
  {
    v114 = (const __m128i *)v110;
    nullsub_1(v112);
    v106 = 1;
    v115 = (__m128i *)sub_140001650(v113, 1);
    v116 = v114;
    v72 = v520;
    if ( !v115 )
      goto LABEL_125;
    v107 = (__int64)v115;
    sub_1418F44E0(v115, v116, v113);
  }
  v490 = v113;
  if ( v561 )
    sub_140001660(v538, v561, 1);
  v470 = v107;
  *(_QWORD *)&v369[16] = v72[20].m128i_i64[0];
  *(__m128i *)v369 = _mm_loadu_si128(v72 + 19);
  v560 = 1;
  v559 = 1;
  v558 = 1;
  v557 = 1;
  v556 = 1;
  sub_141039B30(&v420, v369);
  v117 = v537;
  v118 = v420.m128i_i64[0];
  v119 = v421.m128i_i64[0];
  if ( v420.m128i_i64[0] == -1 )
    v119 = 0;
  v120 = 1;
  v121 = v420.m128i_i64[1];
  if ( v420.m128i_i64[0] == -1 )
    v121 = 1;
  v458 = v121;
  if ( v420.m128i_i64[0] == -1 )
    v118 = 0;
  v466 = v118;
  *(_QWORD *)&v369[16] = v520[21].m128i_i64[1];
  *(__m128i *)v369 = _mm_loadu_si128((const __m128i *)((char *)v520 + 328));
  v555 = 1;
  v554 = 1;
  v553 = 1;
  v552 = 1;
  v551 = 1;
  sub_141039B30(&v420, v369);
  v122 = v420.m128i_i64[0];
  v123 = v421.m128i_i64[0];
  if ( v420.m128i_i64[0] != -1 )
    v120 = v420.m128i_i64[1];
  v459 = v120;
  if ( v420.m128i_i64[0] == -1 )
  {
    v123 = 0;
    v122 = 0;
  }
  v467 = v122;
  *(_QWORD *)&v369[16] = v520[23].m128i_i64[0];
  *(__m128i *)v369 = _mm_loadu_si128(v520 + 22);
  v550 = 1;
  v549 = 1;
  v548 = 1;
  v547 = 1;
  sub_141039B30(&v420, v369);
  v124 = v420.m128i_i64[0];
  v125 = v421.m128i_i64[0];
  if ( v420.m128i_i64[0] == -1 )
    v125 = 0;
  v126 = 1;
  v127 = v420.m128i_i64[1];
  if ( v420.m128i_i64[0] == -1 )
    v127 = 1;
  v460 = v127;
  if ( v420.m128i_i64[0] == -1 )
    v124 = 0;
  v468 = v124;
  *(_QWORD *)&v369[16] = v520[24].m128i_i64[1];
  *(__m128i *)v369 = _mm_loadu_si128((const __m128i *)((char *)v520 + 376));
  v546 = 1;
  v545 = 1;
  v544 = 1;
  sub_141039B30(&v420, v369);
  v128 = v420.m128i_i64[0];
  v129 = v421.m128i_i64[0];
  if ( v420.m128i_i64[0] == -1 )
    v129 = 0;
  v360 = v129;
  if ( v420.m128i_i64[0] != -1 )
    v126 = v420.m128i_i64[1];
  v461 = v126;
  if ( v420.m128i_i64[0] == -1 )
    v128 = 0;
  v469 = v128;
  *(_QWORD *)&v369[16] = v520[26].m128i_i64[0];
  *(__m128i *)v369 = _mm_loadu_si128(v520 + 25);
  v543 = 1;
  v542 = 1;
  sub_141039B30(v359, v369);
  if ( v117 < 0 )
  {
    v131 = 0;
    goto LABEL_155;
  }
  v362 = v125;
  v361 = v123;
  v561 = v330.m128i_i64[1];
  v132 = v331.m128i_i64[0];
  nullsub_1(v130);
  v131 = 1;
  v133 = (__m128i *)sub_140001650(v117, 1);
  if ( !v133 )
  {
LABEL_155:
    v540 = 1;
    v539 = 1;
    sub_141938D2B(v131, v117);
  }
  Address = v133;
  sub_1418F44E0(v133, (const __m128i *)v517, v117);
  v135 = v489;
  if ( v489 )
  {
    nullsub_1(v134);
    v136 = (__m128i *)sub_140001650(v135, 1);
    if ( !v136 )
    {
      v465 = v117;
      v464 = Address;
      sub_141938D2B(1, v135);
    }
    v131 = (__int64)v136;
    sub_1418F44E0(v136, (const __m128i *)v501, v135);
  }
  *(_QWORD *)v369 = v135;
  *(_QWORD *)&v369[8] = v131;
  *(_QWORD *)&v369[16] = v135;
  v465 = v117;
  v137 = Address;
  v464 = Address;
  sub_141039B30(&v420, v369);
  if ( v420.m128i_i64[0] == -1 )
  {
    v418 = v119;
    *(_QWORD *)&v484 = 0;
    *((_QWORD *)&v484 + 1) = 1;
    v485 = 0;
    goto LABEL_165;
  }
  v519 = v420.m128i_i64[1];
  v538 = v420.m128i_i64[0];
  v138 = (const __m128i *)sub_140E91160(v420.m128i_i64[1], v421.m128i_i64[0]);
  if ( v139 < 0 )
  {
    v141 = 0;
    goto LABEL_163;
  }
  if ( v139 )
  {
    v218 = v119;
    v510 = v138;
    v518 = v139;
    nullsub_1(v140);
    v141 = 1;
    v219 = (__m128i *)sub_140001650(v518, 1);
    v139 = v518;
    if ( !v219 )
LABEL_163:
      sub_141938D2B(v141, v139);
    v220 = (__int64)v219;
    sub_1418F44E0(v219, v510, v518);
    v221 = v518;
    if ( v518 < 8 )
    {
      v222 = 0;
      v119 = v218;
      v137 = Address;
      v223 = v538;
      do
      {
LABEL_457:
        *(_BYTE *)(v220 + v222) |= 32 * ((unsigned __int8)(*(_BYTE *)(v220 + v222) - 65) < 0x1Au);
        ++v222;
LABEL_458:
        ;
      }
      while ( v221 != v222 );
      goto LABEL_459;
    }
    if ( v518 < 0x20 )
    {
      v222 = 0;
      v119 = v218;
      v137 = Address;
      v223 = v538;
      goto LABEL_418;
    }
    v222 = v518 & 0x7FFFFFFFFFFFFFE0LL;
    v298 = 0;
    v299 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
    v300 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
    v301 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
    do
    {
      v302 = _mm_loadu_si128((const __m128i *)(v220 + v298));
      v303 = _mm_loadu_si128((const __m128i *)(v220 + v298 + 16));
      v304 = _mm_add_epi8(v302, v299);
      v305 = _mm_add_epi8(v303, v299);
      *(__m128i *)(v220 + v298) = _mm_or_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v304, v300), v304), v301),
                                    v302);
      *(__m128i *)(v220 + v298 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v305, v300), v305), v301),
                                         v303);
      v298 += 32;
    }
    while ( v222 != v298 );
    if ( v518 != v222 )
    {
      v221 = v518;
      v117 = v537;
      v119 = v218;
      v137 = Address;
      v223 = v538;
      if ( (v518 & 0x18) == 0 )
        goto LABEL_457;
LABEL_418:
      v312 = v222;
      v222 = v221 & 0x7FFFFFFFFFFFFFF8LL;
      v313 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
      v314 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
      v315 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
      do
      {
        v316 = _mm_loadl_epi64((const __m128i *)(v220 + v312));
        v317 = _mm_add_epi8(v316, v313);
        *(_QWORD *)(v220 + v312) = _mm_or_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v317, v314), v317), v315),
                                     v316).m128i_u64[0];
        v312 += 8LL;
      }
      while ( v222 != v312 );
      goto LABEL_458;
    }
    v221 = v518;
    v117 = v537;
    v119 = v218;
    v137 = Address;
  }
  else
  {
    v220 = 1;
    v221 = 0;
  }
  v223 = v538;
LABEL_459:
  v418 = v119;
  *(_QWORD *)&v484 = v221;
  *((_QWORD *)&v484 + 1) = v220;
  v485 = v221;
  if ( v223 )
    sub_140001660(v519, v223, 1);
LABEL_165:
  v142 = (const __m128i *)(v561 + 160 * v132);
  *(_QWORD *)v369 = v561;
  *(_QWORD *)&v369[8] = v142;
  *(_QWORD *)&v369[16] = &v484;
  v457 = v117;
  v456 = v137;
  sub_1403DE5E0(&v452, v369);
  v491 = *((__m128i **)&v452 + 1);
  v144 = v453;
  *(_QWORD *)v369 = &v514;
  if ( v453 >= 2 )
  {
    if ( v453 >= 0x15 )
    {
      v117 = v537;
      v494 = v537;
      v137 = Address;
      v493 = Address;
      v576 = 1;
      sub_14065D520((__int64)v491, v453, (__int64)v369);
    }
    else
    {
      sub_140E01AE0(v491, v453, 1);
      v117 = v537;
      v137 = Address;
    }
  }
  v494 = v117;
  v493 = v137;
  v576 = 1;
  v145 = sub_14167F170(v143);
  if ( *(_BYTE *)(v145 + 16) == 1 )
  {
    v150 = *(_QWORD *)v145;
    v151 = *(_QWORD *)(v145 + 8);
  }
  else
  {
    v494 = v117;
    v493 = v137;
    v576 = 1;
    v322 = v145;
    v150 = sub_141696260(v147, v146, v148, v149);
    v145 = v322;
    *(_QWORD *)v322 = v150;
    *(_QWORD *)(v322 + 8) = v151;
    *(_BYTE *)(v322 + 16) = 1;
  }
  *(_QWORD *)v145 = v150 + 1;
  v421 = *((__m128i *)&off_141A68A70 + 1);
  v420 = _mm_loadu_si128((const __m128i *)&off_141A68A70);
  v422.m256i_i64[0] = v150;
  v422.m256i_i64[1] = v151;
  if ( v144 )
  {
    v507 = a2;
    LOBYTE(v149) = 1;
    sub_141930360(&v420, v144, &v422, v149);
    v323 = 0;
    v117 = v537;
    a2 = v507;
    do
    {
      v324 = v491->m128i_i64[v323];
      v325 = *(_QWORD *)(v324 + 32);
      v326 = v325 + *(_QWORD *)(v324 + 40);
      *(_QWORD *)v369 = 0;
      *(_QWORD *)&v369[40] = 0;
      *(_QWORD *)&v369[80] = v325;
      *(_QWORD *)&v369[88] = v326;
      sub_1407176D0(v474, v369);
      sub_1403AAB80(&v420, v474);
      ++v323;
    }
    while ( v323 != v144 );
  }
  v152 = _mm_load_si128(&v420);
  v153 = _mm_load_si128(&v421);
  *(_OWORD *)&v474[32] = *(_OWORD *)v422.m256i_i8;
  *(__m128i *)&v474[16] = v153;
  *(__m128i *)v474 = v152;
  *(_QWORD *)v369 = v561;
  *(_QWORD *)&v369[8] = v142;
  *(_QWORD *)&v369[16] = v474;
  v455 = v117;
  v454 = Address;
  v541 = 1;
  sub_1403DE800(&v462, v369);
  v154 = *((const __m128i **)&v462 + 1);
  v155 = v463;
  *(_QWORD *)v369 = &v514;
  if ( v463 >= 2 )
  {
    if ( v463 >= 0x15 )
    {
      v117 = v537;
      v413 = v537;
      v412 = Address;
      v536 = 1;
      sub_14065D520(*((__int64 *)&v462 + 1), v463, (__int64)v369);
    }
    else
    {
      sub_140E01AE0(*((_QWORD **)&v462 + 1), v463, 1);
      v117 = v537;
    }
  }
  v156 = (__m128i *)((char *)v491 + 8 * v144);
  *(_QWORD *)v369 = v154;
  *(_QWORD *)&v369[8] = v154;
  *(_QWORD *)&v369[16] = v462;
  v538 = (__int64)&v154->m128i_i64[v155];
  *(_QWORD *)&v369[24] = v538;
  *(_QWORD *)&v369[32] = v491;
  *(_QWORD *)&v369[40] = v491;
  v363 = v452;
  *(_QWORD *)&v369[48] = v452;
  *(_QWORD *)&v369[56] = v156;
  v519 = v462;
  v471 = 8 * v462;
  v157 = v117;
  v516 = v117;
  v158 = v491;
  v159 = v154;
  v510 = v156;
  v160 = v154;
LABEL_171:
  v515 = (const __m128i *)Address;
  v161 = v157;
  v162 = v158;
  v163 = v160;
  v561 = (__int64)v159;
  v505 = v161;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v159 )
      {
        v167 = (const __m128i *)v561;
        goto LABEL_179;
      }
      if ( v163 == (const __m128i *)v538 )
        break;
      *(_QWORD *)&v369[8] = &v163->m128i_i64[1];
      v158 = v162;
      v164 = (__int64 *)v163;
      v160 = (const __m128i *)&v163->m128i_u64[1];
      v163 = (const __m128i *)((char *)v163 + 8);
      v165 = (_QWORD *)*v164;
      v166 = v165[5];
      if ( v166 )
        goto LABEL_181;
    }
    if ( v519 )
    {
      sub_140001660(v561, v471, 8);
      v156 = v510;
    }
    *(_QWORD *)v369 = 0;
    v167 = nullptr;
LABEL_179:
    if ( v162 == v156 )
      break;
    v561 = (__int64)v167;
    v158 = (const __m128i *)&v162->m128i_u64[1];
    *(_QWORD *)&v369[40] = &v162->m128i_i64[1];
    v160 = v163;
    v159 = nullptr;
    v168 = (__int64 *)v162;
    v162 = (const __m128i *)((char *)v162 + 8);
    v165 = (_QWORD *)*v168;
    v166 = v165[5];
    if ( v166 )
    {
LABEL_181:
      v169 = v165[4];
      v364 = (const __m128i *)v165[7];
      v170 = v165[8];
      sub_1403E3140(v502, v169, v169 + v166);
      v172 = *(_QWORD *)&v502[16];
      if ( !*(_QWORD *)&v502[16] )
      {
        if ( v516 < 0 )
        {
          v257 = 0;
        }
        else
        {
          v174 = v505;
          if ( !v516 )
          {
            v473 = 1;
            v157 = 0;
            Address = (PVOID)1;
            v175 = 0;
            v177 = *(_QWORD *)v502;
            if ( *(_QWORD *)v502 )
              goto LABEL_265;
            goto LABEL_266;
          }
          v175 = v516;
          nullsub_1(v171);
          v157 = v175;
          v176 = (__m128i *)sub_140001650(v175, 1);
          if ( v176 )
          {
            v473 = (__int64)v176;
            sub_1418F44E0(v176, v515, v175);
            Address = (PVOID)v473;
            v177 = *(_QWORD *)v502;
            if ( *(_QWORD *)v502 )
              goto LABEL_265;
            goto LABEL_266;
          }
          v473 = v175;
          v257 = 1;
        }
        sub_141938D2B(v257, v473);
      }
      v492 = v170;
      v420.m128i_i64[0] = (__int64)v515;
      v420.m128i_i64[1] = (__int64)v515->m128i_i64 + v516;
      v421.m128i_i64[0] = 0;
      sub_1403E2820(&v495, &v420);
      if ( v516 < 0 )
      {
        v327 = 0;
LABEL_295:
        sub_141938D2B(v327, v472);
      }
      if ( v516 )
      {
        nullsub_1(v173);
        v472 = sub_140001650(v516, 1);
        if ( !v472 )
        {
          v472 = v516;
          v327 = 1;
          goto LABEL_295;
        }
      }
      else
      {
        v472 = 1;
      }
      v478.m128i_i64[0] = v516;
      v478.m128i_i64[1] = v472;
      v479.m128i_i64[0] = 0;
      Address = v496;
      v518 = *(_QWORD *)&v502[8];
      v419 = *(_QWORD *)&v502[8] + 4 * v172;
      v178 = v495.m128i_i64[1];
      v365 = v495.m128i_i64[1] + 40;
      v512 = 0;
      v511 = 0;
      v179 = 0;
      v506 = v495.m128i_i64[1];
LABEL_193:
      for ( i = v179; i < (unsigned __int64)Address; ++i )
      {
        if ( i )
        {
          v181 = *(_DWORD *)(v178 + 24 * i - 8);
          if ( (unsigned int)(v181 - 48) < 0xA || (v181 & 0xFFFFFFDF) - 65 < 0x1A )
            continue;
        }
        if ( *(_DWORD *)(v178 + 24 * i + 16) != *(_DWORD *)v518 )
        {
          sub_1416B42C0(&v416);
          v182 = 2LL - (DWORD1(v416) == 0);
          if ( DWORD2(v416) )
            v182 = 3;
          v354.m128i_i64[0] = 0;
          v354.m128i_i64[1] = v182;
          v355.m128i_i32[2] = DWORD2(v416);
          v355.m128i_i64[0] = v416;
          sub_1416B42C0(&v414);
          v183 = 2LL - (DWORD1(v414) == 0);
          if ( DWORD2(v414) )
            v183 = 3;
          v420.m128i_i64[0] = 0;
          v420.m128i_i64[1] = v183;
          v421.m128i_i32[2] = DWORD2(v414);
          v421.m128i_i64[0] = v414;
          v184 = sub_1416BBF60(&v354);
          v185 = sub_1416BBF60(&v420);
          if ( v184 == -1 )
          {
            if ( v185 != -1 )
              continue;
          }
          else if ( v184 != v185 )
          {
            continue;
          }
          if ( (unsigned int)sub_1416BBF60(&v354) != -1 || (unsigned int)sub_1416BBF60(&v420) != -1 )
            continue;
        }
        v367 = (unsigned __int64 *)(v178 + 24 * i);
        v186 = 1;
        v187 = 0;
        v188 = (unsigned int *)v518;
        v179 = i;
        v507 = a2;
LABEL_210:
        v189 = v179++;
        if ( (v187 & 1) != 0 )
        {
          if ( v188 == (unsigned int *)v419 )
            goto LABEL_233;
          v178 = v506;
          a2 = v507;
          if ( v179 >= (unsigned __int64)Address )
            continue;
          goto LABEL_213;
        }
        if ( v186 < (unsigned __int64)(v419 - (_QWORD)v188) >> 2 )
        {
          v188 += v186;
          v178 = v506;
          a2 = v507;
          if ( v179 >= (unsigned __int64)Address )
            continue;
LABEL_213:
          v366 = v188 + 1;
          v190 = (unsigned int *)(v365 + 24 * v189);
          while ( 1 )
          {
            v192 = *v190;
            if ( (unsigned int)(v192 - 9) >= 5 && (_DWORD)v192 != 32 )
            {
              if ( (unsigned int)v192 < 0x85 )
                goto LABEL_228;
              v193 = (unsigned int)v192 >> 8;
              if ( (unsigned int)v192 >> 8 > 0x1F )
              {
                if ( v193 == 32 )
                {
                  v191 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v192) >> 1;
                }
                else
                {
                  v178 = v506;
                  a2 = v507;
                  if ( v193 != 48 )
                  {
LABEL_228:
                    v194 = sub_14102F930(v192, *v188);
                    v187 = 1;
                    v186 = 0;
                    v188 = v366;
                    if ( !v194 )
                      goto LABEL_195;
                    goto LABEL_210;
                  }
                  v191 = (_DWORD)v192 == 12288;
                }
              }
              else if ( v193 )
              {
                v178 = v506;
                a2 = v507;
                if ( v193 != 22 )
                  goto LABEL_228;
                v191 = (_DWORD)v192 == 5760;
              }
              else
              {
                v191 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v192);
              }
              v178 = v506;
              a2 = v507;
              if ( (v191 & 1) == 0 )
                goto LABEL_228;
            }
            ++v179;
            v190 += 6;
            if ( Address == (PVOID)v179 )
              goto LABEL_195;
          }
        }
LABEL_233:
        v178 = v506;
        a2 = v507;
        if ( v179 >= (unsigned __int64)Address
          || (v195 = *(_DWORD *)(v506 + 24 * v179 + 16), (unsigned int)(v195 - 48) >= 0xA)
          && (v195 & 0xFFFFFFDF) - 65 >= 0x1A )
        {
          if ( v189 >= (unsigned __int64)Address )
            sub_1419390C3(v189, Address, &off_141A718F0);
          v196 = *v367;
          v197 = *v367 - v511;
          if ( *v367 < v511
            || v196 > v516
            || (v198 = *(_QWORD *)(v506 + 24 * v189 + 8), v516 != v511)
            && (v511 && v515->m128i_i8[v511] <= -65 || v196 != v516 && v515->m128i_i8[v196] <= -65) )
          {
            sub_141938F40((_DWORD)v515, v516, v511, v196, (__int64)&off_141A71400);
          }
          if ( v197 > v478.m128i_i64[0] - v512 )
          {
            sub_14190D590((unsigned int)&v478, v512, v197, 1, 1);
            v512 = v479.m128i_i64[0];
            if ( v196 != v511 )
LABEL_246:
              sub_1418F44E0((__m128i *)(v512 + v478.m128i_i64[1]), (const __m128i *)((char *)v515 + v511), v197);
          }
          else if ( v196 != v511 )
          {
            goto LABEL_246;
          }
          v479.m128i_i64[0] = v197 + v512;
          v199 = v197 + v512;
          if ( v492 > v478.m128i_i64[0] - (v197 + v512) )
          {
            sub_14190D590((unsigned int)&v478, v197 + v512, v492, 1, 1);
            v199 = v479.m128i_i64[0];
LABEL_249:
            sub_1418F44E0((__m128i *)(v199 + v478.m128i_i64[1]), v364, v492);
          }
          else if ( v492 )
          {
            goto LABEL_249;
          }
          v512 = v492 + v199;
          v479.m128i_i64[0] = v492 + v199;
          v511 = v198;
          v178 = v506;
          a2 = v507;
          goto LABEL_193;
        }
LABEL_195:
        ;
      }
      v200 = v511;
      if ( v511 )
      {
        if ( v516 <= v511 )
        {
          if ( v516 != v511 )
            goto LABEL_446;
        }
        else if ( v515->m128i_i8[v511] <= -65 )
        {
LABEL_446:
          sub_141938F40((_DWORD)v515, v516, v511, v516, (__int64)&off_141A713E8);
        }
      }
      v201 = v516 - v511;
      if ( v516 - v511 > v478.m128i_i64[0] - v512 )
      {
        sub_14190D590((unsigned int)&v478, v512, v516 - v511, 1, 1);
        v512 = v479.m128i_i64[0];
        v200 = v511;
        v202 = (char *)v478.m128i_i64[1];
        if ( v516 != v511 )
LABEL_261:
          sub_1418F44E0((__m128i *)&v202[v512], (const __m128i *)((char *)v515 + v200), v201);
      }
      else
      {
        v202 = (char *)v478.m128i_i64[1];
        if ( v516 != v511 )
          goto LABEL_261;
      }
      Address = v202;
      v157 = v478.m128i_i64[0];
      if ( v495.m128i_i64[0] )
        sub_140001660(v506, 24 * v495.m128i_i64[0], 8);
      v175 = v201 + v512;
      v174 = v505;
      v177 = *(_QWORD *)v502;
      if ( *(_QWORD *)v502 )
LABEL_265:
        sub_140001660(*(_QWORD *)&v502[8], 4 * v177, 4);
LABEL_266:
      v516 = v175;
      v156 = v510;
      v159 = (const __m128i *)v561;
      if ( v174 )
      {
        sub_140001660(v515, v174, 1);
        v159 = (const __m128i *)v561;
        v156 = v510;
      }
      goto LABEL_171;
    }
  }
  if ( v363 )
    sub_140001660(v491, 8 * v363, 8);
  v368[0] = v161;
  v368[1] = v515;
  v203 = v516;
  v368[2] = v516;
  HIDWORD(_RAX) = *(_DWORD *)&v474[12];
  if ( *(_QWORD *)&v474[8] )
  {
    v561 = *(_QWORD *)&v474[8];
    v205 = *(_QWORD *)&v474[24];
    if ( *(_QWORD *)&v474[24] )
    {
      v206 = *(_QWORD *)v474;
      v207 = (const __m128i *)(*(_QWORD *)v474 + 16LL);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v474));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v209 = _mm_load_si128(v207);
            v206 -= 384;
            ++v207;
            _R15D = _mm_movemask_epi8(v209) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v210 = -3 * _RAX;
        v211 = *(_QWORD *)(v206 + 8 * v210 - 24);
        if ( v211 )
          sub_140001660(*(_QWORD *)(v206 + 8 * v210 - 16), v211, 1);
        --v205;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v205 );
    }
    v212 = (24 * v561 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v212 + v561 != -17 )
      sub_140001660(*(_QWORD *)v474 - v212, v212 + v561 + 17, 16);
  }
  if ( (_QWORD)v484 )
    sub_140001660(*((_QWORD *)&v484 + 1), v484, 1);
  v575 = 1;
  v574 = 1;
  sub_140F9DD00(
    (__int64)v369,
    v448.m128i_i64[1],
    (__int64)v449,
    (int)"{text}{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    6u,
    v515,
    v203);
  v561 = *(_QWORD *)&v369[8];
  sub_140F9DD00(
    (__int64)&v420,
    *(__int64 *)&v369[8],
    *(__int64 *)&v369[16],
    (int)"{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    0xAu,
    v509,
    v508);
  v538 = v420.m128i_i64[1];
  sub_140F9DD00(
    (__int64)v474,
    v420.m128i_i64[1],
    v421.m128i_i64[0],
    (int)"{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    0xBu,
    (const __m128i *)v499,
    v500);
  if ( v420.m128i_i64[0] )
    sub_140001660(v538, v420.m128i_i64[0], 1);
  if ( *(_QWORD *)v369 )
    sub_140001660(v561, *(_QWORD *)v369, 1);
  *(_QWORD *)v369 = 0;
  *(_QWORD *)&v369[8] = *(_QWORD *)&v474[16];
  Address = *(PVOID *)&v474[8];
  *(_OWORD *)&v369[16] = *(_OWORD *)&v474[8];
  *(_QWORD *)&v369[32] = 0;
  *(_QWORD *)&v369[40] = *(_QWORD *)&v474[16];
  *(_QWORD *)&v369[48] = 0xA0000000ALL;
  v369[56] = 1;
  *(_WORD *)&v369[64] = 0;
  sub_1403E1650(&v420, v369);
  v213 = v420.m128i_i64[1];
  v214 = v421.m128i_i64[0];
  if ( v421.m128i_i64[0] )
  {
    while ( 1 )
    {
      sub_140E91160(*(_QWORD *)(v213 + 16 * v214 - 16), *(_QWORD *)(v213 + 16 * v214 - 8));
      if ( v215 )
        break;
      v216 = (v214 == 0) + v214 - 1;
      v217 = v214 < 2;
      v214 = v216;
      if ( v217 )
      {
        LODWORD(v214) = 0;
        goto LABEL_302;
      }
    }
    v216 = v214;
  }
  else
  {
    v216 = 0;
    LODWORD(v214) = 0;
  }
LABEL_302:
  v421.m128i_i64[0] = v216;
  v519 = v213;
  sub_140D1F3D0((unsigned int)v369, v213, v214, (unsigned int)&unk_141A6C878, 1);
  v225 = *(_OWORD *)v369;
  v226 = *(_QWORD *)&v369[16];
  if ( v420.m128i_i64[0] )
    sub_140001660(v519, 16 * v420.m128i_i64[0], 8);
  v227 = v520;
  if ( *(_QWORD *)v474 )
    sub_140001660(Address, *(_QWORD *)v474, 1);
  nullsub_1(v224);
  v228 = sub_140001650(9, 1);
  v561 = v225 >> 64;
  v538 = v225;
  if ( !v228 )
  {
    v535 = 1;
    v534 = 1;
    v533 = 1;
    sub_141938D2B(1, 9);
  }
  v229 = v228;
  *(_QWORD *)v228 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v228 + 8) = 100;
  *(_QWORD *)&v503 = 9;
  *((_QWORD *)&v503 + 1) = v228;
  v504 = 9;
  *(_QWORD *)&v497 = -1;
  if ( BYTE1(v451) && (sub_140E91160(v448.m128i_i64[1], v449), v231) )
  {
    if ( v227[13].m128i_i64[0] == -1 )
    {
      nullsub_1(v230);
      v258 = (void *)sub_140001650(11, 1);
      if ( !v258 )
      {
        v588 = 1;
        v587 = 1;
        v586 = 1;
        sub_141938D2B(1, 11);
      }
      v259 = v258;
      qmemcpy(v258, "llm_missing", 11);
      sub_140001660(v229, 9, 1);
      *(_QWORD *)&v503 = 11;
      *((_QWORD *)&v503 + 1) = v259;
      v504 = 11;
      nullsub_1(v260);
      v261 = (__m128i *)sub_140001650(46, 1);
      if ( !v261 )
      {
        v588 = 1;
        v587 = 1;
        v586 = 1;
        sub_141938D2B(1, 46);
      }
      qmemcpy(&v261[1], "ssing; used raw dictation text", 30);
      *v261 = _mm_loadu_si128((const __m128i *)&xmmword_141A712B0);
      *(_QWORD *)&v497 = 46;
      *((_QWORD *)&v497 + 1) = v261;
      v498 = 46;
      v588 = 1;
      v587 = 1;
      v586 = 1;
      LOBYTE(v261) = 1;
      LODWORD(v513) = (_DWORD)v261;
      sub_1416AC440(&v486, v368);
    }
    else
    {
      v588 = 1;
      v587 = 1;
      v586 = 1;
      if ( (unsigned __int8)sub_1402B6160(&v227[13]) )
      {
        v588 = 1;
        v587 = 1;
        v586 = 1;
        if ( v513 )
          sub_1402A0090(v369, (const __m128i *)v227[13].m128i_i64, (const __m128i *)v561, v226, v513, a5);
        else
          sub_140351060((__int64)v369, (const __m128i *)v227[13].m128i_i64, (const __m128i *)v561, v226);
        v513 = *(_QWORD *)v369;
        if ( *(_QWORD *)v369 == 1 )
        {
          v518 = *(_QWORD *)&v369[8];
          v306 = *(_QWORD *)&v369[24];
          Address = *(PVOID *)&v369[16];
          nullsub_1(v233);
          v519 = sub_140001650(9, 1);
          if ( !v519 )
            sub_141938D2B(1, 9);
          v307 = v519;
          *(_QWORD *)v519 = 0x6F7272655F6D6C6CLL;
          *(_BYTE *)(v307 + 8) = 114;
          sub_140001660(v229, 9, 1);
          *(_QWORD *)&v503 = 9;
          *((_QWORD *)&v503 + 1) = v307;
          v504 = 9;
          *(_QWORD *)&v497 = v518;
          *((_QWORD *)&v497 + 1) = Address;
          v498 = v306;
          v308 = sub_1416AC440(&v486, v368);
        }
        else
        {
          v309 = *(_QWORD *)&v369[16];
          sub_140E91160(*(_QWORD *)&v369[16], *(_QWORD *)&v369[24]);
          if ( v311 )
          {
            LODWORD(v308) = *(_DWORD *)&v369[24];
            v487 = *(_QWORD *)&v369[24];
            v486 = _mm_loadu_si128((const __m128i *)&v369[8]);
          }
          else
          {
            nullsub_1(v310);
            v318 = sub_140001650(9, 1);
            if ( !v318 )
            {
              v488 = v309;
              sub_141938D2B(1, 9);
            }
            v319 = v318;
            *(_QWORD *)v318 = 0x6F7272655F6D6C6CLL;
            *(_BYTE *)(v318 + 8) = 114;
            sub_140001660(v229, 9, 1);
            *(_QWORD *)&v503 = 9;
            *((_QWORD *)&v503 + 1) = v319;
            v504 = 9;
            nullsub_1(v320);
            v321 = sub_140001650(27, 1);
            if ( !v321 )
            {
              v488 = v309;
              sub_141938D2B(1, 27);
            }
            *(_OWORD *)(v321 + 11) = *(__int128 *)((char *)&xmmword_141A6EA72 + 11);
            *(__m128i *)v321 = _mm_loadu_si128((const __m128i *)&xmmword_141A6EA72);
            *(_QWORD *)&v497 = 27;
            *((_QWORD *)&v497 + 1) = v321;
            v498 = 27;
            v488 = v309;
            v308 = sub_1416AC440(&v486, v368);
            if ( *(_QWORD *)&v369[8] )
              v308 = sub_140001660(v309, *(_QWORD *)&v369[8], 1);
          }
        }
        LOBYTE(v308) = 1;
        LODWORD(v513) = v308;
      }
      else
      {
        nullsub_1(v232);
        v265 = (void *)sub_140001650(11, 1);
        if ( !v265 )
        {
          v588 = 1;
          v587 = 1;
          v586 = 1;
          sub_141938D2B(1, 11);
        }
        v266 = v265;
        qmemcpy(v265, "llm_missing", 11);
        sub_140001660(v229, 9, 1);
        *(_QWORD *)&v503 = 11;
        *((_QWORD *)&v503 + 1) = v266;
        v504 = 11;
        nullsub_1(v267);
        v268 = (__m128i *)sub_140001650(49, 1);
        if ( !v268 )
        {
          v588 = 1;
          v587 = 1;
          v586 = 1;
          sub_141938D2B(1, 49);
        }
        qmemcpy(&v268[1], "complete; used raw dictation text", 33);
        *v268 = _mm_loadu_si128((const __m128i *)&xmmword_141A71263);
        *(_QWORD *)&v497 = 49;
        *((_QWORD *)&v497 + 1) = v268;
        v498 = 49;
        v588 = 1;
        v587 = 1;
        v586 = 1;
        LOBYTE(v268) = 1;
        LODWORD(v513) = (_DWORD)v268;
        sub_1416AC440(&v486, v368);
      }
    }
  }
  else
  {
    v486 = (__m128i)v225;
    v487 = v226;
    LODWORD(v513) = 0;
  }
  v573 = 1;
  v572 = 1;
  sub_141568C20(&v354);
  *(_QWORD *)v474 = 0;
  *(_QWORD *)&v474[8] = 1;
  *(_QWORD *)&v474[16] = 0;
  *(_QWORD *)&v369[16] = 1610612768;
  *(_QWORD *)v369 = v474;
  *(_QWORD *)&v369[8] = &off_141A72708;
  if ( (unsigned __int8)sub_141569D80(&v354, v369) )
    sub_141939040(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v514,
      (unsigned int)&unk_141A6D618,
      (__int64)&off_141A727C0);
  v519 = *(_QWORD *)&v474[8];
  Address = *(PVOID *)v474;
  if ( *(_QWORD *)&v474[16] <= 8u )
  {
    if ( *(_QWORD *)&v474[16] != 8 )
LABEL_317:
      sub_141938F40(*(_DWORD *)&v474[8], *(_DWORD *)&v474[16], 0, 8, (__int64)&off_141A712E0);
  }
  else if ( *(char *)(*(_QWORD *)&v474[8] + 8LL) <= -65 )
  {
    goto LABEL_317;
  }
  v478.m128i_i64[0] = *(_QWORD *)&v474[8];
  v478.m128i_i64[1] = 8;
  *(_QWORD *)v474 = &v478;
  *(_QWORD *)&v474[8] = sub_140186EE0;
  sub_1416ABFD0(v369, &unk_141A712F8, v474);
  if ( Address )
    sub_140001660(v519, Address, 1);
  v519 = *(_QWORD *)&v369[8];
  Address = *(PVOID *)v369;
  v234 = *(_QWORD *)&v369[16];
  v532 = 1;
  v531 = 1;
  sub_1416AC440(v502, v443);
  v530 = 1;
  v529 = 1;
  sub_1416AC440(&v495, &v444);
  v235 = BYTE1(v451);
  v528 = 1;
  v527 = 1;
  sub_1416AC440(&v478, &v448);
  nullsub_1(v236);
  v237 = v537;
  v238 = (__m128i *)sub_140001650(v537, 1);
  if ( !v238 )
  {
    v526 = 1;
    v525 = 1;
    sub_141938D2B(1, v237);
  }
  v518 = (unsigned __int64)v238;
  sub_1418F44E0(v238, (const __m128i *)v517, v237);
  v524 = 1;
  v523 = 1;
  sub_1416AC440(&v354, &v486);
  v522 = 1;
  sub_1416AC440(v474, &v503);
  if ( (_QWORD)v497 == -1 )
  {
    v517 = -1;
  }
  else
  {
    v521 = 1;
    sub_1416AC440(v369, &v497);
    v516 = *(_QWORD *)&v369[8];
    v517 = *(_QWORD *)v369;
    v229 = *(_QWORD *)&v369[16];
  }
  v242 = _mm_loadu_si128(v520);
  v510 = (const __m128i *)v359[0];
  v471 = v359[1];
  v243 = v359[2];
  LODWORD(v462) = sub_141683E80(v240, v239, v241);
  DWORD1(v462) = v244;
  sub_141683E30(v369, &v462, 3577643008LL, 27111902);
  if ( v369[0] )
    v245 = 0;
  else
    v245 = *(_QWORD *)&v369[8];
  v421.m128i_i64[0] = (__int64)Address;
  v421.m128i_i64[1] = v519;
  v422.m256i_i64[0] = v234;
  v422.m256i_i64[3] = *(_QWORD *)&v502[16];
  *(_OWORD *)&v422.m256i_u64[1] = *(_OWORD *)v502;
  *(_QWORD *)v424 = v496;
  v423 = v495;
  v442 = v235;
  v425 = v479.m128i_i64[0];
  *(__m128i *)&v424[8] = v478;
  v426[0] = v537;
  v246 = v518;
  v426[1] = v518;
  v426[2] = v537;
  v427 = v354;
  v428 = v355.m128i_i64[0];
  v429[0] = v508;
  v429[1] = v509;
  v429[2] = v508;
  v430[0] = v500;
  v430[1] = v499;
  v430[2] = v500;
  v431[0] = v489;
  v431[1] = v501;
  v431[2] = v489;
  v432[0] = v490;
  v432[1] = v470;
  v432[2] = v490;
  v434 = *(_QWORD *)&v474[16];
  v433 = _mm_loadu_si128((const __m128i *)v474);
  v439[0] = v517;
  v439[1] = v516;
  v439[2] = v229;
  v435[0] = v466;
  v435[1] = v458;
  v435[2] = v418;
  v436[0] = v467;
  v436[1] = v459;
  v436[2] = v361;
  v437[0] = v468;
  v437[1] = v460;
  v437[2] = v362;
  v438[0] = v469;
  v438[1] = v461;
  v438[2] = v360;
  v420 = v242;
  v440[0] = v510;
  v440[1] = v471;
  v440[2] = v243;
  v441 = v245;
  sub_14103FB60(v369);
  v247 = *(_OWORD *)v369;
  v248 = v369[16];
  if ( *(_QWORD *)v369 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v369[80];
    v249 = _mm_loadu_si128((const __m128i *)&v369[17]);
    v250 = _mm_loadu_si128((const __m128i *)&v369[33]);
    v251 = _mm_loadu_si128((const __m128i *)&v369[49]);
    *(__m128i *)(a1 + 73) = _mm_loadu_si128((const __m128i *)&v369[65]);
    *(__m128i *)(a1 + 57) = v251;
    *(__m128i *)(a1 + 41) = v250;
    *(__m128i *)(a1 + 25) = v249;
    *(_OWORD *)(a1 + 8) = v247;
    *(_BYTE *)(a1 + 24) = v248;
    *(_QWORD *)a1 = 2;
    goto LABEL_367;
  }
  LOBYTE(v519) = v369[16];
  Address = *(PVOID *)&v369[8];
  sub_14103B320(v369);
  v478 = *(__m128i *)&v369[8];
  v479 = *(__m128i *)&v369[24];
  v480 = *(__m128i *)&v369[40];
  v481 = *(__m128i *)&v369[56];
  v482 = *(_OWORD *)&v369[72];
  v483 = *(__m128i *)&v369[88];
  if ( *(_QWORD *)v369 == -1 )
  {
    *(__m128i *)(a1 + 88) = v483;
    *(_OWORD *)(a1 + 72) = v482;
    v262 = _mm_load_si128(&v478);
    v263 = _mm_load_si128(&v479);
    v264 = _mm_load_si128(&v480);
    *(__m128i *)(a1 + 56) = _mm_load_si128(&v481);
    *(__m128i *)(a1 + 40) = v264;
    *(__m128i *)(a1 + 24) = v263;
    *(__m128i *)(a1 + 8) = v262;
    *(_QWORD *)a1 = 2;
    goto LABEL_363;
  }
  v477 = v371;
  v476 = v370;
  v253 = _mm_load_si128(&v479);
  v254 = _mm_load_si128(&v480);
  v255 = _mm_load_si128(&v481);
  *(__m128i *)&v474[8] = v478;
  *(__m128i *)&v474[24] = v253;
  *(__m128i *)&v474[40] = v254;
  *(__m128i *)&v474[56] = v255;
  *(_OWORD *)&v474[72] = v482;
  v475 = _mm_load_si128(&v483);
  *(_QWORD *)v474 = *(_QWORD *)v369;
  sub_1416AC440(&v352, &v421);
  sub_1416AC440(&v350, &v422.m256i_u64[1]);
  sub_1416AC440(&v348, &v423);
  v256 = v442;
  sub_1416AC440(&v346, &v424[8]);
  sub_1416AC440(&v344, v426);
  sub_1416AC440(&v342, &v427);
  sub_1416AC440(&v340, v429);
  sub_1416AC440(&v338, v430);
  sub_1416AC440(&v416, v431);
  sub_1416AC440(&v414, v432);
  sub_1416AC440(&v484, &v433);
  if ( v439[0] == -1 )
  {
    v537 = -1;
  }
  else
  {
    sub_1416AC440(&v478, v439);
    v517 = v478.m128i_i64[1];
    v537 = v478.m128i_i64[0];
    v246 = v479.m128i_i64[0];
  }
  sub_1416AC440(&v452, v435);
  sub_1416AC440(&v462, v436);
  sub_1416AC440(v502, v437);
  sub_1416AC440(&v495, v438);
  v269 = v420;
  if ( v440[0] == -1 )
  {
    v270 = -1;
  }
  else
  {
    sub_1416AC440(&v478, v440);
    v270 = v478.m128i_i64[0];
    v337 = _mm_loadu_si128((const __m128i *)&v478.m128i_u64[1]);
  }
  *(_OWORD *)&v369[16] = v352;
  *(_QWORD *)&v369[32] = v353;
  *(_OWORD *)&v369[40] = v350;
  *(_QWORD *)&v369[56] = v351;
  *(_OWORD *)&v369[64] = v348;
  *(_QWORD *)&v369[80] = v349;
  v397 = v256;
  *(_OWORD *)&v369[88] = v346;
  v370.m256i_i64[0] = v347;
  v370.m256i_i64[3] = v345;
  *(_OWORD *)&v370.m256i_u64[1] = v344;
  v371 = v342;
  v372 = v343;
  v373 = v340;
  v374 = v341;
  v375 = v338;
  v376 = v339;
  v378 = v417;
  v377 = v416;
  v380 = v415;
  v379 = v414;
  v382 = v485;
  v381 = v484;
  v391 = v537;
  v392 = v517;
  v393 = v246;
  v383 = v452;
  v384 = v453;
  v386 = v463;
  v385 = v462;
  v388 = *(_QWORD *)&v502[16];
  v387 = *(_OWORD *)v502;
  v390 = v496;
  v389 = v495;
  *(__m128i *)v369 = v269;
  v394 = v270;
  v395 = _mm_load_si128(&v337);
  v396 = v441;
  v271 = v475.m128i_i64[0];
  if ( v475.m128i_i64[0] == *(_QWORD *)&v474[72] )
    sub_14190FC70(&v474[72]);
  v272 = *(__m128i **)&v474[80];
  if ( v271 )
  {
    sub_1418F44E0((__m128i *)(*(_QWORD *)&v474[80] + 440LL), *(const __m128i **)&v474[80], 440 * v271);
    sub_1418F44E0(v272, (const __m128i *)v369, 0x1B8u);
    v475.m128i_i64[0] = v271 + 1;
    if ( v271 >= 0x27 )
    {
      v517 = v271 - 39;
      v274 = v272 + 1100;
      v475.m128i_i64[0] = 40;
      v537 = 0;
      v518 = (unsigned __int64)&v272[1100];
      while ( v517 != v537 )
      {
        ++v537;
        v276 = (__m128i *)((char *)v274 + 440);
        sub_14038B0C0(v274);
        v274 = v276;
      }
    }
  }
  else
  {
    sub_1418F44E0(*(__m128i **)&v474[80], (const __m128i *)v369, 0x1B8u);
    v475.m128i_i64[0] = 1;
  }
  LODWORD(v477) = 1;
  v478.m128i_i32[0] = sub_141683E80(v274, v273, v275);
  v478.m128i_i32[1] = v277;
  sub_141683E30(v369, &v478, 3577643008LL, 27111902);
  if ( v369[0] )
    v278 = 0;
  else
    v278 = *(_QWORD *)&v369[8];
  v476.m256i_i64[3] = v278;
  sub_14102FC50(v474);
  sub_14103CBF0(v369, a2, v474);
  if ( *(_DWORD *)v369 == -1 )
  {
    sub_14102FA30(&v354, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), v474);
    sub_140FA5420((__int64)v474);
    if ( (v519 & 1) == 0 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v287) )
      *((_BYTE *)Address + 1) = 1;
    v288 = Address;
    v289 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v289 == 2 )
      WakeByAddressSingle(v288);
    v399 = v487;
    v398 = v486;
    sub_1418F44E0((__m128i *)v369, &v420, 0x1B8u);
    v408 = v503;
    v409 = v504;
    v410 = v497;
    v411 = v498;
    v290 = _mm_loadu_si128(&v355);
    v291 = _mm_loadu_si128(&v356);
    v292 = _mm_loadu_si128(v357);
    v400 = v354;
    v401 = v290;
    v402 = v291;
    v403 = v292;
    v404 = v357[1];
    v405 = v357[2];
    v406 = v357[3];
    v407 = _mm_loadu_si128(&v358);
    sub_1418F44E0((__m128i *)a1, (const __m128i *)v369, 0x280u);
    if ( ((v538 != 0) & (unsigned __int8)v513) != 0 )
      sub_140001660(v561, v538, 1);
    if ( v505 )
      sub_140001660(v515, v505, 1);
    sub_140196D20(v443);
    v570 = 0;
    v569 = 0;
    v568 = 0;
    v567 = 0;
    v566 = 0;
    v565 = 0;
    v564 = 0;
    v563 = 0;
    v562 = 0;
    sub_140FA5420((__int64)&v328);
    v293 = v520;
    v294 = v520[1].m128i_i64[0];
    if ( v294 )
      sub_140001660(v520[1].m128i_i64[1], v294, 1);
    v295 = v293[2].m128i_i64[1];
    if ( v295 )
      sub_140001660(v293[3].m128i_i64[0], v295, 1);
    v296 = v293[10].m128i_i64[0];
    if ( v296 != -1 && v296 )
      sub_140001660(v293[10].m128i_i64[1], v296, 1);
    v297 = v293[11].m128i_i64[1];
    if ( v297 != -1 && v297 )
      sub_140001660(v293[12].m128i_i64[0], v297, 1);
    if ( v293[13].m128i_i64[0] != -1 )
      sub_140196D20(&v293[13]);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v369[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v369[64];
    v279 = _mm_loadu_si128((const __m128i *)v369);
    v280 = _mm_loadu_si128((const __m128i *)&v369[16]);
    v281 = _mm_loadu_si128((const __m128i *)&v369[32]);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)&v369[48]);
    *(__m128i *)(a1 + 40) = v281;
    *(__m128i *)(a1 + 24) = v280;
    *(__m128i *)(a1 + 8) = v279;
    *(_QWORD *)a1 = 2;
    sub_140FA5420((__int64)v474);
LABEL_363:
    if ( (v519 & 1) == 0 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v252) )
      *((_BYTE *)Address + 1) = 1;
    v282 = Address;
    v283 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v283 == 2 )
      WakeByAddressSingle(v282);
LABEL_367:
    sub_14038B0C0(&v420);
    if ( v486.m128i_i64[0] )
      sub_140001660(v486.m128i_i64[1], v486.m128i_i64[0], 1);
    v284 = v505;
    v285 = v538;
    v286 = (const __m128i *)v561;
    if ( (_QWORD)v497 != -1 && (_QWORD)v497 )
      sub_140001660(*((_QWORD *)&v497 + 1), v497, 1);
    if ( (_QWORD)v503 )
      sub_140001660(*((_QWORD *)&v503 + 1), v503, 1);
    if ( ((v285 != 0) & (unsigned __int8)v513) != 0 )
      sub_140001660(v286, v285, 1);
    if ( v284 )
      sub_140001660(v515, v284, 1);
    if ( *(_QWORD *)v443 )
      sub_140001660(*(_QWORD *)&v443[8], *(_QWORD *)v443, 1);
    if ( v444.m128i_i64[0] )
      sub_140001660(v444.m128i_i64[1], v444.m128i_i64[0], 1);
    if ( v446.m128i_i64[0] )
      sub_140001660(v446.m128i_i64[1], v446.m128i_i64[0], 1);
    if ( v448.m128i_i64[0] )
      sub_140001660(v448.m128i_i64[1], v448.m128i_i64[0], 1);
    v27 = 0;
LABEL_23:
    v570 = v27;
    v569 = v27;
    v568 = v27;
    v567 = v27;
    v566 = v27;
    v565 = v27;
    v564 = v27;
    v563 = v27;
    v562 = v27;
    sub_140FA5420((__int64)&v328);
LABEL_24:
    v41 = v520;
    v42 = v520[1].m128i_i64[0];
    if ( v42 )
      sub_140001660(v520[1].m128i_i64[1], v42, 1);
    v43 = v41[2].m128i_i64[1];
    if ( v43 )
      sub_140001660(v41[3].m128i_i64[0], v43, 1);
    if ( v27 )
    {
      v44 = v41[4].m128i_i64[0];
      if ( v44 != -1 && v44 )
        sub_140001660(v41[4].m128i_i64[1], v44, 1);
      v45 = v41[5].m128i_i64[1];
      if ( v45 != -1 && v45 )
        sub_140001660(v41[6].m128i_i64[0], v45, 1);
      v46 = v41[7].m128i_i64[0];
      if ( v46 != -1 && v46 )
        sub_140001660(v41[7].m128i_i64[1], v46, 1);
      v47 = v41[8].m128i_i64[1];
      if ( v47 != -1 && v47 )
        sub_140001660(v41[9].m128i_i64[0], v47, 1);
    }
    v48 = v41[10].m128i_i64[0];
    if ( v48 != -1 && v48 )
      sub_140001660(v41[10].m128i_i64[1], v48, 1);
    v49 = v41[11].m128i_i64[1];
    if ( v49 != -1 && v49 )
      sub_140001660(v41[12].m128i_i64[0], v49, 1);
    v50 = v41[13].m128i_i64[0];
    if ( v50 != -1 )
    {
      if ( v50 )
        sub_140001660(v41[13].m128i_i64[1], v50, 1);
      v51 = v41[14].m128i_i64[1];
      if ( v51 )
        sub_140001660(v41[15].m128i_i64[0], v51, 1);
      v52 = v41[16].m128i_i64[0];
      if ( v52 )
        sub_140001660(v41[16].m128i_i64[1], v52, 1);
      v53 = v41[17].m128i_i64[1];
      if ( v53 )
        sub_140001660(v41[18].m128i_i64[0], v53, 1);
    }
    if ( v27 )
    {
      v54 = v41[19].m128i_i64[0];
      if ( v54 != -1 && v54 )
        sub_140001660(v41[19].m128i_i64[1], v54, 1);
      v55 = v41[20].m128i_i64[1];
      if ( v55 != -1 && v55 )
        sub_140001660(v41[21].m128i_i64[0], v55, 1);
      v56 = v41[22].m128i_i64[0];
      if ( v56 != -1 && v56 )
        sub_140001660(v41[22].m128i_i64[1], v56, 1);
      v57 = v41[23].m128i_i64[1];
      if ( v57 != -1 && v57 )
        sub_140001660(v41[24].m128i_i64[0], v57, 1);
      v58 = v41[25].m128i_i64[0];
      if ( v58 != -1 && v58 )
        sub_140001660(v41[25].m128i_i64[1], v58, 1);
    }
  }
  return a1;
}
