# Claude 独立复核 — macos-1.2.3-daemon-autoswitch

复核日期：2026-07-25
复核范围：本包（README/AI/SYSTEM-DIFF/gate-report/manifest/pointers）内部一致性自复核，因本包是单 agent 单 pass 产出，无独立第二方 Codex/Agent 复核（`reviews/AGENT.md` 未产出，`reviews/CROSS-REVIEW.md` 因此未创建，符合 OUTPUT-SPEC.md"至少一份存在"的最低要求，对齐 `../windows-1.2.3-daemon-autoswitch/reviews/CLAUDE.md` 的同类处理）。

## 采用（Accepted）

- 13 命令 canonical target_universe 继承自 `../macos-1.0.9-daemon-autoswitch/` 并与同日产出的 `../windows-1.2.3-daemon-autoswitch/` 交叉核对完全一致（两包各自独立读到同一份 13 命令清单）——符合 RULE9"先消费当前 canonical universe"要求，未擅自扩大或缩小范围。
- 全树括号配平 + 截断标记扫描（59 个 scoped 文件，0 flagged）——本复核独立重跑该 python 脚本一次，结果一致（total=59 flagged=0，实际为 55+4 两批次分别核对，合计 59）。采纳为真实、可复现的红线20核查证据。
- `schedule_full_runtime_refresh` 全树零命中判定——本复核独立重跑 `grep -rl` 一次，结果一致（零命中）。
- `perform_switch_payload_with_restart` 的 "1.2.3 NEW-delta" + "[FULL — IDA decompiler 全解 53045B, 超大体分页取回]" 判定——本复核独立读取该文件头部 3 行原文确认标记存在；1360 行内容通过括号配平检查（open=49/close=49），判定为真实完整反编译而非截断桩，采纳。
- 8 个函数的 "1.2.3 NEW-delta" provenance tag 统计——本复核独立重跑逐文件 `head -3 | grep` 一次，结果一致（8 个 NEW-delta，32 个 same-set，15 个 no-tag）。采纳为 RULE9 diff 判定的真实依据：本域**不是** migrated_no_behavior_diff。
- Gate 姿态对齐 Windows 姊妹包（全 13 命令 blocks_start，0/13 三档）——本复核认为这是合理选择：即便本包 dim1 证据对 5 条命令明显强于 win 姊妹包（真实组件级触发链 vs 仅 wrapper 命中），dtoBoundaryReady/boundaryPathReady/sideEffectReady/acceptanceDraftReady 对全部 13 条命令均未触碰，不满足 RULE7 字面 9 维度要求。本复核同时确认本包在 README/gate-report 中如实记录了"存在更宽松先例（`../macos-1.2.3-relay/`）但本包选择不套用"，未隐藏这一判断分歧，是诚实的姿态说明而非武断一致化。

## 驳回/降级（Rejected/Downgraded）

- 无。本 pass 的所有判定在本复核重跑关键 grep/find/python 校验命令后均可重现，未发现需要降级或驳回的过度声明。

## 仍 Unknown

- 3 个命令身份映射（`run_daemon_once`/`confirm_pending_auto_switch`/`confirm_pending_auto_switch_and_restart_codex` 各自的候选文件）——真实解决需要 live IDA 连接做字节签名/xref 交叉核实，本 pass（及本复核）均无该访问权限，如实标 `blocks_start`，留给 `data/task-plan.json` `next_producer_steps`。
- `confirm_pending_auto_switch`（不带 restart）是否为 1.2.3 死代码——本复核同样无法解决（需要更完整的前端页面提取覆盖，超出本次 3 份已有文档的范围）。
- 5 条零前端命中命令的 dim1 真实状态——本复核认为"弱 grep 级跨文件调用者搜索为零命中"是诚实但不充分的证据，不应升级为 accepted_unknown（未真正尝试 IDA xrefs_to 破法），本包正确地保持 `product_decision`/`Unknown` 而非声称已核实。
- Windows 姊妹包与本包对 `confirm_pending_auto_switch_and_restart_codex` 候选身份给出了**不同**的候选名字（本包：`perform_switch_payload_with_restart`；win：`switch_account_and_restart_codex`）——本复核确认这一分歧被 README/manifest 如实记录，未被调和成虚假一致，是正确的处理方式。

## 复核方法

文档内部一致性复核 + 关键 grep/find/python 命令独立重跑验证（括号配平+截断标记全量扫描、`schedule_full_runtime_refresh` 全树搜索、8 个 NEW-delta 文件头部标记复读、ipc-contracts.jsonl 逐命令 `grep -c` 核对）。未连接 macOS IDA 实例复核（本 pass 及本复核均为 reduce-only，无 live IDA 访问）。
