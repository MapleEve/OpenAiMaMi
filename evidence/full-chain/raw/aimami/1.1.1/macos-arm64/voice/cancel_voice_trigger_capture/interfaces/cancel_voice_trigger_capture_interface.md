# cancel_voice_trigger_capture — Interface / DTO / Error / Side-Effect
## AiMaMi 1.1.1 macOS arm64 | session <审计会话>

## Input Parameters (DTO)

| Field | Type | Required | Default | Source |
|---|---|---|---|---|
| (none) | — | — | — | Frontend argKeys=[] confirmed |

**argKeys**: `[]` (zero-arity invoke)
**Frontend call**: `cancelVoiceTriggerCapture:()=>ne("cancel_voice_trigger_capture")`
**argObject**: `null`

## Output / Response

| Field | Type | Note |
|---|---|---|
| (none) | — | No backend response owner; invoke returns null or undefined |

**Backend response**: not applicable — no backend handler registered for this command in AiMaMi 1.1.1 macOS arm64.

## Error Envelope

No backend error envelope. If Tauri 2.x returns an error for unregistered commands, the frontend should handle gracefully. Upstream backend parity does not apply.

## Side Effects

None at backend level. No file writes, no process spawns, no registry changes, no HTTP calls from backend. Any OS-level voice capture cancellation (e.g., CGEventTap removal) is performed by the frontend or OS plugin, not this backend command.

## Platform Scope

| Platform | Status |
|---|---|
| macOS arm64 | Confirmed — backend absent, frontend wrapper present |
| Windows x64 | Unknown — not verified in this session; do not infer |

## Migration Delta vs 1.0.9

- Input DTO: unchanged (argKeys=[] in both)
- Output: unchanged (no backend in both)
- Error: unchanged (no backend in both)
- Side effects: unchanged (none in both)
- Frontend wrapper name: unchanged (`cancelVoiceTriggerCapture`)
- Voice anchors: address-shifted (1.0.9: 0x100f3933a etc; 1.1.1: 0x1010e8aea, 0x1011514d1) but semantically identical (UI/path anchors, not owners)

**Conclusion**: no interface delta detected. `migrated_no_behavior_diff`.
