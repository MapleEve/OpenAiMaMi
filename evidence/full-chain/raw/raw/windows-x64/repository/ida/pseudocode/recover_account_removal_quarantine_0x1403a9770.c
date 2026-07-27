// module: codexmate_lib/core/repository
// addr: 0x1403a9770
// name: recover_account_removal_quarantine
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::recover_account_removal_quarantine | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall recover_account_removal_quarantine(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __m128i *v15; // rax
  __int64 v16; // rcx
  __m128i *v17; // rbx
  __m128i *v18; // rax
  __int64 *v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  __m128i *v26; // r15
  __m128i v27; // rax
  __int64 v28; // r12
  __m128i v29; // xmm7
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __m128i v37; // rcx
  const __m128i *v38; // rax
  const __m128i *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // r10
  char v44; // r10
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // r8
  const __m128i *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v52; // rcx
  __m128i v53; // kr20_16
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rdi
  __m128i *v57; // rax
  __int64 v58; // rcx
  __m128i *v59; // rbx
  __m128i *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rdi
  __m128i *v65; // rax
  __int64 v66; // rcx
  __m128i *v67; // rbx
  __m128i *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // r13
  __m128i si128; // xmm6
  __m128i v72; // xmm7
  volatile signed __int64 *v73; // rdi
  volatile signed __int64 *v74; // rsi
  __m128i v75; // rdi
  volatile signed __int64 *v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rbx
  __m128i v83; // xmm0
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned __int64 v110; // rsi
  __int64 v112; // rcx
  __int64 v113; // r13
  __m128i v114; // xmm0
  __m128i v115; // xmm10
  __int64 i; // rdx
  unsigned __int64 v117; // rsi
  __m128i v118; // xmm11
  unsigned __int64 v120; // r12
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rdi
  __m128i v124; // xmm1
  __int64 v125; // r14
  __int64 v126; // r12
  __int64 v127; // rbx
  __int64 v128; // rsi
  volatile signed __int64 *v129; // rax
  char v130; // al
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdi
  __m128i *v136; // rax
  __int64 v137; // rcx
  __m128i *v138; // rbx
  __int64 v139; // rsi
  __m128i *v140; // rax
  __int64 *v141; // rax
  __m128i *v142; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v143; // [rsp+38h] [rbp-48h]
  volatile signed __int64 *v144; // [rsp+40h] [rbp-40h]
  char v145[584]; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v146; // [rsp+290h] [rbp+210h] BYREF
  volatile signed __int64 *v147; // [rsp+298h] [rbp+218h]
  char v148[28]; // [rsp+2A0h] [rbp+220h] BYREF
  int v149; // [rsp+2BCh] [rbp+23Ch]
  volatile signed __int64 *v150; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v151; // [rsp+4F0h] [rbp+470h]
  char v152[28]; // [rsp+4F8h] [rbp+478h] BYREF
  int v153; // [rsp+514h] [rbp+494h]
  __m128i v154; // [rsp+740h] [rbp+6C0h] BYREF
  _OWORD v155[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v156; // [rsp+770h] [rbp+6F0h]
  __int128 v157; // [rsp+780h] [rbp+700h]
  __int128 v158; // [rsp+790h] [rbp+710h]
  __m128i v159; // [rsp+9B0h] [rbp+930h] BYREF
  __m128i v160; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v161; // [rsp+9D0h] [rbp+950h]
  __int128 v162; // [rsp+9E0h] [rbp+960h]
  __int128 v163; // [rsp+9F0h] [rbp+970h]
  __int128 v164; // [rsp+A00h] [rbp+980h]
  __m128i v165; // [rsp+C20h] [rbp+BA0h] BYREF
  __m128i v166; // [rsp+C30h] [rbp+BB0h] BYREF
  __int128 v167; // [rsp+C40h] [rbp+BC0h]
  __int128 v168; // [rsp+C50h] [rbp+BD0h]
  __int64 v169; // [rsp+C60h] [rbp+BE0h]
  __int64 v170; // [rsp+C68h] [rbp+BE8h]
  void *v171; // [rsp+C70h] [rbp+BF0h]
  __m128i *v172; // [rsp+C78h] [rbp+BF8h]
  __int64 v173; // [rsp+E90h] [rbp+E10h] BYREF
  __int64 v174; // [rsp+E98h] [rbp+E18h]
  __int64 v175; // [rsp+EA0h] [rbp+E20h]
  __m128i v176; // [rsp+EB0h] [rbp+E30h] BYREF
  __int128 v177; // [rsp+EC0h] [rbp+E40h]
  __m128i v178; // [rsp+ED0h] [rbp+E50h] BYREF
  __m128i v179; // [rsp+EE8h] [rbp+E68h] BYREF
  __int64 v180; // [rsp+EF8h] [rbp+E78h]
  __m128i v181; // [rsp+F00h] [rbp+E80h] BYREF
  __m128i v182; // [rsp+F10h] [rbp+E90h]
  __int128 v183; // [rsp+F20h] [rbp+EA0h]
  __int128 v184; // [rsp+F30h] [rbp+EB0h]
  __m128i v185; // [rsp+F40h] [rbp+EC0h]
  char *v186; // [rsp+F50h] [rbp+ED0h]
  __int64 v187; // [rsp+F60h] [rbp+EE0h] BYREF
  __int64 v188; // [rsp+F68h] [rbp+EE8h]
  __int64 v189; // [rsp+F70h] [rbp+EF0h]
  __int64 v190; // [rsp+F80h] [rbp+F00h] BYREF
  __int64 v191; // [rsp+F88h] [rbp+F08h]
  __int64 v192; // [rsp+F90h] [rbp+F10h]
  __int64 v193; // [rsp+FA0h] [rbp+F20h]
  __int64 v194; // [rsp+FA8h] [rbp+F28h]
  __m128i v195; // [rsp+FB0h] [rbp+F30h]
  __int64 v196; // [rsp+FC0h] [rbp+F40h]
  __int64 v197; // [rsp+FC8h] [rbp+F48h]
  __int64 *v198; // [rsp+FD0h] [rbp+F50h]
  __int64 v199; // [rsp+FD8h] [rbp+F58h]
  __m128i v200; // [rsp+FE0h] [rbp+F60h] BYREF
  __m256i v201; // [rsp+FF0h] [rbp+F70h] BYREF
  __int128 v202; // [rsp+1010h] [rbp+F90h]
  __m128i v203; // [rsp+1020h] [rbp+FA0h] BYREF
  char *v204; // [rsp+1030h] [rbp+FB0h]
  __int64 v205; // [rsp+1038h] [rbp+FB8h]
  __int64 v206; // [rsp+1048h] [rbp+FC8h]
  __int64 v207; // [rsp+1050h] [rbp+FD0h]
  __int64 v208; // [rsp+1058h] [rbp+FD8h]
  char v209; // [rsp+1067h] [rbp+FE7h]
  __int64 v210; // [rsp+1068h] [rbp+FE8h]
  char v211; // [rsp+1077h] [rbp+FF7h] BYREF
  __int64 v212; // [rsp+1078h] [rbp+FF8h]

  v212 = -2;
  v198 = a1;
  v7 = a2[33];
  v8 = a2[34];
  sub_141473FA0((unsigned int)&v173, v7, v8, (unsigned int)&unk_14174E290, 26);
  v9 = v174;
  canonical_managed_child_directory((unsigned int)&v154, v7, v8, v174, v175, 0);
  if ( v154.m128i_i32[0] != -1 )
  {
    v164 = v158;
    v163 = v157;
    v11 = _mm_loadu_si128(&v154);
    v162 = v156;
    v161 = v155[1];
    v160 = (__m128i)v155[0];
    v159 = v11;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v142 = &v159;
      v143 = (volatile signed __int64 *)sub_140B036A0;
      v165.m128i_i64[0] = 0;
      v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
      v166 = (__m128i)0x1FuLL;
      *(_QWORD *)&v167 = aSrcCoreReposit;
      *((_QWORD *)&v167 + 1) = 22;
      *(_QWORD *)&v168 = 2;
      *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
      v169 = 31;
      v170 = 0x61D00000001LL;
      v171 = &unk_14174FAE8;
      v172 = (__m128i *)&v142;
      sub_1412C36A0(&v211, &v165);
    }
    nullsub_1(v10);
    v12 = sub_140001650(48, 8);
    if ( !v12 )
      sub_1416C2D31(8, 48);
    v14 = (_QWORD *)v12;
    nullsub_1(v13);
    v15 = (__m128i *)sub_140001650(33, 1);
    if ( !v15 )
    {
      v210 = (__int64)v14;
      sub_1416C2D4B(1, 33);
    }
    v17 = v15;
    qmemcpy(&v15[1], "RECOVERY_DEFERRED", 17);
    *v15 = _mm_loadu_si128((const __m128i *)&xmmword_14174EF20);
    nullsub_1(v16);
    v18 = (__m128i *)sub_140001650(66, 1);
    if ( !v18 )
    {
      v208 = (__int64)v17;
      v210 = (__int64)v14;
      sub_1416C2D4B(1, 66);
    }
    qmemcpy(&v18[1], "cleanup could not be checked and will retry later.", 50);
    *v18 = _mm_loadu_si128((const __m128i *)&xmmword_14174FA58);
    *v14 = 33;
    v14[1] = v17;
    v14[2] = 33;
    v14[3] = 66;
    v14[4] = v18;
    v14[5] = 66;
    v19 = v198;
    *v198 = 1;
    v19[1] = (__int64)v14;
    v19[2] = 1;
    result = sub_14034ED40(&v159);
    goto LABEL_8;
  }
  if ( v154.m128i_i64[1] == -1 )
  {
    result = (__int64)v198;
    *v198 = 0;
    *(_QWORD *)(result + 8) = 8;
    *(_QWORD *)(result + 16) = 0;
    goto LABEL_8;
  }
  v194 = v154.m128i_i64[1];
  v193 = *((_QWORD *)&v155[0] + 1);
  v199 = *(_QWORD *)&v155[0];
  sub_141485FE0(&v159, a2[41], a2[42]);
  if ( v159.m128i_i64[0] == -1 )
  {
    v142 = (__m128i *)v159.m128i_i64[1];
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v154.m128i_i64[0] = (__int64)&v142;
      v154.m128i_i64[1] = (__int64)sub_141490720;
      v165.m128i_i64[0] = 0;
      v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
      v166 = (__m128i)0x1FuLL;
      *(_QWORD *)&v167 = aSrcCoreReposit;
      *((_QWORD *)&v167 + 1) = 22;
      *(_QWORD *)&v168 = 2;
      *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
      v169 = 31;
      v170 = 0x62900000001LL;
      v171 = &unk_14174FA9A;
      v172 = &v154;
      sub_1412C36A0(&v211, &v165);
    }
    nullsub_1(v23);
    v62 = sub_140001650(48, 8);
    if ( !v62 )
      sub_1416C2D31(8, 48);
    v64 = (_QWORD *)v62;
    nullsub_1(v63);
    v65 = (__m128i *)sub_140001650(33, 1);
    if ( !v65 )
    {
      v210 = (__int64)v64;
      sub_1416C2D4B(1, 33);
    }
    v67 = v65;
    qmemcpy(&v65[1], "RECOVERY_DEFERRED", 17);
    *v65 = _mm_loadu_si128((const __m128i *)&xmmword_14174EF20);
    nullsub_1(v66);
    v68 = (__m128i *)sub_140001650(66, 1);
    if ( !v68 )
    {
      v208 = (__int64)v67;
      v210 = (__int64)v64;
      sub_1416C2D4B(1, 66);
    }
    qmemcpy(&v68[1], "cleanup could not be checked and will retry later.", 50);
    *v68 = _mm_loadu_si128((const __m128i *)&xmmword_14174FA58);
    *v64 = 33;
    v64[1] = v67;
    v64[2] = 33;
    v64[3] = 66;
    v64[4] = v68;
    v64[5] = 66;
    v69 = v198;
    *v198 = 1;
    v69[1] = (__int64)v64;
    v69[2] = 1;
    result = sub_140018650(&v142);
LABEL_61:
    if ( v194 )
      result = sub_140001660(v199, v194, 1);
LABEL_8:
    v21 = v173;
    if ( v173 )
      return sub_140001660(v9, v21, 1);
    return result;
  }
  v195 = v159;
  v24 = v160.m128i_i64[0];
  v25 = sub_141470CD0(v23, v22);
  v26 = (__m128i *)v25;
  if ( *(_BYTE *)(v25 + 16) == 1 )
  {
    v27 = *(__m128i *)v25;
  }
  else
  {
    v27.m128i_i64[0] = sub_141486EF0();
    *v26 = v27;
    v26[1].m128i_i8[0] = 1;
  }
  v26->m128i_i64[0] = v27.m128i_i64[0] + 1;
  v177 = *(&off_14174C6F0 + 1);
  v176 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
  v178 = v27;
  v28 = a3 + 424 * a4;
  v196 = v9;
  v197 = v24;
  while ( a3 != v28 )
  {
    sub_14149BB70(&v165, *(_QWORD *)(a3 + 224), *(_QWORD *)(a3 + 232));
    v210 = v165.m128i_i64[0];
    v29 = _mm_loadu_si128(&v166);
    v30 = v166.m128i_i64[0];
    v208 = v165.m128i_i64[1];
    v31 = sub_1414740B0(v165.m128i_i64[1], v166.m128i_i64[0]);
    a3 += 424;
    if ( !v31 )
      goto LABEL_35;
    sub_141485FE0(&v165, v31, v32);
    v207 = v165.m128i_i64[0];
    if ( v165.m128i_i64[0] == -1 )
    {
      sub_140018650(&v165.m128i_u64[1]);
      goto LABEL_35;
    }
    v206 = v165.m128i_i64[1];
    sub_141473290(&v154, v165.m128i_i64[1], v166.m128i_i64[0]);
    sub_141473290(&v159, v195.m128i_i64[1], v24);
    if ( (v154.m128i_i64[1] == v159.m128i_i64[1]
       && BYTE8(v156) == BYTE8(v162)
       && BYTE9(v156) == 2
       && BYTE9(v162) == 2
       && LOBYTE(v155[0]) < 3u == v160.m128i_i8[0] < 3u
       && !(unsigned int)sub_1416847B0(v154.m128i_i64[0], v159.m128i_i64[0], v154.m128i_i64[1])
       || (v33 = _mm_loadu_si128(&v159),
           v168 = v162,
           v167 = v161,
           v166 = v160,
           v165 = v33,
           (unsigned __int8)sub_140467AB0(&v154, &v165)))
      && (v34 = sub_1414742C0(v208, v30)) != 0 )
    {
      sub_14149BB70(&v165, v34, v35);
      v36 = _mm_loadu_si128(&v165);
      v160 = v166;
      v159 = v36;
      sub_14046D2C0(&v165, &v176, &v159);
      v37 = v165;
      if ( v165.m128i_i64[0] == -1 )
      {
        v49 = *(_QWORD *)(v165.m128i_i64[1] - 32);
        if ( v49 > 0 )
          sub_140001660(*(_QWORD *)(v165.m128i_i64[1] - 24), v49, 1);
        *(_QWORD *)(v37.m128i_i64[1] - 32) = -1;
        if ( (unsigned __int64)(v210 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v208, v210, 1);
      }
      else
      {
        v38 = (const __m128i *)v167;
        v39 = *(const __m128i **)v167;
        v40 = *(_QWORD *)(v167 + 8);
        v41 = *((_QWORD *)&v167 + 1) & v40;
        _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v167
                                                                               + (*((_QWORD *)&v167 + 1) & v40))));
        if ( !(_DWORD)_R11 )
        {
          v50 = 16;
          do
          {
            v41 = v40 & (v50 + v41);
            _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v39 + v41)));
            v50 += 16;
          }
          while ( !(_DWORD)_R11 );
        }
        __asm { tzcnt   r11d, r11d }
        _R11 = v40 & (v41 + _R11);
        v44 = v39->m128i_i8[_R11];
        if ( v44 >= 0 )
        {
          _R10D = _mm_movemask_epi8(_mm_load_si128(v39));
          __asm { tzcnt   r11d, r10d }
          v44 = v39->m128i_i8[_R11];
        }
        v46 = v166.m128i_i64[1];
        v45 = v166.m128i_i64[0];
        v47 = *((_QWORD *)&v167 + 1) >> 57;
        v39->m128i_i8[_R11] = *((_QWORD *)&v167 + 1) >> 57;
        v39[1].m128i_i8[v40 & (_R11 - 16)] = v47;
        v48 = &v39[-4 * _R11];
        v48[-4] = v37;
        v48[-3] = (const __m128i)__PAIR128__(v46, v45);
        v48[-2].m128i_i64[0] = v210;
        v48[-2].m128i_i64[1] = v208;
        v48[-1] = v29;
        v38[1] = _mm_sub_epi64(
                   _mm_loadu_si128(v38 + 1),
                   (__m128i)_mm_shuffle_ps((__m128)_mm_cvtsi32_si128(v44 & 1), (__m128)xmmword_141748CD0, 228));
        v9 = v196;
        v24 = v197;
      }
      if ( v207 )
        sub_140001660(v206, v207, 1);
    }
    else
    {
      if ( v207 )
        sub_140001660(v206, v207, 1);
LABEL_35:
      if ( v210 )
        sub_140001660(v208, v210, 1);
    }
  }
  sub_141486800(&v165, v199, v193);
  v53 = v165;
  if ( v165.m128i_i64[0] == 2 )
  {
    v154.m128i_i64[0] = v165.m128i_i64[1];
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v159.m128i_i64[0] = (__int64)&v154;
      v159.m128i_i64[1] = (__int64)sub_141490720;
      v165.m128i_i64[0] = 0;
      v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
      v166 = (__m128i)0x1FuLL;
      *(_QWORD *)&v167 = aSrcCoreReposit;
      *((_QWORD *)&v167 + 1) = 22;
      *(_QWORD *)&v168 = 2;
      *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
      v169 = 31;
      v170 = 0x64C00000001LL;
      v171 = &unk_14174FA1A;
      v172 = &v159;
      sub_1412C36A0(&v211, &v165);
    }
    nullsub_1(v52);
    v54 = sub_140001650(48, 8);
    if ( !v54 )
      sub_1416C2D31(8, 48);
    v56 = (_QWORD *)v54;
    nullsub_1(v55);
    v57 = (__m128i *)sub_140001650(33, 1);
    if ( !v57 )
    {
      v210 = (__int64)v56;
      sub_1416C2D4B(1, 33);
    }
    v59 = v57;
    qmemcpy(&v57[1], "RECOVERY_DEFERRED", 17);
    *v57 = _mm_loadu_si128((const __m128i *)&xmmword_14174EF20);
    nullsub_1(v58);
    v60 = (__m128i *)sub_140001650(66, 1);
    if ( !v60 )
    {
      v208 = (__int64)v59;
      v210 = (__int64)v56;
      sub_1416C2D4B(1, 66);
    }
    qmemcpy(&v60[1], "cleanup could not be checked and will retry later.", 50);
    *v60 = _mm_loadu_si128((const __m128i *)&xmmword_14174FA58);
    *v56 = 33;
    v56[1] = v59;
    v56[2] = 33;
    v56[3] = 66;
    v56[4] = v60;
    v56[5] = 66;
    v61 = v198;
    *v198 = 1;
    v61[1] = (__int64)v56;
    v61[2] = 1;
    sub_140018650(&v154);
    result = sub_1406808D0(&v176);
    if ( v195.m128i_i64[0] )
      result = sub_140001660(v195.m128i_i64[1], v195.m128i_i64[0], 1);
    goto LABEL_61;
  }
  sub_141684120(v155, &v166, 608);
  v154 = v53;
  v70 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748C50);
  v72 = _mm_load_si128((const __m128i *)&xmmword_141748C60);
  while ( 2 )
  {
    sub_141493590(&v142, &v154);
    if ( (_DWORD)v142 == 1 )
    {
      v73 = v143;
      v74 = v144;
      if ( v143 )
      {
        sub_141684120(v148, v145, 584);
        v146 = v73;
        v147 = v74;
        sub_14147B870(&v187, &v146);
        if ( ((unsigned __int16)v147 & 0x400) == 0 )
        {
          if ( ((unsigned __int8)v147 & 0x10) == 0 )
            goto LABEL_79;
LABEL_75:
          sub_141486800(&v165, v188, v189);
          v75 = v165;
          if ( v165.m128i_i64[0] == 2 )
          {
            v150 = (volatile signed __int64 *)v165.m128i_i64[1];
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v159.m128i_i64[0] = (__int64)&v150;
              v159.m128i_i64[1] = (__int64)sub_141490720;
              v165.m128i_i64[0] = 0;
              v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
              v166 = (__m128i)0x1FuLL;
              *(_QWORD *)&v167 = aSrcCoreReposit;
              *((_QWORD *)&v167 + 1) = 22;
              *(_QWORD *)&v168 = 2;
              *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
              v169 = 31;
              v170 = 0x66D00000001LL;
              v171 = &unk_14174F997;
              v172 = &v159;
              sub_1412C36A0(&v211, &v165);
            }
            sub_140018650(&v150);
            goto LABEL_79;
          }
          sub_141684120(&v160, &v166, 608);
          v159 = v75;
LABEL_86:
          sub_141493590(&v165, &v159);
          if ( v165.m128i_i32[0] != 1 )
          {
            if ( v159.m128i_i64[0] )
              sub_1414908A0(&v159.m128i_u64[1]);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v160.m128i_i64[0]) )
              sub_140F8A980(&v160);
            v128 = v188;
            v129 = (volatile signed __int64 *)sub_141485E40(v188, v189);
            if ( v129 )
            {
              v150 = v129;
              v130 = sub_1403887F0(v129);
              v210 = v128;
              if ( v130 )
              {
                ++v70;
                if ( *(_QWORD *)off_141EC8D80 >= 2u )
                {
                  v159.m128i_i64[0] = (__int64)&v150;
                  v159.m128i_i64[1] = (__int64)sub_141490720;
                  v165.m128i_i64[0] = 0;
                  v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
                  v166 = (__m128i)0x1FuLL;
                  *(_QWORD *)&v167 = aSrcCoreReposit;
                  *((_QWORD *)&v167 + 1) = 22;
                  *(_QWORD *)&v168 = 2;
                  *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
                  v169 = 31;
                  v170 = 0x6C600000001LL;
                  v171 = &unk_14174F783;
                  v172 = &v159;
                  sub_1412C36A0(&v211, &v165);
                }
              }
              sub_140018650(&v150);
              v128 = v210;
            }
            if ( v187 )
              sub_140001660(v128, v187, 1);
            if ( !_InterlockedDecrement64(v146) )
              sub_140F8A980(&v146);
            continue;
          }
          v76 = (volatile signed __int64 *)v165.m128i_i64[1];
          v77 = v166.m128i_i64[0];
          if ( !v165.m128i_i64[1] )
          {
            v190 = v166.m128i_i64[0];
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v181.m128i_i64[0] = (__int64)&v190;
              v181.m128i_i64[1] = (__int64)sub_141490720;
              v200.m128i_i64[0] = 0;
              v200.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
              *(_OWORD *)v201.m256i_i8 = 0x1Fu;
              v201.m256i_i64[2] = (__int64)aSrcCoreReposit;
              v201.m256i_i64[3] = 22;
              *(_QWORD *)&v202 = 2;
              *((_QWORD *)&v202 + 1) = aCodexmateLibCo_16;
              v203.m128i_i64[0] = 31;
              v203.m128i_i64[1] = 0x67700000001LL;
              v204 = (char *)&unk_14174F955;
              v205 = (__int64)&v181;
              sub_1412C36A0(&v211, &v200);
            }
            sub_140018650(&v190);
            goto LABEL_85;
          }
          sub_141684120(v152, &v166.m128i_u64[1], 584);
          v150 = v76;
          v151 = v77;
          sub_14147B870(&v190, &v150);
          if ( (v151 & 0x400) != 0 )
          {
            if ( v151 & 0x10 | v153 & 0x20000000 )
            {
LABEL_103:
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v200.m128i_i64[0] = 0;
                v200.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
                *(_OWORD *)v201.m256i_i8 = 0x1Fu;
                v201.m256i_i64[2] = (__int64)aSrcCoreReposit;
                v201.m256i_i64[3] = 22;
                *(_QWORD *)&v202 = 2;
                *((_QWORD *)&v202 + 1) = aCodexmateLibCo_16;
                v203.m128i_i64[0] = 31;
                v203.m128i_i64[1] = 0x68200000001LL;
                v204 = (char *)&unk_14174F911;
                v205 = 137;
                sub_1412C36A0(&v211, &v200);
              }
              goto LABEL_105;
            }
          }
          else if ( (v151 & 0x10) != 0 )
          {
            goto LABEL_103;
          }
          v78 = v191;
          v79 = v192;
          v81 = sub_1414742C0(v191, v192);
          v208 = v78;
          v210 = v70;
          if ( v81 && *((_QWORD *)&v177 + 1) )
          {
            v82 = v80;
            v83 = _mm_load_si128(&v178);
            v200 = _mm_xor_si128(_mm_shuffle_epi32(v83, 68), si128);
            *(__m128i *)v201.m256i_i8 = _mm_xor_si128(_mm_shuffle_epi32(v83, 238), v72);
            *(__m128i *)&v201.m256i_u64[2] = v83;
            v202 = 0;
            v203.m128i_i64[0] = 0;
            v181.m128i_i64[0] = v80;
            sub_140420970(&v200, &v181, 8);
            sub_140420970(&v200, v81, v82);
            v84 = *((_QWORD *)&v202 + 1) | ((_QWORD)v202 << 56);
            v85 = (v84 ^ v201.m256i_i64[1]) + v200.m128i_i64[1];
            v86 = (v201.m256i_i64[0] + v200.m128i_i64[0]) ^ __ROL8__(v201.m256i_i64[0], 13);
            v87 = v85 ^ __ROL8__(v84 ^ v201.m256i_i64[1], 16);
            v88 = v86 + v85;
            v89 = v87 + __ROL8__(v201.m256i_i64[0] + v200.m128i_i64[0], 32);
            v90 = v88 ^ __ROL8__(v86, 17);
            v91 = v89 ^ __ROL8__(v87, 21);
            v92 = v90 + (v84 ^ v89);
            v93 = v91 + (__ROL8__(v88, 32) ^ 0xFFLL);
            v94 = v92 ^ __ROL8__(v90, 13);
            v95 = v93 ^ __ROL8__(v91, 16);
            v96 = v94 + v93;
            v97 = v95 + __ROL8__(v92, 32);
            v98 = v96 ^ __ROL8__(v94, 17);
            v99 = v97 ^ __ROL8__(v95, 21);
            v100 = v98 + v97;
            v101 = v99 + __ROL8__(v96, 32);
            v102 = v100 ^ __ROL8__(v98, 13);
            v103 = v101 ^ __ROL8__(v99, 16);
            v104 = v102 + v101;
            v105 = v103 + __ROL8__(v100, 32);
            v106 = v104 ^ __ROL8__(v102, 17);
            v107 = v105 ^ __ROL8__(v103, 21);
            v108 = v107 + __ROL8__(v104, 32);
            v109 = (v106 + v105) ^ __ROL8__(v106, 13);
            v110 = (v109 + v108)
                 ^ __ROL8__(v108 ^ __ROL8__(v107, 16), 21)
                 ^ __ROL8__(v109, 17)
                 ^ __ROL8__(v109 + v108, 32);
            _RAX = v110 >> 57;
            v112 = v176.m128i_i64[1];
            v113 = v176.m128i_i64[0];
            v114 = _mm_cvtsi32_si128(v110 >> 57);
            v115 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v114, v114), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v117 = v112 & v110;
              v118 = _mm_loadu_si128((const __m128i *)(v113 + v117));
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v118, v115));
              if ( _R15D )
                break;
LABEL_98:
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v118, (__m128i)-1LL));
              if ( (_DWORD)_RAX )
                goto LABEL_109;
              v110 = i + v117 + 16;
            }
            v207 = v112;
            v206 = i;
            while ( 1 )
            {
              __asm { tzcnt   eax, r15d }
              v120 = v113 - ((v112 & (v117 + _RAX)) << 6);
              if ( v82 == *(_QWORD *)(v120 - 48) && !(unsigned int)sub_1416847B0(v81, *(_QWORD *)(v120 - 56), v82) )
                break;
              _RAX = (unsigned int)(_R15D - 1);
              LOWORD(_RAX) = _R15D & (_R15D - 1);
              _R15D = _RAX;
              v112 = v207;
              i = v206;
              if ( !(_WORD)_RAX )
                goto LABEL_98;
            }
            if ( *(_QWORD *)(v120 - 32) == -1 )
            {
              v70 = v210;
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v200.m128i_i64[0] = 0;
                v200.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
                *(_OWORD *)v201.m256i_i8 = 0x1Fu;
                v201.m256i_i64[2] = (__int64)aSrcCoreReposit;
                v201.m256i_i64[3] = 22;
                *(_QWORD *)&v202 = 2;
                *((_QWORD *)&v202 + 1) = aCodexmateLibCo_16;
                v203.m128i_i64[0] = 31;
                v203.m128i_i64[1] = 0x69700000001LL;
                v204 = "[AiMaMi][accounts] account removal recovery found an ambiguous snapshot file name[AiMaMi][account"
                       "s] account removal recovery target is not a regular file[AiMaMi][accounts] account removal recove"
                       "ry found conflicting snapshot bytes";
                v205 = 163;
                sub_1412C36A0(&v211, &v200);
              }
              goto LABEL_105;
            }
            sub_141486710(&v200, *(_QWORD *)(v120 - 24), *(_QWORD *)(v120 - 16));
            v70 = v210;
            v121 = v208;
            if ( v200.m128i_i32[0] == 2 )
            {
              v181.m128i_i64[1] = v200.m128i_i64[1];
              v181.m128i_i64[0] = 2;
              goto LABEL_125;
            }
            v124 = _mm_loadu_si128((const __m128i *)&v201);
            v181 = v200;
            v186 = v204;
            v185 = _mm_loadu_si128(&v203);
            v184 = v202;
            v183 = *(_OWORD *)&v201.m256i_u64[2];
            v182 = v124;
            if ( v200.m128i_i64[0] == 2 )
            {
LABEL_125:
              sub_140018650(&v181.m128i_u64[1]);
              v122 = sub_141486540(v121, v79, *(_QWORD *)(v120 - 24), *(_QWORD *)(v120 - 16));
LABEL_110:
              v123 = v122;
            }
            else
            {
              sub_141486270(&v200, *(_QWORD *)(v120 - 24), *(_QWORD *)(v120 - 16));
              if ( v200.m128i_i32[0] == 2 )
              {
                v181.m128i_i64[1] = v200.m128i_i64[1];
                v181.m128i_i8[0] = 1;
                sub_140018650(&v181.m128i_u64[1]);
LABEL_143:
                if ( *(_QWORD *)off_141EC8D80 >= 2u )
                {
                  v200.m128i_i64[0] = 0;
                  v200.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
                  *(_OWORD *)v201.m256i_i8 = 0x1Fu;
                  v201.m256i_i64[2] = (__int64)aSrcCoreReposit;
                  v201.m256i_i64[3] = 22;
                  *(_QWORD *)&v202 = 2;
                  *((_QWORD *)&v202 + 1) = aCodexmateLibCo_16;
                  v203.m128i_i64[0] = 31;
                  v203.m128i_i64[1] = 0x6A700000001LL;
                  v204 = "[AiMaMi][accounts] account removal recovery target is not a regular file[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes";
                  v205 = 145;
                  sub_1412C36A0(&v211, &v200);
                }
LABEL_105:
                if ( v190 )
                  sub_140001660(v191, v190, 1);
                if ( !_InterlockedDecrement64(v150) )
                  sub_140F8A980(&v150);
LABEL_85:
                ++v70;
                goto LABEL_86;
              }
              if ( (v203.m128i_i16[6] & 0x400) != 0 )
              {
                if ( (unsigned int)v204 & 0x20000000 | v203.m128i_i8[12] & 0x10
                  || ((unsigned int)v204 & 0x20000000) != 0 )
                {
                  goto LABEL_143;
                }
              }
              else if ( (v203.m128i_i8[12] & 0x10) != 0 )
              {
                goto LABEL_143;
              }
              sub_14148D3C0(&v179, *(_QWORD *)(v120 - 24), *(_QWORD *)(v120 - 16));
              sub_14148D3C0(&v181, v121, v79);
              v201.m256i_i64[0] = v180;
              v200 = v179;
              v201.m256i_i64[3] = v182.m128i_i64[0];
              *(__m128i *)&v201.m256i_u64[1] = _mm_loadu_si128(&v181);
              v125 = v179.m128i_i64[0];
              if ( v179.m128i_i64[0] == -1 )
              {
                v123 = v200.m128i_i64[1];
                if ( v201.m256i_i64[1] == -1 )
                {
                  sub_140018650(&v201.m256i_u64[2]);
                }
                else if ( v201.m256i_i64[1] )
                {
                  sub_140001660(v201.m256i_i64[2], v201.m256i_i64[1], 1);
                }
              }
              else
              {
                v126 = v201.m256i_i64[1];
                if ( v201.m256i_i64[1] == -1 )
                {
                  v123 = v201.m256i_i64[2];
                  if ( v179.m128i_i64[0] )
                    sub_140001660(v200.m128i_i64[1], v179.m128i_i64[0], 1);
                }
                else
                {
                  if ( v201.m256i_i64[0] != v201.m256i_i64[3]
                    || (v127 = v201.m256i_i64[2],
                        v196 = v200.m128i_i64[1],
                        (unsigned int)sub_1416847B0(v200.m128i_i64[1], v201.m256i_i64[2], v201.m256i_i64[0])) )
                  {
                    if ( *(_QWORD *)off_141EC8D80 >= 2u )
                    {
                      v206 = v126;
                      v207 = v125;
                      v181.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
                      v181.m128i_i64[1] = 31;
                      v182.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
                      v182.m128i_i64[1] = 31;
                      *(_QWORD *)&v183 = &off_14174F8B8;
                      v209 = 1;
                      sub_140985BA0(
                        "[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes",
                        153,
                        2,
                        &v181);
                      v125 = v207;
                      v126 = v206;
                    }
                    if ( v125 )
                      sub_140001660(v200.m128i_i64[1], v125, 1);
                    if ( v126 )
                      sub_140001660(v201.m256i_i64[2], v126, 1);
                    goto LABEL_105;
                  }
                  v197 = v127;
                  v206 = v126;
                  v207 = v125;
                  v123 = sub_141485EF0(v121, v79);
                  if ( v206 )
                    sub_140001660(v197, v206, 1);
                  if ( v207 )
                    sub_140001660(v196, v207, 1);
                }
              }
            }
            if ( v123 )
            {
              v179.m128i_i64[0] = v123;
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v181.m128i_i64[0] = (__int64)&v179;
                v181.m128i_i64[1] = (__int64)sub_141490720;
                v200.m128i_i64[0] = 0;
                v200.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
                *(_OWORD *)v201.m256i_i8 = 0x1Fu;
                v201.m256i_i64[2] = (__int64)aSrcCoreReposit;
                v201.m256i_i64[3] = 22;
                *(_QWORD *)&v202 = 2;
                *((_QWORD *)&v202 + 1) = aCodexmateLibCo_16;
                v203.m128i_i64[0] = 31;
                v203.m128i_i64[1] = 0x6BE00000001LL;
                v204 = (char *)&unk_14174F8D0;
                v205 = (__int64)&v181;
                sub_1412C36A0(&v211, &v200);
              }
              sub_140018650(&v179);
              ++v70;
            }
            if ( v190 )
              sub_140001660(v121, v190, 1);
            if ( !_InterlockedDecrement64(v150) )
              sub_140F8A980(&v150);
            goto LABEL_86;
          }
LABEL_109:
          v121 = v208;
          v122 = sub_141485EF0(v208, v79);
          v70 = v210;
          goto LABEL_110;
        }
        if ( ((unsigned __int8)v147 & 0x10) != 0 && (v149 & 0x20000000) == 0 )
          goto LABEL_75;
LABEL_79:
        if ( v187 )
          sub_140001660(v188, v187, 1);
        if ( !_InterlockedDecrement64(v146) )
          sub_140F8A980(&v146);
      }
      else
      {
        v150 = v144;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v159.m128i_i64[0] = (__int64)&v150;
          v159.m128i_i64[1] = (__int64)sub_141490720;
          v165.m128i_i64[0] = 0;
          v165.m128i_i64[1] = (__int64)aCodexmateLibCo_16;
          v166 = (__m128i)0x1FuLL;
          *(_QWORD *)&v167 = aSrcCoreReposit;
          *((_QWORD *)&v167 + 1) = 22;
          *(_QWORD *)&v168 = 2;
          *((_QWORD *)&v168 + 1) = aCodexmateLibCo_16;
          v169 = 31;
          v170 = 0x65A00000001LL;
          v171 = &unk_14174F9D3;
          v172 = &v159;
          sub_1412C36A0(&v211, &v165);
        }
        sub_140018650(&v150);
      }
      ++v70;
      continue;
    }
    break;
  }
  if ( v154.m128i_i64[0] )
    sub_1414908A0(&v154.m128i_u64[1]);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v155[0]) )
    sub_140F8A980(v155);
  v131 = sub_141485E40(v199, v193);
  if ( v131 )
  {
    v154.m128i_i64[0] = v131;
    if ( (unsigned __int8)sub_1403887F0(v131) )
    {
      ++v70;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v159.m128i_i64[0] = (__int64)&v154;
        v159.m128i_i64[1] = (__int64)sub_141490720;
        v165.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
        v165.m128i_i64[1] = 31;
        v166.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
        v166.m128i_i64[1] = 31;
        *(_QWORD *)&v167 = &off_14174F730;
        sub_140985BA0(&unk_14174F6E9, &v159, 2, &v165);
      }
    }
    sub_140018650(&v154);
  }
  if ( v70 )
  {
    nullsub_1(v132);
    v133 = sub_140001650(48, 8);
    if ( !v133 )
      sub_1416C2D31(8, 48);
    v135 = v133;
    nullsub_1(v134);
    v136 = (__m128i *)sub_140001650(33, 1);
    if ( !v136 )
    {
      v210 = v135;
      sub_1416C2D4B(1, 33);
    }
    v138 = v136;
    qmemcpy(&v136[1], "RECOVERY_DEFERRED", 17);
    *v136 = _mm_loadu_si128((const __m128i *)&xmmword_14174EF20);
    nullsub_1(v137);
    v139 = 1;
    v140 = (__m128i *)sub_140001650(59, 1);
    if ( !v140 )
    {
      v208 = (__int64)v138;
      v210 = v135;
      sub_1416C2D4B(1, 59);
    }
    qmemcpy(&v140[1], "cleanup is incomplete and will retry later.", 43);
    *v140 = _mm_loadu_si128((const __m128i *)&xmmword_14174F748);
    *(_QWORD *)v135 = 33;
    *(_QWORD *)(v135 + 8) = v138;
    *(_QWORD *)(v135 + 16) = 33;
    *(_QWORD *)(v135 + 24) = 59;
    *(_QWORD *)(v135 + 32) = v140;
    *(_QWORD *)(v135 + 40) = 59;
  }
  else
  {
    v135 = 8;
    v139 = 0;
  }
  v141 = v198;
  *v198 = v139;
  v141[1] = v135;
  v141[2] = v139;
  result = sub_1406808D0(&v176);
  if ( v195.m128i_i64[0] )
    result = sub_140001660(v195.m128i_i64[1], v195.m128i_i64[0], 1);
  if ( v194 )
    result = sub_140001660(v199, v194, 1);
  v21 = v173;
  if ( v173 )
  {
    v9 = v174;
    return sub_140001660(v9, v21, 1);
  }
  return result;
}