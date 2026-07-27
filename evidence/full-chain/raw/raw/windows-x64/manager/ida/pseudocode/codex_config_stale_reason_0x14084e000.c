// module: codexmate_lib/core/relay/manager
// addr: 0x14084e000
// name: codex_config_stale_reason
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall codex_config_stale_reason(__m128i *a1, _QWORD *a2)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r13
  char v22; // r15
  char v23; // al
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  const __m128i *v33; // r15
  const __m128i *v34; // r12
  __m128i si128; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r14
  const __m128i *v47; // r15
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r13
  void *v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 i; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // [rsp+30h] [rbp-50h] BYREF
  __int64 v73; // [rsp+38h] [rbp-48h] BYREF
  __int64 v74; // [rsp+40h] [rbp-40h]
  char v75; // [rsp+154h] [rbp+D4h]
  __m128i v76; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v77; // [rsp+168h] [rbp+E8h]
  const __m128i *v78; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v79; // [rsp+178h] [rbp+F8h]
  __int64 v80; // [rsp+188h] [rbp+108h]
  __m128i v81; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v82; // [rsp+1B0h] [rbp+130h]
  __int64 v83; // [rsp+1C0h] [rbp+140h]
  __int64 v84; // [rsp+1C8h] [rbp+148h]
  __m128i v85; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v86; // [rsp+1E0h] [rbp+160h]
  __int64 v87; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp+178h]
  __int64 v89; // [rsp+200h] [rbp+180h]
  __int64 v90; // [rsp+208h] [rbp+188h]
  __int64 v91; // [rsp+210h] [rbp+190h]
  __int64 v92; // [rsp+230h] [rbp+1B0h]
  __int64 v93; // [rsp+238h] [rbp+1B8h]
  __int64 v94; // [rsp+240h] [rbp+1C0h]
  const __m128i *v95; // [rsp+260h] [rbp+1E0h]
  __int64 v96; // [rsp+268h] [rbp+1E8h]
  __int64 v97; // [rsp+278h] [rbp+1F8h]
  unsigned __int8 v98; // [rsp+290h] [rbp+210h]
  char v99; // [rsp+292h] [rbp+212h]
  unsigned __int8 v100; // [rsp+293h] [rbp+213h]
  char v101; // [rsp+294h] [rbp+214h]
  char v102; // [rsp+295h] [rbp+215h]
  char v103; // [rsp+296h] [rbp+216h]
  unsigned __int8 v104; // [rsp+297h] [rbp+217h]
  char v105; // [rsp+298h] [rbp+218h]
  unsigned __int8 v106; // [rsp+299h] [rbp+219h]
  __int64 v107; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v108; // [rsp+2B0h] [rbp+230h]
  __int64 v109; // [rsp+2B8h] [rbp+238h]
  __int64 v110; // [rsp+2C0h] [rbp+240h]
  __int64 v111; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v112; // [rsp+2D0h] [rbp+250h]
  __m128i v113; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 *v114; // [rsp+2E8h] [rbp+268h]
  __int64 (__fastcall *v115)(); // [rsp+2F0h] [rbp+270h]
  __int64 v116; // [rsp+2F8h] [rbp+278h]
  __m128i v117; // [rsp+300h] [rbp+280h] BYREF
  __int64 v118; // [rsp+310h] [rbp+290h]
  __int64 v119; // [rsp+318h] [rbp+298h]
  __m128i v120; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 *v121; // [rsp+330h] [rbp+2B0h]
  __int64 v122; // [rsp+340h] [rbp+2C0h]
  __int64 v123; // [rsp+348h] [rbp+2C8h]
  __int64 v124; // [rsp+350h] [rbp+2D0h]
  __int64 v125; // [rsp+358h] [rbp+2D8h]
  __int64 v126; // [rsp+360h] [rbp+2E0h]

  v126 = -2;
  v4 = *a2;
  sub_14148D130(&v72, *(_QWORD *)(*a2 + 88LL), *(_QWORD *)(*a2 + 96LL));
  if ( v72 == -1 )
  {
    sub_140018650(&v73);
    a1->m128i_i64[0] = -1;
    return a1;
  }
  v122 = v72;
  v123 = v73;
  v125 = v74;
  sub_14085A1E0((__int64)&v72, (__int64)a2);
  v5 = v73;
  v6 = v74;
  v9 = sub_141470CD0(v8, v7);
  v11 = v9;
  if ( *(_BYTE *)(v9 + 16) == 1 )
  {
    v12 = *(_QWORD *)v9;
    v13 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    v12 = sub_141486EF0();
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 1;
  }
  *(_QWORD *)v11 = v12 + 1;
  v86 = xmmword_1417939D0;
  v85 = _mm_loadu_si128((const __m128i *)&off_1417939C0);
  v87 = v12;
  v88 = v13;
  if ( v6 )
  {
    LOBYTE(v10) = 1;
    sub_1416BA580(&v85, v6, &v87, v10);
    for ( i = 0; i != v6; ++i )
    {
      sub_14149C500(&v78, v5 + 232 * i);
      sub_140474440(&v85, &v78);
    }
  }
  v14 = _mm_load_si128(&v85);
  v83 = v87;
  v84 = v88;
  v82 = v86;
  v81 = v14;
  sub_140578870((__int64)&v107, &v72);
  v15 = v109;
  v110 = v108;
  sub_140AE79F0((unsigned int)&v78, v5, v6, v108, v109);
  sub_14047B4A0((__int64)&v85, v4 + 16, v123, v125);
  if ( v99 )
  {
    nullsub_1(v16);
    v17 = sub_140001650(47, 1);
    if ( !v17 )
      sub_1416C2D4B(1, 47);
    *(_OWORD *)(v17 + 31) = *(__int128 *)((char *)&xmmword_141797383 + 15);
    *(_OWORD *)(v17 + 16) = xmmword_141797383;
    *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)&xmmword_141797373);
    a1->m128i_i64[0] = 47;
    a1->m128i_i64[1] = v17;
    a1[1].m128i_i64[0] = 47;
    goto LABEL_47;
  }
  v18 = v98;
  v19 = v100;
  if ( ((v98 | (unsigned __int8)(v100 | v101)) & 1) != 0
    || *((_QWORD *)&v86 + 1) != -1
    && v88 == 6
    && (v16 = *(_DWORD *)v87 ^ 0x616D6961u, !((unsigned int)v16 | *(unsigned __int16 *)(v87 + 4) ^ 0x3169))
    || (v20 = v89, v21 = v91, LOBYTE(v16) = v89 != -1 && v91 == 6, (_BYTE)v16 == 1)
    && (v16 = *(_DWORD *)v90 ^ 0x616D6961u, !((unsigned int)v16 | *(unsigned __int16 *)(v90 + 4) ^ 0x3169))
    || v104
    || v105
    || v102 )
  {
    if ( v75 == 1 )
    {
      v20 = v89;
      v21 = v91;
      v22 = 1;
      goto LABEL_27;
    }
LABEL_33:
    nullsub_1(v16);
    v26 = sub_140001650(69, 1);
    if ( !v26 )
      sub_1416C2D4B(1, 69);
    *(_OWORD *)(v26 + 48) = xmmword_14179702D;
    *(_OWORD *)(v26 + 32) = xmmword_14179701D;
    *(_OWORD *)(v26 + 16) = xmmword_14179700D;
    *(__m128i *)v26 = _mm_loadu_si128((const __m128i *)&xmmword_141796FFD);
    *(_QWORD *)(v26 + 61) = 0xA585E5A8B3E62072uLL;
    a1->m128i_i64[0] = 69;
    a1->m128i_i64[1] = v26;
    a1[1].m128i_i64[0] = 69;
    goto LABEL_47;
  }
  v22 = v75;
  if ( !v75 && v103 )
    goto LABEL_33;
  if ( !v75 && v92 != -1 )
  {
    LOBYTE(v124) = v98;
    v23 = sub_14040FFF0(v93, v94, 0, &v78);
    v18 = v124;
    if ( v23 )
    {
      nullsub_1(v16);
      v24 = sub_140001650(80, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 80);
      *(_OWORD *)(v24 + 64) = xmmword_141797082;
      *(_OWORD *)(v24 + 48) = xmmword_141797072;
      *(_OWORD *)(v24 + 32) = xmmword_141797062;
      *(_OWORD *)(v24 + 16) = xmmword_141797052;
      *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)&xmmword_141797042);
      a1->m128i_i64[0] = 80;
      a1->m128i_i64[1] = v24;
      a1[1].m128i_i64[0] = 80;
      goto LABEL_47;
    }
  }
  if ( !v22 && v97 )
  {
    nullsub_1(v16);
    v55 = sub_140001650(91, 1);
    if ( !v55 )
      sub_1416C2D4B(1, 91);
    *(_OWORD *)(v55 + 75) = *(__int128 *)((char *)&xmmword_1417970D2 + 11);
    *(_OWORD *)(v55 + 64) = xmmword_1417970D2;
    *(_OWORD *)(v55 + 48) = xmmword_1417970C2;
    *(_OWORD *)(v55 + 32) = xmmword_1417970B2;
    *(_OWORD *)(v55 + 16) = xmmword_1417970A2;
    *(__m128i *)v55 = _mm_loadu_si128((const __m128i *)&xmmword_141797092);
    a1->m128i_i64[0] = 91;
    a1->m128i_i64[1] = v55;
    a1[1].m128i_i64[0] = 91;
    goto LABEL_47;
  }
LABEL_27:
  if ( v22 != 1 || v20 == -1 || v21 != 6 )
  {
    if ( (v19 & (unsigned __int8)v22) == 0 )
    {
      if ( !v22 )
        goto LABEL_118;
      goto LABEL_39;
    }
LABEL_36:
    nullsub_1(v16);
    v27 = sub_140001650(90, 1);
    if ( !v27 )
      sub_1416C2D4B(1, 90);
    *(_OWORD *)(v27 + 74) = *(__int128 *)((char *)&xmmword_141797359 + 10);
    *(_OWORD *)(v27 + 64) = xmmword_141797359;
    *(_OWORD *)(v27 + 48) = xmmword_141797349;
    *(_OWORD *)(v27 + 32) = xmmword_141797339;
    *(_OWORD *)(v27 + 16) = xmmword_141797329;
    *(__m128i *)v27 = _mm_loadu_si128((const __m128i *)&xmmword_141797319);
    a1->m128i_i64[0] = 90;
    a1->m128i_i64[1] = v27;
    a1[1].m128i_i64[0] = 90;
    goto LABEL_47;
  }
  v25 = *(_DWORD *)v90 ^ 0x616D6961;
  v16 = v25 | *(unsigned __int16 *)(v90 + 4) ^ 0x3169u;
  if ( !(v25 | *(unsigned __int16 *)(v90 + 4) ^ 0x3169) )
  {
    nullsub_1(v16);
    v29 = sub_140001650(82, 1);
    if ( !v29 )
      sub_1416C2D4B(1, 82);
    *(_OWORD *)(v29 + 64) = xmmword_14179712D;
    *(_OWORD *)(v29 + 48) = xmmword_14179711D;
    *(_OWORD *)(v29 + 32) = xmmword_14179710D;
    *(_OWORD *)(v29 + 16) = xmmword_1417970FD;
    *(__m128i *)v29 = _mm_loadu_si128((const __m128i *)&xmmword_1417970ED);
    *(_WORD *)(v29 + 80) = -20803;
    goto LABEL_46;
  }
  if ( (v19 & 1) != 0 )
    goto LABEL_36;
LABEL_39:
  if ( *((_QWORD *)&v86 + 1) == -1
    || v88 != 6
    || (v28 = *(_DWORD *)v87 ^ 0x616D6961, (v16 = v28 | *(unsigned __int16 *)(v87 + 4) ^ 0x3169u) != 0) )
  {
    nullsub_1(v16);
    v29 = sub_140001650(82, 1);
    if ( !v29 )
      sub_1416C2D4B(1, 82);
    *(_OWORD *)(v29 + 64) = xmmword_141797307;
    *(_OWORD *)(v29 + 48) = xmmword_1417972F7;
    *(_OWORD *)(v29 + 32) = xmmword_1417972E7;
    *(_OWORD *)(v29 + 16) = xmmword_1417972D7;
    *(__m128i *)v29 = _mm_loadu_si128((const __m128i *)&xmmword_1417972C7);
    *(_WORD *)(v29 + 80) = -23163;
LABEL_46:
    a1->m128i_i64[0] = 82;
    a1->m128i_i64[1] = v29;
    a1[1].m128i_i64[0] = 82;
LABEL_47:
    HIDWORD(_RAX) = (unsigned __int64)sub_14043ECD0(&v85) >> 32;
    v31 = v79;
    if ( v79 )
    {
      v32 = v80;
      if ( v80 )
      {
        v33 = v78;
        v34 = v78 + 1;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v78));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              si128 = _mm_load_si128(v34);
              v33 -= 24;
              ++v34;
              _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v37 = -3 * _RAX;
          v38 = *((_QWORD *)&v33[-1] + v37 - 1);
          if ( v38 )
            sub_140001660(v33[-1].m128i_i64[v37], v38, 1);
          --v32;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v32 );
      }
      v39 = (24 * v31 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v40 = v39 + v31 + 17;
      if ( v40 )
        sub_140001660((char *)v78 - v39, v40, 16);
    }
    if ( v15 )
    {
      v41 = (_QWORD *)(v110 + 8);
      do
      {
        v42 = *(v41 - 1);
        if ( v42 )
          sub_140001660(*v41, v42, 1);
        v41 += 3;
        --v15;
      }
      while ( v15 );
    }
    HIDWORD(_RAX) = HIDWORD(v107);
    if ( v107 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v110, 24 * v107, 8) >> 32;
    v44 = v81.m128i_i64[1];
    if ( v81.m128i_i64[1] )
    {
      v45 = *((_QWORD *)&v82 + 1);
      if ( *((_QWORD *)&v82 + 1) )
      {
        v46 = v81.m128i_i64[0];
        v47 = (const __m128i *)(v81.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v81.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v49 = _mm_load_si128(v47);
              v46 -= 384;
              ++v47;
              _R12D = _mm_movemask_epi8(v49) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v50 = -3 * _RAX;
          v51 = *(_QWORD *)(v46 + 8 * v50 - 24);
          if ( v51 )
            sub_140001660(*(_QWORD *)(v46 + 8 * v50 - 16), v51, 1);
          --v45;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v45 );
      }
      v52 = (24 * v44 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v53 = v52 + v44 + 17;
      if ( v53 )
        sub_140001660(v81.m128i_i64[0] - v52, v53, 16);
    }
    sub_140018740(&v72);
    goto LABEL_75;
  }
  if ( ((v18 | (unsigned __int8)v22 ^ 1) & 1) == 0 )
  {
    nullsub_1(v16);
    v64 = sub_140001650(86, 1);
    if ( !v64 )
      sub_1416C2D4B(1, 86);
    qmemcpy((void *)(v64 + 64), "og_json router catalog", 22);
    *(_OWORD *)(v64 + 48) = xmmword_14179716F;
    *(_OWORD *)(v64 + 32) = xmmword_14179715F;
    *(_OWORD *)(v64 + 16) = xmmword_14179714F;
    *(__m128i *)v64 = _mm_loadu_si128((const __m128i *)&xmmword_14179713F);
    a1->m128i_i64[0] = 86;
    a1->m128i_i64[1] = v64;
    a1[1].m128i_i64[0] = 86;
    goto LABEL_47;
  }
  if ( (v106 & v104) == 0 )
  {
    nullsub_1(v16);
    v65 = sub_140001650(72, 1);
    if ( !v65 )
      sub_1416C2D4B(1, 72);
    *(_OWORD *)(v65 + 48) = xmmword_1417971C5;
    *(_OWORD *)(v65 + 32) = xmmword_1417971B5;
    *(_OWORD *)(v65 + 16) = xmmword_1417971A5;
    *(__m128i *)v65 = _mm_loadu_si128((const __m128i *)&xmmword_141797195);
    *(_QWORD *)(v65 + 64) = 0xA38FE5A585E5B194uLL;
    a1->m128i_i64[0] = 72;
    a1->m128i_i64[1] = v65;
    a1[1].m128i_i64[0] = 72;
    goto LABEL_47;
  }
  sub_140846450(&v113, a2[3]);
  if ( v113.m128i_i64[0] == -1 )
  {
    nullsub_1(v56);
    v66 = sub_140001650(54, 1);
    if ( !v66 )
      sub_1416C2D4B(1, 54);
    *(_OWORD *)(v66 + 32) = xmmword_1417972B1;
    *(_OWORD *)(v66 + 16) = xmmword_1417972A1;
    *(__m128i *)v66 = _mm_loadu_si128((const __m128i *)&xmmword_141797291);
    *(_QWORD *)(v66 + 46) = 0x8CA1E890BFE8AA9CuLL;
    a1->m128i_i64[0] = 54;
    a1->m128i_i64[1] = v66;
    a1[1].m128i_i64[0] = 54;
    goto LABEL_47;
  }
  v119 = v113.m128i_i64[1];
  v124 = v113.m128i_i64[0];
  v111 = sub_14033C4C0(v113.m128i_i64[1], v114, 47);
  v112 = v57;
  v117.m128i_i64[0] = (__int64)&v111;
  v117.m128i_i64[1] = (__int64)sub_14041F680;
  sub_14149C0F0(&v113, &unk_1417971DD, &v117);
  v120 = _mm_loadu_si128(&v113);
  v121 = v114;
  sub_14040AB90(&v117, v123, v125);
  v58 = v117.m128i_i64[0];
  if ( v117.m128i_i64[0] == -1 )
  {
    v125 = -1;
    v60 = 6;
    v59 = &unk_141797248;
LABEL_96:
    v111 = (__int64)v59;
    v112 = v60;
    v113.m128i_i64[0] = (__int64)&v120;
    v113.m128i_i64[1] = (__int64)sub_1400015F0;
    v114 = &v111;
    v115 = sub_14041F680;
    sub_14149C0F0(&v76, &unk_14179724E, &v113);
    a1[1].m128i_i64[0] = v77;
    *a1 = _mm_loadu_si128(&v76);
    if ( v125 != -1 && v125 )
      sub_140001660(v117.m128i_i64[1], v125, 1);
    if ( v120.m128i_i64[0] )
      sub_140001660(v120.m128i_i64[1], v120.m128i_i64[0], 1);
    if ( v124 )
      sub_140001660(v119, v124, 1);
    goto LABEL_47;
  }
  v59 = (void *)v117.m128i_i64[1];
  v60 = v118;
  v61 = sub_14033C4C0(v117.m128i_i64[1], v118, 47);
  if ( v62 != v121 || (unsigned int)sub_1416847B0(v61, v120.m128i_i64[1], v62) )
  {
    v125 = v58;
    goto LABEL_96;
  }
  if ( v58 )
    sub_140001660(v59, v58, 1);
  if ( v120.m128i_i64[0] )
    sub_140001660(v120.m128i_i64[1], v120.m128i_i64[0], 1);
  if ( v124 )
    sub_140001660(v119, v124, 1);
  if ( v75 == 1 && v92 != -1 )
  {
    LOBYTE(v63) = 1;
    if ( (unsigned __int8)sub_14040FFF0(v93, v94, v63, &v78) )
    {
      nullsub_1(v68);
      v69 = sub_140001650(88, 1);
      if ( !v69 )
        sub_1416C2D4B(1, 88);
      *(_OWORD *)(v69 + 64) = xmmword_141797230;
      *(_OWORD *)(v69 + 48) = xmmword_141797220;
      *(_OWORD *)(v69 + 32) = xmmword_141797210;
      *(_OWORD *)(v69 + 16) = xmmword_141797200;
      *(__m128i *)v69 = _mm_loadu_si128((const __m128i *)&xmmword_1417971F0);
      *(_QWORD *)(v69 + 80) = 0x676F6C6174616320LL;
      a1->m128i_i64[0] = 88;
      a1->m128i_i64[1] = v69;
      a1[1].m128i_i64[0] = 88;
      goto LABEL_47;
    }
  }
LABEL_118:
  v70 = _mm_load_si128(v95);
  v113.m128i_i64[0] = (__int64)v95;
  v113.m128i_i64[1] = (__int64)v95[1].m128i_i64;
  v114 = (__int64 *)((char *)v95->m128i_i64 + v96 + 1);
  LOWORD(v115) = ~(unsigned __int16)_mm_movemask_epi8(v70);
  v116 = v97;
  v71 = sub_1408309B0(&v113, &v81);
  if ( v71 )
  {
    v111 = v71;
    v120.m128i_i64[0] = (__int64)&v111;
    v120.m128i_i64[1] = (__int64)sub_1406B5450;
    sub_14149C0F0(&v117, &unk_1417957A7, &v120);
    a1[1].m128i_i64[0] = v118;
    *a1 = _mm_loadu_si128(&v117);
  }
  else
  {
    a1->m128i_i64[0] = -1;
  }
  sub_14043ECD0(&v85);
  sub_14067FFB0(&v78);
  sub_140009B20(&v107);
  sub_14067FFB0(&v81);
  sub_140018740(&v72);
LABEL_75:
  if ( v122 )
    sub_140001660(v123, v122, 1);
  return a1;
}