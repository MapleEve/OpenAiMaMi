// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140bb4930 | name sub_140BB4930
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BB4930(_OWORD *a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  void *v6; // rax
  __int8 v7; // al
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // r13
  int v33; // eax
  bool v34; // cf
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 *v37; // r14
  _DWORD *v38; // rax
  void *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rdi
  __int64 v46; // r12
  __int64 v47; // rbx
  int v48; // eax
  char v49; // cl
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 *v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // r12
  int v60; // eax
  char v61; // cl
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rsi
  __int64 v70; // r12
  int v71; // eax
  char v72; // cl
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // rsi
  int v82; // eax
  char v83; // cl
  __int64 *v84; // r15
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // r14
  __int64 v92; // rsi
  int v93; // eax
  char v94; // cl
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  const __m128i *v100; // r14
  __int128 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r12
  __int64 v105; // r15
  __int64 v106; // rbx
  __int64 v107; // r13
  int v108; // eax
  __int64 v109; // rcx
  const __m128i *v110; // rbx
  __int64 v111; // r12
  __m128i *v112; // rax
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int64 v115; // rcx
  _OWORD *v116; // rax
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm2
  __int64 v120; // rdi
  char v121; // si
  char v122; // bl
  __int128 v123; // xmm6
  __int64 v124; // rax
  _DWORD *v125; // rax
  __int8 v126; // al
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int128 v130; // kr00_16
  __int64 v131; // r14
  __m128i *v132; // rax
  __int64 v133; // rbx
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  _OWORD *v136; // rax
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm2
  __int64 v140; // rbx
  __int64 v141; // rsi
  __int64 v142; // rdx
  __int128 v143; // xmm0
  __int128 v144; // xmm1
  __int64 v145; // rcx
  _OWORD *v146; // rax
  __int128 v147; // xmm0
  __int128 v148; // xmm1
  __int128 v149; // xmm2
  __int64 v150; // r9
  void *v151; // rax
  __int64 v152; // rcx
  __int128 v153; // kr30_16
  __int64 v154; // r14
  __m128i *v155; // rax
  __int64 v156; // rbx
  __int64 v157; // rcx
  __int64 v158; // rsi
  void *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // r14
  _DWORD *v163; // rax
  __int64 v164; // rcx
  void *v165; // rax
  __int64 v166; // rax
  void *v167; // r8
  __int128 v168; // xmm0
  __int128 v169; // xmm1
  _OWORD *v170; // rax
  __int128 v171; // xmm0
  __int128 v172; // xmm1
  __int128 v173; // xmm2
  __int8 v174; // si
  __int64 v175; // r14
  __int64 v176; // rcx
  _DWORD *v177; // rax
  __int64 v178; // rcx
  void *v179; // rax
  __int64 v180; // rax
  void *v181; // r8
  _OWORD *v182; // rax
  __int128 v183; // xmm0
  __int128 v184; // xmm1
  __int128 v185; // xmm2
  __int64 v186; // rcx
  __int64 v187; // rax
  _OWORD *v188; // rcx
  __int64 v189; // [rsp+20h] [rbp-60h]
  __int64 v190; // [rsp+20h] [rbp-60h]
  __int64 v191; // [rsp+40h] [rbp-40h] BYREF
  __int128 v192; // [rsp+48h] [rbp-38h]
  __int64 v193; // [rsp+58h] [rbp-28h]
  __int128 v194; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v195; // [rsp+B0h] [rbp+30h]
  __int128 v196; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v197; // [rsp+C8h] [rbp+48h]
  __int64 v198; // [rsp+D0h] [rbp+50h]
  __int64 *v199; // [rsp+D8h] [rbp+58h]
  __int64 v200; // [rsp+E0h] [rbp+60h]
  __m256i v201; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v202; // [rsp+108h] [rbp+88h] BYREF
  __m256i v203; // [rsp+110h] [rbp+90h] BYREF
  __int128 *v204; // [rsp+130h] [rbp+B0h]
  __int64 v205; // [rsp+138h] [rbp+B8h]
  __int64 *v206; // [rsp+140h] [rbp+C0h]
  __int128 v207; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v208; // [rsp+158h] [rbp+D8h]
  char v209; // [rsp+167h] [rbp+E7h] BYREF
  _OWORD *v210; // [rsp+168h] [rbp+E8h]
  __m256i v211; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v212; // [rsp+190h] [rbp+110h]
  __int128 v213; // [rsp+1A0h] [rbp+120h]
  __int128 v214; // [rsp+1B0h] [rbp+130h]
  __int128 v215; // [rsp+1C0h] [rbp+140h]
  __m256i v216; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v217; // [rsp+1F0h] [rbp+170h]
  __m256i v218; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v219; // [rsp+218h] [rbp+198h]
  __m256i v220; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v221; // [rsp+240h] [rbp+1C0h]
  __int64 v222; // [rsp+250h] [rbp+1D0h]
  __m256i v223; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v224; // [rsp+280h] [rbp+200h]
  char v225; // [rsp+28Ch] [rbp+20Ch]
  char v226; // [rsp+28Dh] [rbp+20Dh]
  char v227; // [rsp+28Eh] [rbp+20Eh]
  char v228; // [rsp+28Fh] [rbp+20Fh]
  __int64 v229; // [rsp+290h] [rbp+210h]
  char v230; // [rsp+29Eh] [rbp+21Eh]
  char v231; // [rsp+29Fh] [rbp+21Fh]
  __int64 v232; // [rsp+2A0h] [rbp+220h]
  __int64 v233; // [rsp+2A8h] [rbp+228h]

  v233 = -2;
  v5 = a4;
  v204 = a3;
  v205 = a2;
  v210 = a1;
  sub_140FCDD30(&v220, a4 + 1016);
  if ( v220.m256i_i8[0] == -1 )
  {
    v5 = v220.m256i_i64[1];
    goto LABEL_8;
  }
  v217 = v5;
  v216 = v220;
  if ( v220.m256i_i8[0] == 5 )
  {
    nullsub_1(v220.m256i_i64[1]);
    v6 = (void *)sub_140001650(14, 1);
    if ( !v6 )
      sub_141938D2B(1, 14);
    qmemcpy(v6, "lastCodexRoute", 14);
    v218.m256i_i64[0] = 14;
    v218.m256i_i64[1] = (__int64)v6;
    v218.m256i_i64[2] = 14;
    if ( *(_QWORD *)(v217 + 1168) == -1 )
    {
      v7 = 0;
    }
    else
    {
      v232 = (__int64)v6;
      sub_140FCCDE0(&v220, v217 + 1168);
      v7 = v220.m256i_i8[0];
      v5 = v220.m256i_i64[1];
      if ( v220.m256i_i8[0] == -1 )
      {
        sub_140001660(v232, 14, 1);
        sub_14002F9D0(&v216);
LABEL_8:
        result = (__int64)v210;
        *(_QWORD *)v210 = 3;
        *(_QWORD *)(result + 8) = v5;
        return result;
      }
    }
    v201.m256i_i32[1] = v220.m256i_i32[1];
    *(__int32 *)((char *)v201.m256i_i32 + 1) = *(__int32 *)((char *)v220.m256i_i32 + 1);
    *(_OWORD *)&v201.m256i_u64[2] = *(_OWORD *)&v220.m256i_u64[2];
    v201.m256i_i8[0] = v7;
    v201.m256i_i64[1] = v5;
    sub_140E72AA0(&v223, &v216.m256i_u64[1], &v218, &v201);
    if ( v223.m256i_i8[0] != -1 )
      sub_14002F9D0(&v223);
    if ( v216.m256i_i8[0] == 5 && v216.m256i_i64[1] )
    {
      v232 = v216.m256i_i64[2];
      v229 = v216.m256i_i64[1];
      v9 = v216.m256i_i64[1];
LABEL_15:
      v10 = v9 + 360;
      v11 = *(unsigned __int16 *)(v9 + 626);
      v224 = v9;
      v12 = (_QWORD *)(v9 - 8);
      v219 = v11;
      v13 = 3LL * (unsigned int)(8 * v11);
      v14 = -1;
      do
      {
        if ( !v13 )
        {
          v14 = v219;
LABEL_23:
          if ( !v232 )
            goto LABEL_71;
          --v232;
          v9 = *(_QWORD *)(v224 + 8 * v14 + 632);
          goto LABEL_15;
        }
        v15 = v10 + 24;
        v16 = 9LL - *(_QWORD *)(v10 + 16);
        v17 = sub_1418F4B70(&unk_141A3DA47, *(_QWORD *)(v10 + 8));
        if ( v17 )
          v16 = v17;
        LOBYTE(v18) = (v16 > 0) - (v16 < 0);
        v12 += 4;
        ++v14;
        v13 -= 24;
        v10 = v15;
      }
      while ( (_BYTE)v18 == 1 );
      if ( (_BYTE)v18 )
        goto LABEL_23;
      if ( *((_BYTE *)v12 - 24) == 4 )
      {
        v19 = *(v12 - 1);
        v224 = v19 + 32LL * *v12;
        while ( v19 != v224 )
        {
          v20 = v19;
          v19 += 32;
          if ( *(_BYTE *)v20 == 5 )
          {
            nullsub_1(v18);
            v21 = sub_140001650(6, 1);
            if ( !v21 )
              sub_141938D2B(1, 6);
            *(_WORD *)(v21 + 4) = 31077;
            *(_DWORD *)v21 = 1265201249;
            v218.m256i_i64[0] = 6;
            v218.m256i_i64[1] = v21;
            v218.m256i_i64[2] = 6;
            nullsub_1(v22);
            v23 = (void *)sub_140001650(10, 1);
            v232 = (__int64)v23;
            if ( !v23 )
              sub_141938D2B(1, 10);
            qmemcpy(v23, "[REDACTED]", 10);
            v220.m256i_i64[1] = 10;
            v220.m256i_i64[2] = (__int64)v23;
            v220.m256i_i64[3] = 10;
            v220.m256i_i8[0] = 3;
            sub_140E72AA0(&v223, v20 + 8, &v218, &v220);
            if ( v223.m256i_i8[0] != -1 )
              sub_14002F9D0(&v223);
            v232 = v20;
            v219 = v19;
            v206 = (__int64 *)(v20 + 8);
            v25 = *(_QWORD *)(v20 + 8);
            if ( !v25 )
              goto LABEL_47;
            v26 = *(_QWORD *)(v232 + 16);
LABEL_35:
            v27 = v25 + 360;
            v28 = (_QWORD *)(v25 - 8);
            v229 = *(unsigned __int16 *)(v25 + 626);
            v24 = (unsigned int)(8 * v229);
            v29 = 3 * v24;
            v30 = -1;
            do
            {
              if ( !v29 )
              {
                v30 = v229;
LABEL_43:
                v34 = v26-- == 0;
                if ( v34 )
                  goto LABEL_47;
                v25 = *(_QWORD *)(v25 + 8 * v30 + 632);
                goto LABEL_35;
              }
              v31 = v27 + 24;
              v32 = 12LL - *(_QWORD *)(v27 + 16);
              v33 = sub_1418F4B70(&unk_141A3DA50, *(_QWORD *)(v27 + 8));
              if ( v33 )
                v32 = v33;
              LOBYTE(v24) = (v32 > 0) - (v32 < 0);
              v28 += 4;
              ++v30;
              v29 -= 24;
              v27 = v31;
            }
            while ( (_BYTE)v24 == 1 );
            if ( (_BYTE)v24 )
              goto LABEL_43;
            if ( *((_BYTE *)v28 - 24) == 3 )
            {
              sub_140C350D0(&v207, *(v28 - 1), *v28);
              v36 = v232;
              v19 = v232 + 32;
              v37 = (__int64 *)(v232 + 8);
            }
            else
            {
LABEL_47:
              nullsub_1(v24);
              v38 = (_DWORD *)sub_140001650(4, 1);
              if ( !v38 )
                sub_141938D2B(1, 4);
              *v38 = 1701736302;
              *(_QWORD *)&v207 = 4;
              *((_QWORD *)&v207 + 1) = v38;
              v208 = 4;
              v36 = v232;
              v19 = v232 + 32;
              v37 = (__int64 *)(v232 + 8);
            }
            nullsub_1(v35);
            v39 = (void *)sub_140001650(12, 1);
            v229 = (__int64)v39;
            if ( !v39 )
              sub_141938D2B(1, 12);
            qmemcpy(v39, "extraHeaders", 12);
            v218.m256i_i64[0] = 12;
            v218.m256i_i64[1] = (__int64)v39;
            v218.m256i_i64[2] = 12;
            v220.m256i_i64[3] = v208;
            *(_OWORD *)&v220.m256i_u64[1] = v207;
            v220.m256i_i8[0] = 3;
            sub_140E72AA0(&v223, v37, &v218, &v220);
            if ( v223.m256i_i8[0] != -1 )
              sub_14002F9D0(&v223);
            v40 = *v37;
            if ( *v37 )
            {
              v41 = *(_QWORD *)(v36 + 16);
              while ( 1 )
              {
                v42 = v40 + 360;
                v43 = v40 - 32;
                v232 = *(unsigned __int16 *)(v40 + 626);
                v44 = 3LL * (unsigned int)(8 * v232);
                v45 = -1;
                do
                {
                  if ( !v44 )
                  {
                    v45 = v232;
                    goto LABEL_62;
                  }
                  v46 = v42 + 24;
                  v47 = 9LL - *(_QWORD *)(v42 + 16);
                  v48 = sub_1418F4B70(&unk_141A3DA5C, *(_QWORD *)(v42 + 8));
                  if ( v48 )
                    v47 = v48;
                  v49 = (v47 > 0) - (v47 < 0);
                  v43 += 32;
                  ++v45;
                  v44 -= 24;
                  v42 = v46;
                }
                while ( v49 == 1 );
                if ( !v49 )
                  goto LABEL_66;
LABEL_62:
                v34 = v41-- == 0;
                if ( v34 )
                  break;
                v40 = *(_QWORD *)(v40 + 8 * v45 + 632);
              }
              v43 = 0;
LABEL_66:
              v19 = v219;
              v37 = v206;
            }
            else
            {
              v43 = 0;
            }
            sub_140C46560(&v218, v43);
            nullsub_1(v50);
            v51 = sub_140001650(9, 1);
            v232 = v51;
            if ( !v51 )
              sub_141938D2B(1, 9);
            *(_QWORD *)v51 = 0x6F7272457473616CLL;
            *(_BYTE *)(v51 + 8) = 114;
            v203.m256i_i64[0] = 9;
            v203.m256i_i64[1] = v51;
            v203.m256i_i64[2] = 9;
            v220 = v218;
            sub_140E72AA0(&v223, v37, &v203, &v220);
            if ( v223.m256i_i8[0] != -1 )
              sub_14002F9D0(&v223);
          }
        }
        v229 = v216.m256i_i64[1];
      }
LABEL_71:
      if ( v229 )
      {
        v232 = v216.m256i_i64[2];
        v52 = v229;
LABEL_73:
        v53 = v52 + 360;
        v54 = *(unsigned __int16 *)(v52 + 626);
        v224 = v52;
        v55 = (__int64 *)(v52 - 16);
        v219 = v54;
        v56 = 3LL * (unsigned int)(8 * v54);
        v57 = -1;
        do
        {
          if ( !v56 )
          {
            v57 = v219;
LABEL_81:
            v62 = v229;
            if ( !v232 )
              goto LABEL_101;
            --v232;
            v52 = *(_QWORD *)(v224 + 8 * v57 + 632);
            goto LABEL_73;
          }
          v58 = v53 + 24;
          v59 = 5LL - *(_QWORD *)(v53 + 16);
          v60 = sub_1418F4B70(&unk_141A3DA65, *(_QWORD *)(v53 + 8));
          if ( v60 )
            v59 = v60;
          v61 = (v59 > 0) - (v59 < 0);
          v55 += 4;
          ++v57;
          v56 -= 24;
          v53 = v58;
        }
        while ( v61 == 1 );
        if ( v61 )
          goto LABEL_81;
        v62 = v229;
        if ( *((_BYTE *)v55 - 16) == 5 )
        {
          v63 = *(v55 - 1);
          if ( v63 )
          {
            v232 = *v55;
            while ( 1 )
            {
              v64 = v63 + 360;
              v65 = *(unsigned __int16 *)(v63 + 626);
              v229 = v63;
              v66 = v63 - 32;
              v224 = v65;
              v67 = 3LL * (unsigned int)(8 * v65);
              v68 = -1;
              do
              {
                if ( !v67 )
                {
                  v68 = v224;
                  goto LABEL_94;
                }
                v69 = v64 + 24;
                v70 = 9LL - *(_QWORD *)(v64 + 16);
                v71 = sub_1418F4B70(&unk_141A3DA5C, *(_QWORD *)(v64 + 8));
                if ( v71 )
                  v70 = v71;
                v72 = (v70 > 0) - (v70 < 0);
                v66 += 32;
                ++v68;
                v67 -= 24;
                v64 = v69;
              }
              while ( v72 == 1 );
              if ( !v72 )
                goto LABEL_97;
LABEL_94:
              if ( !v232 )
                break;
              --v232;
              v63 = *(_QWORD *)(v229 + 8 * v68 + 632);
            }
          }
          v66 = 0;
LABEL_97:
          sub_140C46560(&v218, v66);
          nullsub_1(v73);
          v74 = sub_140001650(9, 1);
          v232 = v74;
          if ( !v74 )
            sub_141938D2B(1, 9);
          *(_QWORD *)v74 = 0x6F7272457473616CLL;
          *(_BYTE *)(v74 + 8) = 114;
          v203.m256i_i64[0] = 9;
          v203.m256i_i64[1] = v74;
          v203.m256i_i64[2] = 9;
          v220 = v218;
          sub_140E72AA0(&v223, v55 - 1, &v203, &v220);
          if ( v223.m256i_i8[0] != -1 )
            sub_14002F9D0(&v223);
          v62 = v216.m256i_i64[1];
        }
LABEL_101:
        if ( v62 )
        {
          v75 = v216.m256i_i64[2];
LABEL_103:
          v76 = v62 + 360;
          v77 = *(unsigned __int16 *)(v62 + 626);
          v229 = v62;
          v232 = v62 - 16;
          v224 = v77;
          v78 = 3LL * (unsigned int)(8 * v77);
          v79 = -1;
          do
          {
            if ( !v78 )
            {
              v79 = v224;
LABEL_111:
              v34 = v75-- == 0;
              if ( v34 )
                goto LABEL_158;
              v62 = *(_QWORD *)(v229 + 8 * v79 + 632);
              goto LABEL_103;
            }
            v80 = v76 + 24;
            v81 = 14LL - *(_QWORD *)(v76 + 16);
            v82 = sub_1418F4B70(&unk_141A3D8FC, *(_QWORD *)(v76 + 8));
            if ( v82 )
              v81 = v82;
            v83 = (v81 > 0) - (v81 < 0);
            v232 += 32;
            ++v79;
            v78 -= 24;
            v76 = v80;
          }
          while ( v83 == 1 );
          if ( v83 )
            goto LABEL_111;
          v84 = (__int64 *)v232;
          if ( *(_BYTE *)(v232 - 16) == 5 )
          {
            v85 = *(_QWORD *)(v232 - 8);
            if ( v85 )
            {
              v229 = *(_QWORD *)v232;
              while ( 1 )
              {
                v86 = v85 + 360;
                v87 = *(unsigned __int16 *)(v85 + 626);
                v224 = v85;
                v88 = v85 - 32;
                v219 = v87;
                v89 = 3LL * (unsigned int)(8 * v87);
                v90 = -1;
                do
                {
                  if ( !v89 )
                  {
                    v90 = v219;
                    goto LABEL_124;
                  }
                  v91 = v86 + 24;
                  v92 = 5LL - *(_QWORD *)(v86 + 16);
                  v93 = sub_1418F4B70(aError_44, *(_QWORD *)(v86 + 8));
                  if ( v93 )
                    v92 = v93;
                  v94 = (v92 > 0) - (v92 < 0);
                  v88 += 32;
                  ++v90;
                  v89 -= 24;
                  v86 = v91;
                }
                while ( v94 == 1 );
                if ( !v94 )
                  goto LABEL_128;
LABEL_124:
                if ( !v229 )
                  break;
                --v229;
                v85 = *(_QWORD *)(v224 + 8 * v90 + 632);
              }
              v88 = 0;
LABEL_128:
              v84 = (__int64 *)v232;
            }
            else
            {
              v88 = 0;
            }
            sub_140C46560(&v203, v88);
            nullsub_1(v95);
            v96 = sub_140001650(5, 1);
            v198 = v96;
            if ( !v96 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v96 + 4) = 114;
            *(_DWORD *)v96 = 1869771365;
            v218.m256i_i64[0] = 5;
            v218.m256i_i64[1] = v96;
            v218.m256i_i64[2] = 5;
            v220 = v203;
            v199 = v84 - 1;
            sub_140E72AA0(&v223, v84 - 1, &v218, &v220);
            if ( v223.m256i_i8[0] != -1 )
              sub_14002F9D0(&v223);
            v220.m256i_i64[2] = (__int64)aProvidername;
            v220.m256i_i64[3] = 12;
            *(_QWORD *)&v221 = aUpstreamurl;
            *((_QWORD *)&v221 + 1) = 11;
            v206 = nullptr;
            while ( 1 )
            {
LABEL_134:
              v97 = v206;
              if ( v206 == (__int64 *)2 )
                goto LABEL_158;
              v206 = (__int64 *)((char *)v206 + 1);
              v98 = *(v84 - 1);
              if ( !v98 )
                continue;
              v99 = 2LL * (_QWORD)v97;
              v100 = (const __m128i *)v220.m256i_i64[v99 + 2];
              *(_QWORD *)&v101 = v220.m256i_i64[v99 + 3];
              v224 = *v84;
              while ( 1 )
              {
                v102 = v98 + 360;
                v103 = *(unsigned __int16 *)(v98 + 626);
                v229 = v98;
                *((_QWORD *)&v101 + 1) = v98 - 8;
                v219 = v103;
                v104 = 3LL * (unsigned int)(8 * v103);
                v105 = -1;
                do
                {
                  if ( !v104 )
                  {
                    v105 = v219;
                    goto LABEL_145;
                  }
                  v106 = v102 + 24;
                  v107 = v101 - *(_QWORD *)(v102 + 16);
                  v108 = sub_1418F4B70(v100, *(_QWORD *)(v102 + 8));
                  if ( v108 )
                    v107 = v108;
                  LOBYTE(v109) = (v107 > 0) - (v107 < 0);
                  *((_QWORD *)&v101 + 1) += 32LL;
                  ++v105;
                  v104 -= 24;
                  v102 = v106;
                }
                while ( (_BYTE)v109 == 1 );
                if ( !(_BYTE)v109 )
                  break;
LABEL_145:
                if ( !v224 )
                {
                  v84 = (__int64 *)v232;
                  goto LABEL_134;
                }
                --v224;
                v98 = *(_QWORD *)(v229 + 8 * v105 + 632);
              }
              v84 = (__int64 *)v232;
              if ( *(_BYTE *)(*((_QWORD *)&v101 + 1) - 24LL) != 3 )
                continue;
              if ( (__int64)v101 < 0 )
                break;
              v110 = *(const __m128i **)(*((_QWORD *)&v101 + 1) - 8LL);
              v111 = **((_QWORD **)&v101 + 1);
              if ( (_QWORD)v101 )
              {
                nullsub_1(v109);
                v112 = (__m128i *)sub_140001650(v101, 1);
                if ( !v112 )
                {
                  v200 = v101;
                  v186 = 1;
LABEL_246:
                  sub_141938D2B(v186, v200);
                }
                *((_QWORD *)&v101 + 1) = v112;
                sub_1418F44E0(v112, v100, v101);
              }
              else
              {
                *((_QWORD *)&v101 + 1) = 1;
              }
              v207 = v101;
              v200 = *((_QWORD *)&v101 + 1);
              v208 = v101;
              v230 = 1;
              if ( dword_1421E0058 )
                sub_14021D340((__int64)&v218, v110, v111, 0, v189);
              else
                sub_14021D340((__int64)&v218, v110, v111, qword_1421E0040, qword_1421E0048);
              v223.m256i_i64[3] = v218.m256i_i64[2];
              *(_OWORD *)&v223.m256i_u64[1] = *(_OWORD *)v218.m256i_i8;
              v223.m256i_i8[0] = 3;
              v230 = 0;
              sub_140E72AA0(&v218, v199, &v207, &v223);
              if ( v218.m256i_i8[0] != -1 )
                sub_14002F9D0(&v218);
            }
            v186 = 0;
            goto LABEL_246;
          }
        }
      }
    }
  }
LABEL_158:
  v201 = v216;
  v222 = *((_QWORD *)v204 + 6);
  v113 = *v204;
  v114 = v204[1];
  v221 = v204[2];
  *(_OWORD *)&v220.m256i_u64[2] = v114;
  *(_OWORD *)v220.m256i_i8 = v113;
  sub_140BB76D0((unsigned int)&v211, v205, (unsigned int)&v220, (unsigned int)aRouterRelaySta, 32, (__int64)&v201, a5);
  if ( v211.m256i_i32[0] == -1 )
  {
    v120 = v217;
    if ( *(_QWORD *)(v217 + 1616) == -1 )
    {
      v218.m256i_i64[0] = 0;
      v218.m256i_i64[2] = 0;
      nullsub_1(v115);
      v125 = (_DWORD *)sub_140001650(7, 1);
      if ( !v125 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v125 + 3) = 1953391987;
      *v125 = 1936028272;
      v223.m256i_i64[0] = 7;
      v223.m256i_i64[1] = (__int64)v125;
      v223.m256i_i64[2] = 7;
      v211.m256i_i16[0] = 1;
      sub_140E72AA0(&v220, &v218, &v223, &v211);
      if ( v220.m256i_i8[0] != -1 )
        sub_14002F9D0(&v220);
      *(_OWORD *)&v203.m256i_u64[1] = *(_OWORD *)v218.m256i_i8;
      v203.m256i_i64[3] = v218.m256i_i64[2];
      v126 = 5;
LABEL_190:
      v203.m256i_i8[0] = v126;
      v222 = *((_QWORD *)v204 + 6);
      v134 = *v204;
      v135 = v204[1];
      v221 = v204[2];
      *(_OWORD *)&v220.m256i_u64[2] = v135;
      *(_OWORD *)v220.m256i_i8 = v134;
      sub_140BB76D0(
        (unsigned int)&v211,
        v205,
        (unsigned int)&v220,
        (unsigned int)&unk_141A3958B,
        30,
        (__int64)&v203,
        a5);
      if ( v211.m256i_i32[0] != -1 )
      {
        v136 = v210;
        v210[5] = v215;
        v136[4] = v214;
        v137 = *(_OWORD *)v211.m256i_i8;
        v138 = *(_OWORD *)&v211.m256i_u64[2];
        v139 = v212;
        v136[3] = v213;
        v136[2] = v139;
        v136[1] = v138;
        *v136 = v137;
LABEL_231:
        sub_14002F9D0(&v203);
        return sub_14002F9D0(&v201);
      }
      sub_1416828D0(
        (unsigned int)&v211,
        *(_QWORD *)(v120 + 776),
        *(_QWORD *)(v120 + 784),
        (unsigned int)&unk_141A6FF04,
        19);
      v229 = v211.m256i_i64[1];
      sub_140C2A6B0(&v191, v211.m256i_i64[1], v211.m256i_i64[2]);
      if ( (_DWORD)v191 == -1 )
      {
        v232 = v192;
        v150 = *(_QWORD *)(a5 + 8);
        v190 = *(_QWORD *)(a5 + 16);
        v224 = *((_QWORD *)&v192 + 1);
        sub_14021D340((__int64)&v220, *((const __m128i **)&v192 + 1), v193, v150, v190);
        if ( v232 )
          sub_140001660(v224, v232, 1);
        v193 = v220.m256i_i64[2];
        v192 = *(_OWORD *)v220.m256i_i8;
        v191 = -1;
        v140 = v220.m256i_i64[1];
        v232 = v220.m256i_i64[0];
        v141 = v220.m256i_i64[2];
        v142 = v211.m256i_i64[0];
        if ( !v211.m256i_i64[0] )
        {
LABEL_195:
          v222 = *((_QWORD *)v204 + 6);
          v143 = *v204;
          v144 = v204[1];
          v221 = v204[2];
          *(_OWORD *)&v220.m256i_u64[2] = v144;
          *(_OWORD *)v220.m256i_i8 = v143;
          v229 = v140;
          sub_140BB78D0((unsigned int)&v211, v205, (unsigned int)&v220, (unsigned int)&unk_141A395A9, 26, v140, v141);
          if ( v211.m256i_i32[0] != -1 )
          {
            v146 = v210;
            v210[5] = v215;
            v146[4] = v214;
            v147 = *(_OWORD *)v211.m256i_i8;
            v148 = *(_OWORD *)&v211.m256i_u64[2];
            v149 = v212;
            v146[3] = v213;
            v146[2] = v149;
            v146[1] = v148;
            *v146 = v147;
LABEL_229:
            if ( v232 )
              sub_140001660(v229, v232, 1);
            goto LABEL_231;
          }
          v216.m256i_i64[0] = 0;
          v216.m256i_i64[2] = 0;
          nullsub_1(v145);
          v151 = (void *)sub_140001650(10, 1);
          if ( !v151 )
            sub_141938D2B(1, 10);
          qmemcpy(v151, "targetMode", 10);
          v223.m256i_i64[0] = 10;
          v224 = (__int64)v151;
          v223.m256i_i64[1] = (__int64)v151;
          v223.m256i_i64[2] = 10;
          v220.m256i_i64[0] = v120 + 1688;
          v220.m256i_i64[1] = (__int64)sub_140C98D50;
          sub_1416ABFD0(&v211, &unk_141A395CD, &v220);
          v153 = *(_OWORD *)&v211.m256i_u64[1];
          v219 = v211.m256i_i64[1];
          v224 = v211.m256i_i64[0];
          if ( v211.m256i_i64[2] < 0 )
          {
            v154 = 0;
            goto LABEL_204;
          }
          if ( v211.m256i_i64[2] )
          {
            nullsub_1(v152);
            v154 = 1;
            v155 = (__m128i *)sub_140001650(*((_QWORD *)&v153 + 1), 1);
            if ( !v155 )
            {
LABEL_204:
              v227 = 1;
              sub_141938D2B(v154, *((_QWORD *)&v153 + 1));
            }
            v156 = (__int64)v155;
            sub_1418F44E0(v155, (const __m128i *)v153, *((unsigned __int64 *)&v153 + 1));
          }
          else
          {
            v156 = 1;
          }
          v211.m256i_i8[0] = 3;
          v211.m256i_i64[1] = *((_QWORD *)&v153 + 1);
          v211.m256i_i64[2] = v156;
          v211.m256i_i64[3] = *((_QWORD *)&v153 + 1);
          v227 = 0;
          sub_140E72AA0(&v220, &v216, &v223, &v211);
          v158 = v217;
          if ( v220.m256i_i8[0] != -1 )
            sub_14002F9D0(&v220);
          if ( v224 )
            sub_140001660(v219, v224, 1);
          nullsub_1(v157);
          v159 = (void *)sub_140001650(10, 1);
          if ( !v159 )
            sub_141938D2B(1, 10);
          qmemcpy(v159, "violations", 10);
          v223.m256i_i64[0] = 10;
          v223.m256i_i64[1] = (__int64)v159;
          v223.m256i_i64[2] = 10;
          v231 = 1;
          sub_140C105A0(&v211, v158 + 1432);
          if ( v211.m256i_i8[0] == -1 )
          {
            v220.m256i_i64[0] = v211.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_13,
              43,
              (unsigned int)&v220,
              (unsigned int)&off_141A3BB28,
              (__int64)&off_141A395E8);
          }
          v220 = v211;
          v231 = 0;
          sub_140E72AA0(&v211, &v216, &v223, &v220);
          if ( v211.m256i_i8[0] != -1 )
            sub_14002F9D0(&v211);
          *(_OWORD *)&v218.m256i_u64[1] = *(_OWORD *)v216.m256i_i8;
          v218.m256i_i64[3] = v216.m256i_i64[2];
          v218.m256i_i8[0] = 5;
          v160 = sub_140C2B610(v217);
          if ( v160 )
          {
            v162 = v160;
            nullsub_1(v161);
            v163 = (_DWORD *)sub_140001650(7, 1);
            if ( !v163 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v163 + 3) = 1684369520;
            *v163 = 1885956979;
            v223.m256i_i64[0] = 7;
            v223.m256i_i64[1] = (__int64)v163;
            v223.m256i_i64[2] = 7;
            v211.m256i_i16[0] = 257;
            sub_140E72AA0(&v220, &v218.m256i_u64[1], &v223, &v211);
            if ( v220.m256i_i8[0] != -1 )
              sub_14002F9D0(&v220);
            nullsub_1(v164);
            v165 = (void *)sub_140001650(10, 1);
            if ( !v165 )
              sub_141938D2B(1, 10);
            qmemcpy(v165, "skipReason", 10);
            v223.m256i_i64[0] = 10;
            v223.m256i_i64[1] = (__int64)v165;
            v223.m256i_i64[2] = 10;
            v166 = *(unsigned __int8 *)(v162 + 64);
            v167 = &unk_141A3AEEA;
            if ( *(_BYTE *)(v162 + 64) )
              v167 = &unk_141A3AEF2;
            v220.m256i_i64[0] = (__int64)v167;
            v220.m256i_i64[1] = v166 + 8;
            v211.m256i_i64[0] = (__int64)&v220;
            v211.m256i_i64[1] = (__int64)sub_140186EE0;
            v211.m256i_i64[2] = v162;
            v211.m256i_i64[3] = (__int64)sub_1400015F0;
            v226 = 1;
            sub_1416ABFD0(&v196, &unk_141A39600, &v211);
            *(_OWORD *)&v211.m256i_u64[1] = v196;
            v211.m256i_i64[3] = v197;
            v211.m256i_i8[0] = 3;
            v226 = 0;
            sub_140E72AA0(&v220, &v218.m256i_u64[1], &v223, &v211);
            if ( v220.m256i_i8[0] != -1 )
              sub_14002F9D0(&v220);
          }
          v222 = *((_QWORD *)v204 + 6);
          v168 = *v204;
          v169 = v204[1];
          v221 = v204[2];
          *(_OWORD *)&v220.m256i_u64[2] = v169;
          *(_OWORD *)v220.m256i_i8 = v168;
          sub_140BB76D0(
            (unsigned int)&v211,
            v205,
            (unsigned int)&v220,
            (unsigned int)&unk_141A3962D,
            22,
            (__int64)&v218,
            a5);
          if ( v211.m256i_i32[0] == -1 )
          {
            sub_140EB74D0(&v211, v217 + 1400);
            v174 = v211.m256i_i8[0];
            if ( v211.m256i_i8[0] == -1 )
            {
              v187 = v211.m256i_i64[1];
              v188 = v210;
              *(_QWORD *)v210 = 3;
              *((_QWORD *)v188 + 1) = v187;
            }
            else
            {
              v223 = v211;
              v175 = sub_140C2B610(v217);
              LOBYTE(v176) = v174 != 5 || v175 == 0;
              if ( !(_BYTE)v176 )
              {
                nullsub_1(v176);
                v177 = (_DWORD *)sub_140001650(7, 1);
                if ( !v177 )
                  sub_141938D2B(1, 7);
                *(_DWORD *)((char *)v177 + 3) = 1684369520;
                *v177 = 1885956979;
                v216.m256i_i64[0] = 7;
                v216.m256i_i64[1] = (__int64)v177;
                v216.m256i_i64[2] = 7;
                v211.m256i_i16[0] = 257;
                sub_140E72AA0(&v220, &v223.m256i_u64[1], &v216, &v211);
                if ( v220.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v220);
                nullsub_1(v178);
                v179 = (void *)sub_140001650(10, 1);
                if ( !v179 )
                  sub_141938D2B(1, 10);
                qmemcpy(v179, "skipReason", 10);
                v216.m256i_i64[0] = 10;
                v216.m256i_i64[1] = (__int64)v179;
                v216.m256i_i64[2] = 10;
                v180 = *(unsigned __int8 *)(v175 + 64);
                v181 = &unk_141A3AEEA;
                if ( *(_BYTE *)(v175 + 64) )
                  v181 = &unk_141A3AEF2;
                v220.m256i_i64[0] = (__int64)v181;
                v220.m256i_i64[1] = v180 + 8;
                v211.m256i_i64[0] = (__int64)&v220;
                v211.m256i_i64[1] = (__int64)sub_140186EE0;
                v211.m256i_i64[2] = v175;
                v211.m256i_i64[3] = (__int64)sub_1400015F0;
                v225 = 1;
                sub_1416ABFD0(&v194, &unk_141A39600, &v211);
                *(_OWORD *)&v211.m256i_u64[1] = v194;
                v211.m256i_i64[3] = v195;
                v211.m256i_i8[0] = 3;
                v225 = 0;
                sub_140E72AA0(&v220, &v223.m256i_u64[1], &v216, &v211);
                if ( v220.m256i_i8[0] != -1 )
                  sub_14002F9D0(&v220);
              }
              sub_140BB76D0(
                (unsigned int)&v211,
                v205,
                (_DWORD)v204,
                (unsigned int)aRouterDiagnost,
                29,
                (__int64)&v223,
                a5);
              if ( v211.m256i_i32[0] == -1 )
              {
                *(_QWORD *)v210 = -1;
                sub_14002F9D0(&v223);
                sub_14002F9D0(&v218);
                if ( v232 )
                  sub_140001660(v229, v232, 1);
                goto LABEL_231;
              }
              v182 = v210;
              v210[5] = v215;
              v182[4] = v214;
              v183 = *(_OWORD *)v211.m256i_i8;
              v184 = *(_OWORD *)&v211.m256i_u64[2];
              v185 = v212;
              v182[3] = v213;
              v182[2] = v185;
              v182[1] = v184;
              *v182 = v183;
              sub_14002F9D0(&v223);
            }
          }
          else
          {
            v170 = v210;
            v210[5] = v215;
            v170[4] = v214;
            v171 = *(_OWORD *)v211.m256i_i8;
            v172 = *(_OWORD *)&v211.m256i_u64[2];
            v173 = v212;
            v170[3] = v213;
            v170[2] = v173;
            v170[1] = v172;
            *v170 = v171;
          }
          sub_14002F9D0(&v218);
          goto LABEL_229;
        }
      }
      else
      {
        sub_140BAC840(&v191);
        v140 = 1;
        v141 = 0;
        v232 = 0;
        v142 = v211.m256i_i64[0];
        if ( !v211.m256i_i64[0] )
          goto LABEL_195;
      }
      sub_140001660(v229, v142, 1);
      goto LABEL_195;
    }
    v121 = *(_BYTE *)(v217 + 1680);
    v122 = *(_BYTE *)(v217 + 1681);
    sub_1416AC440(&v220, v217 + 1616);
    v123 = *(_OWORD *)(v217 + 1664);
    if ( *(_QWORD *)(v217 + 1640) == -1 )
    {
      v124 = -1;
    }
    else
    {
      sub_1416AC440(&v211, v217 + 1640);
      v124 = v211.m256i_i64[0];
      *(_OWORD *)v223.m256i_i8 = *(_OWORD *)&v211.m256i_u64[1];
    }
    v211.m256i_i64[2] = v220.m256i_i64[2];
    *(_OWORD *)v211.m256i_i8 = *(_OWORD *)v220.m256i_i8;
    v212 = *(_OWORD *)v223.m256i_i8;
    v211.m256i_i64[3] = v124;
    v213 = v123;
    LOBYTE(v214) = v121;
    BYTE1(v214) = v122;
    sub_140FC6780(&v218, &v211);
    v120 = v217;
    if ( v211.m256i_i64[0] )
      sub_140001660(v211.m256i_i64[1], v211.m256i_i64[0], 1);
    if ( v211.m256i_i64[3] != -1 && v211.m256i_i64[3] )
      sub_140001660(v212, v211.m256i_i64[3], 1);
    v126 = v218.m256i_i8[0];
    if ( v218.m256i_i8[0] != -1 )
    {
      *(_OWORD *)((char *)&v220.m256i_u64[1] + 7) = *(_OWORD *)&v218.m256i_u64[2];
      *(_OWORD *)v220.m256i_i8 = *(_OWORD *)&v218.m256i_i8[1];
LABEL_189:
      *(_OWORD *)&v203.m256i_i8[1] = *(_OWORD *)v220.m256i_i8;
      *(_OWORD *)&v203.m256i_u64[2] = *(_OWORD *)((char *)&v220.m256i_u64[1] + 7);
      goto LABEL_190;
    }
    v202 = v218.m256i_i64[1];
    *(_QWORD *)&v207 = 0;
    v208 = 0;
    nullsub_1(v127);
    v128 = sub_140001650(5, 1);
    if ( !v128 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v128 + 4) = 114;
    *(_DWORD *)v128 = 1869771365;
    v216.m256i_i64[0] = 5;
    v232 = v128;
    v216.m256i_i64[1] = v128;
    v216.m256i_i64[2] = 5;
    v223.m256i_i64[0] = 0;
    *(_OWORD *)&v223.m256i_u64[1] = 1u;
    v220.m256i_i64[2] = 1610612768;
    v220.m256i_i64[0] = (__int64)&v223;
    v220.m256i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14163CE40(&v202, &v220) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v209,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v130 = *(_OWORD *)&v223.m256i_u64[1];
    v229 = v223.m256i_i64[1];
    v232 = v223.m256i_i64[0];
    if ( v223.m256i_i64[2] < 0 )
    {
      v131 = 0;
      goto LABEL_179;
    }
    if ( v223.m256i_i64[2] )
    {
      nullsub_1(v129);
      v131 = 1;
      v132 = (__m128i *)sub_140001650(*((_QWORD *)&v130 + 1), 1);
      if ( !v132 )
      {
LABEL_179:
        v228 = 1;
        sub_141938D2B(v131, *((_QWORD *)&v130 + 1));
      }
      v133 = (__int64)v132;
      sub_1418F44E0(v132, (const __m128i *)v130, *((unsigned __int64 *)&v130 + 1));
    }
    else
    {
      v133 = 1;
    }
    v220.m256i_i8[0] = 3;
    v220.m256i_i64[1] = *((_QWORD *)&v130 + 1);
    v220.m256i_i64[2] = v133;
    v220.m256i_i64[3] = *((_QWORD *)&v130 + 1);
    v228 = 0;
    sub_140E72AA0(&v223, &v207, &v216, &v220);
    if ( v223.m256i_i8[0] != -1 )
      sub_14002F9D0(&v223);
    if ( v232 )
      sub_140001660(v229, v232, 1);
    *(_OWORD *)((char *)&v220.m256i_u32[1] + 3) = v207;
    *(__int64 *)((char *)&v220.m256i_i64[2] + 7) = v208;
    sub_14002F910(&v202);
    v126 = 5;
    v120 = v217;
    goto LABEL_189;
  }
  v116 = v210;
  v210[5] = v215;
  v116[4] = v214;
  v117 = *(_OWORD *)v211.m256i_i8;
  v118 = *(_OWORD *)&v211.m256i_u64[2];
  v119 = v212;
  v116[3] = v213;
  v116[2] = v119;
  v116[1] = v118;
  *v116 = v117;
  return sub_14002F9D0(&v201);
}
