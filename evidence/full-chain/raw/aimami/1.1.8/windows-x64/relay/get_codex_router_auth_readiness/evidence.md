# evidence — get_codex_router_auth_readiness (AiMaMi 1.1.8, windows-x64)

session: <审计会话> · 分析工具就绪门
confirmed `status=ok`, `uptime_sec=227362.546`, `反编译就绪=true`,
`module="AiMaMi 1.1.8 win64.exe"`, `idb_path=<证据库> 1.1.8 win64.exe.i64`
— checked before any decompile/xrefs_to/rename call this round.

owner-gate re-check before write: `find raw/aimami/1.1.8/windows-x64/*/get_codex_router_auth_readiness/`
returned empty prior to this write; `grep -n get_codex_router_auth_readiness INDEX.jsonl`
prior to this write returned exactly 1 hit and it was the macos-arm64 sibling
key (`aimami/1.1.8/macos-arm64/relay/get_codex_router_auth_readiness`), not a
windows-x64 collision → gate=ALLOW/first, no takeover token needed.
`intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line
28 already recorded `owner_va=0x1403cf5b0,
method=find_regex_string_pool_hit+xrefs_to_owner=main_dispatcher(inline_match_arm,no_dedicated_wrapper),
present=true` (angle-A discovery pass only, no full leaf bundle) — this leaf
supplies the first full raw pseudocode/call-tree/interface/evidence/gate-report
package for the windows-x64 platform.

## Confirmed (byte/instruction-level, this round)

1. `xrefs_to(0x14133b621, the "get_codex_router_auth_readiness" string literal)`
   returns exactly 1 code xref, at `0x1403d00f6`, landing inside
   `sub_1403CF5B0` (the shared ~90-command IPC dispatcher, size=0x4ad3/19155B,
   353 basic_blocks, cc=160, 112 direct callees) — confirmed live,
   dispatcher-wired IPC endpoint, not dead code.
2. The dispatcher's inline match-arm for this command (`0x1403d0060`-`0x1403d0217`,
   ~440B/~70 instructions) is 100% `tracing::instrument` macro-expansion
   boilerplate (perfect-hash confirm-compare, span-metadata literal build,
   callsite/interest-cache trampoline `sub_140419560` shared by 25 callers
   incl. 2 other sites inside this same dispatcher + `reveal_relay_api_key_owner_sys`)
   until the single real business call at `0x1403d01a1` into
   `get_codex_router_auth_readiness_owner_sys` (was `sub_140024B90`) — confirmed
   via `analyze_function`: this callee has EXACTLY 1 caller in the entire
   binary (this exact call site), i.e. genuinely command-specific.
3. `get_codex_router_auth_readiness_owner_sys`@0x140024b90 (431B, fully
   decompiled, 0 truncation) calls `router_unlock_auth_readiness_core_sys`
   (was `sub_14060E6B0`, also 1 caller = this exact site) FIRST, then builds a
   `#[tracing::instrument(ret)]`-shaped return-value record from the result —
   matching the standard rustc/tracing-macro codegen shape for instrumented
   async fns (real body first, log-record-of-result second).
4. `router_unlock_auth_readiness_core_sys`@0x14060e6b0 (180B, fully decompiled,
   0 truncation) builds the response by combining exactly 3 sub-checks
   (`router_unlock_auth_has_real_oauth_sys`, a shared 10-caller token-check
   helper `sub_140604950`, and `router_unlock_auth_can_restore_sys`) plus one
   hardcoded 16-byte string heap-allocated via `sub_140001360(16,1)`.
5. `get_bytes(0x14134d5ec, 16)` = `6e 69 75 6e 69 75 40 77 6f 79 61 6f 2e 70 72 6f`
   = ASCII `"niuniu@woyao.pro"` — BYTE-IDENTICAL to the macOS 1.1.8 sibling
   leaf's own independently-confirmed `virtualEmail` literal. (Note: this
   16-byte constant is stored as a raw `xmmword` data value with no 反编译器
   string-type annotation, so plain `find_regex` string-pool search alone
   returns 0 hits for it on windows — closed via direct `get_bytes` instead,
   not a fake wall.)
6. `*(_BYTE*)(a1+25) = v4 ^ 1` where `v4` is `router_unlock_auth_has_real_oauth_sys`'s
   return value — i.e. offset+25 (frontend-confirmed `willUseVirtualAuth`) is
   the byte-exact logical inverse of "has usable real OAuth login", confirmed
   by direct instruction inspection (not inference) on this platform.
7. `argKeys:[]` confirmed via `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl`
   (exact record: `command:"get_codex_router_auth_readiness"`, `argKeys:[]`,
   `params:"()"`, wrapper `getCodexRouterAuthReadiness`).
8. Frontend consumption of `virtualEmail`/`willUseVirtualAuth` confirmed via
   `raw/aimami/1.1.8/windows-x64/frontend/frontend-control-flow.jsonl` line 192
   (`assets/relay-page-CybVyflj.js:38`, fn `Pn`) — identical file/line to the
   macOS leaf's own citation, confirming a single shared cross-platform
   frontend JS bundle.
9. Command confirmed NEW in 1.1.8 on windows: 0 hits for the command name
   across the entirety of `raw/aimami/1.0.9` and `intermediate/aimami/1.0.9`
   (targeted grep, this round); listed in
   `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.win.txt`
   line 3.
10. `router_unlock_auth_can_restore_sys`@0x14060c310 (368B, fully decompiled)
    dispatches on a shared 61-byte string-pool blob at `0x14134d42d`
    (`"router-unlock-auth-backup.jsonrouter-unlock-auth-marker.json"`), using
    offset 0/length 30 for the backup file and offset 30/length 31 for the
    marker file — both filenames byte-identical to the macOS sibling leaf's
    documented `router-unlock-auth-marker.json` reference.

## Inferred (behavior-consistent, not byte/type-verified)

1. `router_unlock_auth_has_real_oauth_sys`@0x14060c510 (601B) is inferred to
   implement "has a currently-usable real (non-virtual) OAuth login" based on
   its consumption pattern (feeds the `willUseVirtualAuth` inverse) and its
   32-byte SIMD compare against `xmmword_141322F30`/`xmmword_141322F20` —
   the exact string being compared was not independently `type_query`'d this
   round.
2. The shared 10-caller helper `sub_140604950` is inferred to be a
   token-freshness/expiry-shaped check (analogous to the macOS sibling leaf's
   own `token_remaining_seconds`→`base64::engine::Engine::decode::inner`
   finding) based on its call shape (2 pointer/len args, calls into
   `sub_1410807C0`/`sub_1403844F0`/`sub_1410242F0`) — not independently traced
   to a base64/JWT primitive this round (scope cutoff, not a fake wall).
3. Response offset+24 (raw `has_real_oauth`-shaped boolean, pre-inversion) is
   inferred to be an internal-only field not directly named
   `hasUsableRealOAuth` in any frontend snippet traced this round — the exact
   serde field name is Unknown.
4. Response offset+26/+27 (from the shared token-check and
   `can_restore_previous_auth`, respectively) are inferred to be present in
   the wire response but are simply not read by the one frontend call site
   traced this round — could be consumed elsewhere, or be dead/reserved
   fields; not resolved either way this round.
5. The marker/backup file directory root (where `router-unlock-auth-marker.json`
   /`router-unlock-auth-backup.json` actually live on disk) is inferred to be
   the app's per-user relay-state directory by analogy with the macOS sibling
   leaf, which also left this root unconfirmed — no windows-specific
   path-resolution call was traced this round.

## Unknown (honest gaps, not accepted_unknown — plain scope cutoffs this round)

1. Exact serde/JSON field names for response offsets +24, +26, +27 (only
   +8..+23 as `virtualEmail` and +25 as `willUseVirtualAuth` are
   frontend-confirmed this round).
2. Whether `sub_140604950`'s token-check bottoms out in the exact same
   `base64::engine::Engine::decode::inner` primitive the macOS leaf found, or
   a windows-specific equivalent — not traced past its immediate 8 callees
   this round.
3. The concrete on-disk directory containing `router-unlock-auth-marker.json`
   and `router-unlock-auth-backup.json` on windows (e.g. `%APPDATA%`-relative
   path) — not resolved this round.
4. Whether `router_unlock_auth_has_real_oauth_sys`'s SIMD compare target
   (`xmmword_141322F30`/`xmmword_141322F20`) is a provider name, a token
   prefix, or something else — raw bytes not fetched this round.
5. Full behavior of the 2 not-traced-this-round callers of
   `router_unlock_auth_has_real_oauth_sys` (`sub_14026EC40`) and
   `router_unlock_auth_read_marker_sys` (2 of its 3 callers) — left for a
   future round if `truly_undone` orphan-sweep surfaces them.

### recovery_attempts (for the Unknowns above, per redline13 — none accepted as ceiling)
- Attempted `find_regex` for `"niuniu@woyao.pro"` first (0 hits, false-negative
  from data-only xmmword storage) → recovered via direct `get_bytes` (succeeded,
  see Confirmed #5). This is the ONE fake-wall risk this round and it was
  fully closed, not left as accepted_unknown.
- Did not attempt `type_query`/`declare_type` on the response struct fields
  (+24/+26/+27) or the SIMD-compared xmmword constants this round — scope/time
  cutoff for this single-command leaf, explicitly not claimed as
  `genuine_ceiling`.

## Delta vs 1.0.9 baseline
Command absent from 1.0.9 in every form checked (raw + intermediate, this
round); listed as frontend-added in `cmd-added.win.txt` line 3. No 1.0.9
windows analog exists to diff against — this is a net-new 1.1.8 relay/router
surface on windows, matching the macOS 1.1.8 sibling leaf's own "confirmed NEW
in 1.1.8" conclusion.

## Renames + comments this round (IDB, batch result total=5,ok=5,failed=0)
- `get_codex_router_auth_readiness_owner_sys`@0x140024b90 (the true
  single-caller command-specific entry point, one hop past the shared
  tracing-instrumentation dispatcher glue)
- `router_unlock_auth_readiness_core_sys`@0x14060e6b0
- `router_unlock_auth_has_real_oauth_sys`@0x14060c510 (shared-helper caveat: 2
  callers total, 1 not traced this round)
- `router_unlock_auth_can_restore_sys`@0x14060c310
- `router_unlock_auth_read_marker_sys`@0x1406045f0 (shared-helper caveat: 3
  callers total, 2 not traced this round)
- `set_comments` ok x1 at the owner (`get_codex_router_auth_readiness_owner_sys`@0x140024b90):
  "owner for get_codex_router_auth_readiness; session <审计会话>; not gate promotion"
- `保存分析库`: `ok=true`, `path=<证据库> 1.1.8 win64.exe.i64`, completed
  this round after all renames/comments above.

## fake-wall check
`genuine_ceiling=false`; `accepted_unknown` not claimed anywhere in this leaf.
All 6 traced functions (dispatcher match-arm as disasm, owner_sys,
readiness_core_sys, has_real_oauth_sys, can_restore_sys, read_marker_sys) got
real Hex-Rays/disasm bodies with 0 truncation at the addresses actually
decompiled (the ONLY truncation encountered was `decompile()` on the giant
shared 19155B dispatcher itself, which was never claimed as this command's
owner and was worked around via segmented `disasm()` walk per redline13,
independently cross-checked against `xrefs_to`/`analyze_function` caller
counts to confirm exclusivity at each hop).
