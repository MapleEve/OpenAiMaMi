{
  "schema": "c5cm.reverse.module_ai.v1",
  "target": "macos-1.2.3-custom-instructions",
  "status": "distilled_partial_change_vs_1.0.9",
  "commands": [
    "load_custom_instruction_state",
    "preview_custom_instruction_apply",
    "apply_custom_instruction",
    "clear_custom_instruction_block",
    "rollback_custom_instruction"
  ],
  "remaining_gaps": [
    "codexmate_lib::core::models::CustomInstructionProtectionState real shape/variants/usage sites not recovered (single ICF-folded stub hit only, no independent function body)"
  ],
  "warning": "No Tauri command owner exists for the 5 frontend wrapper commands in 1.2.3 (same as 1.0.9). A new backend model type name (CustomInstructionProtectionState) surfaced via ICF-folded symbol alias but is not corroborated by any other evidence in this audit pass."
}
