// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x140880780 | successor of pre-update 0x1402d3890 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_140880780(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // xmm7
  __m128i v12; // xmm8
  __m128i si128; // xmm6
  __m128i v14; // xmm9
  __m128i v15; // xmm10
  __m128i v16; // xmm11
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  const __m128i *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rbx
  __int64 *i; // rax
  __int64 *v29; // r15
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // xmm12_8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rax
  const __m128i *v45; // r11
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rdx
  __int64 v56; // r8
  char v57; // r9
  char v58; // cl
  char v59; // cl
  char v60; // cl
  char v61; // cl
  __int8 v62; // al
  unsigned __int64 v63; // rsi
  _QWORD *v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int128 v70; // kr10_16
  __int64 v71; // r15
  _QWORD *v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rcx
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rax
  char v79; // bl
  int v80; // ecx
  __int64 v81; // r8
  __int128 v82; // xmm0
  __m128i v83; // xmm1
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rax
  __int128 v89; // xmm1
  __int64 v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // rdx
  const __m128i *v99; // rsi
  __int64 v100; // rcx
  __int64 v102; // rdi
  char v104; // al
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rax
  bool v110; // zf
  __int64 v111; // rcx
  __int64 v112; // rdx
  __m128i v113; // xmm0
  __int64 v114; // rax
  __int64 v115; // rdx
  char v116; // di
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rsi
  _BYTE *v123; // rax
  double v124; // xmm11_8
  __int32 v125; // r8d
  int v126; // edx
  __int64 v127; // rsi
  unsigned __int32 v128; // ecx
  __int64 v129; // rcx
  unsigned __int64 v130; // rsi
  __int64 v131; // r9
  __int64 v132; // rdx
  const __m128i *v133; // rdi
  unsigned __int64 v134; // r14
  __m128i v135; // xmm0
  __m128i v136; // xmm12
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rsi
  __m128i v140; // xmm13
  __int8 *v142; // rbx
  int v143; // eax
  __int64 v145; // rdi
  const __m128i *v146; // rcx
  char v147; // al
  __int64 v148; // rax
  const __m128i *v149; // rdx
  __int64 v151; // r13
  __int64 v152; // r15
  const __m128i *v153; // rsi
  __m128i v155; // xmm0
  __int64 v156; // r14
  unsigned __int64 v157; // rbx
  __int64 v158; // r9
  __int64 v159; // r12
  __m128i v160; // xmm0
  __m128i v161; // xmm10
  unsigned __int64 v163; // rdx
  __int64 v164; // r15
  __int64 v165; // r15
  __m128i v166; // xmm11
  __int64 v168; // rax
  __int64 v169; // r14
  __int64 v171; // rax
  unsigned __int64 v172; // rbx
  char v175; // dl
  __int64 v176; // r9
  char v177; // cl
  __int128 v178; // xmm1
  __m128i v179; // xmm2
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v187; // rdx
  __int64 v188; // r12
  const __m128i *v189; // r14
  int v190; // r13d
  __m128i v191; // xmm11
  __m128i v192; // xmm12
  __m128i v193; // xmm13
  __m128i v194; // xmm14
  __m128i v195; // xmm15
  __int64 v196; // rax
  __m128i v197; // xmm10
  __int64 v199; // rsi
  int v200; // eax
  unsigned __int64 v201; // rdx
  __int64 j; // r8
  unsigned __int64 v203; // rax
  __m128i v204; // xmm0
  __int64 v206; // rbx
  __int64 *v207; // rsi
  __int64 v208; // rdi
  __m128i v209; // xmm0
  __m128i v210; // xmm9
  __int64 v211; // rdi
  __int64 v212; // rsi
  __int64 v213; // rax
  __int128 v214; // rdi
  const __m128i *v215; // rbx
  __int64 v217; // rdx
  __int64 v218; // rcx
  const __m128i *v219; // r8
  __int64 v220; // r15
  __int64 v221; // rax
  __int64 v222; // rbx
  __int64 v223; // rcx
  char v224; // al
  unsigned int v225; // eax
  unsigned __int64 v226; // rax
  __int64 v227; // r9
  __m128i v228; // xmm0
  __m128i v229; // xmm9
  const __m128i *k; // r11
  unsigned __int64 v231; // rax
  __m128i v232; // xmm10
  __int64 v234; // rbx
  __int64 v235; // rdx
  __int64 v236; // r15
  int v237; // eax
  unsigned int v238; // eax
  __m128i v239; // xmm0
  __m128i v240; // xmm2
  char v241; // al
  char v242; // al
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  double v248; // xmm0_8
  __int64 v249; // rax
  __int64 v250; // rcx
  __int64 v251; // rax
  __int64 v252; // rbx
  __int64 v253; // rax
  void *v254; // rsi
  __int64 v255; // rax
  _BYTE *v256; // rax
  __int32 v257; // r8d
  int v258; // edx
  unsigned __int32 v259; // ecx
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // rbx
  __int64 v268; // rsi
  __int64 v269; // rbx
  __int64 v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rax
  __int64 v273; // r15
  __int64 v274; // rdi
  __int64 v275; // r15
  __int64 v276; // rax
  __int64 v277; // rbx
  bool v278; // r15
  __int64 v279; // rax
  unsigned __int64 v280; // rdx
  unsigned __int64 v281; // rdi
  __int64 v282; // rsi
  unsigned __int64 v283; // rax
  __int64 v284; // rcx
  unsigned __int64 v285; // rdx
  __m128i v286; // xmm0
  __m128i v287; // xmm1
  __m128i v288; // xmm2
  __m128i v289; // xmm3
  unsigned __int64 v290; // rcx
  __m128i v291; // xmm0
  __m128i v292; // xmm1
  unsigned __int64 v293; // rsi
  unsigned __int64 v294; // rax
  __int64 v295; // rsi
  __m128i v296; // xmm2
  __m128i v297; // xmm3
  __int64 v298; // rdx
  __m128i v299; // xmm0
  __m128i v300; // xmm2
  __m128i v301; // xmm2
  unsigned __int64 v302; // rsi
  __int64 v303; // r9
  __int64 v304; // rdx
  const __m128i *v305; // rcx
  __int64 v306; // rbx
  __m128i v307; // xmm0
  __m128i v308; // xmm9
  __int64 v309; // r8
  const __m128i *v311; // r10
  unsigned __int64 v312; // rsi
  __m128i v313; // xmm10
  const __m128i *v315; // rdi
  const __m128i *v316; // rbx
  __int64 v317; // r15
  int v318; // eax
  unsigned int v319; // eax
  __int64 v321; // rax
  __int64 v322; // r11
  __int8 *v323; // rdi
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __m128i v327; // xmm0
  __m128i v328; // xmm2
  __int64 v329; // rcx
  char v330; // al
  __m128i v331; // xmm2
  __m128i v332; // xmm3
  char v333; // si
  const __m128i *v334; // rdi
  __int64 v335; // rax
  unsigned int v336; // eax
  __int64 v337; // r9
  unsigned __int64 v338; // r15
  const __m128i *v339; // rcx
  __int64 v340; // rdx
  __m128i v341; // xmm0
  __m128i v342; // xmm9
  __int64 v343; // rbx
  const __m128i *v345; // r10
  __int64 v346; // r15
  __m128i v347; // xmm10
  __int8 *v349; // rdi
  int v350; // eax
  unsigned int v351; // eax
  __int64 v354; // r9
  char *v355; // rdi
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // rdx
  char v360; // bl
  unsigned __int64 v361; // rax
  char v362; // cl
  __int64 v363; // rdx
  char v364; // al
  __m128i v365; // xmm2
  __m128i v366; // xmm3
  __int16 v369; // dx
  __int64 v371; // r14
  const __m128i *v372; // r12
  __m128i v374; // xmm0
  __int64 v375; // rax
  __int64 v376; // r15
  __int64 *v377; // rdi
  unsigned __int64 v378; // rax
  __int64 v379; // rsi
  __int64 v380; // rdi
  __m128i v381; // xmm0
  __m128i v382; // xmm7
  __int64 m; // rdx
  const __m128i *v384; // rax
  __m128i v385; // xmm8
  int v387; // eax
  unsigned __int64 v388; // rbx
  __int64 v389; // rdx
  __int64 v390; // rcx
  __m128i v391; // xmm0
  __m128i v392; // xmm7
  _QWORD *n; // r8
  unsigned __int64 v394; // rbx
  __m128i v395; // xmm8
  __int64 v397; // rsi
  unsigned __int64 v398; // rdi
  __int64 v399; // r15
  int v400; // eax
  __int64 v401; // r10
  const __m128i *v402; // r11
  unsigned __int64 v403; // rax
  __m128i v405; // krC0_16
  __m128i v406; // xmm0
  __m128i v407; // xmm7
  const __m128i *ii; // rdx
  _QWORD *v409; // rax
  __m128i v410; // xmm8
  unsigned __int64 v412; // r15
  int v413; // eax
  int v414; // eax
  __int64 v415; // rbx
  __int64 v416; // rdi
  unsigned __int64 v417; // rax
  __m128i v418; // xmm0
  __m128i v419; // xmm7
  _QWORD *jj; // rdx
  unsigned __int64 v421; // rax
  __m128i v423; // xmm8
  unsigned __int64 v425; // rsi
  __int8 *v426; // r15
  int v427; // eax
  int v428; // eax
  char v429; // al
  __int64 v430; // rcx
  __int64 v431; // rdx
  __int64 v432; // rsi
  __int64 v433; // rsi
  __int64 v434; // rcx
  __int64 v435; // rax
  __int64 v436; // rdi
  _QWORD *v437; // rbx
  __int64 v438; // rdx
  __int64 v439; // rdx
  __int64 v440; // rcx
  __int64 v441; // rcx
  __int64 v442; // rcx
  __int64 v443; // rsi
  __int64 v444; // r14
  __int64 v445; // rsi
  __int64 v446; // rdi
  __int64 v447; // rbx
  __int128 v449; // [rsp+50h] [rbp-30h] BYREF
  __int64 v450; // [rsp+60h] [rbp-20h]
  __m128i v451; // [rsp+68h] [rbp-18h]
  __m128i v452; // [rsp+78h] [rbp-8h]
  __m128i v453; // [rsp+88h] [rbp+8h]
  __m128i v454; // [rsp+98h] [rbp+18h]
  __m128i v455; // [rsp+A8h] [rbp+28h]
  __int128 v456; // [rsp+B8h] [rbp+38h]
  __int128 v457; // [rsp+C8h] [rbp+48h]
  __m128i v458; // [rsp+D8h] [rbp+58h]
  __m128i v459; // [rsp+E8h] [rbp+68h]
  __m128i v460; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v461; // [rsp+108h] [rbp+88h]
  _QWORD v462[2]; // [rsp+110h] [rbp+90h] BYREF
  __m128i v463; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v464[24]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v465; // [rsp+148h] [rbp+C8h]
  __m128i v466; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v467; // [rsp+160h] [rbp+E0h]
  __m128i v468; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v469[56]; // [rsp+190h] [rbp+110h]
  __m128i v470; // [rsp+1C8h] [rbp+148h]
  __m128i v471; // [rsp+1D8h] [rbp+158h]
  __m128i v472; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v473; // [rsp+1F8h] [rbp+178h]
  __m128i v474; // [rsp+208h] [rbp+188h] BYREF
  __m128i v475; // [rsp+218h] [rbp+198h] BYREF
  __int64 v476; // [rsp+230h] [rbp+1B0h]
  __int64 v477; // [rsp+238h] [rbp+1B8h]
  __int64 v478; // [rsp+240h] [rbp+1C0h]
  __int64 v479; // [rsp+248h] [rbp+1C8h]
  __m128i v480; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v481; // [rsp+260h] [rbp+1E0h]
  __m128i v482; // [rsp+270h] [rbp+1F0h] BYREF
  const __m128i *v483; // [rsp+280h] [rbp+200h] BYREF
  __m128i v484; // [rsp+288h] [rbp+208h]
  __m128i v485; // [rsp+298h] [rbp+218h] BYREF
  __int64 v486; // [rsp+2A8h] [rbp+228h]
  __m128i v487; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v488; // [rsp+2C0h] [rbp+240h]
  _BYTE v489[104]; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v490; // [rsp+338h] [rbp+2B8h] BYREF
  __int128 v491; // [rsp+348h] [rbp+2C8h]
  __m128i v492; // [rsp+358h] [rbp+2D8h] BYREF
  __m128i v493; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v494; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v495; // [rsp+4F8h] [rbp+478h]
  __int64 v496; // [rsp+500h] [rbp+480h]
  char v497; // [rsp+508h] [rbp+488h]
  _OWORD v498[2]; // [rsp+510h] [rbp+490h] BYREF
  __m128i v499; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v500; // [rsp+540h] [rbp+4C0h]
  __int64 v501; // [rsp+548h] [rbp+4C8h]
  __int128 v502; // [rsp+550h] [rbp+4D0h]
  char v503; // [rsp+560h] [rbp+4E0h]
  HANDLE hObject; // [rsp+568h] [rbp+4E8h]
  __m128i v505; // [rsp+570h] [rbp+4F0h] BYREF
  __m128i v506; // [rsp+580h] [rbp+500h] BYREF
  __m128i v507; // [rsp+590h] [rbp+510h] BYREF
  __m128i v508; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v509; // [rsp+5B0h] [rbp+530h] BYREF
  __m128i v510; // [rsp+5C0h] [rbp+540h]
  __int128 v511; // [rsp+5D0h] [rbp+550h]
  __m128i v512; // [rsp+5E0h] [rbp+560h]
  __m128i v513; // [rsp+5F0h] [rbp+570h]
  int v514; // [rsp+610h] [rbp+590h]
  __int64 v515; // [rsp+618h] [rbp+598h]
  int v516; // [rsp+620h] [rbp+5A0h]
  unsigned __int64 v517; // [rsp+624h] [rbp+5A4h]
  __int64 *v518; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v519; // [rsp+638h] [rbp+5B8h]
  unsigned __int64 v520; // [rsp+640h] [rbp+5C0h]
  __int64 v521; // [rsp+648h] [rbp+5C8h] BYREF
  __int64 v522; // [rsp+650h] [rbp+5D0h]
  unsigned __int64 v523; // [rsp+658h] [rbp+5D8h]
  __m128i v524; // [rsp+660h] [rbp+5E0h] BYREF
  __m128i v525; // [rsp+670h] [rbp+5F0h] BYREF
  __m128i v526; // [rsp+680h] [rbp+600h] BYREF
  __int128 v527; // [rsp+690h] [rbp+610h] BYREF
  __int64 v528; // [rsp+6A0h] [rbp+620h]
  __int64 v529; // [rsp+6A8h] [rbp+628h]
  __int64 v530; // [rsp+6B0h] [rbp+630h]
  __int64 v531; // [rsp+6B8h] [rbp+638h]
  __int128 v532; // [rsp+6C0h] [rbp+640h] BYREF
  __m128i v533; // [rsp+6D0h] [rbp+650h] BYREF
  __m128i v534; // [rsp+6E0h] [rbp+660h] BYREF
  __m128i v535; // [rsp+6F0h] [rbp+670h] BYREF
  _QWORD v536[2]; // [rsp+700h] [rbp+680h] BYREF
  unsigned __int64 v537; // [rsp+710h] [rbp+690h]
  __int64 v538; // [rsp+718h] [rbp+698h]
  __m128i v539; // [rsp+720h] [rbp+6A0h] BYREF
  const __m128i *v540; // [rsp+730h] [rbp+6B0h]
  _BYTE v541[48]; // [rsp+740h] [rbp+6C0h] BYREF
  __m128i v542; // [rsp+770h] [rbp+6F0h] BYREF
  __m128i v543; // [rsp+780h] [rbp+700h]
  _QWORD *v544; // [rsp+790h] [rbp+710h]
  const __m128i *v545; // [rsp+798h] [rbp+718h]
  __m128i v546; // [rsp+7A0h] [rbp+720h] BYREF
  __m128i v547; // [rsp+7B0h] [rbp+730h]
  __m128i v548; // [rsp+7C0h] [rbp+740h] BYREF
  __m128i v549; // [rsp+7D0h] [rbp+750h] BYREF
  __m128i v550; // [rsp+7E0h] [rbp+760h]
  char v551; // [rsp+7FFh] [rbp+77Fh] BYREF
  __int64 v552; // [rsp+800h] [rbp+780h]
  __int64 v553; // [rsp+808h] [rbp+788h]
  __int64 v554; // [rsp+810h] [rbp+790h]
  const __m128i *v555; // [rsp+818h] [rbp+798h]
  char v556; // [rsp+824h] [rbp+7A4h]
  char v557; // [rsp+825h] [rbp+7A5h]
  char v558; // [rsp+826h] [rbp+7A6h]
  char v559; // [rsp+827h] [rbp+7A7h]
  __int64 v560; // [rsp+828h] [rbp+7A8h]
  char v561; // [rsp+833h] [rbp+7B3h]
  char v562; // [rsp+834h] [rbp+7B4h]
  char v563; // [rsp+835h] [rbp+7B5h]
  char v564; // [rsp+836h] [rbp+7B6h]
  char v565; // [rsp+837h] [rbp+7B7h]
  __int64 v566; // [rsp+838h] [rbp+7B8h]
  unsigned __int64 v567; // [rsp+840h] [rbp+7C0h]
  __int64 v568; // [rsp+848h] [rbp+7C8h]
  char v569; // [rsp+855h] [rbp+7D5h]
  char v570; // [rsp+856h] [rbp+7D6h]
  char v571; // [rsp+857h] [rbp+7D7h]
  __int64 v572; // [rsp+858h] [rbp+7D8h]
  unsigned __int64 v573; // [rsp+860h] [rbp+7E0h]
  __int64 v574; // [rsp+868h] [rbp+7E8h]
  char v575; // [rsp+872h] [rbp+7F2h]
  char v576; // [rsp+873h] [rbp+7F3h]
  char v577; // [rsp+874h] [rbp+7F4h]
  char v578; // [rsp+875h] [rbp+7F5h]
  char v579; // [rsp+876h] [rbp+7F6h]
  char v580; // [rsp+877h] [rbp+7F7h]
  __int64 v581; // [rsp+878h] [rbp+7F8h]

  v581 = -2;
  v529 = a1;
  v518 = a3;
  v4 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v4 + 16) == 1 )
  {
    v9 = *(_QWORD *)v4;
    v10 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v443 = v4;
    v9 = sub_1416C5230(v6, v5, v7, v8);
    v4 = v443;
    *(_QWORD *)v443 = v9;
    *(_QWORD *)(v443 + 8) = v10;
    *(_BYTE *)(v443 + 16) = 1;
  }
  *(_QWORD *)v4 = v9 + 1;
  v11 = _mm_loadu_si128((const __m128i *)&xmmword_141A51860);
  *(__m128i *)&v541[16] = v11;
  v12 = _mm_loadu_si128((const __m128i *)&off_141A51850);
  *(__m128i *)v541 = v12;
  *(_QWORD *)&v541[32] = v9;
  *(_QWORD *)&v541[40] = v10;
  v544 = a2;
  v499.m128i_i64[0] = (__int64)(a2 + 20);
  v499.m128i_i8[8] = 0;
  v500 = (__int64)(a2 + 24);
  LOBYTE(v501) = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A504C0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_141A34F30);
  v15 = _mm_load_si128((const __m128i *)&xmmword_141A504B0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_141A34F10);
  v17 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = *(__int64 *)((char *)v499.m128i_i64 + v17);
      sub_1416C49D0(v489, *(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
      v19 = v17 + 16;
      if ( *(_DWORD *)v489 != 2 )
        break;
      v20 = (const __m128i *)((v489[8] & 3u) - 2);
      if ( (unsigned int)v20 >= 2 && (v489[8] & 3) != 0 )
      {
        --*(_QWORD *)&v489[8];
        v489[0] = 3;
        sub_1416EBAD0(&v489[8]);
      }
      v17 += 16;
      if ( v19 == 32 )
        goto LABEL_74;
    }
    v21 = *(_QWORD *)(v18 + 8);
    v22 = *(_QWORD *)(v18 + 16);
    v546.m128i_i64[0] = 0;
    v546.m128i_i64[1] = 8;
    v547.m128i_i64[0] = 0;
    sub_1408F3D00(v489, v21, v22, &v546);
    v23 = *(_QWORD *)v489;
    if ( *(_QWORD *)v489 != -1 )
      break;
    v574 = v17 + 16;
    v20 = (const __m128i *)v546.m128i_i64[0];
    v24 = 16 * v547.m128i_i64[0];
    v25 = v546.m128i_i64[1] + 48 * v547.m128i_i64[0];
    v546.m128i_i64[0] = v546.m128i_i64[1];
    v568 = (__int64)v20;
    v547.m128i_i64[0] = (__int64)v20;
    v547.m128i_i64[1] = v25;
    v26 = 3 * v24 - 48;
    v27 = (_QWORD *)(v546.m128i_i64[1] + 56);
    v560 = v546.m128i_i64[1];
    for ( i = (__int64 *)v546.m128i_i64[1]; i != (__int64 *)v25; i = v29 )
    {
      v29 = i + 6;
      v546.m128i_i64[1] = (__int64)(i + 6);
      v572 = *i;
      if ( v572 == -1 )
      {
        if ( (__int64 *)v25 != v29 )
        {
          v63 = v26 / 0x30;
          do
          {
            v20 = (const __m128i *)*(v27 - 1);
            if ( v20 )
              sub_140001660(*v27, v20, 1);
            v27 += 6;
            --v63;
          }
          while ( v63 );
        }
        break;
      }
      v30 = i[2];
      v31 = i[4];
      v32 = i[5];
      v566 = i[1];
      v33 = sub_1416B1C00(v566, v30);
      if ( !v33 )
        goto LABEL_64;
      sub_1416E2AB0(v489, v33, v34);
      if ( *(_DWORD *)v489 == 1 )
        goto LABEL_64;
      v35 = *(_QWORD *)&v489[16];
      if ( *(_QWORD *)&v489[16] < 8u )
        goto LABEL_64;
      v36 = *(_QWORD *)&v489[8];
      if ( **(_QWORD **)&v489[8] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(*(_QWORD *)&v489[8] + *(_QWORD *)&v489[16] - 6LL) ^ 0x6F736A2E
         | *(unsigned __int16 *)(*(_QWORD *)&v489[8] + *(_QWORD *)&v489[16] - 2LL) ^ 0x6C6E )
      {
        goto LABEL_64;
      }
      v37 = *(_QWORD *)&v489[16] - 6LL;
      if ( (unsigned __int64)(*(_QWORD *)&v489[16] - 6LL) < 8
        || *(char *)(*(_QWORD *)&v489[8] + 8LL) <= -65
        || *(char *)(*(_QWORD *)&v489[8] + v37) <= -65 )
      {
        sub_14196B4F0(*(_DWORD *)&v489[8], *(_DWORD *)&v489[16], 8, v37, (__int64)&off_141A533B0);
      }
      *(_QWORD *)v489 = 0;
      *(_QWORD *)&v489[8] = *(_QWORD *)&v489[16] - 14LL;
      *(_QWORD *)&v489[16] = v36 + 8;
      *(_QWORD *)&v489[24] = v35 - 14;
      *(_QWORD *)&v489[32] = 0;
      *(_QWORD *)&v489[40] = v35 - 14;
      *(_QWORD *)&v489[48] = 0x2D0000002DLL;
      v489[56] = 1;
      *(_WORD *)&v489[64] = 1;
      sub_140215960(&v483, v489);
      if ( v484.m128i_i64[1] <= 4uLL )
      {
        if ( !v483 )
          goto LABEL_64;
        v38 = v484.m128i_i64[0];
        v39 = 16LL * (_QWORD)v483;
        goto LABEL_63;
      }
      v552 = v484.m128i_i64[0];
      sub_1406C5A40(
        (unsigned int)v489,
        v484.m128i_i32[0] + 16 * v484.m128i_i32[2] - 80,
        5,
        (unsigned int)&unk_141A533C8,
        1);
      v525.m128i_i64[0] = *(_QWORD *)&v489[16];
      v524 = _mm_loadu_si128((const __m128i *)v489);
      sub_1416DA570(&v534);
      v42 = v535.m128i_i64[0];
      v555 = (const __m128i *)v534.m128i_i64[1];
      if ( v535.m128i_i64[0] < 0 )
      {
        v43 = 0;
LABEL_79:
        v559 = 1;
        sub_14196B2DB(v43, v42);
      }
      if ( !v535.m128i_i64[0] )
      {
        v44 = 1;
        goto LABEL_55;
      }
      v567 = v535.m128i_i64[0];
      nullsub_1(v41, v40);
      v43 = 1;
      v44 = sub_140001650(v567, 1);
      v42 = v567;
      if ( !v44 )
        goto LABEL_79;
      v45 = v555;
      if ( v567 < 8 || (unsigned __int64)(v44 - (_QWORD)v555) < 0x20 )
      {
        v46 = 0;
      }
      else
      {
        if ( v567 < 0x20 )
        {
          v46 = 0;
LABEL_37:
          v52 = v46;
          v46 = v42 & 0x7FFFFFFFFFFFFFF8LL;
          do
          {
            v53 = _mm_loadl_epi64((const __m128i *)((char *)v45 + v52));
            v54 = _mm_cmpeq_epi8(v53, si128);
            *(_QWORD *)(v44 + v52) = _mm_or_si128(_mm_and_si128(v54, v14), _mm_andnot_si128(v54, v53)).m128i_u64[0];
            v52 += 8;
          }
          while ( v46 != v52 );
          if ( v42 == v46 )
            goto LABEL_55;
          goto LABEL_40;
        }
        v46 = v567 & 0x7FFFFFFFFFFFFFE0LL;
        v47 = 0;
        do
        {
          v48 = _mm_loadu_si128(&v45[v47 / 0x10]);
          v49 = _mm_loadu_si128(&v45[v47 / 0x10 + 1]);
          v50 = _mm_cmpeq_epi8(v48, v15);
          v51 = _mm_cmpeq_epi8(v49, v15);
          *(__m128i *)(v44 + v47) = _mm_or_si128(_mm_and_si128(v50, v16), _mm_andnot_si128(v50, v48));
          *(__m128i *)(v44 + v47 + 16) = _mm_or_si128(_mm_and_si128(v51, v16), _mm_andnot_si128(v51, v49));
          v47 += 32LL;
        }
        while ( v46 != v47 );
        if ( v42 == v46 )
          goto LABEL_55;
        if ( (v42 & 0x18) != 0 )
          goto LABEL_37;
      }
LABEL_40:
      v55 = v46;
      v56 = v42 & 3;
      if ( (v42 & 3) != 0 )
      {
        v55 = v46;
        do
        {
          v57 = v45->m128i_i8[v55];
          if ( v57 == 92 )
            v57 = 47;
          *(_BYTE *)(v44 + v55++) = v57;
          --v56;
        }
        while ( v56 );
      }
      v42 = v567;
      if ( v46 - v567 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v58 = v45->m128i_i8[v55];
          if ( v58 == 92 )
            v58 = 47;
          *(_BYTE *)(v44 + v55) = v58;
          v59 = v45->m128i_i8[v55 + 1];
          if ( v59 == 92 )
            v59 = 47;
          *(_BYTE *)(v44 + v55 + 1) = v59;
          v60 = v45->m128i_i8[v55 + 2];
          if ( v60 == 92 )
            v60 = 47;
          *(_BYTE *)(v44 + v55 + 2) = v60;
          v61 = v45->m128i_i8[v55 + 3];
          if ( v61 == 92 )
            v61 = 47;
          *(_BYTE *)(v44 + v55 + 3) = v61;
          v55 += 4;
        }
        while ( v42 != v55 );
      }
LABEL_55:
      *(_QWORD *)&v489[16] = v42;
      *(_QWORD *)&v489[24] = v44;
      *(_QWORD *)&v489[32] = v42;
      v62 = v499.m128i_i8[v17 + 8];
      *(_QWORD *)v489 = 1;
      *(_QWORD *)&v489[8] = v31;
      v489[48] = v62;
      *(_QWORD *)&v489[40] = v32;
      v559 = 0;
      sub_1408706E0(&v505, v541, &v524, v489);
      if ( v505.m128i_i32[0] != 2 && v506.m128i_i64[0] != -1 && v506.m128i_i64[0] )
        sub_140001660(v506.m128i_i64[1], v506.m128i_i64[0], 1);
      if ( v534.m128i_i64[0] > 0 )
        sub_140001660(v555, v534.m128i_i64[0], 1);
      if ( v483 )
      {
        v39 = 16LL * (_QWORD)v483;
        v38 = v552;
LABEL_63:
        sub_140001660(v38, v39, 8);
      }
LABEL_64:
      v20 = (const __m128i *)v572;
      if ( v572 )
        sub_140001660(v566, v572, 1);
      v26 -= 48LL;
      v27 += 6;
    }
    if ( v568 )
      sub_140001660(v560, 48 * v568, 8);
    v17 = v574;
    if ( v574 == 32 )
    {
LABEL_74:
      *(__m128i *)&v464[8] = _mm_loadu_si128((const __m128i *)&v541[24]);
      v465 = *(_QWORD *)&v541[40];
      v463 = _mm_load_si128((const __m128i *)v541);
      *(_QWORD *)v464 = *(_QWORD *)&v541[16];
      v64 = v544;
      if ( v544[120] == -1 )
      {
        v76 = v544[1];
        v77 = v544[2];
        v565 = 1;
        sub_140A2DA60((__int64)&v494, v76, v77);
        v68 = v495;
        v65 = v496;
      }
      else
      {
        v65 = v544[122];
        if ( v65 )
        {
          v66 = v544[121];
          nullsub_1(*(_QWORD *)&v541[40], v20);
          v67 = sub_140001650(v65, 1);
          if ( !v67 )
          {
            v565 = 1;
            sub_14196B2DB(1, v65);
          }
          v68 = v67;
          v494 = v65;
          v495 = v67;
          sub_1419234B0(v67, v66, v65);
          v496 = v65;
        }
        else
        {
          v494 = 0;
          v495 = 1;
          v496 = 0;
          v68 = 1;
        }
        v497 = *((_BYTE *)v64 + 984);
      }
      v571 = 1;
      sub_140876E90(v489, v68, v65);
      v78 = *(_QWORD *)v489;
      v505 = *(__m128i *)&v489[8];
      v506 = *(__m128i *)&v489[24];
      v507 = *(__m128i *)&v489[40];
      v79 = v489[56];
      if ( *(_QWORD *)v489 != -1 )
      {
        v80 = *(_DWORD *)&v489[57];
        v81 = v529;
        *(_DWORD *)(v529 + 60) = *(_DWORD *)&v489[60];
        *(_DWORD *)(v81 + 57) = v80;
        v82 = *(_OWORD *)&v489[64];
        *(_OWORD *)(v81 + 80) = *(_OWORD *)&v489[80];
        *(_OWORD *)(v81 + 64) = v82;
        v75 = _mm_load_si128(&v505);
        v83 = v506;
        *(__m128i *)(v81 + 40) = _mm_load_si128(&v507);
        *(__m128i *)(v81 + 24) = v83;
        *(__m128i *)(v81 + 8) = v75;
        *(_QWORD *)v81 = v78;
        *(_BYTE *)(v81 + 56) = v79;
LABEL_93:
        if ( v494 )
          *(double *)v75.m128i_i64 = sub_140001660(v68, v494, 1);
        sub_14018F950(&v463);
        return *(double *)v75.m128i_i64;
      }
      v75 = _mm_load_si128(&v505);
      v482 = _mm_load_si128(&v507);
      v481 = v506;
      v480 = v75;
      v570 = 1;
      sub_140888BB0(&v466, v68, v65);
      *(_QWORD *)&v527 = 0;
      *((_QWORD *)&v527 + 1) = 8;
      v528 = 0;
      if ( (v79 & 1) == 0 )
      {
        nullsub_1(v85, v84);
        v86 = sub_140001650(23, 1);
        if ( !v86 )
        {
          v578 = 1;
          v577 = 1;
          sub_14196B2DB(1, 23);
        }
        *(__m128i *)v86 = _mm_loadu_si128(&xmmword_141A53739);
        v572 = v86;
        *(_QWORD *)(v86 + 15) = 0x454C42414C494156LL;
        v505.m128i_i64[0] = v68;
        v505.m128i_i64[1] = v65;
        *(_QWORD *)v489 = &v505;
        *(_QWORD *)&v489[8] = sub_1416CE600;
        sub_1416DAFA0(&v460, &unk_141A53750, v489);
        *(_QWORD *)v489 = 23;
        *(_QWORD *)&v489[8] = v572;
        *(_QWORD *)&v489[16] = 23;
        *(__m128i *)&v489[24] = _mm_loadu_si128(&v460);
        *(_QWORD *)&v489[40] = v461;
        v87 = v528;
        if ( v528 == (_QWORD)v527 )
          sub_1419396D0(&v527);
        v88 = *((_QWORD *)&v527 + 1);
        v85 = 48 * v87;
        v75 = _mm_loadu_si128((const __m128i *)v489);
        v89 = *(_OWORD *)&v489[16];
        *(__m128i *)(*((_QWORD *)&v527 + 1) + v85 + 32) = _mm_loadu_si128((const __m128i *)&v489[32]);
        *(_OWORD *)(v88 + v85 + 16) = v89;
        *(__m128i *)(v88 + v85) = v75;
        v528 = v87 + 1;
      }
      v90 = v64[13];
      v91 = v64[14];
      v578 = 1;
      v577 = 1;
      v92 = sub_1416AE140(v85);
      if ( *(_BYTE *)(v92 + 16) == 1 )
      {
        v97 = *(_QWORD *)v92;
        v98 = *(_QWORD *)(v92 + 8);
      }
      else
      {
        v578 = 1;
        v577 = 1;
        v444 = v92;
        v97 = sub_1416C5230(v94, v93, v95, v96);
        v92 = v444;
        *(_QWORD *)v444 = v97;
        *(_QWORD *)(v444 + 8) = v98;
        *(_BYTE *)(v444 + 16) = 1;
      }
      *(_QWORD *)v92 = v97 + 1;
      *(__m128i *)&v541[16] = v11;
      *(__m128i *)v541 = v12;
      *(_QWORD *)&v541[32] = v97;
      *(_QWORD *)&v541[40] = v98;
      sub_1416C49D0(v489, v90, v91);
      if ( *(_DWORD *)v489 == 2 )
      {
        if ( (v489[8] & 3u) - 2 >= 2 && (v489[8] & 3) != 0 )
        {
          --*(_QWORD *)&v489[8];
          v489[0] = 3;
          sub_1416EBAD0(&v489[8]);
        }
        v99 = *(const __m128i **)v541;
        v505 = *(__m128i *)&v541[8];
        v506 = *(__m128i *)&v541[24];
        v507.m128i_i64[0] = *(_QWORD *)&v541[40];
LABEL_109:
        v484 = _mm_load_si128(&v505);
        v485 = v506;
        v486 = v507.m128i_i64[0];
        v483 = v99;
        v563 = 1;
        v562 = 1;
        sub_1414CB550((__int64)&v505);
        HIDWORD(_RAX) = v505.m128i_i32[1];
        v555 = v99;
        if ( v505.m128i_i64[0] == -1 )
        {
          v530 = -1;
        }
        else
        {
          v566 = v505.m128i_i64[1];
          v572 = v505.m128i_i64[0];
          sub_1416B18A0((unsigned int)v489, v505.m128i_i32[2], v506.m128i_i32[0], (unsigned int)&unk_141A52028, 5);
          if ( v572 )
            sub_140001660(v566, v572, 1);
          v519 = *(_QWORD *)&v489[8];
          v530 = *(_QWORD *)v489;
          HIDWORD(_RAX) = *(_DWORD *)&v489[20];
          v476 = *(_QWORD *)&v489[16];
        }
        v526 = _mm_loadu_si128((const __m128i *)&v464[16]);
        v525 = *(__m128i *)v464;
        v524 = v463;
        v151 = v480.m128i_i64[0];
        v152 = v481.m128i_i64[1];
        v153 = (const __m128i *)(v480.m128i_i64[0] + 16);
        _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v480.m128i_i64[0]));
LABEL_187:
        while ( v152 )
        {
          if ( !(_WORD)_EDI )
          {
            do
            {
              v155 = _mm_load_si128(v153);
              v151 -= 6656;
              ++v153;
              _EDI = _mm_movemask_epi8(v155) ^ 0xFFFF;
            }
            while ( !_EDI );
          }
          __asm { tzcnt   eax, edi }
          v156 = -416 * _RAX;
          v575 = 1;
          sub_1416DB410(v489, -416 * _RAX + v151 - 416);
          v157 = sub_1406CECD0(&v526, v489);
          _EDI &= _EDI - 1;
          v574 = v152 - 1;
          v568 = v156 + v151 - 392;
          v100 = v524.m128i_i64[1];
          v159 = v524.m128i_i64[0];
          v560 = v157 >> 57;
          v160 = _mm_cvtsi32_si128(v157 >> 57);
          v161 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v160, v160), 0), 68);
          v572 = *(_QWORD *)&v489[8];
          HIDWORD(_RAX) = *(_DWORD *)&v489[20];
          v566 = *(_QWORD *)&v489[16];
          v163 = 0;
          v164 = v157;
          while ( 1 )
          {
            v165 = v100 & v164;
            v166 = _mm_loadu_si128((const __m128i *)(v159 + v165));
            _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v166, v161));
            if ( _R14D )
              break;
LABEL_196:
            _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v166, (__m128i)-1LL));
            if ( (_DWORD)_RAX )
            {
              v152 = v574;
              if ( !v525.m128i_i64[0] )
              {
                LOBYTE(v158) = 1;
                sub_14192EA40(&v524, 1, &v526, v158);
              }
              HIDWORD(_RAX) = *(_DWORD *)&v489[4];
              v552 = *(_QWORD *)v489;
              v169 = v566;
              if ( *(_QWORD *)v489 != -1 )
              {
                sub_14088A470(&v505, v568);
                *(_QWORD *)&v489[48] = v508.m128i_i64[0];
                *(__m128i *)&v489[32] = _mm_loadu_si128(&v507);
                *(__m128i *)&v489[16] = v506;
                *(__m128i *)v489 = v505;
                v171 = v524.m128i_i64[0];
                v172 = v524.m128i_i64[1] & v157;
                _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v524.m128i_i64[0] + v172)));
                if ( !_EDX )
                {
                  _R8 = 16;
                  do
                  {
                    v172 = v524.m128i_i64[1] & (_R8 + v172);
                    _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v524.m128i_i64[0] + v172)));
                    _R8 += 16;
                  }
                  while ( !_EDX );
                }
                __asm { tzcnt   r8d, edx }
                _R8 = v524.m128i_i64[1] & (v172 + _R8);
                v175 = *(_BYTE *)(v524.m128i_i64[0] + _R8);
                if ( v175 >= 0 )
                {
                  _EDX = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v524.m128i_i64[0]));
                  __asm { tzcnt   r8d, edx }
                  v175 = *(_BYTE *)(v524.m128i_i64[0] + _R8);
                }
                v176 = v524.m128i_i64[1] & (_R8 - 16);
                v177 = v560;
                *(_BYTE *)(v524.m128i_i64[0] + _R8) = v560;
                *(_BYTE *)(v171 + v176 + 16) = v177;
                v100 = -80 * _R8;
                *(_QWORD *)(v171 + v100 - 80) = v552;
                *(_QWORD *)(v171 + v100 - 72) = v572;
                *(_QWORD *)(v171 + v100 - 64) = v169;
                v178 = *(_OWORD *)&v489[16];
                v179 = _mm_load_si128((const __m128i *)&v489[32]);
                *(_OWORD *)(v171 + v100 - 56) = *(_OWORD *)v489;
                *(_OWORD *)(v171 + v100 - 40) = v178;
                *(__m128i *)(v171 + v100 - 24) = v179;
                *(_QWORD *)(v171 + v100 - 8) = *(_QWORD *)&v489[48];
                _RAX = v175 & 1;
                v525 = _mm_sub_epi64(
                         _mm_load_si128(&v525),
                         (__m128i)_mm_shuffle_ps((__m128)_mm_cvtsi32_si128(_RAX), (__m128)xmmword_14196F130, 228));
              }
              goto LABEL_187;
            }
            v164 = v163 + v165 + 16;
            v163 += 16LL;
          }
          v552 = v100;
          v567 = v163;
          while ( 1 )
          {
            __asm { tzcnt   eax, r14d }
            v168 = -80 * (v100 & (v165 + _RAX));
            if ( *(_QWORD *)(v159 + v168 - 64) == v566 )
            {
              _RAX = sub_141923B40(*(_QWORD *)(v159 + v168 - 72), v572, v566);
              if ( !(_DWORD)_RAX )
                break;
            }
            _RAX = (unsigned int)(_R14D - 1);
            LOWORD(_RAX) = _R14D & (_R14D - 1);
            _R14D = _RAX;
            v100 = v552;
            v163 = v567;
            if ( !(_WORD)_RAX )
              goto LABEL_196;
          }
          v152 = v574;
          if ( *(_QWORD *)v489 )
            sub_140001660(v572, *(_QWORD *)v489, 1);
        }
        v575 = 1;
        v181 = sub_1416AE140(v100);
        if ( *(_BYTE *)(v181 + 16) == 1 )
        {
          _RCX = *(_QWORD *)v181;
          v187 = *(_QWORD *)(v181 + 8);
        }
        else
        {
          v575 = 1;
          v445 = v181;
          _RCX = sub_1416C5230(v183, v182, v184, v185);
          v181 = v445;
          *(_QWORD *)v445 = _RCX;
          *(_QWORD *)(v445 + 8) = v187;
          *(_BYTE *)(v445 + 16) = 1;
        }
        *(_QWORD *)v181 = _RCX + 1;
        v535 = v11;
        v534 = v12;
        v536[0] = _RCX;
        v536[1] = v187;
        v188 = v524.m128i_i64[0];
        v572 = v525.m128i_i64[1];
        v189 = (const __m128i *)(v524.m128i_i64[0] + 16);
        v190 = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v524.m128i_i64[0]));
        v191 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
        v192 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
        v193 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
        v194 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
        v195 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
LABEL_220:
        while ( 2 )
        {
          if ( v572 )
          {
            if ( !(_WORD)v190 )
            {
              do
              {
                v204 = _mm_load_si128(v189);
                v188 -= 1280;
                ++v189;
                v190 = _mm_movemask_epi8(v204) ^ 0xFFFF;
              }
              while ( !v190 );
            }
            _EAX = v190;
            __asm { tzcnt   ecx, eax }
            v190 &= v190 - 1;
            _RCX = -_RCX;
            v206 = v188 + 80 * _RCX;
            --v572;
            v566 = v206 - 80;
            v207 = v518;
            if ( v518 )
            {
              if ( !v518[3] )
                continue;
              v580 = 1;
              v203 = sub_1406CECD0(v518 + 4, v566);
              _RCX = v203 >> 57;
              v208 = *v207;
              v201 = v207[1];
              v209 = _mm_cvtsi32_si128(v203 >> 57);
              v210 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v209, v209), 0), 68);
              for ( j = 0; ; j += 16 )
              {
                v196 = v201 & v203;
                v197 = _mm_loadu_si128((const __m128i *)(v208 + v196));
                _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v197, v210));
                if ( _R15D )
                  break;
LABEL_218:
                _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v197, (__m128i)-1LL));
                if ( (_DWORD)_RCX )
                  goto LABEL_220;
                v203 = j + v196 + 16;
              }
              v199 = *(_QWORD *)(v206 - 64);
              v574 = v196;
              v568 = v201;
              v560 = j;
              while ( 1 )
              {
                __asm { tzcnt   ecx, r15d }
                _RCX = -(__int64)(v201 & (v196 + _RCX));
                if ( v199 == *(_QWORD *)(v208 + 24 * _RCX - 8)
                  && !(unsigned int)sub_141923B40(*(_QWORD *)(v206 - 72), *(_QWORD *)(v208 + 24 * _RCX - 16), v199) )
                {
                  break;
                }
                v200 = _R15D - 1;
                LOWORD(v200) = _R15D & (_R15D - 1);
                v110 = (_WORD)v200 == 0;
                _R15D = v200;
                v196 = v574;
                v201 = v568;
                j = v560;
                if ( v110 )
                  goto LABEL_218;
              }
            }
            if ( *(_QWORD *)(v206 - 40) == -1 )
              continue;
            v211 = *(_QWORD *)(v206 - 32);
            v212 = *(_QWORD *)(v206 - 24);
            v580 = 1;
            if ( !(unsigned __int8)sub_1416B1B00(v211, v212) )
              continue;
            v462[0] = v211;
            v462[1] = v212;
            v580 = 1;
            sub_1416C49D0(v489, v211, v212);
            if ( *(_DWORD *)v489 == 2 )
            {
              v213 = *(_QWORD *)&v489[8];
              *((_QWORD *)&v214 + 1) = 2;
LABEL_448:
              v505.m128i_i64[0] = *((_QWORD *)&v214 + 1);
              v505.m128i_i64[1] = v213;
              v510 = v550;
              v299 = _mm_load_si128(&v546);
              v300 = _mm_load_si128(&v548);
              v509 = _mm_load_si128(&v549);
              v508 = v300;
              v507 = v547;
              v506 = v299;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v468.m128i_i64[0] = (__int64)v462;
                v468.m128i_i64[1] = (__int64)sub_140191200;
                *(_QWORD *)v469 = &v505;
                *(_QWORD *)&v469[8] = sub_140D76130;
                *(_QWORD *)&v489[48] = 2;
                *(_QWORD *)&v489[56] = aCodexmateLibCo_12;
                *(_QWORD *)&v489[64] = 29;
                *(_QWORD *)&v489[80] = &unk_141A53794;
                *(_QWORD *)&v489[88] = &v468;
                *(_QWORD *)v489 = 0;
                *(_QWORD *)&v489[8] = aCodexmateLibCo_12;
                *(_OWORD *)&v489[16] = 0x1Du;
                *(_QWORD *)&v489[32] = aSrcCoreSession_6;
                *(_QWORD *)&v489[40] = 20;
                *(_QWORD *)&v489[72] = 0x13B00000001LL;
                sub_141503E20(&v551, v489);
              }
              v580 = 1;
              sub_14084C890(&v505);
              continue;
            }
            v215 = *(const __m128i **)&v489[56];
            _R15 = *(_QWORD *)&v489[48];
            v580 = 1;
            sub_1416DA570(v489);
            if ( *(_QWORD *)v489 == -1 )
            {
              v574 = _R15;
              v220 = *(_QWORD *)&v489[16];
              if ( *(__int64 *)&v489[16] < 0 )
              {
                v442 = 0;
                goto LABEL_618;
              }
              v568 = (__int64)v215;
              if ( *(_QWORD *)&v489[16] )
              {
                v560 = *(_QWORD *)&v489[8];
                nullsub_1(v218, v217);
                v221 = sub_140001650(v220, 1);
                if ( !v221 )
                {
                  v552 = v220;
                  v442 = 1;
LABEL_618:
                  v580 = 1;
                  sub_14196B2DB(v442, v552);
                }
                v222 = v221;
                sub_1419234B0(v221, v560, v220);
              }
              else
              {
                v222 = 1;
              }
              v539.m128i_i64[0] = v220;
              v552 = v222;
              v539.m128i_i64[1] = v222;
              v540 = (const __m128i *)v220;
              _R15 = v574;
            }
            else
            {
              v568 = (__int64)v215;
              v540 = *(const __m128i **)&v489[16];
              v539 = _mm_loadu_si128((const __m128i *)v489);
            }
            if ( dword_1422392B0 )
            {
              v579 = 1;
              sub_1419413A4(&byte_142239278);
            }
            LOBYTE(v218) = 1;
            if ( _InterlockedCompareExchange8(&byte_142239278, 1, 0) )
            {
              v579 = 1;
              sub_141969A30(&byte_142239278);
            }
            if ( 2 * *off_142240260 )
            {
              v579 = 1;
              v225 = sub_14196A710(v218, v217, v219);
              v223 = v225;
              LOBYTE(v223) = v225 ^ 1;
              if ( byte_142239279 )
                goto LABEL_244;
            }
            else
            {
              v223 = 0;
              if ( byte_142239279 )
              {
LABEL_244:
                if ( !(_BYTE)v223 )
                {
                  if ( 2 * *off_142240260 )
                  {
                    v579 = 1;
                    if ( !(unsigned __int8)sub_14196A710(v223, v217, v219) )
                      byte_142239279 = 1;
                  }
                }
                v224 = byte_142239278;
                byte_142239278 = 0;
                if ( v224 == 2 )
                  goto LABEL_265;
                goto LABEL_266;
              }
            }
            LODWORD(v560) = v223;
            if ( *((_QWORD *)&xmmword_142239290 + 1) )
            {
              v226 = sub_1406CECD0(&unk_1422392A0, &v539);
              v574 = _R15;
              v217 = qword_142239288;
              v227 = qword_142239280;
              v228 = _mm_cvtsi32_si128(v226 >> 57);
              v229 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v228, v228), 0), 68);
              v223 = v539.m128i_i64[1];
              v219 = v540;
              for ( k = nullptr; ; ++k )
              {
                v231 = v217 & v226;
                v232 = _mm_loadu_si128((const __m128i *)(v227 + v231));
                _R10 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v232, v229));
                if ( (_DWORD)_R10 )
                  break;
LABEL_256:
                _R15 = v574;
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v232, (__m128i)-1LL)) )
                  goto LABEL_262;
                v226 = (unsigned __int64)k[1].m128i_u64 + v231;
              }
              v537 = v231;
              v554 = v217;
              v545 = k;
              while ( 1 )
              {
                v553 = _R10;
                __asm { tzcnt   r10d, r10d }
                if ( v219 == *(const __m128i **)(v227 - 216 * (v217 & (v231 + _R10)) - 200) )
                {
                  v234 = v227 - 216 * (v217 & (v231 + _R10));
                  v235 = *(_QWORD *)(v234 - 208);
                  v567 = v223;
                  v236 = v227;
                  v573 = (unsigned __int64)v219;
                  v237 = sub_141923B40(v223, v235, v219);
                  v219 = (const __m128i *)v573;
                  v227 = v236;
                  v223 = v567;
                  if ( !v237 )
                    break;
                }
                v238 = v553 - 1;
                LOWORD(v238) = v553 & (v553 - 1);
                _R10 = v238;
                v231 = v537;
                v217 = v554;
                k = v545;
                if ( ((unsigned __int16)v553 & (unsigned __int16)(v553 - 1)) == 0 )
                  goto LABEL_256;
              }
              _R15 = v574;
              if ( *(_QWORD *)(v234 - 24) == v568 && *(_DWORD *)(v234 - 16) == 1 && *(_QWORD *)(v234 - 12) == v574 )
              {
                sub_1408F90A0(v489, v234 - 192);
                v214 = *(_OWORD *)v489;
                v574 = *(_QWORD *)&v489[16];
                v550 = *(__m128i *)&v489[88];
                v549 = *(__m128i *)&v489[72];
                v548 = *(__m128i *)&v489[56];
                v547 = *(__m128i *)&v489[40];
                v546 = *(__m128i *)&v489[24];
                v239 = _mm_loadu_si128(&v490);
                v240 = _mm_loadu_si128(&v492);
                v542 = _mm_loadu_si128(&v493);
                *(__m128i *)&v541[32] = v240;
                *(_OWORD *)&v541[16] = v491;
                *(__m128i *)v541 = v239;
                v579 = 1;
                sub_14002B980(&byte_142239278, (unsigned int)v560);
                goto LABEL_444;
              }
            }
LABEL_262:
            if ( !(_BYTE)v560 )
            {
              if ( 2 * *off_142240260 )
              {
                v579 = 1;
                if ( !(unsigned __int8)sub_14196A710(v223, v217, v219) )
                  byte_142239279 = 1;
              }
            }
            v241 = byte_142239278;
            byte_142239278 = 0;
            if ( v241 == 2 )
            {
LABEL_265:
              v579 = 1;
              WakeByAddressSingle(&byte_142239278);
            }
LABEL_266:
            *(_DWORD *)v489 = 0;
            *(_QWORD *)&v489[8] = 0;
            *(_DWORD *)&v489[16] = 7;
            *(_QWORD *)&v489[25] = 0;
            *(_QWORD *)&v489[20] = 0x100000000LL;
            v579 = 1;
            v242 = sub_1416BFE10(v489, v211, v212);
            v574 = v243;
            if ( (v242 & 1) != 0 )
              goto LABEL_443;
            nullsub_1(v244, v243);
            v245 = sub_140001650(0x2000, 1);
            v246 = v574;
            if ( !v245 )
              sub_14196B2DB(1, 0x2000);
            v502 = 0;
            v503 = 0;
            v500 = v245;
            v501 = 0x2000;
            hObject = (HANDLE)v574;
            v499.m128i_i64[0] = 0x400000;
            v499.m128i_i64[1] = 0x400000;
            *(_QWORD *)&v489[16] = -1;
            *(_QWORD *)&v489[40] = -1;
            *(_QWORD *)v489 = 0;
            *(_QWORD *)&v489[64] = -1;
            *(_QWORD *)&v489[88] = -1;
            v493.m128i_i32[2] = 0;
            v490.m128i_i64[1] = -1;
            v492.m128i_i64[0] = -1;
            v521 = 0;
            v522 = 1;
            *(_QWORD *)&v214 = 0;
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_269:
                v523 = 0;
                v546.m128i_i64[0] = (__int64)&v499;
                v546.m128i_i64[1] = 262145;
                v547.m128i_i64[0] = 262145;
                LOBYTE(v246) = 10;
                if ( (sub_140C439C0(&v546, v246, &v521) & 1) != 0 )
                {
LABEL_438:
                  v295 = v246;
                  if ( v521 )
                    sub_140001660(v522, v521, 1);
                  sub_140038640(v489);
                  if ( v501 )
                    sub_140001660(v500, v501, 1);
                  v574 = v295;
                  CloseHandle(hObject);
LABEL_443:
                  v543 = _mm_loadu_si128(&v509);
                  v296 = _mm_loadu_si128(&v506);
                  v297 = _mm_loadu_si128(&v507);
                  v542 = _mm_loadu_si128(&v508);
                  v546 = v505;
                  v547 = v296;
                  v548 = v297;
                  v549 = v542;
                  v550 = v543;
                  *((_QWORD *)&v214 + 1) = 2;
                  *(_QWORD *)&v214 = 2;
LABEL_444:
                  v298 = v539.m128i_i64[0];
                  if ( !v539.m128i_i64[0] )
                    goto LABEL_446;
LABEL_445:
                  sub_140001660(v539.m128i_i64[1], v298, 1);
                  goto LABEL_446;
                }
                if ( !v246 )
                  goto LABEL_470;
                if ( v523 <= 0x40000 )
                  break;
                if ( *(_BYTE *)(v522 + v523 - 1) != 10 )
                {
                  LOBYTE(v246) = 10;
                  if ( sub_140C44610(&v499, v246) == 1 )
                    goto LABEL_438;
                }
              }
              if ( v523 )
              {
                v247 = v522;
                if ( *(_BYTE *)(v522 + v523 - 1) != 10 && !v499.m128i_i64[1] )
                {
LABEL_470:
                  v574 = *(_QWORD *)&v489[16];
                  goto LABEL_471;
                }
              }
              else
              {
                if ( !v499.m128i_i64[1] )
                  goto LABEL_470;
                v247 = v522;
              }
              v546.m128i_i64[0] = v247;
              v546.m128i_i64[1] = v523;
              v547 = 0;
              vendor_json_parse_str_with_trailing_check(&v532, (__int128 *)v546.m128i_i8);
              if ( (_BYTE)v532 != 0xFF )
                break;
              sub_140032F30((char *)&v532 + 8);
            }
            v248 = *(double *)&v532;
            v498[1] = _mm_loadu_si128(&v533);
            v498[0] = v532;
            v249 = sub_1416724D0(aType_8, 4, v498);
            if ( !v249 || *(_BYTE *)v249 != 3 )
              goto LABEL_352;
            v250 = *(_QWORD *)(v249 + 16);
            v251 = *(_QWORD *)(v249 + 24);
            if ( v251 != 13 )
            {
              if ( v251 == 12 && !(*(_QWORD *)v250 ^ 0x5F6E6F6973736573LL | *(unsigned int *)(v250 + 8) ^ 0x6174656DLL) )
              {
                v252 = v214;
                if ( *(_QWORD *)&v489[64] == -1 )
                {
                  v253 = sub_14166BC00(v498, aPayloadCwd, 12);
                  *((_QWORD *)&v214 + 1) = -1;
                  if ( v253 && *(_BYTE *)v253 == 3 )
                  {
                    v560 = *(_QWORD *)(v253 + 16);
                    *(_QWORD *)&v214 = *(_QWORD *)(v253 + 24);
                    sub_1401E7560((unsigned int)&v546, v214, 0, 1, 1);
                    *((_QWORD *)&v214 + 1) = v546.m128i_i64[1];
                    if ( v546.m128i_i32[0] == 1 )
                      sub_14196B2DB(v546.m128i_i64[1], v547.m128i_i64[0]);
                    v574 = v547.m128i_i64[0];
                    if ( (_QWORD)v214 )
                      v248 = sub_1419234B0(v574, v560, v214);
                    else
                      *(_QWORD *)&v214 = 0;
                  }
                  *(_QWORD *)&v489[64] = *((_QWORD *)&v214 + 1);
                  *(_QWORD *)&v489[72] = v574;
                  *(_QWORD *)&v489[80] = v214;
                }
                v567 = 1;
                if ( !v252 )
                {
                  v256 = (_BYTE *)sub_14166BC00(v498, aPayloadTimesta, 18);
                  if ( v256 && *v256 == 3 && (sub_141436390(), v546.m128i_i32[0]) )
                  {
                    v257 = (v546.m128i_i32[0] >> 13) - 1;
                    v258 = 0;
                    if ( v546.m128i_i32[0] >> 13 <= 0 )
                    {
                      v259 = (1 - (v546.m128i_i32[0] >> 13)) / 0x190u + 1;
                      v257 += 400 * v259;
                      v258 = -146097 * v259;
                    }
                    v248 = (double)(v546.m128i_i32[1]
                                  + 86400
                                  * (((v257 / 100) >> 2)
                                   + ((1461 * v257) >> 2)
                                   + v258
                                   + (((unsigned __int32)v546.m128i_i32[0] >> 4) & 0x1FF)
                                   - v257 / 100
                                   - 719163));
                    v567 = 1;
                  }
                  else
                  {
                    v567 = 0;
                  }
                  *(_QWORD *)v489 = v567;
                  *(double *)&v489[8] = v248;
                }
                if ( *(_QWORD *)&v489[88] == -1 )
                {
                  v260 = sub_14166BC00(v498, aPayloadSourceS, 54);
                  *((_QWORD *)&v214 + 1) = -1;
                  if ( v260 && *(_BYTE *)v260 == 3 )
                  {
                    v574 = *(_QWORD *)(v260 + 16);
                    *(_QWORD *)&v214 = *(_QWORD *)(v260 + 24);
                    sub_1401E7560((unsigned int)&v546, v214, 0, 1, 1);
                    *((_QWORD *)&v214 + 1) = v546.m128i_i64[1];
                    if ( v546.m128i_i32[0] == 1 )
                      sub_14196B2DB(v546.m128i_i64[1], v547.m128i_i64[0]);
                    v252 = v547.m128i_i64[0];
                    if ( (_QWORD)v214 )
                      sub_1419234B0(v547.m128i_i64[0], v574, v214);
                    else
                      *(_QWORD *)&v214 = 0;
                  }
                  *(_QWORD *)&v489[88] = *((_QWORD *)&v214 + 1);
                  *(_QWORD *)&v489[96] = v252;
                  v490.m128i_i64[0] = v214;
                }
                v261 = sub_14166BC00(v498, aPayloadSourceS_0, 43);
                if ( !v261 )
                  goto LABEL_332;
                if ( *(_BYTE *)v261 != 2 )
                  goto LABEL_332;
                v262 = *(_QWORD *)(v261 + 8);
                if ( v262 == 2 )
                  goto LABEL_332;
                if ( (_DWORD)v262 == 1 )
                {
                  v263 = *(_QWORD *)(v261 + 16);
                  goto LABEL_333;
                }
                v263 = *(_QWORD *)(v261 + 16);
                if ( v263 < 0 )
LABEL_332:
                  LODWORD(v263) = v493.m128i_i32[2];
LABEL_333:
                v493.m128i_i32[2] = v263;
                if ( v490.m128i_i64[1] == -1 )
                {
                  v264 = sub_14166BC00(v498, aPayloadAgentNi, 23);
                  *((_QWORD *)&v214 + 1) = -1;
                  if ( v264 && *(_BYTE *)v264 == 3 )
                  {
                    v574 = *(_QWORD *)(v264 + 16);
                    *(_QWORD *)&v214 = *(_QWORD *)(v264 + 24);
                    sub_1401E7560((unsigned int)&v546, v214, 0, 1, 1);
                    *((_QWORD *)&v214 + 1) = v546.m128i_i64[1];
                    if ( v546.m128i_i32[0] == 1 )
                      sub_14196B2DB(v546.m128i_i64[1], v547.m128i_i64[0]);
                    v252 = v547.m128i_i64[0];
                    if ( (_QWORD)v214 )
                      sub_1419234B0(v547.m128i_i64[0], v574, v214);
                    else
                      *(_QWORD *)&v214 = 0;
                  }
                  v490.m128i_i64[1] = *((_QWORD *)&v214 + 1);
                  *(_QWORD *)&v491 = v252;
                  *((_QWORD *)&v491 + 1) = v214;
                }
                if ( v492.m128i_i64[0] == -1 )
                {
                  v265 = sub_14166BC00(v498, aPayloadAgentRo, 19);
                  *((_QWORD *)&v214 + 1) = -1;
                  if ( v265 && *(_BYTE *)v265 == 3 )
                  {
                    v574 = *(_QWORD *)(v265 + 16);
                    *(_QWORD *)&v214 = *(_QWORD *)(v265 + 24);
                    sub_1401E7560((unsigned int)&v546, v214, 0, 1, 1);
                    *((_QWORD *)&v214 + 1) = v546.m128i_i64[1];
                    if ( v546.m128i_i32[0] == 1 )
                      sub_14196B2DB(v546.m128i_i64[1], v547.m128i_i64[0]);
                    v252 = v547.m128i_i64[0];
                    if ( (_QWORD)v214 )
                      sub_1419234B0(v547.m128i_i64[0], v574, v214);
                    else
                      *(_QWORD *)&v214 = 0;
                  }
                  v492.m128i_i64[0] = *((_QWORD *)&v214 + 1);
                  v492.m128i_i64[1] = v252;
                  v493.m128i_i64[0] = v214;
                }
LABEL_351:
                *(_QWORD *)&v214 = v567;
              }
LABEL_352:
              if ( (_QWORD)v214 )
              {
                *((_QWORD *)&v214 + 1) = *(_QWORD *)&v489[16];
                if ( *(_QWORD *)&v489[16] != -1 && *(_QWORD *)&v489[40] != -1 )
                {
                  sub_140032FF0(v498);
                  v574 = *((_QWORD *)&v214 + 1);
                  *(_QWORD *)&v214 = 1;
LABEL_471:
                  *((_QWORD *)&v214 + 1) = *(_QWORD *)&v489[8];
                  sub_1419234B0(&v505, &v489[24], 144);
                  if ( v521 )
                    sub_140001660(v522, v521, 1);
                  if ( v501 )
                    sub_140001660(v500, v501, 1);
                  CloseHandle(hObject);
                  v543 = v509;
                  v542 = v508;
                  *(__m128i *)&v541[32] = v507;
                  *(__m128i *)&v541[16] = v506;
                  *(__m128i *)v541 = v505;
                  v475 = v513;
                  v474 = v512;
                  v473 = v511;
                  v472 = v510;
                  v471 = v509;
                  v327 = _mm_load_si128((const __m128i *)v541);
                  v328 = _mm_load_si128((const __m128i *)&v541[32]);
                  v470 = _mm_load_si128(&v542);
                  *(__m128i *)&v469[40] = v328;
                  *(__m128i *)&v469[24] = v506;
                  *(__m128i *)&v469[8] = v327;
                  v468 = (__m128i)v214;
                  *(_QWORD *)v469 = v574;
                  if ( dword_1422392B0 )
                  {
                    v576 = 1;
                    sub_1419413A4(&byte_142239278);
                  }
                  LOBYTE(v325) = 1;
                  if ( _InterlockedCompareExchange8(&byte_142239278, 1, 0) )
                  {
                    v576 = 1;
                    sub_141969A30(&byte_142239278);
                  }
                  if ( 2 * *off_142240260 )
                  {
                    v576 = 1;
                    v336 = sub_14196A710(v325, v324, v326);
                    v329 = v336;
                    LOBYTE(v329) = v336 ^ 1;
                    if ( !byte_142239279 )
                      goto LABEL_494;
LABEL_481:
                    if ( !(_BYTE)v329 )
                    {
                      if ( 2 * *off_142240260 )
                      {
                        v576 = 1;
                        if ( !(unsigned __int8)sub_14196A710(v329, v324, v326) )
                          byte_142239279 = 1;
                      }
                    }
                    v330 = byte_142239278;
                    byte_142239278 = 0;
                    if ( v330 == 2 )
                    {
                      v576 = 1;
                      WakeByAddressSingle(&byte_142239278);
                    }
                    v550 = v471;
                    v549 = v470;
                    v548 = *(__m128i *)&v469[40];
                    v547 = *(__m128i *)&v469[24];
                    v546 = *(__m128i *)&v469[8];
                    v331 = _mm_loadu_si128(&v474);
                    v332 = _mm_loadu_si128(&v475);
                    *(__m128i *)v541 = _mm_loadu_si128(&v472);
                    *(_OWORD *)&v541[16] = v473;
                    *(__m128i *)&v541[32] = v331;
                    v542 = v332;
                    v298 = v539.m128i_i64[0];
                    if ( !v539.m128i_i64[0] )
                      goto LABEL_446;
                    goto LABEL_445;
                  }
                  v329 = 0;
                  if ( byte_142239279 )
                    goto LABEL_481;
LABEL_494:
                  LODWORD(v560) = v329;
                  if ( *((_QWORD *)&xmmword_142239290 + 1) >= 0x1000u )
                  {
                    v561 = 1;
                    sub_1401755B0(&qword_142239280);
                  }
                  *(_QWORD *)&v541[16] = v540;
                  *(__m128i *)v541 = _mm_load_si128(&v539);
                  v557 = 1;
                  sub_1408F90A0(v489, &v468);
                  v515 = v568;
                  v516 = 1;
                  v517 = _R15;
                  sub_1419234B0(&v505, v489, 168);
                  v338 = sub_1406CECD0(&unk_1422392A0, v541);
                  if ( !(_QWORD)xmmword_142239290 )
                  {
                    LOBYTE(v337) = 1;
                    sub_1419306C0(&qword_142239280, 1, &unk_1422392A0, v337);
                  }
                  v339 = (const __m128i *)qword_142239280;
                  v340 = qword_142239288;
                  v553 = v338 >> 57;
                  v341 = _mm_cvtsi32_si128(v338 >> 57);
                  v342 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v341, v341), 0), 68);
                  v568 = *(_QWORD *)&v541[8];
                  v343 = *(_QWORD *)&v541[16];
                  _RAX = 0;
                  v345 = nullptr;
                  v573 = qword_142239288;
                  while ( 2 )
                  {
                    v346 = v340 & v338;
                    v347 = _mm_loadu_si128((const __m128i *)((char *)v339 + v346));
                    _R9 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v347, v342));
                    if ( !(_DWORD)_R9 )
                    {
LABEL_504:
                      _R9 = v478;
                      if ( _RAX == 1 )
                        goto LABEL_507;
                      if ( _mm_movemask_epi8(v347) )
                      {
                        __asm { tzcnt   r9d, eax }
                        _R9 = v340 & (v346 + _R9);
LABEL_507:
                        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v347, (__m128i)-1LL)) )
                        {
                          _R15 = _R9;
                          v360 = v339->m128i_i8[_R9];
                          v568 = (__int64)v339;
                          if ( v360 >= 0 )
                          {
                            _EAX = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v568));
                            __asm { tzcnt   r15d, eax }
                            v360 = *(_BYTE *)(v568 + _R15);
                          }
                          *(_QWORD *)&v489[16] = v540;
                          *(__m128i *)v489 = v539;
                          sub_1419234B0(&v489[24], &v505, 192);
                          v361 = v573 & (_R15 - 16);
                          v362 = v553;
                          v363 = v568;
                          *(_BYTE *)(v568 + _R15) = v553;
                          *(_BYTE *)(v363 + v361 + 16) = v362;
                          xmmword_142239290 = (__int128)_mm_sub_epi64(
                                                          _mm_loadu_si128((const __m128i *)&xmmword_142239290),
                                                          (__m128i)_mm_shuffle_ps(
                                                                     (__m128)_mm_cvtsi32_si128(v360 & 1),
                                                                     (__m128)xmmword_14196F130,
                                                                     228));
                          _R15 = -_R15;
                          sub_1419234B0(v363 + 216 * _R15 - 216, v489, 216);
                          goto LABEL_518;
                        }
                        v478 = _R9;
                        v354 = 1;
                      }
                      else
                      {
                        v354 = 0;
                      }
                      v338 = (unsigned __int64)v345[1].m128i_u64 + v346;
                      ++v345;
                      _RAX = v354;
                      continue;
                    }
                    break;
                  }
                  v567 = v214;
                  v554 = v346;
                  v545 = v345;
                  v477 = _RAX;
                  while ( 1 )
                  {
                    v537 = _R9;
                    __asm { tzcnt   eax, r9d }
                    if ( v343 == *((_QWORD *)&v339[-12] - 27 * (v340 & (v346 + _RAX)) - 1) )
                    {
                      v349 = &v339->m128i_i8[-216 * (v340 & (v346 + _RAX))];
                      _R15 = (unsigned __int64)v339;
                      v350 = sub_141923B40(v568, *((_QWORD *)v349 - 26), v343);
                      v339 = (const __m128i *)_R15;
                      if ( !v350 )
                        break;
                    }
                    v351 = v537 - 1;
                    LOWORD(v351) = v537 & (v537 - 1);
                    _R9 = v351;
                    *(_QWORD *)&v214 = v567;
                    v340 = v573;
                    v346 = v554;
                    v345 = v545;
                    _RAX = v477;
                    if ( ((unsigned __int16)v537 & (unsigned __int16)(v537 - 1)) == 0 )
                      goto LABEL_504;
                  }
                  v355 = v349 - 192;
                  sub_1419234B0(v489, v355, 192);
                  sub_1419234B0(v355, &v505, 192);
                  v358 = *(_QWORD *)v541;
                  if ( *(_QWORD *)v541 )
                    sub_140001660(v568, *(_QWORD *)v541, 1);
                  *(_QWORD *)&v214 = v567;
                  if ( *(_QWORD *)v489 != 2 )
                    sub_140038640(v489);
LABEL_518:
                  if ( !(_BYTE)v560 )
                  {
                    if ( 2 * *off_142240260 )
                    {
                      v576 = 0;
                      if ( !(unsigned __int8)sub_14196A710(v356, v358, v357) )
                        byte_142239279 = 1;
                    }
                  }
                  v364 = byte_142239278;
                  byte_142239278 = 0;
                  if ( v364 == 2 )
                  {
                    v576 = 0;
                    WakeByAddressSingle(&byte_142239278);
                  }
                  v550 = v471;
                  v549 = v470;
                  v548 = *(__m128i *)&v469[40];
                  v547 = *(__m128i *)&v469[24];
                  v546 = *(__m128i *)&v469[8];
                  v365 = _mm_loadu_si128(&v474);
                  v366 = _mm_loadu_si128(&v475);
                  *(__m128i *)v541 = _mm_loadu_si128(&v472);
                  *(_OWORD *)&v541[16] = v473;
                  *(__m128i *)&v541[32] = v365;
                  v542 = v366;
LABEL_446:
                  if ( (_QWORD)v214 == 2 )
                  {
                    v213 = v574;
                    goto LABEL_448;
                  }
                  v449 = v214;
                  v450 = v574;
                  v455 = v550;
                  v454 = v549;
                  v453 = v548;
                  v452 = v547;
                  v451 = v546;
                  v301 = _mm_load_si128((const __m128i *)&v541[32]);
                  v459 = _mm_load_si128(&v542);
                  v458 = v301;
                  v457 = *(_OWORD *)&v541[16];
                  v456 = *(_OWORD *)v541;
                  v556 = 1;
                  sub_1416DB410(&v505, v566);
                  v302 = sub_1406CECD0(v536, &v505);
                  if ( !v535.m128i_i64[0] )
                  {
                    LOBYTE(v303) = 1;
                    sub_14192FF60(&v534, 1, v536, v303);
                  }
                  v304 = v534.m128i_i64[1];
                  v305 = (const __m128i *)v534.m128i_i64[0];
                  v306 = v302 >> 57;
                  v307 = _mm_cvtsi32_si128(v302 >> 57);
                  v308 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v307, v307), 0), 68);
                  v566 = v505.m128i_i64[1];
                  v309 = v506.m128i_i64[0];
                  _RAX = 0;
                  v311 = nullptr;
                  v574 = v534.m128i_i64[1];
LABEL_454:
                  v312 = v304 & v302;
                  v313 = _mm_loadu_si128((const __m128i *)((char *)v305 + v312));
                  _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v313, v308));
                  if ( !(_DWORD)_R11 )
                  {
LABEL_459:
                    if ( _RAX == 1 )
                      goto LABEL_462;
                    if ( _mm_movemask_epi8(v313) )
                    {
                      __asm { tzcnt   r15d, eax }
                      _R15 = v304 & (v312 + _R15);
LABEL_462:
                      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v313, (__m128i)-1LL)) )
                      {
                        v333 = v305->m128i_i8[_R15];
                        v334 = v305;
                        if ( v333 >= 0 )
                        {
                          _EAX = _mm_movemask_epi8(_mm_load_si128(v305));
                          __asm { tzcnt   r15d, eax }
                          v333 = v305->m128i_i8[_R15];
                        }
                        *(_QWORD *)&v489[16] = v506.m128i_i64[0];
                        *(__m128i *)v489 = v505;
                        sub_1419234B0(&v489[24], &v449, 168);
                        v335 = v574 & (_R15 - 16);
                        v334->m128i_i8[_R15] = v306;
                        v334[1].m128i_i8[v335] = v306;
                        v535 = _mm_sub_epi64(
                                 _mm_load_si128(&v535),
                                 (__m128i)_mm_shuffle_ps(
                                            (__m128)_mm_cvtsi32_si128(v333 & 1),
                                            (__m128)xmmword_14196F130,
                                            228));
                        sub_1419234B0(&v334[-12 * _R15 - 12], v489, 192);
                        continue;
                      }
                      v321 = v309;
                      v322 = 1;
                    }
                    else
                    {
                      v321 = v309;
                      v322 = 0;
                    }
                    v302 = (unsigned __int64)v311[1].m128i_u64 + v312;
                    ++v311;
                    v309 = v321;
                    _RAX = v322;
                    goto LABEL_454;
                  }
                  v560 = v306;
                  v567 = _R15;
                  v573 = (unsigned __int64)v311;
                  v553 = _RAX;
                  while ( 1 )
                  {
                    v568 = _R11;
                    __asm { tzcnt   eax, r11d }
                    if ( v309 == v305[-12 * (v304 & (v312 + _RAX)) - 11].m128i_i64[0] )
                    {
                      v315 = &v305[-12 * (v304 & (v312 + _RAX))];
                      v316 = v305;
                      v317 = v309;
                      v318 = sub_141923B40(v566, v315[-12].m128i_i64[1], v309);
                      v309 = v317;
                      v305 = v316;
                      if ( !v318 )
                        break;
                    }
                    v319 = v568 - 1;
                    LOWORD(v319) = v568 & (v568 - 1);
                    _R11 = v319;
                    v306 = v560;
                    v304 = v574;
                    _R15 = v567;
                    v311 = (const __m128i *)v573;
                    _RAX = v553;
                    if ( ((unsigned __int16)v568 & (unsigned __int16)(v568 - 1)) == 0 )
                      goto LABEL_459;
                  }
                  v323 = &v315[-11].m128i_i8[8];
                  sub_1419234B0(v489, v323, 168);
                  sub_1419234B0(v323, &v449, 168);
                  if ( v505.m128i_i64[0] )
                    sub_140001660(v566, v505.m128i_i64[0], 1);
                  if ( *(_QWORD *)v489 != 2 )
                    sub_140038640(v489);
                  continue;
                }
              }
              sub_140032FF0(v498);
              goto LABEL_269;
            }
            if ( *(_QWORD *)v250 ^ 0x65736E6F70736572LL | *(_QWORD *)(v250 + 5) ^ 0x6D6574695F65736ELL )
              goto LABEL_352;
            v567 = v214;
            v574 = _R15;
            v560 = *(_QWORD *)&v489[16];
            if ( *(_QWORD *)&v489[16] != -1 && *(_QWORD *)&v489[40] != -1 )
              goto LABEL_297;
            v537 = *(_QWORD *)&v489[40];
            v254 = (void *)sub_1416724D0(aPayload, 7, v498);
            if ( !v254 )
              v254 = &unk_141A532B0;
            v255 = sub_1416724D0(aType_8, 4, v254);
            if ( v255
              && *(_BYTE *)v255 == 3
              && *(_QWORD *)(v255 + 24) == 7
              && !(**(_DWORD **)(v255 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v255 + 16) + 3LL) ^ 0x65676173) )
            {
              v266 = sub_1416724D0(aContent_5, 7, v254);
              if ( v266 && *(_BYTE *)v266 == 4 )
              {
                sub_1401C07A0(&v546, *(_QWORD *)(v266 + 16), *(_QWORD *)(v266 + 24));
                v487 = v546;
                v267 = v547.m128i_i64[0];
                v488 = v547.m128i_i64[0];
                v554 = v546.m128i_i64[1];
              }
              else
              {
                v487.m128i_i64[0] = 0;
                v487.m128i_i64[1] = 8;
                v488 = 0;
                v554 = 8;
                v267 = 0;
              }
              *(_QWORD *)&v532 = 0;
              *((_QWORD *)&v532 + 1) = 8;
              v533.m128i_i64[0] = 0;
              v268 = v554;
              v269 = v554 + 32 * v267;
              while ( v268 != v269 )
              {
                v272 = sub_1416724D0(aText_8, 4, v268);
                v268 += 32;
                if ( v272 && *(_BYTE *)v272 == 3 )
                {
                  v273 = *(_QWORD *)(v272 + 16);
                  v274 = *(_QWORD *)(v272 + 24);
                  sub_1401E7560((unsigned int)&v546, v274, 0, 1, 1);
                  v553 = v546.m128i_i64[1];
                  if ( v546.m128i_i32[0] == 1 )
                    sub_14196B2DB(v553, v547.m128i_i64[0]);
                  v573 = v547.m128i_i64[0];
                  if ( v274 )
                    sub_1419234B0(v573, v273, v274);
                  v275 = v533.m128i_i64[0];
                  if ( v533.m128i_i64[0] == (_QWORD)v532 )
                    sub_141939F90(&v532);
                  v270 = *((_QWORD *)&v532 + 1);
                  v271 = 3 * v275;
                  *(_QWORD *)(*((_QWORD *)&v532 + 1) + 8 * v271) = v553;
                  *(_QWORD *)(v270 + 8 * v271 + 8) = v573;
                  *(_QWORD *)(v270 + 8 * v271 + 16) = v274;
                  v533.m128i_i64[0] = v275 + 1;
                }
              }
              v546.m128i_i64[0] = *((_QWORD *)&v532 + 1);
              v546.m128i_i64[1] = *((_QWORD *)&v532 + 1);
              v547.m128i_i64[0] = v532;
              v547.m128i_i64[1] = *((_QWORD *)&v532 + 1) + 24 * v533.m128i_i64[0];
              if ( v533.m128i_i64[0] )
              {
                v546.m128i_i64[1] = *((_QWORD *)&v532 + 1) + 24LL;
                v553 = **((_QWORD **)&v532 + 1);
                v531 = *(_QWORD *)(*((_QWORD *)&v532 + 1) + 8LL);
                v479 = *(_QWORD *)(*((_QWORD *)&v532 + 1) + 16LL);
              }
              else
              {
                v553 = -1;
              }
              sub_1402348C0(&v487);
              if ( v487.m128i_i64[0] )
                sub_140001660(v554, 32 * v487.m128i_i64[0], 8);
              sub_1401A5C50(&v546);
              if ( v553 != -1 )
              {
                v276 = sub_14166BC00(v498, aPayloadRole, 13);
                v277 = 1;
                if ( v276 && *(_BYTE *)v276 == 3 )
                {
                  v277 = *(_QWORD *)(v276 + 16);
                  v278 = *(_QWORD *)(v276 + 24) == 4;
                }
                else
                {
                  v278 = 0;
                }
                v279 = sub_1408FEA60(v531, v479);
                v281 = v280;
                if ( !v280 )
                  goto LABEL_413;
                v282 = v279;
                sub_1401E7560((unsigned int)&v546, v280, 0, 1, 1);
                v554 = v546.m128i_i64[1];
                if ( v546.m128i_i32[0] == 1 )
                  sub_14196B2DB(v554, v547.m128i_i64[0]);
                v573 = v547.m128i_i64[0];
                sub_1419234B0(v547.m128i_i64[0], v282, v281);
                if ( v281 < 8 )
                {
                  v283 = 0;
                  goto LABEL_393;
                }
                if ( v281 < 0x20 )
                {
                  v283 = 0;
LABEL_390:
                  v290 = v283;
                  v283 = v281 & 0xFFFFFFFFFFFFFFF8uLL;
                  do
                  {
                    v291 = _mm_loadl_epi64((const __m128i *)(v573 + v290));
                    v292 = _mm_add_epi8(v291, (__m128i)xmmword_141A045D0);
                    *(_QWORD *)(v573 + v290) = _mm_or_si128(
                                                 _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v292, v191), v292), v192),
                                                 v291).m128i_u64[0];
                    v290 += 8LL;
                  }
                  while ( v283 != v290 );
                  goto LABEL_394;
                }
                v283 = v281 & 0xFFFFFFFFFFFFFFE0uLL;
                v284 = 0;
                do
                {
                  v285 = v573;
                  v286 = _mm_loadu_si128((const __m128i *)(v573 + v284));
                  v287 = _mm_loadu_si128((const __m128i *)(v573 + v284 + 16));
                  v288 = _mm_add_epi8(v286, v193);
                  v289 = _mm_add_epi8(v287, v193);
                  *(__m128i *)(v573 + v284) = _mm_or_si128(
                                                _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v288, v194), v288), v195),
                                                v286);
                  *(__m128i *)(v285 + v284 + 16) = _mm_or_si128(
                                                     _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v289, v194), v289), v195),
                                                     v287);
                  v284 += 32;
                }
                while ( v283 != v284 );
                if ( v281 != v283 )
                {
                  if ( (v281 & 0x18) != 0 )
                    goto LABEL_390;
                  do
                  {
LABEL_393:
                    *(_BYTE *)(v573 + v283) |= 32 * ((unsigned __int8)(*(_BYTE *)(v573 + v283) - 65) < 0x1Au);
                    ++v283;
LABEL_394:
                    ;
                  }
                  while ( v281 != v283 );
                }
                if ( v281 >= 0x18 )
                {
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v573 + 16)), (__m128i)xmmword_141A504D0),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v573), (__m128i)xmmword_141A504E0))) == 0xFFFF )
                    goto LABEL_412;
                }
                else if ( v281 < 0xE )
                {
                  if ( v281 != 13 )
                  {
                    if ( v281 < 0xB )
                      goto LABEL_411;
                    goto LABEL_410;
                  }
LABEL_404:
                  if ( !(*(_QWORD *)v573 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v573 + 5) ^ 0x3E747865746E6F63LL) )
                    goto LABEL_412;
                  goto LABEL_410;
                }
                if ( !(*(_QWORD *)v573 ^ 0x63757274736E693CLL | *(_QWORD *)(v573 + 6) ^ 0x3E736E6F69746375LL) )
                  goto LABEL_412;
                if ( v281 >= 0x1A )
                {
                  if ( _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v573 + 10)), (__m128i)xmmword_141A504F0),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v573), (__m128i)xmmword_141A50500))) == 0xFFFF )
                    goto LABEL_412;
                }
                else if ( v281 < 0x15 )
                {
                  goto LABEL_404;
                }
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v573 + 5)), (__m128i)xmmword_141A50510),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v573), (__m128i)xmmword_141A50520))) == 0xFFFF
                  || !(*(_QWORD *)v573 ^ 0x6E6F632D7070613CLL | *(_QWORD *)(v573 + 5) ^ 0x3E747865746E6F63LL)
                  || _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v573 + 5)), (__m128i)xmmword_141A50530),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v573), (__m128i)xmmword_141A50540))) == 0xFFFF )
                {
LABEL_412:
                  sub_140001660(v573, v554, 1);
LABEL_413:
                  if ( v553 )
                    sub_140001660(v531, v553, 1);
LABEL_297:
                  sub_140032FF0(v498);
                  _R15 = v574;
                  *(_QWORD *)&v214 = v567;
                  goto LABEL_269;
                }
LABEL_410:
                if ( !(*(_QWORD *)v573 ^ 0x73746E6567612023LL | *(_QWORD *)(v573 + 3) ^ 0x646D2E73746E6567LL) )
                  goto LABEL_412;
LABEL_411:
                if ( (unsigned __int8)sub_1408FDB70(aRoleCommunicat, 31, v573, v281) )
                  goto LABEL_412;
                LOBYTE(v545) = sub_1408FDB70(aFilesystemSand, 29, v573, v281);
                sub_140001660(v573, v554, 1);
                if ( (_BYTE)v545 )
                  goto LABEL_413;
                v546.m128i_i64[0] = 0;
                v546.m128i_i64[1] = v281;
                v547.m128i_i64[0] = v282;
                v547.m128i_i64[1] = v281;
                v548.m128i_i64[0] = v282;
                v548.m128i_i64[1] = v282 + v281;
                v549.m128i_i64[0] = 0;
                v549.m128i_i16[4] = 1;
                sub_1402174D0(&v532, &v546);
                v573 = *((_QWORD *)&v532 + 1);
                sub_1406C5A40((unsigned int)&v546, DWORD2(v532), v533.m128i_i32[0], (unsigned int)&unk_141A538C1, 1);
                v554 = v546.m128i_i64[1];
                v545 = (const __m128i *)v546.m128i_i64[0];
                v293 = v547.m128i_i64[0];
                if ( (_QWORD)v532 )
                  sub_140001660(v573, 16 * v532, 8);
                if ( v293 )
                {
                  if ( v293 >= 0x20 )
                    v294 = sub_1416E23D0(v554, v293);
                  else
                    v294 = sub_1416E29F0(v554, v293);
                  if ( v294 >= 0xFA1 )
                  {
                    sub_140876990(&v546, v554, v293, 4000);
                    v538 = v546.m128i_i64[1];
                    v573 = v546.m128i_i64[0];
                    v520 = v547.m128i_i64[0];
                    goto LABEL_425;
                  }
                  v538 = v554;
                  v520 = v293;
                  v573 = (unsigned __int64)v545;
                }
                else
                {
                  v573 = -1;
LABEL_425:
                  if ( v545 )
                    sub_140001660(v554, v545, 1);
                }
                if ( v573 == -1 )
                  goto LABEL_413;
                if ( v278 && v560 == -1 && *(_DWORD *)v277 == 1919251317 )
                {
                  sub_140876990(&v546, v538, v520, 88);
                  *(_QWORD *)&v489[32] = v547.m128i_i64[0];
                  *(__m128i *)&v489[16] = _mm_loadu_si128(&v546);
                }
                if ( v537 == -1 )
                {
                  sub_140876990(&v546, v538, v520, 160);
                  *(_QWORD *)&v489[56] = v547.m128i_i64[0];
                  *(__m128i *)&v489[40] = _mm_loadu_si128(&v546);
                }
                if ( v573 )
                  sub_140001660(v538, v573, 1);
                if ( v553 )
                  sub_140001660(v531, v553, 1);
              }
            }
            _R15 = v574;
            goto LABEL_351;
          }
          break;
        }
        v369 = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v524.m128i_i64[0]));
        *(_QWORD *)v489 = v524.m128i_i64[0];
        *(_QWORD *)&v489[8] = v524.m128i_i64[0] + 16;
        *(_QWORD *)&v489[16] = v524.m128i_i64[0] + v524.m128i_i64[1] + 1;
        *(_WORD *)&v489[24] = ~v369;
        *(_QWORD *)&v489[32] = v525.m128i_i64[1];
        *(_QWORD *)&v489[40] = &v518;
        *(_QWORD *)&v489[48] = &v534;
        *(_QWORD *)&v489[56] = &v480;
        v580 = 1;
        sub_1401BD920(&v468, (__int64)v544, (__int128 *)v489);
        *(_QWORD *)v541 = 0;
        *(_QWORD *)&v541[8] = 8;
        *(_QWORD *)&v541[16] = 0;
        v371 = v524.m128i_i64[0];
        v574 = v525.m128i_i64[1];
        v372 = (const __m128i *)(v524.m128i_i64[0] + 16);
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v524.m128i_i64[0]));
        v560 = v484.m128i_i64[0];
        v567 = v485.m128i_i64[0];
LABEL_531:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( !v574 )
            {
              v433 = *(_QWORD *)&v541[8];
              *(_QWORD *)v489 = &v551;
              if ( *(_QWORD *)&v541[16] >= 2u )
              {
                if ( *(_QWORD *)&v541[16] >= 0x15u )
                {
                  sub_1401B7660(*(__int64 *)&v541[8], *(unsigned __int64 *)&v541[16], (__int64)v489);
                }
                else
                {
                  v446 = 536LL * *(_QWORD *)&v541[16];
                  v447 = 536;
                  do
                  {
                    sub_140CBC9F0(v433, v433 + v447);
                    v447 += 536;
                  }
                  while ( v446 != v447 );
                }
              }
              *(_QWORD *)&v489[16] = *(_QWORD *)&v541[16];
              v75 = _mm_loadu_si128((const __m128i *)v541);
              *(__m128i *)v489 = v75;
              *(_QWORD *)&v489[40] = v528;
              *(_OWORD *)&v489[24] = v527;
              v434 = v529;
              *(__m128i *)(v529 + 8) = v75;
              *(_OWORD *)(v434 + 40) = *(_OWORD *)&v489[32];
              *(_OWORD *)(v434 + 24) = *(_OWORD *)&v489[16];
              *(_QWORD *)v434 = -1;
              v580 = 0;
              sub_14018F030(&v468);
              v575 = 0;
              sub_14018FBA0(&v534);
              v558 = 0;
              sub_14018F950(&v524);
              if ( (unsigned __int64)(v530 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                *(double *)v75.m128i_i64 = sub_140001660(v519, v530, 1);
              v578 = 0;
              v577 = 0;
              sub_14018F700(&v483);
              v570 = 0;
              sub_14018EF10(&v466);
              v571 = 0;
              sub_14018FA70(&v480);
              if ( v494 )
                *(double *)v75.m128i_i64 = sub_140001660(v495, v494, 1);
              return *(double *)v75.m128i_i64;
            }
            if ( !(_WORD)_R13D )
            {
              do
              {
                v374 = _mm_load_si128(v372);
                v371 -= 1280;
                ++v372;
                _R13D = _mm_movemask_epi8(v374) ^ 0xFFFF;
              }
              while ( !_R13D );
            }
            __asm { tzcnt   ecx, r13d }
            _R13D &= _R13D - 1;
            v375 = -80LL * _RCX;
            --v574;
            _RCX = *(_QWORD *)(v371 - 80 * _RCX - 72);
            v572 = _RCX;
            v566 = v375;
            v376 = *(_QWORD *)(v371 + v375 - 64);
            v377 = v518;
            if ( v518 )
            {
              if ( !v518[3] )
                continue;
              v378 = sub_1406D0E00(v518 + 4, v572, *(_QWORD *)(v371 + v375 - 64));
              _RCX = v378 >> 57;
              v379 = *v377;
              v380 = v377[1];
              v381 = _mm_cvtsi32_si128(v378 >> 57);
              v382 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v381, v381), 0), 68);
              for ( m = 0; ; m += 16 )
              {
                v384 = (const __m128i *)(v380 & v378);
                v385 = _mm_loadu_si128((const __m128i *)((char *)v384 + v379));
                _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v385, v382));
                if ( _EBX )
                  break;
LABEL_542:
                _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v385, (__m128i)-1LL));
                if ( (_DWORD)_RCX )
                  goto LABEL_531;
                v378 = (unsigned __int64)v384[1].m128i_u64 + m;
              }
              v568 = (__int64)v384;
              v552 = m;
              while ( 1 )
              {
                __asm { tzcnt   ecx, ebx }
                _RCX = -(__int64)(v380 & ((unsigned __int64)v384->m128i_u64 + _RCX));
                if ( v376 == *(_QWORD *)(v379 + 24 * _RCX - 8)
                  && !(unsigned int)sub_141923B40(v572, *(_QWORD *)(v379 + 24 * _RCX - 16), v376) )
                {
                  break;
                }
                v387 = _EBX - 1;
                LOWORD(v387) = _EBX & (_EBX - 1);
                v110 = (_WORD)v387 == 0;
                _EBX = v387;
                v384 = (const __m128i *)v568;
                m = v552;
                if ( v110 )
                  goto LABEL_542;
              }
            }
            break;
          }
          if ( v535.m128i_i64[1] )
          {
            v388 = sub_1406D0E00(v536, v572, v376);
            v389 = v534.m128i_i64[1];
            v390 = v534.m128i_i64[0];
            v391 = _mm_cvtsi32_si128(v388 >> 57);
            v392 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v391, v391), 0), 68);
            for ( n = nullptr; ; n += 2 )
            {
              v394 = v389 & v388;
              v395 = _mm_loadu_si128((const __m128i *)(v390 + v394));
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v395, v392));
              if ( (_DWORD)_RAX )
                break;
LABEL_551:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v395, (__m128i)-1LL)) )
                goto LABEL_553;
              v388 = (unsigned __int64)n + v394 + 16;
            }
            v552 = v389;
            v544 = n;
            while ( 1 )
            {
              v568 = _RAX;
              __asm { tzcnt   eax, eax }
              v397 = v376;
              if ( v376 == *(_QWORD *)(v390 - 192 * (v389 & (v394 + _RAX)) - 176) )
              {
                v398 = v390 - 192 * (v389 & (v394 + _RAX));
                v399 = v390;
                v400 = sub_141923B40(v572, *(_QWORD *)(v398 - 184), v397);
                v390 = v399;
                if ( !v400 )
                  break;
              }
              _RAX = (unsigned int)(v568 - 1);
              LOWORD(_RAX) = v568 & (v568 - 1);
              v376 = v397;
              v389 = v552;
              n = v544;
              if ( !(_WORD)_RAX )
                goto LABEL_551;
            }
            sub_1408F90A0(v489, v398 - 168);
            sub_1419234B0(&v505, v489, 168);
          }
          else
          {
LABEL_553:
            v506.m128i_i64[0] = -1;
            v507.m128i_i64[1] = -1;
            v505.m128i_i64[0] = 0;
            v509.m128i_i64[0] = -1;
            v510.m128i_i64[1] = -1;
            v514 = 0;
            v512.m128i_i64[0] = -1;
            v513.m128i_i64[1] = -1;
          }
          v401 = *(_QWORD *)(v371 + v566 - 72);
          v402 = *(const __m128i **)(v371 + v566 - 64);
          v572 = v401;
          v568 = (__int64)v402;
          v552 = v371 + v566;
          if ( v481.m128i_i64[1] )
          {
            v403 = sub_1406D0E00(&v482, v401, v402);
            v402 = (const __m128i *)v568;
            v401 = v572;
            _RCX = v403 >> 57;
            v405 = v480;
            v406 = _mm_cvtsi32_si128(v403 >> 57);
            v407 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v406, v406), 0), 68);
            for ( ii = nullptr; ; ++ii )
            {
              v409 = (_QWORD *)(v405.m128i_i64[1] & v403);
              v410 = _mm_loadu_si128((const __m128i *)((char *)v409 + v405.m128i_i64[0]));
              _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v410, v407));
              if ( _EBX )
                break;
LABEL_562:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v410, (__m128i)-1LL));
              if ( (_DWORD)_RCX )
              {
                v412 = 0;
                goto LABEL_568;
              }
              v403 = (unsigned __int64)v409 + (_QWORD)ii + 16;
            }
            v544 = v409;
            v573 = (unsigned __int64)ii;
            while ( 1 )
            {
              __asm { tzcnt   ecx, ebx }
              _RCX = -(__int64)(v405.m128i_i64[1] & ((unsigned __int64)v409 + _RCX));
              if ( v402 == *(const __m128i **)(v405.m128i_i64[0] + 416 * _RCX - 400) )
              {
                v412 = v405.m128i_i64[0] + 416 * _RCX;
                v413 = sub_141923B40(v401, *(_QWORD *)(v412 - 408), v402);
                v402 = (const __m128i *)v568;
                v401 = v572;
                if ( !v413 )
                  break;
              }
              v414 = _EBX - 1;
              LOWORD(v414) = _EBX & (_EBX - 1);
              v110 = (_WORD)v414 == 0;
              _EBX = v414;
              v409 = v544;
              ii = (const __m128i *)v573;
              if ( v110 )
                goto LABEL_562;
            }
LABEL_568:
            v415 = v412 - 392;
            if ( !v412 )
              v415 = 0;
            if ( v567 )
            {
LABEL_571:
              v417 = sub_1406D0E00(&v485.m128i_u64[1], v401, v402);
              v402 = (const __m128i *)v568;
              v401 = v572;
              v418 = _mm_cvtsi32_si128(v417 >> 57);
              v419 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v418, v418), 0), 68);
              for ( jj = nullptr; ; jj += 2 )
              {
                v421 = v560 & v417;
                HIDWORD(_RCX) = HIDWORD(v555);
                v423 = _mm_loadu_si128((const __m128i *)((char *)v555 + v421));
                _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v423, v419));
                if ( _EDI )
                  break;
LABEL_577:
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v423, (__m128i)-1LL)) )
                {
                  v426 = nullptr;
                  goto LABEL_580;
                }
                v417 = (unsigned __int64)jj + v421 + 16;
              }
              v544 = jj;
              while ( 1 )
              {
                __asm { tzcnt   ecx, edi }
                v425 = v421;
                _RCX = -(__int64)(v560 & (v421 + _RCX));
                if ( v402 == *((const __m128i **)&v555[-2] + 7 * _RCX - 1) )
                {
                  v426 = &v555->m128i_i8[56 * _RCX];
                  v427 = sub_141923B40(v401, *((_QWORD *)v426 - 6), v402);
                  v402 = (const __m128i *)v568;
                  v401 = v572;
                  if ( !v427 )
                    break;
                }
                v428 = _EDI - 1;
                LOWORD(v428) = _EDI & (_EDI - 1);
                v110 = (_WORD)v428 == 0;
                _EDI = v428;
                v421 = v425;
                jj = v544;
                if ( v110 )
                  goto LABEL_577;
              }
LABEL_580:
              v416 = (__int64)(v426 - 32);
              if ( !v426 )
                v416 = 0;
              if ( v415 )
              {
LABEL_583:
                if ( *(_QWORD *)(v415 + 160) == -1 && *(_QWORD *)(v415 + 56) == 6 )
                {
                  v429 = 0;
                  if ( v530 != -1
                    && !(**(_DWORD **)(v415 + 48) ^ 0x6F637376
                       | *(unsigned __int16 *)(*(_QWORD *)(v415 + 48) + 4LL) ^ 0x6564) )
                  {
                    v430 = v509.m128i_i64[1];
                    v431 = v510.m128i_i64[0];
                    if ( *(_QWORD *)(v415 + 64) == -1 )
                    {
                      if ( v509.m128i_i64[0] == -1 )
                      {
                        v431 = 0;
                        v430 = 1;
                      }
                    }
                    else if ( v509.m128i_i64[0] == -1 )
                    {
                      v430 = *(_QWORD *)(v415 + 72);
                      v431 = *(_QWORD *)(v415 + 80);
                    }
                    v429 = sub_1416B0D10(v430, v431, v519, v476);
                    v401 = *(_QWORD *)(v552 - 72);
                    v402 = *(const __m128i **)(v552 - 64);
                  }
                  goto LABEL_591;
                }
              }
LABEL_590:
              v429 = 0;
LABEL_591:
              sub_14087CF00(
                (unsigned int)v489,
                v401,
                (_DWORD)v402,
                v371 + v566 - 56,
                v415,
                v416,
                (__int64)&v505,
                v429,
                (__int64)&v466,
                (__int64)&v468);
              v432 = *(_QWORD *)&v541[16];
              if ( *(_QWORD *)&v541[16] == *(_QWORD *)v541 )
                sub_141939CF0((__int64 *)v541);
              sub_1419234B0(*(_QWORD *)&v541[8] + 536 * v432, v489, 536);
              *(_QWORD *)&v541[16] = v432 + 1;
              sub_140038640(&v505);
              continue;
            }
          }
          else
          {
            v415 = 0;
            if ( v567 )
              goto LABEL_571;
          }
          break;
        }
        v416 = 0;
        if ( v415 )
          goto LABEL_583;
        goto LABEL_590;
      }
      sub_1416CC1A0(v489, v90, v91);
      v102 = *(_QWORD *)&v489[8];
      if ( *(_QWORD *)v489 == -1 )
      {
        v578 = 1;
        v577 = 1;
        sub_14018F700(v541);
        v435 = v529;
        *(_QWORD *)v529 = 2;
        *(_QWORD *)(v435 + 8) = v102;
        v436 = v528;
        if ( v528 )
        {
          v437 = (_QWORD *)(*((_QWORD *)&v527 + 1) + 32LL);
          do
          {
            v438 = *(v437 - 4);
            if ( v438 )
              *(double *)v75.m128i_i64 = sub_140001660(*(v437 - 3), v438, 1);
            v439 = *(v437 - 1);
            if ( v439 )
              *(double *)v75.m128i_i64 = sub_140001660(*v437, v439, 1);
            v437 += 6;
            --v436;
          }
          while ( v436 );
        }
        if ( (_QWORD)v527 )
          *(double *)v75.m128i_i64 = sub_140001660(*((_QWORD *)&v527 + 1), 48 * v527, 8);
        v570 = 1;
        sub_14018EF10(&v466);
        v571 = 1;
        sub_14018FA70(&v480);
        goto LABEL_93;
      }
      v574 = *(_QWORD *)v489;
      *(_QWORD *)v489 = 0;
      *(_QWORD *)&v489[8] = *(_QWORD *)&v489[16];
      v560 = v102;
      *(_QWORD *)&v489[16] = v102;
      *(_QWORD *)&v489[24] = *(_QWORD *)&v489[8];
      *(_OWORD *)&v489[32] = __PAIR128__(*(unsigned __int64 *)&v489[8], 0);
      *(_QWORD *)&v489[48] = 0xA0000000ALL;
      v489[56] = 1;
      *(_WORD *)&v489[64] = 0;
      _R12 = (unsigned __int64)&v546.m128i_u64[1];
      v104 = 0;
      while ( 2 )
      {
        if ( (v104 & 1) != 0 )
        {
LABEL_615:
          v99 = *(const __m128i **)v541;
          v505 = *(__m128i *)&v541[8];
          v506 = *(__m128i *)&v541[24];
          v507.m128i_i64[0] = *(_QWORD *)&v541[40];
          if ( v574 )
            sub_140001660(v560, v574, 1);
          goto LABEL_109;
        }
        v105 = *(_QWORD *)&v489[16];
        sub_1408FD7D0(&v468, &v489[16]);
        if ( v468.m128i_i32[0] == 1 )
        {
          v106 = *(_QWORD *)v489;
          *(_QWORD *)v489 = *(_QWORD *)v469;
          v107 = *(_QWORD *)v469 - v106;
          v108 = v106 + v105;
          if ( *(_QWORD *)v469 == v106 )
          {
LABEL_133:
            sub_1408FEA60(v108, v107);
            if ( !v112 )
              goto LABEL_116;
            v468.m128i_i64[0] = v108;
            v468.m128i_i64[1] = v107;
            *(_OWORD *)v469 = 0;
            *(_QWORD *)&v469[16] = v108;
            *(_QWORD *)&v469[24] = v107;
            sub_140D8B500(&v546, (__int128 *)v468.m128i_i8);
            if ( v546.m128i_i8[0] == -1 )
            {
              sub_140032F30(&v546.m128i_u64[1]);
              goto LABEL_116;
            }
            v113 = _mm_loadu_si128(&v546);
            *(__m128i *)v469 = v547;
            v468 = v113;
            v114 = sub_1416724D0(aId_5, 2, &v468);
            v116 = 1;
            if ( !v114 || *(_BYTE *)v114 != 3 )
              goto LABEL_141;
            v117 = *(_QWORD *)(v114 + 24);
            if ( v117 < 0 )
            {
              v440 = 0;
              goto LABEL_612;
            }
            v566 = *(_QWORD *)(v114 + 24);
            if ( v117 )
            {
              v118 = *(_QWORD *)(v114 + 16);
              nullsub_1(v117, v115);
              v572 = sub_140001650(v566, 1);
              if ( !v572 )
              {
                v572 = v566;
                v440 = 1;
LABEL_612:
                sub_14196B2DB(v440, v572);
              }
              sub_1419234B0(v572, v118, v566);
              v116 = 0;
            }
            else
            {
LABEL_141:
              v572 = 1;
              v566 = 0;
            }
            v569 = 1;
            v119 = sub_1416724D0(aThreadName, 11, &v468);
            if ( !v119 || *(_BYTE *)v119 != 3 )
              goto LABEL_148;
            v121 = *(_QWORD *)(v119 + 24);
            if ( v121 < 0 )
            {
              v441 = 0;
              goto LABEL_614;
            }
            v555 = *(const __m128i **)(v119 + 24);
            if ( v121 )
            {
              v122 = *(_QWORD *)(v119 + 16);
              nullsub_1(v121, v120);
              v568 = sub_140001650(v555, 1);
              if ( !v568 )
              {
                v568 = (__int64)v555;
                v441 = 1;
LABEL_614:
                v569 = 1;
                sub_14196B2DB(v441, v568);
              }
              sub_1419234B0(v568, v122, v555);
            }
            else
            {
LABEL_148:
              v568 = 1;
              v555 = nullptr;
            }
            v564 = 1;
            v123 = (_BYTE *)sub_1416724D0(aUpdatedAt, 10, &v468);
            v124 = 0.0;
            if ( v123 && *v123 == 3 && (v564 = 1, sub_141436390(), v499.m128i_i32[0]) )
            {
              v125 = (v499.m128i_i32[0] >> 13) - 1;
              v126 = 0;
              v127 = v566;
              if ( v499.m128i_i32[0] >> 13 <= 0 )
              {
                v128 = (1 - (v499.m128i_i32[0] >> 13)) / 0x190u + 1;
                v125 += 400 * v128;
                v126 = -146097 * v128;
              }
              v124 = (double)(v499.m128i_i32[1]
                            + 86400
                            * (((v125 / 100) >> 2)
                             + ((1461 * v125) >> 2)
                             + v126
                             + (((unsigned __int32)v499.m128i_i32[0] >> 4) & 0x1FF)
                             - v125 / 100
                             - 719163));
            }
            else
            {
              v127 = v566;
            }
            if ( v116 )
            {
              if ( v555 )
                sub_140001660(v568, v555, 1);
              if ( !v127 )
                goto LABEL_184;
              v129 = v572;
LABEL_180:
              sub_140001660(v129, v127, 1);
              goto LABEL_184;
            }
            v534.m128i_i64[0] = v127;
            v534.m128i_i64[1] = v572;
            v535.m128i_i64[0] = v127;
            v130 = sub_1406CECD0(&v541[32], &v534);
            if ( !*(_QWORD *)&v541[16] )
            {
              LOBYTE(v131) = 1;
              sub_14192F940(v541, 1, &v541[32], v131);
            }
            v132 = *(_QWORD *)&v541[8];
            v133 = *(const __m128i **)v541;
            v134 = v130 >> 57;
            v135 = _mm_cvtsi32_si128(v130 >> 57);
            v136 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v135, v135), 0), 68);
            _RAX = 0;
            v138 = 0;
LABEL_164:
            v139 = v132 & v130;
            v140 = _mm_loadu_si128((const __m128i *)((char *)v133 + v139));
            _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v140, v136));
            if ( _R15D )
            {
              v552 = v132;
              v567 = v138;
              v573 = _RAX;
              while ( 1 )
              {
                __asm { tzcnt   eax, r15d }
                if ( v566 == *((_QWORD *)&v133[-2] - 7 * (v132 & (v139 + _RAX)) - 1) )
                {
                  v142 = &v133->m128i_i8[-56 * (v132 & (v139 + _RAX))];
                  if ( !(unsigned int)sub_141923B40(v572, *((_QWORD *)v142 - 6), v566) )
                    break;
                }
                v143 = _R15D - 1;
                LOWORD(v143) = _R15D & (_R15D - 1);
                v110 = (_WORD)v143 == 0;
                _R15D = v143;
                v132 = v552;
                v138 = v567;
                _RAX = v573;
                if ( v110 )
                  goto LABEL_169;
              }
              v127 = *((_QWORD *)v142 - 4);
              v145 = *((_QWORD *)v142 - 3);
              v146 = v555;
              *((_QWORD *)v142 - 4) = v555;
              *((_QWORD *)v142 - 3) = v568;
              *((_QWORD *)v142 - 2) = v146;
              *((double *)v142 - 1) = v124;
              if ( v534.m128i_i64[0] )
                sub_140001660(v534.m128i_i64[1], v534.m128i_i64[0], 1);
              _R12 = (unsigned __int64)&v546.m128i_u64[1];
              if ( (unsigned __int64)(v127 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
              {
                v129 = v145;
                goto LABEL_180;
              }
LABEL_184:
              sub_140032FF0(&v468);
LABEL_116:
              v104 = v489[65];
              continue;
            }
LABEL_169:
            if ( _RAX == 1 )
            {
LABEL_172:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v140, (__m128i)-1LL)) )
              {
                v147 = v133->m128i_i8[_R12];
                if ( v147 >= 0 )
                {
                  _EAX = _mm_movemask_epi8(_mm_load_si128(v133));
                  __asm { tzcnt   r12d, eax }
                  v147 = v133->m128i_i8[_R12];
                }
                v500 = v535.m128i_i64[0];
                v499 = v534;
                v133->m128i_i8[_R12] = v134;
                v133[1].m128i_i8[v132 & (_R12 - 16)] = v134;
                *(__m128i *)&v541[16] = _mm_sub_epi64(
                                          _mm_load_si128((const __m128i *)&v541[16]),
                                          (__m128i)_mm_shuffle_ps(
                                                     (__m128)_mm_cvtsi32_si128(v147 & 1),
                                                     (__m128)xmmword_14196F130,
                                                     228));
                v148 = 0x1FFFFFFFFFFFFFF9LL * _R12;
                *(_QWORD *)((char *)&v133[-2] + v148 * 8 - 8) = v500;
                *(const __m128i *)((char *)&v133[-3] + v148 * 8 - 8) = _mm_load_si128(&v499);
                v149 = v555;
                v133[-2].m128i_i64[v148] = (__int64)v555;
                *(_QWORD *)((char *)&v133[-1] + v148 * 8 - 8) = v568;
                v133[-1].m128i_i64[v148] = (__int64)v149;
                *(double *)&v133->m128i_i64[v148 - 1] = v124;
                _R12 = (unsigned __int64)&v546.m128i_u64[1];
                goto LABEL_184;
              }
              _RAX = 1;
            }
            else
            {
              if ( _mm_movemask_epi8(v140) )
              {
                __asm { tzcnt   r12d, eax }
                _R12 = v132 & (v139 + _R12);
                goto LABEL_172;
              }
              _RAX = 0;
            }
            v130 = v138 + v139 + 16;
            v138 += 16LL;
            goto LABEL_164;
          }
        }
        else
        {
          if ( v489[65] )
            goto LABEL_615;
          v489[65] = 1;
          v107 = *(_QWORD *)&v489[8] - *(_QWORD *)v489;
          if ( (v489[64] | (*(_QWORD *)&v489[8] != *(_QWORD *)v489)) != 1 )
            goto LABEL_615;
          v108 = *(_QWORD *)&v489[16] + *(_QWORD *)v489;
          if ( !v107 )
            goto LABEL_133;
        }
        break;
      }
      if ( *(_BYTE *)(v108 + v107 - 1) == 10 )
      {
        v109 = v107 - 1;
        if ( v107 == 1 )
        {
          v107 = -1;
          v111 = 0;
        }
        else
        {
          v110 = *(_BYTE *)(v108 + v107 - 2) == 13;
          v107 -= 2;
          v111 = v108;
          if ( !v110 )
            v111 = 0;
        }
        if ( v111 )
          v108 = v111;
        else
          v107 = v109;
      }
      goto LABEL_133;
    }
  }
  v69 = *(_QWORD *)&v489[8];
  v70 = *(_OWORD *)&v489[16];
  v505 = *(__m128i *)&v489[32];
  v506 = *(__m128i *)&v489[48];
  v507 = *(__m128i *)&v489[64];
  v508 = _mm_loadu_si128((const __m128i *)&v489[80]);
  v71 = v547.m128i_i64[0];
  if ( v547.m128i_i64[0] )
  {
    v72 = (_QWORD *)(v546.m128i_i64[1] + 8);
    do
    {
      v73 = *(v72 - 1);
      if ( v73 )
        sub_140001660(*v72, v73, 1);
      v72 += 6;
      --v71;
    }
    while ( v71 );
  }
  if ( v546.m128i_i64[0] )
    sub_140001660(v546.m128i_i64[1], 48 * v546.m128i_i64[0], 8);
  v468 = v505;
  *(__m128i *)v469 = v506;
  *(__m128i *)&v469[16] = v507;
  *(__m128i *)&v469[32] = v508;
  sub_14018F950(v541);
  v466 = v468;
  v467 = *(_QWORD *)v469;
  v74 = v529;
  *(_QWORD *)(v529 + 88) = *(_QWORD *)&v469[40];
  *(_OWORD *)(v74 + 72) = *(_OWORD *)&v469[24];
  *(_OWORD *)(v74 + 56) = *(_OWORD *)&v469[8];
  *(_QWORD *)(v74 + 48) = v467;
  v75.m128i_i64[0] = v466.m128i_i64[0];
  *(__m128i *)(v74 + 32) = v466;
  *(_QWORD *)v74 = v23;
  *(_QWORD *)(v74 + 8) = v69;
  *(_OWORD *)(v74 + 16) = v70;
  return *(double *)v75.m128i_i64;
}
