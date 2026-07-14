# set_relay_display_tags — Interface / DTO / Error / Side-Effect Boundary (macos-arm64, AiMaMi 1.1.8)

**Session**: <审计会话> | **Machine**: <本地机器> | **Date**: 2026-07-13
**Binary**: AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi | **SHA256**: 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
**IDB**: <证据库>/raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi.i64
**反编译就绪**: true | **module match**: AiMaMi ✓

## IPC Command

```
command:  "set_relay_display_tags"
transport: Tauri IPC invoke
owner VA: 0x1004c6450 (codexmate_lib::commands::relay::set_relay_display_tags::hf950017d5fd63f1a)
```

Mac IDB already carries a clean demangled Rust symbol at the owner address — no rename performed;
an evidence comment was appended instead (`append_comments`, "not gate promotion").

## Request Parameters (DTO)

Frontend-confirmed (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 123, shared
JS bundle `assets/index-CX-I_QAq.js`, wrapper `setRelayDisplayTags:(e,t)=>St("set_relay_display_tags",{global:e,woyao:t})`):

```typescript
interface SetRelayDisplayTagsParams {
  global: string;   // display tag applied to the "global" relay provider slot
  woyao: string;    // display tag applied to the "woyao" (virtual-auth) provider slot
}
```

**argKeys = ["global", "woyao"] — exactly 2 params, both consumed as plain (ptr,len) String
structs directly at fixed offsets (`a3[1]`/`a3[2]` and `a4[1]`/`a4[2]` in
`RelayManager::set_display_tags`), with no Option<String> tag/discriminant check (tag=6/tag=3
pattern) observed before use.**

## CONFIRMED CROSS-VERSION DELTA vs 1.1.1 baseline (windows-x64, `raw/aimami/1.1.1/windows-x64/set_relay_display_tags/`)

| Aspect | 1.1.1 (windows baseline, confirmed) | 1.1.8 (mac, this leaf, confirmed) |
|---|---|---|
| Param count | 3: `manager` (required String), `global` (Option<String>), `woyao` (Option<String>) | 2: `global` (String), `woyao` (String) — **`manager` selector removed** |
| Targeting model | per-provider (tags applied to the provider named by `manager`) | global, fixed 2-slot (tags apply to the whole relay config, no provider selector) |
| Response (success) | literal `"ok"` (2-byte string) | full sanitized 344B (0x158) `RelayState` snapshot via `CoreEnvelope::ok` |
| Optionality | `global`/`woyao` optional, Option<String> parser (`sub_1402FED40`, tag=6 Some/tag=3 None) | `global`/`woyao` appear required (no Option-decode tag check found in owner or `RelayManager::set_display_tags`) |

Evidence for optionality-removal claim (recorded as high-confidence inference, not
`accepted_unknown` — the checks below were performed, not skipped):
- Owner (`0x1004c6450`) and `RelayManager::set_display_tags` (`0x1005c1010`) both read `a3[1]/a3[2]`
  and `a4[1]/a4[2]` unconditionally before calling `sanitize_display_tag`; no branch on a
  discriminant/tag byte precedes this read (contrast with 1.1.1's documented
  `sub_1402FED40` Option-parser tag=6/tag=3 pattern).
- Frontend wrapper passes `e`/`t` directly with no `??` null-coalescing, unlike sibling wrappers
  in the same file that do use `??!0` for optional booleans (e.g.
  `setCodexRouterNoAccountMode:(e,t)=>St(...,{enabled:e,relaunch:t??!0})`).
- Exact frontend-side TypeScript type (`string` vs `string | null`) not independently
  type-checked from source — this is a binary/bundle-level inference, not a source-level fact.

Whether `manager`-scoped per-provider tagging still exists as a *different*, unlisted command in
1.1.8 was not investigated this pass (out of scope for this leaf) — recorded as Unknown, not
claimed absent.

## Response

```typescript
// On success (persist committed, no codex-config-sync branch taken):
type SetRelayDisplayTagsResponse = RelayState;  // 344B (0x158) sanitized snapshot via
                                                  // storage::sanitize_for_export + CoreEnvelope::ok

// On success (persist committed AND codex-config-sync branch taken):
// same RelayState shape, packed via a different offset path in RelayManager::set_display_tags
// (qmemcpy(__dst+2, &v21[1], 0x58) then owner's own success branch) — outer envelope
// discriminant field name not confirmed via type_query this pass (Unknown, not accepted_unknown).

// On error (persist failed, OR codex-config-sync failed, OR CoreError::fmt path):
// CoreEnvelope-style Err with a1[0]=0x8000000000000000 sentinel; error message text is the
// dynamic Display::fmt output of the underlying CoreError (varies by root cause — I/O failure,
// serde failure, lock-poison, etc.) — NOT a fixed literal string.
```

## Error Paths

| Condition | Path | Terminal |
|---|---|---|
| `RelayManager::set_display_tags` returns Err | owner's `if` branch: `CoreError::fmt` → `unwrap_failed` (only if Display::fmt itself fails, defensive) → owner sets `a1[0]=0x8000000000000000` | dynamic error_return |
| `persist`'s `storage::save` disk write fails (result≠10) | `persist` early-returns before the in-memory RelayState commit (memmove) runs — **write-before-commit ordering, in-memory state stays untouched on disk-write failure** | error_return |
| relay state Mutex poisoned (in `persist` or `sync_codex_config_with_outcome`) | `panic_count::is_zero_slow_path` → `unwrap_failed` | abort-adjacent panic path, same pattern as other relay commands this session |
| `write_catalog` fails during codex-config sync | logged via `log::Log::log` (module=`codexmate_lib::core::relay::manager`, file=`src/core/relay/manager.rs`, real source path recovered verbatim) then falls through to `remove_catalog` fallback | error_return (non-fatal to overall command; sync outcome flag `v29` reflects failure) |
| `remove_catalog` fails | same `log::Log::log` pattern, `std::io::error::Error` Display formatted, boxed-error 24B dealloc | error_return (non-fatal) |
| marker-file JSON malformed in `live_auth_state` | `serde_json::de::from_trait` tag=6 → treated as "not live" sentinel, not propagated as hard error | error_return (soft) |

## Side Effects (5 confirmed)

1. **In-memory RelayState mutation**: `displayTagGlobal`/`displayTagWoyao`-equivalent String fields
   updated via `sanitize_display_tag` (trims + re-copies both tag strings) then committed via
   `persist`'s mutex-guarded `memmove` into shared app state — **only after** the disk write in
   step 2 succeeds (write-before-commit ordering, confirmed from `persist`'s control flow).
2. **Relay config disk persist**: `RelayManager::persist` → `storage::save`
   (`CodexPaths::ensure_directories` + `serde_core::ser::SerializeMap::serialize_entry` chain,
   `terminated_reason=persistence_commit`) — full relay-config JSON rewrite, same file used by
   sibling relay commands this session.
3. **Conditional Codex CLI config sync** (`sync_codex_config_with_outcome`, gated by a snapshot
   flag not independently type_query-named this pass):
   - reads `router_unlock_auth::live_auth_state` (SAME marker-file mechanism —
     `router-unlock-auth-marker.json` — independently confirmed this session in
     `get_codex_router_auth_readiness`'s own call-tree; cross-command shared subsystem).
   - if NOT on virtual/woyao auth: `codex_catalog::write_catalog` writes real model-provider
     catalog entries (`build_catalog_bytes` → disk, `terminated_reason=persistence_commit`).
   - else: `codex_catalog::remove_catalog` removes stale catalog entries
     (`terminated_reason=persistence_commit`).
   - unconditionally: `codex_writer::apply_codex_state` writes the merged Codex CLI config file
     state (`CodexPaths::ensure_directories` + a `fs::metadata` existence-check loop over
     candidate config paths, `terminated_reason=persistence_commit`/`persistence_read`).
4. **Mutex-guarded shared state**: `std::sync::Mutex` (poison-checked via
   `panic_count::GLOBAL_PANIC_COUNT`/`is_zero_slow_path`), same lock discipline as `persist` and
   other relay commands this session — 2 distinct lock instances used (one in `persist`, one in
   `sync_codex_config_with_outcome` guarding a separate active-ids cache field).
5. **Structured logging** (conditional, `log::MAX_LOG_LEVEL_FILTER`-gated): on `write_catalog`/
   `remove_catalog` failure, logs via the global `log` crate with real recovered source location
   (`codexmate_lib::core::relay::manager`, `src/core/relay/manager.rs`) — encoded line/col value
   not decoded to an exact line number this pass (raw hex retained: `0x42300000001`/`0x42B00000001`).

## Cross-Command Correlation (this session)

- `router_unlock_auth::live_auth_state` (`0x100689c00`) is the SAME subsystem independently
  documented in this session's `get_codex_router_auth_readiness` leaf
  (`raw/aimami/1.1.8/macos-arm64/relay/get_codex_router_auth_readiness/`), which hardcodes the
  virtual-auth identity literal `"niuniu@woyao.pro"`. The `woyao` argKey name in this command is
  now confirmed to correspond to that same virtual-auth provider slot, not an arbitrary tag label.
- `RelayProvider` struct stride (232B) matches this session's prior cross-command confirmation
  (`refresh_single_account_usage`/windows leaves and this session's own mac threadmodel survey).

## Open Items (Unknown, not `accepted_unknown` — no wall hit, simply not traced this pass)

- Exact byte offset/field name for the "config needs codex-sync" flag (`v25`/`v22` in
  `RelayManager::set_display_tags`) — not `type_query`-verified.
- Exact `RelayState` field names for `displayTagGlobal`/`displayTagWoyao` at the Rust struct level
  (byte offsets not independently `type_query`-confirmed this pass, unlike the 1.1.1 windows
  leaf which had `type_query`-level field names via a different recovery method).
- Whether a `manager`-scoped variant of this command still exists elsewhere in 1.1.8 under a
  different command name — not searched this pass, out of scope.
- Exact loop bound / candidate-path list inside `apply_codex_state`'s `fs::metadata` loop.
- Whether `build_catalog_bytes`'s output reaches disk via a direct `std::fs::write` call or one
  more indirection — not traced one hop further (recorded as Unknown, not a genuine ceiling).
