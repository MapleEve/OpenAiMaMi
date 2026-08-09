# Round3 (2026-08-07) 孤儿 0x1406FABE0 真实身份裁定（从"已排除"推进到"模块级确认"）

## 人话结论

`0x1406FABE0` 不是 `reconcile_threads_with_progress`（round2 已排除），也**不属于 router_reconciler / codex_thread_visibility 任一模块**。本轮新证据把它归到一个完全不同的 Rust 模块：`codexmate_lib::core::relay::codex_diagnostic`，具体角色是该模块 `orphan_thread_adoption`（孤儿线程收养/回滚）功能族里，为某条线程构造"回滚快照"JSON 记录（`threadId`/`provider`/`reasoningEffort`×2/`originalRollout`/`originalDbRows`）的子逻辑，服务于与 item1 changelog（Windows 智能路由 + 线程可见性/重试兼容修复）**无关的另一个独立特性**。

## 架构解释

- **为什么不是 router_reconciler**：`callees(reconcile_router_on)`、`callees(reconcile_native_off_with_progress)`、`callees(reconcile_threads_with_progress)` 三个已确认顶层入口的直接 callee 集合均不包含本函数或其唯一调用者 `sub_1405B5E30`（逐一 API 调用核验，非猜测）。
- **为什么归到 codex_diagnostic::orphan_thread_adoption**：本函数的唯一调用者 `sub_1405B5E30` 被两个巨型异步命令分发器调用——`sub_1405B8B10`（775 基本块）内嵌 tracing span 字符串 `"relay_diagnostic_thread_adoption"`，`sub_1405CBF60`（700 基本块，28 分支 switch）内嵌 span `"relay_native_off_model_fallback"`。tracing span 名是开发者显式标注的可观测性名称，可信度高于反编译内容猜测。mac 侧（符号化构建）恰好存在一个完整的 `codex_diagnostic::orphan_thread_adoption` 函数族：`prepare_orphan_thread_adoption`/`apply_orphan_thread_adoption_db`/`rollback_orphan_thread_adoption`/`mark_orphan_thread_adoption_recovery`/`write_orphan_thread_adoption_recovery`/`write_orphan_thread_adoption_recovery_file`，其中 `rollback_orphan_thread_adoption`(0x100b1ce50) 直接内嵌 SQL `UPDATE threads SET model_provider=?, reasoning_effort=? WHERE id=?` 类语句——这与本函数构造的 JSON 字段（threadId/provider/reasoningEffort/originalRollout/originalDbRows）完全对应：回滚一条线程的"收养"操作，需要该线程原始的 provider + reasoning_effort + rollout 内容 + DB 行快照。
- **为什么没有改名成某个具体的 mac 函数名**：逐字段比对后发现，体积最接近的 mac 函数 `write_orphan_thread_adoption_recovery`(5456B vs win 5221B，差 4.5%) 自身直接构造的字段是 `createdAtMs`/`permanentAdoption`/`fallbackModel`/`databaseBackups`（顶层 manifest 字段），与本函数直接构造的 `threadId`/`provider`/`reasoningEffort`/`originalRollout`/`originalDbRows` 不是同一组字段——推断本函数是 `databaseBackups` 数组里**每个元素**的子构造逻辑（mac 侧可能被内联进 `write_orphan_thread_adoption_recovery` 内部或拆到未在本轮范围内展开的另一个私有函数），而非该顶层函数本身。为避免用未 100% 确认的具体函数名污染 IDB，本轮**只加注释记录模块级归属证据链，不做函数改名**。

## 技术证据链（可逐条在 IDB 复核）

1. `xrefs_to(0x1406FABE0)` → 唯一调用者 `sub_1405B5E30`(0x1405B5E30)（code xref: `0x1405b6159`）
2. `xrefs_to(sub_1405B5E30)` → `sub_1405B8B10`(24116B)、`sub_1405CBF60`(25193B)
3. `analyze_function(sub_1405B8B10)` strings 含 `"relay_diagnostic_thread_adoption"`（本轮新提取，round2 未提取此字段）
4. `analyze_function(sub_1405CBF60)` strings 含 `"relay_native_off_model_fallback"` + `"residual_manifest"`/`"state_db_relocation"`/`"-wal-shmstate.sqlite"` 等 SQLite 文件名（本轮新提取）
5. `callees(0x1405E0390)`[=reconcile_threads_with_progress] 不含 `sub_1406FABE0`/`sub_1405B5E30`（本轮独立重新核验，与 round2 结论一致）
6. mac `func_query(*thread_adoption*)` → `codex_diagnostic` 模块 6 个 `orphan_thread_adoption` 函数（本轮新查）
7. mac `rollback_orphan_thread_adoption`(0x100b1ce50) strings 含 4 条 `UPDATE threads SET model_provider...reasoning_effort...` SQL 语句（本轮新提取，字段语义与 win 侧 JSON 字段吻合）
8. mac `write_orphan_thread_adoption_recovery`(0x100b263d0) 完整反编译（30387 字符，无截断）自身字段为 `createdAtMs`/`permanentAdoption`/`fallbackModel`/`databaseBackups`——与 win 侧本函数字段不同，故不作为 1:1 改名依据，仅作模块级佐证

## IDB 写回记录

- 仅在 `0x1406FABE0` 追加中文注释（记录上述证据链摘要 + "未改名"声明），**未改名、未 dirtree 归目录**
- `<工具调用>()` 已确认落盘

## 门禁状态

`gate_status: partial_module_identified`（较 round2 的 `excluded_unidentified` 前进一级，但未达 `confirmed`/`readyToImplement`）。`implementation_use=false`，`gate_accepted=false`。

## 本轮未做（诚实边界）

- 未定位本函数在 mac 侧的精确逐字节对应体（只确认模块归属，未确认具体 mac 函数地址）
- 未展开 `sub_1405B8B10`/`sub_1405CBF60` 两个巨型分发器本身的完整反编译（超出本轮"裁定孤儿身份"范围）
- 未与真实 Windows 客户端做参照运行对照（红线25）
