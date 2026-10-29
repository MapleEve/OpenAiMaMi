// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402620d0 | name sub_1402620D0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402620D0(__int64 a1, __int64 a2, __int64 *a3)
{
  _BYTE *v3; // r12
  __int64 v4; // r14
  __m128i v5; // xmm8
  __m128i v6; // xmm9
  __int64 result; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  unsigned __int64 v13; // rbx
  __int64 *i; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __m128i v21; // xmm1
  unsigned __int128 v22; // kr00_16
  __m128i v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  _BYTE *v27; // r12
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __m128i v41; // xmm10
  __int64 v42; // r8
  unsigned __int64 v43; // r15
  __m128i v44; // xmm11
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r14
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned __int64 v53; // r10
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // r8
  __int64 v57; // r9
  bool v58; // si
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  __m128i si128; // xmm0
  _BYTE *v64; // rsi
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  _QWORD *v68; // rsi
  __int64 v69; // rsi
  _QWORD *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __int128 v75; // xmm2
  _QWORD *v76; // rdi
  __int64 v77; // r15
  __int64 v78; // r12
  __int64 *v79; // r14
  __int64 v80; // r15
  __int64 v81; // rdx
  __int64 v82; // rdx
  __m128i *v83; // r14
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  _QWORD *v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  _QWORD *v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  __int64 v102; // rbx
  _QWORD *v103; // r14
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  unsigned __int64 v107; // rbx
  _QWORD *v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rbx
  _QWORD *v111; // r14
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rbx
  unsigned __int64 v116; // rbx
  unsigned __int64 v117; // r12
  __int64 v118; // rcx
  char v119; // si
  const __m128i *j; // rax
  unsigned __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // r15
  bool v125; // bl
  __int64 v126; // r14
  __int64 v127; // r13
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rbx
  __m128i v131; // kr90_16
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // rbx
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rcx
  __m128i v141; // xmm0
  __m128i v142; // xmm1
  __int128 v143; // xmm2
  __int64 v144; // rdx
  __int64 v145; // rsi
  __int64 v146; // rcx
  __m128i v147; // xmm0
  __m128i v148; // xmm1
  __int64 v149; // rdx
  _BYTE *v150; // rax
  _BYTE *v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // r15
  __m128i v157; // xmm0
  __m128i v158; // xmm1
  __int64 v159; // rax
  __m128i *v160; // rax
  __int64 v161; // rsi
  char v162; // di
  __int64 v163; // rsi
  char v164; // di
  __int64 v165; // rsi
  char v166; // di
  __int64 v167; // rsi
  char v168; // di
  unsigned __int64 v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rcx
  unsigned __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // r9
  __int64 v177; // r10
  __int64 v178; // r14
  __int64 v179; // rdi
  __int64 v180; // rsi
  __int64 v181; // rbx
  __m128i v182; // xmm0
  __m128i v183; // xmm1
  __int64 v184; // rsi
  _QWORD *v185; // rax
  unsigned __int64 v186; // r12
  __int64 v187; // rdx
  _QWORD *v188; // rdi
  int v189; // eax
  __m128i v190; // xmm0
  __m128i v191; // xmm1
  __int64 v192; // rbx
  __int64 v193; // rbx
  _QWORD *v194; // r14
  __int64 v195; // rdx
  __int64 v196; // rdx
  __int64 v197; // rdx
  __int64 v198; // r12
  __m128i v199; // xmm1
  __int64 v200; // r15
  _QWORD *v201; // r14
  __int64 v202; // rdx
  __int64 v203; // rdx
  __int64 v204; // rdx
  __int64 v205; // r15
  __int64 v206; // r14
  unsigned __int64 v207; // r12
  _QWORD *v208; // rbx
  unsigned __int64 v209; // r12
  __int64 v210; // rdx
  int v211; // eax
  __int64 v212; // rsi
  _QWORD *v213; // rbx
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rdx
  __int64 v217; // rsi
  _QWORD *v218; // rbx
  __int64 v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rdx
  unsigned __int64 v222; // rbx
  _QWORD *v223; // rsi
  __int64 v224; // rdx
  __int64 v225; // rax
  __m128i v226; // xmm0
  __m128i v227; // xmm1
  __int128 v228; // xmm2
  __int64 v229; // r9
  __int64 v230; // rsi
  _QWORD *v231; // rdi
  unsigned __int64 v232; // rbx
  __int64 v233; // rdx
  __int64 v234; // rsi
  __int64 v235; // rdi
  _QWORD *v236; // rbx
  __int64 v237; // rdx
  _BYTE v238[24]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v239; // [rsp+50h] [rbp-30h] BYREF
  __m128i v240; // [rsp+58h] [rbp-28h]
  __m128i v241; // [rsp+68h] [rbp-18h]
  __m128i v242; // [rsp+78h] [rbp-8h]
  __int128 v243; // [rsp+88h] [rbp+8h]
  __m128i v244; // [rsp+98h] [rbp+18h]
  __m128i v245; // [rsp+A8h] [rbp+28h]
  __int128 v246; // [rsp+B8h] [rbp+38h]
  __int64 v247; // [rsp+C8h] [rbp+48h]
  __m128i v248; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v249; // [rsp+E0h] [rbp+60h]
  __m128i v250; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v251; // [rsp+F8h] [rbp+78h]
  __m128i v252; // [rsp+100h] [rbp+80h] BYREF
  __int64 v253; // [rsp+118h] [rbp+98h]
  _QWORD *v254; // [rsp+120h] [rbp+A0h]
  __int64 v255; // [rsp+128h] [rbp+A8h]
  __int64 v256; // [rsp+130h] [rbp+B0h]
  _QWORD v257[3]; // [rsp+138h] [rbp+B8h] BYREF
  __int64 *v258; // [rsp+150h] [rbp+D0h] BYREF
  _QWORD *v259; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v260; // [rsp+160h] [rbp+E0h]
  _QWORD *v261; // [rsp+168h] [rbp+E8h]
  __int64 v262; // [rsp+170h] [rbp+F0h]
  __m128i v263; // [rsp+178h] [rbp+F8h] BYREF
  __m128i v264; // [rsp+188h] [rbp+108h] BYREF
  __int128 v265; // [rsp+198h] [rbp+118h]
  __int128 v266; // [rsp+1A8h] [rbp+128h]
  __int128 v267; // [rsp+1B8h] [rbp+138h]
  __m128i v268; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v269; // [rsp+1D8h] [rbp+158h]
  __m128i v270; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v271; // [rsp+1F0h] [rbp+170h]
  __m128i v272; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v273; // [rsp+208h] [rbp+188h]
  __int64 v274; // [rsp+210h] [rbp+190h] BYREF
  const __m128i *v275; // [rsp+218h] [rbp+198h]
  __int64 v276; // [rsp+220h] [rbp+1A0h]
  __int64 v277; // [rsp+228h] [rbp+1A8h]
  __m128i v278; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v279; // [rsp+240h] [rbp+1C0h] BYREF
  _BYTE v280[56]; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v281; // [rsp+280h] [rbp+200h]
  __int64 v282; // [rsp+288h] [rbp+208h]
  __int64 v283; // [rsp+290h] [rbp+210h]
  __int128 v284; // [rsp+298h] [rbp+218h]
  __int64 v285; // [rsp+2A8h] [rbp+228h]
  const __m128i *v286; // [rsp+2B0h] [rbp+230h]
  __int64 v287; // [rsp+2B8h] [rbp+238h]
  __int128 v288; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 **v289; // [rsp+2D0h] [rbp+250h]
  void *v290; // [rsp+2D8h] [rbp+258h]
  __m128i v291; // [rsp+2E0h] [rbp+260h] BYREF
  __m128i v292; // [rsp+2F0h] [rbp+270h] BYREF
  __m128i v293; // [rsp+300h] [rbp+280h]
  __int128 v294; // [rsp+310h] [rbp+290h]
  __m128i v295; // [rsp+320h] [rbp+2A0h]
  __m128i v296; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v297; // [rsp+340h] [rbp+2C0h]
  unsigned __int8 v298; // [rsp+348h] [rbp+2C8h]
  _BYTE v299[7]; // [rsp+349h] [rbp+2C9h]
  __int64 v300; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v301; // [rsp+358h] [rbp+2D8h]
  unsigned __int64 v302; // [rsp+368h] [rbp+2E8h]
  __int64 *v303; // [rsp+370h] [rbp+2F0h]
  __int64 v304; // [rsp+378h] [rbp+2F8h]
  __int64 v305; // [rsp+380h] [rbp+300h]
  __int64 v306; // [rsp+388h] [rbp+308h]
  __int64 v307; // [rsp+390h] [rbp+310h]
  __int64 v308; // [rsp+398h] [rbp+318h] BYREF
  __int64 v309; // [rsp+3A0h] [rbp+320h]
  unsigned __int64 v310; // [rsp+3A8h] [rbp+328h]
  __int64 v311; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v312; // [rsp+3B8h] [rbp+338h]
  __int128 v313; // [rsp+3C8h] [rbp+348h] BYREF
  __int128 v314; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v315; // [rsp+3E8h] [rbp+368h]
  __int64 v316; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v317; // [rsp+3F8h] [rbp+378h]
  __int64 v318; // [rsp+408h] [rbp+388h]
  __int64 v319; // [rsp+410h] [rbp+390h]
  __int64 v320; // [rsp+418h] [rbp+398h]
  __m128i v321; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v322; // [rsp+430h] [rbp+3B0h]
  __int64 v323; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v324; // [rsp+440h] [rbp+3C0h]
  __int64 v325; // [rsp+448h] [rbp+3C8h]
  __int64 v326; // [rsp+450h] [rbp+3D0h]
  __int64 *v327; // [rsp+458h] [rbp+3D8h]
  __int64 v328; // [rsp+460h] [rbp+3E0h]
  __int64 v329; // [rsp+468h] [rbp+3E8h]
  __int64 v330; // [rsp+470h] [rbp+3F0h]
  __m128i v331; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v332; // [rsp+488h] [rbp+408h]
  _QWORD *v333; // [rsp+490h] [rbp+410h]
  __int64 v334; // [rsp+498h] [rbp+418h]
  __int64 v335; // [rsp+4A0h] [rbp+420h]
  __int64 v336; // [rsp+4A8h] [rbp+428h]
  __int64 v337; // [rsp+4B0h] [rbp+430h]
  __int64 v338; // [rsp+4B8h] [rbp+438h]
  __int64 v339; // [rsp+4C0h] [rbp+440h]
  __int64 v340; // [rsp+4C8h] [rbp+448h]
  __m256i v341; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v342; // [rsp+4F0h] [rbp+470h]
  __int128 v343; // [rsp+500h] [rbp+480h]
  _BYTE *v344; // [rsp+518h] [rbp+498h]
  __m128i v345; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v346; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v347; // [rsp+540h] [rbp+4C0h]
  __int128 v348; // [rsp+550h] [rbp+4D0h]
  _BYTE v349[96]; // [rsp+560h] [rbp+4E0h] BYREF
  _BYTE v350[104]; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v351; // [rsp+628h] [rbp+5A8h]
  __int64 v352; // [rsp+638h] [rbp+5B8h]
  __int64 v353; // [rsp+650h] [rbp+5D0h]
  __int64 m128i_i64; // [rsp+658h] [rbp+5D8h]
  __int64 v355; // [rsp+660h] [rbp+5E0h]
  unsigned __int64 v356; // [rsp+668h] [rbp+5E8h]
  char v357; // [rsp+677h] [rbp+5F7h] BYREF
  __int64 v358; // [rsp+678h] [rbp+5F8h]
  __int64 v359; // [rsp+680h] [rbp+600h]
  bool v360; // [rsp+68Fh] [rbp+60Fh]
  __int64 v361; // [rsp+690h] [rbp+610h]
  char v362; // [rsp+69Fh] [rbp+61Fh]
  char v363; // [rsp+6A0h] [rbp+620h]
  bool v364; // [rsp+6A1h] [rbp+621h]
  char v365; // [rsp+6A2h] [rbp+622h]
  char v366; // [rsp+6A3h] [rbp+623h]
  char v367; // [rsp+6A4h] [rbp+624h]
  char v368; // [rsp+6A5h] [rbp+625h]
  char v369; // [rsp+6A6h] [rbp+626h]
  char v370; // [rsp+6A7h] [rbp+627h]
  __int64 v371; // [rsp+6A8h] [rbp+628h]

  v371 = -2;
  v327 = a3;
  sub_14023B860(v350, a2);
  result = *(_QWORD *)v350;
  v291 = *(__m128i *)&v350[8];
  v292 = *(__m128i *)&v350[24];
  v293 = *(__m128i *)&v350[40];
  v294 = *(_OWORD *)&v350[56];
  v295 = *(__m128i *)&v350[72];
  v296 = *(__m128i *)&v350[88];
  if ( *(_QWORD *)v350 == -2 )
  {
    *(__m128i *)(a1 + 80) = v296;
    *(__m128i *)(a1 + 64) = v295;
    v10 = _mm_load_si128(&v291);
    v11 = _mm_load_si128(&v292);
    v12 = v293;
    *(_OWORD *)(a1 + 48) = v294;
    *(__m128i *)(a1 + 32) = v12;
    *(__m128i *)(a1 + 16) = v11;
    *(__m128i *)a1 = v10;
    return result;
  }
  v283 = a1;
  v247 = v352;
  v246 = v351;
  v240 = v291;
  v241 = _mm_load_si128(&v292);
  v242 = v293;
  v243 = v294;
  v244 = v295;
  v245 = _mm_load_si128(&v296);
  v239 = *(_QWORD *)v350;
  v278.m128i_i64[0] = 0;
  memset(v280, 0, sizeof(v280));
  v278.m128i_i64[1] = 8;
  v279 = 0;
  sub_1401B7010(v350, a2);
  v253 = *(_QWORD *)&v350[8];
  v284 = *(_OWORD *)v350;
  v255 = *(_QWORD *)v350;
  v305 = *(_QWORD *)&v350[8] + 32LL * *(_QWORD *)&v350[16];
  v256 = v305;
  v285 = *(_QWORD *)(a2 + 776);
  v286 = *(const __m128i **)(a2 + 784);
  v13 = 32LL * *(_QWORD *)&v350[16] - 32;
  v261 = v327 + 4;
  v333 = (_QWORD *)(*(_QWORD *)&v350[8] + 40LL);
  for ( i = *(__int64 **)&v350[8]; ; i = v303 )
  {
    if ( i == (__int64 *)v305 )
      goto LABEL_372;
    v303 = i + 4;
    v254 = i + 4;
    v15 = *i;
    if ( *i == -1 )
    {
      if ( (__int64 *)v305 != v303 )
      {
        v222 = v13 >> 5;
        do
        {
          v223 = v333;
          v224 = *(v333 - 1);
          if ( v224 )
            sub_140001660(*v333, v224, 1);
          v333 = v223 + 4;
          --v222;
        }
        while ( v222 );
      }
LABEL_372:
      if ( (_QWORD)v284 )
        sub_140001660(*((_QWORD *)&v284 + 1), 32 * v284, 8);
      v225 = v283;
      *(_OWORD *)(v283 + 72) = *(_OWORD *)&v280[40];
      v226 = _mm_loadu_si128(&v278);
      v227 = _mm_loadu_si128((const __m128i *)&v279);
      v228 = *(_OWORD *)&v280[8];
      *(_OWORD *)(v225 + 56) = *(_OWORD *)&v280[24];
      *(_OWORD *)(v225 + 40) = v228;
      *(__m128i *)(v225 + 24) = v227;
      *(__m128i *)(v225 + 8) = v226;
      *(_QWORD *)v225 = -1;
      return sub_1401962C0(&v239);
    }
    v344 = v3;
    v304 = v15;
    v16 = i[2];
    v326 = i[1];
    sub_141695A00(v350, v326, v16);
    v302 = v13;
    if ( *(_DWORD *)v350 == 2 )
    {
      if ( (v350[8] & 3u) - 2 >= 2 && (v350[8] & 3) != 0 )
      {
        --*(_QWORD *)&v350[8];
        v350[0] = 3;
        sub_1416BCB00(&v350[8]);
      }
      v5 = 0;
      v17 = 8;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v4 = 0;
      v3 = nullptr;
      v6 = 0;
      goto LABEL_178;
    }
    sub_1402399D0((__int64)v350, v326, v16);
    v281 = v16;
    v18 = *(_QWORD *)&v350[8];
    v17 = *(_QWORD *)&v350[16];
    v21 = _mm_loadu_si128((const __m128i *)&v350[32]);
    v22 = *(_OWORD *)&v350[48];
    v23 = _mm_loadu_si128((const __m128i *)&v350[64]);
    v20 = *(_QWORD *)&v350[80];
    v24 = *(_QWORD *)&v350[88];
    if ( (_BYTE)v351 == 0xFF )
    {
      v361 = *(_QWORD *)v350;
      v358 = *(_QWORD *)&v350[24];
      goto LABEL_176;
    }
    *(_DWORD *)&v299[3] = DWORD1(v351);
    *(_DWORD *)v299 = *(_DWORD *)((char *)&v351 + 1);
    v291 = *(__m128i *)v350;
    v292 = *(__m128i *)&v350[16];
    v293 = v21;
    v294 = *(_OWORD *)&v350[48];
    v295 = v23;
    v296 = *(__m128i *)&v350[80];
    v297 = *(_QWORD *)&v350[96];
    v298 = v351;
    sub_140236F10(v350, &v291, *(_QWORD *)&v350[88]);
    v18 = *(_QWORD *)&v350[8];
    v17 = *(_QWORD *)&v350[16];
    v361 = *(_QWORD *)v350;
    if ( *(_QWORD *)v350 != -1 )
    {
      v358 = *(_QWORD *)&v350[24];
      v5 = _mm_loadu_si128((const __m128i *)&v350[32]);
      v26 = *(_QWORD *)&v350[56];
      v27 = *(_BYTE **)&v350[48];
      v6 = _mm_loadu_si128((const __m128i *)&v350[64]);
      v28 = *(_QWORD *)&v350[80];
      v29 = *(_QWORD *)&v350[88];
      goto LABEL_175;
    }
    v316 = *(_QWORD *)&v350[8];
    v317 = *(_OWORD *)&v350[16];
    v311 = *(_QWORD *)&v350[24];
    v308 = 0;
    v314 = 0;
    v313 = 0;
    v312 = 0;
    v309 = 8;
    v310 = 0;
    if ( !*(_QWORD *)&v350[24] )
    {
      v5 = 0;
      v361 = -1;
      v17 = 8;
      v64 = nullptr;
      v355 = 0;
      v359 = 0;
      v358 = 0;
      v18 = 0;
      v6 = 0;
      goto LABEL_161;
    }
    v323 = 0;
    v324 = 8;
    v325 = 0;
    v30 = *(_QWORD *)&v350[16] + 80LL * *(_QWORD *)&v350[24];
    v31 = 0;
    v355 = v4;
    while ( 2 )
    {
      if ( v17 != v30 )
      {
        if ( *(_QWORD *)(v17 + 56) == -1 )
        {
          v32 = 0;
        }
        else
        {
          v32 = *(_QWORD *)(v17 + 64);
          v25 = *(_QWORD *)(v17 + 72);
        }
        v369 = 1;
        sub_1401F4200(&v345, &v239, v32, v25);
        v33 = v345.m128i_i64[0] ^ 0x8000000000000000uLL;
        if ( v345.m128i_i64[0] >= 0 )
          v33 = 2;
        switch ( v33 )
        {
          case 0uLL:
            *(_QWORD *)&v312 = v312 + 1;
            goto LABEL_19;
          case 1uLL:
            ++*((_QWORD *)&v312 + 1);
            goto LABEL_19;
          case 2uLL:
            m128i_i64 = v345.m128i_i64[1];
            v361 = v345.m128i_i64[0];
            v358 = v346.m128i_i64[0];
            if ( !v327 || *(_QWORD *)(v17 + 24) == -1 || !v327[3] )
              goto LABEL_41;
            v34 = *(_QWORD *)(v17 + 32);
            v35 = *(_QWORD *)(v17 + 40);
            v319 = *(_QWORD *)(v17 + 8);
            v318 = *(_QWORD *)(v17 + 16);
            v366 = 1;
            v353 = v34;
            v356 = v35;
            v36 = sub_140D2BBD0(v261);
            _RAX = v36 >> 57;
            v38 = *v327;
            v39 = v327[1];
            v40 = _mm_cvtsi32_si128(v36 >> 57);
            v41 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v40, v40), 0), 68);
            v42 = 0;
            break;
          case 3uLL:
            ++*((_QWORD *)&v314 + 1);
            goto LABEL_19;
        }
        while ( 1 )
        {
          v43 = v39 & v36;
          v44 = _mm_loadu_si128((const __m128i *)(v38 + v43));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v44, v41));
          if ( _ESI )
            break;
LABEL_36:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v44, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
            goto LABEL_41;
          v36 = v42 + v43 + 16;
          v42 += 16;
        }
        v339 = v39;
        v340 = v42;
        while ( 1 )
        {
          __asm { tzcnt   eax, esi }
          v46 = -120LL * (v39 & (v43 + _RAX));
          v47 = v38;
          v366 = 1;
          if ( (unsigned __int8)sub_140C96900(v353, v356, v38 - 120 * (v39 & (v43 + _RAX)) - 120) )
            break;
          _RAX = (unsigned int)(_ESI - 1);
          LOWORD(_RAX) = _ESI & (_ESI - 1);
          _ESI = _RAX;
          v38 = v47;
          v39 = v339;
          v42 = v340;
          if ( !(_WORD)_RAX )
            goto LABEL_36;
        }
        v48 = v46 + v47;
        if ( *(_QWORD *)(v48 - 72) == v318 && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v48 - 80), v319) )
        {
          v366 = 1;
          sub_140282430(v350);
          if ( *(_QWORD *)&v350[32] == -1 )
          {
            if ( (v350[0] & 3u) - 2 >= 2 && (v350[0] & 3) != 0 )
            {
              *(_QWORD *)&v349[8] = *(_QWORD *)v350 - 1LL;
              v349[0] = 3;
              v366 = 1;
              sub_1416BCB00(&v349[8]);
            }
          }
          else if ( *(_DWORD *)&v350[32] != 2 )
          {
            v52 = *(_QWORD *)v350;
            if ( *(_QWORD *)v350 != -1 )
            {
              v53 = *(_QWORD *)&v350[8];
              if ( *(_QWORD *)&v350[88] == *(_QWORD *)(v48 - 32) )
              {
                v353 = *(_QWORD *)v350;
                v54 = *(_QWORD *)&v350[64];
                v55 = *(_QWORD *)&v350[80];
                v56 = *(_QWORD *)(v48 - 56);
                v57 = *(_QWORD *)(v48 - 48);
                v356 = *(_QWORD *)&v350[8];
                if ( (unsigned __int8)sub_1402899E0(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16], v56, v57)
                  && v55 == *(_QWORD *)(v48 - 24) )
                {
                  v52 = v353;
                  v58 = *(_DWORD *)(v48 - 16) == 1 && v54 == *(_QWORD *)(v48 - 12);
                }
                else
                {
                  v58 = 0;
                  v52 = v353;
                }
                v53 = v356;
              }
              else
              {
                v58 = 0;
              }
              if ( v52 )
                sub_140001660(v53, v52, 1);
              if ( v58 )
              {
                ++v327[6];
                goto LABEL_69;
              }
            }
          }
        }
LABEL_41:
        v366 = 1;
        sub_14024C360(v349, v17);
        if ( *(_DWORD *)v349 == -1 )
        {
          if ( v349[8] )
          {
            ++*((_QWORD *)&v314 + 1);
            *(_QWORD *)v350 = v17;
            *(_QWORD *)&v350[8] = sub_1400015F0;
            v366 = 1;
            sub_1416ABFD0(&v272, &unk_1419DF872, v350);
            v49 = v310;
            if ( v310 >= 3 )
            {
              if ( v272.m128i_i64[0] )
                sub_140001660(v272.m128i_i64[1], v272.m128i_i64[0], 1);
            }
            else
            {
              if ( v310 == v308 )
              {
                v353 = v272.m128i_i64[1];
                v358 = v272.m128i_i64[0];
                sub_14190FDC0(&v308);
              }
              v50 = v309;
              v51 = 3 * v49;
              *(_QWORD *)(v309 + 8 * v51 + 16) = v273;
              *(__m128i *)(v50 + 8 * v51) = _mm_loadu_si128(&v272);
              v310 = v49 + 1;
            }
            if ( v361 )
              sub_140001660(m128i_i64, v361, 1);
LABEL_19:
            v17 += 80;
            ++v31;
            continue;
          }
LABEL_69:
          v59 = v325;
          if ( v325 == v323 )
            sub_14190F570(&v323);
          v60 = v324;
          v61 = 32 * v59;
          *(_QWORD *)(v324 + v61) = v31;
          *(_QWORD *)(v60 + v61 + 8) = v361;
          *(_QWORD *)(v60 + v61 + 16) = m128i_i64;
          *(_QWORD *)(v60 + v61 + 24) = v358;
          v325 = v59 + 1;
          goto LABEL_19;
        }
        *(_OWORD *)&v350[80] = *(_OWORD *)&v349[80];
        *(_OWORD *)&v350[64] = *(_OWORD *)&v349[64];
        v65 = _mm_loadu_si128((const __m128i *)v349);
        v66 = _mm_loadu_si128((const __m128i *)&v349[16]);
        *(_OWORD *)&v350[48] = *(_OWORD *)&v349[48];
        *(_OWORD *)&v350[32] = *(_OWORD *)&v349[32];
        *(__m128i *)&v350[16] = v66;
        *(__m128i *)v350 = v65;
        v341.m256i_i64[0] = v17;
        v341.m256i_i64[1] = (__int64)sub_1400015F0;
        v341.m256i_i64[2] = (__int64)v350;
        v341.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v257, &unk_1419DF8BD, &v341);
        v18 = v257[0];
        v17 = v257[1];
        v358 = v257[2];
        v366 = 1;
        sub_1401954F0(v350);
        if ( v361 )
          sub_140001660(m128i_i64, v361, 1);
        v361 = 10;
        v64 = v344;
LABEL_146:
        v102 = v325;
        if ( v325 )
        {
          v103 = (_QWORD *)(v324 + 16);
          do
          {
            v104 = *(v103 - 1);
            if ( v104 )
              sub_140001660(*v103, v104, 1);
            v103 += 4;
            --v102;
          }
          while ( v102 );
        }
        if ( !v323 )
          goto LABEL_154;
        v105 = v324;
        v106 = 32 * v323;
LABEL_153:
        sub_140001660(v105, v106, 8);
        goto LABEL_154;
      }
      break;
    }
    if ( !(_BYTE)v247 )
      goto LABEL_144;
    *(_QWORD *)v350 = v324;
    *(_QWORD *)&v350[8] = v324 + 32 * v325;
    *(_QWORD *)&v350[16] = &v316;
    v369 = 1;
    sub_1403EFB90(&v274, v350);
    m128i_i64 = (__int64)v275;
    v62 = v276;
    if ( v276 )
    {
      sub_140252A60(v350, v285, v286);
      v341 = *(__m256i *)&v350[8];
      if ( *(_QWORD *)v350 != -1 )
      {
        v361 = *(_QWORD *)v350;
        *(_QWORD *)&v349[88] = *(_QWORD *)&v350[88];
        *(_OWORD *)&v349[72] = *(_OWORD *)&v350[72];
        *(_OWORD *)&v349[56] = *(_OWORD *)&v350[56];
        *(_OWORD *)&v349[40] = *(_OWORD *)&v350[40];
        si128 = _mm_load_si128((const __m128i *)&v341);
        *(__m128i *)&v349[24] = _mm_load_si128((const __m128i *)&v341.m256i_u64[2]);
        *(__m128i *)&v349[8] = si128;
        goto LABEL_122;
      }
      v67 = _mm_load_si128((const __m128i *)&v341);
      v346 = _mm_load_si128((const __m128i *)&v341.m256i_u64[2]);
      v345 = v67;
      v346.m128i_i32[2] = 2;
      v68 = (_QWORD *)m128i_i64;
      v344 = (_BYTE *)(m128i_i64 + 72 * v62);
      if ( (_BYTE *)m128i_i64 == v344 )
      {
LABEL_82:
        *(_QWORD *)v350 = &v357;
        if ( v346.m128i_i64[0] >= 2uLL )
        {
          if ( v346.m128i_i64[0] >= 0x15uLL )
            sub_14065CBC0(v345.m128i_i64[1], v346.m128i_i64[0], v350);
          else
            sub_140E00F70(v345.m128i_i64[1], v346.m128i_i64[0], 1, v350);
        }
        sub_140255920((__int64)v349, v285, v286, (__int64)&v345);
        v69 = v346.m128i_i64[0];
        if ( v346.m128i_i64[0] )
        {
          v70 = (_QWORD *)(v345.m128i_i64[1] + 56);
          do
          {
            v86 = *(v70 - 7);
            if ( v86 )
              sub_140001660(*(v70 - 6), v86, 1);
            v87 = *(v70 - 1);
            if ( v87 != -1 && v87 )
              sub_140001660(*v70, v87, 1);
            v88 = *(v70 - 4);
            if ( v88 )
              sub_140001660(*(v70 - 3), v88, 1);
            v70 += 9;
            --v69;
          }
          while ( v69 );
        }
        if ( v345.m128i_i64[0] )
          sub_140001660(v345.m128i_i64[1], 72 * v345.m128i_i64[0], 8);
        if ( *(_QWORD *)v349 != -1 )
        {
          v361 = *(_QWORD *)v349;
LABEL_122:
          v18 = *(_QWORD *)&v349[8];
          v358 = *(_QWORD *)&v349[24];
          v17 = *(_QWORD *)&v349[16];
          v5 = _mm_loadu_si128((const __m128i *)&v349[32]);
          v355 = *(_QWORD *)&v349[56];
          v64 = *(_BYTE **)&v349[48];
          v6 = _mm_loadu_si128((const __m128i *)&v349[64]);
          v328 = *(_QWORD *)&v349[88];
          v359 = *(_QWORD *)&v349[80];
          v89 = (_QWORD *)(m128i_i64 + 56);
          do
          {
            v90 = *(v89 - 7);
            if ( v90 )
              sub_140001660(*(v89 - 6), v90, 1);
            v91 = *(v89 - 4);
            if ( v91 != -1 && v91 )
              sub_140001660(*(v89 - 3), v91, 1);
            v92 = *(v89 - 1);
            if ( v92 )
              sub_140001660(*v89, v92, 1);
            v89 += 9;
            --v62;
          }
          while ( v62 );
          if ( v274 )
            sub_140001660(m128i_i64, 72 * v274, 8);
          goto LABEL_146;
        }
        v93 = (_QWORD *)(m128i_i64 + 56);
        do
        {
          v94 = *(v93 - 7);
          if ( v94 )
            sub_140001660(*(v93 - 6), v94, 1);
          v95 = *(v93 - 4);
          if ( v95 != -1 && v95 )
            sub_140001660(*(v93 - 3), v95, 1);
          v96 = *(v93 - 1);
          if ( v96 )
            sub_140001660(*v93, v96, 1);
          v93 += 9;
          --v62;
        }
        while ( v62 );
        goto LABEL_142;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v359 = (__int64)(v68 + 9);
          v76 = v68 + 6;
          if ( v346.m128i_i64[0] )
            break;
LABEL_103:
          sub_1416AC440(&v288, v68);
          if ( v68[3] == -1 )
          {
            v361 = -1;
            v84 = v260;
          }
          else
          {
            sub_1416AC440(&v341, v68 + 3);
            v282 = v341.m256i_i64[1];
            v361 = v341.m256i_i64[0];
            v84 = v341.m256i_i64[2];
          }
          sub_1416AC440(&v341, v76);
          *(_QWORD *)&v350[16] = v289;
          *(_OWORD *)v350 = v288;
          *(_QWORD *)&v350[48] = v361;
          *(_QWORD *)&v350[56] = v282;
          v260 = v84;
          *(_QWORD *)&v350[64] = v84;
          *(_QWORD *)&v350[40] = v341.m256i_i64[2];
          *(__m128i *)&v350[24] = _mm_loadu_si128((const __m128i *)&v341);
          v85 = v346.m128i_i64[0];
          if ( v346.m128i_i64[0] == v345.m128i_i64[0] )
            sub_14190FB90(&v345);
          v71 = v345.m128i_i64[1];
          v72 = 9 * v85;
          *(_QWORD *)(v345.m128i_i64[1] + 8 * v72 + 64) = *(_QWORD *)&v350[64];
          v73 = _mm_load_si128((const __m128i *)v350);
          v74 = _mm_load_si128((const __m128i *)&v350[16]);
          v75 = *(_OWORD *)&v350[32];
          *(_OWORD *)(v71 + 8 * v72 + 48) = *(_OWORD *)&v350[48];
          *(_OWORD *)(v71 + 8 * v72 + 32) = v75;
          *(__m128i *)(v71 + 8 * v72 + 16) = v74;
          *(__m128i *)(v71 + 8 * v72) = v73;
          v346.m128i_i64[0] = v85 + 1;
          v68 = (_QWORD *)v359;
          if ( (_BYTE *)v359 == v344 )
            goto LABEL_82;
        }
        v17 = 72 * v346.m128i_i64[0];
        v77 = v68[1];
        v78 = v68[2];
        v79 = (__int64 *)(v345.m128i_i64[1] + 48);
        while ( *(v79 - 4) != v78 || (unsigned int)sub_1418F4B70(*(v79 - 5), v77) )
        {
          v79 += 9;
          v17 -= 72;
          if ( !v17 )
            goto LABEL_103;
        }
        v80 = -1;
        if ( v68[3] != -1 )
        {
          if ( v68[5] != *(v79 - 1) || (unsigned int)sub_1418F4B70(v68[4], *(v79 - 2)) )
          {
            sub_1416AC440(v350, v68 + 3);
LABEL_95:
            v80 = *(_QWORD *)v350;
            v321 = _mm_loadu_si128((const __m128i *)&v350[8]);
            goto LABEL_96;
          }
          if ( *v79 != -1 )
          {
            sub_1416AC440(v350, v79);
            goto LABEL_95;
          }
        }
LABEL_96:
        v81 = *v79;
        if ( *v79 != -1 && v81 )
          sub_140001660(v79[1], v81, 1);
        *v79 = v80;
        *(__m128i *)(v79 + 1) = _mm_load_si128(&v321);
        sub_1416AC440(v350, v76);
        v82 = *(v79 - 3);
        if ( v82 )
          sub_140001660(*(v79 - 2), v82, 1);
        v83 = (__m128i *)(v79 - 3);
        v83[1].m128i_i64[0] = *(_QWORD *)&v350[16];
        *v83 = _mm_loadu_si128((const __m128i *)v350);
        v68 = (_QWORD *)v359;
        if ( (_BYTE *)v359 == v344 )
          goto LABEL_82;
      }
    }
LABEL_142:
    if ( v274 )
      sub_140001660(m128i_i64, 72 * v274, 8);
LABEL_144:
    v97 = v298;
    v98 = *(__int64 *)((char *)&off_1419E2D48 + v97 * 8);
    v99 = qword_1419E2D60[v97];
    v369 = 1;
    sub_1414039F0(v349, &v291, v98, v99);
    if ( *(_QWORD *)v349 != -1 )
    {
      v100 = _mm_loadu_si128((const __m128i *)&v349[17]);
      v101 = _mm_loadu_si128((const __m128i *)&v349[33]);
      *(_OWORD *)&v350[48] = *(_OWORD *)&v349[48];
      *(__m128i *)&v350[33] = v101;
      *(__m128i *)&v350[17] = v100;
      *(_OWORD *)v350 = *(_OWORD *)v349;
      v350[16] = v349[16];
      v64 = v350;
      v341.m256i_i64[0] = (__int64)v350;
      v341.m256i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(v349, &unk_1419D76CA, &v341);
      v17 = *(_QWORD *)&v349[8];
      v18 = *(_QWORD *)v349;
      v358 = *(_QWORD *)&v349[16];
      v369 = 1;
      sub_140193AA0(v350);
      v361 = 10;
      goto LABEL_146;
    }
    v331.m128i_i64[0] = 0;
    v331.m128i_i64[1] = 8;
    v332 = 0;
    v274 = v324;
    v318 = v323;
    v276 = v323;
    v353 = v324 + 32 * v325;
    v277 = v353;
    v117 = 32 * v325 - 32;
    v118 = v324 + 48;
    v119 = 0;
    v319 = v324;
    for ( j = (const __m128i *)v324; ; j = (const __m128i *)m128i_i64 )
    {
      if ( j == (const __m128i *)v353 )
      {
        v184 = v281;
        goto LABEL_291;
      }
      v344 = (_BYTE *)v118;
      m128i_i64 = (__int64)j[2].m128i_i64;
      v275 = j + 2;
      v121 = j->m128i_i64[0];
      v122 = j->m128i_i64[1];
      v252 = _mm_loadu_si128(j + 1);
      if ( v122 == -1 )
        break;
      v300 = v122;
      v301 = _mm_load_si128(&v252);
      if ( v121 >= *((_QWORD *)&v317 + 1) )
      {
        v370 = 1;
        sub_1419390C3(v121, *((_QWORD *)&v317 + 1), &off_1419DF7D0);
      }
      v123 = 80 * v121;
      v124 = (_QWORD *)(v317 + v123);
      if ( *(_QWORD *)(v317 + v123 + 24) == -1 )
      {
        v263.m128i_i64[0] = -1;
        v125 = 1;
        goto LABEL_199;
      }
      if ( (v119 & 1) != 0 )
      {
        *(_QWORD *)&v314 = v314 + 1;
        v263.m128i_i64[0] = -1;
        goto LABEL_193;
      }
      v126 = v17;
      v356 = v117;
      v127 = v124[4];
      v128 = v124[5];
      v129 = v124[1];
      v361 = v317 + v123;
      v130 = v124[2];
      v131 = v301;
      v370 = 1;
      sub_140282430(v350);
      if ( *(_QWORD *)&v350[32] == -1 )
      {
        v145 = *(_QWORD *)v350;
        v341.m256i_i64[0] = *(_QWORD *)v350;
        *(_QWORD *)v349 = 0;
        *(_QWORD *)&v349[8] = 1;
        *(_QWORD *)&v349[16] = 0;
        *(_QWORD *)&v350[16] = 1610612768;
        *(_QWORD *)v350 = v349;
        *(_QWORD *)&v350[8] = &off_1419E0B60;
        if ( (unsigned __int8)sub_1416BB0B0(&v341, v350) )
          sub_141939040(
            (unsigned int)aADisplayImplem_53,
            55,
            (unsigned int)&v357,
            (unsigned int)&unk_1419D7FE8,
            (__int64)&off_1419E29A8);
        v17 = *(_QWORD *)&v349[8];
        v358 = *(_QWORD *)v349;
        v359 = *(_QWORD *)&v349[16];
        if ( (unsigned int)(v145 & 3) - 2 >= 2 && (v145 & 3) != 0 )
        {
          *(_QWORD *)&v350[8] = v145 - 1;
          v350[0] = 3;
          v370 = 1;
          sub_1416BCB00(&v350[8]);
        }
        goto LABEL_234;
      }
      if ( *(_DWORD *)&v350[32] != 2 )
      {
        if ( *(_QWORD *)v350 )
          sub_140001660(*(_QWORD *)&v350[8], *(_QWORD *)v350, 1);
        v370 = 1;
        sub_140238DC0((unsigned int)v350, v127, v128, v129, v130);
        if ( *(_QWORD *)v350 == -2 )
        {
          *(_OWORD *)&v349[80] = *(_OWORD *)&v350[88];
          *(_OWORD *)&v349[64] = *(_OWORD *)&v350[72];
          v147 = _mm_loadu_si128((const __m128i *)&v350[8]);
          v148 = _mm_loadu_si128((const __m128i *)&v350[24]);
          *(_OWORD *)&v349[48] = *(_OWORD *)&v350[56];
          *(_OWORD *)&v349[32] = *(_OWORD *)&v350[40];
          *(__m128i *)&v349[16] = v148;
          *(__m128i *)v349 = v147;
          v345.m128i_i64[0] = 0;
          v345.m128i_i64[1] = 1;
          v346.m128i_i64[0] = 0;
          v341.m256i_i64[2] = 1610612768;
          v341.m256i_i64[0] = (__int64)&v345;
          v341.m256i_i64[1] = (__int64)&off_1419E0B60;
          if ( (unsigned __int8)sub_14104A7D0(v349, &v341) )
            sub_141939040(
              (unsigned int)aADisplayImplem_53,
              55,
              (unsigned int)&v357,
              (unsigned int)&unk_1419D7FE8,
              (__int64)&off_1419E29A8);
          v17 = v345.m128i_i64[1];
          v358 = v345.m128i_i64[0];
          v359 = v346.m128i_i64[0];
          v370 = 1;
          sub_1401954F0(&v350[8]);
LABEL_234:
          v133 = v334;
          v134 = v335;
          v135 = v336;
          v136 = v337;
          v137 = v338;
          v117 = v356;
          v124 = (_QWORD *)v361;
LABEL_235:
          v338 = v137;
          v337 = v136;
          v336 = v135;
          v335 = v134;
          v334 = v133;
          *(_QWORD *)v349 = v358;
          *(_QWORD *)&v349[8] = v17;
          *(_QWORD *)&v349[16] = v359;
          if ( !(unsigned __int8)sub_140291D70(aReplaceRollout, 31, v17, v359) )
            goto LABEL_252;
          v345.m128i_i64[0] = (__int64)&unk_1419DE680;
          v341.m256i_i64[0] = (__int64)&v345;
          v341.m256i_i64[1] = (__int64)sub_1402862F0;
          sub_1416ABFD0(v350, &unk_1419D73DA, &v341);
          v161 = *(_QWORD *)&v350[8];
          v315 = *(_QWORD *)&v350[8];
          v162 = sub_140291D70(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16], v17, v359);
          if ( *(_QWORD *)v350 )
            sub_140001660(v161, *(_QWORD *)v350, 1);
          if ( !v162 )
          {
            v345.m128i_i64[0] = (__int64)&unk_1419DE684;
            v341.m256i_i64[0] = (__int64)&v345;
            v341.m256i_i64[1] = (__int64)sub_1402862F0;
            sub_1416ABFD0(v350, &unk_1419D73DA, &v341);
            v163 = *(_QWORD *)&v350[8];
            v315 = *(_QWORD *)&v350[8];
            v164 = sub_140291D70(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16], v17, v359);
            if ( *(_QWORD *)v350 )
              sub_140001660(v163, *(_QWORD *)v350, 1);
            if ( !v164 )
            {
              v345.m128i_i64[0] = (__int64)&unk_1419DE688;
              v341.m256i_i64[0] = (__int64)&v345;
              v341.m256i_i64[1] = (__int64)sub_1402862F0;
              sub_1416ABFD0(v350, &unk_1419D73DA, &v341);
              v165 = *(_QWORD *)&v350[8];
              v315 = *(_QWORD *)&v350[8];
              v166 = sub_140291D70(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16], v17, v359);
              if ( *(_QWORD *)v350 )
                sub_140001660(v165, *(_QWORD *)v350, 1);
              if ( !v166 )
              {
                v345.m128i_i64[0] = (__int64)&unk_1419DE68C;
                v341.m256i_i64[0] = (__int64)&v345;
                v341.m256i_i64[1] = (__int64)sub_1402862F0;
                sub_1416ABFD0(v350, &unk_1419D73DA, &v341);
                v167 = *(_QWORD *)&v350[8];
                v315 = *(_QWORD *)&v350[8];
                v168 = sub_140291D70(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16], v17, v359);
                if ( *(_QWORD *)v350 )
                  sub_140001660(v167, *(_QWORD *)v350, 1);
                if ( !v168 )
                {
LABEL_252:
                  ++*((_QWORD *)&v314 + 1);
                  *(_QWORD *)v350 = v124;
                  *(_QWORD *)&v350[8] = sub_1400015F0;
                  *(_QWORD *)&v350[16] = v349;
                  *(_QWORD *)&v350[24] = sub_1400015F0;
                  sub_1416ABFD0(&v268, &unk_1419DF7E8, v350);
                  v172 = v310;
                  if ( v310 >= 3 )
                  {
                    if ( v268.m128i_i64[0] )
                      sub_140001660(v268.m128i_i64[1], v268.m128i_i64[0], 1);
                  }
                  else
                  {
                    if ( v310 == v308 )
                    {
                      v355 = v268.m128i_i64[1];
                      v361 = v268.m128i_i64[0];
                      sub_14190FDC0(&v308);
                    }
                    v173 = v309;
                    v174 = 3 * v172;
                    *(_QWORD *)(v309 + 8 * v174 + 16) = v269;
                    *(__m128i *)(v173 + 8 * v174) = _mm_loadu_si128(&v268);
                    v310 = v172 + 1;
                  }
                  if ( *(_QWORD *)v349 )
                    sub_140001660(*(_QWORD *)&v349[8], *(_QWORD *)v349, 1);
                  v144 = v300;
                  v119 = 0;
                  if ( v300 )
                    goto LABEL_205;
                  goto LABEL_186;
                }
              }
            }
          }
          *(_QWORD *)&v314 = v314 + 1;
          *(_QWORD *)v350 = v124;
          *(_QWORD *)&v350[8] = sub_1400015F0;
          sub_1416ABFD0(&v270, &unk_1419DF804, v350);
          v169 = v310;
          if ( v310 >= 3 )
          {
            if ( v270.m128i_i64[0] )
              sub_140001660(v270.m128i_i64[1], v270.m128i_i64[0], 1);
          }
          else
          {
            if ( v310 == v308 )
            {
              v355 = v270.m128i_i64[1];
              v361 = v270.m128i_i64[0];
              sub_14190FDC0(&v308);
            }
            v170 = v309;
            v171 = 3 * v169;
            *(_QWORD *)(v309 + 8 * v171 + 16) = v271;
            *(__m128i *)(v170 + 8 * v171) = _mm_loadu_si128(&v270);
            v310 = v169 + 1;
          }
          v263.m128i_i64[0] = -1;
          if ( *(_QWORD *)v349 )
            sub_140001660(*(_QWORD *)&v349[8], *(_QWORD *)v349, 1);
LABEL_193:
          v125 = 1;
          v119 = 1;
          goto LABEL_199;
        }
        if ( *(_QWORD *)v350 == -1 )
        {
          nullsub_1(v146);
          v160 = (__m128i *)sub_140001650(59, 1);
          if ( !v160 )
          {
            v370 = 1;
            sub_141938D2B(1, 59);
          }
          v17 = (__int64)v160;
          qmemcpy(&v160[1], "nger owned by the router; history preserved", 43);
          *v160 = _mm_loadu_si128((const __m128i *)&xmmword_1419D77B9);
          v359 = 59;
          v358 = 59;
          goto LABEL_234;
        }
        v340 = *(_QWORD *)v350;
        v149 = *(_QWORD *)&v350[16];
        v306 = *(_QWORD *)&v350[56];
        v339 = *(_QWORD *)&v350[48];
        v355 = *(_QWORD *)&v350[96];
        v287 = v351;
        *(_OWORD *)v350 = *(_OWORD *)&v350[8];
        *(_OWORD *)&v350[16] = 0;
        v329 = *(_QWORD *)v350;
        *(_QWORD *)&v350[32] = *(_QWORD *)v350;
        v307 = v149;
        *(_QWORD *)&v350[40] = v149;
        v365 = 1;
        sub_14062D280(v349, v350);
        if ( v349[0] == 0xFF )
        {
          v321.m128i_i64[0] = *(_QWORD *)&v349[8];
          v345.m128i_i64[0] = (__int64)&v321;
          v345.m128i_i64[1] = (__int64)sub_14163CE40;
          sub_1416ABFD0(v350, &unk_1419D77F4, &v345);
          v365 = 1;
          sub_14002F910(&v321);
          v126 = *(_QWORD *)&v350[8];
          v358 = *(_QWORD *)v350;
          v359 = *(_QWORD *)&v350[16];
          v132 = -2;
        }
        else
        {
          v341.m256i_i32[1] = *(_DWORD *)&v349[4];
          *(__int32 *)((char *)v341.m256i_i32 + 1) = *(_DWORD *)&v349[1];
          *(__m128i *)&v341.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v349[8]);
          v341.m256i_i64[3] = *(_QWORD *)&v349[24];
          v341.m256i_i8[0] = v349[0];
          v150 = (_BYTE *)sub_1416419F0(aPayload_0, 7, &v341);
          v132 = -1;
          if ( !v150 )
            goto LABEL_269;
          if ( *v150 != 5 )
            goto LABEL_269;
          v151 = v150 + 8;
          v152 = sub_140DEB9A0(v150 + 8, aModel_0, 5);
          if ( !v152
            || *(_BYTE *)v152 != 3
            || *(_QWORD *)(v152 + 24) == v131.m128i_i64[1]
            && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v152 + 16), v131.m128i_i64[0]) )
          {
            goto LABEL_269;
          }
          nullsub_1(v153);
          v154 = sub_140001650(5, 1);
          if ( !v154 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v154 + 4) = 108;
          *(_DWORD *)v154 = 1701080941;
          v345.m128i_i64[0] = 5;
          v345.m128i_i64[1] = v154;
          v346.m128i_i64[0] = 5;
          sub_14072C410((unsigned int)v350, v131.m128i_i32[2], 0, 1, 1);
          v155 = *(_QWORD *)&v350[8];
          LOBYTE(v359) = v350[0];
          if ( v350[0] )
            sub_141938D2B(*(_QWORD *)&v350[8], *(_QWORD *)&v350[16]);
          v156 = *(_QWORD *)&v350[16];
          if ( v131.m128i_i64[1] )
            sub_1418F44E0(*(__m128i **)&v350[16], (const __m128i *)v131.m128i_i64[0], v131.m128i_u64[1]);
          *(_QWORD *)&v350[8] = v155;
          *(_QWORD *)&v350[16] = v156;
          *(_QWORD *)&v350[24] = v131.m128i_i64[1];
          v350[0] = 3;
          sub_140E72AA0(v349, v151, &v345, v350);
          if ( v349[0] != 0xFF )
            sub_14002F9D0(v349);
          sub_1401977E0(v350, (__int64)&v341);
          if ( *(_QWORD *)v350 != -1 )
          {
            v288 = *(_OWORD *)v350;
            v289 = *(__int64 ***)&v350[16];
            sub_1402815E0(v349, v329, v307, &v288);
            if ( *(_DWORD *)v349 != -1 )
            {
              *(_OWORD *)&v350[80] = *(_OWORD *)&v349[80];
              *(_OWORD *)&v350[64] = *(_OWORD *)&v349[64];
              v157 = _mm_loadu_si128((const __m128i *)v349);
              v158 = _mm_loadu_si128((const __m128i *)&v349[16]);
              *(_OWORD *)&v350[48] = *(_OWORD *)&v349[48];
              *(_OWORD *)&v350[32] = *(_OWORD *)&v349[32];
              *(__m128i *)&v350[16] = v158;
              *(__m128i *)v350 = v157;
              sub_1401B2380(&v345, v350);
              v126 = v345.m128i_i64[1];
              v358 = v345.m128i_i64[0];
              v159 = v346.m128i_i64[0];
              goto LABEL_268;
            }
            v320 = *(_QWORD *)&v349[8];
            v137 = *(_QWORD *)&v349[24];
            v330 = *(_QWORD *)&v349[16];
            sub_14023D390((unsigned int)v349, v127, v128, *(_DWORD *)&v349[16], *(__int64 *)&v349[24], v329, v307);
            if ( *(_DWORD *)v349 != -1 )
            {
              *(_OWORD *)&v350[80] = *(_OWORD *)&v349[80];
              *(_OWORD *)&v350[64] = *(_OWORD *)&v349[64];
              v182 = _mm_loadu_si128((const __m128i *)v349);
              v183 = _mm_loadu_si128((const __m128i *)&v349[16]);
              *(_OWORD *)&v350[48] = *(_OWORD *)&v349[48];
              *(_OWORD *)&v350[32] = *(_OWORD *)&v349[32];
              *(__m128i *)&v350[16] = v183;
              *(__m128i *)v350 = v182;
              sub_1401B2470(&v345, v350);
              v126 = v345.m128i_i64[1];
              v358 = v345.m128i_i64[0];
              v359 = v346.m128i_i64[0];
              v132 = -2;
              if ( v320 )
                sub_140001660(v330, v320, 1);
              goto LABEL_269;
            }
            sub_141681D30(v350, v127, v128);
            v358 = *(_QWORD *)&v350[8];
            v132 = *(_QWORD *)v350;
            v359 = *(_QWORD *)&v350[24];
            v17 = *(_QWORD *)&v350[16];
            v365 = 0;
            sub_14002F9D0(&v341);
            if ( v339 )
              sub_140001660(v306, v339, 1);
            v175 = v355;
            v262 = v307;
            v117 = v356;
            v124 = (_QWORD *)v361;
            v176 = v340;
            v134 = v329;
            v177 = v320;
            v136 = v330;
            if ( (unsigned __int64)(v355 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
            {
LABEL_276:
              v133 = v176;
              v135 = v177;
              if ( v132 == -2 )
                goto LABEL_235;
              goto LABEL_198;
            }
LABEL_275:
            v361 = v132;
            v330 = v136;
            v178 = v134;
            v179 = v176;
            v180 = v137;
            v181 = v177;
            sub_140001660(v287, v175, 1);
            v136 = v330;
            v177 = v181;
            v137 = v180;
            v132 = v361;
            v134 = v178;
            v176 = v179;
            goto LABEL_276;
          }
          sub_1401B2310(v350, *(_QWORD *)&v350[8]);
          v126 = *(_QWORD *)&v350[8];
          v358 = *(_QWORD *)v350;
          v159 = *(_QWORD *)&v350[16];
LABEL_268:
          v359 = v159;
          v132 = -2;
LABEL_269:
          v365 = 1;
          sub_14002F9D0(&v341);
        }
        if ( v340 )
          sub_140001660(v329, v340, 1);
        v117 = v356;
        if ( v339 )
          sub_140001660(v306, v339, 1);
        v175 = v355;
        v176 = v334;
        v134 = v335;
        v177 = v336;
        v136 = v337;
        v137 = v338;
        v124 = (_QWORD *)v361;
        v17 = v126;
        if ( (unsigned __int64)(v355 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_276;
        goto LABEL_275;
      }
      v132 = -1;
      v133 = v334;
      v134 = v335;
      v135 = v336;
      v136 = v337;
      v137 = v338;
      v117 = v356;
      v124 = (_QWORD *)v361;
      v17 = v126;
LABEL_198:
      v334 = v133;
      *(_QWORD *)&v265 = v133;
      v335 = v134;
      *((_QWORD *)&v265 + 1) = v134;
      *(_QWORD *)&v266 = v262;
      v336 = v135;
      *((_QWORD *)&v266 + 1) = v135;
      v337 = v136;
      *(_QWORD *)&v267 = v136;
      v338 = v137;
      *((_QWORD *)&v267 + 1) = v137;
      v263.m128i_i64[0] = v132;
      v263.m128i_i64[1] = v358;
      v264.m128i_i64[0] = v17;
      v264.m128i_i64[1] = v359;
      v125 = v132 == -1;
      v119 = 0;
LABEL_199:
      v259 = v124;
      v258 = &v300;
      *(_QWORD *)&v288 = &v259;
      *((_QWORD *)&v288 + 1) = &unk_1419DF000;
      v289 = &v258;
      v290 = &unk_1419DF000;
      v364 = v125;
      v363 = 1;
      v362 = 1;
      sub_1401895D0((unsigned int)&v345, (unsigned int)&v291, (unsigned int)aUpdateThreadsS_1, 43, (__int64)&v288, 2);
      if ( v345.m128i_i64[0] != -1 )
      {
        v356 = v117;
        v198 = v319;
        v199 = _mm_loadu_si128(&v346);
        v343 = v348;
        v342 = v347;
        *(__m128i *)&v341.m256i_u64[2] = v199;
        *(__m128i *)v341.m256i_i8 = v345;
        v322 = v332;
        v321 = _mm_loadu_si128(&v331);
        if ( !v125 )
        {
          v360 = 0;
          sub_1401F4930(&v321, &v263);
        }
        *(_QWORD *)v349 = v124;
        *(_QWORD *)&v349[8] = sub_1400015F0;
        *(_QWORD *)&v349[16] = &v341;
        *(_QWORD *)&v349[24] = sub_141404740;
        v360 = v125;
        sub_1416ABFD0(&v250, &unk_1419DF849, v349);
        *(_QWORD *)&v350[24] = v251;
        *(__m128i *)&v350[8] = _mm_loadu_si128(&v250);
        *(_QWORD *)v350 = 10;
        v360 = v125;
        sub_14026AFF0(v349, v350, v321.m128i_i64[1], v322);
        v18 = *(_QWORD *)&v349[8];
        v361 = *(_QWORD *)v349;
        v358 = *(_QWORD *)&v349[24];
        v17 = *(_QWORD *)&v349[16];
        v5 = _mm_loadu_si128((const __m128i *)&v349[32]);
        v355 = *(_QWORD *)&v349[56];
        v64 = *(_BYTE **)&v349[48];
        v6 = _mm_loadu_si128((const __m128i *)&v349[64]);
        v328 = *(_QWORD *)&v349[88];
        v359 = *(_QWORD *)&v349[80];
        v200 = v322;
        if ( v322 )
        {
          v201 = (_QWORD *)(v321.m128i_i64[1] + 64);
          do
          {
            v202 = *(v201 - 8);
            if ( v202 )
              sub_140001660(*(v201 - 7), v202, 1);
            v203 = *(v201 - 4);
            if ( v203 )
              sub_140001660(*(v201 - 3), v203, 1);
            v204 = *(v201 - 1);
            if ( v204 )
              sub_140001660(*v201, v204, 1);
            v201 += 10;
            --v200;
          }
          while ( v200 );
        }
        v205 = v198;
        if ( v321.m128i_i64[0] )
          sub_140001660(v321.m128i_i64[1], 80 * v321.m128i_i64[0], 8);
        v364 = v125;
        v363 = 0;
        v362 = v125;
        sub_140193AA0(&v341);
        v206 = v318;
        v207 = v356;
        if ( v300 )
          sub_140001660(v301.m128i_i64[0], v300, 1);
        v208 = v344;
        if ( v353 != m128i_i64 )
        {
          v209 = v207 >> 5;
          do
          {
            v210 = *(v208 - 1);
            if ( v210 )
              sub_140001660(*v208, v210, 1);
            v208 += 4;
            --v209;
          }
          while ( v209 );
        }
        if ( v206 )
          sub_140001660(v205, 32 * v206, 8);
        if ( v291.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
        {
          v369 = 0;
          sub_141938FA0(&off_1419D80F8);
        }
        ++v291.m128i_i64[0];
        v211 = sub_1417AF4A0(v292.m128i_i64[0]);
        --v291.m128i_i64[0];
        if ( !v211 )
        {
          v369 = 0;
          sub_1414039F0(v350, &v291, aRollback_0, 8);
          if ( *(_QWORD *)v350 != -1 )
          {
            v369 = 0;
            sub_140193AA0(v350);
          }
        }
        goto LABEL_154;
      }
      if ( !v125 )
      {
        v138 = v332;
        if ( v332 == v331.m128i_i64[0] )
          sub_14190F6C0(&v331);
        v139 = v331.m128i_i64[1];
        v140 = 80 * v138;
        *(_OWORD *)(v331.m128i_i64[1] + v140 + 64) = v267;
        v141 = _mm_loadu_si128(&v263);
        v142 = _mm_loadu_si128(&v264);
        v143 = v265;
        *(_OWORD *)(v139 + v140 + 48) = v266;
        *(_OWORD *)(v139 + v140 + 32) = v143;
        *(__m128i *)(v139 + v140 + 16) = v142;
        *(__m128i *)(v139 + v140) = v141;
        v332 = v138 + 1;
        ++*((_QWORD *)&v313 + 1);
      }
      *(_QWORD *)&v313 = v313 + 1;
      v144 = v300;
      if ( v300 )
LABEL_205:
        sub_140001660(v301.m128i_i64[0], v144, 1);
LABEL_186:
      v117 -= 32LL;
      v118 = (__int64)(v344 + 32);
    }
    v184 = v281;
    v185 = v344;
    if ( v353 != m128i_i64 )
    {
      v186 = v117 >> 5;
      do
      {
        v187 = *(v185 - 1);
        if ( v187 )
        {
          v188 = v185;
          sub_140001660(*v185, v187, 1);
          v185 = v188;
        }
        v185 += 4;
        --v186;
      }
      while ( v186 );
    }
LABEL_291:
    if ( v318 )
      sub_140001660(v319, 32 * v318, 8);
    sub_1414039F0(&v345, &v291, aCommit_0, 6);
    if ( v291.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
    {
      v368 = 0;
      v367 = 1;
      sub_141938FA0(&off_1419D80F8);
    }
    ++v291.m128i_i64[0];
    v189 = sub_1417AF4A0(v292.m128i_i64[0]);
    --v291.m128i_i64[0];
    if ( !v189 )
    {
      v368 = 0;
      v367 = 1;
      sub_1414039F0(v350, &v291, aRollback_0, 8);
      if ( *(_QWORD *)v350 != -1 )
      {
        v368 = 0;
        v367 = 1;
        sub_140193AA0(v350);
      }
    }
    if ( v345.m128i_i64[0] != -1 )
      break;
    v368 = 0;
    v367 = 1;
    sub_14023D8C0((__int64)&v291, (__int64)aThreadModelCon, 24);
    if ( (unsigned __int64)v313 | *((_QWORD *)&v314 + 1) )
    {
      *(_QWORD *)v349 = v326;
      *(_QWORD *)&v349[8] = v184;
      *(_QWORD *)v350 = v349;
      *(_QWORD *)&v350[8] = sub_14169F630;
      *(_QWORD *)&v350[16] = &v311;
      *(_QWORD *)&v350[24] = sub_1416BCB10;
      *(_QWORD *)&v350[32] = &v313;
      *(_QWORD *)&v350[40] = sub_1416BCB10;
      *(_QWORD *)&v350[48] = (char *)&v313 + 8;
      *(_QWORD *)&v350[56] = sub_1416BCB10;
      *(_QWORD *)&v350[64] = &v314;
      *(_QWORD *)&v350[72] = sub_1416BCB10;
      *(_QWORD *)&v350[80] = (char *)&v314 + 8;
      *(_QWORD *)&v350[88] = sub_1416BCB10;
      v368 = 0;
      v367 = 1;
      sub_1416ABFD0(v238, &unk_1419DF75C, v350);
      v368 = 0;
      v367 = 1;
      sub_14019B500((unsigned int)aRelayModelCata, 19, (unsigned int)aConverged, 9, (__int64)v238);
      v4 = v313;
      v359 = *((_QWORD *)&v314 + 1);
    }
    else
    {
      v359 = 0;
      v4 = 0;
    }
    v18 = v308;
    v17 = v309;
    v19 = v310;
    v5 = _mm_loadu_si128((const __m128i *)&v311);
    v3 = *((_BYTE **)&v312 + 1);
    v6 = _mm_loadu_si128((const __m128i *)((char *)&v313 + 8));
    v212 = v332;
    if ( v332 )
    {
      v213 = (_QWORD *)(v331.m128i_i64[1] + 64);
      do
      {
        v214 = *(v213 - 8);
        if ( v214 )
          sub_140001660(*(v213 - 7), v214, 1);
        v215 = *(v213 - 4);
        if ( v215 )
          sub_140001660(*(v213 - 3), v215, 1);
        v216 = *(v213 - 1);
        if ( v216 )
          sub_140001660(*v213, v216, 1);
        v213 += 10;
        --v212;
      }
      while ( v212 );
    }
    if ( v331.m128i_i64[0] )
      sub_140001660(v331.m128i_i64[1], 80 * v331.m128i_i64[0], 8);
    v217 = *((_QWORD *)&v317 + 1);
    if ( *((_QWORD *)&v317 + 1) )
    {
      v218 = (_QWORD *)(v317 + 64);
      do
      {
        v219 = *(v218 - 8);
        if ( v219 )
          sub_140001660(*(v218 - 7), v219, 1);
        v220 = *(v218 - 5);
        if ( v220 != -1 && v220 )
          sub_140001660(*(v218 - 4), v220, 1);
        v221 = *(v218 - 1);
        if ( v221 != -1 && v221 )
          sub_140001660(*v218, v221, 1);
        v218 += 10;
        --v217;
      }
      while ( v217 );
    }
    if ( v316 )
      sub_140001660(v317, 80 * v316, 8);
    sub_1401923E0(&v291);
    v20 = v359;
LABEL_178:
    *(__m128i *)v280 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v280), v5);
    *(_QWORD *)&v280[16] += v3;
    *(_QWORD *)&v280[24] += v4;
    *(__m128i *)&v280[32] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v280[32]), v6);
    v359 = v20;
    *(_QWORD *)&v280[48] += v20;
    *(_QWORD *)v350 = v17;
    *(_QWORD *)&v350[16] = v18;
    *(_QWORD *)&v350[8] = v17;
    *(_QWORD *)&v350[24] = 24 * v19 + v17;
    v115 = v279;
    if ( v19 > v278.m128i_i64[0] - v279 )
    {
      sub_14190D590((unsigned int)&v278, v279, v19, 8, 24);
      v115 = v279;
    }
    else if ( !v19 )
    {
      goto LABEL_181;
    }
    sub_1418F44E0((__m128i *)(v278.m128i_i64[1] + 24 * v115), (const __m128i *)v17, 24 * v19);
LABEL_181:
    v279 = v19 + v115;
    if ( v18 )
      sub_140001660(v17, 24 * v18, 8);
    v116 = v302;
    if ( v304 )
      sub_140001660(v326, v304, 1);
    v13 = v116 - 32;
    v333 += 4;
  }
  v190 = _mm_loadu_si128(&v345);
  v191 = _mm_loadu_si128(&v346);
  v343 = v348;
  v342 = v347;
  *(__m128i *)&v341.m256i_u64[2] = v191;
  *(__m128i *)v341.m256i_i8 = v190;
  *(_QWORD *)v349 = &v341;
  *(_QWORD *)&v349[8] = sub_141404740;
  sub_1416ABFD0(&v248, &unk_1419DF704, v349);
  *(_QWORD *)&v350[24] = v249;
  *(__m128i *)&v350[8] = _mm_loadu_si128(&v248);
  *(_QWORD *)v350 = 10;
  sub_14026AFF0(v349, v350, v331.m128i_i64[1], v332);
  v18 = *(_QWORD *)&v349[8];
  v361 = *(_QWORD *)v349;
  v358 = *(_QWORD *)&v349[24];
  v17 = *(_QWORD *)&v349[16];
  v5 = _mm_loadu_si128((const __m128i *)&v349[32]);
  v355 = *(_QWORD *)&v349[56];
  v64 = *(_BYTE **)&v349[48];
  v6 = _mm_loadu_si128((const __m128i *)&v349[64]);
  v192 = *(_QWORD *)&v349[88];
  v359 = *(_QWORD *)&v349[80];
  v368 = 0;
  v367 = 1;
  sub_140193AA0(&v341);
  v328 = v192;
  v193 = v332;
  if ( v332 )
  {
    v194 = (_QWORD *)(v331.m128i_i64[1] + 64);
    do
    {
      v195 = *(v194 - 8);
      if ( v195 )
        sub_140001660(*(v194 - 7), v195, 1);
      v196 = *(v194 - 4);
      if ( v196 )
        sub_140001660(*(v194 - 3), v196, 1);
      v197 = *(v194 - 1);
      if ( v197 )
        sub_140001660(*v194, v197, 1);
      v194 += 10;
      --v193;
    }
    while ( v193 );
  }
  if ( v331.m128i_i64[0] )
  {
    v105 = v331.m128i_i64[1];
    v106 = 80 * v331.m128i_i64[0];
    goto LABEL_153;
  }
LABEL_154:
  v107 = v310;
  if ( v310 )
  {
    v108 = (_QWORD *)(v309 + 8);
    do
    {
      v109 = *(v108 - 1);
      if ( v109 )
        sub_140001660(*v108, v109, 1);
      v108 += 3;
      --v107;
    }
    while ( v107 );
  }
  if ( v308 )
    sub_140001660(v309, 24 * v308, 8);
LABEL_161:
  v110 = *((_QWORD *)&v317 + 1);
  if ( *((_QWORD *)&v317 + 1) )
  {
    v111 = (_QWORD *)(v317 + 64);
    do
    {
      v112 = *(v111 - 8);
      if ( v112 )
        sub_140001660(*(v111 - 7), v112, 1);
      v113 = *(v111 - 5);
      if ( v113 != -1 && v113 )
        sub_140001660(*(v111 - 4), v113, 1);
      v114 = *(v111 - 1);
      if ( v114 != -1 && v114 )
        sub_140001660(*v111, v114, 1);
      v111 += 10;
      --v110;
    }
    while ( v110 );
  }
  v27 = v64;
  if ( v316 )
    sub_140001660(v317, 80 * v316, 8);
  v13 = v302;
  v29 = v328;
  v26 = v355;
  v28 = v359;
LABEL_175:
  sub_1401923E0(&v291);
  v20 = v28;
  v24 = v29;
  v21 = v5;
  v23 = v6;
  v22 = __PAIR128__(v26, (unsigned __int64)v27);
LABEL_176:
  if ( v361 == -1 )
  {
    v328 = v24;
    v4 = *((_QWORD *)&v22 + 1);
    v3 = (_BYTE *)v22;
    v5 = v21;
    v6 = v23;
    v19 = v358;
    goto LABEL_178;
  }
  v229 = v283;
  *(_QWORD *)v283 = v361;
  *(_QWORD *)(v229 + 8) = v18;
  *(_QWORD *)(v229 + 16) = v17;
  *(_QWORD *)(v229 + 24) = v358;
  *(__m128i *)(v229 + 32) = v21;
  *(_OWORD *)(v229 + 48) = v22;
  *(__m128i *)(v229 + 64) = v23;
  *(_QWORD *)(v229 + 80) = v20;
  *(_QWORD *)(v229 + 88) = v24;
  if ( v304 )
    sub_140001660(v326, v304, 1);
  v230 = v284;
  v231 = v333;
  if ( (__int64 *)v305 != v303 )
  {
    v232 = v13 >> 5;
    do
    {
      v233 = *(v231 - 1);
      if ( v233 )
        sub_140001660(*v231, v233, 1);
      v231 += 4;
      --v232;
    }
    while ( v232 );
  }
  if ( v230 )
    sub_140001660(*((_QWORD *)&v284 + 1), 32 * v230, 8);
  v234 = v278.m128i_i64[1];
  v235 = v279;
  if ( v279 )
  {
    v236 = (_QWORD *)(v278.m128i_i64[1] + 8);
    do
    {
      v237 = *(v236 - 1);
      if ( v237 )
        sub_140001660(*v236, v237, 1);
      v236 += 3;
      --v235;
    }
    while ( v235 );
  }
  if ( v278.m128i_i64[0] )
    sub_140001660(v234, 24 * v278.m128i_i64[0], 8);
  return sub_1401962C0(&v239);
}
