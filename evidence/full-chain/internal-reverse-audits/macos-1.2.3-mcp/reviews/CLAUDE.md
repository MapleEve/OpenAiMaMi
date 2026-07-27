# Claude 独立复核 — macos-1.2.3-mcp

复核日期：2026-07-24
复核范围：本会话自身产出的 README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers 对照原始 raw `.c` 证据（18 个文件全部本会话读完）与既有前端逆向文档（`mcp-sessions-settings-skills-frontend.md` §1）。

## 四角度自核结果

- **角度 A（符号枚举）**：**未达活体标准**。本会话无 IDA MCP 工具连接，无法调用 `func_query`/`export_funcs`。改用静态磁盘枚举（`find`/`ls`，18 个 `.c` 文件：4 commands/mcp + 14 core/mcp）替代，如实标为 `accepted_unknown`（工具限制类），并用角度 B + 角度 C 交叉核查降低风险（角度 B true_gaps=0，角度 C 未发现 truly_undone 孤儿），未冒充活体核验通过。
- **角度 B（前端命令 diff）**：**通过**。`frontend/ipc-contracts.jsonl` 中命令名含 "mcp" 的条目精确 4 条（`load_mcp_servers`/`upsert_mcp_server`/`set_mcp_server_enabled`/`remove_mcp_server`），与 `commands/mcp/*.c` 4 个文件名 1:1 对应，`true_gaps=0`。
- **角度 C（孤儿扫描）**：**通过**。全 1.2.3 macOS raw 树内搜索 `core::mcp::`/`commands::mcp::` 符号引用及 `*mcp*` 文件名，命中：(1) `core/models` 下 5 个 DTO Deserialize glue 函数（`McpTransport`×2/`McpServerSummary`×2/`McpServerListPayload`×1），归类 `already_in_canonical`（独立 core::models leaf，非本包遗漏）；(2) `run/` 目录一处 `memcpy` 子串假阳性，非真孤儿。**0 个 truly_undone**，未开新逆向工作单。
- **角度 D（manifest diff）**：**N/A**。本模块此前无 canonical manifest，属首次蒸馏，无既有 manifest 可供 diff；角度 C 发现的 core::models 孤儿已按四分类处理（见上）。

## 诚实覆盖率声明核查

- **不照抄 relay 模板的 blanket 100%**：本包 dim4（interface/DTO）与 dim6（test/acceptance mapping）均如实标 `not-closed`，dim5（Windows 平台）如实标 `open`（证据存在但未读），未因模块小（仅 18 函数）而拔高档位。档位定格 `consumerStartReady`（4/4），未写 `strictImplementationUse`/`readyToImplement`。
- **dim2 覆盖率验证方式**：不同于关系依赖"文件存在性检查"的弱验证，本会话对全部 18 个文件执行了逐字读取（含 2 个超过 1000 行的大函数 `upsert_mcp_server` core 版分页读完），确认每个文件均以 `return`+闭合大括号结束，无 `[N chars total]`/`TRUNCATED` 标记，符合 cookbook §9 grounded 终验精神（虽未连 IDA，但直接读盘核实内容而非依赖 agent 摘要）。
- **版本 delta 声明来源透明**：README/SYSTEM-DIFF 明确区分"本会话独立产出的发现"（前后端交叉证据链：`set_optional_string` 调用点 key 长度 7/3 与前端 transport 三态选择器吻合）与"继承自既有文件头注记、未独立复核"（2 个"1.2.3 NEW-delta vs 1.2.2"标注），未把继承注记包装成本会话独立验证的结论。

## 采用（Accepted）

- 18/18 raw `.c` 文件读完、0 截断——本会话直接验证，可信度高。
- 前端 DTO 字段推断（`transport`/`command`/`args`/`url`/`env`/`headers`）——来自 `ipc-contracts.jsonl` argKeys + Dialog 表单字段两个独立来源交叉一致，可信度中高，但明确标注"非正式 DTO 抽取"，不升级为 dim4 已闭合。
- `core::models` 孤儿分类为 `already_in_canonical`——有明确的 INDEX.jsonl 既有条目（core::models census-gap-fill session）支持，非臆断。

## 驳回/降级（Rejected/Downgraded）

- 未发现本包自身产出中存在需要驳回的过度声称。已主动把 "18/18 读完" 与 "full_leaf_100 未闭合" 两个结论并列写入，不合并为单一乐观结论；已主动把角度 A 从"通过"降级标注为"工具限制导致的替代验证"，未冒充活体核验通过。

## 仍 Unknown

- 是否存在超出 18 个文件之外的第 15 个 core::mcp 或第 5 个 commands::mcp 函数（例如 ICF 折叠后无独立符号的变体）——静态磁盘枚举无法完全排除此可能性，`accepted_unknown`（工具限制类）。
- `set_optional_string` 两处调用的 key 字面量字符串内容——未独立 dump，`accepted_unknown`。
- 2 个"1.2.3 NEW-delta"文件头注记的真实性——继承自先前 session，未独立复核 1.2.2 二进制，`accepted_unknown`。
- Windows 1.2.3 mcp 平台证据（15 个文件）——存在但未读，`blocks_start`（dim5）。

## 复核方法

未连接 IDA，未执行任何新的反编译。本轮是**读盘蒸馏 + 自我核查**：先逐个读完全部 18 个 raw `.c` 文件与既有前端文档，据此原创产出 README/AI/SYSTEM-DIFF/logic/manifest/gate-report，再对照原始证据回读一遍产出文件，确认结论与证据一一对应、未拔高档位、未虚构未读内容。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。
