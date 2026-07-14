# interface — get_codex_router_auth_readiness (AiMaMi 1.1.8, windows-x64)

## Request
- `argKeys`: `[]` (zero-argument command). Confirmed via
  `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` (command row:
  `argKeys:[]`, `argObject:null`, `params:"()"`, wrapper `getCodexRouterAuthReadiness`,
  callee `St`, `assets/index-CX-I_QAq.js:86`).

## Response (backend-confirmed struct layout, `router_unlock_auth_readiness_core_sys`@0x14060e6b0)
Output struct written through `a1` (24+4 = 28 bytes observed this round):

| offset | type | source | frontend-confirmed name | value |
|---|---|---|---|---|
| +0..+23 | Rust owned `String` (cap=16,ptr,len=16) | hardcoded 16-byte literal at `xmmword_14134D5EC` | `virtualEmail` | `"niuniu@woyao.pro"` (byte-identical to the macOS 1.1.8 sibling leaf) |
| +24 | bool | `router_unlock_auth_has_real_oauth_sys`@0x14060c510 return | not directly named by this frontend callsite | `hasUsableRealOAuth`-shaped (name inferred from behavior, not `type_query`-verified) |
| +25 | bool | `!(+24)` (`v4 ^ 1`) | `willUseVirtualAuth` | confirmed `!hasUsableRealOAuth` -- byte-exact inverse, matches the macOS sibling leaf's own (there: inferred) conclusion |
| +26 | bool | `(sub_140604950(...) == 1)`, shared 10-caller token-check helper | not consumed by the one frontend callsite traced this round | Unknown semantic (token-freshness-shaped; not independently `type_query`-verified) |
| +27 | bool | `router_unlock_auth_can_restore_sys`@0x14060c310 return | not consumed by the one frontend callsite traced this round | `canRestorePreviousAuth`-shaped (checks both `router-unlock-auth-backup.json` and `router-unlock-auth-marker.json`) |

Frontend only reads 2 of the (at least) 4 response fields at the one call site
traced this round (`assets/relay-page-CybVyflj.js:38`, fn `Pn`):
```
const g = await ge.getCodexRouterAuthReadiness();
q(g.data.willUseVirtualAuth), ae(g.data.virtualEmail)
```
(`frontend-control-flow.jsonl` line 192, evidence_path
`frontend/ast-facts.json#functions:assets/relay-page-CybVyflj.js:Pn:38`). Fields
+26/+27 may be consumed at other, un-traced call sites, or reserved/unused by
this frontend build — left as an honest Unknown, not asserted either way.

## Error path
This command's own inline dispatcher match-arm never takes the error branch at
runtime for its own logic (`jno loc_1403D2BC3` — the always-Ok merge point is
reached unconditionally in the traced arm; the adjacent `call sub_140408A20`
error-construction stub belongs to the shared dispatcher continuation and was
not observed to be entered by this command's own body). Internal fallible steps
(marker/backup file reads inside `router_unlock_auth_can_restore_sys` and its
`read_marker_sys` callee) degrade to boolean sentinels rather than propagating
an error to the IPC layer — same shape as the macOS 1.1.8 sibling leaf's own
documented "no error-return path" finding.

## Side effects
Read-only: reads (does not write) `router-unlock-auth-marker.json` and
`router-unlock-auth-backup.json` under the app's relay-state directory (exact
directory root not independently confirmed this round — Unknown, consistent
with the macOS sibling leaf which also left the marker directory root
unconfirmed). No writes, no network calls observed in the traced call tree.

## Cross-platform delta note
- `virtualEmail` literal `"niuniu@woyao.pro"` is BYTE-IDENTICAL between windows-x64
  and macos-arm64 1.1.8 builds (confirmed via `get_bytes` raw byte fetch on
  windows since `find_regex` string-pool search alone misses this literal —
  it is stored as a raw `xmmword` data constant without an 反编译器 string-type
  annotation, a minor "quiet" find-regex blind spot worth flagging for future
  rounds, NOT a fake wall since `get_bytes` closed it this round).
- Windows uses `inline_match_arm,no_dedicated_wrapper` at the IPC-dispatch
  layer (owner-map-118.jsonl method field) while macOS has a clean demangled
  standalone symbol (`get_codex_router_auth_readiness::hbc73a173c4a6e170`) —
  a build/monomorphization difference only; the underlying
  `codexmate_lib::core::relay::router_unlock_auth` module (confirmed present
  on windows via `src\core\relay\router_unlock_auth.rs` panic-location string
  at `0x14134d469` and module-path string
  `codexmate_lib::core::relay::router_unlock_auth` at `0x14134d79e`) and its
  business logic are shared/identical cross-platform.
