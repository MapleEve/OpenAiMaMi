# reviews/CLAUDE.md — cross-1.2.3-relay-core-bootstrap

Reviewer: Claude (this session, `cross123-relay-core-bootstrap-distillation-20260725`).

## Method

Read-only cross-check of four candidate source bundles against the `cross-1.0.9-relay-core-bootstrap/`
template's expected inputs (macos-relay-core, macos-bootstrap, windows-relay-core,
windows-bootstrap). For each, opened the actual `manifest.json`/`gate-report.json`/`README.md`
on disk rather than assuming presence from the directory listing alone. No IDA MCP calls made;
no new raw evidence produced.

## Findings

1. Only 2 of 4 expected source directories exist at all under `internal-reverse/audits/`:
   `macos-1.2.3-bootstrap/` (real canonical bundle) and `macos-1.2.3-relay-core/`
   (diagnostic-only). `windows-1.2.3-bootstrap/` and `windows-1.2.3-relay-core/` do not exist as
   directories.
2. Even the 2 that exist are not both gate-closed: `macos-1.2.3-bootstrap` is a real
   `consumerStartReady` bundle; `macos-1.2.3-relay-core` explicitly declines to set any gate
   field (`package_kind: lightweight_coverage_audit`), so it cannot be treated as equivalent to
   the 1.0.9 template's `macos-1.0.9-relay-core` (which was a real 14-cluster gated bundle).
3. Raw (unreduced) Windows relay-core evidence does exist
   (`raw/aimami/1.2.3/windows-x64/relay-core/`) but is explicitly surface-only
   (`no_decompile_performed: true`), so treating it as equivalent to the 1.0.9 template's
   `windows-1.0.9-relay-core` (which had per-cluster IDA-decompiled evidence, just partially
   IDA-offline at reduce time) would overstate its readiness.
4. No Windows bootstrap evidence of any kind was found; this is a strictly worse starting point
   than 1.0.9, where `windows-1.0.9-bootstrap` existed as a real (if IDA-offline-candidate)
   canonical bundle.

## Conclusion

Given (1)-(4), synthesizing a cross-1.2.3-relay-core-bootstrap bundle with real per-cluster gate
promotions (as the 1.0.9 template did) would require fabricating gate states not supported by
evidence — explicitly forbidden by AGENTS.md ("不用某平台 artifact 结果推断另一个平台" / do not
infer one platform from the other, and the general prohibition on treating
medium/low/diagnostic-only evidence as high/accepted proof). I chose instead to write this
package as a diagnostic-only dependency-completeness finding, consistent with the pattern already
used by `audits/macos-1.2.3-relay-core/` itself (which used the identical
`package_kind: lightweight_coverage_audit` framing for an analogous "is this actually covered or
not" question one level down). All gate fields in `manifest.json`/`gate-report.json` in this
package are `false`/`blocked`; no target is promoted.

## Cross-check against REVERSE-STATUS.md

Confirmed via `grep -n "relay-core-bootstrap"` that the only prior mention of this exact
cross-platform module name is in the `[<审计会话> backlog-gap entry, which
lists `relay-core-bootstrap` as one of two still-open cross-platform modules for 1.2.3 (the other
being `home-usage-frontend`) and does not claim any producer session has started work on it. No
collision with an in-progress claim was found before writing this package.

## Not resolved / left for cross-review or a future session

- The `transition_journal` discrepancy (see `SYSTEM-DIFF.md`) — genuinely ambiguous from the
  evidence available in a read-only pass; flagged rather than guessed.
- Whether any of the 177 Windows relay-core surface functions already have real decompiled bodies
  from the earlier `<审计会话> baseline (the surface manifest's own "IDB
  baseline note" claims 59/172 panic-Location-attributed functions were already named before this
  surface pass, but that number refers to a slightly different denominator and was not
  reconciled against the 177-function surface list in this session).

No `reviews/AGENT.md` (Codex) counterpart was produced this session — only a single reviewer
(Claude) worked this distillation pass. `reviews/CROSS-REVIEW.md` is therefore omitted; if a
Codex review is added later, add `CROSS-REVIEW.md` at that time per AGENTS.md's cross-review
rule.
