# Evidence: set_codex_no_account_slots

- **Function**: `codexmate_lib::core::relay::manager::set_codex_no_account_slots`
- **Owner EA**: 0x10079a8a0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/set_codex_no_account_slots_0x10079a8a0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (24 unique):
  - `OnceBox::initialize`
  - `Mutex::lock`
  - `Mutex::unlock`
  - `CodexMutationGate::lock`
  - `RelayManager::snapshot`
  - `validate_no_account_slots`
  - `normalize_no_account_slot_preference`
  - `RelayManager::persist`
  - `RelayManager::snapshot_sanitized`
  - `RelayManager::transition_paths`
  - `RouterOnPlan::from_state`
  - `RouterOnPlan::ensure_ready`
  - `no_account_slot_routing_changed`
  - `router_transition::run`
  - `RelayManager::restore_router_enabled_stably`
  - `launch_codex_app_warning`
  - `verify_target_state_at_with_depth`
  - `codex_config_stale_reason`
  - `RelayState::clone`
  - `SlicePartialEq::equal`
  - `format_inner`
  - `drop_in_place`
  - `__rust_alloc`
  - `__rust_dealloc`
- **Call-tree edges**: 22
- **Terminated reason**: `persistence_commit`
- **Interface type**: internal_method
- **Frontend IPC argKeys**: ["slots", "relaunch"]
- **DTO fields**: {"request": "{slots: Vec<String>, relaunch: bool}", "response": "CoreEnvelope<RelayState>"}
- **Side effects**:
  - ⚠ PERSISTENCE: persist relay state
  - ⚠ ROUTER TRANSITION: may trigger router_transition::run which relaunches Codex
  - ⚠ launch_codex_app_warning if relaunch flag set

## Summary

RelayManager setter: acquires mutation gate + transition lock, validates and normalizes no-account slots, checks if routing changed, if so runs router_transition (may relaunch Codex app with warning), persists state. Returns sanitized relay state. Called by IPC command set_codex_no_account_slots.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
