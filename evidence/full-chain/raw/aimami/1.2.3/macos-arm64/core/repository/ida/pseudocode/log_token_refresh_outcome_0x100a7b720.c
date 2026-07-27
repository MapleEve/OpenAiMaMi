// __ZN13codexmate_lib4core10repository25log_token_refresh_outcome @ 0x100a7b720 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::core::repository::log_token_refresh_outcome::h6593a802355651d2(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rax
  size_t v5; // rbx
  __int64 v6; // r12
  const void *v7; // r15
  void *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  void *v25; // r15
  __int64 v26; // r12
  char v27; // al
  _QWORD v28[2]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD *v30; // [rsp+20h] [rbp-B0h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+28h] [rbp-A8h]
  _QWORD *v32; // [rsp+30h] [rbp-A0h]
  __int64 (__fastcall *v33)(); // [rsp+38h] [rbp-98h]
  __int64 v34; // [rsp+40h] [rbp-90h] BYREF
  char *v35; // [rsp+48h] [rbp-88h]
  __int64 v36; // [rsp+50h] [rbp-80h]
  __int64 v37; // [rsp+58h] [rbp-78h]
  const char *v38; // [rsp+60h] [rbp-70h]
  __int64 v39; // [rsp+68h] [rbp-68h]
  __int64 v40; // [rsp+70h] [rbp-60h]
  char *v41; // [rsp+78h] [rbp-58h]
  __int64 v42; // [rsp+80h] [rbp-50h]
  __int64 v43; // [rsp+88h] [rbp-48h]
  void *v44; // [rsp+90h] [rbp-40h]
  _QWORD *v45; // [rsp+98h] [rbp-38h]
  _BYTE v46[41]; // [rsp+A7h] [rbp-29h] BYREF

  v29[0] = a1; /*0x100a7b73e*/
  result = 4; /*0x100a7b752*/
  if ( *(__int64 *)a3 < 0 ) /*0x100a7b757*/
    result = *(_QWORD *)a3 ^ 0x8000000000000000LL; /*0x100a7b757*/
  v29[1] = a2; /*0x100a7b75b*/
  switch ( result ) /*0x100a7b770*/
  {
    case 0uLL: /*0x100a7b770*/
    case 1uLL: /*0x100a7b770*/
      return result;
    case 2uLL: /*0x100a7b770*/
      result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100a7b779*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x100a7b780*/
        return result; /*0x100a7b780*/
      v30 = v29; /*0x100a7b78d*/
      v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7b79b*/
      v40 = 2; /*0x100a7b7a2*/
      v41 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7b7b1*/
      v42 = 31; /*0x100a7b7b5*/
      v44 = &unk_1017C9B67; /*0x100a7b7c4*/
      v45 = &v30; /*0x100a7b7cf*/
      v34 = 0; /*0x100a7b7d3*/
      v35 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7b7de*/
      v36 = 31; /*0x100a7b7e5*/
      v37 = 0; /*0x100a7b7ed*/
      v38 = "src/core/repository.rs"; /*0x100a7b7fc*/
      v39 = 22; /*0x100a7b800*/
      v4 = 0xD9100000001LL; /*0x100a7b808*/
      goto LABEL_52; /*0x100a7b812*/
    case 3uLL: /*0x100a7b770*/
      result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100a7b839*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x100a7b840*/
        return result; /*0x100a7b840*/
      v30 = v29; /*0x100a7b84d*/
      v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7b85b*/
      v40 = 2; /*0x100a7b862*/
      v41 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7b871*/
      v42 = 31; /*0x100a7b875*/
      v44 = &unk_1017C9BC7; /*0x100a7b884*/
      v45 = &v30; /*0x100a7b88f*/
      v34 = 0; /*0x100a7b893*/
      v35 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7b89e*/
      v36 = 31; /*0x100a7b8a5*/
      v37 = 0; /*0x100a7b8ad*/
      v38 = "src/core/repository.rs"; /*0x100a7b8bc*/
      v39 = 22; /*0x100a7b8c0*/
      v4 = 0xD9600000001LL; /*0x100a7b8c8*/
      goto LABEL_52; /*0x100a7b8d2*/
    case 4uLL: /*0x100a7b770*/
      v5 = *(_QWORD *)(a3 + 16); /*0x100a7b817*/
      if ( (v5 & 0x8000000000000000LL) != 0LL ) /*0x100a7b81e*/
      {
        v6 = 0; /*0x100a7b824*/
        goto LABEL_8; /*0x100a7b824*/
      }
      v7 = *(const void **)(a3 + 8); /*0x100a7b8d7*/
      if ( !v5 ) /*0x100a7b8db*/
      {
        v9 = 1; /*0x100a7b91c*/
        memcpy((void *)1, *(const void **)(a3 + 8), *(_QWORD *)(a3 + 16)); /*0x100a7b92d*/
        goto LABEL_27; /*0x100a7b932*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a7b8dd*/
      v6 = 1; /*0x100a7b8e2*/
      v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100a7b8f0*/
      if ( !v8 ) /*0x100a7b8f8*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100a7b827*/
      v9 = (__int64)v8; /*0x100a7b8fe*/
      memcpy(v8, v7, v5); /*0x100a7b90a*/
      if ( v5 < 8 ) /*0x100a7b913*/
      {
        v10 = 0; /*0x100a7b915*/
        goto LABEL_25; /*0x100a7b917*/
      }
      if ( v5 < 0x20 ) /*0x100a7b93b*/
      {
        v10 = 0; /*0x100a7b93d*/
        goto LABEL_22; /*0x100a7b93f*/
      }
      v10 = v5 & 0x7FFFFFFFFFFFFFE0LL; /*0x100a7b947*/
      v11 = 0; /*0x100a7b94a*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100a7b94c*/
      v13 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100a7b954*/
      v14 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100a7b95c*/
      do /*0x100a7b9c9*/
      {
        v15 = _mm_loadu_si128((const __m128i *)(v9 + v11)); /*0x100a7b970*/
        v16 = _mm_loadu_si128((const __m128i *)(v9 + v11 + 16)); /*0x100a7b976*/
        v17 = _mm_add_epi8(v15, si128); /*0x100a7b981*/
        v18 = _mm_add_epi8(v16, si128); /*0x100a7b989*/
        *(__m128i *)(v9 + v11) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v13), v17), v14), v15); /*0x100a7b9b5*/
        *(__m128i *)(v9 + v11 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v13), v18), v14), v16); /*0x100a7b9bb*/
        v11 += 32; /*0x100a7b9c2*/
      }
      while ( v10 != v11 ); /*0x100a7b9c9*/
      if ( v5 == v10 ) /*0x100a7b9ce*/
        goto LABEL_27; /*0x100a7b9ce*/
      if ( (v5 & 0x18) != 0 ) /*0x100a7b9d7*/
      {
LABEL_22:
        v19 = v10; /*0x100a7b9d9*/
        v10 = v5 & 0x7FFFFFFFFFFFFFF8LL; /*0x100a7b9e3*/
        v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100a7b9e6*/
        v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100a7b9ee*/
        v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100a7b9f6*/
        do /*0x100a7ba2f*/
        {
          v23 = _mm_loadl_epi64((const __m128i *)(v9 + v19)); /*0x100a7ba00*/
          v24 = _mm_add_epi8(v23, v20); /*0x100a7ba0a*/
          *(_QWORD *)(v9 + v19) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v24, v21), v24), v22), v23).u64[0]; /*0x100a7ba22*/
          v19 += 8; /*0x100a7ba28*/
        }
        while ( v10 != v19 ); /*0x100a7ba2f*/
        goto LABEL_26; /*0x100a7ba2f*/
      }
      do /*0x100a7ba50*/
      {
LABEL_25:
        *(_BYTE *)(v9 + v10) |= 32 * ((unsigned __int8)(*(_BYTE *)(v9 + v10) - 65) < 0x1Au); /*0x100a7ba33*/
        ++v10; /*0x100a7ba4a*/
LABEL_26:
        ; /*0x100a7ba4d*/
      }
      while ( v5 != v10 ); /*0x100a7ba50*/
LABEL_27:
      if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7ba7f*/
                              &unk_10167BBC8,
                              8u,
                              (void *)v9)
        && (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                              &unk_10167C8DE,
                              5u,
                              (void *)v9) )
      {
        v25 = &unk_10167C981; /*0x100a7ba88*/
        v26 = 21; /*0x100a7ba8f*/
      }
      else if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7baf3*/
                                    &unk_10167C8E3,
                                    9u,
                                    (void *)v9)
             || (v25 = &unk_10167BB60,
                 v26 = 16,
                 !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     &unk_10167BC2C,
                                     4u,
                                     (void *)v9))
             && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                    &unk_10167C8DE,
                                    5u,
                                    (void *)v9) )
      {
        v25 = &unk_10167C972; /*0x100a7bb17*/
        v26 = 15; /*0x100a7bb1e*/
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bb3e*/
                                 &unk_10167C8EC,
                                 7u,
                                 (void *)v9)
          && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &unk_10167C8F3,
                                 9u,
                                 (void *)v9) )
        {
          v25 = &unk_10167C8FC; /*0x100a7bb4b*/
          v26 = 5; /*0x100a7bb52*/
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bb66*/
                                   &unk_10167C8FC,
                                   5u,
                                   (void *)v9) )
          {
            v26 = 12; /*0x100a7bb8a*/
            if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bb85*/
                                    &unk_10167BBD0,
                                    8u,
                                    (void *)v9) )
            {
              v25 = &unk_10167C966; /*0x100a7bb94*/
            }
            else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bbb2*/
                                         &unk_10167C901,
                                         6u,
                                         (void *)v9) )
            {
              v25 = &unk_10167C95A; /*0x100a7bbbb*/
            }
            else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bbd9*/
                                         &unk_10167C907,
                                         0xAu,
                                         (void *)v9) )
            {
              v25 = &unk_10167C948; /*0x100a7bbe2*/
              v26 = 18; /*0x100a7bbe9*/
            }
            else
            {
              v25 = &unk_10167C8D7; /*0x100a7bc08*/
              v26 = 7; /*0x100a7bc0f*/
              if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bc2b*/
                                       &unk_10167C911,
                                       0x16u,
                                       (void *)v9)
                && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                       &unk_10167C927,
                                       0xBu,
                                       (void *)v9) )
              {
                v26 = 5; /*0x100a7bc3b*/
                v27 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a7bc4c*/
                        &unk_10167C932,
                        5u,
                        (void *)v9);
                if ( v27 ) /*0x100a7bc58*/
                  v26 = 12; /*0x100a7bc58*/
                v25 = &unk_10167C937; /*0x100a7bc63*/
                if ( v27 ) /*0x100a7bc6a*/
                  v25 = &unk_10167C93C; /*0x100a7bc6a*/
              }
            }
          }
        }
      }
      if ( v5 ) /*0x100a7bc71*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v5, 1); /*0x100a7bc7e*/
      v28[0] = v25; /*0x100a7bc83*/
      v28[1] = v26; /*0x100a7bc8a*/
      result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100a7bc98*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a7bc9f*/
      {
        v30 = v29; /*0x100a7bcac*/
        v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7bcba*/
        v32 = v28; /*0x100a7bcc8*/
        v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7bccf*/
        v40 = 2; /*0x100a7bcd6*/
        v41 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7bce5*/
        v42 = 31; /*0x100a7bce9*/
        v44 = &unk_1017C9C24; /*0x100a7bcf8*/
        v45 = &v30; /*0x100a7bd03*/
        v34 = 0; /*0x100a7bd07*/
        v35 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7bd12*/
        v36 = 31; /*0x100a7bd19*/
        v37 = 0; /*0x100a7bd21*/
        v38 = "src/core/repository.rs"; /*0x100a7bd30*/
        v39 = 22; /*0x100a7bd34*/
        v4 = 0xD9C00000001LL; /*0x100a7bd3c*/
LABEL_52:
        v43 = v4; /*0x100a7bd46*/
        return _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v46, &v34); /*0x100a7bd55*/
      }
      return result;
  }
}