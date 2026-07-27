// module: codexmate_lib/platform/proxy
// addr: 0x14075c180
// name: sub_14075C180
// win 1.2.1 | module src/platform/proxy.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14075C180(__int64 a1)
{
  const char *v1; // rdi
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  const char *v6; // r14
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rbx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // r14
  __int64 *v17; // r15
  __int64 v18; // rsi
  const char *v19; // rax
  const char *v20; // rdi
  const char *v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // rsi
  const char *v27; // rax
  const char *v28; // rbx
  const char *v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rsi
  _DWORD *v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  const char *v39; // r15
  __int64 v40; // r14
  const char *v41; // rdi
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  int v47; // r9d
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int32 v56; // ecx
  unsigned int v57; // r8d
  __int64 v58; // r14
  const char *v59; // r15
  __m128i v60; // kr00_16
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // r12
  unsigned __int64 v65; // r14
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rax
  const char *v72; // rsi
  __int64 v73; // rsi
  const char *v74; // rdx
  __int64 v75; // rsi
  const char *v76; // r14
  __m128i v77; // kr20_16
  __int64 v78; // rbx
  __int64 v79; // rbx
  unsigned __int64 v80; // r14
  __int64 v81; // rsi
  char v82; // di
  unsigned __int64 v83; // r13
  char v84; // al
  __int64 v85; // rcx
  _BOOL8 v86; // rdx
  unsigned int v87; // r8d
  unsigned int v88; // r12d
  unsigned int v89; // ecx
  unsigned int v90; // eax
  __int64 v91; // rbx
  __m128i v92; // rdi
  __int64 *v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
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
  __int64 *v114; // rdx
  __int64 v115; // rsi
  __int64 v116; // r15
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // r12
  unsigned __int64 v121; // rdi
  unsigned __int64 v122; // rcx
  __int64 v123; // r9
  unsigned __int64 v124; // rcx
  __int64 v125; // r14
  __int64 v126; // r15
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // r13
  bool v129; // zf
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // r8
  unsigned __int64 v132; // r10
  __int64 v133; // r14
  unsigned __int64 v134; // rcx
  __int64 v135; // r9
  __int64 v136; // r11
  __int64 v137; // r10
  __int64 v138; // rdi
  char v139; // r13
  unsigned __int64 v140; // r10
  char *v141; // r13
  __int64 v142; // rdi
  char v143; // r11
  char v144; // r11
  unsigned int v145; // edx
  int v146; // edx
  int v147; // esi
  int v148; // r10d
  __int64 v149; // rax
  unsigned __int64 v150; // rcx
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // r9
  char *v153; // rax
  unsigned int v154; // r8d
  int v155; // r10d
  int v156; // esi
  int v157; // r8d
  unsigned __int8 v158; // r11
  __int64 v159; // r11
  bool v160; // cf
  __int64 v161; // r10
  unsigned int v162; // r10d
  char v163; // r10
  __int64 v164; // r10
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int128 v169; // rdi
  __int64 v170; // rcx
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v175; // rcx
  unsigned __int64 v176; // r15
  unsigned __int64 v177; // r9
  const char *v178; // [rsp+30h] [rbp-50h] BYREF
  __m128i v179; // [rsp+38h] [rbp-48h] BYREF
  __m128i v180; // [rsp+48h] [rbp-38h] BYREF
  __m128i v181; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v182; // [rsp+68h] [rbp-18h]
  __int16 v183; // [rsp+70h] [rbp-10h]
  __int64 v184; // [rsp+78h] [rbp-8h]
  unsigned __int64 v185; // [rsp+80h] [rbp+0h]
  __int64 v186; // [rsp+88h] [rbp+8h]
  unsigned __int64 v187; // [rsp+90h] [rbp+10h]
  __m128i v188; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v189; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v190; // [rsp+3E8h] [rbp+368h]
  const char *v191; // [rsp+3F0h] [rbp+370h]
  __int64 v192; // [rsp+3F8h] [rbp+378h]
  __int64 v193; // [rsp+400h] [rbp+380h]
  __int64 v194; // [rsp+408h] [rbp+388h]
  const char *v195; // [rsp+410h] [rbp+390h]
  __int64 v196; // [rsp+418h] [rbp+398h]
  const char *v197; // [rsp+420h] [rbp+3A0h]
  __int64 v198; // [rsp+428h] [rbp+3A8h]
  const char *v199; // [rsp+430h] [rbp+3B0h]
  __int64 v200; // [rsp+438h] [rbp+3B8h]
  const char *v201; // [rsp+440h] [rbp+3C0h]
  __int64 v202; // [rsp+448h] [rbp+3C8h]
  const char *v203; // [rsp+450h] [rbp+3D0h]
  __int64 v204; // [rsp+458h] [rbp+3D8h]
  int v205; // [rsp+47Ch] [rbp+3FCh]
  __int64 v206; // [rsp+760h] [rbp+6E0h]
  int v207; // [rsp+768h] [rbp+6E8h]
  __int64 v208; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v209; // [rsp+778h] [rbp+6F8h]
  __int64 v210; // [rsp+780h] [rbp+700h]
  unsigned __int8 *v211; // [rsp+788h] [rbp+708h]
  __int64 v212; // [rsp+790h] [rbp+710h]
  const char *v213; // [rsp+798h] [rbp+718h]
  __int64 v214; // [rsp+7A0h] [rbp+720h]
  const char *v215; // [rsp+7A8h] [rbp+728h] BYREF
  __m128i v216; // [rsp+7B0h] [rbp+730h] BYREF
  __m128i v217; // [rsp+7C0h] [rbp+740h]
  __m128i v218; // [rsp+7D0h] [rbp+750h]
  const char *v219; // [rsp+858h] [rbp+7D8h] BYREF
  __int64 v220; // [rsp+860h] [rbp+7E0h]
  __int64 v221; // [rsp+868h] [rbp+7E8h]
  __int64 v222; // [rsp+870h] [rbp+7F0h]
  __int64 v223; // [rsp+878h] [rbp+7F8h]
  __int64 v224; // [rsp+880h] [rbp+800h]
  __int64 v225; // [rsp+888h] [rbp+808h]
  __int64 v226; // [rsp+890h] [rbp+810h]
  const char *v227; // [rsp+898h] [rbp+818h]
  const char *v228; // [rsp+8A0h] [rbp+820h]
  __int64 v229; // [rsp+8A8h] [rbp+828h] BYREF
  __int64 v230; // [rsp+8B0h] [rbp+830h]
  __int64 v231; // [rsp+8B8h] [rbp+838h]
  _BYTE v232[24]; // [rsp+8C0h] [rbp+840h] BYREF
  __m128i v233; // [rsp+8D8h] [rbp+858h]
  __m128i v234; // [rsp+8E8h] [rbp+868h]
  unsigned __int64 v235; // [rsp+900h] [rbp+880h]
  __int64 v236; // [rsp+908h] [rbp+888h]
  __int128 v237; // [rsp+910h] [rbp+890h] BYREF
  __int64 v238; // [rsp+920h] [rbp+8A0h]
  __int64 *v239; // [rsp+928h] [rbp+8A8h]
  const char *v240; // [rsp+930h] [rbp+8B0h]
  __int64 v241; // [rsp+938h] [rbp+8B8h]
  char v242; // [rsp+946h] [rbp+8C6h]
  char v243; // [rsp+947h] [rbp+8C7h]
  __int64 v244; // [rsp+948h] [rbp+8C8h]

  v244 = -2;
  v222 = a1;
  v229 = 0;
  v230 = 8;
  v231 = 0;
  v243 = 1;
  sub_14147B720(&v188, aReg_0, 3);
  v205 = 0x8000000;
  sub_14147B600(&v188, aQuery_3, 5);
  sub_14147B600(&v188, aHkcuSoftwareMi_2, 64);
  sub_14147B600(&v188, aV_3, 2);
  sub_14147B600(&v188, aProxyenable, 11);
  sub_141481530(&v178, &v188);
  v1 = v178;
  if ( v178 == (const char *)-1LL )
  {
    sub_1401DD260(v179.m128i_i64[0]);
    v243 = 1;
    sub_1406CC740(&v188);
    goto LABEL_20;
  }
  v2 = _mm_loadu_si128(&v179);
  v3 = _mm_loadu_si128(&v180);
  v234 = _mm_loadu_si128(&v181);
  v233 = v3;
  *(__m128i *)&v232[8] = v2;
  *(_QWORD *)v232 = v178;
  sub_1406CC740(&v188);
  if ( v234.m128i_i32[2] )
    goto LABEL_15;
  v4 = *(_QWORD *)&v232[8];
  sub_141499F00(&v208, *(_QWORD *)&v232[8], *(_QWORD *)&v232[16]);
  v5 = v210;
  v240 = (const char *)v209;
  if ( !(unsigned __int8)sub_1407BE9C0(a0x1, 3, v209, v210)
    && !(unsigned __int8)sub_1407BE9C0(a0x00000001, 10, v240, v5) )
  {
LABEL_13:
    if ( v208 > 0 )
      sub_140001660(v240, v208, 1);
LABEL_15:
    if ( v1 )
      sub_140001660(*(_QWORD *)&v232[8], v1, 1);
    v9 = v233.m128i_i64[0];
    if ( v233.m128i_i64[0] )
    {
      v10 = v233.m128i_i64[1];
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  sub_14147B720(&v188, aReg_0, 3);
  v205 = 0x8000000;
  sub_14147B600(&v188, aQuery_3, 5);
  sub_14147B600(&v188, aHkcuSoftwareMi_2, 64);
  sub_14147B600(&v188, aV_3, 2);
  sub_14147B600(&v188, aProxyserver, 11);
  sub_141481530(&v178, &v188);
  v6 = v178;
  if ( v178 == (const char *)-1LL )
  {
    sub_1401DD260(v179.m128i_i64[0]);
    sub_1406CC740(&v188);
    goto LABEL_13;
  }
  v7 = _mm_loadu_si128(&v179);
  v8 = _mm_loadu_si128(&v180);
  v218 = _mm_loadu_si128(&v181);
  v217 = v8;
  v216 = v7;
  v215 = v178;
  sub_1406CC740(&v188);
  if ( v218.m128i_i32[2] )
  {
    if ( v6 )
      sub_140001660(v216.m128i_i64[0], v6, 1);
    if ( v217.m128i_i64[0] )
      sub_140001660(v217.m128i_i64[1], v217.m128i_i64[0], 1);
    goto LABEL_13;
  }
  v239 = (__int64 *)v216.m128i_i64[0];
  sub_141499F00(&v219, v216.m128i_i64[0], v216.m128i_i64[1]);
  v235 = v4;
  v178 = nullptr;
  v179.m128i_i64[0] = v221;
  v25 = &v179.m128i_i64[1];
  v228 = (const char *)v220;
  v179.m128i_i64[1] = v220;
  v180 = (__m128i)(unsigned __int64)v221;
  v181.m128i_i64[0] = v221;
  v181.m128i_i64[1] = 0xA0000000ALL;
  LOBYTE(v182) = 1;
  v183 = 0;
  while ( 1 )
  {
    v241 = -1;
    if ( HIBYTE(v183) )
      break;
    v26 = v179.m128i_i64[1];
    sub_1407BC790(&v188, &v179.m128i_u64[1]);
    if ( v188.m128i_i32[0] != 1 )
    {
      if ( HIBYTE(v183) )
        break;
      HIBYTE(v183) = 1;
      v28 = (const char *)(v179.m128i_i64[0] - (_QWORD)v178);
      if ( ((unsigned __int8)v183 | (v179.m128i_i64[0] != (_QWORD)v178)) != 1 )
        break;
      v29 = &v178[v179.m128i_i64[1]];
      if ( !v28 )
        goto LABEL_61;
LABEL_55:
      if ( v28[(_QWORD)v29 - 1] == 10 )
      {
        if ( v28 == (const char *)1 )
        {
          v28 = nullptr;
        }
        else if ( v28[(_QWORD)v29 - 2] == 13 )
        {
          v28 -= 2;
        }
        else
        {
          --v28;
        }
      }
      goto LABEL_61;
    }
    v27 = v178;
    v178 = v189;
    v28 = (const char *)(v189 - v27);
    v29 = &v27[v26];
    if ( v189 != v27 )
      goto LABEL_55;
LABEL_61:
    if ( (unsigned __int8)sub_1407BE9C0(aProxyserver, 11, v29, v28) )
    {
      sub_1414A2990((unsigned int)&v188, (_DWORD)v29, (_DWORD)v28, (unsigned int)&unk_141788A3C, 6);
      v200 = 0;
      v201 = v28;
      LOWORD(v202) = 1;
      sub_1407BEE50(&v237, &v188);
      if ( (_BYTE)v237 )
      {
        v200 = v238;
        if ( !BYTE1(v202) )
        {
          v30 = v196;
          sub_1407BEE50(&v237, &v188);
          if ( (_DWORD)v237 == 1 )
          {
            v31 = *((_QWORD *)&v237 + 1) - v200;
            v32 = v200 + v30;
          }
          else
          {
            if ( BYTE1(v202) )
              break;
            if ( (_BYTE)v202 == 1 )
            {
              v112 = v200;
              v113 = v201;
            }
            else
            {
              v112 = v200;
              v113 = v201;
              if ( v201 == (const char *)v200 )
                break;
            }
            v31 = (__int64)&v113[-v112];
            v32 = v196 + v112;
          }
          v115 = sub_14033BC10(v32, v31);
          if ( v115 )
          {
            v25 = v114;
            if ( v114 )
            {
              sub_140388B60((unsigned int)&v188, (_DWORD)v114, 0, 1, 1);
              v241 = v188.m128i_i64[1];
              if ( v188.m128i_i32[0] == 1 )
                sub_1416C2D4B(v241, v189);
              v236 = (__int64)v189;
              sub_141684120(v189, v115, v25);
            }
          }
        }
      }
      break;
    }
  }
  if ( (unsigned __int64)(v219 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v228, v219, 1);
  if ( v6 )
    sub_140001660(v239, v6, 1);
  if ( v217.m128i_i64[0] )
    sub_140001660(v217.m128i_i64[1], v217.m128i_i64[0], 1);
  v75 = v241;
  if ( (unsigned __int64)(v208 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v240, v208, 1);
  if ( v1 )
    sub_140001660(v235, v1, 1);
  if ( v233.m128i_i64[0] )
    sub_140001660(v233.m128i_i64[1], v233.m128i_i64[0], 1);
  if ( v75 != -1 )
  {
    sub_14075BAD0((__int64)&v178, v236, (__int64)v25);
    v76 = v178;
    v77 = v179;
    v78 = 24 * v179.m128i_i64[1];
    v188.m128i_i64[0] = v179.m128i_i64[0];
    v189 = v178;
    v188.m128i_i64[1] = v179.m128i_i64[0];
    v190 = v179.m128i_i64[0] + 24 * v179.m128i_i64[1];
    if ( v179.m128i_i64[1] )
    {
      sub_141688D30((unsigned int)&v229, 0, v179.m128i_i32[2], 8, 24);
      v116 = v231;
      sub_141684120(v230 + 24 * v231, v77.m128i_i64[0], v78);
      v231 = v77.m128i_i64[1] + v116;
      if ( v76 )
LABEL_166:
        sub_140001660(v77.m128i_i64[0], 24LL * (_QWORD)v76, 8);
    }
    else
    {
      v231 = 0;
      if ( v178 )
        goto LABEL_166;
    }
    v9 = v241;
    if ( v241 )
    {
      v10 = v236;
LABEL_19:
      sub_140001660(v10, v9, 1);
    }
  }
LABEL_20:
  v243 = 1;
  sub_14147B720(&v188, aReg_0, 3);
  v205 = 0x8000000;
  sub_14147B600(&v188, aQuery_3, 5);
  sub_14147B600(&v188, aHkcuSoftwareMi_2, 64);
  sub_14147B600(&v188, aV_3, 2);
  sub_14147B600(&v188, aAutoconfigurl, 13);
  sub_141481530(&v178, &v188);
  v11 = v178;
  if ( v178 == (const char *)-1LL )
  {
    sub_1401DD260(v179.m128i_i64[0]);
    v243 = 1;
    sub_1406CC740(&v188);
    goto LABEL_83;
  }
  v12 = _mm_loadu_si128(&v179);
  v13 = _mm_loadu_si128(&v180);
  v218 = _mm_loadu_si128(&v181);
  v217 = v13;
  v216 = v12;
  v215 = v178;
  sub_1406CC740(&v188);
  if ( v218.m128i_i32[2] )
  {
    if ( v11 )
      sub_140001660(v216.m128i_i64[0], v11, 1);
    v14 = v217.m128i_i64[0];
    if ( v217.m128i_i64[0] )
    {
      v15 = (const char *)v217.m128i_i64[1];
      goto LABEL_82;
    }
    goto LABEL_83;
  }
  v16 = v216.m128i_i64[0];
  sub_141499F00(&v237, v216.m128i_i64[0], v216.m128i_i64[1]);
  v178 = nullptr;
  v179.m128i_i64[0] = v238;
  v17 = &v179.m128i_i64[1];
  v240 = *((const char **)&v237 + 1);
  v179.m128i_i64[1] = *((_QWORD *)&v237 + 1);
  v180 = (__m128i)(unsigned __int64)v238;
  v181.m128i_i64[0] = v238;
  v181.m128i_i64[1] = 0xA0000000ALL;
  LOBYTE(v182) = 1;
  v183 = 0;
  while ( 2 )
  {
    v241 = -1;
    if ( !HIBYTE(v183) )
    {
      v18 = v179.m128i_i64[1];
      sub_1407BC790(&v188, &v179.m128i_u64[1]);
      if ( v188.m128i_i32[0] == 1 )
      {
        v19 = v178;
        v178 = v189;
        v20 = (const char *)(v189 - v19);
        v21 = &v19[v18];
        if ( v189 == v19 )
          goto LABEL_41;
LABEL_35:
        if ( v20[(_QWORD)v21 - 1] == 10 )
        {
          if ( v20 == (const char *)1 )
          {
            v20 = nullptr;
          }
          else if ( v20[(_QWORD)v21 - 2] == 13 )
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
        if ( HIBYTE(v183) )
          break;
        HIBYTE(v183) = 1;
        v20 = (const char *)(v179.m128i_i64[0] - (_QWORD)v178);
        if ( ((unsigned __int8)v183 | (v179.m128i_i64[0] != (_QWORD)v178)) != 1 )
          break;
        v21 = &v178[v179.m128i_i64[1]];
        if ( v20 )
          goto LABEL_35;
      }
LABEL_41:
      if ( (unsigned __int8)sub_1407BE9C0(aAutoconfigurl, 13, v21, v20) )
      {
        sub_1414A2990((unsigned int)&v188, (_DWORD)v21, (_DWORD)v20, (unsigned int)&unk_141788A3C, 6);
        v200 = 0;
        v201 = v20;
        LOWORD(v202) = 1;
        sub_1407BEE50(v232, &v188);
        if ( v232[0] )
        {
          v200 = *(_QWORD *)&v232[16];
          if ( !BYTE1(v202) )
          {
            v22 = v196;
            sub_1407BEE50(v232, &v188);
            if ( *(_DWORD *)v232 == 1 )
            {
              v23 = *(_QWORD *)&v232[8] - v200;
              v24 = v200 + v22;
            }
            else
            {
              if ( BYTE1(v202) )
                break;
              if ( (_BYTE)v202 == 1 )
              {
                v73 = v200;
                v74 = v201;
              }
              else
              {
                v73 = v200;
                v74 = v201;
                if ( v201 == (const char *)v200 )
                  break;
              }
              v23 = (__int64)&v74[-v73];
              v24 = v196 + v73;
            }
            v94 = sub_14033BC10(v24, v23);
            if ( v94 )
            {
              v17 = v93;
              if ( v93 )
              {
                sub_140388B60((unsigned int)&v188, (_DWORD)v93, 0, 1, 1);
                v241 = v188.m128i_i64[1];
                if ( v188.m128i_i32[0] == 1 )
                  sub_1416C2D4B(v241, v189);
                v227 = v189;
                sub_141684120(v189, v94, v17);
              }
            }
          }
        }
        break;
      }
      continue;
    }
    break;
  }
  if ( (unsigned __int64)(v237 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v240, v237, 1);
  v33 = v241;
  if ( v11 )
    sub_140001660(v16, v11, 1);
  if ( v217.m128i_i64[0] )
    sub_140001660(v217.m128i_i64[1], v217.m128i_i64[0], 1);
  if ( v33 == -1 )
    goto LABEL_83;
  v34 = (_DWORD *)sub_14033BC10(v227, v17);
  v36 = v35;
  if ( v35 < 7 )
  {
LABEL_74:
    v178 = nullptr;
    v37 = 8;
    v38 = 0;
    v39 = nullptr;
    goto LABEL_75;
  }
  v65 = (unsigned __int64)v34;
  v66 = *v34 ^ 0x656C6966;
  if ( !(v66 | *(_DWORD *)(v65 + 3) ^ 0x2F2F3A65) )
  {
    v69 = v35 - 7;
    if ( (__int64)(v35 - 7) < 0 )
    {
      v70 = 0;
      goto LABEL_141;
    }
    if ( v35 == 7 )
    {
      v71 = 1;
    }
    else
    {
      nullsub_1(v66 | *(_DWORD *)(v65 + 3) ^ 0x2F2F3A65u);
      v70 = 1;
      v71 = sub_140001650(v69, 1);
      if ( !v71 )
LABEL_141:
        sub_1416C2D4B(v70, v69);
    }
    v80 = v65 + 7;
    *(_QWORD *)v232 = v69;
    *(_QWORD *)&v232[8] = v71;
    *(_QWORD *)&v232[16] = 0;
    v17 = nullptr;
    v81 = 0;
    if ( !v69 )
    {
LABEL_192:
      sub_141499F00(&v178, *(_QWORD *)&v232[8], v17);
      v91 = (__int64)v178;
      v92 = v179;
      if ( v178 == (const char *)-1LL )
      {
        sub_140388B60((unsigned int)&v188, v179.m128i_i32[2], 0, 1, 1);
        v91 = v188.m128i_i64[1];
        if ( v188.m128i_i32[0] == 1 )
          sub_1416C2D4B(v188.m128i_i64[1], v189);
        v65 = (unsigned __int64)v189;
        if ( v92.m128i_i64[1] )
          sub_141684120(v189, v92.m128i_i64[0], v92.m128i_i64[1]);
        else
          v92.m128i_i64[1] = 0;
      }
      else
      {
        v65 = v179.m128i_i64[0];
      }
      v240 = (const char *)v91;
      if ( *(_QWORD *)v232 )
        sub_140001660(*(_QWORD *)&v232[8], *(_QWORD *)v232, 1);
      v239 = (__int64 *)v65;
      sub_14148D130(&v188, v65, v92.m128i_i64[1]);
      if ( v240 )
        sub_140001660(v239, v240, 1);
      v36 = v188.m128i_i64[1];
      v68 = v188.m128i_i64[0];
      if ( v188.m128i_i64[0] == -1 )
        sub_1401DD260(v188.m128i_i64[1]);
      else
        v65 = (unsigned __int64)v189;
      goto LABEL_216;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v82 = *(_BYTE *)(v80 + v81);
        if ( v81 + 2 >= v69 || v82 != 37 )
          goto LABEL_182;
        v83 = v81 + 3;
        v84 = *(_BYTE *)(v80 + v81 + 1);
        if ( v84 <= -65 || v83 < v69 && *(char *)(v80 + v83) < -64 )
          sub_1416C2F60(v80, v69, v81 + 1, v83, (__int64)&off_14178B490);
        v85 = v80 + v81 + 1;
        v86 = v84 == 43;
        v87 = *(unsigned __int8 *)(v85 + v86);
        v88 = v87 - 48;
        if ( v87 >= 0x3A )
          v88 = ((v87 - 65) & 0xFFFFFFDF) + 10;
        if ( v88 > 0xF )
          goto LABEL_182;
        if ( v84 != 43 )
          break;
LABEL_189:
        if ( v17 == *(__int64 **)v232 )
          sub_1416C2C40(v232);
        *((_BYTE *)v17 + *(_QWORD *)&v232[8]) = v88;
        v17 = (__int64 *)((char *)v17 + 1);
        *(_QWORD *)&v232[16] = v17;
        v81 += 3;
        if ( v83 >= v69 )
          goto LABEL_192;
      }
      v89 = *(unsigned __int8 *)(v85 + v86 + 1);
      v90 = v89 - 48;
      if ( v89 >= 0x3A )
        v90 = ((v89 - 65) & 0xFFFFFFDF) + 10;
      if ( v90 <= 0xF )
      {
        LOBYTE(v88) = (16 * v88) | v90;
        goto LABEL_189;
      }
LABEL_182:
      if ( v17 == *(__int64 **)v232 )
        sub_1416C2C40(v232);
      *((_BYTE *)v17 + *(_QWORD *)&v232[8]) = v82;
      v17 = (__int64 *)((char *)v17 + 1);
      *(_QWORD *)&v232[16] = v17;
      if ( ++v81 >= v69 )
        goto LABEL_192;
    }
  }
  if ( *(_DWORD *)v65 ^ 0x70747468 | *(_DWORD *)(v65 + 3) ^ 0x2F2F3A70
    && (v35 == 7 || *(_QWORD *)v65 != 0x2F2F3A7370747468LL) )
  {
    goto LABEL_74;
  }
  sub_141069E60(&v188);
  v206 = 2;
  v207 = 0;
  sub_141684120(&v178, &v188, 928);
  sub_141068AB0(v232, &v178);
  if ( *(_DWORD *)&v232[16] == -2 )
  {
    sub_1406CB7B0(*(_QWORD *)v232);
    v68 = -1;
    goto LABEL_216;
  }
  v237 = *(_OWORD *)v232;
  v238 = *(_QWORD *)&v232[16];
  *(_QWORD *)&v232[16] = 0x101010101010101LL;
  *(__m128i *)v232 = _mm_load_si128((const __m128i *)&xmmword_141786340);
  sub_14097F010((unsigned int)&v188, (unsigned int)&v237, (unsigned int)v232, v65, v36);
  sub_14103CF70(&v178, &v188);
  v72 = v178;
  if ( v178 == (const char *)-1LL )
  {
    sub_1406CB7B0(v179.m128i_i64[0]);
LABEL_199:
    v68 = -1;
    goto LABEL_200;
  }
  sub_141684120(&v216, &v179, 168);
  v215 = v72;
  sub_14101E160(&v188, &v215);
  v36 = v188.m128i_i64[1];
  v68 = v188.m128i_i64[0];
  if ( v188.m128i_i64[0] == -1 )
  {
    sub_1406CB7B0(v188.m128i_i64[1]);
    goto LABEL_199;
  }
  v65 = (unsigned __int64)v189;
LABEL_200:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v237) )
    sub_141018DA0(&v237);
LABEL_216:
  if ( v68 == -1 )
    goto LABEL_74;
  v224 = v36;
  v223 = v68;
  if ( (v65 & 0x8000000000000000uLL) != 0LL )
  {
    v95 = 0;
    goto LABEL_219;
  }
  if ( v65 )
  {
    nullsub_1(v67);
    v95 = 1;
    v96 = sub_140001650(v65, 1);
    if ( !v96 )
LABEL_219:
      sub_1416C2D4B(v95, v65);
    v17 = (__int64 *)v96;
    sub_141684120(v96, v36, v65);
    v236 = (__int64)v17;
    if ( v65 < 8 )
    {
      v97 = 0;
      goto LABEL_252;
    }
    if ( v65 < 0x20 )
    {
      v97 = 0;
      goto LABEL_231;
    }
    v97 = v65 & 0x7FFFFFFFFFFFFFE0LL;
    v98 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141756340);
    v100 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
    v101 = _mm_load_si128((const __m128i *)&xmmword_141742470);
    do
    {
      v102 = _mm_loadu_si128((const __m128i *)&v17[v98 / 8]);
      v103 = _mm_loadu_si128((const __m128i *)&v17[v98 / 8 + 2]);
      v104 = _mm_add_epi8(v102, si128);
      v105 = _mm_add_epi8(v103, si128);
      *(__m128i *)&v17[v98 / 8] = _mm_xor_si128(
                                    _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v104, v100), v104), v101),
                                    v102);
      *(__m128i *)&v17[v98 / 8 + 2] = _mm_xor_si128(
                                        _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v105, v100), v105), v101),
                                        v103);
      v98 += 32LL;
    }
    while ( v97 != v98 );
    if ( v65 != v97 )
    {
      if ( (v65 & 0x18) != 0 )
      {
LABEL_231:
        v106 = v97;
        v97 = v65 & 0x7FFFFFFFFFFFFFF8LL;
        v107 = _mm_load_si128((const __m128i *)&xmmword_141756350);
        v108 = _mm_load_si128((const __m128i *)&xmmword_141742490);
        v109 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
        do
        {
          v110 = _mm_loadl_epi64((const __m128i *)((char *)v17 + v106));
          v111 = _mm_add_epi8(v110, v107);
          *(__int64 *)((char *)v17 + v106) = _mm_xor_si128(
                                               _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v111, v108), v111), v109),
                                               v110).m128i_u64[0];
          v106 += 8;
        }
        while ( v97 != v106 );
        goto LABEL_253;
      }
      do
      {
LABEL_252:
        *((_BYTE *)v17 + v97) ^= 32 * ((unsigned __int8)(*((_BYTE *)v17 + v97) - 97) < 0x1Au);
        ++v97;
LABEL_253:
        ;
      }
      while ( v65 != v97 );
    }
  }
  else
  {
    v236 = 1;
  }
  *(_QWORD *)v232 = 0;
  *(_QWORD *)&v232[8] = 8;
  *(_QWORD *)&v232[16] = 0;
  v188.m128i_i64[0] = 0;
  v188.m128i_i64[1] = 4;
  v189 = aSocks5_0;
  v190 = 7;
  v191 = aSocks5_1;
  v192 = 6;
  v193 = (__int64)aSocks;
  v194 = 6;
  v195 = aSocks5_1;
  v196 = 6;
  v197 = aHttps_0;
  v198 = 6;
  v199 = aHttp_0;
  v200 = 4;
  v201 = aProxy_4;
  v202 = 6;
  v203 = aHttp_0;
  v204 = 4;
  v117 = 0;
  v235 = v65;
  v211 = (unsigned __int8 *)(v65 + v36);
LABEL_256:
  if ( v117 != 4 )
  {
    v118 = v117 + 1;
    v188.m128i_i64[0] = v117 + 1;
    v119 = 4 * v117;
    v228 = (&v189)[v119];
    if ( v228 )
    {
      v212 = v118;
      v240 = (&v189)[v119 + 1];
      v213 = (&v191)[v119];
      v214 = *(__int64 *)((char *)&v192 + v119 * 8);
      v120 = 0;
      while ( 1 )
      {
        if ( v120 )
        {
          if ( v65 <= v120 )
          {
            if ( v65 != v120 )
            {
LABEL_405:
              v242 = 1;
              sub_1416C2F60(v236, v65, v120, v65, (__int64)&off_14178B4D0);
            }
          }
          else if ( *(char *)(v236 + v120) < -64 )
          {
            goto LABEL_405;
          }
        }
        v242 = 1;
        sub_1414A2990((unsigned int)&v178, v236 + v120, v65 - v120, (_DWORD)v228, (__int64)v240);
        v239 = v17;
        if ( !(_BYTE)v178 )
        {
          if ( v180.m128i_i8[2] )
            goto LABEL_255;
          v131 = v179.m128i_i64[0];
          v123 = v185;
          if ( v179.m128i_i64[0] )
          {
            if ( v179.m128i_i64[0] >= v185 )
            {
              if ( v179.m128i_i64[0] != v185 )
                goto LABEL_407;
            }
            else if ( *(char *)(v184 + v179.m128i_i64[0]) < -64 )
            {
              goto LABEL_407;
            }
          }
          if ( v179.m128i_i64[0] != v185 )
          {
            v144 = *(_BYTE *)(v184 + v179.m128i_i64[0]);
            if ( v144 >= 0 )
            {
              v145 = (unsigned __int8)v144;
              if ( (v180.m128i_i8[0] & 1) == 0 )
                goto LABEL_321;
LABEL_331:
              v123 = v131;
              goto LABEL_332;
            }
            v146 = v144 & 0x1F;
            v147 = *(_BYTE *)(v184 + v179.m128i_i64[0] + 1) & 0x3F;
            if ( (unsigned __int8)v144 < 0xE0u )
            {
              v145 = v147 | (v146 << 6);
              if ( (v180.m128i_i8[0] & 1) != 0 )
                goto LABEL_331;
            }
            else
            {
              v148 = (v147 << 6) | *(_BYTE *)(v184 + v179.m128i_i64[0] + 2) & 0x3F;
              if ( (unsigned __int8)v144 >= 0xF0u )
              {
                v145 = (v148 << 6) | *(_BYTE *)(v184 + v179.m128i_i64[0] + 3) & 0x3F | ((v144 & 7) << 18);
                if ( (v180.m128i_i8[0] & 1) == 0 )
                  goto LABEL_321;
                goto LABEL_331;
              }
              v145 = v148 | (v146 << 12);
              if ( (v180.m128i_i8[0] & 1) != 0 )
                goto LABEL_331;
            }
LABEL_321:
            v149 = 1;
            if ( v145 >= 0x80 )
            {
              v149 = 2;
              if ( v145 >= 0x800 )
                v149 = 4LL - (v145 < 0x10000);
            }
            v131 = v149 + v179.m128i_i64[0];
            if ( v149 + v179.m128i_i64[0] )
            {
              if ( v131 >= v185 )
              {
                if ( v131 != v185 )
                  goto LABEL_407;
              }
              else if ( *(char *)(v184 + v131) < -64 )
              {
LABEL_407:
                v242 = 1;
                sub_1416C2F60(v184, v185, v131, v185, (__int64)&off_141790F48);
              }
            }
            if ( v131 == v185 )
              goto LABEL_332;
            if ( *(char *)(v184 + v131) < 0 )
            {
              v123 = v149 + v179.m128i_i64[0];
              goto LABEL_332;
            }
            goto LABEL_331;
          }
          v123 = v179.m128i_i64[0];
          if ( (v180.m128i_i8[0] & 1) != 0 )
            goto LABEL_332;
LABEL_255:
          v65 = v235;
          v17 = v239;
          v117 = v212;
          goto LABEL_256;
        }
        v121 = v182;
        v122 = v187 - 1;
        if ( v182 != -1 )
        {
          v123 = v181.m128i_i64[0];
          v124 = v181.m128i_i64[0] + v122;
          if ( v124 < v185 )
          {
            v125 = v180.m128i_i64[1];
            v225 = v180.m128i_i64[0];
            v226 = v187 - v180.m128i_i64[0];
            do
            {
              if ( _bittest64(&v125, *(unsigned __int8 *)(v184 + v124)) )
              {
                v126 = v179.m128i_i64[0];
                if ( v121 > v179.m128i_i64[0] )
                  v126 = v121;
                v127 = v126;
                while ( v127 < v187 )
                {
                  if ( v123 + v127 >= v185 )
                  {
                    v176 = v123 + v126;
                    if ( v185 > v176 )
                      v176 = v185;
                    v242 = 1;
                    sub_1416C30E3(v176, v185, &off_141786FD8);
                  }
                  v128 = v127 + 1;
                  v129 = *(_BYTE *)(v186 + v127) == *(_BYTE *)(v184 + v123 + v127);
                  ++v127;
                  if ( !v129 )
                  {
                    v123 = v128 + v123 - v179.m128i_i64[0];
                    v121 = 0;
                    goto LABEL_269;
                  }
                }
                v130 = v179.m128i_i64[0];
                do
                {
                  if ( v121 >= v130 )
                    goto LABEL_332;
                  if ( --v130 >= v187 )
                  {
                    v242 = 1;
                    sub_1416C30E3(v130, v187, &off_141786FA8);
                  }
                  if ( v130 + v123 >= v185 )
                  {
                    v242 = 1;
                    sub_1416C30E3(v130 + v123, v185, &off_141786FC0);
                  }
                }
                while ( *(_BYTE *)(v186 + v130) == *(_BYTE *)(v184 + v130 + v123) );
                v123 += v225;
                v121 = v226;
              }
              else
              {
                v123 += v187;
                v121 = 0;
              }
LABEL_269:
              v124 = v123 + v187 - 1;
            }
            while ( v124 < v185 );
          }
          goto LABEL_255;
        }
        v123 = v181.m128i_i64[0];
        v132 = v181.m128i_i64[0] + v122;
        if ( v181.m128i_i64[0] + v122 >= v185 )
          goto LABEL_255;
        v133 = v180.m128i_i64[1];
        v226 = v180.m128i_i64[0];
        v134 = v179.m128i_i64[0] - 1;
        v225 = v186 + v179.m128i_i64[0] - 1;
        while ( 1 )
        {
          if ( !_bittest64(&v133, *(unsigned __int8 *)(v184 + v132)) )
          {
            v135 = v187 + v123;
            goto LABEL_292;
          }
          v137 = 0;
          v138 = v123;
          while ( v179.m128i_i64[0] + v137 < v187 )
          {
            if ( v179.m128i_i64[0] + v138 >= v185 )
            {
              v177 = v179.m128i_i64[0] + v123;
              if ( v185 > v177 )
                v177 = v185;
              v242 = 1;
              sub_1416C30E3(v177, v185, &off_141786FD8);
            }
            v139 = *(_BYTE *)(v179.m128i_i64[0] + v186 + v137);
            v136 = v138 + 1;
            ++v137;
            v129 = v139 == *(_BYTE *)(v184 + v179.m128i_i64[0] + v138++);
            if ( !v129 )
              goto LABEL_293;
          }
          if ( v134 >= v187 )
            break;
          v140 = v134 + v123;
          v141 = (char *)v225;
          v142 = v179.m128i_i64[0];
          do
          {
            v160 = v142-- == 0;
            if ( v160 )
              goto LABEL_332;
            if ( v140 >= v185 )
            {
              v242 = 1;
              sub_1416C30E3(v140, v185, &off_141786FC0);
            }
            v143 = *v141--;
            v129 = v143 == *(_BYTE *)(v184 + v140--);
          }
          while ( v129 );
          v135 = v226 + v123;
LABEL_292:
          v136 = v135;
LABEL_293:
          v132 = v136 + v187 - 1;
          v123 = v136;
          if ( v132 >= v185 )
            goto LABEL_255;
        }
        if ( v179.m128i_i64[0] )
        {
          v242 = 1;
          sub_1416C30E3(v134, v187, &off_141786FA8);
        }
LABEL_332:
        v120 += (unsigned __int64)&v240[v123];
        if ( v120 )
        {
          if ( v235 <= v120 )
          {
            if ( v235 != v120 )
              goto LABEL_406;
          }
          else if ( *(char *)(v224 + v120) < -64 )
          {
LABEL_406:
            v242 = 1;
            sub_1416C2F60(v224, v235, v120, v235, (__int64)&off_14178B4E8);
          }
        }
        v150 = v120 + v224;
        v151 = v235 - v120;
        v17 = v239;
        if ( v235 == v120 )
        {
LABEL_371:
          v151 = 0;
          goto LABEL_372;
        }
        v152 = 0;
        v153 = (char *)(v120 + v224);
        while ( 2 )
        {
          v154 = (unsigned __int8)*v153;
          if ( *v153 < 0 )
          {
            v155 = v154 & 0x1F;
            v156 = v153[1] & 0x3F;
            if ( (unsigned __int8)v154 <= 0xDFu )
            {
              v153 += 2;
              v154 = v156 | (v155 << 6);
              if ( v154 <= 0x3B )
                goto LABEL_349;
            }
            else
            {
              v157 = (v156 << 6) | v153[2] & 0x3F;
              if ( (unsigned __int8)*v153 < 0xF0u )
              {
                v153 += 3;
                v154 = (v155 << 12) | v157;
                if ( v154 > 0x3B )
                  goto LABEL_350;
                goto LABEL_349;
              }
              v158 = v153[3];
              v153 += 4;
              v154 = ((v155 & 7) << 18) | (v157 << 6) | v158 & 0x3F;
              if ( v154 <= 0x3B )
                goto LABEL_349;
            }
          }
          else
          {
            ++v153;
            if ( v154 > 0x3B )
              goto LABEL_350;
LABEL_349:
            v159 = 0x800008500000000LL;
            if ( _bittest64(&v159, v154) )
              break;
          }
LABEL_350:
          if ( v154 - 9 < 5 )
            break;
          if ( v154 < 0x85 )
          {
            v160 = v154 < 0x80;
            v161 = 2;
            goto LABEL_365;
          }
          v162 = v154 >> 8;
          if ( v154 >> 8 > 0x1F )
          {
            if ( v162 == 32 )
            {
              v163 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v154) >> 1;
              goto LABEL_362;
            }
            if ( v162 == 48 )
            {
              v163 = v154 == 12288;
              goto LABEL_362;
            }
          }
          else
          {
            if ( !v162 )
            {
              v163 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v154);
              goto LABEL_362;
            }
            if ( v162 == 22 )
            {
              v163 = v154 == 5760;
LABEL_362:
              if ( (v163 & 1) != 0 )
                break;
            }
          }
          v164 = 2;
          if ( v154 >= 0x800 )
          {
            v160 = v154 < 0x10000;
            v161 = 4;
LABEL_365:
            v164 = v161 - v160;
          }
          v152 += v164;
          if ( v153 != (char *)v211 )
            continue;
          break;
        }
        if ( !v152 )
          goto LABEL_371;
        if ( v152 < v151 )
        {
          if ( *(char *)(v150 + v152) > -65 )
          {
            v151 = v152;
            goto LABEL_372;
          }
LABEL_408:
          v242 = 1;
          sub_1416C2F60(v150, v151, 0, v152, (__int64)&off_14178B500);
        }
        if ( v152 != v151 )
          goto LABEL_408;
LABEL_372:
        v242 = 1;
        v165 = sub_14033BC10(v150, v151);
        v65 = v235;
        if ( v166 )
        {
          v219 = v213;
          v220 = v214;
          v242 = 1;
          v167 = sub_14033BC10(v165, v166);
          *(_QWORD *)&v169 = v167;
          if ( v167 )
          {
            *((_QWORD *)&v169 + 1) = v168;
            if ( v168 )
            {
              v237 = v169;
              v242 = 1;
              if ( (unsigned __int8)sub_1407BE9C0(asc_14178B58A, 3, v167, v168) )
              {
                if ( v169 < 0 )
                {
                  v171 = 0;
                }
                else
                {
                  nullsub_1(v170);
                  v171 = 1;
                  v172 = sub_140001650(*((_QWORD *)&v169 + 1), 1);
                  if ( v172 )
                  {
                    v17 = (__int64 *)v172;
                    sub_141684120(v172, v169, *((_QWORD *)&v169 + 1));
                    v215 = *((const char **)&v169 + 1);
                    v216.m128i_i64[0] = (__int64)v17;
                    v216.m128i_i64[1] = *((_QWORD *)&v169 + 1);
                    goto LABEL_385;
                  }
                  v17 = *((__int64 **)&v169 + 1);
                }
                v242 = 1;
                sub_1416C2D4B(v171, v17);
              }
              v178 = (const char *)&v219;
              v179.m128i_i64[0] = (__int64)sub_14041F680;
              v179.m128i_i64[1] = (__int64)&v237;
              v180.m128i_i64[0] = (__int64)sub_14041F680;
              v242 = 1;
              sub_14149C0F0(&v215, &unk_14178B58D, &v178);
LABEL_385:
              v173 = *(_QWORD *)&v232[16];
              if ( *(_QWORD *)&v232[16] == *(_QWORD *)v232 )
                sub_141689AB0(v232);
              v174 = *(_QWORD *)&v232[8];
              v175 = 3 * v173;
              *(_QWORD *)(*(_QWORD *)&v232[8] + 8 * v175 + 16) = v216.m128i_i64[1];
              *(__m128i *)(v174 + 8 * v175) = _mm_loadu_si128((const __m128i *)&v215);
              *(_QWORD *)&v232[16] = v173 + 1;
            }
          }
          v65 = v235;
        }
      }
    }
  }
  v189 = *(const char **)&v232[16];
  v188 = _mm_loadu_si128((const __m128i *)v232);
  v242 = 0;
  sub_14075F0E0(&v178, &v188);
  if ( v235 )
    sub_140001660(v236, v235, 1);
  if ( v223 )
    sub_140001660(v224, v223, 1);
  v39 = v178;
  v38 = v179.m128i_u64[1];
  v37 = v179.m128i_i64[0];
LABEL_75:
  v188.m128i_i64[0] = v37;
  v189 = v39;
  v188.m128i_i64[1] = v37;
  v190 = v37 + 24 * v38;
  v40 = v231;
  if ( v38 > v229 - v231 )
  {
    sub_141688D30((unsigned int)&v229, v231, v38, 8, 24);
    v40 = v231;
LABEL_77:
    sub_141684120(v230 + 24 * v40, v37, 24 * v38);
  }
  else if ( v38 )
  {
    goto LABEL_77;
  }
  v231 = v38 + v40;
  if ( v39 )
    sub_140001660(v37, 24LL * (_QWORD)v39, 8);
  v14 = v241;
  if ( v241 )
  {
    v15 = v227;
LABEL_82:
    sub_140001660(v15, v14, 1);
  }
LABEL_83:
  v243 = 1;
  sub_14147B720(&v188, aNetsh, 5);
  v205 = 0x8000000;
  sub_14147B600(&v188, aWinhttp, 7);
  sub_14147B600(&v188, aShow, 4);
  sub_14147B600(&v188, aProxy_3, 5);
  sub_141481530(&v178, &v188);
  v41 = v178;
  if ( v178 == (const char *)-1LL )
  {
    sub_1401DD260(v179.m128i_i64[0]);
    v243 = 1;
    sub_1406CC740(&v188);
    goto LABEL_131;
  }
  v42 = _mm_loadu_si128(&v179);
  v43 = _mm_loadu_si128(&v180);
  v218 = _mm_loadu_si128(&v181);
  v217 = v43;
  v216 = v42;
  v215 = v178;
  sub_1406CC740(&v188);
  if ( v218.m128i_i32[2] )
  {
    if ( v41 )
      sub_140001660(v216.m128i_i64[0], v41, 1);
    v44 = v217.m128i_i64[0];
    if ( v217.m128i_i64[0] )
    {
      v45 = v217.m128i_i64[1];
      goto LABEL_130;
    }
    goto LABEL_131;
  }
  v46 = v216.m128i_i64[0];
  sub_141499F00(&v237, v216.m128i_i64[0], v216.m128i_i64[1]);
  v240 = (const char *)v46;
  v188.m128i_i64[0] = 0;
  v188.m128i_i64[1] = v238;
  v241 = *((_QWORD *)&v237 + 1);
  v189 = *((const char **)&v237 + 1);
  v190 = v238;
  v191 = nullptr;
  v192 = v238;
  v193 = 0xA0000000ALL;
  LOBYTE(v194) = 1;
  LOWORD(v195) = 0;
  while ( 2 )
  {
    v48 = (__int64)v189;
    sub_1407BC790(&v178, &v189);
    if ( (_DWORD)v178 == 1 )
    {
      v49 = v188.m128i_i64[0];
      v188.m128i_i64[0] = v179.m128i_i64[1];
      v50 = v179.m128i_i64[1] - v49;
      v48 += v49;
      if ( v179.m128i_i64[1] == v49 )
        goto LABEL_106;
LABEL_100:
      if ( *(_BYTE *)(v48 + v50 - 1) == 10 )
      {
        if ( v50 == 1 )
        {
          v50 = 0;
        }
        else if ( *(_BYTE *)(v48 + v50 - 2) == 13 )
        {
          v50 -= 2;
        }
        else
        {
          --v50;
        }
      }
    }
    else
    {
      if ( BYTE1(v195)
        || (BYTE1(v195) = 1,
            v48 = v188.m128i_i64[0],
            v50 = v188.m128i_i64[1] - v188.m128i_i64[0],
            ((unsigned __int8)v195 | (v188.m128i_i64[1] != v188.m128i_i64[0])) != 1) )
      {
LABEL_115:
        v58 = -1;
        goto LABEL_116;
      }
      v48 = (__int64)&v189[v188.m128i_i64[0]];
      if ( v50 )
        goto LABEL_100;
    }
LABEL_106:
    v51 = sub_14033BC10(v48, v50);
    if ( v52 < 0xC )
      goto LABEL_93;
    if ( *(_QWORD *)v51 ^ 0x65532079786F7250LL | *(unsigned int *)(v51 + 8) ^ 0x72657672LL )
      goto LABEL_93;
    v178 = (const char *)v51;
    v179 = (__m128i)v52;
    v180.m128i_i64[0] = v52;
    v181.m128i_i8[0] = 1;
    v180.m128i_i64[1] = 0x3A0000003ALL;
    v48 = v52;
    v53 = v51;
    sub_1407BC790(v232, &v178);
    if ( !v232[0] )
      goto LABEL_93;
    v54 = sub_14033BC10(v53 + *(_QWORD *)&v232[16], v48 - *(_QWORD *)&v232[16]);
    if ( !v54 || !v55 )
      goto LABEL_93;
    if ( v55 == 6 )
    {
      v56 = _byteswap_ulong(*(_DWORD *)v54);
      v57 = 678326126;
      if ( v56 != 678326126
        || (v56 = (unsigned __int16)__ROL2__(*(_WORD *)(v54 + 4), 8),
            v57 = 25897,
            v47 = 0,
            (unsigned __int16)v56 != 25897) )
      {
        v47 = 2 * (v56 >= v57) - 1;
      }
      if ( !v47 )
      {
LABEL_93:
        if ( BYTE1(v195) == 1 )
          goto LABEL_115;
        continue;
      }
    }
    break;
  }
  v79 = v54;
  v48 = v55;
  sub_140388B60((unsigned int)&v178, v55, 0, 1, 1);
  v58 = v179.m128i_i64[0];
  if ( (_DWORD)v178 == 1 )
    sub_1416C2D4B(v179.m128i_i64[0], v179.m128i_i64[1]);
  v239 = (__int64 *)v179.m128i_i64[1];
  sub_141684120(v179.m128i_i64[1], v79, v48);
LABEL_116:
  if ( (__int64)v237 > 0 )
    sub_140001660(v241, v237, 1);
  if ( v41 )
    sub_140001660(v240, v41, 1);
  if ( v217.m128i_i64[0] )
    sub_140001660(v217.m128i_i64[1], v217.m128i_i64[0], 1);
  if ( v58 != -1 )
  {
    v241 = v58;
    sub_14075BAD0((__int64)&v178, (__int64)v239, v48);
    v59 = v178;
    v60 = v179;
    v61 = 24 * v179.m128i_i64[1];
    v188.m128i_i64[0] = v179.m128i_i64[0];
    v189 = v178;
    v188.m128i_i64[1] = v179.m128i_i64[0];
    v190 = v179.m128i_i64[0] + 24 * v179.m128i_i64[1];
    v62 = v231;
    if ( v179.m128i_i64[1] > (unsigned __int64)(v229 - v231) )
    {
      sub_141688D30((unsigned int)&v229, v231, v179.m128i_i32[2], 8, 24);
      v62 = v231;
      v63 = v241;
LABEL_125:
      sub_141684120(v230 + 24 * v62, v60.m128i_i64[0], v61);
    }
    else
    {
      v63 = v241;
      if ( v179.m128i_i64[1] )
        goto LABEL_125;
    }
    v231 = v60.m128i_i64[1] + v62;
    if ( v59 )
      sub_140001660(v60.m128i_i64[0], 24LL * (_QWORD)v59, 8);
    if ( v63 )
    {
      v45 = (__int64)v239;
      v44 = v63;
LABEL_130:
      sub_140001660(v45, v44, 1);
    }
  }
LABEL_131:
  v243 = 0;
  sub_14075F0E0(v222, &v229);
  return v222;
}