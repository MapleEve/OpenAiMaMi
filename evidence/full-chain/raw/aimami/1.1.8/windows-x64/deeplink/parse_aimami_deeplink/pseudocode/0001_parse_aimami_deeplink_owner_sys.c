// parse_aimami_deeplink_owner_sys @ 0x1403d6000 (renamed this session from sub_1403D6000)
// AiMaMi 1.1.8 win64.exe, session <审计会话>
// Role: Tauri IPC command wrapper for "parse_aimami_deeplink". Single caller = main dispatcher
// (owner-map-118.jsonl line 71: method=find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn).
// Command string "parse_aimami_deeplink" (aParseAimamiDee, 0x14133b788, 21B) and single argKey "url"
// (aUrl_3, 0x14133a635, 3B) both confirmed live via decompile() refs, not string-pool guess.
//
// Flow: copies InvokeMessage header (a1, 0x208B) + trailing struct (a1+520, 0x190B) into locals,
// calls arg-extract wrapper sub_14086FD70 (SHARED, 52 xrefs across binary — generic get_arg::<String>
// helper, NOT renamed) to pull the "url" string out of the raw JSON args blob. Tag byte
// v26.m256i_i8[0]==6 on return means the JSON value for "url" WAS a string (extraction succeeded);
// any other tag means type-mismatch and the owner responds with the raw extraction error directly.
//
// On successful extraction (tag==6): calls parse_aimami_deeplink_core_sys(&v19, &v30) — the real
// business logic (URL scheme/path/query validation + relay-provider-shape response build) — then
// routes BOTH the Ok and manually-built Err(String) cases through
// parse_aimami_deeplink_response_build_sys(&v22, &v26), which itself calls the shared
// invoke_resolver_respond_sys to answer the Tauri IPC promise.
//
// On failed extraction (tag!=6): builds the response directly via invoke_resolver_respond_sys without
// going through parse_aimami_deeplink_response_build_sys (fewer fields needed for a raw type-mismatch error).

__int64 __fastcall parse_aimami_deeplink_owner_sys(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r14
  const __m128i *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __m128i v13[22]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v14[32]; // [rsp+198h] [rbp+118h] BYREF   -- copy of InvokeMessage header (0x208B)
  __m128i v15[24]; // [rsp+3A0h] [rbp+320h] BYREF   -- copy of trailing struct (0x190B)
  __int64 v16; // [rsp+520h] [rbp+4A0h]
  int v17; // [rsp+528h] [rbp+4A8h]
  int v18; // [rsp+52Ch] [rbp+4ACh]
  __m128i v19; // [rsp+530h] [rbp+4B0h] BYREF        -- core parser output (Result<200B struct, ...>)
  const __m128i *v20; // [rsp+540h] [rbp+4C0h]
  __int64 v21; // [rsp+548h] [rbp+4C8h]
  __int64 v22; // [rsp+5F8h] [rbp+578h] BYREF        -- packed {cmd_name,cmd_len,argname,argname_len,arg_value_ptr}
  __m256i v23; // [rsp+600h] [rbp+580h]
  __int128 *v24; // [rsp+620h] [rbp+5A0h]
  __int64 v25; // [rsp+628h] [rbp+5A8h]
  __m256i v26; // [rsp+788h] [rbp+708h] BYREF        -- arg-extract Result / final response payload
  __int64 v27; // [rsp+7A8h] [rbp+728h]
  __int128 v28; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v29; // [rsp+860h] [rbp+7E0h]
  __int128 v30; // [rsp+870h] [rbp+7F0h] BYREF        -- (ptr,len) of extracted "url" string
  __int64 v31; // [rsp+880h] [rbp+800h]
  __int64 v32; // [rsp+888h] [rbp+808h]
  __int128 v33; // [rsp+890h] [rbp+810h] BYREF
  const __m128i *v34; // [rsp+8A0h] [rbp+820h]
  const __m128i *v35; // [rsp+8A8h] [rbp+828h]
  __int64 v36; // [rsp+8B0h] [rbp+830h]
  char v37; // [rsp+8BEh] [rbp+83Eh]
  char v38; // [rsp+8BFh] [rbp+83Fh]
  __int64 v39; // [rsp+8C0h] [rbp+840h]

  v39 = -2; /*0x1403d6017*/
  sub_1412762D0(v14, (const __m128i *)a1, 0x208u); /*0x1403d6038*/
  sub_1412762D0(v15, (const __m128i *)(a1 + 520), 0x190u); /*0x1403d6054*/
  v34 = *(const __m128i **)(a1 + 936); /*0x1403d6060*/
  v33 = *(_OWORD *)(a1 + 920); /*0x1403d606e*/
  v25 = 0; /*0x1403d6075*/
  v22 = (__int64)aParseAimamiDee; /*0x1403d6087*/  // "parse_aimami_deeplink" (21B)
  v23.m256i_i64[0] = 21; /*0x1403d608e*/
  v23.m256i_i64[1] = (__int64)aUrl_3; /*0x1403d60a0*/  // "url" (3B)
  v23.m256i_i64[2] = 3; /*0x1403d60a7*/
  v23.m256i_i64[3] = (__int64)v14; /*0x1403d60b2*/
  v24 = &v33; /*0x1403d60c0*/
  v38 = 1; /*0x1403d60c7*/
  sub_14086FD70(&v26, &v22); /*0x1403d60dc*/  // SHARED get_arg::<String>("url") + tracing span wrapper
  if ( v26.m256i_i8[0] == 6 ) /*0x1403d60e9*/  // extraction OK (JSON value was a String)
  {
    v31 = v26.m256i_i64[3]; /*0x1403d60f6*/
    v30 = *(_OWORD *)&v26.m256i_u64[1]; /*0x1403d6104*/  // (ptr,len) of "url" string
    v38 = 1; /*0x1403d610b*/
    parse_aimami_deeplink_core_sys(&v19, &v30); /*0x1403d6120*/  // <-- REAL business logic
    sub_1412762D0((__m128i *)&v22, (const __m128i *)(a1 + 520), 0x190u); /*0x1403d6136*/
    if ( !__OFSUB__(0, v19.m128i_i64[0]) ) /*0x1403d6144*/  // core returned Ok
    {
      sub_1412762D0((__m128i *)&v26, &v19, 0xC8u); /*0x1403d6230*/  // copy 200B success payload
LABEL_13:
      v37 = 0; /*0x1403d62b1*/
      parse_aimami_deeplink_response_build_sys(&v22, &v26); /*0x1403d62c6*/
      goto LABEL_14; /*0x1403d62c6*/
    }
    // core returned Err — manually build an owned String from the error bytes (alloc + memcpy),
    // still routed through the same response builder (Err path, tag=3 String variant)
    v4 = v19.m128i_i64[1]; /*0x1403d614a*/
    v5 = v20; /*0x1403d6151*/
    v6 = v21; /*0x1403d6158*/
    if ( v21 < 0 ) /*0x1403d6162*/
    {
      v7 = 0; /*0x1403d6168*/
      goto LABEL_5; /*0x1403d6168*/
    }
    if ( v21 ) /*0x1403d6237*/
    {
      nullsub_1(v3, v2); /*0x1403d623d*/
      v7 = 1; /*0x1403d6242*/
      v8 = (__m128i *)sub_140001360(v6, 1); /*0x1403d624f*/  // alloc
      if ( !v8 ) /*0x1403d6257*/
      {
LABEL_5:
        v35 = v5; /*0x1403d616a*/
        v36 = v4; /*0x1403d6171*/
        sub_1412AD46B(v7, v6); /*0x1403d617e*/  // alloc-error abort path
      }
      v9 = (__int64)v8; /*0x1403d625d*/
      sub_1412762D0(v8, v5, v6); /*0x1403d6269*/  // memcpy error bytes
      if ( !v4 ) /*0x1403d6271*/
        goto LABEL_12; /*0x1403d6271*/
    }
    else
    {
      v9 = 1; /*0x1403d636c*/
      if ( !v19.m128i_i64[1] ) /*0x1403d6374*/
        goto LABEL_12; /*0x1403d6374*/
    }
    sub_140001370(v5, v4, 1); /*0x1403d627f*/  // dealloc original error buffer
LABEL_12:
    v26.m256i_i8[8] = 3; /*0x1403d6284*/  // tag=3: owned String variant
    v26.m256i_i64[2] = v6; /*0x1403d628b*/
    v26.m256i_i64[3] = v9; /*0x1403d6292*/
    v27 = v6; /*0x1403d6299*/
    v26.m256i_i64[0] = 0x8000000000000000uLL; /*0x1403d62aa*/  // niche-encoded Err discriminant
    goto LABEL_13; /*0x1403d62aa*/
  }
  // extraction failed (tag!=6, "url" arg was not a JSON string) — respond directly, no core call
  v23 = v26; /*0x1403d6194*/
  sub_1412762D0(v13, (const __m128i *)(a1 + 520), 0x168u); /*0x1403d61b2*/
  v28 = *(_OWORD *)(a1 + 880); /*0x1403d61c5*/
  v29 = *(_QWORD *)(a1 + 896); /*0x1403d61d3*/
  v22 = 1; /*0x1403d61e6*/
  v38 = 0; /*0x1403d61f1*/
  invoke_resolver_respond_sys(v13, v16, (__int64)&v22, &v28, v17, v18); /*0x1403d6211*/  // SHARED (already named)
LABEL_14:
  // teardown: drop the args-Vec captured at a1+920/936 and the InvokeMessage header copy
  if ( !__OFSUB__(0, (_QWORD)v33) ) /*0x1403d62d5*/
  {
    v10 = *((_QWORD *)&v33 + 1); /*0x1403d62d7*/
    v35 = v34; /*0x1403d62e5*/
    v36 = 0; /*0x1403d62ec*/
    v32 = *((_QWORD *)&v33 + 1); /*0x1403d62f7*/
    while ( v35 != (const __m128i *)v36 ) /*0x1403d630e*/
    {
      ++v36; /*0x1403d6313*/
      v11 = v10 + 96; /*0x1403d631a*/
      sub_1401EEBE0(); /*0x1403d631e*/  // element drop glue (96B/element Vec)
      v10 = v11; /*0x1403d6324*/
    }
    if ( (_QWORD)v33 ) /*0x1403d6333*/
      sub_140001370(*((_QWORD *)&v33 + 1), 96 * v33, 8); /*0x1403d634a*/  // dealloc Vec buffer
  }
  return sub_140406280(v14); /*0x1403d635c*/  // Drop::drop(InvokeMessage header copy)
}
