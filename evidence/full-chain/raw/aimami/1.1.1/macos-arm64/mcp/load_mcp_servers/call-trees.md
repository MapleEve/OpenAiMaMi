# load_mcp_servers — call trees
## AiMaMi 1.1.1 macOS arm64 | delta_class = integrity_recovered

```
run::{{closure}}::{{closure}} @ 0x100310080
└─ StateManager::try_get
└─ commands::mcp::load_mcp_servers @ 0x10072a000
    ├─ OnceBox::initialize (once, mutex setup)
    ├─ Mutex::lock
    ├─ GLOBAL_PANIC_COUNT (noise filter — excluded from delta)
    ├─ core::mcp::load_mcp_servers @ 0x10059e470          [CORE PARSE]
    │   ├─ std::fs::metadata
    │   ├─ std::fs::read_to_string::inner
    │   ├─ mcp::strip_toml_comment @ 0x1005a3380          [per-line]
    │   ├─ str::trim_matches
    │   ├─ mcp::parse_mcp_section_header @ 0x1005a3aa0    [section header]
    │   │   ├─ literal prefix check: "mcp_servers." (8B LE compare)
    │   │   ├─ Vec::from_iter (char splitting)
    │   │   └─ alloc / dealloc (String building)
    │   ├─ CharSearcher::next_match (key=value detection)
    │   ├─ mcp::unquote_toml @ 0x10059ddc0
    │   ├─ str::to_lowercase
    │   ├─ HashMap::insert / rustc_entry (hashbrown)
    │   ├─ slice::sort::stable::driftsort_main (sort by name)
    │   └─ insertion_sort_shift_left (small-array fallback)
    │
    ├─ [ON SUCCESS — NEW IN 1.1.1]
    │   ├─ SystemTime::now
    │   ├─ SystemTime::duration_since
    │   └─ Repository::store_bootstrap_mcp_servers @ 0x1004cecd0   [DELTA: persistence]
    │       ├─ CodexPaths::ensure_directories @ 0x1005582b0
    │       ├─ bootstrap_cache::load @ 0x1004d88c0                  [read existing cache]
    │       │   ├─ std::fs::read_to_string::inner
    │       │   └─ serde_json::de::from_trait                        [deserialise JSON]
    │       ├─ SystemTime::now + duration_since (timestamp)
    │       ├─ Vec::clone (McpServerListPayload)
    │       ├─ String::clone (profile field)
    │       ├─ drop_in_place::<McpServerListPayload> (old slot)
    │       ├─ serde_json::ser::to_vec                                [serialise merged state]
    │       └─ std::fs::write::inner                                  [write bootstrap-cache.json]
    │
    ├─ [ON ERROR]
    │   └─ CoreError::Display::fmt (format error string)
    │   └─ drop_in_place::<CoreError>
    │
    ├─ CoreEnvelope::ok (wrap payload)
    └─ Mutex::unlock

└─ InvokeResolver::respond @ 0x100475e80    [return to frontend via IPC]
```

## terminated_reason
depth=6 reached at `serde_json::ser::to_vec` and `std::fs::write::inner` (stdlib leaf).
All app-level callees enumerated; no deeper app-logic below these.

## live-verification (2026-06-17)
All four owner VAs confirmed present in 1.1.1 IDB via `lookup_funcs`:
- `0x10072a000` commands::mcp::load_mcp_servers size=0x57e ✓
- `0x10059e470` core::mcp::load_mcp_servers size=0x1ba8 ✓
- `0x1004cecd0` Repository::store_bootstrap_mcp_servers size=0x23f ✓
- `0x1004d88c0` bootstrap_cache::load size=0x1d4 ✓
Callees re-enumerated via 逆向分析 MCP: callee sets match call-tree above exactly.
<工具调用> ok → AiMaMi.i64 written 2026-06-17.

## Delta callee set vs 1.0.9 (new callees only)
| New callee (1.1.1) | VA | Reason counts as delta |
|---|---|---|
| `Repository::store_bootstrap_mcp_servers` | 0x1004cecd0 | new persistent side-effect |
| `bootstrap_cache::load` | 0x1004d88c0 | new read of bootstrap-cache.json |
| `serde_json::de::from_trait` | (serde leaf) | new deserialise |
| `serde_json::ser::to_vec` | 0x1004b5d40 | new serialise |
| `std::fs::write::inner` | (stdlib leaf) | new file write |
| `CodexPaths::ensure_directories` | 0x1005582b0 | new dir-ensure on load path |
| `SystemTime::now` / `duration_since` | stdlib | new timestamp stamping |

## Noise-filtered (not delta)
- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` — poison guard, identical in 1.0.9
- `Mutex::lock` / `Mutex::unlock` — unchanged
- `alloc`/`dealloc`/`rust_alloc` sizing changes — compiler artefact
- `sub_*` / vtable anon hash changes — relocation noise
