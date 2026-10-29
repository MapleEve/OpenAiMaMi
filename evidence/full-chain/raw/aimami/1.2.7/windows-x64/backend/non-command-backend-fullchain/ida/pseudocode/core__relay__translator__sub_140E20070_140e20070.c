// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e20070 | name sub_140E20070
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E20070(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // r14
  const __m128i *v9; // r15
  __int64 v10; // r13
  __m128i *v11; // rax
  __m128i *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r15
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // r10
  __int64 v33; // r9
  int v34; // r10d
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  bool v38; // al
  __int64 result; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  const __m128i *v42; // r15
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // r14
  _BYTE *v49; // rax
  _BYTE *v50; // r14
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  __int8 v56; // bl
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  signed __int64 v62; // r15
  signed __int64 v63; // rax
  unsigned __int64 v64; // r12
  __int64 v66; // r14
  __int64 v67; // rbx
  __m128i v68; // xmm0
  __m128i v69; // xmm8
  __int64 i; // rcx
  unsigned __int64 v71; // r12
  __m128i v72; // xmm9
  __int64 v74; // rax
  int v75; // eax
  int v76; // ecx
  unsigned __int64 v77; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  __int64 j; // r8
  unsigned __int64 v84; // rax
  __m128i v85; // xmm1
  unsigned __int64 v87; // rbx
  __int32 v88; // r12d
  unsigned __int64 v89; // rax
  __int64 v91; // r12
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __int64 k; // rdx
  unsigned __int64 v96; // rax
  __m128i v97; // xmm1
  __int64 v99; // r9
  __int64 v100; // r12
  unsigned __int64 v101; // r15
  __int64 v102; // r14
  __int64 v103; // r12
  __m128i *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // r14
  __m128i *v108; // rax
  __m128i *v109; // rbx
  __int64 v110; // rdx
  char v111; // al
  __m128i *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // r15
  __m128i *v115; // rbx
  __int64 v116; // rdx
  char v117; // al
  __int64 v118; // rdx
  unsigned __int64 v119; // r8
  __int64 v120; // rcx
  _DWORD *v121; // rax
  __int64 v122; // rcx
  __m128i *v123; // rax
  __int64 v124; // rcx
  void *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  _DWORD *v128; // rax
  __int64 v129; // rcx
  signed __int64 v130; // r14
  const __m128i *v131; // r12
  __int64 v132; // r13
  __m128i *v133; // rax
  __int64 v134; // r15
  _DWORD *v135; // rax
  __int64 v136; // rcx
  __m128i *v137; // rax
  __int64 v138; // rbx
  __int64 v139; // rcx
  __m128i *v140; // rax
  signed __int64 v141; // r14
  __int64 v142; // rcx
  const __m128i *v143; // r12
  __int64 v144; // r13
  __m128i *v145; // rax
  __int64 v146; // r15
  _DWORD *v147; // rax
  __int64 v148; // rcx
  __m128i *v149; // rax
  __int64 v150; // rcx
  __m128i *v151; // rax
  signed __int64 v152; // r15
  const __m128i *v153; // r13
  __int64 v154; // r14
  __m128i *v155; // rax
  __int64 v156; // r12
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  __m128i *v160; // rax
  __int64 v161; // rcx
  _DWORD *v162; // rax
  signed __int64 v163; // r14
  const __m128i *v164; // r12
  __int64 v165; // r13
  __m128i *v166; // rax
  __int64 v167; // r15
  __int64 v168; // rcx
  __m128i *v169; // rax
  __int64 v170; // rcx
  __m128i *v171; // rax
  __int64 v172; // rcx
  _DWORD *v173; // rax
  __int64 v174; // rcx
  signed __int64 v175; // r15
  const __m128i *v176; // r13
  __int64 v177; // r14
  __m128i *v178; // rax
  __int64 v179; // r12
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rcx
  signed __int64 v183; // r8
  __int64 v184; // r14
  __m128i *v185; // rax
  __int64 v186; // r15
  __int64 v187; // rbx
  const __m128i *v188; // rbx
  unsigned __int64 v189; // r14
  __int64 v190; // r15
  __int64 v191; // rcx
  __m128i *v192; // rax
  signed __int64 v193; // r14
  const __m128i *v194; // r12
  __int64 v195; // r13
  __m128i *v196; // rax
  __int64 v197; // r15
  __int64 v198; // rcx
  __m128i *v199; // rax
  __int64 v200; // rcx
  signed __int64 v201; // r15
  const __m128i *v202; // r13
  __int64 v203; // r14
  __m128i *v204; // rax
  __int64 v205; // r12
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 *v208; // rcx
  __int64 v209; // rcx
  __int64 v210; // rax
  unsigned __int64 v211; // r15
  __int64 v212; // r12
  __int64 v213; // rdx
  __m128i v214; // xmm0
  __m128i v215; // xmm8
  unsigned __int64 v216; // r15
  __m128i v217; // xmm9
  __m128i *v219; // r8
  unsigned __int64 v220; // r14
  __int64 v221; // rdx
  __int64 v222; // r13
  int v223; // eax
  __m128i *v224; // r12
  __m128i *v225; // r15
  const __m128i *v226; // r14
  __int64 v227; // rcx
  __int64 v228; // r13
  __m128i v229; // xmm0
  __m128i *v230; // rax
  _DWORD *v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // rcx
  void *v235; // rax
  __int64 v236; // rax
  __int64 v237; // rcx
  __m128i *v238; // rax
  __m128i v239; // xmm0
  const __m128i *v240; // r12
  unsigned __int64 v241; // r14
  __int64 v242; // r15
  __int64 v243; // rax
  signed __int64 v244; // rbx
  const __m128i *v245; // r14
  __int64 v246; // rcx
  __int64 v247; // r12
  __m128i *v248; // rax
  __m128i *v249; // r15
  __int64 v250; // rdx
  __m128i v251; // [rsp+28h] [rbp-58h] BYREF
  __int64 v252; // [rsp+38h] [rbp-48h]
  __m128i v253; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v254; // [rsp+50h] [rbp-30h]
  __int64 v255; // [rsp+58h] [rbp-28h]
  __int64 v256; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v257; // [rsp+68h] [rbp-18h]
  const __m128i *v258; // [rsp+70h] [rbp-10h]
  __int64 v259; // [rsp+78h] [rbp-8h]
  signed __int64 v260; // [rsp+80h] [rbp+0h]
  __int64 v261; // [rsp+88h] [rbp+8h]
  __int128 v262; // [rsp+90h] [rbp+10h] BYREF
  __m128i v263; // [rsp+A0h] [rbp+20h]
  char v264; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v265[15]; // [rsp+B1h] [rbp+31h]
  __m128i v266; // [rsp+C0h] [rbp+40h]
  __int64 v267; // [rsp+D8h] [rbp+58h]
  __int64 v268; // [rsp+E0h] [rbp+60h]
  __m128i v269; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v270; // [rsp+F8h] [rbp+78h]
  __m256i v271; // [rsp+100h] [rbp+80h] BYREF
  __int64 v272; // [rsp+120h] [rbp+A0h]
  __int64 v273; // [rsp+128h] [rbp+A8h]
  signed __int64 v274; // [rsp+130h] [rbp+B0h]
  __int64 v275; // [rsp+138h] [rbp+B8h]
  __m128i v276; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v277; // [rsp+150h] [rbp+D0h]
  __int64 v278; // [rsp+160h] [rbp+E0h]
  __int64 v279; // [rsp+170h] [rbp+F0h]
  __int64 v280; // [rsp+178h] [rbp+F8h]
  __int64 v281; // [rsp+188h] [rbp+108h]
  __int64 v282; // [rsp+190h] [rbp+110h]
  __m128i v283; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v284; // [rsp+1B8h] [rbp+138h]
  _BYTE v285[24]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v286; // [rsp+1D8h] [rbp+158h]
  int v287; // [rsp+1E4h] [rbp+164h]
  __int64 v288; // [rsp+1E8h] [rbp+168h]
  __m256i v289; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v290; // [rsp+210h] [rbp+190h]
  __int128 v291; // [rsp+218h] [rbp+198h]
  __int64 v292; // [rsp+228h] [rbp+1A8h]
  __int128 v293; // [rsp+230h] [rbp+1B0h]
  __int64 v294; // [rsp+240h] [rbp+1C0h]
  __int64 v295; // [rsp+248h] [rbp+1C8h]
  __int32 v296; // [rsp+250h] [rbp+1D0h]
  __int16 v297; // [rsp+254h] [rbp+1D4h]
  char v298; // [rsp+256h] [rbp+1D6h]
  char v299; // [rsp+267h] [rbp+1E7h] BYREF
  __m128i v300; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v301; // [rsp+278h] [rbp+1F8h]
  char v302; // [rsp+287h] [rbp+207h]
  char v303; // [rsp+288h] [rbp+208h]
  char v304; // [rsp+289h] [rbp+209h]
  char v305; // [rsp+28Ah] [rbp+20Ah]
  char v306; // [rsp+28Bh] [rbp+20Bh]
  char v307; // [rsp+28Ch] [rbp+20Ch]
  char v308; // [rsp+28Dh] [rbp+20Dh]
  char v309; // [rsp+28Eh] [rbp+20Eh]
  char v310; // [rsp+28Fh] [rbp+20Fh]
  __int64 m; // [rsp+290h] [rbp+210h]
  char v312; // [rsp+29Fh] [rbp+21Fh]
  __m128i *v313; // [rsp+2A0h] [rbp+220h]
  __int64 v314; // [rsp+2A8h] [rbp+228h]

  v314 = -2;
  v283.m128i_i64[0] = 0;
  v283.m128i_i64[1] = 1;
  v284 = 0;
  sub_140E24770(a2, &v283);
  v6 = sub_1416419F0(aModel_7, 5, a3);
  if ( v6 )
  {
    LOBYTE(v7) = *(_BYTE *)v6 != 3;
    v8 = *(_QWORD *)(v6 + 24);
    if ( !((unsigned __int8)v7 | (v8 == 0)) )
    {
      v9 = *(const __m128i **)(v6 + 16);
      if ( a2[6].m128i_i64[0] != v8 || (unsigned int)sub_1418F4B70(a2[5].m128i_i64[1], *(_QWORD *)(v6 + 16)) )
      {
        if ( v8 < 0 )
        {
          v10 = 0;
          goto LABEL_7;
        }
        nullsub_1(v7);
        v10 = 1;
        v11 = (__m128i *)sub_140001650(v8, 1);
        if ( !v11 )
LABEL_7:
          sub_141938D2B(v10, v8);
        v12 = v11;
        sub_1418F44E0(v11, v9, v8);
        v13 = a2[5].m128i_i64[0];
        if ( v13 )
          sub_140001660(a2[5].m128i_i64[1], v13, 1);
        a2[5].m128i_i64[0] = v8;
        a2[5].m128i_i64[1] = (__int64)v12;
        a2[6].m128i_i64[0] = v8;
      }
    }
  }
  v14 = sub_1416419F0(aUsage_5, 5, a3);
  if ( v14 )
    sub_140C18620(a2, v14);
  v15 = sub_1416419F0(aChoices_2, 7, a3);
  if ( !v15 || *(_BYTE *)v15 != 4 || !*(_QWORD *)(v15 + 24) || (v16 = *(_QWORD *)(v15 + 16)) == 0 )
  {
LABEL_366:
    result = v284;
    a1[1].m128i_i64[0] = v284;
    *a1 = _mm_loadu_si128(&v283);
    return result;
  }
  v17 = sub_1416419F0(aDelta_4, 5, *(_QWORD *)(v15 + 16));
  if ( v17 )
  {
    v18 = *(_BYTE *)v17;
    switch ( *(_BYTE *)v17 )
    {
      case 0:
        break;
      case 1:
        v289.m256i_i8[1] = *(_BYTE *)(v17 + 1);
        break;
      case 2:
        *(__m128i *)&v289.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v17 + 8));
        break;
      case 3:
        sub_1416AC440(&v289.m256i_u64[1], v17 + 8);
        break;
      case 4:
        sub_1403918C0(&v289.m256i_u64[1], *(_QWORD *)(v17 + 16), *(_QWORD *)(v17 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v17 + 24) )
        {
          v19 = *(_QWORD *)(v17 + 8);
          if ( !v19 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v276, v19, *(_QWORD *)(v17 + 16));
        }
        else
        {
          v276.m128i_i64[0] = 0;
          v277.m128i_i64[0] = 0;
        }
        v289.m256i_i64[1] = v276.m128i_i64[0];
        *(_OWORD *)&v289.m256i_u64[2] = __PAIR128__(v277.m128i_u64[0], v276.m128i_u64[1]);
        break;
    }
    v266 = *(__m128i *)&v289.m256i_u64[2];
    v264 = v18;
    v265[0] = v289.m256i_i8[1];
    *(_DWORD *)&v265[1] = *(__int32 *)((char *)v289.m256i_i32 + 2);
    *(_WORD *)&v265[5] = v289.m256i_i16[3];
    *(_QWORD *)&v265[7] = v289.m256i_i64[1];
    v289.m256i_i8[0] = 0;
    sub_140DF44E0(&v289);
  }
  else
  {
    v289.m256i_i8[0] = 0;
    v266 = _mm_loadu_si128((const __m128i *)&v289.m256i_u64[2]);
    v264 = 0;
    *(_QWORD *)v265 = *(__int64 *)((char *)v289.m256i_i64 + 1);
    *(_DWORD *)&v265[8] = *(__int32 *)((char *)&v289.m256i_i32[2] + 1);
    *(_WORD *)&v265[12] = *(__int16 *)((char *)&v289.m256i_i16[6] + 1);
    v265[14] = v289.m256i_i8[15];
  }
  if ( a2[18].m128i_i64[1] == -1 )
    goto LABEL_79;
  v20 = a2[19].m128i_i64[0];
  v21 = a2[19].m128i_i64[1];
  if ( v264 == 5 )
  {
    v22 = *(_QWORD *)&v265[7];
    v23 = v266.m128i_i64[1];
    if ( *(_QWORD *)&v265[7] != 0 && v266.m128i_i64[1] != 0 )
    {
      v24 = v266.m128i_i64[0];
      v25 = 0;
      while ( 1 )
      {
        if ( v25 )
        {
          if ( v24 < *(unsigned __int16 *)(v25 + 626) )
            goto LABEL_39;
          goto LABEL_50;
        }
        if ( !v24 )
        {
          v25 = v22;
          goto LABEL_49;
        }
        v25 = v22;
        if ( (v24 & 7) == 0 )
          break;
        v28 = 0;
        do
        {
          v25 = *(_QWORD *)(v25 + 632);
          ++v28;
        }
        while ( (v24 & 7) != v28 );
        v29 = v24 - v28;
        if ( v24 >= 8 )
          goto LABEL_48;
LABEL_49:
        v22 = 0;
        v24 = 0;
        if ( *(_WORD *)(v25 + 626) )
        {
LABEL_39:
          v26 = v25;
          v27 = v24;
          goto LABEL_52;
        }
        do
        {
LABEL_50:
          v26 = *(_QWORD *)(v25 + 352);
          if ( !v26 )
            sub_141939020(&off_141A52F98);
          ++v22;
          v27 = *(unsigned __int16 *)(v25 + 624);
          v25 = *(_QWORD *)(v25 + 352);
        }
        while ( (unsigned __int16)v27 >= *(_WORD *)(v26 + 626) );
LABEL_52:
        if ( !v22 )
        {
          v24 = v27 + 1;
          v25 = v26;
          v33 = 32 * v27;
          v34 = *(unsigned __int8 *)(v26 + v33);
          if ( !*(_BYTE *)(v26 + v33) )
            goto LABEL_36;
          goto LABEL_61;
        }
        v30 = v26 + 8 * v27 + 640;
        if ( (v22 & 7) == 0 )
        {
          v32 = v22;
          if ( v22 < 8 )
            goto LABEL_58;
          do
          {
LABEL_57:
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 632LL)
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL)
                            + 632LL);
            v30 = v25 + 632;
            v32 -= 8LL;
          }
          while ( v32 );
          goto LABEL_58;
        }
        v31 = 0;
        do
        {
          v25 = *(_QWORD *)v30;
          v30 = *(_QWORD *)v30 + 632LL;
          ++v31;
        }
        while ( (v22 & 7) != v31 );
        v32 = v22 - v31;
        if ( v22 >= 8 )
          goto LABEL_57;
LABEL_58:
        v24 = 0;
        v33 = 32 * v27;
        v34 = *(unsigned __int8 *)(v26 + v33);
        if ( !*(_BYTE *)(v26 + v33) )
          goto LABEL_36;
LABEL_61:
        v35 = *(_QWORD *)(v26 + v33 + 24);
        LOBYTE(v22) = 1;
        if ( v34 != 4 && v34 != 3 || v35 )
          goto LABEL_67;
LABEL_36:
        v22 = 0;
        if ( !--v23 )
          goto LABEL_67;
      }
      v29 = v24;
      if ( v24 < 8 )
        goto LABEL_49;
      do
      {
LABEL_48:
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 632)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v29 -= 8LL;
      }
      while ( v29 );
      goto LABEL_49;
    }
  }
  LOBYTE(v22) = 0;
LABEL_67:
  v36 = sub_1416419F0(aFinishReason_0, 13, v16);
  if ( !v36 || *(_BYTE *)v36 != 3 )
  {
    if ( (_BYTE)v22 )
      goto LABEL_73;
LABEL_79:
    sub_140F8E6D0(&v289, &v264);
    if ( v289.m256i_i64[0] != -1 )
    {
      v313 = (__m128i *)v289.m256i_i64[1];
      m = v289.m256i_i64[0];
      if ( v289.m256i_i64[2] )
        sub_140E322D0(a2, v313, v289.m256i_i64[2], &v283);
      if ( m )
        sub_140001660(v313, m, 1);
    }
    v40 = sub_1416419F0(aContent_9, 7, &v264);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 24);
      if ( *(_BYTE *)v40 == 3 && v41 != 0 )
      {
        v42 = *(const __m128i **)(v40 + 16);
        v43 = a2[11].m128i_u8[0];
        if ( v43 == 2 )
        {
          sub_140E30B70(a2, &v283);
          sub_140E2EC90(a2, v42, v41, &v283);
        }
        else
        {
          v44 = (_DWORD)a2 + 152;
          if ( v43 == 1 )
          {
            v45 = a2[10].m128i_i64[1];
            if ( v41 > a2[9].m128i_i64[1] - v45 )
            {
              sub_14190D590(v44, v45, v41, 1, 1);
              v45 = a2[10].m128i_i64[1];
            }
            sub_1418F44E0((__m128i *)(a2[10].m128i_i64[0] + v45), v42, v41);
            a2[10].m128i_i64[1] += v41;
            sub_140E333B0(a2, &v283);
          }
          else
          {
            v46 = a2[10].m128i_i64[1];
            if ( v41 > a2[9].m128i_i64[1] - v46 )
            {
              sub_14190D590(v44, v46, v41, 1, 1);
              v46 = a2[10].m128i_i64[1];
            }
            sub_1418F44E0((__m128i *)(a2[10].m128i_i64[0] + v46), v42, v41);
            a2[10].m128i_i64[1] += v41;
            v47 = sub_140301E60(a2[10].m128i_i64[0]);
            if ( v47 )
            {
              if ( v47 == 1 )
              {
                a2[11].m128i_i8[0] = 1;
                sub_140E333B0(a2, &v283);
              }
              else
              {
                a2[11].m128i_i8[0] = 2;
                m = a2[9].m128i_i64[1];
                v313 = (__m128i *)a2[10].m128i_i64[0];
                v48 = a2[10].m128i_i64[1];
                a2[9].m128i_i64[1] = 0;
                a2[10].m128i_i64[0] = 1;
                a2[10].m128i_i64[1] = 0;
                sub_140E30B70(a2, &v283);
                sub_140E2EC90(a2, v313, v48, &v283);
                if ( m )
                  sub_140001660(v313, m, 1);
              }
            }
          }
        }
      }
    }
    v49 = (_BYTE *)sub_1416419F0(aToolCalls_0, 10, &v264);
    v50 = v49;
    if ( v49 )
    {
      if ( *v49 == 4 )
      {
        sub_140E334F0(a2, &v283);
        v51 = *((_QWORD *)v50 + 2);
        v52 = v51 + 32LL * *((_QWORD *)v50 + 3);
        v288 = v16;
        v255 = v52;
        while ( v51 != v255 )
        {
          v53 = sub_1416419F0(aIndex_1, 5, v51);
          if ( v53 && *(_BYTE *)v53 == 2 && !*(_QWORD *)(v53 + 8) )
            v54 = *(_QWORD *)(v53 + 16);
          else
            v54 = 0;
          v256 = v54;
          v55 = sub_1416419F0(aFunction_1, 8, v51);
          if ( v55 )
          {
            v56 = *(_BYTE *)v55;
            switch ( *(_BYTE *)v55 )
            {
              case 0:
                break;
              case 1:
                v289.m256i_i8[1] = *(_BYTE *)(v55 + 1);
                break;
              case 2:
                *(__m128i *)&v289.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v55 + 8));
                break;
              case 3:
                sub_1416AC440(&v289.m256i_u64[1], v55 + 8);
                break;
              case 4:
                sub_1403918C0(&v289.m256i_u64[1], *(_QWORD *)(v55 + 16), *(_QWORD *)(v55 + 24));
                break;
              case 5:
                if ( *(_QWORD *)(v55 + 24) )
                {
                  v57 = *(_QWORD *)(v55 + 8);
                  if ( !v57 )
                    sub_141939020(&off_141A54900);
                  sub_140E11B90(&v276, v57, *(_QWORD *)(v55 + 16));
                }
                else
                {
                  v276.m128i_i64[0] = 0;
                  v277.m128i_i64[0] = 0;
                }
                v289.m256i_i64[1] = v276.m128i_i64[0];
                *(_OWORD *)&v289.m256i_u64[2] = __PAIR128__(v277.m128i_u64[0], v276.m128i_u64[1]);
                break;
            }
            v289.m256i_i8[0] = v56;
            v263 = _mm_loadu_si128((const __m128i *)&v289.m256i_u64[2]);
            LOWORD(v262) = __PAIR16__(v289.m256i_u8[1], v56);
            *(_QWORD *)((char *)&v262 + 2) = *(__int64 *)((char *)v289.m256i_i64 + 2);
            *(_DWORD *)((char *)&v262 + 10) = *(__int32 *)((char *)&v289.m256i_i32[2] + 2);
            HIWORD(v262) = v289.m256i_i16[7];
            v289.m256i_i8[0] = 0;
            sub_140DF44E0(&v289);
          }
          else
          {
            v289.m256i_i8[0] = 0;
            v263 = _mm_loadu_si128((const __m128i *)&v289.m256i_u64[2]);
            LOBYTE(v262) = 0;
            *(_QWORD *)((char *)&v262 + 1) = *(__int64 *)((char *)v289.m256i_i64 + 1);
            *(_DWORD *)((char *)&v262 + 9) = *(__int32 *)((char *)&v289.m256i_i32[2] + 1);
            *(_WORD *)((char *)&v262 + 13) = *(__int16 *)((char *)&v289.m256i_i16[6] + 1);
            HIBYTE(v262) = v289.m256i_i8[15];
          }
          m = v54;
          v273 = v51;
          v58 = sub_1416419F0(aId_8, 2, v51);
          if ( v58 && *(_BYTE *)v58 == 3 )
          {
            v261 = *(_QWORD *)(v58 + 16);
            v272 = *(_QWORD *)(v58 + 24);
          }
          else
          {
            v261 = 1;
            v272 = 0;
          }
          v59 = sub_1416419F0(aName_9, 4, &v262);
          v275 = 1;
          if ( v59 && *(_BYTE *)v59 == 3 )
          {
            v275 = *(_QWORD *)(v59 + 16);
            v313 = *(__m128i **)(v59 + 24);
          }
          else
          {
            v313 = nullptr;
          }
          v60 = sub_1416419F0(aArguments_0, 9, &v262);
          v61 = 1;
          if ( v60 )
          {
            v62 = (signed __int64)v313;
            if ( *(_BYTE *)v60 == 3 )
            {
              v61 = *(_QWORD *)(v60 + 16);
              v63 = *(_QWORD *)(v60 + 24);
            }
            else
            {
              v63 = 0;
            }
          }
          else
          {
            v63 = 0;
            v62 = (signed __int64)v313;
          }
          v274 = v63;
          v258 = (const __m128i *)v61;
          if ( v62 && a2[27].m128i_i64[1] )
          {
            v64 = sub_140D2CC10(&a2[28], v275, v62);
            _RAX = v64 >> 57;
            v66 = a2[26].m128i_i64[0];
            v67 = a2[26].m128i_i64[1];
            v68 = _mm_cvtsi32_si128(v64 >> 57);
            v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v71 = v67 & v64;
              v72 = _mm_loadu_si128((const __m128i *)(v66 + v71));
              _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v69));
              if ( _R13D )
                break;
LABEL_141:
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL));
              if ( (_DWORD)_RAX )
                goto LABEL_143;
              v64 = i + v71 + 16;
            }
            v267 = i;
            while ( 1 )
            {
              __asm { tzcnt   eax, r13d }
              v74 = -3LL * (v67 & (v71 + _RAX));
              if ( v62 == *(_QWORD *)(v66 + 8 * v74 - 8) )
              {
                v75 = sub_1418F4B70(v275, *(_QWORD *)(v66 + 8 * v74 - 16));
                LOBYTE(v76) = 1;
                v287 = v76;
                if ( !v75 )
                  break;
              }
              _RAX = (unsigned int)(_R13D - 1);
              LOWORD(_RAX) = _R13D & (_R13D - 1);
              _R13D = _RAX;
              i = v267;
              if ( !(_WORD)_RAX )
                goto LABEL_141;
            }
          }
          else
          {
LABEL_143:
            v287 = 0;
          }
          v16 = v288;
          if ( a2[21].m128i_i64[1] )
          {
            v77 = sub_140D2C470(a2 + 22, &v256);
            v79 = a2[20].m128i_i64[0];
            v80 = a2[20].m128i_i64[1];
            v81 = _mm_cvtsi32_si128(v77 >> 57);
            v82 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v81, v81), 0), 68);
            for ( j = 0; ; j += 16 )
            {
              v84 = v80 & v77;
              v85 = _mm_loadu_si128((const __m128i *)(v79 + v84));
              _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v85, v82));
              v87 = v257;
              if ( _R9D )
                break;
LABEL_149:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v85, (__m128i)-1LL)) )
                goto LABEL_151;
              v77 = j + v84 + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   r10d, r9d }
              if ( m == *(_QWORD *)(v79 - 112 * (v80 & (v84 + _R10)) - 112) )
                break;
              _R10 = (unsigned int)(_R9D - 1);
              LOWORD(_R10) = _R9D & (_R9D - 1);
              _R9D = _R10;
              if ( !(_WORD)_R10 )
                goto LABEL_149;
            }
          }
          else
          {
LABEL_151:
            v88 = a2[29].m128i_i32[2];
            a2[29].m128i_i32[2] = v88 + 1;
            if ( (_BYTE)v287 )
            {
              sub_14026E240((__int64)&v253);
            }
            else
            {
              sub_141568C20(&v289);
              *(__m128i *)v285 = _mm_loadu_si128((const __m128i *)&v289);
              v276.m128i_i64[0] = 0;
              v276.m128i_i64[1] = 1;
              v277.m128i_i64[0] = 0;
              v289.m256i_i64[2] = 1610612768;
              v289.m256i_i64[0] = (__int64)&v276;
              v289.m256i_i64[1] = (__int64)&off_141A54A20;
              if ( (unsigned __int8)sub_141569DC0(v285, &v289) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_9,
                  55,
                  (unsigned int)&v299,
                  (unsigned int)&unk_141A53038,
                  (__int64)&off_141A54AD8);
              v259 = v276.m128i_i64[1];
              v267 = v276.m128i_i64[0];
              if ( v277.m128i_i64[0] <= 0x10uLL )
              {
                if ( v277.m128i_i64[0] != 16 )
LABEL_391:
                  sub_141938F40(v276.m128i_i32[2], v277.m128i_i32[0], 0, 16, (__int64)&off_141A53848);
              }
              else if ( *(char *)(v276.m128i_i64[1] + 16) < -64 )
              {
                goto LABEL_391;
              }
              v276.m128i_i64[0] = v276.m128i_i64[1];
              v276.m128i_i64[1] = 16;
              v289.m256i_i64[0] = (__int64)&v276;
              v289.m256i_i64[1] = (__int64)sub_140186EE0;
              sub_1416ABFD0(&v253, &unk_141A53860, &v289);
              if ( v267 )
                sub_140001660(v259, v267, 1);
            }
            v296 = v88;
            *(__m128i *)v289.m256i_i8 = _mm_loadu_si128(&v253);
            *(_OWORD *)&v289.m256i_u64[2] = v254;
            v290 = 1;
            v291 = 0;
            v292 = 1;
            v293 = 0;
            v294 = 1;
            v295 = 0;
            v297 = 0;
            v298 = 0;
            sub_1403ADA50(&v276, &a2[20], m, &v289);
            v87 = v257;
            v62 = (signed __int64)v313;
            if ( v276.m128i_i64[0] != -1 )
            {
              if ( v276.m128i_i64[0] )
                sub_140001660(v276.m128i_i64[1], v276.m128i_i64[0], 1);
              if ( v277.m128i_i64[1] )
                sub_140001660(v278, v277.m128i_i64[1], 1);
              if ( v279 )
                sub_140001660(v280, v279, 1);
              if ( v281 )
                sub_140001660(v282, v281, 1);
            }
            if ( !a2[21].m128i_i64[1] )
LABEL_359:
              sub_141938FE0(aEnsuredAbove, 13, &off_141A53878);
          }
          v89 = sub_140D2C470(a2 + 22, &v256);
          v91 = a2[20].m128i_i64[0];
          v92 = a2[20].m128i_i64[1];
          v93 = _mm_cvtsi32_si128(v89 >> 57);
          v94 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v93, v93), 0), 68);
          for ( k = 0; ; k += 16 )
          {
            v96 = v92 & v89;
            v97 = _mm_loadu_si128((const __m128i *)(v91 + v96));
            _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v97, v94));
            if ( _R8D )
              break;
LABEL_174:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v97, (__m128i)-1LL)) )
              goto LABEL_359;
            v89 = k + v96 + 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r9d, r8d }
            v99 = -112LL * (v92 & (v96 + _R9));
            if ( m == *(_QWORD *)(v91 + v99 - 112) )
              break;
            _R9 = (unsigned int)(_R8D - 1);
            LOWORD(_R9) = _R8D & (_R8D - 1);
            _R8D = _R9;
            if ( !(_WORD)_R9 )
              goto LABEL_174;
          }
          v100 = v99 + v91;
          if ( v272 && !*(_QWORD *)(v100 - 64) )
          {
            v101 = v272;
            if ( v272 < 0 )
            {
              v103 = 0;
              goto LABEL_369;
            }
            v102 = v100;
            nullsub_1(v92);
            v103 = 1;
            v104 = (__m128i *)sub_140001650(v101, 1);
            if ( !v104 )
            {
              v87 = v101;
LABEL_369:
              sub_141938D2B(v103, v87);
            }
            v87 = (unsigned __int64)v104;
            sub_1418F44E0(v104, (const __m128i *)v261, v101);
            v100 = v102;
            v105 = *(_QWORD *)(v102 - 80);
            if ( v105 )
              sub_140001660(*(_QWORD *)(v102 - 72), v105, 1);
            v106 = v272;
            *(_QWORD *)(v102 - 80) = v272;
            *(_QWORD *)(v102 - 72) = v87;
            *(_QWORD *)(v102 - 64) = v106;
            v62 = (signed __int64)v313;
          }
          v257 = v87;
          if ( v62 && !*(_QWORD *)(v100 - 40) )
          {
            if ( v62 < 0 )
            {
              v107 = 0;
              goto LABEL_371;
            }
            nullsub_1(v92);
            v107 = 1;
            v108 = (__m128i *)sub_140001650(v62, 1);
            if ( !v108 )
            {
              v260 = v62;
LABEL_371:
              sub_141938D2B(v107, v260);
            }
            v109 = v108;
            sub_1418F44E0(v108, (const __m128i *)v275, v62);
            v110 = *(_QWORD *)(v100 - 56);
            if ( v110 )
              sub_140001660(*(_QWORD *)(v100 - 48), v110, 1);
            *(_QWORD *)(v100 - 56) = v62;
            v260 = (signed __int64)v109;
            *(_QWORD *)(v100 - 48) = v109;
            *(_QWORD *)(v100 - 40) = v62;
            v111 = v287;
            *(_BYTE *)(v100 - 2) = v287;
            if ( v111 && (*(_QWORD *)(v100 - 88) < 4u || **(_DWORD **)(v100 - 96) != 1600353379) )
            {
              sub_14026E240((__int64)&v289);
              v112 = (__m128i *)(v100 - 104);
              v113 = *(_QWORD *)(v100 - 104);
              if ( v113 )
                sub_140001660(*(_QWORD *)(v100 - 96), v113, 1);
              v112[1].m128i_i64[0] = v289.m256i_i64[2];
              *v112 = _mm_loadu_si128((const __m128i *)&v289);
            }
            *(_BYTE *)(v100 - 3) = v287;
          }
          v114 = v273;
          if ( !*(_QWORD *)(v100 - 64) )
          {
            sub_141568C20(&v289);
            *(_OWORD *)v285 = *(_OWORD *)v289.m256i_i8;
            v276.m128i_i64[0] = 0;
            v276.m128i_i64[1] = 1;
            v277.m128i_i64[0] = 0;
            v289.m256i_i64[2] = 1610612768;
            v289.m256i_i64[0] = (__int64)&v276;
            v289.m256i_i64[1] = (__int64)&off_141A54A20;
            if ( (unsigned __int8)sub_141569DC0(v285, &v289) )
              sub_141939040(
                (unsigned int)aADisplayImplem_9,
                55,
                (unsigned int)&v299,
                (unsigned int)&unk_141A53038,
                (__int64)&off_141A54AD8);
            m = v276.m128i_i64[1];
            v313 = (__m128i *)v276.m128i_i64[0];
            if ( v277.m128i_i64[0] <= 0x10uLL )
            {
              if ( v277.m128i_i64[0] != 16 )
LABEL_395:
                sub_141938F40(v276.m128i_i32[2], v277.m128i_i32[0], 0, 16, (__int64)&off_141A53890);
            }
            else if ( *(char *)(v276.m128i_i64[1] + 16) < -64 )
            {
              goto LABEL_395;
            }
            v276.m128i_i64[0] = v276.m128i_i64[1];
            v276.m128i_i64[1] = 16;
            v289.m256i_i64[0] = (__int64)&v276;
            v289.m256i_i64[1] = (__int64)sub_140186EE0;
            sub_1416ABFD0(&v251, &unk_141A538A8, &v289);
            if ( v313 )
              sub_140001660(m, v313, 1);
            v115 = (__m128i *)(v100 - 80);
            v116 = *(_QWORD *)(v100 - 80);
            v114 = v273;
            if ( v116 )
              sub_140001660(*(_QWORD *)(v100 - 72), v116, 1);
            v115[1].m128i_i64[0] = v252;
            *v115 = _mm_loadu_si128(&v251);
          }
          v117 = 1;
          if ( *(_BYTE *)(v100 - 4) )
          {
            if ( v274 )
              goto LABEL_209;
          }
          else if ( *(_QWORD *)(v100 - 40) )
          {
            *(_BYTE *)(v100 - 4) = 1;
            if ( *(_BYTE *)(v100 - 2) )
            {
              v300.m128i_i64[0] = 0;
              v301 = 0;
              nullsub_1(v92);
              v135 = (_DWORD *)sub_140001650(4, 1);
              if ( !v135 )
                sub_141938D2B(1, 4);
              *v135 = 1701869940;
              *(_QWORD *)v285 = 4;
              m = (__int64)v135;
              *(_QWORD *)&v285[8] = v135;
              *(_QWORD *)&v285[16] = 4;
              nullsub_1(v136);
              v137 = (__m128i *)sub_140001650(16, 1);
              v313 = v137;
              if ( !v137 )
                sub_141938D2B(1, 16);
              v138 = v100;
              *v137 = _mm_loadu_si128((const __m128i *)"custom_tool_call");
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 16;
              v289.m256i_i64[2] = (__int64)v137;
              v289.m256i_i64[3] = 16;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v139);
              v140 = (__m128i *)sub_140001650(2, 1);
              if ( !v140 )
                sub_141938D2B(1, 2);
              v140->m128i_i16[0] = 25705;
              *(_QWORD *)v285 = 2;
              *(_QWORD *)&v285[8] = v140;
              *(_QWORD *)&v285[16] = 2;
              v141 = *(_QWORD *)(v100 - 88);
              v313 = v140;
              if ( v141 < 0 )
              {
                v144 = 0;
LABEL_375:
                v306 = 1;
                sub_141938D2B(v144, v141);
              }
              if ( v141 )
              {
                v142 = v100;
                v143 = *(const __m128i **)(v100 - 96);
                nullsub_1(v142);
                v144 = 1;
                v145 = (__m128i *)sub_140001650(v141, 1);
                if ( !v145 )
                  goto LABEL_375;
                v146 = (__int64)v145;
                sub_1418F44E0(v145, v143, v141);
                v16 = v288;
              }
              else
              {
                v146 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v141;
              v289.m256i_i64[2] = v146;
              v289.m256i_i64[3] = v141;
              v306 = 0;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v157);
              v158 = sub_140001650(6, 1);
              if ( !v158 )
                sub_141938D2B(1, 6);
              *(_WORD *)(v158 + 4) = 29557;
              *(_DWORD *)v158 = 1952543859;
              *(_QWORD *)v285 = 6;
              m = v158;
              *(_QWORD *)&v285[8] = v158;
              *(_QWORD *)&v285[16] = 6;
              nullsub_1(v159);
              v160 = (__m128i *)sub_140001650(11, 1);
              v313 = v160;
              if ( !v160 )
                sub_141938D2B(1, 11);
              qmemcpy(v160, "in_progress", 11);
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 11;
              v289.m256i_i64[2] = (__int64)v160;
              v289.m256i_i64[3] = 11;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v161);
              v162 = (_DWORD *)sub_140001650(7, 1);
              if ( !v162 )
                sub_141938D2B(1, 7);
              *(_DWORD *)((char *)v162 + 3) = 1684627308;
              *v162 = 1819042147;
              *(_QWORD *)v285 = 7;
              *(_QWORD *)&v285[8] = v162;
              *(_QWORD *)&v285[16] = 7;
              v163 = *(_QWORD *)(v138 - 64);
              v313 = (__m128i *)v162;
              if ( v163 < 0 )
              {
                v165 = 0;
LABEL_379:
                v305 = 1;
                sub_141938D2B(v165, v163);
              }
              if ( v163 )
              {
                v164 = *(const __m128i **)(v138 - 72);
                nullsub_1(v138);
                v165 = 1;
                v166 = (__m128i *)sub_140001650(v163, 1);
                if ( !v166 )
                  goto LABEL_379;
                v167 = (__int64)v166;
                sub_1418F44E0(v166, v164, v163);
                v16 = v288;
              }
              else
              {
                v167 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v163;
              v289.m256i_i64[2] = v167;
              v289.m256i_i64[3] = v163;
              v305 = 0;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v191);
              v192 = (__m128i *)sub_140001650(4, 1);
              if ( !v192 )
                sub_141938D2B(1, 4);
              v192->m128i_i32[0] = 1701667182;
              *(_QWORD *)v285 = 4;
              *(_QWORD *)&v285[8] = v192;
              *(_QWORD *)&v285[16] = 4;
              v193 = *(_QWORD *)(v138 - 40);
              v313 = v192;
              if ( v193 < 0 )
              {
                v195 = 0;
LABEL_385:
                v304 = 1;
                sub_141938D2B(v195, v193);
              }
              if ( v193 )
              {
                v194 = *(const __m128i **)(v138 - 48);
                nullsub_1(v138);
                v195 = 1;
                v196 = (__m128i *)sub_140001650(v193, 1);
                if ( !v196 )
                  goto LABEL_385;
                v197 = (__int64)v196;
                sub_1418F44E0(v196, v194, v193);
                v16 = v288;
              }
              else
              {
                v197 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v193;
              v289.m256i_i64[2] = v197;
              v289.m256i_i64[3] = v193;
              v304 = 0;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v206);
              v207 = sub_140001650(5, 1);
              if ( !v207 )
                sub_141938D2B(1, 5);
              *(_BYTE *)(v207 + 4) = 116;
              *(_DWORD *)v207 = 1970302569;
              *(_QWORD *)v285 = 5;
              *(_QWORD *)&v285[8] = v207;
              *(_QWORD *)&v285[16] = 5;
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 0;
              *(_OWORD *)&v289.m256i_u64[2] = 1u;
              sub_140E72AA0(&v276, &v300, v285, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              v208 = &v271.m256i_i64[1];
              v271.m256i_i64[3] = v301;
              *(__m128i *)&v271.m256i_u64[1] = _mm_loadu_si128(&v300);
              v271.m256i_i8[0] = 5;
            }
            else
            {
              v269.m128i_i64[0] = 0;
              v270 = 0;
              nullsub_1(v92);
              v147 = (_DWORD *)sub_140001650(4, 1);
              if ( !v147 )
                sub_141938D2B(1, 4);
              *v147 = 1701869940;
              v300.m128i_i64[0] = 4;
              m = (__int64)v147;
              v300.m128i_i64[1] = (__int64)v147;
              v301 = 4;
              nullsub_1(v148);
              v149 = (__m128i *)sub_140001650(13, 1);
              v313 = v149;
              if ( !v149 )
                sub_141938D2B(1, 13);
              v138 = v100;
              qmemcpy(v149, "function_call", 13);
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 13;
              v289.m256i_i64[2] = (__int64)v149;
              v289.m256i_i64[3] = 13;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v150);
              v151 = (__m128i *)sub_140001650(2, 1);
              if ( !v151 )
                sub_141938D2B(1, 2);
              v151->m128i_i16[0] = 25705;
              v300.m128i_i64[0] = 2;
              v313 = v151;
              v300.m128i_i64[1] = (__int64)v151;
              v301 = 2;
              v152 = *(_QWORD *)(v100 - 88);
              if ( v152 < 0 )
              {
                v154 = 0;
LABEL_373:
                v310 = 1;
                sub_141938D2B(v154, v152);
              }
              m = v100 - 56;
              if ( v152 )
              {
                v153 = *(const __m128i **)(v100 - 96);
                nullsub_1(v100 - 56);
                v154 = 1;
                v155 = (__m128i *)sub_140001650(v152, 1);
                if ( !v155 )
                  goto LABEL_373;
                v156 = (__int64)v155;
                sub_1418F44E0(v155, v153, v152);
                v16 = v288;
              }
              else
              {
                v156 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v152;
              v289.m256i_i64[2] = v156;
              v289.m256i_i64[3] = v152;
              v310 = 0;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v168);
              v169 = (__m128i *)sub_140001650(6, 1);
              if ( !v169 )
                sub_141938D2B(1, 6);
              v169->m128i_i16[2] = 29557;
              v169->m128i_i32[0] = 1952543859;
              v300.m128i_i64[0] = 6;
              v275 = (__int64)v169;
              v300.m128i_i64[1] = (__int64)v169;
              v301 = 6;
              nullsub_1(v170);
              v171 = (__m128i *)sub_140001650(11, 1);
              v313 = v171;
              if ( !v171 )
                sub_141938D2B(1, 11);
              qmemcpy(v171, "in_progress", 11);
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 11;
              v289.m256i_i64[2] = (__int64)v171;
              v289.m256i_i64[3] = 11;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v172);
              v173 = (_DWORD *)sub_140001650(7, 1);
              if ( !v173 )
                sub_141938D2B(1, 7);
              *(_DWORD *)((char *)v173 + 3) = 1684627308;
              *v173 = 1819042147;
              v300.m128i_i64[0] = 7;
              v300.m128i_i64[1] = (__int64)v173;
              v301 = 7;
              v175 = *(_QWORD *)(v138 - 64);
              v313 = (__m128i *)v173;
              if ( v175 < 0 )
              {
                v177 = 0;
LABEL_381:
                v309 = 1;
                sub_141938D2B(v177, v175);
              }
              if ( v175 )
              {
                v176 = *(const __m128i **)(v138 - 72);
                nullsub_1(v174);
                v177 = 1;
                v178 = (__m128i *)sub_140001650(v175, 1);
                if ( !v178 )
                  goto LABEL_381;
                v179 = (__int64)v178;
                sub_1418F44E0(v178, v176, v175);
                v16 = v288;
              }
              else
              {
                v179 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v175;
              v289.m256i_i64[2] = v179;
              v289.m256i_i64[3] = v175;
              v309 = 0;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v198);
              v199 = (__m128i *)sub_140001650(4, 1);
              if ( !v199 )
                sub_141938D2B(1, 4);
              v199->m128i_i32[0] = 1701667182;
              v300.m128i_i64[0] = 4;
              v300.m128i_i64[1] = (__int64)v199;
              v301 = 4;
              v201 = *(_QWORD *)(v138 - 40);
              v313 = v199;
              if ( v201 < 0 )
              {
                v203 = 0;
LABEL_387:
                v308 = 1;
                sub_141938D2B(v203, v201);
              }
              if ( v201 )
              {
                v202 = *(const __m128i **)(v138 - 48);
                nullsub_1(v200);
                v203 = 1;
                v204 = (__m128i *)sub_140001650(v201, 1);
                if ( !v204 )
                  goto LABEL_387;
                v205 = (__int64)v204;
                sub_1418F44E0(v204, v202, v201);
                v16 = v288;
              }
              else
              {
                v205 = 1;
              }
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = v201;
              v289.m256i_i64[2] = v205;
              v289.m256i_i64[3] = v201;
              v308 = 0;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              nullsub_1(v209);
              v210 = sub_140001650(9, 1);
              if ( !v210 )
                sub_141938D2B(1, 9);
              *(_QWORD *)v210 = 0x746E656D75677261LL;
              *(_BYTE *)(v210 + 8) = 115;
              v300.m128i_i64[0] = 9;
              v300.m128i_i64[1] = v210;
              v301 = 9;
              v289.m256i_i8[0] = 3;
              v289.m256i_i64[1] = 0;
              *(_OWORD *)&v289.m256i_u64[2] = 1u;
              sub_140E72AA0(&v276, &v269, &v300, &v289);
              if ( v276.m128i_i8[0] != -1 )
                sub_140DF44E0(&v276);
              v286 = v270;
              *(__m128i *)&v285[8] = _mm_loadu_si128(&v269);
              v285[0] = 5;
              if ( a2[24].m128i_i64[1] )
              {
                v211 = sub_140D2AC70(&a2[25], m);
                v212 = a2[23].m128i_i64[0];
                v213 = a2[23].m128i_i64[1];
                v214 = _mm_cvtsi32_si128(v211 >> 57);
                v215 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v214, v214), 0), 68);
                for ( m = 0; ; m += 16 )
                {
                  v216 = v213 & v211;
                  v217 = _mm_loadu_si128((const __m128i *)(v212 + v216));
                  _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v217, v215));
                  if ( (_DWORD)_RAX )
                    break;
LABEL_319:
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v217, (__m128i)-1LL)) )
                    goto LABEL_332;
                  v211 = m + v216 + 16;
                }
                v219 = *(__m128i **)(v138 - 40);
                v272 = v213;
                while ( 1 )
                {
                  v275 = _RAX;
                  __asm { tzcnt   eax, eax }
                  if ( v219 == *(__m128i **)(v212 - 48 * (v213 & (v216 + _RAX)) - 32) )
                  {
                    v220 = v212 - 48 * (v213 & (v216 + _RAX));
                    v221 = *(_QWORD *)(v220 - 40);
                    v222 = *(_QWORD *)(v138 - 48);
                    v313 = v219;
                    v223 = sub_1418F4B70(v222, v221);
                    v219 = v313;
                    if ( !v223 )
                      break;
                  }
                  _RAX = (unsigned int)(v275 - 1);
                  LOWORD(_RAX) = v275 & (v275 - 1);
                  v16 = v288;
                  v213 = v272;
                  if ( !(_WORD)_RAX )
                    goto LABEL_319;
                }
                v224 = *(__m128i **)(v220 - 8);
                v225 = (__m128i *)((char *)v224 - (char *)v313);
                if ( v224 >= v313 )
                {
                  v226 = *(const __m128i **)(v220 - 16);
                  if ( !(unsigned int)sub_1418F4B70(v222, &v225->m128i_i8[(_QWORD)v226]) )
                  {
                    if ( (__int64)v225 < 0 )
                    {
                      v228 = 0;
LABEL_389:
                      sub_141938D2B(v228, v268);
                    }
                    if ( v225 )
                    {
                      nullsub_1(v227);
                      v228 = 1;
                      v268 = sub_140001650(v225, 1);
                      if ( !v268 )
                      {
                        v268 = (__int64)v225;
                        goto LABEL_389;
                      }
                    }
                    else
                    {
                      v268 = 1;
                    }
                    if ( v224 != v313 )
                      sub_1418F44E0((__m128i *)v268, v226, (unsigned __int64)v225);
                    v289.m256i_i64[1] = (__int64)v225;
                    v289.m256i_i64[2] = v268;
                    v289.m256i_i64[3] = (__int64)v225;
                    v289.m256i_i8[0] = 3;
                    v307 = 1;
                    v313 = (__m128i *)sub_141641AF0(aNamespace_0, 9, v285);
                    sub_140DF44E0(v313);
                    v229 = _mm_loadu_si128((const __m128i *)&v289);
                    v230 = v313;
                    v313[1] = _mm_loadu_si128((const __m128i *)&v289.m256i_u64[2]);
                    *v230 = v229;
                  }
                }
                v16 = v288;
              }
LABEL_332:
              v208 = *(__int64 **)&v285[1];
              *(__m128i *)&v271.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v285[16]);
              v271.m256i_i8[0] = v285[0];
              *(__int64 *)((char *)v271.m256i_i64 + 1) = *(_QWORD *)&v285[1];
              *(__int32 *)((char *)&v271.m256i_i32[2] + 1) = *(_DWORD *)&v285[9];
              *(__int16 *)((char *)&v271.m256i_i16[6] + 1) = *(_WORD *)&v285[13];
              v271.m256i_i8[15] = v285[15];
            }
            v269.m128i_i64[0] = 0;
            v270 = 0;
            nullsub_1(v208);
            v231 = (_DWORD *)sub_140001650(4, 1);
            if ( !v231 )
              sub_141938D2B(1, 4);
            *v231 = 1701869940;
            v300.m128i_i64[0] = 4;
            m = (__int64)v231;
            v300.m128i_i64[1] = (__int64)v231;
            v301 = 4;
            nullsub_1(v232);
            v233 = sub_140001650(26, 1);
            v313 = (__m128i *)v233;
            if ( !v233 )
              sub_141938D2B(1, 26);
            *(_OWORD *)(v233 + 10) = *(__int128 *)((char *)&xmmword_141A536B0 + 10);
            *(__m128i *)v233 = _mm_loadu_si128((const __m128i *)&xmmword_141A536B0);
            v289.m256i_i8[0] = 3;
            v289.m256i_i64[1] = 26;
            v289.m256i_i64[2] = v233;
            v289.m256i_i64[3] = 26;
            sub_140E72AA0(&v276, &v269, &v300, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            nullsub_1(v234);
            v235 = (void *)sub_140001650(12, 1);
            if ( !v235 )
              sub_141938D2B(1, 12);
            qmemcpy(v235, "output_index", 12);
            v300.m128i_i64[0] = 12;
            v300.m128i_i64[1] = (__int64)v235;
            v301 = 12;
            v236 = *(unsigned int *)(v138 - 8);
            v289.m256i_i8[0] = 2;
            v289.m256i_i64[1] = 0;
            v289.m256i_i64[2] = v236;
            sub_140E72AA0(&v276, &v269, &v300, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            nullsub_1(v237);
            v238 = (__m128i *)sub_140001650(4, 1);
            if ( !v238 )
              sub_141938D2B(1, 4);
            v238->m128i_i32[0] = 1835365481;
            v300.m128i_i64[0] = 4;
            v313 = v238;
            v300.m128i_i64[1] = (__int64)v238;
            v301 = 4;
            v312 = 1;
            sub_140412420(&v289, &v271);
            if ( v289.m256i_i8[0] == -1 )
            {
              v276.m128i_i64[0] = v289.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_16,
                43,
                (unsigned int)&v276,
                (unsigned int)&off_141A52FE8,
                (__int64)&off_141A538B0);
            }
            v239 = _mm_loadu_si128((const __m128i *)&v289);
            v277 = _mm_loadu_si128((const __m128i *)&v289.m256i_u64[2]);
            v276 = v239;
            v312 = 0;
            sub_140E72AA0(&v289, &v269, &v300, &v276);
            if ( v289.m256i_i8[0] != -1 )
              sub_140DF44E0(&v289);
            v286 = v270;
            *(__m128i *)&v285[8] = _mm_loadu_si128(&v269);
            v285[0] = 5;
            v300.m128i_i64[0] = (__int64)&xmmword_141A536B0;
            v300.m128i_i64[1] = 26;
            v269.m128i_i64[0] = (__int64)v285;
            v289.m256i_i64[0] = (__int64)&v300;
            v289.m256i_i64[1] = (__int64)sub_140186EE0;
            v289.m256i_i64[2] = (__int64)&v269;
            v289.m256i_i64[3] = (__int64)sub_1404806B0;
            sub_1416ABFD0(&v276, &unk_141A548D8, &v289);
            v240 = (const __m128i *)v276.m128i_i64[1];
            v241 = v277.m128i_i64[0];
            v242 = v284;
            if ( v277.m128i_i64[0] > (unsigned __int64)(v283.m128i_i64[0] - v284) )
            {
              v313 = (__m128i *)v276.m128i_i64[1];
              sub_14190D590((unsigned int)&v283, v284, v277.m128i_i32[0], 1, 1);
              v242 = v284;
              v16 = v288;
              v240 = v313;
LABEL_346:
              sub_1418F44E0((__m128i *)(v242 + v283.m128i_i64[1]), v240, v241);
            }
            else if ( v277.m128i_i64[0] )
            {
              goto LABEL_346;
            }
            v284 = v241 + v242;
            if ( v276.m128i_i64[0] )
              sub_140001660(v240, v276.m128i_i64[0], 1);
            sub_140DF44E0(v285);
            sub_140DF44E0(&v271);
            v100 = v138;
            v117 = *(_BYTE *)(v138 - 4);
            v114 = v273;
            if ( !v274 )
              goto LABEL_350;
LABEL_209:
            if ( !v117 )
              goto LABEL_350;
            v118 = *(_QWORD *)(v100 - 16);
            v119 = v274;
            if ( v274 > (unsigned __int64)(*(_QWORD *)(v100 - 32) - v118) )
            {
              sub_14190D590(v100 - 32, v118, v274, 1, 1);
              v118 = *(_QWORD *)(v100 - 16);
              v114 = v273;
              v119 = v274;
            }
            sub_1418F44E0((__m128i *)(*(_QWORD *)(v100 - 24) + v118), v258, v119);
            *(_QWORD *)(v100 - 16) += v274;
            if ( *(_BYTE *)(v100 - 3) )
              goto LABEL_350;
            v300.m128i_i64[0] = 0;
            v301 = 0;
            nullsub_1(v120);
            v121 = (_DWORD *)sub_140001650(4, 1);
            if ( !v121 )
              sub_141938D2B(1, 4);
            *v121 = 1701869940;
            v271.m256i_i64[0] = 4;
            m = (__int64)v121;
            v271.m256i_i64[1] = (__int64)v121;
            v271.m256i_i64[2] = 4;
            nullsub_1(v122);
            v123 = (__m128i *)sub_140001650(38, 1);
            v313 = v123;
            if ( !v123 )
              sub_141938D2B(1, 38);
            qmemcpy(&v123[1], "n_call_arguments.delta", 22);
            *v123 = _mm_loadu_si128((const __m128i *)&xmmword_141A538C8);
            v289.m256i_i8[0] = 3;
            v289.m256i_i64[1] = 38;
            v289.m256i_i64[2] = (__int64)v123;
            v289.m256i_i64[3] = 38;
            sub_140E72AA0(&v276, &v300, &v271, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            nullsub_1(v124);
            v125 = (void *)sub_140001650(12, 1);
            if ( !v125 )
              sub_141938D2B(1, 12);
            qmemcpy(v125, "output_index", 12);
            v271.m256i_i64[0] = 12;
            v271.m256i_i64[1] = (__int64)v125;
            v271.m256i_i64[2] = 12;
            v126 = *(unsigned int *)(v100 - 8);
            v289.m256i_i8[0] = 2;
            v289.m256i_i64[1] = 0;
            v289.m256i_i64[2] = v126;
            sub_140E72AA0(&v276, &v300, &v271, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            nullsub_1(v127);
            v128 = (_DWORD *)sub_140001650(7, 1);
            if ( !v128 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v128 + 3) = 1684627309;
            *v128 = 1835365481;
            v271.m256i_i64[0] = 7;
            v271.m256i_i64[1] = (__int64)v128;
            v271.m256i_i64[2] = 7;
            v130 = *(_QWORD *)(v100 - 88);
            v313 = (__m128i *)v128;
            if ( v130 < 0 )
            {
              v132 = 0;
LABEL_377:
              v303 = 1;
              sub_141938D2B(v132, v130);
            }
            if ( v130 )
            {
              v131 = *(const __m128i **)(v100 - 96);
              nullsub_1(v129);
              v132 = 1;
              v133 = (__m128i *)sub_140001650(v130, 1);
              if ( !v133 )
                goto LABEL_377;
              v134 = (__int64)v133;
              sub_1418F44E0(v133, v131, v130);
              v16 = v288;
            }
            else
            {
              v134 = 1;
            }
            v289.m256i_i8[0] = 3;
            v289.m256i_i64[1] = v130;
            v289.m256i_i64[2] = v134;
            v289.m256i_i64[3] = v130;
            v303 = 0;
            sub_140E72AA0(&v276, &v300, &v271, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            nullsub_1(v180);
            v181 = sub_140001650(5, 1);
            if ( !v181 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v181 + 4) = 97;
            *(_DWORD *)v181 = 1953260900;
            v271.m256i_i64[0] = 5;
            v271.m256i_i64[1] = v181;
            v271.m256i_i64[2] = 5;
            v183 = v274;
            v313 = (__m128i *)v181;
            if ( v274 < 0 )
            {
              v184 = 0;
LABEL_383:
              v302 = 1;
              sub_141938D2B(v184, v183);
            }
            nullsub_1(v182);
            v184 = 1;
            v185 = (__m128i *)sub_140001650(v274, 1);
            v183 = v274;
            if ( !v185 )
              goto LABEL_383;
            v186 = (__int64)v185;
            v187 = v274;
            sub_1418F44E0(v185, v258, v274);
            v289.m256i_i8[0] = 3;
            v289.m256i_i64[1] = v187;
            v289.m256i_i64[2] = v186;
            v289.m256i_i64[3] = v187;
            v302 = 0;
            sub_140E72AA0(&v276, &v300, &v271, &v289);
            if ( v276.m128i_i8[0] != -1 )
              sub_140DF44E0(&v276);
            v286 = v301;
            *(__m128i *)&v285[8] = _mm_loadu_si128(&v300);
            v285[0] = 5;
            v271.m256i_i64[0] = (__int64)&xmmword_141A538C8;
            v271.m256i_i64[1] = 38;
            v300.m128i_i64[0] = (__int64)v285;
            v289.m256i_i64[0] = (__int64)&v271;
            v289.m256i_i64[1] = (__int64)sub_140186EE0;
            v289.m256i_i64[2] = (__int64)&v300;
            v289.m256i_i64[3] = (__int64)sub_1404806B0;
            sub_1416ABFD0(&v276, &unk_141A548D8, &v289);
            v188 = (const __m128i *)v276.m128i_i64[1];
            v189 = v277.m128i_i64[0];
            v190 = v284;
            if ( v277.m128i_i64[0] > (unsigned __int64)(v283.m128i_i64[0] - v284) )
            {
              v313 = (__m128i *)v276.m128i_i64[1];
              sub_14190D590((unsigned int)&v283, v284, v277.m128i_i32[0], 1, 1);
              v190 = v284;
              v16 = v288;
              v188 = v313;
LABEL_279:
              sub_1418F44E0((__m128i *)(v190 + v283.m128i_i64[1]), v188, v189);
            }
            else if ( v277.m128i_i64[0] )
            {
              goto LABEL_279;
            }
            v284 = v189 + v190;
            if ( v276.m128i_i64[0] )
              sub_140001660(v188, v276.m128i_i64[0], 1);
            sub_140DF44E0(v285);
            v114 = v273;
          }
LABEL_350:
          sub_140DF44E0(&v262);
          v51 = v114 + 32;
        }
      }
    }
    v243 = sub_1416419F0(aFinishReason_0, 13, v16);
    if ( v243 )
    {
      v244 = *(_QWORD *)(v243 + 24);
      if ( *(_BYTE *)v243 == 3 && v244 != 0 )
      {
        v245 = *(const __m128i **)(v243 + 16);
        sub_140E334F0(a2, &v283);
        sub_140E30B70(a2, &v283);
        sub_140E267F0(a2, &v283);
        if ( v244 < 0 )
        {
          v247 = 0;
          goto LABEL_358;
        }
        nullsub_1(v246);
        v247 = 1;
        v248 = (__m128i *)sub_140001650(v244, 1);
        if ( !v248 )
LABEL_358:
          sub_141938D2B(v247, v244);
        v249 = v248;
        sub_1418F44E0(v248, v245, v244);
        v250 = a2[18].m128i_i64[1];
        if ( v250 != -1 )
        {
          if ( v250 )
            sub_140001660(a2[19].m128i_i64[0], v250, 1);
        }
        a2[18].m128i_i64[1] = v244;
        a2[19].m128i_i64[0] = (__int64)v249;
        a2[19].m128i_i64[1] = v244;
      }
    }
    sub_140DF44E0(&v264);
    goto LABEL_366;
  }
  v37 = *(_QWORD *)(v36 + 24);
  if ( v37 )
  {
    if ( v37 != v21 )
      goto LABEL_73;
    v38 = (unsigned int)sub_1418F4B70(*(_QWORD *)(v36 + 16), v20) != 0;
  }
  else
  {
    v38 = 0;
  }
  if ( (v38 | (unsigned __int8)v22) != 1 )
    goto LABEL_79;
LABEL_73:
  sub_14102D650(&v276, aChatContentOrC, 66);
  v313 = (__m128i *)v276.m128i_i64[1];
  v289.m256i_i64[0] = v276.m128i_i64[1];
  v289.m256i_i64[1] = v276.m128i_i64[1] + v277.m128i_i64[0];
  v289.m256i_i64[2] = 512;
  sub_1407171D0(v285, &v289);
  v289.m256i_i64[3] = (__int64)aUpstreamProtoc;
  v290 = 23;
  *(__m128i *)v289.m256i_i8 = _mm_loadu_si128((const __m128i *)v285);
  v289.m256i_i64[2] = *(_QWORD *)&v285[16];
  if ( v276.m128i_i64[0] )
    sub_140001660(v313, v276.m128i_i64[0], 1);
  sub_140E25810(a1, a2, &v289);
  result = sub_140DF44E0(&v264);
  if ( v283.m128i_i64[0] )
    return sub_140001660(v283.m128i_i64[1], v283.m128i_i64[0], 1);
  return result;
}
