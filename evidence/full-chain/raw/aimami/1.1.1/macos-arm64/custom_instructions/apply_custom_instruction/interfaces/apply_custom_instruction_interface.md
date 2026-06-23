# Interface: apply_custom_instruction (macOS ARM64 1.1.1)

## Frontend Invoke Signature (confirmed from CCF)

```
ne("apply_custom_instruction", {
  content:       t.content,        // string — instruction text content
  templateCode:  t.templateCode,   // string — template identifier code
  templateTitle: t.templateTitle,  // string — template display title
  source:        t.source          // string — origin/source identifier
})
```

**argKeys**: `["content", "templateCode", "templateTitle", "source"]`
**invoke callee**: `ne` (minified Tauri invoke wrapper)
**evidence**: assets/index-DdcCOEJG.js line 86 col 30299

## Backend Handler

**Status**: ABSENT (逆向分析 absence)
- No `#[tauri::command]` Rust handler found in macOS 1.1.1 binary
- No `codexmate_lib::commands::custom_instructions` module exists
- No string pool entry for `"apply_custom_instruction"` in IDB

## Response Payload

**Status**: Unknown — no backend to decompile response from
**Expected**: CoreEnvelope wrapping some success/error payload (inferred from 1.0.9 pattern)
**Error envelope**: CoreError pattern expected (from other commands), not confirmed for this specific command

## Field Type Notes

| Field | Observed JS | Rust Type | Confirmed |
|-------|-------------|-----------|-----------|
| content | `t.content` (string) | `String` | Frontend only |
| templateCode | `t.templateCode` (string) | `String` | Frontend only |
| templateTitle | `t.templateTitle` (string) | `String` | Frontend only |
| source | `t.source` (string) | `String` or enum | Frontend only |

## Side Effects

**Status**: Unknown — no backend handler to trace side effects through
**Inferred**: Likely writes to `$CODEX_HOME/codexmate/custom-instructions/` directory (path blob confirmed at 0x1011514d1 in binary)
**Not confirmed**: Whether write is atomic, whether it invalidates cache, whether it sends events to frontend

## Platform Scope

- **macOS ARM64 1.1.1**: No backend handler (逆向分析 absence)
- **macOS 1.0.9**: No backend handler (逆向分析 absence, accepted substitute)
- **Windows x64**: Status separate; 1.0.9 gate also accepted substitute. See windows-1.0.9-custom-instructions gate-report.

## Gate Status

```
migrated_no_behavior_diff
baseline: 1.0.9 macos accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command
1.0.9 readyToImplement: True
1.1.1 delta: 逆向分析 absence pattern identical, no new backend handler introduced
```

## CustomInstructionProtectionState (serde model, not command)

Found at VA 0x1005615e0 — `codexmate_lib::core::models::CustomInstructionProtectionState` serde Deserialize visitor.
- ICF-folded (merged with AuthMode, PlanType, RelayQuotaStatus expecting functions)
- 14 vtable data xrefs, no function callers
- This is the data model for protection state stored on disk, NOT a command handler
