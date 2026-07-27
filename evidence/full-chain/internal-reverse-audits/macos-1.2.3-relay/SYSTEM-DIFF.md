# System Diff — AiMaMi 1.2.3 relay (macOS-arm64, vs 1.2.2)

## Platform Artifacts

- Binary: macOS arm64 Mach-O, `lipo -thin arm64` extracted; sha256 (core/relay decompile source) `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`; frontend-extraction sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21` (different pipeline stage, both point at the same 1.2.3 release per producing session's INDEX entries).
- Windows sibling: see `../windows-1.2.3-relay/SYSTEM-DIFF.md`; PE AMD64, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`.

## Frontend IPC / Control-flow

- 1.2.3 total IPC command count: **131** (1.2.2 = 129), **+2 / -0**: `get_autostart_state` + `set_autostart_enabled` (new autostart feature, not in changelog, relay-unrelated but confirms front-end-first extraction methodology caught it).
- Relay-specific frontend: `RelayModelPage` unchanged in command surface vs 1.2.2 at the IPC-name level (no relay commands added/removed this version); behavioral changes are backend-only (see Backend Commands below).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- Mac true App function count: 1.2.2 **1267** → 1.2.3 **1638** (+216, not relay-exclusive; relay's share of the 216 concentrated in `codex_writer`/`codex_thread_visibility`/`codex_diagnostic`/`translator`/`storage`/`codex_catalog` per COVERAGE-FINAL-1.2.3.md §2 changelog-item③).
- Relay-specific behavior delta:
  - **`strip_invalid_router_top_level_model`** (new, in `codex_writer`+`invariants`): scans `config.toml` top level, strips `model`/`model_provider` directives referencing invalidated providers + cleans orphan `aimami_relay_*` keys. This is the root-cause fix for the "can't disable router" changelog item.
  - `codex_thread_visibility::patch_model_fallback_rollout` (rollout session_meta rewrite: syncs model_provider + model_reasoning_effort) — new/expanded this version per changelog item③.
  - `translator` message-format conversion, MiniMax M3 storage migration, official-reasoning-model catalog lookup (gpt-5.6 family) — all changelog item③.
  - `commands::relay::quit_keeping_router` (⚠ `AppHandle::exit(0)`, destructive side effect, quits app while leaving router running) present, not in the 23-command upstream-command list per se (internal method surfaced during Mac commands/relay enumeration).
- Backend decompile coverage: 638 deduped functions macOS-side (32 submodules + commands/relay), 0 truncated stubs (CORRECTED 2026-07-24: an earlier claim that `fetch_relay_models_draft_0x100193810.c` was already fully resolved was false -- the file still had a live TRUNCATED STUB marker + unbalanced braces on disk; genuinely re-decompiled this pass via server-side `IDA decompiler.decompile`, old stub kept as `.c.stub.bak`; full-tree rescan found no other real truncation). See `manifest.json`/`gate-report.json`.

## Interface / Error / Boundary

Not independently extracted for 1.2.3 (dim4 gap, see gate-report.json). Do not treat this section as closed.

## Gate Leaf

consumerStartReady 23/23; strictImplementationUse 0/23; readyToImplement 0/23. See gate-report.json.

## Plugin / Capability

Not in scope for this relay-only package (plugins module has its own separate 1.0.8-anchored gate per OUTPUT-SPEC.md §plugins 1.0.8 最小逆向任务; not touched here).

## OTA / Package

Not evaluated this pass (out of scope for relay module).

## Resource / Binary Surface

commands/relay: 22 `.c` files on Mac covering 23 upstream commands (`get_codex_router_auth_readiness`'s Windows sibling `open_path`@0x140194810 is an ICF-folded shared dispatcher across 26+ unrelated commands; Mac's independent function `get_codex_router_auth_readiness_0x10053fd20.c` is the ground truth for this command on both platforms per the double-platform gate report §①).

## Unknown

- 33rd relay submodule existence: accepted_unknown (tool-limitation).
- 4 macOS-only submodules (transition_journal/breaker/native_responses_compat/upstream_url, 20 functions): zero independent Windows evidence, Unknown (not confirmed-absent).
- Semantic-keyword orphan scan outside `core::relay` namespace: not executed.
- Interface/DTO and test/acceptance mapping: not extracted for 1.2.3 (dim4/dim6 gaps).
