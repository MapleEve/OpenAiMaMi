# switch_account — SAME-DEPTH-CONFIRM — 1.1.1 vs 1.0.9

**session**: wf-aimami111-same-depth-20260618
**machine**: <本地机器>
**shard**: mac-shard-6/6
**owner_1.1.1**: codexmate_lib::commands::accounts::switch_account_sync @ 0x1006200f0
**owner_1.0.9**: (sync wrapper + Repository::switch_account core)

---

## SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

### Call-tree callee set comparison (app-level, noise filtered)

1.0.9 call tree (from intermediate/aimami/1.0.9/macos/accounts/backend-owner-pseudocode-calltree switch_account.jsonl, max_depth=8):
- d1: Repository::switch_account (core logic)
- d2: fs::metadata (registry check)
- d2: Repository::load_registry → d3: fs::read_to_string + serde_json::de
- d2: CodexPaths::ensure_directories
- d2: auth::current_timestamp
- d2: fs::copy (backup registry before switch)
- d2: Repository::persist_registry → d3: serde_json::ser + fs::write (persistence_commit)
- d2: Repository::clear_auto_switch_transient_state
- d2: auth::load_auth_file → d3: fs::read_to_string + serde_json::de
- d2: auth::make_auth_snapshot → d3: decode_jwt_claims, parse_chatgpt_plan_label, parse_iso_timestamp, SystemTime::now
- d2: quota_store::load_or_default
- d2: quota_store::find_item
- d2: Repository::make_account_summary_from_item (response_serialize)
- d2: CoreEnvelope::ok_with_warnings (response_serialize, warning="CLIENT_RESTART_RECOMMENDED")

1.1.1 call tree (from 逆向分析 decompile Repository::switch_account @ 0x1004c0350):
- d2: std::sys::fs::metadata @ 0x100f2b980 (registry stat — same)
- d2: Repository::load_registry @ 0x1004bf8e0 → d3: fs::read_to_string + serde_json::from_trait (same)
- d2: CodexPaths::ensure_directories @ 0x1005582b0 (same)
- d2: auth::current_timestamp @ 0x10053aeb0 → d3: SystemTime::now + duration_since (same)
- d2: std::sys::fs::copy @ 0x100f2aa10 (backup — same)
- d2: std::path::Path::_join @ 0x100f33a00 (path join for backup — same)
- d2: Repository::persist_registry @ 0x1004c3a00 → d3: fs::write, SystemTime::now, serde_json::ser (same)
- d2: Repository::clear_auto_switch_transient_state @ 0x1004cfc50 (same)
- d2: auth::load_auth_file @ 0x10053ac80 → d3: fs::read_to_string + serde_json::from_trait (same)
- d2: auth::make_auth_snapshot @ 0x10053b9f0 → d3: decode_jwt_claims, parse_chatgpt_plan_label, parse_iso_timestamp, SystemTime::now (same)
- d2: quota_store::load_or_default @ 0x100534df0 (same)
- d2: quota_store::find_item @ 0x100535530 (same)
- d2: Repository::make_account_summary_from_item @ 0x1004cefd0 (response_serialize, same)
- d2: CoreEnvelope::ok_with_warnings @ 0x1005547f0 (response_serialize, same)
- Warning string: `qmemcpy(v69, "CLIENT_RESTART_RECOMMENDED", 26)` + `qmemcpy(v73, "Restart Codex clients for the new auth snapshot to take effect.", 63)` — same warning payload as 1.0.9

### Depth 4-5 confirmation
- d4: serde_json::de::from_trait chain → d5: serde_json::de::deserialize_struct (external)
- d4: persist_registry → serde_json::ser::Compound::serialize_field → d5: serde_json::ser::Compound::end (persistence_commit, terminated)
- d4: make_auth_snapshot → parse_iso_timestamp → d5: SystemTime::now (external)
- d5: quota_store::find_item internal (external_call_recorded)

### Key comparison points
- Warning strings identical: "CLIENT_RESTART_RECOMMENDED" (26 bytes) + "Restart Codex clients for the new auth snapshot to take effect." (63 bytes). Both inline via qmemcpy.
- Registry backup step (fs::copy + timestamp-based path) present and identical in both versions
- auth::make_auth_snapshot callee set identical: decode_jwt_claims + parse_chatgpt_plan_label + parse_iso_timestamp
- persist_registry uses same serde_json serialization path
- No new HTTP/sidecar/external dispatch callees introduced
- Error strings: "No AiMaMi registry exists yet" (29 bytes) — present in 1.1.1, same as 1.0.9

### Verdict: confirmed_same_depth5

**1.0.9 status**: gate=accepted (from intermediate call-trees), max_depth=8, readyToImplement not set in macos leaf (leaf has SYSTEM-DIFF, audits only, no readyToImplement status)
**dim6_inherited**: n/a (1.0.9 macos leaf did not reach readyToImplement gate)
