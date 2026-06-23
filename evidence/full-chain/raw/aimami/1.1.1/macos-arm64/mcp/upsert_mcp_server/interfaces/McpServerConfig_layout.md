# McpServerConfig — Inferred Layout (upsert_mcp_server, AiMaMi 1.1.1 macOS arm64)

Recovered from `core::mcp::upsert_mcp_server` (0x1005a0d80) field access offsets.

## Session
wf-aimami111-delta-20260617-repair

## Struct Fields (inferred)

| Offset | Type | Field | Notes |
|--------|------|-------|-------|
| +0..+7 | ptr | name ptr | server name string pointer |
| +8..+15 | usize | name len | |
| +16..+23 | (unused or padding) | | |
| +56..+63 | ptr | args ptr | Vec<String> pointer |
| +64..+71 | usize | args len | |
| +72..+79 | u64 | url option tag | 0x8000000000000000 = None |
| +80..+87 | ptr | url ptr | optional (type=sse) |
| +88..+95 | usize | url len | |
| +96..+103 | u64 | command option tag | 0x8000000000000000 = None |
| +104..+111 | ptr | command ptr | optional (type=stdio) |
| +112..+119 | usize | command len | |
| +120..+127 | ptr | headers HashMap ptr | |
| +128..+135 | ptr | headers capacity/end | |
| +144..+151 | usize | headers len | |
| +152..+159 | BuildHasher state | headers hasher | |
| +168..+175 | ptr | env HashMap ptr | |
| +176..+183 | ptr | env capacity/end | |
| +192..+199 | usize | env len | |
| +200..+207 | BuildHasher state | env hasher | |
| +216 | u8 | enabled flag | 0=false, 1=true |
| +217 | u8 | server_type enum | index into type lookup table (dword_101154D10) |

## Server Type Enum (from lookup table dword_101154D10 / qword_101154CF0)
- Index 0: "stdio" (inferred from format string + string at unk_101153424 = "truenullrepomode...")
- Index 1: "sse"
- Index 2: (other type)

## McpServerSummary Return Size
- 224 bytes (0xE0) per entry — confirmed by `224 * v260[3]` allocations in load path
- Alignment: 8

## Two-Marker Invariant (§8b)
The relay preserves TWO marker blocks in config.toml:
1. `# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)` — 60 bytes
2. `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` — 64 bytes
Both are searched via string literals embedded in the binary (anon.c7777ab3..305-310).
The splice boundary is determined by whichever marker is found first when scanning from top.
