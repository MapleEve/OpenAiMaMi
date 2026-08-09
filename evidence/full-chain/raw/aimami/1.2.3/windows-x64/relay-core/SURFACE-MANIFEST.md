# AiMaMi 1.2.3 windows-x64 core::relay::* — Function Surface Recovery (strip PE, no decompile)

Produced: 2026-07-23 · session `relay123-surface` · machine `<本地机器> · binary `AiMaMi.1.2.3 win64.exe` (PE, imagebase `0x140000000`) · SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`

## Scope

This bundle enumerates the **owner function surface** (address, size, current IDB name, module attribution, confidence tier, evidence) for the relay subsystem in the Windows strip PE. **No `decompile()` calls were made** — function bodies are not reversed here. This is the surface/face inventory step; per-command deep decompile is a separate follow-up leaf.

## Method (three-layer strip recovery, per skill red line 24 / `ida-dirtree-module-recovery.md §3`)

1. **Layer ① — relay marker/DTO-field string search**: `find_regex` for `aimami-relay` managed-block markers, `RelayProvider`, `wireApi`/`RelayWireApi`, `healthScore`, `codexRouterEnabled` → `xrefs_to` (1–2 hop) → enclosing function.
2. **Layer ② — panic-Location source-path two-hop xref**: `find_regex('core\\relay')` (two pagination pages, `offset=0` and `offset=30`) recovered **28 distinct `src\core\relay\*.rs` panic-Location path strings** → for each, `xrefs_to(string_addr)` (hop 1, usually lands on a shared `core::panic::Location` struct in `.rdata`, `fn=null`) → `xrefs_to(location_struct_addr)` (hop 2, lands on the real enclosing function, `fn` populated). This is the primary evidence source (real Location file:line proof, not a guess).
3. **Layer ③ — tauri command name string → unique handler**: for all 22 relay/proxy-adjacent commands from the shared frontend bundle's `ipc-contracts.jsonl` (`activate_relay_provider`, `get_relay_active`, `set_codex_router_enabled`, etc.), `find_regex('"<command>"')` → `xrefs_to` (1-hop). **19/20 commands resolved to a single unique owner** (gold-standard evidence). 1 command (`get_codex_router_auth_readiness`) landed ambiguously inside an oversized (0x6250B) function named `open_path` — flagged `BLOCKED`, not accepted as owner (see Blocked section).
4. **Layer ④ (opportunistic) — Rust type-name string xref**: found `codexmate_lib::core::relay::codex_mutation::CodexMutationGate` as a `.rdata` type-name string (this binary retains some type-name strings despite function-symbol stripping) → `xrefs_to` → 5 candidate owners for the `codex_mutation` submodule (not present in the panic-Location sample).

**Strict propagation note**: string-based coverage (layers ①–④) already reached all 28 `core::relay::*.rs` files confirmed present in this Windows binary, so the ≥2-caller call-graph propagation fallback (red line: non-library, ≥2 distinct same-module callers, `lib.rs` excluded as source) was **not needed** in this pass and was not applied. It remains available as a follow-up tool for any `truly_undone` gaps found in a later four-angle completeness pass.

**IDB baseline note**: this Windows IDB already carries partial real names from the prior `<审计会话> (DONE) full-decompile+rename session — 59/172 panic-Location-attributed functions and all 19 clean command owners already had real (non-`sub_`) names before this pass; this pass adds module attribution + the previously-unlabeled `sub_XXXX` candidates (113) as a structured surface, without decompiling them.

## Platform independence

All evidence above was produced **live against the windows-x64 1.2.3 IDB** (`mcp-win` equivalent HTTP endpoint `<内网IP>:13337`, verified `server_health.status=ok`, `<反编译器>_ready=true`, `module="AiMaMi.1.2.3 win64.exe"`, `imagebase=0x140000000` matching expected before any query — <门控> passed). **No macOS evidence was used to infer Windows ownership.** The macOS `core/relay/<module>/` directory listing (`raw/aimami/1.2.3/macos-arm64/core/relay/`) was consulted only as a **search hint** — 4 mac-only module names (`transition_journal`, `breaker`, `native_responses_compat`, `upstream_url`) were searched independently on Windows via `find_regex` and returned **zero hits**; these are recorded as `Unknown` (not confirmed present, not claimed absent) rather than inferred from macOS.

## Confirmed relay submodules on Windows (29, all with independent Windows string evidence)

`atomic_write`, `codex_catalog`, `codex_config_reconciler`, `codex_diagnostic`, `codex_mutation`, `codex_project_state`, `codex_runtime`, `codex_thread_visibility`, `codex_writer`, `config_takeover`, `dialects/mod`, `fetch_models`, `health_check`, `image_compat`, `invariants`, `io`, `keychain`, `legacy_virtual_auth`, `managed_blocks`, `manager`, `models`, `proxy_passthrough`, `proxy_server`, `quota`, `router_reconciler`, `router_transition`, `router_unlock_auth`, `storage`, `translator`.

## Per-module function-surface breakdown (177 unique functions, `core::relay::*`)

| module | count | tier A | tier B | tier C | sample owners (named) |
|---|---|---|---|---|---|
| core::relay::atomic_write | 3 | 0 | 0 | 3 | (none named yet) |
| core::relay::codex_catalog | 3 | 0 | 2 | 1 | build_catalog_bytes, load_official_models |
| core::relay::codex_config_reconciler | 1 | 0 | 1 | 0 | reconcile |
| core::relay::codex_diagnostic | 5 | 0 | 3 | 2 | collect_diagnostic_main_threads, fix_thread_provider_consistency, fix_thread_poisoned_instructions |
| core::relay::codex_mutation | 5 | 0 | 1 | 4 | run |
| core::relay::codex_project_state | 4 | 0 | 2 | 2 | collect_project_state_from_active_db, repair |
| core::relay::codex_runtime | 1 | 0 | 0 | 1 | (none named yet) |
| core::relay::codex_thread_visibility | 22 | 0 | 17 | 5 | find_session_meta_anchors, load_model_restore_journal, restore_relay_model_threads, collect_active_rollout_paths |
| core::relay::codex_writer | 1 | 0 | 1 | 0 | strip_all_managed_blocks |
| core::relay::config_takeover | 3 | 0 | 2 | 1 | remove_backup_file, quarantine_damaged_backups |
| core::relay::dialects/mod | 1 | 0 | 0 | 1 | (none named yet) |
| core::relay::fetch_models | 2 | 0 | 0 | 2 | (none named yet) |
| core::relay::health_check | 3 | 0 | 1 | 2 | handle_event |
| core::relay::image_compat | 1 | 0 | 1 | 0 | replace_image_blocks_0 |
| core::relay::invariants | 1 | 0 | 0 | 1 | (none named yet) |
| core::relay::io | 1 | 0 | 1 | 0 | apply_import_to_state |
| core::relay::keychain | 2 | 0 | 2 | 0 | get_api_key, cleanup_legacy_provider_key |
| core::relay::legacy_virtual_auth | 1 | 0 | 1 | 0 | cleanup_0 |
| core::relay::managed_blocks | 12 | 0 | 1 | 11 | strip_all_managed_blocks |
| core::relay::manager | 26 | 0 | 10 | 16 | ensure_proxy_started, stop_proxy_if_running, set_codex_router_enabled_0, restore_router_enabled_stably |
| core::relay::models | 1 | 0 | 1 | 0 | normalize_relay_models |
| core::relay::proxy_passthrough | 3 | 0 | 3 | 0 | error_response |
| core::relay::proxy_server | 34 | 0 | 6 | 28 | error_hint_0, sanitize_body_for_official_upstream, expand_aimami_compactions_for_upstream |
| core::relay::quota | 3 | 0 | 0 | 3 | (none named yet) |
| core::relay::router_reconciler | 1 | 0 | 1 | 0 | reconcile_native_off |
| core::relay::router_transition | 7 | 0 | 1 | 6 | run_with_writer_policy |
| core::relay::router_unlock_auth | 4 | 0 | 3 | 1 | read_marker, read_cleanup_backup, cleanup |
| core::relay::storage | 3 | 0 | 3 | 0 | hydrate_secrets, apply_provider_id_migrations, load |
| core::relay::translator | 32 | 0 | 2 | 30 | anthropic_to_responses_response_with_too, responses_to_sse_payload |

Full per-function detail (addr/size/name/module(s)/tier/evidence) is in `owner-map.jsonl` (177 rows, one JSON object per line). Command-layer owners are in `../commands/relay/owner-map.jsonl` (21 rows).

## Tier definitions

- **A** — command-string exact 1-hop xref, unique owner (dispatcher-level handler). Only in `../commands/relay/`.
- **B** — panic-Location or type-name two-hop attributed function that already carries a real (non-`sub_`) IDB name from the prior full-decompile session (64 functions).
- **C** — panic-Location or type-name two-hop attributed function still named `sub_XXXX` — candidate helper/internal-impl, evidence exists but not yet decompiled/named (113 functions).
- **BLOCKED** — ambiguous single-hit landing inside an oversized function inconsistent with the per-command owner pattern; not accepted as owner.

## Shared / cross-module functions (12)

12 functions are referenced by panic-Location or command-string evidence from more than one module (expected — inlining, shared helpers, or ICF folding across sibling relay submodules). Examples: `strip_all_managed_blocks` (codex_writer + managed_blocks), 6× `proxy_server`↔`manager` shared internal helpers, `set_api_proxy_config`/`detect_api_proxy_config`/`test_api_proxy_config` (relay command layer + relay_adjacent::api_proxy grouping — same functions, two module labels because the frontend groups them adjacent to relay but no independent `core::relay::api_proxy.rs` panic-path evidence was found; they may live in a `platform::proxy`-style module not yet located). Full list in `owner-map.jsonl` (`modules` field has >1 entry).

## Blocked (1)

| command | hit addr | hit fn name | fn size | reason |
|---|---|---|---|---|
| `get_codex_router_auth_readiness` | `0x140194810` | `open_path` | `0x6250` (25168B) | Single 1-hop xref lands inside an oversized function whose current name (`open_path`) is semantically unrelated to the command, and whose size is far larger than any of the other 19 command owners (largest clean owner is `fetch_relay_models_draft` at `0x2fd3`=12211B). This is inconsistent with the clean per-command-owner pattern seen for the other 19/20 commands and is suspected to be either (a) a shared IPC-dispatch/string-length-switch table function that many command strings route through, or (b) ICF folding merging multiple small wrappers into one code blob under one surviving name. **Not accepted as owner.** Resolving this requires a dedicated decompile pass on `0x140194810` to determine whether it is genuinely a shared dispatcher (in which case `get_codex_router_auth_readiness`'s real per-command logic is inlined elsewhere) — out of scope for this surface-only enumeration. |

## Not found on Windows (searched, zero hits — Unknown, not inferred from macOS)

| macOS module (raw/aimami/1.2.3/macos-arm64/core/relay/) | Windows search pattern | result |
|---|---|---|
| `transition_journal` | `transition_journal` | 0 hits |
| `breaker` | `breaker.rs` | 0 hits |
| `native_responses_compat` | `native_responses_compat` | 0 hits |
| `upstream_url` | `upstream_url` | 0 hits |

These 4 macOS-confirmed submodules have **no independent Windows evidence** found in this pass. Per platform independence (red line: "禁用 macOS 证据外推 Windows"), they are **not** claimed present nor absent on Windows — status `Unknown`, candidate for a follow-up targeted search (broader keyword variants, or call-graph propagation from confirmed neighbors) rather than assumed non-existent.

## Command-layer surface (22 commands, 20 with clean single owner)

See `../commands/relay/SURFACE-MANIFEST.md` and `../commands/relay/owner-map.jsonl` for the full command→owner table.

## Non-decompile guarantee

No `decompile()` MCP calls were issued in this pass. All evidence was produced via `find_regex`, `xrefs_to`, `func_query`, and `server_health`/`server_warmup` only, per task scope ("只枚举面不逐个 decompile").
