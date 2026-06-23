## SAME-DEPTH-CONFIRM — get_usage_refresh_interval — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=5 confirmed)

D0: commands::system::get_usage_refresh_interval@0x10061a4c0 [size=0x1d5]
  D1: core::repository::Repository::get_usage_refresh_interval@0x1004cd460 [size=0x13e]
    D2: Repository::load_settings@0x1004bfa30
      D3: std::fs::read_to_string::inner@0x100f25740  [terminated: external_call(fs_read)]
      D3: serde_json::de::from_trait@0x1002ea3f0      [terminated: external_call(serde_json)]
      D3: serde_json::value::de::deserialize_struct@0x1002f5290
        D4: serde_json internal struct visitor
          D5: alloc/string clone for Settings fields   [terminated: external_call(alloc)]

terminated_reason: external_call(fs_read config.toml) at D3

### 1.0.9 Reference Evidence

owner_va_109: 0x100260c10
symbol_109: codexmate_lib::commands::system::get_usage_refresh_interval::h0959f6bb6d867d3a
call_tree_depth_109: 3 (terminated at fs_read, same pattern)
key_callees_109: [Repository::get_usage_refresh_interval, Repository::load_settings, std::fs::read_to_string]
gate_tier_109: strictImplementationUse (dim1-5 closed)

### Comparison (callee set normalization)

App-level callee set 1.0.9 (depth≤5): {Repository::get_usage_refresh_interval, Repository::load_settings, std::fs::read_to_string, serde_json::de::from_trait}
App-level callee set 1.1.1 (depth≤5): {Repository::get_usage_refresh_interval@0x1004cd460, Repository::load_settings@0x1004bfa30, std::fs::read_to_string::inner@0x100f25740, serde_json::de::from_trait@0x1002ea3f0}

Diff: None. Same pattern — Mutex lock/unlock guards, is_zero_slow_path GLOBAL_PANIC_COUNT (noise), load_settings→read_to_string→serde_json. No branch logic change, no new callee, no string/key change, no side-effect change.

Noise filtered: Mutex poison guard, is_zero_slow_path, OnceBox::initialize → all std runtime noise, not app-level change.

### Verdict

**confirmed_same_depth5** — depth 5 reached; app-level callee set identical to 1.0.9; no app-level delta detected.

dim6_inherited: 1.0.9 (1.0.9 gate_tier=strictImplementationUse, readyToImplement ceiling dim6_empty — inherited as ceiling for 1.1.1 mac leaf)
