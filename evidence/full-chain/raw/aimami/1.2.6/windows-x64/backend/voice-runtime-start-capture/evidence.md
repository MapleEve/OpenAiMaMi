# evidence: start_voice_capture (AiMaMi 1.2.6 windows-x64)

## Provenance note (schema normalization, red line 29 disclosure)
Written during the schema-normalization round (`<审计会话> by reorganizing
`manifest.json` (produced by task #152, original decompile session `2026-08-06T16:35:00Z`, cross-referencing
`raw/aimami/1.2.6/macos-x64/backend/voice-runtime-start-capture/manifest.json`). **No new IDA calls were
made during this normalization pass.** Original `manifest.json.generation_method`:
"mcp__ida-pro-mcp-win__decompile via live IDB, <门控> verified (server_health status=ok,
<反编译器>_ready=true, module=AiMaMi 1.2.6 win64.exe)".

## Owner resolution (grounded, from manifest.json)
- Public command dispatch: `start_voice_capture` at `0x14015b7b0`, `confirmed_parity_with_macos_public_
  wrapper`.
- Core capture-start + sidecar scheduler: `0x140c38d20`, grounded via `codexmate_lib::core::voice::runtime`
  module-path string and the `"[TypeMami] failed to capture foreground context: runtime lock poisoned"`
  panic string.

## Sidecar scheduling mapping (grounded, from manifest.json)
| macOS role | Windows address | verdict |
|---|---|---|
| `sync_permissions_internal` | `0x1401a9010` | confirmed_parity |
| `load_saved_config` / `load_workspace` | `0x1403d84c0` | confirmed_parity |
| `try_start_via_standby` | availability check `0x1403d2670` + job submission `0x140039f40` | confirmed_parity |
| `start_capture_legacy` | `0x140c43590` | confirmed_parity |
| `emit_status` | `0x140c37590` | confirmed_reused_from_target3 (same function as `update-voice-runtime-settings` bundle) |
| `ensure_standby_sidecar` / `shutdown_standby_sidecar` | (none found in this chain) | not_separately_resolved (candidate locations: inline in `sub_140039F40` or `sub_140C43590`, not recursed further this round due to time-budget limits; not `accepted_unknown`) |

## Call-tree summary
`start_voice_capture` (`0x14015b7b0`) delegates to the core scheduler (`0x140c38d20`), which first runs 3
fast-path short-circuit checks against `Repository`+867/+858/+864 state bytes (static 30/27-byte error
strings or direct serialized-state early return, preventing duplicate capture triggers), then: syncs
permissions (`0x1401a9010`) -> loads saved config (`0x1403d84c0`) -> attempts standby-sidecar submission
(availability check `0x1403d2670`, Mutex-guarded; if unpoisoned, constructs a language/model/binding config
struct and submits a job via `0x140039f40` to the already-running standby ASR sidecar process; on failure,
logs `"[TypeMami] failed to capture foreground context: runtime lock poisoned"` and falls back to legacy)
-> on standby failure, falls back to `start_capture_legacy` (`0x140c43590`, keyed by two just-incremented
global atomic generation counters `qword_141FBA3B8`/`qword_141FBA3C0`; on a `-1` sentinel failure, falls
back further to `load_status` at `0x140c37a50`) -> publishes state via the shared `emit_status`
(`0x140c37590`, reused from the `update-voice-runtime-settings` bundle). See
`call-trees/start_voice_capture.jsonl`.

## State-machine fast paths and generation counters (from manifest.json)
Two global atomic generation counters (`qword_141FBA3B8`/`qword_141FBA3C0`) increment on every genuine
capture start, used as a session-generation ID to guard against stale-generation races between concurrent
start/stop requests -- a Windows-specific concurrency safeguard not documented on the macOS side this
round (either an architecture difference or a macOS evidence-depth gap; not resolved, honestly flagged).

## Fake-wall check (red line 13)
`genuine_ceiling=false`; `accepted_unknown` not claimed. Per `manifest.json.recovery_attempts`: no
truncation markers observed from dispatch through the core scheduler. `sub_140039F40` (standby job
submission) and `sub_140C43590` (legacy fallback) were not recursed further -- explicitly documented as
`not_separately_resolved`, out of the original 4-target time-budget scope, not a false-ceiling claim.

## Cross-platform comparison (from manifest.json)
Core scheduling flow (sync permissions -> load config -> attempt standby sidecar -> publish status ->
legacy fallback on failure -> re-read final state) fully matches macOS. Windows additionally exposes 3
fast-path short-circuit checks and a dual atomic generation-counter concurrency guard not documented in the
macOS evidence available this round -- either a macOS evidence-granularity gap or a genuine Windows-specific
implementation; neither possibility has been ruled out, disclosed honestly rather than asserted either way.

## IDB mutations
Tracked at the IDB level by the original task #152 session (red-line-24 naming verification confirmed via
`lookup_funcs`/dirtree read-only queries in the honesty-audit round); not re-derived by this normalization
pass. This normalization round (`<审计会话> issued zero IDA mutations of
any kind.
