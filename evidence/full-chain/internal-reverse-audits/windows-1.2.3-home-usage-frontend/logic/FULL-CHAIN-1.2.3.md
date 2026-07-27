# FULL-CHAIN 1.2.3 — Windows-native home-usage-frontend Command-Surface Load Chains

produced_by: <host>
session: windows-1.2.3-home-usage-frontend-reduce-20260726
produced_at: 2026-07-26
authoritative: true
gate_accepted: false
implementation_use: false
source: win-native frontend extraction (NO IDA; NO mac inference) — raw/aimami/1.2.3/windows-x64/frontend/{ipc-contracts.jsonl, frontend-control-flow.jsonl, frontend-contract-report.md}
version: 1.2.3
platform: windows-x64
scope: home-dashboard + usage-snapshot-panel command surface (frontend minified-static layer only)

> **诚实边界**：本文件是 **Windows-native 前端命令面 + minified-static 控制流** 的蒸馏，**不是**页面级组件树 reduce（win 无 `pages/*.md`），**不是**后端 full-chain（本轮无 IDA）。每条链止于前端 `invoke("<command>")` 终端调用；后端 owner/core/leaf 为 Unknown。DTO 出参形状**不**从 mac 1.0.9 DISTILLED 借用（跨平台+跨版本不合规），只记 win-native 入参 argKeys。

---

## Command → Wrapper → invoke 映射（win-native，grounded）

来源：`frontend-control-flow.jsonl` terminal_call 行（invoke 别名统一为 `re(...)`）。`wrapper=null` 表示直接在 shell chunk 内以 `re("cmd",{...})` 调用；非 null 表示经命名 wrapper 方法。

| # | command | wrapper 方法 | argKeys（入参名，win-native） | source chunk | 捕获的 guard |
|---|---|---|---|---|---|
| 1 | `load_bootstrap_state` | （直接 `re`） | — | `index-B40jKs17.js` | — |
| 2 | `load_snapshot` | `loadSnapshot` | `localOnly`, `forceMetadata` | `index-B40jKs17.js` | `if(!x||C.forceMetadata)return C.promise;`（wrapper-callsite 去抖 preflight，防重复 in-flight snapshot） |
| 3 | `load_usage_analytics` | `loadUsageAnalytics` | — | `analytics-panel-6jtfGEeX.js` | — |
| 4 | `load_session_analytics` | `loadSessionAnalytics` | `range` | `analytics-panel-6jtfGEeX.js` | — |
| 5 | `load_token_analytics` | `loadTokenAnalytics` | `range` | `analytics-panel-6jtfGEeX.js` | — |
| 6 | `load_tool_analytics` | `loadToolAnalytics` | `range` | `analytics-panel-6jtfGEeX.js` | — |
| 7 | `load_change_analytics` | `loadChangeAnalytics` | `range` | `analytics-panel-6jtfGEeX.js` | — |
| 8 | `load_quota_history` | `loadQuotaHistory` | `accountKey` | `analytics-panel-6jtfGEeX.js` | — |
| 9 | `refresh_usage_snapshot` | （直接 `re`） | — | `index-B40jKs17.js` | — |
| 10 | `refresh_single_account_usage` | `refreshSingleAccountUsage` | `accountKey` | `accounts-page-GdJYDnGj.js` | `if(!Oe.has(o)){tt(v=>new Set(v).add(o));...await H.refreshSingleAccountUsage(o);T({title:n("accounts.refreshQuotaSuccess"),description:v.warnings.length>0?...})}`（去重 in-flight set + 成功 toast + `.warnings[]` 消费） |
| 11 | `get_usage_refresh_interval` | （直接 `re`） | — | `index-B40jKs17.js` | — |
| 12 | `set_usage_refresh_interval` | （直接 `re`） | `interval` | `index-B40jKs17.js` | — |
| 13 | `load_mcp_servers` | （直接 `re`） | — | `index-B40jKs17.js` | — |

grounded 样本（win `frontend-control-flow.jsonl`）：
```
re("load_snapshot",{localOnly:e,forceMetadata:t})              // wrapper loadSnapshot; callsite Ee.loadSnapshot(!1,x)
re("load_session_analytics",{range:...})                        // wrapper loadSessionAnalytics
re("refresh_single_account_usage",{accountKey:o})               // wrapper refreshSingleAccountUsage; guarded by in-flight Set + toast
re("set_usage_refresh_interval",{interval:...})
```

---

## 加载链（结构层面，win-native 可达面）

以下为**前端可达面**的结构描述。组件 owner / 路由 / 状态模型 / TanStack Query key 在 win 侧**未 reduce**（无页面级文档），故只到 chunk + wrapper + invoke 层，不虚构组件树。

### Shell chunk（`index-B40jKs17.js`）—— App 壳启动面

- 启动命令：`load_bootstrap_state`（无参）→ `load_snapshot`（`{localOnly, forceMetadata}`，wrapper `loadSnapshot` 带去抖 preflight）。
- 使用刷新：`refresh_usage_snapshot`（无参）。
- 自动刷新间隔配置：`get_usage_refresh_interval`（无参）/ `set_usage_refresh_interval`（`{interval}`）—— 具体 UI 触发点在 shell chunk 内联，本轮未定位到 JSX/settings 入口（Unknown）。
- Dashboard 统计入口：`load_mcp_servers`（无参）。

> 注：mac 1.0.9 DISTILLED 记录 shell 层 `useCoreSnapshot()` 先 `load_bootstrap_state` 再 `load_snapshot`，且 bootstrap 可 seed usage-analytics/mcp-servers。**该顺序/seed 语义属 mac 源码推断，未在 win-native minified 层独立证实**——win 侧本轮只证实命令存在 + wrapper/argKeys，不搬 mac 的 mount-chain 结论。

### AnalyticsPanel chunk（`analytics-panel-6jtfGEeX.js`）—— usage-snapshot-panel 面

- 默认/激活面命令：`load_usage_analytics`（无参）。
- 明细分析（按 `range` 参数化，`range` 值域 win 侧未独立枚举，mac 记 `today|week|month` 属 mac 推断）：`load_session_analytics` / `load_token_analytics` / `load_tool_analytics` / `load_change_analytics`（各 `{range}`）。
- 配额历史：`load_quota_history`（`{accountKey}`）。

### Accounts chunk（`accounts-page-GdJYDnGj.js`）—— 逐账号刷新入口

- `refresh_single_account_usage`（`{accountKey}`）：guard = in-flight `Set` 去重 + 成功 toast（i18n key `accounts.refreshQuotaSuccess`）+ 对返回体 `.warnings[]` 的前端消费（暗示后端返回含 `warnings: string[]`，但后端契约本身 Unknown）。

---

## 后端链（Unknown）

本模块 13 命令的 win 后端 owner / handler / core / repository / persistence / HTTP / leaf 全部 **Unknown**——本轮无 IDA session。后续 producer 用 win IDB（`raw/binary/AiMaMi.1.2.3 win64.exe.i64`）定位 tauri 命令串 → `find_regex` → `xrefs_to` → 封闭 handler → `decompile`+`callees` 到 implementation leaf，闭合 dim2/dim3 及 dim4 出参侧。

## 复刻建议（消费侧）

- 前端命令面 + wrapper/argKeys 可直接用于对齐 Polaris 侧 invoke 封装（win-native grounded）。
- **不可**据本文件实现后端行为——后端契约 Unknown；出参 DTO 需等后端 IDA 归并或走产品决策（明确接受 mac DTO 形状作为跨平台基线时须显式 product_decision，本包未做此决策）。
