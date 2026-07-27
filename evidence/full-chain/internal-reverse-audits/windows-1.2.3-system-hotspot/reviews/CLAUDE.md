# Claude 独立复核 — windows-1.2.3-system-hotspot

复核日期：2026-07-24
复核范围：本包自身产出（README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers）对照本会话直接 Read 到的 5 个 Windows `.c`（`has_notch`/`get_hotspot_enabled`/`set_hotspot_enabled`/`hotspot_ready`/`focus_main_window`）+ win-native 前端提取文件（`ipc-contracts.jsonl`/`query-hits.jsonl`/`frontend-contract-report.md`）+ win-native 原始 JS 资源（`index-B40jKs17.js`/`settings-page-B8vywarZ.js`/`accounts-page-GdJYDnGj.js`）+ 3 个交叉引用假阳性文件（`sub_140084C90.c`/`sub_140388D60.c`/`open_path.c`）+ 13 个 macOS-only 函数名的全树零命中核实的一致性。

## 采用（Accepted）

- 5/5 Windows 命令层函数真实命名、0 截断——直接 Read 全部 5 个文件核实，command-name string xref 为 ground-truth。
- 5 个前端 invoke 命令与后端同名函数 1:1 对应，`true_gaps=0`——本轮用 python3 精确 JSON 字段匹配对 win-native `ipc-contracts.jsonl` 核实（131 条命令中定位 5 条），非文本 grep 误报（初次尝试用纯文本 grep 时曾意外匹配到不相关的 `load_usage_analytics` 等行，已改用精确字段匹配纠正）。
- dim3 "weak，0/5 命令闭合到叶子" 判定——本轮主动核实的关键发现：5 个命令的 wrapper 本身虽已完整反编译，但真正的执行体全部委托给 5 个未命名的核心分发地址（`sub_140970DA0`/`14096F8D0`/`14096FB70`/`14096F460`/`14096F5D0`），逐一 `find -iname "*<addr>*"` 核实全树零命中——本包据此把 dim3 判定为"weak"而非借用 dim2（5/5 命令层真实命名）的乐观程度，未犯"函数已反编译"≈"call-tree 已闭合"的错误。
- 13 个 macOS-only 函数在 Windows 侧零证据——本包**本轮独立**执行了 `find`/`grep -rl` 全树核实（未直接照抄 macOS 姊妹包已有的同一结论），结果一致，交叉验证成立。
- `focus_main_window`/`hotspot_ready` 的胶囊条 onClick / 挂载副作用逐字模式——本包直接在 win-native `index-B40jKs17.js` 中 grep 核实到 `onClick:()=>Ee.focusMainWindow()` 与 `requestAnimationFrame(()=>{requestAnimationFrame(()=>{f||Ee.hotspotReady().catch(()=>{})})})`，与 macOS 姊妹包描述的行为一致，但是本包自己独立在 win 资源文件上核实到的，非转引。

## 自我纠正（Self-correction，同一会话内）

- **初次角度B（前端命令 diff）尝试用纯文本 `grep -i "has_notch\|get_hotspot_enabled\|..."` 对 `ipc-contracts.jsonl` 做匹配，结果异常匹配到大量不相关行**（如 `load_usage_analytics`）——复核时发现这是因为 grep 的多选 OR 模式在未加词边界的情况下对长 JSON 行做了意外的子串命中判断错误（实际原因是 shell 未正确转义/传参导致模式退化）。已改用 python3 `json.loads` 逐行解析 + `command` 字段精确等值匹配重新核实，得到干净的 5/5 精确命中结果，manifest.json/gate-report.json/pointers 均已采用精确匹配结果，未把污染过的初次 grep 输出留在任何结论文件中。
- **登记表初稿曾写"未在 win-native frontend-control-flow 提取中定位到独立的胶囊条组件树"（`focus_main_window` 一行）**——复核前的 `router-hits.jsonl`/`frontend-control-flow.jsonl`/`ast-facts.json` 三个提取文件确实零命中，但这只说明这 3 个特定提取产物没覆盖到这个具体交互点，不代表 win-native 证据集里完全没有。复核时追加直接对原始 JS 资源 `index-B40jKs17.js` grep，找到了逐字 `onClick:()=>Ee.focusMainWindow()`——已在 `logic/REGISTRATION-TABLE-1.2.3.md`/`logic/FULL-CHAIN-1.2.3.md`/README.md 三处同步修正为"本包直接核实到"，不再写成"未证实"。

## 驳回/降级（Rejected/Downgraded）

- 曾考虑直接把 macOS 姊妹包对 `focus_main_window` 闭包的解出结论（`WryUserEvent(28,focused=true)`）当作 Windows 侧 `sub_14096F5D0` 的合理外推——按红线 8/dim5（Windows 只证明 Windows，禁止用一个平台外推另一个平台）明确驳回，`AI.md`/README.md 的 `do_not_infer` 段落已显式写明禁止这一推断。
- `windows-1.0.9-system-hotspot` 包已达 `strictImplementationUse`，曾考虑是否可以把该档位"继承"给本包（同模块名、同产品）——复核后确认两者语义范围完全不同（1.0.9 是 WiFi 网络热点功能，1.2.3 是刘海悬浮窗 UI 开关，地址、owner 名、持久化 blob 描述均不同），按 RULE 9 `diff_required`（语义漂移即非同范围 no-behavior-diff）驳回继承，本包 gate 从零独立评估。
- `sub_140084C90.c` 中约 109 处 "hotspot" 字符串命中——初看数量大容易误判为"存在大量额外 hotspot 逻辑"，复核后确认是一个 `[HEXRAYS_DECOMPILE_FAILED: too big function]` 原始反汇编回退里的通用字段名/路由名匹配桩噪声（同一字符串在几乎等距的地址反复出现，是编译器生成的大 match-arm 结构特征），非 hotspot 专属逻辑，已在 manifest.json/pointers 中明确标注为确认假阳性，未升格为覆盖率数字。

## 仍 Unknown

- 5 个核心分发地址的实际行为——`class: blocks_start`，需要对这些地址跑新的 IDA `decompile`，非本轮蒸馏范围。
- `hotspot` 是否为 `CodexMateSettings` 自身字段名——`class: accepted_unknown`（diagnostic-only 新线索，字段边界/类型未独立验证），维持。
- 13 个 macOS-only 函数在 Windows 侧的存在/不存在——`class: accepted_unknown`（疑似合理的平台差异——Windows 无刘海硬件概念——但未证实），维持。
- 与 `windows-1.0.9-system-hotspot` 语义范围的产品层关系（是否已被取代/共存）——`class: product_decision`，非本轮范围。

## 复核方法

未连接 IDA，未做任何新反编译；本次是**蒸馏一致性复核**——把本包全部结论文件与本会话直接 Read/grep 过的 5 个 Windows `.c` + win-native 前端提取文件 + win-native 原始 JS 资源 + 3 个交叉引用假阳性文件逐条对照，主动发现并修正了 1 处角度B 方法论错误（纯文本 grep 误匹配，改用精确 JSON 字段匹配）、1 处登记表判定过早写"未证实"（复核时补充直接 grep 原始 JS 后发现确有证据）、驳回了 2 处可能的过度外推（把 macOS 闭包结论套用到 Windows 未反编译地址、把 1.0.9 不同语义范围的 gate 档位继承给本包）。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"），与 macOS 姊妹包同轮蒸馏的做法一致。
