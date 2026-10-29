// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f82290 | name sub_140F82290
// win 1.2.7 | module src/core/analytics/index.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140F82290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  const __m128i *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int128 v12; // rdi
  __int64 v13; // r15
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __m128i si128; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned int v19; // eax
  unsigned __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // rdx
  __int128 v29; // kr00_16
  __int128 v30; // kr10_16
  __int64 v31; // r14
  char v32; // r11
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rcx
  __m128i v37; // xmm1
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r8
  const __m128i *v41; // r9
  __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // rcx
  __m128i v45; // xmm1
  _OWORD *result; // rax
  __m128i v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int128 v51; // xmm5
  __int64 v52; // r13
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  __m128i v58; // xmm0
  __int64 v59; // rsi
  __m128i v60; // xmm0
  __m128i *v61; // rax
  __m128i *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rsi
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __int64 v68; // r9
  __int64 v69; // rdx
  bool v70; // cc
  __int64 v71; // rax
  __int64 v72; // r15
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rbx
  __int64 *v75; // rax
  int v76; // edx
  int v77; // ecx
  unsigned int v78; // ecx
  char v79; // al
  void *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r13
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __int64 v85; // rdx
  __int64 v86; // r14
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __m128i *v89; // rax
  __int64 v90; // r13
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __int64 (__fastcall **v93)(); // r10
  char v94; // al
  int v95; // edx
  int v96; // ecx
  unsigned int v97; // ecx
  __m128i v98; // xmm7
  __m128i v99; // xmm8
  __m128i v100; // xmm9
  __m128i v101; // xmm10
  int v102; // edx
  int v103; // ecx
  unsigned int v104; // ecx
  int v105; // edx
  unsigned int v106; // edx
  bool v107; // r14
  unsigned __int64 v108; // r15
  char v109; // si
  __int64 v110; // r14
  int v111; // edx
  int v112; // ecx
  unsigned int v113; // ecx
  const __m128i *v114; // rdi
  unsigned __int64 v115; // r13
  int v116; // edx
  int v117; // ecx
  unsigned int v118; // ecx
  __int8 v119; // r12
  __int64 v120; // rdx
  unsigned __int64 v121; // rbx
  __int64 v122; // rdx
  bool v123; // zf
  __int64 v124; // rsi
  char v125; // di
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rax
  unsigned __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rdi
  __int64 v133; // r14
  __m128i v134; // xmm0
  __int64 v135; // rax
  __int64 v136; // rdi
  __int64 v137; // r13
  void *v138; // rbx
  __int64 v139; // rax
  unsigned __int64 v140; // rax
  int v141; // ecx
  __int32 v142; // r8d
  __int64 *v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // rdi
  int v146; // eax
  __int64 v147; // rax
  char v148; // si
  __int64 v149; // rdi
  __int64 *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  __m128i v155; // xmm0
  __int64 v156; // rax
  __int64 v157; // rax
  bool v158; // cl
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rdi
  __int64 v163; // rdx
  __int64 v164; // rsi
  __int32 v165; // r15d
  void *v166; // rax
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rcx
  _BYTE *v171; // rax
  bool v172; // r14
  _BYTE *v173; // rax
  __int64 v174; // rdi
  __int64 v175; // r15
  char v176; // si
  __int64 v177; // rax
  __int64 v178; // rdx
  __int8 v179; // al
  char v180; // cl
  char v181; // dl
  __int64 v182; // r14
  __int64 v183; // rsi
  _QWORD *v184; // rdi
  _DWORD *v185; // rax
  __int64 v186; // rcx
  __m128i v187; // xmm0
  __m128i *v188; // rax
  __int64 v189; // rdx
  __int128 *v190; // r13
  __int64 v191; // rcx
  _WORD *v192; // rax
  __m128i v193; // xmm0
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rdx
  _OWORD *v197; // r9
  void *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rdx
  __m128i v203; // xmm0
  _BYTE *v204; // rcx
  __m128i v205; // xmm1
  __int64 v206; // rdi
  __int64 v207; // r13
  unsigned __int64 v208; // rsi
  __int64 v209; // rcx
  __m128i v210; // xmm0
  __m128i v211; // xmm1
  char v212; // r15
  bool v213; // al
  __int64 v214; // r14
  __int64 v215; // rsi
  __int64 v216; // rcx
  __m128i v217; // kr90_16
  __m128i v218; // xmm0
  __m128i v219; // xmm1
  __m128i v220; // xmm0
  __m128i v221; // xmm1
  __int64 v222; // r13
  __m128i v223; // xmm0
  __m128i v224; // xmm1
  __m128i v225; // xmm0
  __m128i v226; // xmm1
  __int64 v227; // r13
  __int64 v228; // rdi
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rax
  char v232; // al
  __int64 v233; // r9
  __int64 v234; // rdx
  __int64 v235; // r8
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r10
  __int64 v239; // r8
  __int64 v240; // rdx
  __m128i v241; // xmm0
  __m128i v242; // xmm1
  __m128i v243; // xmm0
  __int64 v244; // rsi
  __int64 v245; // r8
  unsigned __int64 v246; // r15
  unsigned __int64 v247; // rdi
  __int64 i; // rbx
  __int64 v250; // rax
  __m128i v251; // xmm0
  __m128i v252; // xmm1
  __m128i v253; // xmm0
  __m128i v254; // xmm1
  __int64 v255; // rax
  __m128i v256; // xmm0
  __m128i v257; // xmm1
  __m128i v258; // xmm1
  __m128i v259; // xmm1
  __m128i v260; // xmm0
  __m128i v261; // xmm0
  __m128i v262; // xmm1
  __m128i v263; // xmm1
  __m128i v264; // xmm0
  __m128i v265; // xmm1
  __m128i v266; // xmm1
  char v267; // si
  __int64 v268; // rdx
  __m128i v269; // xmm0
  __m128i v270; // xmm0
  __m128i v271; // xmm1
  unsigned __int64 v272; // rsi
  char v273; // si
  int v274; // edx
  int v275; // ecx
  unsigned int v276; // ecx
  __int64 v277; // r8
  char v278; // al
  __int64 v279; // rdx
  int v280; // edx
  int v281; // ecx
  unsigned int v282; // ecx
  __int64 v283; // rcx
  __m128i *v284; // rax
  __m128i v285; // xmm0
  __m128i v286; // xmm1
  __int64 v287; // rcx
  int v288; // rdx^4
  __m128i v289; // xmm0
  __m128i v290; // xmm1
  __int64 v291; // rax
  __int64 v292; // rcx
  __m128i v293; // xmm0
  __m128i v294; // xmm1
  __m128i v295; // xmm0
  __m128i v296; // xmm1
  __int128 v297; // xmm2
  __m128i v298; // xmm0
  __m128i v299; // xmm1
  _QWORD *v300; // rcx
  __m128i v301; // xmm1
  __int128 v302; // xmm2
  __int128 v303; // xmm3
  __int128 v304; // xmm4
  __int128 v305; // xmm5
  _OWORD *v306; // rax
  __m128i v307; // xmm1
  __int128 v308; // xmm2
  __int128 v309; // xmm3
  __int128 v310; // xmm4
  __int128 v311; // xmm5
  _OWORD *v312; // rax
  __m128i *v313; // rax
  __m128i *v314; // rax
  __m128i v315; // xmm0
  __m128i v316; // xmm1
  __int128 v317; // xmm2
  __int64 v318; // rax
  __int64 v319; // rdx
  __m128i v320; // xmm0
  __m128i v321; // xmm1
  __m128i v322; // xmm0
  __m128i v323; // xmm1
  __int64 v324; // rbx
  __m128i v325; // xmm0
  __m128i v326; // xmm1
  __m128i v327; // xmm0
  __m128i v328; // xmm1
  __int64 v329; // rsi
  __int64 v330; // rax
  __m128i v331; // xmm0
  __m128i v332; // xmm1
  __int128 v333; // xmm2
  __int64 v334; // [rsp+20h] [rbp-60h]
  __int64 v335; // [rsp+20h] [rbp-60h]
  __int64 v336; // [rsp+20h] [rbp-60h]
  __int64 v337; // [rsp+20h] [rbp-60h]
  __int64 v338; // [rsp+28h] [rbp-58h]
  _BYTE *v339; // [rsp+28h] [rbp-58h]
  __int64 v340; // [rsp+28h] [rbp-58h]
  __int64 v341; // [rsp+28h] [rbp-58h]
  __int64 v342; // [rsp+28h] [rbp-58h]
  __m128i *v343; // [rsp+30h] [rbp-50h]
  __int64 v344; // [rsp+38h] [rbp-48h]
  _BYTE v345[80]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v346; // [rsp+90h] [rbp+10h] BYREF
  __m128i v347; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v348; // [rsp+B0h] [rbp+30h] BYREF
  char *v349; // [rsp+C0h] [rbp+40h]
  void *v350; // [rsp+C8h] [rbp+48h]
  __m128i *v351; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall **v352)(); // [rsp+D8h] [rbp+58h]
  __m128i v353; // [rsp+1D8h] [rbp+158h]
  __int128 v354; // [rsp+1E8h] [rbp+168h]
  __int128 v355; // [rsp+1F8h] [rbp+178h]
  __int128 v356; // [rsp+208h] [rbp+188h]
  __int128 v357; // [rsp+218h] [rbp+198h]
  __int128 v358; // [rsp+228h] [rbp+1A8h]
  __int128 v359; // [rsp+238h] [rbp+1B8h]
  _OWORD *v360; // [rsp+10040h] [rbp+FFC0h] BYREF
  __m128i v361; // [rsp+10048h] [rbp+FFC8h] BYREF
  __int64 v362; // [rsp+10058h] [rbp+FFD8h]
  __int64 v363; // [rsp+10060h] [rbp+FFE0h]
  __int64 v364; // [rsp+10068h] [rbp+FFE8h]
  const __m128i *v365; // [rsp+10070h] [rbp+FFF0h]
  __int64 v366; // [rsp+10078h] [rbp+FFF8h]
  __m128i v367; // [rsp+10080h] [rbp+10000h]
  __m128i v368; // [rsp+10090h] [rbp+10010h]
  __int64 v369; // [rsp+100A0h] [rbp+10020h]
  __m128i v370[11]; // [rsp+100A8h] [rbp+10028h] BYREF
  unsigned __int64 v371; // [rsp+10160h] [rbp+100E0h]
  __int64 v372; // [rsp+10168h] [rbp+100E8h]
  unsigned __int64 v373; // [rsp+10170h] [rbp+100F0h]
  unsigned __int64 v374; // [rsp+10178h] [rbp+100F8h]
  int v375; // [rsp+10230h] [rbp+101B0h]
  int v376; // [rsp+10234h] [rbp+101B4h]
  char v377; // [rsp+10239h] [rbp+101B9h]
  __m128i v378; // [rsp+10240h] [rbp+101C0h]
  __int64 v379; // [rsp+10250h] [rbp+101D0h]
  __int64 v380; // [rsp+10258h] [rbp+101D8h]
  __int64 v381; // [rsp+10260h] [rbp+101E0h]
  __int64 v382; // [rsp+10268h] [rbp+101E8h]
  __int64 v383; // [rsp+10270h] [rbp+101F0h]
  __int64 v384; // [rsp+10278h] [rbp+101F8h]
  __int64 v385; // [rsp+10280h] [rbp+10200h]
  char *v386; // [rsp+10288h] [rbp+10208h]
  __int64 v387; // [rsp+10290h] [rbp+10210h]
  unsigned __int64 v388; // [rsp+10298h] [rbp+10218h]
  __int64 v389; // [rsp+102A0h] [rbp+10220h]
  unsigned __int64 v390; // [rsp+102B0h] [rbp+10230h]
  __int64 v391; // [rsp+102B8h] [rbp+10238h]
  char v392; // [rsp+102C0h] [rbp+10240h]
  _QWORD v393[2]; // [rsp+102D0h] [rbp+10250h] BYREF
  __int64 v394; // [rsp+102E0h] [rbp+10260h] BYREF
  int v395; // [rsp+102E8h] [rbp+10268h]
  __int64 v396; // [rsp+102F0h] [rbp+10270h] BYREF
  __int64 v397; // [rsp+102F8h] [rbp+10278h] BYREF
  __int64 v398; // [rsp+10300h] [rbp+10280h]
  __int64 v399; // [rsp+10308h] [rbp+10288h]
  __m128i v400; // [rsp+10310h] [rbp+10290h] BYREF
  _BYTE v401[80]; // [rsp+10320h] [rbp+102A0h] BYREF
  __m128i v402; // [rsp+10370h] [rbp+102F0h] BYREF
  __m128i v403; // [rsp+10380h] [rbp+10300h] BYREF
  __int64 v404; // [rsp+10528h] [rbp+104A8h]
  __int64 v405; // [rsp+10530h] [rbp+104B0h]
  unsigned __int64 v406; // [rsp+10538h] [rbp+104B8h]
  _BYTE *v407; // [rsp+10540h] [rbp+104C0h]
  unsigned __int64 v408; // [rsp+10548h] [rbp+104C8h]
  __m128i v409; // [rsp+10550h] [rbp+104D0h] BYREF
  __m128i v410; // [rsp+10560h] [rbp+104E0h] BYREF
  __int128 v411; // [rsp+10570h] [rbp+104F0h] BYREF
  __int128 v412; // [rsp+10580h] [rbp+10500h]
  _BYTE v413[40]; // [rsp+10590h] [rbp+10510h] BYREF
  __m128i v414; // [rsp+105B8h] [rbp+10538h]
  __m128i *v415; // [rsp+105F0h] [rbp+10570h] BYREF
  __int64 v416; // [rsp+105F8h] [rbp+10578h]
  _BYTE v417[24]; // [rsp+10600h] [rbp+10580h] BYREF
  _BYTE v418[24]; // [rsp+10618h] [rbp+10598h] BYREF
  __int128 v419; // [rsp+10630h] [rbp+105B0h] BYREF
  __int64 v420; // [rsp+10640h] [rbp+105C0h]
  __int128 v421; // [rsp+10648h] [rbp+105C8h]
  __int64 v422; // [rsp+10658h] [rbp+105D8h] BYREF
  __int64 v423; // [rsp+10660h] [rbp+105E0h]
  __int128 v424; // [rsp+10668h] [rbp+105E8h] BYREF
  __int64 v425; // [rsp+10678h] [rbp+105F8h]
  __int128 v426; // [rsp+10680h] [rbp+10600h]
  __m128i v427; // [rsp+10690h] [rbp+10610h] BYREF
  __int64 v428; // [rsp+106A0h] [rbp+10620h]
  __m128i v429; // [rsp+106A8h] [rbp+10628h] BYREF
  __int64 v430; // [rsp+106B8h] [rbp+10638h]
  _OWORD v431[2]; // [rsp+106C0h] [rbp+10640h] BYREF
  _QWORD v432[2]; // [rsp+106E0h] [rbp+10660h] BYREF
  __int128 v433; // [rsp+106F0h] [rbp+10670h] BYREF
  __int128 v434; // [rsp+10708h] [rbp+10688h] BYREF
  __int128 v435; // [rsp+10720h] [rbp+106A0h] BYREF
  unsigned __int64 v436; // [rsp+10738h] [rbp+106B8h]
  __int64 v437; // [rsp+10740h] [rbp+106C0h] BYREF
  int v438; // [rsp+10748h] [rbp+106C8h] BYREF
  char v439[4]; // [rsp+1074Ch] [rbp+106CCh] BYREF
  __m128i v440; // [rsp+10750h] [rbp+106D0h] BYREF
  __m128i v441; // [rsp+10760h] [rbp+106E0h] BYREF
  __int128 v442; // [rsp+10770h] [rbp+106F0h] BYREF
  __m256i v443; // [rsp+10780h] [rbp+10700h] BYREF
  __int128 v444; // [rsp+107A0h] [rbp+10720h] BYREF
  __int128 v445; // [rsp+107B0h] [rbp+10730h] BYREF
  __int128 v446; // [rsp+107C0h] [rbp+10740h]
  bool v447; // [rsp+107D0h] [rbp+10750h] BYREF
  _BYTE v448[480]; // [rsp+107E0h] [rbp+10760h] BYREF
  __int64 v449; // [rsp+109E8h] [rbp+10968h]
  __m128i v450; // [rsp+109F0h] [rbp+10970h] BYREF
  __int64 v451; // [rsp+10A00h] [rbp+10980h]
  __m128i v452; // [rsp+10A10h] [rbp+10990h] BYREF
  __m128i v453; // [rsp+10A20h] [rbp+109A0h] BYREF
  __int128 v454; // [rsp+10A30h] [rbp+109B0h]
  __int128 v455; // [rsp+10A40h] [rbp+109C0h]
  __int128 v456; // [rsp+10A50h] [rbp+109D0h]
  __m128i v457; // [rsp+10A60h] [rbp+109E0h] BYREF
  __m128i v458; // [rsp+10A70h] [rbp+109F0h] BYREF
  __int64 v459; // [rsp+10A80h] [rbp+10A00h]
  __int64 v460; // [rsp+10A88h] [rbp+10A08h] BYREF
  __int64 v461; // [rsp+10A90h] [rbp+10A10h]
  __int64 v462; // [rsp+10A98h] [rbp+10A18h]
  __m128i v463; // [rsp+10AA0h] [rbp+10A20h] BYREF
  _BYTE v464[40]; // [rsp+10AB0h] [rbp+10A30h] BYREF
  __int64 v465; // [rsp+10AD8h] [rbp+10A58h]
  __m128i v466; // [rsp+10AE0h] [rbp+10A60h] BYREF
  __m128i v467; // [rsp+10AF0h] [rbp+10A70h] BYREF
  __int128 v468; // [rsp+10B00h] [rbp+10A80h]
  __int64 v469; // [rsp+10B10h] [rbp+10A90h]
  __int64 v470; // [rsp+10B18h] [rbp+10A98h]
  __m128i v471; // [rsp+10B20h] [rbp+10AA0h] BYREF
  _BYTE v472[96]; // [rsp+10B30h] [rbp+10AB0h] BYREF
  __int64 v473; // [rsp+10B98h] [rbp+10B18h]
  const __m128i *v474; // [rsp+10BA0h] [rbp+10B20h]
  __int64 v475; // [rsp+10BA8h] [rbp+10B28h]
  _BYTE v476[72]; // [rsp+10BB0h] [rbp+10B30h] BYREF
  __int64 v477; // [rsp+10BF8h] [rbp+10B78h]
  __m128i v478; // [rsp+10C00h] [rbp+10B80h] BYREF
  __int64 v479; // [rsp+10C10h] [rbp+10B90h]
  __int64 v480; // [rsp+10C20h] [rbp+10BA0h]
  __int64 v481; // [rsp+10C28h] [rbp+10BA8h]
  char *v482; // [rsp+10C30h] [rbp+10BB0h]
  __int64 v483; // [rsp+10C38h] [rbp+10BB8h]
  __int64 v484; // [rsp+10C40h] [rbp+10BC0h]
  __int64 v485; // [rsp+10C48h] [rbp+10BC8h]
  __int64 v486; // [rsp+10C50h] [rbp+10BD0h]
  char *v487; // [rsp+10C58h] [rbp+10BD8h]
  HANDLE v488[2]; // [rsp+10C60h] [rbp+10BE0h] BYREF
  __m128i v489; // [rsp+10C70h] [rbp+10BF0h] BYREF
  __m128i v490; // [rsp+10C80h] [rbp+10C00h]
  __m128i v491; // [rsp+10C90h] [rbp+10C10h]
  __int64 v492; // [rsp+10CA0h] [rbp+10C20h]
  __int64 v493; // [rsp+10CA8h] [rbp+10C28h]
  char v494; // [rsp+10CB7h] [rbp+10C37h] BYREF
  __int64 v495; // [rsp+10CB8h] [rbp+10C38h]
  char v496; // [rsp+10CC5h] [rbp+10C45h]
  char v497; // [rsp+10CC6h] [rbp+10C46h]
  char v498; // [rsp+10CC7h] [rbp+10C47h]
  __int64 v499; // [rsp+10CC8h] [rbp+10C48h]
  __int64 v500; // [rsp+10CD0h] [rbp+10C50h]
  __m128i *v501; // [rsp+10CD8h] [rbp+10C58h]
  __int64 v502; // [rsp+10CE0h] [rbp+10C60h]
  __int64 v503; // [rsp+10CE8h] [rbp+10C68h]
  char v504; // [rsp+10CF3h] [rbp+10C73h]
  char v505; // [rsp+10CF4h] [rbp+10C74h]
  char v506; // [rsp+10CF5h] [rbp+10C75h]
  char v507; // [rsp+10CF6h] [rbp+10C76h]
  char v508; // [rsp+10CF7h] [rbp+10C77h]
  __int64 v509; // [rsp+10CF8h] [rbp+10C78h]
  char v510; // [rsp+10D03h] [rbp+10C83h]
  char v511; // [rsp+10D04h] [rbp+10C84h]
  char v512; // [rsp+10D05h] [rbp+10C85h]
  char v513; // [rsp+10D06h] [rbp+10C86h]
  char v514; // [rsp+10D07h] [rbp+10C87h]
  __int64 v515; // [rsp+10D08h] [rbp+10C88h]

  v515 = -2;
  v493 = a4;
  v8 = a3;
  v485 = a2;
  v495 = a1;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_QWORD *)(a3 + 16);
  v469 = v9;
  v470 = v10;
  sub_1416AB5A0(v345, v9, v10);
  if ( *(_QWORD *)v345 != -1 )
  {
    v450 = _mm_loadu_si128((const __m128i *)v345);
    *(_QWORD *)&v12 = *(_QWORD *)&v345[16];
    v451 = *(_QWORD *)&v345[16];
    v13 = v450.m128i_i64[1];
    goto LABEL_11;
  }
  *(_QWORD *)&v12 = *(_QWORD *)&v345[16];
  if ( *(__int64 *)&v345[16] < 0 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v345[16] )
  {
    v5 = *(const __m128i **)&v345[8];
    nullsub_1(v11);
    v6 = 1;
    v14 = (__m128i *)sub_140001650(v12, 1);
    if ( !v14 )
LABEL_5:
      sub_141938D2B(v6, v12);
    v13 = (__int64)v14;
    sub_1418F44E0(v14, v5, v12);
  }
  else
  {
    v13 = 1;
  }
  v450.m128i_i64[0] = v12;
  v450.m128i_i64[1] = v13;
  v451 = v12;
LABEL_11:
  sub_140EC0780(v448, v485, aSelectFingerpr, 73);
  v471 = *(__m128i *)&v448[8];
  *(_OWORD *)v472 = *(_OWORD *)&v448[24];
  *(_OWORD *)&v472[16] = *(_OWORD *)&v448[40];
  *(_OWORD *)&v472[32] = *(_OWORD *)&v448[56];
  if ( *(_DWORD *)v448 == 1 )
  {
    v15 = _mm_load_si128(&v471);
    si128 = _mm_load_si128((const __m128i *)v472);
    *(_OWORD *)&v401[56] = *(_OWORD *)&v472[32];
    *(_OWORD *)&v401[40] = *(_OWORD *)&v472[16];
    *(__m128i *)&v401[24] = si128;
    *(__m128i *)&v401[8] = v15;
    *(_QWORD *)v401 = -1;
LABEL_39:
    v28 = *(_QWORD *)&v401[8];
    if ( *(_QWORD *)&v401[8] == 0x8000000000000009uLL )
    {
      sub_1408EC870(&v401[8]);
      v509 = v8;
      *((_QWORD *)&v12 + 1) = 2;
      goto LABEL_41;
    }
    *(_QWORD *)&v12 = *(_QWORD *)&v401[48];
    v31 = *(_QWORD *)&v401[56];
    v32 = v401[64];
    v457.m128i_i32[0] = *(_DWORD *)&v401[65];
    *(__int32 *)((char *)v457.m128i_i32 + 3) = *(_DWORD *)&v401[68];
    v29 = *(_OWORD *)&v401[16];
    v30 = *(_OWORD *)&v401[32];
    goto LABEL_44;
  }
  v17 = _mm_load_si128(&v471);
  v18 = _mm_load_si128((const __m128i *)v472);
  *(_OWORD *)&v476[48] = *(_OWORD *)&v472[32];
  *(_OWORD *)&v476[32] = *(_OWORD *)&v472[16];
  *(__m128i *)&v476[16] = v18;
  *(__m128i *)v476 = v17;
  v7 = v17.m128i_i64[0];
  v5 = *(const __m128i **)&v472[40];
  v19 = sub_1417A9630(*(_QWORD *)&v472[40]);
  v20 = 0x8000000000000013uLL;
  if ( !v19 )
  {
    v22 = 1;
    v23 = 0;
    goto LABEL_27;
  }
  v6 = v19;
  if ( !(_QWORD)v12 )
    v13 = 1;
  v21 = sub_1417A9200((_DWORD)v5, 1, v13, v12, -((_QWORD)v12 != 0), 1);
  if ( *(_QWORD *)v17.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
    sub_141938FA0(&off_141A594A0);
  ++*(_QWORD *)v17.m128i_i64[0];
  v509 = v17.m128i_i64[0];
  sub_141404710(v448, *(_QWORD *)(v17.m128i_i64[0] + 16), v21);
  --*(_QWORD *)v509;
  if ( *(_QWORD *)v448 == -1 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      v23 = (int)v6;
      v22 = 1;
      goto LABEL_27;
    }
    v466 = (__m128i)(unsigned __int64)v476;
    sub_140F9AB20(v448, &v466);
    v24 = *(_QWORD *)v448;
    if ( *(_QWORD *)v448 != -1 )
    {
      *(_QWORD *)&v12 = *(_QWORD *)&v448[8];
      v471 = *(__m128i *)&v448[16];
      *(_OWORD *)v472 = *(_OWORD *)&v448[32];
      *(__m128i *)&v472[16] = _mm_loadu_si128((const __m128i *)&v448[48]);
LABEL_23:
      *(_QWORD *)&v401[8] = v24;
      *(_QWORD *)&v401[16] = v12;
      v25 = _mm_load_si128((const __m128i *)v472);
      *(__m128i *)&v401[24] = _mm_load_si128(&v471);
      *(__m128i *)&v401[40] = v25;
      *(_OWORD *)&v401[56] = *(_OWORD *)&v472[16];
LABEL_24:
      *(_QWORD *)v401 = -1;
LABEL_25:
      sub_140E96D30(&v466);
      goto LABEL_28;
    }
    *(_QWORD *)&v12 = &v466.m128i_i64[1];
    if ( !v466.m128i_i64[1] )
    {
      v24 = 0x8000000000000009uLL;
      goto LABEL_23;
    }
    sub_14018E680(v448, &v466.m128i_u64[1], 0, &off_141A589D0, v334, v338);
    v59 = *(_QWORD *)&v448[24];
    if ( *(_QWORD *)v448 != -1 )
    {
      v60 = _mm_loadu_si128((const __m128i *)&v448[32]);
      *(__m128i *)&v401[56] = _mm_loadu_si128((const __m128i *)&v448[48]);
      *(__m128i *)&v401[40] = v60;
      *(_OWORD *)&v401[24] = *(_OWORD *)&v448[16];
      *(_OWORD *)&v401[8] = *(_OWORD *)v448;
      goto LABEL_24;
    }
    v500 = *(_QWORD *)&v448[16];
    v509 = *(_QWORD *)&v448[8];
    sub_14018E680(v448, &v466.m128i_u64[1], 1, &off_141A589E8, v336, v340);
    v5 = *(const __m128i **)&v448[24];
    if ( *(_QWORD *)v448 != -1 )
    {
      v269 = _mm_loadu_si128((const __m128i *)&v448[32]);
      *(__m128i *)&v401[56] = _mm_loadu_si128((const __m128i *)&v448[48]);
      *(__m128i *)&v401[40] = v269;
      *(_OWORD *)&v401[24] = *(_OWORD *)&v448[16];
      *(_OWORD *)&v401[8] = *(_OWORD *)v448;
      *(_QWORD *)v401 = -1;
      goto LABEL_650;
    }
    v499 = *(_QWORD *)&v448[16];
    v503 = *(_QWORD *)&v448[8];
    sub_14018EA70(v448, &v466.m128i_u64[1], 2, &off_141A58A00);
    v7 = *(_QWORD *)&v448[8];
    if ( *(_QWORD *)v448 == -1 )
    {
      sub_14018EA70(v448, &v466.m128i_u64[1], 3, &off_141A58A18);
      v13 = *(_QWORD *)&v448[8];
      if ( *(_QWORD *)v448 == -1 )
      {
        sub_14018E8C0(v448, &v466.m128i_u64[1], 4, &off_141A58A30);
        if ( *(_QWORD *)v448 == -1 )
        {
          *(_QWORD *)v401 = v509;
          *(_QWORD *)&v401[8] = v500;
          *(_QWORD *)&v401[16] = v59;
          *(_QWORD *)&v401[24] = v503;
          *(_OWORD *)&v401[32] = __PAIR128__((unsigned __int64)v5, v499);
          *(_QWORD *)&v401[48] = v7;
          *(_QWORD *)&v401[56] = v13;
          v401[64] = v448[8];
          goto LABEL_25;
        }
        *(_QWORD *)&v401[64] = *(_QWORD *)&v448[56];
        v298 = _mm_loadu_si128((const __m128i *)&v448[9]);
        v299 = _mm_loadu_si128((const __m128i *)&v448[25]);
        *(_OWORD *)&v401[49] = *(_OWORD *)&v448[41];
        *(__m128i *)&v401[33] = v299;
        *(__m128i *)&v401[17] = v298;
        *(_QWORD *)&v401[8] = *(_QWORD *)v448;
        v401[16] = v448[8];
      }
      else
      {
        v289 = _mm_loadu_si128((const __m128i *)&v448[16]);
        v290 = _mm_loadu_si128((const __m128i *)&v448[32]);
        *(_OWORD *)&v401[56] = *(_OWORD *)&v448[48];
        *(__m128i *)&v401[40] = v290;
        *(__m128i *)&v401[24] = v289;
        *(_OWORD *)&v401[8] = *(_OWORD *)v448;
      }
      *(_QWORD *)v401 = -1;
      if ( !v503 )
      {
LABEL_650:
        if ( v509 )
          sub_140001660(v500, v509, 1);
        goto LABEL_25;
      }
    }
    else
    {
      v285 = _mm_loadu_si128((const __m128i *)&v448[16]);
      v286 = _mm_loadu_si128((const __m128i *)&v448[32]);
      *(_OWORD *)&v401[56] = *(_OWORD *)&v448[48];
      *(__m128i *)&v401[40] = v286;
      *(__m128i *)&v401[24] = v285;
      *(_OWORD *)&v401[8] = *(_OWORD *)v448;
      *(_QWORD *)v401 = -1;
      if ( !v503 )
        goto LABEL_650;
    }
    sub_140001660(v499, v503, 1);
    goto LABEL_650;
  }
  v22 = *(_QWORD *)&v448[8];
  v23 = *(_QWORD *)&v448[16];
  v471 = *(__m128i *)&v448[24];
  *(__m128i *)v472 = _mm_loadu_si128((const __m128i *)&v448[40]);
  *(_QWORD *)&v472[16] = *(_QWORD *)&v448[56];
  v20 = *(_QWORD *)v448;
LABEL_27:
  *(_QWORD *)&v401[64] = *(_QWORD *)&v472[16];
  v26 = _mm_load_si128(&v471);
  *(__m128i *)&v401[48] = _mm_load_si128((const __m128i *)v472);
  *(__m128i *)&v401[32] = v26;
  *(_QWORD *)&v401[8] = v20;
  *(_QWORD *)&v401[16] = v22;
  *(_QWORD *)&v401[24] = v23;
  *(_QWORD *)v401 = -1;
LABEL_28:
  sub_140E970D0(v476);
  v27 = *(_QWORD *)v401;
  if ( *(_QWORD *)v401 == -1 )
    goto LABEL_39;
  v28 = *(_QWORD *)&v401[8];
  v29 = *(_OWORD *)&v401[16];
  v30 = *(_OWORD *)&v401[32];
  *(_QWORD *)&v12 = *(_QWORD *)&v401[48];
  v31 = *(_QWORD *)&v401[56];
  v32 = v401[64];
  v457.m128i_i32[0] = *(_DWORD *)&v401[65];
  *(__int32 *)((char *)v457.m128i_i32 + 3) = *(_DWORD *)&v401[68];
  if ( *(_QWORD *)v401 == -2 )
  {
LABEL_44:
    *(_QWORD *)v448 = v28;
    *(_OWORD *)&v448[8] = v29;
    *(_OWORD *)&v448[24] = v30;
    *(_QWORD *)&v448[40] = v12;
    *(_QWORD *)&v448[48] = v31;
    v448[56] = v32;
    *(_DWORD *)&v448[57] = v457.m128i_i32[0];
    *(_DWORD *)&v448[60] = *(__int32 *)((char *)v457.m128i_i32 + 3);
    v471.m128i_i64[0] = (__int64)v448;
    v471.m128i_i64[1] = (__int64)sub_141404740;
    sub_1416ABFD0(v401, &unk_141A6499F, &v471);
    v12 = *(_OWORD *)v401;
    v33 = *(_QWORD *)&v401[16];
    sub_140E96F40(v448);
    v43 = 10;
LABEL_45:
    v452 = v463;
    v453 = *(__m128i *)v464;
    *(_QWORD *)&v454 = *(_QWORD *)&v464[16];
    v44 = v495;
    *(_QWORD *)(v495 + 32) = v42;
    *(_QWORD *)(v44 + 40) = v41;
    *(_QWORD *)(v44 + 48) = v40;
    v45 = _mm_load_si128(&v453);
    *(__m128i *)(v44 + 56) = _mm_load_si128(&v452);
    *(__m128i *)(v44 + 72) = v45;
    result = (_OWORD *)v454;
    *(_QWORD *)(v44 + 88) = v454;
    *(_QWORD *)v44 = v43;
    *(_OWORD *)(v44 + 8) = v12;
    *(_QWORD *)(v44 + 24) = v33;
    goto LABEL_645;
  }
  LOBYTE(v500) = v401[64];
  v503 = *(_QWORD *)&v401[32];
  v482 = *(char **)&v401[24];
  v499 = *(_QWORD *)v401;
  v509 = v8;
  *(_OWORD *)v401 = *(_OWORD *)&v401[8];
  *(_OWORD *)&v401[16] = 0;
  v492 = v28;
  *(_QWORD *)&v401[32] = v28;
  *(_QWORD *)&v401[40] = v29;
  sub_14062F400(v448, v401, v27, *((_QWORD *)&v29 + 1));
  v33 = *(_QWORD *)v448;
  v34 = *(_QWORD *)&v448[16];
  if ( *(_QWORD *)&v448[16] == -1 )
  {
    v486 = 3;
  }
  else
  {
    *(_OWORD *)&v472[8] = *(_OWORD *)&v448[24];
    *(_OWORD *)&v472[24] = *(_OWORD *)&v448[40];
    *(_OWORD *)&v472[40] = *(_OWORD *)&v448[56];
    *(_OWORD *)&v472[56] = *(_OWORD *)&v448[72];
    *(__m128i *)&v472[72] = _mm_loadu_si128((const __m128i *)&v448[88]);
    *(_QWORD *)&v472[88] = *(_QWORD *)&v448[104];
    v471 = *(__m128i *)v448;
    *(_QWORD *)v472 = *(_QWORD *)&v448[16];
    *(_QWORD *)v476 = v503;
    *(_QWORD *)&v476[8] = *((_QWORD *)&v30 + 1);
    *(_OWORD *)&v476[16] = 0;
    *(_QWORD *)&v476[32] = v503;
    *(_QWORD *)&v476[40] = *((_QWORD *)&v30 + 1);
    sub_14062F240(v448, v476);
    v35 = *(_QWORD *)&v448[8];
    *((_QWORD *)&v12 + 1) = *(_QWORD *)v448;
    if ( *(_QWORD *)v448 == 2 )
    {
      if ( v34 )
        sub_140001660(*(_QWORD *)&v472[8], v34, 1);
      if ( *(_QWORD *)&v472[24] )
        sub_140001660(*(_QWORD *)&v472[32], *(_QWORD *)&v472[24], 1);
      v486 = 3;
      if ( *(_QWORD *)&v472[48] )
        sub_140001660(*(_QWORD *)&v472[56], *(_QWORD *)&v472[48], 1);
      v33 = v35;
    }
    else
    {
      sub_1418F44E0((__m128i *)&v401[16], (const __m128i *)&v448[16], 0x1F0u);
      *(_OWORD *)v401 = __PAIR128__(v35, *((unsigned __int64 *)&v12 + 1));
      if ( (__int64)v12 < 0 )
      {
        nullsub_1(v57);
        v61 = (__m128i *)sub_140001650(24, 1);
        if ( !v61 )
          sub_141938D2B(1, 24);
        v62 = v61;
        *v61 = _mm_loadu_si128(&xmmword_141A57082);
        v61[1].m128i_i64[0] = 0x74657366666F2073LL;
        sub_140E98950(v401);
        if ( v34 )
          sub_140001660(*(_QWORD *)&v472[8], v34, 1);
        if ( *(_QWORD *)&v472[24] )
          sub_140001660(*(_QWORD *)&v472[32], *(_QWORD *)&v472[24], 1);
        v502 = (__int64)v62;
        v63 = *(_QWORD *)&v472[48];
        v486 = 9;
        v33 = 24;
      }
      else
      {
        if ( v31 >= 0 )
        {
          v480 = v31;
          v449 = v12;
          v359 = *(_OWORD *)&v472[80];
          v358 = *(_OWORD *)&v472[64];
          v357 = *(_OWORD *)&v472[48];
          v356 = *(_OWORD *)&v472[32];
          v355 = *(_OWORD *)&v472[16];
          v354 = *(_OWORD *)v472;
          v353 = v471;
          v502 = *(_QWORD *)&v401[24];
          *(_QWORD *)&v12 = *(_QWORD *)&v401[16];
          v477 = *(_QWORD *)&v401[40];
          v33 = *(_QWORD *)&v401[32];
          v474 = *(const __m128i **)&v401[48];
          v473 = *(_QWORD *)&v401[56];
          v490.m128i_i64[0] = v403.m128i_i64[0];
          v58 = _mm_loadu_si128((const __m128i *)&v401[64]);
          v489 = _mm_loadu_si128(&v402);
          *(__m128i *)v488 = v58;
          sub_1418F44E0((__m128i *)v345, (const __m128i *)&v403.m128i_u64[1], 0x198u);
          v486 = v35;
          goto LABEL_83;
        }
        nullsub_1(v57);
        v64 = sub_140001650(25, 1);
        if ( !v64 )
          sub_141938D2B(1, 25);
        v65 = v64;
        *(_OWORD *)(v64 + 9) = *(__int128 *)((char *)&xmmword_141A5709A + 9);
        *(__m128i *)v64 = _mm_loadu_si128((const __m128i *)&xmmword_141A5709A);
        sub_140E98950(v401);
        if ( v34 )
          sub_140001660(*(_QWORD *)&v472[8], v34, 1);
        if ( *(_QWORD *)&v472[24] )
          sub_140001660(*(_QWORD *)&v472[32], *(_QWORD *)&v472[24], 1);
        v502 = v65;
        v63 = *(_QWORD *)&v472[48];
        v486 = 9;
        v33 = 25;
      }
      if ( v63 )
        sub_140001660(*(_QWORD *)&v472[56], v63, 1);
    }
  }
  *((_QWORD *)&v12 + 1) = 2;
  *(_QWORD *)&v12 = v33;
LABEL_83:
  if ( v482 )
    sub_140001660(v503, v482, 1);
  if ( v499 )
    sub_140001660(v492, v499, 1);
  *(_QWORD *)&v464[16] = v490.m128i_i64[0];
  v66 = _mm_load_si128((const __m128i *)v488);
  *(__m128i *)v464 = _mm_load_si128(&v489);
  v463 = v66;
  if ( DWORD2(v12) == 2 )
  {
    *((_QWORD *)&v12 + 1) = v502;
    v43 = v486;
    v40 = v473;
    v41 = v474;
    v42 = v477;
    goto LABEL_45;
  }
  sub_1418F44E0(&v409, (const __m128i *)v345, 0x208u);
  v7 = v449;
  v499 = v12;
  *(_QWORD *)&v12 = v502;
  v503 = v33;
  v8 = v486;
  v13 = v473;
  v5 = v474;
  v6 = v477;
LABEL_41:
  v452 = v463;
  v453 = *(__m128i *)v464;
  *(_QWORD *)&v454 = *(_QWORD *)&v464[16];
  sub_1418F44E0(v370, &v409, 0x208u);
  v364 = v6;
  v365 = v5;
  v366 = v13;
  v37 = _mm_load_si128(&v453);
  v367 = _mm_load_si128(&v452);
  v368 = v37;
  v369 = v454;
  v360 = *((_OWORD **)&v12 + 1);
  v361.m128i_i64[0] = v8;
  v361.m128i_i64[1] = v499;
  v362 = v12;
  v363 = v503;
  v390 = v7;
  v391 = v480;
  v392 = v500;
  v38 = *(unsigned __int8 *)(v509 + 48);
  if ( *((_QWORD *)&v12 + 1) == 2 )
  {
    v7 = 0;
    v39 = 0;
  }
  else
  {
    if ( (v38 & 1) != 0 )
      v7 = v388;
    v39 = 1;
    v36 = v389;
  }
  v498 = 1;
  sub_140EBE600((unsigned int)v345, v469, v470, v7, v39, v36);
  if ( *(_DWORD *)v345 == 1 )
  {
    *(__m128i *)&v413[16] = _mm_loadu_si128((const __m128i *)((char *)&v346 + 8));
    v47 = _mm_loadu_si128((const __m128i *)&v345[72]);
    *(__m128i *)v413 = v47;
    v48 = *(_OWORD *)&v345[8];
    v49 = *(_OWORD *)&v345[24];
    v50 = *(_OWORD *)&v345[40];
    v51 = *(_OWORD *)&v345[56];
    v412 = *(_OWORD *)&v345[56];
    v411 = *(_OWORD *)&v345[40];
    v410 = *(__m128i *)&v345[24];
    v409 = *(__m128i *)&v345[8];
    result = (_OWORD *)v495;
    *(_OWORD *)(v495 + 80) = *(_OWORD *)&v413[16];
    result[4] = v47;
    result[3] = v51;
    result[2] = v50;
    result[1] = v49;
    *result = v48;
    if ( (_DWORD)v360 == 2 )
      goto LABEL_645;
    goto LABEL_638;
  }
  v449 = v7;
  v414 = _mm_load_si128(&v348);
  *(__m128i *)&v413[24] = _mm_load_si128(&v347);
  *(_OWORD *)&v413[8] = v346;
  v471 = *(__m128i *)&v345[16];
  *(_OWORD *)v472 = *(_OWORD *)&v345[32];
  *(_OWORD *)&v472[16] = *(_OWORD *)&v345[48];
  *(_OWORD *)&v472[32] = *(_OWORD *)&v345[64];
  *(_OWORD *)&v472[48] = v346;
  *(_OWORD *)&v472[64] = *(_OWORD *)&v413[24];
  *(__m128i *)&v472[80] = v414;
  v52 = (__int64)v360;
  LOBYTE(v509) = v38;
  if ( a5 | (v360 == (_OWORD *)2) || v377 == 1 && !v376 )
    goto LABEL_117;
  if ( v377 )
  {
LABEL_98:
    if ( !v375 )
      goto LABEL_117;
  }
  else
  {
    if ( v374 )
    {
      v53 = v371;
      v54 = 0;
      if ( v373 >= v371 )
        v54 = v371;
      v55 = v373 - v54;
      v56 = v374 - (v371 - (v373 - v54));
      if ( v374 <= v371 - v55 )
      {
        v56 = 0;
        v53 = v55 + v374;
      }
    }
    else
    {
      v55 = 0;
      v53 = 0;
      v56 = 0;
    }
    v67 = v372;
    v68 = v372 + 56 * v55;
    v69 = 56 * v53 - 56 * v55;
    while ( v69 )
    {
      v69 -= 56;
      v70 = *(_QWORD *)(v68 + 24) <= *(_QWORD *)(v68 + 48);
      v68 += 56;
      if ( !v70 )
        goto LABEL_98;
    }
    v71 = 56 * v56;
    while ( v71 )
    {
      v71 -= 56;
      v70 = *(_QWORD *)(v67 + 24) <= *(_QWORD *)(v67 + 48);
      v67 += 56;
      if ( !v70 )
        goto LABEL_98;
    }
  }
  if ( (v38 & 1) != 0 )
  {
    *((_QWORD *)&v12 + 1) = *(_QWORD *)&v472[72];
    if ( *(_QWORD *)&v472[72] == v388
      && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v471), v378)) == 0xFFFF
      && *(_QWORD *)&v472[80] == v389
      && *(_QWORD *)&v472[16] == v381 )
    {
      v72 = v380;
      v500 = *(_QWORD *)&v472[8];
      if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)&v472[8], v380) && *(_QWORD *)&v472[40] == v384 )
      {
        v499 = *(_QWORD *)&v472[32];
        v503 = v383;
        if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)&v472[32], v383) && *(_QWORD *)&v472[64] == v387 )
        {
          v486 = *(_QWORD *)&v472[56];
          v482 = v386;
          v73 = *((_QWORD *)&v12 + 1);
          if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)&v472[56], v386) )
            goto LABEL_716;
        }
      }
    }
LABEL_117:
    v440 = 0;
    v441.m128i_i64[0] = 0;
    v441.m128i_i64[1] = 1;
    v442 = 0;
    v443.m256i_i64[0] = 1;
    *(_OWORD *)&v443.m256i_u64[1] = 0;
    v443.m256i_i64[3] = 1;
    v409.m128i_i64[0] = 0;
    v410.m128i_i64[0] = 0;
    v444 = 0;
    *(_QWORD *)&v445 = 0;
    *(_QWORD *)&v411 = 2;
    *(_QWORD *)&v413[16] = 2;
    v415 = nullptr;
    v416 = 1;
    *(_OWORD *)v417 = 0;
    *(_QWORD *)&v417[16] = 1;
    *(_OWORD *)v418 = 0;
    *(_QWORD *)&v418[16] = 1;
    v419 = 0;
    v420 = 8;
    v421 = 0;
    v422 = 0;
    v423 = 8;
    v424 = 0;
    v425 = 8;
    v426 = 0;
    v427.m128i_i64[0] = -1;
    v429.m128i_i64[0] = -1;
    *(_QWORD *)&v431[0] = -1;
    v432[0] = 0;
    v436 = 0;
    v433 = 0;
    v434 = 0;
    v435 = 0;
    v438 = 0;
    v439[0] = 0;
    v446 = 0;
    v447 = 0;
    v482 = (char *)&v437 + 4;
    v75 = &v437;
    v486 = (__int64)&v437;
    v437 = 0x100000001LL;
    BYTE8(v12) = 1;
    LOBYTE(v75) = 1;
    LODWORD(v480) = (_DWORD)v75;
LABEL_118:
    v510 = BYTE8(v12);
    sub_140F7D510(v345, v469, v470);
    if ( *(_QWORD *)&v417[8] )
      sub_140001660(*(_QWORD *)&v417[16], *(_QWORD *)&v417[8], 1);
    *(_QWORD *)v418 = *(_QWORD *)&v345[16];
    *(__m128i *)&v417[8] = _mm_loadu_si128((const __m128i *)v345);
    goto LABEL_121;
  }
  if ( *(_QWORD *)&v472[16] != v381 )
    goto LABEL_117;
  v74 = v390;
  v72 = v380;
  v500 = *(_QWORD *)&v472[8];
  if ( (unsigned int)sub_1418F4B70(*(_QWORD *)&v472[8], v380) )
    goto LABEL_117;
  v73 = *(_QWORD *)&v472[72];
  *((_QWORD *)&v12 + 1) = v388;
  if ( *(_QWORD *)&v472[72] < v388 || *(_QWORD *)&v472[72] < v74 )
    goto LABEL_117;
  if ( *(_QWORD *)&v472[40] != v384 )
    goto LABEL_117;
  v499 = *(_QWORD *)&v472[32];
  v503 = v383;
  if ( (unsigned int)sub_1418F4B70(*(_QWORD *)&v472[32], v383) )
    goto LABEL_117;
  if ( *(_QWORD *)&v472[64] != v387 )
    goto LABEL_117;
  v486 = *(_QWORD *)&v472[56];
  v482 = v386;
  v480 = *(_QWORD *)&v472[64];
  if ( (unsigned int)sub_1418F4B70(*(_QWORD *)&v472[56], v386) )
    goto LABEL_117;
  if ( v73 <= *((_QWORD *)&v12 + 1) )
  {
    v38 = (unsigned __int8)v509;
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v471), v378)) != 0xFFFF )
      goto LABEL_117;
  }
LABEL_716:
  if ( v392 == 1
    && v73 == *((_QWORD *)&v12 + 1)
    && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v471), v378)) == 0xFFFF
    && *(_QWORD *)&v472[80] == v389
    && !(unsigned int)sub_1418F4B70(v500, v72)
    && !(unsigned int)sub_1418F4B70(v499, v503)
    && !(unsigned int)sub_1418F4B70(v486, v482)
    && ((v509 & 1) != 0 || v390 >= *((_QWORD *)&v12 + 1)) )
  {
    v512 = 1;
    sub_140EC0780(v345, v485, aUpdateFilesSet_0, 39);
    if ( *(_DWORD *)v345 == 1 )
    {
      v320 = _mm_loadu_si128((const __m128i *)&v345[8]);
      v321 = _mm_loadu_si128((const __m128i *)&v345[24]);
      *(_OWORD *)&v401[48] = *(_OWORD *)&v345[56];
      *(_OWORD *)&v401[32] = *(_OWORD *)&v345[40];
      *(__m128i *)&v401[16] = v321;
      *(__m128i *)v401 = v320;
    }
    else
    {
      v322 = _mm_loadu_si128((const __m128i *)&v345[8]);
      v323 = _mm_loadu_si128((const __m128i *)&v345[24]);
      *(_OWORD *)&v448[48] = *(_OWORD *)&v345[56];
      *(_OWORD *)&v448[32] = *(_OWORD *)&v345[40];
      *(__m128i *)&v448[16] = v323;
      *(__m128i *)v448 = v322;
      v324 = *(_QWORD *)&v345[64];
      sub_140F9BFF0(&v409, &v450, v322.m128i_i64[0], *(_QWORD *)&v345[64]);
      if ( v409.m128i_i64[0] == -1 )
      {
        sub_140EBD680(v401, v322.m128i_i64[0], v324);
      }
      else
      {
        v325 = _mm_loadu_si128(&v409);
        v326 = _mm_loadu_si128(&v410);
        *(_OWORD *)&v401[48] = v412;
        *(_OWORD *)&v401[32] = v411;
        *(__m128i *)&v401[16] = v326;
        *(__m128i *)v401 = v325;
      }
      v512 = 1;
      sub_140E970D0(v448);
    }
    if ( *(_QWORD *)v401 == -1 )
    {
      *(_QWORD *)v495 = -1;
    }
    else
    {
      v327 = _mm_load_si128((const __m128i *)v401);
      v328 = _mm_load_si128((const __m128i *)&v401[16]);
      v412 = *(_OWORD *)&v401[48];
      v411 = *(_OWORD *)&v401[32];
      v410 = v328;
      v409 = v327;
      *(_QWORD *)v345 = &v409;
      *(_QWORD *)&v345[8] = sub_141404740;
      sub_1416ABFD0(v448, &unk_141A6499F, v345);
      v329 = *(_QWORD *)v448;
      *(__m128i *)v345 = _mm_loadu_si128((const __m128i *)&v448[8]);
      v512 = 1;
      sub_140E96F40(&v409);
      v330 = v495;
      *(_OWORD *)(v495 + 80) = *(_OWORD *)&v345[64];
      v331 = _mm_load_si128((const __m128i *)v345);
      v332 = _mm_load_si128((const __m128i *)&v345[16]);
      v333 = *(_OWORD *)&v345[32];
      *(_OWORD *)(v330 + 64) = *(_OWORD *)&v345[48];
      *(_OWORD *)(v330 + 48) = v333;
      *(__m128i *)(v330 + 32) = v332;
      *(__m128i *)(v330 + 16) = v331;
      *(_QWORD *)v330 = 10;
      *(_QWORD *)(v330 + 8) = v329;
    }
    result = (_OWORD *)sub_14062C200(&v471);
    if ( (_DWORD)v360 == 2 )
      goto LABEL_645;
    goto LABEL_638;
  }
  v409.m128i_i64[0] = v52;
  sub_1418F44E0((__m128i *)&v409.m128i_u64[1], &v361, 0x288u);
  v482 = (char *)&v437 + 4;
  v486 = (__int64)&v437;
  v437 = 0x100000001LL;
  DWORD2(v12) = 0;
  LODWORD(v480) = 0;
  v38 = (unsigned __int8)v509;
  if ( !*(_QWORD *)v418 )
    goto LABEL_118;
LABEL_121:
  v499 = v446;
  if ( !*(_BYTE *)(v493 + 80) )
    goto LABEL_623;
  v510 = BYTE8(v12);
  sub_141406CE0(v345);
  v76 = (*(int *)v345 >> 13) - 1;
  v77 = 0;
  if ( *(int *)v345 >> 13 <= 0 )
  {
    v78 = (1 - (*(int *)v345 >> 13)) / 0x190u + 1;
    v76 += 400 * v78;
    v77 = -146097 * v78;
  }
  if ( 86400LL
     * (((v76 / 100) >> 2) + ((1461 * v76) >> 2) + v77 + ((*(_DWORD *)v345 >> 4) & 0x1FF) - v76 / 100 - 719163)
     + *(unsigned int *)&v345[4]
     - *(_QWORD *)(v493 + 16) > 74 )
    goto LABEL_623;
  *(_DWORD *)v345 = 0;
  *(_QWORD *)&v345[8] = 0;
  *(_DWORD *)&v345[16] = 7;
  *(_QWORD *)&v345[20] = 0x100000000LL;
  *(_QWORD *)&v345[25] = 0;
  v510 = BYTE8(v12);
  v79 = sub_141690E40(v345);
  v82 = (__int64)v80;
  if ( (v79 & 1) != 0 )
  {
LABEL_136:
    v86 = 2;
LABEL_137:
    v87 = (_QWORD *)v495;
    *(_QWORD *)v495 = v86;
    v87[1] = v82;
    v87[2] = v81;
    v87[3] = 39;
    goto LABEL_624;
  }
  LODWORD(v492) = DWORD2(v12);
  v488[0] = v80;
  if ( (v38 & 1) == 0 )
  {
    v511 = 1;
    if ( sub_1416A17E0(v488, 0) != 1 )
    {
      v511 = 0;
      sub_140D73E60(v345, 0x2000, v488[0]);
      nullsub_1(v88);
      v89 = (__m128i *)sub_140001650(48, 8);
      if ( !v89 )
        sub_141938D11(8, 48);
      v90 = (__int64)v89;
      v91 = _mm_loadu_si128((const __m128i *)v345);
      v92 = _mm_loadu_si128((const __m128i *)&v345[16]);
      v89[2] = *(__m128i *)&v345[32];
      v89[1] = v92;
      *v89 = v91;
      v93 = &off_141A598B8;
      goto LABEL_140;
    }
    v82 = v85;
    CloseHandle(v488[0]);
LABEL_135:
    BYTE8(v12) = v492;
    goto LABEL_136;
  }
  v511 = 0;
  sub_1402B5CC0(v345, v80);
  v82 = *(_QWORD *)&v345[8];
  if ( *(_QWORD *)v345 == 2 )
    goto LABEL_135;
  *(_QWORD *)&v401[64] = *(_QWORD *)&v345[64];
  v83 = _mm_loadu_si128((const __m128i *)&v345[16]);
  v84 = _mm_loadu_si128((const __m128i *)&v345[32]);
  *(_OWORD *)&v401[48] = *(_OWORD *)&v345[48];
  *(__m128i *)&v401[32] = v84;
  *(__m128i *)&v401[16] = v83;
  *(_OWORD *)v401 = *(_OWORD *)v345;
  v507 = 1;
  v82 = sub_141156780(v401, 27);
  if ( v82 )
  {
    if ( *(_QWORD *)&v401[24] )
      sub_140001660(*(_QWORD *)&v401[16], *(_QWORD *)&v401[24], 1);
    CloseHandle(*(HANDLE *)&v401[56]);
    if ( !v401[0] )
    {
      v511 = 0;
      sub_1411571E0(&v401[8]);
    }
    goto LABEL_135;
  }
  *(_QWORD *)&v345[64] = *(_QWORD *)&v401[64];
  v270 = _mm_loadu_si128((const __m128i *)v401);
  v271 = _mm_loadu_si128((const __m128i *)&v401[16]);
  *(_OWORD *)&v345[48] = *(_OWORD *)&v401[48];
  *(_OWORD *)&v345[32] = *(_OWORD *)&v401[32];
  *(__m128i *)&v345[16] = v271;
  *(__m128i *)v345 = v270;
  v507 = 0;
  sub_140D73D50(v448, 0x2000, v345);
  v272 = v499;
  if ( !v499 )
    goto LABEL_685;
  sub_1418F4C70(v345, 0, 0x10000);
  v38 = v272;
  v86 = -1;
  do
  {
    if ( !v38 )
    {
      v38 = (unsigned __int8)v509;
LABEL_685:
      v347 = *(__m128i *)&v448[96];
      v346 = *(_OWORD *)&v448[80];
      *(_OWORD *)&v345[64] = *(_OWORD *)&v448[64];
      v293 = _mm_loadu_si128((const __m128i *)v448);
      v294 = _mm_loadu_si128((const __m128i *)&v448[16]);
      *(_OWORD *)&v345[48] = *(_OWORD *)&v448[48];
      *(_OWORD *)&v345[32] = *(_OWORD *)&v448[32];
      *(__m128i *)&v345[16] = v294;
      *(__m128i *)v345 = v293;
      v90 = sub_140C23890(112);
      *(__m128i *)(v90 + 96) = v347;
      *(_OWORD *)(v90 + 80) = v346;
      *(_OWORD *)(v90 + 64) = *(_OWORD *)&v345[64];
      v295 = _mm_load_si128((const __m128i *)v345);
      v296 = _mm_load_si128((const __m128i *)&v345[16]);
      v297 = *(_OWORD *)&v345[32];
      *(_OWORD *)(v90 + 48) = *(_OWORD *)&v345[48];
      *(_OWORD *)(v90 + 32) = v297;
      *(__m128i *)(v90 + 16) = v296;
      *(__m128i *)v90 = v295;
      v93 = &off_141A59940;
LABEL_140:
      v94 = *(_BYTE *)(v493 + 80);
      v500 = v90;
      v503 = (__int64)v93;
      if ( v94 )
      {
        sub_141406CE0(v345);
        v95 = (*(int *)v345 >> 13) - 1;
        v96 = 0;
        if ( *(int *)v345 >> 13 <= 0 )
        {
          v97 = (1 - (*(int *)v345 >> 13)) / 0x190u + 1;
          v95 += 400 * v97;
          v96 = -146097 * v97;
        }
        v82 = v500;
        v93 = (__int64 (__fastcall **)())v503;
        if ( 86400LL
           * (((v95 / 100) >> 2) + ((1461 * v95) >> 2) + v96 + ((*(_DWORD *)v345 >> 4) & 0x1FF) - v95 / 100 - 719163)
           + *(unsigned int *)&v345[4]
           - *(_QWORD *)(v493 + 16) < 75 )
          goto LABEL_144;
      }
      if ( *v93 )
        ((void (__fastcall *)(__int64))*v93)(v500);
      v268 = *(_QWORD *)(v503 + 8);
      if ( v268 )
        sub_140001660(v500, v268, *(_QWORD *)(v503 + 16));
      BYTE8(v12) = v492;
      goto LABEL_623;
    }
    v273 = 1;
    if ( !*(_BYTE *)(v493 + 80) )
      goto LABEL_672;
    v508 = 1;
    sub_141406CE0(v476);
    v274 = (*(int *)v476 >> 13) - 1;
    v275 = 0;
    if ( *(int *)v476 >> 13 <= 0 )
    {
      v276 = (1 - (*(int *)v476 >> 13)) / 0x190u + 1;
      v274 += 400 * v276;
      v275 = -146097 * v276;
    }
    if ( 86400LL
       * (((v274 / 100) >> 2) + ((1461 * v274) >> 2) + v275 + ((*(_DWORD *)v476 >> 4) & 0x1FF) - v274 / 100 - 719163)
       + *(unsigned int *)&v476[4]
       - *(_QWORD *)(v493 + 16) >= 75 )
    {
LABEL_672:
      v82 = 0;
      goto LABEL_673;
    }
    v277 = 0x10000;
    if ( v38 < 0x10000 )
      v277 = v38;
    v508 = 1;
    v278 = sub_140DCF2B0(v448, v345, v277);
    v82 = v279;
    if ( (v278 & 1) != 0 )
    {
      v86 = 2;
      v273 = 0;
      goto LABEL_673;
    }
    if ( !*(_BYTE *)(v493 + 80) )
      goto LABEL_672;
    v508 = 1;
    sub_141406CE0(v476);
    v280 = (*(int *)v476 >> 13) - 1;
    v281 = 0;
    if ( *(int *)v476 >> 13 <= 0 )
    {
      v282 = (1 - (*(int *)v476 >> 13)) / 0x190u + 1;
      v280 += 400 * v282;
      v281 = -146097 * v282;
    }
    v283 = 86400LL
         * (((v280 / 100) >> 2) + ((1461 * v280) >> 2) + v281 + ((*(_DWORD *)v476 >> 4) & 0x1FF) - v280 / 100 - 719163)
         + *(unsigned int *)&v476[4]
         - *(_QWORD *)(v493 + 16);
    if ( v283 > 74 )
      goto LABEL_672;
    v38 -= v82;
  }
  while ( v82 );
  nullsub_1(v283);
  v82 = 39;
  v284 = (__m128i *)sub_140001650(39, 1);
  if ( !v284 )
  {
    v508 = 1;
    sub_141938D2B(1, 39);
  }
  qmemcpy(&v284[1], "ssed checkpoint changed", 23);
  *v284 = _mm_loadu_si128((const __m128i *)&xmmword_141A599C8);
  v503 = (__int64)v284;
  v86 = 9;
  v273 = 0;
LABEL_673:
  LOBYTE(v38) = v509;
  v507 = 0;
  sub_140191F20(v448);
  if ( !v273 )
  {
    BYTE8(v12) = v492;
    v81 = v503;
    goto LABEL_137;
  }
  BYTE8(v12) = v492;
  if ( !v82 )
  {
LABEL_623:
    *(_QWORD *)v495 = -1;
    goto LABEL_624;
  }
  v499 = 39;
LABEL_144:
  v98 = _mm_load_si128((const __m128i *)&xmmword_141A55890);
  v99 = _mm_cvtsi32_si128(0x6472u);
  v100 = _mm_load_si128((const __m128i *)&xmmword_141A55880);
  v101 = _mm_cvtsi32_si128(0x64u);
  v398 = v485 + 32;
  v407 = &v417[8];
  v500 = v82;
  if ( !*(_BYTE *)(v493 + 80) )
  {
LABEL_683:
    *(_QWORD *)v495 = -1;
    goto LABEL_710;
  }
  while ( 2 )
  {
    sub_141406CE0(v345);
    v102 = (*(int *)v345 >> 13) - 1;
    v103 = 0;
    if ( *(int *)v345 >> 13 <= 0 )
    {
      v104 = (1 - (*(int *)v345 >> 13)) / 0x190u + 1;
      v102 += 400 * v104;
      v103 = -146097 * v104;
    }
    if ( 86400LL
       * (((v102 / 100) >> 2) + ((1461 * v102) >> 2) + v103 + ((*(_DWORD *)v345 >> 4) & 0x1FF) - v102 / 100 - 719163)
       + *(unsigned int *)&v345[4]
       - *(_QWORD *)(v493 + 16) >= 75 )
      goto LABEL_683;
    v394 = sub_14167FC00();
    v395 = v105;
    v460 = 0;
    v461 = 8;
    v462 = 0;
    v502 = v499;
LABEL_149:
    while ( 2 )
    {
      v107 = 1;
      LODWORD(v108) = 0;
      if ( sub_14167FD50(&v394) || v106 > 0x5F5E0FF || (unsigned __int64)(v502 - v499) >= 0x400000 )
        goto LABEL_442;
      *(_QWORD *)v345 = 0;
      *(_QWORD *)&v345[8] = 1;
      *(_QWORD *)&v345[16] = 0;
      v109 = 0;
      v110 = 0;
      do
      {
        if ( !*(_BYTE *)(v493 + 80) )
          goto LABEL_178;
        sub_141406CE0(v448);
        v111 = (*(int *)v448 >> 13) - 1;
        v112 = 0;
        if ( *(int *)v448 >> 13 <= 0 )
        {
          v113 = (1 - (*(int *)v448 >> 13)) / 0x190u + 1;
          v111 += 400 * v113;
          v112 = -146097 * v113;
        }
        v38 = (unsigned __int8)v509;
        if ( 86400LL
           * (((v111 / 100) >> 2) + ((1461 * v111) >> 2) + v112 + ((*(_DWORD *)v448 >> 4) & 0x1FF) - v111 / 100 - 719163)
           + *(unsigned int *)&v448[4]
           - *(_QWORD *)(v493 + 16) > 74 )
        {
LABEL_178:
          v124 = -1;
          v125 = 1;
          v126 = 0x8000000000000002uLL;
          goto LABEL_179;
        }
        (*(void (__fastcall **)(_BYTE *, __int64))(v503 + 88))(v448, v500);
        v114 = *(const __m128i **)v448;
        if ( !*(_QWORD *)v448 )
        {
          v126 = *(_QWORD *)&v448[8];
          v124 = 2;
          v125 = 0;
          v38 = (unsigned __int8)v509;
          goto LABEL_179;
        }
        v115 = *(_QWORD *)&v448[8];
        v38 = (unsigned __int8)v509;
        if ( !*(_BYTE *)(v493 + 80) )
          goto LABEL_178;
        sub_141406CE0(v448);
        v116 = (*(int *)v448 >> 13) - 1;
        v117 = 0;
        if ( *(int *)v448 >> 13 <= 0 )
        {
          v118 = (1 - (*(int *)v448 >> 13)) / 0x190u + 1;
          v116 += 400 * v118;
          v117 = -146097 * v118;
        }
        v38 = (unsigned __int8)v509;
        if ( 86400LL
           * (((v116 / 100) >> 2) + ((1461 * v116) >> 2) + v117 + ((*(_DWORD *)v448 >> 4) & 0x1FF) - v116 / 100 - 719163)
           + *(unsigned int *)&v448[4]
           - *(_QWORD *)(v493 + 16) > 74 )
          goto LABEL_178;
        if ( !v115 )
        {
          LOBYTE(v474) = v110 != 0;
          v124 = -1;
          v125 = 1;
          v126 = 0x8000000000000001uLL;
          goto LABEL_179;
        }
        if ( v115 >= 0x10000 )
          v115 = 0x10000;
        v108 = 0;
        while ( 1 )
        {
          v119 = v114->m128i_i8[v108++];
          if ( v119 == 10 )
            break;
          if ( v115 == v108 )
          {
            v108 = v115;
            break;
          }
        }
        if ( (v109 & 1) != 0
          || (v120 = *(_QWORD *)&v345[16], v121 = *(_QWORD *)&v345[16] + v108, *(_QWORD *)&v345[16] + v108 > 0x800000) )
        {
          v121 = 0;
          v109 = 1;
        }
        else
        {
          if ( v108 > v115 )
            sub_1419392D0(0, v108, v115, &off_141A598A0);
          if ( v108 > *(_QWORD *)v345 - *(_QWORD *)&v345[16] )
          {
            sub_14190D590((unsigned int)v345, *(_DWORD *)&v345[16], v108, 1, 1);
            v120 = *(_QWORD *)&v345[16];
            v121 = *(_QWORD *)&v345[16] + v108;
          }
          sub_1418F44E0((__m128i *)(*(_QWORD *)&v345[8] + v120), v114, v108);
          v109 = 0;
        }
        *(_QWORD *)&v345[16] = v121;
        (*(void (__fastcall **)(__int64, unsigned __int64))(v503 + 96))(v500, v108);
        v110 += v108;
        v123 = v119 == 10;
        v38 = (unsigned __int8)v509;
      }
      while ( !v123 );
      v502 += v110;
      if ( v109 )
      {
        v124 = -1;
        v125 = 1;
        v126 = 0x8000000000000000uLL;
LABEL_179:
        v122 = *(_QWORD *)v345;
        if ( *(_QWORD *)v345 )
          sub_140001660(*(_QWORD *)&v345[8], *(_QWORD *)v345, 1);
        if ( !v125 )
        {
          v287 = v495;
          v288 = HIDWORD(v406);
          *(_DWORD *)(v495 + 17) = v406;
          *(_BYTE *)(v287 + 23) = BYTE2(v288);
          *(_WORD *)(v287 + 21) = v288;
          *(_QWORD *)(v287 + 24) = v473;
          *(_QWORD *)v287 = v124;
          *(_QWORD *)(v287 + 8) = v126;
          *(_BYTE *)(v287 + 16) = (_BYTE)v474;
LABEL_708:
          sub_1403FC2D0(&v460);
          if ( v460 )
            sub_140001660(v461, 144 * v460, 8);
LABEL_710:
          if ( *(_QWORD *)v503 )
            (*(void (__fastcall **)(__int64))v503)(v500);
          v319 = *(_QWORD *)(v503 + 8);
          BYTE8(v12) = v492;
          if ( v319 )
            sub_140001660(v500, v319, *(_QWORD *)(v503 + 16));
LABEL_624:
          if ( v441.m128i_i64[0] )
            sub_140001660(v441.m128i_i64[1], v441.m128i_i64[0], 1);
          if ( *((_QWORD *)&v442 + 1) )
            sub_140001660(v443.m256i_i64[0], *((_QWORD *)&v442 + 1), 1);
          if ( v443.m256i_i64[2] )
            sub_140001660(v443.m256i_i64[3], v443.m256i_i64[2], 1);
          v512 = BYTE8(v12);
          result = (_OWORD *)sub_140E98950(&v409);
          if ( *(_QWORD *)v472 )
            result = (_OWORD *)sub_140001660(*(_QWORD *)&v472[8], *(_QWORD *)v472, 1);
          if ( *(_QWORD *)&v472[24] )
            result = (_OWORD *)sub_140001660(*(_QWORD *)&v472[32], *(_QWORD *)&v472[24], 1);
          if ( *(_QWORD *)&v472[48] )
            result = (_OWORD *)sub_140001660(*(_QWORD *)&v472[56], *(_QWORD *)&v472[48], 1);
          if ( !BYTE8(v12) )
            goto LABEL_645;
          result = v360;
          if ( (_DWORD)v360 == 2 )
            goto LABEL_645;
LABEL_638:
          if ( v379 )
            sub_140001660(v380, v379, 1);
          if ( v382 )
            sub_140001660(v383, v382, 1);
          if ( v385 )
            sub_140001660(v386, v385, 1);
          result = (_OWORD *)sub_140E98950(&v360);
          goto LABEL_645;
        }
      }
      else
      {
        v126 = *(_QWORD *)v345;
        LOBYTE(v474) = v345[8];
        v406 = ((unsigned __int64)((v345[15] << 16) | (unsigned int)*(unsigned __int16 *)&v345[13]) << 32)
             | *(unsigned int *)&v345[9];
        v473 = *(_QWORD *)&v345[16];
      }
      v127 = (v126 - 0x7FFFFFFFFFFFFFFFLL) & (v126 >> 63);
      if ( v127 == 1 )
      {
        BYTE1(v438) = 1;
        LOBYTE(v122) = 11;
        sub_140E7ADB0(v432, v122);
        ++*((_QWORD *)&v446 + 1);
        continue;
      }
      break;
    }
    if ( !v127 )
    {
      v128 = 8;
      v477 = v126;
      v408 = (unsigned __int8)v474 | (v406 << 8);
      if ( !v473 )
        goto LABEL_194;
      v129 = 0;
      while ( 1 )
      {
        v130 = *(unsigned __int8 *)(((unsigned __int8)v474 | (v406 << 8)) + v129);
        if ( v130 > 0x20 )
          break;
        v131 = 0x100003600LL;
        if ( !_bittest64(&v131, v130) )
          break;
        if ( v473 == ++v129 )
          goto LABEL_194;
      }
      v345[0] = (_BYTE)v474;
      v345[1] = v406;
      v345[2] = BYTE1(v406);
      v345[3] = BYTE2(v406);
      v345[4] = BYTE3(v406);
      v345[5] = BYTE4(v406);
      v345[6] = BYTE5(v406);
      v345[7] = BYTE6(v406);
      *(_QWORD *)&v345[8] = v473;
      *(_OWORD *)&v345[16] = 0;
      sub_14062F970(v448, v345);
      if ( v448[0] == 0xFF )
      {
        BYTE1(v438) = 1;
        sub_140E7ADB0(v432, 0);
        sub_14002F910(&v448[8]);
        LOBYTE(v38) = v509;
        goto LABEL_363;
      }
      v134 = _mm_loadu_si128((const __m128i *)v448);
      *(__m128i *)&v476[16] = _mm_loadu_si128((const __m128i *)&v448[16]);
      *(__m128i *)v476 = v134;
      v135 = sub_1416419F0(aType_12, 4, v476);
      if ( v135 && *(_BYTE *)v135 == 3 )
      {
        v136 = *(_QWORD *)(v135 + 16);
        v128 = *(_QWORD *)(v135 + 24);
      }
      else
      {
        v136 = 0;
      }
      v137 = v136;
      if ( !v136 )
        v137 = 1;
      v138 = (void *)sub_1416419F0(aPayload_4, 7, v476);
      if ( !v138 )
        v138 = off_1421E7108;
      if ( !v136 )
        v128 = 0;
      if ( v128 == 9 )
      {
        if ( *(_QWORD *)v137 ^ 0x65746361706D6F63LL | *(unsigned __int8 *)(v137 + 8) ^ 0x64LL )
        {
          if ( !(*(_QWORD *)v137 ^ 0x736D5F746E657665LL | *(unsigned __int8 *)(v137 + 8) ^ 0x67LL) )
          {
            v139 = sub_1416419F0(aType_12, 4, v138);
            if ( v139 )
            {
              if ( *(_BYTE *)v139 == 3 )
              {
                v137 = *(_QWORD *)(v139 + 16);
                v128 = *(_QWORD *)(v139 + 24);
LABEL_226:
                switch ( v128 )
                {
                  case 11LL:
                    if ( *(_QWORD *)v137 ^ 0x6F635F6E656B6F74LL | *(_QWORD *)(v137 + 3) ^ 0x746E756F635F6E65LL )
                      goto LABEL_362;
                    v38 = 11;
                    goto LABEL_256;
                  case 12LL:
                    goto LABEL_213;
                  case 13LL:
                    v38 = 13;
                    if ( !(*(_QWORD *)v137 ^ 0x6D6F635F6B736174LL | *(_QWORD *)(v137 + 5) ^ 0x6574656C706D6F63LL)
                      || !(*(_QWORD *)v137 ^ 0x65736E6F70736572LL | *(_QWORD *)(v137 + 5) ^ 0x6D6574695F65736ELL) )
                    {
                      goto LABEL_256;
                    }
                    goto LABEL_362;
                  case 14LL:
                    if ( *(_QWORD *)v137 ^ 0x6D6F635F6D657469LL | *(_QWORD *)(v137 + 6) ^ 0x646574656C706D6FLL )
                      goto LABEL_362;
                    v38 = 14;
                    goto LABEL_256;
                  case 15LL:
                    if ( *(_QWORD *)v137 ^ 0x70615F6863746170LL | *(_QWORD *)(v137 + 7) ^ 0x646E655F796C7070LL )
                      goto LABEL_362;
                    v38 = 15;
                    goto LABEL_256;
                  case 17LL:
                    goto LABEL_219;
                  case 18LL:
                    v146 = _mm_movemask_epi8(
                             _mm_and_si128(
                               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v137 + 16)), v99),
                               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v137), v98)));
                    if ( v146 != 0xFFFF )
                      goto LABEL_362;
                    LOBYTE(v146) = 1;
                    LODWORD(v501) = v146;
                    v38 = 18;
                    goto LABEL_257;
                  default:
                    goto LABEL_362;
                }
              }
            }
          }
          goto LABEL_362;
        }
LABEL_229:
        *(_QWORD *)&v413[16] = 2;
        HIBYTE(v438) = 1;
        goto LABEL_362;
      }
      if ( v128 == 17 )
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v137 + 16)), v101),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v137), v100))) != 0xFFFF )
        {
LABEL_219:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v137 + 16)), v101),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v137), v100))) != 0xFFFF )
            goto LABEL_362;
        }
        goto LABEL_229;
      }
      if ( v128 != 12 )
        goto LABEL_226;
      if ( !(*(_QWORD *)v137 ^ 0x5F6E6F6973736573LL | *(unsigned int *)(v137 + 8) ^ 0x6174656DLL) )
      {
        if ( !*(_QWORD *)v417 )
          goto LABEL_241;
        v140 = sub_1416419F0(aOrdinal_0, 7, v476);
        if ( v140 && *(_BYTE *)v140 == 2 && !*(_QWORD *)(v140 + 8) )
        {
          v140 = *(_QWORD *)(v140 + 16);
          v141 = 1;
          v142 = 1;
          v143 = &v409.m128i_i64[1];
          if ( !v409.m128i_i8[0] )
          {
LABEL_235:
            v143 = (__int64 *)&v413[8];
            if ( (_DWORD)v411 == 2 )
              v143 = &v410.m128i_i64[1];
            v142 = 1;
            if ( (_QWORD)v411 == 2 )
              v142 = v410.m128i_i32[0];
          }
        }
        else
        {
          v141 = 0;
          v142 = 1;
          v143 = &v409.m128i_i64[1];
          if ( !v409.m128i_i8[0] )
            goto LABEL_235;
        }
        if ( (v141 & v142) == 0 || v140 >= *v143 )
        {
LABEL_241:
          sub_140F8B4D0(v345, v138, aId_9, 2);
          v501 = *(__m128i **)v345;
          if ( *(_QWORD *)v345 == -1 )
          {
            BYTE1(v438) = 1;
            LOBYTE(v144) = 2;
            sub_140E7ADB0(v432, v144);
            goto LABEL_362;
          }
          v484 = *(_QWORD *)&v345[8];
          v145 = *(_QWORD *)&v345[16];
          if ( *(_QWORD *)v417 && (*(_QWORD *)v417 != *(_QWORD *)&v345[16] || (unsigned int)sub_1418F4B70(v416, v484)) )
          {
            BYTE1(v438) = 1;
            v513 = 0;
            LOBYTE(v144) = 2;
            sub_140E7ADB0(v432, v144);
            if ( v501 )
              sub_140001660(v484, v501, 1);
            goto LABEL_362;
          }
          if ( v415 )
            sub_140001660(v416, v415, 1);
          v415 = v501;
          v416 = v484;
          *(_QWORD *)v417 = v145;
          v513 = 1;
          if ( sub_1416419F0(aCwd_3, 3, v138) )
          {
            v513 = 1;
            v152 = sub_1416419F0(aCwd_3, 3, v138);
            if ( v152 && *(_BYTE *)v152 == 3 )
            {
              v153 = *(_QWORD *)(v152 + 16);
              v154 = *(_QWORD *)(v152 + 24);
              v513 = 1;
              sub_140EBED40(v345, v153, v154, 0, v335, v339);
            }
            else
            {
              *(_QWORD *)v345 = -1;
            }
            if ( *(_QWORD *)&v431[0] != -1 )
            {
              sub_1403FAE40(v431);
              if ( *(_QWORD *)&v431[0] )
                sub_140001660(*((_QWORD *)&v431[0] + 1), 24LL * *(_QWORD *)&v431[0], 8);
            }
            v155 = _mm_loadu_si128((const __m128i *)v345);
            v431[1] = _mm_loadu_si128((const __m128i *)&v345[16]);
            v431[0] = v155;
          }
          if ( !*(_QWORD *)v418 )
          {
            v513 = 1;
            sub_1416AC3D0(v407, &v415);
          }
          v513 = 1;
          v156 = sub_1416419F0("thread_source/source/subagentforked_from_ordinal_exclusive", 13, v138);
          if ( v156
            && *(_BYTE *)v156 == 3
            && *(_QWORD *)(v156 + 24) == 8
            && **(_QWORD **)(v156 + 16) == 0x746E656761627573LL )
          {
            v158 = 1;
          }
          else
          {
            v513 = 1;
            v157 = sub_141642800(v138, "/source/subagentforked_from_ordinal_exclusive", 16);
            v158 = 1;
            if ( !v157 )
            {
              v513 = 1;
              v159 = sub_1416419F0(aSource_6, 6, v138);
              v158 = v159
                  && *(_BYTE *)v159 == 3
                  && *(_QWORD *)(v159 + 24) == 8
                  && **(_QWORD **)(v159 + 16) == 0x746E656761627573LL;
            }
          }
          LOBYTE(v438) = v158;
          v513 = 1;
          sub_140F8B4D0(v345, v138, aForkedFromId_0, 14);
          if ( v427.m128i_i64[0] != -1 && v427.m128i_i64[0] )
            sub_140001660(v427.m128i_i64[1], v427.m128i_i64[0], 1);
          v428 = *(_QWORD *)&v345[16];
          v427 = _mm_loadu_si128((const __m128i *)v345);
          v513 = 1;
          v167 = sub_1416419F0("forked_from_ordinal_exclusive", 29, v138);
          if ( v167 && *(_BYTE *)v167 == 2 && !*(_QWORD *)(v167 + 8) )
          {
            v167 = *(_QWORD *)(v167 + 16);
            v168 = 1;
          }
          else
          {
            v168 = 0;
          }
          v410.m128i_i64[0] = v168;
          v410.m128i_i64[1] = v167;
          v513 = 1;
          v169 = sub_1416419F0(aSubagentHistor_0, 30, v138);
          if ( v169 && *(_BYTE *)v169 == 2 && !*(_QWORD *)(v169 + 8) )
          {
            v169 = *(_QWORD *)(v169 + 16);
            v170 = 1;
          }
          else
          {
            v170 = 0;
          }
          v409.m128i_i64[0] = v170;
          v409.m128i_i64[1] = v169;
          v513 = 1;
          v171 = (_BYTE *)sub_1416419F0(aHistoryBase_1, 12, v138);
          if ( v171 )
            v172 = *v171 != 0;
          else
            v172 = 0;
          v513 = 1;
          v173 = (_BYTE *)sub_1416419F0(aHistoryBase_1, 12, v138);
          v174 = (__int64)v173;
          v175 = 2;
          v176 = 1;
          if ( v173 && *v173 )
          {
            v513 = 1;
            sub_140F8B4D0(v345, v173, aThreadId_2, 9);
            v177 = sub_1416419F0(aEndOrdinalExcl_1, 21, v174);
            if ( v177 && *(_BYTE *)v177 == 2 && !*(_QWORD *)(v177 + 8) )
            {
              v38 = *(_QWORD *)(v177 + 16);
              v481 = *(_QWORD *)&v345[8];
              v475 = *(_QWORD *)v345;
              if ( *(_QWORD *)v345 == -1 )
              {
                v174 = -1;
                goto LABEL_348;
              }
              v399 = *(_QWORD *)&v345[16];
              v194 = sub_1416419F0(aEndByteOffset_1, 15, v174);
              if ( v194 && *(_BYTE *)v194 == 2 && !*(_QWORD *)(v194 + 8) )
              {
                v174 = *(_QWORD *)(v194 + 16);
                v175 = 1;
                v176 = 0;
                *(_QWORD *)&v456 = v475;
                *((_QWORD *)&v456 + 1) = v481;
              }
              else
              {
                v176 = 0;
                *(_QWORD *)&v456 = v475;
                *((_QWORD *)&v456 + 1) = v481;
                v175 = 0;
              }
            }
            else
            {
              v481 = *(_QWORD *)&v345[8];
              v174 = *(_QWORD *)v345;
LABEL_348:
              BYTE1(v438) = 1;
              v496 = 0;
              v405 = v481;
              v404 = v174;
              LOBYTE(v178) = 4;
              sub_140E7ADB0(v432, v178);
              if ( (unsigned __int64)(v174 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v481, v174, 1);
            }
          }
          if ( (_DWORD)v411 != 2 && (_QWORD)v412 )
            sub_140001660(*((_QWORD *)&v412 + 1), v412, 1);
          *(_QWORD *)&v411 = v175;
          *((_QWORD *)&v411 + 1) = v174;
          v412 = v456;
          *(_QWORD *)v413 = v399;
          *(_QWORD *)&v413[8] = v38;
          v179 = v409.m128i_i8[0];
          v180 = v409.m128i_i8[0] ^ 1;
          if ( v410.m128i_i64[0] )
            v180 = 0;
          v181 = 0;
          if ( v427.m128i_i64[0] != -1 )
          {
            v181 = v180;
            v179 = 1;
          }
          if ( v172 )
            v181 = v180;
          if ( !v176 )
          {
            v181 = 0;
            v179 = 1;
          }
          BYTE2(v438) = v181;
          HIBYTE(v438) |= v179;
        }
LABEL_362:
        sub_14002F9D0(v476);
        LOBYTE(v38) = v509;
LABEL_363:
        v128 = 8;
LABEL_194:
        v132 = 0;
        v133 = 0;
        goto LABEL_195;
      }
LABEL_213:
      v38 = 12;
      if ( *(_QWORD *)v137 ^ 0x6E6F635F6E727574LL | *(unsigned int *)(v137 + 8) ^ 0x74786574LL
        && *(_QWORD *)v137 ^ 0x6174735F6B736174LL | *(unsigned int *)(v137 + 8) ^ 0x64657472LL
        && *(_QWORD *)v137 ^ 0x6F62615F6E727574LL | *(unsigned int *)(v137 + 8) ^ 0x64657472LL )
      {
        goto LABEL_362;
      }
LABEL_256:
      LODWORD(v501) = 0;
LABEL_257:
      v147 = sub_1416419F0(aOrdinal_0, 7, v476);
      if ( v147 && *(_BYTE *)v147 == 2 && !*(_QWORD *)(v147 + 8) )
      {
        v126 = *(_QWORD *)(v147 + 16);
        v148 = 1;
      }
      else
      {
        v148 = 0;
      }
      sub_140F8B4D0(v345, v138, aThreadId_2, 9);
      v149 = *(_QWORD *)v345;
      if ( *(_QWORD *)v345 != -1 )
      {
        v108 = *(_QWORD *)&v345[8];
        if ( *(_QWORD *)&v345[16] != *(_QWORD *)v417 || (unsigned int)sub_1418F4B70(*(_QWORD *)&v345[8], v416) )
        {
          if ( v149 )
            sub_140001660(v108, v149, 1);
LABEL_308:
          if ( !(_BYTE)v501
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v137 + 16)), v99),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v137), v98))) != 0xFFFF )
          {
            goto LABEL_362;
          }
          LODWORD(v108) = 0;
LABEL_311:
          v160 = sub_1416419F0(aTimestamp_0, 9, v476);
          if ( sub_140F8D500(v160) != 1 )
          {
            BYTE1(v438) = 1;
            LOBYTE(v161) = 1;
            sub_140E7ADB0(v432, v161);
            goto LABEL_362;
          }
          v162 = v161;
          sub_140F8B4D0(v345, v138, aThreadId_2, 9);
          if ( *(_QWORD *)v345 == -1 )
          {
            sub_1416AC440(&v478, &v415);
          }
          else
          {
            v479 = *(_QWORD *)&v345[16];
            v478 = _mm_loadu_si128((const __m128i *)v345);
          }
          v164 = v479;
          if ( !v479 )
          {
            BYTE1(v438) = 1;
            LOBYTE(v163) = 2;
            sub_140E7ADB0(v432, v163);
LABEL_325:
            if ( v478.m128i_i64[0] )
              sub_140001660(v478.m128i_i64[1], v478.m128i_i64[0], 1);
            goto LABEL_362;
          }
          v457.m128i_i64[0] = 0;
          v457.m128i_i64[1] = 8;
          v458.m128i_i64[0] = 0;
          if ( (_BYTE)v501
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v137 + 16)), v99),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v137), v98))) == 0xFFFF )
          {
            sub_140F96980((unsigned int)&v409, (_DWORD)v138, v162, v108, (__int64)&v457);
          }
          else
          {
            switch ( v38 )
            {
              case 0xBuLL:
                if ( !(*(_QWORD *)v137 ^ 0x6F635F6E656B6F74LL | *(_QWORD *)(v137 + 3) ^ 0x746E756F635F6E65LL) )
                {
                  v165 = v478.m128i_i32[2];
                  v166 = (void *)sub_1416419F0(aTimestamp_0, 9, v476);
                  if ( !v166 )
                    v166 = off_1421E7108;
                  sub_140F95A00((unsigned int)&v409, (_DWORD)v138, v165, v164, v162, (__int64)v166, (__int64)&v457);
                }
                break;
              case 0xCuLL:
                if ( !(*(_QWORD *)v137 ^ 0x6E6F635F6E727574LL | *(unsigned int *)(v137 + 8) ^ 0x74786574LL) )
                {
                  if ( v479 == *(_QWORD *)v417 && !(unsigned int)sub_1418F4B70(v478.m128i_i64[1], v416) )
                  {
                    sub_140F8B4D0(v345, v138, aModel_8, 5);
                    if ( v429.m128i_i64[0] != -1 && v429.m128i_i64[0] )
                      sub_140001660(v429.m128i_i64[1], v429.m128i_i64[0], 1);
                    v430 = *(_QWORD *)&v345[16];
                    v429 = _mm_loadu_si128((const __m128i *)v345);
                  }
                  sub_140F8B4D0(&v466, v138, aTurnId_0, 7);
                  v501 = (__m128i *)v466.m128i_i64[0];
                  if ( v466.m128i_i64[0] != -1 )
                  {
                    v484 = v466.m128i_i64[1];
                    sub_140F8D390(&v409, v466.m128i_i64[1], v467.m128i_i64[0]);
                    v190 = (__int128 *)v478.m128i_i64[1];
                    v463.m128i_i64[0] = 0;
                    *(_QWORD *)v464 = 0;
                    nullsub_1(v191);
                    v192 = (_WORD *)sub_140001650(6, 1);
                    if ( !v192 )
                      sub_141938D2B(1, 6);
                    v192[2] = 29557;
                    *(_DWORD *)v192 = 1952543859;
                    v488[0] = (HANDLE)6;
                    v488[1] = v192;
                    v489.m128i_i64[0] = 6;
                    v506 = 1;
                    sub_14040FB10(v345, &off_141A64A58);
                    if ( v345[0] == 0xFF )
                    {
                      *(_QWORD *)v448 = *(_QWORD *)&v345[8];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_18,
                        43,
                        (unsigned int)v448,
                        (unsigned int)&off_141A58C48,
                        (__int64)&off_141A64A68);
                    }
                    v193 = _mm_loadu_si128((const __m128i *)v345);
                    *(__m128i *)&v448[16] = _mm_loadu_si128((const __m128i *)&v345[16]);
                    *(__m128i *)v448 = v193;
                    v506 = 0;
                    sub_140E72AA0(v345, &v463, v488, v448);
                    if ( v345[0] != 0xFF )
                      sub_14002F9D0(v345);
                    *(_QWORD *)&v401[24] = *(_QWORD *)v464;
                    *(__m128i *)&v401[8] = _mm_loadu_si128(&v463);
                    v401[0] = 5;
                    v343 = &v457;
                    v339 = v401;
                    v335 = v162;
                    sub_140F8D640(v190, v164);
                    goto LABEL_405;
                  }
                  if ( !(_QWORD)v419 || v439[0] )
                  {
                    BYTE1(v438) = 1;
                    LOBYTE(v189) = 3;
                    sub_140E7ADB0(v432, v189);
                    v198 = (void *)sub_1416419F0(aTimestamp_0, 9, v476);
                    if ( !v198 )
                      v198 = off_1421E7108;
                    sub_140F8B200(v345, v198, v138);
                    v501 = *(__m128i **)v345;
                    if ( *(_QWORD *)v345 == -1 )
                    {
                      sub_1402990B0(&v457);
                      goto LABEL_325;
                    }
                    v199 = *(_QWORD *)&v345[8];
                    v200 = *(_QWORD *)&v345[16];
                    *(_QWORD *)v345 = v478.m128i_i64[1];
                    *(_QWORD *)&v345[8] = v164;
                    v484 = v199;
                    *(_QWORD *)&v345[16] = v199;
                    *(_QWORD *)&v345[24] = v200;
                    sub_140F8ADE0(v448, v345, 2);
                    *(_QWORD *)v401 = v448;
                    *(_QWORD *)&v401[8] = sub_1400015F0;
                    sub_1416ABFD0(&v452, &unk_141A64A80, v401);
                    if ( *(_QWORD *)v448 )
                      sub_140001660(*(_QWORD *)&v448[8], *(_QWORD *)v448, 1);
                    if ( *(_QWORD *)&v418[8] )
                      sub_140001660(*(_QWORD *)&v418[16], *(_QWORD *)&v418[8], 1);
                    *(_QWORD *)&v419 = v453.m128i_i64[0];
                    *(__m128i *)&v418[8] = _mm_loadu_si128(&v452);
                    v439[0] = 1;
                    v201 = v424;
                    *(_QWORD *)&v424 = 0;
                    sub_140E991D0(v423, v201);
LABEL_405:
                    if ( v501 )
                      sub_140001660(v484, v501, 1);
                  }
                  if ( v164 != *(_QWORD *)v417
                    || (unsigned int)sub_1418F4B70(v478.m128i_i64[1], v416)
                    || !sub_1416419F0(aCwd_3, 3, v138) )
                  {
                    break;
                  }
                  sub_1416AC440(&v463, &v418[8]);
                  v505 = 1;
                  v195 = sub_140F8CFC0(v138, aCwd_3, 3);
                  if ( v195 )
                  {
                    v197 = v431;
                    if ( *(_QWORD *)&v431[0] == -1 )
                      v197 = nullptr;
                    v505 = 1;
                    sub_140EBED40(v401, v195, v196, v197, v335, v339);
                    if ( *(_QWORD *)v401 == -1 )
                    {
LABEL_435:
                      BYTE1(v438) = 1;
                      v504 = 1;
                      LOBYTE(v196) = 9;
                      sub_140E7ADB0(v432, v196);
                    }
                    if ( v436 > 0x7FF && !sub_140DEB8A0((char *)&v435 + 8, &v463) )
                    {
                      v504 = 1;
                      sub_140E71A40(v345, (char *)&v435 + 8);
                      sub_140E95460(v345);
                      BYTE1(v438) = 1;
                      v504 = 1;
                      LOBYTE(v202) = 10;
                      sub_140E7ADB0(v432, v202);
                    }
                    v489.m128i_i64[0] = *(_QWORD *)v464;
                    *(__m128i *)v488 = v463;
                    v203 = _mm_loadu_si128((const __m128i *)v401);
                    *(__m128i *)&v345[16] = _mm_loadu_si128((const __m128i *)&v401[16]);
                    *(__m128i *)v345 = v203;
                    v504 = 0;
                    sub_140E706B0(v448, (char *)&v435 + 8, v488, v345);
                    sub_140E95360(v448);
                    break;
                  }
                  *(_QWORD *)v401 = -1;
                  goto LABEL_435;
                }
                if ( !(*(_QWORD *)v137 ^ 0x6174735F6B736174LL | *(unsigned int *)(v137 + 8) ^ 0x64657472LL)
                  || !(*(_QWORD *)v137 ^ 0x6F62615F6E727574LL | *(unsigned int *)(v137 + 8) ^ 0x64657472LL) )
                {
LABEL_377:
                  sub_140F8BAC0(
                    (unsigned int)&v409,
                    (_DWORD)v138,
                    v478.m128i_i32[2],
                    v479,
                    v162,
                    v137,
                    v38,
                    (__int64)&v457);
                }
                break;
              case 0xDuLL:
                if ( !(*(_QWORD *)v137 ^ 0x6D6F635F6B736174LL | *(_QWORD *)(v137 + 5) ^ 0x6574656C706D6F63LL) )
                  goto LABEL_377;
                if ( !(*(_QWORD *)v137 ^ 0x65736E6F70736572LL | *(_QWORD *)(v137 + 5) ^ 0x6D6574695F65736ELL) )
                  sub_140F8FF20((unsigned int)&v409, (_DWORD)v138, v478.m128i_i32[2], v479, v162, (__int64)&v457);
                break;
              case 0xEuLL:
                if ( !(*(_QWORD *)v137 ^ 0x6D6F635F6D657469LL | *(_QWORD *)(v137 + 6) ^ 0x646574656C706D6FLL) )
                  sub_140F91D70((unsigned int)&v409, (_DWORD)v138, v478.m128i_i32[2], v479, v162, (__int64)&v457);
                break;
              case 0xFuLL:
                if ( !(*(_QWORD *)v137 ^ 0x70615F6863746170LL | *(_QWORD *)(v137 + 7) ^ 0x646E655F796C7070LL) )
                  sub_140F93270((unsigned int)&v409, (_DWORD)v138, v478.m128i_i32[2], v479, v162, (__int64)&v457);
                break;
              default:
                break;
            }
          }
          v182 = v457.m128i_i64[1];
          v183 = v457.m128i_i64[1] + 144 * v458.m128i_i64[0];
          while ( 1 )
          {
            do
            {
LABEL_379:
              if ( v182 == v183 )
              {
                v128 = v457.m128i_i64[1];
                v133 = v457.m128i_i64[0];
                v132 = v458.m128i_i64[0];
                if ( v478.m128i_i64[0] )
                  sub_140001660(v478.m128i_i64[1], v478.m128i_i64[0], 1);
                sub_14002F9D0(v476);
                LOBYTE(v38) = v509;
LABEL_195:
                *(_QWORD *)v345 = v128;
                *(_QWORD *)&v345[16] = v133;
                *(_QWORD *)&v345[8] = v128;
                *(_QWORD *)&v345[24] = v128 + 144 * v132;
                sub_1403E4C80(&v460, v345);
                ++*((_QWORD *)&v446 + 1);
                if ( v477 )
                  sub_140001660(v408, v477, 1);
                goto LABEL_149;
              }
              v184 = (_QWORD *)v182;
              v182 += 144;
            }
            while ( v184[5] != *(_QWORD *)v417 || (unsigned int)sub_1418F4B70(v184[4], v416) );
            v185 = (_DWORD *)v184[10];
            v186 = v184[11];
            if ( v186 == 8 )
              break;
            if ( v186 == 4 && *v185 == 1852994932 )
              goto LABEL_387;
          }
          if ( *(_QWORD *)v185 != 0x7974697669746361LL )
            goto LABEL_379;
LABEL_387:
          v345[0] = 1;
          v345[1] = v438;
          v497 = 1;
          v501 = (__m128i *)sub_141641AF0(
                              "subagentthread_source/source/subagentforked_from_ordinal_exclusive",
                              8,
                              v184 + 12);
          sub_14002F9D0(v501);
          v187 = _mm_loadu_si128((const __m128i *)v345);
          v188 = v501;
          v501[1] = _mm_loadu_si128((const __m128i *)&v345[16]);
          *v188 = v187;
          goto LABEL_379;
        }
        if ( v149 )
          sub_140001660(v108, v149, 1);
      }
      v150 = &v409.m128i_i64[1];
      if ( v409.m128i_i8[0] )
        goto LABEL_271;
      v150 = &v410.m128i_i64[1];
      if ( (_QWORD)v411 != 2 )
        v150 = (__int64 *)&v413[8];
      if ( (_DWORD)v411 != 2 || v410.m128i_i8[0] )
      {
LABEL_271:
        LOBYTE(v108) = 1;
        if ( v148 )
        {
          if ( v126 < (unsigned __int64)*v150 )
            goto LABEL_308;
          goto LABEL_311;
        }
        if ( (_DWORD)v411 != 2 )
          goto LABEL_311;
        sub_140F8B4D0(v345, v138, aThreadId_2, 9);
        v151 = *(_QWORD *)v345;
        if ( *(_QWORD *)v345 == -1 )
        {
LABEL_307:
          BYTE1(v438) = 1;
          LOBYTE(v151) = 4;
          sub_140E7ADB0(v432, v151);
          goto LABEL_308;
        }
      }
      else
      {
        LOBYTE(v108) = 1;
        if ( !BYTE2(v438) )
          goto LABEL_311;
        sub_140F8B4D0(v345, v138, aThreadId_2, 9);
        v151 = *(_QWORD *)v345;
        if ( *(_QWORD *)v345 == -1 )
          goto LABEL_307;
      }
      if ( v151 )
        sub_140001660(*(_QWORD *)&v345[8], v151, 1);
      goto LABEL_311;
    }
    if ( v127 != 2 )
    {
      *(_QWORD *)v495 = -1;
      goto LABEL_708;
    }
    v107 = ((unsigned __int8)v474 & 1) == 0;
    LOBYTE(v108) = 1;
LABEL_442:
    v499 = v502;
    *(_QWORD *)&v446 = v502;
    sub_140EBE600((unsigned int)v345, v469, v470, v449, 1, *(__int64 *)&v472[80]);
    if ( *(_DWORD *)v345 == 1 )
    {
      *(__m128i *)&v448[80] = _mm_loadu_si128((const __m128i *)((char *)&v346 + 8));
      v301 = _mm_loadu_si128((const __m128i *)&v345[72]);
      *(__m128i *)&v448[64] = v301;
      v302 = *(_OWORD *)&v345[8];
      v303 = *(_OWORD *)&v345[24];
      v304 = *(_OWORD *)&v345[40];
      v305 = *(_OWORD *)&v345[56];
      *(_OWORD *)&v448[48] = *(_OWORD *)&v345[56];
      *(_OWORD *)&v448[32] = *(_OWORD *)&v345[40];
      *(_OWORD *)&v448[16] = *(_OWORD *)&v345[24];
      *(_OWORD *)v448 = *(_OWORD *)&v345[8];
      v306 = (_OWORD *)v495;
      *(_OWORD *)(v495 + 80) = *(_OWORD *)&v448[80];
      v306[4] = v301;
      v306[3] = v305;
      v306[2] = v304;
      v306[1] = v303;
      *v306 = v302;
      goto LABEL_708;
    }
    v204 = &v448[8];
    *(__m128i *)&v448[104] = v348;
    *(__m128i *)&v448[88] = v347;
    *(_OWORD *)&v448[72] = v346;
    *(_OWORD *)&v448[56] = *(_OWORD *)&v345[64];
    *(_OWORD *)&v448[40] = *(_OWORD *)&v345[48];
    *(_OWORD *)&v448[24] = *(_OWORD *)&v345[32];
    *(_OWORD *)&v448[8] = *(_OWORD *)&v345[16];
    v205 = _mm_loadu_si128((const __m128i *)&v448[24]);
    *(_OWORD *)v401 = *(_OWORD *)&v345[16];
    *(__m128i *)&v401[16] = v205;
    *(_OWORD *)&v401[32] = *(_OWORD *)&v345[48];
    *(_OWORD *)&v401[48] = *(_OWORD *)&v345[64];
    *(_OWORD *)&v401[64] = v346;
    v402 = v347;
    v403 = _mm_loadu_si128((const __m128i *)&v448[104]);
    v206 = *(_QWORD *)&v345[48];
    if ( *(_QWORD *)&v345[48] != *(_QWORD *)&v472[16]
      || (v477 = *(_QWORD *)&v472[8], (unsigned int)sub_1418F4B70(*(_QWORD *)&v401[24], *(_QWORD *)&v472[8]))
      || (v207 = v402.m128i_i64[1], v208 = *(_QWORD *)&v472[72], v402.m128i_i64[1] < *(_QWORD *)&v472[72])
      || *(_QWORD *)&v401[56] != *(_QWORD *)&v472[40]
      || (unsigned int)sub_1418F4B70(*(_QWORD *)&v401[48], *(_QWORD *)&v472[32])
      || v402.m128i_i64[0] != *(_QWORD *)&v472[64]
      || (unsigned int)sub_1418F4B70(*(_QWORD *)&v401[72], *(_QWORD *)&v472[56])
      || v207 == v208 && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v401), v471)) != 0xFFFF )
    {
      nullsub_1(v204);
      v291 = sub_140001650(38, 1);
      if ( !v291 )
        sub_141938D2B(1, 38);
      *(_OWORD *)(v291 + 16) = xmmword_141A649E9;
      *(__m128i *)v291 = _mm_loadu_si128((const __m128i *)&xmmword_141A649D9);
      v292 = 0x676E696461657220LL;
      goto LABEL_693;
    }
    if ( (v38 & 1) == 0 )
      LODWORD(v207) = v446;
    sub_140EBE600((unsigned int)v345, v469, v470, v207, 0, v341);
    LODWORD(v502) = v108;
    if ( *(_DWORD *)v345 == 1 )
    {
      *(__m128i *)&v448[80] = _mm_loadu_si128((const __m128i *)((char *)&v346 + 8));
      v307 = _mm_loadu_si128((const __m128i *)&v345[72]);
      *(__m128i *)&v448[64] = v307;
      v308 = *(_OWORD *)&v345[8];
      v309 = *(_OWORD *)&v345[24];
      v310 = *(_OWORD *)&v345[40];
      v311 = *(_OWORD *)&v345[56];
      *(_OWORD *)&v448[48] = *(_OWORD *)&v345[56];
      *(_OWORD *)&v448[32] = *(_OWORD *)&v345[40];
      *(_OWORD *)&v448[16] = *(_OWORD *)&v345[24];
      *(_OWORD *)v448 = *(_OWORD *)&v345[8];
      v312 = (_OWORD *)v495;
      *(_OWORD *)(v495 + 80) = *(_OWORD *)&v448[80];
      v312[4] = v307;
      v312[3] = v311;
      v312[2] = v310;
      v312[1] = v309;
      *v312 = v308;
      goto LABEL_707;
    }
    *(__m128i *)&v448[104] = v348;
    *(__m128i *)&v448[88] = v347;
    *(_OWORD *)&v448[72] = v346;
    *(_OWORD *)&v448[56] = *(_OWORD *)&v345[64];
    *(_OWORD *)&v448[40] = *(_OWORD *)&v345[48];
    *(_OWORD *)&v448[24] = *(_OWORD *)&v345[32];
    *(_OWORD *)&v448[8] = *(_OWORD *)&v345[16];
    sub_14062C200(&v440);
    v445 = *(_OWORD *)&v448[104];
    v444 = *(_OWORD *)&v448[88];
    *(_OWORD *)&v443.m256i_u64[2] = *(_OWORD *)&v448[72];
    v210 = _mm_loadu_si128((const __m128i *)&v448[8]);
    v211 = _mm_loadu_si128((const __m128i *)&v448[24]);
    *(_OWORD *)v443.m256i_i8 = *(_OWORD *)&v448[56];
    v442 = *(_OWORD *)&v448[40];
    v441 = v211;
    v440 = v210;
    v212 = v502;
    if ( *(_QWORD *)&v448[40] != v206
      || (unsigned int)sub_1418F4B70(v441.m128i_i64[1], v477)
      || *((_QWORD *)&v444 + 1) < v208 )
    {
LABEL_691:
      nullsub_1(v209);
      v291 = sub_140001650(38, 1);
      if ( !v291 )
        sub_141938D2B(1, 38);
      *(_OWORD *)(v291 + 16) = xmmword_141A649C3;
      *(__m128i *)v291 = _mm_loadu_si128((const __m128i *)&xmmword_141A649B3);
      v292 = 0x74696D6D6F632065LL;
LABEL_693:
      *(_QWORD *)(v291 + 30) = v292;
      v300 = (_QWORD *)v495;
      *(_QWORD *)v495 = 10;
      v300[1] = 38;
      v300[2] = v291;
      v300[3] = 38;
LABEL_707:
      sub_14062C200(v401);
      goto LABEL_708;
    }
    if ( *((_QWORD *)&v444 + 1) == v208 )
    {
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v440), v471)) != 0xFFFF )
        goto LABEL_691;
    }
    else if ( (v38 & 1) != 0 )
    {
      goto LABEL_691;
    }
    v213 = v107;
    if ( !v212 )
      v213 = 0;
    v447 = v213;
    v214 = v461;
    v215 = v462;
    v400 = _mm_loadu_si128((const __m128i *)&v450.m128i_u64[1]);
    if ( (__int64)v446 < 0 )
    {
      nullsub_1(0);
      v227 = 26;
      v487 = (char *)sub_140001650(26, 1);
      if ( !v487 )
        sub_141938D2B(1, 26);
      v313 = (__m128i *)v487;
      *(_OWORD *)(v487 + 10) = *(__int128 *)((char *)&xmmword_141A589B0 + 10);
      *v313 = _mm_loadu_si128((const __m128i *)&xmmword_141A589B0);
      v228 = 9;
      goto LABEL_702;
    }
    v397 = v446;
    if ( v446 < 0 )
    {
      nullsub_1(0);
      v487 = (char *)sub_140001650(26, 1);
      if ( !v487 )
        sub_141938D2B(1, 26);
      v314 = (__m128i *)v487;
      *(_OWORD *)(v487 + 10) = *(__int128 *)((char *)&xmmword_141A589B0 + 10);
      *v314 = _mm_loadu_si128((const __m128i *)&xmmword_141A589B0);
      v228 = 9;
      v227 = 26;
LABEL_702:
      v483 = 26;
      goto LABEL_706;
    }
    v396 = *((_QWORD *)&v446 + 1);
    sub_1414039F0(
      v448,
      v485,
      *(&off_141A65F90 + (unsigned int)*(unsigned __int8 *)(v485 + 104)),
      qword_141A65FA8[*(unsigned __int8 *)(v485 + 104)],
      v337,
      v342,
      v343,
      v344);
    if ( *(_QWORD *)v448 != -1 )
    {
      *(_OWORD *)&v345[48] = *(_OWORD *)&v448[48];
      *(_OWORD *)&v345[33] = *(_OWORD *)&v448[33];
      *(__m128i *)&v345[17] = _mm_loadu_si128((const __m128i *)&v448[17]);
      *(_OWORD *)v345 = *(_OWORD *)v448;
      v345[16] = v448[16];
      *(_QWORD *)v476 = v345;
      *(_QWORD *)&v476[8] = sub_141404740;
      sub_1416ABFD0(v448, &unk_141A6499F, v476);
      v487 = *(char **)&v448[8];
      v227 = *(_QWORD *)v448;
      v483 = *(_QWORD *)&v448[16];
      sub_140E96F40(v345);
      v228 = 10;
      goto LABEL_706;
    }
    if ( (v480 & 1) != 0 )
    {
      v217 = v400;
      v514 = 1;
      sub_140EC0780(v345, v485, aDeleteFromFile, 31);
      if ( *(_DWORD *)v345 == 1 )
      {
        v218 = _mm_loadu_si128((const __m128i *)&v345[8]);
        v219 = _mm_loadu_si128((const __m128i *)&v345[24]);
        v491 = *(__m128i *)&v345[56];
        v490 = *(__m128i *)&v345[40];
        v489 = v219;
        *(__m128i *)v488 = v218;
      }
      else
      {
        v220 = _mm_loadu_si128((const __m128i *)&v345[8]);
        v221 = _mm_loadu_si128((const __m128i *)&v345[24]);
        *(_OWORD *)&v476[48] = *(_OWORD *)&v345[56];
        *(_OWORD *)&v476[32] = *(_OWORD *)&v345[40];
        *(__m128i *)&v476[16] = v221;
        *(__m128i *)v476 = v220;
        v222 = *(_QWORD *)&v345[64];
        sub_140F9C140(
          (unsigned int)v448,
          v217.m128i_i32[0],
          v217.m128i_i32[2],
          v220.m128i_i32[0],
          *(__int64 *)&v345[64]);
        if ( *(_QWORD *)v448 == -1 )
        {
          sub_140EBD680(v488, v220.m128i_i64[0], v222);
        }
        else
        {
          v223 = _mm_loadu_si128((const __m128i *)v448);
          v224 = _mm_loadu_si128((const __m128i *)&v448[16]);
          v491 = *(__m128i *)&v448[48];
          v490 = *(__m128i *)&v448[32];
          v489 = v224;
          *(__m128i *)v488 = v223;
        }
        v514 = 1;
        sub_140E970D0(v476);
      }
      v212 = v502;
      if ( v488[0] != (HANDLE)-1LL )
      {
        v225 = _mm_load_si128((const __m128i *)v488);
        v226 = _mm_load_si128(&v489);
        *(__m128i *)&v345[48] = v491;
        *(__m128i *)&v345[32] = v490;
        *(__m128i *)&v345[16] = v226;
        *(__m128i *)v345 = v225;
        *(_QWORD *)v476 = v345;
        *(_QWORD *)&v476[8] = sub_141404740;
        sub_1416ABFD0(v448, &unk_141A6499F, v476);
        v487 = *(char **)&v448[8];
        v227 = *(_QWORD *)v448;
        v483 = *(_QWORD *)&v448[16];
        v514 = 1;
        sub_140E96F40(v345);
        v228 = 10;
        goto LABEL_476;
      }
    }
    nullsub_1(v216);
    v229 = sub_140001650(128, 1);
    if ( !v229 )
    {
      v514 = 1;
      sub_141938D2B(1, 128);
    }
    *(_QWORD *)v448 = 128;
    *(_QWORD *)&v448[8] = v229;
    *(_QWORD *)&v448[16] = 0;
    v463.m128i_i64[0] = (__int64)v448;
    sub_1403B45A0(v448, "{falsetrue", 1);
    LOWORD(v488[0]) = 256;
    v488[1] = &v463;
    v227 = sub_140C0F180(v488, aSize_5, 4, (char *)&v444 + 8);
    if ( v227 )
    {
LABEL_479:
      v230 = *(_QWORD *)v448;
      if ( *(_QWORD *)v448 )
        goto LABEL_480;
LABEL_481:
      v228 = 3;
      goto LABEL_482;
    }
    if ( LOBYTE(v488[0]) )
      goto LABEL_489;
    v227 = sub_140C0F630(v488, aModified_0, 8, &v440);
    if ( v227 )
      goto LABEL_479;
    if ( LOBYTE(v488[0]) )
      goto LABEL_489;
    v227 = sub_140C05820(v488, aIdentity_1, 8, &v441);
    if ( v227 )
    {
      v38 = (unsigned __int8)v509;
      v212 = v502;
      v230 = *(_QWORD *)v448;
      if ( !*(_QWORD *)v448 )
        goto LABEL_481;
      goto LABEL_480;
    }
    v38 = (unsigned __int8)v509;
    v212 = v502;
    if ( LOBYTE(v488[0]) )
      goto LABEL_489;
    v227 = sub_140C05820(v488, aHead_1, 4, (char *)&v442 + 8);
    if ( v227 )
      goto LABEL_498;
    v38 = (unsigned __int8)v509;
    v212 = v502;
    if ( LOBYTE(v488[0]) )
      goto LABEL_489;
    v227 = sub_140C05820(v488, aTail_0, 4, &v443.m256i_u64[2]);
    if ( v227 )
      goto LABEL_498;
    v38 = (unsigned __int8)v509;
    v212 = v502;
    if ( LOBYTE(v488[0]) )
    {
LABEL_489:
      v227 = sub_141934E70();
      v230 = *(_QWORD *)v448;
      if ( !*(_QWORD *)v448 )
        goto LABEL_481;
      goto LABEL_480;
    }
    v227 = sub_140C0F180(v488, aHeadLen_0, 8, &v445);
    if ( v227 )
    {
LABEL_498:
      v38 = (unsigned __int8)v509;
      v212 = v502;
      v230 = *(_QWORD *)v448;
      if ( !*(_QWORD *)v448 )
        goto LABEL_481;
LABEL_480:
      sub_140001660(*(_QWORD *)&v448[8], v230, 1);
      goto LABEL_481;
    }
    if ( ((__int64)v488[0] & 1) == 0 && BYTE1(v488[0]) )
      sub_1403B45A0(*(_QWORD *)v488[1], "}{falsetrue", 1);
    v227 = *(_QWORD *)&v448[8];
    if ( *(_QWORD *)v448 == -1 )
    {
      v38 = (unsigned __int8)v509;
      v212 = v502;
      goto LABEL_481;
    }
    v478 = *(__m128i *)v448;
    v479 = *(_QWORD *)&v448[16];
    nullsub_1(*(_QWORD *)&v448[16]);
    v231 = sub_140001650(128, 1);
    if ( !v231 )
      sub_141938D2B(1, 128);
    *(_QWORD *)v448 = 128;
    *(_QWORD *)&v448[8] = v231;
    *(_QWORD *)&v448[16] = 0;
    v463.m128i_i64[0] = (__int64)v448;
    sub_1403B45A0(v448, "{falsetrue", 1);
    LOWORD(v488[0]) = 256;
    v488[1] = &v463;
    v227 = sub_140C05820(v488, aThreadId_2, 9, &v415);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0EB10(v488, aIsSubagent_0, 11, &v438);
    if ( v227 )
    {
LABEL_514:
      if ( *(_QWORD *)v448 )
        sub_140001660(*(_QWORD *)&v448[8], *(_QWORD *)v448, 1);
      goto LABEL_516;
    }
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0EB10(v488, aIncomplete_1, 10, (char *)&v438 + 1);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0F4B0(v488, aCoverageVersio_0, 16, v486);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EBA010(v488, v432);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0F4B0(v488, aWebSearchCover_1, 27, v482);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9F10(v488, &v411);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C05820(v488, aRolloutId_0, 10, v407);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140BFF8D0(v488, aForkedFromId_0, 14, &v427);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9F50(v488, &v409);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C05820(v488, aCurrentTurn_0, 12, &v418[8]);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140BFF8D0(v488, aModel_8, 5, &v429);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C02160(v488, aForkEnd_0, 8, &v410);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0EB10(v488, aUncertainInher_0, 21, (char *)&v438 + 2);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9F30(v488, &v413[16]);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0EB10(v488, aNeedsLegacyBas_0, 21, (char *)&v438 + 3);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9FD0(v488, (char *)&v433 + 8);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9F70(v488, (char *)&v419 + 8);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9FF0(v488, (char *)&v434 + 8);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
      goto LABEL_511;
    v227 = sub_140C0EB10(v488, aSyntheticTurn_0, 14, v439);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9ED0(v488, &v422);
    if ( v227 )
      goto LABEL_514;
    if ( LOBYTE(v488[0]) )
    {
LABEL_511:
      v227 = sub_141934E70();
      goto LABEL_514;
    }
    v227 = sub_140C017D0(v488, aSessionCwd_0, 11, v431);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9FB0(v488, (char *)&v435 + 8);
    if ( v227 )
      goto LABEL_514;
    v227 = sub_140EB9F90(v488, (char *)&v424 + 8);
    if ( v227 )
      goto LABEL_514;
    if ( ((__int64)v488[0] & 1) == 0 && BYTE1(v488[0]) )
      sub_1403B45A0(*(_QWORD *)v488[1], "}{falsetrue", 1);
    v227 = *(_QWORD *)&v448[8];
    if ( *(_QWORD *)v448 == -1 )
    {
LABEL_516:
      v228 = 3;
      goto LABEL_517;
    }
    v466 = *(__m128i *)v448;
    v467.m128i_i64[0] = *(_QWORD *)&v448[16];
    v232 = 1;
    if ( !BYTE1(v438) )
    {
      if ( *((_QWORD *)&v426 + 1) )
      {
        v233 = *((_QWORD *)&v424 + 1);
        v234 = 0;
        if ( (unsigned __int64)v426 >= *((_QWORD *)&v424 + 1) )
          v234 = *((_QWORD *)&v424 + 1);
        v235 = v426 - v234;
        v236 = *((_QWORD *)&v426 + 1) - (*((_QWORD *)&v424 + 1) - (v426 - v234));
        if ( *((_QWORD *)&v426 + 1) <= (unsigned __int64)(*((_QWORD *)&v424 + 1) - v235) )
        {
          v233 = v235 + *((_QWORD *)&v426 + 1);
          goto LABEL_565;
        }
      }
      else
      {
        v235 = 0;
        v233 = 0;
LABEL_565:
        v236 = 0;
      }
      v237 = v425;
      v238 = v425 + 56 * v235;
      v239 = 56 * v233 - 56 * v235;
      while ( v239 )
      {
        v239 -= 56;
        v70 = *(_QWORD *)(v238 + 24) <= *(_QWORD *)(v238 + 48);
        v238 += 56;
        if ( !v70 )
          goto LABEL_575;
      }
      v240 = 56 * v236;
      while ( v240 )
      {
        v240 -= 56;
        v70 = *(_QWORD *)(v237 + 24) <= *(_QWORD *)(v237 + 48);
        v237 += 56;
        if ( !v70 )
          goto LABEL_575;
      }
      v232 = 0;
    }
LABEL_575:
    v494 = v232;
    sub_140F7D510(&v463, v469, v470);
    *(_QWORD *)v345 = &v400;
    *(_QWORD *)&v345[8] = &unk_141A60890;
    *(_QWORD *)&v345[16] = &v478;
    *(_QWORD *)&v345[24] = &off_141A608B0;
    *(_QWORD *)&v345[32] = &v466;
    *(_QWORD *)&v345[40] = &off_141A608B0;
    *(_QWORD *)&v345[48] = &v397;
    *(_QWORD *)&v345[56] = &unk_141A63E88;
    *(_QWORD *)&v345[64] = &v396;
    *(_QWORD *)&v345[72] = &unk_141A63E88;
    *(_QWORD *)&v346 = &v447;
    *((_QWORD *)&v346 + 1) = &unk_141A63EA8;
    v347.m128i_i64[0] = (__int64)&v415;
    v347.m128i_i64[1] = (__int64)&off_141A608B0;
    v348.m128i_i64[0] = (__int64)&v438;
    v348.m128i_i64[1] = (__int64)&unk_141A63EA8;
    v349 = &v494;
    v350 = &unk_141A63EA8;
    v351 = &v463;
    v352 = &off_141A608B0;
    sub_140E94840(
      (unsigned int)v476,
      v485,
      (unsigned int)"INSERT INTO files(path,fingerprint,state,offset,ordinal,complete,thread_id,subagent,incomplete,rollo"
                    "ut_id)\n"
                    "         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n"
                    "         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=exclud"
                    "ed.ordinal,\n"
                    "         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n"
                    "         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts(sou"
                    "rce,key,thread_id,turn_id,ts,kind,priority,data)\n"
                    "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                    "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                    "            WHERE excluded.priority>=facts.priority",
      471,
      (__int64)v345,
      10);
    if ( *(_QWORD *)v476 != -1 )
    {
      v241 = _mm_loadu_si128((const __m128i *)v476);
      v242 = _mm_loadu_si128((const __m128i *)&v476[16]);
      *(_OWORD *)&v448[48] = *(_OWORD *)&v476[48];
      *(_OWORD *)&v448[32] = *(_OWORD *)&v476[32];
      *(__m128i *)&v448[16] = v242;
      *(__m128i *)v448 = v241;
      v393[0] = v448;
      v393[1] = sub_141404740;
      sub_1416ABFD0(v488, &unk_141A6499F, v393);
      v227 = (__int64)v488[0];
      v487 = (char *)v488[1];
      v483 = v489.m128i_i64[0];
      sub_140E96F40(v448);
      if ( v463.m128i_i64[0] )
        sub_140001660(v463.m128i_i64[1], v463.m128i_i64[0], 1);
      v228 = 10;
      if ( v466.m128i_i64[0] )
        sub_140001660(v466.m128i_i64[1], v466.m128i_i64[0], 1);
LABEL_517:
      if ( v478.m128i_i64[0] )
        sub_140001660(v478.m128i_i64[1], v478.m128i_i64[0], 1);
LABEL_519:
      v38 = (unsigned __int8)v509;
      goto LABEL_476;
    }
    if ( v463.m128i_i64[0] )
      sub_140001660(v463.m128i_i64[1], v463.m128i_i64[0], 1);
    if ( v466.m128i_i64[0] )
      sub_140001660(v466.m128i_i64[1], v466.m128i_i64[0], 1);
    if ( v478.m128i_i64[0] )
      sub_140001660(v478.m128i_i64[1], v478.m128i_i64[0], 1);
    v514 = 1;
    sub_141402AB0(
      (unsigned int)v448,
      v398,
      v485,
      (unsigned int)"INSERT INTO facts(source,key,thread_id,turn_id,ts,kind,priority,data)\n"
                    "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                    "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                    "            WHERE excluded.priority>=facts.priority",
      276);
    if ( !*(_QWORD *)v448 )
    {
      v251 = _mm_loadu_si128((const __m128i *)&v448[8]);
      v252 = _mm_loadu_si128((const __m128i *)&v448[24]);
      v491 = *(__m128i *)&v448[56];
      v490 = *(__m128i *)&v448[40];
      v489 = v252;
      *(__m128i *)v488 = v251;
      v514 = 1;
      sub_140F82200(v345, v488);
      LOBYTE(v38) = v509;
      v227 = *(_QWORD *)&v345[8];
      v228 = *(_QWORD *)v345;
      v483 = *(_QWORD *)&v345[24];
      v487 = *(char **)&v345[16];
      *(_OWORD *)&v464[16] = *(_OWORD *)&v345[64];
      *(_OWORD *)v464 = *(_OWORD *)&v345[48];
      v463 = *(__m128i *)&v345[32];
      v455 = v346;
      v467 = *(__m128i *)&v345[48];
      v468 = *(_OWORD *)&v345[64];
      v466 = *(__m128i *)&v345[32];
      v253 = _mm_load_si128(&v466);
      v254 = _mm_load_si128(&v467);
      v454 = *(_OWORD *)&v345[64];
      v453 = v254;
      v452 = v253;
      goto LABEL_476;
    }
    v243 = _mm_loadu_si128((const __m128i *)&v448[8]);
    v466 = _mm_loadu_si128((const __m128i *)&v448[24]);
    v467 = *(__m128i *)&v448[40];
    v468 = *(_OWORD *)&v448[56];
    *(_QWORD *)v476 = *(_QWORD *)v448;
    *(__m128i *)&v476[8] = v243;
    *(_OWORD *)&v476[56] = *(_OWORD *)&v448[56];
    *(_OWORD *)&v476[40] = *(_OWORD *)&v448[40];
    *(__m128i *)&v476[24] = v466;
    v244 = v214 + 144 * v215;
LABEL_588:
    if ( v214 == v244 )
    {
      v514 = 1;
      sub_140E96E40(v476);
      v514 = 1;
      v255 = sub_140F7EAD0();
      v514 = 1;
      sub_140E94610(v476, v485, v255);
      if ( *(_QWORD *)v476 != -1 )
      {
        v256 = _mm_loadu_si128((const __m128i *)v476);
        v257 = _mm_loadu_si128((const __m128i *)&v476[16]);
        *(_OWORD *)&v448[48] = *(_OWORD *)&v476[48];
        *(_OWORD *)&v448[32] = *(_OWORD *)&v476[32];
        *(__m128i *)&v448[16] = v257;
        *(__m128i *)v448 = v256;
        v514 = 1;
        sub_140F82200(v345, v448);
        LOBYTE(v38) = v509;
        v227 = *(_QWORD *)&v345[8];
        v228 = *(_QWORD *)v345;
        v483 = *(_QWORD *)&v345[24];
        v487 = *(char **)&v345[16];
        v258 = _mm_loadu_si128((const __m128i *)&v345[48]);
        v452 = _mm_loadu_si128((const __m128i *)&v345[32]);
        v453 = v258;
        v454 = *(_OWORD *)&v345[64];
        v455 = v346;
        goto LABEL_476;
      }
      v514 = 1;
      sub_140F7E910(v345, v485);
      v228 = *(_QWORD *)v345;
      if ( *(_QWORD *)v345 != -1 )
      {
        v227 = *(_QWORD *)&v345[8];
        v483 = *(_QWORD *)&v345[24];
        v487 = *(char **)&v345[16];
        v263 = _mm_loadu_si128((const __m128i *)&v345[48]);
        v452 = _mm_loadu_si128((const __m128i *)&v345[32]);
        v453 = v263;
        v454 = *(_OWORD *)&v345[64];
        v455 = v346;
        goto LABEL_519;
      }
      v514 = 0;
      sub_140EBD5C0(v476, v485);
      if ( *(_QWORD *)v476 == -1 )
      {
        v38 = (unsigned __int8)v509;
        if ( (_BYTE)v502 )
          goto LABEL_615;
LABEL_484:
        sub_141696800(0, 8000000);
        sub_14062C200(v401);
        sub_1403FC2D0(&v460);
        if ( v460 )
          sub_140001660(v461, 144 * v460, 8);
        LODWORD(v480) = 0;
        if ( !*(_BYTE *)(v493 + 80) )
          goto LABEL_683;
        continue;
      }
      v264 = _mm_loadu_si128((const __m128i *)v476);
      v265 = _mm_loadu_si128((const __m128i *)&v476[16]);
      *(_OWORD *)&v448[48] = *(_OWORD *)&v476[48];
      *(_OWORD *)&v448[32] = *(_OWORD *)&v476[32];
      *(__m128i *)&v448[16] = v265;
      *(__m128i *)v448 = v264;
      v514 = 0;
      sub_140F82200(v345, v448);
      LOBYTE(v38) = v509;
      v227 = *(_QWORD *)&v345[8];
      v228 = *(_QWORD *)v345;
      v483 = *(_QWORD *)&v345[24];
      v487 = *(char **)&v345[16];
      v266 = _mm_loadu_si128((const __m128i *)&v345[48]);
      v452 = _mm_loadu_si128((const __m128i *)&v345[32]);
      v453 = v266;
      v454 = *(_OWORD *)&v345[64];
      v455 = v346;
      v212 = v502;
      if ( *(_QWORD *)v345 == -1 )
        goto LABEL_483;
      goto LABEL_706;
    }
    break;
  }
  if ( !*(_QWORD *)&v476[8] )
    sub_141939020(&off_141A641B8);
  sub_140E99B40(v448, v214 + 96);
  v227 = *(_QWORD *)&v448[8];
  if ( *(_QWORD *)v448 == -1 )
  {
    v228 = 3;
    goto LABEL_608;
  }
  v466 = *(__m128i *)v448;
  v467.m128i_i64[0] = *(_QWORD *)&v448[16];
  v245 = v214;
  *(_QWORD *)v345 = &v400;
  *(_QWORD *)&v345[8] = &unk_141A60890;
  *(_QWORD *)&v345[16] = v214;
  *(_QWORD *)&v345[24] = &off_141A608B0;
  *(_QWORD *)&v345[32] = v214 + 24;
  *(_QWORD *)&v345[40] = &off_141A608B0;
  *(_QWORD *)&v345[48] = v214 + 48;
  *(_QWORD *)&v345[56] = &off_141A608B0;
  *(_QWORD *)&v345[64] = v214 + 128;
  *(_QWORD *)&v345[72] = &unk_141A63E88;
  *(_QWORD *)&v346 = v214 + 72;
  v214 += 144;
  *((_QWORD *)&v346 + 1) = &off_141A608B0;
  v347.m128i_i64[0] = v245 + 136;
  v347.m128i_i64[1] = (__int64)&unk_141A641D0;
  v348.m128i_i64[0] = (__int64)&v466;
  v348.m128i_i64[1] = (__int64)&off_141A608B0;
  v246 = (int)sub_1417A9630(*(_QWORD *)&v476[64]);
  v247 = 0;
  for ( i = 0; i != 128; i += 16 )
  {
    v488[0] = &v345[i];
    if ( v247++ >= v246 )
      break;
    sub_140E91D00(v448, &v476[8], v488, v247);
    v250 = *(_QWORD *)v448;
    if ( *(_QWORD *)v448 != -1 )
    {
      v247 = *(_QWORD *)&v448[8];
      v246 = *(_QWORD *)&v448[16];
      v259 = _mm_loadu_si128((const __m128i *)&v448[40]);
      v457 = _mm_loadu_si128((const __m128i *)&v448[24]);
      v458 = v259;
      v459 = *(_QWORD *)&v448[56];
      goto LABEL_605;
    }
  }
  if ( v247 == v246 )
  {
    sub_140EBD680(&v463, *(_QWORD *)&v476[8], *(_QWORD *)&v476[64]);
    if ( v463.m128i_i64[0] != -1 )
      goto LABEL_606;
    if ( v466.m128i_i64[0] )
      sub_140001660(v466.m128i_i64[1], v466.m128i_i64[0], 1);
    goto LABEL_588;
  }
  v250 = 0x8000000000000013uLL;
LABEL_605:
  v463.m128i_i64[0] = v250;
  v463.m128i_i64[1] = v247;
  *(_QWORD *)v464 = v246;
  v465 = v459;
  v260 = _mm_load_si128(&v457);
  *(__m128i *)&v464[24] = _mm_load_si128(&v458);
  *(__m128i *)&v464[8] = v260;
LABEL_606:
  v261 = _mm_loadu_si128((const __m128i *)&v464[16]);
  v491 = _mm_loadu_si128((const __m128i *)&v464[32]);
  v490 = v261;
  v489 = *(__m128i *)v464;
  *(__m128i *)v488 = v463;
  sub_140F82200(v448, v488);
  v227 = *(_QWORD *)&v448[8];
  v228 = *(_QWORD *)v448;
  v483 = *(_QWORD *)&v448[24];
  v487 = *(char **)&v448[16];
  v262 = _mm_loadu_si128((const __m128i *)&v448[48]);
  v452 = _mm_loadu_si128((const __m128i *)&v448[32]);
  v453 = v262;
  v454 = *(_OWORD *)&v448[64];
  v455 = *(_OWORD *)&v448[80];
  if ( v466.m128i_i64[0] )
    sub_140001660(v466.m128i_i64[1], v466.m128i_i64[0], 1);
LABEL_608:
  v514 = 1;
  sub_140E96E40(v476);
  LOBYTE(v38) = v509;
LABEL_476:
  v212 = v502;
LABEL_482:
  sub_140E96CB0(v485);
  if ( v228 != -1 )
  {
LABEL_706:
    v315 = _mm_load_si128(&v452);
    v316 = _mm_load_si128(&v453);
    v317 = v454;
    v318 = v495;
    *(_OWORD *)(v495 + 80) = v455;
    *(_OWORD *)(v318 + 64) = v317;
    *(__m128i *)(v318 + 48) = v316;
    *(__m128i *)(v318 + 32) = v315;
    *(_QWORD *)v318 = v228;
    *(_QWORD *)(v318 + 8) = v227;
    *(_QWORD *)(v318 + 16) = v487;
    *(_QWORD *)(v318 + 24) = v483;
    goto LABEL_707;
  }
LABEL_483:
  if ( !v212 )
    goto LABEL_484;
LABEL_615:
  sub_14062C200(v401);
  sub_1402990B0(&v460);
  *(_QWORD *)v495 = -1;
  v267 = v492;
  v510 = v492;
  sub_14001EB50(v500, v503);
  v512 = v267;
  sub_140E988E0(&v409);
  result = (_OWORD *)sub_14062C200(&v471);
  if ( v267 )
    result = (_OWORD *)sub_140E953E0(&v360);
LABEL_645:
  if ( v450.m128i_i64[0] )
    return (_OWORD *)sub_140001660(v450.m128i_i64[1], v450.m128i_i64[0], 1);
  return result;
}
