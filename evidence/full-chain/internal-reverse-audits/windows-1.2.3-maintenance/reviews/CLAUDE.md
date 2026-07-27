# Claude 独立复核 — windows-1.2.3-maintenance

复核日期：2026-07-25
复核范围：本包自身 README/AI/SYSTEM-DIFF/gate-report/manifest/logic 内部一致性，以及与既有姊妹包（`windows-1.2.3-accounts`、`windows-1.2.3-relay`、1.0.9 raw evidence）的交叉核对。本次复核在同一次归并任务中完成（未使用独立 Codex 复核通道），符合 OUTPUT-SPEC.md"至少一份存在"的最低要求。

## 采用（Accepted）

- `rebuild_registry` 3 文件 0 截断的核查结果——用 `grep -c 'TRUNCATED\|HEXRAYS_DECOMPILE_FAILED\|chars total'` 对全部 3 个文件独立跑过，三次均返回 0，采纳为可信。
- `clean` 零证据结论——用 `find -iname '*clean*'`（全树）+ 针对性符号名 grep 两种独立方法交叉验证，均零命中，采纳为诚实的 `blocks_start`（非 `accepted_unknown`，因未尝试红线13破墙技术，且这类"完全找不到文件"的缺口与"找到文件但反编译失败"的缺口是不同类别，本包在 AI.md/gate-report.json 中均未混淆两者）。
- `rebuild_registry` dim1 判定为 `consumerStartBlocked`（而非因为 dim2 强就放宽为 ready）——采纳该从严标准，因为它与 `windows-1.2.3-accounts` 对 `load_snapshot`/`logout` 采用的判定标准完全一致（同为 element:null 级证据），保持了跨包判定尺度的一致性，未出现"同类证据两种标准"的问题。
- call-tree 第二跳到第三跳（`rebuild_registry_with_policy` → `persist_registry`）的确认——用直接 grep 行号（1383 行）定位调用点，非推断，采纳。

## 驳回/降级（Rejected/Downgraded）

- 未把 1.0.9 的 `clean` 证据（`authBackupsRemoved` 等字段、5 个具名 VA 的完整链路）当作 1.2.3 证据直接写入 Coverage/gate-report 的正式覆盖数字——本复核确认 manifest.json/gate-report.json 的 coverage 字段均只统计 1.2.3 侧真实文件数（`clean_c_files: 0`），1.0.9 内容仅出现在 "prior_version_reference"/历史参照类字段中，未被误算进覆盖率。这是本复核主动核实的一点，防止 1.0.9 的丰富证据"稀释"了 1.2.3 真实零证据这一诚实结论。
- 未把 `rebuild_registry_with_policy` 的跨平台签名标注（文件头部注释）当作本 pass 独立验证的结论——AI.md/logic 文档均标注"as-found, not independently re-verified"，未升级为本 pass 自己核实的事实。

## 仍 Unknown（本复核认为是本包最大的诚实缺口，未淡化处理）

- `clean` 1.2.3 Windows 后端 owner 完全未解析，三种可能解释（改名/删除、ICF 折叠、未命名 sub_ 未解析）均未证实，需要下一轮 live IDA pass。
- `rebuild_registry_with_policy` 的 policy 字节参数语义未推导，只确认了存在性和分支使用。
- dim4/dim6 两条命令均未产出。

## 复核方法

文档一致性复核 + 独立重跑本包引用的 3 条 grep/find 命令确认结果可复现，未连接 Windows IDA 实例验证。未产出 `reviews/AGENT.md`（Codex 独立复核）。
