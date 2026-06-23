# load_sessions — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: acceptance_draft_only
## blocked_dim: dim1 (partial — no explicit 1.1.1 frontend CCF trace; accepted_unknown consistent with 1.0.9 baseline only), dim5_win (Unknown)

---

## happy_path (producer-acceptance-draft)

**Scenario**: `invoke("load_sessions")` from frontend. SQLite DB accessible, rollout-*.jsonl files present in one or both CodexPaths roots.

Input: `{}` (no args)

Expected output:
```json
{
  "ok": true,
  "data": {
    "items": [
      {
        "id": "<session_id_string>",
        "fileSize": 12345,
        "filePath": "/path/to/session/file",
        "threadName": "<truncated_title>",
        "updatedAt": "<iso8601_string>",
        "projectName": "<last_path_component_of_cwd>",
        "projectPath": "<cwd_normalized>",
        "parentSessionId": "<uuid_or_null>",
        "depth": 0,
        "agentNickname": null,
        "agentRole": null,
        "isArchived": false,
        "excerpt": null,
        "projectPathMissing": false,
        "isConversationThread": false
      }
    ],
    "total": 1
  }
}
```
- Items filtered by `is_codex_visible_session`: source=="openai" and source=="vscode" excluded.
- Items deduped by cwd.
- `parentSessionId` populated from rollout-*.jsonl index if subagent spawn data available.
- `isConversationThread=true` only for sessions where `source=="conversation_thread"` (19-char XOR match).
- SQL: `SELECT id, title, updated_at, cwd, archived, agent_nickname, agent_role, source, model_provider FROM threads` — no WHERE, no LIMIT.

**side_effect_asserts**:
1. READ-ONLY: no fs::write, no sqlite INSERT/UPDATE/DELETE, no HTTP, no sidecar spawn.
2. SQLite opened with `READONLY|URI` flags; `busy_timeout=5000ms`.
3. Rollout-*.jsonl files under both CodexPaths roots are traversed (read_dir + open each matching file).

---

## boundary / error paths

| Trigger | Expected error / behaviour |
|---------|---------------------------|
| SQLite DB absent / unreadable | `CoreEnvelope::err`, code=9 |
| SQLite locked >5000ms | `CoreEnvelope::err`, code=9 (busy_timeout) |
| Non-UTF-8 cwd in session | Session silently excluded (`from_utf8_lossy` lossy skip) |
| Rollout jsonl file unreadable | Silent skip (rollout index missing, not an error) |
| Mutex poisoned | `panic!` path (unhandled) |
| source=="openai" or source=="vscode" | Session excluded from items list |

---

## side_effect_asserts

1. No writes to any file or database.
2. SQLite file opened with read-only flag; no modifications possible.
3. Filesystem access limited to: SQLite DB open, rollout-*.jsonl reads, cwd path existence checks.

---

## test_mapping (producer-acceptance-draft)

| Test | Type | Rationale |
|------|------|-----------|
| Returns flat {items, total} with correct CodexSession fields | e2e (Tauri) | requires seeded SQLite DB + rollout files |
| SQL query is read-only SELECT | unit (Rust) | mock rusqlite; verify no INSERT/UPDATE executed |
| source=="openai" sessions excluded | unit (Rust) | seed DB row with source="openai", assert not in items |
| isConversationThread=true for source=="conversation_thread" | unit (Rust) | seed DB row |
| parentSessionId populated from rollout index | unit (Rust) | create rollout-*.jsonl with subagent spawn data |
| SQLite busy timeout triggers error code 9 | manual / e2e | hold write lock on SQLite, call invoke |
| Empty result on empty threads table | e2e (Tauri) | empty DB, assert items=[], total=0 |

---

## dim6_basis
Evidence: load_sessions/evidence.md §Confirmed items 4 (SQL byte-confirmed at 0x101159710), 7 (open_codex_db), 10 (is_codex_visible_session XOR patterns), 12 (rusqlite::Rows::advance); interfaces/load_sessions_interface.md documents full 15-field CodexSession layout and READ-ONLY side-effect class.

Note: dim1 accepted_unknown (1.0.9 baseline CCF, no explicit 1.1.1 frontend trace recovered). dim5_win Unknown. Not eligible for readyToImplement until both are resolved.
