# AiMaMi 1.2.3 macOS-arm64 前端逆向 — relay-page-iqa4dxHn.js

> 数据来源：`frontend/beautified/relay-page-iqa4dxHn.js`（beautify 后，4091 行，导出 `Qs as RelayModelPage`，见 L4090-4091）+ `frontend/ipc-contracts.jsonl`（wrapper→command 映射，第 114-131 行为 relay 服务对象 `je`/`Mn` 的方法）。
> 变量名压缩为单/双字符（Rollup/Vite chunk），但 React hook 名、事件名、i18n key 字符串字面量未压缩，可直接读出真实语义。
> 本文只写文件中真实可见的内容；跨文件（`index-B40jKs17.js`）才能确证的实现细节标"推断"并给出依据。

## 0. 文件结构概览

- L1-131：Vite chunk 头 + 从 `index-B40jKs17.js`（主 bundle）导入的别名表。关键别名：`e`=`jsx`、`s`=React 命名空间、`oe`=`useTranslation`（返回 `{t}`）、`Qr`=`useQuery`、`qt`=`useMutation`、`Hr`=`useQueryClient`、`k`=toast 触发函数、`V`=错误对象转字符串工具、`je`=relay 服务对象（`loadState/upsert/delete/activate/deactivate/setProviderNetwork/reorderProviders/testStream/fetchModelsDraft/revealApiKey/getQuota/getActive/getProxyStatus/getCodexRouterAuthReadiness/setCodexRouterEnabled/setCodexRouterNoAccountMode/exportConfig/importConfig/parseDeeplink`，方法名与 IPC 命令对应关系见 §3）、`Vr`=relay 状态 queryKey 常量、`ea`=组合查询 hook（推断为 `useRelayState`，聚合 `loadState`/`getActive`/`getProxyStatus`/router 开关等）、`ta`=组合 mutation hook（推断为 `useRelayMutations`，内部把 `je` 的方法包成 `useMutation`）、`da`=通用 invoke 包装（用于绕开 `je` 的一次性直调，如 `diagnose_codex_router`）、`Yt`=Tauri 事件 `listen()` 包装、`Xt`=`ReactDOM`（用 `Xt.flushSync`）、`Ke/Ue/Be/Ce/Me/dt`=Dialog 组合组件、`Ee/Te/Se/Ie/Pe/Oe/tt/ia`=AlertDialog 组合组件、`K`=Button、`ot`=Switch（从独立 chunk `switch-B_VHNz4M.js` 导入）、`Ne`=Tooltip（含 `.Trigger`）、`ra`=拖拽排序容器（dnd-kit 封装）、`aa`=排序策略常量、`la`=`useSortable` 风格 hook（`la(id, disabled)` → `{setNodeRef, style, attributes, listeners, isDragging}`）、`sa`=`RelayProviderForm`（推荐/自定义模型表单，本文件不定义其内部实现）、`yt`=`CodexRouterToggleProgress`（router 开关时的进度展示，共享组件）、`oa`=装饰性描边组件（`shineColor` 光效，用于"喵咪 relay"快速接入弹窗）。
- L131-330：11 个预置 relay provider 目录常量 `Sa`（DeepSeek 官方/智谱 GLM 国内版&国际版/Kimi 官方&Coding/MiniMax 国内&国际/小米 MiMo&Plan/OpenRouter），每项含 `slug/name/initial/color/baseUrl/brand/defaultWireApi/ides/description`，用于"添加模型"快速选择弹窗（§4.3）。
- L340-1296：`pn`/`xr`/`fr` 等私有内联动效图标（`FileCogIcon`/`AtomIcon`/`EarthIcon`，framer-motion `variants`）+ Radix `RovingFocusGroup`/`Menu`/`DropdownMenu` 组件族原始实现（L412-1589，非页面业务逻辑，是该 chunk 私有复制品，供 §1.2 的导入导出下拉菜单使用）。
- L1590-1695：基于上一段 Radix 原语二次封装的 shadcn 风格 `DropdownMenu*` 组件（`rs/as/pr/Ct/is/ls/cs/ds`）。
- L1696-1936：`us`（导入导出下拉菜单+导出确认弹窗，§1.2）、`ms`（导出默认文件名生成器）、`Jt`/`ps`（导入跳过原因文案聚合）。
- L1937-2519：`Mt`（通用彩色徽章）、`gs`/`bs`/`ws`/`vs`（配额展示块及其格式化逻辑，§1.4）、`js`/`Ns`（健康状态徽章）、`hr`（Provider 卡片本体，§1.5）、`Rs`（延迟徽章）、`nt`（图标动作按钮）、`Cs`/`Ms`/`ks`（地址/品牌判定纯函数）。
- L2519-2919：`tn`（流式测试对话框，§4.4）、`rt`（测试步骤指示器）、`xe`（小徽章 Chip）、`_s`（延迟→色调映射）。
- L2920-3005：`As`（网络模式切换弹窗，系统代理/直连，§4.5）。
- L3007-3128：`Ds`（"喵咪 relay"推广头部，"喵咪relay 一键接入"品牌弹窗内容）、`Fe`（表单初始值常量）、`nn`（models 归一化函数）、`Es`/`Ts`（Codex 强退相关错误码识别）。
- L3130-4065：`Qs`（**页面主组件**，导出为 `RelayModelPage`）。
- L4067-4089：`Is`（IDE 作用域文案）、`Ps`（顶部代理运行状态胶囊，§1.6）。

## 1. 组件树

```
RelayModelPage (Qs, L3130, 导出名 "RelayModelPage")
├─ ProxyStatusPill (Ps, L4071) — 顶部"中转代理运行中/已停止"状态胶囊
├─ CodexRouter 面板（内联 JSX，L3539-3604，未拆独立组件）
│   ├─ 总开关 Switch（router 启/停）
│   └─ NoAccountMode 子开关 Switch（"无账号模式"）
├─ Provider 列表面板（内联 JSX，L3605-3695）
│   ├─ "新建" 按钮 → 打开 AddModelDialog（N 状态）
│   ├─ "喵咪 relay" 快捷按钮 → 直接打开预填 baseUrl 的编辑弹窗（j=true 特殊皮肤）
│   ├─ RelayImportExportMenu (us, L1696) — 导入/导出下拉菜单
│   │   └─ ExportConfirmDialog（内联于 us 内，L1856-1908）
│   └─ SortableGrid（`ra`，共享 dnd-kit 容器，3 列网格）
│       └─ SortableProviderCard (Ss, L3082) — 包一层 `la()` 拖拽 hook
│           └─ ProviderCard (hr, L2292)
│               ├─ ProviderQuotaBlock (gs, L2164) — useQuery 拉配额
│               ├─ ProviderHealthBadge (js, L2270) / LatencyBadge (Rs, L2452)
│               ├─ Badge (Mt, L2153) — 启用/禁用/锁定 徽章
│               └─ IconActionButton ×4 (nt, L2466) — 网络切换/测试/编辑/删除
├─ Add/Edit Provider Dialog（内联 JSX，L3696-3788）
│   └─ RelayProviderForm (sa，共享组件，本文件不定义) — props `{form, setForm, formSessionKey, disabled, lockBaseUrl}`
├─ AddModelDialog（内联 JSX，L3789-3845）— 预置 11 家 provider 目录 + "自定义" 入口
├─ DeleteConfirm AlertDialog（内联，L3846-3869）
├─ CodexRouterUnavailable AlertDialog（内联，L3870-3887，无激活 codex provider 时提示）
├─ CodexRouterDisableConfirm AlertDialog（内联，L3888-3928，含 `yt` 进度展示）
├─ CodexRouterEnableConfirm AlertDialog（内联，L3929-3986，含虚拟邮箱提示 + `yt` 进度展示）
├─ NoAccountModeConfirm AlertDialog（内联，L3987-4036，含 `yt` 进度展示）
├─ TestStreamDialog (tn, L2529) — 按需渲染两处：
│   ├─ 已存在 provider 的"测试"入口（`ge` 状态）
│   └─ 编辑表单内草稿"测试"入口（`Xe` 状态）
│       └─ TestStepIndicator ×4 (rt, L2847) + Chip (xe, L2905)
└─ NetworkModeDialog (As, L2920) — 系统代理/直连 切换
```

## 2. 状态模型

### 2.1 `RelayModelPage`（`Qs`，L3130 起，无 props，纯内部状态）

**useState（共 20 处，L3145）：**

| 变量 | 初值 | 用途 |
|---|---|---|
| `v/w` | `null` | 当前编辑中的 provider id（`null`=新建模式） |
| `p/y` | `!1` | Add/Edit 弹窗开关 |
| `j/E` | `!1` | 是否"喵咪 relay 快捷接入"特殊皮肤（金色描边+推广头，L3702-3705） |
| `N/T` | `!1` | AddModelDialog（预置目录选择）开关 |
| `B/z` | `null` | 待删除 provider id（非 null 即弹出删除确认框） |
| `L/S` | `null` | 待切换网络模式的 provider id |
| `_/M` | `!1` | CodexRouter 启用确认弹窗开关 |
| `Q/Z` | `!1` | CodexRouter 停用确认弹窗开关 |
| `se/J` | `!1` | "无可用 codex provider，无法启用 router" 提示弹窗开关 |
| `ae/H` | `!1` | 启用 router 时是否将使用"虚拟邮箱"鉴权（`willUseVirtualAuth`） |
| `Ve/ie` | `"niuniu@woyao.pro"` | 虚拟邮箱地址（默认占位值，实际值来自 `getCodexRouterAuthReadiness`） |
| `g/G` | `null` | NoAccountMode 确认弹窗数据 `{enabled, virtualEmail}` |
| `X/ee` | `null` | NoAccountMode 当前动作 `"enable"/"disable"`（决定 busy 文案） |
| `ge/be` | `null` | 已存在 provider 的测试对话框目标 id |
| `Xe/le` | `!1` | 编辑表单草稿测试对话框开关 |
| `P/ue` | `!1` | router/noAccountMode 切换中的全局 busy 态 |
| `q/_e` | `null` | router 停用动作 `"restart"/"close"`（决定按钮文案） |
| `ye/we` | `null` | `codex-router-toggle-progress` 事件的最新 payload |
| `R/me` | `Fe`（表单初始常量） | Add/Edit 表单当前值（`{name, baseUrl, apiKey, model, wireApi, brand, models, network, ...}`） |
| `gr/br` | `0` | 表单 session key（每次打开弹窗自增，强制 `sa` 内部状态重置） |

**useMemo（L3145-3489）：** `O`（`ea()` 的查询数据）→ `pe`（`O.providers` 兜底空数组）→ `Ye`（按 `ide==="codex"` 过滤）→ `yr`（`O.activeByIde.codex` 兜底空数组）→ `Kt`（表单必填校验：name/baseUrl/apiKey/models 均非空）→ `ht`（表单当前 models 归一化列表）。

**useQuery/useMutation（组合 hook，非本文件直接调用 `useQuery`/`useMutation`）：**

- `n = ea()`（L3134）：查询 hook，返回 `{data}`；`data` 形状含 `providers[]`、`activeByIde{ide:string[]}`、`codexRouterEnabled`、`codexRouterNoAccountMode`、`proxy{running,baseUrl}`（由 `Ps` 组件消费）。**推断**：内部聚合 `load_relay_state`/`get_relay_active`/`get_relay_proxy_status` 三个 IPC 命令（依据：`je` 服务对象暴露这三个方法，且本文件未见对它们的直接调用，唯一入口是 `ea()`）。
- `{upsert:r, remove:a, activate:o, deactivate:c, setProviderNetwork:d, reorder:u, testStream:h, testDraftStream:f, setCodexRouter:m, setCodexRouterNoAccountMode:l} = ta()`（L3135）：10 个 `useMutation` 实例，逐一映射到 `je` 方法与 IPC 命令，见 §3 表格。
- `gs`（配额展示块，L2170-2176）直接调用 `Qr`（`useQuery`）：`queryKey: ["relay-provider-quota", t.id, t.updatedAt]`，`queryFn: () => je.getQuota(t.id)`，`enabled: !!t.apiKeyStored`，`retry: !1`，`staleTime: 300_000`，`refetchOnWindowFocus: !1`。

**useEffect：** 本文件业务组件（`Qs/hr/gs/tn/us/As`）均**未使用** `useEffect`；文件内全部 8 处 `useEffect` 都位于 L450-1200 的 Radix Menu/DropdownMenu 内部实现（键盘导航、entry-focus 等），与页面业务无关。实时进度不走 `useEffect` 订阅，而是在触发 mutation 前用 `Yt("codex-router-toggle-progress", cb)`（Tauri `listen`）**临时**注册监听，`finally` 块里手动 unlisten（L3174-3239、L3268-3307），属"一次性监听"而非持久订阅。

## 3. 交互动作 → 命令（含 ipc-contracts.jsonl 映射）

`je` 对象方法 → IPC 命令（来自 `ipc-contracts.jsonl` L114-131，callee 均为 `Vt`）：

| 本文件调用点 | `je`/mutation 方法 | IPC 命令 | 时序备注 |
|---|---|---|---|
| `n = ea()`（L3134） | `loadState`（推断） | `load_relay_state` | 页面挂载即查询，驱动整张卡片网格 |
| `n = ea()`（L3134，推断聚合） | `getActive`/`getProxyStatus` | `get_relay_active`/`get_relay_proxy_status` | 与 loadState 一并驱动 `pe/yr/O.proxy` |
| `Wt()` 保存按钮（L3355-3415） | `upsert`(r) | `upsert_relay_provider` | 保存成功后走 `Ze()` 重置表单+关闭弹窗；若"保存并启用"则紧接调用 `activate` |
| `Tr()` 删除确认（L3507-3527） | `remove`(a) | `delete_relay_provider` | 删除中禁用弹窗按钮（`gt` 局部 busy 态），成功后若正在编辑该 provider 则一并关闭编辑弹窗 |
| `Mr(i)` 卡片开关（打开）（L3416-3438） | `activate`(o) | `activate_relay_provider` | 乐观 UI 无（等待 mutateAsync 成功才 toast），失败 toast 展示错误 |
| `kr(i)` 卡片开关（关闭）（L3439-3461） | `deactivate`(c) | `deactivate_relay_provider` | 同上 |
| `Ar(id,net)` 网络模式弹窗保存（L3464-3478） | `setProviderNetwork`(d) | `set_relay_provider_network` | 成功后 `S(null)` 关闭弹窗 |
| `Dr(i)` 拖拽排序结束（L3479-3488） | `reorder`(u) | `reorder_relay_providers` | `router` 开启时禁止拖拽（`disabled: I`），`u.mutate` 用 fire-and-forget（非 `mutateAsync`），失败仅 toast 不回滚（无乐观更新证据） |
| `h.mutateAsync({providerId, model, onEvent})`（卡片"测试"按钮，L3685） | `testStream`(h) | `test_relay_draft_stream`（**推断**，依据：`je.testStream` 在 `ipc-contracts.jsonl` L120 的实现始终以 Channel 方式调用该命令） | Channel 流式：`start→status→firstToken→delta*→done` |
| `Er()` 编辑表单草稿"测试"（L3492-3506） | `testDraftStream`(f) | `test_relay_draft_stream`（同上，草稿态） | 同上流式协议，`input` 为完整草稿字段（含明文 apiKey） |
| `ft(enable, relaunch)` router 总开关（L3174-3239） | `setCodexRouter`(m) | `set_codex_router_enabled` | 关闭时 `relaunch` 参数为 `false`(仅关闭)或 `true`(关闭并重启)，取决用户在确认框选的按钮；**启用成功后**紧跟直调 `da("diagnose_codex_router")`（IPC 命令 `diagnose_codex_router`，未出现在 `ipc-contracts.jsonl` 提取结果中，仅本文件直接可见）核对 `config.toml` 是否真的写入了 router/catalog，若否则弹出"用户已有 profile 配置"警告并提前 return |
| `Gt(enable, relaunch)` NoAccountMode 开关（L3268-3307） | `setCodexRouterNoAccountMode`(l) | `set_codex_router_no_account_mode` | 同样走"确认框→flushSync 置 busy→临时监听进度→mutateAsync→600ms 最短展示时长兜底→关闭" |
| `vr(i)`/`jr(i)` 开关触发前置检查（L3153-3267） | `getCodexRouterAuthReadiness` | `get_codex_router_auth_readiness` | 每次点开关前都重新查询一次鉴权就绪态（`willUseVirtualAuth`/`virtualEmail`/`hasUsableRealAuth`/`canRestorePreviousAuth`），非缓存复用 |
| `Nr(i)` 点击"编辑"（L3309-3329） | `revealApiKey`(providerId) | `reveal_relay_api_key` | 先用空 apiKey 打开表单，再异步回填明文 key（`then` 里做了"仍是同一 provider 且当前值为空"才写回的竞态保护） |
| `h`/`f` 内 `queryFn`（`gs` 组件，L2172） | `getQuota`(providerId) | `get_relay_provider_quota` | 仅当 `apiKeyStored` 为真时才 `enabled`；5 分钟 `staleTime`，不随窗口聚焦重查；点击刷新图标手动 `refetch()` |
| `us` 组件导出（L1721） | `exportConfig`(path, includeApiKeys) | `export_relay_config` | 需用户先在系统"保存"对话框选路径（`@tauri-apps/plugin-dialog` 的 `save`，动态 import） |
| `us` 组件导入（L1764） | `importConfig`(path) | `import_relay_config` | `onMutate: () => Xr(r)`（推断为取消/暂挂进行中的 relay 状态查询，避免与导入结果竞态）；成功后显式 `invalidateQueries({queryKey: Vr})` 强制刷新整页数据（无乐观更新） |

未在本文件直接调用、但属同一 `je` 服务对象（`ipc-contracts.jsonl` 同段落）、疑似由共享组件 `sa`（`RelayProviderForm`）内部调用的命令：`fetch_relay_models_draft`（对应 `fetchModelsDraft`，推断用于表单内"自动探测可用模型列表"，本文件未见调用点，标记为参考项）。

## 4. 对话框 / 面板 / 流程

### 4.1 CodexRouter 总控面板（L3539-3604，内联非独立组件）

- 总开关：`checked={I}`（`I = !!O?.codexRouterEnabled`），`onCheckedChange={vr}`，`disabled={xt}`（`xt = P || m.isPending || l.isPending`，三者任一进行中即禁用两个开关，防并发切换）。
- 无激活 codex provider（`Bt` 为假）时点击总开关只弹 `se`（unavailable 提示），不进入 `getCodexRouterAuthReadiness` 检查。
- 有激活 provider 时先查 `getCodexRouterAuthReadiness`：若即将使用虚拟邮箱鉴权则弹 `_`（enable confirm，含虚拟邮箱提示条+5 条要点列表）；关闭时直接弹 `Q`（disable confirm，二选一"仅关闭"/"关闭并重启"）。
- NoAccountMode 子开关：`checked={Ut}`，`onCheckedChange={jr}`；开启 router 时（`I` 为真）先查一次鉴权就绪态，若"关闭"该模式且既无可用真实鉴权也无法恢复旧鉴权则直接 toast 阻止（`noAccountModeDisableUnavailableTitle`），否则弹 `g` 二次确认。
- 三个确认框内均嵌入 `<yt progress={ye} t/>`（仅当 `P && ye` 为真时展示），把 `codex-router-toggle-progress` 事件流实时渲染成进度条/文案。

### 4.2 Add/Edit Provider 弹窗（L3696-3788）

- `j`（是否"喵咪 relay"皮肤）为真时：弹窗顶部替换成 `Ds` 推广头（品牌 Logo+"点击访问"外链按钮走 `Jr.openPath`+3 个特性标签）、加 `oa` 光效描边，且 `lockBaseUrl` 传给 `sa` 表单（baseUrl 锁定为 `https://api.iiiiitoken.com`，用户不可改）。
- Router 锁定态（`I` 为真）下编辑已有 provider 会在表单上方插入黄色警告条（`relay.form.routerLockedNotice`），且底部"保存"/"保存并启用"按钮禁用（`disabled: ... || I`）。
- 底部"测试"按钮直接打开 `TestStreamDialog` 消费**当前表单草稿**（不需先保存），走 `testDraftStream`。
- "保存并启用"（`Wt(true)`）= `upsert` 成功后紧接 `activate`；若 `activate` 失败则单独 toast `savedButEnableFailed`（不回滚已保存的 upsert 结果）。

### 4.3 AddModelDialog（L3789-3845）

- 网格展示"自定义"入口 + `Sa` 中按 `ides.includes("codex")` 过滤后的预置 provider（DeepSeek/智谱/Kimi/MiniMax/小米/OpenRouter 等 11 项），点选后 `Rr(i)` 用该目录项的 `name/baseUrl/defaultWireApi/brand` 预填表单并直接打开 Add/Edit 弹窗（`j=false`，普通皮肤）。

### 4.4 TestStreamDialog（`tn`，L2529-2845）

- 四段式进度指示（`rt` ×4）：`request → header(statusMs) → firstToken(firstTokenMs) → done(totalMs)`，每段用相对时长做进度条宽度（`ms/scaleMs*100`）。
- 终端风格输出面板：显示请求方法/路径/Host/Accept 头，随后把 `delta` 事件文本逐字追加并自动滚到底部；失败时红色展示 `error` 字段；成功时展示"✓ 测试通过"绿色收尾行。
- 顶部模型下拉（`ma/pa/xa/fa/ha` = Select 组合组件）可切换 `models` 数组中的具体 model 再重新发起测试；正在运行/仅剩一个 model 时禁用切换。

### 4.5 NetworkModeDialog（`As`，L2920-3005）

- 两个单选卡片：`system`（系统代理）/`direct`（直连），描述文案来自 i18n `relay.network.option.{value}.{title|desc}`；底部固定提示 `relay.network.dialog.tunHint`（TUN 相关说明）。
- 仅当选择值与 provider 当前 `network` 字段不同（`h = d !== (r.network ?? "system")`）才允许点"保存"，保存走 `setProviderNetwork`。

### 4.6 Provider 卡片（`hr`，L2292-2450）内的四个图标动作

- 网络切换（`fr`=EarthIcon）→ 打开 `As`。
- 测试（`xr`=AtomIcon）→ 打开 `tn`（已存在 provider 分支）。
- 编辑（`Zr`）→ `Nr(i)`，打开 Add/Edit 弹窗并异步回填明文 apiKey。
- 删除（`wa`）→ 若 `locked`（router 锁定）则改为 `onLockedAction`（toast 提示需先关闭 router），否则 `z(i.id)` 打开删除确认框。
- 地址文本本身可点击复制（`navigator.clipboard.writeText`），成功/失败均有对应 toast。

## 5. 与 `ipc-contracts.jsonl` 的差异点

1. `diagnose_codex_router`（L3189）未被 `ipc-contracts.jsonl` 的静态提取脚本捕获——因为它是通过通用 invoke 包装 `da(...)` 直调，而非经由脚本专门追踪的 `re`/`Vt` 两个命名 wrapper。这说明仅靠 `ipc-contracts.jsonl` 做命令枚举会漏掉"绕开领域服务对象、直接裸调 invoke"的调用点，需要结合页面源码交叉核对。
2. `fetch_relay_models_draft`（`fetchModelsDraft`）虽在同一 `je` 对象上，但本页面代码里没有调用点，疑似只在共享的 `RelayProviderForm`（`sa`，未内联到本 chunk）内部使用；本文件层面无法进一步证实，标"推断"。
