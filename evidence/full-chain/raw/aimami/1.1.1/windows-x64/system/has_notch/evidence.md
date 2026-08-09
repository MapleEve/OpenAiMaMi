# evidence.md — has_notch · windows-x64 · AiMaMi 1.1.1
<!-- gate-report dim1-6 | session=<审计会话> | machine=<本地机器> -->
<!-- produced_at: 2026-06-17T00:00:00+08:00 | producer: claude-sonnet-4-6 -->

---

## Confirmed

1. **Owner VA = 0x140023000 (`has_notch_owner_sys`)** — located via xref to string `"has_notch"` @ `0x1412ac463`; xref count = 1 (unique owner, no ICF collapse risk). Function size = 863 bytes, 32 basic blocks, cyclomatic complexity = 9. 逆向分析 rename committed at level A this session.

2. **Fixed bool-true return (`v28 = 1` @ `0x14002314f`)** — pseudocode line `v28 = 1` is the sole business-logic mutation after successful param parse (`v19 == 3`). No conditional branch wraps this assignment. No system API is called between param parse and `sub_14080C3C0` dispatch. The Windows implementation is a compile-time constant response, not a runtime hardware check.

3. **`sub_14080C3C0` = InvokeResolver::respond** — decompile depth=2 confirms: acquires resolve-once lock via `_InterlockedCompareExchange8`; copies payload into local frame; dispatches via vtable fn at `v11+24` (consumer-side, dynamic); signals waiter via `WakeByAddressSingle` (Windows API terminal). Panic string `"called Result::unwrap() on an Err value"` present — confirms Rust origin. This function terminates the IPC response path; no further has_notch-specific logic below.

4. **`sub_14082F2D0` = error response serializer** — depth=2 confirms error path: serializes `Ok`/`Err` string tags (`"true"`=`0x65757274`, `"false"`=`0x736c6166`) into a heap buffer (alloc via `sub_140001360(128,1)`), then calls `sub_14080C3C0` with error payload. Convergent with happy-path response dispatch. Only reached when `v19 != 3` (param parse failure); not reached in normal has_notch invocation (argKeys=[]).

5. **`sub_140089A50` = Tauri IPC param resolver** — called at `0x1400230dc`; output `v19=3` on parse success. Input descriptor built at `0x140023087`–`0x1400230c0`: command name ptr = `aHasNotch`, name length = 9, context = `"app"`, param count slot = 3, invoke message ptr = `v13`. argKeys=[] confirmed (no user-supplied param slots constructed before resolver call).

6. **`sub_140042650` = InvokeMessage Arc drop** — depth=1 callees: `sub_140041D40`, `sub_140E219F0`, `sub_140001370`, `sub_140042350` — all infrastructure (dealloc, ref-count, drop glue). No business logic. Executes unconditionally on function exit (both happy path and error path via LABEL_14). Confirmed cleanup-terminal.

7. **xref n=1 on `aHasNotch` string** — `xrefs_to(0x1412ac463)` returns exactly one caller: `has_notch_owner_sys@0x140023000`. No secondary dispatch table entry, no indirect invocation. Owner is unique.

8. **Platform divergence confirmed (macOS vs Windows)** — 1.0.9 macOS baseline: `has_notch_sys` calls NSScreen geometry API (display model check at runtime). 1.1.1 Windows: no system API call path exists in owner. Divergence is architectural: macOS performs hardware detection; Windows returns fixed `true`. Binary evidence: no `GetSystemMetrics`, no `EnumDisplayDevices`, no `GetMonitorInfoW` reference in owner or any callee chain.

9. **No async body / no vtable at command level** — owner is a synchronous `__fastcall` function. No `Future::poll`, no `async_trait`, no separate state machine struct identified. The Tauri command is sync (`#[command]` without `async`). Fake-wall check passed: no ICF collapse, no inlined thunk pattern.

10. **IDB inline evidence committed** — 逆向分析 `set_comments` and `rename` operations applied in prior session `<审计会话>`: owner renamed `has_notch_owner_sys`; comments at `0x140023000`, `0x140023087`, `0x14002314f`, `0x14002317a`. Verified by decompile output showing comment text inline. `<工具调用>` executed (confirmed in manifest).

---

## Inferred

1. **Windows returns `true` as "always has notch" sentinel** — most likely intent: Windows AiMaMi UI assumes notch layout is always active, possibly because the Windows port targets a fixed window chrome layout without hardware notch detection. Alternative: stub left over from cross-platform port not yet fully implemented.

2. **`sub_140089A50` is shared param resolver** — 逆向分析 has renamed this function `get_usage_refresh_interval_read_sys_111` in current IDB (likely a collision from a different leaf session). The rename is incorrect for this context; the function is the generic Tauri IPC param resolver reused across all commands. Size = 206 bytes consistent with a small Arc-managed resolver utility.

3. **Vtable consumer at `v11+24` is `InvokeResponder` trait object** — standard Tauri 2 IPC architecture: `InvokeResolver` holds a boxed consumer behind a fat pointer; `+24` offset is consistent with the third vtable slot (after drop, size). Cannot be statically resolved without runtime context; classified as infrastructure-terminal.

4. **`sub_14033AB50` (in LABEL_14 cleanup loop) = Arc listener drop** — called in `while(v35 != v36)` iterating over pending listeners array at `a1+920..936`. Loop body: `v9 += 96`, `sub_14033AB50()`. Consistent with Arc-wrapped IPC listener cleanup on command teardown. Not has_notch-specific.

5. **No registry or environment variable read** — full callee graph (depth ≤ 2) contains no `RegOpenKeyExW`, `RegQueryValueExW`, `GetEnvironmentVariableW`, or `GetComputerNameExW` references. The fixed-true behavior is not conditioned on any external state.

---

## Unknown

1. **Consumer vtable implementation** — the actual type behind `v11+24` vtable dispatch in `sub_14080C3C0` is not statically determined. Could be `WebviewIpcResponder`, `ChannelResponder`, or a test mock. Irrelevant to has_notch logic (infrastructure only), but unresolved for full Tauri IPC call-path mapping.

2. **Why Windows diverges from macOS** — no comment or symbol evidence in the binary explaining whether the fixed-true is intentional product decision or a port stub. Source-level intent unknown without access to Rust source. Classified: platform-specific divergence confirmed, rationale inferred only.

3. **`sub_141212FB0` exact semantics** — used as `memcpy/move` (Rust `mem::forget` wrapper or `ptr::copy`) throughout owner and all depth-1 callees. Size/alignment semantics not fully traced. Functionally irrelevant to has_notch business logic; no side effects beyond stack frame copying.

4. **`sub_14124BCCB` in error path** — called on alloc failure in error serializer. Likely `alloc::alloc::handle_alloc_error` (Rust OOM handler, terminates process). Not reachable in normal execution. Exact symbol not resolved.

5. **1.1.1 vs 1.0.9 Windows delta** — 1.0.9 Windows binary not available in current IDB set. Cannot confirm whether fixed-true behavior existed in 1.0.9 Windows or was introduced in 1.1.1. Baseline comparison limited to macOS (1.0.9 confirmed).

---

## Gate Report (dim1–dim6)

| Dim | Name | Status | Evidence |
|-----|------|--------|---------|
| dim1 | frontend_ccf | PASS | argKeys=[], invoke("has_notch"), return bool — migrated from 1.0.9; confirmed consistent with win owner (no param slots) |
| dim2 | backend_owner_pseudocode | PASS | Full pseudocode at `ida/pseudocode.c`; decompile re-verified this session; 32 BB, CC=9 |
| dim3 | call_tree_leaves | PASS | All depth-1 callees classified; depth-2 on `sub_14080C3C0` and `sub_14082F2D0` confirmed; WakeByAddressSingle = Windows API terminal |
| dim4 | interface_dto_error | PASS | argKeys=[], return=bool true (fixed), error path = param parse failure only (standard Tauri envelope) |
| dim5 | platform_gate | PASS | windows-x64 owner confirmed; macOS divergence documented; no cross-platform assumption |
| dim6 | acceptance_mapping | PARTIAL | Frontend consumption (notch-related UI branch) confirmed at contract level; specific frontend component binding pending consumer-side review |

**Overall gate tier: `strictImplementationUse_candidate`** (dim6 partial does not block — consumer-side is frontend leaf, not backend contract)
