// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x1409678c0 | successor of pre-update 0x140c429d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.969, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1409678C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // kr00_16
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int128 v27; // kr10_16
  double result; // xmm0_8
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 i; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  char v67; // bl
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  _BYTE *v75; // rcx
  _BYTE *v76; // rbx
  unsigned __int64 v77; // r15
  __m256i *v78; // rdi
  _BYTE *v79; // rax
  bool v80; // zf
  unsigned __int64 v81; // rax
  bool v82; // cl
  __int64 v83; // r13
  unsigned __int64 v84; // r12
  bool v85; // cf
  __int64 v86; // r13
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // r10
  unsigned __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // r13
  __int64 v97; // r15
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r12
  __int64 v102; // r12
  int v103; // eax
  char v104; // cl
  char v105; // al
  unsigned __int64 v106; // rax
  bool v107; // cl
  __int64 v108; // r13
  unsigned __int64 v109; // r12
  __int64 j; // r13
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r10
  unsigned __int64 v117; // r9
  __int64 v118; // rbx
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  _DWORD *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  void *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  void *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  void *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  _OWORD *v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  void *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  void *v144; // rax
  __int64 v145; // r8
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rsi
  _QWORD *v149; // rdi
  void *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  _OWORD *v153; // rax
  __int64 v154; // r8
  __int64 v155; // rsi
  _QWORD *v156; // rdi
  __int64 v157; // rdx
  __int128 v158; // xmm0
  __int128 v159; // xmm1
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rsi
  _QWORD *v163; // rdi
  __int64 v164; // rdx
  __int16 v165; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v166; // [rsp+B2h] [rbp+32h]
  __int32 v167; // [rsp+BAh] [rbp+3Ah]
  __int16 v168; // [rsp+BEh] [rbp+3Eh]
  __int128 v169; // [rsp+C0h] [rbp+40h]
  __int16 v170; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v171; // [rsp+D2h] [rbp+52h]
  __int32 v172; // [rsp+DAh] [rbp+5Ah]
  __int16 v173; // [rsp+DEh] [rbp+5Eh]
  __int128 v174; // [rsp+E0h] [rbp+60h]
  __int64 v175; // [rsp+F0h] [rbp+70h]
  __int64 v176; // [rsp+F8h] [rbp+78h]
  __int64 v177; // [rsp+100h] [rbp+80h]
  __int64 v178; // [rsp+108h] [rbp+88h]
  __int64 v179; // [rsp+110h] [rbp+90h]
  unsigned __int64 v180; // [rsp+118h] [rbp+98h]
  __int64 v181; // [rsp+120h] [rbp+A0h]
  __int64 v182; // [rsp+128h] [rbp+A8h]
  __int128 v183; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v184; // [rsp+140h] [rbp+C0h]
  __m256i v185; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v186; // [rsp+170h] [rbp+F0h] BYREF
  _OWORD *v187; // [rsp+178h] [rbp+F8h]
  __int64 v188; // [rsp+180h] [rbp+100h]
  __int128 v189; // [rsp+188h] [rbp+108h] BYREF
  __int64 v190; // [rsp+198h] [rbp+118h]
  __int64 v191; // [rsp+1A0h] [rbp+120h]
  __int64 v192; // [rsp+1A8h] [rbp+128h]
  _BYTE *v193; // [rsp+1B0h] [rbp+130h]
  __int128 v194; // [rsp+1B8h] [rbp+138h] BYREF
  __m256i v195; // [rsp+1C8h] [rbp+148h] BYREF
  unsigned __int64 v196; // [rsp+1E8h] [rbp+168h]
  __int128 v197; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v198; // [rsp+200h] [rbp+180h]
  char v199; // [rsp+21Fh] [rbp+19Fh] BYREF
  __m256i v200; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v201; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v202; // [rsp+260h] [rbp+1E0h]
  __int128 v203; // [rsp+270h] [rbp+1F0h]
  __int64 v204; // [rsp+280h] [rbp+200h]
  __int128 v205; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v206; // [rsp+2B0h] [rbp+230h]
  char v207; // [rsp+2BAh] [rbp+23Ah]
  char v208; // [rsp+2BBh] [rbp+23Bh]
  char v209; // [rsp+2BCh] [rbp+23Ch]
  char v210; // [rsp+2BDh] [rbp+23Dh]
  char v211; // [rsp+2BEh] [rbp+23Eh]
  char v212; // [rsp+2BFh] [rbp+23Fh]
  __int64 v213; // [rsp+2C0h] [rbp+240h]

  v213 = -2;
  sub_1416C49D0(&v201, a2, a3);
  v7 = v201.m256i_i64[0];
  if ( v201.m256i_i64[0] == 2 && (v201.m256i_i8[8] & 3u) - 2 >= 2 && (v201.m256i_i8[8] & 3) != 0 )
  {
    --v201.m256i_i64[1];
    v201.m256i_i8[0] = 3;
    sub_1416EBAD0(&v201.m256i_u64[1]);
  }
  sub_1416C49D0(&v201, a2, a3);
  v10 = v201.m256i_i64[0];
  if ( v201.m256i_i64[0] == 2 )
  {
    v9 = v201.m256i_i8[8] & 3;
    v8 = (unsigned int)(v9 - 2);
    if ( (unsigned int)v8 >= 2 && (v201.m256i_i8[8] & 3) != 0 )
    {
      --v201.m256i_i64[1];
      v201.m256i_i8[0] = 3;
      sub_1416EBAD0(&v201.m256i_u64[1]);
    }
    if ( (_DWORD)v7 != 2 )
      goto LABEL_10;
LABEL_20:
    *(_QWORD *)&v197 = 0;
    *(_QWORD *)&v198 = 0;
    nullsub_1(v9, v8);
    v20 = sub_140001650(6, 1);
    if ( !v20 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v20 + 4) = 29556;
    *(_DWORD *)v20 = 1936291941;
    v200.m256i_i64[0] = 6;
    v200.m256i_i64[1] = v20;
    v200.m256i_i64[2] = 6;
    v170 = 1;
    *(_OWORD *)&v201.m256i_u64[2] = v174;
    v201.m256i_i16[0] = 1;
    *(__int64 *)((char *)v201.m256i_i64 + 2) = v171;
    *(__int32 *)((char *)&v201.m256i_i32[2] + 2) = v172;
    v201.m256i_i16[7] = v173;
    sub_140A68320(&v194, &v197, &v200, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    nullsub_1(v22, v21);
    v23 = sub_140001650(5, 1);
    if ( !v23 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v23 + 4) = 115;
    *(_DWORD *)v23 = 1702132066;
    v200.m256i_i64[0] = 5;
    v200.m256i_i64[1] = v23;
    v200.m256i_i64[2] = 5;
    v201.m256i_i8[0] = 2 * ((_DWORD)v10 != 2);
    v201.m256i_i64[1] = 0;
    v201.m256i_i64[2] = v3;
    sub_140A68320(&v194, &v197, &v200, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    nullsub_1(v25, v24);
    v26 = (_DWORD *)sub_140001650(7, 1);
    if ( !v26 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v26 + 3) = 1800365427;
    *v26 = 1936875888;
    *(_QWORD *)&v194 = 7;
    *((_QWORD *)&v194 + 1) = v26;
    v195.m256i_i64[0] = 7;
    sub_140A68320(&v201, &v197, &v194, &v170);
    if ( v201.m256i_i8[0] != -1 )
      sub_140032FF0(&v201);
    *(_OWORD *)((char *)&v201.m256i_u32[1] + 3) = v197;
    *(__int64 *)((char *)&v201.m256i_i64[2] + 7) = v198;
    *(_BYTE *)a1 = 5;
    v27 = *(_OWORD *)((char *)&v201.m256i_u64[1] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v201.m256i_i8;
    *(_OWORD *)(a1 + 16) = v27;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 48) = 0;
    return 0.0;
  }
  v3 = *((_QWORD *)&v203 + 1);
  if ( (_DWORD)v7 == 2 )
    goto LABEL_20;
LABEL_10:
  sub_1416CC1A0(&v185, a2, a3);
  if ( v185.m256i_i64[0] != -1 )
  {
    v192 = v185.m256i_i64[0];
    *(_OWORD *)v201.m256i_i8 = *(_OWORD *)&v185.m256i_u64[1];
    *(_OWORD *)&v201.m256i_u64[2] = 0;
    v191 = v185.m256i_i64[1];
    v202 = *(_OWORD *)&v185.m256i_u64[1];
    sub_140D8B500(&v200, (__int128 *)v201.m256i_i8);
    if ( v200.m256i_i8[0] != -1 )
    {
      v185 = v200;
      if ( v200.m256i_i8[0] == 5 )
      {
        v15 = v185.m256i_i64[1];
        if ( v185.m256i_i64[1] )
          v15 = v185.m256i_i64[3];
        *(_OWORD *)v201.m256i_i8 = v185.m256i_i64[1] != 0;
        *(_OWORD *)&v201.m256i_u64[2] = *(_OWORD *)&v185.m256i_u64[1];
        v202 = *(_OWORD *)v201.m256i_i8;
        v203 = *(_OWORD *)&v185.m256i_u64[1];
        v204 = v15;
        sub_140865830(&v197, &v201);
        v7 = v10;
        v16 = v197;
        v17 = v198;
        v18 = v198;
        if ( !(_QWORD)v197 )
          v18 = 0;
        *(_OWORD *)v201.m256i_i8 = (_QWORD)v197 != 0;
        *(_OWORD *)&v201.m256i_u64[2] = v197;
        v202 = *(_OWORD *)v201.m256i_i8;
        v203 = v197;
        v204 = v18;
        sub_140227770(&v200, &v201);
        if ( (_QWORD)v16 )
        {
          v201.m256i_i64[1] = 0;
          *(_OWORD *)&v201.m256i_u64[2] = v16;
          *((_QWORD *)&v202 + 1) = 0;
          v203 = v16;
          v19 = 1;
        }
        else
        {
          v19 = 0;
          v17 = 0;
        }
        v201.m256i_i64[0] = v19;
        *(_QWORD *)&v202 = v19;
        v204 = v17;
        sub_140A6FD50(&v194, &v201);
        v10 = v7;
        for ( i = v194; (_QWORD)v194; i = v194 )
        {
          v65 = *(_QWORD *)(i + 24 * v195.m256i_i64[0] + 8);
          if ( v65 )
            sub_140001660(*(_QWORD *)(i + 24 * v195.m256i_i64[0] + 16), v65, 1);
          sub_140A6FD50(&v194, &v201);
        }
        v183 = *(_OWORD *)v200.m256i_i8;
        v184 = v200.m256i_i64[2];
      }
      else
      {
        *(_QWORD *)&v183 = 0;
        *((_QWORD *)&v183 + 1) = 8;
        v184 = 0;
      }
      v66 = sub_1416724D0(aClientVersion, 14, &v185);
      if ( v66 )
      {
        v67 = *(_BYTE *)v66;
        switch ( *(_BYTE *)v66 )
        {
          case 0:
            break;
          case 1:
            v201.m256i_i8[1] = *(_BYTE *)(v66 + 1);
            break;
          case 2:
            *(_OWORD *)&v201.m256i_u64[1] = *(_OWORD *)(v66 + 8);
            break;
          case 3:
            sub_1416DB410(&v201.m256i_u64[1], v66 + 8);
            break;
          case 4:
            sub_1401C07A0(&v201.m256i_u64[1], *(_QWORD *)(v66 + 16), *(_QWORD *)(v66 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v66 + 24) )
            {
              v72 = *(_QWORD *)(v66 + 8);
              if ( !v72 )
                sub_14196B5D0(&off_141A6CB98);
              sub_140A21590(&v201.m256i_u64[1], v72, *(_QWORD *)(v66 + 16));
            }
            else
            {
              v201.m256i_i64[1] = 0;
              v201.m256i_i64[3] = 0;
            }
            break;
        }
        v198 = *(_OWORD *)&v201.m256i_u64[2];
        LOBYTE(v197) = v67;
        BYTE1(v197) = v201.m256i_i8[1];
        *(_DWORD *)((char *)&v197 + 2) = *(__int32 *)((char *)v201.m256i_i32 + 2);
        WORD3(v197) = v201.m256i_i16[3];
        *((_QWORD *)&v197 + 1) = v201.m256i_i64[1];
        v201.m256i_i8[0] = 0;
        sub_140032FF0(&v201);
      }
      else
      {
        v201.m256i_i8[0] = 0;
        v198 = *(_OWORD *)&v201.m256i_u64[2];
        LOBYTE(v197) = 0;
        *(_QWORD *)((char *)&v197 + 1) = *(__int64 *)((char *)v201.m256i_i64 + 1);
        *(_DWORD *)((char *)&v197 + 9) = *(__int32 *)((char *)&v201.m256i_i32[2] + 1);
        *(_WORD *)((char *)&v197 + 13) = *(__int16 *)((char *)&v201.m256i_i16[6] + 1);
        HIBYTE(v197) = v201.m256i_i8[15];
      }
      v73 = sub_1416724D0(aModels_2, 6, &v185);
      if ( v73 && *(_BYTE *)v73 == 4 )
      {
        v176 = v3;
        v175 = a1;
        v196 = *(_QWORD *)(v73 + 24);
        *(_QWORD *)&v194 = 0;
        v195.m256i_i64[3] = 0;
        *(_OWORD *)v195.m256i_i8 = 0;
        v76 = *(_BYTE **)(v73 + 16);
        v75 = &v76[32 * *(_QWORD *)(v73 + 24)];
        v77 = 0;
        v78 = &v201;
        v181 = 0;
LABEL_100:
        v79 = v76;
        a1 = v175;
        v3 = v176;
        while ( v79 != v75 )
        {
          v76 = v79 + 32;
          v80 = *v79 == 5;
          v79 += 32;
          if ( v80 )
          {
            v193 = v75;
            v81 = *((_QWORD *)v76 - 3);
            v82 = v81 != 0;
            if ( v81 )
            {
              v7 = *((_QWORD *)v76 - 2);
              v83 = *((_QWORD *)v76 - 1);
            }
            else
            {
              v83 = 0;
            }
            ++v77;
            v84 = 0;
            v85 = v83 == 0;
            v86 = v83 - 1;
            if ( !v85 )
            {
              while ( 1 )
              {
                if ( !v82 )
                  sub_14196B5D0(&off_141A6D6E0);
                if ( v84 )
                {
                  if ( v7 < *(unsigned __int16 *)(v84 + 626) )
                    goto LABEL_110;
                  goto LABEL_121;
                }
                if ( !v7 )
                {
                  v84 = v81;
                  goto LABEL_120;
                }
                v84 = v81;
                if ( (v7 & 7) == 0 )
                  break;
                v89 = 0;
                do
                {
                  v84 = *(_QWORD *)(v84 + 632);
                  ++v89;
                }
                while ( (v7 & 7) != v89 );
                v90 = v7 - v89;
                if ( v7 >= 8 )
                  goto LABEL_119;
LABEL_120:
                v7 = 0;
                v81 = 0;
                if ( *(_WORD *)(v84 + 626) )
                {
LABEL_110:
                  v87 = v84;
                  v88 = v7;
                  goto LABEL_123;
                }
                do
                {
LABEL_121:
                  v87 = *(_QWORD *)(v84 + 352);
                  if ( !v87 )
                    sub_14196B5D0(&off_141A695C8);
                  ++v81;
                  v88 = *(unsigned __int16 *)(v84 + 624);
                  v84 = *(_QWORD *)(v84 + 352);
                }
                while ( (unsigned __int16)v88 >= *(_WORD *)(v87 + 626) );
LABEL_123:
                if ( !v81 )
                {
                  v7 = v88 + 1;
                  v84 = v87;
                  goto LABEL_131;
                }
                v91 = v87 + 8 * v88 + 640;
                if ( (v81 & 7) != 0 )
                {
                  v92 = 0;
                  do
                  {
                    v84 = *(_QWORD *)v91;
                    v91 = *(_QWORD *)v91 + 632LL;
                    ++v92;
                  }
                  while ( (v81 & 7) != v92 );
                  v93 = v81 - v92;
                  if ( v81 < 8 )
                    goto LABEL_129;
                  do
                  {
LABEL_128:
                    v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v91 + 632LL)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL);
                    v91 = v84 + 632;
                    v93 -= 8LL;
                  }
                  while ( v93 );
                  goto LABEL_129;
                }
                v93 = v81;
                if ( v81 >= 8 )
                  goto LABEL_128;
LABEL_129:
                v7 = 0;
LABEL_131:
                sub_1416DB410(v78, v87 + 24 * v88 + 360);
                sub_140A67680(&v194, v78);
                v82 = 1;
                v81 = 0;
                v85 = v86-- == 0;
                if ( v85 )
                  goto LABEL_135;
              }
              v90 = v7;
              if ( v7 < 8 )
                goto LABEL_120;
              do
              {
LABEL_119:
                v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v84 + 632) + 632LL)
                                                                                            + 632LL)
                                                                                + 632LL)
                                                                    + 632LL)
                                                        + 632LL)
                                            + 632LL)
                                + 632LL);
                v90 -= 8LL;
              }
              while ( v90 );
              goto LABEL_120;
            }
LABEL_135:
            v74 = *((_QWORD *)v76 - 3);
            v75 = v193;
            if ( v74 )
            {
              v180 = v77;
              v182 = v10;
              v179 = *((_QWORD *)v76 - 2);
              while ( 2 )
              {
                v94 = v74 + 360;
                v95 = *(unsigned __int16 *)(v74 + 626);
                v177 = v74;
                v96 = (_QWORD *)(v74 - 8);
                v178 = v95;
                v97 = 3LL * (unsigned int)(8 * v95);
                v98 = -1;
                do
                {
                  if ( !v97 )
                  {
                    v98 = v178;
                    v77 = v180;
                    goto LABEL_147;
                  }
                  v7 = (unsigned __int64)v78;
                  v99 = v94 + 24;
                  v100 = *(_QWORD *)(v94 + 16);
                  v101 = v100 - 4;
                  if ( v100 >= 4 )
                    v100 = 4;
                  v102 = -(__int64)v101;
                  v103 = sub_141923B40(&unk_141A5C7E9, *(_QWORD *)(v94 + 8), v100);
                  if ( v103 )
                    v102 = v103;
                  v104 = (v102 > 0) - (v102 < 0);
                  v96 += 4;
                  ++v98;
                  v97 -= 24;
                  v94 = v99;
                  v78 = (__m256i *)v7;
                }
                while ( v104 == 1 );
                v77 = v180;
                if ( !v104 )
                {
                  v10 = v182;
                  v75 = v193;
                  if ( *((_BYTE *)v96 - 24) == 3 )
                  {
                    v105 = sub_140A09D60(asc_141A5B788, 2, *(v96 - 1), *v96);
                    v75 = v193;
                    if ( v105 )
                    {
                      v106 = *((_QWORD *)v76 - 3);
                      v107 = v106 != 0;
                      if ( v106 )
                      {
                        v7 = *((_QWORD *)v76 - 2);
                        v108 = *((_QWORD *)v76 - 1);
                      }
                      else
                      {
                        v108 = 0;
                      }
                      ++v181;
                      v109 = 0;
                      v85 = v108 == 0;
                      for ( j = v108 - 1; !v85; --j )
                      {
                        if ( !v107 )
                          sub_14196B5D0(&off_141A6D6E0);
                        if ( !v109 )
                        {
                          if ( v7 )
                          {
                            v109 = v106;
                            if ( (v7 & 7) != 0 )
                            {
                              v111 = 0;
                              do
                              {
                                v109 = *(_QWORD *)(v109 + 632);
                                ++v111;
                              }
                              while ( (v7 & 7) != v111 );
                              v112 = v7 - v111;
                            }
                            else
                            {
                              v112 = v7;
                            }
                            if ( v7 >= 8 )
                            {
                              do
                              {
                                v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 + 632) + 632LL) + 632LL)
                                                                                                 + 632LL)
                                                                                     + 632LL)
                                                                         + 632LL)
                                                             + 632LL)
                                                 + 632LL);
                                v112 -= 8LL;
                              }
                              while ( v112 );
                            }
                          }
                          else
                          {
                            v109 = v106;
                          }
                          v7 = 0;
                          v106 = 0;
                        }
                        if ( v7 >= *(unsigned __int16 *)(v109 + 626) )
                        {
                          do
                          {
                            v113 = *(_QWORD *)(v109 + 352);
                            if ( !v113 )
                              sub_14196B5D0(&off_141A695C8);
                            ++v106;
                            v114 = *(unsigned __int16 *)(v109 + 624);
                            v109 = *(_QWORD *)(v109 + 352);
                          }
                          while ( (unsigned __int16)v114 >= *(_WORD *)(v113 + 626) );
                        }
                        else
                        {
                          v113 = v109;
                          v114 = v7;
                        }
                        if ( v106 )
                        {
                          v115 = v113 + 8 * v114 + 640;
                          if ( (v106 & 7) != 0 )
                          {
                            v116 = 0;
                            do
                            {
                              v109 = *(_QWORD *)v115;
                              v115 = *(_QWORD *)v115 + 632LL;
                              ++v116;
                            }
                            while ( (v106 & 7) != v116 );
                            v117 = v106 - v116;
                          }
                          else
                          {
                            v117 = v106;
                          }
                          if ( v106 >= 8 )
                          {
                            do
                            {
                              v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v115 + 632LL) + 632LL)
                                                                                               + 632LL)
                                                                                   + 632LL)
                                                                       + 632LL)
                                                           + 632LL)
                                               + 632LL);
                              v115 = v109 + 632;
                              v117 -= 8LL;
                            }
                            while ( v117 );
                          }
                          v7 = 0;
                        }
                        else
                        {
                          v7 = v114 + 1;
                          v109 = v113;
                        }
                        sub_1416DB410(v78, v113 + 24 * v114 + 360);
                        sub_140A67680(&v195.m256i_u64[1], v78);
                        v107 = 1;
                        v106 = 0;
                        v85 = j == 0;
                      }
                      v75 = v193;
                    }
                  }
                  goto LABEL_100;
                }
LABEL_147:
                v75 = v193;
                v74 = v177;
                if ( v179 )
                {
                  --v179;
                  v74 = *(_QWORD *)(v177 + 8 * v98 + 632);
                  continue;
                }
                break;
              }
              v10 = v182;
            }
            goto LABEL_100;
          }
        }
        v119 = 0;
        if ( v196 >= v77 )
          v119 = v196 - v77;
        v118 = v181;
      }
      else
      {
        *(_QWORD *)&v194 = 0;
        v195.m256i_i64[3] = 0;
        *(_OWORD *)v195.m256i_i8 = 0;
        v196 = 0;
        v118 = 0;
        v77 = 0;
        v119 = 0;
      }
      *(_QWORD *)&v189 = 0;
      v190 = 0;
      nullsub_1(v75, v74);
      v120 = sub_140001650(6, 1);
      if ( !v120 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v120 + 4) = 29556;
      *(_DWORD *)v120 = 1936291941;
      *(_QWORD *)&v205 = 6;
      *((_QWORD *)&v205 + 1) = v120;
      v206 = 6;
      v165 = 257;
      *(_OWORD *)&v201.m256i_u64[2] = v169;
      v201.m256i_i16[0] = 257;
      *(__int64 *)((char *)v201.m256i_i64 + 2) = v166;
      *(__int32 *)((char *)&v201.m256i_i32[2] + 2) = v167;
      v201.m256i_i16[7] = v168;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v122, v121);
      v123 = sub_140001650(5, 1);
      if ( !v123 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v123 + 4) = 115;
      *(_DWORD *)v123 = 1702132066;
      *(_QWORD *)&v205 = 5;
      *((_QWORD *)&v205 + 1) = v123;
      v206 = 5;
      v201.m256i_i8[0] = 2 * ((_DWORD)v10 != 2);
      v201.m256i_i64[1] = 0;
      v201.m256i_i64[2] = v3;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v125, v124);
      v126 = (_DWORD *)sub_140001650(7, 1);
      if ( !v126 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v126 + 3) = 1800365427;
      *v126 = 1936875888;
      v200.m256i_i64[0] = 7;
      v200.m256i_i64[1] = (__int64)v126;
      v200.m256i_i64[2] = 7;
      sub_140A68320(&v201, &v189, &v200, &v165);
      if ( v201.m256i_i8[0] != -1 )
        sub_140032FF0(&v201);
      nullsub_1(v128, v127);
      v129 = (void *)sub_140001650(10, 1);
      if ( !v129 )
        sub_14196B2DB(1, 10);
      qmemcpy(v129, "rootFields", 10);
      *(_QWORD *)&v205 = 10;
      *((_QWORD *)&v205 + 1) = v129;
      v206 = 10;
      v212 = 1;
      sub_1407B3FB0(&v201, &v183);
      if ( v201.m256i_i8[0] == -1 )
      {
        v200.m256i_i64[0] = v201.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v200,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C7F0);
      }
      v200 = v201;
      v212 = 0;
      sub_140A68320(&v201, &v189, &v205, &v200);
      if ( v201.m256i_i8[0] != -1 )
        sub_140032FF0(&v201);
      nullsub_1(v131, v130);
      v132 = (void *)sub_140001650(13, 1);
      if ( !v132 )
        sub_14196B2DB(1, 13);
      qmemcpy(v132, "clientVersion", 13);
      *(_QWORD *)&v205 = 13;
      *((_QWORD *)&v205 + 1) = v132;
      v206 = 13;
      v211 = 1;
      sub_140B73E90(&v201, &v197);
      if ( v201.m256i_i8[0] == -1 )
      {
        v200.m256i_i64[0] = v201.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v200,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C7F0);
      }
      v200 = v201;
      v211 = 0;
      sub_140A68320(&v201, &v189, &v205, &v200);
      if ( v201.m256i_i8[0] != -1 )
        sub_140032FF0(&v201);
      nullsub_1(v134, v133);
      v135 = (void *)sub_140001650(11, 1);
      if ( !v135 )
        sub_14196B2DB(1, 11);
      qmemcpy(v135, "modelsCount", 11);
      *(_QWORD *)&v205 = 11;
      *((_QWORD *)&v205 + 1) = v135;
      v206 = 11;
      v201.m256i_i8[0] = 2;
      v201.m256i_i64[1] = 0;
      v201.m256i_i64[2] = v196;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v137, v136);
      v138 = (_OWORD *)sub_140001650(16, 1);
      if ( !v138 )
        sub_14196B2DB(1, 16);
      *v138 = xmmword_141A5C808;
      *(_QWORD *)&v205 = 16;
      *((_QWORD *)&v205 + 1) = v138;
      v206 = 16;
      v201.m256i_i8[0] = 2;
      v201.m256i_i64[1] = 0;
      v201.m256i_i64[2] = v77;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v140, v139);
      v141 = (void *)sub_140001650(19, 1);
      if ( !v141 )
        sub_14196B2DB(1, 19);
      qmemcpy(v141, "nonObjectModelCount", 19);
      *(_QWORD *)&v205 = 19;
      *((_QWORD *)&v205 + 1) = v141;
      v206 = 19;
      v201.m256i_i8[0] = 2;
      v201.m256i_i64[1] = 0;
      v201.m256i_i64[2] = v119;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v143, v142);
      v144 = (void *)sub_140001650(11, 1);
      if ( !v144 )
        sub_14196B2DB(1, 11);
      qmemcpy(v144, "modelFields", 11);
      v186 = 11;
      v196 = (unsigned __int64)v144;
      v187 = v144;
      v188 = 11;
      v145 = v194;
      if ( (_QWORD)v194 )
        v145 = v195.m256i_i64[0];
      *(_OWORD *)v201.m256i_i8 = (_QWORD)v194 != 0;
      *(_OWORD *)&v201.m256i_u64[2] = v194;
      v202 = *(_OWORD *)v201.m256i_i8;
      v203 = v194;
      v204 = v145;
      sub_140227770(&v205, &v201);
      v210 = 1;
      sub_1407B3FB0(&v201, &v205);
      if ( v201.m256i_i8[0] == -1 )
      {
        v200.m256i_i64[0] = v201.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v200,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C7F0);
      }
      v200 = v201;
      v210 = 0;
      sub_140A68320(&v201, &v189, &v186, &v200);
      if ( v201.m256i_i8[0] != -1 )
        sub_140032FF0(&v201);
      v148 = v206;
      if ( v206 )
      {
        v149 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
        do
        {
          v146 = *(v149 - 1);
          if ( v146 )
            sub_140001660(*v149, v146, 1);
          v149 += 3;
          --v148;
        }
        while ( v148 );
      }
      if ( (_QWORD)v205 )
        sub_140001660(*((_QWORD *)&v205 + 1), 24 * v205, 8);
      nullsub_1(v147, v146);
      v150 = (void *)sub_140001650(15, 1);
      if ( !v150 )
        sub_14196B2DB(1, 15);
      qmemcpy(v150, "relayModelCount", 15);
      *(_QWORD *)&v205 = 15;
      *((_QWORD *)&v205 + 1) = v150;
      v206 = 15;
      v201.m256i_i8[0] = 2;
      v201.m256i_i64[1] = 0;
      v201.m256i_i64[2] = v118;
      sub_140A68320(&v200, &v189, &v205, &v201);
      if ( v200.m256i_i8[0] != -1 )
        sub_140032FF0(&v200);
      nullsub_1(v152, v151);
      v153 = (_OWORD *)sub_140001650(16, 1);
      if ( !v153 )
        sub_14196B2DB(1, 16);
      *v153 = xmmword_141A5C82B;
      v186 = 16;
      v196 = (unsigned __int64)v153;
      v187 = v153;
      v188 = 16;
      v154 = v195.m256i_i64[1];
      if ( v195.m256i_i64[1] )
        v154 = v195.m256i_i64[3];
      *(_OWORD *)v201.m256i_i8 = v195.m256i_i64[1] != 0;
      *(_OWORD *)&v201.m256i_u64[2] = *(_OWORD *)&v195.m256i_u64[1];
      v202 = *(_OWORD *)v201.m256i_i8;
      v203 = *(_OWORD *)&v195.m256i_u64[1];
      v204 = v154;
      sub_140227770(&v205, &v201);
      v209 = 1;
      sub_1407B3FB0(&v201, &v205);
      if ( v201.m256i_i8[0] == -1 )
      {
        v200.m256i_i64[0] = v201.m256i_i64[1];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v200,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C7F0);
      }
      v200 = v201;
      v209 = 0;
      sub_140A68320(&v201, &v189, &v186, &v200);
      if ( v201.m256i_i8[0] != -1 )
        sub_140032FF0(&v201);
      v155 = v206;
      if ( v206 )
      {
        v156 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
        do
        {
          v157 = *(v156 - 1);
          if ( v157 )
            sub_140001660(*v156, v157, 1);
          v156 += 3;
          --v155;
        }
        while ( v155 );
      }
      if ( (_QWORD)v205 )
        sub_140001660(*((_QWORD *)&v205 + 1), 24 * v205, 8);
      *(_OWORD *)((char *)&v201.m256i_u32[1] + 3) = v189;
      *(__int64 *)((char *)&v201.m256i_i64[2] + 7) = v190;
      v158 = v194;
      v159 = *(_OWORD *)v195.m256i_i8;
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v195.m256i_u64[2];
      *(_OWORD *)(a1 + 48) = v159;
      *(_OWORD *)(a1 + 32) = v158;
      *(_BYTE *)a1 = 5;
      result = *(double *)v201.m256i_i64;
      v160 = *(__int64 *)((char *)&v201.m256i_i64[1] + 7);
      v161 = *(__int64 *)((char *)&v201.m256i_i64[2] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v201.m256i_i8;
      *(_QWORD *)(a1 + 16) = v160;
      *(_QWORD *)(a1 + 24) = v161;
      sub_140032FF0(&v197);
      v162 = v184;
      if ( v184 )
      {
        v163 = (_QWORD *)(*((_QWORD *)&v183 + 1) + 8LL);
        do
        {
          v164 = *(v163 - 1);
          if ( v164 )
            result = sub_140001660(*v163, v164, 1);
          v163 += 3;
          --v162;
        }
        while ( v162 );
      }
      if ( (_QWORD)v183 )
        result = sub_140001660(*((_QWORD *)&v183 + 1), 24 * v183, 8);
      sub_140032FF0(&v185);
      goto LABEL_251;
    }
    v186 = v200.m256i_i64[1];
    *(_QWORD *)&v205 = 0;
    v206 = 0;
    nullsub_1(v14, v13);
    v45 = sub_140001650(6, 1);
    if ( !v45 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v45 + 4) = 29556;
    *(_DWORD *)v45 = 1936291941;
    *(_QWORD *)&v197 = 6;
    *((_QWORD *)&v197 + 1) = v45;
    *(_QWORD *)&v198 = 6;
    v201.m256i_i16[0] = 257;
    sub_140A68320(&v194, &v205, &v197, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    nullsub_1(v47, v46);
    v48 = sub_140001650(5, 1);
    if ( !v48 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v48 + 4) = 115;
    *(_DWORD *)v48 = 1702132066;
    *(_QWORD *)&v197 = 5;
    *((_QWORD *)&v197 + 1) = v48;
    *(_QWORD *)&v198 = 5;
    v201.m256i_i8[0] = 2 * ((_DWORD)v10 != 2);
    v201.m256i_i64[1] = 0;
    v201.m256i_i64[2] = v3;
    sub_140A68320(&v194, &v205, &v197, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    nullsub_1(v50, v49);
    v51 = (_DWORD *)sub_140001650(7, 1);
    if ( !v51 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v51 + 3) = 1800365427;
    *v51 = 1936875888;
    *(_QWORD *)&v197 = 7;
    *((_QWORD *)&v197 + 1) = v51;
    *(_QWORD *)&v198 = 7;
    v201.m256i_i16[0] = 1;
    sub_140A68320(&v194, &v205, &v197, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    nullsub_1(v53, v52);
    v54 = (void *)sub_140001650(10, 1);
    if ( !v54 )
      sub_14196B2DB(1, 10);
    qmemcpy(v54, "parseError", 10);
    *(_QWORD *)&v197 = 10;
    v196 = (unsigned __int64)v54;
    *((_QWORD *)&v197 + 1) = v54;
    *(_QWORD *)&v198 = 10;
    *(_QWORD *)&v194 = 0;
    *((_QWORD *)&v194 + 1) = 1;
    v195.m256i_i64[0] = 0;
    v201.m256i_i64[2] = 1610612768;
    v201.m256i_i64[0] = (__int64)&v194;
    v201.m256i_i64[1] = (__int64)&off_141A66E10;
    if ( (unsigned __int8)sub_14166FAD0(&v186, &v201) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v199,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v57 = *((_QWORD *)&v194 + 1);
    v58 = v195.m256i_i64[0];
    v193 = *((_BYTE **)&v194 + 1);
    v196 = v194;
    if ( v195.m256i_i64[0] < 0 )
    {
      v59 = 0;
      goto LABEL_57;
    }
    if ( v195.m256i_i64[0] )
    {
      nullsub_1(v56, v55);
      v59 = 1;
      v62 = sub_140001650(v58, 1);
      if ( !v62 )
      {
LABEL_57:
        v208 = 1;
        sub_14196B2DB(v59, v58);
      }
      v63 = v62;
      sub_1419234B0(v62, v57, v58);
    }
    else
    {
      v63 = 1;
    }
    v201.m256i_i8[0] = 3;
    v201.m256i_i64[1] = v58;
    v201.m256i_i64[2] = v63;
    v201.m256i_i64[3] = v58;
    v208 = 0;
    sub_140A68320(&v194, &v205, &v197, &v201);
    if ( (_BYTE)v194 != 0xFF )
      sub_140032FF0(&v194);
    if ( v196 )
      sub_140001660(v193, v196, 1);
    *(_OWORD *)((char *)&v201.m256i_u32[1] + 3) = v205;
    *(__int64 *)((char *)&v201.m256i_i64[2] + 7) = v206;
    *(_BYTE *)a1 = 5;
    v70 = *(__int64 *)((char *)&v201.m256i_i64[1] + 7);
    v71 = *(__int64 *)((char *)&v201.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v201.m256i_i8;
    *(_QWORD *)(a1 + 16) = v70;
    *(_QWORD *)(a1 + 24) = v71;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    result = 0.0;
    *(_OWORD *)(a1 + 48) = 0;
    sub_140032F30(&v186);
LABEL_251:
    if ( v192 )
      return sub_140001660(v191, v192, 1);
    return result;
  }
  v29 = v185.m256i_i64[1];
  *(_QWORD *)&v205 = v185.m256i_i64[1];
  *(_QWORD *)&v197 = 0;
  *(_QWORD *)&v198 = 0;
  nullsub_1(v12, v11);
  v30 = sub_140001650(6, 1);
  if ( !v30 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v30 + 4) = 29556;
  *(_DWORD *)v30 = 1936291941;
  v200.m256i_i64[0] = 6;
  v200.m256i_i64[1] = v30;
  v200.m256i_i64[2] = 6;
  v201.m256i_i16[0] = 257;
  sub_140A68320(&v194, &v197, &v200, &v201);
  if ( (_BYTE)v194 != 0xFF )
    sub_140032FF0(&v194);
  nullsub_1(v32, v31);
  v33 = sub_140001650(5, 1);
  if ( !v33 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v33 + 4) = 115;
  *(_DWORD *)v33 = 1702132066;
  v200.m256i_i64[0] = 5;
  v200.m256i_i64[1] = v33;
  v200.m256i_i64[2] = 5;
  v201.m256i_i8[0] = 2 * ((_DWORD)v10 != 2);
  v201.m256i_i64[1] = 0;
  v201.m256i_i64[2] = v3;
  sub_140A68320(&v194, &v197, &v200, &v201);
  if ( (_BYTE)v194 != 0xFF )
    sub_140032FF0(&v194);
  nullsub_1(v35, v34);
  v36 = (_DWORD *)sub_140001650(7, 1);
  if ( !v36 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v36 + 3) = 1800365427;
  *v36 = 1936875888;
  v200.m256i_i64[0] = 7;
  v200.m256i_i64[1] = (__int64)v36;
  v200.m256i_i64[2] = 7;
  v201.m256i_i16[0] = 1;
  sub_140A68320(&v194, &v197, &v200, &v201);
  if ( (_BYTE)v194 != 0xFF )
    sub_140032FF0(&v194);
  nullsub_1(v38, v37);
  v39 = sub_140001650(9, 1);
  if ( !v39 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v39 = 0x6F72724564616572LL;
  *(_BYTE *)(v39 + 8) = 114;
  v200.m256i_i64[0] = 9;
  v192 = v39;
  v200.m256i_i64[1] = v39;
  v200.m256i_i64[2] = 9;
  *(_QWORD *)&v194 = 0;
  *((_QWORD *)&v194 + 1) = 1;
  v195.m256i_i64[0] = 0;
  v201.m256i_i64[2] = 1610612768;
  v201.m256i_i64[0] = (__int64)&v194;
  v201.m256i_i64[1] = (__int64)&off_141A66E10;
  if ( (unsigned __int8)sub_1416EA080(&v205, &v201) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_5,
      55,
      (unsigned int)&v199,
      (unsigned int)&unk_141A5A890,
      (__int64)&off_141A66EC8);
  v42 = *((_QWORD *)&v194 + 1);
  v43 = v195.m256i_i64[0];
  v191 = *((_QWORD *)&v194 + 1);
  v192 = v194;
  if ( v195.m256i_i64[0] < 0 )
  {
    v44 = 0;
    goto LABEL_43;
  }
  if ( v195.m256i_i64[0] )
  {
    nullsub_1(v41, v40);
    v44 = 1;
    v60 = sub_140001650(v43, 1);
    if ( !v60 )
    {
LABEL_43:
      v207 = 1;
      sub_14196B2DB(v44, v43);
    }
    v61 = v60;
    sub_1419234B0(v60, v42, v43);
  }
  else
  {
    v61 = 1;
  }
  v201.m256i_i8[0] = 3;
  v201.m256i_i64[1] = v43;
  v201.m256i_i64[2] = v61;
  v201.m256i_i64[3] = v43;
  v207 = 0;
  sub_140A68320(&v194, &v197, &v200, &v201);
  if ( (_BYTE)v194 != 0xFF )
    sub_140032FF0(&v194);
  if ( v192 )
    sub_140001660(v191, v192, 1);
  *(_OWORD *)((char *)&v201.m256i_u32[1] + 3) = v197;
  *(__int64 *)((char *)&v201.m256i_i64[2] + 7) = v198;
  *(_BYTE *)a1 = 5;
  v68 = *(__int64 *)((char *)&v201.m256i_i64[1] + 7);
  v69 = *(__int64 *)((char *)&v201.m256i_i64[2] + 7);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v201.m256i_i8;
  *(_QWORD *)(a1 + 16) = v68;
  *(_QWORD *)(a1 + 24) = v69;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  result = 0.0;
  *(_OWORD *)(a1 + 48) = 0;
  if ( (unsigned int)(v29 & 3) - 2 >= 2 && (v29 & 3) != 0 )
  {
    v201.m256i_i64[1] = v29 - 1;
    v201.m256i_i8[0] = 3;
    sub_1416EBAD0(&v201.m256i_u64[1]);
  }
  return result;
}
