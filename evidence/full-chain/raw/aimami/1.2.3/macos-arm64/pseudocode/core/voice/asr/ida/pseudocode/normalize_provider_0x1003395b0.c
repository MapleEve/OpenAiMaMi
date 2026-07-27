// __ZN13codexmate_lib4core5voice3asr18normalize_provider @ 0x1003395b0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // r13
  __int64 v9; // rbx
  const void *v10; // r12
  unsigned __int64 v11; // r15
  void *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  void *v19; // rax
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
  int v32; // edx
  char *v33; // rax
  __int64 v34; // rcx
  __int64 *v36; // [rsp+0h] [rbp-30h]

  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1003395c7*/
  v8 = v7; /*0x1003395cc*/
  if ( v7 < 0 ) /*0x1003395d2*/
  {
    v9 = 0; /*0x1003395d4*/
    goto LABEL_3; /*0x1003395d4*/
  }
  if ( !v7 ) /*0x1003395e1*/
  {
    v13 = 1; /*0x10033962e*/
    v14 = 1; /*0x100339634*/
    v17 = v6; /*0x100339639*/
    v8 = 0; /*0x100339644*/
    goto LABEL_9; /*0x100339644*/
  }
  v36 = a1; /*0x1003395e3*/
  v10 = (const void *)v6; /*0x1003395e7*/
  v11 = v7; /*0x1003395ea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1003395ed*/
  v9 = 1; /*0x1003395f2*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1003395ff*/
  if ( !v12 ) /*0x100339607*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1003395d6*/
  v13 = (__int64)v12; /*0x100339609*/
  v14 = (__int64)v12; /*0x10033960c*/
  memcpy(v12, v10, v8); /*0x100339615*/
  v15 = v11; /*0x10033961a*/
  if ( v11 < 8 ) /*0x100339621*/
  {
    v16 = 0; /*0x100339623*/
    a1 = v36; /*0x100339625*/
    goto LABEL_21; /*0x100339629*/
  }
  a1 = v36; /*0x1003396ad*/
  if ( v15 < 0x20 ) /*0x1003396b1*/
  {
    v16 = 0; /*0x1003396b3*/
    goto LABEL_18; /*0x1003396b5*/
  }
  v16 = v15 & 0x7FFFFFFFFFFFFFE0LL; /*0x1003396bd*/
  v17 = 0; /*0x1003396c0*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1003396c2*/
  v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1003396ca*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1003396d2*/
  do /*0x100339739*/
  {
    v23 = _mm_loadu_si128((const __m128i *)(v13 + v17)); /*0x1003396e0*/
    v24 = _mm_loadu_si128((const __m128i *)(v13 + v17 + 16)); /*0x1003396e6*/
    v25 = _mm_add_epi8(v23, si128); /*0x1003396f1*/
    v26 = _mm_add_epi8(v24, si128); /*0x1003396f9*/
    *(__m128i *)(v13 + v17) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v25, v21), v25), v22), v23); /*0x100339725*/
    *(__m128i *)(v13 + v17 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v26, v21), v26), v22), v24); /*0x10033972b*/
    v17 += 32; /*0x100339732*/
  }
  while ( v16 != v17 ); /*0x100339739*/
  if ( v15 == v16 ) /*0x10033973e*/
    goto LABEL_23; /*0x10033973e*/
  if ( (v8 & 0x18) != 0 ) /*0x100339748*/
  {
LABEL_18:
    v17 = v16; /*0x10033974a*/
    v16 = v15 & 0x7FFFFFFFFFFFFFF8LL; /*0x100339754*/
    v27 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100339757*/
    v28 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10033975f*/
    v29 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100339767*/
    do /*0x10033979f*/
    {
      v30 = _mm_loadl_epi64((const __m128i *)(v13 + v17)); /*0x100339770*/
      v31 = _mm_add_epi8(v30, v27); /*0x10033977a*/
      *(_QWORD *)(v13 + v17) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v31, v28), v31), v29), v30).u64[0]; /*0x100339792*/
      v17 += 8; /*0x100339798*/
    }
    while ( v16 != v17 ); /*0x10033979f*/
    goto LABEL_22; /*0x10033979f*/
  }
  do /*0x1003397c4*/
  {
LABEL_21:
    v32 = *(unsigned __int8 *)(v13 + v16); /*0x1003397a3*/
    v17 = (unsigned int)(v32 - 65); /*0x1003397a8*/
    LOBYTE(v17) = v32 | (32 * ((unsigned __int8)(v32 - 65) < 0x1Au)); /*0x1003397b7*/
    *(_BYTE *)(v13 + v16++) = v17; /*0x1003397ba*/
LABEL_22:
    ; /*0x1003397c1*/
  }
  while ( v15 != v16 ); /*0x1003397c4*/
LABEL_23:
  switch ( v15 ) /*0x1003397e2*/
  {
    case 5uLL: /*0x1003397e2*/
      if ( !(*(_DWORD *)v13 ^ 0x6C707061 | *(unsigned __int8 *)(v13 + 4) ^ 0x65) ) /*0x1003397f6*/
        goto LABEL_44; /*0x1003397f6*/
      v8 = 5; /*0x1003397fc*/
      goto LABEL_9; /*0x100339802*/
    case 6uLL: /*0x1003397e2*/
      if ( !(*(_DWORD *)v13 ^ 0x79696C61 | *(unsigned __int16 *)(v13 + 4) ^ 0x6E75) /*0x1003398c5*/
        || !(*(_DWORD *)v13 ^ 0x616E7566 | *(unsigned __int16 *)(v13 + 4) ^ 0x7273) )
      {
        goto LABEL_42; /*0x1003398c7*/
      }
      if ( *(_DWORD *)v13 ^ 0x6E65706F | *(unsigned __int16 *)(v13 + 4) ^ 0x6961 ) /*0x1003398e0*/
      {
        v8 = 6; /*0x1003398e8*/
        goto LABEL_9; /*0x1003398ee*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v17); /*0x100339a27*/
      v18 = 6; /*0x100339a2c*/
      v33 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100339a3c*/
      if ( !v33 ) /*0x100339a44*/
        goto LABEL_51; /*0x100339a44*/
      *((_WORD *)v33 + 2) = 26977; /*0x100339a46*/
      *(_DWORD *)v33 = 1852141679; /*0x100339a4c*/
      v34 = 6; /*0x100339a52*/
      break; /*0x100339a57*/
    case 7uLL: /*0x1003397e2*/
      if ( !(*(_DWORD *)v13 ^ 0x2D6E7566 | *(_DWORD *)(v13 + 3) ^ 0x7273612D) /*0x100339831*/
        || !(*(_DWORD *)v13 ^ 0x5F6E7566 | *(_DWORD *)(v13 + 3) ^ 0x7273615F) )
      {
        goto LABEL_42; /*0x100339833*/
      }
      v8 = 7; /*0x100339839*/
      goto LABEL_9; /*0x10033983f*/
    case 0xBuLL: /*0x1003397e2*/
      if ( !(*(_QWORD *)v13 ^ 0x657073656C707061LL | *(_QWORD *)(v13 + 3) ^ 0x686365657073656CLL) ) /*0x100339911*/
        goto LABEL_44; /*0x100339911*/
      v8 = 11; /*0x100339917*/
      goto LABEL_9; /*0x10033991d*/
    case 0xCuLL: /*0x1003397e2*/
      if ( !(*(_QWORD *)v13 ^ 0x75666E7579696C61LL | *(unsigned int *)(v13 + 8) ^ 0x7273616ELL) ) /*0x10033993d*/
        goto LABEL_42; /*0x10033993d*/
      if ( *(_QWORD *)v13 ^ 0x70735F656C707061LL | *(unsigned int *)(v13 + 8) ^ 0x68636565LL /*0x100339974*/
        && *(_QWORD *)v13 ^ 0x70732D656C707061LL | *(unsigned int *)(v13 + 8) ^ 0x68636565LL )
      {
        v8 = 12; /*0x100339979*/
LABEL_9:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v17); /*0x100339647*/
        v18 = 11; /*0x10033964c*/
        v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10033965c*/
        if ( v19 ) /*0x100339664*/
        {
          qmemcpy(v19, "appleSpeech", 11); /*0x100339674*/
          *a1 = 11; /*0x10033967e*/
          a1[1] = (__int64)v19; /*0x100339685*/
          a1[2] = 11; /*0x100339689*/
          if ( !v8 ) /*0x100339694*/
            return a1; /*0x100339694*/
          goto LABEL_47; /*0x100339694*/
        }
LABEL_51:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x100339a5f*/
      }
LABEL_44:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v17); /*0x1003399c2*/
      v18 = 11; /*0x1003399c7*/
      v33 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1003399d7*/
      if ( !v33 ) /*0x1003399df*/
        goto LABEL_51; /*0x1003399df*/
      qmemcpy(v33, "appleSpeech", 11); /*0x1003399eb*/
      v34 = 11; /*0x1003399f5*/
      break; /*0x1003399f5*/
    case 0xEuLL: /*0x1003397e2*/
      if ( *(_QWORD *)v13 ^ 0x665F6E7579696C61LL | *(_QWORD *)(v13 + 6) ^ 0x7273615F6E75665FLL /*0x100339883*/
        && *(_QWORD *)v13 ^ 0x662D6E7579696C61LL | *(_QWORD *)(v13 + 6) ^ 0x7273612D6E75662DLL )
      {
        v8 = 14; /*0x10033988c*/
        goto LABEL_9; /*0x100339892*/
      }
LABEL_42:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v17); /*0x100339984*/
      v18 = 12; /*0x100339989*/
      v33 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100339999*/
      if ( !v33 ) /*0x1003399a1*/
        goto LABEL_51; /*0x1003399a1*/
      qmemcpy(v33, "aliyunFunAsr", 12); /*0x1003399b1*/
      v34 = 12; /*0x1003399bb*/
      break; /*0x1003399c0*/
    default:
      goto LABEL_9;
  }
  *a1 = v34; /*0x1003399fa*/
  a1[1] = (__int64)v33; /*0x1003399fd*/
  a1[2] = v34; /*0x100339a01*/
LABEL_47:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v8, 1); /*0x100339a05*/
  return a1; /*0x100339a1c*/
}