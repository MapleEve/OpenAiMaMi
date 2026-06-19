# OpenAiMami 重建说明

本目录说明如何基于公开、匿名化、可审计的材料重建 OpenAiMami 1.0.9。重建主线必须同时使用 `evidence/full-chain/raw` 和 `evidence/full-chain/internal`，不能写成只依赖 `OpenAiMami IDB`。

## 范围

| 项目 | 说明 |
| --- | --- |
| 项目名称 | OpenAiMami |
| 许可 | Apache License |
| 应用形态 | Tauri 2、React、Rust 桌面应用 |
| 前端入口 | `src/App.tsx`、`src/main.tsx`、`src/main-app.tsx` |
| 后端入口 | `src-tauri/src/main.rs`、`src-tauri/src/lib.rs` |
| 构建配置 | `package.json`、`vite.config.ts`、`src-tauri/tauri.conf.json`、`src-tauri/Cargo.toml` |

## 公开输入

只使用仓库相对路径：

- `docs/reconstruction/`
- `evidence/full-chain/raw/`
- `evidence/full-chain/internal/`
- `evidence/binary-manifests/`
- `src/`
- `src-tauri/`
- `scripts/`
- `assets/`

LFS/IDB 资料独立称为 `OpenAiMami IDB`。主仓库保存匿名化 raw/internal、前端 dumped 文件、架构骨架和文档；大体积 IDB 文件不放入主源码仓库，状态、大小和哈希由 `evidence/binary-manifests/1.0.9/i64-databases.json` 记录。

## 重建主线

1. 从 `evidence/full-chain/raw/INDEX.md`、命令索引和校验摘要开始，按索引定位前端 dumped 校验文件，再校验 dumped 文件和 manifest hash。
2. 读取 `evidence/full-chain/raw` 中的 macOS/Windows 前端 dumped 文件、IPC、CCF、manifest、命令索引和校验摘要。
3. 读取 `evidence/full-chain/internal` 中的审计地图、前端地图、蒸馏逻辑、原始叶子和版本差异材料。
4. 用 raw 链条确认来源，用 internal 链条解释结构、页面、边界和行为摘要。
5. 前端按 route registry、entry/root、runtime initializer 和深模块边界逐步还原。
6. 后端按六边形架构骨架渐进补齐，不把未证实业务写成实现。

## 落地边界

前端必须先按 entry/root、全局 Provider、route registry、runtime initializer、route/module shell、复杂模块、TanStack cache、mutation/cache helper、locale 和 E2E mock 的 owner 边界重构现有代码，再按 raw/internal 全链条材料逐步还原 1.0.9 前端文件。

后端必须按 commands、application/usecase/service、core、platform、repository/adapter、contracts 的六边形边界重构现有代码。后端不做闭源业务全量还原是项目范围选择；后端骨架仍必须真实表达接口、DTO、错误语义、适配器边界、仓储边界和可替换 fake/temp 测试边界。

## 文档索引

- `consumer-facing-chain.md`：面向使用者的全链条消费方式。
- `frontend-backend-skeleton.md`：前端模块化重建和后端六边形骨架规则。
- `full-chain-map.md`：raw/internal 证据入口和覆盖范围。
- `import-manifest.md`：导入材料清单。
- `source-map.md`：公开源码结构和接口地图。
- `version-diff-map.md`：版本差异证据入口。
- `i64-status.md`：`OpenAiMami IDB` 状态。
- `large-file-policy.md`：大文件与外部资产策略。
- `publication-rules.md`：匿名化和发布规则。

### current-source / evidence map 索引

这些文件只记录当前公开源码与 raw/internal 证据之间的可审计映射、owner 边界和未声明边界；它们不是 raw/internal gate 闭合声明，也不表示双平台全 leaf 已完成。

| 类别 | 文件 | 收口边界 |
| --- | --- | --- |
| 前端 current-source closeout 台账 | `docs/reconstruction/frontend-current-source-closeouts.json` | 前端 ledger-only 与 map-backed closeout 的聚合台账；由 `scripts/validate-frontend-current-source-closeouts.mjs` 校验条目边界、未恢复范围和非完成声明，由 `scripts/validate-public-boundary.mjs` 校验聚合索引。 |
| accounts monitor 仓储预检 | `docs/reconstruction/accounts-monitor-current-source-map.md` | `begin_add_account_attach_monitor` 的仓储 registry 预检、`RepositoryRead` 状态和未恢复后台 monitor、线程、runtime event、平台副作用边界；由 `scripts/validate-backend-accounts-owner.mjs` 直接验证。 |
| mcp/skills 前端 index query owner | `docs/reconstruction/mcp-skills-current-source-map.md` | `mcp-servers` 与 `installed-skills` 的 service、query、cache、overview consumer、mock 和后端入口 current-source owner-closed 链路；由 `scripts/validate-frontend-mcp-skills-current-source.mjs` 直接验证，不提升为双平台全 leaf 或闭源业务恢复声明。 |
| 通知客户端状态 settings 持久化收口 | `docs/reconstruction/notification-client-state-current-source-map.md` | `get_notification_client_state` 的 `deviceId` / `notificationsSince` settings 持久化读取创建事务、DTO 字段和未恢复通知运行时边界；由 `scripts/validate-backend-system-owner.mjs` 直接验证。 |
| accounts/sessions 前端当前源码链路 | `docs/reconstruction/accounts-sessions-frontend-current-source-map.md` | accounts 与 sessions 的 route、service、query、mutation、cache、dialog、panel、mock、IPC contract、closeout 台账、README 归纳和未声明边界；由 `scripts/validate-frontend-accounts-sessions-current-source.mjs` 直接验证，不作为双平台全 leaf、全文案验收、闭源业务恢复、ChatGPT session account 真实导入或 `voice` 接入声明。 |
| custom-instructions 前端当前源码链路 | `docs/reconstruction/custom-instructions-frontend-current-source-map.md` | route、service、query、mutation、cache、dialog、panel、mock、IPC contract、closeout 台账、README 归纳和未声明边界；由 `scripts/validate-frontend-custom-instructions-current-source.mjs` 直接验证，不作为双平台全 leaf、全文案验收、闭源业务恢复或 `voice` 接入声明。 |
| skills 后端文件事务 owner | `docs/reconstruction/skills-current-source-evidence-map.md` | 双平台 skills gate-report、raw skills 证据目录、command/usecase/repository/path_guard owner、source-map/README 索引和未声明动态执行、市场安装、网络下载、外部进程、daemon watcher、平台副作用或 `voice` 接入边界；由 `scripts/validate-backend-skills-owner.mjs` 直接验证。 |
| 前端 current-source partial closeout | `docs/reconstruction/plugins-current-source-evidence-map.md` | plugins 路由、API、command 与 mock 链路映射，由 plugins current-source validator 校验。 |
| 前后端 relay owner 骨架 | `docs/reconstruction/relay-core-current-source-evidence-map.md` | relay-core 公开源码 owner、本地配置 repository 恢复、relay test retry 错误语义与 pending 边界映射；由 `scripts/validate-backend-relay-owner.mjs` 直接验证，不作为 raw/internal strict gate 关闭依据。 |
| relay HTTP-terminal 当前源码链路 | `docs/reconstruction/relay-http-terminal-current-source-map.md` | `test_relay_provider`、`test_relay_draft`、`fetch_relay_models_draft` 的前端触发链、mock terminal、relay test retry 错误语义和未声明真实 HTTP 边界；由 `scripts/validate-frontend-relay-http-terminal-ccf.mjs` 直接验证。 |
| 后端 runtime-extensions owner | `docs/reconstruction/runtime-extensions-current-source-evidence-map.md` | runtime-extensions 四个 plugins IPC 的 command/usecase/contracts/repository 闭环。 |
| Custom Instructions 后端 owner 与前端 E2E mock 合同 | `docs/reconstruction/custom-instructions-current-source-evidence-map.md` | Custom Instructions 五个 IPC 的 command/usecase/repository/core parser/core model/contracts 闭环由 custom-instructions owner validator 校验；五个 IPC 的专用 E2E mock handler、service wrapper 和 mutation hook 合同由 `scripts/validate-e2e-mocks.mjs` 校验。 |
| diagnostics 后端只读快照 | `docs/reconstruction/diagnostics-current-source-evidence-map.md` | `diagnose` 只读 repository snapshot、平台 os/arch、DTO owner、restored/RepositoryRead 状态和 pending 深诊断边界。 |
| 后端 MCP owner | `docs/reconstruction/mcp-current-source-evidence-map.md` | MCP 四个 IPC 的 command/usecase/contracts/repository/core parser/core model 闭环。 |
| 后端 sessions/analytics 文件事实 | `docs/reconstruction/sessions-analytics-current-source-evidence-map.md` | sessions、usage analytics、tool/change/quota 公开文件事实与 pending 边界。 |
| system hotspot 前端链路与后端骨架 | `docs/reconstruction/system-hotspot-current-source-map.md` | hotspot frontend chain、Rust hotspot owner 骨架和 strict gate 未恢复边界。 |
| `system-usage` 前端当前源码链路 | `docs/reconstruction/system-usage-current-source-map.md` | 三条 usage 命令的服务门面、settings query/mutation/cache、overview usage refresh/cache、analytics service 和未恢复 watcher/daemon/runtime 副作用边界；由 `scripts/validate-frontend-system-usage-current-source.mjs` 直接验证。 |
| 后端 system runtime watcher 骨架 | `docs/reconstruction/system-runtime-watchers-current-source-map.md` | watcher/schedule 信号的 current-source skeleton、daemon/runtime owner 和未恢复 runtime 行为；由 `scripts/validate-backend-daemon-owner.mjs` 直接验证。 |
| daemon-autoswitch 待确认自动切换前端当前源码链路 | `docs/reconstruction/daemon-autoswitch-current-source-map.md` | 四条待确认自动切换命令的 system service、daemon-autoswitch service facade、query/mutation/cache/runtime subscription、prompt host、mock handlers、IPC contracts 和未恢复后端待确认队列、真实账号切换、真实重启、真实 watcher 边界；由 `scripts/validate-frontend-daemon-autoswitch-current-source.mjs` 直接验证。 |
| 托盘 current-source 骨架 | `docs/reconstruction/tray-current-source-evidence-map.md` | Windows accepted tray target、current-source extra 和前后端 tray owner。 |
| UI theme 前端调用链 | `docs/reconstruction/ui-theme-current-source-map.md` | UI theme 设置面板、Provider、service 和 Tauri theme API 调用链。 |
