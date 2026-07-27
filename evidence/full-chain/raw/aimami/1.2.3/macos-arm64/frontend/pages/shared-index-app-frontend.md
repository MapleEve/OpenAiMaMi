# 1.2.3 前端页逆向 — shared-index-app

来源文件（beautified，行号均指该文件本身）：
- `frontend/beautified/app-TuXtMya9.js`（56 行）
- `frontend/beautified/index-B40jKs17.js`（43743 行，主 bundle）
- `frontend/beautified/index-CT6UOhc8.js`（55 行）
- `frontend/beautified/index-DkqVay8H.js`（53 行）
- `frontend/beautified/index-ZeD99E_m.js`（70 行）
- 命令映射参考：`frontend/ipc-contracts.jsonl`（131 条，静态扫描到的 `invoke(...)` 直接调用点，字段含 `callee`/`command`/`file`/`line`）

## 0. 文件范围定位（先说清楚这 5 个文件到底是什么）

这一批文件不是"某一个页面"，而是 AiMaMi（Tauri 桌面应用）的**共享入口层**：

- `app-TuXtMya9.js`：`@tauri-apps/plugin-app` 的前端包装库，纯函数导出，无 UI、无状态，供 `getVersion/getName/show/hide/setTheme/setDockVisibility/onBackButtonPress` 等调用（L1-57）。
- `index-CT6UOhc8.js`：`@tauri-apps/plugin-updater` 包装库，导出 `check()`（发起更新检查）与 `Update` 类（`download/install/downloadAndInstall/close`）（L1-55）。
- `index-DkqVay8H.js`：`@tauri-apps/plugin-event` + `plugin-deep-link` 包装库，导出 `listen/getCurrent/register/unregister/isRegistered/onOpenUrl`，处理 `tauri://*` 系统事件与 `aimami://` 自定义协议深链（L1-53）。
- `index-ZeD99E_m.js`：`@tauri-apps/plugin-dialog` 包装库，导出 `open/save/message/ask/confirm`（原生系统对话框）（L1-70）。
- `index-B40jKs17.js`：真正承载业务代码的主 bundle（vendor 库 + 应用代码混合打包，43743 行）。应用自身代码集中在文件尾部约 L12200-L13000（跨窗口共享 hook：usage snapshot / relay-state / 通知 / 深链 / 更新）与 L29400-L43743（Sidebar、TopBar、App 根组件、各类全局对话框、i18n 资源、多窗口挂载入口）。

**多窗口挂载入口**（`index-B40jKs17.js` L43730-L43741）：
```
const af = gA();                       // gA() = 当前 Tauri 窗口 label（非 Tauri 环境降级为 "main"）
if (af === "hotspot" || af === "voice-overlay" || af === "voice-search-overlay") { ...透明背景处理... }
d_.createRoot(document.getElementById("root")).render(
  h.jsx(Qe.StrictMode, { children: h.jsx(E_, { children: h.jsx(d7, {}) }) })
);
```
`d7()`（L43718-43720）按窗口 label 路由到 4 个独立的 React 子应用：
- `af === "hotspot"` → `f7()`（menu bar 图标下拉小组件）
- `af === "voice-overlay"` → `NI`（语音悬浮窗，未展开分析，超出本次文件范围）
- `af === "voice-search-overlay"` → `jO`（语音搜索悬浮窗，同上）
- 默认（`"main"`） → `o7()`（真正的主应用外壳）

`E_`（L8229-8276）是根级 `class ... extends g.Component` 错误边界（ErrorBoundary）：`getDerivedStateFromError` 捕获渲染异常，`componentDidCatch` 里调用 `Ao({level:"error", source:"react.error_boundary", ...})` 上报诊断日志，展示"出错了 / Something went wrong"兜底 UI 和"重试 / Try Again"按钮。

## 1. 组件树

### 1.1 主应用外壳（`af === "main"` 分支）
```
o7()                                     [L43159-43171] 主窗口 Provider 组合
├─ Kf(client: H1=uk())                   QueryClientProvider，独立 QueryClient 实例
│  └─ Jk(delayDuration:200)              TooltipProvider（radix）
│     └─ Dn.Provider                     自定义 HoverCard 式 Provider/Trigger（非 radix Tooltip，另一套气泡提示，用于 TopBar 图标按钮）
│        ├─ i7()                        App 根组件（真正的状态与路由中枢）[L43173-43427]
│        │  ├─ E6()  Sidebar            [L29562-29656]
│        │  │  ├─ HP/QP/XP/YP/Cy         shadcn Sidebar 系组件（Root/Header/Content/Footer/Menu）
│        │  │  ├─ A6()  单个导航项        [L29462+]（含 hover 图标动效 + countdown 徽标）
│        │  │  └─ T6()  主题切换按钮      [L29515+]（sidebar footer）
│        │  ├─ qP  SidebarInset（主内容区容器）
│        │  │  ├─ mz()  TopBar          [L31973-32101]
│        │  │  │  ├─ GP  SidebarTrigger + 分隔线 + 页面标题 h1
│        │  │  │  ├─ y   GitHub 按钮（跳转仓库，动效图标）
│        │  │  │  ├─ XC() 赞助/留言板按钮（×2，位置不同）
│        │  │  │  ├─ rz() 反馈入口按钮
│        │  │  │  ├─ fz() 神秘码（彩蛋码）触发按钮+对话框  [L31816-31943]
│        │  │  │  └─ W6() 通知下拉铃铛                     [L30119+]
│        │  │  │      （以上 5 个按钮全部包一层 ia() 红点角标 [L31959-31971]）
│        │  │  └─ kU()  逐路由过渡容器（每个已访问 tab 各一个实例，CSS opacity/transform 转场）[L26653-26686]
│        │  │      └─ xe(route) 按当前路由渲染以下之一：
│        │  │          ├─ "overview"   → K1()  Dashboard              [L42594-42689]
│        │  │          ├─ "accounts"   → GH  = lazy(accounts-page-GdJYDnGj.js#AccountsPage)
│        │  │          ├─ "mcp"        → qH  = lazy(mcp-page-LchViioT.js#McpPage)
│        │  │          ├─ "skills"     → QH  = lazy(skills-page-BwPTc5r0.js#SkillsPage)
│        │  │          ├─ "relayModel" → JH  = lazy(relay-page-iqa4dxHn.js#默认导出)
│        │  │          ├─ "voice"      → XH  = lazy(voice-page-CV7DqakD.js#默认导出)（隐藏 tab，见下）
│        │  │          ├─ "sessions"   → YH  = lazy(sessions-page-D0Y3peQj.js#默认导出)
│        │  │          ├─ "maintenance"→ ZH  = lazy(maintenance-page-BJvb7DUu.js#默认导出)
│        │  │          └─ "settings"   → e7  = lazy(settings-page-B8vywarZ.js#SettingsPage)
│        │  ├─ Vz() / eW()             （2 个未展开的全局挂件，仅见调用未深入分析——推断为提示/横幅类组件）
│        │  ├─ a7()  自动切号确认弹窗    [L43498-43561]
│        │  ├─ c7()  安装位置提示弹窗    [L43581-43608]
│        │  ├─ Uz()  应用内更新全屏弹窗（条件 `G && !E.open`）[L32837-32936]
│        │  └─ u$    深链结果面板（条件 `ee.payload` 非空，未展开——推断为 OAuth 回跳/deeplink 落地展示层）
│        └─ HH()   Codex Router 退出确认弹窗（Provider 层级，非路由内）[L43043-43129]
```
`K1()`（Dashboard/overview 页）内部子组件：
- `BH()` 当前活跃账号卡片（配额进度条 + 代理状态）[L42742-42846]
  - `$1()` 单个配额窗口进度条（5小时/每周）[L42848-42882]
  - `B1()` API 可达性状态徽标（未展开定义，按 props 推断）
  - `OH()` 手动代理配置对话框（按钮触发，`defaultModeOnOpen:"manual"`，未展开）
- `KH()` 数据健康状态卡片（codexHome/authExists/registryExists 三项检查 + 详情弹窗）[L42894-42988]
  - `W1()` 单条健康状态徽标（ok/warn/err 三态）[L42990-43010]
- `Bd`（4 个统计卡：账号数/会话数/MCP 数/技能数，代码内联未单独截取定义）
- `LH` = `lazy(analytics-panel-6jtfGEeX.js#AnalyticsPanel)`（用 `g.Suspense` 包裹，fallback 为 `UH()` 骨架屏 [L42691-42740]）

### 1.2 Hotspot 菜单栏小组件（`af === "hotspot"` 分支）
```
f7()                    [L43722-43729]
└─ Kf(client: q1=uk()) 独立 QueryClient（与主窗口 H1 不共享缓存，是另一份实例）
   └─ R2()             [L12642-12688] 真正渲染内容
       └─ 一个透明/黑色胶囊条：显示 "Codex" + 5小时/周配额百分比文本，
          点击整块区域 → Ee.focusMainWindow()（把主窗口拉到前台）
```

## 2. 状态模型

### 2.1 `i7()`（App 根组件）内联状态 —— 全部原文抄自 L43173-43264
| 变量 | Hook | 初值/来源 | 用途 |
|---|---|---|---|
| `e / t` | `useState` | `"overview"` | 当前激活的导航路由 key，切 tab 只是改这个字符串，不用 URL 路由 |
| `n / r` | `useState` | `FU()` | featureVisibility（哪些导航项/功能对当前账号可见，来自后端 `getDesktopFeatureVisibility`） |
| `i / a` | `useState` | `rD()` | headerRedDots（TopBar 各按钮的"新功能红点"是否显示） |
| `l / c` | `useState` | `xW()` | 已读的红点版本号快照（配合 `wW` 持久化到 localStorage，用于红点"点过一次就不再提示"） |
| `d`（ref） | `useRef` | `{authenticated:null, lightweight:null, authenticatedEpoch:0}` | 两种刷新模式（带心跳鉴权 / 轻量）各自的 in-flight Promise 缓存，防止重复并发请求（single-flight） |
| `f / p` | `useState` | `[]` | mysteryGrants（神秘码兑换后解锁的隐藏路由列表，含 `expiresAtMs` 到期时间） |
| `y / v` | `useState` | `Date.now()` | mysteryNow（用于驱动 grants 到期倒计时的当前时间戳） |
| `x / b` | `useState` | `false` | navConstraintsReady（导航可见性规则是否已完成首次加载，避免闪烁） |
| `S` | `E2()` | — | 全局账号/配额/连通性 snapshot 查询结果（`data/isLoading/refreshLive/refreshUsageOnly/initialUsageRefreshSettled`） |
| `C/k`（theme）, `T/M`（accent）, `R/D`（heatmap） | 自定义 hook | `eU()/tU()` | 主题（light/dark/system，写 localStorage `theme`）、强调色、日历热力图开关 |
| `_ / O` | `nt()` | react-i18next `useTranslation()` | `_.language`、`_.changeLanguage()`，语言切换后写 localStorage `app_language` |
| `I / B` | `useState` | `localStorage.getItem("sidebar_collapsed") === "false"` | Sidebar 展开/折叠状态，持久化 |
| `N / V` | `cU()` | — | refreshInterval 设置（自动刷新间隔） |
| `K` | `dU()` | — | 应用更新状态机：`idle/checking/available/downloading/installing/error` |
| `ee` | `mU()` | — | 深链（`aimami://...`）解析结果 `{payload, clear}` |
| `Q` | `wy(400)` | — | 400ms 空闲后置 true 的"就绪"标志，门控通知轮询与心跳 |
| `te/$/X/U` | `CU(Q)` | — | 通知列表、未读数、单条已读、全部已读 |
| `se` | `wy(900)` | — | 900ms 后触发对全部 8 个懒加载页面 chunk 的预取（`Promise.allSettled([import(...)×8])`，L43263） |
| `j` | `s7()` | — | 待确认的"自动切号"请求（pending auto-switch） |
| `E` | `l7()` | — | 应用安装位置检测结果（是否处于 macOS 只读/临时挂载路径） |
| `H` | `AU(e, {durationMs:240})` | — | 路由切换转场状态机：`mountedRoutes`（曾访问过的 tab 会一直挂载，不卸载）+ 每个 tab 的 `idle/active/exiting` 阶段 |

`useEffect` 订阅（均在 `i7()` 内，L43224-43260）：
1. 挂载时并发拉取 `featureVisibility`（`ue()`）与神秘码解锁记录（`Ee.getMysteryUnlockGrants()`），完成后 1200ms 再刷新一次（推断：等待后端账号/配额首帧数据落地后二次校准）。
2. `document.visibilitychange` 监听：窗口重新可见时重新拉取 `featureVisibility`。
3. `Q` 就绪后启动 30 秒定时器（`r7=30*1e3`），以 `withHeartbeat:false`（轻量模式）轮询 `featureVisibility`。
4. 监听 `mysteryGrants` 里最近到期的 `expiresAtMs`，用一次性 `setTimeout` 在到期瞬间清掉过期项并同步回后端 `Ee.mergeMysteryUnlockGrants`。
5. 首帧数据就绪（`x`）后，若当前路由不再被 `lP(...)` 规则允许显示，强制跳回 `"overview"`（推断：防止用户停留在因权限/解锁到期而突然不可见的 tab 上）。

### 2.2 数据获取层（跨页面共享，定义于 `index-B40jKs17.js` L12200-L12700 区域）
- 两套查询缓存键：`qr = ["snapshot","progressive"]`、`Nn = ["snapshot","display"]`（L12236-37），对应"轻量进度快照"与"完整展示快照"两个版本的账号/配额数据。
- `jA(e)`（L12498-12513）：`useEffect` 里监听 Tauri 事件 `runtime-state-updated`（常量 `g2`），把后端主动推送的 payload 写回 React Query 缓存（`persistProgressiveCache`/`persistDisplayCache` 视 `source` 字段而定）——**这是推送驱动而非纯轮询的缓存同步机制**。
- `E2()`（L12527 起）：组合以上两个 query + `jA` 订阅，对外暴露 `{data, initialUsageRefreshSettled, refreshLive, refreshUsageOnly}`，是 Dashboard/账号页/设置页/hotspot 组件共用的"账号快照"数据源。
- `ug(...)`（在 `K1()` 内使用，见 L42605-42628）：自定义 query hook，比标准 `Ua`（`useQuery` 别名）多一个 `cacheKey` 参数，用于 usage-analytics / mcp-servers / installed-skills 这类"可延迟到空闲期再拉"的次要统计数据（`enabled: c = wy(250)`）。
- `Bz()`/`zz()`（L32945+）：另一个共享 query（`queryKey: Bn=["relay-state"]`，`queryFn: Mn.loadState()`），供 relay 页等消费——本次未展开 relay 页面，仅确认其查询壳挂在共享层。
- `wm(e)`（L12262-66）+ `DA(e)`（L12268-83）：过滤掉一个固定哨兵 UUID（`00000000-0000-4000-8000-000000000001`）对应的"`-unlock` 伪账号"，不让神秘码解锁机制产生的占位账号污染正常账号列表（推断）。

useState/useEffect/useRef/useMemo/useCallback 在 `index-B40jKs17.js` 全文粗统计次数：`useState=138 useEffect=141 useReducer=3 useRef=178 useCallback=112 useMemo=65 useContext=37`（含大量 vendor 库自身的 hook 调用，非全部属于业务代码）。

## 3. 交互动作 → 命令（含时序）

| 交互 | 触发处 | 调用链 | 后端命令（经 `ipc-contracts.jsonl` 或源码内 `re("...")`/`fe("...")` 字面量核对） | 时序备注 |
|---|---|---|---|---|
| 点击 Sidebar "AiMaMi" 头像/标题 | `E6()` L29593 | `onClick={() => t("overview")}` | 无 IPC，纯前端状态切换 | — |
| 点击 Sidebar 导航项 | `A6()`（onClick 透传） | `t(route)` | 无 IPC | 切路由不卸载旧 tab，走 `kU` CSS 转场 |
| 点击 Overview "切换账号/添加账号" 按钮 | `BH()` L42830-38 | `onClick={a}` → `onSwitchAccount={() => e("accounts")}`（K1 内 L42675） | 无 IPC，仅路由跳转到 accounts tab | — |
| 点击 Overview 配额刷新（隐式，经 `C` 回调） | `BH()` L42753-62 | `r()` = `S.refreshUsageOnly({retryOnFailure:true})` → `Ee.refreshUsageSnapshot()` | `refresh_usage_snapshot`（L11864, `re("refresh_usage_snapshot")`） | 乐观：先置 `refreshing=true`，finally 里复位；带重试（800ms/1600ms 两次退避，L12568-76） |
| 点击"打开 Codex 文件夹" | `KH()` L42955-62 | `VH(codexHome)` → `Ee.openPath(e)` | `open_path`（L12185） | try/catch 吞掉错误（静默失败） |
| 点击 Hotspot 胶囊条 | `R2()` L12676-77 | `onClick={() => Ee.focusMainWindow()}` | `focus_main_window`（L12183） | Hotspot 窗挂载后延迟两帧 `requestAnimationFrame` 调 `Ee.hotspotReady()`（`hotspot_ready`，L12184），告知后端小组件已就绪 |
| 点击 GitHub / 赞助 按钮（TopBar） | `mz()` L31997-99, `P6()` L23657-62 | `P6(hz)` → `fe("plugin:shell|open",{path,with})` | `plugin:shell|open`（Tauri shell 插件，非本次 5 文件自带，属主 bundle 内其它 vendor 插件包装） | 打开系统默认浏览器 |
| 点击神秘码入口 → 输入兑换码 → 提交 | `fz()` L31877(打开)/L31911(输入)/L31932(提交) | `p()`：`Ee.getDeviceId()` → `Xr.redeemMysteryCode(deviceId, code)` → 成功后 `Ee.mergeMysteryUnlockGrants(grants)` → `onUnlocked(e)`（回填 `i7` 的 `f/p` state） | 本地：`get_device_id`(L12188)、`merge_mystery_unlock_grants`(L12190)；远程：`Xr.redeemMysteryCode` 走 HTTP（`$t(...)`，非 Tauri invoke，推断为公司云端增长/活动服务） | 提交按钮 `disabled` 由 `cc({minVisibleMs:800})` 控制的 `busy` 态防抖；成功后关闭弹窗、弹 toast、非幂等时 `queueMicrotask(iz)`（推断为触发彩带/confetti 动画） |
| TopBar 通知铃铛：单条已读 / 全部已读 | `W6()`（渲染） / `CU()` 内 `y`/`v`（L26571-26598） | `Xr.markNotificationRead(id, deviceId)` | 远程 HTTP（`Xr` 走 `$t`，非本地 invoke） | 全部已读为并发 `Promise.allSettled`，部分失败会重新整体拉一次列表兜底（`await p()`） |
| 关闭主窗口时若 Codex Router 处于运行中 | `HH()` 监听 Tauri 事件 `codex-router-exit-guard` 触发弹窗（L43047-54） | 用户选"关闭并停止路由" → `fe("quit_after_closing_router")`；选"保留路由运行" → `fe("quit_keeping_router")` | `quit_after_closing_router` / `quit_keeping_router`（直接字面量传给底层 `fe`=raw invoke，未经过 `Ee` facade） | 期间监听 `codex-router-toggle-progress` 事件驱动 `WH()` 进度条；失败时展示错误并允许"重试关闭" |
| 收到"待确认自动切号"事件 → 用户确认/跳过 | `a7()` + `s7()`（L43429-43496） | 确认：`Ee.confirmPendingAutoSwitchAndRestartCodex()`；跳过：`Ee.dismissPendingAutoSwitch()` | `confirm_pending_auto_switch_and_restart_codex` / `dismiss_pending_auto_switch`（L12196-99） | 挂载时先 `Ee.loadPendingAutoSwitch()` 拉一次；同时监听事件 `auto-switch-pending`（常量 `n7`）推送新请求；操作失败均 toast 报错后重新拉取一次当前状态兜底 |
| 应用检测到只读/临时挂载路径 | `l7()`（L43563-3579） | 挂载时 `Ee.checkUpdateInstallability()` → 若 `code` 为 `app_translocation`/`read_only_location` 则 `setOpen(true)` | `check_update_installability`（L11931） | 弹窗 `c7()` 提供"打开应用程序文件夹"按钮 → `Ee.openPath("/Applications")` |
| 应用更新：检查/下载安装/重试/跳过 | `dU()`（L25868-25939）+ `Uz()`（渲染，L32837-32936） | 检查：`index-CT6UOhc8.js` 的 `check()`；安装前二次校验：`ar("check_update_installability")`；下载安装：`Update.downloadAndInstall(onProgress)`；安装完成后：`ar("graceful_restart_for_update")` | `check_update_installability`；`graceful_restart_for_update`（字面量，走 `ar`） | 启动 1500ms 延迟后自动发起检查（非用户触发）；下载进度经 Tauri updater 的 `Started/Progress/Finished` 事件驱动进度条；错误分类识别只读位置/网络失败给出不同文案 |
| 收到 `aimami://` 深链（如 OAuth 登录回跳） | `mU()`（L26134-26178） | `getCurrent()/onOpenUrl()`（来自 `index-DkqVay8H.js`）+ Tauri 事件 `deeplink-activate` → `Mn.parseDeeplink(url)` → `ar("focus_main_window")` | `focus_main_window`（经 `ar`，与 `Ee.focusMainWindow` 命令名相同但走不同包装函数） | 解析结果存入 `ee.payload`，驱动 `i7()` 里的 `u$` 深链结果面板；解析失败弹 toast |
| 空闲 900ms 后预取全部页面 chunk | `i7()` L43261-64 | `Promise.allSettled([import(accounts-page)...×8])` | 无 IPC，纯前端资源预取 | 不含 `analytics-panel`（它由 K1 用独立的 `LH` 懒加载并延后到 Dashboard 渲染时机） |

## 4. 对话框 / 面板 / 流程

1. **Codex Router 退出确认（`HH`，L43043-43129）**：Provider 级挂载（不依赖具体路由），由后端事件 `codex-router-exit-guard` 驱动打开；内部再监听 `codex-router-toggle-progress` 驱动 `WH()` 进度条组件；三个操作分支——取消 / 保留路由后退出 / 关闭路由后退出，关闭失败可重试；`transitionInProgress` 为真时隐藏"取消/保留"按钮只留等待态（推断：路由正在切换中不允许中途退出）。
2. **待确认自动切号提示（`a7`，L43498-43561）**：显示当前账号与候选账号的邮箱+配额概要（`G1()` 格式化 5 小时/周窗口百分比），确认后调用重启 Codex 的合并命令，`c.warnings` 非空时额外弹 toast。
3. **安装位置提示（`c7`，L43581-43608）**：只有"取消"和"打开应用程序文件夹"两个操作，无法直接在只读位置完成安装。
4. **应用更新全屏弹窗（`Uz`，L32837-32936）**：五态 UI（checking/available/downloading/installing/error）叠在整个窗口之上（`fixed inset-0 z-50`），版本号 `vOld → vNew` 徽标 + changelog 滚动区 + 下载进度条（MB/MB）+ 安装完成后自动重启说明；`available` 态才展示"安装并重启"按钮，`error` 态展示"重试/暂时跳过"。
5. **神秘码兑换弹窗（`fz`，L31896-31942）**：`Qc/Qa`（Dialog Root/Content）+ 一个装饰性 `uz` 光泽条组件（`shineColor` 三色渐变，纯视觉，推断为"彩蛋/惊喜"氛围装饰）；输入框支持回车提交；提交按钮用 `xs` 组件切换 idle/busy 文案。
6. **通知下拉面板（`W6`，定义于 L30119，未逐行展开）**：从 `CU()` 拿 `notifications/unreadCount`，支持单条已读与全部已读回调。
7. **数据健康详情弹窗（`KH` 内 `Qc/Qa`，L42963-42986）**：点击健康徽标展开三项检查（codexHome/authExists/registryExists）的详情列表。
8. **手动代理配置对话框（`OH`，仅见调用未展开定义，L42838-44 / L42814-18）**：由"配置代理"按钮或不可达提示触发，`defaultModeOnOpen:"manual"`。
9. **红点角标（`ia`/`pz`，L31949-31971）**：TopBar 五个入口按钮统一的"新功能提示"外观（ping 动画 + 常驻小红点），点击按钮本体即视为"已查看"并回调 `onDismiss` 消掉红点（`onClickCapture` 捕获阶段处理，保证按钮自身点击逻辑仍会执行）。
10. **多窗口而非多路由**：`voice-overlay`/`voice-search-overlay`/`hotspot` 是三个独立的 Tauri 窗口（各自独立 `QueryClient` 实例、独立挂载树），不是主窗口内的路由或弹层；本次仅确认了 hotspot 分支（`f7→R2`）的实现，voice 相关两个分支的组件体（`NI`/`jO`）未展开分析，超出本文件集合范围。

## 5. 遗留 / 推断标注一览
- `Dn = {Provider, Trigger}`（L25572 附近定义）：推断为自定义 HoverCard 式气泡提示组件，非 radix Tooltip（radix Tooltip 是 `Jk`），仅在 TopBar 五个图标按钮上使用 `content` prop 传文案。
- `Vz()`、`eW()`（挂在 `i7()` 渲染树里，L43408）：仅确认调用点，未展开定义体，推断为全局提示横幅/公告类组件。
- `u$`（深链结果面板）：仅确认挂载条件（`ee.payload` 非空）与 props（`payload/onClose`），未展开定义体。
- `Xr` 对象上的方法（`markNotificationRead/getDesktopFeatureVisibility/redeemMysteryCode/getNotifications`）经内部 `$t(...)` 调用形如 `/client/notifications/{id}/read` 的路径，判定为**远程 HTTP API**（公司云端服务），区别于 `Ee` facade 的本地 Tauri `invoke` 命令；`$t` 内部实现（域名、鉴权头）未展开，超出本次"只读 JS 做前端结构分析"的范围。
- `bU(Q)`（L26535-26539）：`Q` 就绪后每 300 秒调用一次 `_C()`，推断为轻量"心跳"上报（未展开 `_C` 内部实现细节）。
