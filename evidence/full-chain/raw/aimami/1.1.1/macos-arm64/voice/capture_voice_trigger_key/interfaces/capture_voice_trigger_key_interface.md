# capture_voice_trigger_key — Interface / DTO / Error / Side-Effect

**Version**: 1.1.1 macOS ARM64
**Session**: wf-aimami111-delta-20260616
**Migration**: migrated_no_behavior_diff from 1.0.9

## Input DTO

| Field | Type | Required | Source |
|-------|------|----------|--------|
| style | String | yes | 1.0.9 baseline (frontend CCF unchanged) |

Frontend invoke: `captureVoiceTriggerKey:(style)=>ne("capture_voice_trigger_key",{style})`

## Output DTO

No upstream backend response owner present in 1.1.1 macOS binary. Command is absent — Tauri would return an error if invoked against a running 1.1.1 AiMaMi instance (no registered handler).

## Error Envelope

No backend error envelope present. With no registered Tauri command handler for `capture_voice_trigger_key` in 1.1.1, invocation would result in Tauri's default "command not found" error path, not an AiMaMi-specific error.

## Side Effects

No upstream backend side-effect leaf. Voice path/UI/global-shortcut constants (`0x1010e8aea`, `0x1011514d1`, `0x10115990e`) are not command owners and produce no side effects from `capture_voice_trigger_key` invocation.

## Platform Gate

macOS ARM64 confirmed absent. Windows 1.1.1 status: win_same per DELTA-PLAN.md (dispatcher string pool presence, DTO/callee depth not confirmed this session).

## C5 Implementation Note

C5 should implement voice capture as a C5-native feature with its own backend logic. No upstream backend parity possible (upstream has no backend for this command). The accepted substitute gate (`not_upstream_backend_parity=true`) means C5 is free to design its own voice trigger key capture behavior.
