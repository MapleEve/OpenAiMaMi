# AiMaMi 1.2.3 macOS relay-core 独立拆分需求判定

同步时间：2026-07-25
范围：判定 relay-core（1.0.9 曾是独立包 `audits/macos-1.0.9-relay-core/` + `audits/windows-1.0.9-relay-core/`）在 1.2.3 是否仍需独立拆分逆向，还是已被 `audits/macos-1.2.3-relay/`（core::relay::* 32 submodules + commands::relay 23 commands）完整覆盖。
最终结论：**不是简单的"已覆盖"。内容层面大部分已吸收，但形式层面未闭合，且存在真实缺口。**

## 证据索引

- `audits/macos-1.0.9-relay-core/manifest.json`（19 cluster 目标全集，1.0.9 独立包）
- `audits/macos-1.2.3-relay/manifest.json`（scope 声明：core::relay::* 32 submodules + commands::relay 23 commands）
- `audits/macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md`（relay_proxy_config 物理迁出证据）
- `audits/macos-1.2.3-system/`（proxy_config 承接方）
- `raw/aimami/1.2.3/macos-arm64/core/relay/*/`（32 个 submodule 目录，函数名逐条核对）
- `REVERSE-STATUS.md` `[<审计会话> 条目（本产品自己的账本对同一问题的独立结论，2026-07-24，与本次判定同日）

## Coverage

- 1.0.9 relay-core 19 clusters 中，**15 个**在 1.2.3 `core/relay/` 32 submodule 目录中找到函数名级别的对应证据（含若干精确文件名匹配，如 `error_response`/`is_bearer_likely_missing`/`copy_response_headers_to_builder`/`build_passthrough_request_headers`→`proxy_passthrough/`；`try_pass_through`/`try_translate`/`codex_router_lookup_model`/`record_codex_openai_passthrough_route`→`proxy_server/`）。
- **1 个**（`relay_proxy_config`）物理迁出 relay 模块，落到 `commands::system`，由 `audits/macos-1.2.3-system/` 承接（非缺口，是覆盖方转移）。
- **2 个**（`relay_web_executor`、`relay_web_tools`，合计 19 sub-leaves）在整个 1.2.3 macos-arm64 raw 证据树内**未发现任何同名或近似函数**，既不能判定"已删除"也不能判定"已吸收"——需要 func_query 符号枚举兜底核实（本轮未跑，四角度完整性红线要求跑完才能下结论）。

## Per-target Result Matrix

见 `manifest.json` 的 `cross_check_evidence` 字段（cluster-by-cluster 对应表 + 未命中清单）。本文件不重复贴出，避免与 manifest 口径分叉。

## Frontend Control Flow

未涉及。本次判定只做后端 module-scope 归属核对，不涉及前端。`audits/macos-1.2.3-relay/` 已有的 `RelayModelPage` 前端证据未受本判定影响。

## Backend Control Flow / Pseudocode / Call-tree

未新跑 IDA/decompile。本次判定完全基于**磁盘既有证据**的文件名/目录名交叉核对，属于诊断性核查，不产生新的 pseudocode/call-tree 证据。

## Interface / Error / Boundary

不适用（本包不对任何 leaf 做 dim1-6 闭合声明）。

## Gate Leaf Status

`diagnostic-only`。本包不设置 `implementation_use=true`、`gate_accepted=true`、`strictImplementationUse=true`、`readyToImplement=true`。

## Diff 结论

- 与 1.0.9 `relay-core` 独立包相比：1.2.3 没有对应的独立 `relay-core` 包，其内容被并入了 `relay` 包的 scope 声明（`core::relay::* 32 submodules`），但**这次并入从未经过 RULE-9 版本迁移 diff 校验**——`audits/macos-1.2.3-relay/manifest.json` 的 `consumed_bundles` 字段只列了 `BASELINE-FINAL-1.2.3.md` 和 `COVERAGE-FINAL-1.2.3.md`，没有列 `audits/macos-1.0.9-relay-core/`，说明 1.2.3 relay 基线是作为全新独立基线产出的，从未显式对照过 relay-core-1.0.9 的 19-cluster 目标全集做过 `migrated_no_behavior_diff` / `diff_required` 判定。
- 本次判定是**事后补做**的这个对照，属于诊断性交叉核查，不是正式 RULE-9 reduce。

## Unknown / Missing

1. **relay_web_executor / relay_web_tools**：1.2.3 macos-arm64 raw 证据树内无任何同名/近似函数命中。`Unknown` — 需要 func_query 符号枚举排除 ICF/单态化漏枚举后才能定论"产品已移除此特性"或"未捕获需补逆"。
2. **RULE-9 正式迁移矩阵缺失**：`audits/macos-1.2.3-relay/` 从未产出 `logic/NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md` 或等价文档，专门对照 relay-core-1.0.9 的 19 cluster。当前的"吸收"结论只是本次事后交叉核查所得，未经正式 reduce 流程确认。
3. **Windows 侧**：`REVERSE-STATUS.md` `[<审计会话> 明确记录 raw 层已有"win 多个 relay-core 子模块深逆"证据，但尚未 reduce 成 canonical `audits/windows-1.2.3-relay-core/` 或确认吸收进 `audits/windows-1.2.3-relay/`。本包未独立核实 Windows 侧，按 `Unknown` 处理（不得用 macOS 证据外推 Windows，AGENTS.md 红线）。
4. **relay-core-bootstrap 跨平台模块**：1.0.9 有独立的 `audits/cross-1.0.9-relay-core-bootstrap/`；`REVERSE-STATUS.md` 同一条目将其列为 1.2.3 仍待补的跨平台模块之一。本包未展开核查，按 `Unknown` 处理。

## Action / Non-action

- **Non-action**：不把 relay-core 标记为 `covered_by_relay_bundle=true` 并关闭。不产生"1.2.3 relay-core 已完全被 relay 包吸收"的结论性声明。
- **Action（留给后续 reduce 轮次，本包不代为执行）**：
  1. 对 `relay_web_executor`/`relay_web_tools` 跑 func_query 全量符号枚举，排除假墙后再定性（"产品移除"或"需补逆"）。
  2. 把 Windows 侧已有的 relay-core 子模块 raw 证据按 RULE-8 归并、reduce 成 `audits/windows-1.2.3-relay-core/`（或证明其已被 `audits/windows-1.2.3-relay/` 吸收，比照本包同样方法核对）。
  3. 视需要补一份 `audits/macos-1.2.3-relay/logic/NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md`，正式对照 relay-core-1.0.9 的 19-cluster 目标全集，把本包这次事后核查升级为正式 RULE-9 迁移矩阵。
  4. `relay-core-bootstrap` 跨平台模块补齐核查。

**本判定与 `REVERSE-STATUS.md` `[<审计会话> 条目（同日、独立产生）结论一致**：relay-core 不应视为已随 relay 包一并闭合的目标，仍是 1.2.3 full-app 补逆 backlog 中的一个未 reduce 完成项。

---

## 2026-07-26 补充（session `macos-1.2.3-relay-core-reassign-20260726`, machine=<host>）

本节为**追加**，不修改上方 2026-07-25 原始结论。本包此前因归属 `relay123-surface`（machine=<host>，
2026-07-23 认领，「relay 域全量逆向-面枚举」）的 in-progress 认领而被后续多轮 session 只读回避，导致
`gate-report.json` 缺失、`logic/` 为空、`reviews/` 缺失，骨架三天未补齐。用户 2026-07-26 在 chat 中明确授权
`EXPLICIT_REASSIGN_OWNER` 改派本包（仅本包，不含 relay123-surface 名下的 raw 证据），详见根 `REVERSE-STATUS.md`
改派记录与本包 `gate-report.json`/`reviews/CLAUDE.md`。

本轮把上方 Unknown 1（`relay_web_executor`/`relay_web_tools` 是否存在）跑到闭合：

- **结论：两者在 1.2.3 macOS 与 Windows 均 `confirmed_removed`**（非"未捕获"）。2026-07-26 用 live IDA
  `func_query`（mac <host>）+ `find_regex`（win <host>）对全二进制（非仅 `core::relay` 范围）
  搜索 `web_executor`/`web_tool`/`brave`/`tavily`/`duckduckgo`/`serpapi`/`search_provider`/`ToolExecutor` 等模式，
  两平台均 0 命中；仅 `web_search` 模式命中 4 个真实函数（mac）/ 6 个字符串（win），且均为 schema 剥离/拒绝逻辑
  （`translator::strip_anthropic_web_search_tools`、`translator::remove_web_search_hint`、
  `native_responses_compat::rejects_hosted_web_search`；win 字符串 "web_search tool rejected by upstream;
  retrying without it"），非服务端执行代理。
- 交叉证据：`cross-1.0.9-relay-core-bundle/data/producer-ledger.json` 记录 1.0.9 时两者均为双平台
  `strictImplementationUse`（真实存在过、已完整逆向的功能）——本次判定是**真实产品移除**，不是此前审计漏枚举。
- 本轮**未**做：Windows relay-core 正式 canonical 包归并（113/177 tier-C 函数仍未 decompile）、
  `audits/macos-1.2.3-relay/logic/NO-BEHAVIOR-DIFF-MIGRATION-1.2.3.md` 正式 RULE-9 迁移矩阵——均保持 Open，
  不在本次改派范围内。`verdict=PARTIAL` 不变，未虚标任何 gate 字段。

详见 `manifest.json` 的 `resolution_2026_07_26` 字段、`gate-report.json`、`logic/REGISTRATION-TABLE-1.2.3.md`、
`reviews/CLAUDE.md`。
