// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140c6ad00 | name sub_140C6AD00
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C6AD00(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  const __m128i *v4; // rsi
  char *v5; // rdx
  const __m128i *v6; // rdx
  const __m128i *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  bool v23; // di
  __int64 v24; // rax
  __int8 v25; // al
  __int64 v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // rcx
  char *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  char v34; // si
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  const __m128i *v37; // r15
  unsigned __int64 v38; // r13
  __int64 v39; // r12
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  const __m128i *v44; // rdx
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  const __m128i *v47; // r14
  __int64 (__fastcall *v48)(); // r12
  __int64 v49; // rsi
  __int64 v50; // rcx
  int v51; // eax
  bool v52; // dl
  bool v53; // cl
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __m128i v56; // xmm0
  __m128i v57; // xmm7
  unsigned __int64 v58; // rcx
  __m128i v60; // xmm8
  __int64 v62; // rax
  char v63; // al
  char *v64; // rbx
  char v65; // dl
  unsigned int v66; // eax
  int v67; // ecx
  int v68; // r8d
  int v69; // eax
  unsigned int v70; // ecx
  unsigned __int64 v71; // r9
  const __m128i *v72; // rdx
  unsigned __int64 v73; // rdi
  int v74; // eax
  unsigned __int64 v75; // rax
  char v76; // cl
  char v77; // dl
  int v78; // edx
  unsigned int v79; // ecx
  __int64 v80; // rsi
  __int64 v81; // rcx
  const __m128i **v82; // r14
  const __m128i **v83; // rdx
  const __m128i **v84; // r14
  const __m128i **v85; // r14
  __int64 v86; // rax
  __int8 *v87; // rsi
  int v88; // ecx
  char v89; // dl
  char v90; // r8
  char v91; // r9
  char *v92; // rsi
  int v93; // r8d
  int v94; // edx
  const __m128i *v95; // rdx
  __int64 v96; // rcx
  unsigned __int64 v97; // rsi
  __int64 v98; // r13
  unsigned __int64 v99; // r12
  unsigned __int64 v100; // r12
  __int64 v101; // r14
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // r12
  const __m128i *v104; // rsi
  unsigned __int64 v105; // r12
  const __m128i *v106; // r13
  unsigned __int64 v107; // r15
  unsigned __int64 v108; // r12
  const __m128i *v109; // r13
  unsigned __int64 v110; // r12
  const __m128i **v111; // r15
  const __m128i **v112; // r15
  const __m128i **v113; // rax
  const __m128i **v114; // r15
  const __m128i *v115; // rax
  char *v116; // r15
  __int64 v117; // r13
  bool v118; // cl
  __int64 v119; // rbx
  char *v120; // r14
  const __m128i *v121; // r12
  __int64 v122; // r13
  unsigned __int64 v123; // r14
  char v124; // si
  char v125; // al
  const __m128i *v126; // rbx
  const __m128i *v127; // r14
  unsigned __int64 v128; // rsi
  const __m128i **v129; // r15
  const __m128i **v130; // r15
  const __m128i **v131; // rax
  const __m128i **v132; // r15
  const __m128i *v133; // rcx
  const __m128i *v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rbx
  __int64 v137; // r14
  __int64 v138; // rax
  __int64 v139; // r14
  __int64 v140; // r14
  unsigned __int64 v141; // rax
  __int64 v142; // r14
  __int64 v143; // r14
  const __m128i *v144; // r13
  unsigned __int64 v145; // r12
  const __m128i *v146; // r12
  const __m128i *v147; // r13
  unsigned __int64 v148; // rbx
  const __m128i *v149; // r13
  unsigned __int64 v150; // rbx
  __int64 v151; // r14
  const __m128i *v152; // rbx
  const __m128i *v153; // r12
  unsigned __int64 v154; // rsi
  const __m128i *v155; // rcx
  unsigned __int64 v156; // r14
  char *v157; // rcx
  unsigned __int64 v158; // r12
  int v159; // edx
  unsigned __int8 *v160; // r8
  int v161; // r9d
  int v162; // r10d
  int v163; // edx
  char **v164; // r14
  const __m128i *v166; // rdi
  const __m128i *v167; // r14
  const __m128i *v168; // r15
  __int64 v169; // rsi
  __int64 v170; // rdi
  const __m128i *v171; // rbx
  const __m128i *v172; // r14
  __m128i si128; // xmm0
  __int64 v175; // rax
  __int64 v176; // rdx
  unsigned __int64 v177; // rax
  __int64 v178; // rsi
  __int64 v180; // rsi
  char **v181; // rsi
  unsigned __int64 v182; // r12
  const __m128i *v183; // r14
  _QWORD v184[2]; // [rsp+40h] [rbp-40h] BYREF
  const __m128i *v185; // [rsp+50h] [rbp-30h] BYREF
  __int64 v186; // [rsp+58h] [rbp-28h]
  __int64 v187; // [rsp+68h] [rbp-18h]
  char v188[16]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v189[2]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v190; // [rsp+90h] [rbp+10h]
  unsigned __int64 v191; // [rsp+98h] [rbp+18h]
  __int64 v192; // [rsp+A0h] [rbp+20h] BYREF
  char *v193; // [rsp+A8h] [rbp+28h]
  __int64 v194; // [rsp+B0h] [rbp+30h]
  __int64 v195; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v196; // [rsp+C0h] [rbp+40h]
  __int64 v197; // [rsp+C8h] [rbp+48h]
  __int64 v198; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v199; // [rsp+D8h] [rbp+58h]
  const __m128i *v200; // [rsp+E0h] [rbp+60h]
  __int64 v201; // [rsp+F8h] [rbp+78h]
  __int64 v202; // [rsp+100h] [rbp+80h]
  __int64 i; // [rsp+108h] [rbp+88h]
  const __m128i *v204; // [rsp+110h] [rbp+90h]
  __int64 v205; // [rsp+118h] [rbp+98h]
  __int64 v206; // [rsp+120h] [rbp+A0h]
  char *v207; // [rsp+128h] [rbp+A8h]
  __int64 v208; // [rsp+130h] [rbp+B0h]
  char **v209; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v210; // [rsp+140h] [rbp+C0h]
  __int128 v211; // [rsp+148h] [rbp+C8h]
  char *v212; // [rsp+158h] [rbp+D8h]
  __int64 v213; // [rsp+160h] [rbp+E0h]
  char *v214; // [rsp+168h] [rbp+E8h]
  __int64 v215; // [rsp+170h] [rbp+F0h]
  char *v216; // [rsp+178h] [rbp+F8h]
  __int64 v217; // [rsp+180h] [rbp+100h]
  char v218; // [rsp+188h] [rbp+108h]
  __int16 v219; // [rsp+190h] [rbp+110h]
  const __m128i *v220; // [rsp+198h] [rbp+118h]
  const __m128i *v221; // [rsp+1A0h] [rbp+120h]
  __int64 v222; // [rsp+1A8h] [rbp+128h]
  const __m128i *v223; // [rsp+1B0h] [rbp+130h]
  const __m128i *v224; // [rsp+1B8h] [rbp+138h]
  const __m128i *v225; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 (__fastcall *v226)(); // [rsp+1C8h] [rbp+148h]
  unsigned __int64 v227; // [rsp+1D0h] [rbp+150h]
  char v228; // [rsp+1DFh] [rbp+15Fh]
  const __m128i *v229; // [rsp+1E0h] [rbp+160h]
  const __m128i **v230; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v231; // [rsp+1F0h] [rbp+170h]
  const __m128i **v232; // [rsp+1F8h] [rbp+178h]
  __int64 v233; // [rsp+200h] [rbp+180h] BYREF
  __int64 v234; // [rsp+208h] [rbp+188h]
  __int64 v235; // [rsp+210h] [rbp+190h]
  const __m128i *v236; // [rsp+218h] [rbp+198h] BYREF
  __int64 v237; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v238; // [rsp+228h] [rbp+1A8h]
  const __m128i *v239; // [rsp+230h] [rbp+1B0h]
  const __m128i *v240; // [rsp+238h] [rbp+1B8h]
  __int64 v241; // [rsp+240h] [rbp+1C0h]
  __int8 v242; // [rsp+24Fh] [rbp+1CFh]
  const __m128i *v243; // [rsp+250h] [rbp+1D0h]
  __int64 v244; // [rsp+258h] [rbp+1D8h]

  v244 = -2;
  v4 = (const __m128i *)a4;
  v220 = a3;
  v206 = a2;
  v201 = a1;
  v5 = *(char **)(a4 + 32);
  v208 = *(_QWORD *)(a4 + 40);
  v207 = v5;
  sub_1403DEE60(&v198, v5, &v5[256 * v208]);
  v6 = v200;
  v7 = (const __m128i *)v4[3].m128i_i64[0];
  v8 = v4[3].m128i_i64[1];
  v239 = v4;
  v204 = v7;
  v205 = v8;
  if ( v8 )
  {
    v9 = v199;
    v243 = (const __m128i *)((char *)v7 + 24 * v8);
    v10 = 8LL * (_QWORD)v200;
    v229 = v200;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_4;
      v11 = v7->m128i_i64[1];
      v12 = v7[1].m128i_i64[0];
      v13 = 0;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v9 + v13);
        if ( *(_QWORD *)(v14 + 16) == v12 && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v14 + 8), v11) )
          break;
        v13 += 8;
        if ( v10 == v13 )
          goto LABEL_4;
      }
      sub_140FED300(&v209, v14);
      v15 = v210;
      v16 = v211;
      if ( !(_QWORD)v211 )
        break;
      sub_140E91160(*(_QWORD *)(v210 + 24), *(_QWORD *)(v210 + 32));
      v18 = v17;
      v19 = (_QWORD *)(v15 + 72);
      do
      {
        v20 = *(v19 - 7);
        if ( v20 )
          sub_140001660(*(v19 - 6), v20, 1);
        v21 = *(v19 - 1);
        if ( v21 != -1 && v21 )
          sub_140001660(*v19, v21, 1);
        v22 = *(v19 - 4);
        if ( v22 )
          sub_140001660(*(v19 - 3), v22, 1);
        v19 += 12;
        --v16;
      }
      while ( v16 );
      v23 = v18 != 0;
      v24 = (__int64)v209;
      if ( v209 )
        goto LABEL_23;
LABEL_3:
      if ( v23 )
      {
        LOBYTE(v24) = 1;
        LODWORD(v241) = v24;
        v4 = v239;
        v6 = v229;
        goto LABEL_27;
      }
LABEL_4:
      v7 = (const __m128i *)((char *)v7 + 24);
      v6 = v229;
      if ( v7 == v243 )
      {
        LODWORD(v241) = 0;
        v4 = v239;
        goto LABEL_27;
      }
    }
    v23 = 0;
    v24 = (__int64)v209;
    if ( !v209 )
      goto LABEL_3;
LABEL_23:
    v24 = sub_140001660(v15, 96 * v24, 8);
    goto LABEL_3;
  }
  LODWORD(v241) = 0;
LABEL_27:
  v25 = v4[5].m128i_i8[0];
  v26 = v4[1].m128i_i64[0];
  v240 = (const __m128i *)v4->m128i_i64[0];
  if ( ((unsigned __int8)v25 ^ 1 | (v240 == nullptr) | (v26 == 0)) == 1 || !v6 )
    LODWORD(v241) = 0;
  v242 = v239[5].m128i_i8[1];
  if ( v242 )
  {
    v27 = _mm_loadu_si128(v239 + 4);
    sub_14101D880((unsigned int)&v185, (_DWORD)v207, v208, (_DWORD)v204, v205, v27.m128i_i64[0], v27.m128i_i64[1]);
  }
  else
  {
    sub_14102DF90((unsigned int)&v185, (_DWORD)v207, v208, (_DWORD)v204, v205);
  }
  sub_140C6F5E0(&v195, v206, v220);
  v29 = (char *)v197;
  if ( v197 < 0 )
  {
    v30 = 0;
    goto LABEL_35;
  }
  v202 = v26;
  v31 = v196;
  if ( v197 )
  {
    nullsub_1(v28);
    v30 = 1;
    v32 = sub_140001650(v29, 1);
    if ( !v32 )
LABEL_35:
      sub_141938D2B(v30, v29);
  }
  else
  {
    v32 = 1;
  }
  v236 = (const __m128i *)v29;
  v229 = (const __m128i *)v32;
  v237 = v32;
  v238 = 0;
  LOBYTE(v233) = 2;
  v211 = 0;
  v209 = (char **)v31;
  v210 = (__int64)v29;
  v212 = v29;
  v213 = v31;
  v214 = v29;
  v215 = 0;
  v216 = v29;
  v217 = 0xA0000000ALL;
  v218 = 1;
  v219 = 0;
  v33 = 0;
LABEL_41:
  LODWORD(v243) = 0;
  v34 = 0;
LABEL_42:
  v190 = v187;
  v220 = v185;
  v206 = v186;
  v228 = v241 & (v187 != 0);
  while ( 1 )
  {
    v35 = sub_140C161C0((__int64 *)&v209);
    v37 = (const __m128i *)v35;
    if ( !v35 )
      break;
    v38 = v36;
    v39 = sub_140E91160(v35, v36);
    v41 = v40;
    if ( !(unsigned __int8)sub_1402B5F80(&v233, v37, v38) )
    {
      if ( (v34 & 1) == 0 )
      {
        if ( ((unsigned __int8)v243 & 1) != 0 )
          goto LABEL_127;
        goto LABEL_60;
      }
      v34 = 1;
      goto LABEL_42;
    }
    if ( v41 && *(_BYTE *)v39 == 91 && *(_BYTE *)(v39 + v41 - 1) == 93 )
    {
      v71 = v41 - 1;
      if ( v41 == 1 || *(char *)(v39 + 1) <= -65 )
        sub_141938F40(v39, v41, 1, v71, (__int64)&off_1419E98C8);
      if ( !(_BYTE)v241 || (v34 = 1, !(unsigned __int8)sub_140EFC690(v39 + 1, v41 - 2, v43, v71)) )
      {
LABEL_127:
        v72 = v236;
        if ( v38 > (unsigned __int64)v236 - v33 )
        {
          sub_14190D590((unsigned int)&v236, v33, v38, 1, 1);
          v229 = (const __m128i *)v237;
          v33 = v238;
LABEL_129:
          sub_1418F44E0((__m128i *)((char *)v229 + v33), v37, v38);
          v72 = v236;
        }
        else if ( v38 )
        {
          goto LABEL_129;
        }
        v73 = v38 + v33;
        v238 = v73;
        if ( v72 == (const __m128i *)v73 )
          sub_14190D590((unsigned int)&v236, (_DWORD)v72, 1, 1, 1);
        v74 = v237;
        v229 = (const __m128i *)v237;
        *(_BYTE *)(v237 + v73) = 10;
        v33 = v73 + 1;
        v238 = v33;
        LOBYTE(v74) = 1;
        LODWORD(v243) = v74;
        v34 = 0;
        goto LABEL_42;
      }
      goto LABEL_42;
    }
    if ( (v34 & 1) != 0 )
    {
      v34 = 1;
      goto LABEL_42;
    }
    if ( ((unsigned __int8)v243 & 1) != 0 )
      goto LABEL_127;
    if ( !(_BYTE)v241 || !v41 || *(_BYTE *)v39 == 35 )
      goto LABEL_53;
    if ( v41 <= 0xF )
    {
      v46 = 0;
      while ( *(_BYTE *)(v39 + v46) != 61 )
      {
        if ( v41 == ++v46 )
          goto LABEL_53;
      }
LABEL_79:
      v49 = 1;
      while ( 1 )
      {
        v64 = (&off_141A3E940)[v49];
        if ( v41 < (unsigned __int64)v64
          || (unsigned int)sub_1418F4B70((&off_141A3E940)[v49 - 1], v39)
          || v64 == (char *)v41 )
        {
          goto LABEL_93;
        }
        v65 = v64[v39];
        v66 = (unsigned __int8)v65;
        if ( v65 >= 0 )
          goto LABEL_103;
        v67 = v65 & 0x1F;
        v68 = v64[v39 + 1] & 0x3F;
        if ( (unsigned __int8)v65 <= 0xDFu )
          break;
        v69 = (v68 << 6) | v64[v39 + 2] & 0x3F;
        if ( (unsigned __int8)v65 < 0xF0u )
        {
          v66 = (v67 << 12) | v69;
          if ( v66 == 32 )
            goto LABEL_41;
        }
        else
        {
          v66 = ((v65 & 7) << 18) | (v69 << 6) | v64[v39 + 3] & 0x3F;
          if ( v66 == 32 )
            goto LABEL_41;
        }
LABEL_104:
        if ( v66 == 61 || v66 - 9 < 5 )
          goto LABEL_41;
        if ( v66 >= 0x85 )
        {
          v70 = v66 >> 8;
          if ( v66 >> 8 > 0x1F )
          {
            if ( v70 == 32 )
            {
              v63 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v66) >> 1;
              goto LABEL_92;
            }
            if ( v70 == 48 )
            {
              v63 = v66 == 12288;
              goto LABEL_92;
            }
          }
          else
          {
            if ( !v70 )
            {
              v63 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v66);
LABEL_92:
              if ( (v63 & 1) != 0 )
                goto LABEL_41;
              goto LABEL_93;
            }
            if ( v70 == 22 )
            {
              v63 = v66 == 5760;
              goto LABEL_92;
            }
          }
        }
LABEL_93:
        v49 += 2;
        if ( v49 == 11 )
          goto LABEL_53;
      }
      v66 = v68 | (v67 << 6);
LABEL_103:
      if ( v66 == 32 )
        goto LABEL_41;
      goto LABEL_104;
    }
    LOBYTE(v42) = 61;
    if ( sub_1416B3CF0(v42, v39, v41) == 1 )
      goto LABEL_79;
LABEL_53:
    sub_140C70C30(&v225, v39, v41);
    if ( v225 == (const __m128i *)-1LL )
      goto LABEL_60;
    if ( v227 != 5 || *(_DWORD *)v226 ^ 0x65646F6D | *((unsigned __int8 *)v226 + 4) ^ 0x6C )
    {
      if ( v225 )
        sub_140001660(v226, v225, 1);
      goto LABEL_60;
    }
    if ( v225 )
      sub_140001660(v226, v225, 1);
    sub_140C70ED0(&v225, v39, v41);
    v47 = v225;
    if ( v225 != (const __m128i *)-1LL )
    {
      v48 = v226;
      if ( v227 == 12 )
      {
        if ( !(*(_QWORD *)v226 ^ 0x725F696D616D6961LL | *((unsigned int *)v226 + 2) ^ 0x79616C65LL) )
        {
          if ( !v228 )
            goto LABEL_134;
LABEL_83:
          v54 = v227;
          v55 = sub_140D2CC10(v188, v226, v227);
          v56 = _mm_cvtsi32_si128(v55 >> 57);
          v57 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v56, v56), 0), 68);
          for ( i = 0; ; i += 16 )
          {
            v58 = v206 & v55;
            HIDWORD(_RAX) = HIDWORD(v220);
            v60 = _mm_loadu_si128((const __m128i *)((char *)v220 + v58));
            _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v60, v57));
            if ( _EBX )
              break;
LABEL_89:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v60, (__m128i)-1LL)) )
              goto LABEL_134;
            v55 = i + v58 + 16;
          }
          v191 = v58;
          while ( 1 )
          {
            __asm { tzcnt   eax, ebx }
            v62 = -3LL * (v206 & (v58 + _RAX));
            if ( v54 == v220->m128i_i64[v62 - 1] && !(unsigned int)sub_1418F4B70(v48, v220[-1].m128i_i64[v62]) )
              goto LABEL_118;
            _RAX = (unsigned int)(_EBX - 1);
            LOWORD(_RAX) = _EBX & (_EBX - 1);
            _EBX = _RAX;
            v58 = v191;
            if ( !(_WORD)_RAX )
              goto LABEL_89;
          }
        }
        goto LABEL_118;
      }
      if ( v227 <= 0xC )
        goto LABEL_118;
      v50 = *(_QWORD *)v226 ^ 0x725F696D616D6961LL;
      v51 = 0;
      v52 = (v50 | *(_QWORD *)((char *)v226 + 5) ^ 0x5F79616C65725F69LL) == 0;
      v53 = (v50 | *(_QWORD *)((char *)v226 + 5) ^ 0x5F79616C65725F69LL) != 0;
      if ( (v52 & (unsigned __int8)v241) != 0 )
      {
        if ( !v190 )
          goto LABEL_134;
        goto LABEL_83;
      }
      LOBYTE(v51) = v53;
      if ( v51 )
      {
LABEL_118:
        if ( v47 )
          sub_140001660(v48, v47, 1);
        goto LABEL_60;
      }
LABEL_134:
      if ( v47 )
        sub_140001660(v48, v47, 1);
      goto LABEL_41;
    }
LABEL_60:
    v44 = v236;
    if ( v38 > (unsigned __int64)v236 - v33 )
    {
      sub_14190D590((unsigned int)&v236, v33, v38, 1, 1);
      v229 = (const __m128i *)v237;
      v33 = v238;
    }
    else if ( !v38 )
    {
      goto LABEL_63;
    }
    sub_1418F44E0((__m128i *)((char *)v229 + v33), v37, v38);
    v44 = v236;
LABEL_63:
    v45 = v38 + v33;
    v238 = v45;
    if ( v44 == (const __m128i *)v45 )
      sub_14190D590((unsigned int)&v236, (_DWORD)v44, 1, 1, 1);
    v229 = (const __m128i *)v237;
    *(_BYTE *)(v237 + v45) = 10;
    v33 = v45 + 1;
    v238 = v33;
    v34 = 0;
  }
  while ( 2 )
  {
    if ( v33 >= 2 && *(__int16 *)((char *)&v229->m128i_i16[-1] + v33) == 2570 )
    {
      v75 = -1;
      if ( v229->m128i_i8[v33 - 1] < 0 )
      {
        v76 = v229->m128i_i8[v33 - 2];
        if ( v76 > -65 )
        {
          v79 = v76 & 0x1F;
          if ( v79 >= 2 )
            goto LABEL_147;
        }
        else
        {
          v77 = v229->m128i_i8[v33 - 3];
          if ( v77 > -65 )
            v78 = v77 & 0xF;
          else
            v78 = ((v229->m128i_i8[v33 - 4] & 7) << 6) | v77 & 0x3F;
          v79 = (v78 << 6) | v76 & 0x3F;
          if ( v79 >= 2 )
          {
LABEL_147:
            v75 = -2;
            if ( v79 >= 0x20 )
              v75 = (v79 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
      }
      v33 += v75;
      continue;
    }
    break;
  }
  v238 = v33;
  if ( v33 == 1 )
    v33 = v229->m128i_i8[0] != 10;
  v220 = v236;
  if ( !(_BYTE)v241 )
  {
    v117 = -1;
    goto LABEL_207;
  }
  if ( !v240 )
  {
    v117 = -1;
    if ( v202 )
      goto LABEL_242;
    goto LABEL_207;
  }
  v80 = v239->m128i_i64[1];
  sub_140DB7C10((__int64)&v192, (int)v207, v208, (int)v204, v205);
  v207 = v193;
  v208 = v194;
  v230 = nullptr;
  v231 = 1;
  v232 = nullptr;
  sub_14190D590((unsigned int)&v230, 0, 55, 1, 1);
  v81 = v231;
  v82 = v232;
  *(_OWORD *)((char *)v232 + v231 + 32) = xmmword_141A3E159;
  *(_OWORD *)((char *)v82 + v81 + 16) = xmmword_141A3E149;
  *(__m128i *)((char *)v82 + v81) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E139);
  *(const __m128i **)((char *)v82 + v81 + 47) = (const __m128i *)0x29594C4C41554E41LL;
  v232 = (const __m128i **)((char *)v82 + 55);
  v83 = v230;
  if ( v230 == (const __m128i **)((char *)v82 + 55) )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v82 + 55, 1, 1, 1);
    v83 = v230;
    v81 = v231;
  }
  *((_BYTE *)v82 + v81 + 55) = 10;
  v84 = v82 + 7;
  v232 = v84;
  if ( (unsigned __int64)((char *)v83 - (char *)v84) <= 0x2B )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v84, 44, 1, 1);
    v84 = v232;
    v83 = v230;
    v81 = v231;
  }
  *(_OWORD *)((char *)v84 + v81 + 28) = *(__int128 *)((char *)&xmmword_141A3E180 + 12);
  *(_OWORD *)((char *)v84 + v81 + 16) = xmmword_141A3E180;
  *(__m128i *)((char *)v84 + v81) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E170);
  v85 = (const __m128i **)((char *)v84 + 44);
  v232 = v85;
  if ( (unsigned __int64)((char *)v83 - (char *)v85) <= 0x3A )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v85, 59, 1, 1);
    v85 = v232;
    v83 = v230;
    v81 = v231;
  }
  *(_OWORD *)((char *)v85 + v81 + 43) = *(__int128 *)((char *)&xmmword_141A3E1BC + 11);
  *(_OWORD *)((char *)v85 + v81 + 32) = xmmword_141A3E1BC;
  *(_OWORD *)((char *)v85 + v81 + 16) = xmmword_141A3E1AC;
  *(__m128i *)((char *)v85 + v81) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E19C);
  v232 = (const __m128i **)((char *)v85 + 59);
  if ( v83 == (const __m128i **)((char *)v85 + 59) )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v83, 1, 1, 1);
    v81 = v231;
  }
  *((_BYTE *)v85 + v81 + 59) = 10;
  v232 = (const __m128i **)((char *)v85 + 60);
  while ( 1 )
  {
    v86 = v80;
    if ( !v80 )
      break;
    v87 = &v240->m128i_i8[v80];
    v88 = v240->m128i_i8[v86 - 1];
    if ( v88 >= 0 )
    {
      v80 = v86 - 1;
      if ( v88 != 47 )
        break;
    }
    else
    {
      v89 = *(v87 - 2);
      if ( v89 >= -64 )
      {
        v92 = v87 - 2;
        v94 = v89 & 0x1F;
      }
      else
      {
        v90 = *(v87 - 3);
        if ( v90 >= -64 )
        {
          v92 = v87 - 3;
          v93 = v90 & 0xF;
        }
        else
        {
          v91 = *(v87 - 4);
          v92 = v87 - 4;
          v93 = ((v91 & 7) << 6) | v90 & 0x3F;
        }
        v94 = (v93 << 6) | v89 & 0x3F;
      }
      v80 = v92 - (char *)v240;
      if ( ((v94 << 6) | v88 & 0x3F) != 0x2F )
        break;
    }
  }
  v184[0] = v240;
  v184[1] = v86;
  v209 = (char **)v184;
  v210 = (__int64)sub_140186EE0;
  sub_1416ABFD0(&v233, &unk_141A3E85A, &v209);
  v236 = nullptr;
  v237 = 1;
  v238 = 0;
  v225 = (const __m128i *)&off_141A3D998;
  v226 = sub_140186EE0;
  sub_1416ABFD0(&v209, &unk_141A3E86D, &v225);
  v95 = (const __m128i *)v209;
  v96 = v210;
  v97 = v211;
  if ( (_QWORD)v211 )
  {
    v241 = v210;
    v243 = (const __m128i *)v209;
    sub_14190D590((unsigned int)&v236, 0, v211, 1, 1);
    v98 = v237;
    v182 = v238;
    v183 = (const __m128i *)v241;
    sub_1418F44E0((__m128i *)(v238 + v237), (const __m128i *)v241, v97);
    v96 = (__int64)v183;
    v95 = v243;
    v99 = v97 + v182;
    v238 = v99;
    if ( v243 )
LABEL_174:
      sub_140001660(v96, v95, 1);
  }
  else
  {
    v98 = 1;
    v99 = 0;
    v238 = 0;
    if ( v209 )
      goto LABEL_174;
  }
  if ( (unsigned __int64)v236 - v99 <= 0x1C )
  {
    sub_14190D590((unsigned int)&v236, v99, 29, 1, 1);
    v98 = v237;
    v99 = v238;
  }
  *(_OWORD *)(v98 + v99 + 13) = *(__int128 *)((char *)&xmmword_141A3E884 + 13);
  *(__m128i *)(v98 + v99) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E884);
  v100 = v99 + 29;
  v238 = v100;
  v101 = v234;
  sub_140C6A6C0((__int64)&v209, (char *)v234, v235);
  v189[0] = &v209;
  v189[1] = sub_1400015F0;
  sub_1416ABFD0(&v225, &unk_141A3E8A1, v189);
  if ( v209 )
    sub_140001660(v210, v209, 1);
  v241 = (__int64)v225;
  v243 = (const __m128i *)v226;
  v102 = v227;
  if ( v227 > (unsigned __int64)v236 - v100 )
  {
    sub_14190D590((unsigned int)&v236, v100, v227, 1, 1);
    v98 = v237;
    v100 = v238;
LABEL_181:
    sub_1418F44E0((__m128i *)(v100 + v98), v243, v102);
  }
  else if ( v227 )
  {
    goto LABEL_181;
  }
  v103 = v102 + v100;
  v238 = v103;
  if ( v241 )
    sub_140001660(v243, v241, 1);
  if ( (unsigned __int64)v236 - v103 <= 0x16 )
  {
    sub_14190D590((unsigned int)&v236, v103, 23, 1, 1);
    v103 = v238;
  }
  v104 = (const __m128i *)v237;
  *(__m128i *)(v237 + v103) = _mm_loadu_si128(&xmmword_141A3E8B3);
  *(__int64 *)((char *)&v104->m128i_i64[1] + v103 + 7) = 0xA227365736E6F70LL;
  v105 = v103 + 23;
  v238 = v105;
  LOBYTE(v189[0]) = v242 ^ 1;
  v225 = (const __m128i *)v189;
  v226 = sub_1416BCC50;
  sub_1416ABFD0(&v209, &unk_141A3E8CA, &v225);
  v106 = (const __m128i *)v209;
  v243 = (const __m128i *)v210;
  v107 = v211;
  if ( (unsigned __int64)v211 > (unsigned __int64)v236 - v105 )
  {
    v241 = (__int64)v209;
    sub_14190D590((unsigned int)&v236, v105, v211, 1, 1);
    v104 = (const __m128i *)v237;
    v105 = v238;
    v106 = (const __m128i *)v241;
LABEL_188:
    sub_1418F44E0((__m128i *)((char *)v104 + v105), v243, v107);
  }
  else if ( (_QWORD)v211 )
  {
    goto LABEL_188;
  }
  v108 = v107 + v105;
  v238 = v108;
  if ( v106 )
    sub_140001660(v243, v106, 1);
  v109 = v236;
  if ( (unsigned __int64)v236 - v108 <= 0x1B )
  {
    sub_14190D590((unsigned int)&v236, v108, 28, 1, 1);
    v108 = v238;
    v109 = v236;
    v104 = (const __m128i *)v237;
  }
  *(const __m128i *)((char *)v104 + v108 + 12) = *(const __m128i *)((char *)&xmmword_141A3E8E6 + 12);
  *(const __m128i *)((char *)v104 + v108) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E8E6);
  v110 = v108 + 28;
  if ( v233 )
    sub_140001660(v101, v233, 1);
  v111 = v232;
  if ( v110 > (char *)v230 - (char *)v232 )
  {
    v243 = v109;
    v241 = (__int64)v104;
    sub_14190D590((unsigned int)&v230, (_DWORD)v232, v110, 1, 1);
    v111 = v232;
    v104 = (const __m128i *)v241;
    v109 = v243;
  }
  sub_1418F44E0((__m128i *)((char *)v111 + v231), v104, v110);
  v112 = (const __m128i **)((char *)v111 + v110);
  v232 = v112;
  if ( v109 )
    sub_140001660(v104, v109, 1);
  if ( v242 )
  {
    v113 = v230;
    if ( v230 == v112 )
    {
      sub_14190D590((unsigned int)&v230, (_DWORD)v112, 1, 1, 1);
      v113 = v230;
    }
    v241 = v231;
    *((_BYTE *)v112 + v231) = 10;
    v114 = (const __m128i **)((char *)v112 + 1);
    v232 = v114;
    if ( (unsigned __int64)((char *)v113 - (char *)v114) <= 0x4F )
    {
      sub_14190D590((unsigned int)&v230, (_DWORD)v114, 80, 1, 1);
      v241 = v231;
      v114 = v232;
    }
    v115 = (const __m128i *)v241;
    *(_OWORD *)((char *)v114 + v241 + 64) = xmmword_141A3E2B7;
    *(_OWORD *)((char *)v114 + (_QWORD)v115 + 48) = xmmword_141A3E2A7;
    *(_OWORD *)((char *)v114 + (_QWORD)v115 + 32) = xmmword_141A3E297;
    *(_OWORD *)((char *)v114 + (_QWORD)v115 + 16) = xmmword_141A3E287;
    *(__m128i *)((char *)v114 + (_QWORD)v115) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E277);
    v116 = (char *)(v114 + 10);
    goto LABEL_237;
  }
  sub_140C6A6C0((__int64)&v225, v207, v208);
  v209 = &off_141A3E1F0;
  v210 = (__int64)sub_140186EE0;
  *(_QWORD *)&v211 = &v225;
  *((_QWORD *)&v211 + 1) = sub_1400015F0;
  sub_1416ABFD0(&v236, &unk_141A3E200, &v209);
  if ( v225 )
    sub_140001660(v226, v225, 1);
  v126 = v236;
  v127 = (const __m128i *)v237;
  v128 = v238;
  if ( v238 > (char *)v230 - (char *)v112 )
  {
    v241 = v237;
    v243 = v236;
    sub_14190D590((unsigned int)&v230, (_DWORD)v112, v238, 1, 1);
    v129 = v232;
    v126 = v243;
    v127 = (const __m128i *)v241;
LABEL_229:
    sub_1418F44E0((__m128i *)((char *)v129 + v231), v127, v128);
  }
  else
  {
    v129 = v232;
    if ( v238 )
      goto LABEL_229;
  }
  v130 = (const __m128i **)((char *)v129 + v128);
  v232 = v130;
  if ( v126 )
    sub_140001660(v127, v126, 1);
  v131 = v230;
  if ( v230 == v130 )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v130, 1, 1, 1);
    v131 = v230;
  }
  v241 = v231;
  *((_BYTE *)v130 + v231) = 10;
  v132 = (const __m128i **)((char *)v130 + 1);
  v232 = v132;
  if ( (unsigned __int64)((char *)v131 - (char *)v132) <= 0x55 )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v132, 86, 1, 1);
    v241 = v231;
    v132 = v232;
  }
  v133 = (const __m128i *)v241;
  *(_OWORD *)((char *)v132 + v241 + 64) = xmmword_141A3E261;
  *(_OWORD *)((char *)v132 + (_QWORD)v133 + 48) = xmmword_141A3E251;
  *(_OWORD *)((char *)v132 + (_QWORD)v133 + 32) = xmmword_141A3E241;
  *(_OWORD *)((char *)v132 + (_QWORD)v133 + 16) = xmmword_141A3E231;
  *(__m128i *)((char *)v132 + (_QWORD)v133) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E221);
  *(const __m128i **)((char *)v132 + (_QWORD)v133 + 78) = (const __m128i *)0xA8B9EE5A1A8E6ACLL;
  v116 = (char *)v132 + 86;
LABEL_237:
  v232 = (const __m128i **)v116;
  v117 = (__int64)v230;
  if ( (unsigned __int64)((char *)v230 - v116) <= 0x1D )
  {
    sub_14190D590((unsigned int)&v230, (_DWORD)v116, 30, 1, 1);
    v116 = (char *)v232;
    v117 = (__int64)v230;
    v241 = v231;
  }
  v134 = (const __m128i *)v241;
  *(_OWORD *)&v116[v241 + 14] = *(__int128 *)((char *)&xmmword_141A3E2C7 + 14);
  *(__m128i *)&v116[(_QWORD)v134] = _mm_loadu_si128((const __m128i *)&xmmword_141A3E2C7);
  if ( v192 )
    sub_140001660(v193, v192, 1);
  v37 = (const __m128i *)(v116 + 30);
  if ( !v202 )
  {
LABEL_207:
    v118 = v117 == -1;
LABEL_208:
    v209 = nullptr;
    v210 = 1;
    *(_QWORD *)&v211 = 0;
    if ( !v33 )
    {
      v119 = -1;
      v123 = 0;
      if ( v118 )
      {
        v243 = (const __m128i *)v117;
        v124 = 1;
        v122 = 1;
        goto LABEL_321;
      }
LABEL_315:
      v243 = (const __m128i *)v117;
      if ( v37 > (const __m128i *)((char *)v209 - v123) )
      {
        v224 = (const __m128i *)v117;
        v223 = (const __m128i *)v241;
        v222 = v119;
        v221 = v240;
        sub_14190D590((unsigned int)&v209, v123, (_DWORD)v37, 1, 1);
        v123 = v211;
      }
      else if ( !v37 )
      {
LABEL_318:
        v164 = (char **)((char *)v37->m128i_i64 + v123);
        *(_QWORD *)&v211 = v164;
        if ( v209 == v164 )
        {
          v224 = v243;
          v223 = (const __m128i *)v241;
          v222 = v119;
          v221 = v240;
          sub_14190D590((unsigned int)&v209, (_DWORD)v164, 1, 1, 1);
        }
        *((_BYTE *)v164 + v210) = 10;
        v123 = (unsigned __int64)v164 + 1;
        *(_QWORD *)&v211 = v123;
        v124 = 0;
        v122 = v210;
        goto LABEL_321;
      }
      sub_1418F44E0((__m128i *)(v210 + v123), (const __m128i *)v241, (unsigned __int64)v37);
      v123 = v211;
      goto LABEL_318;
    }
    LOBYTE(v239) = v118;
    v119 = -1;
    LODWORD(v120) = 0;
    v121 = v229;
    v243 = (const __m128i *)v117;
LABEL_353:
    v224 = (const __m128i *)v117;
    v223 = (const __m128i *)v241;
    v222 = v119;
    v221 = v240;
    sub_14190D590((unsigned int)&v209, (_DWORD)v120, v33, 1, 1);
    v120 = (char *)v211;
    goto LABEL_210;
  }
LABEL_242:
  v243 = (const __m128i *)v117;
  v135 = v239[1].m128i_i64[1];
  v233 = 0;
  v234 = 1;
  v235 = 0;
  sub_14190D590((unsigned int)&v233, 0, 64, 1, 1);
  v136 = v234;
  v137 = v235;
  *(_OWORD *)(v234 + v235 + 48) = xmmword_141A3E34B;
  qmemcpy((void *)(v136 + v137 + 16), "ay codex-router top start (DO NO", 32);
  *(__m128i *)(v136 + v137) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E31B);
  v235 = v137 + 64;
  v138 = v233;
  if ( v233 == v137 + 64 )
  {
    sub_14190D590((unsigned int)&v233, v137 + 64, 1, 1, 1);
    v138 = v233;
    v136 = v234;
  }
  *(_BYTE *)(v136 + v137 + 64) = 10;
  v139 = v137 + 65;
  v235 = v139;
  if ( (unsigned __int64)(v138 - v139) <= 0x61 )
  {
    sub_14190D590((unsigned int)&v233, v139, 98, 1, 1);
    v136 = v234;
    v139 = v235;
  }
  *(_OWORD *)(v136 + v139 + 80) = xmmword_141A3E3AB;
  *(_OWORD *)(v136 + v139 + 64) = xmmword_141A3E39B;
  *(_OWORD *)(v136 + v139 + 48) = xmmword_141A3E38B;
  *(_OWORD *)(v136 + v139 + 32) = xmmword_141A3E37B;
  *(_OWORD *)(v136 + v139 + 16) = xmmword_141A3E36B;
  *(__m128i *)(v136 + v139) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E35B);
  *(_WORD *)(v136 + v139 + 96) = 2692;
  v140 = v139 + 98;
  v235 = v140;
  v141 = v233 - v140;
  if ( v242 )
  {
    if ( v141 <= 0x68 )
    {
      sub_14190D590((unsigned int)&v233, v140, 105, 1, 1);
      v136 = v234;
      v140 = v235;
    }
    *(_OWORD *)(v136 + v140 + 89) = *(__int128 *)((char *)&xmmword_141A3E46A + 9);
    *(_OWORD *)(v136 + v140 + 80) = xmmword_141A3E46A;
    *(_OWORD *)(v136 + v140 + 64) = xmmword_141A3E45A;
    *(_OWORD *)(v136 + v140 + 48) = xmmword_141A3E44A;
    *(_OWORD *)(v136 + v140 + 32) = xmmword_141A3E43A;
    *(_OWORD *)(v136 + v140 + 16) = xmmword_141A3E42A;
    *(__m128i *)(v136 + v140) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E41A);
    v142 = v140 + 105;
  }
  else
  {
    if ( v141 <= 0x5C )
    {
      sub_14190D590((unsigned int)&v233, v140, 93, 1, 1);
      v136 = v234;
      v140 = v235;
    }
    *(_OWORD *)(v136 + v140 + 77) = *(__int128 *)((char *)&xmmword_141A3E3FD + 13);
    *(_OWORD *)(v136 + v140 + 64) = xmmword_141A3E3FD;
    *(_OWORD *)(v136 + v140 + 48) = xmmword_141A3E3ED;
    *(_OWORD *)(v136 + v140 + 32) = xmmword_141A3E3DD;
    *(_OWORD *)(v136 + v140 + 16) = xmmword_141A3E3CD;
    *(__m128i *)(v136 + v140) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E3BD);
    v142 = v140 + 93;
  }
  v235 = v142;
  if ( (unsigned __int64)(v233 - v142) <= 0x46 )
  {
    sub_14190D590((unsigned int)&v233, v142, 71, 1, 1);
    v136 = v234;
    v142 = v235;
  }
  *(_OWORD *)(v136 + v142 + 48) = xmmword_141A3E4B3;
  *(_OWORD *)(v136 + v142 + 32) = xmmword_141A3E4A3;
  *(_OWORD *)(v136 + v142 + 16) = xmmword_141A3E493;
  *(__m128i *)(v136 + v142) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E483);
  *(_QWORD *)(v136 + v142 + 63) = 0xAA499E9BBA7E7A8LL;
  v143 = v142 + 71;
  v235 = v143;
  if ( !v242 )
  {
    if ( (unsigned __int64)(v233 - v143) <= 0x57 )
    {
      sub_14190D590((unsigned int)&v233, v143, 88, 1, 1);
      v136 = v234;
      v143 = v235;
    }
    *(_OWORD *)(v136 + v143 + 64) = xmmword_141A3E50A;
    *(_OWORD *)(v136 + v143 + 48) = xmmword_141A3E4FA;
    *(_OWORD *)(v136 + v143 + 32) = xmmword_141A3E4EA;
    *(_OWORD *)(v136 + v143 + 16) = xmmword_141A3E4DA;
    *(__m128i *)(v136 + v143) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E4CA);
    *(_QWORD *)(v136 + v143 + 80) = 0xAA18AE58D9CE6B9LL;
    v143 += 88;
    v235 = v143;
    if ( !(unsigned __int8)sub_140C6EFC0(
                             v229,
                             v33,
                             "experimental_realtime_ws_base_urlhttps://chatgpt.com/backend-api/codex",
                             33) )
    {
      sub_140C6A6C0((__int64)&v225, "https://chatgpt.com/backend-api/codex", 37);
      v209 = &off_141A3E568;
      v210 = (__int64)sub_140186EE0;
      *(_QWORD *)&v211 = &v225;
      *((_QWORD *)&v211 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v236, &unk_141A3E578, &v209);
      if ( v225 )
        sub_140001660(v226, v225, 1);
      v144 = v236;
      v240 = (const __m128i *)v237;
      v145 = v238;
      if ( v238 > v233 - v143 )
      {
        v239 = v236;
        sub_14190D590((unsigned int)&v233, v143, v238, 1, 1);
        v136 = v234;
        v143 = v235;
        v144 = v239;
LABEL_263:
        sub_1418F44E0((__m128i *)(v143 + v136), v240, v145);
      }
      else if ( v238 )
      {
        goto LABEL_263;
      }
      v143 += v145;
      v235 = v143;
      if ( v144 )
        sub_140001660(v240, v144, 1);
    }
    if ( !(unsigned __int8)sub_140C6EFC0(v229, v33, aExperimentalRe, 42) )
    {
      sub_140C6A6C0((__int64)&v225, "https://chatgpt.com/backend-api/codex", 37);
      v209 = &off_141A3E5B0;
      v210 = (__int64)sub_140186EE0;
      *(_QWORD *)&v211 = &v225;
      *((_QWORD *)&v211 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v236, &unk_141A3E578, &v209);
      if ( v225 )
        sub_140001660(v226, v225, 1);
      v146 = v236;
      v147 = (const __m128i *)v237;
      v148 = v238;
      if ( v238 > v233 - v143 )
      {
        v239 = (const __m128i *)v237;
        v240 = v236;
        sub_14190D590((unsigned int)&v233, v143, v238, 1, 1);
        v143 = v235;
        v146 = v240;
        v147 = v239;
LABEL_271:
        sub_1418F44E0((__m128i *)(v143 + v234), v147, v148);
      }
      else if ( v238 )
      {
        goto LABEL_271;
      }
      v143 += v148;
      v235 = v143;
      if ( v146 )
        sub_140001660(v147, v146, 1);
    }
  }
  sub_140C6A6C0((__int64)&v209, (char *)&dword_141A3CEF0, 6);
  v236 = (const __m128i *)&v209;
  v237 = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v225, &unk_141A3E5C0, &v236);
  if ( v209 )
    sub_140001660(v210, v209, 1);
  v149 = v225;
  v240 = (const __m128i *)v226;
  v150 = v227;
  if ( v227 > v233 - v143 )
  {
    v239 = v225;
    sub_14190D590((unsigned int)&v233, v143, v227, 1, 1);
    v143 = v235;
    v149 = v239;
LABEL_278:
    sub_1418F44E0((__m128i *)(v143 + v234), v240, v150);
  }
  else if ( v227 )
  {
    goto LABEL_278;
  }
  v151 = v150 + v143;
  v235 = v151;
  if ( v149 )
    sub_140001660(v240, v149, 1);
  if ( v242 )
  {
    sub_1416AB5A0(&v209, v202, v135);
    v240 = (const __m128i *)v210;
    sub_140C6A6C0((__int64)&v225, (char *)v210, v211);
    v230 = &v225;
    v231 = (__int64)sub_1400015F0;
    sub_1416ABFD0(&v236, &unk_141A3E5D8, &v230);
    if ( v225 )
      sub_140001660(v226, v225, 1);
    v117 = (__int64)v243;
    if ( (__int64)v209 > 0 )
      sub_140001660(v240, v209, 1);
    v152 = v236;
    v153 = (const __m128i *)v237;
    v154 = v238;
    if ( v238 > v233 - v151 )
    {
      v239 = (const __m128i *)v237;
      v240 = v236;
      sub_14190D590((unsigned int)&v233, v151, v238, 1, 1);
      v151 = v235;
      v117 = (__int64)v243;
      v152 = v240;
      v153 = v239;
LABEL_288:
      sub_1418F44E0((__m128i *)(v151 + v234), v153, v154);
    }
    else if ( v238 )
    {
      goto LABEL_288;
    }
    v151 += v154;
    v235 = v151;
    if ( v152 )
      sub_140001660(v153, v152, 1);
  }
  else
  {
    v117 = (__int64)v243;
  }
  v119 = v233;
  if ( (unsigned __int64)(v233 - v151) <= 0x26 )
  {
    sub_14190D590((unsigned int)&v233, v151, 39, 1, 1);
    v119 = v233;
    v151 = v235;
    v117 = (__int64)v243;
  }
  v155 = (const __m128i *)v234;
  *(_OWORD *)(v234 + v151 + 16) = xmmword_141A3E604;
  *(const __m128i *)((char *)v155 + v151) = _mm_loadu_si128((const __m128i *)&xmmword_141A3E5F4);
  v240 = v155;
  *(__int64 *)((char *)&v155[1].m128i_i64[1] + v151 + 7) = 0x646E6520706F7420LL;
  v118 = v117 == -1;
  if ( v119 == -1 )
    goto LABEL_208;
  LOBYTE(v239) = v117 == -1;
  v156 = v151 + 39;
  if ( v33 )
  {
    v157 = (char *)v229;
    v158 = 0;
    while ( 1 )
    {
      v159 = (unsigned __int8)*v157;
      if ( *v157 < 0 )
      {
        v161 = v159 & 0x1F;
        v162 = v157[1] & 0x3F;
        if ( (unsigned __int8)v159 <= 0xDFu )
        {
          v160 = (unsigned __int8 *)(v157 + 2);
          v159 = v162 | (v161 << 6);
          if ( v159 != 13 )
            goto LABEL_308;
        }
        else
        {
          v163 = (v162 << 6) | v157[2] & 0x3F;
          if ( (unsigned __int8)*v157 < 0xF0u )
          {
            v160 = (unsigned __int8 *)(v157 + 3);
            v159 = (v161 << 12) | v163;
            if ( v159 != 13 )
            {
LABEL_308:
              if ( v159 != 10 )
                goto LABEL_347;
            }
          }
          else
          {
            v160 = (unsigned __int8 *)(v157 + 4);
            v159 = ((v161 & 7) << 18) | (v163 << 6) | v157[3] & 0x3F;
            if ( v159 != 13 )
              goto LABEL_308;
          }
        }
      }
      else
      {
        v160 = (unsigned __int8 *)(v157 + 1);
        if ( v159 != 13 )
          goto LABEL_308;
      }
      v158 = (unsigned __int64)&v160[v158 - (_QWORD)v157];
      v157 = (char *)v160;
      if ( v160 == (unsigned __int8 *)&v229->m128i_i8[v33] )
      {
        v158 = v33;
        goto LABEL_347;
      }
    }
  }
  v158 = 0;
LABEL_347:
  v209 = nullptr;
  v210 = 1;
  *(_QWORD *)&v211 = 0;
  v224 = (const __m128i *)v117;
  v223 = (const __m128i *)v241;
  v222 = v119;
  v221 = v240;
  sub_14190D590((unsigned int)&v209, 0, v156, 1, 1);
  v122 = v210;
  v180 = v211;
  sub_1418F44E0((__m128i *)(v211 + v210), v240, v156);
  v181 = (char **)(v156 + v180);
  *(_QWORD *)&v211 = v181;
  if ( v209 == v181 )
  {
    v224 = v243;
    v223 = (const __m128i *)v241;
    v222 = v119;
    v221 = v240;
    sub_14190D590((unsigned int)&v209, (_DWORD)v181, 1, 1, 1);
    v122 = v210;
  }
  v33 -= v158;
  *((_BYTE *)v181 + v122) = 10;
  v123 = (unsigned __int64)v181 + 1;
  *(_QWORD *)&v211 = (char *)v181 + 1;
  if ( !v33 )
  {
LABEL_211:
    v124 = 1;
    if ( (_BYTE)v239 )
      goto LABEL_321;
    if ( !v123 )
    {
      v123 = 0;
LABEL_314:
      v117 = (__int64)v243;
      goto LABEL_315;
    }
LABEL_217:
    if ( v123 < 2 || *(_WORD *)(v122 + v123 - 2) != 2570 )
    {
      if ( *(_BYTE *)(v122 + v123 - 1) == 10 )
      {
        if ( v209 == (char **)v123 )
        {
          v224 = v243;
          v223 = (const __m128i *)v241;
          v222 = v119;
          v221 = v240;
          sub_14190D590((unsigned int)&v209, v123, 1, 1, 1);
          v122 = v210;
        }
        *(_BYTE *)(v122 + v123++) = 10;
      }
      else
      {
        if ( (unsigned __int64)v209 - v123 <= 1 )
        {
          v224 = v243;
          v223 = (const __m128i *)v241;
          v222 = v119;
          v221 = v240;
          sub_14190D590((unsigned int)&v209, v123, 2, 1, 1);
          v122 = v210;
          v123 = v211;
        }
        *(_WORD *)(v122 + v123) = 2570;
        v123 = v211 + 2;
      }
      *(_QWORD *)&v211 = v123;
    }
    goto LABEL_314;
  }
  if ( v209 == (char **)v123 )
  {
    v224 = v243;
    v223 = (const __m128i *)v241;
    v222 = v119;
    v221 = v240;
    sub_14190D590((unsigned int)&v209, (_DWORD)v181 + 1, 1, 1, 1);
    v122 = v210;
  }
  v121 = (const __m128i *)((char *)v229 + v158);
  *((_BYTE *)v181 + v122 + 1) = 10;
  *(_QWORD *)&v211 = (char *)v181 + 2;
  v120 = (char *)v181 + 2;
  v117 = (__int64)v243;
  if ( v33 > (char *)v209 - ((char *)v181 + 2) )
    goto LABEL_353;
LABEL_210:
  v122 = v210;
  sub_1418F44E0((__m128i *)&v120[v210], v121, v33);
  v123 = (unsigned __int64)&v120[v33];
  *(_QWORD *)&v211 = v123;
  if ( v121->m128i_i8[v33 - 1] == 10 )
    goto LABEL_211;
  v125 = (char)v239;
  if ( v209 == (char **)v123 )
  {
    v224 = v243;
    v223 = (const __m128i *)v241;
    v222 = v119;
    v221 = v240;
    sub_14190D590((unsigned int)&v209, v123, 1, 1, 1);
    v122 = v210;
    v125 = (char)v239;
  }
  *(_BYTE *)(v122 + v123++) = 10;
  *(_QWORD *)&v211 = v123;
  v124 = 1;
  if ( !v125 )
    goto LABEL_217;
LABEL_321:
  v224 = v243;
  v223 = (const __m128i *)v241;
  v222 = v119;
  v221 = v240;
  sub_140EF8930(v201, v122, v123);
  if ( v209 )
    sub_140001660(v210, v209, 1);
  _RAX = v119 - 1;
  v166 = v229;
  v167 = v220;
  v168 = v243;
  if ( (unsigned __int64)(v119 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
  {
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v240, v119, 1) >> 32;
    if ( (v168 == nullptr) | (unsigned __int8)v124 )
    {
LABEL_325:
      if ( !v167 )
        goto LABEL_327;
      goto LABEL_326;
    }
  }
  else if ( (v243 == nullptr) | (unsigned __int8)v124 )
  {
    goto LABEL_325;
  }
  HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v241, v168, 1) >> 32;
  if ( v167 )
LABEL_326:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v166, v167, 1) >> 32;
LABEL_327:
  if ( v195 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v196, v195, 1) >> 32;
  v169 = v186;
  if ( v186 )
  {
    v170 = v187;
    if ( v187 )
    {
      v171 = v185;
      v172 = v185 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v185));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v172);
            v171 -= 24;
            ++v172;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v175 = -3 * _RAX;
        v176 = *((_QWORD *)&v171[-1] + v175 - 1);
        if ( v176 )
          sub_140001660(v171[-1].m128i_i64[v175], v176, 1);
        --v170;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v170 );
    }
    v177 = (24 * v169 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v178 = v177 + v169 + 17;
    if ( v178 )
      sub_140001660((char *)v185 - v177, v178, 16);
  }
  if ( v198 )
    sub_140001660(v199, 8 * v198, 8);
  return v201;
}
