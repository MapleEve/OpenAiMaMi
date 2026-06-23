# owner.md — has_notch · windows-x64 · AiMaMi 1.1.1
<!-- session=<审计会话> | machine=<本地机器> -->
<!-- produced_at: 2026-06-18T00:00:00+08:00 | producer: claude-sonnet-4-6 -->

## Identity

| Field | Value |
|---|---|
| Command | `has_notch` |
| Platform | windows-x64 (PE x86_64 stripped) |
| Version | 1.1.1 |
| Module | system |
| Owner VA | `0x140023000` |
| Owner Name (逆向分析) | `has_notch_owner_sys` |
| Owner Size | 863 bytes |
| Basic Blocks | 32 |
| Cyclomatic Complexity | 9 |
| Calling Convention | `__fastcall` |
| Async | No (synchronous Tauri `#[command]`) |
| IPC Dispatcher | `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0` |
| Cmd String VA | `0x1412AC463` = `"has_notch"` (length 9) |
| Context | `"app"` |
| xref count on cmd string | 1 (unique owner, no ICF collapse) |

## Location Method

Located via string cross-reference: `xrefs_to(0x1412AC463)` returns exactly 1 caller at `0x140023000`.
Owner renamed `has_notch_owner_sys` (level A rename) in session `<审计会话>`.

## Business Logic

The Windows implementation of `has_notch` is a fixed-constant response:

```
v28 = 1  // @ 0x14002314F
```

This is the **sole business-logic statement** in the happy path. After param parse (`sub_140089A50` confirms `argKeys=[]`, sets `v19=3`), the function immediately sets `v28=1` and dispatches `Ok(true)` via `InvokeResolver::respond`.

**No system API is called.** No `GetSystemMetrics`, `EnumDisplayDevices`, `GetMonitorInfoW`, or any hardware detection is present in the owner or any callee chain. The Windows implementation does not perform runtime notch detection.

## Platform Divergence

| Platform | Behavior | Source |
|---|---|---|
| Windows x64 (1.1.1) | Fixed `true` constant — no hardware check | Owner VA 0x140023000 |
| macOS arm64 (1.0.9 baseline) | Runtime NSScreen geometry check | 1.0.9 baseline has_notch_sys |

Divergence is architectural. macOS performs real display hardware detection; Windows returns compile-time constant `true`.

## IDB Annotations This Session

| Address | Type | Content |
|---|---|---|
| `0x140023000` | Comment | `gold-leaf for has_notch; sha d24e429a; session <审计会话>; not gate promotion` |
| `0x140023087` | Comment (prior session) | `has_notch string load` |
| `0x14002314F` | Comment (prior session) | `v28=1 fixed bool true` |
| `0x14002317A` | Comment (prior session) | `InvokeResolver response dispatch` |
| `0x14080C3C0` | Rename + Comment | `has_notch_invoke_resolver_respond` |
| `0x14082F2D0` | Rename + Comment | `has_notch_error_response_serializer` |
| `0x14033AB50` | Rename + Comment | `has_notch_arc_listener_drop_loop` |

## Four-Angle Completeness

| Angle | Status | Evidence |
|---|---|---|
| A — func_query / symbol enum | PASS | owner at 0x140023000 via string xref; PE stripped; unique cmd string n=1 |
| B — string pool | PASS | `"has_notch"` @ 0x1412AC463; n=1 match |
| C — frontend IPC (CCF) | PASS | migrated from 1.0.9; argKeys=[], invoke("has_notch"), return=bool |
| D — manifest + call-tree coverage | PASS | manifest present; call-tree depth=6 confirmed this session |

## Fake-Wall Check

- **ICF collapse**: No — n=1 xref on command string, unique owner
- **Async state machine**: No — synchronous `__fastcall`, no `Future::poll`
- **Vtable at command level**: No — command handler is direct function, no vtable dispatch
- **Inlined thunk pattern**: No — 863 bytes with 32 BB confirms genuine function body
- **Fixed constant return**: Yes — confirmed genuine (no branch wrapping, no system API)

Verdict: **genuine_ceiling=false** — fixed-true is real Windows behavior, not an analysis artifact.
