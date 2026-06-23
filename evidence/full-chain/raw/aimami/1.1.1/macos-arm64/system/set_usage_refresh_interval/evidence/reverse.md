# set_usage_refresh_interval — SAME-DEPTH-CONFIRM — 1.1.1 vs 1.0.9

**session**: wf-aimami111-same-depth-20260618
**machine**: <本地机器>
**shard**: mac-shard-6/6
**owner_1.1.1**: codexmate_lib::commands::system::set_usage_refresh_interval @ 0x10061a6e0
**owner_1.0.9**: codexmate_lib::commands::system::set_usage_refresh_interval @ 0x100260e24

---

## SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

### Call-tree callee set comparison (app-level, noise filtered)

1.0.9 call tree (from set_usage_refresh_interval evidence.md, depth ≥4):
```
set_usage_refresh_interval
├── Repository::set_usage_refresh_interval  [validate "1m"|"3m"|"5m"|"30s"]
│   ├── Repository::load_settings           [d2: fs::read + serde_json::de]
│   └── Repository::save_settings           [d2: fs::write, persistence_commit]
├── Repository::get_usage_refresh_interval  [d1: read back value]
│   └── Repository::load_settings           [d2]
├── usage_refresh_interval_seconds          [d1: str→u64]
└── update_usage_refresh_schedule
    ├── OnceLock::initialize                [d2]
    ├── Mutex::lock                         [d2]
    ├── write qword_STATE                   [d2: interval_seconds global]
    └── Condvar::notify_all                 [d2: wake watcher thread]
```

1.1.1 call tree (from 逆向分析 decompile, depth 5):
- d1: Repository::set_usage_refresh_interval @ 0x1004cd790 — validates "1m"/"3m"/"5m"/"30s" via bitmask comparison
- d2: Repository::load_settings @ 0x1004bfa30 (same fs::read + serde_json::de path)
- d2: Repository::save_settings @ 0x1004c00c0 (same fs::write + serde_json::ser)
- d3-d5: fs::read_to_string → serde_json::from_trait → serde_json::de::deserialize_struct (same as 1.0.9 depth 3-5)
- d1: StateManager::try_get @ 0x1005052f0 (new depth-1 callee vs 1.0.9 which also calls try_get for watcher state)
- d1: Repository::get_usage_refresh_interval @ 0x1004cd460 (same read-back)
- d2: load_settings (same path)
- d1: usage_refresh_interval_seconds @ 0x1004d66d0 — leaf function, 0 callees (same terminal)
- d1: update_usage_refresh_schedule @ 0x10061cb40 (same role)
- d2: OnceLock::initialize (same lazy init)
- d2: Mutex::lock (same)
- d3: qword_101442AD0 = a1 (interval_seconds global write; address differs 1.0.9: 0x101390368 → 1.1.1: 0x101442AD0, same role)
- d3: Condvar::notify_all @ 0x100f34bd0 — unk_101442AE0 (same condvar role; address shifted)
- d4: Mutex::unlock (same)
- d5: panic_guard (noise)

### Key comparison points
- Validation enum set: "1m" | "3m" | "5m" | "30s" — identical bitmask checks in 1.1.1 decompile (`27953`=0x6D31="1m", `27955`=0x6D33="3m", ROL2=13677="5m", a4==3 + 0x3033+0x73="30s")
- Watcher state global addresses shifted (recompile noise) but role/structure identical
- Condvar::notify_all present at same logical depth in both versions
- No new HTTP, sidecar, or external dispatch added

### Verdict: confirmed_same_depth5

**1.0.9 status**: gate=pass, consumer_tier=strictImplementationUse (from evidence.md)
**dim6_inherited**: 1.0.9 gate=pass consumer_tier=strictImplementationUse
**dim6_inherited_version**: 1.0.9
