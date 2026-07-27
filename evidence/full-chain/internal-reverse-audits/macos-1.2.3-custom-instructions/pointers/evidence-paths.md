- 1.0.9 baseline package: `internal-reverse/audits/macos-1.0.9-custom-instructions/`
- 1.2.3 frontend contract: `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
  (5 command hits, count=1 each: `load_custom_instruction_state`,
  `preview_custom_instruction_apply`, `apply_custom_instruction`,
  `clear_custom_instruction_block`, `rollback_custom_instruction`)
- 1.2.3 frontend contract report: `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md`
  (wrapper names: `loadCustomInstructionState`, `applyCustomInstruction`,
  `clearCustomInstructionBlock`, etc.)
- 1.2.3 backend command census: `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`
  (0 hits for any custom-instruction command string)
- 1.2.3 new backend signal evidence file:
  `raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_transition_journal___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_transition_j_0x100373380.c`
  (line 5: `Alternative name` comment lists
  `codexmate_lib::core::models::CustomInstructionProtectionState`)
- IDB (referenced, not opened live in this audit pass): AiMaMi 1.2.3 macOS arm64 binary IDB
  per `raw/binary/` SOT and `VERSION-BASELINE.md` for this version/platform.
