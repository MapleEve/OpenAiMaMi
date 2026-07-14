# SYSTEM-DIFF.md — confirm_pending_auto_switch (1.0.9 → 1.1.8, macOS)

## Behavioral diff summary
| aspect | 1.0.9 | 1.1.8 |
|---|---|---|
| load pending request | fs read + serde_json parse | UNCHANGED (VA relinked only) |
| no-pending error | `"No pending auto-switch request"` | UNCHANGED |
| candidate re-validation | none | NEW: re-sync local state, re-locate candidate by key, conditional OAuth freshness re-check |
| network calls | none | NEW: HTTPS POST `https://auth.openai.com/oauth/token` (blocking reqwest) |
| new user-facing errors | 0 | 3 (`...no longer exists locally`, `...expired since the suggestion was made`, `...no longer valid, please try another account`) |
| snooze-state cleanup | not part of this command | NEW: `clear_auto_switch_snooze` on any rejection |
| daemon self-repair | not part of this command | NEW conditional sub-path inside `load_local_state_synced` (internal diagnostic only, no user-facing error) |
| switch_account core action | read registry, copy snapshot, persist registry, success envelope | UNCHANGED, now gated behind the above |
| token persistence | none | NEW: refreshed AuthFile atomically rewritten to disk on successful refresh |

## Platform/capability notes
- No new Tauri plugin or capability surface identified as directly tied to this command this round.
- The daemon self-repair path (`install_daemon`) reuses the pre-existing platform::daemon subsystem
  (LaunchAgent registration), which the earlier thread-model survey (`intermediate/aimami/1.1.8/
  macos-arm64/_threadmodel/THREAD-MODEL.md`) found "confirmed unchanged" between 1.0.9 and 1.1.8 —
  what is new here is only that `confirm_pending_auto_switch`'s call path now reaches it conditionally
  via `load_local_state_synced`.

## Scope note
This diff covers macos-arm64 only (x86_64 slice of the universal binary decompiled this session).
Windows-x64 1.1.8 not cross-diffed against this specific finding this round.
