# FRONTEND CCF DELTA — AiMaMi 1.2.4 vs 1.2.3 (macos-arm64)

> 前端控制流 (Control-Flow / handler_chain) 详实 delta。baseline = 1.2.3。
> 证据源（均为盘上已提取产物，不连 IDA、不逆二进制）：
> - `raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl`（134 行）
> - `raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl`（248 行）
> - `raw/aimami/1.2.4/macos-arm64/frontend/ast-facts.json`
> - `raw/aimami/1.2.3/macos-arm64/frontend/ast-facts.json`
> - `raw/aimami/1.2.4/macos-arm64/dumped/assets/*.js`（beautify 后真码，用于链路落地）
>
> 所有结论均带 `file:line:column` 锚点；文件名后的 `-XXXXXXXX.js` 是 Vite 构建哈希，两版构建哈希变了但逻辑文件一一对应。

---

## 0. 【人话结论】

1. **3 个新命令的完整前端链路全部找到**，且分别落在两个页面：
   - `get/set_claude_web_search_compat` 落在 **maintenance 维护页**，是新增的 Claude Code 网页搜索兼容开关（与既有的 `imageCompat` 开关同构：useQuery 读 + useMutation 写 + invalidate 回收）。
   - `set_codex_no_account_slots` 落在 **relay 中继页的 codex-router 板块**，是新增的“无账号槽位”管理卡（可勾选 / 拖拽排序 / 保存并可选重启 Codex），带最小/最大槽位数守卫与一整组 i18n 文案。
2. **没有命令被删除**：前端命令契约集合 1.2.3=131 → 1.2.4=134，净增 3，0 删除。
3. **一条 DTO 参数体扩容**：`replace_voice_vocabulary_kind` 的 args 增补 `source / replacement / notes` 三个键（与“词条细粒度编辑”一致）。
4. **一次概念重命名贯穿前端**：旧“虚拟鉴权 (virtual auth)”在 1.2.4 被改造成“无账号模式 (no account mode / no account slots)”，payload 字段 `usedVirtualAuth→usedNoAccountMode`、`willUseVirtualAuth→willUseNoAccountMode`、`virtualAuthActive→legacyVirtualAuthActive`，`virtualEmail` 字段消失。
5. **CCF 提取方式本身变了（重要：不是代码回归）**：1.2.3 的 `frontend-control-flow.jsonl` 用两种 trigger（`minified-static-function` 131 + `minified-wrapper-callsite` 117 = 248 行），会逐个 callsite 追 UI→handler→wrapper；1.2.4 改成只提取中心化 `Pe` 合约表（`minified-ipc-contract` 134 行，1:1 对应命令）。`ast-facts.tauri_invokes` 同步从 133 条降到 2 条——因为 1.2.4 的 `tauri_invokes` 只留 `window.__TAURI_INTERNALS__.invoke(...)` 底层桥（2 处），逐命令的 `re("cmd",{args})` 调用统一搬进了 `frontend-control-flow.jsonl` 的合约表。**命令覆盖并未丢失**：134 条命令仍在 `control_flow_summary.commands` 与合约表里完整列出。

---

## 1. handler_chain 增删（invoke wrapper → handler 链）

### 1.1 新增（3 条 wrapper→invoke 链，1.2.4 合约表中新增）

| 命令 (terminal_call.command) | JS wrapper | argKeys | 契约表行号(1.2.4) | 落点页 |
|---|---|---|---|---|
| `get_claude_web_search_compat` | `getClaudeWebSearchCompat` | `[]` | line 13 (col 7844) | maintenance-page |
| `set_claude_web_search_compat` | `setClaudeWebSearchCompat` | `["enabled"]` | line 14 (col 7908) | maintenance-page |
| `set_codex_no_account_slots` | `setCodexNoAccountSlots` | `["slots","relaunch"]` | (Pe 表) | relay-page |

三条链在合约表里均由 `re(e,t)` 中心调度派发（1.2.4 `index-UqyngLFp.js:87` 的 `async function re(e,t){return xn()?ar(e,t):Ng(e,t)}`），与既有命令同一调度入口。

### 1.2 消失（0 条）

`frontend-control-flow.jsonl` 命令集合差集 = ∅。即 1.2.3 存在的 131 条命令在 1.2.4 全部保留，无任何 wrapper→invoke 链被删除。

> 说明：1.2.3 的 248 行 ≠ 更多命令，而是同一命令被两种 trigger 各采一次（static-function 引用 + wrapper-callsite 调用点）。去重后 1.2.3 仅有 131 个不同命令。1.2.4 的 134 行 = 134 个不同命令（1:1，仅合约表）。所以行数从 248 降到 134 是**提取口径变化**，不是命令消失。

### 1.3 参数体变更（DTO 扩容，1 条）

| 命令 | 1.2.3 argKeys | 1.2.4 argKeys |
|---|---|---|
| `replace_voice_vocabulary_kind` | `[kind, appBundleId, appName, entries]` | `[kind, appBundleId, appName, entries, source, replacement, notes]` |

证据：1.2.4 `index-UqyngLFp.js:87` 的合约体 `replaceVoiceVocabularyKind:e=>re("replace_voice_vocabulary_kind",{kind:e.kind,appBundleId:e.appBundleId??null,appName:e.appName??null,entries:e.entries.map(t=>({source:t.source,replacement:t.replacement,notes:t.notes??null}))})`。新增三键是把整批词条的 `source/replacement/notes` 显式提到调用顶层（旧版只藏在 `entries[]` 内），便于后端按词条做细粒度替换校验。

---

## 2. 控制流结构变化

### 2.1 新增 useQuery / useMutation key

`ast-facts.query_keys` 68 → 70。**唯一语义新增 key：`["claudeWebSearchCompat"]`**（出现 2 次：useQuery 定义 + `invalidateQueries` 引用，均在 `maintenance-page-Cfv_qYNg.js:22`，col 6873 / 7076）。

其余 +25/-24 的“增删”全部是 Vite 构建哈希重命名（`index-B40jKs17.js → index-UqyngLFp.js`、`accounts-page-GdJYDnGj.js → accounts-page-BJLmybXg.js`、`voice-page-CV7DqakD.js → voice-page-DdnLmFrO.js`、`relay-page-iqa4dxHn.js → relay-page-pfdbI0wX.js`）+ 压缩后列位移，语义不变。

`set_codex_no_account_slots` 走 useMutation 但 **未注册独立 queryKey**（保存后由父级整体 `invalidateQueries` 回收 relay state），故 query_keys 不含 noAccountSlots。

### 2.2 新增 effect / event listener

- **relay-page `Os` 组件（`relay-page-pfdbI0wX.js:28`）新增 `useEffect`** 同步本地槽位 state 与后端 `state.codexNoAccountSlots`：
  `s.useEffect(()=>{f(C=>rn(C,c)?C:c)},[d])`，其中 `d=JSON.stringify(c.map(C=>[C.providerId,C.model,C.catalogSlug??null]))`。即当后端槽位列表的身份指纹变化时，用 `rn` 比较函数决定是否重置本地编辑态。
- 新增一组**槽位交互 handler**（均在 `Os` 内）：
  - `D(C)`：点击切换某候选项进出槽位列表，含两条 `if-preflight` 守卫（最小 1 / 最大 `st`）。
  - `R(C)`：拖拽排序回调，按新顺序重排本地列表。
  - `O()`：保存入口，`dirty && !disabled && u.length>0` 时 `setSaving(true) → await onSave(u) → finally setSaving(false)`。

### 2.3 tauri_invokes 提取口径变化（非代码变化）

| 维度 | 1.2.3 | 1.2.4 | 说明 |
|---|---|---|---|
| `ast-facts.tauri_invokes` | 133 | 2 | 1.2.3 把每个 `re("cmd",{args})` 字面量当一条 invoke；1.2.4 只采 `window.__TAURI_INTERNALS__.invoke(...)` 底层桥（`index-DkqVay8H.js:1` 入口 chunk + `index-UqyngLFp.js:41` 的 `re`/`Ng` 调度体）|
| `control_flow_summary.rows` | 248 | 134 | 同上口径变化 |
| `control_flow_summary.commands`（去重） | 131 | 134 | 真实命令净增 3 |

**判定**：覆盖度无丢失。134 条命令在 `frontend-control-flow.jsonl`（合约表）与 `control_flow_summary.commands` 中完整存在。`tauri_invokes` 下降是抽取器从“逐 callsite”切到“中心化合约表”的副产物。

---

## 3. 三个新命令的完整 CCF 接入点（trigger → handler → mutation → invoke）

### 3.1 `get_claude_web_search_compat` + `set_claude_web_search_compat`

**落点**：维护页 `maintenance-page-Cfv_qYNg.js`，组件函数 `ia`（`function ia(){const{t:e}=z(),l=ye(),...}`）。

链路（`maintenance-page-Cfv_qYNg.js:22`，真码节选）：

```js
// 读取：useQuery
j = Y({
  queryKey: ["claudeWebSearchCompat"],
  queryFn: async () => (await y.getClaudeWebSearchCompat()).data.enabled
}),
// 写入：useMutation
W = k({
  mutationFn: async t => { await y.setClaudeWebSearchCompat(t) },
  onSuccess: () => {
    l.invalidateQueries({ queryKey: ["claudeWebSearchCompat"] }),
    o("claudeWebSearchCompat", { type:"success", message: e("maintenance.claudeWebSearchCompatDone") })
  },
  onError: t => o("claudeWebSearchCompat", { type:"error", message: String(t) })
}),
```

完整链：

```
[trigger] 维护页 Switch 组件渲染/onChange
   │  component: maintenance-page-Cfv_qYNg.js :: ia
   ▼
[handler/query] useQuery Y({queryKey:["claudeWebSearchCompat"], queryFn: y.getClaudeWebSearchCompat()})
[handler/mutation] useMutation W({mutationFn: y.setClaudeWebSearchCompat(t)})  // 写
   ▼
[wrapper] getClaudeWebSearchCompat()  /  setClaudeWebSearchCompat(t)
   ▼
[invoke] re("get_claude_web_search_compat")            // 读，args=[]
[invoke] re("set_claude_web_search_compat",{enabled})  // 写，args=["enabled"]
   ▼
[bridge] window.__TAURI_INTERNALS__.invoke(...)   (index-UqyngLFp.js:41 的 re→Ng 调度)
```

特性：
- 返回结构 `{data:{enabled:boolean}}`（queryFn 取 `.data.enabled` 喂给开关）。
- 写成功后 `invalidateQueries({queryKey:["claudeWebSearchCompat"]})` 回收读缓存 + 弹 `maintenance.claudeWebSearchCompatDone` toast。
- 与同函数内既有 `imageCompat`（`getImageCompat`/`setImageCompat`，queryKey `["imageCompat"]`）**完全同构**，属并列新增的兼容开关。语义=控制 Claude Code 是否启用网页搜索兼容（兼容层开关）。

### 3.2 `set_codex_no_account_slots`

**落点**：中继页 `relay-page-pfdbI0wX.js`，组件函数 `Os({state:t, routerEnabled:n, disabled:r, saving:o, onSave:a})`（`relay-page-pfdbI0wX.js:28`）。

state 读取（来自 relay state）：
- `t.codexNoAccountSlots` — 后端持久化的槽位列表（每项 `{providerId, model, catalogSlug}`）。
- `t.providers` / `t.activeByIde.codex` — 候选 provider 池与当前 codex 激活集合。

本地交互 handler（`Os` 内真码节选）：

```js
const c = (t?.codexNoAccountSlots) ?? [];
const [u, f] = s.useState(c);          // 本地编辑态
const N = s.useMemo(()=>new Set(u.map(de)), [u]);  // 已选指纹集
const p = !rn(u, c);                    // dirty
const D = C => {                        // 切换某候选项
  const M = de(C);
  if (N.has(M)) {                       // 已在槽位 → 移除
    if (u.length <= 1) { k({title: l("relay.codexRouter.noAccountSlots.minimum"), variant:"destructive"}); return; }
    f(_ => _.filter(b => de(b) !== M)); return;
  }
  if (u.length >= st) {                 // 未在槽位 → 加入，超上限拦截
    k({title: l("relay.codexRouter.noAccountSlots.maximum", {limit: st}), variant:"destructive"}); return;
  }
  f(_ => [..._, C]);
};
const R = C => { f(M => { ... 按 C 顺序重排 ... }); };   // 拖拽排序
const O = async () => {                 // 保存
  if (!(w || !p || u.length === 0)) { m(!0); try { await a(u); } finally { m(!1); } }
};
```

mutation → invoke（`Os` 的 `onSave` 由父级接到 useMutation，最终在 `index-UqyngLFp.js:270` col 42651 触发）：

```
[trigger] relay 页 codex-router 板块的“无账号槽位”卡（勾选 / 拖拽 / 保存按钮）
   │  component: relay-page-pfdbI0wX.js :: Os
   ▼
[handler-local] D(C) 切换（守卫: u.length<=1 → minimum toast; u.length>=st → maximum toast）
[handler-local] R(C) 拖拽排序
[handler-local] O() 保存入口 (dirty && !disabled && len>0 → setSaving → await onSave(u))
   ▼
[mutation] 父级 useMutation mutationFn  (index-UqyngLFp.js:270)
   ▼
[wrapper] pn.setCodexNoAccountSlots(b, C)             // b=slots, C=relaunch
   ▼
[invoke] re("set_codex_no_account_slots", {slots, relaunch})   // args=["slots","relaunch"]
   ▼
[bridge] window.__TAURI_INTERNALS__.invoke(...)   (Mt→re→Ng 调度)
```

特性：
- `slots`：槽位数组（每项 `{providerId, model, catalogSlug}`），由 `Os` 本地 `u` 透传。
- `relaunch`：布尔，保存后是否重启 Codex（对应 i18n `saveAndRestart` / `savedAndRestarted` / `savedManualLaunch` 三种结果文案）。
- 守卫：最小槽位数 = 1（`u.length<=1` 时禁止再删），最大槽位数 = `st`（常量，文案用 `{limit:st}` 插值）。
- 配套 i18n（全新 key 树，`relay-page-pfdbI0wX.js:28`）：`relay.codexRouter.noAccountSlots.{title, minimum, maximum, reset, saveAndRestart, savePreference, saving, candidates, drag, remove, savedWithWarnings, saved, savedManualLaunch, savedAndRestarted, preferenceSaved, saveFailed}` —— 一整张新的槽位管理卡。

### 3.3 三个命令接入点一览

| 命令 | 页面文件 | 组件/handler | 走法 | argKeys |
|---|---|---|---|---|
| `get_claude_web_search_compat` | maintenance-page-Cfv_qYNg.js | `ia` 内 useQuery `Y` | queryFn→wrapper→invoke | `[]` |
| `set_claude_web_search_compat` | maintenance-page-Cfv_qYNg.js | `ia` 内 useMutation `W` | mutationFn→wrapper→invoke→invalidate | `["enabled"]` |
| `set_codex_no_account_slots` | relay-page-pfdbI0wX.js | `Os`（D/R/O handlers）→父级 useMutation | handler→mutation→wrapper→invoke | `["slots","relaunch"]` |

---

## 4. 组件树变化（ast-facts）

### 4.1 真实业务组件（语义级）

beautify 后文件层面（Vite chunk 名）：

| 逻辑页 | 1.2.3 文件 | 1.2.4 文件 | 变化 |
|---|---|---|---|
| 主入口 | index-B40jKs17.js | index-UqyngLFp.js | 哈希变 |
| 账号页 | accounts-page-GdJYDnGj.js | accounts-page-BJLmybXg.js | 哈希变 |
| 维护页 | maintenance-page-BJvb7DUu.js | maintenance-page-Cfv_qYNg.js | 哈希变 + 新增 claudeWebSearch 开关 |
| 中继页 | relay-page-iqa4dxHn.js | relay-page-pfdbI0wX.js | 哈希变 + 新增 noAccountSlots 卡 |
| 语音页 | voice-page-CV7DqakD.js | voice-page-DdnLmFrO.js | 哈希变 |

新增/强化的业务组件（语义级，基于真码）：
- **maintenance 页 `ia`**：新增 `claudeWebSearchCompat` 的 useQuery+useMutation 对（与 `imageCompat` 并列）。
- **relay 页 `Os`**：新增“无账号槽位”管理组件（候选项勾选 + 拖拽排序 + 保存/重启），读取 `state.codexNoAccountSlots`。

### 4.2 `component_candidates` 名单（1359 → 1374）——非语义

`ast-facts.component_candidates` 的 +47/-32 名称（如 `C4/CP/Cv/D4/...` 新增，`AE/Av/BB/Bc/...` 消失）**全部是 1-2 字母的压缩标识符**，源自两次构建的 minifier 字母重分配，不代表真实新增/删除 React 组件。净 +15 与 `functions` 3761→3791（+30）同性质——属 minify 噪声，不可作为组件树语义 delta 依据。真实的组件级增量已在 4.1（两个业务组件增强）中给出。

### 4.3 payload 字段重命名（line 225，relay state）

| 1.2.3 字段 | 1.2.4 字段 | 说明 |
|---|---|---|
| `usedVirtualAuth` | `usedNoAccountMode` | 启动结果：是否走了“无账号模式” |
| `willUseVirtualAuth` | `willUseNoAccountMode` | 预检：是否将走“无账号模式” |
| `virtualAuthActive` | `legacyVirtualAuthActive` | 旧 virtual auth 保留为 legacy 标志 |
| `virtualEmail` | （删除） | 虚拟邮箱字段移除 |
| `codexLaunchError`, `warnings`, `hasUsableRealAuth`, `canRestorePreviousAuth` | 不变 | —— |

证据：`ast-facts.json_payload_fields` 1.2.3 `['state','codexLaunchError','usedVirtualAuth']` → 1.2.4 `['state','codexLaunchError','usedNoAccountMode']`；1.2.3 `['hasUsableRealAuth','willUseVirtualAuth','virtualEmail','virtualAuthActive','canRestorePreviousAuth']` → 1.2.4 `['hasUsableRealAuth','willUseNoAccountMode','legacyVirtualAuthActive','canRestorePreviousAuth']`（`index-UqyngLFp.js:225`）。

这是“虚拟鉴权 → 无账号模式 + 无账号槽位”改造在前端 payload 的直接投影，与 §3.2 的 `set_codex_no_account_slots` 命令同属一个特性主线。

---

## 5. 风险与注意

1. **勿把 CCF 行数下降当回归**：`frontend-control-flow.jsonl` 248→134 与 `tauri_invokes` 133→2 是提取口径从“逐 callsite”切到“中心化 Pe 合约表”的结果，134 条命令完整在册，无丢失。做后续 diff 时应基于 `control_flow_summary.commands`（去重集合）而非 rows 行数。
2. **`replace_voice_vocabulary_kind` DTO 扩容**需同步：前端调用方、后端 DTO、E2E mock 三处都要补 `source/replacement/notes` 顶层键。
3. **virtual auth → no account mode 重命名是破坏性 payload 变更**：任何按旧字段名 `usedVirtualAuth/willUseVirtualAuth/virtualEmail/virtualAuthActive` 解析的下游（脚本、mock、文档）都会断；升级到 1.2.4 时必须全量替换。
4. **新增命令后端必须实现 3 个**：`get_claude_web_search_compat`（返回 `{enabled:boolean}`）、`set_claude_web_search_compat({enabled})`、`set_codex_no_account_slots({slots, relaunch})`（`slots` 项含 `providerId/model/catalogSlug`，`relaunch` 控制是否重启 Codex）。

---

## 附：证据锚点索引

- 1.2.4 合约表 3 新命令：`frontend-control-flow.jsonl` line 13/14（claude web search）+ Pe 表（no account slots）。
- 维护页真码：`dumped/assets/maintenance-page-Cfv_qYNg.js`（`ia` 函数，useQuery/useMutation 对）。
- 中继页真码：`dumped/assets/relay-page-pfdbI0wX.js`（`Os` 组件，槽位 handler D/R/O + 守卫）。
- noAccountSlots i18n 树：`interesting_strings` 中 `relay.codexRouter.noAccountSlots.*` 共 16 个 key。
- payload 重命名：`ast-facts.json_payload_fields` line 225，1.2.3 vs 1.2.4 字段对比。
- 中心调度：`index-UqyngLFp.js:87` `async function re(e,t){return xn()?ar(e,t):Ng(e,t)}`。
