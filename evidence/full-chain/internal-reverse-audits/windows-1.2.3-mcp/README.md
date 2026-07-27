# AiMaMi 1.2.3 Windows mcp — internal-reverse 结论包

同步时间：2026-07-24/25
范围：`codexmate_lib::core::mcp::*`（16 个 `.c` 文件，见下）+ `codexmate_lib::commands::*` 4 条 mcp 上游命令（`load_mcp_servers`/`upsert_mcp_server`/`set_mcp_server_enabled`/`remove_mcp_server`，全部真实命名、`command-name string xref` ground-truth）+ 前端 McpPage（与 macOS 共享同一份 `mcp-page-LchViioT.js` 包，字节级同名文件已在 win `package/AiMaMi-1.2.3-win64/tauri-dumped-assets` 内核实存在）。

**最终结论（诚实分级，不照抄 macos-1.2.3-mcp 的 blanket 结论）**：
- 前端命令面：**4/4 精确匹配**（`frontend/ipc-contracts.jsonl` 命令名与 win 4 个具名 wrapper 文件 1:1），`true_gaps=0`。
- 4 个 wrapper 命令文件：**全部真实命名**（非 `sub_` 剥离符号），文件头标注 `tauri command handler = <name> | mapped via command-name string xref (win-native, ground-truth)`——比 macOS 包的对应部分证据强度更高（macOS wrapper 名称也是真实的，但 win 这里额外拿到了逐字段的入参字面量 key 抽取，见下）。
- `upsert_mcp_server` wrapper 里直接以字面量 key 逐个抽取 DTO 字段：`name`(4)/`transport`(9)/`enabled`(7)/`command`(7)/`args`(4)/`url`(3)/`headers`(7)/`environment`(11)——**这是本包本会话独立产出、比 macOS 包（仅靠 key 字节长度匹配+前端表单推断）更直接的 dim4 证据**，但仍非正式 per-field 后端 struct/DTO dump（无 default/nullable/error-envelope 表），dim4 因此仍标 `partial`，不标 `closed`。
- Core 侧（`core::mcp`，剥离符号 `sub_*`）：本会话开始时磁盘上有 **15 个** raw `.c` 文件（2026-07-24T13:20:34Z 由 `win-app-inventory-gapfill-leaf` 产出，此前从未被蒸馏）。本会话**额外发现并新增捕获了第 16 个文件**——通过 live IDA（`find_regex('mcp_servers')` → `xrefs_to` → `decompile`）找到 `upsert_mcp_server_0`@`0x1409e86f0`（0x1290 字节，IDB 内已有前序会话留下的跨平台字符串签名匹配注释 `= mac codexmate_lib::core::mcp::upsert_mcp_server`），核实此地址此前**既不在 raw/ 磁盘上也不在 INDEX.jsonl**，遂反编译落盘为第 16 个文件，并追加 INDEX.jsonl 条目。**这一发现直接证明原 15 地址 gap-fill census 并不穷尽**——很可能还有更多 core::mcp 函数未被发现，本会话未做完整活体符号普查（详见 Unknown 节），不得把 16/16 当作模块闭合。
- 16 个 core 文件中：**1 个 ground-truth 具名匹配**（`upsert_mcp_server_0`，IDB 内既有跨平台签名注释）；**7 个高置信度角色匹配**（通过强字面量交叉证据独立推断，见 REGISTRATION-TABLE）：`unquote_toml`/`insert_mcp_block`/`parse_mcp_document`/`strip_toml_comment`/`replace_string_table`/`parse_mcp_section_header`/`editable_mcp_server_table`；**1 个中等置信度**（`sub_1409E1D30`，1284 行，通过 transport 字段 stdio/http/sse 三态解析证据判定与 upsert 路径相关，但未获得具名签名确认，不排除是共享辅助函数）；**6 个是通用运行时/标准库胶水代码**（2 个 Drop glue、1 个 HashMap::insert、1 个 BTree/排序查找、1 个 Default 构造、1 个 thunk、1 个 tag-check bool helper）——这些是通过「调用图传播（≥2 个同模块调用者）」启发式挂到 mcp 模块的**通用/单态化代码**，非 mcp 域业务逻辑本身，该启发式在只有 2 个调用者且都恰好来自 mcp 时可能误挂库内部代码，已如实标注、不算作 mcp 专属覆盖。
- **仍未在 Windows 侧找到确认对应项的 macOS 核心函数（6/14）**：`load_mcp_servers`（核心读路径）、`quote_toml`、`prepare_existing_mcp_block`、`set_optional_string`（1.2.3 NEW-delta）、`remove_mcp_server`（核心实现，1.2.3 NEW-delta）、`set_mcp_server_enabled`（核心实现）。鉴于上一条已证明 census 不穷尽，这 6 项状态为 `Unknown`（未找到 ≠ 不存在），**不得**假设它们已被 16 个文件中的某个隐式覆盖。
- dim2（后端 owner+pseudocode）**standing: `partial`**，不同于 macOS 包的 `strong`——因为（a）核心业务函数仅 1/14 ground-truth、7/14 高置信度推断、6/14 未确认，（b）本会话已实证 census 不穷尽。
- dim5（Windows 平台门）：**本包首次为 Windows mcp 产出实质证据**（wrapper 4/4 ground-truth + core 8-9/14 role-matched + 1 个本会话新增捕获），比此前"存在但未读"（macOS 包记录的状态）前进一大步，但**不判定为 closed**——仍缺 6/14 核心函数确认、无独立 macOS↔Windows 逐字段结构化对比文档、未做完整活体符号普查。判定为 `partial`（不是 `open`，因为证据已不是"未读"；也不是 `closed`，因为覆盖率和交叉对比都不完整）。

当前档位：**consumerStartReady 4/4**（沿用 macOS 包同等基础：前端+wrapper 层证据充分；但 3/4 命令的核心业务逻辑 owner 未确认，故本包在 `gate-report.json` 里逐命令标注 backend owner confidence，供后续 consumer 参考风险）。`strictImplementationUse`/`readyToImplement` 均为 0（与 macOS 包一致，dim4/dim6 未闭合）。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 证据索引

- raw 反编译产出（16 个文件，`core::mcp`）：`raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/*.c`（15 个原有 + 1 个本会话新增 `upsert_mcp_server_0x1409e86f0.c`）
- raw 反编译产出（4 个文件，具名 wrapper）：`raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/{load_mcp_servers,upsert_mcp_server,set_mcp_server_enabled,remove_mcp_server}_0x*.c`
- 前端命令映射：`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 条，4 条 mcp 命令核实于此，与 macOS 侧命令名完全一致）
- 前端页面逆向（复用 macOS 既有产出，未重复劳动）：`raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1——前端 JS bundle `mcp-page-LchViioT.js` 在 win `package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/` 下同名存在，视为同一份跨平台 web 资源，不重新逆向
- 历史基线（不作为 1.2.3 证据使用，仅指针）：`internal-reverse/audits/windows-1.0.9-mcp/`（4/4 readyToImplement，legacy schema，字段集不含 transport/url/headers/environment）
- macOS 1.2.3 对照包（同版本另一平台，独立证据）：`internal-reverse/audits/macos-1.2.3-mcp/`
- raw evidence 指针：见 `pointers/evidence-paths.md`
- live IDA 会话证据（本会话新增，win host <host>:13337）：`server_health`（status=ok, IDA decompiler_ready=true, module="AiMaMi.1.2.3 win64.exe"）→ `find_regex('mcp_servers')`（6 处字符串命中）→ `xrefs_to`（逐一核对调用者）→ `decompile(0x1409e86f0)`（新函数落盘）

## Coverage

- **`commands::` 4 个 mcp wrapper 文件**：全部 ground-truth 具名，与前端 `ipc-contracts.jsonl` 4 条 mcp 命令精确 1:1（`true_gaps=0`）。逐字段入参字面量 key 已从 `upsert_mcp_server`/`set_mcp_server_enabled`/`remove_mcp_server` 三个 wrapper 中直接读出（见 REGISTRATION-TABLE）。
- **`core::mcp` 16 个文件**：0 截断（全部本会话逐个读完或经 grep+首尾+关键段落核实非截断，1 个超大文件 `upsert_mcp_server_0`(0x1290 字节/800 行含地址注释) 经头尾+结构抽样核实完整）。角色映射：1 ground-truth + 7 高置信度 + 1 中等置信度 + 6 通用胶水代码，共 16。
- **未确认的 macOS 侧对应项**：6/14（`load_mcp_servers`/`quote_toml`/`prepare_existing_mcp_block`/`set_optional_string`/`remove_mcp_server`/`set_mcp_server_enabled` 均为核心实现，非 wrapper）。
- **census 不穷尽已实证**：`upsert_mcp_server_0`@`0x1409e86f0` 在本会话之前从未出现在 raw/ 或 INDEX.jsonl 中，尽管 IDB 内已有更早会话留下的具名签名注释——说明"已分析(IDB 内)"与"已落盘蒸馏(raw/)"之间存在系统性缺口，不止此一处的可能性未排除。
- **前端**：McpPage 组件树/状态模型/交互→invoke 命令映射复用 macOS 既有产出（同一份 JS bundle，跨平台共享），未重复逆向。
- **孤儿扫描（角度 C，本会话执行范围有限）**：`find_regex('mcp_servers')` 在整个 win 1.2.3 二进制内仅命中 6 处字符串（`load_mcp_servers`/`mcp_servers.`×1/`\r[mcp_servers.`×3/`mcp_servers`×1），逐一 `xrefs_to` 核实调用者，除已知的 `editable_mcp_server_table`(`sub_1409E7A10`) 与新发现的 `upsert_mcp_server_0` 外未发现其他隐藏函数命中这些具体字符串——但这只是"引用了这 6 个具体字符串的函数"的孤儿扫描，**不是**全模块符号普查（活体 `func_query` 按 `core::mcp::` 前缀过滤因数据量过大服务端超时，未完成，见 Unknown）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：**closed**（复用 macOS 已逆 McpPage，win 侧字节级同名 JS bundle 已核实存在；4 个 win wrapper 文件独立确认 command→handler 映射，ground-truth）
- dim2 后端 owner+pseudocode：**partial**（16 个 core 文件在盘，1 ground-truth + 7 高置信 + 1 中等置信 + 6 通用胶水；6/14 mac 核心函数未在 win 侧找到确认对应项；census 不穷尽已实证）
- dim3 call-tree 到实现叶子：**partial**（`upsert_mcp_server_0` 的完整内部调用树未逐叶子核实完，仅核实身份+首尾非截断+局部结构；已高置信匹配的 7 个辅助函数的调用关系已在 FULL-CHAIN 中叙述）
- dim4 interface/DTO/error/side-effect 边界：**partial**（`upsert_mcp_server` 的 8 个字段名有 wrapper 级 ground-truth 字面量 key 直接证据，优于 macOS 包的推断级证据；但仍无正式 per-field struct dump/default/nullable/error-envelope 表）
- dim5 同平台门（Windows 独立证据）：**partial**（本包首次为 win mcp 产出实质证据；未 closed，6/14 核心函数缺口 + census 不穷尽 + 无逐字段 macOS/Windows 结构化对比文档）
- dim6 test/acceptance mapping：**not-closed**（未产出，与 macOS 包一致）

## Backend Owner Confidence（逐命令）

| 命令 | Wrapper owner | Core owner（win 侧确认状态） |
|---|---|---|
| `load_mcp_servers` | ground-truth（`load_mcp_servers`@`0x1401788e0`） | **Unknown**——16 个 core 文件中无一被判定为此角色；mac 对应 `core::mcp::load_mcp_servers` 未在 win 侧找到 |
| `upsert_mcp_server` | ground-truth（`upsert_mcp_server`@`0x140177050`，含 8 字段字面量 key 抽取） | **ground-truth**（`upsert_mcp_server_0`@`0x1409e86f0`，IDB 内既有跨平台签名注释，本会话验证首次落盘） |
| `set_mcp_server_enabled` | ground-truth（`set_mcp_server_enabled`@`0x140176630`，含 name/enabled 字段字面量 key 抽取） | **Unknown**——mac 对应 `core::mcp::set_mcp_server_enabled` 未在 win 侧找到；`editable_mcp_server_table`(`sub_1409E7A10`) 高置信匹配但那是共享的 table 定位辅助函数，非 set_enabled 本身的核心实现 |
| `remove_mcp_server` | ground-truth（`remove_mcp_server`@`0x140175e20`，含 name 字段字面量 key 抽取） | **Unknown**——mac 对应 `core::mcp::remove_mcp_server`（1.2.3 NEW-delta）未在 win 侧找到；`insert_mcp_block`(`sub_1409E1880`，引用 55 字节 managed marker) 高置信匹配但那是段落插入/替换的共享辅助函数，非 remove 的原子删除实现本身 |

**结论**：只有 `upsert_mcp_server` 一条命令在 Windows 侧同时拿到 wrapper ground-truth + core ground-truth 的完整证据链；其余 3 条命令的 wrapper 层是 ground-truth，但 core 层的最终 mutation/read 实现函数身份仍是 Unknown（可能存在但未发现，鉴于本会话已证明 census 不穷尽，倾向于"存在但未发现"而非"不存在"，但不得据此假设覆盖）。

## Frontend Control Flow

复用 `internal-reverse/audits/macos-1.2.3-mcp/` 已产出的 McpPage 组件树/状态模型/交互表（`raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1），因为前端 JS bundle `mcp-page-LchViioT.js` 是同一份跨平台 web 资源（Tauri webview 打包机制决定前端代码通常与 native backend 解耦，此文件名在 win 侧 `package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/` 下确认字节级同名存在）。本包独立新增的 win 侧证据是 **wrapper 层的 4 个具名 command handler**，证实前端 `invoke(...)` 调用与 win native 命令处理函数的映射关系（`command-name string xref, ground-truth`，比字节比对更直接）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。核心发现：
- 4 个 wrapper 文件遵循统一模式：`sub_141684120`(memcpy-like 拷贝 Tauri 上下文) → 依次通过 `sub_140003640`/`sub_1400048C0`（获取 "repo"/"mutationgate" 两把锁，字面量字符串 `"repo"`(4)/`"mutationgate"`(12) 逐 wrapper 出现）→ 逐字段用命名 helper（`sub_1409757B0`/`sub_140973410`/`sub_1401BCE80`/`sub_1401BBA60` 等，按参数类型区分：字符串/可选字符串/bool/Vec）从 Tauri 调用上下文按字面量 key 抽取字段 → 调用共享 trampoline `sub_14047E370`/`sub_140435080`/`sub_1404349E0` 统一分发+错误信封转换。
- `upsert_mcp_server_0`（`core::mcp::upsert_mcp_server` 的 win 实现，0x1409e86f0，1290 字节）：引用 3 处不同的 `\r[mcp_servers.<name>` 段落模板变体字符串（推断对应新增段落时按 CRLF 换行/是否已有前置换行等格式差异分支拼接），并调用大量 SIMD HashMap 操作辅助函数——结构上与 mac `core::mcp::upsert_mcp_server` 的"读-改-写-读回校验-重试"乐观并发模式一致（未逐分支独立复核重试次数上限是否同为 3 轮）。
- `editable_mcp_server_table`（`sub_1409E7A10`）：引用字面量 `"mcp_servers"`(11 字节) + `"mcp_servers must be a TOML table"` 错误信息，逻辑为定位/创建顶层 `mcp_servers` 表 → 定位/创建 `mcp_servers.<name>` 子表，与 mac 版本行为一致。
- `parse_mcp_section_header`（`sub_1409E74F0`）：对行内容做 8+4 字节内联 XOR 常量比较（`0x767265735F70636D` ^ `0x2E737265` = `"mcp_serv"+"ers."`，12 字节前缀），与 mac 版本逻辑完全一致（mac 用符号名调用，win 用内联立即数编译，是同一源码在不同编译器/优化路径下的产物）。
- `strip_toml_comment`（`sub_1409E5DC0`）：UTF-8 感知的引号状态机（追踪 `"`(34)/`\`(92) 转义），只在非引号内的 `#`(35) 处截断——与 mac 版本行为描述一致。
- `parse_mcp_document`（`sub_1409E5800`）：逐行迭代，检测 `[`(91)...`]`(93) 括号包裹的 section header，调用 `parse_mcp_section_header` 解析内容，用 SIMD HashMap（`sub_140472C30`）建立 section→body 映射——与 mac 版本行为一致。
- `insert_mcp_block`（`sub_1409E1880`）：引用 55 字节的 `"# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)"` managed marker字符串（`aAimamiRelayMan_6`，长度校验 `== 55`），逻辑为按 marker 定位插入点、Vec 元素级插入/移除——与 mac 版本的 managed-block marker 约定完全一致（字节长度也一致，55 字节）。
- `unquote_toml`（`sub_1409E14D0`）：处理单引号(39)/双引号(34)两种字面量形式的反转义，并有 fallback 走通用 `toml::Value` 解析路径（调用 `sub_140F3FD00` 做 BTree/排序查找）——与 mac 版本描述一致。
- `replace_string_table`（`sub_1409E6250`）：引用字面量 `"no entry found for key"`(22 字节，`aNoEntryFoundFo`)，逻辑为对排序后的 key 集合做 SIMD HashMap 批量查找+重插入——与 mac 版本"批量替换字符串字段"描述一致。
- `sub_1409E1D30`（1284 行，中等置信度，与 upsert 路径相关但未获具名确认）：内含对 `transport` 字段(9 字节字面量 key，内联 XOR 校验)的三态解析——值 `"http"`(4 字节)→判为 http 变体，值 `"stdio"`(5 字节)→判为 stdio 变体，值 `"sse"`(3 字节，字符串常量 `aSse`)→判为 sse 变体，否则→unknown/fallback 变体（离散码 0/1/2/3）。此逻辑与 mac 侧记录的"前端 transport: stdio|http|sse 三态选择器 + 后端条件写入"完全吻合，但**未获得像 `upsert_mcp_server_0` 那样的具名签名注释**，因此不确认它是 mac 哪一个具体函数（可能是 `upsert_mcp_server_0` 调用的一个内部辅助/DTO 构造 helper，也可能是一个独立的、被 `upsert_mcp_server_0` 或其他路径共享调用的转换函数）——诚实标注为"中等置信度，未具名确认"，不升级为 dim2 强证据。

## Interface / Error / Boundary

**未系统闭合**（dim4，partial）。已知信息：
- `upsert_mcp_server` 入参（wrapper 层字面量 key 直接读出，ground-truth，非推断）：`name`(4)、`transport`(9，取值 `stdio`/`http`/`sse`，见上)、`enabled`(7)、`command`(7)、`args`(4)、`url`(3)、`headers`(7)、`environment`(11)。**注**：win 侧字段名用 `environment` 而 macOS 包 README 用 `env`——需要在后续 dim4 系统抽取时核实这是否为同一字段的不同显示名/别名，还是真实差异（本会话未独立核实，标 Unknown）。
- `set_mcp_server_enabled` 入参（ground-truth）：`name`(4)、`enabled`(7)。
- `remove_mcp_server` 入参（ground-truth）：`name`(4)。
- `load_mcp_servers` 入参：无（wrapper 文件确认无参数抽取逻辑，与 mac 一致）。
- 错误路径：wrapper 层可见两把互斥锁（`"repo"`/`"mutationgate"`，与 mac 侧 `CodexMutationGate` 概念对应但字面量字符串不同，未独立核实是否为同一互斥对象的不同标签）获取失败会走统一 `sub_14047E370` 错误信封路径；core 侧（`upsert_mcp_server_0`）内部错误路径未逐分支核实（dim3 partial 覆盖此项）。

## Gate Leaf Status

`consumerStartReady` 4/4（基于 wrapper 层 ground-truth + 共享前端证据；`upsert_mcp_server` 额外拿到 core ground-truth）；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json` 与上方 Backend Owner Confidence 表。

## Diff 结论

相对 macOS 1.2.3（`internal-reverse/audits/macos-1.2.3-mcp/`，独立同版本证据，非继承）：
- 命令面完全一致：4 命令，命令名逐字符相同。
- DTO 字段集基本一致：`name`/`transport`(stdio\|http\|sse)/`command`/`args`/`url`/`env`(win 侧字面量为 `environment`，见上 Unknown)/`headers`/`enabled` 均在两平台独立找到证据，未发现平台间字段差异。
- `managed-block marker` 字节长度一致（55 字节），字符串内容一致（`"# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)"`）——跨平台常量，非平台特定实现。
- `mcp_servers.` 12 字节前缀检测逻辑一致（mac 用符号函数调用，win 编译为内联 XOR 立即数比较——同源不同编译产物，非行为差异）。
- **无法独立核实**的差异点：mac 侧 2 个"1.2.3 NEW-delta vs 1.2.2"函数（`remove_mcp_server`/`set_optional_string`）在 win 侧均未找到确认对应项，因此无法判断 win 侧是否也存在对应的 1.2.2→1.2.3 版本演进；同理 win 侧独有发现（3 处不同的 `\r[mcp_servers.` 段落模板变体，是否对应 mac 侧的某个尚未在 mac 包中记录的格式化分支）未在 mac 包中找到对应记载，双向差异均标 Unknown，不臆断。

## Unknown / Missing

1. **census 不穷尽已实证**：原 15 地址 gap-fill leaf 遗漏了至少 1 个已在 IDB 内具名签名匹配的函数（`upsert_mcp_server_0`）；本会话未做完整活体符号普查（`func_query`/`find_regex` 全量扫描因数据量/服务端超时未完成全模块地址范围枚举），无法排除还有更多遗漏。
2. **6/14 mac 核心函数在 win 侧无确认对应项**：`load_mcp_servers`（核心读路径）、`quote_toml`、`prepare_existing_mcp_block`、`set_optional_string`、`remove_mcp_server`（核心实现）、`set_mcp_server_enabled`（核心实现）。
3. `sub_1409E1D30`（1284 行，transport 三态解析）身份未具名确认，中等置信度，可能是 `upsert_mcp_server_0` 的内部辅助或独立共享函数。
4. `environment` vs `env` 字段名是否为同一字段的显示别名未独立核实。
5. 两把锁字面量 `"repo"`/`"mutationgate"` 与 mac 侧 `CodexMutationGate` 三条互斥原因字符串（`"removing an MCP server"` 等）是否为同一机制的不同标签层级，未独立核实。
6. `upsert_mcp_server_0` 的完整内部调用树未逐叶子核实（dim3 partial），仅核实了身份（IDB 既有签名注释）+ 非截断（首尾结构核实）+ 3 处模板字符串引用位置。
7. dim4 系统性字段抽取（默认值/nullable/error envelope 表）、dim6 test/acceptance mapping：均未产出。
8. 6 个"通用运行时/标准库胶水代码"分类（2 Drop/1 HashMap::insert/1 BTree lookup/1 Default 构造/1 thunk/1 tag-check）基于调用图传播启发式挂载到 mcp 模块，可能存在误挂（该启发式在只有 2 个调用者且都恰好来自 mcp 时可能误判库内部单态化代码为 mcp 专属），未逐一独立核实是否也被其他非 mcp 模块调用。

## Action / Non-action

- **可以做**：`upsert_mcp_server` 命令在 Windows 侧有 wrapper+core 双重 ground-truth，可作为 Polaris 实现该命令行为的较高置信度参照。前端契约（4 命令、字段集）可直接复用 macOS 包结论（跨平台共享）。
- **不要做**：不得把 16/16 core 文件当作 win mcp 模块的完整覆盖（census 不穷尽已实证）；不得假设 `load_mcp_servers`/`set_mcp_server_enabled`/`remove_mcp_server` 的核心业务实现已被 16 个文件中的某个隐式覆盖（Unknown ≠ 已覆盖）；不得对外发布本包任何内容（红线 23，内部专用）；不得把 dim4 的 wrapper 级字面量 key 当作已闭合的正式 DTO 契约（仍缺 default/nullable/error-envelope）；不得把 `sub_1409E1D30` 当作已具名确认的 mac 对应函数。
