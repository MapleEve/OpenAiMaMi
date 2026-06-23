## SAME-DEPTH-CONFIRM — load_bootstrap_state — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=5 confirmed)

D0: commands::system::load_bootstrap_state@0x100619510 [size=0x21a]
  D1: core::bootstrap_cache::load@0x1004d88c0
    D2: std::fs::read_to_string::inner@0x100f25740    [terminated: external_call(fs_read_bootstrap_cache)]
    D2: serde_json::de::from_trait@0x1002e8ee0        [terminated: external_call(serde_json_parse)]
      D3: serde_json internal BootstrapState deserialize
        D4: alloc for BootstrapState fields
          D5: Darwin_libc_malloc                      [terminated: external_call(libc)]
    D2: core::ptr::drop_in_place<io::Error>@0x1004e8640  [terminated: error_return(graceful_io_err)]
  D1: core::models::CoreEnvelope<T>::ok@0x1005577e0   [terminated: response_serialize(IPC_envelope)]
  D1: memcpy@0x100fbd052                              [terminated: response_serialize(output_copy)]

terminated_reason: external_call(fs_read_to_string) + response_serialize at D2/D5

### 1.0.9 Reference Evidence

owner_va_109: 0x10025fe54
symbol_109: codexmate_lib::commands::system::load_bootstrap_state::h0faabba99c644bc3
call_tree_status_109: accepted, depth=2 (note: depth=2 reported in 1.0.9 AI.md; actually Mutex+bootstrap_cache::load; terminated at fs read)
key_callees_109: [bootstrap_cache::load@0x1001beef8 (fs_leaf+parse_leaf), CoreEnvelope<T>::ok@0x1001db260 (response_leaf)]
side_effects_109: fs::read_to_string(bootstrap_cache_path) — read-only, no writes, no HTTP
status_109: strictImplementationUse_dim1_5_closed_dim6_empty

### Comparison

App-level callee set 1.0.9 (depth≤5): {bootstrap_cache::load, std::fs::read_to_string, serde_json::de::from_trait, CoreEnvelope::ok}
App-level callee set 1.1.1 (depth≤5): identical. bootstrap_cache::load@0x1004d88c0 present with same fs_read+serde_json pattern. CoreEnvelope::ok@0x1005577e0 present as response leaf. No write path. No HTTP. No new callee.

Structural: 1.1.1 adds Mutex guard boilerplate in D0 (consistent with other system commands — Mutex lock/unlock/OnceBox/panic_count). This is the standard repository access pattern upgrade (noise). The actual work — bootstrap_cache::load — is identical: read_to_string → serde_json → CoreEnvelope::ok.

Error behavior: graceful degradation on IO/parse error (drop_in_place io::Error at D2) confirmed same as 1.0.9.

Noise filtered: Mutex poison guard, is_zero_slow_path, OnceBox::initialize, memcpy output copy.

### Verdict

**confirmed_same_depth5** — depth 5 reached; identical read-only load pattern; no app-level delta.

dim6_inherited: 1.0.9 (strictImplementationUse, dim6=empty — same ceiling for 1.1.1)
