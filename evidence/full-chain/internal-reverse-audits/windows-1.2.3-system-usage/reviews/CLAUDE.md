# Claude 独立复核 — windows-1.2.3-system-usage

## 复核范围

本轮为 read-only 归并（无 IDA MCP 会话，无新 raw/intermediate 证据）。复核对象：manifest.json 归属矩阵、gate-report.json 维度判定、README/AI/SYSTEM-DIFF 结论一致性。

## 核查方法

1. **碰撞门核查（PREWRITE_PRODUCER_COLLISION_GATE）**：`grep -n "system-usage" REVERSE-STATUS.md` 仅命中 backlog 清单行（4011），无 in-progress 认领；`grep "usage_refresh_interval\|refresh_usage_snapshot\|refresh_single_account_usage" INDEX.jsonl` 无 1.2.3 windows 专属条目；`ls audits/` 确认 `windows-1.2.3-system-usage` 此前不存在。判定：gate=ALLOW/first，无 owner 冲突。
2. **RULE8 单一 canonical 核查**：逐一 `grep -rl` 6 个命令名于全部 `audits/windows-1.2.3-*/` 姊妹包，确认 4/6 已被 `windows-1.2.3-accounts`（refresh_usage_snapshot/refresh_single_account_usage）与 `windows-1.2.3-sessions-analytics`（compute_usage_analytics/load_usage_analytics）领先归并，且后者 `manifest.json.explicit_exclusions` 字段原文逐字确认排除本包领取的 2 个命令，边界精确吻合、无重叠、无遗漏。
3. **raw 证据真实性核查**：直接 `Read` 工具打开 `get_usage_refresh_interval_0x14018cbb0.c`/`set_usage_refresh_interval_0x14018c2d0.c` 全文，确认非截断（无 `[N chars total]`/`TRUNCATED` 标记）、括号配平、文件头含 ground-truth tauri command handler 映射注释。非仅凭文件名/尺寸判断。
4. **RULE9 版本 diff 核查**：读取 `windows-1.0.9-system-usage/manifest.json` 确认 3 命令 1.0.9 baseline VA/gate；确认 1.2.3 VA 已变化但未做行为 diff 校准，正确归类 `diff_required`，未误标 `migrated_no_behavior_diff`。
5. **平台差异核查（dim5）**：`find -iname "*usage*"` 分别核对 win `repository/` 目录（零命中）与 mac `core/repository/` 目录（3 命中），如实记录密度差异，未用 mac 结果外推 win。

## 采纳 / 驳回

- 采纳：整包 `blocks_start` 判定（0/2 owned targets 达 consumerStartReady，dim1/dim3/dim4/dim6 均未闭合）。
- 采纳：4/6 命令 pointer-only 不重复归并的决定（避免 RULE8(a) 违规 + red line 5 重复生产者工作）。
- 驳回候选（已避免）：原计划任务指示"若 win 后端 .c 为 0 或很薄标 gap_needs_new_raw"——本轮核查后确认 raw 非零非薄（6 个直接命名文件 + 9 个 grep 命中 + 21 行前端命中），故未套用该分支，改用更精确的 `gap_needs_reducer`（2 个本包领取目标）+ `already_in_canonical`（4 个 pointer 目标）分类，更符合红线15 四角度完整性的孤儿分类要求。

## Unresolved（留 Unknown，未强行判定）

- Windows `core/repository/` 层是否存在非 "usage" 命名的 usage-interval 深层实现：未做定向搜索，留 Unknown。
- `refresh_usage_snapshot` 在 1.2.3 build 上 Hex-Rays 反编译失败（相对 1.0.9 能 ceiling-crack 成功）的具体技术原因：未深查，仅如实记录现象。

## implemented-checkpoint

本轮无 leaf 达到 `consumerStartReady` 及以上，故不适用 `implemented-checkpoint` 标记（该标记仅用于已明确闭合的 leaf）。
