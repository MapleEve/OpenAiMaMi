// win 1.2.7 latest-exe | module src/core/relay/native_catalog.rs | ea 0x1406f9c70 | successor of pre-update 0x140d5ddf0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
_QWORD *__fastcall sub_1406F9C70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // r12
  _OWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 (__fastcall **v24)(); // rax
  PVOID v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 (__fastcall **v32)(); // rax
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // r8
  __int64 v64; // rdx
  _BYTE *v65; // r12
  _OWORD *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 *v71; // r14
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  PVOID v76; // rcx
  char v77; // al
  _QWORD *v78; // r14
  __int64 v79; // rdi
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdi
  __int128 v84; // xmm6
  __int64 v85; // rax
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  __int128 v88; // xmm3
  __int64 v89; // r15
  __int64 v90; // r14
  _BYTE *v91; // r12
  _OWORD *v92; // rbx
  __int64 v93; // rcx
  const char *v94; // r12
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // edx
  int v98; // edx
  int v99; // eax
  int v100; // edx
  __int64 v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int8 *v106; // rax
  int v107; // ebx
  __int64 v108; // r8
  __int64 v109; // r12
  __int64 v110; // r13
  __int64 v111; // rdx
  __int64 v112; // rax
  __int16 v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r15
  char v122; // al
  __int64 v123; // rcx
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  __int128 v126; // xmm3
  unsigned __int8 v127; // al
  unsigned __int64 v128; // rdx
  char v129; // r15
  __int64 v130; // r13
  unsigned __int64 v131; // rdx
  __int64 v132; // r12
  __int64 v133; // r13
  __int128 v134; // xmm0
  unsigned __int8 *v135; // rbx
  __int64 v137; // rdx
  char v138; // r13
  __int64 v139; // rdx
  __int64 v140; // rcx
  int v141; // ebx
  __int16 v142; // di
  __int16 v143; // cx
  __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // r15
  __int128 v147; // kr00_16
  int v148; // edx
  int v149; // ecx
  unsigned int v150; // ecx
  int v151; // r8d
  int v152; // edx
  int v153; // eax
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  _DWORD *v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  void *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  _DWORD *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  void *v167; // rax
  char v168; // al
  int v169; // ecx
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rax
  __int128 v174; // xmm0
  _OWORD *v175; // rax
  __int128 v176; // xmm0
  _OWORD *v177; // rax
  __int64 v178; // rax
  unsigned int v179; // edx
  __int16 v180; // cx
  __int64 v181; // rdx
  __int64 v182; // r8
  __int16 v183; // di
  __int64 v184; // rcx
  __int64 v185; // rbx
  void (__fastcall *v186)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v187; // rdi
  __int64 v188; // rcx
  __int64 *v189; // rbx
  __int64 v190; // r8
  __int64 v191; // rax
  __int64 v192; // rcx
  int v193; // xmm1_4
  PVOID v194; // rcx
  char v195; // al
  __int64 v196; // rdx
  __int64 v197; // rax
  __int64 v198; // rbx
  __int64 v199; // rdi
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  PVOID v205; // rcx
  char v206; // al
  void (__fastcall *v207)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v208; // rdx
  __int64 v209; // rdi
  _QWORD *v210; // rbx
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rbx
  __int64 v214; // rdi
  __int64 v215; // rdx
  int v216; // eax
  _QWORD *v217; // r12
  __int64 v218; // r9
  __int64 v219; // r15
  unsigned __int64 v220; // r12
  unsigned __int64 v221; // rax
  __int64 v222; // r13
  __int64 v223; // r8
  char v224; // r15
  __int64 v225; // r12
  __int128 v226; // xmm0
  __int64 v227; // rdx
  __int64 v228; // rdx
  __int64 v229; // r14
  _OWORD v230[79]; // [rsp+80h] [rbp+0h] BYREF
  __m256i v231; // [rsp+570h] [rbp+4F0h] BYREF
  char v232; // [rsp+590h] [rbp+510h]
  _DWORD v233[91]; // [rsp+591h] [rbp+511h]
  __m256i v234; // [rsp+700h] [rbp+680h] BYREF
  __m256i *v235; // [rsp+720h] [rbp+6A0h]
  __int64 (__fastcall *v236)(); // [rsp+728h] [rbp+6A8h]
  __m256i *v237; // [rsp+730h] [rbp+6B0h]
  __int64 (__fastcall *v238)(); // [rsp+738h] [rbp+6B8h]
  _BYTE *v239; // [rsp+740h] [rbp+6C0h]
  __int64 (*v240)(void); // [rsp+748h] [rbp+6C8h]
  _BYTE *v241; // [rsp+750h] [rbp+6D0h]
  __int64 (*v242)(void); // [rsp+758h] [rbp+6D8h]
  __int64 v243; // [rsp+7B0h] [rbp+730h]
  char v244; // [rsp+7BAh] [rbp+73Ah]
  __int64 v245; // [rsp+9F8h] [rbp+978h]
  int v246; // [rsp+A00h] [rbp+980h]
  __int64 v247; // [rsp+A90h] [rbp+A10h] BYREF
  __int128 v248; // [rsp+A98h] [rbp+A18h]
  __int128 v249; // [rsp+AA8h] [rbp+A28h]
  __int128 v250; // [rsp+AB8h] [rbp+A38h]
  __int128 v251; // [rsp+AC8h] [rbp+A48h]
  __int128 v252; // [rsp+AD8h] [rbp+A58h]
  __int128 v253; // [rsp+AE8h] [rbp+A68h]
  __int64 v254; // [rsp+AF8h] [rbp+A78h]
  __int128 v255; // [rsp+B00h] [rbp+A80h]
  __int128 v256; // [rsp+B10h] [rbp+A90h]
  __int128 v257; // [rsp+B20h] [rbp+AA0h]
  __int128 v258; // [rsp+B30h] [rbp+AB0h]
  __int128 v259; // [rsp+B40h] [rbp+AC0h]
  __m256i v260; // [rsp+B50h] [rbp+AD0h]
  __m256i v261; // [rsp+B70h] [rbp+AF0h]
  __int128 v262; // [rsp+B90h] [rbp+B10h]
  __int128 v263; // [rsp+BA0h] [rbp+B20h]
  __int128 v264; // [rsp+BB0h] [rbp+B30h]
  __int128 v265; // [rsp+BC0h] [rbp+B40h]
  __m256i v266; // [rsp+BD0h] [rbp+B50h]
  __int128 v267; // [rsp+BF0h] [rbp+B70h]
  __int128 v268; // [rsp+C00h] [rbp+B80h]
  __int128 v269; // [rsp+C10h] [rbp+B90h]
  __int128 v270; // [rsp+C20h] [rbp+BA0h]
  __int128 v271; // [rsp+C30h] [rbp+BB0h]
  __int128 v272; // [rsp+C40h] [rbp+BC0h]
  __int128 v273; // [rsp+C50h] [rbp+BD0h]
  __int128 v274; // [rsp+C60h] [rbp+BE0h]
  __int128 v275; // [rsp+C70h] [rbp+BF0h]
  __int64 v276; // [rsp+C80h] [rbp+C00h]
  __int128 v277; // [rsp+C90h] [rbp+C10h]
  __int128 v278; // [rsp+CA0h] [rbp+C20h]
  __int128 v279; // [rsp+CB0h] [rbp+C30h]
  __int128 v280; // [rsp+CC0h] [rbp+C40h]
  __int128 v281; // [rsp+CD0h] [rbp+C50h]
  __int128 v282; // [rsp+CE0h] [rbp+C60h]
  __int64 v283; // [rsp+CF0h] [rbp+C70h]
  __int128 v284; // [rsp+D00h] [rbp+C80h]
  __int128 v285; // [rsp+D10h] [rbp+C90h]
  __int128 v286; // [rsp+D20h] [rbp+CA0h]
  __int128 v287; // [rsp+D30h] [rbp+CB0h]
  __int128 v288; // [rsp+D40h] [rbp+CC0h]
  __int64 v289; // [rsp+D50h] [rbp+CD0h]
  _BYTE v290[26]; // [rsp+D60h] [rbp+CE0h]
  __int128 v291; // [rsp+D80h] [rbp+D00h]
  __int64 v292; // [rsp+D90h] [rbp+D10h]
  __int128 v293; // [rsp+DA0h] [rbp+D20h]
  __int64 v294; // [rsp+DB0h] [rbp+D30h]
  __int128 v295; // [rsp+DC0h] [rbp+D40h]
  __int128 v296; // [rsp+DD0h] [rbp+D50h]
  __int128 v297; // [rsp+DE0h] [rbp+D60h]
  __int128 v298; // [rsp+DF0h] [rbp+D70h]
  __int128 v299; // [rsp+E00h] [rbp+D80h]
  __int128 v300; // [rsp+E10h] [rbp+D90h]
  _BYTE v301[112]; // [rsp+E20h] [rbp+DA0h] BYREF
  __int128 v302; // [rsp+E90h] [rbp+E10h] BYREF
  _OWORD v303[3]; // [rsp+EA0h] [rbp+E20h] BYREF
  __int64 v304; // [rsp+ED0h] [rbp+E50h]
  __int128 v305; // [rsp+ED8h] [rbp+E58h]
  __int128 v306; // [rsp+EE8h] [rbp+E68h]
  _BYTE v307[24]; // [rsp+EF8h] [rbp+E78h]
  __int64 v308; // [rsp+F10h] [rbp+E90h]
  char v309; // [rsp+1008h] [rbp+F88h]
  __m256i *v310; // [rsp+12B0h] [rbp+1230h] BYREF
  __int128 v311; // [rsp+12B8h] [rbp+1238h]
  __int128 v312; // [rsp+12C8h] [rbp+1248h] BYREF
  __int64 v313; // [rsp+12D8h] [rbp+1258h]
  _BYTE v314[26]; // [rsp+12E0h] [rbp+1260h]
  __int128 v315; // [rsp+1300h] [rbp+1280h] BYREF
  __int128 v316; // [rsp+1310h] [rbp+1290h]
  __int128 v317; // [rsp+1320h] [rbp+12A0h]
  __int128 v318; // [rsp+1330h] [rbp+12B0h] BYREF
  __m256i v319; // [rsp+1340h] [rbp+12C0h]
  __int128 v320; // [rsp+1360h] [rbp+12E0h]
  _BYTE v321[96]; // [rsp+1370h] [rbp+12F0h] BYREF
  __m256i v322; // [rsp+13D0h] [rbp+1350h] BYREF
  __m256i v323; // [rsp+13F0h] [rbp+1370h] BYREF
  __int128 v324; // [rsp+1410h] [rbp+1390h]
  __int128 v325; // [rsp+1420h] [rbp+13A0h]
  __int128 v326; // [rsp+1430h] [rbp+13B0h]
  __int128 v327; // [rsp+1440h] [rbp+13C0h]
  _BYTE v328[26]; // [rsp+1450h] [rbp+13D0h] BYREF
  _BYTE v329[26]; // [rsp+1470h] [rbp+13F0h] BYREF
  __m256i v330; // [rsp+1490h] [rbp+1410h] BYREF
  __int128 v331; // [rsp+14B0h] [rbp+1430h]
  __int128 v332; // [rsp+14C0h] [rbp+1440h]
  __int128 v333; // [rsp+14D0h] [rbp+1450h]
  __int128 v334; // [rsp+14E0h] [rbp+1460h]
  __int128 v335; // [rsp+14F0h] [rbp+1470h]
  __int64 v336; // [rsp+1500h] [rbp+1480h]
  __int64 v337; // [rsp+1508h] [rbp+1488h]
  _OWORD *v338; // [rsp+1510h] [rbp+1490h]
  _BYTE *v339; // [rsp+1518h] [rbp+1498h]
  _OWORD *v340; // [rsp+1520h] [rbp+14A0h]
  _BYTE *v341; // [rsp+1528h] [rbp+14A8h]
  _OWORD *v342; // [rsp+1530h] [rbp+14B0h]
  _BYTE *v343; // [rsp+1538h] [rbp+14B8h]
  __int64 v344; // [rsp+1540h] [rbp+14C0h]
  __int64 v345; // [rsp+1548h] [rbp+14C8h]
  _BYTE *v346; // [rsp+1550h] [rbp+14D0h]
  _OWORD *v347; // [rsp+1558h] [rbp+14D8h]
  _BYTE *v348; // [rsp+1560h] [rbp+14E0h]
  _DWORD v349[2]; // [rsp+1568h] [rbp+14E8h]
  _DWORD v350[2]; // [rsp+1570h] [rbp+14F0h]
  _DWORD v351[2]; // [rsp+1578h] [rbp+14F8h]
  _DWORD v352[2]; // [rsp+1580h] [rbp+1500h]
  __int64 v353; // [rsp+1588h] [rbp+1508h]
  __int64 v354; // [rsp+1590h] [rbp+1510h]
  __int64 v355; // [rsp+1598h] [rbp+1518h]
  _OWORD *v356; // [rsp+15A0h] [rbp+1520h]
  _BYTE *v357; // [rsp+15A8h] [rbp+1528h]
  int v358; // [rsp+15B0h] [rbp+1530h]
  __int16 v359; // [rsp+15B4h] [rbp+1534h]
  int v360; // [rsp+15B8h] [rbp+1538h]
  __int16 v361; // [rsp+15BCh] [rbp+153Ch]
  __m256i v362; // [rsp+15C0h] [rbp+1540h] BYREF
  __m256i v363; // [rsp+15E0h] [rbp+1560h] BYREF
  _OWORD *v364; // [rsp+1600h] [rbp+1580h]
  _BYTE *v365; // [rsp+1608h] [rbp+1588h]
  __int64 v366; // [rsp+1610h] [rbp+1590h]
  __int64 v367; // [rsp+1618h] [rbp+1598h]
  __int64 v368; // [rsp+1620h] [rbp+15A0h]
  __int64 v369; // [rsp+1628h] [rbp+15A8h]
  __int64 v370; // [rsp+1630h] [rbp+15B0h]
  _BYTE *v371; // [rsp+1638h] [rbp+15B8h]
  __int64 v372; // [rsp+1640h] [rbp+15C0h]
  _BYTE *v373; // [rsp+1648h] [rbp+15C8h]
  _OWORD *v374; // [rsp+1650h] [rbp+15D0h]
  _BYTE *v375; // [rsp+1658h] [rbp+15D8h]
  _BYTE *v376; // [rsp+1660h] [rbp+15E0h]
  _BYTE *v377; // [rsp+1668h] [rbp+15E8h]
  _OWORD *v378; // [rsp+1670h] [rbp+15F0h]
  _BYTE *v379; // [rsp+1678h] [rbp+15F8h]
  __int64 v380; // [rsp+1680h] [rbp+1600h]
  char v381; // [rsp+168Dh] [rbp+160Dh]
  char v382; // [rsp+168Eh] [rbp+160Eh]
  char v383; // [rsp+168Fh] [rbp+160Fh]
  _OWORD *v384; // [rsp+1690h] [rbp+1610h]
  _BYTE *v385; // [rsp+1698h] [rbp+1618h]
  PVOID v386; // [rsp+16A0h] [rbp+1620h]
  char v387; // [rsp+16ADh] [rbp+162Dh]
  char v388; // [rsp+16AEh] [rbp+162Eh]
  char v389; // [rsp+16AFh] [rbp+162Fh]
  PVOID Address; // [rsp+16B0h] [rbp+1630h]
  char v391; // [rsp+16BCh] [rbp+163Ch]
  char v392; // [rsp+16BDh] [rbp+163Dh]
  char v393; // [rsp+16BEh] [rbp+163Eh]
  char v394; // [rsp+16BFh] [rbp+163Fh]
  __int64 v395; // [rsp+16C0h] [rbp+1640h]
  __int64 v396; // [rsp+16C8h] [rbp+1648h]

  v396 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a2 + 584);
  v395 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 587) = 0x10000;
      *(_BYTE *)(a2 + 586) = 1;
      sub_1419234B0(a2 + 288, a2, 224);
      *(_BYTE *)(v4 + 585) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v8, v7);
      v9 = sub_140001650(16, 8);
      if ( !v9 )
        sub_14196B2C1(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v4 + 240;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(v4 + 592) = v9;
      v11 = &off_141A417C0;
      *(_QWORD *)(v4 + 600) = &off_141A417C0;
      goto LABEL_9;
    case 1LL:
      sub_14196B990(&off_141A3B708);
    case 2LL:
      sub_14196B9B0(&off_141A3B708);
    case 3LL:
      v10 = *(_QWORD *)(a2 + 592);
      v11 = *(__int64 (__fastcall ***)())(v4 + 600);
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v11[3])(v301, v10, a3);
      if ( !*(_QWORD *)v301 )
      {
        *v5 = -1;
        v59 = 3;
        goto LABEL_130;
      }
      v269 = *(_OWORD *)&v301[32];
      v268 = *(_OWORD *)&v301[16];
      v267 = *(_OWORD *)v301;
      Address = *(PVOID *)(v395 + 592);
      v386 = *(PVOID *)(v395 + 600);
      if ( *(_QWORD *)v386 )
        (*(void (__fastcall **)(PVOID))v386)(Address);
      v25 = Address;
      v26 = *((_QWORD *)v386 + 1);
      if ( v26 )
        sub_140001660(Address, v26, *((_QWORD *)v386 + 2));
      v27 = v395;
      *(_BYTE *)(v395 + 588) = 1;
      v28 = v268;
      v29 = v269;
      *(_OWORD *)(v27 + 536) = v267;
      *(_OWORD *)(v27 + 552) = v28;
      *(_OWORD *)(v27 + 568) = v29;
      nullsub_1(v25, v26);
      v30 = sub_140001650(16, 8);
      if ( !v30 )
        sub_14196B2C1(8, 16);
      v31 = v30;
      *(_QWORD *)v30 = v27 + 288;
      *(_BYTE *)(v30 + 8) = 0;
      *(_QWORD *)(v27 + 592) = v30;
      v32 = &off_141A0A2E0;
      *(_QWORD *)(v27 + 600) = &off_141A0A2E0;
LABEL_17:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v32[3])(v301, v31, a3);
      if ( v301[0] == 0xFF )
      {
        *v5 = -1;
        v59 = 4;
        goto LABEL_130;
      }
      v289 = *(_QWORD *)&v301[80];
      v288 = *(_OWORD *)&v301[64];
      v287 = *(_OWORD *)&v301[48];
      v286 = *(_OWORD *)&v301[32];
      v285 = *(_OWORD *)&v301[16];
      v284 = *(_OWORD *)v301;
      Address = *(PVOID *)(v395 + 592);
      v386 = *(PVOID *)(v395 + 600);
      if ( *(_QWORD *)v386 )
        (*(void (__fastcall **)(PVOID))v386)(Address);
      v33 = v395;
      v34 = v395 + 592;
      v35 = *((_QWORD *)v386 + 1);
      if ( v35 )
        sub_140001660(Address, v35, *((_QWORD *)v386 + 2));
      *(_BYTE *)(v33 + 587) = 1;
      *(_QWORD *)(v34 + 80) = v289;
      *(_OWORD *)(v34 + 64) = v288;
      v36 = v284;
      v37 = v285;
      v38 = v286;
      *(_OWORD *)(v34 + 48) = v287;
      *(_OWORD *)(v34 + 32) = v38;
      *(_OWORD *)(v34 + 16) = v37;
      *(_OWORD *)v34 = v36;
      *(_BYTE *)(v33 + 586) = 0;
      sub_1419234B0(v301, v33 + 288, 224);
      *(_BYTE *)(v33 + 585) = 0;
      v39 = *(_QWORD *)(v33 + 528);
      *(_OWORD *)&v307[8] = *(_OWORD *)(v33 + 512);
      v308 = v39;
      v309 = 0;
      nullsub_1(v41, v40);
      v42 = sub_140001650(496, 8);
      if ( !v42 )
        sub_14196B2C1(8, 496);
      v23 = v42;
      sub_1419234B0(v42, v301, 496);
      *(_QWORD *)(v33 + 680) = v23;
      v24 = &off_141A40780;
      *(_QWORD *)(v33 + 688) = &off_141A40780;
LABEL_24:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v24[3])(v301, v23, a3);
      if ( *(_DWORD *)v301 == -1 )
      {
        *v5 = -1;
        v59 = 5;
        goto LABEL_130;
      }
      v300 = *(_OWORD *)&v301[80];
      v299 = *(_OWORD *)&v301[64];
      v298 = *(_OWORD *)&v301[48];
      v297 = *(_OWORD *)&v301[32];
      v296 = *(_OWORD *)&v301[16];
      v295 = *(_OWORD *)v301;
      Address = *(PVOID *)(v395 + 680);
      v386 = *(PVOID *)(v395 + 688);
      if ( *(_QWORD *)v386 )
        (*(void (__fastcall **)(PVOID))v386)(Address);
      v43 = *((_QWORD *)v386 + 1);
      if ( v43 )
        sub_140001660(Address, v43, *((_QWORD *)v386 + 2));
      v230[78] = v300;
      v230[77] = v299;
      v230[76] = v298;
      v230[75] = v297;
      v230[74] = v296;
      v230[73] = v295;
      v4 = v395;
      v13 = (_OWORD *)(v395 + 592);
      *(_DWORD *)(v395 + 587) = 0;
      v44 = *(_OWORD *)(v4 + 536);
      v45 = *(_OWORD *)(v4 + 552);
      *(_OWORD *)v307 = *(_OWORD *)(v4 + 568);
      v306 = v45;
      v305 = v44;
      v46 = *(_OWORD *)(v4 + 592);
      v47 = *(_OWORD *)(v4 + 624);
      v48 = *(_OWORD *)(v4 + 640);
      v302 = *(_OWORD *)(v4 + 608);
      v303[0] = v47;
      v303[1] = v48;
      v303[2] = *(_OWORD *)(v4 + 656);
      v304 = *(_QWORD *)(v4 + 672);
      *(_OWORD *)&v301[96] = v46;
      *(_OWORD *)&v301[80] = v300;
      *(_OWORD *)&v301[64] = v299;
      *(_OWORD *)&v301[48] = v298;
      *(_OWORD *)&v301[32] = v297;
      *(_OWORD *)&v301[16] = v296;
      *(_OWORD *)v301 = v295;
      sub_1419234B0(v230, v301, 1168);
      sub_1419234B0(v13, v230, 1168);
      v12 = (_BYTE *)(v4 + 1760);
      *(_BYTE *)(v4 + 1760) = 0;
LABEL_30:
      *(_OWORD *)(v4 + 856) = *(_OWORD *)(v4 + 808);
      *(_OWORD *)(v4 + 840) = *(_OWORD *)(v4 + 792);
      *(_OWORD *)(v4 + 824) = *(_OWORD *)(v4 + 776);
      *(_QWORD *)(v4 + 952) = *(_QWORD *)(v4 + 768);
      *(_OWORD *)(v4 + 936) = *(_OWORD *)(v4 + 752);
      v49 = *(_OWORD *)(v4 + 688);
      v50 = *(_OWORD *)(v4 + 704);
      v51 = *(_OWORD *)(v4 + 720);
      *(_OWORD *)(v4 + 920) = *(_OWORD *)(v4 + 736);
      *(_OWORD *)(v4 + 904) = v51;
      *(_OWORD *)(v4 + 888) = v50;
      *(_OWORD *)(v4 + 872) = v49;
      *(_OWORD *)(v4 + 1040) = v13[5];
      *(_OWORD *)(v4 + 1024) = v13[4];
      v52 = *v13;
      v53 = v13[1];
      v54 = v13[2];
      *(_OWORD *)(v4 + 1008) = v13[3];
      *(_OWORD *)(v4 + 992) = v54;
      *(_OWORD *)(v4 + 976) = v53;
      *(_OWORD *)(v4 + 960) = v52;
      v55 = *(unsigned __int16 *)(v4 + 952);
      if ( v55 == 0xFFFF )
      {
        v60 = 0;
      }
      else
      {
        v56 = v55 + 1;
        v57 = *(_QWORD *)(v4 + 928);
        v58 = *(_QWORD *)(v4 + 936);
        if ( v58 <= v56 )
        {
          if ( v58 != v56 )
          {
LABEL_33:
            v357 = v12;
            v356 = v13;
            sub_14196B4F0(v57, v58, v56, v58, (__int64)&off_141A3BC98);
          }
        }
        else if ( *(char *)(v57 + v56) < -64 )
        {
          goto LABEL_33;
        }
        v60 = v56 + v57;
      }
      v61 = 1;
      if ( v60 )
        v61 = v60;
      v357 = v12;
      v356 = v13;
      sub_1402001E0(v4 + 1056, v61);
      if ( *(_QWORD *)(v395 + 1072) != 1
        || (v62 = *(_QWORD *)(v395 + 1064), v63 = *(_QWORD *)(v62 + 16), v63 > 0x50)
        || (v64 = *(_QWORD *)(v62 + 8), v379 = v12, v378 = v13, sub_1416A5BF0(v301, v64, v63), !*(_QWORD *)v301) )
      {
        v379 = v12;
        v378 = v13;
        sub_1411E4D50(&v247, aInvalidClientV, 22);
        LOWORD(v254) = 400;
LABEL_56:
        v78 = (_QWORD *)v395;
        goto LABEL_57;
      }
      v385 = v12;
      v384 = v13;
      sub_1416A7680(v301);
      v65 = v385;
      v379 = v385;
      v66 = v384;
      v378 = v384;
      sub_1416A7680(&v301[8]);
      v69 = *(_QWORD *)(v395 + 824);
      LOBYTE(v70) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v69 + 16), 1, 0) )
      {
        v379 = v65;
        v378 = v66;
        sub_141969A30((volatile void *)(v69 + 16));
      }
      v71 = off_142240260;
      if ( 2 * *off_142240260 )
      {
        v379 = v65;
        v378 = v66;
        v72 = sub_14196A710(v70, v67, v68);
        LOBYTE(v72) = v72 ^ 1;
        if ( !*(_BYTE *)(v69 + 17) )
          goto LABEL_49;
LABEL_116:
        v234.m256i_i64[0] = v69 + 16;
        v234.m256i_i8[8] = v72;
        sub_14196B5F0(
          (unsigned int)aRelayStatePois_0,
          20,
          (unsigned int)&v234,
          (unsigned int)&off_141A3B988,
          (__int64)&off_141A39E90);
      }
      v72 = 0;
      if ( *(_BYTE *)(v69 + 17) )
        goto LABEL_116;
LABEL_49:
      LODWORD(v386) = v72;
      Address = (PVOID)(v69 + 16);
      if ( !*(_BYTE *)(v69 + 388) || *(_BYTE *)(v69 + 406) )
      {
        sub_1411E4D50(&v247, aNativeCatalogI, 28);
        LOWORD(v254) = 409;
        if ( !(_BYTE)v386 )
        {
          if ( 2 * *v71 )
          {
            v379 = v385;
            v378 = v384;
            if ( !(unsigned __int8)sub_14196A710(v74, v73, v75) )
              *(_BYTE *)(v69 + 17) = 1;
          }
        }
        v76 = Address;
        v77 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        v13 = v384;
        v12 = v385;
        if ( v77 == 2 )
        {
          v379 = v385;
          v378 = v384;
          WakeByAddressSingle(v76);
        }
        goto LABEL_56;
      }
      sub_1401F5580(
        (__int64)&v231,
        *(_QWORD *)(v69 + 32),
        *(_QWORD *)(v69 + 40),
        *(_QWORD *)(v69 + 56),
        *(_QWORD *)(v69 + 64));
      v89 = *(_QWORD *)(v69 + 344);
      v90 = *(_QWORD *)(v69 + 336) + 1LL;
      *(_QWORD *)(v69 + 336) = v90;
      sub_140230D60(&v234, v69 + 24);
      sub_14022C070(&v312, v69 + 48);
      v294 = v231.m256i_i64[2];
      v293 = *(_OWORD *)v231.m256i_i8;
      *(_OWORD *)v301 = *(_OWORD *)v234.m256i_i8;
      *(_QWORD *)&v301[16] = v234.m256i_i64[2];
      *(_OWORD *)&v301[24] = v312;
      *(_QWORD *)&v301[40] = v313;
      *(_OWORD *)&v301[48] = *(_OWORD *)v231.m256i_i8;
      *(_QWORD *)&v301[64] = v231.m256i_i64[2];
      v91 = v385;
      v379 = v385;
      v92 = v384;
      v378 = v384;
      sub_14002B980(Address, (unsigned int)v386);
      v4 = v395;
      *(_QWORD *)(v395 + 1096) = *(_QWORD *)&v301[16];
      *(_OWORD *)(v4 + 1080) = *(_OWORD *)v301;
      *(_OWORD *)(v4 + 1104) = v312;
      *(_QWORD *)(v4 + 1120) = v313;
      *(_OWORD *)(v4 + 1128) = v293;
      *(_QWORD *)(v4 + 1144) = v294;
      *(_QWORD *)(v4 + 1152) = v89;
      *(_QWORD *)(v4 + 1160) = v90;
      if ( !*(_QWORD *)(v4 + 1072) )
      {
        v365 = v91;
        v364 = v92;
        sub_14196B673(0, 0, &off_141A39EA8);
      }
      Address = v5;
      v16 = v4 + 960;
      v93 = *(_QWORD *)(v4 + 1064);
      v19 = *(_QWORD *)(v4 + 1088);
      v17 = *(_QWORD *)(v93 + 8);
      v18 = *(_QWORD *)(v93 + 16);
      v20 = *(_QWORD *)(v4 + 1096);
      v21 = *(_QWORD *)(v4 + 1112);
      v22 = *(_QWORD *)(v4 + 1120);
      v15 = v4 + 1168;
      *(_QWORD *)(v4 + 1168) = v4 + 960;
      *(_QWORD *)(v4 + 1176) = v17;
      *(_QWORD *)(v4 + 1184) = v18;
      *(_QWORD *)(v4 + 1192) = v19;
      *(_QWORD *)(v4 + 1200) = v20;
      *(_QWORD *)(v4 + 1208) = v21;
      *(_QWORD *)(v4 + 1216) = v22;
      v377 = (_BYTE *)(v4 + 1752);
      *(_BYTE *)(v4 + 1752) = 0;
LABEL_71:
      v94 = "https://chatgpt.com/backend-api/codex/models";
      *(_QWORD *)(v4 + 1224) = "https://chatgpt.com/backend-api/codex/models";
      *(_QWORD *)(v4 + 1232) = 44;
      *(_QWORD *)(v4 + 1240) = v16;
      *(_QWORD *)(v4 + 1248) = v17;
      *(_QWORD *)(v4 + 1256) = v18;
      *(_QWORD *)(v4 + 1264) = v19;
      *(_QWORD *)(v4 + 1272) = v20;
      *(_QWORD *)(v4 + 1280) = v21;
      *(_QWORD *)(v4 + 1288) = v22;
      *(_BYTE *)(v4 + 1744) = 0;
      *(_QWORD *)(v4 + 1296) = v19;
      *(_QWORD *)(v4 + 1304) = v20;
      *(_QWORD *)(v4 + 1312) = v21;
      *(_QWORD *)(v4 + 1320) = v22;
      v375 = v385;
      v374 = v384;
      v373 = v377;
      v367 = v15;
      v372 = v15;
      v376 = (_BYTE *)(v4 + 1744);
      v371 = (_BYTE *)(v4 + 1744);
      v368 = v4 + 1224;
      v370 = v4 + 1224;
      v95 = sub_1416AEBD0();
      v5 = Address;
      v96 = v395;
      *(_QWORD *)(v395 + 1328) = v95;
      *(_DWORD *)(v96 + 1336) = v97;
      v234.m256i_i64[0] = (__int64)"https://chatgpt.com/backend-api/codex/models";
      v234.m256i_i64[1] = 44;
      v243 = v16;
      v234.m256i_i64[2] = v17;
      v234.m256i_i64[3] = v18;
      v244 = 0;
      *(_QWORD *)v301 = sub_1415460F0();
      *(_DWORD *)&v301[8] = v98;
      v99 = sub_1415460D0(v301, 4, 0);
      if ( v100 == -1 )
        sub_141549040(&v330, 0, 0xFFFFFFFFLL);
      else
        sub_141549130((unsigned int)&v330, v99, v100, 0, (__int64)&off_141A3A768);
      sub_1419234B0(&v302, &v234, 288);
      *(__m256i *)v301 = v330;
      *(_OWORD *)&v301[32] = v331;
      *(_OWORD *)&v301[48] = v332;
      *(_OWORD *)&v301[64] = v333;
      *(_OWORD *)&v301[80] = v334;
      *(_OWORD *)&v301[96] = v335;
      sub_1419234B0(&v231, v301, 400);
      v101 = v395;
      sub_1419234B0(v395 + 1344, &v231, 400);
      Address = (PVOID)(v101 + 1344);
      v106 = (unsigned __int8 *)sub_1415475D0(v103, v102, v104, v105);
      v107 = v106[72];
      if ( !v106[72] )
        goto LABEL_75;
      if ( v107 != 2 )
      {
        v135 = v106;
        sub_1416CA860(v106, sub_140A21520);
        v106 = v135;
        v135[72] = 0;
LABEL_75:
        LOBYTE(v107) = sub_141541630(v106[68], v106[69]);
      }
      LOBYTE(v386) = (_BYTE)v107 == 2;
      v108 = v395;
      switch ( *(_BYTE *)(v395 + 1642) )
      {
        case 0:
          *(_WORD *)(v395 + 1640) = 0;
          v109 = *(_QWORD *)(v108 + 1456);
          v110 = *(_QWORD *)(v108 + 1464);
          v111 = *(_QWORD *)(v108 + 1632);
          v380 = *(_QWORD *)(v108 + 1472);
          v369 = *(_QWORD *)(v108 + 1480);
          sub_1401F4AB0(v301, v111);
          v112 = *(_QWORD *)v301;
          v113 = *(_WORD *)&v301[8];
          LOWORD(v17) = *(_WORD *)&v301[10];
          if ( *(_QWORD *)v301 == -1 )
            goto LABEL_133;
          *(_DWORD *)&v321[92] = *(_DWORD *)&v301[92];
          *(_OWORD *)&v321[76] = *(_OWORD *)&v301[76];
          *(_OWORD *)&v321[60] = *(_OWORD *)&v301[60];
          *(_OWORD *)&v321[44] = *(_OWORD *)&v301[44];
          *(_OWORD *)&v321[28] = *(_OWORD *)&v301[28];
          *(_OWORD *)&v321[12] = *(_OWORD *)&v301[12];
          *(_BYTE *)(v395 + 1640) = 1;
          *(_QWORD *)v321 = v112;
          *(_WORD *)&v321[8] = v113;
          *(_WORD *)&v321[10] = v17;
          sub_141296CF0(v301);
          v323.m256i_i64[0] = 2;
          sub_141293C10(&v234, v301, &v323);
          v245 = 4;
          v246 = 0;
          sub_1419234B0(v301, &v234, 912);
          if ( sub_14128D4A0(v301) == 1 )
          {
            sub_14028DCE0(v114);
            LOBYTE(v113) = 2;
            goto LABEL_131;
          }
          *(_QWORD *)(v395 + 1488) = v114;
          sub_140657900((unsigned int)v301, v114, (unsigned int)&unk_141A35940, v109, v110);
          v17 = v395;
          *(_QWORD *)(v395 + 1664) = &qword_141A393E0;
          *(_QWORD *)(v17 + 1672) = 14;
          *(_QWORD *)(v17 + 1680) = v380;
          *(_QWORD *)(v17 + 1688) = v369;
          if ( *(_DWORD *)v301 != 2 )
          {
            v366 = 0;
            v391 = 1;
            sub_141686B20(&v234, (char *)v303 + 8);
            v310 = &v234;
            sub_140864140(&v323, &v310, v395 + 1664);
            v115 = v323.m256i_i64[0];
            if ( v323.m256i_i64[0] == -3 )
            {
              v116 = 0;
            }
            else
            {
              v323.m256i_i16[0] = 0;
              v310 = (__m256i *)v115;
              v311 = *(_OWORD *)&v323.m256i_u64[1];
              v116 = sub_1403FBBC0(&v323, &v310);
            }
            v380 = v116;
            if ( v234.m256i_i64[0] != -2 )
            {
              sub_141689260(&v234);
              v116 = v380;
              if ( v234.m256i_i64[0] != -1 )
              {
                if ( v234.m256i_i64[0] )
                  sub_140001660(v234.m256i_i64[1], v234.m256i_i64[0], 1);
              }
            }
            if ( *(_QWORD *)v301 != 2 )
            {
              v366 = v116;
              v391 = 1;
              v117 = sub_141687D70((char *)v303 + 8);
              if ( v117 != 0 && v118 == 0 )
              {
                v366 = v116;
                v391 = 1;
                sub_141688BE0((char *)v303 + 8, 0);
              }
            }
            v17 = v395;
            if ( v116 )
            {
              if ( *(_DWORD *)v301 == 2 )
                sub_14028DCE0(*(_QWORD *)&v301[8]);
              else
                sub_1406C2010(v301);
              *(_QWORD *)v301 = 2;
              *(_QWORD *)&v301[8] = v380;
              v17 = v395;
            }
          }
          sub_1419234B0(&v234, v301, 272);
          *(_BYTE *)(v17 + 1640) = 0;
          v327 = *(_OWORD *)&v321[80];
          v326 = *(_OWORD *)&v321[64];
          v325 = *(_OWORD *)&v321[48];
          v324 = *(_OWORD *)&v321[32];
          v323 = *(__m256i *)v321;
          sub_14126FD80(v301, &v234, &v323);
          v119 = sub_14126FCB0(v301);
          v108 = v395;
          *(_QWORD *)(v395 + 1648) = v119;
          *(_QWORD *)(v108 + 1656) = v120;
LABEL_97:
          v121 = v108 + 1648;
          sub_141298A20(v301, v108 + 1648, a3);
          v94 = *(const char **)v301;
          if ( *(_QWORD *)v301 == -2 )
          {
            v122 = 3;
LABEL_137:
            *(_BYTE *)(v395 + 1642) = v122;
            goto LABEL_138;
          }
          v17 = *(_QWORD *)&v301[8];
          v330 = *(__m256i *)&v301[16];
          v331 = *(_OWORD *)&v301[48];
          v332 = *(_OWORD *)&v301[64];
          v333 = *(_OWORD *)&v301[80];
          v334 = *(_OWORD *)&v301[96];
          v335 = v302;
          v336 = *(_QWORD *)&v303[0];
          sub_1406C1D00(*(_QWORD *)(v395 + 1648), *(_QWORD *)(v395 + 1656));
          if ( (_DWORD)v94 == -1 )
          {
            *(_QWORD *)v301 = v17;
            v380 = v17;
            v129 = sub_141246860(v301);
            sub_14028DCE0(v380);
            LOBYTE(v113) = v129 | 2;
            v130 = v395;
            goto LABEL_258;
          }
          v123 = v395;
          *(_QWORD *)(v395 + 1496) = v94;
          *(_QWORD *)(v123 + 1504) = v17;
          *(_OWORD *)(v123 + 1592) = v334;
          v124 = *(_OWORD *)&v330.m256i_u64[2];
          v125 = v331;
          v126 = v332;
          *(_OWORD *)(v123 + 1512) = *(_OWORD *)v330.m256i_i8;
          *(_OWORD *)(v123 + 1528) = v124;
          *(_OWORD *)(v123 + 1544) = v125;
          *(_OWORD *)(v123 + 1560) = v126;
          *(_OWORD *)(v123 + 1576) = v333;
          *(_OWORD *)(v123 + 1608) = v335;
          *(_QWORD *)(v123 + 1624) = v336;
          LODWORD(v17) = *(unsigned __int16 *)(v123 + 1600);
          if ( (_DWORD)v17 != 200 )
          {
            LOBYTE(v113) = 1;
            goto LABEL_255;
          }
          v94 = (const char *)(v123 + 1496);
          v127 = sub_141255DB0(v123 + 1496);
          if ( ((v128 >= 0x800001) & v127) != 0 )
          {
            LOBYTE(v113) = 5;
            v123 = v395;
            goto LABEL_255;
          }
          sub_1406CE2F0(v301, "etaghttps://chatgpt.com/backend-api/codex/models", 4, v94);
          if ( *(_DWORD *)v301 == 1 )
          {
            v131 = *(_QWORD *)(v395 + 1536);
            if ( *(_QWORD *)&v301[16] >= v131 )
              sub_14196B673(*(_QWORD *)&v301[16], v131, &off_141A35658);
            v132 = *(_QWORD *)(v395 + 1528);
            v133 = 104LL * *(_QWORD *)&v301[16];
            (**(void (__fastcall ***)(_BYTE *, __int64, _QWORD, _QWORD))(v132 + 104LL * *(_QWORD *)&v301[16] + 24))(
              v301,
              v132 + 104LL * *(_QWORD *)&v301[16] + 48,
              *(_QWORD *)(v132 + 104LL * *(_QWORD *)&v301[16] + 32),
              *(_QWORD *)(v132 + 104LL * *(_QWORD *)&v301[16] + 40));
            v94 = (const char *)(v133 + v132);
            v301[32] = v94[56];
            v134 = *(_OWORD *)v301;
            *(_OWORD *)(v121 + 16) = *(_OWORD *)&v301[16];
            *(_OWORD *)v121 = v134;
            *(_QWORD *)(v121 + 32) = *(_QWORD *)&v301[32];
            v108 = v395;
          }
          else
          {
            v108 = v395;
            *(_BYTE *)(v395 + 1680) = 2;
          }
          *(_BYTE *)(v108 + 1641) = 1;
          *(_QWORD *)(v108 + 1688) = 0;
          *(_QWORD *)(v108 + 1696) = 1;
          *(_QWORD *)(v108 + 1704) = 0;
          break;
        case 1:
          JUMPOUT(0x1406FB645LL);
        case 2:
          sub_14196B9B0(&off_141A3A860);
        case 3:
          goto LABEL_97;
        case 4:
          goto LABEL_260;
      }
      while ( 1 )
      {
        *(_QWORD *)(v108 + 1712) = v108 + 1496;
        *(_BYTE *)(v108 + 1736) = 0;
LABEL_260:
        sub_1406D50C0(v301, v108 + 1712, a3);
        if ( *(_QWORD *)v301 == 2 )
        {
          v122 = 4;
          goto LABEL_137;
        }
        v218 = *(_QWORD *)&v301[8];
        v291 = *(_OWORD *)&v301[16];
        v292 = *(_QWORD *)&v301[32];
        if ( *(_DWORD *)v301 == 1 )
        {
          *(_QWORD *)v301 = *(_QWORD *)&v301[8];
          v380 = *(_QWORD *)&v301[8];
          v224 = sub_141246860(v301);
          sub_14028DCE0(v380);
          LOBYTE(v113) = v224 | 2;
          goto LABEL_282;
        }
        if ( !*(_QWORD *)&v301[8] )
          break;
        *(_QWORD *)v301 = *(_QWORD *)&v301[8];
        *(_OWORD *)&v301[8] = v291;
        *(_QWORD *)&v301[24] = v292;
        v219 = *((_QWORD *)&v291 + 1);
        v220 = *(_QWORD *)(v395 + 1704);
        v221 = 0;
        if ( v220 <= 0x800000 )
          v221 = 0x800000 - v220;
        if ( *((_QWORD *)&v291 + 1) > v221 )
        {
          (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v218 + 32))(
            &v301[24],
            *(_QWORD *)&v301[8],
            *((_QWORD *)&v291 + 1));
          LOBYTE(v113) = 5;
          goto LABEL_282;
        }
        v222 = *(_QWORD *)&v301[8];
        if ( *((_QWORD *)&v291 + 1) > *(_QWORD *)(v395 + 1688) - v220 )
        {
          v229 = v395;
          sub_141939070(v395 + 1688, v220, DWORD2(v291), 1, 1);
          v220 = *(_QWORD *)(v229 + 1704);
LABEL_268:
          v17 = v395;
          sub_1419234B0(v220 + *(_QWORD *)(v395 + 1696), v222, v219);
          v222 = *(_QWORD *)&v301[8];
          v218 = *(_QWORD *)v301;
          v223 = *(_QWORD *)&v301[16];
          goto LABEL_270;
        }
        v223 = 0;
        if ( *((_QWORD *)&v291 + 1) )
          goto LABEL_268;
        v17 = v395;
LABEL_270:
        v94 = (const char *)(v219 + v220);
        *(_QWORD *)(v17 + 1704) = v94;
        (*(void (__fastcall **)(_BYTE *, __int64, __int64))(v218 + 32))(&v301[24], v222, v223);
        v108 = v395;
      }
      *(_OWORD *)v301 = *(_OWORD *)(v395 + 1696);
      *(_OWORD *)&v301[16] = 0;
      vendor_json_parse_str_with_trailing_check(&v234, (__int128 *)v301);
      LOBYTE(v113) = v234.m256i_i8[0];
      if ( v234.m256i_i8[0] != -1 )
      {
        LODWORD(v369) = v234.m256i_u8[1];
        LOWORD(v17) = v234.m256i_i16[1];
        LOWORD(v380) = v234.m256i_i16[2];
        *(_OWORD *)v328 = *(_OWORD *)&v234.m256i_u16[3];
        *(_OWORD *)&v328[10] = *(_OWORD *)&v234.m256i_u64[2];
        v225 = v395;
        *(_BYTE *)(v395 + 1641) = 0;
        v226 = *(_OWORD *)(v225 + 1648);
        *(_OWORD *)&v363.m256i_u64[2] = *(_OWORD *)(v225 + 1664);
        *(_OWORD *)v363.m256i_i8 = v226;
        v138 = *(_BYTE *)(v225 + 1680);
        *(_DWORD *)((char *)v349 + 3) = *(_DWORD *)(v225 + 1684);
        v349[0] = *(_DWORD *)(v225 + 1681);
        v227 = *(_QWORD *)(v225 + 1688);
        if ( v227 )
          sub_140001660(*(_QWORD *)(v225 + 1696), v227, 1);
        *(_BYTE *)(v225 + 1641) = 0;
        sub_1406C21E0(v225 + 1496);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v395 + 1488)) )
          sub_141258070(v395 + 1488);
        v137 = v395;
        *(_BYTE *)(v395 + 1640) = 0;
        LOWORD(v94) = (_WORD)v369 << 8;
        goto LABEL_134;
      }
      *(_QWORD *)v301 = v234.m256i_i64[1];
      sub_140032F30(v301);
      LOBYTE(v113) = 4;
LABEL_282:
      v17 = v395;
      v228 = *(_QWORD *)(v395 + 1688);
      if ( v228 )
        sub_140001660(*(_QWORD *)(v395 + 1696), v228, 1);
      if ( *(_BYTE *)(v17 + 1680) != 2 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v395 + 1648) + 32LL))(
          v395 + 1672,
          *(_QWORD *)(v395 + 1656),
          *(_QWORD *)(v395 + 1664));
      v123 = v395;
      *(_BYTE *)(v395 + 1641) = 0;
LABEL_255:
      sub_14068B4D0(v123 + 1496);
      v130 = v395;
      v217 = *(_QWORD **)(v395 + 1624);
      if ( *v217 )
        sub_140001660(v217[1], *v217, 1);
      sub_140001660(v217, 88, 8);
LABEL_258:
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v130 + 1488)) )
        sub_141258070(v130 + 1488);
LABEL_131:
      if ( *(_BYTE *)(v395 + 1640) )
        sub_1400366B0(v321);
LABEL_133:
      v137 = v395;
      *(_BYTE *)(v395 + 1640) = 0;
      v138 = -1;
      LOWORD(v94) = 0;
LABEL_134:
      *(_OWORD *)&v329[10] = *(_OWORD *)&v328[10];
      *(_OWORD *)v329 = *(_OWORD *)v328;
      v362 = v363;
      v350[0] = v349[0];
      *(_DWORD *)((char *)v350 + 3) = *(_DWORD *)((char *)v349 + 3);
      *(_BYTE *)(v137 + 1642) = 1;
      if ( v138 != -2 )
      {
        *(_OWORD *)&v314[10] = *(_OWORD *)&v329[10];
        *(_OWORD *)v314 = *(_OWORD *)v329;
        v322 = v362;
        v352[0] = v350[0];
        *(_DWORD *)((char *)v352 + 3) = *(_DWORD *)((char *)v350 + 3);
        if ( v138 != -3 )
        {
          LOWORD(v94) = (unsigned __int8)v113 | (unsigned __int16)v94;
          goto LABEL_141;
        }
LABEL_139:
        *v376 = 3;
LABEL_193:
        *v377 = 3;
        *v385 = 3;
        goto LABEL_194;
      }
LABEL_138:
      if ( (unsigned __int8)sub_14152B3E0(((unsigned __int8)v107 | (unsigned __int8)v386) & 1, Address, a3) )
        goto LABEL_139;
      v138 = -2;
LABEL_141:
      *(_OWORD *)&v290[10] = *(_OWORD *)&v314[10];
      *(_OWORD *)v290 = *(_OWORD *)v314;
      v261 = v322;
      v351[0] = v352[0];
      *(_DWORD *)((char *)v351 + 3) = *(_DWORD *)((char *)v352 + 3);
      sub_1406BBB60(v395 + 1456);
      v375 = v385;
      v374 = v384;
      v373 = v377;
      v372 = v367;
      v371 = v376;
      v370 = v368;
      sub_140291A70(Address);
      if ( v138 == -2 )
      {
        LOBYTE(v94) = 3;
        LOWORD(v141) = 0;
        goto LABEL_145;
      }
      v141 = (unsigned __int16)v94 >> 8;
      if ( v138 == -1 )
      {
LABEL_145:
        *(_QWORD *)v321 = 0;
        *(_QWORD *)&v321[16] = 0;
        nullsub_1(v140, v139);
        v144 = sub_140001650(6, 1);
        if ( !v144 )
          sub_14196B2DB(1, 6);
        *(_WORD *)(v144 + 4) = 29548;
        *(_DWORD *)v144 = 1701080941;
        v231.m256i_i64[0] = 6;
        v231.m256i_i64[1] = v144;
        v231.m256i_i64[2] = 6;
        *(_QWORD *)&v301[8] = 0;
        *(_OWORD *)&v301[16] = 8u;
        v301[0] = 4;
        sub_140A68320(&v234, v321, &v231, v301);
        if ( v234.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v234);
        v142 = ((_WORD)v141 << 8) | (unsigned __int8)v94;
        *(_OWORD *)&v301[2] = *(_OWORD *)v321;
        *(_QWORD *)&v301[18] = *(_QWORD *)&v321[16];
        *(_OWORD *)v323.m256i_i8 = *(_OWORD *)v301;
        *(__int64 *)((char *)&v323.m256i_i64[1] + 2) = *(_QWORD *)&v321[8];
        *(__int64 *)((char *)&v323.m256i_i64[2] + 2) = *(_QWORD *)&v321[16];
        LOBYTE(v94) = 5;
        v138 = 2;
      }
      else
      {
        *(_OWORD *)((char *)&v323.m256i_u64[1] + 2) = *(_OWORD *)&v290[10];
        *(_OWORD *)v323.m256i_i8 = *(_OWORD *)v290;
        v330 = v261;
        v362.m256i_i32[0] = v351[0];
        *(__int32 *)((char *)v362.m256i_i32 + 3) = *(_DWORD *)((char *)v351 + 3);
        v142 = -1;
        v143 = v380;
      }
      v363.m256i_i8[0] = (char)v94;
      v363.m256i_i8[1] = v141;
      v363.m256i_i16[1] = v17;
      v363.m256i_i16[2] = v143;
      *(_OWORD *)&v363.m256i_u16[3] = *(_OWORD *)v323.m256i_i8;
      *(_OWORD *)&v363.m256i_u64[2] = *(_OWORD *)((char *)&v323.m256i_u64[1] + 2);
      v231 = v330;
      v232 = v138;
      v233[0] = v362.m256i_i32[0];
      *(_DWORD *)((char *)v233 + 3) = *(__int32 *)((char *)v362.m256i_i32 + 3);
      v389 = 1;
      v388 = 1;
      sub_1401F5140(v301, &v363);
      v145 = *(_QWORD *)v301;
      if ( *(_QWORD *)v301 == -1 )
      {
        if ( v142 == -1 )
        {
          LOWORD(v17) = *(_WORD *)&v301[10];
          v142 = *(_WORD *)&v301[8];
        }
        v146 = 8;
        v145 = 0;
        v147 = 0u;
      }
      else
      {
        v146 = *(_QWORD *)&v301[8];
        v147 = *(_OWORD *)&v301[16];
        if ( v142 == -1 )
          v142 = 5 * (*(_QWORD *)&v301[16] == 0) - 1;
      }
      *(_QWORD *)v314 = v145;
      *(_QWORD *)&v314[8] = v146;
      *(_QWORD *)&v314[16] = v147;
      v394 = 1;
      v393 = 1;
      v392 = 1;
      sub_1414331D0(v301);
      v148 = (*(int *)v301 >> 13) - 1;
      v149 = 0;
      if ( *(int *)v301 >> 13 <= 0 )
      {
        v150 = (1 - (*(int *)v301 >> 13)) / 0x190u + 1;
        v148 += 400 * v150;
        v149 = -146097 * v150;
      }
      v151 = v148;
      v152 = v148 / 100;
      v153 = v149 + ((*(_DWORD *)v301 >> 4) & 0x1FF) - v152;
      v154 = (unsigned int)(v152 >> 2);
      v321[28] = v142 == -1;
      *(_QWORD *)v321 = 1000
                      * (*(unsigned int *)&v301[4] + 86400LL * ((int)v154 + ((1461 * v151) >> 2) + v153 - 719163))
                      + *(unsigned int *)&v301[8] / 0xF4240uLL;
      *(_OWORD *)&v321[8] = v147;
      *(_WORD *)&v321[24] = v142;
      *(_WORD *)&v321[26] = v17;
      if ( v142 == -1 )
      {
        v170 = *(_QWORD *)(v395 + 1296);
        v171 = *(_QWORD *)(v395 + 1304);
        v172 = *(_QWORD *)(v395 + 1312);
        v173 = *(_QWORD *)(v395 + 1320);
        v394 = 1;
        v393 = 1;
        v392 = 1;
        sub_140D577F0((unsigned int)&v323, v170, v171, v172, v173, v146, v147);
        *(_QWORD *)v301 = v146;
        *(_QWORD *)&v301[8] = v146;
        *(_QWORD *)&v301[16] = v145;
        *(_QWORD *)&v301[24] = v146 + 32 * v147;
        *(_QWORD *)&v301[32] = v323.m256i_i64[1];
        *(_QWORD *)&v301[40] = v323.m256i_i64[1];
        *(_QWORD *)&v301[48] = v323.m256i_i64[0];
        *(_QWORD *)&v301[56] = v323.m256i_i64[1] + 32 * v323.m256i_i64[2];
        v394 = 1;
        v393 = 0;
        v392 = 1;
        sub_1402028D0(&v330, v301);
        *(_OWORD *)&v234.m256i_u64[1] = *(_OWORD *)v330.m256i_i8;
        v234.m256i_i64[3] = v330.m256i_i64[2];
        v234.m256i_i8[0] = 4;
        v381 = 1;
        Address = (PVOID)sub_1416725D0(aModels_0, 6, &v363);
        sub_1406C0ED0(Address);
        v174 = *(_OWORD *)v234.m256i_i8;
        v175 = Address;
        *((_OWORD *)Address + 1) = *(_OWORD *)&v234.m256i_u64[2];
        *v175 = v174;
        v394 = 1;
        v393 = 0;
        v392 = 1;
        sub_1401C0DA0(v301, v321);
        if ( v301[0] == 0xFF )
        {
          v330.m256i_i64[0] = *(_QWORD *)&v301[8];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_6,
            43,
            (unsigned int)&v330,
            (unsigned int)&off_141A3B8C8,
            (__int64)&off_141A3A810);
        }
        v234 = *(__m256i *)v301;
        v382 = 1;
        Address = (PVOID)sub_1416725D0(aAimamiOfficial, 23, &v363);
        sub_1406C0ED0(Address);
        v176 = *(_OWORD *)v234.m256i_i8;
        v177 = Address;
        *((_OWORD *)Address + 1) = *(_OWORD *)&v234.m256i_u64[2];
        *v177 = v176;
        v330 = v363;
        v234 = v231;
        v168 = v232;
        v323.m256i_i32[0] = v233[0];
        *(__int32 *)((char *)v323.m256i_i32 + 3) = *(_DWORD *)((char *)v233 + 3);
        LODWORD(Address) = 0;
      }
      else
      {
        *(_QWORD *)v329 = 0;
        *(_QWORD *)&v329[16] = 0;
        nullsub_1(
          1000 * (*(unsigned int *)&v301[4] + 86400LL * ((int)v154 + ((1461 * v151) >> 2) + v153 - 719163))
        + *(unsigned int *)&v301[8] / 0xF4240uLL,
          v154);
        v155 = sub_140001650(5, 1);
        if ( !v155 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v155 + 4) = 114;
        *(_DWORD *)v155 = 1869771365;
        *(_QWORD *)v328 = 5;
        *(_QWORD *)&v328[8] = v155;
        *(_QWORD *)&v328[16] = 5;
        v322.m256i_i64[0] = 0;
        v322.m256i_i64[2] = 0;
        nullsub_1(v157, v156);
        v158 = (_DWORD *)sub_140001650(4, 1);
        if ( !v158 )
          sub_14196B2DB(1, 4);
        *v158 = 1701080931;
        v362.m256i_i64[0] = 4;
        v362.m256i_i64[1] = (__int64)v158;
        v362.m256i_i64[2] = 4;
        nullsub_1(v160, v159);
        v161 = (void *)sub_140001650(28, 1);
        Address = v161;
        if ( !v161 )
          sub_14196B2DB(1, 28);
        qmemcpy(v161, "official_catalog_unavailable", 28);
        v301[0] = 3;
        *(_QWORD *)&v301[8] = 28;
        *(_QWORD *)&v301[16] = v161;
        *(_QWORD *)&v301[24] = 28;
        sub_140A68320(&v234, &v322, &v362, v301);
        if ( v234.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v234);
        nullsub_1(v163, v162);
        v164 = (_DWORD *)sub_140001650(7, 1);
        if ( !v164 )
          sub_14196B2DB(1, 7);
        *(_DWORD *)((char *)v164 + 3) = 1701273971;
        *v164 = 1936942445;
        v362.m256i_i64[0] = 7;
        v362.m256i_i64[1] = (__int64)v164;
        v362.m256i_i64[2] = 7;
        nullsub_1(v166, v165);
        v167 = (void *)sub_140001650(75, 1);
        Address = v167;
        if ( !v167 )
          sub_14196B2DB(1, 75);
        qmemcpy(v167, "Official model catalog refresh failed. No replacement catalog was returned.", 75);
        v301[0] = 3;
        *(_QWORD *)&v301[8] = 75;
        *(_QWORD *)&v301[16] = v167;
        *(_QWORD *)&v301[24] = 75;
        sub_140A68320(&v234, &v322, &v362, v301);
        if ( v234.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v234);
        *(_OWORD *)&v330.m256i_u64[1] = *(_OWORD *)v322.m256i_i8;
        v330.m256i_i64[3] = v322.m256i_i64[2];
        v330.m256i_i8[0] = 5;
        v383 = 0;
        sub_140A68320(&v323, v329, v328, &v330);
        if ( v323.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v323);
        *(_OWORD *)&v301[7] = *(_OWORD *)v329;
        *(_QWORD *)&v301[23] = *(_QWORD *)&v329[16];
        sub_1406C0ED0(&v363);
        v363.m256i_i8[0] = 5;
        *(_OWORD *)&v363.m256i_u64[2] = *(_OWORD *)&v301[15];
        *(_OWORD *)&v363.m256i_i8[1] = *(_OWORD *)v301;
        v168 = 2;
        v169 = *(_DWORD *)v301;
        *(_OWORD *)&v330.m256i_u64[2] = *(_OWORD *)&v363.m256i_u64[2];
        v330.m256i_i8[0] = 5;
        *(__int64 *)((char *)v330.m256i_i64 + 1) = *(_QWORD *)v301;
        *(__int32 *)((char *)&v330.m256i_i32[2] + 1) = *(_DWORD *)&v301[8];
        *(__int16 *)((char *)&v330.m256i_i16[6] + 1) = *(_WORD *)&v301[12];
        v330.m256i_i8[15] = v301[14];
        LOBYTE(v169) = 1;
        LODWORD(Address) = v169;
      }
      v380 = v145;
      *(__m256i *)v301 = v330;
      *(__m256i *)&v301[32] = v234;
      v301[64] = v168;
      *(_DWORD *)&v301[65] = v323.m256i_i32[0];
      *(_DWORD *)&v301[68] = *(__int32 *)((char *)v323.m256i_i32 + 3);
      *(_OWORD *)&v301[72] = *(_OWORD *)v321;
      *(_OWORD *)&v301[88] = *(_OWORD *)&v321[16];
      v178 = sub_1416AED20(v395 + 1328);
      *(_OWORD *)v323.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v178 + v179 / 0xF4240uLL;
      if ( *(unsigned __int16 *)&v301[96] > 2u )
      {
        if ( *(unsigned __int16 *)&v301[96] == 3 )
        {
          v180 = 504;
          goto LABEL_184;
        }
        v180 = 200;
        if ( *(unsigned __int16 *)&v301[96] == 0xFFFF )
          goto LABEL_184;
LABEL_181:
        v180 = 502;
        goto LABEL_184;
      }
      if ( !*(_WORD *)&v301[96] )
      {
        v180 = 401;
        goto LABEL_184;
      }
      if ( *(unsigned __int16 *)&v301[96] != 1 )
        goto LABEL_181;
      v180 = 502;
      if ( (unsigned __int16)(*(_WORD *)&v301[98] - 400) < 0xC8u )
        v180 = *(_WORD *)&v301[98];
LABEL_184:
      v362.m256i_i16[0] = v180;
      v234.m256i_i64[0] = (__int64)&v301[100];
      v234.m256i_i64[1] = (__int64)sub_1416EBC20;
      v234.m256i_i64[2] = (__int64)&v301[96];
      v234.m256i_i64[3] = (__int64)sub_1402228D0;
      v235 = &v362;
      v236 = sub_1416EA1B0;
      v237 = &v323;
      v238 = sub_1416E85A0;
      v239 = &v301[80];
      v240 = sub_1416EBAE0;
      v241 = &v301[88];
      v242 = sub_1416EBAE0;
      sub_1416DAFA0(&v330, &unk_141A08365, &v234);
      sub_1406C9730((unsigned int)aNativeCatalog, 14, (unsigned int)aFetchCompleted, 15, (__int64)&v330);
      v256 = *(_OWORD *)v301;
      v257 = *(_OWORD *)&v301[16];
      v258 = *(_OWORD *)&v301[32];
      v259 = *(_OWORD *)&v301[48];
      v260 = *(__m256i *)&v301[64];
      v183 = *(_WORD *)&v301[96];
      v358 = *(_DWORD *)&v301[98];
      v359 = *(_WORD *)&v301[102];
      if ( (_BYTE)Address )
      {
        v386 = (PVOID)v147;
        Address = nullptr;
        v369 = v146;
        v184 = v146;
        while ( v386 != Address )
        {
          Address = (char *)Address + 1;
          v185 = v184 + 32;
          sub_1401AB4D0(v184, v181);
          v184 = v185;
        }
        v181 = v380;
        if ( v380 )
          sub_140001660(v369, 32 * v380, 8);
        if ( v232 != 2 )
        {
          v186 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v231.m256i_i64[0] + 32);
          v387 = 0;
          v186(&v231.m256i_u64[3], v231.m256i_i64[1], v231.m256i_i64[2]);
        }
      }
      v262 = v256;
      v263 = v257;
      v264 = v258;
      v265 = v259;
      v266 = v260;
      v360 = v358;
      v361 = v359;
      *v376 = 1;
      if ( v183 == -2 )
        goto LABEL_193;
      v188 = v395;
      *(_BYTE *)(v395 + 1752) = 1;
      v319 = v266;
      v318 = v265;
      v317 = v264;
      v316 = v263;
      v315 = v262;
      *(_DWORD *)((char *)&v320 + 2) = v360;
      WORD3(v320) = v361;
      LOWORD(v320) = v183;
      v187 = *(_QWORD *)(v188 + 824);
      LOBYTE(v188) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v187 + 16), 1, 0) )
        sub_141969A30((volatile void *)(v187 + 16));
      v189 = off_142240260;
      if ( 2 * *off_142240260 )
      {
        v216 = sub_14196A710(v188, v181, v182);
        LOBYTE(v216) = v216 ^ 1;
        LODWORD(Address) = v216;
      }
      else
      {
        LODWORD(Address) = 0;
      }
      v386 = (PVOID)(v187 + 16);
      v190 = v395;
      if ( *(_BYTE *)(v187 + 17) )
      {
        *(_QWORD *)v301 = v386;
        v301[8] = (_BYTE)Address;
        sub_14196B5F0(
          (unsigned int)aRelayStatePois_0,
          20,
          (unsigned int)v301,
          (unsigned int)&off_141A3B988,
          (__int64)&off_141A39F10);
      }
      if ( *(_BYTE *)(v187 + 388) && !*(_BYTE *)(v187 + 406) )
      {
        v191 = *(_QWORD *)(v395 + 1152);
        v192 = *(_QWORD *)(v187 + 344);
        if ( v191 == v192 )
        {
          v181 = *(_QWORD *)(v187 + 336);
          if ( *(_QWORD *)(v395 + 1160) == v181 )
          {
            v181 = BYTE4(v320);
            v190 = v319.m256i_i64[3];
            v193 = v320;
            *(_OWORD *)(v187 + 352) = *(_OWORD *)&v319.m256i_u64[1];
            *(_QWORD *)(v187 + 368) = v190;
            *(_DWORD *)(v187 + 376) = v193;
            *(_BYTE *)(v187 + 380) = v181;
          }
        }
        if ( v191 == v192 )
        {
          if ( !(_BYTE)Address && 2 * *v189 && !(unsigned __int8)sub_14196A710(v192, v181, v190) )
            *(_BYTE *)(v187 + 17) = 1;
          v194 = v386;
          v195 = *(_BYTE *)v386;
          *(_BYTE *)v386 = 0;
          if ( v195 == 2 )
            WakeByAddressSingle(v194);
          *(_QWORD *)&v301[96] = v320;
          *(__m256i *)&v301[64] = v319;
          *(_OWORD *)&v301[48] = v318;
          *(_OWORD *)&v301[32] = v317;
          *(_OWORD *)&v301[16] = v316;
          *(_OWORD *)v301 = v315;
          sub_1401E0540(&v247, v301, *(_QWORD *)(v395 + 1136), *(_QWORD *)(v395 + 1144));
          v78 = (_QWORD *)v395;
          v196 = *(_QWORD *)(v395 + 1128);
          if ( v196 )
            sub_140001660(*(_QWORD *)(v395 + 1136), v196, 1);
          sub_1402346F0(v78 + 138);
          v197 = v78[138];
          v13 = v384;
          v12 = v385;
          if ( v197 )
            sub_140001660(v78[139], 24 * v197, 8);
          v198 = v78[137];
          if ( v198 )
          {
            v199 = v78[136];
            do
            {
              sub_1401B16C0(v199);
              v199 += 256;
              --v198;
            }
            while ( v198 );
          }
          v200 = v78[135];
          if ( v200 )
            sub_140001660(v78[136], v200 << 8, 8);
          sub_140234350(v78 + 132);
          v201 = v78[132];
          if ( v201 )
            sub_140001660(v78[133], 24 * v201, 8);
          goto LABEL_64;
        }
      }
      sub_1411E4D50(&v247, aCatalogConfigu, 44);
      LOWORD(v254) = 409;
      if ( !(_BYTE)Address && 2 * *v189 && !(unsigned __int8)sub_14196A710(v203, v202, v204) )
        *(_BYTE *)(v187 + 17) = 1;
      v205 = v386;
      v206 = *(_BYTE *)v386;
      *(_BYTE *)v386 = 0;
      if ( v206 == 2 )
        WakeByAddressSingle(v205);
      sub_1406C0ED0(&v315);
      v13 = v384;
      v12 = v385;
      if ( v319.m256i_i8[0] != 2 )
      {
        v207 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v317 + 32);
        v365 = v385;
        v364 = v384;
        v207((char *)&v318 + 8, *((_QWORD *)&v317 + 1), v318);
      }
      v78 = (_QWORD *)v395;
      v208 = *(_QWORD *)(v395 + 1128);
      if ( v208 )
        sub_140001660(*(_QWORD *)(v395 + 1136), v208, 1);
      v209 = v78[140];
      if ( v209 )
      {
        v210 = (_QWORD *)(v78[139] + 8LL);
        do
        {
          v211 = *(v210 - 1);
          if ( v211 )
            sub_140001660(*v210, v211, 1);
          v210 += 3;
          --v209;
        }
        while ( v209 );
      }
      v212 = v78[138];
      if ( v212 )
        sub_140001660(v78[139], 24 * v212, 8);
      v213 = v78[137];
      if ( v213 )
      {
        v214 = v78[136];
        do
        {
          sub_1401B16C0(v214);
          v214 += 256;
          --v213;
        }
        while ( v213 );
      }
      v215 = v78[135];
      if ( v215 )
        sub_140001660(v78[136], v215 << 8, 8);
LABEL_57:
      v79 = v78[134];
      if ( v79 )
      {
        v80 = (_QWORD *)(v78[133] + 8LL);
        do
        {
          v81 = *(v80 - 1);
          if ( v81 > 0 )
            sub_140001660(*v80, v81, 1);
          v80 += 3;
          --v79;
        }
        while ( v79 );
      }
      v82 = v78[132];
      if ( v82 )
        sub_140001660(v78[133], 24 * v82, 8);
LABEL_64:
      v343 = v12;
      v342 = v13;
      sub_1400366B0(v78 + 120);
      v341 = v12;
      v340 = v13;
      sub_140032260(v395 + 872);
      v339 = v12;
      v338 = v13;
      sub_1406C3A40(v395 + 824);
      v83 = v247;
      v277 = v248;
      v278 = v249;
      v279 = v250;
      v280 = v251;
      v281 = v252;
      v282 = v253;
      v283 = v254;
      v84 = v255;
      *v12 = 1;
      if ( v83 == -1 )
      {
LABEL_194:
        *v5 = -1;
        v59 = 6;
      }
      else
      {
        v276 = v283;
        v275 = v282;
        v274 = v281;
        v273 = v280;
        v272 = v279;
        v271 = v278;
        v270 = v277;
        sub_1406BA8F0(v13);
        v85 = v395;
        *(_BYTE *)(v395 + 590) = 0;
        *(_DWORD *)(v85 + 585) = 0;
        sub_1406C3A40(v85 + 240);
        *v5 = v83;
        v86 = v271;
        v87 = v272;
        v88 = v273;
        *(_OWORD *)(v5 + 1) = v270;
        *(_OWORD *)(v5 + 3) = v86;
        *(_OWORD *)(v5 + 5) = v87;
        *(_OWORD *)(v5 + 7) = v88;
        *(_OWORD *)(v5 + 9) = v274;
        *(_OWORD *)(v5 + 11) = v275;
        v5[13] = v276;
        *((_OWORD *)v5 + 7) = v84;
        v59 = 1;
      }
LABEL_130:
      *(_BYTE *)(v395 + 584) = v59;
      return v5;
    case 4LL:
      v31 = *(_QWORD *)(a2 + 592);
      v32 = *(__int64 (__fastcall ***)())(v4 + 600);
      goto LABEL_17;
    case 5LL:
      v23 = *(_QWORD *)(a2 + 680);
      v24 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_24;
    case 6LL:
      v12 = (_BYTE *)(a2 + 1760);
      v13 = (_OWORD *)(a2 + 592);
      switch ( *(_BYTE *)(a2 + 1760) )
      {
        case 0:
          goto LABEL_30;
        case 1:
          v337 = a2 + 592;
          sub_14196B990(&off_141A39EF8);
        case 2:
          v337 = a2 + 592;
          sub_14196B9B0(&off_141A39EF8);
        case 3:
          v377 = (_BYTE *)(a2 + 1752);
          v14 = *(unsigned __int8 *)(a2 + 1752);
          v15 = a2 + 1168;
          v384 = (_OWORD *)(a2 + 592);
          v385 = (_BYTE *)(a2 + 1760);
          switch ( v14 )
          {
            case 0LL:
              Address = a1;
              v16 = *(_QWORD *)(a2 + 1168);
              v17 = *(_QWORD *)(a2 + 1176);
              v18 = *(_QWORD *)(a2 + 1184);
              v19 = *(_QWORD *)(a2 + 1192);
              v20 = *(_QWORD *)(a2 + 1200);
              v21 = *(_QWORD *)(a2 + 1208);
              v22 = *(_QWORD *)(v4 + 1216);
              break;
            case 1LL:
              v355 = a2 + 1760;
              v354 = a2 + 592;
              v353 = a2 + 1168;
              sub_14196B990(&off_141A3A8A8);
            case 2LL:
              v355 = a2 + 1760;
              v354 = a2 + 592;
              v353 = a2 + 1168;
              sub_14196B9B0(&off_141A3A8A8);
            case 3LL:
              v376 = (_BYTE *)(a2 + 1744);
              switch ( *(_BYTE *)(a2 + 1744) )
              {
                case 0:
                  Address = a1;
                  JUMPOUT(0x1406FA910LL);
                case 1:
                  v348 = v385;
                  v347 = v384;
                  v346 = v377;
                  v345 = a2 + 1168;
                  v344 = a2 + 1224;
                  sub_14196B990(&off_141A3A780);
                case 2:
                  v348 = v385;
                  v347 = v384;
                  v346 = v377;
                  v345 = a2 + 1168;
                  v344 = a2 + 1224;
                  sub_14196B9B0(&off_141A3A780);
              }
          }
          goto LABEL_71;
      }
  }
}
