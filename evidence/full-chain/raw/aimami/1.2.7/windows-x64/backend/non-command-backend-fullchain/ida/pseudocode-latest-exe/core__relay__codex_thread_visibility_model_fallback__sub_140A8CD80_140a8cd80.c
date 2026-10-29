// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_model_fallback.rs | ea 0x140a8cd80 | successor of pre-update 0x140c90350 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140A8CD80(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r12
  __int64 i; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm7
  __int64 v23; // r15
  __int64 v24; // rbx
  _QWORD *j; // rdx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm8
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // r14
  __int64 *v40; // r13
  __int64 v41; // r15
  __int64 v42; // r12
  unsigned __int64 v43; // rsi
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  unsigned __int64 v52; // rax
  __m128i v53; // xmm9
  int v56; // eax
  bool v57; // zf
  __int64 k; // rdx
  unsigned __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rdi
  __m128i v62; // kr00_16
  __m128i v63; // xmm0
  __m128i v64; // xmm8
  __int64 v65; // rbx
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __int64 v68; // rdi
  __int64 v69; // rbx
  _QWORD *v70; // rsi
  char v71; // al
  char v72; // al
  __int64 v73; // rbx
  __int64 v74; // rsi
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rbx
  __int64 v80; // rdx
  unsigned __int8 v81; // r9
  __int64 v82; // r8
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __m128i v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdi
  __m128i *v92; // rax
  __int64 v93; // rdi
  int v94; // edi
  unsigned int v95; // esi
  __int64 v96; // rbx
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  int v99; // edi
  unsigned int v100; // esi
  __int64 v101; // rbx
  unsigned __int64 v102; // rdi
  __m128i v103; // xmm0
  _BYTE *v104; // r12
  unsigned __int8 v105; // r14
  __m128i v106; // xmm0
  __int64 v107; // rax
  __int64 v108; // rax
  __m128i v109; // xmm0
  char v110; // bl
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rdi
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  char v117; // si
  __int64 v118; // rdx
  __int64 v119; // rax
  void *v120; // rdi
  __int64 v121; // rbx
  __m128i v122; // xmm0
  int v123; // r14d
  unsigned int v124; // esi
  __int64 v125; // rdi
  int v126; // r14d
  unsigned int v127; // edi
  __int64 v128; // rbx
  unsigned __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // r13
  int v132; // edx
  int v133; // r8d
  __int64 v134; // rax
  __m128i v135; // xmm8
  int v138; // eax
  _QWORD *m; // rdx
  unsigned __int64 v140; // rax
  __m128i v141; // kr70_16
  __m128i v142; // xmm0
  __m128i v143; // xmm7
  __int64 v144; // rsi
  unsigned int v145; // eax
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rcx
  __m128i si128; // xmm0
  __int128 v150; // xmm1
  __int128 v151; // xmm2
  __int64 v152; // rdx
  __int64 v153; // rcx
  _BYTE *v154; // rax
  __m128i *v155; // rdi
  __int64 v156; // rsi
  __int64 v157; // rdi
  unsigned __int64 v158; // rdx
  __int64 v159; // rcx
  char v160; // r14
  unsigned __int64 v161; // rax
  __int64 v162; // rsi
  __int64 v163; // r15
  __m128i v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm2
  __int64 v167; // rax
  __int64 v168; // rsi
  _QWORD *v169; // rdi
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 v172; // rdx
  __int64 v174; // rdi
  __int64 v175; // rsi
  __int64 v176; // r14
  const __m128i *v177; // r15
  __m128i v179; // xmm0
  __int64 v180; // rax
  __int64 v181; // rdx
  unsigned __int64 v182; // rax
  unsigned __int64 v183; // rdi
  unsigned __int64 v184; // rdi
  _QWORD *v185; // rsi
  __int64 v186; // rdx
  __int64 v187; // rdx
  __int64 v188; // rdx
  __int64 v189; // rax
  _OWORD *v190; // rcx
  __m128i v191; // xmm0
  __int128 v192; // xmm1
  __int128 v193; // xmm2
  __m128i v194; // xmm0
  __int64 v196; // rdi
  __int64 v197; // rsi
  __int64 v198; // r14
  const __m128i *v199; // r15
  __m128i v201; // xmm0
  __int64 v202; // rax
  __int64 v203; // rdx
  unsigned __int64 v204; // rax
  __int64 v205; // rdi
  _QWORD *v206; // rdi
  _QWORD *v207; // rsi
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rdx
  __int64 v211; // rbx
  __int64 v212; // r13
  __int64 v213; // rsi
  unsigned __int64 v214; // r15
  __int64 v215; // r12
  __int64 n; // rbx
  __int64 v217; // rdx
  __int64 v218; // rax
  __int64 v219; // rbx
  _BYTE v220[24]; // [rsp+48h] [rbp-38h] BYREF
  __m128i v221; // [rsp+60h] [rbp-20h] BYREF
  __int128 v222; // [rsp+70h] [rbp-10h]
  __int128 v223; // [rsp+80h] [rbp+0h]
  _OWORD v224[5]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v225; // [rsp+E0h] [rbp+60h]
  __int64 *v226; // [rsp+E8h] [rbp+68h]
  __int64 v227; // [rsp+F0h] [rbp+70h]
  __int64 v228; // [rsp+F8h] [rbp+78h]
  _QWORD v229[2]; // [rsp+100h] [rbp+80h] BYREF
  __m128i v230; // [rsp+110h] [rbp+90h] BYREF
  __int128 v231; // [rsp+120h] [rbp+A0h]
  __int128 v232; // [rsp+130h] [rbp+B0h]
  __int64 v233; // [rsp+148h] [rbp+C8h]
  _QWORD *v234; // [rsp+150h] [rbp+D0h]
  __int64 v235; // [rsp+158h] [rbp+D8h] BYREF
  char v236; // [rsp+160h] [rbp+E0h]
  unsigned int v237; // [rsp+161h] [rbp+E1h]
  unsigned __int16 v238; // [rsp+165h] [rbp+E5h]
  unsigned __int8 v239; // [rsp+167h] [rbp+E7h]
  __int64 v240; // [rsp+168h] [rbp+E8h]
  __int64 v241; // [rsp+170h] [rbp+F0h]
  __int64 v242; // [rsp+178h] [rbp+F8h]
  __int64 v243; // [rsp+180h] [rbp+100h]
  __int64 v244; // [rsp+188h] [rbp+108h]
  __m128i v245; // [rsp+190h] [rbp+110h]
  __int128 v246; // [rsp+1A0h] [rbp+120h]
  _BYTE v247[24]; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v248; // [rsp+1C8h] [rbp+148h]
  __m128i v249; // [rsp+1E8h] [rbp+168h]
  __int64 v250; // [rsp+1F8h] [rbp+178h]
  __int64 v251; // [rsp+200h] [rbp+180h]
  __int64 v252; // [rsp+208h] [rbp+188h]
  __m128i v253; // [rsp+210h] [rbp+190h] BYREF
  __int128 v254; // [rsp+220h] [rbp+1A0h]
  _QWORD v255[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v256; // [rsp+240h] [rbp+1C0h]
  __int64 v257; // [rsp+248h] [rbp+1C8h]
  __int64 v258; // [rsp+250h] [rbp+1D0h]
  __int64 v259; // [rsp+258h] [rbp+1D8h]
  __m128i v260; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v261; // [rsp+270h] [rbp+1F0h] BYREF
  __m128i v262; // [rsp+280h] [rbp+200h] BYREF
  __int128 v263; // [rsp+290h] [rbp+210h]
  __m128i v264; // [rsp+2A0h] [rbp+220h]
  __int128 v265; // [rsp+2B0h] [rbp+230h]
  __int128 v266; // [rsp+2C0h] [rbp+240h]
  _QWORD *v267; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v268; // [rsp+2D8h] [rbp+258h]
  _QWORD *v269; // [rsp+2E0h] [rbp+260h]
  __int64 (__fastcall **v270)(); // [rsp+2E8h] [rbp+268h]
  __m128i v271; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v272; // [rsp+300h] [rbp+280h]
  __int128 v273; // [rsp+310h] [rbp+290h]
  __int128 v274; // [rsp+320h] [rbp+2A0h]
  __int128 v275; // [rsp+330h] [rbp+2B0h]
  __int128 v276; // [rsp+340h] [rbp+2C0h]
  __int128 v277; // [rsp+350h] [rbp+2D0h]
  __m128i v278; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v279; // [rsp+370h] [rbp+2F0h]
  __m128i v280; // [rsp+380h] [rbp+300h] BYREF
  __int128 v281; // [rsp+390h] [rbp+310h]
  __int128 v282; // [rsp+3A0h] [rbp+320h]
  __int64 v283; // [rsp+3B8h] [rbp+338h]
  __m128i v284; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v285; // [rsp+3D0h] [rbp+350h]
  __m128i v286; // [rsp+3E0h] [rbp+360h]
  __int128 v287; // [rsp+3F0h] [rbp+370h]
  __int64 v288; // [rsp+400h] [rbp+380h]
  __int64 v289; // [rsp+408h] [rbp+388h] BYREF
  __int64 v290; // [rsp+410h] [rbp+390h]
  __int64 v291; // [rsp+418h] [rbp+398h]
  __int64 v292; // [rsp+420h] [rbp+3A0h]
  __int64 v293; // [rsp+428h] [rbp+3A8h]
  __int64 v294; // [rsp+430h] [rbp+3B0h]
  __int64 v295; // [rsp+438h] [rbp+3B8h]
  __int64 v296; // [rsp+440h] [rbp+3C0h]
  __int64 v297; // [rsp+448h] [rbp+3C8h]
  __int64 v298; // [rsp+450h] [rbp+3D0h]
  _BYTE *v299; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v300; // [rsp+460h] [rbp+3E0h]
  __int64 v301; // [rsp+468h] [rbp+3E8h]
  __int64 (__fastcall *v302)(_QWORD, _QWORD); // [rsp+470h] [rbp+3F0h]
  _QWORD *v303; // [rsp+478h] [rbp+3F8h]
  __int64 v304; // [rsp+480h] [rbp+400h]
  __int64 v305; // [rsp+488h] [rbp+408h]
  __int64 v306; // [rsp+490h] [rbp+410h]
  __int64 v307; // [rsp+498h] [rbp+418h]
  __int64 v308; // [rsp+4A0h] [rbp+420h]
  __int64 v309; // [rsp+4A8h] [rbp+428h]
  unsigned __int64 v310; // [rsp+4B0h] [rbp+430h]
  __int64 v311; // [rsp+4B8h] [rbp+438h]
  __m128i v312; // [rsp+4C0h] [rbp+440h] BYREF
  __m256i v313; // [rsp+4D0h] [rbp+450h]
  __m128i v314; // [rsp+4F0h] [rbp+470h]
  __int128 v315; // [rsp+500h] [rbp+480h]
  __int128 v316; // [rsp+510h] [rbp+490h]
  __int128 v317; // [rsp+520h] [rbp+4A0h]
  __int128 v318; // [rsp+530h] [rbp+4B0h]
  __int128 v319; // [rsp+540h] [rbp+4C0h]
  __m256i v320; // [rsp+550h] [rbp+4D0h] BYREF
  _BYTE v321[48]; // [rsp+570h] [rbp+4F0h]
  __int128 v322; // [rsp+5A0h] [rbp+520h]
  __int64 v323; // [rsp+5B8h] [rbp+538h]
  __int64 v324; // [rsp+5C0h] [rbp+540h]
  __int64 v325; // [rsp+5C8h] [rbp+548h]
  __int64 v326; // [rsp+5D0h] [rbp+550h]
  unsigned __int64 v327; // [rsp+5D8h] [rbp+558h]
  unsigned __int64 v328; // [rsp+5E0h] [rbp+560h]
  __int64 v329; // [rsp+5E8h] [rbp+568h]
  _BYTE v330[112]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v331; // [rsp+660h] [rbp+5E0h]
  __int128 v332; // [rsp+670h] [rbp+5F0h]
  __int64 v333; // [rsp+688h] [rbp+608h]
  __int64 v334; // [rsp+690h] [rbp+610h]
  _QWORD *v335; // [rsp+698h] [rbp+618h]
  __int64 v336; // [rsp+6A0h] [rbp+620h]
  __int64 v337; // [rsp+6A8h] [rbp+628h]
  char v338; // [rsp+6B1h] [rbp+631h]
  char v339; // [rsp+6B2h] [rbp+632h]
  char v340; // [rsp+6B3h] [rbp+633h]
  char v341; // [rsp+6B4h] [rbp+634h]
  char v342; // [rsp+6B5h] [rbp+635h]
  char v343; // [rsp+6B6h] [rbp+636h]
  char v344; // [rsp+6B7h] [rbp+637h] BYREF
  __int64 v345; // [rsp+6B8h] [rbp+638h]

  v345 = -2;
  v4 = *(_QWORD *)(a2 + 776);
  v5 = *(_QWORD *)(a2 + 784);
  sub_140A8C3E0(v330, v4, v5);
  v6 = *(_QWORD *)v330;
  v312 = *(__m128i *)&v330[8];
  *(_OWORD *)v313.m256i_i8 = *(_OWORD *)&v330[24];
  v283 = a1;
  if ( *(_QWORD *)v330 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v330[88];
    v7 = *(_OWORD *)&v330[40];
    v8 = *(_OWORD *)&v330[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v330[72];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 40) = v7;
    v9 = _mm_load_si128(&v312);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v313.m256i_i8;
    *(__m128i *)(a1 + 8) = v9;
    *(_QWORD *)a1 = v6;
    return v283;
  }
  v324 = v5;
  v328 = v4;
  v246 = *(_OWORD *)v313.m256i_i8;
  v245 = _mm_load_si128(&v312);
  v10 = v313.m256i_i64[0];
  if ( !v313.m256i_i64[0] )
  {
    *(_OWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    v12 = v245.m128i_i64[1];
LABEL_9:
    if ( !v245.m128i_i64[0] )
      return v283;
    v13 = 80 * v245.m128i_i64[0];
    v14 = v12;
LABEL_11:
    sub_140001660(v14, v13, 8);
    return v283;
  }
  sub_1407E3360(v330, a2);
  if ( *(_QWORD *)v330 == -2 )
  {
    v276 = *(_OWORD *)&v330[88];
    v275 = *(_OWORD *)&v330[72];
    v274 = *(_OWORD *)&v330[56];
    v273 = *(_OWORD *)&v330[40];
    v272 = *(_OWORD *)&v330[24];
    v271 = _mm_loadu_si128((const __m128i *)&v330[8]);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v320.m256i_i64[0] = (__int64)&v271;
      v320.m256i_i64[1] = (__int64)sub_140D76130;
      v314.m128i_i64[0] = 2;
      v314.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
      *(_QWORD *)&v315 = 67;
      *(_QWORD *)&v316 = &unk_141A6C80D;
      *((_QWORD *)&v316 + 1) = &v320;
      v312.m128i_i64[0] = 0;
      v312.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
      *(_OWORD *)v313.m256i_i8 = 0x43u;
      v313.m256i_i64[2] = (__int64)aSrcCoreRelayCo_3;
      v313.m256i_i64[3] = 56;
      *((_QWORD *)&v315 + 1) = 0xCD00000001LL;
      sub_141503E20(&v344, &v312);
    }
    *(_OWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    sub_140A1A150(&v271);
    v12 = v245.m128i_i64[1];
LABEL_272:
    v185 = (_QWORD *)(v12 + 56);
    do
    {
      v186 = *(v185 - 7);
      if ( v186 )
        sub_140001660(*(v185 - 6), v186, 1);
      v187 = *(v185 - 4);
      if ( v187 )
        sub_140001660(*(v185 - 3), v187, 1);
      v188 = *(v185 - 1);
      if ( v188 )
        sub_140001660(*v185, v188, 1);
      v185 += 10;
      --v10;
    }
    while ( v10 );
    goto LABEL_9;
  }
  v296 = a2;
  v224[4] = v331;
  v224[3] = *(_OWORD *)&v330[96];
  v224[2] = *(_OWORD *)&v330[80];
  v224[1] = *(_OWORD *)&v330[64];
  v224[0] = *(_OWORD *)&v330[48];
  v223 = *(_OWORD *)&v330[32];
  v222 = *(_OWORD *)&v330[16];
  v221 = _mm_loadu_si128((const __m128i *)v330);
  v261 = 0;
  v260 = 0;
  v289 = 0;
  v290 = 8;
  v291 = 0;
  v16 = v245.m128i_i64[1];
  v333 = v245.m128i_i64[1] + 80 * v10;
  v336 = 0;
LABEL_14:
  for ( i = v16; i != v333; i += 80 )
  {
    v16 = i + 80;
    if ( !*(_QWORD *)&v224[0] )
    {
LABEL_28:
      v11 = v336 + 1;
      v336 = v11;
      v260.m128i_i64[1] = v11;
      if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v312.m128i_i64[0] = i;
        v312.m128i_i64[1] = (__int64)sub_1400015F0;
        v313.m256i_i64[0] = i + 24;
        v313.m256i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)&v330[48] = 3;
        *(_QWORD *)&v330[56] = aCodexmateLibCo_42;
        *(_QWORD *)&v330[64] = 67;
        *(_QWORD *)&v330[80] = &unk_141A6C71E;
        *(_QWORD *)&v330[88] = &v312;
        *(_QWORD *)v330 = 0;
        *(_QWORD *)&v330[8] = aCodexmateLibCo_42;
        *(_OWORD *)&v330[16] = 0x43u;
        *(_QWORD *)&v330[32] = aSrcCoreRelayCo_3;
        *(_QWORD *)&v330[40] = 56;
        *(_QWORD *)&v330[72] = 0xDB00000001LL;
        sub_141503E20(&v344, v330);
      }
      goto LABEL_14;
    }
    v18 = sub_1406CECD0((char *)v224 + 8, i + 24);
    _RAX = v18 >> 57;
    v20 = v223;
    v21 = _mm_cvtsi32_si128(v18 >> 57);
    v22 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v21, v21), 0), 68);
    v23 = *(_QWORD *)(i + 32);
    v24 = *(_QWORD *)(i + 40);
    for ( j = nullptr; ; j += 2 )
    {
      v26 = v20 & v18;
      v27 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v222 + 1) + v26));
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v22));
      if ( _R12D )
        break;
LABEL_24:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL));
      v16 = i + 80;
      if ( (_DWORD)_RAX )
        goto LABEL_28;
      v18 = (unsigned __int64)j + v26 + 16;
    }
    v303 = (_QWORD *)v20;
    v335 = j;
    while ( 1 )
    {
      __asm { tzcnt   eax, r12d }
      v29 = -3LL * (v20 & (v26 + _RAX));
      if ( v24 == *(_QWORD *)(*((_QWORD *)&v222 + 1) + 8 * v29 - 8)
        && !(unsigned int)sub_141923B40(v23, *(_QWORD *)(*((_QWORD *)&v222 + 1) + 8 * v29 - 16), v24) )
      {
        break;
      }
      _RAX = (unsigned int)(_R12D - 1);
      LOWORD(_RAX) = _R12D & (_R12D - 1);
      _R12D = _RAX;
      v20 = (unsigned __int64)v303;
      j = v335;
      if ( !(_WORD)_RAX )
        goto LABEL_24;
    }
    v30 = v291;
    if ( v291 == v289 )
      sub_1419395F0(&v289);
    *(_QWORD *)(v290 + 8 * v30) = i;
    v291 = v30 + 1;
  }
  v31 = sub_1416AE140(v11);
  v36 = v31;
  if ( *(_BYTE *)(v31 + 16) == 1 )
  {
    v37 = *(_QWORD *)v31;
    v38 = *(_QWORD *)(v36 + 8);
  }
  else
  {
    v37 = sub_1416C5230(v33, v32, v34, v35);
    *(_QWORD *)v36 = v37;
    *(_QWORD *)(v36 + 8) = v38;
    *(_BYTE *)(v36 + 16) = 1;
  }
  *(_QWORD *)v36 = v37 + 1;
  v254 = xmmword_141A68E30;
  v253 = _mm_loadu_si128((const __m128i *)&off_141A68E20);
  v255[0] = v37;
  v255[1] = v38;
  v39 = v330;
  sub_140A2C460(v330, v296);
  v40 = *(__int64 **)&v330[8];
  v41 = 32LL * *(_QWORD *)&v330[16] + *(_QWORD *)&v330[8];
  v225 = *(_QWORD *)&v330[8];
  v296 = *(_QWORD *)v330;
  v227 = *(_QWORD *)v330;
  v228 = v41;
  v42 = v41 - 32;
  v233 = *(_QWORD *)&v330[8];
LABEL_33:
  v43 = v42 - (_QWORD)v40;
  v44 = v40 + 5;
  while ( 1 )
  {
    if ( v40 == (__int64 *)v41 )
      goto LABEL_211;
    v46 = v40;
    v40 += 4;
    v226 = v40;
    if ( *v46 == -1 )
      break;
    v333 = *v46;
    v47 = v46[2];
    v336 = v46[1];
    sub_1416C49D0(v330, v336, v47);
    if ( *(_DWORD *)v330 != 2 )
    {
      v48 = v291;
      if ( !v291 )
        goto LABEL_203;
      v303 = (_QWORD *)v290;
      sub_1407E1670((__int64)v330, v336, v47);
      if ( v330[104] != 0xFF )
      {
        v277 = *(_OWORD *)&v330[96];
        v276 = *(_OWORD *)&v330[80];
        v275 = *(_OWORD *)&v330[64];
        v49 = _mm_loadu_si128((const __m128i *)v330);
        v274 = *(_OWORD *)&v330[48];
        v273 = *(_OWORD *)&v330[32];
        v272 = *(_OWORD *)&v330[16];
        v271 = v49;
        sub_1407D8740(&v320);
        if ( v320.m256i_i32[0] != -1 )
        {
          v316 = v322;
          v315 = *(_OWORD *)&v321[32];
          v50 = _mm_loadu_si128((const __m128i *)&v320);
          v314 = *(__m128i *)&v321[16];
          *(_OWORD *)&v313.m256i_u64[2] = *(_OWORD *)v321;
          *(_OWORD *)v313.m256i_i8 = *(_OWORD *)&v320.m256i_u64[2];
          v312 = v50;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            sub_1407D8200(&v278, v336, v47);
            *(_QWORD *)v247 = &v278;
            *(_QWORD *)&v247[8] = sub_1400015F0;
            *(_QWORD *)&v247[16] = &v312;
            v248.m256i_i64[0] = (__int64)sub_140D76130;
            *(_QWORD *)&v330[48] = 2;
            *(_QWORD *)&v330[56] = aCodexmateLibCo_42;
            *(_QWORD *)&v330[64] = 67;
            *(_QWORD *)&v330[80] = &unk_141A6C64F;
            *(_QWORD *)&v330[88] = v247;
            *(_QWORD *)v330 = 0;
            *(_QWORD *)&v330[8] = aCodexmateLibCo_42;
            *(_OWORD *)&v330[16] = 0x43u;
            *(_QWORD *)&v330[32] = aSrcCoreRelayCo_3;
            *(_QWORD *)&v330[40] = 56;
            *(_QWORD *)&v330[72] = 0x13400000001LL;
            sub_141503E20(&v344, v330);
            if ( v278.m128i_i64[0] )
              sub_140001660(v278.m128i_i64[1], v278.m128i_i64[0], 1);
          }
          ++*((_QWORD *)&v261 + 1);
          sub_140A1A150(&v312);
          goto LABEL_202;
        }
        if ( !v320.m256i_i8[8] )
        {
LABEL_202:
          sub_140A18DE0(&v271);
          goto LABEL_203;
        }
        v234 = &v303[v48];
        while ( 1 )
        {
LABEL_62:
          if ( v303 == v234 )
          {
            sub_1407E5410(&v271, aModelRestore_0, 13);
            sub_140A18DE0(&v271);
            goto LABEL_203;
          }
          v60 = (_QWORD *)*v303++;
          v335 = v60;
          if ( !*((_QWORD *)&v254 + 1) )
            break;
          v59 = sub_1406CECD0(v255, v60);
          v61 = v42;
          v62 = v253;
          v63 = _mm_cvtsi32_si128(v59 >> 57);
          v64 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v63, v63), 0), 68);
          HIDWORD(_RCX) = HIDWORD(v335);
          v325 = v335[1];
          v65 = v335[2];
          for ( k = 0; ; k += 16 )
          {
            v52 = v62.m128i_i64[1] & v59;
            v53 = _mm_loadu_si128((const __m128i *)(v62.m128i_i64[0] + v52));
            _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v53, v64));
            if ( _R12D )
              break;
LABEL_59:
            _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v53, (__m128i)-1LL));
            if ( (_DWORD)_RCX )
            {
              v39 = v330;
              v42 = v61;
              goto LABEL_66;
            }
            v59 = k + v52 + 16;
          }
          v310 = v52;
          v311 = k;
          while ( 1 )
          {
            __asm { tzcnt   ecx, r12d }
            _RCX = -(__int64)(v62.m128i_i64[1] & (v52 + _RCX));
            if ( v65 == *(_QWORD *)(v62.m128i_i64[0] + 24 * _RCX - 8)
              && !(unsigned int)sub_141923B40(v325, *(_QWORD *)(v62.m128i_i64[0] + 24 * _RCX - 16), v65) )
            {
              break;
            }
            v56 = _R12D - 1;
            LOWORD(v56) = _R12D & (_R12D - 1);
            v57 = (_WORD)v56 == 0;
            _R12D = v56;
            v52 = v310;
            k = v311;
            if ( v57 )
              goto LABEL_59;
          }
          v39 = v330;
          v42 = v61;
        }
        v325 = v60[1];
        v65 = v60[2];
LABEL_66:
        sub_140A4E000(v330, &v271, aSelectCoalesce, 149);
        v312 = *(__m128i *)&v330[8];
        v313 = *(__m256i *)&v330[24];
        v314 = *(__m128i *)&v330[56];
        if ( *(_DWORD *)v330 == 1 )
        {
          v66 = _mm_load_si128(&v312);
          v249 = v314;
          v248 = v313;
          *(__m128i *)&v247[8] = v66;
          *(_QWORD *)v247 = -1;
LABEL_85:
          if ( *(_QWORD *)&v247[8] == 0x8000000000000009uLL )
          {
            sub_140A19CC0(&v247[8]);
          }
          else
          {
            v75 = _mm_loadu_si128((const __m128i *)&v247[8]);
            v314 = v249;
            v313 = v248;
            v312 = v75;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v320.m256i_i64[0] = (__int64)v335;
              v320.m256i_i64[1] = (__int64)sub_1400015F0;
              v320.m256i_i64[2] = (__int64)&v312;
              v320.m256i_i64[3] = (__int64)sub_14142D4D0;
              *(_QWORD *)&v330[48] = 2;
              *(_QWORD *)&v330[56] = aCodexmateLibCo_42;
              *(_QWORD *)&v330[64] = 67;
              *(_QWORD *)&v330[80] = &unk_141A6C610;
              *(_QWORD *)&v330[88] = &v320;
              *(_QWORD *)v330 = 0;
              *(_QWORD *)&v330[8] = aCodexmateLibCo_42;
              *(_OWORD *)&v330[16] = 0x43u;
              *(_QWORD *)&v330[32] = aSrcCoreRelayCo_3;
              *(_QWORD *)&v330[40] = 56;
              *(_QWORD *)&v330[72] = 0x15700000001LL;
              sub_141503E20(&v344, v330);
            }
            ++*((_QWORD *)&v261 + 1);
            sub_140A19CC0(&v312);
          }
          goto LABEL_62;
        }
        v67 = _mm_load_si128(&v312);
        *(__m128i *)&v321[16] = v314;
        *(_OWORD *)v321 = *(_OWORD *)&v313.m256i_u64[2];
        *(_OWORD *)&v320.m256i_u64[2] = *(_OWORD *)v313.m256i_i8;
        *(__m128i *)v320.m256i_i8 = v67;
        *(_QWORD *)v330 = v325;
        *(_QWORD *)&v330[8] = v65;
        sub_140900120(v247, &v320, v330);
        sub_140A19E50(&v320);
        v325 = *(_QWORD *)v247;
        if ( *(_QWORD *)v247 == -1 )
          goto LABEL_85;
        v310 = *(_QWORD *)&v247[8];
        v68 = *(_QWORD *)&v247[16];
        v306 = v248.m256i_i64[1];
        v311 = v248.m256i_i64[0];
        v297 = v248.m256i_i64[3];
        v337 = v248.m256i_i64[2];
        v298 = v249.m128i_i64[1];
        v326 = v249.m128i_i64[0];
        v305 = v250;
        v292 = v251;
        v69 = v252;
        v70 = v335;
        if ( (*(_QWORD *)&v247[16] != v335[8] || (unsigned int)sub_141923B40(v310, v335[7], *(_QWORD *)&v247[16]))
          && (v68 != v70[5] || (unsigned int)sub_141923B40(v310, v70[4], v68))
          || (v71 = sub_1407DF9B0(v306, v337), v70 = v335, !v71)
          || (v72 = sub_140842DD0(aSubagent, 10, v292, v69), v70 = v335, v72) )
        {
          *(_QWORD *)&v261 = v261 + 1;
          sub_1416DB410(v330, v70);
          sub_140871180((__int64)&v253, v330);
          v73 = v329;
          v74 = v304;
          goto LABEL_76;
        }
        sub_1408FEA60(v326, v298);
        if ( v76 )
        {
          v77 = v335[1];
          v78 = v335[2];
          v242 = v335[4];
          v256 = v335[5];
          v79 = v335[7];
          v241 = v335[8];
          v229[0] = v77;
          v229[1] = v78;
          sub_140A934F0(v330, v326, v298);
          if ( *(_QWORD *)&v330[32] == -1 )
          {
            v337 = *(_QWORD *)v330;
            v320.m256i_i64[0] = *(_QWORD *)v330;
            v312.m128i_i64[0] = 0;
            v312.m128i_i64[1] = 1;
            v313.m256i_i64[0] = 0;
            *(_QWORD *)&v330[16] = 1610612768;
            *(_QWORD *)v330 = &v312;
            *(_QWORD *)&v330[8] = &off_141A6D298;
            if ( (unsigned __int8)sub_1416EA080(&v320, v330) )
              sub_14196B5F0(
                (unsigned int)aADisplayImplem_6,
                55,
                (unsigned int)&v344,
                (unsigned int)&unk_141A69A18,
                (__int64)&off_141A6D350);
            v80 = v312.m128i_i64[0];
            v81 = v312.m128i_u8[8];
            v94 = v312.m128i_u8[15];
            v95 = *(unsigned __int16 *)((char *)&v312.m128i_u16[6] + 1);
            v96 = *(unsigned int *)((char *)&v312.m128i_u32[2] + 1);
            v323 = v313.m256i_i64[0];
            if ( (unsigned int)(v337 & 3) - 2 >= 2 && (v337 & 3) != 0 )
            {
              LOBYTE(v327) = v312.m128i_i8[8];
              v334 = v312.m128i_i64[0];
              *(_QWORD *)&v330[8] = v337 - 1;
              v330[0] = 3;
              sub_1416EBAD0(&v330[8]);
              v80 = v334;
              v81 = v327;
            }
LABEL_118:
            v84 = ((unsigned __int64)((v94 << 16) | v95) << 32) | v96;
LABEL_164:
            v327 = v84;
            v93 = (v84 << 8) | v81;
            v73 = v329;
            v74 = v304;
            v108 = v323;
            goto LABEL_165;
          }
          if ( *(_DWORD *)&v330[32] == 2 )
          {
            v243 = v79;
            v82 = -1;
            v73 = v329;
            v83 = v304;
            v84 = v327;
          }
          else
          {
            if ( *(_QWORD *)v330 )
              sub_140001660(*(_QWORD *)&v330[8], *(_QWORD *)v330, 1);
            sub_1407E2C60((unsigned int)v330, v326, v298, v77, v78);
            if ( *(_QWORD *)v330 == -1 )
            {
              v337 = v42;
              v322 = *(_OWORD *)&v330[88];
              *(_OWORD *)&v321[32] = *(_OWORD *)&v330[72];
              v103 = _mm_loadu_si128((const __m128i *)&v330[8]);
              *(_OWORD *)&v321[16] = *(_OWORD *)&v330[56];
              *(_OWORD *)v321 = *(_OWORD *)&v330[40];
              *(_OWORD *)&v320.m256i_u64[2] = *(_OWORD *)&v330[24];
              *(__m128i *)v320.m256i_i8 = v103;
              v299 = nullptr;
              v300 = 1;
              v301 = 0;
              *(_QWORD *)&v285 = 1610612768;
              v284.m128i_i64[0] = (__int64)&v299;
              v284.m128i_i64[1] = (__int64)&off_141A6D298;
              if ( (unsigned __int8)sub_140D76130(&v320, &v284) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_6,
                  55,
                  (unsigned int)&v344,
                  (unsigned int)&unk_141A69A18,
                  (__int64)&off_141A6D350);
              v104 = v299;
              v105 = v300;
              v94 = HIBYTE(v300);
              v95 = *(unsigned __int16 *)((char *)&v300 + 5);
              v96 = *(unsigned int *)((char *)&v300 + 1);
              v323 = v301;
              sub_140A1A150(&v330[8]);
              v81 = v105;
              v80 = (__int64)v104;
              v39 = v330;
              v42 = v337;
              goto LABEL_118;
            }
            v319 = v332;
            v318 = v331;
            v317 = *(_OWORD *)&v330[96];
            v97 = _mm_loadu_si128((const __m128i *)&v330[32]);
            v316 = *(_OWORD *)&v330[80];
            v315 = *(_OWORD *)&v330[64];
            v314 = *(__m128i *)&v330[48];
            *(__m128i *)&v313.m256i_u64[2] = v97;
            v293 = *(_QWORD *)&v330[8];
            v313.m256i_i8[0] = v330[16];
            v313.m256i_i8[7] = v330[23];
            *(__int16 *)((char *)&v313.m256i_i16[2] + 1) = *(_WORD *)&v330[21];
            *(__int32 *)((char *)v313.m256i_i32 + 1) = *(_DWORD *)&v330[17];
            v313.m256i_i64[1] = *(_QWORD *)&v330[24];
            v307 = *(_QWORD *)v330;
            v312 = *(__m128i *)v330;
            v343 = 0;
            sub_1407DABD0(&v320, &v312, v326, v298);
            v243 = v79;
            if ( v320.m256i_i32[0] != -1 )
            {
              *(_OWORD *)&v330[80] = v322;
              *(_OWORD *)&v330[64] = *(_OWORD *)&v321[32];
              v98 = _mm_loadu_si128((const __m128i *)&v320);
              *(_OWORD *)&v330[48] = *(_OWORD *)&v321[16];
              *(_OWORD *)&v330[32] = *(_OWORD *)v321;
              *(_OWORD *)&v330[16] = *(_OWORD *)&v320.m256i_u64[2];
              *(__m128i *)v330 = v98;
              v267 = nullptr;
              v268 = 1;
              v269 = nullptr;
              v301 = 1610612768;
              v299 = &v267;
              v300 = (__int64)&off_141A6D298;
              if ( (unsigned __int8)sub_140D76130(v330, &v299) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_6,
                  55,
                  (unsigned int)&v344,
                  (unsigned int)&unk_141A69A18,
                  (__int64)&off_141A6D350);
              v334 = (__int64)v267;
              LOBYTE(v327) = v268;
              v99 = HIBYTE(v268);
              v100 = *(unsigned __int16 *)((char *)&v268 + 5);
              v101 = *(unsigned int *)((char *)&v268 + 1);
              v323 = (__int64)v269;
              v343 = 0;
              sub_140A1A150(&v320);
              v39 = v330;
              v102 = ((unsigned __int64)((v99 << 16) | v100) << 32) | v101;
LABEL_156:
              v118 = v307;
              if ( !v307 )
                goto LABEL_158;
              goto LABEL_157;
            }
            v288 = *(_QWORD *)&v321[40];
            v287 = *(_OWORD *)&v321[24];
            v286 = *(__m128i *)&v321[8];
            v109 = _mm_loadu_si128((const __m128i *)&v320.m256i_u64[1]);
            LOBYTE(v285) = v320.m256i_i8[24];
            BYTE7(v285) = v320.m256i_i8[31];
            *(_WORD *)((char *)&v285 + 5) = *(__int16 *)((char *)&v320.m256i_i16[14] + 1);
            *(_DWORD *)((char *)&v285 + 1) = *(__int32 *)((char *)&v320.m256i_i32[6] + 1);
            *((_QWORD *)&v285 + 1) = *(_QWORD *)v321;
            v284 = v109;
            v110 = sub_1407C5050(&v284);
            sub_1407792E0(&v284);
            if ( !v110 )
            {
              *(_QWORD *)v330 = v229;
              *(_QWORD *)&v330[8] = sub_140191200;
              v343 = 0;
              v39 = v330;
              sub_1416DAFA0(&v235, &unk_141A6C890, v330);
              v334 = v235;
              LOBYTE(v327) = v236;
              v102 = ((unsigned __int64)((v239 << 16) | (unsigned int)v238) << 32) | v237;
              v323 = v240;
              goto LABEL_156;
            }
            *(_QWORD *)v330 = v293;
            *(_QWORD *)&v330[8] = v313.m256i_i64[0];
            *(_OWORD *)&v330[16] = 0;
            *(_QWORD *)&v330[32] = v293;
            v111 = v313.m256i_i64[0];
            *(_QWORD *)&v330[40] = v313.m256i_i64[0];
            v340 = 1;
            sub_140D8B500(&v320, (__int128 *)v330);
            if ( v320.m256i_i8[0] == -1 )
            {
              v340 = 1;
              sub_140A29060(v330, v320.m256i_i64[1]);
              v334 = *(_QWORD *)v330;
              LOBYTE(v327) = v330[8];
              v102 = ((unsigned __int64)((v330[15] << 16) | (unsigned int)*(unsigned __int16 *)&v330[13]) << 32)
                   | *(unsigned int *)&v330[9];
              v323 = *(_QWORD *)&v330[16];
              goto LABEL_190;
            }
            v284 = *(__m128i *)v320.m256i_i8;
            v285 = *(_OWORD *)&v320.m256i_u64[2];
            v112 = sub_14166BC00(&v284, aPayloadModelPr_0, 23);
            if ( v112 )
            {
              v113 = v306;
              if ( *(_BYTE *)v112 == 3 )
              {
                v337 = *(_QWORD *)(v112 + 24);
                v113 = *(_QWORD *)(v112 + 16);
              }
            }
            else
            {
              v113 = v306;
            }
            sub_1401E7560((unsigned int)v330, v337, 0, 1, 1);
            v308 = *(_QWORD *)&v330[8];
            if ( *(_DWORD *)v330 == 1 )
              sub_14196B2DB(v308, *(_QWORD *)&v330[16]);
            v294 = *(_QWORD *)&v330[16];
            if ( v337 )
              sub_1419234B0(v294, v113, v337);
            v119 = sub_14166BC00(&v284, aPayloadModelRe_0, 31);
            if ( v119 )
            {
              v120 = *(void **)(v119 + 16);
              if ( *(_BYTE *)v119 != 3 )
                v120 = &unk_141A6C8F9;
              v121 = *(_QWORD *)(v119 + 24);
              if ( *(_BYTE *)v119 != 3 )
                v121 = 6;
            }
            else
            {
              v121 = 6;
              v120 = &unk_141A6C8F9;
            }
            sub_1401E7560((unsigned int)v330, v121, 0, 1, 1);
            v309 = *(_QWORD *)&v330[8];
            if ( *(_DWORD *)v330 == 1 )
              sub_14196B2DB(v309, *(_QWORD *)&v330[16]);
            v295 = *(_QWORD *)&v330[16];
            if ( v121 )
              sub_1419234B0(v295, v120, v121);
            sub_1407D9D50((unsigned int)&v320, v293, v111, v294, v337, v242, v256, v295, v121);
            if ( v320.m256i_i32[0] != -1 )
            {
              *(_OWORD *)&v330[80] = v322;
              *(_OWORD *)&v330[64] = *(_OWORD *)&v321[32];
              v122 = _mm_loadu_si128((const __m128i *)&v320);
              *(_OWORD *)&v330[48] = *(_OWORD *)&v321[16];
              *(_OWORD *)&v330[32] = *(_OWORD *)v321;
              *(_OWORD *)&v330[16] = *(_OWORD *)&v320.m256i_u64[2];
              *(__m128i *)v330 = v122;
              sub_140A290D0(&v299, v330);
              v334 = (__int64)v299;
              LOBYTE(v327) = v300;
              v123 = HIBYTE(v300);
              v124 = *(unsigned __int16 *)((char *)&v300 + 5);
              v125 = *(unsigned int *)((char *)&v300 + 1);
              v323 = v301;
              if ( v309 )
                sub_140001660(v295, v309, 1);
              if ( v308 )
                sub_140001660(v294, v308, 1);
              v340 = 1;
              sub_140A192F0(&v284);
              v102 = ((unsigned __int64)((v123 << 16) | v124) << 32) | v125;
LABEL_190:
              v118 = v307;
              v39 = v330;
              if ( !v307 )
              {
LABEL_158:
                if ( v314.m128i_i64[0] )
                  sub_140001660(v314.m128i_i64[1], v314.m128i_i64[0], 1);
                if ( (_QWORD)v317 != -1 && (_QWORD)v317 )
                  sub_140001660(*((_QWORD *)&v317 + 1), v317, 1);
                v84 = v102;
                v80 = v334;
                v81 = v327;
                goto LABEL_164;
              }
LABEL_157:
              sub_140001660(v293, v118, 1);
              goto LABEL_158;
            }
            v259 = v320.m256i_i64[1];
            v244 = v320.m256i_i64[3];
            v258 = v320.m256i_i64[2];
            sub_1416B0D00(v330, v326, v298);
            v334 = *(_QWORD *)&v330[8];
            v337 = *(_QWORD *)v330;
            LOBYTE(v327) = v330[16];
            v126 = v330[23];
            v127 = *(unsigned __int16 *)&v330[21];
            v128 = *(unsigned int *)&v330[17];
            v323 = *(_QWORD *)&v330[24];
            if ( v309 )
              sub_140001660(v295, v309, 1);
            if ( v308 )
              sub_140001660(v294, v308, 1);
            v340 = 0;
            sub_140A192F0(&v284);
            if ( v314.m128i_i64[0] )
              sub_140001660(v314.m128i_i64[1], v314.m128i_i64[0], 1);
            if ( (__int64)v317 > 0 )
              sub_140001660(*((_QWORD *)&v317 + 1), v317, 1);
            v84 = ((unsigned __int64)((v126 << 16) | v127) << 32) | v128;
            v73 = v307;
            v329 = v307;
            v257 = v293;
            v83 = v111;
            v304 = v111;
            v82 = v337;
            v39 = v330;
            v80 = v334;
            v81 = v327;
            if ( v337 == -2 )
              goto LABEL_164;
          }
          v280.m128i_i64[0] = v73;
          v280.m128i_i64[1] = v257;
          *(_QWORD *)&v281 = v83;
          *((_QWORD *)&v281 + 1) = v259;
          *(_QWORD *)&v282 = v258;
          *((_QWORD *)&v282 + 1) = v244;
          *(_DWORD *)((char *)&v279 + 1) = v84;
          BYTE7(v279) = BYTE6(v84);
          v327 = v84;
          *(_WORD *)((char *)&v279 + 5) = WORD2(v84);
          *((_QWORD *)&v279 + 1) = v323;
          v278.m128i_i64[0] = v82;
          v278.m128i_i64[1] = v80;
          LOBYTE(v279) = v81;
          v337 = v82;
          if ( v82 != -1 )
          {
            v334 = v80;
            *(_QWORD *)v330 = v257;
            *(_QWORD *)&v330[8] = v83;
            *(_OWORD *)&v330[16] = 0;
            *(_QWORD *)&v330[32] = v257;
            v74 = v83;
            *(_QWORD *)&v330[40] = v83;
            sub_140D8B500(&v312, (__int128 *)v330);
            if ( v312.m128i_i8[0] == -1 )
            {
              *(_QWORD *)v330 = v312.m128i_i64[1];
              nullsub_1(v86, v85);
              v107 = sub_140001650(30, 1);
              if ( !v107 )
                sub_14196B2DB(1, 30);
              v93 = v107;
              *(_OWORD *)(v107 + 14) = *(__int128 *)((char *)&xmmword_141A6995F + 14);
              *(__m128i *)v107 = _mm_loadu_si128((const __m128i *)&xmmword_141A6995F);
              sub_140032F30(v330);
              v329 = 30;
              v334 = 30;
              goto LABEL_124;
            }
            v320.m256i_i32[1] = v312.m128i_i32[1];
            *(__int32 *)((char *)v320.m256i_i32 + 1) = *(__int32 *)((char *)v312.m128i_i32 + 1);
            v87 = _mm_loadu_si128((const __m128i *)&v312.m128i_u64[1]);
            v320.m256i_i8[0] = v312.m128i_i8[0];
            *(__m128i *)&v320.m256i_u64[1] = v87;
            v320.m256i_i64[3] = v313.m256i_i64[1];
            v88 = sub_14166BC00(&v320, aPayloadModel_0, 14);
            if ( v88 )
            {
              if ( *(_BYTE *)v88 == 3 )
              {
                v90 = *(_QWORD *)(v88 + 16);
                v329 = v90;
                v91 = *(_QWORD *)(v88 + 24);
                if ( (v91 != v256 || (unsigned int)sub_141923B40(v329, v242, v256))
                  && (v91 != v241 || (unsigned int)sub_141923B40(v329, v243, v241)) )
                {
                  nullsub_1(v90, v89);
                  v92 = (__m128i *)sub_140001650(36, 1);
                  if ( !v92 )
                    sub_14196B2DB(1, 36);
                  v93 = (__int64)v92;
                  qmemcpy(&v92[1], "anged after fallback", 20);
                  *v92 = _mm_loadu_si128((const __m128i *)&xmmword_141A6C86C);
                  v329 = 36;
                  v334 = 36;
                  v39 = v330;
LABEL_121:
                  sub_140A192F0(&v320);
LABEL_124:
                  sub_140191B20(&v278);
                  v80 = v334;
                  v108 = v329;
LABEL_165:
                  v320.m256i_i64[0] = v80;
                  v320.m256i_i64[1] = v93;
                  v320.m256i_i64[2] = v108;
                  if ( *(_QWORD *)off_14223FF10 >= 2u )
                  {
                    v312.m128i_i64[0] = (__int64)v335;
                    v312.m128i_i64[1] = (__int64)sub_1400015F0;
                    v313.m256i_i64[0] = (__int64)&v320;
                    v313.m256i_i64[1] = (__int64)sub_1400015F0;
                    *(_QWORD *)v330 = aCodexmateLibCo_42;
                    *(_QWORD *)&v330[8] = 67;
                    *(_QWORD *)&v330[16] = aCodexmateLibCo_42;
                    *(_QWORD *)&v330[24] = 67;
                    *(_QWORD *)&v330[32] = &off_141A6C5F8;
                    sub_140AF72B0(&unk_141A6C5A8, &v312, 2, v330);
                    v80 = v320.m256i_i64[0];
                  }
                  ++*((_QWORD *)&v261 + 1);
                  if ( v80 )
                    sub_140001660(v320.m256i_i64[1], v80, 1);
LABEL_76:
                  if ( v305 )
                    sub_140001660(v292, v305, 1);
                  if ( v297 )
                    sub_140001660(v326, v297, 1);
                  if ( v311 )
                    sub_140001660(v306, v311, 1);
                  if ( v325 )
                    sub_140001660(v310, v325, 1);
                  v329 = v73;
                  v304 = v74;
                  goto LABEL_62;
                }
              }
            }
            sub_1407E4EE0((__int64)&v312, v326, v298, v258, v244, v257, v74);
            if ( v312.m128i_i32[0] != -1 )
            {
              *(_OWORD *)&v330[80] = v316;
              *(_OWORD *)&v330[64] = v315;
              v106 = _mm_loadu_si128(&v312);
              *(__m128i *)&v330[48] = v314;
              *(__m256i *)&v330[16] = v313;
              *(__m128i *)v330 = v106;
              v299 = v330;
              v300 = (__int64)sub_140D76130;
              sub_1416DAFA0(&v284, &unk_141A6997D, &v299);
              v39 = v330;
              sub_140A1A150(v330);
              v93 = v284.m128i_i64[1];
              v334 = v284.m128i_i64[0];
              v329 = v285;
              goto LABEL_121;
            }
            sub_140A192F0(&v320);
            v83 = v74;
            v80 = v334;
            v82 = v337;
          }
          v230 = _mm_loadu_si128(&v280);
          v231 = v281;
          v232 = v282;
          v266 = v282;
          v265 = v281;
          v264 = v230;
          v262.m128i_i64[0] = v82;
          v262.m128i_i64[1] = v80;
          *(_QWORD *)&v263 = v279;
          *((_QWORD *)&v263 + 1) = v323;
        }
        else
        {
          v262.m128i_i64[0] = -1;
          v337 = -1;
          v73 = v329;
          v83 = v304;
        }
        v267 = v335;
        v268 = (__int64)&off_141A6C428;
        v269 = v335 + 3;
        v270 = &off_141A6C428;
        sub_140A0CB70((unsigned int)&v284, (unsigned int)&v271, (unsigned int)aUpdateThreadsS_12, 43, (__int64)&v267);
        if ( v284.m128i_i64[0] == -1 )
        {
          ++v260.m128i_i64[0];
          v339 = 1;
          sub_1416DB410(v330, v335);
          v339 = 1;
          sub_140871180((__int64)&v253, v330);
          if ( v337 != -1 )
            goto LABEL_145;
        }
        else
        {
          v114 = _mm_loadu_si128(&v284);
          v281 = v287;
          v280 = v286;
          v279 = v285;
          v278 = v114;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v312.m128i_i64[0] = (__int64)v335;
            v312.m128i_i64[1] = (__int64)sub_1400015F0;
            v313.m256i_i64[0] = (__int64)&v278;
            v313.m256i_i64[1] = (__int64)sub_14142D4D0;
            *(_QWORD *)v330 = aCodexmateLibCo_42;
            *(_QWORD *)&v330[8] = 67;
            *(_QWORD *)&v330[16] = aCodexmateLibCo_42;
            *(_QWORD *)&v330[24] = 67;
            *(_QWORD *)&v330[32] = &off_141A6C4E8;
            v338 = 1;
            sub_140AF72B0(&unk_141A6C473, &v312, 2, v330);
          }
          ++*((_QWORD *)&v261 + 1);
          if ( v337 == -1 )
          {
            v117 = 1;
          }
          else
          {
            *(_OWORD *)&v321[32] = v266;
            v115 = _mm_loadu_si128(&v262);
            *(_OWORD *)&v321[16] = v265;
            *(__m128i *)v321 = v264;
            *(_OWORD *)&v320.m256i_u64[2] = v263;
            *(__m128i *)v320.m256i_i8 = v115;
            sub_1407FC640(&v312, &v320, 1);
            if ( v312.m128i_i32[0] != -1 )
            {
              *(_OWORD *)&v330[80] = v316;
              *(_OWORD *)&v330[64] = v315;
              v116 = _mm_loadu_si128(&v312);
              *(__m128i *)&v330[48] = v314;
              *(__m256i *)&v330[16] = v313;
              *(__m128i *)v330 = v116;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v299 = v335;
                v300 = (__int64)sub_1400015F0;
                v301 = (__int64)v330;
                v302 = sub_140D76130;
                v230.m128i_i64[0] = (__int64)aCodexmateLibCo_42;
                v230.m128i_i64[1] = 67;
                *(_QWORD *)&v231 = aCodexmateLibCo_42;
                *((_QWORD *)&v231 + 1) = 67;
                *(_QWORD *)&v232 = &off_141A6C590;
                sub_140AF72B0(&unk_141A6C543, &v299, 2, &v230);
              }
              sub_140A1A150(v330);
            }
            sub_140191B20(&v320);
            v117 = 0;
          }
          v339 = v117;
          sub_140A19CC0(&v278);
          if ( ((unsigned __int8)v117 & (v337 != -1)) != 0 )
LABEL_145:
            sub_140191B20(&v262);
        }
        if ( v305 )
          sub_140001660(v292, v305, 1);
        if ( v297 )
          sub_140001660(v326, v297, 1);
        if ( v311 )
          sub_140001660(v306, v311, 1);
        if ( v325 )
          sub_140001660(v310, v325, 1);
        v329 = v73;
        v304 = v83;
        goto LABEL_62;
      }
      v276 = *(_OWORD *)&v330[80];
      v275 = *(_OWORD *)&v330[64];
      v51 = _mm_loadu_si128((const __m128i *)v330);
      v274 = *(_OWORD *)&v330[48];
      v273 = *(_OWORD *)&v330[32];
      v272 = *(_OWORD *)&v330[16];
      v271 = v51;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        sub_1407D8200(v247, v336, v47);
        v320.m256i_i64[0] = (__int64)v247;
        v320.m256i_i64[1] = (__int64)sub_1400015F0;
        v320.m256i_i64[2] = (__int64)&v271;
        v320.m256i_i64[3] = (__int64)sub_140D76130;
        v314.m128i_i64[0] = 2;
        v314.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
        *(_QWORD *)&v315 = 67;
        *(_QWORD *)&v316 = &unk_141A6C686;
        *((_QWORD *)&v316 + 1) = &v320;
        v312.m128i_i64[0] = 0;
        v312.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
        *(_OWORD *)v313.m256i_i8 = 0x43u;
        v313.m256i_i64[2] = (__int64)aSrcCoreRelayCo_3;
        v313.m256i_i64[3] = 56;
        *((_QWORD *)&v315 + 1) = 0x12900000001LL;
        sub_141503E20(&v344, &v312);
        if ( *(_QWORD *)v247 )
          sub_140001660(*(_QWORD *)&v247[8], *(_QWORD *)v247, 1);
      }
      ++*((_QWORD *)&v261 + 1);
      sub_140A1A150(&v271);
LABEL_203:
      v45 = v333;
      if ( v333 )
LABEL_204:
        sub_140001660(v336, v45, 1);
      goto LABEL_33;
    }
    if ( (v330[8] & 3u) - 2 >= 2 && (v330[8] & 3) != 0 )
    {
      --*(_QWORD *)&v330[8];
      v330[0] = 3;
      sub_1416EBAD0(&v330[8]);
    }
    v43 -= 32LL;
    v44 += 4;
    v45 = v333;
    if ( v333 )
      goto LABEL_204;
  }
  if ( (__int64 *)v41 != v40 )
  {
    v129 = v43 >> 5;
    do
    {
      v130 = *(v44 - 1);
      if ( v130 )
        sub_140001660(*v44, v130, 1);
      v44 += 4;
      --v129;
    }
    while ( v129 );
  }
LABEL_211:
  if ( v296 )
    sub_140001660(v233, 32 * v296, 8);
  v278.m128i_i64[0] = 0;
  v278.m128i_i64[1] = 8;
  *(_QWORD *)&v279 = 0;
  v131 = v245.m128i_i64[1];
  v333 = v245.m128i_i64[1] + 80 * v246;
  v296 = v245.m128i_i64[1];
  v132 = v328;
  v133 = v324;
  v335 = (_QWORD *)v246;
  while ( v131 != v333 )
  {
    if ( *((_QWORD *)&v254 + 1) )
    {
      v342 = 1;
      v140 = sub_1406CECD0(v255, v131);
      _RCX = v140 >> 57;
      v141 = v253;
      v142 = _mm_cvtsi32_si128(v140 >> 57);
      v143 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v142, v142), 0), 68);
      v144 = *(_QWORD *)(v131 + 8);
      v39 = *(_QWORD **)(v131 + 16);
      for ( m = nullptr; ; m += 2 )
      {
        v134 = v141.m128i_i64[1] & v140;
        v135 = _mm_loadu_si128((const __m128i *)(v141.m128i_i64[0] + v134));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v135, v143));
        if ( _EBX )
          break;
LABEL_219:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v135, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_224;
        v140 = (unsigned __int64)m + v134 + 16;
      }
      v336 = v134;
      v303 = m;
      while ( 1 )
      {
        __asm { tzcnt   ecx, ebx }
        _RCX = -(__int64)(v141.m128i_i64[1] & (v134 + _RCX));
        if ( v39 == *(_QWORD **)(v141.m128i_i64[0] + 24 * _RCX - 8)
          && !(unsigned int)sub_141923B40(v144, *(_QWORD *)(v141.m128i_i64[0] + 24 * _RCX - 16), v39) )
        {
          break;
        }
        v138 = _EBX - 1;
        LOWORD(v138) = _EBX & (_EBX - 1);
        v57 = (_WORD)v138 == 0;
        _EBX = v138;
        v134 = v336;
        m = v303;
        if ( v57 )
          goto LABEL_219;
      }
    }
    else
    {
LABEL_224:
      v145 = *(_DWORD *)(v131 + 72) + 1;
      if ( *(_DWORD *)(v131 + 72) == -1 )
        v145 = -1;
      v262.m128i_i32[0] = v145;
      if ( v145 <= 9 )
      {
        v342 = 1;
        sub_1416DB410(v247, v131);
        sub_1416DB410(&v320, v131 + 24);
        sub_1416DB410(&v271, v131 + 48);
        v313.m256i_i64[0] = *(_QWORD *)&v247[16];
        v312 = *(__m128i *)v247;
        v313.m256i_i64[3] = v320.m256i_i64[2];
        *(_OWORD *)&v313.m256i_u64[1] = *(_OWORD *)v320.m256i_i8;
        *(_QWORD *)&v315 = v272;
        v314 = v271;
        *(_QWORD *)&v330[16] = *(_QWORD *)&v247[16];
        *(_OWORD *)v330 = *(_OWORD *)v247;
        *(_QWORD *)&v330[40] = v320.m256i_i64[2];
        *(_OWORD *)&v330[24] = *(_OWORD *)v320.m256i_i8;
        *(_QWORD *)&v330[64] = v272;
        *(__m128i *)&v330[48] = v271;
        *(_DWORD *)&v330[72] = v262.m128i_i32[0];
        v146 = v279;
        if ( (_QWORD)v279 == v278.m128i_i64[0] )
          sub_141939900(&v278);
        v147 = v278.m128i_i64[1];
        v148 = 80 * v146;
        *(_OWORD *)(v278.m128i_i64[1] + v148 + 64) = *(_OWORD *)&v330[64];
        si128 = _mm_load_si128((const __m128i *)v330);
        v150 = *(_OWORD *)&v330[16];
        v151 = *(_OWORD *)&v330[32];
        *(_OWORD *)(v147 + v148 + 48) = *(_OWORD *)&v330[48];
        *(_OWORD *)(v147 + v148 + 32) = v151;
        *(_OWORD *)(v147 + v148 + 16) = v150;
        *(__m128i *)(v147 + v148) = si128;
        *(_QWORD *)&v279 = v146 + 1;
      }
      else if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v312.m128i_i64[0] = v131;
        v312.m128i_i64[1] = (__int64)sub_1400015F0;
        v313.m256i_i64[0] = (__int64)&v262;
        v313.m256i_i64[1] = (__int64)sub_1416EACD0;
        *(_QWORD *)&v330[48] = 3;
        *(_QWORD *)&v330[56] = aCodexmateLibCo_42;
        *(_QWORD *)&v330[64] = 67;
        *(_QWORD *)&v330[80] = &unk_141A6C76E;
        *(_QWORD *)&v330[88] = &v312;
        *(_QWORD *)v330 = 0;
        *(_QWORD *)&v330[8] = aCodexmateLibCo_42;
        *(_OWORD *)&v330[16] = 0x43u;
        *(_QWORD *)&v330[32] = aSrcCoreRelayCo_3;
        *(_QWORD *)&v330[40] = 56;
        *(_QWORD *)&v330[72] = 0xF500000001LL;
        v342 = 1;
        sub_141503E20(&v344, v330);
      }
    }
    v131 += 80;
    v132 = v328;
    v133 = v324;
  }
  v342 = 1;
  sub_1416B18A0((unsigned int)v247, v132, v133, (unsigned int)&unk_141A6C6F3, 25);
  if ( (_QWORD)v279 )
  {
    v320.m256i_i64[2] = v279;
    *(__m128i *)v320.m256i_i8 = _mm_loadu_si128(&v278);
    v320.m256i_i32[6] = 1;
    nullsub_1(v153, v152);
    v154 = (_BYTE *)sub_140001650(128, 1);
    if ( !v154 )
      sub_14196B2DB(1, 128);
    v271.m128i_i64[0] = 128;
    v271.m128i_i64[1] = (__int64)v154;
    *(_QWORD *)v330 = &v271;
    *(_QWORD *)&v330[8] = asc_141A68E03;
    *(_QWORD *)&v330[16] = 2;
    *(_QWORD *)&v330[24] = 1;
    v330[32] = 0;
    *v154 = 123;
    *(_QWORD *)&v272 = 1;
    v262.m128i_i16[0] = 256;
    v262.m128i_i64[1] = (__int64)v330;
    v155 = &v262;
    v156 = sub_1407A1550(&v262, &unk_141A6931D, 7, &v320.m256i_u64[3]);
    if ( v156 )
      goto LABEL_242;
    if ( v262.m128i_i8[0] == 1 )
    {
      v156 = sub_141967030();
      goto LABEL_242;
    }
    v156 = sub_14079B1A0(&v262, &unk_141A69324, 7, &v320);
    if ( v156 )
    {
LABEL_242:
      if ( v271.m128i_i64[0] )
        sub_140001660(v271.m128i_i64[1], v271.m128i_i64[0], 1);
      goto LABEL_244;
    }
    if ( (v262.m128i_i8[0] & 1) == 0 && v262.m128i_i8[1] )
    {
      v211 = v262.m128i_i64[1];
      v39 = *(_QWORD **)v262.m128i_i64[1];
      v212 = *(_QWORD *)(v262.m128i_i64[1] + 24) - 1LL;
      *(_QWORD *)(v262.m128i_i64[1] + 24) = v212;
      if ( *(_BYTE *)(v211 + 32) == 1 )
      {
        sub_1401E6F40(v39, asc_141A69390, 1);
        if ( v212 )
        {
          v213 = *(_QWORD *)(v211 + 8);
          v214 = *(_QWORD *)(v211 + 16);
          v215 = v39[2];
          for ( n = 0; n != v212; ++n )
          {
            if ( v214 > *v39 - v215 )
            {
              sub_141939070((_DWORD)v39, v215, v214, 1, 1);
              v215 = v39[2];
            }
            else if ( !v214 )
            {
              goto LABEL_323;
            }
            sub_1419234B0(v215 + v39[1], v213, v214);
LABEL_323:
            v215 += v214;
            v39[2] = v215;
          }
        }
      }
      sub_1401E6F40(v39, asc_141A69391, 1);
    }
    v156 = v271.m128i_i64[1];
    if ( v271.m128i_i64[0] == -1 )
    {
LABEL_244:
      v284.m128i_i64[0] = v156;
      v262.m128i_i64[0] = (__int64)asc_141A6992C;
      v262.m128i_i64[1] = 12;
      v271.m128i_i64[0] = (__int64)&v262;
      v271.m128i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(&v330[8], &unk_141A6C350, &v271);
      sub_140032F30(&v284);
      v162 = *(_QWORD *)&v330[8];
      v39 = *(_QWORD **)&v330[24];
      v155 = *(__m128i **)&v330[16];
      v312 = *(__m128i *)&v330[32];
      v313 = *(__m256i *)&v330[48];
      v314 = _mm_loadu_si128((const __m128i *)&v330[80]);
LABEL_245:
      v163 = 10;
      goto LABEL_246;
    }
    v333 = v271.m128i_i64[1];
    v336 = v271.m128i_i64[0];
    v162 = v272;
    if ( (unsigned __int64)v272 > 0x800000 )
    {
      v262.m128i_i64[0] = (__int64)asc_141A6C70C;
      v262.m128i_i64[1] = 18;
      v271.m128i_i64[0] = (__int64)&v262;
      v271.m128i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(&v330[8], &unk_141A6C350, &v271);
      v162 = *(_QWORD *)&v330[8];
      v39 = *(_QWORD **)&v330[24];
      v155 = *(__m128i **)&v330[16];
      v312 = *(__m128i *)&v330[32];
      v313 = *(__m256i *)&v330[48];
      v314 = _mm_loadu_si128((const __m128i *)&v330[80]);
      v163 = 10;
      if ( v336 )
        sub_140001660(v333, v336, 1);
      goto LABEL_246;
    }
    sub_1416B18A0((unsigned int)&v271, v328, v324, (unsigned int)&unk_141A6C6F3, 25);
    v328 = v271.m128i_u64[1];
    if ( sub_1407C8880(v271.m128i_i64[1], v272, v333, v162) == 1 )
    {
      v324 = v217;
      v284.m128i_i64[0] = (__int64)asc_141A69953;
      v284.m128i_i64[1] = 12;
      v262.m128i_i64[0] = (__int64)&v284;
      v262.m128i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(&v330[8], &unk_141A6C350, &v262);
      if ( (unsigned int)(v324 & 3) - 2 >= 2 && (v324 & 3) != 0 )
      {
        v262.m128i_i64[1] = v324 - 1;
        v262.m128i_i8[0] = 3;
        sub_1416EBAD0(&v262.m128i_u64[1]);
      }
      v162 = *(_QWORD *)&v330[8];
      v39 = *(_QWORD **)&v330[24];
      v155 = *(__m128i **)&v330[16];
      v312 = *(__m128i *)&v330[32];
      v313 = *(__m256i *)&v330[48];
      v314 = _mm_loadu_si128((const __m128i *)&v330[80]);
      if ( v336 )
        sub_140001660(v333, v336, 1);
      if ( v271.m128i_i64[0] )
        sub_140001660(v328, v271.m128i_i64[0], 1);
      goto LABEL_245;
    }
    v218 = sub_1407B92D0(v217);
    v219 = v218;
    if ( v218 )
    {
      v324 = v218;
      v284.m128i_i64[0] = (__int64)asc_141A69938;
      v284.m128i_i64[1] = 27;
      v262.m128i_i64[0] = (__int64)&v284;
      v262.m128i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(&v330[8], &unk_141A6C350, &v262);
      v219 = v324;
      if ( (unsigned int)(v324 & 3) - 2 >= 2 && (v324 & 3) != 0 )
      {
        v262.m128i_i64[1] = v324 - 1;
        v262.m128i_i8[0] = 3;
        sub_1416EBAD0(&v262.m128i_u64[1]);
      }
      v162 = *(_QWORD *)&v330[8];
      v39 = *(_QWORD **)&v330[24];
      v155 = *(__m128i **)&v330[16];
      v312 = *(__m128i *)&v330[32];
      v313 = *(__m256i *)&v330[48];
      v314 = _mm_loadu_si128((const __m128i *)&v330[80]);
      v163 = 10;
    }
    else
    {
      v163 = -1;
    }
    if ( v336 )
      sub_140001660(v333, v336, 1);
    if ( v271.m128i_i64[0] )
      sub_140001660(v328, v271.m128i_i64[0], 1);
    if ( v219 )
    {
LABEL_246:
      v164 = _mm_load_si128(&v312);
      v165 = *(_OWORD *)v313.m256i_i8;
      v166 = *(_OWORD *)&v313.m256i_u64[2];
      v167 = v283;
      *(__m128i *)(v283 + 80) = v314;
      *(_OWORD *)(v167 + 64) = v166;
      *(_OWORD *)(v167 + 48) = v165;
      *(__m128i *)(v167 + 32) = v164;
      *(_QWORD *)v167 = v163;
      *(_QWORD *)(v167 + 8) = v162;
      *(_QWORD *)(v167 + 16) = v155;
      *(_QWORD *)(v167 + 24) = v39;
      v168 = v320.m256i_i64[2];
      v10 = (__int64)v335;
      if ( v320.m256i_i64[2] )
      {
        v169 = (_QWORD *)(v320.m256i_i64[1] + 56);
        do
        {
          v170 = *(v169 - 7);
          if ( v170 )
            sub_140001660(*(v169 - 6), v170, 1);
          v171 = *(v169 - 4);
          if ( v171 )
            sub_140001660(*(v169 - 3), v171, 1);
          v172 = *(v169 - 1);
          if ( v172 )
            sub_140001660(*v169, v172, 1);
          v169 += 10;
          --v168;
        }
        while ( v168 );
      }
      HIDWORD(_RAX) = v320.m256i_i32[1];
      if ( v320.m256i_i64[0] )
        sub_140001660(v320.m256i_i64[1], 80 * v320.m256i_i64[0], 8);
      if ( *(_QWORD *)v247 )
        sub_140001660(*(_QWORD *)&v247[8], *(_QWORD *)v247, 1);
      v174 = v253.m128i_i64[1];
      if ( v253.m128i_i64[1] )
      {
LABEL_260:
        v175 = *((_QWORD *)&v254 + 1);
        if ( *((_QWORD *)&v254 + 1) )
        {
          v176 = v253.m128i_i64[0];
          v177 = (const __m128i *)(v253.m128i_i64[0] + 16);
          _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v253.m128i_i64[0]));
          do
          {
            if ( !(_WORD)_EBX )
            {
              do
              {
                v179 = _mm_load_si128(v177);
                v176 -= 384;
                ++v177;
                _EBX = _mm_movemask_epi8(v179) ^ 0xFFFF;
              }
              while ( !_EBX );
            }
            __asm { tzcnt   eax, ebx }
            v180 = -3 * _RAX;
            v181 = *(_QWORD *)(v176 + 8 * v180 - 24);
            if ( v181 )
              sub_140001660(*(_QWORD *)(v176 + 8 * v180 - 16), v181, 1);
            --v175;
            _RAX = _EBX & (unsigned int)(_EBX - 1);
            _EBX &= _EBX - 1;
          }
          while ( v175 );
        }
        v182 = (24 * v174 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v183 = v182 + v174;
        v57 = v183 == -17;
        v184 = v183 + 17;
        v10 = (__int64)v335;
        if ( !v57 )
          sub_140001660(v253.m128i_i64[0] - v182, v184, 16);
      }
LABEL_269:
      if ( v289 )
        sub_140001660(v290, 8 * v289, 8);
      sub_140779490(&v221);
      v12 = v245.m128i_i64[1];
      if ( !v10 )
        goto LABEL_9;
      goto LABEL_272;
    }
    sub_140236040(&v320);
    if ( v320.m256i_i64[0] )
      sub_140001660(v320.m256i_i64[1], 80 * v320.m256i_i64[0], 8);
    v160 = 0;
  }
  else
  {
    v157 = *(_QWORD *)&v247[8];
    v341 = 1;
    v158 = sub_1416C4110(*(_QWORD *)&v247[8], *(_QWORD *)&v247[16]);
    v160 = 1;
    if ( v158 )
    {
      switch ( v158 & 3 )
      {
        case 0uLL:
          LOBYTE(v161) = *(_BYTE *)(v158 + 16);
          break;
        case 1uLL:
          LOBYTE(v161) = *(_BYTE *)(v158 + 31);
          break;
        case 2uLL:
          v328 = v158;
          v189 = sub_1416E2EE0(v159, v158);
          LOBYTE(v161) = (*(__int64 (__fastcall **)(unsigned __int64))(v189 + 8))(HIDWORD(v328));
          v158 = v328;
          break;
        case 3uLL:
          v161 = HIDWORD(v158);
          break;
      }
      if ( (_BYTE)v161 )
      {
        v328 = v158;
        v271.m128i_i64[0] = (__int64)asc_141A6C7B2;
        v271.m128i_i64[1] = 12;
        v312.m128i_i64[0] = (__int64)&v271;
        v312.m128i_i64[1] = (__int64)sub_140191200;
        sub_1416DAFA0(&v330[8], &unk_141A6C350, &v312);
        *(_QWORD *)v330 = 10;
        v190 = (_OWORD *)v283;
        *(_OWORD *)(v283 + 80) = *(_OWORD *)&v330[80];
        v191 = _mm_loadu_si128((const __m128i *)&v330[16]);
        v192 = *(_OWORD *)&v330[32];
        v193 = *(_OWORD *)&v330[48];
        v190[4] = *(_OWORD *)&v330[64];
        v190[3] = v193;
        v190[2] = v192;
        v190[1] = v191;
        *v190 = *(_OWORD *)v330;
        v341 = 1;
        sub_14028F450(v328);
        if ( *(_QWORD *)v247 )
          sub_140001660(v157, *(_QWORD *)v247, 1);
        HIDWORD(_RAX) = (unsigned __int64)sub_1401A3820(&v278) >> 32;
        v10 = (__int64)v335;
        v174 = v253.m128i_i64[1];
        if ( v253.m128i_i64[1] )
          goto LABEL_260;
        goto LABEL_269;
      }
      v341 = 1;
      sub_14028F450(v158);
    }
  }
  *(_QWORD *)v330 = &v260;
  *(_QWORD *)&v330[8] = sub_1416EBAE0;
  *(_QWORD *)&v330[16] = &v260.m128i_i64[1];
  *(_QWORD *)&v330[24] = sub_1416EBAE0;
  *(_QWORD *)&v330[32] = &v261;
  *(_QWORD *)&v330[40] = sub_1416EBAE0;
  *(_QWORD *)&v330[48] = (char *)&v261 + 8;
  *(_QWORD *)&v330[56] = sub_1416EBAE0;
  v341 = v160;
  sub_1416DAFA0(v220, &unk_141A6C7BE, v330);
  v341 = v160;
  sub_1406C9730((unsigned int)aRelayModelRest, 19, (unsigned int)aDone_3, 4, (__int64)v220);
  v194 = _mm_load_si128(&v260);
  _RAX = v283;
  *(_OWORD *)(v283 + 24) = v261;
  *(__m128i *)(_RAX + 8) = v194;
  *(_QWORD *)_RAX = -1;
  if ( *(_QWORD *)v247 )
    sub_140001660(*(_QWORD *)&v247[8], *(_QWORD *)v247, 1);
  if ( v160 )
  {
    sub_140236040(&v278);
    HIDWORD(_RAX) = v278.m128i_i32[1];
    if ( v278.m128i_i64[0] )
      sub_140001660(v278.m128i_i64[1], 80 * v278.m128i_i64[0], 8);
  }
  v196 = v253.m128i_i64[1];
  if ( v253.m128i_i64[1] )
  {
    v197 = *((_QWORD *)&v254 + 1);
    if ( *((_QWORD *)&v254 + 1) )
    {
      v198 = v253.m128i_i64[0];
      v199 = (const __m128i *)(v253.m128i_i64[0] + 16);
      _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v253.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v201 = _mm_load_si128(v199);
            v198 -= 384;
            ++v199;
            _EBX = _mm_movemask_epi8(v201) ^ 0xFFFF;
          }
          while ( !_EBX );
        }
        __asm { tzcnt   eax, ebx }
        v202 = -3 * _RAX;
        v203 = *(_QWORD *)(v198 + 8 * v202 - 24);
        if ( v203 )
          sub_140001660(*(_QWORD *)(v198 + 8 * v202 - 16), v203, 1);
        --v197;
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
      }
      while ( v197 );
    }
    v204 = (24 * v196 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v205 = v204 + v196 + 17;
    if ( v205 )
      sub_140001660(v253.m128i_i64[0] - v204, v205, 16);
  }
  if ( v289 )
    sub_140001660(v290, 8 * v289, 8);
  sub_140779490(&v221);
  v206 = v335;
  if ( v335 )
  {
    v207 = (_QWORD *)(v296 + 56);
    do
    {
      v208 = *(v207 - 7);
      if ( v208 )
        sub_140001660(*(v207 - 6), v208, 1);
      v209 = *(v207 - 4);
      if ( v209 )
        sub_140001660(*(v207 - 3), v209, 1);
      v210 = *(v207 - 1);
      if ( v210 )
        sub_140001660(*v207, v210, 1);
      v207 += 10;
      v206 = (_QWORD *)((char *)v206 - 1);
    }
    while ( v206 );
  }
  if ( v245.m128i_i64[0] )
  {
    v13 = 80 * v245.m128i_i64[0];
    v14 = v296;
    goto LABEL_11;
  }
  return v283;
}
