# Interface: confirm_pending_auto_switch_and_restart_codex

**command**: `confirm_pending_auto_switch_and_restart_codex`
**module**: codexmate_lib::commands::system
**version**: AiMaMi 1.1.1 macOS ARM64
**session**: wf-aimami111-delta-20260616

---

## Request DTO

argKeys=[] — zero-arity command, no arguments.

Frontend wrapper: `confirmPendingAutoSwitchAndRestartCodex: () => ne("confirm_pending_auto_switch_and_restart_codex")`

---

## Response DTO

Success: `CoreEnvelope<SwitchPayload>`

```json
{
  "data": { /* SwitchPayload — same as confirm_pending_auto_switch cmd 10/76 */ },
  "warnings": [
    {
      "code": "CLIENT_RESTART_RECOMMENDED",
      "msg": "Restart Codex clients for the new auth snapshot to take effect."
    }
    /* additional warnings from append_switch_warning if snapshot broadcast returns msg */
  ]
}
```

Note: SwitchPayload inner JSON field names are accepted_unknown (serde derive from make_account_summary_from_item). See cmd 10/76 evidence for field structure.

---

## Error Envelope

```
CoreError(discriminant) — returned as Err variant in CoreEnvelope
```

| Code | Trigger |
|---|---|
| 7 / NotFound | "No pending auto-switch request" — pending-auto-switch.json missing or invalid |
| 7 / NotFound | "No AiMaMi registry exists yet" — registry.json not found |
| 2 / IoError | dynamic path + io_error string (file read/write failures) |
| 9 / Other | "Codex launch timed out" — all 3 launch paths exhausted without process appearing |
| 9 / Other | joined " \| " string — multiple restore failures during rollback |

---

## Side Effects (ordered)

1. **READ** `{repo}/pending-auto-switch.json` — load SwitchRequest (AccountSummary-shaped struct)
2. **READ** `{repo}/registry.json` — load current registry
3. **COPY** active auth → timestamped backup (core::auth::current_timestamp)
4. **COPY** target account auth → active auth path
5. **WRITE** `{repo}/registry.json` — updated activeAccountKey, updatedAt, items[n].active=1
6. **CLEAR** auto-switch snooze state (two internal paths via clear_auto_switch_snooze @ 0x1004c8120)
7. **OS PROCESS STOP** — request_codex_app_quit (SIGTERM/AppleScript) → poll is_process_running(50ms) up to 5s → kill_codex_processes_until_clear (fallback)
8. **OS PROCESS LAUNCH** — try in order:
   a. `open -b <bundle_id_16B>` (unk_10114F1A0 — e.g., "dev.codex.Codex" or similar)
   b. `open -b <bundle_id_16B>` (unk_10114F1B0 — secondary bundle variant)
   c. `open ~/Applications/Codex.app`
   d. `open /Applications/Codex.app`
   — each attempt waits up to 3s for process to appear (80ms poll)
9. **ROLLBACK** (only on relaunch failure): FileRestoreState::restore x4 — remove or re-write each snapshotted auth/registry file
10. **EMIT** Tauri runtime-snapshot event (broadcast_runtime_snapshot)

---

## Platform Scope

- **macOS**: confirmed (this evidence)
- **Windows**: Unknown — macOS evidence not extrapolated; Windows has separate symbol `confirm_pending_auto_switch_owner_sys@0x14026ea00` (1.0.9) and `0x140952070` (1.1.1, confirmed in Windows INDEX entry)

---

## Relationship to confirm_pending_auto_switch (cmd 10/76)

This command is a superset:
- Shares same Repository::confirm_pending_auto_switch core implementation (0x1004cd9b0)
- Adds: capture_switch_rollback_state (pre-switch snapshot) + relaunch_codex_after_success (process restart) + FileRestoreState::restore (rollback on failure)
- Same response type CoreEnvelope<SwitchPayload>
- Same error codes for the confirm step; adds 9/Other for launch timeout and rollback failures
