# System Diff — sessions-analytics (AiMaMi 1.2.3, windows-x64 primary)

## Platform Artifacts

- windows-x64: `raw/aimami/1.2.3/windows-x64/{sessions,analytics,commands/analytics}/` (36 files, re-verified live this pass) + `codexmate_lib/` (3 session-related files, newly pointer-added this pass) + `commands/` root (1 session-related file, newly pointer-added this pass) = 40 total.
- macOS-arm64 (sibling package `macos-1.2.3-sessions-analytics/`): `{commands/sessions,core/sessions,core/session_analytics,core/analytics}/` (64 files / 56 unique VA after dedup).
- Binary identity: server_health this pass confirmed `idb_path=E:\binary\AiMaMi.1.2.3 win64.exe.i64`, `input_path=E:\binary\AiMaMi.1.2.3 win64.exe`, `imagebase=0x140000000`. SHA-256 not independently recomputed this pass (see `raw/binary/` SOT).

## Command-Wrapper Layer: Windows is MORE complete than macOS

| Command | macOS wrapper | Windows wrapper |
|---|---|---|
| `load_sessions` | missing (no named commands::sessions wrapper) | **found this pass**: `codexmate_lib/load_sessions_0x140c90f80.c` (656 lines, module src/lib.rs, ground-truth) |
| `delete_sessions` | `commands/sessions/delete_sessions` (named) | `commands/delete_sessions_0x14016c800.c` (167 lines, module codexmate_lib/commands, ground-truth) |
| `export_session_markdown` | `commands/sessions/export_session_markdown` (named) | **found this pass**: `codexmate_lib/export_session_markdown_0x140c8eb30.c` (953 lines, module src/lib.rs, ground-truth) |
| `migrate_session_worktree` | `commands/sessions/migrate_session_worktree` (named) | **found this pass**: `codexmate_lib/migrate_session_worktree_0x140c8cd60.c` (807 lines, module src/lib.rs, ground-truth) |
| `load_change_analytics` | missing | `commands/analytics/load_change_analytics_0x140cd3d40.c` (module src/commands/analytics.rs, ground-truth) |
| `load_session_analytics` | missing | `commands/analytics/load_session_analytics_0x140cd99b0.c` |
| `load_token_analytics` | missing | `commands/analytics/load_token_analytics_0x140cd79e0.c` |
| `load_tool_analytics` | missing | `commands/analytics/load_tool_analytics_0x140cd5b90.c` |
| `load_usage_analytics` | missing | `commands/analytics/load_usage_analytics_0x140cde3c0.c` |

Windows dim2-wrapper is 9/9 closed vs macOS's 3/9. This is NOT extrapolated to close the macOS gap (platform-independence red line) — it only tells the next macOS producer pass where to look (module `src/lib.rs` top-level command handlers + a discrete `commands::analytics` module both genuinely exist in the upstream Rust source per this Windows evidence).

## Core (Business-Logic) Layer: Windows is WEAKER than macOS for analytics

- macOS `core::session_analytics` has 8 separately-named functions: `compute_change_analytics`/`compute_session_analytics`/`compute_token_analytics`/`compute_tool_analytics`/`parse_all_sessions`/`range_to_cutoff`/`timestamp_to_date`/`visit_dir`.
- Windows `analytics/` has only 1 named core function (`compute_usage_analytics`) plus `log` (helper) plus 2 unnamed `sub_*` (already module-attributed to `src/core/analytics.rs` via a prior call-graph-propagation dirtree pass, per live `decompile()` header check this pass, but not business-renamed).
- Live `callees()` trace of `load_change_analytics` (0x140cd3d40) this pass: all 32 direct callees are unnamed `sub_*`, several of which are already filed as raw evidence inside `commands/analytics/` itself (e.g. `sub_14089E7F0`, `sub_140BEDB50`, `sub_140BE6930`). This suggests the Windows build either inlines the compute-layer logic directly into each command wrapper, or spreads it across small unnamed helpers, rather than factoring it into a single separately-named function per analytics type the way macOS does. **Not confirmed either way this pass** — recorded as Unknown, not assumed.
- `export_session_markdown`'s core-layer counterpart is similarly not located on Windows (macOS has one, embedded in its 156-line `core::sessions` implementation referenced from a thin 20-line wrapper).

## sessions/ core layer: symmetric with macOS at the naming level, asymmetric at the call-chain level

- Windows `sessions/` has the same 3 named core functions as macOS's `core::sessions` subset relevant to these 3 commands: `delete_sessions_0`/`load_sessions_0`/`migrate_session_worktree_0` (all header-confirmed `module src/core/sessions.rs`, cross-platform-symbol-matched via `// win 1.2.3 | = mac codexmate_lib::core::sessions::<name>` comment already present in the raw evidence from a prior pass).
- However this pass's live `callees()`/`xrefs_to()` calls show the Windows wrapper→core call edge is NOT direct for any of the 3 — at least one intermediate unnamed hop exists (confirmed: `sub_14074F3F0` is a direct caller of `load_sessions_0`). Whether macOS has the same indirection was not re-checked this pass (out of scope, macOS package already closed its own dim3 to "reaches real leaves" without documenting hop count).

## Frontend IPC / Control-flow

- Both platforms share the same frontend bundle (single Tauri JS bundle per `ipc-contracts.jsonl`) — command-name binding independently re-verified via live grep against the Windows copy of `ipc-contracts.jsonl` this pass (131 lines), all 9 in-scope commands found.
- No Windows-specific frontend page-level markdown doc exists; this package reuses the macOS `SessionsPage`/`AnalyticsPanel` page docs under the verified-shared-bundle assumption at the command-name level only (not independently re-derived at component-tree/state-model level for Windows this pass).

## Interface / Error / Boundary

Not closed on either platform (dim4).

## Gate Leaf

Windows: 9/9 `consumerStartReady`, 0 `strictImplementationUse`, 0 `readyToImplement`. Same tier as macOS sibling, but the *basis* differs (Windows closed via wrapper-layer 9/9; macOS closed via core-layer strength + wrapper-layer 3/9).

## Plugin / Capability

Not applicable to this module scope.

## OTA / Package

Not investigated this pass; out of scope.

## Resource / Binary Surface

Windows binary identity confirmed via `server_health` (imagebase `0x140000000`, module `AiMaMi.1.2.3 win64.exe`) but SHA-256 not independently recomputed this pass.

## Unknown

- Whether Windows genuinely lacks separately-factored `compute_*_analytics` core functions, or whether they exist among the 26 unnamed `sub_*` but were never renamed — Unknown, next step is completing the panic-Location/call-graph renaming pass (red line 24) on the specific callees already identified via this pass's `callees()` trace.
- Windows counterpart of `export_session_markdown`'s core-layer logic — Unknown, not located this pass.
- The intermediate hop(s) between the 3 sessions command wrappers and their core `_0` functions — Unknown, one hop confirmed (`sub_14074F3F0`) but not decompiled/continued this pass.
- Whether macOS has the same wrapper→core indirection pattern — not re-checked this pass, Unknown.
- `Bs()` SessionsPage bento-stats query command binding — inherited Unknown from macOS sibling, not re-investigated.
- Full Windows dim1 (component-tree/state-model)/dim4/dim6 gate status — Unknown, not produced this pass.
