// win 1.2.7 | module src/core/repository.rs | ea 0x1401cb610 | name sub_1401CB610
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1401CB610(__m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // r13
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __int64 v11; // rsi
  __int64 v12; // rdi
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  const __m128i *v17; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int16 v24; // ax
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  _QWORD *v32; // rbx
  __int64 v33; // rsi
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  _QWORD *v37; // rbx
  _QWORD *v38; // r12
  __int64 v39; // rsi
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i v48; // xmm2
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 *v54; // r12
  __int64 v55; // rbx
  __int64 v56; // rcx
  __m128i *v57; // rax
  _QWORD *v58; // r13
  __m128i *v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rsi
  unsigned __int64 v63; // r15
  __int64 v65; // rcx
  __int64 v66; // rsi
  __m128i v67; // xmm0
  __m128i v68; // xmm7
  __int64 i; // rdx
  unsigned __int64 v70; // r15
  __m128i v71; // xmm8
  unsigned __int64 v73; // r12
  char v74; // al
  _QWORD *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // r8
  __m128i *v78; // rsi
  _QWORD *v79; // rsi
  __int8 v80; // al
  __int64 v81; // rax
  __m128i v82; // xmm0
  __m128i *v83; // rdx
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  __int64 v86; // r14
  __int64 v87; // r13
  __int64 v88; // rsi
  __int64 v89; // r9
  __int64 v90; // rax
  __m128i *v91; // rdx
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __m128i v94; // xmm2
  __int64 v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __m128i v98; // xmm2
  __m128i *v99; // rcx
  __int64 v100; // rcx
  __m128i v101; // xmm0
  __m128i *v102; // rax
  __int64 v103; // rcx
  __m128i v104; // xmm0
  __int64 v105; // rcx
  __m128i *v106; // rax
  __m128i *v107; // rax
  __m128i v108; // xmm0
  __m128i *v109; // rax
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __m128i v112; // xmm2
  __m128i v113; // xmm0
  __m128i *v114; // rax
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm2
  _OWORD v118[6]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v119[6]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v120; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v121; // [rsp+100h] [rbp+80h]
  __m128i v122; // [rsp+120h] [rbp+A0h]
  __m128i v123; // [rsp+130h] [rbp+B0h]
  __m128i v124; // [rsp+140h] [rbp+C0h]
  __m128i v125[6]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v126; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v127; // [rsp+1C0h] [rbp+140h]
  __m128i v128; // [rsp+210h] [rbp+190h] BYREF
  __int64 v129; // [rsp+220h] [rbp+1A0h]
  _BYTE v130[48]; // [rsp+228h] [rbp+1A8h] BYREF
  __m128i v131; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v132; // [rsp+268h] [rbp+1E8h]
  __m128i v133; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v134; // [rsp+280h] [rbp+200h]
  _BYTE v135[48]; // [rsp+288h] [rbp+208h] BYREF
  __m128i v136; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v137; // [rsp+2C8h] [rbp+248h]
  __m128i v138; // [rsp+2D0h] [rbp+250h] BYREF
  __m256i v139; // [rsp+2E0h] [rbp+260h]
  __m128i v140; // [rsp+300h] [rbp+280h]
  __m128i v141; // [rsp+310h] [rbp+290h]
  __int64 v142; // [rsp+320h] [rbp+2A0h]
  __m128i v143; // [rsp+330h] [rbp+2B0h] BYREF
  __m256i v144; // [rsp+340h] [rbp+2C0h]
  __int64 v145; // [rsp+360h] [rbp+2E0h]
  __m128i v146; // [rsp+370h] [rbp+2F0h] BYREF
  __m256i v147; // [rsp+380h] [rbp+300h]
  __m128i v148; // [rsp+3A0h] [rbp+320h]
  __int64 v149[2]; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v150; // [rsp+3C8h] [rbp+348h]
  __int64 v151; // [rsp+3D0h] [rbp+350h]
  __int64 v152; // [rsp+3E0h] [rbp+360h] BYREF
  _QWORD *v153; // [rsp+3E8h] [rbp+368h]
  __int64 v154; // [rsp+3F0h] [rbp+370h]
  __int64 v155; // [rsp+3F8h] [rbp+378h]
  __m128i si128; // [rsp+400h] [rbp+380h] BYREF
  __int128 v157; // [rsp+410h] [rbp+390h]
  __int128 v158; // [rsp+420h] [rbp+3A0h] BYREF
  __m128i v159; // [rsp+430h] [rbp+3B0h] BYREF
  __m256i v160; // [rsp+440h] [rbp+3C0h] BYREF
  __m128i v161; // [rsp+460h] [rbp+3E0h]
  __m128i v162; // [rsp+470h] [rbp+3F0h]
  __int64 v163; // [rsp+480h] [rbp+400h]
  __m128i v164; // [rsp+490h] [rbp+410h] BYREF
  __int64 v165; // [rsp+4A0h] [rbp+420h]
  __int64 v166; // [rsp+4A8h] [rbp+428h] BYREF
  __int64 v167; // [rsp+4B0h] [rbp+430h]
  char v168; // [rsp+4C0h] [rbp+440h]
  char v169; // [rsp+4C1h] [rbp+441h]
  __int64 v170; // [rsp+4C8h] [rbp+448h]
  __m128i v171; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v172; // [rsp+4E0h] [rbp+460h]
  __m128i v173; // [rsp+4F0h] [rbp+470h] BYREF
  __m256i v174; // [rsp+500h] [rbp+480h]
  __m128i v175; // [rsp+520h] [rbp+4A0h]
  __m128i v176; // [rsp+530h] [rbp+4B0h]
  __m128i v177; // [rsp+540h] [rbp+4C0h]
  __int64 v178; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v179; // [rsp+560h] [rbp+4E0h]
  __int64 v180; // [rsp+568h] [rbp+4E8h]
  _QWORD *v181; // [rsp+570h] [rbp+4F0h]
  _QWORD *v182; // [rsp+578h] [rbp+4F8h]
  _QWORD *v183; // [rsp+580h] [rbp+500h]
  __int64 v184; // [rsp+588h] [rbp+508h]
  _BYTE v185[96]; // [rsp+590h] [rbp+510h] BYREF
  __m128i v186; // [rsp+620h] [rbp+5A0h] BYREF
  __m256i v187; // [rsp+630h] [rbp+5B0h]
  __m128i v188; // [rsp+650h] [rbp+5D0h]
  __m128i v189; // [rsp+660h] [rbp+5E0h]
  __m128i v190; // [rsp+670h] [rbp+5F0h]
  __int64 v191; // [rsp+680h] [rbp+600h]
  const __m128i *v192; // [rsp+688h] [rbp+608h]
  __m128i *v193; // [rsp+690h] [rbp+610h]
  char v194; // [rsp+69Ch] [rbp+61Ch]
  char v195; // [rsp+69Dh] [rbp+61Dh]
  char v196; // [rsp+69Eh] [rbp+61Eh]
  char v197; // [rsp+69Fh] [rbp+61Fh]
  __int64 v198; // [rsp+6A0h] [rbp+620h]
  char v199; // [rsp+6AEh] [rbp+62Eh]
  char v200; // [rsp+6AFh] [rbp+62Fh]
  char v201; // [rsp+6B0h] [rbp+630h]
  char v202; // [rsp+6B1h] [rbp+631h]
  char v203; // [rsp+6B2h] [rbp+632h]
  char v204; // [rsp+6B3h] [rbp+633h]
  char v205; // [rsp+6B4h] [rbp+634h]
  char v206; // [rsp+6B5h] [rbp+635h]
  char v207; // [rsp+6B6h] [rbp+636h]
  char v208; // [rsp+6B7h] [rbp+637h]
  __int64 v209; // [rsp+6B8h] [rbp+638h]

  v209 = -2;
  v184 = a3;
  v5 = a2[37];
  v6 = (_QWORD *)a2[38];
  sub_1401C7E40(v185, v5, v6);
  v7 = *(_QWORD *)v185;
  v186 = *(__m128i *)&v185[8];
  v187 = *(__m256i *)&v185[24];
  v188 = *(__m128i *)&v185[56];
  v189 = *(__m128i *)&v185[72];
  v190.m128i_i64[0] = *(_QWORD *)&v185[88];
  if ( *(_QWORD *)v185 != -1 )
  {
    a1[6].m128i_i64[0] = v190.m128i_i64[0];
    a1[5] = v189;
    v8 = _mm_load_si128(&v186);
    v9 = *(__m128i *)v187.m256i_i8;
    v10 = *(__m128i *)&v187.m256i_u64[2];
    a1[4] = v188;
    a1[3] = v10;
    a1[2] = v9;
    a1[1] = v8;
    a1->m128i_i64[1] = v7;
    a1->m128i_i64[0] = -1;
    goto LABEL_18;
  }
  v142 = v190.m128i_i64[0];
  v141 = v189;
  v140 = v188;
  v139 = v187;
  v138 = _mm_load_si128(&v186);
  v11 = v138.m128i_i64[1];
  v12 = 424 * v187.m256i_i64[0];
  v13 = (const __m128i *)sub_1402928C0(0);
  if ( !v13 )
    sub_141937FD0(&off_141A229A8);
  v14 = _mm_loadu_si128(v13);
  ++v13->m128i_i64[0];
  *(_OWORD *)&v185[16] = xmmword_141A52790;
  *(_OWORD *)v185 = *(_OWORD *)&off_141A52780;
  *(__m128i *)&v185[32] = v14;
  v186.m128i_i64[0] = v11;
  v186.m128i_i64[1] = v11 + v12;
  v187.m256i_i64[0] = v184;
  sub_1402A6340(&v186, v185);
  v193 = a1;
  v157 = *(_OWORD *)&v185[16];
  si128 = _mm_load_si128((const __m128i *)v185);
  v158 = *(_OWORD *)&v185[32];
  if ( !*(_QWORD *)&v185[24] )
  {
    sub_140D1EE10((unsigned int)v185, *(_QWORD *)(v184 + 8), *(_QWORD *)(v184 + 16), (unsigned int)&unk_1419D4620, 2);
    v187.m256i_i64[0] = *(_QWORD *)&v185[16];
    v186 = _mm_loadu_si128((const __m128i *)v185);
    *(_QWORD *)v185 = &v186;
    *(_QWORD *)&v185[8] = sub_1400015F0;
    sub_1416ABFD0(&v136, &unk_1419D9C09, v185);
    a1 = v193;
    if ( v186.m128i_i64[0] )
      sub_140001660(v186.m128i_i64[1], v186.m128i_i64[0], 1);
    a1[2].m128i_i64[0] = v137;
    a1[1] = _mm_loadu_si128(&v136);
    a1->m128i_i64[1] = 8;
    goto LABEL_16;
  }
  v182 = v6;
  v180 = v5;
  v15 = si128.m128i_i64[0];
  _RAX = si128.m128i_i64[0] + si128.m128i_i64[1] + 1;
  v191 = _RAX;
  v17 = (const __m128i *)(si128.m128i_i64[0] + 16);
  _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[0]));
  v19 = a2[41];
  v183 = a2;
  v20 = a2[42];
  v198 = *(_QWORD *)&v185[24];
  v179 = si128.m128i_i64[0] + 16;
  v192 = (const __m128i *)si128.m128i_i64[0];
  v21 = *(_QWORD *)&v185[24] - 1LL;
  do
  {
    if ( !(_WORD)_EBX )
    {
      do
      {
        v22 = _mm_load_si128(v17);
        v15 -= 896;
        ++v17;
        _EBX = _mm_movemask_epi8(v22) ^ 0xFFFF;
      }
      while ( !_EBX );
    }
    __asm { tzcnt   eax, ebx }
    sub_140ED9AE0((unsigned int)v185, *(_QWORD *)(v15 - 56 * _RAX - 24), *(_QWORD *)(v15 - 56 * _RAX - 16), v19, v20);
    if ( *(_DWORD *)v185 != -1 )
    {
      a1 = v193;
      *(__m128i *)((char *)v193 + 88) = *(__m128i *)&v185[80];
      *(__m128i *)((char *)a1 + 72) = *(__m128i *)&v185[64];
      v29 = *(__m128i *)v185;
      v30 = *(__m128i *)&v185[16];
      v31 = *(__m128i *)&v185[32];
      *(__m128i *)((char *)a1 + 56) = *(__m128i *)&v185[48];
      *(__m128i *)((char *)a1 + 40) = v31;
      *(__m128i *)((char *)a1 + 24) = v30;
      *(__m128i *)((char *)a1 + 8) = v29;
LABEL_16:
      a1->m128i_i64[0] = -1;
      goto LABEL_17;
    }
    _RAX = _EBX & (unsigned int)(_EBX - 1);
    _EBX &= _EBX - 1;
  }
  while ( v21-- != 0 );
  v24 = _mm_movemask_epi8(_mm_load_si128(v192));
  v186.m128i_i64[0] = (__int64)v192;
  v186.m128i_i64[1] = v179;
  v187.m256i_i64[0] = v191;
  v187.m256i_i16[4] = ~v24;
  v187.m256i_i64[2] = v198;
  sub_140FA6180(v185, &v186);
  v25 = *(_QWORD *)v185;
  v173 = *(__m128i *)&v185[8];
  v174.m256i_i64[0] = *(_QWORD *)&v185[24];
  if ( *(_QWORD *)v185 != -1 )
  {
    v26 = *(__m128i *)&v185[32];
    v27 = *(__m128i *)&v185[48];
    v28 = *(__m128i *)&v185[64];
    a1 = v193;
    *(__m128i *)((char *)v193 + 88) = *(__m128i *)&v185[80];
    *(__m128i *)((char *)a1 + 72) = v28;
    *(__m128i *)((char *)a1 + 56) = v27;
    *(__m128i *)((char *)a1 + 40) = v26;
    a1[2].m128i_i64[0] = v174.m256i_i64[0];
    a1[1] = _mm_load_si128(&v173);
    a1->m128i_i64[1] = v25;
    goto LABEL_16;
  }
  v171 = _mm_load_si128(&v173);
  v172 = v174.m256i_i64[0];
  v37 = v183;
  sub_1416828D0(
    (unsigned int)&v173,
    v183[33],
    v183[34],
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  a1 = v193;
  v198 = v173.m128i_i64[1];
  sub_140FE2210(
    (__int64)v185,
    v173.m128i_i32[2],
    v174.m256i_i32[0],
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v38 = v182;
  v39 = *(_QWORD *)v185;
  if ( *(_QWORD *)v185 != -1 )
  {
    v189 = *(__m128i *)&v185[80];
    v40 = _mm_loadu_si128((const __m128i *)&v185[16]);
    v188 = *(__m128i *)&v185[64];
    v187 = *(__m256i *)&v185[32];
    v186 = v40;
  }
  v41 = *(_QWORD *)&v185[8];
  if ( v173.m128i_i64[0] )
    sub_140001660(v198, v173.m128i_i64[0], 1);
  if ( (_DWORD)v39 == -1 )
  {
    v178 = v41;
    sub_1401C7E40(v185, v180, v38);
    v45 = *(_QWORD *)v185;
    v186 = *(__m128i *)&v185[8];
    v187 = *(__m256i *)&v185[24];
    v188 = *(__m128i *)&v185[56];
    v189 = *(__m128i *)&v185[72];
    v190.m128i_i64[0] = *(_QWORD *)&v185[88];
    if ( *(_QWORD *)v185 != -1 )
    {
      a1[6].m128i_i64[0] = v190.m128i_i64[0];
      a1[5] = v189;
      v46 = _mm_load_si128(&v186);
      v47 = *(__m128i *)v187.m256i_i8;
      v48 = *(__m128i *)&v187.m256i_u64[2];
      a1[4] = v188;
      a1[3] = v48;
      a1[2] = v47;
      a1[1] = v46;
      a1->m128i_i64[1] = v45;
      a1->m128i_i64[0] = -1;
LABEL_66:
      sub_140195380(&v178);
      goto LABEL_67;
    }
    v163 = v190.m128i_i64[0];
    v162 = v189;
    v49 = _mm_load_si128(&v186);
    v161 = v188;
    v160 = v187;
    v159 = v49;
    v201 = 1;
    sub_1401EBAC0(&v164, v37, v49.m128i_i64[1], v187.m256i_i64[0]);
    v50 = *(_QWORD *)(v184 + 8);
    v51 = v50 + 24LL * *(_QWORD *)(v184 + 16);
    v203 = 1;
    sub_1401ABF90(v135, v50, v51);
    v52 = v37[5];
    v53 = v37[6];
    v197 = 1;
    v54 = &v166;
    sub_1401D1C40(&v166, v52, v53);
    v55 = v166;
    if ( v166 == -1 )
    {
      if ( v168 || v169 || v160.m256i_i64[1] == -1 )
        goto LABEL_42;
      v54 = &v160.m256i_i64[1];
    }
    v207 = 1;
    if ( (unsigned __int8)sub_140373DE0(v135, v54) )
    {
      nullsub_1(v56);
      v57 = (__m128i *)sub_140001650(52, 1);
      if ( !v57 )
      {
        v207 = 1;
        sub_141938D2B(1, 52);
      }
      qmemcpy(&v57[1], "e currently active account snapshot.", 36);
      *v57 = _mm_loadu_si128((const __m128i *)&xmmword_1419D9D6E);
      a1 = v193;
      v193->m128i_i64[1] = 10;
      a1[1].m128i_i64[0] = 52;
      a1[1].m128i_i64[1] = (__int64)v57;
      a1[2].m128i_i64[0] = 52;
      a1->m128i_i64[0] = -1;
LABEL_63:
      if ( v55 > 0 )
        sub_140001660(v167, v55, 1);
      v203 = 1;
      sub_140370B80(v135);
      sub_140025A00(&v164);
      sub_140033D80(&v159);
      goto LABEL_66;
    }
LABEL_42:
    *(_QWORD *)v185 = v159.m128i_i64[1];
    *(_QWORD *)&v185[8] = v159.m128i_i64[1] + 424 * v160.m256i_i64[0];
    *(_QWORD *)&v185[16] = v135;
    v207 = 1;
    sub_1403DA6A0(&v152, v185);
    if ( !v154 )
    {
      v76 = *(_QWORD *)(v184 + 8);
      v77 = *(_QWORD *)(v184 + 16);
      v206 = 1;
      sub_140D1EE10((unsigned int)v185, v76, v77, (unsigned int)&unk_1419D4620, 2);
      v78 = v193;
      v187.m256i_i64[0] = *(_QWORD *)&v185[16];
      v186 = _mm_loadu_si128((const __m128i *)v185);
      *(_QWORD *)v185 = &v186;
      *(_QWORD *)&v185[8] = sub_1400015F0;
      sub_1416ABFD0(&v133, &unk_1419D9C09, v185);
      if ( v186.m128i_i64[0] )
        sub_140001660(v186.m128i_i64[1], v186.m128i_i64[0], 1);
      v78[2].m128i_i64[0] = v134;
      v78[1] = _mm_loadu_si128(&v133);
      v78->m128i_i64[1] = 8;
      v78->m128i_i64[0] = -1;
LABEL_62:
      v207 = 1;
      sub_140190530(&v152);
      v55 = v166;
      a1 = v193;
      goto LABEL_63;
    }
    v58 = v153;
    v170 = v154;
    v182 = &v153[53 * v154];
    v181 = v153;
    v59 = v193;
    while ( v58 != v182 )
    {
      v60 = v58[28];
      v61 = v58[29];
      v206 = 1;
      sub_1416AB9B0(v185, v60, v61);
      v198 = *(_QWORD *)&v185[8];
      v192 = *(const __m128i **)v185;
      if ( !*((_QWORD *)&v157 + 1) )
        goto LABEL_57;
      v62 = *(_QWORD *)&v185[16];
      v63 = sub_140D2AC70(&v158, v58 + 24);
      v191 = v62;
      v179 = (__int64)(v58 + 53);
      _RAX = v63 >> 57;
      v65 = si128.m128i_i64[1];
      v66 = si128.m128i_i64[0];
      v67 = _mm_cvtsi32_si128(v63 >> 57);
      v68 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v67, v67), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v70 = v65 & v63;
        v71 = _mm_loadu_si128((const __m128i *)(v66 + v70));
        _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v71, v68));
        if ( _EDI )
          break;
LABEL_52:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v71, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_57;
        v63 = i + v70 + 16;
      }
      v55 = v58[26];
      v180 = v65;
      v155 = i;
      while ( 1 )
      {
        __asm { tzcnt   eax, edi }
        if ( v55 == *(_QWORD *)(v66 - 56 * (v65 & (v70 + _RAX)) - 40) )
        {
          v73 = v66 - 56 * (v65 & (v70 + _RAX));
          if ( !(unsigned int)sub_1418F4B70(v58[25], *(_QWORD *)(v73 - 48)) )
            break;
        }
        _RAX = (unsigned int)(_EDI - 1);
        LOWORD(_RAX) = _EDI & (_EDI - 1);
        _EDI = _RAX;
        v59 = v193;
        v65 = v180;
        i = v155;
        if ( !(_WORD)_RAX )
          goto LABEL_52;
      }
      v74 = sub_1402899E0(*(_QWORD *)(v73 - 24), *(_QWORD *)(v73 - 16), v198, v191);
      v59 = v193;
      if ( !v74 )
      {
LABEL_57:
        *(_QWORD *)v185 = v58 + 24;
        *(_QWORD *)&v185[8] = sub_1400015F0;
        sub_1416ABFD0(&v131, &unk_1419D9C28, v185);
        v59[2].m128i_i64[0] = v132;
        v59[1] = _mm_loadu_si128(&v131);
        v59->m128i_i64[1] = 10;
        v59->m128i_i64[0] = -1;
        if ( v192 )
          sub_140001660(v198, v192, 1);
        goto LABEL_62;
      }
      v75 = (_QWORD *)v179;
      v58 = (_QWORD *)v179;
      if ( v192 )
      {
        sub_140001660(v198, v192, 1);
        v58 = v75;
      }
    }
    v206 = 1;
    sub_1401AC100(v130, v181, v182);
    v204 = 1;
    sub_14037BD70(&v159, v130);
    v79 = v183;
    if ( v160.m256i_i64[1] != -1 )
    {
      v204 = 1;
      if ( (unsigned __int8)sub_140373DE0(v135, &v160.m256i_u64[1]) )
      {
        if ( v160.m256i_i64[1] != -1 && v160.m256i_i64[1] )
          sub_140001660(v160.m256i_i64[2], v160.m256i_i64[1], 1);
        v160.m256i_i64[1] = -1;
        v79 = v183;
      }
    }
    v204 = 1;
    sub_1403F19B0(&v126, v79 + 68);
    v80 = *((_BYTE *)v79 + 568);
    v174.m256i_i64[0] = v127;
    v173 = _mm_loadu_si128(&v126);
    v174.m256i_i8[8] = v80;
    v204 = 1;
    sub_1401C5130((__int64)v185, (__int64)&v173);
    v81 = *(_QWORD *)v185;
    v186 = *(__m128i *)&v185[8];
    v187 = *(__m256i *)&v185[24];
    v188.m128i_i64[0] = *(_QWORD *)&v185[56];
    if ( *(_QWORD *)v185 != -1 )
    {
      v82 = *(__m128i *)&v185[64];
      v83 = v193;
      *(__m128i *)((char *)v193 + 88) = *(__m128i *)&v185[80];
      *(__m128i *)((char *)v83 + 72) = v82;
      v83[4].m128i_i64[0] = v188.m128i_i64[0];
      v84 = _mm_load_si128(&v186);
      v85 = *(__m128i *)v187.m256i_i8;
      v83[3] = *(__m128i *)&v187.m256i_u64[2];
      v83[2] = v85;
      v83[1] = v84;
      v83->m128i_i64[1] = v81;
      v83->m128i_i64[0] = -1;
LABEL_111:
      sub_140371350(v130);
      goto LABEL_62;
    }
    v143 = _mm_load_si128(&v186);
    v144 = v187;
    v145 = v188.m128i_i64[0];
    v86 = v79[69];
    v87 = v79[70];
    v196 = 1;
    sub_14021B070(v149, v86, v87);
    v88 = v150;
    v205 = 1;
    sub_14037C360(v149, v130);
    v205 = 1;
    v162.m128i_i64[1] = sub_140ED4BD0();
    v205 = 1;
    sub_1401C6C40(v185, v183, v181, v170);
    v90 = *(_QWORD *)v185;
    v186 = *(__m128i *)&v185[8];
    v187 = *(__m256i *)&v185[24];
    v188 = *(__m128i *)&v185[56];
    if ( *(_QWORD *)v185 != -1 )
    {
      v91 = v193;
      v193[6].m128i_i64[0] = *(_QWORD *)&v185[88];
      v91[5] = *(__m128i *)&v185[72];
      v92 = _mm_load_si128(&v186);
      v93 = *(__m128i *)v187.m256i_i8;
      v94 = *(__m128i *)&v187.m256i_u64[2];
      v91[4] = v188;
      v91[3] = v94;
      v91[2] = v93;
      v91[1] = v92;
      v91->m128i_i64[1] = v90;
      v91->m128i_i64[0] = -1;
LABEL_110:
      sub_140034090(v149);
      sub_140194B60(&v143);
      goto LABEL_111;
    }
    v146 = _mm_load_si128(&v186);
    v147 = v187;
    v148 = v188;
    if ( v150 == v88 )
    {
      v198 = -1;
    }
    else
    {
      v202 = 1;
      v151 = sub_140ED4BD0();
      v202 = 1;
      sub_14021AC80(v185, v149);
      v198 = *(_QWORD *)&v185[8];
      v95 = *(_QWORD *)v185;
      v55 = *(_QWORD *)&v185[24];
      v192 = *(const __m128i **)&v185[16];
      if ( *(_QWORD *)v185 != -1 )
      {
        v96 = _mm_loadu_si128((const __m128i *)&v185[32]);
        v97 = *(__m128i *)&v185[48];
        v98 = *(__m128i *)&v185[64];
        v99 = v193;
        *(__m128i *)((char *)v193 + 88) = *(__m128i *)&v185[80];
        *(__m128i *)((char *)v99 + 72) = v98;
        *(__m128i *)((char *)v99 + 56) = v97;
        *(__m128i *)((char *)v99 + 40) = v96;
        v99[1].m128i_i64[0] = v198;
        v99[1].m128i_i64[1] = (__int64)v192;
        v99[2].m128i_i64[0] = v55;
        v99->m128i_i64[1] = v95;
        v99->m128i_i64[0] = -1;
LABEL_109:
        v205 = 1;
        sub_140194C80((__int64)&v146);
        goto LABEL_110;
      }
      sub_1401D0080(v125, v86, v87, v149);
      if ( v125[0].m128i_i32[0] != -1 )
      {
        v195 = 1;
        sub_1401C7990(v185, (__int64)&v146);
        if ( *(_DWORD *)v185 == -1 )
        {
          *(_QWORD *)&v119[0] = -1;
        }
        else
        {
          v119[5] = *(_OWORD *)&v185[80];
          v119[4] = *(_OWORD *)&v185[64];
          v119[3] = *(_OWORD *)&v185[48];
          v119[2] = *(_OWORD *)&v185[32];
          v119[1] = *(_OWORD *)&v185[16];
          v119[0] = _mm_loadu_si128((const __m128i *)v185);
        }
        *(__m128i *)&v185[80] = v125[5];
        *(__m128i *)&v185[64] = v125[4];
        v113 = _mm_loadu_si128(v125);
        *(__m128i *)&v185[48] = v125[3];
        *(__m128i *)&v185[32] = v125[2];
        *(__m128i *)&v185[16] = v125[1];
        *(__m128i *)v185 = v113;
        v195 = 0;
        sub_140215E90(&v186, v185, v119);
        v114 = v193;
        *(__m128i *)((char *)v193 + 88) = v190;
        *(__m128i *)((char *)v114 + 72) = v189;
        v115 = _mm_loadu_si128(&v186);
        v116 = *(__m128i *)v187.m256i_i8;
        v117 = *(__m128i *)&v187.m256i_u64[2];
        *(__m128i *)((char *)v114 + 56) = v188;
        *(__m128i *)((char *)v114 + 40) = v117;
        *(__m128i *)((char *)v114 + 24) = v116;
        *(__m128i *)((char *)v114 + 8) = v115;
        v114->m128i_i64[0] = -1;
        if ( !v198 )
          goto LABEL_109;
        goto LABEL_108;
      }
    }
    v208 = 1;
    LOBYTE(v89) = 1;
    sub_1401CF760(&v120, v183, &v159, v89);
    if ( v120.m128i_i32[0] == -1 )
    {
      v208 = 1;
      sub_1401EB2A0(&v186, v183);
      if ( v186.m128i_i32[0] != -1 )
      {
        *(__m128i *)&v185[80] = v190;
        *(__m128i *)&v185[64] = v189;
        v101 = _mm_loadu_si128(&v186);
        *(__m128i *)&v185[48] = v188;
        *(__m256i *)&v185[16] = v187;
        *(__m128i *)v185 = v101;
        nullsub_1(v100);
        v191 = sub_140001650(36, 1);
        if ( !v191 )
          sub_141938D2B(1, 36);
        v102 = (__m128i *)v191;
        *(_OWORD *)(v191 + 16) = xmmword_1419D9AD4;
        *v102 = _mm_loadu_si128((const __m128i *)&xmmword_1419D9AC4);
        v102[2].m128i_i32[0] = 1145392201;
        v173.m128i_i64[0] = (__int64)v185;
        v173.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v128, &unk_1419D9C5C, &v173);
        v173.m128i_i64[0] = 36;
        v173.m128i_i64[1] = v191;
        v174.m256i_i64[0] = 36;
        *(__m128i *)&v174.m256i_u64[1] = _mm_loadu_si128(&v128);
        v174.m256i_i64[3] = v129;
        sub_14016E9E0(&v164, (__int128 *)v173.m128i_i8);
        v208 = 1;
        sub_1401954F0(v185);
      }
      v208 = 1;
      sub_1401C6AD0(&v186, &v146);
      if ( v186.m128i_i32[0] != -1 )
      {
        *(__m128i *)&v185[80] = v190;
        *(__m128i *)&v185[64] = v189;
        v104 = _mm_loadu_si128(&v186);
        *(__m128i *)&v185[48] = v188;
        *(__m256i *)&v185[16] = v187;
        *(__m128i *)v185 = v104;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v126.m128i_i64[0] = (__int64)v185;
          v126.m128i_i64[1] = (__int64)sub_14104A7D0;
          v173.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
          v173.m128i_i64[1] = 31;
          v174.m256i_i64[0] = (__int64)aCodexmateLibCo_21;
          v174.m256i_i64[1] = 31;
          v174.m256i_i64[2] = (__int64)&off_1419D9CF0;
          sub_140BAD520(&unk_1419D9CA8, &v126, 2, &v173);
        }
        nullsub_1(v103);
        v191 = sub_140001650(32, 1);
        if ( !v191 )
          sub_141938D2B(1, 32);
        v106 = (__m128i *)v191;
        *(_OWORD *)(v191 + 16) = xmmword_1419D9D18;
        *v106 = _mm_loadu_si128((const __m128i *)&xmmword_1419D9D08);
        nullsub_1(v105);
        v107 = (__m128i *)sub_140001650(70, 1);
        if ( !v107 )
          sub_141938D2B(1, 70);
        qmemcpy(&v107[1], "completed; private cleanup will retry on next startup.", 54);
        *v107 = _mm_loadu_si128((const __m128i *)&xmmword_1419D9D28);
        v173.m128i_i64[0] = 32;
        v173.m128i_i64[1] = v191;
        v174.m256i_i64[0] = 32;
        v174.m256i_i64[1] = 70;
        v174.m256i_i64[2] = (__int64)v107;
        v174.m256i_i64[3] = 70;
        sub_14016E9E0(&v164, (__int128 *)v173.m128i_i8);
        v208 = 1;
        sub_1401954F0(v185);
      }
      v208 = 1;
      sub_1403EBBA0(v185, v181, v182);
      v187.m256i_i64[3] = v160.m256i_i64[3];
      *(_OWORD *)&v187.m256i_u64[1] = *(_OWORD *)&v160.m256i_u64[1];
      v186 = *(__m128i *)v185;
      v187.m256i_i64[0] = *(_QWORD *)&v185[16];
      v188.m128i_i32[0] = v170;
      v174.m256i_i64[0] = v165;
      v173 = _mm_loadu_si128(&v164);
      v208 = 0;
      sub_140FE6B00(v185, &v186, &v173);
      sub_1418F44E0(v193, (const __m128i *)v185, 0x88u);
      if ( (unsigned __int64)(v198 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v192, v198, 1);
      v205 = 0;
      sub_140194C80((__int64)&v146);
      sub_140034090(v149);
      sub_140194B60(&v143);
      sub_140371350(v130);
      v207 = 0;
      sub_140190530(&v152);
      if ( v166 > 0 )
        sub_140001660(v167, v166, 1);
      v203 = 0;
      sub_140370B80(v135);
      sub_140190530(v159.m128i_i64);
      sub_140195380(&v178);
      sub_140190810(&v171);
      sub_14029A620(&si128);
      a1 = v193;
      sub_140033D80(&v138);
      sub_140025530(v184);
      return a1;
    }
    if ( v198 == -1 )
    {
      v126.m128i_i64[0] = -1;
    }
    else
    {
      v200 = 1;
      sub_1401B1360(&v126, &v143, v192, v55);
    }
    v199 = 1;
    sub_1401C7990(v185, (__int64)&v146);
    if ( *(_DWORD *)v185 == -1 )
    {
      *(_QWORD *)&v118[0] = -1;
    }
    else
    {
      v118[5] = *(_OWORD *)&v185[80];
      v118[4] = *(_OWORD *)&v185[64];
      v118[3] = *(_OWORD *)&v185[48];
      v118[2] = *(_OWORD *)&v185[32];
      v118[1] = *(_OWORD *)&v185[16];
      v118[0] = _mm_loadu_si128((const __m128i *)v185);
    }
    v190 = v124;
    v189 = v123;
    v108 = _mm_loadu_si128(&v120);
    v188 = v122;
    v187 = v121;
    v186 = v108;
    v194 = 1;
    sub_140210890(v185, &v126, v118);
    v194 = 0;
    sub_140215E90(&v173, &v186, v185);
    v109 = v193;
    *(__m128i *)((char *)v193 + 88) = v177;
    *(__m128i *)((char *)v109 + 72) = v176;
    v110 = _mm_loadu_si128(&v173);
    v111 = *(__m128i *)v174.m256i_i8;
    v112 = *(__m128i *)&v174.m256i_u64[2];
    *(__m128i *)((char *)v109 + 56) = v175;
    *(__m128i *)((char *)v109 + 40) = v112;
    *(__m128i *)((char *)v109 + 24) = v111;
    *(__m128i *)((char *)v109 + 8) = v110;
    v109->m128i_i64[0] = -1;
    if ( (unsigned __int64)(v198 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_109;
LABEL_108:
    sub_140001660(v192, v198, 1);
    goto LABEL_109;
  }
  *(__m128i *)((char *)a1 + 88) = v189;
  v42 = _mm_load_si128(&v186);
  v43 = *(__m128i *)v187.m256i_i8;
  v44 = *(__m128i *)&v187.m256i_u64[2];
  *(__m128i *)((char *)a1 + 72) = v188;
  *(__m128i *)((char *)a1 + 56) = v44;
  *(__m128i *)((char *)a1 + 40) = v43;
  *(__m128i *)((char *)a1 + 24) = v42;
  a1->m128i_i64[1] = v39;
  a1[1].m128i_i64[0] = v41;
  a1->m128i_i64[0] = -1;
LABEL_67:
  sub_1403FB7C0(&v171);
  if ( v171.m128i_i64[0] )
    sub_140001660(v171.m128i_i64[1], 8 * v171.m128i_i64[0], 8);
LABEL_17:
  sub_14029A620(&si128);
  sub_140033D80(&v138);
LABEL_18:
  v32 = (_QWORD *)v184;
  v33 = *(_QWORD *)(v184 + 16);
  if ( v33 )
  {
    v34 = (_QWORD *)(*(_QWORD *)(v184 + 8) + 8LL);
    do
    {
      v35 = *(v34 - 1);
      if ( v35 )
        sub_140001660(*v34, v35, 1);
      v34 += 3;
      --v33;
    }
    while ( v33 );
  }
  if ( *v32 )
    sub_140001660(v32[1], 24LL * *v32, 8);
  return a1;
}
