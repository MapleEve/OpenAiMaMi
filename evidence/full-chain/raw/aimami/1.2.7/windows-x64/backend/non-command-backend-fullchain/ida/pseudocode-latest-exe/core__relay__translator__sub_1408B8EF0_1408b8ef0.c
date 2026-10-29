// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1408b8ef0 | successor of pre-update 0x1402fc360 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.489, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408B8EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  void *v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  char v30; // di
  __int64 v31; // rax
  char v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // r12
  _WORD *v38; // rax
  _WORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rcx
  __int128 v71; // xmm0
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  void *v75; // r14
  __int64 v76; // rsi
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rax
  char v80; // si
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  const char *v84; // r14
  __int64 v85; // rbx
  __int64 v86; // r15
  __int64 v87; // rax
  char v88; // r12
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r14
  char *v93; // r15
  __int64 v94; // rax
  _DWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  _DWORD *v101; // rax
  int v102; // ecx
  __int8 v103; // al
  __int64 v104; // rdx
  __int64 v105; // rcx
  void *v106; // rax
  __int64 v107; // rbx
  _WORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  bool v111; // zf
  __int64 v112; // r12
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  _BYTE *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  _DWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  _DWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  void *v142; // rax
  __int64 v143; // rdx
  __int64 v144; // r12
  __int64 v145; // rax
  __int64 v146; // rbx
  __int64 v147; // rcx
  __int128 v148; // xmm0
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rax
  __int8 v153; // bl
  __int64 v154; // rdx
  __int64 v155; // rdx
  char v156; // si
  __int64 v157; // rcx
  __int64 v158; // rsi
  __int128 v161; // [rsp+50h] [rbp-30h] BYREF
  __int64 v162; // [rsp+60h] [rbp-20h]
  __int64 v163; // [rsp+68h] [rbp-18h]
  __int64 v164; // [rsp+70h] [rbp-10h]
  __m256i v165; // [rsp+78h] [rbp-8h] BYREF
  __int128 v166; // [rsp+98h] [rbp+18h] BYREF
  __int64 v167; // [rsp+A8h] [rbp+28h]
  __int128 v168; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v169; // [rsp+C0h] [rbp+40h]
  __int128 v170; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v171; // [rsp+D8h] [rbp+58h]
  __int64 v172; // [rsp+E0h] [rbp+60h] BYREF
  _DWORD *v173; // [rsp+E8h] [rbp+68h]
  __int64 v174; // [rsp+F0h] [rbp+70h]
  __int128 v175; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v176; // [rsp+108h] [rbp+88h]
  __int128 v177; // [rsp+110h] [rbp+90h] BYREF
  __int128 v178; // [rsp+120h] [rbp+A0h]
  __int64 v179; // [rsp+130h] [rbp+B0h]
  __int64 v180; // [rsp+138h] [rbp+B8h]
  __int64 v181; // [rsp+140h] [rbp+C0h]
  __int64 v182; // [rsp+148h] [rbp+C8h]
  __int64 v183; // [rsp+150h] [rbp+D0h]
  __int64 v184; // [rsp+158h] [rbp+D8h]
  _BYTE *v185; // [rsp+160h] [rbp+E0h]
  __int64 v186; // [rsp+168h] [rbp+E8h]
  __m256i v187; // [rsp+170h] [rbp+F0h] BYREF
  __m256i v188; // [rsp+190h] [rbp+110h] BYREF
  char v189; // [rsp+1B2h] [rbp+132h]
  char v190; // [rsp+1B3h] [rbp+133h]
  char v191; // [rsp+1B4h] [rbp+134h]
  char v192; // [rsp+1B5h] [rbp+135h]
  char v193; // [rsp+1B6h] [rbp+136h]
  char v194; // [rsp+1B7h] [rbp+137h]
  char v195; // [rsp+1B8h] [rbp+138h]
  char v196; // [rsp+1BAh] [rbp+13Ah]
  char v197; // [rsp+1BBh] [rbp+13Bh]
  char v198; // [rsp+1BCh] [rbp+13Ch]
  char v199; // [rsp+1BDh] [rbp+13Dh]
  char v200; // [rsp+1BEh] [rbp+13Eh]
  char v201; // [rsp+1BFh] [rbp+13Fh]
  __m256i v202; // [rsp+1C0h] [rbp+140h] BYREF
  char v203; // [rsp+1E7h] [rbp+167h]
  char v204; // [rsp+1E8h] [rbp+168h]
  char v205; // [rsp+1E9h] [rbp+169h]
  char v206; // [rsp+1EAh] [rbp+16Ah]
  char v207; // [rsp+1EBh] [rbp+16Bh]
  char v208; // [rsp+1ECh] [rbp+16Ch]
  char v209; // [rsp+1EDh] [rbp+16Dh]
  char v210; // [rsp+1EEh] [rbp+16Eh]
  char v211; // [rsp+1EFh] [rbp+16Fh]
  __int64 v212; // [rsp+1F0h] [rbp+170h]

  v212 = -2;
  *(_QWORD *)&v168 = 0;
  *((_QWORD *)&v168 + 1) = 1;
  v169 = 0;
  *(_QWORD *)&v175 = 0;
  *((_QWORD *)&v175 + 1) = 8;
  v176 = 0;
  v207 = 1;
  v206 = 1;
  v180 = a2;
  v3 = sub_1416724D0(aContent_5, 7, a2);
  if ( v3 && *(_BYTE *)v3 == 4 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    v5 = v4 + 32LL * *(_QWORD *)(v3 + 24);
    v183 = 1;
    v6 = 0;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          do
          {
            if ( v4 == v5 )
              goto LABEL_88;
            v7 = v4;
            v207 = 1;
            v206 = 1;
            v8 = sub_1416724D0(aType_8, 4, v4);
            v4 += 32;
          }
          while ( !v8 || *(_BYTE *)v8 != 3 );
          v9 = *(_DWORD **)(v8 + 16);
          v10 = *(_QWORD *)(v8 + 24);
          if ( v10 == 8 )
            break;
          if ( v10 == 4 && *v9 == 1954047348 )
          {
            v207 = 1;
            v206 = 1;
            v11 = sub_1416724D0(aText_8, 4, v7);
            if ( v11 )
            {
              if ( *(_BYTE *)v11 == 3 )
              {
                v12 = v6;
                v13 = *(_QWORD *)(v11 + 16);
                v14 = *(_QWORD *)(v11 + 24);
                if ( v14 > (__int64)v168 - v12 )
                {
                  v207 = 1;
                  v206 = 1;
                  sub_141939070((unsigned int)&v168, v12, v14, 1, 1);
                  v183 = *((_QWORD *)&v168 + 1);
                  v15 = v169;
                }
                else
                {
                  v15 = v12;
                  if ( !v14 )
                    goto LABEL_15;
                }
                sub_1419234B0(v183 + v15, v13, v14);
LABEL_15:
                v2 = v14 + v15;
                v169 = v2;
                v6 = v2;
              }
            }
          }
        }
      }
      while ( *(_QWORD *)v9 != 0x6573755F6C6F6F74LL );
      v207 = 1;
      v206 = 1;
      v16 = sub_1416724D0(aId_5, 2, v7);
      v179 = v6;
      v18 = 12;
      v186 = 12;
      if ( v16 )
      {
        v19 = &unk_141A53B24;
        if ( *(_BYTE *)v16 == 3 )
        {
          v18 = *(_QWORD *)(v16 + 24);
          if ( v18 < 0 )
          {
            v20 = 0;
            v78 = v182;
            goto LABEL_94;
          }
          v186 = *(_QWORD *)(v16 + 24);
          if ( !v18 )
          {
            v182 = 1;
            LOBYTE(v2) = 1;
            v186 = 0;
            goto LABEL_25;
          }
          v19 = *(void **)(v16 + 16);
        }
      }
      else
      {
        v19 = &unk_141A53B24;
      }
      nullsub_1(v18, v17);
      v20 = 1;
      v21 = v186;
      v22 = sub_140001650(v186, 1);
      if ( !v22 )
      {
        v78 = v21;
LABEL_94:
        v207 = 1;
        v206 = 1;
        sub_14196B2DB(v20, v78);
      }
      v182 = v22;
      sub_1419234B0(v22, v19, v21);
      LODWORD(v2) = 0;
LABEL_25:
      v23 = sub_1416724D0(aName_6, 4, v7);
      v26 = 4;
      if ( v23 )
      {
        v27 = &unk_141A53B30;
        if ( *(_BYTE *)v23 == 3 )
        {
          v26 = *(_QWORD *)(v23 + 24);
          if ( v26 < 0 )
          {
            v28 = 0;
            goto LABEL_98;
          }
          LODWORD(v185) = v2;
          if ( !v26 )
          {
            v181 = 1;
            v30 = 1;
            v184 = 0;
            goto LABEL_33;
          }
          v27 = *(void **)(v23 + 16);
          LODWORD(v2) = (_DWORD)v185;
        }
      }
      else
      {
        v27 = &unk_141A53B30;
      }
      LODWORD(v185) = v2;
      nullsub_1(v25, v24);
      v28 = 1;
      v29 = sub_140001650(v26, 1);
      if ( !v29 )
      {
        v181 = v26;
LABEL_98:
        sub_14196B2DB(v28, v181);
      }
      v181 = v29;
      v184 = v26;
      sub_1419234B0(v29, v27, v26);
      v30 = 0;
LABEL_33:
      v31 = sub_1416724D0(aInput_3, 5, v7);
      if ( v31 )
      {
        v32 = *(_BYTE *)v31;
        switch ( *(_BYTE *)v31 )
        {
          case 0:
            break;
          case 1:
            v202.m256i_i8[1] = *(_BYTE *)(v31 + 1);
            break;
          case 2:
            *(_OWORD *)&v202.m256i_u64[1] = *(_OWORD *)(v31 + 8);
            break;
          case 3:
            sub_1416DB410(&v202.m256i_u64[1], v31 + 8);
            break;
          case 4:
            sub_1401C07A0(&v202.m256i_u64[1], *(_QWORD *)(v31 + 16), *(_QWORD *)(v31 + 24));
            break;
          case 5:
            if ( *(_QWORD *)(v31 + 24) )
            {
              v33 = *(_QWORD *)(v31 + 8);
              if ( !v33 )
                sub_14196B5D0(&off_141A6CB98);
              sub_140A21590(&v202.m256i_u64[1], v33, *(_QWORD *)(v31 + 16));
            }
            else
            {
              v202.m256i_i64[1] = 0;
              v202.m256i_i64[3] = 0;
            }
            break;
        }
        v178 = *(_OWORD *)&v202.m256i_u64[2];
        LOBYTE(v177) = v32;
        BYTE1(v177) = v202.m256i_i8[1];
        *(_DWORD *)((char *)&v177 + 2) = *(__int32 *)((char *)v202.m256i_i32 + 2);
        WORD3(v177) = v202.m256i_i16[3];
        *((_QWORD *)&v177 + 1) = v202.m256i_i64[1];
        v202.m256i_i8[0] = 0;
        sub_140032FF0(&v202);
      }
      else
      {
        v202.m256i_i8[0] = 0;
        v178 = *(_OWORD *)&v202.m256i_u64[2];
        LOBYTE(v177) = 0;
        *(_QWORD *)((char *)&v177 + 1) = *(__int64 *)((char *)v202.m256i_i64 + 1);
        *(_DWORD *)((char *)&v177 + 9) = *(__int32 *)((char *)&v202.m256i_i32[2] + 1);
        *(_WORD *)((char *)&v177 + 13) = *(__int16 *)((char *)&v202.m256i_i16[6] + 1);
        HIBYTE(v177) = v202.m256i_i8[15];
      }
      sub_14084D9C0(&v202, &v177);
      v36 = v202.m256i_i64[1];
      if ( v202.m256i_i64[0] == -1 )
      {
        v202.m256i_i64[0] = v202.m256i_i64[1];
        nullsub_1(v35, v34);
        v38 = (_WORD *)sub_140001650(2, 1);
        if ( !v38 )
          sub_14196B2DB(1, 2);
        v36 = (__int64)v38;
        *v38 = 32123;
        sub_140032F30(&v202);
        v37 = 2;
        v163 = 2;
      }
      else
      {
        v163 = v202.m256i_i64[0];
        v37 = v202.m256i_i64[2];
      }
      v164 = v36;
      *(_QWORD *)&v161 = 0;
      v162 = 0;
      nullsub_1(v35, v34);
      v39 = (_WORD *)sub_140001650(2, 1);
      if ( !v39 )
        sub_14196B2DB(1, 2);
      *v39 = 25705;
      v188.m256i_i64[0] = 2;
      v188.m256i_i64[1] = (__int64)v39;
      v188.m256i_i64[2] = 2;
      v42 = 1;
      if ( !(_BYTE)v185 )
      {
        nullsub_1(v41, v40);
        v43 = v186;
        v44 = sub_140001650(v186, 1);
        if ( !v44 )
        {
          v195 = 1;
          sub_14196B2DB(1, v43);
        }
        v42 = v44;
        sub_1419234B0(v44, v182, v43);
      }
      v202.m256i_i8[0] = 3;
      v202.m256i_i64[1] = v186;
      v202.m256i_i64[2] = v42;
      v202.m256i_i64[3] = v186;
      v195 = 0;
      sub_140A68320(&v187, &v161, &v188, &v202);
      if ( v187.m256i_i8[0] != -1 )
        sub_140032FF0(&v187);
      nullsub_1(v46, v45);
      v47 = (_DWORD *)sub_140001650(4, 1);
      if ( !v47 )
        sub_14196B2DB(1, 4);
      *v47 = 1701869940;
      v188.m256i_i64[0] = 4;
      v188.m256i_i64[1] = (__int64)v47;
      v188.m256i_i64[2] = 4;
      nullsub_1(v49, v48);
      v50 = (_QWORD *)sub_140001650(8, 1);
      v185 = v50;
      if ( !v50 )
        sub_14196B2DB(1, 8);
      *v50 = 0x6E6F6974636E7566LL;
      v202.m256i_i8[0] = 3;
      v202.m256i_i64[1] = 8;
      v202.m256i_i64[2] = (__int64)v50;
      v202.m256i_i64[3] = 8;
      sub_140A68320(&v187, &v161, &v188, &v202);
      if ( v187.m256i_i8[0] != -1 )
        sub_140032FF0(&v187);
      nullsub_1(v52, v51);
      v53 = (_QWORD *)sub_140001650(8, 1);
      if ( !v53 )
        sub_14196B2DB(1, 8);
      *v53 = 0x6E6F6974636E7566LL;
      *(_QWORD *)&v166 = 8;
      *((_QWORD *)&v166 + 1) = v53;
      v167 = 8;
      *(_QWORD *)&v170 = 0;
      v171 = 0;
      nullsub_1(0x6E6F6974636E7566LL, v54);
      v55 = (_DWORD *)sub_140001650(4, 1);
      if ( !v55 )
        sub_14196B2DB(1, 4);
      *v55 = 1701667182;
      v172 = 4;
      v173 = v55;
      v174 = 4;
      v58 = 1;
      if ( !v30 )
      {
        nullsub_1(v57, v56);
        v59 = v184;
        v60 = sub_140001650(v184, 1);
        if ( !v60 )
        {
          v194 = 1;
          sub_14196B2DB(1, v59);
        }
        v58 = v60;
        sub_1419234B0(v60, v181, v59);
      }
      v202.m256i_i8[0] = 3;
      v202.m256i_i64[1] = v184;
      v202.m256i_i64[2] = v58;
      v202.m256i_i64[3] = v184;
      v194 = 0;
      sub_140A68320(&v187, &v170, &v172, &v202);
      v6 = v179;
      if ( v187.m256i_i8[0] != -1 )
        sub_140032FF0(&v187);
      nullsub_1(v62, v61);
      v63 = sub_140001650(9, 1);
      if ( !v63 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v63 = 0x746E656D75677261LL;
      *(_BYTE *)(v63 + 8) = 115;
      v172 = 9;
      v173 = (_DWORD *)v63;
      v174 = 9;
      if ( v37 < 0 )
      {
        v65 = 0;
LABEL_96:
        v193 = 1;
        sub_14196B2DB(v65, v37);
      }
      if ( v37 )
      {
        nullsub_1(0x746E656D75677261LL, v64);
        v65 = 1;
        v66 = sub_140001650(v37, 1);
        if ( !v66 )
          goto LABEL_96;
        v67 = v66;
        sub_1419234B0(v66, v164, v37);
        v6 = v179;
      }
      else
      {
        v67 = 1;
      }
      v202.m256i_i8[0] = 3;
      v202.m256i_i64[1] = v37;
      v202.m256i_i64[2] = v67;
      v202.m256i_i64[3] = v37;
      v193 = 0;
      sub_140A68320(&v187, &v170, &v172, &v202);
      if ( v187.m256i_i8[0] != -1 )
        sub_140032FF0(&v187);
      v188.m256i_i64[3] = v171;
      *(_OWORD *)&v188.m256i_u64[1] = v170;
      v188.m256i_i8[0] = 5;
      v192 = 0;
      sub_140A68320(&v202, &v161, &v166, &v188);
      if ( v202.m256i_i8[0] != -1 )
        sub_140032FF0(&v202);
      v165.m256i_i64[3] = v162;
      *(_OWORD *)&v165.m256i_u64[1] = v161;
      v165.m256i_i8[0] = 5;
      v68 = v176;
      if ( v176 == (_QWORD)v175 )
        sub_1419397B0(&v175);
      v69 = *((_QWORD *)&v175 + 1);
      v70 = 32 * v68;
      v71 = *(_OWORD *)v165.m256i_i8;
      *(_OWORD *)(*((_QWORD *)&v175 + 1) + v70 + 16) = *(_OWORD *)&v165.m256i_u64[2];
      *(_OWORD *)(v69 + v70) = v71;
      v2 = v68 + 1;
      v176 = v2;
      if ( v163 )
        sub_140001660(v164, v163, 1);
      sub_140032FF0(&v177);
      if ( v184 )
        sub_140001660(v181, v184, 1);
      if ( v186 )
        sub_140001660(v182, v186, 1);
    }
  }
  v6 = 0;
LABEL_88:
  v207 = 1;
  v206 = 1;
  v72 = sub_1416724D0(aModel_2, 5, v180);
  v75 = &unk_141A53D65;
  v76 = 7;
  if ( v72 && *(_BYTE *)v72 == 3 )
  {
    v76 = *(_QWORD *)(v72 + 24);
    if ( v76 < 0 )
    {
      v77 = 0;
      goto LABEL_92;
    }
    if ( !v76 )
    {
      v179 = 1;
      v80 = 1;
      v186 = 0;
      goto LABEL_115;
    }
    v75 = *(void **)(v72 + 16);
  }
  nullsub_1(v74, v73);
  v77 = 1;
  v79 = sub_140001650(v76, 1);
  if ( !v79 )
  {
LABEL_92:
    v207 = 1;
    v206 = 1;
    sub_14196B2DB(v77, v76);
  }
  v179 = v79;
  v186 = v76;
  sub_1419234B0(v79, v75, v76);
  v80 = 0;
LABEL_115:
  v201 = 1;
  v200 = 1;
  v81 = sub_1416724D0(aId_5, 2, v180);
  v84 = "chatcmpl-aimamilength";
  v85 = 15;
  if ( v81 && *(_BYTE *)v81 == 3 )
  {
    v85 = *(_QWORD *)(v81 + 24);
    if ( v85 < 0 )
    {
      v86 = 0;
      goto LABEL_119;
    }
    if ( !v85 )
    {
      v182 = 1;
      v88 = 1;
      v184 = 0;
      goto LABEL_124;
    }
    v84 = *(const char **)(v81 + 16);
  }
  nullsub_1(v83, v82);
  v86 = 1;
  v87 = sub_140001650(v85, 1);
  if ( !v87 )
  {
LABEL_119:
    v201 = 1;
    v200 = 1;
    sub_14196B2DB(v86, v85);
  }
  v182 = v87;
  v184 = v85;
  sub_1419234B0(v87, v84, v85);
  v88 = 0;
LABEL_124:
  v199 = 1;
  v198 = 1;
  v89 = sub_1416724D0(aStopReason, 11, v180);
  v92 = 4;
  v93 = aStop;
  if ( v89 && *(_BYTE *)v89 == 3 )
  {
    v91 = *(_QWORD *)(v89 + 16);
    v94 = *(_QWORD *)(v89 + 24);
    if ( v94 == 10 )
    {
      v90 = *(_QWORD *)v91 ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(v91 + 8) ^ 0x736ELL;
      v93 = "length";
      if ( v90 )
        v93 = (char *)v91;
      v92 = 4LL * (v90 != 0) + 6;
    }
    else if ( v94 == 8 )
    {
      if ( *(_QWORD *)v91 != 0x6E7275745F646E65LL )
      {
        v90 = *(_QWORD *)v91 == 0x6573755F6C6F6F74LL;
        v93 = aToolCalls;
        if ( *(_QWORD *)v91 != 0x6573755F6C6F6F74LL )
          v93 = (char *)v91;
        v92 = 2 * v90 + 8;
      }
    }
    else
    {
      v93 = (char *)v91;
      v92 = v94;
    }
  }
  *(_QWORD *)&v166 = 0;
  v167 = 0;
  nullsub_1(v91, v90);
  v95 = (_DWORD *)sub_140001650(4, 1);
  if ( !v95 )
  {
    v210 = 1;
    v209 = 1;
    v208 = 1;
    sub_14196B2DB(1, 4);
  }
  *v95 = 1701605234;
  v188.m256i_i64[0] = 4;
  v188.m256i_i64[1] = (__int64)v95;
  v188.m256i_i64[2] = 4;
  nullsub_1(v97, v96);
  v98 = sub_140001650(9, 1);
  v183 = v98;
  if ( !v98 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v98 = 0x6E61747369737361LL;
  *(_BYTE *)(v98 + 8) = 116;
  v202.m256i_i64[1] = 9;
  v202.m256i_i64[2] = v98;
  v202.m256i_i64[3] = 9;
  v202.m256i_i8[0] = 3;
  sub_140A68320(&v187, &v166, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v210 = 1;
    v209 = 1;
    v208 = 1;
    sub_140032FF0(&v187);
  }
  nullsub_1(v100, v99);
  v101 = (_DWORD *)sub_140001650(7, 1);
  if ( !v101 )
  {
    v210 = 1;
    v209 = 1;
    v208 = 1;
    sub_14196B2DB(1, 7);
  }
  *(_DWORD *)((char *)v101 + 3) = 1953391988;
  *v101 = 1953394531;
  v188.m256i_i64[0] = 7;
  v188.m256i_i64[1] = (__int64)v101;
  v188.m256i_i64[2] = 7;
  if ( v6 )
  {
    v202.m256i_i64[3] = v169;
    *(_OWORD *)&v202.m256i_u64[1] = v168;
    v103 = 3;
    v102 = 0;
  }
  else
  {
    LOBYTE(v102) = 1;
    v103 = 0;
  }
  v202.m256i_i8[0] = v103;
  v210 = 1;
  LODWORD(v183) = v102;
  v209 = v102;
  v208 = 1;
  sub_140A68320(&v187, &v166, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v210 = 1;
    v209 = v183;
    v208 = 1;
    sub_140032FF0(&v187);
  }
  if ( v176 )
  {
    nullsub_1(v105, v104);
    v106 = (void *)sub_140001650(10, 1);
    if ( !v106 )
    {
      v210 = 1;
      v209 = v183;
      v208 = 1;
      sub_14196B2DB(1, 10);
    }
    qmemcpy(v106, "tool_calls", 10);
    v188.m256i_i64[0] = 10;
    v188.m256i_i64[1] = (__int64)v106;
    v188.m256i_i64[2] = 10;
    v202.m256i_i64[3] = v176;
    *(_OWORD *)&v202.m256i_u64[1] = v175;
    v202.m256i_i8[0] = 4;
    v210 = 0;
    v209 = v183;
    v208 = 1;
    sub_140A68320(&v187, &v166, &v188, &v202);
    if ( v187.m256i_i8[0] != -1 )
    {
      v210 = 0;
      v209 = v183;
      v208 = 1;
      sub_140032FF0(&v187);
    }
    LODWORD(v6) = 0;
  }
  else
  {
    LOBYTE(v6) = 1;
  }
  *(_QWORD *)&v170 = 0;
  v171 = 0;
  nullsub_1(v105, v104);
  v107 = 1;
  v108 = (_WORD *)sub_140001650(2, 1);
  LODWORD(v181) = v6;
  if ( !v108 )
  {
    v211 = 1;
    sub_14196B2DB(1, 2);
  }
  *v108 = 25705;
  v188.m256i_i64[0] = 2;
  v188.m256i_i64[1] = (__int64)v108;
  v188.m256i_i64[2] = 2;
  v111 = v88 == 0;
  v112 = v184;
  if ( v111 )
  {
    nullsub_1(v110, v109);
    v113 = sub_140001650(v112, 1);
    if ( !v113 )
    {
      v191 = 1;
      sub_14196B2DB(1, v112);
    }
    v107 = v113;
    sub_1419234B0(v113, v182, v112);
  }
  v202.m256i_i8[0] = 3;
  v202.m256i_i64[1] = v112;
  v202.m256i_i64[2] = v107;
  v202.m256i_i64[3] = v112;
  v191 = 0;
  sub_140A68320(&v187, &v170, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v211 = 1;
    sub_140032FF0(&v187);
  }
  nullsub_1(v115, v114);
  v116 = sub_140001650(6, 1);
  if ( !v116 )
  {
    v211 = 1;
    sub_14196B2DB(1, 6);
  }
  *(_WORD *)(v116 + 4) = 29795;
  *(_DWORD *)v116 = 1701470831;
  v188.m256i_i64[0] = 6;
  v188.m256i_i64[1] = v116;
  v188.m256i_i64[2] = 6;
  nullsub_1(v118, v117);
  v119 = (_BYTE *)sub_140001650(15, 1);
  v185 = v119;
  if ( !v119 )
    sub_14196B2DB(1, 15);
  qmemcpy(v119, "chat.completion", 15);
  v202.m256i_i8[0] = 3;
  v202.m256i_i64[1] = 15;
  v202.m256i_i64[2] = (__int64)v119;
  v202.m256i_i64[3] = 15;
  sub_140A68320(&v187, &v170, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v211 = 1;
    sub_140032FF0(&v187);
  }
  nullsub_1(v121, v120);
  v122 = 1;
  v123 = sub_140001650(5, 1);
  if ( !v123 )
  {
    v211 = 1;
    sub_14196B2DB(1, 5);
  }
  *(_BYTE *)(v123 + 4) = 108;
  *(_DWORD *)v123 = 1701080941;
  v188.m256i_i64[0] = 5;
  v188.m256i_i64[1] = v123;
  v188.m256i_i64[2] = 5;
  v111 = v80 == 0;
  v126 = v186;
  if ( v111 )
  {
    nullsub_1(v125, v124);
    v127 = sub_140001650(v126, 1);
    if ( !v127 )
    {
      v190 = 1;
      sub_14196B2DB(1, v126);
    }
    v122 = v127;
    sub_1419234B0(v127, v179, v126);
  }
  v202.m256i_i8[0] = 3;
  v202.m256i_i64[1] = v126;
  v202.m256i_i64[2] = v122;
  v202.m256i_i64[3] = v126;
  v190 = 0;
  sub_140A68320(&v187, &v170, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v211 = 1;
    sub_140032FF0(&v187);
  }
  nullsub_1(v129, v128);
  v130 = (_DWORD *)sub_140001650(7, 1);
  if ( !v130 )
  {
    v211 = 1;
    sub_14196B2DB(1, 7);
  }
  *(_DWORD *)((char *)v130 + 3) = 1936024425;
  *v130 = 1768908899;
  v172 = 7;
  v173 = v130;
  v174 = 7;
  nullsub_1(v132, v131);
  v133 = sub_140001650(32, 8);
  if ( !v133 )
  {
    v197 = 1;
    v196 = 1;
    sub_14196B2C1(8, 32);
  }
  v185 = (_BYTE *)v133;
  *(_QWORD *)&v177 = 0;
  *(_QWORD *)&v178 = 0;
  nullsub_1(v135, v134);
  v136 = sub_140001650(5, 1);
  if ( !v136 )
  {
    v205 = 1;
    sub_14196B2DB(1, 5);
  }
  *(_BYTE *)(v136 + 4) = 120;
  *(_DWORD *)v136 = 1701080681;
  v188.m256i_i64[0] = 5;
  v188.m256i_i64[1] = v136;
  v188.m256i_i64[2] = 5;
  v202.m256i_i8[0] = 2;
  *(_OWORD *)&v202.m256i_u64[1] = 0;
  v205 = 1;
  sub_140A68320(&v187, &v177, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v205 = 1;
    sub_140032FF0(&v187);
  }
  nullsub_1(v138, v137);
  v139 = (_DWORD *)sub_140001650(7, 1);
  if ( !v139 )
  {
    v205 = 1;
    sub_14196B2DB(1, 7);
  }
  *(_DWORD *)((char *)v139 + 3) = 1701273971;
  *v139 = 1936942445;
  v165.m256i_i64[0] = 7;
  v165.m256i_i64[1] = (__int64)v139;
  v165.m256i_i64[2] = 7;
  v202.m256i_i64[3] = v167;
  *(_OWORD *)&v202.m256i_u64[1] = v166;
  v202.m256i_i8[0] = 5;
  v204 = 1;
  sub_140B73E90(&v187, &v202);
  if ( v187.m256i_i8[0] == -1 )
  {
    v188.m256i_i64[0] = v187.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v188,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A541C0);
  }
  v188 = v187;
  v204 = 0;
  sub_140A68320(&v187, &v177, &v165, &v188);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  v205 = 0;
  sub_140032FF0(&v202);
  nullsub_1(v141, v140);
  v142 = (void *)sub_140001650(13, 1);
  if ( !v142 )
  {
    v205 = 0;
    sub_14196B2DB(1, 13);
  }
  qmemcpy(v142, "finish_reason", 13);
  v188.m256i_i64[0] = 13;
  v188.m256i_i64[1] = (__int64)v142;
  v188.m256i_i64[2] = 13;
  if ( v92 < 0 )
  {
    v144 = 0;
    goto LABEL_180;
  }
  if ( v92 )
  {
    nullsub_1(0x725F6873696E6966LL, v143);
    v144 = 1;
    v145 = sub_140001650(v92, 1);
    if ( !v145 )
    {
LABEL_180:
      v189 = 1;
      sub_14196B2DB(v144, v92);
    }
    v146 = v145;
    sub_1419234B0(v145, v93, v92);
  }
  else
  {
    v146 = 1;
  }
  v202.m256i_i8[0] = 3;
  v202.m256i_i64[1] = v92;
  v202.m256i_i64[2] = v146;
  v202.m256i_i64[3] = v92;
  v189 = 0;
  sub_140A68320(&v187, &v177, &v188, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v205 = 0;
    sub_140032FF0(&v187);
  }
  *(_OWORD *)((char *)&v202.m256i_u32[1] + 3) = v177;
  *(__int64 *)((char *)&v202.m256i_i64[2] + 7) = v178;
  v147 = (__int64)v185;
  *v185 = 5;
  v148 = *(_OWORD *)v202.m256i_i8;
  *(_OWORD *)(v147 + 16) = *(_OWORD *)((char *)&v202.m256i_u64[1] + 7);
  *(_OWORD *)(v147 + 1) = v148;
  v202.m256i_i64[1] = 1;
  v202.m256i_i64[2] = v147;
  v202.m256i_i64[3] = 1;
  v202.m256i_i8[0] = 4;
  v197 = 0;
  v196 = 0;
  sub_140A68320(&v187, &v170, &v172, &v202);
  if ( v187.m256i_i8[0] != -1 )
  {
    v211 = 0;
    sub_140032FF0(&v187);
  }
  nullsub_1(v150, v149);
  v151 = sub_140001650(5, 1);
  if ( !v151 )
  {
    v211 = 0;
    sub_14196B2DB(1, 5);
  }
  *(_BYTE *)(v151 + 4) = 101;
  *(_DWORD *)v151 = 1734439797;
  v165.m256i_i64[0] = 5;
  v185 = (_BYTE *)v151;
  v165.m256i_i64[1] = v151;
  v165.m256i_i64[2] = 5;
  v152 = sub_1416724D0(aUsage_0, 5, v180);
  if ( v152 )
  {
    v153 = *(_BYTE *)v152;
    switch ( *(_BYTE *)v152 )
    {
      case 0:
        break;
      case 1:
        v202.m256i_i8[1] = *(_BYTE *)(v152 + 1);
        break;
      case 2:
        *(_OWORD *)&v202.m256i_u64[1] = *(_OWORD *)(v152 + 8);
        break;
      case 3:
        sub_1416DB410(&v202.m256i_u64[1], v152 + 8);
        break;
      case 4:
        sub_1401C07A0(&v202.m256i_u64[1], *(_QWORD *)(v152 + 16), *(_QWORD *)(v152 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v152 + 24) )
        {
          v154 = *(_QWORD *)(v152 + 8);
          if ( !v154 )
            sub_14196B5D0(&off_141A6CB98);
          sub_140A21590(&v202.m256i_u64[1], v154, *(_QWORD *)(v152 + 16));
        }
        else
        {
          v202.m256i_i64[1] = 0;
          v202.m256i_i64[3] = 0;
        }
        break;
    }
    *(_OWORD *)&v187.m256i_u64[2] = *(_OWORD *)&v202.m256i_u64[2];
    v187.m256i_i8[1] = v202.m256i_i8[1];
    *(__int32 *)((char *)v187.m256i_i32 + 2) = *(__int32 *)((char *)v202.m256i_i32 + 2);
    v187.m256i_i16[3] = v202.m256i_i16[3];
    v187.m256i_i64[1] = v202.m256i_i64[1];
    v187.m256i_i8[16] = v202.m256i_i8[16];
    v202.m256i_i64[1] = 0;
    v202.m256i_i64[3] = 0;
    v202.m256i_i8[0] = 5;
    v187.m256i_i8[0] = v153;
    sub_140032FF0(&v202);
  }
  else
  {
    v202.m256i_i64[1] = 0;
    v202.m256i_i64[3] = 0;
    v202.m256i_i8[0] = 5;
    v187.m256i_i8[0] = 5;
    *(__int32 *)((char *)v187.m256i_i32 + 1) = *(__int32 *)((char *)v202.m256i_i32 + 1);
    *(__int16 *)((char *)&v187.m256i_i16[2] + 1) = *(__int16 *)((char *)&v202.m256i_i16[2] + 1);
    v187.m256i_i8[7] = v202.m256i_i8[7];
    v187.m256i_i64[1] = 0;
    *(_OWORD *)&v187.m256i_u64[2] = v202.m256i_u64[2];
  }
  v203 = 1;
  sub_140B73E90(&v202, &v187);
  if ( v202.m256i_i8[0] == -1 )
  {
    v188.m256i_i64[0] = v202.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v188,
      (unsigned int)&off_141A52958,
      (__int64)&off_141A541C0);
  }
  v188 = v202;
  v203 = 0;
  sub_140A68320(&v202, &v170, &v165, &v188);
  if ( v202.m256i_i8[0] != -1 )
    sub_140032FF0(&v202);
  v211 = 0;
  sub_140032FF0(&v187);
  *(_QWORD *)(a1 + 24) = v171;
  *(_OWORD *)(a1 + 8) = v170;
  *(_BYTE *)a1 = 5;
  if ( v184 )
    sub_140001660(v182, v184, 1);
  v155 = v186;
  v156 = v181;
  if ( v186 )
    sub_140001660(v179, v186, 1);
  if ( v156 )
  {
    v157 = *((_QWORD *)&v175 + 1);
    v186 = v176;
    v180 = 0;
    v184 = *((_QWORD *)&v175 + 1);
    while ( v186 != v180 )
    {
      ++v180;
      v158 = v157 + 32;
      sub_1401AB4D0(v157, v155);
      v157 = v158;
    }
    if ( (_QWORD)v175 )
      sub_140001660(*((_QWORD *)&v175 + 1), 32 * v175, 8);
  }
  if ( (_BYTE)v183 && (_QWORD)v168 )
    sub_140001660(*((_QWORD *)&v168 + 1), v168, 1);
  return a1;
}
