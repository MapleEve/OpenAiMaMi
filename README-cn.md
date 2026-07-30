# OpenAiMami

OpenAiMami 是面向个人本地工作流的桌面应用公开重建仓库。仓库只接收已经匿名化、可审计、可验证的公开材料，并用这些材料约束源码、文档、验证脚本和贡献边界。

本仓库采用 Apache License，具体许可文本以 [LICENSE](LICENSE) 为准。公开重建的目的，是在不暴露个人机器、路径、凭据、会话、密钥或账号私密值的前提下继续个人迭代；使用者可以通过公开证据和验证入口检查边界，从而用得更放心并降低隐私泄露风险。

## 这是什么

AiMaMi 是一个闭源的 Rust + Tauri 2 桌面应用（Codex/ChatGPT 的本地伴侣工具）。OpenAiMami 仓库不发布它的源码或二进制，而是发布**逆向重建出来的可审计证据**：反编译伪代码、前端逆向文档、命令契约、模块覆盖分析、破坏性副作用编目。这些证据经脱敏后公开，用来约束后续的消费者实现（互操作/竞品重建），让"上游到底做了什么"可被任何人核对。

配套的 IDB（IDA 参考数据库）单独发布在 [OpenAiMami-IDB](https://github.com/MapleEve/OpenAiMami-IDB)，主仓库只保存脱敏文本证据。

## 仓库导航

```
OpenAiMaMi/
├── evidence/                          # 公开证据（脱敏后）
│   ├── binary-manifests/<version>/   # 各版本二进制哈希 + delta/baseline 概要
│   └── full-chain/
│       ├── raw/aimami/<version>/     # 全量反编译伪代码 + 前端 + 契约（双平台）
│       ├── intermediate/aimami/<version>/  # 蒸馏计划 + 脚本 + census
│       ├── internal-reverse-audits/  # 按模块/平台的审计包（relay/accounts/voice/...）
│       └── internal/audits/<version>/ # 终稿：COVERAGE-FINAL + BASELINE-FINAL
├── docs/reconstruction/              # 重建说明、源映射、i64-status、版本 diff
├── src/  src-tauri/                  # 消费者实现源码（按证据约束）
└── scripts/                          # 验证脚本
```

## 已发布版本

| 版本 | 类型 | 终稿 | 全量证据 |
| --- | --- | --- | --- |
| 1.0.9 | 基线 | — | `evidence/full-chain/raw/aimami/1.0.9/` |
| 1.1.1 | delta | `COVERAGE-FINAL-1.1.1-20260617.md` | `raw/aimami/1.1.1/` |
| 1.1.8 | delta | `internal/audits/1.1.8/` | `raw/aimami/1.1.8/` + `internal-reverse-audits/*1.1.8*` |
| 1.2.2 / 1.2.1 | delta | `internal/audits/1.2.2/COVERAGE-FINAL-1.2.2.md` | `raw/aimami/1.2.2/` + `1.2.1/` |
| **1.2.4** | **delta** | `internal/audits/1.2.4/COVERAGE-FINAL-1.2.4.md` | `raw/aimami/1.2.4/`（双平台 230 文件）|
| **1.2.3** | **baseline** | `internal/audits/1.2.3/BASELINE-FINAL-1.2.3.md` + `COVERAGE-FINAL-1.2.3.md` | `raw/aimami/1.2.3/`（双平台 3949 文件）+ `intermediate/aimami/1.2.3/` + 55 审计包 |

1.2.3 是当前 baseline：1638 个应用函数全反编译 + 注释 + 模块目录树，6 个前端页真逆向，62 处破坏性副作用编目。IDB 见 [OpenAiMami-IDB `1.2.3/`](https://github.com/MapleEve/OpenAiMami-IDB/tree/main/1.2.3)。

## 为什么公开

公开仓库是为了把个人迭代放在可审计证据和清晰许可下，而不是发布未脱敏环境或闭源业务的完整复制。真实业务实现必须能回指仓库内已经公开、已经匿名化的 `raw/internal` 证据链；没有公开证据支撑的行为，不写成真实业务逻辑。

## 范围边界

- 前端按 `raw/internal` 证据链逐步恢复，恢复顺序和真实程度由公开证据、重建说明和验证脚本共同约束；README 不声明前端百分比完成。
- 后端保留原开源能力和公开证据支撑能力；闭源业务不全量恢复。
- 无证据业务只保留职责注释、边界、接口、DTO、错误语义、测试占位和待补证据位置。
- `voice` 只留空骨架和中文说明，不接入口、不接路由、不接 IPC mock、不接后端命令、不调用、不阻塞其他范围验收。
- IDB/LFS 只作为存储、资产或大文件边界处理，不作为闭源业务恢复证明。
- 公开内容不得包含机器标识、个人目录、绝对本地路径、凭据、令牌、会话、密钥、账号私密值、未脱敏日志、个人数据、客户数据或运行时缓存。

## 当前归纳

README 只保留长期有效的归纳状态：已做、未做或边界、验收入口；不记录提交流水、日期、提交号、模块逐项恢复记录或完成百分比。模块级 validator 不再把根 README 当作模块进度证明，具体恢复明细以 `docs/reconstruction/`、`evidence/full-chain/` 和验证脚本为准；README 由公开边界验证统一约束，每次提交仍要同步当前状态，但只归纳能力面和边界变化。

| 范围 | 已做 | 未做或边界 | 验收 |
| --- | --- | --- | --- |
| 公开材料 | 已固定 Apache License、匿名化规则、公开证据入口、公开禁区和贡献边界。 | 未脱敏资料、个人环境、凭据、会话、密钥、账号私密值和外部猜测不进入公开范围。 | `npm run validate:public-boundary` |
| 前端 | 已按公开证据建立恢复边界，入口、路由、服务门面、缓存、文案、mock、可见面和 relay 本地配置合同纳入验证体系。 | README 不声明完成百分比，不替代模块验收、功能完整性证明或逐项恢复记录。 | `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy`、current-source 专名验证、source-only 边界验证、map 绑定验证 |
| 后端 | 已保留原开源能力，并把公开证据支撑的本地事务、relay API 登录配置字段、会话账号只读解析、平台能力、版本语义和脱敏解析纳入六边形骨架。 | 后端不做闭源业务全量恢复；进程重启、凭据、网络和无证据业务只保留边界或待补证据位置。 | `npm run validate:backend`、`npm run validate:backend-cargo` |
| voice | 已保留空骨架和中文说明。 | voice 不接入口、不接路由、不接 IPC mock、不接后端命令、不调用、不阻塞其他范围验收。 | `npm run validate:frontend`、`npm run validate:backend` |
| 验收 | 已保留公开边界、前端、后端、构建面和 Rust 环境检查入口。 | 工具链、`link.exe`、Rust 编译或测试环境、平台依赖缺口只按环境边界解释。 | `npm run validate:all`、`npm run validate:build-surface`、`npm run validate:backend-cargo` |

## 仓库入口

公开证据入口是 `evidence/full-chain/raw/` 和 `evidence/full-chain/internal/`；重建说明和边界口径在 `docs/reconstruction/`；源码和验证脚本分别在 `src/`、`src-tauri/src/` 和 `scripts/`。根 README 不展开模块清单，细节以重建文档和脚本验收为准。

## 验收入口

公开边界使用 `npm run validate:public-boundary`；前端使用 `npm run validate:frontend`、`npm run validate:frontend-visible-copy`、`npm run validate:frontend-leaf-copy`；后端使用 `npm run validate:backend`。构建面使用 `npm run validate:build-surface`，其中 `link.exe` 等工具链缺口只记录为本地环境边界；Rust 完整编译和测试环境使用 `npm run validate:backend-cargo` 单独检查；聚合验收使用 `npm run validate:all`。

修改 README 后，必须确认 `README.md` 与 `README-cn.md` 字节级完全一致；涉及公开边界规则时，再运行 `npm run validate:public-boundary`。

## 可直接给 AI 的重建提示

请只依据仓库内已经公开、已经匿名化的 `raw/internal` 证据链和 `docs/reconstruction/` 说明推进恢复。前端按归属边界逐步恢复；后端只补原开源能力和公开证据支撑的能力，并保持真实六边形骨架；`voice` 只保留空骨架和中文说明，不接入口、不调用、不阻塞。没有证据的业务行为只能写职责注释、接口、DTO、错误语义、测试占位或待补证据位置。

修改公开边界、证据映射、源码入口、命令、DTO、错误封装、类型定义、接口门面、用户可见文案或模拟数据时，应同步更新相关验证脚本和 README 归纳判断，并保持能力面概括。

## PR 与匿名化

欢迎证据修正、匿名化修正、验证脚本修正和边界文档修正。涉及实现的变更应说明修改范围、依据的公开证据、已运行的验证命令，以及仍未恢复或不声明的边界。

实现变更必须遵守前端归属边界和后端六边形边界；无证据业务不得写成真实逻辑。文档、注释和用户可见说明保持中文表达；两份 README 必须字节级一致。
