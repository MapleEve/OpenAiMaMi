# surface-traps.md — AiMaMi 1.1.1 delta 表面陷阱

**session**: <审计会话>
**produced_at**: 2026-06-17

---

## 陷阱 1：mac-delta 曾误膨胀 76 条

**问题**：原始 mac-delta.txt 一度包含 76 条，把 needs_full/baseline_absent/delta 全混入。
**修正**：通过 frontend-delta 校准，实际 delta（需逆向）= 34 条（9 真新增 + 25 body-delta）；same = 56 条继承基线；orphan = 34 条。
**依据**：FRONTEND-DELTA.md（added=9, removed=10, same=117）+ mac-shard 分类。

---

## 陷阱 2：restart_codex VA 复用漂移

**问题**：1.1.1 restart_codex VA=0x100616150，symbol hash 改变，疑似 delta。
**修正**：纯 VA 漂移（重编译产物），行为合同不变（argKeys=[] / stop+launch codex 逻辑不变）。
**依据**：1.0.9 playbook restart_codex baseline；1.1.1 evidence.md 确认逻辑同构。

---

## 陷阱 3：hotspot "macOS-only" 结论被 Windows 1.1.1 推翻

**问题**：1.0.9 时 set_hotspot_enabled 被标注为 macOS-only（has_notch 依赖）。
**修正**：1.1.1 INDEX 已存在 windows-x64 set_hotspot_enabled 条目；Windows 也实现了 hotspot。消费侧不得继承"macOS-only"结论。
**依据**：INDEX.jsonl grep windows-x64 hotspot。

---

## 陷阱 4：test_relay_draft_stream canonical drift

**问题**：leaf 目录命名为 `codexmate_lib__commands__relay/`（下划线展开）而非 `commands_relay/`。
**修正**：如实记录；INDEX key 应用 `aimami/1.1.1/macos-arm64/codexmate_lib__commands__relay/test_relay_draft_stream/full-chain`。
**依据**：文件系统实际路径 raw/aimami/1.1.1/macos-arm64/codexmate_lib__commands__relay/test_relay_draft_stream/。

---

## 陷阱 5：test_relay_draft_stream 与 test_relay_provider_stream 共享 async body

**问题**：两条命令均有独立的 IPC 注册，owner_va 都指向 0x10009d110（test_provider_staged closure）。
**修正**：这是 Rust ICF 折叠导致的共享——两命令逻辑上分离（draft 用 RelayDraftTestInput，provider 用 RelayProviderTestInput），但 async 状态机被 ICF 合并到同一函数。消费侧实现时需区分 DTO。
**依据**：test_relay_draft_stream evidence §3；test_relay_provider_stream evidence §3-4。

---

## 陷阱 6：configure_auto_switch DTO 破坏性变更

**问题**：1.0.9 中 configure_auto_switch 有 hasSchedule/scheduleMin 参数。
**修正**：1.1.1 完全移除这两个参数；thresholdWeeklyPercent 现为 Option<u32>（Tauri ABI: bool discriminant + u32 value 两个参数）。直接使用 1.0.9 DTO 会静默失败。
**依据**：configure_auto_switch gate-report.json U3 resolved。

---

## 陷阱 7：load_snapshot 语义升级

**问题**：1.0.9 load_snapshot 是轻量读取，1.1.1 看起来是 same 命令。
**修正**：1.1.1 内部用 `refresh_full_runtime_snapshot_async`（spawn_blocking）实现，会触发完整本地快照刷新，不再是简单读取。消费侧需知道此调用比 1.0.9 更重。
**依据**：accounts/load_snapshot/evidence.md §语义别名。

---

## 陷阱 8：get_relay_proxy_status hostStr 格式变更

**问题**：消费侧可能直接把 hostStr 当 IP:PORT 用来拼接 URL。
**修正**：1.1.1 的 hostStr 已是完整 URL `"http://127.0.0.1:<PORT>/codex/v1"`，不需要再拼 scheme/path。直接用 1.0.9 的拼接逻辑会产生错误 URL。
**依据**：commands_relay/get_relay_proxy_status/evidence.md Confirmed §5-6。

---

## 陷阱 9：diagnose_codex_router 是 1.1.1 新增（非 1.0.9 same）

**问题**：1.0.9 INDEX 无 diagnose_codex_router；mac-shard delta 包含此命令。
**修正**：此命令在 1.1.1 全新引入，不是 baseline 继承。实现时需从头接口。
**依据**：relay/diagnose_codex_router/evidence.md §is_upstream:false；1.0.9 playbook 无此条目。
