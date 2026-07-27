# Evidence Paths — macos-1.2.3-maintenance

All paths are relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (mounted SMB root: ``).

## Command wrapper pseudocode (dim2, backend owner)

```
raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/rebuild_registry_0x1007c7fb0.c
raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/clean_0x1007cd710.c
raw/aimami/1.2.3/macos-arm64/commands/accounts/ida/pseudocode/load_snapshot_0x1006ffc90.c
```

## Core repository pseudocode — primary owners (dim2/dim3 root)

```
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/rebuild_registry_with_policy_0x100a6a890.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/clean_0x100a74760.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/load_snapshot_local_0x100a5c1d0.c
```

## Core repository pseudocode — candidate downstream call-tree (dim3, not independently traced this pass)

```
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/persist_registry_0x100a5b440.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/load_registry_0x100a56040.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/load_registry_for_mutation_0x100a68190.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/carry_over_registry_state_0x100a7b1d0.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/live_snapshot_path_for_rebuild_0x100a6fa60.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/commit_and_purge_0x100a77070.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/rollback_0x100a77d80.c
raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/stage_0x100a771e0.c
```

## Frontend extraction artifacts (dim1)

```
raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl
raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl
raw/aimami/1.2.3/macos-arm64/frontend/ast-facts.json
raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md   # §2 MaintenancePage — confirms `clean` action card
raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md                            # grep hit only — `refreshLive` inferred load_snapshot prop chain
raw/aimami/1.2.3/macos-arm64/frontend/beautified/maintenance-page-BJvb7DUu.js               # source for the above .md narrative
```

## Binary SOT

```
raw/binary/AiMaMi 1.2.3.app
SHA-256 (macos-arm64, cross-checked against macos-1.2.3-relay and macos-1.2.3-mcp manifests): e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d
```

## RULE9 historical baseline (not migrated — see logic/DELTA-LOGIC-1.2.3.md)

```
internal-reverse/audits/macos-1.0.9-maintenance/README.md
internal-reverse/audits/macos-1.0.9-maintenance/gate-report.json
internal-reverse/audits/macos-1.0.9-maintenance/logic/MAINTENANCE-DISTILLED-109.md
```

## Cross-platform sibling (not consumed into this package's gate — pointer only, per doNotInferWindowsFromMacOS)

```
internal-reverse/audits/windows-1.2.3-maintenance/manifest.json
internal-reverse/audits/windows-1.2.3-maintenance/README.md
```

## Distilled consumer doc

```
internal-reverse/audits/macos-1.2.3-maintenance/logic/MAINTENANCE-DISTILLED-1.2.3.md
internal-reverse/audits/macos-1.2.3-maintenance/logic/DELTA-LOGIC-1.2.3.md
```
