// __ZN13codexmate_lib4core3mcp17remove_mcp_server @ 0x100845f30
// 1.2.3 NEW-delta | codexmate_lib::core::mcp::remove_mcp_server | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 **__fastcall codexmate_lib::core::mcp::remove_mcp_server::hbc5dae6688e33fdc(
        __int64 **a1,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5)
{
  __int64 **v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 *v12; // rax
  char *v13; // rdi
  __int64 *v14; // rsi
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  const __m128i *v19; // rdx
  unsigned __int64 v20; // r14
  __m128i v21; // xmm1
  __int8 *v22; // r15
  char *v23; // rsi
  unsigned __int64 v24; // rax
  __m128i si128; // xmm2
  __int64 v27; // rbx
  int v28; // eax
  bool v29; // zf
  __int64 v30; // r12
  __int64 (__fastcall *v31)(); // rbx
  __int64 *v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rsi
  __int64 *v36; // r14
  _QWORD *v37; // r15
  void *v38; // rbx
  const __m128i *v39; // r14
  const __m128i *v41; // r15
  int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  char *v46; // rbx
  char *v47; // rbx
  void *v48; // r14
  __int64 *v49; // rax
  char *v50; // rbx
  __int64 *v51; // r13
  __int64 (__fastcall *v52)(); // rcx
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r8
  const __m128i *v55; // rdi
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int64 v59; // r12
  _QWORD *v60; // r14
  __int64 v61; // rsi
  _QWORD *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // r9
  const __m128i *v67; // r14
  _BYTE *v68; // rax
  _QWORD *v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rsi
  const char *v72; // rcx
  __int64 v73; // rax
  char *v74; // rbx
  const char *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // rsi
  __int64 *v81; // rax
  __int64 v83; // rsi
  unsigned __int64 v84; // rdx
  _QWORD v85[2]; // [rsp+8h] [rbp-1F8h] BYREF
  __int64 v86; // [rsp+18h] [rbp-1E8h] BYREF
  __int64 v87; // [rsp+20h] [rbp-1E0h]
  unsigned __int64 v88; // [rsp+28h] [rbp-1D8h]
  _QWORD v89[2]; // [rsp+30h] [rbp-1D0h] BYREF
  __int64 v90; // [rsp+40h] [rbp-1C0h] BYREF
  __int64 v91; // [rsp+48h] [rbp-1B8h]
  __int64 v92; // [rsp+50h] [rbp-1B0h]
  char *v93; // [rsp+58h] [rbp-1A8h]
  __int64 v94; // [rsp+60h] [rbp-1A0h]
  __int64 v95; // [rsp+68h] [rbp-198h]
  __int64 *v96; // [rsp+70h] [rbp-190h]
  const __m128i **v97; // [rsp+78h] [rbp-188h]
  __int64 v98; // [rsp+80h] [rbp-180h] BYREF
  __int64 v99; // [rsp+88h] [rbp-178h]
  unsigned __int64 v100; // [rsp+90h] [rbp-170h]
  const __m128i *v101; // [rsp+98h] [rbp-168h] BYREF
  __int64 (__fastcall *v102)(); // [rsp+A0h] [rbp-160h]
  __int64 *v103; // [rsp+A8h] [rbp-158h]
  const __m128i *v104; // [rsp+B0h] [rbp-150h]
  void *v105; // [rsp+B8h] [rbp-148h]
  __int64 (__fastcall *v106)(); // [rsp+C0h] [rbp-140h]
  __int64 v107; // [rsp+C8h] [rbp-138h]
  char v108[16]; // [rsp+D0h] [rbp-130h] BYREF
  void *__s1; // [rsp+E0h] [rbp-120h]
  size_t __n; // [rsp+E8h] [rbp-118h]
  void *__dst[2]; // [rsp+F0h] [rbp-110h] BYREF
  size_t v112; // [rsp+108h] [rbp-F8h]
  void *v113; // [rsp+110h] [rbp-F0h]
  __int64 **v114; // [rsp+118h] [rbp-E8h]
  const __m128i *v115; // [rsp+120h] [rbp-E0h] BYREF
  __int64 (__fastcall *v116)(); // [rsp+128h] [rbp-D8h]
  _BYTE *v117; // [rsp+130h] [rbp-D0h]
  const __m128i *v118; // [rsp+138h] [rbp-C8h] BYREF
  char *v119; // [rsp+140h] [rbp-C0h] BYREF
  void *v120; // [rsp+148h] [rbp-B8h]
  __int64 (__fastcall *v121)(); // [rsp+150h] [rbp-B0h]
  const char *v122; // [rsp+158h] [rbp-A8h]
  __int64 v123; // [rsp+160h] [rbp-A0h]
  __int64 v124; // [rsp+168h] [rbp-98h]
  char *v125; // [rsp+170h] [rbp-90h]
  __int64 v126; // [rsp+178h] [rbp-88h]
  __int64 v127; // [rsp+180h] [rbp-80h]
  __int64 *v128; // [rsp+188h] [rbp-78h]
  const __m128i **v129; // [rsp+190h] [rbp-70h]
  void *__src; // [rsp+198h] [rbp-68h]
  __m128i v131; // [rsp+1A0h] [rbp-60h] BYREF
  size_t v132; // [rsp+1B0h] [rbp-50h]
  const __m128i *v133; // [rsp+1B8h] [rbp-48h]
  const __m128i *i; // [rsp+1C0h] [rbp-40h]
  char *v135; // [rsp+1C8h] [rbp-38h]
  void *__s2; // [rsp+1D0h] [rbp-30h]

  v6 = a1; /*0x100845f47*/
  __s1 = a4; /*0x100845f4a*/
  v85[0] = a4; /*0x100845f51*/
  v85[1] = a5; /*0x100845f58*/
  v89[0] = &unk_101674B80; /*0x100845f66*/
  v89[1] = 17; /*0x100845f6d*/
  v113 = a2; /*0x100845f78*/
  v112 = a3; /*0x100845f82*/
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x100845f8c*/
  if ( v7 ) /*0x100845f94*/
  {
    LOWORD(v118) = 511; /*0x100845f96*/
    BYTE2(v118) = 1; /*0x100845f9f*/
    v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v118, v7, v8); /*0x100845fb0*/
    if ( v9 ) /*0x100845fb8*/
    {
      *a1 = (__int64 *)2; /*0x100845fba*/
      a1[1] = (__int64 *)v9; /*0x100845fc1*/
      return v6; /*0x100845fc5*/
    }
  }
  v10 = 1; /*0x100845fca*/
  v114 = a1; /*0x100845fd0*/
  __n = a5; /*0x100845fd7*/
  while ( 1 ) /*0x100845fe0*/
  {
    v11 = v10 + 1; /*0x100845fe0*/
    if ( v10 == 3 ) /*0x100845fe8*/
      v11 = 3; /*0x100845fe8*/
    v86 = v10; /*0x100845fec*/
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v118, v113, v112); /*0x100846008*/
    v12 = (__int64 *)v118; /*0x10084600d*/
    v13 = v119; /*0x100846014*/
    v14 = (__int64 *)v120; /*0x10084601b*/
    v15 = v121; /*0x100846022*/
    if ( v118 != (const __m128i *)11 ) /*0x10084602d*/
    {
      v6[11] = (__int64 *)v129; /*0x1008468bd*/
      v6[10] = v128; /*0x1008468c5*/
      v6[9] = (__int64 *)v127; /*0x1008468cd*/
      v6[8] = (__int64 *)v126; /*0x1008468d8*/
      v6[7] = (__int64 *)v125; /*0x1008468e3*/
      v6[6] = (__int64 *)v124; /*0x1008468ee*/
      v72 = v122; /*0x1008468f2*/
      v6[5] = (__int64 *)v123; /*0x100846900*/
      v6[4] = (__int64 *)v72; /*0x100846904*/
      v6[1] = (__int64 *)v13; /*0x100846908*/
      v6[2] = v14; /*0x10084690c*/
      v6[3] = (__int64 *)v15; /*0x100846910*/
      *v6 = v12; /*0x100846914*/
      return v6; /*0x100846917*/
    }
    v88 = v11; /*0x100846033*/
    v87 = v10; /*0x10084603a*/
    v135 = v119; /*0x100846041*/
    __s2 = v120; /*0x10084604c*/
    v132 = (size_t)v121; /*0x100846050*/
    codexmate_lib::core::mcp::parse_mcp_document::hd6580a239eb217f7(&v101); /*0x100846054*/
    v16 = v107; /*0x100846059*/
    if ( !v107 ) /*0x100846063*/
    {
LABEL_17:
      v115 = (const __m128i *)v85; /*0x100846170*/
      v116 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100846185*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v119, &unk_1017C5A6D, &v115); /*0x1008461a1*/
      v133 = (const __m128i *)v119; /*0x1008461ad*/
      v30 = (__int64)v120; /*0x1008461b1*/
      i = (const __m128i *)v121; /*0x1008461bf*/
      v90 = (__int64)v122; /*0x1008461d2*/
      v91 = v123; /*0x1008461d9*/
      v92 = v124; /*0x1008461e4*/
      v93 = v125; /*0x1008461ef*/
      v94 = v126; /*0x1008461fa*/
      v95 = v127; /*0x100846205*/
      v96 = v128; /*0x100846210*/
      v97 = v129; /*0x10084621b*/
      v31 = v102; /*0x100846222*/
      v32 = v103; /*0x100846229*/
      if ( v103 ) /*0x100846233*/
      {
        v33 = (_QWORD *)((char *)v102 + 8); /*0x100846235*/
        do /*0x100846247*/
        {
          v34 = *(v33 - 1); /*0x100846249*/
          if ( v34 ) /*0x100846250*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1); /*0x10084625a*/
          v33 += 3; /*0x100846240*/
          v32 = (__int64 *)((char *)v32 - 1); /*0x100846244*/
        }
        while ( v32 ); /*0x100846247*/
      }
      _RAX = (unsigned __int64)v101; /*0x100846270*/
      __dst[0] = (void *)8; /*0x10084627c*/
      LODWORD(v36) = 0; /*0x100846283*/
      LODWORD(v37) = 0; /*0x100846286*/
      if ( v101 ) /*0x10084628f*/
        goto LABEL_23; /*0x10084628f*/
      goto LABEL_24; /*0x10084628f*/
    }
    v17 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v108, __s1, __n); /*0x10084607e*/
    _RCX = v17 >> 57; /*0x100846086*/
    v19 = v104; /*0x10084608a*/
    v20 = (unsigned __int64)v105; /*0x100846091*/
    v21 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v17 >> 57), (__m128i)0LL); /*0x1008460a0*/
    v22 = &v104[-3].i8[8]; /*0x1008460a5*/
    v23 = nullptr; /*0x1008460a9*/
    for ( i = v104; ; v19 = i ) /*0x1008460ab*/
    {
      v24 = v20 & v17; /*0x1008460af*/
      si128 = _mm_loadu_si128((const __m128i *)((char *)v19 + v24)); /*0x1008460b2*/
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(si128, v21)); /*0x1008460bf*/
      if ( _R12D ) /*0x1008460c7*/
        break; /*0x1008460c7*/
LABEL_15:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(si128, (__m128i)-1LL)); /*0x100846140*/
      if ( (_DWORD)_RCX ) /*0x10084614e*/
        goto LABEL_17; /*0x10084614e*/
      v17 = (unsigned __int64)&v23[v24 + 16]; /*0x100846150*/
      v23 += 16; /*0x100846155*/
    }
    v133 = (const __m128i *)v24; /*0x1008460c9*/
    v131 = v21; /*0x1008460cd*/
    __src = v23; /*0x1008460d2*/
    *(__m128i *)__dst = si128; /*0x1008460d6*/
    while ( 1 ) /*0x1008460de*/
    {
      __asm { tzcnt ecx, r12d } /*0x1008460de*/
      _RCX = -(__int64)(v20 & (v24 + _RCX)); /*0x1008460e9*/
      v27 = 5 * _RCX; /*0x1008460ec*/
      if ( __n == *(_QWORD *)&v22[40 * _RCX + 16] && !memcmp(__s1, *(const void **)&v22[40 * _RCX + 8], __n) ) /*0x10084610d*/
        break; /*0x10084610d*/
      v28 = _R12D - 1; /*0x10084611a*/
      LOWORD(v28) = _R12D & (_R12D - 1); /*0x10084611f*/
      v29 = (_WORD)v28 == 0; /*0x10084611f*/
      _R12D = v28; /*0x100846123*/
      v24 = (unsigned __int64)v133; /*0x100846126*/
      v21 = _mm_load_si128(&v131); /*0x10084612a*/
      v23 = (char *)__src; /*0x10084612f*/
      si128 = _mm_load_si128((const __m128i *)__dst); /*0x100846133*/
      if ( v29 ) /*0x10084613b*/
        goto LABEL_15; /*0x10084613b*/
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(&v98, &v101); /*0x10084659e*/
    v54 = i->u64[v27 - 1]; /*0x1008465a7*/
    v55 = (const __m128i *)v100; /*0x1008465ac*/
    v56 = v100 - v54; /*0x1008465b6*/
    if ( v100 < v54 ) /*0x1008465b9*/
    {
      v83 = i->i64[v27 - 1]; /*0x100846bf5*/
      v84 = v100; /*0x100846bf8*/
      v57 = 0; /*0x100846bfb*/
      goto LABEL_117; /*0x100846bfd*/
    }
    v57 = i[-1].u64[v27]; /*0x1008465bf*/
    if ( v57 > v54 ) /*0x1008465c7*/
    {
      v83 = v54; /*0x100846bff*/
      v84 = v100; /*0x100846c02*/
LABEL_117:
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v57, v83, v84, &anon_3ce6d1417794db0febde534c64082f90_449); /*0x100846c05*/
    }
    v100 = v57; /*0x1008465cd*/
    v58 = 24 * v57; /*0x1008465e3*/
    v131.i64[0] = v99; /*0x100846609*/
    if ( v54 == v57 ) /*0x10084660d*/
    {
      if ( v55 != (const __m128i *)v57 ) /*0x100846612*/
        goto LABEL_63; /*0x100846612*/
    }
    else
    {
      v133 = (const __m128i *)v54; /*0x100846620*/
      i = v55; /*0x100846624*/
      __dst[0] = (void *)(v99 + v58); /*0x10084662c*/
      __src = (void *)(v99 + 24 * v54); /*0x100846636*/
      v59 = (24 * v54 - 24 * v57) / 0x18; /*0x10084663a*/
      v60 = (_QWORD *)(v99 + v58 + 8); /*0x10084663e*/
      do /*0x100846657*/
      {
        v61 = *(v60 - 1); /*0x100846659*/
        if ( v61 ) /*0x100846660*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1); /*0x10084666a*/
        v60 += 3; /*0x100846650*/
        --v59; /*0x100846654*/
      }
      while ( v59 ); /*0x100846657*/
      if ( i != v133 ) /*0x100846679*/
      {
        memmove(__dst[0], __src, 24 * v56); /*0x100846692*/
LABEL_63:
        v57 += v56; /*0x100846697*/
        v100 = v57; /*0x10084669a*/
      }
    }
    v37 = (_QWORD *)v131.i64[0]; /*0x1008466a1*/
    if ( v57 >= 2 ) /*0x1008466a9*/
    {
      v62 = (_QWORD *)(v131.i64[0] + 24 * v57 - 8); /*0x1008466af*/
      while ( 1 ) /*0x1008466d4*/
      {
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v62 - 1), *v62); /*0x1008466d4*/
        if ( v63 ) /*0x1008466dc*/
          break; /*0x1008466dc*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v62 - 4), *(v62 - 3)); /*0x1008466e6*/
        if ( v64 ) /*0x1008466ee*/
          break; /*0x1008466ee*/
        v65 = *(v62 - 2); /*0x1008466f0*/
        if ( 2 * v65 ) /*0x1008466f4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v62 - 1), v65, 1); /*0x10084670a*/
        --v57; /*0x1008466c0*/
        v62 -= 3; /*0x1008466c3*/
        if ( v57 <= 1 ) /*0x1008466cb*/
        {
          v57 = 1; /*0x100846711*/
          break; /*0x100846711*/
        }
      }
      v100 = v57; /*0x100846716*/
    }
    alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x100846737*/
      &v118,
      v37,
      v57,
      "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
      1);
    v67 = (const __m128i *)v120; /*0x10084673c*/
    v117 = v120; /*0x100846743*/
    v30 = (__int64)v119; /*0x100846751*/
    v116 = (__int64 (__fastcall *)())v119; /*0x100846758*/
    v115 = v118; /*0x10084675f*/
    if ( !v120 ) /*0x100846769*/
    {
      i = nullptr; /*0x1008467a1*/
      v133 = v115; /*0x1008467b0*/
      if ( !v57 ) /*0x1008467b7*/
        goto LABEL_85; /*0x1008467b7*/
LABEL_81:
      v69 = v37 + 1; /*0x1008467b9*/
      do /*0x1008467c7*/
      {
        v70 = *(v69 - 1); /*0x1008467c9*/
        if ( v70 ) /*0x1008467d0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v69, v70, 1); /*0x1008467da*/
        v69 += 3; /*0x1008467c0*/
        --v57; /*0x1008467c4*/
      }
      while ( v57 ); /*0x1008467c7*/
      goto LABEL_85; /*0x1008467c7*/
    }
    if ( *((_BYTE *)v120 + (_QWORD)v119 - 1) != 10 ) /*0x100846771*/
    {
      v68 = v120; /*0x100846773*/
      if ( v115 == v120 ) /*0x10084677d*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008468a1*/
          &v115,
          v120,
          1,
          1,
          1,
          v66);
        v30 = (__int64)v116; /*0x1008468a6*/
        v68 = v117; /*0x1008468ad*/
      }
      v68[v30] = 10; /*0x100846783*/
      v67 = (const __m128i *)((char *)v67 + 1); /*0x100846788*/
    }
    i = v67; /*0x10084678b*/
    v133 = v115; /*0x100846796*/
    if ( v57 ) /*0x10084679d*/
      goto LABEL_81; /*0x10084679d*/
LABEL_85:
    if ( v98 ) /*0x1008467fa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24 * v98, 8); /*0x10084680c*/
    v31 = v102; /*0x100846811*/
    v36 = v103; /*0x100846818*/
    if ( v103 ) /*0x100846822*/
    {
      v37 = (_QWORD *)((char *)v102 + 8); /*0x100846824*/
      do /*0x100846837*/
      {
        v71 = *(v37 - 1); /*0x100846839*/
        if ( v71 ) /*0x100846840*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v37, v71, 1); /*0x10084684a*/
        v37 += 3; /*0x100846830*/
        v36 = (__int64 *)((char *)v36 - 1); /*0x100846834*/
      }
      while ( v36 ); /*0x100846837*/
    }
    _RAX = (unsigned __int64)v101; /*0x100846860*/
    __dst[0] = (void *)11; /*0x10084686c*/
    LOBYTE(v36) = 1; /*0x100846873*/
    LOBYTE(v37) = 1; /*0x100846876*/
    if ( v101 ) /*0x10084687c*/
    {
LABEL_23:
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24 * _RAX, 8) >> 32; /*0x100846291*/
      LODWORD(v37) = (_DWORD)v36; /*0x1008462a6*/
    }
LABEL_24:
    v38 = v105; /*0x1008462a9*/
    if ( v105 ) /*0x1008462b3*/
    {
      LODWORD(__src) = (_DWORD)v37; /*0x1008462b9*/
      v131.i64[0] = v30; /*0x1008462bd*/
      if ( v16 ) /*0x1008462c4*/
      {
        v39 = v104; /*0x1008462ca*/
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(v104)); /*0x1008462db*/
        v41 = v104 + 1; /*0x1008462de*/
        do /*0x100846301*/
        {
          if ( !(_WORD)_R12D ) /*0x100846307*/
          {
            do /*0x10084632c*/
            {
              v42 = _mm_movemask_epi8(_mm_load_si128(v41)); /*0x100846315*/
              v39 -= 40; /*0x10084631a*/
              ++v41; /*0x100846321*/
            }
            while ( v42 == 0xFFFF ); /*0x10084632c*/
            _R12D = ~v42; /*0x10084632e*/
          }
          __asm { tzcnt eax, r12d } /*0x100846331*/
          v43 = -5LL * _RAX; /*0x100846339*/
          v44 = *((_QWORD *)&v39[-2] + v43 - 1); /*0x10084633d*/
          if ( v44 ) /*0x100846345*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39[-2].i64[v43], v44, 1); /*0x100846354*/
          --v16; /*0x1008462f0*/
          _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x1008462f8*/
          _R12D &= _R12D - 1; /*0x1008462fb*/
        }
        while ( v16 ); /*0x100846301*/
      }
      v45 = (40LL * (_QWORD)v38 + 55) & 0xFFFFFFFFFFFFFFF0LL; /*0x10084636c*/
      v46 = (char *)v38 + v45; /*0x100846370*/
      v29 = v46 + 17 == nullptr; /*0x100846373*/
      v47 = v46 + 17; /*0x100846373*/
      v30 = v131.i64[0]; /*0x100846377*/
      LOBYTE(v37) = (_BYTE)__src; /*0x10084637b*/
      if ( !v29 ) /*0x10084637f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v104 - v45, v47, 16); /*0x100846393*/
    }
    if ( !(_BYTE)v37 ) /*0x10084639b*/
    {
      v6 = v114; /*0x100846923*/
      v114[11] = (__int64 *)v97; /*0x10084692a*/
      v6[10] = v96; /*0x100846935*/
      v6[9] = (__int64 *)v95; /*0x100846940*/
      v6[8] = (__int64 *)v94; /*0x10084694b*/
      v6[7] = (__int64 *)v93; /*0x100846956*/
      v6[6] = (__int64 *)v92; /*0x100846961*/
      v73 = v90; /*0x100846965*/
      v6[5] = (__int64 *)v91; /*0x100846973*/
      v6[4] = (__int64 *)v73; /*0x100846977*/
      v6[2] = (__int64 *)v30; /*0x10084697b*/
      v6[3] = (__int64 *)i; /*0x100846983*/
      *v6 = (__int64 *)__dst[0]; /*0x10084698e*/
      v6[1] = (__int64 *)v133; /*0x100846995*/
      v74 = v135; /*0x100846999*/
      v48 = __s2; /*0x10084699d*/
      goto LABEL_110; /*0x1008469a1*/
    }
    v48 = __s2; /*0x1008463a9*/
    v6 = v114; /*0x1008463ad*/
    if ( i == (const __m128i *)v132 && !memcmp((const void *)v30, __s2, v132) ) /*0x1008463c3*/
    {
      *v6 = (__int64 *)11; /*0x100846a48*/
      goto LABEL_108; /*0x100846a4f*/
    }
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v118, v113, v112); /*0x1008463de*/
    v49 = (__int64 *)v118; /*0x1008463e3*/
    v50 = v119; /*0x1008463ea*/
    v51 = (__int64 *)v120; /*0x1008463f1*/
    v52 = v121; /*0x1008463f8*/
    if ( v118 != (const __m128i *)11 ) /*0x100846403*/
    {
      v6[11] = (__int64 *)v129; /*0x1008469aa*/
      v6[10] = v128; /*0x1008469b2*/
      v6[9] = (__int64 *)v127; /*0x1008469ba*/
      v6[8] = (__int64 *)v126; /*0x1008469c5*/
      v6[7] = (__int64 *)v125; /*0x1008469d0*/
      v6[6] = (__int64 *)v124; /*0x1008469db*/
      v75 = v122; /*0x1008469df*/
      v6[5] = (__int64 *)v123; /*0x1008469ed*/
      v6[4] = (__int64 *)v75; /*0x1008469f1*/
      v6[1] = (__int64 *)v50; /*0x1008469f5*/
      v6[2] = v51; /*0x1008469f9*/
      v6[3] = (__int64 *)v52; /*0x1008469fd*/
      *v6 = v49; /*0x100846a01*/
      goto LABEL_108; /*0x100846a04*/
    }
    if ( v121 == (__int64 (__fastcall *)())v132 && !memcmp(v120, v48, v132) ) /*0x100846418*/
      break; /*0x100846418*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100846433*/
    {
      v101 = (const __m128i *)v89; /*0x100846440*/
      v102 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084644e*/
      v103 = &v86; /*0x10084645c*/
      v104 = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10084646a*/
      v105 = &unk_101674A80; /*0x100846478*/
      v106 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10084647f*/
      v124 = 2; /*0x100846486*/
      v125 = "codexmate_lib::core::codex_config"; /*0x100846498*/
      v126 = 33; /*0x10084649f*/
      v128 = (__int64 *)&unk_1017C5943; /*0x1008464b1*/
      v129 = &v101; /*0x1008464bc*/
      v118 = nullptr; /*0x1008464c0*/
      v119 = "codexmate_lib::core::codex_config"; /*0x1008464cb*/
      v120 = (void *)33; /*0x1008464d2*/
      v121 = nullptr; /*0x1008464dd*/
      v122 = "src/core/codex_config.rs"; /*0x1008464ef*/
      v123 = 24; /*0x1008464f6*/
      v127 = 0x1B00000001LL; /*0x10084650b*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v90, &v118); /*0x10084651d*/
    }
    if ( v50 ) /*0x100846525*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100846532*/
    if ( v133 ) /*0x10084653e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v133, 1); /*0x100846548*/
    v53 = v88; /*0x100846554*/
    if ( v135 ) /*0x10084655b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v135, 1); /*0x100846565*/
    if ( v87 != 3 ) /*0x100846572*/
    {
      v10 = v53; /*0x100846578*/
      if ( v53 <= 3 ) /*0x10084657f*/
        continue; /*0x10084657f*/
    }
    v118 = (const __m128i *)v89; /*0x100846a10*/
    v119 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100846a1e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v6 + 1, &unk_1017C58FB, &v118); /*0x100846a37*/
    *v6 = (__int64 *)10; /*0x100846a3c*/
    return v6; /*0x100846a43*/
  }
  v76 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v113, v112); /*0x100846a6f*/
  if ( v76 ) /*0x100846a77*/
  {
    v90 = v76; /*0x100846a7d*/
    v118 = (const __m128i *)v89; /*0x100846a8b*/
    v119 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100846a99*/
    v120 = &v90; /*0x100846aa7*/
    v121 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100846ab5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v101, &unk_1017C59A2, &v118); /*0x100846ad1*/
    v118 = v101; /*0x100846ae4*/
    v119 = (char *)v102; /*0x100846aeb*/
    v120 = v103; /*0x100846af9*/
    if ( (v90 & 3) == 1 ) /*0x100846b0f*/
    {
      v131.i64[0] = v30; /*0x100846b11*/
      v77 = v90 - 1; /*0x100846b15*/
      v78 = *(_QWORD *)(v90 - 1); /*0x100846b19*/
      v79 = *(_QWORD *)(v90 + 7); /*0x100846b1d*/
      if ( *(_QWORD *)v79 ) /*0x100846b21*/
        (*(void (__fastcall **)(__int64))v79)(v78); /*0x100846b2c*/
      v80 = *(_QWORD *)(v79 + 8); /*0x100846b2e*/
      if ( v80 ) /*0x100846b35*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v80, *(_QWORD *)(v79 + 16)); /*0x100846b3e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, 24, 8); /*0x100846b50*/
      v48 = __s2; /*0x100846b55*/
      v6 = v114; /*0x100846b59*/
      v30 = v131.i64[0]; /*0x100846b60*/
    }
    v6[3] = (__int64 *)v120; /*0x100846b6b*/
    v81 = (__int64 *)v118; /*0x100846b6f*/
    v6[2] = (__int64 *)v119; /*0x100846b7d*/
    v6[1] = v81; /*0x100846b81*/
    *v6 = (__int64 *)10; /*0x100846b8a*/
    if ( v50 ) /*0x100846b90*/
LABEL_107:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100846b92*/
  }
  else
  {
    *v6 = (__int64 *)11; /*0x100846beb*/
    if ( v50 ) /*0x100846bf1*/
      goto LABEL_107; /*0x100846bf1*/
  }
LABEL_108:
  v74 = v135; /*0x100846ba2*/
  if ( v133 ) /*0x100846bad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v133, 1); /*0x100846bb7*/
LABEL_110:
  if ( v74 ) /*0x100846bbf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v74, 1); /*0x100846bcc*/
  return v6; /*0x100846bd4*/
}