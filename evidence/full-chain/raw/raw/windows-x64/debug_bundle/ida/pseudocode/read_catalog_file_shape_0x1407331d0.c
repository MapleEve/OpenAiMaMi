// module: codexmate_lib/core/debug_bundle
// addr: 0x1407331d0
// name: read_catalog_file_shape
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::read_catalog_file_shape | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_catalog_file_shape(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int32 v7; // esi
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // kr00_16
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r14
  _QWORD *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r13
  __int64 v45; // rdi
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 i; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  bool v60; // zf
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  _BYTE *v65; // rbx
  unsigned __int64 v66; // rsi
  __m256i *v67; // rdi
  _BYTE *v68; // rax
  __int64 v69; // r13
  unsigned __int64 v70; // rax
  bool v71; // cl
  __int64 v72; // r13
  unsigned __int64 v73; // r12
  bool v74; // cf
  __int64 v75; // r13
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r10
  unsigned __int64 v82; // r9
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // r13
  __int64 v86; // r15
  __int64 v87; // rsi
  unsigned __int64 v88; // r14
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // r12
  __int64 v92; // r12
  int v93; // eax
  unsigned __int64 v94; // rax
  __int64 v95; // r13
  unsigned __int64 v96; // r12
  __int64 j; // r13
  __int64 v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r10
  unsigned __int64 v104; // r9
  __int64 v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  _DWORD *v111; // rax
  __int64 v112; // rcx
  void *v113; // rax
  __int64 v114; // rcx
  void *v115; // rax
  __int64 v116; // rcx
  void *v117; // rax
  __int64 v118; // rcx
  _OWORD *v119; // rax
  __int64 v120; // rcx
  void *v121; // rax
  __int64 v122; // rcx
  void *v123; // rax
  __int64 v124; // r8
  __int64 v125; // rcx
  __int64 v126; // rsi
  _QWORD *v127; // rdi
  __int64 v128; // rdx
  void *v129; // rax
  __int64 v130; // rcx
  _OWORD *v131; // rax
  __int64 v132; // r8
  __int64 v133; // rsi
  _QWORD *v134; // rdi
  __int64 v135; // rdx
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rsi
  _QWORD *v141; // rdi
  __int64 v142; // rdx
  __int16 v143; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v144; // [rsp+B2h] [rbp+32h]
  __int32 v145; // [rsp+BAh] [rbp+3Ah]
  __int16 v146; // [rsp+BEh] [rbp+3Eh]
  __int128 v147; // [rsp+C0h] [rbp+40h]
  __int16 v148; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v149; // [rsp+D2h] [rbp+52h]
  __int32 v150; // [rsp+DAh] [rbp+5Ah]
  __int16 v151; // [rsp+DEh] [rbp+5Eh]
  __int128 v152; // [rsp+E0h] [rbp+60h]
  unsigned __int64 v153; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v154; // [rsp+F8h] [rbp+78h]
  __int64 v155; // [rsp+100h] [rbp+80h]
  __int64 v156; // [rsp+108h] [rbp+88h]
  __int64 v157; // [rsp+110h] [rbp+90h]
  __int64 v158; // [rsp+118h] [rbp+98h]
  __int64 v159; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v160; // [rsp+128h] [rbp+A8h]
  __int128 v161; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v162; // [rsp+140h] [rbp+C0h]
  __m256i v163; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v164; // [rsp+170h] [rbp+F0h] BYREF
  _OWORD *v165; // [rsp+178h] [rbp+F8h]
  __int64 v166; // [rsp+180h] [rbp+100h]
  unsigned __int64 v167; // [rsp+188h] [rbp+108h]
  __int128 v168; // [rsp+190h] [rbp+110h] BYREF
  __int64 v169; // [rsp+1A0h] [rbp+120h]
  __int64 v170; // [rsp+1A8h] [rbp+128h]
  _QWORD *v171; // [rsp+1B0h] [rbp+130h]
  __int64 v172; // [rsp+1B8h] [rbp+138h]
  __int128 v173; // [rsp+1C0h] [rbp+140h] BYREF
  __m256i v174; // [rsp+1D0h] [rbp+150h] BYREF
  __m256i v175; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v176; // [rsp+210h] [rbp+190h]
  char v177; // [rsp+21Fh] [rbp+19Fh] BYREF
  __m256i v178; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v179; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v180; // [rsp+260h] [rbp+1E0h]
  __int128 v181; // [rsp+270h] [rbp+1F0h]
  __int64 v182; // [rsp+280h] [rbp+200h]
  __int128 v183; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v184; // [rsp+2B0h] [rbp+230h]
  char v185; // [rsp+2B9h] [rbp+239h]
  char v186; // [rsp+2BAh] [rbp+23Ah]
  bool v187; // [rsp+2BBh] [rbp+23Bh]
  char v188; // [rsp+2BCh] [rbp+23Ch]
  char v189; // [rsp+2BDh] [rbp+23Dh]
  char v190; // [rsp+2BEh] [rbp+23Eh]
  char v191; // [rsp+2BFh] [rbp+23Fh]
  __int64 v192; // [rsp+2C0h] [rbp+240h]

  v192 = -2;
  sub_141486710(&v179, a2, a3);
  v7 = v179.m256i_i32[0];
  if ( v179.m256i_i64[0] == 2 )
    sub_1401DD260(v179.m256i_i64[1]);
  sub_141486710(&v179, a2, a3);
  v9 = v179.m256i_i64[0];
  if ( v179.m256i_i64[0] != 2 )
  {
    v3 = *((_QWORD *)&v181 + 1);
    if ( v7 != 2 )
      goto LABEL_5;
LABEL_15:
    v175.m256i_i64[0] = 0;
    v175.m256i_i64[2] = 0;
    nullsub_1(v8);
    v17 = sub_140001650(6, 1);
    if ( !v17 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v17 + 4) = 29556;
    *(_DWORD *)v17 = 1936291941;
    v178.m256i_i64[0] = 6;
    v178.m256i_i64[1] = v17;
    v178.m256i_i64[2] = 6;
    v148 = 1;
    *(_OWORD *)&v179.m256i_u64[2] = v152;
    v179.m256i_i16[0] = 1;
    *(__int64 *)((char *)v179.m256i_i64 + 2) = v149;
    *(__int32 *)((char *)&v179.m256i_i32[2] + 2) = v150;
    v179.m256i_i16[7] = v151;
    sub_140307860(&v173, &v175, &v178, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    nullsub_1(v18);
    v19 = sub_140001650(5, 1);
    if ( !v19 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v19 + 4) = 115;
    *(_DWORD *)v19 = 1702132066;
    v178.m256i_i64[0] = 5;
    v178.m256i_i64[1] = v19;
    v178.m256i_i64[2] = 5;
    v179.m256i_i8[0] = 2 * ((_DWORD)v9 != 2);
    v179.m256i_i64[1] = 0;
    v179.m256i_i64[2] = v3;
    sub_140307860(&v173, &v175, &v178, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    nullsub_1(v20);
    v21 = (_DWORD *)sub_140001650(7, 1);
    if ( !v21 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v21 + 3) = 1800365427;
    *v21 = 1936875888;
    *(_QWORD *)&v173 = 7;
    *((_QWORD *)&v173 + 1) = v21;
    v174.m256i_i64[0] = 7;
    sub_140307860(&v179, &v175, &v173, &v148);
    if ( v179.m256i_i8[0] != -1 )
      sub_1400104F0(&v179);
    *(_OWORD *)((char *)&v179.m256i_u32[1] + 3) = *(_OWORD *)v175.m256i_i8;
    *(__int64 *)((char *)&v179.m256i_i64[2] + 7) = v175.m256i_i64[2];
    *(_BYTE *)a1 = 5;
    result = *(__int64 *)((char *)&v179.m256i_i64[1] + 7);
    v23 = *(__int64 *)((char *)&v179.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v179.m256i_i8;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v23;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 48) = 0;
    return result;
  }
  sub_1401DD260(v179.m256i_i64[1]);
  if ( v7 == 2 )
    goto LABEL_15;
LABEL_5:
  sub_14148D130(&v163, a2, a3);
  if ( v163.m256i_i64[0] != -1 )
  {
    v172 = v163.m256i_i64[0];
    *(_OWORD *)v179.m256i_i8 = *(_OWORD *)&v163.m256i_u64[1];
    *(_OWORD *)&v179.m256i_u64[2] = 0;
    v170 = v163.m256i_i64[1];
    v180 = *(_OWORD *)&v163.m256i_u64[1];
    sub_1408A6200(&v178, &v179);
    if ( v178.m256i_i8[0] != -1 )
    {
      v163 = v178;
      if ( v178.m256i_i8[0] == 5 )
      {
        v12 = v163.m256i_i64[1];
        if ( v163.m256i_i64[1] )
          v12 = v163.m256i_i64[3];
        *(_OWORD *)v179.m256i_i8 = v163.m256i_i64[1] != 0;
        *(_OWORD *)&v179.m256i_u64[2] = *(_OWORD *)&v163.m256i_u64[1];
        v180 = *(_OWORD *)v179.m256i_i8;
        v181 = *(_OWORD *)&v163.m256i_u64[1];
        v182 = v12;
        sub_14099AB10(&v175, &v179);
        v13 = *(_OWORD *)v175.m256i_i8;
        v14 = v175.m256i_i64[2];
        v15 = v175.m256i_i64[2];
        if ( !v175.m256i_i64[0] )
          v15 = 0;
        *(_OWORD *)v179.m256i_i8 = v175.m256i_i64[0] != 0;
        *(_OWORD *)&v179.m256i_u64[2] = *(_OWORD *)v175.m256i_i8;
        v180 = *(_OWORD *)v179.m256i_i8;
        v181 = *(_OWORD *)v175.m256i_i8;
        v182 = v15;
        sub_140329230((__int64)&v178, (__int64)&v179);
        if ( (_QWORD)v13 )
        {
          v179.m256i_i64[1] = 0;
          *(_OWORD *)&v179.m256i_u64[2] = v13;
          *((_QWORD *)&v180 + 1) = 0;
          v181 = v13;
          v16 = 1;
        }
        else
        {
          v16 = 0;
          v14 = 0;
        }
        v179.m256i_i64[0] = v16;
        *(_QWORD *)&v180 = v16;
        v182 = v14;
        sub_140308850(&v173, &v179);
        for ( i = v173; (_QWORD)v173; i = v173 )
        {
          v52 = *(_QWORD *)(i + 24 * v174.m256i_i64[0] + 8);
          if ( v52 )
            sub_140001660(*(_QWORD *)(i + 24 * v174.m256i_i64[0] + 16), v52, 1);
          sub_140308850(&v173, &v179);
        }
        v161 = *(_OWORD *)v178.m256i_i8;
        v162 = v178.m256i_i64[2];
      }
      else
      {
        *(_QWORD *)&v161 = 0;
        *((_QWORD *)&v161 + 1) = 8;
        v162 = 0;
      }
      v53 = sub_141433D50(aClientVersion, 14, &v163);
      if ( v53 )
      {
        switch ( *(_BYTE *)v53 )
        {
          case 0:
            v179.m256i_i8[0] = 0;
            break;
          case 1:
          case 2:
            v54 = *(_OWORD *)v53;
            *(_OWORD *)&v179.m256i_u64[2] = *(_OWORD *)(v53 + 16);
            *(_OWORD *)v179.m256i_i8 = v54;
            break;
          case 3:
            sub_14149C500(&v179.m256i_u64[1], v53 + 8);
            v179.m256i_i8[0] = 3;
            break;
          case 4:
            sub_1402CE260(&v179.m256i_u64[1], *(_QWORD *)(v53 + 16), *(_QWORD *)(v53 + 24));
            v179.m256i_i8[0] = 4;
            break;
          case 5:
            if ( *(_QWORD *)(v53 + 24) )
            {
              v62 = *(_QWORD *)(v53 + 8);
              if ( !v62 )
                sub_1416C3040(&off_141747358);
              sub_1402CCD80(&v179.m256i_u64[1], v62, *(_QWORD *)(v53 + 16));
            }
            else
            {
              v179.m256i_i64[1] = 0;
              v179.m256i_i64[3] = 0;
            }
            v179.m256i_i8[0] = 5;
            break;
        }
        v175 = v179;
        v179.m256i_i8[0] = 0;
        sub_1400104F0(&v179);
      }
      else
      {
        v179.m256i_i8[0] = 0;
        *(_OWORD *)&v175.m256i_u64[2] = *(_OWORD *)&v179.m256i_u64[2];
        v175.m256i_i8[0] = 0;
        *(__int64 *)((char *)v175.m256i_i64 + 1) = *(__int64 *)((char *)v179.m256i_i64 + 1);
        *(__int32 *)((char *)&v175.m256i_i32[2] + 1) = *(__int32 *)((char *)&v179.m256i_i32[2] + 1);
        *(__int16 *)((char *)&v175.m256i_i16[6] + 1) = *(__int16 *)((char *)&v179.m256i_i16[6] + 1);
        v175.m256i_i8[15] = v179.m256i_i8[15];
      }
      v63 = sub_141433D50(aModels_1, 6, &v163);
      if ( v63 && *(_BYTE *)v63 == 4 )
      {
        v171 = (_QWORD *)v9;
        v167 = v3;
        v64 = *(_QWORD *)(v63 + 24);
        v153 = v64;
        *(_QWORD *)&v173 = 0;
        v174.m256i_i64[3] = 0;
        *(_OWORD *)v174.m256i_i8 = 0;
        v65 = *(_BYTE **)(v63 + 16);
        v176 = (__int64)&v65[32 * *(_QWORD *)(v63 + 24)];
        v66 = 0;
        v67 = &v179;
        v159 = 0;
LABEL_99:
        v68 = v65;
        v3 = v167;
        LODWORD(v9) = (_DWORD)v171;
        v69 = v153;
        while ( v68 != (_BYTE *)v176 )
        {
          v65 = v68 + 32;
          v60 = *v68 == 5;
          v68 += 32;
          if ( v60 )
          {
            v70 = *((_QWORD *)v65 - 3);
            v71 = v70 != 0;
            if ( v70 )
            {
              v3 = *((_QWORD *)v65 - 2);
              v72 = *((_QWORD *)v65 - 1);
            }
            else
            {
              v72 = 0;
            }
            ++v66;
            v156 = *((_QWORD *)v65 - 3);
            v73 = 0;
            v187 = v70 != 0;
            v74 = v72 == 0;
            v75 = v72 - 1;
            if ( !v74 )
            {
              while ( 1 )
              {
                if ( !v71 )
                  sub_1416C3040(&off_1417477D8);
                if ( v73 )
                {
                  if ( v3 < *(unsigned __int16 *)(v73 + 626) )
                    goto LABEL_109;
                  goto LABEL_120;
                }
                if ( !v3 )
                {
                  v73 = v70;
                  goto LABEL_119;
                }
                v73 = v70;
                if ( (v3 & 7) == 0 )
                  break;
                v78 = 0;
                do
                {
                  v73 = *(_QWORD *)(v73 + 632);
                  ++v78;
                }
                while ( (v3 & 7) != v78 );
                v79 = v3 - v78;
                if ( v3 >= 8 )
                  goto LABEL_118;
LABEL_119:
                v70 = 0;
                v3 = 0;
                if ( *(_WORD *)(v73 + 626) )
                {
LABEL_109:
                  v76 = v73;
                  v77 = v3;
                  goto LABEL_122;
                }
                do
                {
LABEL_120:
                  v76 = *(_QWORD *)(v73 + 352);
                  if ( !v76 )
                    sub_1416C3040(&off_141746158);
                  ++v70;
                  v77 = *(unsigned __int16 *)(v73 + 624);
                  v73 = *(_QWORD *)(v73 + 352);
                }
                while ( (unsigned __int16)v77 >= *(_WORD *)(v76 + 626) );
LABEL_122:
                if ( !v70 )
                {
                  v3 = v77 + 1;
                  v73 = v76;
                  goto LABEL_130;
                }
                v80 = v76 + 8 * v77 + 640;
                if ( (v70 & 7) != 0 )
                {
                  v81 = 0;
                  do
                  {
                    v73 = *(_QWORD *)v80;
                    v80 = *(_QWORD *)v80 + 632LL;
                    ++v81;
                  }
                  while ( (v70 & 7) != v81 );
                  v82 = v70 - v81;
                  if ( v70 < 8 )
                    goto LABEL_128;
                  do
                  {
LABEL_127:
                    v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 632LL)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL);
                    v80 = v73 + 632;
                    v82 -= 8LL;
                  }
                  while ( v82 );
                  goto LABEL_128;
                }
                v82 = v70;
                if ( v70 >= 8 )
                  goto LABEL_127;
LABEL_128:
                v3 = 0;
LABEL_130:
                sub_14149C500(v67, v76 + 24 * v77 + 360);
                sub_140307390(&v173, v67);
                v71 = 1;
                v70 = 0;
                v74 = v75-- == 0;
                if ( v74 )
                  goto LABEL_134;
              }
              v79 = v3;
              if ( v3 < 8 )
                goto LABEL_119;
              do
              {
LABEL_118:
                v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 632) + 632LL)
                                                                                            + 632LL)
                                                                                + 632LL)
                                                                    + 632LL)
                                                        + 632LL)
                                            + 632LL)
                                + 632LL);
                v79 -= 8LL;
              }
              while ( v79 );
              goto LABEL_119;
            }
LABEL_134:
            v64 = *((_QWORD *)v65 - 3);
            if ( v64 )
            {
              v160 = v66;
              v158 = a1;
              v157 = *((_QWORD *)v65 - 2);
              while ( 2 )
              {
                v83 = v64 + 360;
                v84 = *(unsigned __int16 *)(v64 + 626);
                v154 = v64;
                v85 = (_QWORD *)(v64 - 8);
                v155 = v84;
                v86 = 3LL * (unsigned int)(8 * v84);
                v87 = -1;
                do
                {
                  if ( !v86 )
                  {
                    v87 = v155;
                    a1 = v158;
                    goto LABEL_146;
                  }
                  v88 = (unsigned __int64)v67;
                  v89 = v83 + 24;
                  v90 = *(_QWORD *)(v83 + 16);
                  v91 = v90 - 4;
                  if ( v90 >= 4 )
                    v90 = 4;
                  v92 = -(__int64)v91;
                  v93 = sub_1416847B0(&unk_14178A34F, *(_QWORD *)(v83 + 8), v90);
                  if ( v93 )
                    v92 = v93;
                  LOBYTE(v64) = (v92 > 0) - (v92 < 0);
                  v85 += 4;
                  ++v87;
                  v86 -= 24;
                  v83 = v89;
                  v67 = (__m256i *)v88;
                }
                while ( (_BYTE)v64 == 1 );
                a1 = v158;
                if ( !(_BYTE)v64 )
                {
                  v66 = v160;
                  if ( *((_BYTE *)v85 - 24) == 3 )
                  {
                    v94 = sub_1407BE9C0(asc_14178A353, 2, *(v85 - 1), *v85);
                    if ( (_BYTE)v94 )
                    {
                      if ( v156 )
                      {
                        v94 = *((_QWORD *)v65 - 3);
                        v88 = *((_QWORD *)v65 - 2);
                        v95 = *((_QWORD *)v65 - 1);
                      }
                      else
                      {
                        v95 = 0;
                      }
                      v64 = v187;
                      ++v159;
                      v96 = 0;
                      v74 = v95 == 0;
                      for ( j = v95 - 1; !v74; --j )
                      {
                        if ( (v64 & 1) == 0 )
                          sub_1416C3040(&off_1417477D8);
                        if ( !v96 )
                        {
                          if ( v88 )
                          {
                            v96 = v94;
                            if ( (v88 & 7) != 0 )
                            {
                              v98 = 0;
                              do
                              {
                                v96 = *(_QWORD *)(v96 + 632);
                                ++v98;
                              }
                              while ( (v88 & 7) != v98 );
                              v99 = v88 - v98;
                            }
                            else
                            {
                              v99 = v88;
                            }
                            if ( v88 >= 8 )
                            {
                              do
                              {
                                v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 632) + 632LL) + 632LL)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL);
                                v99 -= 8LL;
                              }
                              while ( v99 );
                            }
                          }
                          else
                          {
                            v96 = v94;
                          }
                          v94 = 0;
                          v88 = 0;
                        }
                        if ( v88 >= *(unsigned __int16 *)(v96 + 626) )
                        {
                          do
                          {
                            v100 = *(_QWORD *)(v96 + 352);
                            if ( !v100 )
                              sub_1416C3040(&off_141746158);
                            ++v94;
                            v101 = *(unsigned __int16 *)(v96 + 624);
                            v96 = *(_QWORD *)(v96 + 352);
                          }
                          while ( (unsigned __int16)v101 >= *(_WORD *)(v100 + 626) );
                        }
                        else
                        {
                          v100 = v96;
                          v101 = v88;
                        }
                        if ( v94 )
                        {
                          v102 = v100 + 8 * v101 + 640;
                          if ( (v94 & 7) != 0 )
                          {
                            v103 = 0;
                            do
                            {
                              v96 = *(_QWORD *)v102;
                              v102 = *(_QWORD *)v102 + 632LL;
                              ++v103;
                            }
                            while ( (v94 & 7) != v103 );
                            v104 = v94 - v103;
                          }
                          else
                          {
                            v104 = v94;
                          }
                          if ( v94 >= 8 )
                          {
                            do
                            {
                              v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v102 + 632LL) + 632LL)
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL);
                              v102 = v96 + 632;
                              v104 -= 8LL;
                            }
                            while ( v104 );
                          }
                          v88 = 0;
                        }
                        else
                        {
                          v88 = v101 + 1;
                          v96 = v100;
                        }
                        sub_14149C500(v67, v100 + 24 * v101 + 360);
                        sub_140307390(&v174.m256i_i64[1], v67);
                        LOBYTE(v64) = 1;
                        v94 = 0;
                        v74 = j == 0;
                      }
                    }
                  }
                  goto LABEL_99;
                }
LABEL_146:
                v64 = v154;
                if ( v157 )
                {
                  --v157;
                  v64 = *(_QWORD *)(v154 + 8 * v87 + 632);
                  continue;
                }
                break;
              }
              v66 = v160;
            }
            goto LABEL_99;
          }
        }
        v106 = 0;
        if ( v153 >= v66 )
          v106 = v153 - v66;
        v105 = v159;
      }
      else
      {
        *(_QWORD *)&v173 = 0;
        v174.m256i_i64[3] = 0;
        *(_OWORD *)v174.m256i_i8 = 0;
        v69 = 0;
        v105 = 0;
        v66 = 0;
        v106 = 0;
      }
      *(_QWORD *)&v168 = 0;
      v169 = 0;
      nullsub_1(v64);
      v107 = sub_140001650(6, 1);
      if ( !v107 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v107 + 4) = 29556;
      *(_DWORD *)v107 = 1936291941;
      *(_QWORD *)&v183 = 6;
      *((_QWORD *)&v183 + 1) = v107;
      v184 = 6;
      v143 = 257;
      *(_OWORD *)&v179.m256i_u64[2] = v147;
      v179.m256i_i16[0] = 257;
      *(__int64 *)((char *)v179.m256i_i64 + 2) = v144;
      *(__int32 *)((char *)&v179.m256i_i32[2] + 2) = v145;
      v179.m256i_i16[7] = v146;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v108);
      v109 = sub_140001650(5, 1);
      if ( !v109 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v109 + 4) = 115;
      *(_DWORD *)v109 = 1702132066;
      *(_QWORD *)&v183 = 5;
      *((_QWORD *)&v183 + 1) = v109;
      v184 = 5;
      v179.m256i_i8[0] = 2 * ((_DWORD)v9 != 2);
      v179.m256i_i64[1] = 0;
      v179.m256i_i64[2] = v3;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v110);
      v111 = (_DWORD *)sub_140001650(7, 1);
      if ( !v111 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v111 + 3) = 1800365427;
      *v111 = 1936875888;
      v178.m256i_i64[0] = 7;
      v178.m256i_i64[1] = (__int64)v111;
      v178.m256i_i64[2] = 7;
      sub_140307860(&v179, &v168, &v178, &v143);
      if ( v179.m256i_i8[0] != -1 )
        sub_1400104F0(&v179);
      nullsub_1(v112);
      v113 = (void *)sub_140001650(10, 1);
      if ( !v113 )
        sub_1416C2D4B(1, 10);
      qmemcpy(v113, "rootFields", 10);
      *(_QWORD *)&v183 = 10;
      *((_QWORD *)&v183 + 1) = v113;
      v184 = 10;
      v191 = 1;
      sub_140467F40(&v179, &v161);
      if ( v179.m256i_i8[0] == -1 )
      {
        v178.m256i_i64[0] = v179.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_10,
          43,
          (unsigned int)&v178,
          (unsigned int)&off_141789020,
          (__int64)&off_14178A358);
      }
      v178 = v179;
      v191 = 0;
      sub_140307860(&v179, &v168, &v183, &v178);
      if ( v179.m256i_i8[0] != -1 )
        sub_1400104F0(&v179);
      nullsub_1(v114);
      v115 = (void *)sub_140001650(13, 1);
      if ( !v115 )
        sub_1416C2D4B(1, 13);
      qmemcpy(v115, "clientVersion", 13);
      *(_QWORD *)&v183 = 13;
      *((_QWORD *)&v183 + 1) = v115;
      v184 = 13;
      v190 = 1;
      sub_140B842D0(&v179, &v175);
      if ( v179.m256i_i8[0] == -1 )
      {
        v178.m256i_i64[0] = v179.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_10,
          43,
          (unsigned int)&v178,
          (unsigned int)&off_141789020,
          (__int64)&off_14178A358);
      }
      v178 = v179;
      v190 = 0;
      sub_140307860(&v179, &v168, &v183, &v178);
      if ( v179.m256i_i8[0] != -1 )
        sub_1400104F0(&v179);
      nullsub_1(v116);
      v117 = (void *)sub_140001650(11, 1);
      if ( !v117 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v117, "modelsCount", 11);
      *(_QWORD *)&v183 = 11;
      *((_QWORD *)&v183 + 1) = v117;
      v184 = 11;
      v179.m256i_i8[0] = 2;
      v179.m256i_i64[1] = 0;
      v179.m256i_i64[2] = v69;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v118);
      v119 = (_OWORD *)sub_140001650(16, 1);
      if ( !v119 )
        sub_1416C2D4B(1, 16);
      *v119 = xmmword_14178A370;
      *(_QWORD *)&v183 = 16;
      *((_QWORD *)&v183 + 1) = v119;
      v184 = 16;
      v179.m256i_i8[0] = 2;
      v179.m256i_i64[1] = 0;
      v179.m256i_i64[2] = v66;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v120);
      v121 = (void *)sub_140001650(19, 1);
      if ( !v121 )
        sub_1416C2D4B(1, 19);
      qmemcpy(v121, "nonObjectModelCount", 19);
      *(_QWORD *)&v183 = 19;
      *((_QWORD *)&v183 + 1) = v121;
      v184 = 19;
      v179.m256i_i8[0] = 2;
      v179.m256i_i64[1] = 0;
      v179.m256i_i64[2] = v106;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v122);
      v123 = (void *)sub_140001650(11, 1);
      if ( !v123 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v123, "modelFields", 11);
      v164 = 11;
      v176 = (__int64)v123;
      v165 = v123;
      v166 = 11;
      v124 = v173;
      if ( (_QWORD)v173 )
        v124 = v174.m256i_i64[0];
      *(_OWORD *)v179.m256i_i8 = (_QWORD)v173 != 0;
      *(_OWORD *)&v179.m256i_u64[2] = v173;
      v180 = *(_OWORD *)v179.m256i_i8;
      v181 = v173;
      v182 = v124;
      sub_140329230((__int64)&v183, (__int64)&v179);
      v189 = 1;
      sub_140467F40(&v179, &v183);
      if ( v179.m256i_i8[0] == -1 )
      {
        v178.m256i_i64[0] = v179.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_10,
          43,
          (unsigned int)&v178,
          (unsigned int)&off_141789020,
          (__int64)&off_14178A358);
      }
      v178 = v179;
      v189 = 0;
      sub_140307860(&v179, &v168, &v164, &v178);
      if ( v179.m256i_i8[0] != -1 )
        sub_1400104F0(&v179);
      v126 = v184;
      if ( v184 )
      {
        v127 = (_QWORD *)(*((_QWORD *)&v183 + 1) + 8LL);
        do
        {
          v128 = *(v127 - 1);
          if ( v128 )
            sub_140001660(*v127, v128, 1);
          v127 += 3;
          --v126;
        }
        while ( v126 );
      }
      if ( (_QWORD)v183 )
        sub_140001660(*((_QWORD *)&v183 + 1), 24 * v183, 8);
      nullsub_1(v125);
      v129 = (void *)sub_140001650(15, 1);
      if ( !v129 )
        sub_1416C2D4B(1, 15);
      qmemcpy(v129, "relayModelCount", 15);
      *(_QWORD *)&v183 = 15;
      *((_QWORD *)&v183 + 1) = v129;
      v184 = 15;
      v179.m256i_i8[0] = 2;
      v179.m256i_i64[1] = 0;
      v179.m256i_i64[2] = v105;
      sub_140307860(&v178, &v168, &v183, &v179);
      if ( v178.m256i_i8[0] != -1 )
        sub_1400104F0(&v178);
      nullsub_1(v130);
      v131 = (_OWORD *)sub_140001650(16, 1);
      if ( !v131 )
        sub_1416C2D4B(1, 16);
      *v131 = xmmword_14178A393;
      v164 = 16;
      v176 = (__int64)v131;
      v165 = v131;
      v166 = 16;
      v132 = v174.m256i_i64[1];
      if ( v174.m256i_i64[1] )
        v132 = v174.m256i_i64[3];
      *(_OWORD *)v179.m256i_i8 = v174.m256i_i64[1] != 0;
      *(_OWORD *)&v179.m256i_u64[2] = *(_OWORD *)&v174.m256i_u64[1];
      v180 = *(_OWORD *)v179.m256i_i8;
      v181 = *(_OWORD *)&v174.m256i_u64[1];
      v182 = v132;
      sub_140329230((__int64)&v183, (__int64)&v179);
      v188 = 1;
      sub_140467F40(&v179, &v183);
      if ( v179.m256i_i8[0] == -1 )
      {
        v178.m256i_i64[0] = v179.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_10,
          43,
          (unsigned int)&v178,
          (unsigned int)&off_141789020,
          (__int64)&off_14178A358);
      }
      v178 = v179;
      v188 = 0;
      sub_140307860(&v179, &v168, &v164, &v178);
      if ( v179.m256i_i8[0] != -1 )
        sub_1400104F0(&v179);
      v133 = v184;
      if ( v184 )
      {
        v134 = (_QWORD *)(*((_QWORD *)&v183 + 1) + 8LL);
        do
        {
          v135 = *(v134 - 1);
          if ( v135 )
            sub_140001660(*v134, v135, 1);
          v134 += 3;
          --v133;
        }
        while ( v133 );
      }
      if ( (_QWORD)v183 )
        sub_140001660(*((_QWORD *)&v183 + 1), 24 * v183, 8);
      *(_OWORD *)((char *)&v179.m256i_u32[1] + 3) = v168;
      *(__int64 *)((char *)&v179.m256i_i64[2] + 7) = v169;
      v136 = v173;
      v137 = *(_OWORD *)v174.m256i_i8;
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v174.m256i_u64[2];
      *(_OWORD *)(a1 + 48) = v137;
      *(_OWORD *)(a1 + 32) = v136;
      *(_BYTE *)a1 = 5;
      v138 = *(__int64 *)((char *)&v179.m256i_i64[1] + 7);
      v139 = *(__int64 *)((char *)&v179.m256i_i64[2] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v179.m256i_i8;
      *(_QWORD *)(a1 + 16) = v138;
      *(_QWORD *)(a1 + 24) = v139;
      sub_1400104F0(&v175);
      v140 = v162;
      if ( v162 )
      {
        v141 = (_QWORD *)(*((_QWORD *)&v161 + 1) + 8LL);
        do
        {
          v142 = *(v141 - 1);
          if ( v142 )
            sub_140001660(*v141, v142, 1);
          v141 += 3;
          --v140;
        }
        while ( v140 );
      }
      if ( (_QWORD)v161 )
        sub_140001660(*((_QWORD *)&v161 + 1), 24 * v161, 8);
      result = sub_1400104F0(&v163);
      goto LABEL_250;
    }
    v35 = (_QWORD *)v178.m256i_i64[1];
    v164 = v178.m256i_i64[1];
    *(_QWORD *)&v183 = 0;
    v184 = 0;
    nullsub_1(v11);
    v36 = sub_140001650(6, 1);
    if ( !v36 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v36 + 4) = 29556;
    *(_DWORD *)v36 = 1936291941;
    v175.m256i_i64[0] = 6;
    v175.m256i_i64[1] = v36;
    v175.m256i_i64[2] = 6;
    v179.m256i_i16[0] = 257;
    sub_140307860(&v173, &v183, &v175, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    nullsub_1(v37);
    v38 = sub_140001650(5, 1);
    if ( !v38 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v38 + 4) = 115;
    *(_DWORD *)v38 = 1702132066;
    v175.m256i_i64[0] = 5;
    v175.m256i_i64[1] = v38;
    v175.m256i_i64[2] = 5;
    v179.m256i_i8[0] = 2 * ((_DWORD)v9 != 2);
    v179.m256i_i64[1] = 0;
    v179.m256i_i64[2] = v3;
    sub_140307860(&v173, &v183, &v175, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    nullsub_1(v39);
    v40 = (_DWORD *)sub_140001650(7, 1);
    if ( !v40 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v40 + 3) = 1800365427;
    *v40 = 1936875888;
    v175.m256i_i64[0] = 7;
    v175.m256i_i64[1] = (__int64)v40;
    v175.m256i_i64[2] = 7;
    v179.m256i_i16[0] = 1;
    sub_140307860(&v173, &v183, &v175, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    nullsub_1(v41);
    v42 = (void *)sub_140001650(10, 1);
    if ( !v42 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v42, "parseError", 10);
    v175.m256i_i64[0] = 10;
    v176 = (__int64)v42;
    v175.m256i_i64[1] = (__int64)v42;
    v175.m256i_i64[2] = 10;
    *(_QWORD *)&v173 = 0;
    *((_QWORD *)&v173 + 1) = 1;
    v174.m256i_i64[0] = 0;
    v179.m256i_i64[2] = 1610612768;
    v179.m256i_i64[0] = (__int64)&v173;
    v179.m256i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_14142D3F0(&v164, &v179) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v177,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v44 = *((_QWORD *)&v173 + 1);
    v45 = v174.m256i_i64[0];
    v167 = *((_QWORD *)&v173 + 1);
    v176 = v173;
    if ( v174.m256i_i64[0] < 0 )
    {
      v46 = 0;
      goto LABEL_52;
    }
    if ( v174.m256i_i64[0] )
    {
      nullsub_1(v43);
      v46 = 1;
      v49 = sub_140001650(v45, 1);
      if ( !v49 )
      {
LABEL_52:
        v186 = 1;
        sub_1416C2D4B(v46, v45);
      }
      v50 = v49;
      sub_141684120(v49, v44, v45);
    }
    else
    {
      v50 = 1;
    }
    v179.m256i_i8[0] = 3;
    v179.m256i_i64[1] = v45;
    v179.m256i_i64[2] = v50;
    v179.m256i_i64[3] = v45;
    v186 = 0;
    sub_140307860(&v173, &v183, &v175, &v179);
    if ( (_BYTE)v173 != 0xFF )
      sub_1400104F0(&v173);
    if ( v176 )
      sub_140001660(v167, v176, 1);
    *(_OWORD *)((char *)&v179.m256i_u32[1] + 3) = v183;
    *(__int64 *)((char *)&v179.m256i_i64[2] + 7) = v184;
    *(_BYTE *)a1 = 5;
    v57 = *(__int64 *)((char *)&v179.m256i_i64[1] + 7);
    v58 = *(__int64 *)((char *)&v179.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v179.m256i_i8;
    *(_QWORD *)(a1 + 16) = v57;
    *(_QWORD *)(a1 + 24) = v58;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 48) = 0;
    v59 = *v35;
    v60 = *v35 == 1;
    v171 = v35;
    if ( v60 )
    {
      sub_1401DD260(v35[1]);
    }
    else if ( !v59 )
    {
      v61 = v171[2];
      if ( v61 )
        sub_140001660(v171[1], v61, 1);
    }
    result = sub_140001660(v171, 40, 8);
LABEL_250:
    if ( v172 )
      return sub_140001660(v170, v172, 1);
    return result;
  }
  v176 = v163.m256i_i64[1];
  *(_QWORD *)&v183 = v163.m256i_i64[1];
  v175.m256i_i64[0] = 0;
  v175.m256i_i64[2] = 0;
  nullsub_1(v10);
  v24 = sub_140001650(6, 1);
  if ( !v24 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v24 + 4) = 29556;
  *(_DWORD *)v24 = 1936291941;
  v178.m256i_i64[0] = 6;
  v178.m256i_i64[1] = v24;
  v178.m256i_i64[2] = 6;
  v179.m256i_i16[0] = 257;
  sub_140307860(&v173, &v175, &v178, &v179);
  if ( (_BYTE)v173 != 0xFF )
    sub_1400104F0(&v173);
  nullsub_1(v25);
  v26 = sub_140001650(5, 1);
  if ( !v26 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v26 + 4) = 115;
  *(_DWORD *)v26 = 1702132066;
  v178.m256i_i64[0] = 5;
  v178.m256i_i64[1] = v26;
  v178.m256i_i64[2] = 5;
  v179.m256i_i8[0] = 2 * ((_DWORD)v9 != 2);
  v179.m256i_i64[1] = 0;
  v179.m256i_i64[2] = v3;
  sub_140307860(&v173, &v175, &v178, &v179);
  if ( (_BYTE)v173 != 0xFF )
    sub_1400104F0(&v173);
  nullsub_1(v27);
  v28 = (_DWORD *)sub_140001650(7, 1);
  if ( !v28 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v28 + 3) = 1800365427;
  *v28 = 1936875888;
  v178.m256i_i64[0] = 7;
  v178.m256i_i64[1] = (__int64)v28;
  v178.m256i_i64[2] = 7;
  v179.m256i_i16[0] = 1;
  sub_140307860(&v173, &v175, &v178, &v179);
  if ( (_BYTE)v173 != 0xFF )
    sub_1400104F0(&v173);
  nullsub_1(v29);
  v30 = sub_140001650(9, 1);
  if ( !v30 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v30 = 0x6F72724564616572LL;
  *(_BYTE *)(v30 + 8) = 114;
  v178.m256i_i64[0] = 9;
  v172 = v30;
  v178.m256i_i64[1] = v30;
  v178.m256i_i64[2] = 9;
  *(_QWORD *)&v173 = 0;
  *((_QWORD *)&v173 + 1) = 1;
  v174.m256i_i64[0] = 0;
  v179.m256i_i64[2] = 1610612768;
  v179.m256i_i64[0] = (__int64)&v173;
  v179.m256i_i64[1] = (__int64)&off_141790AA0;
  if ( (unsigned __int8)sub_141490720(&v183, &v179) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v177,
      (unsigned int)&unk_141789060,
      (__int64)&off_141790B58);
  v32 = *((_QWORD *)&v173 + 1);
  v33 = v174.m256i_i64[0];
  v170 = *((_QWORD *)&v173 + 1);
  v172 = v173;
  if ( v174.m256i_i64[0] < 0 )
  {
    v34 = 0;
    goto LABEL_38;
  }
  if ( v174.m256i_i64[0] )
  {
    nullsub_1(v31);
    v34 = 1;
    v47 = sub_140001650(v33, 1);
    if ( !v47 )
    {
LABEL_38:
      v185 = 1;
      sub_1416C2D4B(v34, v33);
    }
    v48 = v47;
    sub_141684120(v47, v32, v33);
  }
  else
  {
    v48 = 1;
  }
  v179.m256i_i8[0] = 3;
  v179.m256i_i64[1] = v33;
  v179.m256i_i64[2] = v48;
  v179.m256i_i64[3] = v33;
  v185 = 0;
  sub_140307860(&v173, &v175, &v178, &v179);
  if ( (_BYTE)v173 != 0xFF )
    sub_1400104F0(&v173);
  if ( v172 )
    sub_140001660(v170, v172, 1);
  *(_OWORD *)((char *)&v179.m256i_u32[1] + 3) = *(_OWORD *)v175.m256i_i8;
  *(__int64 *)((char *)&v179.m256i_i64[2] + 7) = v175.m256i_i64[2];
  *(_BYTE *)a1 = 5;
  v55 = *(__int64 *)((char *)&v179.m256i_i64[1] + 7);
  v56 = *(__int64 *)((char *)&v179.m256i_i64[2] + 7);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v179.m256i_i8;
  *(_QWORD *)(a1 + 16) = v55;
  *(_QWORD *)(a1 + 24) = v56;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  return sub_1401DD260(v176);
}