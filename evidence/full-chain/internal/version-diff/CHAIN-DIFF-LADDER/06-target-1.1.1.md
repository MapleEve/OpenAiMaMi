# Hop 06 — 1.0.9 → 1.1.1 逐链路差异阶梯

**2026-06-20** · 公开清洗版 · 只发布摘要、计数、gate 姿态和仓库相对材料入口

## hop 概览

| 项 | 值 |
|---|---|
| 方向 | 1.0.9（baseline 100% 逆完）→ 1.1.1 |
| macOS arm64 binary SHA256 | `f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb` |
| Windows x64 binary SHA256 | `d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610` |
| macOS delta | 43 条 delta；9 新增、10 删除、34 行为/DTO/副作用变化；54 same-skip；39 orphan-no-backend |
| Windows delta | 60 条 gate-final delta 分母；55 readyToImplement、3 strictImplementationUse、2 lower |
| 公开证据形态 | 本文件只保留清洗后的差异摘要；不复制二进制、反编译正文、原始索引行或私有机器路径 |

> 四件套仍沿用本目录规则：**链路名 ｜ 变更类型 ｜ 具体改了什么 ｜ 证据锚**。本公开版的证据锚只写公开仓相对入口或 sanitized source label，不写私有绝对路径。

---

## A. macOS 1.1.1 delta 摘要

### A1. 真新增命令（9 条）

| 链路名 | 变更类型 | 具体改了什么 | 证据锚 |
|---|---|---|---|
| `graceful_restart_for_update` | 新增 backend | 解析当前可执行文件到 app bundle，延迟重新打开应用后退出当前进程。 | sanitized mac delta summary；confidence high |
| `set_codex_api_login` | 新增 relay 设置 | 启停 virtual API 登录，更新认证标记和 Codex 配置，并发出进度事件。 | sanitized mac delta summary；confidence high |
| `set_codex_api_slots` | 新增 relay 设置 | 写入最多 5 个 Codex API slot，校验 provider 唯一性后持久化并同步配置。 | sanitized mac delta summary；confidence high |
| `get_relay_provider_quota` | 新增 quota 查询 | 查询单个 relay provider 用量，支持多层 API key 读取。 | sanitized mac delta summary；confidence high |
| `reorder_relay_providers` | 新增排序接口 | 按 `orderedIds` 重排 relay providers 并持久化。 | sanitized mac delta summary；confidence high |
| `reveal_relay_api_key` | 新增敏感值读取 | 按 provider 读取 API key，返回可选明文；消费侧必须按敏感值处理。 | sanitized mac delta summary；confidence high |
| `set_relay_display_tags` | 新增展示标签 | 写入 global / woyao 两类展示标签，保存 relay state。 | sanitized mac delta summary；confidence high |
| `parse_aimami_deeplink` | 新增 deeplink 解析 | 解析 `aimami://v1/import`，校验 provider/name/endpoint/apiKey/model 字段。 | sanitized mac delta summary；confidence high |
| `test_relay_draft_stream` / `test_relay_provider_stream` | 新增流式测试 | 新增 relay draft/provider 流式测试路径，支持 OpenAI-compatible 与 Anthropic-style streaming。 | sanitized mac delta summary；confidence high |

### A2. 真删除命令（10 条）

| 分组 | 命令 | 说明 |
|---|---|---|
| plugin 下线 | `get_plugin_config`、`list_plugins`、`toggle_plugin`、`update_plugin_config` | plugin IPC 组在 1.1.1 macOS backend 中移除。 |
| passthrough 下线 | `get_passthrough_audit_log`、`set_block_official_passthrough` | passthrough 审计/阻断面移除。 |
| relay 调整 | `set_relay_provider_network`、`test_relay_draft`、`test_relay_provider` | network 设置入口移除；非流式测试被 stream 版本替代。 |
| system 调整 | `reset_codex_config` | 配置重置入口移除或被修复项吸收。 |

### A3. macOS 关键行为/DTO/副作用变化

| 链路名 | 变更类型 | 具体改了什么 | 消费风险 |
|---|---|---|---|
| `configure_auto_switch` | DTO breaking | 移除 `hasSchedule` / `scheduleMin`；阈值字段保留为可选语义。 | medium |
| `diagnose_codex_router` | DTO 扩展 | 返回体新增 migration/thread-migration 状态与诊断项。 | medium |
| `fix_codex_router_issue` | 修复项扩展 | 新增 router migration、relay state cache、residual cache/manifest 等修复项；部分修复触发 Codex 重启。 | high |
| `get_relay_proxy_status` | DTO 格式变更 | `hostStr` / `portStr` 从裸 host/port 变为带协议或路径的 URL 语义。 | high |
| `load_relay_state` | 副作用收窄 | 移除 proxy auto-start 与 API key scrub loop；现在只返回 relay state snapshot。 | high |
| `load_snapshot` | 语义升级 | 从读取快照升级为触发完整 runtime snapshot refresh。 | medium |
| `refresh_usage_snapshot` | 事件名变更 | runtime 更新事件从旧 snapshot 事件名迁移到 `runtime-state-updated`。 | high |
| `delete_sessions` | 持久化变化 | 删除会话新增数据库副作用，不再只是 JSON 文件删除。 | high |
| `load_installed_skills` / `load_mcp_servers` | 读路径新增写回 | 读取后写入 bootstrap cache snapshot。 | medium |
| `rebuild_registry` | 持久格式规范化 | registry 中 plan/auth 类字段转为小写。 | medium |
| `remove_skill` | success 语义变化 | 缺失 skill 目录可返回成功而不是错误。 | medium |
| `test_api_proxy_config` | token 来源变化 | token 上下文改为从认证文件重建，而不是直接复用 repo 内存状态。 | high |
| `upsert_relay_provider` | API key 存储机制变化 | API key 写入机制替换为文件化存储路径；消费侧必须避免沿用旧 keychain-only 假设。 | high |

### A4. macOS gate-final

| gate | 计数 | 命令 |
|---|---:|---|
| readyToImplement | 43/43 | 全部 macOS delta 命令 |
| strictImplementationUse | 0 | 无 |
| lower | 0 | 无 |

macOS accepted unknown 均为不阻塞 RTI 的实现细节 ceiling 或跨平台非阻塞项；公开仓不复制 recovery 原文，只保留 gate-final 结论。

---

## B. Windows 1.1.1 delta 摘要

### B1. 新增或重新确认 backend 的链路

| 分组 | 命令 | 具体改了什么 |
|---|---|---|
| relay API / streaming | `get_relay_provider_quota`、`reveal_relay_api_key`、`set_codex_api_login`、`set_codex_api_slots`、`set_relay_display_tags`、`test_relay_draft_stream`、`test_relay_provider_stream` | 新增 quota、API key reveal、Codex API login/slots、display tags 与 stream test 能力。 |
| relay/provider reorder | `reorder_relay_providers` | 校验 `orderedIds` 与 provider 数量匹配后重排。 |
| deeplink | `parse_aimami_deeplink` | Windows 端新增同名 deeplink 解析 backend。 |
| codex/router diagnostics | `fix_codex_router_issue`、`run_codex_router_diagnostics`、`diagnose_codex_router` | 诊断与修复链路扩展。 |
| restart / switch | `confirm_pending_auto_switch_and_restart_codex`、`restart_codex`、`graceful_restart_for_update` | 重启与 pending switch 合并进新的协调路径。 |
| hotspot | `has_notch`、`hotspot_ready`、`get_hotspot_enabled`、`set_hotspot_enabled` | 推翻旧版 macOS-only 判断，Windows 1.1.1 存在 backend。 |

### B2. Windows 真删除命令（14 条）

| 分组 | 命令 | 说明 |
|---|---|---|
| custom instruction | `apply_custom_instruction`、`clear_custom_instruction_block`、`load_custom_instruction_state` | Windows backend 删除；macOS 侧仍按 orphan/accepted-substitute 处理。 |
| plugin / passthrough | `get_plugin_config`、`list_plugins`、`toggle_plugin`、`update_plugin_config`、`get_passthrough_audit_log`、`set_block_official_passthrough` | 与 macOS 方向一致，下线对应 IPC 面。 |
| relay/system | `set_relay_provider_network`、`test_relay_draft`、`test_relay_provider`、`reset_codex_config`、`check_update_installability` | 被新 stream、router/switch 或 restart 链路吸收。 |

### B3. Windows 高风险行为变化

| 链路名 | 变更类型 | 具体改了什么 | 消费风险 |
|---|---|---|---|
| `activate_relay_provider` / `deactivate_relay_provider` | relay state 管理重写 | 新增 quota 检查、状态互斥和登录后同步；provider stride 改变。 | high |
| `dismiss_pending_auto_switch` | 响应 DTO breaking | 从可选字符串变为包含 current/candidate/dismissedAt 的对象。 | high |
| `force_kill_codex` | 杀进程策略重写 | 从单步强杀改为软杀、按 PID 强杀和超时 deadline 的两阶段流程。 | high |
| `get_device_id` | read-only → read+write | 读取 device id 同时可能写完整 settings。 | high |
| `get_image_compat` | 读向命令删除 | 1.1.1 Windows backend 删除 read command；前端 invoke 应视为 dead code。 | high |
| `load_quota_history` | 过滤逻辑新增 | 新增 7 天窗口过滤与 accountKey 联合过滤。 | high |
| `load_sessions` | DTO + 入参扩展 | SessionMeta 新增 parent/depth/agent/thread/missing 等字段，并新增 bool 入参。 | high |
| `merge_mystery_unlock_grants` | 持久 schema 迁移 | grants 从旧 usage refresh 结构迁移到 hotspot/settings 相关结构。 | medium |
| `set_auto_switch` | 副作用重构 | 从内存状态写入扩展为 scheduled task、文件删除和持久配置更新。 | high |
| `upsert_mcp_server` | DTO + backend 替换 | `open/path` 被 `enabled` 替换；mcp config backend 更换。 | high |
| `upsert_relay_provider` | provider 写入重写 | relay provider 写入新增登录同步、quota 克隆和 key 写入机制变化。 | high |

### B4. Windows gate-final

| gate | 计数 | 命令 |
|---|---:|---|
| readyToImplement | 55/60 | 除下列 strict/lower 外的 Windows delta 命令 |
| strictImplementationUse | 3 | `force_kill_codex`、`get_relay_provider_quota`、`parse_aimami_deeplink` |
| lower | 2 | `get_image_compat`（consumerStartReady；backend 读向删除）、`import_chatgpt_session_account`（strictImplementationUse_candidate；call-tree depth gap） |

Windows gate-final 取 60 条 per-platform delta 分母；旧的 59/59=100% 中间数字不作为公开消费依据。

---

## C. 跨平台消费边界

- macOS 与 Windows gate 独立闭合；任何一端不外推另一端。
- plugin / passthrough 旧 IPC 面在 1.1.1 中按删除处理。
- stream relay test 是新入口；旧 `test_relay_draft` / `test_relay_provider` 不应继续作为 1.1.1 backend 入口。
- Windows hotspot backend 在 1.1.1 存在，不能沿用旧 macOS-only 判断。
- `get_image_compat` 在 Windows 读向删除但写向相关能力仍有保留，消费侧应拆分 read/write 语义。

## D. 公开发布边界

本文件是 public delta ladder，不是原始证据包。禁止从本文件推导私有证据位置、工具会话、机器名、反编译正文或原始索引内容。需要实现时，以本文件的变化分类作为入口，再回到公开仓相对的重建链条与允许发布的 manifest 元数据核对。
