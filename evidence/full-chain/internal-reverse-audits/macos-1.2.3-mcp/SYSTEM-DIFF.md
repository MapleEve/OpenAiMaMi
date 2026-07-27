# System Diff — AiMaMi 1.2.3 mcp (macOS-arm64, vs inherited 1.2.2 file-header annotations)

## Platform Artifacts

- Binary: macOS arm64 Mach-O; sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (same 1.2.3 release binary as macos-1.2.3-relay, cross-checked).
- Windows sibling: raw evidence exists (`raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/*.c`, 15 files, PE format per INDEX.jsonl), but no canonical `windows-1.2.3-mcp/` package exists yet and this session did not read those files. Not evaluated here.

## Frontend IPC / Control-flow

- 1.2.3 mcp command surface: 4 commands (`load_mcp_servers`, `upsert_mcp_server`, `set_mcp_server_enabled`, `remove_mcp_server`), unchanged in count vs the 1.0.9 historical baseline (also 4 commands) — the delta is in the **DTO shape carried by `upsert_mcp_server`**, not the command surface.
- McpPage Dialog form (`_e` component, mcp-sessions-settings-skills-frontend.md §1.2) exposes a `transport` selector with three values: `stdio` (shows `command`/`args` fields), `http` (shows `url` field), `sse` (shows `url` field) — plus `env`/`headers` multiline text inputs parsed to objects on save. This transport model does NOT exist in the 1.0.9 historical baseline (which only ever reversed `command`/`args`/`env`).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- Backend decompile coverage: 18/18 functions (4 commands::mcp + 14 core::mcp), all read in full this session, 0 truncated stubs.
- File-header-inherited version-delta annotations (from a prior recon session, NOT re-verified this pass against an actual 1.2.2 binary):
  - **16/18 files** annotated `基线 same-set` (baseline unchanged vs 1.2.2): both `commands::mcp::*` wrapper functions (all 4), and 12/14 `core::mcp::*` functions (`load_mcp_servers`, `parse_mcp_document`, `parse_mcp_section_header`, `editable_mcp_server_table`, `insert_mcp_block`, `prepare_existing_mcp_block`, `quote_toml`, `unquote_toml`, `strip_toml_comment`, `replace_string_table`, `set_mcp_server_enabled`, `upsert_mcp_server`).
  - **2/18 files** annotated `1.2.3 NEW-delta ... vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)`: `core::mcp::remove_mcp_server` (0x100845f30 — the real atomic-file-mutation implementation, distinct from the `commands::mcp::remove_mcp_server` wrapper) and `core::mcp::set_optional_string` (0x10084a610).
  - Cross-evidence: `set_optional_string` is called twice from `core::mcp::upsert_mcp_server` (0x100846d50) with key-literal byte-lengths 7 and 3, plausibly matching `"command"` (stdio-only field) and `"url"` (http/sse-only field) becoming conditionally-set/removed TOML keys — directly consistent with the frontend transport selector described above. This is a coherent, cross-checked (frontend + backend) finding, though the exact rodata string content was not independently dumped this session.
- Managed-block marker convention confirmed: writes wrap newly-inserted server blocks with a comment marker `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` (55 bytes, `insert_mcp_block` memcmp length 0x37) when falling back to raw-text block insertion (used when no `toml_edit::Document`-precision edit path applies); `set_mcp_server_enabled` instead uses a `toml_edit`-precision table edit path via `editable_mcp_server_table` for the common case.
- Mutation serialization: `codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock` guards all 3 mutating commands (upsert/remove/set_enabled) with distinct reason strings (`"removing an MCP server"` / `"updating an MCP server"` / `"changing an MCP server"`, each ~22-23 bytes) — this gate is shared with the relay module (`codexmate_lib::core::relay::codex_mutation`), meaning MCP server config mutations and relay config mutations may contend for the same lock. Not independently confirmed whether the lock scope is per-file or global.
- Optimistic-concurrency retry: all 3 mutating core functions loop up to 3 attempts, re-reading the config file and comparing to the just-written content before returning; retry exhaustion produces a formatted error naming the module path and attempt count.

## Interface / Error / Boundary

Not independently/systematically extracted for 1.2.3 (dim4 gap, see gate-report.json). Best-effort field names recorded in README.md § Interface / Error / Boundary; do not treat as closed.

## Gate Leaf

consumerStartReady 4/4; strictImplementationUse 0/4; readyToImplement 0/4. See gate-report.json.

## Plugin / Capability

Not applicable — mcp module has no plugin/capability surface distinct from the standard MCP-server-config feature.

## OTA / Package

Not evaluated this pass (out of scope for mcp module).

## Resource / Binary Surface

`commands/mcp`: 4 `.c` files on Mac covering all 4 upstream commands, exact 1:1 match with frontend `ipc-contracts.jsonl`. `core/mcp`: 14 `.c` files, no orphans outside `core::models` DTO-glue (already_in_canonical, see gate-report.json).

## Unknown

- Windows 1.2.3 mcp: raw evidence exists (15 `.c` files) but unread this session; Unknown, not extrapolated from macOS.
- Live IDA symbol enumeration (angle-A) not performed this session (no tool connection); static disk enumeration + angle-B/C cross-check used instead.
- `set_optional_string` key-literal string content (`&unk_101674B65`/`&unk_101674B6C`) not independently byte-dumped to confirm `"command"`/`"url"` literally.
- Interface/DTO and test/acceptance mapping not extracted for 1.2.3 (dim4/dim6 gaps).
- Whether the `CodexMutationGate` lock scope overlaps between relay and mcp mutations in a way that could cause cross-module contention/latency — not independently confirmed.
