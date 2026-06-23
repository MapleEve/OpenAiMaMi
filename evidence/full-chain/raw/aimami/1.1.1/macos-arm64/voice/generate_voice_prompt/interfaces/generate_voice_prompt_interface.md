# generate_voice_prompt — Interface / DTO / Error / Side-effect Boundary
# AiMaMi 1.1.1 macOS ARM64

## Request DTO (from 1.1.1 frontend IPC contracts)

Command: `generate_voice_prompt`
Frontend wrapper: `generateVoicePrompt` in `assets/index-DdcCOEJG.js` (line 86, col 26914)
Callee: `ne` (Tauri invoke wrapper)

### argKeys (19 total, 1.1.1 expansion from 1.0.9's empty [])

| Field | Required/Nullable | Type (inferred) | Notes |
|---|---|---|---|
| templateId | required | String | No ??null in wrapper |
| rawText | required | String | No ??null in wrapper; raw voice transcription |
| selectedText | nullable | String\|null | ??null |
| clipboardText | nullable | String\|null | ??null |
| targetBundleId | nullable | String\|null | ??null; target app bundle ID |
| targetAppName | nullable | String\|null | ??null; target app display name |
| promptOverride | nullable | String\|null | ??null; override for generated prompt |
| templateTitle | nullable | String\|null | ??null; template display title |
| templateKind | nullable | String\|null | ??null; enum unknown |
| llmProvider | nullable | String\|null | ??null; LLM provider identifier |
| llmApiKey | nullable | String\|null | ??null; LLM API key |
| llmModel | nullable | String\|null | ??null; LLM model identifier |
| llmBaseUrl | nullable | String\|null | ??null; LLM base URL |
| asrProvider | nullable | String\|null | ??null; ASR provider identifier |
| asrModel | nullable | String\|null | ??null; ASR model |
| asrLanguage | nullable | String\|null | ??null; ASR language code |
| asrEmotion | nullable | String\|null | ??null; ASR emotion tag |
| asrDurationMs | nullable | Number\|null | ??null; ASR duration in ms |
| asrErrorCode | nullable | String\|null | ??null; ASR error code (input field) |

### 1.1.1 vs 1.0.9 Delta

1.0.9: `argKeys=[]` (empty stub)
1.1.1: 19 argKeys — adds LLM provider context (llmProvider/llmApiKey/llmModel/llmBaseUrl) and ASR metadata (asrProvider/asrModel/asrLanguage/asrEmotion/asrDurationMs/asrErrorCode) and voice context (templateId/rawText/selectedText/clipboardText/targetBundleId/targetAppName/promptOverride/templateTitle/templateKind)

## Response DTO

**status**: Unknown — no backend handler exists in 1.1.1 binary
**reason**: Backend command absent; Tauri invoke would fail at IPC layer (no registered handler for "generate_voice_prompt")
**upstream_response_schema**: not_applicable_backend_command_absent

## Error Envelope

**status**: not_applicable_backend_command_absent
**expected_runtime_behavior**: Tauri invoke("generate_voice_prompt") with no registered handler would return an error at the IPC layer, not a domain error from a handler
**frontend_error_handling**: Unknown (not determined from minified source analysis)

## Side-effect Boundary

**backend_side_effects**: none — no backend handler exists
**frontend_side_effects**: LLM API call likely performed directly in renderer process (inferred from presence of llmApiKey/llmBaseUrl as frontend args)
**persistence**: none confirmed from backend
**http**: LLM API call likely from frontend renderer (not via Tauri backend)

## Platform Scope

- macOS ARM64: CONFIRMED (backend absent; frontend IPC confirmed)
- Windows: Unknown (not examined in this session; Windows IPC contracts at raw/aimami/1.1.1/windows-x64/frontend/ipc-contracts.jsonl not checked)
- doNotInferWindowsFromMacOS: true
