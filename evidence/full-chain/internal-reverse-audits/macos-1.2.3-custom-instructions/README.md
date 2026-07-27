# macos AiMaMi 1.2.3 custom-instructions

Status: distilled_partial_change relative to 1.0.9 (RULE9 checked, not a pure migration).

## Core conclusion (carried over from 1.0.9, re-verified unchanged)

Same-platform backend command census (`backend-baseline/commands-baseline.md`, IDA-derived
Tauri `#[command]` string/owner enumeration) has **0 hits** for any of the 5
custom-instruction commands in 1.2.3, same as 1.0.9:

- `load_custom_instruction_state`: frontend wrapper present (`loadCustomInstructionState`,
  `ipc-contracts.jsonl` count=1); same-platform backend command string/owner absent.
- `preview_custom_instruction_apply`: frontend wrapper present; backend command string/owner absent.
- `apply_custom_instruction`: frontend wrapper present (`applyCustomInstruction`); backend
  command string/owner absent.
- `clear_custom_instruction_block`: frontend wrapper present (`clearCustomInstructionBlock`);
  backend command string/owner absent.
- `rollback_custom_instruction`: frontend wrapper present; backend command string/owner absent.

All 5 frontend wrapper command names are byte-identical to 1.0.9 and appear exactly once each
in `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`.

## Delta vs 1.0.9 (why this is NOT a pure migration)

A literal `grep -ri "custom.instruction"` sweep of the 1.2.3 backend evidence (excluding
`frontend/` and `dumped/assets/`, which are frontend JS, not backend) is **not** 0 hits like
the 1.0.9 check assumed. One incidental hit exists:

- File: `raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_transition_journal___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_transition_j_0x100373380.c`
- The decompiled function at `0x100373380` is the `expecting()` stub of a serde
  `FieldVisitor` — trivially a single `write_str()` call. IDA's ICF (identical code folding)
  collapsed several distinct types' identical-body `expecting` stubs onto this one physical
  address. The "Alternative name" comments list the folded aliases:
  - `codexmate_lib::core::relay::transition_journal::TransitionTarget` (primary/chosen name)
  - `codexmate_lib::core::models::AuthMode`
  - `codexmate_lib::core::models::PlanType`
  - **`codexmate_lib::core::models::CustomInstructionProtectionState`**

This confirms a Rust enum/type named `codexmate_lib::core::models::CustomInstructionProtectionState`
that derives `serde::Deserialize` exists somewhere in the 1.2.3 macOS binary's model layer.
It is a **new structural signal not present in the 1.0.9 package's evidence** (1.0.9's
`AI.md` records `remaining_gaps: []` and an `absence_anchor` with no mention of any
`CustomInstructionProtectionState` type).

### What this delta does and does not mean

- Does **not** mean a Tauri command owner now exists for the 5 frontend wrapper commands —
  `commands-baseline.md` census still shows 0 hits for all 5 command name strings.
- Does **not** provide an independent function body for `CustomInstructionProtectionState`
  itself — because of ICF folding, the only decompiled body at this address is the shared
  generic stub; the type-specific data layout, variants, and any real (de)serialize logic are
  not recoverable from this one hit alone.
- **Does** mean the backend model layer in 1.2.3 is aware of a "custom instruction protection
  state" concept as a typed value (likely an enum with a small variant set, given ICF folded
  it with `AuthMode`/`PlanType`, which are themselves small enums) — i.e., partial backend
  data-model presence where 1.0.9 had none discoverable.
- Cross-checked: this identifier has exactly 1 hit total across all of 1.2.3 evidence — none
  in `windows-x64/`, none in `intermediate/`, none in `backend-baseline/*.md`, none elsewhere
  in `macos-arm64/`. Not corroborated by a second independent hit within current
  (non-exhaustive, ~1954-file) decompiled scope.

## Verdict

`migrated_no_behavior_diff` does **not** apply. This package supersedes a pure RULE9
migration with a **distilled delta note**: core conclusion (no backend command owner for the
5 frontend commands) carries over unchanged from 1.0.9, but a new backend model-type signal
(`CustomInstructionProtectionState`) is now flagged and was absent from the 1.0.9 evidence
scope. Recommend a targeted follow-up census (full symbol/export scan for
`codexmate_lib::core::models::CustomInstructionProtectionState` usage sites, not just this one
ICF-folded stub) if/when this module is prioritized for real backend-parity implementation
work. Until then, product decision boundary from 1.0.9 stands: current C5 custom-instructions
chain is live product/local behavior, not upstream backend owner parity.

See `SYSTEM-DIFF.md`, `manifest.json`, `gate-report.json`, `pointers/evidence-paths.md`.
