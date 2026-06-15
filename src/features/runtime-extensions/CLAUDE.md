# runtime-extensions feature Claude 执行规则

## 渐进式覆盖

- 本文件是 Claude 在当前目录工作的独立执行合同；执行时以本文件文字为直接约束，不把 AGENTS.md 当作替代规则。
- 更深层 CLAUDE.md 可以收紧本目录规则，不能放宽证据门、匿名化、中文文档、前端 owner 边界和后端六边形边界。
- 本目录写入前必须确认两类硬门禁已经满足：前端 owner 只在入口、全局 Provider、路由表、route meta、runtime initializer、页面 shell、复杂模块、服务门面、TanStack cache、E2E mock 和 locale 指定层处理；后端 owner 只在 commands、application/usecase/service、core、platform、repository/adapter 和 contracts 指定层处理。
- 发生冲突时按“用户原始要求不可改写、raw/internal 证据优先于推测、同一主题最深层目录规则优先、更严格规则优先”的顺序处理。
- 本目录和下级目录禁止写入共享盘地址、本机用户名、机器名、内部历史标识和外部参考仓库名称。


## runtime-extensions feature 边界

- runtime-extensions 是 IPC domain 和 service 能力边界，不作为可见 feature owner。
- plugins 是当前 runtime extension 可见页面、Provider、StoreUpdater、Content、hooks、cache、dialogs、panels、components、types 和贴近测试的单一模块归属方。
- 本目录不得新增 Provider、StoreUpdater、Content、hooks、cache、dialogs、panels、components、store、types 或页面入口。
- 需要访问 runtime-extensions 后端能力时，只能经 src/services/runtime-extensions 和 src/services/plugins 的窄 wrapper，再由可见 plugins owner 消费。
- 无 raw/internal 证据支撑的 runtime-extensions 行为只能保留 IPC/service 边界类型、错误语义、测试占位和待补证据位置。
