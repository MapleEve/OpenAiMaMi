# REGISTRATION-TABLE-1.2.3.md — cross-1.2.3-relay-core-bootstrap

Backfill session: `cross123-relay-core-bootstrap-logic-backfill-20260726`, machine `<host>`,
2026-07-26. OUTPUT-SPEC 验收条件要求 `logic/` 非空且含该版本写代码所需 logic 文档；本包原始
distillation session（`cross123-relay-core-bootstrap-distillation-20260725`）产出了
README/AI/SYSTEM-DIFF/manifest/gate-report/pointers/task-plan/reviews，但 **`logic/` 目录为空**。
本文件补齐该缺口，格式为 registration table（本包性质是跨平台依赖完整性诊断，非可实现叶子，
故 registration table 只登记 target/leaf/owner-status，不含 DTO/入参出参——那些维度本包全部
`Unknown`/`blocked`，如实反映，不捏造）。

**范围声明（与原 distillation session 一致）**：本次 backfill 是纯 reduce/logic-backfill，读已落盘
raw + 已有结论包（`internal-reverse/audits/*`）与 `REVERSE-STATUS.md`，**未新增 raw/intermediate
证据、未跑任何新 IDA decompile/callees/xrefs/server_health**（只读 shell 检查过一个已存在的 raw
`.c` 文件的文件头以核实一个既存差异，见下文「transition_journal 更新」，未执行任何新 IDA MCP 调用）。
<门控>：本 session 开工时确认 mac IDA MCP 端点可达（`initialize` 握手成功），但未使用其
做任何新反编译，仅作起手健康确认。

**Gate 姿态：完全不变**——本文件不提升本包任何 leaf/cluster 的 gate。
`implementation_use`/`gate_accepted`/`readyToImplement`/`full_leaf_100` 在
`manifest.json`/`gate-report.json` 中仍为 `false`（这两个文件本身未被本次 backfill 触碰，
按 owner-gate 非破坏性铁律——已存在文件跳过不改）。

---

## 1. Bootstrap 4-leaf registry

| leaf (1.0.9-taxonomy 名) | macOS 1.2.3 | Windows 1.2.3 | 备注 |
|---|---|---|---|
| `app_run_entry` | `consumerStartReady`（`audits/macos-1.2.3-bootstrap/`，dim1/dim3/dim4/dim6 open） | 无独立同名叶；见下方「Windows bootstrap 更新」 | mac 侧真实 canonical |
| `bootstrap_cache` / `load_bootstrap_state` | `consumerStartReady`（同上包） | `windows-1.2.3-daemon-autoswitch` 已领取 `load_bootstrap_state`（跨模块边界不一致，`windows-1.2.3-bootstrap/README.md` 已如实记录，未擅自裁决，需 `EXPLICIT_REASSIGN_OWNER`） | 跨平台模块边界分歧，产品决策待定 |
| `auto_switch_pending_emitter` / `dismiss_pending_auto_switch` | `consumerStartReady`（同上包） | 同上，归属 `windows-1.2.3-daemon-autoswitch` | 同上 |
| `auto_switch_pending_emitter` / `load_pending_auto_switch` | `consumerStartReady`（同上包） | 同上，归属 `windows-1.2.3-daemon-autoswitch` | 同上 |
| `boot_spawn_threads`（1.0.9 analog） | `blocks_start`（未找到独立函数，可能在未展开的 `RelayManager::new` 内部） | `Unknown`（未检查） | 无 1.2.3 macOS 确证 |
| `managed_state_registry`（1.0.9 analog） | `accepted_unknown`（架构变化，调用已内联进 `app_run_entry`） | `Unknown`（未检查） | 架构差异非缺口 |
| `manager_bootstrap`（`core::relay::manager::bootstrap`，VA win `0x14085a330`） | 未在本 4-leaf 名单中单列（mac 侧未见对应独立注册） | `consumerStartReady`（本包新领取，见 `windows-1.2.3-bootstrap/`，dim2 closed / dim3 一跳未深 / dim1 accepted_unknown / dim4·dim6 open） | Windows 独有 canonical 叶，见下 |

### Windows bootstrap 更新（本次 backfill 发现，更正本包 README/AI.md/manifest.json 记录的过时状态）

原 distillation session（2026-07-25）的结论是 **`windows-1.2.3-bootstrap` 完全不存在，未尝试**
（见本包 `README.md`/`AI.md`/`manifest.json`/`gate-report.json` 逐字记录）。这在写入当时是真实的。
但 `REVERSE-STATUS.md` `[win-1.2.3-bootstrap-reduce-20260725]` 条目记录了**同一天稍晚**一个独立
session 已经产出 `internal-reverse/audits/windows-1.2.3-bootstrap/` 真实 canonical 包（本次核实
该目录确实存在，`gate-report.json` 记录 `consumerStartReady=1`（叶 `manager_bootstrap`），
`cross_referenced_owned_by_other_module=4`（`load_bootstrap_state` 等 4 叶交叉引用给
`windows-1.2.3-daemon-autoswitch`），`gap_needs_new_raw=5`）。

**本文件按非破坏性铁律不修改本包既有的 README.md/AI.md/SYSTEM-DIFF.md/manifest.json/gate-report.json**
（它们仍写着 "windows-1.2.3-bootstrap 不存在"，这条陈述现已过时但保留原文，不做覆盖）；本 registration
table 是记录这一更新事实的正确位置。**结论：bootstrap 维度的跨平台 gate 不再是"Windows 完全零证据"**，
而是"Windows 有 1 个新领取的真实叶（`manager_bootstrap`，consumerStartReady）+ 4 个交叉引用到姊妹包
的叶（尚未在各自模块内闭合）"。cross-bootstrap 仍然 `blocked`——因为 mac 4 叶与 win `manager_bootstrap`
不是同一叶（mac 的 4 叶在 win 侧归属 daemon-autoswitch 而非 bootstrap，身份不对齐，无法直接配对
计算 cross gate；`windows-1.2.3-bootstrap/README.md` 自己也未把这次配对当作已解决）。下一个 producer
session 若要重算 cross gate，应先读 `windows-1.2.3-bootstrap/{README.md,AI.md,gate-report.json}`
和 `windows-1.2.3-daemon-autoswitch/` 的最新状态，而非只信本包的旧记录。

---

## 2. Relay-core 19-cluster registry（1.0.9 taxonomy）

| cluster | macOS 1.2.3 | Windows 1.2.3 | 备注 |
|---|---|---|---|
| relay_codex_writer | 内容级匹配（`audits/macos-1.2.3-relay-core/` diagnostic-only，未 RULE-9 formal diff） | 29 confirmed submodules 之一（`raw/aimami/1.2.3/windows-x64/relay-core/`，surface-only，零 decompile） | 两侧均未闭合到 consumerStartReady |
| relay_diagnostic | 同上 | 同上 | 同上 |
| relay_health_audit | 同上 | 同上 | 同上 |
| relay_manager | 同上 | 同上 | 同上 |
| relay_proxy_server | 同上 | 同上 | 同上 |
| relay_thread_migration | 同上 | 同上 | 同上 |
| relay_translator | 同上 | 同上 | 同上 |
| relay_breaker | 同上 | 同上 | 同上 |
| relay_fetch_models | 同上 | 同上 | 同上 |
| relay_models | 同上 | 同上 | 同上 |
| relay_translator_stream | 同上 | 同上 | 同上 |
| relay_image_compat | 同上 | 同上 | 同上 |
| relay_try_dispatch | 同上 | 同上 | 同上 |
| relay_ws_handlers | 同上 | 同上 | 同上 |
| relay_passthrough_helpers | 同上 | 同上 | 同上 |
| relay_sse | 同上 | 同上 | 同上 |
| relay_proxy_config | **确认迁移到 `commands::system`**（`audits/macos-1.2.3-system/` 覆盖） | 未独立核实 | 1/19，非本包缺口，已有归属 |
| relay_web_executor | **零可发现 1.2.3 证据**（全树搜索，未用 `func_query` 排除 ICF/单态化masking） | 未检查（out of scope） | Unknown，未 falsify |
| relay_web_tools | 同上 | 同上 | 同上 |

**Windows 侧 29 submodule 与 macOS 19-cluster 尚未 1:1 reconcile**（`AI.md` 已如实记录，本文件不
重复计算，只登记原状态）。`transition_journal` 是 mac 19-cluster 之外的一个（属 macOS 32-submodule
`core::relay::*` scope 内），见下方专项更新。

### transition_journal 差异更新（本次 backfill 部分澄清，非完全解决）

`SYSTEM-DIFF.md` 记录了一个未解决的矛盾：`raw/aimami/1.2.3/windows-x64/relay-core/manifest.json`
的 `mac_only_no_windows_evidence_found_unknown` 列表把 `transition_journal` 列为零 Windows
string-search 命中，但 `raw/aimami/1.2.3/windows-x64/transition_journal/` 目录确实存在。

本次 backfill 只读打开了该目录（未跑新 IDA 调用）：目录下有
`ida/pseudocode/write_0x140adf3e0.c`（317 行，已有反编译文件，文件头注释显式写明
`module: codexmate_lib/core/relay/transition_journal` 且标注 `= mac codexmate_lib::core::relay::transition_journal::write`
的跨平台名称对应）。**这证明该目录不是"无关模块的同名巧合"（`SYSTEM-DIFF.md` 列出的可能解释 a），
而是真实的 `core::relay::transition_journal` 模块在 Windows 侧确有至少 1 个函数（`write`）已被
反编译**，与 relay-core surface-pass manifest 的"零命中"表述矛盾（可能解释 b：surface pass 的
`find_regex` 搜索的具体字符串模式未命中该函数，即使目录/反编译已存在——搜索方法覆盖不全，
而非模块真的不存在）。

**未完全解决**：本次只读打开了目录清单和 1 个文件的文件头（未逐行读取反编译体，未跑
`decompile`/`func_query` 核实该模块下还有多少函数、是否已被任何 canonical 包正式 RULE-8 归并）。
`write_0x140adf3e0` 这个函数目前不属于任何已知 canonical 包的 covered_commands/functions
（未在 `windows-1.2.3-relay/` 或任何姊妹包的 manifest 中被引用，按四角度孤儿分类应为
`gap_needs_reducer`——raw 已存在只是未归并——而非 `truly_undone`）。留给下一个 producer session：
若要正式解决，应对 `core::relay::transition_journal` 模块跑 `func_query` 全量符号枚举（排除
ICF/单态化 masking），并将结果 RULE-8 归并进 `audits/windows-1.2.3-relay-core/`（该包本身也尚不
存在，见 §1 blockers）。

---

## 3. 未变更事项（与原 distillation session 结论一致，本文件不重复推导）

- `relay_web_executor` / `relay_web_tools` 存在性未 falsify——仍需 `func_query`（`data/task-plan.json`
  `cross123-relaycore-4`，P2，未执行）。
- `macos-1.2.3-relay-core` 仍是 diagnostic-only，未做正式 RULE-9 diff（`cross123-relaycore-3`，P2，未执行）。
- `windows-1.2.3-relay-core` 仍无 canonical 包，177 函数 surface list 仍是 tier-C 未反编译为主
  （`cross123-relaycore-1`，P1，未执行——本次 backfill 未做任何 decompile）。
- Cross gate 矩阵仍然全部 `blocked`；本文件不改变这一结论，只更新 bootstrap 维度的 Windows
  证据现状说明（见 §1）与 transition_journal 差异的部分澄清（见 §2）。

## 4. 破坏性副作用标注

⚠ 无。本次 backfill 仅创建 `logic/REGISTRATION-TABLE-1.2.3.md`（新文件），只读打开了
`transition_journal/ida/pseudocode/write_0x140adf3e0.c` 的文件头（未执行 remove/kill/DELETE/
truncate 等任何破坏性操作），未修改任何已存在文件。
