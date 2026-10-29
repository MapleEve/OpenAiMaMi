// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140db56e0 | successor of pre-update 0x140bc2c60 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_140DB56E0(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        char *a11)
{
  __int64 v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // r14
  __m128i si128; // xmm1
  __int128 v18; // kr00_16
  __int128 v19; // kr10_16
  __int128 v20; // kr20_16
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  char v28; // al
  __int128 *v29; // r12
  int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r12
  __int128 *v34; // rsi
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edx
  char v40; // r15
  __int64 v41; // rax
  _BYTE *v42; // rbx
  unsigned int v43; // edx
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm1
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  char *v53; // r15
  __int64 v54; // rdi
  _QWORD *v55; // rbx
  __int64 v56; // rdx
  _BYTE *v57; // rdx
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // r15
  __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rbx
  unsigned __int64 v70; // rax
  unsigned int v71; // edx
  char v72; // r12
  __m128i v73; // xmm1
  __int32 v74; // edi
  __int8 v75; // bl
  unsigned __int64 v76; // rax
  unsigned int v77; // edx
  bool v78; // cl
  bool v79; // dl
  unsigned int v80; // edx
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  _QWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // r15
  __int64 v88; // rdi
  _QWORD *v89; // rbx
  bool v90; // cl
  bool v91; // dl
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __int64 v94; // rcx
  unsigned int v95; // edx
  char v96; // al
  char v97; // di
  __m128i v98; // xmm0
  __m128i v99; // xmm1
  __m128i *v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r13
  __int64 v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rax
  __m128i *v108; // rdi
  __int64 v109; // r13
  __m128i v110; // xmm1
  __int64 v111; // rdi
  __int64 v112; // r15
  __int64 v113; // r12
  _QWORD *v114; // r13
  __int64 v115; // rdx
  __m128i v116; // xmm1
  char *v117; // r15
  __int64 v118; // r12
  _QWORD *v119; // r13
  __int64 v120; // rdx
  __m128i v121; // xmm1
  __m128i v122; // xmm0
  __m128i v123; // xmm1
  __m128i v124; // xmm0
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __int64 v127; // rax
  __m128i v128; // xmm0
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  __m128i v131; // xmm1
  __int128 v132; // xmm2
  char v133; // al
  __m128i v134; // xmm1
  __int64 v135; // rax
  unsigned int v136; // edx
  __int128 v137; // xmm1
  __int128 v138; // xmm2
  char v139; // al
  __m128i v140; // xmm0
  __m128i v141; // xmm0
  __m128i v142; // xmm1
  __m128i v143; // xmm1
  __m128i v144; // xmm2
  char v145; // al
  __int64 v146; // rsi
  __m128i v147; // xmm1
  __int128 v148; // xmm2
  char v149; // al
  __m128i v150; // xmm1
  __int128 v151; // xmm2
  char v152; // al
  __int64 v153; // rsi
  __m128i v154; // xmm1
  __m128i v155; // xmm2
  char v156; // al
  __int64 v157; // rsi
  __int64 v158; // rdi
  _QWORD *v159; // rbx
  __int64 v160; // rdx
  __m128i v161; // kr80_16
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rsi
  int v166; // edx
  __m128i v167; // xmm0
  __m128i v168; // xmm1
  _QWORD *v169; // rsi
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rsi
  __int128 v174; // xmm1
  __m128i v175; // xmm2
  char v176; // al
  __m128i v177; // xmm1
  __int128 v178; // xmm2
  char v179; // cl
  __m128i v180; // xmm0
  __m128i v181; // xmm1
  __m128i v182; // krA0_16
  __m128i v183; // xmm0
  __m128i v184; // xmm1
  unsigned __int128 v185; // krC0_16
  __int64 v186; // r14
  __int64 v187; // rdi
  char v188; // r15
  __m128i v189; // xmm1
  __m128i v190; // xmm2
  char v191; // al
  unsigned __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // rdi
  __m128i v196; // xmm0
  __m128i v197; // xmm1
  __int64 v198; // rax
  unsigned int v199; // edx
  __int64 (__fastcall *v200)(unsigned __int64); // rax
  __int64 v201; // xmm0_8
  __int64 v202; // rcx
  __int64 v203; // rdx
  __int64 v204; // r14
  __int64 v205; // rbx
  __int64 v206; // rax
  __int64 v207; // rcx
  __m128i v208; // xmm0
  __m128i v209; // xmm1
  __m128i *v210; // r12
  __int64 v211; // rax
  unsigned int v212; // edx
  unsigned __int128 v213; // kr130_16
  __int64 v215; // [rsp+20h] [rbp-60h]
  __int64 v216; // [rsp+20h] [rbp-60h]
  __int64 v217; // [rsp+20h] [rbp-60h]
  __int64 v218; // [rsp+20h] [rbp-60h]
  __int64 v219; // [rsp+20h] [rbp-60h]
  __int64 v220; // [rsp+20h] [rbp-60h]
  __int64 v221; // [rsp+20h] [rbp-60h]
  __int64 v222; // [rsp+20h] [rbp-60h]
  __int64 v223; // [rsp+20h] [rbp-60h]
  __m128i v224; // [rsp+28h] [rbp-58h]
  __m128i v225; // [rsp+38h] [rbp-48h]
  _BYTE v226[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v227[24]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v228[24]; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v229[24]; // [rsp+98h] [rbp+18h] BYREF
  _BYTE v230[24]; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v231[24]; // [rsp+C8h] [rbp+48h] BYREF
  __m128i v232; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v233; // [rsp+F0h] [rbp+70h]
  __int128 v234; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v235; // [rsp+108h] [rbp+88h]
  __int64 v236; // [rsp+110h] [rbp+90h] BYREF
  __m128i v237; // [rsp+118h] [rbp+98h]
  __int64 v238; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v239; // [rsp+130h] [rbp+B0h]
  __int64 v240; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v241; // [rsp+148h] [rbp+C8h]
  __int64 v242; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v243; // [rsp+160h] [rbp+E0h]
  __m128i v244; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v245; // [rsp+180h] [rbp+100h] BYREF
  int v246; // [rsp+188h] [rbp+108h]
  __int64 v247; // [rsp+190h] [rbp+110h] BYREF
  int v248; // [rsp+198h] [rbp+118h]
  __int64 v249; // [rsp+1A0h] [rbp+120h]
  _QWORD *v250; // [rsp+1A8h] [rbp+128h]
  __int64 v251; // [rsp+1B0h] [rbp+130h]
  __int64 v252; // [rsp+1B8h] [rbp+138h]
  unsigned __int8 *v253; // [rsp+1C0h] [rbp+140h]
  unsigned __int8 *v254; // [rsp+1C8h] [rbp+148h]
  _BYTE *v255; // [rsp+1D0h] [rbp+150h]
  __int64 v256; // [rsp+1D8h] [rbp+158h]
  __int64 v257; // [rsp+1E0h] [rbp+160h]
  __int128 v258; // [rsp+1E8h] [rbp+168h]
  __int128 v259; // [rsp+1F8h] [rbp+178h]
  __int128 v260; // [rsp+208h] [rbp+188h]
  __int64 v261; // [rsp+218h] [rbp+198h]
  _BYTE v262[104]; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v263; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v264; // [rsp+2B8h] [rbp+238h]
  __int64 v265; // [rsp+2C0h] [rbp+240h]
  __int64 v266; // [rsp+2C8h] [rbp+248h]
  __m256i v267; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v268; // [rsp+2F0h] [rbp+270h]
  __m128i v269; // [rsp+300h] [rbp+280h]
  __m128i v270; // [rsp+310h] [rbp+290h]
  __m128i v271; // [rsp+320h] [rbp+2A0h]
  _BYTE v272[21]; // [rsp+330h] [rbp+2B0h] BYREF
  unsigned __int64 v273; // [rsp+348h] [rbp+2C8h]
  _BYTE v274[21]; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v275; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v276; // [rsp+378h] [rbp+2F8h]
  __m128i v277; // [rsp+380h] [rbp+300h] BYREF
  _QWORD v278[2]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v279; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v280; // [rsp+3A8h] [rbp+328h]
  __int64 v281; // [rsp+3B0h] [rbp+330h]
  int v282; // [rsp+3BCh] [rbp+33Ch]
  _BYTE v283[104]; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v284; // [rsp+448h] [rbp+3C8h]
  __int64 v285; // [rsp+450h] [rbp+3D0h]
  __int64 v286; // [rsp+458h] [rbp+3D8h]
  __m128i v287; // [rsp+460h] [rbp+3E0h]
  __m128i v288; // [rsp+470h] [rbp+3F0h]
  __m128i v289; // [rsp+480h] [rbp+400h]
  __m128i v290; // [rsp+490h] [rbp+410h]
  __m128i v291; // [rsp+4A0h] [rbp+420h]
  __m128i v292; // [rsp+4B0h] [rbp+430h]
  char v293; // [rsp+52Ch] [rbp+4ACh]
  char v294; // [rsp+53Eh] [rbp+4BEh]
  _BYTE v295[24]; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v296; // [rsp+558h] [rbp+4D8h]
  char **v297; // [rsp+560h] [rbp+4E0h]
  __int64 v298; // [rsp+568h] [rbp+4E8h]
  __int32 v299; // [rsp+570h] [rbp+4F0h] BYREF
  __int8 v300; // [rsp+574h] [rbp+4F4h] BYREF
  __int64 v301; // [rsp+578h] [rbp+4F8h]
  _BYTE *v302; // [rsp+580h] [rbp+500h] BYREF
  char *v303; // [rsp+588h] [rbp+508h]
  __int64 v304; // [rsp+590h] [rbp+510h]
  _QWORD *v305; // [rsp+598h] [rbp+518h]
  __m128i v306; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v307; // [rsp+5B0h] [rbp+530h] BYREF
  __m128i v308; // [rsp+5C0h] [rbp+540h]
  __m128i v309; // [rsp+5D0h] [rbp+550h] BYREF
  __m128i v310; // [rsp+5E0h] [rbp+560h]
  __m128i v311; // [rsp+5F0h] [rbp+570h]
  _BYTE v312[96]; // [rsp+600h] [rbp+580h] BYREF
  __m128i v313; // [rsp+660h] [rbp+5E0h]
  __m128i v314; // [rsp+670h] [rbp+5F0h]
  __int64 v315; // [rsp+680h] [rbp+600h]
  __int64 v316; // [rsp+688h] [rbp+608h] BYREF
  __int64 v317; // [rsp+690h] [rbp+610h]
  __int64 v318; // [rsp+698h] [rbp+618h]
  __int64 v319; // [rsp+6A0h] [rbp+620h]
  __int64 v320; // [rsp+6A8h] [rbp+628h]
  __m256i v321; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v322; // [rsp+6D0h] [rbp+650h]
  __m128i v323; // [rsp+6E0h] [rbp+660h]
  __m128i v324; // [rsp+6F0h] [rbp+670h]
  __m128i v325; // [rsp+700h] [rbp+680h]
  __m128i v326; // [rsp+710h] [rbp+690h]
  __m128i v327; // [rsp+720h] [rbp+6A0h]
  __int64 v328; // [rsp+730h] [rbp+6B0h]
  unsigned int v329; // [rsp+73Ch] [rbp+6BCh]
  __m128i v330; // [rsp+740h] [rbp+6C0h] BYREF
  _BYTE v331[80]; // [rsp+750h] [rbp+6D0h] BYREF
  __m128i v332; // [rsp+7A0h] [rbp+720h]
  _BYTE v333[104]; // [rsp+7B0h] [rbp+730h] BYREF
  __m128i v334; // [rsp+818h] [rbp+798h]
  __m128i v335; // [rsp+828h] [rbp+7A8h] BYREF
  unsigned __int128 v336; // [rsp+838h] [rbp+7B8h] BYREF
  __int64 v337; // [rsp+848h] [rbp+7C8h]
  _BYTE v338[4]; // [rsp+854h] [rbp+7D4h] BYREF
  __int128 *v339; // [rsp+858h] [rbp+7D8h]
  char v340; // [rsp+861h] [rbp+7E1h]
  _BYTE v341[2]; // [rsp+862h] [rbp+7E2h] BYREF
  char v342; // [rsp+864h] [rbp+7E4h]
  char v343; // [rsp+865h] [rbp+7E5h]
  char v344; // [rsp+866h] [rbp+7E6h]
  char v345; // [rsp+867h] [rbp+7E7h]
  unsigned __int64 v346; // [rsp+868h] [rbp+7E8h]
  char v347; // [rsp+870h] [rbp+7F0h]
  char v348; // [rsp+871h] [rbp+7F1h]
  char v349; // [rsp+872h] [rbp+7F2h]
  char v350; // [rsp+873h] [rbp+7F3h] BYREF
  char v351; // [rsp+874h] [rbp+7F4h] BYREF
  char v352; // [rsp+875h] [rbp+7F5h]
  char v353; // [rsp+876h] [rbp+7F6h]
  unsigned __int8 v354; // [rsp+877h] [rbp+7F7h] BYREF
  __int64 v355; // [rsp+878h] [rbp+7F8h]

  v355 = -2;
  v354 = a3;
  v341[0] = 0;
  v330.m128i_i64[0] = (__int64)aDiagnosticRepa_1;
  v330.m128i_i64[1] = 17;
  sub_1407D5CC0(v283);
  v14 = *(_QWORD *)&v283[32];
  v15 = _mm_loadu_si128((const __m128i *)&v283[24]);
  v16 = *(_QWORD *)&v283[40];
  *(_OWORD *)v312 = *(_OWORD *)&v283[48];
  *(__m128i *)&v312[16] = _mm_loadu_si128((const __m128i *)&v283[64]);
  if ( *(_QWORD *)v283 != -1 )
  {
    *(_OWORD *)&v333[80] = *(_OWORD *)&v283[80];
    *(_QWORD *)&v333[16] = *(_QWORD *)&v283[16];
    *(__m128i *)&v333[24] = v15;
    *(_QWORD *)&v333[40] = *(_QWORD *)&v283[40];
    si128 = _mm_load_si128((const __m128i *)&v312[16]);
    *(__m128i *)&v333[48] = _mm_load_si128((const __m128i *)v312);
    *(__m128i *)&v333[64] = si128;
    *(_OWORD *)v333 = *(_OWORD *)v283;
LABEL_3:
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v333[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v333[64];
    v18 = *(_OWORD *)v333;
    v19 = *(_OWORD *)&v333[16];
    v20 = *(_OWORD *)&v333[32];
    v21 = _mm_load_si128((const __m128i *)&v333[48]);
    *(__m128i *)(a1 + 56) = v21;
    *(_OWORD *)(a1 + 40) = v20;
    *(_OWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
LABEL_4:
    *(_WORD *)(a1 + 104) = 0;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v283[8] != -1 )
  {
    if ( *(_QWORD *)&v283[8] )
      sub_140001660(*(_QWORD *)&v283[16], *(_QWORD *)&v283[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v16, v14, 1);
  }
  sub_1407E52E0((__int64)v283, (__int64)a2);
  if ( *(_DWORD *)v283 == -1 )
  {
    sub_1408D1F30(v333, a2);
    if ( *(_QWORD *)v333 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v333[80] = *(_OWORD *)&v283[80];
    *(_OWORD *)&v333[64] = *(_OWORD *)&v283[64];
    v22 = _mm_loadu_si128((const __m128i *)v283);
    v23 = _mm_loadu_si128((const __m128i *)&v283[16]);
    *(_OWORD *)&v333[48] = *(_OWORD *)&v283[48];
    *(_OWORD *)&v333[32] = *(_OWORD *)&v283[32];
    *(__m128i *)&v333[16] = v23;
    *(__m128i *)v333 = v22;
    if ( v22.m128i_i64[0] != -1 )
      goto LABEL_3;
  }
  sub_141597890(&v244);
  *(_QWORD *)v283 = v341;
  *(_QWORD *)&v283[8] = sub_140EDAE50;
  *(_QWORD *)&v283[16] = &v330;
  *(_QWORD *)&v283[24] = sub_140191200;
  sub_1416DAFA0(&v242, &unk_141A9B638, v283);
  v262[0] = v354;
  v346 = v243;
  *(_OWORD *)v312 = v243;
  *(_QWORD *)v283 = v262;
  *(_QWORD *)&v283[8] = sub_140ED78B0;
  *(_QWORD *)&v283[16] = v312;
  *(_QWORD *)&v283[24] = sub_140191200;
  sub_1416DAFA0(v333, &unk_141A9B450, v283);
  sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_2, 5, (__int64)v333);
  if ( v242 )
    sub_140001660(v346, v242, 1);
  if ( !v341[0] )
  {
    sub_14080DD30(v262, a4, a5);
    if ( *(_DWORD *)v262 != -1 )
    {
      *(_OWORD *)&v312[80] = *(_OWORD *)&v262[80];
      *(_OWORD *)&v312[64] = *(_OWORD *)&v262[64];
      v122 = _mm_loadu_si128((const __m128i *)v262);
      v123 = _mm_loadu_si128((const __m128i *)&v262[16]);
      *(_OWORD *)&v312[48] = *(_OWORD *)&v262[48];
      *(_OWORD *)&v312[32] = *(_OWORD *)&v262[32];
      *(__m128i *)&v312[16] = v123;
      *(__m128i *)v312 = v122;
      *(_QWORD *)v333 = 0;
      *(_QWORD *)&v333[8] = 1;
      *(_QWORD *)&v333[16] = 0;
      *(_QWORD *)&v283[16] = 1610612768;
      *(_QWORD *)v283 = v333;
      *(_QWORD *)&v283[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v312, v283) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v350,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v346 = *(_QWORD *)v333;
      v124 = _mm_loadu_si128(&v330);
      v339 = *(__int128 **)&v333[8];
      sub_1407D2B10(
        (__int64)v283,
        (__int64 (__fastcall *)())a2,
        v354,
        (__int64)aFailed_2,
        6,
        v124.m128i_i64[0],
        v124.m128i_i64[1],
        *(__int64 *)&v333[8],
        *(__int64 *)&v333[16],
        0);
      if ( *(_QWORD *)v283 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v283[8]);
      }
      else
      {
        *(_QWORD *)&v333[88] = *(_QWORD *)&v283[88];
        *(_OWORD *)&v333[72] = *(_OWORD *)&v283[72];
        v125 = _mm_loadu_si128((const __m128i *)&v283[8]);
        v126 = _mm_loadu_si128((const __m128i *)&v283[24]);
        *(_OWORD *)&v333[56] = *(_OWORD *)&v283[56];
        *(_OWORD *)&v333[40] = *(_OWORD *)&v283[40];
        *(__m128i *)&v333[24] = v126;
        *(__m128i *)&v333[8] = v125;
        *(_QWORD *)v333 = *(_QWORD *)v283;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v321.m256i_i64[0] = (__int64)v333;
          v321.m256i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v283 = aCodexmateLibCo_49;
          *(_QWORD *)&v283[8] = 45;
          *(_QWORD *)&v283[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v283[24] = 45;
          *(_QWORD *)&v283[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v321, 2, v283);
        }
        sub_140D8A3A0(v333);
      }
      if ( v346 )
        sub_140001660(v339, v346, 1);
      *(_QWORD *)v283 = &v330;
      *(_QWORD *)&v283[8] = sub_140191200;
      *(_QWORD *)&v283[16] = v312;
      *(_QWORD *)&v283[24] = sub_140D76130;
      sub_1416DAFA0(&v240, &unk_141A9B651, v283);
      v331[0] = v354;
      v346 = v241;
      *(_OWORD *)v321.m256i_i8 = v241;
      *(_QWORD *)v283 = v331;
      *(_QWORD *)&v283[8] = sub_140ED78B0;
      *(_QWORD *)&v283[16] = &v321;
      *(_QWORD *)&v283[24] = sub_140191200;
      sub_1416DAFA0(v333, &unk_141A9B450, v283);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v333);
      if ( v240 )
        sub_140001660(v346, v240, 1);
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v312[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v312[64];
      v21 = _mm_load_si128((const __m128i *)v312);
      v150 = _mm_load_si128((const __m128i *)&v312[16]);
      v151 = *(_OWORD *)&v312[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v312[48];
      *(_OWORD *)(a1 + 40) = v151;
      *(__m128i *)(a1 + 24) = v150;
      *(__m128i *)(a1 + 8) = v21;
      goto LABEL_4;
    }
  }
  v249 = 2LL * ((a6 & 1) == 0) + 3;
  v250 = *(_QWORD **)a8;
  v305 = *(_QWORD **)(a8 + 8);
  v266 = *(_QWORD *)(a8 + 16);
  v254 = *(unsigned __int8 **)(a8 + 24);
  v255 = *(_BYTE **)(a8 + 32);
  v24 = *(_QWORD *)(a8 + 40);
  v256 = v24;
  v257 = *(_QWORD *)(a8 + 48);
  v251 = *a9;
  v25 = a9[1];
  v252 = v25;
  v253 = (unsigned __int8 *)a9[2];
  v26 = _mm_cvtsi32_si128(0x6E6F6974u);
  v27 = _mm_load_si128((const __m128i *)&xmmword_141A57250);
  v329 = -1;
  v28 = 1;
  v29 = (__int128 *)v283;
  v339 = a2;
  v320 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)v28 > 3u )
      {
LABEL_183:
        nullsub_1(v25, v24);
        v127 = sub_140001650(109, 1);
        if ( !v127 )
          sub_14196B2DB(1, 109);
        *(_OWORD *)(v127 + 93) = *(__int128 *)((char *)&xmmword_141A9B6B4 + 13);
        *(_OWORD *)(v127 + 80) = xmmword_141A9B6B4;
        *(_OWORD *)(v127 + 64) = xmmword_141A9B6A4;
        *(_OWORD *)(v127 + 48) = xmmword_141A9B694;
        *(_OWORD *)(v127 + 32) = xmmword_141A9B684;
        *(_OWORD *)(v127 + 16) = xmmword_141A9B674;
        *(__m128i *)v127 = _mm_loadu_si128((const __m128i *)&xmmword_141A9B664);
        *(_QWORD *)&v312[8] = 109;
        *(_QWORD *)&v312[16] = v127;
        *(_QWORD *)&v312[24] = 109;
        *(_QWORD *)v312 = 10;
        *(_QWORD *)v333 = 0;
        *(_QWORD *)&v333[8] = 1;
        *(_QWORD *)&v333[16] = 0;
        *(_QWORD *)&v283[16] = 1610612768;
        *(_QWORD *)v283 = v333;
        *(_QWORD *)&v283[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(v312, v283) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v346 = *(_QWORD *)v333;
        v128 = _mm_loadu_si128(&v330);
        v339 = *(__int128 **)&v333[8];
        sub_1407D7360(
          (__int128 *)v333,
          a2,
          v354,
          (int)aFailed_2,
          6,
          v128.m128i_i64[0],
          v128.m128i_i64[1],
          *(__int64 *)&v333[8],
          *(__int64 *)&v333[16]);
        if ( *(_DWORD *)v333 != -1 )
        {
          *(_OWORD *)&v283[80] = *(_OWORD *)&v333[80];
          *(_OWORD *)&v283[64] = *(_OWORD *)&v333[64];
          v129 = _mm_loadu_si128((const __m128i *)v333);
          v130 = _mm_loadu_si128((const __m128i *)&v333[16]);
          *(_OWORD *)&v283[48] = *(_OWORD *)&v333[48];
          *(_OWORD *)&v283[32] = *(_OWORD *)&v333[32];
          *(__m128i *)&v283[16] = v130;
          *(__m128i *)v283 = v129;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v321.m256i_i64[0] = (__int64)v283;
            v321.m256i_i64[1] = (__int64)sub_140D76130;
            *(_QWORD *)v262 = aCodexmateLibCo_49;
            *(_QWORD *)&v262[8] = 45;
            *(_QWORD *)&v262[16] = aCodexmateLibCo_49;
            *(_QWORD *)&v262[24] = 45;
            *(_QWORD *)&v262[32] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v321, 2, v262);
          }
          sub_140D8A3A0(v283);
        }
        if ( v346 )
          sub_140001660(v339, v346, 1);
        *(_QWORD *)v333 = 0;
        *(_QWORD *)&v333[8] = 1;
        *(_QWORD *)&v333[16] = 0;
        *(_QWORD *)&v283[16] = 1610612768;
        *(_QWORD *)v283 = v333;
        *(_QWORD *)&v283[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(v312, v283) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        *(_QWORD *)&v262[16] = *(_QWORD *)&v333[16];
        *(__m128i *)v262 = _mm_loadu_si128((const __m128i *)v333);
        sub_140DB20C0(v354, aRetryExhausted, 15, v262, v215);
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v312[80];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v312[64];
        v21 = _mm_loadu_si128((const __m128i *)v312);
        v131 = _mm_loadu_si128((const __m128i *)&v312[16]);
        v132 = *(_OWORD *)&v312[32];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v312[48];
        *(_OWORD *)(a1 + 40) = v132;
        *(__m128i *)(a1 + 24) = v131;
        *(__m128i *)(a1 + 8) = v21;
        *(_WORD *)(a1 + 104) = 772;
        goto LABEL_5;
      }
      LOBYTE(v24) = v28 == 3;
      v319 = v24;
      v30 = (unsigned __int8)(v28 + 1);
      if ( v28 == 3 )
        v30 = 3;
      v282 = v30;
      v351 = v28;
      v31 = v330.m128i_i64[0];
      v32 = (__int64)v29;
      v33 = v330.m128i_i64[1];
      v34 = (__int128 *)v32;
      sub_1407D2B10(
        v32,
        (__int64 (__fastcall *)())a2,
        v354,
        (__int64)aStoppingCodex,
        14,
        v330.m128i_i64[0],
        v330.m128i_i64[1],
        v330.m128i_i64[0],
        v330.m128i_i64[1],
        0);
      if ( *(_QWORD *)v283 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v283[8]);
      }
      else
      {
        *(_QWORD *)&v333[88] = *(_QWORD *)&v283[88];
        *(_OWORD *)&v333[72] = *(_OWORD *)&v283[72];
        v35 = _mm_loadu_si128((const __m128i *)&v283[8]);
        v36 = _mm_loadu_si128((const __m128i *)&v283[24]);
        *(_OWORD *)&v333[56] = *(_OWORD *)&v283[56];
        *(_OWORD *)&v333[40] = *(_OWORD *)&v283[40];
        *(__m128i *)&v333[24] = v36;
        *(__m128i *)&v333[8] = v35;
        *(_QWORD *)v333 = *(_QWORD *)v283;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v312 = v333;
          *(_QWORD *)&v312[8] = sub_140D76130;
          *(_QWORD *)&v283[48] = 2;
          *(_QWORD *)&v283[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v283[64] = 45;
          *(_QWORD *)&v283[80] = &unk_141AA1920;
          *(_QWORD *)&v283[88] = v312;
          *(_QWORD *)v283 = 0;
          *(_QWORD *)&v283[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v283[16] = 0x2Du;
          *(_QWORD *)&v283[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v283[40] = 35;
          *(_QWORD *)&v283[72] = 0x22E00000001LL;
          sub_141503E20(&v350, v34);
        }
        sub_140D8A3A0(v333);
      }
      v247 = sub_1416AEBD0(v38, v37);
      v248 = v39;
      sub_140933FA0((_DWORD)v34, v249, 0, a6, a7);
      *(_DWORD *)&v333[3] = *(_DWORD *)&v283[12];
      *(_DWORD *)v333 = *(_DWORD *)&v283[9];
      *(_DWORD *)&v262[3] = *(_DWORD *)&v283[20];
      *(_DWORD *)v262 = *(_DWORD *)&v283[17];
      *(__int32 *)((char *)v321.m256i_i32 + 3) = *(_DWORD *)&v283[28];
      v321.m256i_i32[0] = *(_DWORD *)&v283[25];
      *(_DWORD *)v331 = *(_DWORD *)&v283[33];
      *(_DWORD *)&v331[3] = *(_DWORD *)&v283[36];
      *(__int32 *)((char *)v306.m128i_i32 + 3) = *(_DWORD *)&v283[44];
      v306.m128i_i32[0] = *(_DWORD *)&v283[41];
      *(__int32 *)((char *)v267.m256i_i32 + 3) = *(_DWORD *)&v283[52];
      v267.m256i_i32[0] = *(_DWORD *)&v283[49];
      v40 = v283[56];
      *(_DWORD *)((char *)&v258 + 3) = *(_DWORD *)&v283[60];
      LODWORD(v258) = *(_DWORD *)&v283[57];
      if ( *(_QWORD *)v283 != -1 )
      {
        LODWORD(v278[0]) = *(_DWORD *)&v283[65];
        *(_DWORD *)((char *)v278 + 3) = *(_DWORD *)&v283[68];
        *(_QWORD *)&v312[88] = *(_QWORD *)&v283[88];
        *(_OWORD *)&v312[72] = *(_OWORD *)&v283[72];
        *(_DWORD *)&v312[9] = *(_DWORD *)v333;
        *(_DWORD *)&v312[12] = *(_DWORD *)&v333[3];
        *(_DWORD *)v295 = *(_DWORD *)v262;
        *(_DWORD *)&v295[3] = *(_DWORD *)&v262[3];
        *(_DWORD *)((char *)&v302 + 3) = *(__int32 *)((char *)v321.m256i_i32 + 3);
        LODWORD(v302) = v321.m256i_i32[0];
        *(__int32 *)((char *)v275.m128i_i32 + 3) = *(_DWORD *)&v331[3];
        v275.m128i_i32[0] = *(_DWORD *)v331;
        *(_DWORD *)&v274[3] = *(__int32 *)((char *)v306.m128i_i32 + 3);
        *(_DWORD *)v274 = v306.m128i_i32[0];
        *(_DWORD *)&v272[3] = *(__int32 *)((char *)v267.m256i_i32 + 3);
        *(_DWORD *)v272 = v267.m256i_i32[0];
        *(_DWORD *)((char *)&v279 + 3) = *(_DWORD *)((char *)&v258 + 3);
        LODWORD(v279) = v258;
        *(_QWORD *)v312 = *(_QWORD *)v283;
        v312[8] = v283[8];
        v312[16] = v283[16];
        *(_DWORD *)&v312[20] = *(_DWORD *)&v262[3];
        *(_DWORD *)&v312[17] = *(_DWORD *)v295;
        v312[24] = v283[24];
        *(_DWORD *)&v312[28] = *(_DWORD *)((char *)&v302 + 3);
        *(_DWORD *)&v312[25] = v321.m256i_i32[0];
        v312[32] = v283[32];
        *(_DWORD *)&v312[36] = *(__int32 *)((char *)v275.m128i_i32 + 3);
        *(_DWORD *)&v312[33] = *(_DWORD *)v331;
        v312[40] = v283[40];
        *(_DWORD *)&v312[44] = *(_DWORD *)&v274[3];
        *(_DWORD *)&v312[41] = v306.m128i_i32[0];
        v312[48] = v283[48];
        *(_DWORD *)&v312[52] = *(_DWORD *)&v272[3];
        *(_DWORD *)&v312[49] = v267.m256i_i32[0];
        v312[56] = v283[56];
        *(_DWORD *)&v312[60] = *(_DWORD *)((char *)&v279 + 3);
        *(_DWORD *)&v312[57] = v258;
        v312[64] = v283[64];
        *(_DWORD *)&v312[68] = *(_DWORD *)&v283[68];
        *(_DWORD *)&v312[65] = v278[0];
        *(_QWORD *)v333 = 0;
        *(_QWORD *)&v333[8] = 1;
        *(_QWORD *)&v333[16] = 0;
        *(_QWORD *)&v283[16] = 1610612768;
        *(_QWORD *)v283 = v333;
        *(_QWORD *)&v283[8] = &off_141AA1A90;
        v133 = sub_140D76130(v312, v283);
        a1 = v320;
        if ( v133 )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v319 = *(_QWORD *)&v333[8];
        v346 = *(_QWORD *)v333;
        sub_1407D7360(
          (__int128 *)v333,
          v339,
          v354,
          (int)aFailed_2,
          6,
          v330.m128i_i64[0],
          v330.m128i_i64[1],
          *(__int64 *)&v333[8],
          *(__int64 *)&v333[16]);
        if ( *(_DWORD *)v333 != -1 )
        {
          *(_OWORD *)&v283[80] = *(_OWORD *)&v333[80];
          *(_OWORD *)&v283[64] = *(_OWORD *)&v333[64];
          v134 = _mm_loadu_si128((const __m128i *)&v333[16]);
          *(_OWORD *)&v283[48] = *(_OWORD *)&v333[48];
          *(_OWORD *)&v283[32] = *(_OWORD *)&v333[32];
          *(__m128i *)&v283[16] = v134;
          *(_OWORD *)v283 = *(_OWORD *)v333;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v321.m256i_i64[0] = (__int64)v283;
            v321.m256i_i64[1] = (__int64)sub_140D76130;
            *(_QWORD *)v262 = aCodexmateLibCo_49;
            *(_QWORD *)&v262[8] = 45;
            *(_QWORD *)&v262[16] = aCodexmateLibCo_49;
            *(_QWORD *)&v262[24] = 45;
            *(_QWORD *)&v262[32] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v321, 2, v262);
          }
          sub_140D8A3A0(v283);
        }
        if ( v346 )
          sub_140001660(v319, v346, 1);
        v135 = sub_1416AED20(&v247);
        *(_OWORD *)v333 = 0x3E8 * (unsigned __int128)(unsigned __int64)v135 + v136 / 0xF4240uLL;
        *(_QWORD *)v283 = &v351;
        *(_QWORD *)&v283[8] = sub_1416E8600;
        *(_QWORD *)&v283[16] = v333;
        *(_QWORD *)&v283[24] = sub_1416E85A0;
        *(_QWORD *)&v283[32] = v312;
        *(_QWORD *)&v283[40] = sub_140D76130;
        sub_1416DAFA0(v231, &unk_141A9B96F, v283);
        sub_140DB20C0(v354, aStopFailed, 11, v231, v216);
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v312[80];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v312[64];
        v21 = *(__m128i *)v312;
        v137 = *(_OWORD *)&v312[16];
        v138 = *(_OWORD *)&v312[32];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v312[48];
        *(_OWORD *)(a1 + 40) = v138;
        *(_OWORD *)(a1 + 24) = v137;
        *(__m128i *)(a1 + 8) = v21;
        v139 = v351;
        *(_BYTE *)(a1 + 104) = 1;
        *(_BYTE *)(a1 + 105) = v139;
LABEL_5:
        *(_QWORD *)a1 = -1;
        return *(double *)v21.m128i_i64;
      }
      *(_DWORD *)v295 = *(_DWORD *)v333;
      *(_DWORD *)&v295[3] = *(_DWORD *)&v333[3];
      LODWORD(v302) = *(_DWORD *)v262;
      *(_DWORD *)((char *)&v302 + 3) = *(_DWORD *)&v262[3];
      v275.m128i_i32[0] = v321.m256i_i32[0];
      *(__int32 *)((char *)v275.m128i_i32 + 3) = *(__int32 *)((char *)v321.m256i_i32 + 3);
      *(_DWORD *)v274 = *(_DWORD *)v331;
      *(_DWORD *)&v274[3] = *(_DWORD *)&v331[3];
      *(_DWORD *)&v272[3] = *(__int32 *)((char *)v306.m128i_i32 + 3);
      *(_DWORD *)v272 = v306.m128i_i32[0];
      *(_DWORD *)((char *)&v279 + 3) = *(__int32 *)((char *)v267.m256i_i32 + 3);
      LODWORD(v279) = v267.m256i_i32[0];
      LODWORD(v278[0]) = v258;
      *(_DWORD *)((char *)v278 + 3) = *(_DWORD *)((char *)&v258 + 3);
      DWORD1(v258) = *(_DWORD *)&v333[3];
      *(_DWORD *)((char *)&v258 + 1) = *(_DWORD *)v295;
      HIDWORD(v258) = *(_DWORD *)&v262[3];
      *(_DWORD *)((char *)&v258 + 9) = (_DWORD)v302;
      DWORD1(v259) = *(__int32 *)((char *)v321.m256i_i32 + 3);
      *(_DWORD *)((char *)&v259 + 1) = v275.m128i_i32[0];
      HIDWORD(v259) = *(_DWORD *)&v331[3];
      *(_DWORD *)((char *)&v259 + 9) = *(_DWORD *)v274;
      DWORD1(v260) = *(_DWORD *)&v272[3];
      *(_DWORD *)((char *)&v260 + 1) = v306.m128i_i32[0];
      HIDWORD(v260) = *(_DWORD *)((char *)&v279 + 3);
      *(_DWORD *)((char *)&v260 + 9) = v267.m256i_i32[0];
      HIDWORD(v261) = *(_DWORD *)((char *)v278 + 3);
      *(_DWORD *)((char *)&v261 + 1) = v278[0];
      v338[0] = v283[56];
      LOBYTE(v258) = v283[8];
      BYTE8(v258) = v283[16];
      LOBYTE(v259) = v283[24];
      BYTE8(v259) = v283[32];
      LOBYTE(v260) = v283[40];
      BYTE8(v260) = v283[48];
      LOBYTE(v261) = v283[56];
      v349 = 1;
      v41 = sub_1416AED20(&v247);
      a2 = v339;
      v42 = v333;
      *(_OWORD *)v333 = 0x3E8 * (unsigned __int128)(unsigned __int64)v41 + v43 / 0xF4240uLL;
      *(_QWORD *)v283 = &v351;
      *(_QWORD *)&v283[8] = sub_1416E8600;
      *(_QWORD *)&v283[16] = v333;
      *(_QWORD *)&v283[24] = sub_1416E85A0;
      *(_QWORD *)&v283[32] = v338;
      *(_QWORD *)&v283[40] = sub_1416EBC20;
      v349 = 1;
      sub_1416DAFA0(&v238, &unk_141A9B6EE, v34);
      v262[0] = v354;
      v346 = v239;
      *(_OWORD *)v312 = v239;
      *(_QWORD *)v283 = v262;
      *(_QWORD *)&v283[8] = sub_140ED78B0;
      *(_QWORD *)&v283[16] = v312;
      *(_QWORD *)&v283[24] = sub_140191200;
      sub_1416DAFA0(v333, &unk_141A9B450, v34);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v333);
      if ( v238 )
        sub_140001660(v346, v238, 1);
      v349 = 1;
      sub_1407D2B10(
        (__int64)v34,
        (__int64 (__fastcall *)())a2,
        v354,
        (__int64)&unk_141A9B71D,
        11,
        v330.m128i_i64[0],
        v330.m128i_i64[1],
        v31,
        v33,
        0);
      if ( *(_QWORD *)v283 == -1 )
      {
        v349 = 1;
        sub_1407B9160(*(_QWORD *)&v283[8]);
      }
      else
      {
        *(_QWORD *)&v333[88] = *(_QWORD *)&v283[88];
        *(_OWORD *)&v333[72] = *(_OWORD *)&v283[72];
        v44 = _mm_loadu_si128((const __m128i *)&v283[24]);
        *(_OWORD *)&v333[56] = *(_OWORD *)&v283[56];
        *(_OWORD *)&v333[40] = *(_OWORD *)&v283[40];
        *(__m128i *)&v333[24] = v44;
        *(_OWORD *)&v333[8] = *(_OWORD *)&v283[8];
        *(_QWORD *)v333 = *(_QWORD *)v283;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v312 = v333;
          *(_QWORD *)&v312[8] = sub_140D76130;
          *(_QWORD *)&v283[48] = 2;
          *(_QWORD *)&v283[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v283[64] = 45;
          *(_QWORD *)&v283[80] = &unk_141AA1920;
          *(_QWORD *)&v283[88] = v312;
          *(_QWORD *)v283 = 0;
          *(_QWORD *)&v283[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v283[16] = 0x2Du;
          *(_QWORD *)&v283[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v283[40] = 35;
          *(_QWORD *)&v283[72] = 0x22E00000001LL;
          sub_141503E20(&v350, v34);
        }
        v349 = 1;
        sub_140D8A3A0(v333);
      }
      v274[0] = v40 & 1;
      v274[1] = v351;
      v349 = 1;
      sub_140E98C20((__int64)v34, v250, v40);
      *(_OWORD *)v333 = *(_OWORD *)&v283[8];
      *(_OWORD *)&v333[16] = *(_OWORD *)&v283[24];
      *(_OWORD *)&v333[32] = *(_OWORD *)&v283[40];
      *(_OWORD *)&v333[48] = *(_OWORD *)&v283[56];
      *(_QWORD *)&v333[64] = *(_QWORD *)&v283[72];
      if ( *(_QWORD *)v283 != -1 )
      {
        *(_OWORD *)&v262[88] = *(_OWORD *)&v283[80];
        *(_QWORD *)&v262[80] = *(_QWORD *)&v333[64];
        v45 = _mm_load_si128((const __m128i *)v333);
        v46 = _mm_load_si128((const __m128i *)&v333[16]);
        *(_OWORD *)&v262[64] = *(_OWORD *)&v333[48];
        *(_OWORD *)&v262[48] = *(_OWORD *)&v333[32];
        *(__m128i *)&v262[32] = v46;
        *(__m128i *)&v262[16] = v45;
        *(_QWORD *)&v262[8] = *(_QWORD *)v283;
        *(_QWORD *)v262 = -1;
        v29 = v34;
        goto LABEL_50;
      }
      v47 = _mm_load_si128((const __m128i *)&v333[16]);
      v306 = *(__m128i *)v333;
      v307 = v47;
      v308 = *(__m128i *)&v333[32];
      v309 = *(__m128i *)&v333[48];
      v310.m128i_i64[0] = *(_QWORD *)&v333[64];
      v267.m256i_i64[0] = 2;
      v48 = *v254;
      v49 = v305[3];
      v265 = 2;
      sub_140EAD220((unsigned int)&v302, v49, v266, v48, 0);
      v29 = v34;
      if ( *v255 || v304 )
        goto LABEL_40;
      v301 = 2;
      sub_140EB7850(v34, v305);
      sub_140EADE50(v333, *v305, v305[3], v34);
      sub_140292E20(v34);
      if ( *(_QWORD *)v333 != -1 )
      {
        if ( *(_QWORD *)v333 )
          sub_140001660(*(_QWORD *)&v333[8], *(_QWORD *)v333, 1);
LABEL_40:
        v321.m256i_i64[0] = (__int64)v305;
        v321.m256i_i64[1] = v266;
        v321.m256i_i64[2] = (__int64)v274;
        v301 = 2;
        sub_140A9D880(v34, v256);
        *(_OWORD *)v333 = *(_OWORD *)&v283[8];
        *(_OWORD *)&v333[16] = *(_OWORD *)&v283[24];
        *(_OWORD *)&v333[32] = *(_OWORD *)&v283[40];
        *(_OWORD *)&v333[48] = *(_OWORD *)&v283[56];
        *(_OWORD *)&v333[64] = *(_OWORD *)&v283[72];
        *(_QWORD *)&v333[80] = *(_QWORD *)&v283[88];
        if ( *(_QWORD *)v283 != -1 )
        {
          *(_QWORD *)&v262[96] = *(_QWORD *)&v333[80];
          *(_OWORD *)&v262[80] = *(_OWORD *)&v333[64];
          v51 = _mm_load_si128((const __m128i *)v333);
          v52 = _mm_load_si128((const __m128i *)&v333[16]);
          *(_OWORD *)&v262[64] = *(_OWORD *)&v333[48];
          *(_OWORD *)&v262[48] = *(_OWORD *)&v333[32];
          *(__m128i *)&v262[32] = v52;
          *(__m128i *)&v262[16] = v51;
          *(_QWORD *)&v262[8] = *(_QWORD *)v283;
          *(_QWORD *)v262 = -1;
          v53 = v303;
          v54 = v304;
          if ( v304 )
          {
            v55 = v303 + 8;
            do
            {
              v56 = *(v55 - 1);
              if ( v56 )
                sub_140001660(*v55, v56, 1);
              v55 += 4;
              --v54;
            }
            while ( v54 );
            v42 = v333;
          }
          v57 = v302;
          if ( !v302 )
            goto LABEL_49;
          goto LABEL_48;
        }
        v332.m128i_i64[0] = *(_QWORD *)&v333[80];
        *(_OWORD *)&v331[64] = *(_OWORD *)&v333[64];
        v92 = _mm_load_si128((const __m128i *)v333);
        v93 = _mm_load_si128((const __m128i *)&v333[16]);
        *(_OWORD *)&v331[48] = *(_OWORD *)&v333[48];
        *(_OWORD *)&v331[32] = *(_OWORD *)&v333[32];
        *(__m128i *)&v331[16] = v93;
        *(__m128i *)v331 = v92;
        v94 = v307.m128i_i64[0];
        if ( v307.m128i_i64[0] )
        {
          v94 = 24 * v307.m128i_i64[0];
          v50 = 0;
          while ( *(_QWORD *)(v306.m128i_i64[1] + v50 + 16) != 20
               || _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(
                        _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v306.m128i_i64[1] + v50 + 8) + 16LL)),
                        v26),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v306.m128i_i64[1] + v50 + 8)), v27))) != 0xFFFF )
          {
            v50 += 24;
            if ( v94 == v50 )
              goto LABEL_131;
          }
        }
        else
        {
LABEL_131:
          nullsub_1(v94, v50);
          v100 = (__m128i *)sub_140001650(20, 1);
          if ( !v100 )
          {
            v345 = 1;
            sub_14196B2DB(1, 20);
          }
          *v100 = _mm_loadu_si128((const __m128i *)aRouterPostcond_0);
          v346 = (unsigned __int64)v100;
          v100[1].m128i_i32[0] = 1852795252;
          v101 = v307.m128i_i64[0];
          if ( v307.m128i_i64[0] == v306.m128i_i64[0] )
            sub_141939F90(&v306);
          v102 = v306.m128i_i64[1];
          v103 = 3 * v101;
          *(_QWORD *)(v306.m128i_i64[1] + 8 * v103) = 20;
          *(_QWORD *)(v102 + 8 * v103 + 8) = v346;
          *(_QWORD *)(v102 + 8 * v103 + 16) = 20;
          v307.m128i_i64[0] = v101 + 1;
        }
        v104 = *(_QWORD *)&v331[24];
        v105 = *(_QWORD *)&v331[16];
        v106 = v310.m128i_i64[0];
        if ( *(_QWORD *)&v331[24] > v309.m128i_i64[0] - v310.m128i_i64[0] )
        {
          v345 = 1;
          sub_141939070((unsigned int)&v309, v310.m128i_i32[0], *(_DWORD *)&v331[24], 8, 24);
          v107 = v309.m128i_i64[1];
          v106 = v310.m128i_i64[0];
        }
        else
        {
          if ( !*(_QWORD *)&v331[24] )
            goto LABEL_141;
          v107 = v309.m128i_i64[1];
        }
        v298 = v106;
        v108 = (__m128i *)(v107 + 24 * v106);
        v109 = -v104;
        v346 = 0;
        do
        {
          sub_1416DB410(v34, v105);
          v108[1].m128i_i64[0] = *(_QWORD *)&v283[16];
          *v108 = _mm_loadu_si128((const __m128i *)v283);
          v108 = (__m128i *)((char *)v108 + 24);
          v105 += 24;
          --v346;
        }
        while ( v109 != v346 );
        v106 = v298 - v346;
LABEL_141:
        v310.m128i_i64[0] = v106;
        v345 = 1;
        sub_140ED7B40(v34, v257);
        if ( *(_QWORD *)v331 == 1 )
        {
          if ( v331[56] )
            v293 = 0;
        }
        else
        {
          v293 = 1;
          v294 = v331[56];
        }
        v110 = _mm_load_si128((const __m128i *)&v331[16]);
        v269 = *(__m128i *)&v331[48];
        v268 = *(__m128i *)&v331[32];
        *(__m128i *)&v267.m256i_u64[2] = v110;
        *(_OWORD *)v267.m256i_i8 = *(_OWORD *)v331;
        sub_140EADE50(v295, *v305, v305[3], v34);
        v111 = *(_QWORD *)v295;
        if ( *(_QWORD *)v295 == -1 )
        {
          v328 = v310.m128i_i64[0];
          v327 = v309;
          v326 = v308;
          v325 = v307;
          v324 = v306;
          v116 = _mm_load_si128((const __m128i *)&v331[16]);
          v323 = *(__m128i *)&v331[48];
          v322 = *(__m128i *)&v331[32];
          *(__m128i *)&v321.m256i_u64[2] = v116;
          *(_OWORD *)v321.m256i_i8 = *(_OWORD *)v331;
          v336 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v331[64]);
          v337 = v332.m128i_i64[0];
          sub_1419234B0(v333, &v321, 136);
          sub_1419234B0(v262, v333, 160);
          sub_140292E20(v34);
        }
        else
        {
          v321.m256i_i64[2] = *(_QWORD *)&v295[16];
          *(_OWORD *)v321.m256i_i8 = *(_OWORD *)v295;
          v275.m128i_i64[0] = (__int64)&v321;
          v275.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_1416DAFA0(v333, &unk_141A9EEC2, &v275);
          *(_QWORD *)&v262[32] = *(_QWORD *)&v333[16];
          *(__m128i *)&v262[16] = _mm_loadu_si128((const __m128i *)v333);
          *(_QWORD *)&v262[8] = 10;
          *(_QWORD *)v262 = -1;
          if ( v321.m256i_i64[0] )
            sub_140001660(v321.m256i_i64[1], v321.m256i_i64[0], 1);
          sub_140292E20(v34);
          v112 = *(_QWORD *)&v331[72];
          v113 = v332.m128i_i64[0];
          if ( v332.m128i_i64[0] )
          {
            v114 = (_QWORD *)(*(_QWORD *)&v331[72] + 8LL);
            do
            {
              v115 = *(v114 - 1);
              if ( v115 )
                sub_140001660(*v114, v115, 1);
              v114 += 3;
              --v113;
            }
            while ( v113 );
          }
          if ( *(_QWORD *)&v331[64] )
            sub_140001660(v112, 24LL * *(_QWORD *)&v331[64], 8);
        }
        v117 = v303;
        v118 = v304;
        if ( v304 )
        {
          v119 = v303 + 8;
          do
          {
            v120 = *(v119 - 1);
            if ( v120 )
              sub_140001660(*v119, v120, 1);
            v119 += 4;
            --v118;
          }
          while ( v118 );
        }
        if ( v302 )
          sub_140001660(v117, 32LL * (_QWORD)v302, 8);
        a2 = v339;
        v29 = v34;
        if ( v111 != -1 )
        {
          if ( v267.m256i_i64[0] != 2 )
            sub_140D8A7D0(&v267);
          goto LABEL_49;
        }
        goto LABEL_50;
      }
      v301 = 2;
      sub_140EB7850(v34, v305);
      sub_140EADE50(&v321, *v305, v305[3], v34);
      sub_140292E20(v34);
      if ( v321.m256i_i64[0] != -1 )
      {
        *(_QWORD *)&v333[16] = v321.m256i_i64[2];
        *(_OWORD *)v333 = *(_OWORD *)v321.m256i_i8;
        *(_QWORD *)v331 = v333;
        *(_QWORD *)&v331[8] = sub_1400015F0;
        sub_1416DAFA0(v34, &unk_141A9EEC2, v331);
        *(_QWORD *)&v262[32] = *(_QWORD *)&v283[16];
        *(__m128i *)&v262[16] = _mm_loadu_si128((const __m128i *)v283);
        *(_QWORD *)&v262[8] = 10;
        *(_QWORD *)v262 = -1;
        if ( *(_QWORD *)v333 )
          sub_140001660(*(_QWORD *)&v333[8], *(_QWORD *)v333, 1);
        v53 = v303;
        v57 = v302;
        if ( !v302 )
          goto LABEL_49;
LABEL_48:
        sub_140001660(v53, 32LL * (_QWORD)v57, 8);
LABEL_49:
        sub_1401B0D60(&v306);
        goto LABEL_50;
      }
      v315 = v310.m128i_i64[0];
      v314 = v309;
      v313 = v308;
      *(__m128i *)&v312[80] = v307;
      *(__m128i *)&v312[64] = v306;
      v121 = _mm_loadu_si128((const __m128i *)&v267.m256i_u64[2]);
      *(__m128i *)v312 = _mm_loadu_si128((const __m128i *)&v267);
      *(__m128i *)&v312[16] = v121;
      *(__m128i *)&v312[32] = v268;
      *(__m128i *)&v312[48] = v269;
      sub_1419234B0(v262, v312, 136);
      v263.m128i_i64[0] = 0;
      v263.m128i_i64[1] = 8;
      v264 = 0;
      sub_1400293E0(&v302);
LABEL_50:
      *(_QWORD *)&v283[48] = v261;
      *(_OWORD *)&v283[32] = v260;
      *(_OWORD *)&v283[16] = v259;
      *(_OWORD *)v283 = v258;
      v341[1] = 1;
      sub_1409349D0(&v267, v29);
      sub_1419234B0(v29, v262, 160);
      v292 = v271;
      v291 = v270;
      v59 = _mm_loadu_si128((const __m128i *)&v267);
      v60 = _mm_loadu_si128((const __m128i *)&v267.m256i_u64[2]);
      v290 = v269;
      v289 = v268;
      v288 = v60;
      v287 = v59;
      if ( *(_QWORD *)v283 != -1 )
        break;
      v298 = -1;
      if ( v287.m128i_i32[0] != -1 )
      {
        v311 = *(__m128i *)&v262[88];
        v310 = *(__m128i *)&v262[72];
        v309 = *(__m128i *)&v262[56];
        v308 = *(__m128i *)&v262[40];
        v307 = *(__m128i *)&v262[24];
        v306 = *(__m128i *)&v262[8];
        v332 = v271;
        *(__m128i *)&v331[64] = v270;
        *(__m128i *)&v331[48] = v269;
        *(__m128i *)&v331[32] = v268;
        *(__m256i *)v331 = v267;
        *(_QWORD *)v333 = &v306;
        *(_QWORD *)&v333[8] = sub_140D76130;
        *(_QWORD *)&v333[16] = v331;
        *(_QWORD *)&v333[24] = sub_140D76130;
        sub_1416DAFA0(&v234, &unk_141A9B944, v333);
        v173 = v320;
        *(_OWORD *)&v321.m256i_u64[1] = v234;
        v321.m256i_i64[3] = v235;
        v321.m256i_i64[0] = 10;
        *(_QWORD *)v312 = 0;
        *(_QWORD *)&v312[8] = 1;
        *(_QWORD *)&v312[16] = 0;
        *(_QWORD *)&v333[16] = 1610612768;
        *(_QWORD *)v333 = v312;
        *(_QWORD *)&v333[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v321, v333) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v339 = *(__int128 **)&v312[8];
        v346 = *(_QWORD *)v312;
        sub_1407D7360(
          (__int128 *)v312,
          a2,
          v354,
          (int)aFailed_2,
          6,
          v330.m128i_i64[0],
          v330.m128i_i64[1],
          *(__int64 *)&v312[8],
          *(__int64 *)&v312[16]);
        if ( *(_DWORD *)v312 != -1 )
        {
          *(_OWORD *)&v333[80] = *(_OWORD *)&v312[80];
          *(_OWORD *)&v333[64] = *(_OWORD *)&v312[64];
          *(_OWORD *)&v333[48] = *(_OWORD *)&v312[48];
          *(_OWORD *)&v333[32] = *(_OWORD *)&v312[32];
          *(_OWORD *)&v333[16] = *(_OWORD *)&v312[16];
          *(_OWORD *)v333 = *(_OWORD *)v312;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v302 = v333;
            v303 = (char *)sub_140D76130;
            *(_QWORD *)v295 = aCodexmateLibCo_49;
            *(_QWORD *)&v295[8] = 45;
            *(_QWORD *)&v295[16] = aCodexmateLibCo_49;
            v296 = 45;
            v297 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v302, 2, v295);
          }
          sub_140D8A3A0(v333);
        }
        if ( v346 )
          sub_140001660(v339, v346, 1);
        *(_QWORD *)v333 = &v351;
        *(_QWORD *)&v333[8] = sub_1416E8600;
        *(_QWORD *)&v333[16] = &v321;
        *(_QWORD *)&v333[24] = sub_140D76130;
        sub_1416DAFA0(v228, &unk_141A9B8A8, v333);
        sub_140DB20C0(v354, aReconcileFaile, 16, v228, v221);
        *(__m128i *)(v173 + 88) = v325;
        *(__m128i *)(v173 + 72) = v324;
        v21 = *(__m128i *)v321.m256i_i8;
        v174 = *(_OWORD *)&v321.m256i_u64[2];
        v175 = v322;
        *(__m128i *)(v173 + 56) = v323;
        *(__m128i *)(v173 + 40) = v175;
        *(_OWORD *)(v173 + 24) = v174;
        *(__m128i *)(v173 + 8) = v21;
        v176 = v351;
        *(_BYTE *)(v173 + 104) = 2;
        *(_BYTE *)(v173 + 105) = v176;
        *(_QWORD *)v173 = -1;
        sub_140D8A3A0(v331);
        sub_140D8A3A0(&v306);
        return *(double *)v21.m128i_i64;
      }
      v325 = *(__m128i *)&v262[88];
      v324 = *(__m128i *)&v262[72];
      v73 = _mm_loadu_si128((const __m128i *)&v262[24]);
      v323 = *(__m128i *)&v262[56];
      v322 = *(__m128i *)&v262[40];
      *(__m128i *)&v321.m256i_u64[2] = v73;
      *(_OWORD *)v321.m256i_i8 = *(_OWORD *)&v262[8];
      v74 = v287.m128i_i32[2];
      v75 = v287.m128i_i8[12];
      v76 = sub_1416AEBD0(-1, v58);
      a1 = v320;
      if ( v341[0] )
        goto LABEL_201;
      if ( v74 )
      {
        if ( (unsigned __int8)v351 > 2u )
          goto LABEL_201;
      }
      else if ( (unsigned __int8)v351 > 2u || !v75 )
      {
        goto LABEL_201;
      }
      if ( v329 == -1 )
      {
        v273 = sub_1416D0210(v76, v77, 12, 0, (__int64)&off_141AA1908);
        v329 = v95;
      }
      else
      {
        v90 = v77 < v329;
        v91 = v76 < v273;
        if ( v76 == v273 )
          v91 = v90;
        if ( !v91 )
        {
LABEL_201:
          *(_QWORD *)v312 = 0;
          *(_QWORD *)&v312[8] = 1;
          *(_QWORD *)&v312[16] = 0;
          *(_QWORD *)&v333[16] = 1610612768;
          *(_QWORD *)v333 = v312;
          *(_QWORD *)&v333[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(&v321, v333) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v350,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v346 = *(_QWORD *)v312;
          v140 = _mm_loadu_si128(&v330);
          v339 = *(__int128 **)&v312[8];
          sub_1407D7360(
            (__int128 *)v312,
            a2,
            v354,
            (int)aFailed_2,
            6,
            v140.m128i_i64[0],
            v140.m128i_i64[1],
            *(__int64 *)&v312[8],
            *(__int64 *)&v312[16]);
          if ( *(_DWORD *)v312 != -1 )
          {
            *(_OWORD *)&v333[80] = *(_OWORD *)&v312[80];
            *(_OWORD *)&v333[64] = *(_OWORD *)&v312[64];
            v141 = _mm_loadu_si128((const __m128i *)v312);
            v142 = _mm_loadu_si128((const __m128i *)&v312[16]);
            *(_OWORD *)&v333[48] = *(_OWORD *)&v312[48];
            *(_OWORD *)&v333[32] = *(_OWORD *)&v312[32];
            *(__m128i *)&v333[16] = v142;
            *(__m128i *)v333 = v141;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v306.m128i_i64[0] = (__int64)v333;
              v306.m128i_i64[1] = (__int64)sub_140D76130;
              *(_QWORD *)v331 = aCodexmateLibCo_49;
              *(_QWORD *)&v331[8] = 45;
              *(_QWORD *)&v331[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v331[24] = 45;
              *(_QWORD *)&v331[32] = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, &v306, 2, v331);
            }
            sub_140D8A3A0(v333);
          }
          if ( v346 )
            sub_140001660(v339, v346, 1);
          *(_QWORD *)v333 = &v351;
          *(_QWORD *)&v333[8] = sub_1416E8600;
          *(_QWORD *)&v333[16] = &v321;
          *(_QWORD *)&v333[24] = sub_140D76130;
          sub_1416DAFA0(v230, &unk_141A9B8A8, v333);
          sub_140DB20C0(v354, aReconcileFaile, 16, v230, v217);
          *(__m128i *)(a1 + 88) = v325;
          *(__m128i *)(a1 + 72) = v324;
          v21 = _mm_load_si128((const __m128i *)&v321);
          v143 = _mm_load_si128((const __m128i *)&v321.m256i_u64[2]);
          v144 = v322;
          *(__m128i *)(a1 + 56) = v323;
          *(__m128i *)(a1 + 40) = v144;
          *(__m128i *)(a1 + 24) = v143;
          *(__m128i *)(a1 + 8) = v21;
          v145 = v351;
          *(_BYTE *)(a1 + 104) = 2;
          *(_BYTE *)(a1 + 105) = v145;
          goto LABEL_5;
        }
      }
      *(_QWORD *)v312 = 0;
      *(_QWORD *)&v312[8] = 1;
      *(_QWORD *)&v312[16] = 0;
      *(_QWORD *)&v333[16] = 1610612768;
      *(_QWORD *)v333 = v312;
      *(_QWORD *)&v333[8] = &off_141AA1A90;
      v96 = sub_140D76130(&v321, v333);
      v97 = v319;
      if ( v96 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v350,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      *(_QWORD *)&v331[16] = *(_QWORD *)&v312[16];
      *(__m128i *)v331 = _mm_loadu_si128((const __m128i *)v312);
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v312 = &v354;
        *(_QWORD *)&v312[8] = sub_140ED78B0;
        *(_QWORD *)&v312[16] = &v351;
        *(_QWORD *)&v312[24] = sub_1416E8600;
        *(_QWORD *)&v312[32] = v331;
        *(_QWORD *)&v312[40] = sub_1400015F0;
        *(_QWORD *)&v333[48] = 2;
        *(_QWORD *)&v333[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v333[64] = 45;
        *(_QWORD *)&v333[80] = &unk_141A9B8D9;
        *(_QWORD *)&v333[88] = v312;
        *(_QWORD *)v333 = 0;
        *(_QWORD *)&v333[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v333[16] = 0x2Du;
        *(_QWORD *)&v333[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v333[40] = 35;
        *(_QWORD *)&v333[72] = 0x12E00000001LL;
        sub_141503E20(&v350, v333);
      }
      v225 = _mm_loadu_si128((const __m128i *)&v331[8]);
      v224 = _mm_loadu_si128(&v330);
      sub_1407D2B10(
        (__int64)v333,
        (__int64 (__fastcall *)())a2,
        v354,
        (__int64)&unk_141A9B8A0,
        8,
        v224.m128i_i64[0],
        v224.m128i_i64[1],
        v225.m128i_i64[0],
        v225.m128i_i64[1],
        0);
      if ( *(_QWORD *)v333 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v333[8]);
      }
      else
      {
        *(_QWORD *)&v312[88] = *(_QWORD *)&v333[88];
        *(_OWORD *)&v312[72] = *(_OWORD *)&v333[72];
        v98 = _mm_loadu_si128((const __m128i *)&v333[8]);
        v99 = _mm_loadu_si128((const __m128i *)&v333[24]);
        *(_OWORD *)&v312[56] = *(_OWORD *)&v333[56];
        *(_OWORD *)&v312[40] = *(_OWORD *)&v333[40];
        *(__m128i *)&v312[24] = v99;
        *(__m128i *)&v312[8] = v98;
        *(_QWORD *)v312 = *(_QWORD *)v333;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v306.m128i_i64[0] = (__int64)v312;
          v306.m128i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)&v333[48] = 2;
          *(_QWORD *)&v333[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v333[64] = 45;
          *(_QWORD *)&v333[80] = &unk_141AA1920;
          *(_QWORD *)&v333[88] = &v306;
          *(_QWORD *)v333 = 0;
          *(_QWORD *)&v333[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v333[16] = 0x2Du;
          *(_QWORD *)&v333[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v333[40] = 35;
          *(_QWORD *)&v333[72] = 0x22E00000001LL;
          sub_141503E20(&v350, v333);
        }
        sub_140D8A3A0(v312);
      }
      *(_QWORD *)v333 = &v351;
      *(_QWORD *)&v333[8] = sub_1416E8600;
      *(_QWORD *)&v333[16] = v331;
      *(_QWORD *)&v333[24] = sub_1400015F0;
      sub_1416DAFA0(&v236, &unk_141A9B8A8, v333);
      v295[0] = v354;
      v346 = v237.m128i_i64[0];
      v306 = v237;
      *(_QWORD *)v333 = v295;
      *(_QWORD *)&v333[8] = sub_140ED78B0;
      *(_QWORD *)&v333[16] = &v306;
      *(_QWORD *)&v333[24] = sub_140191200;
      sub_1416DAFA0(v312, &unk_141A9B450, v333);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)v312);
      if ( v236 )
        sub_140001660(v346, v236, 1);
      if ( *(_QWORD *)v331 )
        sub_140001660(*(_QWORD *)&v331[8], *(_QWORD *)v331, 1);
      sub_140D8A3A0(&v321);
      v28 = v282;
      if ( (v97 & 1) != 0 )
        goto LABEL_183;
    }
    if ( v287.m128i_i32[0] != -1 )
    {
      v298 = *(_QWORD *)v283;
      v325 = v271;
      v324 = v270;
      v323 = v269;
      v322 = v268;
      v321 = v267;
      *(_QWORD *)v312 = 0;
      *(_QWORD *)&v312[8] = 1;
      *(_QWORD *)&v312[16] = 0;
      *(_QWORD *)&v333[16] = 1610612768;
      *(_QWORD *)v333 = v312;
      *(_QWORD *)&v333[8] = &off_141AA1A90;
      v152 = sub_140D76130(&v321, v333);
      v153 = v320;
      if ( v152 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v350,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v339 = *(__int128 **)&v312[8];
      v346 = *(_QWORD *)v312;
      sub_1407D7360(
        (__int128 *)v312,
        a2,
        v354,
        (int)aFailed_2,
        6,
        v330.m128i_i64[0],
        v330.m128i_i64[1],
        *(__int64 *)&v312[8],
        *(__int64 *)&v312[16]);
      if ( *(_DWORD *)v312 != -1 )
      {
        *(_OWORD *)&v333[80] = *(_OWORD *)&v312[80];
        *(_OWORD *)&v333[64] = *(_OWORD *)&v312[64];
        *(_OWORD *)&v333[48] = *(_OWORD *)&v312[48];
        *(_OWORD *)&v333[32] = *(_OWORD *)&v312[32];
        *(_OWORD *)&v333[16] = *(_OWORD *)&v312[16];
        *(_OWORD *)v333 = *(_OWORD *)v312;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v306.m128i_i64[0] = (__int64)v333;
          v306.m128i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v331 = aCodexmateLibCo_49;
          *(_QWORD *)&v331[8] = 45;
          *(_QWORD *)&v331[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v331[24] = 45;
          *(_QWORD *)&v331[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v306, 2, v331);
        }
        sub_140D8A3A0(v333);
      }
      if ( v346 )
        sub_140001660(v339, v346, 1);
      *(_QWORD *)v333 = &v351;
      *(_QWORD *)&v333[8] = sub_1416E8600;
      *(_QWORD *)&v333[16] = &v321;
      *(_QWORD *)&v333[24] = sub_140D76130;
      sub_1416DAFA0(v229, &unk_141A9B8A8, v333);
      sub_140DB20C0(v354, aSettleFailed, 13, v229, v219);
      *(__m128i *)(v153 + 88) = v325;
      *(__m128i *)(v153 + 72) = v324;
      v21 = _mm_load_si128((const __m128i *)&v321);
      v154 = _mm_load_si128((const __m128i *)&v321.m256i_u64[2]);
      v155 = v322;
      *(__m128i *)(v153 + 56) = v323;
      *(__m128i *)(v153 + 40) = v155;
      *(__m128i *)(v153 + 24) = v154;
      *(__m128i *)(v153 + 8) = v21;
      v156 = v351;
      *(_BYTE *)(v153 + 104) = 3;
      *(_BYTE *)(v153 + 105) = v156;
      *(_QWORD *)v153 = -1;
      sub_1401B0D60(&v283[64]);
      if ( (_DWORD)v298 != 2 )
        sub_140D8A7D0(v283);
      v157 = v285;
      v158 = v286;
      if ( v286 )
      {
        v159 = (_QWORD *)(v285 + 8);
        do
        {
          v160 = *(v159 - 1);
          if ( v160 )
            *(double *)v21.m128i_i64 = sub_140001660(*v159, v160, 1);
          v159 += 3;
          --v158;
        }
        while ( v158 );
      }
      if ( v284 )
        *(double *)v21.m128i_i64 = sub_140001660(v157, 24 * v284, 8);
      return *(double *)v21.m128i_i64;
    }
    sub_1419234B0(v312, v262, 160);
    v299 = v287.m128i_i32[2];
    v300 = v287.m128i_i8[12];
    v61 = *v253;
    v62 = *(_QWORD *)(v251 + 24);
    v338[3] = 1;
    v338[2] = 1;
    sub_140EAD220((unsigned int)&v279, v62, v252, v61, (v287.m128i_i32[2] == 0) & (v287.m128i_i8[12] ^ 1));
    v63 = v281;
    if ( !v281 )
    {
      if ( (v299 || (v300 & 1) != 0) && *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v283 = &v354;
        *(_QWORD *)&v283[8] = sub_140ED78B0;
        *(_QWORD *)&v283[16] = &v351;
        *(_QWORD *)&v283[24] = sub_1416E8600;
        *(_QWORD *)&v283[32] = &v299;
        *(_QWORD *)&v283[40] = sub_1416EACD0;
        *(_QWORD *)&v283[48] = &v300;
        *(_QWORD *)&v283[56] = sub_1416EBC20;
        *(_QWORD *)v333 = aCodexmateLibCo_49;
        *(_QWORD *)&v333[8] = 45;
        *(_QWORD *)&v333[16] = aCodexmateLibCo_49;
        *(_QWORD *)&v333[24] = 45;
        *(_QWORD *)&v333[32] = &off_141A9B7A0;
        v344 = 1;
        v343 = 1;
        sub_140AF72B0(&unk_141A9B728, v283, 2, v333);
      }
      sub_1419234B0(v333, v312, 160);
      LOBYTE(v42) = v354;
      v161 = v330;
      v277 = v330;
      v353 = 1;
      v352 = 1;
      v164 = sub_1416AEBD0(v163, v162);
      v165 = v320;
      v245 = v164;
      v246 = v166;
      v353 = 1;
      v352 = 1;
      sub_1407D5A90((unsigned int)&v321, (_DWORD)a2, (_DWORD)v42, v161.m128i_i32[0], v161.m128i_i64[1]);
      if ( v321.m256i_i32[0] != -1 )
      {
        v311 = v325;
        v310 = v324;
        v167 = _mm_loadu_si128((const __m128i *)&v321);
        v168 = _mm_loadu_si128((const __m128i *)&v321.m256i_u64[2]);
        v309 = v323;
        v308 = v322;
        v307 = v168;
        v306 = v167;
        goto LABEL_267;
      }
      *(_QWORD *)v331 = v333;
      *(__m128i *)&v331[8] = _mm_loadu_si128(&v244);
      if ( *(_QWORD *)v333 == 2 )
      {
        v353 = 1;
        v352 = 1;
        sub_140EB7850(v283, a10);
        *(__m128i *)&v295[1] = _mm_loadu_si128(&v244);
        v295[0] = 1;
        v353 = 1;
        v352 = 1;
        sub_140E9F030((__int64)&v306, a10, (__int64)v283, (const __m128i *)v295);
      }
      else
      {
        v179 = *a11;
        v353 = 1;
        v352 = 1;
        sub_140EA2DA0((__int64)&v306, a10, *(__int64 *)v333, v333[56], v179, &v331[8]);
      }
      if ( v306.m128i_i64[0] != -1 )
      {
LABEL_267:
        v332 = v311;
        *(__m128i *)&v331[64] = v310;
        v180 = _mm_load_si128(&v306);
        v181 = _mm_load_si128(&v307);
        *(__m128i *)&v331[48] = v309;
        *(__m128i *)&v331[32] = v308;
        *(__m128i *)&v331[16] = v181;
        *(__m128i *)v331 = v180;
        v182 = v277;
        v321.m256i_i64[0] = 0;
        *(_OWORD *)&v321.m256i_u64[1] = 1u;
        *(_QWORD *)&v283[16] = 1610612768;
        *(_QWORD *)v283 = &v321;
        *(_QWORD *)&v283[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(v331, v283) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v339 = (__int128 *)v321.m256i_i64[1];
        v346 = v321.m256i_i64[0];
        sub_1407D7360(
          (__int128 *)v321.m256i_i8,
          a2,
          (int)v42,
          (int)aCommitFailed,
          13,
          v182.m128i_i64[0],
          v182.m128i_i64[1],
          v321.m256i_i64[1],
          v321.m256i_i64[2]);
        if ( v321.m256i_i32[0] != -1 )
        {
          *(__m128i *)&v283[80] = v325;
          *(__m128i *)&v283[64] = v324;
          v183 = _mm_loadu_si128((const __m128i *)&v321);
          v184 = _mm_loadu_si128((const __m128i *)&v321.m256i_u64[2]);
          *(__m128i *)&v283[48] = v323;
          *(__m128i *)&v283[32] = v322;
          *(__m128i *)&v283[16] = v184;
          *(__m128i *)v283 = v183;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v278[0] = v283;
            v278[1] = sub_140D76130;
            *(_QWORD *)v295 = aCodexmateLibCo_49;
            *(_QWORD *)&v295[8] = 45;
            *(_QWORD *)&v295[16] = aCodexmateLibCo_49;
            v296 = 45;
            v297 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, v278, 2, v295);
          }
          sub_140D8A3A0(v283);
        }
        if ( v346 )
          sub_140001660(v339, v346, 1);
        *(_QWORD *)v283 = &v277;
        *(_QWORD *)&v283[8] = sub_140191200;
        *(_QWORD *)&v283[16] = v331;
        *(_QWORD *)&v283[24] = sub_140D76130;
        sub_1416DAFA0(v295, &unk_141A9B651, v283);
        sub_140DB20C0((unsigned int)v42, aCommitFailed, 13, v295, v222);
        v185 = *(_OWORD *)v331;
        v186 = *(_QWORD *)&v331[16];
        v321 = *(__m256i *)&v331[24];
        v322 = *(__m128i *)&v331[56];
        v323 = _mm_loadu_si128((const __m128i *)&v331[72]);
        v324.m128i_i64[0] = v332.m128i_i64[1];
        sub_1401B0D60(&v333[64]);
        v187 = -1;
        v188 = 1;
        if ( *(_DWORD *)v333 != 2 )
          sub_140D8A7D0(v333);
        goto LABEL_276;
      }
      v353 = 1;
      v352 = 1;
      v192 = sub_1407B92D0(v306.m128i_i64[1]);
      if ( v192 )
      {
        v195 = v192 & 3;
        v346 = v192;
        switch ( v192 & 3 )
        {
          case 0uLL:
            LOBYTE(v192) = *(_BYTE *)(v192 + 16);
            break;
          case 1uLL:
            LOBYTE(v192) = *(_BYTE *)(v192 + 31);
            break;
          case 2uLL:
            v342 = 1;
            v200 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v194, v193) + 8);
            v342 = 1;
            LOBYTE(v192) = v200(HIDWORD(v346));
            break;
          case 3uLL:
            v192 >>= 32;
            break;
        }
        v321.m256i_i8[0] = v192;
        *(_QWORD *)v283 = &v321;
        *(_QWORD *)&v283[8] = sub_140EDB0F0;
        v342 = 1;
        sub_1416DAFA0(v272, &unk_141A9B46E, v283);
        v342 = 1;
        sub_140DB20C0((unsigned int)v42, aCommitSyncUnco, 23, v272, v220);
        v201 = _mm_loadu_si128(&v277).m128i_u64[0];
        v202 = *((_QWORD *)a2 + 97);
        v203 = *((_QWORD *)a2 + 98);
        v342 = 1;
        sub_1407D3B80(v202, v203, (_DWORD)v42, (unsigned int)&unk_141A4A03B, 23, v201);
        v307.m128i_i64[0] = v337;
        v306 = _mm_loadu_si128((const __m128i *)&v336);
        sub_1407D7410(v283);
        *(_QWORD *)v331 = 0;
        *(_QWORD *)&v331[8] = 1;
        *(_QWORD *)&v331[16] = 0;
        v321.m256i_i64[2] = 1610612768;
        v321.m256i_i64[0] = (__int64)v331;
        v321.m256i_i64[1] = (__int64)&off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(v283, &v321) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v350,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v319 = *(_QWORD *)&v331[8];
        v339 = *(__int128 **)v331;
        v204 = *(_QWORD *)&v331[16];
        v205 = v307.m128i_i64[0];
        if ( v307.m128i_i64[0] == v306.m128i_i64[0] )
          sub_141939F90(&v306);
        v206 = v306.m128i_i64[1];
        v207 = 3 * v205;
        *(_QWORD *)(v306.m128i_i64[1] + 8 * v207) = v339;
        *(_QWORD *)(v206 + 8 * v207 + 8) = v319;
        *(_QWORD *)(v206 + 8 * v207 + 16) = v204;
        v307.m128i_i64[0] = v205 + 1;
        sub_140D8A3A0(v283);
        sub_1419234B0(&v321, v333, 136);
        v186 = v307.m128i_i64[0];
        v185 = (unsigned __int128)v306;
        if ( (unsigned int)(v195 - 2) >= 2 && v195 )
        {
          *(_QWORD *)&v283[8] = v346 - 1;
          v283[0] = 3;
          v353 = 0;
          v352 = 0;
          sub_1416EBAD0(&v283[8]);
        }
        v187 = 2;
        goto LABEL_301;
      }
      if ( v337 )
      {
        v353 = 1;
        v352 = 1;
        sub_1406C5480((unsigned int)v283, DWORD2(v336), v337, (unsigned int)&unk_141A9B28E, 3);
        v339 = *(__int128 **)&v283[8];
        v346 = *(_QWORD *)v283;
        sub_1407D7100(
          (unsigned int)&v321,
          (_DWORD)a2,
          (_DWORD)v42,
          v277.m128i_i32[0],
          v277.m128i_i64[1],
          *(__int64 *)&v283[8],
          *(__int64 *)&v283[16]);
        if ( v321.m256i_i32[0] != -1 )
        {
          *(__m128i *)&v283[80] = v325;
          *(__m128i *)&v283[64] = v324;
          v196 = _mm_loadu_si128((const __m128i *)&v321);
          v197 = _mm_loadu_si128((const __m128i *)&v321.m256i_u64[2]);
          *(__m128i *)&v283[48] = v323;
          *(__m128i *)&v283[32] = v322;
          *(__m128i *)&v283[16] = v197;
          *(__m128i *)v283 = v196;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v306.m128i_i64[0] = (__int64)v283;
            v306.m128i_i64[1] = (__int64)sub_140D76130;
            *(_QWORD *)v331 = aCodexmateLibCo_49;
            *(_QWORD *)&v331[8] = 45;
            *(_QWORD *)&v331[16] = aCodexmateLibCo_49;
            *(_QWORD *)&v331[24] = 45;
            *(_QWORD *)&v331[32] = &off_141A9B5E8;
            sub_140AF72B0(&unk_141A9B5A6, &v306, 2, v331);
          }
          sub_140D8A3A0(v283);
        }
        if ( v346 )
          sub_140001660(v339, v346, 1);
        v353 = 1;
        v352 = 1;
        v198 = sub_1416AED20(&v245);
        *(_OWORD *)v321.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v198 + v199 / 0xF4240uLL;
        *(_QWORD *)v331 = v337;
        *(_QWORD *)v283 = &v277;
        *(_QWORD *)&v283[8] = sub_140191200;
        *(_QWORD *)&v283[16] = &v321;
        *(_QWORD *)&v283[24] = sub_1416E85A0;
        *(_QWORD *)&v283[32] = v331;
        *(_QWORD *)&v283[40] = sub_1416EBAE0;
        v353 = 1;
        v352 = 1;
        sub_1416DAFA0(v274, &unk_141A9B600, v283);
        v353 = 1;
        v352 = 1;
        sub_140DB20C0((unsigned int)v42, aDegraded, 8, v274, v223);
        sub_1419234B0(&v321, v333, 136);
        v187 = 1;
        v186 = v337;
        v185 = v336;
        goto LABEL_301;
      }
      v353 = 1;
      v352 = 1;
      sub_1407D2600((__int64)&v306, (__int64)a2, (int)v42);
      if ( v306.m128i_i32[0] == -1 )
      {
        v353 = 1;
        v352 = 1;
        v211 = sub_1416AED20(&v245);
        *(_OWORD *)v321.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v211 + v212 / 0xF4240uLL;
        *(_QWORD *)v283 = &v277;
        *(_QWORD *)&v283[8] = sub_140191200;
        *(_QWORD *)&v283[16] = &v321;
        *(_QWORD *)&v283[24] = sub_1416E85A0;
        v353 = 1;
        v352 = 1;
        sub_1416DAFA0(&v302, &unk_141A9B581, v283);
        v353 = 1;
        v352 = 1;
        sub_140DB20C0((unsigned int)v42, aStable, 6, &v302, v220);
        v213 = *(_OWORD *)v333;
        v186 = *(_QWORD *)&v333[16];
        v321 = *(__m256i *)&v333[24];
        v322 = *(__m128i *)&v333[56];
        v323 = *(__m128i *)&v333[72];
        v324 = *(__m128i *)&v333[88];
        v325 = v334;
        v326 = _mm_loadu_si128(&v335);
        sub_1400290B0(&v336);
        v187 = 0;
        v185 = v213;
        goto LABEL_301;
      }
      v332 = v311;
      *(__m128i *)&v331[64] = v310;
      v208 = _mm_loadu_si128(&v306);
      v209 = _mm_loadu_si128(&v307);
      *(__m128i *)&v331[48] = v309;
      *(__m128i *)&v331[32] = v308;
      *(__m128i *)&v331[16] = v209;
      *(__m128i *)v331 = v208;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v321.m256i_i64[0] = (__int64)v331;
        v321.m256i_i64[1] = (__int64)sub_140D76130;
        *(_QWORD *)v283 = aCodexmateLibCo_49;
        *(_QWORD *)&v283[8] = 45;
        *(_QWORD *)&v283[16] = aCodexmateLibCo_49;
        *(_QWORD *)&v283[24] = 45;
        *(_QWORD *)&v283[32] = &off_141A9B500;
        v338[1] = 1;
        sub_140AF72B0(&unk_141A9B48D, &v321, 2, v283);
      }
      sub_1419234B0(v283, v333, 136);
      v346 = sub_14017AA90();
      v321.m256i_i64[0] = (__int64)v331;
      v321.m256i_i64[1] = (__int64)sub_140D76130;
      sub_1416DAFA0(&v275, &unk_141A9B545, &v321);
      v210 = (__m128i *)v346;
      *(_QWORD *)(v346 + 16) = v276;
      *v210 = _mm_loadu_si128(&v275);
      sub_1419234B0(&v321, v283, 136);
      v353 = 0;
      v352 = 1;
      sub_140D8A3A0(v331);
      v187 = 1;
      v188 = 0;
      v186 = 1;
      v185 = __PAIR128__((unsigned __int64)v210, 1);
LABEL_276:
      sub_1402346F0(&v336);
      if ( (_QWORD)v336 )
        sub_140001660(*((_QWORD *)&v336 + 1), 24 * v336, 8);
      if ( v188 )
      {
        *(_QWORD *)(v165 + 96) = v324.m128i_i64[0];
        v21 = _mm_load_si128((const __m128i *)&v321);
        v189 = _mm_load_si128((const __m128i *)&v321.m256i_u64[2]);
        v190 = v322;
        *(__m128i *)(v165 + 80) = v323;
        *(__m128i *)(v165 + 64) = v190;
        *(__m128i *)(v165 + 48) = v189;
        *(__m128i *)(v165 + 32) = v21;
        v191 = v351;
        *(_OWORD *)(v165 + 8) = v185;
        *(_QWORD *)(v165 + 24) = v186;
        *(_BYTE *)(v165 + 104) = 5;
        *(_BYTE *)(v165 + 105) = v191;
        *(_QWORD *)v165 = -1;
      }
      else
      {
LABEL_301:
        *(double *)v21.m128i_i64 = sub_1419234B0(v165 + 32, &v321, 136);
        *(_QWORD *)v165 = v187;
        *(_OWORD *)(v165 + 8) = v185;
        *(_QWORD *)(v165 + 24) = v186;
      }
      sub_140234510(&v279);
      if ( !v279 )
        return *(double *)v21.m128i_i64;
      v171 = v280;
      v172 = 32 * v279;
      goto LABEL_304;
    }
    v64 = v280;
    v344 = 1;
    v343 = 1;
    sub_140226C80(v333, v280, v280 + 32 * v281);
    v65 = *(_QWORD *)&v333[8];
    v66 = *(_QWORD *)&v333[16];
    sub_1406C5480((_DWORD)v34, *(_DWORD *)&v333[8], *(_DWORD *)&v333[16], (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)&v331[16] = *(_QWORD *)&v283[16];
    *(__m128i *)v331 = _mm_loadu_si128((const __m128i *)v283);
    if ( v66 )
    {
      v69 = (_QWORD *)(v65 + 8);
      do
      {
        v67 = *(v69 - 1);
        if ( v67 )
          sub_140001660(*v69, v67, 1);
        v69 += 3;
        --v66;
      }
      while ( v66 );
    }
    if ( *(_QWORD *)v333 )
      sub_140001660(v65, 24LL * *(_QWORD *)v333, 8);
    v348 = 1;
    v347 = 1;
    v70 = sub_1416AEBD0(v68, v67);
    a2 = v339;
    v72 = v341[0];
    if ( v341[0] )
      break;
    if ( v299 )
    {
      if ( (unsigned __int8)v351 > 2u )
        goto LABEL_209;
    }
    else if ( (unsigned __int8)v351 > 2u || (v300 & 1) == 0 )
    {
      goto LABEL_209;
    }
    if ( v329 == -1 )
    {
      v348 = 1;
      v347 = 1;
      v273 = sub_1416D0210(v70, v71, 12, 0, (__int64)&off_141AA1908);
      v329 = v80;
    }
    else
    {
      v78 = v71 < v329;
      v79 = v70 < v273;
      if ( v70 == v273 )
        v79 = v78;
      if ( !v79 )
      {
LABEL_209:
        *(_QWORD *)v283 = &v354;
        *(_QWORD *)&v283[8] = sub_140ED78B0;
        *(_QWORD *)&v283[16] = v331;
        *(_QWORD *)&v283[24] = sub_1400015F0;
        v348 = 1;
        v347 = 1;
        sub_1416DAFA0(&v232, &unk_141A9B7B8, v283);
        *(__m128i *)&v283[8] = _mm_loadu_si128(&v232);
        *(_QWORD *)&v283[24] = v233;
        *(_QWORD *)v283 = 10;
        sub_140EDA570(v333, v283);
        v146 = v320;
        v346 = *(_QWORD *)&v333[8];
        sub_140ED3800(a2, v354, v330.m128i_i64[0], v330.m128i_i64[1], *(__int64 *)&v333[8], *(__int64 *)&v333[16]);
        if ( *(_QWORD *)v333 )
          sub_140001660(v346, *(_QWORD *)v333, 1);
        v321.m256i_i64[0] = v63;
        *(_QWORD *)v333 = &v351;
        *(_QWORD *)&v333[8] = sub_1416E8600;
        *(_QWORD *)&v333[16] = &v321;
        *(_QWORD *)&v333[24] = sub_1416EBAE0;
        sub_1416DAFA0(v226, &unk_141A9B7D9, v333);
        sub_140DB20C0(v354, aPostconditionF, 20, v226, v218);
        *(_OWORD *)(v146 + 88) = *(_OWORD *)&v283[80];
        *(_OWORD *)(v146 + 72) = *(_OWORD *)&v283[64];
        v21 = _mm_loadu_si128((const __m128i *)v283);
        v147 = _mm_loadu_si128((const __m128i *)&v283[16]);
        v148 = *(_OWORD *)&v283[32];
        *(_OWORD *)(v146 + 56) = *(_OWORD *)&v283[48];
        *(_OWORD *)(v146 + 40) = v148;
        *(__m128i *)(v146 + 24) = v147;
        *(__m128i *)(v146 + 8) = v21;
        v149 = v351;
        *(_BYTE *)(v146 + 104) = 4;
        goto LABEL_212;
      }
    }
    v29 = v34;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)v333 = &v354;
      *(_QWORD *)&v333[8] = sub_140ED78B0;
      *(_QWORD *)&v333[16] = &v351;
      *(_QWORD *)&v333[24] = sub_1416E8600;
      *(_QWORD *)&v333[32] = v331;
      *(_QWORD *)&v333[40] = sub_1400015F0;
      *(_QWORD *)&v283[48] = 2;
      *(_QWORD *)&v283[56] = aCodexmateLibCo_49;
      *(_QWORD *)&v283[64] = 45;
      *(_QWORD *)&v283[80] = &unk_141A9B843;
      *(_QWORD *)&v283[88] = v333;
      *(_QWORD *)v283 = 0;
      *(_QWORD *)&v283[8] = aCodexmateLibCo_49;
      *(_OWORD *)&v283[16] = 0x2Du;
      *(_QWORD *)&v283[32] = aSrcCoreRelayRo_1;
      *(_QWORD *)&v283[40] = 35;
      *(_QWORD *)&v283[72] = 0x17D00000001LL;
      v348 = 1;
      v347 = 1;
      sub_141503E20(&v350, v34);
    }
    v81 = _mm_loadu_si128((const __m128i *)&v331[8]);
    v82 = _mm_loadu_si128(&v330);
    v348 = 1;
    v347 = 1;
    sub_1407D2B10(
      (__int64)v34,
      (__int64 (__fastcall *)())a2,
      v354,
      (__int64)&unk_141A9B8A0,
      8,
      v82.m128i_i64[0],
      v82.m128i_i64[1],
      v81.m128i_i64[0],
      v81.m128i_i64[1],
      0);
    if ( *(_QWORD *)v283 == -1 )
    {
      v348 = 1;
      v347 = 1;
      sub_1407B9160(*(_QWORD *)&v283[8]);
    }
    else
    {
      *(_QWORD *)&v333[88] = *(_QWORD *)&v283[88];
      *(_OWORD *)&v333[72] = *(_OWORD *)&v283[72];
      v83 = _mm_loadu_si128((const __m128i *)&v283[8]);
      v84 = _mm_loadu_si128((const __m128i *)&v283[24]);
      *(_OWORD *)&v333[56] = *(_OWORD *)&v283[56];
      *(_OWORD *)&v333[40] = *(_OWORD *)&v283[40];
      *(__m128i *)&v333[24] = v84;
      *(__m128i *)&v333[8] = v83;
      *(_QWORD *)v333 = *(_QWORD *)v283;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v321.m256i_i64[0] = (__int64)v333;
        v321.m256i_i64[1] = (__int64)sub_140D76130;
        *(_QWORD *)&v283[48] = 2;
        *(_QWORD *)&v283[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v283[64] = 45;
        *(_QWORD *)&v283[80] = &unk_141AA1920;
        *(_QWORD *)&v283[88] = &v321;
        *(_QWORD *)v283 = 0;
        *(_QWORD *)&v283[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v283[16] = 0x2Du;
        *(_QWORD *)&v283[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v283[40] = 35;
        *(_QWORD *)&v283[72] = 0x22E00000001LL;
        sub_141503E20(&v350, v34);
      }
      v348 = 1;
      v347 = 1;
      sub_140D8A3A0(v333);
    }
    if ( *(_QWORD *)v331 )
      sub_140001660(*(_QWORD *)&v331[8], *(_QWORD *)v331, 1);
    v85 = (_QWORD *)(v64 + 8);
    a1 = v320;
    do
    {
      v86 = *(v85 - 1);
      if ( v86 )
        sub_140001660(*v85, v86, 1);
      v85 += 4;
      --v63;
    }
    while ( v63 );
    if ( v279 )
      sub_140001660(v64, 32 * v279, 8);
    sub_1401B0D60(&v312[64]);
    if ( *(_DWORD *)v312 != 2 )
      sub_140D8A7D0(v312);
    v87 = v317;
    v88 = v318;
    if ( v318 )
    {
      v89 = (_QWORD *)(v317 + 8);
      do
      {
        v24 = *(v89 - 1);
        if ( v24 )
          sub_140001660(*v89, v24, 1);
        v89 += 3;
        --v88;
      }
      while ( v88 );
    }
    if ( v316 )
      sub_140001660(v87, 24 * v316, 8);
    v28 = v282;
    if ( (v319 & 1) != 0 )
      goto LABEL_183;
  }
  v321.m256i_i64[2] = v264;
  *(__m128i *)v321.m256i_i8 = _mm_loadu_si128(&v263);
  *(_QWORD *)v283 = v331;
  *(_QWORD *)&v283[8] = sub_1400015F0;
  v340 = 1;
  sub_1416DAFA0(v227, &unk_141A9B806, v283);
  v146 = v320;
  v340 = 1;
  sub_1401E7610(&v321, v227);
  sub_1419234B0(v333, v262, 136);
  v336 = (unsigned __int128)_mm_load_si128((const __m128i *)&v321);
  v337 = v321.m256i_i64[2];
  v340 = 0;
  sub_140DB21C0(
    (__int64)v283,
    (__int64)a2,
    v354,
    v330.m128i_i64[0],
    v330.m128i_i64[1],
    (__int64 *)v333,
    (__int64)a10,
    a11,
    &v244);
  if ( *(_DWORD *)v283 == -1 )
  {
    *(_OWORD *)(v146 + 88) = *(_OWORD *)&v283[88];
    *(_OWORD *)(v146 + 72) = *(_OWORD *)&v283[72];
    v21 = _mm_loadu_si128((const __m128i *)&v283[8]);
    v177 = _mm_loadu_si128((const __m128i *)&v283[24]);
    v178 = *(_OWORD *)&v283[40];
    *(_OWORD *)(v146 + 56) = *(_OWORD *)&v283[56];
    *(_OWORD *)(v146 + 40) = v178;
    *(__m128i *)(v146 + 24) = v177;
    *(__m128i *)(v146 + 8) = v21;
    v149 = v351;
    *(_BYTE *)(v146 + 104) = 5;
LABEL_212:
    *(_BYTE *)(v146 + 105) = v149;
    *(_QWORD *)v146 = -1;
    goto LABEL_243;
  }
  *(double *)v21.m128i_i64 = sub_1419234B0(v146, v283, 168);
LABEL_243:
  if ( *(_QWORD *)v331 )
    *(double *)v21.m128i_i64 = sub_140001660(*(_QWORD *)&v331[8], *(_QWORD *)v331, 1);
  v169 = (_QWORD *)(v64 + 8);
  do
  {
    v170 = *(v169 - 1);
    if ( v170 )
      *(double *)v21.m128i_i64 = sub_140001660(*v169, v170, 1);
    v169 += 4;
    --v63;
  }
  while ( v63 );
  if ( v279 )
    *(double *)v21.m128i_i64 = sub_140001660(v64, 32 * v279, 8);
  if ( !v72 )
  {
    sub_140D892B0(v312);
    sub_1402346F0(&v316);
    if ( v316 )
    {
      v171 = v317;
      v172 = 24 * v316;
LABEL_304:
      *(double *)v21.m128i_i64 = sub_140001660(v171, v172, 8);
    }
  }
  return *(double *)v21.m128i_i64;
}
