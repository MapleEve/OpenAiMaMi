// win 1.2.7 | module src/core/relay/models.rs | ea 0x14102c620 | name sub_14102C620
// win 1.2.7 | module src/core/relay/models.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14102C620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // rbx
  __m128i *v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r12
  __m128i *v26; // rsi
  const __m128i *v27; // r14
  __int64 v28; // r13
  __m128i *v29; // rax
  unsigned __int64 v30; // rax
  char *v31; // r13
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  unsigned __int8 *v36; // r12
  char *v37; // rcx
  unsigned int v38; // r8d
  int v39; // r9d
  int v40; // r11d
  int v41; // r8d
  unsigned __int8 v42; // r10
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // r9d
  int v46; // eax
  unsigned __int8 v47; // r8
  __int64 v48; // r12
  char v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // r14
  const __m128i *v61; // r15
  const __m128i *v63; // rdi
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rbx
  __int64 v69; // r14
  const __m128i *v70; // r15
  __m128i v72; // xmm0
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i si128; // xmm0
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdi
  _QWORD *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __m128i v86; // xmm0
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  unsigned __int64 v89; // rdx
  _BYTE v90[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v91[24]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v92; // [rsp+50h] [rbp-30h] BYREF
  __int64 v93; // [rsp+60h] [rbp-20h]
  __m128i v94; // [rsp+68h] [rbp-18h] BYREF
  __int64 v95; // [rsp+78h] [rbp-8h]
  __m128i v96; // [rsp+80h] [rbp+0h] BYREF
  __int64 v97; // [rsp+90h] [rbp+10h]
  unsigned __int64 v98; // [rsp+98h] [rbp+18h]
  __m128i v99; // [rsp+A0h] [rbp+20h]
  __m128i v100; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v101; // [rsp+C0h] [rbp+40h]
  __m128i v102; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v103; // [rsp+E0h] [rbp+60h]
  __int64 v104; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v105; // [rsp+F8h] [rbp+78h]
  __m128i v106; // [rsp+100h] [rbp+80h] BYREF
  __int64 v107; // [rsp+110h] [rbp+90h]
  __m512i v108; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v109; // [rsp+160h] [rbp+E0h]
  __int128 v110; // [rsp+170h] [rbp+F0h]
  __int64 v111; // [rsp+188h] [rbp+108h]
  __m128i v112; // [rsp+190h] [rbp+110h] BYREF
  __int64 v113; // [rsp+1A0h] [rbp+120h]
  char *v114; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v115; // [rsp+1B0h] [rbp+130h]
  char *v116; // [rsp+1B8h] [rbp+138h]
  __int64 v117; // [rsp+1C0h] [rbp+140h]
  char v118; // [rsp+1CEh] [rbp+14Eh]
  char v119; // [rsp+1CFh] [rbp+14Fh]
  __int64 v120; // [rsp+1D0h] [rbp+150h]

  v120 = -2;
  v6 = a1;
  if ( !a3 )
  {
    sub_14102C3A0(&v108, a4, a5);
    v102 = *(__m128i *)&v108.m512i_u64[1];
    *(_QWORD *)&v103 = v108.m512i_i64[3];
    if ( v108.m512i_i8[0] )
    {
      *(_QWORD *)(v6 + 24) = v103;
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v102);
      *(_QWORD *)v6 = -1;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v103;
      *(__m128i *)(v6 + 24) = _mm_load_si128(&v102);
      *(_QWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 8;
      *(_QWORD *)(v6 + 16) = 0;
      *(_BYTE *)(v6 + 48) = a6;
    }
    return v6;
  }
  v9 = 96 * a3;
  nullsub_1(a1);
  v10 = sub_140001650(v9, 8);
  if ( !v10 )
    sub_141938D2B(8, v9);
  v112.m128i_i64[0] = a3;
  v112.m128i_i64[1] = v10;
  v113 = 0;
  v12 = sub_14167F170(v11);
  v14 = v12;
  if ( *(_BYTE *)(v12 + 16) == 1 )
  {
    v15 = *(_QWORD *)v12;
    v16 = *(_QWORD *)(v12 + 8);
  }
  else
  {
    v15 = sub_141696260();
    v16 = v89;
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v89;
    *(_BYTE *)(v14 + 16) = 1;
  }
  *(_QWORD *)v14 = v15 + 1;
  LOBYTE(v13) = 1;
  sub_1402957F0(&v108, 24, a3, v13);
  v17 = _mm_loadu_si128((const __m128i *)&v108);
  v103 = *(_OWORD *)&v108.m512i_u64[2];
  v102 = v17;
  v104 = v15;
  v105 = v16;
  v18 = a2 + 96 * a3;
  v19 = &v100;
  if ( a2 == v18 )
  {
LABEL_56:
    if ( !v113 )
      sub_1419390C3(0, 0, &off_141A71088);
    sub_1416AC440(&v106, v112.m128i_i64[1] + 16);
    if ( !v113 )
      sub_1419390C3(0, 0, &off_141A710A0);
    _RAX = *(unsigned __int8 *)(v112.m128i_i64[1] + 88);
    v108.m512i_i64[2] = v113;
    *(__m128i *)v108.m512i_i8 = _mm_loadu_si128(&v112);
    v108.m512i_i64[5] = v107;
    *(__m128i *)&v108.m512i_u64[3] = v106;
    *(_OWORD *)v6 = *(_OWORD *)v108.m512i_i8;
    *(_OWORD *)(v6 + 32) = *(_OWORD *)&v108.m512i_u64[4];
    *(_OWORD *)(v6 + 16) = *(_OWORD *)&v108.m512i_u64[2];
    *(_BYTE *)(v6 + 48) = _RAX;
    v58 = v102.m128i_i64[1];
    if ( v102.m128i_i64[1] )
    {
      v59 = *((_QWORD *)&v103 + 1);
      if ( *((_QWORD *)&v103 + 1) )
      {
        v60 = v102.m128i_i64[0];
        v61 = (const __m128i *)(v102.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v102.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              si128 = _mm_load_si128(v61);
              v60 -= 384;
              ++v61;
              _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v76 = -3 * _RAX;
          v77 = *(_QWORD *)(v60 + 8 * v76 - 24);
          if ( v77 )
            sub_140001660(*(_QWORD *)(v60 + 8 * v76 - 16), v77, 1);
          --v59;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v59 );
      }
      v87 = (24 * v58 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v88 = v87 + v58 + 17;
      if ( v88 )
        sub_140001660(v102.m128i_i64[0] - v87, v88, 16);
    }
    return v6;
  }
  while ( 1 )
  {
    sub_14102C3A0(&v108, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
    v106 = *(__m128i *)&v108.m512i_u64[1];
    v107 = v108.m512i_i64[3];
    if ( v108.m512i_i32[0] == 1 )
    {
      HIDWORD(_RAX) = HIDWORD(v107);
      *(_QWORD *)(v6 + 24) = v107;
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v106);
      *(_QWORD *)v6 = -1;
      goto LABEL_66;
    }
    v101 = v107;
    v100 = _mm_load_si128(&v106);
    v118 = 1;
    sub_1416AC440(&v108, v19);
    v118 = 1;
    if ( (unsigned __int8)sub_1403AAB80(&v102, &v108) )
    {
      v108.m512i_i64[0] = (__int64)v19;
      v108.m512i_i64[1] = (__int64)sub_1400015F0;
      v118 = 1;
      sub_1416ABFD0(&v96, &unk_141A70F8E, &v108);
      HIDWORD(_RAX) = HIDWORD(v97);
      *(_QWORD *)(v6 + 24) = v97;
      v86 = _mm_loadu_si128(&v96);
      goto LABEL_105;
    }
    v20 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 && (unsigned __int64)(*(_QWORD *)(a2 + 8) - 1LL) > 0x98967F )
    {
      v108.m512i_i64[0] = (__int64)v19;
      v108.m512i_i64[1] = (__int64)sub_1400015F0;
      v108.m512i_i64[2] = (__int64)&unk_141A70FB0;
      v108.m512i_i64[3] = (__int64)sub_1416BCBE0;
      v118 = 1;
      sub_1416ABFD0(&v94, &unk_141A70FB8, &v108);
      HIDWORD(_RAX) = HIDWORD(v95);
      *(_QWORD *)(v6 + 24) = v95;
      v86 = v94;
LABEL_105:
      *(__m128i *)(v6 + 8) = v86;
      *(_QWORD *)v6 = -1;
      v66 = v100.m128i_i64[0];
      if ( v100.m128i_i64[0] )
        goto LABEL_65;
      goto LABEL_66;
    }
    v21 = -1;
    if ( *(_QWORD *)(a2 + 64) == -1 )
    {
      v111 = *(_QWORD *)a2;
      goto LABEL_22;
    }
    v22 = sub_140E91160(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
    if ( !v22 || (v25 = v23) == 0 )
    {
      v111 = v20;
      v21 = -1;
      goto LABEL_22;
    }
    if ( v23 < 0 )
    {
      v28 = 0;
      goto LABEL_98;
    }
    v111 = v20;
    v117 = v6;
    v26 = v19;
    v27 = (const __m128i *)v22;
    nullsub_1(v24);
    v28 = 1;
    v29 = (__m128i *)sub_140001650(v25, 1);
    if ( !v29 )
    {
      v16 = v25;
LABEL_98:
      v118 = 1;
      sub_141938D2B(v28, v16);
    }
    v16 = (unsigned __int64)v29;
    sub_1418F44E0(v29, v27, v25);
    v116 = (char *)v16;
    v115 = v25;
    v119 = 1;
    if ( v25 >= 0x20 )
      v30 = sub_1416B3400(v16, v25);
    else
      v30 = sub_1416B3A20(v16, v25);
    v19 = v26;
    v6 = v117;
    if ( v30 >= 0x81 )
    {
      v108.m512i_i64[0] = (__int64)v19;
      v108.m512i_i64[1] = (__int64)sub_1400015F0;
      v108.m512i_i64[2] = (__int64)&unk_141A71050;
      v108.m512i_i64[3] = (__int64)sub_1416BCB10;
      v116 = (char *)v16;
      v115 = v25;
      v119 = 1;
      sub_1416ABFD0(&v92, &unk_141A71058, &v108);
      *(_QWORD *)(v6 + 24) = v93;
      *(_OWORD *)(v6 + 8) = v92;
      *(_QWORD *)v6 = -1;
      v65 = v25;
      goto LABEL_63;
    }
    v21 = v25;
    v98 = v25;
LABEL_22:
    v31 = *(char **)(a2 + 48);
    v32 = *(_QWORD *)(a2 + 56);
    v117 = v21;
    v116 = (char *)v16;
    v115 = v21;
    v119 = 1;
    v33 = v32 >= 0x20 ? sub_1416B3400(v31, v32) : sub_1416B3A20(v31, v32);
    if ( v33 > 8 )
      break;
    v114 = (char *)v16;
    v34 = a2 + 96;
    v35 = a2 + 40;
    v36 = (unsigned __int8 *)&v31[v32];
    if ( v117 == -1 )
      goto LABEL_52;
    v37 = v114;
    while ( v37 != &v114[v98] )
    {
      v38 = (unsigned __int8)*v37;
      if ( *v37 < 0 )
      {
        v39 = v38 & 0x1F;
        v40 = v37[1] & 0x3F;
        if ( (unsigned __int8)v38 <= 0xDFu )
        {
          v37 += 2;
          v38 = v40 | (v39 << 6);
          if ( v38 < 0x20 )
            goto LABEL_61;
        }
        else
        {
          v41 = (v40 << 6) | v37[2] & 0x3F;
          if ( (unsigned __int8)*v37 < 0xF0u )
          {
            v37 += 3;
            v38 = (v39 << 12) | v41;
            if ( v38 < 0x20 )
              goto LABEL_61;
          }
          else
          {
            v42 = v37[3];
            v37 += 4;
            v38 = ((v39 & 7) << 18) | (v41 << 6) | v42 & 0x3F;
            if ( v38 < 0x20 )
              goto LABEL_61;
          }
        }
      }
      else
      {
        ++v37;
        if ( v38 < 0x20 )
          goto LABEL_61;
      }
      if ( v38 - 127 < 0x21 )
      {
LABEL_61:
        v108.m512i_i64[0] = (__int64)v19;
        v108.m512i_i64[1] = (__int64)sub_1400015F0;
        v16 = (unsigned __int64)v114;
        v116 = v114;
        v115 = v117;
        v119 = 1;
        v63 = (const __m128i *)v90;
        sub_1416ABFD0(v90, &unk_141A70FE7, &v108);
        goto LABEL_62;
      }
    }
LABEL_52:
    while ( v31 != (char *)v36 )
    {
      v43 = (unsigned __int8)*v31;
      if ( *v31 < 0 )
      {
        v44 = v43 & 0x1F;
        v45 = v31[1] & 0x3F;
        if ( (unsigned __int8)v43 <= 0xDFu )
        {
          v31 += 2;
          v43 = v45 | (v44 << 6);
          if ( v43 < 0x20 )
            goto LABEL_61;
        }
        else
        {
          v46 = (v45 << 6) | v31[2] & 0x3F;
          if ( (unsigned __int8)*v31 < 0xF0u )
          {
            v31 += 3;
            v43 = (v44 << 12) | v46;
            if ( v43 < 0x20 )
              goto LABEL_61;
          }
          else
          {
            v47 = v31[3];
            v31 += 4;
            v43 = ((v44 & 7) << 18) | (v46 << 6) | v47 & 0x3F;
            if ( v43 < 0x20 )
              goto LABEL_61;
          }
        }
      }
      else
      {
        ++v31;
        if ( v43 < 0x20 )
          goto LABEL_61;
      }
      if ( v43 - 127 < 0x21 )
        goto LABEL_61;
    }
    v99 = v100;
    v48 = v101;
    v49 = *(_BYTE *)(a2 + 88);
    v50 = *(_QWORD *)(a2 + 8);
    sub_1416AC440(&v106, v35);
    *(__m128i *)&v108.m512i_u64[2] = v99;
    v108.m512i_i64[4] = v48;
    BYTE8(v110) = v49;
    v108.m512i_i64[0] = v111;
    v108.m512i_i64[1] = v50;
    *(_QWORD *)&v109 = v117;
    *((_QWORD *)&v109 + 1) = v114;
    *(_QWORD *)&v110 = v98;
    v108.m512i_i64[7] = v107;
    *(__m128i *)&v108.m512i_u64[5] = v106;
    v51 = v113;
    if ( v113 == v112.m128i_i64[0] )
      sub_141910140(&v112);
    v52 = v112.m128i_i64[1];
    v53 = 96 * v51;
    *(_OWORD *)(v112.m128i_i64[1] + v53 + 80) = v110;
    *(_OWORD *)(v52 + v53 + 64) = v109;
    v54 = _mm_loadu_si128((const __m128i *)&v108);
    v55 = *(_OWORD *)&v108.m512i_u64[2];
    v56 = *(_OWORD *)&v108.m512i_u64[4];
    *(_OWORD *)(v52 + v53 + 48) = *(_OWORD *)&v108.m512i_u64[6];
    *(_OWORD *)(v52 + v53 + 32) = v56;
    *(_OWORD *)(v52 + v53 + 16) = v55;
    *(__m128i *)(v52 + v53) = v54;
    v113 = v51 + 1;
    a2 = v34;
    v16 = (unsigned __int64)v114;
    if ( a2 == v18 )
      goto LABEL_56;
  }
  v108.m512i_i64[0] = (__int64)v19;
  v108.m512i_i64[1] = (__int64)sub_1400015F0;
  v108.m512i_i64[2] = (__int64)&unk_141A71020;
  v108.m512i_i64[3] = (__int64)sub_1416BCB10;
  v116 = (char *)v16;
  v115 = v117;
  v119 = 1;
  v63 = (const __m128i *)v91;
  sub_1416ABFD0(v91, &unk_141A71028, &v108);
LABEL_62:
  _RAX = v63[1].m128i_i64[0];
  *(_QWORD *)(v6 + 24) = _RAX;
  *(__m128i *)(v6 + 8) = _mm_loadu_si128(v63);
  *(_QWORD *)v6 = -1;
  v65 = v117;
  if ( v117 > 0 )
LABEL_63:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v16, v65, 1) >> 32;
  v66 = v100.m128i_i64[0];
  if ( v100.m128i_i64[0] )
LABEL_65:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v100.m128i_i64[1], v66, 1) >> 32;
LABEL_66:
  v67 = v102.m128i_i64[1];
  if ( v102.m128i_i64[1] )
  {
    v68 = *((_QWORD *)&v103 + 1);
    if ( *((_QWORD *)&v103 + 1) )
    {
      v69 = v102.m128i_i64[0];
      v70 = (const __m128i *)(v102.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v102.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v72 = _mm_load_si128(v70);
            v69 -= 384;
            ++v70;
            _R12D = _mm_movemask_epi8(v72) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v73 = -3 * _RAX;
        v74 = *(_QWORD *)(v69 + 8 * v73 - 24);
        if ( v74 )
          sub_140001660(*(_QWORD *)(v69 + 8 * v73 - 16), v74, 1);
        --v68;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v68 );
    }
    v78 = (24 * v67 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v79 = v78 + v67 + 17;
    if ( v79 )
      sub_140001660(v102.m128i_i64[0] - v78, v79, 16);
  }
  v80 = v113;
  if ( v113 )
  {
    v81 = (_QWORD *)(v112.m128i_i64[1] + 72);
    do
    {
      v82 = *(v81 - 7);
      if ( v82 )
        sub_140001660(*(v81 - 6), v82, 1);
      v83 = *(v81 - 1);
      if ( v83 != -1 && v83 )
        sub_140001660(*v81, v83, 1);
      v84 = *(v81 - 4);
      if ( v84 )
        sub_140001660(*(v81 - 3), v84, 1);
      v81 += 12;
      --v80;
    }
    while ( v80 );
  }
  if ( v112.m128i_i64[0] )
    sub_140001660(v112.m128i_i64[1], 96 * v112.m128i_i64[0], 8);
  return v6;
}
