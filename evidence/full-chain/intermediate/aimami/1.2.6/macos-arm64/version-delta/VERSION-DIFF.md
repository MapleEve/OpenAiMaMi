# VERSION-DIFF.md — AiMaMi 1.2.4 → 1.2.6 (macOS arm64)
**Generated**: 2026-08-08 (canonical migration)
**Source schema**: `c5cm.reverse.version_delta.authoritative_symbol_diff.v1` | Session: `background-task-aimami126-symbol-diff-continuation`
**Scope**: macOS Mach-O universal binary (x86_64 slice) defined-external symbol table diff, AiMaMi 1.2.4.app vs 1.2.6.app; Windows PE64 executables could NOT be diffed via nm (see windows_finding below)


## Binaries (SHA binding)
- 1.2.4: `{"path": "<内部存储>/raw/binary/AiMaMi 1.2.4.app/Contents/MacOS/AiMaMi", "sha256": "7ac4fc861c3be7181ca2f6d19b47dff9fffa22eaf1ec971ad1c77dae97ca8f32", "arch_diffed": "x86_64", "defined_external_symbols_raw": 6039, "defined_external_symbols_normalized_unique": 4931}`
- 1.2.6: `{"path": "<内部存储>/raw/binary/AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi", "sha256": "ba04c977e9c6dd97372d70ff8878543e716f75e106125852d5a152ad78b5d0ca", "arch_diffed": "x86_64", "defined_external_symbols_raw": 6070, "defined_external_symbols_normalized_unique": 4953}`


## Diff counts (normalized)
- Added: **45** (20 functional + 25 serde-DTO)
- Removed: **23** (6 functional + 17 serde)
- Note: un-normalized = 1142 added / 1111 removed (hash churn). Normalized is the real diff.


## Added functional symbols
- `+ <&alloc::string::String as core::str::pattern::Pattern>::into_searcher` [module=external/std/vendored-crate]
- `+ <codexmate_lib::core::relay::response_item_id_compat::StagedFileCleanup as core::ops::drop::Drop>::drop` [module=codexmate_lib::core::relay]
- `+ <std::io::buffered::bufwriter::BufWriter<W>::flush_buf::BufGuard as core::ops::drop::Drop>::drop` [module=external/std/vendored-crate]
- `+ codexmate_lib::commands::system::confirm_pending_auto_switch_and_restart_sync` [module=codexmate_lib::commands::system]
- `+ codexmate_lib::commands::voice_runtime::request_accessibility_permission` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::set_voice_global_shortcut` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::set_voice_overlay_style` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::set_voice_processing_mode_id` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::start_voice_capture` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::stop_voice_capture` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::commands::voice_runtime::voice_search_overlay_ready` [module=codexmate_lib::commands::voice_runtime]
- `+ codexmate_lib::core::mcp::remove_mcp_server` [module=codexmate_lib::core::mcp]
- `+ codexmate_lib::core::relay::codex_thread_visibility::ensure_transition_rollout_write_capacity` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::storage::preflight_save` [module=codexmate_lib::core::relay]
- `+ fs2::unix::statvfs` [module=external/std/vendored-crate]
- `+ std::io::buffered::bufwriter::BufWriter<W>::flush_buf::BufGuard::remaining` [module=external/std/vendored-crate]
- `+ std::io::buffered::bufwriter::BufWriter<W>::write_all_cold` [module=external/std/vendored-crate]
- `+ std::process::Child::wait_with_output` [module=external/std/vendored-crate]
