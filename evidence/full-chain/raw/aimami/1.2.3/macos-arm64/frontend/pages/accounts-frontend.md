# AiMaMi 1.2.3 macOS-arm64 前端逆向 — accounts-page-GdJYDnGj.js

> 数据来源：`frontend/beautified/accounts-page-GdJYDnGj.js`（beautify 后，3082 行）+ `frontend/ipc-contracts.jsonl`（wrapper→command 映射）。
> 变量名压缩为单/双字符（Rollup/Vite chunk），但 React hook 名、事件名、字符串字面量（i18n key、toast 文案 key）未压缩，可直接读出真实语义。
> 本文只写文件中真实可见的内容；无法从本文件确证的地方，标"推断"并说明依据。

## 0. 文件结构概览

- L1-105：Vite chunk 头 + 从 `index-B40jKs17.js`（主 bundle，导出别名 `H`=IPC 命令对象、`e`=`jsx`、`l`=React 命名空间、`X`=`useMutation`、`it`=`useQuery`、`Ve`=`useQueryClient`、`T`=toast 函数、`G/Z/J/ee/te/oe`=Dialog 组合组件、`D`=Button、`Be`=Badge、`pe`=Checkbox、`ze`=Input、`ht/mt/ft/xt/We`=Select 组合组件、`Ps`=Switch、`V`=Tooltip（含 `.Trigger`）等）及若干子 chunk（`auto-switch-DujJXz0W.js`、`select-CRsimZYH.js`、`switch-B_VHNz4M.js`、`badge-eYG8ZyST.js`、`upload-BycvaRoU.js`、`plus-DnxD_oRh.js`、`shield-check-CroF74LQ.js`、`trash-2-DRwsDz2M.js`、`zap-Bf9T16Fv.js`、`refresh-cw-BQdVBu6V.js`）导入 lucide 图标与 UI 组件。
- L112-440：lucide-react 图标内联定义（`ArrowRightLeft`、`BadgeCheck`、`CalendarClock`、`CircleUser`、`Crown`(`gt`)、`Gem`(`$s`)、`Grid3x3`(`Bs`)、`KeyRound`(`Vs`)、`LayoutGrid`(`Ys`)、`Settings`(`qs`)、`Shield`(`Qs`)、`UserRound`(`Xs`)、`Users`(`bt`)、`WifiOff`(`Gs`)），license header 逐个保留，属该 chunk 私有内联图标（未走共享图标 chunk）。
- L442-461：`en/tn` 账号 token 状态描述文案选择器（结合 plan 免费/过期时间做特化文案）。
- L471-978：内联的 Radix `ScrollArea` 组件族（`Pt/Ot/qe/rn/an/Lt/Qe/on/cn/It/Ft/Ht` 等），是该 chunk 私有复制品，供 L1172、L1327 的对话框内滚动列表使用，非页面业务组件。
- L1101-1622：账号导入/导出三个 Dialog + 一个工具条组件（详见 §1）。
- L1688-1721：卡片顺序 localStorage 持久化辅助函数、邮箱脱敏函数、plan 常量数组。
- L1724-2440：`Jn`（页面主组件，导出名 `AccountsPage`，见 L3081-3082）。
- L2442-3080：`En`（最近刷新时间标签）、`Tn`（可拖拽卡片壳）、`Yt`（账号卡片本体）、`Rn`（plan 徽章）、`ke`（图标按钮）、`On`（token 状态徽章）、`Ae`（信息字段）、`Mn`（配额环形图）、`In`（新增账号 OAuth 对话框）+ 一批纯展示/映射函数（`Fn/Hn/Un/Pn/_n/Dn/Ln/Ct`）。

## 1. 组件树

```
AccountsPage (Jn, L1724, export as "AccountsPage")
├─ AccountImportExportControls (vn, L1436)  — 工具条内的导入/导出按钮组
│   ├─ SelectExportAccountsDialog (gn, L1277) — 选择要导出的账号
│   │   └─ [内联 ScrollArea] (Ge/Ft/$t, L1327)
│   ├─ ExportConfirmDialog (bn, L1382) — 导出风险确认
│   └─ ImportPreviewDialog (pn, L1101) — 预览导入内容并勾选
│       └─ [内联 ScrollArea] (Ge/Ft/$t, L1172)
├─ AddAccountOAuthDialog (In, L2955) — "+" 添加账号（ChatGPT OAuth）
├─ 共享 ProxyConfigDialog (导入别名 `ps`，L2296 调用处：<ps open={R} onOpenChange={_} currentProxy=... onSaved=... defaultModeOnOpen="manual" />) — 非本文件定义，来自主 bundle 共享组件，推断为代理配置弹窗
├─ 共享 ConnectivityBadge/StatusPill (导入别名 `ms`，L2177 调用处：<ms status={Le} onRefresh={...} onConfigureProxy={...} />) — 非本文件定义
├─ Switch-Confirm Dialog（内联 JSX，L2234-2260，未拆独立组件）
├─ Remove-Confirm Dialog（内联 JSX，L2261-2288，未拆独立组件）
├─ Auto-Switch Threshold Dialog（内联 JSX，L2302-2380，未拆独立组件）
├─ Quick-Settings Dialog（内联 JSX，L2381-2437，未拆独立组件：刷新间隔 Select + Hotspot Switch）
├─ LastRefreshedLabel (En, L2442) — 工具条右侧"最近刷新于…"
└─ 账号卡片网格（通过共享 Sortable 容器 `fs`，L2195-2233）
    └─ SortableAccountCard (Tn, L2469)
        └─ AccountCard (Yt, L2502)
            ├─ PlanBadge (Rn, L2689)
            ├─ TokenStatusBadge (On, L2768)
            ├─ InfoField ×4 (Ae, L2811) — 资料名/认证方式/订阅状态/到期时间
            ├─ QuotaRing ×2 (Mn, L2856) — 5小时窗 / 每周窗
            └─ IconActionButton ×4 (ke, L2703) — 切换/刷新配额/复制邮箱/移除
```

## 2. 状态模型

### 2.1 `AccountsPage`（`Jn`，L1724 起）props

`{ snapshotEnvelope, refreshLive, usageStatusReady, onProxySavedRefresh, onRefreshUsageStatus, refreshInterval, setRefreshInterval }`（L1724-1732）——均由父组件（Dashboard/App 级）注入，本文件不定义其内部实现。

**useState（共 16 处，L1736-1748, L2015）：**

| 变量 | 初值 | 用途 | 行号 |
|---|---|---|---|
| `h/m` | `""` | 搜索关键字（匹配 email/alias/accountName/workspaceName/profileName） | L1736 |
| `b/f` | `"all"` | plan 筛选下拉值 | L1736 |
| `y/k` | localStorage `aimami:accounts-card-density` | 卡片密度 `compact`/`comfortable` | L1737-1741 |
| `g/j` | localStorage `aimami:accounts-privacy-mode`(`"1"`) | 隐私模式（脱敏显示） | L1742-1747 |
| `C/P` | `Cn()`（读 localStorage `aimami:accounts-card-order`） | 用户自定义卡片拖拽顺序（键数组） | L1748 |
| `w/N` | `null` | 待"切换账号"确认弹窗的目标账号 | L1748 |
| `x/S` | `null` | 待"移除账号"确认弹窗的目标账号 | L1748 |
| `O/L` | `!1` | 新增账号 OAuth 弹窗开关 | L1748 |
| `R/_` | `!1` | 代理配置弹窗开关 | L1748 |
| `K/B` | `!1` | 自动切换阈值弹窗开关 | L1748 |
| `ue/be` | `!1` | 阈值弹窗内"启用自动切换"勾选状态 | L1748 |
| `q/ve` | `15` | 阈值弹窗 5 小时窗百分比输入 | L1748 |
| `Pe/Ze` | `10` | 阈值弹窗每周窗百分比输入 | L1748 |
| `qt/Je` | `!1` | 快捷设置弹窗开关 | L1748 |
| `Oe/tt` | `new Set` | 正在"刷新单账号配额"的 accountKey 集合（每卡片独立 spinner） | L1750 |
| `Ue/at` | `!1` | 顶部连通性徽章"刷新状态"按钮 busy 态 | L2015 |

**useRef：** `et`(L1748) — 守卫 effect 只在真正首次挂载时触发一次；配合模块级（非 React state）布尔量 `wt`（L1688，跨组件实例/重挂载共享）双重防抖，防止 StrictMode 或多次挂载导致重复静默刷新。

**useMemo（衍生数据，L1750-1764）：** `he`（原始账号数组）→ `ye`（按自定义顺序+isActive 置顶排序）→ `se`（再按搜索词+plan 过滤）→ `Q`（当前激活账号）→ `Qt`（过滤后 accountKey 列表，供拖拽容器用）。

**useQuery（`it`，L1766-1774）：**
- `queryKey: ["has-notch"]` → `queryFn: () => H.hasNotch()`，`staleTime: Infinity`，`enabled: Me`（`Me = is()`，推断为"是否 macOS/带刘海屏可探测环境"判定 hook）→ IPC 命令 `has_notch`。
- `queryKey: ["hotspot-enabled"]` → `queryFn: () => H.getHotspotEnabled()`，`enabled: Me && Se`（`Se` = 上一查询结果，即先确认有刘海屏能力再查热点开关）→ IPC 命令 `get_hotspot_enabled`。

**useMutation（`X`，L1775-1907）：**
- `nt`：`H.setHotspotEnabled(bool)` → 命令 `set_hotspot_enabled`；`onSuccess` 失效 `["hotspot-enabled"]` + toast。
- `Ie`（切换账号）：`H.switchAccountAndRestartCodex(accountKey)` → 命令 `switch_account_and_restart_codex`；`onMutate` 先 `ie()`（推断为暂停/加锁自动刷新的门闩函数）再 `await ce(d)`（推断为 `queryClient.cancelQueries` 封装）；`onSuccess` 关闭确认弹窗，若返回 warnings 含 `CLIENT_RESTART_FAILED`/`CLIENT_RESTART_DEFERRED` 则置顶展示该 warning 并用 `"warning"` variant，否则 `"success"`。
- `Fe`（移除账号）：`H.removeAccounts([accountKey])` → 命令 `remove_accounts`；`onSuccess` 从本地卡片顺序 `C` 中剔除已移除 key 并回写 localStorage。
- `He`（关闭自动切换）：`H.setAutoSwitch(!1)` → 命令 `set_auto_switch`；**乐观更新**：`onMutate` 用 `dt(d, updater)`（推断为对 `queryClient.setQueryData` 的包装）把缓存中 `status.autoSwitch.enabled` 直接改 `false`，并保存 `previous`/`previousProgressive` 两份快照；`onError` 用 `bs(d, {display, progressive})` 回滚两份缓存。
- `je`（保存/启用自动切换阈值）：`mutationFn: Ts`（从 `auto-switch-DujJXz0W.js` 导入，见 §3 说明）→ 内部校验后调用 `H.configureAutoSwitch(t5h, tWeekly, enable)` → 命令 `configure_auto_switch`；`onSuccess` 用 `dt` 把返回的 `autoSwitch` 对象写回缓存并关闭阈值弹窗。

**useEffect（L2025-2029）：** 首次挂载静默刷新——`wt || et.current || (wt=!0, et.current=!0, fe({silent:!0, forceMetadata:!0}))`，依赖 `[fe]`。

**其他自定义 hook：** `_e = cs({minVisibleMs: 800})`（L1748，`cs` 来自主 bundle，推断为"至少展示 800ms busy 态"的节流 hook，包一层 `run(asyncFn)` 语义，供顶部刷新按钮 spinner 使用，避免刷新过快导致 UI 闪烁）。

### 2.2 `AccountImportExportControls`（`vn`，L1436）

useState：`c/i`(选择导出弹窗开关)、`u/n`(用户勾选的导出 accountKey 列表或 null=全部)、`d/h`(导出风险确认弹窗开关)、`m/b`(导入预览数据)、`f/y`(导入预览弹窗开关)。

useMutation：
- `g`（执行导出）：`mutationFn` 内先动态 `import("./index-ZeD99E_m.js")` 取出 tauri-plugin-dialog 的 `save`，弹原生保存对话框（`filters: [{name:"AiMaMi Accounts Backup", extensions:["json"]}]`），拿到路径后调用 `H.exportAccountsToFile(path, selectedKeys)` → 命令 `export_accounts_to_file`（L1445-1465）。用户取消对话框时 `throw new Error("CANCELLED")`，`onError` 特判该 message 静默关闭而不弹错误 toast（L1480-1489）。
- `j`（发起导入预览）：同样动态导入 `open` 原生打开对话框，选中文件后调用 `H.previewAccountImport(path)` → 命令 `preview_account_import`（L1491-1513）。
- `C`（执行导入）：`mutationFn: ({filePath, expectedContentSha256, overwriteExisting, selectedKeys}) => H.importAccountsFromFile(...)` → 命令 `import_accounts_from_file`（L1524-1530）；`onMutate` 同样 `ie()+await ce(a)`；`onSuccess` 失效 `["quota-history"]`，按 `importedCount<=0` 分流"无可导入"或"导入成功/部分成功" toast。

## 3. 交互动作 → 命令（含时序）

1. **搜索框** `onChange`（隐式，通过 `value={h} onChange={o=>m(o.target.value)}`，实际渲染在 `Jn` 内 L2066-2071）→ 纯本地过滤，无 IPC。
2. **Plan 筛选** `onValueChange={f}`（L2072-2086）→ 纯本地过滤，无 IPC。
3. **导入按钮**（`vn` 内 `V.Trigger` 包裹，L1569-1583）`onClick={() => j.mutate()}` → 打开原生文件选择 → `preview_account_import` → 成功后 `b(data); y(!0)` 打开 `pn` 预览弹窗。
4. **`pn` 弹窗确认导入**（L1612-1619, L1560-1567）`onConfirm={P}` → `P(overwriteChecked, Array.from(selectedKeys))` → `C.mutate({filePath, expectedContentSha256, overwriteExisting, selectedKeys})` → `import_accounts_from_file`，`onMutate` 先取消在飞查询，成功后失效 `["quota-history"]`。**单飞**：按钮 `disabled={c||i.isPending}` 类模式（`w = j.isPending||C.isPending`，L1567）防重复点击。
5. **导出按钮**（`vn`，L1584-1598，`disabled={N||t<=0}`）`onClick={() => i(!0)}` → 打开 `gn` 选择导出账号弹窗（本地勾选，无 IPC）。
6. **`gn` "继续导出"**（L1372-1376）`onClick={() => a(f)}` → `k(selectedList)`（L1442-1444）→ 关闭选择弹窗 + 打开 `bn` 风险确认弹窗。
7. **`bn` "继续"**（L1424-1429）`onClick={r}` → 即 `g.mutate()` → 原生保存对话框 → `export_accounts_to_file`。
8. **隐私模式按钮**（L2096-2115）`onClick` 切换 `g` + 写 localStorage `aimami:accounts-privacy-mode`；影响 `An()` 邮箱脱敏与卡片视觉（复用"API 不可达"同款琥珀色高亮逻辑，`On` 组件 L2776 `n = s || tokenStatus 异常 || !isActive`）。
9. **密度切换按钮组**（L2142-2172，Comfortable/Compact 两态）`onClick` 切换 `y` + 写 localStorage `aimami:accounts-card-density`，无 IPC。
10. **顶部"刷新"图标按钮**（L2046-2058）`onClick={ss}`（`ss=async()=>{await fe()}`，L2013-2014）→ `fe` 内部调用 prop `refreshLive({forceMetadata: !silent})`（**推断**：`refreshLive` 未在本文件定义，但其调用参数形状 `{forceMetadata}` 与 `ipc-contracts.jsonl` 中 `load_snapshot(localOnly=false, forceMetadata=false)` 的参数完全吻合，故推断父组件把 `refreshLive` 实现为对 `load_snapshot` 命令的封装），失败且非 silent 时重试一次（`await sleep(1200)` 后 `forceMetadata:false` 重试，L1963-1975）；成功后失效 `["quota-history"]`，非 silent 时按 `refreshReport` 统计 token/metadata/usage 成功数拼接 toast 文案（L1979-2004）。全程包在 `_e.run(...)`（"至少 800ms busy" hook）内，防抖/防止 spinner 闪烁。
11. **连通性徽章的"刷新"**（`ms` 组件 `onRefresh` 属性，L2177-2183）`onClick→ns()`（L2015-2024）→ 调 prop `onRefreshUsageStatus()`（父级实现，本文件不可见），用本地 `Ue` 状态防止并发点击。
12. **自动切换图标按钮**（L2116-2130）`onClick={() => st(!me)}` → `st`（L1764-1765）预填当前阈值并打开阈值弹窗，**不直接发 IPC**。
13. **阈值弹窗"保存"**（L2368-2378）`onClick={() => je.mutate({enable:ue, t5h:q, tWeekly:Pe})}`，`disabled` 要求 `ut(q)&&ut(Pe)`（`ut` 从 `auto-switch-DujJXz0W.js` 导入的整数 1-100 校验函数，L1711 处 `i as ut` 别名冲突提示：实为同一模块导出的 `e` 函数即校验器）→ `Ts`（`auto-switch-DujJXz0W.js` L8-11：校验后调用 `H.configureAutoSwitch(t5h, tWeekly, enable?true:undefined)`）→ `configure_auto_switch`。
14. **阈值弹窗"关闭自动切换"**（仅 `me` 为真时显示，L2355-2361）`onClick={() => {B(!1); He.mutate()}}` → `set_auto_switch(false)`，乐观更新已提前把 UI 置为关闭态。
15. **快捷设置弹窗内热点 Switch**（L2430-2434）`onCheckedChange={o => nt.mutate(o)}` → `set_hotspot_enabled`，成功后失效 `["hotspot-enabled"]`。
16. **快捷设置弹窗内刷新间隔 Select**（L2404-2419）`onValueChange={o => u(o)}` → 即父级 prop `setRefreshInterval(o)`，本文件不含具体持久化实现。
17. **"+ 添加账号"按钮**（L2039-2045）`onClick={() => L(!0)}` → 打开 `In` OAuth 弹窗。
18. **`In` 弹窗"开始"**（L3045-3053）`onClick={m}`（L2970-3017）：先 `flushSync(()=>u(!0))` 强制同步渲染 busy 态，再等两帧 `requestAnimationFrame` 确保 spinner 先绘制出来，然后 `ie()+await ce(c)` 取消在飞查询 → `await H.beginChatgptOauthLogin()` → `begin_chatgpt_oauth_login`；按返回 `outcome`（`alreadyActive`/`updated`/其它=成功新增）分三种 toast 文案，成功后 `s(!1)`(关闭弹窗) + `r()`（即 `onImported` → `fe({silent:!0, forceMetadata:!0})` 静默刷新）。异常处理：字符串以 `"OAUTH_CANCELLED:"` 开头或 `n.current`（用户主动取消标记）为真时按"已取消"处理而非错误。
19. **`In` 弹窗"取消"（busy 中）**（L3041-3044）`onClick={() => i ? h() : d(!1)}` → `h()`（L2963-2969）调用 `H.cancelChatgptOauthLogin()` → `cancel_chatgpt_oauth_login`，并把结果写入 `n.current` 供 `m()` 内部区分"用户主动取消"与其它失败。
20. **拖拽排序**（共享 Sortable 容器 `fs`，L2195-2233）`onReorder={ts}`（L1954-1961）：从新顺序中剔除当前激活账号 key，按"非激活账号列表"重新映射生成新顺序数组，写入 `C` 状态并持久化到 localStorage `aimami:accounts-card-order`；`collisionDetection={Jt}`（L1948-1953）自定义排除激活账号所在的可放置区域，使置顶卡片不可被拖拽顶替；纯本地交互，无 IPC。
21. **卡片"切换到此账号"图标按钮**（`Yt` 内 `ke` 用法，L2616-2620）`onClick={c}`（即 `onSwitch={() => N(o)}`，L2225）→ 打开确认弹窗 → 确认按钮（L2252-2258）`onClick={() => w && Ie.mutate(w.accountKey)}` → `switch_account_and_restart_codex`。
22. **卡片"刷新配额"图标按钮**（L2621-2625）`onClick={h}`（即 `onRefreshQuota={() => Zt(o.accountKey)}`，L2229）→ `Zt`（L1922-1947）：若该 key 不在 `Oe` 忙集合中，加入后直接 `await H.refreshSingleAccountUsage(accountKey)` → `refresh_single_account_usage`（**不经 useMutation，独立 try/finally 管理每卡片 spinner**），按错误 message 子串（`"Token refresh failed"`/`"Usage fetch failed"`/`"not found"`）分流 3 种失败文案+1 种兜底文案。
23. **卡片"复制邮箱"图标按钮**（L2626-2629）`onClick={n}`（`onCopyEmail={() => Gt(o.email)}`，L2227）→ `Gt→rt`（L1908-1922）→ `navigator.clipboard.writeText`（浏览器 API，非 IPC）成功/失败均 toast。
24. **卡片"移除"图标按钮**（`isActive` 时 disabled，L2630-2635）`onClick={u}`（`onRemove={() => S(o)}`，L2226）→ 打开移除确认弹窗 → 确认（destructive，L2279-2286）`onClick={() => x && Fe.mutate([x.accountKey])}` → `remove_accounts`。
25. **Token 状态徽章可点击态**（`On`，仅当脱敏/不可达时，L2792-2807）`onClick`/`Enter`/`Space` → 调用 prop `onConfigureProxy`（即 `_(!0)` 打开代理弹窗）。

## 4. 对话框/面板/流程小结

| 对话框 | 定义 | 触发入口 | 关闭/确认动作 |
|---|---|---|---|
| SelectExportAccountsDialog | `gn` L1277 | 工具条导出按钮 | 勾选后"继续导出"→打开 ExportConfirmDialog |
| ExportConfirmDialog | `bn` L1382 | 上一步"继续导出" | "继续"→执行 `export_accounts_to_file`；展示三条风险提示（token/分享/存储） |
| ImportPreviewDialog | `pn` L1101 | 工具条导入按钮→`preview_account_import`成功后 | 勾选账号（自动预选"非本地激活且非冲突"项）+ 可选"覆盖冲突"复选框（仅当存在冲突且被选中时显示）→ 确认执行 `import_accounts_from_file`；loading 态用 `Y`(Loader2) 图标 |
| AddAccountOAuthDialog | `In` L2955 | 工具条"+ 添加账号" | "开始"→`begin_chatgpt_oauth_login`（busy 中按钮变 loading 文案），busy 中"取消"→`cancel_chatgpt_oauth_login` |
| 切换账号确认 | 内联 L2234-2260 | 卡片"切换"按钮 | 确认→`switch_account_and_restart_codex` |
| 移除账号确认 | 内联 L2261-2288 | 卡片"移除"按钮（激活账号禁用该按钮） | 确认（destructive 样式）→`remove_accounts` |
| 自动切换阈值弹窗 | 内联 L2302-2380 | 顶部自动切换图标 | "保存"→`configure_auto_switch`；"关闭自动切换"→`set_auto_switch(false)`（乐观更新） |
| 快捷设置弹窗 | 内联 L2381-2437 | 顶部齿轮图标 | 刷新间隔 Select（父级持久化）+ 热点 Switch→`set_hotspot_enabled`（仅刘海屏设备可见，`Me&&Se` 双重门控） |
| 代理配置弹窗（共享组件 `ps`） | 未在本文件定义 | 顶部连通性徽章"配置代理"或 Token 徽章点击 | 未知内部实现，仅确认调用点与 props 形状 |

## 5. 需澄清/推断项

- `refreshLive`、`onRefreshUsageStatus`、`onProxySavedRefresh`、`setRefreshInterval`、`usageStatusReady`、`snapshotEnvelope` 均为父组件注入的 props，其内部是否直接对应 `load_snapshot` 等命令需结合父组件（Dashboard/App 级）文件交叉验证，本文件仅能从调用参数形状做合理推断。
- `ie()`/`ce(qc)`/`dt(qc, updater)`/`bs(qc, {display, progressive})`/`Ce(err, fallback)` 为主 bundle 共享的乐观更新工具函数（推断分别对应"加锁/暂停自动刷新"、"取消在飞查询"、"写入查询缓存"、"回滚查询缓存"、"提取错误描述"），具体实现在 `index-B40jKs17.js`，未逐一反查。
- `ps`（代理配置弹窗）、`ms`（连通性徽章）、`fs`（可拖拽网格容器）为跨页面共享组件，本文件只出现调用点和 props，组件内部逻辑不在本文件范围内。
