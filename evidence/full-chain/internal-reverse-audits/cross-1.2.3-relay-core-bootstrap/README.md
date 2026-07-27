# cross-1.2.3-relay-core-bootstrap

Cross-platform synthesis attempt for AiMaMi 1.2.3 relay-core + bootstrap, modeled on the
`cross-1.0.9-relay-core-bootstrap/` template. Produced 2026-07-25 (session
`cross123-relay-core-bootstrap-distillation-20260725`, machine `<host>`), diagnostic-only,
read-only synthesis of pre-existing evidence — no new IDA MCP calls made this session.

## Bottom line

**The cross package could NOT be synthesized to any real gate level.** Unlike 1.0.9 (where all
four source bundles — macos-relay-core, macos-bootstrap, windows-relay-core, windows-bootstrap —
existed as real canonical bundles, some IDA-offline but all present), for 1.2.3 **three of the
four source dependencies do not exist as canonical `audits/<platform>-1.2.3-<module>/` bundles**:

| source bundle | status |
|---|---|
| `audits/macos-1.2.3-bootstrap/` | **EXISTS**, real canonical bundle, gate=`consumerStartReady` (4/4 leaves), produced same day (2026-07-25) |
| `audits/macos-1.2.3-relay-core/` | **EXISTS but diagnostic-only** (`package_kind: lightweight_coverage_audit`) — not a gated bundle. Its own verdict is `PARTIAL`, `covered_by_relay_bundle: false`. No dim1-6 closure for any leaf; explicitly does not set `implementation_use`/`gate_accepted`/`strictImplementationUse`/`readyToImplement` for anything. |
| `audits/windows-1.2.3-bootstrap/` | **DOES NOT EXIST.** No canonical bundle. `macos-1.2.3-bootstrap/manifest.json` itself records `"cross_platform_sibling": "none produced this session (windows-1.2.3-bootstrap not attempted)"`. No dedicated windows-x64 bootstrap raw evidence tree was found under `raw/aimami/1.2.3/windows-x64/` either (checked `runtime/`, `codex_runtime/` — neither is a bootstrap-equivalent triage). |
| `audits/windows-1.2.3-relay-core/` | **DOES NOT EXIST.** Raw evidence exists at `raw/aimami/1.2.3/windows-x64/relay-core/` but it is **function-surface-only** (`manifest.json: "scope": "function-surface-only"`, `"no_decompile_performed": true`) — 177 functions across 29 confirmed submodules with owner attribution (string/xref evidence, tiers A/B/C), but **zero `decompile()` calls made**. This is well short of even `consumerStartReady` (dim2 backend-owner+non-failed-decompile is not satisfied for any leaf). Never RULE-8 reduced into a canonical bundle. |

Since neither platform has a real gated `relay-core` bundle, and windows has no `bootstrap`
bundle or raw evidence pass at all, **no cross-platform gate can be computed for any cluster**.
Per AGENTS.md ("不用某平台 artifact 结果推断另一个平台" / do not infer one platform from the
other) and per RULE 9 (version migration requires existing bundles to diff against), this package
does **not** promote any target to `consumerStartReady`, `strictImplementationUse`, or
`readyToImplement`. It records the honest dependency-completeness finding and the union of what
raw evidence does exist, so a future producer session knows exactly what remains.

## What this package IS

A diagnostic-only, read-only synthesis (analogous to `audits/macos-1.2.3-relay-core/`'s own
`lightweight_coverage_audit` pattern) that:
1. Confirms the dependency-completeness gap (table above), grounded in the actual files read this
   session (paths in `pointers/evidence-paths.md`).
2. Surfaces the raw windows-x64 relay-core function-surface data (177 functions / 29 submodules)
   that already exists but is unreduced, so it is discoverable from the cross-package entry point.
3. Records the bootstrap cross state: macOS side real (`consumerStartReady`, 4 leaves, with its
   own dim1/dim3/dim4/dim6 open), Windows side `not_started` — cross = `blocked`.
4. Leaves an explicit action list for the next producer session (see `AI.md`).

## What this package is NOT

- Not a `readyToImplement`/`strictImplementationUse` bundle for any leaf.
- Not a replacement for the still-pending RULE-8 reduce of
  `audits/windows-1.2.3-relay-core/` (from the existing surface-only raw) or
  `audits/windows-1.2.3-bootstrap/` (not started at all).
- Not an upgrade of `audits/macos-1.2.3-relay-core/` from diagnostic-only to a real gated bundle.

## Cross Gate Summary

| cluster/module | macOS | Windows | cross |
|---|---|---|---|
| bootstrap (4 leaves: app_run_entry, bootstrap_cache, auto_switch_pending_emitter×2) | `consumerStartReady` (real canonical bundle) | `not_started` (no bundle, no dedicated raw pass) | `blocked` — no windows evidence to pair with |
| relay-core (29 windows-confirmed submodules; 19 clusters in the 1.0.9 taxonomy) | `diagnostic-only` (content largely present inside `audits/macos-1.2.3-relay/`'s declared scope per its own coverage audit, but never RULE-9 diffed/reduced into a standalone gated bundle; 2/19 legacy clusters — `relay_web_executor`/`relay_web_tools` — have **zero** discoverable 1.2.3 evidence on macOS) | `surface-only` (177 functions/29 submodules owner-attributed via string/xref evidence; **zero decompile**) | `blocked` for all clusters — neither platform reaches `consumerStartReady` independently |

## Platform Policy

- macOS and Windows gates are independently evaluated; this package does not infer one from the
  other (per AGENTS.md red line).
- The windows-x64 relay-core surface pass (`raw/aimami/1.2.3/windows-x64/relay-core/manifest.json`)
  itself documents that it used macOS module names **only as search hints**, independently
  re-confirmed on Windows via `find_regex`, and left 4 mac-observed module names
  (`transition_journal`, `breaker`, `native_responses_compat`, `upstream_url`) as `Unknown` on
  Windows rather than assumed present or absent. Note: a top-level `raw/aimami/1.2.3/windows-x64/transition_journal/`
  directory does exist in the raw tree, which is not obviously consistent with that manifest's
  "zero hits" claim for `transition_journal` specifically — this discrepancy is recorded as an
  open question in `SYSTEM-DIFF.md`, not resolved here (no re-verification IDA call was made this
  session; resolving it requires either re-reading the windows relay-core manifest's raw
  evidence trail or a fresh `find_regex` check).
