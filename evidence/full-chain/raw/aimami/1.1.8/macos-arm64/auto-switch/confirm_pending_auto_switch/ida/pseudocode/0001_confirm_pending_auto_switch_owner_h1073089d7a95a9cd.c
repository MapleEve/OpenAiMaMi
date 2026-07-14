// SOURCE: AiMaMi 1.1.8 macOS universal (Mach-O fat, x86_64+arm64) — decompiled slice: x86_64
//   (反编译器 mac IDB loaded x86_64 slice only; see intermediate/aimami/1.1.8/macos-arm64/_threadmodel/
//    mac-shard-3 BLOCKED note in REVERSE-STATUS.md for the arch-slice caveat. App-level facts below
//    — callee names, error strings, control flow, DTO shape — are architecture-independent and are
//    treated as valid mac evidence per orchestrator guidance; only register/stack/size-level detail
//    is x86_64-specific and is NOT used as a cross-arch size-match claim.)
// SHA256 (AiMaMi app Mach-O, universal file): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION (owner, per angle-A func_query): codexmate_lib::core::repository::Repository::confirm_pending_auto_switch
// SYMBOL: __ZN13codexmate_lib4core10repository10Repository27confirm_pending_auto_switch17h1073089d7a95a9cdE
// VA: 0x1005321a0
// STATUS: accepted pseudocode (live HexRays decompile, this session)
// SESSION: <审计会话> / <本地机器>

// a1 = out CoreEnvelope<SwitchPayload> (or CoreError) sret pointer
// a2 = &Repository (self)
//
// DELTA vs AiMaMi 1.0.9 macOS baseline (raw/aimami/1.0.9/macos/auto-switch/confirm_pending_auto_switch):
//   1.0.9: load_pending_auto_switch -> None: Err("No pending auto-switch request");
//          Some: switch_account(target_id) directly, no re-validation.
//   1.1.8: load_pending_auto_switch -> None: Err("No pending auto-switch request") [UNCHANGED string/behavior]
//          Some: NEW multi-step "candidate credential freshness gate" inserted before switch_account:
//            1. load_local_state_synced(repo) [NEW call] — re-syncs local runtime state (includes a
//               NEW conditional daemon self-repair sub-path: check_daemon_state -> resolve_daemon_binary
//               -> install_daemon, on failure builds a "AUTO_SWITCH_DAEMON_REPAIR_FAILED" internal
//               diagnostic string appended to a Vec<String> log carried in the returned state; this is
//               distinct from the user-facing error strings below and does not by itself fail the command).
//               If load_local_state_synced itself returns its own error discriminant (==2), that error is
//               forwarded directly (early return), bypassing the rest of this function.
//            2. Linear search of the freshly-synced candidate/account list (stride 336 bytes) for an
//               entry whose (ptr,len) key matches the pending suggestion's stored key.
//               - Not found (or list empty) -> NEW error "Candidate account no longer exists locally" (42B).
//            3. If found, branch on two packed fields of the matched entry (offset+128 discriminant,
//               offset+168 bitflags) to decide whether the candidate needs an OAuth-freshness re-check:
//               - needs-check branch: make_snapshot_path + fs::metadata; if a snapshot file already
//                 exists on disk, treat as already-fresh and fall through to switch_account. If it does
//                 NOT exist: load_auth_file(candidate) -> if load fails, tolerate and fall through to
//                 switch_account anyway (permissive fallback); if load succeeds -> api_proxy_config +
//                 oauth_refresh::ensure_fresh_token(AuthFile, ProxyConfig) [NEW, real HTTPS round-trip
//                 to https://auth.openai.com/oauth/token, see 0004_ensure_fresh_token] ->
//                   refresh failed -> clear_auto_switch_snooze + NEW error "Candidate token is no longer
//                   valid, please try another account" (62B)
//                   refresh ok -> fall through to switch_account
//               - not-needed branch (else) -> clear_auto_switch_snooze + NEW error "Candidate account
//                 credentials have expired since the suggestion was made" (72B) — candidate is rejected
//                 outright without attempting a refresh.
//            4. switch_account(repo, candidate, key, len) [UNCHANGED core action — see 0006] is reached
//               only via the two "fall through" edges above.
//          Cleanup (both 1.0.9 and 1.1.8): drop LoadedState / AccountSummary x2, return a1.
//
// Net effect: 1.1.8 adds a TOCTOU-style re-validation gate between "user confirms a previously-suggested
// switch" and "switch actually executes", with three brand-new user-facing rejection strings and one new
// internal-diagnostic string, plus a real network call (OAuth token refresh) that did not exist in 1.0.9's
// confirm_pending_auto_switch at all.

_QWORD *__fastcall codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h1073089d7a95a9cd(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  size_t v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  void *v8; // rax
  void *v9; // r15
  void *v10; // rax
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  signed __int64 v18; // r14
  void *v19; // rax
  __int64 v20; // [rsp+10h] [rbp-B90h] BYREF
  _BYTE v21[96]; // [rsp+18h] [rbp-B88h] BYREF
  _QWORD v22[103]; // [rsp+78h] [rbp-B28h] BYREF
  __int64 v23; // [rsp+3B0h] [rbp-7F0h] BYREF
  __int128 v24; // [rsp+3B8h] [rbp-7E8h]
  __int64 v25; // [rsp+3C8h] [rbp-7D8h]
  __int64 v26; // [rsp+3D0h] [rbp-7D0h]
  __int64 v27; // [rsp+3D8h] [rbp-7C8h]
  __int64 v28; // [rsp+3E0h] [rbp-7C0h]
  __int64 v29; // [rsp+3E8h] [rbp-7B8h]
  __int64 v30; // [rsp+3F0h] [rbp-7B0h]
  __int64 v31; // [rsp+3F8h] [rbp-7A8h]
  __int64 v32; // [rsp+400h] [rbp-7A0h]
  __int64 v33; // [rsp+408h] [rbp-798h]
  __int64 v34; // [rsp+410h] [rbp-790h]
  _QWORD __dst[73]; // [rsp+418h] [rbp-788h] BYREF
  _DWORD v36[24]; // [rsp+660h] [rbp-540h] BYREF
  _BYTE v37[928]; // [rsp+6C0h] [rbp-4E0h] BYREF
  _QWORD v38[22]; // [rsp+A60h] [rbp-140h] BYREF
  signed __int64 v39; // [rsp+B10h] [rbp-90h] BYREF
  __int64 v40; // [rsp+B18h] [rbp-88h]
  __int64 v41; // [rsp+B28h] [rbp-78h] BYREF
  __int64 v42; // [rsp+B30h] [rbp-70h]
  __int64 v43; // [rsp+B48h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B50h] [rbp-50h]
  __int64 v45; // [rsp+B58h] [rbp-48h]
  __int64 v46; // [rsp+B60h] [rbp-40h]
  void *__s2; // [rsp+B68h] [rbp-38h]
  _QWORD *v48; // [rsp+B70h] [rbp-30h]

  codexmate_lib::core::repository::Repository::load_pending_auto_switch::he8817545a8701b54(v37); /*0x1005321c1*/
  if ( *(_QWORD *)v37 != 2 ) /*0x1005321d1*/
  {
    v27 = *(_QWORD *)&v37[40]; v28 = *(_QWORD *)&v37[48]; v29 = *(_QWORD *)&v37[56];
    v30 = *(_QWORD *)&v37[64]; v31 = *(_QWORD *)&v37[72]; v32 = *(_QWORD *)&v37[80];
    v33 = *(_QWORD *)&v37[88]; v34 = *(_QWORD *)&v37[96];
    memcpy(__dst, &v37[104], sizeof(__dst));
    v23 = *(_QWORD *)v37; v24 = *(_OWORD *)&v37[8]; v25 = *(_QWORD *)&v37[24]; v26 = *(_QWORD *)&v37[32];
    codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(v37); /*0x100532312*/
    qmemcpy(v38, &v37[8], 0x60u);
    if ( *(_QWORD *)v37 == 2 ) /* load_local_state_synced returned its own error -> forward it */
    {
      qmemcpy(a1 + 1, v38, 0x60u); *a1 = 2;
LABEL_23:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&v23);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dst[29]);
      return a1;
    }
    v48 = a2;
    memcpy(v22, &v37[104], sizeof(v22)); qmemcpy(v21, v38, sizeof(v21)); v20 = *(_QWORD *)v37;
    if ( v22[87] ) /* candidate list stride 336B, count = v22[87] */
    {
      v3 = v22[86]; v4 = 336LL * v22[87]; __s2 = (void *)__dst[52]; v5 = __dst[53]; v6 = 0;
      while ( *(_QWORD *)(v3 + v6 + 192) != v5 || memcmp(*(const void **)(v3 + v6 + 184), __s2, v5) )
      {
        v6 += 336;
        if ( v4 == v6 ) goto LABEL_17; /* not found -> "Candidate account no longer exists locally" */
      }
      if ( *(_DWORD *)(v3 + v6 + 128) == 2 || (*(_BYTE *)(v3 + v6 + 168) & 0xFE) != 2 )
      {
        /* needs-freshness-check branch */
        v12 = v48;
        codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1(&v43, v48[31], v48[32], __s2, v5);
        v13 = v44; v14 = v45;
        std::sys::fs::metadata::h32fa16d3052ea535(v37, v44, v45);
        if ( v37[0] ) /* snapshot exists already: skip refresh, minor cleanup, continue to switch */
        {
          if ( (v37[8] & 3) == 1 )
          {
            v46 = *(_QWORD *)&v37[8] - 1LL; v15 = *(_QWORD *)(*(_QWORD *)&v37[8] - 1LL);
            v16 = *(_QWORD *)(*(_QWORD *)&v37[8] + 7LL);
            if ( *(_QWORD *)v16 ) (*(void (__fastcall **)(__int64))v16)(v15);
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8);
            v12 = v48;
          }
        }
        else
        {
          codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(v38, v13, v14);
          if ( v38[0] == 0x8000000000000001LL )
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$GT$::h5af4bc4f79a79011(v38);
            /* auth load failed -> tolerated, falls through to switch_account without refresh */
          }
          else
          {
            memcpy(v37, v38, 0xB0u);
            codexmate_lib::core::repository::Repository::api_proxy_config::haed0cfef93c6b306(&v41, v12);
            codexmate_lib::core::oauth_refresh::ensure_fresh_token::hfa129aada8ffa5c2( /* NEW: real OAuth refresh HTTPS round-trip */
              (unsigned int)&v39, v13, v14, (unsigned int)v37, (unsigned int)&v41, 0, 0);
            v18 = v39;
            if ( v39 >= (__int64)0x8000000000000002LL ) /* refresh failed */
            {
              codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(v36, v12[61], v12[62]);
              if ( v36[0] != 10 ) core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v36);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
              v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1);
              if ( !v19 ) alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 62);
              qmemcpy(v19, "Candidate token is no longer valid, please try another account", 62); /* NEW error string */
              a1[1] = 9; a1[2] = 62; a1[3] = v19; a1[4] = 62; *a1 = 2;
              core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h40b7342e872fb8df(v18, v40);
              if ( 2 * v41 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1);
              core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hebf4dd6d55e528d5(v37);
              if ( v43 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v43, 1);
              goto LABEL_22;
            }
            /* refresh ok */
            core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h40b7342e872fb8df(v39, v40);
            if ( 2 * v41 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1);
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hebf4dd6d55e528d5(v37);
          }
        }
        codexmate_lib::core::repository::Repository::switch_account::h68a1834c14920488(a1, v12, __s2, v5); /* UNCHANGED core action */
        if ( v43 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v43, 1);
LABEL_22:
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579(&v20);
        goto LABEL_23;
      }
      /* not-needed branch: reject outright as stale */
      codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(v37, v48[61], v48[62]);
      if ( *(_DWORD *)v37 != 10 ) core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v37);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
      v7 = 72;
      v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1);
      if ( v8 )
      {
        v9 = v8;
        memcpy(v8, "Candidate account credentials have expired since the suggestion was made", 0x48u); /* NEW error string */
        a1[1] = 9; a1[2] = 72; a1[3] = v9; a1[4] = 72;
LABEL_21:
        *a1 = 2;
        goto LABEL_22;
      }
    }
    else
    {
LABEL_17: /* candidate not found in list, or list empty */
      codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(v37, v48[61], v48[62]);
      if ( *(_DWORD *)v37 != 10 ) core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v37);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
      v7 = 42;
      v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
      if ( v10 )
      {
        qmemcpy(v10, "Candidate account no longer exists locally", 42); /* NEW error string */
        a1[1] = 7; a1[2] = 42; a1[3] = v10; a1[4] = 42;
        goto LABEL_21;
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7);
  }
  /* UNCHANGED vs 1.0.9: no pending request at all */
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1);
  if ( !v2 ) alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30);
  qmemcpy(v2, "No pending auto-switch request", 30);
  a1[1] = 7; a1[2] = 30; a1[3] = v2; a1[4] = 30; *a1 = 2;
  return a1;
}
