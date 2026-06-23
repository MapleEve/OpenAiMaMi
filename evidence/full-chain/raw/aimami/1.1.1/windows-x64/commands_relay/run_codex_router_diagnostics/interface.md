# run_codex_router_diagnostics — Interface Contract

session: <审计会话>
machine: <本地机器>
date: 2026-06-18
source_binary: AiMaMi 1.1.1 win64.exe
sha_ref: d24e429a
baseline_version: 1.0.9

---

## IPC 调用约定

| 字段 | 值 |
|---|---|
| command name | `run_codex_router_diagnostics` |
| frontend string VA | 0x1412ac580 |
| frontend invoke | `s("run_codex_router_diagnostics")` |
| argKeys | `[]` (无入参) |
| argObject | null |
| component | assets/maintenance-page-C2wkSNnk.js, line 17, col 1473 |
| kind | tauriInvokeRaw |
| dim1 CCF | PASS (ipc-contracts.jsonl 直接命中) |

## 入参 DTO

无入参。Tauri invoke body 为空对象 `{}` 或 null。

## 返回值 DTO

```typescript
interface RunCodexRouterDiagnosticsResult {
  status: "ok";           // always "ok" on success
  kind: "Success";        // always "Success" on success
  data: DiagnosticData;
}

interface DiagnosticData {
  // 32 bytes (2x __m128i / _OWORD), fields:
  // config.toml section parse results
  // path existence results (29 paths under CODEX_HOME)
  // base_url validation result (managed markers + /codex/router/v1 suffix)
  // mode validation result (free/paid/demo/msft/team/...)
  // relay keychain status
  // router consistency judgment
}
```

## 返回值二进制布局 (TauriResult::Ok)

```
out_result layout (从 core_sys a1 偏移):
  +0   : u64 = 2                // Ok 变体 tag
  +8   : *str                   // status 字符串指针 (heap alloc, 2 bytes, "ok" = 0x6B6F LE)
  +16  : u64 = 2                // status str len
  +24  : u64 = 7                // kind str len
  +32  : *str                   // kind 字符串指针 (heap alloc, 7 bytes, "Success")
  +40  : u64 = 7                // kind str len mirror
  +48  : u64 = 0                // diagnostic_data field0
  +56  : u64 = 8                // field1 size hint
  +64  : u64 = 0                // field2
  +72  : __m128i                // DiagnosticData[0] (from fix_all_sections v16[0])
  +88  : __m128i                // DiagnosticData[1] (from fix_all_sections v16[1])
  +104 : u32 = 1                // success flag
  +108 : u8  = 1                // success byte
```

## 堆分配

| 目的 | 大小 | 对齐 | 值 |
|---|---|---|---|
| status "ok" | 2 bytes | 1 | 0x6B6F (LE u16) |
| kind "Success" | 7 bytes | 1 | 0x63637553 overlap 0x73736563 |

## 副作用 (全链路)

| 副作用 | 读/写 | 确认 |
|---|---|---|
| relay_state read-lock snapshot | 只读 | relay_state_read_lock_snapshot_sys CAS acquire+release |
| fs::exists × 29 CODEX_HOME 子路径 | 只读 | snooze_file_open_111 (0x14108C6F0) |
| config.toml read + parse | 只读 | diag_config_section_toml_reader_sys (TLS context) |
| relay keychain lookup | 只读 | relay_keychain_lookup_for_quota_sys → import_accounts_keychain_write_sys(read path) |
| heap alloc "ok" (2B) + "Success" (7B) | 写 (heap only) | sub_140001360 × 2 |
| NO persistent write side-effects | — | 全链路 callee 审查确认 |

## 错误路径

| 条件 | 行为 |
|---|---|
| Tokio runtime 未就绪 (2 * *off_141899DC0 == 0) | panic "called `Result::unwrap()` on an `Err` value" |
| relay state mutex poisoned | panic "relay state poisoned" |
| alloc(2, 1) → null | sub_14124BCCB(1, 2) → abort |
| alloc(7, 1) → null | sub_14124BCCB(1, 7) → abort |

## 与 1.0.9 diff 摘要

此命令在 1.0.9 中不存在 (新增命令)。
- sweep change_summary: 新增 IPC command `run_codex_router_diagnostics`
- 无 1.0.9 baseline 对应函数
- dim5 same-platform gate: N/A (新命令，非跨平台 delta)
