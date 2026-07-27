// __ZN13codexmate_lib4core3mcp26prepare_existing_mcp_block @ 0x10084c120 | 基线 same-set
double __fastcall codexmate_lib::core::mcp::prepare_existing_mcp_block::h411c36bd5386c3f8(
        _QWORD *a1,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        __m128i si128)
{
  _QWORD *v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  const __m128i *v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm1
  char *v14; // rsi
  __int8 *v15; // rdi
  __m128i v16; // xmm2
  unsigned __int64 v17; // rbx
  __m128i v18; // xmm3
  __int64 v20; // rax
  __int64 v21; // r15
  void *v22; // rdi
  char *v23; // rax
  unsigned __int64 v24; // r13
  _QWORD *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r15
  char v29; // r14
  bool v30; // cl
  __int64 v31; // rax
  __int64 v32; // rdx
  bool v33; // zf
  size_t v34; // rdx
  const void *v35; // rdi
  const void *v36; // rsi
  __int64 v37; // rbx
  unsigned __int64 v38; // r14
  void *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  _QWORD *v43; // rbx
  _QWORD *v44; // r13
  __int64 v45; // r14
  __int64 v46; // r9
  __int64 v47; // r15
  char *v48; // rax
  __int64 v49; // rcx
  const __m128i *v51; // r13
  const __m128i *v53; // r15
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rsi
  size_t v57; // r14
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  _QWORD *v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int8 *v66; // rdi
  _QWORD *v67; // rax
  __int64 v69; // rbx
  const __m128i *v70; // r14
  const __m128i *v72; // r15
  int v73; // r13d
  __int64 v74; // rax
  __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v79[3]; // [rsp+8h] [rbp-1C8h] BYREF
  __int64 v80; // [rsp+20h] [rbp-1B0h] BYREF
  char *v81; // [rsp+28h] [rbp-1A8h] BYREF
  _QWORD v82[10]; // [rsp+30h] [rbp-1A0h] BYREF
  __m128i v83; // [rsp+80h] [rbp-150h] BYREF
  _QWORD v84[5]; // [rsp+90h] [rbp-140h] BYREF
  _QWORD v85[2]; // [rsp+B8h] [rbp-118h] BYREF
  size_t __n; // [rsp+C8h] [rbp-108h]
  __m128i v87; // [rsp+D0h] [rbp-100h] BYREF
  _QWORD *v88; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+E8h] [rbp-E8h]
  __int64 v90; // [rsp+F0h] [rbp-E0h]
  __int64 v91; // [rsp+F8h] [rbp-D8h] BYREF
  char *v92; // [rsp+100h] [rbp-D0h]
  unsigned __int64 v93; // [rsp+108h] [rbp-C8h]
  const __m128i *v94; // [rsp+110h] [rbp-C0h]
  __int64 v95; // [rsp+118h] [rbp-B8h]
  __int64 v96; // [rsp+128h] [rbp-A8h]
  char v97[16]; // [rsp+130h] [rbp-A0h] BYREF
  void *__src; // [rsp+140h] [rbp-90h]
  __int64 v99; // [rsp+148h] [rbp-88h] BYREF
  char *v100; // [rsp+150h] [rbp-80h]
  unsigned __int64 v101; // [rsp+158h] [rbp-78h]
  __int64 v102; // [rsp+160h] [rbp-70h]
  __int8 *v103; // [rsp+168h] [rbp-68h]
  __int64 v104; // [rsp+170h] [rbp-60h] BYREF
  char *v105; // [rsp+178h] [rbp-58h]
  __int64 v106; // [rsp+180h] [rbp-50h]
  __int64 v107; // [rsp+188h] [rbp-48h]
  _QWORD *v108; // [rsp+190h] [rbp-40h]
  const __m128i *v109; // [rsp+198h] [rbp-38h]
  void *__s1; // [rsp+1A0h] [rbp-30h]

  v8 = a1; /*0x10084c13a*/
  v85[0] = a4; /*0x10084c13d*/
  v85[1] = a5; /*0x10084c144*/
  __src = a2; /*0x10084c152*/
  __n = a3; /*0x10084c159*/
  codexmate_lib::core::mcp::parse_mcp_document::hd6580a239eb217f7(&v91, (__int64)a2, a3); /*0x10084c160*/
  v9 = v96; /*0x10084c16c*/
  if ( !v96 ) /*0x10084c176*/
  {
LABEL_10:
    v88 = v85; /*0x10084c295*/
    v89 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084c2aa*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v81, &unk_1017C5A6D, &v88); /*0x10084c2c6*/
    v23 = v81; /*0x10084c2cb*/
    qmemcpy(v8 + 2, v82, 0x50u); /*0x10084c2e2*/
    *v8 = 8; /*0x10084c2e5*/
    v8[1] = v23; /*0x10084c2ed*/
    __s1 = v92; /*0x10084c2f8*/
    v24 = v93; /*0x10084c2fc*/
    if ( !v93 ) /*0x10084c306*/
      goto LABEL_72; /*0x10084c306*/
    goto LABEL_11; /*0x10084c306*/
  }
  v108 = a1; /*0x10084c17c*/
  __s1 = a4; /*0x10084c187*/
  v10 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v97, a4, a5); /*0x10084c196*/
  v11 = v94; /*0x10084c19d*/
  v12 = v95; /*0x10084c1a4*/
  v13 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v10 >> 57), (__m128i)0LL); /*0x10084c1b3*/
  v14 = &v94[-3].i8[8]; /*0x10084c1b8*/
  v15 = nullptr; /*0x10084c1bc*/
  v16 = (__m128i)-1LL; /*0x10084c1be*/
  while ( 1 ) /*0x10084c1c2*/
  {
    v17 = v12 & v10; /*0x10084c1c2*/
    v18 = _mm_loadu_si128((const __m128i *)((char *)v11 + v17)); /*0x10084c1c5*/
    si128 = _mm_cmpeq_epi8(v18, v13); /*0x10084c1ce*/
    _RAX = (unsigned int)_mm_movemask_epi8(si128); /*0x10084c1d2*/
    if ( (_DWORD)_RAX ) /*0x10084c1d8*/
      break; /*0x10084c1d8*/
LABEL_8:
    v8 = v108; /*0x10084c270*/
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v16)) ) /*0x10084c274*/
      goto LABEL_10; /*0x10084c285*/
    v10 = (unsigned __int64)&v15[v17 + 16]; /*0x10084c287*/
    v15 += 16; /*0x10084c28c*/
  }
  v102 = v12; /*0x10084c1de*/
  v109 = v11; /*0x10084c1e2*/
  v87 = v13; /*0x10084c1e6*/
  v103 = v15; /*0x10084c1ee*/
  v83 = v18; /*0x10084c1f2*/
  while ( 1 ) /*0x10084c1fa*/
  {
    v107 = _RAX; /*0x10084c1fa*/
    __asm { tzcnt eax, eax } /*0x10084c1fe*/
    v20 = -(__int64)(v12 & (v17 + _RAX)); /*0x10084c208*/
    v21 = 5 * v20; /*0x10084c20b*/
    if ( a5 == *(_QWORD *)&v14[40 * v20 + 16] ) /*0x10084c214*/
    {
      v22 = __s1; /*0x10084c221*/
      if ( !memcmp(__s1, *(const void **)&v14[40 * v20 + 8], a5) ) /*0x10084c228*/
        break; /*0x10084c228*/
    }
    _RAX = (unsigned int)(v107 - 1); /*0x10084c23c*/
    LOWORD(_RAX) = v107 & (v107 - 1); /*0x10084c23f*/
    v12 = v102; /*0x10084c242*/
    v11 = v109; /*0x10084c246*/
    v13 = _mm_load_si128(&v87); /*0x10084c24a*/
    v15 = v103; /*0x10084c252*/
    v16 = (__m128i)-1LL; /*0x10084c256*/
    v18 = _mm_load_si128(&v83); /*0x10084c25a*/
    if ( !(_WORD)_RAX ) /*0x10084c262*/
      goto LABEL_8; /*0x10084c262*/
  }
  __s1 = v92; /*0x10084c34c*/
  v24 = v93; /*0x10084c350*/
  if ( !v93 ) /*0x10084c35a*/
  {
LABEL_55:
    v57 = __n; /*0x10084c738*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10084c742*/
    {
      v58 = 0; /*0x10084c744*/
      goto LABEL_57; /*0x10084c744*/
    }
    if ( __n ) /*0x10084c75e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v14); /*0x10084c764*/
      v58 = 1; /*0x10084c769*/
      v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v57, 1); /*0x10084c777*/
      if ( !v59 ) /*0x10084c77f*/
LABEL_57:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v58, v57); /*0x10084c747*/
      v60 = v59; /*0x10084c781*/
    }
    else
    {
      v60 = 1; /*0x10084c816*/
    }
    memcpy((void *)v60, __src, v57); /*0x10084c828*/
    v67 = v108; /*0x10084c82d*/
    v108[1] = v57; /*0x10084c831*/
    v67[2] = v60; /*0x10084c835*/
    v67[3] = v57; /*0x10084c839*/
    *v67 = 11; /*0x10084c83d*/
    if ( !v24 ) /*0x10084c847*/
    {
LABEL_72:
      HIDWORD(_RAX) = HIDWORD(v91); /*0x10084c84d*/
      if ( v91 ) /*0x10084c857*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, 24 * v91, 8); /*0x10084c86a*/
      v69 = v95; /*0x10084c86f*/
      if ( v95 ) /*0x10084c879*/
      {
        if ( v9 ) /*0x10084c882*/
        {
          v70 = v94; /*0x10084c888*/
          si128 = _mm_load_si128(v94); /*0x10084c88f*/
          _R13D = ~_mm_movemask_epi8(si128); /*0x10084c899*/
          v72 = v94 + 1; /*0x10084c89c*/
          do /*0x10084c8c0*/
          {
            if ( !(_WORD)_R13D ) /*0x10084c8c6*/
            {
              do /*0x10084c8ec*/
              {
                si128 = _mm_load_si128(v72); /*0x10084c8d0*/
                v73 = _mm_movemask_epi8(si128); /*0x10084c8d5*/
                v70 -= 40; /*0x10084c8da*/
                ++v72; /*0x10084c8e1*/
              }
              while ( v73 == 0xFFFF ); /*0x10084c8ec*/
              _R13D = ~v73; /*0x10084c8ee*/
            }
            __asm { tzcnt eax, r13d } /*0x10084c8f1*/
            v74 = -5 * _RAX; /*0x10084c8f9*/
            v75 = *((_QWORD *)&v70[-2] + v74 - 1); /*0x10084c8fd*/
            if ( v75 ) /*0x10084c905*/
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70[-2].i64[v74], v75, 1); /*0x10084c914*/
            --v9; /*0x10084c8b0*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10084c8b7*/
            _R13D &= _R13D - 1; /*0x10084c8ba*/
          }
          while ( v9 ); /*0x10084c8c0*/
        }
        v76 = (40 * v69 + 55) & 0xFFFFFFFFFFFFFFF0LL; /*0x10084c927*/
        v77 = v76 + v69 + 17; /*0x10084c92e*/
        if ( v77 ) /*0x10084c932*/
        {
          v66 = &v94->i8[-v76]; /*0x10084c93b*/
          v65 = 16; /*0x10084c93e*/
          v64 = v77; /*0x10084c943*/
LABEL_85:
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v64, v65); /*0x10084c946*/
        }
      }
      return *(double *)si128.i64; /*0x10084c946*/
    }
LABEL_11:
    v25 = (char *)__s1 + 8; /*0x10084c30c*/
    do /*0x10084c327*/
    {
      v26 = *(v25 - 1); /*0x10084c32d*/
      if ( v26 ) /*0x10084c334*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v26, 1); /*0x10084c33e*/
      v25 += 3; /*0x10084c320*/
      --v24; /*0x10084c324*/
    }
    while ( v24 ); /*0x10084c327*/
    goto LABEL_72; /*0x10084c327*/
  }
  v103 = &v109->i8[8 * v21]; /*0x10084c368*/
  v87.i64[0] = *((_QWORD *)v103 - 2); /*0x10084c371*/
  v107 = 24 * v93; /*0x10084c384*/
  v27 = -1; /*0x10084c388*/
  v28 = 0; /*0x10084c38f*/
  v29 = 0; /*0x10084c392*/
  while ( v87.i64[0] != ++v27 ) /*0x10084c3cc*/
  {
    v31 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x10084c3ea*/
            *(_QWORD *)((char *)__s1 + v28 + 8),
            *(_QWORD *)((char *)__s1 + v28 + 16));
    v30 = 0; /*0x10084c3ef*/
    switch ( v32 ) /*0x10084c409*/
    {
      case 30LL: /*0x10084c409*/
        v13 = _mm_xor_si128( /*0x10084c417*/
                _mm_loadu_si128((const __m128i *)v31),
                _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98));
        si128 = _mm_loadu_si128((const __m128i *)(v31 + 14)); /*0x10084c41b*/
        v16 = _mm_or_si128( /*0x10084c42c*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  si128),
                v13);
        v33 = _mm_testz_si128(v16, v16); /*0x10084c430*/
        goto LABEL_26; /*0x10084c435*/
      case 36LL: /*0x10084c409*/
        v34 = 36; /*0x10084c448*/
        v35 = (const void *)v31; /*0x10084c44d*/
        v36 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99; /*0x10084c450*/
        goto LABEL_25; /*0x10084c450*/
      case 39LL: /*0x10084c409*/
        v34 = 39; /*0x10084c437*/
        v35 = (const void *)v31; /*0x10084c43c*/
        v36 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100; /*0x10084c43f*/
LABEL_25:
        v33 = memcmp(v35, v36, v34) == 0; /*0x10084c457*/
LABEL_26:
        v30 = v33; /*0x10084c45e*/
        goto LABEL_19; /*0x10084c461*/
      case 55LL: /*0x10084c409*/
        if ( !memcmp((const void *)v31, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x10084c475*/
          goto LABEL_30; /*0x10084c47c*/
        goto LABEL_18; /*0x10084c47c*/
      case 60LL: /*0x10084c409*/
        if ( !memcmp((const void *)v31, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x10084c493*/
          goto LABEL_30; /*0x10084c49a*/
        goto LABEL_18; /*0x10084c49a*/
      case 64LL: /*0x10084c409*/
        if ( !memcmp((const void *)v31, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x10084c3ad*/
        {
LABEL_30:
          v28 += 24; /*0x10084c4a0*/
          v29 = 1; /*0x10084c4a6*/
          if ( v107 == v28 ) /*0x10084c4ad*/
            goto LABEL_33; /*0x10084c4ad*/
        }
        else
        {
LABEL_18:
          v30 = 0; /*0x10084c3b3*/
LABEL_19:
          v28 += 24; /*0x10084c3b5*/
          v29 &= !v30; /*0x10084c3bf*/
          if ( v107 == v28 ) /*0x10084c3c6*/
            goto LABEL_33; /*0x10084c3c6*/
        }
        break; /*0x10084c3c6*/
      default:
        goto LABEL_19;
    }
  }
  if ( (v29 & 1) != 0 ) /*0x10084c4b9*/
    goto LABEL_40; /*0x10084c4b9*/
LABEL_33:
  v37 = 0; /*0x10084c4bb*/
  v38 = 0; /*0x10084c4c4*/
  while ( 1 ) /*0x10084c4f9*/
  {
    v22 = *(void **)((char *)__s1 + v37 + 8); /*0x10084c4f9*/
    v14 = *(char **)((char *)__s1 + v37 + 16); /*0x10084c4fe*/
    v39 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v22, v14); /*0x10084c503*/
    if ( v40 == 60 ) /*0x10084c50c*/
    {
      v22 = v39; /*0x10084c4d5*/
      v14 = "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)'\"'\"'"; /*0x10084c4d8*/
      if ( !memcmp( /*0x10084c4e2*/
              v39,
              "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)'\"'\"'",
              0x3Cu) )
        break; /*0x10084c4e2*/
      goto LABEL_35; /*0x10084c4e2*/
    }
    if ( v40 == 64 ) /*0x10084c512*/
    {
      v22 = v39; /*0x10084c519*/
      v14 = "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)'\"'\"'"; /*0x10084c51c*/
      if ( !memcmp(v39, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)'\"'\"'", 0x40u) ) /*0x10084c523*/
        break; /*0x10084c523*/
    }
LABEL_35:
    ++v38; /*0x10084c4e4*/
    v37 += 24; /*0x10084c4e7*/
    if ( v107 == v37 ) /*0x10084c4ef*/
      goto LABEL_55; /*0x10084c4ef*/
  }
  if ( v87.i64[0] >= v38 ) /*0x10084c533*/
    goto LABEL_55; /*0x10084c533*/
LABEL_40:
  v101 = v93; /*0x10084c539*/
  v100 = v92; /*0x10084c552*/
  v99 = v91; /*0x10084c556*/
  v41 = *((_QWORD *)v103 - 1); /*0x10084c561*/
  if ( v93 < v41 ) /*0x10084c56b*/
  {
    v42 = 0; /*0x10084c95d*/
LABEL_88:
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v42, v41, v93, &anon_3ce6d1417794db0febde534c64082f90_449); /*0x10084c95f*/
  }
  v42 = *((_QWORD *)v103 - 2); /*0x10084c571*/
  v43 = v108; /*0x10084c578*/
  if ( v42 > v41 ) /*0x10084c57c*/
    goto LABEL_88; /*0x10084c57c*/
  v101 = *((_QWORD *)v103 - 2); /*0x10084c582*/
  v84[3] = v41; /*0x10084c59a*/
  v84[4] = v93 - v41; /*0x10084c5a1*/
  v84[0] = &v100[24 * v42]; /*0x10084c5a8*/
  v84[1] = &v100[24 * v41]; /*0x10084c5af*/
  v84[2] = &v99; /*0x10084c5bd*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he5e8fa8060cba05e( /*0x10084c5d2*/
    v79,
    v84,
    *(double *)si128.i64,
    *(double *)v13.i64,
    *(double *)v16.i64);
  v82[0] = v101; /*0x10084c5db*/
  v81 = v100; /*0x10084c5ed*/
  v80 = v99; /*0x10084c5f4*/
  codexmate_lib::core::mcp::insert_mcp_block::hb6a75642a4639e3d(&v88, &v80, v79); /*0x10084c610*/
  v44 = v89; /*0x10084c615*/
  v45 = v90; /*0x10084c61c*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10084c63d*/
    &v80,
    v89,
    v90,
    "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
    1);
  v47 = v82[0]; /*0x10084c642*/
  v106 = v82[0]; /*0x10084c649*/
  v105 = v81; /*0x10084c65b*/
  v104 = v80; /*0x10084c65f*/
  if ( v82[0] ) /*0x10084c666*/
  {
    v48 = v105; /*0x10084c668*/
    if ( v105[v82[0] - 1] != 10 ) /*0x10084c672*/
    {
      v49 = v82[0]; /*0x10084c674*/
      if ( v104 == v82[0] ) /*0x10084c67b*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10084c984*/
          &v104,
          v82[0],
          1,
          1,
          1,
          v46);
        v48 = v105; /*0x10084c989*/
        v49 = v106; /*0x10084c98d*/
        v43 = v108; /*0x10084c991*/
      }
      v48[v49] = 10; /*0x10084c681*/
      v106 = v47 + 1; /*0x10084c688*/
    }
  }
  v43[3] = v106; /*0x10084c690*/
  _RAX = v104; /*0x10084c694*/
  v43[2] = v105; /*0x10084c69c*/
  v43[1] = _RAX; /*0x10084c6a0*/
  *v43 = 11; /*0x10084c6a4*/
  if ( v102 ) /*0x10084c6b0*/
  {
    __s1 = v44; /*0x10084c6b6*/
    v51 = v109; /*0x10084c6ba*/
    si128 = _mm_load_si128(v109); /*0x10084c6be*/
    _EBX = ~_mm_movemask_epi8(si128); /*0x10084c6c8*/
    v53 = v109 + 1; /*0x10084c6ca*/
    do /*0x10084c6dd*/
    {
      if ( !(_WORD)_EBX ) /*0x10084c6e6*/
      {
        do /*0x10084c70a*/
        {
          si128 = _mm_load_si128(v53); /*0x10084c6f0*/
          v54 = _mm_movemask_epi8(si128); /*0x10084c6f5*/
          v51 -= 40; /*0x10084c6f9*/
          ++v53; /*0x10084c700*/
        }
        while ( v54 == 0xFFFF ); /*0x10084c70a*/
        _EBX = ~v54; /*0x10084c70c*/
      }
      __asm { tzcnt eax, ebx } /*0x10084c70e*/
      v55 = -5 * _RAX; /*0x10084c715*/
      v56 = *((_QWORD *)&v51[-2] + v55 - 1); /*0x10084c719*/
      if ( v56 ) /*0x10084c721*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-2].i64[v55], v56, 1); /*0x10084c731*/
      --v9; /*0x10084c6d0*/
      _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x10084c6d6*/
      _EBX &= _EBX - 1; /*0x10084c6d8*/
    }
    while ( v9 ); /*0x10084c6dd*/
    v61 = (40 * v102 + 55) & 0xFFFFFFFFFFFFFFF0LL; /*0x10084c799*/
    v44 = __s1; /*0x10084c7a4*/
    if ( v61 + v102 != -17 ) /*0x10084c7a8*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v109 - v61, v61 + v102 + 17, 16); /*0x10084c7b6*/
  }
  if ( v45 ) /*0x10084c7be*/
  {
    v62 = v44 + 1; /*0x10084c7c0*/
    do /*0x10084c7d7*/
    {
      v63 = *(v62 - 1); /*0x10084c7d9*/
      if ( v63 ) /*0x10084c7e0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v63, 1); /*0x10084c7ea*/
      v62 += 3; /*0x10084c7d0*/
      --v45; /*0x10084c7d4*/
    }
    while ( v45 ); /*0x10084c7d7*/
  }
  if ( v88 ) /*0x10084c7fb*/
  {
    v64 = 24LL * (_QWORD)v88; /*0x10084c805*/
    v65 = 8; /*0x10084c809*/
    v66 = (__int8 *)v44; /*0x10084c80e*/
    goto LABEL_85; /*0x10084c811*/
  }
  return *(double *)si128.i64; /*0x10084c94b*/
}