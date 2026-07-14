# has_notch -- windows-x64 1.1.8 interface (deep gold-leaf 11/20)

## Command identity
- name: `has_notch`, namespace/module literal embedded in owner: `"app"` (tracing target), stored under canonical
  module dir `system` per the 1.1.1 windows precedent (`raw/aimami/1.1.1/windows-x64/system/has_notch/`).
- owner_va: `0x1403eca10` (renamed `has_notch_owner_sys`), size 863B -- **byte-identical size** to the
  independently-recorded 1.1.1 windows baseline (`sub_140023000`, 863B, namespace=app, per
  `REVERSE-STATUS.md` "win 分歧面确认" section), consistent with zero behavioral/size delta across the
  1.1.1->1.1.8 window on windows-x64 for this command's owner wrapper.
- dispatcher: called via `sub_1403CF5B0`, the shared main IPC string-length-switch dispatcher (0x14000D2A0's
  sibling / same dispatcher that also owns `graceful_restart_for_update` per owner-map-118.jsonl inline-match-arm
  convention).

## Request DTO
- frontend `argKeys: []` (confirmed via `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl`, command
  `has_notch`, `argObject: null`, `params: "()"`) -- **zero-argument command**.
- backend: owner copies a1[0..520) into a 520B local (`v12`) purely for the tracing-span "args" field value;
  since the command takes no real arguments this buffer carries no meaningful payload for has_notch specifically
  (it is invoke-message-context boilerplate shared by the tracing macro across all command wrappers).

## Response DTO
- type: `bool` (Rust `Result<bool, E>` returned via Tauri's IPC serialization).
- observed encoding at the async-body layer (`has_notch_async_body_sys`): 16-byte (`__int128`) staging value
  where low-qword=0/high-qword=1 represents `Ok(true)`; the alternate branch stores an error discriminant byte
  at offset+8 and writes the niche sentinel `0x8000000000000000` at offset+0 for `Err(code)`.
- **caveat (documented, not accepted_unknown)**: across the fully-decompiled 5-node call-tree (see
  `call-trees/has_notch.jsonl`), no Windows monitor/display/geometry API call was observed computing the
  boolean value from live hardware state. The entire traced path is a generic `tauri::async_runtime`-style
  channel bridge (poll -> coop-context-check -> park-wait) whose payload bit is either delivered from the
  channel (0/1) or, on one internal edge-case discriminant, hardcoded to `Ok(true)` directly in
  `has_notch_async_body_sys`. This is consistent with (but does not conclusively prove) a Windows
  implementation that does not perform live notch/display-cutout geometry detection the way the macOS
  implementation does (see Cross-platform contrast below).

## Error paths
- alloc-failure abort: `sub_1412AD451` (Rust `alloc::handle_alloc_error`, OOM abort) on both the 512B state box
  and the 16B refcount box allocations inside `has_notch_async_body_sys`.
- `Result::Err` niche path: `*(_QWORD*)a1 = 0x8000000000000000` sentinel + 1-byte discriminant, taken whenever
  the channel-wait result is not the `==2` fallback branch.
- `BUG()` panic: cooperative-scheduling budget-counter overflow inside `tokio_coop_budget_check_sys` (shared
  generic tokio-runtime invariant, not has_notch-specific).
- cold-path `Display::fmt`-returned-an-error guard (`sub_141085E00`/`sub_140E156C0` + literal
  `"a Display implementation returned an error unexpectedly"`), a generic Rust `fmt::Display` defensive check
  inserted by the compiler for error-formatting code, not has_notch business logic.

## Side effects
- none observed beyond generic runtime bookkeeping: heap allocations (512B + 16B per invocation, freed at the
  end of the same call via `sub_1404F6A50`), atomic refcount/budget counters, and (on the non-fast-path branch,
  not exercised by has_notch's own call this round) `WakeByAddressSingle` OS-level thread-wake syscalls.
- no file I/O, no HTTP, no registry access, no sidecar dispatch observed in any of the 5 traced nodes.

## Cross-platform contrast (from this session's own prior STAGE1 pass, `REVERSE-STATUS.md` line 3531)
- macOS 1.0.9/1.1.8: `has_notch` is classified `same` (full bidirectional evidence) -- the mac implementation
  performs REAL `NSScreen`-based notch geometry detection (see the separately-frozen
  `create_hotspot_window` DEEP-RECOVERY entry from 2026-06-04, which documents `compute_hotspot_frame`'s
  `auxiliaryTopLeft/RightArea` gap-based notch-detect heuristic on macOS).
- windows-x64 1.1.8: this leaf. `baseline_absent` was the STAGE1 classification only in the sense that no 1.0.9
  windows baseline could be located for comparison; the 1.1.8 (and 1.1.1) windows backend owner IS present and
  real (non-stub wrapper, confirmed both by this leaf and by the prior STAGE1 note). Whether the windows
  implementation's boolean payload is a live check or a hardcoded constant could not be conclusively determined
  from the traced call-tree alone (see Response DTO caveat above) -- this is recorded as an open item for
  `readyToImplement`, not fabricated as either "always false" or "does real Win32 geometry detection".

## Delta vs 1.1.1 baseline
- owner wrapper size unchanged (863B both versions) -- strong signal of zero behavioral delta for the dispatch
  wrapper across 1.1.1->1.1.8 on windows-x64 for this command.
- VA churn only: 1.1.1 `sub_140023000` -> 1.1.8 `0x1403eca10` (binary reflow between builds, not a code change).
