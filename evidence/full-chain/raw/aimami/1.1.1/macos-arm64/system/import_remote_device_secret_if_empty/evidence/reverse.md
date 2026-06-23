## SAME-DEPTH-CONFIRM — import_remote_device_secret_if_empty — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=5 confirmed)

D0: commands::system::import_remote_device_secret_if_empty@0x10061de00 [size=0x2f1]
  D1: core::repository::Repository::import_remote_device_secret_if_empty@0x1004cff10 [size=0x132]
    D2: core::str::trim_matches@0x10057e620           [terminated: external_call(str_util)]
    D2: Repository::load_settings@0x1004bfa30
      D3: std::fs::read_to_string::inner@0x100f25740  [terminated: external_call(fs_read)]
      D3: serde_json::de::from_trait@0x1002ea3f0      [terminated: external_call(serde_json)]
        D4: serde_json deserialization internals
          D5: alloc clone for Settings fields          [terminated: external_call(alloc)]
    D2: Repository::save_settings@0x1004c00c0
      D3: CodexPaths::ensure_directories@0x1005582b0
        D4: std::fs::DirBuilder::_create@0x100f24d00  [terminated: external_call(fs_create_dir)]
      D3: serde serialize fields@0x10050fb90
        D4: serde_json Compound::serialize_field
          D5: serde_json internal                     [terminated: persistence_commit]
      D3: std::fs::write@0x100201fe0                  [terminated: persistence_commit(fs_write)]

terminated_reason: persistence_commit(save_settings) at D3/D5

### 1.0.9 Reference Evidence

owner_va_109: 0x100263bc4 (cmd handler) / 0x1005f0508 (impl)
call_tree_depth_109: 5 confirmed (cmd_shim→impl→load_settings→save_settings→ensure_directories→DirBuilder::_create) + fs write leaf at depth 4
key_pattern_109: trim_matches→load_settings→(early return if empty)→update remoteDeviceSecret field→save_settings
gate_tier_109: strictImplementationUse (dim1-5 closed, dim6 not assessed)

### Comparison

App-level callee set 1.0.9 (depth≤5): {Repository::import_remote_device_secret_if_empty, str::trim_matches, Repository::load_settings, std::fs::read_to_string, serde_json::de::from_trait, Repository::save_settings, std::fs::write}
App-level callee set 1.1.1 (depth≤5): identical. trim_matches → load_settings → conditional save_settings path confirmed. No new callee. No change to remoteDeviceSecret field name. No new side-effect or HTTP path. Early-return-on-empty logic present (impl size 0x132 consistent with 1.0.9 0x144 with minor alloc delta — within compilation noise).

Noise filtered: Mutex poison guard, is_zero_slow_path, OnceBox::initialize, dealloc calls.

### Verdict

**confirmed_same_depth5** — depth 5 reached; app-level callee set and logic pattern identical to 1.0.9; no app-level delta.

dim6_inherited: 1.0.9 (strictImplementationUse ceiling — dim6 not assessed in 1.0.9, same ceiling for 1.1.1)
