// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::prepare::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaa5c88ef7fda840; addr: 0x100970d90; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:43Z
double __fastcall codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::prepare::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaa5c88ef7fda840(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3)
{
  _QWORD *v3; // rbx
  _BYTE *v5; // rax
  __int64 v6; // rax
  const char *v7; // rcx
  void *v8; // rax
  void *v9; // r15
  char *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // rax
  void *v15; // rax
  _QWORD *v16; // rax
  size_t v17; // rdx
  void *v18; // r14
  void *v19; // rax
  void *v20; // r14
  double result; // xmm0_8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  void *v25; // rax
  void *v26; // r14
  __int64 v27; // [rsp+8h] [rbp-E8h] BYREF
  _BYTE v28[80]; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-90h] BYREF
  _QWORD v30[10]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-38h] BYREF
  void *__s2; // [rsp+C0h] [rbp-30h]
  __int64 v33; // [rsp+C8h] [rbp-28h]

  v3 = a1; /*0x100970da2*/
  if ( *a3 != 5 ) /*0x100970da8*/
    goto LABEL_41; /*0x100970da8*/
  a1 = &unk_1018D1C39; /*0x100970db4*/
  v5 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970dc0*/
                  &unk_1018D1C39,
                  18,
                  a3);
  if ( v5 ) /*0x100970dc8*/
  {
    if ( *v5 ) /*0x100970dca*/
      goto LABEL_41; /*0x100970dcd*/
  }
  a1 = &unk_1018D1C24; /*0x100970dd3*/
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018D1C24, 14, a3); /*0x100970de2*/
  v7 = "openai; "; /*0x100970de7*/
  if ( v6 && *(_BYTE *)v6 ) /*0x100970df3*/
  {
    if ( *(_BYTE *)v6 != 3 || *(_QWORD *)(v6 + 24) != 6 ) /*0x100970e08*/
      goto LABEL_41; /*0x100970e08*/
    v7 = *(const char **)(v6 + 16); /*0x100970e0e*/
  }
  if ( *(_DWORD *)v7 ^ 0x6E65706F | *((unsigned __int16 *)v7 + 2) ^ 0x6961 ) /*0x100970e23*/
  {
    if ( !(*(_DWORD *)v7 ^ 0x616D6961 | *((unsigned __int16 *)v7 + 2) ^ 0x3169) /*0x100970e52*/
      && *(_BYTE *)(a2 + 364)
      && !*(_BYTE *)(a2 + 382) )
    {
      v8 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970e6f*/
                     "model_providersrequires_openai_authhttp_headersx-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex",
                     15,
                     a3);
      if ( !v8 ) /*0x100970e7e*/
        v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970e7e*/
      v9 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970e96*/
                     &anon_202735cc4238ea6ae2931afe37a1ff22_192,
                     6,
                     v8);
      if ( !v9 ) /*0x100970e9c*/
        v9 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970e9c*/
      codexmate_lib::core::relay::native_catalog::revision::h5083af1d8a5b6e4c( /*0x100970eb4*/
        (__int64)&v31,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40));
      v10 = "base_urlis_errorusernamepasswordfragmentContinue "; /*0x100970eb9*/
      v11 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970ec8*/
                        "base_urlis_errorusernamepasswordfragmentContinue ",
                        8,
                        v9);
      if ( !v11 ) /*0x100970ed0*/
        v11 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970ed2*/
      if ( *(_BYTE *)v11 != 3 ) /*0x100970edc*/
        goto LABEL_33; /*0x100970edc*/
      v12 = v11[2]; /*0x100970ee2*/
      v13 = v11[3]; /*0x100970ee6*/
      v30[3] = 0; /*0x100970eea*/
      v29 = 0; /*0x100970ef2*/
      v30[1] = 0; /*0x100970efd*/
      v10 = (char *)&v27; /*0x100970f05*/
      url::ParseOptions::parse::h7da66aa6bebaf5b6(&v27, &v29, v12, v13); /*0x100970f13*/
      if ( __OFSUB__(-v27, 1) ) /*0x100970f25*/
        goto LABEL_33; /*0x100970f25*/
      qmemcpy(v30, v28, sizeof(v30)); /*0x100970f3e*/
      v29 = v27; /*0x100970f41*/
      v10 = (char *)*(unsigned int *)(a2 + 120); /*0x100970f48*/
      if ( !(unsigned __int8)codexmate_lib::core::relay::native_repair_catalog::validate_source::_$u7b$$u7b$closure$u7d$$u7d$::h608edd01a3a3cda5( /*0x100970f53*/
                               (__int16)v10,
                               &v29) )
        goto LABEL_33; /*0x100970f53*/
      v10 = "requires_openai_authhttp_headersx-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex"; /*0x100970f60*/
      v14 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970f6f*/
                       "requires_openai_authhttp_headersx-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex",
                       20,
                       v9);
      if ( !v14 ) /*0x100970f77*/
        v14 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970f79*/
      if ( *v14 != 1 || v14[1] != 1 ) /*0x100970f89*/
        goto LABEL_33; /*0x100970f89*/
      v15 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970f9a*/
                      "http_headersx-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex",
                      12,
                      v9);
      if ( !v15 ) /*0x100970fa2*/
        v15 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970fa4*/
      v10 = "x-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex"; /*0x100970fab*/
      v16 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100970fba*/
                        "x-aimami-catalog-revisionhttps://chatgpt.com/backend-api/codex",
                        25,
                        v15);
      if ( !v16 ) /*0x100970fc2*/
        v16 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100970fc4*/
      if ( *(_BYTE *)v16 == 3 /*0x100970fe8*/
        && (v17 = v16[3], v17 == v33)
        && (v18 = __s2, v10 = (char *)v16[2], !memcmp(v10, __s2, v17)) )
      {
        *v3 = 11; /*0x10097111e*/
        if ( v31 ) /*0x10097112c*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v31, 1); /*0x100971136*/
      }
      else
      {
LABEL_33:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x100970fee*/
        v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(177, 1); /*0x100970ffd*/
        if ( !v19 ) /*0x100971005*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 177); /*0x100971156*/
        v20 = v19; /*0x10097100b*/
        memcpy(v19, &unk_1018D223C, 0xB1u); /*0x10097101d*/
        *v3 = 10; /*0x100971022*/
        v3[1] = 177; /*0x100971029*/
        v3[2] = v20; /*0x100971031*/
        v3[3] = 177; /*0x100971035*/
        if ( v31 ) /*0x100971044*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v31, 1); /*0x100971053*/
      }
      return result; /*0x100971058*/
    }
  }
  else
  {
    a1 = &unk_1018D1C4B; /*0x10097105d*/
    v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018D1C4B, 15, a3); /*0x10097106c*/
    if ( !v22 /*0x1009710b1*/
      || !*(_BYTE *)v22
      || *(_BYTE *)v22 == 3
      && (a1 = *(_QWORD **)(v22 + 16),
          v23 = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h2cd4b47851840389(
                            a1,
                            *(_QWORD *)(v22 + 24),
                            47),
          v24 == 37)
      && (a1 = v23, !memcmp(v23, "https://chatgpt.com/backend-api/codex", 0x25u)) )
    {
      *v3 = 11; /*0x100971115*/
      return result; /*0x10097111c*/
    }
  }
LABEL_41:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1009710ba*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(177, 1); /*0x1009710c9*/
  if ( !v25 ) /*0x1009710d1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 177); /*0x100971147*/
  v26 = v25; /*0x1009710d3*/
  memcpy(v25, &unk_1018D223C, 0xB1u); /*0x1009710e5*/
  *v3 = 10; /*0x1009710ea*/
  v3[1] = 177; /*0x1009710f1*/
  v3[2] = v26; /*0x1009710f9*/
  v3[3] = 177; /*0x1009710fd*/
  return result; /*0x100971105*/
}