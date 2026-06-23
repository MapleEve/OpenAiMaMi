# configure_auto_switch — Interface / DTO / Error / Side-effect

**version**: 1.1.1
**platform**: macOS ARM64
**module**: codexmate_lib::commands::system
**session**: wf-aimami111-delta-20260616

---

## Input Parameters (argKeys confirmed from ipc-contracts.jsonl)

| Field | Type | Constraint | Source |
|---|---|---|---|
| `threshold5hPercent` | u32 | 0–100 (≥101 → error) | Frontend ipc-contracts + backend validation 0x1010B4708 |
| `thresholdWeeklyPercent` | u32 | 0–100 (≥101 → error, conditional) | Frontend ipc-contracts + backend validation 0x1010B472B |

**Frontend wrapper** (confirmed):
```js
configureAutoSwitch:(t,e)=>ne("configure_auto_switch",{threshold5hPercent:t,thresholdWeeklyPercent:e})
```

**Backend param mapping (U3 RESOLVED — session wf-aimami111-delta-20260616, 2026-06-17)**:

The frontend sends exactly `{threshold5hPercent: u32, thresholdWeeklyPercent: u32}`. No hidden params. The 4-arg Repository call is explained by **Tauri `Option<u32>` ABI deserialization**:

- The Rust `#[command]` function signature: `configure_auto_switch(threshold_5h_percent: u32, threshold_weekly_percent: Option<u32>)`
- Tauri deserializes `Option<u32>` as two args: `(bool discriminant, u32 value)`
- Therefore: `a3 = threshold5hPercent`, `a4 = (thresholdWeeklyPercent != null ? 1 : 0)`, `a5/a6` = weekly percent value spread across the Option layout
- Evidence: ipc-contracts.jsonl confirms exactly 2 argKeys; frontend wrapper `(t,e)=>ne("configure_auto_switch",{threshold5hPercent:t,thresholdWeeklyPercent:e})` shows no additional params
- Backend validation branch `if (v44 & 1) != 0` tests the Option discriminant — only validates weekly threshold if Some variant

**U3 status: RESOLVED (accepted_unknown downgraded to resolved)**

---

## Response Payload (CoreEnvelope<AutoSwitchConfig>)

Success path (`*a1 = 0x8000000000000000` is **NOT** set):
```
CoreEnvelope {
  ok: AutoSwitchConfig {
    serviceLabel: String = "dev.aimami.auto-switch"  // 22B, allocated per call
    threshold5hPercent: u32    // v37, echoed back (0 if snoozed)
    thresholdWeeklyPercent: u32 // v38, echoed back (0 if snoozed)
    snoozeActive: bool          // v39 = snooze_state & 1
    daemonState: bool           // v40 = check_daemon_state() result
    // additional fields may exist in 0x78-byte struct — partial layout
  }
}
```

Error path (sentinel `0x8000000000000000`):
- `a1[1..4]` = CoreError string (3-word fat pointer to error message)

---

## Error Paths

| Error | Trigger | Message |
|---|---|---|
| threshold5h out of range | `threshold5hPercent >= 101` | `"5h threshold must be 0-100, got {N}"` |
| weekly threshold out of range | `thresholdWeeklyPercent >= 101` AND `has_schedule` flag set | `"$weekly threshold must be 0-100, got {N}"` |
| persist IO error | `std::fs::write` fails on registry.json | CoreError wrapping `io::Error` |
| mutex poisoned | Repository mutex poisoned (prior panic) | 41-char static error string |

---

## Side Effects

1. **registry.json rewritten** — full serde_json serialize of RegistryFile, written to `repo+216` path
2. **registry.json backup** — conditional (persist_registry a4=1): if file exists, copy to timestamped backup path in backup dir
3. **CodexPaths::ensure_directories** — 9 dirs created on every persist call
4. **daemon state probed** — lsof subprocess spawned via `check_daemon_state`, result included in response

---

## Delta vs 1.0.9

| Aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| argKeys | `{enabled, thresholdPct, hasSchedule, scheduleMin}` | `{threshold5hPercent, thresholdWeeklyPercent}` |
| enabled param | in configure_auto_switch | moved to `set_auto_switch` command |
| threshold type | single `thresholdPct` (0-100) | two time-window thresholds: 5h + weekly |
| schedule params | `hasSchedule + scheduleMin` (minutes) | REMOVED; replaced by weekly threshold |
| validation errors | 1 msg: "threshold must be 0-100" | 2 msgs: "5h threshold..." + "weekly threshold..." |
| core impl VA | `0x1005e9a5c` | `0x1004c7280` |
| core size | 0x380=896B | 0x392=914B |
| owner VA | `0x1002603c8` | `0x100619b80` |
| response struct | AutoSwitchConfig w/ snooze+daemon | same pattern, new threshold field names |

---

## Platform Gate

- macOS ARM64: **confirmed** (this session)
- Windows x64: **Unknown** — not collected; per GATE-SPEC do not infer from macOS

---

## Gate Assessment

- dim1 (frontend CCF): **accepted** — ipc-contracts.jsonl confirmed, wrapper function confirmed, argKeys confirmed
- dim2 (backend owner + pseudocode): **accepted** — owner 0x100619b80 + core 0x1004c7280 decompiled, non-failed
- dim3 (call-tree to impl leaves): **accepted** — depth=5+; fs::write, lsof, DirBuilder::create reached
- dim4 (interface/DTO/error): **partial** — argKeys confirmed, error strings confirmed, response struct partially inferred (U1 open gap on exact field layout)
- dim5 (same-platform gate): **macOS confirmed; Windows Unknown**
- dim6 (test/acceptance mapping): **not in scope (producer pass)**

**Overall gate**: `strictImplementationUse` — U3 resolved 2026-06-17; dim1+dim2+dim3+dim4(argKeys+errors+param-mapping) accepted; dim4 remaining gap U1 (exact response byte layout) is accepted_unknown (does not block strict gate); dim5 macOS confirmed; dim6 not in scope.

`strictImplementationUse=true` (U3 resolved this session via ipc-contracts re-verification + Tauri Option<T> ABI analysis).
`readyToImplement=false` — dim5 Windows Unknown; dim6 not mapped; U1 response layout partial.
