// win 1.2.7 latest-exe | module src/core/relay/fetch_models.rs | ea 0x14076b330 | successor of pre-update 0x140dd9620 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 *__fastcall sub_14076B330(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rsi
  __int16 v19; // ax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // r10d
  int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  volatile signed __int64 **v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // r13
  char v50; // si
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // r14
  unsigned __int8 *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r12
  __int16 v60; // ax
  __int16 v61; // cx
  int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // r9d
  unsigned int v65; // r10d
  unsigned int v66; // r11d
  volatile signed __int64 *v67; // r14
  bool v68; // of
  __int64 v69; // rcx
  __int64 v70; // rt0
  __int64 v71; // rdx
  unsigned __int64 v72; // r13
  __int64 v73; // rcx
  __int64 v74; // r14
  __int16 v75; // di
  __int64 v76; // r12
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // rdx
  __m128i *v86; // r12
  __int64 v87; // rdx
  __m128i si128; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r13
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rcx
  __m128i *v99; // rax
  char v100; // di
  __int64 v101; // r15
  char v102; // al
  __int64 v103; // rdx
  char v104; // al
  _QWORD *v105; // r14
  int v106; // ecx
  __m128i v107; // xmm0
  __int64 v108; // r15
  __int64 v109; // rdi
  __int64 v110; // r14
  __int64 v111; // r12
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // r8
  __int64 v116; // rax
  unsigned __int64 v117; // rsi
  __m128i *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // r12
  char v121; // al
  __int64 v122; // rax
  __int64 v123; // rdx
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  __int128 v126; // xmm3
  __int128 v127; // xmm4
  __int128 v128; // xmm5
  __int128 v129; // xmm6
  _BYTE *v130; // rax
  _QWORD *v131; // rcx
  __int128 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  bool v135; // zf
  bool v136; // si
  __int64 v137; // r15
  __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r12
  __int64 v143; // r14
  __int64 v144; // r15
  __m128i *v145; // rax
  _QWORD *v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // rdi
  __int64 v149; // r15
  const __m128i *v151; // r12
  const __m128i *v152; // r13
  __m128i v154; // xmm0
  __int64 v155; // rax
  __int64 v156; // rdx
  unsigned __int64 v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rdi
  __int64 v160; // rdi
  __int64 v161; // r15
  const __m128i *v163; // r12
  const __m128i *v164; // r13
  __m128i v166; // xmm0
  __int64 v167; // rax
  __int64 v168; // rdx
  unsigned __int64 v169; // rax
  __int64 v170; // rdi
  __int64 v171; // rdi
  __int64 v172; // rsi
  _QWORD *v173; // rdi
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 *result; // rax
  __int64 v179; // rax
  __int64 v180; // rsi
  __int16 v181; // ax
  __int16 v182; // cx
  __int32 v183; // edx
  unsigned int v184; // r8d
  unsigned int v185; // r9d
  unsigned int v186; // r10d
  unsigned int v187; // r11d
  __int64 v188; // r15
  __int64 v189; // rdx
  __m128i v190; // xmm0
  unsigned __int64 v191; // rax
  unsigned __int128 v192; // kr00_16
  unsigned __int64 v193; // kr20_8
  __int32 v194; // r8d
  __int32 v195; // r9d
  __int64 v196; // r10
  int v197; // eax
  _QWORD *v198; // rsi
  __int64 v199; // rdx
  __int64 v200; // rdx
  unsigned __int64 v201; // rcx
  __int64 v203; // rdi
  __int64 v204; // rbx
  const __m128i *v205; // r14
  const __m128i *v206; // r15
  __m128i v208; // xmm0
  __int64 v209; // rax
  __int64 v210; // rdx
  __m128i *v211; // rax
  __int64 v212; // rdi
  __int64 v213; // rdi
  __int64 v214; // rbx
  const __m128i *v215; // r14
  const __m128i *v216; // r15
  __m128i v218; // xmm0
  __int64 v219; // rax
  __int64 v220; // rdx
  unsigned __int64 v221; // rax
  __int64 v222; // rdi
  __int64 v223; // rsi
  _QWORD *v224; // rdi
  __int64 v225; // rdx
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rdx
  char v229; // cl
  __int64 v230; // rdx
  __int64 v231; // rdx
  __m128i v232; // xmm0
  _QWORD *v233; // rax
  unsigned __int64 v234; // rcx
  __m128i *v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rsi
  __int64 v239; // rdx
  _QWORD *v240; // r14
  __int64 v241; // rsi
  __int64 v242; // r14
  __int64 v243; // r15
  __int64 v244; // r8
  __m128i *v245; // rax
  _BYTE v246[272]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v247[4]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v248; // [rsp+190h] [rbp+110h]
  __int64 v249; // [rsp+1A0h] [rbp+120h]
  __m256i v250; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v251; // [rsp+280h] [rbp+200h]
  __int128 v252; // [rsp+290h] [rbp+210h]
  __m128i v253; // [rsp+2A0h] [rbp+220h]
  __m128i v254; // [rsp+2B0h] [rbp+230h]
  __int64 v255; // [rsp+2C0h] [rbp+240h]
  _BYTE v256[96]; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v257; // [rsp+330h] [rbp+2B0h]
  __int128 v258; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v259; // [rsp+3F0h] [rbp+370h]
  __int64 v260; // [rsp+3F8h] [rbp+378h]
  _OWORD v261[2]; // [rsp+400h] [rbp+380h] BYREF
  __int128 v262; // [rsp+420h] [rbp+3A0h] BYREF
  unsigned __int64 v263; // [rsp+430h] [rbp+3B0h]
  __int128 v264; // [rsp+438h] [rbp+3B8h]
  _BYTE v265[24]; // [rsp+448h] [rbp+3C8h]
  __int128 v266; // [rsp+460h] [rbp+3E0h]
  unsigned __int64 v267; // [rsp+470h] [rbp+3F0h]
  __int16 v268; // [rsp+478h] [rbp+3F8h]
  const __m128i *v269; // [rsp+488h] [rbp+408h]
  unsigned __int64 v270; // [rsp+490h] [rbp+410h]
  __int64 v271; // [rsp+498h] [rbp+418h]
  __int64 v272; // [rsp+4A0h] [rbp+420h]
  __int64 v273; // [rsp+4A8h] [rbp+428h]
  _DWORD v274[2]; // [rsp+4B0h] [rbp+430h]
  _DWORD v275[2]; // [rsp+4B8h] [rbp+438h]
  __m256i v276; // [rsp+4C0h] [rbp+440h] BYREF
  __m256i v277; // [rsp+4E0h] [rbp+460h]
  __int128 v278; // [rsp+500h] [rbp+480h]
  __int128 v279; // [rsp+510h] [rbp+490h]
  __m128i v280; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v281; // [rsp+530h] [rbp+4B0h] BYREF
  _BYTE v282[18]; // [rsp+540h] [rbp+4C0h]
  __int128 v283; // [rsp+552h] [rbp+4D2h]
  __int128 v284; // [rsp+562h] [rbp+4E2h]
  __int128 v285; // [rsp+572h] [rbp+4F2h]
  _BYTE v286[22]; // [rsp+582h] [rbp+502h]
  __int64 v287; // [rsp+598h] [rbp+518h]
  char v288; // [rsp+5A0h] [rbp+520h]
  _BYTE v289[7]; // [rsp+5A1h] [rbp+521h] BYREF
  __int128 v290; // [rsp+5A8h] [rbp+528h]
  __int64 v291; // [rsp+5B8h] [rbp+538h]
  char v292; // [rsp+5C0h] [rbp+540h]
  __int64 v293; // [rsp+5D0h] [rbp+550h]
  __int64 v294; // [rsp+5D8h] [rbp+558h]
  __int64 v295; // [rsp+5E0h] [rbp+560h]
  int v296; // [rsp+5ECh] [rbp+56Ch]
  __int64 *v297; // [rsp+5F0h] [rbp+570h]
  __int64 v298; // [rsp+5F8h] [rbp+578h]
  __int64 v299; // [rsp+600h] [rbp+580h]
  bool v300; // [rsp+60Fh] [rbp+58Fh]
  __int64 v301; // [rsp+610h] [rbp+590h]
  __int64 v302; // [rsp+618h] [rbp+598h]
  __int64 v303; // [rsp+620h] [rbp+5A0h]
  char v304; // [rsp+62Fh] [rbp+5AFh]
  __int64 v305; // [rsp+630h] [rbp+5B0h]
  __int64 v306; // [rsp+638h] [rbp+5B8h]

  v306 = -2;
  v293 = a3;
  v4 = a2;
  v297 = a1;
  v5 = (unsigned __int8 *)sub_1415475D0(a1, a2, a3, a4);
  v6 = v5[72];
  if ( v5[72] )
  {
    if ( (_DWORD)v6 != 1 )
      goto LABEL_3;
    v57 = v5;
    sub_1416CA860(v5, sub_140A21520);
    v5 = v57;
    v57[72] = 0;
  }
  v6 = (unsigned int)sub_141541630(v5[68], v5[69]);
LABEL_3:
  v269 = (const __m128i *)(v4 + 112);
  v300 = (_BYTE)v6 == 2;
  v7 = *(unsigned __int8 *)(v4 + 551);
  v305 = v4;
  v296 = v6;
  switch ( v7 )
  {
    case 0LL:
      *(_WORD *)(v4 + 549) = 0;
      v8 = *(_QWORD *)(v4 + 272);
      v9 = *(_QWORD *)(v4 + 280);
      *(_OWORD *)(v4 + 144) = *(_OWORD *)(v4 + 288);
      *(_BYTE *)(v4 + 548) = *(_BYTE *)(v4 + 552);
      *(__m128i *)(v4 + 304) = _mm_loadu_si128((const __m128i *)(v4 + 528));
      *(_QWORD *)&v256[32] = 0;
      *(_QWORD *)v256 = 0;
      *(_QWORD *)&v256[16] = 0;
      sub_141684A90(&v276, v256, v8, v9);
      if ( v276.m256i_i64[0] == -1 )
      {
        nullsub_1(v11, v10);
        v6 = 22;
        v54 = 1;
        v55 = sub_140001650(22, 1);
        v4 = v305;
        if ( !v55 )
          sub_14196B2DB(1, 22);
        *(__m128i *)v55 = _mm_loadu_si128(&xmmword_141A392D1);
        v302 = v55;
        *(_QWORD *)(v55 + 14) = 0x4C5255207473696CLL;
        v56 = 22;
LABEL_157:
        result = v297;
        *(_BYTE *)(v4 + 551) = 1;
        *result = v54;
        result[1] = v56;
        result[2] = v302;
        result[3] = v6;
        return result;
      }
      v12 = *(_OWORD *)&v276.m256i_u64[1];
      v13 = v276.m256i_i64[3];
      *(_QWORD *)&v256[48] = v279;
      *(_OWORD *)&v256[32] = v278;
      *(__m256i *)v256 = v277;
      v14 = v305;
      v15 = v305 + 320;
      *(_QWORD *)(v305 + 320) = v276.m256i_i64[0];
      *(_OWORD *)(v14 + 328) = v12;
      *(_QWORD *)(v14 + 344) = v13;
      v16 = *(_OWORD *)&v256[16];
      v17 = *(_OWORD *)&v256[32];
      *(__m128i *)(v14 + 352) = _mm_load_si128((const __m128i *)v256);
      *(_OWORD *)(v14 + 368) = v16;
      *(_OWORD *)(v14 + 384) = v17;
      *(_QWORD *)(v14 + 400) = *(_QWORD *)&v256[48];
      sub_1416DB410(v14 + 408, v15);
      v18 = v305;
      *(_BYTE *)(v305 + 488) = *(_BYTE *)(v305 + 400);
      *(_OWORD *)(v18 + 472) = *(_OWORD *)(v18 + 384);
      v19 = *(_WORD *)(v18 + 360);
      v20 = *(unsigned __int16 *)(v18 + 362);
      v21 = *(_DWORD *)(v18 + 380);
      v22 = *(_DWORD *)(v18 + 344);
      v23 = *(_DWORD *)(v18 + 348);
      v24 = *(_DWORD *)(v18 + 352);
      v25 = *(_DWORD *)(v18 + 356);
      *(__m128i *)(v18 + 452) = _mm_loadu_si128((const __m128i *)(v18 + 364));
      *(_WORD *)(v18 + 448) = v19;
      *(_WORD *)(v18 + 450) = v20;
      *(_DWORD *)(v18 + 468) = v21;
      *(_DWORD *)(v18 + 432) = v22;
      *(_DWORD *)(v18 + 436) = v23;
      *(_DWORD *)(v18 + 440) = v24;
      *(_DWORD *)(v18 + 444) = v25;
      *(_QWORD *)(v18 + 496) = 0;
      *(_QWORD *)(v18 + 504) = 8;
      *(_QWORD *)(v18 + 512) = 0;
      *(_BYTE *)(v18 + 549) = 1;
      v26 = sub_1416AE140(v20);
      v31 = v26;
      if ( *(_BYTE *)(v26 + 16) == 1 )
      {
        v32 = *(_QWORD *)v26;
        v33 = *(_QWORD *)(v31 + 8);
      }
      else
      {
        v32 = sub_1416C5230(v28, v27, v29, v30);
        *(_QWORD *)v31 = v32;
        *(_QWORD *)(v31 + 8) = v33;
        *(_BYTE *)(v31 + 16) = 1;
      }
      *(_QWORD *)v31 = v32 + 1;
      v34 = v305;
      *(_OWORD *)(v305 + 176) = xmmword_141A38A60;
      *(_OWORD *)(v34 + 160) = *(_OWORD *)&off_141A38A50;
      *(_QWORD *)(v34 + 192) = v32;
      *(_QWORD *)(v34 + 200) = v33;
      v35 = sub_1416AE140(v34);
      v40 = v35;
      if ( *(_BYTE *)(v35 + 16) == 1 )
      {
        v41 = *(_QWORD *)v35;
        v42 = *(_QWORD *)(v40 + 8);
      }
      else
      {
        v41 = sub_1416C5230(v37, v36, v38, v39);
        *(_QWORD *)v40 = v41;
        *(_QWORD *)(v40 + 8) = v42;
        *(_BYTE *)(v40 + 16) = 1;
      }
      *(_QWORD *)v40 = v41 + 1;
      v4 = v305;
      *(_OWORD *)(v305 + 224) = xmmword_141A38A60;
      *(_OWORD *)(v4 + 208) = *(_OWORD *)&off_141A38A50;
      *(_QWORD *)(v4 + 240) = v41;
      *(_QWORD *)(v4 + 248) = v42;
      *(_QWORD *)(v4 + 520) = 0x800000;
      *(_DWORD *)(v4 + 544) = 0;
      *(_QWORD *)(v4 + 256) = 0;
      *(_QWORD *)(v4 + 264) = 100;
      v43 = 0;
      break;
    case 1LL:
      sub_14196B990(&off_141A398B8);
    case 2LL:
      sub_14196B9B0(&off_141A398B8);
    case 3LL:
      v44 = v4 + 624;
      v45 = *(unsigned __int8 *)(v4 + 624);
      v303 = v4 + 560;
      switch ( v45 )
      {
        case 0LL:
          v46 = *(volatile signed __int64 ***)(v4 + 592);
          v47 = *(_QWORD *)(v4 + 600);
          v48 = *(_QWORD *)(v4 + 560);
          v49 = *(_QWORD *)(v4 + 568);
          v50 = *(_BYTE *)(v4 + 625);
          v51 = *(_QWORD *)(v4 + 608);
          v52 = *(_QWORD *)(v4 + 616);
          v53 = v4 + 560;
          goto LABEL_34;
        case 1LL:
          v273 = v303;
          sub_14196B990(&off_141A398A0);
        case 2LL:
          JUMPOUT(0x14076B838LL);
        case 3LL:
          v301 = v4 + 624;
          goto LABEL_49;
        case 4LL:
          v301 = v4 + 624;
          goto LABEL_231;
      }
    case 4LL:
      goto LABEL_27;
  }
LABEL_10:
  *(_QWORD *)(v4 + 256) = v43 + 1;
  while ( 2 )
  {
    v46 = *(volatile signed __int64 ***)(v4 + 304);
    v47 = v4 + 408;
    v48 = *(_QWORD *)(v4 + 144);
    v49 = *(_QWORD *)(v4 + 152);
    v50 = *(_BYTE *)(v4 + 548);
    v51 = *(_QWORD *)(v4 + 312);
    v52 = v4 + 520;
    v53 = v4 + 560;
    *(_QWORD *)(v4 + 560) = v48;
    *(_QWORD *)(v4 + 568) = v49;
    *(_QWORD *)(v4 + 592) = v46;
    *(_QWORD *)(v4 + 600) = v4 + 408;
    *(_QWORD *)(v4 + 608) = v51;
    *(_QWORD *)(v4 + 616) = v4 + 520;
    v44 = v4 + 624;
    *(_BYTE *)(v4 + 624) = 0;
    *(_BYTE *)(v4 + 625) = v50;
LABEL_34:
    v302 = v51;
    *(_QWORD *)(v4 + 576) = v47;
    *(_QWORD *)(v4 + 584) = v52;
    v301 = v44;
    v299 = v44;
    v298 = v53;
    sub_1416DB410(&v262, v47);
    v59 = v53;
    LOBYTE(v267) = *(_BYTE *)(v47 + 80);
    v266 = *(_OWORD *)(v47 + 64);
    v60 = *(_WORD *)(v47 + 40);
    v61 = *(_WORD *)(v47 + 42);
    v62 = *(_DWORD *)(v47 + 60);
    v63 = *(_DWORD *)(v47 + 24);
    v64 = *(_DWORD *)(v47 + 28);
    v65 = *(_DWORD *)(v47 + 32);
    v66 = *(_DWORD *)(v47 + 36);
    *(_OWORD *)&v265[4] = *(_OWORD *)(v47 + 44);
    *(_WORD *)v265 = v60;
    *(_WORD *)&v265[2] = v61;
    *(_DWORD *)&v265[20] = v62;
    *(_QWORD *)&v264 = __PAIR64__(v64, v63);
    *((_QWORD *)&v264 + 1) = __PAIR64__(v66, v65);
    v67 = *v46;
    v299 = v301;
    v298 = v53;
    sub_141296FC0(v247, &v262);
    v68 = __OFSUB__(*(_QWORD *)&v247[0], -1);
    if ( *(_QWORD *)&v247[0] == -1 )
    {
      v276.m256i_i64[1] = *((_QWORD *)&v247[0] + 1);
      v69 = v301;
      v276.m256i_i64[0] = 2;
      v70 = _InterlockedIncrement64(v67);
      if ( (v70 < 0) ^ v68 | (v70 == 0) )
LABEL_26:
        BUG();
    }
    else
    {
      memset(v289, 0, sizeof(v289));
      v279 = 0;
      *(_OWORD *)&v256[6] = v247[0];
      *(_OWORD *)&v256[22] = v247[1];
      *(_OWORD *)&v256[38] = v247[2];
      *(_OWORD *)&v256[54] = v247[3];
      *(_OWORD *)&v256[70] = v248;
      *(_QWORD *)&v256[86] = v249;
      v277.m256i_i64[1] = 0;
      *(_QWORD *)&v278 = 0;
      *((_QWORD *)&v278 + 1) = 8;
      v280 = (__m128i)8uLL;
      v281 = (__m128i)2uLL;
      *(_WORD *)v282 = 0;
      *(_QWORD *)&v286[14] = *((_QWORD *)&v248 + 1);
      v287 = v249;
      *(_OWORD *)v286 = *(_OWORD *)&v256[64];
      v285 = *(_OWORD *)&v256[48];
      v284 = *(_OWORD *)&v256[32];
      v283 = *(_OWORD *)&v256[16];
      *(_OWORD *)&v282[2] = *(_OWORD *)v256;
      v288 = 1;
      v290 = 0;
      v291 = 0;
      v292 = 2;
      v69 = v301;
      v276.m256i_i64[0] = 0;
      if ( _InterlockedIncrement64(v67) <= 0 )
        goto LABEL_26;
    }
    v299 = v69;
    v298 = v53;
    sub_14126F9C0(v246, v67, &v276);
    v299 = v301;
    v298 = v53;
    if ( v50 == 2 )
    {
      sub_14065F9F0((unsigned int)&v276, (unsigned int)v246, (unsigned int)aXApiKey, 9, v48, v49);
      v299 = v301;
      v298 = v53;
      sub_14065F9F0((unsigned int)v247, (unsigned int)&v276, (unsigned int)aAnthropicVersi, 17, (__int64)a20230601, 10);
    }
    else
    {
      sub_14065F180(v247, v246, v48, v49);
    }
    sub_1419234B0(&v276, v247, 272);
    v6 = v302;
    v72 = *(_QWORD *)(v302 + 80);
    v73 = 0x7FFFFFFFFFFFFFFELL;
    LOBYTE(v73) = v72 >> 62 != 0 || 4 * v72 > 0x7FFFFFFFFFFFFFFELL;
    v303 = v59;
    if ( (_BYTE)v73 )
    {
      v74 = 0;
LABEL_43:
      v304 = 1;
      sub_14196B2DB(v74, 4 * v72);
    }
    v75 = *(_WORD *)(v302 + 88);
    v76 = 2;
    if ( 4 * v72 )
    {
      v77 = *(_QWORD *)(v302 + 72);
      nullsub_1(v73, v71);
      v74 = 2;
      v78 = sub_140001650(4 * v72, 2);
      if ( !v78 )
        goto LABEL_43;
      v76 = v78;
      if ( v72 )
        sub_1419234B0(v78, v77, 4 * v72);
    }
    v271 = v76;
    v270 = v72;
    v260 = 4 * v72;
    sub_14022BA60(&v258, v6 + 24);
    sub_14022B8C0(v256, v6 + 48);
    v268 = v75;
    *((_QWORD *)&v266 + 1) = v271;
    v267 = v270;
    v264 = v258;
    *(_QWORD *)v265 = v259;
    *(_QWORD *)&v266 = *(_QWORD *)&v256[16];
    *(_OWORD *)&v265[8] = *(_OWORD *)v256;
    v262 = *(_OWORD *)v6;
    v263 = *(_QWORD *)(v6 + 16);
    v304 = 0;
    sub_14126FD80(v256, &v276, &v262);
    v299 = v301;
    v298 = v303;
    v79 = sub_14126FCB0(v256);
    v4 = v305;
    *(_QWORD *)(v305 + 632) = v79;
    *(_QWORD *)(v4 + 640) = v80;
    LOBYTE(v6) = v296;
LABEL_49:
    v81 = v4 + 632;
    sub_141298A20(&v276, v4 + 632, v293);
    v82 = v276.m256i_i64[0];
    if ( v276.m256i_i64[0] == -2 )
    {
      v104 = 3;
      v103 = v305;
LABEL_255:
      *(_BYTE *)v301 = v104;
      v102 = 3;
      goto LABEL_228;
    }
    v302 = v276.m256i_i64[1];
    v6 = v276.m256i_u64[3];
    v83 = v276.m256i_i64[2];
    v250 = v277;
    v251 = v278;
    v252 = v279;
    v253 = v280;
    v254 = _mm_loadu_si128(&v281);
    v255 = *(_QWORD *)v282;
    v84 = *(_QWORD *)(v305 + 632);
    v85 = *(_QWORD *)(v305 + 640);
    v299 = v301;
    v86 = (__m128i *)v303;
    v298 = v303;
    sub_1406C1D00(v84, v85);
    if ( (_DWORD)v82 == -1 )
    {
      v95 = -1;
      v100 = -1;
      v101 = v305;
      goto LABEL_69;
    }
    v87 = v305;
    *(_QWORD *)(v305 + 632) = v82;
    *(_QWORD *)(v87 + 640) = v302;
    *(_QWORD *)(v87 + 648) = v83;
    *(_QWORD *)(v87 + 656) = v6;
    *(__m128i *)(v87 + 728) = v253;
    *(_QWORD *)(v87 + 760) = v255;
    *(__m128i *)(v87 + 744) = v254;
    si128 = _mm_load_si128((const __m128i *)&v250);
    v89 = *(_OWORD *)&v250.m256i_u64[2];
    v90 = v251;
    *(_OWORD *)(v87 + 712) = v252;
    *(_OWORD *)(v87 + 696) = v90;
    *(_OWORD *)(v87 + 680) = v89;
    *(__m128i *)(v87 + 664) = si128;
    v91 = *(_DWORD *)(v87 + 736);
    if ( (unsigned __int16)(v91 - 200) > 0x63u )
    {
      v92 = *(_QWORD *)(v87 + 576);
      v93 = *(_QWORD *)(v92 + 8);
      v94 = *(_QWORD *)(v92 + 16);
      LOWORD(v258) = v91;
      v295 = v301;
      v294 = (__int64)v86;
      sub_1409922F0(v256, v93, v94);
      v276.m256i_i64[0] = (__int64)&v258;
      v276.m256i_i64[1] = (__int64)sub_1416EA1B0;
      v276.m256i_i64[2] = (__int64)v256;
      v276.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_1416DAFA0(&v262, &unk_141A02BA5, &v276);
      if ( *(_QWORD *)v256 )
        sub_140001660(*(_QWORD *)&v256[8], *(_QWORD *)v256, 1);
      v302 = *((_QWORD *)&v262 + 1);
      v6 = v263;
      v4 = v305;
      if ( (_QWORD)v262 != -1 )
      {
        v95 = v262;
        goto LABEL_65;
      }
    }
    v295 = v301;
    v294 = v303;
    v96 = sub_141255DB0(v81);
    v4 = v305;
    if ( v96 == 1 && v97 > **(_QWORD **)(v305 + 584) )
    {
      nullsub_1(v98, v97);
      v95 = 45;
      v99 = (__m128i *)sub_140001650(45, 1);
      if ( !v99 )
      {
        v295 = v301;
        v294 = v303;
        sub_14196B2DB(1, 45);
      }
      qmemcpy(&v99[1], "response exceeded 8 MiB total", 29);
      v302 = (__int64)v99;
      *v99 = _mm_loadu_si128((const __m128i *)&xmmword_141A39281);
      v6 = 45;
      goto LABEL_65;
    }
    *(_QWORD *)(v305 + 768) = 0;
    *(_QWORD *)(v4 + 776) = 1;
    *(_QWORD *)(v4 + 784) = 0;
    while ( 1 )
    {
      *(_QWORD *)(v4 + 792) = v4 + 632;
      *(_BYTE *)(v4 + 816) = 0;
LABEL_231:
      sub_1406D50C0(&v276, v4 + 792, v293);
      if ( v276.m256i_i64[0] == 2 )
      {
        v104 = 4;
        v103 = v305;
        LOBYTE(v6) = v296;
        goto LABEL_255;
      }
      v4 = v305;
      if ( (v276.m256i_i8[0] & 1) != 0 )
      {
        v302 = v276.m256i_i64[1];
        v95 = -1;
        v231 = *(_QWORD *)(v305 + 768);
        if ( v231 )
          goto LABEL_239;
        goto LABEL_65;
      }
      if ( !v276.m256i_i64[1] )
        break;
      v232 = _mm_loadu_si128((const __m128i *)&v276.m256i_u64[3]);
      v6 = v276.m256i_u64[3];
      *(_OWORD *)v276.m256i_i8 = *(_OWORD *)&v276.m256i_u64[1];
      *(__m128i *)&v276.m256i_u64[2] = v232;
      v233 = *(_QWORD **)(v305 + 584);
      v234 = *v233 - v6;
      if ( *v233 < v6 )
      {
        nullsub_1(v234, v230);
        v235 = (__m128i *)sub_140001650(45, 1);
        if ( !v235 )
          sub_14196B2DB(1, 45);
        qmemcpy(&v235[1], "response exceeded 8 MiB total", 29);
        v302 = (__int64)v235;
        *v235 = _mm_loadu_si128((const __m128i *)&xmmword_141A39281);
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v276.m256i_i64[0] + 32))(
          &v276.m256i_u64[3],
          v276.m256i_i64[1],
          v276.m256i_i64[2]);
        v95 = 45;
        v6 = 45;
        v4 = v305;
        v231 = *(_QWORD *)(v305 + 768);
        if ( v231 )
LABEL_239:
          sub_140001660(*(_QWORD *)(v4 + 776), v231, 1);
LABEL_65:
        sub_14068B4D0(v4 + 632);
        v101 = v305;
        v105 = *(_QWORD **)(v305 + 760);
        if ( *v105 )
          sub_140001660(v105[1], *v105, 1);
        sub_140001660(v105, 88, 8);
        v100 = -1;
        goto LABEL_68;
      }
      *v233 = v234;
      v242 = v276.m256i_i64[2];
      v241 = v276.m256i_i64[1];
      v243 = *(_QWORD *)(v4 + 784);
      if ( v276.m256i_i64[2] > (unsigned __int64)(*(_QWORD *)(v4 + 768) - v243) )
      {
        sub_141939070(v4 + 768, v243, v276.m256i_i32[4], 1, 1);
        v4 = v305;
        v243 = *(_QWORD *)(v305 + 784);
      }
      else
      {
        v244 = 0;
        if ( !v276.m256i_i64[2] )
          goto LABEL_249;
      }
      sub_1419234B0(v243 + *(_QWORD *)(v4 + 776), v241, v242);
      v244 = v276.m256i_i64[2];
      v241 = v276.m256i_i64[1];
LABEL_249:
      *(_QWORD *)(v4 + 784) = v242 + v243;
      (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v276.m256i_i64[0] + 32))(
        &v276.m256i_u64[3],
        v241,
        v244);
      v4 = v305;
    }
    *(__m128i *)v276.m256i_i8 = _mm_loadu_si128((const __m128i *)(v305 + 776));
    *(_OWORD *)&v276.m256i_u64[2] = 0;
    vendor_json_parse_str_with_trailing_check(v256, (__int128 *)v276.m256i_i8);
    v100 = v256[0];
    if ( v256[0] == 0xFF )
    {
      v276.m256i_i64[0] = *(_QWORD *)&v256[8];
      nullsub_1(v237, v236);
      v245 = (__m128i *)sub_140001650(35, 1);
      if ( !v245 )
        sub_14196B2DB(1, 35);
      qmemcpy(&v245[1], "model list response", 19);
      *v245 = _mm_loadu_si128((const __m128i *)&xmmword_141A392AE);
      v302 = (__int64)v245;
      sub_140032F30(&v276);
      v95 = 35;
      v6 = 35;
      v238 = v305;
      v239 = *(_QWORD *)(v305 + 768);
      if ( v239 )
LABEL_242:
        sub_140001660(*(_QWORD *)(v238 + 776), v239, 1);
    }
    else
    {
      *(_DWORD *)((char *)v274 + 3) = *(_DWORD *)&v256[4];
      v274[0] = *(_DWORD *)&v256[1];
      v95 = *(_QWORD *)&v256[8];
      v6 = *(_QWORD *)&v256[24];
      v302 = *(_QWORD *)&v256[16];
      v238 = v305;
      v239 = *(_QWORD *)(v305 + 768);
      if ( v239 )
        goto LABEL_242;
    }
    sub_14068B4D0(v238 + 632);
    v101 = v305;
    v240 = *(_QWORD **)(v305 + 760);
    if ( *v240 )
      sub_140001660(v240[1], *v240, 1);
    sub_140001660(v240, 88, 8);
LABEL_68:
    v86 = (__m128i *)v303;
LABEL_69:
    v275[0] = v274[0];
    *(_DWORD *)((char *)v275 + 3) = *(_DWORD *)((char *)v274 + 3);
    *(_BYTE *)(v101 + 624) = 1;
    *(_BYTE *)(v101 + 550) = 1;
    *(_BYTE *)(v101 + 112) = v100;
    v106 = *(_DWORD *)((char *)v275 + 3);
    *(_DWORD *)(v101 + 113) = v275[0];
    *(_DWORD *)(v101 + 116) = v106;
    *(_QWORD *)(v101 + 120) = v95;
    *(_QWORD *)(v101 + 128) = v302;
    *(_QWORD *)(v101 + 136) = v6;
    if ( v100 != -1 )
    {
      v107 = _mm_loadu_si128(v269);
      v261[1] = v269[1];
      v261[0] = v107;
      *(_BYTE *)(v101 + 550) = 0;
      sub_14017F1E0(&v276, v261);
      v56 = v276.m256i_i64[1];
      v6 = v276.m256i_u64[3];
      v108 = v276.m256i_i64[2];
      v302 = v276.m256i_i64[2];
      if ( v276.m256i_i8[0] )
      {
        v303 = 1;
        goto LABEL_125;
      }
      v301 = v276.m256i_i64[1];
      *(_QWORD *)v256 = v276.m256i_i64[1];
      *(_OWORD *)&v256[8] = *(_OWORD *)&v276.m256i_u64[2];
      v109 = v276.m256i_i64[2] + 24 * v276.m256i_i64[3];
      v110 = v305 + 160;
      v111 = v305 + 496;
      while ( v108 != v109 )
      {
        sub_1416DB410(&v276, v108);
        if ( (unsigned __int8)sub_140871180(v110, &v276) )
        {
          v108 += 24;
          if ( *(_QWORD *)(v305 + 512) >= 0x2711u )
            goto LABEL_78;
        }
        else
        {
          sub_1416DB410(&v276, v108);
          v114 = *(_QWORD *)(v305 + 512);
          if ( v114 == *(_QWORD *)(v305 + 496) )
            sub_141939F90(v111);
          v115 = v305;
          v116 = *(_QWORD *)(v305 + 504);
          v113 = 3 * v114;
          v112 = v276.m256i_i64[2];
          *(_QWORD *)(v116 + 8 * v113 + 16) = v276.m256i_i64[2];
          *(__m128i *)(v116 + 8 * v113) = _mm_loadu_si128((const __m128i *)&v276);
          v117 = v114 + 1;
          *(_QWORD *)(v115 + 512) = v117;
          v108 += 24;
          if ( v117 >= 0x2711 )
          {
LABEL_78:
            nullsub_1(v113, v112);
            v56 = 46;
            v303 = 1;
            v118 = (__m128i *)sub_140001650(46, 1);
            if ( !v118 )
              sub_14196B2DB(1, 46);
            v119 = (__int64)v118;
            qmemcpy(&v118[1], "exceeded the model count limit", 30);
            *v118 = _mm_loadu_si128((const __m128i *)&xmmword_141A399C1);
            v120 = 46;
            goto LABEL_117;
          }
        }
      }
      v130 = (_BYTE *)sub_1416724D0(aHasMore, 8, v261);
      v131 = (_QWORD *)v305;
      if ( v130 )
      {
        if ( *v130 != 1 )
        {
          sub_1403F7CF0(&v276, aInvalidModelLi, 38);
          goto LABEL_213;
        }
        if ( v130[1] )
        {
          if ( *(_BYTE *)(v305 + 548) == 2 )
          {
            v303 = v305 + 320;
            *(_QWORD *)&v132 = sub_141687D70();
            if ( !(_QWORD)v132 )
              v132 = 0u;
            if ( !(_QWORD)v132 )
              *(_QWORD *)&v132 = 1;
            v247[0] = v132;
            while ( 1 )
            {
              sub_1416A2E10(&v276, v247);
              v133 = v276.m256i_i64[0];
              if ( v276.m256i_i64[0] == -2 )
              {
                v139 = sub_1416724D0(aLastId, 7, v261);
                if ( v139
                  && *(_BYTE *)v139 == 3
                  && (v142 = *(_QWORD *)(v139 + 24)) != 0
                  && v6
                  && *(_QWORD *)(v109 - 8) == v142
                  && (v143 = *(_QWORD *)(v139 + 16),
                      !(unsigned int)sub_141923B40(*(_QWORD *)(v109 - 16), v143, *(_QWORD *)(v139 + 24))) )
                {
                  if ( v142 < 0 )
                  {
                    v144 = 0;
                    goto LABEL_114;
                  }
                  nullsub_1(v141, v140);
                  v144 = 1;
                  v179 = sub_140001650(v142, 1);
                  if ( !v179 )
                  {
                    v272 = v142;
LABEL_114:
                    sub_14196B2DB(v144, v272);
                  }
                  v180 = v179;
                  sub_1419234B0(v179, v143, v142);
                  v276.m256i_i64[0] = v142;
                  v272 = v180;
                  v276.m256i_i64[1] = v180;
                  v276.m256i_i64[2] = v142;
                  if ( !(unsigned __int8)sub_140871180(v305 + 208, &v276) )
                  {
                    sub_1416DB410(&v276, v303);
                    LOBYTE(v279) = *(_BYTE *)(v305 + 400);
                    v278 = *(_OWORD *)(v305 + 384);
                    v181 = *(_WORD *)(v305 + 360);
                    v182 = *(_WORD *)(v305 + 362);
                    v183 = *(_DWORD *)(v305 + 380);
                    v184 = *(_DWORD *)(v305 + 344);
                    v185 = *(_DWORD *)(v305 + 348);
                    v186 = *(_DWORD *)(v305 + 352);
                    v187 = *(_DWORD *)(v305 + 356);
                    *(_OWORD *)((char *)&v277.m256i_u64[1] + 4) = *(_OWORD *)(v305 + 364);
                    v277.m256i_i16[4] = v181;
                    v277.m256i_i16[5] = v182;
                    v277.m256i_i32[7] = v183;
                    v276.m256i_i64[3] = __PAIR64__(v185, v184);
                    v277.m256i_i64[0] = __PAIR64__(v187, v186);
                    v188 = v305 + 408;
                    v189 = *(_QWORD *)(v305 + 408);
                    if ( v189 )
                      sub_140001660(*(_QWORD *)(v305 + 416), v189, 1);
                    *(_QWORD *)(v188 + 80) = v279;
                    *(_OWORD *)(v188 + 64) = v278;
                    v190 = _mm_loadu_si128((const __m128i *)&v276);
                    v192 = *(_OWORD *)&v276.m256i_u64[2];
                    v193 = v192 >> 64;
                    v191 = v192;
                    v194 = v277.m256i_i32[0];
                    v195 = v277.m256i_i32[1];
                    v196 = v277.m256i_i64[1];
                    *(_OWORD *)(v188 + 48) = *(_OWORD *)&v277.m256i_u64[2];
                    *(_DWORD *)(v188 + 32) = v194;
                    *(_DWORD *)(v188 + 36) = v195;
                    *(_QWORD *)(v188 + 40) = v196;
                    *(_OWORD *)(v188 + 16) = __PAIR128__(v193, v191);
                    *(__m128i *)v188 = v190;
                    sub_141686B20(&v276, v188);
                    if ( v276.m256i_i64[0] == -2 )
                      sub_14196B590(aUrlFormUrlenco, 41, &off_141A57398);
                    v197 = sub_141689210(&v276);
                    sub_1416A2040(
                      v197,
                      v277.m256i_i32[0],
                      v277.m256i_i32[2],
                      v277.m256i_i32[4],
                      (__int64)aAfterId,
                      8,
                      v143,
                      v142);
                    if ( v276.m256i_i64[0] != -2 )
                    {
                      sub_141689260(&v276);
                      if ( v276.m256i_i64[0] != -1 )
                      {
                        if ( v276.m256i_i64[0] )
                          sub_140001660(v276.m256i_i64[1], v276.m256i_i64[0], 1);
                      }
                    }
                    v198 = (_QWORD *)(v302 + 8);
                    do
                    {
                      v199 = *(v198 - 1);
                      if ( v199 )
                        sub_140001660(*v198, v199, 1);
                      v198 += 3;
                      --v6;
                    }
                    while ( v6 );
                    if ( v301 )
                      sub_140001660(v302, 24 * v301, 8);
                    sub_1406C0ED0(v261);
                    v4 = v305;
                    v43 = *(_QWORD *)(v305 + 256);
                    v201 = *(_QWORD *)(v305 + 264);
                    if ( v43 >= v201 )
                    {
                      nullsub_1(v201, v200);
                      _RAX = sub_140001650(39, 1);
                      if ( !_RAX )
                        sub_14196B2DB(1, 39);
                      qmemcpy((void *)(_RAX + 16), "exceeded the page limit", 23);
                      *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A39904);
                      v203 = *(_QWORD *)(v4 + 216);
                      v302 = _RAX;
                      if ( v203 )
                      {
                        v204 = *(_QWORD *)(v4 + 232);
                        if ( v204 )
                        {
                          v205 = *(const __m128i **)(v4 + 208);
                          v206 = v205 + 1;
                          _ESI = ~_mm_movemask_epi8(_mm_load_si128(v205));
                          do
                          {
                            if ( !(_WORD)_ESI )
                            {
                              do
                              {
                                v208 = _mm_load_si128(v206);
                                v205 -= 24;
                                ++v206;
                                _ESI = _mm_movemask_epi8(v208) ^ 0xFFFF;
                              }
                              while ( !_ESI );
                            }
                            __asm { tzcnt   eax, esi }
                            v209 = -3 * _RAX;
                            v210 = *((_QWORD *)&v205[-1] + v209 - 1);
                            if ( v210 )
                              sub_140001660(v205[-1].m128i_i64[v209], v210, 1);
                            --v204;
                            _RAX = _ESI & (unsigned int)(_ESI - 1);
                            _ESI &= _ESI - 1;
                          }
                          while ( v204 );
                        }
                        _RAX = (24 * v203 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                        v212 = _RAX + v203 + 17;
                        if ( v212 )
                          sub_140001660(*(_QWORD *)(v4 + 208) - _RAX, v212, 16);
                      }
                      v213 = *(_QWORD *)(v4 + 168);
                      if ( v213 )
                      {
                        v214 = *(_QWORD *)(v4 + 184);
                        if ( v214 )
                        {
                          v215 = *(const __m128i **)(v4 + 160);
                          v216 = v215 + 1;
                          _ESI = ~_mm_movemask_epi8(_mm_load_si128(v215));
                          do
                          {
                            if ( !(_WORD)_ESI )
                            {
                              do
                              {
                                v218 = _mm_load_si128(v216);
                                v215 -= 24;
                                ++v216;
                                _ESI = _mm_movemask_epi8(v218) ^ 0xFFFF;
                              }
                              while ( !_ESI );
                            }
                            __asm { tzcnt   eax, esi }
                            v219 = -3 * _RAX;
                            v220 = *((_QWORD *)&v215[-1] + v219 - 1);
                            if ( v220 )
                              sub_140001660(v215[-1].m128i_i64[v219], v220, 1);
                            --v214;
                            _RAX = _ESI & (unsigned int)(_ESI - 1);
                            _ESI &= _ESI - 1;
                          }
                          while ( v214 );
                        }
                        v221 = (24 * v213 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                        v222 = v221 + v213 + 17;
                        if ( v222 )
                          sub_140001660(*(_QWORD *)(v4 + 160) - v221, v222, 16);
                      }
                      v223 = *(_QWORD *)(v4 + 512);
                      if ( v223 )
                      {
                        v224 = (_QWORD *)(*(_QWORD *)(v4 + 504) + 8LL);
                        do
                        {
                          v225 = *(v224 - 1);
                          if ( v225 )
                            sub_140001660(*v224, v225, 1);
                          v224 += 3;
                          --v223;
                        }
                        while ( v223 );
                      }
                      v226 = *(_QWORD *)(v4 + 496);
                      if ( v226 )
                        sub_140001660(*(_QWORD *)(v4 + 504), 24 * v226, 8);
                      *(_BYTE *)(v4 + 549) = 0;
                      v227 = *(_QWORD *)(v4 + 408);
                      if ( v227 )
                        sub_140001660(*(_QWORD *)(v4 + 416), v227, 1);
                      v228 = *(_QWORD *)(v4 + 320);
                      v6 = 39;
                      v54 = 1;
                      if ( v228 )
                        sub_140001660(*(_QWORD *)(v4 + 328), v228, 1);
                      v56 = 39;
                      goto LABEL_157;
                    }
                    goto LABEL_10;
                  }
                  sub_1403F7CF0(&v276, aModelListPagin, 37);
                  v119 = v276.m256i_i64[1];
                  v56 = v276.m256i_i64[0];
                  v120 = v276.m256i_i64[2];
                  v303 = 1;
LABEL_118:
                  v146 = (_QWORD *)(v302 + 8);
                  do
                  {
                    v147 = *(v146 - 1);
                    if ( v147 )
                      sub_140001660(*v146, v147, 1);
                    v146 += 3;
                    --v6;
                  }
                  while ( v6 );
                }
                else
                {
                  nullsub_1(v141, v140);
                  v56 = 55;
                  v303 = 1;
                  v211 = (__m128i *)sub_140001650(55, 1);
                  if ( !v211 )
                    sub_14196B2DB(1, 55);
                  v119 = (__int64)v211;
                  qmemcpy(&v211[1], "ation cursor is missing or inconsistent", 39);
                  *v211 = _mm_loadu_si128((const __m128i *)&xmmword_141A392E7);
                  v120 = 55;
LABEL_117:
                  if ( v6 )
                    goto LABEL_118;
                }
                if ( v301 )
                  sub_140001660(v302, 24 * v301, 8);
                v302 = v119;
                v6 = v120;
LABEL_125:
                sub_1406C0ED0(v261);
                v4 = v305;
                v148 = *(_QWORD *)(v305 + 216);
                if ( !v148 )
                  goto LABEL_135;
                goto LABEL_126;
              }
              v134 = v276.m256i_i64[1];
              if ( v276.m256i_i64[2] == 9 )
              {
                v135 = (*(_QWORD *)v276.m256i_i64[1] ^ 0x695F65726F666562LL
                      | *(unsigned __int8 *)(v276.m256i_i64[1] + 8) ^ 0x64LL) == 0;
              }
              else
              {
                if ( v276.m256i_i64[2] != 8 )
                {
                  v136 = 0;
                  v137 = v276.m256i_i64[3];
                  v138 = v277.m256i_i64[0];
                  if ( v276.m256i_i64[0] <= 0 )
                    goto LABEL_102;
LABEL_101:
                  sub_140001660(v276.m256i_i64[1], v276.m256i_i64[0], 1);
                  goto LABEL_102;
                }
                v135 = *(_QWORD *)v276.m256i_i64[1] == 0x64695F7265746661LL;
              }
              v136 = v135;
              v137 = v276.m256i_i64[3];
              v138 = v277.m256i_i64[0];
              if ( v276.m256i_i64[0] > 0 )
                goto LABEL_101;
LABEL_102:
              if ( (unsigned __int64)(v137 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v138, v137, 1);
              if ( v136 )
              {
                nullsub_1(v134, v133);
                v56 = 61;
                v303 = 1;
                v145 = (__m128i *)sub_140001650(61, 1);
                if ( !v145 )
                  sub_14196B2DB(1, 61);
                v119 = (__int64)v145;
                qmemcpy(&v145[1], "ation conflicts with the configured URL query", 45);
                *v145 = _mm_loadu_si128((const __m128i *)&xmmword_141A3992B);
                v120 = 61;
                goto LABEL_117;
              }
            }
          }
          sub_1403F7CF0(&v276, aUpstreamReturn, 51);
LABEL_213:
          v119 = v276.m256i_i64[1];
          v56 = v276.m256i_i64[0];
          v120 = v276.m256i_i64[2];
          v303 = 1;
          goto LABEL_117;
        }
      }
      *(_BYTE *)(v305 + 549) = 0;
      v56 = v131[62];
      v119 = v131[63];
      v120 = v131[64];
      v303 = 0;
      goto LABEL_117;
    }
    if ( *(_DWORD *)(v101 + 544) > 1u || v95 != -1 )
      goto LABEL_216;
    v121 = sub_1412467D0(v101 + 128);
    LOBYTE(v6) = v296;
    if ( !v121 && !(unsigned __int8)sub_141246860(v101 + 128) )
    {
      v95 = *(_QWORD *)(v101 + 120);
      v302 = *(_QWORD *)(v101 + 128);
      v6 = *(_QWORD *)(v101 + 136);
LABEL_216:
      *(_BYTE *)(v101 + 550) = 0;
      if ( v95 == -1 )
      {
        *(_QWORD *)&v247[0] = sub_1412469C0(v302);
        *(_QWORD *)v256 = v247;
        *(_QWORD *)&v256[8] = sub_141246C00;
        sub_1416DAFA0(&v276, &unk_141A02439, v256);
        v101 = v305;
        sub_140032480(v247);
        v302 = v276.m256i_i64[1];
        v56 = v276.m256i_i64[0];
        v6 = v276.m256i_u64[2];
      }
      else
      {
        v56 = v95;
      }
      *(_BYTE *)(v101 + 550) = 0;
      v303 = 1;
      v4 = v305;
      v148 = *(_QWORD *)(v305 + 216);
      if ( !v148 )
      {
LABEL_135:
        v160 = *(_QWORD *)(v4 + 168);
        if ( v160 )
        {
          v161 = *(_QWORD *)(v4 + 184);
          if ( v161 )
          {
            HIDWORD(_RAX) = HIDWORD(v305);
            v163 = *(const __m128i **)(v305 + 160);
            v164 = v163 + 1;
            _ESI = ~_mm_movemask_epi8(_mm_load_si128(v163));
            do
            {
              if ( !(_WORD)_ESI )
              {
                do
                {
                  v166 = _mm_load_si128(v164);
                  v163 -= 24;
                  ++v164;
                  _ESI = _mm_movemask_epi8(v166) ^ 0xFFFF;
                }
                while ( !_ESI );
              }
              __asm { tzcnt   eax, esi }
              v167 = -3 * _RAX;
              v168 = *((_QWORD *)&v163[-1] + v167 - 1);
              if ( v168 )
                sub_140001660(v163[-1].m128i_i64[v167], v168, 1);
              --v161;
              _RAX = _ESI & (unsigned int)(_ESI - 1);
              _ESI &= _ESI - 1;
            }
            while ( v161 );
          }
          v169 = (24 * v160 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v170 = v169 + v160;
          v135 = v170 == -17;
          v171 = v170 + 17;
          v4 = v305;
          if ( !v135 )
            sub_140001660(*(_QWORD *)(v305 + 160) - v169, v171, 16);
        }
        if ( *(_BYTE *)(v4 + 549) )
        {
          v172 = *(_QWORD *)(v4 + 512);
          if ( v172 )
          {
            v173 = (_QWORD *)(*(_QWORD *)(v4 + 504) + 8LL);
            do
            {
              v174 = *(v173 - 1);
              if ( v174 )
                sub_140001660(*v173, v174, 1);
              v173 += 3;
              --v172;
            }
            while ( v172 );
          }
          v175 = *(_QWORD *)(v4 + 496);
          if ( v175 )
            sub_140001660(*(_QWORD *)(v4 + 504), 24 * v175, 8);
        }
        *(_BYTE *)(v4 + 549) = 0;
        v176 = *(_QWORD *)(v4 + 408);
        if ( v176 )
          sub_140001660(*(_QWORD *)(v4 + 416), v176, 1);
        v177 = *(_QWORD *)(v4 + 320);
        v54 = v303;
        if ( v177 )
          sub_140001660(*(_QWORD *)(v4 + 328), v177, 1);
        goto LABEL_157;
      }
LABEL_126:
      v149 = *(_QWORD *)(v4 + 232);
      if ( v149 )
      {
        HIDWORD(_RAX) = HIDWORD(v305);
        v151 = *(const __m128i **)(v305 + 208);
        v152 = v151 + 1;
        _ESI = ~_mm_movemask_epi8(_mm_load_si128(v151));
        do
        {
          if ( !(_WORD)_ESI )
          {
            do
            {
              v154 = _mm_load_si128(v152);
              v151 -= 24;
              ++v152;
              _ESI = _mm_movemask_epi8(v154) ^ 0xFFFF;
            }
            while ( !_ESI );
          }
          __asm { tzcnt   eax, esi }
          v155 = -3 * _RAX;
          v156 = *((_QWORD *)&v151[-1] + v155 - 1);
          if ( v156 )
            sub_140001660(v151[-1].m128i_i64[v155], v156, 1);
          --v149;
          _RAX = _ESI & (unsigned int)(_ESI - 1);
          _ESI &= _ESI - 1;
        }
        while ( v149 );
      }
      v157 = (24 * v148 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v158 = v157 + v148;
      v135 = v158 == -17;
      v159 = v158 + 17;
      v4 = v305;
      if ( !v135 )
        sub_140001660(*(_QWORD *)(v305 + 208) - v157, v159, 16);
      goto LABEL_135;
    }
    *(_BYTE *)(v101 + 550) = 0;
    v86[1].m128i_i64[0] = *(_QWORD *)(v101 + 136);
    *v86 = _mm_loadu_si128((const __m128i *)(v101 + 120));
    v122 = (unsigned int)(*(_DWORD *)(v101 + 544) + 1);
    *(_DWORD *)(v101 + 544) = v122;
    v123 = (0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)(150 * v122)) >> 64;
    sub_141549640(&v276, v123, (unsigned int)(1000000 * (150 * v122 - 1000 * v123)), &off_141A399F0);
    v257 = _mm_loadu_si128(&v280);
    v124 = v279;
    *(_OWORD *)&v256[80] = v279;
    v125 = v278;
    *(_OWORD *)&v256[64] = v278;
    v126 = *(_OWORD *)v276.m256i_i8;
    v127 = *(_OWORD *)&v276.m256i_u64[2];
    v128 = *(_OWORD *)v277.m256i_i8;
    v129 = *(_OWORD *)&v277.m256i_u64[2];
    *(__m256i *)&v256[32] = v277;
    *(__m256i *)v256 = v276;
    v4 = v305;
    *(__m128i *)(v305 + 680) = v257;
    *(_OWORD *)(v4 + 664) = v124;
    *(_OWORD *)(v4 + 648) = v125;
    *(_OWORD *)(v4 + 632) = v129;
    *(_OWORD *)(v4 + 616) = v128;
    *(_OWORD *)(v4 + 600) = v127;
    *(_OWORD *)(v4 + 584) = v126;
LABEL_27:
    v302 = v4 + 584;
    if ( !(unsigned __int8)sub_1415498B0(v4 + 584, v293) )
    {
      sub_140291A70(v302);
      v4 = v305;
      v58 = *(_QWORD *)(v305 + 560);
      if ( v58 == -1 )
      {
        sub_14028DCE0(*(_QWORD *)(v305 + 568));
      }
      else if ( v58 )
      {
        sub_140001660(*(_QWORD *)(v305 + 568), v58, 1);
      }
      *(_BYTE *)(v4 + 550) = 0;
      continue;
    }
    break;
  }
  v102 = 4;
  v103 = v305;
LABEL_228:
  v229 = v6 | v300;
  *(_BYTE *)(v103 + 551) = v102;
  if ( (unsigned __int8)sub_14152B3E0(v229 & 1, v103, v293) )
  {
    result = v297;
    *v297 = -1;
  }
  else
  {
    result = v297;
    *v297 = 2;
  }
  return result;
}
