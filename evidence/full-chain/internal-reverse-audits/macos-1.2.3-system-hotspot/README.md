# AiMaMi 1.2.3 macOS — system-hotspot 模块结论包

同步时间：2026-07-24
范围：`codexmate_lib::commands::hotspot::*`（16 个真实函数，目录 `commands/hotspot/`）+ `codexmate_lib::platform::screen::{compute_hotspot_frame,has_notch_screen}`（2 个函数，本包首次归并进 hotspot 范围）+ 前端 5 个 invoke 命令（`has_notch`/`get_hotspot_enabled`/`set_hotspot_enabled`/`focus_main_window`/`hotspot_ready`），消费于 3 个独立前端界面（hotspot 悬浮窗自身/Settings 页/Accounts 页 Quick-Settings 弹窗）。本包是**蒸馏**产出——本轮未做新反编译，把已逆好的 18 个 macOS `.c` + 5 个 Windows `.c` + 3 份前端页文档 + 既有 `backend-baseline/commands-baseline.md` §4 归并为 canonical 结论包，逐函数直接 Read 核实过一遍。
最终结论：**consumerStartReady = 5/5**（5 条 invoke 命令，其中 `focus_main_window` 的 backend leaf canonical 归属经追加 INDEX.jsonl 前的强制重读发现实为姊妹包 `macos-1.2.3-window-path`，已在该包单独达 `strictImplementationUse`）；本包自身 `strictImplementationUse`/`readyToImplement` 均为 0/5（dim3 仍有 5 个函数 + 1 组 5 handler block 的实际执行体停在未展开反编译的匿名闭包、dim4 CodexMateSettings/HotspotConfig 字段级形状未闭合、dim5 Windows 只覆盖 5/18 macOS 函数、dim6 未做）。

## 证据索引

- macOS 后端：`raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/*.c`（16 文件，全部真实符号名，0 截断，0 `sub_XXXX`）+ `raw/aimami/1.2.3/macos-arm64/platform/screen/ida/pseudocode/*.c`（2 文件）
- Windows 后端：`raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/{has_notch,get_hotspot_enabled,set_hotspot_enabled,hotspot_ready,focus_main_window}_*.c`（5 文件，位于 `commands/` 根级，非独立 `commands/hotspot/` 子目录；ground-truth 命名，command-name string xref 确认）
- 前端：`frontend/pages/shared-index-app-frontend.md`（hotspot 窗口自身 React 子树）、`frontend/pages/mcp-sessions-settings-skills-frontend.md`（Settings 页 Switch）、`frontend/pages/accounts-frontend.md`（Accounts 页 Quick-Settings 弹窗 Switch）
- 结论底稿（本包核实过、未发现分歧）：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §4
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | macOS | Windows | 前端 |
|---|---|---|---|
| 函数/命令数 | 18/18 真实命名，0 截断（16 commands/hotspot + 2 platform/screen） | 5 个文件，全部命名确认（仅覆盖 5 条 invoke 命令层，13 个 macOS-only 内部函数零证据） | 5/5 invoke 命令，3 个独立前端界面消费 |
| 覆盖类型 | `commands::hotspot::*` 全模块 + `platform::screen` 2 个 hotspot 相关函数 | 局部（仅命令层） | 全部 3 个 UI 入口的组件树/query/mutation 已逆 |

`platform/screen` 此前**未被任何 baseline 文档覆盖**（`platform-baseline.md` 明确排除 `screen` 子目录，只覆盖 process/paths/debug_log/daemon/single_instance/system_volume/proxy）——本包是该目录首次被归并进结论包，本轮已核实其内容真实完整（NSScreen 刘海几何检测/坐标计算），非孤儿遗漏。

## Per-target Result Matrix

| 命令 | 前端 CCF | 后端 owner/pseudocode | call-tree 终端 | interface/DTO | 平台 gate | gate leaf |
|---|---|---|---|---|---|---|
| `has_notch` | ✓ 3 处 `useQuery(["has-notch"])` | ✓ | 命令层→闭包(未展开)→推断调用 `platform::screen::has_notch_screen`（该函数自身完整闭合到 `NSScreen.auxiliaryTopLeftArea/auxiliaryTopRightArea`） | 布尔返回值，无复杂 DTO | mac 完整 + win 命令层确认 | consumerStartReady |
| `get_hotspot_enabled` | ✓ | ✓ | `Repository::load_settings()`→`CodexMateSettings`（字段级未展开） | `CodexMateSettings` 字段形状未闭合 | mac 完整 + win 命令层确认 | consumerStartReady |
| `set_hotspot_enabled` | ✓ Switch onCheckedChange | ✓ | `Repository::load_settings/save_settings` + 分支调 `create_hotspot_window`/`get_webview_window`+销毁 | 同上，未闭合 | mac 完整 + win 命令层确认 | consumerStartReady |
| `focus_main_window` | ✓ hotspot胶囊条 onClick | ✓ | **已闭合（经姊妹包交叉引用）**：`internal-reverse/audits/macos-1.2.3-window-path/` 是本函数的 canonical owner（`strictImplementationUse`，dim1-5 全闭合，从 1.0.9 baseline 迁移），其闭包体已解出 `WryUserEvent(discriminant=28, focused=true)` via `send_user_message`——本包不重复认领该 leaf 的 canonical 归属（RULE8 一实体一 canonical 名），仅作为 hotspot 胶囊条前端触发点交叉引用 | 无复杂返回值 | mac 完整 + win 命令层确认 | consumerStartReady（backend leaf 归属 window-path 姊妹包） |
| `hotspot_ready` | ✓ 挂载后 2×rAF 延迟调用 | ✓ | `get_webview_window`→`apply_native_hotspot_properties`(完整闭合到 NSWindow API)+`set_window_alpha`(完整闭合) | 无返回值 | mac 完整 + win 命令层确认 | consumerStartReady |

## Frontend Control Flow

3 个独立界面消费同一组 5 命令（详见 `pointers/evidence-paths.md`）：
1. **hotspot 悬浮窗自身**（`shared-index-app-frontend.md` §1.2）：窗口 label 路由 `af==="hotspot"` → 独立 React 子树 `f7()→R2()`（独立 QueryClient 实例，不与主窗口共享缓存）→ 渲染一个透明/黑色胶囊条显示 "Codex" + 5小时/周配额百分比 → onClick 调 `focusMainWindow()` → 挂载后延迟 2 帧 `requestAnimationFrame` 调 `hotspotReady()` 告知后端小组件已就绪。
2. **Settings 页**（`mcp-sessions-settings-skills-frontend.md`）：`useQuery(["has-notch"])`（`staleTime:Infinity`，仅 `enabled:isMacOS判定`）→ 通过则 `useQuery(["hotspot-enabled"], enabled: hasNotch结果)`（双重门控，非刘海屏设备完全不发起该查询）→ Switch `onCheckedChange` 触发 `setHotspotEnabled` mutation，非乐观更新，成功后 `invalidate(["hotspot-enabled"])`。
3. **Accounts 页 Quick-Settings 弹窗**（`accounts-frontend.md`）：完全独立的第二份组件实例，同款双重门控 query + `set_hotspot_enabled` mutation，成功后同样 invalidate 该 query。两处 UI 入口共享同一后端命令但前端状态互不感知（各自独立 query cache key，非全局共享 store）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`（逐命令完整链路）与 `logic/REGISTRATION-TABLE-1.2.3.md`（函数清单+地址+未展开闭包清单）。摘要：
- 完整闭合到真实 AppKit 叶子的函数：`bring_main_window_forward`/`bring_main_window_force_forward`（NSApplication 激活策略+NSRunningApplication 激活）、`apply_native_hotspot_properties`/`set_window_alpha`（NSWindow 属性/透明度）、`compute_hotspot_frame`/`has_notch_screen`（NSScreen 几何计算）、`create_hotspot_window` 主线程分支（直接调用上述函数）。
- 停在"送主线程装箱闭包"、闭包体未展开反编译的函数：`reveal_main_window`/`force_reveal_main_window`/`refresh_hotspot_on_main`/`register_hotspot_relayout_observers`/`create_hotspot_window` 非主线程分支，以及 `install_native_hotspot_observers` 注册的 5 个 NSNotificationCenter handler block——这是本包 dim3 的核心缺口，非本轮范围内可闭合（需要新 IDA 反编译工作，对匿名闭包地址跑 decompile）。**`focus_main_window` 的同款闭包已被姊妹包 `macos-1.2.3-window-path`（从 1.0.9 baseline 迁移）解出为 `WryUserEvent(discriminant=28, focused=true)`——本包据此把 `reveal_main_window`（flag=0）/`force_reveal_main_window`（flag=1）的推断置信度从"纯猜测"上调为"结构类比强证据"（同一 discriminant=28、同一装箱结构，仅字节标志位不同），但仍未独立解出这两者自身闭包体，不升档为已闭合。**
- `schedule_hotspot_relayout`：三级防抖（0/300/1200ms）后台线程调度，配合全局 `RELAYOUT_VERSION` 原子计数器（推断用于丢弃过期请求，闭包体内部逻辑未展开验证）。

## Interface / Error / Boundary

**未闭合**（dim4）。`get_hotspot_enabled`/`set_hotspot_enabled` 经 `core::repository::Repository::{load_settings,save_settings}` 读写一个 `CodexMateSettings` 类型（drop_in_place 类型名确认，字段偏移未展开）；另有一个独立命名的 `HotspotConfig` struct 出现在 `core::repository::RegistryFile` 的 serde `expecting()` 字符串清单里（与 `RegistryItem`/`AutoSwitchConfig` 等并列），是否与悬浮窗启停/位置持久化相关、与 `CodexMateSettings` 是否为同一份数据——本包**未能确认**，记为 Unknown。

## Gate Leaf Status

`consumerStartReady` 全 5 条命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

5 个函数标注 `1.2.3 NEW-delta`：`focus_main_window`/`reveal_main_window`/`force_reveal_main_window`/`bring_main_window_force_forward`/`install_native_hotspot_observers`——推断是 1.2.3 新增了"更强力地把主窗口拉回前台"的一组变体 + 系统级唤醒/切换空间后的自动重排观察者，与 `backend-baseline/commands-baseline.md` 记录的描述一致，本包独立复核未发现分歧。详见 `logic/FULL-CHAIN-1.2.3.md` 末尾 Diff 结论段。

## Unknown / Missing

0. **（自我纠正，append INDEX.jsonl 前发现并修正）** `focus_main_window` 的 canonical 归属实为姊妹包 `internal-reverse/audits/macos-1.2.3-window-path/`（本轮追加 INDEX.jsonl 前按规约重读 INDEX.jsonl 尾部时发现），已达 `strictImplementationUse`；本包已据此更新 Per-target Result Matrix 与 §Backend Control Flow，不再把 `focus_main_window` 闭包列入未闭合清单，也不重复认领其 canonical leaf 归属。
1. 5 个函数的实际执行体停在未展开反编译的匿名装箱闭包（`reveal_main_window`/`force_reveal_main_window`/`refresh_hotspot_on_main`/`register_hotspot_relayout_observers`/`create_hotspot_window` 非主线程分支）+ `install_native_hotspot_observers` 的 5 个 handler block（详见 `logic/REGISTRATION-TABLE-1.2.3.md` 末尾清单）——`blocks_start`，需要新 IDA 反编译工作，非本轮蒸馏范围。
2. `CodexMateSettings` 字段级形状与 `HotspotConfig` struct 的关系——`blocks_start`，未找到对应 `FieldVisitor::visit_str` 字节解码器文件。
3. 13 个 macOS-only 内部函数在 Windows 侧零证据（且无 `windows-x64/screen`/`windows-x64/hotspot` 目录）——`accepted_unknown`（疑似真实平台差异但未确认）。
4. 角度C 语义孤儿扫描用文本 grep 代理（非 live `export_funcs()`）——`accepted_unknown`（弱证据类）。
5. dim6 测试映射——完全未产出，`blocks_start`。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足，Polaris 可基于 18 个已逆函数的行为语义（尤其是 `bring_main_window_forward`/`apply_native_hotspot_properties`/`compute_hotspot_frame` 等已完整闭合到 AppKit 叶子的函数）开始实现，但不得宣称与 upstream 100% 等价，且不得假设未展开的闭包体行为与推断一致。
- **不要做**：不得把本包的 dim2 覆盖数字（18/18）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得把 `CodexMateSettings`/`HotspotConfig` 字段当已确认；不得用 macOS 证据外推 Windows 侧 13 个未证实函数的行为或存在性；不得对外发布本包任何内容（红线 23，内部专用）。
