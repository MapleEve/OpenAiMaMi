# Full Chain — AiMaMi 1.2.3 macOS system-hotspot

「hotspot」不是网络热点，是一个独立于主窗口、常驻贴合 MacBook 刘海（notch）区域的原生 NSWindow 悬浮小窗，展示当前账号/用量状态的极简指示器（menu-bar capsule）。本文档还原从前端交互到原生 AppKit 调用叶子的完整链路，逐函数直接 Read 核实（非转述 backend-baseline/commands-baseline.md，是交叉核对后独立复述）。

## 1. `has_notch` — 检测是否有刘海屏

```
前端: useQuery(["has-notch"], hasNotch, staleTime:Infinity)  [多处消费：Settings页/Accounts页/hotspot窗口自身]
  -> invoke("has_notch")
  -> commands::hotspot::has_notch(app: AppHandle)
       构造一个 tag=28 的装箱闭包消息（含 mpmc channel 用于回传结果）
       -> tauri_runtime_wry::send_user_message(app_handle, msg, 0.0, a4)  [调度到主线程]
       -> receiver.recv() 阻塞等待主线程执行完毕的结果
       [闭包体本身未见独立反编译文件——推断调用 platform::screen::has_notch_screen，
        但闭包体地址(anon符号)未展开验证，标记为 dim3 未闭合]
  -> platform::screen::has_notch_screen()  [同目录已确认存在，且逻辑独立自洽]
       NSProcessInfo.operatingSystemVersion() 检查 macOS >= 12
       pthread_main_np()==1 检查（必须主线程）
       NSScreen.screens 遍历每个屏幕
       -> screen.auxiliaryTopLeftArea() + screen.auxiliaryTopRightArea()
       -> 若 topLeftArea.width>0 && topRightArea.width>0 && (topRightArea.x > topLeftArea.width+topLeftArea.x)
          则判定该屏幕有刘海凹口，返回 true；遍历完无命中返回 false
```

**注**：`has_notch_screen` 本身逻辑完整闭合（真实 NSScreen API 调用链），但 `commands::hotspot::has_notch`（前端直接 invoke 的命令层）与 `has_notch_screen` 之间的连接点是通过一个未展开反编译的闭包完成的——这是本模块 dim3 的核心缺口来源（详见 §6）。

## 2. `get_hotspot_enabled` / `set_hotspot_enabled` — 开关读写

```
前端: useQuery(["hotspot-enabled"], getHotspotEnabled, enabled: hasNotch结果为true时才发起)
  -> invoke("get_hotspot_enabled")
  -> commands::hotspot::get_hotspot_enabled(state: OnceBox<Mutex<...>>)
       OnceBox::initialize 懒初始化一个全局 Mutex（poisoned-lock 检测/panic-count 机制）
       -> core::repository::Repository::load_settings() -> CodexMateSettings（读取整份持久化设置结构体，
          drop_in_place<CodexMateSettings> 确认了类型名，但字段级 layout 未展开——布尔字段位置未逐字节确认）
       返回结构体中的 hotspot-enabled 布尔字段
```

```
前端: Switch onCheckedChange -> setHotspotEnabled(bool) -> invalidate(["hotspot-enabled"])
  -> invoke("set_hotspot_enabled", {enabled})
  -> commands::hotspot::set_hotspot_enabled(app, enabled: bool)
       同款 Mutex 懒初始化/poisoned-lock 模式
       -> Repository::load_settings() -> CodexMateSettings
       -> 覆写第 18 个 QWORD 槽位为传入的 enabled bool（`LOBYTE(__dst[18]) = a4`）
       -> Repository::save_settings(new_settings) -> 落盘持久化
       若 enabled==true：调 create_hotspot_window(app) 创建悬浮窗（若已存在会被内部早退跳过）
       若 enabled==false：调 tauri::Manager::get_webview_window("hotspot") 拿到窗口句柄，
          经 tao 事件循环 Proxy::send_event 发一个关闭消息把窗口销毁/隐藏
       （两条分支互斥，即开关切换直接驱动窗口的创建/销毁，非仅持久化数值）
```

**注**：`CodexMateSettings` 是被读写的实际结构体类型（drop_in_place 类型名确认），但其字段偏移/名称未逐一验证。同时存在一个名为 `HotspotConfig` 的独立 struct（出现在 `core::repository::RegistryFile` 的 serde `expecting()` 字符串清单中，与 `RegistryItem`/`AutoSwitchConfig`/`CodexMateSettings` 等并列），两者是否有关联（`HotspotConfig` 会不会才是真正记录悬浮窗位置/frame 而非启停开关）本包**未能确认**，标记为 Unknown（见 gate-report.json）。

## 3. `hotspot_ready` — 悬浮窗前端就绪回调

```
前端: hotspot窗口挂载后延迟 2 个 requestAnimationFrame -> hotspotReady()
  -> invoke("hotspot_ready")
  -> commands::hotspot::hotspot_ready(app)
       tauri::Manager::get_webview_window("hotspot")  拿到窗口句柄，若不存在直接跳过（早退）
       若存在：
         apply_native_hotspot_properties(window, should_show=true, ..)  见 §5
         set_window_alpha(window, 1.0)  见 §4，淡入显示
```

## 4. `set_window_alpha(window, alpha: f64)` — 窗口透明度

```
tauri_runtime_wry::WryWindowDispatcher::window_handle()
  分支：raw handle kind==1(AppKit) -> 继续；kind==16(其它平台) -> 返回错误提前退出；其它 kind -> 返回错误
NSView.window -> NSWindow
NSWindow.setAlphaValue(alpha)  [真实叶子调用]
```

用于悬浮窗淡入淡出动画（`hotspot_ready` 用 alpha=1.0 淡入；`create_hotspot_window` 创建时先用 alpha=0.0 隐藏，等前端就绪再淡入，避免闪烁）。

## 5. `apply_native_hotspot_properties(window, should_show: bool, ..)` — 原生窗口属性

```
window_handle() 同 §4 的 kind 判定
NSView.window -> NSWindow
NSWindow.setLevel(..)          [悬浮窗层级，具体数值未在本包展开]
NSWindow.setCollectionBehavior(..)
NSWindow.setHasShadow(false)
NSWindow.setOpaque(false)
NSColor.clearColor() -> NSWindow.setBackgroundColor(clearColor)   [透明背景]
platform::screen::compute_hotspot_frame(window) -> 见 §7，算出目标 frame
  若成功(tag==1): NSWindow.setFrame_display(frame, animate=true, ..)
若 should_show==true 且 NSWindow.isVisible():
  NSWindow.orderFrontRegardless()   [前置显示，不激活 app，不抢焦点]
```

## 6. 窗口显隐/前置操作族（一部分闭合到叶子，一部分停在主线程分发点）

### 6a. `bring_main_window_forward(app)` — 完整闭合到 AppKit 叶子

```
set_window_alpha(app, 1.0)
if pthread_main_np()==1:
  NSApplication.sharedApplication().setActivationPolicy(0)   [Regular，从纯菜单栏态切回 Dock 态]
if pthread_main_np()==1:
  NSApplication.sharedApplication().activateIgnoringOtherApps()
  NSRunningApplication.currentApplication().activateWithOptions(3)
连续 4 次 send_user_message(app, msg_tag={40,39,58,57}, alpha=1.0, ..)   [向 Tauri 主线程事件循环追加 4 条窗口消息]
```

### 6b. `bring_main_window_force_forward(app)` — 复用 6a + 追加消息

```
alpha = bring_main_window_forward(app)   [复用 6a 全部逻辑]
send_user_message(app, msg_tag=47, alpha, ..)
send_user_message(app, msg_tag=57, alpha, ..)
```

### 6c. `focus_main_window` / `reveal_main_window` / `force_reveal_main_window`（三者同构）

```
Context::clone(app) + Arc 强引用计数手动递增（带溢出 panic 检查 BUG()）
构造一个 tag=28 的装箱闭包（内含一个布尔标志位：focus_main_window/force_reveal_main_window=1，reveal_main_window=0）
send_user_message(app, closure_msg, ..)
```

**`focus_main_window` 闭包体已解出（经交叉引用，非本包本轮反编译）**：追加 INDEX.jsonl 前按规约重读根 `INDEX.jsonl` 尾部时发现，姊妹包 `internal-reverse/audits/macos-1.2.3-window-path/` 是 `focus_main_window` 的 canonical owner，已达 `strictImplementationUse`（从 1.0.9 baseline `migrated_no_behavior_diff`），其 `logic/WINDOW-PATH-DISTILLED-123.md` 记录该闭包实为构造并投递一个 `WryUserEvent(discriminant=28, focused=true)`，经 `tauri_runtime_wry::send_user_message` 送达 Wry 事件循环终结（真实 leaf，非 wrapper-only）。本包不重复认领该函数的 canonical 归属（RULE8 一实体一 canonical 名）。

`reveal_main_window`（flag=0）/`force_reveal_main_window`（flag=1）与 `focus_main_window` 结构完全同构（同一 discriminant=28、同一装箱大小/字段布局，仅字节标志位不同）——据此可合理推断二者分别投递 `WryUserEvent(28, focused=false)` / `WryUserEvent(28, focused=true)`，但**这两者自身的闭包体本包未独立反编译验证**，仍标记为高置信度 `accepted_unknown`（结构类比强证据，非确认事实）。

### 6d. `refresh_hotspot_on_main` / `register_hotspot_relayout_observers`（同款 tag=28 分发模式）

同 6c 模式：Context clone + 引用计数递增 + 装箱闭包 + `send_user_message` 分发到主线程；闭包体未展开反编译。`register_hotspot_relayout_observers` 额外有一个 `OnceLock<bool> INSTALLED` 全局静态防重复注册守卫。

## 7. `compute_hotspot_frame(out_frame)` — 悬浮窗目标坐标计算

```
NSProcessInfo.operatingSystemVersion() 检查 macOS >= 12 + pthread_main_np()==1
遍历 NSScreen.screens，找到 auxiliaryTopLeftArea/auxiliaryTopRightArea 均非零且满足刘海条件的屏幕（同 has_notch_screen 判定逻辑）
命中后：
  width  = max(380.0, notch右边界 - notch左边界 + 180.0)   [SIMD blendv/max 运算，取较宽值兜底]
  x = screen.frame.x + (screen.width - width)/2   [水平居中于该屏幕]
  y = screen.frame.y + screen.height - height     [贴合顶部]
  返回 (ok=true, x, y, width, height)
未命中（无刘海屏或系统版本/线程条件不满足）：返回 (ok=false)
```

被 `apply_native_hotspot_properties` 消费，用于 `NSWindow.setFrame_display`。

## 8. `install_native_hotspot_observers`（1.2.3 NEW-delta）— 系统事件观察者注册

```
NSNotificationCenter.defaultCenter -> 注册 NSApplicationDidChangeScreenParametersNotification 观察者
NSWorkspace.sharedWorkspace().notificationCenter -> 依次注册：
  - NSWorkspaceDidWakeNotification
  - NSWorkspaceScreensDidWakeNotification
  - NSWorkspaceSessionDidBecomeActiveNotification
  - NSWorkspaceActiveSpaceDidChangeNotification
每个观察者的 handler 都是一个装箱 Block2/Rust 闭包（addObserverForName:object:queue:usingBlock:），
闭包体未见独立反编译文件——推断（未验证）调用 schedule_hotspot_relayout（见 §9），
因为这正是"屏幕参数变化/唤醒/切换 space 后需要重新计算刘海窗口位置"的典型触发场景。
```

## 9. `schedule_hotspot_relayout(app)` — 防抖重排调度

```
全局原子计数器 RELAYOUT_VERSION 自增（生成本次调度的世代号 v7）
连续 spawn 3 个后台线程，分别带 0ms / 300ms / 1200ms 三级延迟（三级防抖：立即一次 + 短延迟一次 + 长延迟兜底一次，
覆盖"屏幕参数变化事件可能连续触发多次、需要在系统稳定后再计算一次准确布局"的场景）
每个线程 spawn 后立即 join（阻塞等待其完成，非真正并发—更像是"提交一个延迟任务给内部调度器"的模式，
延迟本身可能发生在 spawn_unchecked 内部而非 main 线程里 sleep）
spawn 失败会 panic："failed to spawn thread"
[各延迟线程实际执行体是否会与最新 RELAYOUT_VERSION 比对以丢弃过期请求——本包读到 v7 被传入闭包捕获，
 但该闭包体自身逻辑同 §6/§8 一样未展开反编译，是否真的做世代号比对未确认，仅是合理推测]
```

## 10. `create_hotspot_window(app)` — 悬浮窗创建（懒创建 + 幂等）

```
tauri::Manager::get_webview_window("hotspot")
若已存在(tag==3)：直接 drop 早退返回 None（幂等，不重复创建）
若不存在：
  WebviewWindowBuilder::new(app, "hotspot", WebviewUrl("index.html"))
    .title(..).inner_size(..).position(..).with_webview(..)
  分两条路径完成后续：
    若 pthread_main_np()==1（已在主线程）：
      直接调 apply_native_hotspot_properties(win, should_show=false, ..) + set_window_alpha(win, 0.0)
      （初始不可见，等待前端 hotspot_ready 回调后才淡入，见 §3）
      再 send_user_message(win, msg_tag=40, ..) 补发一条窗口消息
    若不在主线程：
      走与 §6c/§6d 相同的 Context-clone + 引用计数 + tag=28 装箱闭包 + send_user_message 分发模式
      （闭包体同样未展开反编译）
```

## Diff 结论（vs 1.2.2）

5 个函数标注 `1.2.3 NEW-delta`（IDA 函数枚举 diff，名↔地址一致，非本包独立字节级复核）：`focus_main_window`、`reveal_main_window`、`force_reveal_main_window`、`bring_main_window_force_forward`、`install_native_hotspot_observers`。这组合看起来是 1.2.3 为"更强力地把主窗口拉回前台"新增了一套变体（force_forward/force_reveal），以及新增了系统级唤醒/切换 space 后的自动重排观察者（install_native_hotspot_observers）——与 `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` 记录的"1.2.3 新增了强制版本（对已隐藏或失焦的窗口更强力地拉回前台）"描述一致，本包独立读取全部 5 个文件复核未发现分歧。
