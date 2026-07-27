# AI.md — cross-1.2.3-relay-core-bootstrap

Machine: <host> | Session: cross123-relay-core-bootstrap-distillation-20260725 | Produced: 2026-07-25

## Task type

`distillation` — read-only synthesis of pre-existing SMB evidence. No new IDA MCP calls made
this session. No new raw evidence produced. This package's sole output is the
dependency-completeness finding and pointer consolidation below.

## Target Universe

AiMaMi 1.2.3 relay-core (legacy 19-cluster taxonomy from `audits/cross-1.0.9-relay-core-bootstrap/`)
+ bootstrap (4 leaves, same taxonomy as `audits/macos-1.0.9-bootstrap/`) — both platforms
(macOS arm64 + Windows x64).

Binary SHAs: mac=`25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21` (from
`audits/macos-1.2.3-bootstrap/manifest.json`), win=`aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`
(from `raw/aimami/1.2.3/windows-x64/relay-core/manifest.json` and
`audits/windows-1.2.3-relay/manifest.json`).

## Coverage Status (grounded, as of 2026-07-25)

### bootstrap

- **macOS**: real canonical bundle `audits/macos-1.2.3-bootstrap/`. `consumerStartReady` for 4
  leaves (`app_run_entry`, `bootstrap_cache`/`load_bootstrap_state`,
  `auto_switch_pending_emitter`/`dismiss_pending_auto_switch`,
  `auto_switch_pending_emitter`/`load_pending_auto_switch`). dim1 (frontend trace)/dim3 (deep
  call-tree)/dim4 (DTO/error boundary)/dim6 (acceptance mapping) all explicitly open — this is
  NOT `strictImplementationUse`. Two 1.0.9-taxonomy leaves have no 1.2.3 analog found this
  session: `boot_spawn_threads` (`blocks_start` — may be inside unopened `RelayManager::new`
  internals) and `managed_state_registry` (`accepted_unknown` — genuine architecture change,
  calls now inlined into `app_run_entry` rather than a separate function).
- **Windows**: **no canonical bundle, no dedicated raw evidence pass.**
  `audits/macos-1.2.3-bootstrap/manifest.json` field `cross_platform_sibling` literally says
  `"none produced this session (windows-1.2.3-bootstrap not attempted)"`. Checked
  `raw/aimami/1.2.3/windows-x64/` for a bootstrap-equivalent tree; found `runtime/` and
  `codex_runtime/` directories but neither was triaged as a bootstrap module (no manifest, no
  SURFACE-MANIFEST, no owner-map for either under a "bootstrap" framing). Status: `not_started`.
- **Cross**: `blocked` — cannot pair a real macOS bundle with a nonexistent Windows bundle.
  Per AGENTS.md, Unknown must stay Unknown; not inferred from macOS.

### relay-core

- **macOS**: `audits/macos-1.2.3-relay-core/` exists but is `package_kind:
  lightweight_coverage_audit` (diagnostic-only, produced same day 2026-07-25). Its own verdict:
  `PARTIAL`, `covered_by_relay_bundle: false`. Method: disk-grounded cross-check only (no live
  IDA run), comparing 1.0.9's 19-cluster relay-core taxonomy against the 32-submodule
  `core::relay::*` scope declared by `audits/macos-1.2.3-relay/`. Result: 15/19 legacy clusters
  have function-name-level matches inside `audits/macos-1.2.3-relay/`'s scope (content-level
  absorption, never RULE-9-diff-verified); 1/19 (`relay_proxy_config`) confirmed relocated to
  `commands::system` (covered by `audits/macos-1.2.3-system/`); 2/19
  (`relay_web_executor`, `relay_web_tools`) have **zero** discoverable 1.2.3 evidence anywhere in
  the macOS raw tree (`Unknown` — could be removed feature or could need `func_query` symbol
  enumeration to rule out ICF/monomorphization masking per red line 15
  FOUR_ANGLE_COMPLETENESS, not done in either this pass or the relay-core diagnostic pass).
- **Windows**: **no canonical bundle.** Raw evidence exists at
  `raw/aimami/1.2.3/windows-x64/relay-core/` — a **function-surface-only** pass (session
  `relay123-surface`, 2026-07-23): 177 unique functions across 29 confirmed
  `core::relay::*` submodules, owner-attributed via 4 evidence layers (managed-block/DTO-field
  string search, panic-Location two-hop xref, tauri command-name 1-hop xref, opportunistic
  type-name xref), tiered A (dispatcher, 0 found)/B (named via prior full-decompile
  baseline)/C (still `sub_XXXX`, undecompiled). **`no_decompile_performed: true`** for this
  entire pass — dim2 (backend owner + non-failed decompile) is NOT satisfied for any of the 177
  functions by this evidence alone (some may already be decompiled+named from the earlier
  `wf-aimami123-delta-20260721` baseline — 59/172 panic-Location-attributed functions already had
  real names before this surface pass per its own `SURFACE-MANIFEST.md` "IDB baseline note" — but
  that is a different, not-yet-cross-referenced evidence source; not verified in this session).
  Never RULE-8 reduced into `audits/windows-1.2.3-relay-core/`.
- **Cross**: `blocked` for all clusters. Neither platform independently reaches
  `consumerStartReady` for relay-core as a standalone gated module (macOS content exists but is
  diagnostic-only / not formally closed; Windows has owner-surface but zero decompile).

## Unknown List (explicit, must not be assumed)

- `relay_web_executor` / `relay_web_tools` — no 1.2.3 evidence found on macOS at all (could be
  removed feature, could be a symbol-enumeration gap; not resolved by either this pass or the
  macos-1.2.3-relay-core diagnostic pass).
- Windows relay-core: whether the 177 surface-attributed functions are actually decompiled+named
  already (partially, per the baseline note) vs still `sub_XXXX` — this package did not
  cross-reference `owner-map.jsonl` tier counts to compute the real percentage; see
  `owner-map.jsonl` at `raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl` for the
  per-function tier detail if a future session wants that number.
- Windows bootstrap — completely unstarted; no target list, no raw evidence, no triage.
- `transition_journal` discrepancy: `raw/aimami/1.2.3/windows-x64/relay-core/manifest.json`
  claims zero Windows string-search hits for `transition_journal`, but a top-level
  `raw/aimami/1.2.3/windows-x64/transition_journal/` directory exists in the raw tree. Not
  resolved this session (would need to open that directory's own manifest/status files or a
  fresh IDA check; out of scope for a read-only distillation pass).
- dim6 acceptance mapping — not applicable yet since no cluster reaches even
  `strictImplementationUse` in this cross view.

## Forbidden Assumptions (cross-platform)

- Do not assume Windows relay-core has the same 19/29-cluster shape as macOS 1.0.9's taxonomy —
  the Windows surface pass found 29 confirmed submodules using its own independent evidence, a
  different count than macOS's 32-submodule `core::relay::*` scope declaration; the two counts
  have not been reconciled 1:1 in this pass.
- Do not treat `audits/macos-1.2.3-relay-core/`'s "content largely absorbed" language as a closed
  gate — it is explicitly `diagnostic-only`, `covered_by_relay_bundle: false`.
- Do not treat the windows-x64 relay-core surface pass's owner attribution as decompile evidence
  — `no_decompile_performed: true` is explicit in its manifest.
- Do not assume `boot_spawn_threads`/`managed_state_registry` are missing on Windows just because
  they're Unknown/accepted_unknown on macOS — Windows bootstrap has literally not been examined.

## Re-runnable commands / next steps for a future producer session

1. **Windows relay-core decompile pass**: consume `raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl`
   (177 functions, tiers A/B/C) as the target list; `decompile()` the tier-C (`sub_XXXX`,
   undecompiled) functions; RULE-8 reduce into `audits/windows-1.2.3-relay-core/`.
2. **Windows bootstrap triage**: mirror the `mac-1.2.3-bootstrap-triage-20260725` session's method
   (triage unclassified generic functions for the bootstrap sequence) against the Windows binary;
   likely starting points are `raw/aimami/1.2.3/windows-x64/runtime/` and
   `raw/aimami/1.2.3/windows-x64/codex_runtime/`, cross-checked against
   `raw/aimami/1.2.3/windows-x64/manager/ida/pseudocode/bootstrap_0x14085a330.c` (a function
   literally named `bootstrap` was already observed under `manager/` in this session's directory
   scan — not yet triaged as the bootstrap-module leaf; flag for the next session, do not assume
   it is the analog without opening and reading it).
3. **macOS relay-core formal RULE-9 migration**: produce
   `audits/macos-1.2.3-relay/logic/NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md` formally diffing against
   `audits/macos-1.0.9-relay-core/`'s 19-cluster target universe (currently only done informally
   in the diagnostic pass).
4. **`relay_web_executor`/`relay_web_tools` existence check**: run `func_query` full symbol
   enumeration (not string-pool-dependent) on both platforms to falsify "removed feature" vs
   "unrecognized name" per FOUR_ANGLE_COMPLETENESS (red line 15).
5. Once all four source bundles reach at least `consumerStartReady` independently, re-run this
   cross-synthesis to compute a real cross gate matrix (following the
   `cross-1.0.9-relay-core-bootstrap/` template's per-cluster table format).

## Source Bundles / Evidence Consulted

Read `pointers/evidence-paths.md` for the full list of files read this session.
