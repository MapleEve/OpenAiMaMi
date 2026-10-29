// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::codex_effort_to_anthropic::h786da2a7c494aaa7; addr: 0x100897b40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:19Z
void *__fastcall codexmate_lib::core::relay::anthropic_reasoning::codex_effort_to_anthropic::h786da2a7c494aaa7(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int8 *v8; // rax
  __int64 v9; // rdx
  size_t v10; // rbx
  __int64 v11; // r13
  unsigned __int8 *v12; // r14
  unsigned __int64 v13; // r15
  char *v14; // rax
  char *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rsi
  __m128i si128; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  __m128i v24; // xmm6
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  unsigned __int64 v31; // r15
  size_t v32; // r13
  void *v33; // rax
  unsigned __int32 v34; // eax
  int v35; // eax
  char *v36; // rax
  void *v37; // rsi
  double v38; // xmm0_8
  void *result; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // r12
  const void *v44; // r14
  __int64 v45; // rcx
  char v46; // cl
  __int64 v47; // [rsp+0h] [rbp-70h] BYREF
  __int64 v48; // [rsp+8h] [rbp-68h]
  char v49; // [rsp+25h] [rbp-4Bh]
  __int64 v50; // [rsp+28h] [rbp-48h]
  __int64 v51; // [rsp+30h] [rbp-40h]
  void *v52; // [rsp+38h] [rbp-38h]
  void *__s2; // [rsp+40h] [rbp-30h]

  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a3, a4); /*0x100897b5d*/
  v10 = v9; /*0x100897b62*/
  if ( v9 < 0 ) /*0x100897b68*/
  {
    v11 = 0; /*0x100897b6a*/
    goto LABEL_3; /*0x100897b6a*/
  }
  if ( !v9 ) /*0x100897b78*/
    return nullptr; /*0x100897e86*/
  v52 = (void *)a1; /*0x100897b7a*/
  v51 = a2; /*0x100897b7e*/
  v12 = v8; /*0x100897b82*/
  v13 = v9; /*0x100897b85*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a4, v9); /*0x100897b88*/
  v11 = 1; /*0x100897b8d*/
  v14 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100897b9b*/
  if ( !v14 ) /*0x100897ba3*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x100897b6d*/
  v15 = v14; /*0x100897ba5*/
  memcpy(v14, v12, v10); /*0x100897bb1*/
  if ( v13 < 8 ) /*0x100897bba*/
  {
    v16 = 0; /*0x100897bbc*/
    do /*0x100897cf4*/
    {
LABEL_18:
      v15[v16] |= 32 * ((unsigned __int8)(v15[v16] - 65) < 0x1Au); /*0x100897cd3*/
      ++v16; /*0x100897cee*/
LABEL_19:
      ; /*0x100897cf1*/
    }
    while ( v13 != v16 ); /*0x100897cf4*/
    goto LABEL_20; /*0x100897cf4*/
  }
  if ( v13 < 0x20 ) /*0x100897be6*/
  {
    v16 = 0; /*0x100897be8*/
    goto LABEL_15; /*0x100897bea*/
  }
  v16 = v13 & 0x7FFFFFFFFFFFFFE0LL; /*0x100897bf2*/
  v17 = 0; /*0x100897bf5*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x100897bf7*/
  v19 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x100897bff*/
  v20 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x100897c07*/
  do /*0x100897c69*/
  {
    v21 = _mm_loadu_si128((const __m128i *)&v15[v17]); /*0x100897c10*/
    v22 = _mm_loadu_si128((const __m128i *)&v15[v17 + 16]); /*0x100897c16*/
    v23 = _mm_add_epi8(v21, si128); /*0x100897c21*/
    v24 = _mm_add_epi8(v22, si128); /*0x100897c29*/
    *(__m128i *)&v15[v17] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v23, v19), v23), v20), v21); /*0x100897c55*/
    *(__m128i *)&v15[v17 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v24, v19), v24), v20), v22); /*0x100897c5b*/
    v17 += 32; /*0x100897c62*/
  }
  while ( v16 != v17 ); /*0x100897c69*/
  if ( v13 != v16 ) /*0x100897c6e*/
  {
    if ( (v10 & 0x18) == 0 ) /*0x100897c77*/
      goto LABEL_18; /*0x100897c77*/
LABEL_15:
    v25 = v16; /*0x100897c79*/
    v16 = v13 & 0x7FFFFFFFFFFFFFF8LL; /*0x100897c83*/
    v26 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x100897c86*/
    v27 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x100897c8e*/
    v28 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x100897c96*/
    do /*0x100897ccf*/
    {
      v29 = _mm_loadl_epi64((const __m128i *)&v15[v25]); /*0x100897ca0*/
      v30 = _mm_add_epi8(v29, v26); /*0x100897caa*/
      *(_QWORD *)&v15[v25] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v30, v27), v30), v28), v29).u64[0]; /*0x100897cc2*/
      v25 += 8; /*0x100897cc8*/
    }
    while ( v16 != v25 ); /*0x100897ccf*/
    goto LABEL_19; /*0x100897ccf*/
  }
LABEL_20:
  v31 = v13 - 3; /*0x100897cf6*/
  switch ( v31 ) /*0x100897d12*/
  {
    case 0uLL: /*0x100897d12*/
      v32 = 3; /*0x100897d27*/
      LOBYTE(v31) = 1; /*0x100897d2d*/
      if ( *(_WORD *)v15 ^ 0x6F6C | (unsigned __int8)v15[2] ^ 0x77 ) /*0x100897d30*/
      {
        if ( *(_WORD *)v15 ^ 0x616D | (unsigned __int8)v15[2] ^ 0x78 ) /*0x100897d4c*/
          goto LABEL_40; /*0x100897d4f*/
        v33 = &anon_0868f19ff3e9f3569e732f60bdb020cc_897; /*0x100897d55*/
      }
      else
      {
        v33 = &anon_0868f19ff3e9f3569e732f60bdb020cc_892; /*0x100897e21*/
      }
      __s2 = v33; /*0x100897e28*/
      goto LABEL_37; /*0x100897e28*/
    case 1uLL: /*0x100897d12*/
      if ( *(_DWORD *)v15 != 1751607656 ) /*0x100897e00*/
        goto LABEL_40; /*0x100897e00*/
      __s2 = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x100897e09*/
      v32 = 4; /*0x100897e0d*/
      goto LABEL_33; /*0x100897e0d*/
    case 2uLL: /*0x100897d12*/
      v32 = 5; /*0x100897da7*/
      LOBYTE(v12) = 1; /*0x100897dad*/
      if ( *(_DWORD *)v15 ^ 0x67696878 | (unsigned __int8)v15[4] ^ 0x68 ) /*0x100897db0*/
      {
        v34 = _byteswap_ulong(*(_DWORD *)v15); /*0x100897db8*/
        if ( v34 == 1970041970 ) /*0x100897dbf*/
          v35 = (unsigned __int8)v15[4] - 97; /*0x100897dc7*/
        else
          v35 = 2 * (v34 >= 0x756C7472) - 1; /*0x100897e37*/
        if ( v35 ) /*0x100897e3d*/
        {
LABEL_40:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v10, 1); /*0x100897e3f*/
          return nullptr; /*0x100897e4f*/
        }
        v36 = "ultra-"; /*0x100897e51*/
      }
      else
      {
        v36 = (char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_894; /*0x100897e18*/
      }
      __s2 = v36; /*0x100897e58*/
LABEL_43:
      LODWORD(v31) = 0; /*0x100897e5c*/
LABEL_44:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v10, 1); /*0x100897e5f*/
      v37 = v52; /*0x100897e73*/
      v38 = codexmate_lib::core::relay::anthropic_reasoning::model_profile::hc5425a7e3a4c6fca( /*0x100897e7b*/
              (__int64)&v47,
              (__int64)v52,
              v51);
      if ( v49 == 2 ) /*0x100897e84*/
        return nullptr; /*0x100897e84*/
      v40 = v47; /*0x100897e9a*/
      v41 = v48; /*0x100897e9e*/
      if ( (_BYTE)v12 && !(*(_DWORD *)__s2 ^ 0x72746C75 | *((unsigned __int8 *)__s2 + 4) ^ 0x61) ) /*0x100897ebb*/
      {
        if ( !v48 ) /*0x100897fdc*/
          return nullptr; /*0x100897fdc*/
        result = *(void **)(v47 + 16 * v48 - 16); /*0x100897fe6*/
      }
      else
      {
        LODWORD(v52) = v31; /*0x100897ec1*/
        LODWORD(v51) = (_DWORD)v12; /*0x100897ec5*/
        v42 = 16 * v48; /*0x100897ecc*/
        v50 = v48; /*0x100897ed0*/
        if ( v48 ) /*0x100897ed7*/
        {
          v43 = 0; /*0x100897ed9*/
          do /*0x100897ee7*/
          {
            if ( *(_QWORD *)(v40 + v43 + 8) == v32 ) /*0x100897eee*/
            {
              v44 = *(const void **)(v40 + v43); /*0x100897ef4*/
              v37 = __s2; /*0x100897ef7*/
              if ( !memcmp(v44, __s2, v32) ) /*0x100897efe*/
                return (void *)v44; /*0x100897f0a*/
            }
            v43 += 16; /*0x100897ee0*/
          }
          while ( v42 != v43 ); /*0x100897ee7*/
        }
        if ( (_BYTE)v51 ) /*0x100897f13*/
        {
          result = nullptr; /*0x100897f15*/
          if ( v50 && !(*(_DWORD *)__s2 ^ 0x67696878 | *((unsigned __int8 *)__s2 + 4) ^ 0x68) ) /*0x100897f3a*/
          {
            v45 = 0; /*0x100897f42*/
            result = &anon_0868f19ff3e9f3569e732f60bdb020cc_897; /*0x100897f44*/
            while ( *(_QWORD *)(v40 + v45 + 8) != 3 /*0x100897f7c*/
                 || **(_WORD **)(v40 + v45) ^ 0x616D | *(unsigned __int8 *)(*(_QWORD *)(v40 + v45) + 2LL) ^ 0x78 )
            {
              v45 += 16; /*0x100897f50*/
              if ( v42 == v45 ) /*0x100897f57*/
                return nullptr; /*0x100897ff5*/
            }
          }
        }
        else
        {
          if ( !(_BYTE)v52 || *(_WORD *)__s2 ^ 0x616D | *((unsigned __int8 *)__s2 + 2) ^ 0x78 ) /*0x100897fa0*/
            return nullptr; /*0x100897fa3*/
          v47 = v40; /*0x100897fac*/
          v48 = v40 + v42; /*0x100897fb0*/
          v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h524882ccee1ed29c( /*0x100897fbd*/
                  &v47,
                  v37,
                  v41,
                  v38);
          result = nullptr; /*0x100897fc6*/
          if ( v46 ) /*0x100897fca*/
            result = &anon_0868f19ff3e9f3569e732f60bdb020cc_894; /*0x100897fca*/
        }
      }
      break; /*0x100897ff5*/
    case 3uLL: /*0x100897d12*/
      if ( *(_DWORD *)v15 ^ 0x6964656D | *((unsigned __int16 *)v15 + 2) ^ 0x6D75 ) /*0x100897de1*/
        goto LABEL_40; /*0x100897de3*/
      __s2 = &anon_0868f19ff3e9f3569e732f60bdb020cc_891; /*0x100897dec*/
      v32 = 6; /*0x100897df0*/
LABEL_33:
      LODWORD(v12) = 0; /*0x100897e13*/
      goto LABEL_43; /*0x100897e16*/
    case 4uLL: /*0x100897d12*/
      if ( *(_DWORD *)v15 ^ 0x696E696D | *(_DWORD *)(v15 + 3) ^ 0x6C616D69 ) /*0x100897d74*/
        goto LABEL_40; /*0x100897d76*/
      __s2 = &anon_0868f19ff3e9f3569e732f60bdb020cc_892; /*0x100897d83*/
      v32 = 3; /*0x100897d87*/
      LOBYTE(v31) = 1; /*0x100897d8d*/
LABEL_37:
      LODWORD(v12) = 0; /*0x100897e2c*/
      goto LABEL_44; /*0x100897e2f*/
    default:
      goto LABEL_40;
  }
  return result; /*0x100897e8b*/
}