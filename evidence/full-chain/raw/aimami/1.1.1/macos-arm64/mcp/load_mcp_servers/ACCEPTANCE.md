# load_mcp_servers — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: readyToImplement (dim1-5 all closed; dim6=acceptance-draft)

---

## happy_path

**Scenario**: Frontend calls `invoke("load_mcp_servers")`. At least one `[mcp_servers.<name>]` section exists in CODEX_HOME/config.toml. `bootstrap-cache.json` exists (or is absent).

Input: `{}` (no args)

Expected output:
```json
{
  "tag": 10,
  "data": {
    "items": [
      {
        "name": "<server_name>",
        "url": "<url_or_command>",
        "description": "<desc_or_null>",
        "type": "<type_or_null>",
        "args": [],
        "env": {}
      }
    ],
    "profile": "<profile_string_or_empty>"
  }
}
```
- Items are sorted ascending by server name (driftsort_main / insertion_sort_shift_left, stable).
- Response tag is 10 (CoreEnvelope Ok discriminant).
- On success, `CODEX_HOME/bootstrap-cache.json` is read and then rewritten (merged BootstrapStatePayload.mcp_servers slot at offset +792 updated). Write is single-shot (no atomic rename).
- If `bootstrap-cache.json` does not exist before the call, it is created.

**side_effect_asserts**:
1. `CODEX_HOME/bootstrap-cache.json` is written after every successful parse (fs::write).
2. The written file contains valid JSON with keys: `mcp_servers` slot populated with the returned server list.
3. The `mcp_servers` field in `bootstrap-cache.json` matches the response `data.items` (modulo JSON serialisation ordering).
4. Pre-existing fields in `bootstrap-cache.json` (e.g., `accounts`, `skills`) are preserved (read-merge-write, not overwrite).
5. Write failure is silent: if the write errors, the IPC response is still `Ok(payload)` with the parsed server list.

---

## boundary / error paths

| Trigger | Expected error / behaviour |
|---------|---------------------------|
| `config.toml` absent or unreadable | `CoreEnvelope::err` — tag `0x8000000000000000`; `code=2` (IoError); message from `std::io::Error::Display` |
| `[mcp_servers.*]` section absent (empty config) | `CoreEnvelope::ok` with `data.items=[]` — empty list, no error |
| TOML line has unknown key | Key silently skipped (custom line parser, no `serde` schema) |
| `store_bootstrap_mcp_servers` → `CodexPaths::ensure_directories` fails | Store error tag=2 — **dropped** by command; IPC still returns `Ok(payload)` |
| `store_bootstrap_mcp_servers` → `serde_json::to_vec` fails | Store error tag=3 — **dropped** by command; IPC still returns `Ok(payload)` |
| `store_bootstrap_mcp_servers` → `fs::write` fails | Store error tag=2 — **dropped** by command; IPC still returns `Ok(payload)` |
| Repository Mutex poisoned | `CoreEnvelope::err`, error string = Rust mutex poison message |

---

## side_effect_asserts

1. **bootstrap-cache.json write** (new in 1.1.1): after any successful `load_mcp_servers` call, `CODEX_HOME/bootstrap-cache.json` file mtime advances and content changes to include updated `mcp_servers`.
2. **No other fs writes**: config.toml is read-only; no other files modified on this path.
3. **No network**: no HTTP, no sidecar, no IPC to external processes.
4. **Mutex released**: even on store failure, the repository mutex is released.

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Parse returns sorted server list for valid config.toml | unit (Rust) | core::mcp::load_mcp_servers is pure parse; testable with mock fs |
| bootstrap-cache.json is written / updated after successful parse | e2e (Tauri) | side-effect requires real fs + IPC round-trip |
| bootstrap-cache.json pre-existing fields preserved (merge not overwrite) | e2e (Tauri) | requires writing a partial bootstrap-cache.json, calling invoke, reading file |
| Store errors are silent (Ok returned even when cache write fails) | unit (Rust) / manual | inject store error via permissions on bootstrap-cache.json path, verify Ok response |
| Empty server list returned for config.toml with no mcp_servers sections | unit (Rust) | pure parse case |
| IoError returned for unreadable config.toml | unit (Rust) | inject ENOENT or EACCES |
| Items sorted ascending by name | unit (Rust) | construct multi-server config, assert order |

---

## dim6_basis
Evidence: pseudocode `commands_mcp_load_mcp_servers.c` confirms fire-and-forget drop_in_place::<CoreError> on store result; `repository_store_bootstrap_mcp_servers.c` confirms read-merge-write to bootstrap-cache.json; evidence.md §3.3 documents all error tags; interfaces/dto.md documents BootstrapStatePayload offset +792.
