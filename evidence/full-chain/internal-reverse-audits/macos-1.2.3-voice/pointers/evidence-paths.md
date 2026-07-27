# Evidence Pointers — macos-1.2.3-voice

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, macOS, 212 文件）

- `raw/aimami/1.2.3/macos-arm64/commands/voice/ida/pseudocode/*.c` — 23 个命令 wrapper 文件
- `raw/aimami/1.2.3/macos-arm64/commands/voice_runtime/ida/pseudocode/*.c` — 9 个命令 wrapper 文件
- `raw/aimami/1.2.3/macos-arm64/core/voice/ida/pseudocode/*.c` — 25 个直挂文件（serde derive glue + `pipeline::{MacosPermissionsChecker,MacosTextInjector}` trait-impl 方法体）
- `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/ida/pseudocode/*.c` — 60 个文件（录制生命周期总控状态机）
- `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/overlay/ida/pseudocode/*.c` — 10 个文件（悬浮窗 UI）
- `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/tray/ida/pseudocode/*.c` — 1 个文件（菜单栏图标）
- `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/watchdog/ida/pseudocode/*.c` — 3 个文件（超时看门狗）
- `raw/aimami/1.2.3/macos-arm64/core/voice/workspace/ida/pseudocode/*.c` — 21 个文件（模板/词表/历史持久化层）
- `raw/aimami/1.2.3/macos-arm64/core/voice/llm/ida/pseudocode/*.c` — 11 个文件（LLM 后处理）
- `raw/aimami/1.2.3/macos-arm64/core/voice/aliyun_asr/ida/pseudocode/*.c` — 9 个文件（阿里云 ASR 客户端）
- `raw/aimami/1.2.3/macos-arm64/core/voice/aliyun_asr/connect/ida/pseudocode/*.c` — 2 个文件（`connect` 异步闭包拆分体）
- `raw/aimami/1.2.3/macos-arm64/core/voice/asr/ida/pseudocode/*.c` — 8 个文件（ASR provider 抽象层）
- `raw/aimami/1.2.3/macos-arm64/platform/voice_macos/ida/pseudocode/*.c` — 1 个文件（sidecar 路径解析）
- `raw/aimami/1.2.3/macos-arm64/platform/voice_permissions/ida/pseudocode/*.c` — 4 个文件（TCC 权限查询）
- `raw/aimami/1.2.3/macos-arm64/platform/voice_trigger_macos/ida/pseudocode/*.c` — 15 个文件（全局热键引擎）
- `raw/aimami/1.2.3/macos-arm64/platform/text_injection/ida/pseudocode/*.c` — 10 个文件（Accessibility 文本注入）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md` — 后端模块职责分析底稿（298 行）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/voice-frontend.md` — VoicePage 完整逆向（组件树/状态模型/交互/命令映射，204 行）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/voice-page-CV7DqakD.js` — beautify 后源文件
- `raw/aimami/1.2.3/macos-arm64/dumped/assets/voice-page-CV7DqakD.js` — 原始 dump（未 beautify）
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（含 voice 服务对象方法）

## raw evidence（Windows, 39 文件, 未整理成独立包）

- `raw/aimami/1.2.3/windows-x64/commands/voice/ida/pseudocode/*.c` — 2 个文件
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/*voice*.c` — 29 个散落文件（与其他非-voice 命令混放同一目录，非独立 voice 子目录）
- `raw/aimami/1.2.3/windows-x64/voice_trigger_windows/**` — 4 个文件
- `raw/aimami/1.2.3/windows-x64/runtime/ida/pseudocode/show_voice_overlay_0x140aedb20.c` — 1 个文件
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/{generate_voice_prompt,capture_voice_trigger_key,inject_voice_text}_*.c` — 3 个文件

## INDEX.jsonl 命中（本次核实/append）

- 既有：`aimami/1.2.3/windows-x64/proxy_server/*`（relay 域，非 voice，仅作背景参照，本次未新增 voice 既有条目命中）
- 本次 append（append-only，未改旧行）：16 个 `aimami/1.2.3/macos-arm64/<voice-leaf-dir>/backend-pseudocode-leaf` 条目，对应上方 raw evidence（backend, macOS）小节的 16 个目录（`commands/voice`、`commands/voice_runtime`、`core/voice`（直挂）、`core/voice/runtime`、`core/voice/runtime/overlay`、`core/voice/runtime/tray`、`core/voice/runtime/watchdog`、`core/voice/workspace`、`core/voice/llm`、`core/voice/aliyun_asr`、`core/voice/aliyun_asr/connect`、`core/voice/asr`、`platform/voice_macos`、`platform/voice_permissions`、`platform/voice_trigger_macos`、`platform/text_injection`）+ 1 个 `aimami/1.2.3/macos-arm64/voice/frontend-control-flow` 条目。见 session `voice123-audit-conclusion-append-20260724`。

## 跨包参照（非本包权威依据，仅供交叉参照）

- `internal-reverse/audits/macos-1.2.3-relay/` — 同版本 relay 域结论包，参照其目录骨架/门禁措辞模板产出本包（不代表 relay 与 voice 有业务耦合，仅是结构模板参照）。
