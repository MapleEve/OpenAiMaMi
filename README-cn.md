# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。仓库只接收已经匿名化、可审计、可验证的材料，并用这些材料约束源码骨架、文档说明、验证脚本和贡献边界。

本仓库采用 Apache License，具体许可文本以 [LICENSE](LICENSE) 为准。公开重建的目的不是暴露个人运行环境，也不是把未验证材料写成真实业务，而是让使用者和贡献者可以在清晰许可、清晰证据和清晰隐私边界下审查、验证和继续恢复。

## 为什么公开

公开是为了便于个人迭代和继续迭代，让 Apache License 下的许可边界保持清晰，让使用者能审查公开材料、源码边界和验证入口，并通过公开审查降低隐私泄露风险与越界还原风险。

本仓库的实现原则是证据链优先：真实业务实现必须能回指仓库内已公开、已匿名化的 `raw/internal` 材料。没有公开证据支撑的行为不能写成真实逻辑，只能保留职责注释、边界、接口、DTO、错误语义、测试占位或待补证据位置。

这个边界也是为了让个人用户放心使用和审查：公开内容不得包含个人目录、绝对本地路径、设备标识、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据、运行时缓存或未审查采集材料。发现可能造成隐私泄露的内容时，应先匿名化或移出公开范围，再讨论功能恢复。

## 范围边界

- 前端按 `raw/internal` 证据链逐步恢复，目标覆盖入口、路由、运行时、服务门面、缓存、弹窗、面板、模块、类型、测试和文档；未完成验收前不声明 100% 还原、全叶子节点完成、双平台 full leaf 完成、全功能完成或全部文案完成。
- 后端保留原开源能力，并补出真实六边形架构骨架；闭源业务不做全量还原，无公开证据支撑的业务只保留接口、DTO、错误语义、测试占位、待补证据、待处理状态、空操作或可替换骨架。
- `voice` 只保留空骨架、合同清单和中文说明，不接前端入口、路由、运行时启动链路、IPC mock 或后端命令。
- IDB/LFS 是独立边界，只作为存储、资产或大文件边界处理，不混入前后端业务还原结论，也不作为闭源业务完成度证明。
- `AGENTS.md` 中保留架构决策原文和重构门禁原文，README 只做长期有效的摘要，不改写、替换或放宽这些原文。

## 当前归纳

README 只保留长期有效的归纳状态，只做范围、边界和验收入口的摘要；具体模块进度、证据细节和收口记录应放在 `docs/reconstruction/` 与对应验证脚本中。模块级 validator 不再把根 README 当作模块进度证明；根 README 的归纳、匿名化、验收入口和禁止完成声明由公开边界验证统一约束。当前归纳表只允许保留公开材料、前端、后端、voice 和验收五个聚合范围，不追加模块行、日期行、提交号、map 文件名或完成闭合叙事。每次提交仍要同步 README、相关重建文档和验证脚本，但 README 只能归纳状态变化，不记录按日期、提交号或模块小项堆叠的流水。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 已固定 Apache License 许可边界、公开目的、匿名化规则、重建说明和验证入口。 | 只纳入已匿名化、可审计、可验证材料；外部猜测、未脱敏材料和本机私密信息不进入公开范围。 | `npm run validate:public-boundary` |
| 前端 | 已建立按入口、全局 Provider、route registry、runtime initializer、服务门面、TanStack cache、i18n、E2E mock 和深模块 owner 推进的公开恢复框架；当前源码与 `raw/internal` 证据的映射由 `docs/reconstruction/` 和对应验证入口收口。 | 仍按 `raw/internal` 证据链逐步恢复；不声明 100% 还原、全叶子节点完成、双平台 full leaf 完成、全功能完成或全部文案完成。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy` |
| 后端 | 已按 commands、application/usecase、core、platform、repository、adapters 和 contracts 组织六边形公开骨架，并通过 `docs/reconstruction/` 收口当前源码 owner、接口、DTO、仓储、平台和验证入口边界。 | 不补写无公开证据支撑的闭源业务逻辑；相关位置只保留接口、DTO、错误语义、测试占位、待补证据、待处理、空操作或可替换骨架。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已限定为空骨架、合同清单和中文说明。 | 不接入口、路由、IPC mock、后端命令或 runtime 启动链路。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已固定公开边界、前端、后端、构建面和 Rust 环境检查入口。 | 本地工具链缺口需要按环境边界判断，不能直接等同于源码失败或业务完成。 | `npm run validate:all`、`npm run validate:build-surface` |

## 仓库入口

- `evidence/full-chain/raw/` 与 `evidence/full-chain/internal/`：公开重建的主要证据入口。
- `docs/reconstruction/`：源码结构、证据映射、边界说明、恢复队列、范围声明和未声明范围的聚合入口。
- `src/`：前端公开重建代码，按入口、路由、模块、服务门面、缓存、文案和测试边界组织。
- `src-tauri/src/`：后端公开骨架，按 commands、application/usecase、core、platform、repository、adapters 和 contracts 分层。
- `scripts/`：公开边界、前端、后端、构建面和聚合验收脚本入口。

## 验收入口

验证入口用于确认公开边界、源码边界、文档同步和本地环境状态。工具链缺口、链接器缺口或平台依赖缺口应按环境问题判断，不能直接等同于源码失败或业务完成。

| 场景 | 命令 | 说明 |
| --- | --- | --- |
| 全量聚合验证 | `npm run validate:all` | 聚合公开边界、前端、后端和构建面检查。 |
| 公开边界、匿名化和 README 同步 | `npm run validate:public-boundary` | 检查公开材料、敏感标识、README 结构和两份 README 的一致性。 |
| 前端聚合验证 | `npm run validate:frontend` | 聚合前端边界、证据、缓存、文案、mock 和 voice 边界检查。 |
| 前端可见文案收口 | `npm run validate:frontend-visible-copy` | 检查用户可见文案和 locale 归属。 |
| 前端叶子节点和文案可实现性 | `npm run validate:frontend-leaf-copy` | 检查叶子节点、可见文案和恢复队列边界。 |
| 后端聚合验证 | `npm run validate:backend` | 聚合后端六边形边界、合同、平台、仓储和模块边界检查。 |
| 构建面和脚本入口 | `npm run validate:build-surface` | 记录构建面，并固定 `link.exe` 等本地环境边界。 |
| Rust 完整编译和测试环境 | `npm run validate:backend-cargo` | 单独检查 Rust 完整编译和测试环境，把工具链、链接器和平台依赖与源码边界分开。 |

修改 README 后，应至少确认 `README.md` 与 `README-cn.md` 字节级一致。公开边界相关改动还应运行 `npm run validate:public-boundary`。

## 可直接给 AI 的重建提示

请只依据仓库内已公开、已匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进恢复。前端按 owner 边界逐步恢复，不能宣称 100%、全叶子、双平台 full leaf 或全功能完成；后端只补已开源或证据支撑能力，并保持真实六边形骨架；`voice` 只保留空骨架且不接入口；IDB/LFS 作为独立边界处理。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。

修改公开边界、证据映射、源码入口、命令、DTO、错误 envelope、TypeScript 类型、API wrapper、用户可见文案或 mock 时，应同步更新相关验证脚本和 README 归纳状态。用户可见文案应进入 `src/locales/zh.json` 和 `src/locales/en.json`；测试断言应通过 locale helper 或 locale JSON，不继续硬编码用户可见文案。

## PR 与匿名化

欢迎完整还原 PR、证据修正 PR、匿名化修正 PR、验证脚本修正 PR 和文档边界修正 PR。完整还原 PR 应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。

新增实现必须遵守前端 owner 边界和后端六边形边界；无证据业务不得写成真实逻辑。文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
