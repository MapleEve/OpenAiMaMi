// module: codexmate_lib/core/voice/workspace
// addr: 0x1407a1120
// name: sub_1407A1120
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407A1120(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rcx
  const __m128i *v18; // rbx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
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
  void *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rcx
  __int32 v63; // eax
  char v64; // bl
  __int64 v65; // r12
  __int64 v66; // rax
  int v67; // eax
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r12
  __int64 v78; // r15
  __int64 v79; // rax
  const __m128i *v80; // rbx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // r12
  __int64 v89; // r15
  __int64 v90; // rax
  const __m128i *v91; // rbx
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // r12
  __int64 v100; // r15
  __int64 v101; // rax
  const __m128i *v102; // rbx
  __int64 v103; // r8
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r14
  __int64 v110; // r12
  __int64 v111; // r15
  __int64 v112; // rax
  const __m128i *v113; // rbx
  __int64 v114; // r14
  __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r13
  __int64 v121; // rcx
  __int64 v122; // r15
  __int64 v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r12
  __int64 v127; // rcx
  __int64 v128; // r15
  __int64 v129; // r12
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rbx
  __int64 v133; // rax
  unsigned __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r13
  __int64 v139; // rsi
  __int64 v140; // r13
  __int64 v141; // rdx
  __int64 v142; // rcx
  unsigned __int64 v143; // r12
  __int64 v144; // rax
  __int64 v145; // r9
  __int64 v146; // rcx
  __int64 v147; // rdx
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  _QWORD *v150; // rsi
  unsigned __int64 v151; // r13
  const __m128i *v152; // rdx
  __int64 v153; // r15
  const __m128i *v154; // r12
  _QWORD *v155; // rax
  __int64 v156; // r13
  const __m128i *v157; // rbx
  _QWORD *v158; // r15
  _QWORD *v159; // r14
  _QWORD *v160; // rcx
  _QWORD *v161; // rcx
  __int64 v162; // r8
  __int64 *v163; // rcx
  __int64 v164; // rdx
  unsigned __int64 v165; // r15
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // rcx
  __int64 v169; // rbx
  signed __int64 v170; // r13
  __int64 v171; // rax
  __int64 v172; // rdx
  unsigned __int64 v173; // r13
  unsigned __int64 i; // r15
  int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // rcx
  int v178; // r13d
  int v179; // eax
  unsigned __int64 v180; // r9
  char v181; // r8
  unsigned int *v182; // rdx
  unsigned __int64 v183; // rcx
  unsigned int *v184; // rbx
  unsigned int *v185; // rax
  char v186; // r8
  __int64 v187; // rcx
  unsigned int v188; // r8d
  char v189; // al
  int v190; // eax
  unsigned __int64 v191; // rbx
  unsigned __int64 v192; // rdi
  unsigned __int64 v193; // r15
  __int64 v194; // rdi
  unsigned __int64 v195; // r13
  __int64 v196; // r15
  unsigned __int64 v197; // rdx
  __int64 v199; // rsi
  __int64 v200; // r14
  __int64 v201; // r13
  const __m128i *v202; // rbx
  __m128i v204; // xmm0
  __int64 v205; // rax
  __int64 v206; // rdx
  unsigned __int64 v207; // rax
  __int64 v208; // rsi
  __int64 v209; // r15
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rbx
  __int64 v213; // r15
  __int64 v214; // rax
  __int64 v215; // r13
  __int64 v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v220; // r14
  __int64 v221; // rsi
  __int64 v222; // r13
  char v223; // r15
  __int64 v224; // rcx
  __int64 v225; // rbx
  __int64 v226; // rax
  __int64 v227; // rbx
  __int64 v228; // rax
  __int64 v229; // r15
  unsigned __int64 v230; // rcx
  __int64 v231; // rax
  __m128i v232; // xmm6
  __int64 v233; // rbx
  int v234; // edx
  __int64 v235; // rax
  __int128 v236; // kr40_16
  char v237; // dl
  __m128i v238; // xmm0
  __m128i v239; // xmm1
  __m128i v240; // xmm2
  __int64 v241; // rdx
  __int64 v242; // rcx
  __m128i v243; // xmm1
  __m128i v244; // xmm2
  __m128i v245; // xmm3
  char v246; // bl
  __int64 v247; // rcx
  void *v248; // rax
  void *v249; // r14
  __int64 v250; // rcx
  __m128i *v251; // rax
  __m128i v252; // xmm0
  __m128i v253; // xmm1
  __m128i v254; // xmm2
  void *v255; // rax
  void *v256; // r14
  __int64 v257; // rcx
  __m128i *v258; // rax
  __m128i v259; // xmm6
  __int64 v260; // rax
  unsigned __int64 v261; // rbx
  __int64 v262; // r14
  _QWORD *v263; // rcx
  _QWORD *v264; // rbx
  __int32 v265; // edx
  __int64 v266; // rax
  __m128i v267; // xmm0
  __m128i v268; // xmm1
  __m128i v269; // xmm2
  void *v270; // rcx
  char v271; // al
  __int64 v272; // rdi
  __int64 v273; // rbx
  __int64 v274; // rdx
  __int64 v275; // rcx
  void *v276; // rcx
  char v277; // al
  __m128i v278; // xmm1
  __m128i v279; // xmm2
  __m128i v280; // xmm3
  const __m128i *v281; // rdi
  __int64 v282; // rdx
  __int64 v283; // rdx
  __int64 v284; // rdx
  __int64 v285; // rdx
  __int64 v286; // rcx
  __m128i v287; // xmm0
  __m128i v288; // xmm1
  __m128i v289; // xmm2
  __m128i v290; // xmm3
  __m128i v291; // xmm4
  __m128i v292; // xmm5
  __m128i v293; // xmm6
  __int64 v294; // rbx
  __int64 v295; // r14
  _BYTE *v296; // rax
  __int64 v297; // r14
  __int64 v298; // rcx
  __int64 v299; // rdx
  __int64 v300; // rdx
  __m128i v301; // xmm0
  __m128i v302; // xmm1
  __m128i v303; // xmm2
  __m128i v304; // xmm3
  __m128i v305; // xmm4
  __int64 v306; // rax
  __int64 v307; // r15
  __int64 v308; // rcx
  __int64 v309; // rax
  __int64 v310; // rbx
  __int64 v311; // rbx
  __int64 v312; // rax
  __int64 v313; // rcx
  __int64 v314; // rax
  __int64 v315; // rcx
  __int64 v316; // [rsp+40h] [rbp-40h] BYREF
  __m128i v317; // [rsp+48h] [rbp-38h]
  __m128i v318; // [rsp+58h] [rbp-28h]
  __m128i v319; // [rsp+68h] [rbp-18h]
  __m128i v320; // [rsp+78h] [rbp-8h]
  __m128i v321; // [rsp+88h] [rbp+8h]
  __m128i v322; // [rsp+98h] [rbp+18h]
  __m256i v323; // [rsp+A8h] [rbp+28h]
  __int64 v324; // [rsp+C8h] [rbp+48h]
  __m128i v325; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v326; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v327; // [rsp+F0h] [rbp+70h]
  __int128 v328; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v329; // [rsp+108h] [rbp+88h]
  __int128 v330; // [rsp+110h] [rbp+90h] BYREF
  __int64 v331; // [rsp+120h] [rbp+A0h]
  __int128 v332; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v333; // [rsp+138h] [rbp+B8h]
  __int128 v334; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v335; // [rsp+150h] [rbp+D0h]
  __int128 v336; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v337; // [rsp+168h] [rbp+E8h]
  __int128 v338; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v339; // [rsp+180h] [rbp+100h]
  __int128 v340; // [rsp+188h] [rbp+108h] BYREF
  __int64 v341; // [rsp+198h] [rbp+118h]
  __m128i v342; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v343; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v344; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v345[4]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v346; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v347[3]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v348; // [rsp+238h] [rbp+1B8h]
  __int64 v349; // [rsp+240h] [rbp+1C0h]
  __int64 v350; // [rsp+248h] [rbp+1C8h]
  __int64 v351; // [rsp+250h] [rbp+1D0h]
  __int64 v352; // [rsp+258h] [rbp+1D8h]
  unsigned __int64 *v353; // [rsp+260h] [rbp+1E0h]
  _QWORD v354[3]; // [rsp+268h] [rbp+1E8h] BYREF
  _BYTE v355[104]; // [rsp+280h] [rbp+200h] BYREF
  __m256i v356; // [rsp+2E8h] [rbp+268h]
  __int128 v357; // [rsp+308h] [rbp+288h]
  __int64 v358; // [rsp+318h] [rbp+298h]
  __int128 v359; // [rsp+320h] [rbp+2A0h]
  __int64 v360; // [rsp+330h] [rbp+2B0h]
  __int128 v361; // [rsp+338h] [rbp+2B8h]
  __int64 v362; // [rsp+348h] [rbp+2C8h]
  __int128 v363; // [rsp+350h] [rbp+2D0h]
  __int64 v364; // [rsp+360h] [rbp+2E0h]
  __int128 v365; // [rsp+368h] [rbp+2E8h]
  __int64 v366; // [rsp+378h] [rbp+2F8h]
  __int128 v367; // [rsp+380h] [rbp+300h]
  unsigned __int64 v368; // [rsp+390h] [rbp+310h]
  __int128 v369; // [rsp+398h] [rbp+318h]
  unsigned __int64 v370; // [rsp+3A8h] [rbp+328h]
  __int128 v371; // [rsp+3B0h] [rbp+330h]
  unsigned __int64 v372; // [rsp+3C0h] [rbp+340h]
  __int128 v373; // [rsp+3C8h] [rbp+348h]
  __int64 v374; // [rsp+3D8h] [rbp+358h]
  __m128i v375; // [rsp+3E0h] [rbp+360h]
  __int64 v376; // [rsp+3F0h] [rbp+370h]
  __int64 v377; // [rsp+3F8h] [rbp+378h]
  __int64 v378; // [rsp+400h] [rbp+380h]
  __int64 v379; // [rsp+408h] [rbp+388h]
  __int64 v380; // [rsp+410h] [rbp+390h]
  __m128i v381; // [rsp+418h] [rbp+398h]
  __int64 v382; // [rsp+428h] [rbp+3A8h]
  char v383; // [rsp+430h] [rbp+3B0h]
  __m128i v384; // [rsp+438h] [rbp+3B8h]
  __int64 v385; // [rsp+448h] [rbp+3C8h]
  __m128i v386; // [rsp+450h] [rbp+3D0h]
  __m128i v387; // [rsp+460h] [rbp+3E0h]
  __m128i v388; // [rsp+470h] [rbp+3F0h]
  __m128i v389; // [rsp+480h] [rbp+400h]
  __m128i v390; // [rsp+490h] [rbp+410h]
  __m128i v391; // [rsp+4A0h] [rbp+420h]
  __m128i v392; // [rsp+4B0h] [rbp+430h]
  __m128i v393; // [rsp+4C0h] [rbp+440h]
  __int128 v394; // [rsp+4D0h] [rbp+450h]
  __int64 v395; // [rsp+4E0h] [rbp+460h]
  __int128 v396; // [rsp+4E8h] [rbp+468h]
  __int64 v397; // [rsp+4F8h] [rbp+478h]
  unsigned __int64 v398; // [rsp+508h] [rbp+488h]
  __int64 v399; // [rsp+510h] [rbp+490h]
  __int128 v400; // [rsp+518h] [rbp+498h] BYREF
  __int64 v401; // [rsp+528h] [rbp+4A8h]
  __int128 v402; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v403; // [rsp+540h] [rbp+4C0h]
  __int64 v404; // [rsp+548h] [rbp+4C8h]
  __int64 v405; // [rsp+550h] [rbp+4D0h]
  __int64 v406; // [rsp+558h] [rbp+4D8h]
  __m128i v407; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v408; // [rsp+570h] [rbp+4F0h] BYREF
  __m256i v409; // [rsp+580h] [rbp+500h] BYREF
  __m128i v410; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v411[24]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v412; // [rsp+5C8h] [rbp+548h]
  _QWORD v413[3]; // [rsp+5D0h] [rbp+550h] BYREF
  __m128i v414; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v415; // [rsp+5F8h] [rbp+578h]
  _QWORD v416[3]; // [rsp+600h] [rbp+580h] BYREF
  _QWORD v417[3]; // [rsp+618h] [rbp+598h] BYREF
  _QWORD v418[3]; // [rsp+630h] [rbp+5B0h] BYREF
  _QWORD v419[3]; // [rsp+648h] [rbp+5C8h] BYREF
  __m128i v420; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v421; // [rsp+670h] [rbp+5F0h]
  _QWORD v422[3]; // [rsp+678h] [rbp+5F8h] BYREF
  _QWORD v423[3]; // [rsp+690h] [rbp+610h] BYREF
  _QWORD v424[3]; // [rsp+6A8h] [rbp+628h] BYREF
  _QWORD v425[3]; // [rsp+6C0h] [rbp+640h] BYREF
  _QWORD v426[3]; // [rsp+6D8h] [rbp+658h] BYREF
  _QWORD v427[3]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v428; // [rsp+708h] [rbp+688h]
  char v429; // [rsp+710h] [rbp+690h]
  _BYTE v430[24]; // [rsp+720h] [rbp+6A0h] BYREF
  __m128i v431; // [rsp+738h] [rbp+6B8h] BYREF
  unsigned __int64 v432; // [rsp+748h] [rbp+6C8h]
  __m128i v433; // [rsp+750h] [rbp+6D0h]
  __int64 v434; // [rsp+760h] [rbp+6E0h]
  __m128i v435; // [rsp+768h] [rbp+6E8h] BYREF
  __int64 v436; // [rsp+778h] [rbp+6F8h]
  __int64 v437; // [rsp+780h] [rbp+700h]
  __int64 v438; // [rsp+788h] [rbp+708h]
  __int128 v439; // [rsp+790h] [rbp+710h] BYREF
  unsigned __int64 v440; // [rsp+7A0h] [rbp+720h]
  unsigned __int64 v441; // [rsp+7A8h] [rbp+728h]
  __int64 v442; // [rsp+7B0h] [rbp+730h]
  unsigned __int64 v443; // [rsp+7B8h] [rbp+738h]
  __int64 v444; // [rsp+7C0h] [rbp+740h]
  __int64 v445; // [rsp+7C8h] [rbp+748h]
  __int64 v446; // [rsp+7D0h] [rbp+750h]
  __int64 v447; // [rsp+7D8h] [rbp+758h]
  __int64 v448; // [rsp+7E0h] [rbp+760h]
  __int128 v449; // [rsp+7E8h] [rbp+768h] BYREF
  unsigned __int64 v450; // [rsp+7F8h] [rbp+778h]
  _BYTE v451[88]; // [rsp+800h] [rbp+780h] BYREF
  __m128i v452; // [rsp+858h] [rbp+7D8h]
  __m256i v453; // [rsp+868h] [rbp+7E8h]
  __int64 v454; // [rsp+888h] [rbp+808h]
  unsigned __int64 v455; // [rsp+898h] [rbp+818h]
  __int64 v456; // [rsp+8A0h] [rbp+820h]
  __int64 v457; // [rsp+8A8h] [rbp+828h]
  __int64 v458; // [rsp+8B0h] [rbp+830h]
  __int64 v459; // [rsp+8B8h] [rbp+838h]
  __int64 v460; // [rsp+8C0h] [rbp+840h]
  __int64 v461; // [rsp+8C8h] [rbp+848h]
  __int64 v462; // [rsp+8D0h] [rbp+850h]
  __int64 v463; // [rsp+8D8h] [rbp+858h]
  __m128i v464; // [rsp+8E0h] [rbp+860h] BYREF
  __m128i v465; // [rsp+8F0h] [rbp+870h] BYREF
  __m128i v466; // [rsp+900h] [rbp+880h] BYREF
  __m128i v467; // [rsp+910h] [rbp+890h] BYREF
  __int128 v468; // [rsp+920h] [rbp+8A0h]
  __m128i v469; // [rsp+930h] [rbp+8B0h] BYREF
  __int128 v470; // [rsp+948h] [rbp+8C8h] BYREF
  unsigned __int64 v471; // [rsp+958h] [rbp+8D8h]
  __m128i v472; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v473; // [rsp+970h] [rbp+8F0h]
  __int64 v474; // [rsp+978h] [rbp+8F8h]
  __int64 v475; // [rsp+980h] [rbp+900h]
  __int64 v476; // [rsp+988h] [rbp+908h]
  __int64 v477; // [rsp+990h] [rbp+910h]
  __int64 v478; // [rsp+998h] [rbp+918h]
  __m128i *v479; // [rsp+9A0h] [rbp+920h]
  unsigned __int64 v480; // [rsp+9A8h] [rbp+928h]
  __int64 v481; // [rsp+9B0h] [rbp+930h]
  unsigned __int64 v482; // [rsp+9B8h] [rbp+938h]
  __int64 v483; // [rsp+9C0h] [rbp+940h]
  __m128i v484; // [rsp+9C8h] [rbp+948h] BYREF
  __int64 v485; // [rsp+9D8h] [rbp+958h]
  __int128 v486; // [rsp+9E0h] [rbp+960h] BYREF
  __int64 v487; // [rsp+9F0h] [rbp+970h]
  _BYTE v488[24]; // [rsp+9F8h] [rbp+978h] BYREF
  __int128 v489; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v490; // [rsp+A20h] [rbp+9A0h]
  __int64 v491; // [rsp+A28h] [rbp+9A8h]
  const __m128i *v492; // [rsp+A30h] [rbp+9B0h]
  __int64 v493; // [rsp+A38h] [rbp+9B8h]
  unsigned __int64 v494; // [rsp+A40h] [rbp+9C0h]
  __int64 v495; // [rsp+A48h] [rbp+9C8h]
  unsigned __int64 v496; // [rsp+A50h] [rbp+9D0h]
  __int64 v497; // [rsp+A58h] [rbp+9D8h]
  unsigned __int64 v498; // [rsp+A60h] [rbp+9E0h]
  char v499; // [rsp+A6Fh] [rbp+9EFh] BYREF
  unsigned __int64 v500; // [rsp+A70h] [rbp+9F0h]
  __int64 v501; // [rsp+A78h] [rbp+9F8h]
  __int64 v502; // [rsp+A80h] [rbp+A00h]
  unsigned __int64 v503; // [rsp+A88h] [rbp+A08h]
  signed __int64 v504; // [rsp+A90h] [rbp+A10h]
  __m128i Address; // [rsp+A98h] [rbp+A18h]
  char v506; // [rsp+AA8h] [rbp+A28h]
  char v507; // [rsp+AA9h] [rbp+A29h]
  char v508; // [rsp+AAAh] [rbp+A2Ah]
  char v509; // [rsp+AABh] [rbp+A2Bh]
  char v510; // [rsp+AACh] [rbp+A2Ch]
  char v511; // [rsp+AADh] [rbp+A2Dh]
  char v512; // [rsp+AAEh] [rbp+A2Eh]
  char v513; // [rsp+AAFh] [rbp+A2Fh]
  char v514; // [rsp+AB0h] [rbp+A30h]
  char v515; // [rsp+AB1h] [rbp+A31h]
  char v516; // [rsp+AB2h] [rbp+A32h]
  char v517; // [rsp+AB3h] [rbp+A33h]
  char v518; // [rsp+AB4h] [rbp+A34h]
  char v519; // [rsp+AB5h] [rbp+A35h]
  char v520; // [rsp+AB6h] [rbp+A36h]
  char v521; // [rsp+AB7h] [rbp+A37h]
  __int64 v522; // [rsp+AB8h] [rbp+A38h]
  const __m128i *v523; // [rsp+AC0h] [rbp+A40h]
  char v524; // [rsp+AD5h] [rbp+A55h]
  char v525; // [rsp+AD6h] [rbp+A56h]
  char v526; // [rsp+AD7h] [rbp+A57h]
  char v527; // [rsp+AD8h] [rbp+A58h]
  char v528; // [rsp+AD9h] [rbp+A59h]
  char v529; // [rsp+ADAh] [rbp+A5Ah]
  char v530; // [rsp+ADBh] [rbp+A5Bh]
  char v531; // [rsp+ADCh] [rbp+A5Ch]
  char v532; // [rsp+ADDh] [rbp+A5Dh]
  char v533; // [rsp+ADEh] [rbp+A5Eh]
  char v534; // [rsp+ADFh] [rbp+A5Fh]
  char v535; // [rsp+AE0h] [rbp+A60h]
  char v536; // [rsp+AE1h] [rbp+A61h]
  char v537; // [rsp+AE2h] [rbp+A62h]
  char v538; // [rsp+AE3h] [rbp+A63h]
  char v539; // [rsp+AE4h] [rbp+A64h]
  char v540; // [rsp+AE5h] [rbp+A65h]
  char v541; // [rsp+AE6h] [rbp+A66h]
  char v542; // [rsp+AE7h] [rbp+A67h]
  char v543; // [rsp+AE8h] [rbp+A68h]
  char v544; // [rsp+AE9h] [rbp+A69h]
  char v545; // [rsp+AEAh] [rbp+A6Ah]
  __int64 v546; // [rsp+B00h] [rbp+A80h]
  __int64 v547; // [rsp+B08h] [rbp+A88h]
  unsigned __int64 j; // [rsp+B10h] [rbp+A90h]
  char v549; // [rsp+B1Eh] [rbp+A9Eh]
  char v550; // [rsp+B1Fh] [rbp+A9Fh]
  char v551; // [rsp+B20h] [rbp+AA0h]
  char v552; // [rsp+B21h] [rbp+AA1h]
  char v553; // [rsp+B22h] [rbp+AA2h]
  char v554; // [rsp+B23h] [rbp+AA3h]
  char v555; // [rsp+B24h] [rbp+AA4h]
  char v556; // [rsp+B25h] [rbp+AA5h]
  char v557; // [rsp+B26h] [rbp+AA6h]
  char v558; // [rsp+B27h] [rbp+AA7h]
  char v559; // [rsp+B28h] [rbp+AA8h]
  char v560; // [rsp+B29h] [rbp+AA9h]
  char v561; // [rsp+B2Ah] [rbp+AAAh]
  char v562; // [rsp+B2Bh] [rbp+AABh]
  char v563; // [rsp+B2Ch] [rbp+AACh]
  char v564; // [rsp+B2Dh] [rbp+AADh]
  char v565; // [rsp+B2Eh] [rbp+AAEh]
  char v566; // [rsp+B2Fh] [rbp+AAFh]
  char v567; // [rsp+B30h] [rbp+AB0h]
  char v568; // [rsp+B31h] [rbp+AB1h]
  char v569; // [rsp+B32h] [rbp+AB2h]
  char v570; // [rsp+B33h] [rbp+AB3h]
  char v571; // [rsp+B34h] [rbp+AB4h]
  char v572; // [rsp+B35h] [rbp+AB5h]
  char v573; // [rsp+B36h] [rbp+AB6h]
  char v574; // [rsp+B37h] [rbp+AB7h]
  __int64 v575; // [rsp+B38h] [rbp+AB8h]

  v575 = -2;
  v523 = a3;
  v557 = 1;
  v556 = 1;
  v555 = 1;
  v554 = 1;
  v553 = 1;
  v552 = 1;
  v551 = 1;
  v550 = 1;
  v549 = 1;
  read_workspace_file(v355);
  v407 = *(__m128i *)&v355[8];
  v408 = *(__m128i *)&v355[24];
  v409 = *(__m256i *)&v355[40];
  v410 = *(__m128i *)&v355[72];
  *(_OWORD *)v411 = *(_OWORD *)&v355[88];
  if ( *(_QWORD *)v355 == -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)v411;
    *(__m128i *)(a1 + 72) = v410;
    v24 = _mm_load_si128(&v407);
    v25 = _mm_load_si128(&v408);
    si128 = _mm_load_si128((const __m128i *)&v409);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v409.m256i_u64[2]);
    *(__m128i *)(a1 + 40) = si128;
    *(__m128i *)(a1 + 24) = v25;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_24;
  }
  v493 = a1;
  v324 = v357;
  v323 = v356;
  v317 = v407;
  v318 = _mm_load_si128(&v408);
  v319 = _mm_load_si128((const __m128i *)&v409);
  v320 = _mm_load_si128((const __m128i *)&v409.m256i_u64[2]);
  v321 = v410;
  v322 = _mm_load_si128((const __m128i *)v411);
  v316 = *(_QWORD *)v355;
  v8 = v523[3].m128i_i64[0];
  v9 = v523[3].m128i_i64[1];
  v571 = 1;
  v570 = 1;
  v569 = 1;
  v568 = 1;
  v567 = 1;
  v566 = 1;
  v565 = 1;
  v564 = 1;
  v563 = 1;
  v501 = sub_14033BC10(v8, v9);
  v546 = v11;
  if ( !v11 )
  {
    nullsub_1(v10);
    v36 = (__m128i *)sub_140001650(24, 1);
    if ( !v36 )
    {
      v571 = 1;
      v570 = 1;
      v569 = 1;
      v568 = 1;
      v567 = 1;
      v566 = 1;
      v565 = 1;
      v564 = 1;
      v563 = 1;
      sub_1416C2D4B(1, 24);
    }
    *v36 = _mm_loadu_si128(&xmmword_14178FD48);
    v36[1].m128i_i64[0] = 0x7974706D65206562LL;
    a1 = v493;
    *(_QWORD *)(v493 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 24;
    *(_QWORD *)(a1 + 24) = v36;
    *(_QWORD *)(a1 + 32) = 24;
    goto LABEL_22;
  }
  if ( v523[10].m128i_i64[0] == -1 )
    goto LABEL_13;
  v12 = v523[10].m128i_i64[1];
  v13 = v523[11].m128i_i64[0];
  v571 = 1;
  v570 = 1;
  v569 = 1;
  v568 = 1;
  v567 = 1;
  v566 = 1;
  v565 = 1;
  v564 = 1;
  v563 = 1;
  v15 = sub_14033BC10(v12, v13);
  if ( !v15 || (v16 = v14) == 0 )
  {
LABEL_13:
    if ( v317.m128i_i64[1] )
    {
      v28 = v523[1].m128i_i64[1];
      v29 = v523[2].m128i_i64[0];
      v30 = 0;
      while ( *(_QWORD *)(v317.m128i_i64[0] + v30 + 16) != v29
           || (unsigned int)sub_1416847B0(*(_QWORD *)(v317.m128i_i64[0] + v30 + 8), v28, v29) )
      {
        v30 += 112;
        if ( 112 * v317.m128i_i64[1] == v30 )
          goto LABEL_21;
      }
      v571 = 1;
      v570 = 1;
      v569 = 1;
      v568 = 1;
      v567 = 1;
      v566 = 1;
      v565 = 1;
      v564 = 1;
      v563 = 1;
      sub_14149C500(v488, v30 + v317.m128i_i64[0]);
      sub_14149C500(&v484, v30 + v317.m128i_i64[0] + 24);
      sub_14149C500(&v464, v30 + v317.m128i_i64[0] + 48);
      v31 = *(unsigned __int8 *)(v317.m128i_i64[0] + v30 + 105);
      sub_14149C500(&v342, v30 + v317.m128i_i64[0] + 72);
      v32 = *(unsigned __int8 *)(v317.m128i_i64[0] + v30 + 104);
      v33 = *(_QWORD *)(v317.m128i_i64[0] + v30 + 96);
      *(_OWORD *)v355 = *(_OWORD *)&v488[8];
      *(__m128i *)&v355[16] = v484;
      *(_QWORD *)&v355[32] = v485;
      *(__m128i *)&v355[40] = v464;
      *(_QWORD *)&v355[56] = v465.m128i_i64[0];
      *(__m128i *)&v355[64] = v342;
      *(_QWORD *)&v355[80] = v343.m128i_i64[0];
      *(_QWORD *)v411 = v343.m128i_i64[0];
      v410 = v342;
      v409.m256i_i64[3] = v465.m128i_i64[0];
      v409.m256i_i64[0] = v485;
      *(__m128i *)&v409.m256i_u64[1] = v464;
      v408 = v484;
      v407 = *(__m128i *)&v488[8];
      *(_QWORD *)&v451[80] = v343.m128i_i64[0];
      *(__m128i *)&v451[64] = v342;
      *(_QWORD *)&v451[56] = v465.m128i_i64[0];
      *(_QWORD *)&v451[32] = v485;
      *(__m128i *)&v451[40] = v464;
      *(__m128i *)&v451[16] = v484;
      *(_OWORD *)v451 = *(_OWORD *)&v488[8];
      v436 = v343.m128i_i64[0];
      v435 = v342;
      v34 = _mm_load_si128((const __m128i *)v451);
      v35 = _mm_load_si128((const __m128i *)&v451[16]);
      v434 = v465.m128i_i64[0];
      v432 = v485;
      v433 = v464;
      v431 = v35;
      *(__m128i *)&v430[8] = v34;
      *(_QWORD *)v430 = *(_QWORD *)v488;
      v437 = v33;
      v438 = v32 | (unsigned int)(v31 << 8);
      goto LABEL_88;
    }
LABEL_21:
    v342.m128i_i64[0] = (__int64)v523[1].m128i_i64;
    v342.m128i_i64[1] = (__int64)sub_1400015F0;
    v571 = 1;
    v570 = 1;
    v569 = 1;
    v568 = 1;
    v567 = 1;
    v566 = 1;
    v565 = 1;
    v564 = 1;
    v563 = 1;
    sub_14149C0F0(&v355[8], &unk_141788E14, &v342);
    *(_QWORD *)v355 = 8;
    v408 = *(__m128i *)&v355[16];
    v409 = *(__m256i *)&v355[32];
    v410 = *(__m128i *)&v355[64];
    v407 = _mm_loadu_si128((const __m128i *)v355);
    v37 = *(_QWORD *)&v355[88];
    *(_OWORD *)&v451[16] = *(_OWORD *)&v355[16];
    *(_OWORD *)&v451[32] = *(_OWORD *)&v355[32];
    *(_OWORD *)&v451[48] = *(_OWORD *)&v355[48];
    *(_OWORD *)&v451[64] = *(_OWORD *)&v355[64];
    *(_QWORD *)&v451[80] = *(_QWORD *)&v355[80];
    *(__m128i *)v451 = v407;
    a1 = v493;
    *(_QWORD *)(v493 + 88) = *(_QWORD *)&v355[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v451[64];
    v38 = _mm_load_si128((const __m128i *)v451);
    v39 = _mm_load_si128((const __m128i *)&v451[16]);
    v40 = _mm_load_si128((const __m128i *)&v451[32]);
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&v451[48]);
    *(__m128i *)(a1 + 40) = v40;
    *(__m128i *)(a1 + 24) = v39;
    *(__m128i *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 96) = v37;
LABEL_22:
    *(_QWORD *)a1 = 2;
    v27 = 1;
    goto LABEL_23;
  }
  v571 = 1;
  v570 = 1;
  v569 = 1;
  v568 = 1;
  v567 = 1;
  v566 = 1;
  v565 = 1;
  v564 = 1;
  v563 = 1;
  sub_14149C500(&v407, &v523[1]);
  v18 = v523;
  v19 = v523[11].m128i_i64[1] == -1;
  v495 = a2;
  if ( v19 )
  {
    v60 = &unk_14178FD60;
    v22 = 15;
  }
  else
  {
    v20 = sub_14033BC10(v523[12].m128i_i64[0], v523[12].m128i_i64[1]);
    LOBYTE(v17) = v20 == 0 || v21 == 0;
    v22 = 15;
    if ( !(_BYTE)v17 )
      v22 = v21;
    if ( v22 < 0 )
    {
      v23 = 0;
      goto LABEL_11;
    }
    v60 = &unk_14178FD60;
    if ( !(_BYTE)v17 )
      v60 = (void *)v20;
    v18 = v523;
  }
  nullsub_1(v17);
  v23 = 1;
  v61 = sub_140001650(v22, 1);
  if ( !v61 )
  {
    v21 = v22;
LABEL_11:
    sub_1416C2D4B(v23, v21);
  }
  v498 = v61;
  v494 = v22;
  sub_141684120(v61, v60, v22);
  v63 = v18[26].m128i_i32[2];
  v64 = 5;
  if ( (_BYTE)v63 != 0xFF )
    v64 = v63;
  if ( v16 < 0 )
  {
    v65 = 0;
    goto LABEL_82;
  }
  nullsub_1(v62);
  v65 = 1;
  v66 = sub_140001650(v16, 1);
  if ( !v66 )
LABEL_82:
    sub_1416C2D4B(v65, v16);
  v547 = v66;
  v502 = v16;
  sub_141684120(v66, v15, v16);
  v67 = sub_141475580();
  a2 = v495;
  *(_DWORD *)v451 = v67;
  *(_DWORD *)&v451[4] = v68;
  sub_141475530(v355, v451, 3577643008LL, 27111902);
  if ( v355[0] )
    v69 = 0;
  else
    v69 = *(_QWORD *)&v355[8];
  *(__m128i *)v430 = _mm_loadu_si128(&v407);
  *(_QWORD *)&v430[16] = v408.m128i_i64[0];
  v431.m128i_i64[0] = v494;
  v431.m128i_i64[1] = v498;
  v432 = v494;
  v433.m128i_i64[0] = 0;
  v433.m128i_i64[1] = 1;
  v434 = 0;
  BYTE1(v438) = v64;
  v435.m128i_i64[0] = v502;
  v435.m128i_i64[1] = v547;
  v436 = v502;
  LOBYTE(v438) = 0;
  v437 = v69;
LABEL_88:
  v70 = v523[4].m128i_i64[0];
  v71 = 1;
  if ( v70 != -1 )
    v71 = v523[4].m128i_i64[1];
  v72 = v523[5].m128i_i64[0];
  if ( v70 == -1 )
  {
    v72 = 0;
    v70 = 0;
  }
  v498 = v70;
  v502 = v71;
  v73 = sub_14033BC10(v71, v72);
  v494 = v74;
  v76 = v74;
  if ( v74 < 0 )
  {
    v77 = 0;
    goto LABEL_94;
  }
  if ( v74 )
  {
    v78 = v73;
    nullsub_1(v75);
    v77 = 1;
    v79 = sub_140001650(v76, 1);
    if ( !v79 )
LABEL_94:
      sub_1416C2D4B(v77, v76);
    v474 = v79;
    sub_141684120(v79, v78, v76);
  }
  else
  {
    v474 = 1;
  }
  v80 = v523;
  if ( v498 )
    sub_140001660(v502, v498, 1);
  v81 = v80[5].m128i_i64[1];
  v82 = 1;
  if ( v81 != -1 )
    v82 = v80[6].m128i_i64[0];
  v83 = v80[6].m128i_i64[1];
  if ( v81 == -1 )
  {
    v83 = 0;
    v81 = 0;
  }
  v502 = v81;
  v547 = v82;
  v84 = sub_14033BC10(v82, v83);
  v498 = v85;
  v87 = v85;
  if ( v85 < 0 )
  {
    v88 = 0;
    goto LABEL_107;
  }
  if ( v85 )
  {
    v89 = v84;
    nullsub_1(v86);
    v88 = 1;
    v90 = sub_140001650(v87, 1);
    if ( !v90 )
LABEL_107:
      sub_1416C2D4B(v88, v87);
    v475 = v90;
    sub_141684120(v90, v89, v87);
  }
  else
  {
    v475 = 1;
  }
  v91 = v523;
  if ( v502 )
    sub_140001660(v547, v502, 1);
  v92 = v91[7].m128i_i64[0];
  v93 = 1;
  if ( v92 != -1 )
    v93 = v91[7].m128i_i64[1];
  v94 = v91[8].m128i_i64[0];
  if ( v92 == -1 )
  {
    v94 = 0;
    v92 = 0;
  }
  v547 = v92;
  v522 = v93;
  v95 = sub_14033BC10(v93, v94);
  v502 = v96;
  v98 = v96;
  if ( v96 < 0 )
  {
    v99 = 0;
    goto LABEL_120;
  }
  if ( v96 )
  {
    v100 = v95;
    nullsub_1(v97);
    v99 = 1;
    v101 = sub_140001650(v98, 1);
    if ( !v101 )
LABEL_120:
      sub_1416C2D4B(v99, v98);
    v476 = v101;
    sub_141684120(v101, v100, v98);
  }
  else
  {
    v476 = 1;
  }
  v102 = v523;
  if ( v547 )
    sub_140001660(v522, v547, 1);
  v103 = v102[8].m128i_i64[1];
  v104 = 1;
  if ( v103 != -1 )
    v104 = v102[9].m128i_i64[0];
  v105 = v102[9].m128i_i64[1];
  if ( v103 == -1 )
  {
    v105 = 0;
    v103 = 0;
  }
  v547 = v103;
  v522 = v104;
  v106 = sub_14033BC10(v104, v105);
  Address.m128i_i64[0] = a4;
  v109 = v107;
  if ( v107 < 0 )
  {
    v110 = 0;
    goto LABEL_133;
  }
  if ( v107 )
  {
    v111 = v106;
    nullsub_1(v108);
    v110 = 1;
    v112 = sub_140001650(v109, 1);
    if ( !v112 )
LABEL_133:
      sub_1416C2D4B(v110, v109);
    v461 = v112;
    sub_141684120(v112, v111, v109);
  }
  else
  {
    v461 = 1;
  }
  v113 = v523;
  v477 = v109;
  if ( v547 )
    sub_140001660(v522, v547, 1);
  *(_QWORD *)&v355[16] = v113[20].m128i_i64[0];
  *(__m128i *)v355 = _mm_loadu_si128(v113 + 19);
  v545 = 1;
  v544 = 1;
  v543 = 1;
  v542 = 1;
  v541 = 1;
  sub_1407AAF00(&v407, v355);
  v114 = v546;
  v115 = v407.m128i_i64[0];
  v116 = v408.m128i_i64[0];
  if ( v407.m128i_i64[0] == -1 )
    v116 = 0;
  v117 = 1;
  v118 = v407.m128i_i64[1];
  if ( v407.m128i_i64[0] == -1 )
    v118 = 1;
  v445 = v118;
  if ( v407.m128i_i64[0] == -1 )
    v115 = 0;
  v457 = v115;
  *(_QWORD *)&v355[16] = v523[21].m128i_i64[1];
  *(__m128i *)v355 = _mm_loadu_si128((const __m128i *)((char *)v523 + 328));
  v540 = 1;
  v539 = 1;
  v538 = 1;
  v537 = 1;
  v536 = 1;
  sub_1407AAF00(&v407, v355);
  v119 = v407.m128i_i64[0];
  v120 = v408.m128i_i64[0];
  if ( v407.m128i_i64[0] != -1 )
    v117 = v407.m128i_i64[1];
  v446 = v117;
  if ( v407.m128i_i64[0] == -1 )
  {
    v120 = 0;
    v119 = 0;
  }
  v458 = v119;
  *(_QWORD *)&v355[16] = v523[23].m128i_i64[0];
  *(__m128i *)v355 = _mm_loadu_si128(v523 + 22);
  v535 = 1;
  v534 = 1;
  v533 = 1;
  v532 = 1;
  sub_1407AAF00(&v407, v355);
  v121 = v407.m128i_i64[0];
  v122 = v408.m128i_i64[0];
  if ( v407.m128i_i64[0] == -1 )
    v122 = 0;
  v123 = 1;
  v124 = v407.m128i_i64[1];
  if ( v407.m128i_i64[0] == -1 )
    v124 = 1;
  v447 = v124;
  if ( v407.m128i_i64[0] == -1 )
    v121 = 0;
  v459 = v121;
  *(_QWORD *)&v355[16] = v523[24].m128i_i64[1];
  *(__m128i *)v355 = _mm_loadu_si128((const __m128i *)((char *)v523 + 376));
  v531 = 1;
  v530 = 1;
  v529 = 1;
  sub_1407AAF00(&v407, v355);
  v125 = v407.m128i_i64[0];
  v126 = v408.m128i_i64[0];
  if ( v407.m128i_i64[0] == -1 )
    v126 = 0;
  else
    v123 = v407.m128i_i64[1];
  v448 = v123;
  if ( v407.m128i_i64[0] == -1 )
    v125 = 0;
  v460 = v125;
  *(_QWORD *)&v355[16] = v523[26].m128i_i64[0];
  *(__m128i *)v355 = _mm_loadu_si128(v523 + 25);
  v528 = 1;
  v527 = 1;
  sub_1407AAF00(v347, v355);
  if ( v114 < 0 )
  {
    v128 = 0;
    goto LABEL_163;
  }
  v349 = v126;
  v348 = v122;
  v547 = v318.m128i_i64[1];
  v129 = v319.m128i_i64[0];
  nullsub_1(v127);
  v128 = 1;
  v130 = sub_140001650(v114, 1);
  if ( !v130 )
  {
LABEL_163:
    v525 = 1;
    v524 = 1;
    sub_1416C2D4B(v128, v114);
  }
  j = v130;
  sub_141684120(v130, v501, v114);
  v132 = v502;
  if ( v502 )
  {
    nullsub_1(v131);
    v133 = sub_140001650(v132, 1);
    if ( !v133 )
    {
      v456 = v114;
      v455 = j;
      sub_1416C2D4B(1, v132);
    }
    v128 = v133;
    sub_141684120(v133, v476, v132);
  }
  *(_QWORD *)v355 = v132;
  *(_QWORD *)&v355[8] = v128;
  *(_QWORD *)&v355[16] = v132;
  v456 = v114;
  v134 = j;
  v455 = j;
  sub_1407AAF00(&v407, v355);
  if ( v407.m128i_i64[0] == -1 )
  {
    v404 = v120;
    v405 = v116;
    *(_QWORD *)&v470 = 0;
    *((_QWORD *)&v470 + 1) = 1;
    v471 = 0;
    goto LABEL_173;
  }
  Address.m128i_i64[1] = v407.m128i_i64[1];
  v522 = v407.m128i_i64[0];
  v135 = sub_14033BC10(v407.m128i_i64[1], v408.m128i_i64[0]);
  if ( v136 < 0 )
  {
    v138 = 0;
    goto LABEL_171;
  }
  if ( v136 )
  {
    v227 = v120;
    v492 = (const __m128i *)v135;
    v503 = v136;
    nullsub_1(v137);
    v138 = 1;
    v228 = sub_140001650(v503, 1);
    v136 = v503;
    if ( !v228 )
LABEL_171:
      sub_1416C2D4B(v138, v136);
    v229 = v228;
    sub_141684120(v228, v492, v503);
    v230 = v503;
    if ( v503 < 8 )
    {
      v231 = 0;
      v114 = v546;
      v120 = v227;
      v134 = j;
      do
      {
LABEL_466:
        *(_BYTE *)(v229 + v231) |= 32 * ((unsigned __int8)(*(_BYTE *)(v229 + v231) - 65) < 0x1Au);
        ++v231;
LABEL_467:
        ;
      }
      while ( v230 != v231 );
      goto LABEL_468;
    }
    if ( v503 < 0x20 )
    {
      v231 = 0;
      v114 = v546;
      v120 = v227;
      v134 = j;
      goto LABEL_426;
    }
    v231 = v503 & 0x7FFFFFFFFFFFFFE0LL;
    v286 = 0;
    v287 = _mm_load_si128((const __m128i *)&xmmword_141742460);
    v288 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
    v289 = _mm_load_si128((const __m128i *)&xmmword_141742470);
    do
    {
      v290 = _mm_loadu_si128((const __m128i *)(v229 + v286));
      v291 = _mm_loadu_si128((const __m128i *)(v229 + v286 + 16));
      v292 = _mm_add_epi8(v290, v287);
      v293 = _mm_add_epi8(v291, v287);
      *(__m128i *)(v229 + v286) = _mm_or_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v292, v288), v292), v289),
                                    v290);
      *(__m128i *)(v229 + v286 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v293, v288), v293), v289),
                                         v291);
      v286 += 32;
    }
    while ( v231 != v286 );
    if ( v503 != v231 )
    {
      v230 = v503;
      v114 = v546;
      v120 = v227;
      v134 = j;
      if ( (v503 & 0x18) == 0 )
        goto LABEL_466;
LABEL_426:
      v300 = v231;
      v231 = v230 & 0x7FFFFFFFFFFFFFF8LL;
      v301 = _mm_load_si128((const __m128i *)&xmmword_141742480);
      v302 = _mm_load_si128((const __m128i *)&xmmword_141742490);
      v303 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
      do
      {
        v304 = _mm_loadl_epi64((const __m128i *)(v229 + v300));
        v305 = _mm_add_epi8(v304, v301);
        *(_QWORD *)(v229 + v300) = _mm_or_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v305, v302), v305), v303),
                                     v304).m128i_u64[0];
        v300 += 8;
      }
      while ( v231 != v300 );
      goto LABEL_467;
    }
    v230 = v503;
    v114 = v546;
    v120 = v227;
  }
  else
  {
    v229 = 1;
    v230 = 0;
    v114 = v546;
  }
  v134 = j;
LABEL_468:
  v405 = v116;
  v404 = v120;
  *(_QWORD *)&v470 = v230;
  *((_QWORD *)&v470 + 1) = v229;
  v471 = v230;
  if ( v522 )
    sub_140001660(Address.m128i_i64[1], v522, 1);
LABEL_173:
  v139 = v547;
  v140 = v547 + 160 * v129;
  *(_QWORD *)v355 = v547;
  *(_QWORD *)&v355[8] = v140;
  *(_QWORD *)&v355[16] = &v470;
  v444 = v114;
  v443 = v134;
  sub_14031AC80(&v439, v355);
  v479 = *((__m128i **)&v439 + 1);
  v143 = v440;
  *(_QWORD *)v355 = &v499;
  if ( v440 >= 2 )
  {
    if ( v440 >= 0x15 )
    {
      v114 = v546;
      v483 = v546;
      v134 = j;
      v482 = j;
      v562 = 1;
      sub_140B5A680(v479, v440, v355);
    }
    else
    {
      sub_1405581C0(v479, v440, 1);
      v114 = v546;
      v134 = j;
    }
    v139 = v547;
  }
  v483 = v114;
  v482 = v134;
  v562 = 1;
  v144 = sub_141470CD0(v142, v141);
  if ( *(_BYTE *)(v144 + 16) == 1 )
  {
    v146 = *(_QWORD *)v144;
    v147 = *(_QWORD *)(v144 + 8);
  }
  else
  {
    v483 = v114;
    v482 = v134;
    v562 = 1;
    v310 = v144;
    v146 = sub_141486EF0();
    v144 = v310;
    *(_QWORD *)v310 = v146;
    *(_QWORD *)(v310 + 8) = v147;
    *(_BYTE *)(v310 + 16) = 1;
  }
  *(_QWORD *)v144 = v146 + 1;
  v408 = *((__m128i *)&off_141786750 + 1);
  v407 = _mm_loadu_si128((const __m128i *)&off_141786750);
  v409.m256i_i64[0] = v146;
  v409.m256i_i64[1] = v147;
  if ( v143 )
  {
    v495 = a2;
    LOBYTE(v145) = 1;
    sub_1416BA580(&v407, v143, &v409, v145);
    v311 = 0;
    v114 = v546;
    a2 = v495;
    v139 = v547;
    do
    {
      v312 = v479->m128i_i64[v311];
      v313 = *(_QWORD *)(v312 + 32);
      v314 = v313 + *(_QWORD *)(v312 + 40);
      *(_QWORD *)v355 = 0;
      *(_QWORD *)&v355[40] = 0;
      *(_QWORD *)&v355[80] = v313;
      *(_QWORD *)&v355[88] = v314;
      sub_1408CD870(v451, v355);
      sub_140474440(&v407, v451);
      ++v311;
    }
    while ( v311 != v143 );
  }
  v148 = _mm_load_si128(&v407);
  v149 = _mm_load_si128(&v408);
  *(_OWORD *)&v451[32] = *(_OWORD *)v409.m256i_i8;
  *(__m128i *)&v451[16] = v149;
  *(__m128i *)v451 = v148;
  *(_QWORD *)v355 = v139;
  *(_QWORD *)&v355[8] = v140;
  *(_QWORD *)&v355[16] = v451;
  v442 = v114;
  v441 = j;
  v526 = 1;
  sub_14031AEA0(&v449, v355);
  v150 = *((_QWORD **)&v449 + 1);
  v151 = v450;
  *(_QWORD *)v355 = &v499;
  if ( v450 >= 2 )
  {
    if ( v450 >= 0x15 )
    {
      v114 = v546;
      v399 = v546;
      v398 = j;
      v521 = 1;
      sub_140B5A680(*((_QWORD *)&v449 + 1), v450, v355);
    }
    else
    {
      sub_1405581C0(*((_QWORD **)&v449 + 1), v450, 1);
      v114 = v546;
    }
  }
  v152 = (__m128i *)((char *)v479 + 8 * v143);
  *(_QWORD *)v355 = v150;
  *(_QWORD *)&v355[8] = v150;
  *(_QWORD *)&v355[16] = v449;
  v547 = (__int64)&v150[v151];
  *(_QWORD *)&v355[24] = v547;
  *(_QWORD *)&v355[32] = v479;
  *(_QWORD *)&v355[40] = v479;
  v350 = v439;
  *(_QWORD *)&v355[48] = v439;
  *(_QWORD *)&v355[56] = v152;
  Address.m128i_i64[1] = v449;
  v478 = 8 * v449;
  v153 = v114;
  v504 = v114;
  v154 = v479;
  v155 = v150;
  v492 = v152;
LABEL_179:
  v500 = j;
  v156 = v153;
  v157 = v154;
  v158 = v150;
  v159 = v155;
  v491 = v156;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v155 )
        goto LABEL_186;
      if ( v158 == (_QWORD *)v547 )
        break;
      *(_QWORD *)&v355[8] = v158 + 1;
      v154 = v157;
      v160 = v158;
      v150 = ++v158;
      v161 = (_QWORD *)*v160;
      v162 = v161[5];
      if ( v162 )
        goto LABEL_188;
    }
    if ( Address.m128i_i64[1] )
    {
      sub_140001660(v159, v478, 8);
      v152 = v492;
    }
    *(_QWORD *)v355 = 0;
    v159 = nullptr;
LABEL_186:
    if ( v157 == v152 )
      break;
    v154 = (const __m128i *)&v157->m128i_u64[1];
    *(_QWORD *)&v355[40] = &v157->m128i_i64[1];
    v150 = v158;
    v155 = nullptr;
    v163 = (__int64 *)v157;
    v157 = (const __m128i *)((char *)v157 + 8);
    v161 = (_QWORD *)*v163;
    v162 = v161[5];
    if ( v162 )
    {
LABEL_188:
      v164 = v161[4];
      v351 = v161[7];
      v165 = v161[8];
      sub_14031E9F0(v488, v164, v164 + v162);
      v167 = *(_QWORD *)&v488[16];
      if ( !*(_QWORD *)&v488[16] )
      {
        if ( v504 < 0 )
        {
          v247 = 0;
        }
        else
        {
          v169 = v491;
          if ( !v504 )
          {
            v463 = 1;
            v153 = 0;
            j = 1;
            v170 = 0;
            v172 = *(_QWORD *)v488;
            if ( *(_QWORD *)v488 )
              goto LABEL_276;
            goto LABEL_277;
          }
          v170 = v504;
          nullsub_1(v166);
          v153 = v170;
          v171 = sub_140001650(v170, 1);
          if ( v171 )
          {
            v463 = v171;
            sub_141684120(v171, v500, v170);
            j = v463;
            v172 = *(_QWORD *)v488;
            if ( *(_QWORD *)v488 )
              goto LABEL_276;
            goto LABEL_277;
          }
          v463 = v170;
          v247 = 1;
        }
        sub_1416C2D4B(v247, v463);
      }
      v480 = v165;
      v407.m128i_i64[0] = v500;
      v407.m128i_i64[1] = v500 + v504;
      v408.m128i_i64[0] = 0;
      sub_14031E0D0(&v484, &v407);
      if ( v504 < 0 )
      {
        v315 = 0;
LABEL_321:
        sub_1416C2D4B(v315, v462);
      }
      if ( v504 )
      {
        nullsub_1(v168);
        v462 = sub_140001650(v504, 1);
        if ( !v462 )
        {
          v462 = v504;
          v315 = 1;
          goto LABEL_321;
        }
      }
      else
      {
        v462 = 1;
      }
      v464.m128i_i64[0] = v504;
      v464.m128i_i64[1] = v462;
      v465.m128i_i64[0] = 0;
      j = v485;
      v503 = *(_QWORD *)&v488[8];
      v406 = *(_QWORD *)&v488[8] + 4 * v167;
      v522 = v484.m128i_i64[1];
      v352 = v484.m128i_i64[1] + 40;
      v497 = 0;
      v496 = 0;
      v173 = 0;
LABEL_200:
      for ( i = v173; i < j; ++i )
      {
        if ( i )
        {
          v175 = *(_DWORD *)(v522 + 24 * i - 8);
          if ( (unsigned int)(v175 - 48) < 0xA || (v175 & 0xFFFFFFDF) - 65 < 0x1A )
            continue;
        }
        if ( *(_DWORD *)(v522 + 24 * i + 16) != *(_DWORD *)v503 )
        {
          sub_1414A4730(&v402);
          v176 = 2LL - (DWORD1(v402) == 0);
          if ( DWORD2(v402) )
            v176 = 3;
          v342.m128i_i64[0] = 0;
          v342.m128i_i64[1] = v176;
          v343.m128i_i32[2] = DWORD2(v402);
          v343.m128i_i64[0] = v402;
          sub_1414A4730(&v400);
          v177 = 2LL - (DWORD1(v400) == 0);
          if ( DWORD2(v400) )
            v177 = 3;
          v407.m128i_i64[0] = 0;
          v407.m128i_i64[1] = v177;
          v408.m128i_i32[2] = DWORD2(v400);
          v408.m128i_i64[0] = v400;
          v178 = sub_1414AB9C0(&v342);
          v179 = sub_1414AB9C0(&v407);
          if ( v178 == -1 )
          {
            if ( v179 != -1 )
              continue;
          }
          else if ( v178 != v179 )
          {
            continue;
          }
          if ( (unsigned int)sub_1414AB9C0(&v342) != -1 || (unsigned int)sub_1414AB9C0(&v407) != -1 )
            continue;
        }
        v353 = (unsigned __int64 *)(v522 + 24 * i);
        v180 = 1;
        v181 = 0;
        v182 = (unsigned int *)v503;
        v173 = i;
        v495 = a2;
LABEL_217:
        v183 = v173++;
        if ( (v181 & 1) != 0 )
        {
          if ( v182 == (unsigned int *)v406 )
            goto LABEL_240;
          a2 = v495;
          if ( v173 >= j )
            continue;
LABEL_220:
          v184 = v182 + 1;
          v185 = (unsigned int *)(v352 + 24 * v183);
          while ( 1 )
          {
            v187 = *v185;
            if ( (unsigned int)(v187 - 9) >= 5 && (_DWORD)v187 != 32 )
            {
              if ( (unsigned int)v187 < 0x85 )
                goto LABEL_235;
              v188 = (unsigned int)v187 >> 8;
              if ( (unsigned int)v187 >> 8 > 0x1F )
              {
                if ( v188 == 32 )
                {
                  v186 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v187) >> 1;
                }
                else
                {
                  a2 = v495;
                  if ( v188 != 48 )
                  {
LABEL_235:
                    v189 = sub_1407A0BC0(v187, *v182);
                    v181 = 1;
                    v180 = 0;
                    v182 = v184;
                    if ( !v189 )
                      goto LABEL_202;
                    goto LABEL_217;
                  }
                  v186 = (_DWORD)v187 == 12288;
                }
              }
              else if ( v188 )
              {
                a2 = v495;
                if ( v188 != 22 )
                  goto LABEL_235;
                v186 = (_DWORD)v187 == 5760;
              }
              else
              {
                v186 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v187);
              }
              a2 = v495;
              if ( (v186 & 1) == 0 )
                goto LABEL_235;
            }
            ++v173;
            v185 += 6;
            if ( j == v173 )
              goto LABEL_202;
          }
        }
        if ( v180 < (unsigned __int64)(v406 - (_QWORD)v182) >> 2 )
        {
          v182 += v180;
          a2 = v495;
          if ( v173 >= j )
            continue;
          goto LABEL_220;
        }
LABEL_240:
        a2 = v495;
        if ( v173 >= j
          || (v190 = *(_DWORD *)(v522 + 24 * v173 + 16), (unsigned int)(v190 - 48) >= 0xA)
          && (v190 & 0xFFFFFFDF) - 65 >= 0x1A )
        {
          if ( v183 >= j )
            sub_1416C30E3(v183, j, &off_141790400);
          v191 = *v353;
          v192 = *v353 - v496;
          if ( *v353 < v496 )
LABEL_465:
            sub_1416C2F60(v500, v504, v496, v191, (__int64)&off_14178FF10);
          v193 = *(_QWORD *)(v522 + 24 * v183 + 8);
          if ( v496 )
          {
            if ( v504 <= v496 )
            {
              if ( v504 != v496 )
                goto LABEL_465;
            }
            else if ( *(char *)(v500 + v496) <= -65 )
            {
              goto LABEL_465;
            }
          }
          if ( v191 )
          {
            if ( v191 >= v504 )
            {
              if ( v191 != v504 )
                goto LABEL_465;
            }
            else if ( *(char *)(v500 + v191) < -64 )
            {
              goto LABEL_465;
            }
          }
          if ( v192 > v464.m128i_i64[0] - v497 )
          {
            sub_141688D30((unsigned int)&v464, v497, v192, 1, 1);
            v497 = v465.m128i_i64[0];
            if ( v191 != v496 )
LABEL_257:
              sub_141684120(v497 + v464.m128i_i64[1], v500 + v496, v192);
          }
          else if ( v191 != v496 )
          {
            goto LABEL_257;
          }
          v194 = v192 + v497;
          v465.m128i_i64[0] = v194;
          if ( v480 > v464.m128i_i64[0] - v194 )
          {
            sub_141688D30((unsigned int)&v464, v194, v480, 1, 1);
            v194 = v465.m128i_i64[0];
LABEL_260:
            sub_141684120(v194 + v464.m128i_i64[1], v351, v480);
          }
          else if ( v480 )
          {
            goto LABEL_260;
          }
          v497 = v480 + v194;
          v465.m128i_i64[0] = v480 + v194;
          v496 = v193;
          a2 = v495;
          goto LABEL_200;
        }
LABEL_202:
        ;
      }
      if ( v496 )
      {
        if ( v504 <= v496 )
        {
          if ( v504 != v496 )
            goto LABEL_455;
        }
        else if ( *(char *)(v500 + v496) <= -65 )
        {
LABEL_455:
          sub_1416C2F60(v500, v504, v496, v504, (__int64)&off_14178FEF8);
        }
      }
      v195 = v504 - v496;
      if ( v504 - v496 > v464.m128i_i64[0] - v497 )
      {
        sub_141688D30((unsigned int)&v464, v497, v504 - v496, 1, 1);
        v497 = v465.m128i_i64[0];
        v196 = v464.m128i_i64[1];
        v197 = v496;
        if ( v504 != v496 )
LABEL_272:
          sub_141684120(v196 + v497, v500 + v197, v195);
      }
      else
      {
        v196 = v464.m128i_i64[1];
        v197 = v496;
        if ( v504 != v496 )
          goto LABEL_272;
      }
      j = v196;
      v153 = v464.m128i_i64[0];
      if ( v484.m128i_i64[0] )
        sub_140001660(v522, 24 * v484.m128i_i64[0], 8);
      v170 = v195 + v497;
      v169 = v491;
      v172 = *(_QWORD *)v488;
      if ( *(_QWORD *)v488 )
LABEL_276:
        sub_140001660(*(_QWORD *)&v488[8], 4 * v172, 4);
LABEL_277:
      v504 = v170;
      v152 = v492;
      v155 = v159;
      if ( v169 )
      {
        sub_140001660(v500, v169, 1);
        v155 = v159;
        v152 = v492;
      }
      goto LABEL_179;
    }
  }
  if ( v350 )
    sub_140001660(v479, 8 * v350, 8);
  v354[0] = v156;
  v354[1] = v500;
  HIDWORD(_RAX) = HIDWORD(v504);
  v354[2] = v504;
  v199 = *(_QWORD *)&v451[8];
  v200 = Address.m128i_i64[0];
  if ( *(_QWORD *)&v451[8] )
  {
    v154 = *(const __m128i **)&v451[24];
    if ( *(_QWORD *)&v451[24] )
    {
      v201 = *(_QWORD *)v451;
      v202 = (const __m128i *)(*(_QWORD *)v451 + 16LL);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v451));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v204 = _mm_load_si128(v202);
            v201 -= 384;
            ++v202;
            _R15D = _mm_movemask_epi8(v204) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v205 = -3 * _RAX;
        v206 = *(_QWORD *)(v201 + 8 * v205 - 24);
        if ( v206 )
          sub_140001660(*(_QWORD *)(v201 + 8 * v205 - 16), v206, 1);
        v154 = (const __m128i *)((char *)v154 - 1);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v154 );
    }
    v207 = (24 * v199 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v208 = v207 + v199 + 17;
    if ( v208 )
      sub_140001660(*(_QWORD *)v451 - v207, v208, 16);
  }
  if ( (_QWORD)v470 )
    sub_140001660(*((_QWORD *)&v470 + 1), v470, 1);
  v561 = 1;
  v560 = 1;
  sub_1406C3BD0(
    (__int64)v355,
    v435.m128i_i64[1],
    v436,
    (int)"{text}{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    6u,
    v500,
    v504);
  v547 = *(_QWORD *)&v355[8];
  sub_1406C3BD0(
    (__int64)&v407,
    *(__int64 *)&v355[8],
    *(__int64 *)&v355[16],
    (int)"{selected}{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    0xAu,
    v474,
    v494);
  v522 = v407.m128i_i64[1];
  sub_1406C3BD0(
    (__int64)v451,
    v407.m128i_i64[1],
    v408.m128i_i64[0],
    (int)"{clipboard}Template title cannot be emptyTemplate content cannot be emptyBuilt-in voice templates cannot be edited",
    0xBu,
    v475,
    v498);
  if ( v407.m128i_i64[0] )
    sub_140001660(v522, v407.m128i_i64[0], 1);
  if ( *(_QWORD *)v355 )
    sub_140001660(v547, *(_QWORD *)v355, 1);
  *(_QWORD *)v355 = 0;
  *(_QWORD *)&v355[8] = *(_QWORD *)&v451[16];
  Address.m128i_i64[1] = *(_QWORD *)&v451[8];
  *(_OWORD *)&v355[16] = *(_OWORD *)&v451[8];
  *(_QWORD *)&v355[32] = 0;
  *(_QWORD *)&v355[40] = *(_QWORD *)&v451[16];
  *(_QWORD *)&v355[48] = 0xA0000000ALL;
  v355[56] = 1;
  *(_WORD *)&v355[64] = 0;
  sub_14031D040(&v407, v355);
  v209 = v408.m128i_i64[0];
  v547 = v407.m128i_i64[1];
  for ( j = v407.m128i_i64[0]; v209; v408.m128i_i64[0] = --v209 )
  {
    sub_14033BC10(*(_QWORD *)(v547 + 16 * v209 - 16), *(_QWORD *)(v547 + 16 * v209 - 8));
    if ( v210 )
      break;
  }
  sub_1404408C0((unsigned int)v355, v547, v209, (unsigned int)&unk_141787CA0, 1);
  v522 = *(_QWORD *)&v355[8];
  v212 = *(_QWORD *)v355;
  v213 = *(_QWORD *)&v355[16];
  if ( j )
    sub_140001660(v547, 16 * j, 8);
  if ( *(_QWORD *)v451 )
    sub_140001660(Address.m128i_i64[1], *(_QWORD *)v451, 1);
  v547 = v212;
  nullsub_1(v211);
  v214 = sub_140001650(9, 1);
  if ( !v214 )
  {
    v520 = 1;
    v519 = 1;
    v518 = 1;
    sub_1416C2D4B(1, 9);
  }
  v215 = v214;
  *(_QWORD *)v214 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v214 + 8) = 100;
  *(_QWORD *)&v489 = 9;
  *((_QWORD *)&v489 + 1) = v214;
  v490 = 9;
  *(_QWORD *)&v486 = -1;
  if ( BYTE1(v438) && (v574 = 1, v573 = 1, v572 = 1, sub_14033BC10(v435.m128i_i64[1], v436), v217) )
  {
    if ( v523[13].m128i_i64[0] == -1 )
    {
      nullsub_1(v216);
      v248 = (void *)sub_140001650(11, 1);
      if ( !v248 )
      {
        v574 = 1;
        v573 = 1;
        v572 = 1;
        sub_1416C2D4B(1, 11);
      }
      v249 = v248;
      qmemcpy(v248, "llm_missing", 11);
      sub_140001660(v215, 9, 1);
      *(_QWORD *)&v489 = 11;
      *((_QWORD *)&v489 + 1) = v249;
      v490 = 11;
      nullsub_1(v250);
      v251 = (__m128i *)sub_140001650(46, 1);
      if ( !v251 )
      {
        v574 = 1;
        v573 = 1;
        v572 = 1;
        sub_1416C2D4B(1, 46);
      }
      qmemcpy(&v251[1], "ssing; used raw dictation text", 30);
      *v251 = _mm_loadu_si128((const __m128i *)&xmmword_14178FDBC);
      *(_QWORD *)&v486 = 46;
      *((_QWORD *)&v486 + 1) = v251;
      v487 = 46;
      v574 = 1;
      v573 = 1;
      v572 = 1;
      LOBYTE(v251) = 1;
      LODWORD(j) = (_DWORD)v251;
      sub_14149C500(&v472, v354);
    }
    else
    {
      v154 = v523 + 13;
      v574 = 1;
      v573 = 1;
      v572 = 1;
      if ( (unsigned __int8)sub_14099C6D0(&v523[13]) )
      {
        v574 = 1;
        v573 = 1;
        v572 = 1;
        if ( v200 )
          sub_140989380((unsigned int)v355, (_DWORD)v154, v522, v213, v200, a5);
        else
          sub_140A5C7E0(v355, v154, v522, v213);
        j = *(_QWORD *)v355;
        if ( *(_QWORD *)v355 == 1 )
        {
          v503 = *(_QWORD *)&v355[8];
          v294 = *(_QWORD *)&v355[24];
          Address.m128i_i64[0] = *(_QWORD *)&v355[16];
          nullsub_1(v219);
          Address.m128i_i64[1] = sub_140001650(9, 1);
          if ( !Address.m128i_i64[1] )
            sub_1416C2D4B(1, 9);
          v295 = Address.m128i_i64[1];
          *(_QWORD *)Address.m128i_i64[1] = 0x6F7272655F6D6C6CLL;
          *(_BYTE *)(v295 + 8) = 114;
          sub_140001660(v215, 9, 1);
          *(_QWORD *)&v489 = 9;
          *((_QWORD *)&v489 + 1) = v295;
          v490 = 9;
          *(_QWORD *)&v486 = v503;
          *((_QWORD *)&v486 + 1) = Address.m128i_i64[0];
          v487 = v294;
          v296 = (_BYTE *)sub_14149C500(&v472, v354);
        }
        else
        {
          v297 = *(_QWORD *)&v355[16];
          v481 = *(_QWORD *)&v355[16];
          sub_14033BC10(*(_QWORD *)&v355[16], *(_QWORD *)&v355[24]);
          if ( v299 )
          {
            v296 = &v355[8];
            v473 = *(_QWORD *)&v355[24];
            v472 = _mm_loadu_si128((const __m128i *)&v355[8]);
          }
          else
          {
            nullsub_1(v298);
            v306 = sub_140001650(9, 1);
            if ( !v306 )
            {
              v481 = v297;
              sub_1416C2D4B(1, 9);
            }
            v307 = v306;
            *(_QWORD *)v306 = 0x6F7272655F6D6C6CLL;
            *(_BYTE *)(v306 + 8) = 114;
            sub_140001660(v215, 9, 1);
            *(_QWORD *)&v489 = 9;
            *((_QWORD *)&v489 + 1) = v307;
            v490 = 9;
            nullsub_1(v308);
            v309 = sub_140001650(27, 1);
            if ( !v309 )
            {
              v481 = v297;
              sub_1416C2D4B(1, 27);
            }
            *(_OWORD *)(v309 + 11) = *(__int128 *)((char *)&xmmword_14178B3EA + 11);
            *(__m128i *)v309 = _mm_loadu_si128((const __m128i *)&xmmword_14178B3EA);
            *(_QWORD *)&v486 = 27;
            *((_QWORD *)&v486 + 1) = v309;
            v487 = 27;
            v481 = v297;
            v296 = (_BYTE *)sub_14149C500(&v472, v354);
            if ( *(_QWORD *)&v355[8] )
              v296 = (_BYTE *)sub_140001660(v297, *(_QWORD *)&v355[8], 1);
          }
        }
        LOBYTE(v296) = 1;
        LODWORD(j) = (_DWORD)v296;
      }
      else
      {
        nullsub_1(v218);
        v255 = (void *)sub_140001650(11, 1);
        if ( !v255 )
        {
          v574 = 1;
          v573 = 1;
          v572 = 1;
          sub_1416C2D4B(1, 11);
        }
        v256 = v255;
        qmemcpy(v255, "llm_missing", 11);
        sub_140001660(v215, 9, 1);
        *(_QWORD *)&v489 = 11;
        *((_QWORD *)&v489 + 1) = v256;
        v490 = 11;
        nullsub_1(v257);
        v258 = (__m128i *)sub_140001650(49, 1);
        if ( !v258 )
        {
          v574 = 1;
          v573 = 1;
          v572 = 1;
          sub_1416C2D4B(1, 49);
        }
        qmemcpy(&v258[1], "complete; used raw dictation text", 33);
        *v258 = _mm_loadu_si128((const __m128i *)&xmmword_14178FD6F);
        *(_QWORD *)&v486 = 49;
        *((_QWORD *)&v486 + 1) = v258;
        v487 = 49;
        v574 = 1;
        v573 = 1;
        v572 = 1;
        LOBYTE(v258) = 1;
        LODWORD(j) = (_DWORD)v258;
        sub_14149C500(&v472, v354);
      }
    }
  }
  else
  {
    v472.m128i_i64[0] = v547;
    v472.m128i_i64[1] = v522;
    v473 = v213;
    LODWORD(j) = 0;
  }
  v559 = 1;
  v558 = 1;
  sub_141356270(&v342);
  *(_QWORD *)v451 = 0;
  *(_QWORD *)&v451[8] = 1;
  *(_QWORD *)&v451[16] = 0;
  *(_QWORD *)&v355[16] = 1610612768;
  *(_QWORD *)v355 = v451;
  *(_QWORD *)&v355[8] = &off_141790AA0;
  if ( (unsigned __int8)sub_141356790(&v342, v355) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v499,
      (unsigned int)&unk_141789060,
      (__int64)&off_141790B58);
  Address = *(__m128i *)v451;
  if ( *(_QWORD *)&v451[16] <= 8u )
  {
    if ( *(_QWORD *)&v451[16] != 8 )
LABEL_319:
      sub_1416C2F60(*(_DWORD *)&v451[8], *(_DWORD *)&v451[16], 0, 8, (__int64)&off_14178FDF0);
  }
  else if ( *(char *)(*(_QWORD *)&v451[8] + 8LL) <= -65 )
  {
    goto LABEL_319;
  }
  v464.m128i_i64[0] = *(_QWORD *)&v451[8];
  v464.m128i_i64[1] = 8;
  *(_QWORD *)v451 = &v464;
  *(_QWORD *)&v451[8] = sub_14041F680;
  sub_14149C0F0(v355, &unk_14178FE08, v451);
  if ( Address.m128i_i64[0] )
    sub_140001660(Address.m128i_i64[1], Address.m128i_i64[0], 1);
  Address = *(__m128i *)v355;
  v220 = *(_QWORD *)&v355[16];
  v517 = 1;
  v516 = 1;
  sub_14149C500(v488, v430);
  v221 = v405;
  v222 = v404;
  v515 = 1;
  v514 = 1;
  sub_14149C500(&v484, &v431);
  v223 = BYTE1(v438);
  v513 = 1;
  v512 = 1;
  sub_14149C500(&v464, &v435);
  nullsub_1(v224);
  v225 = v546;
  v226 = sub_140001650(v546, 1);
  if ( !v226 )
  {
    v511 = 1;
    v510 = 1;
    sub_1416C2D4B(1, v225);
  }
  v503 = v226;
  sub_141684120(v226, v501, v225);
  v509 = 1;
  v508 = 1;
  sub_14149C500(&v342, &v472);
  v507 = 1;
  sub_14149C500(v451, &v489);
  if ( (_QWORD)v486 == -1 )
  {
    v501 = -1;
  }
  else
  {
    v506 = 1;
    sub_14149C500(v355, &v486);
    v478 = *(_QWORD *)&v355[8];
    v501 = *(_QWORD *)v355;
    v154 = *(const __m128i **)&v355[16];
  }
  v232 = _mm_loadu_si128(v523);
  v492 = (const __m128i *)v347[0];
  v504 = v347[1];
  v233 = v347[2];
  LODWORD(v449) = sub_141475580();
  DWORD1(v449) = v234;
  sub_141475530(v355, &v449, 3577643008LL, 27111902);
  if ( v355[0] )
    v235 = 0;
  else
    v235 = *(_QWORD *)&v355[8];
  v408 = Address;
  v409.m256i_i64[0] = v220;
  v409.m256i_i64[3] = *(_QWORD *)&v488[16];
  *(_OWORD *)&v409.m256i_u64[1] = *(_OWORD *)v488;
  *(_QWORD *)v411 = v485;
  v410 = v484;
  v429 = v223;
  v412 = v465.m128i_i64[0];
  *(__m128i *)&v411[8] = v464;
  v413[0] = v546;
  v413[1] = v503;
  v413[2] = v546;
  v414 = v342;
  v415 = v343.m128i_i64[0];
  v416[0] = v494;
  v416[1] = v474;
  v416[2] = v494;
  v417[0] = v498;
  v417[1] = v475;
  v417[2] = v498;
  v418[0] = v502;
  v418[1] = v476;
  v418[2] = v502;
  v419[0] = v477;
  v419[1] = v461;
  v419[2] = v477;
  v421 = *(_QWORD *)&v451[16];
  v420 = _mm_loadu_si128((const __m128i *)v451);
  v426[0] = v501;
  v426[1] = v478;
  v426[2] = v154;
  v422[0] = v457;
  v422[1] = v445;
  v422[2] = v221;
  v423[0] = v458;
  v423[1] = v446;
  v423[2] = v222;
  v424[0] = v459;
  v424[1] = v447;
  v424[2] = v348;
  v425[0] = v460;
  v425[1] = v448;
  v425[2] = v349;
  v407 = v232;
  v427[0] = v492;
  v427[1] = v504;
  v427[2] = v233;
  v428 = v235;
  sub_1407B1010(v355);
  a1 = v493;
  v236 = *(_OWORD *)v355;
  v237 = v355[16];
  if ( *(_QWORD *)v355 != -1 )
  {
    *(_OWORD *)(v493 + 88) = *(_OWORD *)&v355[80];
    v238 = _mm_loadu_si128((const __m128i *)&v355[17]);
    v239 = _mm_loadu_si128((const __m128i *)&v355[33]);
    v240 = _mm_loadu_si128((const __m128i *)&v355[49]);
    *(__m128i *)(a1 + 73) = _mm_loadu_si128((const __m128i *)&v355[65]);
    *(__m128i *)(a1 + 57) = v240;
    *(__m128i *)(a1 + 41) = v239;
    *(__m128i *)(a1 + 25) = v238;
    *(_OWORD *)(a1 + 8) = v236;
    *(_BYTE *)(a1 + 24) = v237;
    *(_QWORD *)a1 = 2;
    goto LABEL_375;
  }
  Address.m128i_i8[8] = v355[16];
  Address.m128i_i64[0] = *(_QWORD *)&v355[8];
  read_workspace_file(v355);
  v464 = *(__m128i *)&v355[8];
  v465 = *(__m128i *)&v355[24];
  v466 = *(__m128i *)&v355[40];
  v467 = *(__m128i *)&v355[56];
  v468 = *(_OWORD *)&v355[72];
  v469 = *(__m128i *)&v355[88];
  if ( *(_QWORD *)v355 == -1 )
  {
    *(__m128i *)(a1 + 88) = v469;
    *(_OWORD *)(a1 + 72) = v468;
    v252 = _mm_load_si128(&v464);
    v253 = _mm_load_si128(&v465);
    v254 = _mm_load_si128(&v466);
    *(__m128i *)(a1 + 56) = _mm_load_si128(&v467);
    *(__m128i *)(a1 + 40) = v254;
    *(__m128i *)(a1 + 24) = v253;
    *(__m128i *)(a1 + 8) = v252;
    *(_QWORD *)a1 = 2;
    goto LABEL_371;
  }
  v454 = v357;
  v453 = v356;
  v243 = _mm_load_si128(&v465);
  v244 = _mm_load_si128(&v466);
  v245 = _mm_load_si128(&v467);
  *(__m128i *)&v451[8] = v464;
  *(__m128i *)&v451[24] = v243;
  *(__m128i *)&v451[40] = v244;
  *(__m128i *)&v451[56] = v245;
  *(_OWORD *)&v451[72] = v468;
  v452 = _mm_load_si128(&v469);
  *(_QWORD *)v451 = *(_QWORD *)v355;
  sub_14149C500(&v340, &v408);
  sub_14149C500(&v338, &v409.m256i_u64[1]);
  sub_14149C500(&v336, &v410);
  v246 = v429;
  sub_14149C500(&v334, &v411[8]);
  sub_14149C500(&v332, v413);
  sub_14149C500(&v330, &v414);
  sub_14149C500(&v328, v416);
  sub_14149C500(&v326, v417);
  sub_14149C500(&v402, v418);
  sub_14149C500(&v400, v419);
  sub_14149C500(&v470, &v420);
  if ( v426[0] == -1 )
  {
    v546 = -1;
  }
  else
  {
    sub_14149C500(&v464, v426);
    v501 = v464.m128i_i64[1];
    v546 = v464.m128i_i64[0];
    v220 = v465.m128i_i64[0];
  }
  sub_14149C500(&v439, v422);
  sub_14149C500(&v449, v423);
  sub_14149C500(v488, v424);
  sub_14149C500(&v484, v425);
  v259 = _mm_load_si128(&v407);
  if ( v427[0] == -1 )
  {
    v260 = -1;
  }
  else
  {
    sub_14149C500(&v464, v427);
    v260 = v464.m128i_i64[0];
    v325 = _mm_loadu_si128((const __m128i *)&v464.m128i_u64[1]);
  }
  a1 = v493;
  *(_OWORD *)&v355[16] = v340;
  *(_QWORD *)&v355[32] = v341;
  *(_OWORD *)&v355[40] = v338;
  *(_QWORD *)&v355[56] = v339;
  *(_OWORD *)&v355[64] = v336;
  *(_QWORD *)&v355[80] = v337;
  v383 = v246;
  *(_OWORD *)&v355[88] = v334;
  v356.m256i_i64[0] = v335;
  v356.m256i_i64[3] = v333;
  *(_OWORD *)&v356.m256i_u64[1] = v332;
  v357 = v330;
  v358 = v331;
  v359 = v328;
  v360 = v329;
  v361 = v326;
  v362 = v327;
  v364 = v403;
  v363 = v402;
  v366 = v401;
  v365 = v400;
  v368 = v471;
  v367 = v470;
  v377 = v546;
  v378 = v501;
  v379 = v220;
  v369 = v439;
  v370 = v440;
  v372 = v450;
  v371 = v449;
  v374 = *(_QWORD *)&v488[16];
  v373 = *(_OWORD *)v488;
  v376 = v485;
  v375 = v484;
  *(__m128i *)v355 = v259;
  v380 = v260;
  v381 = _mm_load_si128(&v325);
  v382 = v428;
  v261 = v452.m128i_i64[0];
  if ( v452.m128i_i64[0] == *(_QWORD *)&v451[72] )
    sub_1416896C0(&v451[72]);
  v262 = *(_QWORD *)&v451[80];
  if ( v261 )
  {
    sub_141684120(*(_QWORD *)&v451[80] + 440LL, *(_QWORD *)&v451[80], 440 * v261);
    sub_141684120(v262, v355, 440);
    v452.m128i_i64[0] = v261 + 1;
    if ( v261 >= 0x27 )
    {
      v501 = v261 - 39;
      v263 = (_QWORD *)(v262 + 17600);
      v452.m128i_i64[0] = 40;
      v546 = 0;
      v503 = v262 + 17600;
      while ( v501 != v546 )
      {
        ++v546;
        v264 = v263 + 55;
        sub_1402C61B0(v263);
        v263 = v264;
      }
    }
  }
  else
  {
    sub_141684120(*(_QWORD *)&v451[80], v355, 440);
    v452.m128i_i64[0] = 1;
  }
  LODWORD(v454) = 1;
  v464.m128i_i32[0] = sub_141475580();
  v464.m128i_i32[1] = v265;
  sub_141475530(v355, &v464, 3577643008LL, 27111902);
  if ( v355[0] )
    v266 = 0;
  else
    v266 = *(_QWORD *)&v355[8];
  v453.m256i_i64[3] = v266;
  sub_1407A0EE0(v451);
  serialize_2(v355, a2, v451);
  if ( *(_DWORD *)v355 == -1 )
  {
    sub_1407A0CC0(&v342, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), v451);
    sub_1406CE470((__int64)v451);
    if ( (Address.m128i_i8[8] & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v275, v274) )
      *(_BYTE *)(Address.m128i_i64[0] + 1) = 1;
    v276 = (void *)Address.m128i_i64[0];
    v277 = *(_BYTE *)Address.m128i_i64[0];
    *(_BYTE *)Address.m128i_i64[0] = 0;
    if ( v277 == 2 )
      WakeByAddressSingle(v276);
    v385 = v473;
    v384 = v472;
    sub_141684120(v355, &v407, 440);
    v394 = v489;
    v395 = v490;
    v396 = v486;
    v397 = v487;
    v278 = _mm_loadu_si128(&v343);
    v279 = _mm_loadu_si128(&v344);
    v280 = _mm_loadu_si128(v345);
    v386 = v342;
    v387 = v278;
    v388 = v279;
    v389 = v280;
    v390 = v345[1];
    v391 = v345[2];
    v392 = v345[3];
    v393 = _mm_loadu_si128(&v346);
    sub_141684120(a1, v355, 640);
    if ( ((v547 != 0) & (unsigned __int8)j) != 0 )
      sub_140001660(v522, v547, 1);
    if ( v491 )
      sub_140001660(v500, v491, 1);
    sub_1402C6460(v430);
    v557 = 0;
    v556 = 0;
    v555 = 0;
    v554 = 0;
    v553 = 0;
    v552 = 0;
    v551 = 0;
    v550 = 0;
    v549 = 0;
    sub_1406CE470((__int64)&v316);
    v281 = v523;
    v282 = v523[1].m128i_i64[0];
    if ( v282 )
      sub_140001660(v523[1].m128i_i64[1], v282, 1);
    v283 = v281[2].m128i_i64[1];
    if ( v283 )
      sub_140001660(v281[3].m128i_i64[0], v283, 1);
    v284 = v281[10].m128i_i64[0];
    if ( v284 != -1 && v284 )
      sub_140001660(v281[10].m128i_i64[1], v284, 1);
    v285 = v281[11].m128i_i64[1];
    if ( v285 != -1 && v285 )
      sub_140001660(v281[12].m128i_i64[0], v285, 1);
    a1 = v493;
    if ( v281[13].m128i_i64[0] != -1 )
      sub_1402C6460(&v281[13]);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v355[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v355[64];
    v267 = _mm_loadu_si128((const __m128i *)v355);
    v268 = _mm_loadu_si128((const __m128i *)&v355[16]);
    v269 = _mm_loadu_si128((const __m128i *)&v355[32]);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)&v355[48]);
    *(__m128i *)(a1 + 40) = v269;
    *(__m128i *)(a1 + 24) = v268;
    *(__m128i *)(a1 + 8) = v267;
    *(_QWORD *)a1 = 2;
    sub_1406CE470((__int64)v451);
LABEL_371:
    if ( (Address.m128i_i8[8] & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v242, v241) )
      *(_BYTE *)(Address.m128i_i64[0] + 1) = 1;
    v270 = (void *)Address.m128i_i64[0];
    v271 = *(_BYTE *)Address.m128i_i64[0];
    *(_BYTE *)Address.m128i_i64[0] = 0;
    if ( v271 == 2 )
      WakeByAddressSingle(v270);
LABEL_375:
    sub_1402C61B0(&v407);
    if ( v472.m128i_i64[0] )
      sub_140001660(v472.m128i_i64[1], v472.m128i_i64[0], 1);
    v272 = v491;
    v273 = v547;
    if ( (_QWORD)v486 != -1 && (_QWORD)v486 )
      sub_140001660(*((_QWORD *)&v486 + 1), v486, 1);
    if ( (_QWORD)v489 )
      sub_140001660(*((_QWORD *)&v489 + 1), v489, 1);
    if ( ((v273 != 0) & (unsigned __int8)j) != 0 )
      sub_140001660(v522, v273, 1);
    if ( v272 )
      sub_140001660(v500, v272, 1);
    if ( *(_QWORD *)v430 )
      sub_140001660(*(_QWORD *)&v430[8], *(_QWORD *)v430, 1);
    if ( v431.m128i_i64[0] )
      sub_140001660(v431.m128i_i64[1], v431.m128i_i64[0], 1);
    if ( v433.m128i_i64[0] )
      sub_140001660(v433.m128i_i64[1], v433.m128i_i64[0], 1);
    if ( v435.m128i_i64[0] )
      sub_140001660(v435.m128i_i64[1], v435.m128i_i64[0], 1);
    v27 = 0;
LABEL_23:
    v557 = v27;
    v556 = v27;
    v555 = v27;
    v554 = v27;
    v553 = v27;
    v552 = v27;
    v551 = v27;
    v550 = v27;
    v549 = v27;
    sub_1406CE470((__int64)&v316);
LABEL_24:
    v41 = v523;
    v42 = v523[1].m128i_i64[0];
    if ( v42 )
      sub_140001660(v523[1].m128i_i64[1], v42, 1);
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