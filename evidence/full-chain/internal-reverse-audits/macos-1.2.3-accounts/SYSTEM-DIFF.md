# System Diff — AiMaMi 1.2.3 accounts (macOS-arm64)

## Platform Artifacts

- Binary: macOS arm64 Mach-O; sha256 (core decompile source, same as macos-1.2.3-relay's binary) `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`; frontend-extraction sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21` (verified against `raw/aimami/1.2.3/macos-arm64/MANIFEST.md` and re-hashed `raw/binary/AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi` this session -- matches).
- Windows sibling: not produced this pass. `raw/aimami/1.2.3/windows-x64/{account_io,commands/accounts}/` exist on disk but were not opened this session; Unknown.

## Frontend IPC / Control-flow

- 1.2.3 total IPC command count: 131 (per macos-1.2.3-relay's SYSTEM-DIFF.md, this package did not independently re-derive the 1.2.2 comparison).
- Accounts-relevant commands identified by keyword scan of `frontend/ipc-contracts.jsonl` (`account`/`oauth`/`auth`/`switch`/`logout`/`snapshot` substrings): 12 candidates. 8 have confirmed call-sites inside the reversed `AccountsPage` (`accounts-frontend.md`); 4 (`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot`) do not appear in that page's 25-interaction map at all or only by inference (see README.md Gate Leaf Status).
- `AccountsPage` unchanged-vs-1.2.2 status: not evaluated this pass (no 1.2.2 accounts frontend comparison performed).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- In-scope file count: 141 (87 core across 6 modules + 54 commands across 3 modules), 0 truncated/failed decompiles, cross-validated against two independently-produced baseline docs.
- `core::repository` (99 files, 30 marked `1.2.3 NEW-delta` per `models-repository-baseline.md`) is the true deep-leaf owner for 7 of the 12 accounts-domain commands but is explicitly OUT of this package's primary scope (see manifest.json). The 1.2.3-delta concentration there (per that document) is: account-import aliasing, plan-state application, account-usage enrichment via API, subscription reconciliation, backup cleanup (`remove_account_backup_files`, itself a 1.2.3-new function), auto-switch request coordination.
- `core::models` (175 files, 0 delta this version) supplies DTO type names but not field-level shapes for this package.
- Destructive operations confirmed within in-scope files (see `backend-baseline/commands-baseline.md` §12, cross-checked): `FileRestoreState::restore` (rollback-only `remove_file`), `finish_switch_failure` (rollback + process restart), `remove_accounts` closure (delegates to out-of-scope `Repository::remove_accounts`), `logout` closure (delegates to out-of-scope `Repository::logout`). The actual unconditional-delete leaf (`SnapshotQuarantine::commit_and_purge`'s `remove_dir_all`) lives in the out-of-scope `core::repository` and is only cross-referenced, not independently verified by this package.

## Interface / Error / Boundary

Partially extracted (dim4 partial, see gate-report.json). Type names only, no field-level shapes, no error envelope, no side-effect boundary systematized this pass.

## Gate Leaf

consumerStartReady 8/12; consumerStartBlocked 4/12; strictImplementationUse 0/12; readyToImplement 0/12. See gate-report.json.

## Plugin / Capability

Not in scope for this accounts-only package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

commands/accounts: 46 `.c` files (largest single commands module reviewed this pass, described as "本应用最重的状态机模块" per commands-baseline.md). commands/account_io: 3 files (thin wrappers over core::account_io). commands/account_oauth: 5 files (PKCE OAuth login orchestration with a local axum HTTP callback server).

## Unknown

- Windows 1.2.3 accounts platform: entirely Unknown this pass, not extrapolated from macOS.
- 4 accounts-domain commands' frontend call-site: Unknown within this page's scope (load_snapshot/logout/switch_account/refresh_usage_snapshot).
- Field-level interface/DTO and test/acceptance mapping: not extracted for 1.2.3 accounts (dim4/dim6 gaps).
- Whether the account-related 1.2.3-delta concentrated in `core::repository` (30/99 NEW-delta functions) introduces accounts-visible behavior changes vs 1.2.2/1.0.9: not independently verified by this package (RULE9 diff not performed).
