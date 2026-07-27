# SYSTEM-DIFF - macos custom-instructions (1.0.9 -> 1.2.3)

- Frontend: unchanged. Same 5 wrapper command names present, 1 occurrence each in
  `ipc-contracts.jsonl`.
- Backend command census (`commands-baseline.md`): unchanged, 0 hits for all 5 command name
  strings in both versions. No Tauri command owner exists for these frontend wrappers in
  either 1.0.9 or 1.2.3.
- Backend model layer: **new in 1.2.3** — an ICF-folded serde `FieldVisitor::expecting` stub
  at `0x100373380` (primary symbol `transition_journal::TransitionTarget::expecting`) carries
  an "Alternative name" alias for `codexmate_lib::core::models::CustomInstructionProtectionState`,
  alongside `AuthMode` and `PlanType`. This is the only occurrence of the identifier anywhere
  in the 1.2.3 evidence tree (macOS or Windows, raw or intermediate). Not present/flagged in
  the 1.0.9 package.
- C5 repository still has its own custom-instructions backend; this remains a C5 product/local
  addition relative to upstream, same as 1.0.9's conclusion.
