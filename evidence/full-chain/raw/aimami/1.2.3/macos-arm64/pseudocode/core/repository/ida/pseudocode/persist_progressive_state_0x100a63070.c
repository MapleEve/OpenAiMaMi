// __ZN13codexmate_lib4core10repository10Repository25persist_progressive_state @ 0x100a63070 | 基线 same-set
// [FULL decompile]

char *__fastcall codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(
        char *a1,
        _QWORD *a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r15
  char *result; // rax
  _DWORD *v18; // rdi
  _DWORD *v19; // rsi
  __int64 j; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  int v23; // edx
  char v24; // dl
  __int64 v25; // rsi
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // rcx
  char *v29; // rdi
  __int64 v30; // r12
  __int64 v31; // r15
  const void *v32; // rbx
  size_t v33; // r14
  __int64 v34; // r13
  unsigned __int8 v35; // r14
  __int64 v36; // rbx
  unsigned __int8 v37; // al
  __int64 v38; // rax
  char *v39; // r14
  __int64 v40; // rdx
  size_t v41; // rdx
  __int64 v42; // rbx
  __int64 *v43; // rbx
  __int64 v44; // rax
  size_t v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  size_t v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  char *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r14
  int v57; // edx
  int v58; // ecx
  unsigned int v59; // ecx
  signed __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // r14
  int v65; // edx
  int v66; // ecx
  unsigned int v67; // ecx
  signed __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  char *v71; // rax
  char *v72; // rax
  unsigned int v73; // eax
  unsigned int v74; // edx
  __int64 v75; // rbx
  __int64 v76; // r14
  int v77; // edx
  int v78; // ecx
  unsigned int v79; // ecx
  signed __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rax
  __m128 *v84; // r8
  __int64 v85; // rax
  __int64 v86; // rax
  char v87; // al
  char v88; // cl
  char v89; // cl
  char v90; // cl
  char v91; // dl
  char v92; // cl
  char v93; // dl
  char v94; // dl
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r14
  int v102; // edx
  __int64 v103; // rax
  _BYTE *v104; // rbx
  __int64 v105; // r14
  _BYTE *v106; // rsi
  __int64 v107; // rbx
  __int64 v108; // r14
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r12
  __int128 v113; // rax
  int v114; // ebx
  __int64 v115; // r14
  __int64 v116; // r14
  int v117; // eax
  __int64 v118; // rdi
  _BYTE *v119; // rsi
  __int8 v120; // dl
  __int64 v121; // rax
  char *v122; // r12
  __int64 v123; // rax
  __int64 v124; // rcx
  char *v125; // r12
  size_t v126; // rbx
  __int64 v127; // r15
  _BYTE *v128; // r14
  unsigned __int64 v129; // rax
  __m128i v131; // xmm1
  _BYTE *v132; // r13
  size_t v133; // r12
  __int64 k; // rdx
  unsigned __int64 v135; // rax
  __m128i v136; // xmm2
  __int64 v138; // rax
  int v139; // eax
  bool v140; // zf
  __int64 v141; // r15
  __int64 v142; // rbx
  __int64 v143; // r15
  __int64 v144; // r14
  __int64 v145; // r13
  char v146; // r8
  __int64 v147; // rax
  char v148; // cl
  __int64 v149; // rbx
  __int64 v150; // r13
  __int64 v151; // r15
  __int64 v152; // r14
  __int64 v153; // r12
  __int64 v154; // r12
  char *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rdx
  char v158; // si
  int v159; // edx
  int v160; // ecx
  unsigned int v161; // ecx
  __int64 v162; // rcx
  char *v163; // rsi
  signed __int64 v164; // rcx
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rsi
  __int64 v168; // rsi
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  char v172; // si
  int v173; // edx
  __int64 v174; // rax
  __int64 v176; // rbx
  __int64 v177; // r14
  __int64 v178; // r15
  const __m128i *v180; // r12
  int v181; // r13d
  __int64 v182; // rax
  __int64 v183; // rsi
  unsigned __int64 v184; // rax
  __int64 v185; // rbx
  __int64 v186; // r15
  __int64 v187; // rbx
  __int64 v188; // r14
  __int64 v189; // r15
  __int64 v190; // rbx
  __int64 v191; // r14
  __int64 v192; // rbx
  __int64 v193; // r14
  const __m128i *v194; // rax
  __int64 v195; // r12
  __int64 *v196; // r13
  __m128i v197; // xmm0
  void *v198; // rbx
  __int64 v199; // rbx
  _QWORD *v200; // r14
  __int64 v201; // rsi
  __int64 v202; // rbx
  _QWORD *v203; // r14
  __int64 v204; // rsi
  __int64 v205; // rbx
  __int64 v206; // r15
  __int64 v207; // r14
  __int64 v208; // rbx
  __int64 v209; // r15
  __int64 v210; // r14
  __int64 v211; // rsi
  char v212; // r14
  unsigned __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rbx
  __int64 v218; // r14
  const __m128i *v219; // r15
  const __m128i *v221; // r12
  int v222; // r13d
  __int8 *v224; // rax
  __int64 v225; // rsi
  _QWORD *v226; // rbx
  void *v227; // r15
  __int64 v228; // rsi
  _QWORD *v229; // r14
  __int64 v230; // r15
  __int64 v231; // rbx
  __int64 v232; // r12
  __int64 v233; // rsi
  _QWORD *v234; // rbx
  __int64 v235; // r14
  _QWORD *v236; // r15
  __int64 v237; // rax
  __int64 *v238; // r15
  __int64 v239; // rax
  __int64 v240; // r12
  __int64 v241; // r14
  _QWORD *v242; // r12
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v246; // r9
  __int64 v247; // rsi
  __int64 v248; // rsi
  const __m128i *v249; // rcx
  __int64 v250; // rbx
  __int64 v251; // rsi
  __int64 v252; // r14
  void *v253; // rdi
  const __m128i *n; // rsi
  __int64 v255; // rax
  char *v256; // r12
  size_t v257; // rbx
  __m128i v258; // xmm2
  size_t v260; // r12
  __int64 v261; // rax
  int v262; // eax
  __m128i v263; // xmm1
  __int64 m; // rcx
  unsigned __int64 v265; // rbx
  __int64 v266; // rax
  __int64 v267; // rbx
  char v268; // r14
  unsigned __int64 v269; // rax
  char *v270; // r12
  __m128i v271; // xmm1
  __m128i v272; // xmm2
  size_t v274; // r13
  __int64 v275; // rcx
  __int64 v276; // rbx
  unsigned __int32 v277; // eax
  char v278; // al
  __int64 v279; // rdx
  char *v280; // r13
  __int64 v281; // rax
  __int64 v282; // rbx
  unsigned __int64 v284; // rax
  const __m128i *v285; // r12
  __int64 v286; // rdi
  __m128i v287; // xmm1
  const void *v288; // r15
  size_t v289; // r13
  char *v290; // r8
  __m128i v291; // xmm2
  __int64 v292; // rax
  __m128i v293; // xmm3
  __m128i v294; // xmm0
  unsigned __int64 v296; // rbx
  const __m128i *v297; // rax
  int v298; // eax
  __int64 v299; // rbx
  __int64 v300; // r15
  __int64 v301; // r14
  __int64 v302; // rax
  unsigned __int8 v303; // cl
  const __m128i *v304; // r12
  __int8 v305; // al
  __int64 v306; // rdx
  __int64 v308; // r14
  __int64 v309; // rbx
  __int64 v310; // r15
  const __m128i *v312; // r12
  int v313; // r13d
  __int64 v314; // rax
  unsigned __int64 v315; // rax
  __int64 v316; // r14
  __int64 v317; // rbx
  __int64 v318; // r14
  const __m128i *v319; // r15
  const __m128i *v321; // r12
  int v322; // r13d
  __int8 *v324; // rax
  __int64 v325; // rsi
  __int64 v326; // rax
  __int64 v327; // rbx
  __int64 v328; // rbx
  _QWORD *v329; // r14
  __int64 v330; // rsi
  __int64 v331; // rbx
  _QWORD *v332; // r14
  __int64 v333; // rsi
  __int64 v334; // rbx
  __int64 v335; // r15
  __int64 v336; // r14
  __int64 v337; // rbx
  __int64 v338; // r15
  __int64 v339; // r14
  __int64 v340; // rbx
  const __m128i *v341; // r14
  _BYTE v342[104]; // [rsp+8h] [rbp-BC8h] BYREF
  _BYTE __src[968]; // [rsp+70h] [rbp-B60h] BYREF
  _BYTE v344[104]; // [rsp+438h] [rbp-798h] BYREF
  _QWORD __dst[121]; // [rsp+4A0h] [rbp-730h] BYREF
  _BYTE v346[120]; // [rsp+868h] [rbp-368h] BYREF
  void *v347; // [rsp+8E0h] [rbp-2F0h]
  size_t v348; // [rsp+8E8h] [rbp-2E8h]
  _QWORD v349[11]; // [rsp+8F0h] [rbp-2E0h] BYREF
  __int64 v350; // [rsp+948h] [rbp-288h]
  _QWORD v351[11]; // [rsp+950h] [rbp-280h] BYREF
  __int64 v352; // [rsp+9A8h] [rbp-228h]
  __m128i v353; // [rsp+9B0h] [rbp-220h] BYREF
  __m128i v354; // [rsp+9C0h] [rbp-210h] BYREF
  __int64 v355; // [rsp+9D0h] [rbp-200h] BYREF
  __int128 v356; // [rsp+9D8h] [rbp-1F8h]
  __int64 v357; // [rsp+9E8h] [rbp-1E8h]
  __int64 v358; // [rsp+9F0h] [rbp-1E0h]
  _OWORD v359[6]; // [rsp+9F8h] [rbp-1D8h] BYREF
  _QWORD *v360; // [rsp+A58h] [rbp-178h]
  __m128i v361; // [rsp+A60h] [rbp-170h] BYREF
  __int128 v362; // [rsp+A78h] [rbp-158h]
  __int64 v363; // [rsp+A88h] [rbp-148h]
  __int128 v364; // [rsp+A90h] [rbp-140h]
  const __m128i *v365; // [rsp+AA0h] [rbp-130h] BYREF
  __int128 v366; // [rsp+AA8h] [rbp-128h]
  __int64 v367; // [rsp+AB8h] [rbp-118h]
  __int128 v368; // [rsp+AC0h] [rbp-110h] BYREF
  __m128i v369; // [rsp+AD0h] [rbp-100h] BYREF
  __int64 v370; // [rsp+AE8h] [rbp-E8h]
  __m128i v371; // [rsp+AF0h] [rbp-E0h] BYREF
  int v372; // [rsp+B04h] [rbp-CCh]
  double v373; // [rsp+B08h] [rbp-C8h]
  __int64 v374; // [rsp+B10h] [rbp-C0h]
  double v375; // [rsp+B18h] [rbp-B8h]
  _DWORD *v376; // [rsp+B20h] [rbp-B0h]
  void *__s2; // [rsp+B28h] [rbp-A8h]
  char *v378; // [rsp+B30h] [rbp-A0h]
  const __m128i *v379; // [rsp+B38h] [rbp-98h]
  __m128i v380; // [rsp+B40h] [rbp-90h] BYREF
  __int64 v381; // [rsp+B50h] [rbp-80h]
  __int64 v382; // [rsp+B58h] [rbp-78h]
  __m128i v383; // [rsp+B60h] [rbp-70h] BYREF
  unsigned int v384; // [rsp+B7Ch] [rbp-54h] BYREF
  size_t __n; // [rsp+B80h] [rbp-50h]
  char *v386; // [rsp+B88h] [rbp-48h]
  __int64 v387; // [rsp+B90h] [rbp-40h]
  __int64 v388; // [rsp+B98h] [rbp-38h]
  char *v389; // [rsp+BA0h] [rbp-30h]

  v388 = a3;
  v378 = a1;
  v5 = a2[25];
  v360 = a2;
  std::path::Path::_join::hb1a495d4f06b13b8(v359, v5, a2[26], &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20);
  v6 = *((_QWORD *)&v359[0] + 1);
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)v342,
    *((__int64 *)&v359[0] + 1),
    *(__int64 *)&v359[1],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v7 = *(_QWORD *)v342;
  v8 = *(_DWORD *)&v342[8];
  if ( *(_QWORD *)v342 != 11 )
  {
    v9 = &v342[12];
    v10 = v344;
    for ( i = 21; i; --i )
      *v10++ = *v9++;
  }
  if ( *(_QWORD *)&v359[0] )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, *(_QWORD *)&v359[0], 1);
  if ( (_DWORD)v7 != 11 )
  {
    result = v378;
    v18 = v378 + 12;
    v19 = v344;
    for ( j = 21; j; --j )
      *v18++ = *v19++;
    *(_QWORD *)result = v7;
    *((_DWORD *)result + 2) = v8;
    return result;
  }
  v384 = v8;
  codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b(
    (__int64)v342,
    v360[28],
    v360[29]);
  v13 = *(_QWORD *)v342;
  qmemcpy(v344, &v342[8], 0x58u);
  if ( *(_QWORD *)v342 != 11 )
  {
    v21 = v378;
    qmemcpy(v378 + 8, v344, 0x58u);
    *v21 = v13;
    goto LABEL_442;
  }
  qmemcpy(v351, v344, sizeof(v351));
  v14 = 0;
  v15 = v351[10];
  v16 = v351[9];
  if ( __OFSUB__(0, v351[3]) )
    *(_QWORD *)&v359[0] = 0x8000000000000000LL;
  else
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v359, &v351[3]);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h97332c104c7ca363(v344, v351, v12, v14);
  if ( LOBYTE(v351[8]) != 2 )
  {
    *(_QWORD *)&v366 = v351[7];
    v365 = (const __m128i *)v351[6];
    LODWORD(v355) = *(_DWORD *)((char *)&v351[8] + 1);
    *(_DWORD *)((char *)&v355 + 3) = HIDWORD(v351[8]);
  }
  *(_QWORD *)&v342[72] = v16;
  *(_QWORD *)&v342[24] = *(_QWORD *)&v359[0];
  *(_OWORD *)&v342[32] = *(_OWORD *)((char *)v359 + 8);
  *(_QWORD *)v342 = *(_QWORD *)v344;
  *(_OWORD *)&v342[8] = *(_OWORD *)&v344[8];
  *(_QWORD *)&v342[48] = v365;
  *(_QWORD *)&v342[56] = v366;
  v342[64] = v351[8];
  v22 = *(unsigned int *)((char *)&v355 + 3);
  *(_DWORD *)&v342[65] = v355;
  *(_DWORD *)&v342[68] = *(_DWORD *)((char *)&v355 + 3);
  v342[84] = BYTE4(v351[10]);
  if ( *(_DWORD *)(v388 + 760) > v15 )
    v15 = *(_DWORD *)(v388 + 760);
  v23 = 4;
  if ( v15 >= 5 )
    v23 = v15;
  *(_DWORD *)&v342[80] = v23;
  if ( LOBYTE(v351[8]) == 2 )
  {
    v24 = *(_BYTE *)(v388 + 744);
    if ( v24 == 2 )
    {
      si128.i64[0] = 0xA0000000FLL;
      v25 = 0;
      v24 = 0;
    }
    else
    {
      v25 = *(_QWORD *)(v388 + 728);
      si128.i64[0] = *(_QWORD *)(v388 + 736);
      *(_DWORD *)((char *)&v365 + 3) = *(_DWORD *)(v388 + 748);
      LODWORD(v365) = *(_DWORD *)(v388 + 745);
    }
    *(_QWORD *)&v342[48] = v25;
    *(_QWORD *)&v342[56] = si128.i64[0];
    v342[64] = v24;
    v22 = *(unsigned int *)((char *)&v365 + 3);
    *(_DWORD *)&v342[68] = *(_DWORD *)((char *)&v365 + 3);
    *(_DWORD *)&v342[65] = (_DWORD)v365;
    if ( BYTE4(v351[10]) != 2 )
    {
LABEL_33:
      v27 = *(_QWORD *)&v342[16];
      if ( !*(_QWORD *)&v342[16] )
        goto LABEL_192;
      goto LABEL_34;
    }
  }
  else if ( BYTE4(v351[10]) != 2 )
  {
    goto LABEL_33;
  }
  v26 = 1;
  if ( (unsigned __int8)*(_DWORD *)(v388 + 764) != 2 )
    v26 = *(_DWORD *)(v388 + 764);
  v342[84] = v26;
  v27 = *(_QWORD *)&v342[16];
  if ( !*(_QWORD *)&v342[16] )
    goto LABEL_192;
LABEL_34:
  v28 = *(_QWORD *)(v388 + 696);
  if ( !v28 )
    goto LABEL_192;
  v371.i64[0] = v16;
  v29 = *(char **)&v342[8];
  __n = *(_QWORD *)&v342[8] + 424 * v27;
  v30 = *(_QWORD *)(v388 + 688);
  v31 = 424 * v28;
  v383.i64[0] = 0;
LABEL_37:
  while ( 2 )
  {
    v387 = (__int64)(v29 + 424);
    v32 = *((const void **)v29 + 25);
    v389 = v29;
    v33 = *((_QWORD *)v29 + 26);
    v34 = 0;
    do
    {
      if ( *(_QWORD *)(v30 + v34 + 208) == v33 )
      {
        v22 = (__int64)v32;
        if ( !memcmp(*(const void **)(v30 + v34 + 200), v32, v33) )
        {
          v35 = *(_BYTE *)(v30 + v34 + 418);
          if ( v35 != 3 && *(_BYTE *)(v30 + v34) )
          {
            v36 = *(_QWORD *)(v30 + v34 + 8);
            v37 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(
                    *(_QWORD *)(v30 + v34 + 296),
                    *(_QWORD *)(v30 + v34 + 304));
            v22 = v37;
            v38 = codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8(
                    (unsigned __int8 *)v389,
                    v37,
                    v35,
                    v36);
            LOBYTE(v38) = (v383.i8[0] | v38) & 1;
            v383.i64[0] = v38;
LABEL_55:
            v42 = v388;
            v39 = v389;
            goto LABEL_56;
          }
          v39 = v389;
          if ( v389[418] == 3 )
          {
            v22 = *(_QWORD *)(v30 + v34 + 304);
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v30 + v34 + 296), v22);
            if ( !v40 )
              goto LABEL_55;
            v22 = *(_QWORD *)(v30 + v34 + 296);
            v41 = *(_QWORD *)(v30 + v34 + 304);
            v42 = v388;
            v39 = v389;
            if ( v41 == 7 && !(*(_DWORD *)v22 ^ 0x6E6B6E75 | *(_DWORD *)(v22 + 3) ^ 0x6E776F6E)
              || *((_QWORD *)v389 + 38) == v41 && !memcmp(*((const void **)v389 + 37), (const void *)v22, v41) )
            {
LABEL_56:
              if ( *(_QWORD *)(v30 + v34 + 336) == 0x8000000000000000LL )
                goto LABEL_64;
LABEL_57:
              if ( *((_QWORD *)v39 + 42) == 0x8000000000000000LL
                || (v45 = *((_QWORD *)v39 + 44), v45 != *(_QWORD *)(v30 + v34 + 352))
                || (v22 = *(_QWORD *)(v30 + v34 + 344), memcmp(*((const void **)v39 + 43), (const void *)v22, v45)) )
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  v344,
                  v30 + v34 + 336);
                v46 = *(_QWORD *)v344;
                v359[0] = *(_OWORD *)&v344[8];
                v39 = v389;
                v22 = *((_QWORD *)v389 + 42);
                if ( v22 != 0x8000000000000000LL && v22 )
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v389 + 43), v22, 1);
                *((_QWORD *)v39 + 42) = v46;
                v48 = *((_QWORD *)&v359[0] + 1);
                v47 = *(_QWORD *)&v359[0];
                *((_QWORD *)v39 + 43) = *(_QWORD *)&v359[0];
                *((_QWORD *)v39 + 44) = v48;
                LOBYTE(v47) = 1;
                v383.i64[0] = v47;
                v42 = v388;
              }
LABEL_64:
              if ( *(_QWORD *)(v30 + v34 + 360) != 0x8000000000000000LL )
              {
                if ( *((_QWORD *)v39 + 45) == 0x8000000000000000LL
                  || (v49 = *((_QWORD *)v39 + 47), v49 != *(_QWORD *)(v30 + v34 + 376))
                  || (v22 = *(_QWORD *)(v30 + v34 + 368), memcmp(*((const void **)v39 + 46), (const void *)v22, v49)) )
                {
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    v344,
                    v30 + v34 + 360);
                  v50 = *(_QWORD *)v344;
                  v359[0] = *(_OWORD *)&v344[8];
                  v39 = v389;
                  v22 = *((_QWORD *)v389 + 45);
                  if ( v22 != 0x8000000000000000LL && v22 )
                    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v389 + 46), v22, 1);
                  *((_QWORD *)v39 + 45) = v50;
                  v52 = *((_QWORD *)&v359[0] + 1);
                  v51 = *(_QWORD *)&v359[0];
                  *((_QWORD *)v39 + 46) = *(_QWORD *)&v359[0];
                  *((_QWORD *)v39 + 47) = v52;
                  LOBYTE(v51) = 1;
                  v383.i64[0] = v51;
                  v42 = v388;
                }
              }
              if ( *((_QWORD *)v39 + 48) == 0x8000000000000000LL && *(_QWORD *)(v30 + v34 + 384) != 0x8000000000000000LL )
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  v344,
                  v30 + v34 + 384);
                v39 = v389;
                v53 = v389 + 384;
                *(_OWORD *)((char *)v359 + 8) = *(_OWORD *)&v344[8];
                *(_QWORD *)&v359[0] = *(_QWORD *)v344;
                v22 = *((_QWORD *)v389 + 48);
                if ( v22 != 0x8000000000000000LL && v22 )
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v389 + 49), v22, 1);
                *((_QWORD *)v53 + 2) = *(_QWORD *)&v359[1];
                v54 = *(_QWORD *)&v359[0];
                *(_OWORD *)v53 = v359[0];
                LOBYTE(v54) = 1;
                v383.i64[0] = v54;
                v42 = v388;
              }
              if ( *((_QWORD *)v39 + 8)
                || *(_BYTE *)(v30 + v34 + 64)
                || v39[419] != 3
                || *(_BYTE *)(v30 + v34 + 419) != 3
                || v39[48] )
              {
                v380.i32[0] = 0;
                if ( *(_DWORD *)(v30 + v34 + 32) != 1 )
                  goto LABEL_96;
              }
              else
              {
                v380.i32[0] = *(_BYTE *)(v30 + v34 + 48) ^ 1;
                if ( *(_DWORD *)(v30 + v34 + 32) != 1 )
                  goto LABEL_96;
              }
              v55 = *(_QWORD *)(v30 + v34 + 40);
              v386 = *((char **)v39 + 4);
              v56 = *((_QWORD *)v39 + 5);
              chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v344);
              v57 = (*(int *)v344 >> 13) - 1;
              v58 = 0;
              if ( *(int *)v344 >> 13 <= 0 )
              {
                v59 = (1 - (*(int *)v344 >> 13)) / 0x190u + 1;
                v57 += 400 * v59;
                v58 = -146097 * v59;
              }
              v60 = *(unsigned int *)&v344[8] / 0xF4240uLL
                  + 1000
                  * (*(unsigned int *)&v344[4]
                   + 86400LL
                   * (((v57 / 100) >> 2)
                    + ((1461 * v57) >> 2)
                    + v58
                    + ((*(_DWORD *)v344 >> 4) & 0x1FF)
                    - v57 / 100
                    - 719163))
                  + 1000;
              v61 = 1000 * v55;
              v22 = 0x2540BE3FFLL;
              if ( (unsigned __int64)(v55 - 1) >= 0x2540BE3FFLL )
                v61 = v55;
              if ( v61 > v60 )
              {
                v42 = v388;
                if ( *(_DWORD *)(v30 + v34 + 48) != 1 )
                  goto LABEL_110;
                goto LABEL_97;
              }
              v42 = v388;
              if ( !v386 )
                goto LABEL_109;
              v22 = v56 - 1;
              v62 = 1000 * v56;
              if ( (unsigned __int64)(v56 - 1) >= 0x2540BE3FFLL )
                v62 = v56;
              if ( v61 > v62 || v62 > v60 )
              {
LABEL_109:
                si128 = _mm_loadu_si128((const __m128i *)(v30 + v34 + 32));
                v72 = v389;
                *((__m128i *)v389 + 2) = si128;
                LOBYTE(v72) = 1;
                v383.i64[0] = (__int64)v72;
                if ( *(_DWORD *)(v30 + v34 + 48) != 1 )
                  goto LABEL_110;
                goto LABEL_97;
              }
LABEL_96:
              if ( *(_DWORD *)(v30 + v34 + 48) != 1 )
                goto LABEL_110;
LABEL_97:
              v63 = *(_QWORD *)(v30 + v34 + 56);
              v386 = *((char **)v389 + 6);
              v64 = *((_QWORD *)v389 + 7);
              chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v344);
              v65 = (*(int *)v344 >> 13) - 1;
              v66 = 0;
              if ( *(int *)v344 >> 13 <= 0 )
              {
                v67 = (1 - (*(int *)v344 >> 13)) / 0x190u + 1;
                v65 += 400 * v67;
                v66 = -146097 * v67;
              }
              v68 = *(unsigned int *)&v344[8] / 0xF4240uLL
                  + 1000
                  * (*(unsigned int *)&v344[4]
                   + 86400LL
                   * (((v65 / 100) >> 2)
                    + ((1461 * v65) >> 2)
                    + v66
                    + ((*(_DWORD *)v344 >> 4) & 0x1FF)
                    - v65 / 100
                    - 719163))
                  + 1000;
              v69 = 1000 * v63;
              v22 = 0x2540BE3FFLL;
              if ( (unsigned __int64)(v63 - 1) >= 0x2540BE3FFLL )
                v69 = v63;
              if ( v69 <= v68 )
              {
                v42 = v388;
                if ( !v386 )
                  goto LABEL_108;
                v22 = v64 - 1;
                v70 = 1000 * v64;
                if ( (unsigned __int64)(v64 - 1) >= 0x2540BE3FFLL )
                  v70 = v64;
                if ( v69 > v70 || v70 > v68 )
                {
LABEL_108:
                  si128 = _mm_loadu_si128((const __m128i *)(v30 + v34 + 48));
                  v71 = v389;
                  *((__m128i *)v389 + 3) = si128;
                  LOBYTE(v71) = 1;
                  v383.i64[0] = (__int64)v71;
                }
              }
              else
              {
                v42 = v388;
              }
LABEL_110:
              v73 = 0x20101u >> (8 * v389[419]);
              v74 = 0x20101u >> (8 * *(_BYTE *)(v30 + v34 + 419));
              if ( (_BYTE)v74 == (_BYTE)v73 )
              {
                if ( !*(_BYTE *)(v30 + v34 + 64) )
                  goto LABEL_122;
                v75 = *(_QWORD *)(v30 + v34 + 72);
                v386 = *((char **)v389 + 8);
                v76 = *((_QWORD *)v389 + 9);
                chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v344);
                v77 = (*(int *)v344 >> 13) - 1;
                v78 = 0;
                if ( *(int *)v344 >> 13 <= 0 )
                {
                  v79 = (1 - (*(int *)v344 >> 13)) / 0x190u + 1;
                  v77 += 400 * v79;
                  v78 = -146097 * v79;
                }
                v80 = *(unsigned int *)&v344[8] / 0xF4240uLL
                    + 1000
                    * (*(unsigned int *)&v344[4]
                     + 86400LL
                     * (((v77 / 100) >> 2)
                      + ((1461 * v77) >> 2)
                      + v78
                      + ((*(_DWORD *)v344 >> 4) & 0x1FF)
                      - v77 / 100
                      - 719163))
                    + 1000;
                v81 = 1000 * v75;
                v22 = 0x2540BE3FFLL;
                if ( (unsigned __int64)(v75 - 1) >= 0x2540BE3FFLL )
                  v81 = v75;
                v42 = v388;
                if ( v81 > v80 )
                  goto LABEL_122;
                if ( v386 )
                {
                  v22 = v76 - 1;
                  v82 = 1000 * v76;
                  if ( (unsigned __int64)(v76 - 1) >= 0x2540BE3FFLL )
                    v82 = v76;
                  if ( v81 <= v82 && v82 <= v80 )
                  {
LABEL_122:
                    if ( !v380.i8[0] )
                    {
                      v29 = (char *)v387;
                      v84 = (__m128 *)v389;
                      goto LABEL_159;
                    }
                    v83 = *(unsigned __int8 *)(v30 + v34 + 416);
                    v29 = (char *)v387;
                    v84 = (__m128 *)v389;
                    if ( (_BYTE)v83 != 2 && v389[416] != (_BYTE)v83 )
                    {
                      v389[416] = v83;
                      LOBYTE(v83) = 1;
                      v383.i64[0] = v83;
                    }
                    if ( *(_QWORD *)(v30 + v34 + 16) )
                    {
                      v85 = *(_QWORD *)(v30 + v34 + 24);
                      if ( !v84[1].i8[0] || v84[1].i64[1] != v85 )
                      {
                        v84[1].i64[0] = 1;
                        v84[1].i64[1] = v85;
                        LOBYTE(v85) = 1;
                        v383.i64[0] = v85;
                      }
                    }
                    v86 = *(unsigned __int8 *)(v30 + v34 + 417);
                    if ( (_BYTE)v86 != 2 && v84[26].i8[1] != (_BYTE)v86 )
                    {
                      v84[26].i8[1] = v86;
LABEL_158:
                      LOBYTE(v86) = 1;
                      v383.i64[0] = v86;
                    }
LABEL_159:
                    v95 = *(_QWORD *)(v30 + v34 + 80);
                    v96 = *(_QWORD *)(v30 + v34 + 88);
                    if ( v84[5].i8[0] )
                    {
                      v22 = v84[5].i64[1];
                      v97 = v22;
                      if ( v96 > v22 )
                        v97 = *(_QWORD *)(v30 + v34 + 88);
                      if ( !v95 || v22 >= v96 )
                      {
LABEL_167:
                        v98 = *(_QWORD *)(v30 + v34 + 96);
                        v99 = *(_QWORD *)(v30 + v34 + 104);
                        if ( v84[6].i32[0] == 1 )
                        {
                          v22 = v84[6].i64[1];
                          v100 = v22;
                          if ( v99 > v22 )
                            v100 = *(_QWORD *)(v30 + v34 + 104);
                          if ( !v98 || v22 >= v99 )
                          {
LABEL_175:
                            if ( v29 != (char *)__n )
                              goto LABEL_37;
                            v101 = v371.i64[0];
                            if ( (v383.i8[0] & 1) != 0 )
                              goto LABEL_184;
                            goto LABEL_192;
                          }
                        }
                        else
                        {
                          v100 = *(_QWORD *)(v30 + v34 + 104);
                          if ( !v98 )
                            goto LABEL_175;
                        }
                        v84[6].i64[0] = 1;
                        v84[6].i64[1] = v100;
                        LOBYTE(v100) = 1;
                        v383.i64[0] = v100;
                        goto LABEL_175;
                      }
                    }
                    else
                    {
                      v97 = *(_QWORD *)(v30 + v34 + 88);
                      if ( !v95 )
                        goto LABEL_167;
                    }
                    v84[5].i64[0] = 1;
                    v84[5].i64[1] = v97;
                    LOBYTE(v97) = 1;
                    v383.i64[0] = v97;
                    goto LABEL_167;
                  }
                }
              }
              else if ( (unsigned __int8)v74 <= (unsigned __int8)v73 )
              {
                goto LABEL_122;
              }
              v84 = (__m128 *)v389;
              v87 = v389[416];
              v88 = *(_BYTE *)(v30 + v34 + 416);
              if ( v87 == 2 )
              {
                v29 = (char *)v387;
                if ( v88 != 2 )
                  goto LABEL_157;
              }
              else
              {
                v29 = (char *)v387;
                if ( v87 != v88 )
                  goto LABEL_157;
              }
              v89 = *(_BYTE *)(v30 + v34 + 16);
              if ( *((_DWORD *)v389 + 4) == 1 )
              {
                if ( !v89 || *((_QWORD *)v389 + 3) != *(_QWORD *)(v30 + v34 + 24) )
                  goto LABEL_156;
              }
              else if ( v89 )
              {
                goto LABEL_156;
              }
              v90 = v389[417];
              v91 = *(_BYTE *)(v30 + v34 + 417);
              if ( v90 == 2 )
              {
                if ( v91 != 2 )
                  goto LABEL_156;
              }
              else if ( v90 != v91 )
              {
                goto LABEL_156;
              }
              v92 = v389[419];
              v93 = *(_BYTE *)(v30 + v34 + 419);
              if ( v92 == 3 )
              {
                if ( v93 != 3 )
                  goto LABEL_156;
              }
              else if ( v92 != v93 )
              {
                goto LABEL_156;
              }
              v94 = *(_BYTE *)(v30 + v34 + 64);
              if ( *((_DWORD *)v389 + 16) != 1 )
              {
                v88 = v389[416];
                if ( !v94 )
                  goto LABEL_159;
                goto LABEL_157;
              }
              if ( v94 )
              {
                v88 = v389[416];
                if ( *((_QWORD *)v389 + 9) == *(_QWORD *)(v30 + v34 + 72) )
                  goto LABEL_159;
LABEL_157:
                v389[416] = v88;
                v84[1] = *(__m128 *)(v30 + v34 + 16);
                v84[26].i8[1] = *(_BYTE *)(v30 + v34 + 417);
                v86 = *(unsigned __int8 *)(v30 + v34 + 419);
                v84[26].i8[3] = v86;
                si128 = _mm_loadu_si128((const __m128i *)(v30 + v34 + 64));
                v84[4] = (__m128)si128;
                goto LABEL_158;
              }
LABEL_156:
              v88 = v389[416];
              goto LABEL_157;
            }
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              v344,
              v30 + v34 + 288);
            v39 = v389;
            v43 = (__int64 *)(v389 + 288);
            v22 = *((_QWORD *)v389 + 36);
            if ( v22 )
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v389 + 37), v22, 1);
            v43[2] = *(_QWORD *)&v344[16];
            v44 = *(_QWORD *)v344;
            v43[1] = *(_QWORD *)&v344[8];
            *v43 = v44;
            LOBYTE(v44) = 1;
            v383.i64[0] = v44;
          }
          v42 = v388;
          if ( *(_QWORD *)(v30 + v34 + 336) == 0x8000000000000000LL )
            goto LABEL_64;
          goto LABEL_57;
        }
      }
      v34 += 424;
    }
    while ( v31 != v34 );
    v29 = (char *)v387;
    if ( v387 != __n )
      continue;
    break;
  }
  v42 = v388;
  v101 = v371.i64[0];
  if ( (v383.i8[0] & 1) != 0 )
  {
LABEL_184:
    *(_QWORD *)&v359[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v29, v22);
    DWORD2(v359[0]) = v102;
    std::time::SystemTime::duration_since::had059553cab94f96(v344, v359, 0, 0);
    if ( v344[0] )
      v103 = 0;
    else
      v103 = *(_QWORD *)&v344[8];
    if ( v101 > v103 )
      v103 = v101;
    if ( *(_QWORD *)(v42 + 752) > v103 )
      v103 = *(_QWORD *)(v42 + 752);
    *(_QWORD *)&v342[72] = v103;
  }
LABEL_192:
  qmemcpy(v349, v342, sizeof(v349));
  v104 = (_BYTE *)v360[52];
  v105 = v360[53];
  v106 = v104;
  codexmate_lib::core::quota_store::load::h655f425e55903b24(v344, (__int64)v104, v105);
  v347 = v104;
  v348 = v105;
  if ( *(_DWORD *)v344 == 11 )
  {
    v364 = *(_OWORD *)&v344[32];
    v363 = *(_QWORD *)&v344[24];
    v362 = *(_OWORD *)&v344[8];
  }
  else
  {
    qmemcpy(v342, v344, 0x60u);
    v106 = &v344[96];
    DWORD2(v364) = 3;
    *(_QWORD *)&v364 = 0;
    *(_QWORD *)&v362 = 0;
    *((_QWORD *)&v362 + 1) = 8;
    v363 = 0;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v342);
  }
  v107 = v349[1];
  v108 = v349[2];
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v112 = v109;
  if ( *(_BYTE *)(v109 + 16) == 1 )
  {
    *(_QWORD *)&v113 = *(_QWORD *)v109;
    *((_QWORD *)&v113 + 1) = *(_QWORD *)(v112 + 8);
  }
  else
  {
    *(_QWORD *)&v113 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                         &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                         v106,
                         v110,
                         v111);
    *(_OWORD *)v112 = v113;
    *(_BYTE *)(v112 + 16) = 1;
  }
  *(_QWORD *)v112 = v113 + 1;
  memset(&v342[8], 0, 24);
  *(_QWORD *)v342 = &xmmword_1015FBEC0;
  *(_OWORD *)&v342[32] = v113;
  if ( v108 )
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v342, v108, &v342[32], 1);
    v340 = v107 + 192;
    do
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v344, v340);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v342, v344);
      v340 += 424;
      --v108;
    }
    while ( v108 );
  }
  *(_OWORD *)&v344[32] = *(_OWORD *)&v342[32];
  *(_QWORD *)&v344[24] = *(_QWORD *)&v342[24];
  *(_OWORD *)&v344[8] = *(_OWORD *)&v342[8];
  *(_QWORD *)v344 = *(_QWORD *)v342;
  v114 = DWORD2(v364);
  v115 = v364;
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hee2720bf590dd773(v359);
  v350 = v115;
  *(_QWORD *)&v342[24] = v115;
  *(_QWORD *)v342 = *(_QWORD *)&v359[0];
  v116 = *(_QWORD *)&v359[1];
  *(_OWORD *)&v342[8] = *(_OWORD *)((char *)v359 + 8);
  if ( *(_DWORD *)(v388 + 800) > v114 )
    v114 = *(_DWORD *)(v388 + 800);
  v117 = 1;
  if ( v114 >= 2 )
    v117 = v114;
  *(_DWORD *)&v342[32] = v117;
  v118 = (__int64)v342;
  v119 = v344;
  alloc::vec::Vec$LT$T$C$A$GT$::retain::hed3430a67c186fee(v342, v344);
  v120 = *(_QWORD *)&v342[16] != v116;
  v121 = *(_QWORD *)(v388 + 784);
  if ( v121 )
  {
    v122 = *(char **)(v388 + 776);
    v383.i64[0] = (__int64)&v122[160 * v121];
    while ( 2 )
    {
      if ( *(_QWORD *)&v344[24] )
      {
        v380.i8[0] = v120;
        v126 = *(_QWORD *)v344;
        v127 = *(_QWORD *)&v344[8];
        v387 = *(_QWORD *)v344 - 24LL;
        __n = *(_QWORD *)v344;
LABEL_208:
        v128 = v122 + 120;
        v118 = (__int64)&v344[32];
        v119 = v122 + 120;
        v129 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v344[32], v122 + 120);
        _RCX = v129 >> 57;
        v131 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v129 >> 57), (__m128i)0LL);
        v132 = *((_BYTE **)v122 + 16);
        v389 = v122;
        v133 = *((_QWORD *)v122 + 17);
        for ( k = 0; ; k += 16 )
        {
          v135 = v127 & v129;
          v136 = _mm_loadu_si128((const __m128i *)(v126 + v135));
          si128 = _mm_cmpeq_epi8(v136, v131);
          _EBX = _mm_movemask_epi8(si128);
          if ( _EBX )
            break;
LABEL_214:
          si128.i64[0] = -1;
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v136, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            v122 = v389 + 160;
            v126 = __n;
            if ( v389 + 160 != (char *)v383.i64[0] )
              goto LABEL_208;
            v120 = v380.i8[0];
            goto LABEL_354;
          }
          v129 = v135 + k + 16;
          v126 = __n;
        }
        v386 = (char *)v135;
        v371 = v131;
        v382 = k;
        v361 = v136;
        while ( 1 )
        {
          __asm { tzcnt   ecx, ebx }
          v138 = -3LL * (v127 & (v135 + _RCX));
          HIDWORD(_RCX) = HIDWORD(v387);
          if ( v133 == *(_QWORD *)(v387 + 8 * v138 + 16) )
          {
            v119 = *(_BYTE **)(v387 + 8 * v138 + 8);
            v118 = (__int64)v132;
            if ( !memcmp(v132, v119, v133) )
              break;
          }
          v139 = _EBX - 1;
          LOWORD(v139) = _EBX & (_EBX - 1);
          v140 = (_WORD)v139 == 0;
          _EBX = v139;
          v135 = (unsigned __int64)v386;
          v131 = _mm_load_si128(&v371);
          k = v382;
          v136 = _mm_load_si128(&v361);
          if ( v140 )
            goto LABEL_214;
        }
        if ( *(_QWORD *)&v342[16] )
        {
          v141 = 160LL * *(_QWORD *)&v342[16];
          v142 = *(_QWORD *)&v342[8] + 120LL;
          while ( *(_QWORD *)(v142 + 16) != v133 || memcmp(*(const void **)(v142 + 8), v132, v133) )
          {
            v142 += 160;
            v141 -= 160;
            if ( !v141 )
              goto LABEL_232;
          }
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v359, v142);
          v143 = *(_QWORD *)(v142 - 104);
          v118 = (__int64)v389;
          if ( v143 != 2 )
          {
            si128.i64[0] = *(_QWORD *)(v142 - 80);
            v373 = *(double *)si128.i64;
            LODWORD(v374) = *(_DWORD *)(v142 - 72);
            v354.i32[0] = *(_DWORD *)(v142 - 88);
            LODWORD(v376) = *(_DWORD *)(v142 - 84);
            v370 = *(_QWORD *)(v142 - 96);
          }
          v144 = *(_QWORD *)(v142 - 64);
          if ( v144 != 2 )
          {
            si128.i64[0] = *(_QWORD *)(v142 - 40);
            v375 = *(double *)si128.i64;
            v353.i32[0] = *(_DWORD *)(v142 - 32);
            LODWORD(v379) = *(_DWORD *)(v142 - 48);
            v372 = *(_DWORD *)(v142 - 44);
            v352 = *(_QWORD *)(v142 - 56);
          }
          v145 = *(_QWORD *)(v142 + 24);
          v146 = *(_BYTE *)(v142 + 32);
          v387 = *(_QWORD *)(v142 - 24);
          v371.i8[0] = *(_BYTE *)(v142 - 8);
          v361.i64[0] = *(_QWORD *)(v142 - 16);
          v386 = *(char **)(v142 - 120);
          v382 = *(_QWORD *)(v142 - 112);
          v369.i64[0] = *(_QWORD *)&v359[0];
          __n = *(_QWORD *)&v359[1];
          __s2 = *((void **)&v359[0] + 1);
          v147 = *((_QWORD *)v389 + 18);
          if ( v147 != v145 )
          {
            if ( v147 <= v145 )
              goto LABEL_246;
            v148 = v389[152];
            goto LABEL_240;
          }
          v148 = v389[152];
          if ( v146 == v148 )
          {
            v156 = *((_QWORD *)v389 + 2);
            if ( v156 == 2 )
            {
              if ( (_DWORD)v143 != 2 )
                goto LABEL_240;
            }
            else
            {
              if ( (_DWORD)v143 == 2 )
                goto LABEL_240;
              si128.i64[0] = *((_QWORD *)v389 + 5);
              if ( *(double *)si128.i64 != *(double *)(v142 - 80) || *((_DWORD *)v389 + 12) != *(_DWORD *)(v142 - 72) )
                goto LABEL_240;
              v172 = *(_BYTE *)(v142 - 88);
              if ( *((_DWORD *)v389 + 8) == 1 )
              {
                if ( !v172 || *((_DWORD *)v389 + 9) != *(_DWORD *)(v142 - 84) )
                  goto LABEL_240;
              }
              else if ( v172 )
              {
                goto LABEL_240;
              }
              if ( (v156 & 1) != 0 )
              {
                if ( (v143 & 1) == 0 || *((_QWORD *)v389 + 3) != *(_QWORD *)(v142 - 96) )
                  goto LABEL_240;
              }
              else if ( (v143 & 1) != 0 )
              {
                goto LABEL_240;
              }
            }
            v157 = *((_QWORD *)v389 + 7);
            if ( (_DWORD)v144 == 2 || (_DWORD)v157 == 2 )
            {
              if ( (_DWORD)v144 != 2 )
                goto LABEL_240;
              v144 = 2;
              if ( (_DWORD)v157 != 2 )
                goto LABEL_240;
            }
            else
            {
              si128.i64[0] = *((_QWORD *)v389 + 10);
              if ( *(double *)si128.i64 != *(double *)(v142 - 40) || *((_DWORD *)v389 + 22) != *(_DWORD *)(v142 - 32) )
                goto LABEL_240;
              v158 = *(_BYTE *)(v142 - 48);
              if ( *((_DWORD *)v389 + 18) == 1 )
              {
                if ( !v158 || *((_DWORD *)v389 + 19) != *(_DWORD *)(v142 - 44) )
                  goto LABEL_240;
              }
              else if ( v158 )
              {
                goto LABEL_240;
              }
              if ( (v157 & 1) == 0 )
              {
                if ( (v144 & 1) == 0 )
                {
                  v144 = 0;
                  goto LABEL_246;
                }
                goto LABEL_240;
              }
              if ( (v144 & 1) == 0 )
                goto LABEL_240;
              v144 = 1;
              if ( *((_QWORD *)v389 + 8) != *(_QWORD *)(v142 - 56) )
                goto LABEL_240;
            }
          }
          else
          {
            if ( v146 )
              goto LABEL_246;
            v140 = v148 == 0;
            v148 = 1;
            if ( v140 )
              goto LABEL_246;
LABEL_240:
            v143 = *((_QWORD *)v389 + 2);
            if ( v143 != 2 )
            {
              si128.i64[0] = *((_QWORD *)v389 + 5);
              v373 = *(double *)si128.i64;
              LODWORD(v374) = *((_DWORD *)v389 + 12);
              v354.i32[0] = *((_DWORD *)v389 + 8);
              LODWORD(v376) = *((_DWORD *)v389 + 9);
              v370 = *((_QWORD *)v389 + 3);
            }
            v144 = *((_QWORD *)v389 + 7);
            if ( v144 == 2 )
            {
              v144 = 2;
            }
            else
            {
              si128.i64[0] = *((_QWORD *)v389 + 10);
              v375 = *(double *)si128.i64;
              v353.i32[0] = *((_DWORD *)v389 + 22);
              LODWORD(v379) = *((_DWORD *)v389 + 18);
              v372 = *((_DWORD *)v389 + 19);
              v352 = *((_QWORD *)v389 + 8);
            }
            v145 = v147;
            v146 = v148;
          }
LABEL_246:
          LOBYTE(v381) = v146;
          v154 = *((_QWORD *)v389 + 12);
          if ( v154 != 2 )
          {
            if ( (_DWORD)v387 == 2 )
            {
              v155 = *(char **)v389;
              goto LABEL_249;
            }
            chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v359);
            v159 = (SLODWORD(v359[0]) >> 13) - 1;
            v160 = 0;
            if ( SLODWORD(v359[0]) >> 13 <= 0 )
            {
              v161 = (1 - (SLODWORD(v359[0]) >> 13)) / 0x190u + 1;
              v159 += 400 * v161;
              v160 = -146097 * v161;
            }
            v162 = 1000
                 * (DWORD1(v359[0])
                  + 86400LL
                  * (((v159 / 100) >> 2)
                   + ((1461 * v159) >> 2)
                   + v160
                   + ((LODWORD(v359[0]) >> 4) & 0x1FF)
                   - v159 / 100
                   - 719163));
            v155 = *(char **)v389;
            v163 = v389 + 144;
            if ( *(_QWORD *)v389 )
              v163 = v389 + 8;
            v164 = DWORD2(v359[0]) / 0xF4240uLL + v162 + 1000;
            v165 = *(_QWORD *)v163;
            v118 = v165 - 1;
            v166 = 1000 * v165;
            if ( (unsigned __int64)(v165 - 1) >= 0x2540BE3FFLL )
              v166 = v165;
            if ( v166 <= v164 )
            {
              v167 = v142 + 144;
              if ( (_BYTE)v386 )
                v167 = v142 + 8;
              v118 = *(_QWORD *)(v167 - 120);
              v168 = 1000 * v118;
              if ( (unsigned __int64)(v118 - 1) >= 0x2540BE3FFLL )
                v168 = v118;
              if ( v168 > v164 || v166 >= v168 )
              {
LABEL_249:
                v371.i8[0] = v389[112];
                v382 = *((_QWORD *)v389 + 1);
                v361.i64[0] = *((_QWORD *)v389 + 13);
                v386 = v155;
                v387 = v154;
              }
            }
          }
          v125 = v389;
          if ( *(_QWORD *)(v142 + 24) != v145 )
            goto LABEL_350;
          if ( *(_QWORD *)(v142 + 16) != __n )
            goto LABEL_350;
          v118 = *(_QWORD *)(v142 + 8);
          if ( memcmp((const void *)v118, __s2, __n) || *(_BYTE *)(v142 + 32) != (_BYTE)v381 )
            goto LABEL_350;
          v169 = *(_QWORD *)(v142 - 104);
          if ( v169 == 2 )
          {
            if ( (_DWORD)v143 == 2 )
              goto LABEL_279;
LABEL_350:
            v119 = *(_BYTE **)v142;
            if ( *(_QWORD *)v142 )
            {
              v118 = *(_QWORD *)(v142 + 8);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v119, 1);
            }
            *(_QWORD *)(v142 - 120) = v386;
            *(_QWORD *)(v142 - 112) = v382;
            *(_QWORD *)(v142 - 104) = v143;
            *(_QWORD *)(v142 - 96) = v370;
            *(_DWORD *)(v142 - 88) = v354.i32[0];
            *(_DWORD *)(v142 - 84) = (_DWORD)v376;
            *(double *)(v142 - 80) = v373;
            *(_DWORD *)(v142 - 72) = v374;
            *(_QWORD *)(v142 - 64) = v144;
            *(_QWORD *)(v142 - 56) = v352;
            *(_DWORD *)(v142 - 48) = (_DWORD)v379;
            *(_DWORD *)(v142 - 44) = v372;
            *(double *)si128.i64 = v375;
            *(double *)(v142 - 40) = v375;
            *(_DWORD *)(v142 - 32) = v353.i32[0];
            *(_QWORD *)(v142 - 24) = v387;
            *(_QWORD *)(v142 - 16) = v361.i64[0];
            *(_BYTE *)(v142 - 8) = v371.i8[0];
            *(_QWORD *)v142 = v369.i64[0];
            *(_QWORD *)(v142 + 8) = __s2;
            *(_QWORD *)(v142 + 16) = __n;
            *(_QWORD *)(v142 + 24) = v145;
            *(_BYTE *)(v142 + 32) = v381;
            v120 = 1;
          }
          else
          {
            if ( (_DWORD)v143 == 2 )
              goto LABEL_350;
            si128.i64[0] = *(_QWORD *)(v142 - 80);
            if ( *(double *)si128.i64 != v373 || *(_DWORD *)(v142 - 72) != (_DWORD)v374 )
              goto LABEL_350;
            if ( *(_DWORD *)(v142 - 88) == 1 )
            {
              if ( (v354.i8[0] & 1) == 0 || *(_DWORD *)(v142 - 84) != (_DWORD)v376 )
                goto LABEL_350;
            }
            else if ( (v354.i8[0] & 1) != 0 )
            {
              goto LABEL_350;
            }
            if ( (v169 & 1) != 0 )
            {
              if ( (v143 & 1) == 0 || *(_QWORD *)(v142 - 96) != v370 )
                goto LABEL_350;
            }
            else if ( (v143 & 1) != 0 )
            {
              goto LABEL_350;
            }
LABEL_279:
            v170 = *(_QWORD *)(v142 - 64);
            if ( v170 == 2 )
            {
              if ( (_DWORD)v144 != 2 )
                goto LABEL_350;
            }
            else
            {
              if ( (_DWORD)v144 == 2 )
                goto LABEL_350;
              si128.i64[0] = *(_QWORD *)(v142 - 40);
              if ( *(double *)si128.i64 != v375 || *(_DWORD *)(v142 - 32) != v353.i32[0] )
                goto LABEL_350;
              if ( *(_DWORD *)(v142 - 48) == 1 )
              {
                if ( ((unsigned __int8)v379 & 1) == 0 || *(_DWORD *)(v142 - 44) != v372 )
                  goto LABEL_350;
              }
              else if ( ((unsigned __int8)v379 & 1) != 0 )
              {
                goto LABEL_350;
              }
              if ( (v170 & 1) != 0 )
              {
                if ( (v144 & 1) == 0 || *(_QWORD *)(v142 - 56) != v352 )
                  goto LABEL_350;
              }
              else if ( (v144 & 1) != 0 )
              {
                goto LABEL_350;
              }
            }
            v171 = *(_QWORD *)(v142 - 24);
            if ( v171 == 2 )
            {
              if ( (_DWORD)v387 != 2 )
                goto LABEL_350;
            }
            else
            {
              if ( (_DWORD)v387 == 2 || *(_BYTE *)(v142 - 8) != v371.i8[0] )
                goto LABEL_350;
              if ( (v171 & 1) != 0 )
              {
                if ( (v387 & 1) == 0 || *(_QWORD *)(v142 - 16) != v361.i64[0] )
                  goto LABEL_350;
              }
              else if ( v387 )
              {
                goto LABEL_350;
              }
            }
            if ( *(_DWORD *)(v142 - 120) == 1 )
            {
              if ( !(_BYTE)v386 || *(_QWORD *)(v142 - 112) != v382 )
                goto LABEL_350;
            }
            else if ( (_BYTE)v386 )
            {
              goto LABEL_350;
            }
            v119 = (_BYTE *)v369.i64[0];
            if ( v369.i64[0] )
            {
              v118 = (__int64)__s2;
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v369.i64[0], 1);
            }
            v120 = v380.i8[0];
          }
        }
        else
        {
LABEL_232:
          v118 = (__int64)v359;
          v119 = v128;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v359, v128);
          v380.i64[0] = *((_QWORD *)v389 + 2);
          if ( v380.i64[0] != 2 )
          {
            v369.i64[0] = *((_QWORD *)v389 + 5);
            LODWORD(v381) = *((_DWORD *)v389 + 12);
            LODWORD(v374) = *((_DWORD *)v389 + 8);
            LODWORD(v373) = *((_DWORD *)v389 + 9);
            v354.i64[0] = *((_QWORD *)v389 + 3);
          }
          v149 = *((_QWORD *)v389 + 7);
          if ( v149 != 2 )
          {
            v375 = *((double *)v389 + 10);
            v353.i32[0] = *((_DWORD *)v389 + 22);
            LODWORD(v379) = *((_DWORD *)v389 + 18);
            LODWORD(v376) = *((_DWORD *)v389 + 19);
            v370 = *((_QWORD *)v389 + 8);
          }
          v386 = *((char **)v389 + 18);
          v371.i8[0] = v389[152];
          v361.i64[0] = *((_QWORD *)v389 + 12);
          LOBYTE(v382) = v389[112];
          __s2 = *((void **)v389 + 13);
          v150 = *(_QWORD *)v389;
          v151 = *((_QWORD *)v389 + 1);
          v387 = *(_QWORD *)&v359[0];
          v152 = *(_QWORD *)&v359[1];
          __n = *((_QWORD *)&v359[0] + 1);
          v153 = *(_QWORD *)&v342[16];
          if ( *(_QWORD *)&v342[16] == *(_QWORD *)v342 )
          {
            v118 = (__int64)v342;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h483ed231e2079eb6(v342);
          }
          v123 = 160 * v153;
          v124 = *(_QWORD *)&v342[8];
          *(_QWORD *)(*(_QWORD *)&v342[8] + v123) = v150;
          *(_QWORD *)(v124 + v123 + 8) = v151;
          *(_QWORD *)(v124 + v123 + 16) = v380.i64[0];
          *(_QWORD *)(v124 + v123 + 24) = v354.i64[0];
          *(_DWORD *)(v124 + v123 + 32) = v374;
          *(_DWORD *)(v124 + v123 + 36) = LODWORD(v373);
          *(_QWORD *)(v124 + v123 + 40) = v369.i64[0];
          *(_DWORD *)(v124 + v123 + 48) = v381;
          *(_QWORD *)(v124 + v123 + 56) = v149;
          *(_QWORD *)(v124 + v123 + 64) = v370;
          *(_DWORD *)(v124 + v123 + 72) = (_DWORD)v379;
          *(_DWORD *)(v124 + v123 + 76) = (_DWORD)v376;
          *(double *)si128.i64 = v375;
          *(double *)(v124 + v123 + 80) = v375;
          *(_DWORD *)(v124 + v123 + 88) = v353.i32[0];
          *(_QWORD *)(v124 + v123 + 96) = v361.i64[0];
          *(_QWORD *)(v124 + v123 + 104) = __s2;
          *(_BYTE *)(v124 + v123 + 112) = v382;
          *(_QWORD *)(v124 + v123 + 120) = v387;
          *(_QWORD *)(v124 + v123 + 128) = __n;
          *(_QWORD *)(v124 + v123 + 136) = v152;
          *(_QWORD *)(v124 + v123 + 144) = v386;
          *(_BYTE *)(v124 + v123 + 152) = v371.i8[0];
          *(_QWORD *)&v342[16] = v153 + 1;
          v120 = 1;
          v125 = v389;
        }
        v122 = v125 + 160;
        if ( v122 == (char *)v383.i64[0] )
          break;
        continue;
      }
      break;
    }
  }
LABEL_354:
  if ( (v120 & 1) != 0 )
  {
    v365 = (const __m128i *)std::time::SystemTime::now::h1fe79e41f9d5677f(v118, v119);
    LODWORD(v366) = v173;
    std::time::SystemTime::duration_since::had059553cab94f96(v359, &v365, 0, 0);
    if ( LOBYTE(v359[0]) )
      v174 = 0;
    else
      v174 = *((_QWORD *)&v359[0] + 1);
    if ( v350 > v174 )
      v174 = v350;
    if ( *(_QWORD *)(v388 + 792) > v174 )
      v174 = *(_QWORD *)(v388 + 792);
    *(_QWORD *)&v342[24] = v174;
    *(_QWORD *)&v359[0] = &v365;
    if ( *(_QWORD *)&v342[16] >= 2u )
    {
      if ( *(_QWORD *)&v342[16] >= 0x15u )
        core::slice::sort::stable::driftsort_main::h71dd1ddcebfc39e5(*(_QWORD *)&v342[8], *(_QWORD *)&v342[16], v359);
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::ha3abce84087b3c73(
          *(_QWORD *)&v342[8],
          *(_QWORD *)&v342[16],
          1,
          v359);
    }
  }
  v358 = *(_QWORD *)&v342[32];
  v357 = *(_QWORD *)&v342[24];
  HIDWORD(_RAX) = *(_DWORD *)&v342[4];
  v356 = *(_OWORD *)&v342[8];
  v355 = *(_QWORD *)v342;
  v176 = *(_QWORD *)&v344[8];
  if ( *(_QWORD *)&v344[8] )
  {
    v177 = *(_QWORD *)&v344[24];
    if ( *(_QWORD *)&v344[24] )
    {
      v178 = *(_QWORD *)v344;
      si128 = _mm_load_si128(*(const __m128i **)v344);
      _R13D = ~_mm_movemask_epi8(si128);
      v180 = (const __m128i *)(*(_QWORD *)v344 + 16LL);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            si128 = _mm_load_si128(v180);
            v181 = _mm_movemask_epi8(si128);
            v178 -= 384;
            ++v180;
          }
          while ( v181 == 0xFFFF );
          _R13D = ~v181;
        }
        __asm { tzcnt   eax, r13d }
        v182 = -3 * _RAX;
        v183 = *(_QWORD *)(v178 + 8 * v182 - 24);
        if ( v183 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                   *(_QWORD *)(v178 + 8 * v182 - 16),
                                   v183,
                                   1);
        --v177;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v177 );
    }
    v184 = (24 * v176 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v185 = v184 + v176 + 17;
    if ( v185 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v344 - v184, v185, 16);
  }
  if ( LODWORD(v349[10]) != LODWORD(v351[10]) || v349[9] != v351[9] )
    goto LABEL_398;
  if ( v349[3] != 0x8000000000000000LL )
  {
    if ( v351[3] == 0x8000000000000000LL
      || v349[5] != v351[5]
      || memcmp((const void *)v349[4], (const void *)v351[4], v349[5]) )
    {
      goto LABEL_398;
    }
LABEL_378:
    v186 = v349[2];
    if ( v349[2] != v351[2] )
      goto LABEL_398;
    if ( v349[2] )
    {
      v187 = v349[1];
      v188 = v351[1];
      while ( (unsigned __int8)_$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb142c5935d94a40f(
                                 v187,
                                 v188) )
      {
        v188 += 424;
        v187 += 424;
        if ( !--v186 )
          goto LABEL_383;
      }
      goto LABEL_398;
    }
LABEL_383:
    if ( LOBYTE(v349[8]) == 2 )
    {
      if ( LOBYTE(v351[8]) != 2 )
        goto LABEL_398;
    }
    else if ( LOBYTE(v351[8]) == 2 || LOBYTE(v349[8]) != LOBYTE(v351[8]) || v349[6] != v351[6] || v349[7] != v351[7] )
    {
      goto LABEL_398;
    }
    if ( BYTE4(v349[10]) == 2 )
    {
      if ( BYTE4(v351[10]) != 2 )
        goto LABEL_398;
    }
    else if ( BYTE4(v349[10]) != BYTE4(v351[10]) )
    {
      goto LABEL_398;
    }
    goto LABEL_399;
  }
  if ( v351[3] == 0x8000000000000000LL )
    goto LABEL_378;
LABEL_398:
  *(double *)si128.i64 = codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(
                           v342,
                           (__int64)v360,
                           (__int64)v349,
                           0);
  if ( *(_DWORD *)v342 != 11 )
  {
LABEL_411:
    qmemcpy(v378, v342, 0x60u);
    goto LABEL_412;
  }
LABEL_399:
  if ( (_DWORD)v358 != DWORD2(v364) )
    goto LABEL_407;
  if ( v357 != (_QWORD)v364 )
    goto LABEL_407;
  v189 = *((_QWORD *)&v356 + 1);
  if ( *((_QWORD *)&v356 + 1) != v363 )
    goto LABEL_407;
  if ( *((_QWORD *)&v356 + 1) )
  {
    v190 = v356;
    v191 = *((_QWORD *)&v362 + 1);
    while ( (unsigned __int8)_$LT$codexmate_lib..core..quota_store..QuotaStoreItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::h901c2df9b33c0edc(
                               v190,
                               v191) )
    {
      v191 += 160;
      v190 += 160;
      if ( !--v189 )
        goto LABEL_408;
    }
LABEL_407:
    codexmate_lib::core::repository::Repository::save_quota_store::hd848fe86f04414c9(v342, v347, v348, (__int64)&v355);
    if ( *(_DWORD *)v342 != 11 )
      goto LABEL_411;
  }
LABEL_408:
  v192 = *(_QWORD *)(v388 + 816);
  v193 = 352LL * *(_QWORD *)(v388 + 824);
  v194 = (const __m128i *)core::ops::function::FnOnce::call_once::hff48933a1c7cebcb(0, *(double *)si128.i64);
  if ( !v194 )
    std::thread::local::panic_access_error::hf13793238d4ae422(&anon_155c4da9b5393270cfa7378e2b52c417_743);
  v195 = v388;
  v196 = (__int64 *)(v388 + 768);
  v197 = _mm_loadu_si128(v194);
  ++v194->i64[0];
  memset(&v342[8], 0, 24);
  *(_QWORD *)v342 = anon_4776471024d1e9bb78f2861cb2b51e1e_263;
  *(__m128i *)&v342[32] = v197;
  *(_QWORD *)v344 = v192;
  *(_QWORD *)&v344[8] = v192 + v193;
  *(_QWORD *)&v344[16] = v196;
  _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h9a531fc528caaafa(
    v342,
    v344);
  v365 = *(const __m128i **)v342;
  v366 = *(_OWORD *)&v342[8];
  v367 = *(_QWORD *)&v342[24];
  v368 = *(_OWORD *)&v342[32];
  v140 = *(_QWORD *)(v195 + 936) == 0x8000000000000000LL;
  v198 = v378;
  v389 = (char *)(v195 + 936);
  if ( v140 )
  {
    *(_QWORD *)v346 = 0x8000000000000000LL;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v344, v195 + 936);
    v211 = v388;
    v212 = *(_BYTE *)(v388 + 1048);
    v213 = 0x8000000000000000LL;
    if ( *(_QWORD *)(v388 + 960) != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v342, v388 + 960);
      v213 = *(_QWORD *)v342;
      v359[0] = *(_OWORD *)&v342[8];
      v211 = v388;
    }
    v214 = *(_QWORD *)(v211 + 984);
    *(_QWORD *)&v346[56] = *(_QWORD *)(v211 + 992);
    *(_QWORD *)&v346[48] = v214;
    v215 = *(_QWORD *)(v211 + 1008);
    *(_QWORD *)&v346[64] = *(_QWORD *)(v211 + 1000);
    *(_QWORD *)&v346[72] = v215;
    v216 = *(_QWORD *)(v211 + 1016);
    *(_QWORD *)&v346[88] = *(_QWORD *)(v211 + 1024);
    *(_QWORD *)&v346[80] = v216;
    *(_QWORD *)v346 = *(_QWORD *)v344;
    *(_OWORD *)&v346[8] = *(_OWORD *)&v344[8];
    *(_OWORD *)&v346[32] = v359[0];
    *(_QWORD *)&v346[24] = v213;
    *(__m128i *)&v346[96] = _mm_loadu_si128((const __m128i *)(v211 + 1032));
    v346[112] = v212;
  }
  codexmate_lib::core::repository::Repository::load_local_state::h0e6ef74d3b184ef0(v342, v360);
  qmemcpy(v359, &v342[8], sizeof(v359));
  if ( *(_QWORD *)v342 != 2 )
  {
    memcpy(__dst, __src, sizeof(__dst));
    qmemcpy(&v344[8], v359, 0x60u);
    *(_QWORD *)v344 = *(_QWORD *)v342;
    _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hcd2e751f0e0140ad(
      v342,
      __dst[84],
      __dst[84] + 160LL * __dst[85]);
    v226 = (_QWORD *)v388;
    v227 = (void *)(v388 + 504);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(v388 + 504);
    memcpy(v227, &__dst[50], 0xB0u);
    v228 = v226[88];
    if ( v228 != 0x8000000000000000LL && v228 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226[89], v228, 1);
    v229 = v226 + 85;
    v230 = v226[86];
    v231 = v226[87];
    if ( v231 )
    {
      v232 = v230;
      do
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v232);
        v232 += 424;
        --v231;
      }
      while ( v231 );
    }
    if ( *v229 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230, 424LL * *v229, 8);
    qmemcpy(v229, &__dst[72], 0x58u);
    v233 = (__int64)&__dst[83];
    v234 = (_QWORD *)v388;
    v235 = *(_QWORD *)(v388 + 784);
    if ( v235 )
    {
      v236 = (_QWORD *)(*(_QWORD *)(v388 + 776) + 128LL);
      do
      {
        v233 = *(v236 - 1);
        if ( v233 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v236, v233, 1);
        v236 += 20;
        --v235;
      }
      while ( v235 );
    }
    v237 = *v196;
    if ( *v196 )
    {
      v233 = 160 * v237;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234[97], 160 * v237, 8);
    }
    v238 = v234 + 101;
    v196[4] = __dst[87];
    v196[3] = __dst[86];
    v196[2] = __dst[85];
    v239 = __dst[83];
    v196[1] = __dst[84];
    *v196 = v239;
    v240 = v234[103];
    if ( v240 )
    {
      v241 = v234[102];
      do
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v241);
        v241 += 352;
        --v240;
      }
      while ( v240 );
    }
    v242 = v234;
    v243 = *v238;
    if ( *v238 )
    {
      v233 = 352 * v243;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234[102], 352 * v243, 8);
    }
    v234[103] = __dst[90];
    v244 = __dst[88];
    v234[102] = __dst[89];
    *v238 = v244;
    _R15 = (size_t)(v234 + 19);
    if ( *((_DWORD *)v234 + 38) != 2 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v234 + 19, v233);
    memcpy(v234 + 19, &__dst[6], 0x160u);
    v234[132] = __dst[119];
    v247 = v234[117];
    if ( v247 != 0x8000000000000000LL )
    {
      if ( v247 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234[118], v247, 1);
      v248 = v234[120];
      if ( v248 != 0x8000000000000000LL && v248 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234[121], v248, 1);
    }
    qmemcpy(v389, v346, 0x78u);
    v249 = (const __m128i *)__dst[92];
    v250 = __dst[93];
    v251 = v242[106];
    if ( __dst[93] > (unsigned __int64)(v242[104] - v251) )
    {
      v341 = (const __m128i *)__dst[92];
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        v388 + 832,
        v251,
        __dst[93],
        8,
        48,
        v246);
      v251 = *(_QWORD *)(v388 + 848);
      v249 = v341;
    }
    v252 = v388;
    v253 = (void *)(*(_QWORD *)(v388 + 840) + 48 * v251);
    v379 = v249;
    n = v249;
    memcpy(v253, v249, 48 * v250);
    *(_QWORD *)(v252 + 848) += v250;
    __dst[93] = 0;
    if ( v367 )
    {
      v376 = v242 + 19;
      v255 = *(_QWORD *)(v388 + 824);
      if ( v255 )
      {
        v256 = *(char **)(v388 + 816);
        v386 = &v256[352 * v255];
        __n = v366;
        v383.i64[0] = (__int64)v365;
        v361.i64[0] = (__int64)v365[-4].i64;
        __s2 = *(void **)&v342[24];
        v371.i64[0] = *(_QWORD *)&v342[8];
        v382 = *(_QWORD *)v342;
        *(_QWORD *)&v373 = *(_QWORD *)v342 - 40LL;
        while ( 1 )
        {
          v280 = v256 + 184;
          n = (const __m128i *)(v256 + 184);
          v265 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v368, v256 + 184);
          v389 = v256;
          v387 = (__int64)(v256 + 352);
          v263 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v265 >> 57), (__m128i)0LL);
          for ( m = 0; ; m += 16 )
          {
            v257 = __n & v265;
            v258 = _mm_loadu_si128((const __m128i *)(v383.i64[0] + v257));
            _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v258, v263));
            if ( _R14D )
              break;
LABEL_499:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v258, (__m128i)-1LL)) )
              goto LABEL_516;
            v265 = v257 + m + 16;
          }
          v260 = *((_QWORD *)v389 + 25);
          v380 = v263;
          v381 = m;
          v369 = v258;
          while ( 1 )
          {
            __asm { tzcnt   r15d, r14d }
            _R15 = __n & (v257 + _R15);
            v261 = v361.i64[0] - (_R15 << 6);
            if ( v260 == *(_QWORD *)(v261 + 16) )
            {
              n = *(const __m128i **)(v261 + 8);
              if ( !memcmp(*((const void **)v389 + 24), n, v260) )
                break;
            }
            v262 = _R14D - 1;
            LOWORD(v262) = _R14D & (_R14D - 1);
            _R14D = v262;
            v263 = _mm_load_si128(&v380);
            m = v381;
            v258 = _mm_load_si128(&v369);
            if ( !(_WORD)v262 )
              goto LABEL_499;
          }
          _R15 *= -64LL;
          v266 = v383.i64[0];
          v380.i64[0] = *(_QWORD *)(v383.i64[0] + _R15 - 16);
          v267 = *(_QWORD *)(v383.i64[0] + _R15 - 8);
          v268 = 1;
          if ( __s2 )
            break;
          v270 = v389;
          if ( v380.i64[0] )
            goto LABEL_511;
LABEL_514:
          if ( v268 )
            goto LABEL_515;
LABEL_516:
          v256 = (char *)v387;
          if ( (char *)v387 == v386 )
            goto LABEL_522;
        }
        v269 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v342[32], v280);
        v270 = v389;
        v271 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v269 >> 57), (__m128i)0LL);
        for ( n = nullptr; ; ++n )
        {
          v266 = v371.i64[0] & v269;
          v272 = _mm_loadu_si128((const __m128i *)(v382 + v266));
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v272, v271));
          if ( (_DWORD)_RCX )
            break;
LABEL_508:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v272, (__m128i)-1LL)) )
          {
            if ( v380.i64[0] )
              goto LABEL_511;
            goto LABEL_514;
          }
          v269 = (unsigned __int64)n[1].u64 + v266;
        }
        v274 = *((_QWORD *)v270 + 25);
        v374 = v266;
        v381 = v267;
        v354 = v271;
        v375 = *(double *)&n;
        v353 = v272;
        while ( 1 )
        {
          v369.i64[0] = _RCX;
          __asm { tzcnt   ecx, ecx }
          v275 = -(v371.i64[0] & (v266 + _RCX));
          v276 = 5 * v275;
          if ( v274 == *(_QWORD *)(*(_QWORD *)&v373 + 40 * v275 + 16) )
          {
            n = *(const __m128i **)(*(_QWORD *)&v373 + 40 * v275 + 8);
            if ( !memcmp(*((const void **)v270 + 24), n, v274) )
              break;
          }
          v277 = v369.i32[0] - 1;
          LOWORD(v277) = v369.i16[0] & (v369.i16[0] - 1);
          _RCX = v277;
          v266 = v374;
          v267 = v381;
          v271 = _mm_load_si128(&v354);
          n = *(const __m128i **)&v375;
          v272 = _mm_load_si128(&v353);
          if ( (v369.i16[0] & (unsigned __int16)(v369.i16[0] - 1)) == 0 )
            goto LABEL_508;
        }
        v266 = *(_QWORD *)(v382 + 8 * v276 - 8);
        v268 = *(_BYTE *)(v382 + 8 * v276 - 16) ^ 1;
        v267 = v381;
        if ( !v380.i64[0] )
          goto LABEL_514;
LABEL_511:
        if ( ((v267 >= v266) | (unsigned __int8)v268) != 1 )
          goto LABEL_516;
LABEL_515:
        _R15 += v383.i64[0];
        v278 = *(_BYTE *)(_R15 - 24);
        v279 = *(_QWORD *)(_R15 - 32);
        *((_QWORD *)v270 + 20) = *(_QWORD *)(_R15 - 40);
        *((_QWORD *)v270 + 21) = v279;
        v270[176] = v278;
        goto LABEL_516;
      }
LABEL_522:
      if ( *v376 != 2 )
      {
        _RBX = (char *)(v388 + 336);
        v284 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v368, v388 + 336);
        v285 = v365;
        v286 = v366;
        v287 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v284 >> 57), (__m128i)0LL);
        n = v365 - 4;
        v288 = *(const void **)(v388 + 344);
        v289 = *(_QWORD *)(v388 + 352);
        v290 = nullptr;
        v291 = (__m128i)-1LL;
        while ( 1 )
        {
          v292 = v286 & v284;
          v293 = _mm_loadu_si128((const __m128i *)((char *)v285 + v292));
          v294 = _mm_cmpeq_epi8(v293, v287);
          _R14D = _mm_movemask_epi8(v294);
          if ( _R14D )
            break;
LABEL_529:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v293, v291)) )
            goto LABEL_537;
          v284 = (unsigned __int64)&v290[v292 + 16];
          v290 += 16;
        }
        v387 = v292;
        v389 = _RBX;
        v383 = v287;
        __n = (size_t)n;
        v380.i64[0] = v286;
        v386 = v290;
        v371 = v293;
        while ( 1 )
        {
          __asm { tzcnt   ebx, r14d }
          v296 = v286 & (unsigned __int64)&_RBX[v292];
          v297 = &n[-4 * v296];
          if ( v289 == v297[1].i64[0] && !memcmp(v288, (const void *)v297->i64[1], v289) )
            break;
          v298 = _R14D - 1;
          LOWORD(v298) = _R14D & (_R14D - 1);
          v140 = (_WORD)v298 == 0;
          _R14D = v298;
          v292 = v387;
          _RBX = v389;
          v287 = _mm_load_si128(&v383);
          n = (const __m128i *)__n;
          v286 = v380.i64[0];
          v290 = v386;
          v291 = (__m128i)-1LL;
          v293 = _mm_load_si128(&v371);
          if ( v140 )
            goto LABEL_529;
        }
        v299 = 0xFFFFFFFFFFFFFFCLL * v296;
        v300 = v285[v299 - 1].i64[0];
        v301 = v285[v299 - 1].i64[1];
        n = (const __m128i *)v389;
        v302 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get::hbe2be012a95edbb4(
                 v342,
                 v389,
                 *(double *)v294.i64,
                 *(double *)v287.i64,
                 *(double *)v291.i64);
        if ( !v302 )
          goto LABEL_536;
        v303 = *(_BYTE *)v302;
        if ( v300 )
        {
          if ( ((v301 < *(_QWORD *)(v302 + 8)) & v303) != 0 )
            goto LABEL_537;
          goto LABEL_536;
        }
        if ( !v303 )
        {
LABEL_536:
          v304 = &v285[v299];
          v305 = v304[-2].i8[8];
          v306 = v304[-2].i64[0];
          n = (const __m128i *)v388;
          *(_QWORD *)(v388 + 312) = v304[-3].i64[1];
          n[20].i64[0] = v306;
          n[20].i8[8] = v305;
        }
      }
    }
LABEL_537:
    HIDWORD(_RAX) = HIDWORD(v378);
    *(_QWORD *)v378 = 11;
    v308 = *(_QWORD *)&v342[8];
    if ( *(_QWORD *)&v342[8] )
    {
      v309 = *(_QWORD *)&v342[24];
      if ( *(_QWORD *)&v342[24] )
      {
        v310 = *(_QWORD *)v342;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v342));
        v312 = (const __m128i *)(*(_QWORD *)v342 + 16LL);
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v313 = _mm_movemask_epi8(_mm_load_si128(v312));
              v310 -= 640;
              ++v312;
            }
            while ( v313 == 0xFFFF );
            _R13D = ~v313;
          }
          __asm { tzcnt   eax, r13d }
          v314 = -5 * _RAX;
          n = *(const __m128i **)(v310 + 8 * v314 - 40);
          if ( n )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v310 + 8 * v314 - 32), n, 1);
          --v309;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v309 );
      }
      v315 = (40 * v308 + 55) & 0xFFFFFFFFFFFFFFF0LL;
      v316 = v315 + v308 + 17;
      if ( v316 )
      {
        n = (const __m128i *)v316;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v342 - v315, v316, 16);
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(v344, n);
    if ( __dst[91] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v379, 48LL * __dst[91], 8);
    if ( __dst[94] != 0x8000000000000000LL && __dst[94] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[95], __dst[94], 1);
    if ( __dst[97] != 0x8000000000000000LL && __dst[97] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[98], __dst[97], 1);
    if ( __dst[101] != 0x8000000000000000LL && __dst[101] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[102], __dst[101], 1);
    if ( __dst[104] != 0x8000000000000000LL )
    {
      if ( __dst[104] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[105], __dst[104], 1);
      if ( __dst[107] != 0x8000000000000000LL && __dst[107] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[108], __dst[107], 1);
    }
    v317 = v366;
    if ( (_QWORD)v366 )
    {
      v318 = v367;
      if ( v367 )
      {
        v319 = v365;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v365));
        v321 = v365 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v322 = _mm_movemask_epi8(_mm_load_si128(v321));
              v319 -= 64;
              ++v321;
            }
            while ( v322 == 0xFFFF );
            _R13D = ~v322;
          }
          __asm { tzcnt   ecx, r13d }
          v324 = &v319->i8[-(_ECX << 6)];
          v325 = *((_QWORD *)v324 - 8);
          if ( v325 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v324 - 7), v325, 1);
          --v318;
          _R13D &= _R13D - 1;
        }
        while ( v318 );
      }
      v326 = v317 << 6;
      v327 = 65 * v317 + 81;
      if ( v327 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)&v365[-4] - v326, v327, 16);
    }
    v328 = *((_QWORD *)&v356 + 1);
    if ( *((_QWORD *)&v356 + 1) )
    {
      v329 = (_QWORD *)(v356 + 128);
      do
      {
        v330 = *(v329 - 1);
        if ( v330 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v329, v330, 1);
        v329 += 20;
        --v328;
      }
      while ( v328 );
    }
    if ( v355 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v356, 160 * v355, 8);
    v331 = v363;
    if ( v363 )
    {
      v332 = (_QWORD *)(*((_QWORD *)&v362 + 1) + 128LL);
      do
      {
        v333 = *(v332 - 1);
        if ( v333 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v332, v333, 1);
        v332 += 20;
        --v331;
      }
      while ( v331 );
    }
    if ( (_QWORD)v362 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v362 + 1), 160 * v362, 8);
    if ( v349[3] != 0x8000000000000000LL && v349[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v349[4], v349[3], 1);
    v334 = v349[1];
    v335 = v349[2];
    if ( v349[2] )
    {
      v336 = v349[1];
      do
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v336);
        v336 += 424;
        --v335;
      }
      while ( v335 );
    }
    if ( v349[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v334, 424LL * v349[0], 8);
    if ( v351[3] != 0x8000000000000000LL && v351[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v351[4], v351[3], 1);
    v337 = v351[1];
    v338 = v351[2];
    if ( v351[2] )
    {
      v339 = v351[1];
      do
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v339);
        v339 += 424;
        --v338;
      }
      while ( v338 );
    }
    if ( v351[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v337, 424LL * v351[0], 8);
    goto LABEL_442;
  }
  qmemcpy(v198, v359, 0x60u);
  if ( !__OFSUB__(-*(_QWORD *)v346, 1) )
  {
    if ( *(_QWORD *)v346 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v346[8], *(_QWORD *)v346, 1);
    if ( 2LL * *(_QWORD *)&v346[24] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v346[32], *(_QWORD *)&v346[24], 1);
  }
  v217 = v366;
  if ( (_QWORD)v366 )
  {
    v218 = v367;
    if ( v367 )
    {
      v219 = v365;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v365));
      v221 = v365 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v222 = _mm_movemask_epi8(_mm_load_si128(v221));
            v219 -= 64;
            ++v221;
          }
          while ( v222 == 0xFFFF );
          _R13D = ~v222;
        }
        __asm { tzcnt   ecx, r13d }
        v224 = &v219->i8[-(_ECX << 6)];
        v225 = *((_QWORD *)v224 - 8);
        if ( v225 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v224 - 7), v225, 1);
        --v218;
        _R13D &= _R13D - 1;
      }
      while ( v218 );
    }
    v281 = v217 << 6;
    v282 = 65 * v217 + 81;
    if ( v282 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)&v365[-4] - v281, v282, 16);
  }
LABEL_412:
  v199 = *((_QWORD *)&v356 + 1);
  if ( *((_QWORD *)&v356 + 1) )
  {
    v200 = (_QWORD *)(v356 + 128);
    do
    {
      v201 = *(v200 - 1);
      if ( v201 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v200, v201, 1);
      v200 += 20;
      --v199;
    }
    while ( v199 );
  }
  if ( v355 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v356, 160 * v355, 8);
  v202 = v363;
  if ( v363 )
  {
    v203 = (_QWORD *)(*((_QWORD *)&v362 + 1) + 128LL);
    do
    {
      v204 = *(v203 - 1);
      if ( v204 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v203, v204, 1);
      v203 += 20;
      --v202;
    }
    while ( v202 );
  }
  if ( (_QWORD)v362 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v362 + 1), 160 * v362, 8);
  if ( v349[3] != 0x8000000000000000LL && v349[3] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v349[4], v349[3], 1);
  v205 = v349[1];
  v206 = v349[2];
  if ( v349[2] )
  {
    v207 = v349[1];
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v207);
      v207 += 424;
      --v206;
    }
    while ( v206 );
  }
  if ( v349[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v205, 424LL * v349[0], 8);
  if ( v351[3] != 0x8000000000000000LL && v351[3] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v351[4], v351[3], 1);
  v208 = v351[1];
  v209 = v351[2];
  if ( v351[2] )
  {
    v210 = v351[1];
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v210);
      v210 += 424;
      --v209;
    }
    while ( v209 );
  }
  if ( v351[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, 424LL * v351[0], 8);
LABEL_442:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v384);
  close_NOCANCEL(v384);
  return v378;
}
