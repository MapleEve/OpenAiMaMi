# System Diff — sessions-analytics (AiMaMi 1.2.3)

## Platform Artifacts

- macOS-arm64: primary evidence, `raw/aimami/1.2.3/macos-arm64/{commands/sessions,core/sessions,core/session_analytics,core/analytics}/`. Directory split follows Rust module tree: `commands::sessions` (tauri command wrappers) separate from `core::sessions`/`core::session_analytics`/`core::analytics` (business logic).
- Windows-x64: raw evidence located this pass at `raw/aimami/1.2.3/windows-x64/{sessions,analytics,commands/analytics}/` (36 `.c` files). **Directory layout differs from macOS**: Windows uses flat top-level `sessions/` and `analytics/` dirs that mix command-wrapper and core-layer functions together (e.g. `windows-x64/sessions/ida/pseudocode/load_sessions_0_0x14073a730.c` is explicitly headed `// module: codexmate_lib/core/sessions`, i.e. a core-layer function filed in the flat `sessions/` dir), whereas macOS keeps a strict `commands/` vs `core/` split. This is most plausibly a **reverse-evidence-organization artifact of whichever pass produced each platform's raw tree**, not a claim about actual binary/source layout difference — not treated as a product behavior difference.
- Windows DOES have a discrete `commands/analytics/` directory with all 5 `load_*_analytics` commands individually named (`load_change_analytics_0x140cd3d40.c` etc.), each headed `// module src/commands/analytics.rs ... tauri command handler = <name> | mapped via command-name string xref (win-native, ground-truth)`. This is the strongest evidence in this package that `commands::analytics` is a genuine upstream Rust source module — not confirmed on macOS this pass (evidence-collection gap, not confirmed-absent).

## Frontend IPC / Control-flow

- Both platforms share the same frontend bundle (Tauri app, single JS bundle `index-B40jKs17.js` per `ipc-contracts.jsonl`) — frontend control-flow is platform-independent by construction; the two frontend page docs (`mcp-sessions-settings-skills-frontend.md` §2, `analytics-maintenance-autoswitch-frontend.md` §1) apply to both platforms without separate Windows frontend evidence needed.
- 9 in-scope commands invoked: `load_sessions`, `delete_sessions`, `export_session_markdown`, `migrate_session_worktree` (SessionsPage); `load_session_analytics`, `load_token_analytics`, `load_tool_analytics`, `load_change_analytics`, `load_usage_analytics` (AnalyticsPanel).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- macOS: core business-logic layer fully reversed and non-failed for all 9 commands (56 unique-VA functions), reaching `sqlite3`/`std::fs`/`walkdir` leaves. Command-wrapper layer only resolved for 3/9 (`delete_sessions`/`export_session_markdown`/`migrate_session_worktree`).
- Windows: command-wrapper layer resolved for `load_sessions`/`delete_sessions`/`migrate_session_worktree` (flat `sessions/` dir) and all 5 analytics commands (`commands/analytics/` dir); no Windows-named counterpart located for `export_session_markdown` this pass (may be among the 9 unnamed `sub_*.c` files in `windows-x64/sessions/ida/pseudocode/` — not investigated further).
- Neither platform has a systematic per-command call-tree-to-implementation-leaf reduction document for 1.2.3 (dim3 partial on both, matching the pre-existing macos-1.2.3-relay package's own dim3 caveat).

## Interface / Error / Boundary

Not closed on either platform this pass (dim4).

## Gate Leaf

macOS: 9/9 `consumerStartReady`, 0 `strictImplementationUse`, 0 `readyToImplement`. Windows: not gated this pass (evidence located, not analyzed).

## Plugin / Capability

Not applicable to this module scope (sessions-analytics has no plugin/capability surface distinct from core commands).

## OTA / Package

Not investigated this pass; out of scope for sessions-analytics module distillation.

## Resource / Binary Surface

macOS binary SHA not independently recomputed this pass (see manifest.json binary.sha256 note). Windows binary not identified/hashed this pass either.

## Unknown

- Whether macOS genuinely lacks discrete `commands::analytics` symbols in the binary, or whether they exist but were simply never captured into a `commands/analytics/` raw directory (evidence-collection gap vs. genuine folding) — Unknown, next step is a targeted macOS search/decompile pass cross-referencing the Windows-confirmed symbol names.
- Windows counterpart for `export_session_markdown` — Unknown, not located among named files this pass.
- `Bs()` SessionsPage bento-stats query command binding — Unknown.
- Full Windows dim1-dim6 gate status — Unknown, evidence exists but unanalyzed.
