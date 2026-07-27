# System Diff — AiMaMi 1.2.3 accounts (windows-x64)

## Platform Artifacts

- Binary: Windows x64 PE `AiMaMi.1.2.3 win64.exe`; sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (re-hashed this session against `raw/binary/AiMaMi.1.2.3 win64.exe`, 33,667,584 bytes; matches the value already recorded in `windows-1.2.3-relay/manifest.json`, confirming same binary batch).
- macOS sibling: `raw/aimami/1.2.3/macos-arm64/AiMaMi.app` (see `macos-1.2.3-accounts/SYSTEM-DIFF.md` for its own sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`). Not independently re-verified by this package beyond the frontend-asset hash check below.

## Frontend IPC / Control-flow

- 1.2.3 total IPC command count on win: **131** (own-platform extraction, `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`, independently counted this session via `wc -l`) — matches macOS's own count of 131 exactly.
- `accounts-page-GdJYDnGj.js`: **byte-identical between platforms**. `raw/aimami/1.2.3/macos-arm64/dumped/assets/accounts-page-GdJYDnGj.js` (67,080 bytes) and `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/accounts-page-GdJYDnGj.js` (67,080 bytes) both hash to `09336d32548087c04de52882ad2b37d9236a26678e7b53483bd1dd22c3d10c55` — verified via `shasum -a 256` + `diff` this session. This is the frontend web bundle Tauri ships identically on both platforms (not a claim about native/backend behavior parity).
- Accounts-relevant commands identified by keyword scan of win's own `ipc-contracts.jsonl` (`account`/`oauth`/`auth`/`switch`/`logout`/`snapshot` substrings): 20 candidates, narrowed to the same 12 in-scope accounts-domain command names as `macos-1.2.3-accounts` (auto-switch cluster and `commands::relay`-owned `get_codex_router_auth_readiness`/`set_codex_router_no_account_mode` excluded on the same physical-ownership grounds documented there).
- Because the JS bytes are identical, the interaction map documented in `macos-1.2.3-accounts`'s `accounts-frontend.md` (8 confirmed call-sites / 4 not-found-in-page) necessarily applies to win as well — this is evidence reuse of a proven-identical artifact, not cross-platform behavioral extrapolation.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- In-scope file count: **72** (26 core across 4 modules: account_io 1 / auth 3 / oauth_login 12 / oauth_refresh 10, plus commands/accounts 42, plus 4 accounts-relevant named commands inside the codexmate_lib catch-all directory). **5 of 72 are Hex-Rays-decompile-failed** (disassembly-only): `switch_account_and_restart_codex`, `refresh_single_account_usage`, `import_accounts_from_file`, `switch_account`, `refresh_usage_snapshot` — all fail with the identical error class `HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x... for case N` (values of N and the target address differ per-function but the failure mode is identical: Hex-Rays cannot resolve a jump-table-based async dispatch `switch` in these specific PE-compiled functions).
- **Structural gap vs macOS**: `account_coordination` (10 files on mac) and `account_metadata` (7 files on mac) have **zero** files in the win raw tree; confirmed absent by symbol-name grep across the ENTIRE windows-x64 tree (not just the expected directories), 0 hits for `FileLock`/`AccountDomainLock`/`AccountSnapshotLock`/`fetch_subscription_metadata`/`try_lock_exclusive`.
- `commands/account_io` and `commands/account_oauth` (separate directories on mac, 3 and 5 files) do not exist as separate directories on win; their command-equivalent functions (`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import`/`begin_chatgpt_oauth_login`) are instead found inside the catch-all `codexmate_lib` directory (32 files spanning many unrelated domains: voice, skills, debug-bundle, tray).
- `core::repository` (72 files on win, vs 99 on mac; **explicitly in-scope as supplementary cross-reference, not primary**) contains 8 functions with explicit provenance comments of the form `win 1.2.3 | = mac codexmate_lib::core::repository::<Symbol> | 跨平台字符串签名匹配(名↔函数一致)`: `auto_switch_config`, `hashed_account_snapshot_path` (note: this win function is filed under `core::repository` but its comment maps it to mac's `core::auth::hashed_account_snapshot_path` — a genuine cross-platform module-boundary difference, not an error), `persist_registry`, `remove_accounts_0` (= mac `Repository::remove_accounts`), `switch_account_0` (= mac `Repository::switch_account`), `rollback` (= mac `SnapshotQuarantine::rollback`), `recover_account_removal_quarantine`, `remove_account_backup_files`. These are real, grounded cross-platform equivalence markers left by a prior pass (methodology: `WIN-1.2.1-MODULE-RECOVERY.md`'s panic-Location/call-graph attribution plus a separate cross-platform string-signature matching step), read but not independently re-derived by this session.
- `core::models` on win: only **3 files** (`error_hint`, `normalize_relay_models` [carries the same cross-platform annotation, mapping to mac's `core::relay::models::normalize_relay_models` — a relay-domain function, not accounts], and 1 unnamed `sub_`). **Zero Account\*/Logout\*/Remove\*/Switch\*/OauthLogin\* DTO glue exists in win's raw tree** — a materially weaker dim4 position than mac's 175-file `core::models`.
- Destructive operations confirmed within in-scope/cross-referenced files: `remove_accounts_0` (= mac `Repository::remove_accounts`) delegates to the same two-phase quarantine-then-purge pattern as mac (`recover_account_removal_quarantine`/`rollback` present as separate named win functions with matching cross-platform annotations); this package did not re-read the full function bodies beyond header/line-count verification this pass.

## Interface / Error / Boundary

Weaker than mac (dim4 partial-weak, see gate-report.json). No struct-field-level DTO evidence available in win's own raw tree; only argKeys-level parameter names from win's own `ipc-contracts.jsonl` extraction (win-native, not borrowed from mac).

## Gate Leaf

consumerStartReady 4/12; consumerStartBlocked 8/12; strictImplementationUse 0/12; readyToImplement 0/12. See gate-report.json.

## Plugin / Capability

Not in scope for this accounts-only package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

commands/accounts: 42 `.c` files (largest win commands module reviewed this pass, mirroring mac's "heaviest state machine" characterization — 4 of its 8 ground-truth-named tauri command handlers are Hex-Rays-decompile-failed). codexmate_lib: 32 files total (catch-all, spans voice/skills/debug/tray/accounts domains); 4 are accounts-relevant, 1 of those 4 (`import_accounts_from_file`) is Hex-Rays-decompile-failed.

## Unknown

- `account_coordination`/`account_metadata` win-native evidence: entirely absent, not extrapolated from macOS.
- `cancel_chatgpt_oauth_login` backend wrapper: not found anywhere in the win raw tree by name; owner unresolved.
- 5 Hex-Rays-decompile-failed command wrappers: genuine tool-ceiling this pass, no breakthrough attempted (no live IDA MCP access).
- Field-level interface/DTO and test/acceptance mapping: not extracted for 1.2.3 win accounts (dim4/dim6 gaps, dim4 weaker than mac's own incomplete dim4).
- Whether the `win 1.2.1`-provenance comments on many in-scope files represent a validly-migrated-forward (RULE9-compliant) evidence basis for 1.2.3, or an unverified carryover assumption from a prior pass: not independently verified by this package.
