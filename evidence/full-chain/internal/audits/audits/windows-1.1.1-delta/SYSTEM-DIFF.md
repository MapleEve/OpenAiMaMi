# SYSTEM-DIFF.md — 系统级架构差异：1.0.9 → 1.1.1 Windows-x64

**平台**: windows-x64
**基线**: 1.0.9（dispatcher = auto_switch_multiplex_dispatcher_sys@0x1402663E0，relay内部路由层）
**目标**: 1.1.1（dispatcher = tauri_ipc_main_dispatcher_sys@0x14000D2A0，统一 Tauri IPC 层）
**SHA256 binary 1.1.1**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

---

## 1. Dispatcher 架构变化

| 维度 | 1.0.9 | 1.1.1 |
|---|---|---|
| dispatcher VA | 0x1402663E0 | 0x14000D2A0 |
| dispatcher 名称 | auto_switch_multiplex_dispatcher_sys（relay 内部路由层） | tauri_ipc_main_dispatcher_sys（统一 Tauri IPC 入口） |
| dispatcher cases | 未精确统计 | 41 cases（cyclomatic complexity=151，17870B） |
| IPC 命令总数 | 127 | 126 |
| 比较基准注意 | 两者是不同功能层，不可直接 VA 继承 | — |

**架构解释**：1.0.9 的 relay dispatcher 负责 relay 内部路由，1.1.1 的 main dispatcher 是所有 Tauri IPC 命令的统一入口。这意味着 1.0.9 的 VA 地址在 1.1.1 中已被其他函数复用，任何基于 VA 的快查必须重新定位。

---

## 2. Relay 子系统重构

| 维度 | 变化 |
|---|---|
| relay config JSON 字段 | 1.1.1 确认 9 字段：schemaVersion/providers/activeByIde/proxy/codexRouterEnabled/codexApiLogin/codexApiSlots/displayTagGlobal/displayTagWoyao |
| relay provider stride | 232B（win 1.1.1 逆向分析 确认，与 1.0.9 win relay provider struct stride 保持一致） |
| relay provider vtable | off_141899420 — 1.1.1 新增跨多命令使用（confirm_pending、import_accounts），基于 provider 类型做运行时分叉 |
| relay API login 模式 | 新增 set_codex_api_login 命令；codexApiLogin bool 写入 relay config；set_codex_router_enabled 新增 apiLogin 参数 |
| relay provider quota | 新增 get_relay_provider_quota；支持 11 providers URL 路由；MiniMax 专用 response parser |
| relay provider order | 新增 reorder_relay_providers；SIMD Vec stride 232B reorder；TLS id-index HashMap 重建 |
| relay provider key reveal | 新增 reveal_relay_api_key；keychain 查找共享叶 relay_keychain_lookup_for_quota_sys |
| relay provider display tags | 新增 set_relay_display_tags；写 displayTagGlobal/displayTagWoyao 字段 |
| relay stream 测试 | test_relay_draft / test_relay_provider 替换为 stream 版本（SSE 流式响应，onEvent Handler 参数） |
| relay proxy/agent SSE | relay_proxy_server / append_assistant_and_tool_results **win 无 IPC backend**（0 string hits） |
| relay provider network 设置 | set_relay_provider_network **已删除**（前端+backend 全下线） |

---

## 3. Plugin 系统整体下线

1.1.1 win：list_plugins / get_plugin_config / toggle_plugin / update_plugin_config 四条命令全部从 dispatcher string pool 消失。plugin 管理 IPC 面整体退出。

---

## 4. passthrough 审计面清除

get_passthrough_audit_log / set_block_official_passthrough 同时从 dispatcher 消失。passthrough 管控 IPC 面退出。

---

## 5. 诊断子系统扩充

| 命令 | 1.0.9 | 1.1.1 |
|---|---|---|
| diagnose | 存在 | 存在（dispatcher string 0x1412ac28c 确认） |
| diagnose_codex_router | 存在 | 存在（handler sub_140021AE0 911B，argKey=manager） |
| run_codex_router_diagnostics | 存在 | 存在（string 0x1412ac580 确认） |
| fix_codex_router_issue | **不存在** | **新增**（handler sub_1400246B0，argKeys=manager+itemId，fix apply core sub_14021ACA0） |
| xhigh reasoning effort | 未见 | 新增识别（string 'autominimallowmediumhighxhighmax'@0x1412c723a，单引用于~47KB 诊断 orchestrator） |

---

## 6. 账号管理变化

- import_accounts_from_file：1.1.1 win 新增 relay provider vtable 并发导入路径，处理 app 运行时导入场景；win 专有错误 RUNTIME_REFRESH_FAILED_AFTER_IMPORT（macOS 1.1.1 未见）
- begin_add_account_attach_monitor：结构不变，win 专有 sub_14078C070 仍在成功路径

---

## 7. 跨平台声明（win 独有缺失）

以下命令在 win 1.1.1 无 IPC backend，仅 macOS 或内部实现：
- signal_codex_quit_wake（macOS-only，5 搜索 pattern 全 0 hit）
- relay_proxy_server / append_assistant_and_tool_results（Changelog #3 relay agent tool continuity）
- migrate_threads_for_router / has_router_thread_migration / rollback_threads_for_router（Changelog #5 线程迁移，win 为内部启动逻辑）
