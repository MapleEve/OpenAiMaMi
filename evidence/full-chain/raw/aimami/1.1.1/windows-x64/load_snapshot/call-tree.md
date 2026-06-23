# load_snapshot — Call Tree (Windows x64)
session=<审计会话>  machine=<本地机器>
delta_class=integrity_recovered  baseline=1.0.9

---

## Legend

```
VA             — virtual address
DELTA          — differs from 1.0.9 baseline
LEAF           — no further app-level callees (stdlib/runtime excluded)
TOO_LARGE      — function too large to decompile (逆向分析 hex-rays failure)
SIDE_EFFECT    — disk/HTTP/OS side-effect
```

---

## Full Call Tree

```
[ROOT] Tauri IPC dispatch — "load_snapshot"
├── sub_1409656E0 @ 0x1409656E0  [TOO_LARGE — 0xed9 bytes / 133 basic blocks]
│   ├── string "load_snapshot" @ 0x1412faa1b  (xref 0x1409657aa)
│   └── sub_1408E3F20 @ 0x1408E3F20  (async state machine, switch byte@a2+504)
│       ├── CASE 0: sub_1410A1DF0 (spawn future + executor sub_140E30410)
│       │   └── sub_140E30410 @ 0x140E30410  (poll function, 0x24 cases)
│       │       ├── CASE 0x1C: skill_store_get_all_111 @ 0x14106D960
│       │       │   └── → skill_store_iter_111 @ 0x14106DE20  [LEAF]
│       │       ├── CASE 0x0C: sub_140F09010  (parse/response handler)
│       │       │   └── → load_snapshot_async_body_111 @ 0x140796310
│       │       │       ├── load_snapshot_write_if_changed_111 @ 0x1401B53F0  [CORE]
│       │       │       │   │
│       │       │       │   ├─ [STEP 1] load_mcp_servers_read_existing_snapshot_111 @ 0x1401BF000
│       │       │       │   │   ├── win32_file_read_bytes_111 @ 0x141093260  [LEAF, SIDE_EFFECT:READ]
│       │       │       │   │   └── sub_140003600 @ 0x140003600  (JSON parse entry)
│       │       │       │   │       └── bootstrap_state_payload_deserialize_json_111 @ 0x14008A7C0
│       │       │       │   │           ├── core_snapshot_payload_deserialize_serde_111 @ 0x14024B8B0
│       │       │       │   │           │   ├── CASE 0: writtenAt (string/i64)  [LEAF]
│       │       │       │   │           │   ├── CASE 1: snapshotProgressive (bool)  [LEAF, DELTA: NEW]
│       │       │       │   │           │   ├── CASE 2: usageAnalytics (Arc<Object>)  [LEAF]
│       │       │       │   │           │   ├── CASE 3: mcpServers (Vec)  [LEAF]
│       │       │       │   │           │   └── CASE 4: installedSkills (Vec)  [LEAF]
│       │       │       │   │           └── schemaVersion (required, 13-char key)  [LEAF]
│       │       │       │   │
│       │       │       │   ├─ [STEP 2] diff gate: sub_141213640 (string compare × N)
│       │       │       │   │   ├── compare schemaVersion  [LEAF]
│       │       │       │   │   ├── compare writtenAt  [LEAF]
│       │       │       │   │   ├── compare snapshotProgressive  [LEAF, DELTA: new field in diff]
│       │       │       │   │   ├── compare mcpServers (len + content)  [LEAF]
│       │       │       │   │   ├── compare installedSkills (len + content)  [LEAF]
│       │       │       │   │   ├── compare usageAnalytics  [LEAF]
│       │       │       │   │   ├── compare cachedPrimaryWindow  [LEAF]
│       │       │       │   │   ├── compare cachedSecondaryWindow  [LEAF]
│       │       │       │   │   └── compare subscriptionExpiresAt, subscriptionWillRenew  [LEAF]
│       │       │       │   │   → if ALL equal → LABEL_78 → return 10 (no-op, skip write)
│       │       │       │   │
│       │       │       │   ├─ [STEP 3] relay_config_check_parent_dirs_sys @ 0x1406F2870  [LEAF, path gate]
│       │       │       │   │
│       │       │       │   ├─ [STEP 4] load_mcp_servers_read_existing_snapshot_111 @ 0x1401BF000 (re-read)
│       │       │       │   │   └── (same subtree as STEP 1, omitted for brevity)
│       │       │       │   │
│       │       │       │   ├─ [STEP 5] account_slice_clone_7fields @ 0x1401EB500
│       │       │       │   │   └── sub_1410A2210 × 7 (Arc clone per string field)  [LEAF]
│       │       │       │   │
│       │       │       │   ├─ [STEP 6] sub_1401ED840 (build new snapshot struct)  [LEAF internals]
│       │       │       │   │   └── sub_141212FB0 (memcpy 336-byte block)  [LEAF]
│       │       │       │   │
│       │       │       │   ├─ [STEP 8] account_list_deep_clone @ 0x140364A10  [DELTA: 336B stride]
│       │       │       │   │   ├── allocates Vec with 336 bytes/account  [LEAF]
│       │       │       │   │   ├── Arc-clone field@+248 (optional timestamp lastUsageAt?)  [DELTA: NEW]
│       │       │       │   │   ├── Arc-clone field@+272 (optional timestamp subscriptionExpiresAt?)  [DELTA: NEW]
│       │       │       │   │   └── Arc-clone field@+296 (optional timestamp createdAt?)  [DELTA: NEW]
│       │       │       │   │
│       │       │       │   ├─ [STEP 9] serialize_skill_snapshot_json_111 @ 0x140197420
│       │       │       │   │   └── account_dto_serialize_json_111 @ 0x1401B96B0  [LEAF — 17 fields]
│       │       │       │   │
│       │       │       │   └─ [STEP 10] win32_file_write_bytes_111 @ 0x141093710  [LEAF, SIDE_EFFECT:WRITE]
│       │       │       │
│       │       │       └── load_snapshot_read_only_111 @ 0x1401B4A90  (alt branch, no write)
│       │       │           └── load_mcp_servers_read_existing_snapshot_111  [LEAF — same as STEP 1]
│       │       │
│       │       └── error cases 0x12, 0x14 → IO error formatters  [LEAF]
│       │
│       ├── CASE 1: → sub_140872C70 (result handler)
│       │   └── sub_140790230 (response encode)  [LEAF]
│       └── CASE 2/3/4: error dispatch → tray / diagnose helpers  [LEAF]
│
└── refresh_usage_snapshot_core_111 @ 0x1401BD570  [PARALLEL, triggered on IPC success]
    ├── fetch_wham_usage_http_111 @ 0x140673CC0  [LEAF, SIDE_EFFECT:HTTP — same 1.0.9 + 1.1.1]
    ├── quota_history_append_dedup_111 @ 0x1401FF820  [LEAF, DELTA: NEW in 1.1.1]
    └── quota_history_persist_file_111 @ 0x140200EA0  [LEAF, SIDE_EFFECT:WRITE, DELTA: NEW in 1.1.1]
```

---

## Depth Summary

| Path segment | Depth from IPC root |
|---|---|
| sub_1409656E0 (dispatch) | 0 |
| sub_1408E3F20 (async SM) | 1 |
| sub_140E30410 (poll) | 2 |
| load_snapshot_async_body_111 | 3 |
| load_snapshot_write_if_changed_111 | 4 |
| load_mcp_servers_read_existing_snapshot_111 | 5 |
| bootstrap_state_payload_deserialize_json_111 | 6 |
| core_snapshot_payload_deserialize_serde_111 | 7 |
| serde visitor cases | 8 = LEAF |
| win32_file_write_bytes_111 | 5 = LEAF |
| relay_config_check_parent_dirs_sys | 5 = LEAF |
| serialize_skill_snapshot_json_111 | 5 |
| account_dto_serialize_json_111 | 6 = LEAF |
| account_list_deep_clone | 5 |
| Arc-clone timestamps @+248/+272/+296 | 6 = LEAF |

Max observed depth: 8. All paths terminated at LEAF (no further app-level callees) or TOO_LARGE.
