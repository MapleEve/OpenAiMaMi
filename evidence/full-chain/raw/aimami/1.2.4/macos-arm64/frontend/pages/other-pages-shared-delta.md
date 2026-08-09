# 1.2.4 vs 1.2.3 前端 delta — other-pages-shared

- baseline: `aimami/1.2.3/macos-arm64/frontend/beautified/`
- target:   `aimami/1.2.4/macos-arm64/frontend/beautified/`
- 方法: 逐文件 `cmp` + `diff -u`，剥离 `from"./index-*.js"` 这类纯 chunk-hash 引用行后做语义 diff；所有行号均指 1.2.4 目标文件 `*.js` 的 beautified 行号。
- 授权范围: 本仓/本机所有者的自家已授权产品 AiMaMi，baseline=1.2.3，所有者在对话渠道下达重建授权。本文件只读既有 beautified JS 与 ipc-contracts.jsonl，不连 IDA、不逆二进制。

## 0. 总览（人话结论）

【人话结论】在本次清点范围内（mcp / sessions / settings / skills / maintenance / analytics / auto-switch / app- / index-* 共 11 个文件对），**唯一发生真实业务代码变化的是 `maintenance-page`**，新增了一颗「Claude Web Search 兼容开关」。其余 10 个文件对的字节差异 **全部** 来源于 Vite 主 bundle hash 变更（`index-B40jKs17.js` → `index-UqyngLFp.js`、CSS `index-CR8sKgfr.css` → `index-CO38ZUFF.css`）以及由此连锁触发的共享 chunk hash 变更（bento-card / switch / badge / chevron-right / trash-2 / server / plus / upload / rotate-ccw / refresh-cw / circle-x / zap / globe / app 等组件 chunk 全部换了 hash），**业务逻辑、hook、handler、JSX、invoke 调用、对话框流程一行未改**。

【架构解释】1.2.4 把新命令 `get/set_claude_web_search_compat` 的前端接入放在了 maintenance 页（与既有的 `image_compat` 图片兼容开关并列），这是“运行时兼容开关”类功能在该页的固定扩展位。第三条新命令 `set_codex_no_account_slots` 的前端调用点在 `relay-page`（不在本文件范围），所以它对 other-pages-shared **零接入** —— 命令虽然在主 bundle 注册并写进了 ipc-contracts，但本范围内的页面没有任何代码引用它。

【技术证据】
- 文件大小 delta：maintenance-page `28073 → 29347`（+1274）；其余 10 个文件对 delta 均为 0。
- 语义 diff 行数（剥离 chunk-hash 引用后）：maintenance 1085 行（含大量 beautifier 变量重命名噪声，真实新增约一个 query+mutation+handler+card 块）；analytics/auto/app/index 都是 10~11 行且全部还是 chunk-hash 行；mcp/sessions/settings/skills 的语义 diff 也只剩下被 hash 改名拖累的组件 chunk 引用行。
- ipc-contracts.jsonl：`131 → 134` 行，新增的 3 条恰好是 `get_claude_web_search_compat` / `set_claude_web_search_compat` / `set_codex_no_account_slots`；其余行的变化只是 `"file": "assets/index-B40jKs17.js"` → `"assets/index-UqyngLFp.js"`。

## 1. 文件对清单与变更定性

| page 名 | 1.2.3 文件 | 1.2.4 文件 | 字节 delta | 定性 |
|---|---|---|---|---|
| mcp-page | mcp-page-LchViioT.js (22502) | mcp-page-BXeKu-JW.js (22502) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| sessions-page | sessions-page-D0Y3peQj.js (35192) | sessions-page-CPsi7pgz.js (35192) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| settings-page | settings-page-B8vywarZ.js (19872) | settings-page-7U6TASTg.js (19872) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| skills-page | skills-page-BwPTc5r0.js (15341) | skills-page-BF4hoSBf.js (15341) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| **maintenance-page** | maintenance-page-BJvb7DUu.js (28073) | maintenance-page-Cfv_qYNg.js (29347) | **+1274** | **真实新增 ClaudeWebSearchCompat 开关** |
| analytics-panel | analytics-panel-6jtfGEeX.js (58654) | analytics-panel-De5DC5kM.js (58654) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| auto-switch | auto-switch-DujJXz0W.js (366) | auto-switch-BJRHUfJM.js (366) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| app- | app-TuXtMya9.js (1454) | app-g-9b7oPp.js (1454) | 0 | 仅 chunk-hash 引用改名（版本号 helper），逻辑不变 |
| index- (version-check) | index-CT6UOhc8.js (1530) | index-CZj0Zhpz.js (1530) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| index- (save/open helper) | index-ZeD99E_m.js (2278) | index-DSDber3S.js (2278) | 0 | 仅 chunk-hash 引用改名，逻辑不变 |
| index- (invariant helper) | index-DkqVay8H.js (1897) | index-DkqVay8H.js (1897) | 0 | **hash 完全相同 = 字节级一致** |

> 注: beautifier 对 maintenance-page 重新分配了大量短变量名（如 `T→K`、`e→a`、`J→ae`、`N→A`、`Y→k`、`X→Y`、`he→ye` 等），导致 unified diff 行数虚高（1085 行）。下面只摘真正新增的业务结构，不罗列变量重命名噪声。

## 2. 唯一真实变更：maintenance-page 新增「Claude Web Search 兼容开关」

新开关在 maintenance 页的「运行时兼容模式」分区，紧挨既有的 image-compat（图片兼容）卡片，作为其兄弟卡片。模式完全镜像 imageCompat：一条 useQuery 读当前值、一条 useMutation 写新值、一个确认对话框触发器、一张 toggle 卡片。

### 2.1 新增 useQuery（读当前开关值）
位置：`maintenance-page-Cfv_qYNg.js` 第 435-437 行，紧跟 imageCompat 的 useQuery 之后。

```js
j = Y({
    queryKey: ["claudeWebSearchCompat"],
    queryFn: async () => (await y.getClaudeWebSearchCompat()).data.enabled
}),
```

- queryKey: `["claudeWebSearchCompat"]`（新 key，1.2.3 不存在）
- queryFn: 调用主 bundle 导出的 `y.getClaudeWebSearchCompat()`，取 `.data.enabled`
- 对照 imageCompat 的 queryKey `["imageCompat"]` / `y.getImageCompat()`，结构完全一致

### 2.2 新增 useMutation（写开关 + toast + 失效缓存）
位置：第 438-449 行。

```js
W = k({
    mutationFn: async t => {
        await y.setClaudeWebSearchCompat(t)
    },
    onSuccess: () => {
        l.invalidateQueries({ queryKey: ["claudeWebSearchCompat"] }),
        o("claudeWebSearchCompat", {
            type: "success",
            message: e("maintenance.claudeWebSearchCompatDone")
        })
    },
    onError: t => o("claudeWebSearchCompat", {
        type: "error",
        message: String(t)
    })
}),
```

- mutationFn: `y.setClaudeWebSearchCompat(t)` —— `t` 是切换后的目标布尔值
- 成功: 失效 `["claudeWebSearchCompat"]` query，弹 success toast，文案 key `maintenance.claudeWebSearchCompatDone`（新 i18n key）
- 失败: 弹 error toast，message 直接用原始错误字符串
- 与 imageCompat 的 mutation 唯一差异是命名（`W` vs `A`）和 i18n key，行为对称

### 2.3 新增确认对话框触发器 handler
位置：第 587-589 行（1.2.3 同位置只有 imageCompat 的 `ie` handler，1.2.4 在其后插入新的 `le`）。

```js
ce = t => { w("imageCompat", () => A.mutateAsync(t)) },   // 1.2.4 重命名后的 imageCompat handler
le = t => { w("claudeWebSearchCompat", () => W.mutateAsync(t)) },  // ★ 新增
```

`w(...)` 是 maintenance 页统一的「先弹确认对话框、用户确认后再跑 mutation」包装器。1.2.3 只注册了 imageCompat 一个确认入口，1.2.4 多了 claudeWebSearchCompat 入口。

### 2.4 新增 toggle 卡片定义（卡片列表 `ue`）
位置：第 649-655 行，插在 imageCompat 卡片与 restart 卡片之间。

```js
{
    key: "claudeWebSearchCompat",
    icon: je,                       // Globe 图标（主 bundle 导出 I，重命名为 je）
    iconColor: "text-sky-500",
    label: e("maintenance.claudeWebSearchCompat"),
    description: e("maintenance.claudeWebSearchCompatDesc"),
    actionLabel: j.data ?? !0 ? e("maintenance.claudeWebSearchCompatOn") : e("maintenance.claudeWebSearchCompatOff"),
    loadingLabel: e("maintenance.running"),
    onAction: () => le(!(j.data ?? !0)),
    isToggle: !0,
    toggleChecked: j.data ?? !0,
    disabled: j.isPending          // ★ imageCompat 卡片没有这个字段
},
```

关键差异点（相对 imageCompat 卡片）：
1. **默认值语义相反**：imageCompat 用 `x.data ?? !1`（加载中默认关），claudeWebSearchCompat 用 `j.data ?? !0`（加载中默认 **开**）。也就是说 Claude Web Search 兼容开关在 query 未返回时 UI 呈现为「已开启」。
2. **多一个 `disabled: j.isPending`**：在 mutation 进行中禁用卡片，防重复点击。imageCompat 卡片没有这个保护（这是 1.2.4 新卡片自带的轻度健壮性增强，但未回填给 imageCompat）。
3. **视觉**：sky-500 蓝色 Globe 图标，区别于 imageCompat 的 purple-500 Image 图标。
4. **交互时序**：点卡片 → `onAction` 调 `le(取反值)` → `w("claudeWebSearchCompat", ...)` 弹确认框 → 用户确认 → `W.mutateAsync` → `y.setClaudeWebSearchCompat(enabled)` → 后端 `set_claude_web_search_compat` → 成功后失效 query 并弹 toast。

### 2.5 新增 i18n key（从代码引用反推，文案需查 locales）
maintenance 页新增引用了以下 key（`e("...")` 即 `t("...")` 国际化调用），1.2.3 maintenance 页不存在这些引用：
- `maintenance.claudeWebSearchCompat`（卡片标题）
- `maintenance.claudeWebSearchCompatDesc`（卡片描述）
- `maintenance.claudeWebSearchCompatOn` / `maintenance.claudeWebSearchCompatOff`（开关动作按钮双态文案）
- `maintenance.claudeWebSearchCompatDone`（切换成功 toast）

## 3. 新命令前端接入清单（3 条）

ipc-contracts.jsonl 从 131 行涨到 134 行，新增恰为这 3 条。所有命令包装器都注册在主 bundle `assets/index-UqyngLFp.js`，本范围内各页通过 `import ... from "./index-UqyngLFp.js"` 拿到的 `y` / 命名导出间接调用。

| 命令 | wrapper | 参数 | 主 bundle 行号 | 前端调用点 | 本范围内接入？ |
|---|---|---|---|---|---|
| `get_claude_web_search_compat` | `getClaudeWebSearchCompat()` | 无 | 11903（registry），11018（mock switch） | maintenance-page 第 436 行 | **是** |
| `set_claude_web_search_compat` | `setClaudeWebSearchCompat(e)` | `{enabled:e}` | 11904（registry），11022（mock switch） | maintenance-page 第 439 行 | **是** |
| `set_codex_no_account_slots` | `setCodexNoAccountSlots(e,t)` | `{slots:e, relaunch:t??!0}` | 26156（registry） | **relay-page** 第 3356 行 | **否**（relay 不在本范围） |

主 bundle 还内置了一份 mock/debug 状态机（dev 预览用），把 `get_claude_web_search_compat` 映射到局部变量 `bm`、`set_claude_web_search_compat` 写 `bm`（`index-UqyngLFp.js` 第 11015-11016 行），与既有 `get/set_image_compat` 用局部变量 `wm` 的模式完全对称。这进一步印证两条命令是作为 image-compat 的同构兄弟引入的。

`set_codex_no_account_slots` 在主 bundle registry 里紧邻 `set_codex_router_enabled` / `set_codex_router_no_account_mode`（均带 `relaunch` 默认 true），属于 codex router 配置族；其唯一前端消费者是 relay-page（出范围），因此对 other-pages-shared 没有任何 UI/handler/对话框影响。

## 4. 交互→invoke 时序变化

**仅 maintenance 页出现新时序**（其它页面的 invoke 时序与 1.2.3 完全一致）：

1.2.4 新增的 claudeWebSearchCompat 时序：
1. 进入 maintenance 页 → `useQuery(["claudeWebSearchCompat"])` 触发 → `y.getClaudeWebSearchCompat()` → `invoke("get_claude_web_search_compat")`
2. 用户点开关 → `onAction` → `le(!current)` → `w("claudeWebSearchCompat", ...)` 弹确认对话框
3. 用户确认 → `W.mutateAsync(newValue)` → `y.setClaudeWebSearchCompat(enabled)` → `invoke("set_claude_web_search_compat", {enabled})`
4. 成功 → `invalidateQueries(["claudeWebSearchCompat"])` → 步骤 1 的 query 重新拉取 → success toast `claudeWebSearchCompatDone`
5. 期间卡片 `disabled: j.isPending` 置灰防重入（imageCompat 没有这层保护）

maintenance 页原有命令 `run_codex_router_diagnostics`、`fix_codex_router_issue`、`clean`、`force_kill_codex`、`restart`、`get/set_image_compat`、`default_debug_bundle_file_name`、`export_debug_bundle`、`upload_debug_report` 的调用时序 **全部未变**，仅 wrapper 短名随 beautifier 重命名（如 `v.getImageCompat` → `y.getImageCompat`，调用图不变）。

## 5. 其它 10 个文件对「为何 diff 非零却无业务变化」

每个文件对的 diff 都被两类机械变更占据：
1. **主 bundle hash 改名**：`from "./index-B40jKs17.js"` → `from "./index-UqyngLFp.js"`，以及 `__vite__mapDeps` 数组里的 `assets/index-B40jKs17.js` / `assets/index-ZeD99E_m.js` / `assets/index-CR8sKgfr.css` → `assets/index-UqyngLFp.js` / `assets/index-DSDber3S.js` / `assets/index-CO38ZUFF.css`。
2. **共享组件 chunk hash 连锁改名**：因为主 bundle 变了，Vite 给所有依赖它的 chunk 重新算了 hash，所以 `bento-card` / `switch` / `badge` / `chevron-right` / `trash-2` / `server` / `plus` / `upload` / `rotate-ccw` / `refresh-cw` / `circle-x` / `zap` / `globe` / `app` 等组件 chunk 的文件名 hash 全部刷新，页面里的 `from "./<chunk>-<旧hash>.js"` 因此成批改成 `<新hash>`。

逐文件核对结论：
- **mcp-page**：diff 全部是上述 chunk-hash 行，无任何 handler/hook/invoke 改动。原命令 `run_codex_router_diagnostics` 等调用图不变。
- **sessions-page**：仅 `__vite__mapDeps` 数组 + chunk 引用改名；动态 `import("./index-DSDber3S.js")` 取 `save` 的懒加载时序不变（第 691 行附近，只是文件名 hash 换了）。
- **settings-page**：仅 chunk 引用改名；版本号探测 `import("./app-g-9b7oPp.js").then(t => t.getVersion())` 时序不变（1.2.3 第 248 行 → 1.2.4 第 248 行，仅 app chunk hash 换）。
- **skills-page**：仅 chunk 引用改名；动态 `import("./index-DSDber3S.js")` 取 `open` 的懒加载时序不变。
- **analytics-panel**：只有第 8 行 `from "./index-..."` 一行改名。
- **auto-switch**：366 字节的整数校验 helper（`Number.isInteger(t) && t>=1 && t<=100`），只有首行 import hash 改名，校验逻辑不变。
- **app-**：1454 字节的版本/安装器枚举 helper（`Nsis/Msi/Deb/Rpm/AppImage/App`），只有 import hash 改名。
- **index-CZj0Zhpz.js**（version-check helper，1530 字节）：只有 import hash 改名。
- **index-DSDber3S.js**（save/open 对话框 helper，2278 字节）：只有 import hash 改名。
- **index-DkqVay8H.js**：两个版本 hash 完全相同，字节级一致，未改。

## 6. 对实现侧的要点（供后续 Rust 实现/对照）

- `get_claude_web_search_compat` 返回结构须为 `{ enabled: boolean }`（前端取 `.data.enabled`）。默认值在前端 UI 层用 `?? !0`（true）兜底，但 mock 层局部变量 `bm` 初始为 falsy —— 实现侧应以持久化真实状态为准，不要被 UI 的 `?? !0` 误导。
- `set_claude_web_search_compat` 入参为 `{ enabled: boolean }`，返回值前端未读取（只看成功/失败），但为对称性建议同样返回 `{ enabled }`。
- `set_codex_no_account_slots` 入参 `{ slots: number, relaunch: boolean | undefined }`，`relaunch` 默认 true（`t ?? !0`），前端默认会在切换后触发应用重启，实现侧须保留等价的 relaunch 语义。
- 三条命令都属「带 relaunch / 兼容位」族，建议与 image_compat / codex_router_enabled 共用同一套配置读写与重启编排路径，避免出现第三套并行实现。

## 7. 信息来源与可复核路径

- 1.2.4 beautified: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/beautified/`
- 1.2.3 beautified: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/beautified/`
- 1.2.4 ipc 契约: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl`
- 1.2.3 ipc 契约: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- 关键行号锚点（1.2.4）:
  - maintenance-page-Cfv_qYNg.js: 435-449（query+mutation）、587-589（confirm handler）、649-655（toggle card）
  - index-UqyngLFp.js: 11015-11016（mock switch）、11903-11904（getClaudeWebSearchCompat/setClaudeWebSearchCompat registry）、26156（setCodexNoAccountSlots registry）
  - relay-page-pfdbI0wX.js: 3356（setCodexNoAccountSlots 唯一前端消费者，出范围）
