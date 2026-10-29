// win 1.2.7 latest-exe | module src/core/oauth_login.rs | ea 0x140293d70 | successor of pre-update 0x140a3df00 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
char __fastcall sub_140293D70(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // r15
  __int64 v5; // rax
  _BYTE *v6; // r14
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int128 v16; // xmm2
  __int64 *v17; // r15
  int v18; // esi
  char *v19; // r13
  unsigned __int64 v20; // rdi
  int v21; // r12d
  unsigned int v22; // esi
  __int64 v23; // r14
  char v24; // al
  unsigned __int64 v25; // r14
  volatile signed __int64 *v26; // rsi
  char *v27; // r12
  __int64 v28; // rax
  _BYTE *v29; // rcx
  __int64 v30; // rax
  volatile signed __int64 *v31; // rdi
  char *v32; // r12
  _BYTE *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  char v38; // al
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  volatile signed __int64 *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rax
  _BYTE *v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rcx
  const char *v47; // rax
  __int64 v48; // r8
  const char *v49; // rsi
  __int64 v50; // rdi
  _BYTE *v51; // r14
  char v52; // al
  volatile signed __int64 **v53; // r13
  _BYTE *v54; // r9
  _BYTE *v55; // rbx
  char *v56; // r14
  __int64 v57; // r13
  __int64 v58; // r12
  __int8 v59; // si
  volatile signed __int64 *v60; // rdi
  __int64 v61; // rdx
  __int8 v62; // si
  __int64 v63; // r13
  __int64 v64; // r12
  __int64 v65; // rdi
  PVOID v66; // rdx
  __int64 v67; // rdx
  PVOID v68; // rdi
  _BYTE *v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rdi
  PVOID v72; // rcx
  __int64 v73; // rax
  const char *v74; // rdx
  __int64 v75; // r8
  volatile signed __int64 *v76; // rax
  __m128i v77; // xmm1
  _BYTE *v78; // rax
  __int64 v79; // rdx
  volatile signed __int64 *v80; // r15
  __int64 v81; // r8
  _BYTE *v82; // r14
  _BYTE *v83; // rbx
  int v84; // ecx
  __m128i v85; // xmm1
  __int64 v86; // rdi
  __int64 v87; // r15
  __int64 v88; // rsi
  char *v89; // r14
  __int64 v90; // r15
  unsigned __int64 v91; // rdi
  _BYTE *v92; // rsi
  __int64 v93; // rax
  __int128 **v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  volatile signed __int64 **v97; // rcx
  bool v98; // zf
  __int64 v99; // rsi
  _QWORD *v100; // rsi
  char v101; // al
  _BYTE *v102; // rcx
  __m128i *v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int128 v108; // xmm0
  __m128i si128; // xmm1
  __m128i v110; // xmm0
  unsigned int v111; // esi
  unsigned int v112; // r14d
  __int64 v113; // rdi
  void *v114; // rsi
  __int64 v115; // rcx
  __m128i v116; // xmm0
  __int64 v117; // rsi
  char *v118; // rbx
  char v119; // al
  PVOID v120; // rax
  volatile signed __int64 **v121; // r12
  __int8 v122; // r15
  __int64 v123; // rdi
  _BYTE *v124; // rax
  __int64 v125; // rsi
  char v126; // al
  char v127; // r14
  char v128; // r14
  _BYTE *v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rdx
  volatile signed __int64 **v132; // rsi
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  volatile signed __int64 *v136; // r12
  _BYTE *v137; // rdx
  int v138; // ecx
  __int64 v139; // rdi
  __int64 v140; // rdx
  PVOID v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  _BYTE *v144; // r8
  __int64 v145; // rdx
  __int64 v146; // r8
  PVOID v147; // rsi
  __m128i v148; // xmm1
  PVOID v149; // rsi
  __m128i *v150; // rax
  _OWORD *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r15
  _BYTE *v155; // rdi
  void *v156; // r14
  __int64 v157; // r12
  __int64 v158; // rsi
  __int64 v159; // rcx
  __int64 v160; // rax
  __int128 v161; // xmm0
  __int64 v162; // rax
  _BYTE *v163; // rsi
  PVOID v164; // r14
  __int64 v165; // rdi
  __int64 v166; // rax
  _BYTE *v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rax
  _BYTE *v170; // rcx
  _BYTE *v171; // rax
  _BYTE *v172; // rcx
  __int64 v173; // r8
  _OWORD *v174; // rdx
  __int128 v175; // xmm0
  __m128i v176; // xmm1
  __int128 v177; // xmm2
  signed __int64 v178; // rsi
  _BYTE *v179; // rbx
  signed __int64 v180; // rcx
  _BYTE *v181; // rdi
  void *v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rax
  char *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  PVOID v189; // r15
  volatile signed __int64 *v190; // r12
  char *v191; // r13
  char v192; // al
  __int64 v193; // rdx
  char result; // al
  _BYTE *v195; // rsi
  __int64 v196; // r14
  __int64 v197; // rdi
  unsigned __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  char v201; // cl
  __int64 v202; // rbx
  __int64 v203; // rsi
  __int64 v204; // rdx
  __int64 v205; // r14
  __int64 v206; // rax
  PVOID v207; // rdx
  _QWORD *v208; // r8
  PVOID v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rdi
  _BYTE *v212; // rax
  int v213; // edx
  int v214; // eax
  int v215; // edx
  __m128i v216; // xmm1
  __int128 v217; // xmm2
  __int128 v218; // xmm3
  __int128 v219; // xmm4
  __int128 v220; // xmm5
  __int128 v221; // xmm6
  unsigned __int8 *v222; // rax
  int v223; // ebx
  __int64 *v224; // rdi
  __int64 v225; // rcx
  char v226; // si
  __int64 v227; // rdi
  __int64 v228; // rdx
  _BYTE *v229; // rcx
  __int64 v230; // rdx
  volatile signed __int64 *v231; // r14
  _BYTE *v232; // rsi
  _BYTE *v233; // rax
  __m128i v234; // xmm1
  __int64 v235; // rax
  __int64 v236; // rsi
  unsigned __int8 *v237; // rdi
  _BYTE v238[152]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v239[152]; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v240[144]; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v241[144]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v242[5]; // [rsp+288h] [rbp+208h] BYREF
  char v243[144]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v244; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v245[3]; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v246; // [rsp+380h] [rbp+300h]
  __int64 v247; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v248; // [rsp+3D8h] [rbp+358h]
  __int64 v249; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v250; // [rsp+3E8h] [rbp+368h]
  __int64 *v251; // [rsp+3F0h] [rbp+370h] BYREF
  char v252[144]; // [rsp+3F8h] [rbp+378h] BYREF
  __int128 v253; // [rsp+488h] [rbp+408h] BYREF
  __int64 v254; // [rsp+498h] [rbp+418h]
  __int128 v255; // [rsp+4A0h] [rbp+420h]
  PVOID v256[2]; // [rsp+4B0h] [rbp+430h] BYREF
  __m128i v257; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v258; // [rsp+4D0h] [rbp+450h]
  __int128 v259; // [rsp+4E0h] [rbp+460h]
  __int128 v260; // [rsp+4F0h] [rbp+470h]
  __m128i v261; // [rsp+500h] [rbp+480h]
  __int128 v262; // [rsp+510h] [rbp+490h]
  __int128 v263; // [rsp+830h] [rbp+7B0h]
  __int64 v264; // [rsp+840h] [rbp+7C0h]
  __m128i v265; // [rsp+850h] [rbp+7D0h] BYREF
  __m128i v266; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v267; // [rsp+870h] [rbp+7F0h]
  __m128i v268; // [rsp+880h] [rbp+800h]
  __int64 v269; // [rsp+890h] [rbp+810h]
  __int128 v270; // [rsp+8A0h] [rbp+820h] BYREF
  __m128i v271; // [rsp+8B0h] [rbp+830h]
  __int128 v272; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 v273; // [rsp+8D0h] [rbp+850h]
  __int64 v274; // [rsp+8D8h] [rbp+858h]
  __int64 v275; // [rsp+8E8h] [rbp+868h]
  __int64 v276; // [rsp+8F0h] [rbp+870h]
  __int64 v277; // [rsp+900h] [rbp+880h]
  __int64 v278; // [rsp+908h] [rbp+888h]
  __int64 v279; // [rsp+918h] [rbp+898h]
  __int64 v280; // [rsp+920h] [rbp+8A0h]
  __int64 v281; // [rsp+930h] [rbp+8B0h]
  __int64 v282; // [rsp+938h] [rbp+8B8h]
  __int128 v283; // [rsp+950h] [rbp+8D0h] BYREF
  __m128i v284; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v285; // [rsp+970h] [rbp+8F0h]
  __int64 v286; // [rsp+9F8h] [rbp+978h]
  __int64 v287; // [rsp+A00h] [rbp+980h]
  volatile signed __int64 *v288; // [rsp+A08h] [rbp+988h]
  __int64 v289; // [rsp+A10h] [rbp+990h]
  __int64 v290; // [rsp+A18h] [rbp+998h]
  _BYTE v291[96]; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v292; // [rsp+A80h] [rbp+A00h]
  char v293[728]; // [rsp+AB8h] [rbp+A38h] BYREF
  __int64 v294; // [rsp+D90h] [rbp+D10h]
  __int64 v295; // [rsp+D98h] [rbp+D18h]
  __int64 v296; // [rsp+DA8h] [rbp+D28h]
  __int64 v297; // [rsp+DB0h] [rbp+D30h]
  __int64 v298; // [rsp+DD8h] [rbp+D58h]
  _BYTE *v299; // [rsp+DE0h] [rbp+D60h]
  volatile signed __int64 **v300; // [rsp+DE8h] [rbp+D68h]
  volatile signed __int64 *v301; // [rsp+DF0h] [rbp+D70h]
  PVOID v302; // [rsp+DF8h] [rbp+D78h]
  _BYTE *v303; // [rsp+E00h] [rbp+D80h]
  __int64 v304; // [rsp+E08h] [rbp+D88h]
  _BYTE *v305; // [rsp+E10h] [rbp+D90h]
  _BYTE *v306; // [rsp+E18h] [rbp+D98h]
  __int64 v307; // [rsp+E20h] [rbp+DA0h]
  char *v308; // [rsp+E28h] [rbp+DA8h] BYREF
  __int64 v309; // [rsp+E30h] [rbp+DB0h]
  __int64 v310; // [rsp+E38h] [rbp+DB8h]
  __m128i v311; // [rsp+E40h] [rbp+DC0h] BYREF
  __int64 v312; // [rsp+E50h] [rbp+DD0h]
  _BYTE *v313; // [rsp+E58h] [rbp+DD8h]
  _BYTE *v314; // [rsp+E60h] [rbp+DE0h]
  volatile signed __int64 **v315; // [rsp+E68h] [rbp+DE8h]
  volatile signed __int64 *v316; // [rsp+E70h] [rbp+DF0h]
  _BYTE *v317; // [rsp+E78h] [rbp+DF8h]
  _BYTE *v318; // [rsp+E80h] [rbp+E00h]
  volatile signed __int64 *v319; // [rsp+E88h] [rbp+E08h]
  _BYTE *v320; // [rsp+E90h] [rbp+E10h]
  _BYTE *v321; // [rsp+E98h] [rbp+E18h]
  PVOID v322; // [rsp+EB0h] [rbp+E30h]
  _BYTE *v323; // [rsp+EB8h] [rbp+E38h]
  PVOID v324; // [rsp+EC0h] [rbp+E40h]
  __int64 v325; // [rsp+EC8h] [rbp+E48h]
  __m128i v326; // [rsp+ED0h] [rbp+E50h] BYREF
  __int64 v327; // [rsp+EE0h] [rbp+E60h]
  _DWORD v328[2]; // [rsp+EF0h] [rbp+E70h]
  _BYTE *v329; // [rsp+EF8h] [rbp+E78h]
  PVOID v330; // [rsp+F00h] [rbp+E80h]
  _BYTE *v331; // [rsp+F08h] [rbp+E88h]
  _BYTE *v332; // [rsp+F10h] [rbp+E90h]
  _QWORD *v333; // [rsp+F18h] [rbp+E98h]
  char *v334; // [rsp+F20h] [rbp+EA0h]
  __int64 v335; // [rsp+F28h] [rbp+EA8h]
  _BYTE *v336; // [rsp+F30h] [rbp+EB0h]
  PVOID v337; // [rsp+F38h] [rbp+EB8h]
  _BYTE *v338; // [rsp+F40h] [rbp+EC0h]
  PVOID v339; // [rsp+F48h] [rbp+EC8h]
  _BYTE *v340; // [rsp+F50h] [rbp+ED0h]
  PVOID v341; // [rsp+F58h] [rbp+ED8h]
  _BYTE *v342; // [rsp+F60h] [rbp+EE0h]
  __m128i v343; // [rsp+F68h] [rbp+EE8h] BYREF
  __m128i v344; // [rsp+F78h] [rbp+EF8h] BYREF
  _BYTE v345[7]; // [rsp+F88h] [rbp+F08h]
  _BYTE *v346; // [rsp+F90h] [rbp+F10h]
  __int64 v347; // [rsp+F98h] [rbp+F18h]
  __m256i v348; // [rsp+FA0h] [rbp+F20h] BYREF
  PVOID v349; // [rsp+FC8h] [rbp+F48h]
  _BYTE *v350; // [rsp+FD0h] [rbp+F50h]
  PVOID v351; // [rsp+FD8h] [rbp+F58h]
  _BYTE *v352; // [rsp+FE0h] [rbp+F60h]
  volatile signed __int64 *v353; // [rsp+FE8h] [rbp+F68h]
  PVOID v354; // [rsp+FF0h] [rbp+F70h]
  _BYTE *v355; // [rsp+FF8h] [rbp+F78h]
  volatile signed __int64 *v356; // [rsp+1000h] [rbp+F80h] BYREF
  volatile signed __int64 *v357; // [rsp+1008h] [rbp+F88h] BYREF
  _DWORD v358[2]; // [rsp+1010h] [rbp+F90h]
  _DWORD v359[2]; // [rsp+1018h] [rbp+F98h]
  _BYTE v360[7]; // [rsp+1020h] [rbp+FA0h]
  _BYTE *v361; // [rsp+1028h] [rbp+FA8h]
  volatile signed __int64 **v362; // [rsp+1030h] [rbp+FB0h]
  volatile signed __int64 *v363; // [rsp+1038h] [rbp+FB8h]
  _BYTE *v364; // [rsp+1040h] [rbp+FC0h]
  PVOID v365; // [rsp+1048h] [rbp+FC8h]
  _BYTE *v366; // [rsp+1050h] [rbp+FD0h]
  _BYTE *v367; // [rsp+1058h] [rbp+FD8h]
  volatile signed __int64 **v368; // [rsp+1060h] [rbp+FE0h]
  volatile signed __int64 *v369; // [rsp+1068h] [rbp+FE8h]
  _DWORD v370[2]; // [rsp+1070h] [rbp+FF0h]
  _BYTE *v371; // [rsp+1078h] [rbp+FF8h]
  volatile signed __int64 **v372; // [rsp+1080h] [rbp+1000h]
  volatile signed __int64 *v373; // [rsp+1088h] [rbp+1008h]
  __int64 v374; // [rsp+1090h] [rbp+1010h]
  _BYTE *v375; // [rsp+1098h] [rbp+1018h]
  char v376; // [rsp+10A6h] [rbp+1026h]
  char v377; // [rsp+10A7h] [rbp+1027h]
  _DWORD v378[2]; // [rsp+10A8h] [rbp+1028h]
  volatile signed __int64 **v379; // [rsp+10B0h] [rbp+1030h]
  volatile signed __int64 *v380; // [rsp+10B8h] [rbp+1038h]
  char v381; // [rsp+10C7h] [rbp+1047h] BYREF
  char *v382; // [rsp+10C8h] [rbp+1048h]
  PVOID Address; // [rsp+10D0h] [rbp+1050h]
  _BYTE *v384; // [rsp+10D8h] [rbp+1058h]
  _BYTE *v385; // [rsp+10E0h] [rbp+1060h]
  __int64 v386; // [rsp+10E8h] [rbp+1068h]

  v386 = -2;
  v374 = a3;
  v4 = a2;
  v5 = (unsigned __int8)a2[3056];
  v385 = a2;
  v333 = a1;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2 + 1528;
      sub_1419234B0(a2 + 1528, a2, 1528);
      switch ( v4[3048] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_326;
        case 2:
          goto LABEL_325;
        case 3:
          goto LABEL_20;
      }
    case 1LL:
      sub_14196B990(&off_141A0BCF8);
    case 2LL:
      sub_14196B9B0(&off_141A0BCF8);
    case 3LL:
      v6 = a2 + 1528;
      switch ( a2[3048] )
      {
        case 0:
LABEL_4:
          *(_WORD *)(v4 + 3049) = 0;
          v7 = v4 + 1680;
          sub_1419234B0(v4 + 1680, v6, 152);
          *((_QWORD *)v4 + 229) = _InterlockedExchangeAdd64(&qword_142239030, 1u);
          *(_QWORD *)v291 = 1;
          *(_QWORD *)&v291[8] = 1;
          *(_QWORD *)&v291[48] = 0;
          v291[56] = 0;
          nullsub_1(v9, v8);
          v10 = sub_140001650(64, 8);
          v346 = v6;
          if ( !v10 )
            sub_14196B2C1(8, 64);
          v14 = _mm_loadu_si128((const __m128i *)v291);
          v15 = _mm_loadu_si128((const __m128i *)&v291[16]);
          v16 = *(_OWORD *)&v291[32];
          *(_OWORD *)(v10 + 48) = *(_OWORD *)&v291[48];
          *(_OWORD *)(v10 + 32) = v16;
          *(__m128i *)(v10 + 16) = v15;
          *(__m128i *)v10 = v14;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v10) <= 0 )
            BUG();
          v4[3050] = 1;
          v357 = (volatile signed __int64 *)v10;
          v4[3049] = 1;
          v356 = (volatile signed __int64 *)v10;
          if ( dword_142239028 )
            sub_1419410BD(&byte_142239000);
          LOBYTE(v12) = 1;
          if ( _InterlockedCompareExchange8(&byte_142239000, 1, 0) )
            sub_141969A30(&byte_142239000);
          v17 = off_142240260;
          if ( 2 * *off_142240260 )
          {
            v18 = sub_14196A710(v12, v11, v13);
            LOBYTE(v18) = v18 ^ 1;
            if ( byte_142239001 )
              goto LABEL_12;
LABEL_137:
            v32 = &byte_142239000;
            v33 = v385;
            if ( (_DWORD)qword_142239008 != 2 )
              goto LABEL_23;
            goto LABEL_138;
          }
          v18 = 0;
          if ( !byte_142239001 )
            goto LABEL_137;
LABEL_12:
          LODWORD(v384) = v18;
          v256[0] = nullptr;
          v256[1] = (PVOID)1;
          v257.m128i_i64[0] = 0;
          *(_QWORD *)&v291[16] = 1610612768;
          *(_QWORD *)v291 = v256;
          *(_QWORD *)&v291[8] = &off_141A19198;
          if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v291) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_0,
              55,
              (unsigned int)&v381,
              (unsigned int)&unk_141A10708,
              (__int64)&off_141A19250);
          Address = v256[0];
          v19 = (char *)v256[1];
          LODWORD(v20) = v257.m128i_u8[0];
          v21 = v257.m128i_u8[7];
          v22 = *(unsigned __int16 *)((char *)&v257.m128i_u16[2] + 1);
          v23 = *(unsigned int *)((char *)v257.m128i_u32 + 1);
          if ( !(_BYTE)v384 && 2 * *v17 && !(unsigned __int8)sub_14196A710(v12, v11, v13) )
            byte_142239001 = 1;
          v24 = byte_142239000;
          byte_142239000 = 0;
          if ( v24 == 2 )
            WakeByAddressSingle(&byte_142239000);
          if ( Address != (PVOID)-1LL )
          {
            v25 = ((unsigned __int64)((v21 << 16) | v22) << 32) | v23;
            v26 = v356;
            if ( !v356 )
              goto LABEL_39;
            goto LABEL_28;
          }
          v32 = v19;
          v18 = v20;
          v33 = v385;
          if ( *((_DWORD *)v19 + 2) != 2 )
          {
LABEL_23:
            nullsub_1(v12, v11);
            v34 = sub_140001650(72, 1);
            if ( !v34 )
            {
              Address = v32;
              LODWORD(v384) = v18;
              sub_14196B2DB(1, 72);
            }
            *(_OWORD *)(v34 + 48) = xmmword_141A0F218;
            *(_OWORD *)(v34 + 32) = xmmword_141A0F208;
            *(_OWORD *)(v34 + 16) = xmmword_141A0F1F8;
            *(__m128i *)v34 = _mm_loadu_si128((const __m128i *)&xmmword_141A0F1E8);
            *(_QWORD *)(v34 + 64) = 0x8280E395AFE88D86uLL;
            if ( (v18 & 1) == 0 )
            {
              v37 = 2 * *v17;
              if ( v37 )
              {
                v236 = v34;
                v98 = (unsigned __int8)sub_14196A710(v37, v35, v36) == 0;
                v34 = v236;
                if ( v98 )
                  v32[1] = 1;
              }
            }
            v19 = (char *)v34;
            v38 = *v32;
            *v32 = 0;
            v25 = 0;
            LOBYTE(v20) = 72;
            Address = (PVOID)72;
            if ( v38 == 2 )
            {
              WakeByAddressSingle(v32);
              v25 = 0;
              v26 = v356;
              if ( !v356 )
                goto LABEL_39;
            }
            else
            {
              v26 = v356;
              if ( !v356 )
              {
LABEL_39:
                v385[3049] = 0;
                v41 = v357;
                if ( v357 )
                {
                  if ( (sub_141538190(v357 + 6) & 5) == 1 )
                    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v41 + 4) + 16LL))(*((_QWORD *)v41 + 5));
                  if ( v357 && !_InterlockedDecrement64(v357) )
                    sub_14153BF80(&v357);
                }
                v385[3050] = 0;
                sub_140031300(v7);
                v42 = -1;
                goto LABEL_256;
              }
            }
LABEL_28:
            v39 = *((_QWORD *)v26 + 6);
            do
            {
              v40 = v39;
              v39 = _InterlockedCompareExchange64(v26 + 6, v39 | 4, v39);
            }
            while ( v40 != v39 );
            if ( (v39 & 0xA) == 8 )
            {
              v17 = (__int64 *)v39;
              (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v26 + 2) + 16LL))(*((_QWORD *)v26 + 3));
              v39 = (signed __int64)v17;
            }
            if ( (v39 & 3) == 1 )
            {
              _InterlockedAnd64(v26 + 6, 0xFFFFFFFFFFFFFFFEuLL);
              v17 = (__int64 *)v39;
              sub_141537E90(v26 + 4);
              LOBYTE(v39) = (_BYTE)v17;
            }
            if ( (v39 & 2) != 0 )
              *((_BYTE *)v26 + 56) = 0;
            if ( v356 && !_InterlockedDecrement64(v356) )
              sub_14153BF80(&v356);
            goto LABEL_39;
          }
LABEL_138:
          LODWORD(v384) = v18;
          v97 = *((volatile signed __int64 ***)v33 + 229);
          v382 = (char *)v97;
          v33[3050] = 0;
          v380 = v357;
          v98 = *((_DWORD *)v32 + 2) == 1;
          Address = v32;
          if ( v98 )
          {
            v99 = *((_QWORD *)Address + 2);
            if ( v99 )
            {
              v379 = (volatile signed __int64 **)((char *)Address + 16);
              if ( (sub_141538190(v99 + 48) & 5) == 1 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v99 + 32) + 16LL))(*(_QWORD *)(v99 + 40));
              v97 = v379;
              if ( *v379 && !_InterlockedDecrement64(*v379) )
                ((void (*)(void))sub_14153BF80)();
            }
          }
          v100 = Address;
          *((_QWORD *)Address + 1) = 1;
          v100[2] = v380;
          v100[3] = v382;
          *((_WORD *)v100 + 16) = 0;
          if ( ((unsigned __int8)v384 & 1) == 0 && 2 * *v17 && !(unsigned __int8)sub_14196A710(v97, v11, v13) )
            *((_BYTE *)v100 + 1) = 1;
          v101 = *(_BYTE *)v100;
          *(_BYTE *)v100 = 0;
          if ( v101 == 2 )
            WakeByAddressSingle(v100);
          v4 = v385;
          v30 = *((_QWORD *)v385 + 229);
          v385[3049] = 0;
          v31 = v356;
          *((_QWORD *)v4 + 236) = v30;
          *((_QWORD *)v4 + 237) = v31;
          *((_QWORD *)v4 + 246) = v7;
          v27 = v4 + 1987;
          v4[1987] = 0;
LABEL_150:
          *(_DWORD *)(v4 + 1983) = 0;
          *((_QWORD *)v4 + 247) = 0;
          *((_QWORD *)v4 + 238) = v7;
          *((_QWORD *)v4 + 239) = v30;
          v4[1986] = 1;
          v288 = v31;
          v306 = v4 + 1840;
          sub_1401E8440(v4 + 1840);
          v385[1985] = 1;
          v384 = v4 + 1840;
          v332 = v4 + 1840;
          sub_141597890(&v270);
          v256[0] = nullptr;
          v256[1] = (PVOID)1;
          v257.m128i_i64[0] = 0;
          *(_QWORD *)&v291[16] = 1610612768;
          *(_QWORD *)v291 = v256;
          *(_QWORD *)&v291[8] = &off_141A08790;
          if ( (unsigned __int8)sub_141598A30(&v270, v291) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_3,
              55,
              (unsigned int)&v381,
              (unsigned int)&unk_141A07F80,
              (__int64)&off_141A0A758);
          v102 = v385;
          v103 = (__m128i *)(v385 + 1920);
          *((_QWORD *)v385 + 242) = v257.m128i_i64[0];
          *v103 = _mm_loadu_si128((const __m128i *)v256);
          v102[1984] = 1;
          v104 = *((_QWORD *)v102 + 234);
          v105 = *((_QWORD *)v102 + 235);
          v106 = *((_QWORD *)v102 + 241);
          v107 = *((_QWORD *)v102 + 242);
          v55 = v384;
          v305 = v384;
          sub_1401E8C90((unsigned int)&v253, v104, v105, v106, v107);
          v4 = v385;
          v385[1985] = 0;
          v4[1978] = 1;
          *(_OWORD *)(v4 + 1992) = *(_OWORD *)v55;
          *((_QWORD *)v4 + 251) = *((_QWORD *)v55 + 2);
          v4[1984] = 0;
          *(_QWORD *)&v291[16] = v103[1].m128i_i64[0];
          *(__m128i *)v291 = *v103;
          v4[1986] = 0;
          *(_OWORD *)&v291[24] = v253;
          *(_QWORD *)&v291[40] = v254;
          v108 = *(_OWORD *)v291;
          v270 = *(_OWORD *)v291;
          si128 = _mm_load_si128((const __m128i *)&v291[16]);
          v271 = si128;
          v272 = *(_OWORD *)&v291[32];
          v54 = v4 + 2016;
          *((_OWORD *)v4 + 128) = *(_OWORD *)&v291[32];
          *((__m128i *)v4 + 127) = si128;
          *((_OWORD *)v4 + 126) = v108;
          *((_QWORD *)v4 + 258) = v31;
          v53 = (volatile signed __int64 **)(v4 + 2144);
          v4[2144] = 0;
LABEL_152:
          *(_QWORD *)(v4 + 2146) = 0;
          *(_DWORD *)(v4 + 2153) = 0;
          v4[2149] = 1;
          *((_OWORD *)v4 + 135) = *(_OWORD *)v54;
          *((_QWORD *)v4 + 272) = *((_QWORD *)v54 + 2);
          *(__m128i *)(v4 + 2072) = _mm_loadu_si128((const __m128i *)(v4 + 2040));
          *((_QWORD *)v4 + 261) = *((_QWORD *)v4 + 257);
          v4[2148] = 1;
          *((_QWORD *)v4 + 273) = v31;
          v375 = v4 + 2192;
          v74 = a1270011455;
          *((_QWORD *)v4 + 274) = a1270011455;
          *((_QWORD *)v4 + 275) = 14;
          v76 = (volatile signed __int64 *)(v4 + 2240);
          v4[2240] = 0;
          v75 = 14;
LABEL_153:
          v384 = v55;
          v355 = v55;
          v382 = v54;
          v354 = v54;
          v380 = v76;
          v353 = v76;
          sub_141546C20(v256, v74, v75);
          v110 = _mm_loadu_si128((const __m128i *)v256);
          *(__m128i *)&v348.m256i_u64[2] = _mm_loadu_si128(&v257);
          *(__m128i *)v348.m256i_i8 = v110;
          v4 = v385;
          *((_OWORD *)v385 + 139) = *(_OWORD *)&v348.m256i_u64[2];
          *((__m128i *)v4 + 138) = v110;
LABEL_154:
          v379 = (volatile signed __int64 **)(v4 + 2208);
          sub_1415458E0(v256, v4 + 2208, v374, v54);
          v111 = (unsigned int)v256[0];
          if ( LODWORD(v256[0]) == -1 )
          {
            v118 = v27;
            *(_BYTE *)v380 = 3;
            v119 = 3;
            goto LABEL_167;
          }
          v112 = HIDWORD(v256[0]);
          Address = v256[1];
          v326 = _mm_loadu_si128(&v257);
          v327 = v258;
          if ( *(_WORD *)v379 == 0xFFFF )
          {
            v113 = *((_QWORD *)v385 + 277);
            v355 = v384;
            v354 = v382;
            v353 = v380;
            if ( (unsigned __int8)sub_141532BE0(v113) )
            {
              v355 = v384;
              v354 = v382;
              v353 = v380;
              sub_1415334F0(v113);
            }
          }
          if ( v111 == 2 )
            goto LABEL_174;
          v379 = v53;
          v334 = v27;
          *(_QWORD *)&v258 = v327;
          v257 = _mm_load_si128(&v326);
          v256[0] = (PVOID)__PAIR64__(v112, v111);
          v256[1] = Address;
          v114 = nullptr;
          while ( 1 )
          {
            Address = v114;
            v324 = v114;
            sub_141545E30(&v343, v256);
            if ( v343.m128i_i16[0] == 2 )
            {
              v120 = Address;
              if ( LODWORD(v256[0]) && v257.m128i_i64[1] )
              {
                sub_140001660(v256[1], 32 * v257.m128i_i64[1], 4);
                v120 = Address;
              }
              v27 = v334;
              if ( !v120 )
              {
                v304 = 0;
                v377 = 0;
                LOBYTE(v115) = 20;
                Address = (PVOID)sub_1416A8370(v115, aCouldNotResolv_2, 32);
              }
LABEL_174:
              v312 = *(_QWORD *)&v291[32];
              v311 = *(__m128i *)&v291[16];
              *(_BYTE *)v380 = 1;
              v268 = _mm_load_si128(&v311);
              v269 = v312;
              v348.m256i_i64[0] = (__int64)Address;
              v256[0] = nullptr;
              v256[1] = (PVOID)1;
              v257.m128i_i64[0] = 0;
              *(_QWORD *)&v291[16] = 1610612768;
              *(_QWORD *)v291 = v256;
              *(_QWORD *)&v291[8] = &off_141A19198;
              if ( (unsigned __int8)sub_1416EA080(&v348, v291) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_0,
                  55,
                  (unsigned int)&v381,
                  (unsigned int)&unk_141A10708,
                  (__int64)&off_141A19250);
              v118 = v27;
              v380 = (volatile signed __int64 *)v256[0];
              v121 = (volatile signed __int64 **)v256[1];
              v122 = v257.m128i_i8[0];
              v343.m128i_i32[0] = *(__int32 *)((char *)v257.m128i_i32 + 1);
              *(__int32 *)((char *)v343.m128i_i32 + 3) = v257.m128i_i32[1];
              v82 = v384;
              if ( ((unsigned __int8)Address & 3u) - 2 >= 2 && ((unsigned __int8)Address & 3) != 0 )
              {
                *(_QWORD *)&v291[8] = (char *)Address - 1;
                v291[0] = 3;
                v352 = v384;
                v351 = v382;
                sub_1416EBAD0(&v291[8]);
              }
              v370[0] = v343.m128i_i32[0];
              *(_DWORD *)((char *)v370 + 3) = *(__int32 *)((char *)v343.m128i_i32 + 3);
              v123 = 0;
LABEL_179:
              v124 = v385;
              v385[2156] = 0;
              v125 = *((_QWORD *)v124 + 273);
              if ( v125 )
              {
                Address = v385 + 2184;
                v126 = _InterlockedOr64((volatile signed __int64 *)(v125 + 48), 4u);
                if ( (v126 & 0xA) == 8 )
                {
                  v127 = v126;
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v125 + 16) + 16LL))(*(_QWORD *)(v125 + 24));
                  v126 = v127;
                }
                if ( (v126 & 3) == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v125 + 48), 0xFFFFFFFFFFFFFFFEuLL);
                  v128 = v126;
                  sub_141537E90(v125 + 32);
                  v126 = v128;
                }
                if ( (v126 & 2) != 0 )
                  *(_BYTE *)(v125 + 56) = 0;
                v82 = v384;
                if ( *(_QWORD *)Address && !_InterlockedDecrement64(*(volatile signed __int64 **)Address) )
                {
                  v338 = v82;
                  v337 = v382;
                  ((void (*)(void))sub_14153BF80)();
                }
              }
              v129 = v385;
              v385[2148] = 0;
              v130 = *((_QWORD *)v129 + 259);
              if ( v130 )
                sub_140001660(*((_QWORD *)v129 + 260), v130, 1);
              v131 = *((_QWORD *)v129 + 270);
              if ( v131 )
                sub_140001660(*((_QWORD *)v129 + 271), v131, 1);
              v129[2149] = 0;
              *(_DWORD *)&v345[3] = *(_DWORD *)((char *)v370 + 3);
              *(_DWORD *)v345 = v370[0];
              v129[2144] = 1;
              v132 = v121;
              goto LABEL_194;
            }
            v116 = _mm_loadu_si128(&v343);
            *(__m128i *)&v348.m256i_u64[2] = _mm_loadu_si128(&v344);
            *(__m128i *)v348.m256i_i8 = v116;
            v324 = Address;
            sub_141544180(v291, &v348);
            v117 = *(_QWORD *)v291;
            if ( *(_QWORD *)v291 != 2 )
              break;
            v114 = *(void **)&v291[8];
            if ( Address && ((unsigned __int8)Address & 3u) - 2 >= 2 && ((unsigned __int8)Address & 3) != 0 )
            {
              v308 = (char *)Address - 1;
              LOBYTE(v307) = 3;
              v324 = *(PVOID *)&v291[8];
              sub_1416EBAD0(&v308);
            }
          }
          v141 = Address;
          if ( LODWORD(v256[0]) && v257.m128i_i64[1] )
          {
            sub_140001660(v256[1], 32 * v257.m128i_i64[1], 4);
            v141 = Address;
          }
          v118 = v334;
          v53 = v379;
          if ( v141 )
          {
            v142 = (unsigned __int8)v141 & 3;
            if ( (unsigned int)(v142 - 2) >= 2 )
            {
              if ( v142 )
              {
                v256[1] = (char *)Address - 1;
                LOBYTE(v256[0]) = 3;
                v355 = v384;
                v354 = v382;
                v353 = v380;
                sub_1416EBAD0(&v256[1]);
              }
            }
          }
          v143 = *(_QWORD *)&v291[8];
          v311 = *(__m128i *)&v291[16];
          v312 = *(_QWORD *)&v291[32];
          v144 = v385;
          v385[2240] = 1;
          v268 = v311;
          v269 = v312;
          v284 = v311;
          v285 = v312;
          v144[2156] = 1;
          *(_QWORD *)&v283 = v117;
          *((_QWORD *)&v283 + 1) = v143;
          v145 = *((_QWORD *)v144 + 260);
          v146 = *((_QWORD *)v144 + 261);
          v340 = v384;
          v147 = v382;
          v339 = v382;
          sub_1401E8550(v256, v145, v146);
          if ( LODWORD(v256[0]) != -1 )
          {
            *(__m128i *)&v291[80] = v261;
            *(_OWORD *)&v291[64] = v260;
            v148 = _mm_loadu_si128(&v257);
            *(_OWORD *)&v291[48] = v259;
            *(_OWORD *)&v291[32] = v258;
            *(__m128i *)&v291[16] = v148;
            *(_OWORD *)v291 = *(_OWORD *)v256;
            v343.m128i_i64[0] = 0;
            v343.m128i_i64[1] = 1;
            v344.m128i_i64[0] = 0;
            v348.m256i_i64[2] = 1610612768;
            v348.m256i_i64[0] = (__int64)&v343;
            v348.m256i_i64[1] = (__int64)&off_141A19198;
            if ( (unsigned __int8)sub_140D76130(v291, &v348) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_0,
                55,
                (unsigned int)&v381,
                (unsigned int)&unk_141A10708,
                (__int64)&off_141A19250);
            v121 = (volatile signed __int64 **)v343.m128i_i64[1];
            v380 = (volatile signed __int64 *)v343.m128i_i64[0];
            v122 = v344.m128i_i8[0];
            v370[0] = *(__int32 *)((char *)v344.m128i_i32 + 1);
            *(_DWORD *)((char *)v370 + 3) = v344.m128i_i32[1];
            v340 = v384;
            v149 = v382;
            v339 = v382;
            sub_140292440(v256);
            v82 = v384;
            v352 = v384;
            v351 = v149;
            v123 = 3;
            sub_14023D2F0(&v283);
            goto LABEL_179;
          }
          v340 = v384;
          v339 = v147;
          v152 = sub_140AF7B70(&off_141A0ECE8);
          v154 = v153;
          v287 = v152;
          v155 = v385;
          v385[2154] = 1;
          v286 = v153;
          v155[2149] = 0;
          v156 = *((void **)v155 + 270);
          v157 = *((_QWORD *)v155 + 271);
          v158 = *((_QWORD *)v155 + 272);
          v155[2155] = 0;
          *(_QWORD *)v291 = 1;
          *(_QWORD *)&v291[8] = 1;
          *(_WORD *)&v291[16] = 0;
          *(_QWORD *)&v291[24] = 1;
          *(_QWORD *)&v291[32] = v152;
          nullsub_1(v159, v153);
          v160 = sub_140001650(40, 8);
          if ( !v160 )
          {
            v333 = (_QWORD *)v157;
            Address = v156;
            sub_14196B2C1(8, 40);
          }
          *(_QWORD *)(v160 + 32) = *(_QWORD *)&v291[32];
          v161 = *(_OWORD *)v291;
          *(__m128i *)(v160 + 16) = _mm_loadu_si128((const __m128i *)&v291[16]);
          *(_OWORD *)v160 = v161;
          v155[2153] = 1;
          v348.m256i_i64[0] = (__int64)v156;
          v348.m256i_i64[1] = v157;
          v348.m256i_i64[2] = v158;
          v348.m256i_i64[3] = v160;
          v342 = v384;
          v341 = v382;
          v256[0] = (PVOID)sub_140C97CF0();
          v376 = 1;
          Address = v256[0];
          sub_140C6A080(v291);
          v376 = 0;
          v162 = sub_140C981B0(
                   (_DWORD)Address,
                   (unsigned int)aAuthCallback,
                   14,
                   (unsigned int)v291,
                   (__int64)&off_141A0ED10);
          v385[2153] = 0;
          *(__m128i *)&v291[16] = _mm_loadu_si128((const __m128i *)&v348.m256i_u64[2]);
          *(_OWORD *)v291 = *(_OWORD *)v348.m256i_i8;
          v163 = v384;
          v342 = v384;
          v164 = v382;
          v341 = v382;
          v165 = sub_140BEDB90(v162, v291);
          v307 = v165;
          v385[2152] = 1;
          v303 = v163;
          v302 = v164;
          v166 = sub_140AF7C40(&off_141A0ED28);
          v167 = v385;
          v385[2147] = 1;
          *((_QWORD *)v167 + 262) = v166;
          v311.m128i_i64[0] = v168;
          v167[2156] = 0;
          *(_WORD *)(v167 + 2151) = 0;
          *(_QWORD *)&v291[32] = v285;
          *(__m128i *)&v291[16] = _mm_loadu_si128(&v284);
          *(_OWORD *)v291 = v283;
          *(_QWORD *)&v291[40] = v165;
          *(_QWORD *)&v291[48] = v168;
          v291[72] = 0;
          v323 = v163;
          v322 = v164;
          v169 = sub_140C69380(v291, &off_141A0ED40);
          v27 = v118;
          v170 = v385;
          *((_QWORD *)v385 + 263) = v169;
          v170[2146] = 1;
          v170[2145] = 0;
          v170[2154] = 0;
          v326.m128i_i64[0] = v154;
          v170[2148] = 0;
          v343.m128i_i64[0] = *((_QWORD *)v170 + 273);
          sub_141549640(v256, 300, 0, &off_141A0ED58);
          v4 = v385;
          v171 = v385 + 2176;
          v172 = v385 + 2145;
          v173 = v343.m128i_i64[0];
          v292 = v262;
          *(__m128i *)&v291[80] = v261;
          *(_OWORD *)&v291[64] = v260;
          *(_OWORD *)&v291[48] = v259;
          *(_OWORD *)&v291[32] = v258;
          *(__m128i *)&v291[16] = v257;
          *(_OWORD *)v291 = *(_OWORD *)v256;
          *((_QWORD *)v385 + 272) = v326.m128i_i64[0];
          *((_QWORD *)v4 + 273) = v173;
          v174 = v375;
          *((_OWORD *)v375 + 6) = v292;
          v174[5] = *(_OWORD *)&v291[80];
          v174[4] = *(_OWORD *)&v291[64];
          v175 = *(_OWORD *)v291;
          v176 = _mm_load_si128((const __m128i *)&v291[16]);
          v177 = *(_OWORD *)&v291[32];
          v174[3] = *(_OWORD *)&v291[48];
          v174[2] = v177;
          v174[1] = v176;
          *v174 = v175;
          *((_QWORD *)v4 + 270) = v172;
          *((_QWORD *)v4 + 271) = v171;
LABEL_228:
          sub_140CAA450(v291, v4 + 2160, v374, v54);
          v178 = *(_QWORD *)v291;
          if ( *(_QWORD *)v291 == -3 )
          {
            v118 = v27;
            v119 = 4;
            goto LABEL_167;
          }
          v255 = *(_OWORD *)&v291[8];
          v179 = v384;
          v350 = v384;
          v349 = v382;
          sub_140293B30(v385 + 2176);
          v180 = 0;
          if ( v178 < (__int64)0x8000000000000003uLL )
            v180 = v178 - 0x7FFFFFFFFFFFFFFFLL;
          switch ( v180 )
          {
            case 0LL:
              v181 = v385;
              if ( v178 == -2 )
              {
                nullsub_1(v180, 0x8000000000000003uLL);
                v182 = (void *)sub_140001650(23, 1);
                if ( !v182 )
                {
                  v350 = v179;
                  v349 = v382;
                  sub_14196B2DB(1, 23);
                }
                qmemcpy(v182, "callback channel closed", 23);
                *((_QWORD *)v181 + 264) = 3;
                *((_QWORD *)v181 + 265) = 23;
                *((_QWORD *)v181 + 266) = v182;
                *((_QWORD *)v181 + 267) = 23;
              }
              else
              {
                *((_QWORD *)v385 + 265) = v178;
                *((_OWORD *)v181 + 133) = v255;
                *((_QWORD *)v181 + 264) = -1;
              }
              v209 = v382;
              v181[2150] = 1;
              break;
            case 1LL:
              v181 = v385;
              v385[2150] = 1;
              *((_QWORD *)v181 + 264) = 1;
              v209 = v382;
              break;
            case 2LL:
              v181 = v385;
              v385[2150] = 1;
              *((_QWORD *)v181 + 264) = 2;
              v209 = v382;
              break;
            case 3LL:
              v350 = v179;
              v349 = v382;
              sub_14196B850("all branches are disabled and there is no else branch", 107, &off_141A0ED88);
          }
          v181[2147] = 0;
          v210 = *((_QWORD *)v181 + 262);
          v331 = v179;
          v330 = v209;
          sub_140B389A0(v210);
          v211 = *((_QWORD *)v385 + 263);
          v331 = v179;
          v330 = v382;
          sub_141533520(v211);
          v212 = v385;
          *((_QWORD *)v385 + 270) = v211;
          v212[2146] = 0;
          Address = *((PVOID *)v212 + 263);
          *(_QWORD *)v291 = sub_1415460F0();
          *(_DWORD *)&v291[8] = v213;
          v214 = sub_1415460D0(v291, 2, 0);
          if ( v215 == -1 )
            sub_141549040(v291, 0, 0xFFFFFFFFLL);
          else
            sub_141549130((unsigned int)v291, v214, v215, 0, (__int64)&off_141A0ED70);
          v262 = v292;
          v216 = _mm_loadu_si128((const __m128i *)&v291[80]);
          v261 = v216;
          v217 = *(_OWORD *)&v291[64];
          v260 = *(_OWORD *)&v291[64];
          v218 = *(_OWORD *)v291;
          v219 = *(_OWORD *)&v291[16];
          v220 = *(_OWORD *)&v291[32];
          v221 = *(_OWORD *)&v291[48];
          v259 = *(_OWORD *)&v291[48];
          v258 = *(_OWORD *)&v291[32];
          v257 = *(__m128i *)&v291[16];
          *(_OWORD *)v256 = *(_OWORD *)v291;
          v4 = v385;
          *(_OWORD *)(v385 + 2264) = v292;
          *(__m128i *)(v4 + 2248) = v216;
          *(_OWORD *)(v4 + 2232) = v217;
          *(_OWORD *)(v4 + 2216) = v221;
          *(_OWORD *)(v4 + 2200) = v220;
          *(_OWORD *)(v4 + 2184) = v219;
          *(_OWORD *)(v4 + 2168) = v218;
          *((_QWORD *)v4 + 285) = Address;
LABEL_282:
          Address = v4 + 2168;
          v222 = (unsigned __int8 *)sub_1415475D0(v29, a2, a3, v54);
          v223 = v222[72];
          if ( v222[72] )
          {
            if ( v223 != 2 )
            {
              v237 = v222;
              sub_1416CA860(v222, sub_140A21520);
              v222 = v237;
              v237[72] = 0;
              goto LABEL_283;
            }
          }
          else
          {
LABEL_283:
            LOBYTE(v223) = sub_141541630(v222[68], v222[69]);
          }
          v224 = (__int64 *)(v385 + 2280);
          sub_140B60DF0(v291, v385 + 2280, v374);
          v226 = v291[0];
          if ( *(_QWORD *)v291 != 1 )
          {
            v53 = *(volatile signed __int64 ***)&v291[24];
            v4 = *(_BYTE **)&v291[16];
            LOBYTE(v223) = *(_QWORD *)&v291[8] == 0;
LABEL_288:
            v227 = *v224;
            if ( (unsigned __int8)sub_141532BE0(v227) )
              sub_1415334F0(v227);
            v82 = v384;
            v366 = v384;
            v365 = v382;
            sub_140291A70(Address);
            if ( v226 )
            {
              v366 = v82;
              v365 = v382;
              sub_141533670(v385 + 2160);
            }
            else if ( !((v4 == nullptr) | v223 & 1) )
            {
              Address = v4;
              v380 = (volatile signed __int64 *)v53;
              if ( *v53 )
                ((void (__fastcall *)(PVOID))*v53)(Address);
              v228 = *((_QWORD *)v380 + 1);
              v82 = v384;
              if ( v228 )
                sub_140001660(Address, v228, *((_QWORD *)v380 + 2));
            }
            v229 = v385;
            v385[2150] = 0;
            v123 = *((_QWORD *)v229 + 264);
            v380 = *((volatile signed __int64 **)v229 + 265);
            v132 = *((volatile signed __int64 ***)v229 + 266);
            v122 = v229[2136];
            v370[0] = *(_DWORD *)(v229 + 2137);
            *(_DWORD *)((char *)v370 + 3) = *((_DWORD *)v229 + 535);
            v331 = v82;
            v330 = v382;
            sub_141542130(v229 + 2160);
            v118 = v27;
            v69 = v385;
            v385[2146] = 0;
            v69[2147] = 0;
            *(_DWORD *)(v69 + 2150) = 0;
            v69[2154] = 0;
            v69[2155] = 0;
            v69[2156] = 0;
            v69[2148] = 0;
            v230 = *((_QWORD *)v69 + 259);
            if ( v230 )
              sub_140001660(*((_QWORD *)v69 + 260), v230, 1);
            v69[2149] = 0;
            *(_DWORD *)&v345[3] = *(_DWORD *)((char *)v370 + 3);
            *(_DWORD *)v345 = v370[0];
            v69[2144] = 1;
            if ( v123 == -2 )
              goto LABEL_168;
LABEL_194:
            *(_DWORD *)&v360[3] = *(_DWORD *)&v345[3];
            *(_DWORD *)v360 = *(_DWORD *)v345;
            v364 = v82;
            sub_140285920(v382);
            v136 = v380;
            if ( v123 != -1 )
            {
              switch ( v123 )
              {
                case 0LL:
                  v384 = v82;
                  *(_QWORD *)v291 = v380;
                  *(_QWORD *)&v291[8] = v132;
                  v291[16] = v122;
                  *(_DWORD *)&v291[17] = *(_DWORD *)v360;
                  *(_DWORD *)&v291[20] = *(_DWORD *)&v360[3];
                  *(_QWORD *)&v283 = v291;
                  *((_QWORD *)&v283 + 1) = sub_1400015F0;
                  sub_1416DAFA0(v256, &unk_141A0E1F5, &v283);
                  goto LABEL_216;
                case 1LL:
                  nullsub_1(v134, v133);
                  v151 = (_OWORD *)sub_140001650(41, 1);
                  v69 = v385;
                  if ( !v151 )
                  {
                    v364 = v82;
                    sub_14196B2DB(1, 41);
                  }
                  *(_OWORD *)((char *)v151 + 25) = *(__int128 *)((char *)&xmmword_141A0E273 + 9);
                  v151[1] = xmmword_141A0E273;
                  *(__m128i *)v151 = _mm_loadu_si128((const __m128i *)&xmmword_141A0E263);
                  v256[0] = (PVOID)41;
                  v256[1] = v151;
                  v257.m128i_i64[0] = 41;
                  break;
                case 2LL:
                  nullsub_1(v134, v133);
                  v150 = (__m128i *)sub_140001650(48, 1);
                  v69 = v385;
                  if ( !v150 )
                  {
                    v364 = v82;
                    sub_14196B2DB(1, 48);
                  }
                  v150[2] = (__m128i)xmmword_141A0E2AC;
                  v150[1] = (__m128i)xmmword_141A0E29C;
                  *v150 = _mm_loadu_si128((const __m128i *)&xmmword_141A0E28C);
                  v256[0] = (PVOID)48;
                  v256[1] = v150;
                  v257.m128i_i64[0] = 48;
                  break;
                case 3LL:
                  v384 = v82;
                  *(_QWORD *)v291 = v380;
                  *(_QWORD *)&v291[8] = v132;
                  v291[16] = v122;
                  *(_DWORD *)&v291[17] = *(_DWORD *)v360;
                  *(_DWORD *)&v291[20] = *(_DWORD *)&v360[3];
                  *(_QWORD *)&v283 = v291;
                  *((_QWORD *)&v283 + 1) = sub_1400015F0;
                  sub_1416DAFA0(v256, &unk_141A0E2BC, &v283);
LABEL_216:
                  if ( *(_QWORD *)v291 )
                    sub_140001660(*(_QWORD *)&v291[8], *(_QWORD *)v291, 1);
                  v69 = v385;
                  v82 = v384;
                  break;
              }
              v68 = v256[0];
              v382 = (char *)v256[1];
              v62 = v257.m128i_i8[0];
              v378[0] = *(__int32 *)((char *)v257.m128i_i32 + 1);
              *(_DWORD *)((char *)v378 + 3) = v257.m128i_i32[1];
              v69[1983] = 0;
              if ( !v69[1978] )
              {
LABEL_251:
                v69[1978] = 0;
                v69[1984] = 0;
                v96 = *((_QWORD *)v69 + 233);
                v42 = -1;
                if ( !v96 )
                {
LABEL_253:
                  *(_WORD *)(v69 + 1985) = 0;
                  v328[0] = v378[0];
                  *(_DWORD *)((char *)v328 + 3) = *(_DWORD *)((char *)v378 + 3);
                  sub_1419234B0(v239, v238, 152);
                  v69[1987] = 1;
                  if ( v42 == -2 )
                    goto LABEL_254;
                  HIDWORD(v250) = *(_DWORD *)((char *)v328 + 3);
                  *(_DWORD *)((char *)&v250 + 1) = v328[0];
                  sub_1419234B0(&v251, v239, 152);
                  v247 = v42;
                  Address = v68;
                  v248 = (__int64)v68;
                  v249 = (__int64)v382;
                  LOBYTE(v250) = v62;
                  sub_140286E10(v82);
                  v195 = v385;
                  sub_14017BF40(*((_QWORD *)v385 + 229));
                  v20 = v250;
                  v17 = v251;
                  sub_1419234B0(v240, v252, 144);
                  v195[3049] = 0;
                  v195[3050] = 0;
                  sub_140031300(v195 + 1680);
                  v25 = v20 >> 8;
                  v19 = v382;
LABEL_256:
                  v196 = v25 << 8;
                  v197 = v196 | (unsigned __int8)v20;
                  sub_1419234B0(v241, v240, 144);
                  v69 = v385;
                  v385[3048] = 1;
                  if ( v42 != -1 )
                  {
                    sub_1419234B0(v243, v241, 144);
                    v242[0] = v42;
                    v242[1] = Address;
                    v242[2] = v19;
                    v242[3] = v197;
                    v242[4] = v17;
                    sub_140D78240(v291, v242);
                    v198 = ((unsigned __int64)((v291[15] << 16) | (unsigned int)*(unsigned __int16 *)&v291[13]) << 32)
                         | *(unsigned int *)&v291[9];
                    v201 = v291[8];
                    v202 = *(_QWORD *)&v291[24];
                    v203 = *(_QWORD *)&v291[16];
                    v197 = *(_QWORD *)&v291[32];
                    if ( *(_QWORD *)v291 == -1 )
                    {
                      v204 = 0;
                    }
                    else
                    {
                      v291[15] = (((unsigned __int64)((v291[15] << 16) | (unsigned int)*(unsigned __int16 *)&v291[13]) << 32)
                                | *(unsigned int *)&v291[9]) >> 48;
                      *(_WORD *)&v291[13] = WORD2(v198);
                      *(_DWORD *)&v291[9] = v198;
                      v247 = 0;
                      v248 = 1;
                      v249 = 0;
                      v257.m128i_i64[0] = 1610612768;
                      v256[0] = &v247;
                      v256[1] = &off_141A19198;
                      if ( (unsigned __int8)sub_141473A60(v291, v256) )
                        sub_14196B5F0(
                          (unsigned int)aADisplayImplem_0,
                          55,
                          (unsigned int)&v381,
                          (unsigned int)&unk_141A10708,
                          (__int64)&off_141A19250);
                      v203 = v247;
                      v202 = v248;
                      v197 = v249;
                      v198 = sub_14028D380(v291);
                      v204 = 1;
                      v201 = 3;
                    }
                    v69 = v385;
                    goto LABEL_270;
                  }
                  if ( v196 < 0 )
                  {
                    v205 = 0;
                    goto LABEL_262;
                  }
                  if ( v197 )
                  {
                    nullsub_1(v200, v199);
                    v205 = 1;
                    v206 = sub_140001650(v197, 1);
                    if ( !v206 )
                    {
LABEL_262:
                      v382 = v19;
                      sub_14196B2DB(v205, v197);
                    }
                    v202 = v206;
                    sub_1419234B0(v206, v19, v197);
                    v207 = Address;
                    if ( !Address )
                    {
LABEL_269:
                      v204 = 1;
                      v201 = 3;
                      v203 = v197;
LABEL_270:
                      v208 = v333;
                      *v333 = v204;
                      *((_BYTE *)v208 + 8) = v201;
                      *(_DWORD *)((char *)v208 + 9) = v198;
                      *((_BYTE *)v208 + 15) = BYTE6(v198);
                      *(_WORD *)((char *)v208 + 13) = WORD2(v198);
                      v208[2] = v203;
                      v208[3] = v202;
                      v208[4] = v197;
                      result = 1;
                      goto LABEL_271;
                    }
                  }
                  else
                  {
                    v202 = 1;
                    v207 = Address;
                    if ( !Address )
                      goto LABEL_269;
                  }
                  sub_140001660(v19, v207, 1);
                  goto LABEL_269;
                }
LABEL_252:
                sub_140001660(*((_QWORD *)v69 + 234), v96, 1);
                goto LABEL_253;
              }
LABEL_249:
              v193 = *((_QWORD *)v69 + 249);
              if ( v193 )
                sub_140001660(*((_QWORD *)v69 + 250), v193, 1);
              goto LABEL_251;
            }
            v137 = v385;
            v385[1983] = 1;
            *((_QWORD *)v137 + 243) = v136;
            *((_QWORD *)v137 + 244) = v132;
            v137[1960] = v122;
            v138 = *(_DWORD *)&v360[3];
            *(_DWORD *)(v137 + 1961) = *(_DWORD *)v360;
            *((_DWORD *)v137 + 491) = v138;
            if ( v136 == (volatile signed __int64 *)-1LL )
            {
              if ( (_BYTE)v132 )
              {
                v336 = v82;
                if ( (unsigned __int8)v132 == 1 )
                  sub_1403F7CF0(v291, aOpenai_0, 43);
                else
                  sub_1403F7CF0(v291, asc_141A0F144, 39);
              }
              else
              {
                v336 = v82;
                sub_1403F7CF0(v291, aOauthCancelled, 41);
              }
              v382 = *(char **)&v291[8];
              v68 = *(PVOID *)v291;
              v62 = v291[16];
              v378[0] = *(_DWORD *)&v291[17];
              *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)&v291[20];
              v69 = v385;
              goto LABEL_248;
            }
            v137[1983] = 0;
            v139 = *((_QWORD *)v137 + 245);
            v137[1977] = 1;
            v140 = *((_QWORD *)v137 + 239);
            v369 = v136;
            v379 = v132;
            v368 = v132;
            v367 = v82;
            LOBYTE(v135) = 1;
            sub_14017C140(v291, v140, v135);
            if ( *(_QWORD *)v291 != -1 )
            {
              v382 = *(char **)&v291[8];
              v62 = v291[16];
              v378[0] = *(_DWORD *)&v291[17];
              *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)&v291[20];
              v69 = v385;
              v68 = *(PVOID *)v291;
              if ( v385[1977] == 1 )
                goto LABEL_200;
              goto LABEL_248;
            }
            v183 = *((_QWORD *)v385 + 238);
            v369 = v136;
            v368 = v379;
            v367 = v82;
            v184 = sub_140594FC0(v183);
            v369 = v136;
            v368 = v379;
            v367 = v82;
            sub_1408740F0(&v270, v184);
            v185 = *((char **)&v270 + 1);
            LOBYTE(v375) = v271.m128i_i8[0];
            v384 = v82;
            if ( (_BYTE)v270 )
            {
              Address = *((PVOID *)&v270 + 1);
              v256[0] = nullptr;
              v256[1] = (PVOID)1;
              v257.m128i_i64[0] = 0;
              *(_QWORD *)&v291[16] = 1610612768;
              *(_QWORD *)v291 = v256;
              *(_QWORD *)&v291[8] = &off_141A19198;
              if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v291) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_0,
                  55,
                  (unsigned int)&v381,
                  (unsigned int)&unk_141A10708,
                  (__int64)&off_141A19250);
              v189 = v256[0];
              v382 = (char *)v256[1];
              v62 = v257.m128i_i8[0];
              LODWORD(v283) = *(__int32 *)((char *)v257.m128i_i32 + 1);
              *(_DWORD *)((char *)&v283 + 3) = v257.m128i_i32[1];
              v82 = v384;
              v190 = v380;
              v191 = (char *)Address;
              if ( !(_BYTE)v375 )
              {
                if ( 2 * *off_142240260 )
                {
                  v369 = v380;
                  v368 = v379;
                  v367 = v384;
                  if ( !(unsigned __int8)sub_14196A710(v187, v186, v188) )
                    v191[1] = 1;
                }
              }
              v192 = *v191;
              *v191 = 0;
              if ( v192 == 2 )
              {
                v369 = v190;
                v368 = v379;
                v367 = v82;
                WakeByAddressSingle(v191);
              }
              *(__int32 *)((char *)v348.m256i_i32 + 3) = *(_DWORD *)((char *)&v283 + 3);
              v348.m256i_i32[0] = v283;
              if ( v189 != (PVOID)-1LL )
              {
                *(_DWORD *)((char *)v378 + 3) = *(__int32 *)((char *)v348.m256i_i32 + 3);
                v378[0] = v348.m256i_i32[0];
                v69 = v385;
                v68 = v189;
                if ( v385[1977] == 1 )
                {
LABEL_200:
                  if ( v380 )
                  {
                    sub_140001660(v379, v380, 1);
                    v69[1977] = 0;
                    v69[1983] = 0;
                    if ( !v69[1978] )
                      goto LABEL_251;
                    goto LABEL_249;
                  }
                }
LABEL_248:
                v69[1977] = 0;
                v69[1983] = 0;
                if ( !v69[1978] )
                  goto LABEL_251;
                goto LABEL_249;
              }
              v185 = v382;
              LOBYTE(v375) = v62;
            }
            Address = v185;
            sub_140D01650(&v343, v185 + 8);
            v231 = v380;
            v369 = v380;
            v368 = v379;
            v232 = v384;
            v367 = v384;
            sub_14002B980(Address, (unsigned __int8)v375);
            v233 = v385;
            *(_WORD *)(v385 + 1977) = 0;
            *(_QWORD *)v291 = v231;
            *(_QWORD *)&v291[8] = v379;
            *(_QWORD *)&v291[16] = v139;
            *(_OWORD *)&v291[24] = *(_OWORD *)(v233 + 1992);
            *(_QWORD *)&v291[40] = *((_QWORD *)v233 + 251);
            v234 = _mm_loadu_si128(&v344);
            *(__m128i *)&v291[48] = _mm_loadu_si128(&v343);
            *(__m128i *)&v291[64] = v234;
            v373 = v231;
            v372 = v379;
            v371 = v232;
            v235 = sub_140061EA0(v291, &off_141A0F0D8);
            v4 = v385;
            *((_QWORD *)v385 + 249) = v235;
            v27 = v118;
LABEL_53:
            Address = v4 + 1992;
            sub_140B5DFB0(v291, v4 + 1992, v374);
            v3 = *(_QWORD *)v291;
            if ( *(_QWORD *)v291 == -4 )
            {
              v52 = 4;
              goto LABEL_76;
            }
            v56 = v27;
            v57 = *(_QWORD *)&v291[8];
            v58 = *(_QWORD *)&v291[16];
            v59 = v291[24];
            v359[0] = *(_DWORD *)&v291[25];
            *(_DWORD *)((char *)v359 + 3) = *(_DWORD *)&v291[28];
            sub_1419234B0(&v244, &v291[32], 144);
            v60 = *(volatile signed __int64 **)Address;
            v373 = v380;
            v372 = v379;
            v371 = v384;
            if ( (unsigned __int8)sub_141532BE0(v60) )
            {
              v373 = v380;
              v372 = v379;
              v371 = v384;
              sub_1415334F0(v60);
            }
            if ( v3 == -2 )
            {
              *(_QWORD *)v291 = v57;
              *(_QWORD *)&v291[8] = v58;
              v291[16] = v59;
              *(_DWORD *)&v291[17] = v359[0];
              *(_DWORD *)&v291[20] = *(_DWORD *)((char *)v359 + 3);
              v77 = _mm_loadu_si128(v245);
              *(__m128i *)&v291[24] = _mm_loadu_si128(&v244);
              *(__m128i *)&v291[40] = v77;
              *(__m128i *)&v291[56] = v245[1];
              *(__m128i *)&v291[72] = v245[2];
              *(_QWORD *)&v291[88] = v246;
              *(_QWORD *)&v283 = v291;
              *((_QWORD *)&v283 + 1) = sub_140D76130;
              sub_1416DAFA0(v256, &unk_141A0E2F2, &v283);
              v373 = v380;
              v372 = v379;
              v371 = v384;
              sub_140292440(v291);
LABEL_85:
              v68 = v256[0];
              v382 = (char *)v256[1];
              v62 = v257.m128i_i8[0];
              v378[0] = *(__int32 *)((char *)v257.m128i_i32 + 1);
              *(_DWORD *)((char *)v378 + 3) = v257.m128i_i32[1];
              v69 = v385;
              goto LABEL_114;
            }
            if ( v3 == -3 )
            {
              *(_QWORD *)v291 = v57;
              *(_QWORD *)&v291[8] = v58;
              v291[16] = v59;
              *(_DWORD *)&v291[17] = v359[0];
              *(_DWORD *)&v291[20] = *(_DWORD *)((char *)v359 + 3);
              *(_QWORD *)&v283 = v291;
              *((_QWORD *)&v283 + 1) = sub_141542650;
              sub_1416DAFA0(v256, &unk_141A0E2D4, &v283);
              Address = *(PVOID *)&v291[8];
              if ( *(_QWORD *)&v291[8] )
              {
                v374 = *(_QWORD *)&v291[16];
                if ( **(_QWORD **)&v291[16] )
                  (**(void (__fastcall ***)(PVOID))&v291[16])(Address);
                v61 = *(_QWORD *)(v374 + 8);
                if ( v61 )
                  sub_140001660(Address, v61, *(_QWORD *)(v374 + 16));
              }
              goto LABEL_85;
            }
            sub_1419234B0(&v272, &v244, 144);
            *(__int32 *)((char *)&v271.m128i_i32[2] + 1) = v359[0];
            v271.m128i_i32[3] = *(_DWORD *)((char *)v359 + 3);
            v78 = v385;
            v385[1976] = 1;
            *(_QWORD *)&v270 = v3;
            *((_QWORD *)&v270 + 1) = v57;
            v271.m128i_i64[0] = v58;
            v271.m128i_i8[8] = v59;
            v79 = *((_QWORD *)v78 + 239);
            v80 = v380;
            v301 = v380;
            v300 = v379;
            v299 = v384;
            LOBYTE(v81) = 2;
            sub_14017C140(v291, v79, v81);
            v68 = *(PVOID *)v291;
            if ( *(_QWORD *)v291 != -1 )
            {
              v382 = *(char **)&v291[8];
              v62 = v291[16];
              v378[0] = *(_DWORD *)&v291[17];
              *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)&v291[20];
              v69 = v385;
              goto LABEL_92;
            }
            v347 = v57;
            v92 = v385;
            sub_140643830(v291, *((_QWORD *)v385 + 238));
            v92[1976] = 0;
            sub_1419234B0(v293, &v270, 176);
            v363 = v80;
            v362 = v379;
            v361 = v384;
            v93 = sub_140062310(v291, &off_141A0F170);
            *(_QWORD *)Address = v93;
            v4 = v385;
            v27 = v56;
LABEL_49:
            v375 = v4 + 1992;
            sub_140B5DBF0(v291, v4 + 1992, v374);
            v51 = *(_BYTE **)v291;
            if ( *(_QWORD *)v291 == -3 )
            {
              v52 = 5;
LABEL_76:
              *v27 = v52;
              v69 = v385;
              goto LABEL_254;
            }
            v334 = v27;
            Address = *(PVOID *)&v291[8];
            v382 = *(char **)&v291[16];
            v62 = v291[24];
            v358[0] = *(_DWORD *)&v291[25];
            *(_DWORD *)((char *)v358 + 3) = *(_DWORD *)&v291[28];
            v265 = *(__m128i *)&v291[32];
            v266 = _mm_loadu_si128((const __m128i *)&v291[48]);
            v335 = *(_QWORD *)&v291[72];
            v267 = *(_QWORD *)&v291[64];
            v63 = *(_QWORD *)&v291[88];
            v325 = *(_QWORD *)&v291[80];
            v64 = v292;
            v65 = *(_QWORD *)v375;
            v363 = v380;
            v362 = v379;
            v361 = v384;
            if ( (unsigned __int8)sub_141532BE0(v65) )
            {
              v363 = v380;
              v362 = v379;
              v361 = v384;
              sub_1415334F0(v65);
            }
            if ( v51 == (_BYTE *)-1LL )
            {
              *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)((char *)v358 + 3);
              v378[0] = v358[0];
              v69 = v385;
              *(_DWORD *)(v385 + 1979) = 0;
              v68 = Address;
              v57 = v347;
              goto LABEL_92;
            }
            v66 = Address;
            if ( v51 == (_BYTE *)-2LL )
            {
              *(_QWORD *)v291 = Address;
              *(_QWORD *)&v291[8] = v382;
              v291[16] = v62;
              *(_DWORD *)&v291[17] = v358[0];
              *(_DWORD *)&v291[20] = *(_DWORD *)((char *)v358 + 3);
              *(_QWORD *)&v283 = v291;
              *((_QWORD *)&v283 + 1) = sub_141542650;
              sub_1416DAFA0(v256, &unk_141A0E310, &v283);
              Address = *(PVOID *)&v291[8];
              v57 = v347;
              if ( *(_QWORD *)&v291[8] )
              {
                v374 = *(_QWORD *)&v291[16];
                if ( **(_QWORD **)&v291[16] )
                  (**(void (__fastcall ***)(PVOID))&v291[16])(Address);
                v67 = *(_QWORD *)(v374 + 8);
                if ( v67 )
                  sub_140001660(Address, v67, *(_QWORD *)(v374 + 16));
              }
              v68 = v256[0];
              v382 = (char *)v256[1];
              v62 = v257.m128i_i8[0];
              v378[0] = *(__int32 *)((char *)v257.m128i_i32 + 1);
              *(_DWORD *)((char *)v378 + 3) = v257.m128i_i32[1];
              v69 = v385;
              *(_DWORD *)(v385 + 1979) = 0;
LABEL_92:
              if ( v69[1976] )
              {
                if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  sub_140001660(v57, v3, 1);
                if ( v271.m128i_i64[1] != -1 && v271.m128i_i64[1] )
                  sub_140001660(v272, v271.m128i_i64[1], 1);
                v82 = v384;
                if ( v273 != -1 && v273 )
                  sub_140001660(v274, v273, 1);
                if ( v275 != -1 && v275 )
                  sub_140001660(v276, v275, 1);
                if ( v277 != -1 && v277 )
                  sub_140001660(v278, v277, 1);
                if ( v279 != -1 && v279 )
                  sub_140001660(v280, v279, 1);
                if ( v281 != -1 && v281 )
                {
                  sub_140001660(v282, v281, 1);
                  v69[1976] = 0;
                  if ( v69[1977] == 1 )
                    goto LABEL_200;
                  goto LABEL_248;
                }
                goto LABEL_115;
              }
LABEL_114:
              v82 = v384;
LABEL_115:
              v69[1976] = 0;
              if ( v69[1977] == 1 )
                goto LABEL_200;
              goto LABEL_248;
            }
            v83 = v385;
            *(_DWORD *)(v385 + 1979) = 16843009;
            *((_QWORD *)v83 + 249) = v51;
            *((_QWORD *)v83 + 250) = v66;
            *((_QWORD *)v83 + 251) = v382;
            v83[2016] = v62;
            v84 = *(_DWORD *)((char *)v358 + 3);
            *(_DWORD *)(v83 + 2017) = v358[0];
            *((_DWORD *)v83 + 505) = v84;
            v85 = _mm_load_si128(&v266);
            *(__m128i *)(v83 + 2024) = _mm_load_si128(&v265);
            *(__m128i *)(v83 + 2040) = v85;
            *((_QWORD *)v83 + 257) = v267;
            *((_QWORD *)v83 + 258) = v335;
            *((_QWORD *)v83 + 259) = v325;
            v289 = v63;
            *((_QWORD *)v83 + 260) = v63;
            *((_QWORD *)v83 + 261) = v64;
            v86 = qword_141A19290[BYTE5(v64)];
            v375 = v51;
            v87 = dword_141A192A8[BYTE5(v64)];
            v83[1982] = 0;
            v347 = *((_QWORD *)v83 + 252);
            v310 = *((_QWORD *)v83 + 253);
            v290 = *((_QWORD *)v83 + 254);
            *((_WORD *)v83 + 990) = 0;
            sub_1401E7560((unsigned int)v291, v86, 0, 1, 1);
            v309 = *(_QWORD *)&v291[8];
            if ( *(_DWORD *)v291 == 1 )
              sub_14196B2DB(v309, *(_QWORD *)&v291[16]);
            v88 = v64 & 0xFF0000000000LL;
            v89 = (char *)dword_141A192A8 + v87;
            v90 = *(_QWORD *)&v291[16];
            sub_1419234B0(*(_QWORD *)&v291[16], v89, v86);
            BYTE4(v292) = (v64 & 0xFF0000000000LL) != 0x20000000000LL;
            *(_QWORD *)v291 = v375;
            *(_QWORD *)&v291[8] = Address;
            *(_QWORD *)&v291[16] = v382;
            *(_QWORD *)&v291[24] = v347;
            *(_QWORD *)&v291[32] = v310;
            *(_QWORD *)&v291[40] = v290;
            BYTE5(v292) = BYTE6(v64);
            LODWORD(v292) = v64;
            *(_QWORD *)&v291[72] = v335;
            *(_QWORD *)&v291[80] = v325;
            *(_QWORD *)&v291[88] = v289;
            *(_QWORD *)&v291[48] = v309;
            *(_QWORD *)&v291[56] = v90;
            *(_QWORD *)&v291[64] = v86;
            v83[1979] = 0;
            v257.m128i_i64[0] = *((_QWORD *)v83 + 257);
            *(__m128i *)v256 = _mm_loadu_si128((const __m128i *)(v83 + 2040));
            v91 = (unsigned __int64)(v83 + 2096);
            v316 = v380;
            v315 = v379;
            v314 = v384;
            sub_140CF5AE0(v83 + 2096, v291, v256);
            v27 = v334;
            if ( v88 == 0x20000000000LL )
            {
LABEL_133:
              v69 = v385;
              v42 = *((_QWORD *)v385 + 262);
              v68 = *((PVOID *)v385 + 263);
              v382 = *((char **)v385 + 264);
              v62 = v385[2120];
              *(_DWORD *)((char *)v378 + 3) = *((_DWORD *)v385 + 531);
              v378[0] = *(_DWORD *)(v385 + 2121);
              sub_1419234B0(v238, v385 + 2128, 152);
              *(_DWORD *)(v69 + 1979) = 0;
              v69[1976] = 0;
              *(_WORD *)(v69 + 1977) = 0;
              v69[1983] = 0;
              v69[1984] = 0;
              v96 = *((_QWORD *)v69 + 233);
              v82 = v384;
              if ( !v96 )
                goto LABEL_253;
              goto LABEL_252;
            }
            v4 = v385;
            sub_140643830(&v283, *((_QWORD *)v385 + 238));
            sub_1419234B0(v4 + 2280, &v283, 152);
            v44 = v4 + 2280;
            *((_QWORD *)v4 + 304) = v91;
            *((_QWORD *)v4 + 305) = aRuntimeRefresh_2;
            *((_QWORD *)v4 + 306) = 41;
            v47 = aOauthAccountIm;
            *((_QWORD *)v4 + 307) = aOauthAccountIm;
            *((_QWORD *)v4 + 308) = 30;
            v49 = aImport;
            *((_QWORD *)v4 + 309) = aImport;
            *((_QWORD *)v4 + 310) = 6;
            Address = v4 + 3040;
            v4[3040] = 0;
            v45 = _mm_unpacklo_epi64((__m128i)v91, (__m128i)(unsigned __int64)aRuntimeRefresh_2);
            v46 = 41;
            v48 = 30;
            v50 = 6;
            v6 = v346;
LABEL_48:
            v346 = v6;
            *(__m128i *)(v4 + 2488) = v45;
            *((_QWORD *)v4 + 313) = v46;
            *((_QWORD *)v4 + 314) = v47;
            *((_QWORD *)v4 + 315) = v48;
            sub_1419234B0(v4 + 2528, v44, 152);
            *((_QWORD *)v4 + 335) = v49;
            *((_QWORD *)v4 + 336) = v50;
            v4[3032] = 0;
LABEL_74:
            v382 = v4 + 2528;
            sub_1403A94E0(v291, v4 + 2528, v374);
            v70 = *(_QWORD *)v291;
            if ( *(_QWORD *)v291 == -2 )
            {
              *(_BYTE *)Address = 3;
              v52 = 6;
              goto LABEL_76;
            }
            v327 = *(_QWORD *)&v291[24];
            v326 = _mm_loadu_si128((const __m128i *)&v291[8]);
            sub_1419234B0(v256, &v291[32], 920);
            v71 = v298;
            if ( v385[3032] == 3 )
            {
              if ( v385[3024] == 3 )
              {
                sub_140B615A0(v385 + 3016);
              }
              else if ( !v385[3024] )
              {
                sub_140031300(v385 + 2864);
              }
              v72 = v385 + 2696;
            }
            else
            {
              v72 = v382;
              if ( v385[3032] )
                goto LABEL_125;
            }
            sub_140031300(v72);
LABEL_125:
            if ( (_DWORD)v70 == -1 )
            {
              v348.m256i_i64[3] = v327;
              *(__m128i *)&v348.m256i_u64[1] = v326;
              v95 = 1;
              v94 = (__int128 **)v385;
            }
            else
            {
              *(_QWORD *)v291 = v70;
              *(__m128i *)&v291[8] = v326;
              *(_QWORD *)&v291[24] = v327;
              sub_1419234B0(&v291[32], v256, 920);
              v298 = v71;
              if ( v294 )
                sub_140001660(v295, v294, 1);
              v94 = (__int128 **)v385;
              if ( v296 )
                sub_140001660(v297, v296, 1);
              sub_140291FE0(v291);
              *(_OWORD *)&v348.m256i_u64[1] = v263;
              v348.m256i_i64[3] = v264;
              v95 = 0;
            }
            v348.m256i_i64[0] = v95;
            sub_140D90860(v94[311]);
            *(_BYTE *)Address = 1;
            goto LABEL_133;
          }
          LOBYTE(v225) = v223 & 1 | ((_BYTE)v223 == 2);
          if ( !(unsigned __int8)sub_14152B3E0(v225, Address, v374) )
            goto LABEL_288;
          v118 = v27;
          v119 = 5;
LABEL_167:
          v69 = v385;
          *(_BYTE *)v53 = v119;
LABEL_168:
          *v118 = 3;
LABEL_254:
          v69[3048] = 3;
          *v333 = 2;
          result = 3;
LABEL_271:
          v69[3056] = result;
          return result;
        case 1:
LABEL_326:
          v346 = v6;
          sub_14196B990(&off_141A0F230);
        case 2:
LABEL_325:
          v346 = v6;
          sub_14196B9B0(&off_141A0F230);
        case 3:
LABEL_20:
          v27 = v4 + 1987;
          v28 = (unsigned __int8)v4[1987];
          v29 = v4 + 1840;
          v384 = v4 + 1840;
          v346 = v6;
          switch ( v28 )
          {
            case 0LL:
              v7 = *((_BYTE **)v4 + 246);
              v30 = *((_QWORD *)v4 + 236);
              v31 = *((volatile signed __int64 **)v4 + 237);
              goto LABEL_150;
            case 1LL:
              v329 = v384;
              sub_14196B990(&off_141A0F0C0);
            case 2LL:
              v329 = v384;
              sub_14196B9B0(&off_141A0F0C0);
            case 3LL:
              v53 = (volatile signed __int64 **)(v4 + 2144);
              v54 = v4 + 2016;
              switch ( v4[2144] )
              {
                case 0:
                  v31 = *((volatile signed __int64 **)v4 + 258);
                  v55 = v4 + 1840;
                  goto LABEL_152;
                case 1:
                  v318 = v384;
                  v317 = v4 + 2016;
                  sub_14196B990(&off_141A0ECD0);
                case 2:
                  v318 = v384;
                  v317 = v4 + 2016;
                  sub_14196B9B0(&off_141A0ECD0);
                case 3:
                  v380 = (volatile signed __int64 *)(v4 + 2240);
                  v73 = (unsigned __int8)v4[2240];
                  v375 = v4 + 2192;
                  switch ( v73 )
                  {
                    case 0LL:
                      v74 = *((const char **)v4 + 274);
                      v75 = *((_QWORD *)v4 + 275);
                      v55 = v384;
                      v76 = v380;
                      goto LABEL_153;
                    case 1LL:
                      v321 = v384;
                      v320 = v4 + 2016;
                      v319 = v380;
                      sub_14196B990(&off_141A0BAB0);
                    case 2LL:
                      v321 = v384;
                      v320 = v4 + 2016;
                      JUMPOUT(0x1402977C9LL);
                    case 3LL:
                      v382 = v4 + 2016;
                      goto LABEL_154;
                  }
                case 4:
                  v382 = v4 + 2016;
                  goto LABEL_228;
                case 5:
                  v382 = v4 + 2016;
                  goto LABEL_282;
              }
            case 4LL:
              goto LABEL_53;
            case 5LL:
              goto LABEL_49;
            case 6LL:
              v43 = (unsigned __int8)v4[3040];
              Address = v4 + 3040;
              switch ( v43 )
              {
                case 0LL:
                  v44 = v4 + 2280;
                  v45 = _mm_loadu_si128((const __m128i *)v4 + 152);
                  v46 = *((_QWORD *)v4 + 306);
                  v47 = *((const char **)v4 + 307);
                  v48 = *((_QWORD *)v4 + 308);
                  v49 = *((const char **)v4 + 309);
                  v50 = *((_QWORD *)v4 + 310);
                  goto LABEL_48;
                case 1LL:
                  v313 = v384;
                  sub_14196B990(&off_141A0C450);
                case 2LL:
                  JUMPOUT(0x1402976E7LL);
                case 3LL:
                  goto LABEL_74;
              }
          }
      }
  }
}
