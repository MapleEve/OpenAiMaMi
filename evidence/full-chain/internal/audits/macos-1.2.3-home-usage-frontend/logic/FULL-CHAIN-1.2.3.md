# FULL-CHAIN — AiMaMi 1.2.3 home-usage-frontend (macOS, frontend-reachable surface)

本文件是**写代码/复刻依据**（dim1 前端控制流层）。只覆盖前端触发 → guard → useQuery/invoke → 命令的链路；后端 command owner → core → 持久化/HTTP 叶子在本轮为 Unknown（见 gate-report dim2/dim3），需后端时读兄弟包 `macos-1.2.3-sessions-analytics`。

**源引**（行号均指对应 beautified 文件本身）：
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md`（App 壳 `i7()` + Dashboard `K1()` + 共享快照 hook `E2()`）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` §1（AnalyticsPanel `Lt`）
- 命令名核对：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`

---

## 0. 页面/组件拓扑（谁渲染谁）

```
i7()  App 根组件 [index-B40jKs17.js L43173-43427]
├─ 路由 state e/t (useState "overview")，切 tab 只改字符串，无 URL 路由
├─ S = E2()  全局账号/配额/连通性 snapshot 查询（共享数据源）[L12527+]
├─ N/V = cU()  refreshInterval 设置（自动刷新间隔）—— 消费 get_usage_refresh_interval 的值
└─ xe(route) 路由渲染：
   └─ "overview" → K1()  Dashboard [L42594-42689]
      ├─ BH()  当前活跃账号卡片（配额进度条 + 代理状态 + 刷新）[L42742-42846]
      ├─ KH()  数据健康状态卡片（codexHome/authExists/registryExists）[L42894-42988]
      ├─ Bd    4 个统计卡（账号/会话/MCP/技能，内联）
      └─ LH = lazy(analytics-panel-6jtfGEeX.js#AnalyticsPanel) [Suspense, fallback UH() 骨架]
         └─ Lt  AnalyticsPanel 主组件 [analytics-panel L902-1072]
            ├─ tab: activity/sessions/token/tools/changes/quota
            ├─ At  activity tab 内容（自带 useQuery）[L1074-1120]
            └─ Tt/Ct/Et/Ot/Wt  其余 5 tab 内容（数据由 Lt 传入）
```

共享快照数据层（跨 Dashboard/账号页/设置页/hotspot 复用，`index-B40jKs17.js` L12200-L12700）：
- `qr = ["snapshot","progressive"]`、`Nn = ["snapshot","display"]`（L12236-37）：轻量进度快照 / 完整展示快照两版查询键 → **`load_snapshot`** 命令面。
- `jA(e)`（L12498-12513）：监听 Tauri 事件 `runtime-state-updated`（常量 `g2`），把后端主动推送 payload 写回 React Query 缓存 → **推送驱动而非纯轮询**的缓存同步。
- `E2()`（L12527+）：组合两 query + `jA` 订阅，对外暴露 `{data, initialUsageRefreshSettled, refreshLive, refreshUsageOnly}`。

---

## 1. 8 个 covered 命令的前端链路（consumerStartReady）

### 1.1 load_snapshot —— 全局账号/配额快照
- **触发**：App 挂载即由 `E2()` 组合查询发起（`qr`/`Nn` 两版查询键）；`jA` 订阅 `runtime-state-updated` 事件做推送更新。
- **渲染消费**：Dashboard `BH()` 账号卡（配额进度条 `$1()` 5小时/每周窗口 + `B1()` API 可达性徽标）与 `KH()` 健康卡消费 `S.data`。
- **命令绑定**：按 queryKey shape 推断为 `load_snapshot`（`ipc-contracts.jsonl` 存在该命令）；未见字面 `invoke("load_snapshot")`（accepted_unknown，需重读 L12200-12700 确认）。
- **状态字段**：`data / isLoading / refreshLive / refreshUsageOnly / initialUsageRefreshSettled`。

### 1.2 refresh_usage_snapshot —— 手动配额刷新
- **触发**：Dashboard `BH()` 卡内刷新回调 `r()`（shared-index §3，L42753-62）→ `S.refreshUsageOnly({retryOnFailure:true})` → `Ee.refreshUsageSnapshot()`。
- **命令绑定**：`re("refresh_usage_snapshot")`（L11864，字面确认）。
- **时序/边界**：乐观——先置 `refreshing=true`，`finally` 复位；带重试（800ms / 1600ms 两次退避，L12568-76）。

### 1.3-1.7 五个 analytics tab 命令（AnalyticsPanel `Lt`）
所有经 TanStack Query `useQuery`（`V` hook），`refetchOnMount:false` + `refetchOnWindowFocus:false`，仅靠 staleTime + `enabled` 惰性触发；无 useMutation（analytics §1.2）。

| 命令 | queryKey | queryFn | enabled guard | staleTime | tab |
|---|---|---|---|---|---|
| `load_session_analytics` | `["session-analytics", u]` | `z.loadSessionAnalytics(u)`（参数 `range`） | `n && (s==="sessions" ‖ pendingTab==="sessions")` | 5min | sessions |
| `load_token_analytics` | `["token-analytics", u]` | `z.loadTokenAnalytics(u)`（`range`） | 同上(token) | 5min | token |
| `load_tool_analytics` | `["tool-analytics", u]` | `z.loadToolAnalytics(u)`（`range`） | 同上(tools) | 5min | tools |
| `load_change_analytics` | `["change-analytics", u]` | `z.loadChangeAnalytics(u)`（`range`） | 同上(changes) | 5min | changes |
| `load_quota_history` | `["quota-history", accountKey ?? "none"]` | `z.loadQuotaHistory(accountKey ?? undefined)`（`accountKey`） | 同上(quota) 且 `!!accountKey` | 60s | quota |

- `u`（时间粒度 today/week/month）由「其余 tab 时间粒度按钮」`l(M)` 改（analytics §1.3, L1039-43），改 `u` 即改 4 个 query 的 queryKey → 重新请求。
- Tab 切换 `F(M)`（L995-1013）：缓存命中直接切；quota 无 accountKey 直接切（空态不发请求）；否则进 pending 态触发 `enabled`。乐观 UI + 请求节流，最短 320ms loading 展示防闪烁（`useEffect` L983-993）。

### 1.8 load_usage_analytics —— activity tab
- **触发**：`At`（activity tab 子组件）内单独 `useQuery`：queryKey `["usage-analytics"]`，queryFn `() => z.loadUsageAnalytics()`，**staleTime Infinity**（会话内只拉一次）。analytics §1.2。
- **粒度**：activity 时间粒度按钮（week/month/year）`m(M)` 仅切本地 state，不重新请求——粒度只影响本地 `useMemo` 对已拉数据的切片（`i.slice(-7)/i.slice(-30)/i`），即**前端本地聚合**。

---

## 2. 前端消费 / 错误 / 空态（dim4 前端半闭合）

- **服务门面**：`z`/`v`/`o` 是同一个 index bundle 导出符号 `s`（前端唯一服务门面），内部经 `re(command, args)` 调 `invoke`（analytics §开头）。
- **无独立 error UI**：AnalyticsPanel 各 tab 子组件（Tt/Ct/Et/Ot/Wt）判断 `loading || !payload` 走 loading 骨架分支，未见对 `error===true` 单独渲染错误 UI 的分支（analytics §1.4，从代码结构推断）——即请求失败被当作「仍在 loading 或无数据」处理，展示骨架屏而非报错。
- **空态**：sessions/tools/token/changes 数据量为 0 渲染空态 `U`（`totalSessions/totalCalls/totalCommands/totalTokens===0`）；quota 无 accountKey → `quotaNoAccount` 空态；quota 数据点 <2 → `quotaInsufficient`（前端最小样本量判断）。
- **响应 DTO / error envelope**：Unknown（待后端 dim4）。

---

## 3. consumerStartBlocked（2）与 exclusions（3）

### consumerStartBlocked
- **load_bootstrap_state**：`ipc-contracts.jsonl` 存在，但两份 page reduce 内未定位 UI 触发点（dim1 frontend-control-flow-missing）。推断为 boot-time / App-shell 生命周期命令；下轮查 `i7()` mount useEffect（L43224-43260）+ 共享 hook 层（L12200-12700）。
- **get_usage_refresh_interval**：被 `i7()` 的 `cU()` refreshInterval hook 消费（shared-index §2.1 `N/V | cU() | refreshInterval 设置`）——值在 home 壳内被读，但设置控件（mutate 入口）不在本模块两页内（大概率 SettingsPage）。candidate-only。

### exclusions（surfaced-in-home 但他模块 owner，RULE 8a 单 owner 纪律）
- **load_mcp_servers** → mcp 模块（Dashboard `Bd` 统计卡 + `ug()` 延迟查询簇，shared-index §2.2）。
- **set_usage_refresh_interval** → settings/system-usage 模块（win owner `windows-1.2.3-system-usage`）。
- **refresh_single_account_usage** → accounts 模块（win owner `windows-1.2.3-accounts`）。

---

## 4. 给实现侧的可用结论（allowedImplementationMode = reverse_guided）

在 C5 自研 dashboard/analytics 前端重实现兼容行为时，本前端可达面可直接用于：
1. **路由/组件拓扑**：overview 单 tab 字符串路由（非 URL），Dashboard = 账号卡 + 健康卡 + 4 统计卡 + 懒加载 AnalyticsPanel。
2. **数据获取模式**：共享快照 `load_snapshot`（progressive+display 双键 + 推送事件 `runtime-state-updated` 更新）；analytics 6 命令惰性 useQuery（staleTime 5min/60s/Infinity，enabled 按 tab + 参数 range/accountKey 驱动）；手动刷新 `refresh_usage_snapshot`（800/1600ms 退避重试）。
3. **交互契约**：tab 切换乐观 UI + 最短 320ms loading；粒度按钮 activity 走前端本地切片、其余 tab 走 queryKey 重拉；quota accountKey guard + 最小样本量 gating。
4. **禁止假设**（forbiddenAssumptions）：后端响应 DTO / error envelope 形状（Unknown，需后端或读 sessions-analytics 兄弟包）；Windows UI 层与 mac 一致（Unknown，禁外推）；`load_bootstrap_state` 触发点；`load_snapshot` 字面 invoke 名。
