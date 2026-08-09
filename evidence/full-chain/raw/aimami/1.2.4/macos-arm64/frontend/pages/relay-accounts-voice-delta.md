# 1.2.4 前端 delta 详实 diff — relay-accounts-voice（baseline 1.2.3）

> 来源：逐文件读 1.2.4 vs 1.2.3 beautified JS（`<内部存储>/raw/aimami/{1.2.4,1.2.3}/macos-arm64/frontend/beautified/`）+ ipc-contracts.jsonl 对照。
> 方法：MD5 → 全量 `diff` → 字符串字面量集合差（node 正则抽取）→ token 流差 → 关键区段逐行精读。所有行号均为 beautified 文件行号（1-based），基于真码，无臆造。

---

## 0. 一句话结论（人话）

三个页面对 1.2.3 的真实逻辑改动**只发生在 relay-page 一个文件上**：新增了一整个「无账号槽位（NoAccountSlots）」配置组件，用来在 codex router「无账号模式」下挑选并排序候选 provider×model，落库走新命令 `set_codex_no_account_slots`。accounts-page 和 voice-page 的字节级 diff **全部是 vite 构建 chunk hash 轮换 + 静态/动态 import 路径改名**，页面函数体零行变更。另外两个新命令 `get/set_claude_web_search_compat` 不在本任务三个页面的调用链里，它们由 maintenance-page 消费。

## 1. 文件级总览

| 页面 | 1.2.3 文件（hash） | 1.2.4 文件（hash） | 行数变化 | 字节变化 | MD5 | 真实逻辑 diff |
|---|---|---|---|---|---|---|
| relay-page | `relay-page-iqa4dxHn.js` | `relay-page-pfdbI0wX.js` | 4091 → 4331（+240） | 154149 → 163702（+9553） | 不同 | **有（新组件+新命令+18 i18n key+删 1 硬编码邮箱）** |
| accounts-page | `accounts-page-GdJYDnGj.js` | `accounts-page-BJLmybXg.js` | 3082 → 3082（±0） | 113296 → 113296（±0） | 不同 | **无（仅 chunk hash 轮换）** |
| voice-page | `voice-page-CV7DqakD.js` | `voice-page-DdnLmFrO.js` | 4194 → 4194（±0） | 148745 → 148745（±0） | different | **无（仅 chunk hash 轮换）** |

> accounts/voice 字节数完全相等但 MD5 不同，说明改动是「等长替换」——所有替换点都是 `./index-XXXXXXXX.js` 这类构建产物 hash，零业务字节变化（详见 §4/§5）。

## 2. 命令映射 delta（ipc-contracts.jsonl）

`grep -nE "claude_web_search_compat|codex_no_account_slots"` 结果：1.2.3 两个命令均**不存在**；1.2.4 共 3 条新命令，全部声明在共享 bundle `assets/index-UqyngLFp.js`（1.2.3 对应 `assets/index-B40jKs17.js`）：

| 新命令 | wrapper（camelCase） | callee | 参数 | 前端接入位置 |
|---|---|---|---|---|
| `get_claude_web_search_compat` | `getClaudeWebSearchCompat` | `re`（薄封装） | `()` | 共享 index L11903；**由 maintenance-page 消费**，不在 relay/accounts/voice |
| `set_claude_web_search_compat` | `setClaudeWebSearchCompat` | `re` | `{enabled}` | 共享 index L11904；**由 maintenance-page 消费**，不在 relay/accounts/voice |
| `set_codex_no_account_slots` | `setCodexNoAccountSlots` | `Mt` | `{slots, relaunch:t??!0}` | 共享 index L26156/L26030 dispatch；**relay-page 经 mutation `h` 调用（L3356 解构、L3522 mutateAsync）** |

> ipc-contracts.jsonl 中 callee `re` 是通用 invoke 薄封装、`Mt` 是带 relaunch 语义的 router 类 invoke 封装；`relaunch:t??!0` 表示默认 relaunch=true，除非显式传 false。

---

## 3. relay-page 详实 diff（唯一有真实逻辑变更的页面）

### 3.1 新增组件：`Os`（NoAccountSlots 主组件）+ `Ls`（SlotItem）

1.2.3 全文 grep `noAccountSlots|setCodexNoAccountSlots|codexNoAccountSlots` → **零命中**；1.2.4 命中且构成一整个新组件树。

**`function Os(...)` —— NoAccountSlots 主组件，L3072–L3215**

props 签名（L3072–L3077）：`{ state: t, routerEnabled: r, disabled: o, saving: a, onSave: ... }`（beautify 后形参名为 `t/r/o/a`，语义见下）。

内部状态与派生（L3082 起）：
- `c = useMemo(() => t?.codexNoAccountSlots ?? [], [t?.codexNoAccountSlots])` —— 从 router state 读**新增字段 `codexNoAccountSlots`**（1.2.3 的 state 对象无此字段）。
- `[u, f] = useState(c)` —— 本地可编辑槽位列表。
- `[x, m] = useState(!1)` —— 本地 saving 标志（与外部 `saving` 区分）。
- `d = JSON.stringify(c.map(C => [C.providerId, C.model, C.catalogSlug ?? null]))` + `useEffect(() => f(C => rn(C,c)?C:c), [d])` —— 服务端值变化时回灌本地，带 `rn` 深比较避免覆盖用户未保存编辑。
- `h = useMemo(...activeByIde.codex → providers.find(ide==="codex"))` —— 候选 provider 列表（仅 codex IDE 的 active provider）。
- `y = useMemo(Map(provider.id → provider.name))` —— id→名字映射，用于槽位展示。
- `N = useMemo(new Set(u.map(de)))` —— 已选槽位 key 集合（`de` = 槽位唯一键函数）。
- `p = !rn(u, c)` —— **脏标志**（本地 vs 服务端是否不同）。
- `v = o || x` / `w = r || v` —— 综合 saving / disabled。

**候选切换 handler `D`（L3101/L3111 的 min/max 校验）：**
- 移除时若 `u.length <= 1` → toast `relay.codexRouter.noAccountSlots.minimum`（variant destructive），保底 1 个槽位。
- 添加时若 `u.length >= st` → toast `relay.codexRouter.noAccountSlots.maximum`（带 `{limit: st}`）。
- `const st = 5`（L3058）—— **上限 5 个槽位**，硬编码常量。
- 否则 `f(_ => [..._, C])` 追加 / `f(_ => _.filter(...))` 移除。

**拖拽排序 handler `R`（L3118）：** 接收新顺序 id 数组，按 `de` 映射回槽位对象 `f(M => ...)`，配合 dnd-kit `dn`（SortableContext）+ `un`（策略）+ `mn`（useSortable hook）。

**保存 handler `O`（L3126）：** `if(!(w || !p || u.length===0)){ m(!0); try{ await a(u) } finally{ m(!1) } }` —— 即脏且非空且非锁定时，置本地 saving，调父级 `onSave`（即 `_r`）。

**JSX（L3133–L3213）：**
- 标题行：`noAccountSlots.title` + 计数 `u.length/st`（达上限转琥珀色 `text-amber-600`）。
- 操作行：脏时显示 `noAccountSlots.reset`（还原 `f(c)`）；主按钮 `noAccountSlots.saveAndRestart` / `noAccountSlots.savePreference`（按是否 relaunch 二选一），busy 态 `noAccountSlots.saving`。
- 槽位网格：`mt-2 grid grid-cols-1 gap-1.5 sm:grid-cols-2 md:grid-cols-3`，每项渲染 `<Ls .../>`（见下）。
- 候选区：`noAccountSlots.candidates` 标签 + 按 provider 分组的 pill 按钮列表（选中态 `border-primary/40 bg-primary/10 text-primary`，未选 `border-border bg-card ...`），点击调 `D`。

**`function Ls(...)` —— SlotItem 单槽卡片，L3217–L3270**

props：`{ slot, index, providerName, locked, removable, onRemove }`。
- `mn(de(t), o)` 解构 `setNodeRef/style/attributes/listeners/isDragging` —— dnd-kit useSortable，`de(t)` 为 sortable id。
- 拖把按钮 `noAccountSlots.drag`（`cursor-grab`，locked 时 `cursor-not-allowed opacity-50`）。
- 序号徽标 `n+1`（圆形 `bg-primary/10 font-mono text-[9px]`）。
- providerName（`max-w-[35%] truncate`）+ `t.model`（`font-mono text-[11px]`）。
- 移除按钮 `noAccountSlots.remove`（`hover:text-destructive`，locked 或 `!removable` 时禁用）。

### 3.2 父组件 `oi()` 的接线变化（L3340–L3360、L3844–L3847）

1.2.3 父组件解构（L3144）：`setCodexRouterNoAccountMode: l` —— 只到「无账号模式开关」。
1.2.4 父组件解构（L3356）：`setCodexRouter: m, setCodexRouterNoAccountMode: d, setCodexNoAccountSlots: h` —— **多解构出 `h`（新 mutation）**。

- `Je = K || m.isPending || d.isPending || h.isPending`（L3360 附近）—— 全局禁用标志**新增 `|| h.isPending`**，保存槽位期间锁全表单。
- 渲染点（L3844–L3847，紧接 `noAccountMode` 开关之后）：
  ```
  je ? e.jsx(Os, { state: F, routerEnabled: P, disabled: Je, saving: h.isPending, onSave: _r }) : null
  ```
  `je` = `!!F?.codexRouterNoAccountMode`（无账号模式开启时才渲染 `Os`）。即「无账号槽位」是「无账号模式」的子区块，模式关闭时整个隐藏。

### 3.3 新增交互→invoke 时序：`_r` onSave handler（L3520–L3530）

```
_r = async i => {                          // i = 槽位数组
  try {
    const g = await h.mutateAsync({ slots: i, relaunch: P && je }),  // P=routerEnabled, je=noAccountMode
          T = g.data.warnings ?? [];
    T.length ? toast(noAccountSlots.savedWithWarnings, T.join("；"), destructive)
             : toast(noAccountSlots.saved, P ? (g.data.codexLaunchError ? savedManualLaunch : savedAndRestarted) : preferenceSaved);
    g.data.codexLaunchError && toast(launchWarningTitle, { error: ... });
  } catch (g) {
    toast(noAccountSlots.saveFailed, V(g), destructive);
  }
}
```

invoke 时序：
1. 用户在 `Os` 内增删/拖拽槽位 → 本地 `u` 变更 → `p`（脏）置真。
2. 点保存按钮 → `Os.O()` → 父级 `_r(slots)`。
3. `_r` 调 `h.mutateAsync({slots, relaunch: routerEnabled && noAccountMode})`。
4. mutation（共享 index L33140，§3.4）→ `Mt("set_codex_no_account_slots", {slots, relaunch})`。
5. `onSuccess` 用 `e.setQueryData(Rn, b.data.state)` 原地更新 router state（含新 `codexNoAccountSlots` 字段）。
6. 回调据 `warnings / codexLaunchError / relaunch` 弹 4 种 toast（见 §3.5 i18n）。

### 3.4 mutation 定义（共享 `index-UqyngLFp.js`，不在 page 文件）

- L33140–33148：`S = Ct({ mutationFn: ({slots:b, relaunch:C}) => pn.setCodexNoAccountSlots(b, C), onMutate: ()=>Fr(e), onSuccess: b=>e.setQueryData(Rn, b.data.state), onSettled: t })`。
- L33160：hook 返回对象新增 `setCodexNoAccountSlots: S`（1.2.3 该返回对象无此键）。
- L26156：`setCodexNoAccountSlots: (e,t) => Mt("set_codex_no_account_slots", {slots:e, relaunch:t??!0})` —— wrapper，relaunch 默认 true。
- L26030：`case "set_codex_no_account_slots":` —— 命令派发分支。

### 3.5 新增 i18n key（共 18 个，全部 `relay.codexRouter.*`）

1.2.3 relay 全文无 `noAccountSlots` 命名空间；1.2.4 新增：
`enabledHintNoAccount`、`subtitleNoAccount`、`noAccountSlots.title`、`.candidates`、`.drag`、`.maximum`、`.minimum`、`.preferenceSaved`、`.remove`、`.reset`、`.saveAndRestart`、`.saveFailed`、`.savePreference`、`.saved`、`.savedAndRestarted`、`.savedManualLaunch`、`.savedWithWarnings`、`.saving`。

### 3.6 删除项

- **`niuniu@woyao.pro`** 硬编码字符串在 1.2.4 relay 中**已移除**。1.2.3 L3145 它是某 useState 的初始默认值：`[Ve, ie] = s.useState("niuniu@woyao.pro")`（疑似旧默认邮箱/联系人占位）。1.2.4 该行重写，默认邮箱不再写死。这是本次 relay 字符串集合差中唯一非构建 hash、非 i18n 的移除项。

### 3.7 纯 cosmetic 的 relay 改动（不计入逻辑 delta）

relay 字符串集合差里另有 ~16 条 `./xxx-<hash>.js` / `assets/index-<hash>.js` chunk 引用与 `server-CGofXgZx.js`（1.2.3 `server-M8YoII1j.js`）、`globe-BLKmlM4n.js` 等图标 chunk hash 轮换；以及模板变量名因 minifier 重新分配而漂移（如 `${t.name} · ${L}` → `${M}`、`${v}%` → `${y}%`、`o(...)` → `a(...)`）—— token 流 diff 显示这些是等价改名，非逻辑变化。`diff -w` 仍 5399 行源于 beautify 对相同 AST 的重排，非语义。

---

## 4. accounts-page diff（零逻辑变更）

`diff` 仅 28 行变更，**全部落在三类构建产物引用**（行号固定，1.2.3 → 1.2.4）：
- L1 `__vite__mapDeps` 数组：`index-ZeD99E_m.js`→`index-DSDber3S.js`、`index-B40jKs17.js`→`index-UqyngLFp.js`、`index-CR8sKgfr.css`→`index-CO38ZUFF.css`，且数组元素**顺序重排**。
- L66/L70/L79/L82/L85/L89/L92/L96/L99/L102/L105 静态 `import ... from "./<chunk>.js"` 的 chunk hash 改名（switch/select/badge/upload/plus/shield-check/trash-2/zap/refresh-cw 等图标 + 主 index）。
- L1451/L1498 动态 `await import("./index-ZeD99E_m.js")` → `./index-DSDber3S.js`。

字符串集合差（node 抽取所有字面量）：accounts 1.2.3 vs 1.2.4 **零业务字符串差异**。结论：accounts-page 的账号 CRUD、image_compat 开关、`forceKillCodex` 等交互全部不变。`setClaudeWebSearchCompat` / `getClaudeWebSearchCompat` 虽定义在 accounts 页引用的 `index-UqyngLFp.js` 内（与 `getImageCompat`/`setImageCompat` 同一个 `re` wrapper 对象，L11903–11904），但 **accounts-page 自身未调用**（grep `ClaudeWebSearchCompat` 在 accounts-page 文件内零命中）。

## 5. voice-page diff（零逻辑变更）

`diff` 仅 26 行变更，性质同 accounts：
- L1 `__vite__mapDeps`：`index-B40jKs17.js`→`index-UqyngLFp.js`、`index-CR8sKgfr.css`→`index-CO38ZUFF.css`、`index-ZeD99E_m.js`→`index-DSDber3S.js`。
- L57/L60/L63/L70/L73/L76/L79/L84/L87/L90 静态 import chunk hash 改名（badge/bento-card/select/refresh-cw/trash-2/circle-x/delete/plus/chevron-right）。
- L807 `await import("./index-B40jKs17.js").then(F=>F.bz)` → `./index-UqyngLFp.js`；L3081 动态 import chunk hash 改名。

字符串集合差：voice 1.2.3 vs 1.2.4 **零业务字符串差异**。结论：voice-page 的语音配置、TTS、provider 选择等全部不变；新命令均未在 voice-page 接入。

---

## 6. delta 汇总（组件 / hook / handler / 命令 / 对话框）

| 类别 | 1.2.4 相对 1.2.3 变化 | 所在文件:行 |
|---|---|---|
| 新增组件 | `Os`（NoAccountSlots 主） | relay-page L3072 |
| 新增组件 | `Ls`（SlotItem 槽位卡） | relay-page L3217 |
| 新增常量 | `st = 5`（槽位上限） | relay-page L3058 |
| useState | `[u,f]` 槽位列表、`[x,m]` 本地 saving（Os 内） | relay-page L3082 |
| useMemo | `c`（服务端槽位）、`h`（候选 provider）、`y`（id→name）、`N`（已选 key set）、`p`（脏） | relay-page L3082–L3082 区段 |
| useEffect | 服务端 `codexNoAccountSlots` 变更回灌本地 | relay-page L3082 区段 |
| useMutation | `S`（setCodexNoAccountSlots），onSuccess setQueryData | index-UqyngLFp.js L33140 |
| 父组件解构 | 新增 `setCodexNoAccountSlots: h` | relay-page L3356 |
| 全局禁用 | `Je` 新增 `\|\| h.isPending` | relay-page L3360 区 |
| handler | `D`（候选切换+min/max）、`R`（拖拽排序）、`O`（组件内保存）、`_r`（父级 onSave→mutateAsync） | relay-page L3101/L3118/L3126/L3520 |
| 新命令接入 | `set_codex_no_account_slots`（relay 唯一接入点） | index L26156/L26030；relay L3522 |
| 未接入（本任务三页） | `get/set_claude_web_search_compat` —— maintenance-page 消费 | index L11903/L11018/L11022；i18n L41120 |
| 新增 i18n | 18 个 `relay.codexRouter.noAccountSlots.*` + 2 个 hint/subtitle | relay-page 多处引用 |
| 删除 | 硬编码 `niuniu@woyao.pro` 默认值 | 1.2.3 L3145 → 1.2.4 已去 |
| accounts/voice | 仅 vite chunk hash 轮换 + import 路径改名，0 业务行 | accounts L1/L66…/L1451；voice L1/L57…/L807 |

## 7. 风险与边界提示

- `set_codex_no_account_slots` 的 `relaunch` 默认 `true`（`t??!0`），且 `_r` 在 `routerEnabled && noAccountMode` 时强制 relaunch=true —— 即「保存即重启 codex」是默认行为，与 `set_codex_router_no_account_mode` 同族语义，前端通过 `codexLaunchError` 回传区分「已重启」与「需手动启动」两种 toast。
- `st = 5` 槽位上限为前端硬编码，后端契约是否独立校验上限需后端 delta 交叉确认（超出本文档范围）。
- `codexNoAccountSlots` 是 router state 的新字段，1.2.3 state 对象无此键，`Os` 用 `?.?? []` 容错 —— 老配置缺字段时降级为空列表，不阻塞渲染。
- accounts-page / voice-page 的 chunk hash 轮换确认无逻辑变更，但其依赖的共享 `index-UqyngLFp.js` 内新增了 `claude_web_search_compat` 相关 wrapper 与 state 字段（`claudeWebSearchCompat: !0` 默认开，L25999）—— 这部分行为变更落在 maintenance-page，不在本任务三页范围内，仅在汇总中标注交叉点。
