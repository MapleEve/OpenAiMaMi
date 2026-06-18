# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用。本仓库公开的是匿名化后的 `raw/internal` 证据链、重建文档、当前前端恢复代码，以及后端六边形骨架；它用于说明哪些能力已经进入公开源码，哪些仍只是边界、合同、占位或待补证据位置。

项目使用 [Apache License](LICENSE) 许可。公开仓库的目标不是发布一次性快照，也不是复刻未公开材料，而是在可审计、可匿名化、可持续还原的范围内，让实现链路、数据读写边界和本地集成方式能够被检查。

## 为什么公开

公开 OpenAiMami 的原因有三点：

1. 支持个人持续迭代，让公开源码、证据材料和验证脚本保持可追踪状态。
2. 使用 Apache License 明确后续使用、审查和二次开发的许可边界。
3. 让使用者可以检查公开实现是否来自仓库内 `raw/internal` 证据链，降低隐私泄露、越界还原和无证据实现的风险。

公开内容只覆盖已经匿名化且适合进入仓库的材料。未审查 dump、个人路径、机器名、账号私密值、凭据、令牌、会话、密钥和外部参考仓库名都不属于公开范围。

## 仓库内容

| 路径或材料 | 说明 |
| --- | --- |
| `docs/reconstruction/` | 重建规则、证据入口、发布规则、架构说明和大文件策略。 |
| `evidence/full-chain/raw/` | 匿名化 `raw` 链条，包含 dumped 文件、IPC、CCF、manifest、校验摘要和命令索引。 |
| `evidence/full-chain/internal/` | 匿名化 `internal` 链条，包含 audit map、frontend map、distilled logic、raw leaf 和索引。 |
| `evidence/binary-manifests/` | 外部大文件的大小、状态和哈希清单。 |
| `src/` | 当前公开前端源码，以及按 owner 边界整理后的主流模块化前端骨架。 |
| `src-tauri/` | 当前公开 Tauri / Rust 后端六边形骨架，以及已补回的公开或证据支撑能力。 |
| `LICENSE` | Apache License 许可文本。 |

`OpenAiMami IDB` 是独立参考资产，不混入主仓库。还原主线以 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 为准；IDB 只能作为可选辅助核对材料，不能替代公开证据链。

## 重建流程

1. 先校验 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 的索引、manifest、校验摘要、前端 dumped 材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf。
2. 再确认每个新增实现都能回指公开证据，不能用未公开材料、未匿名化内容或外部参考仓库替代仓库内证据链。
3. 前端按全量还原目标推进，使用主流模块化结构承载 `entry/root`、全局 Provider、route registry、runtime initializer、模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、测试和文档。
4. 后端按六边形架构补齐已经开源过或可由公开证据支撑的能力；无证据或不选择还原的闭源行为只写合同、骨架、待实现项、测试缺口或可替换接口。
5. `voice` 只保留空骨架和边界说明，不作为入口，不调用后端，不参与启动流程，也不能阻塞其它验收。

## 当前状态

| 领域 | 已做 | 没做或边界 | 怎么验收 |
| --- | --- | --- | --- |
| 公开材料 | Apache License、中文说明、匿名化 `raw/internal` 主链路、前端 dumped 证据、二进制清单和重建文档已经进入仓库。 | 不公开机器名、用户路径、会话、令牌、账号私密值、未审查 dump 或未匿名化内容。 | 运行 `npm run validate:public-boundary`。 |
| 前端 | 主流模块化 owner 边界已经落位：入口只装配全局能力，路由、运行时、服务门面、缓存、深模块、i18n 和 E2E mock 各自有稳定归属。 | 不声明前端已经 100% 双平台全 leaf 完成；完整度继续由 `raw/internal`、leaf 队列、current-source closeout 和验证脚本确认。 | 运行 `npm run validate:frontend` 和必要的 `validate:frontend-*` 单项验证；生产构建用 `npm run build`。 |
| 后端 | 六边形分层已经落位：Tauri command、usecase、core、repository、platform、adapter 和 contract 有明确 owner；原始公开能力和公开证据支撑的事实聚合已归入对应层。 | 不做闭源后端业务全量真实还原；未公开、未选择还原或无公开证据支撑的行为只保留为合同、骨架、待实现项、测试缺口或待补证据位置。 | 运行 `npm run validate:backend` 和必要的 `validate:backend-*` owner 验证。 |
| voice | 只保留空骨架、合同清单和中文边界说明。 | 不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。 | 确认路由、启动链路、IPC mock 和后端命令没有接入 voice。 |
| 验收 | 已提供公开边界、README 同步、前端、后端、i18n、E2E mock 和 owner 边界的聚合验证入口。 | 构建、编译和平台运行验收仍依赖本机 Rust、前端和目标平台工具链；Windows MSVC target 需要 C++ Build Tools 提供 `link.exe`。 | 一次性检查运行 `npm run validate:all`；平台工具链问题只记录为环境限制。 |
| 运行闭环 | README 只记录长期有效的源码状态、范围边界和验收入口。 | 不按提交、日期、局部补丁或临时进度追加内容；不声明真实网络、后台线程、全局状态、真实 token 统计口径、更新安装、诊断修复、外部进程重启或 shell 闭环已经完成。 | 只能在对应源码、证据和验证脚本补齐后更新本表。 |

文档口径固定为“已做 / 没做或边界 / 怎么验收”。每次提交都必须同步 README，但只能更新归纳状态，不再追加流水账。

## 验收入口

按范围运行验证：

- 顶层聚合验证：`npm run validate:all`
- 公开边界与 README 同步：`npm run validate:public-boundary`
- 前端聚合验证：`npm run validate:frontend`
- 前端单项验证：可按范围运行 `package.json` 中的 `validate:frontend-*`、`validate:i18n` 和 `validate:e2e-mocks` 验证入口。
- 前端生产构建：`npm run build`
- 后端聚合验证：`npm run validate:backend`
- 后端单项验证：可按范围运行 `package.json` 中的 `validate:backend-*` owner 验证入口。

单个 PR 只需要运行与修改范围相关的验证；涉及公开边界、README、匿名化或证据路径时，必须运行 `npm run validate:public-boundary`。需要一次性验收公开边界、前端聚合和后端聚合时，运行 `npm run validate:all`。

## 可直接给 AI 的重建提示

```text
请只使用当前公开仓库，按可审计方式继续还原 OpenAiMami。所有新增文档、注释和说明必须使用中文；不得写入机器名、用户名、共享盘、绝对本地路径、内部项目名、凭据、令牌、会话、密钥或外部参考仓库名。

先校验 evidence/full-chain/raw 和 evidence/full-chain/internal：读取索引、manifest、校验摘要、前端 dumped 校验材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf，并确认后续实现都能回指公开证据。

前端以全量还原为目标，按 raw/internal 证据补齐路由、入口、运行时初始化、模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、测试和文档；状态、缓存、事件刷新、旧响应、取消、失败态和事件重放都必须经过验证。不要声明前端已经 100% 双平台全 leaf 完成，除非公开证据、leaf 队列、closeout 和验证脚本都能支撑。

后端按 commands、application/usecase、core、platform、repository、adapters、contracts 六边形边界补齐已经开源过或可由公开证据支撑的能力；不还原闭源后端业务全量实现。未公开或无证据支撑的行为只能写成合同、骨架、待实现项、测试缺口或可替换接口。

voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。

提交 PR 时必须说明使用了哪些 raw/internal 证据、做了哪些校验、哪些行为已经还原、哪些仍未覆盖或仍是骨架；如果核对了 OpenAiMami IDB，也必须说明核对范围和未覆盖项。
```

## PR 规则

欢迎提交完整还原代码或证据修正 PR。PR 必须回答“做了什么、没做什么、依据是什么”：

- 基于 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 补齐前端路由、模块、状态、IPC 包装、缓存、对话框、面板、组件、类型和测试。
- 按六边形架构补齐后端端口、用例、适配器、存储边界和可序列化合同。
- 只补入已经开源过或可由公开证据支撑的后端功能；不能把未公开或无证据支撑的闭源行为写成真实实现。
- 改进隐私审查、匿名化规则、校验脚本、重建文档、证据路径、哈希或 manifest 说明。
- 如果使用 `OpenAiMami IDB` 辅助核对，需要在 PR 中说明核对范围、证据路径、校验结果和未覆盖项。
- README 每次提交只更新归纳状态，不按提交记录、日期或零散细项追加流水账。

## 匿名化规则

公开文档、提交说明和 PR 说明中不得包含：

- 内部项目名。
- 本机用户名、机器名、共享盘路径或绝对本地路径。
- 凭据、令牌、会话、密钥、账号私密值或未脱敏日志。
- 个人数据、客户数据、运行时缓存或未审查 dump。
- 外部参考仓库名。

请只使用仓库相对路径描述证据和实现。发现未脱敏材料时，应先改成占位说明，再提交 PR。
