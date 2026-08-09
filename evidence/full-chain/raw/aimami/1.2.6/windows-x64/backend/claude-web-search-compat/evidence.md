# evidence: get_claude_web_search_compat / set_claude_web_search_compat (AiMaMi 1.2.6 windows-x64)

## Provenance note (schema normalization, red line 29 disclosure)
This evidence.md was written during the schema-normalization round (`<审计会话>
by reorganizing the content already present in `manifest.json` (produced by task #149, original decompile
session `2026-08-06T15:20:00Z`). **No new IDA calls (`decompile`/`analyze_function`/`rename`/`set_comments`/
`dirtree`/`<工具调用>`) were made during this normalization pass.** The original `manifest.json`'s
`generation_method` field records: "mcp__ida-pro-mcp-win__decompile via live IDB, <门控> verified
(server_health status=ok, <反编译器>_ready=true, module=AiMaMi 1.2.6 win64.exe)" -- the original session's own
<门控> confirmation, carried forward here for continuity; this normalization round did not
re-verify a live IDA session because it issued zero IDA calls.

## Owner resolution (grounded, from manifest.json)
- `get_claude_web_search_compat` owner at `0x14014ade0`, resolved via `ipc-command-owner-map.json`
  (tauri command-name string xref).
- `set_claude_web_search_compat` owner at `0x140d47c70`, same resolution method.
- Both commands share the same generic dispatch pattern: thin owner constructs
  `manager.request(name="<command>", target="manager"[, enabled=<bool>])` and awaits the response via the
  shared `sub_14172C620` future-combinator, with the shared `sub_14002B2A0` hashbrown-SIMD registry probe +
  futex wait, and shared `sub_140AFFC30` registry dispatch + `WakeByAddressSingle` response-emission helper.

## Call-tree summary
- `get_claude_web_search_compat`: pure read path, no parameters, no persistence write. Terminates at
  `sub_140A92CA0` (CoreEnvelope-style response finalize) then `sub_140AFFC30` (final emission to the Tauri
  invoke channel). See `call-trees/get_claude_web_search_compat.jsonl`.
- `set_claude_web_search_compat`: real async poll body (`is_real_async_poll_body: true`), state dispatch
  field at `a1+1712` (poll states 0/1/2/3). Parses `{target:"manager", enabled:<bool>}`, then calls
  `sub_1409562A0` (second manager.request keyed by `enabled`), then `sub_140504EE0` -- identified as the
  candidate persistence/business-logic leaf (recognizes `-1/-2/-3` typed error sentinels) but **not further
  recursed this round** (out of the original 4-target scope). Failure path formats errors via generic Rust
  `Display` trait (`sub_1412DDF00`/`sub_141543AF0`), a standard panic-safety net, not leaf-specific. Both
  success/failure paths converge on `sub_140AFFC30`. See `call-trees/set_claude_web_search_compat.jsonl`.

## Fake-wall check (red line 13)
`genuine_ceiling=false` for both commands; `accepted_unknown` not claimed. `sub_140504EE0`'s internal
field-level implementation was identified as a real, non-generic business leaf but intentionally left
un-recursed (documented in manifest.json's `recovery_attempts` as "待续，非天花板" -- i.e. explicitly
flagged as deferred, not a fake wall). No `decompile_truncated` markers were observed in either recovered
pseudocode body (manifest.json explicitly states "full body, no truncation marker" for both).

## Cross-platform comparison (from manifest.json)
No macOS 1.2.6 `claude-web-search-compat`-specific directory exists to cross-reference byte-for-byte. The
semantic comparison instead cross-references the generic manager/CoreEnvelope layering pattern shared with
the `update-voice-runtime-settings`/`voice-runtime-start-capture` families: thin command layer delegates to
`manager.request(name, args)`, success/failure both converge on a CoreEnvelope-style finalize helper.
Windows lacks a dedicated named `emit_status`/`load_status`-equivalent for this command family (the state
publish is inlined into the generic `sub_140AFFC30` finalize path) -- documented as an architecture-level
difference, not a functional gap.

## IDB mutations
None issued by the original task #149 session's manifest.json beyond the decompile itself (no explicit
rename/comment/dirtree fields recorded in the original manifest for this bundle; per the honesty-audit's
red-line-24 naming verification, `lookup_funcs` confirmed both addresses were already renamed to semantic
names and dirtree-moved during the original task #149 session, but that provenance is tracked at the IDB
level, not re-derived by this normalization pass). This normalization round (`<审计会话>
20260806-083134`) issued zero IDA mutations of any kind.
