# Evidence: restore_no_account_model_threads

- **Function**: `codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads`
- **Owner EA**: 0x1008e6080
- **Closure EA**: 0x1008e76a0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/restore_no_account_model_threads_0x1008e6080.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (21 unique):
  - `load_no_account_model_restore_journal`
  - `CodexPaths::all_codex_state_dbs`
  - `std::sys::fs::metadata`
  - `open_codex_db_for_convergence`
  - `read_thread_columns`
  - `rusqlite::Connection::prepare_with_flags`
  - `rusqlite::statement::Statement::query_row`
  - `rusqlite::Connection::execute`
  - `patch_no_account_model_restore_rollout`
  - `checkpoint_after_committed_write`
  - `remove_no_account_model_restore_journal`
  - `revert_rollout_patch`
  - `app_event`
  - `core::str::trim_matches`
  - `format_inner`
  - `drop_in_place<rusqlite::Connection>`
  - `drop_in_place<StoredLlmConfig>`
  - `restore_no_account_model_threads::{{closure}}`
  - `HashMap::insert`
  - `__rust_alloc`
  - `__rust_dealloc`
- **Call-tree edges**: 18
- **Terminated reason**: `persistence_commit`
- **Interface type**: internal_function
- **DTO fields**: {"input": "CodexPaths context (auth_file path, state_db paths)", "output": "Result<RestoreStats, CoreError>"}
- **Side effects**:
  - ⚠ PERSISTENCE: opens SQLite DBs, executes UPDATE threads SET model=?2 WHERE id=?1
  - ⚠ Reads/writes no_account_model_restore_journal
  - ⚠ checkpoint_after_committed_write on each restored DB

## Summary

Restores no-account model threads: loads restore journal, iterates all Codex state DBs, queries threads for no-account model entries, patches rollout metadata, updates thread model column via SQL UPDATE, checkpoints, removes journal. Closure variant (0x1008e76a0) formats error messages with thread ID and model name.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
