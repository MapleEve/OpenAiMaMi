// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407e7320 | successor of pre-update 0x14023fee0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.758, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__m128i *__fastcall sub_1407E7320(__m128i *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int128 v5; // rax
  __m512i *v6; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r15
  __int64 *i; // rax
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 *v26; // r15
  unsigned __int64 v27; // rbx
  __m512i *v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // r13
  __int8 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 *v34; // rsi
  __m512i *v35; // r12
  __int64 v36; // r14
  unsigned __int64 v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rbx
  _QWORD *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int128 v60; // xmm6
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  unsigned __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 *v70; // rcx
  unsigned __int64 v71; // r12
  unsigned __int64 v72; // r14
  unsigned __int64 v73; // r15
  __int64 v74; // rax
  __int64 *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r8
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rbx
  __int64 v81; // rdx
  char v82; // di
  unsigned __int64 v83; // r12
  __int8 v84; // al
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rcx
  bool v88; // cf
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rax
  __m256i *v91; // rsi
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // rcx
  char v94; // r13
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  _BYTE *v102; // rax
  _BYTE *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int8 v106; // al
  __int64 v107; // rax
  __int64 v108; // rsi
  unsigned __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rdi
  unsigned __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rdx
  __m128i *v126; // rcx
  __m128i v127; // xmm0
  __m128i v128; // xmm1
  __m128i v129; // xmm2
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rbx
  const __m128i *v133; // r14
  __m128i si128; // xmm0
  __int64 v136; // rax
  __int64 v137; // rdx
  unsigned __int64 v138; // rax
  __int64 v139; // rsi
  __int128 v141; // [rsp+30h] [rbp-50h]
  __int128 v142; // [rsp+40h] [rbp-40h] BYREF
  __int128 v143; // [rsp+50h] [rbp-30h]
  __int128 v144; // [rsp+60h] [rbp-20h]
  __int128 v145; // [rsp+70h] [rbp-10h] BYREF
  __int64 v146; // [rsp+80h] [rbp+0h]
  __int128 v147; // [rsp+88h] [rbp+8h] BYREF
  __int64 v148; // [rsp+98h] [rbp+18h]
  __int128 v149; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v150; // [rsp+B0h] [rbp+30h]
  __int128 v151; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v152; // [rsp+C8h] [rbp+48h]
  __int64 v153; // [rsp+D0h] [rbp+50h]
  __int128 v154; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v155; // [rsp+E8h] [rbp+68h]
  __int128 v156; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v157; // [rsp+100h] [rbp+80h]
  unsigned __int64 v158; // [rsp+108h] [rbp+88h] BYREF
  __m128i *v159; // [rsp+110h] [rbp+90h]
  unsigned __int64 v160; // [rsp+118h] [rbp+98h]
  __m256i v161; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v162; // [rsp+140h] [rbp+C0h]
  __int128 v163; // [rsp+150h] [rbp+D0h]
  __int128 v164; // [rsp+160h] [rbp+E0h]
  __int128 v165; // [rsp+170h] [rbp+F0h]
  __m256i v166; // [rsp+180h] [rbp+100h] BYREF
  __int128 v167; // [rsp+1A0h] [rbp+120h]
  __int128 v168; // [rsp+1B0h] [rbp+130h]
  __int128 v169; // [rsp+1C0h] [rbp+140h]
  __int128 v170; // [rsp+1D0h] [rbp+150h]
  __int64 v171; // [rsp+1E0h] [rbp+160h]
  char v172; // [rsp+1E8h] [rbp+168h]
  _BYTE v173[7]; // [rsp+1E9h] [rbp+169h]
  void (__fastcall *v174)(__int64); // [rsp+1F0h] [rbp+170h]
  unsigned __int64 v175; // [rsp+1F8h] [rbp+178h]
  __m128i v176; // [rsp+200h] [rbp+180h] BYREF
  __m128i v177; // [rsp+210h] [rbp+190h] BYREF
  __m128i v178; // [rsp+220h] [rbp+1A0h]
  __m128i v179; // [rsp+230h] [rbp+1B0h]
  __m128i v180; // [rsp+240h] [rbp+1C0h]
  __m128i v181; // [rsp+250h] [rbp+1D0h]
  __int64 v182; // [rsp+260h] [rbp+1E0h]
  __int64 v183; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v184; // [rsp+270h] [rbp+1F0h]
  __int64 v185; // [rsp+278h] [rbp+1F8h]
  __int64 v186; // [rsp+280h] [rbp+200h]
  __int64 v187; // [rsp+288h] [rbp+208h] BYREF
  __int64 v188; // [rsp+290h] [rbp+210h]
  __int64 v189; // [rsp+298h] [rbp+218h]
  _BYTE v190[24]; // [rsp+2A0h] [rbp+220h] BYREF
  _QWORD *v191; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v192; // [rsp+2C8h] [rbp+248h]
  __int128 v193; // [rsp+2D0h] [rbp+250h]
  __int128 v194; // [rsp+2E0h] [rbp+260h]
  __int64 v195; // [rsp+2F0h] [rbp+270h]
  __int64 v196; // [rsp+2F8h] [rbp+278h]
  __m256i *v197; // [rsp+300h] [rbp+280h] BYREF
  void (__fastcall **v198)(__int64); // [rsp+308h] [rbp+288h]
  __int64 v199; // [rsp+310h] [rbp+290h]
  __int64 v200; // [rsp+318h] [rbp+298h]
  __int128 v201; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v202; // [rsp+330h] [rbp+2B0h]
  __m512i v203; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v204; // [rsp+380h] [rbp+300h]
  __int128 v205; // [rsp+390h] [rbp+310h]
  __int64 v206; // [rsp+3A0h] [rbp+320h]
  char v207; // [rsp+3A8h] [rbp+328h]
  _DWORD v208[3]; // [rsp+3A9h] [rbp+329h]
  __int64 v209; // [rsp+3B8h] [rbp+338h]
  __int64 v210; // [rsp+3C0h] [rbp+340h]
  __int64 v211; // [rsp+3C8h] [rbp+348h]
  __int128 v212; // [rsp+3D0h] [rbp+350h] BYREF
  unsigned __int64 v213; // [rsp+3E0h] [rbp+360h]
  __int64 *v214; // [rsp+3F0h] [rbp+370h]
  __int64 v215; // [rsp+3F8h] [rbp+378h]
  __m256i v216; // [rsp+400h] [rbp+380h] BYREF
  __int64 v217; // [rsp+420h] [rbp+3A0h]
  __int64 v218; // [rsp+428h] [rbp+3A8h]
  __int64 v219; // [rsp+430h] [rbp+3B0h]
  __int64 v220; // [rsp+438h] [rbp+3B8h]
  char v221; // [rsp+447h] [rbp+3C7h] BYREF
  __int64 v222; // [rsp+448h] [rbp+3C8h]
  char v223; // [rsp+456h] [rbp+3D6h]
  __int64 v224; // [rsp+458h] [rbp+3D8h]
  char v225; // [rsp+464h] [rbp+3E4h]
  char v226; // [rsp+465h] [rbp+3E5h]
  char v227; // [rsp+466h] [rbp+3E6h]
  char v228; // [rsp+467h] [rbp+3E7h]
  __int64 v229; // [rsp+468h] [rbp+3E8h]

  v229 = -2;
  v159 = a1;
  v176.m128i_i64[0] = 0;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v176.m128i_i64[1] = 8;
  v177 = 0;
  v178 = (__m128i)8uLL;
  v3 = sub_1416AE140(a1);
  v4 = v3;
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v5 = *(_OWORD *)v3;
  }
  else
  {
    *(_QWORD *)&v5 = sub_1416C5230();
    *(_OWORD *)v4 = v5;
    *(_BYTE *)(v4 + 16) = 1;
  }
  *(_QWORD *)v4 = v5 + 1;
  *(_OWORD *)&v203.m512i_u64[2] = xmmword_141A46B20;
  *(_OWORD *)v203.m512i_i8 = *(_OWORD *)&off_141A46B10;
  *(_OWORD *)&v203.m512i_u64[4] = v5;
  sub_1407D9570(a2[21], a2[22], &v203, 0);
  sub_1407D9570(a2[25], a2[26], &v203, 0);
  v144 = *(_OWORD *)&v203.m512i_u64[4];
  v143 = *(_OWORD *)&v203.m512i_u64[2];
  v142 = *(_OWORD *)v203.m512i_i8;
  v187 = 0;
  v188 = 8;
  v189 = 0;
  v228 = 1;
  v6 = &v203;
  sub_140A2C460(&v203, a2);
  v7 = v203.m512i_i64[1];
  v183 = v203.m512i_i64[1];
  v194 = *(_OWORD *)v203.m512i_i8;
  v185 = v203.m512i_i64[0];
  v200 = v203.m512i_i64[1] + 32 * v203.m512i_i64[2];
  v186 = v200;
  v8 = 32 * v203.m512i_i64[2] - 32;
  v9 = (_QWORD *)(v203.m512i_i64[1] + 40);
  for ( i = (__int64 *)v203.m512i_i64[1]; ; i = v11 )
  {
    if ( i == (__int64 *)v200 )
      goto LABEL_54;
    v11 = i + 4;
    v184 = (__int64)(i + 4);
    v7 = *i;
    if ( *i == -1 )
      break;
    v211 = *i;
    v12 = i[2];
    v224 = i[1];
    sub_1416C49D0(v6, v224, v12);
    if ( v203.m512i_i32[0] == 2 )
    {
      v7 = v203.m512i_i8[8] & 3;
      if ( (unsigned int)(v7 - 2) >= 2 && (v203.m512i_i8[8] & 3) != 0 )
      {
        --v203.m512i_i64[1];
        v203.m512i_i8[0] = 3;
        sub_1416EBAD0(&v203.m512i_u64[1]);
      }
      goto LABEL_47;
    }
    sub_1407D83C0(v6, v224, v12, 32769);
    if ( v207 == -1 )
    {
      v163 = *(_OWORD *)&v203.m512i_u64[6];
      v162 = *(_OWORD *)&v203.m512i_u64[4];
      v161 = *(__m256i *)v203.m512i_i8;
      v197 = &v161;
      v198 = (void (__fastcall **)(__int64))sub_14142D4D0;
      sub_1416DAFA0(&v216, &unk_141A47418, &v197);
      v212 = *(_OWORD *)v216.m256i_i8;
      v213 = v216.m256i_u64[2];
      sub_1407785F0(&v161);
      v201 = v212;
      v202 = v213;
      v203.m512i_i64[0] = 10;
      v203.m512i_i64[3] = v213;
      *(_OWORD *)&v203.m512i_u64[1] = v212;
      v216.m256i_i64[0] = v224;
      v216.m256i_i64[1] = v12;
      v161.m256i_i64[0] = (__int64)&v216;
      v161.m256i_i64[1] = (__int64)sub_1416CE600;
      v161.m256i_i64[2] = (__int64)v6;
      v161.m256i_i64[3] = (__int64)sub_140D76130;
      sub_1416DAFA0(&v151, &unk_141A46156, &v161);
      v16 = v177.m128i_i64[0];
      if ( v177.m128i_i64[0] == v176.m128i_i64[0] )
        sub_141939F90(&v176);
      v17 = v176.m128i_i64[1];
      v18 = 3 * v16;
      *(_QWORD *)(v176.m128i_i64[1] + 8 * v18 + 16) = v152;
      *(_OWORD *)(v17 + 8 * v18) = v151;
      v177.m128i_i64[0] = v16 + 1;
      sub_140778C60(v6);
    }
    else
    {
      v213 = v203.m512i_u64[3];
      v212 = *(_OWORD *)&v203.m512i_u64[1];
      v167 = *(_OWORD *)&v203.m512i_u64[4];
      v168 = *(_OWORD *)&v203.m512i_u64[6];
      v169 = v204;
      v170 = v205;
      *(_DWORD *)&v173[3] = *(_DWORD *)((char *)v208 + 3);
      *(_DWORD *)v173 = v208[0];
      *(_QWORD *)&v190[16] = v203.m512i_i64[3];
      *(_OWORD *)v190 = *(_OWORD *)&v203.m512i_u64[1];
      v202 = v203.m512i_i64[3];
      v201 = *(_OWORD *)&v203.m512i_u64[1];
      v166 = *(__m256i *)v203.m512i_i8;
      v171 = v206;
      v172 = v207;
      sub_1407F8DF0(&v161, &v166);
      if ( v161.m256i_i32[0] != -1 )
      {
        v205 = v165;
        v204 = v164;
        *(_OWORD *)&v203.m512i_u64[6] = v163;
        *(_OWORD *)&v203.m512i_u64[4] = v162;
        *(__m256i *)v203.m512i_i8 = v161;
        *(_QWORD *)&v212 = v224;
        *((_QWORD *)&v212 + 1) = v12;
        v216.m256i_i64[0] = (__int64)&v212;
        v216.m256i_i64[1] = (__int64)sub_1416CE600;
        v216.m256i_i64[2] = (__int64)v6;
        v216.m256i_i64[3] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v149, &unk_141A46156, &v216);
        v13 = v177.m128i_i64[0];
        if ( v177.m128i_i64[0] == v176.m128i_i64[0] )
          sub_141939F90(&v176);
        v14 = v176.m128i_i64[1];
        v15 = 3 * v13;
        *(_QWORD *)(v176.m128i_i64[1] + 8 * v15 + 16) = v150;
        *(_OWORD *)(v14 + 8 * v15) = v149;
        v177.m128i_i64[0] = v13 + 1;
        sub_140778C60(v6);
        sub_140777BC0(&v166);
        goto LABEL_47;
      }
      v19 = v161.m256i_i64[3];
      v20 = v161.m256i_i64[2];
      v21 = v161.m256i_i64[2] + 104 * v161.m256i_i64[3];
      v161.m256i_i64[0] = v161.m256i_i64[2];
      v161.m256i_i64[2] = v161.m256i_i64[1];
      v161.m256i_i64[3] = v21;
      v193 = *(_OWORD *)v161.m256i_i8;
      if ( v19 )
      {
        v20 = v193 + 104;
        v191 = v9;
        v174 = (void (__fastcall *)(__int64))v21;
        v175 = v8;
        while ( 1 )
        {
          v222 = *(_QWORD *)(v20 - 104);
          if ( v222 == -1 )
            break;
          v210 = *(_QWORD *)(v20 - 96);
          v22 = *(_QWORD *)(v20 - 80);
          v23 = *(_QWORD *)(v20 - 72);
          v24 = *(_QWORD *)(v20 - 24);
          v25 = *(_QWORD *)(v20 - 16);
          v214 = *(__int64 **)(v20 - 56);
          v219 = v20;
          if ( v214 == (__int64 *)-1LL )
          {
            if ( v222 )
            {
              v34 = v11;
              v35 = v6;
              v36 = v22;
              v37 = v23;
              sub_140001660(v210, v222, 1);
              v23 = v37;
              v22 = v36;
              v6 = v35;
              v11 = v34;
            }
            if ( v22 )
              sub_140001660(v23, v22, 1);
            v8 = v175;
            v9 = v191;
            if ( (unsigned __int64)(v24 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_22;
          }
          else
          {
            v192 = v23;
            v215 = v22;
            v199 = v25;
            v220 = v24;
            v26 = v11;
            v27 = v8;
            v28 = v6;
            v29 = *(_QWORD *)(v20 - 88);
            v209 = *(_QWORD *)(v20 - 48);
            v30 = *(_QWORD *)(v20 - 40);
            v31 = *(_BYTE *)(v20 - 32);
            if ( v30 )
            {
              nullsub_1(v20, v22);
              v32 = sub_140001650(v30, 1);
              if ( !v32 )
              {
                v161.m256i_i64[1] = v219;
                v223 = 0;
                sub_14196B2DB(1, v30);
              }
              v33 = v32;
              sub_1419234B0(v32, v209, v30);
            }
            else
            {
              v33 = 1;
            }
            v203.m512i_i64[3] = v30;
            v203.m512i_i64[4] = v33;
            v203.m512i_i64[5] = v30;
            v203.m512i_i64[0] = v222;
            v203.m512i_i64[1] = v210;
            v203.m512i_i64[2] = v29;
            v203.m512i_i8[48] = v31;
            v38 = v189;
            if ( v189 == v187 )
              sub_14193A2A0(&v187);
            v39 = v188;
            v40 = 56 * v38;
            *(_QWORD *)(v188 + v40 + 48) = v203.m512i_i64[6];
            v41 = *(_OWORD *)v203.m512i_i8;
            v42 = *(_OWORD *)&v203.m512i_u64[2];
            *(_OWORD *)(v39 + v40 + 32) = *(_OWORD *)&v203.m512i_u64[4];
            *(_OWORD *)(v39 + v40 + 16) = v42;
            *(_OWORD *)(v39 + v40) = v41;
            v189 = v38 + 1;
            v6 = v28;
            v11 = v26;
            v21 = (__int64)v174;
            if ( v214 )
              sub_140001660(v209, v214, 1);
            v8 = v27;
            v9 = v191;
            v24 = v220;
            if ( v215 )
              sub_140001660(v192, v215, 1);
            v25 = v199;
            if ( (unsigned __int64)(v24 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
              goto LABEL_22;
          }
          sub_140001660(v25, v24, 1);
LABEL_22:
          v20 = v219 + 104;
          if ( v219 == v21 )
          {
            v20 = v21;
            break;
          }
        }
      }
      v161.m256i_i64[1] = v20;
      sub_1401B3250(v20, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v21 - v20) >> 3));
      if ( *((_QWORD *)&v193 + 1) )
        sub_140001660(v193, 104LL * *((_QWORD *)&v193 + 1), 8);
      sub_140777BC0(&v166);
    }
LABEL_47:
    if ( v211 )
      sub_140001660(v224, v211, 1);
    v8 -= 32LL;
    v9 += 4;
  }
  if ( (__int64 *)v200 != v11 )
  {
    v43 = v8 >> 5;
    do
    {
      v44 = *(v9 - 1);
      if ( v44 )
        sub_140001660(*v9, v44, 1);
      v9 += 4;
      --v43;
    }
    while ( v43 );
  }
LABEL_54:
  v45 = v194;
  if ( (_QWORD)v194 )
    sub_140001660(*((_QWORD *)&v194 + 1), 32 * v194, 8);
  v46 = v189;
  if ( v189 )
  {
    nullsub_1(v7, v45);
    v47 = sub_140001650(56 * v46, 8);
    if ( !v47 )
    {
      v228 = 1;
      sub_14196B2DB(8, 56 * v46);
    }
    v48 = v189;
  }
  else
  {
    v47 = 8;
    v48 = 0;
  }
  *(_QWORD *)&v201 = v46;
  *((_QWORD *)&v201 + 1) = v47;
  v202 = 0;
  v49 = v188;
  v50 = v188 + 56 * v48;
  v166.m256i_i64[0] = v188;
  v219 = v187;
  v166.m256i_i64[2] = v187;
  v166.m256i_i64[3] = v50;
  v51 = 56 * v48 - 56;
  v52 = (_QWORD *)(v188 + 88);
  v210 = v188;
  while ( v49 != v50 )
  {
    v57 = v49 + 56;
    v166.m256i_i64[1] = v49 + 56;
    v58 = *(_QWORD *)v49;
    *(_OWORD *)v216.m256i_i8 = *(_OWORD *)(v49 + 8);
    if ( v58 == -1 )
    {
      if ( v50 != v57 )
      {
        v67 = v51 / 0x38;
        do
        {
          v68 = *(v52 - 4);
          if ( v68 )
            sub_140001660(*(v52 - 3), v68, 1);
          v69 = *(v52 - 1);
          if ( v69 )
            sub_140001660(*v52, v69, 1);
          v52 += 7;
          --v67;
        }
        while ( v67 );
      }
      break;
    }
    v224 = *(_QWORD *)(v49 + 24);
    v59 = *(_QWORD *)(v49 + 32);
    v60 = *(_OWORD *)(v49 + 40);
    v61 = *(_QWORD *)(v49 + 40);
    v161.m256i_i64[0] = v58;
    *(_OWORD *)&v161.m256i_u64[1] = *(_OWORD *)v216.m256i_i8;
    v225 = 1;
    v222 = v59;
    sub_140A934F0(&v203, v59, v61);
    if ( v203.m512i_i64[4] == -1 )
    {
      v183 = v203.m512i_i64[0];
      v203.m512i_i64[0] = (__int64)&v161;
      v203.m512i_i64[1] = (__int64)sub_1400015F0;
      v203.m512i_i64[2] = (__int64)&v183;
      v203.m512i_i64[3] = (__int64)sub_1416EA080;
      sub_1416DAFA0(&v147, &unk_141A46156, &v203);
      v63 = v177.m128i_i64[0];
      if ( v177.m128i_i64[0] == v176.m128i_i64[0] )
        sub_141939F90(&v176);
      v64 = v176.m128i_i64[1];
      v65 = 3 * v63;
      *(_QWORD *)(v176.m128i_i64[1] + 8 * v65 + 16) = v148;
      *(_OWORD *)(v64 + 8 * v65) = v147;
      v177.m128i_i64[0] = v63 + 1;
      if ( (unsigned int)(v183 & 3) - 2 >= 2 && (v183 & 3) != 0 )
      {
        v203.m512i_i64[1] = v183 - 1;
        v203.m512i_i8[0] = 3;
        v225 = 1;
        sub_1416EBAD0(&v203.m512i_u64[1]);
      }
      v62 = v224;
      if ( !v224 )
        goto LABEL_76;
LABEL_75:
      sub_140001660(v222, v62, 1);
      goto LABEL_76;
    }
    if ( v203.m512i_i32[8] != 2 && v203.m512i_i64[0] )
    {
      sub_140001660(v203.m512i_i64[1], v203.m512i_i64[0], 1);
      v62 = v224;
LABEL_81:
      v203.m512i_i64[2] = v161.m256i_i64[2];
      *(_OWORD *)v203.m512i_i8 = *(_OWORD *)v161.m256i_i8;
      v203.m512i_i64[3] = v62;
      v203.m512i_i64[4] = v222;
      *(_OWORD *)&v203.m512i_u64[5] = v60;
      v66 = v202;
      if ( v202 == (_QWORD)v201 )
        sub_14193A2A0(&v201);
      v53 = *((_QWORD *)&v201 + 1);
      v54 = 56 * v66;
      *(_QWORD *)(*((_QWORD *)&v201 + 1) + v54 + 48) = v203.m512i_i64[6];
      v55 = *(_OWORD *)v203.m512i_i8;
      v56 = *(_OWORD *)&v203.m512i_u64[2];
      *(_OWORD *)(v53 + v54 + 32) = *(_OWORD *)&v203.m512i_u64[4];
      *(_OWORD *)(v53 + v54 + 16) = v56;
      *(_OWORD *)(v53 + v54) = v55;
      v202 = v66 + 1;
      goto LABEL_62;
    }
    v62 = v224;
    if ( v203.m512i_i32[8] != 2 )
      goto LABEL_81;
    ++v180.m128i_i64[1];
    if ( v224 )
      goto LABEL_75;
LABEL_76:
    if ( v161.m256i_i64[0] )
      sub_140001660(v161.m256i_i64[1], v161.m256i_i64[0], 1);
LABEL_62:
    v51 -= 56LL;
    v52 += 7;
    v49 = v57;
  }
  if ( v219 )
    sub_140001660(v210, 56 * v219, 8);
  v70 = *((__int64 **)&v201 + 1);
  v175 = v202;
  v161.m256i_i64[0] = *((_QWORD *)&v201 + 1);
  *((_QWORD *)&v194 + 1) = v201;
  v161.m256i_i64[2] = v201;
  v209 = *((_QWORD *)&v201 + 1) + 56 * v202;
  v161.m256i_i64[3] = v209;
  v71 = 56 * v202 - 56;
  v72 = *((_QWORD *)&v201 + 1) + 88LL;
  v73 = 0x20000000;
  v74 = 0;
  v153 = *((_QWORD *)&v201 + 1);
  while ( 1 )
  {
    if ( v70 == (__int64 *)v209 )
    {
      v121 = *((_QWORD *)&v194 + 1);
      goto LABEL_227;
    }
    v75 = v70 + 7;
    v161.m256i_i64[1] = (__int64)(v70 + 7);
    v76 = *v70;
    if ( *v70 == -1 )
      break;
    v141 = *(_OWORD *)(v70 + 1);
    v77 = v70[3];
    v219 = v70[4];
    v78 = v70[5];
    v210 = v74 + 1;
    *(_QWORD *)&v162 = v74 + 1;
    *(_QWORD *)v190 = v76;
    *(_OWORD *)&v190[8] = v141;
    if ( v73 )
    {
      v211 = v77;
      v79 = v175 - v74;
      if ( v175 == v74 )
        sub_14196B950(&off_141A4B1C0, v76, v78);
      v214 = v75;
      if ( (v79 | v73) >> 32 )
        v80 = v73 / v79;
      else
        v80 = (unsigned int)v73 / (unsigned int)v79;
      if ( v80 < 0x200001 )
        v80 = 0x200000;
      if ( v80 >= 0x4000000 )
        v80 = 0x4000000;
      v196 = -1;
      v195 = v224;
      v227 = 1;
      sub_140A92FF0(&v183, v219, v78);
      if ( !v183 )
      {
        v108 = v184;
        *(_QWORD *)&v212 = v184;
        v216.m256i_i64[0] = 0;
        *(_OWORD *)&v216.m256i_u64[1] = 1u;
        v166.m256i_i64[2] = 1610612768;
        v166.m256i_i64[0] = (__int64)&v216;
        v166.m256i_i64[1] = (__int64)&off_141A49990;
        if ( (unsigned __int8)sub_1416EA080(&v212, &v166) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_59,
            55,
            (unsigned int)&v221,
            (unsigned int)&unk_141A481A8,
            (__int64)&off_141A4E498);
        v224 = v216.m256i_i64[1];
        v203.m512i_i64[0] = v216.m256i_i64[0];
        *(_OWORD *)&v203.m512i_u64[1] = *(_OWORD *)&v216.m256i_u64[1];
        v200 = v216.m256i_i64[2];
        memset(&v203.m512i_u64[3], 0, 25);
        if ( (unsigned int)(v108 & 3) - 2 >= 2 && (v108 & 3) != 0 )
        {
          v166.m256i_i64[1] = v108 - 1;
          v166.m256i_i8[0] = 3;
          v196 = v216.m256i_i64[0];
          v195 = v224;
          v227 = 0;
          sub_1416EBAD0(&v166.m256i_u64[1]);
        }
        v75 = v214;
        goto LABEL_191;
      }
      v192 = v71;
      v191 = (_QWORD *)v72;
      v197 = (__m256i *)v183;
      v198 = (void (__fastcall **)(__int64))v184;
      *(_QWORD *)&v212 = 0;
      *((_QWORD *)&v212 + 1) = 1;
      v82 = 1;
      v215 = 0;
      v199 = 0;
      v220 = 0;
      *(_QWORD *)&v194 = 0;
      *((_QWORD *)&v193 + 1) = 0;
      v83 = 0;
      while ( 1 )
      {
LABEL_112:
        v213 = 0;
        v84 = 0;
        v222 = -1;
        if ( v83 >= v80 || !v73 )
          goto LABEL_185;
        v183 = (__int64)&v197;
        v184 = 25165825;
        v185 = 25165825;
        v218 = -1;
        v217 = v224;
        LOBYTE(v81) = 10;
        v85 = sub_140C43D90(&v183, v81, &v212);
        v87 = v86;
        if ( v85 == 1 )
          break;
        if ( !v86 )
        {
          v84 = v82;
          goto LABEL_185;
        }
        v84 = 0;
        v88 = v73 < v86;
        v89 = v73 - v86;
        v73 = 0;
        if ( !v88 )
          v73 = v89;
        if ( !v213 )
          goto LABEL_185;
        v81 = *((_QWORD *)&v212 + 1);
        if ( *(_BYTE *)(*((_QWORD *)&v212 + 1) + v213 - 1) != 10 )
        {
          if ( v213 > 0x1800000 )
          {
            ++v215;
            v91 = v197;
            v174 = v198[11];
            *(_QWORD *)&v193 = v198[12];
            v92 = 0;
            while ( 1 )
            {
              v84 = 0;
              if ( v92 > 0x3FFFFFF || !v73 )
                break;
              v218 = -1;
              v217 = v224;
              ((void (__fastcall *)(__m256i *, __m256i *))v174)(&v216, v91);
              if ( !v216.m256i_i64[0] )
              {
                if ( (v216.m256i_i8[8] & 3u) - 2 >= 2 && (v216.m256i_i8[8] & 3) != 0 )
                {
                  v166.m256i_i64[1] = v216.m256i_i64[1] - 1;
                  v166.m256i_i8[0] = 3;
                  v218 = -1;
                  v217 = v224;
                  sub_1416EBAD0(&v166.m256i_u64[1]);
                }
                goto LABEL_184;
              }
              v72 = v216.m256i_u64[1];
              if ( !v216.m256i_i64[1] )
              {
                v82 = 0;
                goto LABEL_112;
              }
              v93 = 0;
              while ( 1 )
              {
                v94 = *(_BYTE *)(v216.m256i_i64[0] + v93++);
                if ( v94 == 10 )
                  break;
                if ( v216.m256i_i64[1] == v93 )
                  goto LABEL_137;
              }
              v72 = v93;
LABEL_137:
              v218 = -1;
              v217 = v224;
              ((void (__fastcall *)(__m256i *, unsigned __int64))v193)(v91, v72);
              v92 += v72;
              v88 = v73 < v72;
              v95 = v73 - v72;
              v73 = 0;
              if ( !v88 )
                v73 = v95;
              if ( v94 == 10 )
              {
                v82 = 0;
                goto LABEL_112;
              }
            }
LABEL_185:
            v203.m512i_i64[0] = v222;
            v203.m512i_i64[1] = v224;
            v203.m512i_i64[2] = v200;
            v203.m512i_i64[3] = v220;
            v203.m512i_i64[4] = v199;
            v203.m512i_i64[5] = v215;
            v203.m512i_i8[48] = v84;
            v72 = (unsigned __int64)v191;
            v71 = v192;
            v75 = v214;
            if ( (_QWORD)v212 )
              sub_140001660(*((_QWORD *)&v212 + 1), v212, 1);
            v220 = (__int64)v197;
            v215 = (__int64)v198;
            if ( *v198 )
              (*v198)(v220);
            v110 = *(_QWORD *)(v215 + 8);
            if ( v110 )
              sub_140001660(v220, v110, *(_QWORD *)(v215 + 16));
LABEL_191:
            ++v179.m128i_i64[0];
            if ( v203.m512i_i8[48] )
            {
              ++v179.m128i_i64[1];
              v111 = v203.m512i_i64[5];
              if ( !v203.m512i_i64[5] )
              {
LABEL_196:
                if ( v203.m512i_i64[3] )
                {
                  v181.m128i_i64[0] += v203.m512i_i64[3];
                  v166.m256i_i64[0] = (__int64)v190;
                  v166.m256i_i64[1] = (__int64)sub_1400015F0;
                  v166.m256i_i64[2] = (__int64)&v203.m512i_i64[3];
                  v166.m256i_i64[3] = (__int64)sub_1416EBAE0;
                  v226 = 1;
                  sub_1416DAFA0(&v156, &unk_141A4B1D8, &v166);
                  v112 = v178.m128i_i64[1];
                  if ( v178.m128i_i64[1] >= 3uLL )
                  {
                    if ( (_QWORD)v156 )
                      sub_140001660(*((_QWORD *)&v156 + 1), v156, 1);
                  }
                  else
                  {
                    if ( v178.m128i_i64[1] == v177.m128i_i64[1] )
                    {
                      v214 = *((__int64 **)&v156 + 1);
                      v222 = v156;
                      sub_141939F90(&v177.m128i_u64[1]);
                    }
                    v113 = v178.m128i_i64[0];
                    v114 = 3 * v112;
                    *(_QWORD *)(v178.m128i_i64[0] + 8 * v114 + 16) = v157;
                    *(_OWORD *)(v113 + 8 * v114) = v156;
                    v178.m128i_i64[1] = v112 + 1;
                  }
                }
                if ( v203.m512i_i64[4] )
                {
                  v181.m128i_i64[1] += v203.m512i_i64[4];
                  v166.m256i_i64[0] = (__int64)v190;
                  v166.m256i_i64[1] = (__int64)sub_1400015F0;
                  v226 = 1;
                  sub_1416DAFA0(&v154, &unk_141A4B1F5, &v166);
                  v115 = v178.m128i_i64[1];
                  if ( v178.m128i_i64[1] >= 3uLL )
                  {
                    if ( (_QWORD)v154 )
                      sub_140001660(*((_QWORD *)&v154 + 1), v154, 1);
                  }
                  else
                  {
                    if ( v178.m128i_i64[1] == v177.m128i_i64[1] )
                    {
                      v214 = *((__int64 **)&v154 + 1);
                      v222 = v154;
                      sub_141939F90(&v177.m128i_u64[1]);
                    }
                    v116 = v178.m128i_i64[0];
                    v117 = 3 * v115;
                    *(_QWORD *)(v178.m128i_i64[0] + 8 * v117 + 16) = v155;
                    *(_OWORD *)(v116 + 8 * v117) = v154;
                    v178.m128i_i64[1] = v115 + 1;
                  }
                }
                if ( v203.m512i_i64[0] != -1 )
                {
                  v216.m256i_i64[2] = v203.m512i_i64[2];
                  *(_OWORD *)v216.m256i_i8 = *(_OWORD *)v203.m512i_i8;
                  v166.m256i_i64[0] = (__int64)v190;
                  v166.m256i_i64[1] = (__int64)sub_1400015F0;
                  v166.m256i_i64[2] = (__int64)&v216;
                  v166.m256i_i64[3] = (__int64)sub_1400015F0;
                  sub_1416DAFA0(&v145, &unk_141A46156, &v166);
                  v118 = v177.m128i_i64[0];
                  if ( v177.m128i_i64[0] == v176.m128i_i64[0] )
                    sub_141939F90(&v176);
                  v119 = v176.m128i_i64[1];
                  v120 = 3 * v118;
                  *(_QWORD *)(v176.m128i_i64[1] + 8 * v120 + 16) = v146;
                  *(_OWORD *)(v119 + 8 * v120) = v145;
                  v177.m128i_i64[0] = v118 + 1;
                  if ( v216.m256i_i64[0] )
                    sub_140001660(v216.m256i_i64[1], v216.m256i_i64[0], 1);
                }
                if ( v211 )
                  sub_140001660(v219, v211, 1);
                v76 = *(_QWORD *)v190;
                if ( !*(_QWORD *)v190 )
                  goto LABEL_94;
LABEL_93:
                sub_140001660(*(_QWORD *)&v190[8], v76, 1);
                goto LABEL_94;
              }
            }
            else
            {
              ++v180.m128i_i64[0];
              v111 = v203.m512i_i64[5];
              if ( !v203.m512i_i64[5] )
                goto LABEL_196;
            }
            v182 += v111;
            goto LABEL_196;
          }
LABEL_184:
          v84 = 0;
          goto LABEL_185;
        }
        v83 += v87;
        v90 = v213 - 1;
        if ( v213 != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)&v212 + 1) + v213 - 2) != 13 || (v90 = v213 - 2, v213 != 2) )
          {
            if ( v90 > v213 )
            {
              v218 = -1;
              v217 = v224;
              sub_14196B880(0, v90, v213, &off_141A4B008);
            }
            v218 = -1;
            v217 = v224;
            sub_1416E2AB0(&v166, *((_QWORD *)&v212 + 1), v90);
            if ( v166.m256i_i32[0] == 1 )
            {
              ++v220;
            }
            else
            {
              v96 = v166.m256i_i64[2];
              *(_OWORD *)v166.m256i_i8 = *(_OWORD *)&v166.m256i_u64[1];
              *(_OWORD *)&v166.m256i_u64[2] = 0;
              *(_QWORD *)&v167 = v166.m256i_i64[0];
              *((_QWORD *)&v167 + 1) = v96;
              v218 = -1;
              v217 = v224;
              sub_140D8B500(&v216, (__int128 *)v166.m256i_i8);
              if ( v216.m256i_i8[0] == -1 )
              {
                v218 = -1;
                v217 = v224;
                sub_140032F30(&v216.m256i_u64[1]);
                ++v220;
              }
              else
              {
                v166 = v216;
                v97 = sub_1416724D0(aOrdinal, 7, &v166);
                if ( v97 )
                {
                  v98 = v160;
                  if ( *(_BYTE *)v97 == 2 && !*(_QWORD *)(v97 + 8) )
                  {
                    v99 = *(_QWORD *)(v97 + 16);
                    v100 = (v99 <= v160) & (unsigned __int8)v194;
                    v220 += v100;
                    LOBYTE(v100) = 1;
                    *(_QWORD *)&v194 = v100;
                    v98 = v99;
                  }
                }
                else
                {
                  v98 = v160;
                }
                v160 = v98;
                LOBYTE(v72) = 1;
                if ( (BYTE8(v193) & 1) == 0 )
                {
                  v101 = sub_1416724D0(aType_7, 4, &v166);
                  if ( v101
                    && *(_BYTE *)v101 == 3
                    && *(_QWORD *)(v101 + 24) == 12
                    && !(**(_QWORD **)(v101 + 16) ^ 0x5F6E6F6973736573LL
                       | *(unsigned int *)(*(_QWORD *)(v101 + 16) + 8LL) ^ 0x6174656DLL) )
                  {
                    v102 = (_BYTE *)sub_14166BC00(&v166, aPayloadHistory, 21);
                    v103 = v102;
                    if ( v102 && *v102 )
                    {
                      v104 = sub_1416724D0(aEndOrdinalExcl, 21, v102);
                      if ( !v104
                        || *(_BYTE *)v104 != 2
                        || *(_QWORD *)(v104 + 8)
                        || (v222 = *(_QWORD *)(v104 + 16), (v107 = sub_1416724D0(aOrdinal, 7, &v166)) == 0)
                        || *(_BYTE *)v107 != 2
                        || *(_QWORD *)(v107 + 8)
                        || *(_QWORD *)(v107 + 16) != v222 )
                      {
                        ++v220;
                      }
                      v105 = sub_1416724D0("thread_idoriginal_modelborrowed_modelentries", 9, v103);
                      if ( v105 && *(_BYTE *)v105 == 3 && *(_QWORD *)(v105 + 24) )
                      {
                        v106 = sub_1408458E0(&v142, *(_QWORD *)(v105 + 16));
                        v199 += v106 ^ 1u;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v72) = 0;
                  }
                }
                v218 = -1;
                v217 = v224;
                sub_140032FF0(&v166);
                *((_QWORD *)&v193 + 1) = (unsigned int)v72;
              }
            }
          }
        }
      }
      v109 = v86;
      v158 = v86;
      v216.m256i_i64[0] = 0;
      *(_OWORD *)&v216.m256i_u64[1] = 1u;
      v166.m256i_i64[2] = 1610612768;
      v166.m256i_i64[0] = (__int64)&v216;
      v166.m256i_i64[1] = (__int64)&off_141A49990;
      if ( (unsigned __int8)sub_1416EA080(&v158, &v166) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_59,
          55,
          (unsigned int)&v221,
          (unsigned int)&unk_141A481A8,
          (__int64)&off_141A4E498);
      v224 = v216.m256i_i64[1];
      v222 = v216.m256i_i64[0];
      v200 = v216.m256i_i64[2];
      if ( (v109 & 3) - 2 >= 2 && (v109 & 3) != 0 )
      {
        v166.m256i_i64[1] = v109 - 1;
        v166.m256i_i8[0] = 3;
        v218 = v222;
        v217 = v224;
        sub_1416EBAD0(&v166.m256i_u64[1]);
      }
      goto LABEL_184;
    }
    ++v180.m128i_i64[0];
    if ( v77 )
    {
      sub_140001660(v219, v77, 1);
      v76 = *(_QWORD *)v190;
    }
    v73 = 0;
    if ( v76 )
      goto LABEL_93;
LABEL_94:
    v71 -= 56LL;
    v72 += 56LL;
    v74 = v210;
    v70 = v75;
  }
  v121 = *((_QWORD *)&v194 + 1);
  if ( (__int64 *)v209 != v75 )
  {
    v122 = v71 / 0x38;
    do
    {
      v123 = *(_QWORD *)(v72 - 32);
      if ( v123 )
        sub_140001660(*(_QWORD *)(v72 - 24), v123, 1);
      v124 = *(_QWORD *)(v72 - 8);
      if ( v124 )
        sub_140001660(*(_QWORD *)v72, v124, 1);
      v72 += 56LL;
      --v122;
    }
    while ( v122 );
  }
LABEL_227:
  if ( v121 )
    sub_140001660(v153, 56 * v121, 8);
  HIDWORD(_RAX) = HIDWORD(v182);
  v126 = v159;
  v159[6].m128i_i64[0] = v182;
  v126[5] = v181;
  v126[4] = v180;
  v127 = _mm_loadu_si128(&v176);
  v128 = v177;
  v129 = v178;
  v126[3] = v179;
  v126[2] = v129;
  v126[1] = v128;
  *v126 = v127;
  v130 = *((_QWORD *)&v142 + 1);
  if ( *((_QWORD *)&v142 + 1) )
  {
    v131 = *((_QWORD *)&v143 + 1);
    if ( *((_QWORD *)&v143 + 1) )
    {
      v132 = v142;
      v133 = (const __m128i *)(v142 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v142));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v133);
            v132 -= 384;
            ++v133;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v136 = -3 * _RAX;
        v137 = *(_QWORD *)(v132 + 8 * v136 - 24);
        if ( v137 )
          sub_140001660(*(_QWORD *)(v132 + 8 * v136 - 16), v137, 1);
        --v131;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v131 );
    }
    v138 = (24 * v130 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v139 = v138 + v130 + 17;
    if ( v139 )
      sub_140001660(v142 - v138, v139, 16);
  }
  return v159;
}
