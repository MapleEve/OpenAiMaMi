// __ZN13codexmate_lib4core5relay12proxy_server41is_anthropic_thinking_signature_rejection @ 0x100848920 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::proxy_server::is_anthropic_thinking_signature_rejection::h32e8b5f0aa1e4fad(
        __int16 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // r14
  size_t v7; // r15
  __int64 v8; // rbx
  size_t v9; // rbx
  void *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  size_t v27; // r9
  unsigned __int8 *v28; // r15
  __int64 v29; // r14
  __int64 v30; // r12
  unsigned __int8 *v31; // rax
  __int64 v32; // rbx
  int v33; // ecx
  int v34; // edx
  int v35; // edi
  int v36; // esi
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  size_t v39; // rbx
  const void *v40; // rsi
  __int64 v41; // r14
  size_t v42; // r13
  size_t v43; // r9
  size_t v44; // r12
  __int64 v45; // r15
  const void *v46; // rsi
  size_t v47; // r14
  unsigned __int64 v48; // r9
  bool v49; // zf
  __int64 v51; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+10h] [rbp-C0h]
  size_t v53; // [rsp+18h] [rbp-B8h]
  unsigned __int8 *v54; // [rsp+70h] [rbp-60h]
  __int64 v55; // [rsp+78h] [rbp-58h] BYREF
  void *__src; // [rsp+80h] [rbp-50h]
  size_t __n; // [rsp+88h] [rbp-48h]
  size_t v58; // [rsp+90h] [rbp-40h]
  void *v59; // [rsp+98h] [rbp-38h]
  void *__s2; // [rsp+A0h] [rbp-30h]

  if ( a1 != 400 ) /*0x10084893c*/
  {
    LODWORD(v9) = 0; /*0x100848976*/
    return (unsigned int)v9; /*0x100848978*/
  }
  v3 = 0x10000; /*0x100848945*/
  if ( a3 < 0x10000 ) /*0x10084894a*/
    v3 = a3; /*0x10084894a*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v55, a2, v3); /*0x100848955*/
  v6 = __src; /*0x10084895a*/
  v7 = __n; /*0x10084895e*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100848965*/
  {
    v8 = 0; /*0x100848967*/
    goto LABEL_6; /*0x100848967*/
  }
  v59 = __src; /*0x10084897d*/
  if ( !__n ) /*0x100848981*/
  {
    v11 = 1; /*0x1008489bd*/
    goto LABEL_22; /*0x1008489d3*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v55, a2, v4, v5); /*0x100848983*/
  v8 = 1; /*0x100848988*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100848995*/
  if ( !v10 ) /*0x10084899d*/
LABEL_6:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x100848969*/
  v11 = (__int64)v10; /*0x10084899f*/
  memcpy(v10, v6, v7); /*0x1008489ab*/
  if ( v7 >= 8 ) /*0x1008489b4*/
  {
    if ( v7 >= 0x20 ) /*0x1008489e6*/
    {
      v12 = v7 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008489f2*/
      v13 = 0; /*0x1008489f5*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x1008489f7*/
      v15 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x1008489ff*/
      v16 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x100848a07*/
      do /*0x100848a6b*/
      {
        v17 = _mm_loadu_si128((const __m128i *)(v11 + v13)); /*0x100848a10*/
        v18 = _mm_loadu_si128((const __m128i *)(v11 + v13 + 16)); /*0x100848a17*/
        v19 = _mm_add_epi8(v17, si128); /*0x100848a22*/
        v20 = _mm_add_epi8(v18, si128); /*0x100848a2a*/
        *(__m128i *)(v11 + v13) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17); /*0x100848a56*/
        *(__m128i *)(v11 + v13 + 16) = _mm_or_si128( /*0x100848a5d*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16),
                                         v18);
        v13 += 32; /*0x100848a64*/
      }
      while ( v12 != v13 ); /*0x100848a6b*/
      if ( v7 == v12 ) /*0x100848a70*/
        goto LABEL_22; /*0x100848a70*/
      if ( (v7 & 0x18) == 0 ) /*0x100848a7a*/
        goto LABEL_55; /*0x100848a7a*/
    }
    else
    {
      v12 = 0; /*0x1008489e8*/
    }
    v21 = v12; /*0x100848a80*/
    v12 = v7 & 0x7FFFFFFFFFFFFFF8LL; /*0x100848a8a*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100848a8d*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x100848a95*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100848a9d*/
    do /*0x100848ae1*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)(v11 + v21)); /*0x100848ab0*/
      v26 = _mm_add_epi8(v25, v22); /*0x100848abb*/
      *(_QWORD *)(v11 + v21) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x100848ad3*/
      v21 += 8; /*0x100848ada*/
    }
    while ( v12 != v21 ); /*0x100848ae1*/
    goto LABEL_54; /*0x100848ae1*/
  }
  v12 = 0; /*0x1008489b6*/
  do /*0x100848e8e*/
  {
LABEL_55:
    *(_BYTE *)(v11 + v12) |= 32 * ((unsigned __int8)(*(_BYTE *)(v11 + v12) - 65) < 0x1Au); /*0x100848e94*/
    ++v12; /*0x100848ead*/
LABEL_54:
    ; /*0x100848e8b*/
  }
  while ( v7 != v12 ); /*0x100848e8e*/
LABEL_22:
  v51 = 0; /*0x100848b05*/
  v52 = 1; /*0x100848b10*/
  v53 = 0; /*0x100848b1b*/
  v58 = v7; /*0x100848b26*/
  v54 = (unsigned __int8 *)(v11 + v7); /*0x100848b2f*/
  __s2 = (void *)1; /*0x100848b38*/
  v27 = 0; /*0x100848b3c*/
  v28 = (unsigned __int8 *)v11; /*0x100848b3f*/
  v29 = 0; /*0x100848b42*/
  v30 = 0; /*0x100848b45*/
  while ( v28 != v54 ) /*0x100848b54*/
  {
    v31 = v28; /*0x100848b5a*/
    v32 = v30; /*0x100848b5d*/
    v33 = *v28; /*0x100848b60*/
    if ( (v33 & 0x80u) != 0 ) /*0x100848b66*/
    {
      v34 = v33 & 0x1F; /*0x100848b72*/
      v35 = v28[1] & 0x3F; /*0x100848b79*/
      if ( (unsigned __int8)v33 <= 0xDFu ) /*0x100848b7f*/
      {
        v28 += 2; /*0x100848bac*/
        v33 = v35 | (v34 << 6); /*0x100848bb5*/
      }
      else
      {
        v36 = (v35 << 6) | v28[2] & 0x3F; /*0x100848b8b*/
        if ( (unsigned __int8)v33 < 0xF0u ) /*0x100848b90*/
        {
          v28 += 3; /*0x100848bb9*/
          v33 = (v34 << 12) | v36; /*0x100848bc2*/
        }
        else
        {
          v28 += 4; /*0x100848b92*/
          v33 = ((v33 & 7) << 18) | (v36 << 6) | v31[3] & 0x3F; /*0x100848ba8*/
        }
      }
    }
    else
    {
      ++v28; /*0x100848b68*/
    }
    v30 += v28 - v31; /*0x100848bd6*/
    v37 = (unsigned int)(v33 - 34); /*0x100848bd9*/
    if ( (unsigned int)v37 <= 0x3E ) /*0x100848bdf*/
    {
      v38 = 0x4400000000000021LL; /*0x100848be5*/
      if ( _bittest64(&v38, v37) ) /*0x100848bef*/
      {
        v39 = v32 - v29; /*0x100848bf9*/
        if ( v39 > v51 - v27 ) /*0x100848c09*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v51, v27, v39, 1, 1); /*0x100848c57*/
          __s2 = (void *)v52; /*0x100848c63*/
          v27 = v53; /*0x100848c67*/
        }
        v40 = (const void *)(v11 + v29); /*0x100848c16*/
        v41 = v11; /*0x100848c1c*/
        v42 = v27; /*0x100848c1f*/
        memcpy((char *)__s2 + v27, v40, v39); /*0x100848c22*/
        v43 = v42; /*0x100848c27*/
        v11 = v41; /*0x100848c2a*/
        v27 = v39 + v43; /*0x100848c2d*/
        v53 = v27; /*0x100848c30*/
        v29 = v30; /*0x100848c37*/
      }
    }
  }
  v9 = v58; /*0x100848c70*/
  v44 = v58 - v29; /*0x100848c77*/
  v45 = v51; /*0x100848c7a*/
  if ( v58 - v29 > v51 - v27 ) /*0x100848c8a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v51, v27, v58 - v29, 1, 1); /*0x100848dd3*/
    v27 = v53; /*0x100848dd8*/
    v45 = v51; /*0x100848ddf*/
    __s2 = (void *)v52; /*0x100848ded*/
  }
  v46 = (const void *)(v11 + v29); /*0x100848c97*/
  v47 = v27; /*0x100848c9a*/
  memcpy((char *)__s2 + v27, v46, v44); /*0x100848ca4*/
  if ( v9 ) /*0x100848cac*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, 1); /*0x100848cb9*/
  v48 = v44 + v47; /*0x100848cc1*/
  if ( 2 * v55 ) /*0x100848cc8*/
  {
    LODWORD(v9) = v44 + v47; /*0x100848d21*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v55, 1); /*0x100848d24*/
    v48 = v44 + v47; /*0x100848d29*/
    v49 = v44 + v47 == 35; /*0x100848d2c*/
    if ( v44 + v47 > 0x23 ) /*0x100848d30*/
    {
LABEL_42:
      core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(&v51, __s2, v48, &unk_10167CB53, 35); /*0x100848cdb*/
      _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100848d09*/
        &v55,
        &v51);
      LOBYTE(v9) = 1; /*0x100848d12*/
      if ( (_BYTE)v55 ) /*0x100848d14*/
        goto LABEL_49; /*0x100848d14*/
      goto LABEL_47; /*0x100848d14*/
    }
  }
  else
  {
    v49 = v48 == 35; /*0x100848cd5*/
    if ( v48 > 0x23 ) /*0x100848cd9*/
      goto LABEL_42; /*0x100848cd9*/
  }
  if ( v49 && !memcmp(&unk_10167CB53, __s2, 0x23u) ) /*0x100848d4e*/
  {
    LOBYTE(v9) = 1; /*0x100848db2*/
    if ( !v45 ) /*0x100848db7*/
      return (unsigned int)v9; /*0x100848db7*/
    goto LABEL_50; /*0x100848db7*/
  }
LABEL_47:
  LOBYTE(v9) = 1; /*0x100848d50*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100848d63*/
                           &unk_10167CB76,
                           0x1Eu,
                           __s2) )
    LODWORD(v9) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100848d86*/
                    &unk_10167CB94,
                    0x1Cu,
                    __s2);
LABEL_49:
  if ( v45 ) /*0x100848d8b*/
LABEL_50:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v45, 1); /*0x100848d8d*/
  return (unsigned int)v9; /*0x100848da0*/
}