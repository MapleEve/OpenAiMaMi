# interface.md — confirm_pending_auto_switch (AiMaMi 1.1.8 macOS universal, x86_64 slice)

## Command surface
- Frontend command name: `confirm_pending_auto_switch` (owner-map angle-A: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 11)
- Owner (angle-A, clean top-level symbol): `codexmate_lib::core::repository::Repository::confirm_pending_auto_switch` @ 0x1005321a0
- Related sibling command (NOT covered by this leaf): `confirm_pending_auto_switch_and_restart_codex` — owner resolved only via commands-module closure trace (`drop_in_place<...confirm_pending_auto_switch_and_restart_codex...{{closure}}>` @ 0x1000ae860), presumed to call this same Repository method then `restart_codex`; not independently re-verified this round.

## Args
- No caller-supplied IPC args beyond the Tauri-injected `AppHandle`/state handle (matches 1.0.9 — this command takes its target from the previously-persisted `pending_auto_switch.json`, not from a frontend-supplied argument).

## Response
- Success: `CoreEnvelope<SwitchPayload>` (same envelope shape as 1.0.9), built via `switch_account` → `CoreEnvelope::ok_with_warnings`.
- Error (`CoreEnvelope` discriminant == 2 / `CoreError`):
  - `"No pending auto-switch request"` (30B) — UNCHANGED vs 1.0.9.
  - `"Candidate account no longer exists locally"` (42B) — NEW in 1.1.8.
  - `"Candidate account credentials have expired since the suggestion was made"` (72B) — NEW in 1.1.8.
  - `"Candidate token is no longer valid, please try another account"` (62B) — NEW in 1.1.8.
  - Forwarded inner errors from `load_local_state_synced` (IO/parse errors) — NEW in 1.1.8 (this call site did not exist in 1.0.9).
  - Poisoned-lock / generic IO errors — same class as 1.0.9 (unchanged plumbing).

## Side effects (persistence / network), all NEW vs 1.0.9 unless noted
- fs read: `pending_auto_switch.json` (UNCHANGED, via `load_pending_auto_switch`).
- fs read: local runtime state files (via `sync_local_runtime_state`/`load_local_state`, NEW call site).
- conditional fs/process side effect: daemon LaunchAgent self-repair install (`install_daemon`, NEW call site; underlying daemon subsystem itself is pre-existing per thread-model survey).
- fs read: per-candidate auth file (`load_auth_file`, NEW call site) when no snapshot file exists yet for the candidate.
- **network**: HTTPS POST to `https://auth.openai.com/oauth/token` (OAuth token refresh, NEW — `oauth_refresh::ensure_fresh_token`, synchronous/blocking `reqwest` call, `User-Agent: AiMaMi/1.1.8`).
- fs write (atomic): refreshed `AuthFile` persisted back to disk via `relay::atomic_write::write_atomic` (temp file + fsync + `rename(2)`), NEW — this means confirming an auto-switch can silently rewrite the candidate account's stored token file even though the user only asked to confirm the switch.
- fs delete: auto-switch snooze marker file removed via `clear_auto_switch_snooze` on any of the 3 new rejection paths (NEW call site from this function).
- fs read + fs write (UNCHANGED core action, now gated): `switch_account` → `load_registry` (read) → `ensure_directories` (mkdir) → `fs::copy` (per-account snapshot copy) → `persist_registry` (write, marks new active account).

## Platform gate
- macOS confirmed this session (live 反编译器 decompile, x86_64 slice of the universal binary).
- Windows-x64 not cross-diffed against this specific finding this round; see `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` for the Windows owner map (separate producer sub-step, same session).
