# Evidence Pointers — windows-1.2.3-system-usage

## Owned-here raw evidence (read this pass)

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/get_usage_refresh_interval_0x14018cbb0.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/set_usage_refresh_interval_0x14018c2d0.c`
- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` (131 win commands; grep-confirmed presence of both command names, no CCF-level reduce)

## Pointer-only evidence (owned by sibling bundles, NOT duplicated here)

- `internal-reverse/audits/windows-1.2.3-accounts/` — canonical owner of `refresh_usage_snapshot` (raw: `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/refresh_usage_snapshot_0x140cb44a0.c`) and `refresh_single_account_usage` (raw: `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/refresh_single_account_usage_0x140cb15d0.c`). Both `consumerStartBlocked`, dim2 Hex-Rays decompile failed.
- `internal-reverse/audits/windows-1.2.3-sessions-analytics/` — canonical owner of `compute_usage_analytics` (raw: `raw/aimami/1.2.3/windows-x64/analytics/ida/pseudocode/compute_usage_analytics_0x14086c970.c`) and `load_usage_analytics` (raw: `raw/aimami/1.2.3/windows-x64/commands/analytics/ida/pseudocode/load_usage_analytics_0x140cde3c0.c`). Both `consumerStartReady` (dim2-wrapper only). Its `manifest.json.explicit_exclusions` field explicitly names all 4 non-owned usage commands (including the 2 this bundle owns) as "different owning module".

## Cross-version baseline (RULE9 comparison material, read-only)

- `internal-reverse/audits/windows-1.0.9-system-usage/` — prior canonical bundle at 1.0.9 for the same 3-command cluster (`get_usage_refresh_interval`, `set_usage_refresh_interval`, `refresh_usage_snapshot`), gate=`strictImplementationUse` for all 3. VAs differ at 1.2.3 (expected build drift); no behavior diff calibrated this pass (`diff_required`).

## Cross-platform reference (read-only, NOT used to fill Windows gaps)

- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/{get_usage_refresh_interval_0x1007cae80.c,set_usage_refresh_interval_0x1007cb0a0.c}`
- `raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/{usage_refresh_interval_seconds_0x100a7fd00.c,get_usage_refresh_interval_0x100a673a0.c,set_usage_refresh_interval_0x100a68310.c}`
- Used only to observe a platform-density asymmetry (mac has core/repository layer, win raw currently has none under "usage" naming); not used per `doNotInferWindowsFromMacOS`.
- `internal-reverse/audits/cross-1.2.3-home-usage-frontend/AI.md` — independently records the mac-side frontend-trigger gap for these same 2 commands as an open next_producer_step.

## Related backlog / claim record

- `internal-reverse/REVERSE-STATUS.md` line ~4011 (`wf-aimami123-fullapp-20260724`) — lists "windows 专属 system-usage" as a confirmed missing canonical bundle prior to this session.
- `internal-reverse/REVERSE-STATUS.md` entry `[windows-1.2.3-system-usage-distill-20260725]` — this session's claim-first + completion record.
