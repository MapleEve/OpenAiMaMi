// __ZN13codexmate_lib4core5relay10translator35collect_responses_custom_tool_names @ 0x10087d5b0 | 基线 same-set
__int128 **__fastcall codexmate_lib::core::relay::translator::collect_responses_custom_tool_names::hd34953133905955d(
        __int128 **a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int128 *v6; // rdx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  signed __int64 v14; // r12
  const void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 i; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  const void *v25; // rsi
  __int128 *v26; // rax
  __int64 v28; // rdi
  size_t v29; // rsi
  __int64 v30; // r14
  __int128 *v31; // [rsp+8h] [rbp-88h] BYREF
  __int128 *v32; // [rsp+10h] [rbp-80h]
  __int128 *v33; // [rsp+18h] [rbp-78h]
  __int128 *v34; // [rsp+20h] [rbp-70h]
  __int64 v35; // [rsp+28h] [rbp-68h]
  __int128 *v36; // [rsp+30h] [rbp-60h]
  size_t v37; // [rsp+38h] [rbp-58h] BYREF
  const void *v38; // [rsp+40h] [rbp-50h]
  size_t v39; // [rsp+48h] [rbp-48h]
  const void *v40; // [rsp+50h] [rbp-40h]
  size_t __n; // [rsp+58h] [rbp-38h]
  const void *v42; // [rsp+60h] [rbp-30h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10087d5cb*/
  v4 = (_QWORD *)v2; /*0x10087d5cd*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x10087d5d4*/
  {
    v5 = *(_QWORD *)v2; /*0x10087d5da*/
    v6 = (__int128 *)v4[1]; /*0x10087d5dd*/
  }
  else
  {
    v30 = v2; /*0x10087d8f7*/
    v5 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10087d8fa*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v3,
           v2);
    v4 = (_QWORD *)v30; /*0x10087d902*/
    *(_QWORD *)v30 = v5; /*0x10087d905*/
    *(_QWORD *)(v30 + 8) = v6; /*0x10087d908*/
    *(_BYTE *)(v30 + 16) = 1; /*0x10087d90c*/
  }
  *v4 = v5 + 1; /*0x10087d5e5*/
  v34 = nullptr; /*0x10087d5ef*/
  v33 = nullptr; /*0x10087d5fa*/
  v32 = nullptr; /*0x10087d605*/
  v31 = &xmmword_1015FBEC0; /*0x10087d610*/
  v35 = v5; /*0x10087d617*/
  v36 = v6; /*0x10087d61b*/
  if ( a2 ) /*0x10087d622*/
  {
    if ( *(_BYTE *)a2 == 4 ) /*0x10087d62b*/
    {
      v7 = *(_QWORD *)(a2 + 24); /*0x10087d631*/
      if ( v7 ) /*0x10087d638*/
      {
        v8 = *(_QWORD *)(a2 + 16); /*0x10087d63e*/
        v9 = v8 + 32 * v7; /*0x10087d646*/
        do /*0x10087d687*/
        {
          v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087d698*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_75,
                  4,
                  v8);
          if ( v10 && *(_BYTE *)v10 == 3 ) /*0x10087d6a5*/
          {
            v11 = *(_QWORD *)(v10 + 16); /*0x10087d6a7*/
            v12 = *(_QWORD *)(v10 + 24); /*0x10087d6ab*/
            if ( v12 == 9 ) /*0x10087d6b3*/
            {
              if ( !(*(_QWORD *)v11 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v11 + 8) ^ 0x65LL) ) /*0x10087d66a*/
              {
                v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087d737*/
                        &unk_101674ECD,
                        5,
                        v8);
                if ( v17 ) /*0x10087d73f*/
                {
                  if ( *(_BYTE *)v17 == 4 ) /*0x10087d748*/
                  {
                    v18 = *(_QWORD *)(v17 + 24); /*0x10087d74e*/
                    if ( v18 ) /*0x10087d755*/
                    {
                      v19 = *(_QWORD *)(v17 + 16); /*0x10087d75b*/
                      for ( i = 32 * v18; i; i -= 32 ) /*0x10087d75f*/
                      {
                        v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087d7fd*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_75,
                                4,
                                v19);
                        if ( v22 ) /*0x10087d805*/
                        {
                          if ( *(_BYTE *)v22 == 3 /*0x10087d829*/
                            && *(_QWORD *)(v22 + 24) == 6
                            && !(**(_DWORD **)(v22 + 16) ^ 0x74737563
                               | *(unsigned __int16 *)(*(_QWORD *)(v22 + 16) + 4LL) ^ 0x6D6F) )
                          {
                            v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087d83c*/
                                    "name",
                                    4,
                                    v19);
                            if ( v23 ) /*0x10087d844*/
                            {
                              if ( *(_BYTE *)v23 == 3 ) /*0x10087d849*/
                              {
                                v24 = *(_QWORD *)(v23 + 24); /*0x10087d84b*/
                                if ( v24 < 0 ) /*0x10087d852*/
                                {
                                  v28 = 0; /*0x10087d8e7*/
                                  v29 = (size_t)v42; /*0x10087d8e9*/
                                  goto LABEL_43; /*0x10087d8e9*/
                                }
                                __n = *(_QWORD *)(v23 + 24); /*0x10087d858*/
                                v25 = *(const void **)(v23 + 16); /*0x10087d85c*/
                                if ( v24 ) /*0x10087d860*/
                                {
                                  v42 = *(const void **)(v23 + 16); /*0x10087d866*/
                                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v25); /*0x10087d86a*/
                                  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10087d878*/
                                  if ( !v21 ) /*0x10087d880*/
                                  {
                                    v29 = __n; /*0x10087d91b*/
LABEL_47:
                                    v28 = 1; /*0x10087d91f*/
LABEL_43:
                                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v29); /*0x10087d8ed*/
                                  }
                                  v25 = v42; /*0x10087d886*/
                                }
                                else
                                {
                                  v21 = 1; /*0x10087d7a1*/
                                }
                                v42 = (const void *)v21; /*0x10087d7a6*/
                                memcpy((void *)v21, v25, __n); /*0x10087d7b1*/
                                v37 = __n; /*0x10087d7ba*/
                                v38 = v42; /*0x10087d7c2*/
                                v39 = __n; /*0x10087d7c6*/
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v31, &v37); /*0x10087d7d5*/
                              }
                            }
                          }
                        }
                        v19 += 32; /*0x10087d7e0*/
                      }
                    }
                  }
                }
              }
            }
            else if ( v12 == 6 && !(*(_DWORD *)v11 ^ 0x74737563 | *(unsigned __int16 *)(v11 + 4) ^ 0x6D6F) ) /*0x10087d6ce*/
            {
              v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087d6e1*/
                      "name",
                      4,
                      v8);
              if ( v13 ) /*0x10087d6e9*/
              {
                if ( *(_BYTE *)v13 == 3 ) /*0x10087d6ee*/
                {
                  v14 = *(_QWORD *)(v13 + 24); /*0x10087d6f0*/
                  if ( v14 < 0 ) /*0x10087d6f7*/
                  {
                    v28 = 0; /*0x10087d8df*/
                    v29 = (size_t)v40; /*0x10087d8e1*/
                    goto LABEL_43; /*0x10087d8e5*/
                  }
                  v15 = *(const void **)(v13 + 16); /*0x10087d6fd*/
                  if ( v14 ) /*0x10087d701*/
                  {
                    v40 = *(const void **)(v13 + 16); /*0x10087d703*/
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v15); /*0x10087d707*/
                    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x10087d714*/
                    if ( !v16 ) /*0x10087d71c*/
                    {
                      v29 = v14; /*0x10087d916*/
                      goto LABEL_47; /*0x10087d919*/
                    }
                    v15 = v40; /*0x10087d722*/
                  }
                  else
                  {
                    v16 = 1; /*0x10087d768*/
                  }
                  v40 = (const void *)v16; /*0x10087d76d*/
                  memcpy((void *)v16, v15, v14); /*0x10087d777*/
                  v37 = v14; /*0x10087d77c*/
                  v38 = v40; /*0x10087d784*/
                  v39 = v14; /*0x10087d788*/
                  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v31, &v37); /*0x10087d797*/
                }
              }
            }
          }
          v8 += 32; /*0x10087d680*/
        }
        while ( v8 != v9 ); /*0x10087d687*/
      }
    }
  }
  a1[5] = v36; /*0x10087d89f*/
  a1[4] = (__int128 *)v35; /*0x10087d8a7*/
  a1[3] = v34; /*0x10087d8af*/
  a1[2] = v33; /*0x10087d8b7*/
  v26 = v31; /*0x10087d8bb*/
  a1[1] = v32; /*0x10087d8c6*/
  *a1 = v26; /*0x10087d8ca*/
  return a1; /*0x10087d8d0*/
}