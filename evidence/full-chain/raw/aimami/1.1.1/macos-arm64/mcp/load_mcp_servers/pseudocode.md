# load_mcp_servers — macOS arm64 pseudocode
## AiMaMi 1.1.1 | delta_class = integrity_recovered | session = <审计会话>

---

## Owner VAs

| Layer | Symbol | VA | Size |
|---|---|---|---|
| command handler | `codexmate_lib::commands::mcp::load_mcp_servers` | `0x10072a000` | 0x57e |
| core impl | `codexmate_lib::core::mcp::load_mcp_servers` | `0x10059e470` | 0x1ba8 |
| persistence (NEW) | `codexmate_lib::core::repository::Repository::store_bootstrap_mcp_servers` | `0x1004cecd0` | — |
| cache load | `codexmate_lib::core::bootstrap_cache::load` | `0x1004d88c0` | — |
| TOML parse | `codexmate_lib::core::mcp::parse_mcp_section_header` | `0x1005a3aa0` | — |
| comment strip | `codexmate_lib::core::mcp::strip_toml_comment` | `0x1005a3380` | — |

---

## Layer 1 — Tauri dispatch (run closure)

```
codexmate_lib::run::{{closure}}::{{closure}} @ 0x100310080
  tauri::state::StateManager::try_get          // get Repository state
  → commands::mcp::load_mcp_servers            // @ 0x10072a000
  tauri::ipc::InvokeResolver::respond          // return CoreEnvelope to frontend
```

Dispatch key confirmed from string table @ `0x101147e82`:
`upsert_mcp_server | set_mcp_server_enabled | remove_mcp_server | load_installed_skills | ... | load_mcp_servers | ...`

---

## Layer 2 — Command handler (0x10072a000)

```rust
fn load_mcp_servers(repo: &Repository) -> CoreEnvelope<McpServerListPayload> {
    // Mutex::lock (OnceBox-initialised)
    let result = core::mcp::load_mcp_servers(repo.codex_home, repo.config_dir);

    match result {
        Ok(payload) => {
            // NEW IN 1.1.1: timestamp before persist
            let t_before = SystemTime::now();
            let elapsed = t_before.duration_since(UNIX_EPOCH).ok();

            Repository::store_bootstrap_mcp_servers(repo, &payload);
            // store result ignored (fire-and-forget; error logged via CoreError Display)

            CoreEnvelope::ok(payload)
        }
        Err(e) => {
            // format error via CoreError::Display
            CoreEnvelope::err(e)   // tag 0x8000000000000000
        }
    }
    // Mutex::unlock
}
```

Key: error path formats via `_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt` — error string is returned to frontend, not panicked.

---

## Layer 3 — Core impl (0x10059e470)

```rust
fn load_mcp_servers(codex_home: &Path, config_dir: &Path) -> Result<McpServerListPayload, CoreError> {
    // 1. std::fs::metadata — check config.toml exists
    // 2. std::fs::read_to_string — read config.toml
    // 3. Per-line parse loop:
    //    a. strip_toml_comment(line)       — removes # comments outside strings
    //    b. str::trim_matches              — trim whitespace
    //    c. parse_mcp_section_header(line) — match [mcp_servers.<name>] headers
    //    d. CharSearcher / contains check  — detect key=value lines
    //    e. unquote_toml(value)            — strip surrounding quotes
    //    f. str::to_lowercase              — normalise keys
    // 4. hashbrown::HashMap::insert / rustc_entry — accumulate name→McpServerSummary
    // 5. sort by name (driftsort_main / insertion_sort_shift_left)
    // 6. Return Vec<McpServerSummary> wrapped in McpServerListPayload
}
```

`parse_mcp_section_header` magic: checks literal prefix `mcp_servers.` (8-byte LE compare: `0x767265735F70636D` = `mcp_serv`, then `0x2E737265` = `ers.`), then parses quoted (`"name"`) or unquoted name, optionally a `.subkey` suffix.

---

## Layer 4 — Repository::store_bootstrap_mcp_servers (0x1004cecd0) [NEW IN 1.1.1]

```rust
fn store_bootstrap_mcp_servers(
    repo: &Repository,
    payload: &McpServerListPayload,
) -> Result<(), CoreError> {
    CodexPaths::ensure_directories(repo)?;  // create dirs if missing

    // Load existing bootstrap-cache.json (graceful: missing file → default empty payload)
    let mut state: BootstrapStatePayload = bootstrap_cache::load(
        repo.bootstrap_cache_path,   // CODEX_HOME/bootstrap-cache.json
    );

    let now_elapsed = SystemTime::now().duration_since(UNIX_EPOCH).ok();

    // Merge: stamp timestamp + clone McpServerListPayload into state.mcp_servers slot
    state.mcp_servers = Some(payload.clone());   // at offset +792 in BootstrapStatePayload
    // (also sets timestamp field at offset +696/704)

    // Serialise full BootstrapStatePayload to JSON
    let json_bytes: Vec<u8> = serde_json::to_vec(&state)?;

    // Write atomically (single write call, no temp-file swap)
    std::fs::write(repo.bootstrap_cache_path, &json_bytes)?;

    Ok(())
}
```

---

## Layer 5 — bootstrap_cache::load (0x1004d88c0)

```rust
fn load(path: &Path, path_len: usize) -> BootstrapStatePayload {
    match std::fs::read_to_string(path) {
        Ok(s) => match serde_json::from_str::<BootstrapStatePayload>(&s) {
            Ok(p)  => p,
            Err(_) => BootstrapStatePayload::default(),  // parse fail → empty
        },
        Err(_) => BootstrapStatePayload::default(),      // file missing → empty
    }
}
```

Sentinel for absent Option fields: `0x8000000000000000` (Rust `None` discriminant for heap-allocated Option).

---

## DTO Reconstruction

### McpServerListPayload (Vec wrapper)
```
offset  field
+0x00   ptr  (capacity: usize)         // Vec<McpServerSummary> cap
+0x08   ptr  (data ptr: *McpServerSummary)
+0x10   len  (usize)
+0x18   profile_string ptr (u8*)       // optional profile/group string
+0x20   profile_string len (usize)
```
Element stride = 224 bytes per `McpServerSummary`.

### McpServerSummary (224 bytes, from drop analysis)
```
+0x00   name_len:  usize
+0x08   name_ptr:  *u8          (String)
+0x18   label_len: usize
+0x20   label_ptr: *u8          (String)
+0x48   env_cap:   usize         // Vec<(key,val)> cap
+0x50   env_ptr:   *EnvEntry     // each EnvEntry = 24 bytes (key_len,key_ptr,val_ptr)
+0x58   env_len:   usize
+0x60   type_opt:  Option<String> // 0x8000000000000000 = None
+0x68   type_len:  usize
+0x70   type_ptr:  *u8
+0x78   args_cap:  usize          // HashMap args (two RawTable at +0x78, +0xA8)
...
+0xA8   hashmap2 (RawTable for a second KV map, stride=24B per bucket)
```

### BootstrapStatePayload (from drop @ 0x1004ecf80 + live decompile of bootstrap_cache::load LABEL_16)
```
+0x10   AppStatusPayload        (enum, discriminant != 3 → has content)
+0x2A8  Vec<AccountSummary>     cap @ +0x2A0, ptr @ +0x2A8, len @ +0x2B0  (336B each)
+0x2B8  Option<?>               a1[87] = 0x8000000000000000 on default (live-verified)
+0x318  Option<McpServerListPayload>  a1[99] = 0x8000000000000000 (None)  [mcp slot]
+0x358  Option<SkillListPayload>      a1[107] = 0x8000000000000000 (None) [skill slot]
```
Absolute offsets: mcp @ a1[99] = +0x318, skills @ a1[107] = +0x358.
Live-verified 2026-06-17 <审计会话>, idb_save ok.
