// module: codexmate_lib/core/mcp
// addr: 0x1409e86f0
// name: upsert_mcp_server_0
// win 1.2.3 | module src/core/mcp.rs | attributed via pre-existing IDB cross-platform string-signature comment (name<->function match to mac codexmate_lib::core::mcp::upsert_mcp_server), found live via find_regex('mcp_servers')+xrefs_to during 2026-07-24/25 windows-1.2.3-mcp distillation session (NOT part of the original 15-address win-app-inventory-gapfill-leaf census; captured as a 16th file this session after confirming it was absent from raw/ and INDEX.jsonl)
__int64 __fastcall upsert_mcp_server_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // rax
  const __m128i *v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm0
  __m128i v11; // xmm6
  __int64 v13; // r14
  __int64 v14; // r15
  __m128i *i; // rdx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  const __m128i *v27; // rbx
  const __m128i *v28; // r14
  __m128i si128; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r12
  __m128i *v37; // rcx
  __int64 v38; // rax
  __m128i *v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // edi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  char *v60; // rsi
  __int64 v61; // rdi
  _QWORD *v62; // rbx
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  __int8 *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // rdi
  unsigned __int64 v82; // rsi
  __m128i *v83; // r14
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rsi
  unsigned __int64 v87; // rdi
  __m128i v89; // xmm0
  __m128i v90; // xmm7
  __int64 j; // rcx
  unsigned __int64 v92; // rdi
  __m128i v93; // xmm8
  __int64 v95; // rbx
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // r15
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rcx
  const __m128i *v110; // rbx
  __m128i *v111; // rsi
  unsigned __int64 v112; // rdi
  __int64 v113; // r12
  __m128i *v114; // r15
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r13
  unsigned __int64 v118; // rax
  __m128i v120; // xmm0
  __m128i v121; // xmm7
  __int64 k; // rdx
  unsigned __int64 v123; // rax
  __m128i v124; // xmm8
  __int64 v126; // rdi
  const __m128i *v127; // rsi
  const __m128i *v128; // rbx
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // rsi
  char *v133; // rdi
  __int64 v134; // rbx
  __m128i **v135; // rsi
  __int64 v136; // rax
  __int64 v138; // rcx
  __int64 v139; // rsi
  __int64 v140; // r14
  const __m128i *v141; // r15
  const __m128i *v142; // r12
  __m128i v144; // xmm0
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rsi
  _QWORD *v149; // rsi
  __int64 v150; // rdx
  __m128i v152; // [rsp+28h] [rbp-58h] BYREF
  __int64 v153; // [rsp+38h] [rbp-48h]
  __m128i v154; // [rsp+40h] [rbp-40h] BYREF
  __int64 v155; // [rsp+50h] [rbp-30h]
  __int128 v156; // [rsp+58h] [rbp-28h] BYREF
  __int64 v157; // [rsp+68h] [rbp-18h]
  __m128i v158; // [rsp+70h] [rbp-10h] BYREF
  __int64 v159; // [rsp+80h] [rbp+0h]
  __int128 v160; // [rsp+88h] [rbp+8h] BYREF
  __int64 v161; // [rsp+98h] [rbp+18h]
  __m128i v162; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v163; // [rsp+B0h] [rbp+30h]
  __m128i v164; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v165; // [rsp+C8h] [rbp+48h]
  __m128i v166; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v167; // [rsp+E0h] [rbp+60h]
  __int64 v168; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v169; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v170; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v171; // [rsp+100h] [rbp+80h]
  _QWORD v172[3]; // [rsp+108h] [rbp+88h] BYREF
  __m128i v173; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v174; // [rsp+130h] [rbp+B0h]
  const __m128i *v175; // [rsp+138h] [rbp+B8h]
  __int64 v176; // [rsp+140h] [rbp+C0h]
  __int64 v177; // [rsp+150h] [rbp+D0h]
  char v178[16]; // [rsp+158h] [rbp+D8h] BYREF
  __m128i v179; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v180; // [rsp+178h] [rbp+F8h]
  unsigned __int64 v181; // [rsp+180h] [rbp+100h]
  __int64 v182; // [rsp+188h] [rbp+108h]
  __int64 v183; // [rsp+190h] [rbp+110h]
  __int64 v184; // [rsp+198h] [rbp+118h]
  __m128i *v185; // [rsp+1A0h] [rbp+120h]
  __int64 v186; // [rsp+1A8h] [rbp+128h]
  __m128i v187; // [rsp+1B0h] [rbp+130h] BYREF
  unsigned __int64 v188; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v189; // [rsp+1C8h] [rbp+148h]
  __m128i *v190; // [rsp+1D0h] [rbp+150h] BYREF
  char *v191; // [rsp+1D8h] [rbp+158h]
  __int64 v192; // [rsp+1E0h] [rbp+160h]
  __int64 v193; // [rsp+1E8h] [rbp+168h]
  __m128i v194; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i **v195; // [rsp+200h] [rbp+180h]
  __int64 (__fastcall *v196)(_QWORD, _QWORD); // [rsp+208h] [rbp+188h]
  __int64 v197; // [rsp+210h] [rbp+190h]
  __m128i v198; // [rsp+218h] [rbp+198h] BYREF
  __int64 v199; // [rsp+228h] [rbp+1A8h]
  char v200; // [rsp+233h] [rbp+1B3h]
  char v201; // [rsp+234h] [rbp+1B4h]
  char v202; // [rsp+235h] [rbp+1B5h]
  char v203; // [rsp+236h] [rbp+1B6h] BYREF
  char v204; // [rsp+237h] [rbp+1B7h]
  __int64 v205; // [rsp+238h] [rbp+1B8h]

  v205 = -2; /*0x1409e8724*/
  v5 = a3; /*0x1409e8732*/
  v6 = a2; /*0x1409e8735*/
  v183 = a1; /*0x1409e8738*/
  sub_1409E5800((__int64)&v173, a2, a3); /*0x1409e8746*/
  v186 = a4; /*0x1409e8753*/
  if ( v177 ) /*0x1409e875a*/
  {
    v204 = 1; /*0x1409e8767*/
    v7 = sub_140378810(v178, a4); /*0x1409e8771*/
    v8 = v175; /*0x1409e877e*/
    v9 = v176; /*0x1409e8785*/
    v10 = _mm_cvtsi32_si128(v7 >> 57); /*0x1409e878c*/
    v11 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v10, v10), 0), 68); /*0x1409e8799*/
    _RCX = a4; /*0x1409e879e*/
    v13 = *(_QWORD *)(a4 + 8); /*0x1409e87a1*/
    v14 = *(_QWORD *)(_RCX + 16); /*0x1409e87a5*/
    for ( i = nullptr; ; ++i ) /*0x1409e87a9*/
    {
      v16 = v9 & v7; /*0x1409e87af*/
      v17 = _mm_loadu_si128((const __m128i *)((char *)v8 + v16)); /*0x1409e87b2*/
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v11)); /*0x1409e87c1*/
      if ( _R13D ) /*0x1409e87c9*/
        break; /*0x1409e87c9*/
LABEL_8:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL)); /*0x1409e8830*/
      if ( (_DWORD)_RCX ) /*0x1409e883c*/
        goto LABEL_26; /*0x1409e883c*/
      v7 = (unsigned __int64)i[1].m128i_u64 + v16; /*0x1409e8845*/
    }
    v189 = v16; /*0x1409e87cb*/
    v185 = i; /*0x1409e87d2*/
    while ( 1 ) /*0x1409e87d9*/
    {
      __asm { tzcnt ecx, r13d } /*0x1409e87d9*/
      _RCX = -(__int64)(v9 & (v16 + _RCX)); /*0x1409e87e4*/
      if ( v14 == *((_QWORD *)&v8[-1] + 5 * _RCX - 1) /*0x1409e8800*/
        && !(unsigned int)sub_1416847B0(v13, v8[-2].m128i_i64[5 * _RCX], v14) )
      {
        break; /*0x1409e8800*/
      }
      v19 = _R13D - 1; /*0x1409e8809*/
      LOWORD(v19) = _R13D & (_R13D - 1); /*0x1409e880d*/
      v20 = (_WORD)v19 == 0; /*0x1409e880d*/
      _R13D = v19; /*0x1409e8811*/
      v16 = v189; /*0x1409e8814*/
      i = v185; /*0x1409e881b*/
      if ( v20 ) /*0x1409e8822*/
        goto LABEL_8; /*0x1409e8822*/
    }
    v204 = 1; /*0x1409e8852*/
    sub_1409E7C60(v183, v6, v5, v13, v14); /*0x1409e886e*/
    v21 = v174; /*0x1409e8874*/
    if ( v174 ) /*0x1409e887e*/
    {
      v22 = (_QWORD *)(v173.m128i_i64[1] + 8); /*0x1409e8887*/
      do /*0x1409e8897*/
      {
        v23 = *(v22 - 1); /*0x1409e8899*/
        if ( v23 ) /*0x1409e88a0*/
          sub_140001660(*v22, v23, 1); /*0x1409e88ab*/
        v22 += 3; /*0x1409e8890*/
        --v21; /*0x1409e8894*/
      }
      while ( v21 ); /*0x1409e8897*/
    }
    HIDWORD(_RAX) = v173.m128i_i32[1]; /*0x1409e88b2*/
    if ( v173.m128i_i64[0] ) /*0x1409e88bc*/
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v173.m128i_i64[1], 24 * v173.m128i_i64[0], 8) >> 32; /*0x1409e88d3*/
    v25 = v176; /*0x1409e88d8*/
    if ( v176 ) /*0x1409e88e2*/
    {
      v26 = v177; /*0x1409e88e8*/
      if ( v177 ) /*0x1409e88f2*/
      {
        v27 = v175; /*0x1409e88f8*/
        v28 = v175 + 1; /*0x1409e8903*/
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(v175)); /*0x1409e890c*/
        do /*0x1409e8930*/
        {
          if ( !(_WORD)_R15D ) /*0x1409e893a*/
          {
            do /*0x1409e895c*/
            {
              si128 = _mm_load_si128(v28); /*0x1409e8940*/
              v27 -= 40; /*0x1409e8945*/
              ++v28; /*0x1409e894c*/
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x1409e8955*/
            }
            while ( !_R15D ); /*0x1409e895c*/
          }
          __asm { tzcnt eax, r15d } /*0x1409e895e*/
          v31 = -5 * _RAX; /*0x1409e8966*/
          v32 = *((_QWORD *)&v27[-2] + v31 - 1); /*0x1409e896a*/
          if ( v32 ) /*0x1409e8972*/
            sub_140001660(v27[-2].m128i_i64[v31], v32, 1); /*0x1409e8982*/
          --v26; /*0x1409e8920*/
          _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x1409e8927*/
          _R15D &= _R15D - 1; /*0x1409e892a*/
        }
        while ( v26 ); /*0x1409e8930*/
      }
      v64 = (40 * v25 + 55) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1409e8e3e*/
      v65 = v64 + v25 + 17; /*0x1409e8e45*/
      if ( v65 ) /*0x1409e8e49*/
      {
        v66 = &v175->m128i_i8[-v64]; /*0x1409e8e56*/
        v67 = 16; /*0x1409e8e59*/
        v68 = v65; /*0x1409e8e5f*/
LABEL_139:
        sub_140001660(v66, v68, v67); /*0x1409e984f*/
      }
    }
  }
  else
  {
    v33 = a4; /*0x1409e8989*/
    v13 = *(_QWORD *)(a4 + 8); /*0x1409e898c*/
    v14 = *(_QWORD *)(v33 + 16); /*0x1409e8990*/
LABEL_26:
    v155 = v174; /*0x1409e8994*/
    v154 = _mm_loadu_si128(&v173); /*0x1409e89a7*/
    v200 = 1; /*0x1409e89ac*/
    sub_1409E1380(v172, v13, v14); /*0x1409e89c3*/
    nullsub_1(v34); /*0x1409e89c9*/
    v35 = sub_140001650(24, 8); /*0x1409e89d8*/
    v36 = v186; /*0x1409e89e0*/
    if ( !v35 ) /*0x1409e89e7*/
      sub_1416C2D31(8, 24); /*0x1409e988f*/
    v189 = v35; /*0x1409e89ed*/
    v194.m128i_i64[0] = (__int64)v172; /*0x1409e89f4*/
    v194.m128i_i64[1] = (__int64)sub_1400015F0; /*0x1409e8a02*/
    sub_14149C0F0(&v152, &unk_1417A74F0, &v194); /*0x1409e8a1b*/
    v37 = (__m128i *)v189; /*0x1409e8a25*/
    *(_QWORD *)(v189 + 16) = v153; /*0x1409e8a2c*/
    *v37 = _mm_loadu_si128(&v152); /*0x1409e8a35*/
    v198.m128i_i64[0] = 1; /*0x1409e8a39*/
    v198.m128i_i64[1] = (__int64)v37; /*0x1409e8a44*/
    v38 = *(unsigned __int8 *)(v36 + 216); /*0x1409e8a4b*/
    v39 = (__m128i *)&unk_1417A47CA; /*0x1409e8a5b*/
    if ( *(_BYTE *)(v36 + 216) ) /*0x1409e8a4b*/
      v39 = (__m128i *)&unk_1417A47CF; /*0x1409e8a65*/
    v199 = 1; /*0x1409e8a69*/
    v190 = v39; /*0x1409e8a78*/
    v191 = (char *)(v38 ^ 5); /*0x1409e8a7f*/
    v194.m128i_i64[0] = (__int64)&v190; /*0x1409e8a8d*/
    v194.m128i_i64[1] = (__int64)sub_14041F680; /*0x1409e8a9b*/
    sub_14149C0F0(&v166, &unk_1417A7502, &v194); /*0x1409e8ab4*/
    v40 = v199; /*0x1409e8aba*/
    if ( v199 == v198.m128i_i64[0] ) /*0x1409e8ac8*/
      sub_141689AB0(&v198); /*0x1409e8ad1*/
    v41 = v198.m128i_i64[1]; /*0x1409e8ad7*/
    v42 = 3 * v40; /*0x1409e8ade*/
    *(_QWORD *)(v198.m128i_i64[1] + 8 * v42 + 16) = v167; /*0x1409e8ae6*/
    *(__m128i *)(v41 + 8 * v42) = _mm_loadu_si128(&v166); /*0x1409e8af0*/
    v199 = v40 + 1; /*0x1409e8af8*/
    v43 = *(unsigned __int8 *)(v36 + 217); /*0x1409e8aff*/
    sub_1409E1380( /*0x1409e8b2f*/
      &v194,
      *(_UNKNOWN **)((char *)&off_1417A9EF8 + (unsigned int)(8 * v43)),
      *(_QWORD *)((char *)&unk_1417A9ED8 + (unsigned int)(8 * v43)));
    v190 = &v194; /*0x1409e8b35*/
    v191 = (char *)sub_1400015F0; /*0x1409e8b43*/
    sub_14149C0F0(&v164, &unk_1417A7517, &v190); /*0x1409e8b5c*/
    if ( v194.m128i_i64[0] ) /*0x1409e8b6c*/
      sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1); /*0x1409e8b7b*/
    v44 = v199; /*0x1409e8b80*/
    if ( v199 == v198.m128i_i64[0] ) /*0x1409e8b8e*/
      sub_141689AB0(&v198); /*0x1409e8b97*/
    v45 = v198.m128i_i64[1]; /*0x1409e8b9d*/
    v46 = 3 * v44; /*0x1409e8ba4*/
    *(_QWORD *)(v198.m128i_i64[1] + 8 * v46 + 16) = v165; /*0x1409e8bac*/
    *(__m128i *)(v45 + 8 * v46) = _mm_loadu_si128(&v164); /*0x1409e8bb6*/
    v199 = v44 + 1; /*0x1409e8bbe*/
    if ( (unsigned __int8)(v43 - 1) >= 2u ) /*0x1409e8bcc*/
    {
      if ( *(_QWORD *)(v36 + 72) != -1 ) /*0x1409e8cb7*/
      {
        v53 = *(_QWORD *)(v36 + 80); /*0x1409e8cbd*/
        v54 = *(_QWORD *)(v36 + 88); /*0x1409e8cc2*/
        sub_14033BC10(v53, v54); /*0x1409e8ccd*/
        if ( v55 ) /*0x1409e8cd6*/
        {
          sub_1409E1380(&v194, v53, v54); /*0x1409e8cec*/
          v190 = &v194; /*0x1409e8cf2*/
          v191 = (char *)sub_1400015F0; /*0x1409e8d00*/
          sub_14149C0F0(&v162, &unk_1417A752F, &v190); /*0x1409e8d19*/
          if ( v194.m128i_i64[0] ) /*0x1409e8d29*/
            sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1); /*0x1409e8d38*/
          v56 = v199; /*0x1409e8d3d*/
          if ( v199 == v198.m128i_i64[0] ) /*0x1409e8d4b*/
            sub_141689AB0(&v198); /*0x1409e8d54*/
          v57 = v198.m128i_i64[1]; /*0x1409e8d5a*/
          v58 = 3 * v56; /*0x1409e8d61*/
          *(_QWORD *)(v198.m128i_i64[1] + 8 * v58 + 16) = v163; /*0x1409e8d69*/
          *(__m128i *)(v57 + 8 * v58) = _mm_loadu_si128(&v162); /*0x1409e8d73*/
          v199 = v56 + 1; /*0x1409e8d7b*/
        }
      }
      v59 = *(_QWORD *)(v36 + 64); /*0x1409e8d82*/
      if ( v59 ) /*0x1409e8d8a*/
      {
        sub_1403284C0(&v190, *(_QWORD *)(v36 + 56), *(_QWORD *)(v36 + 56) + 24 * v59); /*0x1409e8da4*/
        v60 = v191; /*0x1409e8daa*/
        v61 = v192; /*0x1409e8db1*/
        sub_140440300((unsigned int)&v194, (_DWORD)v191, v192, (unsigned int)", ", 2); /*0x1409e8dd5*/
        v188 = (unsigned __int64)v195; /*0x1409e8de2*/
        v187 = _mm_loadu_si128(&v194); /*0x1409e8df1*/
        if ( v61 ) /*0x1409e8dfc*/
        {
          v62 = v60 + 8; /*0x1409e8dfe*/
          do /*0x1409e8e17*/
          {
            v63 = *(v62 - 1); /*0x1409e8e19*/
            if ( v63 ) /*0x1409e8e20*/
              sub_140001660(*v62, v63, 1); /*0x1409e8e2b*/
            v62 += 3; /*0x1409e8e10*/
            --v61; /*0x1409e8e14*/
          }
          while ( v61 ); /*0x1409e8e17*/
        }
        if ( v190 ) /*0x1409e8e71*/
          sub_140001660(v60, 24LL * (_QWORD)v190, 8); /*0x1409e8e84*/
        v194.m128i_i64[0] = (__int64)&v187; /*0x1409e8e90*/
        v194.m128i_i64[1] = (__int64)sub_1400015F0; /*0x1409e8e9e*/
        sub_14149C0F0(&v179, &unk_1417A753C, &v194); /*0x1409e8eba*/
        v69 = v199; /*0x1409e8ec0*/
        if ( v199 == v198.m128i_i64[0] ) /*0x1409e8ece*/
          sub_141689AB0(&v198); /*0x1409e8ed7*/
        v70 = v198.m128i_i64[1]; /*0x1409e8edd*/
        v71 = 3 * v69; /*0x1409e8ee4*/
        *(_QWORD *)(v198.m128i_i64[1] + 8 * v71 + 16) = v180; /*0x1409e8eef*/
        *(__m128i *)(v70 + 8 * v71) = _mm_loadu_si128(&v179); /*0x1409e8efc*/
        v199 = v69 + 1; /*0x1409e8f04*/
        if ( v187.m128i_i64[0] ) /*0x1409e8f15*/
          sub_140001660(v187.m128i_i64[1], v187.m128i_i64[0], 1); /*0x1409e8f24*/
      }
    }
    else if ( *(_QWORD *)(v36 + 96) != -1 ) /*0x1409e8bd8*/
    {
      v47 = *(_QWORD *)(v36 + 104); /*0x1409e8bde*/
      v48 = *(_QWORD *)(v36 + 112); /*0x1409e8be3*/
      sub_14033BC10(v47, v48); /*0x1409e8bee*/
      if ( v49 ) /*0x1409e8bf7*/
      {
        sub_1409E1380(&v194, v47, v48); /*0x1409e8c0d*/
        v190 = &v194; /*0x1409e8c13*/
        v191 = (char *)sub_1400015F0; /*0x1409e8c21*/
        sub_14149C0F0(&v179, &unk_1417A7526, &v190); /*0x1409e8c3d*/
        if ( v194.m128i_i64[0] ) /*0x1409e8c4d*/
          sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1); /*0x1409e8c5c*/
        v50 = v199; /*0x1409e8c61*/
        if ( v199 == v198.m128i_i64[0] ) /*0x1409e8c6f*/
          sub_141689AB0(&v198); /*0x1409e8c78*/
        v51 = v198.m128i_i64[1]; /*0x1409e8c7e*/
        v52 = 3 * v50; /*0x1409e8c85*/
        *(_QWORD *)(v198.m128i_i64[1] + 8 * v52 + 16) = v180; /*0x1409e8c90*/
        *(__m128i *)(v51 + 8 * v52) = _mm_loadu_si128(&v179); /*0x1409e8c9d*/
        v199 = v50 + 1; /*0x1409e8ca5*/
      }
    }
    v72 = *(_QWORD *)(v36 + 192); /*0x1409e8f29*/
    if ( v72 ) /*0x1409e8f34*/
    {
      v73 = v199; /*0x1409e8f3a*/
      if ( v199 == v198.m128i_i64[0] ) /*0x1409e8f48*/
        sub_141689AB0(&v198); /*0x1409e8f51*/
      v74 = v198.m128i_i64[1]; /*0x1409e8f57*/
      v75 = 3 * v73; /*0x1409e8f5e*/
      *(_QWORD *)(v198.m128i_i64[1] + 8 * v75) = 0; /*0x1409e8f62*/
      *(_QWORD *)(v74 + 8 * v75 + 8) = 1; /*0x1409e8f6a*/
      *(_QWORD *)(v74 + 8 * v75 + 16) = 0; /*0x1409e8f73*/
      v199 = v73 + 1; /*0x1409e8f7f*/
      v194.m128i_i64[0] = (__int64)v172; /*0x1409e8f8d*/
      v194.m128i_i64[1] = (__int64)sub_1400015F0; /*0x1409e8f9b*/
      sub_14149C0F0(&v160, &unk_1417A7549, &v194); /*0x1409e8fb4*/
      v76 = v199; /*0x1409e8fba*/
      if ( v199 == v198.m128i_i64[0] ) /*0x1409e8fc8*/
        sub_141689AB0(&v198); /*0x1409e8fd1*/
      v77 = v198.m128i_i64[1]; /*0x1409e8fd7*/
      v78 = 3 * v76; /*0x1409e8fde*/
      *(_QWORD *)(v198.m128i_i64[1] + 8 * v78 + 16) = v161; /*0x1409e8fe6*/
      *(_OWORD *)(v77 + 8 * v78) = v160; /*0x1409e8fef*/
      v199 = v76 + 1; /*0x1409e8ff6*/
      v80 = *(_QWORD *)(v36 + 176); /*0x1409e9005*/
      LODWORD(v78) = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)(v36 + 168))); /*0x1409e901d*/
      v194.m128i_i64[0] = *(_QWORD *)(v36 + 168); /*0x1409e9023*/
      v79 = v194.m128i_i64[0]; /*0x1409e8ffd*/
      v194.m128i_i64[1] = v194.m128i_i64[0] + 16; /*0x1409e902a*/
      v195 = (__m128i **)(v194.m128i_i64[0] + v80 + 1); /*0x1409e9031*/
      LOWORD(v196) = v78; /*0x1409e9038*/
      v197 = v72; /*0x1409e903f*/
      sub_14031A4A0(&v187, &v194); /*0x1409e9054*/
      v81 = v187.m128i_i64[1]; /*0x1409e905a*/
      v82 = v188; /*0x1409e9061*/
      v193 = v187.m128i_i64[1]; /*0x1409e906c*/
      if ( v188 >= 2 ) /*0x1409e9073*/
      {
        v202 = 1; /*0x1409e98a1*/
        v81 = v193; /*0x1409e98b5*/
        if ( v188 >= 0x15 ) /*0x1409e989b*/
          sub_140B5A4E0(v193, v188, &v203); /*0x1409e994f*/
        else
          sub_1405580D0(v193, v188, 1, &v203); /*0x1409e98c2*/
      }
      v184 = v187.m128i_i64[0]; /*0x1409e9080*/
      v185 = (__m128i *)(v81 + 8 * v82); /*0x1409e908b*/
      v181 = v36 + 200; /*0x1409e909a*/
      v83 = (__m128i *)v81; /*0x1409e90a5*/
      while ( v83 != v185 ) /*0x1409e90e6*/
      {
        v169 = v83->m128i_i64[0]; /*0x1409e90ef*/
        v86 = v169; /*0x1409e90ec*/
        v87 = sub_140378810(v181, v169); /*0x1409e9103*/
        v83 = (__m128i *)((char *)v83 + 8); /*0x1409e9106*/
        _RAX = v87 >> 57; /*0x1409e910a*/
        v89 = _mm_cvtsi32_si128(v87 >> 57); /*0x1409e910e*/
        v90 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v89, v89), 0), 68); /*0x1409e911b*/
        for ( j = 0; ; j += 16 ) /*0x1409e9120*/
        {
          v92 = v80 & v87; /*0x1409e9122*/
          v93 = _mm_loadu_si128((const __m128i *)(v79 + v92)); /*0x1409e9125*/
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v93, v90)); /*0x1409e9134*/
          if ( _R12D ) /*0x1409e913c*/
            break; /*0x1409e913c*/
LABEL_79:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v93, (__m128i)-1LL)); /*0x1409e91b0*/
          if ( (_DWORD)_RAX ) /*0x1409e91bc*/
          {
            v100 = 1; /*0x1409e91f0*/
            v101 = 0; /*0x1409e91f5*/
            goto LABEL_83; /*0x1409e91f5*/
          }
          v87 = j + v92 + 16; /*0x1409e91c1*/
        }
        v95 = *(_QWORD *)(v86 + 16); /*0x1409e913e*/
        v189 = (unsigned __int64)v83; /*0x1409e9142*/
        v182 = j; /*0x1409e9149*/
        while ( 1 ) /*0x1409e9150*/
        {
          __asm { tzcnt eax, r12d } /*0x1409e9150*/
          v96 = v80; /*0x1409e9158*/
          v97 = -(__int64)(v80 & (v92 + _RAX)); /*0x1409e915e*/
          v98 = v79; /*0x1409e9161*/
          if ( v95 == *(_QWORD *)(v79 + 48 * v97 - 32) ) /*0x1409e9171*/
          {
            v99 = v79 + 48 * v97; /*0x1409e9173*/
            if ( !(unsigned int)sub_1416847B0(*(_QWORD *)(v86 + 8), *(_QWORD *)(v99 - 40), v95) ) /*0x1409e9181*/
              break; /*0x1409e9181*/
          }
          _RAX = (unsigned int)(_R12D - 1); /*0x1409e918a*/
          LOWORD(_RAX) = _R12D & (_R12D - 1); /*0x1409e918f*/
          _R12D = _RAX; /*0x1409e9193*/
          v79 = v98; /*0x1409e9196*/
          v80 = v96; /*0x1409e9199*/
          v83 = (__m128i *)v189; /*0x1409e919c*/
          j = v182; /*0x1409e91a3*/
          if ( !(_WORD)_RAX ) /*0x1409e91aa*/
            goto LABEL_79; /*0x1409e91aa*/
        }
        v100 = *(_QWORD *)(v99 - 16); /*0x1409e91d0*/
        v101 = *(_QWORD *)(v99 - 8); /*0x1409e91d4*/
        v79 = v98; /*0x1409e91d8*/
        v80 = v96; /*0x1409e91db*/
        v83 = (__m128i *)v189; /*0x1409e91de*/
LABEL_83:
        sub_1409E1380(&v190, v100, v101); /*0x1409e91f8*/
        v194.m128i_i64[0] = (__int64)&v169; /*0x1409e9209*/
        v194.m128i_i64[1] = (__int64)sub_1406B5450; /*0x1409e9217*/
        v195 = &v190; /*0x1409e9225*/
        v196 = sub_1400015F0; /*0x1409e9233*/
        sub_14149C0F0(&v158, &unk_1417A7579, &v194); /*0x1409e924c*/
        if ( v190 ) /*0x1409e925c*/
          sub_140001660(v191, v190, 1); /*0x1409e926b*/
        v102 = v199; /*0x1409e9270*/
        if ( v199 == v198.m128i_i64[0] ) /*0x1409e927e*/
          sub_141689AB0(&v198); /*0x1409e928b*/
        v84 = v198.m128i_i64[1]; /*0x1409e90b0*/
        v85 = 3 * v102; /*0x1409e90b7*/
        *(_QWORD *)(v198.m128i_i64[1] + 8 * v85 + 16) = v159; /*0x1409e90bf*/
        *(__m128i *)(v84 + 8 * v85) = _mm_loadu_si128(&v158); /*0x1409e90c9*/
        v199 = v102 + 1; /*0x1409e90d1*/
        v81 = v193; /*0x1409e90d8*/
      }
      if ( v184 ) /*0x1409e92a0*/
        sub_140001660(v81, 8 * v184, 8); /*0x1409e92af*/
      v36 = v186; /*0x1409e92b4*/
    }
    v103 = *(_QWORD *)(v36 + 144); /*0x1409e92bb*/
    if ( v103 ) /*0x1409e92c6*/
    {
      v104 = v199; /*0x1409e92cc*/
      if ( v199 == v198.m128i_i64[0] ) /*0x1409e92da*/
        sub_141689AB0(&v198); /*0x1409e92e3*/
      v105 = v198.m128i_i64[1]; /*0x1409e92e9*/
      v106 = 3 * v104; /*0x1409e92f0*/
      *(_QWORD *)(v198.m128i_i64[1] + 8 * v106) = 0; /*0x1409e92f4*/
      *(_QWORD *)(v105 + 8 * v106 + 8) = 1; /*0x1409e92fc*/
      *(_QWORD *)(v105 + 8 * v106 + 16) = 0; /*0x1409e9305*/
      v199 = v104 + 1; /*0x1409e9311*/
      v194.m128i_i64[0] = (__int64)v172; /*0x1409e931f*/
      v194.m128i_i64[1] = (__int64)sub_1400015F0; /*0x1409e932d*/
      sub_14149C0F0(&v156, &unk_1417A755F, &v194); /*0x1409e9346*/
      v107 = v199; /*0x1409e934c*/
      if ( v199 == v198.m128i_i64[0] ) /*0x1409e935a*/
        sub_141689AB0(&v198); /*0x1409e9363*/
      v108 = v198.m128i_i64[1]; /*0x1409e9369*/
      v109 = 3 * v107; /*0x1409e9370*/
      *(_QWORD *)(v198.m128i_i64[1] + 8 * v109 + 16) = v157; /*0x1409e9378*/
      *(_OWORD *)(v108 + 8 * v109) = v156; /*0x1409e9381*/
      v199 = v107 + 1; /*0x1409e9388*/
      v110 = *(const __m128i **)(v36 + 120); /*0x1409e938f*/
      v189 = *(_QWORD *)(v36 + 128); /*0x1409e939c*/
      LODWORD(v109) = ~_mm_movemask_epi8(_mm_load_si128(v110)); /*0x1409e93b0*/
      v194.m128i_i64[0] = (__int64)v110; /*0x1409e93b6*/
      v194.m128i_i64[1] = (__int64)v110[1].m128i_i64; /*0x1409e93bd*/
      v195 = (__m128i **)((char *)v110->m128i_i64 + v189 + 1); /*0x1409e93c4*/
      LOWORD(v196) = v109; /*0x1409e93cb*/
      v197 = v103; /*0x1409e93d2*/
      sub_14031A4A0(&v169, &v194); /*0x1409e93e4*/
      v111 = (__m128i *)v170; /*0x1409e93ea*/
      v112 = v171; /*0x1409e93ee*/
      v193 = v170; /*0x1409e93f9*/
      if ( v171 >= 2 ) /*0x1409e9400*/
      {
        v201 = 1; /*0x1409e98d7*/
        v111 = (__m128i *)v193; /*0x1409e98eb*/
        if ( v171 >= 0x15 ) /*0x1409e98d1*/
          sub_140B5A4E0(v193, v171, &v203); /*0x1409e9975*/
        else
          sub_1405580D0(v193, v171, 1, &v203); /*0x1409e98f8*/
      }
      v186 = v169; /*0x1409e940a*/
      v185 = (__m128i *)((char *)v111 + 8 * v112); /*0x1409e9415*/
      v113 = v36 + 152; /*0x1409e941c*/
      v114 = v111; /*0x1409e9427*/
      while ( v114 != v185 ) /*0x1409e946c*/
      {
        v168 = v114->m128i_i64[0]; /*0x1409e9475*/
        v117 = v168; /*0x1409e9472*/
        v118 = sub_140378810(v113, v168); /*0x1409e947f*/
        v114 = (__m128i *)((char *)v114 + 8); /*0x1409e9485*/
        _RCX = v118 >> 57; /*0x1409e948c*/
        v120 = _mm_cvtsi32_si128(v118 >> 57); /*0x1409e9490*/
        v121 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v120, v120), 0), 68); /*0x1409e949d*/
        for ( k = 0; ; k += 16 ) /*0x1409e94a2*/
        {
          v123 = v189 & v118; /*0x1409e94a4*/
          v124 = _mm_loadu_si128((const __m128i *)((char *)v110 + v123)); /*0x1409e94ab*/
          _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v124, v121)); /*0x1409e94ba*/
          if ( _R14D ) /*0x1409e94c2*/
            break; /*0x1409e94c2*/
LABEL_105:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v124, (__m128i)-1LL)); /*0x1409e9530*/
          if ( (_DWORD)_RCX ) /*0x1409e953c*/
          {
            v130 = 1; /*0x1409e9560*/
            v131 = 0; /*0x1409e9565*/
            goto LABEL_109; /*0x1409e9565*/
          }
          v118 = k + v123 + 16; /*0x1409e9541*/
        }
        v126 = *(_QWORD *)(v117 + 16); /*0x1409e94c4*/
        v181 = v123; /*0x1409e94c8*/
        v182 = k; /*0x1409e94cf*/
        while ( 1 ) /*0x1409e94d6*/
        {
          __asm { tzcnt ecx, r14d } /*0x1409e94d6*/
          _RCX = -(__int64)(v189 & (v123 + _RCX)); /*0x1409e94e5*/
          v127 = v110; /*0x1409e94e8*/
          if ( v126 == v110[3 * _RCX - 2].m128i_i64[0] ) /*0x1409e94f8*/
          {
            v128 = &v110[3 * _RCX]; /*0x1409e94fa*/
            if ( !(unsigned int)sub_1416847B0(*(_QWORD *)(v117 + 8), v128[-3].m128i_i64[1], v126) ) /*0x1409e9508*/
              break; /*0x1409e9508*/
          }
          v129 = _R14D - 1; /*0x1409e9511*/
          LOWORD(v129) = _R14D & (_R14D - 1); /*0x1409e9515*/
          v20 = (_WORD)v129 == 0; /*0x1409e9515*/
          _R14D = v129; /*0x1409e9519*/
          v123 = v181; /*0x1409e951c*/
          v110 = v127; /*0x1409e9523*/
          k = v182; /*0x1409e9526*/
          if ( v20 ) /*0x1409e952d*/
            goto LABEL_105; /*0x1409e952d*/
        }
        v130 = v128[-1].m128i_i64[0]; /*0x1409e9550*/
        v131 = v128[-1].m128i_i64[1]; /*0x1409e9554*/
        v110 = v127; /*0x1409e9558*/
LABEL_109:
        sub_1409E1380(&v190, v130, v131); /*0x1409e9568*/
        v194.m128i_i64[0] = (__int64)&v168; /*0x1409e9579*/
        v194.m128i_i64[1] = (__int64)sub_1406B5450; /*0x1409e9587*/
        v195 = &v190; /*0x1409e9595*/
        v196 = sub_1400015F0; /*0x1409e95a3*/
        sub_14149C0F0(&v187, &unk_1417A7579, &v194); /*0x1409e95bf*/
        if ( v190 ) /*0x1409e95cf*/
          sub_140001660(v191, v190, 1); /*0x1409e95de*/
        v132 = v199; /*0x1409e95e3*/
        if ( v199 == v198.m128i_i64[0] ) /*0x1409e95f1*/
          sub_141689AB0(&v198); /*0x1409e95fe*/
        v115 = v198.m128i_i64[1]; /*0x1409e9430*/
        v116 = 3 * v132; /*0x1409e9437*/
        *(_QWORD *)(v198.m128i_i64[1] + 8 * v116 + 16) = v188; /*0x1409e9442*/
        *(__m128i *)(v115 + 8 * v116) = _mm_loadu_si128(&v187); /*0x1409e944f*/
        v199 = v132 + 1; /*0x1409e9457*/
        v111 = (__m128i *)v193; /*0x1409e945e*/
      }
      if ( v186 ) /*0x1409e9613*/
        sub_140001660(v111, 8 * v186, 8); /*0x1409e9622*/
    }
    v195 = (__m128i **)v199; /*0x1409e962e*/
    v194 = _mm_loadu_si128(&v198); /*0x1409e963d*/
    if ( v172[0] ) /*0x1409e964f*/
      sub_140001660(v172[1], v172[0], 1); /*0x1409e965e*/
    v200 = 0; /*0x1409e9663*/
    sub_1409E1880((__int64)&v190, &v154, v194.m128i_i64); /*0x1409e967c*/
    v133 = v191; /*0x1409e9682*/
    v134 = v192; /*0x1409e9689*/
    sub_140440300((unsigned int)&v194, (_DWORD)v191, v192, (unsigned int)asc_1417A47C8, 1); /*0x1409e96ad*/
    v135 = v195; /*0x1409e96b3*/
    v188 = (unsigned __int64)v195; /*0x1409e96ba*/
    v187 = _mm_loadu_si128(&v194); /*0x1409e96c9*/
    if ( v195 ) /*0x1409e96d4*/
    {
      v136 = v187.m128i_i64[1]; /*0x1409e96d6*/
      if ( *((_BYTE *)v195 + v187.m128i_i64[1] - 1) != 10 ) /*0x1409e96e2*/
      {
        if ( (__m128i **)v187.m128i_i64[0] == v195 ) /*0x1409e96eb*/
        {
          sub_141688D30((unsigned int)&v187, (_DWORD)v195, 1, 1, 1); /*0x1409e9922*/
          v136 = v187.m128i_i64[1]; /*0x1409e9928*/
        }
        *((_BYTE *)v135 + v136) = 10; /*0x1409e96f1*/
        v188 = (unsigned __int64)v135 + 1; /*0x1409e96f8*/
      }
    }
    HIDWORD(_RAX) = HIDWORD(v188); /*0x1409e96ff*/
    v138 = v183; /*0x1409e9706*/
    *(_QWORD *)(v183 + 24) = v188; /*0x1409e970d*/
    *(__m128i *)(v138 + 8) = _mm_load_si128(&v187); /*0x1409e9719*/
    *(_QWORD *)v138 = -1; /*0x1409e971e*/
    v139 = v176; /*0x1409e9725*/
    if ( v176 ) /*0x1409e972f*/
    {
      v140 = v177; /*0x1409e9735*/
      if ( v177 ) /*0x1409e973f*/
      {
        v141 = v175; /*0x1409e9745*/
        v142 = v175 + 1; /*0x1409e9751*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v175)); /*0x1409e975a*/
        do /*0x1409e9770*/
        {
          if ( !(_WORD)_R13D ) /*0x1409e9776*/
          {
            do /*0x1409e979d*/
            {
              v144 = _mm_load_si128(v142); /*0x1409e9780*/
              v141 -= 40; /*0x1409e9786*/
              ++v142; /*0x1409e978d*/
              _R13D = _mm_movemask_epi8(v144) ^ 0xFFFF; /*0x1409e9796*/
            }
            while ( !_R13D ); /*0x1409e979d*/
          }
          __asm { tzcnt eax, r13d } /*0x1409e979f*/
          v145 = -5 * _RAX; /*0x1409e97a7*/
          v146 = *((_QWORD *)&v141[-2] + v145 - 1); /*0x1409e97ab*/
          if ( v146 ) /*0x1409e97b3*/
            sub_140001660(v141[-2].m128i_i64[v145], v146, 1); /*0x1409e97c3*/
          --v140; /*0x1409e9760*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1409e9767*/
          _R13D &= _R13D - 1; /*0x1409e976a*/
        }
        while ( v140 ); /*0x1409e9770*/
      }
      v147 = (40 * v139 + 55) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1409e97d6*/
      v148 = v147 + v139 + 17; /*0x1409e97dd*/
      if ( v148 ) /*0x1409e97e1*/
        sub_140001660((char *)v175 - v147, v148, 16); /*0x1409e97f6*/
    }
    if ( v134 ) /*0x1409e97fe*/
    {
      v149 = v133 + 8; /*0x1409e9800*/
      do /*0x1409e9817*/
      {
        v150 = *(v149 - 1); /*0x1409e9819*/
        if ( v150 ) /*0x1409e9820*/
          sub_140001660(*v149, v150, 1); /*0x1409e982b*/
        v149 += 3; /*0x1409e9810*/
        --v134; /*0x1409e9814*/
      }
      while ( v134 ); /*0x1409e9817*/
    }
    if ( v190 ) /*0x1409e983c*/
    {
      v68 = 24LL * (_QWORD)v190; /*0x1409e9842*/
      v67 = 8; /*0x1409e9846*/
      v66 = v133; /*0x1409e984c*/
      goto LABEL_139; /*0x1409e984c*/
    }
  }
  return v183; /*0x1409e985b*/
}
