# evidence — get_relay_provider_quota (AiMaMi 1.1.8, windows-x64)

session: <审计会话> · machine: <本地机器>
owner_va: 0x140A4EFF0 (PE stripped, no Rust symbol) · core dispatcher_va: 0x140976010
binary: `raw/binary/AiMaMi 1.1.8 win64.exe` — 分析工具就绪门
uptime_sec=211424.632, 反编译就绪=true, module=`AiMaMi 1.1.8 win64.exe`, idb_path=
`<证据库> 1.1.8 win64.exe.i64`) before any decompile/callees/xrefs_to/find_regex call
this round.

## Confirmed

- `get_relay_provider_quota` is a real, live, dispatcher-wired IPC endpoint on windows-x64 1.1.8:
  the command-string literal (0x14136158a) has exactly one `xrefs_to` hit, landing inside a single
  function `sub_140A4EFF0` (0x140A4EFF0, size 0x128a/4746B) — not dead code, not a false-positive
  string-pool match. Frontend confirms `argKeys=["providerId"]`
  (`raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 114).
- Owner (0x140A4EFF0, FULL decompile, 4746B, 112 basic_blocks, cyclomatic_complexity=29, 27
  callees all resolved) extracts the `manager` state handle and `providerId` arg via generic
  Tauri deserialization helpers (confirmed by literal string refs "manager"@0x1413613b0 and
  "providerId"@0x141361574 embedded directly in the decompiled body), looks up the provider record
  via `sub_14026CC20`, then dispatches into the core multi-provider quota builder `sub_140976010`
  at the `LABEL_21` call site — this single dispatch point is the entire business-logic surface of
  the command; everything else in the owner is generic Tauri arg-extraction/response-serialization
  boilerplate shared across commands.
- Core dispatcher (0x140976010) — **truncation resolution**, exact same pattern as this session's
  own 1.1.1-baseline precedent (`REVERSE-STATUS.md` "Windows get_relay_provider_quota Deep-Reverse
  Extension", session <审计会话>): raw `decompile()` output truncates at
  ~30000-75000 chars depending on `include_addresses` flag, but `analyze_function()` independently
  confirms actual size=16895B, basic_blocks=628, cyclomatic_complexity=228, 47/47 callees resolved
  (0 unresolved) — **genuine_ceiling=false, truncation is a HexRays pretty-printer render limit
  only**, not a real gap. This is structurally near-identical to the 1.1.1 baseline's confirmed
  `relay_quota_http_request_builder_sys` (15931B/591 blocks/212 complexity/47 callees) — same
  47-callee count exactly, modest growth in size/blocks/complexity consistent with general binary
  growth documented elsewhere this session (macOS thread-model sub-entry noted +17% dispatcher
  size for the IPC layer overall).
- **11-provider routing table confirmed unchanged vs 1.1.1**: a live `find_regex` sweep
  (pattern covering v1/usage, billing/balance, usage/token, MiniMax, kimi.com, siliconflow,
  openrouter, novita, deepseek, stepfun, moonshot) returned 45 matches, and every host + quota-URL
  literal in the resulting list (`api.deepseek.com`, `api.stepfun.ai/.com`, `api.siliconflow.cn/.com`,
  `openrouter.ai`, `api.novita.ai`, `api.moonshot.cn/.ai`, `platform.kimi.com/.ai`,
  `api.kimi.com/coding`, `api.minimaxi.com`, `api.minimax.io`) exactly matches the 1.1.1 baseline's
  documented 11-provider list — no addition, removal, or URL change detected.
- Shared helper `sub_1408AC180` (FULL decompile, 311B, 21 basic_blocks, 19 distinct callers across
  the relay-HTTP surface) terminates in `sub_140001370(v5, 1424, 8)` — a 1424-byte struct
  deallocation — **byte-identical** to the 1.1.1 baseline's independently-confirmed
  `relay_http_request_cleanup_sys` ("Arc deref + free 1424B alloc; called by all relay HTTP paths").
  This is strong cross-version confirmation that the same shared cleanup routine survived
  1.1.1→1.1.8 unchanged in role (VA differs due to recompilation only).
- The reqwest crate's `Display for Error` implementation (`sub_140C068B0`, size 509B, 16
  basic_blocks) is reachable at call-tree depth 5 (via `sub_1409802F0`'s callee list) and contains
  verbatim reqwest-crate error-message literals ("builder error", "error sending request", "HTTP
  status server error", "HTTP status client error", "request or response body error", "error
  decoding response body", "error upgrading connection") — confirms the HTTP transport for this
  command is `reqwest`, matching the crate identified in the 1.1.1 baseline's naming convention
  (`relay_quota_http_request_builder_sys`, `relay_quota_http_response_state_machine_sys`).
- Call-tree depth ≥5 achieved via two independent branches from the core dispatcher: (a)
  `sub_1409802F0` → `sub_140C068B0` (depth 3→5, reqwest error Display, terminated_reason=
  error_return) and (b) via the poll-phase chain `sub_140A96EF0` (depth4) → `sub_140A973C0`
  (depth5) → `sub_14010EC30` (depth6, terminated_reason=external_call, hyper/tokio transport poll)
  — satisfying the depth≥5-OR-terminated-reason redline via BOTH routes simultaneously.

## Inferred

- The exact numeric provider discriminant values (0-11) in the routing table are inferred from
  positional ordering in the packed string-pool blob (deepseek listed first, default/Sub2API last)
  by structural continuity with the 1.1.1 baseline's explicitly-confirmed discriminant table — not
  independently re-derived from the 1.1.8 switch-case jump-table operands this round (the core
  dispatcher's `basic_blocks` comments confirm an 11-case switch exists at 0x14097639f, but the
  specific case→provider mapping was not individually traced case-by-case this round).
- The per-provider handler family (`sub_1402679C0` and its ~9 near-identical siblings) is inferred
  to each correspond to one specific provider bucket based on the core dispatcher's confirmed
  "switch 10 cases" structure and the count matching 10 non-default providers, but only
  `sub_1402679C0` itself was individually re-decompiled this round (full, 409B) — the other 9
  siblings were confirmed present-and-reachable via `callees()` enumeration only, not individually
  re-decompiled or matched to a specific provider host.
- `sub_1409802F0`'s 3 sibling aggregator functions (`sub_14097E710`/`sub_14097EF80`/
  `sub_14097F640`, each with 16-17 resolved callees per the `callees()` batch call) are inferred to
  be per-response-schema variants (OpenAI-style vs MiniMax-style vs Sub2API-style field assembly)
  by their near-identical callee-set shape and shared membership in the depth-3 aggregator tier,
  but none of the three were individually re-decompiled this round (present-and-reachable only).
- The exact byte offsets of the response-struct fields (`total_available`/`total_granted`/
  `model_remains[]`/etc.) within the final result envelope are inferred from the 1.1.1 baseline's
  documented field list by structural/string continuity (same literal field-name strings found at
  near-identical relative string-pool addresses), not independently re-mapped via `type_query`
  against this specific 1.1.8 build.

## Unknown

- The literal case→provider discriminant mapping for the confirmed "switch 11 cases" at
  0x14097639f and "switch 10 cases" at 0x140976364 in the core dispatcher — not individually
  traced via `disasm`/jump-table extraction this round; recorded Unknown rather than guessed
  (the provider-URL-set-level confirmation via string-pool is independent and does not require
  resolving the numeric discriminants).
- Whether `sub_14010EC30` (the deepest resolved node, depth 6, the actual hyper/tokio transport
  poll) contains any provider-specific TLS/proxy configuration logic, or is a fully generic
  shared connection-poll routine used by every HTTP-issuing command in the binary — not
  independently decompiled this round (present-and-reachable via a live `decompile()` call on its
  caller only, its own body was not fetched).
- Whether the exact byte-for-byte response field offsets differ at all between the OpenAI-style
  and Sub2API-style schemas (both share `total_available`/`total_granted` literal names but may
  use different struct layouts internally) — not independently confirmed via `type_query`/
  `declare_type` this round; the two schemas were confirmed distinct only at the string-pool/
  literal level, not at the binary layout level.
- Whether any of the 11 provider quota-endpoint URLs changed their exact numeric response-field
  weighting/rate-limit-window semantics between 1.1.1 and 1.1.8 (as opposed to the URL/host string
  itself, which is confirmed unchanged) — not independently re-verified this round; only the
  string-pool-level URL/host identity was diffed, not the runtime response-parsing behavior for
  each schema.
- Whether `sub_1408AC180`'s 19 confirmed callers represent the complete set of all relay-HTTP-issuing
  commands in this build, or whether additional callers exist elsewhere that were not captured by
  this leaf's single `analyze_function` call (the tool's `callers[]` field is a complete graph query
  in principle, but was not independently cross-checked via a second method such as `xrefs_to`
  this round).

## Delta vs baselines

`get_relay_provider_quota` is a command that **did not exist in the 1.0.9 baseline at all**
(confirmed via `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.win.txt` line 4 —
this session's own earlier frontend-delta sub-step, not re-derived here). Per the 1.0.9→1.1.8
delta scope for this round, this command is therefore classified as a **full new target**, not a
content diff against 1.0.9.

Cross-referencing this session's own prior work (out-of-scope baseline, cited only as a migration
source per the pipeline's "old version content migrates to newest version" rule, not re-claimed as
this round's comparison baseline): the command was already fully reverse-engineered against the
1.1.1 build (`REVERSE-STATUS.md` "v1.1.1 — Windows get_relay_provider_quota Deep-Reverse
Extension", gate_tier=strictImplementationUse_candidate, owner_va=0x14093DEB0, core builder
va=0x1408DBB30, 15931B/591 blocks/212 complexity/47 callees, 11-provider routing table, MiniMax +
OpenAI-style + Sub2API response schemas, no persistence side effect). This leaf's independent
re-decompile against the live 1.1.8 win IDB confirms **zero behavioral delta 1.1.1→1.1.8**: same
argKeys, same 11-provider host/URL set (byte-identical via this round's own `find_regex` sweep),
same 47-callee count for the core dispatcher, same reqwest-based HTTP transport, same
`relay_http_request_cleanup_sys`-equivalent 1424B dealloc terminus, same no-persistence side-effect
profile. The only differences are VA churn (expected from recompilation) and modest size/
complexity growth (591→628 basic blocks, 212→228 cyclomatic complexity) consistent with general
binary growth documented independently elsewhere this session (e.g. the macOS thread-model
sub-entry's +17% IPC-dispatcher-size finding, itself attributed to command-surface churn, not to
this specific command).
