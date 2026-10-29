// win 1.2.7 latest-exe | module src/core/voice/workspace.rs | ea 0x1408dd000 | successor of pre-update 0x14102fe90 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1408DD000(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const __m128i *v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r13
  __m128i v24; // xmm0
  __m128i si128; // xmm1
  __m128i v26; // xmm2
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
  void *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int32 v64; // eax
  char v65; // bl
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  int v72; // edx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // r12
  __int64 v82; // r15
  __int64 v83; // rax
  const __m128i *v84; // rbx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // r12
  __int64 v93; // r15
  __int64 v94; // rax
  const __m128i *v95; // rbx
  __int64 v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // r12
  __int64 v104; // r15
  __int64 v105; // rax
  const __m128i *v106; // rbx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r14
  __int64 v114; // r12
  __int64 v115; // r15
  __int64 v116; // rax
  const __m128i *v117; // rbx
  char *v118; // r14
  __int64 v119; // rcx
  __int64 v120; // rsi
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r13
  __int64 v125; // rcx
  __int64 v126; // r15
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r12
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r15
  __int64 v134; // r12
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  unsigned __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r13
  __int64 v145; // rsi
  __int64 v146; // r13
  __int64 v147; // rcx
  unsigned __int64 v148; // r12
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // rdx
  __m128i v156; // xmm0
  __m128i v157; // xmm1
  _QWORD *v158; // rsi
  unsigned __int64 v159; // r13
  const __m128i *v160; // rdx
  __int64 v161; // r15
  const __m128i *v162; // r12
  _QWORD *v163; // rax
  __int64 v164; // r13
  const __m128i *v165; // rbx
  _QWORD *v166; // r15
  _QWORD *v167; // r14
  _QWORD *v168; // rcx
  _QWORD *v169; // rcx
  __int64 v170; // r8
  __int64 *v171; // rcx
  __int64 v172; // rdx
  unsigned __int64 v173; // r15
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rbx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rbx
  __int64 v180; // r13
  __int64 v181; // rax
  __int64 v182; // rdx
  unsigned __int64 v183; // r13
  unsigned __int64 i; // r15
  int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // rcx
  int v188; // r13d
  int v189; // eax
  unsigned __int64 v190; // r9
  char v191; // r8
  unsigned int *v192; // rdx
  unsigned __int64 v193; // rcx
  unsigned int *v194; // rbx
  unsigned int *v195; // rax
  char v196; // r8
  __int64 v197; // rcx
  unsigned int v198; // r8d
  char v199; // al
  int v200; // eax
  unsigned __int64 v201; // rbx
  unsigned __int64 v202; // rdi
  unsigned __int64 v203; // r15
  __int64 v204; // rdi
  char *v205; // r13
  __int64 v206; // r15
  unsigned __int64 v207; // rdx
  __int64 v209; // rsi
  __int64 v210; // r14
  __int64 v211; // r13
  const __m128i *v212; // rbx
  __m128i v214; // xmm0
  __int64 v215; // rax
  __int64 v216; // rdx
  unsigned __int64 v217; // rax
  __int64 v218; // rsi
  __int64 v219; // r15
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // rbx
  __int64 v223; // r15
  __int64 v224; // rdx
  __int64 v225; // rax
  __int64 v226; // r13
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r14
  __int64 v234; // rsi
  __int64 v235; // r13
  char v236; // r15
  __int64 v237; // rdx
  __int64 v238; // rcx
  PVOID v239; // rbx
  __int64 v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // rbx
  __int64 v245; // rax
  __int64 v246; // r15
  unsigned __int64 v247; // rcx
  __int64 v248; // rax
  __m128i v249; // xmm6
  __int64 v250; // rbx
  int v251; // edx
  __int64 v252; // rax
  __int128 v253; // kr40_16
  char v254; // dl
  __m128i v255; // xmm0
  __m128i v256; // xmm1
  __m128i v257; // xmm2
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __m128i v261; // xmm1
  __m128i v262; // xmm2
  __m128i v263; // xmm3
  char v264; // bl
  __int64 v265; // rcx
  void *v266; // rax
  void *v267; // r14
  __int64 v268; // rdx
  __int64 v269; // rcx
  __m128i *v270; // rax
  __m128i v271; // xmm0
  __m128i v272; // xmm1
  __m128i v273; // xmm2
  void *v274; // rax
  void *v275; // r14
  __int64 v276; // rdx
  __int64 v277; // rcx
  __m128i *v278; // rax
  __m128i v279; // kr50_16
  __int64 v280; // rax
  unsigned __int64 v281; // r14
  __int64 v282; // rbx
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // rbx
  unsigned __int64 v287; // r14
  __int32 v288; // edx
  __int64 v289; // rax
  __m128i v290; // xmm0
  __m128i v291; // xmm1
  __m128i v292; // xmm2
  PVOID v293; // rcx
  char v294; // al
  __int64 v295; // rdi
  __int64 v296; // rbx
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  PVOID v300; // rcx
  char v301; // al
  __m128i v302; // xmm1
  __m128i v303; // xmm2
  __m128i v304; // xmm3
  const __m128i *v305; // rdi
  __int64 v306; // rdx
  __int64 v307; // rdx
  __int64 v308; // rdx
  __int64 v309; // rdx
  __int64 v310; // rcx
  __m128i v311; // xmm0
  __m128i v312; // xmm1
  __m128i v313; // xmm2
  __m128i v314; // xmm3
  __m128i v315; // xmm4
  __m128i v316; // xmm5
  __m128i v317; // xmm6
  __int64 v318; // rbx
  __int64 v319; // r14
  _BYTE *v320; // rax
  __int64 v321; // r14
  __int64 v322; // rcx
  __int64 v323; // rdx
  __int64 v324; // rdx
  __m128i v325; // xmm0
  __m128i v326; // xmm1
  __m128i v327; // xmm2
  __m128i v328; // xmm3
  __m128i v329; // xmm4
  __int64 v330; // rax
  __int64 v331; // r15
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // rax
  __int64 v335; // rbx
  __int64 v336; // rbx
  __int64 v337; // rax
  __int64 v338; // rcx
  __int64 v339; // rax
  __int64 v340; // rcx
  __int64 v341; // [rsp+40h] [rbp-40h] BYREF
  __m128i v342; // [rsp+48h] [rbp-38h]
  __m128i v343; // [rsp+58h] [rbp-28h]
  __m128i v344; // [rsp+68h] [rbp-18h]
  __m128i v345; // [rsp+78h] [rbp-8h]
  __m128i v346; // [rsp+88h] [rbp+8h]
  __m128i v347; // [rsp+98h] [rbp+18h]
  __m256i v348; // [rsp+A8h] [rbp+28h]
  __int64 v349; // [rsp+C8h] [rbp+48h]
  __m128i v350; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v351; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v352; // [rsp+F0h] [rbp+70h]
  __int128 v353; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v354; // [rsp+108h] [rbp+88h]
  __int128 v355; // [rsp+110h] [rbp+90h] BYREF
  __int64 v356; // [rsp+120h] [rbp+A0h]
  __int128 v357; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v358; // [rsp+138h] [rbp+B8h]
  __int128 v359; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v360; // [rsp+150h] [rbp+D0h]
  __int128 v361; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v362; // [rsp+168h] [rbp+E8h]
  __int128 v363; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v364; // [rsp+180h] [rbp+100h]
  __int128 v365; // [rsp+188h] [rbp+108h] BYREF
  __int64 v366; // [rsp+198h] [rbp+118h]
  __m128i v367; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v368; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v369; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v370[4]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v371; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v372[3]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v373; // [rsp+238h] [rbp+1B8h]
  __int64 v374; // [rsp+240h] [rbp+1C0h]
  __int64 v375; // [rsp+248h] [rbp+1C8h]
  __int64 v376; // [rsp+250h] [rbp+1D0h]
  __int64 v377; // [rsp+258h] [rbp+1D8h]
  unsigned __int64 *v378; // [rsp+260h] [rbp+1E0h]
  _QWORD v379[3]; // [rsp+268h] [rbp+1E8h] BYREF
  _BYTE v380[104]; // [rsp+280h] [rbp+200h] BYREF
  __m256i v381; // [rsp+2E8h] [rbp+268h]
  __int128 v382; // [rsp+308h] [rbp+288h]
  __int64 v383; // [rsp+318h] [rbp+298h]
  __int128 v384; // [rsp+320h] [rbp+2A0h]
  __int64 v385; // [rsp+330h] [rbp+2B0h]
  __int128 v386; // [rsp+338h] [rbp+2B8h]
  __int64 v387; // [rsp+348h] [rbp+2C8h]
  __int128 v388; // [rsp+350h] [rbp+2D0h]
  __int64 v389; // [rsp+360h] [rbp+2E0h]
  __int128 v390; // [rsp+368h] [rbp+2E8h]
  __int64 v391; // [rsp+378h] [rbp+2F8h]
  __int128 v392; // [rsp+380h] [rbp+300h]
  unsigned __int64 v393; // [rsp+390h] [rbp+310h]
  __int128 v394; // [rsp+398h] [rbp+318h]
  unsigned __int64 v395; // [rsp+3A8h] [rbp+328h]
  __int128 v396; // [rsp+3B0h] [rbp+330h]
  unsigned __int64 v397; // [rsp+3C0h] [rbp+340h]
  __int128 v398; // [rsp+3C8h] [rbp+348h]
  __int64 v399; // [rsp+3D8h] [rbp+358h]
  __m128i v400; // [rsp+3E0h] [rbp+360h]
  __int64 v401; // [rsp+3F0h] [rbp+370h]
  __m128i v402; // [rsp+3F8h] [rbp+378h]
  __int64 v403; // [rsp+408h] [rbp+388h]
  __int64 v404; // [rsp+410h] [rbp+390h]
  __m128i v405; // [rsp+418h] [rbp+398h]
  __int64 v406; // [rsp+428h] [rbp+3A8h]
  char v407; // [rsp+430h] [rbp+3B0h]
  __m128i v408; // [rsp+438h] [rbp+3B8h]
  __int64 v409; // [rsp+448h] [rbp+3C8h]
  __m128i v410; // [rsp+450h] [rbp+3D0h]
  __m128i v411; // [rsp+460h] [rbp+3E0h]
  __m128i v412; // [rsp+470h] [rbp+3F0h]
  __m128i v413; // [rsp+480h] [rbp+400h]
  __m128i v414; // [rsp+490h] [rbp+410h]
  __m128i v415; // [rsp+4A0h] [rbp+420h]
  __m128i v416; // [rsp+4B0h] [rbp+430h]
  __m128i v417; // [rsp+4C0h] [rbp+440h]
  __int128 v418; // [rsp+4D0h] [rbp+450h]
  __int64 v419; // [rsp+4E0h] [rbp+460h]
  unsigned __int128 v420; // [rsp+4E8h] [rbp+468h]
  __int64 v421; // [rsp+4F8h] [rbp+478h]
  unsigned __int64 v422; // [rsp+508h] [rbp+488h]
  PVOID v423; // [rsp+510h] [rbp+490h]
  __int128 v424; // [rsp+518h] [rbp+498h] BYREF
  __int64 v425; // [rsp+528h] [rbp+4A8h]
  __int128 v426; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v427; // [rsp+540h] [rbp+4C0h]
  __int64 v428; // [rsp+548h] [rbp+4C8h]
  __int64 v429; // [rsp+550h] [rbp+4D0h]
  __int64 v430; // [rsp+558h] [rbp+4D8h]
  __m128i v431; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v432; // [rsp+570h] [rbp+4F0h] BYREF
  __m256i v433; // [rsp+580h] [rbp+500h] BYREF
  __m128i v434; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v435[24]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v436; // [rsp+5C8h] [rbp+548h]
  _QWORD v437[3]; // [rsp+5D0h] [rbp+550h] BYREF
  __m128i v438; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v439; // [rsp+5F8h] [rbp+578h]
  _QWORD v440[3]; // [rsp+600h] [rbp+580h] BYREF
  _QWORD v441[3]; // [rsp+618h] [rbp+598h] BYREF
  _QWORD v442[3]; // [rsp+630h] [rbp+5B0h] BYREF
  _QWORD v443[3]; // [rsp+648h] [rbp+5C8h] BYREF
  __m128i v444; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v445; // [rsp+670h] [rbp+5F0h]
  _QWORD v446[3]; // [rsp+678h] [rbp+5F8h] BYREF
  _QWORD v447[3]; // [rsp+690h] [rbp+610h] BYREF
  _QWORD v448[3]; // [rsp+6A8h] [rbp+628h] BYREF
  _QWORD v449[3]; // [rsp+6C0h] [rbp+640h] BYREF
  _QWORD v450[3]; // [rsp+6D8h] [rbp+658h] BYREF
  _QWORD v451[3]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v452; // [rsp+708h] [rbp+688h]
  char v453; // [rsp+710h] [rbp+690h]
  _BYTE v454[24]; // [rsp+720h] [rbp+6A0h] BYREF
  __m128i v455; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v456; // [rsp+748h] [rbp+6C8h]
  __m128i v457; // [rsp+750h] [rbp+6D0h]
  __int64 v458; // [rsp+760h] [rbp+6E0h]
  __m128i v459; // [rsp+768h] [rbp+6E8h] BYREF
  __int64 v460; // [rsp+778h] [rbp+6F8h]
  __int64 v461; // [rsp+780h] [rbp+700h]
  __int64 v462; // [rsp+788h] [rbp+708h]
  __int128 v463; // [rsp+790h] [rbp+710h] BYREF
  unsigned __int64 v464; // [rsp+7A0h] [rbp+720h]
  unsigned __int64 v465; // [rsp+7A8h] [rbp+728h]
  PVOID v466; // [rsp+7B0h] [rbp+730h]
  unsigned __int64 v467; // [rsp+7B8h] [rbp+738h]
  PVOID v468; // [rsp+7C0h] [rbp+740h]
  __int64 v469; // [rsp+7C8h] [rbp+748h]
  __int64 v470; // [rsp+7D0h] [rbp+750h]
  __int64 v471; // [rsp+7D8h] [rbp+758h]
  __int64 v472; // [rsp+7E0h] [rbp+760h]
  __int128 v473; // [rsp+7E8h] [rbp+768h] BYREF
  unsigned __int64 v474; // [rsp+7F8h] [rbp+778h]
  _BYTE v475[88]; // [rsp+800h] [rbp+780h] BYREF
  __m128i v476; // [rsp+858h] [rbp+7D8h]
  __m256i v477; // [rsp+868h] [rbp+7E8h]
  __int64 v478; // [rsp+888h] [rbp+808h]
  unsigned __int64 v479; // [rsp+898h] [rbp+818h]
  PVOID v480; // [rsp+8A0h] [rbp+820h]
  __int64 v481; // [rsp+8A8h] [rbp+828h]
  __int64 v482; // [rsp+8B0h] [rbp+830h]
  __int64 v483; // [rsp+8B8h] [rbp+838h]
  __int64 v484; // [rsp+8C0h] [rbp+840h]
  __int64 v485; // [rsp+8C8h] [rbp+848h]
  __int64 v486; // [rsp+8D0h] [rbp+850h]
  __int64 v487; // [rsp+8D8h] [rbp+858h]
  __m128i v488; // [rsp+8E0h] [rbp+860h] BYREF
  __m128i v489; // [rsp+8F0h] [rbp+870h] BYREF
  __m128i v490; // [rsp+900h] [rbp+880h] BYREF
  __m128i v491; // [rsp+910h] [rbp+890h] BYREF
  __int128 v492; // [rsp+920h] [rbp+8A0h]
  __m128i v493; // [rsp+930h] [rbp+8B0h] BYREF
  __int128 v494; // [rsp+948h] [rbp+8C8h] BYREF
  unsigned __int64 v495; // [rsp+958h] [rbp+8D8h]
  __m128i v496; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v497; // [rsp+970h] [rbp+8F0h]
  __int64 v498; // [rsp+978h] [rbp+8F8h]
  __int64 v499; // [rsp+980h] [rbp+900h]
  __int64 v500; // [rsp+988h] [rbp+908h]
  __int64 v501; // [rsp+990h] [rbp+910h]
  __int64 v502; // [rsp+998h] [rbp+918h]
  const __m128i *v503; // [rsp+9A0h] [rbp+920h]
  unsigned __int64 v504; // [rsp+9A8h] [rbp+928h]
  __int64 v505; // [rsp+9B0h] [rbp+930h]
  unsigned __int64 v506; // [rsp+9B8h] [rbp+938h]
  PVOID v507; // [rsp+9C0h] [rbp+940h]
  __m128i v508; // [rsp+9C8h] [rbp+948h] BYREF
  __int64 v509; // [rsp+9D8h] [rbp+958h]
  unsigned __int128 v510; // [rsp+9E0h] [rbp+960h] BYREF
  __int64 v511; // [rsp+9F0h] [rbp+970h]
  _BYTE v512[24]; // [rsp+9F8h] [rbp+978h] BYREF
  __int128 v513; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v514; // [rsp+A20h] [rbp+9A0h]
  __int64 v515; // [rsp+A28h] [rbp+9A8h]
  __int64 v516; // [rsp+A30h] [rbp+9B0h]
  __int64 v517; // [rsp+A38h] [rbp+9B8h]
  __int64 v518; // [rsp+A40h] [rbp+9C0h]
  __int64 v519; // [rsp+A48h] [rbp+9C8h]
  unsigned __int64 v520; // [rsp+A50h] [rbp+9D0h]
  __int64 v521; // [rsp+A58h] [rbp+9D8h]
  __int64 v522; // [rsp+A60h] [rbp+9E0h]
  __int64 v523; // [rsp+A68h] [rbp+9E8h]
  char v524; // [rsp+A77h] [rbp+9F7h] BYREF
  unsigned __int64 v525; // [rsp+A78h] [rbp+9F8h]
  __int64 v526; // [rsp+A80h] [rbp+A00h]
  unsigned __int64 v527; // [rsp+A88h] [rbp+A08h]
  __m128i v528; // [rsp+A90h] [rbp+A10h]
  char *v529; // [rsp+AA0h] [rbp+A20h]
  char v530; // [rsp+AA8h] [rbp+A28h]
  char v531; // [rsp+AA9h] [rbp+A29h]
  char v532; // [rsp+AAAh] [rbp+A2Ah]
  char v533; // [rsp+AABh] [rbp+A2Bh]
  char v534; // [rsp+AACh] [rbp+A2Ch]
  char v535; // [rsp+AADh] [rbp+A2Dh]
  char v536; // [rsp+AAEh] [rbp+A2Eh]
  char v537; // [rsp+AAFh] [rbp+A2Fh]
  char v538; // [rsp+AB0h] [rbp+A30h]
  char v539; // [rsp+AB1h] [rbp+A31h]
  char v540; // [rsp+AB2h] [rbp+A32h]
  char v541; // [rsp+AB3h] [rbp+A33h]
  char v542; // [rsp+AB4h] [rbp+A34h]
  char v543; // [rsp+AB5h] [rbp+A35h]
  char v544; // [rsp+AB6h] [rbp+A36h]
  char v545; // [rsp+AB7h] [rbp+A37h]
  __int64 v546; // [rsp+AB8h] [rbp+A38h]
  const __m128i *v547; // [rsp+AC0h] [rbp+A40h]
  PVOID Address; // [rsp+AC8h] [rbp+A48h]
  char v549; // [rsp+ADDh] [rbp+A5Dh]
  char v550; // [rsp+ADEh] [rbp+A5Eh]
  char v551; // [rsp+ADFh] [rbp+A5Fh]
  char v552; // [rsp+AE0h] [rbp+A60h]
  char v553; // [rsp+AE1h] [rbp+A61h]
  char v554; // [rsp+AE2h] [rbp+A62h]
  char v555; // [rsp+AE3h] [rbp+A63h]
  char v556; // [rsp+AE4h] [rbp+A64h]
  char v557; // [rsp+AE5h] [rbp+A65h]
  char v558; // [rsp+AE6h] [rbp+A66h]
  char v559; // [rsp+AE7h] [rbp+A67h]
  char v560; // [rsp+AE8h] [rbp+A68h]
  char v561; // [rsp+AE9h] [rbp+A69h]
  char v562; // [rsp+AEAh] [rbp+A6Ah]
  char v563; // [rsp+AEBh] [rbp+A6Bh]
  char v564; // [rsp+AECh] [rbp+A6Ch]
  char v565; // [rsp+AEDh] [rbp+A6Dh]
  char v566; // [rsp+AEEh] [rbp+A6Eh]
  char v567; // [rsp+AEFh] [rbp+A6Fh]
  char v568; // [rsp+AF0h] [rbp+A70h]
  char v569; // [rsp+AF1h] [rbp+A71h]
  char v570; // [rsp+AF2h] [rbp+A72h]
  __int64 v571; // [rsp+B08h] [rbp+A88h]
  unsigned __int64 j; // [rsp+B10h] [rbp+A90h]
  char v573; // [rsp+B1Eh] [rbp+A9Eh]
  char v574; // [rsp+B1Fh] [rbp+A9Fh]
  char v575; // [rsp+B20h] [rbp+AA0h]
  char v576; // [rsp+B21h] [rbp+AA1h]
  char v577; // [rsp+B22h] [rbp+AA2h]
  char v578; // [rsp+B23h] [rbp+AA3h]
  char v579; // [rsp+B24h] [rbp+AA4h]
  char v580; // [rsp+B25h] [rbp+AA5h]
  char v581; // [rsp+B26h] [rbp+AA6h]
  char v582; // [rsp+B27h] [rbp+AA7h]
  char v583; // [rsp+B28h] [rbp+AA8h]
  char v584; // [rsp+B29h] [rbp+AA9h]
  char v585; // [rsp+B2Ah] [rbp+AAAh]
  char v586; // [rsp+B2Bh] [rbp+AABh]
  char v587; // [rsp+B2Ch] [rbp+AACh]
  char v588; // [rsp+B2Dh] [rbp+AADh]
  char v589; // [rsp+B2Eh] [rbp+AAEh]
  char v590; // [rsp+B2Fh] [rbp+AAFh]
  char v591; // [rsp+B30h] [rbp+AB0h]
  char v592; // [rsp+B31h] [rbp+AB1h]
  char v593; // [rsp+B32h] [rbp+AB2h]
  char v594; // [rsp+B33h] [rbp+AB3h]
  char v595; // [rsp+B34h] [rbp+AB4h]
  char v596; // [rsp+B35h] [rbp+AB5h]
  char v597; // [rsp+B36h] [rbp+AB6h]
  char v598; // [rsp+B37h] [rbp+AB7h]
  __int64 v599; // [rsp+B38h] [rbp+AB8h]

  v599 = -2;
  v547 = a3;
  v6 = a2;
  v581 = 1;
  v580 = 1;
  v579 = 1;
  v578 = 1;
  v577 = 1;
  v576 = 1;
  v575 = 1;
  v574 = 1;
  v573 = 1;
  sub_1408E8540(v380, a2);
  v431 = *(__m128i *)&v380[8];
  v432 = *(_OWORD *)&v380[24];
  v433 = *(__m256i *)&v380[40];
  v434 = *(__m128i *)&v380[72];
  *(_OWORD *)v435 = *(_OWORD *)&v380[88];
  if ( *(_QWORD *)v380 == -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)v435;
    *(__m128i *)(a1 + 72) = v434;
    v24 = _mm_load_si128(&v431);
    si128 = _mm_load_si128((const __m128i *)&v432);
    v26 = _mm_load_si128((const __m128i *)&v433);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v433.m256i_u64[2]);
    *(__m128i *)(a1 + 40) = v26;
    *(__m128i *)(a1 + 24) = si128;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_24;
  }
  v516 = a1;
  v349 = v382;
  v348 = v381;
  v342 = v431;
  v343 = _mm_load_si128((const __m128i *)&v432);
  v344 = _mm_load_si128((const __m128i *)&v433);
  v345 = _mm_load_si128((const __m128i *)&v433.m256i_u64[2]);
  v346 = v434;
  v347 = _mm_load_si128((const __m128i *)v435);
  v341 = *(_QWORD *)v380;
  v8 = v547[3].m128i_i64[0];
  v9 = v547[3].m128i_i64[1];
  v595 = 1;
  v594 = 1;
  v593 = 1;
  v592 = 1;
  v591 = 1;
  v590 = 1;
  v589 = 1;
  v588 = 1;
  v587 = 1;
  v522 = sub_1408FEA60(v8, v9);
  Address = v11;
  if ( !v11 )
  {
    nullsub_1(v10, 0);
    v36 = (__m128i *)sub_140001650(24, 1);
    if ( !v36 )
    {
      v595 = 1;
      v594 = 1;
      v593 = 1;
      v592 = 1;
      v591 = 1;
      v590 = 1;
      v589 = 1;
      v588 = 1;
      v587 = 1;
      sub_14196B2DB(1, 24);
    }
    *v36 = _mm_loadu_si128(&xmmword_141A54F7F);
    v36[1].m128i_i64[0] = 0x7974706D65206562LL;
    a1 = v516;
    *(_QWORD *)(v516 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 24;
    *(_QWORD *)(a1 + 24) = v36;
    *(_QWORD *)(a1 + 32) = 24;
    goto LABEL_22;
  }
  if ( v547[10].m128i_i64[0] == -1 )
    goto LABEL_13;
  v12 = v547[10].m128i_i64[1];
  v13 = v547[11].m128i_i64[0];
  v595 = 1;
  v594 = 1;
  v593 = 1;
  v592 = 1;
  v591 = 1;
  v590 = 1;
  v589 = 1;
  v588 = 1;
  v587 = 1;
  v15 = sub_1408FEA60(v12, v13);
  if ( !v15 || (v16 = v14) == 0 )
  {
LABEL_13:
    if ( v342.m128i_i64[1] )
    {
      v28 = v547[1].m128i_i64[1];
      v29 = v547[2].m128i_i64[0];
      v30 = 0;
      while ( *(_QWORD *)(v342.m128i_i64[0] + v30 + 16) != v29
           || (unsigned int)sub_141923B40(*(_QWORD *)(v342.m128i_i64[0] + v30 + 8), v28, v29) )
      {
        v30 += 112;
        if ( 112 * v342.m128i_i64[1] == v30 )
          goto LABEL_21;
      }
      v595 = 1;
      v594 = 1;
      v593 = 1;
      v592 = 1;
      v591 = 1;
      v590 = 1;
      v589 = 1;
      v588 = 1;
      v587 = 1;
      sub_1416DB410(v512, v30 + v342.m128i_i64[0]);
      sub_1416DB410(&v508, v30 + v342.m128i_i64[0] + 24);
      sub_1416DB410(&v488, v30 + v342.m128i_i64[0] + 48);
      v31 = *(unsigned __int8 *)(v342.m128i_i64[0] + v30 + 105);
      sub_1416DB410(&v367, v30 + v342.m128i_i64[0] + 72);
      v32 = *(unsigned __int8 *)(v342.m128i_i64[0] + v30 + 104);
      v33 = *(_QWORD *)(v342.m128i_i64[0] + v30 + 96);
      *(_OWORD *)v380 = *(_OWORD *)&v512[8];
      *(__m128i *)&v380[16] = v508;
      *(_QWORD *)&v380[32] = v509;
      *(__m128i *)&v380[40] = v488;
      *(_QWORD *)&v380[56] = v489.m128i_i64[0];
      *(__m128i *)&v380[64] = v367;
      *(_QWORD *)&v380[80] = v368.m128i_i64[0];
      *(_QWORD *)v435 = v368.m128i_i64[0];
      v434 = v367;
      v433.m256i_i64[3] = v489.m128i_i64[0];
      v433.m256i_i64[0] = v509;
      *(__m128i *)&v433.m256i_u64[1] = v488;
      v432 = (__int128)v508;
      v431 = *(__m128i *)&v512[8];
      *(_QWORD *)&v475[80] = v368.m128i_i64[0];
      *(__m128i *)&v475[64] = v367;
      *(_QWORD *)&v475[56] = v489.m128i_i64[0];
      *(_QWORD *)&v475[32] = v509;
      *(__m128i *)&v475[40] = v488;
      *(__m128i *)&v475[16] = v508;
      *(_OWORD *)v475 = *(_OWORD *)&v512[8];
      v460 = v368.m128i_i64[0];
      v459 = v367;
      v34 = _mm_load_si128((const __m128i *)v475);
      v35 = _mm_load_si128((const __m128i *)&v475[16]);
      v458 = v489.m128i_i64[0];
      v456 = v509;
      v457 = v488;
      v455 = v35;
      *(__m128i *)&v454[8] = v34;
      *(_QWORD *)v454 = *(_QWORD *)v512;
      v461 = v33;
      v462 = v32 | (unsigned int)(v31 << 8);
      goto LABEL_88;
    }
LABEL_21:
    v367.m128i_i64[0] = (__int64)v547[1].m128i_i64;
    v367.m128i_i64[1] = (__int64)sub_1400015F0;
    v595 = 1;
    v594 = 1;
    v593 = 1;
    v592 = 1;
    v591 = 1;
    v590 = 1;
    v589 = 1;
    v588 = 1;
    v587 = 1;
    sub_1416DAFA0(&v380[8], &unk_141A526CF, &v367);
    *(_QWORD *)v380 = 8;
    v432 = *(_OWORD *)&v380[16];
    v433 = *(__m256i *)&v380[32];
    v434 = *(__m128i *)&v380[64];
    v431 = _mm_loadu_si128((const __m128i *)v380);
    v37 = *(_QWORD *)&v380[88];
    *(_OWORD *)&v475[16] = *(_OWORD *)&v380[16];
    *(_OWORD *)&v475[32] = *(_OWORD *)&v380[32];
    *(_OWORD *)&v475[48] = *(_OWORD *)&v380[48];
    *(_OWORD *)&v475[64] = *(_OWORD *)&v380[64];
    *(_QWORD *)&v475[80] = *(_QWORD *)&v380[80];
    *(__m128i *)v475 = v431;
    a1 = v516;
    *(_QWORD *)(v516 + 88) = *(_QWORD *)&v380[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v475[64];
    v38 = _mm_load_si128((const __m128i *)v475);
    v39 = _mm_load_si128((const __m128i *)&v475[16]);
    v40 = _mm_load_si128((const __m128i *)&v475[32]);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v475[48]);
    *(__m128i *)(a1 + 40) = v40;
    *(__m128i *)(a1 + 24) = v39;
    *(__m128i *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 96) = v37;
LABEL_22:
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_23;
  }
  v595 = 1;
  v594 = 1;
  v593 = 1;
  v592 = 1;
  v591 = 1;
  v590 = 1;
  v589 = 1;
  v588 = 1;
  v587 = 1;
  sub_1416DB410(&v431, &v547[1]);
  v19 = v547;
  v20 = v547[11].m128i_i64[1] == -1;
  v519 = v6;
  if ( v20 )
  {
    v60 = &unk_141A54F97;
    v22 = 15;
  }
  else
  {
    v21 = sub_1408FEA60(v547[12].m128i_i64[0], v547[12].m128i_i64[1]);
    LOBYTE(v18) = v21 == 0 || v17 == 0;
    v22 = 15;
    if ( !(_BYTE)v18 )
      v22 = v17;
    if ( v22 < 0 )
    {
      v23 = 0;
      goto LABEL_11;
    }
    v60 = &unk_141A54F97;
    if ( !(_BYTE)v18 )
      v60 = (void *)v21;
    v19 = v547;
  }
  nullsub_1(v18, v17);
  v23 = 1;
  v61 = sub_140001650(v22, 1);
  if ( !v61 )
  {
    v17 = v22;
LABEL_11:
    sub_14196B2DB(v23, v17);
  }
  v523 = v61;
  v518 = v22;
  sub_1419234B0(v61, v60, v22);
  v64 = v19[26].m128i_i32[2];
  v65 = 5;
  if ( (_BYTE)v64 != 0xFF )
    v65 = v64;
  if ( v16 < 0 )
  {
    v66 = 0;
    goto LABEL_82;
  }
  nullsub_1(v63, v62);
  v66 = 1;
  v67 = sub_140001650(v16, 1);
  if ( !v67 )
LABEL_82:
    sub_14196B2DB(v66, v16);
  v571 = v67;
  v526 = v16;
  sub_1419234B0(v67, v15, v16);
  v71 = sub_1416B2E50(v69, v68, v70);
  v6 = v519;
  *(_DWORD *)v475 = v71;
  *(_DWORD *)&v475[4] = v72;
  sub_1416B2E00(v380, v475, 3577643008LL, 27111902);
  if ( v380[0] )
    v73 = 0;
  else
    v73 = *(_QWORD *)&v380[8];
  *(__m128i *)v454 = _mm_loadu_si128(&v431);
  *(_QWORD *)&v454[16] = v432;
  v455.m128i_i64[0] = v518;
  v455.m128i_i64[1] = v523;
  v456 = v518;
  v457.m128i_i64[0] = 0;
  v457.m128i_i64[1] = 1;
  v458 = 0;
  BYTE1(v462) = v65;
  v459.m128i_i64[0] = v526;
  v459.m128i_i64[1] = v571;
  v460 = v526;
  LOBYTE(v462) = 0;
  v461 = v73;
LABEL_88:
  v74 = v547[4].m128i_i64[0];
  v75 = 1;
  if ( v74 != -1 )
    v75 = v547[4].m128i_i64[1];
  v76 = v547[5].m128i_i64[0];
  if ( v74 == -1 )
  {
    v76 = 0;
    v74 = 0;
  }
  v523 = v74;
  v526 = v75;
  v77 = sub_1408FEA60(v75, v76);
  v518 = v78;
  v80 = v78;
  if ( v78 < 0 )
  {
    v81 = 0;
    goto LABEL_94;
  }
  if ( v78 )
  {
    v82 = v77;
    nullsub_1(v79, v78);
    v81 = 1;
    v83 = sub_140001650(v80, 1);
    if ( !v83 )
LABEL_94:
      sub_14196B2DB(v81, v80);
    v498 = v83;
    sub_1419234B0(v83, v82, v80);
  }
  else
  {
    v498 = 1;
  }
  v84 = v547;
  if ( v523 )
    sub_140001660(v526, v523, 1);
  v85 = v84[5].m128i_i64[1];
  v86 = 1;
  if ( v85 != -1 )
    v86 = v84[6].m128i_i64[0];
  v87 = v84[6].m128i_i64[1];
  if ( v85 == -1 )
  {
    v87 = 0;
    v85 = 0;
  }
  v526 = v85;
  v571 = v86;
  v88 = sub_1408FEA60(v86, v87);
  v523 = v89;
  v91 = v89;
  if ( v89 < 0 )
  {
    v92 = 0;
    goto LABEL_107;
  }
  if ( v89 )
  {
    v93 = v88;
    nullsub_1(v90, v89);
    v92 = 1;
    v94 = sub_140001650(v91, 1);
    if ( !v94 )
LABEL_107:
      sub_14196B2DB(v92, v91);
    v499 = v94;
    sub_1419234B0(v94, v93, v91);
  }
  else
  {
    v499 = 1;
  }
  v95 = v547;
  if ( v526 )
    sub_140001660(v571, v526, 1);
  v96 = v95[7].m128i_i64[0];
  v97 = 1;
  if ( v96 != -1 )
    v97 = v95[7].m128i_i64[1];
  v98 = v95[8].m128i_i64[0];
  if ( v96 == -1 )
  {
    v98 = 0;
    v96 = 0;
  }
  v571 = v96;
  v546 = v97;
  v99 = sub_1408FEA60(v97, v98);
  v526 = v100;
  v102 = v100;
  if ( v100 < 0 )
  {
    v103 = 0;
    goto LABEL_120;
  }
  if ( v100 )
  {
    v104 = v99;
    nullsub_1(v101, v100);
    v103 = 1;
    v105 = sub_140001650(v102, 1);
    if ( !v105 )
LABEL_120:
      sub_14196B2DB(v103, v102);
    v500 = v105;
    sub_1419234B0(v105, v104, v102);
  }
  else
  {
    v500 = 1;
  }
  v106 = v547;
  if ( v571 )
    sub_140001660(v546, v571, 1);
  v107 = v106[8].m128i_i64[1];
  v108 = 1;
  if ( v107 != -1 )
    v108 = v106[9].m128i_i64[0];
  v109 = v106[9].m128i_i64[1];
  if ( v107 == -1 )
  {
    v109 = 0;
    v107 = 0;
  }
  v571 = v107;
  v546 = v108;
  v110 = sub_1408FEA60(v108, v109);
  v528.m128i_i64[0] = a4;
  v113 = v111;
  if ( v111 < 0 )
  {
    v114 = 0;
    goto LABEL_133;
  }
  if ( v111 )
  {
    v115 = v110;
    nullsub_1(v112, v111);
    v114 = 1;
    v116 = sub_140001650(v113, 1);
    if ( !v116 )
LABEL_133:
      sub_14196B2DB(v114, v113);
    v485 = v116;
    sub_1419234B0(v116, v115, v113);
  }
  else
  {
    v485 = 1;
  }
  v117 = v547;
  v501 = v113;
  if ( v571 )
    sub_140001660(v546, v571, 1);
  *(_QWORD *)&v380[16] = v117[20].m128i_i64[0];
  *(__m128i *)v380 = _mm_loadu_si128(v117 + 19);
  v570 = 1;
  v569 = 1;
  v568 = 1;
  v567 = 1;
  v566 = 1;
  sub_1408E6D30(&v431, v380);
  v118 = (char *)Address;
  v119 = v431.m128i_i64[0];
  v120 = v432;
  if ( v431.m128i_i64[0] == -1 )
    v120 = 0;
  v121 = 1;
  v122 = v431.m128i_i64[1];
  if ( v431.m128i_i64[0] == -1 )
    v122 = 1;
  v469 = v122;
  if ( v431.m128i_i64[0] == -1 )
    v119 = 0;
  v481 = v119;
  *(_QWORD *)&v380[16] = v547[21].m128i_i64[1];
  *(__m128i *)v380 = _mm_loadu_si128((const __m128i *)((char *)v547 + 328));
  v565 = 1;
  v564 = 1;
  v563 = 1;
  v562 = 1;
  v561 = 1;
  sub_1408E6D30(&v431, v380);
  v123 = v431.m128i_i64[0];
  v124 = v432;
  if ( v431.m128i_i64[0] != -1 )
    v121 = v431.m128i_i64[1];
  v470 = v121;
  if ( v431.m128i_i64[0] == -1 )
  {
    v124 = 0;
    v123 = 0;
  }
  v482 = v123;
  *(_QWORD *)&v380[16] = v547[23].m128i_i64[0];
  *(__m128i *)v380 = _mm_loadu_si128(v547 + 22);
  v560 = 1;
  v559 = 1;
  v558 = 1;
  v557 = 1;
  sub_1408E6D30(&v431, v380);
  v125 = v431.m128i_i64[0];
  v126 = v432;
  if ( v431.m128i_i64[0] == -1 )
    v126 = 0;
  v127 = 1;
  v128 = v431.m128i_i64[1];
  if ( v431.m128i_i64[0] == -1 )
    v128 = 1;
  v471 = v128;
  if ( v431.m128i_i64[0] == -1 )
    v125 = 0;
  v483 = v125;
  *(_QWORD *)&v380[16] = v547[24].m128i_i64[1];
  *(__m128i *)v380 = _mm_loadu_si128((const __m128i *)((char *)v547 + 376));
  v556 = 1;
  v555 = 1;
  v554 = 1;
  sub_1408E6D30(&v431, v380);
  v129 = v431.m128i_i64[0];
  v130 = v432;
  if ( v431.m128i_i64[0] == -1 )
    v130 = 0;
  else
    v127 = v431.m128i_i64[1];
  v472 = v127;
  if ( v431.m128i_i64[0] == -1 )
    v129 = 0;
  v484 = v129;
  *(_QWORD *)&v380[16] = v547[26].m128i_i64[0];
  *(__m128i *)v380 = _mm_loadu_si128(v547 + 25);
  v553 = 1;
  v552 = 1;
  sub_1408E6D30(v372, v380);
  if ( (__int64)v118 < 0 )
  {
    v133 = 0;
    goto LABEL_163;
  }
  v374 = v130;
  v373 = v126;
  v571 = v343.m128i_i64[1];
  v134 = v344.m128i_i64[0];
  nullsub_1(v132, v131);
  v133 = 1;
  v135 = sub_140001650(v118, 1);
  if ( !v135 )
  {
LABEL_163:
    v550 = 1;
    v549 = 1;
    sub_14196B2DB(v133, v118);
  }
  j = v135;
  sub_1419234B0(v135, v522, v118);
  v138 = v526;
  if ( v526 )
  {
    nullsub_1(v137, v136);
    v139 = sub_140001650(v138, 1);
    if ( !v139 )
    {
      v480 = v118;
      v479 = j;
      sub_14196B2DB(1, v138);
    }
    v133 = v139;
    sub_1419234B0(v139, v500, v138);
  }
  *(_QWORD *)v380 = v138;
  *(_QWORD *)&v380[8] = v133;
  *(_QWORD *)&v380[16] = v138;
  v480 = v118;
  v140 = j;
  v479 = j;
  sub_1408E6D30(&v431, v380);
  if ( v431.m128i_i64[0] == -1 )
  {
    v428 = v124;
    v429 = v120;
    *(_QWORD *)&v494 = 0;
    *((_QWORD *)&v494 + 1) = 1;
    v495 = 0;
    goto LABEL_173;
  }
  v528.m128i_i64[1] = v431.m128i_i64[1];
  v546 = v431.m128i_i64[0];
  v141 = sub_1408FEA60(v431.m128i_i64[1], v432);
  if ( v142 < 0 )
  {
    v144 = 0;
    goto LABEL_171;
  }
  if ( v142 )
  {
    v244 = v124;
    v517 = v141;
    v527 = v142;
    nullsub_1(v143, v142);
    v144 = 1;
    v245 = sub_140001650(v527, 1);
    v142 = v527;
    if ( !v245 )
LABEL_171:
      sub_14196B2DB(v144, v142);
    v246 = v245;
    sub_1419234B0(v245, v517, v527);
    v247 = v527;
    if ( v527 < 8 )
    {
      v248 = 0;
      v118 = (char *)Address;
      v124 = v244;
      v140 = j;
      do
      {
LABEL_462:
        *(_BYTE *)(v246 + v248) |= 32 * ((unsigned __int8)(*(_BYTE *)(v246 + v248) - 65) < 0x1Au);
        ++v248;
LABEL_463:
        ;
      }
      while ( v247 != v248 );
      goto LABEL_464;
    }
    if ( v527 < 0x20 )
    {
      v248 = 0;
      v118 = (char *)Address;
      v124 = v244;
      v140 = j;
      goto LABEL_422;
    }
    v248 = v527 & 0x7FFFFFFFFFFFFFE0LL;
    v310 = 0;
    v311 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
    v312 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
    v313 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
    do
    {
      v314 = _mm_loadu_si128((const __m128i *)(v246 + v310));
      v315 = _mm_loadu_si128((const __m128i *)(v246 + v310 + 16));
      v316 = _mm_add_epi8(v314, v311);
      v317 = _mm_add_epi8(v315, v311);
      *(__m128i *)(v246 + v310) = _mm_or_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v316, v312), v316), v313),
                                    v314);
      *(__m128i *)(v246 + v310 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v317, v312), v317), v313),
                                         v315);
      v310 += 32;
    }
    while ( v248 != v310 );
    if ( v527 != v248 )
    {
      v247 = v527;
      v118 = (char *)Address;
      v124 = v244;
      v140 = j;
      if ( (v527 & 0x18) == 0 )
        goto LABEL_462;
LABEL_422:
      v324 = v248;
      v248 = v247 & 0x7FFFFFFFFFFFFFF8LL;
      v325 = _mm_load_si128((const __m128i *)&xmmword_141A045D0);
      v326 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
      v327 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
      do
      {
        v328 = _mm_loadl_epi64((const __m128i *)(v246 + v324));
        v329 = _mm_add_epi8(v328, v325);
        *(_QWORD *)(v246 + v324) = _mm_or_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v329, v326), v329), v327),
                                     v328).m128i_u64[0];
        v324 += 8;
      }
      while ( v248 != v324 );
      goto LABEL_463;
    }
    v247 = v527;
    v118 = (char *)Address;
    v124 = v244;
  }
  else
  {
    v246 = 1;
    v247 = 0;
    v118 = (char *)Address;
  }
  v140 = j;
LABEL_464:
  v429 = v120;
  v428 = v124;
  *(_QWORD *)&v494 = v247;
  *((_QWORD *)&v494 + 1) = v246;
  v495 = v247;
  if ( v546 )
    sub_140001660(v528.m128i_i64[1], v546, 1);
LABEL_173:
  v145 = v571;
  v146 = v571 + 160 * v134;
  *(_QWORD *)v380 = v571;
  *(_QWORD *)&v380[8] = v146;
  *(_QWORD *)&v380[16] = &v494;
  v468 = v118;
  v467 = v140;
  sub_140214F80(&v463, v380);
  v503 = *((const __m128i **)&v463 + 1);
  v148 = v464;
  *(_QWORD *)v380 = &v524;
  if ( v464 >= 2 )
  {
    if ( v464 >= 0x15 )
    {
      v118 = (char *)Address;
      v507 = Address;
      v140 = j;
      v506 = j;
      v586 = 1;
      sub_1401B8F10(v503, v464, v380);
    }
    else
    {
      sub_140CC54F0(v503, v464, 1, v380);
      v118 = (char *)Address;
      v140 = j;
    }
    v145 = v571;
  }
  v507 = v118;
  v506 = v140;
  v586 = 1;
  v149 = sub_1416AE140(v147);
  if ( *(_BYTE *)(v149 + 16) == 1 )
  {
    v154 = *(_QWORD *)v149;
    v155 = *(_QWORD *)(v149 + 8);
  }
  else
  {
    v507 = v118;
    v506 = v140;
    v586 = 1;
    v335 = v149;
    v154 = sub_1416C5230(v151, v150, v152, v153);
    v149 = v335;
    *(_QWORD *)v335 = v154;
    *(_QWORD *)(v335 + 8) = v155;
    *(_BYTE *)(v335 + 16) = 1;
  }
  *(_QWORD *)v149 = v154 + 1;
  v432 = xmmword_141A51860;
  v431 = _mm_loadu_si128((const __m128i *)&off_141A51850);
  v433.m256i_i64[0] = v154;
  v433.m256i_i64[1] = v155;
  if ( v148 )
  {
    v519 = v6;
    LOBYTE(v153) = 1;
    sub_141962910(&v431, v148, &v433, v153);
    v336 = 0;
    v118 = (char *)Address;
    v6 = v519;
    v145 = v571;
    do
    {
      v337 = v503->m128i_i64[v336];
      v338 = *(_QWORD *)(v337 + 32);
      v339 = v338 + *(_QWORD *)(v337 + 40);
      *(_QWORD *)v380 = 0;
      *(_QWORD *)&v380[40] = 0;
      *(_QWORD *)&v380[80] = v338;
      *(_QWORD *)&v380[88] = v339;
      sub_1401D2210(v475, v380);
      sub_140871180((__int64)&v431, v475);
      ++v336;
    }
    while ( v336 != v148 );
  }
  v156 = _mm_load_si128(&v431);
  v157 = _mm_load_si128((const __m128i *)&v432);
  *(_OWORD *)&v475[32] = *(_OWORD *)v433.m256i_i8;
  *(__m128i *)&v475[16] = v157;
  *(__m128i *)v475 = v156;
  *(_QWORD *)v380 = v145;
  *(_QWORD *)&v380[8] = v146;
  *(_QWORD *)&v380[16] = v475;
  v466 = v118;
  v465 = j;
  v551 = 1;
  sub_1402151A0(&v473, v380);
  v158 = *((_QWORD **)&v473 + 1);
  v159 = v474;
  *(_QWORD *)v380 = &v524;
  if ( v474 >= 2 )
  {
    if ( v474 >= 0x15 )
    {
      v118 = (char *)Address;
      v423 = Address;
      v422 = j;
      v545 = 1;
      sub_1401B8F10(*((_QWORD *)&v473 + 1), v474, v380);
    }
    else
    {
      sub_140CC54F0(*((_QWORD *)&v473 + 1), v474, 1, v380);
      v118 = (char *)Address;
    }
  }
  v160 = (const __m128i *)((char *)v503 + 8 * v148);
  *(_QWORD *)v380 = v158;
  *(_QWORD *)&v380[8] = v158;
  *(_QWORD *)&v380[16] = v473;
  v571 = (__int64)&v158[v159];
  *(_QWORD *)&v380[24] = v571;
  *(_QWORD *)&v380[32] = v503;
  *(_QWORD *)&v380[40] = v503;
  v375 = v463;
  *(_QWORD *)&v380[48] = v463;
  *(_QWORD *)&v380[56] = v160;
  v528.m128i_i64[1] = v473;
  v502 = 8 * v473;
  v161 = (__int64)v118;
  v529 = v118;
  v162 = v503;
  v163 = v158;
  v517 = (__int64)v160;
LABEL_179:
  v525 = j;
  v164 = v161;
  v165 = v162;
  v166 = v158;
  v167 = v163;
  v515 = v164;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v163 )
        goto LABEL_186;
      if ( v166 == (_QWORD *)v571 )
        break;
      *(_QWORD *)&v380[8] = v166 + 1;
      v162 = v165;
      v168 = v166;
      v158 = ++v166;
      v169 = (_QWORD *)*v168;
      v170 = v169[5];
      if ( v170 )
        goto LABEL_188;
    }
    if ( v528.m128i_i64[1] )
    {
      sub_140001660(v167, v502, 8);
      v160 = (const __m128i *)v517;
    }
    *(_QWORD *)v380 = 0;
    v167 = nullptr;
LABEL_186:
    if ( v165 == v160 )
      break;
    v162 = (const __m128i *)&v165->m128i_u64[1];
    *(_QWORD *)&v380[40] = &v165->m128i_i64[1];
    v158 = v166;
    v163 = nullptr;
    v171 = (__int64 *)v165;
    v165 = (const __m128i *)((char *)v165 + 8);
    v169 = (_QWORD *)*v171;
    v170 = v169[5];
    if ( v170 )
    {
LABEL_188:
      v172 = v169[4];
      v376 = v169[7];
      v173 = v169[8];
      sub_140219240(v512, v172, v172 + v170);
      v176 = *(_QWORD *)&v512[16];
      if ( !*(_QWORD *)&v512[16] )
      {
        if ( (__int64)v529 < 0 )
        {
          v265 = 0;
        }
        else
        {
          v179 = v515;
          if ( !v529 )
          {
            v487 = 1;
            v161 = 0;
            j = 1;
            v180 = 0;
            v182 = *(_QWORD *)v512;
            if ( *(_QWORD *)v512 )
              goto LABEL_272;
            goto LABEL_273;
          }
          v180 = (__int64)v529;
          nullsub_1(v175, v174);
          v161 = v180;
          v181 = sub_140001650(v180, 1);
          if ( v181 )
          {
            v487 = v181;
            sub_1419234B0(v181, v525, v180);
            j = v487;
            v182 = *(_QWORD *)v512;
            if ( *(_QWORD *)v512 )
              goto LABEL_272;
            goto LABEL_273;
          }
          v487 = v180;
          v265 = 1;
        }
        sub_14196B2DB(v265, v487);
      }
      v504 = v173;
      v431.m128i_i64[0] = v525;
      v431.m128i_i64[1] = (__int64)&v529[v525];
      *(_QWORD *)&v432 = 0;
      sub_140218870(&v508, &v431);
      if ( (__int64)v529 < 0 )
      {
        v340 = 0;
LABEL_317:
        sub_14196B2DB(v340, v486);
      }
      if ( v529 )
      {
        nullsub_1(v178, v177);
        v486 = sub_140001650(v529, 1);
        if ( !v486 )
        {
          v486 = (__int64)v529;
          v340 = 1;
          goto LABEL_317;
        }
      }
      else
      {
        v486 = 1;
      }
      v488.m128i_i64[0] = (__int64)v529;
      v488.m128i_i64[1] = v486;
      v489.m128i_i64[0] = 0;
      j = v509;
      v527 = *(_QWORD *)&v512[8];
      v430 = *(_QWORD *)&v512[8] + 4 * v176;
      v546 = v508.m128i_i64[1];
      v377 = v508.m128i_i64[1] + 40;
      v521 = 0;
      v520 = 0;
      v183 = 0;
LABEL_200:
      for ( i = v183; i < j; ++i )
      {
        if ( i )
        {
          v185 = *(_DWORD *)(v546 + 24 * i - 8);
          if ( (unsigned int)(v185 - 48) < 0xA || (v185 & 0xFFFFFFDF) - 65 < 0x1A )
            continue;
        }
        if ( *(_DWORD *)(v546 + 24 * i + 16) != *(_DWORD *)v527 )
        {
          sub_1416E3290(&v426);
          v186 = 2LL - (DWORD1(v426) == 0);
          if ( DWORD2(v426) )
            v186 = 3;
          v367.m128i_i64[0] = 0;
          v367.m128i_i64[1] = v186;
          v368.m128i_i32[2] = DWORD2(v426);
          v368.m128i_i64[0] = v426;
          sub_1416E3290(&v424);
          v187 = 2LL - (DWORD1(v424) == 0);
          if ( DWORD2(v424) )
            v187 = 3;
          v431.m128i_i64[0] = 0;
          v431.m128i_i64[1] = v187;
          DWORD2(v432) = DWORD2(v424);
          *(_QWORD *)&v432 = v424;
          v188 = sub_1416EAF30(&v367);
          v189 = sub_1416EAF30(&v431);
          if ( v188 == -1 )
          {
            if ( v189 != -1 )
              continue;
          }
          else if ( v188 != v189 )
          {
            continue;
          }
          if ( (unsigned int)sub_1416EAF30(&v367) != -1 || (unsigned int)sub_1416EAF30(&v431) != -1 )
            continue;
        }
        v378 = (unsigned __int64 *)(v546 + 24 * i);
        v190 = 1;
        v191 = 0;
        v192 = (unsigned int *)v527;
        v183 = i;
        v519 = v6;
LABEL_217:
        v193 = v183++;
        if ( (v191 & 1) != 0 )
        {
          if ( v192 == (unsigned int *)v430 )
            goto LABEL_240;
          v6 = v519;
          if ( v183 >= j )
            continue;
          goto LABEL_220;
        }
        if ( v190 < (unsigned __int64)(v430 - (_QWORD)v192) >> 2 )
        {
          v192 += v190;
          v6 = v519;
          if ( v183 >= j )
            continue;
LABEL_220:
          v194 = v192 + 1;
          v195 = (unsigned int *)(v377 + 24 * v193);
          while ( 1 )
          {
            v197 = *v195;
            if ( (unsigned int)(v197 - 9) >= 5 && (_DWORD)v197 != 32 )
            {
              if ( (unsigned int)v197 < 0x85 )
                goto LABEL_235;
              v198 = (unsigned int)v197 >> 8;
              if ( (unsigned int)v197 >> 8 > 0x1F )
              {
                if ( v198 == 32 )
                {
                  v196 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v197) >> 1;
                }
                else
                {
                  v6 = v519;
                  if ( v198 != 48 )
                  {
LABEL_235:
                    v199 = sub_1408DCB00(v197, *v192);
                    v191 = 1;
                    v190 = 0;
                    v192 = v194;
                    if ( !v199 )
                      goto LABEL_202;
                    goto LABEL_217;
                  }
                  v196 = (_DWORD)v197 == 12288;
                }
              }
              else if ( v198 )
              {
                v6 = v519;
                if ( v198 != 22 )
                  goto LABEL_235;
                v196 = (_DWORD)v197 == 5760;
              }
              else
              {
                v196 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v197);
              }
              v6 = v519;
              if ( (v196 & 1) == 0 )
                goto LABEL_235;
            }
            ++v183;
            v195 += 6;
            if ( j == v183 )
              goto LABEL_202;
          }
        }
LABEL_240:
        v6 = v519;
        if ( v183 >= j
          || (v200 = *(_DWORD *)(v546 + 24 * v183 + 16), (unsigned int)(v200 - 48) >= 0xA)
          && (v200 & 0xFFFFFFDF) - 65 >= 0x1A )
        {
          if ( v193 >= j )
            sub_14196B673(v193, j, &off_141A55650);
          v201 = *v378;
          v202 = *v378 - v520;
          if ( *v378 < v520
            || v201 > (unsigned __int64)v529
            || (v203 = *(_QWORD *)(v546 + 24 * v193 + 8), v529 != (char *)v520)
            && (v520 && *(char *)(v525 + v520) <= -65 || (char *)v201 != v529 && *(char *)(v525 + v201) <= -65) )
          {
            sub_14196B4F0(v525, (_DWORD)v529, v520, v201, (__int64)&off_141A55160);
          }
          if ( v202 > v488.m128i_i64[0] - v521 )
          {
            sub_141939070((unsigned int)&v488, v521, v202, 1, 1);
            v521 = v489.m128i_i64[0];
            if ( v201 != v520 )
LABEL_253:
              sub_1419234B0(v521 + v488.m128i_i64[1], v525 + v520, v202);
          }
          else if ( v201 != v520 )
          {
            goto LABEL_253;
          }
          v204 = v202 + v521;
          v489.m128i_i64[0] = v204;
          if ( v504 > v488.m128i_i64[0] - v204 )
          {
            sub_141939070((unsigned int)&v488, v204, v504, 1, 1);
            v204 = v489.m128i_i64[0];
LABEL_256:
            sub_1419234B0(v204 + v488.m128i_i64[1], v376, v504);
          }
          else if ( v504 )
          {
            goto LABEL_256;
          }
          v521 = v504 + v204;
          v489.m128i_i64[0] = v504 + v204;
          v520 = v203;
          v6 = v519;
          goto LABEL_200;
        }
LABEL_202:
        ;
      }
      if ( v520 )
      {
        if ( (unsigned __int64)v529 <= v520 )
        {
          if ( v529 != (char *)v520 )
            goto LABEL_451;
        }
        else if ( *(char *)(v525 + v520) <= -65 )
        {
LABEL_451:
          sub_14196B4F0(v525, (_DWORD)v529, v520, (_DWORD)v529, (__int64)&off_141A55148);
        }
      }
      v205 = &v529[-v520];
      if ( (unsigned __int64)&v529[-v520] > v488.m128i_i64[0] - v521 )
      {
        sub_141939070((unsigned int)&v488, v521, (_DWORD)v529 - v520, 1, 1);
        v521 = v489.m128i_i64[0];
        v206 = v488.m128i_i64[1];
        v207 = v520;
        if ( v529 != (char *)v520 )
LABEL_268:
          sub_1419234B0(v206 + v521, v525 + v207, v205);
      }
      else
      {
        v206 = v488.m128i_i64[1];
        v207 = v520;
        if ( v529 != (char *)v520 )
          goto LABEL_268;
      }
      j = v206;
      v161 = v488.m128i_i64[0];
      if ( v508.m128i_i64[0] )
        sub_140001660(v546, 24 * v508.m128i_i64[0], 8);
      v180 = (__int64)&v205[v521];
      v179 = v515;
      v182 = *(_QWORD *)v512;
      if ( *(_QWORD *)v512 )
LABEL_272:
        sub_140001660(*(_QWORD *)&v512[8], 4 * v182, 4);
LABEL_273:
      v529 = (char *)v180;
      v160 = (const __m128i *)v517;
      v163 = v167;
      if ( v179 )
      {
        sub_140001660(v525, v179, 1);
        v163 = v167;
        v160 = (const __m128i *)v517;
      }
      goto LABEL_179;
    }
  }
  if ( v375 )
    sub_140001660(v503, 8 * v375, 8);
  v379[0] = v164;
  v379[1] = v525;
  HIDWORD(_RAX) = HIDWORD(v529);
  v379[2] = v529;
  v209 = *(_QWORD *)&v475[8];
  v210 = v528.m128i_i64[0];
  if ( *(_QWORD *)&v475[8] )
  {
    v162 = *(const __m128i **)&v475[24];
    if ( *(_QWORD *)&v475[24] )
    {
      v211 = *(_QWORD *)v475;
      v212 = (const __m128i *)(*(_QWORD *)v475 + 16LL);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v475));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v214 = _mm_load_si128(v212);
            v211 -= 384;
            ++v212;
            _R15D = _mm_movemask_epi8(v214) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v215 = -3 * _RAX;
        v216 = *(_QWORD *)(v211 + 8 * v215 - 24);
        if ( v216 )
          sub_140001660(*(_QWORD *)(v211 + 8 * v215 - 16), v216, 1);
        v162 = (const __m128i *)((char *)v162 - 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v162 );
    }
    v217 = (24 * v209 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v218 = v217 + v209 + 17;
    if ( v218 )
      sub_140001660(*(_QWORD *)v475 - v217, v218, 16);
  }
  if ( (_QWORD)v494 )
    sub_140001660(*((_QWORD *)&v494 + 1), v494, 1);
  v585 = 1;
  v584 = 1;
  sub_140846540(
    (unsigned int)v380,
    v459.m128i_i32[2],
    v460,
    (unsigned int)"{text}{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    6,
    v525,
    (__int64)v529);
  v571 = *(_QWORD *)&v380[8];
  sub_140846540(
    (unsigned int)&v431,
    *(_DWORD *)&v380[8],
    *(_DWORD *)&v380[16],
    (unsigned int)"{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    10,
    v498,
    v518);
  v546 = v431.m128i_i64[1];
  sub_140846540(
    (unsigned int)v475,
    v431.m128i_i32[2],
    v432,
    (unsigned int)"{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    11,
    v499,
    v523);
  if ( v431.m128i_i64[0] )
    sub_140001660(v546, v431.m128i_i64[0], 1);
  if ( *(_QWORD *)v380 )
    sub_140001660(v571, *(_QWORD *)v380, 1);
  *(_QWORD *)v380 = 0;
  *(_QWORD *)&v380[8] = *(_QWORD *)&v475[16];
  v528.m128i_i64[1] = *(_QWORD *)&v475[8];
  *(_OWORD *)&v380[16] = *(_OWORD *)&v475[8];
  *(_QWORD *)&v380[32] = 0;
  *(_QWORD *)&v380[40] = *(_QWORD *)&v475[16];
  *(_QWORD *)&v380[48] = 0xA0000000ALL;
  v380[56] = 1;
  *(_WORD *)&v380[64] = 0;
  sub_1402176A0(&v431, v380);
  v219 = v432;
  v571 = v431.m128i_i64[1];
  for ( j = v431.m128i_i64[0]; v219; *(_QWORD *)&v432 = --v219 )
  {
    sub_1408FEA60(*(_QWORD *)(v571 + 16 * v219 - 16), *(_QWORD *)(v571 + 16 * v219 - 8));
    if ( v220 )
      break;
  }
  sub_1406C5A40((unsigned int)v380, v571, v219, (unsigned int)asc_141A51870, 1);
  v546 = *(_QWORD *)&v380[8];
  v222 = *(_QWORD *)v380;
  v223 = *(_QWORD *)&v380[16];
  if ( j )
    sub_140001660(v571, 16 * j, 8);
  v224 = *(_QWORD *)v475;
  if ( *(_QWORD *)v475 )
    sub_140001660(v528.m128i_i64[1], *(_QWORD *)v475, 1);
  v571 = v222;
  nullsub_1(v221, v224);
  v225 = sub_140001650(9, 1);
  if ( !v225 )
  {
    v544 = 1;
    v543 = 1;
    v542 = 1;
    sub_14196B2DB(1, 9);
  }
  v226 = v225;
  *(_QWORD *)v225 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v225 + 8) = 100;
  *(_QWORD *)&v513 = 9;
  *((_QWORD *)&v513 + 1) = v225;
  v514 = 9;
  *(_QWORD *)&v510 = -1;
  if ( BYTE1(v462) && (v598 = 1, v597 = 1, v596 = 1, sub_1408FEA60(v459.m128i_i64[1], v460), v227) )
  {
    if ( v547[13].m128i_i64[0] == -1 )
    {
      nullsub_1(v228, v227);
      v266 = (void *)sub_140001650(11, 1);
      if ( !v266 )
      {
        v598 = 1;
        v597 = 1;
        v596 = 1;
        sub_14196B2DB(1, 11);
      }
      v267 = v266;
      qmemcpy(v266, "llm_missing", 11);
      sub_140001660(v226, 9, 1);
      *(_QWORD *)&v513 = 11;
      *((_QWORD *)&v513 + 1) = v267;
      v514 = 11;
      nullsub_1(v269, v268);
      v270 = (__m128i *)sub_140001650(46, 1);
      if ( !v270 )
      {
        v598 = 1;
        v597 = 1;
        v596 = 1;
        sub_14196B2DB(1, 46);
      }
      qmemcpy(&v270[1], "ssing; used raw dictation text", 30);
      *v270 = _mm_loadu_si128((const __m128i *)&xmmword_141A5500E);
      *(_QWORD *)&v510 = 46;
      *((_QWORD *)&v510 + 1) = v270;
      v511 = 46;
      v598 = 1;
      v597 = 1;
      v596 = 1;
      LOBYTE(v270) = 1;
      LODWORD(j) = (_DWORD)v270;
      sub_1416DB410(&v496, v379);
    }
    else
    {
      v162 = v547 + 13;
      v598 = 1;
      v597 = 1;
      v596 = 1;
      if ( (unsigned __int8)sub_14070BF00(&v547[13]) )
      {
        v598 = 1;
        v597 = 1;
        v596 = 1;
        if ( v210 )
          sub_1406C99C0((unsigned int)v380, (_DWORD)v162, v546, v223, v210, a5);
        else
          sub_140754B30(v380, v162, v546, v223);
        j = *(_QWORD *)v380;
        if ( *(_QWORD *)v380 == 1 )
        {
          v527 = *(_QWORD *)&v380[8];
          v318 = *(_QWORD *)&v380[24];
          v528.m128i_i64[0] = *(_QWORD *)&v380[16];
          nullsub_1(v232, v231);
          v528.m128i_i64[1] = sub_140001650(9, 1);
          if ( !v528.m128i_i64[1] )
            sub_14196B2DB(1, 9);
          v319 = v528.m128i_i64[1];
          *(_QWORD *)v528.m128i_i64[1] = 0x6F7272655F6D6C6CLL;
          *(_BYTE *)(v319 + 8) = 114;
          sub_140001660(v226, 9, 1);
          *(_QWORD *)&v513 = 9;
          *((_QWORD *)&v513 + 1) = v319;
          v514 = 9;
          v510 = __PAIR128__(v528.m128i_u64[0], v527);
          v511 = v318;
          v320 = (_BYTE *)sub_1416DB410(&v496, v379);
        }
        else
        {
          v321 = *(_QWORD *)&v380[16];
          v505 = *(_QWORD *)&v380[16];
          sub_1408FEA60(*(_QWORD *)&v380[16], *(_QWORD *)&v380[24]);
          if ( v323 )
          {
            v320 = &v380[8];
            v497 = *(_QWORD *)&v380[24];
            v496 = _mm_loadu_si128((const __m128i *)&v380[8]);
          }
          else
          {
            nullsub_1(v322, 0);
            v330 = sub_140001650(9, 1);
            if ( !v330 )
            {
              v505 = v321;
              sub_14196B2DB(1, 9);
            }
            v331 = v330;
            *(_QWORD *)v330 = 0x6F7272655F6D6C6CLL;
            *(_BYTE *)(v330 + 8) = 114;
            sub_140001660(v226, 9, 1);
            *(_QWORD *)&v513 = 9;
            *((_QWORD *)&v513 + 1) = v331;
            v514 = 9;
            nullsub_1(v333, v332);
            v334 = sub_140001650(27, 1);
            if ( !v334 )
            {
              v505 = v321;
              sub_14196B2DB(1, 27);
            }
            *(_OWORD *)(v334 + 11) = *(__int128 *)((char *)&xmmword_141A54FF3 + 11);
            *(__m128i *)v334 = _mm_loadu_si128((const __m128i *)&xmmword_141A54FF3);
            *(_QWORD *)&v510 = 27;
            *((_QWORD *)&v510 + 1) = v334;
            v511 = 27;
            v505 = v321;
            v320 = (_BYTE *)sub_1416DB410(&v496, v379);
            if ( *(_QWORD *)&v380[8] )
              sub_140001660(v321, *(_QWORD *)&v380[8], 1);
          }
        }
        LOBYTE(v320) = 1;
        LODWORD(j) = (_DWORD)v320;
      }
      else
      {
        nullsub_1(v230, v229);
        v274 = (void *)sub_140001650(11, 1);
        if ( !v274 )
        {
          v598 = 1;
          v597 = 1;
          v596 = 1;
          sub_14196B2DB(1, 11);
        }
        v275 = v274;
        qmemcpy(v274, "llm_missing", 11);
        sub_140001660(v226, 9, 1);
        *(_QWORD *)&v513 = 11;
        *((_QWORD *)&v513 + 1) = v275;
        v514 = 11;
        nullsub_1(v277, v276);
        v278 = (__m128i *)sub_140001650(49, 1);
        if ( !v278 )
        {
          v598 = 1;
          v597 = 1;
          v596 = 1;
          sub_14196B2DB(1, 49);
        }
        qmemcpy(&v278[1], "complete; used raw dictation text", 33);
        *v278 = _mm_loadu_si128((const __m128i *)&xmmword_141A54FA6);
        *(_QWORD *)&v510 = 49;
        *((_QWORD *)&v510 + 1) = v278;
        v511 = 49;
        v598 = 1;
        v597 = 1;
        v596 = 1;
        LOBYTE(v278) = 1;
        LODWORD(j) = (_DWORD)v278;
        sub_1416DB410(&v496, v379);
      }
    }
  }
  else
  {
    v496.m128i_i64[0] = v571;
    v496.m128i_i64[1] = v546;
    v497 = v223;
    LODWORD(j) = 0;
  }
  v583 = 1;
  v582 = 1;
  sub_141597890(&v367);
  *(_QWORD *)v475 = 0;
  *(_QWORD *)&v475[8] = 1;
  *(_QWORD *)&v475[16] = 0;
  *(_QWORD *)&v380[16] = 1610612768;
  *(_QWORD *)v380 = v475;
  *(_QWORD *)&v380[8] = &off_141A55F58;
  if ( (unsigned __int8)sub_1415989F0(&v367, v380) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_4,
      55,
      (unsigned int)&v524,
      (unsigned int)&unk_141A52978,
      (__int64)&off_141A56010);
  v528 = *(__m128i *)v475;
  if ( *(_QWORD *)&v475[16] <= 8u )
  {
    if ( *(_QWORD *)&v475[16] != 8 )
LABEL_315:
      sub_14196B4F0(*(_DWORD *)&v475[8], *(_DWORD *)&v475[16], 0, 8, (__int64)&off_141A55040);
  }
  else if ( *(char *)(*(_QWORD *)&v475[8] + 8LL) <= -65 )
  {
    goto LABEL_315;
  }
  v488.m128i_i64[0] = *(_QWORD *)&v475[8];
  v488.m128i_i64[1] = 8;
  *(_QWORD *)v475 = &v488;
  *(_QWORD *)&v475[8] = sub_140191200;
  sub_1416DAFA0(v380, &unk_141A55058, v475);
  if ( v528.m128i_i64[0] )
    sub_140001660(v528.m128i_i64[1], v528.m128i_i64[0], 1);
  v528 = *(__m128i *)v380;
  v233 = *(_QWORD *)&v380[16];
  v541 = 1;
  v540 = 1;
  sub_1416DB410(v512, v454);
  v234 = v429;
  v235 = v428;
  v539 = 1;
  v538 = 1;
  sub_1416DB410(&v508, &v455);
  v236 = BYTE1(v462);
  v537 = 1;
  v536 = 1;
  sub_1416DB410(&v488, &v459);
  nullsub_1(v238, v237);
  v239 = Address;
  v240 = sub_140001650(Address, 1);
  if ( !v240 )
  {
    v535 = 1;
    v534 = 1;
    sub_14196B2DB(1, v239);
  }
  v527 = v240;
  sub_1419234B0(v240, v522, v239);
  v533 = 1;
  v532 = 1;
  sub_1416DB410(&v367, &v496);
  v531 = 1;
  sub_1416DB410(v475, &v513);
  if ( (_QWORD)v510 == -1 )
  {
    v522 = -1;
  }
  else
  {
    v530 = 1;
    sub_1416DB410(v380, &v510);
    v502 = *(_QWORD *)&v380[8];
    v522 = *(_QWORD *)v380;
    v162 = *(const __m128i **)&v380[16];
  }
  v249 = _mm_loadu_si128(v547);
  v517 = v372[0];
  v529 = (char *)v372[1];
  v250 = v372[2];
  LODWORD(v473) = sub_1416B2E50(v242, v241, v243);
  DWORD1(v473) = v251;
  sub_1416B2E00(v380, &v473, 3577643008LL, 27111902);
  if ( v380[0] )
    v252 = 0;
  else
    v252 = *(_QWORD *)&v380[8];
  v432 = (__int128)v528;
  v433.m256i_i64[0] = v233;
  v433.m256i_i64[3] = *(_QWORD *)&v512[16];
  *(_OWORD *)&v433.m256i_u64[1] = *(_OWORD *)v512;
  *(_QWORD *)v435 = v509;
  v434 = v508;
  v453 = v236;
  v436 = v489.m128i_i64[0];
  *(__m128i *)&v435[8] = v488;
  v437[0] = Address;
  v437[1] = v527;
  v437[2] = Address;
  v438 = v367;
  v439 = v368.m128i_i64[0];
  v440[0] = v518;
  v440[1] = v498;
  v440[2] = v518;
  v441[0] = v523;
  v441[1] = v499;
  v441[2] = v523;
  v442[0] = v526;
  v442[1] = v500;
  v442[2] = v526;
  v443[0] = v501;
  v443[1] = v485;
  v443[2] = v501;
  v445 = *(_QWORD *)&v475[16];
  v444 = _mm_loadu_si128((const __m128i *)v475);
  v450[0] = v522;
  v450[1] = v502;
  v450[2] = v162;
  v446[0] = v481;
  v446[1] = v469;
  v446[2] = v234;
  v447[0] = v482;
  v447[1] = v470;
  v447[2] = v235;
  v448[0] = v483;
  v448[1] = v471;
  v448[2] = v373;
  v449[0] = v484;
  v449[1] = v472;
  v449[2] = v374;
  v431 = v249;
  v451[0] = v517;
  v451[1] = v529;
  v451[2] = v250;
  v452 = v252;
  sub_1408ECC50(v380);
  a1 = v516;
  v253 = *(_OWORD *)v380;
  v254 = v380[16];
  if ( *(_QWORD *)v380 != -1 )
  {
    *(_OWORD *)(v516 + 88) = *(_OWORD *)&v380[80];
    v255 = _mm_loadu_si128((const __m128i *)&v380[17]);
    v256 = _mm_loadu_si128((const __m128i *)&v380[33]);
    v257 = _mm_loadu_si128((const __m128i *)&v380[49]);
    *(__m128i *)(a1 + 73) = _mm_loadu_si128((const __m128i *)&v380[65]);
    *(__m128i *)(a1 + 57) = v257;
    *(__m128i *)(a1 + 41) = v256;
    *(__m128i *)(a1 + 25) = v255;
    *(_OWORD *)(a1 + 8) = v253;
    *(_BYTE *)(a1 + 24) = v254;
    *(_QWORD *)a1 = 2;
    goto LABEL_372;
  }
  LOBYTE(v522) = v380[16];
  Address = *(PVOID *)&v380[8];
  sub_1408E8540(v380, v6);
  v488 = *(__m128i *)&v380[8];
  v489 = *(__m128i *)&v380[24];
  v490 = *(__m128i *)&v380[40];
  v491 = *(__m128i *)&v380[56];
  v492 = *(_OWORD *)&v380[72];
  v493 = *(__m128i *)&v380[88];
  if ( *(_QWORD *)v380 == -1 )
  {
    *(__m128i *)(a1 + 88) = v493;
    *(_OWORD *)(a1 + 72) = v492;
    v271 = _mm_load_si128(&v488);
    v272 = _mm_load_si128(&v489);
    v273 = _mm_load_si128(&v490);
    *(__m128i *)(a1 + 56) = _mm_load_si128(&v491);
    *(__m128i *)(a1 + 40) = v273;
    *(__m128i *)(a1 + 24) = v272;
    *(__m128i *)(a1 + 8) = v271;
    *(_QWORD *)a1 = 2;
    goto LABEL_368;
  }
  v478 = v382;
  v477 = v381;
  v261 = _mm_load_si128(&v489);
  v262 = _mm_load_si128(&v490);
  v263 = _mm_load_si128(&v491);
  *(__m128i *)&v475[8] = v488;
  *(__m128i *)&v475[24] = v261;
  *(__m128i *)&v475[40] = v262;
  *(__m128i *)&v475[56] = v263;
  *(_OWORD *)&v475[72] = v492;
  v476 = _mm_load_si128(&v493);
  *(_QWORD *)v475 = *(_QWORD *)v380;
  sub_1416DB410(&v365, &v432);
  sub_1416DB410(&v363, &v433.m256i_u64[1]);
  sub_1416DB410(&v361, &v434);
  v264 = v453;
  sub_1416DB410(&v359, &v435[8]);
  sub_1416DB410(&v357, v437);
  sub_1416DB410(&v355, &v438);
  sub_1416DB410(&v353, v440);
  sub_1416DB410(&v351, v441);
  sub_1416DB410(&v426, v442);
  sub_1416DB410(&v424, v443);
  sub_1416DB410(&v494, &v444);
  if ( v450[0] == -1 )
  {
    v528.m128i_i64[0] = -1;
  }
  else
  {
    sub_1416DB410(&v488, v450);
    v528 = v488;
    v233 = v489.m128i_i64[0];
  }
  sub_1416DB410(&v463, v446);
  sub_1416DB410(&v473, v447);
  sub_1416DB410(v512, v448);
  sub_1416DB410(&v508, v449);
  v279 = v431;
  if ( v451[0] == -1 )
  {
    v280 = -1;
  }
  else
  {
    sub_1416DB410(&v488, v451);
    v280 = v488.m128i_i64[0];
    v350 = _mm_loadu_si128((const __m128i *)&v488.m128i_u64[1]);
  }
  *(_OWORD *)&v380[16] = v365;
  *(_QWORD *)&v380[32] = v366;
  *(_OWORD *)&v380[40] = v363;
  *(_QWORD *)&v380[56] = v364;
  *(_OWORD *)&v380[64] = v361;
  *(_QWORD *)&v380[80] = v362;
  v407 = v264;
  *(_OWORD *)&v380[88] = v359;
  v381.m256i_i64[0] = v360;
  v381.m256i_i64[3] = v358;
  *(_OWORD *)&v381.m256i_u64[1] = v357;
  v382 = v355;
  v383 = v356;
  v384 = v353;
  v385 = v354;
  v386 = v351;
  v387 = v352;
  v389 = v427;
  v388 = v426;
  v391 = v425;
  v390 = v424;
  v393 = v495;
  v392 = v494;
  v402 = v528;
  v403 = v233;
  v394 = v463;
  v395 = v464;
  v397 = v474;
  v396 = v473;
  v399 = *(_QWORD *)&v512[16];
  v398 = *(_OWORD *)v512;
  v401 = v509;
  v400 = v508;
  *(__m128i *)v380 = v279;
  v404 = v280;
  v405 = _mm_load_si128(&v350);
  v406 = v452;
  v281 = v476.m128i_i64[0];
  if ( v476.m128i_i64[0] == *(_QWORD *)&v475[72] )
    sub_141939EB0(&v475[72]);
  v282 = *(_QWORD *)&v475[80];
  a1 = v516;
  if ( v281 )
  {
    sub_1419234B0(*(_QWORD *)&v475[80] + 440LL, *(_QWORD *)&v475[80], 440 * v281);
    sub_1419234B0(v282, v380, 440);
    v476.m128i_i64[0] = v281 + 1;
    if ( v281 >= 0x27 )
    {
      v476.m128i_i64[0] = 40;
      if ( v281 != 39 )
      {
        v286 = v282 + 17600;
        v287 = v281 - 39;
        do
        {
          sub_1401AF5F0(v286);
          v286 += 440;
          --v287;
        }
        while ( v287 );
      }
    }
  }
  else
  {
    sub_1419234B0(*(_QWORD *)&v475[80], v380, 440);
    v476.m128i_i64[0] = 1;
  }
  LODWORD(v478) = 1;
  v488.m128i_i32[0] = sub_1416B2E50(v284, v283, v285);
  v488.m128i_i32[1] = v288;
  sub_1416B2E00(v380, &v488, 3577643008LL, 27111902);
  if ( v380[0] )
    v289 = 0;
  else
    v289 = *(_QWORD *)&v380[8];
  v477.m256i_i64[3] = v289;
  sub_1408DCE20(v475);
  sub_1408E9DB0(v380, v6, v475);
  if ( *(_DWORD *)v380 == -1 )
  {
    sub_1408DCC00(&v367, *(_QWORD *)(v6 + 712), *(_QWORD *)(v6 + 720), v475);
    sub_14084D1D0(v475);
    if ( (v522 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v298, v297, v299) )
      *((_BYTE *)Address + 1) = 1;
    v300 = Address;
    v301 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v301 == 2 )
      WakeByAddressSingle(v300);
    v409 = v497;
    v408 = v496;
    sub_1419234B0(v380, &v431, 440);
    v418 = v513;
    v419 = v514;
    v420 = v510;
    v421 = v511;
    v302 = _mm_loadu_si128(&v368);
    v303 = _mm_loadu_si128(&v369);
    v304 = _mm_loadu_si128(v370);
    v410 = v367;
    v411 = v302;
    v412 = v303;
    v413 = v304;
    v414 = v370[1];
    v415 = v370[2];
    v416 = v370[3];
    v417 = _mm_loadu_si128(&v371);
    sub_1419234B0(a1, v380, 640);
    if ( ((v571 != 0) & (unsigned __int8)j) != 0 )
      sub_140001660(v546, v571, 1);
    if ( v515 )
      sub_140001660(v525, v515, 1);
    sub_140039790(v454);
    v581 = 0;
    v580 = 0;
    v579 = 0;
    v578 = 0;
    v577 = 0;
    v576 = 0;
    v575 = 0;
    v574 = 0;
    v573 = 0;
    sub_14084D1D0(&v341);
    v305 = v547;
    v306 = v547[1].m128i_i64[0];
    if ( v306 )
      sub_140001660(v547[1].m128i_i64[1], v306, 1);
    v307 = v305[2].m128i_i64[1];
    if ( v307 )
      sub_140001660(v305[3].m128i_i64[0], v307, 1);
    v308 = v305[10].m128i_i64[0];
    if ( v308 != -1 && v308 )
      sub_140001660(v305[10].m128i_i64[1], v308, 1);
    v309 = v305[11].m128i_i64[1];
    if ( v309 != -1 && v309 )
      sub_140001660(v305[12].m128i_i64[0], v309, 1);
    sub_140849B20(&v305[13]);
    return v516;
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v380[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v380[64];
    v290 = _mm_loadu_si128((const __m128i *)v380);
    v291 = _mm_loadu_si128((const __m128i *)&v380[16]);
    v292 = _mm_loadu_si128((const __m128i *)&v380[32]);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)&v380[48]);
    *(__m128i *)(a1 + 40) = v292;
    *(__m128i *)(a1 + 24) = v291;
    *(__m128i *)(a1 + 8) = v290;
    *(_QWORD *)a1 = 2;
    sub_14084D1D0(v475);
LABEL_368:
    if ( (v522 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v259, v258, v260) )
      *((_BYTE *)Address + 1) = 1;
    v293 = Address;
    v294 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v294 == 2 )
      WakeByAddressSingle(v293);
LABEL_372:
    sub_140291D30(&v431);
    if ( v496.m128i_i64[0] )
      sub_140001660(v496.m128i_i64[1], v496.m128i_i64[0], 1);
    v295 = v515;
    v296 = v571;
    if ( (_QWORD)v510 != -1 && (_QWORD)v510 )
      sub_140001660(*((_QWORD *)&v510 + 1), v510, 1);
    if ( (_QWORD)v513 )
      sub_140001660(*((_QWORD *)&v513 + 1), v513, 1);
    if ( ((v296 != 0) & (unsigned __int8)j) != 0 )
      sub_140001660(v546, v296, 1);
    if ( v295 )
      sub_140001660(v525, v295, 1);
    if ( *(_QWORD *)v454 )
      sub_140001660(*(_QWORD *)&v454[8], *(_QWORD *)v454, 1);
    if ( v455.m128i_i64[0] )
      sub_140001660(v455.m128i_i64[1], v455.m128i_i64[0], 1);
    if ( v457.m128i_i64[0] )
      sub_140001660(v457.m128i_i64[1], v457.m128i_i64[0], 1);
    if ( v459.m128i_i64[0] )
      sub_140001660(v459.m128i_i64[1], v459.m128i_i64[0], 1);
    v27 = 0;
LABEL_23:
    v581 = v27;
    v580 = v27;
    v579 = v27;
    v578 = v27;
    v577 = v27;
    v576 = v27;
    v575 = v27;
    v574 = v27;
    v573 = v27;
    sub_14084D1D0(&v341);
LABEL_24:
    v41 = v547;
    v42 = v547[1].m128i_i64[0];
    if ( v42 )
      sub_140001660(v547[1].m128i_i64[1], v42, 1);
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
