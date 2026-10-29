// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/upstream_url
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::upstream_url::join_upstream_url_with_query::h17a62e856f591cee @ 0x100855470 size=3488 lines=723 =====
_QWORD *__fastcall codexmate_lib::core::relay::upstream_url::join_upstream_url_with_query::h17a62e856f591cee(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        size_t a6,
        __int64 a7)
{
  _QWORD *v10; // r15
  const __m128i *v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rdx
  __int64 (__fastcall *v15)(); // rcx
  __int64 v16; // rdx
  int v17; // esi
  char v18; // di
  char v19; // r8
  char v20; // r9
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edi
  size_t v24; // r12
  void *v25; // rbx
  __int64 v26; // r14
  const __m128i *v27; // rax
  const __m128i *v28; // rsi
  const __m128i *v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  void *v33; // rsi
  size_t v34; // rdx
  unsigned __int8 *v35; // rcx
  unsigned __int8 *v36; // rdx
  int v37; // eax
  int v38; // esi
  int v39; // r8d
  int v40; // edi
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r12
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // r12
  const __m128i **i; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r13
  const __m128i *v65; // rsi
  unsigned __int64 v66; // rcx
  __m128i v67; // xmm1
  __int8 *v68; // r8
  const __m128i **v69; // r12
  size_t v70; // r14
  unsigned __int64 v71; // r13
  __m128i v72; // xmm2
  __int64 v74; // rax
  __int8 *v75; // r15
  int v76; // eax
  char v77; // r15
  void *v78; // rax
  void *v79; // r14
  __int64 v80; // rbx
  const __m128i *v81; // r15
  const __m128i *v83; // r12
  int v84; // eax
  __int64 v86; // rax
  __int64 v87; // rsi
  const __m128i *v88; // r14
  void *v89; // r15
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  void *v93; // r14
  __int64 v94; // rbx
  const __m128i *v95; // r15
  const __m128i *v97; // r12
  int v98; // eax
  __int64 v100; // rax
  __int64 v101; // rsi
  unsigned __int64 v102; // rax
  __int64 v103; // r14
  const __m128i *v104; // rax
  unsigned __int64 v106; // rax
  char *v107; // r14
  char *v108; // r14
  __m128i v109; // [rsp+0h] [rbp-230h] BYREF
  __m128i v110; // [rsp+10h] [rbp-220h] BYREF
  _QWORD v111[2]; // [rsp+28h] [rbp-208h] BYREF
  _QWORD v112[2]; // [rsp+38h] [rbp-1F8h] BYREF
  _QWORD v113[2]; // [rsp+48h] [rbp-1E8h] BYREF
  unsigned __int64 v114; // [rsp+58h] [rbp-1D8h]
  unsigned __int64 v115; // [rsp+60h] [rbp-1D0h]
  const __m128i *v116; // [rsp+68h] [rbp-1C8h]
  const __m128i **v117; // [rsp+70h] [rbp-1C0h]
  const __m128i *v118; // [rsp+78h] [rbp-1B8h] BYREF
  const __m128i *v119; // [rsp+80h] [rbp-1B0h]
  void *v120; // [rsp+88h] [rbp-1A8h]
  size_t v121; // [rsp+90h] [rbp-1A0h]
  _QWORD **v122; // [rsp+98h] [rbp-198h]
  __int64 (__fastcall *v123)(); // [rsp+A0h] [rbp-190h]
  __int64 v124; // [rsp+A8h] [rbp-188h]
  __int64 v125; // [rsp+B0h] [rbp-180h]
  __int64 v126; // [rsp+B8h] [rbp-178h]
  __int64 v127; // [rsp+C0h] [rbp-170h]
  __int64 v128; // [rsp+C8h] [rbp-168h]
  const __m128i *v129; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-158h]
  __int64 *v131; // [rsp+E0h] [rbp-150h]
  void *__src; // [rsp+E8h] [rbp-148h] BYREF
  size_t __n; // [rsp+F0h] [rbp-140h]
  __int64 v134; // [rsp+F8h] [rbp-138h] BYREF
  size_t v135; // [rsp+100h] [rbp-130h]
  const __m128i **v136; // [rsp+108h] [rbp-128h]
  const __m128i *v137; // [rsp+110h] [rbp-120h]
  void *v138; // [rsp+118h] [rbp-118h]
  size_t v139; // [rsp+120h] [rbp-110h]
  __int64 v140; // [rsp+128h] [rbp-108h]
  _QWORD v141[2]; // [rsp+130h] [rbp-100h] BYREF
  __int64 *v142; // [rsp+140h] [rbp-F0h] BYREF
  __int64 (__fastcall *v143)(); // [rsp+148h] [rbp-E8h]
  void *v144; // [rsp+150h] [rbp-E0h]
  _QWORD *v145; // [rsp+158h] [rbp-D8h]
  const __m128i *v146; // [rsp+160h] [rbp-D0h] BYREF
  __int64 (__fastcall *v147)(); // [rsp+168h] [rbp-C8h]
  __int64 *v148; // [rsp+170h] [rbp-C0h]
  size_t v149; // [rsp+178h] [rbp-B8h]
  _QWORD **v150; // [rsp+180h] [rbp-B0h]
  __int64 (__fastcall *v151)(); // [rsp+188h] [rbp-A8h]
  __int64 v152; // [rsp+190h] [rbp-A0h]
  __int64 v153; // [rsp+198h] [rbp-98h]
  __int64 v154; // [rsp+1A0h] [rbp-90h]
  __int64 v155; // [rsp+1A8h] [rbp-88h]
  __int64 v156; // [rsp+1B0h] [rbp-80h]
  size_t v157; // [rsp+1B8h] [rbp-78h]
  const __m128i *v158; // [rsp+1C0h] [rbp-70h]
  const __m128i *v159; // [rsp+1C8h] [rbp-68h]
  const __m128i *p_src; // [rsp+1D0h] [rbp-60h] BYREF
  void *__s1; // [rsp+1D8h] [rbp-58h]
  size_t v162; // [rsp+1E0h] [rbp-50h]
  __int64 v163; // [rsp+1E8h] [rbp-48h]
  __int64 v164; // [rsp+1F0h] [rbp-40h]
  __int64 v165; // [rsp+1F8h] [rbp-38h]
  __int64 (__fastcall *v166)(); // [rsp+200h] [rbp-30h]

  v10 = a1;
  __src = a4;
  __n = a5;
  codexmate_lib::core::relay::upstream_url::parse_base_url::h4b10b32762ec3164(&v146);
  p_src = (const __m128i *)v147;
  __s1 = v148;
  v162 = v149;
  if ( __OFSUB__(-(__int64)v146, 1) )
  {
    a1[3] = v162;
    v11 = p_src;
    a1[2] = __s1;
    a1[1] = v11;
    *a1 = 1;
    return v10;
  }
  v128 = v156;
  v127 = v155;
  v126 = v154;
  v125 = v153;
  v124 = v152;
  v123 = v151;
  v122 = v150;
  v119 = p_src;
  v120 = __s1;
  v121 = v162;
  v118 = v146;
  codexmate_lib::core::relay::upstream_url::validate_endpoint_path::h4a409d3bd5ba44cf(&v146, a4, a5);
  if ( v146 == (const __m128i *)0x8000000000000000LL )
  {
    v12 = (unsigned __int64)&v118;
    v13 = url::Url::path::hdacd300d547f5011(&v118);
    while ( 1 )
    {
      v15 = v14;
      if ( !v14 )
        break;
      v16 = (__int64)v14 + v13;
      v17 = *((char *)v15 + v13 - 1);
      if ( v17 >= 0 )
      {
        v14 = (__int64 (__fastcall *)())((char *)v15 - 1);
        if ( v17 != 47 )
          break;
      }
      else
      {
        v18 = *(_BYTE *)(v16 - 2);
        if ( v18 >= -64 )
        {
          v21 = v16 - 2;
          v23 = v18 & 0x1F;
        }
        else
        {
          v19 = *(_BYTE *)(v16 - 3);
          if ( v19 >= -64 )
          {
            v21 = v16 - 3;
            v22 = v19 & 0xF;
          }
          else
          {
            v20 = *(_BYTE *)(v16 - 4);
            v21 = v16 - 4;
            v22 = ((v20 & 7) << 6) | v19 & 0x3F;
          }
          v23 = (v22 << 6) | v18 & 0x3F;
        }
        v12 = (unsigned int)(v23 << 6);
        v14 = (__int64 (__fastcall *)())(v21 - v13);
        if ( ((unsigned int)v12 | v17 & 0x3F) != 0x2F )
          break;
      }
    }
    v142 = (__int64 *)v13;
    v143 = v15;
    v24 = __n;
    if ( __n && (v25 = __src, *(_BYTE *)__src == 47) )
    {
      if ( (__n & 0x8000000000000000LL) != 0LL )
      {
        v26 = 0;
        goto LABEL_19;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12);
      v26 = 1;
      v41 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1);
      if ( !v41 )
LABEL_19:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v24);
      v166 = v41;
      memcpy(v41, v25, v24);
      v158 = (const __m128i *)v24;
    }
    else
    {
      p_src = (const __m128i *)&__src;
      __s1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, &unk_101A3A18C, &p_src);
      v158 = v146;
      v166 = v147;
      v24 = (size_t)v148;
    }
    v146 = nullptr;
    v147 = v143;
    v148 = v142;
    v149 = (size_t)v143;
    v150 = nullptr;
    v151 = v143;
    v152 = 0x2F0000002FLL;
    LOBYTE(v153) = 1;
    LOWORD(v154) = 1;
    v30 = (_BYTE *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h73b1c1df7bbe07e8(&v146);
    if ( v30 == nullptr || v31 == 0 || *v30 != 118 || v31 == 1 )
    {
LABEL_26:
      v32 = (__int64)v166;
      v134 = (__int64)v166;
      v135 = v24;
      if ( v143 )
      {
LABEL_27:
        v146 = (const __m128i *)&v142;
        v147 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
        v148 = &v134;
        v149 = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&p_src, &anon_5fc5982723cbea77922f0a3a965b6f67_54, &v146);
        v159 = p_src;
        v33 = __s1;
        v34 = v162;
        goto LABEL_53;
      }
      goto LABEL_47;
    }
    v35 = v30 + 1;
    v36 = &v30[v31];
    while ( v35 != v36 )
    {
      v37 = *v35;
      if ( (v37 & 0x80u) == 0 )
      {
        ++v35;
      }
      else
      {
        v38 = v37 & 0x1F;
        v39 = v35[1] & 0x3F;
        if ( (unsigned __int8)v37 <= 0xDFu )
        {
          v35 += 2;
          v37 = v39 | (v38 << 6);
        }
        else
        {
          v40 = (v39 << 6) | v35[2] & 0x3F;
          if ( (unsigned __int8)v37 < 0xF0u )
          {
            v35 += 3;
            v37 = (v38 << 12) | v40;
          }
          else
          {
            v37 = ((v37 & 7) << 18) | (v40 << 6) | v35[3] & 0x3F;
            if ( v37 == 1114112 )
              break;
            v35 += 4;
          }
        }
      }
      if ( (unsigned int)(v37 - 58) < 0xFFFFFFF6 )
        goto LABEL_26;
    }
    if ( v24 == 3 )
    {
      v42 = (__int64)v166;
      if ( !(*(_WORD *)v166 ^ 0x762F | *((unsigned __int8 *)v166 + 2) ^ 0x31) )
      {
LABEL_122:
        if ( *(_WORD *)v42 ^ 0x762F | *(unsigned __int8 *)(v42 + 2) ^ 0x31 )
        {
          v134 = 1;
          v135 = 0;
          if ( v143 )
            goto LABEL_27;
LABEL_52:
          p_src = (const __m128i *)&v134;
          __s1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, &unk_101A3A190, &p_src);
          v159 = v146;
          v33 = v147;
          v34 = (size_t)v148;
LABEL_53:
          v144 = v33;
          url::Url::set_path::h1ec779af55e04b0d(&v118, v33, v34);
          if ( a6 != 0 && a7 != 0 )
          {
            v112[0] = a6;
            v112[1] = a7;
            v43 = url::Url::query::h1af7b45471000a3f(&v118);
            LOBYTE(v33) = v43 == 0 || v44 == 0;
            if ( (_BYTE)v33 )
            {
              LOBYTE(v45) = v43 == 0;
              url::Url::set_query::h59fc2cc84050b0ef(
                &v118,
                a6,
                a7,
                v45,
                v46,
                v47,
                v109.i64[0],
                v109.i64[1],
                v110.i64[0],
                v110.i64[1]);
            }
            else
            {
              v111[0] = v43;
              v111[1] = v44;
              v48 = url::Url::query::h1af7b45471000a3f(&v118);
              v50 = v49;
              std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
              v54 = v51;
              v55 = *(_BYTE *)(v51 + 16) == 1;
              v157 = a6;
              if ( v55 )
              {
                v56 = *(_QWORD *)v51;
                v57 = *(_QWORD *)(v54 + 8);
              }
              else
              {
                v56 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                        &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                        v33,
                        v52,
                        v53);
                *(_QWORD *)v54 = v56;
                *(_QWORD *)(v54 + 8) = v57;
                *(_BYTE *)(v54 + 16) = 1;
              }
              v145 = v10;
              if ( !v48 )
                v50 = 0;
              *(_QWORD *)v54 = v56 + 1;
              v58 = 1;
              if ( v48 )
                v58 = v48;
              v163 = 0;
              v162 = 0;
              __s1 = nullptr;
              p_src = (const __m128i *)&xmmword_10182BC00;
              v164 = v56;
              v165 = v57;
              v113[0] = v58;
              v113[1] = v50;
              _$LT$form_urlencoded..Parse$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f4a03a90f1739ce(
                &v146,
                v113);
              v59 = 0x8000000000000001LL;
              while ( v146 != (const __m128i *)0x8000000000000001LL )
              {
                if ( 2 * v149 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, v149, 1);
                v131 = v148;
                v130 = (__int64)v147;
                v129 = v146;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h02d0da3861980a5e(&p_src, &v129);
                _$LT$form_urlencoded..Parse$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f4a03a90f1739ce(
                  &v146,
                  v113);
              }
              v137 = p_src;
              v138 = __s1;
              v139 = v162;
              v140 = v163;
              v141[0] = v164;
              v141[1] = v165;
              v129 = (const __m128i *)v157;
              v130 = a7;
              v114 = 0x8000000000000001LL;
              while ( 1 )
              {
                i = &v146;
                _$LT$form_urlencoded..Parse$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f4a03a90f1739ce(
                  &v146,
                  &v129);
                if ( v146 == (const __m128i *)v59 )
                  break;
                v162 = (size_t)v148;
                __s1 = v147;
                p_src = v146;
                v136 = (const __m128i **)v150;
                v157 = v149;
                if ( v140 )
                {
                  v63 = core::hash::BuildHasher::hash_one::hfbce03ead8a292b6(
                          v141,
                          &p_src,
                          v150,
                          v147,
                          v61,
                          v62,
                          v109.i64[0],
                          v109.i64[1],
                          v110.i64[0],
                          v110.i64[1]);
                  _RAX = v63 >> 57;
                  v65 = v137;
                  v66 = (unsigned __int64)v138;
                  v67 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v63 >> 57), (__m128i)0LL);
                  v68 = &v137[-2].i8[8];
                  v69 = (const __m128i **)__s1;
                  v70 = v162;
                  for ( i = nullptr; ; i += 2 )
                  {
                    v71 = v66 & v63;
                    v72 = _mm_loadu_si128((const __m128i *)((char *)v65 + v71));
                    _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v67));
                    if ( _EBX )
                      break;
LABEL_77:
                    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL));
                    if ( (_DWORD)_RAX )
                      goto LABEL_79;
                    v63 = (unsigned __int64)i + v71 + 16;
                  }
                  v115 = v66;
                  v109 = v67;
                  v116 = v65;
                  v117 = i;
                  v110 = v72;
                  while ( 1 )
                  {
                    __asm { tzcnt   eax, ebx }
                    v74 = -3LL * (v66 & (v71 + _RAX));
                    if ( v70 == *(_QWORD *)&v68[8 * v74 + 16] )
                    {
                      i = v69;
                      v75 = v68;
                      v76 = memcmp(v69, *(const void **)&v68[8 * v74 + 8], v70);
                      v68 = v75;
                      v77 = 1;
                      if ( !v76 )
                        break;
                    }
                    _RAX = (unsigned int)(_EBX - 1);
                    LOWORD(_RAX) = _EBX & (_EBX - 1);
                    _EBX = _RAX;
                    v66 = v115;
                    v67 = _mm_load_si128(&v109);
                    v65 = v116;
                    i = v117;
                    v72 = _mm_load_si128(&v110);
                    if ( !(_WORD)_RAX )
                      goto LABEL_77;
                  }
                }
                else
                {
LABEL_79:
                  v77 = 0;
                }
                if ( p_src != (const __m128i *)0x8000000000000000LL && p_src )
                {
                  i = (const __m128i **)__s1;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, p_src, 1);
                }
                v59 = v114;
                if ( 2 * v157 )
                {
                  i = v136;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v157, 1);
                  if ( v77 )
                  {
LABEL_84:
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(i);
                    v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1);
                    v10 = v145;
                    if ( !v78 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54);
                    qmemcpy(v78, "relay request query conflicts with configured Base URL", 54);
                    v10[1] = 54;
                    v10[2] = v78;
                    v10[3] = 54;
                    *v10 = 1;
                    v79 = v138;
                    if ( v138 )
                    {
                      v80 = v140;
                      if ( v140 )
                      {
                        v81 = v137;
                        _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v137));
                        v83 = v137 + 1;
                        do
                        {
                          if ( !(_WORD)_RAX )
                          {
                            do
                            {
                              v84 = _mm_movemask_epi8(_mm_load_si128(v83));
                              v81 -= 24;
                              ++v83;
                            }
                            while ( v84 == 0xFFFF );
                            _RAX = (unsigned int)~v84;
                          }
                          _R13D = _RAX;
                          __asm { tzcnt   eax, r13d }
                          v86 = -3 * _RAX;
                          v87 = *((_QWORD *)&v81[-1] + v86 - 1);
                          if ( v87 != 0x8000000000000000LL && v87 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81[-1].i64[v86], v87, 1);
                          _RAX = _R13D & (unsigned int)(_R13D - 1);
                          --v80;
                        }
                        while ( v80 );
                      }
                      v106 = (24LL * (_QWORD)v79 + 39) & 0xFFFFFFFFFFFFFFF0LL;
                      v107 = (char *)v79 + v106;
                      v55 = v107 + 17 == nullptr;
                      v108 = v107 + 17;
                      v10 = v145;
                      if ( !v55 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v137 - v106, v108, 16);
                    }
                    if ( v159 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v159, 1);
                    if ( v158 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v158, 1);
                    goto LABEL_21;
                  }
                }
                else if ( v77 )
                {
                  goto LABEL_84;
                }
              }
              v146 = (const __m128i *)v111;
              v147 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
              v148 = v112;
              v149 = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&p_src, &unk_101A3A196, &v146);
              v88 = p_src;
              v89 = __s1;
              url::Url::set_query::h59fc2cc84050b0ef(
                &v118,
                __s1,
                v162,
                v90,
                v91,
                v92,
                v109.i64[0],
                v109.i64[1],
                v110.i64[0],
                v110.i64[1]);
              if ( v88 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v88, 1);
              v93 = v138;
              if ( v138 )
              {
                v94 = v140;
                if ( v140 )
                {
                  v95 = v137;
                  _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v137));
                  v97 = v137 + 1;
                  do
                  {
                    if ( !(_WORD)_RAX )
                    {
                      do
                      {
                        v98 = _mm_movemask_epi8(_mm_load_si128(v97));
                        v95 -= 24;
                        ++v97;
                      }
                      while ( v98 == 0xFFFF );
                      _RAX = (unsigned int)~v98;
                    }
                    _R13D = _RAX;
                    __asm { tzcnt   eax, r13d }
                    v100 = -3 * _RAX;
                    v101 = *((_QWORD *)&v95[-1] + v100 - 1);
                    if ( v101 != 0x8000000000000000LL && v101 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[-1].i64[v100], v101, 1);
                    _RAX = _R13D & (unsigned int)(_R13D - 1);
                    --v94;
                  }
                  while ( v94 );
                }
                v102 = (24LL * (_QWORD)v93 + 39) & 0xFFFFFFFFFFFFFFF0LL;
                v103 = (__int64)v93 + v102 + 17;
                if ( v103 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v137 - v102, v103, 16);
              }
              v10 = v145;
            }
          }
          v10[3] = v120;
          v104 = v118;
          v10[2] = v119;
          v10[1] = v104;
          *v10 = 0;
          if ( v159 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v159, 1);
          v28 = v158;
          if ( v158 )
          {
            v29 = (const __m128i *)v166;
            goto LABEL_114;
          }
          return v10;
        }
        v24 -= 3LL;
        v32 = v42 + 3;
        v134 = v42 + 3;
        v135 = v24;
        if ( v143 )
          goto LABEL_27;
LABEL_47:
        if ( v24 == 3 )
        {
          if ( !(*(_WORD *)v32 ^ 0x762F | *(unsigned __int8 *)(v32 + 2) ^ 0x31) )
            goto LABEL_27;
        }
        else if ( v24 > 3 && *(_DWORD *)v32 == 791770671 )
        {
          goto LABEL_27;
        }
        goto LABEL_52;
      }
    }
    else
    {
      v42 = (__int64)v166;
      if ( v24 > 3 && *(_DWORD *)v166 == 791770671 )
        goto LABEL_122;
    }
    v32 = v42;
    v134 = v42;
    v135 = v24;
    if ( v143 )
      goto LABEL_27;
    goto LABEL_47;
  }
  a1[3] = v148;
  v27 = v146;
  a1[2] = v147;
  a1[1] = v27;
  *a1 = 1;
LABEL_21:
  v28 = v118;
  if ( v118 )
  {
    v29 = v119;
LABEL_114:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1);
  }
  return v10;
}

// ===== codexmate_lib::core::relay::upstream_url::parse_base_url::h4b10b32762ec3164 @ 0x1008546b0 size=1325 lines=206 =====
_QWORD *__fastcall codexmate_lib::core::relay::upstream_url::parse_base_url::h4b10b32762ec3164(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // r14
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *v10; // rax
  char *v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  char **v14; // r8
  unsigned __int64 v15; // rdx
  const char *v16; // rsi
  __int64 v17; // r12
  char *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-138h] BYREF
  void *v24; // [rsp+10h] [rbp-130h]
  unsigned __int64 v25; // [rsp+18h] [rbp-128h]
  __int64 v26; // [rsp+20h] [rbp-120h]
  __int64 v27; // [rsp+28h] [rbp-118h]
  __int64 v28; // [rsp+30h] [rbp-110h]
  __int64 v29; // [rsp+38h] [rbp-108h]
  __int64 v30; // [rsp+40h] [rbp-100h]
  __int64 v31; // [rsp+48h] [rbp-F8h]
  __int64 v32; // [rsp+50h] [rbp-F0h]
  __int64 v33; // [rsp+58h] [rbp-E8h]
  void *v34; // [rsp+60h] [rbp-E0h]
  unsigned __int64 v35; // [rsp+68h] [rbp-D8h]
  __int64 v36; // [rsp+70h] [rbp-D0h]
  _QWORD v37[5]; // [rsp+78h] [rbp-C8h] BYREF
  _QWORD v38[11]; // [rsp+A0h] [rbp-A0h] BYREF
  void *__s1; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+100h] [rbp-40h]
  __int64 v41; // [rsp+108h] [rbp-38h]
  char v42; // [rsp+117h] [rbp-29h] BYREF

  v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(a2, a3);
  if ( v5 )
  {
    v37[4] = 0;
    v37[0] = 0;
    v37[2] = 0;
    v6 = &v23;
    url::ParseOptions::parse::h7da66aa6bebaf5b6(&v23, v37, v4, v5);
    v7 = v23;
    if ( __OFSUB__(-v23, 1) )
    {
      v42 = (char)v24;
      v37[0] = &v42;
      v37[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_101A3A16C, v37);
      v36 = v41;
      v8 = __s1;
      v9 = v40;
      v35 = v40;
      v34 = __s1;
      a1[3] = v41;
      a1[2] = v9;
      a1[1] = v8;
      *a1 = 0x8000000000000000LL;
      return a1;
    }
    v41 = v26;
    v40 = v25;
    __s1 = v24;
    v38[4] = v27;
    v38[5] = v28;
    v38[6] = v29;
    v38[7] = v30;
    v38[8] = v31;
    v38[9] = v32;
    v38[10] = v33;
    v11 = (char *)v24;
    v12 = v25;
    v38[1] = v24;
    v38[2] = v25;
    v38[3] = v26;
    v38[0] = v23;
    v13 = HIDWORD(v28);
    if ( !HIDWORD(v28) )
      goto LABEL_17;
    v14 = &off_101C04098;
    if ( v25 <= HIDWORD(v28) )
    {
      if ( v25 != HIDWORD(v28) )
        goto LABEL_9;
    }
    else if ( *((char *)v24 + HIDWORD(v28)) <= -65 )
    {
LABEL_9:
      v15 = 0;
      goto LABEL_10;
    }
    if ( HIDWORD(v28) == 5 )
    {
      v16 = "httpsImage URLs must use HTTP(S) without embedded credentialsInvalid image URLUnsupported image data URI; us"
            "e a base64 PNG, JPEG, GIF or WebP image";
    }
    else
    {
      if ( HIDWORD(v28) != 4 )
        goto LABEL_17;
      v16 = "httpnsistimeNullRealTextBlobRgbaNoneSomePathmovewaitcellDatarsv1rsv2rsv3maskinsertedresourceproviderendpoint"
            "{{arch}}appimageNulErrorThreadIdUnixTimeexpectedsegmentsoriginalBorrowedpub_dateis_final";
    }
    v6 = (__int64 *)v24;
    if ( memcmp(v24, v16, HIDWORD(v28)) )
    {
LABEL_17:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6);
      v17 = 37;
      v18 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
      if ( v18 )
      {
        qmemcpy(v18, "relay Base URL must use http or https", 37);
        v19 = 37;
        goto LABEL_19;
      }
LABEL_40:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17);
    }
    if ( !url::Url::host_str::h951633b861c322f2(v38) )
      goto LABEL_33;
    v21 = v13 + 1;
    if ( v12 <= v21 )
    {
      if ( v12 != v21 )
        goto LABEL_25;
    }
    else if ( v11[v21] <= -65 )
    {
LABEL_25:
      v14 = &off_101C040B0;
      v15 = v21;
      v13 = v12;
LABEL_10:
      core::str::slice_error_fail::h480e51fbd8b15eba(v11, v12, v15, v13, v14);
    }
    if ( v12 != v21 && v11[v21] == 47 )
    {
      url::Url::username::hd711546128392e77(v38);
      if ( v22 || url::Url::password::hd737168add2f42dd(v38) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38);
        v17 = 52;
        v18 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1);
        if ( !v18 )
          goto LABEL_40;
        qmemcpy(v18, "relay Base URL must not contain embedded credentials", 52);
        v19 = 52;
      }
      else
      {
        if ( !url::Url::fragment::h2d6f863d83ace37d(v38) )
        {
          qmemcpy(a1, v38, 0x58u);
          return a1;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38);
        v17 = 42;
        v18 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
        if ( !v18 )
          goto LABEL_40;
        qmemcpy(v18, "relay Base URL must not contain a fragment", 42);
        v19 = 42;
      }
    }
    else
    {
LABEL_33:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38);
      v17 = 34;
      v18 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
      if ( !v18 )
        goto LABEL_40;
      qmemcpy(v18, "relay Base URL must include a host", 34);
      v19 = 34;
    }
LABEL_19:
    a1[1] = v19;
    a1[2] = v18;
    a1[3] = v19;
    *a1 = 0x8000000000000000LL;
    if ( v7 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v7, 1);
    return a1;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2);
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1);
  if ( !v10 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32);
  qmemcpy(v10, "relay Base URL must not be empty", 32);
  a1[1] = 32;
  a1[2] = v10;
  a1[3] = 32;
  *a1 = 0x8000000000000000LL;
  return a1;
}

// ===== codexmate_lib::core::relay::upstream_url::join_upstream_root_url::h2a217e7fbfa9aef4 @ 0x100854d40 size=877 lines=216 =====
_QWORD *__fastcall codexmate_lib::core::relay::upstream_url::join_upstream_root_url::h2a217e7fbfa9aef4(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  int v13; // edi
  char v14; // r8
  char v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(); // rdi
  unsigned __int8 *v22; // rdx
  unsigned __int8 *v23; // rdx
  int v24; // esi
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rdx
  int v27; // edi
  int v28; // esi
  int v29; // r9d
  int v30; // r8d
  unsigned __int8 v31; // di
  __int64 (__fastcall *v32)(); // r14
  __int64 (__fastcall *v33)(); // r15
  __int64 v34; // rax
  _QWORD v36[2]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v37[2]; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+28h] [rbp-D8h]
  _QWORD *v40; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v41)(); // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+80h] [rbp-80h]
  _QWORD *v51; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v52)(); // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v60)(); // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v61; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v62)(); // [rsp+E0h] [rbp-20h]

  codexmate_lib::core::relay::upstream_url::parse_base_url::h4b10b32762ec3164(&v49, a2, a3);
  v60 = v50;
  v61 = v51;
  v62 = v52;
  if ( __OFSUB__(-v49, 1) )
  {
    a1[3] = v62;
    v8 = v60;
    a1[2] = v61;
    a1[1] = v8;
    *a1 = 1;
    return a1;
  }
  v48 = v59;
  v47 = v58;
  v46 = v57;
  v45 = v56;
  v44 = v55;
  v43 = v54;
  v42 = v53;
  v39 = v60;
  v40 = v61;
  v41 = v62;
  v38 = v49;
  codexmate_lib::core::relay::upstream_url::validate_endpoint_path::h4a409d3bd5ba44cf(&v49, a4, a5);
  if ( v49 != 0x8000000000000000LL )
  {
    a1[3] = v51;
    v19 = v49;
    a1[2] = v50;
    a1[1] = v19;
    *a1 = 1;
    v20 = v38;
    if ( !v38 )
      return a1;
    v21 = v39;
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1);
    return a1;
  }
  v9 = url::Url::path::hdacd300d547f5011(&v38);
  do
  {
    while ( 1 )
    {
      if ( !v10 )
      {
        v11 = 0;
        goto LABEL_22;
      }
      v11 = v10;
      v12 = v9 + v10;
      v13 = *(char *)(v9 + v10 - 1);
      if ( v13 < 0 )
        break;
      --v10;
      if ( v13 != 47 )
        goto LABEL_15;
    }
    v14 = *(_BYTE *)(v12 - 2);
    if ( v14 >= -64 )
    {
      v16 = v12 - 2;
      v18 = v14 & 0x1F;
    }
    else
    {
      v15 = *(_BYTE *)(v12 - 3);
      if ( v15 >= -64 )
      {
        v16 = v12 - 3;
        v17 = v15 & 0xF;
      }
      else
      {
        v16 = v12 - 4;
        v17 = ((*(_BYTE *)(v12 - 4) & 7) << 6) | v15 & 0x3F;
      }
      v18 = (v17 << 6) | v14 & 0x3F;
    }
    v10 = v16 - v9;
  }
  while ( ((v18 << 6) | v13 & 0x3F) == 0x2F );
LABEL_15:
  if ( v11 >= 3 && !(*(_WORD *)(v12 - 3) ^ 0x762F | *(unsigned __int8 *)(v12 - 1) ^ 0x31) )
    v11 -= 3LL;
LABEL_22:
  v37[0] = v9;
  v37[1] = v11;
  v22 = nullptr;
  while ( v22 != a5 )
  {
    v25 = v22;
    v26 = &v22[a4];
    v27 = *v26;
    if ( (v27 & 0x80u) == 0 )
    {
      v23 = v26 + 1;
      v24 = v27;
    }
    else
    {
      v28 = v27 & 0x1F;
      v29 = v26[1] & 0x3F;
      if ( (unsigned __int8)v27 <= 0xDFu )
      {
        v23 = v26 + 2;
        v24 = v29 | (v28 << 6);
      }
      else
      {
        v30 = (v29 << 6) | v26[2] & 0x3F;
        if ( (unsigned __int8)v27 < 0xF0u )
        {
          v23 = v26 + 3;
          v24 = v30 | (v28 << 12);
        }
        else
        {
          v31 = v26[3];
          v23 = v26 + 4;
          v24 = (v30 << 6) | v31 & 0x3F | ((v28 & 7) << 18);
        }
      }
    }
    v22 = &v23[-a4];
    if ( v24 != 47 )
      goto LABEL_33;
  }
  v25 = a5;
LABEL_33:
  v36[0] = &v25[a4];
  v36[1] = a5 - v25;
  v49 = (__int64)v37;
  v50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
  v51 = v36;
  v52 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v60, &unk_101A3A187, &v49);
  v32 = v60;
  v33 = (__int64 (__fastcall *)())v61;
  url::Url::set_path::h1ec779af55e04b0d(&v38, v61, v62);
  a1[3] = v40;
  v34 = v38;
  a1[2] = v39;
  a1[1] = v34;
  *a1 = 0;
  if ( v32 )
  {
    v21 = v33;
    v20 = (__int64)v32;
    goto LABEL_35;
  }
  return a1;
}

// ===== codexmate_lib::core::relay::upstream_url::validate_endpoint_path::h4a409d3bd5ba44cf @ 0x100855110 size=597 lines=136 =====
void *__fastcall codexmate_lib::core::relay::upstream_url::validate_endpoint_path::h4a409d3bd5ba44cf(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // rdi
  int v6; // r8d
  unsigned __int64 v7; // r8
  int v8; // r9d
  int v9; // r11d
  int v10; // r10d
  unsigned __int8 v11; // r8
  void *v12; // rax
  void *v13; // r14
  void *result; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  _BYTE *v17; // r12
  int v18; // [rsp+0h] [rbp-80h] BYREF
  __int64 v19; // [rsp+8h] [rbp-78h]
  __int64 v20; // [rsp+10h] [rbp-70h]
  __int64 v21; // [rsp+18h] [rbp-68h]
  __int64 v22; // [rsp+20h] [rbp-60h]
  _QWORD v23[5]; // [rsp+28h] [rbp-58h] BYREF
  char v24; // [rsp+50h] [rbp-30h]
  __int16 v25; // [rsp+58h] [rbp-28h]

  v4 = 0x200000010000001LL;
  v5 = a2;
  do
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v5 == &a2[a3] )
            {
              v21 = 0;
              v22 = a3;
              v23[0] = a2;
              v23[1] = a3;
              v23[2] = 0;
              v23[3] = a3;
              v23[4] = 0x2F0000002FLL;
              v24 = 1;
              v25 = 1;
              while ( 1 )
              {
                v15 = v23[0];
                v5 = (unsigned __int8 *)&v18;
                _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                  &v18,
                  v23);
                if ( v18 == 1 )
                {
                  v16 = v19 - v21;
                  v17 = (_BYTE *)(v21 + v15);
                  v21 = v20;
                  if ( v16 != 2 )
                    goto LABEL_25;
                }
                else
                {
                  if ( HIBYTE(v25) || (HIBYTE(v25) = 1, v16 = v22 - v21, ((unsigned __int8)v25 | (v22 != v21)) != 1) )
                  {
LABEL_28:
                    *a1 = 0x8000000000000000LL;
                    return (void *)0x8000000000000000LL;
                  }
                  v17 = (_BYTE *)(v23[0] + v21);
                  if ( v16 != 2 )
                  {
LABEL_25:
                    if ( v16 == 1 && *v17 == 46 )
                      goto LABEL_14;
                    goto LABEL_18;
                  }
                }
                if ( *(_WORD *)v17 == 11822 )
                  goto LABEL_14;
LABEL_18:
                if ( HIBYTE(v25) == 1 )
                  goto LABEL_28;
              }
            }
            v6 = *v5;
            if ( (v6 & 0x80u) != 0 )
              break;
            ++v5;
            v7 = (unsigned int)(v6 - 35);
            if ( (unsigned int)v7 <= 0x39 )
              goto LABEL_13;
          }
          v8 = v6 & 0x1F;
          v9 = v5[1] & 0x3F;
          if ( (unsigned __int8)v6 > 0xDFu )
            break;
          v5 += 2;
          v7 = (v9 | (unsigned int)(v8 << 6)) - 35;
          if ( (unsigned int)v7 <= 0x39 )
            goto LABEL_13;
        }
        v10 = (v9 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)v6 < 0xF0u )
          break;
        v11 = v5[3];
        v5 += 4;
        v7 = (((v8 & 7) << 18) | (v10 << 6) | v11 & 0x3Fu) - 35;
        if ( (unsigned int)v7 <= 0x39 )
          goto LABEL_13;
      }
      v5 += 3;
      v7 = ((v8 << 12) | (unsigned int)v10) - 35;
    }
    while ( (unsigned int)v7 > 0x39 );
LABEL_13:
    ;
  }
  while ( !_bittest64(&v4, v7) );
LABEL_14:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5);
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1);
  if ( !v12 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66);
  v13 = v12;
  result = memcpy(v12, "relay endpoint must be a path without query, fragment or traversalmodels", 0x42u);
  *a1 = 66;
  a1[1] = v13;
  a1[2] = 66;
  return result;
}

// ===== codexmate_lib::core::relay::upstream_url::redacted_upstream_url::h6b76d49e2cf783d2 @ 0x100854c00 size=311 lines=43 =====
_QWORD *__fastcall codexmate_lib::core::relay::upstream_url::redacted_upstream_url::h6b76d49e2cf783d2(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD v10[11]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v11[12]; // [rsp+60h] [rbp-60h] BYREF

  v11[4] = 0;
  v11[0] = 0;
  v11[2] = 0;
  url::ParseOptions::parse::h7da66aa6bebaf5b6(v10, v11, a2, a3);
  if ( __OFSUB__(0, v10[0]) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10);
    v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v3 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    qmemcpy(v3, "<invalid relay URL>", 19);
    *a1 = 19;
    a1[1] = v3;
    a1[2] = 19;
  }
  else
  {
    qmemcpy(v11, v10, 0x58u);
    url::Url::set_username::hb39b281f9b5e5855(v11, 1, 0);
    url::Url::set_password::h8a6cb8cb68dd4be1(v11, 0);
    url::Url::set_query::h59fc2cc84050b0ef(v11, 0, v4, v5, v6, v7);
    url::Url::set_fragment::h806b79ae59de4c5f(v11, 0);
    a1[2] = v11[2];
    v8 = v11[0];
    a1[1] = v11[1];
    *a1 = v8;
  }
  return a1;
}

