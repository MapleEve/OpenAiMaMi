# System Diff — AiMaMi 1.2.3 window-path (macOS-arm64, vs 1.0.9 baseline)

## Platform Artifacts

- Binary: macOS arm64 Mach-O; sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21` (1.2.3, per `raw/aimami/1.2.3/macos-arm64/VERSION-BASELINE.md`).
- 1.0.9 baseline binary sha256: `1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482`.
- No dedicated `windows-1.2.3-window-path` package exists (see Windows section below); no cross-platform sibling package to point at.

## Frontend IPC / Control-flow

- Both commands present unchanged in command surface at the IPC-name level between 1.0.9 and 1.2.3: `focus_main_window` (no args) and `open_path` ({path: String}). Confirmed at 1.2.3 via `frontend/ipc-contracts.jsonl` (131 lines total), wrapper names `focusMainWindow`/`openPath`.
- Both remain top-level shared invoke-service-object methods, not bound to a dedicated routed page component — same as 1.0.9.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **No behavior delta.** Direct pseudocode-body comparison (see `logic/WINDOW-PATH-DISTILLED-123.md`) found both leaves byte-identical in control-flow/logic to the 1.0.9 baseline; only VA and mangled-symbol hash suffixes differ (relinking artifact across 5 minor versions: 1.0.9 → 1.2.3):
  - `focus_main_window`: `0x10032e820` (1.0.9) → `0x1006fd300` (1.2.3)
  - `open_path`: `0x1002644c0` (1.0.9) → `0x1007cda80` (1.2.3)
- The 1.2.3 raw extraction header comment on `focus_main_window` reads `"1.2.3 NEW-delta ... vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)"`. Interpreted as: the 1.2.2 raw corpus never extracted this `.c` file (a raw-corpus coverage gap specific to the 1.2.2 extraction pass), not a behavior-new claim — the decompiled body itself is identical to the function documented in the 1.0.9 baseline. `open_path`'s header is explicitly `"| 基线 same-set"`.
- This cluster is NOT mentioned in any of the 1.2.3 changelog items surfaced by the sibling `macos-1.2.3-relay`/`macos-1.2.3-accounts` packages (ChatGPT/Codex process-occupancy handling, account-switch stability, router protocol adaptation) — consistent with zero behavior diff.

## Interface / Error / Boundary

Closed for both commands (dim4), unchanged from 1.0.9 — see `logic/WINDOW-PATH-DISTILLED-123.md` per-leaf dim4 sections and `gate-report.json`.

## Gate Leaf

`strictImplementationUse` 2/2 (both commands); `consumerStartReady`/`readyToImplement` both empty (already exceed the former, blocked on dim6 for the latter). See `gate-report.json`.

## Windows Sibling — materially incomplete, informational only

No `windows-1.2.3-window-path` canonical package exists. Partial raw evidence surveyed this pass (not claimed as closing this cluster's Windows side, and NOT used to promote or demote this macOS package's own gate per AGENTS.md "macOS 只证明 macOS, Windows 只证明 Windows"):

- **focus_main_window**: `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/focus_main_window_0x1401927d0.c` exists, owner resolved via command-name string xref (`aFocusMainWindo`, win-native ground truth). Body is ~135 lines of mostly-unresolved monomorphized Rust dispatch (`sub_141684120`, `sub_1401C3650`, etc. — un-demangled helper calls), materially thinner than both (a) the 1.0.9 Windows evidence, which had a dedicated distilled doc `internal-reverse/audits/windows-1.0.9-system/logic/WIN-WINDOW-PATH-CLUSTER-109.md` with dims 1-5 closed, and (b) this package's own macOS dim2 closure. Recorded `accepted_unknown` (owner+existence confirmed, internal depth thin) in `gate-report.json`.
- **open_path**: **no isolated owner exists at 1.2.3.** `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/` contains only 6 unresolved `sub_XXXXXXXX` files attributed to the `commands/system` module via panic-Location xref, none individually confirmed as `open_path`. The file literally named `open_path_0x140194810.c` under `windows-x64/commands/relay/` is a **confirmed-different function** — an INDEX.jsonl entry (session `relay123-win-commands-decompile-20260724`) establishes it is the `commands::relay` ICF-folded shared dispatcher for `get_codex_router_auth_readiness` and 26+ other unrelated commands, not this cluster's `open_path`. Recorded `blocks_start` in `gate-report.json`; not extrapolated from the closed 1.0.9 Windows `open_path` evidence (owner_va `0x1400AEA60` at 1.0.9), since no diff/re-verification was performed at 1.2.3 for the Windows side.

## Plugin / Capability

Not in scope for this window-path-only package.

## OTA / Package

Not evaluated this pass (out of scope for this module).

## Resource / Binary Surface

2 commands, 2 `.c` files, exact 1.0.9-match confirmed. See `manifest.json` `scope`/`migration` blocks.

## Unknown

- Windows 1.2.3 `open_path` owner: genuinely unresolved (`blocks_start`), not accepted_unknown — a real open gap.
- Windows 1.2.3 `focus_main_window` internal-body depth: `accepted_unknown` (owner/existence confirmed, effort/tool-limitation class on internal depth).
- dim6 test/acceptance mapping (both commands, both platforms): never produced at any version, `blocks_start`.
