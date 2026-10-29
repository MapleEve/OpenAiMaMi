// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402fc360 | name sub_1402FC360
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402FC360(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // kr00_8
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  const __m128i *v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  _BYTE *v17; // rcx
  const __m128i *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  void *v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  _DWORD *v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rcx
  _DWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  void *v65; // rax
  __int64 v66; // rcx
  void *v67; // rax
  __int64 v68; // rcx
  void *v69; // rax
  _DWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rcx
  void *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdi
  _DWORD *v82; // rax
  _BYTE *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r15
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int128 v91; // kr10_16
  unsigned __int64 v92; // rbx
  __int64 v93; // rcx
  _DWORD *v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rax
  _DWORD *v97; // rax
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rcx
  void *v101; // rax
  _DWORD *v102; // rax
  __int64 v103; // rcx
  void *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  _DWORD *v107; // rax
  __int64 v108; // rcx
  void *v109; // rax
  __int64 v110; // rcx
  void *v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int128 v114; // xmm0
  _OWORD *v115; // rax
  _BYTE *v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // r12
  __int64 v122; // rbx
  __int64 v123; // r15
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  __int8 v128; // r15
  _DWORD *v129; // rax
  __int64 v130; // rcx
  void *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // rcx
  _DWORD *v135; // rax
  __int64 v136; // rcx
  void *v137; // rax
  void *v138; // rax
  _BYTE *v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  _DWORD *v142; // rax
  __int64 v143; // rcx
  _QWORD *v144; // rax
  __int64 v145; // rcx
  __int128 v146; // xmm0
  _BYTE v147[23]; // [rsp+89h] [rbp+9h]
  __int128 v148; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v149; // [rsp+C0h] [rbp+40h]
  __int64 v150; // [rsp+C8h] [rbp+48h]
  __int64 v151; // [rsp+D0h] [rbp+50h] BYREF
  void *v152; // [rsp+D8h] [rbp+58h]
  __int64 v153; // [rsp+E0h] [rbp+60h]
  __int64 v154; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD *v155; // [rsp+F0h] [rbp+70h]
  __int64 v156; // [rsp+F8h] [rbp+78h]
  __int64 v157; // [rsp+100h] [rbp+80h]
  __int128 v158; // [rsp+108h] [rbp+88h] BYREF
  __int64 v159; // [rsp+118h] [rbp+98h]
  __int128 v160; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v161; // [rsp+130h] [rbp+B0h]
  __int128 v162; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v163; // [rsp+148h] [rbp+C8h]
  __int64 v164; // [rsp+150h] [rbp+D0h] BYREF
  _QWORD *v165; // [rsp+158h] [rbp+D8h]
  __int64 v166; // [rsp+160h] [rbp+E0h]
  _BYTE v167[24]; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v168; // [rsp+180h] [rbp+100h] BYREF
  __int64 v169; // [rsp+190h] [rbp+110h]
  __int64 v170; // [rsp+198h] [rbp+118h]
  __m256i v171; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v172; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v173; // [rsp+1D0h] [rbp+150h]
  _BYTE *v174; // [rsp+1D8h] [rbp+158h]
  char v175; // [rsp+1E7h] [rbp+167h]
  char v176; // [rsp+1E8h] [rbp+168h]
  char v177; // [rsp+1E9h] [rbp+169h]
  char v178; // [rsp+1EAh] [rbp+16Ah]
  char v179; // [rsp+1EBh] [rbp+16Bh]
  char v180; // [rsp+1ECh] [rbp+16Ch]
  char v181; // [rsp+1EDh] [rbp+16Dh]
  char v182; // [rsp+1EEh] [rbp+16Eh]
  char v183; // [rsp+1EFh] [rbp+16Fh]
  char v184; // [rsp+1F0h] [rbp+170h]
  char v185; // [rsp+1F1h] [rbp+171h]
  bool v186; // [rsp+1F2h] [rbp+172h]
  char v187; // [rsp+1F3h] [rbp+173h]
  char v188; // [rsp+1F4h] [rbp+174h]
  char v189; // [rsp+1F5h] [rbp+175h]
  char v190; // [rsp+1F6h] [rbp+176h]
  char v191; // [rsp+1F7h] [rbp+177h]
  __int64 v192; // [rsp+1F8h] [rbp+178h]
  char v193; // [rsp+207h] [rbp+187h]
  char v194; // [rsp+208h] [rbp+188h]
  char v195; // [rsp+209h] [rbp+189h]
  char v196; // [rsp+20Ah] [rbp+18Ah]
  char v197; // [rsp+20Bh] [rbp+18Bh]
  char v198; // [rsp+20Ch] [rbp+18Ch]
  char v199; // [rsp+20Dh] [rbp+18Dh]
  char v200; // [rsp+20Eh] [rbp+18Eh]
  char v201; // [rsp+20Fh] [rbp+18Fh]
  __m256i v202; // [rsp+210h] [rbp+190h] BYREF
  __m256i v203; // [rsp+230h] [rbp+1B0h] BYREF
  char v204; // [rsp+25Eh] [rbp+1DEh]
  char v205; // [rsp+25Fh] [rbp+1DFh]
  __m256i v206; // [rsp+260h] [rbp+1E0h] BYREF
  char v207; // [rsp+28Bh] [rbp+20Bh]
  char v208; // [rsp+28Ch] [rbp+20Ch]
  char v209; // [rsp+28Dh] [rbp+20Dh]
  char v210; // [rsp+28Eh] [rbp+20Eh]
  char v211; // [rsp+28Fh] [rbp+20Fh]
  __int64 v212; // [rsp+290h] [rbp+210h]

  v212 = -2;
  result = sub_1416419F0(aType_4, 4, a2);
  if ( result && *(_BYTE *)result == 3 )
  {
    v5 = *(_QWORD *)(result + 24);
    v6 = result;
    result = *(_QWORD *)(result + 16);
    switch ( v5 )
    {
      case 6LL:
        result = *(_DWORD *)result ^ 0x74737563 | *(unsigned __int16 *)(result + 4) ^ 0x6D6Fu;
        if ( (_DWORD)result )
          goto LABEL_26;
        result = sub_1416419F0(aName_2, 4, a2);
        if ( !result || *(_BYTE *)result != 3 )
          goto LABEL_26;
        v148 = *(_OWORD *)(result + 16);
        v7 = sub_1416419F0(aDescription_0, 11, a2);
        v8 = 1;
        if ( v7 && *(_BYTE *)v7 == 3 )
        {
          v8 = *(_QWORD *)(v7 + 16);
          v9 = *(_QWORD *)(v7 + 24);
        }
        else
        {
          v9 = 0;
        }
        sub_14072C410((unsigned int)&v206, v9, 0, 1, 1);
        v85 = v206.m256i_i64[1];
        if ( v206.m256i_i32[0] == 1 )
          sub_141938D2B(v206.m256i_i64[1], v206.m256i_i64[2]);
        v86 = v206.m256i_i64[2];
        if ( v9 )
          sub_1418F44E0((__m128i *)v206.m256i_i64[2], (const __m128i *)v8, v9);
        v164 = v85;
        v165 = (_QWORD *)v86;
        v166 = v9;
        v87 = sub_1416419F0(aFormat_2, 6, a2);
        if ( !v87 )
          goto LABEL_119;
        v89 = sub_1416419F0(aType_4, 4, v87);
        if ( !v89 )
          goto LABEL_119;
        if ( *(_BYTE *)v89 != 3 )
          goto LABEL_119;
        v88 = *(_QWORD *)(v89 + 16);
        v90 = *(_QWORD *)(v89 + 24);
        v202.m256i_i64[0] = v88;
        v202.m256i_i64[1] = v90;
        if ( !v90 )
          goto LABEL_119;
        v203.m256i_i64[0] = (__int64)&v202;
        v203.m256i_i64[1] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v206, &unk_1419E8870, &v203);
        v91 = *(_OWORD *)v206.m256i_i8;
        v92 = v206.m256i_u64[2];
        if ( v206.m256i_i64[2] > v85 - v9 )
        {
          v192 = v206.m256i_i64[1];
          v174 = (_BYTE *)v206.m256i_i64[0];
          sub_14190D590((unsigned int)&v164, v9, v206.m256i_i32[4], 1, 1);
          v86 = (__int64)v165;
          v9 = v166;
          v91 = __PAIR128__(v192, (unsigned __int64)v174);
        }
        else if ( !v206.m256i_i64[2] )
        {
          goto LABEL_117;
        }
        sub_1418F44E0((__m128i *)(v86 + v9), *((const __m128i **)&v91 + 1), v92);
LABEL_117:
        v166 = v92 + v9;
        if ( (_QWORD)v91 )
          sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
LABEL_119:
        v174 = (_BYTE *)sub_1402BD6F0(v88);
        *(_QWORD *)&v158 = 0;
        v159 = 0;
        nullsub_1(v93);
        v94 = (_DWORD *)sub_140001650(4, 1);
        if ( !v94 )
          sub_141938D2B(1, 4);
        *v94 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v94;
        v202.m256i_i64[2] = 4;
        v198 = 1;
        sub_14040FB10(&v206, &off_1419E6178);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v198 = 0;
        sub_140E72AA0(&v206, &v158, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        nullsub_1(v95);
        v96 = (_QWORD *)sub_140001650(8, 1);
        if ( !v96 )
          sub_141938D2B(1, 8);
        *v96 = 0x6E6F6974636E7566LL;
        v154 = 8;
        v155 = v96;
        v156 = 8;
        *(_QWORD *)&v160 = 0;
        v161 = 0;
        nullsub_1(0x6E6F6974636E7566LL);
        v97 = (_DWORD *)sub_140001650(4, 1);
        if ( !v97 )
          sub_141938D2B(1, 4);
        *v97 = 1701667182;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v97;
        v202.m256i_i64[2] = 4;
        v197 = 1;
        sub_14040FB10(&v206, &v148);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v197 = 0;
        sub_140E72AA0(&v206, &v160, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        nullsub_1(v98);
        v99 = (void *)sub_140001650(11, 1);
        if ( !v99 )
          sub_141938D2B(1, 11);
        qmemcpy(v99, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v99;
        v202.m256i_i64[2] = 11;
        v196 = 1;
        sub_14040F9F0(&v206, &v164);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v196 = 0;
        sub_140E72AA0(&v206, &v160, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        nullsub_1(v100);
        v101 = (void *)sub_140001650(10, 1);
        if ( !v101 )
          sub_141938D2B(1, 10);
        qmemcpy(v101, "parameters", 10);
        v151 = 10;
        v152 = v101;
        v153 = 10;
        *(_QWORD *)&v162 = 0;
        v163 = 0;
        nullsub_1(0x6574656D61726170LL);
        v102 = (_DWORD *)sub_140001650(4, 1);
        if ( !v102 )
          sub_141938D2B(1, 4);
        *v102 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v102;
        v202.m256i_i64[2] = 4;
        v195 = 1;
        sub_14040FB10(&v206, &off_1419E5490);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v195 = 0;
        sub_140E72AA0(&v206, &v162, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        nullsub_1(v103);
        v104 = (void *)sub_140001650(10, 1);
        if ( !v104 )
          sub_141938D2B(1, 10);
        qmemcpy(v104, "properties", 10);
        *(_QWORD *)&v168 = 10;
        *((_QWORD *)&v168 + 1) = v104;
        v169 = 10;
        *(_QWORD *)v167 = 0;
        *(_QWORD *)&v167[16] = 0;
        nullsub_1(0x69747265706F7270LL);
        v105 = sub_140001650(5, 1);
        if ( !v105 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v105 + 4) = 116;
        *(_DWORD *)v105 = 1970302569;
        *(_QWORD *)&v172 = 5;
        *((_QWORD *)&v172 + 1) = v105;
        v173 = 5;
        v171.m256i_i64[0] = 0;
        v171.m256i_i64[2] = 0;
        nullsub_1(v106);
        v107 = (_DWORD *)sub_140001650(4, 1);
        if ( !v107 )
          sub_141938D2B(1, 4);
        *v107 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v107;
        v202.m256i_i64[2] = 4;
        v194 = 1;
        sub_14040FB10(&v206, &off_1419E88E0);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v194 = 0;
        sub_140E72AA0(&v206, &v171, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        nullsub_1(v108);
        v109 = (void *)sub_140001650(11, 1);
        if ( !v109 )
          sub_141938D2B(1, 11);
        qmemcpy(v109, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v109;
        v202.m256i_i64[2] = 11;
        v193 = 1;
        sub_14040FB10(&v206, &off_1419E8908);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v203 = v206;
        v193 = 0;
        sub_140E72AA0(&v206, &v171, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
          sub_14002F9D0(&v206);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v171.m256i_i8;
        v206.m256i_i64[3] = v171.m256i_i64[2];
        v206.m256i_i8[0] = 5;
        v185 = 0;
        sub_140E72AA0(&v203, v167, &v172, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v167;
        v206.m256i_i64[3] = *(_QWORD *)&v167[16];
        v206.m256i_i8[0] = 5;
        v184 = 0;
        sub_140E72AA0(&v203, &v162, &v168, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v110);
        v111 = (void *)sub_140001650(20, 1);
        if ( !v111 )
          sub_141938D2B(1, 20);
        qmemcpy(v111, "additionalProperties", 20);
        v202.m256i_i64[0] = 20;
        v202.m256i_i64[1] = (__int64)v111;
        v202.m256i_i64[2] = 20;
        v206.m256i_i16[0] = 257;
        sub_140E72AA0(&v203, &v162, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v112);
        v113 = (_QWORD *)sub_140001650(8, 1);
        if ( !v113 )
          sub_141938D2B(1, 8);
        *v113 = 0x6465726975716572LL;
        v202.m256i_i64[0] = 8;
        v202.m256i_i64[1] = (__int64)v113;
        v202.m256i_i64[2] = 8;
        v188 = 1;
        v192 = sub_1402BD6F0(0x6465726975716572LL);
        sub_14040FB10(&v206, &off_1419E8930);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E88C0);
        }
        v114 = *(_OWORD *)v206.m256i_i8;
        v203 = v206;
        v115 = (_OWORD *)v192;
        *(_OWORD *)(v192 + 16) = *(_OWORD *)&v206.m256i_u64[2];
        *v115 = v114;
        v206.m256i_i64[1] = 1;
        v206.m256i_i64[2] = (__int64)v115;
        v206.m256i_i64[3] = 1;
        v206.m256i_i8[0] = 4;
        v188 = 0;
        sub_140E72AA0(&v203, &v162, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = v162;
        v206.m256i_i64[3] = v163;
        v206.m256i_i8[0] = 5;
        v183 = 0;
        sub_140E72AA0(&v203, &v160, &v151, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = v160;
        v206.m256i_i64[3] = v161;
        v206.m256i_i8[0] = 5;
        v182 = 0;
        sub_140E72AA0(&v203, &v158, &v154, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)((char *)&v206.m256i_u32[1] + 3) = v158;
        *(__int64 *)((char *)&v206.m256i_i64[2] + 7) = v159;
        v116 = v174;
        *v174 = 5;
        result = *(__int64 *)((char *)&v206.m256i_i64[1] + 7);
        v117 = *(__int64 *)((char *)&v206.m256i_i64[2] + 7);
        *(_OWORD *)(v116 + 1) = *(_OWORD *)v206.m256i_i8;
        *((_QWORD *)v116 + 2) = result;
        *((_QWORD *)v116 + 3) = v117;
        *a1 = 1;
        a1[1] = v116;
        a1[2] = 1;
        v118 = v164;
        if ( !v164 )
          return result;
        v119 = v86;
        goto LABEL_171;
      case 8LL:
        if ( *(_QWORD *)result != 0x6E6F6974636E7566LL )
          goto LABEL_26;
        result = sub_1416419F0(aName_2, 4, a2);
        if ( !result || *(_BYTE *)result != 3 )
          goto LABEL_26;
        v13 = *(const __m128i **)(result + 16);
        v14 = *(_QWORD *)(result + 24);
        sub_14072C410((unsigned int)&v206, v14, 0, 1, 1);
        v192 = v206.m256i_i64[1];
        if ( v206.m256i_i32[0] == 1 )
          sub_141938D2B(v192, v206.m256i_i64[2]);
        v15 = v206.m256i_i64[2];
        if ( v14 )
          sub_1418F44E0((__m128i *)v206.m256i_i64[2], v13, v14);
        v150 = v15;
        v204 = 1;
        v16 = sub_1416419F0(aDescription_0, 11, a2);
        LOBYTE(v17) = 1;
        v174 = v17;
        v170 = -1;
        if ( v16 && *(_BYTE *)v16 == 3 )
        {
          v18 = *(const __m128i **)(v16 + 16);
          v13 = *(const __m128i **)(v16 + 24);
          sub_14072C410((unsigned int)&v206, (_DWORD)v13, 0, 1, 1);
          v170 = v206.m256i_i64[1];
          if ( v206.m256i_i32[0] == 1 )
          {
            v204 = 1;
            sub_141938D2B(v170, v206.m256i_i64[2]);
          }
          v157 = v206.m256i_i64[2];
          if ( v13 )
            sub_1418F44E0((__m128i *)v206.m256i_i64[2], v18, (unsigned __int64)v13);
          else
            v13 = nullptr;
          v174 = nullptr;
        }
        v208 = 1;
        v207 = 1;
        v126 = sub_1416419F0(aParameters_0, 10, a2);
        if ( v126 )
        {
          v128 = *(_BYTE *)v126;
          switch ( *(_BYTE *)v126 )
          {
            case 0:
              break;
            case 1:
              v206.m256i_i8[1] = *(_BYTE *)(v126 + 1);
              break;
            case 2:
              *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)(v126 + 8);
              break;
            case 3:
              v208 = 1;
              v207 = 1;
              sub_1416AC440(&v206.m256i_u64[1], v126 + 8);
              break;
            case 4:
              v132 = *(_QWORD *)(v126 + 16);
              v133 = *(_QWORD *)(v126 + 24);
              v208 = 1;
              v207 = 1;
              sub_1403918C0(&v206.m256i_u64[1], v132, v133);
              break;
            case 5:
              v208 = 1;
              v207 = 1;
              sub_140E8D7E0(&v206.m256i_u64[1], v126 + 8);
              break;
          }
          v206.m256i_i8[0] = v128;
          *(_OWORD *)&v171.m256i_u64[2] = *(_OWORD *)&v206.m256i_u64[2];
          v171.m256i_i16[0] = __PAIR16__(v206.m256i_u8[1], v128);
          *(__int64 *)((char *)v171.m256i_i64 + 2) = *(__int64 *)((char *)v206.m256i_i64 + 2);
          *(__int32 *)((char *)&v171.m256i_i32[2] + 2) = *(__int32 *)((char *)&v206.m256i_i32[2] + 2);
          v171.m256i_i16[7] = v206.m256i_i16[7];
        }
        else
        {
          *(_QWORD *)&v172 = 0;
          v173 = 0;
          nullsub_1(v127);
          v129 = (_DWORD *)sub_140001650(4, 1);
          if ( !v129 )
            sub_141938D2B(1, 4);
          *v129 = 1701869940;
          v202.m256i_i64[0] = 4;
          v202.m256i_i64[1] = (__int64)v129;
          v202.m256i_i64[2] = 4;
          v201 = 1;
          sub_14040FB10(&v206, &off_1419E5490);
          if ( v206.m256i_i8[0] == -1 )
          {
            v203.m256i_i64[0] = v206.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)&v203,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E60C8);
          }
          v203 = v206;
          v201 = 0;
          sub_140E72AA0(&v206, &v172, &v202, &v203);
          if ( v206.m256i_i8[0] != -1 )
            sub_14002F9D0(&v206);
          nullsub_1(v130);
          v131 = (void *)sub_140001650(10, 1);
          if ( !v131 )
            sub_141938D2B(1, 10);
          qmemcpy(v131, "properties", 10);
          v202.m256i_i64[0] = 10;
          v202.m256i_i64[1] = (__int64)v131;
          v202.m256i_i64[2] = 10;
          v206.m256i_i64[1] = 0;
          v206.m256i_i64[3] = 0;
          v206.m256i_i8[0] = 5;
          sub_140E72AA0(&v203, &v172, &v202, &v206);
          if ( v203.m256i_i8[0] != -1 )
            sub_14002F9D0(&v203);
          *(_OWORD *)&v171.m256i_u64[1] = v172;
          v171.m256i_i64[3] = v173;
          v171.m256i_i8[0] = 5;
        }
        v191 = 1;
        v190 = 1;
        v189 = 1;
        sub_1402E1D90(&v171);
        *(_QWORD *)&v168 = 0;
        v169 = 0;
        nullsub_1(v134);
        v135 = (_DWORD *)sub_140001650(4, 1);
        v186 = v135 == nullptr;
        if ( !v135 )
        {
          v211 = 1;
          v210 = 1;
          v209 = 1;
          sub_141938D2B(1, 4);
        }
        *v135 = 1701667182;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v135;
        v202.m256i_i64[2] = 4;
        v206.m256i_i64[1] = v192;
        v206.m256i_i64[2] = v150;
        v206.m256i_i64[3] = v14;
        v206.m256i_i8[0] = 3;
        v211 = 1;
        v210 = 1;
        v209 = 1;
        sub_140E72AA0(&v203, &v168, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
        {
          v211 = 1;
          v210 = 1;
          v209 = 1;
          sub_14002F9D0(&v203);
        }
        if ( !(_BYTE)v174 )
        {
          nullsub_1(v136);
          v137 = (void *)sub_140001650(11, 1);
          if ( !v137 )
            sub_141938D2B(1, 11);
          qmemcpy(v137, "description", 11);
          v202.m256i_i64[0] = 11;
          v202.m256i_i64[1] = (__int64)v137;
          v202.m256i_i64[2] = 11;
          v206.m256i_i64[1] = v170;
          v206.m256i_i64[2] = v157;
          v206.m256i_i64[3] = (__int64)v13;
          v206.m256i_i8[0] = 3;
          sub_140E72AA0(&v203, &v168, &v202, &v206);
          if ( v203.m256i_i8[0] != -1 )
            sub_14002F9D0(&v203);
        }
        nullsub_1(v136);
        v138 = (void *)sub_140001650(10, 1);
        if ( !v138 )
        {
          v211 = 1;
          v210 = 1;
          v209 = (char)v174;
          sub_141938D2B(1, 10);
        }
        qmemcpy(v138, "parameters", 10);
        v202.m256i_i64[0] = 10;
        v202.m256i_i64[1] = (__int64)v138;
        v202.m256i_i64[2] = 10;
        v206 = v171;
        v211 = 1;
        v210 = 0;
        v209 = (char)v174;
        sub_140E72AA0(&v203, &v168, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
        {
          v211 = 1;
          v210 = 0;
          v209 = (char)v174;
          sub_14002F9D0(&v203);
        }
        v211 = 1;
        v210 = 0;
        v209 = (char)v174;
        v139 = (_BYTE *)sub_1416419F0(aStrict_0, 6, a2);
        if ( v139 && *v139 == 1 && v139[1] == 1 )
        {
          nullsub_1(v140);
          v141 = sub_140001650(6, 1);
          if ( !v141 )
          {
            v211 = 1;
            v210 = 0;
            v209 = (char)v174;
            sub_141938D2B(1, 6);
          }
          *(_WORD *)(v141 + 4) = 29795;
          *(_DWORD *)v141 = 1769108595;
          v202.m256i_i64[0] = 6;
          v202.m256i_i64[1] = v141;
          v202.m256i_i64[2] = 6;
          v206.m256i_i16[0] = 257;
          v211 = 1;
          v210 = 0;
          v209 = (char)v174;
          sub_140E72AA0(&v203, &v168, &v202, &v206);
          if ( v203.m256i_i8[0] != -1 )
          {
            v211 = 1;
            v210 = 0;
            v209 = (char)v174;
            sub_14002F9D0(&v203);
          }
        }
        *(_QWORD *)v167 = 0;
        *(_QWORD *)&v167[16] = 0;
        nullsub_1(v140);
        v142 = (_DWORD *)sub_140001650(4, 1);
        if ( !v142 )
        {
          v205 = 1;
          sub_141938D2B(1, 4);
        }
        *v142 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v142;
        v202.m256i_i64[2] = 4;
        v200 = 1;
        sub_14040FB10(&v206, &off_1419E6178);
        if ( v206.m256i_i8[0] == -1 )
        {
          v203.m256i_i64[0] = v206.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v203,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8480);
        }
        v203 = v206;
        v200 = 0;
        sub_140E72AA0(&v206, v167, &v202, &v203);
        if ( v206.m256i_i8[0] != -1 )
        {
          v205 = 1;
          sub_14002F9D0(&v206);
        }
        nullsub_1(v143);
        v144 = (_QWORD *)sub_140001650(8, 1);
        if ( !v144 )
        {
          v205 = 1;
          sub_141938D2B(1, 8);
        }
        *v144 = 0x6E6F6974636E7566LL;
        *(_QWORD *)&v172 = 8;
        *((_QWORD *)&v172 + 1) = v144;
        v173 = 8;
        v206.m256i_i64[3] = v169;
        *(_OWORD *)&v206.m256i_u64[1] = v168;
        v206.m256i_i8[0] = 5;
        v199 = 1;
        sub_140412420(&v203, &v206);
        if ( v203.m256i_i8[0] == -1 )
        {
          v202.m256i_i64[0] = v203.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v202,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8480);
        }
        v202 = v203;
        v199 = 0;
        sub_140E72AA0(&v203, v167, &v172, &v202);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        v205 = 0;
        sub_14002F9D0(&v206);
        *(_OWORD *)&v147[7] = *(_OWORD *)v167;
        v206.m256i_i8[0] = 5;
        *(_OWORD *)&v206.m256i_i8[1] = *(_OWORD *)v147;
        *(_OWORD *)&v206.m256i_u64[2] = *(_OWORD *)&v167[8];
        result = sub_1402BD6F0(v145);
        v146 = *(_OWORD *)v206.m256i_i8;
        *(_OWORD *)(result + 16) = *(_OWORD *)&v206.m256i_u64[2];
        *(_OWORD *)result = v146;
        *a1 = 1;
        a1[1] = result;
        a1[2] = 1;
        return result;
      case 9LL:
        result = *(_QWORD *)result ^ 0x63617073656D616ELL | *(unsigned __int8 *)(result + 8) ^ 0x65LL;
        if ( result )
          goto LABEL_26;
        v10 = sub_1416419F0(aName_2, 4, a2);
        v11 = 1;
        if ( v10 && *(_BYTE *)v10 == 3 )
        {
          v11 = *(_QWORD *)(v10 + 16);
          v12 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          v12 = 0;
        }
        v202.m256i_i64[0] = v11;
        v202.m256i_i64[1] = v12;
        result = sub_1416419F0(aTools_1, 5, a2);
        if ( !result || *(_BYTE *)result != 4 )
          goto LABEL_26;
        if ( v12 < 2 )
        {
          if ( !v12 )
          {
            v203.m256i_i64[0] = 0;
            *(_OWORD *)&v203.m256i_u64[1] = 1u;
            goto LABEL_169;
          }
          goto LABEL_166;
        }
        if ( *(_WORD *)(v11 + v12 - 2) != 24415 )
        {
LABEL_166:
          v206.m256i_i64[0] = (__int64)&v202;
          v206.m256i_i64[1] = (__int64)sub_140186EE0;
          v120 = result;
          sub_1416ABFD0(&v203, &unk_1419E8638, &v206);
          result = v120;
          goto LABEL_169;
        }
        v121 = result;
        sub_14072C410((unsigned int)&v206, v12, 0, 1, 1);
        v122 = v206.m256i_i64[1];
        if ( v206.m256i_i8[0] )
          sub_141938D2B(v206.m256i_i64[1], v206.m256i_i64[2]);
        v123 = v206.m256i_i64[2];
        sub_1418F44E0((__m128i *)v206.m256i_i64[2], (const __m128i *)v11, v12);
        v203.m256i_i64[0] = v122;
        v203.m256i_i64[1] = v123;
        v203.m256i_i64[2] = v12;
        result = v121;
LABEL_169:
        v124 = *(_QWORD *)(result + 16);
        v125 = 32LL * *(_QWORD *)(result + 24);
        v206.m256i_i64[0] = v124;
        v206.m256i_i64[1] = v124 + v125;
        v206.m256i_i64[2] = (__int64)&v203;
        result = sub_1403D6BD0(a1, &v206);
        v118 = v203.m256i_i64[0];
        if ( v203.m256i_i64[0] )
        {
          v119 = v203.m256i_i64[1];
LABEL_171:
          result = sub_140001660(v119, v118, 1);
        }
        break;
      case 11LL:
        v19 = *(_QWORD *)result ^ 0x68735F6C61636F6CLL;
        if ( v19 | *(_QWORD *)(result + 3) ^ 0x6C6C6568735F6C61LL )
          goto LABEL_26;
        nullsub_1(v19);
        v20 = sub_140001650(32, 8);
        if ( !v20 )
          sub_141938D11(8, 32);
        v22 = (_BYTE *)v20;
        *(_QWORD *)&v148 = 0;
        v149 = 0;
        nullsub_1(v21);
        v23 = (_DWORD *)sub_140001650(4, 1);
        v174 = v22;
        if ( !v23 )
          sub_141938D2B(1, 4);
        *v23 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v23;
        v202.m256i_i64[2] = 4;
        nullsub_1(v24);
        v25 = (_QWORD *)sub_140001650(8, 1);
        v192 = (__int64)v25;
        if ( !v25 )
          sub_141938D2B(1, 8);
        *v25 = 0x6E6F6974636E7566LL;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 8;
        v206.m256i_i64[2] = (__int64)v25;
        v206.m256i_i64[3] = 8;
        sub_140E72AA0(&v203, &v148, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v26);
        v27 = (_QWORD *)sub_140001650(8, 1);
        if ( !v27 )
          sub_141938D2B(1, 8);
        *v27 = 0x6E6F6974636E7566LL;
        v164 = 8;
        v165 = v27;
        v166 = 8;
        *(_QWORD *)&v158 = 0;
        v159 = 0;
        nullsub_1(v28);
        v29 = (_DWORD *)sub_140001650(4, 1);
        if ( !v29 )
          sub_141938D2B(1, 4);
        *v29 = 1701667182;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v29;
        v202.m256i_i64[2] = 4;
        nullsub_1(v30);
        v31 = sub_140001650(5, 1);
        v192 = v31;
        if ( !v31 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v31 + 4) = 108;
        *(_DWORD *)v31 = 1818585203;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 5;
        v206.m256i_i64[2] = v31;
        v206.m256i_i64[3] = 5;
        sub_140E72AA0(&v203, &v158, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v32);
        v33 = (void *)sub_140001650(11, 1);
        if ( !v33 )
          sub_141938D2B(1, 11);
        qmemcpy(v33, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v33;
        v202.m256i_i64[2] = 11;
        nullsub_1(v34);
        v35 = (void *)sub_140001650(83, 1);
        v192 = (__int64)v35;
        if ( !v35 )
          sub_141938D2B(1, 83);
        qmemcpy(v35, "Execute a shell command on the local machine. Returns stdout, stderr and exit code.", 83);
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 83;
        v206.m256i_i64[2] = (__int64)v35;
        v206.m256i_i64[3] = 83;
        sub_140E72AA0(&v203, &v158, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v36);
        v37 = (void *)sub_140001650(10, 1);
        if ( !v37 )
          sub_141938D2B(1, 10);
        qmemcpy(v37, "parameters", 10);
        v154 = 10;
        v155 = v37;
        v156 = 10;
        *(_QWORD *)&v160 = 0;
        v161 = 0;
        nullsub_1(0x6574656D61726170LL);
        v38 = (_DWORD *)sub_140001650(4, 1);
        if ( !v38 )
          sub_141938D2B(1, 4);
        *v38 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v38;
        v202.m256i_i64[2] = 4;
        nullsub_1(v39);
        v40 = sub_140001650(6, 1);
        v192 = v40;
        if ( !v40 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v40 + 4) = 29795;
        *(_DWORD *)v40 = 1701470831;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 6;
        v206.m256i_i64[2] = v40;
        v206.m256i_i64[3] = 6;
        sub_140E72AA0(&v203, &v160, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v41);
        v42 = (void *)sub_140001650(10, 1);
        if ( !v42 )
          sub_141938D2B(1, 10);
        qmemcpy(v42, "properties", 10);
        v151 = 10;
        v152 = v42;
        v153 = 10;
        *(_QWORD *)&v162 = 0;
        v163 = 0;
        nullsub_1(0x69747265706F7270LL);
        v43 = (_DWORD *)sub_140001650(7, 1);
        if ( !v43 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v43 + 3) = 1684955501;
        *v43 = 1835888483;
        *(_QWORD *)&v168 = 7;
        *((_QWORD *)&v168 + 1) = v43;
        v169 = 7;
        *(_QWORD *)v167 = 0;
        *(_QWORD *)&v167[16] = 0;
        nullsub_1(v44);
        v45 = (_DWORD *)sub_140001650(4, 1);
        if ( !v45 )
          sub_141938D2B(1, 4);
        *v45 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v45;
        v202.m256i_i64[2] = 4;
        nullsub_1(v46);
        v47 = sub_140001650(5, 1);
        v192 = v47;
        if ( !v47 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v47 + 4) = 121;
        *(_DWORD *)v47 = 1634890337;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 5;
        v206.m256i_i64[2] = v47;
        v206.m256i_i64[3] = 5;
        sub_140E72AA0(&v203, v167, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v48);
        v49 = sub_140001650(5, 1);
        if ( !v49 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v49 + 4) = 115;
        *(_DWORD *)v49 = 1835365481;
        *(_QWORD *)&v172 = 5;
        *((_QWORD *)&v172 + 1) = v49;
        v173 = 5;
        v171.m256i_i64[0] = 0;
        v171.m256i_i64[2] = 0;
        nullsub_1(v50);
        v51 = (_DWORD *)sub_140001650(4, 1);
        if ( !v51 )
          sub_141938D2B(1, 4);
        *v51 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v51;
        v202.m256i_i64[2] = 4;
        nullsub_1(v52);
        v53 = sub_140001650(6, 1);
        v192 = v53;
        if ( !v53 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v53 + 4) = 26478;
        *(_DWORD *)v53 = 1769108595;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 6;
        v206.m256i_i64[2] = v53;
        v206.m256i_i64[3] = 6;
        sub_140E72AA0(&v203, &v171, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v171.m256i_i8;
        v206.m256i_i64[3] = v171.m256i_i64[2];
        v206.m256i_i8[0] = 5;
        v181 = 0;
        sub_140E72AA0(&v203, v167, &v172, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v54);
        v55 = (void *)sub_140001650(11, 1);
        if ( !v55 )
          sub_141938D2B(1, 11);
        qmemcpy(v55, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v55;
        v202.m256i_i64[2] = 11;
        nullsub_1(v56);
        v57 = (void *)sub_140001650(99, 1);
        v192 = (__int64)v57;
        if ( !v57 )
          sub_141938D2B(1, 99);
        qmemcpy(
          v57,
          "Argv array, e.g. [\"ls\", \"-la\"]. The first element is the program; remaining elements are arguments.",
          99);
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 99;
        v206.m256i_i64[2] = (__int64)v57;
        v206.m256i_i64[3] = 99;
        sub_140E72AA0(&v203, v167, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v167;
        v206.m256i_i64[3] = *(_QWORD *)&v167[16];
        v206.m256i_i8[0] = 5;
        v180 = 0;
        sub_140E72AA0(&v203, &v162, &v168, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v58);
        v59 = (_DWORD *)sub_140001650(7, 1);
        if ( !v59 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v59 + 3) = 1919509611;
        *v59 = 1802661751;
        *(_QWORD *)&v172 = 7;
        *((_QWORD *)&v172 + 1) = v59;
        v173 = 7;
        v171.m256i_i64[0] = 0;
        v171.m256i_i64[2] = 0;
        nullsub_1(v60);
        v61 = (_DWORD *)sub_140001650(4, 1);
        if ( !v61 )
          sub_141938D2B(1, 4);
        *v61 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v61;
        v202.m256i_i64[2] = 4;
        nullsub_1(v62);
        v63 = sub_140001650(6, 1);
        v192 = v63;
        if ( !v63 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v63 + 4) = 26478;
        *(_DWORD *)v63 = 1769108595;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 6;
        v206.m256i_i64[2] = v63;
        v206.m256i_i64[3] = 6;
        sub_140E72AA0(&v203, &v171, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v64);
        v65 = (void *)sub_140001650(11, 1);
        if ( !v65 )
          sub_141938D2B(1, 11);
        qmemcpy(v65, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v65;
        v202.m256i_i64[2] = 11;
        nullsub_1(v66);
        v67 = (void *)sub_140001650(51, 1);
        v192 = (__int64)v67;
        if ( !v67 )
          sub_141938D2B(1, 51);
        qmemcpy(v67, "Working directory to run the command in (optional).", 51);
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 51;
        v206.m256i_i64[2] = (__int64)v67;
        v206.m256i_i64[3] = 51;
        sub_140E72AA0(&v203, &v171, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v171.m256i_i8;
        v206.m256i_i64[3] = v171.m256i_i64[2];
        v206.m256i_i8[0] = 5;
        v179 = 0;
        sub_140E72AA0(&v203, &v162, &v172, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v68);
        v69 = (void *)sub_140001650(10, 1);
        if ( !v69 )
          sub_141938D2B(1, 10);
        qmemcpy(v69, "timeout_ms", 10);
        *(_QWORD *)&v172 = 10;
        *((_QWORD *)&v172 + 1) = v69;
        v173 = 10;
        v171.m256i_i64[0] = 0;
        v171.m256i_i64[2] = 0;
        nullsub_1(0x5F74756F656D6974LL);
        v70 = (_DWORD *)sub_140001650(4, 1);
        if ( !v70 )
          sub_141938D2B(1, 4);
        *v70 = 1701869940;
        v202.m256i_i64[0] = 4;
        v202.m256i_i64[1] = (__int64)v70;
        v202.m256i_i64[2] = 4;
        nullsub_1(v71);
        v72 = sub_140001650(6, 1);
        v192 = v72;
        if ( !v72 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v72 + 4) = 29285;
        *(_DWORD *)v72 = 1651340654;
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 6;
        v206.m256i_i64[2] = v72;
        v206.m256i_i64[3] = 6;
        sub_140E72AA0(&v203, &v171, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v73);
        v74 = (void *)sub_140001650(11, 1);
        if ( !v74 )
          sub_141938D2B(1, 11);
        qmemcpy(v74, "description", 11);
        v202.m256i_i64[0] = 11;
        v202.m256i_i64[1] = (__int64)v74;
        v202.m256i_i64[2] = 11;
        nullsub_1(v75);
        v76 = (void *)sub_140001650(50, 1);
        v192 = (__int64)v76;
        if ( !v76 )
          sub_141938D2B(1, 50);
        qmemcpy(v76, "Timeout in milliseconds (optional, default 30000).", 50);
        v206.m256i_i8[0] = 3;
        v206.m256i_i64[1] = 50;
        v206.m256i_i64[2] = (__int64)v76;
        v206.m256i_i64[3] = 50;
        sub_140E72AA0(&v203, &v171, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = *(_OWORD *)v171.m256i_i8;
        v206.m256i_i64[3] = v171.m256i_i64[2];
        v206.m256i_i8[0] = 5;
        v178 = 0;
        sub_140E72AA0(&v203, &v162, &v172, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = v162;
        v206.m256i_i64[3] = v163;
        v206.m256i_i8[0] = 5;
        v177 = 0;
        sub_140E72AA0(&v203, &v160, &v151, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        nullsub_1(v77);
        v78 = (_QWORD *)sub_140001650(8, 1);
        if ( !v78 )
          sub_141938D2B(1, 8);
        *v78 = 0x6465726975716572LL;
        v202.m256i_i64[0] = 8;
        v202.m256i_i64[1] = (__int64)v78;
        v202.m256i_i64[2] = 8;
        nullsub_1(0x6465726975716572LL);
        v79 = sub_140001650(32, 8);
        if ( !v79 )
        {
          v187 = 1;
          sub_141938D11(8, 32);
        }
        v81 = v79;
        nullsub_1(v80);
        v82 = (_DWORD *)sub_140001650(7, 1);
        if ( !v82 )
        {
          v192 = v81;
          sub_141938D2B(1, 7);
        }
        *(_DWORD *)((char *)v82 + 3) = 1684955501;
        *v82 = 1835888483;
        *(_BYTE *)v81 = 3;
        *(_QWORD *)(v81 + 8) = 7;
        *(_QWORD *)(v81 + 16) = v82;
        *(_QWORD *)(v81 + 24) = 7;
        v206.m256i_i64[1] = 1;
        v206.m256i_i64[2] = v81;
        v206.m256i_i64[3] = 1;
        v206.m256i_i8[0] = 4;
        v187 = 0;
        sub_140E72AA0(&v203, &v160, &v202, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = v160;
        v206.m256i_i64[3] = v161;
        v206.m256i_i8[0] = 5;
        v176 = 0;
        sub_140E72AA0(&v203, &v158, &v154, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)&v206.m256i_u64[1] = v158;
        v206.m256i_i64[3] = v159;
        v206.m256i_i8[0] = 5;
        v175 = 0;
        sub_140E72AA0(&v203, &v148, &v164, &v206);
        if ( v203.m256i_i8[0] != -1 )
          sub_14002F9D0(&v203);
        *(_OWORD *)((char *)&v206.m256i_u32[1] + 3) = v148;
        *(__int64 *)((char *)&v206.m256i_i64[2] + 7) = v149;
        v83 = v174;
        *v174 = 5;
        result = *(__int64 *)((char *)&v206.m256i_i64[1] + 7);
        v84 = *(__int64 *)((char *)&v206.m256i_i64[2] + 7);
        *(_OWORD *)(v83 + 1) = *(_OWORD *)v206.m256i_i8;
        *((_QWORD *)v83 + 2) = result;
        *((_QWORD *)v83 + 3) = v84;
        *a1 = 1;
        a1[1] = v83;
        a1[2] = 1;
        return result;
      default:
        result = v6;
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  return result;
}
