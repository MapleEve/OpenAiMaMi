# System Diff — relay-core 1.0.9 (independent package) vs 1.2.3 (folded scope claim)

## Platform Artifacts

- 1.0.9: `audits/macos-1.0.9-relay-core/` + `audits/windows-1.0.9-relay-core/` existed as two independent canonical bundles, separate from `audits/macos-1.0.9-relay/` + `audits/windows-1.0.9-relay/`.
- 1.2.3: no independent `relay-core` bundle exists for either platform. `audits/macos-1.2.3-relay/manifest.json` declares a scope (`core::relay::* 32 submodules + commands::relay 23 commands`) broad enough to nominally subsume relay-core, but this declaration was never checked against the 1.0.9 relay-core cluster list until this audit.

## Frontend IPC / Control-flow

Out of scope for this audit; no delta examined. `audits/macos-1.2.3-relay/`'s frontend coverage (`RelayModelPage` + shared relay service IPC wrappers) is unaffected by this finding either way.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 1.0.9 relay-core's 19 clusters spanned both what is now `core::relay::*` (translator, manager, proxy_server, etc.) and functionality that, by content, no longer appears anywhere in 1.2.3's macos-arm64 raw tree (`relay_web_executor`, `relay_web_tools`).
- Submodule directory structure has changed substantially between versions: 1.0.9 relay-core used cluster names like `relay_codex_writer`, `relay_diagnostic`; 1.2.3's `core/relay/` uses bare names (`codex_writer/`, `codex_diagnostic/`) without the `relay_` prefix, and several submodules are new/renamed/heavily expanded (`codex_thread_visibility/`, `router_reconciler/`, `router_transition/`, `router_unlock_auth/`, `transition_journal/`, `invariants/`, `keychain/`, `dialects/`, `quota/`, `codex_catalog/` -- none of which have a direct 1.0.9 relay-core cluster ancestor by name, consistent with substantial product evolution between 1.0.9 and 1.2.3 (multi-provider dialect routing, quota tracking, router unlock/transition state machine).
- `relay_proxy_config` (13 sub-leaves in 1.0.9) physically relocated out of the relay module entirely: its 1.2.3 descendants (`detect_api_proxy_config`, `set_api_proxy_config`, `test_api_proxy_config`) live under `commands/system/`, confirmed via `audits/macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md`.

## Interface / Error / Boundary

Not examined in this pass (no new decompile).

## Gate Leaf

All 19 clusters remain at their 1.0.9-era gate status for historical reference only; none are promoted or demoted by this audit. See `audits/macos-1.0.9-relay-core/manifest.json` `gate_counts` for the historical baseline (13 strictImplementationUse, 4 readyToImplement, 1 consumerStartReady, 1 consumerStartReady_icf_candidate).

## Plugin / Capability

Not examined; out of scope.

## OTA / Package

Not examined; out of scope.

## Resource / Binary Surface

- 1.0.9 relay-core binary SHA: `1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482` (per `audits/macos-1.0.9-relay-core/manifest.json`).
- 1.2.3 relay binary SHA (core relay slice): `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (per `audits/macos-1.2.3-relay/manifest.json`). Different binaries as expected across the version gap; no byte-level diff performed here.

## Unknown

- Windows-side relay-core status for 1.2.3: Unknown, not independently checked in this pass (macOS evidence must not be extrapolated per AGENTS.md red line).
- `relay_web_executor` / `relay_web_tools` 1.2.3 fate: Unknown (removed vs uncaptured), pending func_query verification.
- Whether the 15 content-matched clusters are byte-for-byte behaviorally equivalent across the version gap: Unknown -- this audit only confirmed function-name/directory-name presence, not behavioral parity (that would require full dim1-6 re-closure, out of scope for this lightweight audit).
