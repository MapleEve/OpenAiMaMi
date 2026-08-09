# Registration Table — AiMaMi 1.2.3 macOS system-hotspot

| 命令名 (invoke) | macOS 地址 | Windows 地址 | 前端 wrapper | 前端消费方 |
|---|---|---|---|---|
| `has_notch` | `0x1006ff890` (`commands::hotspot::has_notch`) | `0x140193b70` | `hasNotch()` | Settings 页 / Accounts 页 / hotspot 窗口自身（3 处 `useQuery(["has-notch"])`） |
| `get_hotspot_enabled` | `0x1006fd5e0` | `0x1401935f0` | `getHotspotEnabled()` | Settings 页 / Accounts 页（`useQuery(["hotspot-enabled"], enabled: has_notch结果)`） |
| `set_hotspot_enabled` | `0x1006fd820` | `0x140192d30` | `setHotspotEnabled(bool)` | Settings 页 Switch / Accounts 页 Quick-Settings 弹窗 Switch |
| `focus_main_window` | `0x1006fd300`（1.2.3 NEW-delta） | `0x1401927d0` | `focusMainWindow()` | hotspot 窗口胶囊条 onClick |
| `hotspot_ready` | `0x1006fd130` | `0x140192270` | `hotspotReady()` | hotspot 窗口挂载后 2×requestAnimationFrame 延迟调用 |

## 非独立命令的内部函数（不在上表 5 条 invoke 名单内，均为 `commands::hotspot::*` 命名空间内部实现，Windows 侧无对应文件）

| 函数 | macOS 地址 | 1.2.3 delta 标记 | 角色 |
|---|---|---|---|
| `create_hotspot_window` | `0x1006fded0` | 基线 same-set | 悬浮窗懒创建（幂等） |
| `apply_native_hotspot_properties` | `0x1006fef70` | 基线 same-set | NSWindow 原生属性设置（层级/阴影/背景/frame） |
| `set_window_alpha` | `0x1006fd220` | 基线 same-set | NSWindow.setAlphaValue，淡入淡出 |
| `install_native_hotspot_observers` | `0x1006ff200` | **1.2.3 NEW-delta** | 注册 5 个 NSNotificationCenter 观察者 |
| `register_hotspot_relayout_observers` | `0x1006ff6f0` | 基线 same-set | 一次性（OnceLock）注册重排观察者，主线程分发 |
| `schedule_hotspot_relayout` | `0x1006fec70` | 基线 same-set | 三级防抖重排调度（0/300/1200ms） |
| `refresh_hotspot_on_main` | `0x1006fe740` | 基线 same-set | 主线程刷新分发（闭包体未展开） |
| `reveal_main_window` | `0x1006fd480` | **1.2.3 NEW-delta** | 主线程窗口显现分发（闭包体未展开，flag=0；结构类比 `focus_main_window` 已确认的 `WryUserEvent(28,focused=false)`，未独立验证） |
| `focus_main_window`（内部同名实现，与 invoke 命令同一函数） | `0x1006fd300` | **1.2.3 NEW-delta** | 主线程窗口聚焦分发（**闭包体已解出**：`WryUserEvent(28,focused=true)`，见姊妹包 `macos-1.2.3-window-path`，canonical 归属该包） |
| `force_reveal_main_window` | `0x1006fe890` | **1.2.3 NEW-delta** | 主线程窗口强制显现分发（闭包体未展开，flag=1；结构类比 `focus_main_window` 已确认的 `WryUserEvent(28,focused=true)`，未独立验证） |
| `bring_main_window_forward` | `0x1006fe9f0` | 基线 same-set | 完整闭合：激活策略+激活app+4条窗口消息 |
| `bring_main_window_force_forward` | `0x1006ff0f0` | **1.2.3 NEW-delta** | 复用 `bring_main_window_forward` + 2 条追加消息 |

## `platform::screen::*`（本包首次归并进 hotspot 范围，此前无 baseline 文档覆盖）

| 函数 | macOS 地址 | 角色 |
|---|---|---|
| `has_notch_screen` | `0x1007026c0` | NSScreen 遍历，检测刘海凹口存在性（`commands::hotspot::has_notch` 的推断调用目标，未展开闭包验证连接点） |
| `compute_hotspot_frame` | `0x100702890` | NSScreen 遍历+几何计算，输出悬浮窗目标 frame（居中于刘海屏、贴合顶部） |

## 未展开反编译的闭包体清单（dim3 缺口，供下一步生产者定位）

以下函数把实际执行体委托给一个通过 `tauri_runtime_wry::send_user_message` 分发到 Tauri 主线程事件循环的装箱 Rust 闭包，该闭包体本身在本次证据集中没有独立的 `.c` 反编译文件（只有一个匿名符号地址，如 `anon_0df76e0cec988e6dc281ac0519b88803_1168`）：

- `reveal_main_window` (`0x1006fd480`)
- `force_reveal_main_window` (`0x1006fe890`)
- `refresh_hotspot_on_main` (`0x1006fe740`)
- `register_hotspot_relayout_observers` (`0x1006ff6f0`)
- `create_hotspot_window` 的非主线程分支 (`0x1006fded0`)

**`focus_main_window` (`0x1006fd300`) 已从本清单移除**——追加根 `INDEX.jsonl` 前的强制重读发现姊妹包 `internal-reverse/audits/macos-1.2.3-window-path/` 已把该函数闭包解出为 `WryUserEvent(discriminant=28, focused=true)`（从 1.0.9 baseline 迁移，`strictImplementationUse`）。该函数的 canonical leaf 归属姊妹包，非本包；`reveal_main_window`/`force_reveal_main_window` 与其结构同构（仅 flag 字节不同），据此上调置信度但未独立确认，故仍留在本清单。

以及 `install_native_hotspot_observers` (`0x1006ff200`) 注册的 5 个 `NSNotificationCenter` handler block（`anon_4fd0d0f33f5bcd90fdaba20400e954f2_466`，5 次复用同一闭包体地址模式，参数不同）。

这些匿名符号地址在本次证据集中可见（作为调用参数），但其反编译产物不在 `raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/` 目录下，需要新的 IDA 反编译工作（对该匿名地址跑 `decompile`）才能闭合 dim3。
