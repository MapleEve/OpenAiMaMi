# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用。本仓库公开匿名化后的 `raw/internal` 证据链、重建文档、当前前端恢复代码和后端六边形骨架，用来让实现来源、数据边界和本地集成方式可审计、可继续还原。

项目使用 [Apache License](LICENSE) 许可。公开这个仓库的目标是支持个人持续迭代，让后续审查和二次开发有明确许可边界，也让使用者能检查公开实现是否来自仓库内证据链，从而降低隐私泄露、越界还原和无证据实现的风险。

## 为什么公开

1. 个人迭代：把证据、代码、文档和验证脚本放在同一条可追踪链路里，后续继续迭代时能先看证据，再看实现。
2. Apache License：明确使用、审查、再分发和二次开发的许可边界。
3. 用得更放心：公开内容必须经过匿名化和验证，使用者可以检查实现是否来自仓库内 `raw/internal` 证据链，从而降低隐私泄露、越界还原和无证据实现的风险。

## 公开边界

- 所有公开说明、提交说明和 PR 说明只使用仓库相对路径，不写入机器名、用户路径、共享盘路径、凭据、令牌、会话、密钥、账号私密值、未审查 dump 或未匿名化内容。
- 主重建依据是 `evidence/full-chain/raw/` 和 `evidence/full-chain/internal/`。没有公开证据支撑的业务行为，只能写成职责注释、边界、接口、DTO、错误语义、测试占位和待补证据位置。
- LFS/IDB 独立叫 `OpenAiMami IDB`，不混入主仓库。它只能作为可选辅助核对材料，不能替代公开 `raw/internal` 证据链。
- 压缩包、安装包、大体积数据库和未审查二进制不进入主源码仓库；公开状态、大小和哈希以 `evidence/binary-manifests/` 为准。
- `voice` 只保留空骨架、合同清单和中文边界说明，不提供前端入口，不调用后端，不参与启动链路，也不阻塞其它模块验收。

## 仓库内容

| 路径或材料 | 说明 |
| --- | --- |
| `docs/reconstruction/` | 重建规则、原文决策、证据入口、发布规则、架构说明、source map 和大文件策略。 |
| `evidence/full-chain/raw/` | 匿名化 raw 链路，包含 dumped 文件、IPC、CCF、manifest、校验摘要和命令索引。 |
| `evidence/full-chain/internal/` | 匿名化 internal 链路，包含 audit map、frontend map、distilled logic、raw leaf 和索引。 |
| `evidence/binary-manifests/` | 外部大文件的大小、状态和哈希清单。 |
| `src/` | 当前公开前端源码和按 owner 边界整理后的模块化骨架。 |
| `src-tauri/` | 当前公开 Tauri / Rust 后端六边形骨架，以及已补回的公开或证据支撑能力。 |
| `LICENSE` | Apache License 许可文本。 |

## 重建流程

1. 先校验 `evidence/full-chain/raw/` 和 `evidence/full-chain/internal/`：索引、manifest、校验摘要、前端 dumped 材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf。
2. 再确认新增实现能回指公开证据；没有证据的业务行为只能写成职责注释、边界、接口、DTO、错误语义、测试占位和待补证据位置。
3. 前端以全量还原为目标，按 owner 边界补齐入口、Provider、route registry、runtime initializer、service wrapper、query/cache、dialogs、panels、components、types、测试和文档。
4. 后端只补齐已经开源过或可由公开证据支撑的能力，并按 commands、application/usecase、core、repository、platform、adapters、contracts 六边形边界组织；不还原闭源后端业务全量实现。
5. `voice` 只保留空骨架和说明，不作为入口，不调用后端，不参与启动流程，也不阻塞其它验收。

## 当前状态

| 领域 | 已做 | 没做或边界 | 怎么验收 |
| --- | --- | --- | --- |
| 公开材料 | Apache License、中文说明、匿名化 `raw/internal` 主链路、前端 dumped 证据、二进制清单和重建文档已经进入仓库；公开边界检查覆盖禁词、敏感路径、凭据形态、乱码、README 同步和 source map 索引。 | 不公开机器名、用户路径、会话、令牌、账号私密值、未审查 dump、未匿名化内容、IDB、压缩包或安装包。 | `npm run validate:public-boundary` |
| 前端 | 已按主流模块化 owner 边界收敛入口、全局 Provider、route registry、runtime initializer、服务门面、TanStack cache、深模块、i18n、E2E mock、settings/API proxy、plugins、tray、UI theme、system/hotspot、mcp/skills 等可验证链路。 | 不声明已经完成双平台 100% 全 leaf；没有 `raw/internal`、leaf 队列、closeout 和 validator 支撑的内容，不能写成已完成。 | `npm run validate:frontend`、相关 `validate:frontend-*`、`npm run validate:build-surface` |
| 后端 | 已保留原开源功能并按六边形边界整理 commands、application/usecase、core、repository、platform、adapters、contracts；accounts、sessions、analytics、relay 本地配置、runtime-extensions、MCP、Custom Instructions 等公开或证据支撑切片已有 owner 验证入口。 | 不做闭源业务全量还原；不声明动态插件执行、真实平台副作用、外部进程、市场安装、完整 MCP server 启动或 `voice` 集成已经完成。 | `npm run validate:backend`；Rust 完整编译/测试环境用 `npm run validate:backend-cargo` 单独检查 |
| voice | 只保留空骨架、合同清单和中文边界说明。 | 不给入口，不接入路由、启动链路、IPC mock 或后端命令，不阻塞其它模块。 | 确认路由、启动链路、IPC mock 和后端命令没有接入 `voice`。 |
| 验收 | 顶层聚合、公开边界、前端聚合、后端聚合、构建面、i18n、E2E mock、cache 竞态、current-source/evidence map registry 和各类 owner validator 都有对应脚本。 | Rust `cargo check/test` 依赖本机 Rust/MSVC 或目标平台工具链；缺少 `link.exe` 属于环境限制，不等同于源码失败。 | `npm run validate:all`；构建面用 `npm run validate:build-surface`；Rust 环境用 `npm run validate:backend-cargo`。 |
| 运行闭环 | README 只记录长期有效的源码状态、范围边界和验收入口。 | 不按提交、日期、局部补丁或临时进度追加流水式记录。 | 每次提交同步 README，但只更新归纳状态和稳定说明。 |

文档口径固定为“已做 / 没做或边界 / 怎么验收”。每次提交都必须同步 README，但只能更新归纳状态、范围边界和稳定验收入口，不再追加流水式进度记录。

## 验收入口

按修改范围选择验证命令，不需要每个 PR 都跑全量验证：

| 场景 | 命令 |
| --- | --- |
| 顶层聚合验收 | `npm run validate:all` |
| 构建面和脚本入口 | `npm run validate:build-surface` |
| 公开边界、匿名化、README 同步 | `npm run validate:public-boundary` |
| 前端聚合验收 | `npm run validate:frontend` |
| 后端聚合验收 | `npm run validate:backend` |
| Rust 编译和测试环境 | `npm run validate:backend-cargo` |

涉及公开边界、README、匿名化或证据路径时，必须运行 `npm run validate:public-boundary`。需要一次性验收公开边界、前端聚合和后端聚合时，再运行 `npm run validate:all`。

`npm run validate:build-surface` 记录构建面和 `link.exe` 环境边界；它是构建入口边界检查，不等同于直接运行构建。`npm run validate:backend-cargo` 是 Rust 完整编译/测试环境的单独检查入口；本机缺少 Rust/MSVC 或目标平台链接工具时，应把失败归类为环境缺口。

## 可直接给 AI 的重建提示

```text
请只使用当前公开仓库，按可审计方式继续还原 OpenAiMami。所有新增文档、注释和说明必须使用中文；不得写入机器名、用户名、共享盘、绝对本地路径、内部项目名、凭据、令牌、会话、密钥或外部参考仓库名。

先校验 evidence/full-chain/raw 和 evidence/full-chain/internal：读取索引、manifest、校验摘要、前端 dumped 校验材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf，并确认后续实现都能回指公开证据。

前端以全量还原为目标，按 raw/internal 证据补齐路由、入口、运行时初始化、模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、测试和文档；状态、缓存、事件刷新、旧响应、取消、失败态和事件重放都必须经过验证。不要声明前端已经 100% 双平台全 leaf 完成，除非公开证据、leaf 队列、closeout 和验证脚本都能支撑。

后端按 commands、application/usecase、core、platform、repository、adapters、contracts 六边形边界补齐已经开源过或可由公开证据支撑的能力；不还原闭源后端业务全量实现。未公开或无证据支撑的行为只能写成合同、骨架、待实现项、测试缺口或可替换接口。

voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。
```

## PR 规则

欢迎提交完整还原代码 PR 或证据修正 PR。PR 必须清楚回答“做了什么 / 没做什么 / 依据是什么”。

- 前端 PR 应说明使用了哪些 `raw/internal` 证据，以及补齐了哪些路由、模块、状态、IPC 包装、缓存、对话框、面板、组件、类型和测试。
- 后端 PR 应说明补齐了哪些 command、usecase、core、repository、platform、adapter、contract 和可序列化 DTO；只能补入已经开源过或可由公开证据支撑的能力。
- 没有公开证据支撑的闭源行为，不能写成真实业务实现，只能写成合同、骨架、待实现项、测试缺口或可替换接口。
- 使用 `OpenAiMami IDB` 辅助核对时，必须说明它只是辅助材料，并列出核对范围、公开证据路径、校验结果和未覆盖项。
- README 每次提交只能更新归纳状态、范围边界和稳定验收入口，不按提交记录、日期或零散细项追加进度。

## 匿名化规则

公开文档、提交说明和 PR 说明中不得包含：

- 内部项目名。
- 本机用户名、机器名、共享盘路径或绝对本地路径。
- 凭据、令牌、会话、密钥、账号私密值或未脱敏日志。
- 个人数据、客户数据、运行时缓存或未审查 dump。
- 外部参考仓库名。

请只使用仓库相对路径描述证据和实现。发现未脱敏材料时，应先改成占位说明，再提交 PR。
