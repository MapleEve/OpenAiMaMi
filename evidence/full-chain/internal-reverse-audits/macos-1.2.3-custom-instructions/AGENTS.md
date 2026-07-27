# AGENTS.md - macos 1.2.3 custom-instructions audit

RULE9 version-migration check against `macos-1.0.9-custom-instructions`. Verifies (1) frontend
wrapper command names unchanged in `ipc-contracts.jsonl`, (2) backend command-owner census
still 0 hits, and (3) whether a literal `grep -i "custom.instruction"` across backend evidence
is still 0. Check (3) failed (1 incidental ICF-folded-symbol-alias hit for
`CustomInstructionProtectionState`), so this package is a distilled delta note, not a pure
migration. Do not convert the flagged `CustomInstructionProtectionState` signal into a command
owner or backend parity claim — it is an unconfirmed, uncorroborated, single-hit structural
signal only.
