# window-path Cluster — macOS arm64 / AiMaMi 1.2.3 — DISTILLED

Produced: 2026-07-24
Session: window-path123-distillation-conclusion
Machine: <host> (distillation-only, no new IDA MCP calls this session)
SHA (1.2.3 binary, first 12): 25d6d04e6d94
Migrated from: internal-reverse/audits/macos-1.0.9-window-path/ (RULE 9 migrated_no_behavior_diff)
Gate: strictImplementationUse (dim1-5 closed; dim6 not assessed, same ceiling as 1.0.9 baseline)
Authoritative: true

---

## Cluster Summary

Two IPC commands in the `window-path` cluster, re-verified byte-for-byte identical to the 1.0.9 baseline:
- `focus_main_window` — focuses the main AiMaMi application window via Wry event loop
- `open_path` — opens a file system path or URL using macOS `/usr/bin/open`

Both are **upstream** (present in upstream codex-cli codebase, `is_upstream=true`). Both are still exposed at the top-level shared invoke service object in the 1.2.3 frontend bundle (`assets/index-B40jKs17.js`, not a dedicated page component) as `focusMainWindow:()=>re("focus_main_window")` and `openPath:e=>re("open_path",{path:e})` — confirmed via `frontend/ipc-contracts.jsonl` lines 101 and 103 (131-line file).

Cluster-scope boundary (confirmed via `ipc-contracts.jsonl` grep, zero other `*window*` command hits besides `focus_main_window`): sibling internal helper functions under `commands::hotspot` — `reveal_main_window` (0x1006fd480), `force_reveal_main_window` (0x1006fe890), `bring_main_window_forward` (0x1006fe9f0), `bring_main_window_force_forward` (0x1006ff0f0), `create_hotspot_window` (0x1006fded0), `set_window_alpha` (0x1006fd220) — are **not** IPC-exposed and belong to the separate `system-hotspot`/hotspot cluster, not this one. Not treated as truly_undone orphans of window-path.

---

## Leaf 1: focus_main_window

**VA (1.2.3)**: `0x1006fd300` (1.0.9 was `0x10032e820` — VA shift is pure relinking, not behavior change)
**Module**: `codexmate_lib::commands::hotspot`
**is_upstream**: true
**Mangled**: `codexmate_lib::commands::hotspot::focus_main_window::h83b1e451cc929a03`
**Source file annotation**: raw pass labeled this "1.2.3 NEW-delta ... vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)" — this means the 1.2.2 raw corpus simply never extracted this particular `.c` file (a raw-corpus coverage gap at 1.2.2), not that the function's behavior is new at 1.2.3. Body is byte-identical logic to 1.0.9.

### dim1 (CCF / IPC trigger)
- IPC command: `"focus_main_window"` (no parameters) — confirmed present in `frontend/ipc-contracts.jsonl` line 101 at 1.2.3, wrapper name `focusMainWindow`
- dim1 status: **closed** (independently re-verified for 1.2.3, not assumed from 1.0.9)

### dim2 (owner decompile) — re-verified byte-identical to 1.0.9
Body: Clones `WryHandle`/`Context` (`_$LT$tauri_runtime_wry..Context$LT$T$GT$..Clone$GT$::clone`), does two `_InterlockedIncrement64` atomic refcount bumps with overflow guard (`BUG()` on overflow), `memcpy`s a 0x88-byte struct, allocates 160 bytes via `__rust_alloc(160, 8)` (aborts via `alloc::alloc::handle_alloc_error` on OOM), builds the WryUserEvent payload with **discriminant byte = 28** (`LOBYTE(__src[0]) = 28`) and the app-handle pointer, then posts via `tauri_runtime_wry::send_user_message`. Checks the 19 discriminant on the result (non-19 branch drops a `tauri::error::Error` via `drop_in_place`). Drops the cloned `AppHandle` before returning.
- dim2 status: **closed**, exact match confirmed against 1.0.9's documented discriminant-28/160-byte-alloc/`send_user_message` behavior.

### dim3 (call-tree)
`WryHandle::clone → _InterlockedIncrement64 ×2 (refcount, overflow-checked) → __rust_alloc(160,8) → memcpy payload (discriminant=28) → tauri_runtime_wry::send_user_message → [Wry event loop, terminates]`
Error branch: non-19 discriminant on send result → `drop_in_place<tauri::error::Error>`.
Terminated: async fire-and-forget via Wry event loop (genuine OS/framework implementation leaf, not a wrapper stub).
dim3 status: **closed**.

### dim4 (interface / DTO / error / side-effect)
- **Input**: `invoke("focus_main_window")` — no args
- **Output**: `Result<(), tauri::Error>` → resolves `undefined` on Ok
- **Side effects**: Posts `WryUserEvent(discriminant=28, focused=true)` → macOS NSApp window focus/raise
- **No file I/O, no network, no persistence**
- **Error path**: atomic ref-count overflow → `BUG()` abort; `send_user_message` failure → `tauri::Error` returned and dropped
dim4 status: **closed**.

### dim5 (same-platform gate)
All evidence from macOS arm64 IDA decompile, re-read in full at 1.2.3 (not extrapolated from 1.0.9). SHA `25d6d04e6d94...` (1.2.3 binary). Windows 1.2.3 has only a thin string-xref-resolved handler with mostly-unresolved dispatch internals (see SYSTEM-DIFF.md) — this does not block the macOS package's own dim5.

**gate_tier**: `strictImplementationUse`
**ceiling**: `strictImplementationUse`

---

## Leaf 2: open_path

**VA (1.2.3)**: `0x1007cda80` (1.0.9 was `0x1002644c0` — VA shift is pure relinking, not behavior change)
**Module**: `codexmate_lib::commands::system`
**is_upstream**: true
**Mangled**: `codexmate_lib::commands::system::open_path::h987a265cbb3bd987`
**Source file annotation**: raw pass labeled this `"| 基线 same-set"` — explicitly flagged unchanged vs baseline by the producing extraction pass.

### dim1 (CCF / IPC trigger)
- IPC command: `"open_path"` (9 chars) — confirmed present in `frontend/ipc-contracts.jsonl` line 103 at 1.2.3, wrapper `openPath:e=>re("open_path",{path:e})`
- Parameter: `path: String`
- dim1 status: **closed** (independently re-verified for 1.2.3)

### dim2 (owner decompile) — re-verified byte-identical to 1.0.9
Body: `std::sys::process::unix::common::Command::new(v13, "open", 4)` (the visible string in the raw `.c` file is a packed multi-string blob `"openwithkindsavetrueuuidemitshowhide"` from IDA's string-pool concatenation of adjacent literals; the `4` second argument to `Command::new` is the actual string length, confirming the real arg is `"open"`, i.e. `/usr/bin/open`), `Command::arg(path)`, `Command::spawn`. On spawn success (`v16 == 2`, i.e. `Ok` discriminant), formats the child-handle info into the `Result<String, String>` Ok branch. On failure, closes up to 3 file descriptors (stdin/stdout/stderr, `close_NOCANCEL` ×3) before dropping the `Command` and returning `Err`.
- dim2 status: **closed**, exact match confirmed against 1.0.9's documented `Command::new("open",4)` → `arg(path)` → `spawn` behavior, including the 3-fd cleanup error path.

### dim3 (call-tree)
`Command::new("open", 4) → Command::arg(path) → Command::spawn → [fork/exec /usr/bin/open <path>, terminates]`
Error branch: `close_NOCANCEL(fd) ×3 → drop_in_place<Command> → return Err`
Terminated: OS-level fork/exec (genuine OS implementation leaf).
dim3 status: **closed**.

### dim4 (interface / DTO / error / side-effect)
- **Input**: `invoke("open_path", { path: String })` — one string arg
- **Output**: `Result<String, String>` (Ok = child handle info; Err = spawn error message)
- **Side effects**: Spawns `/usr/bin/open <path>` → OS opens path/URL with associated application
- **No direct file I/O, no network, no persistence**
- **Security note (carried forward from 1.0.9, still true at 1.2.3)**: No path validation/canonicalization visible in this function body — relies on caller/upstream context for any allowlist enforcement. Not re-derived independently this pass; this is the same observation as the 1.0.9 baseline, confirmed still applicable since the function body is unchanged.
dim4 status: **closed**.

### dim5 (same-platform gate)
All evidence from macOS arm64 IDA decompile, re-read in full at 1.2.3. SHA `25d6d04e6d94...` (1.2.3 binary). Windows 1.2.3 has **no isolated owner** for this command at all (see SYSTEM-DIFF.md and gate-report.json unknowns) — does not block this macOS package's own dim5.

**gate_tier**: `strictImplementationUse`
**ceiling**: `strictImplementationUse`

---

## Raw evidence paths (1.2.3)

- `raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/focus_main_window_0x1006fd300.c`
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/open_path_0x1007cda80.c`
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` (lines 101, 103 for these two commands)

## Baseline evidence paths (1.0.9, migration source)

- `internal-reverse/audits/macos-1.0.9-window-path/logic/WINDOW-PATH-DISTILLED-109.md`
- `raw/aimami/1.0.9/macos-arm64/window-path/focus_main_window/leaf.md`
- `raw/aimami/1.0.9/macos-arm64/window-path/open_path/leaf.md`
