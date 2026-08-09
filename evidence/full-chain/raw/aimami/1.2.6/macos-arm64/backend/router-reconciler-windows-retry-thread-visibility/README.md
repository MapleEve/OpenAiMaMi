# Item1: Windows 智能路由 + 线程修复兼容性 —— router_reconciler 深挖（macOS 基线）

## 范围
用户指定的 6 组符号 + 1 个 DTO：
- `run_config_mutation_with_windows_retry` / `append_thread_reconcile_warnings` / `reconcile_native_off_with_progress` / `reconcile_router_on`
- `RouterToggleProgress` DTO
- `codex_thread_visibility::reconcile_threads_with_progress` / `reconcile_native_off_after_stop_with_progress`

## 完成情况（诚实标注，非全绿）

| 符号 | mac (符号化) | windows-x64 (stripped) |
|---|---|---|
| reconcile_router_on | ✅ 完整反编译 (0x100825030, 0x16d2 bytes) | ❌ 未定位（三层恢复未完成） |
| reconcile_native_off_with_progress | ✅ 完整反编译 (0x1008278a0, 0x1d25 bytes；此前 decompile() 在 60099 字符处截断，已用 <工具调用> 直调+下载端点补全 49540 字符完整体) | ❌ 未定位 |
| reconcile_threads_with_progress | ✅ 完整反编译 (0x1007507c0, 0x145b bytes) | ❌ 未定位 |
| run_config_mutation_with_windows_retry | ✅ 完整反编译 (0x10082a540, 0x83 bytes) | ❌ 未定位 |
| append_thread_reconcile_warnings | ✅ 完整反编译 (0x1008271a0, 0x2f5 bytes) | ❌ 未定位 |
| reconcile_native_off_after_stop_with_progress | ✅ 完整反编译 (0x100a71930, 0x47d bytes) | ❌ 未定位 |
| RouterToggleProgress (DTO) | ✅ 经 Serialize impl 反推字段布局 (0x100a7b580) | ❌ 未定位 |
| 辅助函数(from_state/ensure_ready/record_timing/record_thread_summary/valid_codex_active_ids/describe_thread_reconcile/record_model_catalog_summary) | ✅ 全部完整反编译 | -- |

## 核心行为发现

1. **`run_config_mutation_with_windows_retry` 不是重试循环**：这是本轮最重要的发现之一——函数名暗示"重试"，但反编译显示它只是把 5 个字段重新打包为 8-word 结构、固定注入 `bool=1` 标志位，然后尾调用 `codex_config_reconciler::reconcile_inner`。真正的重试语义（如果存在）在 `reconcile_inner` 内部，本轮未展开验证。

2. **`reconcile_router_on` 是一个 12 阶段的顺序编排器**：catalog 准备 → proxy 启动 → auth 准备 → config preflight 修复 → config takeover → 断言无外部 codex writer → thread reconcile → project state 检查/修复 → windows-retry 配置变更 → model restore → model catalog 收敛 → auth commit boundary 校验 → auth commit。每阶段都经 `record_timing` 记录耗时，并通过可选进度回调 vtable 上报阶段名。任一阶段失败即短路返回，不做跨阶段重试。

3. **`reconcile_threads_with_progress` 的并发策略是自适应的**：待清理 rollout 数 > 7 时用 `rayon_core::registry` 线程池并行处理，≤ 7 时退化为单线程 `do-while` 串行处理——这是一个基于数据规模的阈值决策，不是固定并行或固定串行。

4. **`RouterToggleProgress` DTO 是"3 必填 + 2 条件"字段的序列化契约**：始终输出 3 个字段（key 长度 4/5/5），另 2 个字段（key 长度 7/10）仅在对应 bool 标记位非零时才序列化。

## 未完成事项（诚实标注）

- ~~`reconcile_native_off_with_progress` 函数体被截断~~ **已解决**：此前 IDA MCP 的 `decompile()` 在 60099 字符处硬截断，只拿到函数签名前缀；已改用 `<工具调用>` 在 IDA 进程内直调 `ida_<反编译器>.decompile(0x1008278a0)` 取 `str(cfunc)`（长度 49540，与截断前 include_addresses=false 版本长度一致），并通过响应携带的服务端下载端点（`_meta.ida_mcp.output_truncated=true` → `downloadUrl`）一次性取回完整 JSON，绕开 `decompile()`/`<工具调用>` 两层工具自身的预览截断。落盘前核验：花括号 46/46 配平、以 `return v187;}` 正常收尾、无 `TRUNCATED`/`chars total` 残留标记。完整体见 `pseudocode/0002-reconcile-native-off-with-progress-0x1008278a0.c`（原 `-TRUNCATED` 文件已删除），并已同步用 `append_comments` 写回中文函数级注释至 mac IDB + `<工具调用>`。
- **Windows 侧全部 7 个目标未定位**：`AiMaMi 1.2.6 win64.exe` 是 stripped 构建，所有精确符号名查询均返回 `Not found`。仅通过字符串搜索定位到 `router_reconciler.rs` 源码路径锚点（panic::Location 常量池条目）@ `0x14185af27`，但对该地址的 `xrefs_to` 查询返回空结果——说明该字符串是通过 `Location` 结构体间接引用而非直接代码 xref，需要按红线24 win-strip 三层恢复法（panic-Location 两跳 xref → 调用图传播 → tauri 命令名精确命名）做进一步工作，本轮受时间预算限制未完成。
- 下一层递归函数（`codex_config_reconciler::reconcile_inner`、`config_takeover::takeover`、`codex_project_state::repair_if_needed`、`router_unlock_auth::commit_auth_for_router`、`cleanup_private_reasoning_items_in_existing_rollout`）均未展开——真正的持久化/错误处理落点在这些函数内部。
- `RouterToggleProgress` 的 5 个字段 key 字符串内容未提取（仅确认长度）。
- 未与真实 AiMaMi App 做参照运行对照（红线25：未对照，仅静态反编译分析）。

## 门禁状态

`gate_accepted: false`，`implementation_use: false`。本轮为 gap_needs_reducer 状态，未达到 `readyToImplement`。
