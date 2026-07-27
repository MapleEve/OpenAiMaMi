# Registration Table — AiMaMi 1.2.3 Windows system-hotspot

| 命令名 (invoke) | Windows 地址 | 前端 wrapper | 前端消费方 | 核心分发目标（未独立反编译） |
|---|---|---|---|---|
| `has_notch` | `0x140193b70` | `hasNotch()`（自带 `.catch(()=>!1)` 兜底） | Settings 页 / Accounts 页（`useQuery(["has-notch"])`） | `0x140970DA0` |
| `get_hotspot_enabled` | `0x1401935f0` | `getHotspotEnabled()` | Settings 页 / Accounts 页（`useQuery(["hotspot-enabled"], enabled: has_notch结果)`） | `0x14096F8D0` |
| `set_hotspot_enabled` | `0x140192d30` | `setHotspotEnabled(bool)` | Settings 页 Switch / Accounts 页 Quick-Settings 弹窗 Switch | `0x14096FB70`（经 `0x1401BCE80` 提取 `enabled` 参数） |
| `focus_main_window` | `0x1401927d0` | `focusMainWindow()` | hotspot 窗口胶囊条 onClick（本包直接在 `index-B40jKs17.js` grep 核实到逐字 `onClick:()=>Ee.focusMainWindow()` + `cursor:"pointer"` 样式，与 macOS 姊妹包描述的胶囊条点击触发一致，win-native 独立核实非转引） | `0x14096F5D0` |
| `hotspot_ready` | `0x140192270` | `hotspotReady()` | hotspot 窗口挂载后 2×requestAnimationFrame 延迟调用（win-native `index-B40jKs17.js` 逐字核实） | `0x14096F460` |

## 共享辅助函数（非独立命令，跨模块通用，非 hotspot 专属归属）

| 函数 | Windows 地址 | 角色 | 归属模块（文件头标注） |
|---|---|---|---|
| `sub_1401C3650` | `0x1401c3650` | Tauri app-state/参数提取通用辅助（5 个 hotspot 命令均调用） | `commands/accounts.rs`（call-graph propagation 归属，跨模块共享，非 hotspot 归属） |
| `sub_1401BCE80` | `0x1401bce80` | `set_hotspot_enabled` 内联调用，提取 `enabled` 布尔参数值本身 | 未独立标注模块归属，内联于 `set_hotspot_enabled` 调用点 |

## 未展开反编译的核心分发地址清单（dim3 缺口，供下一步生产者定位）

以下 5 个地址是每个命令实际执行体的委托目标，本次证据集中在 `raw/aimami/1.2.3/windows-x64/` 全树逐一 `find -iname "*<addr>*"` 核实均无独立反编译 `.c` 文件：

- `0x140970DA0`（`has_notch` 核心分发目标）
- `0x14096F8D0`（`get_hotspot_enabled` 核心分发目标）
- `0x14096FB70`（`set_hotspot_enabled` 核心分发目标）
- `0x14096F460`（`hotspot_ready` 核心分发目标）
- `0x14096F5D0`（`focus_main_window` 核心分发目标）

5 个地址彼此不同（未被 ICF 折叠为单一符号），需要对每个地址各跑一次新的 IDA `decompile` 才能闭合 dim3。

## Windows 侧缺失的 13 个 macOS-only 内部函数（零证据，独立核实）

以下 13 个函数名（均来自 macOS 姊妹包 `commands/hotspot/`+`platform/screen/` 命名空间）本包逐一在 `raw/aimami/1.2.3/windows-x64/` 全树 `find -iname` + `grep -rl` 核实，**零命中**，且没有 `windows-x64/screen` 或 `windows-x64/hotspot` 目录：

`create_hotspot_window`、`apply_native_hotspot_properties`、`install_native_hotspot_observers`、`register_hotspot_relayout_observers`、`schedule_hotspot_relayout`、`refresh_hotspot_on_main`、`set_window_alpha`、`bring_main_window_forward`、`bring_main_window_force_forward`、`force_reveal_main_window`、`reveal_main_window`、`compute_hotspot_frame`、`has_notch_screen`

`accepted_unknown`——疑似合理的平台差异（Windows 无刘海硬件概念），但未证实是"设计上就没有"还是"尚未被反编译"。

## dim4 新线索：CodexMateSettings 字段名候选清单（本轮独立发现）

`commands/autostart/sub_140388D60.c` 内一处 serde 字段名匹配字符串常量拆解（`CodexMateSettings` 类型名 + 后续疑似字段名，边界未逐一独立验证）：

| 顺位 | 疑似字段名 |
|---|---|
| （类型名） | `CodexMateSettings` |
| 1 | `hotspot` |
| 2 | `usageRefreshInterval` |
| 3 | `deviceId` |
| 4 | `remoteDeviceSecret` |
| 5 | `notificationsSince` |
| 6 | `apiProxy` |
| 7 | `mysteryUnlockGrant` |
| 8 | `autostartWhenRouterOn` |

`diagnostic-only`——字段边界基于人工目视字符串拆分，未独立解出伴随的 `off_14174B660` 偏移表逐一核验，不作为已确认的字段清单，仅记为下一步生产者线索。
