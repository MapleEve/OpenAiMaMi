// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404ccab0
// name: converge_router_thread_models_to_catalog
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::converge_router_thread_models_to_catalog | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall converge_router_thread_models_to_catalog(__m128i *a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // r9
  __m128i v14; // kr20_16
  unsigned __int128 v15; // kr30_16
  __int64 v16; // rdi
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __m128i v20; // kr70_16
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // r14
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 *v37; // r14
  _QWORD *v38; // rax
  unsigned __int64 v39; // rax
  __m128i v40; // xmm9
  unsigned __int64 v42; // r14
  unsigned __int64 v44; // rdi
  int v45; // eax
  bool v46; // zf
  __int64 k; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r13
  __int64 v54; // rdi
  unsigned __int64 v55; // r14
  __m128i v56; // xmm0
  __m128i v57; // xmm8
  __int64 j; // rcx
  unsigned __int64 v59; // r14
  __m128i v61; // xmm9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r12
  __int64 v67; // rbx
  __m128i v68; // xmm0
  __m128i v69; // xmm8
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *v73; // rsi
  __int64 v74; // r8
  __int64 v75; // rsi
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  _QWORD *v82; // rdi
  __int64 v83; // r14
  __int64 v84; // r13
  __int64 v85; // rsi
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // r12
  __int64 v88; // r12
  int v89; // eax
  __int64 v90; // rcx
  __m128i *v91; // rax
  __int64 v92; // r14
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  bool v96; // di
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // r9
  __int64 v100; // r10
  __int64 v101; // r11
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rdi
  char v105; // bl
  unsigned __int64 v106; // rbx
  __int64 v107; // rdi
  char v108; // bl
  unsigned __int64 v109; // rbx
  __int64 v110; // rdi
  char v111; // bl
  unsigned __int64 v112; // rbx
  __int64 v113; // rdi
  char v114; // bl
  unsigned __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned __int64 v120; // rsi
  __int64 v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rcx
  __m128i v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm2
  __int64 v128; // rax
  __int64 v129; // rdi
  __int64 v130; // r14
  __int64 v131; // rbx
  __m128i v132; // xmm0
  __int64 v133; // rdi
  int v134; // eax
  __m128i v135; // xmm0
  _QWORD *v136; // rsi
  _QWORD *i; // rdi
  __int64 v138; // rdi
  _QWORD *v139; // r13
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdx
  int v143; // eax
  __int64 v144; // rsi
  __int64 v145; // rdi
  _QWORD *v146; // r14
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rdx
  _QWORD *v150; // rdi
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rdx
  __m128i v154; // xmm0
  _QWORD *v155; // rdi
  __int64 v156; // rdx
  __m128i v157; // xmm0
  __m128i v158; // xmm1
  __m128i v159; // xmm2
  __m128i *v161; // r11
  __int64 v162; // rsi
  _QWORD *v163; // rdi
  __int64 v164; // rdx
  __int64 v165; // rdi
  __int64 v166; // rsi
  _QWORD *v167; // rbx
  __int64 v168; // rdx
  _BYTE v169[24]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v170; // [rsp+50h] [rbp-30h]
  _QWORD *v171; // [rsp+58h] [rbp-28h]
  __int64 v172; // [rsp+60h] [rbp-20h]
  __int64 v173; // [rsp+68h] [rbp-18h]
  _QWORD v174[3]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v175[4]; // [rsp+88h] [rbp+8h] BYREF
  __int128 v176; // [rsp+A8h] [rbp+28h]
  __int64 v177; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v178; // [rsp+C0h] [rbp+40h]
  __m128i v179; // [rsp+D0h] [rbp+50h]
  __m128i v180; // [rsp+E0h] [rbp+60h]
  __m128i v181; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v182; // [rsp+100h] [rbp+80h]
  __m128i v183; // [rsp+110h] [rbp+90h]
  __int128 v184; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v185; // [rsp+130h] [rbp+B0h] BYREF
  __int64 *v186; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v187; // [rsp+150h] [rbp+D0h]
  __int64 v188; // [rsp+158h] [rbp+D8h]
  __int64 v189; // [rsp+160h] [rbp+E0h]
  __int64 v190; // [rsp+168h] [rbp+E8h]
  __int64 v191; // [rsp+170h] [rbp+F0h]
  __int64 v192; // [rsp+178h] [rbp+F8h]
  __int64 v193; // [rsp+180h] [rbp+100h]
  __m128i v194; // [rsp+188h] [rbp+108h] BYREF
  __int128 v195; // [rsp+198h] [rbp+118h]
  __int128 v196; // [rsp+1A8h] [rbp+128h]
  __int128 v197; // [rsp+1B8h] [rbp+138h]
  __int128 v198; // [rsp+1C8h] [rbp+148h]
  __m128i v199; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v200; // [rsp+1E8h] [rbp+168h]
  __m128i v201; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v202; // [rsp+200h] [rbp+180h]
  _QWORD v203[9]; // [rsp+208h] [rbp+188h] BYREF
  __m128i v204; // [rsp+250h] [rbp+1D0h]
  __int64 v205; // [rsp+260h] [rbp+1E0h]
  __int128 v206; // [rsp+268h] [rbp+1E8h]
  __int64 v207; // [rsp+278h] [rbp+1F8h]
  __int64 v208; // [rsp+280h] [rbp+200h]
  __int64 v209; // [rsp+288h] [rbp+208h]
  __int64 v210; // [rsp+290h] [rbp+210h]
  __int64 *v211; // [rsp+298h] [rbp+218h]
  __int64 v212; // [rsp+2A0h] [rbp+220h]
  __int64 v213; // [rsp+2A8h] [rbp+228h]
  __int64 v214; // [rsp+2B0h] [rbp+230h]
  __int64 *v215; // [rsp+2B8h] [rbp+238h]
  __m128i *v216; // [rsp+2C0h] [rbp+240h]
  __int64 v217; // [rsp+2C8h] [rbp+248h]
  __m128i v218; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v219; // [rsp+2E0h] [rbp+260h]
  __m128i v220; // [rsp+2F0h] [rbp+270h] BYREF
  __m128i v221; // [rsp+300h] [rbp+280h]
  __m128i v222; // [rsp+310h] [rbp+290h]
  __m128i v223; // [rsp+320h] [rbp+2A0h]
  __m128i v224; // [rsp+330h] [rbp+2B0h]
  __m128i v225; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v226; // [rsp+350h] [rbp+2D0h]
  unsigned __int8 v227; // [rsp+358h] [rbp+2D8h]
  _DWORD v228[3]; // [rsp+359h] [rbp+2D9h]
  __int64 v229; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v230; // [rsp+370h] [rbp+2F0h]
  unsigned __int64 v231; // [rsp+378h] [rbp+2F8h]
  _BYTE v232[24]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v233; // [rsp+398h] [rbp+318h] BYREF
  __int64 v234; // [rsp+3A8h] [rbp+328h] BYREF
  __int64 v235; // [rsp+3B0h] [rbp+330h]
  _QWORD *v236; // [rsp+3B8h] [rbp+338h]
  __int64 v237; // [rsp+3C0h] [rbp+340h]
  __int64 v238; // [rsp+3C8h] [rbp+348h]
  __int64 v239; // [rsp+3D0h] [rbp+350h]
  __int64 v240; // [rsp+3D8h] [rbp+358h]
  __int64 v241; // [rsp+3E0h] [rbp+360h]
  __int64 v242; // [rsp+3E8h] [rbp+368h]
  __int64 v243; // [rsp+3F0h] [rbp+370h]
  __int64 v244; // [rsp+3F8h] [rbp+378h]
  __m128i *v245; // [rsp+400h] [rbp+380h] BYREF
  unsigned __int64 v246; // [rsp+408h] [rbp+388h]
  __int64 v247; // [rsp+410h] [rbp+390h]
  __int64 v248; // [rsp+418h] [rbp+398h]
  __m128i v249; // [rsp+420h] [rbp+3A0h]
  __m128i v250; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v251; // [rsp+440h] [rbp+3C0h] BYREF
  __m256i v252; // [rsp+450h] [rbp+3D0h]
  __m128i v253; // [rsp+470h] [rbp+3F0h]
  __int128 v254; // [rsp+480h] [rbp+400h]
  __int64 v255; // [rsp+490h] [rbp+410h] BYREF
  __int64 v256; // [rsp+498h] [rbp+418h]
  __int64 v257; // [rsp+4A0h] [rbp+420h]
  unsigned __int64 v258; // [rsp+4A8h] [rbp+428h]
  __int64 v259; // [rsp+4B0h] [rbp+430h]
  __int64 v260; // [rsp+4B8h] [rbp+438h]
  __int64 v261; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 (__fastcall *v262)(); // [rsp+4C8h] [rbp+448h]
  __int64 v263; // [rsp+4D0h] [rbp+450h]
  void *v264; // [rsp+4D8h] [rbp+458h]
  __int64 v265; // [rsp+4E0h] [rbp+460h]
  __int64 *v266; // [rsp+4E8h] [rbp+468h] BYREF
  __m128i v267; // [rsp+4F0h] [rbp+470h]
  __int64 (__fastcall *v268)(_QWORD, _QWORD); // [rsp+500h] [rbp+480h]
  __int64 *v269; // [rsp+508h] [rbp+488h]
  int v270; // [rsp+514h] [rbp+494h]
  __int64 v271; // [rsp+518h] [rbp+498h]
  _BYTE v272[104]; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v273; // [rsp+588h] [rbp+508h]
  __int64 v274; // [rsp+598h] [rbp+518h]
  unsigned __int64 v275; // [rsp+5A0h] [rbp+520h]
  bool v276; // [rsp+5AFh] [rbp+52Fh]
  __int64 v277; // [rsp+5B0h] [rbp+530h]
  __int64 v278; // [rsp+5B8h] [rbp+538h]
  char v279; // [rsp+5C5h] [rbp+545h]
  bool v280; // [rsp+5C6h] [rbp+546h]
  char v281; // [rsp+5C7h] [rbp+547h]
  __int64 v282; // [rsp+5C8h] [rbp+548h]

  v282 = -2;
  v3 = a2;
  sub_1404B8260((__int64)v272, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784));
  v220 = *(__m128i *)&v272[8];
  v221 = *(__m128i *)&v272[24];
  v222 = *(__m128i *)&v272[40];
  v223 = *(__m128i *)&v272[56];
  v224 = *(__m128i *)&v272[72];
  v225 = *(__m128i *)&v272[88];
  if ( *(_QWORD *)v272 == -2 )
  {
    a1[5] = v225;
    a1[4] = v224;
    v5 = _mm_load_si128(&v220);
    v6 = v221;
    v7 = v222;
    a1[3] = v223;
    a1[2] = v7;
    a1[1] = v6;
    *a1 = v5;
    return a1;
  }
  v216 = a1;
  v184 = v273;
  v178 = v220;
  v179 = v221;
  v180 = v222;
  v181 = v223;
  v182 = v224;
  v183 = _mm_load_si128(&v225);
  v271 = *(_QWORD *)v272;
  v177 = *(_QWORD *)v272;
  v203[0] = 0;
  v203[1] = 8;
  memset(&v203[2], 0, 56);
  sub_140712830(v272);
  v170 = *(_QWORD *)&v272[8];
  v206 = *(_OWORD *)v272;
  v172 = *(_QWORD *)v272;
  v213 = *(_QWORD *)&v272[8] + 32LL * *(_QWORD *)&v272[16];
  v173 = v213;
  v246 = 32LL * *(_QWORD *)&v272[16] - 32;
  v236 = (_QWORD *)(*(_QWORD *)&v272[8] + 40LL);
  v8 = *(__int64 **)&v272[8];
  while ( 2 )
  {
    if ( v8 == (__int64 *)v213 )
      goto LABEL_247;
    v211 = v8 + 4;
    v171 = v8 + 4;
    if ( *v8 == -1 )
    {
      if ( (__int64 *)v213 != v211 )
      {
        v246 >>= 5;
        do
        {
          v155 = v236;
          v156 = *(v236 - 1);
          if ( v156 )
            sub_140001660(*v236, v156, 1);
          v236 = v155 + 4;
          --v246;
        }
        while ( v246 );
      }
LABEL_247:
      if ( (_QWORD)v206 )
        sub_140001660(*((_QWORD *)&v206 + 1), 32 * v206, 8);
      a1 = v216;
      v216[4].m128i_i64[1] = v203[8];
      v157 = _mm_loadu_si128((const __m128i *)v203);
      v158 = *(__m128i *)&v203[2];
      v159 = *(__m128i *)&v203[4];
      *(__m128i *)((char *)a1 + 56) = *(__m128i *)&v203[6];
      *(__m128i *)((char *)a1 + 40) = v159;
      *(__m128i *)((char *)a1 + 24) = v158;
      *(__m128i *)((char *)a1 + 8) = v157;
      a1->m128i_i64[0] = -1;
      sub_14043F2A0(&v177);
      return a1;
    }
    v212 = *v8;
    v9 = v8[2];
    v247 = v8[1];
    sub_141486710(v272, v247, v9);
    if ( *(_DWORD *)v272 == 2 )
    {
      v220.m128i_i64[1] = *(_QWORD *)&v272[8];
      v220.m128i_i64[0] = 2;
LABEL_10:
      sub_140018650(&v220.m128i_u64[1]);
      v10 = 8;
      v11 = 0;
      v12 = 0;
      v2 = 0;
      v13 = 0;
      v14 = 0u;
      v15 = 0u;
      goto LABEL_41;
    }
    v220 = *(__m128i *)v272;
    v225.m128i_i64[0] = *(_QWORD *)&v272[80];
    v224 = _mm_loadu_si128((const __m128i *)&v272[64]);
    v223 = *(__m128i *)&v272[48];
    v222 = *(__m128i *)&v272[32];
    v221 = *(__m128i *)&v272[16];
    if ( *(_QWORD *)v272 == 2 )
      goto LABEL_10;
    open_codex_db_for_convergence((__int64)v272, v247, v9);
    v187 = v9;
    v258 = v3;
    v11 = *(_QWORD *)&v272[8];
    v16 = *(_QWORD *)v272;
    v12 = *(_QWORD *)&v272[24];
    v10 = *(_QWORD *)&v272[16];
    v14 = *(__m128i *)&v272[32];
    v15 = *(_OWORD *)&v272[48];
    v17 = *(_QWORD *)&v272[72];
    v13 = *(_QWORD *)&v272[64];
    v250 = *(__m128i *)&v272[80];
    if ( (_BYTE)v273 == 0xFF )
    {
      v185 = _mm_load_si128(&v250);
      goto LABEL_39;
    }
    v260 = v2;
    *(_DWORD *)((char *)v228 + 3) = DWORD1(v273);
    v228[0] = *(_DWORD *)((char *)&v273 + 1);
    v220 = *(__m128i *)v272;
    v221 = *(__m128i *)&v272[16];
    v222 = *(__m128i *)&v272[32];
    v223 = *(__m128i *)&v272[48];
    v224 = *(__m128i *)&v272[64];
    v225 = _mm_load_si128(&v250);
    v226 = *(_QWORD *)&v272[96];
    v227 = v273;
    sub_1404AD7E0(v272, &v220, *(_QWORD *)&v272[56], *(_QWORD *)&v272[64]);
    v18 = *(_QWORD *)&v272[8];
    v16 = *(_QWORD *)v272;
    v19 = *(_QWORD *)&v272[24];
    v10 = *(_QWORD *)&v272[16];
    if ( *(_QWORD *)v272 != -1 )
    {
      v20 = *(__m128i *)&v272[32];
      v11 = *(_QWORD *)&v272[56];
      v258 = *(_QWORD *)&v272[48];
      v260 = *(_QWORD *)&v272[72];
      v248 = *(_QWORD *)&v272[64];
      v185 = _mm_loadu_si128((const __m128i *)&v272[80]);
      v21 = *(_QWORD *)&v272[8];
      goto LABEL_38;
    }
    v175[3] = *(_QWORD *)&v272[8];
    v176 = *(_OWORD *)&v272[16];
    *(_QWORD *)v232 = *(_QWORD *)&v272[24];
    v229 = 0;
    v233 = 0;
    *(_OWORD *)&v232[8] = 0;
    v234 = 0;
    v230 = 8;
    v231 = 0;
    if ( *(_QWORD *)&v272[24] )
    {
      v22 = *(_QWORD *)&v272[24];
      v207 = *(_QWORD *)&v272[8];
      sub_140FB96B0(&v250, &v220, *(&off_14175ED60 + (unsigned int)v227), qword_14175ED78[v227]);
      v23 = v271;
      if ( v250.m128i_i64[0] != -1 )
      {
        v24 = _mm_loadu_si128((const __m128i *)((char *)&v251 + 1));
        *(_OWORD *)&v272[48] = *(_OWORD *)&v252.m256i_u64[2];
        *(_OWORD *)&v272[33] = *(_OWORD *)&v252.m256i_i8[1];
        *(__m128i *)&v272[17] = v24;
        *(__m128i *)v272 = v250;
        v272[16] = v251;
        v266 = (__int64 *)v272;
        v267.m128i_i64[0] = (__int64)sub_140FB8910;
        sub_14149C0F0(&v250, &unk_141757F23, &v266);
        v25 = v250.m128i_i64[1];
        v278 = v250.m128i_i64[0];
        v26 = v251;
        sub_14043D020(v272);
LABEL_18:
        v27 = v231;
        if ( v231 )
        {
          v28 = (_QWORD *)(v230 + 8);
          do
          {
            v29 = *(v28 - 1);
            if ( v29 )
              sub_140001660(*v28, v29, 1);
            v28 += 3;
            --v27;
          }
          while ( v27 );
        }
        if ( v229 )
          sub_140001660(v230, 24 * v229, 8);
        v30 = (_QWORD *)(v10 + 64);
        do
        {
          v31 = *(v30 - 8);
          if ( v31 )
            sub_140001660(*(v30 - 7), v31, 1);
          v32 = *(v30 - 5);
          if ( v32 != -1 && v32 )
            sub_140001660(*(v30 - 4), v32, 1);
          v33 = *(v30 - 1);
          if ( v33 != -1 && v33 )
            sub_140001660(*v30, v33, 1);
          v30 += 10;
          --v22;
        }
        while ( v22 );
        v16 = 10;
        v18 = v207;
        if ( v207 )
          goto LABEL_36;
        goto LABEL_37;
      }
      v255 = 0;
      v256 = 8;
      v257 = 0;
      v215 = (__int64 *)(v10 + 80 * v19);
      v188 = v180.m128i_i64[1];
      v189 = v183.m128i_i64[1];
      v205 = v182.m128i_i64[1];
      v36 = v182.m128i_i64[0];
      v270 = 0;
      v37 = (__int64 *)v10;
      v259 = v10;
      v204 = v179;
      v237 = v182.m128i_i64[0];
LABEL_51:
      v38 = v37;
      v277 = v11;
      v275 = v12;
      v269 = v37;
      if ( v37 == v215 )
      {
LABEL_185:
        sub_140FB96B0(&v250, &v220, aCommit_0, 6);
        if ( v220.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
          sub_1416C2FC0(&off_141758678);
        ++v220.m128i_i64[0];
        v134 = sub_1414BC9F0(v221.m128i_i64[0]);
        --v220.m128i_i64[0];
        if ( !v134 )
        {
          sub_140FB96B0(v272, &v220, aRollback_0, 8);
          if ( *(_QWORD *)v272 != -1 )
            sub_14043D020(v272);
        }
        if ( v250.m128i_i64[0] != -1 )
        {
          v135 = _mm_loadu_si128(&v250);
          *(__m256i *)&v272[32] = v252;
          *(_OWORD *)&v272[16] = v251;
          *(__m128i *)v272 = v135;
          v136 = (_QWORD *)v256;
          for ( i = (_QWORD *)(v256 + 80 * v257); v136 != i; sub_1404A4370(i) )
            i -= 10;
          v266 = (__int64 *)v272;
          v267.m128i_i64[0] = (__int64)sub_140FB8910;
          sub_14149C0F0(v174, &unk_14175C8A6, &v266);
          v278 = v174[0];
          v25 = v174[1];
          v26 = v174[2];
          sub_14043D020(v272);
LABEL_194:
          v138 = v257;
          if ( v257 )
          {
            v139 = (_QWORD *)(v256 + 64);
            do
            {
              v140 = *(v139 - 8);
              if ( v140 )
                sub_140001660(*(v139 - 7), v140, 1);
              v141 = *(v139 - 4);
              if ( v141 )
                sub_140001660(*(v139 - 3), v141, 1);
              v142 = *(v139 - 1);
              if ( v142 )
                sub_140001660(*v139, v142, 1);
              v139 += 10;
              --v138;
            }
            while ( v138 );
          }
          if ( v255 )
            sub_140001660(v256, 80 * v255, 8);
          v11 = v214;
          if ( v269 != v215 )
          {
            if ( v220.m128i_i64[0] >= 0x7FFFFFFFFFFFFFFFuLL )
              sub_1416C2FC0(&off_141758678);
            ++v220.m128i_i64[0];
            v143 = sub_1414BC9F0(v221.m128i_i64[0]);
            --v220.m128i_i64[0];
            if ( !v143 )
            {
              sub_140FB96B0(v272, &v220, aRollback_0, 8);
              if ( *(_QWORD *)v272 != -1 )
                sub_14043D020(v272);
            }
          }
          goto LABEL_18;
        }
        checkpoint_after_committed_write((__int64)&v220, (__int64)aThreadModelCon, 24);
        if ( *(_QWORD *)&v232[16] | v234 )
        {
          v250.m128i_i64[0] = v247;
          v250.m128i_i64[1] = v187;
          *(_QWORD *)v272 = &v250;
          *(_QWORD *)&v272[8] = sub_14148F3A0;
          *(_QWORD *)&v272[16] = v232;
          *(_QWORD *)&v272[24] = sub_1414AC520;
          *(_QWORD *)&v272[32] = &v232[16];
          *(_QWORD *)&v272[40] = sub_1414AC520;
          *(_QWORD *)&v272[48] = &v233;
          *(_QWORD *)&v272[56] = sub_1414AC520;
          *(_QWORD *)&v272[64] = (char *)&v233 + 8;
          *(_QWORD *)&v272[72] = sub_1414AC520;
          *(_QWORD *)&v272[80] = &v234;
          *(_QWORD *)&v272[88] = sub_1414AC520;
          sub_14149C0F0(v169, &unk_14175C8F1, v272);
          sub_1403565C0((unsigned int)aRelayModelCata, 19, (unsigned int)aConverged, 9, (__int64)v169);
          v144 = v10;
          v258 = *(_QWORD *)&v232[16];
          v260 = v234;
        }
        else
        {
          v144 = v10;
          v260 = 0;
          v258 = 0;
        }
        v11 = v229;
        v10 = v230;
        v12 = v231;
        v249 = *(__m128i *)v232;
        v248 = *((_QWORD *)&v233 + 1);
        v214 = v233;
        v145 = v257;
        if ( v257 )
        {
          v146 = (_QWORD *)(v256 + 64);
          do
          {
            v147 = *(v146 - 8);
            if ( v147 )
              sub_140001660(*(v146 - 7), v147, 1);
            v148 = *(v146 - 4);
            if ( v148 )
              sub_140001660(*(v146 - 3), v148, 1);
            v149 = *(v146 - 1);
            if ( v149 )
              sub_140001660(*v146, v149, 1);
            v146 += 10;
            --v145;
          }
          while ( v145 );
        }
        if ( v255 )
          sub_140001660(v256, 80 * v255, 8);
        v150 = (_QWORD *)(v144 + 64);
        do
        {
          v151 = *(v150 - 8);
          if ( v151 )
            sub_140001660(*(v150 - 7), v151, 1);
          v152 = *(v150 - 5);
          if ( v152 != -1 && v152 )
            sub_140001660(*(v150 - 4), v152, 1);
          v153 = *(v150 - 1);
          if ( v153 != -1 && v153 )
            sub_140001660(*v150, v153, 1);
          v150 += 10;
          --v22;
        }
        while ( v22 );
        if ( v207 )
          sub_140001660(v144, 80 * v207, 8);
        sub_14043C900(&v220);
        v2 = v260;
        v13 = v248;
        v14 = v249;
        v15 = __PAIR128__(v214, v258);
LABEL_41:
        v249 = v14;
        v203[3] += v14.m128i_i64[0];
        v203[4] += v14.m128i_i64[1];
        v203[5] += v15;
        v214 = *((_QWORD *)&v15 + 1);
        v203[6] += *((_QWORD *)&v15 + 1);
        v248 = v13;
        v203[7] += v13;
        v203[8] += v2;
        *(_QWORD *)v272 = v10;
        *(_QWORD *)&v272[16] = v11;
        *(_QWORD *)&v272[8] = v10;
        *(_QWORD *)&v272[24] = v10 + 24 * v12;
        v35 = v203[2];
        if ( v12 > v203[0] - v203[2] )
        {
          sub_141688D30((unsigned int)v203, v203[2], v12, 8, 24);
          v35 = v203[2];
LABEL_43:
          sub_141684120(v203[1] + 24 * v35, v10, 24 * v12);
        }
        else if ( v12 )
        {
          goto LABEL_43;
        }
        v203[2] = v12 + v35;
        if ( v11 )
          sub_140001660(v10, 24 * v11, 8);
        v3 = v15;
        if ( v212 )
          sub_140001660(v247, v212, 1);
        v246 -= 32LL;
        v236 += 4;
        v8 = v211;
        continue;
      }
      while ( 1 )
      {
        v37 = v38 + 10;
        if ( v38[7] == -1 )
          goto LABEL_78;
        v278 = (__int64)(v38 + 10);
        v49 = v38[8];
        v50 = v38[9];
        v51 = sub_14033BC10(v49, v50);
        if ( v52 && v188 )
        {
          v53 = v51;
          v54 = v52;
          v55 = sub_1403795A0(&v181, v51, v52);
          v56 = _mm_cvtsi32_si128(v55 >> 57);
          v57 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v56, v56), 0), 68);
          for ( j = 0; ; j += 16 )
          {
            v59 = v204.m128i_i64[1] & v55;
            HIDWORD(_RAX) = v204.m128i_i32[1];
            v61 = _mm_loadu_si128((const __m128i *)(v204.m128i_i64[0] + v59));
            _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v61, v57));
            if ( _ESI )
              break;
LABEL_72:
            v36 = v237;
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v61, (__m128i)-1LL)) )
              goto LABEL_74;
            v55 = j + v59 + 16;
          }
          v265 = j;
          while ( 1 )
          {
            __asm { tzcnt   eax, esi }
            v63 = -3LL * (v204.m128i_i64[1] & (v59 + _RAX));
            if ( v54 == *(_QWORD *)(v204.m128i_i64[0] + 8 * v63 - 8)
              && !(unsigned int)sub_1416847B0(v53, *(_QWORD *)(v204.m128i_i64[0] + 8 * v63 - 16), v54) )
            {
              break;
            }
            _RAX = (unsigned int)(_ESI - 1);
            LOWORD(_RAX) = _ESI & (_ESI - 1);
            _ESI = _RAX;
            j = v265;
            if ( !(_WORD)_RAX )
              goto LABEL_72;
          }
          ++*(_QWORD *)&v232[8];
          v38 = (_QWORD *)v278;
          v23 = v271;
          v10 = v259;
          v36 = v237;
          v11 = v277;
          v269 = (__int64 *)v278;
          if ( (__int64 *)v278 == v215 )
            goto LABEL_185;
        }
        else
        {
LABEL_74:
          v64 = sub_14033BC10(v49, v50);
          v23 = v271;
          v37 = (__int64 *)v278;
          v11 = v277;
          if ( v64 )
          {
            v66 = v65;
            if ( v65 )
            {
              if ( v189 )
              {
                v67 = v64;
                v48 = sub_1403795A0(&v184, v64, v65);
                _RCX = v48 >> 57;
                v68 = _mm_cvtsi32_si128(v48 >> 57);
                v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
                for ( k = 0; ; k += 16 )
                {
                  v39 = v205 & v48;
                  v40 = _mm_loadu_si128((const __m128i *)(v36 + v39));
                  _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v40, v69));
                  if ( _R13D )
                    break;
LABEL_58:
                  _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v40, (__m128i)-1LL));
                  v11 = v277;
                  if ( (_DWORD)_RCX )
                    goto LABEL_78;
                  v48 = k + v39 + 16;
                }
                v265 = k;
                while ( 1 )
                {
                  __asm { tzcnt   ecx, r13d }
                  v42 = v39;
                  _RCX = -(__int64)(v205 & (v39 + _RCX));
                  if ( v66 == *(_QWORD *)(v36 + 48 * _RCX - 32) )
                  {
                    v44 = v36 + 48 * _RCX;
                    if ( !(unsigned int)sub_1416847B0(v67, *(_QWORD *)(v44 - 40), v66) )
                      break;
                  }
                  v45 = _R13D - 1;
                  LOWORD(v45) = _R13D & (_R13D - 1);
                  v46 = (_WORD)v45 == 0;
                  _R13D = v45;
                  v39 = v42;
                  v23 = v271;
                  v37 = (__int64 *)v278;
                  k = v265;
                  if ( v46 )
                    goto LABEL_58;
                }
                sub_14149C500(v272, v44 - 24);
                v23 = v271;
                v10 = v259;
                v37 = (__int64 *)v278;
                v11 = v277;
                goto LABEL_61;
              }
            }
          }
LABEL_78:
          v10 = v259;
          if ( v23 == -1 )
            goto LABEL_62;
          sub_14149C500(v272, &v177);
LABEL_61:
          if ( *(_QWORD *)v272 != -1 )
          {
            v70 = *(_QWORD *)&v272[16];
            v219 = *(_QWORD *)&v272[16];
            v218 = _mm_loadu_si128((const __m128i *)v272);
            v208 = v218.m128i_i64[1];
            v71 = sub_14033BC10(v218.m128i_i64[1], *(_QWORD *)&v272[16]);
            if ( !v72 )
            {
              ++v234;
              v12 = v275;
              goto LABEL_150;
            }
            v278 = (__int64)v37;
            v73 = v269;
            if ( v269[3] == -1 )
            {
              v194.m128i_i64[0] = -1;
              v96 = 1;
LABEL_119:
              v37 = (__int64 *)v278;
              goto LABEL_161;
            }
            if ( (v270 & 1) != 0 )
            {
              ++*((_QWORD *)&v233 + 1);
              v194.m128i_i64[0] = -1;
              v96 = 1;
              LOBYTE(v71) = 1;
              v270 = v71;
              goto LABEL_119;
            }
            v74 = v269[5];
            v265 = v269[4];
            v217 = v74;
            sub_141486710(v272, v265, v74);
            v75 = v274;
            if ( *(_DWORD *)v272 == 2 )
            {
              v250.m128i_i64[1] = *(_QWORD *)&v272[8];
              v250.m128i_i64[0] = 2;
LABEL_121:
              sub_140018650(&v250.m128i_u64[1]);
              v93 = -1;
              v97 = v238;
              v98 = v239;
              v99 = v240;
              v100 = v241;
              v101 = v242;
              v37 = (__int64 *)v278;
              v12 = v275;
LABEL_122:
              *(_QWORD *)&v196 = v97;
              *((_QWORD *)&v196 + 1) = v98;
              *(_QWORD *)&v197 = v192;
              *((_QWORD *)&v197 + 1) = v99;
              *(_QWORD *)&v198 = v100;
              *((_QWORD *)&v198 + 1) = v101;
              v194.m128i_i64[0] = v93;
              v194.m128i_i64[1] = v11;
              v274 = v75;
              *(_QWORD *)&v195 = v75;
              v275 = v12;
              *((_QWORD *)&v195 + 1) = v12;
              v96 = v93 == -1;
              v270 = 0;
              v238 = v97;
              v239 = v98;
              v240 = v99;
              v241 = v100;
              v242 = v101;
              v73 = v269;
              goto LABEL_161;
            }
            v250 = *(__m128i *)v272;
            *(_QWORD *)&v254 = *(_QWORD *)&v272[80];
            v253 = _mm_loadu_si128((const __m128i *)&v272[64]);
            v252 = *(__m256i *)&v272[32];
            v251 = *(_OWORD *)&v272[16];
            if ( *(_QWORD *)v272 == 2 )
              goto LABEL_121;
            find_first_session_meta_line(&v250, v265, v217);
            if ( v250.m128i_i32[0] != -1 )
            {
              *(_OWORD *)&v272[80] = v254;
              *(__m128i *)&v272[64] = v253;
              v77 = _mm_loadu_si128(&v250);
              *(__m256i *)&v272[32] = v252;
              *(_OWORD *)&v272[16] = v251;
              *(__m128i *)v272 = v77;
              v261 = (__int64)v272;
              v262 = (__int64 (__fastcall *)())sub_140B036A0;
              sub_14149C0F0(&v266, &unk_141757D0A, &v261);
              sub_14043E650(v272);
              v11 = (__int64)v266;
              v12 = v267.m128i_u64[1];
              v75 = v267.m128i_i64[0];
LABEL_89:
              v37 = (__int64 *)v278;
              goto LABEL_129;
            }
            if ( v250.m128i_i64[1] == -1 )
            {
              nullsub_1(v76);
              v91 = (__m128i *)sub_140001650(20, 1);
              if ( !v91 )
                sub_1416C2D4B(1, 20);
              v75 = (__int64)v91;
              *v91 = _mm_loadu_si128(&xmmword_141757D6A);
              v91[1].m128i_i32[0] = 1735289203;
              v12 = 20;
              v11 = 20;
              goto LABEL_89;
            }
            v243 = v250.m128i_i64[1];
            *(_OWORD *)v272 = v251;
            *(_OWORD *)&v272[16] = 0;
            v244 = v251;
            *(_OWORD *)&v272[32] = v251;
            v209 = *((_QWORD *)&v251 + 1);
            v281 = 0;
            sub_1408A6200(&v250, v272);
            if ( v250.m128i_i8[0] == -1 )
            {
              v245 = (__m128i *)v250.m128i_i64[1];
              v261 = (__int64)&v245;
              v262 = sub_14142D3F0;
              sub_14149C0F0(v272, &unk_141757D20, &v261);
              v94 = v245->m128i_i64[0];
              v46 = v245->m128i_i64[0] == 1;
              v277 = (__int64)v245;
              if ( v46 )
              {
                sub_140018650(&v245->m128i_u64[1]);
              }
              else if ( !v94 )
              {
                v95 = *(_QWORD *)(v277 + 16);
                if ( v95 )
                  sub_140001660(*(_QWORD *)(v277 + 8), v95, 1);
              }
              sub_140001660(v277, 40, 8);
              v75 = *(_QWORD *)&v272[8];
              v11 = *(_QWORD *)v272;
              v275 = *(_QWORD *)&v272[16];
              v93 = -2;
              goto LABEL_125;
            }
            HIDWORD(v266) = v250.m128i_i32[1];
            *(_DWORD *)((char *)&v266 + 1) = *(__int32 *)((char *)v250.m128i_i32 + 1);
            v267 = _mm_loadu_si128((const __m128i *)&v250.m128i_u64[1]);
            v268 = *((__int64 (__fastcall **)(_QWORD, _QWORD))&v251 + 1);
            LOBYTE(v266) = v250.m128i_i8[0];
            v78 = sub_141433D50(aPayload, 7, &v266);
            if ( !v78 || *(_BYTE *)v78 != 5 || (v79 = *(_QWORD *)(v78 + 8)) == 0 )
            {
              v92 = -1;
              goto LABEL_112;
            }
            v193 = v78 + 8;
            v210 = *(_QWORD *)(v78 + 16);
            while ( 2 )
            {
              v80 = v79 + 360;
              v81 = *(unsigned __int16 *)(v79 + 626);
              v190 = v79;
              v82 = (_QWORD *)(v79 - 8);
              v191 = v81;
              v83 = 3LL * (unsigned int)(8 * v81);
              v84 = -1;
LABEL_98:
              if ( !v83 )
              {
                v84 = v191;
LABEL_107:
                v10 = v259;
                v75 = v274;
                if ( v210 )
                {
                  --v210;
                  v79 = *(_QWORD *)(v190 + 8 * v84 + 632);
                  continue;
                }
                v92 = -1;
LABEL_184:
                v11 = v277;
                goto LABEL_112;
              }
              break;
            }
            v85 = v80 + 24;
            v86 = *(_QWORD *)(v80 + 16);
            v87 = v86 - 5;
            if ( v86 >= 5 )
              v86 = 5;
            v88 = -(__int64)v87;
            v89 = sub_1416847B0(aModel_1, *(_QWORD *)(v80 + 8), v86);
            if ( v89 )
              v88 = v89;
            LOBYTE(v90) = (v88 > 0) - (v88 < 0);
            v82 += 4;
            ++v84;
            v83 -= 24;
            v80 = v85;
            if ( (_BYTE)v90 == 1 )
              goto LABEL_98;
            if ( (_BYTE)v90 )
              goto LABEL_107;
            v92 = -1;
            v10 = v259;
            v75 = v274;
            if ( *((_BYTE *)v82 - 24) != 3 )
              goto LABEL_184;
            v11 = v277;
            if ( *v82 != v70 || (unsigned int)sub_1416847B0(*(v82 - 1), v208, v70) )
            {
              nullsub_1(v90);
              v128 = sub_140001650(5, 1);
              if ( !v128 )
                sub_1416C2D4B(1, 5);
              *(_BYTE *)(v128 + 4) = 108;
              *(_DWORD *)v128 = 1701080941;
              v261 = 5;
              v262 = (__int64 (__fastcall *)())v128;
              v263 = 5;
              sub_140388B60((unsigned int)v272, v70, 0, 1, 1);
              v129 = *(_QWORD *)&v272[8];
              LOBYTE(v277) = v272[0];
              if ( v272[0] )
                sub_1416C2D4B(*(_QWORD *)&v272[8], *(_QWORD *)&v272[16]);
              v130 = *(_QWORD *)&v272[16];
              if ( v70 )
                sub_141684120(*(_QWORD *)&v272[16], v208, v70);
              *(_QWORD *)&v272[8] = v129;
              *(_QWORD *)&v272[16] = v130;
              *(_QWORD *)&v272[24] = v70;
              v272[0] = 3;
              sub_140307860(&v250, v193, &v261, v272);
              if ( v250.m128i_i8[0] != -1 )
                sub_1400104F0(&v250);
              sub_140441D80((__int64)v272, (__int64)&v266);
              v277 = *(_QWORD *)v272;
              if ( *(_QWORD *)v272 == -1 )
              {
                sub_14046B9B0(v272, *(_QWORD *)&v272[8]);
                v75 = *(_QWORD *)&v272[8];
                v11 = *(_QWORD *)v272;
                v275 = *(_QWORD *)&v272[16];
                v92 = -2;
                goto LABEL_112;
              }
              v131 = *(_QWORD *)&v272[16];
              v274 = *(_QWORD *)&v272[8];
              sub_1404B9880((unsigned int)&v250, v265, v217, *(_DWORD *)&v272[8], *(__int64 *)&v272[16], v244, v209);
              if ( v250.m128i_i32[0] == -1 )
              {
                sub_1414734D0(v272, v265, v217);
                v11 = *(_QWORD *)&v272[8];
                v133 = *(_QWORD *)v272;
                v275 = *(_QWORD *)&v272[24];
                v75 = *(_QWORD *)&v272[16];
                v281 = 1;
                sub_1400104F0(&v266);
                v93 = v133;
                v23 = v271;
                v192 = v209;
                v37 = (__int64 *)v278;
                v97 = v243;
                v103 = v244;
                v99 = v277;
                v100 = v274;
                v101 = v131;
                goto LABEL_128;
              }
              *(_OWORD *)&v272[80] = v254;
              *(__m128i *)&v272[64] = v253;
              v132 = _mm_loadu_si128(&v250);
              *(__m256i *)&v272[32] = v252;
              *(_OWORD *)&v272[16] = v251;
              *(__m128i *)v272 = v132;
              sub_14046B940((__int64)&v261, (__int64)v272);
              v11 = v261;
              v75 = (__int64)v262;
              v275 = v263;
              v92 = -2;
              if ( v277 )
                sub_140001660(v274, v277, 1);
            }
LABEL_112:
            v281 = 0;
            sub_1400104F0(&v266);
            v23 = v271;
            v93 = v92;
LABEL_125:
            v37 = (__int64 *)v278;
            if ( v243 )
            {
              v102 = v93;
              sub_140001660(v244, v243, 1);
              v93 = v102;
            }
            v97 = v238;
            v103 = v239;
            v99 = v240;
            v100 = v241;
            v101 = v242;
LABEL_128:
            v238 = v97;
            v239 = v103;
            v240 = v99;
            v241 = v100;
            v242 = v101;
            v98 = v103;
            v12 = v275;
            if ( v93 != -2 )
              goto LABEL_122;
LABEL_129:
            v250.m128i_i64[0] = v11;
            v250.m128i_i64[1] = v75;
            *(_QWORD *)&v251 = v12;
            v274 = v75;
            if ( !(unsigned __int8)sub_1404E1D70(aReplaceRollout, 31, v75, v12) )
              goto LABEL_142;
            v261 = (__int64)&unk_14175BAD0;
            v266 = &v261;
            v267.m128i_i64[0] = (__int64)sub_14041F6A0;
            sub_14149C0F0(v272, &unk_141757C71, &v266);
            v104 = *(_QWORD *)&v272[8];
            v235 = *(_QWORD *)&v272[8];
            v275 = v12;
            v105 = sub_1404E1D70(*(_QWORD *)&v272[8], *(_QWORD *)&v272[16], v274, v12);
            if ( *(_QWORD *)v272 )
              sub_140001660(v104, *(_QWORD *)v272, 1);
            v46 = v105 == 0;
            v106 = v275;
            if ( v46 )
            {
              v261 = (__int64)&unk_14175BAD4;
              v266 = &v261;
              v267.m128i_i64[0] = (__int64)sub_14041F6A0;
              sub_14149C0F0(v272, &unk_141757C71, &v266);
              v107 = *(_QWORD *)&v272[8];
              v235 = *(_QWORD *)&v272[8];
              v108 = sub_1404E1D70(*(_QWORD *)&v272[8], *(_QWORD *)&v272[16], v274, v106);
              if ( *(_QWORD *)v272 )
                sub_140001660(v107, *(_QWORD *)v272, 1);
              v46 = v108 == 0;
              v109 = v275;
              if ( v46 )
              {
                v261 = (__int64)&unk_14175BAD8;
                v266 = &v261;
                v267.m128i_i64[0] = (__int64)sub_14041F6A0;
                sub_14149C0F0(v272, &unk_141757C71, &v266);
                v110 = *(_QWORD *)&v272[8];
                v235 = *(_QWORD *)&v272[8];
                v111 = sub_1404E1D70(*(_QWORD *)&v272[8], *(_QWORD *)&v272[16], v274, v109);
                if ( *(_QWORD *)v272 )
                  sub_140001660(v110, *(_QWORD *)v272, 1);
                v46 = v111 == 0;
                v112 = v275;
                if ( v46 )
                {
                  v261 = (__int64)&unk_14175BADC;
                  v266 = &v261;
                  v267.m128i_i64[0] = (__int64)sub_14041F6A0;
                  sub_14149C0F0(v272, &unk_141757C71, &v266);
                  v113 = *(_QWORD *)&v272[8];
                  v235 = *(_QWORD *)&v272[8];
                  v114 = sub_1404E1D70(*(_QWORD *)&v272[8], *(_QWORD *)&v272[16], v274, v112);
                  if ( *(_QWORD *)v272 )
                    sub_140001660(v113, *(_QWORD *)v272, 1);
                  v46 = v114 == 0;
                  v23 = v271;
                  v12 = v275;
                  if ( v46 )
                  {
LABEL_142:
                    ++v234;
                    *(_QWORD *)v272 = v269;
                    *(_QWORD *)&v272[8] = sub_1400015F0;
                    *(_QWORD *)&v272[16] = &v250;
                    *(_QWORD *)&v272[24] = sub_1400015F0;
                    sub_14149C0F0(&v199, &unk_14175C7EE, v272);
                    v115 = v231;
                    if ( v231 >= 3 )
                    {
                      if ( v199.m128i_i64[0] )
                        sub_140001660(v199.m128i_i64[1], v199.m128i_i64[0], 1);
                    }
                    else
                    {
                      if ( v231 == v229 )
                      {
                        v277 = v199.m128i_i64[1];
                        v278 = v199.m128i_i64[0];
                        sub_141689AB0(&v229);
                      }
                      v116 = v230;
                      v117 = 3 * v115;
                      *(_QWORD *)(v230 + 8 * v117 + 16) = v200;
                      *(__m128i *)(v116 + 8 * v117) = _mm_loadu_si128(&v199);
                      v231 = v115 + 1;
                    }
                    v36 = v237;
                    if ( v250.m128i_i64[0] )
                      sub_140001660(v250.m128i_i64[1], v250.m128i_i64[0], 1);
LABEL_150:
                    v118 = v218.m128i_i64[0];
                    if ( v218.m128i_i64[0] )
LABEL_151:
                      sub_140001660(v218.m128i_i64[1], v118, 1);
                    goto LABEL_51;
                  }
                }
              }
            }
            ++*((_QWORD *)&v233 + 1);
            *(_QWORD *)v272 = v269;
            *(_QWORD *)&v272[8] = sub_1400015F0;
            v119 = sub_14149C0F0(&v201, &unk_14175C80A, v272);
            v120 = v231;
            if ( v231 >= 3 )
            {
              if ( v201.m128i_i64[0] )
                v119 = sub_140001660(v201.m128i_i64[1], v201.m128i_i64[0], 1);
            }
            else
            {
              if ( v231 == v229 )
              {
                v277 = v201.m128i_i64[1];
                v278 = v201.m128i_i64[0];
                sub_141689AB0(&v229);
              }
              v119 = v230;
              v121 = 3 * v120;
              *(_QWORD *)(v230 + 8 * v121 + 16) = v202;
              *(__m128i *)(v119 + 8 * v121) = _mm_loadu_si128(&v201);
              v231 = v120 + 1;
            }
            v194.m128i_i64[0] = -1;
            v73 = v269;
            if ( v250.m128i_i64[0] )
              v119 = sub_140001660(v250.m128i_i64[1], v250.m128i_i64[0], 1);
            v96 = 1;
            LOBYTE(v119) = 1;
            v270 = v119;
LABEL_161:
            v186 = v73;
            v245 = &v218;
            v261 = (__int64)&v186;
            v262 = (__int64 (__fastcall *)())&unk_14175C850;
            v263 = (__int64)&v245;
            v264 = &unk_14175C850;
            v280 = v96;
            v279 = 1;
            sub_140429E20(
              (unsigned int)&v250,
              (unsigned int)&v220,
              (unsigned int)aUpdateThreadsS_2,
              43,
              (__int64)&v261,
              2);
            v12 = v275;
            if ( v250.m128i_i64[0] != -1 )
            {
              v154 = _mm_loadu_si128(&v250);
              *(__m256i *)&v272[32] = v252;
              *(_OWORD *)&v272[16] = v251;
              *(__m128i *)v272 = v154;
              if ( !v96 )
              {
                sub_1404A4370(&v194);
                sub_14043F240(&v194);
              }
              v266 = v269;
              v267.m128i_i64[0] = (__int64)sub_1400015F0;
              v267.m128i_i64[1] = (__int64)v272;
              v268 = sub_140FB8910;
              v276 = v96;
              sub_14149C0F0(v175, &unk_14175C87D, &v266);
              v278 = v175[0];
              v25 = v175[1];
              v26 = v175[2];
              v280 = v96;
              v279 = v96;
              sub_14043D020(v272);
              if ( v218.m128i_i64[0] )
                sub_140001660(v218.m128i_i64[1], v218.m128i_i64[0], 1);
              goto LABEL_194;
            }
            v46 = !v96;
            v23 = v271;
            if ( v46 )
            {
              v122 = v257;
              if ( v257 == v255 )
                sub_141689180(&v255);
              v123 = v256;
              v124 = 80 * v122;
              *(_OWORD *)(v256 + v124 + 64) = v198;
              v125 = _mm_loadu_si128(&v194);
              v126 = v195;
              v127 = v196;
              *(_OWORD *)(v123 + v124 + 48) = v197;
              *(_OWORD *)(v123 + v124 + 32) = v127;
              *(_OWORD *)(v123 + v124 + 16) = v126;
              *(__m128i *)(v123 + v124) = v125;
              v257 = v122 + 1;
              *(_QWORD *)&v233 = v233 + 1;
            }
            ++*(_QWORD *)&v232[16];
            v118 = v218.m128i_i64[0];
            v36 = v237;
            if ( v218.m128i_i64[0] )
              goto LABEL_151;
            goto LABEL_51;
          }
LABEL_62:
          ++v234;
          v38 = v37;
          v269 = v37;
          if ( v37 == v215 )
            goto LABEL_185;
        }
      }
    }
    break;
  }
  v25 = 8;
  v16 = -1;
  v278 = 0;
  v26 = 0;
  v260 = 0;
  v248 = 0;
  v11 = 0;
  v258 = 0;
  v249 = 0u;
  if ( *(_QWORD *)&v272[8] )
LABEL_36:
    sub_140001660(v10, 80 * v18, 8);
LABEL_37:
  v10 = v25;
  v19 = v26;
  v21 = v278;
  v20 = v249;
LABEL_38:
  sub_14043C900(&v220);
  v34 = v11;
  v13 = v248;
  v17 = v260;
  v12 = v19;
  v11 = v21;
  v14 = v20;
  v15 = __PAIR128__(v34, v258);
LABEL_39:
  if ( v16 == -1 )
  {
    v2 = v17;
    goto LABEL_41;
  }
  v161 = v216;
  v216[5] = _mm_load_si128(&v185);
  v161->m128i_i64[0] = v16;
  v161->m128i_i64[1] = v11;
  v161[1].m128i_i64[0] = v10;
  v161[1].m128i_i64[1] = v12;
  v161[2] = v14;
  v161[3] = (__m128i)v15;
  v161[4].m128i_i64[0] = v13;
  v161[4].m128i_i64[1] = v17;
  if ( v212 )
    sub_140001660(v247, v212, 1);
  v162 = v206;
  v163 = v236;
  if ( (__int64 *)v213 != v211 )
  {
    v246 >>= 5;
    do
    {
      v164 = *(v163 - 1);
      if ( v164 )
        sub_140001660(*v163, v164, 1);
      v163 += 4;
      --v246;
    }
    while ( v246 );
  }
  if ( v162 )
    sub_140001660(*((_QWORD *)&v206 + 1), 32 * v162, 8);
  v165 = v203[1];
  v166 = v203[2];
  if ( v203[2] )
  {
    v167 = (_QWORD *)(v203[1] + 8LL);
    do
    {
      v168 = *(v167 - 1);
      if ( v168 )
        sub_140001660(*v167, v168, 1);
      v167 += 3;
      --v166;
    }
    while ( v166 );
  }
  if ( v203[0] )
    sub_140001660(v165, 24LL * v203[0], 8);
  sub_14043F2A0(&v177);
  return v216;
}