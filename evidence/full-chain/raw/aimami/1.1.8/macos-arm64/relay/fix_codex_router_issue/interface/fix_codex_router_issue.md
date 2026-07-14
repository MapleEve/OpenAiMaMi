# Interface — fix_codex_router_issue (AiMaMi 1.1.8, macos-arm64)

owner: `codexmate_lib::commands::relay::fix_codex_router_issue::he783bb26d80be6c4`
VA: `0x1004c5d10` | session: `<审计会话>`

## Request (from frontend IPC contract)

```json
{ "itemId": "all" }
```
or
```json
{ "itemId": "<specific-issue-key>" }
```

- `argKeys: ["itemId"]` — confirmed via `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 131 (`tauriInvokeRaw`, file `assets/maintenance-page-DjaSsSa9.js`). Unchanged vs 1.0.9 baseline (`raw/aimami/1.0.9/macos/relay/fix_codex_router_issue/AI.md` line 24).
- Owner receives the arg as a raw `(ptr,len)` pair (`a3[1]`, `a3[2]`) already deserialized by the Tauri command wrapper closure (`codexmate_lib::run::{{closure}}::{{closure}}` at `0x10030a9e0`) — the `itemId` key name itself is only visible at the JS call site, not inside the owner body (Confirmed: decompile of `0x1004c5d10`).
- Dispatch: `itemId.len()==3 && bytes=="all"` (checked via a 16-bit word compare of the first 2 bytes XORed against `0x6C61` OR'd with a byte compare of the 3rd byte against `0x6C`) routes to `fix_all`; any other value routes to `fix_issue(itemId)` for a single targeted fix (Confirmed).

## Known itemId values

8 named per-issue fixer symbols are directly reachable from `fix_all`'s dispatch (Confirmed via `callees(0x1003f1dd0)`):

| 1.1.8 fixer symbol | VA | 1.0.9 itemId analog (AI.md) | mapping confidence |
|---|---|---|---|
| `fix_config_stale_text` | 0x1003df800 | `"config_stale"` (len 12) | Confirmed (same name pattern) |
| `fix_auth_integrity` | 0x1003dde60 | `"auth_integrity"` (len 14) | Confirmed (same name) |
| `fix_config_third_party_text` | 0x1003e7f70 | `"config_third_party"` (len 18) | Confirmed (same name pattern) |
| `fix_config_profile_conflict_text` | 0x1003f1230 | `"config_profile_conflict"` (len 23) | Confirmed (same name pattern) |
| `fix_config_toml_syntax_text` | 0x1003e9930 | `"config_omit_syntax"` (len 18) | Inferred (plausible rename, key bytes not independently re-verified) |
| `resync_codex_config` | 0x1003def90 | `"catalog_path_validity"` (len 21) — candidate | Inferred (no strong name correlation; new catalog write-path added in this version) |
| `fix_router_unlock_auth_residue` | 0x1003f0070 | `"db_orphan_providers"` (len 19) — candidate | Inferred (semantic overlap "residue"/"orphan" only) |
| `fix_takeover_backup_orphan` | 0x1003e5470 | no clear analog | Unknown — possibly wholly new fixer in 1.1.8 |

The exact byte-literal key strings compared inside `fix_issue`'s match arms were **not** re-extracted this leaf: `fix_issue`'s full pseudocode body is truncated by the MCP decompile tool at 1024 of 232469 total characters (see `pseudocode/0003_fix_issue.c` header note). The 8-symbol reachability set above is Confirmed independent of that truncation (via `callees()`, not `decompile()`), but the precise `itemId` string ↔ fixer-symbol mapping is Inferred only.

## Response

### Ok path
Return struct at `a1` (Confirmed via decompile of `0x1004c5d10`, offsets in bytes):
- `+0`: discriminant/tag = `2`
- `+8`: ptr to 2-byte literal `"ok"`, `+16`: len `2`
- `+24`: len `7`, `+32`: ptr to 7-byte literal `"Success"`, `+40`: len `7` (redundant/duplicate len — Inferred: likely two separate `String` fields, e.g. `status`/`message`, exact Rust field names not re-mapped via `type_query`)
- `+48`, `+56`, `+64`: `0`, `8`, `0` — Unknown, not independently decoded
- `+72` (72 bytes = 0x48): copy of the `FixResult` message `Vec<(ptr,len,cap)>` triple accumulated during the fix pass — this is the actual list of human-readable fix messages returned to the frontend
- `+144`: `u32 = 1`, `+148`: `bool = 1` — Unknown, not independently decoded (likely a summary count + a `restarted`/`needs_restart` flag given the process-restart logic immediately preceding this block)

One confirmed message-string constant embedded as literal bytes (decoded via `get_bytes`-equivalent manual byte assembly of the store-immediate instructions, see `evidence.md`):
> `已自动重启 Codex 使修复生效` ("Automatically restarted Codex to apply the fix") — appended to the `FixResult` list when the app was running, was successfully stopped, and successfully relaunched.

On the relaunch-failure branch, instead of the fixed Chinese string, a formatted error string is built from `CoreError`'s `Display` impl (`alloc::fmt::format::format_inner` with `unk_10122A492` as the format template pointer) and appended in its place.

### Err path
- `+0` (discriminant) = `0x8000000000000000` — Confirmed: Rust niche-optimized enum discriminant (out-of-range sentinel for the `Ok` variant's `Vec` length field, standard "niche filling" layout), signals the `Err` variant.
- `+8/+16/+24` = the formatted `CoreError` Display string's `(ptr,len,cap)` triple, copied directly from the temporary `String` produced by `unwrap`-checked `Display::fmt` — i.e., **the Err payload is a plain formatted string, not a structured `CoreError` re-serialization**.

## Side effects (Confirmed via decompile unless noted)

1. Reads `~/.codex/config.toml` one or more times across the diagnostic/fixer chain (`CodexPaths::resolve_codex_home` → `CodexPaths::from_home` → various `std::fs::read_to_string` calls in `fix_config_stale_text`/`fix_auth_integrity`/`check_config_stale`).
2. May **atomically rewrite** `~/.codex/config.toml` and/or a provider-catalog JSON file — 3 independent call sites reach the same `atomic_write::write_atomic` terminal (`fix_config_stale_text` → depth3; `codex_writer::apply_codex_state` → depth4; `codex_catalog::write_catalog` → depth4). The atomic-write pattern is: `uuid::new_v4()`-suffixed temp file → `OpenOptions::_open` → `Write::write_all` → `File::sync_data` (fsync) → `close()` → `sys::fs::rename(tmp, target)` → best-effort `sys::fs::remove_file` cleanup of any stale leftover, then `atomic_write::sync_parent_dir` (parent-directory fsync) — a standard crash-safe atomic-replace idiom.
3. May **remove** a stale catalog file entry via a direct `unlink()` (`codex_catalog::remove_catalog`), no atomic-write indirection for this path.
4. `fix_auth_integrity` makes a **backup copy** of an auth-related file via `std::fs::copy` before mutating it.
5. May **gracefully stop** the running `Codex.app` process: checks `is_process_running` (spawns `pgrep -x Codex`), if running calls `request_codex_app_quit` (an AppleScript `osascript -e 'tell application "Codex" to quit'`-style graceful quit per session precedent in `codex-quit-test-isolation-trap`), then polls `is_process_running` in a 50ms-sleep loop against an `Instant`-based deadline built from a caller-supplied timeout, and **unconditionally** calls `kill_codex_processes_until_clear` (force-kill fallback) once the graceful window elapses or the app is confirmed stopped.
6. May **relaunch** `Codex.app` (`launch_codex_app`) after a successful stop — only on the branch where the app was running before the fix (`v5==true` in the owner body).

## Delta vs 1.0.9 (per `raw/aimami/1.0.9/macos/relay/fix_codex_router_issue/AI.md`)

- Arg key `itemId`: **unchanged**.
- Owner dispatch strategy (`"all"` 3-byte literal match → `fix_all` else `fix_issue`): **unchanged** (only VAs shifted: owner 0x1001e1b9c → 0x1004c5d10, fix_all 0x10055efb4 → 0x1003f1dd0, fix_issue 0x100560f44 → 0x1003f5a80).
- Process-stop step: 1.0.9's `stop_codex_app_gracefully` (0x100674f50, internals `accepted_unknown` in that leaf) is replaced/renamed by 1.1.8's `stop_codex_for_file_edit` (0x1001c0ce0) — **this round's full decompile shows a richer implementation**: an explicit poll loop with a caller-supplied timeout deadline plus an unconditional `kill_codex_processes_until_clear` force-kill fallback, which the 1.0.9 leaf's `accepted_unknown` note did not (and could not) describe.
- Fixer catalog: 1.0.9 named 7 `itemId` string keys via byte-literal match inside `fix_issue`; 1.1.8 exposes 8 named fixer symbols reachable from `fix_all`. Two names (`fix_router_unlock_auth_residue`, `fix_takeover_backup_orphan`) have no confident 1.0.9 analog — see mapping table above (Inferred/Unknown, not Confirmed).
- New: an explicit provider-catalog JSON write/remove path (`codex_catalog::write_catalog` / `codex_catalog::remove_catalog`) inside `resync_codex_config`, not present by these names in the 1.0.9 leaf (1.0.9's `resync_codex_config` internals were themselves `accepted_unknown`, so this may be pre-existing behavior newly disclosed rather than genuinely new — **Inferred**, not asserted as a true behavioral delta).
