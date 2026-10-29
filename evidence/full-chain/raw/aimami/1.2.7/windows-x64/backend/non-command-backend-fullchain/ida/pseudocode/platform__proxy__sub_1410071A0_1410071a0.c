// win 1.2.7 | module src/platform/proxy.rs | ea 0x1410071a0 | name sub_1410071A0
// win 1.2.7 | module src/platform/proxy.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1410071A0(__int64 a1)
{
  const __m128i *v1; // rsi
  __m128i *v3; // rdi
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i *v6; // rbx
  __m128i *v7; // r14
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned __int64 v10; // rdx
  __m128i *v11; // rcx
  __m128i *v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // r14
  __m128i *v18; // r12
  __m128i *v19; // rax
  const char *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __m128i *v24; // rax
  const char *v25; // rbx
  __int8 *v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  _DWORD *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  __m128i *v34; // r15
  __int64 v35; // r14
  __m128i *v36; // rdi
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // r9d
  __m128i *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __m128i *v50; // rdx
  unsigned __int32 v51; // ecx
  unsigned int v52; // r8d
  __int64 v53; // r14
  __m128i *v54; // r15
  __m128i v55; // kr00_16
  unsigned __int64 v56; // rbx
  __int64 v57; // r14
  _DWORD *v59; // r14
  const __m128i *v60; // rbx
  int v61; // eax
  bool v62; // zf
  __int64 v63; // rcx
  unsigned __int64 v64; // rbx
  __int64 v65; // rsi
  __int64 v66; // rax
  __m128i *v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rdi
  const char *v70; // rdx
  __m128i *v71; // r14
  __int64 v72; // rdi
  unsigned __int64 v73; // rbx
  const __m128i *v74; // rbx
  char *v75; // r14
  __int64 v76; // r15
  __int64 v77; // rsi
  char v78; // di
  unsigned __int64 v79; // r13
  char v80; // al
  __int64 v81; // rcx
  unsigned int v82; // r8d
  unsigned int v83; // r12d
  unsigned int v84; // ecx
  unsigned int v85; // eax
  __int64 v86; // rbx
  __m128i v87; // rdi
  __m128i *v88; // r14
  __int64 v89; // rax
  const __m128i *v90; // rdx
  const __m128i *v91; // rdi
  unsigned __int64 v92; // r14
  __int64 v93; // rsi
  __m128i *v94; // rax
  __m128i *v95; // r15
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  __m128i si128; // xmm0
  __m128i v100; // xmm1
  __m128i v101; // xmm2
  __m128i v102; // xmm3
  __m128i v103; // xmm4
  __m128i v104; // xmm5
  __m128i v105; // xmm6
  __int64 v106; // rcx
  __m128i v107; // xmm0
  __m128i v108; // xmm1
  __m128i v109; // xmm2
  __m128i v110; // xmm3
  __m128i v111; // xmm4
  __int64 v112; // rsi
  const char *v113; // rdx
  __int64 v114; // rax
  __int64 *v115; // rdx
  const __m128i *v116; // rsi
  __int64 v117; // r15
  unsigned __int8 *v118; // r12
  __int64 v119; // rdi
  __m128i *v120; // rax
  __m128i *v121; // rcx
  __int64 v122; // rax
  __m128i *v123; // r15
  __int64 v124; // r14
  unsigned __int64 v125; // r13
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned __int64 v129; // r13
  __int8 *v130; // rcx
  unsigned __int64 v131; // r9
  char *v132; // rax
  unsigned int v133; // r8d
  int v134; // r10d
  int v135; // esi
  int v136; // r8d
  unsigned __int8 v137; // r11
  bool v138; // cf
  __int64 v139; // r10
  unsigned int v140; // r10d
  char v141; // r10
  __int64 v142; // r10
  __int128 v143; // rax
  signed __int64 v144; // rsi
  __int64 v145; // rcx
  __m128i *v146; // rax
  __int64 v147; // rsi
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rcx
  __m128i *v151; // [rsp+30h] [rbp-50h] BYREF
  __m128i v152; // [rsp+38h] [rbp-48h] BYREF
  __m128i v153; // [rsp+48h] [rbp-38h] BYREF
  __m128i v154; // [rsp+58h] [rbp-28h] BYREF
  char v155; // [rsp+68h] [rbp-18h]
  __int16 v156; // [rsp+70h] [rbp-10h]
  __m128i v157; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i *v158; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v159; // [rsp+3E8h] [rbp+368h]
  const char *v160; // [rsp+3F0h] [rbp+370h]
  __int64 v161; // [rsp+3F8h] [rbp+378h]
  __int64 v162; // [rsp+400h] [rbp+380h]
  __int64 v163; // [rsp+408h] [rbp+388h]
  const char *v164; // [rsp+410h] [rbp+390h]
  __int64 v165; // [rsp+418h] [rbp+398h]
  const char *v166; // [rsp+420h] [rbp+3A0h]
  __int64 v167; // [rsp+428h] [rbp+3A8h]
  const char *v168; // [rsp+430h] [rbp+3B0h]
  __int64 v169; // [rsp+438h] [rbp+3B8h]
  const char *v170; // [rsp+440h] [rbp+3C0h]
  __int64 v171; // [rsp+448h] [rbp+3C8h]
  const char *v172; // [rsp+450h] [rbp+3D0h]
  __int64 v173; // [rsp+458h] [rbp+3D8h]
  int v174; // [rsp+47Ch] [rbp+3FCh]
  __int64 v175; // [rsp+760h] [rbp+6E0h]
  int v176; // [rsp+768h] [rbp+6E8h]
  __int64 v177; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v178; // [rsp+778h] [rbp+6F8h]
  const __m128i *v179; // [rsp+780h] [rbp+700h]
  const char *v180; // [rsp+788h] [rbp+708h]
  __int64 v181; // [rsp+790h] [rbp+710h]
  const __m128i *v182; // [rsp+798h] [rbp+718h]
  signed __int64 v183; // [rsp+7A0h] [rbp+720h] BYREF
  __m128i v184; // [rsp+7A8h] [rbp+728h] BYREF
  __m128i v185; // [rsp+7B8h] [rbp+738h]
  __m128i v186; // [rsp+7C8h] [rbp+748h]
  const char *v187; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v188; // [rsp+858h] [rbp+7D8h]
  __int64 v189; // [rsp+860h] [rbp+7E0h]
  __int64 v190; // [rsp+868h] [rbp+7E8h]
  __int64 v191; // [rsp+870h] [rbp+7F0h]
  __m128i *v192; // [rsp+878h] [rbp+7F8h]
  __m128i *v193; // [rsp+880h] [rbp+800h]
  __int64 v194; // [rsp+888h] [rbp+808h] BYREF
  __int64 v195; // [rsp+890h] [rbp+810h]
  __int64 v196; // [rsp+898h] [rbp+818h]
  _BYTE v197[24]; // [rsp+8A0h] [rbp+820h] BYREF
  __m128i v198; // [rsp+8B8h] [rbp+838h]
  __m128i v199; // [rsp+8C8h] [rbp+848h]
  __int128 v200; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v201; // [rsp+8F0h] [rbp+870h]
  __m128i *v202; // [rsp+8F8h] [rbp+878h]
  __int64 v203; // [rsp+900h] [rbp+880h]
  __m128i *v204; // [rsp+908h] [rbp+888h]
  __int64 v205; // [rsp+910h] [rbp+890h]
  unsigned __int64 v206; // [rsp+918h] [rbp+898h]
  char v207; // [rsp+926h] [rbp+8A6h]
  char v208; // [rsp+927h] [rbp+8A7h]
  __int64 v209; // [rsp+928h] [rbp+8A8h]

  v209 = -2;
  v194 = 0;
  v195 = 8;
  v196 = 0;
  v208 = 1;
  sub_14168A510(&v157, aReg_1, 3);
  v174 = 0x8000000;
  sub_14168A3F0(&v157, aQuery_5, 5);
  sub_14168A3F0(&v157, aHkcuSoftwareMi_1, 64);
  sub_14168A3F0(&v157, aV_2, 2);
  sub_14168A3F0(&v157, aProxyenable, 11);
  sub_14168DB90(&v151, &v157);
  v3 = v151;
  if ( v151 == (__m128i *)-1LL )
  {
    if ( (v152.m128i_i8[0] & 3u) - 2 >= 2 && (v152.m128i_i8[0] & 3) != 0 )
    {
      v184.m128i_i64[0] = v152.m128i_i64[0] - 1;
      LOBYTE(v183) = 3;
      sub_1416BCB00(&v184);
    }
    v208 = 1;
    sub_14029BE30(&v157);
    goto LABEL_26;
  }
  v4 = _mm_loadu_si128(&v152);
  v5 = _mm_loadu_si128(&v153);
  v199 = _mm_loadu_si128(&v154);
  v198 = v5;
  *(__m128i *)&v197[8] = v4;
  *(_QWORD *)v197 = v151;
  sub_14029BE30(&v157);
  if ( v199.m128i_i32[2] )
    goto LABEL_21;
  v6 = *(__m128i **)&v197[8];
  sub_1416A9D40(&v177, *(_QWORD *)&v197[8], *(_QWORD *)&v197[16]);
  v1 = v179;
  v203 = v178;
  if ( !(unsigned __int8)sub_141059410(a0x1, 3, v178, v179)
    && !(unsigned __int8)sub_141059410(a0x00000001, 10, v203, v1) )
  {
LABEL_19:
    if ( v177 > 0 )
      sub_140001660(v203, v177, 1);
LABEL_21:
    if ( v3 )
      sub_140001660(*(_QWORD *)&v197[8], v3, 1);
    v10 = v198.m128i_i64[0];
    if ( v198.m128i_i64[0] )
    {
      v11 = (__m128i *)v198.m128i_i64[1];
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  sub_14168A510(&v157, aReg_1, 3);
  v174 = 0x8000000;
  sub_14168A3F0(&v157, aQuery_5, 5);
  sub_14168A3F0(&v157, aHkcuSoftwareMi_1, 64);
  sub_14168A3F0(&v157, aV_2, 2);
  sub_14168A3F0(&v157, aProxyserver, 11);
  sub_14168DB90(&v151, &v157);
  v7 = v151;
  if ( v151 == (__m128i *)-1LL )
  {
    if ( (v152.m128i_i8[0] & 3u) - 2 >= 2 && (v152.m128i_i8[0] & 3) != 0 )
    {
      *((_QWORD *)&v200 + 1) = v152.m128i_i64[0] - 1;
      LOBYTE(v200) = 3;
      sub_1416BCB00((char *)&v200 + 8);
    }
    sub_14029BE30(&v157);
    goto LABEL_19;
  }
  v8 = _mm_loadu_si128(&v152);
  v9 = _mm_loadu_si128(&v153);
  v186 = _mm_loadu_si128(&v154);
  v185 = v9;
  v184 = v8;
  v183 = (signed __int64)v151;
  sub_14029BE30(&v157);
  if ( v186.m128i_i32[2] )
  {
    if ( v7 )
      sub_140001660(v184.m128i_i64[0], v7, 1);
    if ( v185.m128i_i64[0] )
      sub_140001660(v185.m128i_i64[1], v185.m128i_i64[0], 1);
    goto LABEL_19;
  }
  v204 = (__m128i *)v184.m128i_i64[0];
  sub_1416A9D40(&v187, v184.m128i_i64[0], v184.m128i_i64[1]);
  v192 = v6;
  v205 = a1;
  v151 = nullptr;
  v152.m128i_i64[0] = v189;
  v22 = &v152.m128i_i64[1];
  v202 = (__m128i *)v188;
  v152.m128i_i64[1] = v188;
  v153 = (__m128i)(unsigned __int64)v189;
  v154.m128i_i64[0] = v189;
  v154.m128i_i64[1] = 0xA0000000ALL;
  v155 = 1;
  v156 = 0;
  do
  {
    v206 = -1;
    if ( HIBYTE(v156) )
    {
LABEL_154:
      a1 = v205;
      goto LABEL_168;
    }
    v23 = v152.m128i_i64[1];
    sub_141056FA0(&v157, &v152.m128i_u64[1]);
    if ( v157.m128i_i32[0] == 1 )
    {
      v24 = v151;
      v151 = v158;
      v25 = (const char *)((char *)v158 - (char *)v24);
      v26 = &v24->m128i_i8[v23];
      if ( v158 == v24 )
        continue;
LABEL_64:
      if ( v25[(_QWORD)v26 - 1] == 10 )
      {
        if ( v25 == (const char *)1 )
        {
          v25 = nullptr;
        }
        else if ( v25[(_QWORD)v26 - 2] == 13 )
        {
          v25 -= 2;
        }
        else
        {
          --v25;
        }
      }
      continue;
    }
    if ( HIBYTE(v156) )
      goto LABEL_154;
    HIBYTE(v156) = 1;
    v25 = (const char *)(v152.m128i_i64[0] - (_QWORD)v151);
    if ( ((unsigned __int8)v156 | (v152.m128i_i64[0] != (_QWORD)v151)) != 1 )
      goto LABEL_154;
    v26 = &v151->m128i_i8[v152.m128i_i64[1]];
    if ( v25 )
      goto LABEL_64;
  }
  while ( !(unsigned __int8)sub_141059410(aProxyserver, 11, v26, v25) );
  sub_1416B2790((unsigned int)&v157, (_DWORD)v26, (_DWORD)v25, (unsigned int)&unk_141A6CD2E, 6);
  v169 = 0;
  v170 = v25;
  LOWORD(v171) = 1;
  sub_141059840(&v200, &v157);
  if ( (_BYTE)v200 )
  {
    v169 = v201;
    a1 = v205;
    if ( BYTE1(v171) )
      goto LABEL_168;
    v27 = v165;
    sub_141059840(&v200, &v157);
    if ( (_DWORD)v200 == 1 )
    {
      v28 = *((_QWORD *)&v200 + 1) - v169;
      v29 = v169 + v27;
      a1 = v205;
      goto LABEL_259;
    }
    a1 = v205;
    if ( !BYTE1(v171) )
    {
      if ( (_BYTE)v171 == 1 )
      {
        v112 = v169;
        v113 = v170;
LABEL_258:
        v28 = (__int64)&v113[-v112];
        v29 = v165 + v112;
LABEL_259:
        v114 = sub_140E91160(v29, v28);
        if ( v114 )
        {
          v116 = (const __m128i *)v114;
          v22 = v115;
          if ( v115 )
          {
            sub_14072C410((unsigned int)&v157, (_DWORD)v115, 0, 1, 1);
            v206 = v157.m128i_u64[1];
            if ( v157.m128i_i32[0] == 1 )
              sub_141938D2B(v206, v158);
            v193 = v158;
            sub_1418F44E0(v158, v116, (unsigned __int64)v22);
          }
        }
      }
      else
      {
        v112 = v169;
        v113 = v170;
        if ( v170 != (const char *)v169 )
          goto LABEL_258;
      }
    }
  }
  else
  {
    a1 = v205;
  }
LABEL_168:
  if ( (unsigned __int64)(v187 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v202, v187, 1);
  if ( v7 )
    sub_140001660(v204, v7, 1);
  if ( v185.m128i_i64[0] )
    sub_140001660(v185.m128i_i64[1], v185.m128i_i64[0], 1);
  v1 = (const __m128i *)v206;
  if ( (unsigned __int64)(v177 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v203, v177, 1);
  if ( v3 )
    sub_140001660(v192, v3, 1);
  if ( v198.m128i_i64[0] )
    sub_140001660(v198.m128i_i64[1], v198.m128i_i64[0], 1);
  if ( v1 != (const __m128i *)-1LL )
  {
    sub_141006B30((__int64)&v151, (__int64)v193, (__int64)v22);
    v71 = v151;
    v72 = v152.m128i_i64[1];
    v1 = (const __m128i *)v152.m128i_i64[0];
    v73 = 24 * v152.m128i_i64[1];
    v157.m128i_i64[0] = v152.m128i_i64[0];
    v158 = v151;
    v157.m128i_i64[1] = v152.m128i_i64[0];
    v159 = v152.m128i_i64[0] + 24 * v152.m128i_i64[1];
    if ( v152.m128i_i64[1] )
    {
      sub_14190D590((unsigned int)&v194, 0, v152.m128i_i32[2], 8, 24);
      v117 = v196;
      sub_1418F44E0((__m128i *)(v195 + 24 * v196), v1, v73);
      a1 = v205;
      v196 = v72 + v117;
      if ( v71 )
LABEL_183:
        sub_140001660(v1, 24LL * (_QWORD)v71, 8);
    }
    else
    {
      v196 = 0;
      if ( v151 )
        goto LABEL_183;
    }
    v10 = v206;
    if ( v206 )
    {
      v11 = v193;
LABEL_25:
      sub_140001660(v11, v10, 1);
    }
  }
LABEL_26:
  v208 = 1;
  sub_14168A510(&v157, aReg_1, 3);
  v174 = 0x8000000;
  sub_14168A3F0(&v157, aQuery_5, 5);
  sub_14168A3F0(&v157, aHkcuSoftwareMi_1, 64);
  sub_14168A3F0(&v157, aV_2, 2);
  sub_14168A3F0(&v157, aAutoconfigurl, 13);
  sub_14168DB90(&v151, &v157);
  v12 = v151;
  if ( v151 == (__m128i *)-1LL )
  {
    if ( (v152.m128i_i8[0] & 3u) - 2 >= 2 && (v152.m128i_i8[0] & 3) != 0 )
    {
      *(_QWORD *)&v197[8] = v152.m128i_i64[0] - 1;
      v197[0] = 3;
      sub_1416BCB00(&v197[8]);
    }
    v208 = 1;
    sub_14029BE30(&v157);
    goto LABEL_93;
  }
  v13 = _mm_loadu_si128(&v152);
  v14 = _mm_loadu_si128(&v153);
  v186 = _mm_loadu_si128(&v154);
  v185 = v14;
  v184 = v13;
  v183 = (signed __int64)v151;
  sub_14029BE30(&v157);
  if ( v186.m128i_i32[2] )
  {
    if ( v12 )
      sub_140001660(v184.m128i_i64[0], v12, 1);
    v15 = v185.m128i_i64[0];
    if ( v185.m128i_i64[0] )
    {
      v16 = (__m128i *)v185.m128i_i64[1];
      goto LABEL_92;
    }
    goto LABEL_93;
  }
  v17 = v184.m128i_i64[0];
  sub_1416A9D40(&v200, v184.m128i_i64[0], v184.m128i_i64[1]);
  v205 = a1;
  v151 = nullptr;
  v152.m128i_i64[0] = v201;
  v206 = *((_QWORD *)&v200 + 1);
  v152.m128i_i64[1] = *((_QWORD *)&v200 + 1);
  v153 = (__m128i)(unsigned __int64)v201;
  v154.m128i_i64[0] = v201;
  v154.m128i_i64[1] = 0xA0000000ALL;
  v155 = 1;
  v156 = 0;
  v18 = &v157;
  while ( 2 )
  {
    v203 = -1;
    if ( HIBYTE(v156) )
    {
LABEL_55:
      a1 = v205;
      goto LABEL_76;
    }
    v1 = (const __m128i *)v152.m128i_i64[1];
    sub_141056FA0(&v157, &v152.m128i_u64[1]);
    if ( v157.m128i_i32[0] == 1 )
    {
      v19 = v151;
      v151 = v158;
      v20 = (const char *)((char *)v158 - (char *)v19);
      v1 = (const __m128i *)((char *)v1 + (_QWORD)v19);
      if ( v158 == v19 )
        goto LABEL_50;
LABEL_44:
      if ( v20[(_QWORD)v1 - 1] == 10 )
      {
        if ( v20 == (const char *)1 )
        {
          v20 = nullptr;
        }
        else if ( v20[(_QWORD)v1 - 2] == 13 )
        {
          v20 -= 2;
        }
        else
        {
          --v20;
        }
      }
    }
    else
    {
      if ( HIBYTE(v156) )
        goto LABEL_55;
      HIBYTE(v156) = 1;
      v1 = v151;
      v20 = (const char *)(v152.m128i_i64[0] - (_QWORD)v151);
      if ( ((unsigned __int8)v156 | (v152.m128i_i64[0] != (_QWORD)v151)) != 1 )
        goto LABEL_55;
      v1 = (__m128i *)((char *)v151 + v152.m128i_i64[1]);
      if ( v20 )
        goto LABEL_44;
    }
LABEL_50:
    if ( !(unsigned __int8)sub_141059410(aAutoconfigurl, 13, v1, v20) )
      continue;
    break;
  }
  sub_1416B2790((unsigned int)&v157, (_DWORD)v1, (_DWORD)v20, (unsigned int)&unk_141A6CD2E, 6);
  v169 = 0;
  v170 = v20;
  LOWORD(v171) = 1;
  sub_141059840(v197, &v157);
  if ( v197[0] )
  {
    v169 = *(_QWORD *)&v197[16];
    a1 = v205;
    if ( BYTE1(v171) )
      goto LABEL_76;
    v1 = (const __m128i *)v165;
    sub_141059840(v197, &v157);
    if ( *(_DWORD *)v197 == 1 )
    {
      v21 = *(_QWORD *)&v197[8] - v169;
      v1 = (const __m128i *)((char *)v1 + v169);
      a1 = v205;
      goto LABEL_223;
    }
    a1 = v205;
    if ( !BYTE1(v171) )
    {
      if ( (_BYTE)v171 == 1 )
      {
        v1 = (const __m128i *)v169;
        v70 = v170;
LABEL_222:
        v21 = v70 - (const char *)v1;
        v1 = (const __m128i *)((char *)v1 + v165);
LABEL_223:
        v89 = sub_140E91160(v1, v21);
        if ( v89 )
        {
          v1 = v90;
          if ( v90 )
          {
            v91 = (const __m128i *)v89;
            sub_14072C410((unsigned int)&v157, (_DWORD)v90, 0, 1, 1);
            v203 = v157.m128i_i64[1];
            if ( v157.m128i_i32[0] == 1 )
              sub_141938D2B(v203, v158);
            v18 = v158;
            sub_1418F44E0(v158, v91, (unsigned __int64)v1);
          }
        }
      }
      else
      {
        v1 = (const __m128i *)v169;
        v70 = v170;
        if ( v170 != (const char *)v169 )
          goto LABEL_222;
      }
    }
  }
  else
  {
    a1 = v205;
  }
LABEL_76:
  if ( (unsigned __int64)(v200 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v206, v200, 1);
  if ( v12 )
    sub_140001660(v17, v12, 1);
  if ( v185.m128i_i64[0] )
    sub_140001660(v185.m128i_i64[1], v185.m128i_i64[0], 1);
  if ( v203 == -1 )
    goto LABEL_93;
  v30 = (_DWORD *)sub_140E91160(v18, v1);
  if ( v31 < 7 )
    goto LABEL_84;
  v59 = v30;
  v60 = (const __m128i *)v31;
  v61 = *v30 ^ 0x656C6966;
  v62 = (v61 | *(_DWORD *)((char *)v59 + 3) ^ 0x2F2F3A65) == 0;
  v63 = v61 | *(_DWORD *)((char *)v59 + 3) ^ 0x2F2F3A65u;
  v202 = v18;
  if ( v62 )
  {
    v64 = v31 - 7;
    if ( (__int64)(v31 - 7) < 0 )
    {
      v65 = 0;
      goto LABEL_157;
    }
    if ( v31 == 7 )
    {
      v66 = 1;
    }
    else
    {
      nullsub_1(v63);
      v65 = 1;
      v66 = sub_140001650(v64, 1);
      if ( !v66 )
LABEL_157:
        sub_141938D2B(v65, v64);
    }
    v75 = (char *)v59 + 7;
    *(_QWORD *)v197 = v64;
    *(_QWORD *)&v197[8] = v66;
    *(_QWORD *)&v197[16] = 0;
    v76 = 0;
    v77 = 0;
    if ( !v64 )
    {
LABEL_209:
      sub_1416A9D40(&v151, *(_QWORD *)&v197[8], v76);
      v86 = (__int64)v151;
      v87 = v152;
      if ( v151 == (__m128i *)-1LL )
      {
        sub_14072C410((unsigned int)&v157, v152.m128i_i32[2], 0, 1, 1);
        v86 = v157.m128i_i64[1];
        a1 = v205;
        if ( v157.m128i_i32[0] == 1 )
          sub_141938D2B(v157.m128i_i64[1], v158);
        v88 = v158;
        if ( v87.m128i_i64[1] )
          sub_1418F44E0(v158, (const __m128i *)v87.m128i_i64[0], v87.m128i_u64[1]);
        else
          v87.m128i_i64[1] = 0;
      }
      else
      {
        v88 = (__m128i *)v152.m128i_i64[0];
        a1 = v205;
      }
      v206 = v86;
      if ( *(_QWORD *)v197 )
        sub_140001660(*(_QWORD *)&v197[8], *(_QWORD *)v197, 1);
      v204 = v88;
      sub_14169D1D0(&v157, v88, v87.m128i_i64[1]);
      if ( v206 )
        sub_140001660(v204, v206, 1);
      v69 = v157.m128i_i64[0];
      if ( v157.m128i_i64[0] == -1 )
      {
        if ( (v157.m128i_i8[8] & 3u) - 2 >= 2 && (v157.m128i_i8[8] & 3) != 0 )
        {
          v152.m128i_i64[0] = v157.m128i_i64[1] - 1;
          LOBYTE(v151) = 3;
          sub_1416BCB00(&v152);
        }
LABEL_153:
        v18 = v202;
        goto LABEL_84;
      }
      v60 = (const __m128i *)v157.m128i_i64[1];
      v67 = v158;
      goto LABEL_234;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v78 = v75[v77];
        if ( v78 != 37 || v77 + 2 >= v64 )
          goto LABEL_199;
        v79 = v77 + 3;
        v80 = v75[v77 + 1];
        if ( v80 < -64 || v79 != v64 && v75[v79] <= -65 )
          sub_141938F40((_DWORD)v75, v64, v77 + 1, v79, (__int64)&off_141A6EFB0);
        v81 = (__int64)&v75[v77 + 1];
        v31 = v80 == 43;
        v82 = *(unsigned __int8 *)(v81 + v31);
        v83 = v82 - 48;
        if ( v82 >= 0x3A )
          v83 = ((v82 - 65) & 0xFFFFFFDF) + 10;
        if ( v83 > 0xF )
          goto LABEL_199;
        if ( v80 != 43 )
          break;
LABEL_206:
        if ( v76 == *(_QWORD *)v197 )
          sub_141938C20(v197, v31);
        *(_BYTE *)(*(_QWORD *)&v197[8] + v76++) = v83;
        *(_QWORD *)&v197[16] = v76;
        v77 += 3;
        if ( v79 >= v64 )
          goto LABEL_209;
      }
      v84 = *(unsigned __int8 *)(v81 + v31 + 1);
      v31 = ((v84 - 65) & 0xFFFFFFDF) + 10;
      v85 = v84 - 48;
      if ( v84 >= 0x3A )
        v85 = ((v84 - 65) & 0xFFFFFFDF) + 10;
      if ( v85 <= 0xF )
      {
        LOBYTE(v83) = (16 * v83) | v85;
        goto LABEL_206;
      }
LABEL_199:
      if ( v76 == *(_QWORD *)v197 )
        sub_141938C20(v197, v31);
      *(_BYTE *)(*(_QWORD *)&v197[8] + v76++) = v78;
      *(_QWORD *)&v197[16] = v76;
      if ( ++v77 >= v64 )
        goto LABEL_209;
    }
  }
  if ( *v59 ^ 0x70747468 | *(_DWORD *)((char *)v59 + 3) ^ 0x2F2F3A70
    && (v31 == 7 || *(_QWORD *)v59 != 0x2F2F3A7370747468LL) )
  {
    goto LABEL_84;
  }
  sub_14124EF10(&v157);
  v175 = 2;
  v176 = 0;
  sub_1418F44E0((__m128i *)&v151, &v157, 0x3A0u);
  sub_14124DFD0(v197, &v151);
  if ( *(_DWORD *)&v197[16] == -2 )
  {
    sub_140192750(*(_QWORD *)v197);
    goto LABEL_153;
  }
  v200 = *(_OWORD *)v197;
  v201 = *(_QWORD *)&v197[16];
  *(_QWORD *)&v197[16] = 0x101010101010101LL;
  *(__m128i *)v197 = _mm_load_si128((const __m128i *)&xmmword_141A081E0);
  sub_1403FFEC0((unsigned int)&v157, (unsigned int)&v200, (unsigned int)v197, (_DWORD)v59, (__int64)v60);
  sub_14125AE40(&v151, &v157);
  v67 = v151;
  if ( v151 == (__m128i *)-1LL )
  {
    sub_140192750(v152.m128i_i64[0]);
  }
  else
  {
    sub_1418F44E0(&v184, &v152, 0xA8u);
    v183 = (signed __int64)v67;
    sub_1412348B0(&v157, &v183);
    v60 = (const __m128i *)v157.m128i_i64[1];
    v69 = v157.m128i_i64[0];
    if ( v157.m128i_i64[0] != -1 )
    {
      v67 = v158;
      goto LABEL_217;
    }
    sub_140192750(v157.m128i_i64[1]);
  }
  v69 = -1;
LABEL_217:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v200) )
    sub_141243170(&v200);
  v18 = v202;
  if ( v69 == -1 )
  {
LABEL_84:
    v151 = nullptr;
    v32 = 8;
    v33 = 0;
    v34 = nullptr;
    goto LABEL_85;
  }
LABEL_234:
  v190 = v69;
  v204 = (__m128i *)v60;
  if ( (__int64)v67 < 0 )
  {
    v92 = (unsigned __int64)v67;
    v93 = 0;
    goto LABEL_236;
  }
  if ( v67 )
  {
    nullsub_1(v68);
    v92 = (unsigned __int64)v67;
    v93 = 1;
    v94 = (__m128i *)sub_140001650(v92, 1);
    if ( !v94 )
LABEL_236:
      sub_141938D2B(v93, v92);
    v95 = v94;
    sub_1418F44E0(v94, v60, v92);
    v67 = (__m128i *)v92;
    if ( v92 < 8 )
    {
      v96 = 0;
      v97 = (__int64)v95;
      goto LABEL_350;
    }
    if ( v92 < 0x20 )
    {
      v96 = 0;
      v97 = (__int64)v95;
      goto LABEL_251;
    }
    v96 = v92 & 0x7FFFFFFFFFFFFFE0LL;
    v98 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1419E46A0);
    v100 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
    v101 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
    v97 = (__int64)v95;
    do
    {
      v102 = _mm_loadu_si128(&v95[v98 / 0x10]);
      v103 = _mm_loadu_si128(&v95[v98 / 0x10 + 1]);
      v104 = _mm_add_epi8(v102, si128);
      v105 = _mm_add_epi8(v103, si128);
      v95[v98 / 0x10] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v104, v100), v104), v101), v102);
      v95[v98 / 0x10 + 1] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v105, v100), v105), v101), v103);
      v98 += 32LL;
    }
    while ( v96 != v98 );
    if ( v92 != v96 )
    {
      if ( (v92 & 0x18) != 0 )
      {
LABEL_251:
        v106 = v96;
        v96 = v92 & 0x7FFFFFFFFFFFFFF8LL;
        v107 = _mm_load_si128((const __m128i *)&xmmword_1419E46B0);
        v108 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
        v109 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
        do
        {
          v110 = _mm_loadl_epi64((const __m128i *)(v97 + v106));
          v111 = _mm_add_epi8(v110, v107);
          *(_QWORD *)(v97 + v106) = _mm_xor_si128(
                                      _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v111, v108), v111), v109),
                                      v110).m128i_u64[0];
          v106 += 8;
        }
        while ( v96 != v106 );
        goto LABEL_349;
      }
      do
      {
LABEL_350:
        v95->m128i_i8[v96] = *(_BYTE *)(v97 + v96) ^ (32 * ((unsigned __int8)(*(_BYTE *)(v97 + v96) - 97) < 0x1Au));
        v97 = (__int64)v95;
        ++v96;
LABEL_349:
        ;
      }
      while ( v92 != v96 );
    }
  }
  else
  {
    v97 = 1;
  }
  *(_QWORD *)v197 = 0;
  *(_QWORD *)&v197[8] = 8;
  *(_QWORD *)&v197[16] = 0;
  v157.m128i_i64[0] = 0;
  v157.m128i_i64[1] = 4;
  v158 = (__m128i *)aSocks5_1;
  v159 = 7;
  v160 = aSocks5_0;
  v161 = 6;
  v162 = (__int64)aSocks;
  v163 = 6;
  v164 = aSocks5_0;
  v165 = 6;
  v166 = aHttps_1;
  v167 = 6;
  v168 = aHttp_2;
  v169 = 4;
  v170 = aProxy_6;
  v171 = 6;
  v172 = aHttp_2;
  v173 = 4;
  v118 = &v67->m128i_u8[(_QWORD)v60];
  v119 = 0x800008500000000LL;
  v120 = nullptr;
  v206 = (unsigned __int64)v67;
  v192 = (__m128i *)v97;
LABEL_274:
  if ( v120 != (__m128i *)4 )
  {
    v121 = (__m128i *)&v120->m128i_i8[1];
    v157.m128i_i64[0] = (__int64)v120->m128i_i64 + 1;
    v122 = 4LL * (_QWORD)v120;
    v123 = (&v158)[v122];
    if ( v123 )
    {
      v193 = v121;
      v124 = (__int64)*(&v158 + v122 + 1);
      v180 = (&v160)[v122];
      v181 = *(__int64 *)((char *)&v161 + v122 * 8);
      v125 = 0;
      LODWORD(v121) = (_DWORD)v192;
      while ( 1 )
      {
        v207 = 1;
        sub_1416B2790((unsigned int)&v151, (_DWORD)v121 + v125, (_DWORD)v67 - v125, (_DWORD)v123, v124);
        v207 = 1;
        sub_141059840(&v183, &v151);
        if ( (_DWORD)v183 != 1 )
        {
          v120 = v193;
          LODWORD(v67) = v206;
          goto LABEL_274;
        }
        v129 = v124 + v125;
        v62 = v184.m128i_i64[0] + v129 == 0;
        v125 = v184.m128i_i64[0] + v129;
        v67 = (__m128i *)v206;
        if ( !v62 )
        {
          if ( v206 <= v125 )
          {
            if ( v206 != v125 )
            {
LABEL_346:
              v207 = 1;
              sub_141938F40((_DWORD)v204, v206, v125, v206, (__int64)&off_141A6F000);
            }
          }
          else if ( v204->m128i_i8[v125] < -64 )
          {
            goto LABEL_346;
          }
        }
        v130 = &v204->m128i_i8[v125];
        v126 = v206 - v125;
        if ( v206 == v125 )
        {
LABEL_277:
          v126 = 0;
          goto LABEL_278;
        }
        v131 = 0;
        v132 = &v204->m128i_i8[v125];
        do
        {
          v133 = (unsigned __int8)*v132;
          if ( *v132 < 0 )
          {
            v134 = v133 & 0x1F;
            v135 = v132[1] & 0x3F;
            if ( (unsigned __int8)v133 <= 0xDFu )
            {
              v132 += 2;
              v133 = v135 | (v134 << 6);
              v67 = (__m128i *)v206;
              if ( v133 > 0x3B )
                goto LABEL_303;
            }
            else
            {
              v136 = (v135 << 6) | v132[2] & 0x3F;
              if ( (unsigned __int8)*v132 < 0xF0u )
              {
                v132 += 3;
                v133 = (v134 << 12) | v136;
                v67 = (__m128i *)v206;
                if ( v133 > 0x3B )
                  goto LABEL_303;
              }
              else
              {
                v137 = v132[3];
                v132 += 4;
                v133 = ((v134 & 7) << 18) | (v136 << 6) | v137 & 0x3F;
                v67 = (__m128i *)v206;
                if ( v133 > 0x3B )
                  goto LABEL_303;
              }
            }
          }
          else
          {
            ++v132;
            if ( v133 > 0x3B )
              goto LABEL_303;
          }
          if ( _bittest64(&v119, v133) )
            break;
LABEL_303:
          if ( v133 - 9 < 5 )
            break;
          if ( v133 < 0x85 )
          {
            v138 = v133 < 0x80;
            v139 = 2;
            goto LABEL_318;
          }
          v140 = v133 >> 8;
          if ( v133 >> 8 > 0x1F )
          {
            if ( v140 == 32 )
            {
              v141 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v133) >> 1;
LABEL_315:
              if ( (v141 & 1) != 0 )
                break;
              goto LABEL_316;
            }
            if ( v140 == 48 )
            {
              v141 = v133 == 12288;
              goto LABEL_315;
            }
          }
          else
          {
            if ( !v140 )
            {
              v141 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v133);
              goto LABEL_315;
            }
            if ( v140 == 22 )
            {
              v141 = v133 == 5760;
              goto LABEL_315;
            }
          }
LABEL_316:
          v142 = 2;
          if ( v133 < 0x800 )
            goto LABEL_319;
          v138 = v133 < 0x10000;
          v139 = 4;
LABEL_318:
          v142 = v139 - v138;
LABEL_319:
          v131 += v142;
        }
        while ( v132 != (char *)v118 );
        if ( !v131 )
          goto LABEL_277;
        if ( v131 < v126 )
        {
          if ( v130[v131] > -65 )
          {
            v126 = v131;
            goto LABEL_278;
          }
LABEL_347:
          v207 = 1;
          sub_141938F40((_DWORD)v130, v126, 0, v131, (__int64)&off_141A6F018);
        }
        if ( v131 != v126 )
          goto LABEL_347;
LABEL_278:
        v127 = sub_140E91160(v130, v126);
        if ( v128 )
        {
          v187 = v180;
          v188 = v181;
          *(_QWORD *)&v143 = sub_140E91160(v127, v128);
          if ( (_QWORD)v143 )
          {
            v144 = *((_QWORD *)&v143 + 1);
            if ( *((_QWORD *)&v143 + 1) )
            {
              v200 = v143;
              v207 = 1;
              v182 = (const __m128i *)v143;
              if ( (unsigned __int8)sub_141059410(asc_141A6F0A2, 3, v143, *((_QWORD *)&v143 + 1)) )
              {
                if ( v144 < 0 )
                {
                  v150 = 0;
                  goto LABEL_339;
                }
                nullsub_1(v145);
                v146 = (__m128i *)sub_140001650(v144, 1);
                if ( !v146 )
                {
                  v191 = v144;
                  v150 = 1;
LABEL_339:
                  v207 = 1;
                  sub_141938D2B(v150, v191);
                }
                v191 = (__int64)v146;
                sub_1418F44E0(v146, v182, v144);
                v183 = v144;
                v184.m128i_i64[0] = v191;
                v184.m128i_i64[1] = v144;
              }
              else
              {
                v151 = (__m128i *)&v187;
                v152.m128i_i64[0] = (__int64)sub_140186EE0;
                v152.m128i_i64[1] = (__int64)&v200;
                v153.m128i_i64[0] = (__int64)sub_140186EE0;
                v207 = 1;
                sub_1416ABFD0(&v183, &unk_141A6F0A5, &v151);
              }
              v147 = *(_QWORD *)&v197[16];
              if ( *(_QWORD *)&v197[16] == *(_QWORD *)v197 )
                sub_14190FDC0(v197);
              v148 = *(_QWORD *)&v197[8];
              v149 = 3 * v147;
              *(_QWORD *)(*(_QWORD *)&v197[8] + 8 * v149 + 16) = v184.m128i_i64[1];
              *(__m128i *)(v148 + 8 * v149) = _mm_loadu_si128((const __m128i *)&v183);
              *(_QWORD *)&v197[16] = v147 + 1;
            }
          }
          v67 = (__m128i *)v206;
          v121 = v192;
          if ( v125 )
          {
LABEL_280:
            if ( (unsigned __int64)v67 <= v125 )
            {
              if ( v67 != (__m128i *)v125 )
              {
LABEL_345:
                v207 = 1;
                sub_141938F40((_DWORD)v121, (_DWORD)v67, v125, (_DWORD)v67, (__int64)&off_141A6EFE8);
              }
            }
            else if ( v121->m128i_i8[v125] < -64 )
            {
              goto LABEL_345;
            }
          }
        }
        else
        {
          v121 = v192;
          if ( v125 )
            goto LABEL_280;
        }
      }
    }
  }
  v158 = *(__m128i **)&v197[16];
  v157 = _mm_loadu_si128((const __m128i *)v197);
  v207 = 0;
  sub_141009E70(&v151, &v157);
  if ( v206 )
    sub_140001660(v192, v206, 1);
  a1 = v205;
  v18 = v202;
  if ( v190 )
    sub_140001660(v204, v190, 1);
  v34 = v151;
  v33 = v152.m128i_u64[1];
  v32 = v152.m128i_i64[0];
LABEL_85:
  v157.m128i_i64[0] = v32;
  v158 = v34;
  v157.m128i_i64[1] = v32;
  v159 = v32 + 24 * v33;
  v35 = v196;
  if ( v33 > v194 - v196 )
  {
    v202 = v18;
    sub_14190D590((unsigned int)&v194, v196, v33, 8, 24);
    v35 = v196;
    a1 = v205;
    v18 = v202;
LABEL_87:
    sub_1418F44E0((__m128i *)(v195 + 24 * v35), (const __m128i *)v32, 24 * v33);
  }
  else if ( v33 )
  {
    goto LABEL_87;
  }
  v196 = v33 + v35;
  if ( v34 )
    sub_140001660(v32, 24LL * (_QWORD)v34, 8);
  v15 = v203;
  if ( v203 )
  {
    v16 = v18;
LABEL_92:
    sub_140001660(v16, v15, 1);
  }
LABEL_93:
  v208 = 1;
  sub_14168A510(&v157, aNetsh, 5);
  v174 = 0x8000000;
  sub_14168A3F0(&v157, aWinhttp, 7);
  sub_14168A3F0(&v157, aShow_0, 4);
  sub_14168A3F0(&v157, aProxy_5, 5);
  sub_14168DB90(&v151, &v157);
  v36 = v151;
  if ( v151 == (__m128i *)-1LL )
  {
    if ( (v152.m128i_i8[0] & 3u) - 2 >= 2 && (v152.m128i_i8[0] & 3) != 0 )
    {
      *(_QWORD *)&v197[8] = v152.m128i_i64[0] - 1;
      v197[0] = 3;
      sub_1416BCB00(&v197[8]);
    }
    v208 = 1;
    sub_14029BE30(&v157);
    goto LABEL_146;
  }
  v37 = _mm_loadu_si128(&v152);
  v38 = _mm_loadu_si128(&v153);
  v186 = _mm_loadu_si128(&v154);
  v185 = v38;
  v184 = v37;
  v183 = (signed __int64)v151;
  sub_14029BE30(&v157);
  if ( v186.m128i_i32[2] )
  {
    if ( v36 )
      sub_140001660(v184.m128i_i64[0], v36, 1);
    v39 = v185.m128i_i64[0];
    if ( v185.m128i_i64[0] )
    {
      v40 = v185.m128i_i64[1];
      goto LABEL_145;
    }
    goto LABEL_146;
  }
  v41 = v184.m128i_i64[0];
  sub_1416A9D40(&v200, v184.m128i_i64[0], v184.m128i_i64[1]);
  v203 = v41;
  v205 = a1;
  v157.m128i_i64[0] = 0;
  v157.m128i_i64[1] = v201;
  v206 = *((_QWORD *)&v200 + 1);
  v158 = *((__m128i **)&v200 + 1);
  v159 = v201;
  v160 = nullptr;
  v161 = v201;
  v162 = 0xA0000000ALL;
  LOBYTE(v163) = 1;
  LOWORD(v164) = 0;
  while ( 2 )
  {
    v43 = v158;
    sub_141056FA0(&v151, &v158);
    if ( (_DWORD)v151 == 1 )
    {
      v44 = v157.m128i_i64[0];
      v157.m128i_i64[0] = v152.m128i_i64[1];
      v45 = v152.m128i_i64[1] - v44;
      v43 = (__m128i *)((char *)v43 + v44);
      if ( v152.m128i_i64[1] == v44 )
        goto LABEL_119;
LABEL_113:
      if ( v43->m128i_i8[v45 - 1] != 10 )
        goto LABEL_119;
      if ( v45 == 1 )
      {
        v45 = 0;
        goto LABEL_119;
      }
      if ( v43->m128i_i8[v45 - 2] == 13 )
      {
        v46 = sub_140E91160(v43, v45 - 2);
        if ( v47 >= 0xC )
          break;
LABEL_106:
        if ( BYTE1(v164) == 1 )
          goto LABEL_130;
        continue;
      }
      v46 = sub_140E91160(v43, v45 - 1);
      if ( v47 < 0xC )
        goto LABEL_106;
    }
    else
    {
      if ( BYTE1(v164)
        || (BYTE1(v164) = 1,
            v43 = (__m128i *)v157.m128i_i64[0],
            v45 = v157.m128i_i64[1] - v157.m128i_i64[0],
            ((unsigned __int8)v164 | (v157.m128i_i64[1] != v157.m128i_i64[0])) != 1) )
      {
LABEL_130:
        v53 = -1;
        a1 = v205;
        goto LABEL_131;
      }
      v43 = (__m128i *)((char *)v158 + v157.m128i_i64[0]);
      if ( v45 )
        goto LABEL_113;
LABEL_119:
      v46 = sub_140E91160(v43, v45);
      if ( v47 < 0xC )
        goto LABEL_106;
    }
    break;
  }
  if ( *(_QWORD *)v46 ^ 0x65532079786F7250LL | *(unsigned int *)(v46 + 8) ^ 0x72657672LL )
    goto LABEL_106;
  v43 = (__m128i *)v46;
  v151 = (__m128i *)v46;
  v152 = (__m128i)v47;
  v48 = v47;
  v153.m128i_i64[0] = v47;
  v154.m128i_i8[0] = 1;
  v153.m128i_i64[1] = 0x3A0000003ALL;
  sub_141056FA0(v197, &v151);
  if ( !v197[0] )
    goto LABEL_106;
  v49 = sub_140E91160(&v43->m128i_i8[*(_QWORD *)&v197[16]], v48 - *(_QWORD *)&v197[16]);
  if ( !v49 || !v50 )
    goto LABEL_106;
  if ( v50 == (__m128i *)6 )
  {
    v51 = _byteswap_ulong(*(_DWORD *)v49);
    v52 = 678326126;
    if ( v51 != 678326126
      || (v51 = (unsigned __int16)__ROL2__(*(_WORD *)(v49 + 4), 8), v52 = 25897, v42 = 0, (unsigned __int16)v51 != 25897) )
    {
      v42 = 2 * (v51 >= v52) - 1;
    }
    if ( !v42 )
      goto LABEL_106;
  }
  v74 = (const __m128i *)v49;
  v43 = v50;
  sub_14072C410((unsigned int)&v151, (_DWORD)v50, 0, 1, 1);
  v53 = v152.m128i_i64[0];
  if ( (_DWORD)v151 == 1 )
    sub_141938D2B(v152.m128i_i64[0], v152.m128i_i64[1]);
  a1 = v205;
  v204 = (__m128i *)v152.m128i_i64[1];
  sub_1418F44E0((__m128i *)v152.m128i_i64[1], v74, (unsigned __int64)v43);
LABEL_131:
  if ( (__int64)v200 > 0 )
    sub_140001660(v206, v200, 1);
  if ( v36 )
    sub_140001660(v203, v36, 1);
  if ( v185.m128i_i64[0] )
    sub_140001660(v185.m128i_i64[1], v185.m128i_i64[0], 1);
  if ( v53 != -1 )
  {
    v206 = v53;
    sub_141006B30((__int64)&v151, (__int64)v204, (__int64)v43);
    v54 = v151;
    v55 = v152;
    v56 = 24 * v152.m128i_i64[1];
    v157.m128i_i64[0] = v152.m128i_i64[0];
    v158 = v151;
    v157.m128i_i64[1] = v152.m128i_i64[0];
    v159 = v152.m128i_i64[0] + 24 * v152.m128i_i64[1];
    v57 = v196;
    if ( v152.m128i_i64[1] > (unsigned __int64)(v194 - v196) )
    {
      sub_14190D590((unsigned int)&v194, v196, v152.m128i_i32[2], 8, 24);
      v57 = v196;
LABEL_140:
      sub_1418F44E0((__m128i *)(v195 + 24 * v57), (const __m128i *)v55.m128i_i64[0], v56);
    }
    else if ( v152.m128i_i64[1] )
    {
      goto LABEL_140;
    }
    v196 = v55.m128i_i64[1] + v57;
    if ( v54 )
      sub_140001660(v55.m128i_i64[0], 24LL * (_QWORD)v54, 8);
    v39 = v206;
    if ( v206 )
    {
      v40 = (__int64)v204;
LABEL_145:
      sub_140001660(v40, v39, 1);
    }
  }
LABEL_146:
  v208 = 0;
  sub_141009E70(a1, &v194);
  return a1;
}
