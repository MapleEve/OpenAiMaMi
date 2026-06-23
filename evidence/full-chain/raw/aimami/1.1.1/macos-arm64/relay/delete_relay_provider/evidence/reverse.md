# delete_relay_provider — SAME-DEPTH-CONFIRM

## session: wf-aimami111-same-depth-20260618 / machine: <本地机器>

### SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

#### 1.1.1 owner
- addr: 0x1005e9c30
- symbol: codexmate_lib::commands::relay::delete_relay_provider
- size: 0x173

#### 1.0.9 baseline (call-trees/codexmate_lib::commands::relay::delete_relay_provider.jsonl)
depth0: delete_relay_provider
depth1: RelayManager::delete
depth2: router_thread_migration_target_model (GUARD: reads router-migration-manifest.json), fs::metadata+read_manifest (depth3)
depth2: RelayManager::persist, sync_codex_config_with_outcome
depth2: (keychain delete if provider has API key)

#### 1.1.1 call-tree (this session, depth 5 verified)
depth1: RelayManager::delete (0x1005dc530) — IDENTICAL top-level dispatch
depth2: router_thread_migration_target_model (0x10071dd20), delete_api_key keychain (0x1006c9790), Vec::retain×3, persist, sync_codex_config_with_outcome — set IDENTICAL
depth2 (tray): refresh_tray_menu (0x1006277c0) → create_tray_menu, TrayIcon::set_menu — IDENTICAL tray refresh on delete
depth3: manifest path+metadata+read_to_string for router guard — IDENTICAL
depth3: security_framework delete_generic_password_options (0x1009464b0), remove_file for key file — IDENTICAL
depth4: PasswordOptions::new_generic_password, delete_generic_password_options — IDENTICAL security framework path
depth5: fs::OpenOptions::_open, fs::rename, strip_all_managed_blocks — leaf terminated

#### delta_analysis
- Keychain delete path confirmed identical: mac_keychain::delete → security_framework::delete_generic_password_options
- Router thread guard read confirmed present in both versions
- Tray refresh path confirmed identical post-delete
- No new HTTP, sidecar, or DTO changes

**dim6_inherited**: 1.0.9
