# AiMaMi 1.2.3 windows-x64 voice

同步时间：2026-07-25
范围：Windows 侧 voice 模块（前端 37 个 `*voice*` IPC 命令 + 后端 171 个已解压 raw `.c` 文件，跨 10 个原始目录）
最终结论：**Partial（诚实降级，非 all-or-nothing）**。dim1（前端契约存在）与 dim2（后端 owner/模块归属存在）两个角度已确认为真实、非造假证据；但模块整体尚未闭合 consumerStartReady 的 9 维起步门（详见下）。本包**不**宣称任何命令达到 consumerStartReady/strictImplementationUse/readyToImplement。

## 证据索引

见 `pointers/evidence-paths.md`。171 个 raw `.c` 文件全部经本次 distillation session 独立文件系统重新核实（非照抄旧文档数字），全部非截断（0 个 `TRUNCATED`/`chars total]` 标记，抽样+目录级扫描双重核实）。

## Coverage

- 前端：37 个命令名含 "voice" 的 IPC 契约（`ipc-contracts.jsonl`，win 专用提取，2026-07-24 产出）
- 后端：171 个 voice 域 raw `.c` 文件，其中 **40 个（23.4%）有语义/命令名标识**，**131 个（76.6%）为通用 IDA `sub_XXXXXXXX`**（已做 module 级归属，未做函数级身份解析）
- 命令级 name-stem 映射：**32/37** 前端命令有同名/同词干后端文件；**5 个真缺口**：`cancel_voice_trigger_capture`、`remove_voice_vocabulary_app_scope`、`resolve_voice_vocabulary_app_info`、`set_voice_trigger_listener_suppressed`、`upsert_voice_vocabulary_app_scope`
- 这 5 个缺口的候选身份：`commands/voice/` 下 2 个未命名 sub_（535 行 + 37 行），module-attributed 到 `codexmate_lib/commands/voice`，但未做字符串/字节签名/调用图消歧确认身份——记为 `accepted_unknown`，不当作已覆盖

## Per-target Result Matrix

| 维度 | 状态 | 说明 |
|---|---|---|
| dim1 前端控制流 | partial | invoke wrapper + 命令名确认（37/37）；UI 触发/guard/参数组装未逐条走查 |
| dim2 后端 owner/伪代码 | partial | 171 个真实非截断反编译体存在；23.4% 身份已解析，76.6% 仅模块归属 |
| dim3 call-tree-to-leaf | not-closed | 未产出 |
| dim4 interface/DTO/error/side-effect | not-closed | 未产出 `interfaces/*.md` |
| dim5 同平台 platform gate | closed-for-existence，open-for-parity | Windows 证据独立产出（自有 IDB + 自有 IDA MCP host <host>），未从 macOS 外推；平台差异已输出（见 SYSTEM-DIFF.md） |
| dim6 test/acceptance mapping | not-closed | 未产出 |

## Frontend Control Flow

37 个 voice 命令均在 `ipc-contracts.jsonl` 中有 invoke 契约记录（命令名 + 参数 schema）。本 pass 未展开逐命令 UI 触发点/guard/preflight/参数组装走查（dim1 partial，非 closed）。前端 `voice-page-CV7DqakD.js` bundle 与 macOS 侧同名、结构类同，属跨平台共享资源，未在本 pass 深读组件树。

## Backend Control Flow / Pseudocode / Call-tree

171 个 raw `.c` 文件分布在 10 个目录（`commands/ida/pseudocode` 已命名 28 个、`codexmate_lib/ida/pseudocode` 已命名 3 个、`commands/voice` 未命名 2 个、`aliyun_asr` 62 个、`llm` 6 个、`runtime` 42 个、`tray` 2 个、`workspace` 21 个、`voice_trigger_windows` 4 个、`text_injection_windows` 1 个）。全部文件头部含 module-attribution 注释（`attributed via call-graph propagation` 或 `attributed via panic-Location xref`），确认为真实的模块归属工作（非伪造）。**未产出** call-tree-to-leaf 文档；131 个 sub_ 函数的个体身份未解析。

## Interface / Error / Boundary

未产出。无 `interfaces/*.md`。

## Gate Leaf Status

见 `gate-report.json`。模块整体 `consumerStartReady=false`（9 维起步门仅 3/9 闭合：renderSurfaceReady/uiCallEntryReady/platformScopeDeclared；`dtoBoundaryReady`/`boundaryPathReady`/`sideEffectReady`/`frontendConsumptionReady`/`acceptanceDraftReady` 全部 open，`happyPathReady` 仅 partial）。32 个命令记为 `owner_existence_mapped`（诊断级，非 gate 晋级）；5 个命令记为 `blocked`（无同名后端文件）。

## Diff 结论（RULE9）

**关键发现**：本模块前一版本同平台包 `windows-1.0.9-voice/` 结论为 34/34 命令 "accepted same-platform IDA-absence substitute"——即 AiMaMi 1.0.9 windows 上 voice **完全没有后端实现**，只是前端 UI 孤儿（`not_upstream_backend_parity=true`）。本次核实确认 1.2.3 windows 上**真实存在 171 个非空、非截断的 voice 域反编译函数体**，32/37 命令有 owner 存在证据。这是 **`diff_reversed`**（真实行为新增差异），**不是** `migrated_no_behavior_diff` 或 `unchanged_reused`——1.0.9 的 "IDA 缺失" 结论**不沿用**到 1.2.3，本包对 1.2.3 及之后独立生效。

## Unknown / Missing

见 `gate-report.json.unknowns`（6 项，含 2 个未命名候选缺口身份、131 个通用 sub_ 身份、6 个 macOS-only 子模块 Windows 零证据、"win 1.2.1" header 标注疑点、dim3/4/6 未产出、全文件内容未逐条复核）。

## Action / Non-action

- **Non-action**：不得基于本包宣称任何 voice 命令 `consumerStartReady=true`/`implementation_use=true`；不得用 macOS 证据外推本包未闭合的 Windows 维度；不得把 36/37 owner 映射当作 dim2 身份完全闭合证据（其中 4 个仍止步于业务委托层，未到 leaf）。
- **Action（下一步 producer）**：见 `data/task-plan.json.next_producer_steps`（131 个通用 sub_ 身份消歧、dim3/4/6 补齐、`cancel_voice_trigger_capture` 前端走查、4 个新解析命令的 raw leaf 文件落地、修复 "win 1.2.1" header 模板）。

## 2026-07-26 Update（reduce pass，续接本文档以上内容，不覆盖）

本包此前缺失 `logic/` 目录（空），本轮已补齐 `logic/REGISTRATION-TABLE-1.2.3.md`（37 命令完整注册表）+ `logic/FULL-CHAIN-1.2.3.md`（端到端调用链证据）。同时对已落盘证据做了独立重新核实，发现并修正：

- **raw 文件总数修正**：171 → **180**（`asr/` 3 个文件 + `models/` 2 个文件此前完全未纳入扫描，另有 4 个目录各少算 1 个文件）。
- **owner 覆盖修正**：32/37 → **36/37**——此前标记 `blocked` 的 5 个命令中 4 个（`resolve_voice_vocabulary_app_info`/`upsert_voice_vocabulary_app_scope`/`remove_voice_vocabulary_app_scope`/`set_voice_trigger_listener_suppressed`）其实是共享调度器 `commands/relay/ida/pseudocode/open_path_0x140194810.c` 内部的 case 分支，此前只扫 voice 专属目录未扫到；本轮通过 live IDA 只读 `decompile` 调用读出这 4 个地址已存在于 IDB 里的真实函数体和分析注释（非本轮新写入）。其中 2 个带明确破坏性副作用标注：`upsert_voice_vocabulary_app_scope`=持久化写、`remove_voice_vocabulary_app_scope`=删除数据。
- **`cancel_voice_trigger_capture` 仍未解决**，但本轮用 live IDA `find_regex` 对整个二进制字符串缓存做精确匹配加强确认（0 命中），排除了冷缓存假阴性的可能。
- **module 级 gate 档位未变**：仍是 `consumerStartReady=false`/`strictImplementationUse=false`/`readyToImplement=false`，本轮只提升了证据强度（dim2/dim3 部分/dim4 部分），未满足九维起步门全部闭合，不做档位跃升。

完整方法论、live IDA 调用记录、以及未闭合项清单见 `logic/FULL-CHAIN-1.2.3.md` §0/§5、`manifest.json.reduce_pass_2026_07_26`、`gate-report.json` 相应字段、`reviews/CLAUDE.md` 2026-07-26 addendum。
