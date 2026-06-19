# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。本仓库不记录逐条提交进度，而是把匿名化证据、可审计架构骨架、已开放能力和验证口径放在同一条链路中，支持个人长期迭代，也让使用者和贡献者用得更放心，降低隐私泄露、越界还原和无证据实现的风险。

项目使用 [Apache License](LICENSE) 许可。欢迎基于公开证据提交完整还原 PR 或证据修正 PR。

## 项目定位

- 前端以全量还原为目标：按仓库内 `raw/internal` 证据逐步补齐入口、路由、运行时、服务门面、缓存、弹窗、面板、组件、类型、测试和文档。
- 后端是六边形架构骨架：开源已有能力纳入六边形骨架，闭源业务不做全量还原；后端不是“无后端”，但无公开证据支撑的业务行为只能保留合同、接口、DTO、错误语义、测试缺口和待补证据位置。
- `voice` 只描述为空骨架、无入口、不阻塞；不写成已完成业务，不接入启动链路、路由、IPC mock 或后端命令。
- README 每次提交都要同步，但只更新归纳状态、范围边界和稳定验证入口，不按日期、提交或临时修补记录进度。

## 为什么公开

1. 个人迭代：把证据、代码、文档和验证脚本放在同一条可追踪链路里，后续继续迭代时先看证据，再看实现。
2. Apache License：明确使用、审查、再分发和二次开发的许可边界。
3. 用得更放心：公开内容必须经过匿名化和验证，使用者可以检查实现是否来自仓库内证据链，从而降低隐私泄露、越界还原和无证据实现的风险。

## 仓库内容

| 路径或材料 | 说明 |
| --- | --- |
| 证据 | `evidence/full-chain/raw/`、`evidence/full-chain/internal/` 和 `evidence/binary-manifests/` 只保存匿名化、可审计入口。 |
| 文档 | `docs/reconstruction/` 保存重建规则、原文决策、source map、发布规则和大文件策略。 |
| 源码 | `src/` 保存前端模块化还原内容，`src-tauri/` 保存 Tauri / Rust 后端六边形骨架。 |
| 许可 | `LICENSE` 保存 Apache License 许可文本。 |

LFS/IDB 独立称为 `OpenAiMami IDB`，只能作为可选辅助核对材料，不混入主源代码仓库，也不能替代公开 `raw/internal` 证据链。

## 重建流程

完整重建主线以 `docs/reconstruction/README.md` 和 `docs/reconstruction/source-map.md` 为准。顶层 README 只固定四条原则：

1. 先校验 `raw/internal` 证据链，再写实现。
2. 前端以全量还原为目标，按 owner 边界逐步补齐。
3. 后端只补开源已有能力或公开证据支撑能力，并保持六边形架构骨架。
4. `voice` 只保留空骨架和说明，不作为入口，不调用后端。

## 当前状态

| 领域 | 已做 | 没做或边界 | 怎么验收 |
| --- | --- | --- | --- |
| 公开材料 | Apache License、中文说明、匿名化 `raw/internal` 主链路、重建文档、证据入口和二进制清单已经进入仓库。 | 不公开设备标识、个人目录、会话、令牌、账号私密值、未审查采集材料、未匿名化内容、IDB、压缩包或安装包。 | `npm run validate:public-boundary` |
| 前端 | 目标是全量还原；当前入口、Provider、路由、运行时、服务门面、缓存、i18n、E2E mock 合同和模块 owner 已按公开证据归位，custom-instructions 用户动作 mock 已纳入验收，细节收口到 `docs/reconstruction/source-map.md`。 | 不声明双平台、全叶子节点或全部文案已经百分百完成；没有公开证据、收口记录和验证器支撑的内容不能写成已完成。 | `npm run validate:frontend`、相关 `validate:frontend-*`、`npm run validate:build-surface` |
| 后端 | 目标是六边形架构骨架；当前 commands、application/usecase、core、repository、platform、adapters、contracts 已归位，开源已有能力和证据支撑能力逐步纳入骨架。 | 不做闭源业务全量还原；不声明动态插件执行、真实平台副作用、外部进程、市场安装、真实网络重试、完整服务启动或 `voice` 集成已经完成。 | `npm run validate:backend`；Rust 完整编译/测试环境用 `npm run validate:backend-cargo` 单独检查 |
| voice | 只保留空骨架、合同清单和中文边界说明。 | 不给入口，不接入路由、启动链路、IPC mock 或后端命令，不阻塞其它模块。 | 确认路由、启动链路、IPC mock 和后端命令没有接入 `voice`。 |
| 验收 | 公开边界、前端聚合、后端聚合、构建面、i18n、E2E mock、cache 竞态和归属边界验证器都有脚本入口。 | Rust 完整编译和测试依赖本地 Rust/MSVC 或目标平台工具链；缺少 `link.exe` 属于环境限制，不等同于源码失败。 | `npm run validate:all`；构建面用 `npm run validate:build-surface`；Rust 环境用 `npm run validate:backend-cargo`。 |
| 运行闭环 | README 只记录长期有效的源码状态、范围边界和验收入口；具体模块进度放在 reconstruction source map 与验证脚本中。 | 不按提交、日期、局部补丁或零散临时项追加逐条进度记录。 | 每次提交同步 README，但只更新归纳状态和稳定说明。 |

文档口径固定为“已做 / 没做或边界 / 怎么验收”。每次提交都必须同步 README，但只能更新归纳状态、范围边界和稳定验收入口，不再追加逐条进度记录。

## 验收入口

按修改范围选择验证命令。涉及公开边界、README、匿名化或证据相对路径时，必须运行公开边界验证；需要一次性覆盖主要聚合口径时，再运行全量聚合验证。

| 场景 | 命令 |
| --- | --- |
| 顶层聚合验收 | `npm run validate:all` |
| 构建面和脚本入口 | `npm run validate:build-surface` |
| 公开边界、匿名化、README 同步 | `npm run validate:public-boundary` |
| 前端聚合验收 | `npm run validate:frontend` |
| 前端可见文案收口 | `npm run validate:frontend-visible-copy` |
| 前端叶子节点和文案可实现验收 | `npm run validate:frontend-leaf-copy` |
| 后端聚合验收 | `npm run validate:backend` |
| Rust 编译和测试环境 | `npm run validate:backend-cargo` |

`npm run validate:build-surface` 记录构建面和 `link.exe` 环境边界；它是构建入口边界检查，不等同于直接运行构建。`npm run validate:backend-cargo` 是 Rust 完整编译/测试环境的单独检查入口；本机缺少 Rust/MSVC 或目标平台链接工具时，应把失败归类为环境缺口。

## 可直接给 AI 的重建提示

```text
只使用当前公开仓库继续还原 OpenAiMami。所有新增文档、注释和说明必须使用中文；不得写入设备标识、个人目录、绝对本地路径、内部项目名、凭据、令牌、会话、密钥或外部参考仓库名。

先校验 evidence/full-chain/raw 和 evidence/full-chain/internal，并确认后续实现都能回指公开证据。

前端以全量还原为目标，按公开证据补齐入口、路由、运行时、模块、缓存、测试和文档。不要声明已经完成双平台百分百全量还原，除非公开证据、收口记录和验证脚本都能支撑。

后端按 commands、application/usecase、core、platform、repository、adapters、contracts 六边形边界补齐已经开源过或公开证据支撑的能力；闭源业务不做全量还原。无公开证据支撑的行为只能写成合同、骨架、待实现项、测试缺口或可替换接口。

voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。
```

## PR 规则

欢迎完整还原 PR、证据修正 PR 和验证脚本修正 PR。每个 PR 都应清楚回答“做了什么 / 还没有做什么 / 依据是什么”。

- 前端 PR 说明使用了哪些 `raw/internal` 证据，以及补齐了哪些 owner 边界。
- 后端 PR 说明补齐了哪些 command、usecase、core、repository、platform、adapter、contract 和 DTO；只能补入开源已有能力或公开证据支撑的能力。
- README 每次提交只能更新归纳状态、范围边界和稳定验证入口，不按提交、日期或零散细项追加进度。

## 匿名化规则

公开文档、提交说明和 PR 说明中不得包含内部项目名、设备标识、个人目录、绝对本地路径、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据、运行时缓存、未审查采集材料或外部参考仓库名。请只使用仓库相对路径描述证据和实现；发现未脱敏材料时，应先改成占位说明，再提交 PR。
