# evidence: update_voice_runtime_settings (AiMaMi 1.2.6 windows-x64)

## Provenance note (schema normalization, red line 29 disclosure)
Written during the schema-normalization round (`<审计会话> by reorganizing
`manifest.json` (produced by task #151, original decompile session `2026-08-06T16:10:00Z`, cross-referencing
`raw/aimami/1.2.6/macos-x64/backend/update-voice-runtime-settings/manifest.json`). **No new IDA calls were
made during this normalization pass.** Original `manifest.json.generation_method`:
"mcp__ida-pro-mcp-win__decompile via live IDB, <门控> verified (server_health status=ok,
<反编译器>_ready=true, module=AiMaMi 1.2.6 win64.exe)".

## Nine-function macOS parity mapping (grounded, from manifest.json)
| macOS role | Windows address | verdict |
|---|---|---|
| dispatcher (`tauri_cmd_update_voice_runtime_settings_dispatch`, 0x100623880) | `0x14015dd80` | confirmed_parity |
| handler (`commands::voice_runtime::update_voice_runtime_settings`, 0x1004961d0) | `0x1403d6b90` | confirmed_parity |
| core (`core::voice::runtime::update_settings_internal`, 0x10048ffb0) | `0x140c45670` | confirmed_parity_different_persistence_mechanism |
| `restart_trigger_listener_internal` | `0x140c4a500` | confirmed_parity |
| `emit_status` | `0x140c37590` | confirmed_parity_high_confidence |
| `load_status` | `0x140c37a50` | confirmed_parity |
| `write_runtime_file` | (none found) | architecture_difference_not_gap |
| `ensure_standby_sidecar` / `shutdown_standby_sidecar` | (none found in this chain) | not_found_in_this_call_chain (expected in `start_voice_capture` chain, see `voice-runtime-start-capture` bundle) |
| `normalize_processing_mode_id` | (none found separately) | not_separately_resolved (possibly inlined in core function) |

## Call-tree summary
Dispatcher (`0x14015dd80`) resolves 6 fields (`app`/`enabled`/`shortcut`/`speechModel`/`processingMode`/
`processingModeId`) via `manager.request`, delegates to handler (`0x1403d6b90`, thin wrapper), which
delegates to core (`0x140c45670`). Core persists via `std::sync::Mutex<codexmate_lib::core::repository::
Repository>` string-anchor confirmed lock (in-memory persistence, architecturally different from macOS's
direct JSON-file write, not a functional gap). From core, three independently-traced branches: restart
trigger listener (`0x140c4a500`, spawns background thread with `Arc`-cloned keybinding table, "failed to
spawn thread" panic string confirms semantics), `emit_status` (`0x140c37590`, confirmed via the
`voice-runtime-updated` 21-byte event-name string anchor -- a Tauri event-emit call), and `load_status`
(`0x140c37a50`, reuses the same `Mutex<Repository>` lock, pure read path, delegates to `sub_140C48530` for
read-out packaging). See `call-trees/update_voice_runtime_settings.jsonl`.

## Fake-wall check (red line 13)
`genuine_ceiling=false`; `accepted_unknown` not claimed for any resolved node. Per
`manifest.json.recovery_attempts`: all 5 recovered bodies are non-truncated. The 4 macOS-side functions
without an independent Windows match (`write_runtime_file`/`ensure_standby_sidecar`/
`shutdown_standby_sidecar`/`normalize_processing_mode_id`) are explicitly documented as
**not accepted_unknown** -- the round's scope was proving the command-layer call chain, not exhaustively
recursing into core-function internals field-by-field.

## Cross-platform comparison (from manifest.json)
The 3-layer call chain (dispatcher/handler/core) and status-publish (`emit_status`) semantics fully match
macOS, with 100% field parity (6 fields). The core persistence mechanism differs architecturally: macOS
explicitly writes `voice-runtime.json` to disk (`write_runtime_file`); Windows evidence this round shows
persistence lands in an in-memory `Mutex<Repository>` singleton, with no independent disk-write leaf found
-- a reasonable architecture difference (in-memory authoritative state vs. disk round-trip), not asserted
as a functional gap, but also not fully verified for an async background flush-to-disk path.

## IDB mutations
Tracked at the IDB level by the original task #151 session (red-line-24 naming verification confirmed via
`lookup_funcs`/dirtree read-only queries in the honesty-audit round); not re-derived by this normalization
pass. This normalization round (`<审计会话> issued zero IDA mutations of
any kind.
