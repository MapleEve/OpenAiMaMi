# WIN 1.2.3 strip 函数普查 — 把"10万"分母拆清

- product/version/platform: `aimami / 1.2.3 / windows-x64`
- binary: `AiMaMi.1.2.3 win64.exe`（idb `E:\binary\AiMaMi.1.2.3 win64.exe.i64`）
- IDA server: `<host>`（`server_health` 核验通过，`module` 匹配、`IDA decompiler_ready=true`，`auto_analysis_ready=true`）
- 方法：`IDA Python` 服务端跑一遍 `Functions()` 全量分类 + 从 relay owner-map 种子做调用图 BFS 可达性，结果写盘到 `_census/census_result.json`（避免 MCP 大 payload 截断），仅摘要经 stdout 核对。脚本：`_census/win_census.py`，种子：`_census/seeds.json`（200 条，来自 `relay-core/owner-map.jsonl` 177 + `commands/relay/owner-map.jsonl` 23，去重后 200）。
- 用时：分类扫描 67.06s + BFS 5.56s，总 72.62s。

---

## 1. 实测数字（`Functions()` 全量遍历，非自报）

| 桶 | 数量 | 占 win_total |
|---|---|---|
| **win_total**（`idautils.Functions()` 总数） | **103,358** | 100% |
| 已命名（非 sub_/nullsub_，且不带 `FUNC_THUNK` 标志） | 392 | 0.38% |
| thunk/import wrapper（`FUNC_THUNK` 标志 或 `j_` 前缀） | 694 | 0.67% |
| drop_in_place 形状编译器析构桩（结构启发式，见下） | 564 | 0.55% |
| **其余 sub_（未分类候选池）** | **101,708** | **98.40%** |
| （交叉标签）FLIRT 库函数标志 `FUNC_LIB` | 7 | 0.007% |
| 从 relay owner-map 种子调用图可达 | 8,839 | 8.55% |
| 磁盘已逆（背景给定，本轮未重新验证） | 288 | 0.28% |

**分类优先级**（互斥穷尽，覆盖全部 103,358）：
1. `FUNC_THUNK` 标志 或 名字 `j_` 前缀 → **thunk**（694）
2. 否则名字不匹配 `^(sub_|nullsub_)[0-9A-Fa-f]+$` → **已命名**（392）
3. 否则（`sub_`/`nullsub_` 形态）跑结构启发式：
   - `nullsub_` 前缀（IDA 已判定的纯空函数/立即 ret）→ 恒计入 drop_glue_shaped
   - 否则 `n_insns<=40` 且零条件跳转且 `n_calls>=1` 且 `call/insn 比例>=0.15` 且非 `FUNC_LIB` → drop_glue_shaped（结构近似 Rust 编译器 drop_in_place/析构链，因为 strip 后没有符号可以直接按名字认）
   - 否则 → **remaining_sub**（101,708，本轮定义的"真候选池"）

`FUNC_LIB`（FLIRT 静态库签名识别）只命中 7 个（`start`/`__alloca_probe`/`__report_gsfailure`/`__report_rangecheckfailure`/`__GSHandlerCheck`/`__security_check_cookie`/`RtlFailFast` —— 全是 CRT 启动/安全检查桩）。**这条线基本失效**：AiMaMi 静态链接的 Rust std/alloc/core/CRT 代码不匹配通用 FLIRT 签名库，所以不能拿它当"纯 std/CRT 库"的排除依据。

---

## 2. 和背景给定数字的对账（不是漏了，是分类口径差）

背景给的"已命名 522"和本轮**按名字模式**（不管 thunk 标志）单独核查得到的 **525** 基本一致（小差可能是版本/时点差）。但本次分类把 `FUNC_THUNK` 标志判定放在"是否已命名"之前——525 个有真名的函数里有 **133 个同时带 `FUNC_THUNK` 标志**（典型例子：`memcpy`/`malloc` 这类已解析的 CRT import wrapper，本质是跳转桩而非业务函数），这 133 个被计入 thunk 桶而非"已命名"桶，剩 525−133=**392**，与本轮"已命名"桶精确对上。**不是漏算，是把"有真名但结构上是 thunk"的函数归到了更准确的 thunk 类目。**

---

## 3. 可达性：relay 锚点能摸到多少

从 `relay-core/owner-map.jsonl`（177）+ `commands/relay/owner-map.jsonl`（23）共 200 个已知 relay owner 地址出发，做调用图 BFS（边 = 直接 `call` + 落在另一函数起始地址的尾调用 `jmp`），**闭包可达 8,839 个函数**（占 win_total 8.55%）。

**这是上界，不是下界**：BFS 闭包会把 relay 代码调用到的共享 runtime/std/alloc 函数也算进来——这些函数同时被其它非 relay 子系统调用，不是 relay 专属逻辑。8,839 只说明"relay 子系统这棵调用树摸多深"，不能直接当"relay 专属函数数"用。

---

## 4. 真实结论：10 万里编译器 glue/库占多少，真 App 候选量级是多少

**结构启发式能干净分离出去的只占极小头**：已命名(392) + thunk(694) + drop_glue_shaped(564) = **1,650 个，仅占 win_total 的 1.60%**。剩下 **101,708 个（98.40%）仍是未分类的 `sub_` 池**——这不是"10 万里绝大部分是编译器 glue 没有业务体"的结论，恰恰相反：**光靠结构启发式（尺寸/条件跳转/call 比例）在 strip 二进制上，几乎分不出"胶水 vs 业务"，因为两者结构上都可能是"几条 call + 几个分支"**。

对照 mac 侧（有符号）的同类测量：mac 1.2.2 侧用 **符号命名空间**（`codexmate_lib::` 前缀 vs 泛型/serde glue 混入 `codexmate` 的单态化桩）能干净排除 **2393/3875 = 61.7%** 的 std/serde glue，只留 1482 个真 App 函数。Win strip **没有符号名可比对**，所以本轮的 `drop_glue_shaped`（564）远远小于这个比例——它只抓到了"结构上非常干净的空析构/短调用链"，抓不到大量**没有条件跳转但函数体不小的单态化 std/alloc/core 泛型实例**（这类在 mac 侧才是大头）。

**因此本轮唯一诚实的结论是**：
- **不能**用"总数 − 已知 glue 类目"直接得出"App 候选量级"——101,708 这个 `remaining_sub` 数字**本身就是"未分类池"，不是"App 业务池"**，里面混杂了真 App 逻辑和大量因 strip 而无法结构性剔除的 std/alloc/core/泛型单态化代码。
- **真正能把候选池砍到 App 量级**，需要 `references/ida-dirtree-module-recovery.md §3` 的 win-native 三层模块归属恢复法（panic-Location 源码路径两跳 xref → 严格调用图传播 → tauri 命令名精确命名）**在全二进制尺度上跑一遍**，而不是像已有的 relay 簇那样只做局部（288 个）。目前只对 relay-core(177)+commands/relay(23) 两处做过局部 owner-map，尚未对全 103,358 做过这套三层恢复。
- 如果 mac 侧 61.7% 的 glue 占比可以作为**类比参考**（非实测），对 101,708 做同比例折算，量级上大致是"几万级"而非"十万级"——但这只是**类比外推，不是本轮实测结果**，不能写进任何 gate 结论或作为实现依据。

**一句话**：10 万分母里，编译器/CRT 胶水**目前可确认剔除的只有 1.6%**；剩下 98.4% 仍需要（而非可以跳过）**全量的 win-native 模块归属恢复**才能拆出真 App 业务函数量级；relay 子系统调用图可达 8,839（8.6%），这是 relay 触达面的上界，不是 relay 专属函数数。

---

## 5. 制品

- `_census/win_census.py`：IDAPython 分类+BFS 脚本（server-side 全跑完，只回摘要）
- `_census/seeds.json`：200 条 relay owner-map 种子地址
- `_census/census_result.json`：完整结果（含各桶前 40 条抽样，供 spot-check）
- `WIN-RECON-CENSUS.jsonl`：本文件的机器可读摘要行
- 本文件：`WIN-RECON-CENSUS.md`

## 6. 未做的事 / 限制

- 未对 101,708 remaining_sub 做逐函数 module 归属（那是下一步全量 win-native 三层恢复的工作量，不在本次census scope）。
- `drop_glue_shaped` 阈值（`n_insns<=40`、`call比例>=0.15`、零条件跳转）是本轮定义的启发式，未做参数敏感性分析；换阈值数字会变，但量级结论（"结构启发式只能剔除个位数百分比"）预期稳健。
- `reachable_from_relay_anchors` 的调用图边只统计 `CodeRefsFrom(insn,0)` 落在函数起点的情况，未特别处理间接调用/vtable 动态分发（这类边在 strip 二进制上本身就难静态枚举），因此 8,839 可能低估了通过动态分发到达的函数。
