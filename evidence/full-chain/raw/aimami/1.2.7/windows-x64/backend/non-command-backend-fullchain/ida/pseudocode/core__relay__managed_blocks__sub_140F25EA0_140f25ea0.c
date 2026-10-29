// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f25ea0 | name sub_140F25EA0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F25EA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i si128; // xmm1
  __int64 v21; // rdi
  char v22; // al
  _QWORD *v23; // rdi
  char v24; // bl
  __int64 v25; // rcx
  __int64 v26; // r15
  __m128i v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int64 v32; // rdi
  __m128i *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbx
  const __m128i *v42; // r14
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r15
  __m128i v51; // xmm9
  __m128i v52; // xmm6
  __m128i v53; // xmm7
  __int8 v54; // cl
  char i; // r12
  __int64 v56; // r14
  __int64 v57; // rax
  unsigned __int64 v58; // r13
  const __m128i *v59; // r14
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdi
  unsigned __int64 v64; // r15
  __int64 v65; // r9
  char v66; // al
  const __m128i *v67; // rbx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __m128i v73; // xmm0
  __m128i v74; // xmm10
  __int64 k; // r9
  unsigned __int64 v76; // rax
  __m128i v77; // xmm11
  __int64 v79; // rbx
  int v80; // eax
  char v81; // bl
  int v82; // eax
  bool v83; // zf
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __m128i v89; // xmm0
  __m128i v90; // xmm10
  __int64 j; // r9
  unsigned __int64 v92; // rax
  __m128i v93; // xmm11
  __int64 v95; // rbx
  int v96; // eax
  int v97; // eax
  __int64 v99; // rdi
  __int64 v100; // rbx
  __int64 v101; // r14
  const __m128i *v102; // r12
  __m128i v104; // xmm0
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdi
  __m128i v113; // xmm8
  __m128i v114; // xmm9
  __m128i v115; // xmm10
  __m128i v116; // xmm11
  __m128i v117; // xmm12
  __m128i v118; // xmm13
  __m128i v119; // xmm14
  __m128i v120; // xmm15
  char v122; // di
  __int64 v123; // r13
  const __m128i *v124; // r12
  __int64 v125; // rbx
  const __m128i *v126; // rbx
  __int64 v127; // r13
  __int64 v128; // rax
  unsigned __int64 v129; // r14
  const __m128i *v130; // r13
  __int64 v131; // r12
  unsigned __int64 v132; // rdx
  unsigned __int64 v133; // rbx
  const __m128i *v134; // rbx
  const __m128i *v135; // rbx
  __int64 v136; // rdi
  const __m128i *v137; // rdi
  const __m128i *v138; // rbx
  __int64 v139; // rdi
  const __m128i *v140; // rdi
  int v141; // eax
  const __m128i *v142; // rbx
  const __m128i *v143; // rbx
  __int64 v144; // rdi
  const __m128i *v145; // rdi
  __int64 v146; // rdi
  __int8 *v147; // rdx
  __int64 v148; // rdi
  __int64 v149; // rdi
  __int64 v150; // rax
  unsigned __int8 *v151; // rdx
  const __m128i *v152; // rax
  unsigned __int64 v153; // rdx
  unsigned __int64 v154; // rdi
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rcx
  char v160; // dl
  unsigned int v161; // eax
  int v162; // ecx
  int v163; // r8d
  int v164; // eax
  __int64 v165; // rdi
  __int64 v166; // rax
  unsigned __int8 *v167; // rdx
  unsigned __int8 *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rdi
  __int8 *v171; // rdx
  __int64 v172; // rdi
  __int64 v173; // rdi
  __int64 v174; // rax
  unsigned __int8 *v175; // rdx
  const __m128i *v176; // rax
  unsigned __int64 v177; // rdx
  unsigned __int64 v178; // rdi
  unsigned int v179; // ecx
  char v180; // al
  unsigned __int64 v181; // rdi
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rdi
  __int64 v187; // rax
  __int64 v188; // rcx
  const __m128i *v189; // r8
  unsigned __int64 v190; // rax
  __int64 v191; // rdi
  __int64 v192; // rax
  unsigned __int8 *v193; // rdx
  unsigned __int8 *v194; // rax
  __int64 v195; // rdx
  unsigned __int8 v196; // al
  const __m128i *v197; // rbx
  __int64 v198; // rdi
  const __m128i *v199; // rdi
  __int64 v200; // rcx
  __int64 v201; // rdx
  __int64 v202; // r8
  unsigned __int64 v203; // rcx
  __m128i v204; // xmm0
  __m128i v205; // xmm1
  __m128i v206; // xmm2
  __m128i v207; // xmm3
  unsigned __int64 v208; // rcx
  __m128i v209; // xmm0
  __m128i v210; // xmm1
  char v211; // di
  const __m128i *v212; // rbx
  __int64 v213; // r14
  __int64 v214; // rdi
  __int64 v215; // r15
  __int64 v216; // r12
  __int64 v217; // r13
  const __m128i *v218; // rdi
  __m128i v220; // xmm0
  __int64 v221; // rax
  __int64 v222; // rdx
  unsigned __int64 v223; // rax
  __int64 v224; // r15
  __int64 v225; // r15
  __int64 v226; // rcx
  __int64 v227; // rdx
  unsigned __int64 v228; // rdx
  __int64 v229; // rdi
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // rsi
  _QWORD *v233; // rbx
  __int64 v234; // rdx
  __int64 v235; // rdi
  __int64 v236; // rbx
  const __m128i *v237; // r14
  __m128i v239; // xmm0
  __int64 v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rsi
  __m128i v243; // [rsp+28h] [rbp-58h] BYREF
  __int64 v244; // [rsp+38h] [rbp-48h]
  __int64 v245; // [rsp+40h] [rbp-40h]
  __int64 v246; // [rsp+48h] [rbp-38h]
  __int64 v247; // [rsp+50h] [rbp-30h]
  __int64 v248; // [rsp+58h] [rbp-28h] BYREF
  __int64 v249; // [rsp+60h] [rbp-20h]
  __int64 v250; // [rsp+68h] [rbp-18h]
  __m128i v251; // [rsp+70h] [rbp-10h] BYREF
  __m128i v252; // [rsp+80h] [rbp+0h]
  __int64 v253; // [rsp+90h] [rbp+10h]
  __int64 v254; // [rsp+98h] [rbp+18h]
  _QWORD *v255; // [rsp+A0h] [rbp+20h]
  __int64 v256; // [rsp+A8h] [rbp+28h]
  unsigned __int128 v257; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v258; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v259; // [rsp+C8h] [rbp+48h]
  _QWORD v260[3]; // [rsp+D0h] [rbp+50h] BYREF
  char v261; // [rsp+E8h] [rbp+68h]
  __int16 v262; // [rsp+F0h] [rbp+70h]
  __int128 v263; // [rsp+100h] [rbp+80h] BYREF
  unsigned __int64 v264; // [rsp+110h] [rbp+90h]
  __int64 v265; // [rsp+118h] [rbp+98h]
  __int64 v266; // [rsp+130h] [rbp+B0h]
  __int64 v267; // [rsp+138h] [rbp+B8h]
  __int64 v268; // [rsp+140h] [rbp+C0h]
  __int64 v269; // [rsp+148h] [rbp+C8h]
  __int64 v270; // [rsp+150h] [rbp+D0h]
  __int64 v271; // [rsp+158h] [rbp+D8h]
  __int64 v272; // [rsp+160h] [rbp+E0h]
  const __m128i *v273; // [rsp+168h] [rbp+E8h]
  char v274; // [rsp+177h] [rbp+F7h] BYREF
  __int64 v275; // [rsp+178h] [rbp+F8h]
  __m128i v276; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v277[24]; // [rsp+190h] [rbp+110h] BYREF
  __m128i v278; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v279; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v280; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v281; // [rsp+1D8h] [rbp+158h]
  __int64 v282; // [rsp+1E0h] [rbp+160h] BYREF
  const __m128i *v283; // [rsp+1E8h] [rbp+168h]
  __int64 v284; // [rsp+1F0h] [rbp+170h]
  const __m128i *v285; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v286; // [rsp+200h] [rbp+180h]
  __int64 v287; // [rsp+208h] [rbp+188h]
  const __m128i *v288; // [rsp+210h] [rbp+190h]
  __int64 v289; // [rsp+218h] [rbp+198h]

  v289 = -2;
  sub_14169D1D0(&v276, a2[9], a2[10]);
  v9 = v276.m128i_i64[1];
  result = v276.m128i_i64[0];
  if ( v276.m128i_i64[0] == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v9;
    return result;
  }
  v255 = a2;
  v272 = v276.m128i_i64[1];
  v256 = v276.m128i_i64[0];
  v10 = *(_QWORD *)v277;
  v11 = sub_14167F170(v276.m128i_i64[1]);
  v16 = v11;
  if ( *(_BYTE *)(v11 + 16) == 1 )
  {
    v17 = *(_QWORD *)v11;
    v18 = *(_QWORD *)(v16 + 8);
  }
  else
  {
    v17 = sub_141696260(v13, v12, v14, v15);
    *(_QWORD *)v16 = v17;
    *(_QWORD *)(v16 + 8) = v18;
    *(_BYTE *)(v16 + 16) = 1;
  }
  *(_QWORD *)v16 = v17 + 1;
  *(_OWORD *)v277 = *(&off_141A56DB0 + 1);
  v276 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
  *(_QWORD *)&v277[16] = v17;
  v278.m128i_i64[0] = v18;
  if ( a4 )
  {
    LOBYTE(v15) = 1;
    sub_141930360(&v276, a4, &v277[16], v15);
    v123 = 0;
    do
    {
      sub_1416AC440(&v257, a3 + (v123 << 8));
      sub_1403AAB80(&v276, &v257);
      ++v123;
    }
    while ( v123 != a4 );
  }
  v19 = _mm_load_si128(&v276);
  si128 = _mm_load_si128((const __m128i *)v277);
  v253 = *(_QWORD *)&v277[16];
  v254 = v278.m128i_i64[0];
  v252 = si128;
  v251 = v19;
  v21 = v272;
  sub_140F08C70((__int64)&v248, v272, v10, v251.m128i_i64);
  v22 = sub_140F0EA40(v21, v10);
  v23 = v255;
  v24 = v22;
  sub_140F0FC90(&v276, v272, v10);
  v26 = v276.m128i_i64[0];
  if ( v276.m128i_i64[0] == -1 )
  {
    if ( ((v250 == 0) & (unsigned __int8)~v24) != 0 )
    {
      nullsub_1(v25);
      v33 = (__m128i *)sub_140001650(18, 1);
      if ( !v33 )
        sub_141938D2B(1, 18);
      *v33 = _mm_loadu_si128(&xmmword_141A5EC55);
      v33[1].m128i_i16[0] = -26219;
      *(_QWORD *)(a1 + 8) = 18;
      *(_QWORD *)(a1 + 16) = v33;
      *(_QWORD *)(a1 + 24) = 18;
      *(_QWORD *)a1 = -1;
      goto LABEL_19;
    }
  }
  else if ( v276.m128i_i64[0] )
  {
    sub_140001660(v276.m128i_i64[1], v276.m128i_i64[0], 1);
  }
  sub_140F0BC00((__int64)&v276, v23);
  v27 = v276;
  v28 = *(_QWORD *)v277;
  if ( v276.m128i_i64[0] != -1 )
  {
    v29 = _mm_loadu_si128(&v278);
    v30 = _mm_loadu_si128(&v279);
    v31 = _mm_loadu_si128(&v280);
    v257 = *(_OWORD *)&v277[8];
    *(_QWORD *)(a1 + 88) = v281;
    *(__m128i *)(a1 + 72) = v31;
    *(__m128i *)(a1 + 56) = v30;
    *(__m128i *)(a1 + 40) = v29;
    *(_QWORD *)(a1 + 8) = v27.m128i_i64[1];
    *(_QWORD *)(a1 + 16) = v28;
    *(__m128i *)(a1 + 24) = _mm_load_si128((const __m128i *)&v257);
    *(_QWORD *)a1 = v27.m128i_i64[0];
LABEL_19:
    v34 = v272;
    goto LABEL_20;
  }
  if ( (unsigned __int64)(v276.m128i_i64[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(*(_QWORD *)v277, v276.m128i_i64[1], 1);
  if ( v10 < 0 )
  {
    v32 = 0;
    goto LABEL_16;
  }
  v47 = v272;
  if ( v10 )
  {
    nullsub_1(v28);
    v32 = 1;
    v48 = sub_140001650(v10, 1);
    if ( !v48 )
LABEL_16:
      sub_141938D2B(v32, v10);
    v49 = v48;
  }
  else
  {
    v49 = 1;
  }
  v245 = v26;
  v282 = v10;
  v283 = (const __m128i *)v49;
  v284 = 0;
  LOBYTE(v285) = 2;
  v247 = v10;
  sub_140F0B920(&v257, v47, v10, v251.m128i_i64);
  v276.m128i_i64[0] = 0;
  v276.m128i_i64[1] = v10;
  *(_QWORD *)v277 = v47;
  *(_QWORD *)&v277[8] = v10;
  *(_QWORD *)&v277[16] = 0;
  v278.m128i_i64[0] = v10;
  v278.m128i_i64[1] = 0xA0000000ALL;
  v279.m128i_i8[0] = 1;
  v279.m128i_i16[4] = 0;
  v50 = 0;
  v51 = _mm_load_si128((const __m128i *)&xmmword_1419EC580);
  v52 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v53 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  v54 = 0;
  for ( i = 0; ; i = v66 )
  {
    v275 = v49;
    if ( (v54 & 1) != 0 )
      break;
    v56 = *(_QWORD *)v277;
    sub_140F9C6A0(&v263, v277);
    if ( (_DWORD)v263 == 1 )
    {
      v57 = v276.m128i_i64[0];
      v276.m128i_i64[0] = v264;
      v58 = v264 - v57;
      v59 = (const __m128i *)(v57 + v56);
      if ( v264 == v57 )
        goto LABEL_55;
LABEL_49:
      if ( v59->m128i_i8[v58 - 1] == 10 )
      {
        if ( v58 == 1 )
        {
          v58 = 0;
        }
        else if ( v59->m128i_i8[v58 - 2] == 13 )
        {
          v58 -= 2LL;
        }
        else
        {
          --v58;
        }
      }
      goto LABEL_55;
    }
    if ( v279.m128i_i8[9] )
      break;
    v279.m128i_i8[9] = 1;
    v58 = v276.m128i_i64[1] - v276.m128i_i64[0];
    if ( (v279.m128i_i8[8] | (v276.m128i_i64[1] != v276.m128i_i64[0])) != 1 )
      break;
    v59 = (const __m128i *)(*(_QWORD *)v277 + v276.m128i_i64[0]);
    if ( v58 )
      goto LABEL_49;
LABEL_55:
    v60 = sub_140E91160(v59, v58);
    v62 = v61;
    if ( (unsigned __int8)sub_1402B5F80(&v285, v59, v58) )
    {
      switch ( v62 )
      {
        case 0LL:
          goto LABEL_71;
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v60), v53),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v60 + 14)), v52))) == 0xFFFF )
            goto LABEL_58;
          goto LABEL_64;
        case 36LL:
          if ( !(unsigned int)sub_1418F4B70(v60, aAimamiRelayMan_4) )
            goto LABEL_58;
          goto LABEL_64;
        case 39LL:
          if ( !(unsigned int)sub_1418F4B70(v60, aAimamiRelayCod_0) )
            goto LABEL_58;
          goto LABEL_64;
        case 55LL:
          if ( !(unsigned int)sub_1418F4B70(v60, aAimamiRelayMan_1) )
            goto LABEL_58;
          goto LABEL_64;
        case 60LL:
          if ( (unsigned int)sub_1418F4B70(v60, aAimamiRelayMan_2) )
            goto LABEL_64;
          goto LABEL_58;
        case 64LL:
          if ( (unsigned int)sub_1418F4B70(v60, aAimamiRelayCod) )
            goto LABEL_64;
LABEL_58:
          v63 = v282;
          if ( v58 > v282 - v50 )
          {
            sub_14190D590((unsigned int)&v282, v50, v58, 1, 1);
            v275 = (__int64)v283;
            v50 = v284;
          }
          else if ( !v58 )
          {
            goto LABEL_61;
          }
          sub_1418F44E0((__m128i *)(v50 + v275), v59, v58);
          v63 = v282;
LABEL_61:
          v64 = v58 + v50;
          v284 = v64;
          if ( v63 == v64 )
            goto LABEL_76;
          goto LABEL_77;
        default:
LABEL_64:
          if ( *(_BYTE *)v60 != 91 || *(_BYTE *)(v60 + v62 - 1) != 93 )
            goto LABEL_71;
          v65 = v62 - 1;
          if ( v62 == 1 || *(char *)(v60 + 1) <= -65 )
            sub_141938F40(v60, v62, 1, v65, (__int64)&off_1419E98C8);
          if ( (unsigned __int64)(v62 - 2) >= 0x10 )
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v60 + 1)), v51)) == 0xFFFF )
            {
              sub_140F04AB0(&v263, v60 + 17, v62 - 18, v65);
              v67 = *((const __m128i **)&v263 + 1);
              v84 = v264;
              if ( sub_140F06440(*((__int64 *)&v263 + 1), v264, v251.m128i_i64) )
                goto LABEL_99;
              v288 = v67;
              if ( !v259 )
                goto LABEL_110;
              v85 = sub_140D2AC70(v260, &v263);
              _RCX = v85 >> 57;
              v88 = *((_QWORD *)&v257 + 1);
              v87 = v257;
              v89 = _mm_cvtsi32_si128(v85 >> 57);
              v90 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v89, v89), 0), 68);
              for ( j = 0; ; j += 16 )
              {
                v92 = v88 & v85;
                v93 = _mm_loadu_si128((const __m128i *)(v87 + v92));
                _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v93, v90));
                if ( _R12D )
                  break;
LABEL_108:
                _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v93, (__m128i)-1LL));
                if ( (_DWORD)_RCX )
                  goto LABEL_110;
                v85 = j + v92 + 16;
              }
              v270 = v92;
              v271 = v88;
              v268 = j;
              while ( 1 )
              {
                __asm { tzcnt   ecx, r12d }
                _RCX = -(__int64)(v88 & (v92 + _RCX));
                if ( v84 == *(_QWORD *)(v87 + 24 * _RCX - 8) )
                {
                  v95 = v87;
                  v96 = sub_1418F4B70(v288, *(_QWORD *)(v87 + 24 * _RCX - 16));
                  v87 = v95;
                  v81 = 1;
                  if ( !v96 )
                    goto LABEL_111;
                }
                v97 = _R12D - 1;
                LOWORD(v97) = _R12D & (_R12D - 1);
                v83 = (_WORD)v97 == 0;
                _R12D = v97;
                v92 = v270;
                v88 = v271;
                j = v268;
                if ( v83 )
                  goto LABEL_108;
              }
            }
          }
          else if ( (unsigned __int64)(v62 - 2) < 9 )
          {
            break;
          }
          if ( *(_QWORD *)(v60 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v60 + 9) ^ 0x2ELL )
            break;
          sub_140F04AB0(&v263, v60 + 10, v62 - 11, v65);
          v67 = *((const __m128i **)&v263 + 1);
          v68 = v264;
          if ( sub_140F06440(*((__int64 *)&v263 + 1), v264, v251.m128i_i64) )
          {
LABEL_99:
            if ( (_QWORD)v263 )
              sub_140001660(v67, v263, 1);
            break;
          }
          v288 = v67;
          if ( !v259 )
          {
LABEL_110:
            v81 = 0;
            goto LABEL_111;
          }
          v69 = sub_140D2AC70(v260, &v263);
          _RCX = v69 >> 57;
          v72 = *((_QWORD *)&v257 + 1);
          v71 = v257;
          v73 = _mm_cvtsi32_si128(v69 >> 57);
          v74 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v73, v73), 0), 68);
          for ( k = 0; ; k += 16 )
          {
            v76 = v72 & v69;
            v77 = _mm_loadu_si128((const __m128i *)(v71 + v76));
            _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v77, v74));
            if ( _R12D )
              break;
LABEL_96:
            _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v77, (__m128i)-1LL));
            if ( (_DWORD)_RCX )
              goto LABEL_110;
            v69 = k + v76 + 16;
          }
          v270 = v76;
          v271 = v72;
          v268 = k;
          while ( 1 )
          {
            __asm { tzcnt   ecx, r12d }
            _RCX = -(__int64)(v72 & (v76 + _RCX));
            if ( v68 == *(_QWORD *)(v71 + 24 * _RCX - 8) )
            {
              v79 = v71;
              v80 = sub_1418F4B70(v288, *(_QWORD *)(v71 + 24 * _RCX - 16));
              v71 = v79;
              v81 = 1;
              if ( !v80 )
                break;
            }
            v82 = _R12D - 1;
            LOWORD(v82) = _R12D & (_R12D - 1);
            v83 = (_WORD)v82 == 0;
            _R12D = v82;
            v76 = v270;
            v72 = v271;
            k = v268;
            if ( v83 )
              goto LABEL_96;
          }
LABEL_111:
          if ( (_QWORD)v263 )
            sub_140001660(v288, v263, 1);
          v66 = 1;
          if ( v81 )
            goto LABEL_40;
          break;
      }
    }
    else
    {
LABEL_71:
      v66 = 1;
      if ( (i & 1) != 0 )
      {
LABEL_40:
        v49 = v275;
        goto LABEL_41;
      }
    }
    v63 = v282;
    if ( v58 > v282 - v50 )
    {
      sub_14190D590((unsigned int)&v282, v50, v58, 1, 1);
      v275 = (__int64)v283;
      v50 = v284;
LABEL_74:
      sub_1418F44E0((__m128i *)(v50 + v275), v59, v58);
      v63 = v282;
      goto LABEL_75;
    }
    if ( v58 )
      goto LABEL_74;
LABEL_75:
    v64 = v58 + v50;
    v284 = v64;
    if ( v63 == v64 )
    {
LABEL_76:
      sub_14190D590((unsigned int)&v282, v63, 1, 1, 1);
      v64 = v63;
    }
LABEL_77:
    v49 = (__int64)v283;
    v283->m128i_i8[v64] = 10;
    v50 = v64 + 1;
    v284 = v50;
    v66 = 0;
LABEL_41:
    v54 = v279.m128i_i8[9];
  }
  HIDWORD(_RAX) = HIDWORD(v282);
  v270 = v282;
  v99 = *((_QWORD *)&v257 + 1);
  if ( *((_QWORD *)&v257 + 1) )
  {
    v100 = v259;
    if ( v259 )
    {
      v101 = v257;
      v102 = (const __m128i *)(v257 + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v257));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v104 = _mm_load_si128(v102);
            v101 -= 384;
            ++v102;
            _R13D = _mm_movemask_epi8(v104) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v105 = -3 * _RAX;
        v106 = *(_QWORD *)(v101 + 8 * v105 - 24);
        if ( v106 )
          sub_140001660(*(_QWORD *)(v101 + 8 * v105 - 16), v106, 1);
        --v100;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v100 );
    }
    v107 = (24 * v99 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v108 = v107 + v99 + 17;
    if ( v108 )
      sub_140001660(v257 - v107, v108, 16);
  }
  if ( v50 < 0 )
  {
    v109 = 0;
    goto LABEL_129;
  }
  v110 = v255[97];
  v271 = v110;
  v268 = v255[98];
  if ( v50 )
  {
    nullsub_1(v110);
    v109 = 1;
    v111 = sub_140001650(v50, 1);
    if ( !v111 )
    {
LABEL_129:
      v267 = v275;
      v266 = v270;
      sub_141938D2B(v109, v50);
    }
  }
  else
  {
    v111 = 1;
  }
  v285 = (const __m128i *)v50;
  v286 = v111;
  v287 = 0;
  v274 = 2;
  v246 = v50;
  v112 = v275;
  sub_140F0B920(&v263, v275, v50, v251.m128i_i64);
  *(_QWORD *)&v257 = 0;
  *((_QWORD *)&v257 + 1) = v50;
  v258 = v112;
  v259 = v50;
  v260[0] = 0;
  v260[1] = v50;
  v260[2] = 0xA0000000ALL;
  v261 = 1;
  v262 = 0;
  v113 = _mm_load_si128((const __m128i *)&xmmword_141A555B0);
  v114 = _mm_cvtsi32_si128(0x6E6Fu);
  v115 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
  v116 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
  v117 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
  v118 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v119 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v120 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  _RAX = 0;
  LODWORD(v288) = 0;
  v122 = 0;
  while ( 2 )
  {
    if ( (_RAX & 1) == 0 )
    {
      v127 = v258;
      HIDWORD(_RAX) = (unsigned __int64)sub_140F9C6A0(&v276, &v258) >> 32;
      if ( v276.m128i_i32[0] == 1 )
      {
        v128 = v257;
        *(_QWORD *)&v257 = *(_QWORD *)v277;
        v129 = *(_QWORD *)v277 - v128;
        v130 = (const __m128i *)(v128 + v127);
        if ( *(_QWORD *)v277 == v128 )
          goto LABEL_158;
LABEL_152:
        if ( v130->m128i_i8[v129 - 1] == 10 )
        {
          if ( v129 == 1 )
          {
            v129 = 0;
          }
          else if ( v130->m128i_i8[v129 - 2] == 13 )
          {
            v129 -= 2LL;
          }
          else
          {
            --v129;
          }
        }
      }
      else
      {
        if ( HIBYTE(v262) )
          break;
        HIBYTE(v262) = 1;
        v129 = *((_QWORD *)&v257 + 1) - v257;
        if ( ((unsigned __int8)v262 | (*((_QWORD *)&v257 + 1) != (_QWORD)v257)) != 1 )
          break;
        v130 = (const __m128i *)(v258 + v257);
        if ( v129 )
          goto LABEL_152;
      }
LABEL_158:
      v131 = sub_140E91160(v130, v129);
      v133 = v132;
      if ( (unsigned __int8)sub_1402B5F80(&v274, v130, v129) )
      {
        switch ( v133 )
        {
          case 0x1EuLL:
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v131), v53),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v131 + 14)), v52))) != 0xFFFF )
              goto LABEL_182;
            goto LABEL_175;
          case 0x24uLL:
            if ( !(unsigned int)sub_1418F4B70(v131, aAimamiRelayMan_4) )
              goto LABEL_175;
            goto LABEL_182;
          case 0x27uLL:
            if ( (unsigned int)sub_1418F4B70(v131, aAimamiRelayCod_0) )
              goto LABEL_182;
LABEL_175:
            v135 = v285;
            v136 = v287;
            if ( v129 > (unsigned __int64)v285 - v287 )
            {
              sub_14190D590((unsigned int)&v285, v287, v129, 1, 1);
              v135 = v285;
              v136 = v287;
            }
            else if ( !v129 )
            {
              goto LABEL_178;
            }
            sub_1418F44E0((__m128i *)(v136 + v286), v130, v129);
LABEL_178:
            v137 = (const __m128i *)(v129 + v136);
            v287 = (__int64)v137;
            if ( v135 == v137 )
              sub_14190D590((unsigned int)&v285, (_DWORD)v135, 1, 1, 1);
            v137->m128i_i8[v286] = 10;
            v287 = (__int64)v137->m128i_i64 + 1;
            v122 = 0;
            _RAX = HIBYTE(v262);
            continue;
          case 0x37uLL:
            if ( (unsigned int)sub_1418F4B70(v131, aAimamiRelayMan_1) )
              goto LABEL_182;
            goto LABEL_205;
          case 0x3CuLL:
            if ( !(unsigned int)sub_1418F4B70(v131, aAimamiRelayMan_2) )
              goto LABEL_205;
            goto LABEL_182;
          case 0x40uLL:
            if ( (unsigned int)sub_1418F4B70(v131, aAimamiRelayCod) )
              goto LABEL_182;
LABEL_205:
            v143 = v285;
            v144 = v287;
            if ( v129 > (unsigned __int64)v285 - v287 )
            {
              sub_14190D590((unsigned int)&v285, v287, v129, 1, 1);
              v143 = v285;
              v144 = v287;
            }
            else if ( !v129 )
            {
              goto LABEL_208;
            }
            sub_1418F44E0((__m128i *)(v144 + v286), v130, v129);
LABEL_208:
            v145 = (const __m128i *)(v129 + v144);
            v287 = (__int64)v145;
            if ( v143 == v145 )
              sub_14190D590((unsigned int)&v285, (_DWORD)v143, 1, 1, 1);
            v145->m128i_i8[v286] = 10;
            v287 = (__int64)v145->m128i_i64 + 1;
            goto LABEL_144;
          default:
LABEL_182:
            if ( v122 == 1 )
            {
              v124 = v285;
              v125 = v287;
              goto LABEL_184;
            }
            if ( v133 && *(_BYTE *)v131 == 91 )
            {
              v138 = v285;
              v139 = v287;
              if ( v129 > (unsigned __int64)v285 - v287 )
              {
                sub_14190D590((unsigned int)&v285, v287, v129, 1, 1);
                v138 = v285;
                v139 = v287;
LABEL_191:
                sub_1418F44E0((__m128i *)(v139 + v286), v130, v129);
              }
              else if ( v129 )
              {
                goto LABEL_191;
              }
              v140 = (const __m128i *)(v129 + v139);
              v287 = (__int64)v140;
              if ( v138 == v140 )
                sub_14190D590((unsigned int)&v285, (_DWORD)v138, 1, 1, 1);
              v141 = v286;
              v140->m128i_i8[v286] = 10;
              v287 = (__int64)v140->m128i_i64 + 1;
              goto LABEL_203;
            }
            if ( (_BYTE)v288 == 1 )
            {
              v124 = v285;
              v125 = v287;
              goto LABEL_197;
            }
            if ( !(unsigned __int8)sub_140F08B60(v131, v133) )
              goto LABEL_233;
            *(_QWORD *)v277 = v133;
            *(_QWORD *)&v277[8] = v131;
            *(_QWORD *)&v277[16] = v133;
            v278.m128i_i64[0] = 0;
            v278.m128i_i64[1] = v133;
            v279.m128i_i64[0] = 0x3D0000003DLL;
            v279.m128i_i8[8] = 1;
            v280.m128i_i16[0] = 1;
            v276 = (__m128i)1uLL;
            sub_140F9C6A0(&v282, &v277[8]);
            if ( (_DWORD)v282 == 1 )
            {
              v146 = v284;
              v276.m128i_i64[1] = v284;
            }
            else
            {
              if ( v280.m128i_i8[1] )
                goto LABEL_233;
              v280.m128i_i8[1] = 1;
              v146 = v276.m128i_i64[1];
              if ( !v280.m128i_i8[0] && *(_QWORD *)v277 == v276.m128i_i64[1] )
                goto LABEL_233;
            }
            if ( !v276.m128i_i64[0] )
              goto LABEL_233;
            if ( v276.m128i_i64[0] == 1 )
            {
              v276.m128i_i64[0] = 0;
              if ( v280.m128i_i8[1] )
                goto LABEL_233;
              v280.m128i_i8[1] = 1;
            }
            else
            {
              --v276.m128i_i64[0];
              if ( v280.m128i_i8[1] )
                goto LABEL_233;
              v149 = *(_QWORD *)&v277[8];
              sub_140F9C6A0(&v282, &v277[8]);
              if ( (_DWORD)v282 == 1 )
              {
                v147 = &v283->m128i_i8[-v276.m128i_i64[1]];
                v148 = v276.m128i_i64[1] + v149;
                v276.m128i_i64[1] = v284;
                goto LABEL_227;
              }
              if ( v280.m128i_i8[1] )
                goto LABEL_233;
              v280.m128i_i8[1] = 1;
              v146 = v276.m128i_i64[1];
            }
            v147 = (__int8 *)(*(_QWORD *)v277 - v146);
            if ( (v280.m128i_i8[0] | (*(_QWORD *)v277 != v146)) != 1 )
              goto LABEL_233;
            v148 = *(_QWORD *)&v277[8] + v146;
LABEL_227:
            v150 = sub_140E91160(v148, v147);
            v152 = (const __m128i *)sub_140E913E0(v150, v151, 34);
            if ( v153 )
            {
              v154 = v153;
              v288 = v152;
              if ( !sub_140F06440((__int64)v152, v153, v251.m128i_i64)
                && ((unsigned __int8)sub_140373F00(&v263, v288) || (unsigned __int8)sub_140F3F640(v288, v154)) )
              {
                goto LABEL_340;
              }
            }
LABEL_233:
            if ( v133 < 0xE )
              goto LABEL_234;
            if ( *(_QWORD *)v131 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v131 + 6) ^ 0x72656469766F7270LL )
              goto LABEL_236;
            if ( v133 == 14 )
              goto LABEL_267;
            v160 = *(_BYTE *)(v131 + 14);
            v161 = (unsigned __int8)v160;
            if ( v160 < 0 )
            {
              v162 = v160 & 0x1F;
              v163 = *(_BYTE *)(v131 + 15) & 0x3F;
              if ( (unsigned __int8)v160 <= 0xDFu )
              {
                v161 = v163 | (v162 << 6);
              }
              else
              {
                v164 = (v163 << 6) | *(_BYTE *)(v131 + 16) & 0x3F;
                if ( (unsigned __int8)v160 < 0xF0u )
                  v161 = (v162 << 12) | v164;
                else
                  v161 = ((v160 & 7) << 18) | (v164 << 6) | *(_BYTE *)(v131 + 17) & 0x3F;
              }
            }
            if ( v161 == 32 || v161 == 61 || v161 - 9 < 5 )
              goto LABEL_267;
            if ( v161 < 0x85 )
              goto LABEL_236;
            v179 = v161 >> 8;
            if ( v161 >> 8 > 0x1F )
            {
              if ( v179 == 32 )
              {
                v180 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v161) >> 1;
              }
              else
              {
                if ( v179 != 48 )
                  goto LABEL_236;
                v180 = v161 == 12288;
              }
            }
            else if ( v179 )
            {
              if ( v179 != 22 )
                goto LABEL_236;
              v180 = v161 == 5760;
            }
            else
            {
              v180 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v161);
            }
            if ( (v180 & 1) == 0 )
              goto LABEL_236;
LABEL_267:
            *(_QWORD *)v277 = v133;
            *(_QWORD *)&v277[8] = v131;
            *(_QWORD *)&v277[16] = v133;
            v278.m128i_i64[0] = 0;
            v278.m128i_i64[1] = v133;
            v279.m128i_i64[0] = 0x3D0000003DLL;
            v279.m128i_i8[8] = 1;
            v280.m128i_i16[0] = 1;
            v276 = (__m128i)1uLL;
            sub_140F9C6A0(&v282, &v277[8]);
            if ( (_DWORD)v282 == 1 )
            {
              v170 = v284;
              v276.m128i_i64[1] = v284;
            }
            else
            {
              if ( v280.m128i_i8[1] )
                goto LABEL_236;
              v280.m128i_i8[1] = 1;
              v170 = v276.m128i_i64[1];
              if ( !v280.m128i_i8[0] && *(_QWORD *)v277 == v276.m128i_i64[1] )
                goto LABEL_236;
            }
            if ( !v276.m128i_i64[0] )
              goto LABEL_236;
            if ( v276.m128i_i64[0] == 1 )
            {
              v276.m128i_i64[0] = 0;
              if ( v280.m128i_i8[1] )
                goto LABEL_236;
              v280.m128i_i8[1] = 1;
            }
            else
            {
              --v276.m128i_i64[0];
              if ( v280.m128i_i8[1] )
                goto LABEL_236;
              v173 = *(_QWORD *)&v277[8];
              sub_140F9C6A0(&v282, &v277[8]);
              if ( (_DWORD)v282 == 1 )
              {
                v171 = &v283->m128i_i8[-v276.m128i_i64[1]];
                v172 = v276.m128i_i64[1] + v173;
                v276.m128i_i64[1] = v284;
                goto LABEL_282;
              }
              if ( v280.m128i_i8[1] )
                goto LABEL_236;
              v280.m128i_i8[1] = 1;
              v170 = v276.m128i_i64[1];
            }
            v171 = (__int8 *)(*(_QWORD *)v277 - v170);
            if ( (v280.m128i_i8[0] | (*(_QWORD *)v277 != v170)) != 1 )
              goto LABEL_236;
            v172 = *(_QWORD *)&v277[8] + v170;
LABEL_282:
            v174 = sub_140E91160(v172, v171);
            v176 = (const __m128i *)sub_140E913E0(v174, v175, 34);
            if ( v177 )
            {
              v178 = v177;
              v288 = v176;
              if ( !sub_140F06440((__int64)v176, v177, v251.m128i_i64)
                && ((unsigned __int8)sub_140373F00(&v263, v288) || (unsigned __int8)sub_140F3F640(v288, v178)) )
              {
                goto LABEL_340;
              }
            }
LABEL_236:
            if ( v133 < 0x12 )
            {
              if ( v133 == 14 )
              {
LABEL_234:
                LODWORD(v288) = 0;
                goto LABEL_331;
              }
LABEL_301:
              v182 = *(_QWORD *)v131 ^ 0x625F69616E65706FLL;
              v183 = *(_QWORD *)(v131 + 7) ^ 0x6C72755F65736162LL;
              LODWORD(v288) = 1702060289;
              if ( v182 | v183 )
                goto LABEL_331;
              *(_QWORD *)v277 = v133;
              *(_QWORD *)&v277[8] = v131;
              *(_QWORD *)&v277[16] = v133;
              v278.m128i_i64[0] = 0;
              v278.m128i_i64[1] = v133;
              v279.m128i_i64[0] = 0x3D0000003DLL;
              v279.m128i_i8[8] = 1;
              v280.m128i_i16[0] = 1;
              v276 = (__m128i)1uLL;
              sub_140F9C6A0(&v282, &v277[8]);
              if ( (_DWORD)v282 == 1 )
              {
                v184 = v284;
                v276.m128i_i64[1] = v284;
                goto LABEL_304;
              }
              if ( v280.m128i_i8[1]
                || (v280.m128i_i8[1] = 1, v184 = v276.m128i_i64[1], !v280.m128i_i8[0])
                && *(_QWORD *)v277 == v276.m128i_i64[1] )
              {
                v185 = 1;
                v186 = 0;
                goto LABEL_327;
              }
LABEL_304:
              v185 = 1;
              v186 = v276.m128i_i64[0];
              if ( v276.m128i_i64[0] )
              {
                if ( v276.m128i_i64[0] == 1 )
                {
                  v276.m128i_i64[0] = 0;
                  if ( !v280.m128i_i8[1] )
                  {
                    v280.m128i_i8[1] = 1;
                    v187 = *(_QWORD *)v277 - v184;
                    if ( (v280.m128i_i8[0] | (*(_QWORD *)v277 != v184)) == 1 )
                      goto LABEL_308;
                  }
                }
                else
                {
                  --v276.m128i_i64[0];
                  if ( !v280.m128i_i8[1] )
                  {
                    v191 = *(_QWORD *)&v277[8];
                    sub_140F9C6A0(&v282, &v277[8]);
                    if ( (_DWORD)v282 == 1 )
                    {
                      v187 = (__int64)v283->m128i_i64 - v276.m128i_i64[1];
                      v188 = v276.m128i_i64[1] + v191;
                      v276.m128i_i64[1] = v284;
                    }
                    else
                    {
                      if ( v280.m128i_i8[1]
                        || (v280.m128i_i8[1] = 1,
                            v184 = v276.m128i_i64[1],
                            v187 = *(_QWORD *)v277 - v276.m128i_i64[1],
                            (v280.m128i_i8[0] | (*(_QWORD *)v277 != v276.m128i_i64[1])) != 1) )
                      {
                        v186 = 0;
                        v185 = 1;
                        goto LABEL_327;
                      }
LABEL_308:
                      v188 = *(_QWORD *)&v277[8] + v184;
                    }
                    v192 = sub_140E91160(v188, v187);
                    v194 = sub_140E913E0(v192, v193, 34);
                    v186 = v195;
                    v185 = (__int64)v194;
                    goto LABEL_327;
                  }
                }
                v186 = 0;
              }
LABEL_327:
              sub_140F24640(&v282, (char *)v185, v186);
              if ( !v186 )
                goto LABEL_329;
              v273 = v283;
              if ( (unsigned __int8)sub_140F9CFB0(aCodexRouterV1_0, 16, v283, v284) )
                goto LABEL_329;
              if ( !sub_140F0EA40(v275, v50) )
              {
                sub_140F08C70((__int64)&v276, v275, v50, v251.m128i_i64);
                if ( *(_QWORD *)v277 )
                {
                  sub_1403FAE40(&v276);
                  if ( v276.m128i_i64[0] )
                  {
                    v200 = v276.m128i_i64[1];
                    v201 = 24 * v276.m128i_i64[0];
                    v202 = 8;
                    goto LABEL_350;
                  }
                }
                else
                {
                  sub_1403FAE40(&v276);
                  if ( v276.m128i_i64[0] )
                    sub_140001660(v276.m128i_i64[1], 24 * v276.m128i_i64[0], 8);
                  sub_140F0FC90(&v276, v275, v50);
                  v201 = v276.m128i_i64[0];
                  if ( v276.m128i_i64[0] == -1 )
                  {
LABEL_329:
                    if ( v282 )
                      sub_140001660(v283, v282, 1);
LABEL_331:
                    v196 = sub_140F32E80(v131, v133);
                    if ( (v196 & (unsigned __int8)v288) != 0
                      && (!(*(_QWORD *)v131 ^ 0x5F74697563726963LL | *(_QWORD *)(v131 + 7) ^ 0x72656B616572625FLL)
                       || !(*(_QWORD *)v131 ^ 0x72656469766F7270LL | *(_QWORD *)(v131 + 7) ^ 0x726574756F725F72LL)) )
                    {
                      goto LABEL_340;
                    }
                    v197 = v285;
                    v198 = v287;
                    if ( v129 > (unsigned __int64)v285 - v287 )
                    {
                      sub_14190D590((unsigned int)&v285, v287, v129, 1, 1);
                      v197 = v285;
                      v198 = v287;
LABEL_336:
                      sub_1418F44E0((__m128i *)(v198 + v286), v130, v129);
                    }
                    else if ( v129 )
                    {
                      goto LABEL_336;
                    }
                    v199 = (const __m128i *)(v129 + v198);
                    v287 = (__int64)v199;
                    if ( v197 == v199 )
                      sub_14190D590((unsigned int)&v285, (_DWORD)v197, 1, 1, 1);
                    v199->m128i_i8[v286] = 10;
                    v287 = (__int64)v199->m128i_i64 + 1;
                    goto LABEL_340;
                  }
                  if ( v276.m128i_i64[0] )
                  {
                    v200 = v276.m128i_i64[1];
                    v202 = 1;
LABEL_350:
                    sub_140001660(v200, v201, v202);
                  }
                }
              }
              if ( v282 )
                sub_140001660(v273, v282, 1);
              goto LABEL_340;
            }
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v131 + 16)), v114),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v131), v113))) != 0xFFFF )
              goto LABEL_301;
            *(_QWORD *)v277 = v133;
            *(_QWORD *)&v277[8] = v131;
            *(_QWORD *)&v277[16] = v133;
            v278.m128i_i64[0] = 0;
            v278.m128i_i64[1] = v133;
            v279.m128i_i64[0] = 0x3D0000003DLL;
            v279.m128i_i8[8] = 1;
            v280.m128i_i16[0] = 1;
            v276 = (__m128i)1uLL;
            sub_140F9C6A0(&v282, &v277[8]);
            if ( (_DWORD)v282 == 1 )
            {
              v155 = v284;
              v276.m128i_i64[1] = v284;
            }
            else if ( v280.m128i_i8[1]
                   || (v280.m128i_i8[1] = 1, v155 = v276.m128i_i64[1], !v280.m128i_i8[0])
                   && *(_QWORD *)v277 == v276.m128i_i64[1] )
            {
              v156 = 1;
              v157 = 0;
              goto LABEL_297;
            }
            v156 = 1;
            v157 = v276.m128i_i64[0];
            if ( !v276.m128i_i64[0] )
              goto LABEL_297;
            if ( v276.m128i_i64[0] == 1 )
            {
              v276.m128i_i64[0] = 0;
              if ( v280.m128i_i8[1]
                || (v280.m128i_i8[1] = 1,
                    v158 = *(_QWORD *)v277 - v155,
                    (v280.m128i_i8[0] | (*(_QWORD *)v277 != v155)) != 1) )
              {
LABEL_257:
                v157 = 0;
                goto LABEL_297;
              }
LABEL_246:
              v159 = *(_QWORD *)&v277[8] + v155;
LABEL_262:
              v166 = sub_140E91160(v159, v158);
              v168 = sub_140E913E0(v166, v167, 34);
              v157 = v169;
              v156 = (__int64)v168;
              goto LABEL_297;
            }
            --v276.m128i_i64[0];
            if ( v280.m128i_i8[1] )
              goto LABEL_257;
            v165 = *(_QWORD *)&v277[8];
            sub_140F9C6A0(&v282, &v277[8]);
            if ( (_DWORD)v282 == 1 )
            {
              v158 = (__int64)v283->m128i_i64 - v276.m128i_i64[1];
              v159 = v276.m128i_i64[1] + v165;
              v276.m128i_i64[1] = v284;
              goto LABEL_262;
            }
            if ( !v280.m128i_i8[1] )
            {
              v280.m128i_i8[1] = 1;
              v155 = v276.m128i_i64[1];
              v158 = *(_QWORD *)v277 - v276.m128i_i64[1];
              if ( (v280.m128i_i8[0] | (*(_QWORD *)v277 != v276.m128i_i64[1])) == 1 )
                goto LABEL_246;
            }
            v157 = 0;
            v156 = 1;
LABEL_297:
            sub_140F24640(&v282, (char *)v156, v157);
            if ( !v157 )
              goto LABEL_299;
            v181 = v284;
            v288 = v283;
            if ( (unsigned __int8)sub_140F03E60(v283, v284, v271, v268) )
              goto LABEL_299;
            sub_14072C410((unsigned int)&v276, v181, 0, 1, 1);
            v269 = v276.m128i_i64[1];
            if ( v276.m128i_i32[0] == 1 )
              sub_141938D2B(v269, *(_QWORD *)v277);
            v189 = *(const __m128i **)v277;
            v273 = *(const __m128i **)v277;
            if ( v181 )
            {
              sub_1418F44E0(*(__m128i **)v277, v288, v181);
              if ( v181 < 8 )
              {
                v190 = 0;
                v189 = v273;
                goto LABEL_373;
              }
              if ( v181 < 0x20 )
              {
                v190 = 0;
                v189 = v273;
LABEL_357:
                v208 = v190;
                v190 = v181 & 0xFFFFFFFFFFFFFFF8uLL;
                do
                {
                  v209 = _mm_loadl_epi64((const __m128i *)((char *)v189 + v208));
                  v210 = _mm_add_epi8(v209, v115);
                  *(__int64 *)((char *)v189->m128i_i64 + v208) = _mm_or_si128(
                                                                   _mm_andnot_si128(
                                                                     _mm_cmpeq_epi8(_mm_max_epu8(v210, v116), v210),
                                                                     v117),
                                                                   v209).m128i_u64[0];
                  v208 += 8LL;
                }
                while ( v190 != v208 );
                goto LABEL_374;
              }
              v190 = v181 & 0xFFFFFFFFFFFFFFE0uLL;
              v203 = 0;
              v189 = v273;
              do
              {
                v204 = _mm_loadu_si128(&v189[v203 / 0x10]);
                v205 = _mm_loadu_si128(&v189[v203 / 0x10 + 1]);
                v206 = _mm_add_epi8(v204, v118);
                v207 = _mm_add_epi8(v205, v118);
                v189[v203 / 0x10] = _mm_or_si128(
                                      _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v206, v119), v206), v120),
                                      v204);
                v189[v203 / 0x10 + 1] = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v207, v119), v207), v120),
                                          v205);
                v203 += 32LL;
              }
              while ( v190 != v203 );
              if ( v181 != v190 )
              {
                if ( (v181 & 0x18) != 0 )
                  goto LABEL_357;
                do
                {
LABEL_373:
                  v189->m128i_i8[v190] |= 32 * ((unsigned __int8)(v189->m128i_i8[v190] - 65) < 0x1Au);
                  ++v190;
LABEL_374:
                  ;
                }
                while ( v181 != v190 );
              }
            }
            if ( (unsigned __int8)sub_140F9CFB0(aCcSwitch, 9, v189, v181)
              || (unsigned __int8)sub_140F9CFB0(aCcSwitch_0, 9, v273, v181)
              || (unsigned __int8)sub_140F9CFB0(aCcswitch, 8, v273, v181)
              || (unsigned __int8)sub_140F9CFB0(aCodexSwitch, 12, v273, v181)
              || (unsigned __int8)sub_140F9CFB0(aCodexSwitch_0, 12, v273, v181) )
            {
              if ( v269 )
                sub_140001660(v273, v269, 1);
            }
            else
            {
              v211 = sub_140F9CFB0(aDeecodex, 8, v273, v181);
              if ( v269 )
                sub_140001660(v273, v269, 1);
              if ( !v211 )
              {
LABEL_299:
                if ( v282 )
                  sub_140001660(v283, v282, 1);
                goto LABEL_301;
              }
            }
            if ( v282 )
              sub_140001660(v288, v282, 1);
            break;
        }
        goto LABEL_340;
      }
      v124 = v285;
      v125 = v287;
      if ( v122 == 1 )
      {
LABEL_184:
        if ( v129 > (unsigned __int64)v124 - v125 )
        {
          sub_14190D590((unsigned int)&v285, v125, v129, 1, 1);
          v124 = v285;
          v125 = v287;
        }
        else if ( !v129 )
        {
LABEL_141:
          v126 = (const __m128i *)(v129 + v125);
          v287 = (__int64)v126;
          if ( v124 == v126 )
            sub_14190D590((unsigned int)&v285, (_DWORD)v124, 1, 1, 1);
          v126->m128i_i8[v286] = 10;
          v287 = (__int64)v126->m128i_i64 + 1;
LABEL_144:
          v122 = 1;
          _RAX = HIBYTE(v262);
          continue;
        }
        sub_1418F44E0((__m128i *)(v125 + v286), v130, v129);
        goto LABEL_141;
      }
      if ( ((unsigned __int8)v288 & 1) == 0 )
      {
        if ( v129 > (unsigned __int64)v285 - v287 )
        {
          sub_14190D590((unsigned int)&v285, v287, v129, 1, 1);
          v124 = v285;
          v125 = v287;
LABEL_166:
          sub_1418F44E0((__m128i *)(v125 + v286), v130, v129);
        }
        else if ( v129 )
        {
          goto LABEL_166;
        }
        v134 = (const __m128i *)(v129 + v125);
        v287 = (__int64)v134;
        if ( v124 == v134 )
          sub_14190D590((unsigned int)&v285, (_DWORD)v124, 1, 1, 1);
        v134->m128i_i8[v286] = 10;
        v287 = (__int64)v134->m128i_i64 + 1;
LABEL_340:
        LODWORD(v288) = 0;
        v122 = 0;
        _RAX = HIBYTE(v262);
        continue;
      }
LABEL_197:
      if ( v129 > (unsigned __int64)v124 - v125 )
      {
        sub_14190D590((unsigned int)&v285, v125, v129, 1, 1);
        v124 = v285;
        v125 = v287;
LABEL_199:
        sub_1418F44E0((__m128i *)(v125 + v286), v130, v129);
      }
      else if ( v129 )
      {
        goto LABEL_199;
      }
      v142 = (const __m128i *)(v129 + v125);
      v287 = (__int64)v142;
      if ( v124 == v142 )
        sub_14190D590((unsigned int)&v285, (_DWORD)v124, 1, 1, 1);
      v141 = v286;
      v142->m128i_i8[v286] = 10;
      v287 = (__int64)v142->m128i_i64 + 1;
LABEL_203:
      LOBYTE(v141) = 1;
      LODWORD(v288) = v141;
      v122 = 0;
      _RAX = HIBYTE(v262);
      continue;
    }
    break;
  }
  v212 = v285;
  v213 = v286;
  v214 = v287;
  v215 = *((_QWORD *)&v263 + 1);
  if ( *((_QWORD *)&v263 + 1) )
  {
    v271 = v287;
    v288 = v285;
    v216 = v265;
    if ( v265 )
    {
      v217 = v263;
      v218 = (const __m128i *)(v263 + 16);
      _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v263));
      do
      {
        if ( !(_WORD)_EBX )
        {
          do
          {
            v220 = _mm_load_si128(v218);
            v217 -= 384;
            ++v218;
            _EBX = _mm_movemask_epi8(v220) ^ 0xFFFF;
          }
          while ( !_EBX );
        }
        __asm { tzcnt   eax, ebx }
        v221 = -3 * _RAX;
        v222 = *(_QWORD *)(v217 + 8 * v221 - 24);
        if ( v222 )
          sub_140001660(*(_QWORD *)(v217 + 8 * v221 - 16), v222, 1);
        --v216;
        _RAX = _EBX & (unsigned int)(_EBX - 1);
        _EBX &= _EBX - 1;
      }
      while ( v216 );
    }
    v223 = (24 * v215 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v224 = v223 + v215;
    v83 = v224 == -17;
    v225 = v224 + 17;
    v212 = v288;
    v214 = v271;
    if ( !v83 )
      sub_140001660(v263 - v223, v225, 16);
  }
  if ( v270 )
    sub_140001660(v275, v270, 1);
  v226 = v255[9];
  v227 = v255[10];
  v267 = v213;
  v266 = (__int64)v212;
  if ( (sub_140222E10(v226, v227, v213, v214) & 1) != 0 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v228;
    v34 = v272;
    if ( v212 )
      sub_140001660(v213, v212, 1);
LABEL_20:
    v35 = v249;
    v36 = v250;
    if ( v250 )
    {
      v37 = (_QWORD *)(v249 + 8);
      do
      {
        v38 = *(v37 - 1);
        if ( v38 )
          sub_140001660(*v37, v38, 1);
        v37 += 3;
        --v36;
      }
      while ( v36 );
    }
    result = v248;
    if ( v248 )
      result = sub_140001660(v35, 24 * v248, 8);
    v39 = v251.m128i_i64[1];
    if ( v251.m128i_i64[1] )
    {
      v40 = v252.m128i_i64[1];
      if ( v252.m128i_i64[1] )
      {
        v41 = v251.m128i_i64[0];
        v42 = (const __m128i *)(v251.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v251.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v44 = _mm_load_si128(v42);
              v41 -= 384;
              ++v42;
              _R15D = _mm_movemask_epi8(v44) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v45 = -3 * result;
          v46 = *(_QWORD *)(v41 + 8 * v45 - 24);
          if ( v46 )
            sub_140001660(*(_QWORD *)(v41 + 8 * v45 - 16), v46, 1);
          --v40;
          result = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v40 );
      }
      goto LABEL_424;
    }
  }
  else
  {
    v267 = v213;
    v266 = (__int64)v212;
    sub_1401BD710(v228, v228);
    v229 = v250;
    *(_QWORD *)&v263 = v250;
    v230 = 1;
    if ( v245 != -1 )
      v230 = (__int64)&unk_141A5EC67;
    v231 = 24;
    if ( v245 == -1 )
      v231 = 0;
    v257 = __PAIR128__(v231, v230);
    v276.m128i_i64[0] = (__int64)&v263;
    v276.m128i_i64[1] = (__int64)sub_1416BCB10;
    *(_QWORD *)v277 = &v257;
    *(_QWORD *)&v277[8] = sub_140186EE0;
    v267 = v213;
    v266 = (__int64)v212;
    sub_1416ABFD0(&v243, &unk_141A5EC7F, &v276);
    *(_QWORD *)(a1 + 24) = v244;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v243);
    *(_QWORD *)a1 = -1;
    if ( v212 )
      sub_140001660(v213, v212, 1);
    v232 = v249;
    v34 = v272;
    if ( v229 )
    {
      v233 = (_QWORD *)(v249 + 8);
      do
      {
        v234 = *(v233 - 1);
        if ( v234 )
          sub_140001660(*v233, v234, 1);
        v233 += 3;
        --v229;
      }
      while ( v229 );
    }
    result = v248;
    if ( v248 )
      result = sub_140001660(v232, 24 * v248, 8);
    v39 = v251.m128i_i64[1];
    if ( v251.m128i_i64[1] )
    {
      v235 = v252.m128i_i64[1];
      if ( v252.m128i_i64[1] )
      {
        v236 = v251.m128i_i64[0];
        v237 = (const __m128i *)(v251.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v251.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v239 = _mm_load_si128(v237);
              v236 -= 384;
              ++v237;
              _R15D = _mm_movemask_epi8(v239) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v240 = -3 * result;
          v241 = *(_QWORD *)(v236 + 8 * v240 - 24);
          if ( v241 )
            sub_140001660(*(_QWORD *)(v236 + 8 * v240 - 16), v241, 1);
          --v235;
          result = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v235 );
      }
LABEL_424:
      result = (24 * v39 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v242 = result + v39 + 17;
      if ( v242 )
        result = sub_140001660(v251.m128i_i64[0] - result, v242, 16);
    }
  }
  if ( v256 )
    return sub_140001660(v34, v256, 1);
  return result;
}
