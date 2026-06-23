# load_mcp_servers — Interface & DTO Record
## AiMaMi 1.1.1 macOS arm64
## session: <审计会话>
## date: 2026-06-18

---

## IPC Command

```
command: "load_mcp_servers"
direction: Frontend → Backend (Tauri invoke)
params: none (reads from CODEX_HOME config file)
```

---

## Response DTO: CoreEnvelope<McpServerListPayload>

```rust
// CoreEnvelope<T>: discriminant at offset 0
// Ok variant: tag = 10 (0xA), data follows
// Err variant: tag = 0x8000000000000000 (sentinel)
struct CoreEnvelope<T> {
    tag: u64,       // 10 = Ok, 0x8000000000000000 = Err
    // ... T fields inline
}
```

## McpServerListPayload (stride from drop_in_place)

```
Layout (from drop_in_place analysis):
  +0x00 [0]   Vec<McpServerSummary>.capacity  (u64)
  +0x08 [1]   Vec<McpServerSummary>.ptr       (ptr)
  +0x10 [2]   Vec<McpServerSummary>.len       (u64)
  +0x18 [3]   String.len                      (u64)    (profile/label string)
  +0x20 [4]   String.ptr                      (ptr)
  +0x28 [5]   (String.cap implied)

McpServerSummary stride = 224 bytes (0xE0)
Layout (from drop_in_place::<McpServerSummary>):
  +0x00 [0]   String.len     (name)
  +0x08 [1]   String.ptr     (name)
  +0x10 [2]   (name cap)
  +0x18 [3]   String.len     (url / command)
  +0x20 [4]   String.ptr     (url / command)
  +0x28..     (url cap)
  +0x48 [9]   String.len     (description or type)
  +0x50 [10]  String.ptr
  +0x38 [7]   Vec ptr        (args: Vec<String>, 24-byte stride per element)
  +0x40 [8]   Vec len
  +0x30 [6]   Vec capacity
  +0x60 [12]  Option<String>.len (env or extra, sentinel 0x8000000000000000 = None)
  +0x68 [13]  Option<String>.ptr
  +0x78 [15..20]  HashMap #1 (hashbrown::RawTable — env KV map)
  +0xA8 [21..26]  HashMap #2 (hashbrown::RawTable — second KV map)
```

---

## BootstrapStatePayload (partial, from store_bootstrap_mcp_servers)

```
Total size: >= 920 bytes (114+ u64 fields)
Known slots (from decompile + drop analysis):
  +0x000 [0..1]   timestamp: u64 (elapsed_secs)
  +0x010 [2..n]   AppStatusPayload
  +0x2A0 [84..]   Vec<AccountSummary> (336 bytes each)
  +0x2B8 [87]     Option<?> — sentinel 0x8000000000000000
  +0x318 [99..106] Option<McpServerListPayload>  ← written by this command
  +0x358 [107..]  Option<SkillListPayload>
```

---

## Error DTO: CoreError

```
tag=2: IoError       (CodexPaths::ensure_directories fail OR fs::write fail)
tag=3: SerialiseError (serde_json::to_vec fail)
tag=10: Ok sentinel
```

**Important**: `store_bootstrap_mcp_servers` errors are **fire-and-forget** — the command handler drops the error via `drop_in_place::<CoreError>` and still returns `CoreEnvelope::ok(payload)`. The frontend always receives Ok on a successful parse, regardless of whether the cache write succeeded.

---

## Persistence Side-Effect (NEW IN 1.1.1)

```
File: CODEX_HOME/bootstrap-cache.json
  Read:  on every load_mcp_servers invocation (bootstrap_cache::load)
  Write: on every successful parse (std::fs::write::inner, single-shot, no atomic rename)
  Format: JSON (serde_json::to_vec serialisation of full BootstrapStatePayload)
  Error policy: silent — write failure does not propagate to caller
```

---

## Delta Summary vs 1.0.9

| Aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| Side-effect | Read-only (parse config only) | Read + Write (parse + persist bootstrap cache) |
| New callees | — | store_bootstrap_mcp_servers, bootstrap_cache::load, serde_json I/O, SystemTime |
| Error propagation | CoreError propagated on parse fail | Same + store errors silently dropped |
| TOML parser | Custom (unchanged) | Same |
