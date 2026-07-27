// module: codexmate_lib/core/repository
// addr: 0x140396bf0
// name: sub_140396BF0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140396BF0(__m128i *a1, _QWORD *a2, __int64 a3)
{
  __m128i v6; // kr00_16
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  int v15; // esi
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  char v21; // cl
  __int64 v22; // xmm0_8
  __int64 v23; // rdx
  unsigned int v24; // eax
  _QWORD *v25; // r10
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbx
  _QWORD *v29; // r14
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // r13
  unsigned int v33; // edi
  __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rax
  _DWORD *v37; // rdi
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rsi
  _BYTE *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rsi
  _BYTE *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  signed __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // ecx
  signed __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r15
  __int64 v60; // rsi
  __int64 v61; // rdi
  int v62; // edx
  int v63; // ecx
  unsigned int v64; // ecx
  signed __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // r15
  int v74; // edx
  int v75; // ecx
  unsigned int v76; // ecx
  signed __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  signed __int64 v80; // rax
  signed __int64 v81; // rax
  signed __int64 v82; // rax
  char v83; // al
  char v84; // cl
  char v85; // cl
  char v86; // cl
  char v87; // dl
  char v88; // cl
  char v89; // dl
  char v90; // dl
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int32 v95; // edx
  __int64 v96; // rax
  _DWORD *v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // r9
  __int64 v105; // rbx
  __int128 v106; // rax
  int v107; // edi
  signed __int64 v108; // rsi
  __int64 v109; // rsi
  int v110; // eax
  _QWORD *j; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 v115; // r12
  signed __int64 v116; // rsi
  __int64 v117; // r13
  __int64 v118; // rax
  __m128i v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // kr10_16
  unsigned __int64 v122; // rax
  __m128i v123; // xmm0
  __m128i v124; // xmm7
  __int64 v125; // rdi
  __int64 v126; // rbx
  unsigned __int64 v127; // rax
  __m128i v128; // xmm8
  unsigned __int64 v130; // r14
  int v131; // eax
  bool v132; // zf
  unsigned __int64 v133; // r12
  __int64 v134; // r13
  __int64 v135; // r14
  _QWORD *v136; // r15
  __int64 v137; // rcx
  char v138; // dl
  __int128 v139; // xmm0
  __int128 v140; // xmm0
  __int64 v141; // rdi
  __int64 v142; // rax
  char v143; // cl
  __int128 v144; // xmm0
  __int128 v145; // xmm0
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // rdx
  char v152; // r9
  __int32 v153; // edx
  int v154; // ecx
  unsigned __int32 v155; // ecx
  __int64 v156; // rcx
  __int64 *v157; // r8
  signed __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // rdx
  __int64 *v161; // r8
  __int64 v162; // r9
  unsigned __int64 v163; // r10
  __int64 v164; // r8
  char v165; // r9
  __int64 v166; // rdx
  __int64 v167; // rdi
  char v168; // bl
  __m128i v169; // xmm0
  __m128i v170; // xmm7
  __int64 v171; // r14
  __m128i v172; // xmm0
  unsigned int v173; // eax
  unsigned __int64 v174; // rsi
  unsigned int v175; // edx
  signed __int64 v176; // rax
  __m128i v178; // xmm0
  __int64 v179; // rbx
  __int64 v180; // rsi
  __int64 v181; // rdi
  const __m128i *v182; // r14
  __m128i v184; // xmm0
  __int64 v185; // rax
  __int64 v186; // rdx
  unsigned __int64 v187; // rax
  __int64 v188; // rbx
  __int64 v189; // rsi
  __int64 v190; // rdi
  __int64 v191; // rbx
  __m128i *v192; // rax
  __m128i v193; // xmm0
  __m128i v194; // xmm1
  __m128i v195; // xmm2
  __int64 v196; // rdi
  __int64 v197; // rsi
  _QWORD *v198; // rbx
  __int64 v199; // rdx
  __int64 v200; // rdi
  __int64 v201; // rsi
  _QWORD *v202; // rbx
  __int64 v203; // rdx
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rbx
  __m128i *v208; // rsi
  __int64 v209; // rax
  __m128i v210; // xmm0
  __m128i v211; // xmm1
  __m128i v212; // xmm2
  __int64 v213; // rsi
  __int64 v214; // rdi
  const __m128i *v215; // rax
  __m128i v216; // xmm0
  __int64 v217; // rsi
  __int64 v218; // rbx
  __int64 v219; // rax
  char v220; // si
  __int64 v221; // rax
  __int64 v222; // rsi
  __m128i *v223; // rax
  __m128i v224; // xmm0
  __m128i v225; // xmm1
  __m128i v226; // xmm2
  __int64 v227; // rdi
  _OWORD *v228; // rdx
  __int128 v229; // xmm0
  __int128 v230; // xmm1
  __int128 v231; // xmm2
  _QWORD *v232; // rdi
  _QWORD *v233; // rsi
  __int128 v234; // xmm0
  _QWORD *v235; // rdi
  _QWORD *v236; // rsi
  _DWORD *v237; // r15
  __m128i v238; // xmm0
  __int128 v239; // xmm1
  __m128i v240; // xmm2
  __int64 v241; // rdi
  unsigned __int64 v242; // rbx
  __int64 v243; // rdx
  __int64 v244; // rax
  __m128i *v245; // rbx
  unsigned __int64 v246; // rax
  __m128i v248; // xmm8
  __int64 v250; // r12
  unsigned __int64 v251; // r14
  char *v252; // rdi
  int v253; // eax
  __int64 k; // rdx
  unsigned __int64 v255; // rax
  __int64 v256; // r14
  bool v257; // r12
  unsigned __int64 v258; // rax
  __m128i v260; // xmm0
  __m128i v261; // xmm7
  _QWORD *m; // r8
  unsigned __int64 v263; // rax
  _QWORD *v264; // rdx
  __m128i v265; // xmm8
  __int64 v267; // r15
  _QWORD *v268; // r12
  _QWORD *v269; // r14
  int v270; // eax
  char v271; // al
  __int8 v272; // al
  __m128i *v273; // r13
  __m128i v274; // xmm0
  __m128i v275; // xmm7
  __int64 v276; // rbx
  __int64 v277; // rax
  const __m128i *v278; // rdi
  __int64 v279; // r14
  __int64 v280; // rsi
  __int64 v281; // rax
  unsigned __int8 v282; // cl
  __int8 v283; // al
  __int64 v284; // rcx
  __int64 i; // r15
  _BYTE v286[120]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v287; // [rsp+A8h] [rbp+28h]
  __int64 v288; // [rsp+B0h] [rbp+30h]
  int v289; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v290; // [rsp+D8h] [rbp+58h]
  __int128 v291; // [rsp+E8h] [rbp+68h]
  __int64 v292; // [rsp+F8h] [rbp+78h]
  _BYTE v293[104]; // [rsp+130h] [rbp+B0h] BYREF
  char v294[48]; // [rsp+198h] [rbp+118h] BYREF
  char v295[352]; // [rsp+1C8h] [rbp+148h] BYREF
  char v296[176]; // [rsp+328h] [rbp+2A8h] BYREF
  __int128 v297; // [rsp+3D8h] [rbp+358h]
  __int128 v298; // [rsp+3E8h] [rbp+368h]
  __int128 v299; // [rsp+3F8h] [rbp+378h]
  __int128 v300; // [rsp+408h] [rbp+388h]
  __int128 v301; // [rsp+418h] [rbp+398h]
  __int64 v302; // [rsp+428h] [rbp+3A8h]
  __int128 v303; // [rsp+430h] [rbp+3B0h]
  __int128 v304; // [rsp+440h] [rbp+3C0h]
  __int64 v305; // [rsp+450h] [rbp+3D0h]
  __int128 v306; // [rsp+458h] [rbp+3D8h]
  __int64 v307; // [rsp+468h] [rbp+3E8h]
  _QWORD v308[2]; // [rsp+470h] [rbp+3F0h] BYREF
  unsigned __int64 v309; // [rsp+480h] [rbp+400h]
  char v310[56]; // [rsp+488h] [rbp+408h] BYREF
  __int64 v311; // [rsp+4C0h] [rbp+440h]
  __int64 v312; // [rsp+4C8h] [rbp+448h]
  _QWORD v313[17]; // [rsp+4D8h] [rbp+458h] BYREF
  _BYTE v314[112]; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v315; // [rsp+5D0h] [rbp+550h]
  char v316[24]; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v317; // [rsp+5F0h] [rbp+570h]
  char v318; // [rsp+5F8h] [rbp+578h]
  __int64 v319; // [rsp+998h] [rbp+918h] BYREF
  __int64 v320; // [rsp+9A0h] [rbp+920h]
  __int64 v321; // [rsp+9A8h] [rbp+928h]
  __int128 v322; // [rsp+9B0h] [rbp+930h]
  unsigned __int64 v323; // [rsp+9C0h] [rbp+940h]
  __m128i v324; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v325; // [rsp+9E0h] [rbp+960h]
  __m128i v326; // [rsp+9F0h] [rbp+970h]
  __int128 v327; // [rsp+A00h] [rbp+980h]
  __int128 v328; // [rsp+A10h] [rbp+990h]
  __int128 v329; // [rsp+A20h] [rbp+9A0h]
  __m128i v330; // [rsp+A30h] [rbp+9B0h]
  __int64 v331; // [rsp+A40h] [rbp+9C0h]
  __int64 v332; // [rsp+A48h] [rbp+9C8h]
  __int128 v333; // [rsp+A50h] [rbp+9D0h] BYREF
  __int128 v334; // [rsp+A60h] [rbp+9E0h]
  __int128 v335; // [rsp+A70h] [rbp+9F0h]
  __int128 v336; // [rsp+A80h] [rbp+A00h]
  __int128 v337; // [rsp+A90h] [rbp+A10h]
  __int64 v338; // [rsp+AA0h] [rbp+A20h]
  __m128i v339; // [rsp+AB0h] [rbp+A30h] BYREF
  __int128 v340; // [rsp+AC0h] [rbp+A40h] BYREF
  __int128 v341; // [rsp+AD0h] [rbp+A50h]
  __int128 v342; // [rsp+AE0h] [rbp+A60h]
  __int128 v343; // [rsp+AF0h] [rbp+A70h]
  __int64 v344; // [rsp+B00h] [rbp+A80h]
  __m128i v345; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v346; // [rsp+B20h] [rbp+AA0h]
  __int64 v347; // [rsp+B30h] [rbp+AB0h]
  _DWORD *v348; // [rsp+B40h] [rbp+AC0h]
  __int64 v349; // [rsp+B48h] [rbp+AC8h]
  __m128i v350; // [rsp+B50h] [rbp+AD0h] BYREF
  __int128 v351; // [rsp+B60h] [rbp+AE0h]
  __int64 v352; // [rsp+B70h] [rbp+AF0h]
  __int128 v353; // [rsp+B80h] [rbp+B00h] BYREF
  __int128 v354; // [rsp+B90h] [rbp+B10h]
  __int64 v355; // [rsp+BA0h] [rbp+B20h]
  __m128i v356; // [rsp+BB0h] [rbp+B30h] BYREF
  __int128 v357; // [rsp+BC0h] [rbp+B40h]
  __int128 v358; // [rsp+BD0h] [rbp+B50h] BYREF
  __int64 v359; // [rsp+BE8h] [rbp+B68h]
  __m128i v360; // [rsp+BF0h] [rbp+B70h] BYREF
  __int128 v361; // [rsp+C00h] [rbp+B80h]
  __m128i v362; // [rsp+C10h] [rbp+B90h]
  __m128i v363; // [rsp+C20h] [rbp+BA0h]
  __m128i v364; // [rsp+C30h] [rbp+BB0h]
  __m128i v365; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v366; // [rsp+C50h] [rbp+BD0h]
  _QWORD *v367; // [rsp+C58h] [rbp+BD8h]
  signed __int64 v368; // [rsp+C60h] [rbp+BE0h]
  __m128i *v369; // [rsp+C68h] [rbp+BE8h]
  char v370; // [rsp+C77h] [rbp+BF7h] BYREF
  HANDLE hObject; // [rsp+C78h] [rbp+BF8h] BYREF
  signed __int64 v372; // [rsp+C80h] [rbp+C00h]
  _QWORD *v373; // [rsp+C88h] [rbp+C08h]
  __int64 v374; // [rsp+C90h] [rbp+C10h]
  _QWORD *v375; // [rsp+C98h] [rbp+C18h]
  unsigned __int64 v376; // [rsp+CA0h] [rbp+C20h]
  __int64 v377; // [rsp+CA8h] [rbp+C28h]
  __int64 v378; // [rsp+CB0h] [rbp+C30h]
  signed __int64 v379; // [rsp+CB8h] [rbp+C38h]
  char v380; // [rsp+CC0h] [rbp+C40h]
  char v381; // [rsp+CC1h] [rbp+C41h]
  char v382; // [rsp+CC2h] [rbp+C42h]
  char v383; // [rsp+CC3h] [rbp+C43h]
  char v384; // [rsp+CC4h] [rbp+C44h]
  char v385; // [rsp+CC5h] [rbp+C45h]
  char v386; // [rsp+CC6h] [rbp+C46h]
  char v387; // [rsp+CC7h] [rbp+C47h]
  __int64 v388; // [rsp+CC8h] [rbp+C48h]

  v388 = -2;
  sub_1403885B0(v314, a2[33], a2[34]);
  v6 = *(__m128i *)v314;
  if ( *(_QWORD *)v314 == -1 )
  {
    hObject = *(HANDLE *)&v314[8];
    v10 = a2[37];
    v367 = a2;
    sub_14039C370(v314, v10, a2[38]);
    v11 = *(_QWORD *)v314;
    *(_OWORD *)v293 = *(_OWORD *)&v314[8];
    *(_OWORD *)&v293[16] = *(_OWORD *)&v314[24];
    *(_OWORD *)&v293[32] = *(_OWORD *)&v314[40];
    *(_OWORD *)&v293[48] = *(_OWORD *)&v314[56];
    *(_OWORD *)&v293[64] = *(_OWORD *)&v314[72];
    *(_QWORD *)&v293[80] = *(_QWORD *)&v314[88];
    if ( *(_QWORD *)v314 != -1 )
    {
      a1[5].m128i_i64[1] = *(_QWORD *)&v293[80];
      *(__m128i *)((char *)a1 + 72) = *(__m128i *)&v293[64];
      si128 = _mm_load_si128((const __m128i *)v293);
      v13 = *(__m128i *)&v293[16];
      v14 = *(__m128i *)&v293[32];
      *(__m128i *)((char *)a1 + 56) = *(__m128i *)&v293[48];
      *(__m128i *)((char *)a1 + 40) = v14;
      *(__m128i *)((char *)a1 + 24) = v13;
      *(__m128i *)((char *)a1 + 8) = si128;
      a1->m128i_i64[0] = v11;
      goto LABEL_327;
    }
    v378 = a3;
    v15 = *(_DWORD *)&v293[80];
    v344 = *(_QWORD *)&v293[80];
    v343 = *(_OWORD *)&v293[64];
    v16 = _mm_load_si128((const __m128i *)v293);
    v342 = *(_OWORD *)&v293[48];
    v341 = *(_OWORD *)&v293[32];
    v340 = *(_OWORD *)&v293[16];
    v339 = v16;
    v377 = *(_QWORD *)&v293[72];
    if ( *(_QWORD *)&v293[24] == -1 )
      v360.m128i_i64[0] = -1;
    else
      sub_14149C500(&v360, (char *)&v340 + 8);
    sub_14032D020(v293, &v339);
    *(_QWORD *)&v314[64] = v343;
    *(_OWORD *)&v314[48] = v342;
    *(_QWORD *)&v314[72] = v377;
    *(__m128i *)&v314[24] = v360;
    *(_QWORD *)&v314[40] = v361;
    *(__m128i *)v314 = _mm_loadu_si128((const __m128i *)v293);
    *(_QWORD *)&v314[16] = *(_QWORD *)&v293[16];
    v19 = v378;
    if ( *(_DWORD *)(v378 + 760) > v15 )
      v15 = *(_DWORD *)(v378 + 760);
    v20 = 4;
    if ( v15 >= 5 )
      v20 = (unsigned int)v15;
    v314[84] = BYTE4(v344);
    *(_DWORD *)&v314[80] = v20;
    if ( v314[64] == 2 )
    {
      v21 = *(_BYTE *)(v378 + 744);
      if ( v21 == 2 )
      {
        v22 = 0xA0000000FLL;
        v23 = 0;
        v21 = 0;
      }
      else
      {
        v22 = *(_QWORD *)(v378 + 736);
        v23 = *(_QWORD *)(v378 + 728);
        *(__int32 *)((char *)v356.m128i_i32 + 3) = *(_DWORD *)(v378 + 748);
        v18 = *(unsigned int *)(v378 + 745);
        v356.m128i_i32[0] = *(_DWORD *)(v378 + 745);
      }
      *(_QWORD *)&v314[48] = v23;
      *(_QWORD *)&v314[56] = v22;
      v314[64] = v21;
      v20 = v356.m128i_u32[0];
      v17 = *(unsigned int *)((char *)v356.m128i_u32 + 3);
      *(_DWORD *)&v314[65] = v356.m128i_i32[0];
      *(_DWORD *)&v314[68] = *(__int32 *)((char *)v356.m128i_i32 + 3);
    }
    v369 = a1;
    if ( BYTE4(v344) == 2 )
    {
      v24 = *(_DWORD *)(v378 + 764);
      v20 = 1;
      if ( (_BYTE)v24 != 2 )
        v20 = v24;
      v314[84] = v20;
    }
    v349 = v378 + 680;
    v25 = *(_QWORD **)&v314[8];
    v26 = *(_QWORD *)&v314[8] + 424LL * *(_QWORD *)&v314[16];
    v27 = *(_QWORD *)(v378 + 688);
    v372 = *(_QWORD *)(v378 + 696);
    v28 = 424 * v372;
    v379 = 0;
    v374 = v26;
LABEL_23:
    if ( v25 == (_QWORD *)v26 )
      goto LABEL_161;
    v29 = v25;
    if ( !v372 )
      goto LABEL_161;
    while ( 2 )
    {
      v375 = v29 + 53;
      v30 = v29[25];
      v31 = v29[26];
      v32 = 0;
      do
      {
        if ( *(_QWORD *)(v27 + v32 + 208) == v31 && !(unsigned int)sub_1416847B0(*(_QWORD *)(v27 + v32 + 200), v30, v31) )
        {
          v33 = *(unsigned __int8 *)(v27 + v32 + 418);
          if ( (_BYTE)v33 == 0xFF || !*(_BYTE *)(v27 + v32) )
          {
            if ( *((_BYTE *)v29 + 418) != 0xFF
              || (v37 = *(_DWORD **)(v27 + v32 + 296), v38 = *(_QWORD *)(v27 + v32 + 304), sub_14033BC10(v37, v38), !v39)
              || v38 == 7 && !(*v37 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v37 + 3) ^ 0x6E776F6E)
              || v29[38] == v38 && !(unsigned int)sub_1416847B0(v29[37], v37, v38) )
            {
LABEL_44:
              if ( *(_QWORD *)(v27 + v32 + 336) != -1 )
              {
                if ( v29[42] == -1
                  || (v41 = v29[44], v41 != *(_QWORD *)(v27 + v32 + 352))
                  || (unsigned int)sub_1416847B0(v29[43], *(_QWORD *)(v27 + v32 + 344), v41) )
                {
                  sub_14149C500(v293, v27 + v32 + 336);
                  v42 = *(_QWORD *)v293;
                  v43 = &v293[8];
                  v360 = *(__m128i *)&v293[8];
                  v44 = v29[42];
                  if ( v44 > 0 )
                    v43 = (_BYTE *)sub_140001660(v29[43], v44, 1);
                  v29[42] = v42;
                  *(__m128i *)(v29 + 43) = _mm_load_si128(&v360);
                  LOBYTE(v43) = 1;
                  v379 = (signed __int64)v43;
                }
              }
              if ( *(_QWORD *)(v27 + v32 + 360) != -1 )
              {
                if ( v29[45] == -1
                  || (v45 = v29[47], v45 != *(_QWORD *)(v27 + v32 + 376))
                  || (unsigned int)sub_1416847B0(v29[46], *(_QWORD *)(v27 + v32 + 368), v45) )
                {
                  sub_14149C500(v293, v27 + v32 + 360);
                  v46 = *(_QWORD *)v293;
                  v47 = &v293[8];
                  v360 = *(__m128i *)&v293[8];
                  v48 = v29[45];
                  if ( v48 > 0 )
                    v47 = (_BYTE *)sub_140001660(v29[46], v48, 1);
                  v29[45] = v46;
                  *((__m128i *)v29 + 23) = _mm_load_si128(&v360);
                  LOBYTE(v47) = 1;
                  v379 = (signed __int64)v47;
                }
              }
              if ( v29[48] == -1 && *(_QWORD *)(v27 + v32 + 384) != -1 )
              {
                sub_14149C500(v293, v27 + v32 + 384);
                *(_QWORD *)&v361 = *(_QWORD *)&v293[16];
                v360 = *(__m128i *)v293;
                v49 = v29[48];
                if ( v49 > 0 )
                  sub_140001660(v29[49], v49, 1);
                v50 = v361;
                v29[50] = v361;
                *((__m128i *)v29 + 24) = _mm_load_si128(&v360);
                LOBYTE(v50) = 1;
                v379 = v50;
              }
              if ( v29[8]
                || *(_BYTE *)(v27 + v32 + 64)
                || *((_BYTE *)v29 + 419) != 0xFF
                || *(_BYTE *)(v27 + v32 + 419) != 0xFF
                || *((_BYTE *)v29 + 48) )
              {
                LODWORD(v376) = 0;
                if ( *(_DWORD *)(v27 + v32 + 32) != 1 )
                  goto LABEL_74;
              }
              else
              {
                LODWORD(v376) = *(_BYTE *)(v27 + v32 + 48) ^ 1;
                if ( *(_DWORD *)(v27 + v32 + 32) != 1 )
                  goto LABEL_74;
              }
              v51 = *(_QWORD *)(v27 + v32 + 40);
              v52 = v29[4];
              v53 = v29[5];
              sub_140FFA6E0(v293);
              v54 = (*(int *)v293 >> 13) - 1;
              v55 = 0;
              if ( *(int *)v293 >> 13 <= 0 )
              {
                v56 = (1 - (*(int *)v293 >> 13)) / 0x190u + 1;
                v54 += 400 * v56;
                v55 = -146097 * v56;
              }
              v19 = *(unsigned int *)&v293[8];
              v57 = *(unsigned int *)&v293[8] / 0xF4240uLL
                  + 1000
                  * (*(unsigned int *)&v293[4]
                   + 86400LL
                   * (((v54 / 100) >> 2)
                    + ((1461 * v54) >> 2)
                    + v55
                    + ((*(_DWORD *)v293 >> 4) & 0x1FF)
                    - v54 / 100
                    - 719163))
                  + 1000;
              v58 = 1000 * v51;
              v18 = 0x2540BE3FFLL;
              if ( (unsigned __int64)(v51 - 1) >= 0x2540BE3FFLL )
                v58 = v51;
              if ( v58 <= v57 )
              {
                if ( !v52 )
                  goto LABEL_91;
                v18 = v53 - 1;
                v68 = 1000 * v53;
                v19 = 0x2540BE3FFLL;
                if ( (unsigned __int64)(v53 - 1) >= 0x2540BE3FFLL )
                  v68 = v53;
                if ( v58 > v68 || v68 > v57 )
                {
LABEL_91:
                  v29[4] = 1;
                  v29[5] = v51;
                  LOBYTE(v57) = 1;
                  v379 = v57;
                  if ( !*(_BYTE *)(v27 + v32 + 48) )
                    goto LABEL_92;
                  goto LABEL_75;
                }
              }
LABEL_74:
              if ( !*(_BYTE *)(v27 + v32 + 48) )
                goto LABEL_92;
LABEL_75:
              v59 = *(_QWORD *)(v27 + v32 + 56);
              v60 = v29[6];
              v61 = v29[7];
              sub_140FFA6E0(v293);
              v62 = (*(int *)v293 >> 13) - 1;
              v63 = 0;
              if ( *(int *)v293 >> 13 <= 0 )
              {
                v64 = (1 - (*(int *)v293 >> 13)) / 0x190u + 1;
                v62 += 400 * v64;
                v63 = -146097 * v64;
              }
              v19 = *(unsigned int *)&v293[8];
              v65 = *(unsigned int *)&v293[8] / 0xF4240uLL
                  + 1000
                  * (*(unsigned int *)&v293[4]
                   + 86400LL
                   * (((v62 / 100) >> 2)
                    + ((1461 * v62) >> 2)
                    + v63
                    + ((*(_DWORD *)v293 >> 4) & 0x1FF)
                    - v62 / 100
                    - 719163))
                  + 1000;
              v66 = 1000 * v59;
              v18 = 0x2540BE3FFLL;
              if ( (unsigned __int64)(v59 - 1) >= 0x2540BE3FFLL )
                v66 = v59;
              if ( v66 <= v65 )
              {
                if ( !v60 )
                  goto LABEL_85;
                v18 = v61 - 1;
                v67 = 1000 * v61;
                v19 = 0x2540BE3FFLL;
                if ( (unsigned __int64)(v61 - 1) >= 0x2540BE3FFLL )
                  v67 = v61;
                if ( v66 > v67 || v67 > v65 )
                {
LABEL_85:
                  v29[6] = 1;
                  v29[7] = v59;
                  LOBYTE(v65) = 1;
                  v379 = v65;
                }
              }
LABEL_92:
              v69 = 0x2010100u >> (8 * (*((_BYTE *)v29 + 419) + 1));
              v70 = 0x2010100u >> (8 * (*(_BYTE *)(v27 + v32 + 419) + 1));
              if ( (_BYTE)v70 == (_BYTE)v69 )
              {
                if ( !*(_BYTE *)(v27 + v32 + 64) )
                  goto LABEL_104;
                v71 = *(_QWORD *)(v27 + v32 + 72);
                v72 = v29[8];
                v73 = v29[9];
                sub_140FFA6E0(v293);
                v74 = (*(int *)v293 >> 13) - 1;
                v75 = 0;
                if ( *(int *)v293 >> 13 <= 0 )
                {
                  v76 = (1 - (*(int *)v293 >> 13)) / 0x190u + 1;
                  v74 += 400 * v76;
                  v75 = -146097 * v76;
                }
                v19 = *(unsigned int *)&v293[8];
                v77 = *(unsigned int *)&v293[8] / 0xF4240uLL
                    + 1000
                    * (*(unsigned int *)&v293[4]
                     + 86400LL
                     * (((v74 / 100) >> 2)
                      + ((1461 * v74) >> 2)
                      + v75
                      + ((*(_DWORD *)v293 >> 4) & 0x1FF)
                      - v74 / 100
                      - 719163))
                    + 1000;
                v78 = 1000 * v71;
                v18 = 0x2540BE3FFLL;
                if ( (unsigned __int64)(v71 - 1) >= 0x2540BE3FFLL )
                  v78 = v71;
                if ( v78 > v77 )
                  goto LABEL_104;
                if ( v72 )
                {
                  v18 = v73 - 1;
                  v79 = 1000 * v73;
                  v19 = 0x2540BE3FFLL;
                  if ( (unsigned __int64)(v73 - 1) >= 0x2540BE3FFLL )
                    v79 = v73;
                  if ( v78 <= v79 && v79 <= v77 )
                  {
LABEL_104:
                    if ( !(_BYTE)v376 )
                    {
                      v26 = v374;
                      v25 = v29 + 53;
                      goto LABEL_141;
                    }
                    v80 = *(unsigned __int8 *)(v27 + v32 + 416);
                    v26 = v374;
                    v25 = v29 + 53;
                    if ( (_BYTE)v80 != 2 && *((_BYTE *)v29 + 416) != (_BYTE)v80 )
                    {
                      *((_BYTE *)v29 + 416) = v80;
                      LOBYTE(v80) = 1;
                      v379 = v80;
                    }
                    if ( *(_QWORD *)(v27 + v32 + 16) )
                    {
                      v81 = *(_QWORD *)(v27 + v32 + 24);
                      if ( !*((_BYTE *)v29 + 16) || v29[3] != v81 )
                      {
                        v29[2] = 1;
                        v29[3] = v81;
                        LOBYTE(v81) = 1;
                        v379 = v81;
                      }
                    }
                    v82 = *(unsigned __int8 *)(v27 + v32 + 417);
                    if ( (_BYTE)v82 != 2 && *((_BYTE *)v29 + 417) != (_BYTE)v82 )
                    {
                      *((_BYTE *)v29 + 417) = v82;
LABEL_140:
                      LOBYTE(v82) = 1;
                      v379 = v82;
                    }
LABEL_141:
                    v91 = *(_QWORD *)(v27 + v32 + 80);
                    v92 = *(_QWORD *)(v27 + v32 + 88);
                    if ( *((_BYTE *)v29 + 80) )
                    {
                      v18 = v29[11];
                      v93 = v18;
                      if ( v92 > v18 )
                        v93 = *(_QWORD *)(v27 + v32 + 88);
                      if ( !v91 || v18 >= v92 )
                      {
LABEL_149:
                        v17 = *(_QWORD *)(v27 + v32 + 96);
                        v20 = *(_QWORD *)(v27 + v32 + 104);
                        if ( *((_DWORD *)v29 + 24) == 1 )
                        {
                          v18 = v29[13];
                          v94 = v18;
                          if ( v20 > v18 )
                            v94 = *(_QWORD *)(v27 + v32 + 104);
                          if ( v17 && v18 < v20 )
                          {
LABEL_22:
                            v29[12] = 1;
                            v29[13] = v94;
                            LOBYTE(v94) = 1;
                            v379 = v94;
                            goto LABEL_23;
                          }
                        }
                        else
                        {
                          v94 = *(_QWORD *)(v27 + v32 + 104);
                          if ( v17 )
                            goto LABEL_22;
                        }
                        goto LABEL_23;
                      }
                    }
                    else
                    {
                      v93 = *(_QWORD *)(v27 + v32 + 88);
                      if ( !v91 )
                        goto LABEL_149;
                    }
                    v29[10] = 1;
                    v29[11] = v93;
                    LOBYTE(v93) = 1;
                    v379 = v93;
                    goto LABEL_149;
                  }
                }
              }
              else if ( (unsigned __int8)v70 <= (unsigned __int8)v69 )
              {
                goto LABEL_104;
              }
              v83 = *((_BYTE *)v29 + 416);
              v84 = *(_BYTE *)(v27 + v32 + 416);
              if ( v83 == 2 )
              {
                v26 = v374;
                v25 = v29 + 53;
                if ( v84 != 2 )
                  goto LABEL_139;
              }
              else
              {
                v26 = v374;
                v25 = v29 + 53;
                if ( v83 != v84 )
                  goto LABEL_139;
              }
              v85 = *(_BYTE *)(v27 + v32 + 16);
              if ( *((_DWORD *)v29 + 4) == 1 )
              {
                if ( !v85 || v29[3] != *(_QWORD *)(v27 + v32 + 24) )
                  goto LABEL_138;
              }
              else if ( v85 )
              {
                goto LABEL_138;
              }
              v86 = *((_BYTE *)v29 + 417);
              v87 = *(_BYTE *)(v27 + v32 + 417);
              if ( v86 == 2 )
              {
                if ( v87 != 2 )
                  goto LABEL_138;
              }
              else if ( v86 != v87 )
              {
                goto LABEL_138;
              }
              v88 = *((_BYTE *)v29 + 419);
              v89 = *(_BYTE *)(v27 + v32 + 419);
              if ( v88 == -1 )
              {
                if ( v89 != -1 )
                  goto LABEL_138;
              }
              else if ( v88 != v89 )
              {
                goto LABEL_138;
              }
              v90 = *(_BYTE *)(v27 + v32 + 64);
              if ( *((_DWORD *)v29 + 16) != 1 )
              {
                v84 = *((_BYTE *)v29 + 416);
                if ( !v90 )
                  goto LABEL_141;
                goto LABEL_139;
              }
              if ( v90 )
              {
                v84 = *((_BYTE *)v29 + 416);
                if ( v29[9] == *(_QWORD *)(v27 + v32 + 72) )
                  goto LABEL_141;
LABEL_139:
                *((_BYTE *)v29 + 416) = v84;
                *((_OWORD *)v29 + 1) = *(_OWORD *)(v27 + v32 + 16);
                *((_BYTE *)v29 + 417) = *(_BYTE *)(v27 + v32 + 417);
                v82 = *(unsigned __int8 *)(v27 + v32 + 419);
                *((_BYTE *)v29 + 419) = v82;
                *((__m128i *)v29 + 4) = _mm_loadu_si128((const __m128i *)(v27 + v32 + 64));
                goto LABEL_140;
              }
LABEL_138:
              v84 = *((_BYTE *)v29 + 416);
              goto LABEL_139;
            }
            sub_14149C500(v293, v27 + v32 + 288);
            v40 = v29[36];
            if ( v40 )
              sub_140001660(v29[37], v40, 1);
            v36 = *(_QWORD *)&v293[16];
            v29[38] = *(_QWORD *)&v293[16];
            *((__m128i *)v29 + 18) = _mm_loadu_si128((const __m128i *)v293);
            LOBYTE(v36) = 1;
          }
          else
          {
            v34 = *(_QWORD *)(v27 + v32 + 8);
            v35 = sub_1409DA470(*(_QWORD *)(v27 + v32 + 296), *(_QWORD *)(v27 + v32 + 304));
            v36 = sub_1403B9650(v29, v35, v33, v34);
            LOBYTE(v36) = (v379 | v36) & 1;
          }
          v379 = v36;
          goto LABEL_44;
        }
        v32 += 424;
      }
      while ( v28 != v32 );
      v29 = v375;
      if ( v375 != (_QWORD *)v26 )
        continue;
      break;
    }
LABEL_161:
    if ( (v379 & 1) != 0 )
    {
      v360.m128i_i32[0] = sub_141475580(v20, v17, v18, v19);
      v360.m128i_i32[1] = v95;
      sub_141475530(v293, &v360, 3577643008LL, 27111902);
      if ( v293[0] )
        v96 = 0;
      else
        v96 = *(_QWORD *)&v293[8];
      if ( v377 > v96 )
        v96 = v377;
      if ( *(_QWORD *)(v378 + 752) > v96 )
        v96 = *(_QWORD *)(v378 + 752);
      *(_QWORD *)&v314[72] = v96;
    }
    v338 = *(_QWORD *)&v314[80];
    v337 = *(_OWORD *)&v314[64];
    v336 = *(_OWORD *)&v314[48];
    v335 = *(_OWORD *)&v314[32];
    v334 = *(_OWORD *)&v314[16];
    v333 = *(_OWORD *)v314;
    v97 = (_DWORD *)v367[69];
    v98 = v367[70];
    sub_1403C7270(&v289, v97, v98);
    if ( v289 == -1 )
    {
      v355 = v292;
      v354 = v291;
      v353 = v290;
    }
    else
    {
      LODWORD(v355) = 3;
      *(_QWORD *)&v353 = 0;
      *((_QWORD *)&v353 + 1) = 8;
      v354 = 0;
      sub_14034ED40(&v289);
    }
    v332 = v98;
    v348 = v97;
    v101 = *((_QWORD *)&v333 + 1);
    v102 = v334;
    v103 = sub_141470CD0(v100, v99);
    v105 = v103;
    if ( *(_BYTE *)(v103 + 16) == 1 )
    {
      v106 = *(_OWORD *)v103;
    }
    else
    {
      *(_QWORD *)&v106 = sub_141486EF0();
      *(_OWORD *)v105 = v106;
      *(_BYTE *)(v105 + 16) = 1;
    }
    *(_QWORD *)v105 = v106 + 1;
    *(_OWORD *)&v314[16] = *(&off_14174C6F0 + 1);
    *(_OWORD *)v314 = off_14174C6F0;
    *(_OWORD *)&v314[32] = v106;
    if ( v102 )
    {
      LOBYTE(v104) = 1;
      sub_1416BA580(v314, v102, &v314[32], v104);
      for ( i = 0; i != v102; ++i )
      {
        sub_14149C500(v293, v101 + 424 * i + 192);
        sub_140474440(v314, v293);
      }
    }
    *(_OWORD *)&v293[32] = *(_OWORD *)&v314[32];
    *(_OWORD *)&v293[16] = *(_OWORD *)&v314[16];
    *(_OWORD *)v293 = *(_OWORD *)v314;
    v107 = v355;
    v108 = *((_QWORD *)&v354 + 1);
    sub_14032DA10(v314, &v353);
    v368 = v108;
    *((_QWORD *)&v351 + 1) = v108;
    v350 = *(__m128i *)v314;
    v109 = *(_QWORD *)&v314[16];
    *(_QWORD *)&v351 = *(_QWORD *)&v314[16];
    v110 = *(_DWORD *)(v378 + 800);
    LODWORD(v359) = v107;
    if ( v110 <= v107 )
      v110 = v107;
    if ( v110 < 2 )
      v110 = 1;
    LODWORD(v352) = v110;
    sub_1402AF760((__int64)&v350, (__int64 *)v293);
    _RCX = v378 + 768;
    v373 = (_QWORD *)(v378 + 768);
    v115 = v351;
    LOBYTE(v377) = (_QWORD)v351 != v109;
    v116 = *(_QWORD *)(v378 + 776);
    v372 = v116 + 160LL * *(_QWORD *)(v378 + 784);
    v117 = 160 * v351;
    while ( 1 )
    {
      v375 = (_QWORD *)v350.m128i_i64[1];
      v376 = v115;
      v374 = v117;
LABEL_183:
      if ( v116 == v372 || !*(_QWORD *)&v293[24] )
        break;
      v121 = *(_OWORD *)v293;
LABEL_186:
      v122 = sub_140378810(&v293[32], v116 + 120);
      _RCX = v122 >> 57;
      v123 = _mm_cvtsi32_si128(v122 >> 57);
      v124 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v123, v123), 0), 68);
      v125 = *(_QWORD *)(v116 + 128);
      v126 = *(_QWORD *)(v116 + 136);
      for ( j = nullptr; ; j += 2 )
      {
        v127 = *((_QWORD *)&v121 + 1) & v122;
        v128 = _mm_loadu_si128((const __m128i *)(v121 + v127));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v128, v124));
        if ( _R13D )
          break;
LABEL_192:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v128, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
        {
          v116 += 160LL;
          if ( v116 != v372 )
            goto LABEL_186;
          goto LABEL_268;
        }
        v122 = (unsigned __int64)j + v127 + 16;
      }
      v379 = (signed __int64)j;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        v130 = v127;
        _RCX = -(__int64)(*((_QWORD *)&v121 + 1) & (v127 + _RCX));
        if ( v126 == *(_QWORD *)(v121 + 24 * _RCX - 8)
          && !(unsigned int)sub_1416847B0(v125, *(_QWORD *)(v121 + 24 * _RCX - 16), v126) )
        {
          break;
        }
        v131 = _R13D - 1;
        LOWORD(v131) = _R13D & (_R13D - 1);
        v132 = (_WORD)v131 == 0;
        _R13D = v131;
        v127 = v130;
        j = (_QWORD *)v379;
        if ( v132 )
          goto LABEL_192;
      }
      v379 = v116 + 160;
      v133 = v376;
      v134 = v374;
      if ( v376 )
      {
        v135 = v374;
        v136 = v375;
        while ( v136[17] != v126 || (unsigned int)sub_1416847B0(v136[16], v125, v126) )
        {
          v136 += 20;
          v135 -= 160;
          if ( !v135 )
            goto LABEL_266;
        }
        sub_14149C500(v316, v136 + 15);
        v137 = v136[18];
        v138 = *((_BYTE *)v136 + 152);
        *(_QWORD *)&v314[48] = v136[6];
        v139 = *((_OWORD *)v136 + 1);
        *(_OWORD *)&v314[32] = *((_OWORD *)v136 + 2);
        *(_OWORD *)&v314[16] = v139;
        *(_QWORD *)&v314[88] = v136[11];
        v140 = *(_OWORD *)(v136 + 7);
        *(_OWORD *)&v314[72] = *(_OWORD *)(v136 + 9);
        *(_OWORD *)&v314[56] = v140;
        v315 = v136[14];
        *(_OWORD *)&v314[96] = *((_OWORD *)v136 + 6);
        v317 = v137;
        v318 = v138;
        v141 = *v136;
        *(_OWORD *)v314 = *(_OWORD *)v136;
        v142 = *(_QWORD *)(v116 + 144);
        if ( v142 != v137 )
        {
          if ( v142 <= v137 )
            goto LABEL_209;
          v143 = *(_BYTE *)(v116 + 152);
          goto LABEL_208;
        }
        v143 = *(_BYTE *)(v116 + 152);
        if ( v138 != v143 )
        {
          if ( v138 )
            goto LABEL_209;
          v132 = v143 == 0;
          v143 = 1;
          if ( v132 )
            goto LABEL_209;
LABEL_208:
          v317 = *(_QWORD *)(v116 + 144);
          v318 = v143;
          *(_QWORD *)&v314[48] = *(_QWORD *)(v116 + 48);
          v144 = *(_OWORD *)(v116 + 16);
          *(_OWORD *)&v314[32] = *(_OWORD *)(v116 + 32);
          *(_OWORD *)&v314[16] = v144;
          *(_QWORD *)&v314[88] = *(_QWORD *)(v116 + 88);
          v145 = *(_OWORD *)(v116 + 56);
          *(_OWORD *)&v314[72] = *(_OWORD *)(v116 + 72);
          *(_OWORD *)&v314[56] = v145;
          goto LABEL_209;
        }
        v148 = *(_QWORD *)(v116 + 16);
        v149 = v136[2];
        if ( v148 == 2 )
        {
          if ( (_DWORD)v149 != 2 )
            goto LABEL_208;
        }
        else
        {
          if ( (_DWORD)v149 == 2
            || *(double *)(v116 + 40) != *((double *)v136 + 5)
            || *(_DWORD *)(v116 + 48) != *((_DWORD *)v136 + 12) )
          {
            goto LABEL_208;
          }
          v165 = *((_BYTE *)v136 + 32);
          if ( *(_DWORD *)(v116 + 32) == 1 )
          {
            if ( !v165 || *(_DWORD *)(v116 + 36) != *((_DWORD *)v136 + 9) )
              goto LABEL_208;
          }
          else if ( v165 )
          {
            goto LABEL_208;
          }
          if ( (_DWORD)v148 == 1 )
          {
            if ( (v149 & 1) == 0 || *(_QWORD *)(v116 + 24) != v136[3] )
              goto LABEL_208;
          }
          else if ( (v149 & 1) != 0 )
          {
            goto LABEL_208;
          }
        }
        v150 = *(_QWORD *)(v116 + 56);
        v151 = v136[7];
        if ( v150 == 2 || (_DWORD)v151 == 2 )
        {
          if ( (_DWORD)v150 != 2 || (_DWORD)v151 != 2 )
            goto LABEL_208;
        }
        else
        {
          if ( *(double *)(v116 + 80) != *((double *)v136 + 10) || *(_DWORD *)(v116 + 88) != *((_DWORD *)v136 + 22) )
            goto LABEL_208;
          v152 = *((_BYTE *)v136 + 72);
          if ( *(_DWORD *)(v116 + 72) == 1 )
          {
            if ( !v152 || *(_DWORD *)(v116 + 76) != *((_DWORD *)v136 + 19) )
              goto LABEL_208;
          }
          else if ( v152 )
          {
            goto LABEL_208;
          }
          if ( (_DWORD)v150 != 1 )
          {
            if ( (v151 & 1) == 0 )
              goto LABEL_209;
            goto LABEL_208;
          }
          if ( (v151 & 1) == 0 || *(_QWORD *)(v116 + 64) != v136[8] )
            goto LABEL_208;
        }
LABEL_209:
        if ( *(_DWORD *)(v116 + 96) != 2 )
        {
          if ( *((_DWORD *)v136 + 24) == 2 )
          {
            v146 = *(_QWORD *)v116;
            goto LABEL_212;
          }
          sub_140FFA6E0(&v360);
          v153 = (v360.m128i_i32[0] >> 13) - 1;
          v154 = 0;
          if ( v360.m128i_i32[0] >> 13 <= 0 )
          {
            v155 = (1 - (v360.m128i_i32[0] >> 13)) / 0x190u + 1;
            v153 += 400 * v155;
            v154 = -146097 * v155;
          }
          v156 = 1000
               * (v360.m128i_u32[1]
                + 86400LL
                * (((v153 / 100) >> 2)
                 + ((1461 * v153) >> 2)
                 + v154
                 + (((unsigned __int32)v360.m128i_i32[0] >> 4) & 0x1FF)
                 - v153 / 100
                 - 719163));
          v146 = *(_QWORD *)v116;
          v157 = (__int64 *)(v116 + 144);
          if ( *(_QWORD *)v116 )
            v157 = (__int64 *)(v116 + 8);
          v158 = v360.m128i_u32[2] / 0xF4240uLL + v156 + 1000;
          v159 = *v157;
          v160 = 1000 * v159;
          if ( (unsigned __int64)(v159 - 1) >= 0x2540BE3FFLL )
            v160 = v159;
          if ( v160 <= v158 )
          {
            v161 = v136 + 18;
            if ( v141 )
              v161 = v136 + 1;
            v162 = *v161;
            v163 = *v161 - 1;
            v164 = 1000 * *v161;
            if ( v163 >= 0x2540BE3FFLL )
              v164 = v162;
            if ( v164 > v158 || v160 >= v164 )
            {
LABEL_212:
              v315 = *(_QWORD *)(v116 + 112);
              *(_OWORD *)&v314[96] = *(_OWORD *)(v116 + 96);
              v147 = *(_QWORD *)(v116 + 8);
              *(_QWORD *)v314 = v146;
              *(_QWORD *)&v314[8] = v147;
            }
          }
        }
        sub_141684120(v286, v314, 160);
        if ( (unsigned __int8)sub_140420FA0(v136, v286) )
        {
          j = v287;
          v116 = v379;
          if ( v287 )
            sub_140001660(v288, v287, 1);
        }
        else
        {
          v166 = v136[15];
          v116 = v379;
          if ( v166 )
            sub_140001660(v136[16], v166, 1);
          sub_141684120(v136, v286, 160);
          LOBYTE(v377) = 1;
        }
        goto LABEL_183;
      }
LABEL_266:
      sub_14149C500(&v319, v116 + 120);
      v167 = *(_QWORD *)(v116 + 144);
      v168 = *(_BYTE *)(v116 + 152);
      *(_QWORD *)&v314[32] = *(_QWORD *)(v116 + 48);
      v169 = *(__m128i *)(v116 + 16);
      *(_OWORD *)&v314[16] = *(_OWORD *)(v116 + 32);
      *(__m128i *)v314 = v169;
      v170 = _mm_loadu_si128((const __m128i *)v116);
      v112 = v319;
      v113 = v320;
      v171 = v321;
      v362.m128i_i64[0] = *(_QWORD *)&v314[32];
      v361 = *(_OWORD *)&v314[16];
      v360 = v169;
      *(_QWORD *)&v358 = *(_QWORD *)(v116 + 88);
      v172 = *(__m128i *)(v116 + 56);
      v357 = *(_OWORD *)(v116 + 72);
      v356 = v172;
      v322 = *(_OWORD *)(v116 + 96);
      v323 = *(_QWORD *)(v116 + 112);
      if ( v133 == v350.m128i_i64[0] )
      {
        v366 = v320;
        v377 = v319;
        sub_141689490(&v350);
        v375 = (_QWORD *)v350.m128i_i64[1];
        v112 = v377;
        v113 = v366;
      }
      v118 = 20 * v133;
      j = v375;
      *(__m128i *)&v375[v118] = v170;
      j[v118 + 6] = v362.m128i_i64[0];
      v119 = v360;
      *(_OWORD *)&j[v118 + 4] = v361;
      *(__m128i *)&j[v118 + 2] = v119;
      v120 = v357;
      *(__m128i *)&j[v118 + 7] = v356;
      *(_OWORD *)&j[v118 + 9] = v120;
      j[v118 + 11] = v358;
      *(_OWORD *)&j[v118 + 12] = v322;
      _RCX = v323;
      j[v118 + 14] = v323;
      j[v118 + 15] = v112;
      j[v118 + 16] = v113;
      j[v118 + 17] = v171;
      j[v118 + 18] = v167;
      LOBYTE(j[v118 + 19]) = v168;
      v115 = v133 + 1;
      *(_QWORD *)&v351 = v115;
      v117 = v134 + 160;
      LOBYTE(v377) = 1;
      v116 = v379;
    }
LABEL_268:
    if ( (v377 & 1) != 0 )
    {
      v173 = sub_141475580(_RCX, j, v112, v113);
      v174 = v376;
      v360.m128i_i64[0] = __PAIR64__(v175, v173);
      sub_141475530(v314, &v360, 3577643008LL, 27111902);
      if ( v314[0] )
        v176 = 0;
      else
        v176 = *(_QWORD *)&v314[8];
      if ( v368 > v176 )
        v176 = v368;
      if ( *(_QWORD *)(v378 + 792) > v176 )
        v176 = *(_QWORD *)(v378 + 792);
      *((_QWORD *)&v351 + 1) = v176;
      *(_QWORD *)v314 = &v370;
      if ( v174 >= 2 )
      {
        if ( v174 >= 0x15 )
          sub_140B59100(v350.m128i_i64[1], v376, v314);
        else
          sub_140556730(v350.m128i_i64[1], v376, 1, v314);
      }
    }
    HIDWORD(_RAX) = HIDWORD(v352);
    v347 = v352;
    v178 = _mm_load_si128(&v350);
    v346 = v351;
    v345 = v178;
    v179 = *(_QWORD *)&v293[8];
    if ( *(_QWORD *)&v293[8] )
    {
      v180 = *(_QWORD *)&v293[24];
      if ( *(_QWORD *)&v293[24] )
      {
        v181 = *(_QWORD *)v293;
        v182 = (const __m128i *)(*(_QWORD *)v293 + 16LL);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v293));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v184 = _mm_load_si128(v182);
              v181 -= 384;
              ++v182;
              _R15D = _mm_movemask_epi8(v184) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v185 = -3 * _RAX;
          v186 = *(_QWORD *)(v181 + 8 * v185 - 24);
          if ( v186 )
            sub_140001660(*(_QWORD *)(v181 + 8 * v185 - 16), v186, 1);
          --v180;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v180 );
      }
      v187 = (24 * v179 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v188 = v187 + v179 + 17;
      if ( v188 )
        sub_140001660(*(_QWORD *)v293 - v187, v188, 16);
    }
    if ( (_DWORD)v338 == (_DWORD)v344 && *((_QWORD *)&v337 + 1) == *((_QWORD *)&v343 + 1) )
    {
      if ( *((_QWORD *)&v334 + 1) != -1 )
      {
        if ( *((_QWORD *)&v340 + 1) == -1
          || *((_QWORD *)&v335 + 1) != *((_QWORD *)&v341 + 1)
          || (unsigned int)sub_1416847B0(v335, v341, *((_QWORD *)&v335 + 1)) )
        {
          goto LABEL_310;
        }
LABEL_295:
        v189 = v334;
        if ( (_QWORD)v334 != (_QWORD)v340 )
          goto LABEL_310;
        if ( (_QWORD)v334 )
        {
          v190 = v339.m128i_i64[1];
          v191 = *((_QWORD *)&v333 + 1);
          while ( (unsigned __int8)sub_140423430(v191, v190) )
          {
            v190 += 424;
            v191 += 424;
            if ( !--v189 )
              goto LABEL_300;
          }
          goto LABEL_310;
        }
LABEL_300:
        if ( (_BYTE)v337 == 2 )
        {
          if ( (_BYTE)v343 != 2 )
            goto LABEL_310;
        }
        else if ( (_BYTE)v343 == 2 || (_BYTE)v337 != (_BYTE)v343 || v336 != v342 )
        {
          goto LABEL_310;
        }
        if ( BYTE4(v338) == 2 )
        {
          if ( BYTE4(v344) != 2 )
            goto LABEL_310;
        }
        else if ( BYTE4(v338) != BYTE4(v344) )
        {
          goto LABEL_310;
        }
LABEL_331:
        if ( (_DWORD)v347 == (_DWORD)v359 && *((_QWORD *)&v346 + 1) == v368 )
        {
          v205 = v346;
          if ( (_QWORD)v346 == (_QWORD)v354 )
          {
            if ( (_QWORD)v346 )
            {
              v206 = *((_QWORD *)&v353 + 1);
              v207 = v345.m128i_i64[1];
              while ( (unsigned __int8)sub_140420FA0(v207, v206) )
              {
                v206 += 160;
                v207 += 160;
                if ( !--v205 )
                  goto LABEL_344;
              }
              goto LABEL_339;
            }
LABEL_344:
            v213 = *(_QWORD *)(v378 + 816);
            v214 = 352LL * *(_QWORD *)(v378 + 824);
            v215 = (const __m128i *)sub_1401C5950(0);
            if ( !v215 )
              sub_1416C2100(&off_141792398);
            v216 = _mm_loadu_si128(v215);
            ++v215->m128i_i64[0];
            *(_OWORD *)&v314[16] = xmmword_1416C8810;
            *(_OWORD *)v314 = *(_OWORD *)&off_1416C8800;
            *(__m128i *)&v314[32] = v216;
            *(_QWORD *)v293 = v213;
            *(_QWORD *)&v293[8] = v213 + v214;
            *(_QWORD *)&v293[16] = v373;
            sub_140445DD0(v314, v293);
            v356 = _mm_load_si128((const __m128i *)v314);
            v357 = *(_OWORD *)&v314[16];
            v358 = *(_OWORD *)&v314[32];
            v217 = v378;
            v218 = v378 + 936;
            if ( *(_QWORD *)(v378 + 936) == -1 )
            {
              v324.m128i_i64[0] = -1;
            }
            else
            {
              sub_14149C500(v293, v378 + 936);
              v219 = v217;
              v220 = *(_BYTE *)(v217 + 1048);
              if ( *(_QWORD *)(v219 + 960) == -1 )
              {
                v221 = -1;
              }
              else
              {
                sub_14149C500(v314, v219 + 960);
                v221 = *(_QWORD *)v314;
                v360 = _mm_loadu_si128((const __m128i *)&v314[8]);
              }
              v327 = *(_OWORD *)(v378 + 984);
              v328 = *(_OWORD *)(v378 + 1000);
              v329 = *(_OWORD *)(v378 + 1016);
              *(_QWORD *)&v325 = *(_QWORD *)&v293[16];
              v324 = *(__m128i *)v293;
              v326 = v360;
              *((_QWORD *)&v325 + 1) = v221;
              v330 = _mm_loadu_si128((const __m128i *)(v378 + 1032));
              LOBYTE(v331) = v220;
            }
            v384 = 1;
            sub_14038E3B0(v314, v367);
            v222 = *(_QWORD *)v314;
            v360 = *(__m128i *)&v314[8];
            v361 = *(_OWORD *)&v314[24];
            v362 = *(__m128i *)&v314[40];
            v363 = *(__m128i *)&v314[56];
            v364 = *(__m128i *)&v314[72];
            v365 = *(__m128i *)&v314[88];
            if ( *(_QWORD *)v314 == 2 )
            {
              v223 = v369;
              v369[5] = v365;
              v223[4] = v364;
              v224 = _mm_load_si128(&v360);
              v225 = (__m128i)v361;
              v226 = v362;
              v223[3] = v363;
              v223[2] = v226;
              v223[1] = v225;
              *v223 = v224;
              sub_140348880(&v324);
              sub_14067FCE0(&v356);
              goto LABEL_312;
            }
            sub_141684120(v294, &v314[104], 968);
            *(__m128i *)&v293[8] = v360;
            *(_OWORD *)&v293[24] = v361;
            *(__m128i *)&v293[40] = v362;
            *(__m128i *)&v293[56] = v363;
            *(__m128i *)&v293[72] = v364;
            *(__m128i *)&v293[88] = _mm_load_si128(&v365);
            *(_QWORD *)v293 = v222;
            v383 = 1;
            v382 = 1;
            v381 = 1;
            v380 = 1;
            sub_14003AF10(v314, *((_QWORD *)&v303 + 1), *((_QWORD *)&v303 + 1) + 160 * v304);
            v227 = v378 + 504;
            sub_1400158C0(v378 + 504);
            sub_141684120(v227, v296, 176);
            sub_14034DF40(v349);
            v228 = (_OWORD *)v349;
            *(_QWORD *)(v349 + 80) = v302;
            v228[4] = v301;
            v229 = v297;
            v230 = v298;
            v231 = v299;
            v228[3] = v300;
            v228[2] = v231;
            v228[1] = v230;
            *v228 = v229;
            sub_140334CA0((__int64)v373);
            v232 = (_QWORD *)(v378 + 808);
            v233 = v373;
            if ( *v373 )
              sub_140001660(*(_QWORD *)(v378 + 776), 160LL * *v373, 8);
            v233[4] = v305;
            v234 = v303;
            *((_OWORD *)v233 + 1) = v304;
            *(_OWORD *)v233 = v234;
            v375 = v232;
            sub_140334CF0(v232);
            v235 = v375;
            v236 = (_QWORD *)v378;
            if ( *v375 )
              sub_140001660(*(_QWORD *)(v378 + 816), 352LL * *v375, 8);
            v235[2] = v307;
            *(_OWORD *)v235 = v306;
            v237 = v236 + 19;
            if ( *((_DWORD *)v236 + 38) != 2 )
              sub_14034EA30(v236 + 19);
            sub_141684120(v236 + 19, v295, 352);
            v236[132] = v313[15];
            sub_140348880((_QWORD *)v218);
            *(_QWORD *)(v218 + 112) = v331;
            *(__m128i *)(v218 + 96) = v330;
            *(_OWORD *)(v218 + 80) = v329;
            *(_OWORD *)(v218 + 64) = v328;
            v238 = _mm_load_si128(&v324);
            v239 = v325;
            v240 = v326;
            *(_OWORD *)(v218 + 48) = v327;
            *(__m128i *)(v218 + 32) = v240;
            *(_OWORD *)(v218 + 16) = v239;
            *(__m128i *)v218 = v238;
            v241 = v308[1];
            v242 = v309;
            v243 = v236[106];
            if ( v309 > v236[104] - v243 )
            {
              v387 = 0;
              v386 = 0;
              v385 = 0;
              sub_141688D30((_DWORD)v236 + 832, v243, v309, 8, 48);
              v236 = (_QWORD *)v378;
              v243 = *(_QWORD *)(v378 + 848);
LABEL_361:
              sub_141684120(v236[105] + 48 * v243, v241, 48 * v242);
              v243 = v236[106];
            }
            else if ( v309 )
            {
              goto LABEL_361;
            }
            v359 = v241;
            v236[106] = v242 + v243;
            v309 = 0;
            if ( *((_QWORD *)&v357 + 1) )
            {
              v348 = v237;
              v244 = *(_QWORD *)(v378 + 824);
              if ( v244 )
              {
                v245 = *(__m128i **)(v378 + 816);
                v376 = (unsigned __int64)&v245[22 * v244];
                v379 = v356.m128i_i64[1];
                v375 = (_QWORD *)v356.m128i_i64[0];
                v374 = *(_QWORD *)&v314[24];
                v372 = *(_QWORD *)&v314[8];
                v367 = *(_QWORD **)v314;
                do
                {
                  v273 = v245;
                  v245 += 22;
                  v255 = sub_140378810(&v358, &v273[11].m128i_u64[1]);
                  v274 = _mm_cvtsi32_si128(v255 >> 57);
                  v275 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v274, v274), 0), 68);
                  for ( k = 0; ; k += 16 )
                  {
                    v246 = v379 & v255;
                    HIDWORD(_RCX) = HIDWORD(v375);
                    v248 = _mm_loadu_si128((const __m128i *)((char *)v375 + v246));
                    _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v248, v275));
                    if ( _ESI )
                      break;
LABEL_370:
                    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v248, (__m128i)-1LL)) )
                      goto LABEL_387;
                    v255 = k + v246 + 16;
                  }
                  v250 = v273[12].m128i_i64[1];
                  v377 = k;
                  while ( 1 )
                  {
                    __asm { tzcnt   ecx, esi }
                    v251 = v246;
                    _RCX = (v379 & (v246 + _RCX)) << 6;
                    v252 = (char *)v375 - _RCX;
                    if ( v250 == *(_QWORD *)((char *)v375 - _RCX - 48)
                      && !(unsigned int)sub_1416847B0(v273[12].m128i_i64[0], *((_QWORD *)v252 - 7), v250) )
                    {
                      break;
                    }
                    v253 = _ESI - 1;
                    LOWORD(v253) = _ESI & (_ESI - 1);
                    v132 = (_WORD)v253 == 0;
                    _ESI = v253;
                    v246 = v251;
                    k = v377;
                    if ( v132 )
                      goto LABEL_370;
                  }
                  v256 = *((_QWORD *)v252 - 2);
                  v257 = 1;
                  if ( v374 )
                  {
                    v377 = *((_QWORD *)v252 - 1);
                    v258 = sub_140378810(&v314[32], &v273[11].m128i_u64[1]);
                    _RCX = v258 >> 57;
                    v260 = _mm_cvtsi32_si128(v258 >> 57);
                    v261 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v260, v260), 0), 68);
                    for ( m = nullptr; ; m += 2 )
                    {
                      v263 = v372 & v258;
                      v264 = v367;
                      v265 = _mm_loadu_si128((const __m128i *)((char *)v367 + v263));
                      _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v265, v261));
                      if ( _ESI )
                        break;
LABEL_379:
                      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v265, (__m128i)-1LL));
                      if ( (_DWORD)_RCX )
                        goto LABEL_381;
                      v258 = (unsigned __int64)m + v263 + 16;
                    }
                    v267 = v273[12].m128i_i64[1];
                    v368 = v263;
                    v366 = v256;
                    v373 = m;
                    while ( 1 )
                    {
                      __asm { tzcnt   ecx, esi }
                      _RCX = -(__int64)(v372 & (v263 + _RCX));
                      v268 = v264;
                      if ( v267 == v264[5 * _RCX - 3] )
                      {
                        v269 = &v264[5 * _RCX];
                        if ( !(unsigned int)sub_1416847B0(v273[12].m128i_i64[0], *(v269 - 4), v267) )
                          break;
                      }
                      v270 = _ESI - 1;
                      LOWORD(v270) = _ESI & (_ESI - 1);
                      v132 = (_WORD)v270 == 0;
                      _ESI = v270;
                      v263 = v368;
                      v264 = v268;
                      v256 = v366;
                      v257 = 1;
                      m = v373;
                      if ( v132 )
                        goto LABEL_379;
                    }
                    v271 = *((_BYTE *)v269 - 16) ^ 1;
                    v257 = v377 >= *(v269 - 1);
                    if ( v366 )
                    {
LABEL_382:
                      if ( ((v257 | (unsigned __int8)v271) & 1) == 0 )
                        continue;
LABEL_386:
                      v272 = *(v252 - 24);
                      v273[10] = _mm_loadu_si128((const __m128i *)(v252 - 40));
                      v273[11].m128i_i8[0] = v272;
                      continue;
                    }
                  }
                  else
                  {
LABEL_381:
                    v271 = 1;
                    if ( v256 )
                      goto LABEL_382;
                  }
                  if ( v271 )
                    goto LABEL_386;
LABEL_387:
                  ;
                }
                while ( v245 != (__m128i *)v376 );
              }
              if ( *v348 != 2 )
              {
                v276 = v378 + 336;
                v277 = sub_14033E140(&v356, v378 + 336);
                if ( v277 )
                {
                  v278 = (const __m128i *)v277;
                  v279 = *(_QWORD *)(v277 + 24);
                  v280 = *(_QWORD *)(v277 + 32);
                  v281 = sub_14033E020(v314, v276);
                  if ( v281 )
                  {
                    v282 = *(_BYTE *)v281;
                    if ( v279 )
                    {
                      if ( ((v280 < *(_QWORD *)(v281 + 8)) & v282) != 0 )
                        goto LABEL_397;
                    }
                    else if ( v282 )
                    {
                      goto LABEL_397;
                    }
                  }
                  v283 = v278[1].m128i_i8[0];
                  v284 = v378;
                  *(__m128i *)(v378 + 312) = _mm_loadu_si128(v278);
                  *(_BYTE *)(v284 + 328) = v283;
                }
              }
            }
LABEL_397:
            v369->m128i_i64[0] = -1;
            v383 = 0;
            v382 = 0;
            v381 = 0;
            v380 = 0;
            sub_14067F150(v314);
            sub_14034E2C0(v293);
            sub_140334A50(v308);
            if ( v308[0] )
              sub_140001660(v359, 48LL * v308[0], 8);
            sub_14034E1B0(v310);
            a1 = v369;
            if ( v311 > 0 )
              sub_140001660(v312, v311, 1);
            sub_140348880(v313);
            sub_14067FCE0(&v356);
            sub_140334CA0((__int64)&v345);
            if ( v345.m128i_i64[0] )
              sub_140001660(v345.m128i_i64[1], 160 * v345.m128i_i64[0], 8);
            sub_140334CA0((__int64)&v353);
            if ( (_QWORD)v353 )
              sub_140001660(*((_QWORD *)&v353 + 1), 160 * v353, 8);
            sub_14034DF40(&v333);
            sub_14034DF40(&v339);
            *(_QWORD *)v314 = sub_1412018B0(&hObject);
            if ( !*(_QWORD *)v314 )
              goto LABEL_329;
            goto LABEL_328;
          }
        }
LABEL_339:
        sub_1403C75B0(v293);
        v208 = v369;
        if ( *(_DWORD *)v293 == -1 )
          goto LABEL_344;
        *(_OWORD *)&v314[80] = *(_OWORD *)&v293[80];
        *(_OWORD *)&v314[64] = *(_OWORD *)&v293[64];
        *(_OWORD *)&v314[48] = *(_OWORD *)&v293[48];
        *(_OWORD *)&v314[32] = *(_OWORD *)&v293[32];
        *(_OWORD *)&v314[16] = *(_OWORD *)&v293[16];
        *(_OWORD *)v314 = *(_OWORD *)v293;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v350.m128i_i64[0] = (__int64)v314;
          v350.m128i_i64[1] = (__int64)sub_140B036A0;
          v356.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
          v356.m128i_i64[1] = 31;
          *(_QWORD *)&v357 = aCodexmateLibCo_16;
          *((_QWORD *)&v357 + 1) = 31;
          *(_QWORD *)&v358 = &off_14174E9F8;
          sub_140985BA0(&unk_14174E9C1, &v350, 2, &v356);
        }
        v209 = *(_QWORD *)v314;
        v360 = *(__m128i *)&v314[8];
        v361 = *(_OWORD *)&v314[24];
        v362 = *(__m128i *)&v314[40];
        v363 = *(__m128i *)&v314[56];
        v364 = *(__m128i *)&v314[72];
        v365.m128i_i64[0] = *(_QWORD *)&v314[88];
        if ( *(_QWORD *)v314 == -1 )
          goto LABEL_344;
        v208[5].m128i_i64[1] = v365.m128i_i64[0];
        *(__m128i *)((char *)v208 + 72) = v364;
        v210 = v360;
        v211 = (__m128i)v361;
        v212 = v362;
        *(__m128i *)((char *)v208 + 56) = v363;
        *(__m128i *)((char *)v208 + 40) = v212;
        *(__m128i *)((char *)v208 + 24) = v211;
        *(__m128i *)((char *)v208 + 8) = v210;
        v208->m128i_i64[0] = v209;
LABEL_312:
        v196 = v345.m128i_i64[1];
        v197 = v346;
        if ( (_QWORD)v346 )
        {
          v198 = (_QWORD *)(v345.m128i_i64[1] + 128);
          do
          {
            v199 = *(v198 - 1);
            if ( v199 )
              sub_140001660(*v198, v199, 1);
            v198 += 20;
            --v197;
          }
          while ( v197 );
        }
        if ( v345.m128i_i64[0] )
          sub_140001660(v196, 160 * v345.m128i_i64[0], 8);
        v200 = *((_QWORD *)&v353 + 1);
        v201 = v354;
        if ( (_QWORD)v354 )
        {
          v202 = (_QWORD *)(*((_QWORD *)&v353 + 1) + 128LL);
          do
          {
            v203 = *(v202 - 1);
            if ( v203 )
              sub_140001660(*v202, v203, 1);
            v202 += 20;
            --v201;
          }
          while ( v201 );
        }
        a1 = v369;
        if ( (_QWORD)v353 )
          sub_140001660(v200, 160 * v353, 8);
        sub_14034DF40(&v333);
        sub_14034DF40(&v339);
LABEL_327:
        *(_QWORD *)v314 = sub_1412018B0(&hObject);
        if ( !*(_QWORD *)v314 )
        {
LABEL_329:
          CloseHandle(hObject);
          return a1;
        }
LABEL_328:
        sub_140018650(v314);
        goto LABEL_329;
      }
      if ( *((_QWORD *)&v340 + 1) == -1 )
        goto LABEL_295;
    }
LABEL_310:
    persist_registry(v314, v367, (__int64)&v333, 0);
    v192 = v369;
    if ( *(_DWORD *)v314 == -1 )
      goto LABEL_331;
    v369[5] = *(__m128i *)&v314[80];
    v192[4] = *(__m128i *)&v314[64];
    v193 = _mm_loadu_si128((const __m128i *)v314);
    v194 = *(__m128i *)&v314[16];
    v195 = *(__m128i *)&v314[32];
    v192[3] = *(__m128i *)&v314[48];
    v192[2] = v195;
    v192[1] = v194;
    *v192 = v193;
    goto LABEL_312;
  }
  a1[5] = *(__m128i *)&v314[80];
  v7 = _mm_loadu_si128((const __m128i *)&v314[16]);
  v8 = *(__m128i *)&v314[32];
  v9 = *(__m128i *)&v314[48];
  a1[4] = *(__m128i *)&v314[64];
  a1[3] = v9;
  a1[2] = v8;
  a1[1] = v7;
  *a1 = v6;
  return a1;
}