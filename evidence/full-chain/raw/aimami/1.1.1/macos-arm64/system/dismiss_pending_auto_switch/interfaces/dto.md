# Interface / DTO / Error / Side-Effect — dismiss_pending_auto_switch

session: <审计会话>
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

## Request DTO

- argKeys: [] (zero-argument command)
- Frontend: `()=>ne("dismiss_pending_auto_switch")` @ index-DdcCOEJG.js:86:col=32223
- No parameters from frontend

## Response DTO

Result<()> at tauri command return level, wrapped in Tauri's CoreEnvelope at Tauri layer:

| discriminant | byte | meaning |
|---|---|---|
| 10 | 0 | Ok(None) — no pending auto-switch request found; no-op |
| 10 | 1 | Ok(()) — pending dismissed successfully; snooze record written |
| 2 | — | Err(CoreError::Io) — I/O error (ensure_directories or fs::write failure) |
| 3 | — | Err(CoreError::Serialization) — JSON serialization failure |

Note: discriminant=10 byte=0 vs byte=1 both map to Ok response to frontend;
whether frontend distinguishes them depends on CoreEnvelope unwrapping logic (not confirmed from this evidence).

## Snooze JSON Schema (written to snooze file on success)

```json
{
  "currentAccountKey":   "<string>",
  "candidateAccountKey": "<string>",
  "dismissedAt":         "<Duration>"
}
```

Key evidence:
- "currentAccountKey"   (17B) at rodata 0x10114ce56 — confirmed
- "candidateAccountKey" (19B) at rodata 0x10114ce67 — confirmed
- "dismissedAt"         (11B) at rodata 0x10114ce7a — confirmed

`dismissedAt` value: std::time::Duration from SystemTime::now().duration_since(UNIX_EPOCH);
if duration_since fails (clock before epoch), falls back to null/None.
Exact serde serialization format of Duration unknown (likely {secs:u64,nanos:u32} object).

## Side Effects (ordered)

1. Mutex lock: acquires OnceBox<Mutex<Repository>> for the session lifetime
2. load_pending_auto_switch: reads pending auto-switch JSON file from repo (field offset a2+488/496); if absent or parse error → early Ok(None) return, no further effects
3. SystemTime::now() + duration_since: captures dismissedAt timestamp (pure, no side effect)
4. CodexPaths::ensure_directories: creates snooze directory if absent (fs::create_dir_all)
5. alloc 128-byte JSON buffer: heap allocation
6. Serialize 3 keys into JSON via serde_json MapSerializer: currentAccountKey, candidateAccountKey, dismissedAt
7. std::fs::write at a2+63 (snooze file path, 504 bytes into repo struct): writes snooze JSON to file
8. drop AutoSwitchSnoozeRecord: dealloc pending record string fields
9. clear_auto_switch_snooze (a2[61], a2[62]): calls std::sys::fs::remove_file on pending request file; NotFound → Ok; other errors → Err(2)
10. Mutex unlock: releases lock (all paths including error)
11. Heap dealloc: string fields from pending record freed

## Error Paths

| error | condition | discriminant |
|---|---|---|
| Err(CoreError::Io) code=2 | ensure_directories failed | 2 |
| Err(CoreError::Io) code=2 | std::fs::write failed | 2 |
| Err(CoreError::Serialization) code=3 | serde_json serialization failed | 3 |
| panic "poisoned lock: another task failed inside" | Mutex poisoned | panic (41B @0x10114c2e6) |

## Platform Scope

- macOS ARM64: confirmed (this evidence)
- Windows x64: Unknown — not inferred from macOS evidence

## Delta vs 1.0.9

- Interface: identical (argKeys=[], same response discriminants, same snooze JSON keys)
- Snooze JSON schema: identical (same 3 keys, same rodata positions confirmed)
- Control flow: identical (load → capture time → ensure dirs → serialize → write → clear snooze)
- Error codes: identical
- Owner VA: changed (1.0.9: 0x1002618b4, 1.1.1: 0x10061b3e0) — expected recompile
- Core impl VA: changed (1.0.9: 0x1005eec9c, 1.1.1: 0x1004cdb90) — expected recompile
- migration_status: migrated_no_behavior_diff
