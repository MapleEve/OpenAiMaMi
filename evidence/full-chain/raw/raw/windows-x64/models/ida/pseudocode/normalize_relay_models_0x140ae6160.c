// win 1.2.1 | module src/core/relay/models.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::models::normalize_relay_models | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall normalize_relay_models(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rbx
  __m128i *v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __m128i *v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char *v34; // r13
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  unsigned __int8 *v39; // r12
  char *v40; // rcx
  unsigned int v41; // r8d
  int v42; // r9d
  int v43; // r11d
  int v44; // r8d
  unsigned __int8 v45; // r10
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // r9d
  int v49; // eax
  unsigned __int8 v50; // r8
  __int64 v51; // r12
  char v52; // r13
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128i v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // r14
  const __m128i *v64; // r15
  const __m128i *v66; // rdi
  unsigned __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // r14
  const __m128i *v73; // r15
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rdx
  __m128i si128; // xmm0
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdi
  _QWORD *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __m128i v89; // xmm0
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  unsigned __int64 v92; // rdx
  _BYTE v93[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v94[24]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v95; // [rsp+50h] [rbp-30h] BYREF
  __int64 v96; // [rsp+60h] [rbp-20h]
  __m128i v97; // [rsp+68h] [rbp-18h] BYREF
  __int64 v98; // [rsp+78h] [rbp-8h]
  __m128i v99; // [rsp+80h] [rbp+0h] BYREF
  __int64 v100; // [rsp+90h] [rbp+10h]
  unsigned __int64 v101; // [rsp+98h] [rbp+18h]
  __m128i v102; // [rsp+A0h] [rbp+20h]
  __m128i v103; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v104; // [rsp+C0h] [rbp+40h]
  __m128i v105; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v106; // [rsp+E0h] [rbp+60h]
  __int64 v107; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v108; // [rsp+F8h] [rbp+78h]
  __m128i v109; // [rsp+100h] [rbp+80h] BYREF
  __int64 v110; // [rsp+110h] [rbp+90h]
  __m512i v111; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v112; // [rsp+160h] [rbp+E0h]
  __int128 v113; // [rsp+170h] [rbp+F0h]
  __int64 v114; // [rsp+188h] [rbp+108h]
  __m128i v115; // [rsp+190h] [rbp+110h] BYREF
  __int64 v116; // [rsp+1A0h] [rbp+120h]
  char *v117; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v118; // [rsp+1B0h] [rbp+130h]
  char *v119; // [rsp+1B8h] [rbp+138h]
  __int64 v120; // [rsp+1C0h] [rbp+140h]
  char v121; // [rsp+1CEh] [rbp+14Eh]
  char v122; // [rsp+1CFh] [rbp+14Fh]
  __int64 v123; // [rsp+1D0h] [rbp+150h]

  v123 = -2; /*0x140ae617b*/
  v6 = a1; /*0x140ae6186*/
  if ( !a3 ) /*0x140ae618c*/
  {
    sub_140AE5EE0(&v111, a4, a5); /*0x140ae69ba*/
    v105 = *(__m128i *)&v111.m512i_u64[1]; /*0x140ae69c6*/
    *(_QWORD *)&v106 = v111.m512i_i64[3]; /*0x140ae69d1*/
    if ( v111.m512i_i8[0] ) /*0x140ae69dc*/
    {
      *(_QWORD *)(v6 + 24) = v106; /*0x140ae69e6*/
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v105); /*0x140ae69ef*/
      *(_QWORD *)v6 = -1; /*0x140ae69f4*/
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v106; /*0x140ae6b3b*/
      *(__m128i *)(v6 + 24) = _mm_load_si128(&v105); /*0x140ae6b44*/
      *(_QWORD *)v6 = 0; /*0x140ae6b49*/
      *(_QWORD *)(v6 + 8) = 8; /*0x140ae6b50*/
      *(_QWORD *)(v6 + 16) = 0; /*0x140ae6b58*/
      *(_BYTE *)(v6 + 48) = a6; /*0x140ae6b60*/
    }
    return v6; /*0x140ae69fb*/
  }
  v9 = 96 * a3; /*0x140ae619f*/
  nullsub_1(a1); /*0x140ae61a3*/
  v10 = sub_140001650(v9, 8); /*0x140ae61b0*/
  if ( !v10 ) /*0x140ae61b8*/
    sub_1416C2D4B(8, v9); /*0x140ae6dc1*/
  v115.m128i_i64[0] = a3; /*0x140ae61be*/
  v115.m128i_i64[1] = v10; /*0x140ae61c5*/
  v116 = 0; /*0x140ae61cc*/
  v13 = sub_141470CD0(v12, v11); /*0x140ae61d7*/
  v15 = v13; /*0x140ae61dd*/
  if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x140ae61e4*/
  {
    v16 = *(_QWORD *)v13; /*0x140ae61ea*/
    v17 = *(_QWORD *)(v13 + 8); /*0x140ae61ee*/
  }
  else
  {
    v16 = sub_141486EF0(); /*0x140ae6d9f*/
    v17 = v92; /*0x140ae6da2*/
    *(_QWORD *)v15 = v16; /*0x140ae6da5*/
    *(_QWORD *)(v15 + 8) = v92; /*0x140ae6da9*/
    *(_BYTE *)(v15 + 16) = 1; /*0x140ae6dae*/
  }
  *(_QWORD *)v15 = v16 + 1; /*0x140ae61f7*/
  LOBYTE(v14) = 1; /*0x140ae620a*/
  sub_1405AC280(&v111, 24, a3, v14); /*0x140ae620d*/
  v18 = _mm_loadu_si128((const __m128i *)&v111); /*0x140ae6213*/
  v106 = *(_OWORD *)&v111.m512i_u64[2]; /*0x140ae6222*/
  v105 = v18; /*0x140ae6226*/
  v107 = v16; /*0x140ae622b*/
  v108 = v17; /*0x140ae622f*/
  v19 = a2 + 96 * a3; /*0x140ae623b*/
  v20 = &v103; /*0x140ae624c*/
  if ( a2 == v19 ) /*0x140ae6253*/
  {
LABEL_56:
    if ( !v116 ) /*0x140ae678f*/
      sub_1416C30E3(0, 0, &off_1417B0768); /*0x140ae6ddb*/
    sub_14149C500(&v109, v115.m128i_i64[1] + 16); /*0x140ae67a7*/
    if ( !v116 ) /*0x140ae67b5*/
      sub_1416C30E3(0, 0, &off_1417B0780); /*0x140ae6dee*/
    _RAX = *(unsigned __int8 *)(v115.m128i_i64[1] + 88); /*0x140ae67c2*/
    v111.m512i_i64[2] = v116; /*0x140ae67cd*/
    *(__m128i *)v111.m512i_i8 = _mm_loadu_si128(&v115); /*0x140ae67dc*/
    v111.m512i_i64[5] = v110; /*0x140ae67eb*/
    *(__m128i *)&v111.m512i_u64[3] = v109; /*0x140ae67f9*/
    *(_OWORD *)v6 = *(_OWORD *)v111.m512i_i8; /*0x140ae6800*/
    *(_OWORD *)(v6 + 32) = *(_OWORD *)&v111.m512i_u64[4]; /*0x140ae680b*/
    *(_OWORD *)(v6 + 16) = *(_OWORD *)&v111.m512i_u64[2]; /*0x140ae6821*/
    *(_BYTE *)(v6 + 48) = _RAX; /*0x140ae6830*/
    v61 = v105.m128i_i64[1]; /*0x140ae6833*/
    if ( v105.m128i_i64[1] ) /*0x140ae683a*/
    {
      v62 = *((_QWORD *)&v106 + 1); /*0x140ae6840*/
      if ( *((_QWORD *)&v106 + 1) ) /*0x140ae6847*/
      {
        v63 = v105.m128i_i64[0]; /*0x140ae684d*/
        v64 = (const __m128i *)(v105.m128i_i64[0] + 16); /*0x140ae6856*/
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v105.m128i_i64[0])); /*0x140ae685f*/
        do /*0x140ae6a11*/
        {
          if ( !(_WORD)_R12D ) /*0x140ae6a1b*/
          {
            do /*0x140ae6a3c*/
            {
              si128 = _mm_load_si128(v64); /*0x140ae6a20*/
              v63 -= 384; /*0x140ae6a25*/
              ++v64; /*0x140ae6a2c*/
              _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x140ae6a35*/
            }
            while ( !_R12D ); /*0x140ae6a3c*/
          }
          __asm { tzcnt eax, r12d } /*0x140ae6a3e*/
          v79 = -3 * _RAX; /*0x140ae6a46*/
          v80 = *(_QWORD *)(v63 + 8 * v79 - 24); /*0x140ae6a4a*/
          if ( v80 ) /*0x140ae6a52*/
            sub_140001660(*(_QWORD *)(v63 + 8 * v79 - 16), v80, 1); /*0x140ae6a62*/
          --v62; /*0x140ae6a00*/
          _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x140ae6a08*/
          _R12D &= _R12D - 1; /*0x140ae6a0b*/
        }
        while ( v62 ); /*0x140ae6a11*/
      }
      v90 = (24 * v61 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x140ae6c77*/
      v91 = v90 + v61 + 17; /*0x140ae6c7e*/
      if ( v91 ) /*0x140ae6c82*/
        sub_140001660(v105.m128i_i64[0] - v90, v91, 16); /*0x140ae6c98*/
    }
    return v6; /*0x140ae6c9d*/
  }
  while ( 1 )
  {
    sub_140AE5EE0(&v111, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32)); /*0x140ae6264*/
    v109 = *(__m128i *)&v111.m512i_u64[1]; /*0x140ae6275*/
    v110 = v111.m512i_i64[3]; /*0x140ae6281*/
    if ( v111.m512i_i32[0] == 1 ) /*0x140ae628b*/
    {
      HIDWORD(_RAX) = HIDWORD(v110); /*0x140ae6b95*/
      *(_QWORD *)(v6 + 24) = v110; /*0x140ae6b9c*/
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v109); /*0x140ae6ba8*/
      *(_QWORD *)v6 = -1; /*0x140ae6bad*/
      goto LABEL_66; /*0x140ae6bb4*/
    }
    v104 = v110; /*0x140ae6298*/
    v103 = _mm_load_si128(&v109); /*0x140ae62a4*/
    v121 = 1; /*0x140ae62a9*/
    sub_14149C500(&v111, v20); /*0x140ae62b6*/
    v121 = 1; /*0x140ae62bc*/
    if ( (unsigned __int8)sub_140474440(&v105, &v111) ) /*0x140ae62ca*/
    {
      v111.m512i_i64[0] = (__int64)v20; /*0x140ae6bb9*/
      v111.m512i_i64[1] = (__int64)sub_1400015F0; /*0x140ae6bc7*/
      v121 = 1; /*0x140ae6bce*/
      sub_14149C0F0(&v99, &unk_1417B0656, &v111); /*0x140ae6be6*/
      HIDWORD(_RAX) = HIDWORD(v100); /*0x140ae6bec*/
      *(_QWORD *)(v6 + 24) = v100; /*0x140ae6bf0*/
      v89 = _mm_loadu_si128(&v99); /*0x140ae6bf4*/
      goto LABEL_105; /*0x140ae6bf9*/
    }
    v21 = *(_QWORD *)a2; /*0x140ae62d8*/
    if ( *(_QWORD *)a2 && (unsigned __int64)(*(_QWORD *)(a2 + 8) - 1LL) >= 0x989680 ) /*0x140ae62ed*/
    {
      v111.m512i_i64[0] = (__int64)v20; /*0x140ae6ca2*/
      v111.m512i_i64[1] = (__int64)sub_1400015F0; /*0x140ae6cb0*/
      v111.m512i_i64[2] = (__int64)&unk_1417B0678; /*0x140ae6cbe*/
      v111.m512i_i64[3] = (__int64)sub_1414AC5F0; /*0x140ae6ccc*/
      v121 = 1; /*0x140ae6cd3*/
      sub_14149C0F0(&v97, &unk_1417B0680, &v111); /*0x140ae6cec*/
      HIDWORD(_RAX) = HIDWORD(v98); /*0x140ae6cf2*/
      *(_QWORD *)(v6 + 24) = v98; /*0x140ae6cf6*/
      v89 = v97; /*0x140ae6cfa*/
LABEL_105:
      *(__m128i *)(v6 + 8) = v89; /*0x140ae6cfe*/
      *(_QWORD *)v6 = -1; /*0x140ae6d03*/
      v69 = v103.m128i_i64[0]; /*0x140ae6d0a*/
      if ( v103.m128i_i64[0] ) /*0x140ae6d11*/
        goto LABEL_65; /*0x140ae6d11*/
      goto LABEL_66; /*0x140ae6d11*/
    }
    v22 = -1; /*0x140ae62f3*/
    if ( *(_QWORD *)(a2 + 64) == -1 ) /*0x140ae62ff*/
    {
      v114 = *(_QWORD *)a2; /*0x140ae63b0*/
      goto LABEL_22; /*0x140ae63b7*/
    }
    v23 = *(_QWORD *)(a2 + 72); /*0x140ae6305*/
    v24 = *(_QWORD *)(a2 + 80); /*0x140ae6309*/
    v121 = 1; /*0x140ae630d*/
    v25 = sub_14033BC10(v23, v24); /*0x140ae6314*/
    if ( !v25 || (v28 = v26) == 0 ) /*0x140ae6329*/
    {
      v114 = v21; /*0x140ae63c0*/
      v22 = -1; /*0x140ae63c7*/
      goto LABEL_22; /*0x140ae63ce*/
    }
    if ( v26 < 0 ) /*0x140ae632f*/
    {
      v31 = 0; /*0x140ae6b7a*/
      goto LABEL_98; /*0x140ae6b7a*/
    }
    v114 = v21; /*0x140ae6335*/
    v120 = v6; /*0x140ae633c*/
    v29 = v20; /*0x140ae6343*/
    v30 = v25; /*0x140ae6346*/
    nullsub_1(v27); /*0x140ae6349*/
    v31 = 1; /*0x140ae634e*/
    v32 = sub_140001650(v28, 1); /*0x140ae635c*/
    if ( !v32 ) /*0x140ae6364*/
    {
      v17 = v28; /*0x140ae6dc8*/
LABEL_98:
      v121 = 1; /*0x140ae6b7d*/
      sub_1416C2D4B(v31, v17); /*0x140ae6b8a*/
    }
    v17 = v32; /*0x140ae636a*/
    sub_141684120(v32, v30, v28); /*0x140ae6376*/
    v119 = (char *)v17; /*0x140ae6381*/
    v118 = v28; /*0x140ae6388*/
    v122 = 1; /*0x140ae638f*/
    if ( v28 >= 0x20 ) /*0x140ae637f*/
      v33 = sub_1414A35B0(v17, v28); /*0x140ae63eb*/
    else
      v33 = sub_1414A3BD0(v17, v28); /*0x140ae639c*/
    v20 = v29; /*0x140ae63a2*/
    v6 = v120; /*0x140ae63a5*/
    if ( v33 >= 0x81 ) /*0x140ae6401*/
    {
      v111.m512i_i64[0] = (__int64)v20; /*0x140ae6d1c*/
      v111.m512i_i64[1] = (__int64)sub_1400015F0; /*0x140ae6d2a*/
      v111.m512i_i64[2] = (__int64)&unk_1417B0718; /*0x140ae6d38*/
      v111.m512i_i64[3] = (__int64)sub_1414AC520; /*0x140ae6d46*/
      v119 = (char *)v17; /*0x140ae6d4d*/
      v118 = v28; /*0x140ae6d54*/
      v122 = 1; /*0x140ae6d5b*/
      sub_14149C0F0(&v95, &unk_1417B0720, &v111); /*0x140ae6d74*/
      *(_QWORD *)(v6 + 24) = v96; /*0x140ae6d7e*/
      *(_OWORD *)(v6 + 8) = v95; /*0x140ae6d86*/
      *(_QWORD *)v6 = -1; /*0x140ae6d8a*/
      v68 = v28; /*0x140ae6d91*/
      goto LABEL_63; /*0x140ae6d94*/
    }
    v22 = v28; /*0x140ae6407*/
    v101 = v28; /*0x140ae640a*/
LABEL_22:
    v34 = *(char **)(a2 + 48); /*0x140ae6410*/
    v35 = *(_QWORD *)(a2 + 56); /*0x140ae6414*/
    v120 = v22; /*0x140ae641c*/
    v119 = (char *)v17; /*0x140ae6425*/
    v118 = v22; /*0x140ae642c*/
    v122 = 1; /*0x140ae6433*/
    v36 = v35 >= 0x20 ? sub_1414A35B0(v34, v35) : sub_1414A3BD0(v34, v35);
    if ( v36 > 8 ) /*0x140ae6475*/
      break; /*0x140ae6475*/
    v117 = (char *)v17; /*0x140ae647b*/
    v37 = a2 + 96; /*0x140ae6482*/
    v38 = a2 + 40; /*0x140ae6486*/
    v39 = (unsigned __int8 *)&v34[v35]; /*0x140ae648a*/
    if ( v120 == -1 ) /*0x140ae6495*/
      goto LABEL_52; /*0x140ae6495*/
    v40 = v117; /*0x140ae649b*/
    while ( v40 != &v117[v101] ) /*0x140ae64b3*/
    {
      v41 = (unsigned __int8)*v40; /*0x140ae64bd*/
      if ( *v40 < 0 ) /*0x140ae64c4*/
      {
        v42 = v41 & 0x1F; /*0x140ae64e3*/
        v43 = v40[1] & 0x3F; /*0x140ae64ec*/
        if ( (unsigned __int8)v41 <= 0xDFu ) /*0x140ae64f4*/
        {
          v40 += 2; /*0x140ae6539*/
          v41 = v43 | (v42 << 6); /*0x140ae6544*/
          if ( v41 < 0x20 ) /*0x140ae654b*/
            goto LABEL_61; /*0x140ae654b*/
        }
        else
        {
          v44 = (v43 << 6) | v40[2] & 0x3F; /*0x140ae6503*/
          if ( (unsigned __int8)*v40 < 0xF0u ) /*0x140ae650a*/
          {
            v40 += 3; /*0x140ae6552*/
            v41 = (v42 << 12) | v44; /*0x140ae655a*/
            if ( v41 < 0x20 ) /*0x140ae6561*/
              goto LABEL_61; /*0x140ae6561*/
          }
          else
          {
            v45 = v40[3]; /*0x140ae650c*/
            v40 += 4; /*0x140ae6511*/
            v41 = ((v42 & 7) << 18) | (v44 << 6) | v45 & 0x3F; /*0x140ae652b*/
            if ( v41 < 0x20 ) /*0x140ae6532*/
              goto LABEL_61; /*0x140ae6532*/
          }
        }
      }
      else
      {
        ++v40; /*0x140ae64c6*/
        if ( v41 < 0x20 ) /*0x140ae64cd*/
          goto LABEL_61; /*0x140ae64cd*/
      }
      if ( v41 - 127 < 0x21 ) /*0x140ae6578*/
      {
LABEL_61:
        v111.m512i_i64[0] = (__int64)v20; /*0x140ae6867*/
        v111.m512i_i64[1] = (__int64)sub_1400015F0; /*0x140ae6875*/
        v17 = (unsigned __int64)v117; /*0x140ae687c*/
        v119 = v117; /*0x140ae6883*/
        v118 = v120; /*0x140ae6891*/
        v122 = 1; /*0x140ae6898*/
        v66 = (const __m128i *)v93; /*0x140ae68a6*/
        sub_14149C0F0(v93, &unk_1417B06AF, &v111); /*0x140ae68b4*/
        goto LABEL_62; /*0x140ae68b4*/
      }
    }
LABEL_52:
    while ( v34 != (char *)v39 ) /*0x140ae663f*/
    {
      v46 = (unsigned __int8)*v34; /*0x140ae6595*/
      if ( *v34 < 0 ) /*0x140ae659b*/
      {
        v47 = v46 & 0x1F; /*0x140ae65b2*/
        v48 = v34[1] & 0x3F; /*0x140ae65ba*/
        if ( (unsigned __int8)v46 <= 0xDFu ) /*0x140ae65c0*/
        {
          v34 += 2; /*0x140ae6600*/
          v46 = v48 | (v47 << 6); /*0x140ae660a*/
          if ( v46 < 0x20 ) /*0x140ae660f*/
            goto LABEL_61; /*0x140ae660f*/
        }
        else
        {
          v49 = (v48 << 6) | v34[2] & 0x3F; /*0x140ae65ce*/
          if ( (unsigned __int8)*v34 < 0xF0u ) /*0x140ae65d5*/
          {
            v34 += 3; /*0x140ae6616*/
            v46 = (v47 << 12) | v49; /*0x140ae661d*/
            if ( v46 < 0x20 ) /*0x140ae6622*/
              goto LABEL_61; /*0x140ae6622*/
          }
          else
          {
            v50 = v34[3]; /*0x140ae65d7*/
            v34 += 4; /*0x140ae65dc*/
            v46 = ((v47 & 7) << 18) | (v49 << 6) | v50 & 0x3F; /*0x140ae65f3*/
            if ( v46 < 0x20 ) /*0x140ae65f9*/
              goto LABEL_61; /*0x140ae65f9*/
          }
        }
      }
      else
      {
        ++v34; /*0x140ae659d*/
        if ( v46 < 0x20 ) /*0x140ae65a3*/
          goto LABEL_61; /*0x140ae65a3*/
      }
      if ( v46 - 127 < 0x21 ) /*0x140ae6636*/
        goto LABEL_61; /*0x140ae6636*/
    }
    v102 = v103; /*0x140ae664d*/
    v51 = v104; /*0x140ae6655*/
    v52 = *(_BYTE *)(a2 + 88); /*0x140ae6659*/
    v53 = *(_QWORD *)(a2 + 8); /*0x140ae665d*/
    sub_14149C500(&v109, v38); /*0x140ae6668*/
    *(__m128i *)&v111.m512i_u64[2] = v102; /*0x140ae6672*/
    v111.m512i_i64[4] = v51; /*0x140ae6684*/
    BYTE8(v113) = v52; /*0x140ae668b*/
    v111.m512i_i64[0] = v114; /*0x140ae6699*/
    v111.m512i_i64[1] = v53; /*0x140ae66a0*/
    *(_QWORD *)&v112 = v120; /*0x140ae66ae*/
    *((_QWORD *)&v112 + 1) = v117; /*0x140ae66bc*/
    *(_QWORD *)&v113 = v101; /*0x140ae66c7*/
    v111.m512i_i64[7] = v110; /*0x140ae66dc*/
    *(__m128i *)&v111.m512i_u64[5] = v109; /*0x140ae66e8*/
    v54 = v116; /*0x140ae66ee*/
    if ( v116 == v115.m128i_i64[0] ) /*0x140ae66fc*/
      sub_141689A40(&v115); /*0x140ae6705*/
    v55 = v115.m128i_i64[1]; /*0x140ae670b*/
    v56 = 96 * v54; /*0x140ae6716*/
    *(_OWORD *)(v115.m128i_i64[1] + v56 + 80) = v113; /*0x140ae6721*/
    *(_OWORD *)(v55 + v56 + 64) = v112; /*0x140ae672d*/
    v57 = _mm_loadu_si128((const __m128i *)&v111); /*0x140ae6732*/
    v58 = *(_OWORD *)&v111.m512i_u64[2]; /*0x140ae673a*/
    v59 = *(_OWORD *)&v111.m512i_u64[4]; /*0x140ae6741*/
    *(_OWORD *)(v55 + v56 + 48) = *(_OWORD *)&v111.m512i_u64[6]; /*0x140ae674f*/
    *(_OWORD *)(v55 + v56 + 32) = v59; /*0x140ae6754*/
    *(_OWORD *)(v55 + v56 + 16) = v58; /*0x140ae6759*/
    *(__m128i *)(v55 + v56) = v57; /*0x140ae675e*/
    v116 = v54 + 1; /*0x140ae6766*/
    a2 = v37; /*0x140ae676d*/
    v17 = (unsigned __int64)v117; /*0x140ae6770*/
    if ( a2 == v19 ) /*0x140ae6781*/
      goto LABEL_56; /*0x140ae6781*/
  }
  v111.m512i_i64[0] = (__int64)v20; /*0x140ae6bfe*/
  v111.m512i_i64[1] = (__int64)sub_1400015F0; /*0x140ae6c0c*/
  v111.m512i_i64[2] = (__int64)&unk_1417B06E8; /*0x140ae6c1a*/
  v111.m512i_i64[3] = (__int64)sub_1414AC520; /*0x140ae6c28*/
  v119 = (char *)v17; /*0x140ae6c2f*/
  v118 = v120; /*0x140ae6c3d*/
  v122 = 1; /*0x140ae6c44*/
  v66 = (const __m128i *)v94; /*0x140ae6c52*/
  sub_14149C0F0(v94, &unk_1417B06F0, &v111); /*0x140ae6c60*/
LABEL_62:
  _RAX = v66[1].m128i_i64[0]; /*0x140ae68ba*/
  *(_QWORD *)(v6 + 24) = _RAX; /*0x140ae68be*/
  *(__m128i *)(v6 + 8) = _mm_loadu_si128(v66); /*0x140ae68c6*/
  *(_QWORD *)v6 = -1; /*0x140ae68cb*/
  v68 = v120; /*0x140ae68d2*/
  if ( v120 > 0 ) /*0x140ae68dc*/
LABEL_63:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v17, v68, 1) >> 32; /*0x140ae68de*/
  v69 = v103.m128i_i64[0]; /*0x140ae68ec*/
  if ( v103.m128i_i64[0] ) /*0x140ae68f3*/
LABEL_65:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v103.m128i_i64[1], v69, 1) >> 32; /*0x140ae68f5*/
LABEL_66:
  v70 = v105.m128i_i64[1]; /*0x140ae6904*/
  if ( v105.m128i_i64[1] ) /*0x140ae690b*/
  {
    v71 = *((_QWORD *)&v106 + 1); /*0x140ae6911*/
    if ( *((_QWORD *)&v106 + 1) ) /*0x140ae6918*/
    {
      v72 = v105.m128i_i64[0]; /*0x140ae691e*/
      v73 = (const __m128i *)(v105.m128i_i64[0] + 16); /*0x140ae6927*/
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v105.m128i_i64[0])); /*0x140ae6930*/
      do /*0x140ae6951*/
      {
        if ( !(_WORD)_R12D ) /*0x140ae695b*/
        {
          do /*0x140ae697c*/
          {
            v75 = _mm_load_si128(v73); /*0x140ae6960*/
            v72 -= 384; /*0x140ae6965*/
            ++v73; /*0x140ae696c*/
            _R12D = _mm_movemask_epi8(v75) ^ 0xFFFF; /*0x140ae6975*/
          }
          while ( !_R12D ); /*0x140ae697c*/
        }
        __asm { tzcnt eax, r12d } /*0x140ae697e*/
        v76 = -3 * _RAX; /*0x140ae6986*/
        v77 = *(_QWORD *)(v72 + 8 * v76 - 24); /*0x140ae698a*/
        if ( v77 ) /*0x140ae6992*/
          sub_140001660(*(_QWORD *)(v72 + 8 * v76 - 16), v77, 1); /*0x140ae69a2*/
        --v71; /*0x140ae6940*/
        _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x140ae6948*/
        _R12D &= _R12D - 1; /*0x140ae694b*/
      }
      while ( v71 ); /*0x140ae6951*/
    }
    v81 = (24 * v70 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x140ae6a75*/
    v82 = v81 + v70 + 17; /*0x140ae6a7c*/
    if ( v82 ) /*0x140ae6a80*/
      sub_140001660(v105.m128i_i64[0] - v81, v82, 16); /*0x140ae6a92*/
  }
  v83 = v116; /*0x140ae6a97*/
  if ( v116 ) /*0x140ae6aa1*/
  {
    v84 = (_QWORD *)(v115.m128i_i64[1] + 72); /*0x140ae6aaa*/
    do /*0x140ae6ab7*/
    {
      v85 = *(v84 - 7); /*0x140ae6ab9*/
      if ( v85 ) /*0x140ae6ac0*/
        sub_140001660(*(v84 - 6), v85, 1); /*0x140ae6acc*/
      v86 = *(v84 - 1); /*0x140ae6ad1*/
      if ( v86 != -1 && v86 ) /*0x140ae6ade*/
        sub_140001660(*v84, v86, 1); /*0x140ae6ae9*/
      v87 = *(v84 - 4); /*0x140ae6aee*/
      if ( v87 ) /*0x140ae6af5*/
        sub_140001660(*(v84 - 3), v87, 1); /*0x140ae6b01*/
      v84 += 12; /*0x140ae6ab0*/
      --v83; /*0x140ae6ab4*/
    }
    while ( v83 ); /*0x140ae6ab7*/
  }
  if ( v115.m128i_i64[0] ) /*0x140ae6b12*/
    sub_140001660(v115.m128i_i64[1], 96 * v115.m128i_i64[0], 8); /*0x140ae6b29*/
  return v6; /*0x140ae6b66*/
}