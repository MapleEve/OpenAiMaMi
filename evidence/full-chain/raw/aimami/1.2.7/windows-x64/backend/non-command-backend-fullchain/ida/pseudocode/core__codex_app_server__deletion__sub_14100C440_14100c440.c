// win 1.2.7 | module src/core/codex_app_server/deletion.rs | ea 0x14100c440 | name sub_14100C440
// win 1.2.7 | module src/core/codex_app_server/deletion.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14100C440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int128 v8; // xmm2
  __m128i v9; // xmm1
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  _BYTE *v12; // rcx
  unsigned __int64 v13; // r15
  char v14; // r11
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  _BYTE *v17; // r15
  unsigned __int64 v18; // r10
  char v19; // cl
  unsigned int v20; // r13d
  int v21; // r12d
  int v22; // r14d
  int v23; // r13d
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // r15
  unsigned __int64 v32; // r13
  __m128i *v33; // rax
  __m128i *v34; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rdx
  _BYTE *v41; // r15
  __m128i si128; // xmm8
  __m128i v43; // xmm9
  __m128i v44; // xmm10
  __m128i v45; // xmm11
  __int64 v46; // rax
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdi
  char v56; // al
  unsigned __int64 v57; // rax
  __int128 v59; // kr00_16
  __m128i v60; // xmm0
  __m128i v61; // xmm13
  __int64 v62; // r14
  unsigned __int64 v63; // r12
  __int64 i; // rdx
  unsigned __int64 v65; // rax
  __m128i v66; // xmm14
  unsigned __int64 v68; // rdi
  int v69; // eax
  bool v70; // zf
  __int64 v71; // r14
  __int64 v72; // r15
  __int64 v73; // r12
  __int64 v74; // r15
  unsigned __int64 v75; // r14
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // r13
  __int64 v83; // r12
  int v84; // eax
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r15
  __int8 v89; // bl
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  __int64 v92; // rdi
  __m128i v93; // xmm1
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdi
  char *v100; // r14
  __m128i v101; // xmm1
  __int64 v102; // rax
  int v103; // r12d
  __m128i v104; // xmm1
  __m128i v105; // xmm0
  __m128i v106; // xmm1
  char v107; // al
  int v108; // r8d
  unsigned __int64 v109; // rbx
  const __m128i *v110; // r12
  __int64 v111; // rdi
  __int64 v112; // r14
  __int64 v113; // r15
  char v114; // al
  __int64 v115; // r14
  __int64 v116; // r15
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rbx
  __int64 v122; // r15
  __int64 v123; // rax
  __int64 v124; // r14
  __int64 v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rcx
  bool v128; // bl
  unsigned __int64 v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  const __m128i *v133; // r12
  unsigned __int64 v134; // r14
  __int64 v135; // r15
  __int64 v136; // r13
  __int64 v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rcx
  __m128i v140; // xmm0
  __m128i v141; // xmm1
  __int64 v142; // rax
  __int64 v143; // rbx
  unsigned __int64 v144; // r14
  __int64 v145; // rax
  __m128i v146; // xmm0
  __m128i v147; // xmm1
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  __int64 v150; // r14
  bool v151; // di
  unsigned __int64 v152; // rbx
  _BYTE *v153; // r14
  bool v154; // cf
  __int64 v155; // [rsp+40h] [rbp-40h] BYREF
  __m256i v156; // [rsp+48h] [rbp-38h] BYREF
  __int128 v157; // [rsp+68h] [rbp-18h]
  __int128 v158; // [rsp+78h] [rbp-8h]
  __int128 v159; // [rsp+88h] [rbp+8h]
  __m128i v160[2]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v161; // [rsp+B8h] [rbp+38h]
  __int128 v162; // [rsp+C8h] [rbp+48h]
  __int128 v163; // [rsp+D8h] [rbp+58h]
  __int64 v164; // [rsp+E8h] [rbp+68h]
  _OWORD v165[2]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v166; // [rsp+110h] [rbp+90h]
  __int64 v167; // [rsp+118h] [rbp+98h]
  __int64 v168; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v169; // [rsp+130h] [rbp+B0h]
  __m128i v170; // [rsp+140h] [rbp+C0h]
  __int128 v171; // [rsp+150h] [rbp+D0h]
  __int128 v172; // [rsp+160h] [rbp+E0h]
  __int128 v173; // [rsp+170h] [rbp+F0h]
  __m128i v174; // [rsp+180h] [rbp+100h] BYREF
  __m128i v175; // [rsp+190h] [rbp+110h]
  __int128 v176; // [rsp+1A0h] [rbp+120h]
  __int128 v177; // [rsp+1B0h] [rbp+130h]
  __int128 v178; // [rsp+1C0h] [rbp+140h]
  __int64 v179; // [rsp+1D0h] [rbp+150h]
  _QWORD v180[2]; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v181; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v182; // [rsp+1F0h] [rbp+170h]
  __int64 v183; // [rsp+1F8h] [rbp+178h]
  __int64 v184; // [rsp+200h] [rbp+180h]
  __int64 v185; // [rsp+208h] [rbp+188h]
  __int128 v186; // [rsp+210h] [rbp+190h] BYREF
  __int128 v187; // [rsp+220h] [rbp+1A0h]
  _QWORD v188[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v189; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v190; // [rsp+248h] [rbp+1C8h]
  const __m128i *v191; // [rsp+258h] [rbp+1D8h]
  __m256i v192; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v193; // [rsp+280h] [rbp+200h]
  __int64 v194; // [rsp+288h] [rbp+208h]
  __m128i v195; // [rsp+290h] [rbp+210h] BYREF
  __m128i v196; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v197; // [rsp+2B0h] [rbp+230h]
  _BYTE v198[31]; // [rsp+2C0h] [rbp+240h] BYREF
  __m256i v199; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v200; // [rsp+300h] [rbp+280h]
  __int64 v201; // [rsp+308h] [rbp+288h]
  _BYTE v202[24]; // [rsp+310h] [rbp+290h] BYREF
  __int64 (__fastcall *v203)(); // [rsp+328h] [rbp+2A8h]
  __int64 v204; // [rsp+330h] [rbp+2B0h]
  unsigned __int64 v205; // [rsp+338h] [rbp+2B8h]
  __m128i v206; // [rsp+370h] [rbp+2F0h] BYREF
  unsigned __int64 v207; // [rsp+380h] [rbp+300h]
  __int64 v208; // [rsp+388h] [rbp+308h]
  __int64 v209; // [rsp+390h] [rbp+310h] BYREF
  __int64 v210; // [rsp+398h] [rbp+318h]
  __int64 v211; // [rsp+3A0h] [rbp+320h]
  __int64 v212; // [rsp+3A8h] [rbp+328h]
  _BYTE v213[87]; // [rsp+3B0h] [rbp+330h] BYREF
  _BYTE *v214; // [rsp+408h] [rbp+388h]
  _BYTE v215[96]; // [rsp+410h] [rbp+390h] BYREF
  __m256i v216; // [rsp+480h] [rbp+400h] BYREF
  __int64 v217; // [rsp+4A8h] [rbp+428h]
  unsigned __int64 v218; // [rsp+4B0h] [rbp+430h]
  __int64 v219; // [rsp+4B8h] [rbp+438h]
  __int64 v220; // [rsp+4C0h] [rbp+440h]
  char v221; // [rsp+4CEh] [rbp+44Eh]
  char v222; // [rsp+4CFh] [rbp+44Fh]
  char v223; // [rsp+4D0h] [rbp+450h]
  char v224; // [rsp+4D1h] [rbp+451h]
  char v225; // [rsp+4D2h] [rbp+452h]
  char v226; // [rsp+4D3h] [rbp+453h] BYREF
  char v227; // [rsp+4D4h] [rbp+454h]
  char v228; // [rsp+4D5h] [rbp+455h]
  char v229; // [rsp+4D6h] [rbp+456h]
  char v230; // [rsp+4D7h] [rbp+457h]
  __int64 v231; // [rsp+4D8h] [rbp+458h]

  v231 = -2;
  if ( !a4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v220 = a4;
  sub_140C1C870((__int64)&v155, a2);
  if ( v155 != 2 )
  {
    v208 = a3;
    v179 = v164;
    v178 = v163;
    v177 = v162;
    v176 = v161;
    v175 = v160[1];
    v9 = _mm_loadu_si128((const __m128i *)&v156.m256i_u64[2]);
    v169 = *(_OWORD *)v156.m256i_i8;
    v170 = v9;
    v171 = v157;
    v172 = v158;
    v173 = v159;
    v174 = _mm_loadu_si128(v160);
    v168 = v155;
    v10 = 0;
    v11 = 0x100003E00LL;
    v12 = *((_BYTE **)&v161 + 1);
    v13 = 0;
    v14 = 0;
    do
    {
LABEL_7:
      if ( (v14 & 1) != 0 )
        goto LABEL_58;
      v16 = v13;
      v14 = 1;
      while ( v12 != (_BYTE *)(*((_QWORD *)&v161 + 1) + v162) )
      {
        v17 = v12;
        v18 = v10;
        v19 = *v12;
        v20 = (unsigned __int8)v19;
        if ( v19 < 0 )
        {
          v21 = v19 & 0x1F;
          v22 = v17[1] & 0x3F;
          if ( (unsigned __int8)v19 <= 0xDFu )
          {
            v12 = v17 + 2;
            v20 = v22 | (v21 << 6);
          }
          else
          {
            v23 = (v22 << 6) | v17[2] & 0x3F;
            if ( (unsigned __int8)v19 < 0xF0u )
            {
              v12 = v17 + 3;
              v20 = (v21 << 12) | v23;
            }
            else
            {
              v12 = v17 + 4;
              v20 = ((v21 & 7) << 18) | (v23 << 6) | v17[3] & 0x3F;
            }
          }
        }
        else
        {
          v12 = v17 + 1;
        }
        v10 = v18 + v12 - v17;
        if ( v20 <= 0x20 && _bittest64(&v11, v20) )
        {
LABEL_6:
          v14 = 0;
          v13 = v18 + v12 - v17;
          v15 = v18 - v16;
          if ( v15 )
            goto LABEL_34;
          goto LABEL_7;
        }
        if ( v20 >= 0x85 )
        {
          v24 = v20 >> 8;
          if ( v20 >> 8 > 0x1F )
          {
            if ( v24 == 32 )
            {
              if ( (*((_BYTE *)off_1421E7280 + (unsigned __int8)v20) & 2) != 0 )
                goto LABEL_6;
            }
            else if ( v24 == 48 && v20 == 12288 )
            {
              goto LABEL_6;
            }
          }
          else if ( v24 )
          {
            if ( v24 == 22 && v20 == 5760 )
              goto LABEL_6;
          }
          else if ( (*((_BYTE *)off_1421E7280 + (unsigned __int8)v20) & 1) != 0 )
          {
            goto LABEL_6;
          }
        }
      }
      v12 = (_BYTE *)(*((_QWORD *)&v161 + 1) + v162);
      v13 = v16;
      v15 = v162 - v16;
    }
    while ( (_QWORD)v162 == v16 );
LABEL_34:
    if ( v15 < 7 )
      goto LABEL_58;
    v25 = *(_DWORD *)(v16 + *((_QWORD *)&v161 + 1)) ^ 0x616D6961;
    v12 = (_BYTE *)(v25 | *(_DWORD *)(v16 + *((_QWORD *)&v161 + 1) + 3) ^ 0x2F696D61u);
    if ( v25 | *(_DWORD *)(v16 + *((_QWORD *)&v161 + 1) + 3) ^ 0x2F696D61 )
      goto LABEL_58;
    v26 = v16 + *((_QWORD *)&v161 + 1) + 7;
    *(_QWORD *)v215 = 0;
    *(_QWORD *)&v215[8] = v15 - 7;
    *(_QWORD *)&v215[16] = v26;
    *(_QWORD *)&v215[24] = v15 - 7;
    *(_QWORD *)&v215[32] = 0;
    *(_QWORD *)&v215[40] = v15 - 7;
    *(_QWORD *)&v215[48] = 0x2B0000002BLL;
    v215[56] = 1;
    *(_WORD *)&v215[64] = 1;
    sub_141056FA0(v202, &v215[16]);
    if ( *(_DWORD *)v202 == 1 )
    {
      v13 = *(_QWORD *)&v202[8] - *(_QWORD *)v215;
      v27 = *(_QWORD *)v215 + v26;
    }
    else if ( v215[65]
           || (v13 = *(_QWORD *)&v215[8] - *(_QWORD *)v215, (v215[64] | (*(_QWORD *)&v215[8] != *(_QWORD *)v215)) != 1) )
    {
      v27 = 0;
    }
    else
    {
      v27 = *(_QWORD *)&v215[16] + *(_QWORD *)v215;
    }
    v28 = 1;
    if ( v27 )
      v28 = v27;
    else
      v13 = 0;
    *(_QWORD *)v215 = v28;
    *(_QWORD *)&v215[8] = v13;
    *(_QWORD *)&v215[16] = 0;
    *(_QWORD *)&v215[24] = v13;
    v215[40] = 1;
    *(_QWORD *)&v215[32] = 0x2D0000002DLL;
    sub_141056FA0(v202, v215);
    if ( *(_DWORD *)v202 == 1 )
    {
      v29 = v28 + *(_QWORD *)&v202[16];
      v10 = v13 - *(_QWORD *)&v202[16];
      v13 = *(_QWORD *)&v202[8];
    }
    else
    {
      v29 = 0;
    }
    v213[0] = 0;
    *(_OWORD *)v215 = (unsigned __int64)v213;
    *(_QWORD *)&v215[16] = v13;
    *(_QWORD *)&v215[24] = v28;
    *(_OWORD *)&v215[32] = v13;
    *(_QWORD *)&v215[48] = v13;
    *(_QWORD *)&v215[56] = 0x2E0000002ELL;
    v215[64] = 1;
    *(_WORD *)&v215[72] = 1;
    sub_1403CFB30(v202, v215);
    if ( v213[0] == 1 )
    {
      v30 = *(_QWORD *)v202;
      if ( *(_QWORD *)v202 )
      {
        v12 = *(_BYTE **)&v202[8];
LABEL_57:
        sub_140001660(v12, 8 * v30, 8);
      }
LABEL_58:
      nullsub_1(v12);
      v33 = (__m128i *)sub_140001650(147, 1);
      if ( !v33 )
        sub_141938D2B(1, 147);
      v34 = v33;
      sub_1418F44E0(v33, (const __m128i *)aSessionDeleteU, 0x93u);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 147;
      *(_QWORD *)(a1 + 16) = v34;
      *(_QWORD *)(a1 + 24) = 147;
      goto LABEL_60;
    }
    v30 = *(_QWORD *)v202;
    if ( *(_QWORD *)v202 == -1 )
      goto LABEL_58;
    v12 = *(_BYTE **)&v202[8];
    if ( *(_QWORD *)&v202[16] != 3 )
    {
LABEL_56:
      if ( *(_QWORD *)v202 )
        goto LABEL_57;
      goto LABEL_58;
    }
    v31 = **(_QWORD **)&v202[8];
    v32 = *(_QWORD *)(*(_QWORD *)&v202[8] + 8LL);
    if ( v29 )
    {
      if ( v10 < 6 || *(_DWORD *)v29 ^ 0x68706C61 | *(unsigned __int16 *)(v29 + 4) ^ 0x2E61 )
        goto LABEL_56;
      v214 = *(_BYTE **)&v202[8];
      v218 = *(_QWORD *)v202;
      v150 = *(_QWORD *)(*(_QWORD *)&v202[8] + 16LL);
      *(_QWORD *)v215 = 0;
      *(_QWORD *)&v215[8] = v10 - 6;
      *(_QWORD *)&v215[16] = v29 + 6;
      *(_QWORD *)&v215[24] = v10 - 6;
      *(_QWORD *)&v215[32] = 0;
      *(_QWORD *)&v215[40] = v10 - 6;
      *(_QWORD *)&v215[48] = 0x2E0000002ELL;
      v215[56] = 1;
      *(_WORD *)&v215[64] = 1;
      sub_14019A430(v202, v215);
      if ( *(_QWORD *)v202 == -1 )
      {
        v30 = v218;
        v12 = v214;
        if ( !v218 )
          goto LABEL_58;
        goto LABEL_57;
      }
      v12 = *(_BYTE **)&v202[8];
      v151 = 0;
      if ( v32 == 155 )
      {
        v70 = (v31 | v150) == 0;
        v152 = v218;
        v153 = v214;
        if ( v70 )
        {
          if ( *(_QWORD *)&v202[16] == 2 )
          {
            v154 = **(_QWORD **)&v202[8] < 9u;
            if ( **(_QWORD **)&v202[8] == 9 )
              v154 = *(_QWORD *)(*(_QWORD *)&v202[8] + 8LL) < 2u;
            v151 = !v154;
          }
          else
          {
            v151 = 0;
          }
        }
      }
      else
      {
        v152 = v218;
        v153 = v214;
      }
      if ( *(_QWORD *)v202 )
        sub_140001660(*(_QWORD *)&v202[8], 8LL * *(_QWORD *)v202, 8);
      if ( v152 )
        sub_140001660(v153, 8 * v152, 8);
      if ( !v151 )
        goto LABEL_58;
    }
    else
    {
      if ( *(_QWORD *)v202 )
        sub_140001660(*(_QWORD *)&v202[8], 8LL * *(_QWORD *)v202, 8);
      if ( v31 == 0 && v32 < 0x9B )
        goto LABEL_58;
    }
    v195.m128i_i64[0] = 0;
    v195.m128i_i64[1] = 8;
    v196 = 0;
    v197 = 8u;
    v225 = 1;
    v36 = sub_140893A90(&off_141A68A50);
    v165[1] = *(&off_141A68A70 + 1);
    v165[0] = off_141A68A70;
    v166 = v36;
    v167 = v37;
    v224 = 1;
    v38 = sub_140893A90(&off_141A68A50);
    v39 = v208;
    v187 = *(&off_141A68A70 + 1);
    v186 = off_141A68A70;
    v188[0] = v38;
    v188[1] = v40;
    v41 = (_BYTE *)(v208 + 24 * v220);
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A688F0);
    v43 = _mm_cvtsi32_si128(0x3Au);
    v44 = _mm_load_si128((const __m128i *)&xmmword_141A68900);
    v45 = _mm_load_si128((const __m128i *)&xmmword_141A68910);
    v219 = 3 * v220;
    v193 = 0;
    v214 = v41;
LABEL_68:
    while ( 2 )
    {
      if ( (_BYTE *)v39 == v41 )
      {
        sub_14037CBF0(&v196.m128i_u64[1], &v186);
        v146 = _mm_loadu_si128(&v195);
        v147 = _mm_loadu_si128(&v196);
        *(_OWORD *)&v215[32] = v197;
        *(__m128i *)&v215[16] = v147;
        *(__m128i *)v215 = v146;
        v224 = 0;
        sub_140370B80(&v186);
        v225 = 0;
        sub_140370B80(v165);
        v148 = _mm_load_si128((const __m128i *)v215);
        v149 = _mm_load_si128((const __m128i *)&v215[16]);
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v215[32];
        *(__m128i *)(a1 + 24) = v149;
        *(__m128i *)(a1 + 8) = v148;
        *(_QWORD *)a1 = -1;
LABEL_60:
        sub_140DF4F50(&v168);
        return a1;
      }
      v50 = sub_140E91160(*(_QWORD *)(v39 + 8), *(_QWORD *)(v39 + 16));
      sub_141568FC0(v202, v50, v51);
      v52 = v39 + 24;
      if ( *(_DWORD *)v202 != -1 )
      {
        sub_1416AC440(v213, v39);
        nullsub_1(v53);
        v54 = sub_140001650(97, 1);
        if ( !v54 )
          sub_141938D2B(1, 97);
        *(_OWORD *)(v54 + 80) = xmmword_141A68D3F;
        *(_OWORD *)(v54 + 64) = xmmword_141A68D2F;
        *(_OWORD *)(v54 + 48) = xmmword_141A68D1F;
        *(_OWORD *)(v54 + 32) = xmmword_141A68D0F;
        *(_OWORD *)(v54 + 16) = xmmword_141A68CFF;
        *(_OWORD *)v54 = xmmword_141A68CEF;
        *(_BYTE *)(v54 + 96) = -126;
        *(_OWORD *)v215 = *(_OWORD *)v213;
        *(_QWORD *)&v215[16] = *(_QWORD *)&v213[16];
        *(_QWORD *)&v215[24] = 97;
        *(_QWORD *)&v215[32] = v54;
        *(_QWORD *)&v215[40] = 97;
        v55 = *((_QWORD *)&v197 + 1);
        if ( *((_QWORD *)&v197 + 1) == v196.m128i_i64[1] )
          sub_14190F490(&v196.m128i_u64[1]);
        v46 = v197;
        v47 = 48 * v55;
        v48 = _mm_load_si128((const __m128i *)v215);
        v49 = _mm_load_si128((const __m128i *)&v215[16]);
        *(_OWORD *)(v197 + v47 + 32) = *(_OWORD *)&v215[32];
        *(__m128i *)(v46 + v47 + 16) = v49;
        *(__m128i *)(v46 + v47) = v48;
        *((_QWORD *)&v197 + 1) = v55 + 1;
LABEL_67:
        v39 = v52;
        continue;
      }
      break;
    }
    *(_OWORD *)v199.m256i_i8 = *(_OWORD *)&v202[4];
    *(_QWORD *)v213 = 0;
    *(_QWORD *)&v213[8] = 1;
    *(_QWORD *)&v213[16] = 0;
    *(_QWORD *)&v215[16] = 1610612768;
    *(_QWORD *)v215 = v213;
    *(_QWORD *)&v215[8] = &off_141A72708;
    v56 = sub_141569D80(&v199, v215);
    v208 = v39 + 24;
    if ( v56 )
      sub_141939040(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v226,
        (unsigned int)&unk_141A6D618,
        (__int64)&off_141A727C0);
    v207 = *(_QWORD *)&v213[16];
    v206 = _mm_loadu_si128((const __m128i *)v213);
    v230 = 1;
    sub_1416AC440(v215, &v206);
    v230 = 1;
    if ( (unsigned __int8)sub_1403AAB80(v165, v215) )
    {
LABEL_75:
      v52 = v208;
      v41 = v214;
      if ( v206.m128i_i64[0] )
        sub_140001660(v206.m128i_i64[1], v206.m128i_i64[0], 1);
      goto LABEL_67;
    }
    if ( *((_QWORD *)&v187 + 1) )
    {
      v230 = 1;
      v57 = sub_140D2AC70(v188, &v206);
      _RCX = v57 >> 57;
      v59 = v186;
      v60 = _mm_cvtsi32_si128(v57 >> 57);
      v61 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v60, v60), 0), 68);
      v62 = v206.m128i_i64[1];
      v63 = v207;
      for ( i = 0; ; i += 16 )
      {
        v65 = *((_QWORD *)&v59 + 1) & v57;
        v66 = _mm_loadu_si128((const __m128i *)(v59 + v65));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v66, v61));
        if ( _R13D )
          break;
LABEL_84:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v66, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_86;
        v57 = i + v65 + 16;
      }
      v220 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        v68 = v65;
        _RCX = -(__int64)(*((_QWORD *)&v59 + 1) & (v65 + _RCX));
        if ( v63 == *(_QWORD *)(v59 + 24 * _RCX - 8)
          && !(unsigned int)sub_1418F4B70(v62, *(_QWORD *)(v59 + 24 * _RCX - 16)) )
        {
          goto LABEL_75;
        }
        v69 = _R13D - 1;
        LOWORD(v69) = _R13D & (_R13D - 1);
        v70 = (_WORD)v69 == 0;
        _R13D = v69;
        v65 = v68;
        i = v220;
        if ( v70 )
          goto LABEL_84;
      }
    }
LABEL_86:
    if ( (v193 & 1) != 0 )
    {
      v71 = 8;
      v212 = 1;
      v219 = 8;
      v217 = 0;
      v194 = 0;
      v72 = 0;
      v73 = 0;
      goto LABEL_150;
    }
    v74 = v206.m128i_i64[1];
    v75 = v207;
    v180[0] = v206.m128i_i64[1];
    v180[1] = v207;
    *(_QWORD *)&v215[16] = v175.m128i_i64[1];
    *(__m128i *)v215 = _mm_loadu_si128((const __m128i *)&v174.m128i_u64[1]);
    v174.m128i_i64[1] = 0;
    v175 = (__m128i)8uLL;
    sub_1403FB000(v215);
    if ( *(_QWORD *)v215 )
      sub_140001660(*(_QWORD *)&v215[8], 32LL * *(_QWORD *)v215, 8);
    v192.m256i_i64[0] = 0;
    v192.m256i_i64[2] = 0;
    nullsub_1(v76);
    v77 = (_QWORD *)sub_140001650(8, 1);
    if ( !v77 )
      sub_141938D2B(1, 8);
    *v77 = 0x6449646165726874LL;
    v216.m256i_i64[0] = 8;
    v216.m256i_i64[1] = (__int64)v77;
    v216.m256i_i64[2] = 8;
    v227 = 1;
    sub_14040FB10(v215, v180);
    if ( v215[0] == 0xFF )
    {
      *(_QWORD *)v213 = *(_QWORD *)&v215[8];
      sub_141939040(
        (unsigned int)aCalledResultUn_19,
        43,
        (unsigned int)v213,
        (unsigned int)&off_141A6D5F8,
        (__int64)&off_141A6F300);
    }
    v78 = _mm_loadu_si128((const __m128i *)v215);
    *(__m128i *)&v213[16] = _mm_loadu_si128((const __m128i *)&v215[16]);
    *(__m128i *)v213 = v78;
    v227 = 0;
    sub_140E72AA0(v215, &v192, &v216, v213);
    if ( v215[0] != 0xFF )
      sub_14002F9D0(v215);
    v199.m256i_i64[3] = v192.m256i_i64[2];
    *(__m128i *)&v199.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v192);
    v199.m256i_i8[0] = 5;
    v230 = 1;
    sub_140C1BE00((__int64)v202, &v168, (const __m128i *)aThreadDelete, 13, (__int64)&v199, 120, 0);
    v79 = *(_QWORD *)v202;
    v185 = *(_QWORD *)v202;
    if ( *(_QWORD *)v202 == -2 )
    {
      v191 = (const __m128i *)v74;
      v218 = v75;
      v80 = v174.m128i_i64[1];
      v81 = v175.m128i_i64[1];
      v82 = v175.m128i_i64[0];
      v174.m128i_i64[1] = 0;
      v175 = (__m128i)8uLL;
      v83 = v82 + 32 * v81;
      v181 = v82;
      v183 = v80;
      v182 = v82;
      v184 = v83;
      v84 = sub_14167FC00();
      v220 = sub_1416A1240(v84, v85, 5, 0, (__int64)&off_141A6F328);
      v209 = 0;
      v210 = 8;
      v211 = 0;
      v223 = 1;
      v86 = sub_140893A90(&off_141A68A50);
      v199 = off_141A68A70;
      v200 = v86;
      v201 = v87;
      v88 = v83;
      if ( v82 == v83 )
        goto LABEL_98;
LABEL_96:
      v88 = v82 + 32;
      v182 = v82 + 32;
      v89 = *(_BYTE *)v82;
      if ( *(_BYTE *)v82 != 0xFF )
      {
        v90 = _mm_loadu_si128((const __m128i *)(v82 + 1));
        v91 = _mm_loadu_si128((const __m128i *)(v82 + 16));
        goto LABEL_103;
      }
LABEL_98:
      while ( 1 )
      {
        v229 = 1;
        sub_140C1B230((__int128 *)v215);
        v92 = *(_QWORD *)v215;
        v89 = v215[8];
        v93 = _mm_loadu_si128((const __m128i *)&v215[24]);
        *(_OWORD *)v198 = *(_OWORD *)&v215[9];
        *(__m128i *)&v198[15] = v93;
        if ( *(_QWORD *)v215 != -1 )
          break;
        v216.m256i_i8[0] = v215[8];
        *(_OWORD *)&v216.m256i_u64[2] = *(_OWORD *)&v198[15];
        *(__m128i *)&v216.m256i_i8[1] = _mm_load_si128((const __m128i *)v198);
        if ( sub_1416419F0(aId_10, 2, &v216) )
        {
          if ( sub_1416419F0(aMethod_0, 6, &v216) )
          {
            sub_140C1B4D0((__int64)v215, &v168, (__int64)&v216);
            v92 = *(_QWORD *)v215;
            if ( *(_QWORD *)v215 != -1 )
            {
              v89 = v215[8];
              v104 = _mm_loadu_si128((const __m128i *)&v215[25]);
              *(_OWORD *)v213 = *(_OWORD *)&v215[9];
              *(__m128i *)&v213[16] = v104;
              *(_OWORD *)&v213[32] = *(_OWORD *)&v215[41];
              *(_OWORD *)&v213[48] = *(_OWORD *)&v215[57];
              *(__m128i *)&v213[64] = _mm_loadu_si128((const __m128i *)&v215[73]);
              *(_QWORD *)&v213[79] = *(_QWORD *)&v215[88];
              v229 = 1;
              sub_14002F9D0(&v216);
              goto LABEL_132;
            }
          }
        }
        v90 = *(__m128i *)&v216.m256i_i8[1];
        v91 = _mm_loadu_si128((const __m128i *)&v216.m256i_u64[2]);
LABEL_103:
        *(__m128i *)&v213[15] = v91;
        *(__m128i *)v213 = v90;
        *(_OWORD *)&v192.m256i_u64[2] = *(_OWORD *)&v213[15];
        *(__m128i *)&v192.m256i_i8[1] = _mm_load_si128((const __m128i *)v213);
        v192.m256i_i8[0] = v89;
        v94 = sub_1416419F0(aMethod_0, 6, &v192);
        if ( v94 )
        {
          if ( *(_BYTE *)v94 == 3
            && *(_QWORD *)(v94 + 24) == 14
            && !(**(_QWORD **)(v94 + 16) ^ 0x642F646165726874LL
               | *(_QWORD *)(*(_QWORD *)(v94 + 16) + 6LL) ^ 0x646574656C65642FLL)
            && !sub_1416419F0(aId_10, 2, &v192) )
          {
            v95 = sub_141642800(&v192, aParamsThreadid, 16);
            if ( v95 )
            {
              if ( *(_BYTE *)v95 == 3 )
              {
                sub_141568FC0(v215, *(_QWORD *)(v95 + 16), *(_QWORD *)(v95 + 24));
                if ( *(_DWORD *)v215 == -1 )
                {
                  *(__m128i *)v198 = _mm_loadu_si128((const __m128i *)&v215[4]);
                  *(_QWORD *)v213 = 0;
                  *(_QWORD *)&v213[8] = 1;
                  *(_QWORD *)&v213[16] = 0;
                  *(_QWORD *)&v215[16] = 1610612768;
                  *(_QWORD *)v215 = v213;
                  *(_QWORD *)&v215[8] = &off_141A72708;
                  if ( (unsigned __int8)sub_141569D80(v198, v215) )
                    sub_141939040(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v226,
                      (unsigned int)&unk_141A6D618,
                      (__int64)&off_141A727C0);
                  v216.m256i_i64[2] = *(_QWORD *)&v213[16];
                  *(__m128i *)v216.m256i_i8 = _mm_loadu_si128((const __m128i *)v213);
                  sub_1416AC440(v215, &v216);
                  if ( !(unsigned __int8)sub_1403AAB80(&v199, v215) )
                  {
                    sub_1416AC440(v215, &v216);
                    v96 = v211;
                    if ( v211 == v209 )
                      sub_14190FDC0(&v209);
                    v97 = v210;
                    v98 = 3 * v96;
                    *(_QWORD *)(v210 + 8 * v98 + 16) = *(_QWORD *)&v215[16];
                    *(__m128i *)(v97 + 8 * v98) = _mm_loadu_si128((const __m128i *)v215);
                    v211 = v96 + 1;
                  }
                  if ( v216.m256i_i64[2] == v218 )
                  {
                    v99 = v216.m256i_i64[1];
                    if ( !(unsigned int)sub_1418F4B70(v216.m256i_i64[1], v191) )
                    {
                      v73 = v209;
                      v71 = v210;
                      v72 = v211;
                      if ( v216.m256i_i64[0] )
                        sub_140001660(v99, v216.m256i_i64[0], 1);
                      v229 = 0;
                      v217 = -1;
                      sub_14002F9D0(&v192);
LABEL_145:
                      v223 = 0;
                      sub_140370B80(&v199);
                      sub_140383750(&v181);
                      v230 = 1;
                      sub_14002F9D0(&v202[8]);
LABEL_150:
                      v121 = v71 + 24 * v72;
                      *(_QWORD *)v215 = v71;
                      *(_QWORD *)&v215[8] = v71;
                      *(_QWORD *)&v215[16] = v73;
                      *(_QWORD *)&v215[24] = v121;
                      if ( v71 == v121 )
                      {
LABEL_160:
                        v222 = 1;
                        sub_140383620(v215);
                        v39 = v208;
                        v41 = v214;
                        if ( v217 == -1 )
                        {
                          if ( v206.m128i_i64[0] )
                            sub_140001660(v206.m128i_i64[1], v206.m128i_i64[0], 1);
                        }
                        else
                        {
                          *(_QWORD *)v213 = v217;
                          *(_QWORD *)&v213[8] = v212;
                          *(_QWORD *)&v213[16] = v194;
                          v128 = (unsigned __int8)(v219 - 5) < 3u;
                          v218 = v206.m128i_u64[1];
                          v220 = v206.m128i_i64[0];
                          v129 = v207;
                          v130 = 8 * (unsigned int)(unsigned __int8)v219;
                          if ( v194 )
                          {
                            v131 = *(__int64 *)((char *)&off_141A72CA8 + v130);
                            v132 = *(_QWORD *)((char *)&unk_141A72CF0 + v130);
                            v199.m256i_i64[0] = v131;
                            v199.m256i_i64[1] = v132;
                            *(_QWORD *)v202 = &v199;
                            *(_QWORD *)&v202[8] = sub_140186EE0;
                            *(_QWORD *)&v202[16] = v213;
                            v203 = sub_1400015F0;
                            sub_1416ABFD0(&v189, &unk_141A68FE3, v202);
                          }
                          else
                          {
                            v133 = *(const __m128i **)((char *)&off_141A72CA8 + v130);
                            v134 = *(_QWORD *)((char *)&unk_141A72CF0 + v130);
                            sub_14072C410((unsigned int)v202, v134, 0, 1, 1);
                            v135 = *(_QWORD *)&v202[8];
                            if ( v202[0] )
                              sub_141938D2B(*(_QWORD *)&v202[8], *(_QWORD *)&v202[16]);
                            v136 = *(_QWORD *)&v202[16];
                            sub_1418F44E0(*(__m128i **)&v202[16], v133, v134);
                            v189 = v135;
                            *(_QWORD *)&v190 = v136;
                            *((_QWORD *)&v190 + 1) = v134;
                            v39 = v208;
                            v41 = v214;
                          }
                          *(_QWORD *)v215 = v220;
                          *(_QWORD *)&v215[8] = v218;
                          *(_QWORD *)&v215[16] = v129;
                          *(_QWORD *)&v215[24] = v189;
                          *(_OWORD *)&v215[32] = v190;
                          v137 = *((_QWORD *)&v197 + 1);
                          if ( *((_QWORD *)&v197 + 1) == v196.m128i_i64[1] )
                            sub_14190F490(&v196.m128i_u64[1]);
                          v138 = v197;
                          v139 = 48 * v137;
                          v140 = _mm_loadu_si128((const __m128i *)v215);
                          v141 = _mm_loadu_si128((const __m128i *)&v215[16]);
                          *(_OWORD *)(v197 + v139 + 32) = *(_OWORD *)&v215[32];
                          *(__m128i *)(v138 + v139 + 16) = v141;
                          *(__m128i *)(v138 + v139) = v140;
                          *((_QWORD *)&v197 + 1) = v137 + 1;
                          if ( *(_QWORD *)v213 )
                            sub_140001660(*(_QWORD *)&v213[8], *(_QWORD *)v213, 1);
                          v142 = v193;
                          LOBYTE(v142) = v128 | v193;
                          v193 = v142;
                        }
                        goto LABEL_68;
                      }
                      while ( 1 )
                      {
                        v122 = v71 + 24;
                        *(_QWORD *)&v215[8] = v71 + 24;
                        v123 = *(_QWORD *)v71;
                        *(__m128i *)v199.m256i_i8 = _mm_loadu_si128((const __m128i *)(v71 + 8));
                        if ( v123 == -1 )
                          goto LABEL_160;
                        v220 = v123;
                        *(_QWORD *)v213 = v123;
                        *(__m128i *)&v213[8] = _mm_load_si128((const __m128i *)&v199);
                        v221 = 1;
                        sub_1416AC440(v202, v213);
                        v221 = 1;
                        if ( (unsigned __int8)sub_1403AAB80(&v186, v202) )
                        {
                          if ( v220 )
                          {
                            sub_140001660(*(_QWORD *)&v213[8], v220, 1);
                            v71 += 24;
                            if ( v122 == v121 )
                              goto LABEL_160;
                            continue;
                          }
                        }
                        else
                        {
                          v218 = *(_QWORD *)&v213[8];
                          v124 = *(_QWORD *)&v213[16];
                          v125 = v196.m128i_i64[0];
                          if ( v196.m128i_i64[0] == v195.m128i_i64[0] )
                            sub_14190FDC0(&v195);
                          v126 = v195.m128i_i64[1];
                          v127 = 3 * v125;
                          *(_QWORD *)(v195.m128i_i64[1] + 8 * v127) = v220;
                          *(_QWORD *)(v126 + 8 * v127 + 8) = v218;
                          *(_QWORD *)(v126 + 8 * v127 + 16) = v124;
                          v196.m128i_i64[0] = v125 + 1;
                        }
                        v71 = v122;
                        if ( v122 == v121 )
                          goto LABEL_160;
                      }
                    }
                  }
                  if ( v216.m256i_i64[0] )
                    sub_140001660(v216.m256i_i64[1], v216.m256i_i64[0], 1);
                }
              }
            }
          }
        }
        v229 = 1;
        sub_14002F9D0(&v192);
        v82 = v88;
        v88 = v83;
        if ( v82 != v83 )
          goto LABEL_96;
      }
      *(_QWORD *)&v213[79] = *(_QWORD *)&v215[88];
      v101 = _mm_loadu_si128((const __m128i *)&v215[56]);
      *(_OWORD *)&v213[63] = *(_OWORD *)&v215[72];
      *(__m128i *)&v213[47] = v101;
      *(_OWORD *)&v213[31] = *(_OWORD *)&v215[40];
      *(_OWORD *)v213 = *(_OWORD *)v198;
      *(__m128i *)&v213[15] = _mm_loadu_si128((const __m128i *)&v198[15]);
LABEL_132:
      *(_QWORD *)v215 = v92;
      v215[8] = v89;
      *(_QWORD *)&v215[88] = *(_QWORD *)&v213[79];
      *(_OWORD *)&v215[73] = *(_OWORD *)&v213[64];
      v105 = _mm_load_si128((const __m128i *)v213);
      v106 = _mm_load_si128((const __m128i *)&v213[16]);
      *(_OWORD *)&v215[57] = *(_OWORD *)&v213[48];
      *(_OWORD *)&v215[41] = *(_OWORD *)&v213[32];
      *(__m128i *)&v215[25] = v106;
      *(__m128i *)&v215[9] = v105;
      *(_QWORD *)v198 = 0;
      *(_QWORD *)&v198[8] = 1;
      *(_QWORD *)&v198[16] = 0;
      v216.m256i_i64[2] = 1610612768;
      v216.m256i_i64[0] = (__int64)v198;
      v216.m256i_i64[1] = (__int64)&off_141A72708;
      v107 = sub_14104A7D0(v215, &v216);
      v109 = v218;
      v110 = v191;
      if ( v107 )
        sub_141939040(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v226,
          (unsigned int)&unk_141A6D618,
          (__int64)&off_141A727C0);
      v217 = *(_QWORD *)v198;
      v111 = *(_QWORD *)&v198[16];
      v212 = *(_QWORD *)&v198[8];
      LOBYTE(v108) = 7;
      sub_141010840(
        (unsigned int)aNotifications,
        13,
        v108,
        0,
        (__int64)aThreadDeleted,
        *(__int64 *)&v198[8],
        *(__int64 *)&v198[16]);
      sub_14072C410((unsigned int)&v216, v109, 0, 1, 1);
      v112 = v216.m256i_i64[1];
      if ( v216.m256i_i32[0] == 1 )
        sub_141938D2B(v216.m256i_i64[1], v216.m256i_i64[2]);
      v113 = v216.m256i_i64[2];
      if ( v109 )
        sub_1418F44E0((__m128i *)v216.m256i_i64[2], v110, v109);
      v216.m256i_i64[0] = v112;
      v216.m256i_i64[1] = v113;
      v216.m256i_i64[2] = v109;
      v114 = sub_1403AAB80(&v199, &v216);
      v194 = v111;
      if ( v114 )
      {
        v72 = v211;
      }
      else
      {
        sub_14072C410((unsigned int)&v216, v109, 0, 1, 1);
        if ( v216.m256i_i8[0] )
          sub_141938D2B(v216.m256i_i64[1], v216.m256i_i64[2]);
        v115 = v216.m256i_i64[2];
        v220 = v216.m256i_i64[1];
        if ( v109 )
          sub_1418F44E0((__m128i *)v216.m256i_i64[2], v110, v109);
        v219 = v115;
        v116 = v211;
        if ( v211 == v209 )
          sub_14190FDC0(&v209);
        v117 = v210;
        v118 = 3 * v116;
        *(_QWORD *)(v210 + 8 * v118) = v220;
        *(_QWORD *)(v117 + 8 * v118 + 8) = v219;
        *(_QWORD *)(v117 + 8 * v118 + 16) = v109;
        v72 = v116 + 1;
        v211 = v72;
      }
      v73 = v209;
      v71 = v210;
      v229 = 0;
      v119 = sub_140FA5040(v215);
      LOBYTE(v119) = 7;
      v219 = v119;
      goto LABEL_145;
    }
    if ( *(_QWORD *)v202 != -1 )
    {
      LOBYTE(v79) = 6;
      v219 = v79;
      v220 = 13;
      v100 = "rpc_transport";
LABEL_147:
      v103 = 0;
      goto LABEL_148;
    }
    v74 = *(_QWORD *)&v202[16];
    v102 = 12;
    v220 = 12;
    if ( *(_QWORD *)&v202[8] != 1 )
    {
      LOBYTE(v102) = 6;
      v219 = v102;
      v100 = "rpc_rejectedrpc_transport";
      goto LABEL_147;
    }
    LOBYTE(v102) = 6;
    v219 = v102;
    v103 = 1;
    if ( *(_QWORD *)&v202[16] != -32600 )
    {
      if ( *(_QWORD *)&v202[16] == -32601 )
      {
        LOBYTE(v102) = 5;
LABEL_130:
        v219 = v102;
        v100 = "rpc_rejectedrpc_transport";
LABEL_148:
        v228 = 0;
        sub_140C19500(v215, v202, aThreadDelete, 13);
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        *(_QWORD *)&v213[16] = 1610612768;
        *(_QWORD *)v213 = &v199;
        *(_QWORD *)&v213[8] = &off_141A72708;
        if ( (unsigned __int8)sub_14104A7D0(v215, v213) )
          sub_141939040(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v226,
            (unsigned int)&unk_141A6D618,
            (__int64)&off_141A727C0);
        v212 = v199.m256i_i64[1];
        v217 = v199.m256i_i64[0];
        v120 = v199.m256i_i64[2];
        sub_140FA5040(v215);
        sub_141010840((_DWORD)v100, v220, v219, v103, v74, v212, v120);
        v194 = v120;
        v71 = 8;
        v73 = 0;
        v72 = 0;
        goto LABEL_150;
      }
      goto LABEL_174;
    }
    v143 = v204;
    v144 = v205;
    v228 = 1;
    v74 = -32600;
    if ( (unsigned __int8)sub_141059410(
                            "already has an active writerforked history still references itthread is not persisted and ca"
                            "nnot be deleted:",
                            28,
                            v204,
                            v205) )
    {
      v219 = 0;
      goto LABEL_174;
    }
    if ( v144 < 0x23 )
    {
      if ( v144 == 34 )
      {
        v102 = sub_1418F4B70("forked history still references itthread is not persisted and cannot be deleted:", v143);
        if ( (_DWORD)v102 )
        {
          v102 = (unsigned int)_mm_movemask_epi8(
                                 _mm_and_si128(
                                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v143 + 16)), v43),
                                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v143), si128)));
          if ( (_DWORD)v102 == 0xFFFF )
          {
            LOBYTE(v102) = 2;
          }
          else
          {
            v102 = (unsigned int)_mm_movemask_epi8(
                                   _mm_and_si128(
                                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v143), v45),
                                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v143 + 15)), v44)));
            LOBYTE(v102) = (4 * ((_DWORD)v102 != 0xFFFF)) | 2;
          }
        }
        else
        {
          LODWORD(v102) = 1;
        }
        goto LABEL_130;
      }
      if ( v144 < 0x11 )
      {
LABEL_174:
        v100 = "rpc_rejectedrpc_transport";
        goto LABEL_148;
      }
    }
    else
    {
      v228 = 1;
      sub_1416B2790(
        (unsigned int)v215,
        v143,
        v144,
        (unsigned int)"forked history still references itthread is not persisted and cannot be deleted:",
        34);
      v228 = 1;
      v145 = sub_141059840(v213, v215);
      if ( v213[0] )
      {
        v100 = "rpc_rejectedrpc_transport";
        LOBYTE(v145) = 1;
LABEL_190:
        v219 = v145;
        goto LABEL_148;
      }
    }
    v145 = (unsigned int)_mm_movemask_epi8(
                           _mm_and_si128(
                             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v143 + 16)), v43),
                             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v143), si128)));
    if ( (_DWORD)v145 != 0xFFFF )
    {
      if ( v144 < 0x1F )
      {
LABEL_188:
        v100 = "rpc_rejectedrpc_transport";
        goto LABEL_148;
      }
      v145 = (unsigned int)_mm_movemask_epi8(
                             _mm_and_si128(
                               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v143), v45),
                               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v143 + 15)), v44)));
      if ( (_DWORD)v145 != 0xFFFF )
      {
        if ( v144 >= 0x2E )
          v219 = 3
               * (unsigned int)((unsigned int)sub_1418F4B70("thread is not persisted and cannot be deleted:", v143) != 0)
               + 3;
        goto LABEL_188;
      }
    }
    v100 = "rpc_rejectedrpc_transport";
    LOBYTE(v145) = 2;
    goto LABEL_190;
  }
  *(__m128i *)&v215[80] = v160[0];
  *(_OWORD *)&v215[64] = v159;
  *(_OWORD *)&v215[48] = v158;
  *(_OWORD *)&v215[32] = v157;
  *(__m256i *)v215 = v156;
  *(_QWORD *)v213 = v215;
  *(_QWORD *)&v213[8] = sub_14104A7D0;
  sub_1416ABFD0(v202, &unk_141A6CD84, v213);
  *(_OWORD *)&v156.m256i_u64[1] = *(_OWORD *)v202;
  v156.m256i_i64[3] = *(_QWORD *)&v202[16];
  sub_140FA5040(v215);
  v156.m256i_i64[0] = 10;
  *(__m128i *)(a1 + 80) = v160[0];
  *(_OWORD *)(a1 + 64) = v159;
  v6 = _mm_loadu_si128((const __m128i *)&v156);
  v7 = _mm_loadu_si128((const __m128i *)&v156.m256i_u64[2]);
  v8 = v157;
  *(_OWORD *)(a1 + 48) = v158;
  *(_OWORD *)(a1 + 32) = v8;
  *(__m128i *)(a1 + 16) = v7;
  *(__m128i *)a1 = v6;
  return a1;
}
