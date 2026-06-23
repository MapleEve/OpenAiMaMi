# Interface: set_relay_display_tags

**Version**: AiMaMi 1.1.1
**Platform**: macOS arm64
**Module**: commands_relay
**Status**: 1.1.1 new command (not in 1.0.9)
**Session**: wf-aimami111-delta-20260616

## IPC Invocation

```
command: "set_relay_display_tags"
argKeys: ["manager", "global", "woyao"]
```

### Arg Details

| Key | Length | Addr | Type | Notes |
|-----|--------|------|------|-------|
| manager | 7B | 0x101148407 | RelayManager state handle | Tauri State<RelayManager>, not a string arg |
| global | 6B | 0x101148466 | String | Global display tag to set (sanitized before use) |
| woyao | 5B | 0x10114846c | String | Per-provider(?) display tag to set |

**Note**: "woyao" appears to be a product-specific tag name (中文 "我要" = "I want"). May represent a "wishlist" or "desired" display label.

## Response

```
CoreEnvelope<RelayState>
```

- **Success**: `*a1 = 0x8000000000000000` (Ok sentinel) + updated RelayState (0x170 = 368 bytes)
- **Error**: CoreError via CoreError::fmt Display, wrapped in InvokeResolver::return_result

## Behavior Contract

1. **Snapshot** current RelayState from RelayManager (3× total: init, mutation, return)
2. **Sanitize** `global` tag: trim whitespace (str::trim_matches), re-collect as String
3. **Sanitize** `woyao` tag: same sanitization (trim + collect)
4. **Persist** updated RelayState to disk via `storage::save`:
   - `CodexPaths::ensure_directories` — create missing dirs
   - `RelayState::serialize` (serde) → JSON/TOML bytes
   - `atomic_write::write_atomic` @ 0x10041e960 — atomic FS write
5. **Conditionally sync** Codex config (if relay was active):
   - `codex_catalog::resolve_api_slots`
   - `codex_catalog::write_catalog` — writes catalog entry
   - `codex_catalog::remove_catalog` — removes stale entry
   - `codex_writer::apply_codex_state` — applies state to Codex config files
6. **Return** updated RelayState clone

## Side Effects

- **FS WRITE**: Relay state file (via atomic_write)
- **FS WRITE**: Codex config catalog (write_catalog / remove_catalog) [conditional on relay active]
- **FS WRITE**: Codex config files (apply_codex_state) [conditional on relay active]
- **Mutex**: RelayManager mutex acquired/released during state update

## Error Strings

- `"relay state poisoned"` (@ 0x101153a17, 20B) — mutex poisoned error
- `"write relay state failed: "` (@ 0x1010b7841, 26B) — storage::save write error format string

## Function VAs

| Function | VA | Role |
|----------|-----|------|
| dispatcher | 0x10031a360 | Tauri IPC closure |
| owner (cmd handler) | 0x1005eb5a0 | Command entry point |
| core impl | 0x1005d24d0 | RelayManager::set_display_tags |
| snapshot | 0x1005e0330 | Read current state |
| sanitize_display_tag | 0x1006e9ab0 | Trim/sanitize tag string |
| persist | 0x1005dee20 | Write state to storage |
| storage::save | 0x1005e2c60 | Serialize + atomic write |
| atomic_write | 0x10041e960 | FS atomic write (leaf) |
| sync_codex_config | 0x1005daea0 | Sync Codex config files |
| write_catalog | 0x1006e8450 | FS write catalog (leaf) |
| remove_catalog | 0x1006e8800 | FS remove catalog (leaf) |
| apply_codex_state | 0x10075ae20 | Apply state to Codex (leaf) |
