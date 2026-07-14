// aimami 1.1.8 windows-x64 — reveal_relay_api_key_owner_sys (renamed in IDB this session; PE stripped)
// VA: 0x1403ddcb0, size=1297B (0x511), basic_blocks=36, cyclomatic_complexity=11
// FULL decompile, 0 truncation (decompile() with include_addresses=false returned entire body).
// session <审计会话> / machine <本地机器> / model claude-sonnet-5
//
// Confirmed: this is the Tauri command owner wrapper for `reveal_relay_api_key`. Reads two
// request-args in sequence — optional "manager" (7B key literal) and required "providerId"
// (10B key literal) — then dispatches to reveal_relay_api_key_response_build_sys on success
// or reveal_relay_api_key_respond_dispatch_sys on any arg-extraction failure.
//
// String locator: "reveal_relay_api_key" @0x14133b6cb (aRevealRelayApi) is the tracing::instrument
// span-name literal embedded directly in this function's body (used twice, once per arg extract
// call) — single dedicated per-command wrapper, matches owner-map-118.jsonl line 92 method
// "find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn".

__int64 __fastcall reveal_relay_api_key_owner_sys(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  __int128 v6; // kr00_16
  __int64 v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __m128i v13[22]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v14[22]; // [rsp+198h] [rbp+118h] BYREF
  __m128i v15[32]; // [rsp+300h] [rbp+280h] BYREF
  __int64 v16; // [rsp+500h] [rbp+480h]
  __m128i v17[24]; // [rsp+508h] [rbp+488h] BYREF
  __int64 v18; // [rsp+688h] [rbp+608h]
  int v19; // [rsp+690h] [rbp+610h]
  int v20; // [rsp+694h] [rbp+614h]
  __int64 v21; // [rsp+698h] [rbp+618h] BYREF
  __m256i v22; // [rsp+6A0h] [rbp+620h] BYREF
  __int128 *v23; // [rsp+6C0h] [rbp+640h]
  __int64 v24; // [rsp+6C8h] [rbp+648h]
  __m256i v25; // [rsp+828h] [rbp+7A8h] BYREF
  __int128 v26; // [rsp+848h] [rbp+7C8h]
  __int128 v27; // [rsp+858h] [rbp+7D8h]
  __int128 v28; // [rsp+868h] [rbp+7E8h]
  __int128 v29; // [rsp+878h] [rbp+7F8h]
  __int64 v30; // [rsp+888h] [rbp+808h]
  __int128 v31; // [rsp+890h] [rbp+810h] BYREF
  __int64 v32; // [rsp+8A0h] [rbp+820h]
  __int128 v33; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v34; // [rsp+8C0h] [rbp+840h]
  __int128 v35; // [rsp+8D0h] [rbp+850h] BYREF
  __int64 v36; // [rsp+8E0h] [rbp+860h]
  __m256i v37; // [rsp+8F0h] [rbp+870h] BYREF
  __m256i v38; // [rsp+910h] [rbp+890h] BYREF
  __int128 v39; // [rsp+930h] [rbp+8B0h]
  __int128 v40; // [rsp+940h] [rbp+8C0h]
  __int128 v41; // [rsp+950h] [rbp+8D0h]
  __int128 v42; // [rsp+960h] [rbp+8E0h]
  __int64 v43; // [rsp+970h] [rbp+8F0h]
  __int64 v44; // [rsp+978h] [rbp+8F8h]
  __int128 v45; // [rsp+980h] [rbp+900h] BYREF
  __int64 v46; // [rsp+990h] [rbp+910h]
  __int64 v47; // [rsp+9A0h] [rbp+920h]
  __int64 v48; // [rsp+9A8h] [rbp+928h]
  char v49; // [rsp+9B6h] [rbp+936h]
  char v50; // [rsp+9B7h] [rbp+937h]
  __int64 v51; // [rsp+9B8h] [rbp+938h]

  v51 = -2;
  sub_1412762D0(v15, (const __m128i *)a1, 0x208u);
  sub_1412762D0(v17, (const __m128i *)(a1 + 520), 0x190u);
  v46 = *(_QWORD *)(a1 + 936);
  v45 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  // --- optional "manager" arg extract (7B key literal @0x14133b7a0 aManager_0) ---
  v21 = (__int64)aRevealRelayApi;   // "reveal_relay_api_key" span-name literal
  v22.m256i_i64[0] = 20;
  v22.m256i_i64[1] = (__int64)aManager_0;   // "manager"
  v22.m256i_i64[2] = 7;
  v22.m256i_i64[3] = (__int64)v15;
  v23 = &v45;
  v50 = 1;
  v2 = sub_140419560((volatile void *)(v16 + 16));   // shared RwLock-read fast-path acquire (generic, not renamed)
  if ( !v2 )
  {
    v50 = 1;
    sub_14127A550((__int64)&v37, (__int64)&v21, (__int64)&v22.m256i_i64[1]);   // shared tracing-span helper (generic, not renamed)
    if ( v37.m256i_i8[0] != 6 )
    {
      // manager arg-extract error path -> respond via generic dispatcher directly (owner inlines
      // the same invoke_resolver_respond_sys call this branch takes; equivalent effect to routing
      // through reveal_relay_api_key_respond_dispatch_sys, error_return terminus this branch).
      v22 = v37;
      sub_1412762D0(v14, (const __m128i *)(a1 + 520), 0x168u);
      v33 = *(_OWORD *)(a1 + 880);
      v34 = *(_QWORD *)(a1 + 896);
      v21 = 1;
      v50 = 0;
      invoke_resolver_respond_sys(v14, v18, (__int64)&v21, &v33, v19, v20);   // terminated_reason=response_serialize
      goto LABEL_18;
    }
    v2 = v37.m256i_i64[1];   // manager value (Option<String> inner ptr) when present
  }
  // --- required "providerId" arg extract (10B key literal @0x14133b7f7 aProviderid_0) ---
  v24 = 0;
  v21 = (__int64)aRevealRelayApi;
  v22.m256i_i64[0] = 20;
  v22.m256i_i64[1] = (__int64)aProviderid_0;   // "providerId"
  v22.m256i_i64[2] = 10;
  v22.m256i_i64[3] = (__int64)v15;
  v23 = &v45;
  v50 = 1;
  refresh_usage_arg_extract_poll_sys((__int64)&v38, &v21);   // shared 43+-caller arg-extract helper (already named/documented elsewhere this session)
  if ( v38.m256i_i8[0] == 6 )
  {
    // providerId present -> build success response (v2=manager value, v35/v36=providerId ptr+len)
    v36 = v38.m256i_i64[3];
    v35 = *(_OWORD *)&v38.m256i_u64[1];
    v50 = 1;
    reveal_relay_api_key_response_build_sys(&v25, v2, &v35);   // dedicated success-path callee
    sub_1412762D0((__m128i *)&v21, (const __m128i *)(a1 + 520), 0x190u);
    if ( !__OFSUB__(0, v25.m256i_i64[0]) )
    {
      v43 = v30;
      v42 = v29;
      v41 = v28;
      v40 = v27;
      v39 = v26;
      v38 = v25;
LABEL_17:
      v49 = 0;
      reveal_relay_api_key_respond_dispatch_sys(&v21, &v38);   // dedicated final-dispatch callee (routes to invoke_resolver_respond_sys or the Display-error fallback path)
      goto LABEL_18;
    }
    v5 = v25.m256i_i64[1];
    v6 = *(_OWORD *)&v25.m256i_u64[2];
    if ( v25.m256i_i64[3] < 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    if ( v25.m256i_i64[3] )
    {
      nullsub_1(v4, v3);
      v7 = 1;
      v8 = (__m128i *)sub_140001360(*((__int64 *)&v6 + 1), 1);   // generic alloc helper
      if ( !v8 )
      {
LABEL_8:
        v47 = v6;
        v48 = v5;
        sub_1412AD46B(v7, *((_QWORD *)&v6 + 1));   // generic alloc-fail abort (Rust handle_alloc_error analog, shared, 100+ callers)
      }
      v9 = (__int64)v8;
      sub_1412762D0(v8, (const __m128i *)v6, *((unsigned __int64 *)&v6 + 1));
      if ( !v5 )
        goto LABEL_16;
    }
    else
    {
      v9 = 1;
      if ( !v25.m256i_i64[1] )
        goto LABEL_16;
    }
    sub_140001370(v6, v5, 1);   // generic dealloc helper
LABEL_16:
    v38.m256i_i8[8] = 3;
    v38.m256i_i64[2] = *((_QWORD *)&v6 + 1);
    v38.m256i_i64[3] = v9;
    *(_QWORD *)&v39 = *((_QWORD *)&v6 + 1);
    v38.m256i_i64[0] = 0x8000000000000000uLL;
    goto LABEL_17;
  }
  // providerId arg-extract error path -> generic dispatcher, error_return terminus
  v22 = v38;
  sub_1412762D0(v13, (const __m128i *)(a1 + 520), 0x168u);
  v31 = *(_OWORD *)(a1 + 880);
  v32 = *(_QWORD *)(a1 + 896);
  v21 = 1;
  v50 = 0;
  invoke_resolver_respond_sys(v13, v18, (__int64)&v21, &v31, v19, v20);   // terminated_reason=response_serialize
LABEL_18:
  // cleanup: drop any leftover manager-lookup Vec elements (stride 96B; shared drop-loop helper sub_1401EEBE0)
  if ( !__OFSUB__(0, (_QWORD)v45) )
  {
    v10 = *((_QWORD *)&v45 + 1);
    v47 = v46;
    v48 = 0;
    v44 = *((_QWORD *)&v45 + 1);
    while ( v47 != v48 )
    {
      ++v48;
      v11 = v10 + 96;
      sub_1401EEBE0();
      v10 = v11;
    }
    if ( (_QWORD)v45 )
      sub_140001370(*((_QWORD *)&v45 + 1), 96 * v45, 8);
  }
  return sub_140406280(v15);   // generic final struct-free/cleanup helper
}
