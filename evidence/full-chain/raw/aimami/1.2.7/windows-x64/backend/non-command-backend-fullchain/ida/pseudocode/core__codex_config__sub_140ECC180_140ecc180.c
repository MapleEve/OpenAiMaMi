// win 1.2.7 | module src/core/codex_config.rs | ea 0x140ecc180 | name sub_140ECC180
// win 1.2.7 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140ECC180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i v15; // kr00_16
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // rbx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  const __m128i *v21; // rsi
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm7
  __int64 i; // rdx
  unsigned __int64 v26; // rax
  __m128i v27; // xmm8
  unsigned __int64 v29; // rbx
  __int8 *v30; // r13
  int v31; // eax
  bool v32; // zf
  char *v33; // rsi
  __int64 v34; // r14
  unsigned __int64 *v35; // rdi
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  char v39; // di
  char v40; // bl
  void *v41; // r14
  const __m128i *v42; // r12
  const __m128i *v43; // r13
  __m128i si128; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  char *v49; // r14
  char *v50; // r14
  char *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 (__fastcall *v54)(_QWORD, _QWORD); // rcx
  __int64 v55; // rbx
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // r13
  __int64 v60; // rcx
  __int64 v61; // r14
  unsigned __int64 v62; // rbx
  _QWORD *v63; // rdi
  __int64 v64; // rdx
  _QWORD *v65; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __m128i v71; // xmm0
  __int64 v72; // rax
  __m128i *v73; // rbx
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  unsigned __int64 *v76; // rdi
  _QWORD *v77; // rbx
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm2
  __m128i v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int64 v85; // rsi
  __m128i v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int64 v90; // rdx
  __int64 v91; // rsi
  __m128i v92; // [rsp+30h] [rbp-50h] BYREF
  __int128 v93; // [rsp+40h] [rbp-40h]
  __int128 v94; // [rsp+50h] [rbp-30h]
  __int128 v95; // [rsp+60h] [rbp-20h]
  _QWORD v96[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v97; // [rsp+88h] [rbp+8h] BYREF
  __int64 v98; // [rsp+90h] [rbp+10h]
  unsigned __int64 v99; // [rsp+98h] [rbp+18h]
  unsigned __int64 v100; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 v101; // [rsp+A8h] [rbp+28h]
  __int64 v102; // [rsp+B0h] [rbp+30h]
  __int64 v103; // [rsp+B8h] [rbp+38h]
  __int64 v104; // [rsp+C0h] [rbp+40h]
  _QWORD v105[2]; // [rsp+C8h] [rbp+48h] BYREF
  __m128i v106; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 *v107; // [rsp+E8h] [rbp+68h]
  const __m128i *v108; // [rsp+F0h] [rbp+70h]
  void *v109; // [rsp+F8h] [rbp+78h]
  __int64 (__fastcall *v110)(); // [rsp+100h] [rbp+80h]
  __int64 v111; // [rsp+108h] [rbp+88h]
  char v112[16]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v113; // [rsp+120h] [rbp+A0h]
  __int64 v114; // [rsp+128h] [rbp+A8h]
  __m128i v115; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v116; // [rsp+140h] [rbp+C0h]
  char *v117; // [rsp+148h] [rbp+C8h]
  __m128i v118; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v119; // [rsp+160h] [rbp+E0h]
  __int128 v120; // [rsp+170h] [rbp+F0h]
  __int128 v121; // [rsp+180h] [rbp+100h]
  __m128i v122; // [rsp+190h] [rbp+110h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp+120h]
  __int64 v124; // [rsp+1B0h] [rbp+130h]
  char v125; // [rsp+1BFh] [rbp+13Fh] BYREF
  __int64 v126; // [rsp+1C0h] [rbp+140h]
  __int64 v127; // [rsp+1C8h] [rbp+148h]
  __m128i *v128; // [rsp+1D0h] [rbp+150h]
  __int64 v129; // [rsp+1D8h] [rbp+158h]
  __int64 v130; // [rsp+1E0h] [rbp+160h]
  __int64 v131; // [rsp+1E8h] [rbp+168h]

  v131 = -2;
  v5 = a3;
  v6 = a2;
  v8 = a5;
  v113 = a4;
  v96[0] = a4;
  v96[1] = a5;
  v105[0] = aRemoveMcpServe;
  v105[1] = 17;
  v9 = sub_141682A00(a2, a3);
  if ( v9 )
  {
    v115.m128i_i8[0] = 1;
    v11 = sub_14168A790(&v115, v9, v10);
    if ( v11 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v11;
      return a1;
    }
  }
  v12 = 1;
  v13 = 0;
  v114 = a1;
  v103 = v5;
  v104 = v6;
  while ( 1 )
  {
    if ( (v13 & 1) != 0 || v12 > 3 )
    {
      v115.m128i_i64[0] = (__int64)v105;
      v115.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(a1 + 8, &unk_141A55A3A, &v115);
      *(_QWORD *)a1 = 10;
      return a1;
    }
    v14 = v12 + 1;
    LOBYTE(v13) = v12 == 3;
    if ( v12 == 3 )
      v14 = 3;
    v101 = v14;
    v100 = v12;
    sub_140EC7390(&v115, v6, v5);
    v15 = v115;
    v16 = v116;
    v17 = (__int64 (__fastcall *)(_QWORD, _QWORD))v117;
    if ( v115.m128i_i64[0] != -1 )
    {
      v79 = v118;
      v80 = v119;
      v81 = v120;
      *(_OWORD *)(a1 + 80) = v121;
      *(_OWORD *)(a1 + 64) = v81;
      *(_OWORD *)(a1 + 48) = v80;
      *(__m128i *)(a1 + 32) = v79;
      *(_QWORD *)(a1 + 8) = v15.m128i_i64[1];
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = v17;
      *(_QWORD *)a1 = v15.m128i_i64[0];
      return a1;
    }
    v102 = v13;
    v126 = v115.m128i_i64[1];
    v124 = v116;
    sub_140ED0F60(&v106, v116, v117);
    v18 = v111;
    v127 = (__int64)v17;
    if ( !v111 )
    {
LABEL_20:
      v122.m128i_i64[0] = (__int64)v96;
      v122.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(&v115.m128i_u64[1], &unk_141A57023, &v122);
      v128 = (__m128i *)v115.m128i_i64[1];
      v130 = v116;
      v33 = v117;
      v92 = _mm_loadu_si128(&v118);
      v93 = v119;
      v94 = v120;
      v95 = v121;
      v34 = v106.m128i_i64[1];
      v35 = v107;
      if ( v107 )
      {
        v36 = (_QWORD *)(v106.m128i_i64[1] + 8);
        do
        {
          v37 = *(v36 - 1);
          if ( v37 )
            sub_140001660(*v36, v37, 1);
          v36 += 3;
          v35 = (unsigned __int64 *)((char *)v35 - 1);
        }
        while ( v35 );
      }
      _RAX = v106.m128i_i64[0];
      v129 = 8;
      v39 = 0;
      v40 = 0;
      if ( v106.m128i_i64[0] )
        goto LABEL_26;
      goto LABEL_27;
    }
    v19 = sub_140D2CC10(v112, v113, v8);
    _RCX = v19 >> 57;
    v21 = v108;
    v22 = (unsigned __int64)v109;
    v23 = _mm_cvtsi32_si128(v19 >> 57);
    v24 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v23, v23), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v26 = v22 & v19;
      v27 = _mm_loadu_si128((const __m128i *)((char *)v21 + v26));
      _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v24));
      if ( _R14D )
        break;
LABEL_18:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_20;
      v19 = i + v26 + 16;
    }
    v130 = i;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r14d }
      v29 = v26;
      _RCX = -(__int64)(v22 & (v26 + _RCX));
      if ( v8 == *((_QWORD *)&v21[-1] + 5 * _RCX - 1) )
      {
        v30 = &v21->m128i_i8[40 * _RCX];
        if ( !(unsigned int)sub_1418F4B70(v113, *((_QWORD *)v30 - 4)) )
          break;
      }
      v31 = _R14D - 1;
      LOWORD(v31) = _R14D & (_R14D - 1);
      v32 = (_WORD)v31 == 0;
      _R14D = v31;
      v26 = v29;
      i = v130;
      if ( v32 )
        goto LABEL_18;
    }
    sub_1403F1200(&v97, &v106);
    v56 = *((_QWORD *)v30 - 1);
    v57 = v99;
    v58 = v99 - v56;
    if ( v99 < v56 )
      sub_1419392D0(0, *((_QWORD *)v30 - 1), v99, &off_141A59A70);
    v59 = *((_QWORD *)v30 - 2);
    if ( v59 > v56 )
      sub_1419392D0(v59, v56, v99, &off_141A59A88);
    v60 = 24 * v59;
    if ( v56 == v59 )
    {
      if ( v99 == v59 )
        v58 = 0;
      v59 += v58;
      v8 = a5;
      v61 = v98;
      if ( v59 < 2 )
        goto LABEL_72;
    }
    else
    {
      v128 = (__m128i *)(v98 + v60);
      v129 = v98 + 24 * v56;
      v62 = (24 * v56 - 24 * v59) / 0x18;
      v130 = v98;
      v63 = (_QWORD *)(v98 + v60 + 8);
      do
      {
        v64 = *(v63 - 1);
        if ( v64 )
          sub_140001660(*v63, v64, 1);
        v63 += 3;
        --v62;
      }
      while ( v62 );
      if ( v57 != v56 )
      {
        sub_1418F44E0(v128, (const __m128i *)v129, 24 * v58);
        v59 += v58;
      }
      v8 = a5;
      v61 = v130;
      if ( v59 < 2 )
        goto LABEL_72;
    }
    v65 = (_QWORD *)(v61 + 24 * v59 - 8);
    while ( 1 )
    {
      v67 = *(v65 - 1);
      sub_140E91160(v67, *v65);
      if ( v68 )
        break;
      sub_140E91160(*(v65 - 4), *(v65 - 3));
      if ( v69 )
        break;
      v70 = *(v65 - 2);
      if ( (unsigned __int64)(v70 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v67, v70, 1);
      v65 -= 3;
      if ( v59-- <= 2 )
      {
        v59 = 1;
        break;
      }
    }
LABEL_72:
    v99 = v59;
    sub_140D1EE10((unsigned int)&v115, v61, v59, (unsigned int)asc_141A55B10, 1);
    v33 = (char *)v116;
    v123 = v116;
    v71 = _mm_loadu_si128(&v115);
    v122 = v71;
    v72 = v71.m128i_i64[1];
    if ( !v116 )
    {
      v130 = v71.m128i_i64[1];
      v33 = nullptr;
      v73 = (__m128i *)v122.m128i_i64[0];
      if ( !v59 )
        goto LABEL_85;
      goto LABEL_81;
    }
    if ( *(_BYTE *)(v71.m128i_i64[1] + v116 - 1) == 10 )
    {
      v130 = v71.m128i_i64[1];
      v73 = (__m128i *)v122.m128i_i64[0];
      if ( !v59 )
        goto LABEL_85;
LABEL_81:
      v74 = (_QWORD *)(v61 + 8);
      do
      {
        v75 = *(v74 - 1);
        if ( v75 )
          sub_140001660(*v74, v75, 1);
        v74 += 3;
        --v59;
      }
      while ( v59 );
      goto LABEL_85;
    }
    if ( v122.m128i_i64[0] == v116 )
    {
      sub_14190D590((unsigned int)&v122, v116, 1, 1, 1);
      v72 = v122.m128i_i64[1];
    }
    v130 = v72;
    (v33++)[v72] = 10;
    v73 = (__m128i *)v122.m128i_i64[0];
    if ( v59 )
      goto LABEL_81;
LABEL_85:
    v128 = v73;
    if ( v97 )
      sub_140001660(v61, 24 * v97, 8);
    v34 = v106.m128i_i64[1];
    v76 = v107;
    if ( v107 )
    {
      v77 = (_QWORD *)(v106.m128i_i64[1] + 8);
      do
      {
        v78 = *(v77 - 1);
        if ( v78 )
          sub_140001660(*v77, v78, 1);
        v77 += 3;
        v76 = (unsigned __int64 *)((char *)v76 - 1);
      }
      while ( v76 );
    }
    _RAX = v106.m128i_i64[0];
    v129 = -1;
    v39 = 1;
    v40 = 1;
    if ( v106.m128i_i64[0] )
    {
LABEL_26:
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v34, 24 * _RAX, 8) >> 32;
      v40 = v39;
    }
LABEL_27:
    v41 = v109;
    if ( v109 )
    {
      if ( v18 )
      {
        v42 = v108;
        v43 = v108 + 1;
        _EDI = ~_mm_movemask_epi8(_mm_load_si128(v108));
        do
        {
          if ( !(_WORD)_EDI )
          {
            do
            {
              si128 = _mm_load_si128(v43);
              v42 -= 40;
              ++v43;
              _EDI = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_EDI );
          }
          __asm { tzcnt   eax, edi }
          v46 = -5 * _RAX;
          v47 = *((_QWORD *)&v42[-2] + v46 - 1);
          if ( v47 )
            sub_140001660(v42[-2].m128i_i64[v46], v47, 1);
          --v18;
          _RAX = _EDI & (unsigned int)(_EDI - 1);
          _EDI &= _EDI - 1;
        }
        while ( v18 );
      }
      v48 = (40LL * (_QWORD)v41 + 55) & 0xFFFFFFFFFFFFFFF0uLL;
      v49 = (char *)v41 + v48;
      v32 = v49 + 17 == nullptr;
      v50 = v49 + 17;
      v8 = a5;
      if ( !v32 )
        sub_140001660((char *)v108 - v48, v50, 16);
    }
    if ( !v40 )
    {
      v82 = v92;
      v83 = v93;
      v84 = v94;
      a1 = v114;
      *(_OWORD *)(v114 + 80) = v95;
      *(_OWORD *)(a1 + 64) = v84;
      *(_OWORD *)(a1 + 48) = v83;
      *(__m128i *)(a1 + 32) = v82;
      *(_QWORD *)(a1 + 16) = v130;
      *(_QWORD *)(a1 + 24) = v33;
      *(_QWORD *)a1 = v129;
      *(_QWORD *)(a1 + 8) = v128;
      v85 = v126;
      goto LABEL_102;
    }
    v51 = (char *)v127;
    a1 = v114;
    if ( v33 == (char *)v127 && !(unsigned int)sub_1418F4B70(v130, v124) )
    {
      *(_QWORD *)a1 = -1;
      goto LABEL_99;
    }
    v6 = v104;
    v5 = v103;
    sub_140EC7390(&v115, v104, v103);
    v53 = v115.m128i_i64[1];
    v52 = v115.m128i_i64[0];
    v129 = v116;
    v54 = (__int64 (__fastcall *)(_QWORD, _QWORD))v117;
    if ( v115.m128i_i64[0] != -1 )
    {
      v86 = v118;
      v87 = v119;
      v88 = v120;
      *(_OWORD *)(a1 + 80) = v121;
      *(_OWORD *)(a1 + 64) = v88;
      *(_OWORD *)(a1 + 48) = v87;
      *(__m128i *)(a1 + 32) = v86;
      *(_QWORD *)(a1 + 8) = v53;
      *(_QWORD *)(a1 + 16) = v129;
      *(_QWORD *)(a1 + 24) = v54;
      *(_QWORD *)a1 = v52;
LABEL_99:
      v85 = v126;
      goto LABEL_100;
    }
    v32 = v117 == v51;
    v55 = v126;
    if ( v32 && !(unsigned int)sub_1418F4B70(v129, v124) )
      break;
    v13 = v102;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v127 = v53;
      v106.m128i_i64[0] = (__int64)v105;
      v106.m128i_i64[1] = (__int64)sub_140186EE0;
      v107 = &v100;
      v108 = (const __m128i *)sub_1416BCB10;
      v109 = &unk_141A55A88;
      v110 = sub_1416BCB10;
      *(_QWORD *)&v119 = 2;
      *((_QWORD *)&v119 + 1) = aCodexmateLibCo_38;
      *(_QWORD *)&v120 = 33;
      *(_QWORD *)&v121 = &unk_141A55A90;
      *((_QWORD *)&v121 + 1) = &v106;
      v115.m128i_i64[0] = 0;
      v115.m128i_i64[1] = (__int64)aCodexmateLibCo_38;
      v116 = 33;
      v117 = nullptr;
      v118.m128i_i64[0] = (__int64)aSrcCoreCodexCo;
      v118.m128i_i64[1] = 24;
      *((_QWORD *)&v120 + 1) = 0x2600000001LL;
      sub_1414D53A0(&v125, &v115);
      v55 = v126;
      v53 = v127;
    }
    if ( v53 )
      sub_140001660(v129, v53, 1);
    if ( v128 )
      sub_140001660(v130, v128, 1);
    if ( v55 )
      sub_140001660(v124, v55, 1);
    v12 = v101;
  }
  v127 = v53;
  if ( (sub_140222E10(v6, v5, v130, v33) & 1) != 0 )
  {
    v122.m128i_i64[0] = v90;
    v115.m128i_i64[0] = (__int64)v105;
    v115.m128i_i64[1] = (__int64)sub_140186EE0;
    v116 = (__int64)&v122;
    v117 = (char *)sub_1416BB0B0;
    sub_1416ABFD0(&v106, &unk_141A56E20, &v115);
    v115 = _mm_loadu_si128(&v106);
    v116 = (__int64)v107;
    if ( (v122.m128i_i8[0] & 3u) - 2 >= 2 && (v122.m128i_i8[0] & 3) != 0 )
    {
      v92.m128i_i64[1] = v122.m128i_i64[0] - 1;
      sub_1416BCB00(&v92.m128i_u64[1]);
    }
    *(_QWORD *)(a1 + 24) = v116;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v115);
    v91 = 10;
  }
  else
  {
    v91 = -1;
    sub_1401BD710(v90);
  }
  *(_QWORD *)a1 = v91;
  v85 = v126;
  if ( v127 )
    sub_140001660(v129, v127, 1);
LABEL_100:
  if ( v128 )
    sub_140001660(v130, v128, 1);
LABEL_102:
  if ( v85 )
    sub_140001660(v124, v85, 1);
  return a1;
}
