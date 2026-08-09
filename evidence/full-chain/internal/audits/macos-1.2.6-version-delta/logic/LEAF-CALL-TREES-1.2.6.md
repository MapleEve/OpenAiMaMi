# 三叶调用树 — macOS x86_64 行为证据

所有地址来自 AiMaMi 1.2.6 x86_64 live IDB（universal source SHA-256 `ba04c977e9c6dd97372d70ff8878543e716f75e106125852d5a152ad78b5d0ca`）。本页仅总结已核调用边，不复制 raw 伪代码。系统、Tauri 与 sidecar 边界均显式作为 terminal；不把它们记成内部遗漏。

## `get_codex_router_auth_readiness`

```text
run closure 0x100614610
  -> tauri_cmd_router_unlock_auth_readiness_dispatch 0x10062b180
     -> router_unlock_auth::readiness 0x1007365a0
        -> load_auth_file 0x10023d510 -> std::fs::read_to_string + serde [filesystem/parser terminal]
        -> auth_is_usable_real_oauth 0x100733b60 -> token_remaining_seconds [auth-domain terminal]
        -> read_marker [filesystem terminal]
        -> backup_contains_usable_real_oauth 0x100735d30 -> std::fs::read + serde [filesystem/parser terminal]
        -> has_restorable_real_oauth 0x100733c80 -> legacy backup / marker [auth-domain terminal]
     -> RelayManager::snapshot [state read terminal]
     -> CoreEnvelope::ok 0x1005ac480 -> InvokeResolver::respond [Tauri callback terminal]
  State/CommandArg failure -> InvokeResolver::return_result 0x10026b540 [Tauri callback terminal]
```

## `update_voice_runtime_settings`

```text
Tauri dispatcher 0x100623880
  -> decode enabled / shortcut / speechModel / processingMode / processingModeId
     -> any failure: InvokeResolver::return_result 0x10026b540 [Tauri callback terminal]
  -> commands::voice_runtime::update_voice_runtime_settings 0x1004961d0
     -> core::voice::runtime::update_settings_internal 0x10048ffb0
        -> write_runtime_file 0x10047f700
           -> write_atomic_with_mode 0x100a4ca40
              -> temporary file -> write_all -> sync_data -> rename [filesystem terminal]
              -> TempFileCleanup on failure [filesystem cleanup terminal]
        -> listener control [runtime thread terminal]
        -> shutdown_standby_sidecar 0x10048fa80 -> stdin write + cleanup thread [process/thread terminal]
        -> load_status 0x100475170 -> emit_status 0x100474d50 -> Tauri Emitter::emit [event terminal]
     -> CoreEnvelope::ok / responder error -> InvokeResolver::respond [Tauri callback terminal]
```

## `start_voice_capture`

```text
handle_trigger_action 0x10048c600 ─┐
handle_shortcut_toggle 0x10048e8d0 ├-> start_capture 0x100476ac0
start_voice_capture command 0x100494f50 ─┘  -> permission sync [macOS system terminal]
                                           -> workspace/config read [filesystem terminal]
                                           -> temporary sidecar config write [filesystem terminal]
                                           -> standby | legacy sidecar start [process terminal]
                                           -> starting watchdog [thread terminal]
                                           -> tray/overlay/audio state [system/UI terminal]
                                           -> emit_status [Tauri event terminal]
                                           -> cleanup remove_file [dangerous filesystem terminal]
```

## 三叶结论

三棵树均已到达可命名 implementation 或 declared system/external terminal。x86_64 行为闭合不等于运行时通过：`LIVE_REFERENCE_NOT_RUN`，且不为 ARM64 或 Windows 外推。所有 implementation gate 仍为 false。