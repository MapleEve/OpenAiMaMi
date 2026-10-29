// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::write_export::h7b9e155defa38119; addr: 0x1008a9ef0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
_QWORD *__fastcall codexmate_lib::core::analytics::threads::write_export::h7b9e155defa38119(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int8 *__s2,
        size_t a8)
{
  _QWORD *v11; // rbx
  unsigned __int8 *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __m128i si128; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __m128i v26; // xmm6
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  void *v32; // rax
  int v34; // ecx
  double v35; // xmm0_8
  __int64 v36; // rdi
  unsigned __int8 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 *v41; // r12
  void *v42; // rax
  size_t v43; // r13
  void *v44; // rax
  __int64 *v45; // rdi
  unsigned __int64 v46; // rsi
  __int64 v47; // rdx
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // [rsp+0h] [rbp-100h] BYREF
  void *v51; // [rsp+8h] [rbp-F8h]
  size_t __n; // [rsp+10h] [rbp-F0h]
  _QWORD v53[3]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int8 *v54; // [rsp+B0h] [rbp-50h]
  void *__src; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]

  v58 = a3; /*0x1008a9f0d*/
  v11 = (_QWORD *)a1; /*0x1008a9f11*/
  v12 = __s2; /*0x1008a9f18*/
  if ( a8 == 4 ) /*0x1008a9f20*/
  {
    v13 = 0; /*0x1008a9f54*/
    LOBYTE(v12) = *(_DWORD *)__s2 != 1852797802; /*0x1008a9f5c*/
    if ( a6 > 0x1000000 ) /*0x1008a9f66*/
      goto LABEL_27; /*0x1008a9f66*/
    LOBYTE(v13) = *(_DWORD *)__s2 != 1852797802; /*0x1008a9f6c*/
    if ( v13 ) /*0x1008a9f70*/
      goto LABEL_27; /*0x1008a9f70*/
  }
  else
  {
    if ( a8 != 3 ) /*0x1008a9f26*/
      goto LABEL_27; /*0x1008a9f26*/
    if ( a6 > 0x1000000 ) /*0x1008a9f33*/
      goto LABEL_27; /*0x1008a9f33*/
    v12 = (unsigned __int8 *)(*(unsigned __int16 *)__s2 ^ 0x7363 | __s2[2] ^ 0x76u); /*0x1008a9f48*/
    if ( *(_WORD *)__s2 ^ 0x7363 | __s2[2] ^ 0x76 ) /*0x1008a9f48*/
      goto LABEL_27; /*0x1008a9f4d*/
  }
  a1 = v58; /*0x1008a9f76*/
  v54 = a2; /*0x1008a9f7a*/
  a2 = a4; /*0x1008a9f7e*/
  v14 = std::path::Path::extension::hbb56a39ecf8d3771(v58, a4, a3, v12); /*0x1008a9f81*/
  if ( !v14 /*0x1008a9fa5*/
    || (a1 = (__int64)&v50,
        a2 = (unsigned __int8 *)v14,
        core::str::converts::from_utf8::hb32deb9559450f6e(&v50, v14, a3),
        (_DWORD)v50 == 1) )
  {
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1008aa146*/
    v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x1008aa155*/
    if ( !v32 ) /*0x1008aa15d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61); /*0x1008aa20c*/
    qmemcpy(v32, "statistics export requires a matching .csv or .json extension", 61); /*0x1008aa1cf*/
    *v11 = 9; /*0x1008aa1d2*/
    v11[1] = 61; /*0x1008aa1d9*/
    v11[2] = v32; /*0x1008aa1e1*/
    v11[3] = 61; /*0x1008aa1e5*/
    return v11; /*0x1008aa1e5*/
  }
  v57 = a4; /*0x1008a9fab*/
  v15 = __n; /*0x1008a9faf*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008a9fb9*/
  {
    v16 = 0; /*0x1008a9fbb*/
    goto LABEL_12; /*0x1008a9fbb*/
  }
  v56 = a5; /*0x1008a9fc5*/
  a2 = (unsigned __int8 *)v51; /*0x1008a9fc9*/
  if ( !__n ) /*0x1008a9fd0*/
  {
    v18 = 1; /*0x1008aa011*/
    a1 = 1; /*0x1008aa017*/
    goto LABEL_33; /*0x1008aa024*/
  }
  __src = v51; /*0x1008a9fd2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v50, v51, a3); /*0x1008a9fd6*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1008a9fe3*/
  v16 = 1; /*0x1008a9fe8*/
  if ( !v17 ) /*0x1008a9ff0*/
LABEL_12:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x1008a9fbd*/
  v18 = (__int64)v17; /*0x1008a9ff2*/
  a1 = (__int64)v17; /*0x1008a9ff5*/
  a2 = (unsigned __int8 *)__src; /*0x1008a9ff8*/
  memcpy(v17, __src, v15); /*0x1008a9fff*/
  if ( v15 < 8 ) /*0x1008aa008*/
  {
    v19 = 0; /*0x1008aa00a*/
    goto LABEL_31; /*0x1008aa00c*/
  }
  if ( v15 < 0x20 ) /*0x1008aa037*/
  {
    v19 = 0; /*0x1008aa039*/
    goto LABEL_24; /*0x1008aa03b*/
  }
  v19 = v15 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008aa044*/
  a3 = 0; /*0x1008aa047*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x1008aa049*/
  v21 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x1008aa051*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x1008aa059*/
  do /*0x1008aa0c9*/
  {
    v23 = _mm_loadu_si128((const __m128i *)(v18 + a3)); /*0x1008aa070*/
    v24 = _mm_loadu_si128((const __m128i *)(v18 + a3 + 16)); /*0x1008aa076*/
    v25 = _mm_add_epi8(v23, si128); /*0x1008aa081*/
    v26 = _mm_add_epi8(v24, si128); /*0x1008aa089*/
    *(__m128i *)(v18 + a3) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v25, v21), v25), v22), v23); /*0x1008aa0b5*/
    *(__m128i *)(v18 + a3 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v26, v21), v26), v22), v24); /*0x1008aa0bb*/
    a3 += 32; /*0x1008aa0c2*/
  }
  while ( v19 != a3 ); /*0x1008aa0c9*/
  if ( v15 == v19 ) /*0x1008aa0ce*/
    goto LABEL_33; /*0x1008aa0ce*/
  if ( (v15 & 0x18) != 0 ) /*0x1008aa0d8*/
  {
LABEL_24:
    a3 = v19; /*0x1008aa0de*/
    v19 = v15 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008aa0e8*/
    v27 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x1008aa0eb*/
    v28 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x1008aa0f3*/
    v29 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x1008aa0fb*/
    do /*0x1008aa13f*/
    {
      v30 = _mm_loadl_epi64((const __m128i *)(v18 + a3)); /*0x1008aa110*/
      v31 = _mm_add_epi8(v30, v27); /*0x1008aa11a*/
      *(_QWORD *)(v18 + a3) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v31, v28), v31), v29), v30).u64[0]; /*0x1008aa132*/
      a3 += 8; /*0x1008aa138*/
    }
    while ( v19 != a3 ); /*0x1008aa13f*/
    goto LABEL_32; /*0x1008aa13f*/
  }
  do /*0x1008aa22e*/
  {
LABEL_31:
    v34 = *(unsigned __int8 *)(v18 + v19); /*0x1008aa211*/
    a3 = (unsigned int)(v34 - 65); /*0x1008aa216*/
    LOBYTE(a3) = v34 | (32 * ((unsigned __int8)(v34 - 65) < 0x1Au)); /*0x1008aa222*/
    *(_BYTE *)(v18 + v19++) = a3; /*0x1008aa224*/
LABEL_32:
    ; /*0x1008aa22b*/
  }
  while ( v15 != v19 ); /*0x1008aa22e*/
LABEL_33:
  if ( v15 != a8 || (a1 = v18, a2 = __s2, memcmp((const void *)v18, __s2, a8)) ) /*0x1008aa23f*/
  {
    if ( v15 ) /*0x1008aa24b*/
    {
      a1 = v18; /*0x1008aa256*/
      a2 = (unsigned __int8 *)v15; /*0x1008aa259*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v15, 1); /*0x1008aa25c*/
    }
    goto LABEL_27; /*0x1008aa261*/
  }
  v35 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v15, 1); /*0x1008aa271*/
  v36 = v58; /*0x1008aa276*/
  v37 = v57; /*0x1008aa27a*/
  v38 = std::path::Path::parent::h4c3ac26770731fbb(v58, v57); /*0x1008aa27e*/
  if ( v38 ) /*0x1008aa286*/
  {
    std::sys::fs::canonicalize::h06efd38dcb2724a4(&v50, v38, v39); /*0x1008aa292*/
    v40 = v50; /*0x1008aa297*/
    v41 = (__int64 *)v51; /*0x1008aa29e*/
    if ( __OFSUB__(-v50, 1) ) /*0x1008aa2a8*/
    {
      *v11 = 2; /*0x1008aa2ad*/
      v11[1] = v41; /*0x1008aa2b4*/
      return v11; /*0x1008aa2b8*/
    }
    v43 = __n; /*0x1008aa323*/
    std::sys::fs::canonicalize::h06efd38dcb2724a4(&v50, *((_QWORD *)v54 + 1), *((_QWORD *)v54 + 2)); /*0x1008aa33d*/
    v44 = v51; /*0x1008aa353*/
    if ( v50 == 0x8000000000000000LL ) /*0x1008aa35d*/
    {
      *v11 = 2; /*0x1008aa35f*/
      v11[1] = v44; /*0x1008aa366*/
      goto LABEL_53; /*0x1008aa36a*/
    }
    v53[0] = v50; /*0x1008aa376*/
    v53[1] = v51; /*0x1008aa37a*/
    v53[2] = __n; /*0x1008aa37e*/
    v45 = v41; /*0x1008aa386*/
    v46 = v43; /*0x1008aa389*/
    if ( (unsigned __int8)std::path::Path::starts_with::h2dd41488025b2cd6(v41, v43, v53, v35) ) /*0x1008aa38c*/
    {
LABEL_45:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v46, v47); /*0x1008aa399*/
      v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1); /*0x1008aa3a8*/
      if ( !v48 ) /*0x1008aa3b0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 64); /*0x1008aa500*/
      qmemcpy(v48, "statistics exports cannot replace ChatGPT data or symbolic links", 64); /*0x1008aa422*/
      *v11 = 9; /*0x1008aa425*/
      v11[1] = 64; /*0x1008aa42c*/
      v11[2] = v48; /*0x1008aa434*/
      v11[3] = 64; /*0x1008aa438*/
      goto LABEL_53; /*0x1008aa440*/
    }
    v45 = &v50; /*0x1008aa445*/
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v50, v58, v57); /*0x1008aa454*/
    if ( (_DWORD)v50 == 1 ) /*0x1008aa467*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x1008aa46e*/
        1,
        v51);
    }
    else
    {
      v46 = (unsigned __int64)v51 & 0xF00000000000LL; /*0x1008aa47f*/
      if ( ((unsigned __int64)v51 & 0xF00000000000LL) == 0xA00000000000LL ) /*0x1008aa48f*/
        goto LABEL_45; /*0x1008aa48f*/
    }
    if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28(v58, v57, v56, a6) & 1) != 0 ) /*0x1008aa4ab*/
    {
      *v11 = 2; /*0x1008aa4ad*/
      v11[1] = v49; /*0x1008aa4b4*/
    }
    else
    {
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v49); /*0x1008aa4bd*/
      *v11 = 11; /*0x1008aa4c2*/
    }
LABEL_53:
    if ( v40 ) /*0x1008aa4cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x1008aa4dd*/
    return v11; /*0x1008aa4e2*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v37, v39); /*0x1008aa2bd*/
  v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1008aa2cc*/
  if ( !v42 ) /*0x1008aa2d4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008aa4f1*/
  qmemcpy(v42, "missing export directory", 24); /*0x1008aa300*/
  *v11 = 9; /*0x1008aa303*/
  v11[1] = 24; /*0x1008aa30a*/
  v11[2] = v42; /*0x1008aa312*/
  v11[3] = 24; /*0x1008aa316*/
  return v11; /*0x1008aa1f0*/
}