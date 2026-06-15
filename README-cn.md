# OpenAiMami

OpenAiMami 是一个面向个人本地工作流的桌面应用。本仓库公开项目的可审计材料，是为了支持个人持续迭代，也让使用者能够检查实现链路，判断它如何处理本地数据，从而降低隐私泄露和不透明执行的风险。

项目使用 [Apache License](LICENSE) 许可。任何改进、补全、审查和重建工作都应保留该许可上下文。

## 为什么公开

过去一部分 OpenAiMami 资料没有放在公开源码树中，外部使用者只能看到有限实现，难以确认界面、命令、数据读取、缓存和本地集成之间的完整关系。

现在公开这些材料的目的不是发布一次性快照，而是把闭源部分转为可检查、可复核、可继续演进的公开链条：

- 方便个人继续迭代 OpenAiMami。
- 让使用者在运行前能检查实现链路和重建依据。
- 用公开的 raw、internal、前端 dumped 文件和架构骨架减少对不透明本地包的依赖。
- 让隐私相关行为可以被审查，避免把用户数据、机器状态或内部路径写入公开材料。
- 接受基于仓库内 raw/internal 主链路，并在需要时核对 `OpenAiMami IDB` 的 PR。

## 仓库内容

本仓库保存可公开、匿名化、可审计的重建材料：

| 路径或材料 | 说明 |
| --- | --- |
| `README.md`、`README-cn.md` | 中文公开说明和 AI 重建提示模板。 |
| `docs/reconstruction/` | 重建规则、证据入口、发布规则、架构说明和大文件策略。 |
| `evidence/full-chain/raw/` | 匿名化 raw 链条，包含前端 dumped 文件、IPC、CCF、manifest、校验摘要和命令索引。 |
| `evidence/full-chain/internal/` | 匿名化 internal 链条，包含 audit map、frontend map、distilled logic、raw leaf 和索引。 |
| `evidence/binary-manifests/` | 外部大文件的大小、状态和哈希清单。 |
| `src/` | 当前公开前端源码和主流前端模块化重构入口。 |
| `src-tauri/` | 当前公开 Tauri 与 Rust 后端六边形骨架，以及已补回的原始公开后端能力。 |
| `LICENSE` | Apache License 许可文本。 |

LFS/IDB 资料独立称为 `OpenAiMami IDB`。主仓库不直接保存大体积 IDB 文件，只保存匿名化 raw/internal、前端 dumped 文件、架构骨架、重建文档和独立资产清单。还原应以 `evidence/full-chain/internal` 和 `evidence/full-chain/raw` 为主线，IDB 只作为可选的独立参考资产，不能写成“只靠 IDB”。

## 重建流程

1. 先确认 `evidence/full-chain/raw` 与 `evidence/full-chain/internal` 的索引、manifest、校验摘要和前端 dumped 校验文件一致。
2. 从 raw 链条读取 macOS/Windows 前端 dumped 文件、IPC、CCF、manifest 和命令级证据。
3. 从 internal 链条读取 audit map、frontend map、distilled logic、raw leaf 和版本差异材料。
4. 前端按 route registry、entry/root、runtime initializer，以及深模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、tests 逐步还原。
5. 前端实现应采用主流前端模块化架构重构并还原，不写入任何外部参考仓库名称。
6. 后端明确保持六边形架构骨架，按 commands、application、core、platform、repository、adapters、contracts 边界渐进补齐；原始公开后端已经公开过的能力应补回骨架内。
7. 未公开或未选择还原的后端业务行为只能保留为契约、桩或待实现项，不能写成真实闭源业务实现。
8. 所有新增注释和文档使用中文，所有路径使用仓库相对路径。

## 当前补回状态

### 已做

- 保留 Apache License 许可上下文、中文公开说明、raw/internal 主链路、前端 dumped 证据和匿名化规则。
- 前端按当前公开证据恢复到主流模块化骨架，保留 route registry、entry/root、runtime initializer、深模块 Provider/StoreUpdater/Content、cache、hooks、dialogs、panels、components、types 和测试边界。
- 后端不再只是空六边形目录；已把原始公开后端中可公开的 MCP、Skills、自定义指令、系统设置、系统信息、打开路径、热点开关状态、外部进程强制终止、插件合同空列表和 Tauri command 注册补入当前六边形骨架。
- 已按 raw/internal 证据补回 `remoteDeviceSecret` 的后端 settings 持久化、首次生成、旧值导入、空值跳过、非空不覆盖和前端 E2E mock 状态合同；该能力仍只声明为本地 settings 链路恢复，不声明双平台 100% leaf 完成。
- 已按 macOS / Windows bootstrap 证据补回 `load_bootstrap_state` 的 `bootstrap-cache.json` 读取合同，扩展 `writtenAt`、`snapshotProgressive`、`usageAnalytics`、`mcpServers`、`installedSkills` 五个缓存字段，并保留现有自动切换兼容字段。
- 已补回启动链路的前后端 seed：前端 `RuntimeInitializer` 会在启动时读取 `load_bootstrap_state` 与 `load_snapshot(localOnly:true)`，写入 runtime bootstrap event、daemon-autoswitch bootstrap cache 和 overview snapshot cache；后端 Tauri setup 会通过 adapter 生命周期触发现有 usage watcher 与 auto-switch pending watcher once guard，不直接创建闭源后台线程。
- 已补回 `snapshotProgressive` 的生产侧写回：`load_snapshot` 与 `refresh_usage_snapshot` 成功组装公开 `CoreSnapshotPayload` 后写入 `bootstrap-cache.json`，并保留 `usageAnalytics`、`mcpServers`、`installedSkills` 等已有缓存切片。
- 已按 bootstrap 写回证据补回 `load_mcp_servers` 与 `load_installed_skills` 的 `bootstrap-cache.json` 生产侧更新：主读取成功后分别写入 `mcpServers` 与 `installedSkills` 缓存切片，写回失败不影响主 IPC 响应。
- 已同步收紧 E2E mock 的 bootstrap 合同：`load_bootstrap_state` 不再固定返回空 `mcpServers` / `installedSkills`，而是读取共享 mock cache；`load_mcp_servers` 与 `load_installed_skills` 会在 mock 中写回对应缓存切片，并由 `validate:e2e-mocks` 禁止退回固定空 slice。
- 已继续补回 `load_usage_analytics` 到 `bootstrap-cache.json` 的 `usageAnalytics` 缓存切片生产写回与 E2E mock 共享 cache 验证；当前仍不声明闭源统计规则已恢复，只声明现有公开用量 payload 会进入 bootstrap cache。
- 已把 overview 已查询的 `get_mystery_unlock_grants` payload 接入 `mystery-grants` 数据面板，并通过页面 owner 验证防止再次丢弃该查询结果；mystery grants 当前恢复的是 get/merge grants、allowlist 链路和 route registry meta/preload 显隐 helper，不声明 shell 运行时接入、route guard、dim6 或 mystery gate 已闭合。
- 已把 mystery grants 的私有 allowlist 与 raw 前端 helper 词表对齐到 `overview/accounts/sessions/mcp/skills/plugins/relayModel/maintenance/settings`，并同步 Rust usecase、E2E mock、mock validator 与前端 route helper；该进度只收紧 grants 过滤合同，不新增公开 IPC、不宣称 redirect 或 route guard 完成。
- 已按 raw/internal 证据补回 Relay model fetch 的公开读取合同：前端 wrapper、E2E mock 与后端 command、usecase、core、platform、contracts 对齐模型列表 DTO、空状态和失败语义；该进度只声明模型列表获取链路恢复，不声明 Relay 启停、会话或真实转发闭环已完成。
- 已按 macOS / Windows relay 测试证据补回 `test_relay_provider` 与 `test_relay_draft` 的 mock terminal 后端闭环：core 负责 endpoint、header、body 构建和响应解析，platform 只返回可测试 mock 响应，provider 路径会把健康结果写回 repository，draft 路径不落盘；该进度不声明真实 HTTP、真实代理、真实 keychain 或会话转发已恢复。
- 已按 macOS daemon/system 证据补回 runtime watcher 的进程内状态合同：`note_usage_refresh_activity`、`schedule_full_runtime_refresh`、`start_auto_switch_pending_watcher`、`start_usage_refresh_watcher` 和 `update_usage_refresh_schedule` 现在记录 activity、8 秒 debounce、once guard、interval 和 notify 序列，并同步 E2E mock；该进度不声明真实后台线程、事件广播、网络刷新或账号自动切换已恢复。
- 已补回脱敏 runtime bridge event 链路：后端 watcher status 会携带 `runtimeEvent`，Tauri adapter 只广播 `aimami-runtime-event` 的 module/mode/sequence/statusCode，前端只通过 `src/lib/api.ts` 订阅并由 `RuntimeInitializer` 写入 TanStack cache；该进度不恢复真实后台线程、网络刷新或账号自动切换动作。
- 已收紧 E2E mock 的状态竞态合同：mock helper 会为 delayed、stale、concurrency、event replay、cancel 和 abort 场景写入稳定 warning code，`validate:e2e-mocks` 会防止 handler 绕过该 helper，也防止 voice mock 进入 fixture 入口。
- 已按“voice 不给入口、不调用”移除 voice route registry、App Route union、runtime reload map 和 `src/routes/desktop/main/voice` route shell；voice 仅在 `src/features/voice`、`src/services/voice` 和后端 voice 边界中保留空骨架、合同清单和中文说明。
- 新增 `scripts/validate-frontend-voice-boundary.mjs` 与 `validate:frontend-voice-boundary`，用于防止 voice 重新进入 route registry、navigation type、runtime initializer、`src/lib/api.ts` 或 E2E mock handler；该门禁允许 `src/features/voice` 和 `src/services/voice` 继续作为公开空骨架存在。
- 已把后端公开能力拆到 `commands`、`application/usecase`、`repository`、`repository/adapter`、`platform`、`contracts` 和 `core/error` 边界：command 只接参数和状态，usecase 负责编排，repository/adapter 负责文件读写，platform 负责系统能力，contracts 负责前后端可序列化数据形状。
- 已把账号切换、账号删除、登出、导出、导入预览和导入事务从 `repository/accounts.rs` 上移到 `application/usecase/accounts.rs`：usecase 负责读取 registry、选择账号、校验目标账号、校验 snapshot、备份 auth、复制 snapshot、删除 snapshot、删除 auth、标记或清空 active、生成导出文件模型、计算导入冲突、写入导入 snapshot、保存 registry 和组装 `SwitchPayload` / `RemovePayload` / `LogoutPayload` / `AccountExportPayload` / `AccountImportPreviewPayload` / `AccountImportPayload`；repository 只暴露 registry 读写、导入文件读取、JSON 写入、snapshot 路径、auth 备份、auth 删除和 snapshot 删除等窄文件边界，账号 registry 与导入导出文件模型已移动到 `core/model/accounts.rs`。
- 已补回 `sessions.load_sessions` 的公开只读文件清单切片：usecase 只编排 repository helper 和 DTO 映射，repository 只读取 `sessions_dir` 的一层文件元数据，目录不存在返回空列表，不解析闭源会话内容、不删除、不写入；`file_size` 和 `created_at` 已由 FS adapter 读取真实文件元数据，读取失败才保守回落为空值。
- 已把前端 `src/lib/time.ts`、`src/utils/router.tsx` 和 `src/lib/templates.ts` 的已知用户可见硬编码文案收敛到 locale owner：相对时间、倒计时、时长、重置文案、路由加载失败文案和内置自定义指令模板 title/summary/tags/body 都从 `src/locales/zh.json` 与 `src/locales/en.json` 读取。
- 已把 E2E mock 中会展示给用户的 plugins / relay payload 文案收敛到 locale owner：插件 mock 标题、relay audit message、relay test 缺目标错误、relay 诊断项和 relay 修复结果都从 `src/locales/zh.json` 与 `src/locales/en.json` 读取，内部竞态诊断消息仍保持为测试合同，不当作 UI 文案还原进度。
- `scripts/validate-backend-accounts-owner.mjs` 与 `validate:backend-accounts-owner` 已扩展为账号事务 owner 门禁，用于防止 `repository/accounts.rs` 重新暴露 `switch_account`、`remove_accounts`、`logout`、`export_accounts_to_file`、`preview_account_import` 和 `import_accounts_from_file` 用户动作事务，并校验这些编排仍在 application/usecase 内通过窄 repository helper 完成。
- 新增 `scripts/validate-backend-accounts-transfer-owner.mjs` 与 `validate:backend-accounts-transfer-owner`，作为账号导入/导出专项门禁，单独防止 export、preview import 和 import 事务回退到 repository。
- 新增 `scripts/validate-backend-sessions-owner.mjs` 与 `validate:backend-sessions-owner`，用于防止 sessions command 或 usecase 重新承担文件系统副作用，并确认 `load_sessions` 只通过 repository 读取 sessions 文件元数据。
- 新增 `scripts/validate-backend-mcp-owner.mjs` 与 `validate:backend-mcp-owner`，用于确认 MCP command 只做 IPC adapter，usecase owning 输入校验、配置归一化和 bootstrap cache 写回，core parser/model owning `config.toml` 的 `mcp_servers` 解析、托管块扫描、渲染和替换，repository 只 owning 路径安全、文本读取和原子写回；当前只声明公开配置持久化边界，不声明 MCP server 启动、网络探测或运行时行为已恢复。
- 新增 `scripts/validate-backend-skills-owner.mjs` 与 `validate:backend-skills-owner`，用于确认 Skills command 保持 IPC adapter，`import_skill`、`restore_backup`、`remove_skill` 与 `delete_skill_backup` 用户动作事务由 application/usecase owning，并通过 repository 的路径解析、备份、删除、复制和计数窄文件操作完成；递归复制和 metadata relativePath 仍经过 repository/path guard 的路径安全边界，当前不执行 skill，也不解释业务 SOP。
- 新增 `scripts/validate-backend-custom-instructions-owner.mjs` 与 `validate:backend-custom-instructions-owner`，用于确认 Custom Instructions command 保持薄 IPC adapter，application/usecase owning `apply`、`clear_block` 和 `rollback` 用户动作事务，core owning 受控块 marker、解析、保护状态、内容组合和 history snapshot model，repository 只保留全局文件与 history JSON 读写。
- 新增 `scripts/validate-backend-analytics-owner.mjs` 与 `validate:backend-analytics-owner`，用于确认 Analytics/Quota 后端只基于公开可重建的 sessions 文件元数据和 bootstrap cache 来源建立骨架：usecase 组装 payload 并写回 `usageAnalytics` cache，repository 通过可替换 FS 读取公开事实，core owning range/aggregate model；当前不声明真实 token、工具、变更或配额统计口径。
- 新增 `scripts/validate-backend-relay-owner.mjs` 与 `validate:backend-relay-owner`，用于确认 Relay command 保持薄 IPC adapter，application/usecase 已拆出 `provider.rs`、`models.rs`、`diagnostics.rs` 和 `payload.rs`，并通过 `RelayPlatformPort` 消费 mock terminal；`core/relay/router_config.rs` owning router config block 解析、清理、渲染和 stale 语义，`core/relay/request_builder.rs` owning provider 请求构建，repository 只保留 config/catalog/audit 文件读写；当前不声明真实 HTTP、SSE、代理会话或转发闭环。
- 新增 `scripts/validate-backend-daemon-owner.mjs` 与 `validate:backend-daemon-owner`，用于确认 Daemon/runtime watcher 用户动作由 `application/usecase/daemon.rs` owning，`system.rs` 只保留兼容转发入口，core/runtime owning once guard、8 秒 debounce 和 notify sequence，repository/runtime 只读取 settings-derived snapshot；当前不声明真实后台线程、事件广播、网络刷新或账号自动切换闭环。
- 新增 `scripts/validate-backend-system-owner.mjs` 与 `validate:backend-system-owner`，用于确认 System command 保持兼容 IPC adapter，`application/usecase/system/diagnostics.rs` owning 只读诊断快照，`snapshot_bootstrap.rs` owning 启动快照与 bootstrap cache 切片，`settings_secret.rs` owning 设备标识和 remote device secret settings 事务，`platform_actions.rs` owning update installability、process、shell、window 和 system info 平台动作；当前不声明诊断修复、更新安装、外部进程重启或 shell 闭环已恢复。
- 新增 `scripts/validate-backend-runtime-extensions-owner.mjs` 与 `validate:backend-runtime-extensions-owner`，用于确认 Runtime extensions 只读写可重建的 `plugins.json` 与内置 registry，不加载或执行插件代码，不接入 voice，并由 usecase 负责 repository record 到 IPC payload 的转换；前端 `plugins` 是唯一可见 UI owner，`runtime-extensions` 只作为 IPC domain/service 能力边界。
- 新增 `scripts/validate-frontend-relay-cache.mjs` 与 `validate:frontend-relay-cache`，并在 `src/features/relay/__tests__/README.md` 记录边界；该验证确认 relay mutation payload 先写 TanStack 权威 cache，再做已知 query 扇出或失效，并模拟 stale、delayed、event replay 的旧响应不能覆盖已接受的 mutation 结果。
- 新增 `scripts/validate-analytics-query-sequence.mjs` 与 `validate:frontend-analytics-sequence`，用于确认 Analytics 六类只读 query 的 query key、sequence 预留和 stale/delayed response 防护由模块 cache helper owning，hook 不再通过 `useRef` owning sequence，也不伪造 mutation payload。
- 前端 Daemon autoswitch runtime event 已收口到模块 cache helper：`auto-switch-pending` 事件只进入集中声明的 cache target mapping，runtime hook 不再直接 `invalidateQueries` 或写组件 state，跨模块刷新改为引用对应模块 cache owner。
- 前端 Tray shell 已补 query/cache/mutation race 边界：notification client query key 由 cache owner 唯一暴露，query 经 cache writer 写入 authoritative cache，focus main window 只建立 command ack fence 和 invalidate，不伪造业务 payload。
- 新增 `scripts/validate-frontend-copy-owners.mjs` 与 `validate:frontend-copy-owners`，覆盖 time/router/templates 和 mock payload 的动态用户可见文案，防止它们绕过 locale owner 回退到硬编码。
- 新增 `scripts/validate-frontend-mystery-gates.mjs` 与 `validate:frontend-mystery-gates`，确认 `relayModel` grant 只映射到前端 `relay` route、meta/preload 统一使用 route registry 显隐 helper，并禁止 voice route 或外部参考项目名回流。
- `scripts/validate-backend-hexagonal.mjs` 已从“全仓禁止真实副作用”改成“按 owner 限制副作用”：文件系统只允许仓储/适配器边界，进程、窗口、shell 只允许平台边界，voice 仍保持空骨架门禁。
- `scripts/validate-frontend-entry-architecture.mjs` 已同步 route grants context 合同：允许 `getRouteMeta`、`getVisibleRouteMeta` 和 `preloadVisibleRoutes` 保持无参兼容的同时接收可选 context，并继续确认 route registry 是 meta/preload owner。
- 新增 `scripts/validate-frontend-leaf-copy-acceptance.mjs`，把前端 leaf 和全文案验收从静态覆盖扫描中分离出来；全文案验收清单 `evidence/full-chain/internal/frontend-copy-acceptance.json` 已按当前 locale 和生成规则重新同步，现为 `status=draft`，记录 `entries=660`、`acceptedZh=622`、`acceptedEn=622`、`missingRawOrInternalCopySource=38`，其中 `common.time.durationHours` 已用 macOS/Windows raw frontend asset 中的 exact literal 关闭；剩余 time duration、relay mock diagnostic/fix/audit/test、router error 和 custom-instruction templates 文案仍需补 raw/internal 文案来源后才能关闭全文案验收。
- `README.md` 与 `README-cn.md` 保持中文同步，记录当前已经做了什么、没有做什么；本轮已把 current-source closeout 信号同步到 runtime-extensions、analytics cache、Relay/System 深模块和 daemon owner，并继续补齐全文案验收清单的 raw literal 证据。

### 未做

- 前端 macOS / Windows 双平台 100% leaf 尚未完成验收；现有 `validate-frontend-dumped`、`validate-frontend-evidence` 和 `validate-i18n` 只能证明静态覆盖、owner 边界和 locale key 同步；全文案清单当前是 draft，剩余 38 个 time duration、relay mock diagnostic/fix/audit/test、router error 和 custom-instruction templates 文案缺 raw/internal 来源，不能证明所有 leaf、渲染、交互和文案语义已逐条还原。
- 严格 full leaf / gate 仍未闭合；internal gate/audit 中 `full_leaf_100`、`gate_accepted`、`readyToImplement`、`dim6` 等字段仍未全绿，不能宣称前端 100%、mystery gate 完成或已经可按完整闭环实现。
- 后端闭源业务不做全量还原；没有公开证据支撑的业务行为仍只能保留为合同、桩、待实现项或测试缺口。
- voice 前后端不做真实功能还原，不注册路由入口、不进入 runtime reload map、不注册 IPC handler，只保留空骨架和说明；原始公开材料中与录音、语音运行时、快捷键、音频反馈、文本注入相关的内容不进入当前公开实现。
- voice 当前仍保留前端类型层命令清单、feature/service 空骨架和窗口 surface 标签，用于说明公开合同边界；这些内容没有 route registry、navigation meta、`src/lib/api.ts` wrapper、runtime reload map 或 E2E mock handler 入口，不作为可触达功能。
- Accounts 已完成 `switch_account` / `switch_account_and_restart_codex`、`remove_accounts`、`logout`、`export_accounts_to_file`、`preview_account_import` 和 `import_accounts_from_file` 的 usecase owner 迁移；账号 attach monitor、外部程序重启、跨进程会话恢复和未公开闭源业务仍不声明真实闭环。
- Accounts、Relay 启停/会话/真实转发、Analytics、Sessions、Daemon 真实后台线程与自动切换、更新安装、外部进程重启、诊断修复等后端能力仍未完成真实业务闭环；Relay 当前只补回 provider/model/diagnostics/payload usecase owner、model fetch 读取合同、test provider/draft mock terminal 测试合同、RelayPlatformPort 边界、provider 请求构建器和 router config 子模块 parser/render，不声明真实 HTTP、SSE、代理会话或转发闭环；Sessions 当前只补回 `load_sessions` 的目录文件元数据清单并包含 `updated_at`、`created_at`、`file_size`；MCP 当前只补回 `config.toml` 的 `mcp_servers` core parser/model 与 repository 文本读写边界；Skills 当前已把 `import_skill`、`restore_backup`、`remove_skill` 和 `delete_skill_backup` 上移到 usecase owner，并保留 repository/path guard 的路径安全文件边界；System 当前只补回 diagnostics、snapshot/bootstrap、settings-secret 和 platform-actions 四个 usecase owner，不声明诊断修复、更新安装、外部进程重启或 shell 闭环；Custom Instructions 当前只补回 `apply`、`clear_block` 和 `rollback` 的 usecase/core/repository owner 边界；Analytics 当前只补公开 sessions 文件事实聚合骨架和 `usageAnalytics` cache 写回，不声明真实 token、工具、变更或配额口径；Runtime extensions 当前只补回 `plugins.json` registry/store 边界且前端 `plugins` 是唯一可见 UI owner；runtime watcher 当前只补回 daemon usecase、core/runtime 状态机、repository/runtime settings-derived snapshot 和前端 cache event mapping，不声明真实后台线程、事件广播、网络刷新或账号自动切换闭环；其他部分前端 wrapper 和后端命令仍只返回明确的未恢复状态。
- `remoteDeviceSecret` 当前已恢复 settings 读写和迁移语义，但尚未因此关闭前端全文案、渲染交互、双平台 leaf 或 internal gate 的剩余验收项。
- `bootstrap-cache.json` 当前已恢复读取、解析失败返回空状态、DTO 字段承接、`usageAnalytics` / `mcpServers` / `installedSkills` 三个缓存切片生产写回，以及 E2E mock 共享 cache 验证；真实用量统计口径仍需按 raw/internal 证据继续补齐。
- 启动链路当前只 seed 已有公开 cache owner、触发进程内 watcher once guard，并广播脱敏 runtime bridge event；尚未恢复真实后台线程、账号 attach monitor 循环、网络刷新或闭源自动切换动作。
- `mystery_route_allowed` 仍是 helper/gate 缺口；当前只恢复 get/merge grants 的公开调用链、cache 合同、overview 面板消费、allowlist 过滤和 route registry meta/preload 显隐 helper，尚未接入 shell 运行时 grants 查询，也不把它描述为已完成 route guard。
- mystery grants allowlist 已按 raw 前端 helper 对齐，但仍只是私有过滤合同；当前 helper 能让 route registry 在传入 grants context 时计算显隐和 preload，尚未把 grants 查询正式接入导航 shell、redirect 或 route guard，也不因此关闭 dim6 或 full leaf gate。
- MCP 写回当前已从结构化 TOML 整文件保存收紧为单服务托管块替换/删除，并尽量保留其它 `config.toml` 注释和表块；该进度仍只声明公开配置持久化边界，不声明 MCP server 启动或网络探测。
- Rust 编译验收需要具备目标平台工具链；Windows 下缺少 MSVC `link.exe` 时，`cargo check` 会在第三方 crate build script 阶段失败。

## 可直接给 AI 的重建提示

```text
请只使用当前公开仓库，按可审计方式重建 OpenAiMami 1.0.9。所有新增注释和文档必须使用中文，不写入内部路径、机器名、用户名、共享盘、内部项目名、凭据或任何未匿名化材料。

第一步先校验证据完整性：
1. 先读取 `evidence/full-chain/raw/INDEX.md`、`evidence/full-chain/raw/command-index.json`、`evidence/full-chain/raw/validation-summary.json`。
2. 通过 raw 索引定位前端 dumped 校验文件，并校验其中列出的前端 dumped 文件。
3. 校验相关 manifest hash，确认 raw 链条和清单一致。
4. 任何 raw 子路径都必须按仓库索引解析，不能写入本机路径、机器名或未匿名来源。

第二步读取 raw 链条：
1. 从 `evidence/full-chain/raw` 读取 macOS/Windows 前端 dumped 文件。
2. 读取 IPC、CCF、manifest、命令索引、校验摘要和前端 dumped 校验材料。
3. 只使用仓库相对路径，不依赖本机状态、隐藏目录、个人数据或未公开文件。

第三步读取 internal 链条：
1. 从 `evidence/full-chain/internal` 读取 audit map。
2. 读取 frontend map。
3. 读取 distilled logic。
4. 读取 raw leaf。
5. 用 internal 链条解释结构、边界、页面和数据流，用 raw 链条校验来源。

第四步还原前端：
1. 按 route registry 还原路由表和页面入口。
2. 按 entry/root 还原应用入口、根组件和全局挂载。
3. 按 runtime initializer 还原运行期初始化顺序。
4. 按深模块边界逐步补齐 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、tests。
5. 前端采用主流前端模块化架构重构并还原，但不得写入外部参考仓库名称。
6. 每个页面、IPC 包装、数据类型、缓存和交互状态都必须能回指到 raw/internal 证据。

第五步还原后端：
1. 后端按 commands、application、core、platform、repository、adapters、contracts 六边形骨架渐进补齐。
2. commands 只作为薄适配层，不承载业务逻辑。
3. application 负责用例编排，core 保留稳定领域类型，platform 和 repository 保留平台与存储边界，adapters 负责外部适配，contracts 负责前后端可序列化契约。
4. 原始公开后端已经公开过的能力应补回骨架内，并保持 command、usecase、repository、platform、contracts 的 owner 边界。
5. 不把未公开或未选择还原的后端业务写成实现；这些行为必须写成契约、桩、待实现项或测试缺口。
6. 不还原闭源后端业务实现是项目范围选择，不要描述成材料缺口。

第六步提交要求：
1. 保留 Apache License 许可上下文。
2. 不写入内部路径、机器名、用户名、共享盘、内部项目名或凭据。
3. 不写入外部参考仓库名称。
4. 新增文档和注释使用中文。
5. 如果基于 raw/internal 主链路还原出完整实现，并按需要核对 `OpenAiMami IDB`，请以 PR 形式提交，并在说明中列出证据路径、校验结果和未覆盖项。
```

## PR 规则

欢迎提交以下类型的 PR：

- 基于 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 补齐完整实现。
- 补齐前端路由、模块、状态、IPC 包装、缓存、对话框、面板、组件、类型和测试。
- 按六边形架构补齐后端端口、用例、适配器和契约。
- 改进隐私审查、匿名化规则、校验脚本或重建文档。
- 修正文档中的证据路径、哈希、manifest 或流程错误。

PR 必须说明：

- 使用了哪些 raw/internal 证据，以及是否核对 `OpenAiMami IDB`。
- 做了哪些校验。
- 哪些行为已还原，哪些仍是桩或待实现项。
- 是否修改了用户数据读写、缓存、导入导出、清理、恢复或本地集成逻辑。

## 匿名化规则

公开文档和提交说明不得包含：

- 内部项目名。
- 本机用户名、机器名、共享盘路径或绝对本地路径。
- 凭据、令牌、会话、密钥、账号私密值或未脱敏日志。
- 个人数据、客户数据、运行期缓存或未审查 dump。
- 外部参考仓库名称。

请只使用仓库相对路径描述证据和实现。发现未脱敏材料时，应先改成占位说明，再提交 PR。
