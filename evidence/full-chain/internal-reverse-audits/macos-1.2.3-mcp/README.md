# AiMaMi 1.2.3 macOS mcp — internal-reverse 结论包

同步时间：2026-07-24
范围：`codexmate_lib::core::mcp::*`（14 函数）+ `codexmate_lib::commands::mcp::*`（4 条上游命令）+ 前端 `McpPage`（mcp-page-LchViioT.js）
最终结论：**18/18 函数已读完、伪代码完整无截断（本会话逐文件读盘核实，非仅存在性检查）**，四角度自核通过（前端命令 diff true_gaps=0；孤儿扫描无 truly_undone 项）。六维 full_leaf_100 门未闭合（缺 dim4 interface/DTO 系统抽取、dim5 Windows 平台独立核验、dim6 test/acceptance mapping）。当前档位为 `consumerStartReady`（4/4 命令），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

**本包背景**：raw 证据（18 个 `.c` 文件）在 2026-07-21/24 的 census-gap-fill 与 baseline 会话中已产出并落盘，但此前从未被蒸馏成 `audits/` canonical 结论包（用户原话："上波此模块 1 agent 误拒未产出"）。本轮是首次对该模块做完整蒸馏——读完全部 18 个文件（非抽样），交叉前端已产出的页面逆向文档，产出本 canonical 包。**本会话没有 IDA MCP 工具连接**，未做任何新的反编译，纯粹基于已落盘的 raw 证据蒸馏；角度 A（符号枚举）因此降级为静态目录枚举而非活体 func_query，已在 gate-report.json 中如实标注为 `accepted_unknown`（工具不可用类），不冒充活体核验。

## 证据索引

- raw 反编译产出：`raw/aimami/1.2.3/macos-arm64/commands/mcp/ida/pseudocode/*.c`（4 个命令 wrapper）+ `raw/aimami/1.2.3/macos-arm64/core/mcp/ida/pseudocode/*.c`（14 个核心实现函数）
- 前端逆向：`raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1（McpPage 完整组件树/状态模型/交互表）
- 命令映射来源：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- 历史基线（不作为 1.2.3 证据使用，仅指针）：`internal-reverse/audits/macos-1.0.9-mcp/`
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **`core::mcp` 14 个函数**：全部有产出，0 未归类孤儿目录，18/18 文件本会话逐个读完（非仅 `ls`/`wc -l` 存在性检查）。
- **`commands::mcp` 4 个命令 wrapper**：`load_mcp_servers` / `upsert_mcp_server` / `set_mcp_server_enabled` / `remove_mcp_server`，与前端 `ipc-contracts.jsonl` 命令名精确 1:1 对应（`true_gaps=0`）。
- **前端**：`McpPage` 组件树/状态模型/交互→invoke 命令全逆（已由既有产出文档覆盖，本次直接消费，未重复劳动），新增/编辑弹窗支持 `stdio`/`http`/`sse` 三种 transport 类型。
- **孤儿扫描**（角度 C）：`core::models` 下发现 5 个 `Mcp*` DTO Deserialize glue 函数（`McpTransport`×2、`McpServerSummary`×2、`McpServerListPayload`×1），判定 `already_in_canonical`（归属 core::models 独立 leaf，非本包遗漏）；`run/` 目录一处 "mcp" 字符串命中经核实为 `memcpy` 子串假阳性，非真孤儿。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：**closed**（McpPage 全逆，含 line-level 交互映射）
- dim2 后端 owner+pseudocode：**strong**（18/18 函数本会话逐个读完，0 截断）
- dim3 call-tree 到实现叶子：partial（函数体已逆到真实逻辑并追到 fs/toml/atomic-write 叶子，但未产出独立逐命令调用树规约文档）
- dim4 interface/DTO/error/side-effect 边界：**not-closed**
- dim5 同平台 gate：**open**（Windows raw 证据存在于盘上但本会话未读取核验）
- dim6 test/acceptance mapping：**not-closed**

## Frontend Control Flow

见 `pointers/evidence-paths.md` 指向 `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1（665 行 beautified 源，组件树+状态模型+交互表完整）。关键交互：`useQuery(["mcp-servers"])` 加载列表（`staleTime:Infinity`，仅靠 invalidate 刷新）→ 每行 Switch 切换调 `set_mcp_server_enabled`（非乐观，等待成功后 invalidate）→ 删除走二次确认 `AlertDialog` 再调 `remove_mcp_server` → 新增/编辑走同一 Dialog 组件（`_e`），transport 三态切换（stdio 显示 command/args 字段；http/sse 显示 url 字段），保存统一调 `upsert_mcp_server`。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。核心结构：`commands::mcp::*` 是薄 wrapper（加锁/参数转发/CoreError→前端 envelope 转换），真正逻辑在 `core::mcp::*`——`load_mcp_servers` 读取 codex config 文件并用**自研极简 TOML 扫描器**（非 `toml_edit` 全量解析）逐行找 `[mcp_servers.<name>]` 段落抽取 `command`/`args`/`env`（及 1.2.3 新增的 `url`/隐含的 headers 相关字段）；`upsert_mcp_server`/`set_mcp_server_enabled`/`remove_mcp_server` 走「读取→（`prepare_existing_mcp_block` 定位已存在段落 或 `insert_mcp_block` 插入新段落 / `editable_mcp_server_table` 用 `toml_edit` 精确表编辑）→格式化写回→`write_atomic_with_mode` 原子写→读回校验（乐观并发 CAS，最多重试 3 轮，重试耗尽报错）」的读-改-写循环，全程由 `CodexMutationGate::lock` 序列化跨命令互斥（`"removing an MCP server"`/`"updating an MCP server"`/`"changing an MCP server"` 三条互斥原因字符串，各命令独立）。`quote_toml`/`unquote_toml`/`strip_toml_comment` 是纯文本层 TOML 转义辅助；`replace_string_table` 用于 `toml_edit::Table` 层面批量替换字符串字段（env/headers 类 map）。

## Interface / Error / Boundary

**未系统闭合**（dim4）。已知信息（推断级，非正式 DTO 抽取）：
- `upsert_mcp_server` 入参（来自前端 `ipc-contracts.jsonl` argKeys + Dialog 表单字段）：`name`、`transport`（`stdio`\|`http`\|`sse`）、`command`、`args`（逗号分隔字符串→数组）、`url`、`env`（多行文本→对象）、`headers`（多行文本→对象）。后端 `set_optional_string`（1.2.3 新增函数）被 `upsert_mcp_server`（core）以 key 长度 7（推断为 `"command"`）与 3（推断为 `"url"`）两处调用，与 stdio vs http/sse 的字段互斥语义吻合，但未独立 dump 对应 rodata 字符串核实字面量。
- `set_mcp_server_enabled` 入参：`name`、`enabled`（bool）。
- `remove_mcp_server` 入参：`name`。
- 错误路径（叙述级，未逐字段列表）：mutex 中毒（poisoned lock）、`DirBuilder::_create` 失败（config 目录创建失败）、`fs::read_to_string` 失败、`toml_edit::TomlError`（解析失败）、乐观并发 CAS 重试耗尽（最多 3 轮，超出报错含轮次描述）、原子写 IO 错误。

## Gate Leaf Status

`consumerStartReady` 全 4 条命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

相对 1.0.9 历史基线（`internal-reverse/audits/macos-1.0.9-mcp/`，仅作参考指针非 1.2.3 证据）：1.0.9 的 DTO 只见 `command`/`args`/`env`，无 `transport`/`url`/`headers`，说明远程 MCP（http/sse）传输是 1.0.9→1.2.3 之间引入的新能力。相对 1.2.2（raw `.c` 文件头部既有的 func_query 名称/地址 diff 注记，本会话未重新独立核验）：16/18 函数标注「基线 same-set」（vs 1.2.2 无变化），仅 2 个函数标注「1.2.3 NEW-delta vs 1.2.2 新增」——`core::mcp::remove_mcp_server`（真正的原子文件改写实现，与同名的 `commands::mcp::remove_mcp_server` wrapper 是两个不同函数）与 `core::mcp::set_optional_string`（前述的 command/url 二选一可选字段写入辅助）。这两个新函数与前端 Dialog 的 `stdio`/`http`/`sse` transport 选择器（`mcp-sessions-settings-skills-frontend.md` §1.2 已记录）在语义上吻合，构成一条完整、可交叉验证的证据链，但**未独立复核 1.2.2 二进制**，故此 diff 结论标注为继承既有注记而非本会话独立产出。详见 `logic/FULL-CHAIN-1.2.3.md`。

## Unknown / Missing

1. dim4 interface/DTO 抽取、dim6 test/acceptance mapping：均未产出，是推进到 `strictImplementationUse` 的下一步工作。
2. dim5 Windows 平台：raw 证据已存在（`raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/*.c`，15 个文件，INDEX.jsonl 已有条目）但本会话未读取核验，标 `Unknown`，未用 macOS 证据外推。
3. 角度 A 符号枚举：本会话无 IDA MCP 工具连接，只能做静态目录枚举，未做活体 `func_query` 核验，标 `accepted_unknown`（工具限制类，已用角度 B+C 交叉核查降低风险，但风险未完全消除）。
4. 2 个「1.2.3 NEW-delta」函数标注继承自既有文件头注记，本会话未独立重跑 1.2.2 vs 1.2.3 diff 核实。
5. `set_optional_string` 两处调用点的 key 字面量（`&unk_101674B65`/`&unk_101674B6C`）未独立 dump 字符串内容核实是否精确为 `"command"`/`"url"`，为长度匹配 + 语义吻合的强推断，非字节级确证。

## Action / Non-action

- **可以做**：`consumerStartReady` 档已满足，Polaris 可基于 18 个已读函数的行为语义 + 前端已逆的 DTO 形状开始实现，但不得宣称与 upstream 100% 等价，且需自行独立核实 `command`/`url` 字段字面量与 Windows 侧行为。
- **不要做**：不得把本包"18/18 函数已读"当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 macOS 证据外推 Windows 侧行为；不得把 dim4 的推断级字段名当作已核实的正式 DTO 契约。
