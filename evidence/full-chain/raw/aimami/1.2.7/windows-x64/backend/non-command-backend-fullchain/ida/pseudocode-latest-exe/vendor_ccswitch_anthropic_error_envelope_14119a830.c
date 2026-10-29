__int64 __fastcall sub_14119A830(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // rdi
  _BYTE *v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  int v16; // eax
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r15
  __m128i si128; // xmm6
  __m128i v23; // xmm7
  __int64 v24; // rbx
  __int64 v25; // rax
  const __m128i *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r14
  __int64 v53; // rax
  char v54; // bl
  __m128i v55; // xmm0
  int v56; // ebx
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int64 v61; // rdx
  __int64 v62; // rcx
  void *v63; // rax
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  unsigned __int128 v71; // kr10_16
  __int128 v72; // kr20_16
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _WORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  void *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __m128i v115; // xmm0
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r14
  __m128i v130; // xmm0
  __m128i *v131; // rax
  __int8 v132; // al
  __int64 v133; // rcx
  int v134; // edx
  __int16 v135; // r8
  __int8 v136; // r9
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // rcx
  __int64 v140; // rdi
  __int64 v141; // [rsp+60h] [rbp-20h]
  __m128i v142; // [rsp+70h] [rbp-10h] BYREF
  __int64 v143; // [rsp+80h] [rbp+0h]
  __m128i v144; // [rsp+88h] [rbp+8h] BYREF
  __m128i v145; // [rsp+98h] [rbp+18h] BYREF
  __m128i v146; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v147; // [rsp+B8h] [rbp+38h]
  __int64 v148; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v149; // [rsp+C8h] [rbp+48h]
  char v150; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v151[31]; // [rsp+D1h] [rbp+51h]
  __int64 v152; // [rsp+F8h] [rbp+78h]
  _DWORD *v153; // [rsp+100h] [rbp+80h]
  __int64 v154; // [rsp+108h] [rbp+88h] BYREF
  __int64 v155; // [rsp+110h] [rbp+90h]
  unsigned __int64 v156; // [rsp+118h] [rbp+98h]
  __m128i v157; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v158; // [rsp+130h] [rbp+B0h]
  __int64 v159; // [rsp+140h] [rbp+C0h] BYREF
  _DWORD *v160; // [rsp+148h] [rbp+C8h]
  __int64 v161; // [rsp+150h] [rbp+D0h]
  __int64 v162; // [rsp+160h] [rbp+E0h]
  __int64 v163; // [rsp+168h] [rbp+E8h]
  __int64 v164; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v165; // [rsp+178h] [rbp+F8h]
  __int64 v166; // [rsp+180h] [rbp+100h]
  __m128i v167; // [rsp+188h] [rbp+108h] BYREF
  __int64 v168; // [rsp+198h] [rbp+118h]
  _BYTE *v169; // [rsp+1A0h] [rbp+120h]
  unsigned __int64 v170; // [rsp+1A8h] [rbp+128h]
  __m128i v171; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v172; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v173; // [rsp+1D8h] [rbp+158h]
  __m256i v174; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i *v175; // [rsp+200h] [rbp+180h]
  char v176; // [rsp+20Ah] [rbp+18Ah]
  char v177; // [rsp+20Bh] [rbp+18Bh]
  char v178; // [rsp+20Ch] [rbp+18Ch]
  char v179; // [rsp+20Dh] [rbp+18Dh]
  char v180; // [rsp+20Eh] [rbp+18Eh]
  char v181; // [rsp+20Fh] [rbp+18Fh]
  __m256i v182; // [rsp+210h] [rbp+190h] BYREF
  char v183; // [rsp+236h] [rbp+1B6h]
  char v184; // [rsp+237h] [rbp+1B7h]
  __int64 v185; // [rsp+238h] [rbp+1B8h]

  v185 = -2;
  v169 = a2;
  v5 = sub_1416724D0(aType_15, 4, a2);
  if ( v5
    && *(_BYTE *)v5 == 3
    && *(_QWORD *)(v5 + 24) == 5
    && !(**(_DWORD **)(v5 + 16) ^ 0x6F727265 | *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 4LL) ^ 0x72)
    || sub_1416724D0(aError_65, 5, v169) )
  {
    v6 = aError_65;
    v7 = (_BYTE *)sub_1416724D0(aError_65, 5, v169);
    if ( !v7 )
      v7 = v169;
    v8 = sub_1416724D0(aMessage_13, 7, v7);
    if ( v8 && *(_BYTE *)v8 == 3 || (v8 = (__int64)v7, *v7 == 3) )
    {
      v9 = *(void **)(v8 + 16);
      v10 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      v10 = 45;
      v9 = &unk_141AF3C32;
    }
    v174.m256i_i64[0] = (__int64)v9;
    v174.m256i_i64[1] = v10;
    v81 = sub_1416724D0(aType_15, 4, v7);
    v82 = 5;
    if ( v81 && *(_BYTE *)v81 == 3 )
    {
      v6 = *(const char **)(v81 + 16);
      v82 = *(_QWORD *)(v81 + 24);
    }
    v171.m128i_i64[0] = (__int64)v6;
    v171.m128i_i64[1] = v82;
    v182.m256i_i64[0] = (__int64)&v171;
    v182.m256i_i64[1] = (__int64)sub_140191200;
    v182.m256i_i64[2] = (__int64)&v174;
    v182.m256i_i64[3] = (__int64)sub_140191200;
    sub_1416DAFA0(&v142, &unk_141AF3C5F, &v182);
    *(_QWORD *)(a1 + 32) = v143;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v142);
    *(_QWORD *)(a1 + 8) = 0x800000000000000FuLL;
    *(_QWORD *)a1 = 1;
    goto LABEL_102;
  }
  v11 = sub_1416724D0(aId_12, 2, v169);
  v170 = a3;
  if ( v11 && *(_BYTE *)v11 == 3 )
  {
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)(v11 + 24);
    v148 = v14;
    v149 = v15;
    if ( v15 )
    {
      if ( v15 < 5 || (v16 = *(_DWORD *)v14 ^ 0x70736572, v16 | *(unsigned __int8 *)(v14 + 4) ^ 0x5F) )
      {
        v171.m128i_i64[0] = (__int64)&v148;
        v171.m128i_i64[1] = (__int64)sub_140191200;
        sub_1416DAFA0(&v182, &unk_141AF3BF0, &v171);
        v157 = _mm_loadu_si128((const __m128i *)&v182);
        v158 = v182.m256i_i64[2];
      }
      else
      {
        nullsub_1(v16 | *(unsigned __int8 *)(v14 + 4) ^ 0x5Fu, v12);
        v128 = sub_140001650(v15, 1);
        if ( !v128 )
          sub_14196B2DB(1, v15);
        v129 = v128;
        sub_1419234B0(v128, v14, v15);
        v157.m128i_i64[0] = v15;
        v157.m128i_i64[1] = v129;
        v158 = v15;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v148 = 1;
    v149 = 0;
  }
  nullsub_1(v13, v12);
  v17 = (void *)sub_140001650(13, 1);
  if ( !v17 )
    sub_14196B2DB(1, 13);
  qmemcpy(v17, "resp_ccswitch", 13);
  v157.m128i_i64[0] = 13;
  v157.m128i_i64[1] = (__int64)v17;
  v158 = 13;
LABEL_21:
  v18 = sub_1416724D0(aModel_9, 5, v169);
  if ( v18 && *(_BYTE *)v18 == 3 )
  {
    v162 = *(_QWORD *)(v18 + 16);
    v175 = *(__m128i **)(v18 + 24);
  }
  else
  {
    v162 = 1;
    v175 = nullptr;
  }
  v164 = 0;
  v165 = 8;
  v166 = 0;
  v154 = 0;
  v155 = 8;
  v156 = 0;
  v19 = sub_1416724D0(aContent_12, 7, v169);
  if ( v19 && *(_BYTE *)v19 == 4 )
  {
    v20 = *(_QWORD *)(v19 + 16);
    v21 = v20 + 32LL * *(_QWORD *)(v19 + 24);
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A45120);
    v23 = _mm_cvtsi32_si128(0x67u);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( v20 == v21 )
            goto LABEL_89;
          v24 = v20;
          v25 = sub_1416724D0(aType_15, 4, v20);
          v20 += 32;
        }
        while ( !v25 || *(_BYTE *)v25 != 3 );
        v26 = *(const __m128i **)(v25 + 16);
        v27 = *(_QWORD *)(v25 + 24);
        if ( v27 != 17 )
          break;
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(v26[1].m128i_u8[0]), v23),
                 _mm_cmpeq_epi8(_mm_loadu_si128(v26), si128))) == 0xFFFF )
          goto LABEL_50;
      }
      if ( v27 == 8 )
      {
        if ( v26->m128i_i64[0] == 0x6573755F6C6F6F74LL )
        {
          sub_14117B4E0(&v157, &v164, &v154);
          v49 = sub_1416724D0(aId_12, 2, v24);
          v173 = 1;
          if ( v49 && *(_BYTE *)v49 == 3 )
          {
            v173 = *(_QWORD *)(v49 + 16);
            v163 = *(_QWORD *)(v49 + 24);
          }
          else
          {
            v163 = 0;
          }
          v50 = sub_1416724D0(aName_13, 4, v24);
          v51 = 1;
          if ( v50 && *(_BYTE *)v50 == 3 )
          {
            v51 = *(_QWORD *)(v50 + 16);
            v52 = *(_QWORD *)(v50 + 24);
          }
          else
          {
            v52 = 0;
          }
          v53 = sub_1416724D0(aInput_7, 5, v24);
          if ( v53 )
          {
            v54 = *(_BYTE *)v53;
            switch ( *(_BYTE *)v53 )
            {
              case 0:
                break;
              case 1:
                v182.m256i_i8[1] = *(_BYTE *)(v53 + 1);
                break;
              case 2:
                *(__m128i *)&v182.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v53 + 8));
                break;
              case 3:
                sub_1416DB410(&v182.m256i_u64[1], v53 + 8);
                break;
              case 4:
                sub_141178D10(&v182.m256i_u64[1], v53 + 8);
                break;
              case 5:
                sub_1411B1490(&v182.m256i_u64[1], v53 + 8);
                break;
            }
            v55 = _mm_loadu_si128((const __m128i *)&v182.m256i_i8[1]);
            *(_OWORD *)&v151[15] = *(_OWORD *)&v182.m256i_u64[2];
            *(__m128i *)v151 = v55;
            v182.m256i_i64[1] = 0;
            v182.m256i_i64[3] = 0;
            v182.m256i_i8[0] = 5;
            v150 = v54;
            sub_14115A970(&v182);
          }
          else
          {
            v182.m256i_i64[1] = 0;
            v182.m256i_i64[3] = 0;
            v182.m256i_i8[0] = 5;
            v150 = 5;
            *(_DWORD *)v151 = *(__int32 *)((char *)v182.m256i_i32 + 1);
            *(_WORD *)&v151[4] = *(__int16 *)((char *)&v182.m256i_i16[2] + 1);
            v151[6] = v182.m256i_i8[7];
            *(_OWORD *)&v151[7] = __PAIR128__(v182.m256i_u64[2], 0);
            *(_QWORD *)&v151[23] = 0;
          }
          sub_141175090(&v171, v51, v52, &v150);
          sub_1411A9BC0((unsigned int)&v159, v173, v163, v51, v52, v170);
          v153 = v160;
          v56 = v161;
          sub_1411B71C0(&v174, &v171);
          v152 = v174.m256i_i64[1];
          sub_1411A7930(
            (unsigned int)&v182,
            (_DWORD)v153,
            v56,
            (unsigned int)aCompleted_4,
            9,
            v173,
            v163,
            v51,
            v52,
            v174.m256i_i64[1],
            v174.m256i_i64[2],
            0,
            v141,
            v170);
          v57 = v166;
          if ( v166 == v164 )
            sub_1419397B0(&v164);
          v58 = v165;
          v59 = 32 * v57;
          v60 = _mm_loadu_si128((const __m128i *)&v182);
          *(__m128i *)(v165 + v59 + 16) = _mm_loadu_si128((const __m128i *)&v182.m256i_u64[2]);
          *(__m128i *)(v58 + v59) = v60;
          v166 = v57 + 1;
          if ( v174.m256i_i64[0] )
            sub_140001660(v152, v174.m256i_i64[0], 1);
          if ( v159 )
            sub_140001660(v153, v159, 1);
          sub_14115A970(&v171);
        }
        else if ( v26->m128i_i64[0] == 0x676E696B6E696874LL )
        {
LABEL_50:
          sub_14117B4E0(&v157, &v164, &v154);
          v174.m256i_i64[0] = v166;
          v182.m256i_i64[0] = (__int64)&v157;
          v182.m256i_i64[1] = (__int64)sub_1400015F0;
          v182.m256i_i64[2] = (__int64)&v174;
          v182.m256i_i64[3] = (__int64)sub_1416EBAE0;
          sub_1416DAFA0(&v171, &unk_141AF3BF8, &v182);
          v163 = v171.m128i_i64[1];
          v173 = v171.m128i_i64[0];
          sub_14119D080(&v144, v171.m128i_i64[1], v172.m128i_i64[0], v24);
          if ( v144.m128i_i8[0] != -1 )
          {
            v45 = v166;
            if ( v166 == v164 )
              sub_1419397B0(&v164);
            v46 = v165;
            v47 = 32 * v45;
            v48 = _mm_loadu_si128(&v144);
            *(__m128i *)(v165 + v47 + 16) = _mm_loadu_si128(&v145);
            *(__m128i *)(v46 + v47) = v48;
            v166 = v45 + 1;
          }
          if ( v173 )
            sub_140001660(v163, v173, 1);
        }
      }
      else if ( v27 == 4 && v26->m128i_i32[0] == 1954047348 )
      {
        v28 = sub_1416724D0(aText_16, 4, v24);
        if ( v28 )
        {
          if ( *(_BYTE *)v28 == 3 )
          {
            v31 = *(_QWORD *)(v28 + 16);
            v32 = *(_QWORD *)(v28 + 24);
            v167.m128i_i64[0] = 0;
            v168 = 0;
            nullsub_1(v30, v29);
            v33 = (_DWORD *)sub_140001650(4, 1);
            if ( !v33 )
              sub_14196B2DB(1, 4);
            *v33 = 1701869940;
            v159 = 4;
            v160 = v33;
            v161 = 4;
            nullsub_1(v35, v34);
            v36 = (void *)sub_140001650(11, 1);
            v173 = (unsigned __int64)v36;
            if ( !v36 )
              sub_14196B2DB(1, 11);
            qmemcpy(v36, "output_text", 11);
            v182.m256i_i8[0] = 3;
            v182.m256i_i64[1] = 11;
            v182.m256i_i64[2] = (__int64)v36;
            v182.m256i_i64[3] = 11;
            sub_1411AB280(&v171, &v167, &v159, &v182);
            if ( v171.m128i_i8[0] != -1 )
              sub_14115A970(&v171);
            nullsub_1(v38, v37);
            v39 = (_DWORD *)sub_140001650(4, 1);
            if ( !v39 )
              sub_14196B2DB(1, 4);
            *v39 = 1954047348;
            v159 = 4;
            v160 = v39;
            v161 = 4;
            if ( v32 < 0 )
            {
              v42 = 0;
LABEL_150:
              v181 = 1;
              sub_14196B2DB(v42, v32);
            }
            if ( v32 )
            {
              v173 = v31;
              nullsub_1(v41, v40);
              v42 = 1;
              v43 = sub_140001650(v32, 1);
              if ( !v43 )
                goto LABEL_150;
              v44 = v43;
              sub_1419234B0(v43, v173, v32);
            }
            else
            {
              v44 = 1;
            }
            v182.m256i_i8[0] = 3;
            v182.m256i_i64[1] = v32;
            v182.m256i_i64[2] = v44;
            v182.m256i_i64[3] = v32;
            v181 = 0;
            sub_1411AB280(&v171, &v167, &v159, &v182);
            if ( v171.m128i_i8[0] != -1 )
              sub_14115A970(&v171);
            nullsub_1(v62, v61);
            v63 = (void *)sub_140001650(11, 1);
            if ( !v63 )
              sub_14196B2DB(1, 11);
            qmemcpy(v63, "annotations", 11);
            v159 = 11;
            v160 = v63;
            v161 = 11;
            v182.m256i_i64[1] = 0;
            *(_OWORD *)&v182.m256i_u64[2] = 8u;
            v182.m256i_i8[0] = 4;
            sub_1411AB280(&v171, &v167, &v159, &v182);
            if ( v171.m128i_i8[0] != -1 )
              sub_14115A970(&v171);
            v174.m256i_i64[3] = v168;
            *(__m128i *)&v174.m256i_u64[1] = v167;
            v174.m256i_i8[0] = 5;
            v64 = v156;
            if ( v156 == v154 )
              sub_1419397B0(&v154);
            v65 = v155;
            v66 = 32 * v64;
            v67 = _mm_loadu_si128((const __m128i *)&v174);
            *(__m128i *)(v155 + v66 + 16) = _mm_loadu_si128((const __m128i *)&v174.m256i_u64[2]);
            *(__m128i *)(v65 + v66) = v67;
            v156 = v64 + 1;
          }
        }
      }
    }
  }
LABEL_89:
  sub_14117B4E0(&v157, &v164, &v154);
  v68 = sub_1416724D0(aStopReason_3, 11, v169);
  if ( v68 && *(_BYTE *)v68 == 3 )
  {
    v70 = *(_QWORD *)(v68 + 16);
    v69 = *(_QWORD *)(v68 + 24);
  }
  else
  {
    v70 = 0;
  }
  sub_1411999C0(&v182, v70, v69);
  v71 = *(_OWORD *)v182.m256i_i8;
  v72 = *(_OWORD *)&v182.m256i_u64[2];
  v73 = sub_1416724D0(aUsage_6, 5, v169);
  sub_141199B50(&v159, v73);
  v167.m128i_i64[0] = 0;
  v168 = 0;
  nullsub_1(v75, v74);
  v76 = (_WORD *)sub_140001650(2, 1);
  if ( !v76 )
    sub_14196B2DB(1, 2);
  *v76 = 25705;
  v174.m256i_i64[0] = 2;
  v174.m256i_i64[1] = (__int64)v76;
  v174.m256i_i64[2] = 2;
  v79 = v158;
  if ( v158 < 0 )
  {
    v80 = 0;
    goto LABEL_96;
  }
  if ( v158 )
  {
    v170 = v71 >> 64;
    v173 = v71;
    v84 = v157.m128i_i64[1];
    nullsub_1(v78, v77);
    v80 = 1;
    v85 = sub_140001650(v79, 1);
    if ( !v85 )
    {
LABEL_96:
      v180 = 1;
      sub_14196B2DB(v80, v79);
    }
    v86 = v85;
    sub_1419234B0(v85, v84, v79);
    v71 = __PAIR128__(v170, v173);
  }
  else
  {
    v86 = 1;
  }
  v182.m256i_i8[0] = 3;
  v182.m256i_i64[1] = v79;
  v182.m256i_i64[2] = v86;
  v182.m256i_i64[3] = v79;
  v180 = 0;
  sub_1411AB280(&v171, &v167, &v174, &v182);
  if ( v171.m128i_i8[0] != -1 )
    sub_14115A970(&v171);
  nullsub_1(v88, v87);
  v89 = sub_140001650(6, 1);
  if ( !v89 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v89 + 4) = 29795;
  *(_DWORD *)v89 = 1701470831;
  v174.m256i_i64[0] = 6;
  v174.m256i_i64[1] = v89;
  v174.m256i_i64[2] = 6;
  nullsub_1(v91, v90);
  v92 = (_QWORD *)sub_140001650(8, 1);
  v170 = (unsigned __int64)v92;
  if ( !v92 )
    sub_14196B2DB(1, 8);
  *v92 = 0x65736E6F70736572LL;
  v182.m256i_i8[0] = 3;
  v182.m256i_i64[1] = 8;
  v182.m256i_i64[2] = (__int64)v92;
  v182.m256i_i64[3] = 8;
  sub_1411AB280(&v171, &v167, &v174, &v182);
  if ( v171.m128i_i8[0] != -1 )
    sub_14115A970(&v171);
  nullsub_1(v94, v93);
  v95 = (void *)sub_140001650(10, 1);
  if ( !v95 )
    sub_14196B2DB(1, 10);
  qmemcpy(v95, "created_at", 10);
  v174.m256i_i64[0] = 10;
  v174.m256i_i64[1] = (__int64)v95;
  v174.m256i_i64[2] = 10;
  v182.m256i_i8[0] = 2;
  *(_OWORD *)&v182.m256i_u64[1] = 0;
  sub_1411AB280(&v171, &v167, &v174, &v182);
  if ( v171.m128i_i8[0] != -1 )
    sub_14115A970(&v171);
  nullsub_1(v97, v96);
  v98 = sub_140001650(6, 1);
  if ( !v98 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v98 + 4) = 29557;
  *(_DWORD *)v98 = 1952543859;
  v174.m256i_i64[0] = 6;
  v174.m256i_i64[1] = v98;
  v174.m256i_i64[2] = 6;
  if ( (v71 & 0x8000000000000000uLL) != 0LL )
  {
    v101 = 0;
    goto LABEL_119;
  }
  if ( *((_QWORD *)&v71 + 1) )
  {
    nullsub_1(v100, v99);
    v101 = 1;
    v102 = sub_140001650(*((_QWORD *)&v71 + 1), 1);
    if ( !v102 )
    {
LABEL_119:
      v179 = 1;
      sub_14196B2DB(v101, *((_QWORD *)&v71 + 1));
    }
    v103 = v102;
    sub_1419234B0(v102, v71, *((_QWORD *)&v71 + 1));
  }
  else
  {
    v103 = 1;
  }
  v182.m256i_i8[0] = 3;
  v182.m256i_i64[1] = *((_QWORD *)&v71 + 1);
  v182.m256i_i64[2] = v103;
  v182.m256i_i64[3] = *((_QWORD *)&v71 + 1);
  v179 = 0;
  sub_1411AB280(&v171, &v167, &v174, &v182);
  if ( v171.m128i_i8[0] != -1 )
    sub_14115A970(&v171);
  nullsub_1(v105, v104);
  v106 = sub_140001650(5, 1);
  if ( !v106 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v106 + 4) = 108;
  *(_DWORD *)v106 = 1701080941;
  v174.m256i_i64[0] = 5;
  v174.m256i_i64[1] = v106;
  v174.m256i_i64[2] = 5;
  v108 = (__int64)v175;
  if ( (__int64)v175 < 0 )
  {
    v109 = 0;
    goto LABEL_129;
  }
  if ( v175 )
  {
    nullsub_1(v107, v175);
    v109 = 1;
    v110 = sub_140001650(v175, 1);
    v108 = (__int64)v175;
    if ( !v110 )
    {
LABEL_129:
      v178 = 1;
      sub_14196B2DB(v109, v108);
    }
    v111 = v110;
    sub_1419234B0(v110, v162, v175);
    v108 = (__int64)v175;
  }
  else
  {
    v111 = 1;
  }
  v182.m256i_i8[0] = 3;
  v182.m256i_i64[1] = v108;
  v182.m256i_i64[2] = v111;
  v182.m256i_i64[3] = v108;
  v178 = 0;
  sub_1411AB280(&v171, &v167, &v174, &v182);
  if ( v171.m128i_i8[0] != -1 )
    sub_14115A970(&v171);
  nullsub_1(v113, v112);
  v114 = sub_140001650(6, 1);
  if ( !v114 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v114 + 4) = 29813;
  *(_DWORD *)v114 = 1886680431;
  v174.m256i_i64[0] = 6;
  v174.m256i_i64[1] = v114;
  v174.m256i_i64[2] = 6;
  v184 = 1;
  sub_14115ABF0(&v182, &v164);
  if ( v182.m256i_i8[0] == -1 )
  {
    v171.m128i_i64[0] = v182.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_39,
      43,
      (unsigned int)&v171,
      (unsigned int)&off_141AF3140,
      (__int64)&off_141AF3C08);
  }
  v115 = _mm_loadu_si128((const __m128i *)&v182);
  v172 = _mm_loadu_si128((const __m128i *)&v182.m256i_u64[2]);
  v171 = v115;
  v184 = 0;
  sub_1411AB280(&v182, &v167, &v174, &v171);
  if ( v182.m256i_i8[0] != -1 )
    sub_14115A970(&v182);
  nullsub_1(v117, v116);
  v118 = sub_140001650(5, 1);
  if ( !v118 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v118 + 4) = 101;
  *(_DWORD *)v118 = 1734439797;
  v174.m256i_i64[0] = 5;
  v174.m256i_i64[1] = v118;
  v174.m256i_i64[2] = 5;
  v183 = 1;
  sub_1411B3D80(&v182, &v159);
  if ( v182.m256i_i8[0] == -1 )
  {
    v171.m128i_i64[0] = v182.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_39,
      43,
      (unsigned int)&v171,
      (unsigned int)&off_141AF3140,
      (__int64)&off_141AF3C08);
  }
  v119 = _mm_loadu_si128((const __m128i *)&v182);
  v172 = _mm_loadu_si128((const __m128i *)&v182.m256i_u64[2]);
  v171 = v119;
  v183 = 0;
  sub_1411AB280(&v182, &v167, &v174, &v171);
  if ( v182.m256i_i8[0] != -1 )
    sub_14115A970(&v182);
  *(__m128i *)&v174.m256i_u64[1] = _mm_loadu_si128(&v167);
  v174.m256i_i64[3] = v168;
  v174.m256i_i8[0] = 5;
  if ( (_QWORD)v72 )
  {
    v146.m128i_i64[0] = 0;
    v147 = 0;
    nullsub_1(v121, v120);
    v122 = sub_140001650(6, 1);
    if ( !v122 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v122 + 4) = 28271;
    *(_DWORD *)v122 = 1935762802;
    v167.m128i_i64[0] = 6;
    v167.m128i_i64[1] = v122;
    v168 = 6;
    if ( v72 < 0 )
    {
      v125 = 0;
      goto LABEL_148;
    }
    if ( *((_QWORD *)&v72 + 1) )
    {
      nullsub_1(v124, v123);
      v125 = 1;
      v126 = sub_140001650(*((_QWORD *)&v72 + 1), 1);
      if ( !v126 )
      {
LABEL_148:
        v177 = 1;
        sub_14196B2DB(v125, *((_QWORD *)&v72 + 1));
      }
      v127 = v126;
      sub_1419234B0(v126, v72, *((_QWORD *)&v72 + 1));
    }
    else
    {
      v127 = 1;
    }
    v182.m256i_i8[0] = 3;
    v182.m256i_i64[1] = *((_QWORD *)&v72 + 1);
    v182.m256i_i64[2] = v127;
    v182.m256i_i64[3] = *((_QWORD *)&v72 + 1);
    v177 = 0;
    sub_1411AB280(&v171, &v146, &v167, &v182);
    if ( v171.m128i_i8[0] != -1 )
      sub_14115A970(&v171);
    *(__m128i *)&v182.m256i_u64[1] = _mm_loadu_si128(&v146);
    v182.m256i_i64[3] = v147;
    v182.m256i_i8[0] = 5;
    v176 = 1;
    v175 = (__m128i *)sub_1416725D0(aIncompleteDeta_1, 18, &v174);
    sub_14115A970(v175);
    v130 = _mm_loadu_si128((const __m128i *)&v182);
    v131 = v175;
    v175[1] = _mm_loadu_si128((const __m128i *)&v182.m256i_u64[2]);
    *v131 = v130;
  }
  v132 = v174.m256i_i8[0];
  v133 = *(__int64 *)((char *)v174.m256i_i64 + 1);
  v134 = *(__int32 *)((char *)&v174.m256i_i32[2] + 1);
  v135 = *(__int16 *)((char *)&v174.m256i_i16[6] + 1);
  v136 = v174.m256i_i8[15];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v174.m256i_u64[2];
  *(_BYTE *)(a1 + 8) = v132;
  *(_QWORD *)(a1 + 9) = v133;
  *(_DWORD *)(a1 + 17) = v134;
  *(_WORD *)(a1 + 21) = v135;
  *(_BYTE *)(a1 + 23) = v136;
  *(_QWORD *)a1 = 0;
  sub_14115A970(&v159);
  v137 = v155;
  v170 = v156;
  v175 = nullptr;
  v162 = v155;
  while ( (__m128i *)v170 != v175 )
  {
    v175 = (__m128i *)((char *)v175 + 1);
    v138 = v137 + 32;
    sub_141175BC0();
    v137 = v138;
  }
  if ( v154 )
    sub_140001660(v155, 32 * v154, 8);
  v139 = v165;
  v170 = v166;
  v175 = nullptr;
  v162 = v165;
  while ( (__m128i *)v170 != v175 )
  {
    v175 = (__m128i *)((char *)v175 + 1);
    v140 = v139 + 32;
    sub_141175BC0();
    v139 = v140;
  }
  if ( v164 )
    sub_140001660(v165, 32 * v164, 8);
  if ( v157.m128i_i64[0] )
    sub_140001660(v157.m128i_i64[1], v157.m128i_i64[0], 1);
LABEL_102:
  sub_14115A970(v169);
  return a1;
}
