// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680; addr: 0x1005d4790; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
void __fastcall codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680(
        __int64 a1,
        _DWORD *a2,
        const void *a3,
        size_t a4,
        _BYTE *a5)
{
  char *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  _DWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  _DWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  _DWORD *v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  _DWORD *v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  _DWORD *v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  _DWORD *v51; // rax
  __int64 v52; // rsi
  __int64 *v53; // r15
  __int64 *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  _DWORD *v57; // rax
  _QWORD *v58; // r15
  __int64 v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  _DWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rdx
  _DWORD *v74; // rax
  _DWORD *v75; // rax
  __int64 v76; // rdx
  void *v77; // rax
  __int64 v78; // rdx
  void *v79; // rax
  __int64 v80; // rdx
  _DWORD *v81; // rax
  _DWORD *v82; // r15
  __int64 v83; // rdx
  void *v84; // rax
  __int64 v85; // rdx
  _DWORD *v86; // rax
  _DWORD *v87; // r15
  __int64 v88; // rdx
  __int64 v89; // rax
  _QWORD *v90; // rdx
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // r13
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // rcx
  char *v99; // [rsp+10h] [rbp-D0h]
  size_t __n; // [rsp+18h] [rbp-C8h]
  _QWORD v101[2]; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v102; // [rsp+30h] [rbp-B0h]
  _QWORD v103[4]; // [rsp+38h] [rbp-A8h] BYREF
  char v104[8]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v105; // [rsp+60h] [rbp-80h]
  __int64 v106; // [rsp+70h] [rbp-70h]
  __int64 v107; // [rsp+78h] [rbp-68h]
  __int64 v108; // [rsp+80h] [rbp-60h] BYREF
  _DWORD *v109; // [rsp+88h] [rbp-58h]
  __int64 v110; // [rsp+90h] [rbp-50h]
  __int64 v111; // [rsp+98h] [rbp-48h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-40h]
  _DWORD *v113; // [rsp+A8h] [rbp-38h]
  __int64 v114; // [rsp+B0h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 284) ) /*0x1005d47a4*/
    return; /*0x1005d47ab*/
  if ( !a5 ) /*0x1005d47cb*/
  {
    v105 = 0; /*0x1005d4a36*/
    v106 = 0; /*0x1005d4a3e*/
    v104[0] = 5; /*0x1005d4a46*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1005d4a4d*/
    v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4a5c*/
    if ( !v27 ) /*0x1005d4a64*/
      goto LABEL_65; /*0x1005d4a64*/
    *(_DWORD *)((char *)v27 + 3) = 1735289203; /*0x1005d4a6a*/
    *v27 = 1936943469; /*0x1005d4a71*/
    LOBYTE(v111) = 3; /*0x1005d4a77*/
    v112 = 7; /*0x1005d4a7b*/
    v113 = v27; /*0x1005d4a83*/
    v28 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4aaa*/
                      "input_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0xCu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v28); /*0x1005d4aad*/
    v28[3] = 7; /*0x1005d4ab6*/
    v28[2] = v113; /*0x1005d4abe*/
    v29 = v111; /*0x1005d4ac2*/
    v28[1] = v112; /*0x1005d4aca*/
    *v28 = v29; /*0x1005d4ace*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, 12, v30); /*0x1005d4ad1*/
    v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4ae0*/
    if ( !v31 ) /*0x1005d4ae8*/
      goto LABEL_65; /*0x1005d4ae8*/
    *(_DWORD *)((char *)v31 + 3) = 1735289203; /*0x1005d4aee*/
    *v31 = 1936943469; /*0x1005d4af5*/
    LOBYTE(v111) = 3; /*0x1005d4afb*/
    v112 = 7; /*0x1005d4aff*/
    v113 = v31; /*0x1005d4b07*/
    v32 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4b2e*/
                      "output_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0xDu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v32); /*0x1005d4b31*/
    v32[3] = 7; /*0x1005d4b3a*/
    v32[2] = v113; /*0x1005d4b42*/
    v33 = v111; /*0x1005d4b46*/
    v32[1] = v112; /*0x1005d4b4e*/
    *v32 = v33; /*0x1005d4b52*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, 13, v34); /*0x1005d4b55*/
    v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4b64*/
    if ( !v35 ) /*0x1005d4b6c*/
      goto LABEL_65; /*0x1005d4b6c*/
    *(_DWORD *)((char *)v35 + 3) = 1735289203; /*0x1005d4b72*/
    *v35 = 1936943469; /*0x1005d4b79*/
    LOBYTE(v111) = 3; /*0x1005d4b7f*/
    v112 = 7; /*0x1005d4b83*/
    v113 = v35; /*0x1005d4b8b*/
    v36 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4bb2*/
                      "cache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0x17u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v36); /*0x1005d4bb5*/
    v36[3] = 7; /*0x1005d4bbe*/
    v36[2] = v113; /*0x1005d4bc6*/
    v37 = v111; /*0x1005d4bca*/
    v36[1] = v112; /*0x1005d4bd2*/
    *v36 = v37; /*0x1005d4bd6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, 23, v38); /*0x1005d4bd9*/
    v39 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4be8*/
    if ( !v39 ) /*0x1005d4bf0*/
      goto LABEL_65; /*0x1005d4bf0*/
    *(_DWORD *)((char *)v39 + 3) = 1735289203; /*0x1005d4bf6*/
    *v39 = 1936943469; /*0x1005d4bfd*/
    LOBYTE(v111) = 3; /*0x1005d4c03*/
    v112 = 7; /*0x1005d4c07*/
    v113 = v39; /*0x1005d4c0f*/
    v40 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4c36*/
                      "cache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0x1Bu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v40); /*0x1005d4c39*/
    v40[3] = 7; /*0x1005d4c42*/
    v40[2] = v113; /*0x1005d4c4a*/
    v41 = v111; /*0x1005d4c4e*/
    v40[1] = v112; /*0x1005d4c56*/
    *v40 = v41; /*0x1005d4c5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, 27, v42); /*0x1005d4c5d*/
    v43 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4c6c*/
    if ( !v43 ) /*0x1005d4c74*/
LABEL_65:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1005d54cc*/
    *(_DWORD *)((char *)v43 + 3) = 1735289203; /*0x1005d4c7a*/
    *v43 = 1936943469; /*0x1005d4c81*/
    LOBYTE(v111) = 3; /*0x1005d4c87*/
    v112 = 7; /*0x1005d4c8b*/
    v113 = v43; /*0x1005d4c93*/
    v44 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4cba*/
                      "cached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0x13u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v44); /*0x1005d4cbd*/
    v44[3] = 7; /*0x1005d4cc6*/
    v44[2] = v113; /*0x1005d4cce*/
    v45 = v111; /*0x1005d4cd2*/
    v44[1] = v112; /*0x1005d4cda*/
    *v44 = v45; /*0x1005d4cde*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, 19, v46); /*0x1005d4ce1*/
    v47 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4cf0*/
    if ( !v47 ) /*0x1005d4cf8*/
      goto LABEL_68; /*0x1005d4cf8*/
    *(_DWORD *)((char *)v47 + 3) = 1735289203; /*0x1005d4cfe*/
    *v47 = 1936943469; /*0x1005d4d05*/
    LOBYTE(v111) = 3; /*0x1005d4d0b*/
    v112 = 7; /*0x1005d4d0f*/
    v113 = v47; /*0x1005d4d17*/
    v48 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4d3e*/
                      "responses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                      0x17u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v48); /*0x1005d4d41*/
    v48[3] = 7; /*0x1005d4d4a*/
    v48[2] = v113; /*0x1005d4d52*/
    v49 = v111; /*0x1005d4d56*/
    v48[1] = v112; /*0x1005d4d5e*/
    *v48 = v49; /*0x1005d4d62*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, 23, v50); /*0x1005d4d65*/
    v51 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4d74*/
    if ( !v51 ) /*0x1005d4d7c*/
LABEL_68:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1005d54fb*/
    *(_DWORD *)((char *)v51 + 3) = 1735289203; /*0x1005d4d82*/
    *v51 = 1936943469; /*0x1005d4d89*/
    LOBYTE(v111) = 3; /*0x1005d4d8f*/
    v112 = 7; /*0x1005d4d93*/
    v113 = v51; /*0x1005d4d9b*/
    v114 = 7; /*0x1005d4d9f*/
    v52 = 18; /*0x1005d4db5*/
    v53 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4dbf*/
                       "chat_cached_tokensprompt_tokens_details",
                       0x12u);
    v54 = v53; /*0x1005d4dc2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v53); /*0x1005d4dc5*/
    v99 = (char *)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_508; /*0x1005d4dd1*/
    v56 = 7; /*0x1005d4dd8*/
    goto LABEL_28; /*0x1005d4ddd*/
  }
  v8 = "invalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d47dd*/
  if ( *a5 == 5 ) /*0x1005d47e4*/
    v8 = "objectinvalidinput_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details"; /*0x1005d47e4*/
  v99 = v8; /*0x1005d47e8*/
  LOBYTE(v107) = *a5 == 5; /*0x1005d47ef*/
  v105 = 0; /*0x1005d47f3*/
  v106 = 0; /*0x1005d47fb*/
  v104[0] = 5; /*0x1005d4803*/
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d4819*/
         "input_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
         12,
         a5);
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v9); /*0x1005d4825*/
  v10 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4842*/
                    "input_tokensoutput_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0xCu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v10); /*0x1005d4848*/
  v10[3] = v114; /*0x1005d4851*/
  v10[2] = v113; /*0x1005d4859*/
  v11 = v111; /*0x1005d485d*/
  v10[1] = v112; /*0x1005d4865*/
  *v10 = v11; /*0x1005d4869*/
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d487b*/
          "output_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
          13,
          a5);
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v12); /*0x1005d4887*/
  v13 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d48a4*/
                    "output_tokenscache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0xDu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v13); /*0x1005d48aa*/
  v13[3] = v114; /*0x1005d48b3*/
  v13[2] = v113; /*0x1005d48bb*/
  v14 = v111; /*0x1005d48bf*/
  v13[1] = v112; /*0x1005d48c7*/
  *v13 = v14; /*0x1005d48cb*/
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d48dd*/
          "cache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
          23,
          a5);
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v15); /*0x1005d48e9*/
  v16 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4906*/
                    "cache_read_input_tokenscache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0x17u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v16); /*0x1005d490c*/
  v16[3] = v114; /*0x1005d4915*/
  v16[2] = v113; /*0x1005d491d*/
  v17 = v111; /*0x1005d4921*/
  v16[1] = v112; /*0x1005d4929*/
  *v16 = v17; /*0x1005d492d*/
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d493f*/
          "cache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
          27,
          a5);
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v18); /*0x1005d494b*/
  v19 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4968*/
                    "cache_creation_input_tokenscached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0x1Bu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v19); /*0x1005d496e*/
  v19[3] = v114; /*0x1005d4977*/
  v19[2] = v113; /*0x1005d497f*/
  v20 = v111; /*0x1005d4983*/
  v19[1] = v112; /*0x1005d498b*/
  *v19 = v20; /*0x1005d498f*/
  v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d49a1*/
          "cached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
          19,
          a5);
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v21); /*0x1005d49ad*/
  v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d49ca*/
                    "cached_input_tokensresponses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0x13u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v22); /*0x1005d49d0*/
  v22[3] = v114; /*0x1005d49d9*/
  v22[2] = v113; /*0x1005d49e1*/
  v23 = v111; /*0x1005d49e5*/
  v22[1] = v112; /*0x1005d49ed*/
  *v22 = v23; /*0x1005d49f1*/
  v24 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d4a03*/
                   "input_tokens_detailschat_cached_tokensprompt_tokens_details",
                   20,
                   a5);
  if ( !v24 ) /*0x1005d4a0b*/
  {
    v26 = 0; /*0x1005d4de2*/
    goto LABEL_17; /*0x1005d4de2*/
  }
  if ( *v24 == 5 ) /*0x1005d4a14*/
  {
    v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d4a2e*/
            "cached_tokenstopephemeralcache_controlassistant",
            13,
            v24);
LABEL_17:
    codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v26); /*0x1005d4de4*/
    goto LABEL_20; /*0x1005d4ded*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1005d4def*/
    "input_tokens_detailschat_cached_tokensprompt_tokens_details",
    20,
    v25);
  v57 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4dfe*/
  if ( !v57 ) /*0x1005d4e06*/
    goto LABEL_69; /*0x1005d4e06*/
  *(_DWORD *)((char *)v57 + 3) = 1684630625; /*0x1005d4e0c*/
  *v57 = 1635151465; /*0x1005d4e13*/
  LOBYTE(v111) = 3; /*0x1005d4e19*/
  v112 = 7; /*0x1005d4e1d*/
  v113 = v57; /*0x1005d4e25*/
  v114 = 7; /*0x1005d4e29*/
LABEL_20:
  v58 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4e31*/
                    "responses_cached_tokensinput_tokens_detailschat_cached_tokensprompt_tokens_details",
                    0x17u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v58); /*0x1005d4e4f*/
  v58[3] = v114; /*0x1005d4e58*/
  v58[2] = v113; /*0x1005d4e60*/
  v59 = v111; /*0x1005d4e64*/
  v58[1] = v112; /*0x1005d4e6c*/
  *v58 = v59; /*0x1005d4e70*/
  v60 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d4e82*/
                   "prompt_tokens_details",
                   21,
                   a5);
  if ( !v60 ) /*0x1005d4e8a*/
  {
    v62 = 0; /*0x1005d4eaa*/
    goto LABEL_24; /*0x1005d4eaa*/
  }
  if ( *v60 != 5 ) /*0x1005d4e8f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("prompt_tokens_details", 21, v61); /*0x1005d4eb7*/
    v63 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d4ec6*/
    if ( v63 ) /*0x1005d4ece*/
    {
      *(_DWORD *)((char *)v63 + 3) = 1684630625; /*0x1005d4ed4*/
      *v63 = 1635151465; /*0x1005d4edb*/
      LOBYTE(v111) = 3; /*0x1005d4ee1*/
      v112 = 7; /*0x1005d4ee5*/
      v113 = v63; /*0x1005d4eed*/
      v114 = 7; /*0x1005d4ef1*/
      goto LABEL_27; /*0x1005d4ef1*/
    }
LABEL_69:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1005d5502*/
  }
  v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d4ea5*/
          "cached_tokenstopephemeralcache_controlassistant",
          13,
          v60);
LABEL_24:
  codexmate_lib::core::relay::anthropic_trace::usage_counter::h6319e9f1038d0c19(&v111, v62); /*0x1005d4eac*/
LABEL_27:
  v52 = 18; /*0x1005d4ef9*/
  v53 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1005d4f11*/
                     "chat_cached_tokensprompt_tokens_details",
                     0x12u);
  v54 = v53; /*0x1005d4f14*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v53); /*0x1005d4f17*/
  v56 = (unsigned __int8)v107 ^ 7LL; /*0x1005d4f24*/
LABEL_28:
  __n = v56; /*0x1005d4f28*/
  v53[3] = v114; /*0x1005d4f33*/
  v53[2] = (__int64)v113; /*0x1005d4f3b*/
  v64 = v111; /*0x1005d4f3f*/
  v53[1] = v112; /*0x1005d4f47*/
  *v53 = v64; /*0x1005d4f4b*/
  v65 = *(_QWORD *)(a1 + 136); /*0x1005d4f4e*/
  v66 = -1; /*0x1005d4f5f*/
  if ( *(_QWORD *)(a1 + 272) != -1 ) /*0x1005d4f66*/
    v66 = *(_QWORD *)(a1 + 272) + 1LL; /*0x1005d4f66*/
  v107 = a1; /*0x1005d4f6a*/
  *(_QWORD *)(a1 + 272) = v66; /*0x1005d4f6e*/
  if ( v65 == 8 ) /*0x1005d4f79*/
  {
    v67 = v107; /*0x1005d4f7b*/
    v68 = *(_QWORD *)(v107 + 128); /*0x1005d4f7f*/
    v52 = *(_QWORD *)(v107 + 120); /*0x1005d4f8e*/
    v69 = 0; /*0x1005d4f92*/
    if ( (unsigned __int64)(v68 + 1) >= *(_QWORD *)(v107 + 112) ) /*0x1005d4f97*/
      v69 = *(_QWORD *)(v107 + 112); /*0x1005d4f97*/
    *(_QWORD *)(v107 + 128) = v68 - v69 + 1; /*0x1005d4fa3*/
    *(_QWORD *)(v67 + 136) = 7; /*0x1005d4faa*/
    v70 = 32 * v68; /*0x1005d4fb5*/
    v55 = *(_QWORD *)(v52 + v70 + 8); /*0x1005d4fbd*/
    v111 = *(_QWORD *)(v52 + v70); /*0x1005d4fc2*/
    v54 = *(__int64 **)(v52 + v70 + 24); /*0x1005d4fc6*/
    v114 = (__int64)v54; /*0x1005d4fcb*/
    v113 = *(_DWORD **)(v52 + v70 + 16); /*0x1005d4fd4*/
    v112 = v55; /*0x1005d4fd8*/
    if ( (_BYTE)v111 != 6 ) /*0x1005d4fdf*/
    {
      v54 = &v111; /*0x1005d4fe1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v111); /*0x1005d4fe5*/
    }
    v65 = 7; /*0x1005d4fea*/
  }
  v101[0] = 0; /*0x1005d4ff0*/
  v102 = 0; /*0x1005d4ffb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v52, v55); /*0x1005d5006*/
  v71 = 6; /*0x1005d500b*/
  v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005d501b*/
  if ( !v72 ) /*0x1005d5023*/
    goto LABEL_64; /*0x1005d5023*/
  *(_WORD *)(v72 + 4) = 25964; /*0x1005d5029*/
  *(_DWORD *)v72 = 1886216563; /*0x1005d502f*/
  v108 = 6; /*0x1005d5035*/
  v109 = (_DWORD *)v72; /*0x1005d503d*/
  v110 = 6; /*0x1005d5041*/
  LOBYTE(v111) = 2; /*0x1005d5049*/
  v112 = 0; /*0x1005d504d*/
  v113 = (_DWORD *)v66; /*0x1005d5055*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v103, v101, &v108, &v111); /*0x1005d506f*/
  if ( LOBYTE(v103[0]) != 6 ) /*0x1005d507b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v103); /*0x1005d5084*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v101, v73); /*0x1005d5089*/
  v71 = 7; /*0x1005d508e*/
  v74 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d509e*/
  if ( !v74 ) /*0x1005d50a6*/
    goto LABEL_64; /*0x1005d50a6*/
  *(_DWORD *)((char *)v74 + 3) = 1953525093; /*0x1005d50ac*/
  *v74 = 1702130785; /*0x1005d50b3*/
  v108 = 7; /*0x1005d50b9*/
  v109 = v74; /*0x1005d50c1*/
  v110 = 7; /*0x1005d50c5*/
  v75 = (_DWORD *)*(unsigned int *)(v107 + 280); /*0x1005d50d1*/
  LOBYTE(v111) = 2; /*0x1005d50d7*/
  v112 = 0; /*0x1005d50db*/
  v113 = v75; /*0x1005d50e3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v103, v101, &v108, &v111); /*0x1005d50fd*/
  if ( LOBYTE(v103[0]) != 6 ) /*0x1005d5109*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v103); /*0x1005d5112*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v101, v76); /*0x1005d5117*/
  v71 = 11; /*0x1005d511c*/
  v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005d512c*/
  if ( !v77 ) /*0x1005d5134*/
    goto LABEL_64; /*0x1005d5134*/
  qmemcpy(v77, "observed_ms", 11); /*0x1005d5144*/
  v108 = 11; /*0x1005d514e*/
  v109 = v77; /*0x1005d5156*/
  v110 = 11; /*0x1005d515a*/
  LOBYTE(v111) = 2; /*0x1005d5162*/
  v112 = 0; /*0x1005d5166*/
  v113 = a2; /*0x1005d5175*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v103, v101, &v108, &v111); /*0x1005d518f*/
  if ( LOBYTE(v103[0]) != 6 ) /*0x1005d519b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v103); /*0x1005d51a4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v101, v78); /*0x1005d51a9*/
  v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005d51b8*/
  if ( !v79 ) /*0x1005d51c0*/
    goto LABEL_64; /*0x1005d51c0*/
  qmemcpy(v79, "usage_stage", 11); /*0x1005d51d3*/
  v108 = 11; /*0x1005d51dd*/
  v109 = v79; /*0x1005d51e5*/
  v110 = 11; /*0x1005d51e9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1, v80); /*0x1005d51f1*/
  v81 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1005d51fe*/
  if ( !v81 ) /*0x1005d5206*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x1005d54db*/
  v82 = v81; /*0x1005d520c*/
  memcpy(v81, a3, a4); /*0x1005d521c*/
  LOBYTE(v111) = 3; /*0x1005d5221*/
  v112 = a4; /*0x1005d5225*/
  v113 = v82; /*0x1005d5229*/
  v114 = a4; /*0x1005d522d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v103, v101, &v108, &v111); /*0x1005d5247*/
  if ( LOBYTE(v103[0]) != 6 ) /*0x1005d5253*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v103); /*0x1005d525c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v101, v83); /*0x1005d5261*/
  v71 = 11; /*0x1005d5266*/
  v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005d5276*/
  if ( !v84 ) /*0x1005d527e*/
    goto LABEL_64; /*0x1005d527e*/
  qmemcpy(v84, "usage_state", 11); /*0x1005d5287*/
  v108 = 11; /*0x1005d5291*/
  v109 = v84; /*0x1005d5299*/
  v110 = 11; /*0x1005d529d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1, v85); /*0x1005d52a5*/
  v86 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1005d52b9*/
  if ( !v86 ) /*0x1005d52c1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x1005d54ea*/
  v87 = v86; /*0x1005d52c7*/
  memcpy(v86, v99, __n); /*0x1005d52d7*/
  LOBYTE(v111) = 3; /*0x1005d52dc*/
  v112 = __n; /*0x1005d52e0*/
  v113 = v87; /*0x1005d52e4*/
  v114 = __n; /*0x1005d52e8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v103, v101, &v108, &v111); /*0x1005d5302*/
  if ( LOBYTE(v103[0]) != 6 ) /*0x1005d530e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v103); /*0x1005d5317*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v101, v88); /*0x1005d531c*/
  v71 = 5; /*0x1005d5321*/
  v89 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005d5331*/
  if ( !v89 ) /*0x1005d5339*/
LABEL_64:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v71); /*0x1005d54bb*/
  *(_BYTE *)(v89 + 4) = 101; /*0x1005d5342*/
  *(_DWORD *)v89 = 1734439797; /*0x1005d5346*/
  v108 = 5; /*0x1005d534c*/
  v109 = (_DWORD *)v89; /*0x1005d5354*/
  v110 = 5; /*0x1005d5358*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h36f13a05a36237ce( /*0x1005d536b*/
    &v111,
    v104);
  if ( (_BYTE)v111 == 6 ) /*0x1005d5374*/
  {
    v103[0] = v112; /*0x1005d5484*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005d54ac*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
      43,
      v103,
      &off_101AACF78,
      &off_101AAC658);
  }
  v103[3] = v114; /*0x1005d537e*/
  v103[2] = v113; /*0x1005d5389*/
  v103[1] = v112; /*0x1005d5398*/
  v103[0] = v111; /*0x1005d539f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v111, v101, &v108, v103); /*0x1005d53bc*/
  if ( (_BYTE)v111 != 6 ) /*0x1005d53c5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v111); /*0x1005d53cb*/
  v90 = (_QWORD *)v107; /*0x1005d53d0*/
  v112 = v101[0]; /*0x1005d53e6*/
  v113 = (_DWORD *)v101[1]; /*0x1005d53ea*/
  v114 = v102; /*0x1005d53f5*/
  LOBYTE(v111) = 5; /*0x1005d53f9*/
  v91 = *(_QWORD *)(v107 + 112); /*0x1005d53fd*/
  if ( v65 == v91 ) /*0x1005d5403*/
  {
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::grow::hd79b5bb231922937(); /*0x1005d5405*/
    v90 = (_QWORD *)v107; /*0x1005d540a*/
    v91 = *(_QWORD *)(v107 + 112); /*0x1005d540e*/
    v65 = *(_QWORD *)(v107 + 136); /*0x1005d5412*/
  }
  v90[17] = v65 + 1; /*0x1005d541d*/
  v92 = v90[16] + v65; /*0x1005d5424*/
  v93 = 0; /*0x1005d542b*/
  if ( v92 >= v91 ) /*0x1005d5430*/
    v93 = v91; /*0x1005d5430*/
  v94 = v90[15]; /*0x1005d5437*/
  v95 = 32 * (v92 - v93); /*0x1005d543b*/
  *(_QWORD *)(v94 + v95 + 24) = v114; /*0x1005d5443*/
  *(_QWORD *)(v94 + v95 + 16) = v113; /*0x1005d544c*/
  v96 = v111; /*0x1005d5451*/
  *(_QWORD *)(v94 + v95 + 8) = v112; /*0x1005d5459*/
  *(_QWORD *)(v94 + v95) = v96; /*0x1005d545e*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v104); /*0x1005d5469*/
}