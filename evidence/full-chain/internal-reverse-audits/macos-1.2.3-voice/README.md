# AiMaMi 1.2.3 macOS voice — internal-reverse 结论包

同步时间：2026-07-24
范围：`core::voice::*`（9 个具名子模块 + 25 个直挂 `core/voice/ida/pseudocode` 的 serde/trait-impl glue 文件）+ `commands::voice`（23 文件）+ `commands::voice_runtime`（9 文件）+ `platform::voice_trigger_macos`（15 文件）+ `platform::text_injection`（10 文件）+ `platform::voice_macos`（1 文件）+ `platform::voice_permissions`（4 文件）+ 前端 `VoicePage`（voice-page-CV7DqakD.js）
最终结论：**字节级反编译覆盖已达高完整度（212 个真实 `.c` 文件、0 截断桩，本轮独立复扫覆盖比源基线文档更全）**，但六维 `full_leaf_100` 门未闭合（缺 dim4 interface/DTO 抽取、dim6 test/acceptance mapping；dim5 Windows 侧证据薄弱）。当前档位为 `consumerStartReady`（39/39 命令），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

本包是**蒸馏**：把已存在的两份独立逆向分析文档（`backend-baseline/voice-baseline.md` 后端模块职责分析、`frontend/pages/voice-frontend.md` 前端组件树/状态模型/命令映射）归并成本目录规定的 canonical 结论包骨架，并对两份源文档做了一次独立的磁盘核查（文件计数复核、截断标记复扫、命令映射交叉核对）。本次会话没有 IDA MCP 工具可用，未做任何新反编译；所有新增结论均基于对已有 `.c`/`.md` 文件的直接读取与文件系统枚举。

## 证据索引

- 后端底稿：`raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md`（298 行，12 个模块职责分析 + 跨模块调用关系图，182/212 文件显式枚举）
- 前端底稿：`raw/aimami/1.2.3/macos-arm64/frontend/pages/voice-frontend.md`（204 行，VoicePage 完整组件树/4 个状态 hook/21 条直接可见命令映射 + 7 条推断映射 + 2 条未解析）
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **macOS 后端**：212 个真实 `.c` 文件（见 `manifest.json` `coverage.backend_functions_macos_by_dir` 逐目录分布），0 截断桩（本轮独立对全部 212 个文件做 `TRUNCATED`/`DECOMPILE-FAILED`/`chars total]` 关键字复扫，比源文档 voice-baseline.md 自身声明的 182 文件扫描范围更宽，补上了 30 个文件的复扫空白：25 个直挂 `core/voice/ida/pseudocode` 的 serde/trait-impl glue 文件 + `platform/voice_macos`(1) + `platform/voice_permissions`(4)）。
- **前端**：`VoicePage` 单文件（4194 行 beautify）全组件树 + 4 个核心 state hook（`hi`/`ht`/`si`/`ii`）+ 全部 5 个 tab（概览/模型/处理模式/词汇表/历史）+ 权限管理弹窗 + 热键抓取流程 + 处理模式换绑补偿事务流程，均已逆向。
- **命令面**：39 条命令（37 条命令名含 `voice` + 2 条不含 `voice` 但确认由 VoicePage 直接调用的 `request_accessibility_permission`/`open_macos_privacy_pane`），全部 39 条均在 raw 证据中找到同名或同词干的后端 owner 函数（见 `logic/REGISTRATION-TABLE-1.2.3.md`）。
- **Windows 侧**：仅 39 个原始文件（`commands/voice` 2 个、`commands/ida/pseudocode` 下 29 个散落 `voice_*` 文件、`voice_trigger_windows` 4 个、`runtime/ida/pseudocode/show_voice_overlay` 1 个、`codexmate_lib/ida/pseudocode` 下 3 个），远薄于 macOS 的 212，未做子模块级叙事整理，未产出独立 `windows-1.2.3-voice/` 包。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：strong
- dim2 后端 owner+pseudocode：strong（212 文件，0 截断——本轮独立复扫全 212 文件确认）
- dim3 call-tree 到实现叶子：partial（函数体已逆到真实逻辑+跨模块调用链图已还原，但未产出逐命令系统性调用树规约文档）
- dim4 interface/DTO/error/side-effect 边界：**not-closed**
- dim5 同平台 gate：closed-for-existence-mac / thin-for-windows（Windows 仅 39 文件，未做子模块叙事整理，核心录音状态机/热键引擎等效证据缺失，标 Unknown）
- dim6 test/acceptance mapping：**not-closed**

## Frontend Control Flow

见 `pointers/evidence-paths.md` 指向 `raw/aimami/1.2.3/macos-arm64/frontend/pages/voice-frontend.md`。关键交互：
- **热键抓取**：点击抓取按钮 → `set_voice_trigger_listener_suppressed(true)` 暂停全局监听 → `capture_voice_trigger_key` 等待用户按键 → 前端本地安全校验（过滤纯功能键/危险组合）→ `set_voice_trigger_bindings`/`set_voice_mode_shortcut` 落库 → `finally` 恢复监听；取消走 `cancel_voice_trigger_capture`。
- **处理模式换绑**：人工补偿事务——先 `set_voice_mode_shortcut` 新模式（silent）→ 成功后 `remove_voice_mode_shortcut` 旧模式（silent）→ 若 remove 失败则手动撤销新模式绑定+toast 报错，因后端无原子换绑命令。
- **权限管理**：麦克风/语音识别走 `request_voice_permissions`（系统弹框路径）；辅助功能走 `request_accessibility_permission` + `open_macos_privacy_pane`（程序化弹框不可行，引导手动开启）兜底。
- **词汇表 App 作用域添加**：原生目录选择器 → `resolve_voice_vocabulary_app_info` 解析 bundle 信息 → `upsert_voice_vocabulary_app_scope` 落库（后者为推断映射）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。核心跨模块调用链：全局热键 `listen_callback`（`platform::voice_trigger_macos`）→ `dispatch_binding_event_locked` → `handle_trigger_action`（`core::voice::runtime`）→ `start_capture`/`stop_capture` → ASR 引擎选择（`asr`/`aliyun_asr`）+ 工作区配置（`workspace`）→ 识别结果回调 `apply_sidecar_event` → 可选 LLM 润色（`llm`）→ 悬浮窗/托盘 UI 反馈（`runtime::overlay`/`runtime::tray`）→ 最终 `platform::text_injection::inject_text` 完成文本注入（写剪贴板+模拟 ⌘V，随后恢复原剪贴板内容）。

## Interface / Error / Boundary

**未闭合**（dim4）。已知的破坏性/敏感副作用（未做正式 DTO/error-envelope 抽取，仅列behavioral flag，供实现参考）：
- `terminate_voice_sidecar`：超时 1.5s 后 `Child::kill`（SIGKILL）强杀子进程。
- `cleanup_stale_sidecars`：启动期按命令行特征批量 `kill -9` 孤儿语音子进程。
- `inject_text`：临时覆盖系统剪贴板内容（写入待注入文本前备份原内容，注入后按同一份备份恢复）。
- `read_workspace_file`：读到已有 JSON 后**先把原文件 `rename` 成带时间戳备份**，再合并默认模板写回——是"写库前先备份"红线的落地实现，非删除。
- LLM/ASR provider API Key 存 macOS 钥匙串（`keyring` crate），非明文文件。

## Gate Leaf Status

`consumerStartReady` 全 39 条命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

`voice-baseline.md` 记录本批 182 个显式枚举文件中共 4 个函数带 `1.2.3 NEW-delta` 头注释（其余 178 个为 `基线 same-set`，即相对 1.2.2 未变）：
1. `core::voice::runtime::overlay::apply_native_overlay_properties`（悬浮窗原生窗口属性设置，NSWindow objc2 直接操作）
2. `core::voice::runtime::overlay::apply_native_search_overlay_properties`（同上，语音搜索结果悬浮窗）
3-4. `core::voice::aliyun_asr::AliyunAsrSession::connect` 的两个闭包体（各 ~91KB/93KB 完整反编译体）——源文档明确标注"很可能只是编译器在 1.2.2→1.2.3 之间对同一段异步状态机换了不同的内联/单态化切分边界，不代表业务逻辑真的重写"，非确认的业务重写，需结合更早版本 delta 交叉验证（本包未做此交叉验证）。

本次蒸馏额外发现的 30 个文件（25 个 `core/voice` 直挂 serde/trait-impl glue + `platform/voice_macos`(1) + `platform/voice_permissions`(4)）未被 `voice-baseline.md` 的 NEW-delta 扫描覆盖，其 delta 状态相对 1.2.2 未知（非确认无变化）。

## Unknown / Missing

1. `core::voice::pipeline`/`core::voice::traits`（`PermissionsChecker`/`TextInjector` trait + `MacosPermissionsChecker`/`MacosTextInjector` 实现，4 个函数体）——存在于 raw evidence（`core/voice/ida/pseudocode` 直挂文件）但未被 `voice-baseline.md` 的 12 个模块列表叙事覆盖；本包 README/SYSTEM-DIFF 已描述其功能角色（跨平台文本注入/权限检查的 trait 抽象层，暗示存在架构上对应的 Windows 侧实现），但未做新的 IDA 符号枚举核实其完整方法面或是否存在同二进制内的其他非 Mac 实现，标 `accepted_unknown`（工具限制类：本环境无 IDA MCP session）。
2. Angle-A 符号枚举（`func_query` on `codexmate_lib::core::voice::`）——本轮无 IDA MCP 可用，改用文件系统枚举现有 212 个 raw `.c` 叶子文件替代，弱于活体符号表查询（无法排除 string-pool/ICF 盲区），标 `accepted_unknown`（工具限制类，已诚实标注非未查）。
3. Angle-C 语义关键词孤儿扫描（`export_funcs()` 按 `microphone`/`transcribe`/`dictation`/`sidecar`/`hotkey`/`overlay` 等关键词跨命名空间过滤）——**完全未执行**独立的 IDA 导出函数扫描，只做了本包已知目录树的文件系统枚举（已补全 `voice-baseline.md` 遗漏的 30 个文件），未扫描已知目录树之外的孤儿，诚实记为 `blocks_start`。
4. 2 条前端回调 prop（`reprocessHistory`、`quickCorrection`）——`voice-frontend.md` 源文档本身未能在其可见的 `ipc-contracts.jsonl` 采样内确认对应命令名，标【推断/未知】，本包据此记 `blocks_start`。
5. dim4 interface/DTO 抽取、dim6 test/acceptance mapping：均未产出，是推进到 `strictImplementationUse` 的下一步工作。
6. Windows 侧 voice 模块：仅 39 个零散文件，未做子模块级叙事整理，未产出独立 `windows-1.2.3-voice/` 包，核心录音状态机/热键引擎等效证据缺失，标 `Unknown`（非确认不存在，也非用 macOS 证据外推）。

## Action / Non-action

- **可以做**：`consumerStartReady` 档已满足（39/39 命令），Polaris 可基于 212 个已逆函数的行为语义开始实现，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把本包的 dim2 覆盖数字（212）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 macOS 证据外推 Windows 语音模块行为；不得把 `core::voice::pipeline` trait 抽象的存在当作已确认的 Windows 侧实现证据（仅是架构推断，未核实）。
