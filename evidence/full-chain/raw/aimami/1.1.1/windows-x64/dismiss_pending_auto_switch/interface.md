# dismiss_pending_auto_switch — Interface Contract (Windows x64)
# AiMaMi 1.1.1 win64.exe · gold-leaf session = wf-aimami111-delta-20260618-goldleaf

## dim1 — Frontend CCF (Confirmed)

Two call sites identified in `assets/index-DdcCOEJG.js`:

**CCF-1: Static wrapper** (line 86)
```
fn: dismissPendingAutoSwitch  →  ne("dismiss_pending_auto_switch")
tauriInvoke: "dismiss_pending_auto_switch"
argKeys: []    ← zero args (no parameters sent)
snippet: ne("dismiss_pending_auto_switch")
evidence: frontend/ast-facts.json#functions:assets/index-DdcCOEJG.js:dismissPendingAutoSwitch:86
```

**CCF-2: Call site in dismiss handler** (line 316)
```
fn chain: dismiss → dismissPendingAutoSwitch → ne("dismiss_pending_auto_switch")
guard: if(!(!t||r)){i(!0);try{await Ge.dismissPendingAutoSwitch(),e(null)}finally{i(!1)}}
callsite snippet: Ge.dismissPendingAutoSwitch()
column: 177058
evidence: frontend/ast-facts.json#functions:assets/index-DdcCOEJG.js:dismiss:316
```

Interpretation: `dismiss` in a UI component calls `Ge.dismissPendingAutoSwitch()` which is the static wrapper `dismissPendingAutoSwitch` at line 86. The guard checks `!(!t||r)` (state must be loaded and not already dismissing), sets loading state `i(!0)`, awaits the command, clears state on success, always resets loading in `finally`.

**No args from frontend** — command takes zero parameters. The IPC handler reads `"repo"` from internal ctx, not from frontend args.

---

## dim2 — IPC Arg Extraction

Handler VA: `0x140029270`

Arg extraction in handler:
```
window_ref  ← memcpy(ipc_ctx, 520 bytes)        // ctx+0
repo_ref    ← memcpy(ipc_ctx+520, 400 bytes)    // ctx+520
pending_state_oword ← *(ipc_ctx+920)            // mutex state
pending_state_extra ← *(ipc_ctx+936)
```

IPC serde tag built by handler (not from frontend):
```
tag.name     = "dismiss_pending_auto_switch"  (len=27) @ 0x1412AC2DB
tag.param    = "repo"  (len=4)
```

**argKeys from frontend: []** — command is a zero-argument invoke.

---

## dim3 — Deep Call Tree (depth ≥ 5)

See `call-tree.md` for full annotated tree. Summary of deepest chains:

**Chain A — snooze file write (depth 6):**
```
core_111 → sub_1403A64F0 → win32_file_write_bytes_111 (0x141093710)
    → sub_14107C990 (CreateFile)  [LEAF: Win32]
    → sub_14107BF00 (write loop)
    → CloseHandle  [LEAF: Win32]
```

**Chain B — snooze file delete (depth 7):**
```
core_111 → snooze_file_delete_111 → win32_path_canonicalize_111
    → GetFullPathNameW  [LEAF: Win32]
core_111 → snooze_file_delete_111 → snooze_file_delete_win32_111
    → DeleteFileW  [LEAF: Win32]
    → SetFileInformationByHandle (FileDispositionInfo=19)  [LEAF: Win32, fallback]
```

**Chain C — timestamp (depth 3, terminates at Win32):**
```
core_111 → system_time_precise_u32_111 → GetSystemTimePreciseAsFileTime  [LEAF]
core_111 → elapsed_since_ts_111 (pure arithmetic, no calls)
```

---

## dim4 — DTO Shapes

### PendingAutoSwitchPayload (INPUT — read from auto-switch-pending.json)
```
serde struct tag @ 0x1412ACF73: "struct PendingAutoSwitchPayload with 5 elements"
element_count: 5

Field layout in v38[] (80-element qword array):
  currentAccountKey:   v38[10] ptr / v38[11] len   — serde key "currentAccountKey"
  candidateAccountKey: v38[16] ptr / v38[17] len   — serde key "candidateAccountKey"
  (opt fields):        v38[18..29]                  — snooze config, schedule timestamps
  (flag/tag):          v38[52] / v38[54..55]        — optional discriminant fields

File path: acct+648 (ptr) / acct+656 (len) — path to auto-switch-pending.json
```

### AutoSwitchSnoozeRecord (OUTPUT — written to auto-switch-snooze.json)
```
serde struct tag @ 0x1412AD107: "struct AutoSwitchSnoozeRecord with 3 elements"
element_count: 3

Fields:
  currentAccountKey:   serde key "currentAccountKey"   @ 0x1412AD0D8
  candidateAccountKey: serde key "candidateAccountKey"  @ 0x1412AD0E9
  dismissedAt:         serde key "dismissedAt"           @ 0x1412AD0FC
                       type: Duration { sign, secs, nanos }
                       generated at dismiss time via GetSystemTimePreciseAsFileTime
                       NOT read from pending payload — freshly computed

File handle: acct + 84 * sizeof_ptr   (i.e. a2 + 84 in sub_1403A64F0)
Destination file: auto-switch-snooze.json

JSON output format:
  { "currentAccountKey": <str>, "candidateAccountKey": <str>, "dismissedAt": <Duration> }
  optional: extra records appended after '}' with newline separator
```

### Duration encoding (dismissedAt)
```
Epoch constants: 3577643008 (low DWORD) / 27111902 (high DWORD)
= Windows FILETIME at Unix epoch (116444736000000000 × 100ns ticks)
Conversion in elapsed_since_ts_111 (0x14107B790):
  delta_ticks = FILETIME_now_low32 - epoch_const_combined
  secs  = delta_ticks / 10_000_000  (0x989680)
  nanos = (delta_ticks % 10_000_000) × 100
  sign  = (FILETIME < epoch) ? 1 : 0

Duration struct layout (out_dur, a1):
  a1+0:  sign  (u64, 0=positive, 1=negative)
  a1+8:  secs  (u64)
  a1+16: nanos (u32, 100-ns units × 100)
```

---

## dim5 — Same-Platform Gate

IDB path: `<本地路径>

Win32 APIs called (all Windows-only):
- `GetSystemTimePreciseAsFileTime` (kernel32) — timestamp
- `DeleteFileW` (kernel32) — delete snooze file
- `SetFileInformationByHandle` (kernel32) — delete-on-close fallback
- `GetFullPathNameW` (kernel32) — path canonicalization
- `GetLastError` (kernel32) — error classification
- `CloseHandle` (kernel32) — file handle cleanup
- `_InterlockedCompareExchange8` — CAS for mutex acquire (Windows intrinsic)

No POSIX/macOS codepath present in this binary. Mac build has equivalent platform-level separation (separate leaf per OS per smb-dual-platform-leaf-forks memory).

---

## dim6 — Implementation Completeness

| Dimension | Status | Evidence |
|---|---|---|
| dim1 frontend CCF | PASS | 2 CCF entries, argKeys=[] confirmed |
| dim2 arg extraction | PASS | IPC ctx offsets +0/+520/+920, repo param extracted internally |
| dim3 deep call-tree | PASS | depth=7, all leaves Win32 APIs; call-tree.md updated |
| dim4 DTO shapes | PASS | PendingAutoSwitchPayload 5-field / AutoSwitchSnoozeRecord 3-field, all serde VAs |
| dim5 same-platform gate | PASS | Windows x64 only; Win32 APIs confirmed |
| dim6 accepted_unknown | PASS | accepted_unknown=[] |
| readyToImplement | true | — |
| strictImplementationUse | true | — |

**gate_tier: gold-leaf**
