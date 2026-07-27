# Claude 独立复核 — windows-1.2.3-mcp

复核日期：2026-07-25
复核范围：本会话自身产出的 README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers/task-plan 对照原始 raw `.c` 证据（20 个文件：16 core + 4 commands，全部本会话读完或经充分结构核实）与 live IDA 会话记录。

## 四角度自核结果

- **角度 A（符号枚举）**：**部分-活体（partial-live）**。本会话**有**活体 IDA MCP 连接（`server_health` 确认 status=ok/IDA decompiler_ready=true/module 匹配，满足红线17前置条件）——这本身已优于 macOS 包（完全无工具连接）。但全量符号枚举未完成：`func_query` 按名称子串过滤疑似失效（返回全量函数表）；暴力全文反汇编搜索 `search_text` 服务端 60 秒超时（按红线17"重试1次仍失败即停"处理，未继续强行重试）。改用 `find_regex` 对 rodata 字符串快速索引（`strings_cache_ready=true`，29581 条）做窄范围检索，成功且高效，并据此发现 1 个此前从未落盘的核心函数（`upsert_mcp_server_0`）。如实标注为 `accepted_unknown`（partial-live/时间预算限制类），**不**升级为"已完成活体全量核验"，也**不**降级为"等同 macOS 的完全无核验"——这是一个介于两者之间、有实质证据支撑的中间状态。
- **角度 B（前端命令 diff）**：**通过**。`windows-x64/frontend/ipc-contracts.jsonl` 中命令名含 "mcp" 的条目精确 4 条，与 4 个 win-native 具名 wrapper 文件 1:1 对应，`true_gaps=0`。本会话独立核实（未继承 macOS 包结论）。
- **角度 C（孤儿扫描）**：**部分**。`find_regex('mcp_servers')` 在全 win 1.2.3 二进制内命中 6 处字符串，逐一 `xrefs_to` 核实调用者，除已知 wrapper 外仅发现 2 个函数（`editable_mcp_server_table` 候选 + 新发现的 `upsert_mcp_server_0`）。这是**窄范围**孤儿扫描（仅限引用这一个字符串家族的函数），不是 macOS 包角度 C 那种全路径 grep 级别的全模块孤儿扫描。如实标注 `partial`，不冒充"通过"。
- **角度 D（manifest diff，四分类）**：**N/A**。本模块此前无 win 侧 canonical manifest，属首次蒸馏，无既有 manifest 可供 diff。15 个原有 core 文件中的 6 个"通用胶水代码"未被本包认领为 mcp 专属角色（既不归类 already_in_canonical，也不归类 truly_undone——因为它们从未被独立声称为 mcp 业务逻辑，四分类框架不适用于"未被认领的通用代码"）。

## 诚实覆盖率声明核查

- **不照抄 macos-1.2.3-mcp 的 blanket 结论**：本包 dim2（后端 owner）从 macOS 包的 `strong` 主动降级为 `partial`，理由是（a）核心业务函数仅 1/14 ground-truth（macOS 是 18/18 全部具名，虽然是符号级 vs 我们的 win 侧原生剥离），（b）本会话已实证 census 不穷尽（发现 1 个此前遗漏的已签名函数）。dim5（Windows 平台门）从 macOS 包记录的 "open（存在但未读）" 前进到 `partial`（不是 `closed`），因为仍有 6/14 核心函数缺口、无正式跨平台结构化 diff 文档、只有 1/4 命令拿到 wrapper+core 双重 ground-truth。
- **不虚报 16/16 为完整覆盖**：README/AI.md/manifest.json/gate-report.json 均在最显眼位置声明"census 不穷尽已实证"这一发现，而非把新增第 16 个文件包装成"补齐完成"。
- **dim2 覆盖率验证方式**：20 个文件（16 core + 4 wrapper）全部检查了截断标记（`grep -c "TRUNCATED\|chars total"` = 0）与首尾结构完整性（闭合大括号 + return 语句）；8 个中小文件 + 4 个 wrapper 文件逐字读完；2 个最大文件（`sub_1409E1D30` 1284行、`upsert_mcp_server_0` 800行含地址注释）采用首尾读取+关键字符串定位段落抽样读取，**未**逐行读完，如实记录在 manifest.json 的 `backend_functions_truncated_stubs_verification` 字段中，不冒充逐字读完。
- **新增证据的合规性自查**：本会话新增写盘前执行了 `ls `（红线16 SMB 挂载核实）；新文件遵循既有目录命名规则（`<product>/<version>/<platform>/<module>/`，未按日期/会话拆子目录，红线目录结构合规）；INDEX.jsonl 只做追加（红线6），未创建机器分片；新文件命名沿用 `<name>_<addr>.c` 既有约定。
- **版本 delta / 身份判定的透明度**：README/SYSTEM-DIFF/logic 明确区分"本会话 ground-truth 独立产出"（4 个 wrapper 的字面量字段 key、`upsert_mcp_server_0` 的新增捕获）、"高置信度独立推断"（7 个通过字面量交叉证据判定角色的辅助函数）、"中等置信度"（`sub_1409E1D30`，未具名确认）、"通用胶水，不认领角色"（6 个），四个置信度层级未被混同或拔高。

## 采用（Accepted）

- 4 个 wrapper 文件 ground-truth 具名 + 逐字段字面量 key 抽取——本会话直接读盘验证，可信度高，且优于 macOS 包同等证据的推断强度。
- `upsert_mcp_server_0` 的身份判定（IDB 既有跨平台签名注释）——有明确的、独立于本会话的既存证据支持（并非本会话臆断），本会话只是核实了该注释的存在并核实其从未落盘。
- 7 个高置信度核心函数角色判定——每一个都有独立的、可复核的字面量字符串或内联常量证据支撑（12字节前缀 XOR/55字节marker/22字节错误信息等），非纯粹结构相似性猜测。

## 驳回/降级（Rejected/Downgraded）

- 最初倾向于把 `sub_1409E1D30` 判定为"高置信度 = upsert_mcp_server"（基于 transport 三态解析证据），在发现 `upsert_mcp_server_0` 具有更强的 ground-truth 签名证据后，**主动把 `sub_1409E1D30` 的判定从"高置信度"降级为"中等置信度，未具名确认"**，并明确指出这是本次复核过程中自我纠正的一处判断——未采取"先入为主保留原判断"的态度。
- 拒绝把"找到 7 个高置信度辅助函数"包装成"3 条 Unknown 命令的核心实现已定位"——README/logic 明确区分"共享 helper 函数"与"命令专属核心实现"，未合并两者。
- 拒绝把"live IDA 连接可用"包装成"角度 A 已达活体标准"——虽然本会话确有活体连接（优于 macOS 包），但全量符号枚举未完成，如实标 `partial-live`/`accepted_unknown`，不升级为"通过"。

## 仍 Unknown

- 6/14 mac 核心函数在 win 侧无确认对应项（详见 README/gate-report Backend Owner Confidence 表）。
- core::mcp 完整 census 边界（已证明不穷尽，边界未知）。
- `sub_1409E1D30` 与 `upsert_mcp_server_0` 的确切关系。
- `environment`(win) vs `env`(macOS README) 字段名是否同一。
- `"repo"`/`"mutationgate"` 两把锁与 mac `CodexMutationGate` 的对应关系。
- `upsert_mcp_server_0` 完整内部调用树到具体 fs/toml 叶子。
- dim4 正式字段表、dim6 test/acceptance mapping——均未产出。

## 复核方法

本会话**有**活体 IDA MCP 连接并实际使用（`server_health`/`find_regex`/`xrefs_to`/`decompile` 4 类调用），这与纯蒸馏模式（如 macos-1.2.3-mcp）不同。复核流程：① 读完/结构核实全部 20 个 raw 文件 → ② 用 live IDA 做窄范围补充核验（find_regex 字符串族 + xrefs_to 交叉核实） → ③ 发现并捕获 1 个真实缺口（不是本会话臆造的边界情况，是可复现的既有 IDB 状态与磁盘状态不一致） → ④ 据此原创产出 README/AI/SYSTEM-DIFF/logic/manifest/gate-report/task-plan → ⑤ 对照原始证据回读一遍产出文件，主动发现并修正了一处过度自信的身份判定（`sub_1409E1D30`）。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"，与 macos-1.2.3-mcp 包的做法一致）。
