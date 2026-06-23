# CHANGELOG-CROSSMAP.md — 官方 Changelog 逐条命中映射

**版本**: AiMaMi 1.1.1
**平台**: windows-x64
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

**图例**:
- ✓ 命中实证 — 有具体 VA/字符串/行为证据
- ⚠ 待证 — 有间接证据但不完整
- ✗ 未对上 — win 平台无此 IPC 实现
- ⚠ 表面陷阱 — 旧结论被推翻/曾误标记

---

## Changelog #1：智能路由/中转注入重构，配置接管+协议翻译+本地代理转发整体升级；新增 API 登录模式

### 命中评估：✓ 命中实证（主要路径）+ ✗ 未对上（本地代理转发 win 端）

**✓ API 登录模式 — 强实证**：
- `set_codex_api_login`（新增命令）：VA 0x1406D8620，params manager+enabled+relaunch，写 relay config codexApiLogin 字段，relaunch 机制（quit+restart Codex），rollback on fail
- `set_codex_api_slots`（新增命令）：写 relay config codexApiSlots 字段
- `set_codex_router_enabled`（签名变更）：新增 apiLogin 参数（backend 字符串 sub_14096A2D0 确认）
- relay_manager_state struct 字段 +365=codexApiLogin(bool)，+128=codexApiSlots，+364=codexRouterEnabled

**✓ 配置接管/协议翻译 — 间接实证**：
- relay provider quota 系统（get_relay_provider_quota）：11 provider URL 路由分类器（relay_quota_provider_url_classifier_sys），MiniMax 专用 parser，per-provider HTTP quota 查询
- relay display tags（set_relay_display_tags）：provider 显示配置接管
- relay provider reorder（reorder_relay_providers）：provider 优先级管理

**✗ 本地代理转发（win 端）**：
- relay_proxy_server / append_assistant_and_tool_results：win 1.1.1 dispatcher 0 string hits，本地代理转发层在 win 无 IPC 暴露
- Win 平台上代理转发可能通过内部 C 层或其他机制实现，不通过 Tauri IPC

**⚠ 表面陷阱（mac-delta 误膨胀76 警告）**：
- 本包仅报告 win 逆向证据，不继承 macOS delta 结论。macOS delta 76 条膨胀问题是 macOS producer 会话的单独议题。

---

## Changelog #2：中转连接稳定性，改善长流式回复中断；切网络环境后更易自动恢复

### 命中评估：⚠ 待证（win 有 stream 命令，稳定性改善内部实现未暴露为 IPC）

**✓ 流式测试命令（间接证据）**：
- `test_relay_draft_stream`（新增）：SSE 流式测试，POST /v1/chat/completions 或 /v1/messages，text/event-stream
- `test_relay_provider_stream`（新增）：provider 级流式测试，带 model 参数（1.0.9 无 model 参数）

**⚠ 连接稳定性内部改进**：
- `confirm_pending_auto_switch_and_restart_codex` coroutine 重构为 4-outer-state+nested sub-state machine，新增 relay provider type vtable dispatch（off_141899420）
  - 这一重构可能支撑了切网络环境后的自动恢复，但内部状态机细节（何时触发恢复、retry 逻辑）未在 dim1 CCF 中确认
- 已知 sub_14096A2D0（3696B multi-command coroutine）包含多个 restart/relay-coordination 命令字符串，暗示这是网络切换/恢复的协调入口，但未完整逆向

**✗ 中断恢复专用 IPC 命令**：
- win 1.1.1 无 reestablish_relay_connection / recover_relay_stream 等专用恢复命令（0 string hits）
- 自动恢复逻辑为 Rust 内部状态机，不暴露为独立 IPC 命令

---

## Changelog #3：中转 agent 任务体验，编辑/补丁/Shell 等工具调用在中转模式下更连贯

### 命中评估：✗ 未对上（win 平台）

**✗ win 无 relay agent 工具调用 IPC**：
- `relay_proxy_server`：0 string hits（win 无 SSE 代理服务器 IPC）
- `append_assistant_and_tool_results`：0 string hits（win 无工具调用结果追加 IPC）
- win 平台的 agent 任务体验改善（编辑/补丁/Shell 工具调用连贯性）不通过 Tauri IPC 命令实现

**⚠ 表面陷阱（mac-delta 曾误膨胀76）**：
- macOS 1.1.1 可能有 relay_proxy_server / append_assistant_and_tool_results，但这是 macOS 独有 IPC，win 不适用。禁止从 macOS delta 推断 win 实现。

---

## Changelog #4：Windows：修复应用已运行时一键导入偶发失败；托盘图标更新为应用 Logo

### 命中评估：✓ 命中实证（导入修复）+ ⚠ 待证（托盘图标）

**✓ 导入修复 — 强实证**：
- `import_accounts_from_file`（body-delta）：handler sub_140961470（6063B），1.1.1 新增 relay provider vtable dispatch（off_141899420 → sub_14023EDA0/sub_14023EAB0），处理 app 运行时并发导入场景
- win 专有错误字符串：`RUNTIME_REFRESH_FAILED_AFTER_IMPORT`（35B）新增，专门处理导入后运行时刷新失败
- `begin_add_account_attach_monitor`：结构与 1.0.9 一致，win 专有 sub_14078C070 在成功路径存在，确认一键导入 monitor 机制完整

**⚠ 托盘图标更新**：
- win 1.1.1 无法通过 逆向分析 binary 直接验证图标资源变更（PE 图标在资源段，非代码逻辑）
- package/aimami-1.1.1-win64/（见 relay/aimami-1.1.1-win64/ 目录）可能含资源，未在本次逆向 session 提取

---

## Changelog #5：系统诊断，补全推理强度合法值识别（如 xhigh）；改善线程数据库迁移等诊断修复成功

### 命中评估：✓ 命中实证（xhigh）+ ✗ 未对上（线程迁移 win 端 IPC）

**✓ xhigh reasoning effort 识别 — 强实证**：
- string 'autominimallowmediumhighxhighmax'@0x1412c723a（win 1.1.1 binary 确认）
- 单 xref from sub_1402C7F50（~47KB，主 relay/router diagnostic orchestrator）
- xhigh 是合法推理强度值，与旧版本（仅 auto/minimal/low/medium/high/max）的区别已逆向确认

**✓ 诊断修复命令确认**：
- `fix_codex_router_issue`（新增，dispatcher 确认）：handler sub_1400246B0，argKeys=manager+itemId，fix apply core sub_14021ACA0
- `diagnose_codex_router`：handler sub_140021AE0（911B），sub_140218E30 core diagnose logic
- `run_codex_router_diagnostics`：dispatcher string 0x1412ac580 确认

**✗ 线程迁移 IPC（win 端）**：
- `migrate_threads_for_router`：0 string hits
- `has_router_thread_migration`：0 string hits
- `rollback_threads_for_router`：0 string hits
- win 1.1.1 的线程数据库迁移修复是内部启动时逻辑（startup-time internal migration），不暴露为 Tauri IPC 命令。Changelog #5 "线程数据库迁移"的 win 修复不可通过 IPC 层观察。

---

## 汇总表

| Changelog 条目 | 命中状态 | win 特有陷阱 |
|---|---|---|
| #1 智能路由+API登录模式 | ✓ 命中实证（API 登录、配置接管）+ ✗ 代理转发 win 无 IPC | mac-delta 膨胀76 不适用于 win |
| #2 中转连接稳定性 | ⚠ 待证（stream 命令存在；恢复逻辑内部） | confirm_pending 重构是关联变化 |
| #3 relay agent 工具调用连贯 | ✗ win 无 relay_proxy_server/append 端点 | macOS-only IPC，禁从 mac 推断 |
| #4 win 导入修复+托盘图标 | ✓ 导入修复强实证；⚠ 图标待证（资源段） | RUNTIME_REFRESH_FAILED_AFTER_IMPORT win 专有 |
| #5 xhigh+线程迁移修复 | ✓ xhigh 强实证；✗ 线程迁移 win 无 IPC | migrate_threads_for_router 系列 win 0 hits |
