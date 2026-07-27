# 前端页面逆向文档 — analytics / maintenance / auto-switch (AiMaMi 1.2.3 macos-arm64)

来源文件（已 beautify 的构建产物，变量为单/双字符压缩名，hook 名、事件名、字符串字面量未压缩）：

- `frontend/beautified/analytics-panel-6jtfGEeX.js`（1647 行）
- `frontend/beautified/maintenance-page-BJvb7DUu.js`（792 行）
- `frontend/beautified/auto-switch-DujJXz0W.js`（13 行）
- 命令映射参考：`frontend/ipc-contracts.jsonl`

三个文件都从 `./index-B40jKs17.js` 导入公共依赖（React、i18n hook、TanStack Query hook、通用组件、API 服务对象等）。API 服务对象在 analytics-panel 中被导入为本地名 `z`（`s as z`），在 maintenance-page 中被导入为本地名 `v`（`s as v`）——两者是 index bundle 里同一个导出符号 `s`，即前端唯一的服务门面对象（内部方法通过 `re(command, args)` 调 `invoke`）。

---

## 1. analytics-panel-6jtfGEeX.js — AnalyticsPanel

### 1.1 组件树（返回 createElement/JSX 的函数，按文件内定义顺序）

- `R`（第 18-52 行）— 悬浮提示 Portal 组件（`ht.createPortal` 挂到 `document.body`），根据鼠标坐标自动避让视口边界，供下面所有图表的 tooltip 复用。
- `vt`（144-248 行）— 单序列柱状图（Bar Chart），供 sessions 图使用。
- `bt`（250-364 行）— 多序列折线图（Multi-line Chart），供 quota 图使用（5h/1w 两条线）。
- `kt`（366-479 行）— 柱状图叠加折线图（Bar + Line Combo），供 token 图使用（每日 token 柱 + 累计折线）。
- `ut`（481-581 行）— 环形图（Donut/Pie），供 token 分布（input/output/reasoning）与 tools 分布（edit/search）使用。
- `Nt`（583-710 行）— 双柱 + 折线组合图（分组柱状图叠折线），供 changes 图使用（写操作/读操作柱 + 总命令折线）。
- `Mt`（712-756 行）— 水平条形列表（Horizontal Bar List），供 tools 的 topTools 排行使用。
- `wt`（761-861 行）— 活动热力图（GitHub 风格 Calendar Heatmap），供 activity tab 使用，内部按周分列、按月分组打月份 label。
- `Ft`（869-885 行）— 热力图图例（Less→More 5 档色块）。
- `Lt`（902-1072 行，**主组件，export 为 `AnalyticsPanel`**）— 顶层面板：tab 切换 + 子面板路由。
- `At`（1074-1120 行）— activity tab 内容（自带 `useQuery`）。
- `Tt`（1122-1172 行）— sessions tab 内容（纯展示，数据由 `Lt` 传入）。
- `Ct`（1174-1276 行）— token tab 内容（纯展示）。
- `Et`（1278-1374 行）— tools tab 内容（纯展示）。
- `Ot`（1376-1452 行）— changes tab 内容（纯展示）。
- `Wt`（1454-1535 行）— quota tab 内容（纯展示，依赖 `accountKey`）。
- `D`（1537-1555 行）— 底部统计小卡片（label + value）。
- `H`（1557-1578 行）— 图例圆点（带光晕）。
- `G`（1580-1607 行）— 加载骨架屏（Skeleton，用 `et` 组件渲染 8 根假柱 + 3 个假统计块）。
- `U`（1609-1623 行）— 空状态占位（title + description）。
- `Pt`（1625-1637 行）— 顶部小圆角 loading 徽标（tab 切换中显示）。

### 1.2 状态模型

`Lt`（AnalyticsPanel 主组件）内部：

| 变量 | 类型 | 用途 | 行号 |
|---|---|---|---|
| `[s, i] = useState("activity")` | useState | 当前激活 tab（"activity"/"sessions"/"token"/"tools"/"changes"/"quota"） | 909 |
| `[a, c] = useState(null)` | useState | tab 切换过渡态 `{tab, startedAt}`，用于"最短 loading 展示时长"逻辑 | 909 |
| `[o, m] = useState("year")` | useState | activity tab 的时间粒度（week/month/year） | 909 |
| `[u, l] = useState("week")` | useState | 其余 tab（sessions/token/tools/changes）共用的时间粒度（today/week/month） | 909 |

共 4 个 `useState`。子组件里另有：`vt/bt/kt/ut/Nt/Mt`（图表组件）各自维护 1 个 `useState`（hover tooltip 状态 `{idx, x, y}`），`wt`（热力图）1 个 `useState`（hover day 状态），`R`（tooltip portal）1 个 `useState` + 1 个 `useRef`（定位）；`J`（684-696 行，字体缩放 hook）1 个 `useState` + 1 个 `useRef` + `ResizeObserver`。

**useQuery（`Lt` 内，均经 `V` = TanStack Query 的 `useQuery` hook）：**

| 变量 | queryKey | queryFn → 后端命令（经 ipc-contracts 映射） | enabled 条件 | staleTime |
|---|---|---|---|---|
| `p` | `["session-analytics", u]` | `z.loadSessionAnalytics(u)` → **`load_session_analytics`**（参数 `range`） | `n && (s==="sessions" \|\| pendingTab==="sessions")` | 5*60000ms |
| `d` | `["token-analytics", u]` | `z.loadTokenAnalytics(u)` → **`load_token_analytics`**（参数 `range`） | 同上（token） | 5*60000ms |
| `x` | `["tool-analytics", u]` | `z.loadToolAnalytics(u)` → **`load_tool_analytics`**（参数 `range`） | 同上（tools） | 5*60000ms |
| `j` | `["change-analytics", u]` | `z.loadChangeAnalytics(u)` → **`load_change_analytics`**（参数 `range`） | 同上（changes） | 5*60000ms |
| `h` | `["quota-history", accountKey ?? "none"]` | `z.loadQuotaHistory(accountKey ?? void 0)` → **`load_quota_history`**（参数 `accountKey`） | 同上（quota）且 `!!accountKey` | 60000ms |

`At`（activity tab 子组件）内单独一个 `useQuery`：`queryKey: ["usage-analytics"]`，`queryFn: () => z.loadUsageAnalytics()` → **`load_usage_analytics`**，`staleTime: Infinity`（1/0）。

以上 6 个 query 全部 `refetchOnMount: !1, refetchOnWindowFocus: !1`，即挂载/窗口聚焦都不自动重拉，只依赖 `staleTime` 和手动 `invalidateQueries`（本文件内未见 invalidate 调用，失效逻辑在别处，如 MaintenancePage 的 `clean` mutation 会 `invalidateQueries()` 全量失效）。

无 `useMutation`。

**useEffect（1 个，`Lt` 983-993 行）：**
- 依赖 `[a, N]`：当存在 pending tab 切换（`a` 非空）且对应 tab 数据已就绪（`payload` 或 `error`）时，用 `setTimeout` 补足到最短 320ms（`St = 320`）展示 loading 态后再真正切换 `i(a.tab)` 并清空 `c`；卸载时 `clearTimeout`。这是一个"防止 loading 一闪而过"的节流展示逻辑，不是数据订阅。

### 1.3 交互动作 → 命令

- **Tab 切换按钮**（1022-1026 行，`$t = ["activity","sessions","token","tools","changes","quota"]` 遍历渲染）：`onClick: () => F(M)`。`F`（995-1013 行）逻辑：
  - 若目标 tab 已有 payload（缓存命中）→ 直接切换，不触发新请求；
  - 若目标 tab 是 "quota" 但当前无 `accountKey` → 直接切换（会展示空状态，不发请求，见 §1.4）；
  - 否则设置 `c({tab: M, startedAt: Date.now()})` 进入 pending 态，触发对应 `useQuery` 的 `enabled` 变为真从而首次拉取，配合 §1.2 的 `useEffect` 做最短 loading 展示。
  - 这是**乐观 UI + 请求节流**模式：tab 切换本身立即响应，实际数据请求由 `enabled` 条件驱动的 TanStack Query 惰性触发（不是显式 invoke 调用点），且做了 5 分钟 staleTime 缓存 + 最短 loading 展示防闪烁，不属于 single-flight 去重（TanStack Query 自带按 queryKey 去重）。
- **Activity 时间粒度按钮**（1032-1036 行，week/month/year）：`onClick: () => m(M)`，仅切本地 state，不直接调用命令（触发 `At` 内部 query 但该 query 的 queryKey 固定为 `["usage-analytics"]` 不含粒度，粒度只影响本地 `useMemo` 对已拉取数据的切片 `i.slice(-7)/i.slice(-30)/i`，即**前端本地聚合**，不重新请求后端）。
- **其余 tab 时间粒度按钮**（1039-1043 行，today/week/month）：`onClick: () => l(M)`，会改变 `u`，从而改变 `p/d/x/j` 四个 query 的 `queryKey`（含 `u`），触发对应命令重新请求。

图表组件内的 `onMouseEnter/onMouseMove/onMouseLeave`（如 vt 217-228 行、bt 337-349 行、kt 451-463 行、ut 525-536 行、Mt 723-733 行、wt 821-836 行）均只更新本地 hover 状态用于 tooltip 定位，不调用任何命令。

### 1.4 对话框/面板/流程

本文件不含 Dialog；核心流程是"多 tab 懒加载 + 缓存 + 防闪烁 loading"：

1. 默认展示 activity（无网络请求即时渲染骨架 `G`，`At` 组件挂载后拉 `load_usage_analytics`，`staleTime: Infinity` 保证会话内只拉一次）。
2. 切到其它 tab 首次触发对应 `load_*_analytics` 命令；`sessions/tools` 数据量为 0（`totalSessions===0`/`totalCalls===0`/`totalCommands===0`/`totalTokens===0`）时渲染空态 `U`（1131/1183/1286/1385 行），而非报错态。
3. quota tab 无 `accountKey` 时渲染专门空态"quotaNoAccountTitle/Desc"（1463 行）；数据点 `< 2` 时渲染"quotaInsufficientTitle/Desc"（1467 行），即前端对样本量做了最小充分性判断。
4. 无独立 error toast；`error` 态目前只体现在 `N[tab].error` 布尔上，但各 tab 子组件（Tt/Ct/Et/Ot/Wt）代码里判断的是 `loading || !payload` 走 loading 骨架分支，**未见对 `error===true` 单独渲染错误 UI 的分支**（推断：请求失败时会被当作"仍在 loading 或无数据"处理，展示骨架屏而非报错提示——这是从代码结构推断，未见显式 error UI 组件）。

---

## 2. maintenance-page-BJvb7DUu.js — MaintenancePage

### 2.1 组件树

- `Qe`（182-351 行）— **RouterDiagnosticDialog**：路由诊断对话框（Dialog），内部再拆出：
  - `Z`（353-367 行）— 修复日志展示（FixLogDisplay，只读列表）。
  - `He`（369-408 行）— 单条诊断项（DiagnosticItem，含展开详情 + 单项修复按钮）。
- `aa`（411-765 行，**主组件，export 为 `MaintenancePage`**）— 维护页整体：一组"操作卡片列表" + 3 个弹层（重启确认 AlertDialog、调试日志上传 Dialog、`Qe` 诊断 Dialog）。
- `Ve`（767-790 行）— 单条操作结果提示条（InlineResultToast，5 秒后淡出并自动 dismiss）。

### 2.2 状态模型

`aa`（MaintenancePage 主组件）内部：

| 变量 | 类型 | 用途 |
|---|---|---|
| `[s, i] = useState({})` | useState | 按 action key 存放操作结果 `{type: success/error, message}`，用于渲染 `Ve` |
| `[u, g] = useState({})` | useState | 按 action key 存放"是否处于最短 loading 展示中"的布尔标记 |
| `[j, y] = useState(!1)` | useState | 重启确认 AlertDialog 开关 |
| `[w, k] = useState(!1)` | useState | `Qe` 路由诊断 Dialog 开关 |
| `[R, C] = useState(!1)` | useState | 调试日志上传 Dialog 开关 |
| `[b, S] = useState("")` | useState | 调试日志上传备注文本（限 2000 字符，740 行 `slice(0,2e3)`） |

共 6 个 `useState`，无 `useReducer`。

`Qe`（诊断 Dialog）内部另有 6 个 `useState`：诊断结果 `i`、扫描中 `g`、单项修复中的 itemId `y`、全量修复中 `k`、修复结果 `C`、错误信息 `S`。`He`（单项）内 1 个 `useState`（详情展开）。`Ve`（结果条）内 1 个 `useState`（淡出）+ 1 个 `useRef`（定时器）。

**useQuery（`aa` 内，`he` = `useQuery` hook）：**

| 变量 | queryKey | queryFn → 命令 |
|---|---|---|
| `x` | `["imageCompat"]` | `v.getImageCompat()` → **`get_image_compat`** |

**useMutation（`aa` 内，`A` = `useMutation` hook）：**

| 变量 | mutationFn → 命令 | onSuccess | onError |
|---|---|---|---|
| `N` | `v.setImageCompat(t)` → **`set_image_compat`**（参数 `enabled`） | `invalidateQueries({queryKey:["imageCompat"]})` + 结果提示 `maintenance.imageCompatDone` | 结果提示 error |
| `U` | `v.clean()` → **`clean`** | `invalidateQueries()`（**全量失效**，会连带让 §1 的 analytics query 因缓存失效在下次访问时重拉） + 提示 `cleanResult`（回显 `authBackupsRemoved/registryBackupsRemoved/staleEntriesRemoved`） | 提示 error |
| `K` | `v.forceKillCodex()` → **`force_kill_codex`** | 若 `killedCount===0` 提示 `forceKillNone`，否则按进程名去重计数（`Map` 聚合 `name → count`）拼成 `"name x2, name2"` 提示 `forceKillResult` | 提示 error |
| `B` | `v.restartCodex()` → **`restart_codex`** | 提示 `codexRestarted` | 提示 error |
| `l`（debugBundle） | 先动态 `import("./index-ZeD99E_m.js")` 拿 Tauri 对话框 `save`（另包依赖，非本文件定义）弹保存路径选择框（过滤 `*.zip`）→ `v.defaultDebugBundleFileName()` → **`default_debug_bundle_file_name`** 取默认文件名 → 用户选路径后 `v.exportDebugBundle(p)` → **`export_debug_bundle`**（参数 `targetPath`）；用户取消保存框则整个 mutation 返回 `null`，不调用 export | 若非 null，提示 `debugBundleDone`（回显 `targetPath`） | 提示 error |
| `c`（debugUpload） | `Re({userNote: t, category: "manual"})`（`Re` 是从 index bundle 直接导入的、已绑定 `upload_debug_report` 的调用函数，等价于 `v.uploadDebugReport(input)`）→ **`upload_debug_report`**（参数 `input`） | 清空备注框 `S("")` + 提示 `debugUploadDone`（回显 `reportId`） | 提示 error |

`n`（545-560 行）是一个通用"最短 loading 展示"包装函数：先用 `I.flushSync` 同步设置 `busy=true`（`I` = React `flushSync`，确保 loading UI 立即渲染而不被后续状态批处理吞掉），等待两帧（`requestAnimationFrame` 双重嵌套，等布局稳定）后执行传入的异步动作 `m()`，`finally` 里若耗时 `< 800ms`（`X = 800`）则 `setTimeout` 补齐到 800ms 再关闭 `busy`。此包装应用于除 `imageCompat` toggle（`ie` 走同一个 `n` 包装，见 566 行）外的所有卡片动作。

### 2.3 交互动作 → 命令

维护页是一组配置驱动的"操作卡片"（`oe` 数组，569-636 行，共 7 项），每项含 `key/icon/label/description/actionLabel/loadingLabel/onAction/variant?/isToggle?/toggleChecked?`，统一由 646-704 行渲染为列表，`onClick: onAction`（`isToggle` 的走 `Switch` 组件 `onCheckedChange`）：

1. `diagnose` → `onAction: () => k(!0)` 打开 `Qe` 诊断 Dialog（非直接调用命令，命令在 Dialog 内部触发）。
2. `debugBundle` → `onAction: () => n("debugBundle", () => l.mutateAsync())` → **`default_debug_bundle_file_name` + `export_debug_bundle`**（经系统保存对话框）。
3. `debugUpload` → `onAction: () => C(!0)` 打开上传备注 Dialog（命令在确认后触发）。
4. `clean` → `onAction: () => n("clean", () => U.mutateAsync())` → **`clean`**。
5. `forceKill`（`variant: destructive`） → `onAction: () => n("forceKill", () => K.mutateAsync())` → **`force_kill_codex`**。
6. `imageCompat`（`isToggle: !0`） → `onAction: () => ie(!(x.data ?? !1))` → **`set_image_compat`**，按钮态直接取当前 `x.data`（`get_image_compat` 的查询结果）取反作为乐观下一状态传入，成功后 `invalidateQueries` 使 `get_image_compat` 重新拉取校验真实值（**乐观更新 + 事后 invalidate 校正**模式）。
7. `restart`（`variant: destructive`） → `onAction: D`（`D = () => y(!0)`，即 561 行），先弹重启确认 AlertDialog，用户点确认按钮 `se`（563 行：`y(!1); n("restart", () => B.mutateAsync())`）才真正 → **`restart_codex`**。

`Qe` 诊断 Dialog 内部（均经裸 `L(...)` 直调，`L` 是 index bundle 内导出的真实 Tauri `invoke` 原语本体，不经过 `v`/`z` 服务门面对象包一层命令名映射，因此这两个命令名不出现在 `ipc-contracts.jsonl` 的 `re(...)` 扫描结果里，是本次逆向新确认的两个直调命令）：
- Dialog 打开（`useEffect`，230-232 行）或点击"重新检测"按钮 → `o(l)`（188 行）→ 直调 **`run_codex_router_diagnostics`**（无参数）→ 结果存入 `i`（`items` 数组，每项含 `id/label/status/fixable/detail?`）。
- 单项"修复"按钮（`He` 内，389-402 行）→ `onFix` → `U(l)`（199 行）→ 直调 **`fix_codex_router_issue`**（参数 `{itemId: l}`）→ 修复后自动**串行**再跑一次 `run_codex_router_diagnostics` 刷新列表（214-228 行同款模式）。
- "修复全部"按钮（B>0 时显示，仅当存在 `fixable && status!=="ok"` 的项）→ `K()`（214 行）→ 直调 **`fix_codex_router_issue`**（参数 `{itemId: "all"}`），随后同样串行刷新诊断结果。
- 诊断项按分组 `qe`（147-172 行，硬编码 21 个诊断项 id → 分组：config/auth/runtime/env）渲染为 4 个折叠分组（`ze` 顺序），未在映射表里的项默认归为 "runtime"（298 行 `qe[n.id] ?? "runtime"`）。

调试日志上传 Dialog（706-759 行）：确认按钮 `re`（567 行：`C(!1); n("debugUpload", () => c.mutateAsync(b.trim()))`）→ **`upload_debug_report`**。

### 2.4 对话框/面板/流程

三个独立 Dialog + 一个可复用结果提示条：

1. **重启确认**（`ye`/`je` 组件，AlertDialog 语义）：destructive 按钮触发 `D` 打开 → 用户在 `se` 确认后才真正调用 `restart_codex`；取消走 `common.cancel` 关闭无副作用。
2. **调试日志上传**（`J`/`ee` Dialog 语义，731 行 `rounded-2xl`）：文本框限 2000 字，隐私提示文案 `debugUploadPrivacy`，确认后调用 `upload_debug_report` 并清空输入。
3. **路由诊断**（`Qe`）：打开即自动跑一次诊断（首次带 `l=!0` 跳过最短展示时长逻辑，之后手动"重新检测"走完整 800ms 最短展示），诊断结果分 4 组展示，支持单项修复/全部修复，每次修复后自动重新诊断（形成"修复→刷新"闭环，不是一次性 fire-and-forget）；诊断/修复报错会展示红色错误条（`S` 状态），不会中断对话框。
4. **结果提示条**（`Ve`）：每次操作成功/失败后在对应卡片下方展开一条提示，5 秒后自动淡出并从 `s` 状态里移除（`onDismiss`），失败态用 `破坏性`红色样式，成功态用绿色样式。

除 `imageCompat` 外的每个卡片动作在触发时都统一走"最短 800ms loading 展示"包装（`n` 函数），防止真实请求过快导致 loading 态一闪而过；`imageCompat` 走同一包装但底层是乐观开关 + query invalidate 校正而非纯 mutation 展示态。

---

## 3. auto-switch-DujJXz0W.js — 校验/提交工具模块（非页面组件，无 JSX）

本文件只有 13 行，导出两个纯函数，不含任何组件树/state/dialog，是"自动切号"配置表单会调用的校验 + 提交辅助模块（真正的表单 UI 大概率在其它页面文件中，未在本次抽取范围内）：

```
function e(t) { return Number.isInteger(t) && t >= 1 && t <= 100 }
async function r(t) {
    if (!e(t.t5h) || !e(t.tWeekly)) throw new RangeError("Auto-switch thresholds must be integers from 1 to 100");
    return o.configureAutoSwitch(t.t5h, t.tWeekly, t.enable ? !0 : void 0)
}
export { e as i, r as s }
```

- `e`（导出名 `i`）— 阈值合法性校验：必须是 1-100 的整数（供 5 小时阈值 `t5h` 和周阈值 `tWeekly` 复用）。
- `r`（导出名 `s`）— 提交函数：先在前端本地校验两个阈值合法，任一非法则抛 `RangeError`（不发请求，纯前端拦截，属于**提交前置校验**而非依赖后端报错），合法则调用 `o.configureAutoSwitch(t.t5h, t.tWeekly, t.enable ? !0 : void 0)` → 对应命令 **`configure_auto_switch`**（参数 `threshold5hPercent/thresholdWeeklyPercent/enabled`，其中 `enabled` 字段：当 `t.enable` 为假时显式传 `undefined` 而非 `false`，说明后端把"不传 enabled"和"传 false"区分对待，即该字段可能是"仅在需要变更开关状态时才携带"的语义，其余情况维持原开关状态不动）。
- `o` 是从 `./index-B40jKs17.js` 导入的服务门面对象（`s as o`，与前两个文件里的 `z`/`v` 是同一个导出符号）。

---

## 4. 本次抽取覆盖到的全部 invoke 命令（去重汇总）

| 命令 | 来源文件 | 调用路径 |
|---|---|---|
| `load_session_analytics` | analytics-panel | `z.loadSessionAnalytics(range)`，经 `useQuery` |
| `load_token_analytics` | analytics-panel | `z.loadTokenAnalytics(range)`，经 `useQuery` |
| `load_tool_analytics` | analytics-panel | `z.loadToolAnalytics(range)`，经 `useQuery` |
| `load_change_analytics` | analytics-panel | `z.loadChangeAnalytics(range)`，经 `useQuery` |
| `load_quota_history` | analytics-panel | `z.loadQuotaHistory(accountKey)`，经 `useQuery` |
| `load_usage_analytics` | analytics-panel | `z.loadUsageAnalytics()`，经 `useQuery`（staleTime: Infinity） |
| `get_image_compat` | maintenance-page | `v.getImageCompat()`，经 `useQuery` |
| `set_image_compat` | maintenance-page | `v.setImageCompat(enabled)`，经 `useMutation` + 乐观取反 + invalidate 校正 |
| `clean` | maintenance-page | `v.clean()`，经 `useMutation`，成功后全量 `invalidateQueries()` |
| `force_kill_codex` | maintenance-page | `v.forceKillCodex()`，经 `useMutation` |
| `restart_codex` | maintenance-page | `v.restartCodex()`，经 `useMutation`，需先过确认 Dialog |
| `default_debug_bundle_file_name` | maintenance-page | `v.defaultDebugBundleFileName()`，串行先于 `export_debug_bundle` |
| `export_debug_bundle` | maintenance-page | `v.exportDebugBundle(targetPath)`，依赖系统保存对话框返回路径 |
| `upload_debug_report` | maintenance-page | `Re({userNote, category:"manual"})`（等价 `v.uploadDebugReport`），经 `useMutation` |
| `run_codex_router_diagnostics` | maintenance-page（`Qe` 诊断 Dialog） | 裸 `L(...)` 直调 Tauri invoke，不经 `v` 门面，无参数 |
| `fix_codex_router_issue` | maintenance-page（`Qe` 诊断 Dialog） | 裸 `L(...)` 直调，参数 `{itemId}`（单项或 `"all"`） |
| `configure_auto_switch` | auto-switch | `o.configureAutoSwitch(threshold5hPercent, thresholdWeeklyPercent, enabled?)`，前端先做 1-100 整数校验 |

共 **17 条**命令（其中 2 条为绕过服务门面对象的裸 invoke，属本次新确认发现，未出现在 `ipc-contracts.jsonl` 原有扫描结果中）。
