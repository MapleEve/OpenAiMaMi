# Interface: load_sessions — AiMaMi 1.1.1 macOS ARM64

**session**: <审计会话>
**source_binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**delta_vs_109**: NO CHANGE — argKeys/DTO/error/side-effects identical to 1.0.9

---

## Request DTO

```
argKeys: []  (zero arguments)
```

No frontend arguments. Command reads from local filesystem (CodexPaths) and SQLite DB.

**Confirmed**: ipc-contracts.jsonl (1.0.9 baseline) + 1.1.1 IPC blob at 0x1010e7311 (no arg deserializer callees in core, no serde::Deserialize call for args).

---

## Response DTO

```
CoreEnvelope<SessionListPayload>

// Success (discriminant = 0x8000000000000016 / ok variant):
{
  ok: true,
  data: SessionListPayload
}

// SessionListPayload (FLAT layout, from 1.0.9 canonical + type name drop shim):
{
  items: CodexSession[],   // Vec<CodexSession>
  total: i32               // count of items returned
}

// CodexSession (15 fields, from 1.0.9 byte-confirmed):
{
  id: String,                    // SQLite column: id
  fileSize: i64,                 // computed from fs::metadata (NOT a SQL column directly)
  filePath: String,              // constructed from CodexPaths + id
  threadName: String,            // SQL column: title (truncated via truncate_chars)
  updatedAt: String,             // SQL column: updated_at (RFC3339 parsed then re-serialized)
  projectName: String,           // derived from cwd (last path component)
  projectPath: String,           // SQL column: cwd (normalized)
  parentSessionId: Option<String>, // from rollout index HashMap lookup
  depth: i32,                    // from rollout index (subagent spawn depth)
  agentNickname: Option<String>, // SQL column: agent_nickname
  agentRole: Option<String>,     // SQL column: agent_role
  isArchived: bool,              // SQL column: archived
  excerpt: Option<String>,       // derived from first line of session file (truncated)
  projectPathMissing: bool,      // computed: !cwd.exists()
  isConversationThread: bool     // derived from source filter: source=="conversation_thread"
}

// Error (discriminant = 0x8000000000000000 / err variant):
{
  ok: false,
  error: {
    code: 9,       // serde/IO/rusqlite failure
    message: String
  }
}
```

---

## Error Paths

| Error | Trigger | Code | User Visible |
|-------|---------|------|-------------|
| DB open failure | rusqlite::Connection::open_with_flags fails | 9 | Err envelope |
| DB busy timeout | SQLite locked for >5000ms | 9 | Err envelope |
| SQL prepare failure | rusqlite::prepare_with_flags fails | 9 | Err envelope |
| Mutex poison | std::sync::Mutex poisoned (panic) | panic | unhandled crash |
| IO read failure | rollout jsonl file unreadable | silent skip | (rollout index missing, not an error) |
| Path UTF-8 decode | cwd non-UTF8 | silent skip (from_utf8_lossy) | (session excluded) |

---

## Side Effects

**READ-ONLY**:
1. `std::fs::read_dir` recursion under 2 CodexPaths roots (rollout index scan)
2. `std::fs::read_to_string` on rollout-*.jsonl files
3. `std::fs::metadata` per directory entry (mtime check)
4. `rusqlite::Connection::open_with_flags(READONLY|URI)` on SQLite DB
5. `sqlite3_step` SELECT query on `threads` table
6. `std::fs::metadata` for `projectPathMissing` check per session

**NO writes**: no `fs::write`, no `sqlite3_exec(INSERT/UPDATE/DELETE)`, no HTTP, no sidecar spawn.

---

## SQL Query (byte-confirmed at 0x101159710)

```sql
SELECT id, title, updated_at, cwd, archived, agent_nickname, agent_role, source, model_provider FROM threads
```

9 columns returned. No WHERE clause. No LIMIT. All threads returned, then filtered by `is_codex_visible_session`.

---

## Platform Scope

- macOS ARM64: confirmed (this session)
- Windows x64: Unknown (separate producer task required)
- Platform note: CodexPaths construction is platform-dependent (macOS: `~/.codex` + XDG); Windows: `%APPDATA%\codex` + registry query

---

## Visibility Filter Logic (is_codex_visible_session @0x100729230)

1. **Dedup by cwd**: HashMap<cwd, ()> — skip session if cwd already seen
2. **source field check** (len-based):
   - len==19: XOR against xmmword_101157680/101157690 → likely `"conversation_thread"` → `isConversationThread=true`
   - len==6: case-insensitive chars o-p-e-n-a-i → `"openai"` → excluded
   - len==6: XOR `0x6F637376 ^ 0x616D6961 | 0x6564 ^ 0x3169` → `"vscode"` → excluded
   - other sources: included (fallthrough)
3. **Rollout index lookup**: check if cwd key exists in HashMap → populate parentSessionId/depth
4. **Parent path exclusion**: normalize cwd (trim trailing /\), strip last component, check parent not in dedup set
5. **Recursive call**: for nested subagent sessions, recurse with parent path

---

## Delta vs 1.0.9

| Dimension | 1.0.9 | 1.1.1 | Change |
|-----------|-------|-------|--------|
| argKeys | [] | [] | NO CHANGE |
| SQL query | identical | identical | NO CHANGE |
| Response type | CoreEnvelope<SessionListPayload> | CoreEnvelope<SessionListPayload> | NO CHANGE |
| DTO layout | FLAT {items,total} | FLAT {items,total} | NO CHANGE |
| CodexSession fields | 15 fields | 15 fields (inferred) | NO CHANGE |
| Side effects | READ-ONLY | READ-ONLY | NO CHANGE |
| Error codes | code 9 | code 9 | NO CHANGE |
| Rollout JSON paths | /payload/cwd, /payload/timestamp | + /payload/source/subagent/thread_spawn/{parent_thread_id,depth} | POSSIBLE EXPANSION |
| VAs | 0x1005716d0 (core) | 0x100721c70 (core) | recompile only |

**classification**: delta_nil for interface/DTO/error/side-effects; possible rollout schema expansion (non-breaking addition)
