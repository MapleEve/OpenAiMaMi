// set_relay_display_tags_owner_sys @ 0x1403ea210 (AiMaMi 1.1.8, windows-x64)
// session: <审计会话> | machine: <本地机器> | model: claude-sonnet-5
// size=1518 bytes (analyze_function) | basic_blocks=43 | cyclomatic_complexity=12
// 1 caller: sub_1403CF5B0 (main IPC dispatcher, size=0x4ad3=19155B, matches
//           intermediate/aimami/1.1.8/windows-x64/version-delta/win-divergence-118.json's
//           documented "main_ipc_dispatcher" VA+size exactly) — confirmed via xrefs_to.
// EXACT byte-size match to 1.1.1 baseline owner (raw/aimami/1.1.1/windows-x64/set_relay_display_tags/
// owner.md: 0x14001F080, 1518B/0x5EE) — VA churned, size identical, zero owner-level growth.
// NOTE: analyze_function()'s own preview reported "decompile_truncated: 194" — this was a
// render-limit artifact of THAT endpoint only; a direct decompile() call (used to produce this
// file) returned the COMPLETE 1518-byte body with 0 real truncation (matching braces, clean
// terminal `return sub_140406280(v17);`). Not an accepted_unknown / fake-wall.

__int64 __fastcall set_relay_display_tags_owner_sys(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  const __m128i *v7; // r15
  __int128 v8; // rdi
  __int64 v9; // rbx
  __m128i *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __m128i v14[22]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v15[22]; // [rsp+198h] [rbp+118h] BYREF
  __m128i v16[22]; // [rsp+300h] [rbp+280h] BYREF
  __m128i v17[32]; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v18; // [rsp+668h] [rbp+5E8h]
  __m128i v19; // [rsp+670h] [rbp+5F0h] BYREF
  const __m128i *v20; // [rsp+680h] [rbp+600h]
  __int64 v21; // [rsp+688h] [rbp+608h]
  __m256i v22[12]; // [rsp+818h] [rbp+798h] BYREF
  __m128i v23[24]; // [rsp+9A8h] [rbp+928h] BYREF
  __int64 v24; // [rsp+B28h] [rbp+AA8h]
  int v25; // [rsp+B30h] [rbp+AB0h]
  int v26; // [rsp+B34h] [rbp+AB4h]
  __int64 v27; // [rsp+B38h] [rbp+AB8h] BYREF
  __m256i v28; // [rsp+B40h] [rbp+AC0h] BYREF
  __int128 *v29; // [rsp+B60h] [rbp+AE0h]
  __int64 v30; // [rsp+B68h] [rbp+AE8h]
  __int128 v31; // [rsp+CE0h] [rbp+C60h] BYREF
  __int64 v32; // [rsp+CF0h] [rbp+C70h]
  __int128 v33; // [rsp+D00h] [rbp+C80h] BYREF
  __int64 v34; // [rsp+D10h] [rbp+C90h]
  __int128 v35; // [rsp+D20h] [rbp+CA0h] BYREF
  __int64 v36; // [rsp+D30h] [rbp+CB0h]
  __int128 v37; // [rsp+D40h] [rbp+CC0h] BYREF
  __int64 v38; // [rsp+D50h] [rbp+CD0h]
  __m256i v39; // [rsp+D58h] [rbp+CD8h] BYREF
  __m256i v40; // [rsp+D78h] [rbp+CF8h] BYREF
  __int64 v41; // [rsp+D98h] [rbp+D18h]
  __int128 v42; // [rsp+DA0h] [rbp+D20h] BYREF
  __int64 v43; // [rsp+DB0h] [rbp+D30h]
  __int128 v44; // [rsp+DC0h] [rbp+D40h] BYREF
  const __m128i *v45; // [rsp+DD0h] [rbp+D50h]
  const __m128i *v46; // [rsp+DE0h] [rbp+D60h]
  __int64 v47; // [rsp+DE8h] [rbp+D68h]
  char v48; // [rsp+DF6h] [rbp+D76h]
  char v49; // [rsp+DF7h] [rbp+D77h]
  __int64 v50; // [rsp+DF8h] [rbp+D78h]

  v50 = -2; /*0x1403ea229*/
  sub_1412762D0(v17, (const __m128i *)a1, 0x208u); /*0x1403ea24a — copy IPC payload buffer (520B)*/
  sub_1412762D0(v23, (const __m128i *)(a1 + 520), 0x190u); /*0x1403ea266 — copy IPC env buffer (400B)*/
  v45 = *(const __m128i **)(a1 + 936); /*0x1403ea272*/
  v44 = *(_OWORD *)(a1 + 920); /*0x1403ea280*/
  v30 = 0; /*0x1403ea287*/
  v27 = (__int64)aSetRelayDispla; /*0x1403ea299 — "set_relay_display_tags" (22B) @ 0x14133b74c*/
  v28.m256i_i64[0] = 22; /*0x1403ea2a0 — cmd literal length = 22*/
  v28.m256i_i64[1] = (__int64)aManager_0; /*0x1403ea2b2 — "manager" @ 0x14133b7a0*/
  v28.m256i_i64[2] = 7; /*0x1403ea2b9 — key len = 7 (matches 1.1.1 baseline exactly)*/
  v28.m256i_i64[3] = (__int64)v17; /*0x1403ea2c4*/
  v29 = &v44; /*0x1403ea2d2*/
  v49 = 1; /*0x1403ea2e4*/
  /* --- Param 1: manager (String, required) --- */
  v3 = sub_140419560((char *)(v18 + 16), v2); /*0x1403ea2f1 — required-string extractor*/
  if ( !v3 ) /*0x1403ea2f7*/
  {
    v49 = 1; /*0x1403ea300*/
    sub_14127A550((__int64)&v39, (__int64)&v27, (__int64)&v28.m256i_i64[1]); /*0x1403ea315 — optional-fallback tracing helper (shared)*/
    if ( v39.m256i_i8[0] != 6 ) /*0x1403ea322 — tag!=6 => manager param extraction failed*/
    {
      v28 = v39; /*0x1403ea616*/
      sub_1412762D0(v16, (const __m128i *)(a1 + 520), 0x168u); /*0x1403ea637*/
      v35 = *(_OWORD *)(a1 + 880); /*0x1403ea64a*/
      v36 = *(_QWORD *)(a1 + 896); /*0x1403ea658*/
      v27 = 1; /*0x1403ea66b*/
      v49 = 0; /*0x1403ea676*/
      invoke_resolver_respond_sys(v16, v24, (__int64)&v27, &v35, v25, v26); /*0x1403ea696 — IPC error resolver (TERMINAL, response_serialize)*/
      goto LABEL_23; /*0x1403ea69c*/
    }
    v3 = v39.m256i_i64[1]; /*0x1403ea328 — manager: String value*/
  }
  /* --- Param 2: global (Option<String>, optional) --- */
  v30 = 0; /*0x1403ea32f*/
  v27 = (__int64)aSetRelayDispla; /*0x1403ea33a*/
  v28.m256i_i64[0] = 22; /*0x1403ea341*/
  v28.m256i_i64[1] = (__int64)aGlobal; /*0x1403ea353 — "global" @ 0x14133b86b*/
  v28.m256i_i64[2] = 6; /*0x1403ea35a — key len = 6 (matches 1.1.1 baseline exactly)*/
  v28.m256i_i64[3] = (__int64)v17; /*0x1403ea365*/
  v29 = &v44; /*0x1403ea36c*/
  v49 = 1; /*0x1403ea373*/
  refresh_usage_arg_extract_poll_sys((__int64)&v40, &v27); /*0x1403ea388 — Option<String> parser (shared), tag=6 Some / else None*/
  if ( v40.m256i_i8[0] == 6 ) /*0x1403ea395*/
  {
    v43 = v40.m256i_i64[3]; /*0x1403ea3a2*/
    v42 = *(_OWORD *)&v40.m256i_u64[1]; /*0x1403ea3b0 — global: Some(String)*/
    /* --- Param 3: woyao (Option<String>, optional) --- */
    v30 = 0; /*0x1403ea3b7*/
    v27 = (__int64)aSetRelayDispla; /*0x1403ea3c2*/
    v28.m256i_i64[0] = 22; /*0x1403ea3c9*/
    v28.m256i_i64[1] = (__int64)aWoyao; /*0x1403ea3db — "woyao" @ 0x14133b871*/
    v28.m256i_i64[2] = 5; /*0x1403ea3e2 — key len = 5 (matches 1.1.1 baseline exactly)*/
    v28.m256i_i64[3] = (__int64)v17; /*0x1403ea3ed*/
    v29 = &v44; /*0x1403ea3f4*/
    refresh_usage_arg_extract_poll_sys((__int64)v22, &v27); /*0x1403ea409 — same shared Option<String> parser*/
    LOBYTE(v47) = v22[0].m256i_i8[0]; /*0x1403ea416*/
    if ( v22[0].m256i_i8[0] == 6 ) /*0x1403ea41e*/
    {
      v38 = v22[0].m256i_i64[3]; /*0x1403ea42b*/
      v37 = *(_OWORD *)&v22[0].m256i_u64[1]; /*0x1403ea439 — woyao: Some(String)*/
      /* --- Core dispatch (manager, global-tuple, woyao-tuple) --- */
      sub_140023C50(&v19, v3, &v42, &v37); /*0x1403ea458 — set_relay_display_tags_core_dispatch_sys, see 0002*/
      sub_1412762D0((__m128i *)v22, (const __m128i *)(a1 + 520), 0x190u); /*0x1403ea46e*/
      if ( __OFSUB__(0, v19.m128i_i64[0]) ) /*0x1403ea475 — dispatch result Err branch*/
      {
        v6 = v19.m128i_i64[1]; /*0x1403ea482*/
        v7 = v20; /*0x1403ea489*/
        *((_QWORD *)&v8 + 1) = v21; /*0x1403ea490*/
        if ( v21 < 0 ) /*0x1403ea49a*/
        {
          v9 = 0; /*0x1403ea4a0*/
          goto LABEL_9;
        }
        if ( v21 ) /*0x1403ea6bc*/
        {
          nullsub_1(v5, v4); /*0x1403ea6be*/
          v9 = 1; /*0x1403ea6c3*/
          v10 = (__m128i *)sub_140001360(*((__int64 *)&v8 + 1), 1); /*0x1403ea6d0 — WIN heap alloc*/
          if ( !v10 ) /*0x1403ea6d8*/
          {
LABEL_9:
            v46 = v7; /*0x1403ea4a2*/
            v47 = v6; /*0x1403ea4a9*/
            sub_1412AD46B(v9, *((_QWORD *)&v8 + 1)); /*0x1403ea4b6 — alloc-fail abort (terminated_reason=error_return)*/
          }
          *(_QWORD *)&v8 = v10; /*0x1403ea6de*/
          sub_1412762D0(v10, v7, *((unsigned __int64 *)&v8 + 1)); /*0x1403ea6ea*/
        }
        else
        {
          *(_QWORD *)&v8 = 1; /*0x1403ea6f1*/
        }
        if ( v6 ) /*0x1403ea6f9*/
          sub_140001370(v7, v6, 1); /*0x1403ea707 — dealloc*/
        v28.m256i_i8[0] = 3; /*0x1403ea70c*/
        v28.m256i_i64[1] = *((_QWORD *)&v8 + 1); /*0x1403ea713*/
        *(_OWORD *)&v28.m256i_u64[2] = v8; /*0x1403ea71a*/
        v27 = 0x8000000000000000uLL; /*0x1403ea732*/
      }
      else
      {
        sub_1412762D0((__m128i *)&v27, &v19, 0x1A8u); /*0x1403ea6b5 — Ok result, copy full 424B result struct*/
      }
      v48 = 0; /*0x1403ea739*/
      sub_1407B0DA0(v22, &v27); /*0x1403ea74e — response builder + IPC send, see interface/evidence*/
    }
    else
    {
      /* woyao param extraction failed (tag!=6, tag!=3-None-path also excluded here) */
      v28 = v22[0]; /*0x1403ea565*/
      sub_1412762D0(v14, (const __m128i *)(a1 + 520), 0x168u); /*0x1403ea583*/
      v31 = *(_OWORD *)(a1 + 880); /*0x1403ea596*/
      v32 = *(_QWORD *)(a1 + 896); /*0x1403ea5a4*/
      v27 = 1; /*0x1403ea5b7*/
      invoke_resolver_respond_sys(v14, v24, (__int64)&v27, &v31, v25, v26); /*0x1403ea5db — TERMINAL, response_serialize*/
      if ( (_QWORD)v42 ) /*0x1403ea5eb*/
        sub_140001370(*((_QWORD *)&v42 + 1), v42, 1); /*0x1403ea5fe — dealloc global (unused because woyao failed)*/
    }
  }
  else
  {
    /* global param extraction failed */
    v28 = v40; /*0x1403ea4cc*/
    sub_1412762D0(v15, (const __m128i *)(a1 + 520), 0x168u); /*0x1403ea4ed*/
    v33 = *(_OWORD *)(a1 + 880); /*0x1403ea500*/
    v34 = *(_QWORD *)(a1 + 896); /*0x1403ea50e*/
    v27 = 1; /*0x1403ea521*/
    v49 = 0; /*0x1403ea52c*/
    invoke_resolver_respond_sys(v15, v24, (__int64)&v27, &v33, v25, v26); /*0x1403ea54c — TERMINAL, response_serialize*/
  }
LABEL_23:
  if ( !__OFSUB__(0, (_QWORD)v44) ) /*0x1403ea75d*/
  {
    v11 = *((_QWORD *)&v44 + 1); /*0x1403ea763*/
    v46 = v45; /*0x1403ea771*/
    v47 = 0; /*0x1403ea778*/
    v41 = *((_QWORD *)&v44 + 1); /*0x1403ea783*/
    while ( v46 != (const __m128i *)v47 ) /*0x1403ea79e — cleanup loop*/
    {
      ++v47; /*0x1403ea7a3*/
      v12 = v11 + 96; /*0x1403ea7aa*/
      sub_1401EEBE0(); /*0x1403ea7ae*/
      v11 = v12; /*0x1403ea7b4*/
    }
    if ( (_QWORD)v44 ) /*0x1403ea7c3*/
      sub_140001370(*((_QWORD *)&v44 + 1), 96 * v44, 8); /*0x1403ea7da — dealloc*/
  }
  return sub_140406280(v17); /*0x1403ea7ec — cleanup local buffer, return*/
}

/* refs (反编译器 xrefs, this decompile call):
   0x1412762d0 sub_1412762D0 (generic memcpy helper)
   0x14133b74c aSetRelayDispla "set_relay_display_tags"
   0x14133b7a0 aManager_0 "manager"
   0x140419560 sub_140419560 (manager required-string extractor)
   0x14127a550 sub_14127A550 (optional-fallback tracing helper, shared)
   0x1407a7610 invoke_resolver_respond_sys (SHARED IPC resolver leaf, terminal)
   0x14133b86b aGlobal "global"
   0x14086fd70 refresh_usage_arg_extract_poll_sys (SHARED Option<String> parser)
   0x14133b871 aWoyao "woyao"
   0x140023c50 set_relay_display_tags_core_dispatch_sys (renamed this session, see 0002)
   0x1400013a0 nullsub_1
   0x140001360 sub_140001360 (WIN heap alloc)
   0x1412ad46b sub_1412AD46B (alloc-fail abort)
   0x140001370 sub_140001370 (WIN heap dealloc)
   0x1407b0da0 sub_1407B0DA0 (response builder + IPC send tail)
   0x1401eebe0 sub_1401EEBE0 (cleanup loop body)
   0x140406280 sub_140406280 (final local-buffer cleanup)
*/
