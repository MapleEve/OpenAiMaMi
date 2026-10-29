// win 1.2.7 | module src/core/relay/fetch_models.rs | ea 0x140dd9620 | name sub_140DD9620
// win 1.2.7 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140DD9620(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rsi
  __int16 v18; // ax
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  char *v43; // rdx
  __int64 v44; // rax
  volatile signed __int64 **v45; // rdi
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r13
  char v49; // si
  __int64 v50; // r8
  __int64 v51; // rax
  __m128i *v52; // rbx
  __int64 v53; // r14
  __int64 v54; // rax
  unsigned __int8 *v55; // rsi
  __int64 v56; // rdx
  __m128i *v57; // r12
  __int16 v58; // ax
  __int16 v59; // cx
  int v60; // edx
  unsigned int v61; // r8d
  unsigned int v62; // r9d
  unsigned int v63; // r10d
  unsigned int v64; // r11d
  volatile signed __int64 *v65; // r14
  bool v66; // of
  char *v67; // rcx
  __int64 v68; // rt0
  unsigned __int64 v69; // r13
  __int64 v70; // rcx
  __int64 v71; // r14
  __int16 v72; // di
  __int64 v73; // r12
  const __m128i *v74; // rsi
  __m128i *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i *v83; // r12
  __int64 v84; // rdx
  __m128i si128; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rcx
  __m128i *v95; // rax
  char v96; // di
  __int64 v97; // r15
  char v98; // al
  __int64 v99; // rdx
  char v100; // al
  _QWORD *v101; // r14
  int v102; // ecx
  __m128i v103; // xmm0
  __int64 v104; // r15
  __int64 v105; // rdi
  __int64 v106; // r14
  __int64 v107; // r12
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // r8
  __int64 v111; // rax
  unsigned __int64 v112; // rsi
  __int64 v113; // r15
  __m128i *v114; // rax
  __int64 v115; // rdi
  __int64 v116; // r12
  char v117; // al
  __int64 v118; // rax
  __int64 v119; // rdx
  __int128 v120; // xmm1
  __int128 v121; // xmm2
  __int128 v122; // xmm3
  __int128 v123; // xmm4
  __int128 v124; // xmm5
  __int128 v125; // xmm6
  _BYTE *v126; // rax
  _QWORD *v127; // rcx
  __m128i v128; // rax
  __int64 v129; // rcx
  bool v130; // zf
  bool v131; // si
  __int64 v132; // r15
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // r12
  const __m128i *v137; // r14
  __int64 v138; // r15
  __m128i *v139; // rax
  _QWORD *v140; // rsi
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // r15
  const __m128i *v145; // r12
  const __m128i *v146; // r13
  __m128i v148; // xmm0
  __int64 v149; // rax
  __int64 v150; // rdx
  unsigned __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // rdi
  __int64 v154; // rdi
  __int64 v155; // r15
  const __m128i *v157; // r12
  const __m128i *v158; // r13
  __m128i v160; // xmm0
  __int64 v161; // rax
  __int64 v162; // rdx
  unsigned __int64 v163; // rax
  __int64 v164; // rdi
  __int64 v165; // rdi
  __int64 v166; // rsi
  _QWORD *v167; // rdi
  __int64 v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 *result; // rax
  __m128i *v173; // rax
  __int64 v174; // rsi
  __int16 v175; // ax
  __int16 v176; // cx
  __int32 v177; // edx
  unsigned int v178; // r8d
  unsigned int v179; // r9d
  unsigned int v180; // r10d
  unsigned int v181; // r11d
  __int64 v182; // r15
  __int64 v183; // rdx
  __m128i v184; // xmm0
  unsigned __int64 v185; // rax
  unsigned __int128 v186; // kr00_16
  unsigned __int64 v187; // kr20_8
  __int32 v188; // r8d
  __int32 v189; // r9d
  __int64 v190; // r10
  int v191; // eax
  _QWORD *v192; // rsi
  __int64 v193; // rdx
  unsigned __int64 v194; // rcx
  __int64 v196; // rdi
  __int64 v197; // rbx
  const __m128i *v198; // r14
  const __m128i *v199; // r15
  __m128i v201; // xmm0
  __int64 v202; // rax
  __int64 v203; // rdx
  __m128i *v204; // rax
  __int64 v205; // rdi
  __int64 v206; // rdi
  __int64 v207; // rbx
  const __m128i *v208; // r14
  const __m128i *v209; // r15
  __m128i v211; // xmm0
  __int64 v212; // rax
  __int64 v213; // rdx
  unsigned __int64 v214; // rax
  __int64 v215; // rdi
  __int64 v216; // rsi
  _QWORD *v217; // rdi
  __int64 v218; // rdx
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rdx
  char v222; // cl
  __int64 v223; // rdx
  __m128i v224; // xmm0
  _QWORD *v225; // rax
  unsigned __int64 v226; // rcx
  __m128i *v227; // rax
  __int64 v228; // rcx
  __int64 v229; // rsi
  __int64 v230; // rdx
  _QWORD *v231; // r14
  const __m128i *v232; // rsi
  unsigned __int64 v233; // r14
  __int64 v234; // r15
  __int64 v235; // r8
  __m128i *v236; // rax
  _BYTE v237[272]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v238[4]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v239; // [rsp+190h] [rbp+110h]
  __int64 v240; // [rsp+1A0h] [rbp+120h]
  __m256i v241; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v242; // [rsp+280h] [rbp+200h]
  __int128 v243; // [rsp+290h] [rbp+210h]
  __m128i v244; // [rsp+2A0h] [rbp+220h]
  __m128i v245; // [rsp+2B0h] [rbp+230h]
  __int64 v246; // [rsp+2C0h] [rbp+240h]
  _BYTE v247[96]; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v248; // [rsp+330h] [rbp+2B0h]
  __int128 v249; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v250; // [rsp+3F0h] [rbp+370h]
  __int64 v251; // [rsp+3F8h] [rbp+378h]
  _OWORD v252[2]; // [rsp+400h] [rbp+380h] BYREF
  __int128 v253; // [rsp+420h] [rbp+3A0h] BYREF
  unsigned __int64 v254; // [rsp+430h] [rbp+3B0h]
  __int128 v255; // [rsp+438h] [rbp+3B8h]
  _BYTE v256[24]; // [rsp+448h] [rbp+3C8h]
  __int128 v257; // [rsp+460h] [rbp+3E0h]
  __int64 v258; // [rsp+470h] [rbp+3F0h]
  __int16 v259; // [rsp+478h] [rbp+3F8h]
  const __m128i *v260; // [rsp+488h] [rbp+408h]
  __int64 v261; // [rsp+490h] [rbp+410h]
  __int64 v262; // [rsp+498h] [rbp+418h]
  __m128i *v263; // [rsp+4A0h] [rbp+420h]
  _DWORD v264[2]; // [rsp+4A8h] [rbp+428h]
  _DWORD v265[2]; // [rsp+4B0h] [rbp+430h]
  __m256i v266; // [rsp+4B8h] [rbp+438h] BYREF
  __m256i v267; // [rsp+4D8h] [rbp+458h]
  __int128 v268; // [rsp+4F8h] [rbp+478h]
  __int128 v269; // [rsp+508h] [rbp+488h]
  __m128i v270; // [rsp+518h] [rbp+498h] BYREF
  __m128i v271; // [rsp+528h] [rbp+4A8h] BYREF
  _BYTE v272[18]; // [rsp+538h] [rbp+4B8h]
  __int128 v273; // [rsp+54Ah] [rbp+4CAh]
  __int128 v274; // [rsp+55Ah] [rbp+4DAh]
  __int128 v275; // [rsp+56Ah] [rbp+4EAh]
  _BYTE v276[22]; // [rsp+57Ah] [rbp+4FAh]
  __int64 v277; // [rsp+590h] [rbp+510h]
  char v278; // [rsp+598h] [rbp+518h]
  _BYTE v279[7]; // [rsp+599h] [rbp+519h] BYREF
  __int128 v280; // [rsp+5A0h] [rbp+520h]
  __int64 v281; // [rsp+5B0h] [rbp+530h]
  char v282; // [rsp+5B8h] [rbp+538h]
  __int64 v283; // [rsp+5C8h] [rbp+548h]
  __m128i *v284; // [rsp+5D0h] [rbp+550h]
  char *v285; // [rsp+5D8h] [rbp+558h]
  int v286; // [rsp+5E4h] [rbp+564h]
  __int64 *v287; // [rsp+5E8h] [rbp+568h]
  __m128i *v288; // [rsp+5F0h] [rbp+570h]
  char *v289; // [rsp+5F8h] [rbp+578h]
  bool v290; // [rsp+607h] [rbp+587h]
  __m128i *v291; // [rsp+608h] [rbp+588h]
  char *v292; // [rsp+610h] [rbp+590h]
  __int128 v293; // [rsp+618h] [rbp+598h]
  char v294; // [rsp+62Fh] [rbp+5AFh]
  __int64 v295; // [rsp+630h] [rbp+5B0h]
  __int64 v296; // [rsp+638h] [rbp+5B8h]

  v296 = -2;
  v283 = a3;
  v4 = a2;
  v287 = a1;
  v5 = (unsigned __int8 *)sub_141512160(a1, a2, a3, a4);
  v6 = v5[72];
  if ( v5[72] )
  {
    if ( (_DWORD)v6 != 1 )
      goto LABEL_3;
    v55 = v5;
    sub_14169B890(v5, sub_140BE2F50);
    v5 = v55;
    v55[72] = 0;
  }
  v6 = (unsigned int)sub_141515930(v5[68], v5[69]);
LABEL_3:
  v260 = (const __m128i *)(v4 + 112);
  v290 = (_BYTE)v6 == 2;
  v7 = *(unsigned __int8 *)(v4 + 551);
  v295 = v4;
  v286 = v6;
  switch ( v7 )
  {
    case 0LL:
      *(_WORD *)(v4 + 549) = 0;
      v8 = *(_QWORD *)(v4 + 272);
      v9 = *(_QWORD *)(v4 + 280);
      *(_OWORD *)(v4 + 144) = *(_OWORD *)(v4 + 288);
      *(_BYTE *)(v4 + 548) = *(_BYTE *)(v4 + 552);
      *(__m128i *)(v4 + 304) = _mm_loadu_si128((const __m128i *)(v4 + 528));
      *(_QWORD *)&v247[32] = 0;
      *(_QWORD *)v247 = 0;
      *(_QWORD *)&v247[16] = 0;
      sub_141655AC0(&v266, v247, v8, v9);
      if ( v266.m256i_i64[0] == -1 )
      {
        nullsub_1(v10);
        v6 = 22;
        v53 = 1;
        v54 = sub_140001650(22, 1);
        v4 = v295;
        if ( !v54 )
          sub_141938D2B(1, 22);
        *(__m128i *)v54 = _mm_loadu_si128(&xmmword_141A4752F);
        *((_QWORD *)&v293 + 1) = v54;
        *(_QWORD *)(v54 + 14) = 0x4C5255207473696CLL;
        *(_QWORD *)&v293 = 22;
LABEL_156:
        result = v287;
        *(_BYTE *)(v4 + 551) = 1;
        *result = v53;
        *(_OWORD *)(result + 1) = v293;
        result[3] = v6;
        return result;
      }
      v11 = *(_OWORD *)&v266.m256i_u64[1];
      v12 = v266.m256i_i64[3];
      *(_QWORD *)&v247[48] = v269;
      *(_OWORD *)&v247[32] = v268;
      *(__m256i *)v247 = v267;
      v13 = v295;
      v14 = v295 + 320;
      *(_QWORD *)(v295 + 320) = v266.m256i_i64[0];
      *(_OWORD *)(v13 + 328) = v11;
      *(_QWORD *)(v13 + 344) = v12;
      v15 = *(_OWORD *)&v247[16];
      v16 = *(_OWORD *)&v247[32];
      *(__m128i *)(v13 + 352) = _mm_load_si128((const __m128i *)v247);
      *(_OWORD *)(v13 + 368) = v15;
      *(_OWORD *)(v13 + 384) = v16;
      *(_QWORD *)(v13 + 400) = *(_QWORD *)&v247[48];
      sub_1416AC440(v13 + 408, v14);
      v17 = v295;
      *(_BYTE *)(v295 + 488) = *(_BYTE *)(v295 + 400);
      *(_OWORD *)(v17 + 472) = *(_OWORD *)(v17 + 384);
      v18 = *(_WORD *)(v17 + 360);
      v19 = *(unsigned __int16 *)(v17 + 362);
      v20 = *(_DWORD *)(v17 + 380);
      v21 = *(_DWORD *)(v17 + 344);
      v22 = *(_DWORD *)(v17 + 348);
      v23 = *(_DWORD *)(v17 + 352);
      v24 = *(_DWORD *)(v17 + 356);
      *(__m128i *)(v17 + 452) = _mm_loadu_si128((const __m128i *)(v17 + 364));
      *(_WORD *)(v17 + 448) = v18;
      *(_WORD *)(v17 + 450) = v19;
      *(_DWORD *)(v17 + 468) = v20;
      *(_DWORD *)(v17 + 432) = v21;
      *(_DWORD *)(v17 + 436) = v22;
      *(_DWORD *)(v17 + 440) = v23;
      *(_DWORD *)(v17 + 444) = v24;
      *(_QWORD *)(v17 + 496) = 0;
      *(_QWORD *)(v17 + 504) = 8;
      *(_QWORD *)(v17 + 512) = 0;
      *(_BYTE *)(v17 + 549) = 1;
      v25 = sub_14167F170(v19);
      v30 = v25;
      if ( *(_BYTE *)(v25 + 16) == 1 )
      {
        v31 = *(_QWORD *)v25;
        v32 = *(_QWORD *)(v30 + 8);
      }
      else
      {
        v31 = sub_141696260(v27, v26, v28, v29);
        *(_QWORD *)v30 = v31;
        *(_QWORD *)(v30 + 8) = v32;
        *(_BYTE *)(v30 + 16) = 1;
      }
      *(_QWORD *)v30 = v31 + 1;
      v33 = v295;
      *(_OWORD *)(v295 + 176) = xmmword_141A43480;
      *(_OWORD *)(v33 + 160) = *(_OWORD *)&off_141A43470;
      *(_QWORD *)(v33 + 192) = v31;
      *(_QWORD *)(v33 + 200) = v32;
      v34 = sub_14167F170(v33);
      v39 = v34;
      if ( *(_BYTE *)(v34 + 16) == 1 )
      {
        v40 = *(_QWORD *)v34;
        v41 = *(_QWORD *)(v39 + 8);
      }
      else
      {
        v40 = sub_141696260(v36, v35, v37, v38);
        *(_QWORD *)v39 = v40;
        *(_QWORD *)(v39 + 8) = v41;
        *(_BYTE *)(v39 + 16) = 1;
      }
      *(_QWORD *)v39 = v40 + 1;
      v4 = v295;
      *(_OWORD *)(v295 + 224) = xmmword_141A43480;
      *(_OWORD *)(v4 + 208) = *(_OWORD *)&off_141A43470;
      *(_QWORD *)(v4 + 240) = v40;
      *(_QWORD *)(v4 + 248) = v41;
      *(_QWORD *)(v4 + 520) = 0x800000;
      *(_DWORD *)(v4 + 544) = 0;
      *(_QWORD *)(v4 + 256) = 0;
      *(_QWORD *)(v4 + 264) = 100;
      v42 = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A47D80);
    case 2LL:
      sub_141939400(&off_141A47D80);
    case 3LL:
      v43 = (char *)(v4 + 624);
      v44 = *(unsigned __int8 *)(v4 + 624);
      v291 = (__m128i *)(v4 + 560);
      switch ( v44 )
      {
        case 0LL:
          v45 = *(volatile signed __int64 ***)(v4 + 592);
          v46 = *(_QWORD *)(v4 + 600);
          v47 = *(_QWORD *)(v4 + 560);
          v48 = *(_QWORD *)(v4 + 568);
          v49 = *(_BYTE *)(v4 + 625);
          v50 = *(_QWORD *)(v4 + 608);
          v51 = *(_QWORD *)(v4 + 616);
          v52 = (__m128i *)(v4 + 560);
          goto LABEL_34;
        case 1LL:
          v263 = v291;
          sub_1419393E0(&off_141A47D68);
        case 2LL:
          JUMPOUT(0x140DD9B2FLL);
        case 3LL:
          v292 = (char *)(v4 + 624);
          goto LABEL_49;
        case 4LL:
          v292 = (char *)(v4 + 624);
          goto LABEL_229;
      }
    case 4LL:
      goto LABEL_27;
  }
LABEL_10:
  *(_QWORD *)(v4 + 256) = v42 + 1;
  while ( 2 )
  {
    v45 = *(volatile signed __int64 ***)(v4 + 304);
    v46 = v4 + 408;
    v47 = *(_QWORD *)(v4 + 144);
    v48 = *(_QWORD *)(v4 + 152);
    v49 = *(_BYTE *)(v4 + 548);
    v50 = *(_QWORD *)(v4 + 312);
    v51 = v4 + 520;
    v52 = (__m128i *)(v4 + 560);
    *(_QWORD *)(v4 + 560) = v47;
    *(_QWORD *)(v4 + 568) = v48;
    *(_QWORD *)(v4 + 592) = v45;
    *(_QWORD *)(v4 + 600) = v4 + 408;
    *(_QWORD *)(v4 + 608) = v50;
    *(_QWORD *)(v4 + 616) = v4 + 520;
    v43 = (char *)(v4 + 624);
    *(_BYTE *)(v4 + 624) = 0;
    *(_BYTE *)(v4 + 625) = v49;
LABEL_34:
    *((_QWORD *)&v293 + 1) = v50;
    *(_QWORD *)(v4 + 576) = v46;
    *(_QWORD *)(v4 + 584) = v51;
    v292 = v43;
    v289 = v43;
    v288 = v52;
    sub_1416AC440(&v253, v46);
    v57 = v52;
    LOBYTE(v258) = *(_BYTE *)(v46 + 80);
    v257 = *(_OWORD *)(v46 + 64);
    v58 = *(_WORD *)(v46 + 40);
    v59 = *(_WORD *)(v46 + 42);
    v60 = *(_DWORD *)(v46 + 60);
    v61 = *(_DWORD *)(v46 + 24);
    v62 = *(_DWORD *)(v46 + 28);
    v63 = *(_DWORD *)(v46 + 32);
    v64 = *(_DWORD *)(v46 + 36);
    *(_OWORD *)&v256[4] = *(_OWORD *)(v46 + 44);
    *(_WORD *)v256 = v58;
    *(_WORD *)&v256[2] = v59;
    *(_DWORD *)&v256[20] = v60;
    *(_QWORD *)&v255 = __PAIR64__(v62, v61);
    *((_QWORD *)&v255 + 1) = __PAIR64__(v64, v63);
    v65 = *v45;
    v289 = v292;
    v288 = v52;
    sub_14126AB80(v238, &v253);
    v66 = __OFSUB__(v238[0].m128i_i64[0], -1);
    if ( v238[0].m128i_i64[0] == -1 )
    {
      v266.m256i_i64[1] = v238[0].m128i_i64[1];
      v67 = v292;
      v266.m256i_i64[0] = 2;
      v68 = _InterlockedIncrement64(v65);
      if ( (v68 < 0) ^ v66 | (v68 == 0) )
LABEL_26:
        BUG();
    }
    else
    {
      memset(v279, 0, sizeof(v279));
      v269 = 0;
      *(__m128i *)&v247[6] = v238[0];
      *(__m128i *)&v247[22] = v238[1];
      *(__m128i *)&v247[38] = v238[2];
      *(__m128i *)&v247[54] = v238[3];
      *(_OWORD *)&v247[70] = v239;
      *(_QWORD *)&v247[86] = v240;
      v267.m256i_i64[1] = 0;
      *(_QWORD *)&v268 = 0;
      *((_QWORD *)&v268 + 1) = 8;
      v270 = (__m128i)8uLL;
      v271 = (__m128i)2uLL;
      *(_WORD *)v272 = 0;
      *(_QWORD *)&v276[14] = *((_QWORD *)&v239 + 1);
      v277 = v240;
      *(_OWORD *)v276 = *(_OWORD *)&v247[64];
      v275 = *(_OWORD *)&v247[48];
      v274 = *(_OWORD *)&v247[32];
      v273 = *(_OWORD *)&v247[16];
      *(_OWORD *)&v272[2] = *(_OWORD *)v247;
      v278 = 1;
      v280 = 0;
      v281 = 0;
      v282 = 2;
      v67 = v292;
      v266.m256i_i64[0] = 0;
      if ( _InterlockedIncrement64(v65) <= 0 )
        goto LABEL_26;
    }
    v289 = v67;
    v288 = v52;
    sub_1412594B0(v237, v65, &v266);
    v289 = v292;
    v288 = v52;
    if ( v49 == 2 )
    {
      sub_140CB55D0((unsigned int)&v266, (unsigned int)v237, (unsigned int)aXApiKey_1, 9, v47, v48);
      v289 = v292;
      v288 = v52;
      sub_140CB55D0(
        (unsigned int)v238,
        (unsigned int)&v266,
        (unsigned int)aAnthropicVersi_0,
        17,
        (__int64)a20230601,
        10);
    }
    else
    {
      sub_140CB4D60(v238, v237, v47, v48);
    }
    sub_1418F44E0((__m128i *)&v266, v238, 0x110u);
    v6 = *((_QWORD *)&v293 + 1);
    v69 = *(_QWORD *)(*((_QWORD *)&v293 + 1) + 80LL);
    v70 = 0x7FFFFFFFFFFFFFFELL;
    LOBYTE(v70) = v69 >> 62 != 0 || 4 * v69 > 0x7FFFFFFFFFFFFFFELL;
    v291 = v57;
    if ( (_BYTE)v70 )
    {
      v71 = 0;
LABEL_43:
      v294 = 1;
      sub_141938D2B(v71, 4 * v69);
    }
    v72 = *(_WORD *)(*((_QWORD *)&v293 + 1) + 88LL);
    v73 = 2;
    if ( 4 * v69 )
    {
      v74 = *(const __m128i **)(*((_QWORD *)&v293 + 1) + 72LL);
      nullsub_1(v70);
      v71 = 2;
      v75 = (__m128i *)sub_140001650(4 * v69, 2);
      if ( !v75 )
        goto LABEL_43;
      v73 = (__int64)v75;
      if ( v69 )
        sub_1418F44E0(v75, v74, 4 * v69);
    }
    v261 = v73;
    *(_QWORD *)&v293 = v69;
    v251 = 4 * v69;
    sub_1403F0BA0(&v249, v6 + 24);
    sub_1403F09D0(v247, v6 + 48);
    v259 = v72;
    *((_QWORD *)&v257 + 1) = v261;
    v258 = v293;
    v255 = v249;
    *(_QWORD *)v256 = v250;
    *(_QWORD *)&v257 = *(_QWORD *)&v247[16];
    *(_OWORD *)&v256[8] = *(_OWORD *)v247;
    v253 = *(_OWORD *)v6;
    v254 = *(_QWORD *)(v6 + 16);
    v294 = 0;
    sub_141259870(v247, &v266, &v253);
    v289 = v292;
    v288 = v291;
    v76 = sub_1412597A0(v247);
    v4 = v295;
    *(_QWORD *)(v295 + 632) = v76;
    *(_QWORD *)(v4 + 640) = v77;
    LOBYTE(v6) = v286;
LABEL_49:
    v78 = v4 + 632;
    sub_14126C5E0(&v266, v4 + 632, v283);
    v79 = v266.m256i_i64[0];
    if ( v266.m256i_i64[0] == -2 )
    {
      v100 = 3;
      v99 = v295;
LABEL_253:
      *v292 = v100;
      v98 = 3;
      goto LABEL_226;
    }
    *((_QWORD *)&v293 + 1) = v266.m256i_i64[1];
    v6 = v266.m256i_u64[3];
    v80 = v266.m256i_i64[2];
    v241 = v267;
    v242 = v268;
    v243 = v269;
    v244 = v270;
    v245 = _mm_loadu_si128(&v271);
    v246 = *(_QWORD *)v272;
    v81 = *(_QWORD *)(v295 + 632);
    v82 = *(_QWORD *)(v295 + 640);
    v289 = v292;
    v83 = v291;
    v288 = v291;
    sub_140D1A820(v81, v82);
    if ( (_DWORD)v79 == -1 )
    {
      *(_QWORD *)&v293 = -1;
      v96 = -1;
      v97 = v295;
      goto LABEL_68;
    }
    v84 = v295;
    *(_QWORD *)(v295 + 632) = v79;
    *(_QWORD *)(v84 + 640) = *((_QWORD *)&v293 + 1);
    *(_QWORD *)(v84 + 648) = v80;
    *(_QWORD *)(v84 + 656) = v6;
    *(__m128i *)(v84 + 728) = v244;
    *(_QWORD *)(v84 + 760) = v246;
    *(__m128i *)(v84 + 744) = v245;
    si128 = _mm_load_si128((const __m128i *)&v241);
    v86 = *(_OWORD *)&v241.m256i_u64[2];
    v87 = v242;
    *(_OWORD *)(v84 + 712) = v243;
    *(_OWORD *)(v84 + 696) = v87;
    *(_OWORD *)(v84 + 680) = v86;
    *(__m128i *)(v84 + 664) = si128;
    v88 = *(_DWORD *)(v84 + 736);
    if ( (unsigned __int16)(v88 - 200) > 0x63u )
    {
      v89 = *(_QWORD *)(v84 + 576);
      v90 = *(_QWORD *)(v89 + 8);
      v91 = *(_QWORD *)(v89 + 16);
      LOWORD(v249) = v88;
      v285 = v292;
      v284 = v83;
      sub_140EF5FF0(v247, v90, v91);
      v266.m256i_i64[0] = (__int64)&v249;
      v266.m256i_i64[1] = (__int64)sub_1416BB1E0;
      v266.m256i_i64[2] = (__int64)v247;
      v266.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_1416ABFD0(&v253, &unk_141A4D5B0, &v266);
      if ( *(_QWORD *)v247 )
        sub_140001660(*(_QWORD *)&v247[8], *(_QWORD *)v247, 1);
      v6 = v254;
      v293 = v253;
      v4 = v295;
      if ( (_QWORD)v253 != -1 )
        goto LABEL_64;
    }
    v285 = v292;
    v284 = v291;
    v92 = sub_141234880(v78);
    v4 = v295;
    if ( v92 == 1 && v93 > **(_QWORD **)(v295 + 584) )
    {
      nullsub_1(v94);
      *(_QWORD *)&v293 = 45;
      v95 = (__m128i *)sub_140001650(45, 1);
      if ( !v95 )
      {
        v285 = v292;
        v284 = v291;
        sub_141938D2B(1, 45);
      }
      qmemcpy(&v95[1], "response exceeded 8 MiB total", 29);
      *((_QWORD *)&v293 + 1) = v95;
      *v95 = _mm_loadu_si128((const __m128i *)&xmmword_141A474DF);
      v6 = 45;
      goto LABEL_64;
    }
    *(_QWORD *)(v295 + 768) = 0;
    *(_QWORD *)(v4 + 776) = 1;
    *(_QWORD *)(v4 + 784) = 0;
    while ( 1 )
    {
      *(_QWORD *)(v4 + 792) = v4 + 632;
      *(_BYTE *)(v4 + 816) = 0;
LABEL_229:
      sub_140D36120(&v266, v4 + 792, v283);
      if ( v266.m256i_i64[0] == 2 )
      {
        v100 = 4;
        v99 = v295;
        LOBYTE(v6) = v286;
        goto LABEL_253;
      }
      v4 = v295;
      if ( (v266.m256i_i8[0] & 1) != 0 )
      {
        *((_QWORD *)&v293 + 1) = v266.m256i_i64[1];
        *(_QWORD *)&v293 = -1;
        v223 = *(_QWORD *)(v295 + 768);
        if ( v223 )
          goto LABEL_237;
        goto LABEL_64;
      }
      if ( !v266.m256i_i64[1] )
        break;
      v224 = _mm_loadu_si128((const __m128i *)&v266.m256i_u64[3]);
      v6 = v266.m256i_u64[3];
      *(_OWORD *)v266.m256i_i8 = *(_OWORD *)&v266.m256i_u64[1];
      *(__m128i *)&v266.m256i_u64[2] = v224;
      v225 = *(_QWORD **)(v295 + 584);
      v226 = *v225 - v6;
      if ( *v225 < v6 )
      {
        nullsub_1(v226);
        v227 = (__m128i *)sub_140001650(45, 1);
        if ( !v227 )
          sub_141938D2B(1, 45);
        qmemcpy(&v227[1], "response exceeded 8 MiB total", 29);
        *((_QWORD *)&v293 + 1) = v227;
        *v227 = _mm_loadu_si128((const __m128i *)&xmmword_141A474DF);
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v266.m256i_i64[0] + 32))(
          &v266.m256i_u64[3],
          v266.m256i_i64[1],
          v266.m256i_i64[2]);
        *(_QWORD *)&v293 = 45;
        v6 = 45;
        v4 = v295;
        v223 = *(_QWORD *)(v295 + 768);
        if ( v223 )
LABEL_237:
          sub_140001660(*(_QWORD *)(v4 + 776), v223, 1);
LABEL_64:
        sub_140402120(v4 + 632);
        v97 = v295;
        v101 = *(_QWORD **)(v295 + 760);
        if ( *v101 )
          sub_140001660(v101[1], *v101, 1);
        sub_140001660(v101, 88, 8);
        v96 = -1;
        goto LABEL_67;
      }
      *v225 = v226;
      v233 = v266.m256i_u64[2];
      v232 = (const __m128i *)v266.m256i_i64[1];
      v234 = *(_QWORD *)(v4 + 784);
      if ( v266.m256i_i64[2] > (unsigned __int64)(*(_QWORD *)(v4 + 768) - v234) )
      {
        sub_14190D590(v4 + 768, v234, v266.m256i_i32[4], 1, 1);
        v4 = v295;
        v234 = *(_QWORD *)(v295 + 784);
      }
      else
      {
        v235 = 0;
        if ( !v266.m256i_i64[2] )
          goto LABEL_247;
      }
      sub_1418F44E0((__m128i *)(v234 + *(_QWORD *)(v4 + 776)), v232, v233);
      v235 = v266.m256i_i64[2];
      v232 = (const __m128i *)v266.m256i_i64[1];
LABEL_247:
      *(_QWORD *)(v4 + 784) = v233 + v234;
      (*(void (__fastcall **)(unsigned __int64 *, const __m128i *, __int64))(v266.m256i_i64[0] + 32))(
        &v266.m256i_u64[3],
        v232,
        v235);
      v4 = v295;
    }
    *(__m128i *)v266.m256i_i8 = _mm_loadu_si128((const __m128i *)(v295 + 776));
    *(_OWORD *)&v266.m256i_u64[2] = 0;
    sub_14062F970(v247, &v266);
    v96 = v247[0];
    if ( v247[0] == 0xFF )
    {
      v266.m256i_i64[0] = *(_QWORD *)&v247[8];
      nullsub_1(v228);
      v236 = (__m128i *)sub_140001650(35, 1);
      if ( !v236 )
        sub_141938D2B(1, 35);
      qmemcpy(&v236[1], "model list response", 19);
      *v236 = _mm_loadu_si128((const __m128i *)&xmmword_141A4750C);
      *((_QWORD *)&v293 + 1) = v236;
      sub_14002F910(&v266);
      *(_QWORD *)&v293 = 35;
      v6 = 35;
      v229 = v295;
      v230 = *(_QWORD *)(v295 + 768);
      if ( v230 )
LABEL_240:
        sub_140001660(*(_QWORD *)(v229 + 776), v230, 1);
    }
    else
    {
      *(_DWORD *)((char *)v264 + 3) = *(_DWORD *)&v247[4];
      v264[0] = *(_DWORD *)&v247[1];
      v293 = *(_OWORD *)&v247[8];
      v6 = *(_QWORD *)&v247[24];
      v229 = v295;
      v230 = *(_QWORD *)(v295 + 768);
      if ( v230 )
        goto LABEL_240;
    }
    sub_140402120(v229 + 632);
    v97 = v295;
    v231 = *(_QWORD **)(v295 + 760);
    if ( *v231 )
      sub_140001660(v231[1], *v231, 1);
    sub_140001660(v231, 88, 8);
LABEL_67:
    v83 = v291;
LABEL_68:
    v265[0] = v264[0];
    *(_DWORD *)((char *)v265 + 3) = *(_DWORD *)((char *)v264 + 3);
    *(_BYTE *)(v97 + 624) = 1;
    *(_BYTE *)(v97 + 550) = 1;
    *(_BYTE *)(v97 + 112) = v96;
    v102 = *(_DWORD *)((char *)v265 + 3);
    *(_DWORD *)(v97 + 113) = v265[0];
    *(_DWORD *)(v97 + 116) = v102;
    *(_OWORD *)(v97 + 120) = v293;
    *(_QWORD *)(v97 + 136) = v6;
    if ( v96 != -1 )
    {
      v103 = _mm_loadu_si128(v260);
      v252[1] = v260[1];
      v252[0] = v103;
      *(_BYTE *)(v97 + 550) = 0;
      sub_140DA5B00(&v266, v252);
      v6 = v266.m256i_u64[3];
      v104 = v266.m256i_i64[2];
      v293 = *(_OWORD *)&v266.m256i_u64[1];
      if ( v266.m256i_i8[0] )
      {
        v53 = 1;
        goto LABEL_124;
      }
      *(_QWORD *)v247 = v266.m256i_i64[1];
      *(_OWORD *)&v247[8] = *(_OWORD *)&v266.m256i_u64[2];
      v105 = v266.m256i_i64[2] + 24 * v266.m256i_i64[3];
      v106 = v295 + 160;
      v107 = v295 + 496;
      while ( v104 != v105 )
      {
        sub_1416AC440(&v266, v104);
        if ( (unsigned __int8)sub_1403AAB80(v106, &v266) )
        {
          v104 += 24;
          if ( *(_QWORD *)(v295 + 512) >= 0x2711u )
            goto LABEL_77;
        }
        else
        {
          sub_1416AC440(&v266, v104);
          v109 = *(_QWORD *)(v295 + 512);
          if ( v109 == *(_QWORD *)(v295 + 496) )
            sub_14190FDC0(v107);
          v110 = v295;
          v111 = *(_QWORD *)(v295 + 504);
          v108 = 3 * v109;
          *(_QWORD *)(v111 + 8 * v108 + 16) = v266.m256i_i64[2];
          *(__m128i *)(v111 + 8 * v108) = _mm_loadu_si128((const __m128i *)&v266);
          v112 = v109 + 1;
          *(_QWORD *)(v110 + 512) = v112;
          v104 += 24;
          if ( v112 >= 0x2711 )
          {
LABEL_77:
            nullsub_1(v108);
            v113 = 46;
            v53 = 1;
            v114 = (__m128i *)sub_140001650(46, 1);
            if ( !v114 )
              sub_141938D2B(1, 46);
            v115 = (__int64)v114;
            qmemcpy(&v114[1], "exceeded the model count limit", 30);
            *v114 = _mm_loadu_si128((const __m128i *)&xmmword_141A47E89);
            v116 = 46;
            goto LABEL_116;
          }
        }
      }
      v126 = (_BYTE *)sub_1416419F0(aHasMore, 8, v252);
      v127 = (_QWORD *)v295;
      if ( v126 )
      {
        if ( *v126 != 1 )
        {
          sub_140BA0B50(&v266, aInvalidModelLi, 38);
          goto LABEL_212;
        }
        if ( v126[1] )
        {
          if ( *(_BYTE *)(v295 + 548) == 2 )
          {
            v292 = (char *)(v295 + 320);
            v128.m128i_i64[0] = sub_141658DA0(v295 + 320);
            if ( !v128.m128i_i64[0] )
              v128 = 0u;
            if ( !v128.m128i_i64[0] )
              v128.m128i_i64[0] = 1;
            v238[0] = v128;
            while ( 1 )
            {
              sub_141673E40(&v266, v238);
              if ( v266.m256i_i64[0] == -2 )
              {
                v134 = sub_1416419F0(aLastId, 7, v252);
                if ( v134
                  && *(_BYTE *)v134 == 3
                  && (v136 = *(_QWORD *)(v134 + 24)) != 0
                  && v6
                  && *(_QWORD *)(v105 - 8) == v136
                  && (v137 = *(const __m128i **)(v134 + 16), !(unsigned int)sub_1418F4B70(*(_QWORD *)(v105 - 16), v137)) )
                {
                  if ( v136 < 0 )
                  {
                    v138 = 0;
                    goto LABEL_113;
                  }
                  nullsub_1(v135);
                  v138 = 1;
                  v173 = (__m128i *)sub_140001650(v136, 1);
                  if ( !v173 )
                  {
                    v262 = v136;
LABEL_113:
                    sub_141938D2B(v138, v262);
                  }
                  v174 = (__int64)v173;
                  sub_1418F44E0(v173, v137, v136);
                  v266.m256i_i64[0] = v136;
                  v262 = v174;
                  v266.m256i_i64[1] = v174;
                  v266.m256i_i64[2] = v136;
                  if ( !(unsigned __int8)sub_1403AAB80(v295 + 208, &v266) )
                  {
                    sub_1416AC440(&v266, v292);
                    LOBYTE(v269) = *(_BYTE *)(v295 + 400);
                    v268 = *(_OWORD *)(v295 + 384);
                    v175 = *(_WORD *)(v295 + 360);
                    v176 = *(_WORD *)(v295 + 362);
                    v177 = *(_DWORD *)(v295 + 380);
                    v178 = *(_DWORD *)(v295 + 344);
                    v179 = *(_DWORD *)(v295 + 348);
                    v180 = *(_DWORD *)(v295 + 352);
                    v181 = *(_DWORD *)(v295 + 356);
                    *(_OWORD *)((char *)&v267.m256i_u64[1] + 4) = *(_OWORD *)(v295 + 364);
                    v267.m256i_i16[4] = v175;
                    v267.m256i_i16[5] = v176;
                    v267.m256i_i32[7] = v177;
                    v266.m256i_i64[3] = __PAIR64__(v179, v178);
                    v267.m256i_i64[0] = __PAIR64__(v181, v180);
                    v182 = v295 + 408;
                    v183 = *(_QWORD *)(v295 + 408);
                    if ( v183 )
                      sub_140001660(*(_QWORD *)(v295 + 416), v183, 1);
                    *(_QWORD *)(v182 + 80) = v269;
                    *(_OWORD *)(v182 + 64) = v268;
                    v184 = _mm_loadu_si128((const __m128i *)&v266);
                    v186 = *(_OWORD *)&v266.m256i_u64[2];
                    v187 = v186 >> 64;
                    v185 = v186;
                    v188 = v267.m256i_i32[0];
                    v189 = v267.m256i_i32[1];
                    v190 = v267.m256i_i64[1];
                    *(_OWORD *)(v182 + 48) = *(_OWORD *)&v267.m256i_u64[2];
                    *(_DWORD *)(v182 + 32) = v188;
                    *(_DWORD *)(v182 + 36) = v189;
                    *(_QWORD *)(v182 + 40) = v190;
                    *(_OWORD *)(v182 + 16) = __PAIR128__(v187, v185);
                    *(__m128i *)v182 = v184;
                    sub_141657B50(&v266, v182);
                    if ( v266.m256i_i64[0] == -2 )
                      sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
                    v191 = sub_14165A240(&v266);
                    sub_141673070(
                      v191,
                      v267.m256i_i32[0],
                      v267.m256i_i32[2],
                      v267.m256i_i32[4],
                      (__int64)aAfterId,
                      8,
                      (__int64)v137,
                      v136);
                    if ( v266.m256i_i64[0] != -2 )
                    {
                      sub_14165A290(&v266);
                      if ( v266.m256i_i64[0] != -1 )
                      {
                        if ( v266.m256i_i64[0] )
                          sub_140001660(v266.m256i_i64[1], v266.m256i_i64[0], 1);
                      }
                    }
                    v192 = (_QWORD *)(*((_QWORD *)&v293 + 1) + 8LL);
                    do
                    {
                      v193 = *(v192 - 1);
                      if ( v193 )
                        sub_140001660(*v192, v193, 1);
                      v192 += 3;
                      --v6;
                    }
                    while ( v6 );
                    if ( (_QWORD)v293 )
                      sub_140001660(*((_QWORD *)&v293 + 1), 24 * v293, 8);
                    sub_140409B40(v252);
                    v4 = v295;
                    v42 = *(_QWORD *)(v295 + 256);
                    v194 = *(_QWORD *)(v295 + 264);
                    if ( v42 >= v194 )
                    {
                      nullsub_1(v194);
                      _RAX = sub_140001650(39, 1);
                      if ( !_RAX )
                        sub_141938D2B(1, 39);
                      qmemcpy((void *)(_RAX + 16), "exceeded the page limit", 23);
                      *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A47DCC);
                      v196 = *(_QWORD *)(v4 + 216);
                      *((_QWORD *)&v293 + 1) = _RAX;
                      if ( v196 )
                      {
                        v197 = *(_QWORD *)(v4 + 232);
                        if ( v197 )
                        {
                          v198 = *(const __m128i **)(v4 + 208);
                          v199 = v198 + 1;
                          _ESI = ~_mm_movemask_epi8(_mm_load_si128(v198));
                          do
                          {
                            if ( !(_WORD)_ESI )
                            {
                              do
                              {
                                v201 = _mm_load_si128(v199);
                                v198 -= 24;
                                ++v199;
                                _ESI = _mm_movemask_epi8(v201) ^ 0xFFFF;
                              }
                              while ( !_ESI );
                            }
                            __asm { tzcnt   eax, esi }
                            v202 = -3 * _RAX;
                            v203 = *((_QWORD *)&v198[-1] + v202 - 1);
                            if ( v203 )
                              sub_140001660(v198[-1].m128i_i64[v202], v203, 1);
                            --v197;
                            _RAX = _ESI & (unsigned int)(_ESI - 1);
                            _ESI &= _ESI - 1;
                          }
                          while ( v197 );
                        }
                        _RAX = (24 * v196 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                        v205 = _RAX + v196 + 17;
                        if ( v205 )
                          HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)(v4 + 208) - _RAX, v205, 16) >> 32;
                      }
                      v206 = *(_QWORD *)(v4 + 168);
                      if ( v206 )
                      {
                        v207 = *(_QWORD *)(v4 + 184);
                        if ( v207 )
                        {
                          v208 = *(const __m128i **)(v4 + 160);
                          v209 = v208 + 1;
                          _ESI = ~_mm_movemask_epi8(_mm_load_si128(v208));
                          do
                          {
                            if ( !(_WORD)_ESI )
                            {
                              do
                              {
                                v211 = _mm_load_si128(v209);
                                v208 -= 24;
                                ++v209;
                                _ESI = _mm_movemask_epi8(v211) ^ 0xFFFF;
                              }
                              while ( !_ESI );
                            }
                            __asm { tzcnt   eax, esi }
                            v212 = -3 * _RAX;
                            v213 = *((_QWORD *)&v208[-1] + v212 - 1);
                            if ( v213 )
                              sub_140001660(v208[-1].m128i_i64[v212], v213, 1);
                            --v207;
                            _RAX = _ESI & (unsigned int)(_ESI - 1);
                            _ESI &= _ESI - 1;
                          }
                          while ( v207 );
                        }
                        v214 = (24 * v206 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                        v215 = v214 + v206 + 17;
                        if ( v215 )
                          sub_140001660(*(_QWORD *)(v4 + 160) - v214, v215, 16);
                      }
                      v216 = *(_QWORD *)(v4 + 512);
                      if ( v216 )
                      {
                        v217 = (_QWORD *)(*(_QWORD *)(v4 + 504) + 8LL);
                        do
                        {
                          v218 = *(v217 - 1);
                          if ( v218 )
                            sub_140001660(*v217, v218, 1);
                          v217 += 3;
                          --v216;
                        }
                        while ( v216 );
                      }
                      v219 = *(_QWORD *)(v4 + 496);
                      if ( v219 )
                        sub_140001660(*(_QWORD *)(v4 + 504), 24 * v219, 8);
                      *(_BYTE *)(v4 + 549) = 0;
                      v220 = *(_QWORD *)(v4 + 408);
                      if ( v220 )
                        sub_140001660(*(_QWORD *)(v4 + 416), v220, 1);
                      v221 = *(_QWORD *)(v4 + 320);
                      v6 = 39;
                      v53 = 1;
                      if ( v221 )
                        sub_140001660(*(_QWORD *)(v4 + 328), v221, 1);
                      *(_QWORD *)&v293 = 39;
                      goto LABEL_156;
                    }
                    goto LABEL_10;
                  }
                  sub_140BA0B50(&v266, aModelListPagin, 37);
                  v115 = v266.m256i_i64[1];
                  v113 = v266.m256i_i64[0];
                  v116 = v266.m256i_i64[2];
                  v53 = 1;
LABEL_117:
                  v140 = (_QWORD *)(*((_QWORD *)&v293 + 1) + 8LL);
                  do
                  {
                    v141 = *(v140 - 1);
                    if ( v141 )
                      sub_140001660(*v140, v141, 1);
                    v140 += 3;
                    --v6;
                  }
                  while ( v6 );
                }
                else
                {
                  nullsub_1(v135);
                  v113 = 55;
                  v53 = 1;
                  v204 = (__m128i *)sub_140001650(55, 1);
                  if ( !v204 )
                    sub_141938D2B(1, 55);
                  v115 = (__int64)v204;
                  qmemcpy(&v204[1], "ation cursor is missing or inconsistent", 39);
                  *v204 = _mm_loadu_si128((const __m128i *)&xmmword_141A47545);
                  v116 = 55;
LABEL_116:
                  if ( v6 )
                    goto LABEL_117;
                }
                if ( (_QWORD)v293 )
                  sub_140001660(*((_QWORD *)&v293 + 1), 24 * v293, 8);
                *(_QWORD *)&v293 = v113;
                *((_QWORD *)&v293 + 1) = v115;
                v6 = v116;
LABEL_124:
                sub_140409B40(v252);
                v4 = v295;
                v142 = *(_QWORD *)(v295 + 216);
                if ( !v142 )
                  goto LABEL_134;
                goto LABEL_125;
              }
              v129 = v266.m256i_i64[1];
              if ( v266.m256i_i64[2] == 9 )
              {
                v130 = (*(_QWORD *)v266.m256i_i64[1] ^ 0x695F65726F666562LL
                      | *(unsigned __int8 *)(v266.m256i_i64[1] + 8) ^ 0x64LL) == 0;
              }
              else
              {
                if ( v266.m256i_i64[2] != 8 )
                {
                  v131 = 0;
                  v132 = v266.m256i_i64[3];
                  v133 = v267.m256i_i64[0];
                  if ( v266.m256i_i64[0] <= 0 )
                    goto LABEL_101;
LABEL_100:
                  sub_140001660(v266.m256i_i64[1], v266.m256i_i64[0], 1);
                  goto LABEL_101;
                }
                v130 = *(_QWORD *)v266.m256i_i64[1] == 0x64695F7265746661LL;
              }
              v131 = v130;
              v132 = v266.m256i_i64[3];
              v133 = v267.m256i_i64[0];
              if ( v266.m256i_i64[0] > 0 )
                goto LABEL_100;
LABEL_101:
              if ( (unsigned __int64)(v132 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v133, v132, 1);
              if ( v131 )
              {
                nullsub_1(v129);
                v113 = 61;
                v53 = 1;
                v139 = (__m128i *)sub_140001650(61, 1);
                if ( !v139 )
                  sub_141938D2B(1, 61);
                v115 = (__int64)v139;
                qmemcpy(&v139[1], "ation conflicts with the configured URL query", 45);
                *v139 = _mm_loadu_si128((const __m128i *)&xmmword_141A47DF3);
                v116 = 61;
                goto LABEL_116;
              }
            }
          }
          sub_140BA0B50(&v266, aUpstreamReturn, 51);
LABEL_212:
          v115 = v266.m256i_i64[1];
          v113 = v266.m256i_i64[0];
          v116 = v266.m256i_i64[2];
          v53 = 1;
          goto LABEL_116;
        }
      }
      *(_BYTE *)(v295 + 549) = 0;
      v113 = v127[62];
      v115 = v127[63];
      v116 = v127[64];
      v53 = 0;
      goto LABEL_116;
    }
    if ( *(_DWORD *)(v97 + 544) >= 2u )
      goto LABEL_215;
    if ( (_QWORD)v293 != -1 )
    {
      *(_BYTE *)(v97 + 550) = 0;
      goto LABEL_217;
    }
    v117 = sub_14122E510(v97 + 128);
    LOBYTE(v6) = v286;
    if ( !v117 && !(unsigned __int8)sub_14122E5A0(v97 + 128) )
    {
      v293 = *(_OWORD *)(v97 + 120);
      v6 = *(_QWORD *)(v97 + 136);
LABEL_215:
      *(_BYTE *)(v97 + 550) = 0;
      if ( (_QWORD)v293 == -1 )
      {
        v238[0].m128i_i64[0] = sub_14122E700(*((_QWORD *)&v293 + 1));
        *(_QWORD *)v247 = v238;
        *(_QWORD *)&v247[8] = sub_14122E940;
        sub_1416ABFD0(&v266, &unk_141A49CB2, v247);
        v97 = v295;
        sub_140D19140(v238[0].m128i_i64[0]);
        v293 = *(_OWORD *)v266.m256i_i8;
        v6 = v266.m256i_u64[2];
      }
LABEL_217:
      *(_BYTE *)(v97 + 550) = 0;
      v53 = 1;
      v4 = v295;
      v142 = *(_QWORD *)(v295 + 216);
      if ( !v142 )
      {
LABEL_134:
        v154 = *(_QWORD *)(v4 + 168);
        if ( v154 )
        {
          v155 = *(_QWORD *)(v4 + 184);
          if ( v155 )
          {
            HIDWORD(_RAX) = HIDWORD(v295);
            v157 = *(const __m128i **)(v295 + 160);
            v158 = v157 + 1;
            _ESI = ~_mm_movemask_epi8(_mm_load_si128(v157));
            do
            {
              if ( !(_WORD)_ESI )
              {
                do
                {
                  v160 = _mm_load_si128(v158);
                  v157 -= 24;
                  ++v158;
                  _ESI = _mm_movemask_epi8(v160) ^ 0xFFFF;
                }
                while ( !_ESI );
              }
              __asm { tzcnt   eax, esi }
              v161 = -3 * _RAX;
              v162 = *((_QWORD *)&v157[-1] + v161 - 1);
              if ( v162 )
                sub_140001660(v157[-1].m128i_i64[v161], v162, 1);
              --v155;
              _RAX = _ESI & (unsigned int)(_ESI - 1);
              _ESI &= _ESI - 1;
            }
            while ( v155 );
          }
          v163 = (24 * v154 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v164 = v163 + v154;
          v130 = v164 == -17;
          v165 = v164 + 17;
          v4 = v295;
          if ( !v130 )
            sub_140001660(*(_QWORD *)(v295 + 160) - v163, v165, 16);
        }
        if ( *(_BYTE *)(v4 + 549) )
        {
          v166 = *(_QWORD *)(v4 + 512);
          if ( v166 )
          {
            v167 = (_QWORD *)(*(_QWORD *)(v4 + 504) + 8LL);
            do
            {
              v168 = *(v167 - 1);
              if ( v168 )
                sub_140001660(*v167, v168, 1);
              v167 += 3;
              --v166;
            }
            while ( v166 );
          }
          v169 = *(_QWORD *)(v4 + 496);
          if ( v169 )
            sub_140001660(*(_QWORD *)(v4 + 504), 24 * v169, 8);
        }
        *(_BYTE *)(v4 + 549) = 0;
        v170 = *(_QWORD *)(v4 + 408);
        if ( v170 )
          sub_140001660(*(_QWORD *)(v4 + 416), v170, 1);
        v171 = *(_QWORD *)(v4 + 320);
        if ( v171 )
          sub_140001660(*(_QWORD *)(v4 + 328), v171, 1);
        goto LABEL_156;
      }
LABEL_125:
      v143 = *(_QWORD *)(v4 + 232);
      if ( v143 )
      {
        HIDWORD(_RAX) = HIDWORD(v295);
        v145 = *(const __m128i **)(v295 + 208);
        v146 = v145 + 1;
        _ESI = ~_mm_movemask_epi8(_mm_load_si128(v145));
        do
        {
          if ( !(_WORD)_ESI )
          {
            do
            {
              v148 = _mm_load_si128(v146);
              v145 -= 24;
              ++v146;
              _ESI = _mm_movemask_epi8(v148) ^ 0xFFFF;
            }
            while ( !_ESI );
          }
          __asm { tzcnt   eax, esi }
          v149 = -3 * _RAX;
          v150 = *((_QWORD *)&v145[-1] + v149 - 1);
          if ( v150 )
            sub_140001660(v145[-1].m128i_i64[v149], v150, 1);
          --v143;
          _RAX = _ESI & (unsigned int)(_ESI - 1);
          _ESI &= _ESI - 1;
        }
        while ( v143 );
      }
      v151 = (24 * v142 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v152 = v151 + v142;
      v130 = v152 == -17;
      v153 = v152 + 17;
      v4 = v295;
      if ( !v130 )
        sub_140001660(*(_QWORD *)(v295 + 208) - v151, v153, 16);
      goto LABEL_134;
    }
    *(_BYTE *)(v97 + 550) = 0;
    v83[1].m128i_i64[0] = *(_QWORD *)(v97 + 136);
    *v83 = _mm_loadu_si128((const __m128i *)(v97 + 120));
    v118 = (unsigned int)(*(_DWORD *)(v97 + 544) + 1);
    *(_DWORD *)(v97 + 544) = v118;
    v119 = (0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)(150 * v118)) >> 64;
    sub_1415141D0(&v266, v119, (unsigned int)(1000000 * (150 * v118 - 1000 * v119)), &off_141A47EB8);
    v248 = _mm_loadu_si128(&v270);
    v120 = v269;
    *(_OWORD *)&v247[80] = v269;
    v121 = v268;
    *(_OWORD *)&v247[64] = v268;
    v122 = *(_OWORD *)v266.m256i_i8;
    v123 = *(_OWORD *)&v266.m256i_u64[2];
    v124 = *(_OWORD *)v267.m256i_i8;
    v125 = *(_OWORD *)&v267.m256i_u64[2];
    *(__m256i *)&v247[32] = v267;
    *(__m256i *)v247 = v266;
    v4 = v295;
    *(__m128i *)(v295 + 680) = v248;
    *(_OWORD *)(v4 + 664) = v120;
    *(_OWORD *)(v4 + 648) = v121;
    *(_OWORD *)(v4 + 632) = v125;
    *(_OWORD *)(v4 + 616) = v124;
    *(_OWORD *)(v4 + 600) = v123;
    *(_OWORD *)(v4 + 584) = v122;
LABEL_27:
    *((_QWORD *)&v293 + 1) = v4 + 584;
    if ( !(unsigned __int8)sub_141514440(v4 + 584, v283) )
    {
      sub_14040CAE0(*((_QWORD *)&v293 + 1));
      v4 = v295;
      v56 = *(_QWORD *)(v295 + 560);
      if ( v56 == -1 )
      {
        sub_140D19140(*(_QWORD *)(v295 + 568));
      }
      else if ( v56 )
      {
        sub_140001660(*(_QWORD *)(v295 + 568), v56, 1);
      }
      *(_BYTE *)(v4 + 550) = 0;
      continue;
    }
    break;
  }
  v98 = 4;
  v99 = v295;
LABEL_226:
  v222 = v6 | v290;
  *(_BYTE *)(v99 + 551) = v98;
  if ( (unsigned __int8)sub_14151B400(v222 & 1, v99, v283) )
  {
    result = v287;
    *v287 = -1;
  }
  else
  {
    result = v287;
    *v287 = 2;
  }
  return result;
}
