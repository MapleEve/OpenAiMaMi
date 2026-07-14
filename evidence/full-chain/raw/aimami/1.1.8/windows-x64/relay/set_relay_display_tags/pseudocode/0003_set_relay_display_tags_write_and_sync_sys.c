// set_relay_display_tags_write_and_sync_sys @ 0x14026b0a0 (AiMaMi 1.1.8, windows-x64)
// session: <审计会话> | machine: <本地机器> | model: claude-sonnet-5
// size=716 bytes (analyze_function) | basic_blocks=21 | cyclomatic_complexity=9
// 1 caller: set_relay_display_tags_core_dispatch_sys@0x140023c50 (confirmed via xrefs_to) —
// DEDICATED, renamed this session.
// vs 1.1.1 baseline write+sync (raw/aimami/1.1.1/windows-x64/set_relay_display_tags/owner.md:
// set_relay_display_tags_write_and_sync_sys@0x1406D71D0, ~1318B): THIS build's equivalent layer
// is markedly SMALLER (716B, -~602B) because the lock-acquire + RelayProvider-snapshot + persist
// logic that was INLINE in the 1.1.1 function has been extracted into a shared, multi-caller
// helper chain in 1.1.8 (sub_14027a5f0 [15 callers] -> sub_14058b830 [6 callers] ->
// sub_1405bdec0 [27 callers], none renamed — see evidence.md for the shared-infra rationale).
// This is a genuine architectural delta candidate (Inferred): consistent with 1.1.8 introducing
// several NEW relay commands (get_relay_provider_quota, reveal_relay_api_key,
// reorder_relay_providers, test_relay_draft_stream, test_relay_provider_stream) that plausibly
// motivated consolidating relay-config lock/persist logic into shared infrastructure across the
// whole relay command family, rather than each command inlining its own copy as in 1.1.1.
// NOTE: analyze_function()'s own preview reported "decompile_truncated: 106" — resolved via a
// direct decompile() call (used to produce this file) which returned the COMPLETE 716-byte body
// with 0 real truncation (matching braces, clean terminal `return a1;`). Not accepted_unknown.

__int64 __fastcall set_relay_display_tags_write_and_sync_sys(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  char v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __m128i v20[21]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v21[128]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v22; // [rsp+200h] [rbp+180h]
  __int64 v23; // [rsp+210h] [rbp+190h]
  __int128 v24; // [rsp+218h] [rbp+198h]
  __int64 v25; // [rsp+228h] [rbp+1A8h]
  _BYTE v26[288]; // [rsp+2D8h] [rbp+258h] BYREF
  char v27; // [rsp+42Ch] [rbp+3ACh]
  _QWORD *v28; // [rsp+430h] [rbp+3B0h]
  __int64 *v29; // [rsp+438h] [rbp+3B8h]
  char v30; // [rsp+447h] [rbp+3C7h]
  __int64 v31; // [rsp+448h] [rbp+3C8h]

  v31 = -2; /*0x14026b0b9*/
  v29 = a4; /*0x14026b0c4 — woyao option-tuple ptr*/
  v28 = a3; /*0x14026b0cb — global option-tuple ptr*/
  sub_14027BE60(v26); /*0x14026b0df — SHARED lock-state/poison probe (0x14027be60, 28 callers
                          across relay-family commands); sets a gate flag consumed below on the
                          error/fallback path. Also contains the "relay state poisoned" panic
                          literal @0x141329e6e (same string as the 1.1.1 baseline's documented
                          poison path).*/
  v6 = v27; /*0x14026b0e5 — gate flag from the probe above*/
  sub_14004A000(v26); /*0x14026b0f3*/
  sub_14027BE60(v21); /*0x14026b103 — second probe call (unused result kept as scratch)*/
  v7 = v28[1]; /*0x14026b110*/
  v8 = v28[2]; /*0x14026b114*/
  v30 = 1; /*0x14026b118*/
  sub_1405BFC40(v26, v7, v8); /*0x14026b129 — clone global Option<String> (shared string-clone helper)*/
  if ( (_QWORD)v22 ) /*0x14026b140*/
    sub_140001370(*((_QWORD *)&v22 + 1), v22, 1); /*0x14026b14f — dealloc previous*/
  v23 = *(_QWORD *)&v26[16]; /*0x14026b15b*/
  v22 = *(_OWORD *)v26; /*0x14026b166*/
  v9 = v29[1]; /*0x14026b170*/
  v10 = v29[2]; /*0x14026b174*/
  v30 = 1; /*0x14026b178*/
  sub_1405BFC40(v26, v9, v10); /*0x14026b189 — clone woyao Option<String> (same helper)*/
  if ( (_QWORD)v24 ) /*0x14026b1a0*/
    sub_140001370(*((_QWORD *)&v24 + 1), v24, 1); /*0x14026b1af — dealloc previous*/
  v25 = *(_QWORD *)&v26[16]; /*0x14026b1bb*/
  v24 = *(_OWORD *)v26; /*0x14026b1c7*/
  v30 = 0; /*0x14026b1cc*/
  sub_14027A5F0(v26, a2, v21); /*0x14026b1e4 — SHARED relay-persist-dispatch (0x14027a5f0,
                                  15 callers): fast path calls sub_14058b830 (config-validate +
                                  JSON-serialize + persist) directly; on failure (tag==10),
                                  internally does its OWN _InterlockedCompareExchange8 lock
                                  acquire + poison-check + WakeByAddressSingle retry — see
                                  evidence.md for the full sub-chain (this is where the terminal
                                  WIN fs leaf and depth>=5 requirement is satisfied). */
  if ( *(_DWORD *)v26 != 10 ) /*0x14026b1f1 — tag!=10 => Ok*/
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v26[80]; /*0x14026b28a*/
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v26[64]; /*0x14026b295*/
    v13 = *(_OWORD *)v26; /*0x14026b299*/
    v14 = *(_OWORD *)&v26[16]; /*0x14026b2a0*/
    v15 = *(_OWORD *)&v26[32]; /*0x14026b2a7*/
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v26[48]; /*0x14026b2b5*/
    *(_OWORD *)(a1 + 40) = v15; /*0x14026b2b9*/
    *(_OWORD *)(a1 + 24) = v14; /*0x14026b2bd*/
    *(_OWORD *)(a1 + 8) = v13; /*0x14026b2c1 — Ok(WriteResult) copied to out-struct*/
    goto LABEL_11;
  }
  if ( v6 ) /*0x14026b1fa — gate flag from the first sub_14027BE60 probe*/
  {
    v30 = 0; /*0x14026b1fc*/
    sub_140273F40(v26, a2); /*0x14026b20d — SHARED fallback/retry path (0x140273f40, 14 callers);
                                only attempted when the pre-check gate flag (v6) was set at entry.
                                Exact Rust-level semantics of v6 not independently traced this
                                round (Unknown, non-blocking, recorded in evidence.md).*/
    v11 = *(_QWORD *)v26; /*0x14026b213*/
    if ( *(_QWORD *)v26 != 10 ) /*0x14026b21e — retry succeeded*/
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v26[88]; /*0x14026b328*/
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v26[72]; /*0x14026b333*/
      v17 = *(_OWORD *)&v26[8]; /*0x14026b337*/
      v18 = *(_OWORD *)&v26[24]; /*0x14026b33e*/
      v19 = *(_OWORD *)&v26[40]; /*0x14026b345*/
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v26[56]; /*0x14026b353*/
      *(_OWORD *)(a1 + 48) = v19; /*0x14026b357*/
      *(_OWORD *)(a1 + 32) = v18; /*0x14026b35b*/
      *(_OWORD *)(a1 + 16) = v17; /*0x14026b35f*/
      *(_QWORD *)(a1 + 8) = v11; /*0x14026b363 — Ok(WriteResult) via retry path*/
LABEL_11:
      *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x14026b2c5*/
      v12 = *v29; /*0x14026b2d9*/
      if ( !*v29 ) /*0x14026b2df*/
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v30 = 0; /*0x14026b224*/
  sub_14027BE60(v26); /*0x14026b235 — final error-path probe*/
  sub_140589E90(v20, v26); /*0x14026b246 — build final RelayError value*/
  v30 = 0; /*0x14026b24c*/
  sub_14004A000(v26); /*0x14026b25a*/
  sub_1412762D0((__m128i *)a1, v20, 0x158u); /*0x14026b26d — Err(RelayError) copied to out-struct*/
  v12 = *v29; /*0x14026b279*/
  if ( *v29 ) /*0x14026b279*/
LABEL_12:
    sub_140001370(v9, v12, 1); /*0x14026b2e1 — dealloc woyao clone*/
LABEL_13:
  if ( *v28 ) /*0x14026b2f6*/
    sub_140001370(v7, *v28, 1); /*0x14026b307 — dealloc global clone*/
  return a1; /*0x14026b30f*/
}

/* refs (反编译器 xrefs, this decompile call):
   0x14027be60 sub_14027BE60 (SHARED lock-state/poison probe, 28 callers, contains
                              "relay state poisoned" panic literal @0x141329e6e)
   0x14004a000 sub_14004A000 (cleanup/drop helper)
   0x1405bfc40 sub_1405BFC40 (SHARED Option<String> clone helper)
   0x140001370 sub_140001370 (WIN heap dealloc)
   0x14027a5f0 sub_14027A5F0 (SHARED relay-persist-dispatch, 15 callers — see evidence.md for
                              the full sub-chain down to the WIN fs terminal leaf)
   0x140273f40 sub_140273F40 (SHARED fallback/retry path, 14 callers)
   0x140589e90 sub_140589E90 (RelayError value builder on the terminal-failure path)
   0x1412762d0 sub_1412762D0 (generic memcpy helper)
*/
