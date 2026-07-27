# FULL-CHAIN — AiMaMi 1.2.3 home-usage-frontend (Cross-Platform Synthesis)

本文件是**写代码/复刻依据**的跨平台合成层。它不重新逆向，只把两个现已落地的单平台 canonical 包
（`audits/macos-1.2.3-home-usage-frontend/logic/FULL-CHAIN-1.2.3.md` + `audits/windows-1.2.3-home-usage-frontend/logic/FULL-CHAIN-1.2.3.md`）
与四个 cross-reference 后端归属包（`macos/windows-1.2.3-sessions-analytics`、`macos/windows-1.2.3-relay`、
`macos/windows-1.2.3-accounts`、`macos-1.2.3-bootstrap` + `windows-1.2.3-daemon-autoswitch`、`windows-1.2.3-system-usage`、
`macos/windows-1.2.3-mcp`）**读盘归并**成一份跨平台合成结论。所有原始事实来自上述包已落盘的 README/AI/manifest/gate-report，
本文件不产出新的 IDA 证据。

produced_by: <host>
session: cross-1.2.3-home-usage-frontend-synthesis-reduce-20260726
produced_at: 2026-07-26
authoritative: true（跨平台合成结论层；不覆盖任一单平台包的 authoritative 状态）
gate_accepted: false
implementation_use: false

---

## 0. 本次合成回答了什么

原 2026-07-25 版本（`cross-1.2.3-home-usage-frontend-synthesis-20260725`）诚实记录了一个依赖缺口：
`audits/macos-1.2.3-home-usage-frontend/` 与 `audits/windows-1.2.3-home-usage-frontend/` 两个 canonical 单平台包**均不存在**，
因此当时改走「直接从 raw 蒸馏」的过渡路径。

**2026-07-26 两个单平台包均已落地**（`macos-1.2.3-home-usage-frontend-reduce-20260726` + `windows-1.2.3-home-usage-frontend-reduce-20260726`），
本次合成按 `README.md`（原文件“为什么没有走「合成两个 canonical 包」的标准路径”一节承诺的路径）**改走标准合成路径**：
读两个单平台包 + 交叉引用其余五个已落地的相关模块包，产出本合成层。

---

## 1. 本模块 canonical 命令 universe（10 个，RULE 8a 单 owner 纪律对齐 macOS 包定义）

前端命令面（`usage|analytics|snapshot|bootstrap` 关键词过滤）mac/win `ipc-contracts.jsonl` 逐字节相同，共 **13** 个命令。
其中 **3 个**命令虽在 home Dashboard 渲染树中出现，但真实 backend owner 属于其他模块（RULE 8a），**排除**在本模块
`covered_commands` 之外：`load_mcp_servers`（mcp 模块）、`set_usage_refresh_interval`（system-usage 模块）、
`refresh_single_account_usage`（accounts 模块）。

> **已知的跨包 scope 定义不一致（如实记录，非本次合成权限内可修正）**：`windows-1.2.3-home-usage-frontend/manifest.json`
> 的 `scope.targets` 仍列出全部 13 个命令（未做 RULE 8a 排除），与 `macos-1.2.3-home-usage-frontend` 的 10-in-scope 定义不一致。
> 本合成层采用 macOS 包的 10-in-scope 定义为本模块 canonical scope（与 RULE 8a 单 owner 纪律一致），并把这处不一致列入
> §5 Unknown/Residuals，留给后续 owner-reconciliation session 处理（非 EXPLICIT_REASSIGN_OWNER 不得改任一 sibling 包内容）。

本模块 10-in-scope 命令：`load_bootstrap_state`、`load_snapshot`、`load_usage_analytics`、`load_session_analytics`、
`load_token_analytics`、`load_tool_analytics`、`load_change_analytics`、`load_quota_history`、`refresh_usage_snapshot`、
`get_usage_refresh_interval`。

---

## 2. dim1（前端控制流 + UI/state）—— 双平台对照

| 命令 | macOS dim1 | Windows dim1 |
|---|---|---|
| load_usage_analytics | **Accepted**（`At` activity tab，`useQuery` staleTime Infinity） | Accepted-command-level-only（`re("load_usage_analytics")`, wrapper `loadUsageAnalytics`, 无页面级组件树） |
| load_session_analytics / load_token_analytics / load_tool_analytics / load_change_analytics | **Accepted**（`Lt` AnalyticsPanel 5-tab `useQuery` 表，`range` 参数） | Accepted-command-level-only（各自 wrapper + `argKeys=range`） |
| load_quota_history | **Accepted**（quota tab，`accountKey` guard + 最小样本量 gating） | Accepted-command-level-only（wrapper `loadQuotaHistory`, `argKeys=accountKey`） |
| load_snapshot | **Accepted**（共享 `E2()` hook，Dashboard `BH`/`KH` 消费；字面 invoke 名 accepted_unknown） | Accepted-command-level-only（wrapper `loadSnapshot`, `argKeys={localOnly,forceMetadata}`, in-flight-dedup preflight guard） |
| refresh_usage_snapshot | **Accepted**（`BH()` 刷新按钮，800/1600ms 退避重试） | Accepted-command-level-only（`re("refresh_usage_snapshot")`, 无 guard 捕获） |
| load_bootstrap_state | **Missing**（两份 mac page reduce 未定位触发点） | Accepted-command-level-only（`re("load_bootstrap_state")`, 无参） |
| get_usage_refresh_interval | **Partial**（消费 hook `cU()` 定位，设置控件出模块范围） | Accepted-command-level-only（`re("get_usage_refresh_interval")`, 无参） |

**结论**：macOS dim1 在 8/10 命令上达组件级（component/route/state/交互→命令映射齐全）；Windows dim1 在全部 10/10 命令上
只有 **minified-static 层**（wrapper/argKeys/invoke 别名/source chunk/部分 guard），**没有**页面级组件树 reduce
（renderSurfaceReady 不闭合）。这是**证据深度不对称**，不是产品行为差异——不得据此推断 Windows UI 层与 macOS 相同或不同
（`doNotInferWindowsFromMacOS`）。

**Windows dim1 潜在低成本闭合路径（假设，未验证，供下一 producer 参考）**：`windows-1.2.3-accounts` 已验证
`accounts-page-GdJYDnGj.js` 在 mac raw dump 与 win tauri-dumped-assets 之间 SHA-256 **逐字节相同**
（`09336d32548087c04de52882ad2b37d9236a26678e7b53483bd1dd22c3d10c55`），因而可以把 mac 的 AccountsPage 页面级 reduce
**作为「proven byte-identical artifact」直接复用**为 Windows 证据（非外推，是同一份字节的独立验证）。本模块的核心
shell chunk `index-B40jKs17.js` 与 lazy chunk `analytics-panel-6jtfGEeX.js` **本次合成未做 SHA-256 校验**——如果这两个
chunk 在 mac/win 之间也逐字节相同，Windows 页面级 render-surface 可以用同样的「proven-artifact 复用」手法直接闭合，
而不必对 win 的 minified JS 重新做一次人工页面 reduce。这是一个**假设**，未验证，列入 §6 next_producer_steps 第一项。

---

## 3. dim2（后端 owner + pseudocode）—— 跨包 cross-reference（本模块自身不产出新证据）

本模块（home-usage-frontend）自身**从未**跑过 IDA session，dim2 对本模块的 10 个命令始终是 Unknown（两个单平台包各自
如实记录了这一点）。但 rust-reverse-cookbook §1 角度 D 的孤儿四分类要求：在声明 `truly_undone` 前，先查其余 canonical
包是否已覆盖同名命令。逐条核查结果如下（全部为**读盘核对**，未新跑 IDA，未复制原始伪代码，只作 pointer 引用）：

| 命令 | macOS dim2 归属 | macOS 该包状态 | Windows dim2 归属 | Windows 该包状态 |
|---|---|---|---|---|
| load_usage_analytics / load_session_analytics / load_token_analytics / load_tool_analytics / load_change_analytics | `macos-1.2.3-sessions-analytics`（`core::session_analytics::compute_*` + `core::analytics::compute_usage_analytics`） | consumerStartReady（9 命令），dim2 命令层 wrapper 6/9 缺名（含此 5 个），但 core 计算层扎实、非失败、达真实叶子（sqlite3/fs/walkdir） | `windows-1.2.3-sessions-analytics`（`commands/analytics/` 5 个具名 wrapper，ground-truth tauri handler） | consumerStartReady（9 命令），dim2 **命令层强于 macOS**（9/9 全具名 wrapper，macOS 只 3/9） |
| load_quota_history | `macos-1.2.3-relay`（VA `0x1006d4d30`，638 去重反编译函数之一） | consumerStartReady（23 命令），dim2 强 | `windows-1.2.3-relay` | consumerStartReady（22/23），dim2 partial（208 去重反编译地址） |
| load_snapshot | `macos-1.2.3-accounts`（`commands::accounts::load_snapshot` 等 3 种粒度快照读取函数，141 文件 0 截断/失败） | dim2 **closed**（该命令本身），但该包内 dim1 **未**在 AccountsPage 范围内定位到触发点（`consumerStartBlocked`，与本模块形成互补——本模块 dim1 已确认） | `windows-1.2.3-accounts`（同名 wrapper，dim2 clean） | dim2 **closed**（load_snapshot 属于 67/72 clean 之一，非 5 个失败之一） |
| refresh_usage_snapshot | `macos-1.2.3-accounts`（`refresh_usage_snapshot_with_retry`） | dim2 **closed**，同上 dim1 互补关系 | `windows-1.2.3-accounts` | dim2 **FAILED**（`HEXRAYS_DECOMPILE_FAILED: switch analysis failed`，5 个失败案例之一——真实尝试失败，非未尝试；`windows-1.2.3-system-usage` 独立记录此为相对 1.0.9 baseline 的**版本倒退**：1.0.9 该命令达 strictImplementationUse，1.2.3 build 上 Hex-Rays 分析失败） |
| load_bootstrap_state | `macos-1.2.3-bootstrap`（leaf `bootstrap_cache`，既有 baseline 反编译，非失败） | consumerStartReady（4 leaf 之一） | `windows-1.2.3-daemon-autoswitch`（**非** `windows-1.2.3-bootstrap`——两平台归属模块不一致，VA `0x14018b520`） | **blocks_start**（该包自身 13 命令均未达 consumerStartReady）；`windows-1.2.3-bootstrap` 自己的 manifest 已把这处 mac/win 模块边界不一致列为「pre-existing cross-platform module-boundary inconsistency，非 reduce-only session 可解决」 |
| get_usage_refresh_interval | **无 canonical 包claim**（未发现 `macos-1.2.3-system-usage` 或任何 mac 包覆盖此命令 dim2） | **N/A（genuine gap）** | `windows-1.2.3-system-usage`（VA `0x14018cbb0`，非截断完整反编译，ground-truth handler 映射） | 该包整体仍 `blocks_start`/`gap_needs_reducer`（dim1 未闭合、dim3 callee 链未追踪、RULE9 对 1.0.9 baseline 未做行为 diff 校准） |

**结论（对本模块 dim2 的正确表述）**：本模块的 10 个命令中，**8 个**（5 analytics + load_quota_history + load_snapshot +
refresh_usage_snapshot）在至少一个平台的**其他 canonical 包**中已有非失败的 dim2 证据（`already_in_canonical` /
`different_machine_owner`，见 manifest.json 四分类）；**load_bootstrap_state** 在 macOS 有 closed dim2 但 Windows 侧
归属包（daemon-autoswitch）自身未闭合；**get_usage_refresh_interval** 在 Windows 有 dim2 证据但整体包未达任何消费档，
在 **macOS 没有任何包覆盖**（唯一的 `truly_undone` dim2 缺口）。**refresh_usage_snapshot 在 Windows 是唯一的
「已尝试但 Hex-Rays 反编译失败」案例**——这是真实缺口，不是 accepted_unknown（未试破法），下一 producer 应参照
`ida-deep-recovery.md` 的假墙 taxonomy（尤其 `async decompile failed` / 超大体分块）在 `windows-1.2.3-accounts` 范围内
尝试破墙，不在本包内重复处理。

**必须强调**：以上全部是 **cross-reference（读盘对照），不是本模块自身证据**。本模块的 `covered_commands` 判定
（consumerStartReady 是否成立）仍完全由 dim1（本模块自己的前端 reduce）决定，不因为「后端存在别处」而提升 dim2 状态字段
本身——`strictImplementationUse` 依然需要 dim3（call-tree 到 leaf）与 dim4（interface/DTO/error/side-effect）独立闭合，
而下方 §4 显示这两项在全部 cross-reference 包中都 **仍未闭合**。

---

## 4. dim3 / dim4 / dim6 —— 全部 cross-reference 包共同的开口缺口

逐个检查 5 个 cross-reference 包（sessions-analytics ×2、relay ×2、accounts ×2、bootstrap、daemon-autoswitch、system-usage）
的 `dim3_call_tree_to_leaf` / `dim4_interface_dto_boundary` / `dim6_test_acceptance_mapping` 字段，**无一例外**全部是
`not-closed` / `partial`（仅入参 argKeys 或 DTO 类型名枚举，未做字段级/出参/error envelope 提取）/ `missing`。具体：

- **dim3**：`macos-1.2.3-sessions-analytics`「无系统性逐命令 call-tree-to-leaf 归约文档」；`macos-1.2.3-relay`「个体函数体已达真实逻辑但无系统性逐命令 call-tree 归约」；`macos-1.2.3-accounts`「对 load_snapshot/refresh_usage_snapshot 等 7 命令，真实深叶是 `core::repository`，只在 `backend-baseline/models-repository-baseline.md` 有交叉引用，非本包主证据」；`windows-1.2.3-system-usage`「callee 链（`sub_140003640` 等）本轮未 live xrefs/callees 追踪」。
- **dim4**：所有包最多到「入参字段名/类型名枚举」（`range`/`accountKey`/DTO 类型名如 `CoreSnapshotPayload`），**无**字段级出参 DTO、error envelope、side-effect boundary 的系统性提取。
- **dim6**：所有包一致「未产出」。

**结论**：即使把 dim2 的 cross-reference 全部计入，本模块 10 个命令距 `strictImplementationUse`（需要 dim1-dim5 闭合到可实现叶子级）与 `readyToImplement`（额外需要 dim6）**仍然遥远**——真正的瓶颈已经从「找后端函数在哪」转移为「把已定位的后端函数追到 fs/sqlite/http/registry 叶子 + 提取出参 DTO + 写验收映射」，这是下一阶段该投入 IDA 预算的地方，而不是重新广搜 owner。

---

## 5. Unknown / Residuals（本合成层新增或延续的诚实缺口）

1. **Windows dim1 render-surface 未闭合**（10/10 命令仅 minified-static 层）——见 §2 潜在低成本路径假设（chunk SHA-256 复用），未验证。
2. **`get_usage_refresh_interval` macOS dim2 是本模块唯一确认的 `truly_undone` 后端缺口**——两平台、六个 cross-reference 包逐一核对后仍无 mac 侧任何包覆盖。
3. **`refresh_usage_snapshot` Windows dim2 是「已尝试破墙失败」而非「未尝试」**——`windows-1.2.3-accounts` 记录为 `HEXRAYS_DECOMPILE_FAILED`，相对 1.0.9 baseline（曾破墙成功达 strictImplementationUse）是版本间倒退，原因未深查（jump-table async switch dispatch 模式变化猜测，未证实）。
4. **`load_bootstrap_state` 存在跨平台+跨模块归属不一致**：macOS 侧由 `macos-1.2.3-bootstrap` 认领（已闭合 dim2）；Windows 侧由 `windows-1.2.3-daemon-autoswitch` 认领（未闭合，`blocks_start`）——这是 `windows-1.2.3-bootstrap` 自己的 manifest 已经指出的「pre-existing cross-platform module-boundary inconsistency」，本合成层只如实记录，不越权修改任一 sibling 包的 owner 声明。
5. **`load_quota_history` 的语义身份未独立复核**：`macos-1.2.3-relay`/`windows-1.2.3-relay` 把它列在 relay provider quota 相关命令旁（"quota 历史查询"，与 `get_relay_provider_quota` 相邻），而本模块的前端消费点是 AnalyticsPanel 的账号 quota tab（`accountKey` 参数）。两者是否是同一个 Tauri command handler（大概率是，因为命令名字面相同且两平台 VA/命令面均逐字节匹配）**本次合成未逐字节核对函数体参数签名**，暂按「命令名匹配=同一 handler」的默认假设处理，但列为待独立确认的细节，不作为已验证事实过度声明。
6. **单平台包 scope 定义不一致**（见 §1）：Windows 包 `manifest.json.scope.targets` 未做 RULE 8a 排除，与 macOS 包及本合成层采用的 10-in-scope 定义不一致，需要未来 owner-reconciliation session 处理（非本次授权范围）。
7. **`load_mcp_servers` / `refresh_single_account_usage` / `set_usage_refresh_interval`（3 个显式排除命令）的归属包状态**：`load_mcp_servers` 在 `macos-1.2.3-mcp` + `windows-1.2.3-mcp` 均 consumerStartReady（4/4，健康）；`refresh_single_account_usage` 在 `macos-1.2.3-accounts` dim2 closed，在 `windows-1.2.3-accounts` dim2 **FAILED**（同一批 5 个 Hex-Rays 失败案例之一）；`set_usage_refresh_interval` 在 `windows-1.2.3-system-usage` dim2 available（VA `0x14018c2d0`），macOS 侧无任何包覆盖（同 `get_usage_refresh_interval` 一样的 mac-side gap，但因这两个命令本身被排除在本模块 covered_commands 外，不计入本模块的 `truly_undone` 统计，只如实记录供 system-usage 域未来处理）。

---

## 6. next_producer_steps（合并两个单平台包 + 本合成层新增发现，去重排序）

1. **【新增，低成本优先】** 校验 `index-B40jKs17.js` 与 `analytics-panel-6jtfGEeX.js` 在 mac raw dump 与 win tauri-dumped-assets 之间的 SHA-256 是否逐字节相同（仿照 `windows-1.2.3-accounts` 对 `accounts-page-GdJYDnGj.js` 的验证方法）。若相同，可用「proven byte-identical artifact」直接把 mac 的两份页面级 reduce（`shared-index-app-frontend.md` + `analytics-maintenance-autoswitch-frontend.md`）复用为 Windows dim1 证据，无需重新人工 reduce win 的 minified JS——这可能是 Windows dim1 render-surface 缺口最便宜的闭合路径。若不同，则仍需独立 win 页面级 reduce。
2. **对 `get_usage_refresh_interval` 起一个 macOS IDA session**：定位其 mac 后端 owner（前端消费 hook `cU()` 已定位，`ipc-contracts.jsonl` 已确认命令存在；参照 Windows 侧 `windows-1.2.3-system-usage` 的 VA `0x14018cbb0` 反编译体作为语义参照，但不得跨平台外推 VA/函数体本身，须在 mac 二进制独立定位）。
3. **对 `refresh_usage_snapshot` 的 Windows Hex-Rays 失败案例做破墙尝试**（在 `windows-1.2.3-accounts` 范围内处理，参照 `ida-deep-recovery.md` `async decompile failed` / 超大体分块 打法；本包不重复处理，只 pointer 引用其结果）。
4. **对已 cross-reference 到的 8 个命令（5 analytics + load_quota_history + load_snapshot + refresh_usage_snapshot）跑 dim3 深化**：从已知 owner/wrapper 出发（不重新广搜），追 callees 到 fs/sqlite3/http/registry 叶子，闭合 dim3；本工作应在各自的 canonical 归属包（sessions-analytics/relay/accounts）内进行，不在本 home-usage-frontend 包内重复。
5. **对全部 10 个命令做 dim4 字段级提取**（出参 DTO/error envelope/side-effect boundary）——目前所有相关包都只到类型名枚举或入参 argKeys 级。
6. **解决 `load_bootstrap_state` 的跨平台模块归属不一致**（macOS=bootstrap vs Windows=daemon-autoswitch）——需要用户显式 `EXPLICIT_REASSIGN_OWNER` token 才能触碰任一 sibling 包，本次不做。
7. **对全部 10 个命令补 dim6 test/acceptance mapping**（Polaris 侧 C5 单测/E2E/人工验收映射）。
8. **独立核实 `load_quota_history` 的 relay-owner 与 home-usage-frontend 消费点是否确为同一 handler**（读函数体参数签名，而非只比命令名字符串）。

---

## 7. 给实现侧的可用结论（allowedImplementationMode = reverse_guided，仅 macOS）

在 C5 自研 dashboard/analytics 前端重实现兼容行为时：

1. **可直接用**（macOS dim1 已闭合的 8 命令）：路由/组件拓扑（单 tab 字符串路由，非 URL）、数据获取模式（共享快照
   push-driven + analytics 惰性 useQuery + 手动刷新退避重试）、交互契约（tab 切换乐观 UI、最短 320ms loading、quota
   accountKey guard + 最小样本量 gating）——详见 `macos-1.2.3-home-usage-frontend/logic/FULL-CHAIN-1.2.3.md`。
2. **可交叉引用但不可直接照抄**（后端 dim2 存在于其他包）：5 analytics 命令的 core 计算体读
   `macos-1.2.3-sessions-analytics`；load_quota_history 读 `macos-1.2.3-relay`；load_snapshot/refresh_usage_snapshot 读
   `macos-1.2.3-accounts`——这些包只到 dim2（owner+反编译体），出参 DTO/error 仍需实现侧自行从 pseudocode 提取或走产品决策。
3. **禁止假设**：Windows UI 层与 macOS 一致（dim1 win Unknown）；`load_bootstrap_state` 的 mac 前端触发点（未定位）；
   `load_snapshot` 字面 invoke 名（按 shape 推断，accepted_unknown）；`load_quota_history` 的 relay-owner 与本模块消费点
   是同一 handler（命令名匹配但函数体未独立核对）；`refresh_usage_snapshot` 在 Windows 的后端行为（Hex-Rays 反编译失败，
   无从得知）。
