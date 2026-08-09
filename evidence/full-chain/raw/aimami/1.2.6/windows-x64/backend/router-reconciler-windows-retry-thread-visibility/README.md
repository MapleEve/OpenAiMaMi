# AiMaMi 1.2.6 windows-x64 — router_reconciler 三层恢复法(红线24)结果 + Round2 遗留目标裁定

## 人话结论

上一轮(2026-08-06)对 changelog-item-1(Windows 智能路由 + 线程可见性/重试兼容修复)的 windows-x64 侧 7 个目标符号是 **0/7 完全未定位**（stripped 构建）。第二轮(2026-08-06 晚)按红线24三层恢复法拿下 5/7。本轮(2026-08-07, Round2) 专项裁定剩余 2 个遗留目标：

1. **`reconcile_threads_with_progress` 身份争议 —— 已裁定确认**：Windows 侧地址 `0x1405E0390`。裁定依据是调用图证据（该函数是 `reconcile_router_on` 与 `reconcile_native_off_with_progress` 两个已确认顶层入口函数的共同直接 callee），而非体积匹配（体积匹配的候选 `0x1406FABE0` 经深挖调用图后确认与 router_reconciler 簇完全断链，属于另一条无关命令调用链，已排除）。
2. **`RouterToggleProgress::serialize` —— 未能定位为独立符号，但已 grounded 确认其 DTO 字段形状与序列化调用点**：反查 progress 回调 vtable 分派路径 + 字段名字符串反查，确认了 Tauri 事件名 `codex-router-toggle-progress`、DTO 六字段（target/phase/startedAtMs/updatedAtMs/reason/occurredAtMs），以及序列化逻辑被内联进一个跨多个 progress DTO 共用的通用 journal 持久化函数（`0x140BFB190`），并非 RouterToggleProgress 专属独立 `::serialize` 符号。诚实标注为 `not_present_fully_inlined_shared_helper`，不编造独立地址。

## 架构解释

- **为什么调用图证据比体积匹配更可靠**：体积匹配容易被同源码文件内多个函数的相似字节码规模误导（尤其是 Windows release 构建对齐/内联策略与 mac 不同）。而"该函数是否被两个已经独立确认身份的顶层入口函数直接调用"是结构性事实，不依赖对反编译内容的主观解读，抗噪能力更强。本轮通过 `basic_blocks()` 逐块统计（`0x1405E0390`=150 blocks/4195B，`0x1406FABE0`=217 blocks/5221B）与 `callees()`/`xrefs_to()` 双向调用图交叉验证，最终以「双重顶层入口共同直接调用」这一更强信号裁定身份，推翻了上一轮仅凭体积相近给出的候选优先级。
- **为什么 RouterToggleProgress::serialize 没有独立符号**：Rust 编译器在优化构建下，如果一个 trait 方法（如 `derive(Serialize)` 生成的 `serialize` 方法）只在单一调用点被使用，通常会被完全内联进调用者，不产生独立可链接符号。这与本轮同时确认的 `run_config_mutation_with_windows_retry`（也是完全内联进 `reconcile_router_on`）是同一类现象。本轮定位到的 `0x140BFB190` 是一个更高层的「构造 JSON + 写入 journal 文件」函数，RouterToggleProgress 的序列化字段写入逻辑就内嵌在其中，但因为该函数被 3 个跨命令的大型分发器共调用 13 次以上，判断它是被多个具有相同字段形状 DTO 共用的通用 helper，而不是 RouterToggleProgress 独占的编译产物。

## 技术证据（详见 manifest.json functions[].resolution_round2）

| 目标 | Round2 结果 | 置信度 |
|---|---|---|
| `reconcile_threads_with_progress` | `0x1405E0390`（已改名/归 `codexmate_lib/core/relay/codex_thread_visibility/` 目录树/加注释/<工具调用> 确认） | confirmed |
| `RouterToggleProgress::serialize` | 无独立符号；序列化逻辑内联于 `0x140BFB190`（跨 DTO 共享 helper，被 `sub_1409658F0`/`sub_14096C8D0`/`sub_140972CA0` 三个多命令分发器共调用 13+ 次）；事件名/字段形状已 grounded 确认 | not_present_fully_inlined_shared_helper |

### reconcile_threads_with_progress 裁定链

1. `xrefs_to(0x1406fabe0)` → 唯一调用者 `sub_1405B5E30`(0x1405B5E30)
2. `xrefs_to(0x1405b5e30)` → 调用者 `sub_1405B8B10`(24116B) / `sub_1405CBF60`(25193B)
3. `callees(0x140aa86e0)` 与 `callees(0x140b50ea0)`（两个已确认顶层入口）均**不含** `sub_1405B8B10`/`sub_1405CBF60`/`sub_1405B5E30`/`0x1406fabe0`
4. `callees(0x1405b8b10)`/`callees(0x1405cbf60)` 均**不含** `reconcile_router_on`/`reconcile_native_off_with_progress`/`append_thread_reconcile_warnings`（router_reconciler 簇已知成员）
5. `xrefs_to(sub_1405B8B10)`/`xrefs_to(sub_1405CBF60)` 继续上溯得 `sub_14059D830→sub_1405C49F0→sub_1409658F0→sub_1409A6E10→sub_1409AEFB0` —— 完全独立的另一条命令调用链
6. 反之，`callees(0x140aa86e0)` 与 `callees(0x140b50ea0)` **均直接包含** `0x1405e0390`
7. 反编译内容交叉核对：`0x1406FABE0`（cand-E）逐线程构造 `threadId`/`provider`/`reasoningEffort`(x2)/`originalRollout`/`originalDbRows` 序列化记录，与 mac 侧 `reconcile_threads_with_progress` 已记录的真实行为（`repair_missing_rollouts_for_convergence`/`converge_threads_to_provider`/`rayon_core::registry` 阈值7并发清理/`cleanup_private_reasoning_items_in_existing_rollout`）完全不符

### RouterToggleProgress::serialize 反查链

1. `reconcile_router_on` 反编译内容中确认 `a6`/`a7` 是一个 `Fn(&str)` 风格 fat-pointer 闭包（vtable 槽在 `a7+32`），仅传入阶段名字符串（"starting proxy"/"preparing auth"/"writing config"）
2. `find_regex('RouterToggleProgress')` 无命中（release 剥离类型名，预期内）；`find_regex('phase|thread_visibility\.rs')` 命中 6 处，含 `codex-router-toggle-progress`(Tauri 事件名，28B) 与两处 `phase` 字符串
3. `xrefs_to('codex-router-toggle-progress')` → 两个仅被数据(vtable)引用的微型函数 `0x140944320`(273B)/`0x14094CB60`(312B)，调用模式与 `a7+32` 闭包槽完全吻合
4. `xrefs_to('phase')` → `0x140BA0B20`(486B)/`0x140BA0D80`(406B)（确认为 deserialize 侧字段匹配器，非 serialize）+ `0x140BF9550`(3284B)/`0x140BFB190`(1835B，序列化+journal 持久化)
5. 反编译 `0x140BFB190` 确认 JSON 序列化逻辑（写 `{` + 逐字段 `serialize_field` 调用链，字段名/长度与共享字符串块 `"targetphasestartedAtMsupdatedAtMsreasonoccurredAtMs"` 完全对应），最终经 `sub_141543AF0` 完成结构体构造，写入 `router-transition-journal.json`/`router-events.jsonl`
6. `xrefs_to(0x140bfb190)` → 被 `sub_1409658F0`/`sub_14096C8D0`/`sub_140972CA0`（各 18-20KB 多命令异步分发器）共调用 13+ 次，确认为跨 DTO 共享 helper

完整调用链、体积对比、逐项 recovery_attempts 见 `manifest.json`；本轮新增 5 份完整反编译伪代码见 `pseudocode/round2-cand-{H,I,J,K,L}-*.c`（均为直接 IDAPython `str(ida_<反编译器>.decompile(...))` 落盘，无截断标记）。

## 已在 Windows IDB 完成的写回操作（本轮 Round2）

- 改名 1 个函数：`0x1405e0390` → `reconcile_threads_with_progress`（真实 Rust 语义名，非 `sub_XXX`）
- 归入 IDA function folder 目录树：`/codexmate_lib/core/relay/codex_thread_visibility/reconcile_threads_with_progress`
- 局部变量改名：`a1`→`sret_reconcile_result`，`a2`→`ctx_and_progress_handle`
- 7 个函数（`0x1405e0390`/`0x1406fabe0`/`0x140bfb190`/`0x140944320`/`0x14094cb60`/`0x140ba0b20`/`0x140ba0d80`）均加了详细中文注释，记录裁定依据/排除理由/局限
- `<工具调用>()` 执行 2 次，均返回 `{"ok":true,"path":"<二进制路径>\\AiMaMi 1.2.6 win64.exe.i64"}`
- 未对 `0x1406FABE0`/`0x140BFB190`/`0x140944320`/`0x14094CB60`/`0x140BA0B20`/`0x140BA0D80` 做改名（均为共享 helper 或身份未 100% 确认独占，避免用错误猜测的功能名污染 IDB）

## 局限（如实列出，非回避）

- `0x1406FABE0` 的真实身份仍未确定（已排除作为 `reconcile_threads_with_progress`，但其真实所属命令/模块未在本轮范围内展开），留待后续专项工作单。
- `RouterToggleProgress::serialize` 无法定位为独立、专属的符号地址；只能确认其序列化逻辑内联位置与 DTO 字段形状。如消费侧需要精确 field-to-JSON 映射用于自实现，可直接引用 `round2-cand-H` 证据（字段顺序已 grounded 确认），无需进一步逆向。
- 反查过程中曾遇到 IDA MCP 2 次 `server_health`/`search_text` 超时（红线17 <门控>），已按规范重试 1 次并改用 `<工具调用>()`/`find_regex()` 验活成功后继续，未在不确定状态下产出结论。
- 未与真实 Windows 客户端做参照运行对照（红线25：本轮仅静态反编译分析，未对照）。
- 本文档/manifest 不改变任何实现门（`implementation_use`/`gate_accepted`/`strictImplementationUse`/`readyToImplement` 均为 `false`）。

## Round3 (2026-08-07) 追加：递归函数展开 + 孤儿0x1406FABE0模块级裁定

承接round2遗留的两项工作：
1. **4个下一层递归函数展开**：mac双端全部4/4完整反编译（`reconcile_inner`/`config_takeover::takeover`/`codex_project_state::repair_if_needed`/`router_unlock_auth::commit_auth_for_router`），win侧3/4确认改名归目录（`reconcile_inner`/`config_takeover_takeover`/`commit_auth_for_router`），1/4诚实标记`gap_needs_reducer`（`repair_if_needed`，已排除2个体积相近的错误候选）。
2. **孤儿`0x1406FABE0`裁定**：从"已排除但真实身份未知"推进到"模块级确认"——归属`codexmate_lib::core::relay::codex_diagnostic::orphan_thread_adoption`功能族（与item1无关的独立特性），证据链见`pseudocode/round3-orphan-1406fabe0-module-id.md`。因未达1:1函数级精确匹配，未做改名，仅加注释。

详细证据见`manifest.json`的`round3_2026_08_07`字段与`pseudocode/round3-*.c`。win/mac IDB均已`<工具调用>()`确认落盘。门禁状态不变：`implementation_use=false`，`gate_accepted=false`。

## Round4 (2026-08-07) 追加：`repair_if_needed`(win) 调用图深挖 + 孤儿`0x1406FABE0` family 全字段核对

承接round3遗留的两项"本轮未做"：
1. **`codex_project_state::repair_if_needed`(win) 调用图深挖**：枚举`reconcile_router_on`全部47个直接callee，逐一排查体积相近候选，新发现并排除2个候选（`sub_140A9F870`=通用join工具函数、`sub_1405D7DD0`=当时误判为"reconcile_threads_with_progress重试包装器"）。**如实标注`gap_needs_reducer`**（非`genuine_ceiling`，因未发现ICF折叠碰撞对象）。
2. **孤儿`0x1406FABE0` family 全字段核对**：mac侧全部6个具名`orphan_thread_adoption`函数+1个额外强相关候选共7个函数全文本核对，均0字段命中。**如实标注`blocked`**（非`genuine_ceiling`）。

详细证据见`manifest.json`（无独立round4顶层字段，并入round3记录旁的producer-ledger）与`pseudocode/round4-repair_if_needed-callgraph-exhaustion-and-orphan-1406fabe0-7cand-exclusion.md`。win/mac IDB均已`<工具调用>()`确认落盘。门禁状态不变。

## Round5 (2026-08-07) 追加：`repair_if_needed`(win) 破墙定位成功——纠正round3/round4的错误排除

**人话结论**：round3/round4曾两次反编译`sub_1405D7DD0`（体积1456B）并排除它，理由仅是"函数体内两次调用`reconcile_threads_with_progress`，判定为重试包装器"，但没有核对函数体里内嵌的具体错误提示文字。这一轮先看mac侧`repair_if_needed`反编译体里两句提示语的原文（"Codex project index cannot be repaired safely: "和"Codex project index is still unstable after repair: "），拿这两句话去win二进制里精确搜索，结果发现**唯一命中的函数就是`sub_1405D7DD0`**——和之前被排除的地址完全一样。这说明前两轮的排除是看错了，不是这个函数真的无关，而是分析深度不够、只看了表面调用模式没查字符串。

**架构解释**：为什么"两次调用同一个函数"这个表面信号会误导判断——因为`repair_if_needed`的逻辑本身就是"检查一次、如果不稳定就修复、修复后再检查一次确认"，这个"检查两次"的结构和"重试包装器"的"失败后重试一次"结构在反编译伪代码的骨架层面长得很像（都是：调用A → 判断结果 → 条件性调用B → 再判断），必须往下看字符串字面量或者更细的分支语义才能分辨，光看"调用了几次谁"分不清楚。这也是为什么本轮改用字符串反查而不是继续枚举更多候选——**候选池（1跳直接callee）本身从一开始就是够的，真解就在里面，缺的是核对深度**。

**技术证据**：
1. `find_regex`精确字符串匹配：mac侧repair_if_needed内嵌的两个格式化错误模板，在win二进制里各只有1处命中，`xrefs_to`确认唯一引用函数均为`sub_1405D7DD0`。
2. 内联字面量逐字节交叉核对：函数"无issue"分支内联构造的39字节字符串（"Codex 项目索引正常，无需修复"），与mac侧repair_if_needed同分支的39字节字面量逐字节100%一致（含拼接手法：4个qword+1个尾部重叠qword的编译器标准套路）。
3. 调用图交叉验证：`sub_1405D7DD0`是`reconcile_router_on`与`reconcile_native_off_with_progress`共同的直接callee，与mac侧repair_if_needed的两个已知调用点完全对应。
4. panic-Location两跳xref法（独立第三条证据链）：其callee`repair()`(原`sub_1405DC220`)内嵌2处Location结构体指向源文件`src\core\relay\codex_project_state.rs`，与前两条证据独立交叉印证模块归属。

**结论**：`codex_project_state::repair_if_needed`（win）= `0x1405D7DD0`，**confidence从`gap_needs_reducer`更新为`confirmed`**。已改名`repair_if_needed`/`stability_issue`/`repair`三个函数，归入`/codexmate_lib/core/relay/codex_project_state/`目录树，加中文注释，`<工具调用>()`确认落盘。

**遗留开放问题**（如实列出，非回避）：`0x1405e0390`（round2命名`reconcile_threads_with_progress`）在`repair_if_needed`内部的调用位置与mac侧`inspect()`调用位置结构完全同构，身份存疑（可能ICF共享或round2判定需要重新核实），本轮未展开验证，不影响repair_if_needed自身定位结论（结论不依赖`0x1405e0390`的身份判定，同时被三条互相独立的证据链支持）。

详细证据见`manifest.json`的`round5_2026_08_07`字段、`pseudocode/round5-repair_if_needed-win-0x1405d7dd0-string-match.md`、`producer-ledger.wf-item1-router-reconciler-windows-round5-20260807.json`。win IDB已`<工具调用>()`确认落盘（mac本轮只读，未写）。门禁状态不变：`implementation_use=false`，`gate_accepted=false`。

## Round6 (2026-08-07) 追加：孤儿 `0x1406FABE0` 真实身份定位（win侧真实证据，但对抗核验判定仍为 `gap_needs_reducer`——mac侧未独立核实）

**人话结论**：本轮找到了孤儿`0x1406FABE0`一个真实、有证据支撑的mac对应体——**win `0x1406FABE0` = mac `<Map<I,F> as Iterator>::fold::hccb4f8d48c346002` @ `0x100805510`**（`codexmate_lib::core::relay::codex_diagnostic`模块），是`write_orphan_thread_adoption_recovery`内部逐行把orphan-thread行数据转成`serde_json::Value`的闭包体。它的直接调用者win `sub_1405B5E30`已确认对应mac `write_orphan_thread_adoption_recovery`@`0x100b263d0`（7/7个信封字段常量字节级精确匹配）。用了两条独立方法同时收敛到这个答案：①**字段内容比对**——反编译该函数体，逐个解码内嵌字面量常量，与目标函数的6个字段名（`threadId`/`provider`/`rolloutPath`/`originalRollout`/`reasoningEffort`/`originalDbRows`）逐字节精确匹配；②**调用图位置比对**——反查其唯一调用者，与mac侧对应调用者的内部调用链交叉核对。

**独立对抗核验（win侧技术证据真实，但收尾质量不合格 + mac侧零覆盖，整体判定 `gap_needs_reducer`，非真实confirmed）**：核验者独立`decompile()`两个win函数，逐一核对6/6字段+7/7字段字节级匹配，确认技术证据真实可复现、非造假；`<工具调用>()`的磁盘时间戳也证明确有一次真实落盘。但发现两处需要打回修正的失实描述：

1. **`0x1406FABE0`函数头上遗留一条陈旧的、自相矛盾的non-repeatable注释**——那是round2时代写的"未改名，标记gap_needs_reducer"旧结论，与本轮已完成的rename+repeatable新结论直接矛盾。用标准`decompile()`查看该函数的人会先看到这条矛盾的旧注释，被误导。**本轮（closure）已清除该陈旧注释**，替换为指向repeatable注释（真实结论）的说明文字，`<工具调用>()`确认落盘，独立`<工具调用>`复读确认修复生效。
2. **"已归入dirtree与既有8函数同目录"的说法为夸大**——`/codexmate_lib/core/relay/codex_diagnostic/`目录实际只有**3个**函数（`check_native_off_invalid_openai_thread_models`/`write_orphan_thread_adoption_recovery`/`orphan_thread_adoption_row_to_json_MAPFOLD`），真正的既有函数只有1个。**本轮已在manifest.json中如实订正该数字**，不再沿用"8个"的错误表述。
3. **mac侧全部声称本轮完全未独立核实**——本轮环境只加载了win IDA MCP工具，没有mac IDA访问权限，因此mac侧对应函数内容、mac侧rename/注释/`<工具调用>()`是否真实执行，均**仅是单方自述，未经独立核验**。这是诚实缺口，不是回避——如实标注为待办。

**裁定：`gap_needs_reducer`（非真实confirmed，非genuine_ceiling）**。win侧字段级证据链真实可信，但不满足"真实confirmed"应有的双端可核验标准；`genuine_ceiling=false`——不是天花板，是"找到了真实候选但本轮未能完成双端核验闭环"。

**IDB写回（win侧）**：`rename`2个函数（`0x1406FABE0`→`orphan_thread_adoption_row_to_json_MAPFOLD`、`0x1405B5E30`→`write_orphan_thread_adoption_recovery`）；`dirtree_move`归入`/codexmate_lib/core/relay/codex_diagnostic/`；`set_func_cmt`写入含证据链的repeatable注释；本轮（closure）额外清除了`0x1406FABE0`上的陈旧non-repeatable注释；`<工具调用>()`执行2次均成功（`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`）。

**如实留待的下一步**（非回避，明确的后续排查方向）：
- 起一个能连到mac IDA实例的核验轮次，独立`decompile(0x100805510)`/`decompile(0x100b263d0)`，核对mac侧是否真含相同的6个字段常量与7个信封字段常量；
- 核实mac侧rename/注释/`<工具调用>()`时间戳是否真实执行；
- 确认后方可将本条目从`gap_needs_reducer`提升为`confirmed`。

详细证据见`manifest.json`的`round6_2026_08_07`字段、`producer-ledger.wf-item1-router-reconciler-windows-round6-20260807.json`。门禁状态不变：`implementation_use=false`，`gate_accepted=false`。
