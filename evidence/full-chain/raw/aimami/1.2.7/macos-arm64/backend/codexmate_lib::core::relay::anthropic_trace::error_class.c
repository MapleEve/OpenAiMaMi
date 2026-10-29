// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::error_class::h2b657d94910c43d2; addr: 0x1005d42f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
char *__fastcall codexmate_lib::core::relay::anthropic_trace::error_class::h2b657d94910c43d2(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const void *v3; // r15
  size_t v4; // rbx
  __int64 v5; // r12
  unsigned __int16 *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  char *v23; // r12
  _QWORD v25[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+18h] [rbp-38h] BYREF
  size_t __n; // [rsp+28h] [rbp-28h]

  v25[0] = a1; /*0x1005d4302*/
  v25[1] = a1 + a2; /*0x1005d4306*/
  v25[2] = 4096; /*0x1005d430a*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h9a1536ab64182627( /*0x1005d431a*/
    v26,
    v25);
  v3 = (const void *)v26[1]; /*0x1005d431f*/
  v4 = __n; /*0x1005d4323*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005d432a*/
  {
    v5 = 0; /*0x1005d432c*/
    goto LABEL_3; /*0x1005d432c*/
  }
  if ( !__n ) /*0x1005d433c*/
  {
    v7 = 1; /*0x1005d4379*/
    goto LABEL_20; /*0x1005d438f*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v25, v2); /*0x1005d433e*/
  v5 = 1; /*0x1005d4343*/
  v6 = (unsigned __int16 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x1005d4351*/
  if ( !v6 ) /*0x1005d4359*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1005d432f*/
  v7 = (__int64)v6; /*0x1005d435b*/
  memcpy(v6, v3, v4); /*0x1005d4367*/
  if ( v4 < 8 ) /*0x1005d4370*/
  {
    v8 = 0; /*0x1005d4372*/
    goto LABEL_18; /*0x1005d4374*/
  }
  if ( v4 < 0x20 ) /*0x1005d43a2*/
  {
    v8 = 0; /*0x1005d43a4*/
    goto LABEL_15; /*0x1005d43a6*/
  }
  v8 = v4 & 0x7FFFFFFFFFFFFFE0LL; /*0x1005d43ae*/
  v9 = 0; /*0x1005d43b1*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x1005d43b3*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x1005d43bb*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x1005d43c3*/
  do /*0x1005d4429*/
  {
    v13 = _mm_loadu_si128((const __m128i *)(v7 + v9)); /*0x1005d43d0*/
    v14 = _mm_loadu_si128((const __m128i *)(v7 + v9 + 16)); /*0x1005d43d6*/
    v15 = _mm_add_epi8(v13, si128); /*0x1005d43e1*/
    v16 = _mm_add_epi8(v14, si128); /*0x1005d43e9*/
    *(__m128i *)(v7 + v9) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v15, v11), v15), v12), v13); /*0x1005d4415*/
    *(__m128i *)(v7 + v9 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v11), v16), v12), v14); /*0x1005d441b*/
    v9 += 32; /*0x1005d4422*/
  }
  while ( v8 != v9 ); /*0x1005d4429*/
  if ( v4 == v8 ) /*0x1005d442e*/
    goto LABEL_20; /*0x1005d442e*/
  if ( (v4 & 0x18) != 0 ) /*0x1005d4437*/
  {
LABEL_15:
    v17 = v8; /*0x1005d4439*/
    v8 = v4 & 0x7FFFFFFFFFFFFFF8LL; /*0x1005d4443*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x1005d4446*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x1005d444e*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x1005d4456*/
    do /*0x1005d448f*/
    {
      v21 = _mm_loadl_epi64((const __m128i *)(v7 + v17)); /*0x1005d4460*/
      v22 = _mm_add_epi8(v21, v18); /*0x1005d446a*/
      *(_QWORD *)(v7 + v17) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v22, v19), v22), v20), v21).u64[0]; /*0x1005d4482*/
      v17 += 8; /*0x1005d4488*/
    }
    while ( v8 != v17 ); /*0x1005d448f*/
    goto LABEL_19; /*0x1005d448f*/
  }
  do /*0x1005d44d1*/
  {
LABEL_18:
    *(_BYTE *)(v7 + v8) |= 32 * ((unsigned __int8)(*(_BYTE *)(v7 + v8) - 65) < 0x1Au); /*0x1005d44b4*/
    ++v8; /*0x1005d44cb*/
LABEL_19:
    ; /*0x1005d44ce*/
  }
  while ( v4 != v8 ); /*0x1005d44d1*/
LABEL_20:
  if ( v26[0] ) /*0x1005d44da*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v26[0], 1); /*0x1005d44e4*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d44fb*/
                          &unk_1016FD6B3,
                          7u,
                          (void *)v7) )
  {
    v23 = "assistant_prefillobjectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d4504*/
  }
  else
  {
    v23 = (char *)&unk_1016FD6BA; /*0x1005d4516*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d4531*/
                             &unk_1016FD6BA,
                             6u,
                             (void *)v7) )
    {
      v23 = (char *)&unk_1016FD6C0; /*0x1005d453e*/
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d4559*/
                               &unk_1016FD6C0,
                               9u,
                               (void *)v7) )
      {
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d4578*/
                                &unk_1016FD6C9,
                                7u,
                                (void *)v7) )
        {
          v23 = "encrypted_stateassistant_prefillobjectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d4581*/
        }
        else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d45ab*/
                                     &unk_1016FD6D0,
                                     0x13u,
                                     (void *)v7) )
        {
          v23 = "missing_stop_reasonencrypted_stateassistant_prefillobjectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d45b4*/
        }
        else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d45d2*/
                                     &unk_1016FC278,
                                     8u,
                                     (void *)v7) )
        {
          v23 = "open_blockmissing_stop_reasonencrypted_stateassistant_prefillobjectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d45db*/
        }
        else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d45ff*/
                                     &unk_1016FD6E3,
                                     0x13u,
                                     (void *)v7) )
        {
          v23 = "missing_message_stopopen_blockmissing_stop_reasonencrypted_stateassistant_prefillobjectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d4608*/
        }
        else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d462c*/
                                     &unk_1016FD6F6,
                                     5u,
                                     (void *)v7) )
        {
          v23 = "utf8itemsendtailload&lt;&gt;list\r\n\r\nsizeheadHttp"; /*0x1005d4635*/
        }
        else
        {
          v23 = (char *)&unk_1016E9904; /*0x1005d4647*/
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d4662*/
                                   &unk_1016E9904,
                                   4u,
                                   (void *)v7) )
          {
            v23 = (char *)&unk_1016FD60F; /*0x1005d466f*/
            if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d46a9*/
                                     &unk_1016FD60F,
                                     7u,
                                     (void *)v7)
              && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     &unk_1016FD6FB,
                                     9u,
                                     (void *)v7) )
            {
              if ( v4 == 10 && !(*(_QWORD *)v7 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v7 + 8) ^ 0x6E6FLL) ) /*0x1005d46d8*/
              {
                v23 = (char *)&unk_1016FD704; /*0x1005d4767*/
              }
              else
              {
                v23 = (char *)&unk_1016FD70E; /*0x1005d46de*/
                if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d4714*/
                                         &unk_1016FD70E,
                                         5u,
                                         (void *)v7)
                  && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                         &unk_1016FD713,
                                         6u,
                                         (void *)v7) )
                {
                  v23 = "unclassifiedmissing_message_stopopen_blockmissing_stop_reasonencrypted_stateassistant_prefillobj" /*0x1005d4734*/
                        "ectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_inpu"
                        "t_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details";
                  if ( !v4 ) /*0x1005d473b*/
                    v23 = "nonesluglogsnameroletoolstopseedautolastNULL"; /*0x1005d473b*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v4 ) /*0x1005d4742*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v4, 1); /*0x1005d474f*/
  return v23; /*0x1005d475a*/
}