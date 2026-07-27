# REGISTRATION-TABLE-1.2.3 — macOS voice 命令注册表

39 条上游命令 ↔ 后端 owner 文件对照。来源：`frontend/ipc-contracts.jsonl`（command 名权威）+ 本次会话对 `commands/voice`、`commands/voice_runtime`、`core/voice/**`、`platform/voice_trigger_macos`、`platform/voice_permissions` 的文件名词干匹配（非 IDA 符号解析，见 AI.md angle-A 说明——词干匹配未经 IDA xref 核实，是本包已知的弱于符号级验证的方法）。

## A. `commands/voice` 目录下独立 wrapper 文件（21 条）

| tauri command | wrapper 文件（`commands/voice/ida/pseudocode/`） |
|---|---|
| `generate_voice_prompt` | `generate_voice_prompt_0x1006faee0.c` / `_0x1006fbc50.c`（两个重载） |
| `load_voice_asr_config` | `load_voice_asr_config_0x10068f5f0.c` |
| `load_voice_llm_config` | `load_voice_llm_config_0x10068f820.c` |
| `load_voice_processing_modes` | `load_voice_processing_modes_0x100692ed0.c` |
| `load_voice_workspace` | `load_voice_workspace_0x10068f0d0.c` |
| `remove_voice_history_entry` | `remove_voice_history_entry_0x100692a60.c` |
| `remove_voice_template` | `remove_voice_template_0x10068fa50.c` |
| `remove_voice_vocabulary` | `remove_voice_vocabulary_0x100691f30.c` |
| `remove_voice_vocabulary_app_scope` | `remove_voice_vocabulary_app_scope_0x100693cd0.c` |
| `replace_voice_vocabulary_kind` | `replace_voice_vocabulary_kind_0x1006936b0.c` |
| `resolve_voice_vocabulary_app_info` | `resolve_voice_vocabulary_app_info_0x100694140.c` |
| `save_voice_asr_config` | `save_voice_asr_config_0x10068fec0.c` |
| `save_voice_llm_config` | `save_voice_llm_config_0x100690100.c` |
| `save_voice_processing_modes` | `save_voice_processing_modes_0x1006932f0.c` |
| `test_voice_asr_config` | `test_voice_asr_config_0x100690340.c` |
| `test_voice_llm_config` | `test_voice_llm_config_0x1006914f0.c` |
| `upsert_voice_template` | `upsert_voice_template_0x1006917d0.c` |
| `upsert_voice_vocabulary` | `upsert_voice_vocabulary_0x1006923a0.c` |
| `upsert_voice_vocabulary_app_scope` | `upsert_voice_vocabulary_app_scope_0x100694770.c` |
| `inject_voice_text` | `../voice_runtime/inject_voice_text_blocking_0x100215670.c`（在 `commands/voice_runtime` 目录，非 `commands/voice`，命令名与文件词干经 `_blocking` 后缀差异） |
| `load_voice_runtime_status` | `../voice_runtime/load_voice_runtime_status_0x100215420.c`（同上，物理位于 `commands/voice_runtime`） |

（本表 19 条物理位于 `commands/voice/`，2 条 `inject_voice_text`/`load_voice_runtime_status` 物理位于 `commands/voice_runtime/` 但词干精确/近似匹配，一并归入"有独立 wrapper 文件"类别，与表 B 的"有 wrapper 但需额外说明"区分。）

## B. `commands/voice_runtime` 目录下独立 wrapper 文件（7 条）

| tauri command | wrapper 文件（`commands/voice_runtime/ida/pseudocode/`） |
|---|---|
| `open_macos_privacy_pane` | `open_macos_privacy_pane_0x100214fd0.c` |
| `remove_voice_mode_shortcut` | `remove_voice_mode_shortcut_0x100215840.c` |
| `request_voice_permissions` | `request_voice_permissions_0x100215530.c` |
| `set_voice_mode_shortcut` | `set_voice_mode_shortcut_0x1002152f0.c` |
| `set_voice_trigger_bindings` | `set_voice_trigger_bindings_0x1002159a0.c` |
| `set_voice_trigger_key` | `set_voice_trigger_key_0x100214e70.c` |
| `update_voice_runtime_settings` | `update_voice_runtime_settings_0x100215b70.c` |

## C. 无独立 `commands/` wrapper 文件，直接以 core/platform 层同词干函数为 owner（10 条）

命令层 wrapper 体量极小（反序列化+直调 core 函数+序列化），本次未在 `commands/voice*` 目录下找到独立同词干 `.c` 文件；owner 归属到以下 core/platform 函数，属于文件名词干匹配推断，**未经 IDA 符号级 xref 核实**：

| tauri command | 推断 owner 函数（core/platform） | 文件路径 |
|---|---|---|
| `cancel_voice_trigger_capture` | `platform::voice_trigger_macos::cancel_trigger_capture` | `platform/voice_trigger_macos/ida/pseudocode/cancel_trigger_capture_0x1005e3e40.c` |
| `capture_voice_trigger_key` | `core::voice::runtime::capture_trigger_key`（另有 `platform::voice_trigger_macos::capture_trigger_key` 同名函数，两者关系未核实） | `core/voice/runtime/ida/pseudocode/capture_trigger_key_0x100677d80.c` + `platform/voice_trigger_macos/ida/pseudocode/capture_trigger_key_0x1005e3290.c` |
| `set_voice_global_shortcut` | `core::voice::runtime::set_global_shortcut` | `core/voice/runtime/ida/pseudocode/set_global_shortcut_0x100677fa0.c` |
| `set_voice_overlay_style` | `core::voice::runtime::set_overlay_style` | `core/voice/runtime/ida/pseudocode/set_overlay_style_0x100674900.c` |
| `set_voice_processing_mode_id` | `core::voice::runtime::set_processing_mode_id` | `core/voice/runtime/ida/pseudocode/set_processing_mode_id_0x100684b90.c` |
| `set_voice_trigger_listener_suppressed` | `core::voice::runtime::set_trigger_listener_suppressed` | `core/voice/runtime/ida/pseudocode/set_trigger_listener_suppressed_0x100689370.c` |
| `show_voice_search_overlay` | `core::voice::runtime::overlay::show_voice_search_overlay`（文件名与命令名完全一致） | `core/voice/runtime/overlay/ida/pseudocode/show_voice_search_overlay_0x1006f8360.c` |
| `start_voice_capture` | `core::voice::runtime::start_capture`（两个重载）+ `start_capture_legacy` 回退路径 | `core/voice/runtime/ida/pseudocode/start_capture_0x10066d110.c` / `_0x10066f990.c` / `start_capture_legacy_0x100680e30.c` |
| `stop_voice_capture` | `core::voice::runtime::stop_capture` | `core/voice/runtime/ida/pseudocode/stop_capture_0x10066c1e0.c` |
| `voice_processing_done` | `core::voice::runtime::notify_processing_done` | `core/voice/runtime/ida/pseudocode/notify_processing_done_0x100684810.c` |

## D. 无 "voice" 命令名但确认属于 voice 域，无独立 wrapper 文件（1 条）

| tauri command | 推断 owner 函数 | 文件路径 |
|---|---|---|
| `request_accessibility_permission` | `core::voice::runtime::request_accessibility` | `core/voice/runtime/ida/pseudocode/request_accessibility_0x100682810.c` |

## 合计与核对

A(21) + B(7) + C(10) + D(1) = **39**，与 `gate-report.json`/`manifest.json`/`data/task-plan.json` 的 39 条命令总数一致（37 条命令名含 `voice` 分布在 A/B/C 中，`open_macos_privacy_pane`（表 B）与 `request_accessibility_permission`（表 D）是命令名不含 `voice` 但确认属于 voice 域的 2 条，两者合计 37+2=39）。
