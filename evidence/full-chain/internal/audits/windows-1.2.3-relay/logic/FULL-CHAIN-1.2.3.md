# FULL-CHAIN-1.2.3 — Windows relay (owner → decompile → module, module-level narrative)

Windows-specific full-chain narrative. Frontend-to-invoke chain is identical to macOS (cross-platform JS bundle) -- see `../macos-1.2.3-relay/logic/FULL-CHAIN-1.2.3.md` §1, not duplicated here.

## 1. Command layer (`commands::relay`)

23 `.c` files under `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/`. 20/23 have clean single-owner wrappers matching the same command names as macOS. 1 (`open_path`, mapped from `get_codex_router_auth_readiness`) is an ICF-folded shared dispatcher covering 26+ unrelated commands -- not a clean per-command leaf on Windows (see SYSTEM-DIFF.md). 2 (`sub_140187580`/`sub_140CCE030`) are unnamed, plausibly `diagnose_codex_router`/`test_relay_draft_stream` by size/position, identity unconfirmed.

## 2. Core layer (`core::relay::*`, Windows top-level module dirs)

28 of 32 known submodules have Windows-side raw directories (4 macOS-only submodules absent, see SYSTEM-DIFF.md). Owner-map (`relay-core/owner-map.jsonl`, 177 rows) gives function-level owner/addr/size/name resolution independent of decompile-body presence. Decompile-body coverage: 208 deduped addresses across all Windows-side submodules combined (aggregate figure; per-module breakdown not fully re-verified for 18 of the modules -- see `WIN-DECOMPILE-CLOSEOUT-1.2.3.md`).

Module inventory (Windows-side directory names, cross-reference to macOS naming in parens where they differ): `atomic_write`, `codex_catalog`, `codex_config_reconciler`, `codex_diagnostic`, `codex_mutation`, `codex_project_state`, `codex_runtime`, `codex_thread_visibility`, `codex_writer`, `commands/relay`, `config_takeover`, `dialects`, `fetch_models`, `health_check`, `image_compat`, `invariants`, `io`, `keychain`, `legacy_virtual_auth`, `managed_blocks` (macOS: folded into `codex_writer`), `manager`, `mod`, `models`, `proxy_passthrough`, `proxy_server`, `quota`, `router_reconciler`, `router_transition`, `router_unlock_auth`, `storage`, `translator`, `version-delta` (auxiliary version-diff extraction dir, not a real submodule).

## 3. Persistence/HTTP leaves

Not systematically catalogued for Windows this pass (dim3 weak). See `../macos-1.2.3-relay/logic/FULL-CHAIN-1.2.3.md` §4 for the macOS-side leaf hypotheses, which are plausibly platform-shared behavior (same Rust codebase, cross-compiled) but NOT independently confirmed on Windows evidence -- do not treat as Windows-confirmed without re-derivation from Windows pseudocode.
