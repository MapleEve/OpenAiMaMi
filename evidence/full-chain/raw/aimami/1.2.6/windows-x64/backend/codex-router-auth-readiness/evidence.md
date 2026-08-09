# evidence: get_codex_router_auth_readiness (AiMaMi 1.2.6 windows-x64)

## <门控>
`server_health` confirmed before any decompile/xref/rename call this session: `status=ok`,
`uptime_sec=105776.824`, `module="AiMaMi 1.2.6 win64.exe"`, `idb_path=<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`,
`<反编译器>_ready=true`, `auto_analysis_ready=true`.

## Owner resolution (grounded)
- String `get_codex_router_auth_readiness` located at `0x14177aa2e` via `find_regex`.
- `xrefs_to(0x14177aa2e)` → exactly 1 hit, at code address `0x140174b5d`, inside function
  `sub_140174120` (the shared ~90+-command tracing dispatcher, size `0x6606`/26118 bytes, not renamed).
- `basic_blocks(sub_140174120)` located the containing block `0x140174aea`-`0x140174bb6` (204 bytes) plus
  the follow-on match-arm blocks through `0x140174bff`-`0x140174c5c`.
- `insn_query(mnem=call, start=0x140174aea, end=0x140174c5c)` returned 6 call sites; excluding the 3x
  `sub_14172B820` (generic memcpy-style helper used everywhere) and the shared `sub_14002B2A0`
  (32-caller async-unwrap/poison helper, confirmed via its own `callers` list spanning dozens of sibling
  commands including `get_claude_web_search_compat`/`set_claude_web_search_compat`/
  `set_codex_no_account_slots` etc.), exactly one call remains: `sub_140547C70` at `0x140174bd6`.
- `analyze_function(sub_140547C70)` confirms `callers: ["sub_140174120"]` — exactly 1 caller, exclusive to
  this command. Renamed `get_codex_router_auth_readiness_owner_sys`.

## Call-tree (depth4 reached across 2 branches, satisfies redline13 depth-or-terminated_reason gate)
See `call-trees/get_codex_router_auth_readiness.jsonl`. Two independent terminated_reason categories hit:
`response_serialize` (`sub_1404D0720`, exclusive, builds the `{ok,"Success"}` envelope) and
`persistence_read_equivalent` (`sub_1409C2D20`, shared 26-caller RelayManager mutex-guard state read,
panic string anchored to `src\core\relay\manager.rs`). A third branch (`sub_140BF9190` → `sub_140B1E6D0`
→ `sub_141534AD0`/`sub_14086C5A0`) reaches depth4 without a further-traced terminal this round (left open,
not claimed as `accepted_unknown`/`genuine_ceiling` — simply not pursued further to respect the strict
3-target scope boundary for this session).

## Cross-version/cross-platform comparison
- macOS 1.2.3 baseline exists at
  `raw/aimami/1.2.3/macos-arm64/commands/relay/ida/pseudocode/get_codex_router_auth_readiness_0x10053fd20.c`.
- windows 1.1.8 full leaf already closed: `INDEX.jsonl` key
  `aimami/1.1.8/windows-x64/relay/get_codex_router_auth_readiness`, owner
  `get_codex_router_auth_readiness_owner_sys@0x140024b90` (1.1.8 VA, different from this round's 1.2.6 VA
  `0x140547c70` — expected, binaries relocate between versions).
- Architecture match confirmed: dispatcher-inline-match-arm pattern, `{disc=2,"ok","Success"}` response
  envelope shape, RelayManager-state-read + oauth-availability-check dual-branch composition — all
  consistent between 1.1.8 windows and this round's 1.2.6 windows finding.
- Divergence found (genuine, not fabricated): the hardcoded `niuniu@woyao.pro` virtual-auth email literal,
  byte-identical across macOS 1.1.8 and windows 1.1.8, was **not found** via `find_regex` anywhere in the
  1.2.6 windows-x64 image this round. Left as an open Unknown (see interface.md) — no removal claim made.

## Fake-wall check (red line 13)
`genuine_ceiling=false`; `accepted_unknown` not claimed for any node actually written to this bundle. All
4 functions given a full Hex-Rays body this session (owner + 3 depth-1/2 callees); no `decompile_truncated`
flag observed on any of the calls made. The depth-4 branch (`sub_141534AD0`/`sub_14086C5A0`) was decompiled
enough to identify role and data-flow shape but not exhaustively walked further — documented as an open
item, not hidden.

## IDB mutations this session (scoped strictly to this leaf's owner)
- `rename`: `sub_140547C70` → `get_codex_router_auth_readiness_owner_sys` (ok).
- `set_comments`: 1 comment at `0x140547c70` (role/boundary/side-effect summary in Chinese).
- dirtree: moved into `codexmate_lib/core/relay/get_codex_router_auth_readiness_owner_sys`, grounded-verified
  via `resolve_path` + `isfile=true` after the move.
- `<工具调用>`: `ok=true`, path `<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`.
- No other functions (dispatcher `sub_140174120`, shared helpers `sub_1409C2D20`/`sub_14002B2A0`/etc.) were
  renamed or moved this session — strictly scoped to the 3 targets per user instruction.
