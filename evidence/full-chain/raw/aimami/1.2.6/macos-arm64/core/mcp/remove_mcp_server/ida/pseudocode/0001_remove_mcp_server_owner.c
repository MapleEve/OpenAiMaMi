// codexmate_lib::core::mcp::remove_mcp_server
// owner_ea: 0x1009f31d0, size: 0xcee
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// DESTRUCTIVE SIDE EFFECTS: atomic_write_config_file, remove_file_cleanup
// notes: Parses MCP doc, removes server entry, writes atomically with retry loop (max 3)

// 1.2.4→1.2.6 delta 新增函数: MCP 服务器移除核心实现。修改 codex_config.rs 配置文件,调用 parse_mcp_document、DirBuilder::_create、Path::parent。⚠ 持久化副作用: 修改配置文件。A-level owner for core::mcp::remove_mcp_server
_QWORD *__fastcall codexmate_lib::core::mcp::remove_mcp_server::h58b9ba98709bf2a1(
        _QWORD *a1,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5)
{
  _QWORD *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 (__fastcall *v12)(); // rdi
  void *v13; // rsi
  __int64 (__fastcall *v14)(); // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  const __m128i *v18; // rdx
  unsigned __int64 v19; // r14
  __m128i v20; // xmm1
  __int8 *v21; // r15
  char *v22; // rsi
  unsigned __int64 v23; // rax
  __m128i si128; // xmm2
  __int64 v26; // rbx
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r12
  __int64 (__fastcall *v30)(); // rbx
  __int64 *v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // rsi
  __int64 *v35; // r14
  _QWORD *v36; // r15
  void *v37; // rbx
  const __m128i *v38; // r14
  const __m128i *v40; // r15
  int v41; // r12d
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  char *v45; // rbx
  char *v46; // rbx
  void *v47; // r14
  _QWORD *v48; // rax
  __int64 (__fastcall *v49)(); // rbx
  void *v50; // r13
  __int64 (__fastcall *v51)(); // rcx
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r8
  const __m128i *v54; // rdi
  __int8 *v55; // r15
  unsigned __int64 v56; // rbx
  __int64 v57; // rcx
  unsigned __int64 v58; // r12
  _QWORD *v59; // r14
  __int64 v60; // rsi
  _QWORD *v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rsi
  const __m128i *v65; // r14
  _BYTE *v66; // rax
  _QWORD *v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rsi
  const char *v70; // rcx
  __int64 v71; // rax
  __int64 (__fastcall *v72)(); // rbx
  const char *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // r12
  __int64 v77; // r15
  __int64 v78; // rsi
  _QWORD *v79; // rax
  __int64 v81; // rsi
  const __m128i *v82; // rdx
  _QWORD v83[2]; // [rsp+8h] [rbp-1F8h] BYREF
  __int64 v84; // [rsp+18h] [rbp-1E8h] BYREF
  __int64 v85; // [rsp+20h] [rbp-1E0h]
  unsigned __int64 v86; // [rsp+28h] [rbp-1D8h]
  _QWORD v87[2]; // [rsp+30h] [rbp-1D0h] BYREF
  __int64 v88; // [rsp+40h] [rbp-1C0h] BYREF
  __int64 v89; // [rsp+48h] [rbp-1B8h]
  __int64 v90; // [rsp+50h] [rbp-1B0h]
  void *v91; // [rsp+58h] [rbp-1A8h]
  __int64 v92; // [rsp+60h] [rbp-1A0h]
  __int64 v93; // [rsp+68h] [rbp-198h]
  void *v94; // [rsp+70h] [rbp-190h]
  _QWORD *v95; // [rsp+78h] [rbp-188h]
  __int64 v96; // [rsp+80h] [rbp-180h] BYREF
  __int64 v97; // [rsp+88h] [rbp-178h]
  const __m128i *v98; // [rsp+90h] [rbp-170h]
  _QWORD *v99; // [rsp+98h] [rbp-168h] BYREF
  __int64 (__fastcall *v100)(); // [rsp+A0h] [rbp-160h]
  __int64 *v101; // [rsp+A8h] [rbp-158h]
  const __m128i *v102; // [rsp+B0h] [rbp-150h]
  void *v103; // [rsp+B8h] [rbp-148h]
  __int64 (__fastcall *v104)(); // [rsp+C0h] [rbp-140h]
  __int64 v105; // [rsp+C8h] [rbp-138h]
  char v106[16]; // [rsp+D0h] [rbp-130h] BYREF
  void *__s1; // [rsp+E0h] [rbp-120h]
  size_t __n; // [rsp+E8h] [rbp-118h]
  void *__dst[2]; // [rsp+F0h] [rbp-110h] BYREF
  size_t v110; // [rsp+108h] [rbp-F8h]
  void *v111; // [rsp+110h] [rbp-F0h]
  _QWORD *v112; // [rsp+118h] [rbp-E8h]
  __int64 (__fastcall *v113)(); // [rsp+120h] [rbp-E0h] BYREF
  __int64 (__fastcall *v114)(); // [rsp+128h] [rbp-D8h]
  _BYTE *v115; // [rsp+130h] [rbp-D0h]
  _QWORD *v116; // [rsp+138h] [rbp-C8h] BYREF
  __int64 (__fastcall *v117)(); // [rsp+140h] [rbp-C0h] BYREF
  void *v118; // [rsp+148h] [rbp-B8h]
  __int64 (__fastcall *v119)(); // [rsp+150h] [rbp-B0h]
  const char *v120; // [rsp+158h] [rbp-A8h]
  __int64 v121; // [rsp+160h] [rbp-A0h]
  __int64 v122; // [rsp+168h] [rbp-98h]
  void *v123; // [rsp+170h] [rbp-90h]
  __int64 v124; // [rsp+178h] [rbp-88h]
  __int64 v125; // [rsp+180h] [rbp-80h]
  void *v126; // [rsp+188h] [rbp-78h]
  _QWORD *v127; // [rsp+190h] [rbp-70h]
  void *__src; // [rsp+198h] [rbp-68h]
  __m128i v129; // [rsp+1A0h] [rbp-60h] BYREF
  size_t v130; // [rsp+1B0h] [rbp-50h]
  __int64 (__fastcall *v131)(); // [rsp+1B8h] [rbp-48h]
  const __m128i *i; // [rsp+1C0h] [rbp-40h]
  __int64 (__fastcall *v133)(); // [rsp+1C8h] [rbp-38h]
  void *__s2; // [rsp+1D0h] [rbp-30h]

  v6 = a1;
  __s1 = a4;
  v83[0] = a4;
  v83[1] = a5;
  v87[0] = "remove MCP server\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state";
  v87[1] = 17;
  v111 = a2;
  v110 = a3;
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3);
  if ( v7 )
  {
    LOWORD(v116) = 511;
    BYTE2(v116) = 1;
    v8 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v116, v7);
    if ( v8 )
    {
      *a1 = 2;
      a1[1] = v8;
      return v6;
    }
  }
  v9 = 1;
  v112 = a1;
  __n = a5;
  while ( 1 )
  {
    v10 = v9 + 1;
    if ( v9 == 3 )
      v10 = 3;
    v84 = v9;
    codexmate_lib::core::codex_config::read_text::hc09746386495d55f(&v116, v111, v110);
    v11 = v116;
    v12 = v117;
    v13 = v118;
    v14 = v119;
    if ( v116 != (_QWORD *)11 )
    {
      v6[11] = v127;
      v6[10] = v126;
      v6[9] = v125;
      v6[8] = v124;
      v6[7] = v123;
      v6[6] = v122;
      v70 = v120;
      v6[5] = v121;
      v6[4] = v70;
      v6[1] = v12;
      v6[2] = v13;
      v6[3] = v14;
      *v6 = v11;
      return v6;
    }
    v86 = v10;
    v85 = v9;
    v133 = v117;
    __s2 = v118;
    v130 = (size_t)v119;
    codexmate_lib::core::mcp::parse_mcp_document::h1c474a48a2d7b3cf(&v99);
    v15 = v105;
    if ( !v105 )
    {
LABEL_17:
      v113 = (__int64 (__fastcall *)())v83;
      v114 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v117, &unk_1018697FB, &v113);
      v131 = v117;
      v29 = (__int64)v118;
      i = (const __m128i *)v119;
      v88 = (__int64)v120;
      v89 = v121;
      v90 = v122;
      v91 = v123;
      v92 = v124;
      v93 = v125;
      v94 = v126;
      v95 = v127;
      v30 = v100;
      v31 = v101;
      if ( v101 )
      {
        v32 = (_QWORD *)((char *)v100 + 8);
        do
        {
          v33 = *(v32 - 1);
          if ( v33 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1);
          v32 += 3;
          v31 = (__int64 *)((char *)v31 - 1);
        }
        while ( v31 );
      }
      _RAX = (unsigned __int64)v99;
      __dst[0] = (void *)8;
      LODWORD(v35) = 0;
      LODWORD(v36) = 0;
      if ( v99 )
        goto LABEL_23;
      goto LABEL_24;
    }
    v16 = core::hash::BuildHasher::hash_one::h9d6ec3ed5b7c6973(v106, __s1, __n);
    _RCX = v16 >> 57;
    v18 = v102;
    v19 = (unsigned __int64)v103;
    v20 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v16 >> 57), (__m128i)0LL);
    v21 = &v102[-3].i8[8];
    v22 = nullptr;
    for ( i = v102; ; v18 = i )
    {
      v23 = v19 & v16;
      si128 = _mm_loadu_si128((const __m128i *)((char *)v18 + v23));
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(si128, v20));
      if ( _R12D )
        break;
LABEL_15:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(si128, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_17;
      v16 = (unsigned __int64)&v22[v23 + 16];
      v22 += 16;
    }
    v131 = (__int64 (__fastcall *)())v23;
    v129 = v20;
    __src = v22;
    *(__m128i *)__dst = si128;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r12d }
      _RCX = -(__int64)(v19 & (v23 + _RCX));
      v26 = 5 * _RCX;
      if ( __n == *(_QWORD *)&v21[40 * _RCX + 16] && !memcmp(__s1, *(const void **)&v21[40 * _RCX + 8], __n) )
        break;
      v27 = _R12D - 1;
      LOWORD(v27) = _R12D & (_R12D - 1);
      v28 = (_WORD)v27 == 0;
      _R12D = v27;
      v23 = (unsigned __int64)v131;
      v20 = _mm_load_si128(&v129);
      v22 = (char *)__src;
      si128 = _mm_load_si128((const __m128i *)__dst);
      if ( v28 )
        goto LABEL_15;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5fa6951d074a7f81(&v96, &v99);
    v53 = i->u64[v26 - 1];
    v54 = v98;
    v55 = &v98->i8[-v53];
    if ( (unsigned __int64)v98 < v53 )
    {
      v81 = i->i64[v26 - 1];
      v82 = v98;
      v56 = 0;
      goto LABEL_117;
    }
    v56 = i[-1].u64[v26];
    if ( v56 > v53 )
    {
      v81 = v53;
      v82 = v98;
LABEL_117:
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v56, v81, v82, &anon_0ede19ea8a96123e8c26ebf62996dbad_463);
    }
    v98 = (const __m128i *)v56;
    v57 = 24 * v56;
    v129.i64[0] = v97;
    if ( v53 == v56 )
    {
      if ( v54 != (const __m128i *)v56 )
        goto LABEL_63;
    }
    else
    {
      v131 = (__int64 (__fastcall *)())v53;
      i = v54;
      __dst[0] = (void *)(v97 + v57);
      __src = (void *)(v97 + 24 * v53);
      v58 = (24 * v53 - 24 * v56) / 0x18;
      v59 = (_QWORD *)(v97 + v57 + 8);
      do
      {
        v60 = *(v59 - 1);
        if ( v60 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v59, v60, 1);
        v59 += 3;
        --v58;
      }
      while ( v58 );
      if ( i != (const __m128i *)v131 )
      {
        memmove(__dst[0], __src, 24LL * (_QWORD)v55);
LABEL_63:
        v56 += (unsigned __int64)v55;
        v98 = (const __m128i *)v56;
      }
    }
    v36 = (_QWORD *)v129.i64[0];
    if ( v56 >= 2 )
    {
      v61 = (_QWORD *)(v129.i64[0] + 24 * v56 - 8);
      while ( 1 )
      {
        core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(*(v61 - 1), *v61);
        if ( v62 )
          break;
        core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(*(v61 - 4), *(v61 - 3));
        if ( v63 )
          break;
        v64 = *(v61 - 2);
        if ( 2 * v64 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v61 - 1), v64, 1);
        --v56;
        v61 -= 3;
        if ( v56 <= 1 )
        {
          v56 = 1;
          break;
        }
      }
      v98 = (const __m128i *)v56;
    }
    alloc::str::join_generic_copy::h02d08564f831751b(
      &v116,
      v36,
      v56,
      "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
      1);
    v65 = (const __m128i *)v118;
    v115 = v118;
    v29 = (__int64)v117;
    v114 = v117;
    v113 = (__int64 (__fastcall *)())v116;
    if ( !v118 )
    {
      i = nullptr;
      v131 = v113;
      if ( !v56 )
        goto LABEL_85;
LABEL_81:
      v67 = v36 + 1;
      do
      {
        v68 = *(v67 - 1);
        if ( v68 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v67, v68, 1);
        v67 += 3;
        --v56;
      }
      while ( v56 );
      goto LABEL_85;
    }
    if ( *((_BYTE *)v118 + (_QWORD)v117 - 1) != 10 )
    {
      v66 = v118;
      if ( v113 == v118 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95(&v113, v118, 1, 1, 1);
        v29 = (__int64)v114;
        v66 = v115;
      }
      v66[v29] = 10;
      v65 = (const __m128i *)((char *)v65 + 1);
    }
    i = v65;
    v131 = v113;
    if ( v56 )
      goto LABEL_81;
LABEL_85:
    if ( v96 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24 * v96, 8);
    v30 = v100;
    v35 = v101;
    if ( v101 )
    {
      v36 = (_QWORD *)((char *)v100 + 8);
      do
      {
        v69 = *(v36 - 1);
        if ( v69 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v69, 1);
        v36 += 3;
        v35 = (__int64 *)((char *)v35 - 1);
      }
      while ( v35 );
    }
    _RAX = (unsigned __int64)v99;
    __dst[0] = (void *)11;
    LOBYTE(v35) = 1;
    LOBYTE(v36) = 1;
    if ( v99 )
    {
LABEL_23:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24 * _RAX, 8);
      LODWORD(v36) = (_DWORD)v35;
    }
LABEL_24:
    v37 = v103;
    if ( v103 )
    {
      LODWORD(__src) = (_DWORD)v36;
      v129.i64[0] = v29;
      if ( v15 )
      {
        v38 = v102;
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(v102));
        v40 = v102 + 1;
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v41 = _mm_movemask_epi8(_mm_load_si128(v40));
              v38 -= 40;
              ++v40;
            }
            while ( v41 == 0xFFFF );
            _R12D = ~v41;
          }
          __asm { tzcnt   eax, r12d }
          v42 = -5LL * _RAX;
          v43 = *((_QWORD *)&v38[-2] + v42 - 1);
          if ( v43 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[-2].i64[v42], v43, 1);
          --v15;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v15 );
      }
      v44 = (40LL * (_QWORD)v37 + 55) & 0xFFFFFFFFFFFFFFF0LL;
      v45 = (char *)v37 + v44;
      v28 = v45 + 17 == nullptr;
      v46 = v45 + 17;
      v29 = v129.i64[0];
      LOBYTE(v36) = (_BYTE)__src;
      if ( !v28 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v102 - v44, v46, 16);
    }
    if ( !(_BYTE)v36 )
    {
      v6 = v112;
      v112[11] = v95;
      v6[10] = v94;
      v6[9] = v93;
      v6[8] = v92;
      v6[7] = v91;
      v6[6] = v90;
      v71 = v88;
      v6[5] = v89;
      v6[4] = v71;
      v6[2] = v29;
      v6[3] = i;
      *v6 = __dst[0];
      v6[1] = v131;
      v72 = v133;
      v47 = __s2;
      goto LABEL_110;
    }
    v47 = __s2;
    v6 = v112;
    if ( i == (const __m128i *)v130 && !memcmp((const void *)v29, __s2, v130) )
    {
      *v6 = 11;
      goto LABEL_108;
    }
    codexmate_lib::core::codex_config::read_text::hc09746386495d55f(&v116, v111, v110);
    v48 = v116;
    v49 = v117;
    v50 = v118;
    v51 = v119;
    if ( v116 != (_QWORD *)11 )
    {
      v6[11] = v127;
      v6[10] = v126;
      v6[9] = v125;
      v6[8] = v124;
      v6[7] = v123;
      v6[6] = v122;
      v73 = v120;
      v6[5] = v121;
      v6[4] = v73;
      v6[1] = v49;
      v6[2] = v50;
      v6[3] = v51;
      *v6 = v48;
      goto LABEL_108;
    }
    if ( v119 == (__int64 (__fastcall *)())v130 && !memcmp(v118, v47, v130) )
      break;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v99 = v87;
      v100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      v101 = &v84;
      v102 = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v103 = &unk_1016FB738;
      v104 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v122 = 2;
      v123 = &unk_1016FB8A7;
      v124 = 33;
      v126 = &unk_101869648;
      v127 = &v99;
      v116 = nullptr;
      v117 = (__int64 (__fastcall *)())&unk_1016FB8A7;
      v118 = (void *)33;
      v119 = nullptr;
      v120 = "src/core/codex_config.rs";
      v121 = 24;
      v125 = 0x1B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v88, &v116);
    }
    if ( v49 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1);
    if ( v131 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v131, 1);
    v52 = v86;
    if ( v133 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v133, 1);
    if ( v85 != 3 )
    {
      v9 = v52;
      if ( v52 <= 3 )
        continue;
    }
    v116 = v87;
    v117 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v6 + 1, &unk_101869600, &v116);
    *v6 = 10;
    return v6;
  }
  v74 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hf39edbc2f11d2716(
          v111,
          v110,
          v29,
          (__int64)i,
          1);
  if ( v74 )
  {
    v88 = v74;
    v116 = v87;
    v117 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    v118 = &v88;
    v119 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v99, &unk_1018696A7, &v116);
    v116 = v99;
    v117 = v100;
    v118 = v101;
    if ( (v88 & 3) == 1 )
    {
      v129.i64[0] = v29;
      v75 = v88 - 1;
      v76 = *(_QWORD *)(v88 - 1);
      v77 = *(_QWORD *)(v88 + 7);
      if ( *(_QWORD *)v77 )
        (*(void (__fastcall **)(__int64))v77)(v76);
      v78 = *(_QWORD *)(v77 + 8);
      if ( v78 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v78, *(_QWORD *)(v77 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, 24, 8);
      v47 = __s2;
      v6 = v112;
      v29 = v129.i64[0];
    }
    v6[3] = v118;
    v79 = v116;
    v6[2] = v117;
    v6[1] = v79;
    *v6 = 10;
    if ( v49 )
LABEL_107:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1);
  }
  else
  {
    *v6 = 11;
    if ( v49 )
      goto LABEL_107;
  }
LABEL_108:
  v72 = v133;
  if ( v131 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v131, 1);
LABEL_110:
  if ( v72 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v72, 1);
  return v6;
}

