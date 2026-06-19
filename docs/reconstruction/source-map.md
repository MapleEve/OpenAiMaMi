# 公开源码地图

本文件描述当前公开仓库结构，以及它在 OpenAiMami 1.0.9 重建中的角色。所有路径均为仓库相对路径。

## 项目元信息

| 项目 | 值 |
| --- | --- |
| 包名 | 以 `package.json` 为准 |
| 仓库内公开版本 | `1.0.0` |
| 目标重建版本 | `1.0.9` |
| 许可 | Apache License |
| 桌面应用名称 | OpenAiMami |
| 技术栈 | Tauri 2、React、Rust |
| 前端构建 | Vite、TypeScript |

## 顶层结构

| 路径 | 角色 |
| --- | --- |
| `src/` | 当前公开前端源码和重构入口。 |
| `src-tauri/` | 当前公开 Tauri 与 Rust 后端骨架。 |
| `docs/reconstruction/` | 中文重建说明。 |
| `evidence/full-chain/raw/` | raw 链条、前端 dumped 文件、IPC、CCF、manifest 和校验摘要。 |
| `evidence/full-chain/internal/` | 审计地图、前端地图、蒸馏逻辑、原始叶子和结构化摘要。 |
| `evidence/binary-manifests/1.0.9/i64-databases.json` | `OpenAiMami IDB` 状态、大小和哈希清单。 |
| `package.json` | 前端脚本和依赖声明。 |
| `src-tauri/Cargo.toml` | Rust 包和依赖声明。 |
| `src-tauri/tauri.conf.json` | Tauri 应用和打包配置。 |

## 前端目标边界

前端按主流模块化架构重构并还原，目标边界包括：

| 边界 | 角色 |
| --- | --- |
| `app` | 应用启动、Provider 和根组合。 |
| `routes` | 懒加载路由、页面壳、加载态、错误态和空态。 |
| `features` | 功能公开接口和私有实现。 |
| `services` | IPC 包装、运行期适配和服务契约。 |
| `store` | 类型化状态骨架、选择器和 StoreUpdater。 |
| `hooks` | 共享 React 钩子。 |
| `utils` | 共享工具函数。 |
| `types` | 共享 TypeScript 类型。 |
| `config` | 公开配置常量和默认值。 |
| `locales` | 本地化资源。 |
| `lib` | 第三方库包装和稳定门面。 |
| `layout` | 应用外壳、导航、托盘相关外壳和公共布局。 |

OpenAiMami 1.0.9 前端覆盖面：

- `overview`
- `accounts`
- `sessions`
- `analytics`
- `custom-instructions`
- `mcp`
- `skills`
- `relay`
- `settings`
- `maintenance`
- `daemon-autoswitch`
- `tray-shell`
- `voice`

## 当前前端入口

| 路径 | 说明 |
| --- | --- |
| `src/main.tsx` | React 启动入口。 |
| `src/App.tsx` | 应用根包装。 |
| `src/main-app.tsx` | 主路由状态、页面加载和外壳组合。 |
| `src/components/layout/` | 侧栏和布局组件。 |
| `src/features/custom-instructions/components/` | 自定义指令工作流界面。 |
| `src/features/mcp/components/` | MCP 管理界面。 |
| `src/features/skills/components/` | Skills 管理界面。 |
| `src/features/maintenance/components/` | 维护操作界面。 |
| `src/features/plugins/components/` | 插件管理界面。 |
| `src/features/settings/components/` | 设置界面。 |
| `src/components/update/` | 更新覆盖层。 |
| `src/components/runtime/` | 运行期对话框。 |
| `src/components/ui/` | 共享 primitive 基础组件；不得放业务组合组件或模块私有状态。 |
| `src/hooks/` | React 钩子。 |
| `src/locales/` | 本地化资源。 |
| `src/types/` | 共享 TypeScript 类型。 |

## 后端目标边界

后端是六边形架构骨架：

| 边界 | 角色 |
| --- | --- |
| `commands` | Tauri 命令薄适配层。 |
| `application` | 用例编排和服务组合。 |
| `core` | 稳定领域类型和错误。 |
| `platform` | 平台能力边界。 |
| `repository` | 存储边界。 |
| `adapters` | 外部适配和桩实现。 |
| `contracts` | 前后端可序列化 DTO 和默认响应。 |

不还原后端业务实现是项目范围选择。未来业务补齐必须通过 contracts、application、repository、platform 和 adapters 进入，commands 不能变成业务逻辑容器。

## Tauri 命令表面

命令注册点是 `src-tauri/src/lib.rs`。公开命令模块位于 `src-tauri/src/commands/`。

| 模块 | 命令 |
| --- | --- |
| `custom_instructions.rs` | `load_custom_instruction_state`、`preview_custom_instruction_apply`、`apply_custom_instruction`、`clear_custom_instruction_block`、`rollback_custom_instruction` |
| `hotspot.rs` | 保留模块边界；当前公开 IPC 注册表中热点相关命令由 `system.rs` 暴露。 |
| `mcp.rs` | `load_mcp_servers`、`upsert_mcp_server`、`set_mcp_server_enabled`、`remove_mcp_server` |
| `skills.rs` | `load_installed_skills`、`load_skill_backups`、`import_skill`、`remove_skill`、`restore_skill_backup`、`delete_skill_backup` |
| `system.rs` | `load_snapshot`、`refresh_usage_snapshot`、`load_bootstrap_state`、`clean`、`rebuild_registry`、`diagnose`、`set_auto_switch`、`configure_auto_switch`、`set_api_proxy_config`、`test_api_proxy_config`、`detect_api_proxy_config`、`run_daemon_once`、`get_usage_refresh_interval`、`set_usage_refresh_interval`、`check_update_installability`、`graceful_restart_for_update`、`restart_codex`、`force_kill_codex`、`reset_codex_config`、`open_path`、`get_system_info`、`focus_main_window`、`get_device_id`、`get_notification_client_state`、`get_mystery_unlock_grants`、`merge_mystery_unlock_grants`、`get_or_create_remote_device_secret`、`import_remote_device_secret_if_empty`、`load_pending_auto_switch`、`dismiss_pending_auto_switch`、`confirm_pending_auto_switch`、`confirm_pending_auto_switch_and_restart_codex`、`has_notch`、`get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready`、`get_image_compat`、`set_image_compat` |

只有通过 `tauri::generate_handler!` 注册的命令属于前端 IPC 表面。模块内辅助函数不应被当成 IPC 入口，除非它被注册。

`get_notification_client_state` 当前恢复 settings 持久化的 `deviceId` 与 `notificationsSince` 读取/必要时创建的 repository 事务，因此 backend status 使用 `BackendEffect::RepositoryWrite`；它不声明通知客户端运行时、推送订阅、后台 watcher、Tauri event 或平台通知能力已经恢复。

## 构建和打包

| 路径 | 说明 |
| --- | --- |
| `package.json` | 定义 `dev`、`dev:web`、`build`、`preview`、`tauri` 等脚本。 |
| `src-tauri/tauri.conf.json` | 使用 Tauri 打包配置和 `../dist` 前端输出。 |
| `src-tauri/Cargo.toml` | 定义 Rust 包元信息、Apache License、Tauri 2 依赖和平台依赖。 |

## 资产

`assets/` 中保存公开应用资产。`OpenAiMami IDB` 是独立参考资产，主仓库只保存它的 manifest、大小和哈希信息。需要还原完整实现时，应先使用 raw/internal，再按需要核对 IDB 清单。

## 当前源码 / 证据映射注册表

下列索引只收口当前公开源码与 raw/internal 证据之间的 map 文档、owner 边界、验证入口和未声明边界。它不表示 raw/internal gate 已闭合，不表示 `implementation_use`、`gate_accepted`、`full_leaf` 或 `full_leaf_100` 已完成，也不表示双平台全 leaf 已完成。

| 路径 | 类别 | 验证或索引边界 |
| --- | --- | --- |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 前端 current-source closeout 台账 | `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证台账条目、ledger-only closeout 边界、map 引用、非完成声明和未恢复范围；`scripts/validate-public-boundary.mjs` 验证本台账被 source-map 与 reconstruction README 索引。 |
| `docs/reconstruction/accounts-monitor-current-source-map.md` | accounts monitor 仓储预检 | `scripts/validate-backend-accounts-owner.mjs` 直接验证本文、`begin_add_account_attach_monitor` 仓储 registry 预检、`RepositoryRead` status、未恢复后台 monitor/线程/runtime event/platform 边界和索引注册。 |
| `docs/reconstruction/mcp-skills-current-source-map.md` | mcp/skills 前端 index 查询归属与后端本地文件能力 | `scripts/validate-frontend-mcp-skills-current-source.mjs` 直接验证 `mcp-servers` 与 `installed-skills` 的 service、query、cache、overview consumer、mock、后端入口和 owner-closed closeout 边界；`scripts/validate-backend-mcp-owner.mjs` 直接验证 MCP 后端 config.toml owner、四条 IPC、双平台 gate-report、raw manifest、Rust owner、mutation 类命令和未声明 runtime/network/process/platform/daemon/voice 边界；`scripts/validate-backend-skills-owner.mjs` 直接验证 skills 后端文件事务 owner、六条 IPC、双平台 gate-report、raw skills 证据目录、command/usecase/contracts/repository/path_guard owner 和未声明执行 skill、市场安装、网络下载、外部进程、daemon watcher、平台副作用或 `voice` 接入边界；不作为双平台全 leaf 或闭源业务恢复声明。 |
| `docs/reconstruction/mcp-current-source-evidence-map.md` | MCP 后端拆分证据映射 | `scripts/validate-backend-mcp-owner.mjs` 直接验证本文、MCP 后端四条 IPC、config.toml repository、core parser、平铺请求 shape 和未声明 runtime/network/process/platform/daemon/voice 边界；本文作为合并 mcp/skills map 的拆分证据继续被索引。 |
| `docs/reconstruction/skills-current-source-evidence-map.md` | skills 后端拆分证据映射 | `scripts/validate-backend-skills-owner.mjs` 直接验证本文、skills 后端六条 IPC、raw skills 证据目录、command/usecase/repository/path_guard owner 和未声明动态执行、市场安装、网络下载、外部进程、daemon watcher、平台副作用或 `voice` 接入边界；本文作为合并 mcp/skills map 的拆分证据继续被索引。 |
| `docs/reconstruction/cross-home-usage-frontend-current-source-map.md` | cross-home-usage 前端当前源码链路 | `scripts/validate-frontend-cross-home-usage-current-source.mjs` 与 `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证本文、首页 overview usage load/refresh、analytics usage panel、service/API 门面、mock、IPC contract、closeout 台账和未声明边界；不作为 raw/internal gate、后端 IDA、真实 watcher、平台 parity、full_leaf、full_leaf_100 或 `voice` 接入声明。 |
| `docs/reconstruction/accounts-analytics-current-source-map.md` | accounts/analytics 前端链路与后端公开 owner | `scripts/validate-frontend-accounts-analytics-current-source.mjs` 直接验证本文、`quota-history` 与 `usage-analytics` 的 service、query、mutation、cache、overview consumer、mock、IPC contract 定义、后端公开文件事实 owner、closeout 台账、README 归纳和未声明边界；不作为双平台全 leaf、全文案验收、闭源 token 统计、真实运行时统计、严格平台 parity 或 `voice` 接入声明。 |
| `docs/reconstruction/mystery-unlock-current-source-map.md` | mystery unlock grants 与 route gate/helper | `scripts/validate-frontend-mystery-unlock-current-source.mjs`、`scripts/validate-frontend-mystery-gates.mjs` 与 `scripts/validate-backend-mystery-owner.mjs` 直接验证本文、`get_mystery_unlock_grants`、`merge_mystery_unlock_grants` 的 system service、overview cache/query/mutation、mock、IPC contract、后端 mystery command/usecase/repository/DTO、route gate/helper、closeout 台账和未声明边界；只登记 mystery-unlock 非 `full_leaf_100` gate 非绿字段为 current-source partial，不把 route helper 当 IPC command，不声明 dim6、gate_accepted、implementation_use、full_leaf_100 或 `voice` 接入。 |
| `docs/reconstruction/notification-client-state-current-source-map.md` | 通知客户端状态 settings 持久化收口 | `scripts/validate-backend-system-owner.mjs` 直接验证本文、`deviceId` / `notificationsSince` settings 持久化读取创建事务、DTO 字段、source-map/README 索引和未恢复通知运行时边界；`scripts/validate-frontend-notification-client-state-current-source.mjs` 专名验证 system service、overview、tray-shell、IPC contract、mock handler、E2E mock validator 和不接 `voice` 边界；`scripts/validate-frontend-current-source-closeouts.mjs` 同时验证前端调用链 closeout，不作为通知运行时恢复声明。 |
| `docs/reconstruction/system-snapshot-bootstrap-current-source-map.md` | system snapshot-bootstrap 后端当前源码链路 | `scripts/validate-backend-system-owner.mjs` 直接验证本文、`load_snapshot`、`load_bootstrap_state`、Tauri 注册、command adapter、usecase owner、repository owner、Rust DTO、TypeScript service、IPC contract、E2E mock 和未声明边界；不关闭前端 maintenance closeout 中的 `load_snapshot` 未关闭口径，不声明 raw/internal gate、真实 daemon、watcher、autoswitch、平台副作用、full_leaf、full_leaf_100 或 `voice` 接入。 |
| `docs/reconstruction/accounts-sessions-frontend-current-source-map.md` | accounts/sessions 前端当前源码链路 | `scripts/validate-frontend-accounts-sessions-current-source.mjs` 直接验证本文、accounts 与 sessions 的 route、service、query、mutation、cache、dialog、panel、mock、IPC contract、closeout 台账、README 归纳和未声明边界；不作为双平台全 leaf、全文案验收、闭源业务恢复、ChatGPT session account 真实导入或 `voice` 接入声明。 |
| `docs/reconstruction/custom-instructions-frontend-current-source-map.md` | custom-instructions 前端当前源码链路 | `scripts/validate-frontend-custom-instructions-current-source.mjs` 直接验证本文、route、service、query、mutation、cache、dialog、panel、mock、IPC contract、closeout 台账、README 归纳和未声明边界；不作为双平台全 leaf、全文案验收、闭源业务恢复或 `voice` 接入声明。 |
| `docs/reconstruction/plugins-current-source-evidence-map.md` | plugins 前端 current-source partial closeout | `scripts/validate-frontend-plugins-current-source.mjs` 直接验证本文、raw/internal 证据路径、当前源码路径、npm 入口和未声明边界。 |
| `docs/reconstruction/relay-core-current-source-evidence-map.md` | relay-core 前后端公开 owner 骨架 | `scripts/validate-backend-relay-owner.mjs` 直接验证本文、本地配置 repository 恢复、router config owner、diagnostic fix owner、relay test retry 错误语义、relay_thread_migration 空操作/待处理 owner 边界、未声明真实代理/网络/进程/线程迁移边界和 source-map 注册；不把内部 readyToImplement 证据写成公开运行时迁移实现。 |
| `docs/reconstruction/relay-http-terminal-current-source-map.md` | relay HTTP-terminal 前后端触发链 | `scripts/validate-frontend-relay-http-terminal-ccf.mjs` 直接验证本文、三个 relay HTTP-terminal 命令、前端 UI 触发链、mock terminal、relay test retry 错误语义和未声明真实 HTTP 边界。 |
| `docs/reconstruction/runtime-extensions-current-source-evidence-map.md` | runtime-extensions 后端 owner | `scripts/validate-backend-runtime-extensions-owner.mjs` 直接验证本文、四个 plugins IPC、证据路径、源码 owner、`RepositoryRead` / `RepositoryWrite` backend status 边界和未声明边界。 |
| `docs/reconstruction/custom-instructions-current-source-evidence-map.md` | Custom Instructions 后端 owner 与前端 E2E mock 合同 | `scripts/validate-backend-custom-instructions-owner.mjs` 直接验证本文、README/source-map 注册、关键 Rust owner 文件、custom-instructions raw/internal 证据和未声明边界；`scripts/validate-e2e-mocks.mjs` 验证五个 IPC 的专用 mock handler、service wrapper 和 mutation hook 合同。 |
| `docs/reconstruction/diagnostics-current-source-evidence-map.md` | diagnostics 后端只读快照 | `scripts/validate-backend-diagnostics-owner.mjs` 直接验证本文、diagnostics repository 只读快照、`catalog_integrity` 只读探针、TOML 语法/profile 冲突合同、maintenance 转发、DTO owner、TypeScript 类型、E2E mock、restored/RepositoryRead 状态和 pending 深诊断边界。 |
| `docs/reconstruction/sessions-analytics-current-source-evidence-map.md` | sessions/analytics 后端文件事实 | `scripts/validate-backend-sessions-owner.mjs` 与 `scripts/validate-backend-analytics-owner.mjs` 直接验证本文、公开文件事实、`RepositoryRead` / `RepositoryWrite` backend status、只读解析、强类型待处理 payload 和 pending 边界。 |
| `docs/reconstruction/system-hotspot-current-source-map.md` | system hotspot 前端链路与后端骨架 | `scripts/validate-frontend-system-hotspot-current-source.mjs` 与 `scripts/validate-backend-hotspot-owner.mjs` 直接验证本文、前端 settings/system 链路、hotspot command/usecase/core/repository/platform owner 和未恢复边界。 |
| `docs/reconstruction/system-usage-current-source-map.md` | `system-usage` 前端当前源码链路 | `scripts/validate-frontend-system-usage-current-source.mjs` 与 `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证本文、三条 usage 命令、settings query/mutation/cache、overview usage refresh/cache、analytics service 和未恢复 watcher/daemon/runtime 副作用边界。 |
| `docs/reconstruction/system-window-maintenance-current-source-map.md` | system-window-maintenance 前端当前源码链路 | `scripts/validate-frontend-system-window-maintenance-current-source.mjs` 与 `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证本文、六条 non-gating closed command、`load_snapshot` 未关闭边界、route/service/query/mutation/cache/mock/IPC contract 和未恢复后端真实副作用边界。 |
| `docs/reconstruction/system-runtime-watchers-current-source-map.md` | system runtime watcher 后端骨架 | `scripts/validate-backend-daemon-owner.mjs` 直接验证本文、daemon usecase、runtime core guard/debounce/sequence、repository runtime snapshot、platform capability、未恢复真实 watcher/thread/condvar/runtime event 边界和 source-map 注册。 |
| `docs/reconstruction/daemon-autoswitch-current-source-map.md` | daemon-autoswitch 待确认自动切换前端当前源码链路 | `scripts/validate-frontend-daemon-autoswitch-current-source.mjs` 直接验证本文、四条待确认自动切换命令、system service、daemon-autoswitch service facade、query/mutation/cache/runtime subscription、prompt host、mock handlers、IPC contracts 和未恢复后端待确认队列、真实账号切换、真实重启、真实 watcher 边界。 |
| `docs/reconstruction/tray-current-source-evidence-map.md` | tray current-source 前后端骨架 | `scripts/validate-backend-tray-owner.mjs` 与 `scripts/validate-frontend-tray-current-source.mjs` 直接验证本文、Windows accepted target、current-source extra 和 hidden shell 边界。 |
| `docs/reconstruction/voice-current-source-evidence-map.md` | voice 后端空骨架边界 | `scripts/validate-backend-voice-owner.mjs` 直接验证本文、四个 voice Rust 空骨架、Tauri 注册表未接命令、未出现 IPC envelope、Repository 参数、runtime 事件或平台接线；不作为录音、语音识别、权限、后台任务、前端入口或闭源业务恢复声明。 |
| `docs/reconstruction/ui-theme-current-source-map.md` | UI theme 前端调用链 | `scripts/validate-frontend-ui-theme-current-source.mjs` 与 `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证本文和 theme current-source partial closeout。 |
