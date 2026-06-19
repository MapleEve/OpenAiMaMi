# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。仓库只保留匿名化、可审计、可验证的材料，把证据链、源码骨架、范围边界和验收入口收在同一处。

## 为什么公开

公开是为了便于个人持续迭代、让 Apache License 下的许可边界清晰、让使用者用得放心，并通过公开审查降低隐私泄露和越界还原疑虑。仓库接受完整还原 PR，也接受证据、匿名化、验证脚本和文档边界修正；所有实现都必须能回指仓库内已公开材料。

## 范围边界

- 本仓库只以仓库内已公开、已匿名化的 `raw/internal` 全链条材料为主依据；没有证据支撑的业务行为不能写成真实逻辑。
- 前端按 `raw/internal` 渐进全量还原，目标覆盖入口、路由、运行时、服务门面、缓存、弹窗、面板、模块、类型、测试和文档，并保持 owner 边界可验收。
- 后端不是闭源业务全量还原，只保留已开源或有公开证据支撑的能力，并搭出真实六边形骨架：commands、application/usecase、core、platform、repository、adapters、contracts 各自拥有清晰职责。
- `voice` 只保留空骨架、合同清单和中文说明，不接前端入口、路由、启动链路、IPC mock 或后端命令。
- 公开内容不得包含个人目录、绝对本地路径、设备标识、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据、运行时缓存或未审查采集材料。

## 当前归纳

README 只保留长期有效的归纳状态，只做范围、边界和验收入口的摘要；具体模块进度、证据细节和 current-source 收口记录放在 `docs/reconstruction/` 与对应验证脚本中。每次提交仍要同步 README、相关重建文档和验证脚本，避免按时间堆叠进度。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 采用 Apache License，证据、公开边界、重建说明和验证入口已收口到仓库。 | 只纳入已匿名化、可审计、可验证材料；外部猜测和未脱敏材料不进入仓库。 | `npm run validate:public-boundary` |
| 前端 | 已按入口、Provider、route registry、runtime initializer、服务门面、TanStack cache、i18n、E2E mock 和模块 owner 建立渐进还原方向；current-source 映射继续收口到重建文档和验证脚本。 | 仍按 `raw/internal` 渐进全量还原，不声明双平台、全叶子节点、全功能或全部文案已经完成。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy` |
| 后端 | 已按命令适配、用例层、核心层、仓储层、平台层、适配器、合同和 DTO 组织六边形公开骨架；skills 文件事务归属继续由后端 owner 验证脚本约束。 | 不补写无公开证据支撑的闭源业务逻辑；相关位置只保留接口、DTO、错误语义、测试占位、待补证据或可替换骨架。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已限定为空骨架、合同清单和中文说明。 | 不接入口、路由、IPC mock、后端命令或 runtime 启动链路。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已固定公开边界、前端、后端、构建面和 Rust 环境检查入口。 | 本地工具链缺口需要按环境边界判断，不能直接等同于源码失败。 | `npm run validate:all`、`npm run validate:build-surface` |

## 仓库入口

- `evidence/full-chain/raw/` 与 `evidence/full-chain/internal/`：公开重建的主证据入口。
- `docs/reconstruction/`：源码结构、owner 边界、证据映射、范围声明和未声明范围的聚合入口。
- `src/`：前端公开重建代码，按入口、路由、模块、服务门面、缓存、文案和测试边界组织。
- `src-tauri/src/`：后端公开骨架，按 commands、application/usecase、core、platform、repository、adapters 和 contracts 分层。
- `scripts/`：公开边界、前端、后端、构建面和聚合验收脚本入口。

## 验收入口

| 场景 | 命令 | 说明 |
| --- | --- | --- |
| 全量聚合验证 | `npm run validate:all` | 聚合公开边界、前端、后端和构建面检查。 |
| 公开边界、匿名化和 README 同步 | `npm run validate:public-boundary` | 检查公开材料、敏感标识、README 结构和两份 README 的一致性。 |
| 前端聚合验证 | `npm run validate:frontend` | 聚合前端 owner、证据、缓存、文案、mock 和 voice 边界检查。 |
| 前端可见文案收口 | `npm run validate:frontend-visible-copy` | 检查用户可见文案和 locale 归属。 |
| 前端叶子节点和文案可实现性 | `npm run validate:frontend-leaf-copy` | 检查叶子节点、可见文案和还原队列边界。 |
| 后端聚合验证 | `npm run validate:backend` | 聚合后端六边形 owner、合同、平台、仓储和模块边界检查。 |
| 构建面和脚本入口 | `npm run validate:build-surface` | 记录构建面，并固定 `link.exe` 等本机环境边界；公开验收不直接使用裸构建命令替代。 |
| Rust 完整编译和测试环境 | `npm run validate:backend-cargo` | 单独检查 Rust 完整编译/测试环境，把工具链、链接器和平台依赖与源码边界分开。 |

## 可直接给 AI 的重建提示

请只依据仓库内已公开、已匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进还原。前端按 owner 边界渐进全量还原；后端只补已开源或证据支撑能力，并保持真实六边形骨架。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。修改公开边界、证据映射、源码入口、命令、DTO、文案或 mock 时，同步更新相关验证脚本和 README 归纳状态。

## PR 与匿名化

- 欢迎完整还原 PR、证据修正 PR、匿名化修正 PR、验证脚本修正 PR 和文档边界修正 PR。
- PR 应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。
- 新增实现必须遵守前端 owner 边界和后端六边形边界；无证据业务不得写成真实逻辑。
- 文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
- 发现可能暴露隐私泄露风险的内容时，先完成匿名化或移出公开范围，再讨论功能还原。
