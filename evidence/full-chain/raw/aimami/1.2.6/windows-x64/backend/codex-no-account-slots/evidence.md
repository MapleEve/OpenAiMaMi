# evidence: set_codex_no_account_slots (AiMaMi 1.2.6 windows-x64)

## Provenance note (schema normalization, red line 29 disclosure)
Written during the schema-normalization round (`<审计会话> by reorganizing
`manifest.json` (produced by task #150, original decompile session `2026-08-06T15:35:00Z`). **No new IDA
calls were made during this normalization pass.** Original `manifest.json.generation_method`:
"mcp__ida-pro-mcp-win__decompile via live IDB, <门控> verified (server_health status=ok,
<反编译器>_ready=true, module=AiMaMi 1.2.6 win64.exe)".

## Owner resolution (grounded, from manifest.json)
- `set_codex_no_account_slots` owner at `0x140d75ea0`, resolved via `ipc-command-owner-map.json`
  (tauri command-name string xref).
- Real async poll body (`is_real_async_poll_body: true`), poll-state dispatch field at `a1+1856`
  (states 0/1/2/3).

## Key behavioral finding
Command parameters are the tuple `{slots, relaunch}` -- `slots` is the account-slot configuration payload,
`relaunch` is an independent boolean flag controlling whether Codex is restarted immediately after applying
the configuration. This two-argument shape is the defining behavioral feature distinguishing this command
from the single-argument `web-search-compat` family.

## Call-tree summary
Async state machine (poll 0/1/2/3) sequentially pulls `slots` then `relaunch` from `manager.request`, then
calls `sub_1405052C0` -- a data-driven vtable apply-handler invoke wrapper, confirmed as the real
persistence/business-logic call site (decompiled in full, see `pseudocode/0002`). The vtable target itself
(`(*a2+16)+24`) was **not resolved to its concrete callee** this round -- data-driven dispatch, out of the
original 4-target scope boundary, not claimed as `accepted_unknown`. `sub_140C7FB50` was independently
verified as generic enum/Option Drop glue (three-arm discriminant branch + `Vec<T>` cleanup) -- confirmed
**not** to be the relaunch-trigger logic itself; relaunch semantics are carried entirely by the argument
value passed through the apply-handler. Both success/failure paths converge on the shared `sub_140AFFC30`
CoreEnvelope-style finalize/emit helper. See `call-trees/set_codex_no_account_slots.jsonl`.

## Fake-wall check (red line 13)
`genuine_ceiling=false`; `accepted_unknown` not claimed. Per `manifest.json.recovery_attempts`: the
`sub_140C7FB50` fake-wall hypothesis (relaunch trigger) was explicitly tested and disproved this round
(confirmed generic Drop glue instead) -- a genuine破假墙 attempt, not a false ceiling claim. The
`sub_1405052C0` vtable-target gap is documented as an open field-level implementation detail, not a
false-negative or fabricated PASS.

## Cross-platform comparison (from manifest.json)
No macOS 1.2.6 `codex-no-account-slots`-specific directory exists to cross-reference. Windows continues the
same layered pattern as `web-search-compat` (thin command layer -> `manager.request` delegation ->
apply-handler persistence -> CoreEnvelope finalize), but carries the additional `relaunch` semantic
parameter absent from the web-search-compat family -- reflecting a product-level distinction: this command
involves runtime process-lifecycle coordination (restarting Codex after config change), not pure
config read/write.

## IDB mutations
Tracked at the IDB level by the original task #150 session (red-line-24 naming verification confirmed
via `lookup_funcs`/dirtree read-only queries in the honesty-audit round); not re-derived by this
normalization pass. This normalization round (`<审计会话> issued zero IDA
mutations of any kind.
