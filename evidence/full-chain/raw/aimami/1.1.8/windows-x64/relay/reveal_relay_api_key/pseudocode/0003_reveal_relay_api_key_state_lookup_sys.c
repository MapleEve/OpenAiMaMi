// aimami 1.1.8 windows-x64 — reveal_relay_api_key_state_lookup_sys (renamed in IDB this session)
// VA: 0x14026ad50, size=720B (0x2d0), basic_blocks=41, cyclomatic_complexity=22.
// FULL decompile, 0 truncation (decompile() with include_addresses=false returned the entire body;
// an earlier analyze_function() call on this address had reported decompile_truncated=164, which
// is a render-limit artifact of that endpoint only — corrected here via the direct decompile() call,
// genuine_ceiling=false).
// Sole caller: reveal_relay_api_key_response_build_sys (1 xref) -> DEDICATED, not shared.
// session <审计会话> / machine <本地机器> / model claude-sonnet-5
//
// String evidence: "relay state poisoned" (aRelayStatePois) embedded in this function's body,
// confirming this IS the relay-manager RwLock READ-guard acquire + linear provider Vec scan
// (232B struct stride — matches the 1.1.1 baseline's documented "RelayProvider stride 232B"
// exactly). Two-tier lookup confirmed: (1) in-memory relay-state Vec scan by providerId first;
// (2) on miss, falls through to sub_14027D5B0 — a SHARED (9-caller) keychain-fallback helper
// whose own string pool contains "codexmate_lib::core::relay::keychain" /
// "src\core\relay\keychain.rs" / "USER" / "USERNAME", matching the 1.1.1 baseline's documented
// "keychain fallback"/"secrets.json"/"USERNAME env var fallback" behavior byte-for-byte in
// architecture (not renamed here — shared across >=9 call sites spanning other relay commands,
// e.g. get_relay_provider_quota's own provider-lookup path; matches this session's established
// shared-dispatcher-non-rename policy). Confirmed READ-ONLY end to end: only lock acquire/release,
// Vec scan, and a keychain *read* are observed — no relay-state mutation, no secrets.json write.

unsigned __int64 *__fastcall reveal_relay_api_key_state_lookup_sys(unsigned __int64 *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 *v7; // rsi
  __int64 v8; // r12   -- relay state base pointer (a2[1])
  char *v9; // r13     -- &state->rwlock_byte (v8+16)
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r14   -- result sentinel / found-value slot
  _QWORD *v14; // r13
  __int64 v15; // r14   -- remaining bytes in provider Vec (232 * count)
  char v16; // al
  _QWORD *v17; // r14
  _QWORD *v18; // r14
  unsigned __int64 v19; // r12
  _QWORD *v20; // r14
  _QWORD *v22; // r14
  char v23; // al
  __int128 v24; // [rsp+30h] [rbp-50h]
  unsigned __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+78h] [rbp-8h]
  unsigned __int64 v29; // [rsp+88h] [rbp+8h]
  __int64 v30; // [rsp+90h] [rbp+10h]

  v30 = -2;
  v7 = a1;
  v8 = a2[1];
  v9 = (char *)(v8 + 16);
  LOBYTE(a1) = 1;
  // --- RwLock read-guard fast-path (Interlocked CAS on the lock byte); contended -> blocking park ---
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v8 + 16), 1, 0) )
  {
    v17 = a2;
    sub_1412ABCB0((volatile void *)(v8 + 16));   // blocking WaitOnAddress-style park (shared kernel primitive, terminated_reason=external_call)
    a2 = v17;
  }
  if ( !(2 * *off_141963EA8) )
  {
    v10 = 0;
    v11 = *(unsigned __int8 *)(v8 + 17);
    if ( !(_BYTE)v11 )
      goto LABEL_5;
LABEL_33:
    v26 = v8 + 16;
    LOBYTE(v27) = v10;
    // poisoned-lock panic path: "relay state poisoned" (aRelayStatePois @0x141329e6e)
    sub_1412AD780(
      (unsigned int)aRelayStatePois,
      20,
      (unsigned int)&v26,
      (unsigned int)&off_14132C718,
      (__int64)&off_141329F68);          // terminated_reason=error_return (Rust panic!, RwLock poison)
  }
  v18 = a2;
  v10 = sub_1412AC970(a1, a2);           // spurious-wake / re-check predicate (shared futex helper)
  a2 = v18;
  LOBYTE(v10) = v10 ^ 1;
  v11 = *(unsigned __int8 *)(v8 + 17);
  if ( (_BYTE)v11 )
    goto LABEL_33;
LABEL_5:
  LODWORD(v29) = v10;
  v12 = *(_QWORD *)(v8 + 40);            // provider count
  v13 = 0x8000000000000000uLL;           // sentinel "not found in memory"
  if ( v12 )
  {
    // --- linear scan over RelayProvider Vec, 232B stride, matching providerId (a3/a4) ---
    v14 = a2;
    v15 = 232 * v12;
    v4 = *(_QWORD *)(v8 + 32) + 72LL;    // first provider's id-field offset (+72 within 232B struct)
    while ( *(_QWORD *)(v4 - 56) != a4 || (unsigned int)sub_141276960(*(unsigned __int64 **)(v4 - 64), a3, a4) )
    {
      v4 += 232;
      v15 -= 232;
      if ( !v15 )
      {
        // exhausted Vec, no match -> keep sentinel, fall through to unlock + keychain fallback
        a2 = v14;
        v9 = (char *)(v8 + 16);
        v13 = 0x8000000000000000uLL;
        if ( !(_BYTE)v29 )
          goto LABEL_22;
        goto LABEL_23;
      }
    }
    // match found -> clone the matching provider's stored apiKey field via the shared
    // option_clone_if_present_helper_sys@0x14108f780 (48+ callers elsewhere this session,
    // e.g. refresh_single_account_usage's own leaf; terminated_reason=response_serialize here)
    sub_14108F780((unsigned __int64 *)&v26, v4);
    v13 = 0x8000000000000000uLL;
    if ( !__OFSUB__(-v26, 1) )
    {
      v11 = v27;
      v4 = v28;
      if ( (_QWORD)v28 )
      {
        v25 = v27;
        v13 = v26;                        // apiKey found in memory -> Some(value)
      }
      else
      {
        if ( v26 )
          sub_140001370(v27, v26, 1);
        v4 = 0;
      }
    }
    a2 = v14;
    v9 = (char *)(v8 + 16);
    if ( (_BYTE)v29 )
      goto LABEL_23;
  }
  else if ( (_BYTE)v29 )
  {
    goto LABEL_23;
  }
LABEL_22:
  // re-check predicate before unlock (parking_lot-style optimistic re-validate)
  if ( 2 * *off_141963EA8 )
  {
    v29 = v13;
    v22 = a2;
    v23 = sub_1412AC970(v11, a2);
    a2 = v22;
    v13 = v29;
    if ( !v23 )
      *(_BYTE *)(v8 + 17) = 1;
  }
LABEL_23:
  // --- RwLock release: clear lock byte; if contended-waiters flag was set, wake blocked threads ---
  v16 = *v9;
  *v9 = 0;
  if ( v16 != 2 )
  {
    if ( __OFSUB__(-(__int64)v13, 1) )
      goto LABEL_25;
LABEL_35:
    *v7 = v13;
    v7[1] = v25;
    v7[2] = v4;
    return v7;                           // found-in-memory return path, no keychain fallback needed
  }
  v19 = v13;
  v20 = a2;
  WakeByAddressSingle(v9);               // terminated_reason=external_call (kernel32 sync primitive, contended-lock release)
  a2 = v20;
  v13 = v19;
  if ( !__OFSUB__(-(__int64)v19, 1) )
    goto LABEL_35;
LABEL_25:
  // --- not found in memory (v13 still sentinel) -> keychain fallback ---
  // sub_14027D5B0: SHARED helper (9 callers across the binary incl. other relay provider-lookup
  // commands), 4526B, string pool contains "codexmate_lib::core::relay::keychain",
  // "src\core\relay\keychain.rs", "USER", "USERNAME" — this is the Windows Credential-Manager /
  // env-derived keychain-store read fallback documented in the 1.1.1 baseline's
  // "keychain fallback"/"secrets.json"/"USERNAME env var" behavior. terminated_reason=persistence_read.
  sub_14027D5B0(&v26, *a2 + 16LL, a3, a4);
  if ( (_BYTE)v26 )
  {
    if ( v27 )
      sub_140001370(v28, v27, 1);
  }
  else
  {
    v24 = v28;
    if ( v27 != 0x8000000000000001uLL && !__OFSUB__(-(__int64)v27, 1) )
    {
      *v7 = v27;
      *(_OWORD *)(v7 + 1) = v24;
      return v7;                          // found-via-keychain return path
    }
  }
  *v7 = 0;
  v7[1] = 1;
  v7[2] = 0;                              // not found anywhere -> None
  return v7;
}
