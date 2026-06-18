# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用。本仓库公开匿名化后的 `raw/internal` 证据链、重建文档、当前前端恢复代码和后端六边形骨架，用来让实现来源、数据边界和本地集成方式可审计、可继续还原。

项目使用 [Apache License](LICENSE) 许可。公开目标是支持个人持续迭代、让后续审查和二次开发有明确许可边界，并让使用者能检查公开实现是否来自仓库内证据链，从而降低隐私泄露、越界还原和无证据实现的风险。

## 为什么公开

1. 个人迭代：把证据、代码、文档和验证脚本放在同一条可追踪链路里。
2. Apache License：明确使用、审查、再分发和二次开发的许可边界。
3. 用得更放心：公开内容必须经过匿名化和验证，不能混入机器名、用户路径、凭据、令牌、会话、密钥或未审查 dump。

## 仓库内容

| 路径或材料 | 说明 |
| --- | --- |
| `docs/reconstruction/` | 重建规则、原文决策、证据入口、发布规则、架构说明、current-source/evidence map 和大文件策略。 |
| `evidence/full-chain/raw/` | 匿名化 raw 链条，包含 dumped 文件、IPC、CCF、manifest、校验摘要和命令索引。 |
| `evidence/full-chain/internal/` | 匿名化 internal 链条，包含 audit map、frontend map、distilled logic、raw leaf 和索引。 |
| `evidence/binary-manifests/` | 外部大文件的大小、状态和哈希清单。 |
| `src/` | 当前公开前端源码和按 owner 边界整理后的模块化骨架。 |
| `src-tauri/` | 当前公开 Tauri / Rust 后端六边形骨架，以及已补回的公开或证据支撑能力。 |
| `LICENSE` | Apache License 许可文本。 |

`OpenAiMami IDB` 是独立参考资产，不混入主仓库。还原主线以 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 为准；IDB 只能作为可选辅助核对材料，不能替代公开证据链。

## 重建流程

1. 先校验 `raw/internal` 主链路：索引、manifest、校验摘要、前端 dumped 材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf。
2. 再确认每个新增实现都能回指公开证据；没有证据的业务行为只能写边界、接口、DTO、错误语义、测试占位和待补证据位置。
3. 前端以全量还原为目标，按模块化 owner 边界补齐入口、Provider、route registry、runtime initializer、service wrapper、query/cache、dialogs、panels、components、types、测试和文档。
4. 后端按六边形架构补齐已开源过或可由公开证据支撑的能力；不选择还原的闭源业务只保留真实骨架、合同和边界。
5. `voice` 只保留空骨架和说明，不作为入口，不调用后端，不参与启动流程，也不阻塞其它验收。

## 当前状态

| 领域 | 已做 | 没做或边界 | 怎么验收 |
| --- | --- | --- | --- |
| 公开材料 | Apache License、中文说明、匿名化 `raw/internal` 主链路、前端 dumped 证据、二进制清单和重建文档已进入仓库；公开边界检查覆盖禁词、敏感路径、凭据形态、乱码、README 同步和 current-source/evidence map 索引。 | 不公开机器名、用户路径、会话、令牌、账号私密值、未审查 dump、未匿名化内容、IDB、压缩包或安装包。 | `npm run validate:public-boundary` |
| 前端 | 主流模块化 owner 边界已经落位；入口、全局 Provider、路由、运行时、服务门面、缓存、深模块、i18n、E2E mock、plugins、tray、UI theme、system/hotspot、mcp/skills 等 current-source 链路已有验证入口。 | 不声明已经完成双平台 100% 全 leaf；没有 raw/internal、leaf 队列、closeout 和 validator 支撑的内容不能写成已完成。 | `npm run validate:frontend`、相关 `validate:frontend-*`、`npm run build` |
| 后端 | 六边形分层已经落位；command、usecase、core、repository、platform、adapter、contract 有明确 owner；accounts、sessions、analytics、runtime-extensions、MCP、Custom Instructions 等公开或证据支撑切片有 owner 验证。 | 不做闭源后端业务全量还原；不声明动态插件执行、真实平台副作用、外部进程、市场安装、完整 MCP server 启动、voice 集成已经完成。 | `npm run validate:backend`、相关 `validate:backend-*`；Rust 编译环境用 `npm run validate:backend-cargo` 单独检查 |
| voice | 只保留空骨架、合同清单和中文边界说明。 | 不给入口，不调用后端，不参与启动链路，不阻塞其它模块。 | 确认路由、启动链路、IPC mock 和后端命令没有接入 voice。 |
| 验收 | 顶层聚合、公开边界、前端聚合、后端聚合、i18n、E2E mock、cache 竞态和 current-source/evidence map registry 都有验证入口。 | Rust `cargo check/test` 依赖本机 Rust/MSVC 或目标平台工具链；缺少 `link.exe` 属于环境限制，不等同源码失败。 | `npm run validate:all`；需要 Rust 编译时再运行 `npm run validate:backend-cargo`。 |
| 运行闭环 | README 只记录长期有效的源码状态、范围边界和验收入口。 | 不按提交、日期、局部补丁或临时进度追加内容。 | 每次提交同步 README，但只更新归纳状态和相关稳定说明。 |

文档口径固定为“已做 / 没做或边界 / 怎么验收”。每次提交都必须同步 README，但只能更新归纳状态，不再追加流水式进度记录。

## 验收入口

- 顶层聚合验证：`npm run validate:all`
- 公开边界与 README 同步：`npm run validate:public-boundary`
- 前端聚合验证：`npm run validate:frontend`
- 前端生产构建：`npm run build`
- 后端聚合验证：`npm run validate:backend`
- Rust 编译/测试环境验证：`npm run validate:backend-cargo`

单个 PR 只需要运行与修改范围相关的验证；涉及公开边界、README、匿名化或证据路径时必须运行 `npm run validate:public-boundary`。需要一次性验收公开边界、前端聚合和后端聚合时运行 `npm run validate:all`。

## 可直接给 AI 的重建提示

```text
请只使用当前公开仓库，按可审计方式继续还原 OpenAiMami。所有新增文档、注释和说明必须使用中文；不得写入机器名、用户名、共享盘、绝对本地路径、内部项目名、凭据、令牌、会话、密钥或外部参考仓库名。

先校验 evidence/full-chain/raw 和 evidence/full-chain/internal：读取索引、manifest、校验摘要、前端 dumped 校验材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf，并确认后续实现都能回指公开证据。

前端以全量还原为目标，按 raw/internal 证据补齐路由、入口、运行时初始化、模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、测试和文档；状态、缓存、事件刷新、旧响应、取消、失败态和事件重放都必须经过验证。不要声明前端已经 100% 双平台全 leaf 完成，除非公开证据、leaf 队列、closeout 和验证脚本都能支撑。

后端按 commands、application/usecase、core、platform、repository、adapters、contracts 六边形边界补齐已经开源过或可由公开证据支撑的能力；不还原闭源后端业务全量实现。未公开或无证据支撑的行为只能写成合同、骨架、待实现项、测试缺口或可替换接口。

voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。
```

## PR 规则

欢迎提交完整还原代码或证据修正 PR。PR 必须回答“做了什么、没做什么、依据是什么”：

- 说明使用了哪些 `raw/internal` 证据，以及补齐了哪些前端路由、模块、状态、IPC 包装、缓存、对话框、面板、组件、类型和测试。
- 说明补齐了哪些后端端口、用例、适配器、存储边界和可序列化合同。
- 只补入已经开源过或可由公开证据支撑的后端功能；不能把未公开或无证据支撑的闭源行为写成真实实现。
- 如果使用 `OpenAiMami IDB` 辅助核对，需要说明核对范围、证据路径、校验结果和未覆盖项。
- README 每次提交只更新归纳状态，不按提交记录、日期或零散细项追加进度。

## 匿名化规则

公开文档、提交说明和 PR 说明中不得包含：

- 内部项目名。
- 本机用户名、机器名、共享盘路径或绝对本地路径。
- 凭据、令牌、会话、密钥、账号私密值或未脱敏日志。
- 个人数据、客户数据、运行时缓存或未审查 dump。
- 外部参考仓库名。

请只使用仓库相对路径描述证据和实现。发现未脱敏材料时，应先改成占位说明，再提交 PR。
