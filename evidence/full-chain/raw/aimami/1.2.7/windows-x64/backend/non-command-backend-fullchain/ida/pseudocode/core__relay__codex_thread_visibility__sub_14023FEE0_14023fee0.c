// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14023fee0 | name sub_14023FEE0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14023FEE0(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int128 v9; // rax
  void (__fastcall *v10)(_QWORD, _QWORD); // r13
  __int64 v11; // rcx
  unsigned __int128 v12; // kr00_16
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __m256i *v15; // r12
  __int64 *i; // rax
  __int64 *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rdx
  __int128 v29; // rcx
  char v30; // dl
  __m256i *v31; // r14
  __int64 v32; // r12
  __m128i *v33; // rax
  __int64 v34; // r13
  void (__fastcall *v35)(_QWORD, _QWORD); // r12
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // r14
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int128 v60; // xmm6
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r15
  _QWORD *v71; // rbx
  unsigned __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // r8
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // r14
  __int64 v80; // rdx
  char v81; // r12
  unsigned __int64 v82; // r15
  char v83; // al
  __int64 v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  bool v87; // cf
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  _QWORD *v90; // rbx
  unsigned __int64 v91; // r13
  unsigned __int64 v92; // rcx
  char v93; // r12
  unsigned __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  _BYTE *v101; // rax
  _BYTE *v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int8 v105; // al
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rdx
  __m128i *v120; // rcx
  __m128i v121; // xmm0
  __m128i v122; // xmm1
  __m128i v123; // xmm2
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rbx
  const __m128i *v127; // r14
  __m128i si128; // xmm0
  __int64 v130; // rax
  __int64 v131; // rdx
  unsigned __int64 v132; // rax
  __int64 v133; // rsi
  __int128 v135; // [rsp+30h] [rbp-50h]
  unsigned __int128 v136; // [rsp+40h] [rbp-40h] BYREF
  __int128 v137; // [rsp+50h] [rbp-30h]
  __int128 v138; // [rsp+60h] [rbp-20h]
  __int128 v139; // [rsp+78h] [rbp-8h] BYREF
  __int64 v140; // [rsp+88h] [rbp+8h]
  __int128 v141; // [rsp+90h] [rbp+10h] BYREF
  __int64 v142; // [rsp+A0h] [rbp+20h]
  __int128 v143; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v144; // [rsp+B8h] [rbp+38h]
  __int128 v145; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v146; // [rsp+D0h] [rbp+50h]
  __int64 v147; // [rsp+D8h] [rbp+58h]
  __int64 v148; // [rsp+E0h] [rbp+60h]
  __int128 v149; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v150; // [rsp+F8h] [rbp+78h]
  __int128 v151; // [rsp+100h] [rbp+80h] BYREF
  __int64 v152; // [rsp+110h] [rbp+90h]
  unsigned __int64 v153; // [rsp+118h] [rbp+98h] BYREF
  __int64 v154; // [rsp+120h] [rbp+A0h]
  __m128i *v155; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v156; // [rsp+130h] [rbp+B0h]
  __int64 v157; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v158; // [rsp+140h] [rbp+C0h]
  __m256i v159; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v160; // [rsp+170h] [rbp+F0h]
  __int128 v161; // [rsp+180h] [rbp+100h]
  __int128 v162; // [rsp+190h] [rbp+110h]
  __int128 v163; // [rsp+1A0h] [rbp+120h]
  __int64 v164; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v165; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v166; // [rsp+1C8h] [rbp+148h]
  void (__fastcall *v167)(_QWORD, _QWORD); // [rsp+1D0h] [rbp+150h]
  __int64 v168; // [rsp+1D8h] [rbp+158h]
  void (__fastcall *v169)(_QWORD *, unsigned __int64); // [rsp+1E0h] [rbp+160h]
  __m128i v170; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v171; // [rsp+1F8h] [rbp+178h] BYREF
  __m128i v172; // [rsp+208h] [rbp+188h]
  __m128i v173; // [rsp+218h] [rbp+198h]
  __m128i v174; // [rsp+228h] [rbp+1A8h]
  __m128i v175; // [rsp+238h] [rbp+1B8h]
  __int64 v176; // [rsp+248h] [rbp+1C8h]
  _QWORD *v177; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v178; // [rsp+258h] [rbp+1D8h]
  __int64 v179; // [rsp+260h] [rbp+1E0h]
  __int64 v180; // [rsp+268h] [rbp+1E8h]
  unsigned __int128 v181; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v182; // [rsp+280h] [rbp+200h]
  __int128 v183; // [rsp+290h] [rbp+210h]
  __int128 v184; // [rsp+2A0h] [rbp+220h]
  __int128 v185; // [rsp+2B0h] [rbp+230h]
  __int128 v186; // [rsp+2C0h] [rbp+240h]
  __int128 v187; // [rsp+2D0h] [rbp+250h]
  __int64 v188; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v189; // [rsp+2F0h] [rbp+270h]
  __int64 v190; // [rsp+2F8h] [rbp+278h]
  _QWORD *v191; // [rsp+300h] [rbp+280h] BYREF
  __int64 v192; // [rsp+308h] [rbp+288h]
  _QWORD *v193; // [rsp+310h] [rbp+290h]
  __int64 v194; // [rsp+318h] [rbp+298h]
  __int64 v195; // [rsp+320h] [rbp+2A0h]
  __int64 v196; // [rsp+328h] [rbp+2A8h]
  __int64 v197; // [rsp+330h] [rbp+2B0h]
  const __m128i *v198; // [rsp+338h] [rbp+2B8h]
  __int64 v199; // [rsp+340h] [rbp+2C0h]
  __int64 v200; // [rsp+348h] [rbp+2C8h] BYREF
  __int64 v201; // [rsp+350h] [rbp+2D0h]
  unsigned __int64 v202; // [rsp+358h] [rbp+2D8h]
  unsigned __int128 v203; // [rsp+360h] [rbp+2E0h] BYREF
  _BYTE v204[48]; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v205; // [rsp+3A0h] [rbp+320h]
  __int128 v206; // [rsp+3B0h] [rbp+330h]
  __int128 v207; // [rsp+3C0h] [rbp+340h]
  unsigned __int128 v208; // [rsp+3D8h] [rbp+358h]
  __int64 v209; // [rsp+3E8h] [rbp+368h]
  __int64 v210; // [rsp+3F0h] [rbp+370h]
  __int64 v211; // [rsp+3F8h] [rbp+378h]
  unsigned __int128 v212; // [rsp+400h] [rbp+380h] BYREF
  __int128 v213; // [rsp+410h] [rbp+390h]
  __int64 v214; // [rsp+420h] [rbp+3A0h]
  __int64 v215; // [rsp+428h] [rbp+3A8h]
  __int64 v216; // [rsp+430h] [rbp+3B0h]
  _QWORD *v217; // [rsp+438h] [rbp+3B8h]
  char v218; // [rsp+447h] [rbp+3C7h] BYREF
  __int64 v219; // [rsp+448h] [rbp+3C8h]
  char v220; // [rsp+456h] [rbp+3D6h]
  __int64 v221; // [rsp+458h] [rbp+3D8h]
  char v222; // [rsp+464h] [rbp+3E4h]
  char v223; // [rsp+465h] [rbp+3E5h]
  char v224; // [rsp+466h] [rbp+3E6h]
  char v225; // [rsp+467h] [rbp+3E7h]
  __int64 v226; // [rsp+468h] [rbp+3E8h]

  v226 = -2;
  v155 = a1;
  v170.m128i_i64[0] = 0;
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v170.m128i_i64[1] = 8;
  v171 = 0;
  v172 = (__m128i)8uLL;
  v3 = sub_14167F170(a1);
  v8 = v3;
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v9 = *(_OWORD *)v3;
  }
  else
  {
    *(_QWORD *)&v9 = sub_141696260(v5, v4, v6, v7);
    *(_OWORD *)v8 = v9;
    *(_BYTE *)(v8 + 16) = 1;
  }
  *(_QWORD *)v8 = v9 + 1;
  *(_OWORD *)v204 = xmmword_1419D6520;
  v203 = *(_OWORD *)&off_1419D6510;
  *(_OWORD *)&v204[16] = v9;
  sub_140231340(a2[21], a2[22], (__int64)&v203, 0);
  sub_140231340(a2[25], a2[26], (__int64)&v203, 0);
  v138 = *(_OWORD *)&v204[16];
  v137 = *(_OWORD *)v204;
  v136 = v203;
  v188 = 0;
  v189 = 8;
  v190 = 0;
  v225 = 1;
  sub_1401B7010(&v203, (__int64)a2);
  v10 = *((void (__fastcall **)(_QWORD, _QWORD))&v203 + 1);
  v12 = v203;
  v177 = (_QWORD *)(v12 >> 64);
  v11 = v12;
  v193 = (_QWORD *)v203;
  v179 = v203;
  v214 = 32LL * *(_QWORD *)v204 + *((_QWORD *)&v203 + 1);
  v180 = v214;
  v13 = 32LL * *(_QWORD *)v204 - 32;
  v14 = *((_QWORD *)&v203 + 1) + 40LL;
  v15 = &v159;
  for ( i = *((__int64 **)&v203 + 1); ; i = v17 )
  {
    if ( i == (__int64 *)v214 )
      goto LABEL_54;
    v17 = i + 4;
    v178 = (__int64)(i + 4);
    v11 = *i;
    if ( *i == -1 )
      break;
    v219 = *i;
    v18 = i[2];
    v221 = i[1];
    sub_141695A00(&v203, v221, v18);
    if ( (_DWORD)v203 == 2 )
    {
      v11 = BYTE8(v203) & 3;
      if ( (unsigned int)(v11 - 2) >= 2 && (BYTE8(v203) & 3) != 0 )
      {
        --*((_QWORD *)&v203 + 1);
        LOBYTE(v203) = 3;
        sub_1416BCB00((char *)&v203 + 8);
      }
    }
    else
    {
      sub_140231840((__int64)&v203, v221, v18);
      if ( BYTE8(v207) == 0xFF )
      {
        v163 = v206;
        v162 = v205;
        v161 = *(_OWORD *)&v204[32];
        v160 = *(_OWORD *)&v204[16];
        *(_OWORD *)&v159.m256i_u64[2] = *(_OWORD *)v204;
        *(_OWORD *)v159.m256i_i8 = v203;
        v200 = v221;
        v201 = v18;
        *(_QWORD *)&v212 = &v200;
        *((_QWORD *)&v212 + 1) = sub_14169F630;
        *(_QWORD *)&v213 = v15;
        *((_QWORD *)&v213 + 1) = sub_14104A7D0;
        sub_1416ABFD0(&v145, &unk_1419D58EB, &v212);
        v22 = v171.m128i_i64[0];
        if ( v171.m128i_i64[0] == v170.m128i_i64[0] )
          sub_14190FDC0(&v170);
        v23 = v170.m128i_i64[1];
        v24 = 3 * v22;
        *(_QWORD *)(v170.m128i_i64[1] + 8 * v24 + 16) = v146;
        *(_OWORD *)(v23 + 8 * v24) = v145;
        v171.m128i_i64[0] = v22 + 1;
        sub_1401954F0(v15);
      }
      else
      {
        v187 = v207;
        v186 = v206;
        v185 = v205;
        v184 = *(_OWORD *)&v204[32];
        v183 = *(_OWORD *)&v204[16];
        v182 = *(_OWORD *)v204;
        v181 = v203;
        sub_140251C90(v15, &v181);
        if ( v159.m256i_i32[0] == -1 )
        {
          v25 = v159.m256i_i64[3];
          v26 = v159.m256i_i64[2];
          v27 = v159.m256i_i64[2] + 104 * v159.m256i_i64[3];
          v159.m256i_i64[0] = v159.m256i_i64[2];
          v159.m256i_i64[2] = v159.m256i_i64[1];
          v159.m256i_i64[3] = v27;
          if ( !v25 )
          {
LABEL_44:
            v159.m256i_i64[1] = v26;
            sub_1403F9C40(v15);
            sub_1401923E0(&v181);
            goto LABEL_45;
          }
          v26 += 104;
          while ( 2 )
          {
            if ( *(_QWORD *)(v26 - 104) == -1 )
              goto LABEL_44;
            v208 = *(_OWORD *)(v26 - 104);
            v211 = *(_QWORD *)(v26 - 80);
            *(_QWORD *)&v29 = *(_QWORD *)(v26 - 72);
            v28 = *(_QWORD *)(v26 - 56);
            *((_QWORD *)&v29 + 1) = *(_QWORD *)(v26 - 24);
            v217 = *(_QWORD **)(v26 - 16);
            v210 = v26;
            if ( v28 == -1 )
            {
              if ( (_QWORD)v208 )
              {
                v35 = v10;
                v36 = v27;
                v37 = v29;
                sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
                *(_QWORD *)&v29 = v37;
                v27 = v36;
                v10 = v35;
                v15 = &v159;
                v26 = v210;
              }
              if ( v211 )
              {
                sub_140001660(v29, v211, 1);
                v26 = v210;
              }
              if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_33;
            }
            else
            {
              v209 = *((_QWORD *)&v29 + 1);
              v198 = *(const __m128i **)(v26 - 48);
              *((_QWORD *)&v29 + 1) = *(_QWORD *)(v26 - 40);
              v199 = v29;
              v197 = v28;
              if ( v29 < 0 )
              {
                v32 = 0;
LABEL_48:
                v159.m256i_i64[1] = v26;
                v220 = 0;
                sub_141938D2B(v32, *((_QWORD *)&v29 + 1));
              }
              v167 = v10;
              *(_QWORD *)&v29 = *(_QWORD *)(v26 - 88);
              v30 = *(_BYTE *)(v26 - 32);
              if ( *((_QWORD *)&v29 + 1) )
              {
                LOBYTE(v194) = *(_BYTE *)(v26 - 32);
                v169 = (void (__fastcall *)(_QWORD *, unsigned __int64))v29;
                v168 = v27;
                v31 = v15;
                nullsub_1(v29);
                v32 = 1;
                v33 = (__m128i *)sub_140001650(*((_QWORD *)&v29 + 1), 1);
                v26 = v210;
                if ( !v33 )
                  goto LABEL_48;
                v34 = (__int64)v33;
                sub_1418F44E0(v33, v198, *((unsigned __int64 *)&v29 + 1));
                v15 = v31;
                v27 = v168;
                *(_QWORD *)&v29 = v169;
                v30 = v194;
              }
              else
              {
                v34 = 1;
              }
              *(_QWORD *)&v204[16] = v34;
              *(_QWORD *)&v204[24] = *((_QWORD *)&v29 + 1);
              v203 = v208;
              *(_OWORD *)v204 = v29;
              v204[32] = v30;
              v39 = v190;
              if ( v190 == v188 )
                sub_141910060(&v188);
              v40 = v189;
              v41 = 56 * v39;
              *(_QWORD *)(v189 + v41 + 48) = *(_QWORD *)&v204[32];
              v42 = v203;
              v43 = *(_OWORD *)v204;
              *(_OWORD *)(v40 + v41 + 32) = *(_OWORD *)&v204[16];
              *(_OWORD *)(v40 + v41 + 16) = v43;
              *(_OWORD *)(v40 + v41) = v42;
              v190 = v39 + 1;
              v10 = v167;
              if ( v197 )
                sub_140001660(v198, v197, 1);
              *((_QWORD *)&v29 + 1) = v209;
              if ( v211 )
                sub_140001660(v199, v211, 1);
              v26 = v210;
              if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) - 1LL) >= 0xFFFFFFFFFFFFFFFEuLL )
              {
LABEL_33:
                v38 = v26 - 104;
                v26 += 104;
                if ( v38 + 104 == v27 )
                {
                  v26 = v27;
                  goto LABEL_44;
                }
                continue;
              }
            }
            break;
          }
          sub_140001660(v217, *((_QWORD *)&v29 + 1), 1);
          v26 = v210;
          goto LABEL_33;
        }
        v206 = v163;
        v205 = v162;
        *(_OWORD *)&v204[32] = v161;
        *(_OWORD *)&v204[16] = v160;
        *(_OWORD *)v204 = *(_OWORD *)&v159.m256i_u64[2];
        v203 = *(_OWORD *)v159.m256i_i8;
        v200 = v221;
        v201 = v18;
        *(_QWORD *)&v212 = &v200;
        *((_QWORD *)&v212 + 1) = sub_14169F630;
        *(_QWORD *)&v213 = &v203;
        *((_QWORD *)&v213 + 1) = sub_14104A7D0;
        sub_1416ABFD0(&v143, &unk_1419D58EB, &v212);
        v19 = v171.m128i_i64[0];
        if ( v171.m128i_i64[0] == v170.m128i_i64[0] )
          sub_14190FDC0(&v170);
        v20 = v170.m128i_i64[1];
        v21 = 3 * v19;
        *(_QWORD *)(v170.m128i_i64[1] + 8 * v21 + 16) = v144;
        *(_OWORD *)(v20 + 8 * v21) = v143;
        v171.m128i_i64[0] = v19 + 1;
        sub_1401954F0(&v203);
        sub_1401923E0(&v181);
      }
    }
LABEL_45:
    if ( v219 )
      sub_140001660(v221, v219, 1);
    v13 -= 32LL;
    v14 += 32LL;
  }
  if ( (__int64 *)v214 != v17 )
  {
    v44 = v13 >> 5;
    do
    {
      v45 = *(_QWORD *)(v14 - 8);
      if ( v45 )
        sub_140001660(*(_QWORD *)v14, v45, 1);
      v14 += 32LL;
      --v44;
    }
    while ( v44 );
  }
LABEL_54:
  if ( v193 )
    sub_140001660(v10, 32LL * (_QWORD)v193, 8);
  v46 = v190;
  if ( v190 )
  {
    LODWORD(v14) = 56 * v190;
    nullsub_1(v11);
    v47 = sub_140001650(56 * v46, 8);
    if ( !v47 )
    {
      v225 = 1;
      sub_141938D2B(8, 56 * v46);
    }
    v48 = v190;
  }
  else
  {
    v47 = 8;
    v48 = 0;
  }
  v164 = v46;
  v165 = v47;
  v166 = 0;
  v49 = v189;
  v50 = v189 + 56 * v48;
  *(_QWORD *)&v181 = v189;
  v214 = v188;
  *(_QWORD *)&v182 = v188;
  *((_QWORD *)&v182 + 1) = v50;
  v51 = 56 * v48 - 56;
  v52 = (_QWORD *)(v189 + 88);
  v210 = v189;
  while ( v49 != v50 )
  {
    v57 = v49 + 56;
    *((_QWORD *)&v181 + 1) = v49 + 56;
    v58 = *(_QWORD *)v49;
    v212 = *(_OWORD *)(v49 + 8);
    if ( v58 == -1 )
    {
      if ( v50 != v57 )
      {
        v66 = v51 / 0x38;
        do
        {
          v67 = *(v52 - 4);
          if ( v67 )
            sub_140001660(*(v52 - 3), v67, 1);
          v68 = *(v52 - 1);
          if ( v68 )
            sub_140001660(*v52, v68, 1);
          v52 += 7;
          --v66;
        }
        while ( v66 );
      }
      break;
    }
    v221 = *(_QWORD *)(v49 + 24);
    v59 = *(_QWORD *)(v49 + 32);
    v60 = *(_OWORD *)(v49 + 40);
    v159.m256i_i64[0] = v58;
    *(_OWORD *)&v159.m256i_u64[1] = v212;
    v222 = 1;
    v219 = v59;
    sub_140282430(&v203);
    if ( *(_QWORD *)&v204[16] == -1 )
    {
      v177 = (_QWORD *)v203;
      *(_QWORD *)&v203 = &v159;
      *((_QWORD *)&v203 + 1) = sub_1400015F0;
      *(_QWORD *)v204 = &v177;
      *(_QWORD *)&v204[8] = sub_1416BB0B0;
      sub_1416ABFD0(&v141, &unk_1419D58EB, &v203);
      v61 = v171.m128i_i64[0];
      if ( v171.m128i_i64[0] == v170.m128i_i64[0] )
        sub_14190FDC0(&v170);
      v62 = v170.m128i_i64[1];
      v63 = 3 * v61;
      *(_QWORD *)(v170.m128i_i64[1] + 8 * v63 + 16) = v142;
      *(_OWORD *)(v62 + 8 * v63) = v141;
      v14 = v61 + 1;
      v171.m128i_i64[0] = v14;
      if ( ((unsigned __int8)v177 & 3u) - 2 >= 2 && ((unsigned __int8)v177 & 3) != 0 )
      {
        *((_QWORD *)&v203 + 1) = (char *)v177 - 1;
        LOBYTE(v203) = 3;
        v222 = 1;
        sub_1416BCB00((char *)&v203 + 8);
      }
      goto LABEL_73;
    }
    if ( *(_DWORD *)&v204[16] == 2 )
    {
      ++v174.m128i_i64[1];
LABEL_73:
      if ( v221 )
        sub_140001660(v219, v221, 1);
      if ( v159.m256i_i64[0] )
        sub_140001660(v159.m256i_i64[1], v159.m256i_i64[0], 1);
      goto LABEL_62;
    }
    v64 = v221;
    if ( (_QWORD)v203 )
      sub_140001660(*((_QWORD *)&v203 + 1), v203, 1);
    *(_QWORD *)v204 = v159.m256i_i64[2];
    v203 = *(_OWORD *)v159.m256i_i8;
    *(_QWORD *)&v204[8] = v64;
    *(_QWORD *)&v204[16] = v219;
    *(_OWORD *)&v204[24] = v60;
    v65 = v166;
    if ( v166 == v164 )
      sub_141910060(&v164);
    v53 = v165;
    v54 = 56 * v65;
    *(_QWORD *)(v165 + v54 + 48) = *(_QWORD *)&v204[32];
    v55 = v203;
    v56 = *(_OWORD *)v204;
    *(_OWORD *)(v53 + v54 + 32) = *(_OWORD *)&v204[16];
    *(_OWORD *)(v53 + v54 + 16) = v56;
    *(_OWORD *)(v53 + v54) = v55;
    v14 = v65 + 1;
    v166 = v14;
LABEL_62:
    v51 -= 56LL;
    v52 += 7;
    v49 = v57;
  }
  if ( v214 )
    sub_140001660(v210, 56 * v214, 8);
  v69 = v165;
  v168 = v166;
  v159.m256i_i64[0] = v165;
  v147 = v164;
  v159.m256i_i64[2] = v164;
  *((_QWORD *)&v208 + 1) = v165 + 56 * v166;
  v159.m256i_i64[3] = *((_QWORD *)&v208 + 1);
  v70 = 56 * v166 - 56;
  v71 = (_QWORD *)(v165 + 88);
  v72 = 0x20000000;
  v73 = 0;
  v148 = v165;
  while ( v69 != *((_QWORD *)&v208 + 1) )
  {
    v74 = v69 + 56;
    v159.m256i_i64[1] = v69 + 56;
    v75 = *(_QWORD *)v69;
    if ( *(_QWORD *)v69 == -1 )
    {
      if ( *((_QWORD *)&v208 + 1) != v74 )
      {
        v116 = v70 / 0x38;
        do
        {
          v117 = *(v71 - 4);
          if ( v117 )
            sub_140001660(*(v71 - 3), v117, 1);
          v118 = *(v71 - 1);
          if ( v118 )
            sub_140001660(*v71, v118, 1);
          v71 += 7;
          --v116;
        }
        while ( v116 );
      }
      break;
    }
    v135 = *(_OWORD *)(v69 + 8);
    v76 = *(_QWORD *)(v69 + 24);
    v214 = *(_QWORD *)(v69 + 32);
    v77 = *(_QWORD *)(v69 + 40);
    v210 = v73 + 1;
    *(_QWORD *)&v160 = v73 + 1;
    v157 = v75;
    v158 = v135;
    if ( v72 )
    {
      *(_QWORD *)&v208 = v76;
      v78 = v168 - v73;
      if ( v168 == v73 )
        sub_1419393A0(&off_1419DEE80, v75, v77);
      v211 = v74;
      if ( (v78 | v72) >> 32 )
        v79 = v72 / v78;
      else
        v79 = (unsigned int)v72 / (unsigned int)v78;
      if ( v79 < 0x200001 )
        v79 = 0x200000;
      if ( v79 >= 0x4000000 )
        v79 = 0x4000000;
      v196 = -1;
      v195 = v221;
      v224 = 1;
      sub_140281F40(&v177, v214, v77);
      if ( !v177 )
      {
        v14 = v178;
        v200 = v178;
        *(_QWORD *)&v212 = 0;
        *((_QWORD *)&v212 + 1) = 1;
        *(_QWORD *)&v213 = 0;
        *(_QWORD *)&v182 = 1610612768;
        *(_QWORD *)&v181 = &v212;
        *((_QWORD *)&v181 + 1) = &off_1419E0B60;
        if ( (unsigned __int8)sub_1416BB0B0(&v200, &v181) )
          sub_141939040(
            (unsigned int)aADisplayImplem_53,
            55,
            (unsigned int)&v218,
            (unsigned int)&unk_1419D7FE8,
            (__int64)&off_1419E29A8);
        v221 = *((_QWORD *)&v212 + 1);
        v203 = v212;
        v199 = v213;
        *(_QWORD *)v204 = v213;
        memset(&v204[8], 0, 25);
        if ( (v14 & 3) - 2 >= 2 && (v14 & 3) != 0 )
        {
          *((_QWORD *)&v181 + 1) = --v14;
          LOBYTE(v181) = 3;
          v196 = v212;
          v195 = v221;
          v224 = 0;
          sub_1416BCB00((char *)&v181 + 8);
        }
        v74 = v211;
        goto LABEL_189;
      }
      v198 = (const __m128i *)v70;
      v193 = v71;
      v191 = v177;
      v192 = v178;
      v200 = 0;
      v201 = 1;
      v81 = 1;
      v209 = 0;
      v197 = 0;
      v217 = nullptr;
      v154 = 0;
      v194 = 0;
      v82 = 0;
      while ( 1 )
      {
LABEL_110:
        v202 = 0;
        v83 = 0;
        v219 = -1;
        if ( v82 >= v79 || !v72 )
          goto LABEL_183;
        v177 = &v191;
        v178 = 25165825;
        v179 = 25165825;
        v216 = -1;
        v215 = v221;
        LOBYTE(v80) = 10;
        v84 = sub_140BAF540(&v177, v80, &v200);
        v86 = v85;
        if ( v84 == 1 )
          break;
        if ( !v85 )
        {
          v83 = v81;
          goto LABEL_183;
        }
        v83 = 0;
        v87 = v72 < v85;
        v88 = v72 - v85;
        v72 = 0;
        if ( !v87 )
          v72 = v88;
        if ( !v202 )
          goto LABEL_183;
        v80 = v201;
        if ( *(_BYTE *)(v201 + v202 - 1) != 10 )
        {
          if ( v202 > 0x1800000 )
          {
            ++v209;
            v90 = v191;
            v167 = *(void (__fastcall **)(_QWORD, _QWORD))(v192 + 88);
            v169 = *(void (__fastcall **)(_QWORD *, unsigned __int64))(v192 + 96);
            v91 = 0;
            while ( 1 )
            {
              v83 = 0;
              if ( v91 > 0x3FFFFFF || !v72 )
                break;
              v216 = -1;
              v215 = v221;
              v167(&v212, v90);
              if ( !(_QWORD)v212 )
              {
                if ( (BYTE8(v212) & 3u) - 2 >= 2 && (BYTE8(v212) & 3) != 0 )
                {
                  *((_QWORD *)&v181 + 1) = *((_QWORD *)&v212 + 1) - 1LL;
                  LOBYTE(v181) = 3;
                  v216 = -1;
                  v215 = v221;
                  sub_1416BCB00((char *)&v181 + 8);
                }
                goto LABEL_182;
              }
              v14 = *((_QWORD *)&v212 + 1);
              if ( !*((_QWORD *)&v212 + 1) )
              {
                v81 = 0;
                goto LABEL_110;
              }
              v92 = 0;
              while ( 1 )
              {
                v93 = *(_BYTE *)(v212 + v92++);
                if ( v93 == 10 )
                  break;
                if ( *((_QWORD *)&v212 + 1) == v92 )
                  goto LABEL_135;
              }
              v14 = v92;
LABEL_135:
              v216 = -1;
              v215 = v221;
              v169(v90, v14);
              v91 += v14;
              v87 = v72 < v14;
              v94 = v72 - v14;
              v72 = 0;
              if ( !v87 )
                v72 = v94;
              if ( v93 == 10 )
              {
                v81 = 0;
                goto LABEL_110;
              }
            }
LABEL_183:
            *(_QWORD *)&v203 = v219;
            *((_QWORD *)&v203 + 1) = v221;
            *(_QWORD *)v204 = v199;
            *(_QWORD *)&v204[8] = v217;
            *(_QWORD *)&v204[16] = v197;
            *(_QWORD *)&v204[24] = v209;
            v204[32] = v83;
            v71 = v193;
            v70 = (unsigned __int64)v198;
            v74 = v211;
            if ( v200 )
              sub_140001660(v201, v200, 1);
            v217 = v191;
            v209 = v192;
            if ( *(_QWORD *)v192 )
              (*(void (__fastcall **)(_QWORD *))v192)(v217);
            v107 = *(_QWORD *)(v209 + 8);
            if ( v107 )
              sub_140001660(v217, v107, *(_QWORD *)(v209 + 16));
LABEL_189:
            ++v173.m128i_i64[0];
            if ( v204[32] )
            {
              ++v173.m128i_i64[1];
              v108 = *(_QWORD *)&v204[24];
              if ( !*(_QWORD *)&v204[24] )
              {
LABEL_194:
                if ( *(_QWORD *)&v204[8] )
                {
                  v175.m128i_i64[0] += *(_QWORD *)&v204[8];
                  *(_QWORD *)&v181 = &v157;
                  *((_QWORD *)&v181 + 1) = sub_1400015F0;
                  *(_QWORD *)&v182 = &v204[8];
                  *((_QWORD *)&v182 + 1) = sub_1416BCB10;
                  v223 = 1;
                  sub_1416ABFD0(&v151, &unk_1419DEE98, &v181);
                  v14 = v172.m128i_u64[1];
                  if ( v172.m128i_i64[1] >= 3uLL )
                  {
                    if ( (_QWORD)v151 )
                      sub_140001660(*((_QWORD *)&v151 + 1), v151, 1);
                  }
                  else
                  {
                    if ( v172.m128i_i64[1] == v171.m128i_i64[1] )
                    {
                      v211 = *((_QWORD *)&v151 + 1);
                      v219 = v151;
                      sub_14190FDC0(&v171.m128i_u64[1]);
                    }
                    v109 = v172.m128i_i64[0];
                    v110 = 3 * v14;
                    *(_QWORD *)(v172.m128i_i64[0] + 8 * v110 + 16) = v152;
                    *(_OWORD *)(v109 + 8 * v110) = v151;
                    v172.m128i_i64[1] = ++v14;
                  }
                }
                if ( *(_QWORD *)&v204[16] )
                {
                  v175.m128i_i64[1] += *(_QWORD *)&v204[16];
                  *(_QWORD *)&v181 = &v157;
                  *((_QWORD *)&v181 + 1) = sub_1400015F0;
                  v223 = 1;
                  sub_1416ABFD0(&v149, &unk_1419DEEB5, &v181);
                  v14 = v172.m128i_u64[1];
                  if ( v172.m128i_i64[1] >= 3uLL )
                  {
                    if ( (_QWORD)v149 )
                      sub_140001660(*((_QWORD *)&v149 + 1), v149, 1);
                  }
                  else
                  {
                    if ( v172.m128i_i64[1] == v171.m128i_i64[1] )
                    {
                      v211 = *((_QWORD *)&v149 + 1);
                      v219 = v149;
                      sub_14190FDC0(&v171.m128i_u64[1]);
                    }
                    v111 = v172.m128i_i64[0];
                    v112 = 3 * v14;
                    *(_QWORD *)(v172.m128i_i64[0] + 8 * v112 + 16) = v150;
                    *(_OWORD *)(v111 + 8 * v112) = v149;
                    v172.m128i_i64[1] = ++v14;
                  }
                }
                if ( (_QWORD)v203 != -1 )
                {
                  *(_QWORD *)&v213 = *(_QWORD *)v204;
                  v212 = v203;
                  *(_QWORD *)&v181 = &v157;
                  *((_QWORD *)&v181 + 1) = sub_1400015F0;
                  *(_QWORD *)&v182 = &v212;
                  *((_QWORD *)&v182 + 1) = sub_1400015F0;
                  sub_1416ABFD0(&v139, &unk_1419D58EB, &v181);
                  v113 = v171.m128i_i64[0];
                  if ( v171.m128i_i64[0] == v170.m128i_i64[0] )
                    sub_14190FDC0(&v170);
                  v114 = v170.m128i_i64[1];
                  v115 = 3 * v113;
                  *(_QWORD *)(v170.m128i_i64[1] + 8 * v115 + 16) = v140;
                  *(_OWORD *)(v114 + 8 * v115) = v139;
                  v14 = v113 + 1;
                  v171.m128i_i64[0] = v14;
                  if ( (_QWORD)v212 )
                    sub_140001660(*((_QWORD *)&v212 + 1), v212, 1);
                }
                if ( (_QWORD)v208 )
                  sub_140001660(v214, v208, 1);
                v75 = v157;
                if ( !v157 )
                  goto LABEL_92;
LABEL_91:
                sub_140001660(v158, v75, 1);
                goto LABEL_92;
              }
            }
            else
            {
              ++v174.m128i_i64[0];
              v108 = *(_QWORD *)&v204[24];
              if ( !*(_QWORD *)&v204[24] )
                goto LABEL_194;
            }
            v176 += v108;
            goto LABEL_194;
          }
LABEL_182:
          v83 = 0;
          goto LABEL_183;
        }
        v82 += v86;
        v89 = v202 - 1;
        if ( v202 != 1 )
        {
          if ( *(_BYTE *)(v201 + v202 - 2) != 13 || (v89 = v202 - 2, v202 != 2) )
          {
            if ( v89 > v202 )
            {
              v216 = -1;
              v215 = v221;
              sub_1419392D0(0, v89, v202, &off_1419DECD0);
            }
            v216 = -1;
            v215 = v221;
            sub_1416B3AE0(&v181, v201, v89);
            if ( (_DWORD)v181 == 1 )
            {
              v217 = (_QWORD *)((char *)v217 + 1);
            }
            else
            {
              v95 = v182;
              v181 = __PAIR128__(v182, *((unsigned __int64 *)&v181 + 1));
              v182 = 0;
              *(_QWORD *)&v183 = v181;
              *((_QWORD *)&v183 + 1) = v95;
              v216 = -1;
              v215 = v221;
              sub_14062D280(&v212, &v181);
              if ( (_BYTE)v212 == 0xFF )
              {
                v216 = -1;
                v215 = v221;
                sub_14002F910((char *)&v212 + 8);
                v217 = (_QWORD *)((char *)v217 + 1);
              }
              else
              {
                v182 = v213;
                v181 = v212;
                v96 = sub_1416419F0(aOrdinal, 7, &v181);
                if ( v96 )
                {
                  v97 = v156;
                  if ( *(_BYTE *)v96 == 2 && !*(_QWORD *)(v96 + 8) )
                  {
                    v98 = *(_QWORD *)(v96 + 16);
                    v99 = (v98 <= v156) & (unsigned __int8)v154;
                    v217 = (_QWORD *)((char *)v217 + v99);
                    LOBYTE(v99) = 1;
                    v154 = v99;
                    v97 = v98;
                  }
                }
                else
                {
                  v97 = v156;
                }
                v156 = v97;
                LOBYTE(v14) = 1;
                if ( (v194 & 1) == 0 )
                {
                  v100 = sub_1416419F0(aType_3, 4, &v181);
                  if ( v100
                    && *(_BYTE *)v100 == 3
                    && *(_QWORD *)(v100 + 24) == 12
                    && !(**(_QWORD **)(v100 + 16) ^ 0x5F6E6F6973736573LL
                       | *(unsigned int *)(*(_QWORD *)(v100 + 16) + 8LL) ^ 0x6174656DLL) )
                  {
                    v101 = (_BYTE *)sub_141642800(&v181, aPayloadHistory, 21);
                    v102 = v101;
                    if ( v101 && *v101 )
                    {
                      v103 = sub_1416419F0(aEndOrdinalExcl, 21, v101);
                      if ( !v103
                        || *(_BYTE *)v103 != 2
                        || *(_QWORD *)(v103 + 8)
                        || (v219 = *(_QWORD *)(v103 + 16), (v106 = sub_1416419F0(aOrdinal, 7, &v181)) == 0)
                        || *(_BYTE *)v106 != 2
                        || *(_QWORD *)(v106 + 8)
                        || *(_QWORD *)(v106 + 16) != v219 )
                      {
                        v217 = (_QWORD *)((char *)v217 + 1);
                      }
                      v104 = sub_1416419F0("thread_idoriginal_modelborrowed_modelversionentries", 9, v102);
                      if ( v104 && *(_BYTE *)v104 == 3 && *(_QWORD *)(v104 + 24) )
                      {
                        v105 = sub_140373F00(&v136, *(_QWORD *)(v104 + 16));
                        v197 += v105 ^ 1u;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v14) = 0;
                  }
                }
                v216 = -1;
                v215 = v221;
                sub_14002F9D0(&v181);
                v194 = (unsigned int)v14;
              }
            }
          }
        }
      }
      v14 = v85;
      v153 = v85;
      *(_QWORD *)&v212 = 0;
      *((_QWORD *)&v212 + 1) = 1;
      *(_QWORD *)&v213 = 0;
      *(_QWORD *)&v182 = 1610612768;
      *(_QWORD *)&v181 = &v212;
      *((_QWORD *)&v181 + 1) = &off_1419E0B60;
      if ( (unsigned __int8)sub_1416BB0B0(&v153, &v181) )
        sub_141939040(
          (unsigned int)aADisplayImplem_53,
          55,
          (unsigned int)&v218,
          (unsigned int)&unk_1419D7FE8,
          (__int64)&off_1419E29A8);
      v221 = *((_QWORD *)&v212 + 1);
      v219 = v212;
      v199 = v213;
      if ( (v14 & 3) - 2 >= 2 && (v14 & 3) != 0 )
      {
        *((_QWORD *)&v181 + 1) = v14 - 1;
        LOBYTE(v181) = 3;
        v216 = v219;
        v215 = v221;
        sub_1416BCB00((char *)&v181 + 8);
      }
      goto LABEL_182;
    }
    ++v174.m128i_i64[0];
    if ( v76 )
    {
      sub_140001660(v214, v76, 1);
      v75 = v157;
    }
    v72 = 0;
    if ( v75 )
      goto LABEL_91;
LABEL_92:
    v70 -= 56LL;
    v71 += 7;
    v73 = v210;
    v69 = v74;
  }
  if ( v147 )
    sub_140001660(v148, 56 * v147, 8);
  HIDWORD(_RAX) = HIDWORD(v176);
  v120 = v155;
  v155[6].m128i_i64[0] = v176;
  v120[5] = v175;
  v120[4] = v174;
  v121 = _mm_loadu_si128(&v170);
  v122 = v171;
  v123 = v172;
  v120[3] = v173;
  v120[2] = v123;
  v120[1] = v122;
  *v120 = v121;
  v124 = *((_QWORD *)&v136 + 1);
  if ( *((_QWORD *)&v136 + 1) )
  {
    v125 = *((_QWORD *)&v137 + 1);
    if ( *((_QWORD *)&v137 + 1) )
    {
      v126 = v136;
      v127 = (const __m128i *)(v136 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v136));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v127);
            v126 -= 384;
            ++v127;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v130 = -3 * _RAX;
        v131 = *(_QWORD *)(v126 + 8 * v130 - 24);
        if ( v131 )
          sub_140001660(*(_QWORD *)(v126 + 8 * v130 - 16), v131, 1);
        --v125;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v125 );
    }
    v132 = (24 * v124 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v133 = v132 + v124 + 17;
    if ( v133 )
      sub_140001660(v136 - v132, v133, 16);
  }
  return v155;
}
