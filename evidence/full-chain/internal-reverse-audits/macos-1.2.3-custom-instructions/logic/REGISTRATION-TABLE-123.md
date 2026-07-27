# REGISTRATION-TABLE-123 — macOS AiMaMi 1.2.3 custom-instructions

Registration/interface table for the 5 custom-instruction commands, macOS arm64, 1.2.3.
Frontend face is recovered from the minified bundle; backend owner face is **absent** (positively confirmed 0 owners).
Source of truth for names/args: `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` +
`.../frontend/frontend-contract-report.md`.

## Command registration

| command | frontend wrapper | in-args (frontend) | backend owner (mac 1.2.3) | out-DTO / response |
|---|---|---|---|---|
| `load_custom_instruction_state` | `loadCustomInstructionState` | `()` — zero-arity | **ABSENT** (census 0) | Unknown (no owner to read) |
| `preview_custom_instruction_apply` | `previewCustomInstructionApply` | `{ content }` | **ABSENT** (census 0) | Unknown |
| `apply_custom_instruction` | `applyCustomInstruction` | `{ content, templateCode?, templateTitle?, source? }` | **ABSENT** (census 0) | Unknown |
| `clear_custom_instruction_block` | `clearCustomInstructionBlock` | `()` — zero-arity | **ABSENT** (census 0) | Unknown |
| `rollback_custom_instruction` | `rollbackCustomInstruction` | `{ historyId }` | **ABSENT** (census 0) | Unknown |

## Argument object shapes (verbatim from ipc-contracts.jsonl)

- `apply_custom_instruction` → `{content:e.content, templateCode:e.templateCode, templateTitle:e.templateTitle, source:e.source}`
- `preview_custom_instruction_apply` → `{content:e}`
- `rollback_custom_instruction` → `{historyId:e}`
- `load_custom_instruction_state` → `()` (argObject null)
- `clear_custom_instruction_block` → `()` (argObject null)

All wrapper calls route through the shared minified Tauri-invoke callee `re("<command>", <argObject>)`.

## Backend registration status

No Tauri `#[command]` owner is registered for any of the 5 command name strings on the 1.2.3 macOS binary:
`backend-baseline/commands-baseline.md` (`grep custom`) → **0 hits**. The only `custom.instruction`-family backend
token in scope is the model-type name `codexmate_lib::core::models::CustomInstructionProtectionState`, surfaced as an
ICF-folded serde `expecting` alias @ `0x100373380` (see `DELTA-LOGIC-123.md §2`) — a *type-layer* signal, not a
command registration. There is therefore no backend registration table to fill; the row semantics are frontend-only.

## Interpretation

DTO out-shapes, defaults/nullability of the backend contract, error envelopes and side-effect boundaries are all
`Unknown` because there is no upstream mac backend owner to decompile. This registration table documents the
recovered frontend registration face plus the positively-confirmed backend-owner absence; it is not a
strict-implementation contract.

## Source references

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md`
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`
- `internal-reverse/audits/macos-1.2.3-custom-instructions/data/migration-check-evidence.json`
