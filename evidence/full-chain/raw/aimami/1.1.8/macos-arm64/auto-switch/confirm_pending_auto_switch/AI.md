# AI Handoff — confirm_pending_auto_switch (AiMaMi 1.1.8 macOS universal, x86_64 slice)

status: strictImplementationUse_dim1_5_closed_dim6_empty
source_binary_sha256: 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
owner_addr: 0x1005321a0
owner_symbol: codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h1073089d7a95a9cd
session: <审计会话> (machine: <本地机器>)
baseline_compared: raw/aimami/1.0.9/macos/auto-switch/confirm_pending_auto_switch

interface:
  args: none beyond Tauri-injected AppHandle/state (same as 1.0.9)
  response: CoreEnvelope<SwitchPayload> (same shape as 1.0.9)
  error (NEW in 1.1.8, 3 strings): "Candidate account no longer exists locally" (42B);
    "Candidate account credentials have expired since the suggestion was made" (72B);
    "Candidate token is no longer valid, please try another account" (62B)
  error (UNCHANGED): "No pending auto-switch request" (30B)

side_effects (NEW unless marked UNCHANGED):
  - load_local_state_synced (new call site) -> sync_local_runtime_state, load_local_state (fs read,
    not independently re-decompiled this round) + conditional daemon self-repair
    (check_daemon_state -> resolve_daemon_binary -> install_daemon, sidecar_dispatch)
  - candidate-list re-lookup by key (in-memory, no I/O)
  - conditional load_auth_file (fs read) + api_proxy_config (in-memory)
  - oauth_refresh::ensure_fresh_token: HTTPS POST https://auth.openai.com/oauth/token
    (reqwest::blocking, synchronous — NOT an async ::poll body)
  - relay::atomic_write::write_atomic: persists refreshed AuthFile to disk (temp file + fsync + rename)
  - clear_auto_switch_snooze: fs::remove_file of snooze marker, on every rejection path
  - switch_account (UNCHANGED core action): load_registry -> ensure_directories -> fs::copy ->
    persist_registry -> CoreEnvelope::ok_with_warnings

key_callees (VA):
  - load_pending_auto_switch 0x10052b920 (unchanged vs 1.0.9)
  - load_local_state_synced 0x10052b230 (new call site)
  - make_snapshot_path 0x100521070
  - load_auth_file 0x1006c5140
  - api_proxy_config 0x100525eb0
  - ensure_fresh_token 0x1003cf360 (new function + new call site; real network call)
  - clear_auto_switch_snooze 0x10052b840 (new call site)
  - switch_account 0x1005239c0 (unchanged core action)
  - write_atomic 0x10039e600 (reached via ensure_fresh_token, depth3)

gate: dim1-4 accepted, dim5 macOS-confirmed/windows-unknown-this-round, dim6 empty.
  strictImplementationUse only — NOT readyToImplement (windows cross-check + test/acceptance
  mapping not closed this round).

next_steps_for_continuation:
  - cross-diff this finding against windows-x64 1.1.8 confirm_pending_auto_switch (owner_va in
    intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl) to close dim5.
  - resolve struct layout behind the +128/+168 packed candidate-entry fields (type_query/read_struct)
    if higher confidence on the exact gating condition is needed.
  - confirm whether Repository::clear_auto_switch_transient_state's body changed vs 1.0.9 (not
    previously in the per-command comparison scope).
  - the sibling command confirm_pending_auto_switch_and_restart_codex was NOT covered by this leaf;
    its owner only resolved via commands-module closure trace (0x1000ae860) this round.
