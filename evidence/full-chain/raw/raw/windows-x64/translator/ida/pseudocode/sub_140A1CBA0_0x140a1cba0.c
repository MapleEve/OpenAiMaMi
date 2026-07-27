// module: codexmate_lib/core/relay/translator
// addr: 0x140a1cba0
// name: sub_140A1CBA0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A1CBA0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  char v17; // bl
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // r13
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  __int128 v42; // xmm0
  __int64 v43; // rax
  _DWORD *v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  void *v48; // r15
  __int64 v49; // r13
  __int64 v50; // rax
  int v51; // r14d
  __int64 v52; // rax
  __int128 v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r14
  const char *v58; // r15
  int v59; // r13d
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r13
  const char *v64; // r15
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rdx
  _DWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _WORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r15
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rcx
  _DWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r15
  __int64 v85; // r13
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rcx
  __int128 v92; // xmm0
  _DWORD *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r12
  __int64 v97; // r15
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 v103; // r14
  char v104; // r13
  unsigned __int64 v105; // r15
  __int64 v106; // r12
  _QWORD *v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  _WORD *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  _DWORD *v116; // rax
  __int64 v117; // rcx
  _DWORD *v118; // rax
  __int64 v119; // rcx
  _DWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdi
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rbx
  __int64 v128; // rax
  __int64 v129; // rcx
  _DWORD *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rdi
  void *v133; // rax
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rcx
  void *v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  void *v141; // rax
  __int64 v142; // rcx
  void *v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdi
  __int64 v146; // rdi
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  void *v152; // rax
  __int64 v153; // rax
  _DWORD *v154; // [rsp+30h] [rbp-50h]
  __int128 v155; // [rsp+38h] [rbp-48h] BYREF
  __int64 v156; // [rsp+48h] [rbp-38h]
  __int64 v157; // [rsp+50h] [rbp-30h]
  int v158; // [rsp+5Ch] [rbp-24h]
  __int64 v159; // [rsp+60h] [rbp-20h]
  __int64 v160; // [rsp+68h] [rbp-18h]
  __int64 v161; // [rsp+70h] [rbp-10h]
  __int64 v162; // [rsp+78h] [rbp-8h]
  __m256i v163; // [rsp+80h] [rbp+0h] BYREF
  __m256i v164; // [rsp+A0h] [rbp+20h] BYREF
  int v165; // [rsp+CCh] [rbp+4Ch]
  __int64 v166; // [rsp+D0h] [rbp+50h]
  __int64 v167; // [rsp+D8h] [rbp+58h]
  __int64 v168; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v169; // [rsp+E8h] [rbp+68h]
  __int64 v170; // [rsp+F0h] [rbp+70h]
  __int64 v171; // [rsp+F8h] [rbp+78h]
  __int64 v172; // [rsp+100h] [rbp+80h]
  __int64 v173; // [rsp+108h] [rbp+88h]
  __int64 v174; // [rsp+110h] [rbp+90h]
  _DWORD *v175; // [rsp+118h] [rbp+98h]
  __int128 v176; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v177; // [rsp+130h] [rbp+B0h]
  _QWORD *v178; // [rsp+138h] [rbp+B8h]
  __m256i v179; // [rsp+140h] [rbp+C0h] BYREF
  __m256i v180; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v181; // [rsp+180h] [rbp+100h]
  _QWORD *v182; // [rsp+188h] [rbp+108h]
  __m256i v183; // [rsp+190h] [rbp+110h] BYREF
  const char *v184; // [rsp+1B0h] [rbp+130h]
  __int64 v185; // [rsp+1B8h] [rbp+138h]
  char v186; // [rsp+1C6h] [rbp+146h]
  char v187; // [rsp+1C7h] [rbp+147h]
  char v188; // [rsp+1C8h] [rbp+148h]
  char v189; // [rsp+1C9h] [rbp+149h]
  char v190; // [rsp+1CAh] [rbp+14Ah]
  char v191; // [rsp+1CBh] [rbp+14Bh]
  char v192; // [rsp+1CCh] [rbp+14Ch]
  char v193; // [rsp+1CDh] [rbp+14Dh]
  char v194; // [rsp+1CEh] [rbp+14Eh]
  char v195; // [rsp+1CFh] [rbp+14Fh]
  _QWORD *v196; // [rsp+1D0h] [rbp+150h]
  __int64 v197; // [rsp+1D8h] [rbp+158h]

  v197 = -2;
  v5 = sub_141433D50(aModel_6, 5, a2);
  v7 = &unk_1417A4B5D;
  v8 = 7;
  if ( v5 && *(_BYTE *)v5 == 3 )
  {
    v8 = *(_QWORD *)(v5 + 24);
    if ( v8 < 0 )
    {
      v9 = 0;
      goto LABEL_5;
    }
    if ( !v8 )
    {
      v160 = 1;
      LOBYTE(v2) = 1;
      v159 = 0;
      goto LABEL_10;
    }
    v7 = *(void **)(v5 + 16);
  }
  nullsub_1(v6);
  v9 = 1;
  v10 = sub_140001650(v8, 1);
  if ( !v10 )
LABEL_5:
    sub_1416C2D4B(v9, v8);
  v160 = v10;
  v159 = v8;
  sub_141684120(v10, v7, v8);
  v2 = 0;
LABEL_10:
  v11 = sub_141433D50(aId_6, 2, a2);
  v13 = &unk_1417A8440;
  v14 = 11;
  if ( v11 && *(_BYTE *)v11 == 3 )
  {
    v14 = *(_QWORD *)(v11 + 24);
    if ( v14 < 0 )
    {
      v15 = 0;
      goto LABEL_14;
    }
    if ( !v14 )
    {
      v161 = 1;
      v17 = 1;
      v14 = 0;
      goto LABEL_19;
    }
    v13 = *(void **)(v11 + 16);
  }
  nullsub_1(v12);
  v15 = 1;
  v16 = sub_140001650(v14, 1);
  if ( !v16 )
LABEL_14:
    sub_1416C2D4B(v15, v14);
  v161 = v16;
  sub_141684120(v16, v13, v14);
  v17 = 0;
LABEL_19:
  v166 = v14;
  v168 = 0;
  v169 = 8;
  v170 = 0;
  nullsub_1(v12);
  v18 = (_QWORD *)sub_140001650(8, 1);
  if ( !v18 )
    sub_1416C2D4B(1, 8);
  *v18 = 0x6E7275745F646E65LL;
  v196 = v18;
  v182 = v18;
  v181 = 8;
  v19 = sub_141433D50(aChoices_1, 7, a2);
  v20 = 8;
  if ( !v19 )
    goto LABEL_132;
  v21 = (__int64)v196;
  if ( *(_BYTE *)v19 == 4 && *(_QWORD *)(v19 + 24) )
  {
    v22 = *(_QWORD *)(v19 + 16);
    v182 = v196;
    v181 = 8;
    v174 = v22;
    v23 = sub_141433D50(aMessage_2, 7, v22);
    v24 = v23;
    v25 = v196;
    if ( v23 )
    {
      v182 = v196;
      v181 = 8;
      v26 = sub_141433D50(aContent_6, 7, v23);
      if ( v26 )
      {
        if ( *(_BYTE *)v26 == 3 )
        {
          v28 = *(_QWORD *)(v26 + 24);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v26 + 16);
            v164.m256i_i64[0] = 0;
            v164.m256i_i64[2] = 0;
            nullsub_1(v27);
            v30 = (_DWORD *)sub_140001650(4, 1);
            if ( !v30 )
              sub_1416C2D4B(1, 4);
            *v30 = 1701869940;
            v180.m256i_i64[0] = 4;
            v180.m256i_i64[1] = (__int64)v30;
            v180.m256i_i64[2] = 4;
            nullsub_1(v31);
            v175 = (_DWORD *)sub_140001650(4, 1);
            if ( !v175 )
              sub_1416C2D4B(1, 4);
            v171 = v29;
            v32 = (__int64)v175;
            *v175 = 1954047348;
            v183.m256i_i8[0] = 3;
            v183.m256i_i64[1] = 4;
            v183.m256i_i64[2] = v32;
            v183.m256i_i64[3] = 4;
            sub_140307860(&v179, &v164, &v180, &v183);
            if ( v179.m256i_i8[0] != -1 )
              sub_1400104F0(&v179);
            nullsub_1(v33);
            v34 = (_DWORD *)sub_140001650(4, 1);
            if ( !v34 )
              sub_1416C2D4B(1, 4);
            *v34 = 1954047348;
            v180.m256i_i64[0] = 4;
            v180.m256i_i64[1] = (__int64)v34;
            v180.m256i_i64[2] = 4;
            if ( v28 < 0 )
            {
              v36 = 0;
              goto LABEL_34;
            }
            LODWORD(v178) = v2;
            nullsub_1(v35);
            v36 = 1;
            v37 = sub_140001650(v28, 1);
            if ( !v37 )
            {
LABEL_34:
              v192 = 1;
              sub_1416C2D4B(v36, v28);
            }
            v38 = v37;
            sub_141684120(v37, v171, v28);
            v183.m256i_i8[0] = 3;
            v183.m256i_i64[1] = v28;
            v183.m256i_i64[2] = v38;
            v183.m256i_i64[3] = v28;
            v192 = 0;
            sub_140307860(&v179, &v164, &v180, &v183);
            v2 = (int)v178;
            if ( v179.m256i_i8[0] != -1 )
              sub_1400104F0(&v179);
            *(_OWORD *)&v183.m256i_u64[1] = *(_OWORD *)v164.m256i_i8;
            v183.m256i_i64[3] = v164.m256i_i64[2];
            v183.m256i_i8[0] = 5;
            v39 = v170;
            if ( v170 == v168 )
              sub_1416890A0(&v168);
            v40 = v169;
            v41 = 32 * v39;
            v42 = *(_OWORD *)v183.m256i_i8;
            *(_OWORD *)(v169 + v41 + 16) = *(_OWORD *)&v183.m256i_u64[2];
            *(_OWORD *)(v40 + v41) = v42;
            v170 = v39 + 1;
          }
        }
      }
      v182 = v196;
      v181 = 8;
      v43 = sub_141433D50(aToolCalls, 10, v24);
      v25 = v196;
      if ( v43 )
      {
        if ( *(_BYTE *)v43 == 4 )
        {
          v44 = *(_DWORD **)(v43 + 16);
          v154 = &v44[8 * *(_QWORD *)(v43 + 24)];
          while ( v44 != v154 )
          {
            v182 = v25;
            v181 = 8;
            v175 = v44;
            v45 = sub_141433D50(aId_6, 2, v44);
            v47 = 13;
            if ( v45 )
            {
              v48 = &unk_1417A844B;
              if ( *(_BYTE *)v45 == 3 )
              {
                v47 = *(_QWORD *)(v45 + 24);
                if ( v47 < 0 )
                {
                  v49 = 0;
                  goto LABEL_211;
                }
                if ( !v47 )
                {
                  v172 = 1;
                  v51 = 1;
                  v171 = 0;
                  goto LABEL_53;
                }
                v48 = *(void **)(v45 + 16);
              }
            }
            else
            {
              v48 = &unk_1417A844B;
            }
            nullsub_1(v46);
            v49 = 1;
            v50 = sub_140001650(v47, 1);
            if ( !v50 )
            {
              v172 = v47;
LABEL_211:
              v182 = v196;
              v181 = 8;
              sub_1416C2D4B(v49, v172);
            }
            v172 = v50;
            v171 = v47;
            sub_141684120(v50, v48, v47);
            v51 = 0;
LABEL_53:
            v52 = sub_141433D50(aFunction_0, 8, v175);
            if ( v52 )
            {
              switch ( *(_BYTE *)v52 )
              {
                case 0:
                  v183.m256i_i8[0] = 0;
                  break;
                case 1:
                case 2:
                  v53 = *(_OWORD *)v52;
                  *(_OWORD *)&v183.m256i_u64[2] = *(_OWORD *)(v52 + 16);
                  *(_OWORD *)v183.m256i_i8 = v53;
                  break;
                case 3:
                  sub_14149C500(&v183.m256i_u64[1], v52 + 8);
                  v183.m256i_i8[0] = 3;
                  break;
                case 4:
                  sub_1402CE260(&v183.m256i_u64[1], *(_QWORD *)(v52 + 16), *(_QWORD *)(v52 + 24));
                  v183.m256i_i8[0] = 4;
                  break;
                case 5:
                  if ( *(_QWORD *)(v52 + 24) )
                  {
                    v54 = *(_QWORD *)(v52 + 8);
                    if ( !v54 )
                      sub_1416C3040(&off_141747358);
                    sub_1402CCD80(&v183.m256i_u64[1], v54, *(_QWORD *)(v52 + 16));
                  }
                  else
                  {
                    v183.m256i_i64[1] = 0;
                    v183.m256i_i64[3] = 0;
                  }
                  v183.m256i_i8[0] = 5;
                  break;
              }
              v163 = v183;
              v183.m256i_i8[0] = 0;
              sub_1400104F0(&v183);
            }
            else
            {
              v183.m256i_i8[0] = 0;
              *(_OWORD *)&v163.m256i_u64[2] = *(_OWORD *)&v183.m256i_u64[2];
              v163.m256i_i8[0] = 0;
              *(__int64 *)((char *)v163.m256i_i64 + 1) = *(__int64 *)((char *)v183.m256i_i64 + 1);
              *(__int32 *)((char *)&v163.m256i_i32[2] + 1) = *(__int32 *)((char *)&v183.m256i_i32[2] + 1);
              *(__int16 *)((char *)&v163.m256i_i16[6] + 1) = *(__int16 *)((char *)&v183.m256i_i16[6] + 1);
              v163.m256i_i8[15] = v183.m256i_i8[15];
            }
            v158 = v51;
            v55 = sub_141433D50(aName_7, 4, &v163);
            v57 = 4;
            if ( v55 )
            {
              v58 = "tool";
              if ( *(_BYTE *)v55 == 3 )
              {
                v56 = *(_QWORD *)(v55 + 24);
                if ( v56 < 0 )
                {
                  v60 = 0;
                  goto LABEL_216;
                }
                v59 = v2;
                if ( !v56 )
                {
                  v173 = 1;
                  v165 = 1;
                  v162 = 0;
                  goto LABEL_74;
                }
                v58 = *(const char **)(v55 + 16);
                v57 = *(_QWORD *)(v55 + 24);
              }
            }
            else
            {
              v58 = "tool";
            }
            v59 = v2;
            nullsub_1(v56);
            v60 = 1;
            v61 = sub_140001650(v57, 1);
            if ( !v61 )
            {
              v173 = v57;
LABEL_216:
              sub_1416C2D4B(v60, v173);
            }
            v173 = v61;
            v162 = v57;
            sub_141684120(v61, v58, v57);
            v165 = 0;
LABEL_74:
            v62 = sub_141433D50(aArguments_1, 9, &v163);
            v2 = v59;
            v63 = 2;
            if ( v62 )
            {
              v64 = asc_1417A4EB5;
              if ( *(_BYTE *)v62 == 3 )
              {
                v64 = *(const char **)(v62 + 16);
                v63 = *(_QWORD *)(v62 + 24);
              }
            }
            else
            {
              v64 = asc_1417A4EB5;
            }
            v183.m256i_i64[0] = (__int64)v64;
            v183.m256i_i64[1] = v63;
            *(_OWORD *)&v183.m256i_u64[2] = 0;
            v184 = v64;
            v185 = v63;
            sub_1408A6200(&v179, &v183);
            if ( v179.m256i_i8[0] == -1 )
            {
              v66 = (_QWORD *)v179.m256i_i64[1];
              v183.m256i_i64[0] = v179.m256i_i64[1];
              if ( v63 < 0 )
              {
                v67 = 0;
                goto LABEL_223;
              }
              v167 = v179.m256i_i64[1];
              if ( v63 )
              {
                LODWORD(v178) = v2;
                nullsub_1(v179.m256i_i64[1]);
                v67 = 1;
                v68 = sub_140001650(v63, 1);
                if ( !v68 )
                {
                  v157 = v63;
LABEL_223:
                  sub_1416C2D4B(v67, v157);
                }
                v69 = v68;
                sub_141684120(v68, v64, v63);
                v70 = v69;
                v2 = (int)v178;
                v66 = (_QWORD *)v167;
              }
              else
              {
                v70 = 1;
              }
              v164.m256i_i64[1] = v63;
              v157 = v70;
              v164.m256i_i64[2] = v70;
              v164.m256i_i64[3] = v63;
              v164.m256i_i8[0] = 3;
              if ( *v66 == 1 )
              {
                sub_140018650(v66 + 1);
              }
              else if ( !*v66 )
              {
                v71 = *(_QWORD *)(v167 + 16);
                if ( v71 )
                  sub_140001660(*(_QWORD *)(v167 + 8), v71, 1);
              }
              sub_140001660(v167, 40, 8);
            }
            else
            {
              v164 = v179;
            }
            *(_QWORD *)&v155 = 0;
            v156 = 0;
            nullsub_1(v65);
            v72 = (_DWORD *)sub_140001650(4, 1);
            if ( !v72 )
              sub_1416C2D4B(1, 4);
            *v72 = 1701869940;
            *(_QWORD *)&v176 = 4;
            *((_QWORD *)&v176 + 1) = v72;
            v177 = 4;
            nullsub_1(v73);
            v74 = (_QWORD *)sub_140001650(8, 1);
            v178 = v74;
            if ( !v74 )
              sub_1416C2D4B(1, 8);
            *v74 = 0x6573755F6C6F6F74LL;
            v183.m256i_i8[0] = 3;
            v183.m256i_i64[1] = 8;
            v183.m256i_i64[2] = (__int64)v74;
            v183.m256i_i64[3] = 8;
            sub_140307860(&v179, &v155, &v176, &v183);
            if ( v179.m256i_i8[0] != -1 )
              sub_1400104F0(&v179);
            nullsub_1(v75);
            v76 = (_WORD *)sub_140001650(2, 1);
            if ( !v76 )
              sub_1416C2D4B(1, 2);
            *v76 = 25705;
            *(_QWORD *)&v176 = 2;
            *((_QWORD *)&v176 + 1) = v76;
            v177 = 2;
            v78 = 1;
            v79 = v171;
            if ( !(_BYTE)v158 )
            {
              nullsub_1(v77);
              v80 = sub_140001650(v79, 1);
              if ( !v80 )
              {
                v191 = 1;
                sub_1416C2D4B(1, v79);
              }
              v78 = v80;
              sub_141684120(v80, v172, v79);
            }
            v183.m256i_i8[0] = 3;
            v183.m256i_i64[1] = v79;
            v183.m256i_i64[2] = v78;
            v183.m256i_i64[3] = v79;
            v191 = 0;
            sub_140307860(&v179, &v155, &v176, &v183);
            if ( v179.m256i_i8[0] != -1 )
              sub_1400104F0(&v179);
            nullsub_1(v81);
            v82 = (_DWORD *)sub_140001650(4, 1);
            if ( !v82 )
              sub_1416C2D4B(1, 4);
            *v82 = 1701667182;
            *(_QWORD *)&v176 = 4;
            *((_QWORD *)&v176 + 1) = v82;
            v177 = 4;
            v84 = 1;
            v85 = v162;
            if ( !(_BYTE)v165 )
            {
              nullsub_1(v83);
              v86 = sub_140001650(v85, 1);
              if ( !v86 )
              {
                v190 = 1;
                sub_1416C2D4B(1, v85);
              }
              v84 = v86;
              sub_141684120(v86, v173, v85);
            }
            v183.m256i_i8[0] = 3;
            v183.m256i_i64[1] = v85;
            v183.m256i_i64[2] = v84;
            v183.m256i_i64[3] = v85;
            v190 = 0;
            sub_140307860(&v179, &v155, &v176, &v183);
            if ( v179.m256i_i8[0] != -1 )
              sub_1400104F0(&v179);
            nullsub_1(v87);
            v88 = sub_140001650(5, 1);
            if ( !v88 )
              sub_1416C2D4B(1, 5);
            *(_BYTE *)(v88 + 4) = 116;
            *(_DWORD *)v88 = 1970302569;
            *(_QWORD *)&v176 = 5;
            *((_QWORD *)&v176 + 1) = v88;
            v177 = 5;
            v195 = 1;
            sub_140B842D0(&v183, &v164);
            if ( v183.m256i_i8[0] == -1 )
            {
              v179.m256i_i64[0] = v183.m256i_i64[1];
              sub_1416C3060(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v179,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A8458);
            }
            v179 = v183;
            v195 = 0;
            sub_140307860(&v183, &v155, &v176, &v179);
            if ( v183.m256i_i8[0] != -1 )
              sub_1400104F0(&v183);
            v180.m256i_i64[3] = v156;
            *(_OWORD *)&v180.m256i_u64[1] = v155;
            v180.m256i_i8[0] = 5;
            v89 = v170;
            if ( v170 == v168 )
              sub_1416890A0(&v168);
            v90 = v169;
            v91 = 32 * v89;
            v92 = *(_OWORD *)v180.m256i_i8;
            *(_OWORD *)(v169 + v91 + 16) = *(_OWORD *)&v180.m256i_u64[2];
            *(_OWORD *)(v90 + v91) = v92;
            v170 = v89 + 1;
            sub_1400104F0(&v164);
            if ( v162 )
              sub_140001660(v173, v162, 1);
            sub_1400104F0(&v163);
            v44 = v175 + 8;
            v25 = v196;
            if ( v171 )
            {
              v93 = v175 + 8;
              sub_140001660(v172, v171, 1);
              v44 = v93;
              v25 = v196;
            }
          }
        }
      }
    }
    v182 = v25;
    v181 = 8;
    v94 = sub_141433D50(aFinishReason, 13, v174);
    if ( !v94 )
    {
      v21 = (__int64)v196;
      v20 = 8;
      goto LABEL_133;
    }
    v20 = 8;
    if ( *(_BYTE *)v94 == 3 )
    {
      LODWORD(v178) = v2;
      v96 = *(_QWORD *)(v94 + 16);
      v20 = *(_QWORD *)(v94 + 24);
      switch ( __ROR8__(v20 - 4, 1) )
      {
        case 0LL:
          if ( !(unsigned int)sub_1416847B0(v96, aStop, v20) )
          {
            nullsub_1(v95);
            v20 = 8;
            v153 = sub_140001650(8, 1);
            if ( !v153 )
            {
              v182 = v196;
              v181 = 8;
              sub_1416C2D4B(1, 8);
            }
            v21 = v153;
            v150 = 0x6E7275745F646E65LL;
            goto LABEL_228;
          }
          if ( v20 == 6 )
          {
LABEL_124:
            if ( !(unsigned int)sub_1416847B0(v96, &unk_1417A7E20, v20) )
            {
              nullsub_1(v95);
              v20 = 10;
              v152 = (void *)sub_140001650(10, 1);
              if ( !v152 )
              {
                v182 = v196;
                v181 = 8;
                sub_1416C2D4B(1, 10);
              }
              v21 = (__int64)v152;
              qmemcpy(v152, "max_tokens", 10);
LABEL_229:
              LOBYTE(v2) = (_BYTE)v178;
              sub_140001660(v196, 8, 1);
              goto LABEL_133;
            }
          }
          if ( v20 != 10 )
            goto LABEL_127;
LABEL_126:
          if ( (unsigned int)sub_1416847B0(v96, aToolCalls, v20) )
          {
LABEL_127:
            if ( v20 != 14 )
            {
LABEL_129:
              if ( v20 < 0 )
              {
                v97 = 0;
                goto LABEL_131;
              }
              if ( v20 )
              {
                nullsub_1(v95);
                v97 = 1;
                v148 = sub_140001650(v20, 1);
                if ( !v148 )
                {
LABEL_131:
                  v182 = v196;
                  v181 = 8;
                  sub_1416C2D4B(v97, v20);
                }
                v21 = v148;
                sub_141684120(v148, v96, v20);
              }
              else
              {
                v21 = 1;
                v20 = 0;
              }
              goto LABEL_229;
            }
LABEL_128:
            if ( (unsigned int)sub_1416847B0(v96, "content_filter", v20) )
              goto LABEL_129;
            nullsub_1(v95);
            v20 = 13;
            v149 = sub_140001650(13, 1);
            if ( !v149 )
            {
              v182 = v196;
              v181 = 8;
              sub_1416C2D4B(1, 13);
            }
            v21 = v149;
            *(_QWORD *)(v149 + 5) = 0x65636E6575716573LL;
            v150 = 0x7165735F706F7473LL;
          }
          else
          {
            nullsub_1(v95);
            v20 = 8;
            v151 = sub_140001650(8, 1);
            if ( !v151 )
            {
              v182 = v196;
              v181 = 8;
              sub_1416C2D4B(1, 8);
            }
            v21 = v151;
            v150 = 0x6573755F6C6F6F74LL;
          }
LABEL_228:
          *(_QWORD *)v21 = v150;
          goto LABEL_229;
        case 1LL:
          goto LABEL_124;
        case 3LL:
          goto LABEL_126;
        case 5LL:
          goto LABEL_128;
        default:
          goto LABEL_129;
      }
    }
LABEL_132:
    v21 = (__int64)v196;
  }
LABEL_133:
  v196 = (_QWORD *)v21;
  v182 = (_QWORD *)v21;
  v174 = v20;
  v181 = v20;
  v99 = sub_141433D50(aUsage_2, 5, a2);
  if ( !v99 )
  {
    v104 = v2;
    v105 = 0;
    v103 = 0;
    v106 = v166;
    goto LABEL_154;
  }
  v182 = v196;
  v181 = v174;
  v100 = sub_141433D50(aPromptTokens, 13, v99);
  if ( v100 )
  {
    v101 = v174;
    if ( *(_BYTE *)v100 != 2 || (v102 = *(_QWORD *)(v100 + 8), v102 == 2) )
    {
      v103 = 0;
    }
    else
    {
      if ( (_DWORD)v102 != 1 )
      {
        v107 = v196;
        v108 = *(_QWORD *)(v100 + 16);
        v103 = 0;
        if ( v108 > 0 )
          v103 = v108;
        goto LABEL_145;
      }
      v103 = *(_QWORD *)(v100 + 16);
    }
    v107 = v196;
  }
  else
  {
    v103 = 0;
    v107 = v196;
    v101 = v174;
  }
LABEL_145:
  v182 = v107;
  v181 = v101;
  v109 = sub_141433D50(aCompletionToke, 17, v99);
  v104 = v2;
  if ( v109 )
  {
    v106 = v166;
    if ( *(_BYTE *)v109 != 2 || (v98 = *(_QWORD *)(v109 + 8), v98 == 2) )
    {
      v105 = 0;
    }
    else if ( (_DWORD)v98 == 1 )
    {
      v105 = *(_QWORD *)(v109 + 16);
    }
    else
    {
      v110 = *(_QWORD *)(v109 + 16);
      v105 = 0;
      if ( v110 > 0 )
        v105 = v110;
    }
  }
  else
  {
    v105 = 0;
    v106 = v166;
  }
LABEL_154:
  *(_QWORD *)&v176 = 0;
  v177 = 0;
  nullsub_1(v98);
  v111 = 1;
  v112 = (_WORD *)sub_140001650(2, 1);
  if ( !v112 )
    sub_1416C2D4B(1, 2);
  *v112 = 25705;
  v180.m256i_i64[0] = 2;
  v180.m256i_i64[1] = (__int64)v112;
  v180.m256i_i64[2] = 2;
  if ( !v17 )
  {
    nullsub_1(v113);
    v114 = sub_140001650(v106, 1);
    if ( !v114 )
    {
      v189 = 1;
      sub_1416C2D4B(1, v106);
    }
    v111 = v114;
    sub_141684120(v114, v161, v106);
  }
  v183.m256i_i8[0] = 3;
  v183.m256i_i64[1] = v106;
  v183.m256i_i64[2] = v111;
  v183.m256i_i64[3] = v106;
  v189 = 0;
  sub_140307860(&v179, &v176, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v115);
  v116 = (_DWORD *)sub_140001650(4, 1);
  if ( !v116 )
    sub_1416C2D4B(1, 4);
  *v116 = 1701869940;
  v180.m256i_i64[0] = 4;
  v180.m256i_i64[1] = (__int64)v116;
  v180.m256i_i64[2] = 4;
  nullsub_1(v117);
  v118 = (_DWORD *)sub_140001650(7, 1);
  v175 = v118;
  if ( !v118 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v118 + 3) = 1701273971;
  *v118 = 1936942445;
  v183.m256i_i8[0] = 3;
  v183.m256i_i64[1] = 7;
  v183.m256i_i64[2] = (__int64)v118;
  v183.m256i_i64[3] = 7;
  sub_140307860(&v179, &v176, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v119);
  v120 = (_DWORD *)sub_140001650(4, 1);
  if ( !v120 )
    sub_1416C2D4B(1, 4);
  *v120 = 1701605234;
  v180.m256i_i64[0] = 4;
  v180.m256i_i64[1] = (__int64)v120;
  v180.m256i_i64[2] = 4;
  nullsub_1(v121);
  v122 = sub_140001650(9, 1);
  v175 = (_DWORD *)v122;
  if ( !v122 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v122 = 0x6E61747369737361LL;
  *(_BYTE *)(v122 + 8) = 116;
  v183.m256i_i8[0] = 3;
  v183.m256i_i64[1] = 9;
  v183.m256i_i64[2] = v122;
  v183.m256i_i64[3] = 9;
  sub_140307860(&v179, &v176, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v123);
  v124 = 1;
  v125 = sub_140001650(5, 1);
  if ( !v125 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v125 + 4) = 108;
  *(_DWORD *)v125 = 1701080941;
  v180.m256i_i64[0] = 5;
  v180.m256i_i64[1] = v125;
  v180.m256i_i64[2] = 5;
  v127 = v159;
  if ( !v104 )
  {
    nullsub_1(v126);
    v128 = sub_140001650(v127, 1);
    if ( !v128 )
    {
      v188 = 1;
      sub_1416C2D4B(1, v127);
    }
    v124 = v128;
    sub_141684120(v128, v160, v127);
  }
  v183.m256i_i8[0] = 3;
  v183.m256i_i64[1] = v127;
  v183.m256i_i64[2] = v124;
  v183.m256i_i64[3] = v127;
  v188 = 0;
  sub_140307860(&v179, &v176, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v129);
  v130 = (_DWORD *)sub_140001650(7, 1);
  if ( !v130 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v130 + 3) = 1953391988;
  *v130 = 1953394531;
  v180.m256i_i64[0] = 7;
  v180.m256i_i64[1] = (__int64)v130;
  v180.m256i_i64[2] = 7;
  v194 = 1;
  sub_140467C90(&v183, &v168);
  if ( v183.m256i_i8[0] == -1 )
  {
    v179.m256i_i64[0] = v183.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v179,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8480);
  }
  v179 = v183;
  v194 = 0;
  sub_140307860(&v183, &v176, &v180, &v179);
  if ( v183.m256i_i8[0] != -1 )
    sub_1400104F0(&v183);
  nullsub_1(v131);
  v132 = 1;
  v133 = (void *)sub_140001650(11, 1);
  if ( !v133 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v133, "stop_reason", 11);
  v180.m256i_i64[0] = 11;
  v180.m256i_i64[1] = (__int64)v133;
  v180.m256i_i64[2] = 11;
  v134 = v174;
  if ( v174 )
  {
    nullsub_1(0x6165725F706F7473LL);
    v135 = sub_140001650(v134, 1);
    if ( !v135 )
    {
      v187 = 1;
      sub_1416C2D4B(1, v134);
    }
    v132 = v135;
    sub_141684120(v135, v196, v134);
  }
  v183.m256i_i8[0] = 3;
  v183.m256i_i64[1] = v134;
  v183.m256i_i64[2] = v132;
  v183.m256i_i64[3] = v134;
  v187 = 0;
  sub_140307860(&v179, &v176, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v136);
  v137 = (void *)sub_140001650(13, 1);
  if ( !v137 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v137, "stop_sequence", 13);
  v180.m256i_i64[0] = 13;
  v180.m256i_i64[1] = (__int64)v137;
  v180.m256i_i64[2] = 13;
  v193 = 1;
  sub_140B842D0(&v183, &unk_1417A7B90);
  if ( v183.m256i_i8[0] == -1 )
  {
    v179.m256i_i64[0] = v183.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v179,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8480);
  }
  v179 = v183;
  v193 = 0;
  sub_140307860(&v183, &v176, &v180, &v179);
  if ( v183.m256i_i8[0] != -1 )
    sub_1400104F0(&v183);
  nullsub_1(v138);
  v139 = sub_140001650(5, 1);
  if ( !v139 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v139 + 4) = 101;
  *(_DWORD *)v139 = 1734439797;
  v163.m256i_i64[0] = 5;
  v163.m256i_i64[1] = v139;
  v163.m256i_i64[2] = 5;
  v164.m256i_i64[0] = 0;
  v164.m256i_i64[2] = 0;
  nullsub_1(v140);
  v141 = (void *)sub_140001650(12, 1);
  if ( !v141 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v141, "input_tokens", 12);
  v180.m256i_i64[0] = 12;
  v180.m256i_i64[1] = (__int64)v141;
  v180.m256i_i64[2] = 12;
  v183.m256i_i8[0] = 2;
  v183.m256i_i64[1] = v103 >> 63;
  v183.m256i_i64[2] = v103;
  sub_140307860(&v179, &v164, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  nullsub_1(v142);
  v143 = (void *)sub_140001650(13, 1);
  if ( !v143 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v143, "output_tokens", 13);
  v180.m256i_i64[0] = 13;
  v180.m256i_i64[1] = (__int64)v143;
  v180.m256i_i64[2] = 13;
  v183.m256i_i8[0] = 2;
  v183.m256i_i64[1] = v105 >> 63;
  v183.m256i_i64[2] = v105;
  sub_140307860(&v179, &v164, &v180, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  *(_OWORD *)&v183.m256i_u64[1] = *(_OWORD *)v164.m256i_i8;
  v183.m256i_i64[3] = v164.m256i_i64[2];
  v183.m256i_i8[0] = 5;
  v186 = 0;
  sub_140307860(&v179, &v176, &v163, &v183);
  if ( v179.m256i_i8[0] != -1 )
    sub_1400104F0(&v179);
  *(_QWORD *)(a1 + 24) = v177;
  *(_OWORD *)(a1 + 8) = v176;
  *(_BYTE *)a1 = 5;
  if ( v174 )
    sub_140001660(v196, v174, 1);
  v144 = v169;
  v174 = v170;
  v196 = nullptr;
  v175 = (_DWORD *)v169;
  while ( (_QWORD *)v174 != v196 )
  {
    v196 = (_QWORD *)((char *)v196 + 1);
    v145 = v144 + 32;
    sub_1402C3260();
    v144 = v145;
  }
  if ( v168 )
    sub_140001660(v169, 32 * v168, 8);
  v146 = v159;
  if ( v166 )
    sub_140001660(v161, v166, 1);
  if ( v146 )
    sub_140001660(v160, v146, 1);
  return a1;
}