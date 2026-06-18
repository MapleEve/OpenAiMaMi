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

## 当前状态

本节只按仓库现状归纳，不按提交顺序追加流水账。

### 已经归档

| 范围 | 当前结论 |
| --- | --- |
| 公开材料 | Apache License、中文公开说明、匿名化 raw/internal 主链路、前端 dumped 证据、二进制清单和 `OpenAiMami IDB` 独立资产说明已纳入；主仓库不直接保存大体积 IDB 文件，README 双文件一致性和归纳状态结构已由公开边界校验约束。 |
| 前端架构 | 主入口、路由表、runtime initializer、全局 Provider、深模块 Provider/StoreUpdater/Content、cache、hooks、dialogs、panels、components、types 和 tests 已按 owner 边界重构。 |
| 前端证据 | 前端文案验收文件为 `status=accepted`；660 个 zh/en locale key 均有文案 owner 验收来源；前端清单当前没有非 full leaf 状态。 |
| 前端竞态 | TanStack cache、mutation payload、runtime event reload、stale/delayed response、event replay、cancel、abort 和 E2E mock 竞态场景已纳入验收。 |
| 后端架构 | `commands`、`application/usecase`、`core`、`platform`、`repository`、`repository/adapter`、`contracts`、`adapters` 六边形边界已建立，并由后端 owner 校验约束。 |

### 已恢复能力

| 范围 | 当前结论 |
| --- | --- |
| 原始公开后端 | Accounts、MCP、Skills、Custom Instructions、Runtime extensions、Relay、daemon/runtime watcher 等公开过或可由证据支撑的能力已归入六边形骨架。 |
| 文件事实能力 | Sessions 已补已扫描文件删除，并从 rollout/session JSONL 读取更新时间、项目路径、父会话、agent 字段和 turn 计数；Analytics 已补公开会话文件事实聚合和平均 turn 映射；System 已补配置清理和更新可安装性只读检测。 |
| 入口边界 | Voice 前后端都不作为可用功能入口；只保留空骨架、合同清单和中文边界说明。 |

### 暂不声明完成

| 范围 | 当前结论 |
| --- | --- |
| 前端完成声明 | 不声明 macOS / Windows 双平台 100% leaf 全闭合；internal 历史 gate/audit 仍保留 `full_leaf_100`、`gate_accepted`、`readyToImplement`、`dim6` 等非阻塞完成声明信号。 |
| Mystery grants | `mystery_route_allowed` 已接入导航 shell、visible meta、preload 和 route guard；仍不声明 raw/internal `gate_accepted`、`implementation_use`、`dim6` 或 `full_leaf_100` 恢复。 |
| 后端范围 | 闭源后端业务不做全量还原；没有公开证据支撑的行为只能保留为合同、桩、待实现项、测试缺口或可替换接口。 |
| 后端闭环 | Relay、Daemon、Sessions、Analytics、MCP、System 等后端能力不声明真实网络、后台线程、SQLite threads 表、全局状态、配额统计、server 启动、更新安装执行、诊断修复、外部进程重启或 shell 闭环。 |
| 编译环境 | Rust 编译验收需要目标平台工具链；Windows 缺少 MSVC `link.exe` 时，`cargo check` 会在第三方 crate build script 阶段失败。 |

### 验收入口

| 范围 | 命令 |
| --- | --- |
| 前端证据与文案 | `validate:frontend-dumped`、`validate:frontend-evidence`、`validate:frontend-leaf-copy`、`validate:frontend-copy-owners`、`validate:i18n` |
| 前端架构与竞态 | `validate:frontend-entry`、`validate:frontend-layer-owners`、`validate:frontend-voice-boundary`、`validate:frontend-relay-cache`、`validate:frontend-analytics-sequence`、`validate:frontend-mystery-gates`、`validate:e2e-mocks` |
| 后端边界 | `validate:backend-hexagonal`、`validate:backend-system-owner`、`validate:backend-accounts-owner`、`validate:backend-mcp-owner`、`validate:backend-skills-owner`、`validate:backend-custom-instructions-owner`、`validate:backend-analytics-owner`、`validate:backend-relay-owner`、`validate:backend-daemon-owner`、`validate:backend-runtime-extensions-owner`、`validate:backend-sessions-owner` |

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
