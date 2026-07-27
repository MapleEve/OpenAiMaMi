// module: codexmate_lib/core/repository
// addr: 0x14038b750
// name: remove_accounts_0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::remove_accounts | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall remove_accounts_0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rsi
  __int64 v12; // rdi
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r14
  __int64 v18; // r15
  __int64 v19; // rdi
  const __m128i *v20; // rbx
  __int64 v21; // r13
  __m128i si128; // xmm0
  __int16 v24; // ax
  __m128i *v25; // r15
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  _QWORD *v38; // rbx
  __int64 v39; // rsi
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  _QWORD *v43; // rsi
  __int128 v44; // kr10_16
  __m128i v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 *v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rcx
  __m128i *v60; // rax
  __int64 *v61; // rbx
  __int64 *v62; // rsi
  __int128 *v63; // r13
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r12
  unsigned __int64 v68; // r15
  __m128i v69; // xmm0
  __m128i v70; // xmm7
  __int64 i; // rsi
  unsigned __int64 v73; // r15
  __m128i v74; // xmm8
  __int64 v76; // r14
  __int128 *v77; // r12
  char *v78; // r13
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __int64 v81; // r8
  __m128i *v82; // rsi
  __int64 v83; // rdx
  const __m128i *v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int8 v87; // al
  __int64 v88; // rax
  __int128 v89; // xmm0
  __m128i v90; // xmm0
  __int128 v91; // xmm1
  __int64 v92; // rbx
  __int64 v93; // r14
  __int64 v94; // rsi
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rdx
  __m128i v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int64 v101; // rax
  __m128i v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  __int64 v105; // rcx
  __int64 v106; // rcx
  __m128i v107; // xmm0
  __m128i *v108; // rax
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __int64 v111; // rcx
  __m128i *v112; // rax
  __m128i *v113; // rax
  __m128i v114; // xmm0
  __int64 v115; // rax
  __m128i v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __m128i v119; // xmm0
  __int64 v120; // rax
  __m128i v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm2
  __int64 v124; // [rsp+20h] [rbp-60h]
  _OWORD v125[6]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v126[6]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v127; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v128; // [rsp+100h] [rbp+80h]
  __int128 v129; // [rsp+120h] [rbp+A0h]
  __int128 v130; // [rsp+130h] [rbp+B0h]
  __int128 v131; // [rsp+140h] [rbp+C0h]
  __m128i v132[6]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v133; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v134; // [rsp+1C0h] [rbp+140h]
  _BYTE v135[48]; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v136; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v137; // [rsp+208h] [rbp+188h]
  __m128i v138; // [rsp+210h] [rbp+190h] BYREF
  __int64 v139; // [rsp+220h] [rbp+1A0h]
  _BYTE v140[48]; // [rsp+228h] [rbp+1A8h] BYREF
  __m128i v141; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v142; // [rsp+268h] [rbp+1E8h]
  __m128i v143; // [rsp+270h] [rbp+1F0h] BYREF
  __m256i v144; // [rsp+280h] [rbp+200h]
  __int128 v145; // [rsp+2A0h] [rbp+220h]
  __int128 v146; // [rsp+2B0h] [rbp+230h]
  __int64 v147; // [rsp+2C0h] [rbp+240h]
  __m128i v148; // [rsp+2D0h] [rbp+250h] BYREF
  __m256i v149; // [rsp+2E0h] [rbp+260h]
  __int64 v150; // [rsp+300h] [rbp+280h]
  __m128i v151; // [rsp+310h] [rbp+290h] BYREF
  __m256i v152; // [rsp+320h] [rbp+2A0h]
  __int128 v153; // [rsp+340h] [rbp+2C0h]
  __m128i v154; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v155; // [rsp+360h] [rbp+2E0h]
  _OWORD v156[2]; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v157; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v158[2]; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v159; // [rsp+3F0h] [rbp+370h]
  __int64 v160; // [rsp+3F8h] [rbp+378h]
  __int64 v161; // [rsp+408h] [rbp+388h] BYREF
  __int64 *v162; // [rsp+410h] [rbp+390h]
  __int64 v163; // [rsp+418h] [rbp+398h]
  __m128i v164; // [rsp+420h] [rbp+3A0h] BYREF
  __m256i v165; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v166; // [rsp+450h] [rbp+3D0h]
  __int128 v167; // [rsp+460h] [rbp+3E0h]
  __int64 v168; // [rsp+470h] [rbp+3F0h]
  __int64 v169; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v170; // [rsp+480h] [rbp+400h]
  char v171; // [rsp+490h] [rbp+410h]
  __m128i v172; // [rsp+498h] [rbp+418h] BYREF
  __int64 v173; // [rsp+4A8h] [rbp+428h]
  __m128i v174; // [rsp+4B0h] [rbp+430h] BYREF
  __int64 v175; // [rsp+4C0h] [rbp+440h]
  __int64 v176; // [rsp+4D0h] [rbp+450h]
  __int64 *v177; // [rsp+4D8h] [rbp+458h]
  __int64 v178; // [rsp+4E0h] [rbp+460h]
  __int64 v179; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v180; // [rsp+4F0h] [rbp+470h]
  _QWORD *v181; // [rsp+4F8h] [rbp+478h]
  __m128i *v182; // [rsp+500h] [rbp+480h]
  __int64 *v183; // [rsp+508h] [rbp+488h]
  __m128i v184; // [rsp+510h] [rbp+490h] BYREF
  __m256i v185; // [rsp+520h] [rbp+4A0h]
  __int128 v186; // [rsp+540h] [rbp+4C0h]
  __int128 v187; // [rsp+550h] [rbp+4D0h]
  __int128 v188; // [rsp+560h] [rbp+4E0h]
  char v189; // [rsp+57Fh] [rbp+4FFh] BYREF
  __int64 v190; // [rsp+580h] [rbp+500h]
  _QWORD *v191; // [rsp+588h] [rbp+508h]
  _BYTE v192[96]; // [rsp+590h] [rbp+510h] BYREF
  __m128i v193; // [rsp+620h] [rbp+5A0h] BYREF
  __m256i v194; // [rsp+630h] [rbp+5B0h]
  __int128 v195; // [rsp+650h] [rbp+5D0h]
  __int128 v196; // [rsp+660h] [rbp+5E0h]
  __int128 v197; // [rsp+670h] [rbp+5F0h]
  __int64 v198; // [rsp+688h] [rbp+608h]
  __int64 v199; // [rsp+690h] [rbp+610h]
  __int64 v200; // [rsp+698h] [rbp+618h]
  __int64 v201; // [rsp+6A0h] [rbp+620h]
  char v202; // [rsp+6AAh] [rbp+62Ah]
  char v203; // [rsp+6ABh] [rbp+62Bh]
  char v204; // [rsp+6ACh] [rbp+62Ch]
  char v205; // [rsp+6ADh] [rbp+62Dh]
  char v206; // [rsp+6AEh] [rbp+62Eh]
  char v207; // [rsp+6AFh] [rbp+62Fh]
  char v208; // [rsp+6B0h] [rbp+630h]
  char v209; // [rsp+6B1h] [rbp+631h]
  char v210; // [rsp+6B2h] [rbp+632h]
  char v211; // [rsp+6B3h] [rbp+633h]
  char v212; // [rsp+6B4h] [rbp+634h]
  char v213; // [rsp+6B5h] [rbp+635h]
  char v214; // [rsp+6B6h] [rbp+636h]
  char v215; // [rsp+6B7h] [rbp+637h]
  __int64 v216; // [rsp+6B8h] [rbp+638h]

  v216 = -2;
  v190 = a3;
  v5 = a2[37];
  v6 = a2[38];
  sub_140388C10((__int64)v192, v5, v6);
  v7 = *(_QWORD *)v192;
  v193 = *(__m128i *)&v192[8];
  v194 = *(__m256i *)&v192[24];
  v195 = *(_OWORD *)&v192[56];
  v196 = *(_OWORD *)&v192[72];
  *(_QWORD *)&v197 = *(_QWORD *)&v192[88];
  if ( *(_QWORD *)v192 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v197;
    *(_OWORD *)(a1 + 80) = v196;
    v8 = _mm_load_si128(&v193);
    v9 = *(_OWORD *)v194.m256i_i8;
    v10 = *(_OWORD *)&v194.m256i_u64[2];
    *(_OWORD *)(a1 + 64) = v195;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(__m128i *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = -1;
LABEL_26:
    v38 = (_QWORD *)v190;
    v39 = *(_QWORD *)(v190 + 16);
    if ( v39 )
    {
      v40 = (_QWORD *)(*(_QWORD *)(v190 + 8) + 8LL);
      do
      {
        v41 = *(v40 - 1);
        if ( v41 )
          sub_140001660(*v40, v41, 1);
        v40 += 3;
        --v39;
      }
      while ( v39 );
    }
    if ( *v38 )
      sub_140001660(v38[1], 24LL * *v38, 8);
    return a1;
  }
  v147 = v197;
  v146 = v196;
  v145 = v195;
  v144 = v194;
  v143 = _mm_load_si128(&v193);
  v11 = v143.m128i_i64[1];
  v12 = 424 * v194.m256i_i64[0];
  v13 = (const __m128i *)sub_1401C5950(0);
  if ( !v13 )
    sub_1416C2100(&off_141792398);
  v14 = _mm_loadu_si128(v13);
  ++v13->m128i_i64[0];
  *(_OWORD *)&v192[16] = xmmword_1416C8810;
  *(_OWORD *)v192 = *(_OWORD *)&off_1416C8800;
  *(__m128i *)&v192[32] = v14;
  v193.m128i_i64[0] = v11;
  v193.m128i_i64[1] = v11 + v12;
  v194.m256i_i64[0] = v190;
  sub_1409931A0(&v193, v192);
  v200 = a1;
  v156[1] = *(_OWORD *)&v192[16];
  v156[0] = _mm_load_si128((const __m128i *)v192);
  v157 = *(_OWORD *)&v192[32];
  if ( !*(_QWORD *)&v192[24] )
  {
    sub_140440300((unsigned int)v192, *(_QWORD *)(v190 + 8), *(_QWORD *)(v190 + 16), (unsigned int)&unk_14174E75A, 2);
    v194.m256i_i64[0] = *(_QWORD *)&v192[16];
    v193 = _mm_loadu_si128((const __m128i *)v192);
    *(_QWORD *)v192 = &v193;
    *(_QWORD *)&v192[8] = sub_1400015F0;
    sub_14149C0F0(&v141, &unk_14174E75C, v192);
    a1 = v200;
    if ( v193.m128i_i64[0] )
      sub_140001660(v193.m128i_i64[1], v193.m128i_i64[0], 1);
    *(_QWORD *)(a1 + 32) = v142;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v141);
    *(_QWORD *)(a1 + 8) = 8;
LABEL_24:
    *(_QWORD *)a1 = -1;
    goto LABEL_25;
  }
  v181 = (_QWORD *)v6;
  v182 = (__m128i *)v5;
  v176 = *((_QWORD *)&v156[0] + 1);
  v15 = *(_QWORD *)&v156[0];
  v199 = *(_QWORD *)&v156[0] + *((_QWORD *)&v156[0] + 1) + 1LL;
  _RAX = *(_QWORD *)&v156[0] + 16LL;
  _ESI = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v156[0]));
  v18 = a2[41];
  v191 = a2;
  v19 = a2[42];
  v198 = *(_QWORD *)&v192[24];
  v180 = *(_QWORD *)&v156[0] + 16LL;
  v20 = (const __m128i *)(*(_QWORD *)&v156[0] + 16LL);
  v201 = *(_QWORD *)&v156[0];
  v21 = *(_QWORD *)&v192[24] - 1LL;
  do
  {
    if ( !(_WORD)_ESI )
    {
      do
      {
        si128 = _mm_load_si128(v20);
        v15 -= 896;
        ++v20;
        _ESI = _mm_movemask_epi8(si128) ^ 0xFFFF;
      }
      while ( !_ESI );
    }
    __asm { tzcnt   eax, esi }
    sub_1403CE160((unsigned int)v192, *(_QWORD *)(v15 - 56 * _RAX - 24), *(_QWORD *)(v15 - 56 * _RAX - 16), v18, v19);
    if ( *(_DWORD *)v192 != -1 )
    {
      a1 = v200;
      *(_OWORD *)(v200 + 88) = *(_OWORD *)&v192[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v192[64];
      v35 = *(_OWORD *)v192;
      v36 = *(_OWORD *)&v192[16];
      v37 = *(_OWORD *)&v192[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v192[48];
      *(_OWORD *)(a1 + 40) = v37;
      *(_OWORD *)(a1 + 24) = v36;
      *(_OWORD *)(a1 + 8) = v35;
      goto LABEL_24;
    }
    _RAX = _ESI & (unsigned int)(_ESI - 1);
    _ESI &= _ESI - 1;
  }
  while ( v21-- != 0 );
  v24 = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v201));
  v193.m128i_i64[0] = v201;
  v193.m128i_i64[1] = v180;
  v194.m256i_i64[0] = v199;
  v194.m256i_i16[4] = ~v24;
  v194.m256i_i64[2] = v198;
  v25 = &v193;
  sub_14030DE70(&v184, &v193);
  v193.m128i_i64[0] = (__int64)&v189;
  if ( v185.m256i_i64[0] >= 2uLL )
  {
    if ( v185.m256i_i64[0] >= 0x15uLL )
      sub_140B58650(v184.m128i_i64[1], v185.m256i_i64[0], &v193);
    else
      sub_140555E10(v184.m128i_i64[1], v185.m256i_i64[0], 1, &v193, v124);
  }
  sub_1402AE7F0((__int64)&v184);
  v26 = v184.m128i_i64[1];
  v27 = v185.m256i_i64[0];
  sub_140987FC0(v192, v184.m128i_i64[1], v184.m128i_i64[1] + 32 * v185.m256i_i64[0]);
  a1 = v200;
  v28 = (__int64)v181;
  if ( v27 )
  {
    v29 = (_QWORD *)(v26 + 8);
    do
    {
      v30 = *(v29 - 1);
      if ( v30 )
        sub_140001660(*v29, v30, 1);
      v29 += 4;
      --v27;
    }
    while ( v27 );
  }
  if ( v184.m128i_i64[0] )
    sub_140001660(v26, 32 * v184.m128i_i64[0], 8);
  v31 = *(_QWORD *)v192;
  v154 = *(__m128i *)&v192[8];
  v155 = *(_QWORD *)&v192[24];
  if ( *(_QWORD *)v192 != -1 )
  {
    v32 = *(_OWORD *)&v192[32];
    v33 = *(_OWORD *)&v192[48];
    v34 = *(_OWORD *)&v192[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v192[80];
    *(_OWORD *)(a1 + 72) = v34;
    *(_OWORD *)(a1 + 56) = v33;
    *(_OWORD *)(a1 + 40) = v32;
    *(_QWORD *)(a1 + 32) = v155;
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v154);
    *(_QWORD *)(a1 + 8) = v31;
    goto LABEL_24;
  }
  v174 = _mm_load_si128(&v154);
  v175 = v155;
  v43 = v191;
  sub_1403885B0(v192, v191[33], v191[34]);
  v44 = *(_OWORD *)v192;
  if ( *(_QWORD *)v192 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v192[80];
    v45 = _mm_loadu_si128((const __m128i *)&v192[16]);
    v46 = *(_OWORD *)&v192[32];
    v47 = *(_OWORD *)&v192[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v192[64];
    *(_OWORD *)(a1 + 56) = v47;
    *(_OWORD *)(a1 + 40) = v46;
    *(__m128i *)(a1 + 24) = v45;
    *(_OWORD *)(a1 + 8) = v44;
    *(_QWORD *)a1 = -1;
LABEL_75:
    v199 = v174.m128i_i64[1];
    if ( v175 )
    {
      v83 = 0;
      v84 = (const __m128i *)v199;
      v198 = v175;
      do
      {
        v200 = v83;
        v201 = (__int64)v84;
        *(_QWORD *)v192 = sub_1412018B0(v84);
        if ( *(_QWORD *)v192 )
          sub_140018650(v192);
        v85 = v201;
        CloseHandle(*(HANDLE *)v201);
        v83 = v200 - 1;
        v84 = (const __m128i *)(v85 + 8);
      }
      while ( v200 - 1 + v198 );
    }
    if ( v174.m128i_i64[0] )
      sub_140001660(v199, 8 * v174.m128i_i64[0], 8);
LABEL_25:
    sub_14067F5D0(v156);
    sub_14034DF40(&v143);
    goto LABEL_26;
  }
  v179 = *(_QWORD *)&v192[8];
  sub_140388C10((__int64)v192, (__int64)v182, v28);
  v48 = *(_QWORD *)v192;
  v193 = *(__m128i *)&v192[8];
  v194 = *(__m256i *)&v192[24];
  v195 = *(_OWORD *)&v192[56];
  v196 = *(_OWORD *)&v192[72];
  *(_QWORD *)&v197 = *(_QWORD *)&v192[88];
  if ( *(_QWORD *)v192 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v197;
    *(_OWORD *)(a1 + 80) = v196;
    v49 = _mm_load_si128(&v193);
    v50 = *(_OWORD *)v194.m256i_i8;
    v51 = *(_OWORD *)&v194.m256i_u64[2];
    *(_OWORD *)(a1 + 64) = v195;
    *(_OWORD *)(a1 + 48) = v51;
    *(_OWORD *)(a1 + 32) = v50;
    *(__m128i *)(a1 + 16) = v49;
    *(_QWORD *)(a1 + 8) = v48;
    *(_QWORD *)a1 = -1;
LABEL_74:
    sub_14034E7D0(&v179);
    goto LABEL_75;
  }
  v168 = v197;
  v167 = v196;
  v52 = _mm_load_si128(&v193);
  v166 = v195;
  v165 = v194;
  v164 = v52;
  v208 = 1;
  recover_account_removal_quarantine(&v172, v43, v52.m128i_i64[1], v194.m256i_i64[0]);
  v53 = *(_QWORD *)(v190 + 8);
  v54 = v53 + 24LL * *(_QWORD *)(v190 + 16);
  v210 = 1;
  sub_140376D50(v140, v53, v54);
  v55 = v43[5];
  v56 = v43[6];
  v205 = 1;
  v57 = &v169;
  sub_140391DB0(&v169, v55, v56);
  v58 = v169;
  if ( v169 == -1 )
  {
    if ( v171 || v165.m256i_i64[1] == -1 )
      goto LABEL_45;
    v57 = &v165.m256i_i64[1];
  }
  v214 = 1;
  if ( (unsigned __int8)sub_14042AAD0(v140, v57) )
  {
    nullsub_1(v59);
    v60 = (__m128i *)sub_140001650(52, 1);
    if ( !v60 )
    {
      v214 = 1;
      sub_1416C2D4B(1, 52);
    }
    qmemcpy(&v60[1], "e currently active account snapshot.", 36);
    *v60 = _mm_loadu_si128((const __m128i *)&xmmword_14174E8BE);
    a1 = v200;
    *(_QWORD *)(v200 + 8) = 10;
    *(_QWORD *)(a1 + 16) = 52;
    *(_QWORD *)(a1 + 24) = v60;
    *(_QWORD *)(a1 + 32) = 52;
    *(_QWORD *)a1 = -1;
    goto LABEL_71;
  }
LABEL_45:
  *(_QWORD *)v192 = v164.m128i_i64[1];
  *(_QWORD *)&v192[8] = v164.m128i_i64[1] + 424 * v165.m256i_i64[0];
  *(_QWORD *)&v192[16] = v140;
  v214 = 1;
  sub_140317860(&v161, v192);
  if ( !v163 )
  {
    v80 = *(_QWORD *)(v190 + 8);
    v81 = *(_QWORD *)(v190 + 16);
    v213 = 1;
    sub_140440300((unsigned int)v192, v80, v81, (unsigned int)&unk_14174E75A, 2);
    v82 = (__m128i *)v200;
    v194.m256i_i64[0] = *(_QWORD *)&v192[16];
    v193 = _mm_loadu_si128((const __m128i *)v192);
    *(_QWORD *)v192 = &v193;
    *(_QWORD *)&v192[8] = sub_1400015F0;
    sub_14149C0F0(&v138, &unk_14174E75C, v192);
    if ( v193.m128i_i64[0] )
      sub_140001660(v193.m128i_i64[1], v193.m128i_i64[0], 1);
    v82[2].m128i_i64[0] = v139;
    v82[1] = _mm_loadu_si128(&v138);
    v82->m128i_i64[1] = 8;
    v82->m128i_i64[0] = -1;
    goto LABEL_70;
  }
  v61 = v162;
  v178 = v163;
  v62 = &v162[53 * v163];
  v63 = &v157;
  v183 = v162;
  v64 = v200;
  v177 = v62;
  while ( v61 != v62 )
  {
    v65 = v61[28];
    v66 = v61[29];
    v213 = 1;
    sub_14149BB70(v192, v65, v66);
    v67 = (__int64)(v61 + 53);
    v198 = *(_QWORD *)&v192[8];
    v199 = *(_QWORD *)v192;
    v180 = *(_QWORD *)&v192[16];
    v181 = v61 + 24;
    v68 = sub_140378810(v63, v61 + 24);
    v69 = _mm_cvtsi32_si128(v68 >> 57);
    v70 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v69, v69), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      HIDWORD(_RAX) = HIDWORD(v201);
      v73 = v176 & v68;
      v74 = _mm_loadu_si128((const __m128i *)(v201 + v73));
      _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v74, v70));
      if ( _EDI )
        break;
LABEL_54:
      v64 = v200;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v74, (__m128i)-1LL)) )
        goto LABEL_65;
      v68 = i + v73 + 16;
    }
    v76 = v61[26];
    v182 = (__m128i *)v67;
    while ( 1 )
    {
      v77 = v63;
      __asm { tzcnt   eax, edi }
      if ( v76 == *(_QWORD *)(v201 - 56 * (v176 & (v73 + _RAX)) - 40) )
      {
        v78 = (char *)(v201 - 56 * (v176 & (v73 + _RAX)));
        if ( !(unsigned int)sub_1416847B0(v61[25], *((_QWORD *)v78 - 6), v76) )
          break;
      }
      _RAX = (unsigned int)(_EDI - 1);
      LOWORD(_RAX) = _EDI & (_EDI - 1);
      _EDI = _RAX;
      v63 = v77;
      v67 = (__int64)(v61 + 53);
      if ( !(_WORD)_RAX )
        goto LABEL_54;
    }
    sub_141473290(&v184, *((_QWORD *)v78 - 3), *((_QWORD *)v78 - 2));
    v64 = v200;
    v62 = v177;
    v25 = v182;
    v63 = v77;
    sub_141473290(&v193, v198, v180);
    if ( v184.m128i_i64[1] != v193.m128i_i64[1]
      || BYTE8(v186) != BYTE8(v195)
      || BYTE9(v186) != 2
      || BYTE9(v195) != 2
      || v185.m256i_i8[0] < 3u != v194.m256i_i8[0] < 3u
      || (unsigned int)sub_1416847B0(v184.m128i_i64[0], v193.m128i_i64[0], v184.m128i_i64[1]) )
    {
      v79 = _mm_loadu_si128(&v193);
      *(_OWORD *)&v192[48] = v195;
      *(__m256i *)&v192[16] = v194;
      *(__m128i *)v192 = v79;
      if ( !(unsigned __int8)sub_140467AB0(&v184, v192) )
      {
LABEL_65:
        *(_QWORD *)v192 = v181;
        *(_QWORD *)&v192[8] = sub_1400015F0;
        sub_14149C0F0(&v136, &unk_14174E77B, v192);
        *(_QWORD *)(v64 + 32) = v137;
        *(_OWORD *)(v64 + 16) = v136;
        *(_QWORD *)(v64 + 8) = 10;
        *(_QWORD *)v64 = -1;
        if ( v199 )
          sub_140001660(v198, v199, 1);
        goto LABEL_70;
      }
    }
    v61 = (__int64 *)v25;
    if ( v199 )
    {
      sub_140001660(v198, v199, 1);
      v61 = (__int64 *)v25;
    }
  }
  v213 = 1;
  sub_140376EC0(v135, v183, v62);
  v211 = 1;
  sub_1402AECD0(&v164, v135);
  v86 = v165.m256i_i64[1];
  if ( v165.m256i_i64[1] != -1 )
  {
    v211 = 1;
    if ( (unsigned __int8)sub_14042AAD0(v140, &v165.m256i_u64[1]) )
    {
      if ( v86 )
        sub_140001660(v165.m256i_i64[2], v86, 1);
      v165.m256i_i64[1] = -1;
      v64 = v200;
    }
  }
  v211 = 1;
  sub_14032C610(&v154, v191 + 68);
  v87 = *((_BYTE *)v191 + 568);
  v185.m256i_i64[0] = v155;
  v184 = _mm_loadu_si128(&v154);
  v185.m256i_i8[8] = v87;
  v211 = 1;
  sub_140381430((__int64)v192, (__int64)&v184);
  v88 = *(_QWORD *)v192;
  v193 = *(__m128i *)&v192[8];
  v194 = *(__m256i *)&v192[24];
  *(_QWORD *)&v195 = *(_QWORD *)&v192[56];
  if ( *(_QWORD *)v192 != -1 )
  {
    v89 = *(_OWORD *)&v192[64];
    *(_OWORD *)(v64 + 88) = *(_OWORD *)&v192[80];
    *(_OWORD *)(v64 + 72) = v89;
    *(_QWORD *)(v64 + 64) = v195;
    v90 = _mm_load_si128(&v193);
    v91 = *(_OWORD *)v194.m256i_i8;
    *(_OWORD *)(v64 + 48) = *(_OWORD *)&v194.m256i_u64[2];
    *(_OWORD *)(v64 + 32) = v91;
    *(__m128i *)(v64 + 16) = v90;
    *(_QWORD *)(v64 + 8) = v88;
    *(_QWORD *)v64 = -1;
LABEL_125:
    sub_140680AD0(v135);
LABEL_70:
    v214 = 1;
    sub_140349D70(&v161);
    v58 = v169;
    a1 = v200;
LABEL_71:
    if ( v58 > 0 )
      sub_140001660(v170, v58, 1);
    v210 = 1;
    sub_14067FFB0(v140);
    sub_140009EF0(&v172);
    sub_14034DF40(&v164);
    goto LABEL_74;
  }
  v148 = _mm_load_si128(&v193);
  v149 = v194;
  v150 = v195;
  v92 = v191[69];
  v93 = v191[70];
  v204 = 1;
  sub_1403C71F0(v158, v92, v93);
  v94 = v159;
  v212 = 1;
  sub_1402AF390(v158, v135);
  v212 = 1;
  *((_QWORD *)&v167 + 1) = sub_1403C9370();
  v212 = 1;
  sub_140385DA0(v192, v191, v183, v178);
  v96 = *(_QWORD *)v192;
  v193 = *(__m128i *)&v192[8];
  v194 = *(__m256i *)&v192[24];
  v195 = *(_OWORD *)&v192[56];
  if ( *(_QWORD *)v192 != -1 )
  {
    v97 = v200;
    *(_QWORD *)(v200 + 96) = *(_QWORD *)&v192[88];
    *(_OWORD *)(v97 + 80) = *(_OWORD *)&v192[72];
    v98 = _mm_load_si128(&v193);
    v99 = *(_OWORD *)v194.m256i_i8;
    v100 = *(_OWORD *)&v194.m256i_u64[2];
    *(_OWORD *)(v97 + 64) = v195;
    *(_OWORD *)(v97 + 48) = v100;
    *(_OWORD *)(v97 + 32) = v99;
    *(__m128i *)(v97 + 16) = v98;
    *(_QWORD *)(v97 + 8) = v96;
    *(_QWORD *)v97 = -1;
LABEL_124:
    sub_140015650(v158);
    sub_14034E200(&v148);
    goto LABEL_125;
  }
  v151 = _mm_load_si128(&v193);
  v152 = v194;
  v153 = v195;
  if ( v159 == v94 )
  {
    v201 = -1;
  }
  else
  {
    v209 = 1;
    v160 = sub_1403C9370();
    v209 = 1;
    sub_1403C6E20(v192, v158);
    v201 = *(_QWORD *)&v192[8];
    v101 = *(_QWORD *)v192;
    v25 = *(__m128i **)&v192[24];
    v198 = *(_QWORD *)&v192[16];
    if ( *(_QWORD *)v192 != -1 )
    {
      v102 = _mm_loadu_si128((const __m128i *)&v192[32]);
      v103 = *(_OWORD *)&v192[48];
      v104 = *(_OWORD *)&v192[64];
      v105 = v200;
      *(_OWORD *)(v200 + 88) = *(_OWORD *)&v192[80];
      *(_OWORD *)(v105 + 72) = v104;
      *(_OWORD *)(v105 + 56) = v103;
      *(__m128i *)(v105 + 40) = v102;
      *(_QWORD *)(v105 + 16) = v201;
      *(_QWORD *)(v105 + 24) = v198;
      *(_QWORD *)(v105 + 32) = v25;
      *(_QWORD *)(v105 + 8) = v101;
      *(_QWORD *)v105 = -1;
LABEL_123:
      v212 = 1;
      sub_14034E3A0((__int64)&v151);
      goto LABEL_124;
    }
    sub_140390320(v132, v92, v93, v158);
    if ( v132[0].m128i_i32[0] != -1 )
    {
      v203 = 1;
      rollback(v192, (__int64)&v151);
      if ( *(_DWORD *)v192 == -1 )
      {
        *(_QWORD *)&v126[0] = -1;
      }
      else
      {
        v126[5] = *(_OWORD *)&v192[80];
        v126[4] = *(_OWORD *)&v192[64];
        v126[3] = *(_OWORD *)&v192[48];
        v126[2] = *(_OWORD *)&v192[32];
        v126[1] = *(_OWORD *)&v192[16];
        v126[0] = _mm_loadu_si128((const __m128i *)v192);
      }
      *(__m128i *)&v192[80] = v132[5];
      *(__m128i *)&v192[64] = v132[4];
      v119 = _mm_loadu_si128(v132);
      *(__m128i *)&v192[48] = v132[3];
      *(__m128i *)&v192[32] = v132[2];
      *(__m128i *)&v192[16] = v132[1];
      *(__m128i *)v192 = v119;
      v203 = 0;
      sub_1403C0D00(&v193, v192, v126);
      v120 = v200;
      *(_OWORD *)(v200 + 88) = v197;
      *(_OWORD *)(v120 + 72) = v196;
      v121 = _mm_loadu_si128(&v193);
      v122 = *(_OWORD *)v194.m256i_i8;
      v123 = *(_OWORD *)&v194.m256i_u64[2];
      *(_OWORD *)(v120 + 56) = v195;
      *(_OWORD *)(v120 + 40) = v123;
      *(_OWORD *)(v120 + 24) = v122;
      *(__m128i *)(v120 + 8) = v121;
      *(_QWORD *)v120 = -1;
      if ( !v201 )
        goto LABEL_123;
LABEL_122:
      sub_140001660(v198, v201, 1);
      goto LABEL_123;
    }
  }
  v215 = 1;
  LOBYTE(v95) = 1;
  persist_registry(&v127, v191, &v164, v95);
  if ( v127.m128i_i32[0] != -1 )
  {
    if ( v201 == -1 )
    {
      v154.m128i_i64[0] = -1;
    }
    else
    {
      v207 = 1;
      sub_14037B740(&v154, &v148, v198, v25);
    }
    v206 = 1;
    rollback(v192, (__int64)&v151);
    if ( *(_DWORD *)v192 == -1 )
    {
      *(_QWORD *)&v125[0] = -1;
    }
    else
    {
      v125[5] = *(_OWORD *)&v192[80];
      v125[4] = *(_OWORD *)&v192[64];
      v125[3] = *(_OWORD *)&v192[48];
      v125[2] = *(_OWORD *)&v192[32];
      v125[1] = *(_OWORD *)&v192[16];
      v125[0] = _mm_loadu_si128((const __m128i *)v192);
    }
    v197 = v131;
    v196 = v130;
    v114 = _mm_loadu_si128(&v127);
    v195 = v129;
    v194 = v128;
    v193 = v114;
    v202 = 1;
    sub_1403BBA70(v192, &v154, v125);
    v202 = 0;
    sub_1403C0D00(&v184, &v193, v192);
    v115 = v200;
    *(_OWORD *)(v200 + 88) = v188;
    *(_OWORD *)(v115 + 72) = v187;
    v116 = _mm_loadu_si128(&v184);
    v117 = *(_OWORD *)v185.m256i_i8;
    v118 = *(_OWORD *)&v185.m256i_u64[2];
    *(_OWORD *)(v115 + 56) = v186;
    *(_OWORD *)(v115 + 40) = v118;
    *(_OWORD *)(v115 + 24) = v117;
    *(__m128i *)(v115 + 8) = v116;
    *(_QWORD *)v115 = -1;
    if ( (unsigned __int64)(v201 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_123;
    goto LABEL_122;
  }
  v215 = 1;
  sub_1403A9160(&v193, v191);
  if ( v193.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v192[80] = v197;
    *(_OWORD *)&v192[64] = v196;
    v107 = _mm_loadu_si128(&v193);
    *(_OWORD *)&v192[48] = v195;
    *(__m256i *)&v192[16] = v194;
    *(__m128i *)v192 = v107;
    nullsub_1(v106);
    v199 = sub_140001650(36, 1);
    if ( !v199 )
      sub_1416C2D4B(1, 36);
    v108 = (__m128i *)v199;
    *(_OWORD *)(v199 + 16) = xmmword_14174E684;
    *v108 = _mm_loadu_si128((const __m128i *)&xmmword_14174E674);
    v108[2].m128i_i32[0] = 1145392201;
    v184.m128i_i64[0] = (__int64)v192;
    v184.m128i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v133, &unk_14174E7AF, &v184);
    v184.m128i_i64[0] = 36;
    v184.m128i_i64[1] = v199;
    v185.m256i_i64[0] = 36;
    *(__m128i *)&v185.m256i_u64[1] = _mm_loadu_si128(&v133);
    v185.m256i_i64[3] = v134;
    sub_1403B1FF0(&v172, &v184);
    v215 = 1;
    sub_14034ED40(v192);
  }
  v215 = 1;
  sub_140385D00(&v193, &v151);
  if ( v193.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v192[80] = v197;
    *(_OWORD *)&v192[64] = v196;
    v110 = _mm_loadu_si128(&v193);
    *(_OWORD *)&v192[48] = v195;
    *(__m256i *)&v192[16] = v194;
    *(__m128i *)v192 = v110;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v154.m128i_i64[0] = (__int64)v192;
      v154.m128i_i64[1] = (__int64)sub_140B036A0;
      v184.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
      v184.m128i_i64[1] = 31;
      v185.m256i_i64[0] = (__int64)aCodexmateLibCo_16;
      v185.m256i_i64[1] = 31;
      v185.m256i_i64[2] = (__int64)&off_14174E840;
      sub_140985BA0(&unk_14174E7FB, &v154, 2, &v184);
    }
    nullsub_1(v109);
    v199 = sub_140001650(32, 1);
    if ( !v199 )
      sub_1416C2D4B(1, 32);
    v112 = (__m128i *)v199;
    *(_OWORD *)(v199 + 16) = xmmword_14174E868;
    *v112 = _mm_loadu_si128((const __m128i *)&xmmword_14174E858);
    nullsub_1(v111);
    v113 = (__m128i *)sub_140001650(70, 1);
    if ( !v113 )
      sub_1416C2D4B(1, 70);
    qmemcpy(&v113[1], "completed; private cleanup will retry on next startup.", 54);
    *v113 = _mm_loadu_si128((const __m128i *)&xmmword_14174E878);
    v184.m128i_i64[0] = 32;
    v184.m128i_i64[1] = v199;
    v185.m256i_i64[0] = 32;
    v185.m256i_i64[1] = 70;
    v185.m256i_i64[2] = (__int64)v113;
    v185.m256i_i64[3] = 70;
    sub_1403B1FF0(&v172, &v184);
    v215 = 1;
    sub_14034ED40(v192);
  }
  v215 = 1;
  sub_140328730(v192, v183, v177);
  v194.m256i_i64[3] = v165.m256i_i64[3];
  *(_OWORD *)&v194.m256i_u64[1] = *(_OWORD *)&v165.m256i_u64[1];
  v193 = *(__m128i *)v192;
  v194.m256i_i64[0] = *(_QWORD *)&v192[16];
  LODWORD(v195) = v178;
  v185.m256i_i64[0] = v173;
  v184 = _mm_loadu_si128(&v172);
  v215 = 0;
  sub_140AC97B0(v192, &v193, &v184);
  sub_141684120(v200, v192, 136);
  if ( (unsigned __int64)(v201 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v198, v201, 1);
  v212 = 0;
  sub_14034E3A0((__int64)&v151);
  sub_140015650(v158);
  sub_14034E200(&v148);
  sub_140680AD0(v135);
  v214 = 0;
  sub_140349D70(&v161);
  if ( v169 > 0 )
    sub_140001660(v170, v169, 1);
  v210 = 0;
  sub_14067FFB0(v140);
  sub_140349D70(v164.m128i_i64);
  sub_14034E7D0(&v179);
  sub_14034A130(&v174);
  sub_14067F5D0(v156);
  a1 = v200;
  sub_14034DF40(&v143);
  sub_140009B20(v190);
  return a1;
}