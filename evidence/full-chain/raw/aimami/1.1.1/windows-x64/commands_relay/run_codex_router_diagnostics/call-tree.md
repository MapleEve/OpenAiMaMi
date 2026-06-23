# run_codex_router_diagnostics — Call Tree

session: <审计会话>
date: 2026-06-17 (updated: complete)

```
tauri_ipc_main_dispatcher_sys (0x14000d2a0)
  ├── [string ref] "run_codex_router_diagnostics" @ 0x1412ac580
  │     xref: 0x14000f049 (data ref from dispatcher table)
  │
  ├── run_codex_router_diagnostics_owner_sys (0x14006f4b0, 0x1e7)
  │     [Tokio try-lock dispatcher wrapper]
  │     ├── _InterlockedCompareExchange8            // CAS try-lock
  │     ├── sub_14124A510                           // WaitOnAddress (lock contention)
  │     ├── off_141899DC0 (0x141899dc0)             // global command hashmap
  │     ├── sub_14124B1D0                           // Tokio try-lock helper
  │     ├── SIMD probe: hash=0x945CA2F02A2B6F44     // locate core_sys vtable slot
  │     │     vtable[+24] -> run_codex_router_diagnostics_core_sys
  │     ├── sub_14124BFE0                           // Result::unwrap() panic handler
  │     │     ("called `Result::unwrap()` on an `Err` value")
  │     └── WakeByAddressSingle (0x14124A5D0)       // release + notify waiters
  │
  └── run_codex_router_diagnostics_core_sys (0x14021c1a0, 0x167)
        [IPC handler core; codexmate_lib::core::relay::codex_diagnostic]
        [argKeys=[]; returns Ok{status:'ok',kind:'Success',data:DiagnosticData}]
        │
        ├── codex_home_resolver_sys (0x1406f29d0, 0x103)
        │     [reads CODEX_HOME env var; builds .codexsqlitestate_5.sqlite + accounts paths]
        │     ├── sub_141089D90               // env::var("CODEX_HOME") reader
        │     ├── sub_140E96CD0               // default home dir (dirs::home_dir)
        │     ├── sub_1410A1B60               // path join fallback (".")
        │     └── sub_14107A2D0               // PathBuf::join impl
        │
        ├── diagnostic_data_builder_sys (0x1406f3770, 0x82d)
        │     [builds DiagnosticPaths; joins 29 path segments from aCodexsqlitesta pool]
        │     ├── sub_14107A2D0 × 29          // PathBuf::join for each segment
        │     ├── snooze_file_open_111 (0x14108C6F0) × N  // fs::exists checks
        │     ├── sub_1402F87A0               // error handler / Drop
        │     ├── sub_14108C520               // fallback path resolver
        │     ├── sub_1406F2B20               // sessions sub-builder
        │     └── sub_140001370               // dealloc/drop
        │
        ├── relay_state_read_lock_snapshot_sys (0x1406e8480)
        │     [read-lock relay state; src\core\relay\manager.rs]
        │     ├── _InterlockedCompareExchange8(relay_ctx+8+16, 1, 0)  // CAS lock
        │     ├── sub_14124A510               // WaitOnAddress (contention)
        │     ├── sub_14072A3A0               // RelayState clone/snapshot
        │     ├── sub_14124B1D0               // Tokio try-lock helper
        │     ├── sub_14124BFE0               // "relay state poisoned" panic
        │     └── WakeByAddressSingle         // release lock
        │
        ├── fix_all_sections_impl_full_sys (0x1407456b0, ~320KB)
        │     [main diagnostic engine; checks config/paths/keychain/registry]
        │     │
        │     ├── diag_config_section_toml_reader_sys (0x140762820)
        │     │     [reads config.toml via TLS; SIMD scan [model_providers.cc...]]
        │     │     ├── sub_141077010          // TLS context accessor
        │     │     ├── sub_14108CEE0          // TLS init
        │     │     ├── sub_14072E810          // line iterator
        │     │     ├── sub_14070B280          // trim_ascii_end
        │     │     ├── sub_14070B120          // trim_ascii_start / find_char
        │     │     ├── sub_14036F240          // section content extractor
        │     │     └── sub_14124BEE0          // UTF-8 boundary check panic
        │     │
        │     ├── diag_config_section_parser_profiles_sys (0x140761280)
        │     │     [line scan config.toml; SIMD match [profiles.<name>]]
        │     │     ├── sub_14072E810          // line iterator
        │     │     ├── sub_14070B280          // trim
        │     │     ├── sub_14070B120          // trim/find
        │     │     ├── sub_14075F450          // profile name validator
        │     │     ├── sub_1410A1DF0          // tuple builder
        │     │     ├── sub_1412280D0          // Vec<> grow
        │     │     └── sub_14124BEE0          // UTF-8 boundary panic
        │     │
        │     ├── diag_config_switch_section_check_sys (0x140761f80)
        │     │     [validates section name in known switch keys]
        │     │     ├── sub_1410A0350          // string normalize
        │     │     └── sub_14072E9F0          // str_eq_ignore_case comparator
        │     │         checks: cc-switch / cc_switch / ccswitch / codex-switch /
        │     │                 [model_providers.cc / circuit_breaker / provider_router
        │     │
        │     ├── diag_config_base_url_section_check_sys (0x140762ab0)
        │     │     [parses open_ai_base_url; validates managed markers + /codex/router/v1]
        │     │     ├── sub_14072E810          // line iterator
        │     │     ├── sub_14070B280 / sub_14070B120  // trim/find
        │     │     ├── sub_141213640          // memcmp variant
        │     │     ├── diag_config_json_unescape_sys (0x140763e00)  // JSON unescape
        │     │     └── sub_14072E9F0          // suffix check (/codex/router/v1)
        │     │         markers: "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)"
        │     │                  "# <<< aimami-relay managed end (top)"
        │     │
        │     ├── diag_config_mode_validator_sys (0x140762f10)
        │     │     [validates mode field value]
        │     │     └── accepts: free/paid/demo/msft/team(4) / invalid(7) /
        │     │                  undefined(9) / placeholder(11) /
        │     │                  cc-switch/cc_switch(9) / ccswitch/decodex(8) /
        │     │                  sk-fake/sk-test(7) / len<10 = true
        │     │
        │     ├── relay_keychain_lookup_for_quota_sys (0x1402ee7c0)
        │     │     [relay credentials lookup for quota validation]
        │     │
        │     ├── win32_file_read_bytes_111 (0x141093260)
        │     │     [Win32 file read]
        │     │
        │     └── [others: alloc/dealloc, snooze_file_open_111, Vec ops, ...]
        │
        ├── nullsub_1 (0x1400013a0) × 2        // no-op fence
        ├── sub_140001360                        // alloc(n, align) -> heap alloc
        ├── sub_14124BCCB                        // alloc failure panic
        │
        ├── relay_state_snapshot_drop_sys (0x140234ac0) [renamed]
        │     [Drop: relay state snapshot struct; stride=232B per entry]
        │     ├── relay_draft_test_input_drop_sys (0x1401D6220)
        │     ├── sub_140001370                  // dealloc
        │     └── sub_14022EA90                  // tail cleanup
        │
        └── diagnostic_paths_drop_sys (0x140046870) [renamed]
              [Drop: DiagnosticPaths struct; 29 x Option<PathBuf> at stride-4 offsets]
              └── sub_140001370 × 29             // dealloc each PathBuf
```

## xrefs_to core_sys (0x14021c1a0)

| caller VA | caller name | xref type |
|---|---|---|
| 0x14000f0f4 | tauri_ipc_main_dispatcher_sys | code call |
| 0x1415589cc | (vtable slot — command dispatch table) | data |
| 0x1418b71a8 | (vtable slot — secondary reference) | data |

## xrefs_to owner_sys (0x14006f4b0)

| caller VA | caller name |
|---|---|
| 0x14000f0a2 | tauri_ipc_main_dispatcher_sys |
| 0x1400128fb | reveal_relay_api_key_owner_sys |
| 0x140014bc2 | upsert_relay_provider_cmd_handler_111 |
| 0x140015949 | load_relay_state_ipc_handler_111 |
| 0x140017f9b | activate_relay_provider_ipc_handler_sys |
| 0x140021bb9 | diagnose_codex_router_cmd_owner_111 |
| 0x14002478b | fix_codex_router_issue_owner_sys |
| 0x14079b19c | tray_menu_rebuild_codex_status_sys |
| 0x14093dfcb | get_relay_provider_quota_coroutine_sys |
| 0x14094f406 | test_relay_draft_stream_owner_sys |
| 0x140963f68 | set_codex_router_enabled_dispatcher_win_sys_111 |
| 0x14099deab | set_codex_api_login_dispatch_hub_sys |
| 0x1409c99e7 | test_relay_provider_stream_owner_sys |
| … (+13 more code callers) | |
