// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x140808cb0 | successor of pre-update 0x1402620d0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140808CB0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __m128i v5; // xmm8
  __m128i v6; // xmm9
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  _QWORD *v13; // rbx
  __int64 *i; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r13
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i v40; // xmm10
  __int64 v41; // r8
  unsigned __int64 v42; // r15
  __m128i v43; // xmm11
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // r10
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  bool v55; // si
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __m128i si128; // xmm0
  _BYTE *v61; // rsi
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm0
  _QWORD *v65; // rsi
  __int64 v66; // rsi
  _QWORD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __int128 v72; // xmm2
  _QWORD *v73; // rdi
  __int64 v74; // r13
  __int64 v75; // r15
  __int64 v76; // r12
  __int64 v77; // r15
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  _QWORD *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  _QWORD *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  __int64 v99; // rbx
  _QWORD *v100; // r14
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned __int64 v104; // rbx
  _QWORD *v105; // r14
  __int64 v106; // rdx
  __int64 v107; // rbx
  _QWORD *v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rbx
  _QWORD *v113; // rbx
  unsigned __int64 v114; // r12
  __int64 v115; // rcx
  char v116; // si
  const __m128i *j; // rax
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  _QWORD *v121; // r13
  bool v122; // bl
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rcx
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __int128 v128; // xmm2
  __int64 v129; // rdx
  __int64 v130; // r12
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rbx
  __m128i v134; // kr90_16
  __int64 v135; // rsi
  __int64 v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r15
  __int64 v142; // rdx
  __int64 v143; // rcx
  __m128i v144; // xmm0
  __m128i v145; // xmm1
  __int64 v146; // rdx
  _BYTE *v147; // rax
  _BYTE *v148; // rbx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rsi
  __int64 v154; // r15
  __m128i v155; // xmm0
  __m128i v156; // xmm1
  __int64 v157; // rax
  __m128i *v158; // rax
  __int64 v159; // rsi
  char v160; // di
  __int64 v161; // rsi
  char v162; // di
  __int64 v163; // rsi
  char v164; // di
  __int64 v165; // rsi
  char v166; // di
  unsigned __int64 v167; // rsi
  __int64 v168; // rax
  __int64 v169; // rcx
  unsigned __int64 v170; // rsi
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // r9
  __int64 v175; // r10
  __int64 v176; // rsi
  __int64 v177; // rdi
  __int64 v178; // rbx
  __m128i v179; // xmm0
  __m128i v180; // xmm1
  __int64 v181; // rsi
  _QWORD *v182; // rax
  unsigned __int64 v183; // r12
  __int64 v184; // rdx
  _QWORD *v185; // rdi
  int v186; // eax
  __m128i v187; // xmm0
  __m128i v188; // xmm1
  __int64 v189; // rbx
  __int64 v190; // rbx
  _QWORD *v191; // r14
  __int64 v192; // rdx
  __int64 v193; // rdx
  __int64 v194; // rdx
  _QWORD *v195; // rdi
  __int64 v196; // r13
  __m128i v197; // xmm1
  __int64 v198; // r15
  _QWORD *v199; // r14
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 v202; // rdx
  __int64 v203; // r15
  __int64 v204; // r14
  unsigned __int64 v205; // r13
  _QWORD *v206; // rbx
  unsigned __int64 v207; // r13
  __int64 v208; // rdx
  int v209; // eax
  __int64 v210; // rsi
  _QWORD *v211; // rbx
  __int64 v212; // rdx
  __int64 v213; // rdx
  __int64 v214; // rdx
  __int64 v215; // rsi
  _QWORD *v216; // rbx
  __int64 v217; // rdx
  __int64 v218; // rdx
  __int64 v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rsi
  __m128i v222; // xmm0
  __m128i v223; // xmm1
  __int128 v224; // xmm2
  __m128i *v225; // r9
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rsi
  __int64 v229; // rdi
  _QWORD *v230; // rbx
  __int64 v231; // rdx
  _BYTE v232[24]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v233; // [rsp+50h] [rbp-30h] BYREF
  __m128i v234; // [rsp+58h] [rbp-28h]
  __m128i v235; // [rsp+68h] [rbp-18h]
  __m128i v236; // [rsp+78h] [rbp-8h]
  __int128 v237; // [rsp+88h] [rbp+8h]
  __m128i v238; // [rsp+98h] [rbp+18h]
  __m128i v239; // [rsp+A8h] [rbp+28h]
  __int128 v240; // [rsp+B8h] [rbp+38h]
  __int64 v241; // [rsp+C8h] [rbp+48h]
  __m128i v242; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v243; // [rsp+E0h] [rbp+60h]
  __m128i v244; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v245; // [rsp+F8h] [rbp+78h]
  __m128i v246; // [rsp+100h] [rbp+80h] BYREF
  __int64 v247; // [rsp+118h] [rbp+98h]
  _QWORD *v248; // [rsp+120h] [rbp+A0h]
  __int64 v249; // [rsp+128h] [rbp+A8h]
  __int64 v250; // [rsp+130h] [rbp+B0h]
  _QWORD v251[3]; // [rsp+138h] [rbp+B8h] BYREF
  __int64 *v252; // [rsp+150h] [rbp+D0h] BYREF
  _QWORD *v253; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v254; // [rsp+160h] [rbp+E0h]
  _QWORD *v255; // [rsp+168h] [rbp+E8h]
  __int64 v256; // [rsp+170h] [rbp+F0h]
  __m128i v257; // [rsp+178h] [rbp+F8h] BYREF
  __m128i v258; // [rsp+188h] [rbp+108h] BYREF
  __int128 v259; // [rsp+198h] [rbp+118h]
  __int128 v260; // [rsp+1A8h] [rbp+128h]
  __int128 v261; // [rsp+1B8h] [rbp+138h]
  __m128i v262; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v263; // [rsp+1D8h] [rbp+158h]
  __m128i v264; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v265; // [rsp+1F0h] [rbp+170h]
  __m128i v266; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v267; // [rsp+208h] [rbp+188h]
  __int64 v268; // [rsp+210h] [rbp+190h] BYREF
  const __m128i *v269; // [rsp+218h] [rbp+198h]
  __int64 v270; // [rsp+220h] [rbp+1A0h]
  __int64 v271; // [rsp+228h] [rbp+1A8h]
  __m128i v272; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v273; // [rsp+240h] [rbp+1C0h] BYREF
  _BYTE v274[56]; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v275; // [rsp+280h] [rbp+200h]
  __int64 v276; // [rsp+288h] [rbp+208h]
  __int64 v277; // [rsp+290h] [rbp+210h]
  __int64 v278; // [rsp+298h] [rbp+218h]
  __int64 v279; // [rsp+2A0h] [rbp+220h]
  __int64 v280; // [rsp+2A8h] [rbp+228h]
  __int128 v281; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 **v282; // [rsp+2C0h] [rbp+240h]
  void *v283; // [rsp+2C8h] [rbp+248h]
  __m128i v284; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v285; // [rsp+2E0h] [rbp+260h] BYREF
  __m128i v286; // [rsp+2F0h] [rbp+270h]
  __int128 v287; // [rsp+300h] [rbp+280h]
  __m128i v288; // [rsp+310h] [rbp+290h]
  __m128i v289; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v290; // [rsp+330h] [rbp+2B0h]
  unsigned __int8 v291; // [rsp+338h] [rbp+2B8h]
  _DWORD v292[3]; // [rsp+339h] [rbp+2B9h]
  __int64 v293; // [rsp+348h] [rbp+2C8h] BYREF
  __m128i v294; // [rsp+350h] [rbp+2D0h]
  __int64 *v295; // [rsp+360h] [rbp+2E0h]
  __int64 v296; // [rsp+368h] [rbp+2E8h]
  __int64 v297; // [rsp+370h] [rbp+2F0h]
  __int64 v298; // [rsp+378h] [rbp+2F8h]
  __int64 v299; // [rsp+380h] [rbp+300h]
  __int64 v300; // [rsp+388h] [rbp+308h]
  __int64 v301; // [rsp+390h] [rbp+310h]
  __int64 v302; // [rsp+398h] [rbp+318h] BYREF
  __int64 v303; // [rsp+3A0h] [rbp+320h]
  unsigned __int64 v304; // [rsp+3A8h] [rbp+328h]
  __int64 v305; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v306; // [rsp+3B8h] [rbp+338h]
  __int128 v307; // [rsp+3C8h] [rbp+348h] BYREF
  __int128 v308; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v309; // [rsp+3E8h] [rbp+368h]
  __int64 v310; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v311; // [rsp+3F8h] [rbp+378h]
  __int64 v312; // [rsp+408h] [rbp+388h]
  __int64 v313; // [rsp+410h] [rbp+390h]
  __int64 v314; // [rsp+418h] [rbp+398h]
  __m128i v315; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v316; // [rsp+430h] [rbp+3B0h]
  __int64 v317; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v318; // [rsp+448h] [rbp+3C8h]
  __int64 v319; // [rsp+450h] [rbp+3D0h]
  __int64 v320; // [rsp+458h] [rbp+3D8h]
  unsigned __int64 v321; // [rsp+460h] [rbp+3E0h]
  __int64 *v322; // [rsp+468h] [rbp+3E8h]
  __int64 v323; // [rsp+470h] [rbp+3F0h]
  __int64 v324; // [rsp+478h] [rbp+3F8h]
  __int64 v325; // [rsp+480h] [rbp+400h]
  __m128i v326; // [rsp+488h] [rbp+408h] BYREF
  __int64 v327; // [rsp+498h] [rbp+418h]
  _QWORD *v328; // [rsp+4A0h] [rbp+420h]
  __int64 v329; // [rsp+4A8h] [rbp+428h]
  __int64 v330; // [rsp+4B0h] [rbp+430h]
  __int64 v331; // [rsp+4B8h] [rbp+438h]
  __int64 v332; // [rsp+4C0h] [rbp+440h]
  __int64 v333; // [rsp+4C8h] [rbp+448h]
  __int64 v334; // [rsp+4D0h] [rbp+450h]
  __int64 v335; // [rsp+4D8h] [rbp+458h]
  __m256i v336; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v337; // [rsp+500h] [rbp+480h]
  __int128 v338; // [rsp+510h] [rbp+490h]
  __m128i v339; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v340; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v341; // [rsp+540h] [rbp+4C0h]
  __int128 v342; // [rsp+550h] [rbp+4D0h]
  _BYTE v343[96]; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v344; // [rsp+5C8h] [rbp+548h]
  _BYTE v345[104]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v346; // [rsp+638h] [rbp+5B8h]
  __int64 v347; // [rsp+648h] [rbp+5C8h]
  __int64 v348; // [rsp+660h] [rbp+5E0h]
  __int64 m128i_i64; // [rsp+668h] [rbp+5E8h]
  __int64 v350; // [rsp+670h] [rbp+5F0h]
  unsigned __int64 v351; // [rsp+678h] [rbp+5F8h]
  char v352; // [rsp+687h] [rbp+607h] BYREF
  __int64 v353; // [rsp+688h] [rbp+608h]
  __int64 v354; // [rsp+690h] [rbp+610h]
  bool v355; // [rsp+69Fh] [rbp+61Fh]
  __int64 v356; // [rsp+6A0h] [rbp+620h]
  char v357; // [rsp+6AFh] [rbp+62Fh]
  char v358; // [rsp+6B0h] [rbp+630h]
  bool v359; // [rsp+6B1h] [rbp+631h]
  char v360; // [rsp+6B2h] [rbp+632h]
  char v361; // [rsp+6B3h] [rbp+633h]
  char v362; // [rsp+6B4h] [rbp+634h]
  char v363; // [rsp+6B5h] [rbp+635h]
  char v364; // [rsp+6B6h] [rbp+636h]
  char v365; // [rsp+6B7h] [rbp+637h]
  __int64 v366; // [rsp+6B8h] [rbp+638h]

  v366 = -2;
  v322 = a3;
  sub_1407E3360(v345, a2);
  v284 = *(__m128i *)&v345[8];
  v285 = *(__m128i *)&v345[24];
  v286 = *(__m128i *)&v345[40];
  v287 = *(_OWORD *)&v345[56];
  v288 = *(__m128i *)&v345[72];
  v289 = *(__m128i *)&v345[88];
  if ( *(_QWORD *)v345 == -2 )
  {
    *(__m128i *)(a1 + 80) = v289;
    *(__m128i *)(a1 + 64) = v288;
    v9 = _mm_load_si128(&v284);
    v10 = _mm_load_si128(&v285);
    v11 = v286;
    *(_OWORD *)(a1 + 48) = v287;
    *(__m128i *)(a1 + 32) = v11;
    *(__m128i *)(a1 + 16) = v10;
    *(__m128i *)a1 = v9;
    return a1;
  }
  v299 = a1;
  v241 = v347;
  v240 = v346;
  v234 = v284;
  v235 = _mm_load_si128(&v285);
  v236 = v286;
  v237 = v287;
  v238 = v288;
  v239 = _mm_load_si128(&v289);
  v233 = *(_QWORD *)v345;
  v272.m128i_i64[0] = 0;
  memset(v274, 0, sizeof(v274));
  v272.m128i_i64[1] = 8;
  v273 = 0;
  sub_140A2C460(v345, a2);
  v247 = *(_QWORD *)&v345[8];
  v298 = *(_QWORD *)v345;
  v249 = *(_QWORD *)v345;
  v297 = *(_QWORD *)&v345[8] + 32LL * *(_QWORD *)&v345[16];
  v250 = v297;
  v278 = *(_QWORD *)(a2 + 776);
  v279 = *(_QWORD *)(a2 + 784);
  v321 = 32LL * *(_QWORD *)&v345[16] - 32;
  v255 = v322 + 4;
  v13 = (_QWORD *)(*(_QWORD *)&v345[8] + 40LL);
  v277 = *(_QWORD *)&v345[8];
  for ( i = *(__int64 **)&v345[8]; ; i = v295 )
  {
    if ( i == (__int64 *)v297 )
      goto LABEL_364;
    v295 = i + 4;
    v248 = i + 4;
    v15 = *i;
    if ( *i == -1 )
    {
      if ( (__int64 *)v297 != v295 )
      {
        v321 >>= 5;
        do
        {
          v220 = *(v13 - 1);
          if ( v220 )
            sub_140001660(*v13, v220, 1);
          v13 += 4;
          --v321;
        }
        while ( v321 );
      }
LABEL_364:
      if ( v298 )
        sub_140001660(v277, 32 * v298, 8);
      v221 = v299;
      *(_OWORD *)(v299 + 72) = *(_OWORD *)&v274[40];
      v222 = _mm_loadu_si128(&v272);
      v223 = _mm_loadu_si128((const __m128i *)&v273);
      v224 = *(_OWORD *)&v274[8];
      *(_OWORD *)(v221 + 56) = *(_OWORD *)&v274[24];
      *(_OWORD *)(v221 + 40) = v224;
      *(__m128i *)(v221 + 24) = v223;
      *(__m128i *)(v221 + 8) = v222;
      *(_QWORD *)v221 = -1;
      sub_140779490(&v233);
      return v221;
    }
    v344 = v3;
    v296 = v15;
    v16 = i[2];
    v320 = i[1];
    sub_1416C49D0(v345, v320, v16);
    v328 = v13;
    if ( *(_DWORD *)v345 == 2 )
    {
      if ( (v345[8] & 3u) - 2 >= 2 && (v345[8] & 3) != 0 )
      {
        --*(_QWORD *)&v345[8];
        v345[0] = 3;
        sub_1416EBAD0(&v345[8]);
      }
      v5 = 0;
      v17 = 8;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v4 = 0;
      v3 = 0;
      v6 = 0;
      goto LABEL_172;
    }
    sub_1407E1670((__int64)v345, v320, v16);
    v275 = v16;
    v18 = *(_QWORD *)&v345[8];
    v17 = *(_QWORD *)&v345[16];
    v21 = _mm_loadu_si128((const __m128i *)&v345[32]);
    v22 = *(_QWORD *)&v345[56];
    v3 = *(_QWORD *)&v345[48];
    v23 = _mm_loadu_si128((const __m128i *)&v345[64]);
    v20 = *(_QWORD *)&v345[80];
    v24 = *(_QWORD *)&v345[88];
    if ( (_BYTE)v346 == 0xFF )
    {
      v356 = *(_QWORD *)v345;
      v353 = *(_QWORD *)&v345[24];
      goto LABEL_170;
    }
    *(_DWORD *)((char *)v292 + 3) = DWORD1(v346);
    v292[0] = *(_DWORD *)((char *)&v346 + 1);
    v284 = *(__m128i *)v345;
    v285 = *(__m128i *)&v345[16];
    v286 = v21;
    v287 = *(_OWORD *)&v345[48];
    v288 = v23;
    v289 = *(__m128i *)&v345[80];
    v290 = *(_QWORD *)&v345[96];
    v291 = v346;
    sub_1407DEE20(v345, &v284, *(_QWORD *)&v345[88]);
    v18 = *(_QWORD *)&v345[8];
    v17 = *(_QWORD *)&v345[16];
    if ( *(_QWORD *)v345 != -1 )
    {
      v356 = *(_QWORD *)v345;
      v353 = *(_QWORD *)&v345[24];
      v5 = _mm_loadu_si128((const __m128i *)&v345[32]);
      v26 = *(_QWORD *)&v345[56];
      v3 = *(_QWORD *)&v345[48];
      v6 = _mm_loadu_si128((const __m128i *)&v345[64]);
      v27 = *(_QWORD *)&v345[80];
      v28 = *(_QWORD *)&v345[88];
      v13 = v328;
      goto LABEL_169;
    }
    v310 = *(_QWORD *)&v345[8];
    v311 = *(_OWORD *)&v345[16];
    v305 = *(_QWORD *)&v345[24];
    v302 = 0;
    v308 = 0;
    v307 = 0;
    v306 = 0;
    v303 = 8;
    v304 = 0;
    if ( !*(_QWORD *)&v345[24] )
    {
      v5 = 0;
      v356 = -1;
      v17 = 8;
      v61 = nullptr;
      v350 = 0;
      v354 = 0;
      v353 = 0;
      v18 = 0;
      v6 = 0;
      goto LABEL_157;
    }
    v317 = 0;
    v318 = 8;
    v319 = 0;
    v29 = *(_QWORD *)&v345[16] + 80LL * *(_QWORD *)&v345[24];
    v30 = 0;
    v350 = v4;
    while ( 2 )
    {
      if ( v17 != v29 )
      {
        if ( *(_QWORD *)(v17 + 56) == -1 )
        {
          v31 = 0;
        }
        else
        {
          v31 = *(_QWORD *)(v17 + 64);
          v25 = *(_QWORD *)(v17 + 72);
        }
        v364 = 1;
        sub_1407C5320(&v339, &v233, v31, v25);
        v32 = v339.m128i_i64[0] ^ 0x8000000000000000uLL;
        if ( v339.m128i_i64[0] >= 0 )
          v32 = 2;
        switch ( v32 )
        {
          case 0uLL:
            *(_QWORD *)&v306 = v306 + 1;
            goto LABEL_19;
          case 1uLL:
            ++*((_QWORD *)&v306 + 1);
            goto LABEL_19;
          case 2uLL:
            m128i_i64 = v339.m128i_i64[1];
            v356 = v339.m128i_i64[0];
            v353 = v340.m128i_i64[0];
            if ( !v322 || *(_QWORD *)(v17 + 24) == -1 || !v322[3] )
              goto LABEL_41;
            v33 = *(_QWORD *)(v17 + 32);
            v34 = *(_QWORD *)(v17 + 40);
            v313 = *(_QWORD *)(v17 + 8);
            v312 = *(_QWORD *)(v17 + 16);
            v361 = 1;
            v348 = v33;
            v351 = v34;
            v35 = sub_1406CFC30(v255);
            _RAX = v35 >> 57;
            v37 = *v322;
            v38 = v322[1];
            v39 = _mm_cvtsi32_si128(v35 >> 57);
            v40 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v39, v39), 0), 68);
            v41 = 0;
            break;
          case 3uLL:
            ++*((_QWORD *)&v308 + 1);
            goto LABEL_19;
        }
        while ( 1 )
        {
          v42 = v38 & v35;
          v43 = _mm_loadu_si128((const __m128i *)(v37 + v42));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v43, v40));
          if ( _ESI )
            break;
LABEL_36:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v43, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
            goto LABEL_41;
          v35 = v41 + v42 + 16;
          v41 += 16;
        }
        v334 = v38;
        v335 = v41;
        while ( 1 )
        {
          __asm { tzcnt   eax, esi }
          v45 = -120LL * (v38 & (v42 + _RAX));
          v4 = v37;
          v361 = 1;
          if ( (unsigned __int8)sub_140759B50(v348, v351, v37 - 120 * (v38 & (v42 + _RAX)) - 120) )
            break;
          _RAX = (unsigned int)(_ESI - 1);
          LOWORD(_RAX) = _ESI & (_ESI - 1);
          _ESI = _RAX;
          v37 = v4;
          v38 = v334;
          v41 = v335;
          if ( !(_WORD)_RAX )
            goto LABEL_36;
        }
        v4 += v45;
        if ( *(_QWORD *)(v4 - 72) == v312 && !(unsigned int)sub_141923B40(*(_QWORD *)(v4 - 80), v313, v312) )
        {
          v361 = 1;
          sub_140A934F0(v345, v348, v351);
          if ( *(_QWORD *)&v345[32] == -1 )
          {
            if ( (v345[0] & 3u) - 2 >= 2 && (v345[0] & 3) != 0 )
            {
              *(_QWORD *)&v343[8] = *(_QWORD *)v345 - 1LL;
              v343[0] = 3;
              v361 = 1;
              sub_1416EBAD0(&v343[8]);
            }
          }
          else if ( *(_DWORD *)&v345[32] != 2 )
          {
            v49 = *(_QWORD *)v345;
            if ( *(_QWORD *)v345 != -1 )
            {
              v50 = *(_QWORD *)&v345[8];
              if ( *(_QWORD *)&v345[88] == *(_QWORD *)(v4 - 32) )
              {
                v348 = *(_QWORD *)v345;
                v51 = *(_QWORD *)&v345[64];
                v52 = *(_QWORD *)&v345[80];
                v53 = *(_QWORD *)(v4 - 56);
                v54 = *(_QWORD *)(v4 - 48);
                v351 = *(_QWORD *)&v345[8];
                if ( (unsigned __int8)sub_140222930(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16], v53, v54)
                  && v52 == *(_QWORD *)(v4 - 24) )
                {
                  v49 = v348;
                  v55 = *(_DWORD *)(v4 - 16) == 1 && v51 == *(_QWORD *)(v4 - 12);
                }
                else
                {
                  v55 = 0;
                  v49 = v348;
                }
                v50 = v351;
              }
              else
              {
                v55 = 0;
              }
              if ( v49 )
                sub_140001660(v50, v49, 1);
              if ( v55 )
              {
                ++v322[6];
                goto LABEL_69;
              }
            }
          }
        }
LABEL_41:
        v361 = 1;
        sub_1407F3350(v343, v17);
        if ( *(_DWORD *)v343 == -1 )
        {
          if ( v343[8] )
          {
            ++*((_QWORD *)&v308 + 1);
            *(_QWORD *)v345 = v17;
            *(_QWORD *)&v345[8] = sub_1400015F0;
            v361 = 1;
            sub_1416DAFA0(&v266, &unk_141A4BC02, v345);
            v46 = v304;
            if ( v304 >= 3 )
            {
              if ( v266.m128i_i64[0] )
                sub_140001660(v266.m128i_i64[1], v266.m128i_i64[0], 1);
            }
            else
            {
              if ( v304 == v302 )
              {
                v348 = v266.m128i_i64[1];
                v353 = v266.m128i_i64[0];
                sub_141939F90(&v302);
              }
              v47 = v303;
              v48 = 3 * v46;
              *(_QWORD *)(v303 + 8 * v48 + 16) = v267;
              *(__m128i *)(v47 + 8 * v48) = _mm_loadu_si128(&v266);
              v304 = v46 + 1;
            }
            if ( v356 )
              sub_140001660(m128i_i64, v356, 1);
LABEL_19:
            v17 += 80;
            ++v30;
            continue;
          }
LABEL_69:
          v56 = v319;
          if ( v319 == v317 )
            sub_1419397B0(&v317);
          v57 = v318;
          v58 = 32 * v56;
          *(_QWORD *)(v318 + v58) = v30;
          *(_QWORD *)(v57 + v58 + 8) = v356;
          *(_QWORD *)(v57 + v58 + 16) = m128i_i64;
          *(_QWORD *)(v57 + v58 + 24) = v353;
          v319 = v56 + 1;
          goto LABEL_19;
        }
        *(_OWORD *)&v345[80] = *(_OWORD *)&v343[80];
        *(_OWORD *)&v345[64] = *(_OWORD *)&v343[64];
        v62 = _mm_loadu_si128((const __m128i *)v343);
        v63 = _mm_loadu_si128((const __m128i *)&v343[16]);
        *(_OWORD *)&v345[48] = *(_OWORD *)&v343[48];
        *(_OWORD *)&v345[32] = *(_OWORD *)&v343[32];
        *(__m128i *)&v345[16] = v63;
        *(__m128i *)v345 = v62;
        v336.m256i_i64[0] = v17;
        v336.m256i_i64[1] = (__int64)sub_1400015F0;
        v336.m256i_i64[2] = (__int64)v345;
        v336.m256i_i64[3] = (__int64)sub_140D76130;
        sub_1416DAFA0(v251, &unk_141A4BC4D, &v336);
        v18 = v251[0];
        v17 = v251[1];
        v353 = v251[2];
        v361 = 1;
        sub_140778C60(v345);
        if ( v356 )
          sub_140001660(m128i_i64, v356, 1);
        v356 = 10;
        v61 = (_BYTE *)v344;
LABEL_142:
        v99 = v319;
        if ( v319 )
        {
          v100 = (_QWORD *)(v318 + 16);
          do
          {
            v101 = *(v100 - 1);
            if ( v101 )
              sub_140001660(*v100, v101, 1);
            v100 += 4;
            --v99;
          }
          while ( v99 );
        }
        if ( !v317 )
          goto LABEL_150;
        v102 = v318;
        v103 = 32 * v317;
LABEL_149:
        sub_140001660(v102, v103, 8);
        goto LABEL_150;
      }
      break;
    }
    if ( !(_BYTE)v241 )
      goto LABEL_140;
    *(_QWORD *)v345 = v318;
    *(_QWORD *)&v345[8] = v318 + 32 * v319;
    *(_QWORD *)&v345[16] = &v310;
    v364 = 1;
    sub_14022AAA0(&v268, v345);
    m128i_i64 = (__int64)v269;
    v59 = v270;
    if ( v270 )
    {
      sub_1407F9AF0((__int64)v345, v278, v279);
      v336 = *(__m256i *)&v345[8];
      v356 = *(_QWORD *)v345;
      if ( *(_QWORD *)v345 != -1 )
      {
        *(_QWORD *)&v343[88] = *(_QWORD *)&v345[88];
        *(_OWORD *)&v343[72] = *(_OWORD *)&v345[72];
        *(_OWORD *)&v343[56] = *(_OWORD *)&v345[56];
        *(_OWORD *)&v343[40] = *(_OWORD *)&v345[40];
        si128 = _mm_load_si128((const __m128i *)&v336);
        *(__m128i *)&v343[24] = _mm_load_si128((const __m128i *)&v336.m256i_u64[2]);
        *(__m128i *)&v343[8] = si128;
LABEL_120:
        v18 = *(_QWORD *)&v343[8];
        v353 = *(_QWORD *)&v343[24];
        v17 = *(_QWORD *)&v343[16];
        v5 = _mm_loadu_si128((const __m128i *)&v343[32]);
        v350 = *(_QWORD *)&v343[56];
        v61 = *(_BYTE **)&v343[48];
        v6 = _mm_loadu_si128((const __m128i *)&v343[64]);
        v323 = *(_QWORD *)&v343[88];
        v354 = *(_QWORD *)&v343[80];
        v86 = (_QWORD *)(m128i_i64 + 56);
        do
        {
          v87 = *(v86 - 7);
          if ( v87 )
            sub_140001660(*(v86 - 6), v87, 1);
          v88 = *(v86 - 4);
          if ( v88 > 0 )
            sub_140001660(*(v86 - 3), v88, 1);
          v89 = *(v86 - 1);
          if ( v89 )
            sub_140001660(*v86, v89, 1);
          v86 += 9;
          --v59;
        }
        while ( v59 );
        if ( v268 )
          sub_140001660(m128i_i64, 72 * v268, 8);
        goto LABEL_142;
      }
      v64 = _mm_load_si128((const __m128i *)&v336);
      v340 = _mm_load_si128((const __m128i *)&v336.m256i_u64[2]);
      v339 = v64;
      v340.m128i_i32[2] = 2;
      v65 = (_QWORD *)m128i_i64;
      v356 = m128i_i64 + 72 * v59;
      if ( m128i_i64 == v356 )
      {
LABEL_82:
        *(_QWORD *)v345 = &v352;
        if ( v340.m128i_i64[0] >= 2uLL )
        {
          if ( v340.m128i_i64[0] >= 0x15uLL )
            sub_1401B85E0(v339.m128i_i64[1], v340.m128i_i64[0], v345);
          else
            sub_140CC4980(v339.m128i_i64[1], v340.m128i_i64[0], 1, v345);
        }
        sub_1407FC990(v343, v278, v279, (__int64)&v339);
        v66 = v340.m128i_i64[0];
        if ( v340.m128i_i64[0] )
        {
          v67 = (_QWORD *)(v339.m128i_i64[1] + 56);
          do
          {
            v83 = *(v67 - 7);
            if ( v83 )
              sub_140001660(*(v67 - 6), v83, 1);
            v84 = *(v67 - 1);
            if ( v84 > 0 )
              sub_140001660(*v67, v84, 1);
            v85 = *(v67 - 4);
            if ( v85 )
              sub_140001660(*(v67 - 3), v85, 1);
            v67 += 9;
            --v66;
          }
          while ( v66 );
        }
        if ( v339.m128i_i64[0] )
          sub_140001660(v339.m128i_i64[1], 72 * v339.m128i_i64[0], 8);
        v356 = *(_QWORD *)v343;
        if ( *(_QWORD *)v343 != -1 )
          goto LABEL_120;
        v90 = (_QWORD *)(m128i_i64 + 56);
        do
        {
          v91 = *(v90 - 7);
          if ( v91 )
            sub_140001660(*(v90 - 6), v91, 1);
          v92 = *(v90 - 4);
          if ( v92 > 0 )
            sub_140001660(*(v90 - 3), v92, 1);
          v93 = *(v90 - 1);
          if ( v93 )
            sub_140001660(*v90, v93, 1);
          v90 += 9;
          --v59;
        }
        while ( v59 );
        goto LABEL_138;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v354 = (__int64)(v65 + 9);
          v73 = v65 + 6;
          if ( v340.m128i_i64[0] )
            break;
LABEL_103:
          sub_1416DB410(&v281, v65);
          if ( v65[3] == -1 )
          {
            v344 = -1;
            v81 = v254;
          }
          else
          {
            sub_1416DB410(&v336, v65 + 3);
            v276 = v336.m256i_i64[1];
            v344 = v336.m256i_i64[0];
            v81 = v336.m256i_i64[2];
          }
          sub_1416DB410(&v336, v73);
          *(_QWORD *)&v345[16] = v282;
          *(_OWORD *)v345 = v281;
          *(_QWORD *)&v345[48] = v344;
          *(_QWORD *)&v345[56] = v276;
          v254 = v81;
          *(_QWORD *)&v345[64] = v81;
          *(_QWORD *)&v345[40] = v336.m256i_i64[2];
          *(__m128i *)&v345[24] = _mm_loadu_si128((const __m128i *)&v336);
          v82 = v340.m128i_i64[0];
          if ( v340.m128i_i64[0] == v339.m128i_i64[0] )
            sub_141939DD0(&v339);
          v68 = v339.m128i_i64[1];
          v69 = 9 * v82;
          *(_QWORD *)(v339.m128i_i64[1] + 8 * v69 + 64) = *(_QWORD *)&v345[64];
          v70 = _mm_load_si128((const __m128i *)v345);
          v71 = _mm_load_si128((const __m128i *)&v345[16]);
          v72 = *(_OWORD *)&v345[32];
          *(_OWORD *)(v68 + 8 * v69 + 48) = *(_OWORD *)&v345[48];
          *(_OWORD *)(v68 + 8 * v69 + 32) = v72;
          *(__m128i *)(v68 + 8 * v69 + 16) = v71;
          *(__m128i *)(v68 + 8 * v69) = v70;
          v340.m128i_i64[0] = v82 + 1;
          v65 = (_QWORD *)v354;
          if ( v354 == v356 )
            goto LABEL_82;
        }
        v74 = 72 * v340.m128i_i64[0];
        v75 = v65[1];
        v76 = v65[2];
        v4 = v339.m128i_i64[1] + 48;
        while ( *(_QWORD *)(v4 - 32) != v76 || (unsigned int)sub_141923B40(*(_QWORD *)(v4 - 40), v75, v76) )
        {
          v4 += 72;
          v74 -= 72;
          if ( !v74 )
            goto LABEL_103;
        }
        v77 = -1;
        if ( v65[3] != -1 )
        {
          v78 = v65[5];
          if ( v78 != *(_QWORD *)(v4 - 8) || (unsigned int)sub_141923B40(v65[4], *(_QWORD *)(v4 - 16), v78) )
          {
            sub_1416DB410(v345, v65 + 3);
LABEL_95:
            v77 = *(_QWORD *)v345;
            v315 = _mm_loadu_si128((const __m128i *)&v345[8]);
            goto LABEL_96;
          }
          if ( *(_QWORD *)v4 != -1 )
          {
            sub_1416DB410(v345, v4);
            goto LABEL_95;
          }
        }
LABEL_96:
        v79 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 != -1 && v79 )
          sub_140001660(*(_QWORD *)(v4 + 8), v79, 1);
        *(_QWORD *)v4 = v77;
        *(__m128i *)(v4 + 8) = _mm_load_si128(&v315);
        sub_1416DB410(v345, v73);
        v80 = *(_QWORD *)(v4 - 24);
        if ( v80 )
          sub_140001660(*(_QWORD *)(v4 - 16), v80, 1);
        v4 -= 24;
        *(_QWORD *)(v4 + 16) = *(_QWORD *)&v345[16];
        *(__m128i *)v4 = _mm_loadu_si128((const __m128i *)v345);
        v65 = (_QWORD *)v354;
        if ( v354 == v356 )
          goto LABEL_82;
      }
    }
LABEL_138:
    if ( v268 )
      sub_140001660(m128i_i64, 72 * v268, 8);
LABEL_140:
    v94 = 8 * (unsigned int)v291;
    v95 = *(__int64 *)((char *)&off_141A4EEB8 + v94);
    v96 = *(_QWORD *)((char *)&unk_141A4EED0 + v94);
    v364 = 1;
    sub_141431530(v343, &v284, v95, v96);
    if ( *(_QWORD *)v343 != -1 )
    {
      v97 = _mm_loadu_si128((const __m128i *)&v343[17]);
      v98 = _mm_loadu_si128((const __m128i *)&v343[33]);
      *(_OWORD *)&v345[48] = *(_OWORD *)&v343[48];
      *(__m128i *)&v345[33] = v98;
      *(__m128i *)&v345[17] = v97;
      *(_OWORD *)v345 = *(_OWORD *)v343;
      v345[16] = v343[16];
      v61 = v345;
      v336.m256i_i64[0] = (__int64)v345;
      v336.m256i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(v343, &unk_141A4790F, &v336);
      v17 = *(_QWORD *)&v343[8];
      v18 = *(_QWORD *)v343;
      v353 = *(_QWORD *)&v343[16];
      v364 = 1;
      sub_1407785F0(v345);
      v356 = 10;
      goto LABEL_142;
    }
    v326.m128i_i64[0] = 0;
    v326.m128i_i64[1] = 8;
    v327 = 0;
    v268 = v318;
    v312 = v317;
    v270 = v317;
    v348 = v318 + 32 * v319;
    v271 = v348;
    v114 = 32 * v319 - 32;
    v115 = v318 + 48;
    v116 = 0;
    v313 = v318;
    for ( j = (const __m128i *)v318; ; j = (const __m128i *)m128i_i64 )
    {
      if ( j == (const __m128i *)v348 )
      {
        v181 = v275;
        goto LABEL_285;
      }
      v344 = v115;
      m128i_i64 = (__int64)j[2].m128i_i64;
      v269 = j + 2;
      v118 = j->m128i_i64[0];
      v119 = j->m128i_i64[1];
      v246 = _mm_loadu_si128(j + 1);
      if ( v119 == -1 )
        break;
      v293 = v119;
      v294 = _mm_load_si128(&v246);
      if ( v118 >= *((_QWORD *)&v311 + 1) )
      {
        v365 = 1;
        sub_14196B673(v118, *((_QWORD *)&v311 + 1), &off_141A4BB60);
      }
      v120 = 80 * v118;
      v121 = (_QWORD *)(v311 + v120);
      if ( *(_QWORD *)(v311 + v120 + 24) == -1 )
      {
        v257.m128i_i64[0] = -1;
        v122 = 1;
        goto LABEL_189;
      }
      if ( (v116 & 1) != 0 )
      {
        *(_QWORD *)&v308 = v308 + 1;
        v257.m128i_i64[0] = -1;
        goto LABEL_187;
      }
      v351 = v114;
      v130 = v121[4];
      v131 = v121[5];
      v132 = v121[1];
      v356 = v311 + v120;
      v133 = v121[2];
      v134 = v294;
      v365 = 1;
      sub_140A934F0(v345, v130, v131);
      if ( *(_QWORD *)&v345[32] == -1 )
      {
        v135 = *(_QWORD *)v345;
        v336.m256i_i64[0] = *(_QWORD *)v345;
        *(_QWORD *)v343 = 0;
        *(_QWORD *)&v343[8] = 1;
        *(_QWORD *)&v343[16] = 0;
        *(_QWORD *)&v345[16] = 1610612768;
        *(_QWORD *)v345 = v343;
        *(_QWORD *)&v345[8] = &off_141A49990;
        if ( (unsigned __int8)sub_1416EA080(&v336, v345) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_59,
            55,
            (unsigned int)&v352,
            (unsigned int)&unk_141A481A8,
            (__int64)&off_141A4E498);
        v4 = *(_QWORD *)&v343[8];
        v353 = *(_QWORD *)v343;
        v354 = *(_QWORD *)&v343[16];
        if ( (unsigned int)(v135 & 3) - 2 >= 2 && (v135 & 3) != 0 )
        {
          *(_QWORD *)&v345[8] = v135 - 1;
          v345[0] = 3;
          v365 = 1;
          sub_1416EBAD0(&v345[8]);
        }
        goto LABEL_228;
      }
      if ( *(_DWORD *)&v345[32] != 2 && *(_QWORD *)v345 )
      {
        sub_140001660(*(_QWORD *)&v345[8], *(_QWORD *)v345, 1);
LABEL_206:
        v365 = 1;
        sub_1407E0C90((unsigned int)v345, v130, v131, v132, v133);
        if ( *(_QWORD *)v345 == -2 )
        {
          *(_OWORD *)&v343[80] = *(_OWORD *)&v345[88];
          *(_OWORD *)&v343[64] = *(_OWORD *)&v345[72];
          v144 = _mm_loadu_si128((const __m128i *)&v345[8]);
          v145 = _mm_loadu_si128((const __m128i *)&v345[24]);
          *(_OWORD *)&v343[48] = *(_OWORD *)&v345[56];
          *(_OWORD *)&v343[32] = *(_OWORD *)&v345[40];
          *(__m128i *)&v343[16] = v145;
          *(__m128i *)v343 = v144;
          v339.m128i_i64[0] = 0;
          v339.m128i_i64[1] = 1;
          v340.m128i_i64[0] = 0;
          v336.m256i_i64[2] = 1610612768;
          v336.m256i_i64[0] = (__int64)&v339;
          v336.m256i_i64[1] = (__int64)&off_141A49990;
          if ( (unsigned __int8)sub_140D76130(v343, &v336) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_59,
              55,
              (unsigned int)&v352,
              (unsigned int)&unk_141A481A8,
              (__int64)&off_141A4E498);
          v4 = v339.m128i_i64[1];
          v353 = v339.m128i_i64[0];
          v354 = v340.m128i_i64[0];
          v365 = 1;
          sub_140778C60(&v345[8]);
LABEL_228:
          v137 = v329;
          v138 = v330;
          v139 = v331;
          v140 = v332;
          v141 = v333;
          v114 = v351;
          v121 = (_QWORD *)v356;
LABEL_229:
          v333 = v141;
          v332 = v140;
          v331 = v139;
          v330 = v138;
          v329 = v137;
          *(_QWORD *)v343 = v353;
          *(_QWORD *)&v343[8] = v4;
          *(_QWORD *)&v343[16] = v354;
          if ( !(unsigned __int8)sub_140842DD0(aReplaceRollout, 31, v4, v354) )
            goto LABEL_246;
          v339.m128i_i64[0] = (__int64)&unk_141A4A9B0;
          v336.m256i_i64[0] = (__int64)&v339;
          v336.m256i_i64[1] = (__int64)sub_140763640;
          sub_1416DAFA0(v345, &unk_141A47582, &v336);
          v159 = *(_QWORD *)&v345[8];
          v309 = *(_QWORD *)&v345[8];
          v160 = sub_140842DD0(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16], v4, v354);
          if ( *(_QWORD *)v345 )
            sub_140001660(v159, *(_QWORD *)v345, 1);
          if ( !v160 )
          {
            v339.m128i_i64[0] = (__int64)&unk_141A4A9B4;
            v336.m256i_i64[0] = (__int64)&v339;
            v336.m256i_i64[1] = (__int64)sub_140763640;
            sub_1416DAFA0(v345, &unk_141A47582, &v336);
            v161 = *(_QWORD *)&v345[8];
            v309 = *(_QWORD *)&v345[8];
            v162 = sub_140842DD0(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16], v4, v354);
            if ( *(_QWORD *)v345 )
              sub_140001660(v161, *(_QWORD *)v345, 1);
            if ( !v162 )
            {
              v339.m128i_i64[0] = (__int64)&unk_141A4A9B8;
              v336.m256i_i64[0] = (__int64)&v339;
              v336.m256i_i64[1] = (__int64)sub_140763640;
              sub_1416DAFA0(v345, &unk_141A47582, &v336);
              v163 = *(_QWORD *)&v345[8];
              v309 = *(_QWORD *)&v345[8];
              v164 = sub_140842DD0(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16], v4, v354);
              if ( *(_QWORD *)v345 )
                sub_140001660(v163, *(_QWORD *)v345, 1);
              if ( !v164 )
              {
                v339.m128i_i64[0] = (__int64)&unk_141A4A9BC;
                v336.m256i_i64[0] = (__int64)&v339;
                v336.m256i_i64[1] = (__int64)sub_140763640;
                sub_1416DAFA0(v345, &unk_141A47582, &v336);
                v165 = *(_QWORD *)&v345[8];
                v309 = *(_QWORD *)&v345[8];
                v166 = sub_140842DD0(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16], v4, v354);
                if ( *(_QWORD *)v345 )
                  sub_140001660(v165, *(_QWORD *)v345, 1);
                if ( !v166 )
                {
LABEL_246:
                  ++*((_QWORD *)&v308 + 1);
                  *(_QWORD *)v345 = v121;
                  *(_QWORD *)&v345[8] = sub_1400015F0;
                  *(_QWORD *)&v345[16] = v343;
                  *(_QWORD *)&v345[24] = sub_1400015F0;
                  sub_1416DAFA0(&v262, &unk_141A4BB78, v345);
                  v170 = v304;
                  if ( v304 >= 3 )
                  {
                    if ( v262.m128i_i64[0] )
                      sub_140001660(v262.m128i_i64[1], v262.m128i_i64[0], 1);
                  }
                  else
                  {
                    if ( v304 == v302 )
                    {
                      v350 = v262.m128i_i64[1];
                      v356 = v262.m128i_i64[0];
                      sub_141939F90(&v302);
                    }
                    v171 = v303;
                    v172 = 3 * v170;
                    *(_QWORD *)(v303 + 8 * v172 + 16) = v263;
                    *(__m128i *)(v171 + 8 * v172) = _mm_loadu_si128(&v262);
                    v304 = v170 + 1;
                  }
                  if ( *(_QWORD *)v343 )
                    sub_140001660(*(_QWORD *)&v343[8], *(_QWORD *)v343, 1);
                  v129 = v293;
                  v116 = 0;
                  if ( v293 )
                    goto LABEL_195;
                  goto LABEL_180;
                }
              }
            }
          }
          *(_QWORD *)&v308 = v308 + 1;
          *(_QWORD *)v345 = v121;
          *(_QWORD *)&v345[8] = sub_1400015F0;
          sub_1416DAFA0(&v264, &unk_141A4BB94, v345);
          v167 = v304;
          if ( v304 >= 3 )
          {
            if ( v264.m128i_i64[0] )
              sub_140001660(v264.m128i_i64[1], v264.m128i_i64[0], 1);
          }
          else
          {
            if ( v304 == v302 )
            {
              v350 = v264.m128i_i64[1];
              v356 = v264.m128i_i64[0];
              sub_141939F90(&v302);
            }
            v168 = v303;
            v169 = 3 * v167;
            *(_QWORD *)(v303 + 8 * v169 + 16) = v265;
            *(__m128i *)(v168 + 8 * v169) = _mm_loadu_si128(&v264);
            v304 = v167 + 1;
          }
          v257.m128i_i64[0] = -1;
          if ( *(_QWORD *)v343 )
            sub_140001660(*(_QWORD *)&v343[8], *(_QWORD *)v343, 1);
LABEL_187:
          v122 = 1;
          v116 = 1;
          goto LABEL_189;
        }
        if ( *(_QWORD *)v345 == -1 )
        {
          nullsub_1(v143, v142);
          v158 = (__m128i *)sub_140001650(59, 1);
          if ( !v158 )
          {
            v365 = 1;
            sub_14196B2DB(1, 59);
          }
          qmemcpy(&v158[1], "nger owned by the router; history preserved", 43);
          v4 = (__int64)v158;
          *v158 = _mm_loadu_si128((const __m128i *)&xmmword_141A47A7D);
          v354 = 59;
          v353 = 59;
          goto LABEL_228;
        }
        v335 = *(_QWORD *)v345;
        v146 = *(_QWORD *)&v345[16];
        v300 = *(_QWORD *)&v345[56];
        v334 = *(_QWORD *)&v345[48];
        v350 = *(_QWORD *)&v345[96];
        v280 = v346;
        *(_OWORD *)v345 = *(_OWORD *)&v345[8];
        *(_OWORD *)&v345[16] = 0;
        v324 = *(_QWORD *)v345;
        *(_QWORD *)&v345[32] = *(_QWORD *)v345;
        v301 = v146;
        *(_QWORD *)&v345[40] = v146;
        v360 = 1;
        sub_140D8B500(v343, (__int128 *)v345);
        if ( v343[0] == 0xFF )
        {
          v315.m128i_i64[0] = *(_QWORD *)&v343[8];
          v339.m128i_i64[0] = (__int64)&v315;
          v339.m128i_i64[1] = (__int64)sub_14166FAD0;
          sub_1416DAFA0(v345, &unk_141A47AB8, &v339);
          v360 = 1;
          sub_140032F30(&v315);
          v4 = *(_QWORD *)&v345[8];
          v353 = *(_QWORD *)v345;
          v354 = *(_QWORD *)&v345[16];
          v136 = -2;
        }
        else
        {
          v336.m256i_i32[1] = *(_DWORD *)&v343[4];
          *(__int32 *)((char *)v336.m256i_i32 + 1) = *(_DWORD *)&v343[1];
          *(__m128i *)&v336.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v343[8]);
          v336.m256i_i64[3] = *(_QWORD *)&v343[24];
          v336.m256i_i8[0] = v343[0];
          v147 = (_BYTE *)sub_1416724D0(aPayload_3, 7, &v336);
          v136 = -1;
          if ( !v147 )
            goto LABEL_263;
          if ( *v147 != 5 )
            goto LABEL_263;
          v148 = v147 + 8;
          v149 = sub_140A124E0(v147 + 8, aModel_1, 5);
          if ( !v149
            || *(_BYTE *)v149 != 3
            || *(_QWORD *)(v149 + 24) == v134.m128i_i64[1]
            && !(unsigned int)sub_141923B40(*(_QWORD *)(v149 + 16), v134.m128i_i64[0], v134.m128i_i64[1]) )
          {
            goto LABEL_263;
          }
          nullsub_1(v151, v150);
          v152 = sub_140001650(5, 1);
          if ( !v152 )
            sub_14196B2DB(1, 5);
          *(_BYTE *)(v152 + 4) = 108;
          *(_DWORD *)v152 = 1701080941;
          v339.m128i_i64[0] = 5;
          v339.m128i_i64[1] = v152;
          v340.m128i_i64[0] = 5;
          sub_1401E7560((unsigned int)v345, v134.m128i_i32[2], 0, 1, 1);
          v153 = *(_QWORD *)&v345[8];
          LOBYTE(v354) = v345[0];
          if ( v345[0] )
            sub_14196B2DB(*(_QWORD *)&v345[8], *(_QWORD *)&v345[16]);
          v154 = *(_QWORD *)&v345[16];
          if ( v134.m128i_i64[1] )
            sub_1419234B0(*(_QWORD *)&v345[16], v134.m128i_i64[0], v134.m128i_i64[1]);
          *(_QWORD *)&v345[8] = v153;
          *(_QWORD *)&v345[16] = v154;
          *(_QWORD *)&v345[24] = v134.m128i_i64[1];
          v345[0] = 3;
          sub_140A68320(v343, v148, &v339, v345);
          if ( v343[0] != 0xFF )
            sub_140032FF0(v343);
          sub_14077AC30((__int64)v345, (__int64)&v336);
          if ( *(_QWORD *)v345 != -1 )
          {
            v281 = *(_OWORD *)v345;
            v282 = *(__int64 ***)&v345[16];
            sub_140A92690(v343, v324, v301, &v281);
            if ( *(_DWORD *)v343 != -1 )
            {
              *(_OWORD *)&v345[80] = *(_OWORD *)&v343[80];
              *(_OWORD *)&v345[64] = *(_OWORD *)&v343[64];
              v155 = _mm_loadu_si128((const __m128i *)v343);
              v156 = _mm_loadu_si128((const __m128i *)&v343[16]);
              *(_OWORD *)&v345[48] = *(_OWORD *)&v343[48];
              *(_OWORD *)&v345[32] = *(_OWORD *)&v343[32];
              *(__m128i *)&v345[16] = v156;
              *(__m128i *)v345 = v155;
              sub_1407B80A0(&v339, v345);
              v4 = v339.m128i_i64[1];
              v353 = v339.m128i_i64[0];
              v157 = v340.m128i_i64[0];
              goto LABEL_262;
            }
            v314 = *(_QWORD *)&v343[8];
            v141 = *(_QWORD *)&v343[24];
            v325 = *(_QWORD *)&v343[16];
            sub_1407E4EE0((__int64)v343, v130, v131, *(__int64 *)&v343[16], *(__int64 *)&v343[24], v324, v301);
            if ( *(_DWORD *)v343 != -1 )
            {
              *(_OWORD *)&v345[80] = *(_OWORD *)&v343[80];
              *(_OWORD *)&v345[64] = *(_OWORD *)&v343[64];
              v179 = _mm_loadu_si128((const __m128i *)v343);
              v180 = _mm_loadu_si128((const __m128i *)&v343[16]);
              *(_OWORD *)&v345[48] = *(_OWORD *)&v343[48];
              *(_OWORD *)&v345[32] = *(_OWORD *)&v343[32];
              *(__m128i *)&v345[16] = v180;
              *(__m128i *)v345 = v179;
              sub_1407B8190(&v339, v345);
              v4 = v339.m128i_i64[1];
              v353 = v339.m128i_i64[0];
              v354 = v340.m128i_i64[0];
              v136 = -2;
              if ( v314 )
                sub_140001660(v325, v314, 1);
              goto LABEL_263;
            }
            sub_1416B0D00(v345, v130, v131);
            v353 = *(_QWORD *)&v345[8];
            v136 = *(_QWORD *)v345;
            v354 = *(_QWORD *)&v345[24];
            v4 = *(_QWORD *)&v345[16];
            v360 = 0;
            sub_140032FF0(&v336);
            if ( v334 )
              sub_140001660(v300, v334, 1);
            v173 = v350;
            v256 = v301;
            v114 = v351;
            v121 = (_QWORD *)v356;
            v174 = v335;
            v138 = v324;
            v175 = v314;
            v140 = v325;
            if ( (unsigned __int64)(v350 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
            {
LABEL_270:
              v137 = v174;
              v139 = v175;
              if ( v136 == -2 )
                goto LABEL_229;
              goto LABEL_271;
            }
LABEL_269:
            v325 = v140;
            v356 = v136;
            v176 = v138;
            v177 = v174;
            v178 = v175;
            sub_140001660(v280, v173, 1);
            v138 = v176;
            v140 = v325;
            v136 = v356;
            v175 = v178;
            v174 = v177;
            goto LABEL_270;
          }
          sub_1407B8030(v345, *(_QWORD *)&v345[8]);
          v4 = *(_QWORD *)&v345[8];
          v353 = *(_QWORD *)v345;
          v157 = *(_QWORD *)&v345[16];
LABEL_262:
          v354 = v157;
          v136 = -2;
LABEL_263:
          v360 = 1;
          sub_140032FF0(&v336);
        }
        if ( v335 )
          sub_140001660(v324, v335, 1);
        v114 = v351;
        v121 = (_QWORD *)v356;
        if ( v334 )
          sub_140001660(v300, v334, 1);
        v173 = v350;
        v174 = v329;
        v138 = v330;
        v175 = v331;
        v140 = v332;
        v141 = v333;
        if ( (unsigned __int64)(v350 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
          goto LABEL_270;
        goto LABEL_269;
      }
      if ( *(_DWORD *)&v345[32] != 2 )
        goto LABEL_206;
      v136 = -1;
      v137 = v329;
      v138 = v330;
      v139 = v331;
      v140 = v332;
      v141 = v333;
      v114 = v351;
      v121 = (_QWORD *)v356;
LABEL_271:
      v329 = v137;
      *(_QWORD *)&v259 = v137;
      v330 = v138;
      *((_QWORD *)&v259 + 1) = v138;
      *(_QWORD *)&v260 = v256;
      v331 = v139;
      *((_QWORD *)&v260 + 1) = v139;
      v332 = v140;
      *(_QWORD *)&v261 = v140;
      v333 = v141;
      *((_QWORD *)&v261 + 1) = v141;
      v257.m128i_i64[0] = v136;
      v257.m128i_i64[1] = v353;
      v258.m128i_i64[0] = v4;
      v258.m128i_i64[1] = v354;
      v122 = v136 == -1;
      v116 = 0;
LABEL_189:
      v253 = v121;
      v252 = &v293;
      *(_QWORD *)&v281 = &v253;
      *((_QWORD *)&v281 + 1) = &unk_141A4B340;
      v282 = &v252;
      v283 = &unk_141A4B340;
      v359 = v122;
      v358 = 1;
      v357 = 1;
      sub_140772660((unsigned int)&v339, (unsigned int)&v284, (unsigned int)aUpdateThreadsS_1, 43, (__int64)&v281, 2);
      if ( v339.m128i_i64[0] != -1 )
      {
        v195 = v121;
        v351 = v114;
        v196 = v313;
        v197 = _mm_loadu_si128(&v340);
        v338 = v342;
        v337 = v341;
        *(__m128i *)&v336.m256i_u64[2] = v197;
        *(__m128i *)v336.m256i_i8 = v339;
        v316 = v327;
        v315 = _mm_loadu_si128(&v326);
        if ( !v122 )
        {
          v355 = 0;
          sub_1407C57B0(&v315, &v257);
        }
        *(_QWORD *)v343 = v195;
        *(_QWORD *)&v343[8] = sub_1400015F0;
        *(_QWORD *)&v343[16] = &v336;
        *(_QWORD *)&v343[24] = sub_14142D4D0;
        v355 = v122;
        sub_1416DAFA0(&v244, &unk_141A4BBD9, v343);
        *(_QWORD *)&v345[24] = v245;
        *(__m128i *)&v345[8] = _mm_loadu_si128(&v244);
        *(_QWORD *)v345 = 10;
        v355 = v122;
        sub_140811DC0(v343, v345, v315.m128i_i64[1], v316);
        v18 = *(_QWORD *)&v343[8];
        v356 = *(_QWORD *)v343;
        v353 = *(_QWORD *)&v343[24];
        v17 = *(_QWORD *)&v343[16];
        v5 = _mm_loadu_si128((const __m128i *)&v343[32]);
        v350 = *(_QWORD *)&v343[56];
        v61 = *(_BYTE **)&v343[48];
        v6 = _mm_loadu_si128((const __m128i *)&v343[64]);
        v323 = *(_QWORD *)&v343[88];
        v354 = *(_QWORD *)&v343[80];
        v198 = v316;
        if ( v316 )
        {
          v199 = (_QWORD *)(v315.m128i_i64[1] + 64);
          do
          {
            v200 = *(v199 - 8);
            if ( v200 )
              sub_140001660(*(v199 - 7), v200, 1);
            v201 = *(v199 - 4);
            if ( v201 )
              sub_140001660(*(v199 - 3), v201, 1);
            v202 = *(v199 - 1);
            if ( v202 )
              sub_140001660(*v199, v202, 1);
            v199 += 10;
            --v198;
          }
          while ( v198 );
        }
        v203 = v196;
        if ( v315.m128i_i64[0] )
          sub_140001660(v315.m128i_i64[1], 80 * v315.m128i_i64[0], 8);
        v359 = v122;
        v358 = 0;
        v357 = v122;
        sub_1407785F0(&v336);
        v204 = v312;
        v205 = v351;
        if ( v293 )
          sub_140001660(v294.m128i_i64[0], v293, 1);
        v206 = (_QWORD *)v344;
        if ( v348 != m128i_i64 )
        {
          v207 = v205 >> 5;
          do
          {
            v208 = *(v206 - 1);
            if ( v208 )
              sub_140001660(*v206, v208, 1);
            v206 += 4;
            --v207;
          }
          while ( v207 );
        }
        if ( v204 )
          sub_140001660(v203, 32 * v204, 8);
        if ( v284.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
        {
          v364 = 0;
          sub_14196B550(&off_141A48288);
        }
        ++v284.m128i_i64[0];
        v209 = sub_1417DE470(v285.m128i_i64[0]);
        --v284.m128i_i64[0];
        if ( !v209 )
        {
          v364 = 0;
          sub_141431530(v345, &v284, aRollback_0, 8);
          if ( *(_QWORD *)v345 != -1 )
          {
            v364 = 0;
            sub_1407785F0(v345);
          }
        }
        goto LABEL_150;
      }
      if ( !v122 )
      {
        v123 = v327;
        if ( v327 == v326.m128i_i64[0] )
          sub_141939900(&v326);
        v124 = v326.m128i_i64[1];
        v125 = 80 * v123;
        *(_OWORD *)(v326.m128i_i64[1] + v125 + 64) = v261;
        v126 = _mm_loadu_si128(&v257);
        v127 = _mm_loadu_si128(&v258);
        v128 = v259;
        *(_OWORD *)(v124 + v125 + 48) = v260;
        *(_OWORD *)(v124 + v125 + 32) = v128;
        *(__m128i *)(v124 + v125 + 16) = v127;
        *(__m128i *)(v124 + v125) = v126;
        v327 = v123 + 1;
        ++*((_QWORD *)&v307 + 1);
      }
      *(_QWORD *)&v307 = v307 + 1;
      v129 = v293;
      if ( v293 )
LABEL_195:
        sub_140001660(v294.m128i_i64[0], v129, 1);
LABEL_180:
      v114 -= 32LL;
      v115 = v344 + 32;
    }
    v181 = v275;
    v182 = (_QWORD *)v344;
    if ( v348 != m128i_i64 )
    {
      v183 = v114 >> 5;
      do
      {
        v184 = *(v182 - 1);
        if ( v184 )
        {
          v185 = v182;
          sub_140001660(*v182, v184, 1);
          v182 = v185;
        }
        v182 += 4;
        --v183;
      }
      while ( v183 );
    }
LABEL_285:
    if ( v312 )
      sub_140001660(v313, 32 * v312, 8);
    sub_141431530(&v339, &v284, aCommit_0, 6);
    if ( v284.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
    {
      v363 = 0;
      v362 = 1;
      sub_14196B550(&off_141A48288);
    }
    ++v284.m128i_i64[0];
    v186 = sub_1417DE470(v285.m128i_i64[0]);
    --v284.m128i_i64[0];
    if ( !v186 )
    {
      v363 = 0;
      v362 = 1;
      sub_141431530(v345, &v284, aRollback_0, 8);
      if ( *(_QWORD *)v345 != -1 )
      {
        v363 = 0;
        v362 = 1;
        sub_1407785F0(v345);
      }
    }
    if ( v339.m128i_i64[0] != -1 )
      break;
    v363 = 0;
    v362 = 1;
    sub_1407E5410(&v284, aThreadModelCon, 24);
    if ( (unsigned __int64)v307 | *((_QWORD *)&v308 + 1) )
    {
      *(_QWORD *)v343 = v320;
      *(_QWORD *)&v343[8] = v181;
      *(_QWORD *)v345 = v343;
      *(_QWORD *)&v345[8] = sub_1416CE600;
      *(_QWORD *)&v345[16] = &v305;
      *(_QWORD *)&v345[24] = sub_1416EBAE0;
      *(_QWORD *)&v345[32] = &v307;
      *(_QWORD *)&v345[40] = sub_1416EBAE0;
      *(_QWORD *)&v345[48] = (char *)&v307 + 8;
      *(_QWORD *)&v345[56] = sub_1416EBAE0;
      *(_QWORD *)&v345[64] = &v308;
      *(_QWORD *)&v345[72] = sub_1416EBAE0;
      *(_QWORD *)&v345[80] = (char *)&v308 + 8;
      *(_QWORD *)&v345[88] = sub_1416EBAE0;
      v363 = 0;
      v362 = 1;
      sub_1416DAFA0(v232, &unk_141A4BAEC, v345);
      v363 = 0;
      v362 = 1;
      sub_1406C9730((unsigned int)aRelayModelCata, 19, (unsigned int)aConverged, 9, (__int64)v232);
      v4 = v307;
      v354 = *((_QWORD *)&v308 + 1);
    }
    else
    {
      v354 = 0;
      v4 = 0;
    }
    v18 = v302;
    v17 = v303;
    v19 = v304;
    v5 = _mm_loadu_si128((const __m128i *)&v305);
    v3 = *((_QWORD *)&v306 + 1);
    v6 = _mm_loadu_si128((const __m128i *)((char *)&v307 + 8));
    v210 = v327;
    if ( v327 )
    {
      v211 = (_QWORD *)(v326.m128i_i64[1] + 64);
      do
      {
        v212 = *(v211 - 8);
        if ( v212 )
          sub_140001660(*(v211 - 7), v212, 1);
        v213 = *(v211 - 4);
        if ( v213 )
          sub_140001660(*(v211 - 3), v213, 1);
        v214 = *(v211 - 1);
        if ( v214 )
          sub_140001660(*v211, v214, 1);
        v211 += 10;
        --v210;
      }
      while ( v210 );
    }
    if ( v326.m128i_i64[0] )
      sub_140001660(v326.m128i_i64[1], 80 * v326.m128i_i64[0], 8);
    v215 = *((_QWORD *)&v311 + 1);
    if ( *((_QWORD *)&v311 + 1) )
    {
      v216 = (_QWORD *)(v311 + 64);
      do
      {
        v217 = *(v216 - 8);
        if ( v217 )
          sub_140001660(*(v216 - 7), v217, 1);
        v218 = *(v216 - 5);
        if ( v218 > 0 )
          sub_140001660(*(v216 - 4), v218, 1);
        v219 = *(v216 - 1);
        if ( v219 > 0 )
          sub_140001660(*v216, v219, 1);
        v216 += 10;
        --v215;
      }
      while ( v215 );
    }
    if ( v310 )
      sub_140001660(v311, 80 * v310, 8);
    sub_140777BC0(&v284);
    v20 = v354;
LABEL_172:
    *(__m128i *)v274 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v274), v5);
    *(_QWORD *)&v274[16] += v3;
    *(_QWORD *)&v274[24] += v4;
    *(__m128i *)&v274[32] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v274[32]), v6);
    v354 = v20;
    *(_QWORD *)&v274[48] += v20;
    *(_QWORD *)v345 = v17;
    *(_QWORD *)&v345[16] = v18;
    *(_QWORD *)&v345[8] = v17;
    *(_QWORD *)&v345[24] = v17 + 24 * v19;
    v112 = v273;
    if ( v19 > v272.m128i_i64[0] - v273 )
    {
      sub_141939070((unsigned int)&v272, v273, v19, 8, 24);
      v112 = v273;
    }
    else if ( !v19 )
    {
      goto LABEL_175;
    }
    sub_1419234B0(v272.m128i_i64[1] + 24 * v112, v17, 24 * v19);
LABEL_175:
    v273 = v19 + v112;
    if ( v18 )
      sub_140001660(v17, 24 * v18, 8);
    v113 = v328;
    if ( v296 )
      sub_140001660(v320, v296, 1);
    v321 -= 32LL;
    v13 = v113 + 4;
  }
  v187 = _mm_loadu_si128(&v339);
  v188 = _mm_loadu_si128(&v340);
  v338 = v342;
  v337 = v341;
  *(__m128i *)&v336.m256i_u64[2] = v188;
  *(__m128i *)v336.m256i_i8 = v187;
  *(_QWORD *)v343 = &v336;
  *(_QWORD *)&v343[8] = sub_14142D4D0;
  sub_1416DAFA0(&v242, &unk_141A4BA94, v343);
  *(_QWORD *)&v345[24] = v243;
  *(__m128i *)&v345[8] = _mm_loadu_si128(&v242);
  *(_QWORD *)v345 = 10;
  sub_140811DC0(v343, v345, v326.m128i_i64[1], v327);
  v18 = *(_QWORD *)&v343[8];
  v356 = *(_QWORD *)v343;
  v353 = *(_QWORD *)&v343[24];
  v17 = *(_QWORD *)&v343[16];
  v5 = _mm_loadu_si128((const __m128i *)&v343[32]);
  v350 = *(_QWORD *)&v343[56];
  v61 = *(_BYTE **)&v343[48];
  v6 = _mm_loadu_si128((const __m128i *)&v343[64]);
  v189 = *(_QWORD *)&v343[88];
  v354 = *(_QWORD *)&v343[80];
  v363 = 0;
  v362 = 1;
  sub_1407785F0(&v336);
  v323 = v189;
  v190 = v327;
  if ( v327 )
  {
    v191 = (_QWORD *)(v326.m128i_i64[1] + 64);
    do
    {
      v192 = *(v191 - 8);
      if ( v192 )
        sub_140001660(*(v191 - 7), v192, 1);
      v193 = *(v191 - 4);
      if ( v193 )
        sub_140001660(*(v191 - 3), v193, 1);
      v194 = *(v191 - 1);
      if ( v194 )
        sub_140001660(*v191, v194, 1);
      v191 += 10;
      --v190;
    }
    while ( v190 );
  }
  if ( v326.m128i_i64[0] )
  {
    v102 = v326.m128i_i64[1];
    v103 = 80 * v326.m128i_i64[0];
    goto LABEL_149;
  }
LABEL_150:
  v104 = v304;
  if ( v304 )
  {
    v105 = (_QWORD *)(v303 + 8);
    do
    {
      v106 = *(v105 - 1);
      if ( v106 )
        sub_140001660(*v105, v106, 1);
      v105 += 3;
      --v104;
    }
    while ( v104 );
  }
  if ( v302 )
    sub_140001660(v303, 24 * v302, 8);
LABEL_157:
  v107 = *((_QWORD *)&v311 + 1);
  if ( *((_QWORD *)&v311 + 1) )
  {
    v108 = (_QWORD *)(v311 + 64);
    do
    {
      v109 = *(v108 - 8);
      if ( v109 )
        sub_140001660(*(v108 - 7), v109, 1);
      v110 = *(v108 - 5);
      if ( v110 > 0 )
        sub_140001660(*(v108 - 4), v110, 1);
      v111 = *(v108 - 1);
      if ( v111 > 0 )
        sub_140001660(*v108, v111, 1);
      v108 += 10;
      --v107;
    }
    while ( v107 );
  }
  v3 = (__int64)v61;
  if ( v310 )
    sub_140001660(v311, 80 * v310, 8);
  v13 = v328;
  v28 = v323;
  v26 = v350;
  v27 = v354;
LABEL_169:
  sub_140777BC0(&v284);
  v22 = v26;
  v20 = v27;
  v24 = v28;
  v21 = v5;
  v23 = v6;
LABEL_170:
  if ( v356 == -1 )
  {
    v323 = v24;
    v4 = v22;
    v5 = v21;
    v6 = v23;
    v19 = v353;
    goto LABEL_172;
  }
  v225 = (__m128i *)v299;
  *(_QWORD *)v299 = v356;
  v225->m128i_i64[1] = v18;
  v225[1].m128i_i64[0] = v17;
  v225[1].m128i_i64[1] = v353;
  v225[2] = v21;
  v225[3].m128i_i64[0] = v3;
  v225[3].m128i_i64[1] = v22;
  v225[4] = v23;
  v225[5].m128i_i64[0] = v20;
  v225[5].m128i_i64[1] = v24;
  if ( v296 )
    sub_140001660(v320, v296, 1);
  v226 = v298;
  if ( (__int64 *)v297 != v295 )
  {
    v321 >>= 5;
    do
    {
      v227 = *(v13 - 1);
      if ( v227 )
      {
        sub_140001660(*v13, v227, 1);
        v226 = v298;
      }
      v13 += 4;
      --v321;
    }
    while ( v321 );
  }
  if ( v226 )
    sub_140001660(v277, 32 * v226, 8);
  v228 = v272.m128i_i64[1];
  v229 = v273;
  if ( v273 )
  {
    v230 = (_QWORD *)(v272.m128i_i64[1] + 8);
    do
    {
      v231 = *(v230 - 1);
      if ( v231 )
        sub_140001660(*v230, v231, 1);
      v230 += 3;
      --v229;
    }
    while ( v229 );
  }
  if ( v272.m128i_i64[0] )
    sub_140001660(v228, 24 * v272.m128i_i64[0], 8);
  sub_140779490(&v233);
  return v299;
}
