# CHANGELOG-CROSSMAP.md — 官方 1.1.1 更新日志命中映射

**session**: wf-aimami111-delta-20260617-repair
**produced_at**: 2026-06-17
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

> 任务：把官方 5 条 changelog 逐条映射到本平台命中的命令/函数证据。
> 标注：✓命中实证 / ⚠待证 / ✗未对上 / 【表面陷阱】

---

## #1 智能路由/中转注入重构：配置接管+协议翻译+本地代理转发整体升级；**新增 API 登录模式**

**✓ 命中实证**

| 证据 | 路径 | 细节 |
|------|------|------|
| `set_codex_api_login` 新增 | raw/1.1.1/macos-arm64/commands_relay/set_codex_api_login/ | 新增 virtual API 登录模式：virtual-auth-marker.json + enable_virtual_login + rollback_api_login_enable；stop/launch codex 进程 |
| `set_codex_router_enabled` 新增 argKey `apiLogin` | raw/1.1.1/macos-arm64/commands_relay/set_codex_router_enabled/ | mode 参数控制 direct-key/api-login-proxy 模式；CodexRouterTogglePayload 15 字段（含 codexLaunchError） |
| `set_codex_api_slots` 新增 | raw/1.1.1/macos-arm64/commands_relay/set_codex_api_slots/ | Codex API slot 管理（≤5 个 provider，validate_api_slots）；配合 API 登录模式 |
| `get_relay_proxy_status` hostStr 格式变更 | raw/1.1.1/macos-arm64/commands_relay/get_relay_proxy_status/ | hostStr 从 "127.0.0.1:\<PORT\>" → "http://127.0.0.1:\<PORT\>/codex/v1"（接入 /codex/v1 路由层，协议翻译升级） |
| 字符串证据：relay config 序列化键 | evidence @0x101150a09 | `codexRouterEnabled`,`codexApiLogin`,`codexApiSlots`,`displayTagGlobal`,`displayTagWoyao`,`CodexApiSlot` — relay 配置接管字段集 |
| `config_takeover::takeover/restore` | set_codex_router_enabled evidence | TOML 块标记 "# >>> aimami-relay codex-router top start" 管理 codex config 接管生命周期 |

**⚠ 待证（Windows 平台对称行为）**：Windows 平台 set_codex_api_login 的 Windows Credential Store 路径（vs macOS Keychain）需单独 Windows leaf 验证（INDEX 条目已存在）。

---

## #2 中转连接稳定性：改善长流式回复中断；切网络环境后更易自动恢复

**✓ 命中实证（部分）+ ⚠ 待证**

| 证据 | 路径 | 细节 |
|------|------|------|
| `test_relay_provider_stream` 新增流式测试 | raw/1.1.1/macos-arm64/commands_relay/test_relay_provider_stream/ | `is_stream_terminal_event` + `extract_stream_text_delta`；SSE terminal event 识别（message_stop/response.done/response.failed/response.incomplete）；流式健康检查基础设施 |
| `test_relay_draft_stream` 新增 | raw/1.1.1/macos-arm64/codexmate_lib__commands__relay/test_relay_draft_stream/ | RelayDraftTestInput{wireApi}；classify_openai_chat_endpoint/resolve_responses_urls；wire API 路由分支 |
| `ensure_proxy_started` TCP 检查 | set_codex_router_enabled evidence @0x1005d56f0 | TCP connect_timeout 300ms ×2；50ms sleep interval；代理存活检查；失败时重新 spawn 代理线程 |
| `test_relay_draft` / `test_relay_provider` 删除 | removed.txt | 非流式测试命令替换为流式版本 |

**⚠ 待证**：长流式回复中断的具体修复（连接保持/重连逻辑）在 test_provider_staged async body 内部深层 reqwest 流式读取路径未完整追踪；"切网络环境自动恢复"的具体触发逻辑（可能在 ensure_proxy_started 或 frontend 轮询）未完整追踪。

---

## #3 中转 agent 任务体验：编辑/补丁/Shell 等工具调用在中转模式下更连贯

**✓ 命中实证（结构性）+ ⚠ 待证（具体路径）**

| 证据 | 路径 | 细节 |
|------|------|------|
| `migrate_threads_for_router_with_scope` | set_codex_router_enabled evidence（Inferred §5） | 启用 router 后重写 thread-level provider bindings → relay proxy endpoint；thread_migration_exists 字段反映迁移状态 |
| `normalize_thread_providers_before_migration` | set_codex_router_enabled evidence（Inferred §4） | enable 路径 slot 解析前去重/排序 providers，防止 migration 冲突 |
| `reorder_relay_providers` 新增 | raw/1.1.1/macos-arm64/commands_relay/reorder_relay_providers/ | provider 排序持久化 + sync_codex_config；agent 工具调用路由可受 provider 顺序影响 |
| `set_relay_display_tags` 新增 | raw/1.1.1/macos-arm64/commands_relay/set_relay_display_tags/ | displayTagGlobal/displayTagWoyao 与 relay state 写入；配合 agent UI 标签 |
| fix_codex_router_issue 新增 `thread-router-migrations` itemId | relay/fix_codex_router_issue/evidence.md | 新增修复项：清理/迁移 thread-router migration 残留文件 |

**⚠ 待证**：编辑/补丁/Shell 工具在 agent task 中具体如何路由（在 codex CLI 层而非 AiMaMi IPC 层），binary 中未找到对应 Tauri command；工具调用连贯性改善可能在 codex relay 代理的 HTTP 转发层，属于 codex sidecar 行为，非 AiMaMi IPC 层。

---

## #4 Windows：修复应用已运行时一键导入偶发失败；托盘图标更新为应用 Logo

**✗ macOS 无对应命中（平台专属）+ ✓ 托盘侧面证据**

| 证据 | 说明 |
|------|------|
| "修复应用已运行时一键导入" | Windows 专属问题；macOS binary 无对应变更；Windows leaf 需单独验证（Windows INDEX 条目已存在） |
| 托盘图标更新 | `focus_main_window` evidence 确认 tray_menu::handle_tray_menu_event 调用 focus_main_window（WryUserEvent discriminant=28）；1.1.1 tray 架构不变；具体图标资源变更属 assets 层，binary 无法验证 |

【表面陷阱警示】：此条 changelog 是 Windows 专属修复，不要在 macOS evidence 中强行寻找对应命令。

---

## #5 系统诊断：补全推理强度合法值识别（如 xhigh）；改善线程数据库迁移等诊断修复成功

**✓ 命中实证**

| 证据 | 路径 | 细节 |
|------|------|------|
| `diagnose_codex_router` 返回结构升级 | raw/1.1.1/macos-arm64/relay/diagnose_codex_router/evidence.md | 返回 DiagnoseCodexRouterResult（0x190B）；新增字段 has_migration/thread_migration_exists；6 条中文诊断字符串（byte-confirmed）；1.0.9 无此命令 |
| `diagnose_codex_router` 字段 `config_stale_reason` | evidence @0x1011542f7 | CodexRouterTogglePayload 含 config_stale_reason 字段；与 fix_codex_router_issue 的 stale 修复路径配合 |
| `fix_codex_router_issue` 新增 itemId | relay/fix_codex_router_issue/evidence.md 行 5 | "thread-router-migrations"(24B)/residual_cache/residual_manifest 新修复项；命中"线程数据库迁移等诊断修复成功" |
| fix_auth_integrity 新增 | relay/fix_codex_router_issue/evidence.md 行 9 | backup auth.json 恢复路径：read_dir sort + serde_json parse + is_known_placeholder_token 检测 |

**⚠ 待证**：`xhigh` 推理强度识别具体在哪条命令（diagnose/fix 内部逻辑中未直接找到 "xhigh" 字符串）；可能在 `diagnose` 命令（1.0.9 same，VA 漂移）内部实现，本轮未深追。

---

## 表面陷阱记录

1. **mac-delta 曾误膨胀 76 条**：原因是早期 shard 把 mac-shard baseline_absent（7 条）+ needs_full（10 条）+ delta（18 条）全部混入 delta，实际通过 frontend-delta 校准后 delta=34 条（含 9 条真新增）。
2. **restart_codex VA 复用漂移**：1.0.9 VA=?；1.1.1 VA=0x100616150；符号 hash 变；行为合同继承（argKeys=[] 不变，stop+launch codex 逻辑不变）。
3. **hotspot/notch 旧"macOS-only"结论被 win 1.1.1 推翻**：1.0.9 时 set_hotspot_enabled 被标为 macOS-only；1.1.1 INDEX 已有 windows-x64 set_hotspot_enabled 条目，说明 Windows 也实现了 hotspot；请消费侧不要继承"macOS-only"标注。
4. **test_relay_draft_stream 路径 canonical drift**：leaf 目录在 `codexmate_lib__commands__relay/` 而非 `commands_relay/`；INDEX key 应为 `aimami/1.1.1/macos-arm64/codexmate_lib__commands__relay/test_relay_draft_stream/full-chain`。
