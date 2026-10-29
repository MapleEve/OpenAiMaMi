// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::paths::PathContext::resolve::hb9e09ec39d6acd2b; addr: 0x1005e2ec0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:19Z
// B-level evidence identity verified; module codexmate_lib/core/analytics/parser/paths; range 0x1005e2ec0-0x1005e3e8c; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x1005e2ec0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [threads-analytics-analysis / reused-supporting-body-not-an-anomaly] PathContext::resolve区分UNC、POSIX、drive路径与root/prefix，生成稳定路径键；作为新增编解码符号的现有release语义上下文。
// 限制：本项为已有正文复用，不计新增函数或新增深逆成果；未额外宣称pre全输入等价。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
const char ***__fastcall codexmate_lib::core::analytics::parser::paths::PathContext::resolve::hb9e09ec39d6acd2b(
        const char ***a1,
        __int64 a2,
        size_t a3,
        char *a4,
        __m128i a5)
{
  const char ***v5; // r15
  size_t v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  size_t v11; // rdi
  __int64 v12; // rax
  char *v13; // r14
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __int64 v21; // rcx
  __m128i si128; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  char v25; // dl
  char *v26; // r12
  unsigned __int64 v27; // rbx
  __int64 v28; // r12
  char *v29; // rsi
  char v30; // al
  unsigned __int64 v31; // rbx
  _BYTE *v32; // rax
  __int64 v33; // rax
  const char **v34; // r12
  const char *v35; // rax
  char v36; // al
  void *v37; // rdx
  char *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  _BYTE *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rax
  char *v49; // rdx
  char *v50; // r12
  char v51; // r15
  const char **v52; // rax
  __int64 v53; // rcx
  const char *v54; // rdx
  char *v55; // r15
  __int64 v56; // rax
  char *v57; // r15
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rsi
  char *v61; // rsi
  __int64 v62; // rcx
  unsigned __int64 v63; // r15
  const char **v64; // rax
  void *v65; // rax
  unsigned __int64 v66; // rcx
  char v67; // al
  char *v68; // r15
  __int64 v69; // rax
  size_t v70; // rdx
  const char *v71; // rsi
  const void *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rdx
  char *v75; // rbx
  char *v76; // r12
  __int64 v77; // r15
  const char *v78; // r15
  __int64 v79; // rbx
  __int64 v80; // rax
  char v81; // r12
  __int64 v82; // rdx
  char *v83; // rdi
  char **v84; // r8
  __int64 v85; // rdx
  __int64 v86; // [rsp+8h] [rbp-188h] BYREF
  char *v87; // [rsp+10h] [rbp-180h]
  __int64 v88; // [rsp+18h] [rbp-178h]
  __int64 v89; // [rsp+20h] [rbp-170h]
  __int64 v90; // [rsp+28h] [rbp-168h] BYREF
  const char **v91; // [rsp+30h] [rbp-160h]
  __int64 v92; // [rsp+38h] [rbp-158h]
  __int64 v93; // [rsp+40h] [rbp-150h]
  const char *v94; // [rsp+48h] [rbp-148h] BYREF
  const char *v95; // [rsp+50h] [rbp-140h]
  const char *v96; // [rsp+58h] [rbp-138h]
  _BYTE *v97; // [rsp+60h] [rbp-130h]
  const char *v98; // [rsp+68h] [rbp-128h] BYREF
  __int64 v99; // [rsp+70h] [rbp-120h]
  char *v100; // [rsp+78h] [rbp-118h]
  __int64 v101; // [rsp+80h] [rbp-110h]
  char *v102; // [rsp+88h] [rbp-108h] BYREF
  __int64 v103; // [rsp+90h] [rbp-100h]
  const char *v104; // [rsp+98h] [rbp-F8h]
  const char *v105; // [rsp+A0h] [rbp-F0h]
  const char **v106; // [rsp+A8h] [rbp-E8h] BYREF
  const char **v107; // [rsp+B0h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+B8h] [rbp-D8h]
  __int64 v109; // [rsp+C0h] [rbp-D0h]
  const char **v110; // [rsp+C8h] [rbp-C8h] BYREF
  const char **v111; // [rsp+D0h] [rbp-C0h]
  unsigned __int64 v112; // [rsp+D8h] [rbp-B8h]
  const char **v113; // [rsp+E0h] [rbp-B0h]
  void *__src; // [rsp+E8h] [rbp-A8h]
  __int64 v115; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v116; // [rsp+F8h] [rbp-98h] BYREF
  void *__dst; // [rsp+100h] [rbp-90h] BYREF
  __int64 v118; // [rsp+108h] [rbp-88h]
  _BYTE *v119; // [rsp+110h] [rbp-80h]
  __int64 v120; // [rsp+118h] [rbp-78h]
  __int64 v121; // [rsp+120h] [rbp-70h]
  __int64 v122; // [rsp+128h] [rbp-68h]
  __int16 v123; // [rsp+130h] [rbp-60h]
  __int16 v124; // [rsp+138h] [rbp-58h]
  size_t v125; // [rsp+140h] [rbp-50h]
  const char ***v126; // [rsp+148h] [rbp-48h]
  char *v127; // [rsp+150h] [rbp-40h]
  char *v128; // [rsp+158h] [rbp-38h]
  char *v129; // [rsp+160h] [rbp-30h]

  v5 = a1; /*0x1005e2ed4*/
  if ( a3 - 32769 <= 0xFFFFFFFFFFFF7FFFLL ) /*0x1005e2ee4*/
    goto LABEL_2; /*0x1005e2ee4*/
  v8 = a3; /*0x1005e2f0b*/
  v9 = a2; /*0x1005e2f0e*/
  if ( a3 <= 0xF ) /*0x1005e2f15*/
  {
    v10 = 0; /*0x1005e2f17*/
    while ( *(_BYTE *)(a2 + v10) ) /*0x1005e2f25*/
    {
      if ( a3 == ++v10 ) /*0x1005e2f2d*/
        goto LABEL_10; /*0x1005e2f2d*/
    }
LABEL_2:
    *v5 = (const char **)0x8000000000000000LL; /*0x1005e2ee6*/
    return v5; /*0x1005e2ef0*/
  }
  a1 = nullptr; /*0x1005e2f31*/
  if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(0, a2, a3) == 1 ) /*0x1005e2f42*/
    goto LABEL_2; /*0x1005e2f42*/
LABEL_10:
  if ( (!a4 || !a4[24]) && *(_BYTE *)a2 != 92 ) /*0x1005e2f56*/
  {
    if ( v8 < 2 /*0x1005e2fb1*/
      || (*(_WORD *)a2 != 12079
       || v8 != 2
       && (a3 = *(unsigned __int8 *)(a2 + 2) ^ 0x2Fu,
           LOWORD(a3) = *(_WORD *)a2 ^ 0x2F2F | *(unsigned __int8 *)(a2 + 2) ^ 0x2F,
           !(_WORD)a3))
      && ((unsigned __int8)((*(_BYTE *)a2 & 0xDF) - 65) >= 0x1Au || *(_BYTE *)(a2 + 1) != 58) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1005e2fb3*/
      v15 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1005e2fc0*/
      if ( v15 ) /*0x1005e2fc8*/
      {
        v13 = v15; /*0x1005e2fce*/
        memcpy(v15, (const void *)a2, v8); /*0x1005e2fda*/
        v11 = 0; /*0x1005e2fdf*/
        goto LABEL_35; /*0x1005e2fe1*/
      }
LABEL_162:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x1005e3dee*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1005e2f58*/
  a2 = 1; /*0x1005e2f5d*/
  v11 = v8; /*0x1005e2f62*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1005e2f65*/
  if ( !v12 ) /*0x1005e2f6d*/
    goto LABEL_162; /*0x1005e2f6d*/
  v13 = (char *)v12; /*0x1005e2f73*/
  if ( v8 <= 7 ) /*0x1005e2f7a*/
  {
    v14 = 0; /*0x1005e2f7c*/
    goto LABEL_31; /*0x1005e2f7e*/
  }
  if ( v8 < 0x20 ) /*0x1005e2f87*/
  {
    v14 = 0; /*0x1005e2f89*/
LABEL_28:
    v21 = v14; /*0x1005e304f*/
    v14 = (unsigned __int16)v8 & 0xFFF8; /*0x1005e3055*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016E99B0); /*0x1005e305a*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1016E99C0); /*0x1005e3062*/
    do /*0x1005e3090*/
    {
      v24 = _mm_loadl_epi64((const __m128i *)(v9 + v21)); /*0x1005e3070*/
      a5 = _mm_cmpeq_epi8(v24, si128); /*0x1005e307a*/
      *(_QWORD *)&v13[v21] = _mm_blendv_epi8(v24, v23, a5).u64[0]; /*0x1005e3083*/
      v21 += 8; /*0x1005e3089*/
    }
    while ( v14 != v21 ); /*0x1005e3090*/
    LOBYTE(v11) = 1; /*0x1005e3092*/
    if ( v8 == v14 ) /*0x1005e3098*/
      goto LABEL_35; /*0x1005e3098*/
    goto LABEL_31; /*0x1005e3098*/
  }
  v14 = (unsigned __int16)v8 & 0xFFE0; /*0x1005e2fe9*/
  v16 = 0; /*0x1005e2fee*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1016E9990); /*0x1005e2ff0*/
  v18 = _mm_load_si128((const __m128i *)&xmmword_1016E99A0); /*0x1005e2ff8*/
  do /*0x1005e303f*/
  {
    v19 = _mm_loadu_si128((const __m128i *)(v9 + v16)); /*0x1005e3000*/
    v20 = _mm_loadu_si128((const __m128i *)(v9 + v16 + 16)); /*0x1005e3006*/
    a5 = _mm_cmpeq_epi8(v20, v17); /*0x1005e3022*/
    *(__m128i *)&v13[v16] = _mm_blendv_epi8(v19, v18, _mm_cmpeq_epi8(v19, v17)); /*0x1005e302b*/
    *(__m128i *)&v13[v16 + 16] = _mm_blendv_epi8(v20, v18, a5); /*0x1005e3031*/
    v16 += 32; /*0x1005e3038*/
  }
  while ( v14 != v16 ); /*0x1005e303f*/
  LOBYTE(v11) = 1; /*0x1005e3041*/
  if ( v8 == v14 ) /*0x1005e3047*/
    goto LABEL_35; /*0x1005e3047*/
  if ( (v8 & 0x18) != 0 ) /*0x1005e304d*/
    goto LABEL_28; /*0x1005e304d*/
  do /*0x1005e30b5*/
  {
LABEL_31:
    v25 = *(_BYTE *)(v9 + v14); /*0x1005e30a0*/
    if ( v25 == 92 ) /*0x1005e30a8*/
      v25 = 47; /*0x1005e30a8*/
    v13[v14++] = v25; /*0x1005e30ab*/
  }
  while ( v8 != v14 ); /*0x1005e30b5*/
  LOBYTE(v11) = 1; /*0x1005e30b7*/
LABEL_35:
  if ( v8 < 4 ) /*0x1005e30be*/
  {
    v128 = a4; /*0x1005e30c0*/
    LODWORD(__src) = 0; /*0x1005e30c4*/
    v125 = v8; /*0x1005e30ce*/
    v26 = v13; /*0x1005e30d2*/
    v27 = v8; /*0x1005e30d5*/
    goto LABEL_37; /*0x1005e30d5*/
  }
  if ( *(_DWORD *)v13 != 792669999 ) /*0x1005e310b*/
  {
    v128 = a4; /*0x1005e3111*/
    LODWORD(__src) = 0; /*0x1005e3115*/
    v125 = v8; /*0x1005e311f*/
    v26 = v13; /*0x1005e3123*/
    v27 = v8; /*0x1005e3126*/
LABEL_42:
    v129 = v26; /*0x1005e3129*/
    if ( *(_DWORD *)v26 == 791555887 ) /*0x1005e3135*/
      goto LABEL_135; /*0x1005e3135*/
    v28 = v27; /*0x1005e313b*/
    goto LABEL_44; /*0x1005e313b*/
  }
  v43 = v8 - 4; /*0x1005e338f*/
  v44 = v13 + 4; /*0x1005e3393*/
  if ( v8 - 4 <= 4 ) /*0x1005e339b*/
  {
    if ( v8 != 8 ) /*0x1005e37da*/
    {
      if ( v43 < 2 ) /*0x1005e3929*/
      {
LABEL_122:
        *v5 = (const char **)0x8000000000000000LL; /*0x1005e39dc*/
        goto LABEL_139; /*0x1005e39e9*/
      }
      goto LABEL_113; /*0x1005e3929*/
    }
  }
  else if ( v13[8] <= -65 ) /*0x1005e33a6*/
  {
    goto LABEL_113; /*0x1005e33a6*/
  }
  if ( (*v44 | (unsigned __int8)(32 * ((unsigned __int8)(*v44 - 65) < 0x1Au))) == 117 /*0x1005e3848*/
    && ((unsigned __int8)v13[5] | (unsigned __int8)(32 * ((unsigned __int8)(v13[5] - 65) < 0x1Au))) == 110
    && ((unsigned __int8)v13[6] | (unsigned __int8)(32 * ((unsigned __int8)(v13[6] - 65) < 0x1Au))) == 99
    && ((unsigned __int8)v13[7] | (unsigned __int8)(32 * ((unsigned __int8)(v13[7] - 65) < 0x1Au))) == 47 )
  {
    LODWORD(v129) = v11; /*0x1005e384e*/
    if ( v43 < 5 || v13[8] > -65 ) /*0x1005e385c*/
    {
      v128 = a4; /*0x1005e3862*/
      v110 = (const char **)(v13 + 8); /*0x1005e386e*/
      v111 = (const char **)(v8 - 8); /*0x1005e3875*/
      v98 = (const char *)&v110; /*0x1005e3883*/
      v99 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1005e3891*/
      a2 = (__int64)&unk_1018FC6EC; /*0x1005e3898*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v115, &unk_1018FC6EC, &v98); /*0x1005e38ad*/
      LODWORD(v65) = v115; /*0x1005e38b2*/
      v125 = v115; /*0x1005e38b9*/
      v26 = (char *)v116; /*0x1005e38bd*/
      v27 = (unsigned __int64)__dst; /*0x1005e38c4*/
      goto LABEL_120; /*0x1005e38cb*/
    }
    v83 = v13 + 4; /*0x1005e3e7b*/
    v84 = &off_101AAC738; /*0x1005e3e7e*/
    v85 = 4; /*0x1005e3e85*/
LABEL_166:
    core::str::slice_error_fail::h480e51fbd8b15eba(v83, v8 - 4, v85, v8 - 4, v84); /*0x1005e3e38*/
  }
LABEL_113:
  if ( (unsigned __int8)((*v44 & 0xDF) - 65) >= 0x1Au || v43 < 3 || v13[5] != 58 ) /*0x1005e394d*/
    goto LABEL_122; /*0x1005e394d*/
  v67 = v13[6]; /*0x1005e3953*/
  if ( v67 <= -65 ) /*0x1005e395a*/
  {
    v83 = v13 + 4; /*0x1005e3e29*/
    v84 = &off_101AAC720; /*0x1005e3e2c*/
    v85 = 2; /*0x1005e3e33*/
    goto LABEL_166; /*0x1005e3e33*/
  }
  if ( v67 != 47 ) /*0x1005e3962*/
    goto LABEL_122; /*0x1005e3962*/
  __src = v13 + 4; /*0x1005e3964*/
  LODWORD(v129) = v11; /*0x1005e396b*/
  v128 = a4; /*0x1005e396e*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(&v115, v8 - 4, 0, 1, 1); /*0x1005e3989*/
  v125 = v116; /*0x1005e3995*/
  if ( (_BYTE)v115 ) /*0x1005e39a0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v125, __dst); /*0x1005e3de4*/
  v27 = v8 - 4; /*0x1005e39a6*/
  v26 = (char *)__dst; /*0x1005e39b0*/
  a2 = (__int64)__src; /*0x1005e39b3*/
  v65 = memcpy(__dst, __src, v8 - 4); /*0x1005e39bd*/
LABEL_120:
  v11 = (unsigned int)v129; /*0x1005e39c2*/
  LOBYTE(v65) = 1; /*0x1005e39c5*/
  LODWORD(__src) = (_DWORD)v65; /*0x1005e39c7*/
  if ( v27 >= 4 ) /*0x1005e39d1*/
    goto LABEL_42; /*0x1005e39d1*/
LABEL_37:
  v129 = v26; /*0x1005e30d8*/
  v28 = v27; /*0x1005e30e0*/
  if ( v27 < 2 ) /*0x1005e30e3*/
  {
    v29 = v128; /*0x1005e30e8*/
    if ( !v27 ) /*0x1005e30ec*/
    {
      v28 = 0; /*0x1005e34a1*/
LABEL_74:
      if ( v29 ) /*0x1005e34a7*/
      {
        v126 = v5; /*0x1005e34ad*/
        v51 = v29[24]; /*0x1005e34b1*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v115, v29); /*0x1005e34bd*/
        LOBYTE(v109) = v51; /*0x1005e34c2*/
        v106 = (const char **)v115; /*0x1005e34d7*/
        v107 = (const char **)v116; /*0x1005e34de*/
        v108 = (unsigned __int64)__dst; /*0x1005e34ec*/
        v37 = v129; /*0x1005e34f3*/
        goto LABEL_76; /*0x1005e34f3*/
      }
      goto LABEL_135; /*0x1005e34a7*/
    }
    v30 = *v129; /*0x1005e30f6*/
    v28 = 1; /*0x1005e30f9*/
    goto LABEL_57; /*0x1005e30ff*/
  }
LABEL_44:
  v30 = *v129; /*0x1005e313e*/
  if ( (unsigned __int8)((*v129 & 0xDF) - 65) < 0x1Au && v129[1] == 58 ) /*0x1005e315a*/
  {
    v31 = v28; /*0x1005e3160*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, a2, v129); /*0x1005e3163*/
    v32 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1, 1); /*0x1005e3172*/
    if ( !v32 ) /*0x1005e317a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x1005e3e05*/
    *v32 = *v129 | (32 * ((unsigned __int8)(*v129 - 65) < 0x1Au)); /*0x1005e3198*/
    v115 = (__int64)"pathuncposixdrive"; /*0x1005e31a1*/
    v116 = 4; /*0x1005e31a8*/
    __dst = "drive"; /*0x1005e31ba*/
    v118 = 5; /*0x1005e31c1*/
    v97 = v32; /*0x1005e31cc*/
    v119 = v32; /*0x1005e31d3*/
    v120 = 1; /*0x1005e31d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(1, 1, v32); /*0x1005e31df*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005e31ee*/
    if ( !v33 ) /*0x1005e31f6*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005e3dcf*/
    v34 = (const char **)v33; /*0x1005e31fc*/
    codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db(&v98, &v115, 3); /*0x1005e3212*/
    v34[2] = v100; /*0x1005e321e*/
    v35 = v98; /*0x1005e3223*/
    v34[1] = (const char *)v99; /*0x1005e3231*/
    *v34 = v35; /*0x1005e3236*/
    LOBYTE(v93) = 1; /*0x1005e323a*/
    v90 = 1; /*0x1005e3241*/
    v91 = v34; /*0x1005e324c*/
    v92 = 1; /*0x1005e3253*/
    v126 = v5; /*0x1005e326a*/
    v127 = v129 + 2; /*0x1005e326e*/
    if ( v31 < 3 ) /*0x1005e3272*/
    {
      v66 = 0; /*0x1005e391e*/
    }
    else
    {
      v36 = v129[2]; /*0x1005e3278*/
      if ( v36 <= -65 ) /*0x1005e327d*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v129, v31, 2, v31, &off_101AAC770); /*0x1005e3e22*/
      if ( v36 == 47 ) /*0x1005e3285*/
      {
        if ( v31 != 3 && v129[3] <= -65 ) /*0x1005e329c*/
          core::str::slice_error_fail::h480e51fbd8b15eba(v129, v31, 3, v31, &off_101AAC7A0); /*0x1005e3e57*/
        v28 = v31 - 3; /*0x1005e32a2*/
        v127 = v129 + 3; /*0x1005e32aa*/
        v109 = v93; /*0x1005e32b5*/
        v108 = v92; /*0x1005e32c3*/
        v107 = v91; /*0x1005e32d8*/
        v106 = (const char **)v90; /*0x1005e32df*/
LABEL_54:
        *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, 1, 1); /*0x1005e32e6*/
        v37 = v127; /*0x1005e32fc*/
        goto LABEL_76; /*0x1005e3300*/
      }
      v66 = v31 - 2; /*0x1005e39ee*/
    }
    v68 = v128; /*0x1005e39f2*/
    if ( !v128 /*0x1005e3a21*/
      || !*((_QWORD *)v128 + 2)
      || (v69 = *((_QWORD *)v128 + 1), v70 = *(_QWORD *)(v69 + 16), (const char *)v70 != v34[2])
      || (v71 = v34[1], v72 = *(const void **)(v69 + 8), v89 = v66, memcmp(v72, v71, v70)) )
    {
      v5 = v126; /*0x1005e3a38*/
      *v126 = (const char **)0x8000000000000000LL; /*0x1005e3a3c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..paths..PathContext$GT$::h945d3be636237409(&v90); /*0x1005e3a46*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, 1, 1); /*0x1005e3a5c*/
      goto LABEL_136; /*0x1005e3a61*/
    }
    v81 = v68[24]; /*0x1005e3c80*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v98, v68); /*0x1005e3c8f*/
    LOBYTE(v118) = v81; /*0x1005e3c94*/
    v115 = (__int64)v98; /*0x1005e3ca9*/
    v116 = v99; /*0x1005e3cb0*/
    __dst = v100; /*0x1005e3cbe*/
    if ( v31 >= 3 && *v127 <= -65 ) /*0x1005e3cd2*/
      core::str::slice_error_fail::h480e51fbd8b15eba(v129, v31, 2, v31, &off_101AAC788); /*0x1005e3e74*/
    v109 = v118; /*0x1005e3cdf*/
    v108 = (unsigned __int64)__dst; /*0x1005e3ced*/
    v107 = (const char **)v116; /*0x1005e3d02*/
    v106 = (const char **)v115; /*0x1005e3d09*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..paths..PathContext$GT$::h945d3be636237409(&v90); /*0x1005e3d17*/
    v28 = v89; /*0x1005e3d1c*/
    goto LABEL_54; /*0x1005e3d23*/
  }
  if ( *(_WORD *)v129 != 12079 ) /*0x1005e330a*/
  {
    v29 = v128; /*0x1005e3310*/
    goto LABEL_57; /*0x1005e3310*/
  }
  v29 = v128; /*0x1005e33bd*/
  if ( v28 != 2 && v129[2] == 47 ) /*0x1005e33c6*/
  {
LABEL_57:
    if ( v30 == 47 ) /*0x1005e3316*/
    {
      --v28; /*0x1005e331c*/
      v38 = v129 + 1; /*0x1005e3323*/
      if ( (_BYTE)v11 ) /*0x1005e332a*/
      {
        if ( v29 && v29[24] == 1 ) /*0x1005e333d*/
        {
          v126 = v5; /*0x1005e3343*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v115, v29); /*0x1005e334e*/
          v127 = v38; /*0x1005e3353*/
          v39 = v28; /*0x1005e3357*/
          v40 = v115; /*0x1005e335a*/
          v41 = v116; /*0x1005e3361*/
          if ( __dst ) /*0x1005e3372*/
          {
            core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u5d$$GT$::hc5bfeaa866d6c2cb( /*0x1005e3380*/
              v116 + 24,
              (char *)__dst - 1);
            v42 = 1; /*0x1005e3385*/
          }
          else
          {
            v42 = 0; /*0x1005e3b4e*/
          }
          v106 = (const char **)v40; /*0x1005e3b50*/
          v107 = (const char **)v41; /*0x1005e3b57*/
          v108 = v42; /*0x1005e3b5e*/
          LOBYTE(v109) = 1; /*0x1005e3b65*/
          v28 = v39; /*0x1005e3b6c*/
          v37 = v127; /*0x1005e3b6f*/
          goto LABEL_76; /*0x1005e3b73*/
        }
        goto LABEL_135; /*0x1005e333d*/
      }
      v126 = v5; /*0x1005e347e*/
      codexmate_lib::core::analytics::parser::paths::PathContext::root::h27af76550f3cf29b(&v106, 0, &off_101AAC750, 2); /*0x1005e3497*/
      v37 = v38; /*0x1005e349c*/
LABEL_76:
      v113 = (const char **)v109; /*0x1005e34f7*/
      v112 = v108; /*0x1005e350c*/
      v111 = v107; /*0x1005e3521*/
      v110 = v106; /*0x1005e3528*/
      v115 = 0; /*0x1005e352f*/
      v116 = v28; /*0x1005e353a*/
      __dst = v37; /*0x1005e3548*/
      v118 = v28; /*0x1005e354f*/
      v119 = nullptr; /*0x1005e3556*/
      v120 = v28; /*0x1005e355e*/
      v121 = 0x2F0000002FLL; /*0x1005e356c*/
      LOBYTE(v122) = 1; /*0x1005e3570*/
      v123 = 1; /*0x1005e3574*/
      while ( 1 ) /*0x1005e35d2*/
      {
        v55 = (char *)__dst; /*0x1005e35d2*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005e35df*/
          &v98,
          &__dst,
          *(double *)a5.i64);
        if ( (_DWORD)v98 == 1 ) /*0x1005e35eb*/
        {
          v56 = v99 - v115; /*0x1005e3602*/
          v57 = &v55[v115]; /*0x1005e3605*/
          v115 = (__int64)v100; /*0x1005e3608*/
          if ( !v56 ) /*0x1005e3612*/
            goto LABEL_78; /*0x1005e3612*/
        }
        else
        {
          if ( HIBYTE(v123) || (HIBYTE(v123) = 1, v56 = v116 - v115, ((unsigned __int8)v123 | (v116 != v115)) != 1) ) /*0x1005e3648*/
          {
LABEL_95:
            v5 = v126; /*0x1005e3778*/
            v126[3] = v113; /*0x1005e3783*/
            v5[2] = (const char **)v112; /*0x1005e378e*/
            v64 = v110; /*0x1005e3792*/
            v5[1] = v111; /*0x1005e37a0*/
            *v5 = v64; /*0x1005e37a4*/
            if ( v125 ) /*0x1005e37ae*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v125, 1); /*0x1005e37b9*/
            if ( !((unsigned __int8)__src ^ 1 | (v8 == 0)) ) /*0x1005e37cd*/
              goto LABEL_139; /*0x1005e37cf*/
            return v5; /*0x1005e37cf*/
          }
          v57 = (char *)__dst + v115; /*0x1005e364e*/
          if ( !v56 ) /*0x1005e3658*/
            goto LABEL_78; /*0x1005e3658*/
        }
        if ( v56 == 1 ) /*0x1005e3662*/
        {
          if ( *v57 != 46 ) /*0x1005e36d4*/
            goto LABEL_92; /*0x1005e36d4*/
        }
        else
        {
          if ( v56 != 2 || *(_WORD *)v57 != 11822 ) /*0x1005e3670*/
          {
LABEL_92:
            if ( v112 - 1024 < 0xFFFFFFFFFFFFFC01LL ) /*0x1005e36ef*/
            {
              v5 = v126; /*0x1005e38da*/
              *v126 = (const char **)0x8000000000000000LL; /*0x1005e38de*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..paths..PathContext$GT$::h945d3be636237409(&v110); /*0x1005e38e8*/
              goto LABEL_136; /*0x1005e38ed*/
            }
            v61 = (char *)v111[3 * v112 - 2]; /*0x1005e3700*/
            v62 = (__int64)v111[3 * v112 - 1]; /*0x1005e3705*/
            v98 = (const char *)&unk_1016FDDB1; /*0x1005e3711*/
            v99 = 14; /*0x1005e3718*/
            v100 = v61; /*0x1005e3723*/
            v101 = v62; /*0x1005e372a*/
            v102 = v57; /*0x1005e3731*/
            v103 = v56; /*0x1005e3738*/
            codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db(&v94, &v98, 3); /*0x1005e374e*/
            v63 = v112; /*0x1005e3753*/
            if ( (const char **)v112 == v110 ) /*0x1005e3761*/
              *(double *)a5.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x1005e376e*/
            v52 = v111; /*0x1005e3590*/
            v53 = 3 * v63; /*0x1005e3597*/
            v111[v53 + 2] = v96; /*0x1005e35a2*/
            v54 = v94; /*0x1005e35a7*/
            v52[v53 + 1] = v95; /*0x1005e35b5*/
            v52[v53] = v54; /*0x1005e35ba*/
            v112 = v63 + 1; /*0x1005e35c1*/
            goto LABEL_78; /*0x1005e35c1*/
          }
          v58 = v112; /*0x1005e3672*/
          if ( v112 > 1 ) /*0x1005e367d*/
          {
            --v112; /*0x1005e3686*/
            v59 = 3 * (v58 - 1); /*0x1005e3694*/
            v60 = v111[v59]; /*0x1005e3698*/
            if ( 2LL * (_QWORD)v60 ) /*0x1005e369c*/
              *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111[v59 + 1], v60, 1); /*0x1005e36ba*/
          }
        }
LABEL_78:
        if ( HIBYTE(v123) ) /*0x1005e35cc*/
          goto LABEL_95; /*0x1005e35cc*/
      }
    }
    goto LABEL_74; /*0x1005e3316*/
  }
  v126 = v5; /*0x1005e33cc*/
  v116 = 0; /*0x1005e33d7*/
  __dst = (void *)(v28 - 2); /*0x1005e33e2*/
  v118 = (__int64)(v129 + 2); /*0x1005e33e9*/
  v119 = (_BYTE *)(v28 - 2); /*0x1005e33f0*/
  v120 = 0; /*0x1005e33f4*/
  v121 = v28 - 2; /*0x1005e33fc*/
  v122 = 0x2F0000002FLL; /*0x1005e340a*/
  LOBYTE(v123) = 1; /*0x1005e340e*/
  v124 = 1; /*0x1005e3412*/
  v115 = 2; /*0x1005e3418*/
  v46 = core::str::iter::SplitInternal$LT$P$GT$::next::h62c4705665ad3178(&v116, v128); /*0x1005e3428*/
  v5 = v126; /*0x1005e342e*/
  if ( v46 ) /*0x1005e3432*/
  {
    if ( v115 == 1 ) /*0x1005e3443*/
    {
      v115 = 0; /*0x1005e3a66*/
      if ( HIBYTE(v124) /*0x1005e3a99*/
        || (HIBYTE(v124) = 1, v128 = (char *)__dst - v116, ((unsigned __int8)v124 | (__dst != (void *)v116)) != 1) )
      {
        v50 = nullptr; /*0x1005e3aa4*/
      }
      else
      {
        v50 = (char *)(v118 + v116); /*0x1005e3a9b*/
      }
    }
    else
    {
      if ( !v115 ) /*0x1005e344c*/
        goto LABEL_135; /*0x1005e344c*/
      --v115; /*0x1005e3455*/
      v47 = v45; /*0x1005e3463*/
      v48 = core::str::iter::SplitInternal$LT$P$GT$::next::h62c4705665ad3178(&v116, v29); /*0x1005e3466*/
      v128 = v49; /*0x1005e346b*/
      v45 = v47; /*0x1005e346f*/
      v50 = (char *)v48; /*0x1005e3472*/
      v5 = v126; /*0x1005e3475*/
    }
    if ( v50 ) /*0x1005e3aaa*/
    {
      v98 = (const char *)v46; /*0x1005e3aac*/
      v99 = v45; /*0x1005e3ab3*/
      v100 = v50; /*0x1005e3aba*/
      v101 = (__int64)v128; /*0x1005e3ac5*/
      v110 = &v98; /*0x1005e3ada*/
      v111 = (const char **)&v102; /*0x1005e3ae1*/
      v127 = (char *)v46; /*0x1005e3aef*/
      v73 = v45; /*0x1005e3af3*/
      if ( !(unsigned __int8)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h2804d2b6c636141f(&v110) ) /*0x1005e3b01*/
      {
        v74 = v73; /*0x1005e3b78*/
        v75 = v50; /*0x1005e3b7b*/
        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h0a527fd5b7c7287b(&v86, v127, v74); /*0x1005e3b85*/
        v76 = v87; /*0x1005e3b8a*/
        v77 = v88; /*0x1005e3b91*/
        v127 = v87; /*0x1005e3ba6*/
        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h0a527fd5b7c7287b(&v94, v75, v128); /*0x1005e3baa*/
        v98 = "pathuncposixdrive"; /*0x1005e3bc4*/
        v99 = 4; /*0x1005e3bcb*/
        v100 = "uncposixdrive"; /*0x1005e3bdd*/
        v101 = 3; /*0x1005e3be4*/
        v102 = v76; /*0x1005e3bef*/
        v103 = v77; /*0x1005e3bf6*/
        v78 = v95; /*0x1005e3bfd*/
        v104 = v95; /*0x1005e3c00*/
        v105 = v96; /*0x1005e3c07*/
        codexmate_lib::core::analytics::parser::paths::PathContext::root::h27af76550f3cf29b(&v110, 1, &v98, 4); /*0x1005e3c26*/
        v79 = 1; /*0x1005e3c2b*/
        v28 = v115; /*0x1005e3c30*/
        if ( v115 ) /*0x1005e3c3a*/
        {
          if ( v115 == 1 ) /*0x1005e3c44*/
          {
            if ( HIBYTE(v124) || (v28 = (__int64)__dst - v116, ((unsigned __int8)v124 | (__dst != (void *)v116)) != 1) ) /*0x1005e3c6e*/
              v80 = 0; /*0x1005e3d43*/
            else
              v80 = v118 + v116; /*0x1005e3c74*/
          }
          else
          {
            --v115; /*0x1005e3d2b*/
            v80 = core::str::iter::SplitInternal$LT$P$GT$::next::h62c4705665ad3178(&v116, 1); /*0x1005e3d39*/
            v28 = v82; /*0x1005e3d3e*/
          }
          if ( v80 ) /*0x1005e3d48*/
            v79 = v80; /*0x1005e3d4a*/
          else
            v28 = 0; /*0x1005e3d4f*/
        }
        v109 = (__int64)v113; /*0x1005e3d59*/
        v108 = v112; /*0x1005e3d67*/
        v107 = v111; /*0x1005e3d7c*/
        v106 = v110; /*0x1005e3d83*/
        if ( v94 ) /*0x1005e3d94*/
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v94, 1); /*0x1005e3d9e*/
        if ( v86 ) /*0x1005e3dad*/
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v86, 1); /*0x1005e3db8*/
        v37 = (void *)v79; /*0x1005e3dbd*/
        goto LABEL_76; /*0x1005e3dc0*/
      }
    }
  }
LABEL_135:
  *v5 = (const char **)0x8000000000000000LL; /*0x1005e3b03*/
LABEL_136:
  if ( v125 ) /*0x1005e3b17*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v125, 1); /*0x1005e3b22*/
  if ( ((v8 != 0) & (unsigned __int8)__src) != 0 ) /*0x1005e3b33*/
LABEL_139:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v8, 1); /*0x1005e3b39*/
  return v5; /*0x1005e2ef6*/
}