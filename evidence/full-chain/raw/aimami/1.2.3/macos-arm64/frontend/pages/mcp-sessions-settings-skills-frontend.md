# 1.2.3 前端页逆向 — mcp / sessions / settings / skills

来源（已 beautify 的产物 JS，仅读盘不逆二进制）：
- `frontend/beautified/mcp-page-LchViioT.js`（665 行）
- `frontend/beautified/sessions-page-D0Y3peQj.js`（929 行）
- `frontend/beautified/settings-page-B8vywarZ.js`（563 行）
- `frontend/beautified/skills-page-BwPTc5r0.js`（399 行）

命令映射来源：`frontend/ipc-contracts.jsonl`，按 `wrapper` 字段（页面里调用的 service 方法名）匹配 `command`（真实 Tauri 命令名）。四个页面共用同一份共享 bundle `assets/index-B40jKs17.js`（在本次分析中作为黑盒 import 源，未展开）。

---

## 1. mcp-page-LchViioT.js — MCP 服务器管理页

### 1.1 组件树

- `Te()`（L226-491）— 页面根组件，导出为 `McpPage`（L664-666）。
- `_e()`（L493-617）— 新增/编辑 MCP Server 的 Dialog 子组件，由 `Te` 在 L485-489 挂载，`open` 由 `n !== null` 驱动。
- `F()`（L619-641）— 通用文本输入行（label + Input），`_e` 内复用 4 次（name/command/args/url）。
- `L()`（L643-663）— 通用多行文本行（label + Textarea），`_e` 内复用 2 次（headers/env）。
- `G()`（L212-224）— transport/enabled 状态徽标（dot + text），行内复用于每个 server 行（L387-395）。
- Pagination 原子组件（从 shadcn Pagination 模式抄出，非本页业务逻辑，仅列出）：`K`(L110) `Q`(L120) `_`(L129) `z`(L138) `H`(L152) `U`(L167) `V`(L182)。

组件返回结构均为 `e.jsx/e.jsxs`（即 `React.createElement` 的 SWC 转译产物，`e` = jsx-runtime 别名），确认为 React 函数组件写法。

### 1.2 状态模型（`Te`，L226-288）

| 变量 | Hook | 用途 |
|---|---|---|
| `n,i` | `useState(null)` (L229) | 当前打开的编辑弹窗目标：`null` 关闭 / `"new"` 新增 / server 对象编辑 |
| `p,m` | `useState(null)` (L229) | 待删除 server 的 name（AlertDialog 触发态） |
| `h,u` | `useState(1)` (L229) | 分页当前页码 |
| `y` | 常量 `15`（非 state） | 每页条数 |
| `v` | `Z({minVisibleMs:800})`（L229） | 刷新按钮 loading 态的“最短可见时长”防抖 hook（推断：Z 是自定义 busy-indicator hook，未展开其定义） |
| `g,k` | `useQuery` — `queryKey:["mcp-servers"]`，`queryFn:()=>T.loadMcpServers()`，`staleTime:1/0`（L231-237，Infinity 永不过期，仅靠 invalidate 刷新） | → 命令 `load_mcp_servers` |
| `E` | `useMutation` — `T.setMcpServerEnabled(name,enabled)`（L251-263） | → 命令 `set_mcp_server_enabled`，`onSuccess` invalidate `["mcp-servers"]` |
| `D` | `useMutation` — `T.removeMcpServer(name)`（L264-275） | → 命令 `remove_mcp_server`，`onSuccess` 关闭删除弹窗 + invalidate |
| `f/M/C/c/o/b/d` | 派生值（`useMemo` 分页页码数组 L276-288） | 客户端分页/统计，无后端调用 |

`_e` 内部状态（L498-500）：`m/h`=name，`u/y`=transport（"stdio"\|"http"\|"sse"），`v/g`=command，`k/j`=args（逗号分隔字符串），`S/E`=url，`D/f`=env 多行文本，`M/C`=headers 多行文本。`useEffect`（L501-505）在 `open`/`server` 变化时回填字段。

### 1.3 交互动作 → 命令

| UI 动作 | 代码位置 | 命令 | 时序 |
|---|---|---|---|
| 点击「新增服务器」按钮 | L298-303 `onClick:()=>i("new")` | 无（仅开弹窗） | — |
| 点击刷新图标按钮 | L304-318 `onClick:S` | `load_mcp_servers` | `S`（L238-250）用 `v.run` 包裹 `refetch()`，失败弹 toast；非乐观更新，等待结果 |
| 点击「复制配置路径」 | L345-354 | 无 | 纯本地 `navigator.clipboard.writeText` + toast |
| 每行 Switch 切换启用 | L402-410 `onCheckedChange` | `set_mcp_server_enabled` | `E.mutate({name,enabled})` → `onSuccess` invalidate `mcp-servers`（非乐观，等待成功后刷新列表） |
| 每行编辑图标 | L411-423 `onClick:()=>i(t)` | 无（开弹窗） | — |
| 每行删除图标 | L424-437 `onClick:()=>m(t.name)` | 无（开确认弹窗） | — |
| AlertDialog 确认删除 | L478-482 `onClick:()=>p&&D.mutate(p)` | `remove_mcp_server` | 成功后 `m(null)` 关弹窗 + invalidate |
| 分页 prev/next/页码 | L442-463 | 无 | 纯本地 `u(setState)` |
| Dialog 内 transport 切换 (stdio/http/sse) | L564-569 | 无 | 纯本地 |
| Dialog「保存」按钮 | L609-613 `onClick:()=>c.mutate()` | `upsert_mcp_server` | `c`（L506-540）把 env/headers 文本解析为对象后调用 `T.upsertMcpServer({...})`；成功后 invalidate + `onClose()`；`disabled: !name \|\| isPending` |
| Dialog「取消」按钮 | L605-608 | 无 | 关闭 |

### 1.4 对话框/流程

- **新增/编辑弹窗**（`_e`，单一组件复用两种模式）：`n==="new"` 走新增（name 可编辑），`n` 为 server 对象走编辑（name 禁用，`disabled:!!s` L556）。保存走同一条 `upsertMcpServer` mutation。
- **删除确认 AlertDialog**（L465-484）：`open: p!==null`；标题/描述用 i18n `mcp.delete`/`mcp.confirmDelete`；确认按钮红色destructive 样式。
- **空态**：`f.length===0` 时渲染服务器图标 + `mcp.empty` 文案（L363-372），不显示分页。
- **分页**：客户端分页，`c<=7` 全部页码，否则用省略号折叠（首页+邻近3页+尾页），逻辑在 L276-288。

---

## 2. sessions-page-D0Y3peQj.js — 会话/线程管理页

### 2.1 组件树

- `Js()`（L608-926）— 页面根组件，导出为 `SessionsPage`（L927-929）。
- `Bs()`（L92-142）— 顶部用量统计 4 格 bento 卡（总会话数/总大小/活跃天数/日均），独立 `useQuery`。
- `Ws()`（L283-354）— 分组行（按 project 或 `__conversations__` 分组），含复选框、展开/折叠箭头、子节点列表。
- `Gs()`（L356-476）— 分组内根线程节点行（顶层 thread），含迁移 worktree / 导出 markdown 按钮。
- `xs()`（L478-606）— 递归子线程节点行（缩进按 `level*12px`，L586），结构与 `Gs` 相似但去掉了顶层专属的一些视觉元素。
- `Y()`（L265-281）— 自绘复选框原子组件（非 shadcn Checkbox，纯 button + Check 图标）。

### 2.2 状态模型（`Js`）

| 变量 | Hook | 用途 |
|---|---|---|
| `i`(ref) | `useRef(false)` (L611) | 首次数据加载后“自动展开第一个分组”的一次性 guard |
| `c,a` | `useState(new Set)` (L611) | 已选中 session id 集合 |
| `m,x` | `useState(new Set)` (L611) | 已展开的分组 key 集合 |
| `v,b` | `useState(new Set)` (L611) | 已展开的线程 id 集合 |
| `h,p` | `useState(null)` (L612) | 当前聚焦的 session id |
| `o,f` | `useState(null)` (L612) | 删除确认弹窗 payload `{ids,title,description,actionLabel}` |
| `g` | `ks({minVisibleMs:800})` (L612) | 刷新按钮 busy 防抖 hook |
| `j,S,C,M` | `useQuery` — `queryKey:["sessions"]`，`queryFn:()=>z.loadSessions()`（L615-621，无 `staleTime`，随挂载即请求） | → 命令 `load_sessions` |
| `l/H/_/P/q/ss` | `useMemo` 派生（L622-625）：扁平列表、id→session Map、`Rs()` 分组树、全部 id 扁平化、孤儿计数 | 纯前端聚合，无命令 |
| 三个 `useEffect`（L626-643） | 自动展开首组首线程 / 清理已删除的选中项 / 自动聚焦首个可见 session | 均为客户端派生态修正，不触发命令 |

分组算法：`Rs()`（L144-183）按 `isConversationThread` 或 `projectPath` 分桶，桶内用 `parentSessionId` 建父子树（孤儿线程 `isOrphan=true`），并按分组内最大 `updatedAt` 排序（`is()` L195-201）。

Mutation：
- `U`（L651-686）删除会话 — `mutationFn: n=>z.deleteSessions(n)` → 命令 `delete_sessions`；`onSuccess` 从已选集合移除成功删除的 id、若聚焦项被删则清空聚焦、关闭确认弹窗、并行 invalidate `["sessions"]` + refetch `["usage-analytics"]`；区分“部分失败”（`failed`非空，amber toast + `restartHint`）与“全部成功”。
- `K`（L686-724）导出 Markdown — 先动态 `import("./index-ZeD99E_m.js")` 拿 Tauri 对话框 `save`，弹原生保存路径选择器，再调用 `z.exportSessionMarkdown(id, path)` → 命令 `export_session_markdown`；用户取消（`save()` 返回空）抛 `"CANCELLED"` 并在 `onError` 里静默吞掉。
- `Q`（L725-745）迁移 worktree — `mutationFn: n=>z.migrateSessionWorktree(n.id)` → 命令 `migrate_session_worktree`；前置校验 `L(n)`（`canMigrate===true`）否则本地抛错；成功后 invalidate `["sessions"]`。

### 2.3 交互动作 → 命令

| UI 动作 | 代码位置 | 命令 | 时序 |
|---|---|---|---|
| 顶部刷新图标 | L796-809 `onClick:hs` | `load_sessions` + `load_usage_analytics` | `hs`（L644-650）`Promise.all([refetch(), refetchQueries(["usage-analytics"])])`，用 `g.run` 包裹防抖 |
| 顶部「删除 (n)」按钮（选中非空才显示） | L779-795 `onClick:()=>fs({ids:[...c],...})` | 无（先开确认弹窗） | `c.size>0` 才渲染此按钮 |
| 分组行复选框 | `Y` L309-311 → `onToggle:()=>p(s)` | 无 | `ps()`（L748-755）勾选/取消该组扁平化后的全部 id |
| 根线程/子线程行复选框 | L389-391 / L509-511 | 无 | 有子节点走 `onToggleBranchSelection`（整支树勾选），叶子走 `onToggleSessionSelection`（单选） |
| 点击行内容区域（非复选框） | `Gs` L377-379 `w()`，`xs` L499-501 | 无 | 有子节点：勾选整支 + 若未展开则展开；无子节点：单选该 id；两种情况都会 `onFocusSession(id)` |
| 每行「导出」图标 | L440-454 / L567-581 `onClick:l=>{W(l);o(s.session)}` | `export_session_markdown` | `K.mutate(session)` → 先弹文件保存对话框再调用命令；`disabled: !B(session) \|\| exportingId===id` |
| 每行「迁移 worktree」图标（仅 `R(session)` 为真时渲染） | L426-439 / L553-566 | `migrate_session_worktree` | `Q.mutate(session)`；`disabled: !L(session) \|\| migratingId===id` |
| 分组标题行点击 | `Ws` L308 `onClick:()=>b(s.key)` | 无 | 纯展开/折叠 `expandedProjects` Set |
| AlertDialog 确认删除 | L912-919 `onClick:n=>{n.preventDefault();o&&U.mutate(o.ids)}` | `delete_sessions` | 按钮文案 pending 时切换为 `common.loading` |

### 2.4 对话框/流程

- **删除确认 AlertDialog**（L899-924）：`open:o!==null`；描述里额外拼接 `sessions.deleteLagHint`（提示删除生效有延迟）；确认后走 `delete_sessions`，结果区分部分失败/全部成功两种 toast 文案，并统一带 `restartHint`（提示需要重启才能完全生效——与 mcp/skills 页的即时生效语义不同）。
- **加载遮罩**：`!j && (isPending||isFetching)` 时（L884-898）在树面板上叠加半透明 backdrop + spinner + `loadingTitle/loadingDescription`。
- **空态**（L814-824）：无分组且未加载中时显示 MessageSquare 图标 + `sessions.empty`。
- **树形层级**：分组（project 或 `__conversations__`）→ 根线程（`Gs`）→ 递归子线程（`xs`，按 `level` 累加左侧缩进 `Math.max(8, level*12)px`，L586）。
- **孤儿线程**：`parentSessionId` 存在但父节点不在当前集合内即标记 `isOrphan`，在分组标题栏汇总计数徽标 `sessions.orphanCount`（L838-844），单节点也各自打 amber 徽标。
- **警告提示**（`ms()` L250-255）：`rolloutMissing` 时提示、`worktreeMigration` 存在但 `canMigrate=false` 时提示阻塞原因，渲染在节点标题下方（L419-425 / L546-552）。

---

## 3. settings-page-B8vywarZ.js — 设置页

### 3.1 组件树

- `Je()`（L93-504）— 页面根组件，导出为 `SettingsPage`（L561-563）。
- `M()`（L506-520）— 分区包装（标题 + BentoCard，divide-y 分隔行）。
- `c()`（L522-539）— 单行设置项包装（左侧 label+description，右侧控件插槽）。
- `A()`（L541-560）— 分段控件（icon segmented control），封装共享原语 `Fe`（未展开，来自 index bundle）。
- Auto-switch 阈值 Dialog（内联 JSX，L427-497，未拆独立组件）。
- API Proxy Dialog：`Ie`（从 index-B40jKs17.js 直接 import，L497-502 仅挂载，未在本页文件内定义 —— 内部字段/命令超出本页范围，标记为"推断/外部黑盒"）。

**重要结构特征**：`Je` 的绝大多数配置项（`theme/accent/heatmap/language/refreshInterval/onCheckUpdate/onRefreshUsageStatus`）都是**由父组件通过 props 受控传入**（L93-107 函数签名），本页文件内没有为这些字段定义 useState/useQuery/useMutation。这说明这些跨页面共享的应用级偏好设置（主题、强调色、语言、刷新间隔）由更上层的容器组件统一持久化管理，`SettingsPage` 只是纯展示层。本页自身只对**本页私有的**设置项（自动切换阈值、热点、开机自启、检查更新）拥有独立状态和数据请求。

### 3.2 状态模型（`Je`）

| 变量 | Hook | 用途 |
|---|---|---|
| `le,p` | `useState(false)` (L111) | 自动切换阈值 Dialog 开关 |
| `C,I` | `useState(15)` (L111) | 5小时窗口阈值百分比输入值 |
| `N,F` | `useState(10)` (L111) | 周窗口阈值百分比输入值 |
| `ce,de` | `useState(false)` (L111) | 本次保存是否连带「启用」自动切换（区分“打开总开关”与“仅编辑阈值”两种入口） |
| `he,Q` | `useState(false)` (L111) | API 代理 Dialog 开关 |
| `R` | `je({minVisibleMs:600})` (L112) | 检查更新按钮 busy 防抖 |
| `pe,H` | `useState("...")` (L249) | App 版本号文本；`useEffect`(L250-252) 动态 `import("./app-TuXtMya9.js")` 调 `.getVersion()`，非 Tauri command 调用（走 Tauri app API 包装层，非本页 ipc-contracts 范围） |

Query：
- `b`=`useQuery(["has-notch"], u.hasNotch, staleTime:Infinity, enabled:D)`（L189-193）→ 命令 `has_notch`；`D=ve()` 是一个平台判定 hook（推断为 isMacOS 类判定，未展开定义）
- `ge`=`useQuery(["hotspot-enabled"], u.getHotspotEnabled, enabled:D&&b)`（L194-197）→ 命令 `get_hotspot_enabled`（仅 macOS 且有刘海才请求）
- `q`=`useQuery(["autostart-state"], u.getAutostartState)`（L198-200）→ 命令 `get_autostart_state`

Mutation：
- `O`（L117-157）关闭自动切换 — `u.setAutoSwitch(false)` → 命令 `set_auto_switch`。**本页唯一乐观更新**：`onMutate` 先 `cancelQueries` 再直接把 query cache 中 `status.autoSwitch.enabled` patch 为 `false`（L119-138），`onError` 回滚到快照并 toast，`onSuccess` toast（含返回的 warnings 文案）。
- `x`（L158-188）保存/启用自动切换 — `mutationFn: Oe`（从 `auto-switch-DujJXz0W.js` 导入，内部校验阈值为 1-100 整数后调用 `u.configureAutoSwitch(t5h,tWeekly,enable?true:undefined)`）→ 命令 `configure_auto_switch`；`onMutate` 仅 cancelQueries（无乐观 patch）；`onSuccess` 关闭 Dialog + 用响应数据 patch cache + toast（enable 与仅保存阈值两种文案）。
- `L`（L201-216）开机自启 — `u.setAutostartEnabled(bool)` → 命令 `set_autostart_enabled`；`onSuccess` invalidate `["autostart-state"]` + toast。
- `V`（L217-227）热点开关 — `u.setHotspotEnabled(bool)` → 命令 `set_hotspot_enabled`；`onSuccess` invalidate `["hotspot-enabled"]` + toast。

### 3.3 交互动作 → 命令

| UI 动作 | 代码位置 | 命令 | 时序 |
|---|---|---|---|
| 主题分段控件 onChange | L261-279 | 无（`onThemeChange` 回调给父层） | 父组件持久化 |
| 语言分段控件 onChange | L281-294 | 无（`setLanguage` 回调给父层） | 父组件持久化 |
| 强调色色块 onClick | L295-308 | 无（`setAccent` 回调给父层） | 父组件持久化 |
| 热力图配色色块 onClick | L309-322 | 无（`setHeatmap` 回调给父层） | 父组件持久化 |
| 热点 Switch（仅 macOS 有刘海时渲染） | L323-330 `onCheckedChange:t=>V.mutate(t)` | `set_hotspot_enabled` | 非乐观，等待成功后 invalidate |
| 开机自启 Switch | L331-339 `onCheckedChange:t=>L.mutate(t)` | `set_autostart_enabled` | 非乐观 |
| 自动切换总开关 Switch | L360-366 `onCheckedChange:t=>t?B(!0):O.mutate()` | 开启→无命令仅开 Dialog；关闭→`set_auto_switch` | 关闭走乐观更新，开启走 Dialog 二次确认阈值 |
| 自动切换状态徽标（阈值展示） onClick | L350-355 `onClick:()=>B(!1)` | 无（打开 Dialog 编辑阈值，不改变 enabled） | — |
| 刷新间隔分段控件 onChange | L367-381 | 无（`setRefreshInterval` 回调给父层） | 父组件持久化 |
| API 代理「编辑」按钮 | L394-399 `onClick:ue` | 无（打开 `Ie` Dialog） | 外部黑盒 Dialog，未展开其内部命令 |
| 「检查更新」按钮 | L410-425 `onClick:me,disabled:k` | 无直接命令（`onCheckUpdate()` 为父层注入的异步回调） | busy 防抖包裹；返回值 `"up-to-date"`/`"error"` 驱动 toast |
| 阈值 Dialog「保存」按钮 | L484-493 `onClick:()=>x.mutate({enable:ce,t5h:C,tWeekly:N})` | `configure_auto_switch` | `disabled: x.isPending \|\| !Z(C) \|\| !Z(N)`（`Z` 为 1-100 整数校验器，来自 auto-switch 模块） |
| 阈值 Dialog「取消」按钮 | L480-483 | 无 | 仅关闭 |

### 3.4 对话框/流程

- **自动切换阈值 Dialog**（L427-497）：由两个入口触发——① 打开总开关（`enable=true`）② 点击已启用状态下的阈值徽标（`enable=false`，仅编辑不改变启用态）；`B(t)`（L113-115）负责区分两种入口并预填当前阈值（默认 15/10）；保存统一走 `configure_auto_switch`，成功后关闭并用响应内容直接 patch 缓存（非 invalidate 而是写入，避免二次请求）。
- **API 代理 Dialog**（`Ie`，L497-502）：仅见挂载点 `open/onOpenChange/currentProxy/onSaved` 四个 prop，内部实现在共享 bundle 中，本次分析未展开（标记推断：命令名很可能是 `configure_api_proxy` 或类似，但未在本文件中出现，不作断言）。
- **乐观 vs 非乐观**：四个 mutation 中只有「关闭自动切换」（`O`）做了乐观更新+错误回滚；其余（保存阈值/热点/自启）均为常规「等待成功→invalidate」模式。这是本页在数据一致性策略上唯一的不对称点。

---

## 4. skills-page-BwPTc5r0.js — Skills 管理页

### 4.1 组件树

- `oe()`（L87-396）— 页面根组件，导出为 `SkillsPage`（L397-399）。
- `te()`（L66-85）— Installed/Backups 分段 Tab 控件，封装共享原语 `U`。
- Archive 图标 `se`（L47-64，lucide 内联定义，仅用于 backups 空态）。

无独立拆分的 Dialog/Card 子组件——两个 AlertDialog（移除确认、删除备份确认）均以内联 JSX 出现在 `oe` 内（L354-373、L374-393），结构几乎完全对称复制。

### 4.2 状态模型（`oe`）

| 变量 | Hook | 用途 |
|---|---|---|
| `r,u` | `useState("installed")` (L91) | 当前 Tab："installed" \| "backups" |
| `n,x` | `useState(null)` (L91) | 待移除的已安装 skill id（AlertDialog 触发态） |
| `p,h` | `useState(null)` (L91) | 待删除的备份 id（AlertDialog 触发态） |

Query：
- `y`=`useQuery(["installed-skills"], l.loadInstalledSkills, staleTime:Infinity)`（L92-94）→ 命令 `load_installed_skills`
- `N`=`useQuery(["skill-backups"], l.loadSkillBackups, enabled:r==="backups")`（L95-98）→ 命令 `load_skill_backups`，**懒加载**：只有切到 backups tab 才发起请求

Mutation：
- `b`（L99-125）导入 skill — 动态 `import("./index-ZeD99E_m.js")` 拿 Tauri `open` 目录选择对话框，选中路径后 `l.importSkill(path)` → 命令 `import_skill`；`onSuccess` invalidate `["installed-skills"]`；取消选择（`open` 返回非字符串）本地抛 `"CANCELLED"` 并在 `onError` 静默吞掉。
- `z`（L126-139）移除 skill — `l.removeSkill(id)` → 命令 `remove_skill`；`onSuccess` 关闭确认弹窗 + **同时 invalidate** `["installed-skills"]` 和 `["skill-backups"]`（暗示后端移除操作会顺带生成一份备份，故两个列表都需要刷新——推断，未见后端源码验证）。
- `w`（L140-153）恢复备份 — `l.restoreSkillBackup(id)` → 命令 `restore_skill_backup`；**无二次确认弹窗**，点击即触发；`onSuccess` invalidate 两个 query。
- `G`（L154-165）删除备份 — `l.deleteSkillBackup(id)` → 命令 `delete_skill_backup`；`onSuccess` 关闭确认弹窗 + invalidate `["skill-backups"]`。

### 4.3 交互动作 → 命令

| UI 动作 | 代码位置 | 命令 | 时序 |
|---|---|---|---|
| Tab 切换 installed/backups | L182-191 `onChange:s=>u(s)` | 切到 backups 时懒触发 `load_skill_backups` | `useQuery` 的 `enabled` 标志驱动，非手动调用 |
| 「导入」按钮 | L192-199 `onClick:()=>b.mutate()` | `import_skill` | 先弹目录选择器，选中后再调命令；`disabled:b.isPending` |
| 复制 Root Path / Backup Root Path 按钮 | L226-237 / L243-254 | 无 | 纯本地 clipboard + toast |
| 已安装行「移除」图标 | L283-297 `onClick:()=>x(s.id)` | 无（先开确认弹窗） | — |
| AlertDialog 确认移除 | L367-371 `onClick:()=>n&&z.mutate(n)` | `remove_skill` | 成功后关闭 + 双 invalidate |
| 备份行「恢复」按钮 | L328-335 `onClick:()=>w.mutate(s.id)` | `restore_skill_backup` | **无确认弹窗**，`disabled:w.isPending` |
| 备份行「删除」图标 | L336-350 `onClick:()=>h(s.id)` | 无（先开确认弹窗） | — |
| AlertDialog 确认删除备份 | L387-391 `onClick:()=>p&&G.mutate(p)` | `delete_skill_backup` | 成功后关闭 + invalidate `skill-backups` |

### 4.4 对话框/流程

- **移除已安装 skill 确认**（L354-373）：`open:n!==null`；文案 `skills.remove`/`skills.confirmRemove`；destructive 按钮样式。
- **删除备份确认**（L374-393）：`open:p!==null`；文案 `skills.deleteBackup`/`skills.confirmDeleteBackup`；destructive 按钮样式；与移除确认弹窗结构几乎完全一致（复制粘贴痕迹明显，两处 JSX 只有文案 key 和触发的 mutation 不同）。
- **空态**：installed tab 为空显示 `$`(Sparkles/Wand 类图标，L259) + `skills.empty`；backups tab 为空显示 Archive 图标 `se` + `skills.noBackups`。
- **不对称的确认策略**：移除已安装 skill 和删除备份都有二次确认，但“恢复备份”这一相对危险的覆盖性操作反而没有确认弹窗，直接点击即触发命令——是本页交互设计上的一个不一致点。
- **无分页**：与 mcp-page 不同，本页列表未做客户端分页。

---

## 5. 四页汇总：调用的全部 Tauri 命令（按 `ipc-contracts.jsonl` 的 wrapper→command 映射核实）

| 页面 | wrapper（页面内调用名） | 命令 |
|---|---|---|
| mcp | `loadMcpServers` | `load_mcp_servers` |
| mcp | `setMcpServerEnabled` | `set_mcp_server_enabled` |
| mcp | `removeMcpServer` | `remove_mcp_server` |
| mcp | `upsertMcpServer` | `upsert_mcp_server` |
| sessions | `loadUsageAnalytics` | `load_usage_analytics` |
| sessions | `loadSessions` | `load_sessions` |
| sessions | `deleteSessions` | `delete_sessions` |
| sessions | `exportSessionMarkdown` | `export_session_markdown` |
| sessions | `migrateSessionWorktree` | `migrate_session_worktree` |
| settings | `hasNotch` | `has_notch` |
| settings | `getHotspotEnabled` | `get_hotspot_enabled` |
| settings | `setHotspotEnabled` | `set_hotspot_enabled` |
| settings | `getAutostartState` | `get_autostart_state` |
| settings | `setAutostartEnabled` | `set_autostart_enabled` |
| settings | `setAutoSwitch` | `set_auto_switch` |
| settings | `configureAutoSwitch`（经 `auto-switch-DujJXz0W.js` 转调） | `configure_auto_switch` |
| skills | `loadInstalledSkills` | `load_installed_skills` |
| skills | `loadSkillBackups` | `load_skill_backups` |
| skills | `importSkill` | `import_skill` |
| skills | `removeSkill` | `remove_skill` |
| skills | `restoreSkillBackup` | `restore_skill_backup` |
| skills | `deleteSkillBackup` | `delete_skill_backup` |

共 22 条真实命令调用，均在 `ipc-contracts.jsonl` 中核实到一一对应的 `command` 字段，无一条为凭空推断。

未展开的外部黑盒（超出本次范围，仅记录挂载点）：
- `settings-page` 中的 `Ie`（API Proxy Dialog）——内部字段/命令定义在共享 bundle `index-B40jKs17.js`，本页只看到 4 个 props。
- `settings-page` 中 `theme/accent/heatmap/language/refreshInterval/onCheckUpdate` 的实际持久化逻辑——由父容器组件传入回调，本页文件内无对应实现。
- `mcp-page`/`skills-page`/`sessions-page` 中的 `Z`/`ks`/`je`/`R`/`g`（busy-debounce hook，`minVisibleMs` 参数一致）、`ve`（macOS 平台判定 hook）——定义均在共享 bundle 内，未展开。
