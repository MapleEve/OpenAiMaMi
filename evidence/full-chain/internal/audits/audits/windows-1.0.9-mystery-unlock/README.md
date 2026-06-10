# windows-1.0.9-mystery-unlock — Consumer Bundle

**Product**: AiMaMi 1.0.9 | **Platform**: Windows x64 | **Cluster**: mystery_unlock
**Session**: `<audit-session>` | **Machine**: `<workstation>`

## Coverage

| IPC command | VA | Gate | dim1 | dim2-5 | dim6 |
|---|---|---|---|---|---|
| `get_mystery_unlock_grants` | 0x14027E640 | **strictImplementationUse** | closed_via_mami_frontend | closed (Win IDA) | pending |
| `merge_mystery_unlock_grants` | 0x1402719B0 | **strictImplementationUse** | closed_via_mami_frontend | closed (Win IDA) | pending |

**achievable_full_leaf_100 = true** (reverse done + dim1 sourced + dim6 test plan listed)
**evidenced_100 = false** (dim6 not yet run by C5 team)

## Interface Summary

### get_mystery_unlock_grants
- Input: `{ repo: string }`
- Output: `Vec<MysteryUnlockGrant>` (Ok) / error (Err)
- Storage: reads mystery unlock grants for given repo from persistent storage

### merge_mystery_unlock_grants
- Input: `{ repo: string, grants: Vec<MysteryUnlockGrant> }`
- Output: merged grants list (Ok) / error (Err)
- Storage: merges grants by repo key (persistent write; side-effect)

### MysteryUnlockGrant
- Struct stride: 96B (Windows x64; do NOT assume macOS is same)
- Discriminant: Ok==3, Err==6

## dim1 Frontend Evidence
Both commands confirmed in `evidence/full-chain/raw/aimami/1.0.9/windows-x64/frontend/tauri-dumped/frontend/ipc-contracts.jsonl` at `assets/index-CL22l5v8.js:86`

## Platform Notes
See `SYSTEM-DIFF.md`. All Windows dims from Windows IDA only — `doNotInferWindowsFromMacOS=true`.

## dim6 Test Plan
Listed in `gate-report.json#clusters.*.dim6_test_plan`. Status: pending (C5 implementation side).

## Files
- `gate-report.json`: six-dim gate evidence
- `manifest.json`: bundle metadata
- `data/producer-ledger.json`: per-leaf producer record
- `logic/WIN-MYSTERY-UNLOCK-FULL-CHAIN-109.md`: full chain evidence
- `SYSTEM-DIFF.md`: Windows vs macOS platform differences
- `pointers/evidence-paths.md`: raw evidence pointers
