# capture_voice_trigger_key — 1.1.1 macOS ARM64 Evidence

**Session**: <审计会话>
**Machine**: <本地机器>
**Model**: claude-sonnet-4-6
**Role**: 纯生产者 (SOP steps 0-6)
**Binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**逆向分析 uptime**: 20943s (IDA decompiler_ready=true, strings_cache_ready=true)
**Migration status**: migrated_no_behavior_diff
**Baseline**: aimami/1.0.9/macos/voice/capture_voice_trigger_key (<本地机器>, 2026-06-03)
**Source binary SHA256 (1.1.1)**: (1.1.1 universal arm64 — IDB module=AiMaMi, imagebase=0x100000000)
**Source binary SHA256 (1.0.9 baseline)**: 1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482

---

## ## Confirmed

1. **Backend command string absent**: `find_regex("capture_voice_trigger_key")` → 0 matches in 1.1.1 string pool (same as 1.0.9 baseline where match_count=0).
2. **No backend handler/symbol**: `lookup_funcs(["capture_voice_trigger_key", "codexmate_lib::commands::capture_voice_trigger_key"])` → both not found.
3. **No func symbol match**: `func_query([name_regex=".*capture.*voice.*", name_regex=".*voice.*trigger.*"])` → both 0 hits.
4. **No voice_trigger string**: `find_regex("voice_trigger")` → 0 hits; `find_regex("voice.*trigger")` → 0 hits; `find_regex("capture.*voice")` → 0 hits.
5. **Voice UI/path anchors present (non-handler)**: `find_regex("voice")` → 7 matches:
   - `0x1010e8aea`: `voice-overlay...` (UI anchor, voice-overlay panel string)
   - `0x1010e9bef`: `hotspotvoice-search-overlay` (UI anchor)
   - `0x1011514d1`: long path blob including `voice-workspace.json`, `voice-runtime.json` (path anchor)
   - `0x10115990e`: `voice-volume-marker.json` (path anchor)
   - Others: key/event/browser strings (not voice command related)
6. **Frontend unchanged**: `cmd-same-macos-arm64.txt` contains `capture_voice_trigger_key` — frontend wrapper unchanged from 1.0.9.
7. **1.0.9 baseline gate**: `readyToImplement=true`, `full_leaf_100=true`, `accepted_substitute=same-platform 逆向分析 backend command absence substitute`, `arg_keys=["style"]`.
8. **Fake-wall taxonomy exhausted — all 7 categories inapplicable**:
   - `drop_in_place≠async_body`: no VA exists to have a shim
   - `architecture_only/budget_rule`: not self-limited; genuinely absent
   - `async_decompile_failed_IDA decompiler_limit`: no async body to decompile
   - `wrong_VA`: no VA to be wrong about
   - `vtable_dynamic_dispatch`: no vtable entry; no command owner
   - `HTTP_terminal_external_only`: no HTTP leaf; entirely absent
   - `library_internal_vs_config_callsite`: not applicable; command string itself absent
9. **Owner-map delta classification**: `status=shared`, `owner_va=null`, `note=not_yet_queried` — placed in mac_delta P3 voice series for "confirm absent" triage, confirmed absent by exhaustive 4-channel search.
10. **IDB comments written**: `0x1010e8aea`, `0x1011514d1`, `0x10115990e` annotated as absent-owner voice anchors (session <审计会话>).

---

## ## Inferred

1. **1.1.1 continues 1.0.9 pattern**: voice module commands (including `capture_voice_trigger_key`) have IPC frontend wrappers (frontend CCF preserved) but no backend command handler registered in the Tauri command dispatcher — the voice backend layer was stripped from the compiled binary while the frontend JS remains (dead code from JS bundle perspective).
2. **arg_keys=["style"]** inferred from 1.0.9 baseline (frontend CCF unchanged per cmd-same-macos-arm64.txt); 1.1.1 frontend JS has the same invoke wrapper `captureVoiceTriggerKey:(style)=>ne("capture_voice_trigger_key",{style})`.
3. **No side-effect leaf reachable**: with no backend handler, no fs/http/registry/sidecar side-effects possible from this command in 1.1.1.
4. **Migration gate preservation**: 1.0.9 gate was `readyToImplement=true` with `not_upstream_backend_parity=true`; 1.1.1 inherits same gate tier under `migrated_no_behavior_diff` + `unchanged_reused` via absence-identity.
5. **Voice anchor VAs differ from 1.0.9** (1.0.9 had `0x100f3933a`, `0x100f35807`, `0x100f38815`; 1.1.1 has `0x1010e8aea`, `0x1011514d1`, `0x10115990e`) — VA drift due to binary rebase/recompile, but anchor semantics identical (UI/path, not command owner).
6. **内部构建 implementation guidance unchanged**: 内部构建 should not implement an upstream backend owner for `capture_voice_trigger_key` unless voice is restored as a product decision; implementation would be 内部构建-native not upstream-parity.
7. **P3 priority confirmed correct**: DELTA-PLAN.md §8 correctly classified voice series as P3 "confirm absent first"; this triage confirms absent without requiring further deep reverse work.

---

## ## Unknown

1. **Frontend CCF exact line/wrapper in 1.1.1 JS bundle**: not directly confirmed this session (cmd-same classification is sufficient; 1.0.9 baseline had `captureVoiceTriggerKey:(style)=>ne("capture_voice_trigger_key",{style})`). Would require direct JS bundle grep to get exact line number — accepted_unknown: product_decision (frontend-only UI element, no backend behavior to drive implementation).
2. **Windows 1.1.1 status**: not checked this session (win_same.txt classification covers win dispatcher presence; win deep reverse not in scope for this command this session). win_same = command string present in win dispatcher string pool, DTO/callee depth Unknown.
3. **Why frontend JS not removed**: product/build decision — the frontend JS dead code was not tree-shaken; accepted_unknown: product_decision.
4. **Voice feature roadmap**: whether 内部构建 will restore voice as a product feature is product_decision, not upstream reverse scope.
5. **voice-volume-marker.json semantic owner**: the path blob at `0x10115990e` confirms the file path exists in binary constants; the function writing to `voice-volume-marker.json` is not traced this session (not required for `capture_voice_trigger_key` gate closure — command is absent, no write path needed). accepted_unknown: product_decision.
