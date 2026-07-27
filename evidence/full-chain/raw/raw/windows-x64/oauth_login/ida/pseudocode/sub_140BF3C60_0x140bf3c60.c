// module: codexmate_lib/core/oauth_login
// addr: 0x140bf3c60
// name: sub_140BF3C60
// win 1.2.1 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140BF3C60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int128 v14; // xmm2
  __int64 *v15; // r15
  int v16; // esi
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  int v19; // r13d
  unsigned int v20; // r12d
  __int64 v21; // r14
  char v22; // al
  unsigned __int64 v23; // r14
  volatile signed __int64 *v24; // r15
  void *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rax
  volatile signed __int64 *v28; // rdi
  char *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // al
  char v34; // al
  char v35; // r12
  char v36; // r12
  volatile signed __int64 *v37; // r15
  __int64 v38; // rbx
  __int64 *v39; // r14
  char v40; // al
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // r14
  __int8 v44; // di
  __int64 v45; // r12
  __int64 v46; // rdx
  __int8 v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rcx
  __m128i v56; // xmm1
  __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdx
  _OWORD *v61; // r14
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // rbx
  __int64 v66; // r12
  __int64 v67; // r13
  char *v68; // r15
  __int64 v69; // r12
  _OWORD *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // r15
  __int64 v73; // r14
  void *v74; // rsi
  _QWORD *v75; // r8
  _BYTE *v76; // r13
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  bool v82; // zf
  __int64 v83; // rdi
  _QWORD *v84; // rsi
  char v85; // al
  __int64 v86; // rcx
  __m128i *v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // r15
  __int64 v93; // r14
  __int128 v94; // xmm0
  __m128i si128; // xmm1
  _BYTE *v96; // r13
  __m128i v97; // xmm0
  __int64 v98; // r14
  __int32 v99; // edi
  __int32 v100; // r15d
  __int64 v101; // rsi
  __int64 v102; // r12
  __int64 v103; // r14
  _BYTE *v104; // r13
  char v105; // al
  __int64 v106; // rdi
  __int64 v107; // rcx
  __m128i v108; // xmm0
  __int64 v109; // rdi
  __int64 v110; // r12
  __int8 v111; // bl
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // r14
  char v115; // al
  char v116; // r15
  char v117; // r15
  __int64 v118; // rcx
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rcx
  _OWORD *v123; // r12
  __int64 v124; // rdx
  __int64 v125; // r8
  int v126; // ecx
  _BYTE *v127; // r14
  __int64 v128; // rdi
  __int64 v129; // rdx
  __int64 v130; // rbx
  __int64 v131; // rax
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r15
  __m128i v136; // xmm1
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rbx
  __int64 v142; // r14
  __int64 *v143; // rsi
  __int64 v144; // r12
  __int64 v145; // rdi
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int128 v150; // xmm0
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // r15
  __int64 v154; // r14
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rcx
  _QWORD *v160; // r14
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // r8
  _OWORD *v164; // rdx
  __int128 v165; // xmm0
  __m128i v166; // xmm1
  __int128 v167; // xmm2
  signed __int64 v168; // rdi
  __int64 v169; // r14
  __int64 v170; // r15
  signed __int64 v171; // rcx
  __int64 v172; // rsi
  void *v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rax
  char *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  _OWORD *v179; // rbx
  char *v180; // rsi
  char v181; // al
  __int64 v182; // rdx
  char result; // al
  __int64 v184; // r14
  __int64 v185; // r14
  __int64 v186; // rdi
  unsigned __int64 v187; // rax
  __int64 v188; // rcx
  char v189; // cl
  __int64 v190; // rbx
  __int64 v191; // r14
  __int64 v192; // rdx
  __int64 v193; // r14
  __int64 v194; // rax
  __int64 *v195; // r8
  __int64 v196; // rcx
  __int64 v197; // rbx
  __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  int v202; // edx
  int v203; // eax
  int v204; // edx
  __m128i v205; // xmm1
  __int128 v206; // xmm2
  __int128 v207; // xmm3
  __int128 v208; // xmm4
  __int128 v209; // xmm5
  __int128 v210; // xmm6
  __int64 v211; // r14
  unsigned __int8 *v212; // rax
  int v213; // r14d
  unsigned __int8 *v214; // rbx
  __int64 *v215; // rbx
  __int64 v216; // rcx
  char v217; // di
  __int64 v218; // rbx
  __int64 v219; // r12
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // rdx
  _OWORD *v223; // r15
  __int64 v224; // rbx
  __int64 v225; // rax
  __m128i v226; // xmm1
  __int64 v227; // rax
  __int64 v228; // r14
  _BYTE v229[152]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v230[152]; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v231[144]; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v232[144]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v233[5]; // [rsp+288h] [rbp+208h] BYREF
  char v234[144]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v235; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v236[3]; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v237; // [rsp+380h] [rbp+300h]
  __int64 v238; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i v239; // [rsp+3D8h] [rbp+358h]
  unsigned __int64 v240; // [rsp+3E8h] [rbp+368h]
  volatile signed __int64 *v241; // [rsp+3F0h] [rbp+370h] BYREF
  char v242[144]; // [rsp+3F8h] [rbp+378h] BYREF
  __int128 v243; // [rsp+488h] [rbp+408h] BYREF
  __int64 v244; // [rsp+498h] [rbp+418h]
  __int128 v245; // [rsp+4A0h] [rbp+420h]
  __m128i v246; // [rsp+4B0h] [rbp+430h] BYREF
  __m128i v247; // [rsp+4C0h] [rbp+440h] BYREF
  __m128i v248; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v249; // [rsp+4E0h] [rbp+460h]
  __int128 v250; // [rsp+4F0h] [rbp+470h]
  __int128 v251; // [rsp+500h] [rbp+480h]
  __m128i v252; // [rsp+510h] [rbp+490h]
  __int128 v253; // [rsp+520h] [rbp+4A0h]
  __m128i v254; // [rsp+800h] [rbp+780h]
  __int64 v255; // [rsp+810h] [rbp+790h]
  __m128i v256; // [rsp+820h] [rbp+7A0h] BYREF
  __m128i v257; // [rsp+830h] [rbp+7B0h] BYREF
  __int128 v258; // [rsp+8C0h] [rbp+840h] BYREF
  __m128i v259; // [rsp+8D0h] [rbp+850h]
  __int128 v260; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v261; // [rsp+8F0h] [rbp+870h]
  __int64 v262; // [rsp+8F8h] [rbp+878h]
  __int64 v263; // [rsp+908h] [rbp+888h]
  __int64 v264; // [rsp+910h] [rbp+890h]
  __int64 v265; // [rsp+920h] [rbp+8A0h]
  __int64 v266; // [rsp+928h] [rbp+8A8h]
  __int64 v267; // [rsp+938h] [rbp+8B8h]
  __int64 v268; // [rsp+940h] [rbp+8C0h]
  __int64 v269; // [rsp+950h] [rbp+8D0h]
  __int64 v270; // [rsp+958h] [rbp+8D8h]
  __int128 v271; // [rsp+970h] [rbp+8F0h] BYREF
  __m128i v272; // [rsp+980h] [rbp+900h] BYREF
  __int64 v273; // [rsp+990h] [rbp+910h]
  __int64 v274; // [rsp+A18h] [rbp+998h]
  __int64 v275; // [rsp+A20h] [rbp+9A0h]
  volatile signed __int64 *v276; // [rsp+A28h] [rbp+9A8h]
  __int64 v277; // [rsp+A30h] [rbp+9B0h]
  __int64 v278; // [rsp+A38h] [rbp+9B8h]
  _BYTE v279[96]; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v280; // [rsp+AA0h] [rbp+A20h]
  char v281[664]; // [rsp+AD8h] [rbp+A58h] BYREF
  __int64 v282; // [rsp+D70h] [rbp+CF0h]
  __int64 v283; // [rsp+D78h] [rbp+CF8h]
  __int64 v284; // [rsp+D88h] [rbp+D08h]
  __int64 v285; // [rsp+D90h] [rbp+D10h]
  __int64 v286; // [rsp+DB8h] [rbp+D38h]
  __m128i v287; // [rsp+DC0h] [rbp+D40h] BYREF
  __m128i v288; // [rsp+DD0h] [rbp+D50h] BYREF
  __int64 v289; // [rsp+DE0h] [rbp+D60h]
  _OWORD *v290; // [rsp+DE8h] [rbp+D68h]
  __int64 v291; // [rsp+DF0h] [rbp+D70h]
  __int64 v292; // [rsp+DF8h] [rbp+D78h]
  __int64 v293; // [rsp+E00h] [rbp+D80h]
  __int64 v294; // [rsp+E08h] [rbp+D88h]
  __int64 v295; // [rsp+E10h] [rbp+D90h]
  __int64 v296; // [rsp+E18h] [rbp+D98h]
  __int64 v297; // [rsp+E20h] [rbp+DA0h]
  __int64 v298; // [rsp+E28h] [rbp+DA8h]
  __m128i v299; // [rsp+E30h] [rbp+DB0h] BYREF
  __int64 v300; // [rsp+E40h] [rbp+DC0h]
  __m128i v301; // [rsp+E50h] [rbp+DD0h] BYREF
  __int64 v302; // [rsp+E60h] [rbp+DE0h]
  __int64 v303; // [rsp+E80h] [rbp+E00h]
  _OWORD *v304; // [rsp+E88h] [rbp+E08h]
  __int64 v305; // [rsp+E90h] [rbp+E10h]
  __int64 v306; // [rsp+E98h] [rbp+E18h]
  _OWORD *v307; // [rsp+EA0h] [rbp+E20h]
  __int64 v308; // [rsp+EA8h] [rbp+E28h]
  __int64 v309; // [rsp+EE8h] [rbp+E68h]
  __int64 v310; // [rsp+EF0h] [rbp+E70h]
  __int64 v311; // [rsp+EF8h] [rbp+E78h]
  __int64 v312; // [rsp+F00h] [rbp+E80h]
  _DWORD v313[2]; // [rsp+F08h] [rbp+E88h]
  __int64 v314; // [rsp+F18h] [rbp+E98h]
  __int64 v315; // [rsp+F20h] [rbp+EA0h]
  __int64 v316; // [rsp+F28h] [rbp+EA8h]
  __int64 v317; // [rsp+F30h] [rbp+EB0h]
  __int64 v318; // [rsp+F38h] [rbp+EB8h]
  __int64 v319; // [rsp+F40h] [rbp+EC0h] BYREF
  __m128i v320; // [rsp+F48h] [rbp+EC8h] BYREF
  __int64 v321; // [rsp+F58h] [rbp+ED8h]
  __int64 v322; // [rsp+F60h] [rbp+EE0h]
  __int64 v323; // [rsp+F68h] [rbp+EE8h]
  __int64 v324; // [rsp+F70h] [rbp+EF0h]
  __int64 v325; // [rsp+F78h] [rbp+EF8h]
  __int64 v326; // [rsp+F80h] [rbp+F00h]
  __int64 v327; // [rsp+F88h] [rbp+F08h]
  __int64 v328; // [rsp+F90h] [rbp+F10h]
  _BYTE v329[7]; // [rsp+F98h] [rbp+F18h]
  __int64 v330; // [rsp+FA0h] [rbp+F20h]
  __int64 v331; // [rsp+FA8h] [rbp+F28h]
  __int64 v332; // [rsp+FB0h] [rbp+F30h]
  __int64 v333; // [rsp+FB8h] [rbp+F38h]
  __int64 v334; // [rsp+FC0h] [rbp+F40h]
  __int64 v335; // [rsp+FC8h] [rbp+F48h]
  __m128i v336; // [rsp+FD0h] [rbp+F50h]
  __int64 v337; // [rsp+FE0h] [rbp+F60h]
  volatile signed __int64 *v338; // [rsp+FE8h] [rbp+F68h] BYREF
  volatile signed __int64 *v339; // [rsp+FF0h] [rbp+F70h] BYREF
  _DWORD v340[2]; // [rsp+FF8h] [rbp+F78h]
  _DWORD v341[2]; // [rsp+1000h] [rbp+F80h]
  _BYTE v342[7]; // [rsp+1008h] [rbp+F88h]
  __int64 v343; // [rsp+1010h] [rbp+F90h]
  _OWORD *v344; // [rsp+1018h] [rbp+F98h]
  __int64 v345; // [rsp+1020h] [rbp+FA0h]
  __int64 v346; // [rsp+1028h] [rbp+FA8h]
  __int64 v347; // [rsp+1030h] [rbp+FB0h]
  __int64 v348; // [rsp+1038h] [rbp+FB8h]
  __int64 v349; // [rsp+1040h] [rbp+FC0h]
  _OWORD *v350; // [rsp+1048h] [rbp+FC8h]
  __int64 v351; // [rsp+1050h] [rbp+FD0h]
  __int64 *v352; // [rsp+1058h] [rbp+FD8h]
  _QWORD *v353; // [rsp+1060h] [rbp+FE0h]
  _DWORD v354[2]; // [rsp+1068h] [rbp+FE8h]
  __int64 v355; // [rsp+1070h] [rbp+FF0h]
  _OWORD *v356; // [rsp+1078h] [rbp+FF8h]
  __int64 v357; // [rsp+1080h] [rbp+1000h]
  __int64 v358; // [rsp+1088h] [rbp+1008h]
  PVOID v359; // [rsp+1090h] [rbp+1010h]
  char v360; // [rsp+109Eh] [rbp+101Eh]
  char v361; // [rsp+109Fh] [rbp+101Fh]
  _OWORD *v362; // [rsp+10A0h] [rbp+1020h]
  _BYTE v363[7]; // [rsp+10A8h] [rbp+1028h]
  char v364; // [rsp+10AFh] [rbp+102Fh] BYREF
  __int64 v365; // [rsp+10B0h] [rbp+1030h]
  __m128i v366; // [rsp+10B8h] [rbp+1038h]
  __int64 v367; // [rsp+10C8h] [rbp+1048h]
  __int64 v368; // [rsp+10D0h] [rbp+1050h]
  __int64 v369; // [rsp+10D8h] [rbp+1058h]

  v369 = -2;
  v358 = a3;
  v4 = a2;
  v5 = *(unsigned __int8 *)(a2 + 3008);
  v368 = a2;
  v352 = a1;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2 + 1504;
      sub_141684120(a2 + 1504, a2, 1504);
      switch ( *(_BYTE *)(v4 + 3000) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_302;
        case 2:
          goto LABEL_301;
        case 3:
          goto LABEL_20;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3LL:
      v6 = a2 + 1504;
      switch ( *(_BYTE *)(a2 + 3000) )
      {
        case 0:
LABEL_4:
          *(_WORD *)(v4 + 3001) = 0;
          v7 = v4 + 1656;
          v317 = v6;
          sub_141684120(v4 + 1656, v6, 152);
          *(_QWORD *)(v4 + 1808) = _InterlockedExchangeAdd64(&qword_141EC2590, 1u);
          *(_QWORD *)v279 = 1;
          *(_QWORD *)&v279[8] = 1;
          *(_QWORD *)&v279[48] = 0;
          v279[56] = 0;
          nullsub_1(v8);
          v9 = sub_140001650(64, 8);
          if ( !v9 )
            sub_1416C2D31(8, 64);
          v12 = _mm_loadu_si128((const __m128i *)v279);
          v13 = _mm_loadu_si128((const __m128i *)&v279[16]);
          v14 = *(_OWORD *)&v279[32];
          *(_OWORD *)(v9 + 48) = *(_OWORD *)&v279[48];
          *(_OWORD *)(v9 + 32) = v14;
          *(__m128i *)(v9 + 16) = v13;
          *(__m128i *)v9 = v12;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v9) <= 0 )
            BUG();
          *(_BYTE *)(v4 + 3002) = 1;
          v339 = (volatile signed __int64 *)v9;
          *(_BYTE *)(v4 + 3001) = 1;
          v338 = (volatile signed __int64 *)v9;
          if ( dword_141EC2588 )
            sub_1416980E0();
          LOBYTE(v11) = 1;
          if ( _InterlockedCompareExchange8(&byte_141EC2560, 1, 0) )
            sub_1416C15B0(&byte_141EC2560);
          v15 = off_141EC90B8;
          if ( !(2 * *off_141EC90B8) )
          {
            v16 = 0;
            if ( byte_141EC2561 )
              goto LABEL_12;
LABEL_124:
            v29 = &byte_141EC2560;
            v30 = v368;
            if ( (_DWORD)qword_141EC2568 != 2 )
              goto LABEL_22;
            goto LABEL_125;
          }
          v16 = sub_1416C2250(v11, v10);
          LOBYTE(v16) = v16 ^ 1;
          if ( !byte_141EC2561 )
            goto LABEL_124;
LABEL_12:
          LODWORD(v367) = v16;
          v247.m128i_i64[0] = 0;
          v247.m128i_i64[1] = 1;
          v248.m128i_i64[0] = 0;
          *(_QWORD *)&v279[16] = 1610612768;
          *(_QWORD *)v279 = &v247;
          *(_QWORD *)&v279[8] = &off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, v279) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v364,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v366.m128i_i64[1] = v247.m128i_i64[1];
          v17 = v247.m128i_i64[0];
          LODWORD(v18) = v248.m128i_u8[0];
          v19 = v248.m128i_u8[7];
          v20 = *(unsigned __int16 *)((char *)&v248.m128i_u16[2] + 1);
          v21 = *(unsigned int *)((char *)v248.m128i_u32 + 1);
          if ( !(_BYTE)v367 && 2 * *v15 && !(unsigned __int8)sub_1416C2250(v11, v10) )
            byte_141EC2561 = 1;
          v22 = byte_141EC2560;
          byte_141EC2560 = 0;
          if ( v22 == 2 )
            WakeByAddressSingle(&byte_141EC2560);
          if ( v17 != -1 )
          {
            v23 = ((unsigned __int64)((v19 << 16) | v20) << 32) | v21;
            v24 = v338;
            if ( !v338 )
              goto LABEL_36;
            goto LABEL_27;
          }
          v29 = (char *)v366.m128i_i64[1];
          v16 = v18;
          v30 = v368;
          if ( *(_DWORD *)(v366.m128i_i64[1] + 8) != 2 )
          {
LABEL_22:
            nullsub_1(v11);
            v31 = sub_140001650(72, 1);
            if ( !v31 )
            {
              v366.m128i_i64[1] = (__int64)v29;
              LODWORD(v367) = v16;
              sub_1416C2D4B(1, 72);
            }
            *(_OWORD *)(v31 + 48) = xmmword_1417BAE28;
            *(_OWORD *)(v31 + 32) = xmmword_1417BAE18;
            *(_OWORD *)(v31 + 16) = xmmword_1417BAE08;
            *(__m128i *)v31 = _mm_loadu_si128((const __m128i *)&xmmword_1417BADF8);
            v366.m128i_i64[1] = v31;
            *(_QWORD *)(v31 + 64) = 0x8280E395AFE88D86uLL;
            if ( (v16 & 1) == 0 && 2 * *v15 && !(unsigned __int8)sub_1416C2250(0x8280E395AFE88D86uLL, v32) )
              v29[1] = 1;
            v33 = *v29;
            *v29 = 0;
            v23 = 0;
            LOBYTE(v18) = 72;
            v17 = 72;
            if ( v33 == 2 )
            {
              WakeByAddressSingle(v29);
              v23 = 0;
              v24 = v338;
              if ( !v338 )
                goto LABEL_36;
            }
            else
            {
              v24 = v338;
              if ( !v338 )
              {
LABEL_36:
                *(_BYTE *)(v368 + 3001) = 0;
                v37 = v339;
                if ( v339 )
                {
                  if ( (sub_1412F1370(v339 + 6) & 5) == 1 )
                    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v37 + 4) + 16LL))(*((_QWORD *)v37 + 5));
                  if ( v339 && !_InterlockedDecrement64(v339) )
                    sub_1412E8E40(&v339);
                }
                *(_BYTE *)(v368 + 3002) = 0;
                sub_140014150(v7);
                v38 = -1;
LABEL_233:
                v185 = v23 << 8;
                v186 = v185 | (unsigned __int8)v18;
                sub_141684120(v232, v231, 144);
                v52 = v368;
                *(_BYTE *)(v368 + 3000) = 1;
                if ( v38 != -1 )
                {
                  sub_141684120(v234, v232, 144);
                  v233[0] = v38;
                  v233[1] = v17;
                  v233[2] = v366.m128i_i64[1];
                  v233[3] = v186;
                  v233[4] = v37;
                  sub_140B05580(v279, v233);
                  v187 = ((unsigned __int64)((v279[15] << 16) | (unsigned int)*(unsigned __int16 *)&v279[13]) << 32)
                       | *(unsigned int *)&v279[9];
                  v189 = v279[8];
                  v190 = *(_QWORD *)&v279[24];
                  v191 = *(_QWORD *)&v279[16];
                  v186 = *(_QWORD *)&v279[32];
                  if ( *(_QWORD *)v279 == -1 )
                  {
                    v192 = 0;
                  }
                  else
                  {
                    v279[15] = (((unsigned __int64)((v279[15] << 16) | (unsigned int)*(unsigned __int16 *)&v279[13]) << 32)
                              | *(unsigned int *)&v279[9]) >> 48;
                    *(_WORD *)&v279[13] = WORD2(v187);
                    *(_DWORD *)&v279[9] = v187;
                    v238 = 0;
                    v239 = (__m128i)1uLL;
                    v248.m128i_i64[0] = 1610612768;
                    v247.m128i_i64[0] = (__int64)&v238;
                    v247.m128i_i64[1] = (__int64)&off_1417C41C0;
                    if ( (unsigned __int8)sub_141230630(v279, &v247, *(_QWORD *)&v279[40]) )
                      sub_1416C3060(
                        (unsigned int)aADisplayImplem_11,
                        55,
                        (unsigned int)&v364,
                        (unsigned int)&unk_1417BC180,
                        (__int64)&off_1417C4278);
                    v191 = v238;
                    v186 = v239.m128i_i64[1];
                    v190 = v239.m128i_i64[0];
                    v187 = sub_140BF0F60(v279);
                    v192 = 1;
                    v189 = 3;
                  }
                  v52 = v368;
                  goto LABEL_247;
                }
                if ( v185 < 0 )
                {
                  v193 = 0;
                  goto LABEL_239;
                }
                if ( v186 )
                {
                  nullsub_1(v188);
                  v193 = 1;
                  v194 = sub_140001650(v186, 1);
                  if ( !v194 )
                  {
LABEL_239:
                    v366.m128i_i64[0] = v17;
                    sub_1416C2D4B(v193, v186);
                  }
                  v190 = v194;
                  sub_141684120(v194, v366.m128i_i64[1], v186);
                  if ( !v17 )
                  {
LABEL_246:
                    v192 = 1;
                    v189 = 3;
                    v191 = v186;
LABEL_247:
                    v195 = v352;
                    *v352 = v192;
                    *((_BYTE *)v195 + 8) = v189;
                    *(_DWORD *)((char *)v195 + 9) = v187;
                    *((_BYTE *)v195 + 15) = BYTE6(v187);
                    *(_WORD *)((char *)v195 + 13) = WORD2(v187);
                    v195[2] = v191;
                    v195[3] = v190;
                    v195[4] = v186;
                    result = 1;
                    goto LABEL_248;
                  }
                }
                else
                {
                  v190 = 1;
                  if ( !v17 )
                    goto LABEL_246;
                }
                v187 = sub_140001660(v366.m128i_i64[1], v17, 1);
                goto LABEL_246;
              }
            }
LABEL_27:
            v34 = _InterlockedOr64(v24 + 6, 4u);
            if ( (v34 & 0xA) == 8 )
            {
              v35 = v34;
              (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v24 + 2) + 16LL))(*((_QWORD *)v24 + 3));
              v34 = v35;
            }
            if ( (v34 & 3) == 1 )
            {
              _InterlockedAnd64(v24 + 6, 0xFFFFFFFFFFFFFFFEuLL);
              v36 = v34;
              sub_1412F0A10(v24 + 4);
              v34 = v36;
            }
            if ( (v34 & 2) != 0 )
              *((_BYTE *)v24 + 56) = 0;
            if ( v338 && !_InterlockedDecrement64(v338) )
              sub_1412E8E40(&v338);
            goto LABEL_36;
          }
LABEL_125:
          LODWORD(v367) = v16;
          v81 = *(_QWORD *)(v30 + 1808);
          v366.m128i_i64[0] = v81;
          *(_BYTE *)(v30 + 3002) = 0;
          v359 = (PVOID)v339;
          v82 = *((_DWORD *)v29 + 2) == 1;
          v366.m128i_i64[1] = (__int64)v29;
          if ( v82 )
          {
            v83 = *(_QWORD *)(v366.m128i_i64[1] + 16);
            if ( v83 )
            {
              v365 = v366.m128i_i64[1] + 16;
              if ( (sub_1412F1370(v83 + 48) & 5) == 1 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v83 + 32) + 16LL))(*(_QWORD *)(v83 + 40));
              v81 = v365;
              if ( *(_QWORD *)v365 && !_InterlockedDecrement64(*(volatile signed __int64 **)v365) )
                sub_1412E8E40(v81);
            }
          }
          v84 = (_QWORD *)v366.m128i_i64[1];
          *(_QWORD *)(v366.m128i_i64[1] + 8) = 1;
          v84[2] = v359;
          v84[3] = v366.m128i_i64[0];
          *((_WORD *)v84 + 16) = 0;
          if ( (v367 & 1) == 0 && 2 * *v15 && !(unsigned __int8)sub_1416C2250(v81, v10) )
            *((_BYTE *)v84 + 1) = 1;
          v85 = *(_BYTE *)v84;
          *(_BYTE *)v84 = 0;
          if ( v85 == 2 )
            WakeByAddressSingle(v84);
          v4 = v368;
          v27 = *(_QWORD *)(v368 + 1808);
          *(_BYTE *)(v368 + 3001) = 0;
          v28 = v338;
          *(_QWORD *)(v4 + 1864) = v27;
          *(_QWORD *)(v4 + 1872) = v28;
          *(_QWORD *)(v4 + 1944) = v7;
          v25 = (void *)(v4 + 1962);
          *(_BYTE *)(v4 + 1962) = 0;
          v26 = v4 + 1816;
LABEL_137:
          *(_WORD *)(v4 + 1960) = 0;
          *(_QWORD *)(v4 + 1952) = 0;
          *(_QWORD *)(v4 + 1880) = v7;
          *(_QWORD *)(v4 + 1888) = v27;
          *(_BYTE *)(v4 + 1961) = 1;
          v276 = v28;
          v296 = v26;
          sub_1403C4600(v26);
          *(_BYTE *)(v368 + 1960) = 1;
          v367 = v26;
          v316 = v26;
          sub_141356270(&v258);
          v247.m128i_i64[0] = 0;
          v247.m128i_i64[1] = 1;
          v248.m128i_i64[0] = 0;
          *(_QWORD *)&v279[16] = 1610612768;
          *(_QWORD *)v279 = &v247;
          *(_QWORD *)&v279[8] = &off_141754110;
          if ( (unsigned __int8)sub_1413567D0(&v258, v279) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_1,
              55,
              (unsigned int)&v364,
              (unsigned int)&unk_14174DE40,
              (__int64)&off_1417541C8);
          v359 = v25;
          v86 = v368;
          v87 = (__m128i *)(v368 + 1896);
          *(_QWORD *)(v368 + 1912) = v248.m128i_i64[0];
          *v87 = _mm_loadu_si128(&v247);
          *(_BYTE *)(v86 + 1959) = 1;
          v88 = *(_QWORD *)(v86 + 1848);
          v89 = *(_QWORD *)(v86 + 1856);
          v90 = *(_QWORD *)(v86 + 1904);
          v91 = *(_QWORD *)(v86 + 1912);
          v92 = v367;
          v295 = v367;
          sub_1403C4E10((__int64)&v243, v88, v89, v90, v91);
          v93 = v368;
          *(_BYTE *)(v368 + 1960) = 0;
          *(_BYTE *)(v93 + 1954) = 1;
          *(_OWORD *)(v93 + 1968) = *(_OWORD *)v92;
          *(_QWORD *)(v93 + 1984) = *(_QWORD *)(v92 + 16);
          *(_BYTE *)(v93 + 1959) = 0;
          *(_QWORD *)&v279[16] = v87[1].m128i_i64[0];
          *(__m128i *)v279 = *v87;
          *(_BYTE *)(v93 + 1961) = 0;
          *(_OWORD *)&v279[24] = v243;
          *(_QWORD *)&v279[40] = v244;
          v94 = *(_OWORD *)v279;
          v258 = *(_OWORD *)v279;
          si128 = _mm_load_si128((const __m128i *)&v279[16]);
          v259 = si128;
          v260 = *(_OWORD *)&v279[32];
          *(_OWORD *)(v93 + 2024) = *(_OWORD *)&v279[32];
          *(__m128i *)(v93 + 2008) = si128;
          *(_OWORD *)(v93 + 1992) = v94;
          *(_QWORD *)(v93 + 2040) = v28;
          v96 = (_BYTE *)(v93 + 2120);
          *(_BYTE *)(v93 + 2120) = 0;
          *(_QWORD *)(v93 + 2122) = 0;
          *(_DWORD *)(v93 + 2129) = 0;
          *(_BYTE *)(v93 + 2125) = 1;
          *(_OWORD *)(v93 + 2136) = *(_OWORD *)(v93 + 1992);
          *(_QWORD *)(v93 + 2152) = *(_QWORD *)(v93 + 2008);
          *(__m128i *)(v93 + 2048) = _mm_loadu_si128((const __m128i *)(v93 + 2016));
          *(_QWORD *)(v93 + 2064) = *(_QWORD *)(v93 + 2032);
          *(_BYTE *)(v93 + 2124) = 1;
          *(_QWORD *)(v93 + 2160) = v28;
          v362 = (_OWORD *)(v93 + 2168);
          *(_QWORD *)(v93 + 2168) = a1270011455;
          *(_QWORD *)(v93 + 2176) = 14;
          *(_BYTE *)(v93 + 2216) = 0;
          v367 = v92;
          v337 = v92;
          v336.m128i_i64[1] = v93 + 1992;
          v366.m128i_i64[0] = v93 + 2216;
          v336.m128i_i64[0] = v93 + 2216;
          sub_14130C2A0(&v247, a1270011455, 14);
          v366.m128i_i64[1] = v93 + 1992;
          v97 = _mm_loadu_si128(&v247);
          v257 = _mm_loadu_si128(&v248);
          v256 = v97;
          v98 = v368;
          *(__m128i *)(v368 + 2200) = v257;
          *(__m128i *)(v98 + 2184) = v97;
          v365 = v98 + 2184;
          sub_1412E76A0(&v247, v98 + 2184, v358);
          v99 = v247.m128i_i32[0];
          if ( v247.m128i_i32[0] == -1 )
          {
            *(_BYTE *)v366.m128i_i64[0] = 3;
            v105 = 3;
LABEL_145:
            v52 = v368;
            *v96 = v105;
            v104 = v359;
LABEL_146:
            *v104 = 3;
            goto LABEL_231;
          }
          v100 = v247.m128i_i32[1];
          v101 = v247.m128i_i64[1];
          v287 = _mm_loadu_si128(&v248);
          v288.m128i_i64[0] = v249;
          v102 = v366.m128i_i64[1];
          if ( *(_WORD *)v365 == 0xFFFF )
          {
            v103 = *(_QWORD *)(v368 + 2192);
            v337 = v367;
            v336 = v366;
            if ( (unsigned __int8)sub_1412F2A80(v103) )
            {
              v337 = v367;
              v336.m128i_i64[1] = v102;
              v336.m128i_i64[0] = v366.m128i_i64[0];
              sub_1412E7580(v103);
            }
          }
          if ( v99 == 2 )
          {
            v104 = v359;
LABEL_157:
            v302 = *(_QWORD *)&v279[32];
            v301 = *(__m128i *)&v279[16];
            *(_BYTE *)v366.m128i_i64[0] = 1;
            v299 = _mm_load_si128(&v301);
            v300 = v302;
            v366.m128i_i64[0] = v101;
            v256.m128i_i64[0] = v101;
            v247.m128i_i64[0] = 0;
            v247.m128i_i64[1] = 1;
            v248.m128i_i64[0] = 0;
            *(_QWORD *)&v279[16] = 1610612768;
            *(_QWORD *)v279 = &v247;
            *(_QWORD *)&v279[8] = &off_1417C41C0;
            if ( (unsigned __int8)sub_141490720(&v256, v279) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v364,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v110 = v247.m128i_i64[1];
            v365 = v247.m128i_i64[0];
            v111 = v248.m128i_i8[0];
            LODWORD(v330) = *(__int32 *)((char *)v248.m128i_i32 + 1);
            *(_DWORD *)((char *)&v330 + 3) = v248.m128i_i32[1];
            v57 = v367;
            v335 = v367;
            v334 = v366.m128i_i64[1];
            sub_1401DD260(v366.m128i_i64[0]);
            v354[0] = v330;
            *(_DWORD *)((char *)v354 + 3) = *(_DWORD *)((char *)&v330 + 3);
            v112 = 0;
            goto LABEL_159;
          }
          v365 = (__int64)v96;
          *(_QWORD *)&v249 = v288.m128i_i64[0];
          v248 = _mm_load_si128(&v287);
          v247.m128i_i64[0] = __PAIR64__(v100, v99);
          v247.m128i_i64[1] = v101;
          v106 = 0;
          while ( 1 )
          {
            v101 = v106;
            v311 = v106;
            sub_1412E7B60(&v319, &v247);
            if ( (_WORD)v319 == 2 )
            {
              if ( v247.m128i_i32[0] && v248.m128i_i64[1] )
                sub_140001660(v247.m128i_i64[1], 32 * v248.m128i_i64[1], 4);
              v104 = v359;
              if ( !v106 )
              {
                v294 = 0;
                v361 = 0;
                LOBYTE(v107) = 20;
                v101 = sub_14146B840(v107, aCouldNotResolv_3, 32);
              }
              goto LABEL_157;
            }
            v108 = _mm_loadu_si128((const __m128i *)&v319);
            v257 = _mm_loadu_si128((const __m128i *)&v320.m128i_u64[1]);
            v256 = v108;
            v311 = v106;
            sub_1413064D0((__int64)v279);
            v109 = *(_QWORD *)v279;
            if ( *(_QWORD *)v279 != 2 )
              break;
            v106 = *(_QWORD *)&v279[8];
            if ( v101 )
            {
              v311 = *(_QWORD *)&v279[8];
              sub_1401DD260(v101);
            }
          }
          if ( v247.m128i_i32[0] && v248.m128i_i64[1] )
            sub_140001660(v247.m128i_i64[1], 32 * v248.m128i_i64[1], 4);
          v130 = v366.m128i_i64[1];
          v96 = (_BYTE *)v365;
          if ( v101 )
          {
            v337 = v367;
            v336 = v366;
            sub_1401DD260(v101);
          }
          v131 = *(_QWORD *)&v279[8];
          v301 = *(__m128i *)&v279[16];
          v302 = *(_QWORD *)&v279[32];
          v132 = v368;
          *(_BYTE *)(v368 + 2216) = 1;
          v299 = v301;
          v300 = v302;
          v272 = v301;
          v273 = v302;
          *(_BYTE *)(v132 + 2132) = 1;
          *(_QWORD *)&v271 = v109;
          *((_QWORD *)&v271 + 1) = v131;
          v133 = *(_QWORD *)(v132 + 2056);
          v134 = *(_QWORD *)(v132 + 2064);
          v135 = v367;
          v326 = v367;
          v325 = v130;
          sub_1403C4700(&v247, v133, v134);
          if ( v247.m128i_i32[0] == -1 )
          {
            v326 = v135;
            v325 = v366.m128i_i64[1];
            v139 = sub_1407DC220(&off_1417BA940);
            v141 = v140;
            v275 = v139;
            v142 = v368;
            *(_BYTE *)(v368 + 2130) = 1;
            v274 = v140;
            *(_BYTE *)(v142 + 2125) = 0;
            v143 = *(__int64 **)(v142 + 2136);
            v144 = *(_QWORD *)(v142 + 2144);
            v145 = *(_QWORD *)(v142 + 2152);
            *(_BYTE *)(v142 + 2131) = 0;
            *(_QWORD *)v279 = 1;
            *(_QWORD *)&v279[8] = 1;
            *(_WORD *)&v279[16] = 0;
            *(_QWORD *)&v279[24] = 1;
            *(_QWORD *)&v279[32] = v139;
            nullsub_1(v146);
            v147 = sub_140001650(40, 8);
            if ( !v147 )
            {
              v358 = v144;
              v352 = v143;
              sub_1416C2D31(8, 40);
            }
            v149 = *(_QWORD *)&v279[32];
            *(_QWORD *)(v147 + 32) = *(_QWORD *)&v279[32];
            v150 = *(_OWORD *)v279;
            *(__m128i *)(v147 + 16) = _mm_loadu_si128((const __m128i *)&v279[16]);
            *(_OWORD *)v147 = v150;
            *(_BYTE *)(v142 + 2129) = 1;
            v256.m128i_i64[0] = (__int64)v143;
            v256.m128i_i64[1] = v144;
            v257.m128i_i64[0] = v145;
            v257.m128i_i64[1] = v147;
            v328 = v135;
            v327 = v366.m128i_i64[1];
            v247.m128i_i64[0] = sub_14056E1C0(v149, v148);
            v360 = 1;
            v366.m128i_i64[0] = v247.m128i_i64[0];
            sub_140B573C0(v279);
            v360 = 0;
            v151 = sub_14056E680(
                     v366.m128i_i32[0],
                     (unsigned int)aAuthCallback,
                     14,
                     (unsigned int)v279,
                     (__int64)&off_1417BA968);
            *(_BYTE *)(v368 + 2129) = 0;
            *(__m128i *)&v279[16] = _mm_loadu_si128(&v257);
            *(__m128i *)v279 = v256;
            v152 = v367;
            v328 = v367;
            v153 = v366.m128i_i64[1];
            v327 = v366.m128i_i64[1];
            v154 = sub_1404F1A70(v151, v279);
            v330 = v154;
            *(_BYTE *)(v368 + 2128) = 1;
            v293 = v152;
            v292 = v153;
            v155 = sub_1407DC2F0(&off_1417BA980);
            v156 = v368;
            *(_BYTE *)(v368 + 2123) = 1;
            *(_QWORD *)(v156 + 2072) = v155;
            v301.m128i_i64[0] = v157;
            *(_BYTE *)(v156 + 2132) = 0;
            *(_WORD *)(v156 + 2127) = 0;
            *(_QWORD *)&v279[32] = v273;
            *(__m128i *)&v279[16] = _mm_loadu_si128(&v272);
            *(_OWORD *)v279 = v271;
            *(_QWORD *)&v279[40] = v154;
            *(_QWORD *)&v279[48] = v157;
            v279[72] = 0;
            v310 = v152;
            v309 = v153;
            v158 = sub_14054E090(v279, &off_1417BA998);
            v159 = v368;
            *(_QWORD *)(v368 + 2080) = v158;
            *(_BYTE *)(v159 + 2122) = 1;
            *(_BYTE *)(v159 + 2121) = 0;
            *(_BYTE *)(v159 + 2130) = 0;
            v287.m128i_i64[0] = v141;
            *(_BYTE *)(v159 + 2124) = 0;
            v319 = *(_QWORD *)(v159 + 2160);
            sub_1412F1530(&v247, 300, 0, &off_1417BA9B0);
            v160 = (_QWORD *)v368;
            v161 = v368 + 2152;
            v162 = v368 + 2121;
            v163 = v319;
            v280 = v253;
            *(__m128i *)&v279[80] = v252;
            *(_OWORD *)&v279[64] = v251;
            *(_OWORD *)&v279[48] = v250;
            *(_OWORD *)&v279[32] = v249;
            *(__m128i *)&v279[16] = v248;
            *(__m128i *)v279 = v247;
            *(_QWORD *)(v368 + 2152) = v287.m128i_i64[0];
            v160[270] = v163;
            v164 = v362;
            v362[6] = v280;
            v164[5] = *(_OWORD *)&v279[80];
            v164[4] = *(_OWORD *)&v279[64];
            v165 = *(_OWORD *)v279;
            v166 = _mm_load_si128((const __m128i *)&v279[16]);
            v167 = *(_OWORD *)&v279[32];
            v164[3] = *(_OWORD *)&v279[48];
            v164[2] = v167;
            v164[1] = v166;
            *v164 = v165;
            v160[267] = v162;
            v160[268] = v161;
            sub_140890D90(v279, v160 + 267, v358);
            v168 = *(_QWORD *)v279;
            if ( *(_QWORD *)v279 == -3 )
            {
              v105 = 4;
              goto LABEL_145;
            }
            v245 = *(_OWORD *)&v279[8];
            v169 = v367;
            v333 = v367;
            v170 = v366.m128i_i64[1];
            v332 = v366.m128i_i64[1];
            sub_140BF37D0(v368 + 2152);
            v171 = 0;
            if ( v168 < (__int64)0x8000000000000003uLL )
              v171 = v168 - 0x7FFFFFFFFFFFFFFFLL;
            switch ( v171 )
            {
              case 0LL:
                v172 = v368;
                if ( v168 == -2 )
                {
                  nullsub_1(v171);
                  v173 = (void *)sub_140001650(23, 1);
                  if ( !v173 )
                  {
                    v333 = v169;
                    v332 = v170;
                    sub_1416C2D4B(1, 23);
                  }
                  qmemcpy(v173, "callback channel closed", 23);
                  *(_QWORD *)(v172 + 2088) = 3;
                  *(_QWORD *)(v172 + 2096) = 23;
                  *(_QWORD *)(v172 + 2104) = v173;
                  *(_QWORD *)(v172 + 2112) = 23;
                }
                else
                {
                  *(_QWORD *)(v368 + 2096) = v168;
                  *(_OWORD *)(v172 + 2104) = v245;
                  *(_QWORD *)(v172 + 2088) = -1;
                }
                *(_BYTE *)(v172 + 2126) = 1;
                break;
              case 1LL:
                v172 = v368;
                *(_BYTE *)(v368 + 2126) = 1;
                *(_QWORD *)(v172 + 2088) = 1;
                break;
              case 2LL:
                v172 = v368;
                *(_BYTE *)(v368 + 2126) = 1;
                *(_QWORD *)(v172 + 2088) = 2;
                break;
              case 3LL:
                v333 = v169;
                v332 = v170;
                sub_1416C32C0("all branches are disabled and there is no else branch", 107, &off_1417BA9E0);
            }
            *(_BYTE *)(v172 + 2123) = 0;
            v196 = *(_QWORD *)(v172 + 2072);
            v315 = v169;
            v314 = v170;
            sub_140844000(v196);
            v197 = *(_QWORD *)(v368 + 2080);
            v315 = v169;
            v314 = v170;
            sub_1412E75B0(v197);
            v198 = v368;
            *(_QWORD *)(v368 + 2136) = v197;
            *(_BYTE *)(v198 + 2122) = 0;
            v366.m128i_i64[0] = *(_QWORD *)(v198 + 2080);
            *(_QWORD *)v279 = sub_141302E80(v200, v199, v201);
            *(_DWORD *)&v279[8] = v202;
            v203 = sub_141302E60(v279, 2, 0);
            if ( v204 == -1 )
              sub_1412F0A30(v279, 0, 0xFFFFFFFFLL);
            else
              sub_1412F0B20((unsigned int)v279, v203, v204, 0, (__int64)&off_1417BA9C8);
            v253 = v280;
            v205 = _mm_loadu_si128((const __m128i *)&v279[80]);
            v252 = v205;
            v206 = *(_OWORD *)&v279[64];
            v251 = *(_OWORD *)&v279[64];
            v207 = *(_OWORD *)v279;
            v208 = *(_OWORD *)&v279[16];
            v209 = *(_OWORD *)&v279[32];
            v210 = *(_OWORD *)&v279[48];
            v250 = *(_OWORD *)&v279[48];
            v249 = *(_OWORD *)&v279[32];
            v248 = *(__m128i *)&v279[16];
            v247 = *(__m128i *)v279;
            v211 = v368;
            *(_OWORD *)(v368 + 2240) = v280;
            *(__m128i *)(v211 + 2224) = v205;
            *(_OWORD *)(v211 + 2208) = v206;
            *(_OWORD *)(v211 + 2192) = v210;
            *(_OWORD *)(v211 + 2176) = v209;
            *(_OWORD *)(v211 + 2160) = v208;
            *(_OWORD *)(v211 + 2144) = v207;
            *(_QWORD *)(v211 + 2256) = v366.m128i_i64[0];
            v366.m128i_i64[0] = v211 + 2144;
            v212 = (unsigned __int8 *)sub_1412F09C0();
            v213 = v212[72];
            if ( v213 != 1 )
            {
              if ( v213 == 2 )
                goto LABEL_262;
              v214 = v212;
              sub_14148BBF0(v212, sub_140B82FF0);
              v212 = v214;
              v214[72] = 1;
            }
            LOBYTE(v213) = sub_1412F0A20(v212[68], v212[69]);
LABEL_262:
            v215 = (__int64 *)(v368 + 2256);
            sub_140B03470(v279, v368 + 2256, v358);
            v217 = v279[0];
            if ( *(_QWORD *)v279 == 1 )
            {
              LOBYTE(v216) = v213 & 1 | ((_BYTE)v213 == 2);
              if ( (unsigned __int8)sub_141309ED0(v216, v366.m128i_i64[0], v358) )
              {
                v105 = 5;
                goto LABEL_145;
              }
            }
            else
            {
              v96 = *(_BYTE **)&v279[24];
              v172 = *(_QWORD *)&v279[16];
              LOBYTE(v213) = *(_QWORD *)&v279[8] == 0;
            }
            v218 = *v215;
            if ( (unsigned __int8)sub_1412F2A80(v218) )
              sub_1412E7580(v218);
            v57 = v367;
            v348 = v367;
            v219 = v366.m128i_i64[1];
            v347 = v366.m128i_i64[1];
            sub_14052DE20(v366.m128i_i64[0]);
            if ( v217 )
            {
              v348 = v57;
              v347 = v219;
              sub_1412E75E0(v368 + 2136);
            }
            else if ( !((v172 == 0) | v213 & 1) )
            {
              v366.m128i_i64[0] = v172;
              v365 = (__int64)v96;
              if ( *(_QWORD *)v96 )
                (*(void (__fastcall **)(__int64))v96)(v366.m128i_i64[0]);
              v220 = *(_QWORD *)(v365 + 8);
              v57 = v367;
              v219 = v366.m128i_i64[1];
              if ( v220 )
                sub_140001660(v366.m128i_i64[0], v220, *(_QWORD *)(v365 + 16));
            }
            v221 = v368;
            *(_BYTE *)(v368 + 2126) = 0;
            v112 = *(_QWORD *)(v221 + 2088);
            v365 = *(_QWORD *)(v221 + 2096);
            v362 = *(_OWORD **)(v221 + 2104);
            v111 = *(_BYTE *)(v221 + 2112);
            v354[0] = *(_DWORD *)(v221 + 2113);
            *(_DWORD *)((char *)v354 + 3) = *(_DWORD *)(v221 + 2116);
            v315 = v57;
            v314 = v219;
            sub_1412FC460(v221 + 2136);
            v52 = v368;
            *(_BYTE *)(v368 + 2122) = 0;
            *(_BYTE *)(v52 + 2123) = 0;
            *(_DWORD *)(v52 + 2126) = 0;
            *(_BYTE *)(v52 + 2130) = 0;
            *(_BYTE *)(v52 + 2131) = 0;
            *(_BYTE *)(v52 + 2132) = 0;
            *(_BYTE *)(v52 + 2124) = 0;
            v222 = *(_QWORD *)(v52 + 2048);
            if ( v222 )
              sub_140001660(*(_QWORD *)(v52 + 2056), v222, 1);
            *(_BYTE *)(v52 + 2125) = 0;
            *(_DWORD *)&v329[3] = *(_DWORD *)((char *)v354 + 3);
            *(_DWORD *)v329 = v354[0];
            *(_BYTE *)(v52 + 2120) = 1;
            v104 = v359;
            if ( v112 != -2 )
              goto LABEL_174;
            goto LABEL_146;
          }
          *(__m128i *)&v279[80] = v252;
          *(_OWORD *)&v279[64] = v251;
          v136 = _mm_loadu_si128(&v248);
          *(_OWORD *)&v279[48] = v250;
          *(_OWORD *)&v279[32] = v249;
          *(__m128i *)&v279[16] = v136;
          *(__m128i *)v279 = v247;
          v319 = 0;
          v320 = (__m128i)1uLL;
          v257.m128i_i64[0] = 1610612768;
          v256.m128i_i64[0] = (__int64)&v319;
          v256.m128i_i64[1] = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_140B036A0(v279, &v256) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v364,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v110 = v320.m128i_i64[0];
          v365 = v319;
          v111 = v320.m128i_i8[8];
          v354[0] = *(__int32 *)((char *)&v320.m128i_i32[2] + 1);
          *(_DWORD *)((char *)v354 + 3) = v320.m128i_i32[3];
          v57 = v367;
          v326 = v367;
          v325 = v366.m128i_i64[1];
          sub_140BF2F60(&v247);
          v335 = v57;
          v334 = v366.m128i_i64[1];
          v112 = 3;
          sub_140BA6D90(&v271);
          v104 = v359;
LABEL_159:
          v113 = v368;
          *(_BYTE *)(v368 + 2132) = 0;
          v114 = *(_QWORD *)(v113 + 2160);
          if ( v114 )
          {
            v366.m128i_i64[0] = v368 + 2160;
            v115 = _InterlockedOr64((volatile signed __int64 *)(v114 + 48), 4u);
            if ( (v115 & 0xA) == 8 )
            {
              v116 = v115;
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v114 + 16) + 16LL))(*(_QWORD *)(v114 + 24));
              v115 = v116;
            }
            if ( (v115 & 3) == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v114 + 48), 0xFFFFFFFFFFFFFFFEuLL);
              v117 = v115;
              sub_1412F0A10(v114 + 32);
              v115 = v117;
            }
            if ( (v115 & 2) != 0 )
              *(_BYTE *)(v114 + 56) = 0;
            v118 = v366.m128i_i64[0];
            v57 = v367;
            if ( *(_QWORD *)v366.m128i_i64[0]
              && !_InterlockedDecrement64(*(volatile signed __int64 **)v366.m128i_i64[0]) )
            {
              v324 = v57;
              v323 = v366.m128i_i64[1];
              sub_1412E8E40(v118);
            }
          }
          v119 = v368;
          *(_BYTE *)(v368 + 2124) = 0;
          v120 = *(_QWORD *)(v119 + 2048);
          if ( v120 )
            sub_140001660(*(_QWORD *)(v119 + 2056), v120, 1);
          v362 = (_OWORD *)v110;
          v121 = *(_QWORD *)(v119 + 2136);
          if ( v121 )
            sub_140001660(*(_QWORD *)(v119 + 2144), v121, 1);
          *(_BYTE *)(v119 + 2125) = 0;
          *(_DWORD *)&v329[3] = *(_DWORD *)((char *)v354 + 3);
          *(_DWORD *)v329 = v354[0];
          *(_BYTE *)(v119 + 2120) = 1;
LABEL_174:
          *(_DWORD *)&v342[3] = *(_DWORD *)&v329[3];
          *(_DWORD *)v342 = *(_DWORD *)v329;
          v346 = v57;
          sub_140BE87A0(v366.m128i_i64[1]);
          v123 = v362;
          if ( v112 == -1 )
          {
            v124 = v368;
            *(_BYTE *)(v368 + 1958) = 1;
            v125 = v365;
            *(_QWORD *)(v124 + 1920) = v365;
            *(_QWORD *)(v124 + 1928) = v123;
            *(_BYTE *)(v124 + 1936) = v111;
            v126 = *(_DWORD *)&v342[3];
            *(_DWORD *)(v124 + 1937) = *(_DWORD *)v342;
            *(_DWORD *)(v124 + 1940) = v126;
            if ( v125 == -1 )
            {
              if ( (_BYTE)v123 )
              {
                v322 = v57;
                if ( (unsigned __int8)v123 == 1 )
                  sub_140D3E910(v279, aOpenai_2, 43);
                else
                  sub_140D3E910(v279, asc_1417BAD54, 39);
              }
              else
              {
                v322 = v57;
                sub_140D3E910(v279, aOauthCancelled, 41);
              }
              v366 = *(__m128i *)v279;
              v47 = v279[16];
              *(_DWORD *)v363 = *(_DWORD *)&v279[17];
              *(_DWORD *)&v363[3] = *(_DWORD *)&v279[20];
              v52 = v368;
              goto LABEL_225;
            }
            v127 = v104;
            *(_BYTE *)(v124 + 1958) = 0;
            v128 = *(_QWORD *)(v124 + 1936);
            *(_BYTE *)(v124 + 1953) = 1;
            v129 = *(_QWORD *)(v124 + 1888);
            v351 = v125;
            v350 = v123;
            v349 = v57;
            LOBYTE(v125) = 1;
            sub_1406B1560(v279, v129, v125);
            if ( *(_QWORD *)v279 != -1 )
            {
              v366 = *(__m128i *)v279;
              v47 = v279[16];
              *(_DWORD *)v363 = *(_DWORD *)&v279[17];
              *(_DWORD *)&v363[3] = *(_DWORD *)&v279[20];
              v52 = v368;
              v58 = v365;
              if ( *(_BYTE *)(v368 + 1953) == 1 )
                goto LABEL_180;
LABEL_225:
              *(_BYTE *)(v52 + 1953) = 0;
              *(_BYTE *)(v52 + 1958) = 0;
              if ( !*(_BYTE *)(v52 + 1954) )
                goto LABEL_228;
              goto LABEL_226;
            }
            v174 = *(_QWORD *)(v368 + 1880);
            v351 = v365;
            v350 = v123;
            v349 = v57;
            v175 = sub_140064030(v174);
            v351 = v365;
            v350 = v123;
            v349 = v57;
            sub_140B93B50(&v258, v175);
            v176 = *((char **)&v258 + 1);
            LOBYTE(v353) = v259.m128i_i8[0];
            v367 = v57;
            if ( (_BYTE)v258 )
            {
              v359 = *((PVOID *)&v258 + 1);
              v247.m128i_i64[0] = 0;
              v247.m128i_i64[1] = 1;
              v248.m128i_i64[0] = 0;
              *(_QWORD *)&v279[16] = 1610612768;
              *(_QWORD *)v279 = &v247;
              *(_QWORD *)&v279[8] = &off_1417C41C0;
              if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, v279) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v364,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v366 = v247;
              v47 = v248.m128i_i8[0];
              LODWORD(v271) = *(__int32 *)((char *)v248.m128i_i32 + 1);
              *(_DWORD *)((char *)&v271 + 3) = v248.m128i_i32[1];
              v57 = v367;
              v179 = v362;
              v180 = (char *)v359;
              if ( !(_BYTE)v353 )
              {
                if ( 2 * *off_141EC90B8 )
                {
                  v351 = v365;
                  v350 = v362;
                  v349 = v367;
                  if ( !(unsigned __int8)sub_1416C2250(v178, v177) )
                    v180[1] = 1;
                }
              }
              v181 = *v180;
              *v180 = 0;
              if ( v181 == 2 )
              {
                v351 = v365;
                v350 = v179;
                v349 = v57;
                WakeByAddressSingle(v180);
              }
              *(__int32 *)((char *)v256.m128i_i32 + 3) = *(_DWORD *)((char *)&v271 + 3);
              v256.m128i_i32[0] = v271;
              if ( v366.m128i_i64[0] != -1 )
              {
                *(_DWORD *)&v363[3] = *(__int32 *)((char *)v256.m128i_i32 + 3);
                *(_DWORD *)v363 = v256.m128i_i32[0];
                v52 = v368;
                v58 = v365;
                if ( *(_BYTE *)(v368 + 1953) != 1 )
                  goto LABEL_225;
                goto LABEL_180;
              }
              v176 = (char *)v366.m128i_i64[1];
              LOBYTE(v353) = v47;
            }
            v359 = v176;
            sub_14038E2B0(&v287, v176 + 8);
            v351 = v365;
            v223 = v362;
            v350 = v362;
            v224 = v367;
            v349 = v367;
            sub_14000E270(v359, (unsigned __int8)v353);
            v225 = v368;
            *(_WORD *)(v368 + 1953) = 0;
            *(_QWORD *)v279 = v365;
            *(_QWORD *)&v279[8] = v223;
            *(_QWORD *)&v279[16] = v128;
            *(_OWORD *)&v279[24] = *(_OWORD *)(v225 + 1968);
            *(_QWORD *)&v279[40] = *(_QWORD *)(v225 + 1984);
            v226 = _mm_loadu_si128(&v288);
            *(__m128i *)&v279[48] = _mm_loadu_si128(&v287);
            *(__m128i *)&v279[64] = v226;
            v357 = v365;
            v356 = v223;
            v355 = v224;
            v227 = sub_1408C37F0(v279, &off_1417BACE8);
            v76 = v127;
            v228 = v368;
            *(_QWORD *)(v368 + 1968) = v227;
            v366.m128i_i64[1] = v228 + 1968;
            sub_140B01100(v279, v228 + 1968, v358);
            v41 = *(_QWORD *)v279;
            if ( *(_QWORD *)v279 == -4 )
            {
              v40 = 4;
              goto LABEL_68;
            }
            v42 = *(_QWORD *)&v279[8];
            v43 = *(_QWORD *)&v279[16];
            v44 = v279[24];
            v341[0] = *(_DWORD *)&v279[25];
            *(_DWORD *)((char *)v341 + 3) = *(_DWORD *)&v279[28];
            sub_141684120(&v235, &v279[32], 144);
            v45 = *(_QWORD *)v366.m128i_i64[1];
            v357 = v365;
            v356 = v362;
            v355 = v367;
            if ( (unsigned __int8)sub_1412F2A80(v45) )
            {
              v357 = v365;
              v356 = v362;
              v355 = v367;
              sub_1412E7580(v45);
            }
            if ( v41 == -2 )
            {
              *(_QWORD *)v279 = v42;
              *(_QWORD *)&v279[8] = v43;
              v279[16] = v44;
              *(_DWORD *)&v279[17] = v341[0];
              *(_DWORD *)&v279[20] = *(_DWORD *)((char *)v341 + 3);
              v56 = _mm_loadu_si128(v236);
              *(__m128i *)&v279[24] = _mm_loadu_si128(&v235);
              *(__m128i *)&v279[40] = v56;
              *(__m128i *)&v279[56] = v236[1];
              *(__m128i *)&v279[72] = v236[2];
              *(_QWORD *)&v279[88] = v237;
              *(_QWORD *)&v271 = v279;
              *((_QWORD *)&v271 + 1) = sub_140B036A0;
              sub_14149C0F0(&v247, &unk_1417BA053, &v271);
              v357 = v365;
              v356 = v362;
              v355 = v367;
              sub_140BF2F60(v279);
              goto LABEL_73;
            }
            if ( v41 == -3 )
            {
              *(_QWORD *)v279 = v42;
              *(_QWORD *)&v279[8] = v43;
              v279[16] = v44;
              *(_DWORD *)&v279[17] = v341[0];
              *(_DWORD *)&v279[20] = *(_DWORD *)((char *)v341 + 3);
              *(_QWORD *)&v271 = v279;
              *((_QWORD *)&v271 + 1) = sub_1412FC470;
              sub_14149C0F0(&v247, &unk_1417BA035, &v271);
              v358 = *(_QWORD *)&v279[8];
              if ( *(_QWORD *)&v279[8] )
              {
                v366.m128i_i64[1] = *(_QWORD *)&v279[16];
                if ( **(_QWORD **)&v279[16] )
                  (**(void (__fastcall ***)(__int64))&v279[16])(v358);
                v46 = *(_QWORD *)(v366.m128i_i64[1] + 8);
                if ( v46 )
                  sub_140001660(v358, v46, *(_QWORD *)(v366.m128i_i64[1] + 16));
              }
LABEL_73:
              v366 = v247;
              v47 = v248.m128i_i8[0];
              *(_DWORD *)v363 = *(__int32 *)((char *)v248.m128i_i32 + 1);
              *(_DWORD *)&v363[3] = v248.m128i_i32[1];
              v52 = v368;
              v57 = v367;
              v58 = v365;
              *(_BYTE *)(v368 + 1952) = 0;
              if ( *(_BYTE *)(v52 + 1953) == 1 )
                goto LABEL_180;
              goto LABEL_225;
            }
            sub_141684120(&v260, &v235, 144);
            *(__int32 *)((char *)&v259.m128i_i32[2] + 1) = v341[0];
            v259.m128i_i32[3] = *(_DWORD *)((char *)v341 + 3);
            v59 = v368;
            *(_BYTE *)(v368 + 1952) = 1;
            *(_QWORD *)&v258 = v41;
            *((_QWORD *)&v258 + 1) = v42;
            v259.m128i_i64[0] = v43;
            v259.m128i_i8[8] = v44;
            v60 = *(_QWORD *)(v59 + 1888);
            v58 = v365;
            v308 = v365;
            v61 = v362;
            v307 = v362;
            v57 = v367;
            v306 = v367;
            LOBYTE(v62) = 2;
            sub_1406B1560(v279, v60, v62);
            v366.m128i_i64[0] = *(_QWORD *)v279;
            if ( *(_QWORD *)v279 != -1 )
            {
              v366.m128i_i64[1] = *(_QWORD *)&v279[8];
              v47 = v279[16];
              *(_DWORD *)v363 = *(_DWORD *)&v279[17];
              *(_DWORD *)&v363[3] = *(_DWORD *)&v279[20];
              v52 = v368;
              goto LABEL_82;
            }
            v77 = *(_QWORD *)(v368 + 1880);
            v308 = v58;
            v307 = v61;
            v306 = v57;
            sub_1401C3030(&v256, v77);
            v331 = v42;
            *(_BYTE *)(v368 + 1952) = 0;
            sub_141684120(v279, &v256, 152);
            sub_141684120(v281, &v258, 176);
            v345 = v58;
            v344 = v61;
            v343 = v57;
            v78 = sub_1408C3C50(v279, &off_1417BAD80);
            *(_QWORD *)v366.m128i_i64[1] = v78;
            v353 = (_QWORD *)(v368 + 1968);
            sub_140B00B70(v279, v368 + 1968, v358);
            v39 = *(__int64 **)v279;
            if ( *(_QWORD *)v279 == -3 )
            {
              v40 = 5;
LABEL_68:
              *v76 = v40;
              v52 = v368;
              goto LABEL_231;
            }
            v359 = v76;
            v366 = *(__m128i *)&v279[8];
            v47 = v279[24];
            v340[0] = *(_DWORD *)&v279[25];
            *(_DWORD *)((char *)v340 + 3) = *(_DWORD *)&v279[28];
            v246 = _mm_loadu_si128((const __m128i *)&v279[32]);
            v312 = *(_QWORD *)&v279[56];
            v318 = *(_QWORD *)&v279[48];
            v48 = *(_QWORD *)&v279[72];
            v49 = *(_QWORD *)&v279[64];
            v50 = *v353;
            v345 = v365;
            v344 = v362;
            v343 = v367;
            if ( (unsigned __int8)sub_1412F2A80(v50) )
            {
              v345 = v365;
              v344 = v362;
              v343 = v367;
              sub_1412E7580(v50);
            }
            if ( v39 == (__int64 *)-1LL )
            {
              *(_DWORD *)&v363[3] = *(_DWORD *)((char *)v340 + 3);
              *(_DWORD *)v363 = v340[0];
              v52 = v368;
              v42 = v331;
LABEL_81:
              *(_WORD *)(v52 + 1955) = 0;
              *(_BYTE *)(v52 + 1957) = 0;
              v57 = v367;
              v58 = v365;
LABEL_82:
              if ( *(_BYTE *)(v52 + 1952) )
              {
                if ( (unsigned __int64)(v41 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  sub_140001660(v42, v41, 1);
                if ( v259.m128i_i64[1] != -1 && v259.m128i_i64[1] )
                  sub_140001660(v260, v259.m128i_i64[1], 1);
                if ( v261 != -1 && v261 )
                  sub_140001660(v262, v261, 1);
                if ( v263 != -1 && v263 )
                  sub_140001660(v264, v263, 1);
                if ( v265 != -1 && v265 )
                  sub_140001660(v266, v265, 1);
                if ( v267 != -1 && v267 )
                  sub_140001660(v268, v267, 1);
                if ( v269 != -1 && v269 )
                  sub_140001660(v270, v269, 1);
              }
              *(_BYTE *)(v52 + 1952) = 0;
              if ( *(_BYTE *)(v52 + 1953) != 1 )
                goto LABEL_225;
LABEL_180:
              if ( v58 )
              {
                sub_140001660(v362, v58, 1);
                *(_BYTE *)(v52 + 1953) = 0;
                *(_BYTE *)(v52 + 1958) = 0;
                if ( !*(_BYTE *)(v52 + 1954) )
                  goto LABEL_228;
                goto LABEL_226;
              }
              goto LABEL_225;
            }
            if ( v39 == (__int64 *)-2LL )
            {
              *(__m128i *)v279 = v366;
              v279[16] = v47;
              *(_DWORD *)&v279[17] = v340[0];
              *(_DWORD *)&v279[20] = *(_DWORD *)((char *)v340 + 3);
              *(_QWORD *)&v271 = v279;
              *((_QWORD *)&v271 + 1) = sub_1412FC470;
              sub_14149C0F0(&v247, &unk_1417BA071, &v271);
              v358 = *(_QWORD *)&v279[8];
              v42 = v331;
              if ( *(_QWORD *)&v279[8] )
              {
                v366.m128i_i64[1] = *(_QWORD *)&v279[16];
                if ( **(_QWORD **)&v279[16] )
                  (**(void (__fastcall ***)(__int64))&v279[16])(v358);
                v51 = *(_QWORD *)(v366.m128i_i64[1] + 8);
                if ( v51 )
                  sub_140001660(v358, v51, *(_QWORD *)(v366.m128i_i64[1] + 16));
              }
              v366 = v247;
              v47 = v248.m128i_i8[0];
              *(_DWORD *)v363 = *(__int32 *)((char *)v248.m128i_i32 + 1);
              *(_DWORD *)&v363[3] = v248.m128i_i32[1];
              v52 = v368;
              goto LABEL_81;
            }
            v63 = v368;
            *(_WORD *)(v368 + 1955) = 257;
            *(_BYTE *)(v63 + 1957) = 1;
            *(_QWORD *)(v63 + 2152) = v39;
            *(__m128i *)(v63 + 2160) = v366;
            *(_BYTE *)(v63 + 2176) = v47;
            v64 = *(_DWORD *)((char *)v340 + 3);
            *(_DWORD *)(v63 + 2177) = v340[0];
            *(_DWORD *)(v63 + 2180) = v64;
            *(__m128i *)(v63 + 2184) = _mm_load_si128(&v246);
            *(_QWORD *)(v63 + 2200) = v318;
            *(_QWORD *)(v63 + 2208) = v312;
            v277 = v49;
            *(_QWORD *)(v63 + 2216) = v49;
            *(_QWORD *)(v63 + 2224) = v48;
            v65 = qword_1417C42D0[BYTE4(v48)];
            v66 = dword_1417C42E8[BYTE4(v48)];
            *(_BYTE *)(v63 + 1957) = 0;
            v331 = *(_QWORD *)(v63 + 2176);
            v298 = *(_QWORD *)(v63 + 2184);
            v278 = *(_QWORD *)(v63 + 2192);
            *(_WORD *)(v63 + 1955) = 0;
            sub_140388B60((unsigned int)v279, v65, 0, 1, 1);
            v297 = *(_QWORD *)&v279[8];
            if ( *(_DWORD *)v279 == 1 )
            {
              v352 = v39;
              sub_1416C2D4B(v297, *(_QWORD *)&v279[16]);
            }
            v67 = v48 & 0xFF00000000LL;
            v68 = (char *)dword_1417C42E8 + v66;
            v69 = *(_QWORD *)&v279[16];
            sub_141684120(*(_QWORD *)&v279[16], v68, v65);
            BYTE4(v280) = (v48 & 0xFF00000000LL) != 0x200000000LL;
            *(_QWORD *)v279 = v39;
            *(__m128i *)&v279[8] = v366;
            *(_QWORD *)&v279[24] = v331;
            *(_QWORD *)&v279[32] = v298;
            *(_QWORD *)&v279[40] = v278;
            BYTE5(v280) = BYTE5(v48);
            LODWORD(v280) = v48;
            *(_QWORD *)&v279[72] = v318;
            *(_QWORD *)&v279[80] = v312;
            *(_QWORD *)&v279[88] = v277;
            *(_QWORD *)&v279[48] = v297;
            *(_QWORD *)&v279[56] = v69;
            *(_QWORD *)&v279[64] = v65;
            v305 = v365;
            v70 = v362;
            v304 = v362;
            v303 = v367;
            sub_140ACA2C0(v353, v279);
            if ( v67 == 0x200000000LL )
            {
LABEL_120:
              v52 = v368;
              v57 = v367;
              v38 = *(_QWORD *)(v368 + 1968);
              v366 = *(__m128i *)(v368 + 1976);
              v47 = *(_BYTE *)(v368 + 1992);
              *(_DWORD *)&v363[3] = *(_DWORD *)(v368 + 1996);
              *(_DWORD *)v363 = *(_DWORD *)(v368 + 1993);
              sub_141684120(v229, v368 + 2000, 152);
              *(_QWORD *)(v52 + 1952) = 0;
              v80 = *(_QWORD *)(v52 + 1840);
              if ( v80 )
                goto LABEL_229;
              goto LABEL_230;
            }
            v71 = *(_QWORD *)(v368 + 1880);
            v291 = v365;
            v290 = v70;
            v72 = v367;
            v289 = v367;
            sub_1401C3030(v279, v71);
            sub_141684120(&v271, v279, 152);
            v73 = v368;
            v74 = (void *)(v368 + 2232);
            sub_141684120(v368 + 2232, &v271, 152);
            v75 = v353;
            *(_QWORD *)(v73 + 2384) = v353;
            *(_QWORD *)(v73 + 2392) = aRuntimeRefresh_5;
            *(_QWORD *)(v73 + 2400) = 41;
            *(_QWORD *)(v73 + 2408) = aOauthAccountIm;
            *(_QWORD *)(v73 + 2416) = 30;
            *(_QWORD *)(v73 + 2424) = aImport;
            *(_QWORD *)(v73 + 2432) = 6;
            v366.m128i_i64[1] = v73 + 2992;
            *(_BYTE *)(v73 + 2992) = 0;
            v76 = v359;
            v367 = v72;
            *(__m128i *)(v73 + 2440) = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)v75,
                                         (__m128i)(unsigned __int64)aRuntimeRefresh_5);
            *(_QWORD *)(v73 + 2456) = 41;
            *(_QWORD *)(v73 + 2464) = aOauthAccountIm;
            *(_QWORD *)(v73 + 2472) = 30;
            v359 = v74;
            sub_141684120(v73 + 2480, v74, 152);
            *(_QWORD *)(v73 + 2632) = aImport;
            *(_QWORD *)(v73 + 2640) = 6;
            *(_BYTE *)(v73 + 2984) = 0;
            v366.m128i_i64[0] = v73 + 2480;
            sub_140CF87B0(v279, v73 + 2480, v358);
            v53 = *(_QWORD *)v279;
            if ( *(_QWORD *)v279 == -2 )
            {
              *(_BYTE *)v366.m128i_i64[1] = 3;
              v40 = 6;
              goto LABEL_68;
            }
            v300 = *(_QWORD *)&v279[24];
            v299 = _mm_loadu_si128((const __m128i *)&v279[8]);
            sub_141684120(&v247, &v279[32], 856);
            v54 = v286;
            if ( *(_BYTE *)(v368 + 2984) == 3 )
            {
              if ( *(_BYTE *)(v368 + 2976) == 3 )
              {
                sub_140B03640(v368 + 2968);
              }
              else if ( !*(_BYTE *)(v368 + 2976) )
              {
                sub_140014150(v368 + 2816);
              }
              v55 = v368 + 2648;
            }
            else
            {
              v55 = v366.m128i_i64[0];
              if ( *(_BYTE *)(v368 + 2984) )
                goto LABEL_112;
            }
            sub_140014150(v55);
LABEL_112:
            if ( (_DWORD)v53 == -1 )
            {
              v321 = v300;
              v320 = v299;
              v79 = 1;
            }
            else
            {
              *(_QWORD *)v279 = v53;
              *(__m128i *)&v279[8] = _mm_load_si128(&v299);
              *(_QWORD *)&v279[24] = v300;
              sub_141684120(&v279[32], &v247, 856);
              v286 = v54;
              if ( v282 )
                sub_140001660(v283, v282, 1);
              if ( v284 )
                sub_140001660(v285, v284, 1);
              sub_140A8ED10(v279);
              v320 = v254;
              v321 = v255;
              v79 = 0;
            }
            v319 = v79;
            sub_140354D30(*(__int128 **)(v368 + 2440));
            *(_BYTE *)v366.m128i_i64[1] = 1;
            goto LABEL_120;
          }
          switch ( v112 )
          {
            case 0LL:
              v367 = v57;
              *(_QWORD *)v279 = v365;
              *(_QWORD *)&v279[8] = v362;
              v279[16] = v111;
              *(_DWORD *)&v279[17] = *(_DWORD *)v342;
              *(_DWORD *)&v279[20] = *(_DWORD *)&v342[3];
              *(_QWORD *)&v271 = v279;
              *((_QWORD *)&v271 + 1) = sub_1400015F0;
              sub_14149C0F0(&v247, &unk_1417B9F56, &v271);
              goto LABEL_194;
            case 1LL:
              nullsub_1(v122);
              v138 = sub_140001650(41, 1);
              v52 = v368;
              if ( !v138 )
              {
                v346 = v57;
                sub_1416C2D4B(1, 41);
              }
              *(_OWORD *)(v138 + 25) = *(__int128 *)((char *)&xmmword_1417B9FD4 + 9);
              *(_OWORD *)(v138 + 16) = xmmword_1417B9FD4;
              *(__m128i *)v138 = _mm_loadu_si128((const __m128i *)&xmmword_1417B9FC4);
              v247.m128i_i64[0] = 41;
              v247.m128i_i64[1] = v138;
              v248.m128i_i64[0] = 41;
              break;
            case 2LL:
              nullsub_1(v122);
              v137 = sub_140001650(48, 1);
              v52 = v368;
              if ( !v137 )
              {
                v346 = v57;
                sub_1416C2D4B(1, 48);
              }
              *(_OWORD *)(v137 + 32) = xmmword_1417BA00D;
              *(_OWORD *)(v137 + 16) = xmmword_1417B9FFD;
              *(__m128i *)v137 = _mm_loadu_si128((const __m128i *)&xmmword_1417B9FED);
              v247.m128i_i64[0] = 48;
              v247.m128i_i64[1] = v137;
              v248.m128i_i64[0] = 48;
              break;
            case 3LL:
              v367 = v57;
              *(_QWORD *)v279 = v365;
              *(_QWORD *)&v279[8] = v362;
              v279[16] = v111;
              *(_DWORD *)&v279[17] = *(_DWORD *)v342;
              *(_DWORD *)&v279[20] = *(_DWORD *)&v342[3];
              *(_QWORD *)&v271 = v279;
              *((_QWORD *)&v271 + 1) = sub_1400015F0;
              sub_14149C0F0(&v247, &unk_1417BA01D, &v271);
LABEL_194:
              if ( *(_QWORD *)v279 )
                sub_140001660(*(_QWORD *)&v279[8], *(_QWORD *)v279, 1);
              v52 = v368;
              v57 = v367;
              break;
          }
          v366 = v247;
          v47 = v248.m128i_i8[0];
          *(_DWORD *)v363 = *(__int32 *)((char *)v248.m128i_i32 + 1);
          *(_DWORD *)&v363[3] = v248.m128i_i32[1];
          *(_BYTE *)(v52 + 1958) = 0;
          if ( *(_BYTE *)(v52 + 1954) )
          {
LABEL_226:
            v182 = *(_QWORD *)(v52 + 1968);
            if ( v182 )
              sub_140001660(*(_QWORD *)(v52 + 1976), v182, 1);
          }
LABEL_228:
          *(_BYTE *)(v52 + 1954) = 0;
          *(_BYTE *)(v52 + 1959) = 0;
          v80 = *(_QWORD *)(v52 + 1840);
          v38 = -1;
          if ( v80 )
LABEL_229:
            sub_140001660(*(_QWORD *)(v52 + 1848), v80, 1);
LABEL_230:
          *(_WORD *)(v52 + 1960) = 0;
          v313[0] = *(_DWORD *)v363;
          *(_DWORD *)((char *)v313 + 3) = *(_DWORD *)&v363[3];
          sub_141684120(v230, v229, 152);
          *(_BYTE *)(v52 + 1962) = 1;
          if ( v38 != -2 )
          {
            HIDWORD(v240) = *(_DWORD *)((char *)v313 + 3);
            *(_DWORD *)((char *)&v240 + 1) = v313[0];
            sub_141684120(&v241, v230, 152);
            v238 = v38;
            v239 = v366;
            LOBYTE(v240) = v47;
            sub_140BE9AF0(v57);
            v184 = v368;
            sub_1406B1370(*(_QWORD *)(v368 + 1808));
            v18 = v240;
            v37 = v241;
            sub_141684120(v231, v242, 144);
            *(_BYTE *)(v184 + 3001) = 0;
            *(_BYTE *)(v184 + 3002) = 0;
            sub_140014150(v184 + 1656);
            v17 = v366.m128i_i64[0];
            v23 = v18 >> 8;
            goto LABEL_233;
          }
LABEL_231:
          *(_BYTE *)(v52 + 3000) = 3;
          *v352 = 2;
          result = 3;
LABEL_248:
          *(_BYTE *)(v52 + 3008) = result;
          return result;
        case 1:
LABEL_302:
          v317 = v6;
          sub_1416C3400(&off_1417BAE40, a2, a3, a4);
        case 2:
LABEL_301:
          v317 = v6;
          sub_1416C3420(&off_1417BAE40, a2, a3, a4);
        case 3:
LABEL_20:
          v317 = v6;
          v25 = (void *)(v4 + 1962);
          v26 = v4 + 1816;
          v7 = *(_QWORD *)(v4 + 1944);
          v27 = *(_QWORD *)(v4 + 1864);
          v28 = *(volatile signed __int64 **)(v4 + 1872);
          goto LABEL_137;
      }
  }
}