# voice-page-CV7DqakD.js 前端结构逆向（1.2.3 macos-arm64）

来源文件：`frontend/beautified/voice-page-CV7DqakD.js`（4194 行，beautify 后的 Vite chunk，导出 `VoicePage`，见文件末尾 `export { hi as VoicePage }` L4193）。
命令映射来源：`frontend/ipc-contracts.jsonl`，按 `wrapper` 字段精确匹配到 `command` 字段（snake_case，真实 Tauri command 名）。
本文档只写本文件里真实可见的代码事实；跨文件（如共享 hook `Vs`/`aE`，定义在 `index-B40jKs17.js` 里、本文件不可见）的行为一律标注【推断】。

---

## 1. 组件树

顶层页组件是 `hi()`（L3672-L3891，导出别名 `VoicePage`）。渲染树：

```
hi()  VoicePage                                     [L3672]
├─ Yt()  Hero 描述 + 加载失败横幅 + 刷新按钮          [L3438]
├─ SegmentedTabs (hs 组件，来自 index-B40jKs17.js)    [L3751-3763]  五个 tab: overview/model/processing/vocabulary/history
├─ 权限状态胶囊按钮（红/绿圆点 + 文案，点击开权限 Dialog）[L3764-3774]
├─ tab==="overview" → Jt()  概览仪表盘卡片            [L3775-3780, 组件定义 L3488]
│   ├─ ns()  引擎/模型行（可点击跳转 model tab）        [L3550]
│   └─ cs()  今日次数/字数统计行                       [L3584]
├─ Dialog(m) 权限管理弹窗 → St({mode:"system"})       [L3781-3793, St 定义 L1866]
│   └─ St(mode="system") → 三张 Ce() 权限卡片(麦克风/语音识别/辅助功能) [L1900-1944]
│       ├─ Ce()  单张权限卡（图标+状态+授权/去设置按钮） [L1984]
│       │   └─ wt()  granted/warning/pending/denied 状态徽标 [L1518]
├─ tab==="model" → Mt()  ASR + LLM + 悬浮窗样式        [L3794-3829, 定义 L1547]
│   ├─ ue()  小节标题(图标+标题+描述)                  [L1449]
│   ├─ Y()   表单字段包装(label+description+children)  [L1474]
│   ├─ jt()  行布局(悬浮窗样式行)                       [L1414]
│   └─ kt()  悬浮窗样式分段控制(flow/ink/native/off)    [L1493]
├─ tab==="processing" → _t()  处理模式列表+编辑器       [L3830-3855, 定义 L2875]
│   └─ Ot()  模式列表项按钮                             [L3002]
├─ tab==="vocabulary" → Vt()  热词+映射词典             [L3856-3865, 定义 L3034]
│   ├─ rs()  App 作用域 chip 按钮                       [L3297]
│   ├─ zt()  热词 chip（带删除×）                       [L3329]
│   ├─ as()  空态占位块                                 [L3348]
│   └─ Dialog(g!==null) 批量编辑弹窗（Textarea）         [L3263-3293]
└─ tab==="history" → vt()  历史记录列表+详情            [L3866-3888, 定义 L1028]
    ├─ xt()  搜索/时间过滤/模式过滤/导出CSV 工具条        [L1053-1061, 定义 L1109]
    ├─ gt()  历史列表项按钮                              [L1080, 定义 L1198]
    └─ ft()  历史详情面板（元数据徽标+原文+处理结果+纠错） [L1088, 定义 L1230]
        └─ Dialog(k) 纠错弹窗（错误/正确文本两个 Input）  [L1286-1340]
```

权限 Dialog 里非 system 模式（system 之外）分支 `St()` L1945-1981 渲染 `Lt()`（主触发键编辑器，L2137）：

```
Lt()  主触发键（听写/任务模式共用的 hold/toggle 快捷键） [L2137]
├─ Fe()  渐变图标卡片外壳                               [L2441]
├─ Se()  单个动作快捷键卡片（处理模式/翻译/网页搜索复用） [L2486]
│   ├─ Ns()  快捷键行布局(左:选择器+按键徽标, 右:操作按钮) [L2603]
│   ├─ Ss()  hold/toggle 下拉选择器                     [L2772]
│   ├─ Cs()  按键徽标渲染(kbd 标签)                     [L2756]
│   └─ Ts()  抓取/取消/修改/移除 按钮组                  [L2833]
│       └─ is()  带 hover 动画的图标按钮                 [L2803]
└─ Bt()  主 hold/toggle 触发键编辑器（内嵌于 transcription 卡片） [L2623]
```

页面还依赖三个未在本文件内定义、从 `index-B40jKs17.js` 导入的自定义 hook（本文件只看到调用点，具体请求序列【推断】）：
- `Vs()`（导入名 `aE as Vs`，L48）→ 提供历史记录/词汇表整套状态，`hi()` 里赋值给 `r`（L3673）。
- 与词典/历史相关的 `R.*` 方法体不在本文件内，仅能通过 ipc-contracts 按 wrapper 名反查命令（见第 3 节表格末尾"共享 hook 命令"）。

---

## 2. 状态模型

### 2.1 `ht()`（L761-L1026）— 运行时状态 hook，`hi()` 里的 `t`

- `useQuery`：`r = Ps({queryKey: Xe=["voice-runtime"], queryFn: () => R.loadVoiceRuntimeStatus(), staleTime: 1/0})`（L791-794）。`staleTime: Infinity` 意味着这条查询默认永不过期，缓存更新完全靠下面的事件推送和手动 `refetch()`，不靠 TanStack Query 的自动重新请求。
- `useState` ×4：`triggerStyleDraft`(n/c, 默认"hold")、`speechModelDraft`(x/m, 默认"appleSpeech")、`processingModeDraft`(k/u, 默认"task")、`processingModeIdDraft`(v/C, 默认"task")（L795）。
- `useEffect` ×3：
  1. 查询数据变化时把草稿状态同步为服务端真值（L796-798）。
  2. 挂载时动态 `import("./index-B40jKs17.js")` 拿到 Tauri `listen`，订阅事件 `"voice-runtime-updated"`，回调里用 `y()`（`t.setQueryData(Xe, pt(payload))`）直接把 payload 写入查询缓存——这是"推送式缓存写入"，不是 `invalidateQueries`（L800-819）。仅当 `Is()`（能力探测）为真才订阅。
  3. 监听 `window.focus` 和 `document.visibilitychange==="visible"`，触发 `r.refetch()`（L820-828）。
- `useMutation` ×8（`oe` = `useMutation`）：`saveRuntimeMutation`(M, L830)、`requestAccessibilityMutation`(b, L851)、`requestPermissionsMutation`(w, L869)、`captureTriggerMutation`(p, L902)、`setTriggerMutation`(g, L912)、`setTriggerBindingsMutation`(S, L928)、无名处理模式 id 保存 mutation(o, L944)、`setOverlayStyleMutation`(P, L960)。**全部 mutation 的 `onSuccess` 都是 `y(l.data)` 把服务端返回值直接写回查询缓存**，没有一处调用 `invalidateQueries`——即"服务端返回什么就信什么"的乐观写回模式。

### 2.2 `si()`（L3893-L4105）— ASR/LLM 凭据配置 hook，`hi()` 里的 `i`

- `useState` ×11：`asrApiKey`(r/i,"")、`asrModel`(n/c, 默认 `de("appleSpeech").defaultModel`)、`asrBaseUrl`(x/m,"")、`asrSaving`(k/u,false)、`asrTesting`(v/C,false)、`llmProvider`(T/M, 默认 `t.llmProvider`)、`llmApiKey`(b/w)、`llmModel`(p/g)、`llmBaseUrl`(S/o)、`llmSaving`(P/K,false)、`llmTesting`(f/U,false)（L3896-3985）。
- `useRef` ×2：`y`/`l` 都是"请求序列号"守卫（每次异步加载 `++ref.current` 再比对，防止旧请求覆盖新状态——竞态保护），分别用于 ASR 加载(L3896)和 LLM 加载(L3919 附近)。
- `useEffect` ×2：挂载时分别调用 `A(t.llmProvider, true)`（L3916-3918）和 `L("appleSpeech")`（L3935-3937）预加载凭据。
- 无 `useQuery`/`useMutation`，凭据读写全是手写 `async` 函数直接 `await R.xxx()`（见第 3 节）。

### 2.3 `ii(s)`（L4115-L4178）— 处理模式草稿 hook，`hi()` 里的 `n`

- `useState` ×5：`modes`(r/i, 初始值 `ti()`=`Hs()` 读本地持久化列表)、`selectedModeId`(n/c,"task")、`nameDraft`(x/m)、`descDraft`(k/u)、`promptDraft`(v/C)（L4115-4118）。
- `useRef` ×1：`y` 一次性初始化守卫，避免重复根据 prop `s` 覆盖用户已手动切换的选中项（L4118, L4119-4123）。
- `useEffect` ×2：按传入 prop `s`（对应 `transcriptionModeId`）用 `Us(s)` 反查默认应选中的自定义模式（L4119-4123，仅首次生效）；`selectedMode` 变化时把草稿字段同步为该模式的当前值（L4123-4125）。
- 模式列表的增/删/改（`addMode`/`deleteMode`/`saveSelected`）全部是纯本地数组操作 + `Ae(list)`（=`$s(list)`，本地持久化写入，非 Tauri invoke）（L4136-4177）。

### 2.4 子组件里的独立状态

- `ft()` 历史详情面板（L1230）：`useState` ×3 —— 纠错弹窗开关 `k/u`(false)、错误文本 `v/C`("")、正确文本 `y/T`("")（L1241）。
- `Se()` 单动作快捷键卡片（L1493+ 定义于 L2486）：`useState` ×2 —— 抓取中 `w/p`(false)、当前 hold/toggle 风格草稿 `P/K`(默认"hold")（L2505）；`useRef` ×3 —— `g`（抓取中标志，供 unmount 清理判断）、`S`/`o`（分别缓存最新的 `onCancelTriggerCapture`/`onSetTriggerListenerSuppressed` 回调，避免闭包过期）（L2505-2508，2564-2566 卸载清理）。
- `Bt()` 主触发键编辑器（L2623）：`useState` ×2 —— 触发风格草稿 `w/p`(初值来自 prop `t`)、抓取中 `g/S`(false)（L2642）；`useRef` ×3，作用同上（L2642-2645, 2708-2710）。
- `Lt()` 快捷键面板（L2137）：`useState` ×1 —— 当前展示中的处理模式动作 id `A/L`（L2161）；大量 `useMemo` 派生值（可绑定的进阶模式列表 `P`、已占用的主键集合 `F` 等，L2161-2175）。
- `Vt()` 词汇表面板（L3034）：`useState` ×7 —— 选中的 App 作用域 `v/C`(null)、热词输入 `y/T`、映射触发词输入 `M/b`、映射替换词输入 `w/p`、批量编辑目标 `g/S`("hotword"|"mapping"|null)、批量编辑文本 `o/P`、添加 App 忙碌态 `K/l`(false)（L3045-3047）。
- `hi()` 自身：`useState` ×2 —— 当前 tab `c/x`(默认"overview")、权限弹窗开关 `m/k`(false)（L3676）。

---

## 3. 交互动作 → 命令 映射（wrapper → tauri command，来自 ipc-contracts.jsonl）

下表左列是本文件里 `R.<method>` 的调用名（即 ipc-contracts 的 `wrapper` 字段），右列是精确匹配到的真实 command：

| 调用点（行号） | R.wrapper | tauri command | argKeys |
|---|---|---|---|
| L793 useQuery queryFn | loadVoiceRuntimeStatus | `load_voice_runtime_status` | 无 |
| L831 saveRuntimeMutation | updateVoiceRuntimeSettings | `update_voice_runtime_settings` | enabled, shortcut, speechModel, processingMode, processingModeId |
| L852 requestAccessibilityMutation | requestAccessibilityPermission | `request_accessibility_permission` | 无 |
| L870 requestPermissionsMutation | requestVoicePermissions | `request_voice_permissions` | 无 |
| L903 captureTriggerMutation | captureVoiceTriggerKey | `capture_voice_trigger_key` | style |
| L913 setTriggerMutation | setVoiceTriggerKey | `set_voice_trigger_key` | keyCode, keyLabel, keyKind, style, modifierMask |
| L929 setTriggerBindingsMutation | setVoiceTriggerBindings | `set_voice_trigger_bindings` | activeStyle, hold*, toggle* 各4字段 |
| L945 处理模式id保存 mutation | setVoiceProcessingModeId | `set_voice_processing_mode_id` | modeId, processingMode |
| L961 setOverlayStyleMutation | setVoiceOverlayStyle | `set_voice_overlay_style` | style |
| L1019 cancelTriggerCapture | cancelVoiceTriggerCapture | `cancel_voice_trigger_capture` | 无（fire-and-forget，`.catch(()=>{})`） |
| L1020 setTriggerListenerSuppressed | setVoiceTriggerListenerSuppressed | `set_voice_trigger_listener_suppressed` | suppressed（fire-and-forget） |
| L2218 Lt 内 `f()` | setVoiceModeShortcut | `set_voice_mode_shortcut` | modeId, keyCode, keyLabel, keyKind, style, modifierMask |
| L2238 Lt 内 `U()` | removeVoiceModeShortcut | `remove_voice_mode_shortcut` | modeId |
| L2269 换绑失败回滚 | removeVoiceModeShortcut | `remove_voice_mode_shortcut` | modeId（补偿事务，见4.3） |
| L3091 添加 App 作用域 | resolveVoiceVocabularyAppInfo | `resolve_voice_vocabulary_app_info` | path |
| L3848 删除处理模式清理 | removeVoiceModeShortcut ×2 | `remove_voice_mode_shortcut` | modeId（同时清 hold 变体和 toggle 变体） |
| L3900 | loadVoiceLlmConfig | `load_voice_llm_config` | provider |
| L3923 | loadVoiceAsrConfig | `load_voice_asr_config` | provider |
| L3961 saveLlm | saveVoiceLlmConfig | `save_voice_llm_config` | llmProvider, llmApiKey, llmModel, llmBaseUrl |
| L4007 testAsr | testVoiceAsrConfig | `test_voice_asr_config` | asrProvider, asrApiKey, asrModel, asrBaseUrl |
| L4039 saveAsr | saveVoiceAsrConfig | `save_voice_asr_config` | asrProvider, asrApiKey, asrModel, asrBaseUrl |
| L4081 testLlm | testVoiceLlmConfig | `test_voice_llm_config` | llmProvider, llmApiKey, llmModel, llmBaseUrl |
| L1815 `es()` 打开系统隐私面板 | 直接 `Rs("open_macos_privacy_pane",{pane})` | `open_macos_privacy_pane` | pane（此命令不在 ipc-contracts.jsonl 的 131 条采样里，是本文件里直接可见的字面量 invoke 调用，非通过 R facade） |

**共享 hook 命令（不在本页文件内可见，逻辑在 `Vs()`/`index-B40jKs17.js`，仅按 ipc-contracts 里同名 wrapper 反查，标【推断】）：**

| 页面里调用的 prop（本文件行号） | ipc-contracts 里能查到的候选 wrapper | tauri command |
|---|---|---|
| `deleteHistory`(L1093,1281,3885) 【推断对应】 | removeVoiceHistoryEntry | `remove_voice_history_entry` |
| `upsertVocabulary`(L3049,3059) 【推断对应】 | upsertVoiceVocabulary | `upsert_voice_vocabulary` |
| `deleteVocabulary`(L3152,3249) 【推断对应】 | removeVoiceVocabulary | `remove_voice_vocabulary` |
| `replaceVocabularyKind`(L3071) 【推断对应】 | replaceVoiceVocabularyKind | `replace_voice_vocabulary_kind` |
| `upsertVocabularyAppScope`(L3093) 【推断对应】 | upsertVoiceVocabularyAppScope | `upsert_voice_vocabulary_app_scope` |
| `removeVocabularyAppScope`(L3105) 【推断对应】 | removeVoiceVocabularyAppScope | `remove_voice_vocabulary_app_scope` |
| `reprocessHistory`(L1091,1272,3883) | 未在 ipc-contracts 采样里命中同名 wrapper，无法确认，标【推断/未知】 |
| `quickCorrection`(L1092,1246,3884) | 未命中，标【推断/未知】，可能复用 upsertVoiceVocabulary 或独立命令 |
| `workspaceQuery`(L3886) | loadVoiceWorkspace | `load_voice_workspace`（【推断】，ipc-contracts 里存在此 wrapper，但调用点不在本页文件） |

全部调用到的命令清单（去重，仅统计本文件内直接可见、非"共享 hook 推断"部分）：
`load_voice_runtime_status`, `update_voice_runtime_settings`, `request_accessibility_permission`, `request_voice_permissions`, `capture_voice_trigger_key`, `set_voice_trigger_key`, `set_voice_trigger_bindings`, `set_voice_processing_mode_id`, `set_voice_overlay_style`, `cancel_voice_trigger_capture`, `set_voice_trigger_listener_suppressed`, `set_voice_mode_shortcut`, `remove_voice_mode_shortcut`, `resolve_voice_vocabulary_app_info`, `load_voice_llm_config`, `load_voice_asr_config`, `save_voice_llm_config`, `test_voice_asr_config`, `save_voice_asr_config`, `test_voice_llm_config`, `open_macos_privacy_pane`。

### 3.1 时序模式小结

- **主运行时状态（`loadVoiceRuntimeStatus`）**：`staleTime: Infinity` + 事件推送（`voice-runtime-updated`）+ window focus/visibilitychange 手动 `refetch()`，**没有任何 `invalidateQueries` 调用**；所有相关 mutation 的 `onSuccess` 都是 `y(data)` 直接写缓存（single-flight 覆盖式写入，最后一次成功的写入生效，无并发合并逻辑）。
- **模式绑定切换（Lt 里的 `G()`，L2249-2280）**：把某个进阶处理模式的快捷键从模式 A 换绑到模式 B，用的是"先 set 新绑定（silent）→ 再 remove 旧绑定（silent）→ 若 remove 失败则手动补偿 remove 新绑定并报错提示"的**人工补偿事务**，因为后端没有原子换绑命令。
- **快捷键抓取类操作**（`captureTriggerKey`）都会先调 `onSetTriggerListenerSuppressed(true)` 暂停全局监听，`finally` 里恢复为 `false`，防止抓取快捷键时页面自身的监听器抢先响应。
- **本地纯前端持久化**（不经 Tauri）：处理模式列表的增/删/改（`Ae`/`$s`）、LLM 草稿的 `Ye` 缓存写入、历史 CSV 导出（纯浏览器 Blob+`<a download>`）。

---

## 4. 对话框 / 面板 / 流程

### 4.1 权限管理弹窗（`hi()` L3781-3793）
- 触发：点击顶部胶囊按钮（L3764-3774，红/绿圆点+文案，绿色需要 `runtimeSupported && microphonePermission==="authorized" && speechPermission==="authorized" && accessibilityPermission==="authorized"` 全部满足，L3679）。
- 内容：`St({mode:"system", onOpenPermissions:()=>k(true), ...})`（L3699-3738），渲染麦克风/语音识别/辅助功能三张 `Ce()` 卡片。
- 每张卡片按钮态由 `Nt(rawStatus, grantPath)`（L1820-1850）算出四态：`granted`（已授权，按钮变"管理授权"打开系统设置）/`pending`+`request`（未决定，点击调用对应 mutation 弹系统授权框）/`pending`+`openSettings`（辅助功能类无法程序化弹框，只能引导去系统设置手动开）/`denied`（拒绝或受限，引导去设置）。
- 麦克风、语音识别走 `system-dialog` 授权路径（点击直接调 `requestVoicePermissions`），辅助功能走 `accessibility` 路径（点击先调 `requestAccessibilityPermission`，随后尝试 `es("accessibility")` 打开系统隐私面板兜底，L2000-2004）。

### 4.2 快捷键抓取流程（`Se()`/`Bt()` 共用模式）
1. 点击"抓取/修改"按钮 → 设 `capturing=true` → `onSetTriggerListenerSuppressed(true)`。
2. `await onCaptureTriggerKey(style)` 走 `capture_voice_trigger_key`，等待用户按下物理按键。
3. 拿到按键后先用 `me()`（L2740-2753，跨平台安全校验：过滤纯功能键/危险组合键）本地校验，不安全直接 toast 阻断，不落库。
4. 安全的话才 `await onSave(...)`，主触发键走 `set_voice_trigger_bindings`，动作快捷键走 `set_voice_mode_shortcut`。
5. `finally` 里无论成功失败都把 `capturing` 复位、恢复监听。
6. 取消抓取（`onCancelTriggerCapture`）会调用 `cancel_voice_trigger_capture` 并同样恢复监听。
7. 组件卸载时如果仍在抓取中，`useEffect` 清理函数会强制取消并恢复监听（`Se()` L2564-2566, `Bt()` L2708-2710），防止切 tab 后残留"抓取中"状态。

### 4.3 处理模式动作换绑流程（`Lt()` 内 `G()`，L2249-2280）
1. 用户在"处理模式"卡片头部下拉选择另一个模式作为快捷键动作绑定对象。
2. 若当前动作没有已绑定快捷键，直接切换选中态，不发请求（L2252-2255）。
3. 否则：把现有快捷键 `set_voice_mode_shortcut` 到新模式（`silent: true`，忽略与自身冲突），成功后再 `remove_voice_mode_shortcut` 旧模式（`silent: true`）。
4. 若第 3 步的 remove 失败，手动调用 `removeVoiceModeShortcut(newModeId).catch(()=>{})` 把刚设置到新模式的快捷键撤销，`onRefreshRuntime()` 刷新，toast "modeSwitchFailed"——这是纯前端实现的补偿事务，防止出现"两个模式共用同一把快捷键"的不一致态。
5. 成功则切换选中态并 toast "modeSwitchDone"。

### 4.4 历史纠错弹窗（`ft()` L1286-1340）
- 打开：点击详情面板"纠正"按钮 → `M()` 清空两个输入框并 `u(true)` 打开。
- 内容：Dialog + 两个 `Input`（"错误文本"/"正确文本"），下方引用原始识别文本只读展示（`s.rawText`，L1326）。
- 提交：`b()` 校验两文本非空且不相等才允许点"添加纠正"（按钮 `disabled` 条件同款校验，L1336），调用 `onQuickCorrection(wrong, correct)`（页面层 prop，实现在共享 hook `Vs()` 内，本文件不可见，标【推断】），成功后关闭弹窗。

### 4.5 词汇表批量编辑弹窗（`Vt()` L3263-3293）
- 打开：热词或映射区域的"批量编辑"按钮 → `E(kind)`（L3066-3068）把当前列表格式化成多行文本填入 Textarea（热词一行一个 `Ut()`；映射按替换词分组 `label: sources...` 格式 `Wt()`）。
- 提交：`G()`（L3068-3071）把 Textarea 文本重新解析（`$t()`/`Gt()`，按逗号分列，首列为替换词其余为触发词，去重去空行 `As()`）后调用 `replaceVocabularyKind(kind, appBundleId, appName, entries)` 整体替换该 kind（+作用域）下的全部条目，关闭弹窗。

### 4.6 词汇表"添加 App 作用域"流程（L3072-3103）
1. 点击"添加应用"按钮，`l(true)` 进入忙碌态。
2. 动态 `import("./index-ZeD99E_m.js")` 拿到 Tauri 对话框插件的 `open()`，弹原生目录选择器（`directory:true, multiple:false, defaultPath:"/Applications"`）。
3. 用户选中 `.app` 目录后，调 `resolveVoiceVocabularyAppInfo(path)`（`resolve_voice_vocabulary_app_info`）解析出 `bundleId`/`name`。
4. 调 `upsertVocabularyAppScope(appInfo)`（推断走 `upsert_voice_vocabulary_app_scope`）落库，并把新 App 设为当前选中作用域（`C(bundleId)`）。
5. 任一步失败都 toast "addAppFailed"，`finally` 里复位忙碌态。

### 4.7 加载态与错误态
- 首次加载：`t.runtimeQuery.isLoading && !t.runtime` 时整页替换为骨架屏 `Zt()`（L3696, 组件 L3626），不渲染任何 tab 内容。
- 加载失败：`Yt()`（L3438-3486）里 `hasError` 为真时展示琥珀色错误条 + "刷新"按钮（`onRefresh` 触发 `runtimeQuery.refetch()`），与骨架屏是互斥的两种态（一个是初次无数据，一个是有历史数据但刷新失败）。
- 历史列表 `vt()`（L1051-1107）：`isLoading` 时渲染 3 个骨架条（`ae` skeleton 组件）；空列表渲染"无匹配"文案；有数据渲染真实列表，右侧详情区按"未选中/加载中/正常"三态切换文案。

---

（文档字节数约 8-9KB，覆盖 hi/ht/si/ii 四个核心 hook 与全部子组件、21 条真实命令映射、7 条推断映射、6 个交互/对话框流程。）
