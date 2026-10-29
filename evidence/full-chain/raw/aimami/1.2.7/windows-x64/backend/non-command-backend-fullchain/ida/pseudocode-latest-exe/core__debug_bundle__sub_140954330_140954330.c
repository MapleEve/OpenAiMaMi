// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140954330 | successor of pre-update 0x140c2bb40 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140954330(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r12
  __int128 *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // rdi
  char v40; // bl
  __int64 v41; // rdx
  __int64 v42; // rsi
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  char v45; // r14
  char v46; // si
  unsigned __int8 v47; // al
  char v48; // di
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int128 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rbx
  const char *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  void *v62; // r8
  _QWORD *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rbx
  __int64 v74; // r12
  __int64 v75; // r13
  __int64 v76; // rdi
  __int64 v77; // r14
  __int64 v78; // r15
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  const char *v88; // rax
  const char *v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // r8d
  unsigned __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r15
  const char *v98; // rax
  const char *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rax
  void *v104; // rdx
  _OWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rsi
  _QWORD *v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm2
  void *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  void *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int128 v123; // rdi
  __int64 v124; // r14
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  void *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  void *v134; // rax
  __int64 v135; // rdx
  void *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  _QWORD *v139; // rax
  __int64 v140; // rdx
  _DWORD *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  _DWORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  void *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r15
  __int128 v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int128 v162; // rdi
  __int64 v163; // r14
  __int64 v164; // rbx
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rdx
  void *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rdi
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rcx
  __int64 v176; // rdx
  __int128 v177; // rdi
  __int64 v178; // r14
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  void *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // r14
  char v185; // r15
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  void *v189; // rax
  __int64 v190; // r14
  char v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rbx
  __int64 v195; // r14
  char v196; // al
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  void *v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  void *v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rsi
  _QWORD *v207; // rdi
  __int64 v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rdi
  void *v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rsi
  __int128 v220; // xmm0
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // rbx
  void *v225; // rax
  __int64 v226; // rdx
  void *v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  _OWORD *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r15
  __int64 v234; // rsi
  void *v235; // rdx
  __int64 v236; // r15
  __int64 v237; // rdx
  __int64 v238; // rcx
  void *v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  void *v242; // rax
  __int128 v243; // xmm0
  __int128 v244; // xmm1
  __int128 v245; // xmm2
  int v246; // edi
  int v247; // esi
  _BYTE *v248; // rdx
  unsigned __int128 v249; // krB0_16
  __int64 v250; // rcx
  __int64 v251; // rax
  _BYTE *v252; // rax
  __int64 v253; // r8
  __int64 v254; // r12
  unsigned __int64 v255; // r15
  __int64 v256; // rdi
  __int64 v257; // r14
  __int64 v258; // rdi
  __int64 v259; // r9
  __int64 v260; // rax
  __int64 v261; // rdi
  __int64 v262; // r14
  __int64 v263; // rax
  __int64 v264; // rsi
  unsigned __int64 v265; // rdi
  char *v266; // r14
  __int64 v267; // r12
  __int64 v268; // rsi
  __int64 v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rcx
  void *v272; // rax
  __int64 v273; // r14
  __int64 v274; // rdx
  __int64 v275; // rdx
  __int64 v276; // rcx
  unsigned __int64 v277; // rdi
  __int64 v278; // r14
  unsigned __int64 v279; // r8
  __int64 v280; // rdi
  __int64 v281; // rsi
  __int64 v282; // rdi
  __int64 v283; // rdx
  __int64 v284; // rcx
  void *v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  void *v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rbx
  char v291; // r14
  __int64 v292; // rax
  _QWORD *v293; // rsi
  __int64 v294; // rdx
  unsigned __int64 v295; // rax
  __int128 v296; // xmm0
  __int128 v297; // xmm1
  __int128 v298; // xmm2
  __int128 v299; // xmm0
  __int128 v300; // xmm1
  __int128 v301; // xmm2
  __int64 v302; // rbx
  __int128 v303; // kr110_16
  __int128 v304; // xmm0
  __int128 v305; // xmm1
  __int128 v306; // xmm2
  __int64 v307; // rax
  __int128 v308; // xmm0
  __int128 v309; // xmm1
  __int64 v310; // rax
  __int64 v311; // rax
  __int64 v312; // rdx
  __int64 v313; // rdi
  void *v314; // rsi
  __int64 v315; // rbx
  __int64 v316; // rsi
  __int64 v317; // rdx
  __int64 v318; // rcx
  char v319[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v320; // [rsp+40h] [rbp-40h]
  __int64 v321; // [rsp+48h] [rbp-38h]
  __int64 v322; // [rsp+3F8h] [rbp+378h]
  __int64 v323; // [rsp+400h] [rbp+380h]
  __int64 v324; // [rsp+408h] [rbp+388h]
  char v325; // [rsp+410h] [rbp+390h]
  __int64 v326; // [rsp+418h] [rbp+398h] BYREF
  _OWORD v327[22]; // [rsp+420h] [rbp+3A0h] BYREF
  char v328; // [rsp+584h] [rbp+504h]
  __int128 v329; // [rsp+820h] [rbp+7A0h] BYREF
  __int128 v330; // [rsp+830h] [rbp+7B0h]
  __int128 v331; // [rsp+840h] [rbp+7C0h]
  __int128 v332; // [rsp+850h] [rbp+7D0h]
  __int128 v333; // [rsp+860h] [rbp+7E0h]
  __int128 v334; // [rsp+870h] [rbp+7F0h]
  __int64 v335; // [rsp+BE0h] [rbp+B60h]
  __int64 v336; // [rsp+BE8h] [rbp+B68h]
  __int64 v337; // [rsp+BF0h] [rbp+B70h]
  char v338; // [rsp+BF8h] [rbp+B78h]
  _OWORD v339[5]; // [rsp+C00h] [rbp+B80h] BYREF
  __int64 v340; // [rsp+C50h] [rbp+BD0h]
  __int128 v341; // [rsp+C58h] [rbp+BD8h] BYREF
  __int128 v342; // [rsp+C68h] [rbp+BE8h]
  __int128 *v343; // [rsp+C78h] [rbp+BF8h]
  __int64 v344; // [rsp+E20h] [rbp+DA0h]
  __int64 v345; // [rsp+E28h] [rbp+DA8h]
  __int64 v346; // [rsp+1018h] [rbp+F98h]
  __int64 v347; // [rsp+1020h] [rbp+FA0h]
  __int64 v348; // [rsp+1028h] [rbp+FA8h]
  char v349; // [rsp+1030h] [rbp+FB0h]
  __int128 v350; // [rsp+1038h] [rbp+FB8h]
  __int64 v351; // [rsp+1048h] [rbp+FC8h]
  char v352[8]; // [rsp+1050h] [rbp+FD0h] BYREF
  unsigned __int8 v353; // [rsp+1058h] [rbp+FD8h]
  __int128 v354; // [rsp+11D0h] [rbp+1150h]
  __int128 v355; // [rsp+11E0h] [rbp+1160h]
  __int128 v356; // [rsp+11F0h] [rbp+1170h]
  __int64 v357; // [rsp+1200h] [rbp+1180h]
  __int128 v358; // [rsp+1208h] [rbp+1188h]
  __int64 v359; // [rsp+1218h] [rbp+1198h]
  __int64 v360; // [rsp+1220h] [rbp+11A0h]
  __int64 v361; // [rsp+1228h] [rbp+11A8h]
  __int64 v362; // [rsp+1230h] [rbp+11B0h]
  __int64 v363; // [rsp+1238h] [rbp+11B8h]
  __int64 v364; // [rsp+1240h] [rbp+11C0h]
  __int64 v365; // [rsp+1248h] [rbp+11C8h]
  __int128 v366; // [rsp+1250h] [rbp+11D0h] BYREF
  __int128 v367; // [rsp+1260h] [rbp+11E0h]
  __int128 v368; // [rsp+1270h] [rbp+11F0h]
  __int128 v369; // [rsp+1280h] [rbp+1200h]
  __int128 v370; // [rsp+1290h] [rbp+1210h]
  __int64 v371; // [rsp+12A0h] [rbp+1220h] BYREF
  __m256i v372; // [rsp+12A8h] [rbp+1228h]
  __int128 v373; // [rsp+12C8h] [rbp+1248h]
  __int128 v374; // [rsp+12D8h] [rbp+1258h]
  __int64 v375; // [rsp+12E8h] [rbp+1268h]
  _BYTE v376[8]; // [rsp+12F0h] [rbp+1270h] BYREF
  __int128 v377; // [rsp+12F8h] [rbp+1278h] BYREF
  __int64 v378; // [rsp+1308h] [rbp+1288h]
  __m256i v379; // [rsp+1310h] [rbp+1290h] BYREF
  __int128 v380; // [rsp+1330h] [rbp+12B0h]
  __int128 v381; // [rsp+1340h] [rbp+12C0h]
  __int64 v382; // [rsp+1350h] [rbp+12D0h]
  __int128 v383; // [rsp+1358h] [rbp+12D8h] BYREF
  __int64 v384; // [rsp+1368h] [rbp+12E8h]
  _BYTE v385[96]; // [rsp+1370h] [rbp+12F0h] BYREF
  __int128 v386; // [rsp+13D0h] [rbp+1350h]
  __m256i *v387; // [rsp+13E0h] [rbp+1360h]
  __int64 v388; // [rsp+13E8h] [rbp+1368h]
  __int64 v389; // [rsp+13F0h] [rbp+1370h]
  __int64 v390; // [rsp+13F8h] [rbp+1378h]
  __int128 v391; // [rsp+1400h] [rbp+1380h]
  const char *v392; // [rsp+1410h] [rbp+1390h]
  __int64 v393; // [rsp+1418h] [rbp+1398h]
  __int128 v394; // [rsp+1420h] [rbp+13A0h]
  __int128 v395; // [rsp+1430h] [rbp+13B0h]
  __int128 v396; // [rsp+1750h] [rbp+16D0h] BYREF
  __int128 v397; // [rsp+1760h] [rbp+16E0h]
  unsigned __int64 v398; // [rsp+1770h] [rbp+16F0h]
  __int128 v399; // [rsp+1778h] [rbp+16F8h] BYREF
  __int64 v400; // [rsp+1788h] [rbp+1708h]
  _BYTE v401[24]; // [rsp+1790h] [rbp+1710h] BYREF
  char v402; // [rsp+17A8h] [rbp+1728h]
  __int64 v403; // [rsp+1870h] [rbp+17F0h]
  __int64 v404; // [rsp+1878h] [rbp+17F8h]
  __int128 v405; // [rsp+1880h] [rbp+1800h] BYREF
  __int128 v406; // [rsp+1890h] [rbp+1810h]
  __int64 v407; // [rsp+18A8h] [rbp+1828h] BYREF
  __int64 v408; // [rsp+18B0h] [rbp+1830h]
  __int64 v409; // [rsp+18B8h] [rbp+1838h]
  __int64 v410; // [rsp+18C0h] [rbp+1840h]
  __int64 v411; // [rsp+18C8h] [rbp+1848h]
  __int128 v412; // [rsp+18D0h] [rbp+1850h] BYREF
  __int64 v413; // [rsp+18E0h] [rbp+1860h]
  __m256i v414; // [rsp+18E8h] [rbp+1868h] BYREF
  __int128 v415; // [rsp+1908h] [rbp+1888h]
  __int64 v416; // [rsp+1918h] [rbp+1898h]
  __int64 v417; // [rsp+1920h] [rbp+18A0h] BYREF
  __int64 v418; // [rsp+1928h] [rbp+18A8h]
  __int128 v419; // [rsp+1930h] [rbp+18B0h] BYREF
  __int128 v420; // [rsp+1940h] [rbp+18C0h] BYREF
  __int64 v421; // [rsp+1950h] [rbp+18D0h]
  __int64 v422; // [rsp+1958h] [rbp+18D8h] BYREF
  __int64 v423; // [rsp+1960h] [rbp+18E0h]
  __int64 v424; // [rsp+1968h] [rbp+18E8h]
  __int128 v425; // [rsp+1970h] [rbp+18F0h] BYREF
  __int64 v426; // [rsp+1980h] [rbp+1900h]
  __int64 v427; // [rsp+1990h] [rbp+1910h] BYREF
  __int64 v428; // [rsp+1998h] [rbp+1918h]
  __int64 v429; // [rsp+19A0h] [rbp+1920h]
  char v430; // [rsp+19A8h] [rbp+1928h]
  __m256i v431; // [rsp+19B0h] [rbp+1930h] BYREF
  __int128 v432; // [rsp+19D0h] [rbp+1950h]
  __int64 v433; // [rsp+19E0h] [rbp+1960h]
  char v434; // [rsp+19EFh] [rbp+196Fh] BYREF
  __int64 v435; // [rsp+19F0h] [rbp+1970h]
  __int64 v436; // [rsp+19F8h] [rbp+1978h]
  __m256i v437; // [rsp+1A00h] [rbp+1980h] BYREF
  __int128 v438; // [rsp+1A20h] [rbp+19A0h]
  __int64 v439; // [rsp+1A30h] [rbp+19B0h]
  _BYTE v440[24]; // [rsp+1A40h] [rbp+19C0h] BYREF
  __int64 v441; // [rsp+1A58h] [rbp+19D8h]
  __int64 v442; // [rsp+1A68h] [rbp+19E8h]
  __int64 v443; // [rsp+1A70h] [rbp+19F0h]
  __int64 v444; // [rsp+1A78h] [rbp+19F8h]
  __m256i v445; // [rsp+1A80h] [rbp+1A00h] BYREF
  __int128 v446; // [rsp+1AA0h] [rbp+1A20h]
  __int128 v447; // [rsp+1AB0h] [rbp+1A30h]
  __int128 v448; // [rsp+1AC0h] [rbp+1A40h]
  __int128 v449; // [rsp+1AD0h] [rbp+1A50h]
  __m256i v450; // [rsp+1AE0h] [rbp+1A60h] BYREF
  __int128 v451; // [rsp+1B00h] [rbp+1A80h]
  __int128 v452; // [rsp+1B10h] [rbp+1A90h]
  __int128 v453; // [rsp+1B20h] [rbp+1AA0h]
  __int64 v454; // [rsp+1B30h] [rbp+1AB0h]
  __int64 v455; // [rsp+1B40h] [rbp+1AC0h]
  __int64 v456; // [rsp+1B48h] [rbp+1AC8h]
  int v457; // [rsp+1B54h] [rbp+1AD4h]
  __int64 v458; // [rsp+1B58h] [rbp+1AD8h]
  char v459; // [rsp+1B67h] [rbp+1AE7h] BYREF
  __int64 v460; // [rsp+1B68h] [rbp+1AE8h]
  _BYTE v461[96]; // [rsp+1B70h] [rbp+1AF0h] BYREF
  __int64 v462; // [rsp+1BE0h] [rbp+1B60h]
  char v463; // [rsp+1BEEh] [rbp+1B6Eh]
  char v464; // [rsp+1BEFh] [rbp+1B6Fh]
  char v465; // [rsp+1BF0h] [rbp+1B70h]
  char v466; // [rsp+1BF1h] [rbp+1B71h]
  char v467; // [rsp+1BF2h] [rbp+1B72h]
  char v468; // [rsp+1BF3h] [rbp+1B73h]
  char v469; // [rsp+1BF4h] [rbp+1B74h]
  char v470; // [rsp+1BF5h] [rbp+1B75h]
  char v471; // [rsp+1BF6h] [rbp+1B76h]
  char v472; // [rsp+1BF7h] [rbp+1B77h]
  __int64 v473; // [rsp+1BF8h] [rbp+1B78h]
  char v474; // [rsp+1C05h] [rbp+1B85h]
  char v475; // [rsp+1C06h] [rbp+1B86h]
  char v476; // [rsp+1C07h] [rbp+1B87h]
  char v477; // [rsp+1C08h] [rbp+1B88h]
  char v478; // [rsp+1C09h] [rbp+1B89h]
  char v479; // [rsp+1C0Ah] [rbp+1B8Ah]
  char v480; // [rsp+1C0Bh] [rbp+1B8Bh]
  char v481; // [rsp+1C0Ch] [rbp+1B8Ch]
  char v482; // [rsp+1C0Dh] [rbp+1B8Dh]
  char v483; // [rsp+1C0Eh] [rbp+1B8Eh]
  char v484; // [rsp+1C0Fh] [rbp+1B8Fh]
  __int64 v485; // [rsp+1C10h] [rbp+1B90h]
  char v486; // [rsp+1C1Eh] [rbp+1B9Eh]
  char v487; // [rsp+1C1Fh] [rbp+1B9Fh]
  __int64 v488; // [rsp+1C20h] [rbp+1BA0h]
  char v489; // [rsp+1C2Fh] [rbp+1BAFh]
  __int64 v490; // [rsp+1C30h] [rbp+1BB0h]

  v490 = -2;
  v456 = a1;
  sub_140A2C320(&v341);
  sub_140A2EC60(v319, &v341);
  v7 = sub_140A2C1C0(v319);
  if ( v7 )
  {
    v8 = v456;
    *(_QWORD *)(v456 + 8) = 2;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)v8 = -1;
    goto LABEL_3;
  }
  sub_140A2C460(&v420, v319);
  v484 = 1;
  sub_140A5CBE0(&v326, v319, 0);
  if ( v326 == -1 )
  {
    v334 = v327[5];
    v333 = v327[4];
    v332 = v327[3];
    v331 = v327[2];
    v330 = v327[1];
    v329 = v327[0];
    if ( v322 == -1 )
    {
      sub_140A2DA60((__int64)v401, v320, v321);
    }
    else
    {
      v16 = v324;
      if ( v324 )
      {
        v17 = v323;
        nullsub_1(v11, v10);
        v18 = sub_140001650(v16, 1);
        if ( !v18 )
          sub_14196B2DB(1, v16);
        *(_QWORD *)v401 = v16;
        *(_QWORD *)&v401[8] = v18;
        sub_1419234B0(v18, v17, v16);
        *(_QWORD *)&v401[16] = v16;
      }
      else
      {
        *(_QWORD *)v401 = 0;
        *(_QWORD *)&v401[8] = 1;
        *(_QWORD *)&v401[16] = 0;
      }
      v402 = v325;
    }
    sub_140A2DE50((__int64)&v341, (__int64)v319, (__int128 *)v401);
    *(_QWORD *)v461 = 0;
    *(_QWORD *)&v461[8] = 1;
    *(_QWORD *)&v461[16] = 0;
    *(_QWORD *)&v385[16] = 1610612768;
    *(_QWORD *)v385 = v461;
    *(_QWORD *)&v385[8] = &off_141A66E10;
    if ( (unsigned __int8)sub_140D76130(&v329, v385) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v434,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v435 = *(_QWORD *)&v461[8];
    v443 = *(_QWORD *)v461;
    v462 = *(_QWORD *)&v461[16];
    sub_1419234B0(v385, &v341, 992);
    v484 = 1;
    sub_140906570(v327);
    v12 = -1;
  }
  else
  {
    sub_1419234B0(&v341, &v326, 1032);
    sub_1403F7DF0(&v329, &v341);
    v12 = qword_141A67278[v353];
    v13 = dword_141A67298[v353];
    nullsub_1(qword_141A67278, v14);
    v15 = sub_140001650(v12, 1);
    if ( !v15 )
      sub_14196B2DB(1, v12);
    v444 = v15;
    sub_1419234B0(v15, (char *)dword_141A67298 + v13, v12);
    sub_1419234B0(v385, &v329, 992);
    sub_140038710(&v341);
    if ( (_QWORD)v350 )
      sub_140001660(*((_QWORD *)&v350 + 1), v350, 1);
    v443 = -1;
  }
  v442 = v12;
  sub_1419234B0(&v329, v385, 992);
  if ( v335 == -1 )
  {
    v481 = 1;
    sub_140A2DA60((__int64)&v417, SDWORD2(v329), v330);
    v488 = v418;
    v21 = v419;
  }
  else
  {
    v21 = v337;
    if ( v337 )
    {
      v22 = v336;
      nullsub_1(v20, v19);
      v23 = sub_140001650(v21, 1);
      if ( !v23 )
      {
        v481 = 1;
        sub_14196B2DB(1, v21);
      }
      v24 = v23;
      v417 = v21;
      v418 = v23;
      sub_1419234B0(v23, v22, v21);
      *(_QWORD *)&v419 = v21;
    }
    else
    {
      v417 = 0;
      v418 = 1;
      *(_QWORD *)&v419 = 0;
      v24 = 1;
    }
    v488 = v24;
    BYTE8(v419) = v338;
  }
  v25 = *((_QWORD *)&v420 + 1);
  v26 = *((_QWORD *)&v420 + 1) + 32 * v421;
  v27 = &v419;
  while ( v25 != v26 )
  {
    v28 = *(_QWORD *)(v25 + 8);
    v29 = *(_QWORD *)(v25 + 16);
    v487 = 1;
    v486 = 1;
    v25 += 32;
    if ( (unsigned __int8)sub_140222930(v28, v29, v488, v21) )
    {
      LOBYTE(v27) = 1;
      goto LABEL_33;
    }
  }
  v485 = v417;
  v30 = v421;
  if ( v421 == (_QWORD)v420 )
    sub_1419397B0(&v420);
  v31 = *((_QWORD *)&v420 + 1);
  v32 = 32 * v30;
  *(_QWORD *)(*((_QWORD *)&v420 + 1) + v32) = v485;
  *(_QWORD *)(v31 + v32 + 8) = v488;
  *(_OWORD *)(v31 + v32 + 16) = v419;
  v421 = v30 + 1;
  LODWORD(v27) = 0;
LABEL_33:
  v487 = (char)v27;
  v486 = 1;
  v33 = sub_1416B1B90(a2, a3);
  v457 = (int)v27;
  if ( v33
    && (v487 = (char)v27, v486 = 1, sub_1416E2AB0(&v341, v33, v34), (_DWORD)v341 != 1)
    && (_QWORD)v342 == 3
    && (**((_BYTE **)&v341 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(**((_BYTE **)&v341 + 1) - 65) < 0x1Au))) == 122
    && (*(_BYTE *)(*((_QWORD *)&v341 + 1) + 1LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*((_QWORD *)&v341 + 1) + 1LL) - 65) < 0x1Au))) == 105
    && (*(_BYTE *)(*((_QWORD *)&v341 + 1) + 2LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*((_QWORD *)&v341 + 1) + 2LL) - 65) < 0x1Au))) == 112 )
  {
    v487 = (char)v27;
    v486 = 1;
    sub_1416B0D00(&v405, a2, a3);
  }
  else
  {
    v487 = (char)v27;
    v486 = 1;
    sub_1416B0D00(&v341, a2, a3);
    sub_1416C0230(&v341, aZip, 3);
    v406 = v342;
    v405 = v341;
  }
  v483 = 1;
  v35 = sub_1416B19D0(*((_QWORD *)&v405 + 1), v406);
  v8 = v456;
  if ( v35 )
  {
    LOBYTE(v341) = 1;
    v483 = 1;
    v37 = sub_1416B9760(&v341, v35, v36);
    if ( v37 )
    {
      *(_QWORD *)(v8 + 8) = 2;
      *(_QWORD *)(v8 + 16) = v37;
      *(_QWORD *)v8 = -1;
      v38 = 1;
      v39 = v442;
      v40 = v457;
      v41 = v405;
      if ( !(_QWORD)v405 )
        goto LABEL_45;
LABEL_44:
      sub_140001660(*((_QWORD *)&v405 + 1), v41, 1);
      goto LABEL_45;
    }
  }
  v483 = 1;
  sub_140E9EEE0(&v326, a4);
  v45 = v328;
  v46 = v328 ^ 1;
  v459 = v328 ^ 1;
  v477 = 1;
  sub_1407D7480(&v379, &v329);
  v480 = 1;
  v47 = sub_140EA8FE0(a4);
  if ( ((v379.m256i_i64[0] != -1) & v47) != 0 )
  {
    switch ( v379.m256i_i64[2] )
    {
      case 8LL:
        if ( *(_QWORD *)v379.m256i_i64[1] != 0x676E697972746572LL )
          goto LABEL_69;
        goto LABEL_61;
      case 0xALL:
        if ( *(_QWORD *)v379.m256i_i64[1] ^ 0x697474696D6D6F63LL
           | *(unsigned __int16 *)(v379.m256i_i64[1] + 8) ^ 0x676ELL )
        {
          goto LABEL_69;
        }
        goto LABEL_61;
      case 0xBLL:
        v49 = *(_QWORD *)v379.m256i_i64[1] ^ 0x6C69636E6F636572LL;
        v50 = *(_QWORD *)(v379.m256i_i64[1] + 3) ^ 0x676E696C69636E6FLL;
        goto LABEL_68;
      case 0xELL:
        v49 = *(_QWORD *)v379.m256i_i64[1] ^ 0x676E6970706F7473LL;
        v50 = *(_QWORD *)(v379.m256i_i64[1] + 6) ^ 0x7865646F635F676ELL;
LABEL_68:
        if ( __PAIR128__(v49, v50) != 0 )
          goto LABEL_69;
LABEL_61:
        *(_QWORD *)&v396 = 0;
        *((_QWORD *)&v396 + 1) = 8;
        *(_QWORD *)&v397 = 0;
        WORD4(v397) = 256;
        *(_QWORD *)&v399 = 0;
        *((_QWORD *)&v399 + 1) = 8;
        v400 = 0;
        v48 = 1;
        break;
      default:
        goto LABEL_69;
    }
  }
  else
  {
LABEL_69:
    v480 = 1;
    sub_1409A45C0(&v396, &v329, (__int64)&v326, 1);
    LOBYTE(v51) = v45 == 0;
    v476 = 1;
    v48 = 0;
    sub_140D52CE0(&v399, &v329, v51, 0);
  }
  v482 = 1;
  sub_14098D700(&v341);
  *(_QWORD *)&v52 = v341;
  *((_QWORD *)&v52 + 1) = *((_QWORD *)&v341 + 1) + 32 * v342;
  *(_QWORD *)&v341 = *((_QWORD *)&v341 + 1);
  v342 = v52;
  v482 = 1;
  sub_1401B55B0(v385, &v341);
  *(_QWORD *)&v341 = *(_QWORD *)&v385[8];
  *((_QWORD *)&v341 + 1) = *(_QWORD *)&v385[8];
  *(_QWORD *)&v342 = *(_QWORD *)v385;
  *((_QWORD *)&v342 + 1) = *(_QWORD *)&v385[8] + 24LL * *(_QWORD *)&v385[16];
  v343 = &v329;
  v482 = 1;
  sub_1401B4E40(&v383, &v341);
  v472 = 1;
  sub_1407D67D0(v339, &v329, 86400, 0);
  sub_1419234B0(&v341, &v329, 992);
  v350 = v420;
  v351 = v421;
  v360 = v442;
  v361 = v444;
  v362 = v442;
  v363 = v443;
  v364 = v435;
  v365 = v462;
  sub_1419234B0(v352, &v326, 384);
  v354 = v396;
  v355 = v397;
  v356 = v399;
  v357 = v400;
  v358 = v383;
  v359 = v384;
  v372 = v379;
  v373 = v380;
  v374 = v381;
  v375 = v382;
  v376[0] = v46;
  v366 = v339[0];
  v367 = v339[1];
  v368 = v339[2];
  v369 = v339[3];
  v370 = v339[4];
  v371 = v340;
  v376[1] = v48;
  v55 = v342;
  if ( (_QWORD)v342 )
  {
    v56 = *((_QWORD *)&v341 + 1);
    nullsub_1(v54, v53);
    v57 = sub_140001650(v55, 1);
    if ( !v57 )
      sub_14196B2DB(1, v55);
    v58 = v57;
    v427 = v55;
    v428 = v57;
    sub_1419234B0(v57, v56, v55);
    v429 = v55;
    v46 = v376[0];
  }
  else
  {
    v427 = 0;
    v428 = 1;
    v429 = 0;
    v58 = 1;
  }
  v430 = BYTE8(v342);
  v59 = asc_141A5BF85;
  if ( v46 )
    v59 = (const char *)&unk_141A5BF94;
  v422 = (__int64)v59;
  v423 = 15;
  v60 = sub_140953E00(&v341);
  if ( v60 )
  {
    v61 = *(unsigned __int8 *)(v60 + 64);
    v62 = &unk_141A58F2F;
    if ( *(_BYTE *)(v60 + 64) )
      v62 = &unk_141A58F37;
    *(_QWORD *)v461 = v62;
    *(_QWORD *)&v461[8] = v61 | 8;
    *(_QWORD *)v385 = v461;
    *(_QWORD *)&v385[8] = sub_140191200;
    *(_QWORD *)&v385[16] = v60;
    *(_QWORD *)&v385[24] = sub_1400015F0;
    sub_1416DAFA0(v401, &unk_141A59316, v385);
    *(_OWORD *)v440 = *(_OWORD *)v401;
    *(_QWORD *)&v440[16] = *(_QWORD *)&v401[16];
  }
  else
  {
    *(_QWORD *)v385 = &v422;
    *(_QWORD *)&v385[8] = sub_140191200;
    sub_1416DAFA0(v440, &unk_141A593BE, v385);
  }
  v473 = *((_QWORD *)&v354 + 1);
  if ( (_QWORD)v355 )
  {
    v63 = (_QWORD *)(*((_QWORD *)&v354 + 1) + 40LL);
    v64 = 0;
    v65 = v355;
    do
    {
      v66 = 1;
      if ( *v63 == 2 )
        v66 = *(_WORD *)*(v63 - 1) != 27503;
      v64 += v66;
      v63 += 13;
      --v65;
    }
    while ( v65 );
  }
  else
  {
    v64 = 0;
  }
  v436 = v355;
  v462 = v58;
  v455 = v55;
  v458 = v363;
  v67 = v64 + (v363 != -1);
  v68 = v366;
  v460 = v366;
  *(_QWORD *)&v412 = v67 + ((_QWORD)v366 != -1);
  v69 = *((_QWORD *)&v356 + 1);
  *(_QWORD *)v401 = 0;
  *(_QWORD *)&v401[8] = 8;
  *(_QWORD *)&v401[16] = 0;
  v70 = *((_QWORD *)&v356 + 1) + 32 * v357;
  while ( v69 != v70 )
  {
    *(_QWORD *)v461 = v69 + 24;
    *(_QWORD *)&v461[8] = sub_140A08230;
    sub_1416DAFA0(v385, &unk_141A57805, v461);
    v69 += 32;
    v488 = *(_QWORD *)&v385[8];
    v485 = *(_QWORD *)v385;
    v72 = *(_QWORD *)&v385[16];
    v73 = *(_QWORD *)&v401[8];
    v74 = *(_QWORD *)&v401[16];
    if ( *(_QWORD *)&v401[16] )
    {
      v75 = 24LL * *(_QWORD *)&v401[16];
      v76 = 0;
      while ( *(_QWORD *)(v73 + v76 + 16) != v72 || (unsigned int)sub_141923B40(*(_QWORD *)(v73 + v76 + 8), v488, v72) )
      {
        v76 += 24;
        if ( v75 == v76 )
          goto LABEL_97;
      }
      v68 = v485;
      if ( v485 )
        sub_140001660(v488, v485, 1);
    }
    else
    {
LABEL_97:
      if ( v74 == *(_QWORD *)v401 )
      {
        sub_141939F90(v401);
        v73 = *(_QWORD *)&v401[8];
      }
      v71 = 3 * v74;
      *(_QWORD *)(v73 + 8 * v71) = v485;
      v67 = v488;
      *(_QWORD *)(v73 + 8 * v71 + 8) = v488;
      *(_QWORD *)(v73 + 8 * v71 + 16) = v72;
      *(_QWORD *)&v401[16] = v74 + 1;
    }
  }
  v437.m256i_i64[2] = *(_QWORD *)&v401[16];
  *(_OWORD *)v437.m256i_i8 = *(_OWORD *)v401;
  if ( v372.m256i_i64[0] == -1 )
  {
    *(_QWORD *)&v425 = aTransition;
    *((_QWORD *)&v425 + 1) = 23;
    v77 = v460;
    v78 = v455;
LABEL_104:
    nullsub_1(v67, v68);
    v79 = sub_140001650(3, 1);
    if ( !v79 )
      sub_14196B2DB(1, 3);
    *(_BYTE *)(v79 + 2) = -96;
    *(_WORD *)v79 = -26650;
    v431.m256i_i64[0] = 3;
    v431.m256i_i64[1] = v79;
    v431.m256i_i64[2] = 3;
    if ( v458 == -1 )
      goto LABEL_109;
    goto LABEL_106;
  }
  v425 = *(_OWORD *)&v372.m256i_u64[1];
  v77 = v460;
  v78 = v455;
  if ( v372.m256i_i64[3] == -1 )
    goto LABEL_104;
  sub_14072B5B0((unsigned int)v385, v373, DWORD2(v373), v462, v455);
  v431.m256i_i64[2] = *(_QWORD *)&v385[16];
  *(_OWORD *)v431.m256i_i8 = *(_OWORD *)v385;
  if ( v458 == -1 )
    goto LABEL_109;
LABEL_106:
  sub_14072B5B0((unsigned int)v385, v364, v365, v462, v78);
  *(_QWORD *)v461 = v385;
  *(_QWORD *)&v461[8] = sub_1400015F0;
  sub_1416DAFA0(v401, &unk_141A59364, v461);
  if ( *(_QWORD *)v385 )
    sub_140001660(*(_QWORD *)&v385[8], *(_QWORD *)v385, 1);
  v80 = *(_QWORD *)v401;
  if ( *(_QWORD *)v401 != -1 )
  {
LABEL_132:
    v86 = *(_QWORD *)&v401[8];
    v87 = *(_QWORD *)&v401[16];
    v445.m256i_i64[0] = v80;
    *(_OWORD *)&v445.m256i_u64[1] = *(_OWORD *)&v401[8];
LABEL_133:
    *(_QWORD *)&v385[16] = v445.m256i_i64[2];
    *(_OWORD *)v385 = *(_OWORD *)v445.m256i_i8;
    goto LABEL_134;
  }
LABEL_109:
  v81 = 104 * v436;
  if ( v436 )
  {
    v82 = 104 * v436;
    v83 = v473;
    while ( *(_QWORD *)(v83 + 40) != 5
         || **(_DWORD **)(v83 + 32) ^ 0x6F727265 | *(unsigned __int8 *)(*(_QWORD *)(v83 + 32) + 4LL) ^ 0x72 )
    {
      v83 += 104;
      v82 -= 104;
      if ( !v82 )
      {
        v84 = 104 * v436;
        v83 = v473;
        while ( *(_QWORD *)(v83 + 40) != 7
             || **(_DWORD **)(v83 + 32) ^ 0x6E726177 | *(_DWORD *)(*(_QWORD *)(v83 + 32) + 3LL) ^ 0x676E696E )
        {
          v83 += 104;
          v84 -= 104;
          if ( !v84 )
            goto LABEL_120;
        }
        break;
      }
    }
LABEL_124:
    if ( *(_QWORD *)(v83 + 72) == -1 )
    {
      *(_QWORD *)v461 = 0;
      *(_QWORD *)&v461[8] = 1;
      *(_QWORD *)&v461[16] = 0;
    }
    else
    {
      sub_14072B5B0((unsigned int)v385, *(_QWORD *)(v83 + 80), *(_QWORD *)(v83 + 88), v462, v78);
      *(_QWORD *)v461 = v385;
      *(_QWORD *)&v461[8] = sub_1400015F0;
      sub_1416DAFA0(v401, &unk_141A58E89, v461);
      if ( *(_QWORD *)v385 )
        sub_140001660(*(_QWORD *)&v385[8], *(_QWORD *)v385, 1);
      *(_OWORD *)v461 = *(_OWORD *)v401;
      *(_QWORD *)&v461[16] = *(_QWORD *)&v401[16];
    }
    *(_QWORD *)v385 = v83 + 24;
    *(_QWORD *)&v385[8] = sub_1400015F0;
    *(_QWORD *)&v385[16] = v83 + 48;
    *(_QWORD *)&v385[24] = sub_1400015F0;
    *(_QWORD *)&v385[32] = v461;
    *(_QWORD *)&v385[40] = sub_1400015F0;
    sub_1416DAFA0(v401, &unk_141A58E93, v385);
    if ( *(_QWORD *)v461 )
      sub_140001660(*(_QWORD *)&v461[8], *(_QWORD *)v461, 1);
    v80 = *(_QWORD *)v401;
    if ( *(_QWORD *)v401 != -1 )
      goto LABEL_132;
  }
  else
  {
LABEL_120:
    v85 = v473;
    while ( v81 )
    {
      v83 = v85;
      if ( *(_QWORD *)(v85 + 40) == 2 )
      {
        v85 += 104;
        v81 -= 104;
        if ( **(_WORD **)(v83 + 32) == 27503 )
          continue;
      }
      goto LABEL_124;
    }
  }
  if ( v77 == -1 )
  {
    v445.m256i_i64[0] = -1;
  }
  else
  {
    v98 = aUnknown_5;
    v99 = (const char *)v368;
    if ( *((_QWORD *)&v367 + 1) == -1 )
      v99 = aUnknown_5;
    v100 = 7;
    v101 = *((_QWORD *)&v368 + 1);
    if ( *((_QWORD *)&v367 + 1) == -1 )
      v101 = 7;
    *(_QWORD *)v461 = v99;
    *(_QWORD *)&v461[8] = v101;
    if ( (_QWORD)v369 != -1 )
    {
      v98 = *((const char **)&v369 + 1);
      v100 = v370;
    }
    *(_QWORD *)v401 = v98;
    *(_QWORD *)&v401[8] = v100;
    *(_QWORD *)v385 = &v371;
    *(_QWORD *)&v385[8] = sub_140A05AA0;
    *(_QWORD *)&v385[16] = &v366;
    *(_QWORD *)&v385[24] = sub_1400015F0;
    *(_QWORD *)&v385[32] = v461;
    *(_QWORD *)&v385[40] = sub_140191200;
    *(_QWORD *)&v385[48] = v401;
    *(_QWORD *)&v385[56] = sub_140191200;
    *(_QWORD *)&v385[64] = (char *)&v371 + 1;
    *(_QWORD *)&v385[72] = sub_1416EBC20;
    sub_1416DAFA0(&v445, &unk_141A58E9B, v385);
    if ( v445.m256i_i64[0] != -1 )
      goto LABEL_133;
  }
  v102 = sub_140953E00(&v341);
  if ( !v102 )
    goto LABEL_161;
  v103 = *(unsigned __int8 *)(v102 + 64);
  v104 = &unk_141A58F2F;
  if ( v103 )
    v104 = &unk_141A58F37;
  *(_QWORD *)v461 = v104;
  *(_QWORD *)&v461[8] = v103 | 8;
  *(_QWORD *)v401 = v461;
  *(_QWORD *)&v401[8] = sub_140191200;
  sub_1416DAFA0(v385, &unk_141A58F40, v401);
LABEL_134:
  if ( *(_QWORD *)v385 != -1 )
  {
    v450.m256i_i64[2] = *(_QWORD *)&v385[16];
    *(_OWORD *)v450.m256i_i8 = *(_OWORD *)v385;
    if ( v77 != -1 )
      goto LABEL_136;
    goto LABEL_163;
  }
LABEL_161:
  nullsub_1(v86, v87);
  v105 = (_OWORD *)sub_140001650(27, 1);
  if ( !v105 )
    sub_14196B2DB(1, 27);
  *(_OWORD *)((char *)v105 + 11) = *(__int128 *)((char *)&xmmword_141A593A3 + 11);
  *v105 = xmmword_141A593A3;
  v450.m256i_i64[0] = 27;
  v450.m256i_i64[1] = (__int64)v105;
  v450.m256i_i64[2] = 27;
  if ( v77 != -1 )
  {
LABEL_136:
    v88 = aUnknown_5;
    v89 = (const char *)v368;
    if ( *((_QWORD *)&v367 + 1) == -1 )
      v89 = aUnknown_5;
    v90 = 7;
    v91 = *((_QWORD *)&v368 + 1);
    if ( *((_QWORD *)&v367 + 1) == -1 )
      v91 = 7;
    v445.m256i_i64[0] = (__int64)v89;
    v445.m256i_i64[1] = v91;
    if ( (_QWORD)v369 != -1 )
    {
      v88 = *((const char **)&v369 + 1);
      v90 = v370;
    }
    *(_QWORD *)v461 = v88;
    *(_QWORD *)&v461[8] = v90;
    *(_QWORD *)v385 = &v371;
    *(_QWORD *)&v385[8] = sub_140A05AA0;
    *(_QWORD *)&v385[16] = &v366;
    *(_QWORD *)&v385[24] = sub_1400015F0;
    *(_QWORD *)&v385[32] = &v445;
    *(_QWORD *)&v385[40] = sub_140191200;
    *(_QWORD *)&v385[48] = v461;
    *(_QWORD *)&v385[56] = sub_140191200;
    *(_QWORD *)&v385[64] = (char *)&v371 + 1;
    *(_QWORD *)&v385[72] = sub_1416EBC20;
    sub_1416DAFA0(v401, &unk_141A593D5, v385);
    *(_OWORD *)v445.m256i_i8 = *(_OWORD *)v401;
    v445.m256i_i64[2] = *(_QWORD *)&v401[16];
    v94 = v359;
    if ( v359 )
      goto LABEL_143;
LABEL_165:
    nullsub_1(v93, v92);
    v107 = sub_140001650(40, 1);
    if ( !v107 )
      sub_14196B2DB(1, 40);
    *(_OWORD *)(v107 + 16) = xmmword_141A5BFCA;
    *(_OWORD *)v107 = xmmword_141A5BFBA;
    v95 = 0x8BA8E79BBFE8A894uLL;
    *(_QWORD *)(v107 + 32) = 0x8BA8E79BBFE8A894uLL;
    *(_QWORD *)v461 = 40;
    *(_QWORD *)&v461[8] = v107;
    *(_QWORD *)&v461[16] = 40;
    v97 = v437.m256i_i64[2];
    if ( v437.m256i_i64[2] )
      goto LABEL_146;
    goto LABEL_167;
  }
LABEL_163:
  nullsub_1(v86, v87);
  v106 = sub_140001650(3, 1);
  if ( !v106 )
    sub_14196B2DB(1, 3);
  *(_BYTE *)(v106 + 2) = -96;
  *(_WORD *)v106 = -26650;
  v445.m256i_i64[0] = 3;
  v445.m256i_i64[1] = v106;
  v445.m256i_i64[2] = 3;
  v94 = v359;
  if ( !v359 )
    goto LABEL_165;
LABEL_143:
  sub_1406C5480((unsigned int)v385, DWORD2(v358), v94, (unsigned int)&unk_141A57CB2, 3);
  *(_QWORD *)&v401[16] = *(_QWORD *)&v385[16];
  *(_OWORD *)v401 = *(_OWORD *)v385;
  *(_QWORD *)v461 = v401;
  *(_QWORD *)&v461[8] = sub_1400015F0;
  sub_1416DAFA0(v385, &unk_141A5BFE2, v461);
  v96 = *(_QWORD *)v401;
  if ( *(_QWORD *)v401 )
    sub_140001660(*(_QWORD *)&v401[8], *(_QWORD *)v401, 1);
  *(_OWORD *)v461 = *(_OWORD *)v385;
  *(_QWORD *)&v461[16] = *(_QWORD *)&v385[16];
  v97 = v437.m256i_i64[2];
  if ( v437.m256i_i64[2] )
  {
LABEL_146:
    sub_1406C5480((unsigned int)v385, v437.m256i_i32[2], v97, (unsigned int)&unk_141A5C001, 3);
    *(_QWORD *)&v401[16] = *(_QWORD *)&v385[16];
    *(_OWORD *)v401 = *(_OWORD *)v385;
    goto LABEL_169;
  }
LABEL_167:
  nullsub_1(v95, v96);
  v108 = sub_140001650(3, 1);
  if ( !v108 )
    sub_14196B2DB(1, 3);
  *(_BYTE *)(v108 + 2) = -96;
  *(_WORD *)v108 = -26650;
  *(_QWORD *)v401 = 3;
  *(_QWORD *)&v401[8] = v108;
  *(_QWORD *)&v401[16] = 3;
LABEL_169:
  *(_QWORD *)v385 = v440;
  *(_QWORD *)&v385[8] = sub_1400015F0;
  *(_QWORD *)&v385[16] = v401;
  *(_QWORD *)&v385[24] = sub_1400015F0;
  *(_QWORD *)&v385[32] = &v412;
  *(_QWORD *)&v385[40] = sub_1416EBAE0;
  *(_QWORD *)&v385[48] = &v425;
  *(_QWORD *)&v385[56] = sub_140191200;
  *(_QWORD *)&v385[64] = &v431;
  *(_QWORD *)&v385[72] = sub_1400015F0;
  *(_QWORD *)&v385[80] = &v445;
  *(_QWORD *)&v385[88] = sub_1400015F0;
  *(_QWORD *)&v386 = v461;
  *((_QWORD *)&v386 + 1) = sub_1400015F0;
  v387 = &v450;
  v388 = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v407, &unk_141A5C004, v385);
  if ( *(_QWORD *)v401 )
    sub_140001660(*(_QWORD *)&v401[8], *(_QWORD *)v401, 1);
  if ( *(_QWORD *)v461 )
    sub_140001660(*(_QWORD *)&v461[8], *(_QWORD *)v461, 1);
  if ( v445.m256i_i64[0] )
    sub_140001660(v445.m256i_i64[1], v445.m256i_i64[0], 1);
  if ( v450.m256i_i64[0] )
    sub_140001660(v450.m256i_i64[1], v450.m256i_i64[0], 1);
  if ( v431.m256i_i64[0] )
    sub_140001660(v431.m256i_i64[1], v431.m256i_i64[0], 1);
  v109 = v437.m256i_i64[1];
  if ( v97 )
  {
    v110 = (_QWORD *)(v437.m256i_i64[1] + 8);
    do
    {
      v111 = *(v110 - 1);
      if ( v111 )
        sub_140001660(*v110, v111, 1);
      v110 += 3;
      --v97;
    }
    while ( v97 );
  }
  if ( v437.m256i_i64[0] )
    sub_140001660(v109, 24 * v437.m256i_i64[0], 8);
  v8 = v456;
  if ( *(_QWORD *)v440 )
    sub_140001660(*(_QWORD *)&v440[8], *(_QWORD *)v440, 1);
  *(_QWORD *)v385 = 0;
  *(_QWORD *)&v385[8] = 1;
  *(_OWORD *)&v385[16] = 0;
  sub_140875130(v401, v385);
  v414.m256i_i64[0] = 0;
  HIDWORD(v415) = 33;
  v414.m256i_i32[4] = 0;
  BYTE2(v416) = 0;
  v414.m256i_i32[6] = 0;
  LOWORD(v416) = 1;
  WORD4(v415) = 0;
  *(_QWORD *)&v461[48] = v416;
  *(_QWORD *)&v461[32] = v415;
  *(_DWORD *)&v461[40] = __PAIR32__(WORD5(v415), 0);
  *(_DWORD *)&v461[44] = 33;
  *(_QWORD *)&v461[16] = __PAIR64__(v414.m256i_u32[5], 0);
  *(_QWORD *)&v461[24] = __PAIR64__(v414.m256i_u32[7], 0);
  *(_OWORD *)v461 = *(_OWORD *)v414.m256i_i8;
  v489 = 1;
  sub_14090CF50(v385, (__int64)v401, (__int64)v461, (__int64)aSummaryMd, 10, v408, v409);
  if ( *(_DWORD *)v385 != -1 )
    goto LABEL_189;
  *(_QWORD *)&v425 = 0;
  v426 = 0;
  nullsub_1(v113, v112);
  v117 = (void *)sub_140001650(13, 1);
  if ( !v117 )
    sub_14196B2DB(1, 13);
  qmemcpy(v117, "schemaVersion", 13);
  v450.m256i_i64[0] = 13;
  v450.m256i_i64[1] = (__int64)v117;
  v450.m256i_i64[2] = 13;
  v461[0] = 2;
  *(_QWORD *)&v461[8] = 0;
  *(_QWORD *)&v461[16] = 1;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v119, v118);
  v120 = (void *)sub_140001650(11, 1);
  if ( !v120 )
    sub_14196B2DB(1, 11);
  qmemcpy(v120, "generatedAt", 11);
  v437.m256i_i64[0] = 11;
  v488 = (__int64)v120;
  v437.m256i_i64[1] = (__int64)v120;
  v437.m256i_i64[2] = 11;
  sub_1414331D0(v440);
  sub_140868C70(&v450, v440);
  *((_QWORD *)&v123 + 1) = v450.m256i_i64[2];
  v124 = v450.m256i_i64[1];
  v488 = v450.m256i_i64[1];
  if ( v450.m256i_i64[2] < 0 )
  {
    v125 = 0;
    goto LABEL_204;
  }
  if ( v450.m256i_i64[2] )
  {
    nullsub_1(v122, v121);
    v125 = 1;
    v126 = sub_140001650(*((_QWORD *)&v123 + 1), 1);
    if ( !v126 )
    {
LABEL_204:
      v471 = 1;
      sub_14196B2DB(v125, *((_QWORD *)&v123 + 1));
    }
    *(_QWORD *)&v123 = v126;
    sub_1419234B0(v126, v124, *((_QWORD *)&v123 + 1));
  }
  else
  {
    *(_QWORD *)&v123 = 1;
  }
  v461[0] = 3;
  *(_QWORD *)&v461[8] = *((_QWORD *)&v123 + 1);
  *(_OWORD *)&v461[16] = v123;
  v471 = 0;
  sub_140A68320(&v445, &v425, &v437, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  v128 = v450.m256i_i64[0];
  if ( v450.m256i_i64[0] )
    sub_140001660(v488, v450.m256i_i64[0], 1);
  nullsub_1(v127, v128);
  v129 = (void *)sub_140001650(10, 1);
  if ( !v129 )
    sub_14196B2DB(1, 10);
  qmemcpy(v129, "appVersion", 10);
  v450.m256i_i64[0] = 10;
  v450.m256i_i64[1] = (__int64)v129;
  v450.m256i_i64[2] = 10;
  nullsub_1(0x6973726556707061LL, v130);
  v131 = sub_140001650(5, 1);
  v488 = v131;
  if ( !v131 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v131 + 4) = 54;
  *(_DWORD *)v131 = 775040561;
  v461[0] = 3;
  *(_QWORD *)&v461[8] = 5;
  *(_QWORD *)&v461[16] = v131;
  *(_QWORD *)&v461[24] = 5;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v133, v132);
  v134 = (void *)sub_140001650(11, 1);
  if ( !v134 )
    sub_14196B2DB(1, 11);
  qmemcpy(v134, "buildCommit", 11);
  v450.m256i_i64[0] = 11;
  v450.m256i_i64[1] = (__int64)v134;
  v450.m256i_i64[2] = 11;
  nullsub_1(0x6D6F43646C697562LL, v135);
  v136 = (void *)sub_140001650(40, 1);
  v488 = (__int64)v136;
  if ( !v136 )
    sub_14196B2DB(1, 40);
  qmemcpy(v136, "60859eb6bca1c1b8c2c5ea76d194f839ef53e839", 40);
  v461[0] = 3;
  *(_QWORD *)&v461[8] = 40;
  *(_QWORD *)&v461[16] = v136;
  *(_QWORD *)&v461[24] = 40;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v138, v137);
  v139 = (_QWORD *)sub_140001650(8, 1);
  if ( !v139 )
    sub_14196B2DB(1, 8);
  *v139 = 0x6D726F6674616C70LL;
  v450.m256i_i64[0] = 8;
  v450.m256i_i64[1] = (__int64)v139;
  v450.m256i_i64[2] = 8;
  nullsub_1(0x6D726F6674616C70LL, v140);
  v141 = (_DWORD *)sub_140001650(7, 1);
  v488 = (__int64)v141;
  if ( !v141 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v141 + 3) = 1937207140;
  *v141 = 1684957559;
  v461[0] = 3;
  *(_QWORD *)&v461[8] = 7;
  *(_QWORD *)&v461[16] = v141;
  *(_QWORD *)&v461[24] = 7;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v143, v142);
  v144 = (_DWORD *)sub_140001650(4, 1);
  if ( !v144 )
    sub_14196B2DB(1, 4);
  *v144 = 1751347809;
  v450.m256i_i64[0] = 4;
  v450.m256i_i64[1] = (__int64)v144;
  v450.m256i_i64[2] = 4;
  nullsub_1(v146, v145);
  v147 = sub_140001650(6, 1);
  v488 = v147;
  if ( !v147 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v147 + 4) = 13366;
  *(_DWORD *)v147 = 1597388920;
  v461[0] = 3;
  *(_QWORD *)&v461[8] = 6;
  *(_QWORD *)&v461[16] = v147;
  *(_QWORD *)&v461[24] = 6;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v149, v148);
  v150 = (void *)sub_140001650(10, 1);
  if ( !v150 )
    sub_14196B2DB(1, 10);
  qmemcpy(v150, "targetMode", 10);
  v450.m256i_i64[0] = 10;
  v488 = (__int64)v150;
  v450.m256i_i64[1] = (__int64)v150;
  v450.m256i_i64[2] = 10;
  v445.m256i_i64[0] = (__int64)v376;
  v445.m256i_i64[1] = (__int64)sub_140A05AA0;
  sub_1416DAFA0(v461, &unk_141A57805, &v445);
  v153 = *(_QWORD *)&v461[8];
  *((_QWORD *)&v154 + 1) = *(_QWORD *)&v461[16];
  v485 = *(_QWORD *)&v461[8];
  v488 = *(_QWORD *)v461;
  if ( *(__int64 *)&v461[16] < 0 )
  {
    v155 = 0;
    goto LABEL_232;
  }
  if ( *(_QWORD *)&v461[16] )
  {
    nullsub_1(v152, v151);
    v155 = 1;
    v156 = sub_140001650(*((_QWORD *)&v154 + 1), 1);
    if ( !v156 )
    {
LABEL_232:
      v470 = 1;
      sub_14196B2DB(v155, *((_QWORD *)&v154 + 1));
    }
    *(_QWORD *)&v154 = v156;
    sub_1419234B0(v156, v153, *((_QWORD *)&v154 + 1));
  }
  else
  {
    *(_QWORD *)&v154 = 1;
  }
  v461[0] = 3;
  *(_QWORD *)&v461[8] = *((_QWORD *)&v154 + 1);
  *(_OWORD *)&v461[16] = v154;
  v470 = 0;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  v158 = v488;
  if ( v488 )
    sub_140001660(v485, v488, 1);
  nullsub_1(v157, v158);
  v159 = sub_140001650(9, 1);
  if ( !v159 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v159 = 0x6D6F487865646F63LL;
  *(_BYTE *)(v159 + 8) = 101;
  v437.m256i_i64[0] = 9;
  v485 = v159;
  v437.m256i_i64[1] = v159;
  v437.m256i_i64[2] = 9;
  sub_1416DA570(v461);
  v488 = *(_QWORD *)&v461[8];
  sub_14072B5B0((unsigned int)&v450, *(_DWORD *)&v461[8], *(_DWORD *)&v461[16], v428, v429);
  v161 = *(_QWORD *)v461;
  if ( *(__int64 *)v461 > 0 )
    sub_140001660(v488, *(_QWORD *)v461, 1);
  *((_QWORD *)&v162 + 1) = v450.m256i_i64[2];
  v163 = v450.m256i_i64[1];
  v488 = v450.m256i_i64[1];
  if ( v450.m256i_i64[2] < 0 )
  {
    v164 = 0;
    goto LABEL_246;
  }
  if ( v450.m256i_i64[2] )
  {
    nullsub_1(v160, v161);
    v164 = 1;
    v165 = sub_140001650(*((_QWORD *)&v162 + 1), 1);
    if ( !v165 )
    {
LABEL_246:
      v469 = 1;
      sub_14196B2DB(v164, *((_QWORD *)&v162 + 1));
    }
    *(_QWORD *)&v162 = v165;
    sub_1419234B0(v165, v163, *((_QWORD *)&v162 + 1));
  }
  else
  {
    *(_QWORD *)&v162 = 1;
  }
  v461[0] = 3;
  *(_QWORD *)&v461[8] = *((_QWORD *)&v162 + 1);
  *(_OWORD *)&v461[16] = v162;
  v469 = 0;
  sub_140A68320(&v445, &v425, &v437, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  v167 = v450.m256i_i64[0];
  if ( v450.m256i_i64[0] )
    sub_140001660(v488, v450.m256i_i64[0], 1);
  nullsub_1(v166, v167);
  v168 = (void *)sub_140001650(13, 1);
  if ( !v168 )
    sub_14196B2DB(1, 13);
  qmemcpy(v168, "activeStateDb", 13);
  *(_QWORD *)v440 = 13;
  *(_QWORD *)&v440[8] = v168;
  *(_QWORD *)&v440[16] = 13;
  v462 = (__int64)v168;
  if ( v346 == -1 )
  {
    sub_140A2DA60((__int64)v461, SDWORD2(v341), v342);
    v174 = *(_QWORD *)&v461[8];
  }
  else
  {
    v171 = v348;
    if ( v348 )
    {
      v172 = v347;
      nullsub_1(v170, v169);
      v173 = sub_140001650(v171, 1);
      if ( !v173 )
        sub_14196B2DB(1, v171);
      v174 = v173;
      *(_QWORD *)v461 = v171;
      *(_QWORD *)&v461[8] = v173;
      sub_1419234B0(v173, v172, v171);
      *(_QWORD *)&v461[16] = v171;
    }
    else
    {
      *(_QWORD *)v461 = 0;
      *(_QWORD *)&v461[8] = 1;
      *(_QWORD *)&v461[16] = 0;
      v174 = 1;
    }
    v461[24] = v349;
  }
  v488 = v174;
  sub_1416DA570(&v445);
  v485 = v445.m256i_i64[1];
  sub_14072B5B0((unsigned int)&v437, v445.m256i_i32[2], v445.m256i_i32[4], v428, v429);
  v176 = v445.m256i_i64[0];
  if ( v445.m256i_i64[0] > 0 )
    sub_140001660(v485, v445.m256i_i64[0], 1);
  *((_QWORD *)&v177 + 1) = v437.m256i_i64[2];
  v178 = v437.m256i_i64[1];
  v485 = v437.m256i_i64[1];
  if ( v437.m256i_i64[2] < 0 )
  {
    v174 = 0;
    goto LABEL_267;
  }
  if ( v437.m256i_i64[2] )
  {
    nullsub_1(v175, v176);
    v174 = 1;
    v179 = sub_140001650(*((_QWORD *)&v177 + 1), 1);
    if ( !v179 )
    {
LABEL_267:
      v468 = 1;
      sub_14196B2DB(v174, *((_QWORD *)&v177 + 1));
    }
    *(_QWORD *)&v177 = v179;
    sub_1419234B0(v179, v178, *((_QWORD *)&v177 + 1));
  }
  else
  {
    *(_QWORD *)&v177 = 1;
  }
  v445.m256i_i8[0] = 3;
  v445.m256i_i64[1] = *((_QWORD *)&v177 + 1);
  *(_OWORD *)&v445.m256i_u64[2] = v177;
  v468 = 0;
  sub_140A68320(&v450, &v425, v440, &v445);
  if ( v450.m256i_i8[0] != -1 )
    sub_140032FF0(&v450);
  if ( v437.m256i_i64[0] )
    sub_140001660(v485, v437.m256i_i64[0], 1);
  v180 = *(_QWORD *)v461;
  v181 = v488;
  if ( *(_QWORD *)v461 )
    sub_140001660(v488, *(_QWORD *)v461, 1);
  nullsub_1(v181, v180);
  v182 = (void *)sub_140001650(13, 1);
  if ( !v182 )
    sub_14196B2DB(1, 13);
  qmemcpy(v182, "runtimeSource", 13);
  v450.m256i_i64[0] = 13;
  v450.m256i_i64[1] = (__int64)v182;
  v450.m256i_i64[2] = 13;
  if ( v360 == -1 )
  {
    v185 = 0;
  }
  else
  {
    *(_QWORD *)&v177 = v362;
    if ( v362 < 0 )
    {
      v184 = 0;
      goto LABEL_282;
    }
    v185 = 3;
    if ( v362 )
    {
      v174 = v361;
      nullsub_1(0x53656D69746E7572LL, v183);
      v184 = 1;
      v186 = sub_140001650(v177, 1);
      if ( !v186 )
      {
LABEL_282:
        v467 = 1;
        sub_14196B2DB(v184, v177);
      }
      *((_QWORD *)&v177 + 1) = v186;
      sub_1419234B0(v186, v174, v177);
    }
    else
    {
      *((_QWORD *)&v177 + 1) = 1;
      *(_QWORD *)&v177 = 0;
    }
  }
  v461[0] = v185;
  *(_OWORD *)&v461[8] = v177;
  *(_QWORD *)&v461[24] = v177;
  v467 = 0;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  nullsub_1(v188, v187);
  v189 = (void *)sub_140001650(22, 1);
  if ( !v189 )
    sub_14196B2DB(1, 22);
  qmemcpy(v189, "runtimeResolutionError", 22);
  v450.m256i_i64[0] = 22;
  v450.m256i_i64[1] = (__int64)v189;
  v450.m256i_i64[2] = 22;
  v190 = -1;
  v191 = 1;
  if ( v363 == -1 )
  {
    v196 = 0;
  }
  else
  {
    v488 = (__int64)v189;
    sub_14072B5B0((unsigned int)v461, v364, v365, v428, v429);
    v488 = *(_QWORD *)&v461[8];
    v194 = *(_QWORD *)v461;
    if ( *(_QWORD *)v461 == -1 )
    {
      v196 = 0;
    }
    else
    {
      *(_QWORD *)&v177 = *(_QWORD *)&v461[16];
      if ( *(__int64 *)&v461[16] < 0 )
      {
        v195 = 0;
        goto LABEL_295;
      }
      v196 = 3;
      if ( *(_QWORD *)&v461[16] )
      {
        nullsub_1(v193, v192);
        v195 = 1;
        v197 = sub_140001650(v177, 1);
        if ( !v197 )
        {
LABEL_295:
          v466 = 0;
          v404 = v488;
          v403 = v194;
          v465 = 1;
          sub_14196B2DB(v195, v177);
        }
        *((_QWORD *)&v177 + 1) = v197;
        sub_1419234B0(v197, v488, v177);
        v191 = 0;
        v190 = v194;
        v174 = v488;
        v196 = 3;
        goto LABEL_303;
      }
      *((_QWORD *)&v177 + 1) = 1;
      v191 = 0;
      v190 = *(_QWORD *)v461;
      *(_QWORD *)&v177 = 0;
    }
    v174 = v488;
  }
LABEL_303:
  v461[0] = v196;
  *(_OWORD *)&v461[8] = v177;
  *(_QWORD *)&v461[24] = v177;
  v466 = v191;
  v404 = v174;
  v403 = v190;
  v465 = 0;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
  {
    v475 = v191;
    v411 = v174;
    v410 = v190;
    sub_140032FF0(&v445);
  }
  if ( !((v190 == 0) | (unsigned __int8)v191) )
    sub_140001660(v174, v190, 1);
  nullsub_1(v199, v198);
  v200 = (void *)sub_140001650(23, 1);
  v8 = v456;
  if ( !v200 )
    sub_14196B2DB(1, 23);
  qmemcpy(v200, "recentTransitionFailure", 23);
  v450.m256i_i64[0] = 23;
  v450.m256i_i64[1] = (__int64)v200;
  v450.m256i_i64[2] = 23;
  if ( (_QWORD)v366 == -1 )
  {
    v461[0] = 0;
  }
  else
  {
    v479 = 1;
    sub_1407879B0(v461, &v366);
    if ( v461[0] == 0xFF )
    {
      v445.m256i_i64[0] = *(_QWORD *)&v461[8];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v445,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5C1C8);
    }
  }
  v445 = *(__m256i *)v461;
  v479 = 0;
  sub_140A68320(v461, &v425, &v450, &v445);
  if ( v461[0] != 0xFF )
    sub_140032FF0(v461);
  nullsub_1(v202, v201);
  v203 = (void *)sub_140001650(13, 1);
  if ( !v203 )
    sub_14196B2DB(1, 13);
  qmemcpy(v203, "codexStateDbs", 13);
  v437.m256i_i64[0] = 13;
  v488 = (__int64)v203;
  v437.m256i_i64[1] = (__int64)v203;
  v437.m256i_i64[2] = 13;
  *(_QWORD *)v461 = *((_QWORD *)&v350 + 1);
  *(_QWORD *)&v461[8] = *((_QWORD *)&v350 + 1) + 32 * v351;
  *(_QWORD *)&v461[16] = &v427;
  sub_1402268D0((__int64)&v450, v461);
  v478 = 1;
  sub_1407B3FB0(v461, &v450);
  if ( v461[0] == 0xFF )
  {
    v445.m256i_i64[0] = *(_QWORD *)&v461[8];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v445,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C1C8);
  }
  v445 = *(__m256i *)v461;
  v478 = 0;
  sub_140A68320(v461, &v425, &v437, &v445);
  if ( v461[0] != 0xFF )
    sub_140032FF0(v461);
  v206 = v450.m256i_i64[2];
  if ( v450.m256i_i64[2] )
  {
    v207 = (_QWORD *)(v450.m256i_i64[1] + 8);
    do
    {
      v204 = *(v207 - 1);
      if ( v204 )
        sub_140001660(*v207, v204, 1);
      v207 += 3;
      --v206;
    }
    while ( v206 );
  }
  if ( v450.m256i_i64[0] )
    sub_140001660(v450.m256i_i64[1], 24 * v450.m256i_i64[0], 8);
  nullsub_1(v205, v204);
  v208 = sub_140001650(5, 1);
  if ( !v208 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v208 + 4) = 115;
  *(_DWORD *)v208 = 1702129518;
  v450.m256i_i64[0] = 5;
  v450.m256i_i64[1] = v208;
  v450.m256i_i64[2] = 5;
  nullsub_1(v210, v209);
  v211 = sub_140001650(64, 8);
  if ( !v211 )
  {
    v474 = 1;
    sub_14196B2C1(8, 64);
  }
  v214 = v211;
  nullsub_1(v213, v212);
  v215 = (void *)sub_140001650(33, 1);
  if ( !v215 )
  {
    v488 = v214;
    sub_14196B2DB(1, 33);
  }
  qmemcpy(v215, "All exported content is redacted.", 33);
  v461[0] = 3;
  *(_QWORD *)&v461[8] = 33;
  *(_QWORD *)&v461[16] = v215;
  *(_QWORD *)&v461[24] = 33;
  nullsub_1(v217, v216);
  v218 = sub_140001650(131, 1);
  if ( !v218 )
  {
    v488 = v214;
    sub_14196B2DB(1, 131);
  }
  v219 = v218;
  sub_1419234B0(v218, aThisBundleIsRe, 131);
  *(_BYTE *)(v214 + 32) = 3;
  *(_QWORD *)(v214 + 40) = 131;
  *(_QWORD *)(v214 + 48) = v219;
  *(_QWORD *)(v214 + 56) = 131;
  v220 = *(_OWORD *)v461;
  *(_OWORD *)(v214 + 16) = *(_OWORD *)&v461[16];
  *(_OWORD *)v214 = v220;
  *(_QWORD *)&v461[8] = 2;
  *(_QWORD *)&v461[16] = v214;
  *(_QWORD *)&v461[24] = 2;
  v461[0] = 4;
  v474 = 0;
  sub_140A68320(&v445, &v425, &v450, v461);
  if ( v445.m256i_i8[0] != -1 )
    sub_140032FF0(&v445);
  *(_OWORD *)&v450.m256i_u64[1] = v425;
  v450.m256i_i64[3] = v426;
  v450.m256i_i8[0] = 5;
  v221 = sub_140953E00(&v341);
  if ( v221 )
  {
    v224 = v221;
    nullsub_1(v223, v222);
    v225 = (void *)sub_140001650(13, 1);
    if ( !v225 )
      sub_14196B2DB(1, 13);
    qmemcpy(v225, "snapshotState", 13);
    v437.m256i_i64[0] = 13;
    v437.m256i_i64[1] = (__int64)v225;
    v437.m256i_i64[2] = 13;
    nullsub_1(0x746F687370616E73LL, v226);
    v227 = (void *)sub_140001650(13, 1);
    v488 = (__int64)v227;
    if ( !v227 )
      sub_14196B2DB(1, 13);
    qmemcpy(v227, "transitioning", 13);
    *(_QWORD *)&v461[8] = 13;
    *(_QWORD *)&v461[16] = v227;
    *(_QWORD *)&v461[24] = 13;
    v461[0] = 3;
    sub_140A68320(&v445, &v450.m256i_u64[1], &v437, v461);
    if ( v445.m256i_i8[0] != -1 )
      sub_140032FF0(&v445);
    nullsub_1(v229, v228);
    v230 = (_OWORD *)sub_140001650(16, 1);
    if ( !v230 )
      sub_14196B2DB(1, 16);
    *v230 = unk_141A5C2D9;
    v437.m256i_i64[0] = 16;
    v437.m256i_i64[1] = (__int64)v230;
    v437.m256i_i64[2] = 16;
    v233 = *(unsigned __int8 *)(v224 + 64);
    v234 = v233 + 8;
    nullsub_1(v232, v231);
    v488 = sub_140001650(v233 + 8, 1);
    if ( !v488 )
      sub_14196B2DB(1, v233 + 8);
    v235 = &unk_141A58F2F;
    if ( (_BYTE)v233 )
      v235 = &unk_141A58F37;
    v236 = v488;
    sub_1419234B0(v488, v235, v234);
    *(_QWORD *)&v461[8] = v234;
    *(_QWORD *)&v461[16] = v236;
    *(_QWORD *)&v461[24] = v234;
    v461[0] = 3;
    sub_140A68320(&v445, &v450.m256i_u64[1], &v437, v461);
    v8 = v456;
    if ( v445.m256i_i8[0] != -1 )
      sub_140032FF0(&v445);
    nullsub_1(v238, v237);
    v239 = (void *)sub_140001650(15, 1);
    if ( !v239 )
      sub_14196B2DB(1, 15);
    qmemcpy(v239, "transitionPhase", 15);
    v437.m256i_i64[0] = 15;
    v437.m256i_i64[1] = (__int64)v239;
    v437.m256i_i64[2] = 15;
    v464 = 1;
    sub_1416DB410(&v445, v224);
    *(_QWORD *)&v461[24] = v445.m256i_i64[2];
    *(_OWORD *)&v461[8] = *(_OWORD *)v445.m256i_i8;
    v461[0] = 3;
    v464 = 0;
    sub_140A68320(&v445, &v450.m256i_u64[1], &v437, v461);
    if ( v445.m256i_i8[0] != -1 )
      sub_140032FF0(&v445);
    nullsub_1(v241, v240);
    v242 = (void *)sub_140001650(24, 1);
    if ( !v242 )
      sub_14196B2DB(1, 24);
    qmemcpy(v242, "stableStateChecksSkipped", 24);
    v437.m256i_i64[0] = 24;
    v437.m256i_i64[1] = (__int64)v242;
    v437.m256i_i64[2] = 24;
    *(_WORD *)v461 = 257;
    sub_140A68320(&v445, &v450.m256i_u64[1], &v437, v461);
    if ( v445.m256i_i8[0] != -1 )
      sub_140032FF0(&v445);
  }
  v431 = v450;
  *(_QWORD *)&v461[48] = v416;
  *(_OWORD *)&v461[32] = v415;
  *(__m256i *)v461 = v414;
  sub_14090CDC0(v385, (int)v401, (int)v461, (int)aManifestJson, 13, (__int64)&v431, (__int64)&v427);
  if ( *(_DWORD *)v385 != -1 )
  {
    *(_OWORD *)(v8 + 88) = *(_OWORD *)&v385[80];
    *(_OWORD *)(v8 + 72) = *(_OWORD *)&v385[64];
    v243 = *(_OWORD *)v385;
    v244 = *(_OWORD *)&v385[16];
    v245 = *(_OWORD *)&v385[32];
    *(_OWORD *)(v8 + 56) = *(_OWORD *)&v385[48];
    *(_OWORD *)(v8 + 40) = v245;
    *(_OWORD *)(v8 + 24) = v244;
    *(_OWORD *)(v8 + 8) = v243;
    *(_QWORD *)v8 = -1;
    v489 = 1;
    sub_140032FF0(&v431);
    goto LABEL_191;
  }
  v489 = 1;
  sub_140032FF0(&v431);
  v439 = v416;
  v438 = v415;
  v437 = v414;
  v489 = 1;
  sub_1416B18A0((unsigned int)&v425, v344, v345, (unsigned int)&unk_141A57898, 4);
  v246 = v426;
  v458 = *((_QWORD *)&v425 + 1);
  sub_1416B18A0((unsigned int)v385, DWORD2(v425), v426, (unsigned int)&unk_141A5789C, 16);
  v462 = *(_QWORD *)&v385[8];
  v488 = *(_QWORD *)v385;
  *(_OWORD *)v440 = *(_OWORD *)&v385[16];
  v247 = v458;
  sub_1416B18A0((unsigned int)v385, v458, v246, (unsigned int)&unk_141A578C1, 18);
  v473 = *(_QWORD *)&v385[8];
  v485 = *(_QWORD *)v385;
  *(_OWORD *)v431.m256i_i8 = *(_OWORD *)&v385[16];
  sub_1416B18A0((unsigned int)v385, v247, v246, (unsigned int)&unk_141A578F1, 16);
  v455 = *(_QWORD *)&v385[8];
  v460 = *(_QWORD *)v385;
  *(_OWORD *)v445.m256i_i8 = *(_OWORD *)&v385[16];
  sub_1416B18A0((unsigned int)v461, v247, v246, (unsigned int)&unk_141A57916, 18);
  v395 = *(_OWORD *)&v461[16];
  v394 = *(_OWORD *)v461;
  *(_OWORD *)&v385[48] = *(_OWORD *)v440;
  v386 = *(_OWORD *)v431.m256i_i8;
  v391 = *(_OWORD *)v445.m256i_i8;
  v248 = &v385[16];
  *(_QWORD *)&v385[16] = aAimamiDebugTai;
  *(_QWORD *)&v385[24] = 21;
  *(_QWORD *)&v385[32] = v488;
  *(_QWORD *)&v385[40] = v462;
  *(_QWORD *)&v385[64] = aAimamiDebugPre;
  *(_QWORD *)&v385[72] = 30;
  *(_QWORD *)&v385[80] = v485;
  *(_QWORD *)&v385[88] = v473;
  v387 = (__m256i *)aAimamiCrashTai;
  v388 = 21;
  v389 = v460;
  v390 = v455;
  *(_QWORD *)&v385[8] = 4;
  v392 = aAimamiCrashPre;
  v393 = 30;
  v460 = v428;
  v455 = v429;
  v249 = __PAIR128__(4, 0);
  while ( 1 )
  {
    if ( *((_QWORD *)&v249 + 1) == (_QWORD)v249 )
      goto LABEL_424;
    v250 = v249 + 1;
    *(_QWORD *)v385 = v249 + 1;
    v251 = 48 * v249;
    if ( *(_QWORD *)&v385[48 * v249 + 32] == -1 )
      break;
    v488 = *(_QWORD *)&v385[v251 + 32];
    v252 = &v385[v251 + 16];
    v412 = *(_OWORD *)v252;
    v253 = *((_QWORD *)v252 + 4);
    v462 = *((_QWORD *)v252 + 3);
    sub_140952EA0(&v445, v462, v253);
    if ( v445.m256i_i64[0] != -1 )
    {
      *(_OWORD *)&v461[80] = v449;
      *(_OWORD *)&v461[64] = v448;
      *(_OWORD *)&v461[48] = v447;
      *(_OWORD *)&v461[32] = v446;
      *(__m256i *)v461 = v445;
      v431.m256i_i64[0] = (__int64)v461;
      v431.m256i_i64[1] = (__int64)sub_140D76130;
      sub_1416DAFA0(v440, &unk_141A58E1A, &v431);
      sub_140906570(v461);
      goto LABEL_362;
    }
    v473 = v445.m256i_i64[2];
    v485 = v445.m256i_i64[1];
    sub_14072B5B0((unsigned int)v461, v445.m256i_i32[4], v445.m256i_i32[6], v460, v455);
    if ( v485 )
      sub_140001660(v473, v485, 1);
    v445.m256i_i64[3] = *(_QWORD *)&v461[16];
    *(_OWORD *)&v445.m256i_u64[1] = *(_OWORD *)v461;
    v445.m256i_i64[0] = -1;
    v254 = *(_QWORD *)v461;
    v255 = *(_QWORD *)&v461[16];
    v256 = *((_QWORD *)&v412 + 1);
    if ( *((_QWORD *)&v412 + 1) < 0xCu
      || (v257 = v412, *(_QWORD *)v412 ^ 0x642D696D616D6961LL | *(unsigned int *)(v412 + 8) ^ 0x67756265LL) )
    {
      v258 = *(_QWORD *)&v461[8];
    }
    else
    {
      v485 = *(_QWORD *)&v461[8];
      v473 = *(_QWORD *)v461;
      sub_1416E1760(
        (unsigned int)v461,
        *(_DWORD *)&v461[8],
        *(_DWORD *)&v461[16],
        (unsigned int)"[event][app][started]",
        21);
      sub_140A0A190(&v431, v461);
      if ( v431.m256i_i8[0] )
      {
        if ( v431.m256i_i64[1] )
        {
          if ( v431.m256i_i64[1] >= v255 )
          {
            if ( v431.m256i_i64[1] != v255 )
LABEL_539:
              sub_14196B4F0(v485, v255, 0, v431.m256i_i32[2], (__int64)&off_141A5C6F0);
          }
          else if ( *(char *)(v485 + v431.m256i_i64[1]) <= -65 )
          {
            goto LABEL_539;
          }
        }
        *(_QWORD *)v461 = v485;
        *(_QWORD *)&v461[8] = v431.m256i_i64[1];
        *(_QWORD *)&v461[16] = 0;
        *(_QWORD *)&v461[24] = v431.m256i_i64[1];
        v461[40] = 1;
        *(_QWORD *)&v461[32] = 0xA0000000ALL;
        sub_140A05900(&v431, v461);
        v277 = v431.m256i_i64[1] + 1;
        if ( !v431.m256i_i8[0] )
          v277 = 0;
        if ( v277 )
        {
          if ( v255 <= v277 )
          {
            if ( v255 != v277 )
LABEL_540:
              sub_14196B4F0(v485, v255, v277, v255, (__int64)&off_141A5C708);
          }
          else if ( *(char *)(v485 + v277) < -64 )
          {
            goto LABEL_540;
          }
        }
        v254 = v255 - v277;
        if ( (__int64)(v255 - v277) < 0 )
        {
          v318 = 0;
LABEL_444:
          sub_14196B2DB(v318, v436);
        }
        if ( v255 == v277 )
        {
          v436 = 1;
        }
        else
        {
          nullsub_1(v276, v275);
          v436 = sub_140001650(v255 - v277, 1);
          if ( !v436 )
          {
            v436 = v255 - v277;
            v318 = 1;
            goto LABEL_444;
          }
        }
        if ( v255 == v277 )
        {
          v254 = 0;
          v258 = v436;
          v273 = 0;
        }
        else
        {
          v278 = v436;
          sub_1419234B0(v436, v485 + v277, v254);
          v258 = v278;
          v273 = v254;
        }
LABEL_421:
        v255 = v273;
        v274 = v473;
        if ( !v473 )
          goto LABEL_361;
      }
      else
      {
        v263 = 0;
        while ( v263 != 48 )
        {
          v264 = v263;
          sub_1416E1760(
            (unsigned int)v461,
            v485,
            v255,
            (unsigned int)*(char **)((char *)&off_141A5C740 + v263),
            *(__int64 *)((char *)&off_141A5C740 + v263 + 8));
          sub_140A0A190(&v431, v461);
          v263 = v264 + 16;
          if ( v431.m256i_i32[0] == 1 )
          {
            v265 = v431.m256i_u64[1];
            if ( v264 != 32 )
            {
              v266 = (char *)&off_141A5C740 + v264 + 16;
              v267 = (unsigned int)(32 - v264) >> 4;
              v268 = 0;
              do
              {
                sub_1416E1760(
                  (unsigned int)v461,
                  v485,
                  v255,
                  *(_QWORD *)&v266[16 * v268],
                  *(_QWORD *)&v266[16 * v268 + 8]);
                sub_140A0A190(&v431, v461);
                v269 = v431.m256i_i64[1];
                if ( v265 < v431.m256i_i64[1] )
                  v269 = v265;
                if ( v431.m256i_i8[0] )
                  v265 = v269;
                ++v268;
              }
              while ( v268 != v267 );
            }
            if ( v265 )
            {
              if ( v265 >= v255 )
              {
                if ( v265 != v255 )
                  goto LABEL_541;
              }
              else if ( *(char *)(v485 + v265) <= -65 )
              {
LABEL_541:
                sub_14196B4F0(v485, v255, 0, v265, (__int64)&off_141A5C770);
              }
            }
            *(_QWORD *)v461 = v485;
            *(_QWORD *)&v461[8] = v265;
            *(_QWORD *)&v461[16] = 0;
            *(_QWORD *)&v461[24] = v265;
            v461[40] = 1;
            *(_QWORD *)&v461[32] = 0xA0000000ALL;
            sub_140A05900(&v431, v461);
            v279 = v431.m256i_i64[1] + 1;
            if ( !v431.m256i_i8[0] )
              v279 = 0;
            if ( v279 )
            {
              if ( v255 <= v279 )
              {
                if ( v255 != v279 )
                  goto LABEL_542;
              }
              else if ( *(char *)(v485 + v279) < -64 )
              {
LABEL_542:
                sub_14196B4F0(v485, v255, v279, v255, (__int64)&off_141A5C788);
              }
            }
            v273 = v255 - v279;
            v398 = v279;
            sub_1401E7560((unsigned int)v461, v255 - v279, 0, 1, 1);
            v254 = *(_QWORD *)&v461[8];
            if ( v461[0] )
              sub_14196B2DB(*(_QWORD *)&v461[8], *(_QWORD *)&v461[16]);
            v258 = *(_QWORD *)&v461[16];
            if ( v255 == v398 )
              v273 = 0;
            else
              sub_1419234B0(*(_QWORD *)&v461[16], v485 + v398, v273);
            goto LABEL_421;
          }
        }
        if ( !(unsigned __int8)sub_140A09D60(aPrevious, 8, v257, v256) )
        {
          v258 = v485;
          v254 = v473;
          goto LABEL_361;
        }
        nullsub_1(v271, v270);
        v272 = (void *)sub_140001650(51, 1);
        if ( !v272 )
          sub_14196B2DB(1, 51);
        v258 = (__int64)v272;
        qmemcpy(v272, "legacy debug log omitted: predates unified logging\n", 51);
        v273 = 51;
        v254 = 51;
        v255 = 51;
        v274 = v473;
        if ( !v473 )
          goto LABEL_361;
      }
      sub_140001660(v485, v274, 1);
      v255 = v273;
    }
LABEL_361:
    *(_QWORD *)v440 = v254;
    *(_QWORD *)&v440[8] = v258;
    *(_QWORD *)&v440[16] = v255;
    v8 = v456;
LABEL_362:
    v422 = (__int64)&v412;
    v423 = (__int64)sub_140191200;
    sub_1416DAFA0(&v431, &unk_141A57956, &v422);
    v259 = v431.m256i_i64[1];
    v485 = v431.m256i_i64[0];
    v260 = v431.m256i_i64[2];
    v261 = *(_QWORD *)&v440[8];
    v433 = v439;
    v432 = v438;
    v431 = v437;
    v473 = v259;
    sub_14090CF50(v461, (__int64)v401, (__int64)&v431, v259, v260, *(__int64 *)&v440[8], *(__int64 *)&v440[16]);
    v262 = *(_QWORD *)v461;
    if ( *(_QWORD *)v461 != -1 )
    {
      v454 = *(_QWORD *)&v461[88];
      v453 = *(_OWORD *)&v461[72];
      v452 = *(_OWORD *)&v461[56];
      v451 = *(_OWORD *)&v461[40];
      v450 = *(__m256i *)&v461[8];
      if ( v485 )
        sub_140001660(v473, v485, 1);
      if ( *(_QWORD *)v440 )
        sub_140001660(v261, *(_QWORD *)v440, 1);
      if ( v488 )
        sub_140001660(v462, v488, 1);
      sub_1406460B0(&v385[16], *(_QWORD *)v385, *(_QWORD *)&v385[8]);
      goto LABEL_457;
    }
    if ( v485 )
      sub_140001660(v473, v485, 1);
    if ( *(_QWORD *)v440 )
      sub_140001660(v261, *(_QWORD *)v440, 1);
    if ( v488 )
      sub_140001660(v462, v488, 1);
    v249 = *(_OWORD *)v385;
    v248 = &v385[16];
  }
  v280 = *((_QWORD *)&v249 + 1) - v250;
  if ( *((_QWORD *)&v249 + 1) != v250 )
  {
    v293 = &v385[v251 + 88];
    do
    {
      v248 = (_BYTE *)*(v293 - 1);
      if ( v248 )
        sub_140001660(*v293, v248, 1);
      v293 += 6;
      --v280;
    }
    while ( v280 );
  }
LABEL_424:
  sub_14072B2E0(v385, v248);
  v488 = *(_QWORD *)&v385[8];
  v281 = *(_QWORD *)v385;
  v282 = *(_QWORD *)&v385[24];
  v485 = *(_QWORD *)&v385[16];
  *(_QWORD *)&v412 = 0;
  v413 = 0;
  nullsub_1(v284, v283);
  v285 = (void *)sub_140001650(13, 1);
  if ( !v285 )
    sub_14196B2DB(1, 13);
  qmemcpy(v285, "writeFailures", 13);
  v422 = 13;
  v423 = (__int64)v285;
  v424 = 13;
  v461[0] = 2;
  *(_QWORD *)&v461[8] = 0;
  *(_QWORD *)&v461[16] = v281;
  sub_140A68320(&v431, &v412, &v422, v461);
  if ( v431.m256i_i8[0] != -1 )
    sub_140032FF0(&v431);
  nullsub_1(v287, v286);
  v288 = (void *)sub_140001650(14, 1);
  if ( !v288 )
    sub_14196B2DB(1, 14);
  qmemcpy(v288, "lastWriteError", 14);
  v422 = 14;
  v423 = (__int64)v288;
  v424 = 14;
  if ( v488 == -1 )
  {
    v291 = 0;
  }
  else
  {
    if ( v282 < 0 )
    {
      v290 = 0;
      goto LABEL_431;
    }
    v291 = 3;
    if ( v282 )
    {
      nullsub_1(0x746972577473616CLL, v289);
      v290 = 1;
      v292 = sub_140001650(v282, 1);
      if ( !v292 )
      {
LABEL_431:
        v463 = 1;
        sub_14196B2DB(v290, v282);
      }
      v281 = v292;
      sub_1419234B0(v292, v485, v282);
    }
    else
    {
      v281 = 1;
      v282 = 0;
    }
  }
  v461[0] = v291;
  *(_QWORD *)&v461[8] = v282;
  *(_QWORD *)&v461[16] = v281;
  *(_QWORD *)&v461[24] = v282;
  v463 = 0;
  sub_140A68320(&v431, &v412, &v422, v461);
  if ( v431.m256i_i8[0] != -1 )
    sub_140032FF0(&v431);
  *(_OWORD *)&v440[8] = v412;
  v441 = v413;
  v440[0] = 5;
  sub_14090CDC0(v385, (int)v401, (int)&v437, (int)&unk_141A57946, 16, (__int64)v440, (__int64)&v427);
  v262 = *(_QWORD *)v385;
  if ( *(_QWORD *)v385 == -1 )
  {
    sub_140032FF0(v440);
    v294 = v488;
    v295 = v488 - 1;
    v262 = -1;
  }
  else
  {
    v454 = *(_QWORD *)&v385[88];
    v453 = *(_OWORD *)&v385[72];
    v452 = *(_OWORD *)&v385[56];
    v451 = *(_OWORD *)&v385[40];
    v450 = *(__m256i *)&v385[8];
    sub_140032FF0(v440);
    v294 = v488;
    v295 = v488 - 1;
  }
  if ( v295 <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v485, v294, 1);
LABEL_457:
  if ( (_QWORD)v425 )
    sub_140001660(v458, v425, 1);
  if ( (_DWORD)v262 == -1 )
  {
    *(_QWORD *)&v461[48] = v416;
    *(_OWORD *)&v461[32] = v415;
    *(__m256i *)v461 = v414;
    v489 = 1;
    sub_14090A020((unsigned int)v385, (unsigned int)v401, (unsigned int)v461, (unsigned int)&v341, (__int64)&v427);
    if ( *(_DWORD *)v385 == -1 )
    {
      *(_QWORD *)&v461[48] = v416;
      *(_OWORD *)&v461[32] = v415;
      *(__m256i *)v461 = v414;
      v489 = 1;
      sub_140909A30((unsigned int)v385, (unsigned int)v401, (unsigned int)v461, (unsigned int)&v341, (__int64)&v427);
      if ( *(_DWORD *)v385 == -1 )
      {
        v489 = 1;
        sub_140966330(v461, &v341, &v427);
        sub_14090CDC0(v385, (int)v401, (int)&v414, (int)aFixtureRouterF, 27, (__int64)v461, (__int64)&v427);
        if ( *(_DWORD *)v385 != -1 )
        {
          v8 = v456;
          *(_OWORD *)(v456 + 88) = *(_OWORD *)&v385[80];
          *(_OWORD *)(v8 + 72) = *(_OWORD *)&v385[64];
          v299 = *(_OWORD *)v385;
          v300 = *(_OWORD *)&v385[16];
          v301 = *(_OWORD *)&v385[32];
          *(_OWORD *)(v8 + 56) = *(_OWORD *)&v385[48];
          *(_OWORD *)(v8 + 40) = v301;
          *(_OWORD *)(v8 + 24) = v300;
          *(_OWORD *)(v8 + 8) = v299;
          *(_QWORD *)v8 = -1;
          v489 = 1;
          sub_140032FF0(v461);
          goto LABEL_191;
        }
        v489 = 1;
        sub_140032FF0(v461);
        sub_1419234B0(v385, v401, 216);
        v489 = 0;
        sub_1408752D0(v461, v385);
        v488 = *(_QWORD *)v461;
        if ( *(_QWORD *)v461 == -1 )
        {
          v445.m256i_i64[2] = *(_QWORD *)&v461[24];
          *(_OWORD *)v445.m256i_i8 = *(_OWORD *)&v461[8];
          v489 = 0;
          sub_14092ED00(v385, &v445);
          v8 = v456;
          v307 = *(_QWORD *)&v385[16];
          *(_QWORD *)(v456 + 96) = *(_QWORD *)&v385[88];
          *(_OWORD *)(v8 + 80) = *(_OWORD *)&v385[72];
          *(_OWORD *)(v8 + 64) = *(_OWORD *)&v385[56];
          *(_OWORD *)(v8 + 48) = *(_OWORD *)&v385[40];
          v308 = *(_OWORD *)v385;
          v309 = *(_OWORD *)&v385[24];
          *(_QWORD *)(v8 + 24) = v307;
          *(_OWORD *)(v8 + 32) = v309;
          *(_OWORD *)(v8 + 8) = v308;
          *(_QWORD *)v8 = -1;
          goto LABEL_192;
        }
        v302 = v406;
        v485 = *((_QWORD *)&v405 + 1);
        v462 = *(_QWORD *)&v461[8];
        sub_14095D3B0((unsigned int)v385, DWORD2(v405), v406, *(_DWORD *)&v461[8], *(__int64 *)&v461[16]);
        v303 = *(_OWORD *)v385;
        if ( *(_QWORD *)v385 != -1 )
        {
          v8 = v456;
          *(_OWORD *)(v456 + 88) = *(_OWORD *)&v385[80];
          v304 = *(_OWORD *)&v385[16];
          v305 = *(_OWORD *)&v385[32];
          v306 = *(_OWORD *)&v385[48];
          *(_OWORD *)(v8 + 72) = *(_OWORD *)&v385[64];
          *(_OWORD *)(v8 + 56) = v306;
          *(_OWORD *)(v8 + 40) = v305;
          *(_OWORD *)(v8 + 24) = v304;
          *(_OWORD *)(v8 + 8) = v303;
          *(_QWORD *)v8 = -1;
          if ( v488 )
            sub_140001660(v462, v488, 1);
          goto LABEL_192;
        }
        v310 = sub_1416B1C00(v485, v302);
        if ( v310 )
        {
          v311 = sub_140867960(v310);
          v313 = v312;
          if ( !v311 )
            v313 = 23;
          v314 = &unk_141A5C363;
          if ( v311 )
            v314 = (void *)v311;
        }
        else
        {
          v314 = &unk_141A5C363;
          v313 = 23;
        }
        sub_1401E7560((unsigned int)v385, v313, 0, 1, 1);
        v460 = *(_QWORD *)&v385[8];
        if ( *(_DWORD *)v385 == 1 )
          sub_14196B2DB(v460, *(_QWORD *)&v385[16]);
        v473 = *(_QWORD *)&v385[16];
        if ( v313 )
          sub_1419234B0(v473, v314, v313);
        sub_1416DA570(v461);
        v443 = *(_QWORD *)&v461[8];
        v315 = *(_QWORD *)&v461[16];
        sub_1401E7560((unsigned int)v385, *(_DWORD *)&v461[16], 0, 1, 1);
        v444 = *(_QWORD *)&v385[8];
        LOBYTE(v458) = v385[0];
        if ( v385[0] )
          sub_14196B2DB(v444, *(_QWORD *)&v385[16]);
        v442 = *(_QWORD *)&v385[16];
        if ( v315 )
          sub_1419234B0(v442, v443, v315);
        v435 = v407;
        v316 = v409;
        v455 = v408;
        *(_QWORD *)v385 = &v459;
        *(_QWORD *)&v385[8] = sub_140A05AA0;
        sub_1416DAFA0(&v377, &unk_141A57805, v385);
        v317 = v456;
        *(_QWORD *)(v456 + 88) = v378;
        *(_OWORD *)(v317 + 72) = v377;
        *(_QWORD *)v317 = v444;
        *(_QWORD *)(v317 + 8) = v442;
        *(_QWORD *)(v317 + 16) = v315;
        *(_QWORD *)(v317 + 24) = v460;
        *(_QWORD *)(v317 + 32) = v473;
        *(_QWORD *)(v317 + 40) = v313;
        *(_QWORD *)(v317 + 48) = v435;
        *(_QWORD *)(v317 + 56) = v455;
        *(_QWORD *)(v317 + 64) = v316;
        *(_QWORD *)(v317 + 96) = *((_QWORD *)&v303 + 1);
        *(_BYTE *)(v317 + 104) = v303;
        if ( v488 )
          sub_140001660(v462, v488, 1);
        if ( v427 )
          sub_140001660(v428, v427, 1);
        sub_140905260(&v341);
        if ( (_QWORD)v405 )
          sub_140001660(v485, v405, 1);
        if ( (_BYTE)v457 && v417 )
          sub_140001660(v418, v417, 1);
        sub_140038710(v319);
        if ( *(__int64 *)v461 > 0 )
          sub_140001660(v443, *(_QWORD *)v461, 1);
        return v456;
      }
    }
LABEL_189:
    *(_OWORD *)(v8 + 88) = *(_OWORD *)&v385[80];
    *(_OWORD *)(v8 + 72) = *(_OWORD *)&v385[64];
    v114 = *(_OWORD *)v385;
    v115 = *(_OWORD *)&v385[16];
    v116 = *(_OWORD *)&v385[32];
    *(_OWORD *)(v8 + 56) = *(_OWORD *)&v385[48];
    *(_OWORD *)(v8 + 40) = v116;
    *(_OWORD *)(v8 + 24) = v115;
    *(_OWORD *)(v8 + 8) = v114;
    goto LABEL_190;
  }
  *(_QWORD *)(v8 + 96) = v454;
  *(_OWORD *)(v8 + 80) = v453;
  v296 = *(_OWORD *)v450.m256i_i8;
  v297 = *(_OWORD *)&v450.m256i_u64[2];
  v298 = v451;
  *(_OWORD *)(v8 + 64) = v452;
  *(_OWORD *)(v8 + 48) = v298;
  *(_OWORD *)(v8 + 32) = v297;
  *(_OWORD *)(v8 + 16) = v296;
  *(_QWORD *)(v8 + 8) = v262;
LABEL_190:
  *(_QWORD *)v8 = -1;
LABEL_191:
  sub_1409030E0(v401);
LABEL_192:
  if ( v407 )
    sub_140001660(v408, v407, 1);
  v39 = v442;
  v40 = v457;
  if ( v427 )
    sub_140001660(v428, v427, 1);
  sub_140905260(&v341);
  v38 = 0;
  v41 = v405;
  if ( (_QWORD)v405 )
    goto LABEL_44;
LABEL_45:
  if ( v40 && v417 )
    sub_140001660(v418, v417, 1);
  if ( v38 )
  {
    if ( (unsigned __int64)(v443 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v435, v443, 1);
    if ( v39 != -1 )
      sub_140001660(v444, v39, 1);
    sub_140038710(&v329);
    v42 = v421;
    if ( v421 )
    {
      v43 = (_QWORD *)(*((_QWORD *)&v420 + 1) + 8LL);
      do
      {
        v44 = *(v43 - 1);
        if ( v44 )
          sub_140001660(*v43, v44, 1);
        v43 += 4;
        --v42;
      }
      while ( v42 );
    }
    if ( (_QWORD)v420 )
      sub_140001660(*((_QWORD *)&v420 + 1), 32 * v420, 8);
  }
LABEL_3:
  sub_140038710(v319);
  return v8;
}
