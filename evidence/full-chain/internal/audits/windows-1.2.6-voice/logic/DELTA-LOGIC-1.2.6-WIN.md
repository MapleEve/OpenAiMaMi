# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 voice 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 voice 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：37

## 命令 full-chain 结论（消费者面向）

### load_voice_workspace

- **Owner EA**: `0x140156800`
- **Owner 函数**: `sub_140156800`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_voice_workspace/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### upsert_voice_template

- **Owner EA**: `0x140155b30`
- **Owner 函数**: `sub_140155B30`
- **模块**: `commands/system`
- **函数大小**: 0x806 (2054 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/upsert_voice_template/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### remove_voice_template

- **Owner EA**: `0x140155460`
- **Owner 函数**: `sub_140155460`
- **模块**: `commands/system`
- **函数大小**: 0x4be (1214 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/remove_voice_template/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### generate_voice_prompt

- **Owner EA**: `0x140d9fdd0`
- **Owner 函数**: `sub_140D9FDD0`
- **模块**: `commands/system`
- **函数大小**: 0x5dee (24046 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/generate_voice_prompt/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### inject_voice_text

- **Owner EA**: `0x140d60900`
- **Owner 函数**: `sub_140D60900`
- **模块**: `commands/system`
- **函数大小**: 0xb47 (2887 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 23
- **Edge 数量**: 23
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/inject_voice_text/`
- **call-tree**: `call-tree.json` (edges=23)
- **interface**: `interface-report.json` (confidence=high)

### load_voice_asr_config

- **Owner EA**: `0x14014f570`
- **Owner 函数**: `sub_14014F570`
- **模块**: `commands/system`
- **函数大小**: 0x36c (876 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_voice_asr_config/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### save_voice_asr_config

- **Owner EA**: `0x14014ea20`
- **Owner 函数**: `sub_14014EA20`
- **模块**: `commands/system`
- **函数大小**: 0x6a0 (1696 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 9
- **Edge 数量**: 9
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/save_voice_asr_config/`
- **call-tree**: `call-tree.json` (edges=9)
- **interface**: `interface-report.json` (confidence=high)

### test_voice_asr_config

- **Owner EA**: `0x14014de80`
- **Owner 函数**: `sub_14014DE80`
- **模块**: `commands/system`
- **函数大小**: 0x705 (1797 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 9
- **Edge 数量**: 9
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/test_voice_asr_config/`
- **call-tree**: `call-tree.json` (edges=9)
- **interface**: `interface-report.json` (confidence=high)

### load_voice_llm_config

- **Owner EA**: `0x1401511d0`
- **Owner 函数**: `sub_1401511D0`
- **模块**: `commands/system`
- **函数大小**: 0x36c (876 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_voice_llm_config/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### save_voice_llm_config

- **Owner EA**: `0x140150680`
- **Owner 函数**: `sub_140150680`
- **模块**: `commands/system`
- **函数大小**: 0x6a0 (1696 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 9
- **Edge 数量**: 9
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/save_voice_llm_config/`
- **call-tree**: `call-tree.json` (edges=9)
- **interface**: `interface-report.json` (confidence=high)

### test_voice_llm_config

- **Owner EA**: `0x14014fae0`
- **Owner 函数**: `sub_14014FAE0`
- **模块**: `commands/system`
- **函数大小**: 0x6e9 (1769 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 9
- **Edge 数量**: 9
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/test_voice_llm_config/`
- **call-tree**: `call-tree.json` (edges=9)
- **interface**: `interface-report.json` (confidence=high)

### load_voice_processing_modes

- **Owner EA**: `0x14014d1d0`
- **Owner 函数**: `sub_14014D1D0`
- **模块**: `commands/system`
- **函数大小**: 0x3d8 (984 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_voice_processing_modes/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### save_voice_processing_modes

- **Owner EA**: `0x14014cae0`
- **Owner 函数**: `sub_14014CAE0`
- **模块**: `commands/system`
- **函数大小**: 0x4de (1246 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/save_voice_processing_modes/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_processing_mode_id

- **Owner EA**: `0x14015d330`
- **Owner 函数**: `set_voice_processing_mode_id`
- **模块**: `commands/system`
- **函数大小**: 0x679 (1657 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 16
- **Edge 数量**: 16
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 set_voice_processing_mode_id 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_processing_mode_id，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音处理模式 ID 更新。1.2.4→
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_processing_mode_id/`
- **call-tree**: `call-tree.json` (edges=16)
- **interface**: `interface-report.json` (confidence=high)

### load_voice_runtime_status

- **Owner EA**: `0x140162d80`
- **Owner 函数**: `load_voice_runtime_status_owner_sys`
- **模块**: `commands/system`
- **函数大小**: 0x44c (1100 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：load_voice_runtime_status IPC 命令的 tracing::instrument 包装壳（真实业务体在同 IDB 内已命名的 load_voice_runtime_status@0x140c37a50，本次会话确认该重命名+注释来自更早轮次但从未落 raw evidence bundle，本次补写证据）。边界：core::voice::runtime 模块状态查询。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_voice_runtime_status/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### update_voice_runtime_settings

- **Owner EA**: `0x14015dd80`
- **Owner 函数**: `tauri_cmd_update_voice_runtime_settings_dispatch`
- **模块**: `commands/system`
- **函数大小**: 0x91d (2333 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 update_voice_runtime_settings 的 dispatcher，对应 macOS tauri_cmd_update_voice_runtime_settings_dispatch(0x100623880)，confirmed_parity。边界：仅负责命令分发与参数封送，实际解析在 handler(sub_1403D6B90)，持久化在 core(su
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/update_voice_runtime_settings/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_global_shortcut

- **Owner EA**: `0x140161fd0`
- **Owner 函数**: `set_voice_global_shortcut`
- **模块**: `commands/system`
- **函数大小**: 0x54c (1356 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 set_voice_global_shortcut 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_global_shortcut，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音全局快捷键配置更新。1.2.4→1.2.6 d
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_global_shortcut/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_mode_shortcut

- **Owner EA**: `0x140159880`
- **Owner 函数**: `sub_140159880`
- **模块**: `commands/system`
- **函数大小**: 0xb1d (2845 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_mode_shortcut/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### remove_voice_mode_shortcut

- **Owner EA**: `0x140159140`
- **Owner 函数**: `sub_140159140`
- **模块**: `commands/system`
- **函数大小**: 0x49c (1180 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/remove_voice_mode_shortcut/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_overlay_style

- **Owner EA**: `0x14015cb10`
- **Owner 函数**: `set_voice_overlay_style`
- **模块**: `commands/system`
- **函数大小**: 0x53c (1340 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 set_voice_overlay_style 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_overlay_style，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音悬浮窗样式更新。1.2.4→1.2.6 delta 新
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_overlay_style/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_trigger_bindings

- **Owner EA**: `0x14015eb50`
- **Owner 函数**: `sub_14015EB50`
- **模块**: `commands/system`
- **函数大小**: 0xf4d (3917 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_trigger_bindings/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_trigger_key

- **Owner EA**: `0x140160430`
- **Owner 函数**: `sub_140160430`
- **模块**: `commands/system`
- **函数大小**: 0x94d (2381 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_trigger_key/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### set_voice_trigger_listener_suppressed

- **Owner EA**: `0x140161330`
- **Owner 函数**: `sub_140161330`
- **模块**: `commands/system`
- **函数大小**: 0x509 (1289 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_voice_trigger_listener_suppressed/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### capture_voice_trigger_key

- **Owner EA**: `0x140d61ae0`
- **Owner 函数**: `sub_140D61AE0`
- **模块**: `commands/system`
- **函数大小**: 0xce7 (3303 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 25
- **Edge 数量**: 25
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/capture_voice_trigger_key/`
- **call-tree**: `call-tree.json` (edges=25)
- **interface**: `interface-report.json` (confidence=high)

### show_voice_search_overlay

- **Owner EA**: `0x140158250`
- **Owner 函数**: `sub_140158250`
- **模块**: `commands/system`
- **函数大小**: 0x67b (1659 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/show_voice_search_overlay/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### start_voice_capture

- **Owner EA**: `0x14015b7b0`
- **Owner 函数**: `start_voice_capture`
- **模块**: `commands/system`
- **函数大小**: 0x42c (1068 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 start_voice_capture 的 dispatch 入口，薄壳转发到 core::voice::runtime::start_capture，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游开始语音捕获（音频设备占用）。1.2.4→1.2.6 delta 新增命令
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/start_voice_capture/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### stop_voice_capture

- **Owner EA**: `0x14015b140`
- **Owner 函数**: `stop_voice_capture_owner_sys`
- **模块**: `commands/system`
- **函数大小**: 0x42c (1068 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：停止语音捕获的 core 层 owner 实现（core::voice::runtime::stop_capture），被命令层 stop_voice_capture 调用，处理音频流停止与资源释放。边界：core::voice::runtime 模块，归属 /codexmate_lib/core/voice/runtime/。副作用：停止音频捕获设备占用，释放相关运行时资源。mac 侧对应
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/stop_voice_capture/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### request_voice_permissions

- **Owner EA**: `0x140162800`
- **Owner 函数**: `sub_140162800`
- **模块**: `commands/system`
- **函数大小**: 0x37c (892 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/request_voice_permissions/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### remove_voice_history_entry

- **Owner EA**: `0x14014d7b0`
- **Owner 函数**: `sub_14014D7B0`
- **模块**: `commands/system`
- **函数大小**: 0x4be (1214 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/remove_voice_history_entry/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### upsert_voice_vocabulary

- **Owner EA**: `0x140154050`
- **Owner 函数**: `sub_140154050`
- **模块**: `commands/system`
- **函数大小**: 0xbaa (2986 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/upsert_voice_vocabulary/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### upsert_voice_vocabulary_app_scope

- **Owner EA**: `0x140151cb0`
- **Owner 函数**: `sub_140151CB0`
- **模块**: `commands/system`
- **函数大小**: 0x6cb (1739 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/upsert_voice_vocabulary_app_scope/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### remove_voice_vocabulary

- **Owner EA**: `0x140153980`
- **Owner 函数**: `sub_140153980`
- **模块**: `commands/system`
- **函数大小**: 0x4be (1214 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/remove_voice_vocabulary/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### remove_voice_vocabulary_app_scope

- **Owner EA**: `0x140152710`
- **Owner 函数**: `sub_140152710`
- **模块**: `commands/system`
- **函数大小**: 0x4be (1214 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/remove_voice_vocabulary_app_scope/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### replace_voice_vocabulary_kind

- **Owner EA**: `0x140152de0`
- **Owner 函数**: `sub_140152DE0`
- **模块**: `commands/system`
- **函数大小**: 0x7dd (2013 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/replace_voice_vocabulary_kind/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### resolve_voice_vocabulary_app_info

- **Owner EA**: `0x140151740`
- **Owner 函数**: `sub_140151740`
- **模块**: `commands/system`
- **函数大小**: 0x36c (876 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/resolve_voice_vocabulary_app_info/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### request_accessibility_permission

- **Owner EA**: `0x14015aad0`
- **Owner 函数**: `request_accessibility_permission`
- **模块**: `commands/voice`
- **函数大小**: 0x42c (1068 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 职责：Tauri 命令 request_accessibility_permission 的公开 dispatch 入口（tracing::instrument 包装壳，span 字段名 app，薄壳转发模式）。边界：commands::voice_runtime 模块，请求系统辅助功能权限（语音唤醒/监听依赖）。副作用：转发调用触发下游系统权限请求 API（跨进程/系统调用，非本函数直接执行）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/voice/request_accessibility_permission/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### voice_processing_done

- **Owner EA**: `0x14015be20`
- **Owner 函数**: `sub_14015BE20`
- **模块**: `commands/voice`
- **函数大小**: 0x46c (1132 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/voice/voice_processing_done/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 37/37 命令有 owner_ea + pseudocode（37 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 37/37 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 37/37 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- 本模块命令未检测到破坏性副作用关键词


## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
