# AiMaMi 1.2.3 Windows x64 — system-hotspot 模块结论包

同步时间：2026-07-24
范围：`codexmate_lib::commands::{has_notch,get_hotspot_enabled,set_hotspot_enabled,focus_main_window,hotspot_ready}`（5 个真实命名的命令层函数，扁平位于 `commands/ida/pseudocode/` 根级，Windows 侧无独立 `commands/hotspot/` 子目录）+ 前端 5 个 invoke 命令，消费于 3 个 win-native 前端界面（hotspot 悬浮窗自身 `index-B40jKs17.js`/Settings 页 `settings-page-B8vywarZ.js`/Accounts 页 `accounts-page-GdJYDnGj.js`）。本包是**蒸馏**产出——本轮未做新反编译，把已逆好的 5 个 Windows `.c` + win-native 前端提取证据归并为 canonical 结论包，逐文件直接 Read/grep 核实过一遍；镜像 macOS 姊妹包 `internal-reverse/audits/macos-1.2.3-system-hotspot/` 的 RULE8 骨架，但**所有 Windows 侧结论均本轮独立从 win-native 证据得出，不外推 macOS 姊妹包的任何结论**（红线 8/dim5）。
最终结论：**consumerStartReady = 5/5**（5 条 invoke 命令）；本包自身 `strictImplementationUse`/`readyToImplement` 均为 0/5（dim3 0/5 命令闭合到实现叶子——5 个命令的实际执行体全部委托给 5 个未独立反编译的核心分发地址，比 macOS 姊妹包的闭合深度更浅；dim4 CodexMateSettings 字段级形状未闭合，但本轮独立发现一条新线索：`hotspot` 疑似是 `CodexMateSettings` 自身的一个顶层序列化字段名，diagnostic-only；dim5 13 个 macOS-only 函数在 Windows 侧零证据；dim6 未做）。

## 证据索引

- Windows 后端：`raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/{has_notch,get_hotspot_enabled,set_hotspot_enabled,hotspot_ready,focus_main_window}_*.c`（5 文件，扁平位于 `commands/` 根级，非独立 `commands/hotspot/` 子目录；ground-truth 命名，command-name string xref 确认）
- 前端（win-native，本包独立核实）：`frontend/ipc-contracts.jsonl`（131 条 win 命令中 5/5 hotspot 命中）、`frontend/query-hits.jsonl`（7 处双重门控 query 命中）、`frontend/frontend-contract-report.md`（L163-260/L625-626）、`package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/{index-B40jKs17.js,settings-page-B8vywarZ.js,accounts-page-GdJYDnGj.js}`
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | Windows | 前端 |
|---|---|---|
| 函数/命令数 | 5 个文件，全部命名确认（command-name string xref ground-truth），0 截断；13 个 macOS-only 内部函数零证据 | 5/5 invoke 命令，3 个 win-native 前端界面消费，均本轮独立核实（非转引 macOS 姊妹包） |
| 覆盖类型 | 局部（仅命令层，无独立 `commands/hotspot/`/`platform/screen` 目录） | 全部 3 个 UI 入口的关键交互点（query 门控 + Switch mutation + 胶囊条 onClick + 挂载副作用）已核实 |

## Per-target Result Matrix

| 命令 | 前端 CCF（win-native） | 后端 owner（command-name xref） | call-tree 终端 | interface/DTO | 平台 gate | gate leaf |
|---|---|---|---|---|---|---|
| `has_notch` | ✓ `useQuery(["has-notch"])`（Settings/Accounts 页），wrapper 自带 `.catch(()=>!1)` | ✓ | 命令层→`sub_1401C3650`(共享辅助)→`0x140970DA0`(核心分发，未独立反编译) | 布尔返回值，无复杂 DTO | win 命令层确认；13 个 macOS-only 辅助函数零证据 | consumerStartReady |
| `get_hotspot_enabled` | ✓ | ✓ | →`sub_140003640`探测→`0x14096F8D0`(核心分发，未独立反编译)；观察到 `repo`(4) 命名空间字符串 | 未闭合 | 同上 | consumerStartReady |
| `set_hotspot_enabled` | ✓ Switch onCheckedChange | ✓ | →`app`(3)探测未命中→`repo`(4)+`enabled`(7)参数→`sub_1401BCE80`提取bool→`0x14096FB70`(核心分发，未独立反编译) | 未闭合；本轮新线索见下 | 同上 | consumerStartReady |
| `focus_main_window` | ✓ 本包在 `index-B40jKs17.js` 直接核实到 `onClick:()=>Ee.focusMainWindow()` | ✓ | →`0x14096F5D0`(核心分发，未独立反编译)；**不**外推 macOS 姊妹包已解出的 `WryUserEvent(28,focused=true)` | 无复杂返回值 | 同上 | consumerStartReady |
| `hotspot_ready` | ✓ 本包在 `index-B40jKs17.js` 直接核实到挂载后 2×`requestAnimationFrame`→`hotspotReady()` | ✓ | →`0x14096F460`(核心分发，未独立反编译) | 无返回值 | 同上 | consumerStartReady |

## Frontend Control Flow（win-native，本包独立核实）

3 个 win-native 前端资源文件消费同一组 5 命令（详见 `pointers/evidence-paths.md`）：
1. **hotspot 悬浮窗自身**（`index-B40jKs17.js`）：直接 grep 核实到逐字模式 `background:transparent!important;...;requestAnimationFrame(()=>{requestAnimationFrame(()=>{f||Ee.hotspotReady().catch(()=>{})})})` + `onClick:()=>Ee.focusMainWindow()` + `cursor:"pointer"`——与 macOS 姊妹包描述的透明背景/2×rAF 延迟/胶囊条点击行为一致，win-native 独立核实。
2. **Settings 页**（`settings-page-B8vywarZ.js`）：`useQuery(["has-notch"],staleTime:1/0)`→`useQuery(["hotspot-enabled"],enabled:hasNotch&&...)`（双重门控）→ Switch mutation `setHotspotEnabled`，成功后 `invalidateQueries(["hotspot-enabled"])`，toast i18n key `settings.hotspotEnabled`/`settings.hotspotDisabled`。
3. **Accounts 页 Quick-Settings 弹窗**（`accounts-page-GdJYDnGj.js`）：完全独立的第二份组件实例，同款双重门控 query + mutation，成功后同样 invalidate。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`（逐命令完整链路）与 `logic/REGISTRATION-TABLE-1.2.3.md`（函数清单+地址+未展开核心分发地址清单）。摘要：
- 5/5 命令层函数均为真实命名（ground-truth command-name string xref），0 截断，均调用共享辅助 `sub_1401C3650`（跨模块通用，非 hotspot 归属）做 Tauri app-state/参数提取。
- 5 个命令的实际执行体全部委托给 5 个彼此不同（未 ICF 折叠）的未命名核心分发地址（`0x140970DA0`/`0x14096F8D0`/`0x14096FB70`/`0x14096F460`/`0x14096F5D0`），本轮证据集中均无独立反编译文件——这是本包 dim3 的**全部**缺口，比 macOS 姊妹包的闭合深度更浅（macOS 有 7/18 函数直接闭合到真实 AppKit 叶子）。
- `get_hotspot_enabled`/`set_hotspot_enabled` 观察到 `repo`(4)/`app`(3) 双命名空间字符串佐证，与 macOS 侧 `Repository::load_settings/save_settings` 模式及 1.0.9 win 包记录的命名空间语义相呼应，但未独立确认。

## Interface / Error / Boundary

**未闭合**（dim4）。本轮独立发现一条新线索（macOS 姊妹包未曾提及）：`commands/autostart/sub_140388D60.c`（非 hotspot 归属，call-graph 归属 autostart.rs）内含一处 serde 字段名匹配字符串常量 `"CodexMateSettingshotspotusageRefreshIntervaldeviceIdremoteDeviceSecretnotificationsSinceapiProxymysteryUnlockGrant" "sautostartWhenRouterOn"`——`CodexMateSettings` 类型名后紧跟 `hotspot`，形似 `hotspot` 是该结构体自身的一个顶层字段名（而非 macOS 侧发现的、名称不同的独立 `HotspotConfig` 结构体）。**diagnostic-only**：字段边界未独立解出伴随的偏移表核验，不升档为已确认。

## Gate Leaf Status

`consumerStartReady` 全 5 条命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

本包未做跨版本字节级 diff。5 个文件头部注释均标 "win 1.2.1"（与所在目录 "1.2.3" 不符，继承自早期提取流程的已知瑕疵，macOS 姊妹包已记录同一现象），command-name string xref + 二进制 SHA-256（`aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`，与姊妹包 `windows-1.2.3-relay` 一致）共同确认确属 1.2.3 win64 二进制。详见 `logic/FULL-CHAIN-1.2.3.md`。

## Unknown / Missing

1. 5 个命令的实际执行体（核心分发地址 `0x140970DA0`/`0x14096F8D0`/`0x14096FB70`/`0x14096F460`/`0x14096F5D0`）——`blocks_start`，需要新 IDA 反编译工作，非本轮蒸馏范围。
2. `hotspot` 是否为 `CodexMateSettings` 自身字段名（本轮新线索）——`accepted_unknown`（diagnostic-only，未独立验证字段边界）。
3. 13 个 macOS-only 函数在 Windows 侧零证据（且无 `windows-x64/screen`/`windows-x64/hotspot` 目录，本包独立核实非转引）——`accepted_unknown`（疑似真实平台差异但未确认）。
4. 角度C 语义孤儿扫描用文本 grep 代理（非 live `export_funcs()`）——`accepted_unknown`（弱证据类）。
5. dim6 测试映射——完全未产出，`blocks_start`。
6. 与 `windows-1.0.9-system-hotspot` 包的语义关系——本包确认 1.0.9 是不同语义范围（WiFi 网络热点 vs 1.2.3 的刘海悬浮窗），不迁移其 `strictImplementationUse` 结论，但未做产品决策层面的"1.0.9 功能是否已被 1.2.3 完全取代"判断——`product_decision`，非本轮蒸馏范围。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足，Polaris 可基于 5 个已确认命令名 + win-native 前端证据（query 门控/mutation/onClick/挂载副作用）开始实现前端交互层，但不得宣称与 upstream 100% 等价，且不得假设 5 个核心分发地址的行为与 macOS 侧或 1.0.9 win 侧的推断一致。
- **不要做**：不得把本包的 dim2 覆盖数字（5/5）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得把 `hotspot` 字段名线索当作已确认字段类型/布局；不得用 macOS 证据外推本包 5 个核心分发地址的行为（红线 8/dim5）；不得把 `windows-1.0.9-system-hotspot` 包的 `strictImplementationUse` 结论、owner 名或地址迁移到本包；不得对外发布本包任何内容（红线 23，内部专用）。
