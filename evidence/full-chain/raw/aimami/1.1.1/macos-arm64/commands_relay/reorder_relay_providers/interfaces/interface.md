# Interface: reorder_relay_providers — macOS arm64 — AiMaMi 1.1.1

## IPC Contract

**Command name**: `reorder_relay_providers`
**IPC pattern**: Tauri `invoke("reorder_relay_providers", {orderedIds: string[]})`

## argKeys

| key | type | required | source |
|-----|------|----------|--------|
| orderedIds | string[] | yes | get_bytes @0x101148471 + string_pool @0x1011482ff + Windows CCF |

## argObject

```typescript
{
  orderedIds: string[]  // ordered list of provider IDs in desired display/priority order
}
```

## Response

```typescript
// Success
CoreEnvelope::ok(reorder_result)
// discriminant = 0x8000000000000000 (Ok tag in Rust Result representation)

// Error
CoreEnvelope wrapping CoreError string
// discriminant = 0x8000000000000000 (Err tag)
```

## Side Effects

1. **Relay config atomic write** (FS): RelayState serialized → temp file ({pid}-{uuid}) → write → fsync → rename → sync_parent_dir. Path: CodexPaths::ensure_directories root.
2. **Codex CLI config update** (FS): sync_codex_config_with_outcome → resolve_api_slots → write_catalog / remove_catalog → apply_codex_state. Updates Codex CLI provider order.

## Error Conditions

- RelayState snapshot invalid (error string 107B from unk_1011541DD, allocated on heap)
- RelayManager::persist failure (storage::save error path)
- sync_codex_config_with_outcome failure (codex config write error, logged via log::error)
- All errors propagated as CoreError → CoreEnvelope::err

## Implementation Notes

- Providers sorted by position in orderedIds using HashMap lookup; providers not in orderedIds are dropped or appended (exact behavior: HashMap::from_iter positions → driftsort/insertion_sort; Vec::from_iter with hashmap filter)
- sort uses driftsort_main for n>=21, insertion_sort_shift_left for n<21 (optimization boundary)
- Mutex guard: Mutex::lock at a2[1]+16 (relay manager inner mutex) — same mutex as other relay write operations
- RelayProvider stride: 232 bytes (confirmed from drop_in_place loop arithmetic)
- Codex sync conditional: only executes when persist succeeds AND active port is set in relay state

## Platform

- **macOS arm64**: confirmed from 逆向分析 decompile, binary f34ff829...
- **Windows x64**: confirmed in separate session (wf-aimami111-delta-20260617-win-reorder, INDEX keys windows-x64/reorder_relay_providers/full-chain + gate-upgrade)

## Gate

**gate_tier**: strictImplementationUse_candidate
- dim1 (frontend CCF): cross-platform accepted (orderedIds confirmed dual-source)
- dim2 (backend owner + decompile): PASS
- dim3 (callees to leaves): PASS, depth ≥7
- dim4 (DTO/response): CoreEnvelope confirmed; inner type accepted_unknown
- dim5_mac: PASS
- dim5_win: separate Windows entry
- dim6: Unknown
