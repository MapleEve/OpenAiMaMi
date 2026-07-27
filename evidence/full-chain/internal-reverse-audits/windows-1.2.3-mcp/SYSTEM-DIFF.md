# System Diff — AiMaMi 1.2.3 mcp (Windows-x64, independent evidence, cross-referenced to macOS 1.2.3)

## Platform Artifacts

- Binary: Windows x64 PE; `AiMaMi.1.2.3 win64.exe`; sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (same 1.2.3 release binary recorded by the sibling `windows-1.2.3-relay` package, cross-checked via manifest.json field, not independently re-hashed this session). IDB: `E:\binary\AiMaMi.1.2.3 win64.exe.i64` (per live `server_health`, imagebase `0x140000000`).
- macOS sibling: `internal-reverse/audits/macos-1.2.3-mcp/` — independent package, same product version, produced in a prior session with no IDA connection (angle-A accepted_unknown there). Binary sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (different binary, different platform, as expected).

## Frontend IPC / Control-flow

- 1.2.3 mcp command surface: 4 commands (`load_mcp_servers`, `upsert_mcp_server`, `set_mcp_server_enabled`, `remove_mcp_server`), identical names between windows-x64 `frontend/ipc-contracts.jsonl` and macos-arm64 `frontend/ipc-contracts.jsonl` — independently confirmed on the Windows side this session (not inherited from the macOS finding).
- Frontend JS bundle: `mcp-page-LchViioT.js` present byte-identically-named in both `raw/aimami/1.2.3/macos-arm64/dumped/assets/` and `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/` — consistent with Tauri's shared-webview architecture (one JS bundle, two native backends). Not independently re-derived on the Windows side; the macOS package's component-tree/state-model/interaction-table findings are reused by pointer.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- Backend wrapper coverage: 4/4 named `commands::*` functions on disk (`load_mcp_servers`@`0x1401788e0`, `upsert_mcp_server`@`0x140177050`, `set_mcp_server_enabled`@`0x140176630`, `remove_mcp_server`@`0x140175e20`), all ground-truth via `command-name string xref` (header annotation present in every file, produced by a prior session's win-native attribution pass, independently read and cross-checked this session). This is a stronger starting position than macOS's own wrapper files (also ground-truth-named, but Windows additionally exposes literal per-field argument-extraction key strings inline in the wrapper pseudocode, see below).
- `upsert_mcp_server` DTO fields, read directly as literal key-string constants inside the wrapper (`aName_0`=4B "name", `aTransport`=9B "transport", `aEnabled`=7B "enabled", `aCommand_0`=7B "command", `aArgs`=4B "args", `aUrl`=3B "url", `aHeaders`=7B "headers", `aEnvironment`=11B "environment"): a **stronger, more direct dim4 signal than the macOS package achieved** (macOS inferred field names from a combination of frontend `argKeys` + Dialog form fields + 2 backend key-byte-length matches; Windows gives the literal key strings verbatim inside the wrapper's own arg-extraction calls). Still not a formal per-field struct/DTO dump (no defaults/nullability/error-envelope table), so dim4 remains `partial`, not `closed`.
- Backend core coverage: 16 `.c` files on disk in `core/mcp` (15 pre-existing from the 2026-07-24T13:20:34Z gap-fill census + 1 newly captured this session, `upsert_mcp_server_0`@`0x1409e86f0`). Of these 16: 1 is ground-truth-named (pre-existing IDB cross-platform signature comment matching it to mac's `core::mcp::upsert_mcp_server`), 7 are high-confidence role-matched via independent literal-string cross-evidence (unquote_toml/insert_mcp_block/parse_mcp_document/strip_toml_comment/replace_string_table/parse_mcp_section_header/editable_mcp_server_table — every one of these role assignments is backed by a distinctive literal byte pattern read directly from the pseudocode, e.g. the 12-byte `"mcp_servers."` prefix inline-XOR check for `parse_mcp_section_header`, or the 55-byte managed-marker string reference for `insert_mcp_block`), 1 is moderate-confidence (`sub_1409E1D30`, transport-enum parsing logic, not name-confirmed), and 6 are generic runtime/stdlib glue (2 Drop-glue dispatchers, 1 SIMD HashMap::insert, 1 generic BTree/sorted-key lookup, 1 Default-constructor, 1 thunk, 1 Item-tag boolean helper) attributed to the mcp module by a call-graph-propagation heuristic but not independently claimed as mcp-domain business logic.
- **Census-incompleteness finding (this session's most significant independent discovery)**: `upsert_mcp_server_0`@`0x1409e86f0` was found via `find_regex('mcp_servers')` on the win strings cache followed by `xrefs_to` on the 3 `\r[mcp_servers.` template-string hits, all of which pointed to this one function. Decompiling it revealed a pre-existing IDB comment (`// win 1.2.3 | = mac codexmate_lib::core::mcp::upsert_mcp_server | 跨平台字符串签名匹配`) from an EARLIER session that had already established its identity — yet this function's pseudocode had never been written to `raw/` nor recorded in `INDEX.jsonl`. This directly falsifies any assumption that the 15-address `win-app-inventory-gapfill-leaf` census was exhaustive for `core::mcp`, and by extension raises material doubt about whether other gap-fill census batches across the codebase are complete. This finding is recorded here rather than silently smoothed over.
- Managed-block marker: `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` (55 bytes) confirmed present verbatim on Windows (`aAimamiRelayMan_6`, referenced 3x from `insert_mcp_block`/`sub_1409E1880`, length-checked `== 55`) — byte-for-byte identical to the macOS package's finding, confirming this is a cross-platform (source-level, not platform-specific) convention.
- `mcp_servers.` (12-byte) section-header prefix check: present on Windows as an inline 8+4-byte XOR-against-immediate-constant comparison (`*(_QWORD*)a2 ^ 0x767265735F70636DLL | *(_BYTE*)(a2+8) ^ 0x74LL`, decoding to `"mcp_serv"`+`"ers."` = `"mcp_servers."`), functionally identical to macOS's symbol-level `parse_mcp_section_header` string-prefix check — same source logic, different compiler codegen (Windows target inlines the literal as immediate constants rather than a rodata pointer load, which is also why `find_regex` found zero xrefs to the standalone 12-byte string constant even though the logic clearly uses it).
- `transport` field 3-way parsing (`sub_1409E1D30`, moderate-confidence, not name-confirmed): value `"http"` (4B) -> variant 1, value `"stdio"` (5B) -> variant 0, value `"sse"` (3B, matches literal `aSse`) -> variant 2, else -> variant 3 (fallback/unknown). This is functionally consistent with the macOS package's finding of a `transport: stdio|http|sse` 3-state selector feeding conditional `command`/`url` field handling, independently confirmed on the Windows side via a completely different code path (Windows: inline value-string byte comparison in what appears to be a shared parsing/DTO-construction helper; macOS: two `set_optional_string` call sites keyed by argument byte-length 7/3).

## Interface / Error / Boundary

Partial (dim4). See README.md § Interface / Error / Boundary and § Backend Owner Confidence for the ground-truth field-name list (win wrapper-level, stronger than macOS's inference-level equivalent) and the per-command core-owner confirmation gaps.

## Gate Leaf

consumerStartReady 4/4 (wrapper-ground-truth basis); strictImplementationUse 0/4; readyToImplement 0/4. See gate-report.json and README.md's per-command Backend Owner Confidence table — only `upsert_mcp_server` has both wrapper AND core ground-truth; the other 3 commands' core-layer owner is Unknown.

## Plugin / Capability

Not applicable — mcp module has no plugin/capability surface distinct from the standard MCP-server-config feature (consistent with the macOS package's finding).

## OTA / Package

Not evaluated this pass (out of scope for the mcp module, consistent with macOS package).

## Resource / Binary Surface

`commands/ida/pseudocode`: 4 named files (flat directory shared across all modules' Tauri command wrappers on Windows, unlike macOS's per-module `commands/<module>/` split) covering all 4 upstream mcp commands, exact 1:1 match with frontend `ipc-contracts.jsonl`. `mcp/ida/pseudocode`: 16 files (was 15 at session start), with the role/confidence breakdown described above; census proven incomplete.

## Unknown

- Full extent of the core::mcp census gap on Windows: at least 1 function was missing before this session (now closed); whether more remain is genuinely unknown (no exhaustive live symbol sweep completed).
- 6/14 mac core::mcp functions with no win counterpart found: `load_mcp_servers` (core read path), `quote_toml`, `prepare_existing_mcp_block`, `set_optional_string` (1.2.3 NEW-delta on mac), `remove_mcp_server` (core, 1.2.3 NEW-delta on mac), `set_mcp_server_enabled` (core).
- Whether the two mac "1.2.3 NEW-delta vs 1.2.2" functions have a Windows-side version-delta equivalent: cannot be assessed since neither function has a confirmed win counterpart yet.
- Whether the 3 distinct `\r[mcp_servers.` template-string variants referenced by `upsert_mcp_server_0` correspond to a formatting distinction (e.g. new-section-with-leading-CRLF vs without, or per-transport-type template) that the macOS package did not separately record — not cross-checked against the mac package's own logic narrative for a matching 3-way distinction.
- `sub_1409E1D30`'s true identity and its relationship (if any) to `upsert_mcp_server_0` (caller? shared helper? unrelated function that happens to also parse a `transport`-named field?) — not resolved this session.
- `environment` (win literal) vs `env` (macOS README field name) — same field or genuinely different, not independently checked.
