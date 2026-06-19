# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。仓库只接收已经匿名化、可审计、可验证的材料，并用这些材料约束源码、文档、验证脚本和贡献边界。

本仓库采用 Apache License，具体许可文本以 [LICENSE](LICENSE) 为准。公开重建的目的不是暴露个人运行环境，也不是把未验证材料写成真实业务，而是在清晰许可、清晰证据和清晰隐私边界下继续恢复。

## 为什么公开

公开闭源部分的可审计材料，是为了便于个人迭代和继续迭代，让 Apache License 下的许可边界保持清晰，并让使用者能通过公开审查降低隐私泄露风险。

真实业务实现必须能回指仓库内已公开、已匿名化的 `raw/internal` 材料。没有公开证据支撑的行为，只能保留职责注释、边界、接口、DTO、错误语义、测试占位或待补证据位置。

## 范围边界

- 前端按 `raw/internal` 证据链逐步恢复；未完成验收前不声明 100% 还原、全叶子节点完成、双平台 full leaf 完成、全功能完成或全部文案完成。
- 后端保留原开源能力，并补出真实六边形架构骨架；闭源业务不做全量还原，无公开证据支撑的业务只保留待处理状态、空操作或可替换骨架。
- `voice` 只保留空骨架、合同清单和中文说明，不接前端入口、路由、运行时启动链路、IPC mock 或后端命令。
- IDB/LFS 是独立边界，只作为存储、资产或大文件边界处理，不作为闭源业务完成度证明。
- 公开内容不得包含个人目录、绝对本地路径、设备标识、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据或运行时缓存。

## 当前归纳

README 只保留长期有效的归纳状态：做了什么、没做什么、怎么验收。模块级 validator 不再把根 README 当作模块进度证明；根 README 的归纳、匿名化、验收入口和禁止完成声明由公开边界验证统一约束。每次提交仍要同步 README、相关重建文档和验证脚本，但 README 只更新归纳结论，不记录提交流水、日期、提交号或模块小项。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 已固定 Apache License、匿名化规则、`raw/internal` 证据入口、重建提示和贡献边界。 | 未脱敏材料、个人环境、凭据、会话、运行时缓存和外部猜测不进入公开范围。 | `npm run validate:public-boundary` |
| 前端 | 已按入口、全局 Provider、route registry、runtime initializer、服务门面、TanStack cache、i18n、E2E mock、cache 竞态验证、current-source 专名验证和深模块 owner 建立恢复框架。 | 仍按证据链继续恢复；不声明 100% 还原、全叶子节点完成、双平台 full leaf 完成、全功能完成或全部文案完成。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy` |
| 后端 | 已保留原开源能力，并按 commands、application/usecase、core、platform、repository、adapters 和 contracts 放入六边形公开骨架；只读诊断合同和空骨架 owner 进入公开验证。 | 闭源业务不做全量还原；无证据行为只保留接口、DTO、错误语义、测试占位、待处理、空操作或可替换骨架。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已限定为空骨架、合同清单、中文说明和独立 owner 验证。 | 不接入口、路由、IPC mock、后端命令或 runtime 启动链路。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已固定公开边界、前端、后端、构建面和 Rust 环境检查入口。 | 工具链、`link.exe`、Rust 编译环境或平台依赖缺口按环境边界判断，不当作业务完成或失败结论。 | `npm run validate:all`、`npm run validate:build-surface` |

## 仓库入口

核心入口是 `evidence/full-chain/raw/`、`evidence/full-chain/internal/`、`docs/reconstruction/`、`src/`、`src-tauri/src/` 和 `scripts/`。证据细节、模块映射、未声明边界和验证规则放在 `docs/reconstruction/` 与对应脚本中，根 README 不追加模块明细。

## 验收入口

公开边界用 `npm run validate:public-boundary`；前端用 `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy`；后端用 `npm run validate:backend`；构建面用 `npm run validate:build-surface`，其中 `link.exe` 等缺口只记录为本地环境边界；Rust 完整编译和测试环境用 `npm run validate:backend-cargo` 单独检查；聚合验证用 `npm run validate:all`。

修改 README 后，应确认 `README.md` 与 `README-cn.md` 字节级一致。公开边界相关改动还应运行 `npm run validate:public-boundary`。

## 可直接给 AI 的重建提示

请只依据仓库内已公开、已匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进恢复。前端按 owner 边界逐步恢复；后端只补已开源或证据支撑能力，并保持真实六边形骨架；`voice` 只保留空骨架且不接入口；IDB/LFS 作为独立边界处理。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。

修改公开边界、证据映射、源码入口、命令、DTO、错误 envelope、TypeScript 类型、API wrapper、用户可见文案或 mock 时，应同步更新相关验证脚本和 README 归纳状态。

## PR 与匿名化

欢迎完整还原 PR、证据修正 PR、匿名化修正 PR、验证脚本修正 PR 和文档边界修正 PR。完整还原 PR 应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。

新增实现必须遵守前端 owner 边界和后端六边形边界；无证据业务不得写成真实逻辑。文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
