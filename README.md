# OpenAiMami

OpenAiMami 是一个面向个人本地工作流的桌面应用。本仓库公开的是可审计、可复核、可继续还原的材料与当前开源实现，用来说明这个项目已经做了什么、还没有做什么，以及后续还原应如何协作。

项目使用 [Apache License](LICENSE) 许可。公开这些材料的目的，是支持个人持续迭代，也让使用者能够在运行前检查实现链路、数据处理边界和隐私风险，从而用得更放心，避免依赖不透明本地包。

## 为什么公开

- 支持个人持续迭代 OpenAiMami，而不是只发布一次性快照。
- 让使用者能检查实现链路、证据来源和本地数据处理边界。
- 用公开的 raw、internal、前端 dumped 文件和架构骨架减少对不透明本地包的依赖。
- 让隐私相关行为可以被审查，避免公开材料写入用户数据、机器状态、内部路径或未匿名化内容。
- 欢迎基于仓库内 raw/internal 主链路补齐完整还原代码的 PR；如使用 `OpenAiMami IDB` 辅助核对，需要说明核对范围和证据路径。

## 仓库内容

| 路径或材料 | 说明 |
| --- | --- |
| `README.md`、`README-cn.md` | 中文公开说明、当前状态摘要和 AI 重建提示。 |
| `docs/reconstruction/` | 重建规则、证据入口、发布规则、架构说明和大文件策略。 |
| `evidence/full-chain/raw/` | 匿名化 raw 链条，包含前端 dumped 文件、IPC、CCF、manifest、校验摘要和命令索引。 |
| `evidence/full-chain/internal/` | 匿名化 internal 链条，包含 audit map、frontend map、distilled logic、raw leaf 和索引。 |
| `evidence/binary-manifests/` | 外部大文件的大小、状态和哈希清单。 |
| `src/` | 当前公开前端源码和主流前端模块化重构入口。 |
| `src-tauri/` | 当前公开 Tauri 与 Rust 后端六边形骨架，以及已补回的原始公开后端能力。 |
| `LICENSE` | Apache License 许可文本。 |

`OpenAiMami IDB` 是独立参考资产。主仓库不直接保存大体积 IDB 文件，还原主线应以 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 为准，IDB 只能作为可选辅助核对材料，不能替代公开证据链。

## 重建流程

1. 先校验 raw/internal 索引、manifest、校验摘要、前端 dumped 校验材料和命令索引。
2. 再用 raw 链条确认 macOS/Windows dumped 文件、IPC、CCF、manifest 和命令级证据。
3. 再用 internal 链条解释 audit map、frontend map、distilled logic、raw leaf、页面结构和数据流。
4. 前端以全量还原为目标，按 route registry、entry/root、runtime initializer 和深模块 owner 边界补齐。
5. 后端按 commands、application、core、platform、repository、adapters、contracts 六边形骨架补齐已经开源过或有公开证据支撑的能力。
6. 未公开或未选择还原的后端业务行为只保留为契约、桩、待实现项、测试缺口或可替换接口。
7. voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。

详细架构决策、owner 边界、重构门禁和执行顺序以仓库内 `AGENTS.md` 及同级规则文件为准；README 只保留范围说明、状态摘要和验收入口。

## 当前状态

本节只说明当前公开仓库的整体状态，不记录提交流水，也不把近期拆分过程当作完成度。判断项目状态时，以公开证据链、源码边界和验证脚本为准。

### 已经做了什么

- **公开材料**：仓库已公开 Apache License、中文说明、匿名化 raw/internal 主链路、前端 dumped 证据、二进制清单和重建文档。
- **前端还原基础**：`src/` 已作为公开前端源码入口，承载入口、路由、运行期初始化、全局 Provider、模块 owner 和 cache helper owner 形态的持续还原。
- **后端骨架与公开能力**：`src-tauri/` 已建立 commands、application、core、platform、repository、adapters、contracts 六边形骨架，并补回已有公开证据支撑的后端能力；mystery grants 已形成独立 owner，system 不 owning 前端 route gate。
- **验证与匿名化入口**：公开边界、README 同步、前端证据、状态合同、后端 owner、i18n 和 E2E mock 已有脚本化检查入口；前端 evidence 验证已覆盖 cache helper owner 形态。

### 还没有做什么

- **前端完整度**：不声明前端已经 100% 完成，也不声明 macOS / Windows 双平台 leaf 已全部闭合。
- **后端业务范围**：不做闭源后端业务全量还原；未公开、未选择还原或无公开证据支撑的行为只保留为契约、桩或待补证据位置。
- **voice 边界**：voice 只保留空骨架、合同清单和中文边界说明，不作为前端入口，不调用后端能力，不参与启动流程。
- **运行闭环**：不声明真实网络、后台线程、全局状态、真实 token 统计口径、更新安装、诊断修复、外部进程重启或 shell 闭环已经完成。

### 怎么验收

- **公开边界**：运行 `validate:public-boundary`，确认 README、公开文本、tracked 文件和 raw 前端资产没有越过匿名化与发布边界。
- **前端证据与状态合同**：运行前端证据、leaf、入口、缓存、cache helper owner、事件刷新、i18n 和 E2E mock 相关 `validate:*` 脚本，确认还原逻辑仍能回指公开证据。
- **后端 owner**：运行 `validate:backend-hexagonal` 和后端 owner 类 `validate:*` 脚本，确认命令、用例、核心、平台、仓储、适配器、契约和 mystery grants 边界没有互相侵入。
- **README 同步**：`README.md` 与 `README-cn.md` 必须保持同内容、同字节；公开边界校验会检查这一点。
- **工具链限制**：编译、构建和平台运行验收依赖本机 Rust、前端和目标平台工具链；工具链缺失时只记录环境限制，不能替代源码状态判断。

### 当前边界

- **证据优先**：实现和说明必须能回指公开 raw/internal 证据链；没有证据支撑的业务行为不能写成真实逻辑。
- **隐私匿名**：公开材料、提交说明和 PR 说明不得包含内部路径、机器名、用户名、凭据、令牌、会话、密钥或未脱敏日志。
- **后端范围**：后端以可审计骨架、接口、DTO、错误语义、测试占位和可替换适配为主，不声明闭源业务全量还原。
- **工具链限制**：环境问题不能替代源码和证据边界判断，跨平台能力必须在对应工具链下单独验证。

## 可直接给 AI 的重建提示

```text
请只使用当前公开仓库，按可审计方式继续还原 OpenAiMami。所有新增文档、注释和说明使用中文；不得写入内部路径、机器名、用户名、共享盘、内部项目名、凭据、令牌、会话、密钥或外部参考仓库名。

先校验 `evidence/full-chain/raw` 和 `evidence/full-chain/internal`：读取索引、manifest、校验摘要、前端 dumped 校验材料、IPC、CCF、audit map、frontend map、distilled logic 和 raw leaf，并确认后续实现都能回指公开证据。

前端以全量还原为目标，按 raw/internal 证据补齐路由、入口、运行期初始化、模块 Provider、StoreUpdater、Content、cache、hooks、dialogs、panels、components、types、测试和文档；状态、缓存、事件刷新、旧响应、取消、失败态和事件重放都必须经过验收。

后端按 commands、application、core、platform、repository、adapters、contracts 六边形边界补齐已经开源过或可由公开证据支撑的能力；不还原闭源后端业务全量实现，未公开或无证据支撑的行为只能写成契约、桩、待实现项、测试缺口或可替换接口。

voice 只保留空骨架、合同清单和中文边界说明；它不作为前端入口，不调用后端能力，不参与启动流程，也不能阻塞其它验收。

提交 PR 时必须说明使用了哪些 raw/internal 证据、做了哪些校验、哪些行为已经还原、哪些仍未覆盖或仍是桩；如果核对了 `OpenAiMami IDB`，也必须说明核对范围和未覆盖项。
```

## PR 规则

欢迎提交完整还原代码或证据修正 PR，但 PR 必须回答“做了什么、没做什么、依据是什么”：

- 基于 `evidence/full-chain/raw` 和 `evidence/full-chain/internal` 补齐前端路由、模块、状态、IPC 包装、缓存、对话框、面板、组件、类型和测试。
- 按六边形架构补齐后端端口、用例、适配器、存储边界和可序列化契约。
- 补入已经开源过或可由公开证据支撑的后端功能；不能把未公开或无证据支撑的闭源行为写成真实实现。
- 改进隐私审查、匿名化规则、校验脚本、重建文档、证据路径、哈希或 manifest 说明。
- 如果使用 `OpenAiMami IDB` 辅助核对，需要在 PR 中说明核对范围、证据路径、校验结果和未覆盖项。
- 如果修改用户数据读写、缓存、导入导出、清理、恢复或本地集成逻辑，需要在 PR 中单独说明行为变化和验证结果。

## 匿名化规则

公开文档、提交说明和 PR 说明不得包含：

- 内部项目名。
- 本机用户名、机器名、共享盘路径或绝对本地路径。
- 凭据、令牌、会话、密钥、账号私密值或未脱敏日志。
- 个人数据、客户数据、运行期缓存或未审查 dump。
- 外部参考仓库名称。

请只使用仓库相对路径描述证据和实现。发现未脱敏材料时，应先改成占位说明，再提交 PR。
