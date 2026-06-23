# Evidence: upsert_mcp_server — AiMaMi 1.1.1 macOS arm64

**Session**: wf-aimami111-delta-20260617-repair
**Machine**: <本地机器>
**Date**: 2026-06-17
**Binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**Gate level**: A/B (owner confirmed, full call tree depth ≥5, not gate-promotion)

---

## Confirmed

1. **Two owner functions identified**: commands layer entry `0x10072ae00` (size 0xa77) and core impl `0x1005a0d80` (size 0x1c3a). Both confirmed via `func_query` name_regex="upsert_mcp" returning mangled symbols with `codexmate_lib::commands::mcp` and `codexmate_lib::core::mcp` namespaces respectively.

2. **§8b two-marker invariant confirmed intact in 1.1.1**: Binary contains exact string literals at `anon.c7777ab3e3e082d25560615475f0500f.309` (60 bytes = `# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)...` concatenated with codex-router) and `anon.c7777ab3e3e082d25560615475f0500f.310` (64 bytes = `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)`). The LABEL_121 inner loop in `core::mcp::upsert_mcp_server` checks BOTH markers before determining splice boundary — both relay-managed and codex-router-top blocks are preserved on upsert.

3. **Atomic write path confirmed**: `save_config_text` (0x1005a03d0) calls `write_atomic` (0x10041e960) which follows the pattern: mkdir parent → generate `<pid>-<uuid>` tmp name → OpenOptions (mode 0o666) → write_all → sync_data → rename → sync_parent_dir. On rename failure, tmp file is deleted. This is a 5-step atomic sequence identical to 1.0.9 pattern.

4. **Call tree fully traced to depth 5+**: Commands→Core→(load_config_text, parse_mcp_document, insert_mcp_block, save_config_text, load_mcp_servers)→write_atomic→(DirBuilder, rename, sync_data, close$NOCANCEL). Terminated at stdlib/syscall leaves.

5. **McpServerSummary size = 224 bytes**: Confirmed by `224 * v260[3]` allocation arithmetic in `load_mcp_servers` call path within `core::mcp::upsert_mcp_server`. Alignment=8 (confirmed by dealloc calls).

6. **Mutex protection**: Commands layer wraps the entire operation in a OnceBox-initialized Unix mutex (`std::sys::pal::unix::sync::mutex::Mutex::lock/unlock`). This prevents concurrent config.toml corruption.

7. **Error propagation**: All error paths return `CoreError` via `CoreError::fmt` Display implementation (0x10058fda0). The commands layer converts to string via `format!` before returning the Err variant of `Result<McpServerSummary, String>`.

8. **Config path handling**: The path is passed as `_QWORD **a2` (ptr-to-ptr+len), formatted via `std::path::Display` formatter (0x100f45e50) to produce the display string used for error messages. The actual path is passed directly to `load_config_text` and `save_config_text`.

9. **Server type enum**: Offset +217 in McpServerConfig is a u8 index into a lookup table at `dword_101154D10`/`qword_101154CF0`. The enabled flag at offset +216 is a u8 (0=false, 1=true), quoted as "true"/"false" literal via static string at `0x1010e8a44`.

10. **No async wrapper present**: Both functions are synchronous `__fastcall`. The previous session failure due to "async body/overload" was a mislabeled async shim issue — in 1.1.1 these commands are direct sync Tauri commands, not `.await` futures. The `async` attribute either was removed or these commands were always sync in the MCP module. No `::poll`/`::resume` wrapper found.

---

## Inferred

1. **`upsert` semantics**: The function is genuinely upsert (insert-or-update). The HashMap probe at LABEL_91+ either finds the existing server section and splices it (update path at LABEL_128/133) or calls `insert_mcp_block` at the managed-start sentinel position (insert path at LABEL_102). The `a5` bool parameter likely controls whether to error if server already exists vs silently overwrite.

2. **TOML line representation**: Config is processed as a `Vec<(String, ...)>` where each element is a line-triplet (ptr, len, capacity) — 24 bytes per entry. The `parse_mcp_document` returns a HashMap mapping section header strings to line index ranges.

3. **Env/headers HashMap iteration order**: Both env vars (offset +192) and HTTP headers (offset +144) are collected into sorted Vecs before TOML serialization (via `driftsort_main` or `insertion_sort_shift_left` depending on count threshold of 21). This means config.toml will have deterministic env/header ordering.

4. **`quote_toml` (0x10059dcd0)**: Used to quote server names and string values in TOML format. Called multiple times per upsert. Likely adds surrounding quotes and escapes special characters.

5. **`parse_mcp_section_header` (0x1005a3aa0)**: Parses `[section.name]` TOML header, returning the inner name as a borrowed or owned string. Used during document parsing to build the section index map.

---

## Unknown

1. **Exact `a5` bool semantics**: The `v30 = a5` / `v60 = a5` assignment feeds into the HashMap probe initialization (`v60 = 0x8000000000000000LL` = None-like initial state) but the precise meaning of `a5=1` vs `a5=0` for create/update behavior is not fully resolved from pseudocode alone. Likely: 0=create-only (error if exists), 1=update-or-create.

2. **`strip_toml_comment` (0x1005a3380)**: Used in `parse_mcp_document` to strip comments before trimming. Exact stripping logic (handles `#`, inline comments after values?) not decompiled in this session.

3. **McpServerSummary struct layout**: The 224-byte struct layout is confirmed by size but internal field layout not mapped. Fields likely include: name, server_type, url/command, args, env, headers, enabled, status/error fields. Needs separate decompile of `McpServerSummary::clone` (0x100605840) for full layout.

4. **`load_mcp_servers` (0x10059e470)**: Called twice — once on success (to return the updated summary) and once inline in the commands layer post-upsert. Not decompiled in detail this session; known to return `Vec<McpServerSummary>` (224 bytes each).

5. **`CoreEnvelope::ok` (0x100555ca0)**: Wraps a value into the success variant. Internal tag/discriminant value not confirmed (likely `0` or platform-specific sentinel). The error variant uses `0x8000000000000000` as the success-sentinel for the error path.

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate tier**: readyToImplement (dim6=acceptance-draft)

### Happy Path (INSERT)
- Input: `{name:"my-server", type:"sse", url:"https://example.com/sse", args:[], headers:{}, environment:{}, enabled:true}`
- Expected: `CoreEnvelope::ok(McpServerSummary)` — config.toml updated with new [server.my-server] block; both §8b markers preserved; env/header keys sorted in TOML output

### Error Paths
| Trigger | Expected |
|---------|----------|
| config.toml not readable | CoreError from load_config_text |
| splice/insert_mcp_block fails | CoreError |
| write_atomic fails | CoreError; original config.toml unchanged (tmp+rename atomicity) |
| load_mcp_servers fails after write | CoreError (write already committed) |

### Side-Effect Asserts
- config.toml written atomically (tmp rename)
- §8b markers BOTH preserved: "aimami-relay managed start" + "codex-router top start"
- env/header keys sorted (driftsort_main or insertion_sort_shift_left based on count)
- Mutex prevents concurrent corruption

### Test Mapping
- `e2e`: happy_path_insert_new_server, happy_path_update_existing, marker_preservation
- `unit`: toml_special_char_quoting, env_header_sort_order, atomic_write_failure_recovery
- `explicit_non_automatable_accept`: a5 bool exact semantics (create-only vs update-or-create)
