// module: codexmate_lib/core/sessions
// addr: 0x140749420
// name: delete_sessions_0
// win 1.2.1 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::sessions::delete_sessions | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall delete_sessions_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r15
  const __m128i *v29; // r12
  int v30; // r14d
  unsigned __int64 v31; // rsi
  __m128i v32; // xmm10
  const __m128i *v35; // r13
  int v36; // eax
  const __m128i *v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rax
  __m128i v54; // xmm0
  __int64 v57; // rdi
  __int64 v58; // r8
  __m128i v59; // xmm0
  __m128i v60; // xmm9
  const __m128i *v61; // r15
  const __m128i *v62; // r13
  __int64 v63; // r12
  __int64 v64; // rdi
  const __m128i *v65; // r13
  __m128i *v67; // rsi
  __m128i v69; // xmm0
  __int64 v71; // rcx
  __m128i *v72; // rdi
  __m128i v73; // xmm0
  __int64 v74; // rsi
  __int64 v75; // r15
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  __m128i *v81; // rdi
  __m128i v82; // xmm0
  __int64 v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // r15
  __m128i *v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // rdi
  __int64 v93; // rax
  __m128i v94; // rdi
  __m128i v95; // xmm0
  __int64 v96; // rax
  char v97; // r12
  __int64 v98; // rbx
  unsigned __int64 v99; // rax
  __int64 v100; // r13
  __m128i v101; // xmm0
  __m128i v102; // xmm10
  __int64 i; // rdx
  unsigned __int64 v104; // rax
  __m128i v106; // xmm11
  int v108; // eax
  bool v109; // zf
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // rbx
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // r9
  __m128i v117; // xmm0
  __int64 v118; // rdi
  int v119; // r15d
  const __m128i *v120; // r14
  __int64 v121; // rbx
  __m128i si128; // xmm0
  __int64 v125; // rcx
  __int64 v126; // rsi
  __int64 v127; // r13
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 v130; // r12
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // rbx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // r9
  __int64 v143; // rsi
  __int128 v144; // rax
  __m128i v145; // xmm0
  __int64 v146; // rcx
  __int64 v148; // rdi
  __int64 v149; // rsi
  __int64 v150; // rbx
  const __m128i *v151; // r14
  __m128i v153; // xmm0
  __int64 v154; // rax
  __int64 v155; // rdx
  unsigned __int64 v156; // rax
  __int64 v157; // rdi
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rsi
  __int64 j; // r14
  _BYTE v163[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v164[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v165[24]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v166[24]; // [rsp+78h] [rbp-8h] BYREF
  const __m128i *v167[4]; // [rsp+90h] [rbp+10h] BYREF
  char v168[16]; // [rsp+B0h] [rbp+30h] BYREF
  _OWORD v169[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v170; // [rsp+E0h] [rbp+60h]
  __int64 v171; // [rsp+E8h] [rbp+68h]
  __int128 v172; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v173; // [rsp+100h] [rbp+80h]
  __int64 v174; // [rsp+110h] [rbp+90h]
  __int64 v175; // [rsp+118h] [rbp+98h]
  __m128i v176; // [rsp+120h] [rbp+A0h]
  __m256i v177; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v178; // [rsp+150h] [rbp+D0h]
  __int64 v179; // [rsp+158h] [rbp+D8h]
  __int64 v180; // [rsp+160h] [rbp+E0h]
  __int64 v181; // [rsp+168h] [rbp+E8h]
  __m128i v182; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v183; // [rsp+180h] [rbp+100h]
  __int128 v184; // [rsp+190h] [rbp+110h]
  __int128 v185; // [rsp+1A0h] [rbp+120h]
  __int64 v186; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v187; // [rsp+1B8h] [rbp+138h]
  __int64 v188; // [rsp+1C0h] [rbp+140h]
  char v189; // [rsp+1C8h] [rbp+148h]
  __m128i v190; // [rsp+1D0h] [rbp+150h] BYREF
  __m256i v191; // [rsp+1E0h] [rbp+160h]
  __int128 v192; // [rsp+200h] [rbp+180h]
  __int128 v193; // [rsp+210h] [rbp+190h]
  __int128 v194; // [rsp+220h] [rbp+1A0h]
  __int128 v195; // [rsp+230h] [rbp+1B0h]
  __int64 **v196; // [rsp+240h] [rbp+1C0h] BYREF
  void *v197; // [rsp+248h] [rbp+1C8h]
  unsigned __int64 v198; // [rsp+250h] [rbp+1D0h]
  __int64 v199; // [rsp+258h] [rbp+1D8h]
  __int64 v200; // [rsp+260h] [rbp+1E0h]
  __m128i *v201; // [rsp+268h] [rbp+1E8h] BYREF
  __int128 v202; // [rsp+270h] [rbp+1F0h]
  __int64 v203; // [rsp+280h] [rbp+200h]
  __int64 v204; // [rsp+288h] [rbp+208h]
  __m128i v205; // [rsp+290h] [rbp+210h] BYREF
  __int128 v206; // [rsp+2A0h] [rbp+220h]
  __int128 v207; // [rsp+2B0h] [rbp+230h]
  __int128 v208; // [rsp+2C0h] [rbp+240h]
  __int64 *v209; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v210; // [rsp+2E0h] [rbp+260h]
  __int64 v211; // [rsp+2E8h] [rbp+268h]
  unsigned __int64 v212; // [rsp+2F0h] [rbp+270h]
  const __m128i *v213; // [rsp+2F8h] [rbp+278h]
  __m128i v214; // [rsp+300h] [rbp+280h] BYREF
  __m256i v215; // [rsp+310h] [rbp+290h] BYREF
  __int128 v216; // [rsp+330h] [rbp+2B0h]
  __int128 v217; // [rsp+340h] [rbp+2C0h]
  __int128 v218; // [rsp+350h] [rbp+2D0h]
  __int128 v219; // [rsp+360h] [rbp+2E0h]
  __m128i v220; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v221; // [rsp+380h] [rbp+300h]
  const __m128i *v222; // [rsp+388h] [rbp+308h]
  char v223; // [rsp+397h] [rbp+317h] BYREF
  __int64 v224; // [rsp+398h] [rbp+318h]
  char v225; // [rsp+3A4h] [rbp+324h]
  char v226; // [rsp+3A5h] [rbp+325h]
  char v227; // [rsp+3A6h] [rbp+326h]
  char v228; // [rsp+3A7h] [rbp+327h]
  __int64 v229; // [rsp+3A8h] [rbp+328h]

  v229 = -2;
  v203 = a3;
  if ( a4 )
  {
    v179 = a1;
    v6 = sub_141470CD0(a1, a2);
    if ( *(_BYTE *)(v6 + 16) == 1 )
    {
      v8 = *(_QWORD *)v6;
      v9 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v161 = v6;
      v8 = sub_141486EF0();
      v6 = v161;
      *(_QWORD *)v161 = v8;
      *(_QWORD *)(v161 + 8) = v9;
      *(_BYTE *)(v161 + 16) = 1;
    }
    *(_QWORD *)v6 = v8 + 1;
    *(_OWORD *)v215.m256i_i8 = *(&off_141786750 + 1);
    v214 = (__m128i)off_141786750;
    v215.m256i_i64[2] = v8;
    v215.m256i_i64[3] = v9;
    LOBYTE(v7) = 1;
    sub_1416B3A90(&v214, a4, &v215.m256i_u64[2], v7);
    v178 = v203 + 24 * a4;
    v10 = 0;
    do
    {
      sub_140475960(&v214, *(_QWORD *)(v203 + 24 * v10 + 8), *(_QWORD *)(v203 + 24 * v10 + 16));
      ++v10;
    }
    while ( v10 != a4 );
    v11 = _mm_load_si128(&v214);
    v177 = v215;
    v176 = v11;
    sub_14074CFA0(v167);
    v14 = sub_141470CD0(v13, v12);
    v15 = v14;
    if ( *(_BYTE *)(v14 + 16) == 1 )
    {
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v16 = sub_141486EF0();
      *(_QWORD *)v15 = v16;
      *(_QWORD *)(v15 + 8) = v17;
      *(_BYTE *)(v15 + 16) = 1;
    }
    *(_QWORD *)v15 = v16 + 1;
    v173 = *(&off_141786750 + 1);
    v172 = off_141786750;
    v174 = v16;
    v175 = v17;
    v18 = sub_141470CD0(v16 + 1, v17);
    v19 = v18;
    if ( *(_BYTE *)(v18 + 16) == 1 )
    {
      v20 = *(_QWORD *)v18;
      v21 = *(_QWORD *)(v19 + 8);
    }
    else
    {
      v20 = sub_141486EF0();
      *(_QWORD *)v19 = v20;
      *(_QWORD *)(v19 + 8) = v21;
      *(_BYTE *)(v19 + 16) = 1;
    }
    *(_QWORD *)v19 = v20 + 1;
    v169[1] = *(&off_141786750 + 1);
    v169[0] = off_141786750;
    v170 = v20;
    v171 = v21;
    if ( *(_QWORD *)(a2 + 960) == -1 )
    {
      sub_140713CC0(&v186, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v210 = a2;
      v24 = v187;
      v22 = v188;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 976);
      if ( v22 < 0 )
      {
        v23 = 0;
        goto LABEL_13;
      }
      if ( v22 )
      {
        v25 = *(_QWORD *)(a2 + 968);
        nullsub_1(v20 + 1);
        v23 = 1;
        v26 = sub_140001650(v22, 1);
        if ( !v26 )
LABEL_13:
          sub_1416C2D4B(v23, v22);
        v24 = v26;
        v186 = v22;
        v187 = v26;
        sub_141684120(v26, v25, v22);
        v188 = v22;
      }
      else
      {
        v186 = 0;
        v187 = 1;
        v188 = 0;
        v24 = 1;
      }
      v210 = a2;
      v189 = *(_BYTE *)(a2 + 984);
    }
    sub_141486710(&v214, v24, v22);
    if ( v214.m128i_i32[0] == 2 )
    {
      sub_1401DD260(v214.m128i_i64[1]);
      v27 = v177.m256i_i64[1];
      goto LABEL_23;
    }
    sub_140748E40((__int64)&v190, v24, v22, 0);
    if ( BYTE8(v195) == 0xFF )
    {
      v218 = v194;
      v217 = v193;
      v117 = _mm_loadu_si128(&v190);
      v216 = v192;
      v215 = v191;
      v214 = v117;
      v211 = v177.m256i_i64[1];
      if ( !v177.m256i_i64[1] )
      {
LABEL_147:
        sub_1406CDA20(&v214);
        goto LABEL_196;
      }
      v118 = v176.m128i_i64[0];
      v119 = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v176.m128i_i64[0]));
      v120 = (const __m128i *)(v176.m128i_i64[0] + 16);
      v121 = v211;
      while ( 1 )
      {
        if ( !(_WORD)v119 )
        {
          do
          {
            si128 = _mm_load_si128(v120);
            v118 -= 256;
            ++v120;
            v119 = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !v119 );
        }
        _EAX = v119;
        __asm { tzcnt   ecx, eax }
        v119 &= v119 - 1;
        v125 = (unsigned int)(16 * _ECX);
        --v121;
        v126 = *(_QWORD *)(v118 - v125 - 8);
        if ( v126 < 0 )
          break;
        if ( v126 )
        {
          v127 = *(_QWORD *)(v118 - v125 - 16);
          nullsub_1(v125);
          v128 = 1;
          v129 = sub_140001650(v126, 1);
          if ( !v129 )
          {
            v224 = v126;
LABEL_149:
            sub_1416C2D4B(v128, v224);
          }
          v130 = v129;
          sub_141684120(v129, v127, v126);
          v131 = v130;
        }
        else
        {
          v131 = 1;
        }
        v205.m128i_i64[0] = v126;
        v224 = v131;
        v205.m128i_i64[1] = v131;
        *(_QWORD *)&v206 = v126;
        v182.m128i_i64[0] = (__int64)&v214;
        v182.m128i_i64[1] = (__int64)sub_140B036A0;
        v225 = 1;
        sub_14149C0F0(v163, &unk_14178ABAA, &v182);
        v225 = 0;
        sub_140470E80(&v182, (__int64)v169, &v205, (__int64)v163);
        if ( v182.m128i_i64[0] != -1 && v182.m128i_i64[0] )
          sub_140001660(v182.m128i_i64[1], v182.m128i_i64[0], 1);
        if ( !v121 )
          goto LABEL_147;
      }
      v128 = 0;
      goto LABEL_149;
    }
    v219 = v195;
    v218 = v194;
    v217 = v193;
    v216 = v192;
    v215 = v191;
    v214 = v190;
    v63 = v176.m128i_i64[0];
    v64 = v177.m256i_i64[1];
    v65 = (const __m128i *)(v176.m128i_i64[0] + 16);
    _R14D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v176.m128i_i64[0]));
    v67 = &v214;
    v211 = v177.m256i_i64[1];
    while ( v64-- != 0 )
    {
      if ( !(_WORD)_R14D )
      {
        do
        {
          v69 = _mm_load_si128(v65);
          v63 -= 256;
          ++v65;
          _R14D = _mm_movemask_epi8(v69) ^ 0xFFFF;
        }
        while ( !_R14D );
      }
      __asm { tzcnt   eax, r14d }
      v209 = (__int64 *)(v63 - (unsigned int)(16 * _EAX) - 16);
      v196 = &v209;
      v197 = &unk_14178AA40;
      sub_1406C19D0((unsigned int)&v182, (_DWORD)v67, (unsigned int)aDeleteFromThre, 82, (__int64)&v196, 1);
      _R14D &= _R14D - 1;
      v224 = v64;
      if ( v182.m128i_i64[0] == -1 )
      {
        v196 = &v209;
        v197 = &unk_14178AA40;
        sub_1406C19D0((unsigned int)&v182, (_DWORD)v67, (unsigned int)aDeleteFromThre_0, 33, (__int64)&v196, 1);
        if ( v182.m128i_i64[0] != -1 )
        {
          v81 = v67;
          v82 = _mm_loadu_si128(&v182);
          v208 = v185;
          v207 = v184;
          v206 = v183;
          v205 = v82;
          v83 = v209[1];
          if ( v83 < 0 )
          {
            v133 = 0;
            goto LABEL_154;
          }
          if ( v83 )
          {
            v84 = *v209;
            nullsub_1(v80);
            v85 = sub_140001650(v83, 1);
            if ( !v85 )
            {
              v222 = (const __m128i *)v83;
              v133 = 1;
LABEL_154:
              sub_1416C2D4B(v133, v222);
            }
            v86 = v85;
            sub_141684120(v85, v84, v83);
          }
          else
          {
            v86 = 1;
          }
          v220.m128i_i64[0] = v83;
          v222 = (const __m128i *)v86;
          v220.m128i_i64[1] = v86;
          v221 = v83;
          v201 = &v205;
          *(_QWORD *)&v202 = sub_140FB8910;
          v227 = 1;
          sub_14149C0F0(v164, &unk_14178AAF1, &v201);
          v227 = 0;
          sub_140470E80(&v201, (__int64)v169, &v220, (__int64)v164);
          v67 = v81;
          if ( v201 != (__m128i *)-1LL && v201 )
            sub_140001660(v202, v201, 1);
          goto LABEL_81;
        }
        if ( v182.m128i_i64[1] )
        {
          v87 = v67;
          v88 = v209[1];
          if ( v88 < 0 )
          {
            v159 = 0;
            goto LABEL_194;
          }
          if ( v88 )
          {
            v89 = *v209;
            nullsub_1(v80);
            v90 = sub_140001650(v88, 1);
            if ( !v90 )
            {
              v213 = (const __m128i *)v88;
              v159 = 1;
LABEL_194:
              sub_1416C2D4B(v159, v213);
            }
            v91 = v90;
            sub_141684120(v90, v89, v88);
          }
          else
          {
            v91 = 1;
          }
          v205.m128i_i64[0] = v88;
          v213 = (const __m128i *)v91;
          v205.m128i_i64[1] = v91;
          *(_QWORD *)&v206 = v88;
          sub_140474440(&v172, &v205);
          v67 = v87;
          v64 = v224;
        }
      }
      else
      {
        v72 = v67;
        v73 = _mm_loadu_si128(&v182);
        v208 = v185;
        v207 = v184;
        v206 = v183;
        v205 = v73;
        v74 = v209[1];
        if ( v74 < 0 )
        {
          v76 = 0;
          goto LABEL_133;
        }
        if ( v74 )
        {
          v75 = *v209;
          nullsub_1(v71);
          v76 = 1;
          v77 = sub_140001650(v74, 1);
          if ( !v77 )
          {
            v212 = v74;
LABEL_133:
            sub_1416C2D4B(v76, v212);
          }
          v78 = v77;
          sub_141684120(v77, v75, v74);
          v79 = v78;
        }
        else
        {
          v79 = 1;
        }
        v220.m128i_i64[0] = v74;
        v212 = v79;
        v220.m128i_i64[1] = v79;
        v221 = v74;
        v201 = &v205;
        *(_QWORD *)&v202 = sub_140FB8910;
        v228 = 1;
        sub_14149C0F0(v165, &unk_14178AAB2, &v201);
        v228 = 0;
        sub_140470E80(&v201, (__int64)v169, &v220, (__int64)v165);
        v67 = v72;
        if ( v201 != (__m128i *)-1LL && v201 )
          sub_140001660(v202, v201, 1);
LABEL_81:
        sub_1406CBAD0(&v205);
        v64 = v224;
      }
    }
    sub_1406CB500(&v214);
LABEL_196:
    v27 = v211;
LABEL_23:
    v28 = v176.m128i_i64[0];
    v29 = (const __m128i *)(v176.m128i_i64[0] + 16);
    v30 = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v176.m128i_i64[0]));
    v213 = v167[3];
    v222 = v167[0];
    v212 = (unsigned __int64)v167[1];
    v211 = v27;
    v224 = v27;
    v200 = v176.m128i_i64[0];
LABEL_50:
    while ( v224 )
    {
      if ( !(_WORD)v30 )
      {
        do
        {
          v54 = _mm_load_si128(v29);
          v28 -= 256;
          ++v29;
          v30 = _mm_movemask_epi8(v54) ^ 0xFFFF;
        }
        while ( !v30 );
      }
      _EAX = v30;
      v30 &= v30 - 1;
      --v224;
      if ( v213 )
      {
        __asm { tzcnt   eax, eax }
        v57 = v28 - (unsigned int)(16 * _EAX);
        v58 = *(_QWORD *)(v57 - 8);
        v198 = *(_QWORD *)(v57 - 16);
        v204 = v58;
        v39 = sub_1403795A0(v168, v198, v58);
        _RAX = v39 >> 57;
        v59 = _mm_cvtsi32_si128(v39 >> 57);
        v60 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v59, v59), 0), 68);
        v38 = 0;
        v37 = v222;
        while ( 1 )
        {
          v31 = v212 & v39;
          v32 = _mm_loadu_si128((const __m128i *)((char *)v37 + v31));
          _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v32, v60));
          if ( _EBX )
            break;
LABEL_29:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v32, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
            goto LABEL_50;
          v39 = v38 + v31 + 16;
          v38 += 16;
        }
        v199 = v38;
        while ( 1 )
        {
          __asm { tzcnt   eax, ebx }
          if ( v204 == v37[-5 * (v212 & (v31 + _RAX)) - 4].m128i_i64[0] )
          {
            v35 = &v37[-5 * (v212 & (v31 + _RAX))];
            v36 = sub_1416847B0(v198, v35[-5].m128i_i64[1], v204);
            v37 = v222;
            if ( !v36 )
              break;
          }
          _RAX = (unsigned int)(_EBX - 1);
          LOWORD(_RAX) = _EBX & (_EBX - 1);
          _EBX = _RAX;
          v38 = v199;
          if ( !(_WORD)_RAX )
            goto LABEL_29;
        }
        if ( v35[-3].m128i_i64[1] != -1 )
        {
          v40 = v35[-2].m128i_i64[0];
          v41 = v35[-2].m128i_i64[1];
          sub_141486710(&v214, v40, v41);
          if ( v214.m128i_i32[0] == 2 )
          {
            sub_1401DD260(v214.m128i_i64[1]);
          }
          else
          {
            v42 = sub_141485EF0(v40, v41);
            if ( v42 )
            {
              v205.m128i_i64[0] = v42;
              v48 = *(_QWORD *)(v57 - 8);
              if ( v48 < 0 )
              {
                v160 = 0;
                goto LABEL_198;
              }
              if ( v48 )
              {
                v49 = *(_QWORD *)(v57 - 16);
                nullsub_1(v43);
                v50 = sub_140001650(v48, 1);
                if ( !v50 )
                {
                  v181 = v48;
                  v160 = 1;
LABEL_198:
                  sub_1416C2D4B(v160, v181);
                }
                v51 = v49;
                v52 = v50;
                sub_141684120(v50, v51, v48);
                v53 = v52;
              }
              else
              {
                v53 = 1;
              }
              v214.m128i_i64[0] = v48;
              v181 = v53;
              v214.m128i_i64[1] = v53;
              v215.m256i_i64[0] = v48;
              v190.m128i_i64[0] = (__int64)&v205;
              v190.m128i_i64[1] = (__int64)sub_141490720;
              v226 = 1;
              sub_14149C0F0(v166, &unk_14178AB89, &v190);
              v226 = 0;
              sub_140470E80(&v190, (__int64)v169, &v214, (__int64)v166);
              if ( v190.m128i_i64[0] != -1 )
              {
                if ( v190.m128i_i64[0] )
                  sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
              }
              sub_1401DD260(v205.m128i_i64[0]);
            }
            else
            {
              v44 = *(_QWORD *)(v57 - 8);
              if ( v44 < 0 )
              {
                v135 = 0;
                goto LABEL_158;
              }
              if ( v44 )
              {
                v45 = *(_QWORD *)(v57 - 16);
                nullsub_1(v43);
                v46 = sub_140001650(v44, 1);
                if ( !v46 )
                {
                  v180 = v44;
                  v135 = 1;
LABEL_158:
                  sub_1416C2D4B(v135, v180);
                }
                v47 = v46;
                sub_141684120(v46, v45, v44);
              }
              else
              {
                v47 = 1;
              }
              v214.m128i_i64[0] = v44;
              v180 = v47;
              v214.m128i_i64[1] = v47;
              v215.m256i_i64[0] = v44;
              sub_140474440(&v172, &v214);
            }
          }
        }
      }
    }
    v61 = *(const __m128i **)(v210 + 104);
    v62 = *(const __m128i **)(v210 + 112);
    sub_141486710(&v214, v61, v62);
    if ( v214.m128i_i32[0] == 2 )
    {
      sub_1401DD260(v214.m128i_i64[1]);
      goto LABEL_170;
    }
    sub_14148D130(&v201, v61, v62);
    if ( v201 != (__m128i *)-1LL )
    {
      v212 = (unsigned __int64)v201;
      v220.m128i_i64[0] = 0;
      v220.m128i_i64[1] = 8;
      v221 = 0;
      v214.m128i_i64[0] = 0;
      v214.m128i_i64[1] = *((_QWORD *)&v202 + 1);
      v204 = v202;
      *(_OWORD *)v215.m256i_i8 = v202;
      v215.m256i_i64[2] = 0;
      v215.m256i_i64[3] = *((_QWORD *)&v202 + 1);
      *(_QWORD *)&v216 = 0xA0000000ALL;
      BYTE8(v216) = 1;
      LOWORD(v217) = 0;
      v222 = v61;
      v213 = v62;
      while ( 1 )
      {
        v92 = v215.m256i_i64[0];
        sub_1407BC790(&v190, &v215);
        if ( v190.m128i_i32[0] != 1 )
          break;
        v93 = v214.m128i_i64[0];
        v214.m128i_i64[0] = v191.m256i_i64[0];
        v94.m128i_i64[1] = v191.m256i_i64[0] - v93;
        v94.m128i_i64[0] = v93 + v92;
        if ( v191.m256i_i64[0] != v93 )
          goto LABEL_98;
LABEL_104:
        v190 = v94;
        *(_OWORD *)v191.m256i_i8 = 0;
        *(__m128i *)&v191.m256i_u64[2] = v94;
        sub_1408A6200(&v205, &v190);
        if ( v205.m128i_i8[0] == -1 )
        {
          sub_1406C9CF0((__int64)&v205);
LABEL_125:
          v112 = v221;
          if ( v221 == v220.m128i_i64[0] )
            sub_141688F50(&v220);
          *(__m128i *)(v220.m128i_i64[1] + 16 * v112) = v94;
          v221 = v112 + 1;
          if ( (BYTE1(v217) & 1) != 0 )
          {
LABEL_128:
            if ( v221 )
            {
              sub_1404408C0((unsigned int)&v214, v220.m128i_i32[2], v221, (unsigned int)&unk_141787CA0, 1);
              v113 = v215.m256i_i64[0];
              v191.m256i_i64[0] = v215.m256i_i64[0];
              v190 = _mm_loadu_si128(&v214);
              v114 = v190.m128i_i64[0];
              if ( v190.m128i_i64[0] == v215.m256i_i64[0] )
              {
                sub_141688D30((unsigned int)&v190, v215.m256i_i32[0], 1, 1, 1);
                v114 = v190.m128i_i64[0];
                v113 = v191.m256i_i64[0];
              }
              v224 = v114;
              v115 = v190.m128i_i64[1];
              *(_BYTE *)(v190.m128i_i64[1] + v113) = 10;
              v116 = v113 + 1;
            }
            else
            {
              v115 = 1;
              v116 = 0;
              v224 = 0;
            }
            v222 = (const __m128i *)v115;
            v136 = sub_14148D5C0(v61, v62, v115, v116);
            if ( v224 )
              sub_140001660(v222, v224, 1);
            if ( v136 )
            {
              v205.m128i_i64[0] = v136;
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v190.m128i_i64[0] = (__int64)&v205;
                v190.m128i_i64[1] = (__int64)sub_141490720;
                v214.m128i_i64[0] = 0;
                v214.m128i_i64[1] = (__int64)aCodexmateLibCo_28;
                *(_OWORD *)v215.m256i_i8 = 0x1Du;
                v215.m256i_i64[2] = (__int64)aSrcCoreSession;
                v215.m256i_i64[3] = 20;
                *(_QWORD *)&v216 = 2;
                *((_QWORD *)&v216 + 1) = aCodexmateLibCo_28;
                *(_QWORD *)&v217 = 29;
                *((_QWORD *)&v217 + 1) = 0x16900000001LL;
                *(_QWORD *)&v218 = &unk_14178AB12;
                *((_QWORD *)&v218 + 1) = &v190;
                sub_1412C36A0(&v223, &v214);
                v136 = v205.m128i_i64[0];
              }
              sub_1401DD260(v136);
            }
            if ( v220.m128i_i64[0] )
              sub_140001660(v220.m128i_i64[1], 16 * v220.m128i_i64[0], 8);
            if ( v212 )
              sub_140001660(v204, v212, 1);
            goto LABEL_170;
          }
        }
        else
        {
          v95 = _mm_loadu_si128(&v205);
          *(_OWORD *)v191.m256i_i8 = v206;
          v190 = v95;
          v96 = sub_141433D50(aId_3, 2, &v190);
          v97 = 1;
          if ( v96 && *(_BYTE *)v96 == 3 && v211 )
          {
            v98 = *(_QWORD *)(v96 + 24);
            v224 = *(_QWORD *)(v96 + 16);
            v99 = sub_1403795A0(&v177.m256i_u64[2], v224, v98);
            v100 = v176.m128i_i64[1];
            v101 = _mm_cvtsi32_si128(v99 >> 57);
            v102 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v101, v101), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v104 = v100 & v99;
              HIDWORD(_RCX) = HIDWORD(v200);
              v106 = _mm_loadu_si128((const __m128i *)(v200 + v104));
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v106, v102));
              if ( _R15D )
                break;
LABEL_114:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v106, (__m128i)-1LL)) )
              {
                v61 = v222;
                v62 = v213;
                goto LABEL_124;
              }
              v99 = i + v104 + 16;
            }
            v198 = v104;
            v199 = i;
            while ( 1 )
            {
              __asm { tzcnt   ecx, r15d }
              _RCX = 16 * (v100 & (v104 + _RCX));
              if ( v98 == *(_QWORD *)(v200 - _RCX - 8)
                && !(unsigned int)sub_1416847B0(v224, *(_QWORD *)(v200 - _RCX - 16), v98) )
              {
                break;
              }
              v108 = _R15D - 1;
              LOWORD(v108) = _R15D & (_R15D - 1);
              v109 = (_WORD)v108 == 0;
              _R15D = v108;
              v104 = v198;
              i = v199;
              if ( v109 )
                goto LABEL_114;
            }
            if ( v98 < 0 )
            {
              v134 = 0;
              goto LABEL_156;
            }
            if ( v98 )
            {
              nullsub_1(_RCX);
              v110 = sub_140001650(v98, 1);
              v61 = v222;
              v62 = v213;
              if ( !v110 )
              {
                v210 = v98;
                v134 = 1;
LABEL_156:
                sub_1416C2D4B(v134, v210);
              }
              v111 = v110;
              sub_141684120(v110, v224, v98);
            }
            else
            {
              v111 = 1;
              v61 = v222;
              v62 = v213;
            }
            v182.m128i_i64[0] = v98;
            v210 = v111;
            v182.m128i_i64[1] = v111;
            *(_QWORD *)&v183 = v98;
            sub_140474440(&v172, &v182);
            v97 = 0;
          }
LABEL_124:
          sub_1400104F0(&v205);
          if ( v97 )
            goto LABEL_125;
          if ( (BYTE1(v217) & 1) != 0 )
            goto LABEL_128;
        }
      }
      if ( BYTE1(v217) )
        goto LABEL_128;
      BYTE1(v217) = 1;
      v94.m128i_i64[1] = v214.m128i_i64[1] - v214.m128i_i64[0];
      if ( ((unsigned __int8)v217 | (v214.m128i_i64[1] != v214.m128i_i64[0])) != 1 )
        goto LABEL_128;
      v94.m128i_i64[0] = v215.m256i_i64[0] + v214.m128i_i64[0];
      if ( !v94.m128i_i64[1] )
        goto LABEL_104;
LABEL_98:
      if ( *(_BYTE *)(v94.m128i_i64[0] + v94.m128i_i64[1] - 1) == 10 )
      {
        if ( v94.m128i_i64[1] == 1 )
        {
          v94.m128i_i64[1] = 0;
        }
        else if ( *(_BYTE *)(v94.m128i_i64[0] + v94.m128i_i64[1] - 2) == 13 )
        {
          v94.m128i_i64[1] -= 2;
        }
        else
        {
          --v94.m128i_i64[1];
        }
      }
      goto LABEL_104;
    }
    v132 = v202;
    v205.m128i_i64[0] = v202;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v190.m128i_i64[0] = (__int64)&v205;
      v190.m128i_i64[1] = (__int64)sub_141490720;
      v214.m128i_i64[0] = 0;
      v214.m128i_i64[1] = (__int64)aCodexmateLibCo_28;
      *(_OWORD *)v215.m256i_i8 = 0x1Du;
      v215.m256i_i64[2] = (__int64)aSrcCoreSession;
      v215.m256i_i64[3] = 20;
      *(_QWORD *)&v216 = 2;
      *((_QWORD *)&v216 + 1) = aCodexmateLibCo_28;
      *(_QWORD *)&v217 = 29;
      *((_QWORD *)&v217 + 1) = 0x16D00000001LL;
      *(_QWORD *)&v218 = &unk_14178AB50;
      *((_QWORD *)&v218 + 1) = &v190;
      sub_1412C36A0(&v223, &v214);
      v132 = v205.m128i_i64[0];
    }
    sub_1401DD260(v132);
LABEL_170:
    v214.m128i_i64[0] = v203;
    v214.m128i_i64[1] = v178;
    v215.m256i_i64[0] = (__int64)v169;
    sub_1403195B0(&v182, &v214);
    v137 = v182.m128i_i64[1];
    v138 = v183;
    v141 = sub_141470CD0(v140, v139);
    v143 = v141;
    if ( *(_BYTE *)(v141 + 16) == 1 )
    {
      v144 = *(_OWORD *)v141;
    }
    else
    {
      *(_QWORD *)&v144 = sub_141486EF0();
      *(_OWORD *)v143 = v144;
      *(_BYTE *)(v143 + 16) = 1;
    }
    *(_QWORD *)v143 = v144 + 1;
    *(_OWORD *)v215.m256i_i8 = *(&off_141786750 + 1);
    v214 = (__m128i)off_141786750;
    *(_OWORD *)&v215.m256i_u64[2] = v144;
    if ( v138 )
    {
      LOBYTE(v142) = 1;
      sub_1416B3A90(&v214, v138, &v215.m256i_u64[2], v142);
      for ( j = 0; j != v138; ++j )
        sub_140475960(&v214, *(_QWORD *)(v137 + 48 * j + 8), *(_QWORD *)(v137 + 48 * j + 16));
    }
    v145 = _mm_load_si128(&v214);
    v191 = v215;
    v190 = v145;
    v214.m128i_i64[0] = v203;
    v214.m128i_i64[1] = v178;
    v215.m256i_i64[0] = (__int64)&v172;
    v215.m256i_i64[1] = (__int64)&v190;
    sub_140313230(&v205, &v214);
    v215.m256i_i64[3] = v183;
    *(__m128i *)&v215.m256i_u64[1] = v182;
    v215.m256i_i64[0] = v206;
    v214 = _mm_loadu_si128(&v205);
    v146 = v179;
    *(__m128i *)(v179 + 8) = v214;
    *(__m256i *)(v146 + 24) = v215;
    *(_QWORD *)v146 = -1;
    if ( v190.m128i_i64[1] && 17 * v190.m128i_i64[1] != -33 )
      sub_140001660(v190.m128i_i64[0] - 16 * v190.m128i_i64[1] - 16, 17 * v190.m128i_i64[1] + 33, 16);
    if ( v186 )
      sub_140001660(v187, v186, 1);
    HIDWORD(_RAX) = (unsigned __int64)sub_14067EB80(v169) >> 32;
    v148 = *((_QWORD *)&v172 + 1);
    if ( *((_QWORD *)&v172 + 1) )
    {
      v149 = *((_QWORD *)&v173 + 1);
      if ( *((_QWORD *)&v173 + 1) )
      {
        v150 = v172;
        v151 = (const __m128i *)(v172 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v172));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v153 = _mm_load_si128(v151);
              v150 -= 384;
              ++v151;
              _R15D = _mm_movemask_epi8(v153) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v154 = -3 * _RAX;
          v155 = *(_QWORD *)(v150 + 8 * v154 - 24);
          if ( v155 )
            sub_140001660(*(_QWORD *)(v150 + 8 * v154 - 16), v155, 1);
          --v149;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v149 );
      }
      v156 = (24 * v148 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v157 = v156 + v148 + 17;
      if ( v157 )
        sub_140001660(v172 - v156, v157, 16);
    }
    sub_14067F6F0(v167);
    if ( v176.m128i_i64[1] && 17 * v176.m128i_i64[1] != -33 )
      sub_140001660(v200 - 16 * v176.m128i_i64[1] - 16, 17 * v176.m128i_i64[1] + 33, 16);
    return v179;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)a1 = -1;
  }
  return a1;
}