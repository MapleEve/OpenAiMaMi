// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f3da20 | name sub_140F3DA20
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F3DA20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // r13
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  signed __int64 v29; // r12
  __int8 v30; // di
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rsi
  __int64 v34; // r15
  __m128i *v35; // rax
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // r8d
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int128 v58; // xmm0
  __int64 v59; // r14
  __int64 v60; // r15
  _QWORD *v61; // rcx
  _QWORD *v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // r14
  __int64 *v71; // r15
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r12
  __int64 v76; // rcx
  unsigned __int64 v77; // r13
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rdi
  unsigned __int64 v83; // rsi
  __m128i *v84; // rax
  __int64 v85; // rdi
  _QWORD *v86; // rax
  __int64 v87; // rdi
  __int64 v88; // r13
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rax
  char v92; // cl
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm2
  unsigned __int64 v99; // r14
  __int64 v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  __m128i v105; // xmm0
  unsigned __int128 v106; // xmm1
  _QWORD *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rbx
  const __m128i *v112; // r14
  __m128i si128; // xmm0
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rsi
  unsigned __int64 v119; // rsi
  _QWORD *v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rdi
  __int128 v123; // [rsp+20h] [rbp-60h]
  __int128 v124; // [rsp+50h] [rbp-30h] BYREF
  __int128 v125; // [rsp+60h] [rbp-20h]
  __int64 v126; // [rsp+70h] [rbp-10h]
  __int64 v127; // [rsp+78h] [rbp-8h]
  __m128i v128; // [rsp+80h] [rbp+0h]
  __int64 v129; // [rsp+90h] [rbp+10h]
  unsigned __int64 v130; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v131; // [rsp+A8h] [rbp+28h]
  __m128i v132; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 *v133; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v134)(); // [rsp+C8h] [rbp+48h]
  __int64 v135; // [rsp+D0h] [rbp+50h]
  __int64 v136; // [rsp+D8h] [rbp+58h]
  __m128i v137; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v138; // [rsp+F0h] [rbp+70h]
  _BYTE v139[24]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v140; // [rsp+118h] [rbp+98h]
  __int64 v141; // [rsp+120h] [rbp+A0h]
  __int64 v142; // [rsp+128h] [rbp+A8h]
  __int64 v143; // [rsp+130h] [rbp+B0h]
  _BYTE v144[7]; // [rsp+138h] [rbp+B8h]
  __int64 v145; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v146; // [rsp+148h] [rbp+C8h]
  unsigned __int64 v147; // [rsp+150h] [rbp+D0h]
  __int64 v148; // [rsp+158h] [rbp+D8h]
  const __m128i *v149; // [rsp+160h] [rbp+E0h]
  __int64 v150; // [rsp+168h] [rbp+E8h]
  __int64 v151; // [rsp+170h] [rbp+F0h]
  __int64 v152; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v153; // [rsp+180h] [rbp+100h]
  __int64 v154; // [rsp+188h] [rbp+108h]
  __m256i v155; // [rsp+190h] [rbp+110h] BYREF
  __int128 v156; // [rsp+1B0h] [rbp+130h]
  __int128 v157; // [rsp+1C0h] [rbp+140h]
  __int128 v158; // [rsp+1D0h] [rbp+150h]
  __int128 v159; // [rsp+1E0h] [rbp+160h]
  __int64 v160; // [rsp+1F8h] [rbp+178h]
  __m128i v161; // [rsp+200h] [rbp+180h] BYREF
  unsigned __int128 v162; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v163[24]; // [rsp+220h] [rbp+1A0h]
  __int128 v164; // [rsp+238h] [rbp+1B8h]
  __int64 v165; // [rsp+248h] [rbp+1C8h]
  __int128 v166; // [rsp+250h] [rbp+1D0h]
  _BYTE v167[2]; // [rsp+265h] [rbp+1E5h] BYREF
  char v168; // [rsp+267h] [rbp+1E7h]
  char v169; // [rsp+268h] [rbp+1E8h]
  char v170; // [rsp+269h] [rbp+1E9h]
  char v171; // [rsp+26Ah] [rbp+1EAh]
  char v172; // [rsp+26Bh] [rbp+1EBh]
  char v173; // [rsp+26Ch] [rbp+1ECh]
  char v174; // [rsp+26Dh] [rbp+1EDh]
  char v175; // [rsp+26Eh] [rbp+1EEh]
  char v176; // [rsp+26Fh] [rbp+1EFh]
  __int64 v177; // [rsp+270h] [rbp+1F0h]

  v177 = -2;
  sub_140F33330((__int64)&v155, a2);
  result = v155.m256i_i64[0];
  v161 = *(__m128i *)&v155.m256i_u64[1];
  v4 = v155.m256i_i64[3];
  *(_QWORD *)&v162 = v155.m256i_i64[3];
  if ( v155.m256i_i64[0] != -1 )
  {
    v5 = v156;
    v6 = v157;
    v7 = v158;
    *(_OWORD *)(a1 + 80) = v159;
    *(_OWORD *)(a1 + 64) = v7;
    *(_OWORD *)(a1 + 48) = v6;
    *(_OWORD *)(a1 + 32) = v5;
    *(_QWORD *)(a1 + 24) = v162;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v161);
    *(_QWORD *)a1 = result;
    return result;
  }
  v128 = v161;
  v8 = v162;
  v129 = v162;
  if ( (_QWORD)v162 )
  {
    nullsub_1(v155.m256i_i64[3]);
    v9 = sub_140001650(32 * v8, 8);
    if ( !v9 )
    {
      v170 = 1;
      sub_141938D2B(8, 32 * v8);
    }
  }
  else
  {
    v9 = 8;
  }
  v152 = v8;
  v153 = v9;
  v154 = 0;
  v145 = 0;
  v146 = 8;
  v147 = 0;
  v169 = 1;
  v168 = 1;
  v10 = sub_14167F170(v4);
  v15 = *(_BYTE *)(v10 + 16) == 1;
  v131 = a1;
  if ( v15 )
  {
    v16 = *(_QWORD *)v10;
    v17 = *(_QWORD *)(v10 + 8);
  }
  else
  {
    v169 = 1;
    v168 = 1;
    v122 = v10;
    v16 = sub_141696260(v12, v11, v13, v14);
    v10 = v122;
    *(_QWORD *)v122 = v16;
    *(_QWORD *)(v122 + 8) = v17;
    *(_BYTE *)(v122 + 16) = 1;
  }
  *(_QWORD *)v10 = v16 + 1;
  v125 = *(&off_141A56DB0 + 1);
  v124 = off_141A56DB0;
  v126 = v16;
  v127 = v17;
  v18 = v128.m128i_i64[1];
  v19 = v128.m128i_i64[1] + 192 * v8;
  v161.m128i_i64[0] = v128.m128i_i64[1];
  v161.m128i_i64[1] = v128.m128i_i64[1];
  v143 = v128.m128i_i64[0];
  v162 = __PAIR128__(v19, v128.m128i_u64[0]);
  v136 = v128.m128i_i64[1];
  while ( v18 != v19 )
  {
    v20 = (_QWORD *)(v18 + 192);
    v161.m128i_i64[1] = v18 + 192;
    if ( *(_QWORD *)v18 == -1 )
      goto LABEL_59;
    v151 = *(_QWORD *)v18;
    v21 = *(_QWORD *)(v18 + 8);
    v22 = *(_QWORD *)(v18 + 32);
    v23 = *(_QWORD *)(v18 + 40);
    v24 = *(_QWORD *)(v18 + 48);
    v160 = *(_QWORD *)(v18 + 56);
    *(_QWORD *)&v164 = *(_QWORD *)(v18 + 64);
    v25 = *(_QWORD *)(v18 + 80);
    v26 = *(_QWORD *)(v18 + 112);
    v141 = *(_QWORD *)(v18 + 120);
    v27 = *(_QWORD *)(v18 + 136);
    v140 = *(_QWORD *)(v18 + 144);
    v28 = *(_QWORD *)(v18 + 160);
    v135 = *(_QWORD *)(v18 + 168);
    v165 = v28;
    *((_QWORD *)&v166 + 1) = v27;
    *(_QWORD *)&v166 = v26;
    *((_QWORD *)&v164 + 1) = v21;
    v148 = v22;
    v142 = v23;
    if ( v25 == -1 )
    {
      v155.m256i_i64[1] = v22;
      v155.m256i_i64[2] = v23;
      v155.m256i_i64[3] = v24;
      v155.m256i_i64[0] = 0x8000000000000000uLL;
      v37 = v154;
      if ( v154 == v152 )
        sub_14190F570(&v152);
      v38 = v153;
      v39 = 32 * v37;
      v40 = *(_OWORD *)v155.m256i_i8;
      *(_OWORD *)(v153 + v39 + 16) = *(_OWORD *)&v155.m256i_u64[2];
      *(_OWORD *)(v38 + v39) = v40;
      v154 = v37 + 1;
      v41 = v151;
      v42 = *((_QWORD *)&v166 + 1);
      v43 = v166;
      if ( !v151 )
        goto LABEL_33;
      v44 = *((_QWORD *)&v164 + 1);
      goto LABEL_32;
    }
    v149 = *(const __m128i **)(v18 + 88);
    v29 = *(_QWORD *)(v18 + 96);
    v30 = *(_BYTE *)(v18 + 104);
    v31 = (unsigned int *)(v18 + 105);
    v32 = *v31;
    *(_DWORD *)&v144[3] = *(unsigned int *)((char *)v31 + 3);
    *(_DWORD *)v144 = v32;
    v150 = v25;
    if ( v29 < 0 )
    {
      v34 = 0;
LABEL_57:
      v175 = 1;
      v174 = 1;
      sub_141938D2B(v34, v29);
    }
    v33 = v20;
    if ( v29 )
    {
      nullsub_1(v32);
      v34 = 1;
      v35 = (__m128i *)sub_140001650(v29, 1);
      if ( !v35 )
        goto LABEL_57;
      v36 = (__int64)v35;
      sub_1418F44E0(v35, v149, v29);
    }
    else
    {
      v36 = 1;
    }
    v155.m256i_i64[0] = v29;
    v155.m256i_i64[1] = v36;
    v155.m256i_i64[2] = v29;
    v155.m256i_i8[24] = v30;
    v175 = 1;
    v174 = 1;
    v20 = v33;
    if ( (unsigned __int8)sub_1403A6F90(&v124, &v155) )
    {
      v155.m256i_i64[0] = 0x8000000000000001uLL;
      v45 = v154;
      if ( v154 == v152 )
        sub_14190F570(&v152);
      v46 = v153;
      v47 = 32 * v45;
      v48 = *(_OWORD *)v155.m256i_i8;
      *(_OWORD *)(v153 + v47 + 16) = *(_OWORD *)&v155.m256i_u64[2];
      *(_OWORD *)(v46 + v47) = v48;
      v154 = v45 + 1;
      if ( v150 )
        sub_140001660(v149, v150, 1);
      v42 = *((_QWORD *)&v166 + 1);
      v43 = v166;
      v49 = v148;
      if ( v151 )
        sub_140001660(*((_QWORD *)&v164 + 1), v151, 1);
      if ( !v49 )
        goto LABEL_33;
      v44 = v142;
      v41 = v49;
LABEL_32:
      sub_140001660(v44, v41, 1);
LABEL_33:
      if ( v160 )
        sub_140001660(v164, v160, 1);
      v50 = v165;
      if ( (unsigned __int64)(v43 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        sub_140001660(v141, v43, 1);
      if ( (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v140, v42, 1);
      v18 = (__int64)v20;
      if ( (unsigned __int64)(v50 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
      {
LABEL_55:
        sub_140001660(v135, v50, 1);
        v18 = (__int64)v20;
      }
    }
    else
    {
      v51 = v147;
      if ( v147 == v145 )
        sub_14190F570(&v145);
      v52 = v146;
      v53 = 32 * v51;
      *(_QWORD *)(v146 + v53) = v150;
      *(_QWORD *)(v52 + v53 + 8) = v149;
      *(_QWORD *)(v52 + v53 + 16) = v29;
      *(_BYTE *)(v52 + v53 + 24) = v30;
      v54 = *(_DWORD *)&v144[3];
      *(_DWORD *)(v52 + v53 + 25) = *(_DWORD *)v144;
      *(_DWORD *)(v52 + v53 + 28) = v54;
      v147 = v51 + 1;
      v155.m256i_i64[0] = v148;
      v155.m256i_i64[1] = v142;
      v155.m256i_i64[2] = v24;
      v155.m256i_i64[3] = v51;
      v55 = v154;
      if ( v154 == v152 )
        sub_14190F570(&v152);
      v56 = v153;
      v57 = 32 * v55;
      v58 = *(_OWORD *)v155.m256i_i8;
      *(_OWORD *)(v153 + v57 + 16) = *(_OWORD *)&v155.m256i_u64[2];
      *(_OWORD *)(v56 + v57) = v58;
      v154 = v55 + 1;
      if ( v151 )
        sub_140001660(*((_QWORD *)&v164 + 1), v151, 1);
      v50 = v165;
      v59 = *((_QWORD *)&v166 + 1);
      v60 = v166;
      if ( v160 )
        sub_140001660(v164, v160, 1);
      if ( (unsigned __int64)(v60 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (unsigned __int64)(v59 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_51;
LABEL_54:
        sub_140001660(v140, v59, 1);
        v18 = (__int64)v33;
        if ( (unsigned __int64)(v50 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_55;
      }
      else
      {
        sub_140001660(v141, v60, 1);
        if ( (unsigned __int64)(v59 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_54;
LABEL_51:
        v18 = (__int64)v33;
        if ( (unsigned __int64)(v50 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_55;
      }
    }
  }
  v20 = (_QWORD *)v19;
LABEL_59:
  *((_QWORD *)&v166 + 1) = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v19 - (_QWORD)v20) >> 6);
  v165 = 0;
  *(_QWORD *)&v166 = v20;
  v61 = v20;
  while ( *((_QWORD *)&v166 + 1) != v165 )
  {
    ++v165;
    v62 = v61 + 24;
    sub_14038C9C0(v61);
    v61 = v62;
  }
  if ( v143 )
    sub_140001660(v136, 192 * v143, 8);
  v63 = v146;
  v64 = v147;
  if ( v147 >= 8 )
  {
    v155.m256i_i64[0] = 0;
    *(_OWORD *)&v155.m256i_u64[2] = 4u;
    *((_QWORD *)&v156 + 1) = 1;
    *(_QWORD *)&v157 = &unk_14193C908;
    *((_QWORD *)&v157 + 1) = 0;
    *((_QWORD *)&v158 + 1) = 0;
    WORD4(v159) = 0;
    v176 = 1;
    sub_14000B630(&v161, &v155);
    if ( v161.m128i_i64[0] == -1 )
    {
      v161.m128i_i64[0] = v161.m128i_i64[1];
      v155.m256i_i64[0] = v63;
      v155.m256i_i64[1] = v64;
      v155.m256i_i64[2] = (__int64)v167;
      sub_14000C850(&v137, v161.m128i_i64[1] + 128, &v155);
      sub_1411C79D0(&v161);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v161.m128i_i64[0]) )
      {
        v176 = 1;
        sub_1411C66E0(&v161);
      }
    }
    else
    {
      v132 = v161;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v161.m128i_i64[0] = (__int64)&v132;
        v161.m128i_i64[1] = (__int64)sub_1411C6B40;
        *(_QWORD *)&v157 = 2;
        *((_QWORD *)&v157 + 1) = aCodexmateLibCo_42;
        *(_QWORD *)&v158 = 44;
        *(_QWORD *)&v159 = &unk_141A5E4E7;
        *((_QWORD *)&v159 + 1) = &v161;
        v155.m256i_i64[0] = 0;
        v155.m256i_i64[1] = (__int64)aCodexmateLibCo_42;
        *(_OWORD *)&v155.m256i_u64[2] = 0x2Cu;
        *(_QWORD *)&v156 = aSrcCoreRelayCo_3;
        *((_QWORD *)&v156 + 1) = 34;
        *((_QWORD *)&v158 + 1) = 0x16AB00000001LL;
        sub_1414D53A0(v167, &v155);
      }
      nullsub_1(v66);
      v67 = sub_140001650(24 * v64, 8);
      if ( !v67 )
        sub_141938D2B(8, 24 * v64);
      v161.m128i_i64[0] = v64;
      v161.m128i_i64[1] = v67;
      *(_QWORD *)&v162 = 0;
      v155.m256i_i64[2] = v67;
      *(_OWORD *)v155.m256i_i8 = (unsigned __int64)&v162;
      sub_1402A9440(v63, v63 + 32 * v64, &v155);
      v137 = v161;
      v138 = v162;
      if ( v132.m128i_i32[0] >= 2u && (v132.m128i_i8[8] & 3u) - 2 >= 2 && (v132.m128i_i8[8] & 3) != 0 )
      {
        v155.m256i_i64[1] = v132.m128i_i64[1] - 1;
        v155.m256i_i8[0] = 3;
        v176 = 1;
        sub_1416BCB00(&v155.m256i_u64[1]);
      }
    }
  }
  else
  {
    if ( v147 )
    {
      nullsub_1(v61);
      v65 = sub_140001650(24 * v64, 8);
      if ( !v65 )
      {
        v176 = 1;
        sub_141938D2B(8, 24 * v64);
      }
    }
    else
    {
      v65 = 8;
    }
    v161.m128i_i64[0] = v64;
    v161.m128i_i64[1] = v65;
    *(_QWORD *)&v162 = 0;
    v155.m256i_i64[2] = v65;
    *(_OWORD *)v155.m256i_i8 = (unsigned __int64)&v162;
    sub_1402A9440(v63, v63 + 32 * v64, &v155);
    v137 = v161;
    v138 = v162;
  }
  v161.m128i_i64[0] = 0;
  v161.m128i_i64[1] = 8;
  v162 = 0;
  *(_QWORD *)v163 = 8;
  *(_OWORD *)&v163[8] = 0;
  v68 = v153 + 32 * v154;
  v151 = v152;
  v160 = v137.m128i_i64[1];
  v69 = v138;
  v70 = 32 * v154 - 32;
  v71 = (__int64 *)(v153 + 32);
  v148 = v153;
  v72 = v153;
  v165 = v68;
  while ( 2 )
  {
    if ( v72 == v68 )
      goto LABEL_127;
    v75 = v72 + 32;
    v76 = *(_QWORD *)v72;
    if ( *(_QWORD *)v72 != -1 )
    {
      v77 = *(_QWORD *)(v72 + 24);
      v123 = *(_OWORD *)(v72 + 8);
      v78 = v76 ^ 0x8000000000000000uLL;
      if ( v76 >= 0 )
        v78 = 2;
      if ( v78 )
      {
        if ( v78 != 1 )
        {
          *(_QWORD *)v139 = *(_QWORD *)v72;
          ++*(_QWORD *)&v163[16];
          *(_OWORD *)&v139[8] = v123;
          if ( v77 >= v147 )
          {
            v173 = 1;
            sub_1419390C3(v77, v147, &off_141A61368);
          }
          v79 = 32 * v77;
          v80 = v146 + 32 * v77;
          v81 = *(_QWORD *)(v80 + 16);
          *((_QWORD *)&v166 + 1) = v81;
          if ( v81 < 0 )
          {
            v82 = 0;
            v83 = *((_QWORD *)&v166 + 1);
LABEL_113:
            v173 = 1;
            sub_141938D2B(v82, v83);
          }
          if ( v81 )
          {
            *(_QWORD *)&v164 = v146 + 32 * v77;
            *((_QWORD *)&v164 + 1) = *(_QWORD *)(v146 + v79 + 8);
            nullsub_1(v79);
            v82 = 1;
            v83 = *((_QWORD *)&v166 + 1);
            v84 = (__m128i *)sub_140001650(*((_QWORD *)&v166 + 1), 1);
            if ( !v84 )
              goto LABEL_113;
            *(_QWORD *)&v166 = v84;
            sub_1418F44E0(v84, *((const __m128i **)&v164 + 1), v83);
            v68 = v165;
            v80 = v164;
          }
          else
          {
            *(_QWORD *)&v166 = 1;
          }
          if ( v77 >= v69 )
          {
            v172 = 1;
            v171 = 1;
            sub_1419390C3(v77, v69, &off_141A61380);
          }
          v86 = (_QWORD *)(v160 + 24 * v77);
          if ( *v86 != -1 )
          {
            v130 = v160 + 24 * v77;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v132.m128i_i64[0] = (__int64)v139;
              v132.m128i_i64[1] = (__int64)sub_1400015F0;
              v133 = &v130;
              v134 = sub_140369D80;
              *(_QWORD *)&v157 = 2;
              *((_QWORD *)&v157 + 1) = aCodexmateLibCo_42;
              *(_QWORD *)&v158 = 44;
              *(_QWORD *)&v159 = &unk_141A61398;
              *((_QWORD *)&v159 + 1) = &v132;
              v155.m256i_i64[0] = 0;
              v155.m256i_i64[1] = (__int64)aCodexmateLibCo_42;
              *(_OWORD *)&v155.m256i_u64[2] = 0x2Cu;
              *(_QWORD *)&v156 = aSrcCoreRelayCo_3;
              *((_QWORD *)&v156 + 1) = 34;
              *((_QWORD *)&v158 + 1) = 0x168A00000001LL;
              v172 = 1;
              v171 = 1;
              sub_1414D53A0(v167, &v155);
            }
            v164 = *(_OWORD *)v139;
            v87 = *(_QWORD *)&v139[16];
            v88 = *(_QWORD *)&v163[8];
            if ( *(_QWORD *)&v163[8] == *((_QWORD *)&v162 + 1) )
              sub_14190FDC0((char *)&v162 + 8);
            v89 = *(_QWORD *)v163;
            v90 = 3 * v88;
            *(_OWORD *)(*(_QWORD *)v163 + 8 * v90) = v164;
            *(_QWORD *)(v89 + 8 * v90 + 16) = v87;
            *(_QWORD *)&v163[8] = v88 + 1;
            v68 = v165;
            if ( *((_QWORD *)&v166 + 1) )
              sub_140001660(v166, *((_QWORD *)&v166 + 1), 1);
            goto LABEL_81;
          }
          v91 = v86[1];
          if ( !v91 )
          {
            if ( *((_QWORD *)&v166 + 1) )
              sub_140001660(v166, *((_QWORD *)&v166 + 1), 1);
            if ( *(_QWORD *)v139 )
              sub_140001660(*(_QWORD *)&v139[8], *(_QWORD *)v139, 1);
            goto LABEL_81;
          }
          v92 = *(_BYTE *)(v80 + 24);
          v155.m256i_i64[2] = *(_QWORD *)&v139[16];
          *(_OWORD *)v155.m256i_i8 = *(_OWORD *)v139;
          v155.m256i_i64[3] = *((_QWORD *)&v166 + 1);
          v156 = v166;
          LOBYTE(v157) = v92;
          *((_QWORD *)&v157 + 1) = v91;
          v93 = v162;
          if ( (_QWORD)v162 == v161.m128i_i64[0] )
            sub_14190F9D0(&v161);
          v94 = v161.m128i_i64[1];
          v95 = v93 << 6;
          v96 = *(_OWORD *)v155.m256i_i8;
          v97 = *(_OWORD *)&v155.m256i_u64[2];
          v98 = v156;
          *(_OWORD *)(v161.m128i_i64[1] + v95 + 48) = v157;
          *(_OWORD *)(v94 + v95 + 32) = v98;
          *(_OWORD *)(v94 + v95 + 16) = v97;
          *(_OWORD *)(v94 + v95) = v96;
          *(_QWORD *)&v162 = v93 + 1;
LABEL_80:
          v68 = v165;
        }
LABEL_81:
        v70 -= 32LL;
        v71 += 4;
        v72 = v75;
        continue;
      }
      *((_QWORD *)&v166 + 1) = *(_QWORD *)(v72 + 8);
      *(_QWORD *)&v166 = *(_QWORD *)(v72 + 16);
      v85 = *(_QWORD *)&v163[8];
      if ( *(_QWORD *)&v163[8] == *((_QWORD *)&v162 + 1) )
        sub_14190FDC0((char *)&v162 + 8);
      v73 = *(_QWORD *)v163;
      v74 = 3 * v85;
      *(_QWORD *)(*(_QWORD *)v163 + 8 * v74) = *((_QWORD *)&v166 + 1);
      *(_QWORD *)(v73 + 8 * v74 + 8) = v166;
      *(_QWORD *)(v73 + 8 * v74 + 16) = v77;
      *(_QWORD *)&v163[8] = v85 + 1;
      goto LABEL_80;
    }
    break;
  }
  if ( v68 != v75 )
  {
    v99 = v70 >> 5;
    v100 = 0;
    while ( 1 )
    {
      v101 = *v71;
      v102 = *v71 ^ 0x8000000000000000uLL;
      if ( *v71 >= 0 )
        v102 = 2;
      if ( v102 )
        break;
      v103 = v75 + 32 * v100 + 8;
      v101 = v71[1];
      if ( v101 )
        goto LABEL_126;
LABEL_118:
      v71 += 4;
      ++v100;
      if ( !--v99 )
        goto LABEL_127;
    }
    v103 = (__int64)v71;
    if ( v102 == 1 || !v101 )
      goto LABEL_118;
LABEL_126:
    sub_140001660(*(_QWORD *)(v103 + 8), v101, 1);
    goto LABEL_118;
  }
LABEL_127:
  if ( v151 )
    sub_140001660(v148, 32 * v151, 8);
  v104 = v131;
  *(_QWORD *)(v131 + 56) = *(_QWORD *)&v163[16];
  v105 = _mm_loadu_si128(&v161);
  v106 = v162;
  *(_OWORD *)(v104 + 40) = *(_OWORD *)v163;
  *(_OWORD *)(v104 + 24) = v106;
  *(__m128i *)(v104 + 8) = v105;
  *(_QWORD *)v104 = -1;
  if ( v69 )
  {
    v107 = (_QWORD *)(v160 + 8);
    do
    {
      v108 = *(v107 - 1);
      if ( v108 != -1 && v108 )
        sub_140001660(*v107, v108, 1);
      v107 += 3;
      --v69;
    }
    while ( v69 );
  }
  result = v137.m128i_i64[0];
  if ( v137.m128i_i64[0] )
    result = sub_140001660(v160, 24 * v137.m128i_i64[0], 8);
  v109 = *((_QWORD *)&v124 + 1);
  if ( *((_QWORD *)&v124 + 1) )
  {
    v110 = *((_QWORD *)&v125 + 1);
    if ( *((_QWORD *)&v125 + 1) )
    {
      v111 = v124;
      v112 = (const __m128i *)(v124 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v124));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v112);
            v111 -= 512;
            ++v112;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v116 = v111 - (unsigned int)(32 * _ECX);
        v117 = *(_QWORD *)(v116 - 32);
        if ( v117 )
          sub_140001660(*(_QWORD *)(v116 - 24), v117, 1);
        --v110;
        _R15D &= _R15D - 1;
      }
      while ( v110 );
    }
    result = 32 * v109;
    v118 = 33 * v109 + 49;
    if ( v118 )
      result = sub_140001660(v124 - result - 32, v118, 16);
  }
  v119 = v147;
  if ( v147 )
  {
    v120 = (_QWORD *)(v146 + 8);
    do
    {
      v121 = *(v120 - 1);
      if ( v121 )
        result = sub_140001660(*v120, v121, 1);
      v120 += 4;
      --v119;
    }
    while ( v119 );
  }
  if ( v145 )
    return sub_140001660(v146, 32 * v145, 8);
  return result;
}
