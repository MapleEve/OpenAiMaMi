# load_mcp_servers — evidence record
## AiMaMi 1.1.1 macOS arm64
## delta_class = integrity_recovered → full_gold_leaf
## session_initial = <审计会话>
## session_goldleaf = <审计会话>
## machine = <本地机器> (producer)
## date_initial = 2026-06-17
## date_goldleaf = 2026-06-18

---

## 1. Prior same-sweep disposition
Command was previously marked `same` (no delta from 1.0.9). This session re-investigates and finds a substantive delta: a new persistence side-effect in the command layer that was missed in the prior sweep.

---

## 2. Owner VA table

| Role | Symbol | VA | Size |
|---|---|---|---|
| Tauri IPC dispatch | `run::{{closure}}::{{closure}}` | `0x100310080` | 0x324 |
| Command handler | `commands::mcp::load_mcp_servers` | `0x10072a000` | 0x57e |
| Core parser | `core::mcp::load_mcp_servers` | `0x10059e470` | 0x1ba8 |
| **NEW** Persist | `Repository::store_bootstrap_mcp_servers` | `0x1004cecd0` | — |
| **NEW** Cache read | `bootstrap_cache::load` | `0x1004d88c0` | — |
| TOML section parse | `mcp::parse_mcp_section_header` | `0x1005a3aa0` | — |
| Comment strip | `mcp::strip_toml_comment` | `0x1005a3380` | — |

---

## 3. Delta findings (app-level callee set changes)

### 3.1 Primary delta: bootstrap-cache.json persistence
The command handler `commands::mcp::load_mcp_servers` now calls `Repository::store_bootstrap_mcp_servers` after every successful parse. This function:
1. Reads `CODEX_HOME/bootstrap-cache.json` via `bootstrap_cache::load` (JSON-deserialise into `BootstrapStatePayload`; missing/corrupt file → empty default).
2. Stamps `SystemTime::now()` and clones the parsed `McpServerListPayload` into the `mcp_servers` slot of `BootstrapStatePayload` (at struct offset +0x318 / absolute +792 bytes).
3. Serialises the full merged `BootstrapStatePayload` to JSON via `serde_json::to_vec`.
4. Writes the result to `bootstrap-cache.json` via `std::fs::write` (single-shot, no atomic temp-file rename).

**Side-effect**: every `load_mcp_servers` IPC invocation now mutates `bootstrap-cache.json` on disk.

### 3.2 DTO changes
`McpServerListPayload` element stride = 224 bytes per `McpServerSummary`. The summary struct includes:
- name (String), label (String), env Vec<(key,val)>, type Option<String>, args HashMap (two RawTable)
- Two `hashbrown::RawTable` drop calls confirm HashMap fields for env-like KV maps.

`BootstrapStatePayload` is a large aggregate (offsets from `bootstrap_cache::load` LABEL_16 default path):
- `AppStatusPayload` @ +16
- `Vec<AccountSummary>` (336B each) @ +672
- Unknown `Option<?>` @ +0x2B8 (+696) — a1[87] sentinel, live-verified from decompile
- `Option<McpServerListPayload>` @ +0x318 (+792) — a1[99] sentinel = `0x8000000000000000`
- `Option<SkillListPayload>` @ +0x358 (+856) — a1[107] sentinel = `0x8000000000000000`

### 3.3 Error handling
- `CodexPaths::ensure_directories` failure → return `CoreError` tag 2.
- `serde_json::to_vec` failure → `CoreError` tag 3.
- `std::fs::write` failure → `CoreError` tag 2.
- All errors from `store_bootstrap_mcp_servers` are **ignored** by the command handler (fire-and-forget: the store error is dropped via `drop_in_place::<CoreError>` before returning `CoreEnvelope::ok(payload)`).

### 3.4 Unchanged from 1.0.9 (not delta)
- Core TOML parse logic (`load_mcp_servers` core impl) — same algorithm.
- `parse_mcp_section_header` literal prefix detection (`mcp_servers.` @ `0x1005a3aa0`).
- `strip_toml_comment` — same.
- `unquote_toml` — same.
- Mutex guard / panic-count noise — filtered.

---

## 4. 逆向分析 annotation status
`append_comments` applied — session <审计会话> (integrity_recovered pass):
- `0x10059e470` (core::mcp::load_mcp_servers) ✓
- `0x10072a000` (commands::mcp::load_mcp_servers) ✓
- `0x1004cecd0` (store_bootstrap_mcp_servers NEW) ✓
- `0x1004d88c0` (bootstrap_cache::load NEW) ✓
- `0x1005a3aa0` (parse_mcp_section_header) ✓

`<工具调用>` confirmed: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb` — ok=true (2026-06-17)

---

## 5. String evidence
- `bootstrap-cache.json` confirmed in CodexPaths string table @ `0x1011514d1`
- Command routing string @ `0x101147e82` confirms `load_mcp_servers` is a first-class IPC command.
- `mcp_servers.` section parser confirmed by byte literal `0x767265735F70636D` (mcp_serv) at parse entry.
- Error string `"MCP server not found: "` @ `0x1010b6a0a` (from `upsert_mcp_server` domain, not this command).

---

## 6. Completeness assessment (3-angle)
| Angle | Status |
|---|---|
| Function-symbol enumeration | Complete — both `commands` and `core` layers found via `func_query name_regex=load_mcp` |
| Frontend CCF | Confirmed via dispatch string table @ `0x101147e82` listing `load_mcp_servers` in IPC manifest |
| Exports / callee tree | Depth ≥ 5 reached; terminal at stdlib leaves (`serde_json`, `std::fs::write`); all app-level callees named |

---

## 7. gate-report
```json
{
  "command": "load_mcp_servers",
  "platform": "macos-arm64",
  "version": "1.1.1",
  "baseline": "1.0.9",
  "delta_class": "integrity_recovered",
  "session": "<审计会话>",
  "owner_va": "0x10072a000",
  "core_va": "0x10059e470",
  "new_callees": [
    "Repository::store_bootstrap_mcp_servers @ 0x1004cecd0",
    "bootstrap_cache::load @ 0x1004d88c0",
    "serde_json::de::from_trait",
    "serde_json::ser::to_vec @ 0x1004b5d40",
    "std::fs::write::inner",
    "CodexPaths::ensure_directories @ 0x1005582b0"
  ],
  "new_side_effects": [
    "read CODEX_HOME/bootstrap-cache.json on every load_mcp_servers call",
    "write CODEX_HOME/bootstrap-cache.json on every successful load_mcp_servers call"
  ],
  "dto_changes": "McpServerListPayload now persisted into BootstrapStatePayload.mcp_servers slot (offset +792)",
  "error_handling": "store errors fire-and-forget; command always returns ok(payload) on parse success",
  "idb_annotated": true,
  "<工具调用>d": true,
  "idb_path": "<来源位置>/raw/binary/AiMaMi-1.1.1-idb",
  "gate_status": "pass",
  "completeness_3angle": "pass",
  "live_decompile_verified": true,
  "readyToImplement": true,
  "strictImplementationUse": true,
  "implementation_use": true,
  "gate_accepted": true,
  "call_tree_depth": 6,
  "call_tree_edges_jsonl": 13,
  "gold_leaf_complete": true
}
```

---

## 8. Gold-leaf completion record (session <审计会话>)

### 8.1 Files added in this session

| File | Description |
|---|---|
| `manifest.json` | Full gate manifest with readyToImplement=true |
| `call-trees/load_mcp_servers.jsonl` | 13 edges, depth 6, JSONL format |
| `ida/pseudocode/commands_mcp_load_mcp_servers.c` | Owner function decompile |
| `ida/pseudocode/repository_store_bootstrap_mcp_servers.c` | NEW delta function decompile |
| `ida/pseudocode/core_mcp_load_mcp_servers.c` | Core TOML parser (summary, unchanged) |
| `ida/pseudocode/bootstrap_cache_load.c` | NEW cache-read function decompile |
| `ida/pseudocode/mcp_parse_mcp_section_header.c` | Section header parser (unchanged) |
| `ida/pseudocode-manifest.jsonl` | 5 entries, status=decompiled, source=ida |
| `interfaces/dto.md` | Full DTO/interface spec: McpServerSummary layout, BootstrapStatePayload slots, error codes |

### 8.2 Confirmed

| Item | Status |
|---|---|
| Function-symbol enumeration (Angle A) | pass |
| Frontend CCF dispatch string (Angle B) | pass |
| Exports/callee tree depth≥5 (Angle C) | pass — depth=6, 13 edges |
| McpServerSummary struct size | 224 bytes confirmed via drop_in_place stride |
| BootstrapStatePayload mcp_servers slot | offset +792 (a1[99]) confirmed |
| serde_json serialize_entry calls | 6 entries (→ 6+ fields in serialised payload) |
| fs::write syscall path | _write via std::fs::write::inner (no atomic rename) |
| Error fire-and-forget confirmed | drop_in_place::<CoreError> before CoreEnvelope::ok |

### 8.3 Confirmed / Inferred / Unknown

#### Confirmed
- Owner VA 0x10072a000 decompiled, all callees enumerated
- store_bootstrap_mcp_servers VA 0x1004cecd0 decompiled, full persist chain confirmed
- bootstrap_cache::load VA 0x1004d88c0 decompiled, serde_json deserialise confirmed
- McpServerSummary stride = 224 bytes (from dealloc size in drop_in_place)
- BootstrapStatePayload mcp_servers at a1[99] (+792 bytes)
- Error policy: fire-and-forget (drop_in_place::<CoreError> confirmed in pseudocode)
- Write path: single-shot std::fs::write, no atomic temp-file
- TOML section prefix: "mcp_servers." (8-byte LE literal 0x767265735F70636D confirmed)
- Sort: driftsort_main (stable sort by server name)

#### Inferred
- bootstrap-cache.json path comes from a2[58..59] (Repository field, path string)
- McpServerSummary fields: name(String), url/command(String), description(String), args(Vec<String>), env(HashMap), env2(HashMap), extra_field(Option<String>)
- The 6 serde_json serialize_entry calls correspond to: servers Vec, profile String, timestamp u64, status u32, and 2 additional scalar fields
- BootstrapStatePayload AppStatusPayload slot at offset +0x10 (inferred from cache_load LABEL_16)

#### Unknown
- Exact field names of McpServerSummary (name vs command vs url — key names not extracted from serde derive; would need string pool search)
- Exact size of BootstrapStatePayload (estimated 920+ bytes)
- Whether bootstrap-cache.json path is configurable at runtime or fixed at compile time
