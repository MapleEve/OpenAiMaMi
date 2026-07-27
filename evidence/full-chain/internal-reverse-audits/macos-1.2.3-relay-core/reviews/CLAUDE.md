# reviews/CLAUDE.md — macos-1.2.3-relay-core

Reviewer: Claude (this session, `macos-1.2.3-relay-core-reassign-20260726`, machine=<host>).

## Context

This package was created 2026-07-25 by an earlier <host> session as a `lightweight_coverage_audit`
(diagnostic-only), left with `gate-report.json` MISSING, `logic/` empty, and no `reviews/` -- the OUTPUT-SPEC.md
file skeleton was never completed because the package fell under `relay123-surface`'s (machine=<host>,
claimed 2026-07-23) "relay 域全量逆向-面枚举" in-progress claim, and every subsequent session (2026-07-24 through
2026-07-26, per `REVERSE-STATUS.md` lines ~4234/4247/4250/4264) correctly treated it as `owned_by_other_producer`
and read-only avoided it. By 2026-07-26 that claim had been open 3+ days with zero completed/DONE line and zero
canonical-bundle output for this specific package. The user explicitly authorized `EXPLICIT_REASSIGN_OWNER` in
chat on 2026-07-26 to unblock this one package; see `REVERSE-STATUS.md` for the full reassignment record and
`GATE-SPEC.md §PREWRITE_PRODUCER_COLLISION_GATE_V1` for the governing protocol.

## Method

1. Re-read `internal-reverse/AGENTS.md`, `GATE-SPEC.md` (full `PREWRITE_PRODUCER_COLLISION_GATE_V1` text),
   `CLAUDE.md`, `REVERSE-STATUS.md` (the `relay123-surface` claim line and all subsequent cross-referencing lines),
   `INDEX.jsonl` (grep for `relay123-surface` and `macos-1.2.3-relay-core`, found 8 raw-evidence lines all
   attributed to `relay123-surface`, none of which are touched by this session).
2. Read the existing package in full: `manifest.json`, `README.md`, `AI.md`, `SYSTEM-DIFF.md`,
   `pointers/evidence-paths.md` -- all pre-existing conclusions left as-is (non-destructive; only new files added
   and manifest.json amended with a dated resolution section, not rewritten).
3. IDA_LIVE_GATE passed on both endpoints before any query: macOS <host> (`status=ok`,
   `IDA decompiler_ready=true`, `module=AiMaMi`) and Windows <host> (`status=ok`, `IDA decompiler_ready=true`,
   `module="AiMaMi.1.2.3 win64.exe"`).
4. Ran the two open Unknowns from this package's own `AI.md next_actions_for_next_worker` item 1 (macOS
   func_query for `relay_web_executor`/`relay_web_tools`) and item 2 (independent Windows repeat, not inferred
   from macOS) to closure. See `gate-report.json` for the full method/pattern list and positive-control
   verification (the query tool itself was confirmed working via `handle_tray_menu_event`, `codex_diagnostic`,
   and a known-absent sentinel pattern before trusting the zero-hit results).
5. Wrote `logic/REGISTRATION-TABLE-1.2.3.md` (previously missing), `gate-report.json` (previously missing), this
   review file (previously missing `reviews/`), amended `manifest.json` with a dated resolution block, and
   appended (not overwrote) resolution notes to `README.md` and `AI.md`.

## Findings

- **relay_web_executor / relay_web_tools: confirmed_removed**, cross-platform, independently verified (not
  inferred mac->win or win->mac). This was a genuine 1.0.9 feature (both `strictImplementationUse` in
  `cross-1.0.9-relay-core-bootstrap/data/producer-ledger.json`), not an uncaptured gap -- so this is a real
  product regression/removal between 1.0.9 and 1.2.3, not evidence the prior audit simply missed. I classify
  this outside the standard four-way orphan taxonomy (see `gate-report.json` angle D) because opening a
  `truly_undone` gap-work-item would be wrong: there is nothing left to reverse.
- The other 15 matched clusters and 1 relocated cluster (`relay_proxy_config` -> `commands::system`) were already
  correctly assessed by the 2026-07-25 session; I did not re-verify each one individually (that would duplicate
  `audits/macos-1.2.3-relay/`'s own gate ownership) but did cross-check the disk-grounded function count
  (657 `.c` files / 32 submodules) as a sanity bound.
- The package's overall `verdict` remains **PARTIAL** (not upgraded to a clean covered_by_relay_bundle=true, and
  no gate promotion): the Windows relay-core canonical bundle still does not exist (113/177 tier-C functions
  never decompiled), and no formal RULE-9 `NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md` has been produced inside
  `audits/macos-1.2.3-relay/`. I did **not** attempt either of those in this session -- they are explicitly out
  of scope for a narrow `EXPLICIT_REASSIGN_OWNER` takeover of this one stalled package, and the Windows-side raw
  evidence (owner-map.jsonl, 8 INDEX.jsonl lines) remains `relay123-surface`-attributed and untouched.

## Unknowns / not closed by this review

- Windows relay-core canonical bundle (`audits/windows-1.2.3-relay-core/`): still does not exist. Open, unclaimed
  by this session.
- Formal RULE-9 migration matrix for the 14 remaining (matched, non-relocated, non-removed) clusters: still not
  produced. Belongs inside `audits/macos-1.2.3-relay/logic/`, not this package.
- `relay-core-bootstrap` cross-platform module: already has its own package (`audits/cross-1.2.3-relay-core-bootstrap/`,
  DONE by other sessions 2026-07-25/26); not re-examined here.

## Cross-review

No second independent reviewer (`reviews/AGENT.md`) has been produced for this package yet. Per OUTPUT-SPEC.md
"验收条件", at least one review file (this one) satisfies the minimum requirement; `reviews/CROSS-REVIEW.md` is
not required until a second review exists.
