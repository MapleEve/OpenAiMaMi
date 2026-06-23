# generate_voice_prompt — Evidence (AiMaMi 1.1.1 macOS ARM64)

**session**: <审计会话> | **machine**: <本地机器>
**produced_at**: 2026-06-17T00:00:00+08:00
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**delta_vs_1.0.9**: diff_reversed — frontend argKeys expanded from [] to 19 fields; backend remains absent

---

## ## Confirmed

1. **backend_owner=absent (1.1.1)**: `lookup_funcs ["codexmate_lib::commands::voice::generate_voice_prompt", "generate_voice_prompt"]` → both Not found. 逆向分析 AiMaMi 1.1.1 i64 confirmed live (hexrays_ready=true, uptime 34339s).

2. **func_query zero hits (1.1.1)**: `func_query {name_regex: ".*generate_voice_prompt.*"}` → data=[] and `func_query {name_regex: ".*voice.*"}` → data=[]. No voice command functions exist in 1.1.1 backend binary symbol table.

3. **string pool zero hits (1.1.1)**: `find_regex "generate_voice_prompt"` → n=0; `find_regex "generate_voice"` → n=0; `find_regex "voice_prompt"` → n=0; `find_regex "templateId|rawText|asrProvider|asrDurationMs"` → n=0. The 19 argKey field names are absent from binary string pool — they are frontend-only, not backend DTO strings.

4. **IPC registration blob zero hits (1.1.1)**: `find_regex "generate_voice"` → n=0. Command name "generate_voice_prompt" is not in Tauri IPC registration blob. No Tauri command handler was registered for this command in 1.1.1 binary.

5. **Frontend IPC confirmed present (1.1.1)**: `ipc-contracts.jsonl` at `raw/aimami/1.1.1/macos-arm64/frontend/ipc-contracts.jsonl` contains entry: `command="generate_voice_prompt"`, `kind="tauriInvokeWrapper"`, `callee="ne"`, `file="assets/index-DdcCOEJG.js"`, `line=86`, `col=26914`. Frontend wrapper `generateVoicePrompt` confirmed.

6. **Frontend argKeys expansion (1.1.1 vs 1.0.9)**: 1.0.9 had argKeys=[]. 1.1.1 has 19 argKeys: templateId, rawText, selectedText, clipboardText, targetBundleId, targetAppName, promptOverride, templateTitle, templateKind, llmProvider, llmApiKey, llmModel, llmBaseUrl, asrProvider, asrModel, asrLanguage, asrEmotion, asrDurationMs, asrErrorCode. Frontend wrapper is `t=>ne("generate_voice_prompt", {templateId:t.templateId, rawText:t.rawText, selectedText:t.selectedText??null, clipboardText:t.clipboardText??null, targetBundleId:t.targetBundleId??null, targetAppName:t.targetAppName??null, promptOverride:t.promptOverride??null, templateTitle:t.templateTitle??null, templateKind:t.templateKind??null, llmProvider:t.llmProvider??null, llmApiKey:t.llmApiKey??null, llmModel:t.llmModel??null, llmBaseUrl:t.llmBaseUrl??null, asrProvider:t.asrProvider??null, asrModel:t.asrModel??null, asrLanguage:t.asrLanguage??null, asrEmotion:t.asrEmotion??null, asrDurationMs:t.asrDurationMs??null, asrErrorCode:t.asrErrorCode??null})`.

7. **Voice path/UI anchors present (1.1.1)**: String pool confirms voice-workspace.json, voice-runtime.json, voice-volume-marker.json, voice-overlay, voice-search-overlay UI anchors exist in 1.1.1 binary (at 0x1011514d1, 0x10115990e, 0x1010e8aea, 0x1010e9bef). These are path/UI/capability constants, not command owners.

8. **1.0.9 baseline gate**: 1.0.9 generate_voice_prompt accepted via `accepted_substitute=ida_backend_command_absence`. Gate: readyToImplement=true, implementation_use=true, gate_accepted=true, full_leaf_100=true. Source_binary_sha256=1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482.

9. **1.1.1 binary SHA confirmed**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb (same SHA as all other 1.1.1 macos-arm64 commands in this session — universal binary).

10. **Fake-wall check complete**: genuine_ceiling=false. All 7 taxonomy categories checked — (1) drop_in_place shim: N/A no function found; (2) architecture_only/budget_rule: N/A; (3) async_decompile_failed: N/A no async body exists; (4) wrong_VA: N/A no VA; (5) vtable_dynamic_dispatch: N/A; (6) HTTP_terminal_external_only: N/A; (7) library_internal_vs_config_callsite: N/A. Backend is genuinely absent, not a decompile failure — both func_query and string pool (two independent channels) confirm zero hits. recovery_attempts: none_needed (absence confirmed via two independent methods: symbol enumeration + string pool + IPC registration blob).

11. **owner-map-111 entry**: `{"command": "generate_voice_prompt", "status": "shared", "module": null, "owner_va": null, "owner_symbol": null, "note": "not_yet_queried"}` — no prior 1.1.1 claim; this session is ADDITIVE first producer.

12. **INDEX gate**: INDEX.jsonl grep "1.1.1" shows no generate_voice_prompt entry; ADDITIVE no collision with any other producer.

---

## ## Inferred

1. **Frontend argKeys nullable semantics**: Based on frontend wrapper code, selectedText, clipboardText, targetBundleId, targetAppName, promptOverride, templateTitle, templateKind, llmProvider, llmApiKey, llmModel, llmBaseUrl, asrProvider, asrModel, asrLanguage, asrEmotion, asrDurationMs, asrErrorCode are all `??null` — optional with null default. Only templateId and rawText lack `??null` sugar (inferred required, but not backend-confirmed).

2. **1.1.1 adds LLM+ASR context to voice prompt generation**: The 19 argKeys suggest 1.1.1 extends voice prompt generation to include LLM provider selection (llmProvider, llmApiKey, llmModel, llmBaseUrl) and ASR metadata (asrProvider, asrModel, asrLanguage, asrEmotion, asrDurationMs, asrErrorCode). This is a significant frontend-level capability expansion vs 1.0.9's empty argKeys.

3. **Backend may be implemented as frontend-side LLM call**: Given that llmApiKey, llmModel, llmBaseUrl are frontend args but no backend handler exists, the implementation likely performs LLM API calls from the frontend or uses a different mechanism (not a registered Tauri command). The backend absence is intentional — voice prompt generation in 1.1.1 appears to be a frontend-only feature (LLM call from renderer process).

4. **templateKind and templateTitle suggest template system**: AiMaMi 1.1.1 likely has a voice prompt template system. templateId selects the template; templateTitle/templateKind are metadata fields. Backend does not store/serve these (absent in binary).

5. **asrErrorCode field**: Presence of asrErrorCode as input arg (not output) suggests ASR failure can be passed into the prompt generation — the frontend may include error context in the LLM prompt for graceful degradation handling.

6. **Consumer implication**: Same as 1.0.9 — do not implement upstream backend owner for this command. If 内部构建 implements generate_voice_prompt, it must be as a product decision (frontend LLM call pattern), not as upstream Tauri backend parity. The new 19-field argKeys define the 内部构建 implementation contract surface for the frontend-to-LLM call pattern.

---

## ## Unknown

1. **Backend response schema**: No backend response envelope exists (absent owner). Unknown what response structure a registered handler would return. Frontend consumer behavior for invoke response is unknown.

2. **templateId value space**: Template IDs are unknown — no backend registry, no string pool evidence.

3. **templateKind enum values**: Unknown. Not in binary string pool.

4. **llmProvider enum values**: Which LLM provider strings are accepted is unknown (no backend validation).

5. **asrEmotion value space**: ASR emotion codes unknown (no backend validation).

6. **Frontend component owner**: Which React component triggers `generateVoicePrompt` invocation is not determined (minified source, not decompiled here — frontend CCF only shows the IPC wrapper, not the call site component).

7. **Voice overlay trigger flow**: Whether voice-overlay UI (string anchor present) connects to generateVoicePrompt or to capture_voice_trigger_key/cancel_voice_trigger_capture commands is not determined from backend alone.

8. **Windows platform (1.1.1)**: Windows evidence independent. Windows IPC contracts and backend not examined here. Platform behavior Unknown for Windows.

9. **dim6 test/acceptance mapping**: 内部构建 implementation side acceptance criteria. Not determined here — this is 内部构建 implementation-side work.

10. **Retry/error handling if backend invoke fails**: Since no backend handler exists, Tauri invoke would error at the IPC layer. Frontend error handling for missing backend handler is unknown from this evidence.
