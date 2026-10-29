// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d46580 | name sub_140D46580
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D46580(__m128i *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  char *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // r12
  const __m128i *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  const __m128i *v36; // r10
  __int64 v37; // r9
  __m128i *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // edx
  _BYTE *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i *v48; // rax
  unsigned __int64 v49; // r8
  __m128i *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdx
  const __m128i *v56; // rax
  __m128i v57; // xmm0
  int v58; // eax
  _BYTE *v59; // rax
  __m128i si128; // xmm0
  __int64 v61; // rdi
  __int128 v62; // xmm1
  const __m128i *v63; // rsi
  __m128i v64; // xmm0
  __int64 v65; // rcx
  char *v66; // r9
  __int64 v67; // rax
  unsigned __int8 v68; // cl
  __int64 v69; // rdx
  __int64 v70; // r8
  int v71; // edx
  __m128i v72; // xmm0
  __int64 (__fastcall **v73)(); // r15
  __int64 v74; // rsi
  __m128i *v75; // rbx
  __int64 v76; // rsi
  __int64 v77; // r12
  __int64 v78; // rdx
  _BYTE *v79; // rax
  _QWORD *v80; // rdi
  int v81; // ecx
  int v82; // eax
  __m128i v83; // xmm0
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 v87; // r8
  __int64 v88; // r14
  __m128i v89; // xmm0
  __int64 v90; // rax
  __m128i *v91; // r12
  __int64 v92; // r13
  __int64 v93; // rcx
  __int64 v94; // r15
  __int64 v95; // rcx
  __int64 v96; // rsi
  __int64 v97; // rdi
  signed __int64 v98; // rbx
  char v99; // r14
  __int64 v100; // r15
  __int64 v101; // r12
  __int64 v102; // rdi
  __int64 v103; // rbx
  __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int128 v106; // kr00_16
  __m128i *v107; // rax
  __int64 v108; // rsi
  const __m128i *v109; // rdi
  __m128i v110; // xmm0
  __int64 v111; // rcx
  __int128 v112; // kr10_16
  int v113; // edx
  __m128i v114; // xmm0
  __int64 v115; // rdi
  __int64 v116; // rbx
  const __m128i *v118; // r14
  const __m128i *v119; // r12
  __m128i v121; // xmm0
  __int64 v122; // rax
  __int64 v123; // rdx
  char v124; // al
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  const __m128i *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // r14
  __int128 v132; // xmm0
  __m128i v133; // xmm1
  __m128i v134; // xmm2
  __int64 v135; // rax
  const __m128i *v136; // rdx
  __int64 v137; // rsi
  __int64 v138; // rax
  __int64 v139; // r14
  __m128i v140; // xmm0
  __int64 v141; // rdi
  __int128 v142; // xmm6
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // rbx
  const __m128i *v149; // r14
  const __m128i *v150; // r13
  __m128i v152; // xmm0
  __int64 v153; // rax
  __int64 v154; // rdx
  unsigned __int64 v155; // rax
  __int64 v156; // rdi
  bool v157; // zf
  __int64 v158; // rdi
  __int64 v159; // rdx
  __m128i *v160; // rax
  const __m128i *v161; // rdi
  __m128i v162; // xmm1
  __int64 v163; // rcx
  __int64 v164; // rsi
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rax
  __int64 v171; // rsi
  unsigned __int32 v172; // eax
  bool v173; // of
  signed __int32 v174; // eax
  int v175; // ett
  __int64 v176; // rt0
  __int64 v177; // rdx
  unsigned __int32 v178; // eax
  bool v179; // of
  signed __int32 v180; // eax
  int v181; // ett
  __int64 v182; // rt0
  __int64 v183; // rax
  __int64 v184; // r9
  __int64 v185; // rax
  __int64 v186; // rsi
  __m128i v187; // xmm0
  __int64 v188; // rax
  __m128i v189; // xmm0
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rdx
  __int16 *v193; // r15
  __int64 v194; // rsi
  __int64 v195; // rdi
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // r8
  __int128 v199; // xmm1
  __int128 v200; // xmm2
  __int128 v201; // xmm3
  unsigned __int64 v202; // r14
  unsigned __int64 v203; // r9
  __int64 v204; // rcx
  __int64 v205; // r13
  __int64 v206; // rcx
  __int64 v207; // rdx
  int v208; // ebx
  __int64 v209; // rdi
  int v210; // edx
  __int64 v211; // r13
  const __m128i *v212; // rbx
  __m128i *v213; // rdi
  __int16 v214; // si
  __int16 *v215; // r12
  const __m128i *v216; // r15
  __m128i *v217; // rbx
  unsigned __int64 v218; // rdi
  __int64 v219; // r14
  __m128i *v220; // rax
  __int64 v221; // r12
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // r10
  __int64 v227; // r11
  __int64 v228; // rsi
  __int16 v229; // dx
  __int16 v230; // cx
  __m128i v231; // xmm0
  char v232; // of
  __int64 v233; // rdx
  __int64 v234; // rcx
  volatile signed __int64 *v235; // rsi
  __int64 v236; // rt0
  volatile signed __int64 *v237; // rax
  __int64 v238; // rt0
  __int64 v239; // rdx
  _QWORD *v240; // r14
  __int64 v241; // rcx
  __int64 v242; // rax
  __int64 v243; // rbx
  __m128i v244; // xmm0
  __int64 v245; // rax
  __m128i v246; // xmm0
  __int128 v247; // xmm1
  __int128 v248; // xmm2
  __int64 v249; // r8
  __m128i *v250; // rdi
  __int64 v251; // r13
  _QWORD *v252; // rbx
  __int64 v253; // rbx
  __m128i v254; // xmm0
  _QWORD *v255; // rbx
  __int64 v256; // rdx
  unsigned __int16 *v257; // rsi
  __int64 v258; // rcx
  __int64 v259; // rcx
  __int64 v260; // rdx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 v263; // rax
  __int64 v264; // r10
  __int64 v265; // r11
  int v266; // edi
  __int16 v267; // cx
  __m128i v268; // xmm0
  __int64 v269; // rbx
  __int16 v270; // kr40_2
  __m128i v271; // xmm0
  __int128 v272; // rax
  __m128i v273; // xmm0
  __int64 v274; // rdx
  __int64 v275; // rax
  int v276; // eax
  unsigned int v277; // eax
  int v278; // ecx
  __int64 v279; // rdx
  __int64 v280; // rsi
  __int64 v281; // rax
  __int64 v282; // rsi
  __int64 v283; // rdx
  __m128i v284; // xmm0
  __m128i v285; // xmm0
  __int64 v286; // rcx
  __int64 v287; // r8
  __int128 v288; // xmm0
  __m128i v289; // xmm1
  __m128i v290; // xmm2
  __m128i v291; // xmm3
  __int64 v292; // rax
  __int64 v293; // rsi
  __int64 v294; // rbx
  __m128i v295; // xmm0
  __int64 v296; // rax
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rdi
  __int64 v302; // rax
  __int64 v303; // rdx
  __int64 v304; // r12
  __int64 v305; // r14
  __int64 v306; // r15
  __m128i v307; // xmm0
  __m128i v308; // xmm0
  __int64 v309; // rcx
  __int64 v310; // rdx
  __int64 v311; // rax
  __int64 v312; // rdx
  _QWORD *v313; // rsi
  __int64 v314; // rdx
  __int64 v315; // rdi
  __int64 v316; // rbx
  const __m128i *v318; // r14
  const __m128i *v319; // r13
  __m128i v321; // xmm0
  __int64 v322; // rax
  __int64 v323; // rdx
  unsigned __int64 v324; // rax
  __int64 v325; // rdi
  __int64 v326; // rdi
  __int64 v327; // rdx
  __m128i v328; // xmm1
  __int128 v329; // xmm2
  __int128 v330; // xmm3
  __int64 v331; // r8
  unsigned __int64 v332; // rdx
  bool v333; // cf
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int128 v336; // xmm0
  __int128 v337; // xmm1
  __int128 v338; // xmm2
  __int64 v339; // rdi
  __int64 v340; // rax
  __int64 v341; // rbx
  __int64 v342; // r14
  __int64 v343; // rdi
  int v344; // edx
  int v345; // ecx
  unsigned int v346; // ecx
  __int64 v347; // rcx
  __int64 v348; // rax
  __int64 v349; // rdx
  __int64 v350; // r8
  __m128i *v351; // rax
  __m128i v352; // xmm0
  __m128i v353; // xmm1
  __m128i v354; // xmm2
  const __m128i *v355; // rax
  __m128i v356; // xmm0
  __int128 v357; // xmm1
  __int128 v358; // xmm2
  __m128i v359; // xmm0
  __m128i v360; // xmm0
  __m128i v361; // xmm1
  __m128i v362; // xmm2
  __m128i v363; // xmm3
  __m128i v364; // xmm4
  __m128i v365; // xmm5
  __m128i v366; // xmm6
  __m128i v367; // xmm0
  __int64 v368; // rsi
  __int64 v369; // rsi
  __int64 v370; // rdx
  __int64 v371; // rax
  _QWORD *v372; // rcx
  _QWORD *v373; // rsi
  char result; // al
  __int64 v375; // rdx
  int v376; // edx
  __m128i v377; // xmm0
  __int64 v378; // rdx
  int v379; // edx
  __m128i v380; // xmm0
  __int64 v381; // rax
  __int64 v382; // rsi
  __int64 v383; // rdx
  __m128i v384; // xmm0
  unsigned __int64 v385; // rax
  __int64 v386; // rdi
  __int64 v387; // rdx
  __int64 v388; // rdx
  __int128 v389; // xmm1
  __int128 v390; // xmm2
  __int128 v391; // xmm3
  char v392; // al
  char v393; // al
  __m128i v394; // xmm0
  __m128i v395; // xmm0
  __int64 (__fastcall **v396)(); // rsi
  __m128i v397; // xmm0
  __int64 v398; // rsi
  __m128i v399; // xmm0
  __int64 v400; // rsi
  __int64 v401; // rdx
  _QWORD *v402; // rcx
  _QWORD *v403; // rsi
  __int64 v404; // rdx
  __m128i *v405; // rax
  __m128i v406; // xmm0
  __m128i v407; // xmm1
  __m128i v408; // xmm2
  __int64 v409; // rcx
  __int64 v410; // rsi
  __m128i v411[16]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v412; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v413; // [rsp+170h] [rbp+F0h]
  __m128i v414; // [rsp+200h] [rbp+180h]
  __int128 v415; // [rsp+210h] [rbp+190h]
  _OWORD v416[2]; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v417[4]; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v418[6]; // [rsp+280h] [rbp+200h] BYREF
  __m128i v419; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v420; // [rsp+2F0h] [rbp+270h]
  __int64 v421; // [rsp+300h] [rbp+280h]
  __int64 (__fastcall *v422)(); // [rsp+308h] [rbp+288h]
  __int128 *v423; // [rsp+310h] [rbp+290h]
  __int64 (__fastcall *v424)(); // [rsp+318h] [rbp+298h]
  __m128i *v425; // [rsp+320h] [rbp+2A0h]
  __int64 (__fastcall *v426)(); // [rsp+328h] [rbp+2A8h]
  __int128 v427; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v428; // [rsp+400h] [rbp+380h]
  __m128i v429[3]; // [rsp+410h] [rbp+390h] BYREF
  __int128 v430; // [rsp+440h] [rbp+3C0h]
  __int128 v431; // [rsp+450h] [rbp+3D0h]
  __int128 v432; // [rsp+460h] [rbp+3E0h]
  __int128 v433; // [rsp+470h] [rbp+3F0h]
  __int128 v434; // [rsp+480h] [rbp+400h]
  __int128 v435; // [rsp+490h] [rbp+410h]
  __m128i v436; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 (__fastcall **v437)(); // [rsp+4B0h] [rbp+430h]
  __m128i v438; // [rsp+4C0h] [rbp+440h]
  __m128i v439; // [rsp+4D0h] [rbp+450h]
  __int128 v440; // [rsp+4E0h] [rbp+460h]
  __int128 v441; // [rsp+4F0h] [rbp+470h]
  __int128 v442; // [rsp+500h] [rbp+480h]
  __int128 v443; // [rsp+510h] [rbp+490h]
  __m128i v444; // [rsp+520h] [rbp+4A0h] BYREF
  __int64 v445; // [rsp+530h] [rbp+4B0h]
  __int128 v446; // [rsp+540h] [rbp+4C0h]
  __int128 v447; // [rsp+550h] [rbp+4D0h]
  __int128 v448; // [rsp+560h] [rbp+4E0h]
  __int128 v449; // [rsp+570h] [rbp+4F0h]
  __m128i v450; // [rsp+580h] [rbp+500h] BYREF
  __int64 v451; // [rsp+590h] [rbp+510h]
  __m128i v452; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v453; // [rsp+5B0h] [rbp+530h]
  __m128i v454; // [rsp+5C0h] [rbp+540h] BYREF
  __m128i v455; // [rsp+5D0h] [rbp+550h]
  __m128i v456; // [rsp+5E0h] [rbp+560h] BYREF
  __m128i v457; // [rsp+5F0h] [rbp+570h]
  __int128 v458; // [rsp+600h] [rbp+580h]
  __int128 v459; // [rsp+610h] [rbp+590h]
  __int128 v460; // [rsp+620h] [rbp+5A0h]
  __int128 v461; // [rsp+630h] [rbp+5B0h]
  __m128i v462; // [rsp+640h] [rbp+5C0h]
  __int64 v463; // [rsp+650h] [rbp+5D0h]
  __int128 v464; // [rsp+660h] [rbp+5E0h] BYREF
  __int128 v465; // [rsp+670h] [rbp+5F0h]
  __int128 v466; // [rsp+680h] [rbp+600h]
  __int128 v467; // [rsp+690h] [rbp+610h]
  __m128i v468; // [rsp+6A0h] [rbp+620h]
  __m128i v469; // [rsp+6B0h] [rbp+630h]
  __int128 v470; // [rsp+6C0h] [rbp+640h]
  __int128 v471; // [rsp+6D0h] [rbp+650h]
  __m128i v472; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v473; // [rsp+6F0h] [rbp+670h]
  __m128i v474; // [rsp+700h] [rbp+680h] BYREF
  __m128i v475; // [rsp+710h] [rbp+690h]
  __m128i v476; // [rsp+720h] [rbp+6A0h]
  __m128i v477; // [rsp+730h] [rbp+6B0h]
  __m128i v478; // [rsp+740h] [rbp+6C0h]
  __m128i v479; // [rsp+750h] [rbp+6D0h]
  __m128i v480; // [rsp+760h] [rbp+6E0h]
  __m128i v481; // [rsp+770h] [rbp+6F0h]
  _BYTE v482[112]; // [rsp+780h] [rbp+700h] BYREF
  __m128i *v483; // [rsp+7F8h] [rbp+778h]
  __m128i *v484; // [rsp+800h] [rbp+780h]
  __int64 v485; // [rsp+808h] [rbp+788h]
  volatile signed __int64 *v486; // [rsp+810h] [rbp+790h]
  __int64 v487; // [rsp+818h] [rbp+798h]
  __int64 v488; // [rsp+820h] [rbp+7A0h]
  __int64 v489; // [rsp+828h] [rbp+7A8h]
  _QWORD *v490; // [rsp+830h] [rbp+7B0h]
  _QWORD v491[3]; // [rsp+838h] [rbp+7B8h] BYREF
  __m128i v492; // [rsp+850h] [rbp+7D0h]
  __m128i v493; // [rsp+860h] [rbp+7E0h]
  __int128 v494; // [rsp+870h] [rbp+7F0h]
  __int128 v495; // [rsp+880h] [rbp+800h]
  __int128 v496; // [rsp+890h] [rbp+810h]
  __int128 v497; // [rsp+8A0h] [rbp+820h]
  __m128i v498; // [rsp+8B0h] [rbp+830h]
  __int64 v499; // [rsp+8C0h] [rbp+840h]
  __int64 v500; // [rsp+8C8h] [rbp+848h]
  __m128i *v501; // [rsp+8D0h] [rbp+850h]
  __int64 v502; // [rsp+8D8h] [rbp+858h]
  __m128i *v503; // [rsp+8E0h] [rbp+860h]
  __int64 v504; // [rsp+8E8h] [rbp+868h]
  __m128i *v505; // [rsp+8F0h] [rbp+870h]
  __int64 v506; // [rsp+8F8h] [rbp+878h]
  __m128i *v507; // [rsp+900h] [rbp+880h]
  __int64 v508; // [rsp+908h] [rbp+888h]
  __int64 v509; // [rsp+910h] [rbp+890h]
  __int64 *v510; // [rsp+918h] [rbp+898h]
  __m128i v511; // [rsp+920h] [rbp+8A0h] BYREF
  __m128i v512; // [rsp+930h] [rbp+8B0h]
  __int128 v513; // [rsp+940h] [rbp+8C0h]
  __int128 v514; // [rsp+950h] [rbp+8D0h]
  __int128 v515; // [rsp+960h] [rbp+8E0h]
  __int128 v516; // [rsp+970h] [rbp+8F0h]
  __m128i v517; // [rsp+980h] [rbp+900h]
  __int64 v518; // [rsp+990h] [rbp+910h]
  __m128i v519; // [rsp+9A0h] [rbp+920h] BYREF
  __m128i v520; // [rsp+9B0h] [rbp+930h]
  __m128i v521; // [rsp+9C0h] [rbp+940h]
  __m128i v522; // [rsp+9D0h] [rbp+950h]
  __m128i v523; // [rsp+9E0h] [rbp+960h]
  __m128i v524; // [rsp+9F0h] [rbp+970h] BYREF
  __m128i *v525; // [rsp+A00h] [rbp+980h]
  __int64 v526; // [rsp+A08h] [rbp+988h]
  __int64 v527; // [rsp+A10h] [rbp+990h]
  __m128i *v528; // [rsp+A18h] [rbp+998h]
  __m128i *v529; // [rsp+A20h] [rbp+9A0h]
  __int64 v530; // [rsp+A28h] [rbp+9A8h]
  __int64 v531; // [rsp+A30h] [rbp+9B0h]
  const __m128i *v532; // [rsp+A38h] [rbp+9B8h]
  _BYTE v533[256]; // [rsp+A40h] [rbp+9C0h] BYREF
  __m256i v534; // [rsp+B50h] [rbp+AD0h] BYREF
  __int64 v535; // [rsp+B78h] [rbp+AF8h]
  __int64 v536; // [rsp+B80h] [rbp+B00h]
  __m128i *v537; // [rsp+B88h] [rbp+B08h]
  __int64 v538; // [rsp+B90h] [rbp+B10h]
  __int64 (__fastcall **v539)(); // [rsp+B98h] [rbp+B18h] BYREF
  __m128i *v540; // [rsp+BA0h] [rbp+B20h]
  __int64 v541; // [rsp+BA8h] [rbp+B28h]
  _BYTE v542[128]; // [rsp+BB0h] [rbp+B30h] BYREF
  __int64 (__fastcall **v543)(); // [rsp+C30h] [rbp+BB0h]
  __m128i *v544; // [rsp+C38h] [rbp+BB8h]
  __int64 v545; // [rsp+C40h] [rbp+BC0h]
  __m128i v546; // [rsp+C50h] [rbp+BD0h]
  __int128 v547; // [rsp+C60h] [rbp+BE0h]
  __m128i *v548; // [rsp+D88h] [rbp+D08h]
  __int64 v549; // [rsp+D90h] [rbp+D10h]
  char *v550; // [rsp+D98h] [rbp+D18h]
  __int64 v551; // [rsp+DA0h] [rbp+D20h]
  __int64 v552; // [rsp+DA8h] [rbp+D28h]
  __int64 v553; // [rsp+DB0h] [rbp+D30h]
  __m128i *v554; // [rsp+DB8h] [rbp+D38h]
  __int64 v555; // [rsp+DC0h] [rbp+D40h]
  __int64 v556; // [rsp+DC8h] [rbp+D48h]
  const __m128i **v557; // [rsp+DD0h] [rbp+D50h]
  int v558; // [rsp+DDCh] [rbp+D5Ch]
  __int64 v559; // [rsp+DE0h] [rbp+D60h]
  _QWORD *v560; // [rsp+DE8h] [rbp+D68h]
  char v561; // [rsp+DF6h] [rbp+D76h]
  char v562; // [rsp+DF7h] [rbp+D77h]
  const __m128i *v563; // [rsp+DF8h] [rbp+D78h]
  __int64 v564; // [rsp+E00h] [rbp+D80h]
  __int64 v565; // [rsp+E08h] [rbp+D88h]
  __m128i *v566; // [rsp+E10h] [rbp+D90h]
  char v567; // [rsp+E1Bh] [rbp+D9Bh]
  char v568; // [rsp+E1Ch] [rbp+D9Ch]
  char v569; // [rsp+E1Dh] [rbp+D9Dh]
  char v570; // [rsp+E1Eh] [rbp+D9Eh] BYREF
  char v571; // [rsp+E1Fh] [rbp+D9Fh]
  __m128i *v572; // [rsp+E20h] [rbp+DA0h]
  char v573; // [rsp+E2Fh] [rbp+DAFh]
  __int64 v574; // [rsp+E30h] [rbp+DB0h]
  __int64 v575; // [rsp+E38h] [rbp+DB8h]

  v575 = -2;
  v560 = a3;
  v528 = a1;
  v3 = *(unsigned __int8 *)(a2 + 840);
  v574 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 80);
      *(_OWORD *)(a2 + 136) = *(_OWORD *)a2;
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a2 + 841) = 1;
      v4 = *(__m128i *)(a2 + 48);
      v473 = *(_OWORD *)(a2 + 64);
      v472 = v4;
      v5 = *(_QWORD *)(a2 + 104);
      v6 = *(_QWORD *)(a2 + 96);
      *(_OWORD *)(a2 + 160) = *(_OWORD *)(a2 + 88);
      *(_QWORD *)(a2 + 176) = v5;
      *(_OWORD *)(a2 + 184) = *(_OWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 40);
      *(__m128i *)(a2 + 208) = _mm_loadu_si128((const __m128i *)(a2 + 112));
      if ( !*(_QWORD *)(a2 + 152) )
      {
        LOWORD(a2) = 502;
        sub_140DAFCE0((unsigned int)&v474, a2, (unsigned int)aNoRelayProvide, 38, (__int64)aProxyUpstream, 14);
LABEL_254:
        v369 = v574;
        v370 = *(_QWORD *)(v574 + 184);
        if ( v370 != -1 && v370 )
          sub_140001660(*(_QWORD *)(v574 + 192), v370, 1);
        if ( *(_BYTE *)(v369 + 841) )
          sub_140409B40(&v472);
        v371 = v574;
        *(_BYTE *)(v574 + 841) = 0;
        v564 = v371 + 144;
        v372 = *(_QWORD **)(v371 + 144);
        v566 = *(__m128i **)(v371 + 152);
        v572 = nullptr;
        v560 = v372;
        while ( v566 != v572 )
        {
          v572 = (__m128i *)((char *)v572 + 1);
          v373 = v372 + 32;
          sub_14038CFC0(v372);
          v372 = v373;
        }
LABEL_322:
        v282 = v574;
        v404 = *(_QWORD *)(v574 + 136);
        if ( v404 )
          sub_140001660(*(_QWORD *)v564, v404 << 8, 8);
        v405 = v528;
        v528[7] = v481;
        v405[6] = v480;
        v405[5] = v479;
        v405[4] = v478;
        v406 = _mm_load_si128(&v474);
        v407 = v475;
        v408 = v476;
        v405[3] = v477;
        v405[2] = v408;
        v405[1] = v407;
        *v405 = v406;
        result = 1;
        goto LABEL_325;
      }
      if ( (unsigned __int8)sub_140DDDAE0(aCompact, 7, v6) )
      {
        v7 = sub_1416419F0(aModel_6, 5, &v472);
        if ( v7 )
        {
          v8 = 0;
          v9 = *(_QWORD *)(v7 + 24);
          v10 = 1;
          v11 = *(_QWORD *)(v7 + 16);
          if ( *(_BYTE *)v7 != 3 )
            v11 = 1;
          v12 = 0;
          if ( *(_BYTE *)v7 == 3 )
            v12 = *(_QWORD *)(v7 + 24);
          if ( v12 < 0 )
LABEL_10:
            sub_141938D2B(v8, v12);
          if ( v12 )
          {
            nullsub_1(0);
            v48 = (__m128i *)sub_140001650(v12, 1);
            v8 = 1;
            if ( !v48 )
              goto LABEL_10;
            v49 = v12;
            v50 = v48;
            sub_1418F44E0(v48, (const __m128i *)v11, v49);
            v10 = (__int64)v50;
            goto LABEL_22;
          }
        }
        else
        {
          v10 = 1;
        }
        v9 = 0;
LABEL_22:
        v39 = *(_QWORD *)(v574 + 128);
        v40 = *(_QWORD *)(v574 + 168);
        v41 = *(_QWORD *)(v574 + 176);
        v572 = (__m128i *)v9;
        v566 = (__m128i *)v10;
        sub_140DABD30(v39, v40, v41, v10, v9, 0, 0);
        LOWORD(v42) = 400;
        sub_140DAFCE0(
          (unsigned int)&v474,
          v42,
          (unsigned int)"中转模型请使用 ChatGPT 原生上下文压缩；请更新 ChatGPT 并重新打开任务。AiMaMi 不再生成兼容性伪摘要。router.native_compaction_required/"
                        "responses/responses/compact",
          136,
          (__int64)"router.native_compaction_required/responses/responses/compact",
          33);
        if ( v572 )
          sub_140001660(v566, v572, 1);
        goto LABEL_254;
      }
      v25 = v574;
      *(_BYTE *)(v574 + 841) = 0;
      v26 = _mm_load_si128(&v472);
      *(_OWORD *)&v542[16] = v473;
      *(__m128i *)v542 = v26;
      v27 = v25 + 224;
      sub_140DB5070(v25 + 224, v542);
      if ( (unsigned __int8)sub_141011660(
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v574 + 128) + 16LL) + 88LL),
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v574 + 128) + 16LL) + 96LL)) )
      {
        v29 = sub_1416419F0(
                "toolsinputimage_generationinternal error: entered unreachable code: catalog removal loop always returns",
                5,
                v27);
        if ( v29 && *(_BYTE *)v29 == 4 )
        {
          v30 = *(_QWORD *)(v29 + 24);
          v31 = v29;
          sub_14037AEF0(v29 + 8);
          v32 = v30 - *(_QWORD *)(v31 + 24);
        }
        else
        {
          v32 = 0;
        }
        *(_QWORD *)v542 = v32;
        v43 = (_BYTE *)sub_1416419F0(
                         "inputimage_generationinternal error: entered unreachable code: catalog removal loop always returns",
                         5,
                         v27);
        if ( v43 )
        {
          if ( *v43 == 4 )
            sub_140379CF0(v43 + 8, v542);
        }
      }
      v44 = v574;
      *(_QWORD *)(v574 + 256) = -1;
      v45 = *(_QWORD *)(v44 + 144);
      v46 = *(_QWORD *)(v44 + 152);
      *(_QWORD *)(v44 + 384) = v46;
      v47 = v45 + (v46 << 8);
      *(_QWORD *)(v44 + 392) = v45;
      *(_QWORD *)(v44 + 400) = v47;
      *(_QWORD *)(v44 + 408) = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A485E0);
    case 2LL:
      sub_141939400(&off_141A485E0);
    case 3LL:
      v13 = (char *)(a2 + 1008);
      v14 = a2 + 848;
      switch ( *(_BYTE *)(a2 + 1008) )
      {
        case 0:
          v15 = *(_QWORD *)(a2 + 880);
          v16 = a2;
          v17 = *(_QWORD *)(a2 + 888);
          v18 = *(_QWORD *)(a2 + 896);
          v19 = *(const __m128i **)(a2 + 904);
          v20 = *(_QWORD *)(a2 + 912);
          v21 = *(_QWORD *)(v16 + 920);
          v22 = *(_QWORD *)(v16 + 928);
          v23 = v14;
          v24 = *(_QWORD *)(v16 + 936);
          goto LABEL_56;
        case 1:
          v500 = a2 + 848;
          sub_1419393E0(&off_141A48220);
        case 2:
          JUMPOUT(0x140D46A71LL);
        case 3:
          v556 = a2 + 1261;
          v33 = *(unsigned __int8 *)(a2 + 1261);
          v566 = (__m128i *)(a2 + 1016);
          switch ( v33 )
          {
            case 0LL:
              v15 = *(_QWORD *)(a2 + 1232);
              v17 = *(_QWORD *)(a2 + 1240);
              v34 = *(_QWORD *)(a2 + 1144);
              v35 = *(_QWORD *)(a2 + 1152);
              v18 = *(_QWORD *)(a2 + 1248);
              v36 = *(const __m128i **)(a2 + 1160);
              v37 = *(_QWORD *)(a2 + 1168);
              v38 = v566;
              goto LABEL_74;
            case 1LL:
              v526 = a2 + 848;
              v525 = v566;
              sub_1419393E0(&off_141A486B8);
            case 2LL:
              v526 = a2 + 848;
              JUMPOUT(0x140D46AB1LL);
            case 3LL:
              v550 = (char *)(a2 + 1008);
              v572 = (__m128i *)(a2 + 848);
              goto LABEL_143;
            case 4LL:
              v572 = (__m128i *)(a2 + 848);
              goto LABEL_169;
          }
        case 4:
          goto LABEL_112;
        case 5:
          goto LABEL_211;
      }
    case 4LL:
      goto LABEL_249;
    case 5LL:
      goto LABEL_315;
  }
  while ( 1 )
  {
    if ( v45 == v47 )
    {
      if ( *(_QWORD *)(v44 + 256) == -1 )
      {
        LOWORD(v28) = 502;
        sub_140DAFCE0((unsigned int)v533, v28, (unsigned int)aAllCodexRelayP, 72, (__int64)aProxyUpstream, 14);
      }
      else
      {
        *(_QWORD *)v533 = *(_QWORD *)(v44 + 256);
        v389 = *(_OWORD *)(v44 + 280);
        v390 = *(_OWORD *)(v44 + 296);
        v391 = *(_OWORD *)(v44 + 312);
        *(_OWORD *)&v533[8] = *(_OWORD *)(v44 + 264);
        *(_OWORD *)&v533[24] = v389;
        *(_OWORD *)&v533[40] = v390;
        *(_OWORD *)&v533[56] = v391;
        *(_OWORD *)&v533[72] = *(_OWORD *)(v44 + 328);
        *(_OWORD *)&v533[88] = *(_OWORD *)(v44 + 344);
        *(__m128i *)&v533[104] = _mm_loadu_si128((const __m128i *)(v44 + 360));
        *(_QWORD *)&v533[120] = *(_QWORD *)(v44 + 376);
      }
      *(_OWORD *)&v542[112] = *(_OWORD *)&v533[112];
      *(_OWORD *)&v542[96] = *(_OWORD *)&v533[96];
      *(_OWORD *)&v542[80] = *(_OWORD *)&v533[80];
      *(_OWORD *)&v542[64] = *(_OWORD *)&v533[64];
      v397 = _mm_loadu_si128((const __m128i *)v533);
      *(_OWORD *)&v542[48] = *(_OWORD *)&v533[48];
      *(_OWORD *)&v542[32] = *(_OWORD *)&v533[32];
      *(_OWORD *)&v542[16] = *(_OWORD *)&v533[16];
      *(__m128i *)v542 = v397;
      v398 = v574;
      sub_1418F44E0((__m128i *)(v574 + 848), (const __m128i *)v542, 0x1D0u);
      *(_BYTE *)(v398 + 1312) = 0;
      a2 = v398;
LABEL_315:
      v572 = (__m128i *)(a2 + 848);
      sub_140D442B0((__int64)v533, (__int128 *)(a2 + 848), (__int64)v560);
      if ( *(_DWORD *)v533 == -1 )
      {
        v528->m128i_i64[0] = -1;
        result = 5;
        v282 = v574;
        goto LABEL_325;
      }
      v481 = *(__m128i *)&v533[112];
      v480 = *(__m128i *)&v533[96];
      v479 = *(__m128i *)&v533[80];
      v478 = *(__m128i *)&v533[64];
      v399 = _mm_loadu_si128((const __m128i *)v533);
      v477 = *(__m128i *)&v533[48];
      v476 = *(__m128i *)&v533[32];
      v475 = *(__m128i *)&v533[16];
      v474 = v399;
      sub_140D13740((__int64)v572);
      sub_140409B40(v574 + 224);
      v400 = v574;
      v401 = *(_QWORD *)(v574 + 184);
      if ( v401 != -1 && v401 )
        sub_140001660(*(_QWORD *)(v574 + 192), v401, 1);
      *(_BYTE *)(v400 + 841) = 0;
      v564 = v400 + 144;
      v402 = *(_QWORD **)(v400 + 144);
      v566 = *(__m128i **)(v400 + 152);
      v572 = nullptr;
      v560 = v402;
      while ( v566 != v572 )
      {
        v572 = (__m128i *)((char *)v572 + 1);
        v403 = v402 + 32;
        sub_14038CFC0(v402);
        v402 = v403;
      }
      goto LABEL_322;
    }
    *(_QWORD *)(v44 + 392) = v45 + 256;
    v51 = *(_QWORD *)(v44 + 128);
    v52 = *(_QWORD *)(v44 + 408) + 1LL;
    *(_QWORD *)(v44 + 408) = v52;
    sub_140DAE9D0(v411, v51);
    if ( v411[0].m128i_i64[0] == -1 )
    {
      v481 = *(__m128i *)((char *)&v411[7] + 8);
      v480 = *(__m128i *)((char *)&v411[6] + 8);
      v479 = *(__m128i *)((char *)&v411[5] + 8);
      v478 = *(__m128i *)((char *)&v411[4] + 8);
      v394 = _mm_loadu_si128((const __m128i *)&v411[0].m128i_u64[1]);
      v477 = *(__m128i *)((char *)&v411[3] + 8);
      v476 = *(__m128i *)((char *)&v411[2] + 8);
      v475 = *(__m128i *)((char *)&v411[1] + 8);
      v474 = v394;
      if ( *(_DWORD *)(v574 + 256) == -1 )
        goto LABEL_253;
      goto LABEL_252;
    }
    v53 = v574;
    v54 = v574 + 416;
    sub_1418F44E0((__m128i *)(v574 + 416), v411, 0x100u);
    *(_QWORD *)(v53 + 672) = v54;
    *(_QWORD *)(v53 + 680) = v52;
    v56 = (const __m128i *)(v53 + 224);
    if ( v52 == *(_QWORD *)(v53 + 384) )
    {
      v57 = _mm_loadu_si128(v56);
      *(_OWORD *)&v534.m256i_u64[2] = *(_OWORD *)(v53 + 240);
      *(__m128i *)v534.m256i_i8 = v57;
      v56->m128i_i8[0] = 0;
    }
    else
    {
      switch ( v56->m128i_i8[0] )
      {
        case 0:
          v534.m256i_i8[0] = 0;
          break;
        case 1:
          v534.m256i_i8[1] = *(_BYTE *)(v53 + 225);
          v534.m256i_i8[0] = 1;
          break;
        case 2:
          *(__m128i *)&v534.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v53 + 232));
          v534.m256i_i8[0] = 2;
          break;
        case 3:
          sub_1416AC440(&v534.m256i_u64[1], v53 + 232);
          v534.m256i_i8[0] = 3;
          v53 = v574;
          break;
        case 4:
          sub_1403918C0(&v534.m256i_u64[1], *(_QWORD *)(v53 + 240), *(_QWORD *)(v53 + 248));
          v534.m256i_i8[0] = 4;
          v53 = v574;
          break;
        case 5:
          if ( *(_QWORD *)(v53 + 248) )
          {
            v375 = *(_QWORD *)(v53 + 232);
            if ( !v375 )
              sub_141939020(&off_141A54900);
            sub_140E11B90(&v534.m256i_u64[1], v375, *(_QWORD *)(v53 + 240));
          }
          else
          {
            v534.m256i_i64[1] = 0;
            v534.m256i_i64[3] = 0;
          }
          v534.m256i_i8[0] = 5;
          v53 = v574;
          break;
      }
    }
    v58 = *(unsigned __int8 *)(*(_QWORD *)(v53 + 672) + 254LL);
    if ( v58 == 2 )
    {
      sub_1403104B0(&v452, &v534);
    }
    else
    {
      if ( v58 != 1 )
      {
        LOBYTE(v55) = 1;
        sub_140328F50(&v534, v55);
        v59 = (_BYTE *)sub_1416419F0(aInput_0, 5, &v534);
        if ( v59 )
        {
          if ( *v59 == 4 )
            sub_14037A3D0(v59 + 8);
        }
      }
      si128 = _mm_load_si128((const __m128i *)&v534);
      v453 = *(_OWORD *)&v534.m256i_u64[2];
      v452 = si128;
    }
    v16 = v574;
    v15 = *(_QWORD *)(v574 + 128);
    v18 = *(_QWORD *)(v574 + 160);
    v17 = *(_QWORD *)(v574 + 672);
    v19 = *(const __m128i **)(v574 + 168);
    v20 = *(_QWORD *)(v574 + 176);
    v21 = 0;
    v22 = *(_QWORD *)(v574 + 200);
    if ( *(_QWORD *)(v574 + 184) != -1 )
      v21 = *(_QWORD *)(v574 + 192);
    v24 = *(_QWORD *)(v574 + 208);
    v61 = *(_QWORD *)(v574 + 216);
    v23 = v574 + 848;
    v62 = v453;
    *(__m128i *)(v574 + 848) = v452;
    *(_OWORD *)(v16 + 864) = v62;
    *(_QWORD *)(v16 + 880) = v15;
    *(_QWORD *)(v16 + 888) = v17;
    *(_QWORD *)(v16 + 896) = v18;
    *(_QWORD *)(v16 + 904) = v19;
    *(_QWORD *)(v16 + 912) = v20;
    *(_QWORD *)(v16 + 920) = v21;
    *(_QWORD *)(v16 + 928) = v22;
    *(_QWORD *)(v16 + 936) = v24;
    *(_QWORD *)(v16 + 944) = v61;
    v13 = (char *)(v16 + 1008);
    *(_BYTE *)(v16 + 1008) = 0;
LABEL_56:
    v531 = v21;
    v556 = v22;
    v563 = v19;
    v565 = v20;
    *(_WORD *)(v16 + 1009) = 1;
    v63 = (const __m128i *)(v16 + 952);
    v64 = _mm_loadu_si128((const __m128i *)v23);
    v572 = (__m128i *)v23;
    *(_OWORD *)(v16 + 968) = *(_OWORD *)(v23 + 16);
    *(__m128i *)(v16 + 952) = v64;
    v65 = 0;
    v66 = (char *)&xmmword_141A47FEC;
    v67 = 20;
    if ( *(_BYTE *)(v17 + 254) )
    {
      if ( *(_BYTE *)(v17 + 254) == 1 )
      {
        v527 = (__int64)v572;
        v68 = sub_140DDDAE0(aCompact, 7, v563);
        v67 = 8LL * v68 + 10;
        v66 = "/responses/responses/compact";
        if ( v68 )
          v66 = "/responses/compact";
        v65 = v24;
      }
      else
      {
        v66 = (char *)&unk_141A47FE0;
        v67 = 12;
        v65 = 0;
      }
    }
    v69 = *(_QWORD *)(v17 + 56);
    v70 = *(_QWORD *)(v17 + 64);
    v527 = (__int64)v572;
    sub_140EF68B0((unsigned int)v533, v69, v70, (_DWORD)v66, v67, v65);
    if ( v533[0] )
    {
      v565 = *(_QWORD *)&v533[8];
      LOWORD(v71) = 400;
      v563 = *(const __m128i **)&v533[16];
      sub_140DAFCE0((unsigned int)v542, v71, *(_DWORD *)&v533[16], *(_DWORD *)&v533[24], (__int64)aProxyUpstream, 14);
      v532 = v63;
      v499 = *(_QWORD *)&v542[112];
      v498 = *(__m128i *)&v542[96];
      v497 = *(_OWORD *)&v542[80];
      v496 = *(_OWORD *)&v542[64];
      v72 = _mm_loadu_si128((const __m128i *)v542);
      v495 = *(_OWORD *)&v542[48];
      v494 = *(_OWORD *)&v542[32];
      v493 = *(__m128i *)&v542[16];
      v492 = v72;
      v73 = *(__int64 (__fastcall ***)())&v542[120];
      if ( v565 )
        sub_140001660(v563, v565, 1);
      v74 = v574;
      v75 = v572;
      goto LABEL_66;
    }
    v78 = v574;
    *(_QWORD *)(v574 + 1000) = *(_QWORD *)&v533[24];
    *(__m128i *)(v78 + 984) = _mm_loadu_si128((const __m128i *)&v533[8]);
    v14 = (__int64)v572;
    v559 = (__int64)v572;
    v79 = (_BYTE *)sub_1416419F0("stream", 6, v63);
    v80 = (_QWORD *)(v574 + 984);
    v81 = 0;
    if ( v79 )
      LOBYTE(v81) = v79[1] & (*v79 == 1);
    v82 = *(unsigned __int8 *)(v17 + 254);
    if ( v82 != 2 )
      break;
    v558 = v81;
    v559 = v14;
    v510 = (__int64 *)(v574 + 1016);
    sub_140DB1340(v574 + 1016, v63, v18);
    v490 = v80;
    v488 = v18;
    v550 = v13;
    v509 = v15;
    v99 = sub_140DB0810(v15);
    v100 = *(_QWORD *)(v17 + 8);
    v101 = *(_QWORD *)(v17 + 16);
    v102 = *(_QWORD *)(v17 + 104);
    v103 = *(_QWORD *)(v17 + 112);
    sub_140DAE660(v542, v488);
    v104 = 0;
    v489 = *(_QWORD *)&v542[8];
    v106 = *(_OWORD *)v542;
    v105 = v106 >> 64;
    v557 = (const __m128i **)v106;
    if ( *(_QWORD *)v542 == -1 )
      v105 = 0;
    if ( *(_QWORD *)(v574 + 1016) != -1 )
      v104 = *(_QWORD *)(v574 + 1024);
    v107 = sub_1401F6F80(
             v100,
             v101,
             v102,
             v103,
             v105,
             *(__int64 *)&v542[16],
             (__int64)v63,
             v104,
             *(_QWORD *)(v574 + 1032),
             v99);
    v532 = v63;
    *(_QWORD *)&v464 = v107;
    if ( (__int64)v557 > 0 )
      sub_140001660(v489, v557, 1);
    v108 = v574;
    v557 = (const __m128i **)(v574 + 2344);
    v109 = v532;
    sub_140342ED0(v574 + 2344, v532);
    *(_BYTE *)(v108 + 1009) = 0;
    v110 = _mm_loadu_si128(v109);
    *(__m128i *)&v542[16] = v109[1];
    *(__m128i *)v542 = v110;
    v111 = 0;
    if ( *(_QWORD *)(v108 + 1016) != -1 )
      v111 = *(_QWORD *)(v574 + 1024);
    sub_140DB4C30(
      (unsigned int)v416,
      (unsigned int)v542,
      *(_QWORD *)(v17 + 104),
      *(_QWORD *)(v17 + 112),
      v111,
      *(_QWORD *)(v108 + 1032),
      v99);
    if ( v417[0].m128i_i64[0] != -2 )
    {
      v286 = v574;
      v287 = v574 + 2440;
      v288 = v416[0];
      *(_OWORD *)(v574 + 2456) = v416[1];
      *(_OWORD *)(v286 + 2440) = v288;
      v566 = (__m128i *)(v286 + 2472);
      v289 = v417[1];
      v290 = v417[2];
      v291 = v417[3];
      *(__m128i *)(v286 + 2472) = _mm_loadu_si128(v417);
      *(__m128i *)(v286 + 2488) = v289;
      *(__m128i *)(v286 + 2504) = v290;
      *(__m128i *)(v286 + 2520) = v291;
      if ( *(_BYTE *)(v286 + 2440) == 5 )
      {
        v564 = v287;
        nullsub_1(v286);
        v292 = sub_140001650(6, 1);
        if ( !v292 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v292 + 4) = 28001;
        *(_DWORD *)v292 = 1701999731;
        v419.m128i_i64[0] = 6;
        v419.m128i_i64[1] = v292;
        *(_QWORD *)&v420 = 6;
        v542[1] = v558;
        v542[0] = 1;
        sub_140E72AA0(v533, v574 + 2448, &v419, v542);
        if ( v533[0] != 0xFF )
          sub_140409B40(v533);
        v287 = v564;
      }
      v293 = *(_QWORD *)(v574 + 992);
      v294 = *(_QWORD *)(v574 + 1000);
      v295 = _mm_loadu_si128((const __m128i *)v287);
      v420 = *(_OWORD *)(v287 + 16);
      v419 = v295;
      v296 = sub_14167F170(v286);
      v301 = v296;
      if ( *(_BYTE *)(v296 + 16) == 1 )
      {
        v302 = *(_QWORD *)v296;
        v303 = *(_QWORD *)(v301 + 8);
      }
      else
      {
        v302 = sub_141696260(v298, v297, v299, v300);
        *(_QWORD *)v301 = v302;
        *(_QWORD *)(v301 + 8) = v303;
        *(_BYTE *)(v301 + 16) = 1;
      }
      *(_QWORD *)v301 = v302 + 1;
      v304 = v574;
      v305 = v574 + 2392;
      *(_OWORD *)(v574 + 2408) = xmmword_141A43480;
      *(_OWORD *)(v304 + 2392) = *(_OWORD *)&off_141A43470;
      *(_QWORD *)(v304 + 2424) = v302;
      *(_QWORD *)(v304 + 2432) = v303;
      v306 = v464;
      v307 = _mm_load_si128(&v419);
      v547 = v420;
      v546 = v307;
      sub_1418F44E0((__m128i *)v533, (const __m128i *)v542, 0xC0u);
      sub_1418F44E0((__m128i *)(v304 + 1040), (const __m128i *)v533, 0xC0u);
      *(_QWORD *)(v304 + 1232) = v531;
      *(_QWORD *)(v304 + 1240) = v556;
      *(_QWORD *)(v304 + 1280) = v293;
      *(_QWORD *)(v304 + 1288) = v294;
      *(_QWORD *)(v304 + 1296) = v563;
      *(_QWORD *)(v304 + 1304) = v565;
      *(_QWORD *)(v304 + 1312) = v566;
      *(_QWORD *)(v304 + 1320) = v306;
      *(_QWORD *)(v304 + 1408) = v509;
      *(_QWORD *)(v304 + 1416) = v17;
      a2 = v304;
      *(_QWORD *)(v304 + 1424) = v488;
      *(_QWORD *)(v304 + 1432) = v305;
      *(_QWORD *)(v304 + 1440) = v557;
      *(_BYTE *)(v304 + 1460) = 0;
      *(_BYTE *)(v304 + 1461) = v558;
      v14 = (__int64)v572;
      v13 = v550;
LABEL_211:
      v572 = (__m128i *)v14;
      v565 = a2 + 1040;
      sub_140D4D630(v542, a2 + 1040, v560);
      v77 = *(_QWORD *)v542;
      if ( *(_QWORD *)v542 == -1 )
      {
        v393 = 5;
        goto LABEL_301;
      }
      v499 = *(_QWORD *)&v542[120];
      v498 = *(__m128i *)&v542[104];
      v497 = *(_OWORD *)&v542[88];
      v496 = *(_OWORD *)&v542[72];
      v308 = _mm_loadu_si128((const __m128i *)&v542[8]);
      v495 = *(_OWORD *)&v542[56];
      v494 = *(_OWORD *)&v542[40];
      v493 = *(__m128i *)&v542[24];
      v492 = v308;
      v73 = v543;
      v566 = v544;
      v564 = v545;
      sub_140D14E70(v565);
      v309 = *(_QWORD *)(v574 + 2504);
      v310 = 0;
      v311 = 0;
      if ( v309 )
      {
        v312 = *(_QWORD *)(v574 + 2512);
        v311 = *(_QWORD *)(v574 + 2520);
        *(_QWORD *)&v542[8] = 0;
        *(_QWORD *)&v542[16] = v309;
        *(_QWORD *)&v542[24] = v312;
        *(_QWORD *)&v542[40] = 0;
        *(_QWORD *)&v542[48] = v309;
        *(_QWORD *)&v542[56] = v312;
        v310 = 1;
      }
      *(_QWORD *)v542 = v310;
      *(_QWORD *)&v542[32] = v310;
      *(_QWORD *)&v542[64] = v311;
      sub_140E90CA0(v542);
      v313 = (_QWORD *)v574;
      v314 = *(_QWORD *)(v574 + 2472);
      if ( v314 != -1 && v314 )
        sub_140001660(*(_QWORD *)(v574 + 2480), v314, 1);
      v315 = v313[294];
      if ( v315 )
      {
        v316 = v313[296];
        if ( v316 )
        {
          HIDWORD(_RAX) = HIDWORD(v574);
          v318 = *(const __m128i **)(v574 + 2344);
          v319 = v318 + 1;
          _ESI = ~_mm_movemask_epi8(_mm_load_si128(v318));
          do
          {
            if ( !(_WORD)_ESI )
            {
              do
              {
                v321 = _mm_load_si128(v319);
                v318 -= 24;
                ++v319;
                _ESI = _mm_movemask_epi8(v321) ^ 0xFFFF;
              }
              while ( !_ESI );
            }
            __asm { tzcnt   eax, esi }
            v322 = -3 * _RAX;
            v323 = *((_QWORD *)&v318[-1] + v322 - 1);
            if ( v323 )
              sub_140001660(v318[-1].m128i_i64[v322], v323, 1);
            --v316;
            _RAX = _ESI & (unsigned int)(_ESI - 1);
            _ESI &= _ESI - 1;
          }
          while ( v316 );
        }
        v324 = (24 * v315 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v325 = v324 + v315;
        v157 = v325 == -17;
        v326 = v325 + 17;
        v313 = (_QWORD *)v574;
        if ( !v157 )
          sub_140001660(*(_QWORD *)(v574 + 2344) - v324, v326, 16);
      }
      v327 = v313[127];
      if ( v327 != -1 && v327 )
        sub_140001660(v313[128], v327, 1);
      v75 = v572;
      v559 = (__int64)v572;
      sub_14036FB80(v313 + 299);
LABEL_231:
      v76 = v574;
      v159 = *(_QWORD *)(v574 + 984);
      if ( v159 )
LABEL_232:
        sub_140001660(*(_QWORD *)(v76 + 992), v159, 1);
LABEL_233:
      *(_BYTE *)(v76 + 1009) = 0;
      goto LABEL_234;
    }
    v112 = v416[0];
    *(_QWORD *)v533 = 0;
    *(_QWORD *)&v533[8] = 1;
    *(_QWORD *)&v533[16] = 0;
    *(_QWORD *)&v542[16] = 1610612768;
    *(_QWORD *)v542 = v533;
    *(_QWORD *)&v542[8] = &off_141A4F8C0;
    if ( (unsigned __int8)sub_1416B24B0(v542, *(_QWORD *)&v416[0], *((_QWORD *)&v416[0] + 1)) )
      sub_141939040(
        (unsigned int)aADisplayImplem_8,
        55,
        (unsigned int)&v570,
        (unsigned int)&unk_141A49B48,
        (__int64)&off_141A4F978);
    v563 = *(const __m128i **)&v533[8];
    v565 = *(_QWORD *)v533;
    sub_1401F9370((unsigned int)&v464, (unsigned int)aTranslationErr, 17, *(_DWORD *)&v533[8], *(__int64 *)&v533[16]);
    if ( v565 )
      sub_140001660(v563, v565, 1);
    *(_QWORD *)v533 = 0;
    *(_QWORD *)&v533[8] = 1;
    *(_QWORD *)&v533[16] = 0;
    *(_QWORD *)&v542[16] = 1610612768;
    *(_QWORD *)v542 = v533;
    *(_QWORD *)&v542[8] = &off_141A4F8C0;
    if ( (unsigned __int8)sub_1416B24B0(v542, v112, *((_QWORD *)&v112 + 1)) )
      sub_141939040(
        (unsigned int)aADisplayImplem_8,
        55,
        (unsigned int)&v570,
        (unsigned int)&unk_141A49B48,
        (__int64)&off_141A4F978);
    v565 = *(_QWORD *)v533;
    LOWORD(v113) = 400;
    v563 = *(const __m128i **)&v533[8];
    sub_140DAFCE0((unsigned int)v542, v113, *(_DWORD *)&v533[8], *(_DWORD *)&v533[16], (__int64)aProxyAnthropic, 27);
    v499 = *(_QWORD *)&v542[112];
    v498 = *(__m128i *)&v542[96];
    v497 = *(_OWORD *)&v542[80];
    v496 = *(_OWORD *)&v542[64];
    v114 = _mm_loadu_si128((const __m128i *)v542);
    v495 = *(_OWORD *)&v542[48];
    v494 = *(_OWORD *)&v542[32];
    v493 = *(__m128i *)&v542[16];
    v492 = v114;
    v73 = *(__int64 (__fastcall ***)())&v542[120];
    if ( v565 )
      sub_140001660(v563, v565, 1);
    v115 = *(_QWORD *)(v574 + 2352);
    if ( v115 )
    {
      v116 = *(_QWORD *)(v574 + 2368);
      if ( v116 )
      {
        HIDWORD(_RAX) = HIDWORD(v557);
        v118 = *v557;
        v119 = *v557 + 1;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(*v557));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v121 = _mm_load_si128(v119);
              v118 -= 24;
              ++v119;
              _R13D = _mm_movemask_epi8(v121) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v122 = -3 * _RAX;
          v123 = *((_QWORD *)&v118[-1] + v122 - 1);
          if ( v123 )
            sub_140001660(v118[-1].m128i_i64[v122], v123, 1);
          --v116;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v116 );
      }
      v385 = (24 * v115 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v386 = v385 + v115 + 17;
      if ( v386 )
        sub_140001660((char *)*v557 - v385, v386, 16);
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v464) )
      sub_1409E5F10(&v464);
    v387 = *v510;
    if ( *v510 != -1 )
    {
      v74 = v574;
      v80 = v490;
      if ( v387 )
        sub_140001660(*(_QWORD *)(v574 + 1024), v387, 1);
LABEL_291:
      v75 = v572;
      v388 = *v80;
      if ( !*v80 )
        goto LABEL_66;
LABEL_304:
      sub_140001660(*(_QWORD *)(v74 + 992), v388, 1);
      goto LABEL_66;
    }
    v74 = v574;
    v75 = v572;
    v388 = *v490;
    if ( *v490 )
      goto LABEL_304;
LABEL_66:
    if ( *(_BYTE *)(v74 + 1009) )
    {
      v507 = v75;
      sub_140409B40(v532);
    }
    v76 = v574;
    *(_BYTE *)(v574 + 1009) = 0;
    v77 = 5;
LABEL_234:
    v445 = v499;
    v444 = v498;
    v443 = v497;
    v442 = v496;
    v441 = v495;
    v440 = v494;
    v439 = v493;
    v438 = v492;
    *(_BYTE *)(v76 + 1008) = 1;
    *(_QWORD *)(v76 + 688) = v77;
    v328 = v439;
    v329 = v440;
    v330 = v441;
    *(__m128i *)(v76 + 696) = v438;
    *(__m128i *)(v76 + 712) = v328;
    *(_OWORD *)(v76 + 728) = v329;
    *(_OWORD *)(v76 + 744) = v330;
    *(_OWORD *)(v76 + 760) = v442;
    *(_OWORD *)(v76 + 776) = v443;
    *(__m128i *)(v76 + 792) = _mm_load_si128(&v444);
    *(_QWORD *)(v76 + 808) = v445;
    *(_QWORD *)(v76 + 816) = v73;
    *(_QWORD *)(v76 + 824) = v566;
    *(_QWORD *)(v76 + 832) = v564;
    sub_140D13150((__int64)v75);
    v331 = v574;
    v332 = *(_QWORD *)(v574 + 688);
    v333 = v332 < 3;
    v334 = v332 - 3;
    v335 = 1;
    if ( !v333 )
      v335 = v334;
    a2 = v574;
    if ( v335 != 1 )
    {
      v355 = (const __m128i *)(v574 + 696);
      if ( v335 )
      {
        v360 = _mm_loadu_si128(v355);
        v361 = *(__m128i *)(v574 + 712);
        v362 = *(__m128i *)(v574 + 728);
        v363 = *(__m128i *)(v574 + 744);
        v364 = *(__m128i *)(v574 + 760);
        v365 = *(__m128i *)(v574 + 776);
        v366 = *(__m128i *)(v574 + 792);
        v75[7] = *(__m128i *)(v574 + 808);
        v75[6] = v366;
        v75[5] = v365;
        v75[4] = v364;
        v75[3] = v363;
        v75[2] = v362;
        v75[1] = v361;
        *v75 = v360;
        *(_BYTE *)(v331 + 1312) = 0;
LABEL_249:
        v572 = (__m128i *)(a2 + 848);
        sub_140D442B0((__int64)v542, (__int128 *)(a2 + 848), (__int64)v560);
        if ( *(_DWORD *)v542 == -1 )
        {
          v528->m128i_i64[0] = -1;
          result = 4;
          v282 = v574;
          goto LABEL_325;
        }
        v481 = *(__m128i *)&v542[112];
        v480 = *(__m128i *)&v542[96];
        v479 = *(__m128i *)&v542[80];
        v478 = *(__m128i *)&v542[64];
        v367 = _mm_loadu_si128((const __m128i *)v542);
        v477 = *(__m128i *)&v542[48];
        v476 = *(__m128i *)&v542[32];
        v475 = *(__m128i *)&v542[16];
        v474 = v367;
        sub_140D13740((__int64)v572);
      }
      else
      {
        *(_OWORD *)&v542[112] = *(_OWORD *)(v574 + 808);
        *(_OWORD *)&v542[96] = *(_OWORD *)(v574 + 792);
        *(_OWORD *)&v542[80] = *(_OWORD *)(v574 + 776);
        *(_OWORD *)&v542[64] = *(_OWORD *)(v574 + 760);
        v356 = _mm_loadu_si128(v355);
        v357 = *(_OWORD *)(v574 + 712);
        v358 = *(_OWORD *)(v574 + 728);
        *(_OWORD *)&v542[48] = *(_OWORD *)(v574 + 744);
        *(_OWORD *)&v542[32] = v358;
        *(_OWORD *)&v542[16] = v357;
        *(__m128i *)v542 = v356;
        sub_140DBC820(
          *(_QWORD *)(v574 + 128) + 8LL,
          *(_QWORD *)(*(_QWORD *)(v574 + 672) + 8LL),
          *(_QWORD *)(*(_QWORD *)(v574 + 672) + 16LL));
        v481 = *(__m128i *)&v542[112];
        v480 = *(__m128i *)&v542[96];
        v479 = *(__m128i *)&v542[80];
        v478 = *(__m128i *)&v542[64];
        v359 = _mm_load_si128((const __m128i *)v542);
        v477 = *(__m128i *)&v542[48];
        v476 = *(__m128i *)&v542[32];
        v475 = *(__m128i *)&v542[16];
        v474 = v359;
      }
      v368 = v574;
      sub_14038CFC0(v574 + 416);
      if ( *(_DWORD *)(v368 + 256) == -1 )
      {
LABEL_253:
        sub_140409B40(v574 + 224);
        goto LABEL_254;
      }
LABEL_252:
      sub_140402280(v574 + 256);
      goto LABEL_253;
    }
    *(_OWORD *)&v542[112] = *(_OWORD *)(v574 + 800);
    *(_OWORD *)&v542[96] = *(_OWORD *)(v574 + 784);
    *(_OWORD *)&v542[80] = *(_OWORD *)(v574 + 768);
    *(_OWORD *)&v542[64] = *(_OWORD *)(v574 + 752);
    v336 = *(_OWORD *)(v574 + 688);
    v337 = *(_OWORD *)(v574 + 704);
    v338 = *(_OWORD *)(v574 + 720);
    *(_OWORD *)&v542[48] = *(_OWORD *)(v574 + 736);
    *(_OWORD *)&v542[32] = v338;
    *(_OWORD *)&v542[16] = v337;
    *(_OWORD *)v542 = v336;
    v413 = *(_QWORD *)(v574 + 832);
    v412 = _mm_loadu_si128((const __m128i *)(v574 + 816));
    v339 = *(_QWORD *)(v574 + 128);
    v340 = *(_QWORD *)(v574 + 672);
    v341 = *(_QWORD *)(v340 + 8);
    v342 = *(_QWORD *)(v340 + 16);
    v567 = 1;
    sub_141406CE0(v533);
    v343 = v339 + 8;
    v344 = (*(int *)v533 >> 13) - 1;
    v345 = 0;
    if ( *(int *)v533 >> 13 <= 0 )
    {
      v346 = (1 - (*(int *)v533 >> 13)) / 0x190u + 1;
      v344 += 400 * v346;
      v345 = -146097 * v346;
    }
    v567 = 1;
    *(_QWORD *)&v464 = sub_140DBC550(
                         v343,
                         v341,
                         v342,
                         1000
                       * (*(unsigned int *)&v533[4]
                        + 86400LL
                        * (((v344 / 100) >> 2)
                         + ((1461 * v344) >> 2)
                         + v345
                         + ((*(_DWORD *)v533 >> 4) & 0x1FF)
                         - v344 / 100
                         - 719163))
                       + *(unsigned int *)&v533[8] / 0xF4240uLL);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v419.m128i_i64[0] = *(_QWORD *)(v574 + 672);
      v419.m128i_i64[1] = (__int64)sub_1400015F0;
      *(_QWORD *)&v420 = v574 + 680;
      *((_QWORD *)&v420 + 1) = sub_1416BCB10;
      v421 = v574 + 384;
      v422 = sub_1416BCB10;
      v423 = &v464;
      v424 = sub_1416BCBE0;
      v425 = &v412;
      v426 = sub_1400015F0;
      *(_QWORD *)&v533[48] = 2;
      *(_QWORD *)&v533[56] = aCodexmateLibCo_8;
      *(_QWORD *)&v533[64] = 40;
      *(_QWORD *)&v533[80] = &unk_141A485F8;
      *(_QWORD *)&v533[88] = &v419;
      *(_QWORD *)v533 = 0;
      *(_QWORD *)&v533[8] = aCodexmateLibCo_8;
      *(_OWORD *)&v533[16] = 0x28u;
      *(_QWORD *)&v533[32] = aSrcCoreRelayPr_0;
      *(_QWORD *)&v533[40] = 30;
      *(_QWORD *)&v533[72] = 0x62C00000001LL;
      v567 = 1;
      sub_1414D53A0(&v570, v533);
    }
    v347 = *(_QWORD *)(v574 + 128);
    v348 = *(_QWORD *)(v574 + 672);
    v349 = *(_QWORD *)(v348 + 8);
    v350 = *(_QWORD *)(v348 + 16);
    v567 = 1;
    sub_140DAE450(v347, v349, v350, v412.m128i_i32[2], v413);
    v572 = (__m128i *)(v574 + 256);
    if ( *(_DWORD *)(v574 + 256) != -1 )
      sub_140402280((__int64)v572);
    v351 = v572;
    v572[7] = *(__m128i *)&v542[112];
    v351[6] = *(__m128i *)&v542[96];
    v351[5] = *(__m128i *)&v542[80];
    v351[4] = *(__m128i *)&v542[64];
    v352 = _mm_load_si128((const __m128i *)v542);
    v353 = *(__m128i *)&v542[16];
    v354 = *(__m128i *)&v542[32];
    v351[3] = *(__m128i *)&v542[48];
    v351[2] = v354;
    v351[1] = v353;
    *v351 = v352;
    if ( v412.m128i_i64[0] )
      sub_140001660(v412.m128i_i64[1], v412.m128i_i64[0], 1);
    v44 = v574;
    sub_14038CFC0(v574 + 416);
    v45 = *(_QWORD *)(v44 + 392);
    v47 = *(_QWORD *)(v44 + 400);
  }
  if ( v82 == 1 )
  {
    a2 = v574;
    v34 = *(_QWORD *)(v574 + 992);
    v35 = *(_QWORD *)(v574 + 1000);
    *(_BYTE *)(v574 + 1009) = 0;
    v83 = *v63;
    v469 = v63[1];
    v464 = *(_OWORD *)v542;
    v465 = *(_OWORD *)&v542[16];
    v466 = *(_OWORD *)&v542[32];
    v467 = *(_OWORD *)&v542[48];
    v468 = v83;
    v470 = *(_OWORD *)&v542[96];
    v471 = *(_OWORD *)&v542[112];
    v38 = (__m128i *)(a2 + 1016);
    *(_OWORD *)(a2 + 1128) = *(_OWORD *)&v542[112];
    *(_OWORD *)(a2 + 1112) = v470;
    *(__m128i *)(a2 + 1096) = v469;
    *(__m128i *)(a2 + 1080) = v468;
    v84 = v464;
    v85 = v465;
    v86 = v466;
    *(_OWORD *)(a2 + 1064) = v467;
    *(_OWORD *)(a2 + 1048) = v86;
    *(_OWORD *)(a2 + 1032) = v85;
    *(_OWORD *)(a2 + 1016) = v84;
    *(_QWORD *)(a2 + 1144) = v34;
    *(_QWORD *)(a2 + 1152) = v35;
    v36 = v563;
    *(_QWORD *)(a2 + 1160) = v563;
    v37 = v565;
    *(_QWORD *)(a2 + 1168) = v565;
    *(_QWORD *)(a2 + 1232) = v15;
    *(_QWORD *)(a2 + 1240) = v17;
    *(_QWORD *)(a2 + 1248) = v18;
    v556 = a2 + 1261;
    *(_BYTE *)(a2 + 1261) = 0;
LABEL_74:
    v87 = v15;
    v88 = v18;
    v550 = v13;
    *(_DWORD *)(a2 + 1256) = 0;
    *(_QWORD *)(a2 + 1176) = v87;
    *(_QWORD *)(a2 + 1184) = v17;
    *(_QWORD *)(a2 + 1112) = v34;
    *(_QWORD *)(a2 + 1120) = v35;
    *(_BYTE *)(a2 + 1260) = 1;
    v89 = _mm_loadu_si128((const __m128i *)(a2 + 1080));
    v38[1] = *(__m128i *)(a2 + 1096);
    *v38 = v89;
    *(_QWORD *)(a2 + 1128) = v36;
    *(_QWORD *)(a2 + 1136) = v37;
    v572 = (__m128i *)v14;
    v502 = v14;
    v501 = v38;
    v90 = sub_1416419F0(aModel_6, 5, v38);
    v566 = v38;
    v91 = v38;
    v92 = 1;
    v93 = 0;
    v94 = v574;
    if ( v90 )
    {
      v95 = 0;
      v96 = *(_QWORD *)(v90 + 24);
      v97 = *(_QWORD *)(v90 + 16);
      if ( *(_BYTE *)v90 != 3 )
        v97 = 1;
      v98 = 0;
      if ( *(_BYTE *)v90 == 3 )
        v98 = *(_QWORD *)(v90 + 24);
      if ( v98 < 0 )
        goto LABEL_80;
      v93 = 0;
      if ( v98 )
      {
        nullsub_1(0);
        v160 = (__m128i *)sub_140001650(v98, 1);
        if ( !v160 )
        {
          v487 = v96;
          v95 = 1;
LABEL_80:
          v502 = (__int64)v572;
          v501 = v91;
          sub_141938D2B(v95, v487);
        }
        v92 = (__int64)v160;
        sub_1418F44E0(v160, (const __m128i *)v97, v98);
        v93 = v96;
      }
    }
    *(_QWORD *)(v94 + 1192) = v93;
    *(_QWORD *)(v94 + 1200) = v92;
    *(_QWORD *)(v94 + 1208) = v93;
    *(_WORD *)(v94 + 1259) = 1;
    v161 = (const __m128i *)(v94 + 1048);
    v162 = v91[1];
    *(__m128i *)(v94 + 1048) = _mm_loadu_si128(v91);
    *(__m128i *)(v94 + 1064) = v162;
    v163 = *(_QWORD *)(v94 + 1184);
    v164 = (__int64)v572;
    v504 = (__int64)v572;
    v503 = v91;
    v165 = sub_140DB7000(v163, v94 + 1048);
    v166 = v574;
    v167 = v574 + 1216;
    *(_QWORD *)(v574 + 1216) = v165;
    if ( v165 && *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      *(_QWORD *)v533 = v167;
      *(_QWORD *)&v533[8] = sub_1416BCB10;
      *(_QWORD *)&v542[48] = 3;
      *(_QWORD *)&v542[56] = aCodexmateLibCo_8;
      *(_QWORD *)&v542[64] = 40;
      *(_QWORD *)&v542[80] = &unk_141A48670;
      *(_QWORD *)&v542[88] = v533;
      *(_QWORD *)v542 = 0;
      *(_QWORD *)&v542[8] = aCodexmateLibCo_8;
      *(_OWORD *)&v542[16] = 0x28u;
      *(_QWORD *)&v542[32] = aSrcCoreRelayPr_0;
      *(_QWORD *)&v542[40] = 30;
      *(_QWORD *)&v542[72] = 0xAAD00000001LL;
      v504 = v164;
      v503 = v91;
      sub_1414D53A0(&v570, v542);
      v166 = v574;
    }
    v168 = *(_QWORD *)(v166 + 1184);
    v506 = v164;
    v505 = v91;
    sub_140DB1B70(v418, v168, v88, v161);
    v487 = v92;
    v169 = v574;
    *(_BYTE *)(v574 + 1258) = 1;
    v170 = *(_QWORD *)(v169 + 1176);
    if ( *(_BYTE *)(*(_QWORD *)(v169 + 1184) + 253LL) == 1 )
    {
      v171 = *(_QWORD *)(v170 + 32);
      v172 = *(_DWORD *)(v171 + 16);
      if ( v172 > 0x3FFFFFFD
        || (v175 = *(_DWORD *)(v171 + 16),
            v174 = _InterlockedCompareExchange((volatile signed __int32 *)(v171 + 16), v172 + 1, v172),
            v173 = __OFSUB__(v175, v174),
            v175 != v174) )
      {
        v552 = (__int64)v572;
        v551 = (__int64)v91;
        sub_141937550((volatile void *)(v171 + 16));
      }
      v176 = _InterlockedIncrement64(*(volatile signed __int64 **)(v171 + 32));
      if ( (v176 < 0) ^ v173 | (v176 == 0) )
        goto LABEL_340;
      v177 = *(_QWORD *)(v171 + 32);
      if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v171 + 16)) & 0xBFFFFFFF), 1) )
      {
LABEL_141:
        v552 = (__int64)v572;
        v551 = (__int64)v91;
        v409 = v171 + 16;
        v410 = v177;
        sub_141937840(v409);
        v177 = v410;
      }
    }
    else
    {
      v171 = *(_QWORD *)(v170 + 24);
      v178 = *(_DWORD *)(v171 + 16);
      if ( v178 > 0x3FFFFFFD
        || (v181 = *(_DWORD *)(v171 + 16),
            v180 = _InterlockedCompareExchange((volatile signed __int32 *)(v171 + 16), v178 + 1, v178),
            v179 = __OFSUB__(v181, v180),
            v181 != v180) )
      {
        v552 = (__int64)v572;
        v551 = (__int64)v91;
        sub_141937550((volatile void *)(v171 + 16));
      }
      v182 = _InterlockedIncrement64(*(volatile signed __int64 **)(v171 + 32));
      if ( (v182 < 0) ^ v179 | (v182 == 0) )
LABEL_340:
        BUG();
      v177 = *(_QWORD *)(v171 + 32);
      if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v171 + 16)) & 0xBFFFFFFF), 1) )
        goto LABEL_141;
    }
    v183 = v574;
    *(_QWORD *)(v574 + 1224) = v177;
    v184 = *(_QWORD *)(v183 + 1112);
    v185 = *(_QWORD *)(v183 + 1120);
    v186 = (__int64)v572;
    v538 = (__int64)v572;
    v537 = v91;
    sub_140CAF8C0((unsigned int)v542, v177, (unsigned int)&unk_141A433A0, v184, v185);
    *(_BYTE *)(v574 + 1258) = 0;
    v524 = v418[5];
    v523 = v418[4];
    v187 = _mm_loadu_si128(v418);
    v522 = v418[3];
    v521 = v418[2];
    v520 = v418[1];
    v519 = v187;
    v538 = v186;
    v537 = v91;
    sub_141259870(v533, v542, &v519);
    v538 = v186;
    v537 = v91;
    sub_140CB5130(&v419, v533, v94 + 1048);
    v188 = v574;
    *(_BYTE *)(v574 + 1257) = 1;
    *(_BYTE *)(v188 + 1259) = 0;
    v189 = _mm_loadu_si128(v161);
    *(_OWORD *)&v542[16] = *(_OWORD *)(v94 + 1064);
    *(__m128i *)v542 = v189;
    v485 = v186;
    v484 = v91;
    sub_140409B40(v542);
    *(_BYTE *)(v574 + 1257) = 0;
    sub_1418F44E0((__m128i *)v542, &v419, 0x110u);
    v549 = v186;
    v548 = v91;
    v190 = sub_1412597A0(v542);
    v191 = v574;
    *(_QWORD *)(v574 + 1264) = v190;
    *(_QWORD *)(v191 + 1272) = v192;
    a2 = v191;
LABEL_143:
    v193 = (__int16 *)(a2 + 1264);
    sub_14126C5E0(v542, a2 + 1264, v560);
    v194 = *(_QWORD *)v542;
    if ( *(_QWORD *)v542 == -2 )
    {
      v392 = 3;
    }
    else
    {
      v195 = *(_QWORD *)&v542[8];
      v430 = *(_OWORD *)&v542[16];
      v431 = *(_OWORD *)&v542[32];
      v432 = *(_OWORD *)&v542[48];
      v433 = *(_OWORD *)&v542[64];
      v434 = *(_OWORD *)&v542[80];
      v435 = *(_OWORD *)&v542[96];
      v436 = _mm_loadu_si128((const __m128i *)&v542[112]);
      v437 = v543;
      v196 = *(_QWORD *)(v574 + 1264);
      v197 = *(_QWORD *)(v574 + 1272);
      v549 = (__int64)v572;
      v548 = v566;
      sub_140D1A820(v196, v197);
      if ( (_DWORD)v194 == -1 )
      {
        v564 = v195;
        v206 = *(_QWORD *)(v574 + 1176);
        v207 = *(unsigned __int8 *)(*(_QWORD *)(v574 + 1184) + 253LL);
        v568 = 1;
        sub_140DA5020(v206, v207);
        v568 = 0;
        v519.m128i_i64[0] = sub_14122E700(v564);
        *(_QWORD *)v533 = &v519;
        *(_QWORD *)&v533[8] = sub_14122E940;
        sub_1416ABFD0(v542, &unk_141A48038, v533);
        v568 = 0;
        sub_140D19140(v519.m128i_i64[0]);
        v519 = _mm_loadu_si128((const __m128i *)v542);
        v208 = *(_DWORD *)&v542[16];
        v520.m128i_i64[0] = *(_QWORD *)&v542[16];
        v209 = v519.m128i_i64[1];
        sub_140DABD30(
          *(_QWORD *)(v574 + 1176),
          *(_QWORD *)(v574 + 1128),
          *(_QWORD *)(v574 + 1136),
          *(_QWORD *)(v574 + 1200),
          *(_QWORD *)(v574 + 1208),
          *(_QWORD *)(v574 + 1184),
          *(_QWORD *)(v574 + 1112));
        sub_1416AC440(v533, &v519);
        LOWORD(v210) = 502;
        sub_140DAFCE0((unsigned int)v542, v210, v209, v208, (__int64)aProxyUpstream, 14);
        v77 = *(_QWORD *)v542;
        v511 = *(__m128i *)&v542[8];
        v512 = *(__m128i *)&v542[24];
        v513 = *(_OWORD *)&v542[40];
        v514 = *(_OWORD *)&v542[56];
        v515 = *(_OWORD *)&v542[72];
        v516 = *(_OWORD *)&v542[88];
        v517 = _mm_loadu_si128((const __m128i *)&v542[104]);
        v518 = *(_QWORD *)&v542[120];
        v529 = *(__m128i **)&v533[8];
        v73 = *(__int64 (__fastcall ***)())v533;
        v530 = *(_QWORD *)&v533[16];
        if ( v519.m128i_i64[0] )
          sub_140001660(v209, v519.m128i_i64[0], 1);
        v211 = (__int64)v566;
LABEL_197:
        v281 = v574;
        *(_WORD *)(v574 + 1256) = 0;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v281 + 1224)) )
        {
          v552 = (__int64)v572;
          v551 = v211;
          sub_141242F50(v574 + 1224);
        }
        v282 = v574;
        *(_BYTE *)(v574 + 1258) = 0;
        *(_BYTE *)(v282 + 1259) = 0;
        v283 = *(_QWORD *)(v282 + 1192);
        if ( v283 )
          sub_140001660(*(_QWORD *)(v282 + 1200), v283, 1);
        *(_BYTE *)(v282 + 1260) = 0;
        v463 = v518;
        v462 = v517;
        v461 = v516;
        v460 = v515;
        v284 = _mm_load_si128(&v511);
        v459 = v514;
        v458 = v513;
        v457 = v512;
        v456 = v284;
        *(_BYTE *)(v282 + 1261) = 1;
        v75 = v572;
        if ( v77 == -1 )
          goto LABEL_298;
        goto LABEL_202;
      }
      v198 = v574;
      *(_BYTE *)(v574 + 1256) = 1;
      *(_QWORD *)(v198 + 1272) = v194;
      *(_QWORD *)(v198 + 1280) = v195;
      v199 = v431;
      v200 = v432;
      v201 = v433;
      *(_OWORD *)(v198 + 1288) = v430;
      *(_OWORD *)(v198 + 1304) = v199;
      *(_OWORD *)(v198 + 1320) = v200;
      *(_OWORD *)(v198 + 1336) = v201;
      *(_OWORD *)(v198 + 1352) = v434;
      *(_OWORD *)(v198 + 1368) = v435;
      *(__m128i *)(v198 + 1384) = _mm_load_si128(&v436);
      *(_QWORD *)(v198 + 1400) = v437;
      *(_WORD *)(v198 + 1264) = *(_WORD *)(v198 + 1376);
      v202 = *(_QWORD *)(v198 + 1352);
      v203 = 4 * v202;
      v204 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v204) = v202 >> 62 != 0 || 4 * v202 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v204 )
      {
        v205 = 0;
LABEL_147:
        v536 = (__int64)v572;
        v535 = (__int64)v566;
        sub_141938D2B(v205, v203);
      }
      v212 = (const __m128i *)(v198 + 1272);
      v213 = (__m128i *)(v198 + 1904);
      v214 = *(_WORD *)(v198 + 1360);
      v564 = 2;
      v531 = 4 * v202;
      if ( v203 )
      {
        v215 = v193;
        v216 = (const __m128i *)(v198 + 1272);
        v217 = (__m128i *)(v198 + 1904);
        v563 = *(const __m128i **)(v198 + 1344);
        nullsub_1(v204);
        v205 = 2;
        v218 = v202;
        v219 = 4 * v202;
        v220 = (__m128i *)sub_140001650(v219, 2);
        v203 = v219;
        if ( !v220 )
          goto LABEL_147;
        v202 = v218;
        v564 = (__int64)v220;
        if ( v218 )
          sub_1418F44E0(v220, v563, v203);
        v198 = v574;
        v213 = v217;
        v212 = v216;
        v193 = v215;
      }
      v565 = v202;
      v221 = v198;
      sub_1403F0BA0(v533, v198 + 1296);
      sub_1403F09D0(v542, v221 + 1320);
      *(_WORD *)(v221 + 1992) = v214;
      *(_QWORD *)(v221 + 1976) = v564;
      *(_QWORD *)(v221 + 1984) = v565;
      *(_QWORD *)(v221 + 1944) = *(_QWORD *)&v533[16];
      *(_OWORD *)(v221 + 1928) = *(_OWORD *)v533;
      *(_QWORD *)(v221 + 1968) = *(_QWORD *)&v542[16];
      *(_OWORD *)(v221 + 1952) = *(_OWORD *)v542;
      *v213 = _mm_loadu_si128(v212);
      v213[1].m128i_i64[0] = v212[1].m128i_i64[0];
      if ( (unsigned __int16)(*(_DWORD *)(v221 + 1264) - 200) < 0x64u )
      {
        v222 = *(_QWORD *)(v221 + 1176);
        v223 = *(_QWORD *)(v221 + 1128);
        v224 = *(_QWORD *)(v221 + 1136);
        v225 = *(_QWORD *)(v221 + 1200);
        v226 = *(_QWORD *)(v221 + 1208);
        v227 = *(_QWORD *)(v221 + 1184);
        v228 = *(_QWORD *)(v221 + 1112);
        v555 = (__int64)v572;
        v554 = v566;
        sub_140DABD30(v222, v223, v224, v225, v226, v227, v228);
        v555 = (__int64)v572;
        v554 = v566;
        sub_14164BEA0(v542);
        v229 = *v193;
        v519 = *(__m128i *)&v542[8];
        v520 = *(__m128i *)&v542[24];
        v521 = *(__m128i *)&v542[40];
        v522 = *(__m128i *)&v542[56];
        v523 = *(__m128i *)&v542[72];
        v524 = *(__m128i *)&v542[88];
        v230 = *(_WORD *)&v542[104];
        LODWORD(v539) = *(_DWORD *)&v542[106];
        WORD2(v539) = *(_WORD *)&v542[110];
        if ( *(_QWORD *)v542 != -1 )
        {
          v230 = 200;
          if ( (unsigned __int16)(v229 - 1000) >= 0xFC7Cu )
            v230 = v229;
          v524 = *(__m128i *)&v542[88];
          v523 = *(__m128i *)&v542[72];
          v522 = *(__m128i *)&v542[56];
          v521 = *(__m128i *)&v542[40];
          v520 = *(__m128i *)&v542[24];
          v519 = *(__m128i *)&v542[8];
          LODWORD(v539) = *(_DWORD *)&v542[106];
          WORD2(v539) = *(_WORD *)&v542[110];
        }
        *(_QWORD *)v533 = *(_QWORD *)v542;
        *(__m128i *)&v533[8] = v519;
        *(__m128i *)&v533[24] = v520;
        *(__m128i *)&v533[40] = v521;
        *(__m128i *)&v533[56] = v522;
        *(__m128i *)&v533[72] = v523;
        *(__m128i *)&v533[88] = _mm_load_si128(&v524);
        *(_WORD *)&v533[104] = v230;
        *(_DWORD *)&v533[106] = (_DWORD)v539;
        *(_WORD *)&v533[110] = WORD2(v539);
        v573 = 0;
        sub_140DB9B80(v542, v213, v533);
        *(_OWORD *)&v533[96] = *(_OWORD *)&v542[96];
        *(_OWORD *)&v533[80] = *(_OWORD *)&v542[80];
        *(_OWORD *)&v533[64] = *(_OWORD *)&v542[64];
        v231 = _mm_loadu_si128((const __m128i *)v542);
        *(_OWORD *)&v533[48] = *(_OWORD *)&v542[48];
        *(_OWORD *)&v533[32] = *(_OWORD *)&v542[32];
        *(_OWORD *)&v533[16] = *(_OWORD *)&v542[16];
        *(__m128i *)v533 = v231;
        v519.m128i_i64[0] = (__int64)aXAimamiRoute;
        v519.m128i_i64[1] = 14;
        v520.m128i_i64[0] = (__int64)aRelayResponses;
        v520.m128i_i64[1] = 22;
        v573 = 0;
        sub_140CAEC50(v542, v533, &v519);
        *(_OWORD *)v533 = *(_OWORD *)v542;
        *(_OWORD *)&v533[16] = *(_OWORD *)&v542[16];
        *(_OWORD *)&v533[32] = *(_OWORD *)&v542[32];
        *(_OWORD *)&v533[48] = *(_OWORD *)&v542[48];
        *(_OWORD *)&v533[64] = *(_OWORD *)&v542[64];
        *(_OWORD *)&v533[80] = *(_OWORD *)&v542[80];
        *(__m128i *)&v533[96] = _mm_loadu_si128((const __m128i *)&v542[96]);
        *(_BYTE *)(v574 + 1256) = 0;
        sub_1418F44E0((__m128i *)v542, v212, 0x88u);
        v573 = 1;
        v565 = sub_1410D5D80(v542);
        v564 = v233;
        v234 = v574;
        v235 = **(volatile signed __int64 ***)(v574 + 1176);
        v236 = _InterlockedIncrement64(v235);
        if ( (v236 < 0) ^ v232 | (v236 == 0) )
          goto LABEL_340;
        v486 = v235;
        v237 = *(volatile signed __int64 **)(*(_QWORD *)(v234 + 1176) + 8LL);
        v238 = _InterlockedIncrement64(v237);
        if ( (v238 < 0) ^ v232 | (v238 == 0) )
          goto LABEL_340;
        v491[0] = v237;
        v239 = *(_QWORD *)(v234 + 1184);
        v569 = 1;
        sub_1416AC440(v542, v239);
        v240 = (_QWORD *)v491[0];
        v539 = (__int64 (__fastcall **)())v235;
        v519.m128i_i64[0] = v491[0];
        nullsub_1(v241);
        v242 = sub_140001650(24, 8);
        if ( !v242 )
        {
          v560 = v240;
          sub_141938D11(8, 24);
        }
        *(_QWORD *)v242 = 1;
        *(_QWORD *)(v242 + 8) = 1;
        *(_BYTE *)(v242 + 16) = 0;
        v243 = (__int64)v572;
        v211 = (__int64)v566;
        if ( *(_QWORD *)v542 == -1 )
        {
          v573 = 1;
          sub_141939020(&off_141A45860);
        }
        v244 = _mm_loadu_si128((const __m128i *)&v542[8]);
        *(_QWORD *)&v542[24] = aCodexNativeRes;
        *(_QWORD *)&v542[32] = 36;
        *(_QWORD *)&v542[40] = v242;
        *(_QWORD *)&v542[48] = v240;
        *(_QWORD *)&v542[56] = v235;
        v542[64] = 0;
        *(_QWORD *)&v542[72] = v565;
        *(_QWORD *)&v542[80] = v564;
        *(__m128i *)&v542[8] = v244;
        nullsub_1(*(_QWORD *)v542);
        v245 = sub_140001650(88, 8);
        if ( !v245 )
          sub_141938D11(8, 88);
        *(_QWORD *)(v245 + 80) = *(_QWORD *)&v542[80];
        *(_OWORD *)(v245 + 64) = *(_OWORD *)&v542[64];
        v246 = _mm_loadu_si128((const __m128i *)v542);
        v247 = *(_OWORD *)&v542[16];
        v248 = *(_OWORD *)&v542[32];
        *(_OWORD *)(v245 + 48) = *(_OWORD *)&v542[48];
        *(_OWORD *)(v245 + 32) = v248;
        *(_OWORD *)(v245 + 16) = v247;
        *(__m128i *)v245 = v246;
        v249 = *(_QWORD *)v533;
        if ( *(_QWORD *)v533 == -1 )
        {
          v565 = *(_QWORD *)(v245 + 72);
          v564 = v245;
          v563 = *(const __m128i **)(v245 + 80);
          if ( v563->m128i_i64[0] )
            ((void (__fastcall *)(__int64))v563->m128i_i64[0])(v565);
          v378 = v563->m128i_i64[1];
          if ( v378 )
            sub_140001660(v565, v378, v563[1].m128i_i64[0]);
          sub_140CF4470(v564, v378, v249);
          sub_140001660(v564, 88, 8);
          v573 = 0;
          LOWORD(v379) = 500;
          sub_140DAFCE0((unsigned int)v542, v379, (unsigned int)aBuildStreaming, 27, (__int64)aProxyUpstream, 14);
          v73 = *(__int64 (__fastcall ***)())&v542[120];
          v243 = (__int64)v572;
          v211 = (__int64)v566;
        }
        else
        {
          *(_OWORD *)&v542[10] = *(_OWORD *)&v533[10];
          *(_OWORD *)&v542[26] = *(_OWORD *)&v533[26];
          *(_OWORD *)&v542[42] = *(_OWORD *)&v533[42];
          *(_OWORD *)&v542[58] = *(_OWORD *)&v533[58];
          *(_OWORD *)&v542[74] = *(_OWORD *)&v533[74];
          *(__m128i *)&v542[90] = _mm_loadu_si128((const __m128i *)&v533[90]);
          *(_QWORD *)&v542[104] = *(_QWORD *)&v533[104];
          *(_QWORD *)v542 = *(_QWORD *)v533;
          *(_WORD *)&v542[8] = *(_WORD *)&v533[8];
          *(_QWORD *)&v542[112] = v245;
          v73 = &off_141A458A8;
        }
        v518 = *(_QWORD *)&v542[112];
        v517 = *(__m128i *)&v542[96];
        v516 = *(_OWORD *)&v542[80];
        v515 = *(_OWORD *)&v542[64];
        v380 = _mm_loadu_si128((const __m128i *)&v542[16]);
        v514 = *(_OWORD *)&v542[48];
        v513 = *(_OWORD *)&v542[32];
        v512 = v380;
        v511 = *(__m128i *)v542;
        v536 = v243;
        v535 = v211;
        sub_14029C800(v213);
        v381 = v574;
        *(_WORD *)(v574 + 1256) = 0;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v381 + 1224)) )
        {
          v552 = (__int64)v572;
          v551 = v211;
          sub_141242F50(v574 + 1224);
        }
        v382 = v574;
        *(_BYTE *)(v574 + 1258) = 0;
        *(_BYTE *)(v382 + 1259) = 0;
        v383 = *(_QWORD *)(v382 + 1192);
        if ( v383 )
          sub_140001660(*(_QWORD *)(v382 + 1200), v383, 1);
        *(_BYTE *)(v382 + 1260) = 0;
        v463 = v518;
        v462 = v517;
        v461 = v516;
        v460 = v515;
        v384 = _mm_load_si128(&v511);
        v459 = v514;
        v458 = v513;
        v457 = v512;
        v456 = v384;
        *(_BYTE *)(v382 + 1261) = 1;
        v77 = 3;
        v75 = v572;
LABEL_202:
        v499 = v463;
        v498 = v462;
        v497 = v461;
        v496 = v460;
        v285 = _mm_load_si128(&v456);
        v495 = v459;
        v494 = v458;
        v493 = v457;
        v492 = v285;
        v559 = (__int64)v75;
        sub_140D14C40(v211);
        v566 = v529;
        v564 = v530;
        goto LABEL_231;
      }
      *(_BYTE *)(v221 + 1256) = 0;
      sub_1418F44E0((__m128i *)(v221 + 1408), v212, 0x88u);
      a2 = v221;
      *(_WORD *)(v221 + 1896) = 1;
      v13 = v550;
LABEL_169:
      v564 = a2 + 1408;
      sub_140D40480((__int64)v542, a2 + 1408, v560);
      v550 = v13;
      v77 = *(_QWORD *)v542;
      if ( *(_QWORD *)v542 != -2 )
      {
        v455 = *(__m128i *)&v542[24];
        v454 = *(__m128i *)&v542[8];
        v446 = *(_OWORD *)&v542[40];
        v447 = *(_OWORD *)&v542[56];
        v448 = *(_OWORD *)&v542[72];
        v449 = *(_OWORD *)&v542[88];
        v450 = _mm_loadu_si128((const __m128i *)&v542[104]);
        v451 = *(_QWORD *)&v542[120];
        v73 = v543;
        v250 = v544;
        v251 = v545;
        if ( *(_BYTE *)(v574 + 1897) == 3 )
        {
          v555 = (__int64)v572;
          v554 = v566;
          sub_140D11B60(v574 + 1544);
        }
        else if ( !*(_BYTE *)(v574 + 1897) )
        {
          sub_140402120(v564);
          v252 = *(_QWORD **)(v574 + 1536);
          if ( *v252 )
            sub_140001660(v252[1], *v252, 1);
          sub_140001660(v252, 88, 8);
        }
        if ( (_DWORD)v77 != -1 )
        {
          v512 = v455;
          v511 = v454;
          v513 = v446;
          v514 = v447;
          v515 = v448;
          v516 = v449;
          v517 = _mm_load_si128(&v450);
          v518 = v451;
          v253 = (__int64)v572;
LABEL_196:
          v536 = v253;
          v280 = (__int64)v566;
          v535 = (__int64)v566;
          sub_14029C800(v574 + 1904);
          v529 = v250;
          v530 = v251;
          v211 = v280;
          goto LABEL_197;
        }
        v254 = _mm_load_si128(&v454);
        v520 = v455;
        v519 = v254;
        v255 = (_QWORD *)v574;
        v256 = *(unsigned __int16 *)(v574 + 1264);
        v561 = 1;
        v564 = v254.m128i_i64[1];
        v565 = v455.m128i_i64[0];
        sub_140DAEE70(v491, v256);
        v257 = (unsigned __int16 *)(v255 + 158);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v258 = v255[148];
          *(_QWORD *)v533 = v255 + 141;
          *(_QWORD *)&v533[8] = sub_140186EE0;
          *(_QWORD *)&v533[16] = v258;
          *(_QWORD *)&v533[24] = sub_1400015F0;
          *(_QWORD *)&v533[32] = v491;
          *(_QWORD *)&v533[40] = sub_1400015F0;
          *(_QWORD *)&v542[48] = 2;
          *(_QWORD *)&v542[56] = aCodexmateLibCo_8;
          *(_QWORD *)&v542[64] = 40;
          *(_QWORD *)&v542[80] = &unk_141A48718;
          *(_QWORD *)&v542[88] = v533;
          *(_QWORD *)v542 = 0;
          *(_QWORD *)&v542[8] = aCodexmateLibCo_8;
          *(_OWORD *)&v542[16] = 0x28u;
          *(_QWORD *)&v542[32] = aSrcCoreRelayPr_0;
          *(_QWORD *)&v542[40] = 30;
          *(_QWORD *)&v542[72] = 0xAD700000001LL;
          v571 = 1;
          sub_1414D53A0(&v570, v542);
          v255 = (_QWORD *)v574;
        }
        v259 = v255[147];
        v260 = v255[141];
        v261 = v255[142];
        v262 = v255[150];
        v263 = v255[151];
        v264 = v255[148];
        v265 = v255[139];
        v571 = 1;
        sub_140DABD30(v259, v260, v261, v262, v263, v264, v265);
        v266 = 502;
        if ( (unsigned __int16)(*(_DWORD *)v257 - 1000) >= 0xFC7Cu )
          v266 = *(_DWORD *)v257;
        v571 = 1;
        sub_14164BEA0(v542);
        *(_OWORD *)v533 = *(_OWORD *)&v542[8];
        *(_OWORD *)&v533[16] = *(_OWORD *)&v542[24];
        *(_OWORD *)&v533[32] = *(_OWORD *)&v542[40];
        *(_OWORD *)&v533[48] = *(_OWORD *)&v542[56];
        *(_OWORD *)&v533[64] = *(_OWORD *)&v542[72];
        *(_OWORD *)&v533[80] = *(_OWORD *)&v542[88];
        v267 = *(_WORD *)&v542[104];
        LODWORD(v539) = *(_DWORD *)&v542[106];
        WORD2(v539) = *(_WORD *)&v542[110];
        if ( *(_QWORD *)v542 != -1 )
        {
          *(_OWORD *)&v533[80] = *(_OWORD *)&v542[88];
          *(_OWORD *)&v533[64] = *(_OWORD *)&v542[72];
          *(_OWORD *)&v533[48] = *(_OWORD *)&v542[56];
          *(_OWORD *)&v533[32] = *(_OWORD *)&v542[40];
          *(_OWORD *)&v533[16] = *(_OWORD *)&v542[24];
          *(_OWORD *)v533 = *(_OWORD *)&v542[8];
          LODWORD(v539) = *(_DWORD *)&v542[106];
          WORD2(v539) = *(_WORD *)&v542[110];
          v267 = v266;
        }
        *(_QWORD *)v482 = *(_QWORD *)v542;
        *(_OWORD *)&v482[8] = *(_OWORD *)v533;
        *(_OWORD *)&v482[24] = *(_OWORD *)&v533[16];
        *(_OWORD *)&v482[40] = *(_OWORD *)&v533[32];
        *(_OWORD *)&v482[56] = *(_OWORD *)&v533[48];
        *(_OWORD *)&v482[72] = *(_OWORD *)&v533[64];
        *(__m128i *)&v482[88] = _mm_load_si128((const __m128i *)&v533[80]);
        *(_WORD *)&v482[104] = v267;
        *(_DWORD *)&v482[106] = (_DWORD)v539;
        *(_WORD *)&v482[110] = WORD2(v539);
        v571 = 1;
        sub_140DB9B80(v542, v574 + 1904, v482);
        *(_OWORD *)&v482[96] = *(_OWORD *)&v542[96];
        *(_OWORD *)&v482[80] = *(_OWORD *)&v542[80];
        *(_OWORD *)&v482[64] = *(_OWORD *)&v542[64];
        v268 = _mm_loadu_si128((const __m128i *)v542);
        *(_OWORD *)&v482[48] = *(_OWORD *)&v542[48];
        *(_OWORD *)&v482[32] = *(_OWORD *)&v542[32];
        *(_OWORD *)&v482[16] = *(_OWORD *)&v542[16];
        *(__m128i *)v482 = v268;
        *(_QWORD *)v533 = aXAimamiRoute;
        *(_QWORD *)&v533[8] = 14;
        *(_QWORD *)&v533[16] = aRelayResponses;
        *(_QWORD *)&v533[24] = 22;
        v571 = 1;
        sub_140CAEC50(v542, v482, v533);
        *(_OWORD *)v482 = *(_OWORD *)v542;
        *(_OWORD *)&v482[16] = *(_OWORD *)&v542[16];
        *(_OWORD *)&v482[32] = *(_OWORD *)&v542[32];
        *(_OWORD *)&v482[48] = *(_OWORD *)&v542[48];
        *(_OWORD *)&v482[64] = *(_OWORD *)&v542[64];
        *(_OWORD *)&v482[80] = *(_OWORD *)&v542[80];
        *(_OWORD *)&v482[96] = *(_OWORD *)&v542[96];
        v269 = *(_QWORD *)v542;
        v270 = *(_WORD *)&v542[8];
        v271 = _mm_load_si128(&v519);
        *(__m128i *)&v542[16] = v520;
        *(__m128i *)v542 = v271;
        v562 = 1;
        *(_QWORD *)&v272 = sub_1411C0630(v542);
        if ( v269 == -1 )
        {
          v556 = *((_QWORD *)&v272 + 1);
          v563 = (const __m128i *)v272;
          if ( **((_QWORD **)&v272 + 1) )
            (**((void (__fastcall ***)(const __m128i *))&v272 + 1))(v563);
          v274 = *(_QWORD *)(v556 + 8);
          if ( v274 )
            sub_140001660(v563, v274, *(_QWORD *)(v556 + 16));
          v571 = 0;
          sub_140DAFCE0((unsigned int)v542, v266, (unsigned int)aBuildErrorPass, 35, (__int64)aProxyUpstream, 14);
        }
        else
        {
          *(_QWORD *)&v542[104] = *(_QWORD *)&v482[104];
          *(_OWORD *)&v542[90] = *(_OWORD *)&v482[90];
          *(_OWORD *)&v542[74] = *(_OWORD *)&v482[74];
          v273 = _mm_loadu_si128((const __m128i *)&v482[10]);
          *(_OWORD *)&v542[58] = *(_OWORD *)&v482[58];
          *(_OWORD *)&v542[42] = *(_OWORD *)&v482[42];
          *(_OWORD *)&v542[26] = *(_OWORD *)&v482[26];
          *(__m128i *)&v542[10] = v273;
          *(_QWORD *)v542 = v269;
          *(_WORD *)&v542[8] = v270;
          *(_OWORD *)&v542[112] = v272;
        }
        v275 = *(_QWORD *)(v574 + 1184);
        *(_QWORD *)v533 = v257;
        *(_QWORD *)&v533[8] = sub_14164CC40;
        *(_QWORD *)&v533[16] = v275 + 24;
        *(_QWORD *)&v533[24] = sub_1400015F0;
        sub_1416ABFD0(&v539, &unk_141A48131, v533);
        v73 = v539;
        v250 = v540;
        v251 = v541;
        v276 = *v257;
        if ( (unsigned __int16)(v276 - 500) < 0x64u
          || (v277 = v276 - 401, v277 <= 0x1C) && (v278 = 268435917, _bittest(&v278, v277)) )
        {
          v77 = *(_QWORD *)v542;
          v511 = *(__m128i *)&v542[8];
          v512 = *(__m128i *)&v542[24];
          v513 = *(_OWORD *)&v542[40];
          v514 = *(_OWORD *)&v542[56];
          v515 = *(_OWORD *)&v542[72];
          v516 = *(_OWORD *)&v542[88];
          v517 = _mm_loadu_si128((const __m128i *)&v542[104]);
          v518 = *(_QWORD *)&v542[120];
          v253 = (__int64)v572;
          v279 = v491[0];
          if ( !v491[0] )
            goto LABEL_196;
        }
        else
        {
          v518 = *(_QWORD *)&v542[112];
          v517 = *(__m128i *)&v542[96];
          v516 = *(_OWORD *)&v542[80];
          v515 = *(_OWORD *)&v542[64];
          v395 = _mm_loadu_si128((const __m128i *)v542);
          v514 = *(_OWORD *)&v542[48];
          v513 = *(_OWORD *)&v542[32];
          v512 = *(__m128i *)&v542[16];
          v511 = v395;
          v396 = *(__int64 (__fastcall ***)())&v542[120];
          v77 = 5;
          v253 = (__int64)v572;
          if ( v539 )
            sub_140001660(v540, v539, 1);
          v73 = v396;
          v250 = v529;
          v251 = v530;
          v279 = v491[0];
          if ( !v491[0] )
            goto LABEL_196;
        }
        sub_140001660(v491[1], v279, 1);
        goto LABEL_196;
      }
      v392 = 4;
    }
    v282 = v574;
    *(_BYTE *)v556 = v392;
LABEL_298:
    v393 = 3;
    v13 = v550;
    goto LABEL_302;
  }
  v558 = v81;
  v124 = *(_BYTE *)(v17 + 255);
  if ( !v124 )
  {
    v125 = *(_QWORD *)(v17 + 104);
    v126 = *(_QWORD *)(v17 + 112);
    v559 = v14;
    v124 = sub_14102BFF0(v125, v126);
  }
  v127 = *(_QWORD *)(v17 + 104);
  v128 = *(_QWORD *)(v17 + 112);
  v559 = v14;
  sub_1402E40B0((unsigned int)&v427, (_DWORD)v63, v127, v128, v124);
  if ( (_BYTE)v427 == 0xFF )
  {
    *(_QWORD *)v533 = 0;
    *(_QWORD *)&v533[8] = 1;
    *(_QWORD *)&v533[16] = 0;
    *(_QWORD *)&v542[16] = 1610612768;
    *(_QWORD *)v542 = v533;
    *(_QWORD *)&v542[8] = &off_141A4F8C0;
    if ( (unsigned __int8)sub_1416B24B0(v542, *((_QWORD *)&v427 + 1), v428) )
      sub_141939040(
        (unsigned int)aADisplayImplem_8,
        55,
        (unsigned int)&v570,
        (unsigned int)&unk_141A49B48,
        (__int64)&off_141A4F978);
    v565 = *(_QWORD *)v533;
    LOWORD(v376) = 400;
    v563 = *(const __m128i **)&v533[8];
    sub_140DAFCE0((unsigned int)v542, v376, *(_DWORD *)&v533[8], *(_DWORD *)&v533[16], (__int64)aProxyChatTrans, 22);
    v532 = v63;
    v499 = *(_QWORD *)&v542[112];
    v498 = *(__m128i *)&v542[96];
    v497 = *(_OWORD *)&v542[80];
    v496 = *(_OWORD *)&v542[64];
    v377 = _mm_loadu_si128((const __m128i *)v542);
    v495 = *(_OWORD *)&v542[48];
    v494 = *(_OWORD *)&v542[32];
    v493 = *(__m128i *)&v542[16];
    v492 = v377;
    v73 = *(__int64 (__fastcall ***)())&v542[120];
    if ( v565 )
      sub_140001660(v563, v565, 1);
    v74 = v574;
    goto LABEL_291;
  }
  v509 = v15;
  v129 = v63;
  v130 = v574;
  *(_BYTE *)(v574 + 1010) = 1;
  v131 = v130 + 2416;
  v132 = v427;
  *(_OWORD *)(v130 + 2432) = v428;
  *(_OWORD *)(v130 + 2416) = v132;
  v566 = (__m128i *)(v130 + 2320);
  v133 = v429[1];
  v134 = v429[2];
  *(__m128i *)(v130 + 2320) = _mm_loadu_si128(v429);
  *(__m128i *)(v130 + 2336) = v133;
  *(__m128i *)(v130 + 2352) = v134;
  if ( *(_BYTE *)(v130 + 2416) == 5 )
  {
    nullsub_1(v130 + 2320);
    v135 = sub_140001650(6, 1);
    if ( !v135 )
    {
      v553 = v14;
      sub_141938D2B(1, 6);
    }
    *(_WORD *)(v135 + 4) = 28001;
    *(_DWORD *)v135 = 1701999731;
    v419.m128i_i64[0] = 6;
    v419.m128i_i64[1] = v135;
    *(_QWORD *)&v420 = 6;
    v542[1] = v558;
    v542[0] = 1;
    v553 = v14;
    sub_140E72AA0(v533, v574 + 2424, &v419, v542);
    if ( v533[0] != 0xFF )
    {
      v553 = v14;
      sub_140409B40(v533);
    }
  }
  v553 = v14;
  v136 = v63;
  v137 = v131;
  sub_140DB0EE0(v17, v136, v18, v131);
  v553 = v14;
  v138 = sub_1416419F0(aTools_4, 5, v129);
  v139 = v574 + 2368;
  v553 = v14;
  sub_140328030(v574 + 2368, v138);
  *(_BYTE *)(v574 + 1009) = 0;
  v140 = _mm_loadu_si128(v129);
  *(__m128i *)&v542[16] = v129[1];
  *(__m128i *)v542 = v140;
  v508 = v14;
  sub_140409B40(v542);
  v141 = v574;
  v142 = *(_OWORD *)(v574 + 992);
  *(_BYTE *)(v574 + 1010) = 0;
  v143 = _mm_loadu_si128((const __m128i *)v137);
  v415 = *(_OWORD *)(v137 + 16);
  v414 = v143;
  sub_1418F44E0((__m128i *)(v141 + 1016), &v412, 0xC0u);
  *(_QWORD *)(v141 + 1208) = v531;
  *(_QWORD *)(v141 + 1216) = v556;
  *(_OWORD *)(v141 + 1256) = v142;
  *(_QWORD *)(v141 + 1272) = v563;
  *(_QWORD *)(v141 + 1280) = v565;
  *(_OWORD *)(v141 + 1288) = 0;
  *(_QWORD *)(v141 + 1384) = v509;
  *(_QWORD *)(v141 + 1392) = v17;
  a2 = v141;
  *(_QWORD *)(v141 + 1400) = v18;
  *(_QWORD *)(v141 + 1408) = v566;
  *(_QWORD *)(v141 + 1416) = v139;
  *(_BYTE *)(v141 + 1436) = 0;
  *(_BYTE *)(v141 + 1437) = v558;
LABEL_112:
  v572 = (__m128i *)v14;
  v565 = a2 + 1016;
  sub_140D4D630(v542, a2 + 1016, v560);
  v77 = *(_QWORD *)v542;
  if ( *(_QWORD *)v542 != -1 )
  {
    v499 = *(_QWORD *)&v542[120];
    v498 = *(__m128i *)&v542[104];
    v497 = *(_OWORD *)&v542[88];
    v496 = *(_OWORD *)&v542[72];
    v144 = _mm_loadu_si128((const __m128i *)&v542[8]);
    v495 = *(_OWORD *)&v542[56];
    v494 = *(_OWORD *)&v542[40];
    v493 = *(__m128i *)&v542[24];
    v492 = v144;
    v73 = v543;
    v566 = v544;
    v564 = v545;
    v75 = v572;
    v508 = (__int64)v572;
    sub_140D14E70(v565);
    v145 = v574;
    v146 = *(_QWORD *)(v574 + 2376);
    if ( v146 )
    {
      v147 = *(_QWORD *)(v574 + 2392);
      if ( v147 )
      {
        HIDWORD(_RAX) = HIDWORD(v574);
        v149 = *(const __m128i **)(v574 + 2368);
        v150 = v149 + 1;
        _ESI = ~_mm_movemask_epi8(_mm_load_si128(v149));
        do
        {
          if ( !(_WORD)_ESI )
          {
            do
            {
              v152 = _mm_load_si128(v150);
              v149 -= 24;
              ++v150;
              _ESI = _mm_movemask_epi8(v152) ^ 0xFFFF;
            }
            while ( !_ESI );
          }
          __asm { tzcnt   eax, esi }
          v153 = -3 * _RAX;
          v154 = *((_QWORD *)&v149[-1] + v153 - 1);
          if ( v154 )
            sub_140001660(v149[-1].m128i_i64[v153], v154, 1);
          --v147;
          _RAX = _ESI & (unsigned int)(_ESI - 1);
          _ESI &= _ESI - 1;
        }
        while ( v147 );
      }
      v155 = (24 * v146 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v156 = v155 + v146;
      v157 = v156 == -17;
      v158 = v156 + 17;
      v145 = v574;
      v75 = v572;
      if ( !v157 )
        sub_140001660(*(_QWORD *)(v574 + 2368) - v155, v158, 16);
    }
    v483 = v75;
    sub_14036FB80(v145 + 2320);
    v76 = v574;
    *(_BYTE *)(v574 + 1010) = 0;
    v159 = *(_QWORD *)(v76 + 984);
    if ( v159 )
      goto LABEL_232;
    goto LABEL_233;
  }
  v393 = 4;
LABEL_301:
  v282 = v574;
LABEL_302:
  *v13 = v393;
  v528->m128i_i64[0] = -1;
  result = 3;
LABEL_325:
  *(_BYTE *)(v282 + 840) = result;
  return result;
}
