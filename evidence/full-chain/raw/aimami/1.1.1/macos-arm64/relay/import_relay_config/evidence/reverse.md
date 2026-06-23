## SAME-DEPTH-CONFIRM — import_relay_config — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=6 confirmed)

D0: commands::relay::import_relay_config@0x1005e9230 [size=0x201]
  D1: core::relay::manager::RelayManager::import_config@0x1005d1c20
    D2: relay::io::parse_import_file@0x1005481b0     [terminated: external_call(fs_read+serde_json)]
    D2: relay::io::apply_import_to_state@0x100548d80
      D3: relay::keychain::write_key_file@0x1006c9950  [terminated: persistence_commit(keychain_write)]
      D3: chrono::Utc::now@0x100954200               [terminated: external_call(time)]
    D2: RelayManager::persist@0x1005dee20
      D3: relay::storage::save@0x1005e2c60
        D4: relay::atomic_write::write_atomic@0x10041e960
          D5: std::fs::OpenOptions::_open             [terminated: external_call(fs_open)]
          D5: std::io::Write::write_all               [terminated: persistence_commit(fs_write)]
          D5: std::sys::fs::rename                    [terminated: persistence_commit(atomic_rename)]
          D6: atomic_write::sync_parent_dir@0x10041ec70  [terminated: persistence_commit(fsync)]
  D1: commands::tray_menu::refresh_tray_menu@0x1006277c0  [terminated: sidecar_dispatch(tray_update)]

terminated_reason: persistence_commit(atomic_write_relay_storage)+sidecar_dispatch(tray_menu) at D5/D6

### 1.0.9 Reference Evidence

owner_va_109: 0x10032a498 (handler) / 0x1001e0468 (impl)
call_tree_depth_109: 5
terminated_reason_109: fs_write_leaf (atomic_write::write_atomic) + process_leaf (tray_menu)
key_callees_109: [RelayManager::import_config, parse_import_file, apply_import_to_state, RelayManager::persist, atomic_write::write_atomic, refresh_tray_menu]
gate_tier_109: readyToImplement (macOS leaf, per SYSTEM-DIFF.md and AI.md)

### Comparison

App-level callee set 1.0.9 (depth≤5): {import_config, parse_import_file, apply_import_to_state, persist, write_key_file, storage::save, atomic_write, refresh_tray_menu}
App-level callee set 1.1.1 (depth≤6): same set confirmed — all key app callees present at matching module paths. No new callee at app level. sync_proxy_status and codex_writer callees (present in sync_codex_config_with_outcome, confirmed at layer 2 from 1.0.9 pattern) also appear in 1.1.1 (sync_codex_config_with_outcome@0x1005daea0 is callee of import_config in 1.1.1).

No branch logic change detected, no new DTO key, no new side-effect path, no HTTP/sidecar added. atomic_write pattern identical (OpenOptions → write_all → rename → sync).

Noise filtered: Mutex poison guard, is_zero_slow_path, drop_in_place relay model drops.

### Verdict

**confirmed_same_depth5** (depth 6 achieved, stricter than threshold) — identical app-level callee set; persistence path unchanged; no app-level delta.

dim6_inherited: 1.0.9 (readyToImplement gate accepted for macOS relay leaf)
