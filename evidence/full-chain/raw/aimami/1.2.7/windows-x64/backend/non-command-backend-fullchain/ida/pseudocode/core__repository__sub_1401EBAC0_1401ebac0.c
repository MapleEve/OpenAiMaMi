// win 1.2.7 | module src/core/repository.rs | ea 0x1401ebac0 | name sub_1401EBAC0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401EBAC0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __m128i *v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rdi
  __m128i *v17; // rax
  __int64 *v18; // rax
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  __m128i v31; // xmm7
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // rcx
  const __m128i *v39; // rax
  const __m128i *v40; // rdx
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  char v45; // r10
  __m128i v46; // kr20_16
  unsigned __int64 v47; // r8
  const __m128i *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v52; // rcx
  __m128i v53; // kr30_16
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rsi
  __m128i *v57; // rax
  __int64 v58; // rcx
  __m128i *v59; // rdi
  __m128i *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rsi
  __m128i *v65; // rax
  __int64 v66; // rcx
  __m128i *v67; // rdi
  __m128i *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rbx
  volatile signed __int64 *v71; // rdi
  volatile signed __int64 *v72; // rsi
  __m128i v73; // rdi
  volatile signed __int64 *v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r14
  __int64 v80; // r15
  __int64 v81; // rsi
  unsigned __int64 v82; // rbx
  unsigned __int128 v84; // kr40_16
  __m128i v85; // xmm0
  __m128i v86; // xmm7
  __int64 i; // rdx
  unsigned __int64 v88; // rbx
  __m128i v89; // xmm8
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // r13
  __int64 v95; // r15
  __int64 v96; // rsi
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  unsigned int v102; // rsi^4
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdi
  __m128i *v112; // rax
  __int64 v113; // rcx
  __m128i *v114; // rbx
  __int64 v115; // rsi
  __m128i *v116; // rax
  __int64 *v117; // rax
  __m128i *v118; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v119; // [rsp+38h] [rbp-48h]
  volatile signed __int64 *v120; // [rsp+40h] [rbp-40h]
  __m128i v121[36]; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v122; // [rsp+290h] [rbp+210h] BYREF
  volatile signed __int64 *v123; // [rsp+298h] [rbp+218h]
  __m128i v124; // [rsp+2A0h] [rbp+220h] BYREF
  int v125; // [rsp+2BCh] [rbp+23Ch]
  volatile signed __int64 *v126; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v127; // [rsp+4F0h] [rbp+470h]
  __m128i v128; // [rsp+4F8h] [rbp+478h] BYREF
  int v129; // [rsp+514h] [rbp+494h]
  __m128i v130; // [rsp+740h] [rbp+6C0h] BYREF
  __m128i v131[38]; // [rsp+750h] [rbp+6D0h] BYREF
  __m128i v132; // [rsp+9B0h] [rbp+930h] BYREF
  __m128i v133[38]; // [rsp+9C0h] [rbp+940h] BYREF
  __m128i v134; // [rsp+C20h] [rbp+BA0h] BYREF
  __m128i v135; // [rsp+C30h] [rbp+BB0h] BYREF
  const char *v136; // [rsp+C40h] [rbp+BC0h]
  unsigned __int64 v137; // [rsp+C48h] [rbp+BC8h]
  __int64 v138; // [rsp+C50h] [rbp+BD0h]
  const char *v139; // [rsp+C58h] [rbp+BD8h]
  __int64 v140; // [rsp+C60h] [rbp+BE0h]
  __int64 v141; // [rsp+C68h] [rbp+BE8h]
  void *v142; // [rsp+C70h] [rbp+BF0h]
  __m128i *v143; // [rsp+C78h] [rbp+BF8h]
  __int64 v144; // [rsp+E90h] [rbp+E10h] BYREF
  __int64 v145; // [rsp+E98h] [rbp+E18h]
  __int64 v146; // [rsp+EA0h] [rbp+E20h]
  __m128i v147; // [rsp+EB0h] [rbp+E30h] BYREF
  __int128 v148; // [rsp+EC0h] [rbp+E40h]
  _QWORD v149[2]; // [rsp+ED0h] [rbp+E50h] BYREF
  __int64 **v150; // [rsp+EE0h] [rbp+E60h] BYREF
  __int64 (__fastcall *v151)(_QWORD, _QWORD); // [rsp+EE8h] [rbp+E68h]
  __int64 v152; // [rsp+EF0h] [rbp+E70h]
  __int64 v153; // [rsp+F00h] [rbp+E80h] BYREF
  __int64 v154; // [rsp+F08h] [rbp+E88h]
  __int64 v155; // [rsp+F10h] [rbp+E90h]
  __int64 v156; // [rsp+F20h] [rbp+EA0h]
  __int64 v157; // [rsp+F28h] [rbp+EA8h] BYREF
  __int64 v158; // [rsp+F30h] [rbp+EB0h]
  __int64 v159; // [rsp+F38h] [rbp+EB8h]
  __int64 *v160; // [rsp+F40h] [rbp+EC0h] BYREF
  __int64 (__fastcall *v161)(_QWORD, _QWORD); // [rsp+F48h] [rbp+EC8h]
  __int64 v162; // [rsp+F50h] [rbp+ED0h]
  __int64 v163; // [rsp+F58h] [rbp+ED8h]
  __int64 *v164; // [rsp+F60h] [rbp+EE0h]
  __int64 v165; // [rsp+F68h] [rbp+EE8h]
  __int64 v166; // [rsp+F70h] [rbp+EF0h]
  const char *v167; // [rsp+F78h] [rbp+EF8h] BYREF
  __int64 v168; // [rsp+F80h] [rbp+F00h] BYREF
  __int64 v169; // [rsp+F88h] [rbp+F08h]
  __int64 v170; // [rsp+F90h] [rbp+F10h]
  const char *v171; // [rsp+F98h] [rbp+F18h]
  __int64 v172; // [rsp+FA0h] [rbp+F20h]
  __int64 v173; // [rsp+FA8h] [rbp+F28h]
  const char *v174; // [rsp+FB0h] [rbp+F30h]
  __int64 v175; // [rsp+FB8h] [rbp+F38h]
  __int64 v176; // [rsp+FC0h] [rbp+F40h]
  char *v177; // [rsp+FC8h] [rbp+F48h]
  __int64 v178; // [rsp+FD0h] [rbp+F50h]
  __int64 v179; // [rsp+FD8h] [rbp+F58h]
  __int64 v180; // [rsp+FE0h] [rbp+F60h]
  __int64 v181; // [rsp+FE8h] [rbp+F68h]
  char v182; // [rsp+FF7h] [rbp+F77h]
  __int64 v183; // [rsp+FF8h] [rbp+F78h]
  char v184; // [rsp+1007h] [rbp+F87h] BYREF
  __int64 v185; // [rsp+1008h] [rbp+F88h]

  v185 = -2;
  v164 = a1;
  v7 = a2[33];
  v8 = a2[34];
  sub_1416828D0((unsigned int)&v144, v7, v8, (unsigned int)&unk_1419D9830, 26);
  sub_1402175F0((unsigned int)&v130, v7, v8, v145, v146, 0);
  if ( v130.m128i_i32[0] != -1 )
  {
    v133[4] = v131[4];
    v133[3] = v131[3];
    v10 = _mm_loadu_si128(&v130);
    v133[2] = v131[2];
    v133[1] = v131[1];
    v133[0] = v131[0];
    v132 = v10;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v118 = &v132;
      v119 = (volatile signed __int64 *)sub_14104A7D0;
      v138 = 2;
      v139 = aCodexmateLibCo_21;
      v140 = 31;
      v142 = &unk_1419DAFE8;
      v143 = (__m128i *)&v118;
      v134.m128i_i64[0] = 0;
      v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
      v135 = (__m128i)0x1FuLL;
      v136 = aSrcCoreReposit;
      v137 = 22;
      v141 = 0x69A00000001LL;
      sub_1414D53A0(&v184, &v134);
    }
    nullsub_1(v9);
    v11 = sub_140001650(48, 8);
    if ( !v11 )
      sub_141938D11(8, 48);
    v13 = (_QWORD *)v11;
    nullsub_1(v12);
    v14 = (__m128i *)sub_140001650(33, 1);
    if ( !v14 )
    {
      v183 = (__int64)v13;
      sub_141938D2B(1, 33);
    }
    v16 = v14;
    qmemcpy(&v14[1], "RECOVERY_DEFERRED", 17);
    *v14 = _mm_loadu_si128((const __m128i *)&xmmword_1419DA3D0);
    nullsub_1(v15);
    v17 = (__m128i *)sub_140001650(66, 1);
    if ( !v17 )
    {
      v181 = (__int64)v16;
      v183 = (__int64)v13;
      sub_141938D2B(1, 66);
    }
    qmemcpy(&v17[1], "cleanup could not be checked and will retry later.", 50);
    *v17 = _mm_loadu_si128((const __m128i *)&xmmword_1419DAF58);
    *v13 = 33;
    v13[1] = v16;
    v13[2] = 33;
    v13[3] = 66;
    v13[4] = v17;
    v13[5] = 66;
    v18 = v164;
    *v164 = 1;
    v18[1] = (__int64)v13;
    v18[2] = 1;
    result = sub_1401954F0(&v132);
    goto LABEL_8;
  }
  if ( v130.m128i_i64[1] == -1 )
  {
    result = (__int64)v164;
    *v164 = 0;
    *(_QWORD *)(result + 8) = 8;
    *(_QWORD *)(result + 16) = 0;
    goto LABEL_8;
  }
  v158 = v130.m128i_i64[1];
  v156 = v131[0].m128i_i64[1];
  v165 = v131[0].m128i_i64[0];
  sub_141695230(&v132, a2[41], a2[42]);
  if ( v132.m128i_i64[0] == -1 )
  {
    v118 = (__m128i *)v132.m128i_i64[1];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v130.m128i_i64[0] = (__int64)&v118;
      v130.m128i_i64[1] = (__int64)sub_1416BB0B0;
      v138 = 2;
      v139 = aCodexmateLibCo_21;
      v140 = 31;
      v142 = &unk_1419DAF9A;
      v143 = &v130;
      v134.m128i_i64[0] = 0;
      v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
      v135 = (__m128i)0x1FuLL;
      v136 = aSrcCoreReposit;
      v137 = 22;
      v141 = 0x6A600000001LL;
      sub_1414D53A0(&v184, &v134);
    }
    nullsub_1(v20);
    v62 = sub_140001650(48, 8);
    if ( !v62 )
      sub_141938D11(8, 48);
    v64 = (_QWORD *)v62;
    nullsub_1(v63);
    v65 = (__m128i *)sub_140001650(33, 1);
    if ( !v65 )
    {
      v183 = (__int64)v64;
      sub_141938D2B(1, 33);
    }
    v67 = v65;
    qmemcpy(&v65[1], "RECOVERY_DEFERRED", 17);
    *v65 = _mm_loadu_si128((const __m128i *)&xmmword_1419DA3D0);
    nullsub_1(v66);
    v68 = (__m128i *)sub_140001650(66, 1);
    if ( !v68 )
    {
      v181 = (__int64)v67;
      v183 = (__int64)v64;
      sub_141938D2B(1, 66);
    }
    qmemcpy(&v68[1], "cleanup could not be checked and will retry later.", 50);
    *v68 = _mm_loadu_si128((const __m128i *)&xmmword_1419DAF58);
    *v64 = 33;
    v64[1] = v67;
    v64[2] = 33;
    v64[3] = 66;
    v64[4] = v68;
    v64[5] = 66;
    v69 = v164;
    *v164 = 1;
    v69[1] = (__int64)v64;
    v69[2] = 1;
    result = (__int64)v118;
    if ( ((unsigned __int8)v118 & 3u) - 2 >= 2 && ((unsigned __int8)v118 & 3) != 0 )
    {
      v134.m128i_i64[1] = (__int64)&v118[-1].m128i_i64[1] + 7;
      v134.m128i_i8[0] = 3;
      result = sub_1416BCB00(&v134.m128i_u64[1]);
    }
    goto LABEL_214;
  }
  v163 = v132.m128i_i64[1];
  v159 = v132.m128i_i64[0];
  v21 = v133[0].m128i_i64[0];
  v22 = sub_14167F170(v20);
  v27 = v22;
  if ( *(_BYTE *)(v22 + 16) == 1 )
  {
    v28 = *(_QWORD *)v22;
    v29 = *(_QWORD *)(v27 + 8);
  }
  else
  {
    v28 = sub_141696260(v24, v23, v25, v26);
    *(_QWORD *)v27 = v28;
    *(_QWORD *)(v27 + 8) = v29;
    *(_BYTE *)(v27 + 16) = 1;
  }
  *(_QWORD *)v27 = v28 + 1;
  v148 = xmmword_1419D6520;
  v147 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
  v149[0] = v28;
  v149[1] = v29;
  v30 = a3 + 424 * a4;
  v166 = v21;
  while ( a3 != v30 )
  {
    sub_1416AB9B0(&v134, *(_QWORD *)(a3 + 224), *(_QWORD *)(a3 + 232));
    v183 = v134.m128i_i64[0];
    v31 = _mm_loadu_si128(&v135);
    v32 = v135.m128i_i64[0];
    v181 = v134.m128i_i64[1];
    v33 = sub_141682A00(v134.m128i_i64[1], v135.m128i_i64[0]);
    a3 += 424;
    if ( !v33 )
      goto LABEL_31;
    sub_141695230(&v134, v33, v34);
    v180 = v134.m128i_i64[0];
    if ( v134.m128i_i64[0] == -1 )
    {
      if ( (v134.m128i_i8[8] & 3u) - 2 >= 2 && (v134.m128i_i8[8] & 3) != 0 )
      {
        v132.m128i_i64[1] = v134.m128i_i64[1] - 1;
        v132.m128i_i8[0] = 3;
        sub_1416BCB00(&v132.m128i_u64[1]);
      }
LABEL_31:
      if ( v183 )
        sub_140001660(v181, v183, 1);
    }
    else
    {
      v179 = v134.m128i_i64[1];
      if ( !(unsigned __int8)sub_1402899E0(v134.m128i_i64[1], v135.m128i_i64[0], v163, v21)
        || (v35 = sub_141682C30(v181, v32)) == 0 )
      {
        if ( v180 )
          sub_140001660(v179, v180, 1);
        goto LABEL_31;
      }
      sub_1416AB9B0(&v134, v35, v36);
      v37 = _mm_loadu_si128(&v134);
      v133[0] = v135;
      v132 = v37;
      sub_1403A3ED0(&v134, &v147, &v132);
      v38 = v134;
      if ( v134.m128i_i64[0] == -1 )
      {
        v49 = *(_QWORD *)(v134.m128i_i64[1] - 32);
        if ( v49 != -1 && v49 )
          sub_140001660(*(_QWORD *)(v134.m128i_i64[1] - 24), v49, 1);
        *(_QWORD *)(v38.m128i_i64[1] - 32) = -1;
        if ( (unsigned __int64)(v183 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v181, v183, 1);
      }
      else
      {
        v39 = (const __m128i *)v136;
        v40 = *(const __m128i **)v136;
        v41 = *((_QWORD *)v136 + 1);
        v42 = v137 & v41;
        _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v136 + (v137 & v41))));
        if ( !(_DWORD)_R11 )
        {
          v50 = 16;
          do
          {
            v42 = v41 & (v50 + v42);
            _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v40 + v42)));
            v50 += 16;
          }
          while ( !(_DWORD)_R11 );
        }
        __asm { tzcnt   r11d, r11d }
        _R11 = v41 & (v42 + _R11);
        v45 = v40->m128i_i8[_R11];
        if ( v45 >= 0 )
        {
          _R10D = _mm_movemask_epi8(_mm_load_si128(v40));
          __asm { tzcnt   r11d, r10d }
          v45 = v40->m128i_i8[_R11];
        }
        v46 = v135;
        v47 = v137 >> 57;
        v40->m128i_i8[_R11] = v137 >> 57;
        v40[1].m128i_i8[v41 & (_R11 - 16)] = v47;
        v48 = &v40[-4 * _R11];
        v48[-4] = v38;
        v48[-3] = v46;
        v48[-2].m128i_i64[0] = v183;
        v48[-2].m128i_i64[1] = v181;
        v48[-1] = v31;
        v39[1] = _mm_sub_epi64(
                   _mm_loadu_si128(v39 + 1),
                   (__m128i)_mm_shuffle_ps((__m128)_mm_cvtsi32_si128(v45 & 1), (__m128)xmmword_1419D3560, 228));
        v21 = v166;
      }
      if ( v180 )
        sub_140001660(v179, v180, 1);
    }
  }
  sub_141695AF0(&v134, v165, v156);
  v53 = v134;
  if ( v134.m128i_i64[0] == 2 )
  {
    v130.m128i_i64[0] = v134.m128i_i64[1];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v132.m128i_i64[0] = (__int64)&v130;
      v132.m128i_i64[1] = (__int64)sub_1416BB0B0;
      v138 = 2;
      v139 = aCodexmateLibCo_21;
      v140 = 31;
      v142 = &unk_1419DAF1A;
      v143 = &v132;
      v134.m128i_i64[0] = 0;
      v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
      v135 = (__m128i)0x1FuLL;
      v136 = aSrcCoreReposit;
      v137 = 22;
      v141 = 0x6C900000001LL;
      sub_1414D53A0(&v184, &v134);
    }
    nullsub_1(v52);
    v54 = sub_140001650(48, 8);
    if ( !v54 )
      sub_141938D11(8, 48);
    v56 = (_QWORD *)v54;
    nullsub_1(v55);
    v57 = (__m128i *)sub_140001650(33, 1);
    if ( !v57 )
    {
      v183 = (__int64)v56;
      sub_141938D2B(1, 33);
    }
    v59 = v57;
    qmemcpy(&v57[1], "RECOVERY_DEFERRED", 17);
    *v57 = _mm_loadu_si128((const __m128i *)&xmmword_1419DA3D0);
    nullsub_1(v58);
    v60 = (__m128i *)sub_140001650(66, 1);
    if ( !v60 )
    {
      v181 = (__int64)v59;
      v183 = (__int64)v56;
      sub_141938D2B(1, 66);
    }
    qmemcpy(&v60[1], "cleanup could not be checked and will retry later.", 50);
    *v60 = _mm_loadu_si128((const __m128i *)&xmmword_1419DAF58);
    *v56 = 33;
    v56[1] = v59;
    v56[2] = 33;
    v56[3] = 66;
    v56[4] = v60;
    v56[5] = 66;
    v61 = v164;
    *v164 = 1;
    v61[1] = (__int64)v56;
    v61[2] = 1;
    if ( (v130.m128i_i8[0] & 3u) - 2 >= 2 && (v130.m128i_i8[0] & 3) != 0 )
    {
      v134.m128i_i64[1] = v130.m128i_i64[0] - 1;
      v134.m128i_i8[0] = 3;
      sub_1416BCB00(&v134.m128i_u64[1]);
    }
    result = sub_140371030(&v147);
    goto LABEL_212;
  }
  sub_1418F44E0(v131, &v135, 0x260u);
  v130 = v53;
  v70 = 0;
  while ( 2 )
  {
    sub_1416A31D0(&v118, &v130);
    if ( (_DWORD)v118 == 1 )
    {
      v71 = v119;
      v72 = v120;
      if ( v119 )
      {
        sub_1418F44E0(&v124, v121, 0x248u);
        v122 = v71;
        v123 = v72;
        sub_14168A660(&v153, &v122);
        if ( ((unsigned __int16)v123 & 0x400) == 0 )
        {
          if ( ((unsigned __int8)v123 & 0x10) == 0 )
            goto LABEL_82;
LABEL_76:
          sub_141695AF0(&v134, v154, v155);
          v73 = v134;
          if ( v134.m128i_i64[0] == 2 )
          {
            v126 = (volatile signed __int64 *)v134.m128i_i64[1];
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v132.m128i_i64[0] = (__int64)&v126;
              v132.m128i_i64[1] = (__int64)sub_1416BB0B0;
              v138 = 2;
              v139 = aCodexmateLibCo_21;
              v140 = 31;
              v142 = &unk_1419DAE97;
              v143 = &v132;
              v134.m128i_i64[0] = 0;
              v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
              v135 = (__m128i)0x1FuLL;
              v136 = aSrcCoreReposit;
              v137 = 22;
              v141 = 0x6EA00000001LL;
              sub_1414D53A0(&v184, &v134);
              v73.m128i_i64[1] = (__int64)v126;
            }
            if ( (v73.m128i_i8[8] & 3u) - 2 >= 2 && (v73.m128i_i8[8] & 3) != 0 )
            {
              v134.m128i_i64[1] = v73.m128i_i64[1] - 1;
              v134.m128i_i8[0] = 3;
              sub_1416BCB00(&v134.m128i_u64[1]);
            }
            goto LABEL_82;
          }
          sub_1418F44E0(v133, &v135, 0x260u);
          v132 = v73;
LABEL_88:
          sub_1416A31D0(&v134, &v132);
          if ( v134.m128i_i32[0] != 1 )
          {
            if ( v132.m128i_i64[0] )
              sub_1416A0770(&v132.m128i_u64[1]);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v133[0].m128i_i64[0]) )
              sub_14119A730(v133);
            v98 = v154;
            v99 = sub_141695010(v154, v155);
            v102 = HIDWORD(v99);
            if ( v99 )
            {
              v126 = (volatile signed __int64 *)v99;
              v183 = v98;
              switch ( v99 & 3 )
              {
                case 0LL:
                  if ( *(_BYTE *)(v99 + 16) )
                    goto LABEL_179;
                  break;
                case 1LL:
                  if ( *(_BYTE *)(v99 + 31) )
                    goto LABEL_179;
                  break;
                case 2LL:
                  v103 = sub_1416B3F10(v101, v100);
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v103 + 8))(v102) )
                    goto LABEL_179;
                  break;
                case 3LL:
                  if ( BYTE4(v99) )
                  {
LABEL_179:
                    ++v70;
                    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                    {
                      v132.m128i_i64[0] = (__int64)&v126;
                      v132.m128i_i64[1] = (__int64)sub_1416BB0B0;
                      v138 = 2;
                      v139 = aCodexmateLibCo_21;
                      v140 = 31;
                      v142 = &unk_1419DAC83;
                      v143 = &v132;
                      v134.m128i_i64[0] = 0;
                      v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
                      v135 = (__m128i)0x1FuLL;
                      v136 = aSrcCoreReposit;
                      v137 = 22;
                      v141 = 0x74300000001LL;
                      sub_1414D53A0(&v184, &v134);
                    }
                  }
                  break;
              }
              if ( ((unsigned __int8)v126 & 3u) - 2 >= 2 && ((unsigned __int8)v126 & 3) != 0 )
              {
                v134.m128i_i64[1] = (__int64)v126 - 1;
                v134.m128i_i8[0] = 3;
                sub_1416BCB00(&v134.m128i_u64[1]);
              }
              v98 = v183;
            }
            if ( v153 )
              sub_140001660(v98, v153, 1);
            if ( !_InterlockedDecrement64(v122) )
              sub_14119A730(&v122);
            continue;
          }
          v74 = (volatile signed __int64 *)v134.m128i_i64[1];
          v75 = v135.m128i_i64[0];
          if ( !v134.m128i_i64[1] )
          {
            v160 = (__int64 *)v135.m128i_i64[0];
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v150 = &v160;
              v151 = sub_1416BB0B0;
              v173 = 2;
              v174 = aCodexmateLibCo_21;
              v175 = 31;
              v177 = (char *)&unk_1419DAE55;
              v178 = (__int64)&v150;
              v167 = nullptr;
              v168 = (__int64)aCodexmateLibCo_21;
              v169 = 31;
              v170 = 0;
              v171 = aSrcCoreReposit;
              v172 = 22;
              v176 = 0x6F400000001LL;
              sub_1414D53A0(&v184, &v167);
              v75 = (__int64)v160;
            }
            if ( (unsigned int)(v75 & 3) - 2 >= 2 && (v75 & 3) != 0 )
            {
              v168 = v75 - 1;
              LOBYTE(v167) = 3;
              sub_1416BCB00(&v168);
            }
            goto LABEL_87;
          }
          sub_1418F44E0(&v128, (const __m128i *)&v135.m128i_u64[1], 0x248u);
          v126 = v74;
          v127 = v75;
          sub_14168A660(&v150, &v126);
          if ( (v127 & 0x400) != 0 )
          {
            if ( v127 & 0x10 | v129 & 0x20000000 )
            {
LABEL_108:
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v173 = 2;
                v174 = aCodexmateLibCo_21;
                v175 = 31;
                v177 = (char *)&unk_1419DAE11;
                v178 = 137;
                v167 = nullptr;
                v168 = (__int64)aCodexmateLibCo_21;
                v169 = 31;
                v170 = 0;
                v171 = aSrcCoreReposit;
                v172 = 22;
                v176 = 0x6FF00000001LL;
                sub_1414D53A0(&v184, &v167);
              }
              goto LABEL_110;
            }
          }
          else if ( (v127 & 0x10) != 0 )
          {
            goto LABEL_108;
          }
          v76 = v152;
          v183 = (__int64)v151;
          v77 = sub_141682C30(v151, v152);
          v79 = v77;
          v80 = v70;
          if ( !v77 || !*((_QWORD *)&v148 + 1) )
          {
LABEL_114:
            v92 = sub_141695140(v183, v76);
            v70 = v80;
            goto LABEL_115;
          }
          v81 = v78;
          v82 = sub_140D2BFD0(v149, v77, v78);
          _RAX = v82 >> 57;
          v84 = (unsigned __int128)v147;
          v85 = _mm_cvtsi32_si128(v82 >> 57);
          v86 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v85, v85), 0), 68);
          for ( i = 0; ; i += 16 )
          {
            v88 = *((_QWORD *)&v84 + 1) & v82;
            v89 = _mm_loadu_si128((const __m128i *)(v84 + v88));
            _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v89, v86));
            if ( _R12D )
              break;
LABEL_100:
            _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v89, (__m128i)-1LL));
            if ( (_DWORD)_RAX )
              goto LABEL_114;
            v82 = i + v88 + 16;
          }
          v180 = *((_QWORD *)&v84 + 1);
          v181 = v84;
          v179 = i;
          while ( 1 )
          {
            __asm { tzcnt   eax, r12d }
            v91 = v84 - ((*((_QWORD *)&v84 + 1) & (v88 + _RAX)) << 6);
            if ( v81 == *(_QWORD *)(v91 - 48) && !(unsigned int)sub_1418F4B70(v79, *(_QWORD *)(v91 - 56)) )
              break;
            _RAX = (unsigned int)(_R12D - 1);
            LOWORD(_RAX) = _R12D & (_R12D - 1);
            _R12D = _RAX;
            i = v179;
            v84 = __PAIR128__(v180, v181);
            if ( !(_WORD)_RAX )
              goto LABEL_100;
          }
          if ( *(_QWORD *)(v91 - 32) == -1 )
          {
            v70 = v80;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v173 = 2;
              v174 = aCodexmateLibCo_21;
              v175 = 31;
              v177 = "[AiMaMi][accounts] account removal recovery found an ambiguous snapshot file name[AiMaMi][accounts]"
                     " account removal recovery target is not a regular file[AiMaMi][accounts] account removal recovery f"
                     "ound conflicting snapshot bytes";
              v178 = 163;
              v167 = nullptr;
              v168 = (__int64)aCodexmateLibCo_21;
              v169 = 31;
              v170 = 0;
              v171 = aSrcCoreReposit;
              v172 = 22;
              v176 = 0x71400000001LL;
              sub_1414D53A0(&v184, &v167);
            }
            goto LABEL_110;
          }
          sub_141695A00(&v167, *(_QWORD *)(v91 - 24), *(_QWORD *)(v91 - 16));
          v70 = v80;
          if ( (_DWORD)v167 == 2 )
          {
            if ( (unsigned int)(v168 & 3) - 2 >= 2 && (v168 & 3) != 0 )
            {
              --v168;
              LOBYTE(v167) = 3;
              sub_1416BCB00(&v168);
            }
            v92 = sub_141695830(v183, v76, *(_QWORD *)(v91 - 24), *(_QWORD *)(v91 - 16));
            goto LABEL_115;
          }
          sub_141695550(&v167, *(_QWORD *)(v91 - 24), *(_QWORD *)(v91 - 16));
          if ( (_DWORD)v167 == 2 )
          {
            if ( (unsigned int)(v168 & 3) - 2 >= 2 && (v168 & 3) != 0 )
            {
              --v168;
              LOBYTE(v167) = 3;
              sub_1416BCB00(&v168);
            }
LABEL_151:
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v173 = 2;
              v174 = aCodexmateLibCo_21;
              v175 = 31;
              v177 = "[AiMaMi][accounts] account removal recovery target is not a regular file[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes";
              v178 = 145;
              v167 = nullptr;
              v168 = (__int64)aCodexmateLibCo_21;
              v169 = 31;
              v170 = 0;
              v171 = aSrcCoreReposit;
              v172 = 22;
              v176 = 0x72400000001LL;
              sub_1414D53A0(&v184, &v167);
            }
LABEL_110:
            if ( v150 )
              sub_140001660(v151, v150, 1);
            if ( !_InterlockedDecrement64(v126) )
              sub_14119A730(&v126);
LABEL_87:
            ++v70;
            goto LABEL_88;
          }
          if ( (v176 & 0x40000000000LL) != 0 )
          {
            if ( BYTE4(v176) & 0x10 | (unsigned int)v177 & 0x20000000 )
              goto LABEL_151;
          }
          else if ( (v176 & 0x1000000000LL) != 0 )
          {
            goto LABEL_151;
          }
          sub_14169D480(&v160, *(_QWORD *)(v91 - 24), *(_QWORD *)(v91 - 16));
          sub_14169D480(&v167, v183, v76);
          v93 = (__int64)v161;
          v94 = (__int64)v167;
          v95 = v168;
          if ( v160 != (__int64 *)-1LL )
          {
            if ( v167 == (const char *)-1LL )
            {
              if ( v160 )
                sub_140001660(v161, v160, 1);
              v93 = v95;
              goto LABEL_116;
            }
            v181 = (__int64)v160;
            if ( v162 != v169 || (unsigned int)sub_1418F4B70(v161, v168) )
            {
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v180 = v94;
                v166 = v95;
                v179 = v93;
                v167 = aCodexmateLibCo_21;
                v168 = 31;
                v169 = (__int64)aCodexmateLibCo_21;
                v170 = 31;
                v171 = (const char *)&off_1419DADB8;
                v182 = 1;
                sub_140BAD520(
                  "[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes",
                  153,
                  2,
                  &v167);
                v93 = v179;
                v95 = v166;
                v94 = v180;
              }
              if ( v181 )
                sub_140001660(v93, v181, 1);
              if ( v94 )
                sub_140001660(v95, v94, 1);
              goto LABEL_110;
            }
            v180 = v94;
            v166 = v95;
            v179 = v93;
            v92 = sub_141695140(v183, v76);
            if ( v180 )
            {
              v96 = v92;
              sub_140001660(v166, v180, 1);
              v92 = v96;
            }
            if ( v181 )
            {
              v97 = v92;
              sub_140001660(v179, v181, 1);
              v92 = v97;
            }
LABEL_115:
            v93 = v92;
            if ( v92 )
            {
LABEL_116:
              v157 = v93;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v160 = &v157;
                v161 = sub_1416BB0B0;
                v173 = 2;
                v174 = aCodexmateLibCo_21;
                v175 = 31;
                v177 = (char *)&unk_1419DADD0;
                v178 = (__int64)&v160;
                v167 = nullptr;
                v168 = (__int64)aCodexmateLibCo_21;
                v169 = 31;
                v170 = 0;
                v171 = aSrcCoreReposit;
                v172 = 22;
                v176 = 0x73B00000001LL;
                sub_1414D53A0(&v184, &v167);
                v93 = v157;
              }
              if ( (unsigned int)(v93 & 3) - 2 >= 2 && (v93 & 3) != 0 )
              {
                v168 = v93 - 1;
                LOBYTE(v167) = 3;
                sub_1416BCB00(&v168);
              }
              ++v70;
            }
            if ( v150 )
              sub_140001660(v183, v150, 1);
            if ( !_InterlockedDecrement64(v126) )
              sub_14119A730(&v126);
            goto LABEL_88;
          }
          if ( v167 == (const char *)-1LL )
          {
            if ( (unsigned int)(v168 & 3) - 2 >= 2 && (v168 & 3) != 0 )
            {
              --v168;
              LOBYTE(v167) = 3;
              sub_1416BCB00(&v168);
            }
          }
          else if ( v167 )
          {
            sub_140001660(v168, v167, 1);
          }
          goto LABEL_116;
        }
        if ( ((unsigned __int8)v123 & 0x10) != 0 && (v125 & 0x20000000) == 0 )
          goto LABEL_76;
LABEL_82:
        if ( v153 )
          sub_140001660(v154, v153, 1);
        if ( !_InterlockedDecrement64(v122) )
          sub_14119A730(&v122);
      }
      else
      {
        v126 = v120;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v132.m128i_i64[0] = (__int64)&v126;
          v132.m128i_i64[1] = (__int64)sub_1416BB0B0;
          v138 = 2;
          v139 = aCodexmateLibCo_21;
          v140 = 31;
          v142 = &unk_1419DAED3;
          v143 = &v132;
          v134.m128i_i64[0] = 0;
          v134.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
          v135 = (__m128i)0x1FuLL;
          v136 = aSrcCoreReposit;
          v137 = 22;
          v141 = 0x6D700000001LL;
          sub_1414D53A0(&v184, &v134);
          v72 = v126;
        }
        if ( ((unsigned __int8)v72 & 3u) - 2 >= 2 && ((unsigned __int8)v72 & 3) != 0 )
        {
          v134.m128i_i64[1] = (__int64)v72 - 1;
          v134.m128i_i8[0] = 3;
          sub_1416BCB00(&v134.m128i_u64[1]);
        }
      }
      ++v70;
      continue;
    }
    break;
  }
  if ( v130.m128i_i64[0] )
    sub_1416A0770(&v130.m128i_u64[1]);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v131[0].m128i_i64[0]) )
    sub_14119A730(v131);
  v104 = sub_141695010(v165, v156);
  HIDWORD(v107) = HIDWORD(v104);
  if ( v104 )
  {
    v130.m128i_i64[0] = v104;
    switch ( v104 & 3 )
    {
      case 0uLL:
        LOBYTE(v107) = *(_BYTE *)(v104 + 16);
        break;
      case 1uLL:
        LOBYTE(v107) = *(_BYTE *)(v104 + 31);
        break;
      case 2uLL:
        v108 = sub_1416B3F10(v106, v105);
        LOBYTE(v107) = (*(__int64 (__fastcall **)(_QWORD))(v108 + 8))(HIDWORD(v107));
        break;
      case 3uLL:
        v107 = HIDWORD(v104);
        break;
    }
    if ( (_BYTE)v107 )
    {
      ++v70;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v132.m128i_i64[0] = (__int64)&v130;
        v132.m128i_i64[1] = (__int64)sub_1416BB0B0;
        v134.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
        v134.m128i_i64[1] = 31;
        v135.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
        v135.m128i_i64[1] = 31;
        v136 = (const char *)&off_1419DAC30;
        sub_140BAD520(&unk_1419DABE8, &v132, 2, &v134);
      }
    }
    v106 = v130.m128i_i8[0] & 3;
    if ( (unsigned int)(v106 - 2) >= 2 && (v130.m128i_i8[0] & 3) != 0 )
    {
      v134.m128i_i64[1] = v130.m128i_i64[0] - 1;
      v134.m128i_i8[0] = 3;
      sub_1416BCB00(&v134.m128i_u64[1]);
    }
  }
  if ( v70 )
  {
    nullsub_1(v106);
    v109 = sub_140001650(48, 8);
    if ( !v109 )
      sub_141938D11(8, 48);
    v111 = v109;
    nullsub_1(v110);
    v112 = (__m128i *)sub_140001650(33, 1);
    if ( !v112 )
    {
      v183 = v111;
      sub_141938D2B(1, 33);
    }
    v114 = v112;
    qmemcpy(&v112[1], "RECOVERY_DEFERRED", 17);
    *v112 = _mm_loadu_si128((const __m128i *)&xmmword_1419DA3D0);
    nullsub_1(v113);
    v115 = 1;
    v116 = (__m128i *)sub_140001650(59, 1);
    if ( !v116 )
    {
      v181 = (__int64)v114;
      v183 = v111;
      sub_141938D2B(1, 59);
    }
    qmemcpy(&v116[1], "cleanup is incomplete and will retry later.", 43);
    *v116 = _mm_loadu_si128((const __m128i *)&xmmword_1419DAC48);
    *(_QWORD *)v111 = 33;
    *(_QWORD *)(v111 + 8) = v114;
    *(_QWORD *)(v111 + 16) = 33;
    *(_QWORD *)(v111 + 24) = 59;
    *(_QWORD *)(v111 + 32) = v116;
    *(_QWORD *)(v111 + 40) = 59;
  }
  else
  {
    v111 = 8;
    v115 = 0;
  }
  v117 = v164;
  *v164 = v115;
  v117[1] = v111;
  v117[2] = v115;
  result = sub_140371030(&v147);
LABEL_212:
  if ( v159 )
    result = sub_140001660(v163, v159, 1);
LABEL_214:
  if ( v158 )
    result = sub_140001660(v165, v158, 1);
LABEL_8:
  if ( v144 )
    return sub_140001660(v145, v144, 1);
  return result;
}
