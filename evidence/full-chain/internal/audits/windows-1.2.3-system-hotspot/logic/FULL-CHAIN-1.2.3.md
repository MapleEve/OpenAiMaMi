# Full Chain — AiMaMi 1.2.3 Windows system-hotspot

「hotspot」不是网络热点。与 macOS 姊妹包（`internal-reverse/audits/macos-1.2.3-system-hotspot/`）一致，本包独立核实 win-native 前端证据（`index-B40jKs17.js` 的挂载副作用逐字模式、`settings-page-B8vywarZ.js`/`accounts-page-GdJYDnGj.js` 的双重门控 query）确认 Windows build 承载的是**同一个刘海悬浮窗指示器功能的前端 UI**（即使 Windows 硬件无刘海概念）。本文档还原从前端到 Windows 命令层的链路；命令层往下的实际执行体本轮**未能**闭合到叶子（见下）。

## 1. `has_notch` — 检测是否有刘海屏

```
前端: useQuery(["has-notch"], hasNotch, staleTime:Infinity)  [Settings页/Accounts页均消费，与 macOS 一致]
  hasNotch:()=>invoke("has_notch").catch(()=>!1)   [win-native 前端 wrapper 自带 .catch 兜底返回 false]
  -> commands::has_notch(a1: AppHandle)
       构造参数包（aHasNotch/长度9 + aApp/长度3 + app-state 提取），调 sub_1401C3650 做 Tauri app-state 提取
       -> sub_140970DA0(...)   [核心分发目标，本轮证据集中无独立反编译文件]
       [核心分发目标做了什么——未知；Windows 无刘海硬件，推测核心函数可能直接返回 false 或做某种平台探测，
        但没有证据支持任一假设，标记为 dim3 未闭合]
```

**注**：与 macOS 侧 `has_notch_screen`（真实 NSScreen API 调用链，完整闭合）不同，Windows 侧 `sub_140970DA0` 未被独立反编译，本包无法判断其内部逻辑（真实探测 / 硬编码 false / 其它）。

## 2. `get_hotspot_enabled` / `set_hotspot_enabled` — 开关读写

```
前端: useQuery(["hotspot-enabled"], getHotspotEnabled, enabled: hasNotch结果为true时才发起)
  -> invoke("get_hotspot_enabled")
  -> commands::get_hotspot_enabled(a1)
       参数包含 aGetHotspotEnab/长度19 + aRepo/长度4（"repo" 命名空间——与 1.0.9 win 包记录的
       "repo(4)=持久化/settings-backed 读路径" 命名规律一致，本包独立在 1.2.3 证据上核实到相同字符串，
       但未独立确认其语义与 1.0.9 相同，仅作结构性佐证）
       -> sub_140003640(...) 先探测一个状态指针，非空则走 LABEL_2 分支直接 sub_14096F8D0(...)
          为空则走 sub_1416850A0(...) 构造后同样落到 sub_14096F8D0(...)
       -> sub_14096F8D0(...)   [核心分发目标，本轮证据集中无独立反编译文件]
```

```
前端: Switch onCheckedChange -> setHotspotEnabled(bool) -> invalidate(["hotspot-enabled"])
  -> invoke("set_hotspot_enabled", {enabled})
  -> commands::set_hotspot_enabled(a1, enabled: bool)
       先尝试 aApp/长度3 命名空间探测（sub_1401C3650 返回 -1 表示未命中）
       未命中则落到 aRepo/长度4 命名空间路径，同时提取 aEnabled/长度7 参数键（对应前端 {enabled} 参数）
       -> sub_1401BCE80(...) 提取 enabled 布尔值本身
       -> sub_14096FB70(...)   [核心分发目标，本轮证据集中无独立反编译文件]
```

**注**：`get_hotspot_enabled`/`set_hotspot_enabled` 均可观察到 `repo`(4，持久化命名空间) 字符串字面量，`set_hotspot_enabled` 额外可观察到短暂的 `app`(3，运行时命名空间) 探测与 `enabled`(7) 参数键提取——这是结构性佐证（与 macOS 侧 `Repository::load_settings/save_settings` 读写模式、以及 1.0.9 win 包记录的 repo/app 双命名空间语义相呼应），但核心分发函数 `sub_14096F8D0`/`sub_14096FB70` 本身未被独立反编译，本包无法确认实际持久化到哪个结构体、以哪个字段布局落盘。

## 3. `hotspot_ready` — 悬浮窗前端就绪回调

```
前端: hotspot窗口挂载后延迟 2 个 requestAnimationFrame -> hotspotReady()   [本包直接在
  index-B40jKs17.js 中 grep 核实到逐字模式：
  background:transparent!important;...;requestAnimationFrame(()=>{requestAnimationFrame(()=>{f||Ee.hotspotReady().catch(()=>{})})})]
  -> invoke("hotspot_ready")
  -> commands::hotspot_ready(a1)
       参数包含 aHotspotReady/长度13 + aApp/长度3
       -> sub_14096F460(...)   [核心分发目标，本轮证据集中无独立反编译文件]
```

## 4. `focus_main_window` — 主窗口聚焦

```
前端: hotspot胶囊条 onClick -> focusMainWindow()   [本包直接在 index-B40jKs17.js 中 grep 核实到逐字
  onClick:()=>Ee.focusMainWindow() + cursor:"pointer" 样式，win-native 独立核实，非转引 macOS 姊妹包]
  -> invoke("focus_main_window")
  -> commands::focus_main_window(a1)
       参数包含 aFocusMainWindo/长度17 + aApp/长度3
       -> sub_14096F5D0(...)   [核心分发目标，本轮证据集中无独立反编译文件]
```

**注**：macOS 姊妹包中 `focus_main_window` 的闭包体经交叉引用姊妹包 `macos-1.2.3-window-path` 解出为 `WryUserEvent(discriminant=28, focused=true)`。本包**不**将该 macOS 侧的闭包语义外推到 Windows 的 `sub_14096F5D0`——Windows 的调用链在本轮证据集中就此终止，实际是否也走 Wry 事件循环、是否有相同 discriminant，均未证实（红线 8/dim5：不得用一个平台的证据外推另一个平台）。

## 5. Windows 侧共享辅助函数

- `sub_1401C3650`：5 个命令均调用的 Tauri app-state/参数提取辅助函数（文件头标注 `module src/commands/accounts.rs | attributed via call-graph propagation`——跨模块通用工具，非 hotspot 专属逻辑，本包不将其计入 hotspot 归属函数清单）。
- `sub_1401BCE80`：`set_hotspot_enabled` 内联调用，提取 `enabled` 布尔参数本身（非核心分发函数）。

## 6. 未闭合的核心分发地址清单（dim3 缺口）

以下 5 个地址是本包 dim3 的全部缺口——每个命令的实际执行体都委托给其中一个，本轮证据集中均无独立反编译文件（逐一 `find -iname "*<addr>*"` 核实全树零命中）：

- `0x140970DA0`（`has_notch` 核心分发目标）
- `0x14096F8D0`（`get_hotspot_enabled` 核心分发目标）
- `0x14096FB70`（`set_hotspot_enabled` 核心分发目标）
- `0x14096F460`（`hotspot_ready` 核心分发目标）
- `0x14096F5D0`（`focus_main_window` 核心分发目标）

这 5 个地址彼此不同（未被 ICF 折叠成同一符号），需要对每个地址跑新的 IDA `decompile` 才能闭合 dim3——这是本模块最高价值的下一步生产者工作（见 `data/task-plan.json`）。

## dim4 新线索（本轮独立发现，macOS 姊妹包未曾提及）

`commands/autostart/ida/pseudocode/sub_140388D60.c`（`autostart.rs` call-graph 归属，非 hotspot 专属函数）内含一个 serde 字段名匹配调用，引用字符串常量：

```
"CodexMateSettingshotspotusageRefreshIntervaldeviceIdremoteDeviceSecretnotificationsSinceapiProxymysteryUnlockGrant"
"sautostartWhenRouterOn"
```

`CodexMateSettings` 类型名后紧跟 `hotspot`，形似 Rust `serde_derive` 生成的字段名拼接常量（典型模式：`expecting()`/`unknown_field` 的 FIELDS 数组底层字符串）——若属实，说明 `hotspot` 是 `CodexMateSettings` 结构体自身的一个顶层字段名（而非 macOS 姊妹包在 `core/repository` serde glue 中发现的、名称不同的独立 `HotspotConfig` 结构体）。**本包未独立解出伴随的 `off_14174B660` 偏移表（8 项）与调用参数 `17`/`8` 的精确语义，不升档为已确认**，仅作为诊断性线索记入 dim4，供下一步生产者验证（见 `data/task-plan.json`）。

## Diff 结论

本包未做跨版本字节级 diff（1.2.3 是本轮唯一处理版本）。win 头部注释统一标 "win 1.2.1" 与目录路径 "1.2.3" 不符——继承自早期提取流程的已知瑕疵（macOS 姊妹包已记录同一现象于其 `pointers/evidence-paths.md`），不视为版本错置证据；command-name string xref + 二进制 SHA-256（`aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`，与姊妹包 `windows-1.2.3-relay` 记录一致）共同确认这批文件确实来自 1.2.3 win64 二进制。
