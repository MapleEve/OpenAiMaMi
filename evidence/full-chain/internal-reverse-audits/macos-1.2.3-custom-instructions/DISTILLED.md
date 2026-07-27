# DISTILLED — macOS 1.2.3 custom-instructions live re-verification (2026-07-26)

session: mac123-custominstr-gapclose-20260726142739
machine: Maple-M3-Max
purpose: close the readyToImplement asymmetry with `audits/windows-1.2.3-custom-instructions` (gate_accepted=true,
full_leaf_100=true as of session `win-custom-instructions-distill-20260725`) by re-running the identical live
verification methodology on the mac binary and characterizing the one open signal this bundle's 2026-07-25 static
migration check (`data/migration-check-evidence.json`) left unresolved.

raw evidence: `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/aimami/1.2.3/macos-arm64/custom-instructions/live-reverify-20260726.md`
INDEX.jsonl: 5 new append-only rows, session `mac123-custominstr-gapclose-20260726142739` (lines 1911-1915 at time of writing)

## Commands (unchanged set, all 5)

`load_custom_instruction_state`, `preview_custom_instruction_apply`, `apply_custom_instruction`,
`clear_custom_instruction_block`, `rollback_custom_instruction`

## Live verification results (mirrors windows-1.2.3-custom-instructions methodology exactly)

| Technique | Result |
|---|---|
| `func_query` per-command (name_regex, exact command name) | 0/5 hits |
| `func_query` module-wide sweep (`name_regex=custom_instruction`) | 0 hits (stronger than win's stripped-string-pool sweep — mac has full symbol demangling, so this rules out any Rust item, not just dispatcher strings) |
| `find_regex` per-command (string pool) | 0/5 hits |
| `find_regex` broad substring (`custom.instruct`) | 1 hit: `0x1015ff5b9`, a concatenated path-fragment blob (same role as 1.0.9/1.1.1/windows-1.2.3 anchors) |
| `xrefs_to` on the anchor | 1 xref, type=data, from `codexmate_lib::platform::paths::CodexPaths::state_db_score` (0x10053fdf0) — confirms data-only path table, not a command dispatcher |

## Resolved: CustomInstructionProtectionState signal (previously `corroborated_elsewhere: false`, `independent_function_body_recovered: false`)

Live `decompile(0x100373380)` recovered the full pseudocode. The function is a generic
`serde::de::Visitor::expecting()` trait-method body, ICF-folded across 4 unrelated types
(`AuthMode`, `PlanType`, `CustomInstructionProtectionState`, `TransitionTarget`) — it unconditionally writes the
literal string `"field identifier"` regardless of which type it belongs to. It carries **zero type-specific or
command-specific logic**. `recovery_attempts` (false-VA hypothesis, caller-disambiguation) both considered and
ruled inapplicable — see raw evidence file for full reasoning. Conclusion: this signal provides no evidentiary
weight toward a backend command owner existing for custom-instructions; presence of a serde-deserializable DTO
type is orthogonal to presence of a wired Tauri command handler.

## Conclusion

All 5 commands are now live-reverified absent a backend command owner on macOS, on equal evidentiary footing with
the already-accepted windows-1.2.3 conclusion (`same_platform_ida_backend_absence_for_frontend_orphan_command`,
per `audits/windows-1.2.3-custom-instructions/gate-report.json`). This resolves the open question that kept this
bundle at `DISTILLED_PARTIAL_CHANGE` / `full_leaf_100=false`.

**This file does not itself upgrade the gate.** Per this backfill task's non-destructive rule, the following
pre-existing canonical files were read but intentionally left unmodified:

- `gate-report.json` (still `full_leaf_100=false`, `readyToImplement=false`, status=`DISTILLED_PARTIAL_CHANGE`)
- `manifest.json` (still `gate.readyToImplement=[]`)
- `README.md`, `AI.md`, `SYSTEM-DIFF.md`, `reviews/CLAUDE.md`, `pointers/evidence-paths.md`, `logic/*.md`

A canonical producer (or this session re-run with `EXPLICIT_OVERWRITE_CANONICAL`) should fold this evidence into
`gate-report.json`/`manifest.json` to actually flip `full_leaf_100`/`readyToImplement` to `true` and bring the
bundle to full parity with the windows sibling. Until that write happens, the two-platform asymmetry noted in this
backfill task remains formally open at the gate level, even though the underlying evidence is now symmetric.

## Still outstanding (not addressed by this file)

- `reviews/AGENT.md` (Codex independent review) — not present; not fabricated here (would misattribute authorship).
- `reviews/CROSS-REVIEW.md` — cannot be meaningfully written with only one independent review (`reviews/CLAUDE.md`)
  on file; deferred until `reviews/AGENT.md` exists.
- `data/task-plan.json` — added alongside this file in the same round (mirrors the current, unmodified
  `manifest.json` gate object; does not itself assert an upgraded status).
