// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x14035e550 | name sub_14035E550
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14035E550(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __m128i si128; // xmm0
  __int128 v9; // xmm1
  __m128i v11; // xmm0
  __m128i v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  int v16; // eax
  __int128 v17; // xmm6
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r14
  __int8 v22; // si
  unsigned __int64 v23; // r13
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  int v30; // eax
  char v31; // cl
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // r13
  __int64 v36; // rdi
  __int128 v37; // kr10_16
  __int128 v38; // kr20_16
  __int64 v39; // rdx
  __int64 v40; // r8
  char v41; // cl
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  __m128i v45; // kr30_16
  __m128i v46; // xmm0
  __m128i v47; // xmm8
  __int64 v48; // r14
  __int64 v49; // rsi
  __int64 i; // rcx
  unsigned __int64 v51; // r13
  __m128i v52; // xmm9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int128 v56; // xmm0
  __int128 v57; // xmm2
  __int128 v58; // xmm3
  __m128i v59; // xmm0
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  __int128 v64; // xmm0
  __int128 v65; // xmm2
  __int128 v66; // xmm3
  __int128 v67; // xmm1
  __m128i v68; // xmm0
  __int64 v69; // rax
  char v70; // cl
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __m128i v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int128 v78; // rax
  __int64 v79; // r9
  unsigned __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // r14
  unsigned __int64 v85; // r12
  __int64 v86; // rbx
  char v87; // r15
  char v88; // si
  char v89; // si
  __int64 v90; // r15
  __int64 v91; // rdx
  char v92; // al
  char v93; // al
  _BYTE *v94; // rax
  __int64 v95; // rdx
  _BYTE *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r15
  __int64 v99; // r14
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  bool v104; // of
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  __int64 v108; // r10
  __int64 v109; // rdx
  signed __int64 v110; // r11
  __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  __int64 v113; // r14
  __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  __int64 v116; // r15
  char v117; // cl
  void *v118; // rax
  const __m128i *v119; // rdi
  unsigned __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // r14
  __int64 v123; // r15
  unsigned __int64 *v124; // rax
  unsigned __int64 v125; // rcx
  unsigned __int64 *v126; // rax
  unsigned __int64 v127; // r9
  void *v128; // rax
  const __m128i *v129; // rdi
  __m128i v130; // xmm0
  _QWORD *v131; // rax
  __int64 v132; // rax
  bool v133; // zf
  __int64 v134; // r14
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __m128i v139; // xmm0
  __int128 v140; // xmm0
  __int128 v141; // xmm2
  __int128 v142; // xmm3
  _OWORD *v143; // rax
  __int128 v144; // xmm1
  __int64 v145; // rax
  __m128i v146; // xmm0
  __int128 v147; // xmm2
  __int128 v148; // xmm3
  __m128i v149; // xmm0
  __int64 v150; // rax
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  __int64 v153; // rax
  __m128i v154; // xmm0
  __m128i v155; // xmm0
  __int64 v156; // rax
  __int128 v157; // xmm0
  __int128 v158; // xmm1
  __int128 v159; // xmm2
  __m128i v160; // xmm0
  __m128i v161; // xmm0
  __int128 v162; // xmm2
  __int128 v163; // xmm3
  _OWORD *v164; // rax
  __int128 v165; // xmm1
  __m128i v166; // xmm0
  __m128i v167; // xmm0
  __int128 v168; // xmm2
  __int128 v169; // xmm3
  _OWORD *v170; // rax
  __int128 v171; // xmm1
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rsi
  __int64 v175; // rdi
  __int64 v176; // rbx
  const __m128i *v177; // r14
  __m128i v179; // xmm0
  __int64 v180; // rax
  __int64 v181; // rdx
  unsigned __int64 v182; // rax
  __int64 v183; // rsi
  unsigned __int64 v184; // rdx
  __int64 v185; // r8
  __m128i v186; // xmm0
  __int64 v187; // rax
  __m128i v188; // xmm0
  __int64 v189; // [rsp+20h] [rbp-60h]
  __int64 v190; // [rsp+20h] [rbp-60h]
  __int64 v191; // [rsp+20h] [rbp-60h]
  __int64 v192; // [rsp+20h] [rbp-60h]
  __int64 v193; // [rsp+28h] [rbp-58h]
  __int64 v194; // [rsp+28h] [rbp-58h]
  __int64 v195; // [rsp+28h] [rbp-58h]
  __int64 v196; // [rsp+28h] [rbp-58h]
  _OWORD v197[4]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v198; // [rsp+70h] [rbp-10h]
  __int64 v199; // [rsp+80h] [rbp+0h]
  __m128i v200; // [rsp+90h] [rbp+10h] BYREF
  __int128 v201; // [rsp+A0h] [rbp+20h]
  __int128 v202; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v203[504]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v204; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v205; // [rsp+2D0h] [rbp+250h]
  __int128 v206; // [rsp+2E0h] [rbp+260h]
  __int128 v207; // [rsp+2F0h] [rbp+270h]
  __m128i v208; // [rsp+300h] [rbp+280h] BYREF
  __int128 v209; // [rsp+310h] [rbp+290h]
  __int128 v210; // [rsp+320h] [rbp+2A0h]
  __int128 v211; // [rsp+330h] [rbp+2B0h]
  _BYTE v212[480]; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v213; // [rsp+540h] [rbp+4C0h]
  __int64 v214; // [rsp+548h] [rbp+4C8h]
  __int64 v215; // [rsp+550h] [rbp+4D0h]
  __int128 v216; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v217; // [rsp+568h] [rbp+4E8h]
  __int64 v218; // [rsp+570h] [rbp+4F0h]
  __int64 v219; // [rsp+578h] [rbp+4F8h]
  __m128i v220; // [rsp+580h] [rbp+500h] BYREF
  __int64 v221; // [rsp+590h] [rbp+510h]
  __m128i v222; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v223; // [rsp+5B0h] [rbp+530h]
  __int128 v224; // [rsp+5C0h] [rbp+540h]
  __int128 v225; // [rsp+5D0h] [rbp+550h]
  _OWORD *v226; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v227; // [rsp+5F0h] [rbp+570h] BYREF
  __int64 v228; // [rsp+5F8h] [rbp+578h]
  __m128i v229; // [rsp+600h] [rbp+580h] BYREF
  __int64 v230; // [rsp+610h] [rbp+590h]
  __m128i *v231; // [rsp+618h] [rbp+598h] BYREF
  __int64 v232; // [rsp+620h] [rbp+5A0h] BYREF
  __int64 v233; // [rsp+628h] [rbp+5A8h]
  __int64 v234; // [rsp+630h] [rbp+5B0h]
  __int64 v235; // [rsp+638h] [rbp+5B8h]
  __int64 v236; // [rsp+640h] [rbp+5C0h]
  __int64 v237; // [rsp+648h] [rbp+5C8h]
  __m128i v238; // [rsp+650h] [rbp+5D0h] BYREF
  __m256i v239; // [rsp+660h] [rbp+5E0h]
  __int128 v240; // [rsp+680h] [rbp+600h]
  bool v241; // [rsp+697h] [rbp+617h]
  __int64 v242; // [rsp+698h] [rbp+618h]
  __int64 v243; // [rsp+6A0h] [rbp+620h]
  __int64 v244; // [rsp+6A8h] [rbp+628h]
  char v245; // [rsp+6B7h] [rbp+637h]
  char v246; // [rsp+6B8h] [rbp+638h]
  char v247; // [rsp+6B9h] [rbp+639h]
  char v248; // [rsp+6BAh] [rbp+63Ah]
  char v249; // [rsp+6BBh] [rbp+63Bh]
  char v250; // [rsp+6BCh] [rbp+63Ch]
  char v251; // [rsp+6BDh] [rbp+63Dh]
  char v252; // [rsp+6BEh] [rbp+63Eh]
  char v253; // [rsp+6BFh] [rbp+63Fh]
  char v254; // [rsp+6C0h] [rbp+640h]
  char v255; // [rsp+6C1h] [rbp+641h]
  char v256; // [rsp+6C2h] [rbp+642h]
  char v257; // [rsp+6C3h] [rbp+643h]
  char v258; // [rsp+6C4h] [rbp+644h]
  char v259; // [rsp+6C5h] [rbp+645h]
  char v260; // [rsp+6C6h] [rbp+646h]
  char v261; // [rsp+6C7h] [rbp+647h]
  __int64 v262; // [rsp+6C8h] [rbp+648h]

  v262 = -2;
  *(_QWORD *)&v216 = 0;
  v217 = 0;
  v246 = 1;
  sub_140F7D630(v212, a2);
  v6 = *(_QWORD *)v212;
  *(_OWORD *)v203 = *(_OWORD *)&v212[8];
  *(_OWORD *)&v203[16] = *(_OWORD *)&v212[24];
  *(_OWORD *)&v203[32] = *(_OWORD *)&v212[40];
  if ( *(_QWORD *)v212 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v212[88];
    v7 = *(_OWORD *)&v212[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v212[72];
    *(_OWORD *)(a1 + 56) = v7;
    si128 = _mm_load_si128((const __m128i *)v203);
    v9 = *(_OWORD *)&v203[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v203[32];
    *(_OWORD *)(a1 + 24) = v9;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v6;
    return sub_140E8B5B0(&v216);
  }
  v200 = _mm_load_si128((const __m128i *)v203);
  v201 = *(_OWORD *)&v203[16];
  v202 = *(_OWORD *)&v203[32];
  v257 = 1;
  sub_1402BA1E0(v212, a2, aSelectThreadId_1, 91);
  if ( *(_DWORD *)v212 == 1 )
  {
    v11 = _mm_loadu_si128((const __m128i *)&v212[8]);
    v240 = *(_OWORD *)&v212[56];
    v239 = *(__m256i *)&v212[24];
    v238 = v11;
    *(_QWORD *)v203 = &v238;
    *(_QWORD *)&v203[8] = sub_141404740;
    sub_1416ABFD0(&v204, &unk_141A6499F, v203);
    *(__m128i *)v203 = _mm_loadu_si128(&v204);
    *(_QWORD *)&v203[16] = v205;
    v257 = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_140E96F40(&v238) >> 32;
    v13 = _mm_load_si128((const __m128i *)v203);
    v14 = *(_OWORD *)&v203[16];
    v15 = *(_OWORD *)&v203[32];
    v210 = *(_OWORD *)&v203[32];
    v222 = v13;
    v223 = *(__m128i *)&v203[16];
    v224 = *(_OWORD *)&v203[32];
    v225 = *(_OWORD *)&v203[48];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v203[48];
    *(_OWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(__m128i *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 10;
    goto LABEL_230;
  }
  v222 = _mm_loadu_si128((const __m128i *)&v212[8]);
  v197[0] = v222;
  v197[1] = *(_OWORD *)&v212[24];
  v197[2] = *(_OWORD *)&v212[40];
  v197[3] = *(_OWORD *)&v212[56];
  v16 = sub_1417A9630(*(_QWORD *)&v212[64]);
  if ( v16 )
  {
    *(_OWORD *)v212 = 0x8000000000000013uLL;
    *(_QWORD *)&v212[16] = v16;
    v238.m128i_i64[0] = (__int64)v212;
    v238.m128i_i64[1] = (__int64)sub_141404740;
    sub_1416ABFD0(v203, &unk_141A6499F, &v238);
    v17 = *(_OWORD *)v203;
    v18 = *(_QWORD *)&v203[16];
    v255 = 1;
    sub_140E96F40(v212);
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v17;
    goto LABEL_229;
  }
  v228 = a2;
  v218 = a3;
  v243 = a1;
  v226 = v197;
  v227 = 0;
  while ( 1 )
  {
    v258 = 1;
    sub_14036A6D0(v212, &v226);
    v19 = v243;
    v20 = v228;
    if ( *(_QWORD *)v212 != -1 )
    {
      *(_OWORD *)&v203[48] = *(_OWORD *)&v212[48];
      *(_OWORD *)&v203[32] = *(_OWORD *)&v212[32];
      *(_OWORD *)&v203[16] = *(_OWORD *)&v212[16];
      *(_OWORD *)v203 = *(_OWORD *)v212;
      v258 = 1;
      sub_140F82200(v212, v203);
      v56 = *(_OWORD *)v212;
      v57 = *(_OWORD *)&v212[32];
      v58 = *(_OWORD *)&v212[48];
      *(_OWORD *)(v19 + 16) = *(_OWORD *)&v212[16];
      *(_OWORD *)(v19 + 32) = v57;
      *(_OWORD *)(v19 + 48) = v58;
      *(_OWORD *)(v19 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v19 + 80) = *(_OWORD *)&v212[80];
      *(_OWORD *)v19 = v56;
      goto LABEL_228;
    }
    if ( !v227 )
      break;
    v258 = 1;
    sub_14018E680(&v238, &v227, 0, &off_1419EABD0, v189, v193);
    if ( v238.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v238;
      v258 = 1;
      sub_140F82200(v212, v203);
      v64 = *(_OWORD *)&v212[16];
      v65 = *(_OWORD *)&v212[48];
      v66 = *(_OWORD *)&v212[64];
      *(_OWORD *)(v19 + 32) = *(_OWORD *)&v212[32];
      *(_OWORD *)(v19 + 48) = v65;
      *(_OWORD *)(v19 + 64) = v66;
      *(_OWORD *)(v19 + 80) = *(_OWORD *)&v212[80];
      v67 = *(_OWORD *)v212;
      *(_OWORD *)(v19 + 16) = v64;
      *(_OWORD *)v19 = v67;
      goto LABEL_228;
    }
    v236 = v238.m128i_i64[1];
    v21 = v239.m256i_i64[1];
    v244 = v239.m256i_i64[0];
    v259 = 1;
    sub_14018E8C0(&v238, &v227, 1, &off_1419EABE8);
    if ( v238.m128i_i64[0] != -1
      || (v22 = v238.m128i_i8[8], v259 = 1, sub_14018E8C0(&v238, &v227, 2, &off_1419EAC00), v238.m128i_i64[0] != -1)
      || (LOBYTE(v237) = v238.m128i_i8[8],
          v259 = 1,
          sub_14018E8C0(&v238, &v227, 3, &off_1419EAC18),
          v238.m128i_i64[0] != -1) )
    {
      v68 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v68;
      v259 = 1;
      sub_140F82200(v212, v203);
      v69 = *(_QWORD *)v212;
      v70 = v212[8];
      v71 = v243;
      *(_QWORD *)(v243 + 88) = *(_QWORD *)&v212[88];
      *(_OWORD *)(v71 + 73) = *(_OWORD *)&v212[73];
      *(_OWORD *)(v71 + 57) = *(_OWORD *)&v212[57];
      *(_OWORD *)(v71 + 41) = *(_OWORD *)&v212[41];
      *(_OWORD *)(v71 + 25) = *(_OWORD *)&v212[25];
      *(_OWORD *)(v71 + 9) = *(_OWORD *)&v212[9];
      *(_QWORD *)v71 = v69;
      *(_BYTE *)(v71 + 8) = v70;
      v72 = v236;
      if ( v236 )
      {
        v73 = v244;
        goto LABEL_227;
      }
      goto LABEL_228;
    }
    LOBYTE(v234) = v22;
    LOBYTE(v235) = v238.m128i_i8[8];
    v23 = v216;
    if ( (_QWORD)v216 )
    {
      v24 = *((_QWORD *)&v216 + 1);
      while ( 2 )
      {
        v25 = v23 + 2648;
        v242 = *(unsigned __int16 *)(v23 + 2914);
        v26 = 3LL * (unsigned int)(8 * v242);
        v27 = -1;
        do
        {
          if ( !v26 )
          {
            v27 = v242;
            goto LABEL_25;
          }
          v28 = v25 + 24;
          v29 = v21 - *(_QWORD *)(v25 + 16);
          v30 = sub_1418F4B70(v244, *(_QWORD *)(v25 + 8));
          if ( v30 )
            v29 = v30;
          v31 = (v29 > 0) - (v29 < 0);
          ++v27;
          v26 -= 24;
          v25 = v28;
        }
        while ( v31 == 1 );
        if ( !v31 )
        {
          *(_QWORD *)&v212[8] = v23;
          *(_QWORD *)&v212[16] = v24;
          *(_QWORD *)&v212[24] = v27;
          *(_QWORD *)&v212[32] = &v216;
          *(_QWORD *)v212 = -1;
          if ( v236 )
            sub_140001660(v244, v236, 1);
          goto LABEL_30;
        }
LABEL_25:
        if ( v24-- != 0 )
        {
          v23 = *(_QWORD *)(v23 + 8 * v27 + 2920);
          continue;
        }
        break;
      }
      *(_QWORD *)v212 = v236;
      *(_QWORD *)&v212[8] = v244;
      *(_QWORD *)&v212[16] = v21;
      *(_QWORD *)&v212[24] = &v216;
      *(_OWORD *)&v212[32] = v23;
      *(_QWORD *)&v212[48] = v27;
    }
    else
    {
      *(_QWORD *)v212 = v236;
      *(_QWORD *)&v212[8] = v244;
      *(_QWORD *)&v212[16] = v21;
      *(_QWORD *)&v212[24] = &v216;
      *(_QWORD *)&v212[32] = 0;
    }
LABEL_30:
    v259 = 0;
    v33 = sub_140E5C8C0(v212);
    v35 = v234;
    v36 = v33;
    if ( (_BYTE)v234 )
    {
      if ( !(_BYTE)v237 )
      {
        v41 = v235;
        *(_BYTE *)(v33 + 233) |= (unsigned __int8)v235 ^ 1;
        *(_BYTE *)(v33 + 232) |= v41;
        goto LABEL_54;
      }
      *(_BYTE *)(v33 + 232) = 1;
    }
    else
    {
      *(_BYTE *)(v33 + 232) = 1;
      if ( !(_BYTE)v237 )
        goto LABEL_53;
    }
    v259 = 0;
    sub_14018E680(&v238, &v227, 4, &off_1419EAC30, v190, v194);
    if ( v238.m128i_i64[0] != -1 )
    {
      v139 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v139;
      v259 = 0;
      sub_140F82200(v212, v203);
      v140 = *(_OWORD *)&v212[16];
      v141 = *(_OWORD *)&v212[48];
      v142 = *(_OWORD *)&v212[64];
      v143 = (_OWORD *)v243;
      *(_OWORD *)(v243 + 32) = *(_OWORD *)&v212[32];
      v143[3] = v141;
      v143[4] = v142;
      v143[5] = *(_OWORD *)&v212[80];
      v144 = *(_OWORD *)v212;
      v143[1] = v140;
      *v143 = v144;
      goto LABEL_228;
    }
    v242 = v238.m128i_i64[1];
    v37 = *(_OWORD *)v239.m256i_i8;
    v238 = *(__m128i *)v239.m256i_i8;
    *(_OWORD *)v239.m256i_i8 = 0;
    v237 = v37;
    *(_OWORD *)&v239.m256i_u64[2] = v37;
    sub_14062F240(v212, &v238);
    v38 = *(_OWORD *)v212;
    if ( *(_QWORD *)v212 == 2 )
    {
      v145 = v243;
      *(_QWORD *)v243 = 3;
      *(_QWORD *)(v145 + 8) = *((_QWORD *)&v38 + 1);
      v72 = v242;
      if ( v242 )
      {
        v73 = v237;
        goto LABEL_227;
      }
      goto LABEL_228;
    }
    sub_1418F44E0((__m128i *)&v203[16], (const __m128i *)&v212[16], 0x1F0u);
    *(_OWORD *)v203 = v38;
    sub_140EC62C0(&v222, v203);
    v40 = v223.m128i_i64[0];
    v213 = v223.m128i_i64[0];
    if ( v223.m128i_i64[0] )
    {
      if ( !v222.m128i_i64[0] )
        v40 = 0;
      *(_OWORD *)v212 = v222.m128i_i64[0] != 0;
      *(__m128i *)&v212[16] = v222;
      *(_OWORD *)&v212[32] = *(_OWORD *)v212;
      *(__m128i *)&v212[48] = v222;
      *(_QWORD *)&v212[64] = v40;
      while ( 1 )
      {
        sub_140E85300(&v208, v212);
        if ( !v208.m128i_i64[0] )
          break;
        sub_140E7ADB0(v36 + 96, *(unsigned __int8 *)(v208.m128i_i64[0] + v209 + 12));
      }
      do
        sub_140E85300(&v238, v212);
      while ( v238.m128i_i64[0] );
    }
    else
    {
      LOBYTE(v39) = 16;
      sub_140E7ADB0(v36 + 96, v39);
      if ( v222.m128i_i64[0] )
      {
        *(_QWORD *)&v212[8] = 0;
        *(__m128i *)&v212[16] = v222;
        *(_QWORD *)&v212[40] = 0;
        *(__m128i *)&v212[48] = v222;
        v42 = 1;
      }
      else
      {
        v42 = 0;
      }
      *(_QWORD *)v212 = v42;
      *(_QWORD *)&v212[32] = v42;
      *(_QWORD *)&v212[64] = 0;
      do
        sub_140E85300(&v238, v212);
      while ( v238.m128i_i64[0] );
    }
    sub_14029E6E0(v203);
    v34 = v242;
    if ( v242 )
      sub_140001660(v237, v242, 1);
    if ( !v35 )
    {
LABEL_53:
      v259 = 0;
      LOBYTE(v34) = 12;
      sub_140E7ADB0(v36 + 96, v34);
    }
LABEL_54:
    if ( (_BYTE)v235 )
    {
      v259 = 0;
      LOBYTE(v34) = 13;
      sub_140E7ADB0(v36 + 96, v34);
    }
    v259 = 0;
    sub_14018E680(&v238, &v227, 5, &off_1419EAC48, v190, v194);
    if ( v238.m128i_i64[0] != -1 )
    {
      v74 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v74;
      v259 = 0;
      sub_140F82200(v212, v203);
      v75 = *(_QWORD *)v212;
      v208 = *(__m128i *)&v212[8];
      *(_QWORD *)&v209 = *(_QWORD *)&v212[24];
      v76 = v243;
      *(_OWORD *)(v243 + 80) = *(_OWORD *)&v212[80];
      *(_OWORD *)(v76 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v76 + 48) = *(_OWORD *)&v212[48];
      *(_OWORD *)(v76 + 32) = *(_OWORD *)&v212[32];
      v77 = v208;
      v222 = v208;
      v223.m128i_i64[0] = v209;
      *(_QWORD *)(v76 + 24) = v209;
      *(__m128i *)(v76 + 8) = v77;
      *(_QWORD *)v76 = v75;
      goto LABEL_228;
    }
    v222 = _mm_loadu_si128((const __m128i *)&v238.m128i_u64[1]);
    v223.m128i_i64[0] = v239.m256i_i64[1];
    v204 = v222;
    *(_QWORD *)&v205 = v239.m256i_i64[1];
    if ( *((_QWORD *)&v201 + 1) )
    {
      v43 = sub_140D2AC70(&v202, &v204);
      _RAX = v43 >> 57;
      v45 = v200;
      v46 = _mm_cvtsi32_si128(v43 >> 57);
      v47 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v46, v46), 0), 68);
      v48 = v204.m128i_i64[1];
      v49 = v205;
      for ( i = 0; ; i += 16 )
      {
        v51 = v45.m128i_i64[1] & v43;
        v52 = _mm_loadu_si128((const __m128i *)(v45.m128i_i64[0] + v51));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v52, v47));
        if ( _EBX )
          break;
LABEL_64:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v52, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_66;
        v43 = i + v51 + 16;
      }
      v242 = i;
      while ( 1 )
      {
        __asm { tzcnt   eax, ebx }
        v54 = -3LL * (v45.m128i_i64[1] & (v51 + _RAX));
        if ( v49 == *(_QWORD *)(v45.m128i_i64[0] + 8 * v54 - 8)
          && !(unsigned int)sub_1418F4B70(v48, *(_QWORD *)(v45.m128i_i64[0] + 8 * v54 - 16)) )
        {
          break;
        }
        _RAX = (unsigned int)(_EBX - 1);
        LOWORD(_RAX) = _EBX & (_EBX - 1);
        _EBX = _RAX;
        i = v242;
        if ( !(_WORD)_RAX )
          goto LABEL_64;
      }
      v55 = v204.m128i_i64[0];
      if ( v204.m128i_i64[0] )
        sub_140001660(v48, v204.m128i_i64[0], 1);
      *(_BYTE *)(v36 + 232) = 1;
      v259 = 0;
      LOBYTE(v55) = 14;
      sub_140E7ADB0(v36 + 96, v55);
    }
    else
    {
LABEL_66:
      if ( v204.m128i_i64[0] )
        sub_140001660(v204.m128i_i64[1], v204.m128i_i64[0], 1);
    }
  }
  *(_QWORD *)v203 = &off_1419EAA78;
  *(_QWORD *)&v203[8] = sub_140186EE0;
  v258 = 1;
  sub_1416ABFD0(v212, &unk_1419EAA88, v203);
  v237 = *(_QWORD *)v212;
  v254 = 1;
  v228 = *(_QWORD *)&v212[8];
  sub_1402BA1E0(v203, v20, *(_QWORD *)&v212[8], *(_QWORD *)&v212[16]);
  if ( *(_DWORD *)v203 == 1 )
  {
    v59 = _mm_loadu_si128((const __m128i *)&v203[8]);
    v240 = *(_OWORD *)&v203[56];
    v239 = *(__m256i *)&v203[24];
    v238 = v59;
    v254 = 1;
    sub_140F82200(v212, &v238);
    v60 = *(_QWORD *)v212;
    v208 = *(__m128i *)&v212[8];
    v209 = *(_OWORD *)&v212[24];
    v210 = *(_OWORD *)&v212[40];
    v211 = *(_OWORD *)&v212[56];
    *(_QWORD *)(v19 + 88) = *(_QWORD *)&v212[88];
    *(_OWORD *)(v19 + 72) = *(_OWORD *)&v212[72];
    v61 = _mm_load_si128(&v208);
    v62 = v209;
    v63 = v210;
    v222 = v61;
    v223 = (__m128i)v209;
    v224 = v210;
    v225 = v211;
    *(_OWORD *)(v19 + 56) = v211;
    *(_OWORD *)(v19 + 40) = v63;
    *(_OWORD *)(v19 + 24) = v62;
    *(__m128i *)(v19 + 8) = v61;
    *(_QWORD *)v19 = v60;
    goto LABEL_225;
  }
  v222 = _mm_loadu_si128((const __m128i *)&v203[8]);
  v204 = v222;
  v205 = *(_OWORD *)&v203[24];
  v206 = *(_OWORD *)&v203[40];
  v207 = *(_OWORD *)&v203[56];
  v245 = 1;
  *(_QWORD *)&v78 = sub_140893A90(&off_1419E5E90);
  v209 = xmmword_1419E4880;
  v208 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
  v210 = v78;
  v80 = (unsigned __int64)v212;
  v81 = 0;
  v82 = v218;
LABEL_81:
  v236 = v81;
  v241 = (unsigned int)v81 < 2;
  if ( (unsigned int)v81 >= 2 )
  {
    v184 = 0;
    v185 = v216;
    if ( (_QWORD)v216 )
      v185 = v217;
    LOBYTE(v184) = (_QWORD)v216 != 0;
    *(_OWORD *)v212 = v184;
    *(_OWORD *)&v212[16] = v216;
    *(_OWORD *)&v212[32] = v184;
    *(_OWORD *)&v212[48] = v216;
    *(_QWORD *)&v212[64] = v185;
    LOBYTE(v79) = (_QWORD)v216 != 0;
    sub_140E173C0(v203, v212, v185, v79);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)&v203[16];
    *(_OWORD *)(v19 + 8) = *(_OWORD *)v203;
    *(_QWORD *)v19 = -1;
    sub_1403713C0(&v208);
    v254 = 0;
    sub_14029C410(&v204);
    if ( v237 )
      sub_140001660(v228, v237, 1);
    v255 = 0;
    sub_14029C090(&v226);
    v257 = 0;
    sub_14029C410(v197);
    return sub_140370B80(&v200);
  }
  sub_140293470(v80, &v204);
  if ( *(_QWORD *)v212 != -1 )
  {
    *(_QWORD *)&v203[56] = *(_QWORD *)&v212[56];
    v186 = _mm_loadu_si128((const __m128i *)&v212[8]);
    *(_OWORD *)&v203[40] = *(_OWORD *)&v212[40];
    *(_OWORD *)&v203[24] = *(_OWORD *)&v212[24];
    *(_QWORD *)v203 = *(_QWORD *)v212;
    *(__m128i *)&v203[8] = v186;
    sub_140F82200(v212, v203);
    v187 = *(_QWORD *)v212;
    *(_QWORD *)(v19 + 88) = *(_QWORD *)&v212[88];
    *(_OWORD *)(v19 + 72) = *(_OWORD *)&v212[72];
    *(_OWORD *)(v19 + 56) = *(_OWORD *)&v212[56];
    *(_OWORD *)(v19 + 40) = *(_OWORD *)&v212[40];
    *(_OWORD *)(v19 + 24) = *(_OWORD *)&v212[24];
    v188 = _mm_loadu_si128((const __m128i *)&v212[8]);
    *(_QWORD *)v19 = v187;
    *(__m128i *)(v19 + 8) = v188;
    goto LABEL_224;
  }
  LODWORD(v213) = v236 + 1;
  v231 = &v204;
  v232 = 0;
  while ( 1 )
  {
    sub_14036A6D0(v80, &v231);
    if ( *(_QWORD *)v212 != -1 )
    {
      *(_OWORD *)&v203[48] = *(_OWORD *)&v212[48];
      *(_OWORD *)&v203[32] = *(_OWORD *)&v212[32];
      *(__m128i *)&v203[16] = _mm_loadu_si128((const __m128i *)&v212[16]);
      *(_OWORD *)v203 = *(_OWORD *)v212;
      sub_140F82200(v212, v203);
      v146 = _mm_loadu_si128((const __m128i *)v212);
      v147 = *(_OWORD *)&v212[32];
      v148 = *(_OWORD *)&v212[48];
      *(_OWORD *)(v19 + 16) = *(_OWORD *)&v212[16];
      *(_OWORD *)(v19 + 32) = v147;
      *(_OWORD *)(v19 + 48) = v148;
      *(_OWORD *)(v19 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v19 + 80) = *(_OWORD *)&v212[80];
      *(__m128i *)v19 = v146;
      goto LABEL_223;
    }
    if ( !v232 )
    {
      sub_14029C090(&v231);
      v81 = (unsigned int)v213;
      goto LABEL_81;
    }
    sub_14018E680(&v238, &v232, 0, &off_1419EAB38, v189, v193);
    if ( v238.m128i_i64[0] != -1 )
    {
      v149 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v149;
      sub_140F82200(v212, v203);
      v150 = *(_QWORD *)v212;
      v222 = *(__m128i *)&v212[8];
      v223.m128i_i64[0] = *(_QWORD *)&v212[24];
      *(_OWORD *)(v19 + 80) = *(_OWORD *)&v212[80];
      *(_OWORD *)(v19 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v19 + 48) = *(_OWORD *)&v212[48];
      *(_OWORD *)(v19 + 32) = *(_OWORD *)&v212[32];
      v151 = _mm_load_si128(&v222);
      v198 = v151;
      v199 = v223.m128i_i64[0];
      *(_QWORD *)(v19 + 24) = v223.m128i_i64[0];
      *(__m128i *)(v19 + 8) = v151;
      *(_QWORD *)v19 = v150;
      goto LABEL_223;
    }
    v220 = _mm_loadu_si128((const __m128i *)&v238.m128i_u64[1]);
    v221 = v239.m256i_i64[1];
    v249 = 1;
    sub_14018E680(&v238, &v232, 1, &off_1419EAB50, v191, v195);
    if ( v238.m128i_i64[0] != -1 )
    {
      v152 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v152;
      v249 = 1;
      sub_140F82200(v212, v203);
      v153 = *(_QWORD *)v212;
      v222 = *(__m128i *)&v212[8];
      v223.m128i_i64[0] = *(_QWORD *)&v212[24];
      *(_OWORD *)(v19 + 80) = *(_OWORD *)&v212[80];
      *(_OWORD *)(v19 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v19 + 48) = *(_OWORD *)&v212[48];
      *(_OWORD *)(v19 + 32) = *(_OWORD *)&v212[32];
      v154 = _mm_load_si128(&v222);
      v198 = v154;
      v199 = v223.m128i_i64[0];
      *(_QWORD *)(v19 + 24) = v223.m128i_i64[0];
      *(__m128i *)(v19 + 8) = v154;
      *(_QWORD *)v19 = v153;
      goto LABEL_221;
    }
    v229 = _mm_loadu_si128((const __m128i *)&v238.m128i_u64[1]);
    v230 = v239.m256i_i64[1];
    v253 = 1;
    v252 = 1;
    sub_14018EA70(&v238, &v232, 2, &off_1419EAB68);
    if ( v238.m128i_i64[0] != -1 )
    {
      v155 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v155;
      v253 = 1;
      v252 = 1;
      sub_140F82200(v212, v203);
      v156 = v243;
      *(_OWORD *)(v243 + 80) = *(_OWORD *)&v212[80];
      v157 = *(_OWORD *)&v212[16];
      v158 = *(_OWORD *)&v212[32];
      v159 = *(_OWORD *)&v212[48];
      *(_OWORD *)(v156 + 64) = *(_OWORD *)&v212[64];
      *(_OWORD *)(v156 + 48) = v159;
      *(_OWORD *)(v156 + 32) = v158;
      *(_OWORD *)(v156 + 16) = v157;
      *(__m128i *)v156 = _mm_load_si128((const __m128i *)v212);
      goto LABEL_219;
    }
    v83 = v238.m128i_i64[1];
    v253 = 1;
    v252 = 1;
    sub_14018E680(&v238, &v232, 3, &off_1419EAB80, v192, v196);
    if ( v238.m128i_i64[0] != -1 )
    {
      v160 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v160;
      v253 = 1;
      v252 = 1;
      sub_140F82200(v212, v203);
      v161 = _mm_load_si128((const __m128i *)&v212[16]);
      v162 = *(_OWORD *)&v212[48];
      v163 = *(_OWORD *)&v212[64];
      v164 = (_OWORD *)v243;
      *(_OWORD *)(v243 + 32) = *(_OWORD *)&v212[32];
      v164[3] = v162;
      v164[4] = v163;
      v164[5] = *(_OWORD *)&v212[80];
      v165 = *(_OWORD *)v212;
      v164[1] = v161;
      *v164 = v165;
      goto LABEL_219;
    }
    if ( v83 > v82 || v83 <= 0 || !v221 )
    {
      v19 = v243;
      if ( v238.m128i_i64[1] )
        sub_140001660(v239.m256i_i64[0], v238.m128i_i64[1], 1);
LABEL_176:
      if ( v229.m128i_i64[0] )
        sub_140001660(v229.m128i_i64[1], v229.m128i_i64[0], 1);
LABEL_196:
      v137 = v220.m128i_i64[0];
      if ( !v220.m128i_i64[0] )
        continue;
      v138 = v220.m128i_i64[1];
LABEL_198:
      sub_140001660(v138, v137, 1);
      continue;
    }
    v244 = v239.m256i_i64[0];
    v242 = v238.m128i_i64[1];
    v84 = v239.m256i_i64[1];
    v248 = 1;
    v247 = 1;
    sub_14018E680(&v238, &v232, 4, &off_1419EAB98, v189, v193);
    if ( v238.m128i_i64[0] != -1 )
    {
      v166 = _mm_loadu_si128(&v238);
      *(_OWORD *)&v203[48] = v240;
      *(__m256i *)&v203[16] = v239;
      *(__m128i *)v203 = v166;
      v248 = 1;
      v247 = 1;
      sub_140F82200(v212, v203);
      v167 = _mm_load_si128((const __m128i *)&v212[16]);
      v168 = *(_OWORD *)&v212[48];
      v169 = *(_OWORD *)&v212[64];
      v170 = (_OWORD *)v243;
      *(_OWORD *)(v243 + 32) = *(_OWORD *)&v212[32];
      v170[3] = v168;
      v170[4] = v169;
      v170[5] = *(_OWORD *)&v212[80];
      v171 = *(_OWORD *)v212;
      v170[1] = v167;
      *v170 = v171;
      goto LABEL_217;
    }
    v235 = v238.m128i_i64[1];
    *(_OWORD *)v212 = *(_OWORD *)v239.m256i_i8;
    *(_OWORD *)&v212[16] = 0;
    v234 = v239.m256i_i64[0];
    *(_OWORD *)&v212[32] = *(_OWORD *)v239.m256i_i8;
    v251 = 1;
    v250 = 1;
    v85 = v80;
    sub_14062D280(v203, v80);
    if ( v203[0] == 0xFF )
      break;
    v222.m128i_i32[1] = *(_DWORD *)&v203[4];
    *(__int32 *)((char *)v222.m128i_i32 + 1) = *(_DWORD *)&v203[1];
    v223 = _mm_loadu_si128((const __m128i *)&v203[16]);
    v222.m128i_i8[0] = v203[0];
    v222.m128i_i64[1] = *(_QWORD *)&v203[8];
    if ( (_DWORD)v236 )
    {
      v261 = 1;
      v260 = 1;
      sub_1416AC440(v203, &v220);
      v261 = 1;
      v260 = 1;
      sub_140E767F0(v80, &v216, v203);
      v261 = 1;
      v260 = 1;
      v86 = sub_140E5C8C0(v80);
      v87 = 1;
      if ( v84 == 4 )
      {
        if ( *(_DWORD *)v244 != 1852994932 )
        {
          if ( *(_DWORD *)v244 == 1819242356 )
          {
            v261 = 1;
            v260 = 1;
            v128 = (void *)sub_1416419F0(aName_2, 4, &v222);
            if ( !v128 )
              v128 = off_1421E7108;
            if ( *(_BYTE *)v128 == 3 )
            {
              v129 = *((const __m128i **)v128 + 2);
              v80 = *((_QWORD *)v128 + 3);
            }
            else
            {
              v129 = nullptr;
            }
            if ( !v80 )
              v129 = nullptr;
            if ( !v129 )
            {
              v129 = (const __m128i *)&unk_1419E5C4D;
              v80 = 7;
            }
            sub_14072C410(v85, v80, 0, 1, 1);
            v134 = *(_QWORD *)&v212[8];
            if ( *(_DWORD *)v212 == 1 )
            {
              v261 = 1;
              v260 = 1;
              sub_141938D2B(*(_QWORD *)&v212[8], *(_QWORD *)&v212[16]);
            }
            v135 = *(_QWORD *)&v212[16];
            if ( v80 )
            {
              v233 = *(_QWORD *)&v212[16];
              sub_1418F44E0(*(__m128i **)&v212[16], v129, v80);
              v135 = v233;
            }
            *(_QWORD *)v203 = v134;
            *(_QWORD *)&v203[8] = v135;
            *(_QWORD *)&v203[16] = v80;
            v261 = 1;
            v260 = 1;
            sub_140E797D0(v85, v86 + 184, v203);
            v261 = 1;
            v260 = 1;
            v136 = (_QWORD *)sub_140E5FFB0(v85);
            ++*v136;
          }
LABEL_187:
          v88 = 1;
          goto LABEL_188;
        }
        if ( !v230 )
          goto LABEL_187;
        v261 = 1;
        v260 = 1;
        sub_1416AC440(v80, &v229);
        v261 = 1;
        v260 = 1;
        sub_1403AAB80(v86, v80);
        v261 = 1;
        v260 = 1;
        v131 = (_QWORD *)sub_1416419F0(aStatus_3, 6, &v222);
        if ( !v131 )
          v131 = off_1421E7108;
        if ( *(_BYTE *)v131 != 3
          || v131[3] != 9
          || *(_QWORD *)v131[2] ^ 0x6574656C706D6F63LL | *(unsigned __int8 *)(v131[2] + 8LL) ^ 0x64LL )
        {
          goto LABEL_187;
        }
        *(_QWORD *)&v212[16] = v230;
        *(__m128i *)v212 = _mm_load_si128(&v229);
        v261 = 0;
        v260 = 1;
        sub_1403AAB80(v86 + 48, v80);
        v88 = 0;
        goto LABEL_188;
      }
      if ( v84 == 8 )
      {
        v88 = 1;
        if ( *(_QWORD *)v244 == 0x6567617265766F63LL )
          goto LABEL_108;
        goto LABEL_188;
      }
      if ( v84 != 5 )
        goto LABEL_187;
      v88 = 1;
      if ( *(_DWORD *)v244 ^ 0x656B6F74 | *(unsigned __int8 *)(v244 + 4) ^ 0x6E )
      {
LABEL_188:
        v251 = v88;
        v250 = v87;
        sub_14002F9D0(&v222);
        if ( v235 )
          sub_140001660(v234, v235, 1);
        v19 = v243;
        if ( v242 )
          sub_140001660(v244, v242, 1);
        v82 = v218;
        if ( v88 && v229.m128i_i64[0] )
          sub_140001660(v229.m128i_i64[1], v229.m128i_i64[0], 1);
        v80 = v85;
        if ( v87 )
          goto LABEL_196;
      }
      else
      {
LABEL_108:
        *(_QWORD *)&v212[16] = v221;
        *(__m128i *)v212 = v220;
        *(_QWORD *)&v212[40] = v230;
        *(__m128i *)&v212[24] = _mm_load_si128(&v229);
        v90 = sub_140189F30(&v208, v85);
        if ( !v90 )
          sub_141938FE0(aNoEntryFoundFo, 22, &off_1419EABB0);
        sub_14002EA10(v85);
        v92 = *(_BYTE *)(v90 + 17);
        if ( *(_BYTE *)(v90 + 16) )
          v92 = *(_QWORD *)(v90 + 8) > *(_QWORD *)v90;
        *(_BYTE *)(v86 + 232) |= v92;
        v93 = *(_BYTE *)(v90 + 17);
        if ( *(_BYTE *)(v90 + 16) )
          v93 = *(_QWORD *)(v90 + 8) > *(_QWORD *)v90;
        if ( v93 )
        {
          v261 = 0;
          v260 = 0;
          LOBYTE(v91) = 6;
          sub_140E7ADB0(v86 + 96, v91);
        }
        if ( v84 == 5 )
        {
          if ( !(*(_DWORD *)v244 ^ 0x656B6F74 | *(unsigned __int8 *)(v244 + 4) ^ 0x6E) )
          {
            v261 = 0;
            v260 = 0;
            v94 = (_BYTE *)sub_1416419F0(&unk_1419EABC8, 8, &v222);
            if ( !v94 )
              v94 = off_1421E7108;
            if ( *v94 != 1 || !v94[1] )
            {
              *(_BYTE *)(v86 + 232) = 1;
              v261 = 0;
              v260 = 0;
              LOBYTE(v95) = 5;
              sub_140E7ADB0(v86 + 96, v95);
            }
          }
          if ( !(*(_DWORD *)v244 ^ 0x656B6F74 | *(unsigned __int8 *)(v244 + 4) ^ 0x6E) )
          {
            v261 = 0;
            v260 = 0;
            v96 = (_BYTE *)sub_1416419F0(&unk_1419EABC8, 8, &v222);
            if ( !v96 )
              v96 = off_1421E7108;
            if ( *v96 == 1 && v96[1] == 1 )
            {
              v261 = 0;
              v260 = 0;
              if ( (unsigned __int8)sub_1401C2450(v90, &v222) )
              {
                v261 = 0;
                v260 = 0;
                sub_14035E330(v85, &v222);
                if ( *(_DWORD *)v212 == 1 )
                {
                  v98 = *(_QWORD *)&v212[8];
                  v214 = *(_QWORD *)&v212[24];
                  v99 = *(_QWORD *)&v212[16];
                  v233 = *(_QWORD *)&v212[40];
                  v219 = *(_QWORD *)&v212[32];
                  v261 = 0;
                  v260 = 0;
                  v100 = sub_1414083E0((unsigned int)(v83 / 0x15180uLL) + 719163);
                  if ( v100 )
                  {
                    *(_DWORD *)v203 = v100;
                    *(_QWORD *)&v203[4] = v83 % 0x15180uLL;
                    v261 = 0;
                    v260 = 0;
                    sub_1402B4AF0(v85, v203);
                    v215 = *(_QWORD *)v212;
                    v102 = *(_QWORD *)(v86 + 152);
                    v103 = ((v233 + v102) >> 63) ^ 0x8000000000000000uLL;
                    v104 = __OFADD__(v233, v102);
                    v105 = v233 + v102;
                    v106 = *(_QWORD *)(v86 + 144);
                    if ( v104 )
                      v105 = v103;
                    v107 = ((v219 + v106) >> 63) ^ 0x8000000000000000uLL;
                    v104 = __OFADD__(v106, v219);
                    v108 = v106 + v219;
                    v109 = *(_QWORD *)(v86 + 136);
                    if ( v104 )
                      v108 = v107;
                    v110 = v109 + v214;
                    if ( __OFADD__(v109, v214) )
                      v110 = ((v214 + v109) >> 63) ^ 0x8000000000000000uLL;
                    v111 = *(_QWORD *)(v86 + 128);
                    v112 = ((v99 + v111) >> 63) ^ 0x8000000000000000uLL;
                    v104 = __OFADD__(v111, v99);
                    v113 = v111 + v99;
                    v114 = *(_QWORD *)(v86 + 120);
                    if ( v104 )
                      v113 = v112;
                    v115 = ((v98 + v114) >> 63) ^ 0x8000000000000000uLL;
                    v104 = __OFADD__(v114, v98);
                    v116 = v114 + v98;
                    v219 = *(_QWORD *)&v212[8];
                    if ( v104 )
                      v116 = v115;
                    v214 = *(_QWORD *)&v212[16];
                    *(_BYTE *)(v86 + 234) = 1;
                    *(_QWORD *)(v86 + 120) = v116;
                    v117 = *(_BYTE *)(v86 + 235) | (v116 > 0x1FFFFFFFFFFFFFLL);
                    *(_QWORD *)(v86 + 128) = v113;
                    *(_QWORD *)(v86 + 136) = v110;
                    *(_QWORD *)(v86 + 144) = v108;
                    *(_QWORD *)(v86 + 152) = v105;
                    *(_BYTE *)(v86 + 235) = v117
                                          | (v113 > 0x1FFFFFFFFFFFFFLL
                                          || v110 > 0x1FFFFFFFFFFFFFLL
                                          || v108 > 0x1FFFFFFFFFFFFFLL
                                          || v105 > 0x1FFFFFFFFFFFFFLL);
                    v256 = 1;
                    v118 = (void *)sub_1416419F0(aModel_1, 5, &v222);
                    if ( !v118 )
                      v118 = off_1421E7108;
                    if ( *(_BYTE *)v118 == 3 )
                    {
                      v119 = *((const __m128i **)v118 + 2);
                      v120 = *((_QWORD *)v118 + 3);
                      v256 = 1;
                      sub_140E91160(v119, v120);
                      if ( v121 )
                      {
                        sub_14072C410(v85, v120, 0, 1, 1);
                        v122 = *(_QWORD *)&v212[8];
                        if ( v212[0] )
                        {
                          v256 = 1;
                          sub_141938D2B(*(_QWORD *)&v212[8], *(_QWORD *)&v212[16]);
                        }
                        v123 = *(_QWORD *)&v212[16];
                        if ( v120 )
                          sub_1418F44E0(*(__m128i **)&v212[16], v119, v120);
                        *(_QWORD *)v203 = v122;
                        *(_QWORD *)&v203[8] = v123;
                        *(_QWORD *)&v203[16] = v120;
                        v256 = 1;
                        sub_140E797D0(v85, v86 + 160, v203);
                        v256 = 1;
                        v124 = (unsigned __int64 *)sub_140E60E00(v85);
                        v125 = v233 + *v124;
                        if ( __OFADD__(v233, *v124) )
                          v125 = ((__int64)(v233 + *v124) >> 63) ^ 0x8000000000000000uLL;
                        *v124 = v125;
                      }
                    }
                    *(_QWORD *)v203 = v215;
                    *(_QWORD *)&v203[8] = v219;
                    *(_QWORD *)&v203[16] = v214;
                    v256 = 0;
                    sub_140E797D0(v85, v86 + 208, v203);
                    v256 = 0;
                    v126 = (unsigned __int64 *)sub_140E60E00(v85);
                    v127 = *v126 + v233;
                    if ( __OFADD__(*v126, v233) )
                      v127 = ((__int64)(v233 + *v126) >> 63) ^ 0x8000000000000000uLL;
                    *v126 = v127;
                    v88 = 0;
                    v87 = 0;
                    goto LABEL_188;
                  }
                  *(_BYTE *)(v86 + 232) = 1;
                  v261 = 0;
                  v260 = 0;
                  LOBYTE(v101) = 1;
                  sub_140E7ADB0(v86 + 96, v101);
                }
                else
                {
                  *(_BYTE *)(v86 + 232) = 1;
                  v261 = 0;
                  v260 = 0;
                  LOBYTE(v97) = 5;
                  sub_140E7ADB0(v86 + 96, v97);
                }
              }
            }
          }
        }
        v251 = 0;
        v250 = 0;
        sub_14002F9D0(&v222);
        if ( v235 )
          sub_140001660(v234, v235, 1);
        v137 = v242;
        v19 = v243;
        v82 = v218;
        v80 = v85;
        v138 = v244;
        if ( v242 )
          goto LABEL_198;
      }
    }
    else
    {
      v89 = 1;
      if ( v84 == 5 )
      {
        if ( !(*(_DWORD *)v244 ^ 0x656B6F74 | *(unsigned __int8 *)(v244 + 4) ^ 0x6E) )
          goto LABEL_160;
      }
      else if ( v84 == 8 && *(_QWORD *)v244 == 0x6567617265766F63LL )
      {
LABEL_160:
        v239.m256i_i64[0] = v221;
        v238 = v220;
        v239.m256i_i64[3] = v230;
        *(__m128i *)&v239.m256i_u64[1] = _mm_load_si128(&v229);
        v261 = 0;
        v260 = 0;
        sub_1403A4100(v85, &v208, &v238);
        if ( *(_QWORD *)v212 == -1 )
        {
          *(__m128i *)&v203[8] = _mm_loadu_si128((const __m128i *)&v212[8]);
          *(_QWORD *)v203 = -1;
        }
        else
        {
          v130 = _mm_loadu_si128((const __m128i *)v212);
          *(_OWORD *)&v203[48] = *(_OWORD *)&v212[48];
          *(_OWORD *)&v203[32] = *(_OWORD *)&v212[32];
          *(_OWORD *)&v203[16] = *(_OWORD *)&v212[16];
          *(__m128i *)v203 = v130;
        }
        v132 = sub_1402BA090(v203);
        v261 = 0;
        v260 = 0;
        sub_1401C24B0(v132, v244, v84, &v222);
        v89 = 0;
      }
      v251 = v89;
      v250 = v89;
      sub_14002F9D0(&v222);
      if ( v235 )
        sub_140001660(v234, v235, 1);
      v19 = v243;
      v82 = v218;
      if ( v242 )
        sub_140001660(v244, v242, 1);
      v133 = v89 == 0;
      v80 = v85;
      if ( !v133 )
        goto LABEL_176;
    }
  }
  v172 = *(_QWORD *)&v203[8];
  v173 = v243;
  *(_QWORD *)v243 = 3;
  *(_QWORD *)(v173 + 8) = v172;
  if ( v235 )
    sub_140001660(v234, v235, 1);
LABEL_217:
  if ( v242 )
    sub_140001660(v244, v242, 1);
LABEL_219:
  if ( v229.m128i_i64[0] )
    sub_140001660(v229.m128i_i64[1], v229.m128i_i64[0], 1);
LABEL_221:
  if ( v220.m128i_i64[0] )
    sub_140001660(v220.m128i_i64[1], v220.m128i_i64[0], 1);
LABEL_223:
  sub_14029C090(&v231);
LABEL_224:
  sub_1403713C0(&v208);
  v254 = 1;
  sub_14029C410(&v204);
LABEL_225:
  v72 = v237;
  if ( v237 )
  {
    v73 = v228;
LABEL_227:
    sub_140001660(v73, v72, 1);
  }
LABEL_228:
  v255 = 1;
  sub_14029C090(&v226);
LABEL_229:
  v257 = 1;
  HIDWORD(_RAX) = (unsigned __int64)sub_14029C410(v197) >> 32;
LABEL_230:
  v174 = v200.m128i_i64[1];
  if ( v200.m128i_i64[1] )
  {
    v175 = *((_QWORD *)&v201 + 1);
    if ( *((_QWORD *)&v201 + 1) )
    {
      v176 = v200.m128i_i64[0];
      v177 = (const __m128i *)(v200.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v200.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v179 = _mm_load_si128(v177);
            v176 -= 384;
            ++v177;
            _R15D = _mm_movemask_epi8(v179) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v180 = -3 * _RAX;
        v181 = *(_QWORD *)(v176 + 8 * v180 - 24);
        if ( v181 )
          sub_140001660(*(_QWORD *)(v176 + 8 * v180 - 16), v181, 1);
        --v175;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v175 );
    }
    v182 = (24 * v174 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v183 = v182 + v174 + 17;
    if ( v183 )
      sub_140001660(v200.m128i_i64[0] - v182, v183, 16);
  }
  return sub_140E8B5B0(&v216);
}
