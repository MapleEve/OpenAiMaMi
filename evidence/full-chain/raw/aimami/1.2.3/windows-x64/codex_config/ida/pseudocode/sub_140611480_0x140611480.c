// module: codexmate_lib/core/codex_config
// addr: 0x140611480
// name: sub_140611480
// win 1.2.1 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140611480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  const __m128i *v23; // rsi
  unsigned __int64 v24; // rdi
  __m128i v25; // xmm0
  __m128i v26; // xmm7
  __int64 i; // r13
  unsigned __int64 v28; // rax
  __m128i v29; // xmm8
  unsigned __int64 v31; // r12
  __int8 *v32; // rbx
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // rsi
  __int64 v36; // r15
  unsigned __int64 *v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  char v41; // di
  char v42; // bl
  void *v43; // r15
  const __m128i *v44; // r12
  const __m128i *v45; // r13
  __m128i si128; // xmm0
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char *v51; // r15
  char *v52; // r15
  __int64 v53; // rdi
  unsigned __int64 v54; // r13
  __int64 v55; // r8
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r15
  __int64 v58; // r12
  __int64 v59; // rcx
  unsigned __int64 v60; // rbx
  _QWORD *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rax
  _QWORD *v69; // rbx
  __int64 v70; // rdx
  unsigned __int64 *v71; // rdi
  _QWORD *v72; // rbx
  __int64 v73; // rdx
  __m128i v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  __m128i v83; // [rsp+30h] [rbp-50h] BYREF
  __int128 v84; // [rsp+40h] [rbp-40h]
  __int128 v85; // [rsp+50h] [rbp-30h]
  __int128 v86; // [rsp+60h] [rbp-20h]
  unsigned __int64 v87; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v88; // [rsp+78h] [rbp-8h]
  __int64 v89; // [rsp+80h] [rbp+0h]
  __int64 v90; // [rsp+88h] [rbp+8h]
  __int64 v91; // [rsp+90h] [rbp+10h]
  _QWORD v92[2]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v93; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v94; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v95; // [rsp+B8h] [rbp+38h]
  __int64 v96; // [rsp+C0h] [rbp+40h]
  __int64 v97; // [rsp+C8h] [rbp+48h]
  __int64 v98; // [rsp+D0h] [rbp+50h]
  __m128i v99; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 *v100; // [rsp+E8h] [rbp+68h]
  const __m128i *v101; // [rsp+F0h] [rbp+70h]
  void *v102; // [rsp+F8h] [rbp+78h]
  __int64 (__fastcall *v103)(); // [rsp+100h] [rbp+80h]
  __int64 v104; // [rsp+108h] [rbp+88h]
  char v105[16]; // [rsp+110h] [rbp+90h] BYREF
  __m128i v106; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v107; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v108)(_QWORD, _QWORD); // [rsp+138h] [rbp+B8h]
  __m128i v109; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v110; // [rsp+150h] [rbp+D0h]
  __int128 v111; // [rsp+160h] [rbp+E0h]
  __int128 v112; // [rsp+170h] [rbp+F0h]
  __int64 v113; // [rsp+188h] [rbp+108h]
  __m128i v114; // [rsp+190h] [rbp+110h] BYREF
  __int64 v115; // [rsp+1A0h] [rbp+120h]
  __int64 v116; // [rsp+1A8h] [rbp+128h]
  __int64 v117; // [rsp+1B0h] [rbp+130h]
  __int64 v118; // [rsp+1B8h] [rbp+138h]
  char v119; // [rsp+1C7h] [rbp+147h] BYREF
  __int64 v120; // [rsp+1C8h] [rbp+148h]
  __int64 v121; // [rsp+1D0h] [rbp+150h]
  __int64 v122; // [rsp+1D8h] [rbp+158h]
  __int64 v123; // [rsp+1E0h] [rbp+160h]
  __int64 v124; // [rsp+1E8h] [rbp+168h]

  v124 = -2;
  v8 = a3;
  v92[0] = a4;
  v92[1] = a5;
  v113 = a2;
  v10 = sub_1414740B0(a2, a3);
  if ( v10 )
  {
    v106.m128i_i8[0] = 1;
    v12 = sub_14147B9A0(&v106, v10, v11);
    if ( v12 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v12;
      return a1;
    }
  }
  v97 = *a6;
  v13 = a6[1];
  v14 = 1;
  v15 = 0;
  v96 = v13;
  v98 = a1;
  v90 = v8;
  while ( 1 )
  {
    if ( (v15 & 1) != 0 || v14 > 3 )
    {
      v106.m128i_i64[0] = (__int64)v92;
      v106.m128i_i64[1] = (__int64)sub_14041F680;
      sub_14149C0F0(a1 + 8, &unk_14176663E, &v106);
      *(_QWORD *)a1 = 10;
      return a1;
    }
    v16 = v14 + 1;
    LOBYTE(v6) = v14 == 3;
    if ( v14 == 3 )
      v16 = 3;
    v88 = v16;
    v87 = v14;
    sub_14148D130(&v106, v113, v8);
    v17 = v106.m128i_i64[1];
    if ( v106.m128i_i64[0] == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(v106.m128i_i64[1]) )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v17;
        *(_QWORD *)(a1 + 16) = v117;
        *(_QWORD *)(a1 + 24) = v7;
        return a1;
      }
      v99.m128i_i64[0] = v17;
      sub_140018650(&v99);
      v19 = 1;
      v18 = 0;
      v120 = 0;
    }
    else
    {
      v120 = v106.m128i_i64[0];
      v18 = v107;
      v19 = v106.m128i_i64[1];
    }
    v89 = v6;
    v117 = v19;
    v122 = v18;
    sub_1409E5800((__int64)&v99, v19, v18);
    v20 = v104;
    if ( !v104 )
    {
LABEL_22:
      v114.m128i_i64[0] = (__int64)a6;
      v114.m128i_i64[1] = (__int64)sub_14041F680;
      sub_14149C0F0(&v106.m128i_u64[1], &unk_141767660, &v114);
      v121 = v106.m128i_i64[1];
      v123 = v107;
      v35 = (unsigned __int64)v108;
      v83 = _mm_loadu_si128(&v109);
      v84 = v110;
      v85 = v111;
      v86 = v112;
      v36 = v99.m128i_i64[1];
      v37 = v100;
      if ( v100 )
      {
        v38 = (_QWORD *)(v99.m128i_i64[1] + 8);
        do
        {
          v39 = *(v38 - 1);
          if ( v39 )
            sub_140001660(*v38, v39, 1);
          v38 += 3;
          v37 = (unsigned __int64 *)((char *)v37 - 1);
        }
        while ( v37 );
      }
      _RAX = v99.m128i_i64[0];
      v116 = 8;
      v41 = 0;
      v42 = 0;
      v7 = v122;
      if ( v99.m128i_i64[0] )
        goto LABEL_28;
      goto LABEL_29;
    }
    v21 = sub_1403795A0(v105, v97, v13);
    _RCX = v21 >> 57;
    v23 = v101;
    v24 = (unsigned __int64)v102;
    v25 = _mm_cvtsi32_si128(v21 >> 57);
    v26 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v28 = v24 & v21;
      v29 = _mm_loadu_si128((const __m128i *)((char *)v23 + v28));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v29, v26));
      if ( _R15D )
        break;
LABEL_20:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v29, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_22;
      v21 = i + v28 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   ecx, r15d }
      v31 = v28;
      _RCX = -(__int64)(v24 & (v28 + _RCX));
      if ( v96 == *((_QWORD *)&v23[-1] + 5 * _RCX - 1) )
      {
        v32 = &v23->m128i_i8[40 * _RCX];
        if ( !(unsigned int)sub_1416847B0(v97, *((_QWORD *)v32 - 4), v96) )
          break;
      }
      v33 = _R15D - 1;
      LOWORD(v33) = _R15D & (_R15D - 1);
      v34 = (_WORD)v33 == 0;
      _R15D = v33;
      v28 = v31;
      if ( v34 )
        goto LABEL_20;
    }
    sub_14032C050(&v93, &v99);
    v54 = *((_QWORD *)v32 - 1);
    v55 = v95;
    v56 = v95 - v54;
    if ( v95 < v54 )
      sub_1416C32F0(0, *((_QWORD *)v32 - 1), v95, &off_1417A66B8);
    v57 = *((_QWORD *)v32 - 2);
    if ( v57 > v54 )
      sub_1416C32F0(*((_QWORD *)v32 - 2), *((_QWORD *)v32 - 1), v95, &off_1417A66D0);
    v95 = *((_QWORD *)v32 - 2);
    v58 = v94;
    v59 = 24 * v57;
    if ( v54 == v57 )
    {
      v7 = v122;
      if ( v55 == v57 )
        goto LABEL_69;
      goto LABEL_68;
    }
    v123 = v55;
    v116 = v94 + v59;
    v121 = v94 + 24 * v54;
    v60 = (24 * v54 - 24 * v57) / 0x18;
    v61 = (_QWORD *)(v94 + v59 + 8);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 3;
      --v60;
    }
    while ( v60 );
    if ( v123 != v54 )
    {
      sub_141684120(v116, v121, 24 * v56);
      v7 = v122;
LABEL_68:
      v57 += v56;
      v95 = v57;
      goto LABEL_69;
    }
    v7 = v122;
LABEL_69:
    v63 = v93;
    while ( v57 >= 2 )
    {
      sub_14033BC10(*(_QWORD *)(v58 + 24 * v57 - 16), *(_QWORD *)(v58 + 24 * v57 - 8));
      if ( v64 )
        break;
      sub_14033BC10(*(_QWORD *)(v58 + 24 * v57 - 40), *(_QWORD *)(v58 + 24 * v57 - 32));
      if ( v65 )
        break;
      v95 = --v57;
      v66 = *(_QWORD *)(v58 + 24 * v57);
      if ( (unsigned __int64)(v66 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*(_QWORD *)(v58 + 24 * v57 + 8), v66, 1);
    }
    sub_140440300((unsigned int)&v106, v58, v57, (unsigned int)&unk_141767EA8, 1);
    v35 = v107;
    v115 = v107;
    v67 = _mm_loadu_si128(&v106);
    v114 = v67;
    v68 = v67.m128i_i64[1];
    if ( !v107 )
    {
      v123 = v67.m128i_i64[1];
      v35 = 0;
      v121 = v114.m128i_i64[0];
      if ( !v57 )
        goto LABEL_88;
      goto LABEL_84;
    }
    if ( *(_BYTE *)(v67.m128i_i64[1] + v107 - 1) == 10 )
    {
      v123 = v67.m128i_i64[1];
      v121 = v114.m128i_i64[0];
      if ( !v57 )
        goto LABEL_88;
LABEL_84:
      v69 = (_QWORD *)(v58 + 8);
      do
      {
        v70 = *(v69 - 1);
        if ( v70 )
          sub_140001660(*v69, v70, 1);
        v69 += 3;
        --v57;
      }
      while ( v57 );
      goto LABEL_88;
    }
    if ( v114.m128i_i64[0] == v107 )
    {
      sub_141688D30((unsigned int)&v114, v107, 1, 1, 1);
      v68 = v114.m128i_i64[1];
    }
    v123 = v68;
    *(_BYTE *)(v68 + v35++) = 10;
    v121 = v114.m128i_i64[0];
    if ( v57 )
      goto LABEL_84;
LABEL_88:
    if ( v63 )
      sub_140001660(v58, 24 * v63, 8);
    v36 = v99.m128i_i64[1];
    v71 = v100;
    if ( v100 )
    {
      v72 = (_QWORD *)(v99.m128i_i64[1] + 8);
      do
      {
        v73 = *(v72 - 1);
        if ( v73 )
          sub_140001660(*v72, v73, 1);
        v72 += 3;
        v71 = (unsigned __int64 *)((char *)v71 - 1);
      }
      while ( v71 );
    }
    _RAX = v99.m128i_i64[0];
    v116 = -1;
    v41 = 1;
    v42 = 1;
    if ( v99.m128i_i64[0] )
    {
LABEL_28:
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v36, 24 * _RAX, 8) >> 32;
      v42 = v41;
    }
LABEL_29:
    v43 = v102;
    if ( v102 )
    {
      if ( v20 )
      {
        v44 = v101;
        v45 = v101 + 1;
        _EDI = ~_mm_movemask_epi8(_mm_load_si128(v101));
        do
        {
          if ( !(_WORD)_EDI )
          {
            do
            {
              si128 = _mm_load_si128(v45);
              v44 -= 40;
              ++v45;
              _EDI = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_EDI );
          }
          __asm { tzcnt   eax, edi }
          v48 = -5 * _RAX;
          v49 = *((_QWORD *)&v44[-2] + v48 - 1);
          if ( v49 )
            sub_140001660(v44[-2].m128i_i64[v48], v49, 1);
          --v20;
          _RAX = _EDI & (unsigned int)(_EDI - 1);
          _EDI &= _EDI - 1;
        }
        while ( v20 );
      }
      v50 = (40LL * (_QWORD)v43 + 55) & 0xFFFFFFFFFFFFFFF0uLL;
      v51 = (char *)v43 + v50;
      v34 = v51 + 17 == nullptr;
      v52 = v51 + 17;
      v7 = v122;
      if ( !v34 )
        sub_140001660((char *)v101 - v50, v52, 16);
    }
    if ( !v42 )
    {
      v74 = v83;
      v75 = v84;
      v76 = v85;
      a1 = v98;
      *(_OWORD *)(v98 + 80) = v86;
      *(_OWORD *)(a1 + 64) = v76;
      *(_OWORD *)(a1 + 48) = v75;
      *(__m128i *)(a1 + 32) = v74;
      *(_QWORD *)(a1 + 16) = v123;
      *(_QWORD *)(a1 + 24) = v35;
      *(_QWORD *)a1 = v116;
      *(_QWORD *)(a1 + 8) = v121;
      v77 = v120;
      goto LABEL_110;
    }
    a1 = v98;
    if ( v35 == v7 && !(unsigned int)sub_1416847B0(v123, v117, v7) )
    {
      *(_QWORD *)a1 = -1;
LABEL_104:
      v77 = v120;
      v80 = v121;
      goto LABEL_108;
    }
    v8 = v90;
    sub_14148D130(&v106, v113, v90);
    v13 = v96;
    v53 = v106.m128i_i64[1];
    if ( v106.m128i_i64[0] == -1 )
      break;
    v118 = v106.m128i_i64[1];
    v122 = v106.m128i_i64[0];
    v91 = v107;
    v6 = v120;
    if ( v107 == v7 )
      goto LABEL_52;
LABEL_53:
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v99.m128i_i64[0] = (__int64)v92;
      v99.m128i_i64[1] = (__int64)sub_14041F680;
      v100 = &v87;
      v101 = (const __m128i *)sub_1414AC520;
      v102 = &unk_141766688;
      v103 = sub_1414AC520;
      v106.m128i_i64[0] = 0;
      v106.m128i_i64[1] = (__int64)aCodexmateLibCo_2;
      v107 = 33;
      v108 = nullptr;
      v109.m128i_i64[0] = (__int64)aSrcCoreCodexCo;
      v109.m128i_i64[1] = 24;
      *(_QWORD *)&v110 = 2;
      *((_QWORD *)&v110 + 1) = aCodexmateLibCo_2;
      *(_QWORD *)&v111 = 33;
      *((_QWORD *)&v111 + 1) = 0x1B00000001LL;
      *(_QWORD *)&v112 = &unk_141766690;
      *((_QWORD *)&v112 + 1) = &v99;
      sub_1412C36A0(&v119, &v106);
      v6 = v120;
    }
    if ( v122 )
      sub_140001660(v118, v122, 1);
    if ( v121 )
      sub_140001660(v123, v121, 1);
    if ( v6 )
      sub_140001660(v117, v6, 1);
    v14 = v88;
    v15 = v89;
  }
  if ( (unsigned __int8)sub_14065FAD0(v106.m128i_i64[1]) )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v53;
    *(_QWORD *)(a1 + 16) = v118;
    *(_QWORD *)(a1 + 24) = v91;
    goto LABEL_104;
  }
  v99.m128i_i64[0] = v53;
  sub_140018650(&v99);
  v118 = 1;
  v122 = 0;
  v91 = 0;
  v6 = v120;
  if ( v7 )
    goto LABEL_53;
LABEL_52:
  if ( (unsigned int)sub_1416847B0(v118, v117, v7) )
    goto LABEL_53;
  v78 = sub_1408726C0(v113, v8, v123, v35);
  if ( v78 )
  {
    v83.m128i_i64[0] = v78;
    v106.m128i_i64[0] = (__int64)v92;
    v106.m128i_i64[1] = (__int64)sub_14041F680;
    v107 = (__int64)&v83;
    v108 = sub_141490720;
    sub_14149C0F0(&v99, &unk_141767240, &v106);
    v106 = _mm_loadu_si128(&v99);
    v107 = (__int64)v100;
    sub_140018650(&v83);
    *(_QWORD *)(a1 + 24) = v107;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v106);
    v79 = 10;
  }
  else
  {
    v79 = -1;
  }
  *(_QWORD *)a1 = v79;
  v77 = v120;
  v80 = v121;
  if ( v122 )
  {
    v81 = v121;
    sub_140001660(v118, v122, 1);
    v80 = v81;
  }
LABEL_108:
  if ( v80 )
    sub_140001660(v123, v80, 1);
LABEL_110:
  if ( v77 )
    sub_140001660(v117, v77, 1);
  return a1;
}