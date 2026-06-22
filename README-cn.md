# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。公开内容只接收已经匿名化、可审计、可验证的材料，并用这些材料约束源码、文档、验证脚本和贡献边界。

本仓库采用 Apache License，具体许可文本以 [LICENSE](LICENSE) 为准。公开重建的目的，是让个人迭代和后续维护有清晰许可、清晰证据和清晰隐私边界，让使用者能通过公开审查用得更放心，并降低隐私泄露风险。

## 为什么公开

公开可审计材料，是为了在不暴露个人运行环境和未脱敏资料的前提下继续个人迭代。真实业务实现必须能回指仓库内已经公开、已经匿名化的 `raw/internal` 证据链；没有公开证据支撑的行为，不写成真实业务逻辑。

## 范围边界

- 前端按 `raw/internal` 证据链逐步恢复；根 README 不声明完成率，也不把模块验收结果写成完成叙事。
- 后端保留原开源能力和公开证据支撑的能力；闭源业务不全量还原，无公开证据的行为只保留职责注释、边界、接口、DTO、错误语义、测试占位、待处理状态、空操作或可替换骨架。
- `voice` 只保留空骨架和中文说明；不给前端入口、路由、运行时启动链路、IPC mock 或后端命令，不调用，不阻塞其他范围验收。
- IDB/LFS 只作为存储、资产或大文件边界处理，不作为闭源业务恢复证明。
- 公开内容不得包含个人目录、绝对本地路径、设备标识、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据或运行时缓存。

## 当前归纳

README 只保留长期有效的归纳状态：做了什么、没做什么、怎么验收。模块级 validator 不再把根 README 当作模块进度证明；由公开边界验证统一约束匿名化、禁用公开标识、归纳表结构和验收入口。每次提交仍要同步 README，但只更新归纳判断，不记录日期、提交号或模块小项。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 已把许可、匿名化、证据来源和贡献边界收敛为公开重建的长期约束。 | 未脱敏材料、个人环境、凭据、会话、运行时缓存和外部猜测不进入公开范围。 | `npm run validate:public-boundary` |
| 前端 | 已建立按 `raw/internal` 证据链逐步恢复的公开边界，并通过 current-source 专名验证、source-only 边界验证、map 绑定验证、服务、缓存、文案、模拟和页面入口相关验证约束来源。 | 继续按公开证据推进；根 README 不声明完成率，不替代模块验收。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy` |
| 后端 | 已保留原开源能力和公开证据支撑的能力，并把命令、用例、核心、平台、仓储、DTO 和错误语义纳入六边形骨架。 | 闭源业务不全量还原；无公开证据只保留边界、接口、DTO、错误语义、测试占位、待处理状态、空操作或可替换骨架。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已保留空骨架和中文说明。 | 不给入口、不调用、不阻塞；不接入前端启动链路、IPC mock 或后端命令。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已把公开边界、前端、后端、构建面和 Rust 环境检查收敛到统一入口。 | 工具链、`link.exe`、Rust 编译环境或平台依赖缺口只按环境边界判断，不当作业务完成或失败结论。 | `npm run validate:all`、`npm run validate:build-surface` |

## 仓库入口

公开证据入口是 `evidence/full-chain/raw/` 和 `evidence/full-chain/internal/`；重建说明和边界口径在 `docs/reconstruction/`；源码和验证脚本分别在 `src/`、`src-tauri/src/` 和 `scripts/`。根 README 不展开模块清单，细节以重建文档和脚本验收为准。

## 验收入口

公开边界用 `npm run validate:public-boundary`；前端用 `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy`；后端用 `npm run validate:backend`；构建面用 `npm run validate:build-surface`，其中 `link.exe` 等缺口只记录为本地环境边界；Rust 编译和测试环境用 `npm run validate:backend-cargo` 单独检查；聚合验证用 `npm run validate:all`。

修改 README 后，必须确认 `README.md` 与 `README-cn.md` 字节级一致；公开边界相关改动还应运行 `npm run validate:public-boundary`。

## 可直接给 AI 的重建提示

请只依据仓库内已公开、已匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进恢复。前端按 owner 边界逐步恢复；后端只补原开源能力和公开证据支撑的能力，并保持真实六边形骨架；`voice` 只保留空骨架和中文说明，不接入口、不调用、不阻塞。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。

修改公开边界、证据映射、源码入口、命令、DTO、错误 envelope、TypeScript 类型、API wrapper、用户可见文案或 mock 时，应同步更新相关验证脚本和 README 归纳状态。

## PR 与匿名化

欢迎证据修正、匿名化修正、验证脚本修正和边界文档修正。涉及实现的变更应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。

新增实现必须遵守前端 owner 边界和后端六边形边界；无证据业务不得写成真实逻辑。文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
