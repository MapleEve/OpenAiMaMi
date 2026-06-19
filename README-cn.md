# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。仓库只接收已经匿名化、可审计、可验证的材料，并用这些材料约束源码骨架、文档说明、验证脚本和贡献边界。

## 为什么公开

公开是为了便于个人迭代，让 Apache License 下的许可边界保持清晰，让使用者能审查公开材料、源码边界和验证入口，并通过公开审查降低隐私泄露风险与越界还原风险。

本仓库的实现原则是证据链优先：真实业务实现必须能回指仓库内已公开、已匿名化的 `raw/internal` 材料。没有公开证据支撑的行为不能写成真实逻辑，只能保留职责注释、边界、接口、DTO、错误语义、测试占位或待补证据位置。

## 范围边界

- 前端按 `raw/internal` 证据链逐步恢复，目标覆盖入口、路由、运行时、服务门面、缓存、弹窗、面板、模块、类型、测试和文档；未完成验收前不声明 100% 还原、全叶子节点完成或全功能完成。
- 后端保留原开源能力，并补出真实六边形架构骨架；闭源业务不做全量还原，无公开证据支撑的业务只保留接口、DTO、错误语义、测试占位、待补证据或可替换骨架。
- `voice` 只保留空骨架、合同清单和中文说明，不接前端入口、路由、运行时启动链路、IPC mock 或后端命令。
- IDB/LFS 是独立边界，只作为存储、资产或大文件边界处理，不混入前后端业务还原结论，也不作为闭源业务完成度证明。
- 公开内容不得包含个人目录、绝对本地路径、设备标识、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据、运行时缓存或未审查采集材料。

## 当前归纳

README 只保留长期有效的归纳状态，只做范围、边界和验收入口的摘要；具体模块进度、证据细节和收口记录应放在 `docs/reconstruction/` 与对应验证脚本中。模块级 validator 不再把根 README 当作模块进度证明；根 README 的归纳、匿名化、验收入口和禁止完成声明由公开边界验证统一约束。每次提交仍要同步 README、相关重建文档和验证脚本，但只能归纳状态变化，避免按日期、提交号或模块小日志堆录流水账。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 已采用 Apache License，固定公开边界、匿名化规则、重建说明和验证入口。 | 只纳入已匿名化、可审计、可验证材料；外部猜测、未脱敏材料和本机私密信息不进入公开范围。 | `npm run validate:public-boundary` |
| 前端 | 已建立按入口、Provider、route registry、runtime initializer、服务门面、TanStack cache、i18n、E2E mock 和深模块 owner 推进的恢复框架，并区分已闭合命令与受限 current-source 命令。 | 仍按 `raw/internal` 证据链逐步恢复；不在根 README 登记模块小进度，也不声明 100% 还原、全叶子节点完成、全功能完成或全部文案完成。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy` |
| 后端 | 已按 commands、application/usecase、core、platform、repository、adapters、contracts 组织六边形公开骨架，并保留原开源能力。 | 不补写无公开证据支撑的闭源业务逻辑；相关位置只保留接口、DTO、错误语义、测试占位、待补证据、待处理、空操作或可替换骨架。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已限定为空骨架、合同清单和中文说明。 | 不接入口、路由、IPC mock、后端命令或 runtime 启动链路。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已固定公开边界、前端、后端、构建面和 Rust 环境检查入口。 | 本地工具链缺口需要按环境边界判断，不能直接等同于源码失败。 | `npm run validate:all`、`npm run validate:build-surface` |

## 仓库入口

- `evidence/full-chain/raw/` 与 `evidence/full-chain/internal/`：公开重建的主要证据入口。
- `docs/reconstruction/`：源码结构、边界说明、证据映射、范围声明和未声明范围的聚合入口。
- `src/`：前端公开重建代码，按入口、路由、模块、服务门面、缓存、文案和测试边界组织。
- `src-tauri/src/`：后端公开骨架，按 commands、application/usecase、core、platform、repository、adapters 和 contracts 分层。
- `scripts/`：公开边界、前端、后端、构建面和聚合验收脚本入口。

## 验收入口

| 场景 | 命令 | 说明 |
| --- | --- | --- |
| 全量聚合验证 | `npm run validate:all` | 聚合公开边界、前端、后端和构建面检查。 |
| 公开边界、匿名化和 README 同步 | `npm run validate:public-boundary` | 检查公开材料、敏感标识、README 结构和两份 README 的一致性。 |
| 前端聚合验证 | `npm run validate:frontend` | 聚合前端边界、证据、缓存、文案、mock 和 voice 边界检查。 |
| 前端可见文案收口 | `npm run validate:frontend-visible-copy` | 检查用户可见文案和 locale 归属。 |
| 前端叶子节点和文案可实现性 | `npm run validate:frontend-leaf-copy` | 检查叶子节点、可见文案和恢复队列边界。 |
| 后端聚合验证 | `npm run validate:backend` | 聚合后端六边形边界、合同、平台、仓储和模块边界检查。 |
| 构建面和脚本入口 | `npm run validate:build-surface` | 记录构建面，并固定 `link.exe` 等本地环境边界；公开验收不直接使用裸构建命令替代。 |
| Rust 完整编译和测试环境 | `npm run validate:backend-cargo` | 单独检查 Rust 完整编译/测试环境，把工具链、链接器和平台依赖与源码边界分开。 |

## 可直接给 AI 的重建提示

请只依据仓库内已公开、已匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进恢复。前端按 owner 边界逐步恢复，不能宣称 100%、全叶子或全功能完成；后端只补已开源或证据支撑能力，并保持真实六边形骨架；`voice` 只保留空骨架且不接入口；IDB/LFS 作为独立边界处理。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。修改公开边界、证据映射、源码入口、命令、DTO、文案或 mock 时，同步更新相关验证脚本和 README 归纳状态。

## PR 与匿名化

- 欢迎完整恢复 PR、证据修正 PR、匿名化修正 PR、验证脚本修正 PR 和文档边界修正 PR。
- PR 应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。
- 新增实现必须遵守前端 owner 边界和后端六边形边界；无证据业务不得写成真实逻辑。
- 文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
- 发现可能暴露隐私泄露风险的内容时，先完成匿名化或移出公开范围，再讨论功能恢复。
