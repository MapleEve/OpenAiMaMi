// module: codexmate_lib/core/relay/translator
// addr: 0x140a19da0
// name: sub_140A19DA0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A19DA0(__int64 a1, __int64 a2)
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
  __int64 v17; // rcx
  void *v18; // r13
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  const char *v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  char v28; // di
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // r12
  _QWORD *v35; // r12
  _WORD *v36; // rax
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // rdx
  _WORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  _DWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rcx
  __int128 v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rcx
  void *v67; // r14
  __int64 v68; // rsi
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rax
  char v72; // si
  __int64 v73; // rax
  __int64 v74; // rcx
  const char *v75; // r14
  __int64 v76; // rbx
  __int64 v77; // r15
  __int64 v78; // rax
  char v79; // r12
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r14
  const char *v83; // r15
  __int64 v84; // rax
  __int64 v85; // rdx
  _DWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  _DWORD *v90; // rax
  int v91; // ecx
  __int8 v92; // al
  __int64 v93; // rcx
  void *v94; // rax
  __int64 v95; // rbx
  _WORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r12
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  _BYTE *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rcx
  _DWORD *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  _DWORD *v117; // rax
  __int64 v118; // rcx
  void *v119; // rax
  __int64 v120; // r12
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rcx
  __int128 v124; // xmm0
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int8 v128; // bl
  __int128 v129; // xmm1
  __int128 v130; // xmm1
  __int64 v131; // rdx
  char v132; // si
  __int64 v133; // rcx
  __int64 v134; // rsi
  __int128 v137; // [rsp+58h] [rbp-28h] BYREF
  __int64 v138; // [rsp+68h] [rbp-18h]
  __int64 v139; // [rsp+70h] [rbp-10h]
  __m256i v140; // [rsp+78h] [rbp-8h] BYREF
  __int128 v141; // [rsp+98h] [rbp+18h] BYREF
  __int64 v142; // [rsp+A8h] [rbp+28h]
  __int128 v143; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v144; // [rsp+C0h] [rbp+40h]
  __int128 v145; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v146; // [rsp+D8h] [rbp+58h]
  __m256i v147; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v148; // [rsp+108h] [rbp+88h] BYREF
  _DWORD *v149; // [rsp+110h] [rbp+90h]
  __int64 v150; // [rsp+118h] [rbp+98h]
  __int128 v151; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v152; // [rsp+130h] [rbp+B0h]
  __int64 v153; // [rsp+138h] [rbp+B8h]
  __int64 v154; // [rsp+140h] [rbp+C0h]
  _QWORD *v155; // [rsp+148h] [rbp+C8h]
  __int64 v156; // [rsp+150h] [rbp+D0h]
  __int64 v157; // [rsp+158h] [rbp+D8h]
  __int64 v158; // [rsp+160h] [rbp+E0h]
  __int64 v159; // [rsp+168h] [rbp+E8h]
  _BYTE *v160; // [rsp+170h] [rbp+F0h]
  __int64 v161; // [rsp+178h] [rbp+F8h]
  __m256i v162; // [rsp+180h] [rbp+100h] BYREF
  __m256i v163; // [rsp+1A0h] [rbp+120h] BYREF
  char v164; // [rsp+1C2h] [rbp+142h]
  char v165; // [rsp+1C3h] [rbp+143h]
  char v166; // [rsp+1C4h] [rbp+144h]
  char v167; // [rsp+1C5h] [rbp+145h]
  char v168; // [rsp+1C6h] [rbp+146h]
  char v169; // [rsp+1C7h] [rbp+147h]
  char v170; // [rsp+1C8h] [rbp+148h]
  char v171; // [rsp+1CAh] [rbp+14Ah]
  char v172; // [rsp+1CBh] [rbp+14Bh]
  char v173; // [rsp+1CCh] [rbp+14Ch]
  char v174; // [rsp+1CDh] [rbp+14Dh]
  char v175; // [rsp+1CEh] [rbp+14Eh]
  char v176; // [rsp+1CFh] [rbp+14Fh]
  __m256i v177; // [rsp+1D0h] [rbp+150h] BYREF
  char v178; // [rsp+1F7h] [rbp+177h]
  char v179; // [rsp+1F8h] [rbp+178h]
  char v180; // [rsp+1F9h] [rbp+179h]
  char v181; // [rsp+1FAh] [rbp+17Ah]
  char v182; // [rsp+1FBh] [rbp+17Bh]
  char v183; // [rsp+1FCh] [rbp+17Ch]
  char v184; // [rsp+1FDh] [rbp+17Dh]
  char v185; // [rsp+1FEh] [rbp+17Eh]
  char v186; // [rsp+1FFh] [rbp+17Fh]
  __int64 v187; // [rsp+200h] [rbp+180h]

  v187 = -2;
  *(_QWORD *)&v143 = 0;
  *((_QWORD *)&v143 + 1) = 1;
  v144 = 0;
  *(_QWORD *)&v151 = 0;
  *((_QWORD *)&v151 + 1) = 8;
  v152 = 0;
  v182 = 1;
  v181 = 1;
  v154 = a2;
  v3 = sub_141433D50(aContent_6, 7, a2);
  if ( v3 && *(_BYTE *)v3 == 4 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    v5 = v4 + 32LL * *(_QWORD *)(v3 + 24);
    v158 = 1;
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
              goto LABEL_94;
            v7 = v4;
            v182 = 1;
            v181 = 1;
            v8 = sub_141433D50(aType_8, 4, v4);
            v4 += 32;
          }
          while ( !v8 || *(_BYTE *)v8 != 3 );
          v9 = *(_DWORD **)(v8 + 16);
          v10 = *(_QWORD *)(v8 + 24);
          if ( v10 == 8 )
            break;
          if ( v10 == 4 && *v9 == 1954047348 )
          {
            v182 = 1;
            v181 = 1;
            v11 = sub_141433D50(aText_10, 4, v7);
            if ( v11 )
            {
              if ( *(_BYTE *)v11 == 3 )
              {
                v12 = v6;
                v13 = *(_QWORD *)(v11 + 16);
                v14 = *(_QWORD *)(v11 + 24);
                if ( v14 > (__int64)v143 - v12 )
                {
                  v182 = 1;
                  v181 = 1;
                  sub_141688D30((unsigned int)&v143, v12, v14, 1, 1);
                  v158 = *((_QWORD *)&v143 + 1);
                  v15 = v144;
                }
                else
                {
                  v15 = v12;
                  if ( !v14 )
                    goto LABEL_15;
                }
                sub_141684120(v158 + v15, v13, v14);
LABEL_15:
                v2 = v14 + v15;
                v144 = v2;
                v6 = v2;
              }
            }
          }
        }
      }
      while ( *(_QWORD *)v9 != 0x6573755F6C6F6F74LL );
      v182 = 1;
      v181 = 1;
      v16 = sub_141433D50(aId_6, 2, v7);
      v153 = v6;
      v17 = 12;
      v161 = 12;
      if ( v16 )
      {
        v18 = &unk_1417A7B30;
        if ( *(_BYTE *)v16 == 3 )
        {
          v17 = *(_QWORD *)(v16 + 24);
          if ( v17 < 0 )
          {
            v19 = 0;
            v70 = v157;
            goto LABEL_100;
          }
          v161 = *(_QWORD *)(v16 + 24);
          if ( !v17 )
          {
            v157 = 1;
            LOBYTE(v2) = 1;
            v161 = 0;
            goto LABEL_25;
          }
          v18 = *(void **)(v16 + 16);
        }
      }
      else
      {
        v18 = &unk_1417A7B30;
      }
      nullsub_1(v17);
      v19 = 1;
      v20 = v161;
      v21 = sub_140001650(v161, 1);
      if ( !v21 )
      {
        v70 = v20;
LABEL_100:
        v182 = 1;
        v181 = 1;
        sub_1416C2D4B(v19, v70);
      }
      v157 = v21;
      sub_141684120(v21, v18, v20);
      LODWORD(v2) = 0;
LABEL_25:
      v22 = sub_141433D50(aName_7, 4, v7);
      v24 = 4;
      if ( v22 )
      {
        v25 = "tool";
        if ( *(_BYTE *)v22 == 3 )
        {
          v24 = *(_QWORD *)(v22 + 24);
          if ( v24 < 0 )
          {
            v26 = 0;
            goto LABEL_104;
          }
          LODWORD(v160) = v2;
          if ( !v24 )
          {
            v156 = 1;
            v28 = 1;
            v159 = 0;
            goto LABEL_33;
          }
          v25 = *(const char **)(v22 + 16);
          LODWORD(v2) = (_DWORD)v160;
        }
      }
      else
      {
        v25 = "tool";
      }
      LODWORD(v160) = v2;
      nullsub_1(v23);
      v26 = 1;
      v27 = sub_140001650(v24, 1);
      if ( !v27 )
      {
        v156 = v24;
LABEL_104:
        sub_1416C2D4B(v26, v156);
      }
      v156 = v27;
      v159 = v24;
      sub_141684120(v27, v25, v24);
      v28 = 0;
LABEL_33:
      v29 = sub_141433D50(aInput_2, 5, v7);
      if ( v29 )
      {
        switch ( *(_BYTE *)v29 )
        {
          case 0:
            v177.m256i_i8[0] = 0;
            break;
          case 1:
          case 2:
            v30 = *(_OWORD *)v29;
            *(_OWORD *)&v177.m256i_u64[2] = *(_OWORD *)(v29 + 16);
            *(_OWORD *)v177.m256i_i8 = v30;
            break;
          case 3:
            sub_14149C500(&v177.m256i_u64[1], v29 + 8);
            v177.m256i_i8[0] = 3;
            break;
          case 4:
            sub_1402CE260(&v177.m256i_u64[1], *(_QWORD *)(v29 + 16), *(_QWORD *)(v29 + 24));
            v177.m256i_i8[0] = 4;
            break;
          case 5:
            if ( *(_QWORD *)(v29 + 24) )
            {
              v31 = *(_QWORD *)(v29 + 8);
              if ( !v31 )
                sub_1416C3040(&off_141747358);
              sub_1402CCD80(&v177.m256i_u64[1], v31, *(_QWORD *)(v29 + 16));
            }
            else
            {
              v177.m256i_i64[1] = 0;
              v177.m256i_i64[3] = 0;
            }
            v177.m256i_i8[0] = 5;
            break;
        }
        v147 = v177;
        v177.m256i_i8[0] = 0;
        sub_1400104F0(&v177);
      }
      else
      {
        v177.m256i_i8[0] = 0;
        *(_OWORD *)&v147.m256i_u64[2] = *(_OWORD *)&v177.m256i_u64[2];
        v147.m256i_i8[0] = 0;
        *(__int64 *)((char *)v147.m256i_i64 + 1) = *(__int64 *)((char *)v177.m256i_i64 + 1);
        *(__int32 *)((char *)&v147.m256i_i32[2] + 1) = *(__int32 *)((char *)&v177.m256i_i32[2] + 1);
        *(__int16 *)((char *)&v147.m256i_i16[6] + 1) = *(__int16 *)((char *)&v177.m256i_i16[6] + 1);
        v147.m256i_i8[15] = v177.m256i_i8[15];
      }
      sub_140985700(&v177, (__int64)&v147);
      v33 = v177.m256i_i64[1];
      if ( v177.m256i_i64[0] == -1 )
      {
        v177.m256i_i64[0] = v177.m256i_i64[1];
        v35 = (_QWORD *)v177.m256i_i64[1];
        nullsub_1(v32);
        v36 = (_WORD *)sub_140001650(2, 1);
        if ( !v36 )
          sub_1416C2D4B(1, 2);
        v33 = (__int64)v36;
        *v36 = 32123;
        v37 = *v35;
        v38 = *v35 == 1;
        v155 = v35;
        if ( v38 )
        {
          sub_140018650(v35 + 1);
        }
        else if ( !v37 )
        {
          v39 = v155[2];
          if ( v39 )
            sub_140001660(v155[1], v39, 1);
        }
        sub_140001660(v155, 40, 8);
        v34 = 2;
        v139 = 2;
      }
      else
      {
        v139 = v177.m256i_i64[0];
        v34 = v177.m256i_i64[2];
      }
      v155 = (_QWORD *)v33;
      *(_QWORD *)&v137 = 0;
      v138 = 0;
      nullsub_1(v32);
      v40 = (_WORD *)sub_140001650(2, 1);
      if ( !v40 )
        sub_1416C2D4B(1, 2);
      *v40 = 25705;
      v163.m256i_i64[0] = 2;
      v163.m256i_i64[1] = (__int64)v40;
      v163.m256i_i64[2] = 2;
      v42 = 1;
      if ( !(_BYTE)v160 )
      {
        nullsub_1(v41);
        v43 = v161;
        v44 = sub_140001650(v161, 1);
        if ( !v44 )
        {
          v170 = 1;
          sub_1416C2D4B(1, v43);
        }
        v42 = v44;
        sub_141684120(v44, v157, v43);
      }
      v177.m256i_i8[0] = 3;
      v177.m256i_i64[1] = v161;
      v177.m256i_i64[2] = v42;
      v177.m256i_i64[3] = v161;
      v170 = 0;
      sub_140307860(&v162, &v137, &v163, &v177);
      if ( v162.m256i_i8[0] != -1 )
        sub_1400104F0(&v162);
      nullsub_1(v45);
      v46 = (_DWORD *)sub_140001650(4, 1);
      if ( !v46 )
        sub_1416C2D4B(1, 4);
      *v46 = 1701869940;
      v163.m256i_i64[0] = 4;
      v163.m256i_i64[1] = (__int64)v46;
      v163.m256i_i64[2] = 4;
      nullsub_1(v47);
      v48 = (_QWORD *)sub_140001650(8, 1);
      v160 = v48;
      if ( !v48 )
        sub_1416C2D4B(1, 8);
      *v48 = 0x6E6F6974636E7566LL;
      v177.m256i_i8[0] = 3;
      v177.m256i_i64[1] = 8;
      v177.m256i_i64[2] = (__int64)v48;
      v177.m256i_i64[3] = 8;
      sub_140307860(&v162, &v137, &v163, &v177);
      if ( v162.m256i_i8[0] != -1 )
        sub_1400104F0(&v162);
      nullsub_1(v49);
      v50 = (_QWORD *)sub_140001650(8, 1);
      if ( !v50 )
        sub_1416C2D4B(1, 8);
      *v50 = 0x6E6F6974636E7566LL;
      *(_QWORD *)&v141 = 8;
      *((_QWORD *)&v141 + 1) = v50;
      v142 = 8;
      *(_QWORD *)&v145 = 0;
      v146 = 0;
      nullsub_1(0x6E6F6974636E7566LL);
      v51 = (_DWORD *)sub_140001650(4, 1);
      if ( !v51 )
        sub_1416C2D4B(1, 4);
      *v51 = 1701667182;
      v148 = 4;
      v149 = v51;
      v150 = 4;
      v53 = 1;
      if ( !v28 )
      {
        nullsub_1(v52);
        v54 = v159;
        v55 = sub_140001650(v159, 1);
        if ( !v55 )
        {
          v169 = 1;
          sub_1416C2D4B(1, v54);
        }
        v53 = v55;
        sub_141684120(v55, v156, v54);
      }
      v177.m256i_i8[0] = 3;
      v177.m256i_i64[1] = v159;
      v177.m256i_i64[2] = v53;
      v177.m256i_i64[3] = v159;
      v169 = 0;
      sub_140307860(&v162, &v145, &v148, &v177);
      v6 = v153;
      if ( v162.m256i_i8[0] != -1 )
        sub_1400104F0(&v162);
      nullsub_1(v56);
      v57 = sub_140001650(9, 1);
      if ( !v57 )
        sub_1416C2D4B(1, 9);
      *(_QWORD *)v57 = 0x746E656D75677261LL;
      *(_BYTE *)(v57 + 8) = 115;
      v148 = 9;
      v149 = (_DWORD *)v57;
      v150 = 9;
      if ( v34 < 0 )
      {
        v58 = 0;
LABEL_102:
        v168 = 1;
        sub_1416C2D4B(v58, v34);
      }
      if ( v34 )
      {
        nullsub_1(0x746E656D75677261LL);
        v58 = 1;
        v59 = sub_140001650(v34, 1);
        if ( !v59 )
          goto LABEL_102;
        v60 = v59;
        sub_141684120(v59, v155, v34);
        v6 = v153;
      }
      else
      {
        v60 = 1;
      }
      v177.m256i_i8[0] = 3;
      v177.m256i_i64[1] = v34;
      v177.m256i_i64[2] = v60;
      v177.m256i_i64[3] = v34;
      v168 = 0;
      sub_140307860(&v162, &v145, &v148, &v177);
      if ( v162.m256i_i8[0] != -1 )
        sub_1400104F0(&v162);
      v163.m256i_i64[3] = v146;
      *(_OWORD *)&v163.m256i_u64[1] = v145;
      v163.m256i_i8[0] = 5;
      v167 = 0;
      sub_140307860(&v177, &v137, &v141, &v163);
      if ( v177.m256i_i8[0] != -1 )
        sub_1400104F0(&v177);
      v140.m256i_i64[3] = v138;
      *(_OWORD *)&v140.m256i_u64[1] = v137;
      v140.m256i_i8[0] = 5;
      v61 = v152;
      if ( v152 == (_QWORD)v151 )
        sub_1416890A0(&v151);
      v62 = *((_QWORD *)&v151 + 1);
      v63 = 32 * v61;
      v64 = *(_OWORD *)v140.m256i_i8;
      *(_OWORD *)(*((_QWORD *)&v151 + 1) + v63 + 16) = *(_OWORD *)&v140.m256i_u64[2];
      *(_OWORD *)(v62 + v63) = v64;
      v2 = v61 + 1;
      v152 = v2;
      if ( v139 )
        sub_140001660(v155, v139, 1);
      sub_1400104F0(&v147);
      if ( v159 )
        sub_140001660(v156, v159, 1);
      if ( v161 )
        sub_140001660(v157, v161, 1);
    }
  }
  v6 = 0;
LABEL_94:
  v182 = 1;
  v181 = 1;
  v65 = sub_141433D50(aModel_6, 5, v154);
  v67 = &unk_1417A4B5D;
  v68 = 7;
  if ( v65 && *(_BYTE *)v65 == 3 )
  {
    v68 = *(_QWORD *)(v65 + 24);
    if ( v68 < 0 )
    {
      v69 = 0;
      goto LABEL_98;
    }
    if ( !v68 )
    {
      v153 = 1;
      v72 = 1;
      v161 = 0;
      goto LABEL_121;
    }
    v67 = *(void **)(v65 + 16);
  }
  nullsub_1(v66);
  v69 = 1;
  v71 = sub_140001650(v68, 1);
  if ( !v71 )
  {
LABEL_98:
    v182 = 1;
    v181 = 1;
    sub_1416C2D4B(v69, v68);
  }
  v153 = v71;
  v161 = v68;
  sub_141684120(v71, v67, v68);
  v72 = 0;
LABEL_121:
  v176 = 1;
  v175 = 1;
  v73 = sub_141433D50(aId_6, 2, v154);
  v75 = "chatcmpl-aimamiend_turn";
  v76 = 15;
  if ( v73 && *(_BYTE *)v73 == 3 )
  {
    v76 = *(_QWORD *)(v73 + 24);
    if ( v76 < 0 )
    {
      v77 = 0;
      goto LABEL_125;
    }
    if ( !v76 )
    {
      v157 = 1;
      v79 = 1;
      v159 = 0;
      goto LABEL_130;
    }
    v75 = *(const char **)(v73 + 16);
  }
  nullsub_1(v74);
  v77 = 1;
  v78 = sub_140001650(v76, 1);
  if ( !v78 )
  {
LABEL_125:
    v176 = 1;
    v175 = 1;
    sub_1416C2D4B(v77, v76);
  }
  v157 = v78;
  v159 = v76;
  sub_141684120(v78, v75, v76);
  v79 = 0;
LABEL_130:
  v174 = 1;
  v173 = 1;
  v80 = sub_141433D50(aStopReason, 11, v154);
  v82 = 4;
  v83 = aStop;
  if ( v80 && *(_BYTE *)v80 == 3 )
  {
    v81 = *(_QWORD *)(v80 + 16);
    v84 = *(_QWORD *)(v80 + 24);
    if ( v84 == 10 )
    {
      v85 = *(_QWORD *)v81 ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(v81 + 8) ^ 0x736ELL;
      v83 = (const char *)&unk_1417A7E20;
      if ( v85 )
        v83 = (const char *)v81;
      v82 = 4LL * (v85 != 0) + 6;
    }
    else if ( v84 == 8 )
    {
      if ( *(_QWORD *)v81 != 0x6E7275745F646E65LL )
      {
        v83 = aToolCalls;
        if ( *(_QWORD *)v81 != 0x6573755F6C6F6F74LL )
          v83 = (const char *)v81;
        v82 = 2LL * (*(_QWORD *)v81 == 0x6573755F6C6F6F74LL) + 8;
      }
    }
    else
    {
      v83 = (const char *)v81;
      v82 = v84;
    }
  }
  *(_QWORD *)&v141 = 0;
  v142 = 0;
  nullsub_1(v81);
  v86 = (_DWORD *)sub_140001650(4, 1);
  if ( !v86 )
  {
    v185 = 1;
    v184 = 1;
    v183 = 1;
    sub_1416C2D4B(1, 4);
  }
  *v86 = 1701605234;
  v163.m256i_i64[0] = 4;
  v163.m256i_i64[1] = (__int64)v86;
  v163.m256i_i64[2] = 4;
  nullsub_1(v87);
  v88 = sub_140001650(9, 1);
  v158 = v88;
  if ( !v88 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v88 = 0x6E61747369737361LL;
  *(_BYTE *)(v88 + 8) = 116;
  v177.m256i_i64[1] = 9;
  v177.m256i_i64[2] = v88;
  v177.m256i_i64[3] = 9;
  v177.m256i_i8[0] = 3;
  sub_140307860(&v162, &v141, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v185 = 1;
    v184 = 1;
    v183 = 1;
    sub_1400104F0(&v162);
  }
  nullsub_1(v89);
  v90 = (_DWORD *)sub_140001650(7, 1);
  if ( !v90 )
  {
    v185 = 1;
    v184 = 1;
    v183 = 1;
    sub_1416C2D4B(1, 7);
  }
  *(_DWORD *)((char *)v90 + 3) = 1953391988;
  *v90 = 1953394531;
  v163.m256i_i64[0] = 7;
  v163.m256i_i64[1] = (__int64)v90;
  v163.m256i_i64[2] = 7;
  if ( v6 )
  {
    v177.m256i_i64[3] = v144;
    *(_OWORD *)&v177.m256i_u64[1] = v143;
    v92 = 3;
    v91 = 0;
  }
  else
  {
    LOBYTE(v91) = 1;
    v92 = 0;
  }
  v177.m256i_i8[0] = v92;
  v185 = 1;
  LODWORD(v158) = v91;
  v184 = v91;
  v183 = 1;
  sub_140307860(&v162, &v141, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v185 = 1;
    v184 = v158;
    v183 = 1;
    sub_1400104F0(&v162);
  }
  if ( v152 )
  {
    nullsub_1(v93);
    v94 = (void *)sub_140001650(10, 1);
    if ( !v94 )
    {
      v185 = 1;
      v184 = v158;
      v183 = 1;
      sub_1416C2D4B(1, 10);
    }
    qmemcpy(v94, "tool_calls", 10);
    v163.m256i_i64[0] = 10;
    v163.m256i_i64[1] = (__int64)v94;
    v163.m256i_i64[2] = 10;
    v177.m256i_i64[3] = v152;
    *(_OWORD *)&v177.m256i_u64[1] = v151;
    v177.m256i_i8[0] = 4;
    v185 = 0;
    v184 = v158;
    v183 = 1;
    sub_140307860(&v162, &v141, &v163, &v177);
    if ( v162.m256i_i8[0] != -1 )
    {
      v185 = 0;
      v184 = v158;
      v183 = 1;
      sub_1400104F0(&v162);
    }
    LODWORD(v6) = 0;
  }
  else
  {
    LOBYTE(v6) = 1;
  }
  *(_QWORD *)&v145 = 0;
  v146 = 0;
  nullsub_1(v93);
  v95 = 1;
  v96 = (_WORD *)sub_140001650(2, 1);
  LODWORD(v156) = v6;
  if ( !v96 )
  {
    v186 = 1;
    sub_1416C2D4B(1, 2);
  }
  *v96 = 25705;
  v163.m256i_i64[0] = 2;
  v163.m256i_i64[1] = (__int64)v96;
  v163.m256i_i64[2] = 2;
  v38 = v79 == 0;
  v98 = v159;
  if ( v38 )
  {
    nullsub_1(v97);
    v99 = sub_140001650(v98, 1);
    if ( !v99 )
    {
      v166 = 1;
      sub_1416C2D4B(1, v98);
    }
    v95 = v99;
    sub_141684120(v99, v157, v98);
  }
  v177.m256i_i8[0] = 3;
  v177.m256i_i64[1] = v98;
  v177.m256i_i64[2] = v95;
  v177.m256i_i64[3] = v98;
  v166 = 0;
  sub_140307860(&v162, &v145, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v186 = 1;
    sub_1400104F0(&v162);
  }
  nullsub_1(v100);
  v101 = sub_140001650(6, 1);
  if ( !v101 )
  {
    v186 = 1;
    sub_1416C2D4B(1, 6);
  }
  *(_WORD *)(v101 + 4) = 29795;
  *(_DWORD *)v101 = 1701470831;
  v163.m256i_i64[0] = 6;
  v163.m256i_i64[1] = v101;
  v163.m256i_i64[2] = 6;
  nullsub_1(v102);
  v103 = (_BYTE *)sub_140001650(15, 1);
  v160 = v103;
  if ( !v103 )
    sub_1416C2D4B(1, 15);
  qmemcpy(v103, "chat.completion", 15);
  v177.m256i_i8[0] = 3;
  v177.m256i_i64[1] = 15;
  v177.m256i_i64[2] = (__int64)v103;
  v177.m256i_i64[3] = 15;
  sub_140307860(&v162, &v145, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v186 = 1;
    sub_1400104F0(&v162);
  }
  nullsub_1(v104);
  v105 = 1;
  v106 = sub_140001650(5, 1);
  if ( !v106 )
  {
    v186 = 1;
    sub_1416C2D4B(1, 5);
  }
  *(_BYTE *)(v106 + 4) = 108;
  *(_DWORD *)v106 = 1701080941;
  v163.m256i_i64[0] = 5;
  v163.m256i_i64[1] = v106;
  v163.m256i_i64[2] = 5;
  v38 = v72 == 0;
  v108 = v161;
  if ( v38 )
  {
    nullsub_1(v107);
    v109 = sub_140001650(v108, 1);
    if ( !v109 )
    {
      v165 = 1;
      sub_1416C2D4B(1, v108);
    }
    v105 = v109;
    sub_141684120(v109, v153, v108);
  }
  v177.m256i_i8[0] = 3;
  v177.m256i_i64[1] = v108;
  v177.m256i_i64[2] = v105;
  v177.m256i_i64[3] = v108;
  v165 = 0;
  sub_140307860(&v162, &v145, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v186 = 1;
    sub_1400104F0(&v162);
  }
  nullsub_1(v110);
  v111 = (_DWORD *)sub_140001650(7, 1);
  if ( !v111 )
  {
    v186 = 1;
    sub_1416C2D4B(1, 7);
  }
  *(_DWORD *)((char *)v111 + 3) = 1936024425;
  *v111 = 1768908899;
  v148 = 7;
  v149 = v111;
  v150 = 7;
  nullsub_1(v112);
  v113 = sub_140001650(32, 8);
  if ( !v113 )
  {
    v172 = 1;
    v171 = 1;
    sub_1416C2D31(8, 32);
  }
  v160 = (_BYTE *)v113;
  v147.m256i_i64[0] = 0;
  v147.m256i_i64[2] = 0;
  nullsub_1(v114);
  v115 = sub_140001650(5, 1);
  if ( !v115 )
  {
    v180 = 1;
    sub_1416C2D4B(1, 5);
  }
  *(_BYTE *)(v115 + 4) = 120;
  *(_DWORD *)v115 = 1701080681;
  v163.m256i_i64[0] = 5;
  v163.m256i_i64[1] = v115;
  v163.m256i_i64[2] = 5;
  v177.m256i_i8[0] = 2;
  *(_OWORD *)&v177.m256i_u64[1] = 0;
  v180 = 1;
  sub_140307860(&v162, &v147, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v180 = 1;
    sub_1400104F0(&v162);
  }
  nullsub_1(v116);
  v117 = (_DWORD *)sub_140001650(7, 1);
  if ( !v117 )
  {
    v180 = 1;
    sub_1416C2D4B(1, 7);
  }
  *(_DWORD *)((char *)v117 + 3) = 1701273971;
  *v117 = 1936942445;
  v140.m256i_i64[0] = 7;
  v140.m256i_i64[1] = (__int64)v117;
  v140.m256i_i64[2] = 7;
  v177.m256i_i64[3] = v142;
  *(_OWORD *)&v177.m256i_u64[1] = v141;
  v177.m256i_i8[0] = 5;
  v179 = 1;
  sub_140B842D0(&v162, &v177);
  if ( v162.m256i_i8[0] == -1 )
  {
    v163.m256i_i64[0] = v162.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v163,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A83F8);
  }
  v163 = v162;
  v179 = 0;
  sub_140307860(&v162, &v147, &v140, &v163);
  if ( v162.m256i_i8[0] != -1 )
    sub_1400104F0(&v162);
  v180 = 0;
  sub_1400104F0(&v177);
  nullsub_1(v118);
  v119 = (void *)sub_140001650(13, 1);
  if ( !v119 )
  {
    v180 = 0;
    sub_1416C2D4B(1, 13);
  }
  qmemcpy(v119, "finish_reason", 13);
  v163.m256i_i64[0] = 13;
  v163.m256i_i64[1] = (__int64)v119;
  v163.m256i_i64[2] = 13;
  if ( v82 < 0 )
  {
    v120 = 0;
    goto LABEL_186;
  }
  if ( v82 )
  {
    nullsub_1(0x725F6873696E6966LL);
    v120 = 1;
    v121 = sub_140001650(v82, 1);
    if ( !v121 )
    {
LABEL_186:
      v164 = 1;
      sub_1416C2D4B(v120, v82);
    }
    v122 = v121;
    sub_141684120(v121, v83, v82);
  }
  else
  {
    v122 = 1;
  }
  v177.m256i_i8[0] = 3;
  v177.m256i_i64[1] = v82;
  v177.m256i_i64[2] = v122;
  v177.m256i_i64[3] = v82;
  v164 = 0;
  sub_140307860(&v162, &v147, &v163, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v180 = 0;
    sub_1400104F0(&v162);
  }
  *(_OWORD *)((char *)&v177.m256i_u32[1] + 3) = *(_OWORD *)v147.m256i_i8;
  *(__int64 *)((char *)&v177.m256i_i64[2] + 7) = v147.m256i_i64[2];
  v123 = (__int64)v160;
  *v160 = 5;
  v124 = *(_OWORD *)v177.m256i_i8;
  *(_OWORD *)(v123 + 16) = *(_OWORD *)((char *)&v177.m256i_u64[1] + 7);
  *(_OWORD *)(v123 + 1) = v124;
  v177.m256i_i64[1] = 1;
  v177.m256i_i64[2] = v123;
  v177.m256i_i64[3] = 1;
  v177.m256i_i8[0] = 4;
  v172 = 0;
  v171 = 0;
  sub_140307860(&v162, &v145, &v148, &v177);
  if ( v162.m256i_i8[0] != -1 )
  {
    v186 = 0;
    sub_1400104F0(&v162);
  }
  nullsub_1(v125);
  v126 = sub_140001650(5, 1);
  if ( !v126 )
  {
    v186 = 0;
    sub_1416C2D4B(1, 5);
  }
  *(_BYTE *)(v126 + 4) = 101;
  *(_DWORD *)v126 = 1734439797;
  v140.m256i_i64[0] = 5;
  v160 = (_BYTE *)v126;
  v140.m256i_i64[1] = v126;
  v140.m256i_i64[2] = 5;
  v127 = sub_141433D50(aUsage_2, 5, v154);
  if ( v127 )
  {
    v128 = *(_BYTE *)v127;
    switch ( *(_BYTE *)v127 )
    {
      case 0:
        goto LABEL_208;
      case 1:
      case 2:
        v129 = *(_OWORD *)(v127 + 16);
        *(_OWORD *)v177.m256i_i8 = *(_OWORD *)v127;
        *(_OWORD *)&v177.m256i_u64[2] = v129;
        v128 = v177.m256i_i8[0];
        v130 = *(_OWORD *)(v127 + 16);
        *(_OWORD *)v163.m256i_i8 = *(_OWORD *)(v127 + 1);
        *(_OWORD *)((char *)&v163.m256i_u64[1] + 7) = v130;
        v177.m256i_i64[1] = 0;
        v177.m256i_i64[3] = 0;
        v177.m256i_i8[0] = 5;
        if ( v128 == -1 )
          goto LABEL_201;
        goto LABEL_209;
      case 3:
        sub_14149C500(&v177.m256i_u64[1], v127 + 8);
        goto LABEL_208;
      case 4:
        sub_1402CE260(&v177.m256i_u64[1], *(_QWORD *)(v127 + 16), *(_QWORD *)(v127 + 24));
        goto LABEL_208;
      case 5:
        if ( *(_QWORD *)(v127 + 24) )
        {
          v131 = *(_QWORD *)(v127 + 8);
          if ( !v131 )
            sub_1416C3040(&off_141747358);
          sub_1402CCD80(&v177.m256i_u64[1], v131, *(_QWORD *)(v127 + 16));
        }
        else
        {
          v177.m256i_i64[1] = 0;
          v177.m256i_i64[3] = 0;
        }
LABEL_208:
        *(__int64 *)((char *)&v163.m256i_i64[2] + 7) = v177.m256i_i64[3];
        v163.m256i_i32[0] = *(__int32 *)((char *)v177.m256i_i32 + 1);
        v163.m256i_i16[2] = *(__int16 *)((char *)&v177.m256i_i16[2] + 1);
        v163.m256i_i8[6] = v177.m256i_i8[7];
        *(_OWORD *)((char *)&v163.m256i_u32[1] + 3) = *(_OWORD *)&v177.m256i_u64[1];
        v163.m256i_i8[15] = v177.m256i_i8[16];
        v177.m256i_i64[1] = 0;
        v177.m256i_i64[3] = 0;
        v177.m256i_i8[0] = 5;
LABEL_209:
        v162.m256i_i8[0] = v128;
        *(__int32 *)((char *)v162.m256i_i32 + 1) = v163.m256i_i32[0];
        *(__int16 *)((char *)&v162.m256i_i16[2] + 1) = v163.m256i_i16[2];
        v162.m256i_i8[7] = v163.m256i_i8[6];
        v162.m256i_i64[1] = *(__int64 *)((char *)v163.m256i_i64 + 7);
        *(_OWORD *)&v162.m256i_u64[2] = *(_OWORD *)((char *)&v163.m256i_u64[1] + 7);
        sub_1400104F0(&v177);
        break;
    }
  }
  else
  {
    v177.m256i_i64[1] = 0;
    v177.m256i_i64[3] = 0;
    v177.m256i_i8[0] = 5;
LABEL_201:
    v162 = v177;
  }
  v178 = 1;
  sub_140B842D0(&v177, &v162);
  if ( v177.m256i_i8[0] == -1 )
  {
    v163.m256i_i64[0] = v177.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v163,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A83F8);
  }
  v163 = v177;
  v178 = 0;
  sub_140307860(&v177, &v145, &v140, &v163);
  if ( v177.m256i_i8[0] != -1 )
    sub_1400104F0(&v177);
  v186 = 0;
  sub_1400104F0(&v162);
  *(_QWORD *)(a1 + 24) = v146;
  *(_OWORD *)(a1 + 8) = v145;
  *(_BYTE *)a1 = 5;
  if ( v159 )
    sub_140001660(v157, v159, 1);
  v132 = v156;
  if ( v161 )
    sub_140001660(v153, v161, 1);
  if ( v132 )
  {
    v133 = *((_QWORD *)&v151 + 1);
    v161 = v152;
    v154 = 0;
    v159 = *((_QWORD *)&v151 + 1);
    while ( v161 != v154 )
    {
      ++v154;
      v134 = v133 + 32;
      sub_1402C3260();
      v133 = v134;
    }
    if ( (_QWORD)v151 )
      sub_140001660(*((_QWORD *)&v151 + 1), 32 * v151, 8);
  }
  if ( (_BYTE)v158 && (_QWORD)v143 )
    sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
  return a1;
}