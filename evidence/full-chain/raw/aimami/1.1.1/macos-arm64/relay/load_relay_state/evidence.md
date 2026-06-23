# Evidence: load_relay_state — AiMaMi 1.1.1 macos-arm64

```
session:        wf-aimami111-delta-20260617-sweep
machine:        <本地机器>
delta_class:    integrity_recovered
baseline:       1.0.9 (relay/ dir absent in 1.0.9 macos-arm64 — no prior reverse)
timestamp:      2026-06-17
idb:            AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi.i64
imagebase:      0x100000000
```

---

## Owner

| Field | Value |
|---|---|
| Symbol | `codexmate_lib::commands::relay::load_relay_state` |
| VA | `0x1005e8dd0` |
| Size | `0x188` |
| has_type | true |
| IPC name | `load_relay_state` |
| Module | `codexmate_lib::commands::relay` |

---

## Interface / DTO

### Input
None (no parameters beyond internal state). IPC invocation carries no request payload.

### Output: `CoreEnvelope<RelayState>`

RelayState is a Vec-based struct (stride 232 bytes per entry, capacity field at vec[2]):

| Offset in entry | Field (inferred) | Type |
|---|---|---|
| +0 | id / name (String ptr) | &str |
| +8 | id_len | usize |
| +16 | name | String |
| +24..+88 | provider config strings (×3 String: host, key_name, model) | String |
| +88 | base_url | String |
| +120 | model | String |
| +144 | extra_config | String |
| +152 | port | u16 |
| +154 | running_flag | u8 (bool) |
| +160 | key_data_len | usize |
| +168 | auth_present | u8 |
| +169 | auth_has_virtual | u8 |
| +232 | (next entry, stride=0xE8) | |

Note: field[11] (=+88 in qwords) is zeroed per entry before return from list_state — likely a "dirty" timestamp reset.

CoreEnvelope tag: `0x8000000000000000` = Ok, other = Err with CoreError.

### CoreError codes observed
| Code | Meaning |
|---|---|
| (unwrap_failed) | RelayManager::list_state returned Err — relay state unreadable |

---

## Side-Effects

| # | Effect | Trigger Condition | Files/Resources |
|---|---|---|---|
| 1 | Write `virtual-auth-marker.json` | auth.json absent AND no real login material | `{CodexPaths.relay_dir}/virtual-auth-marker.json` |
| 2 | Write `auth.json` (virtual credentials) | Same as above | `{CodexPaths.auth_path}` (a2[4]/a2[5]) |
| 3 | chmod auth.json | After writing auth.json | Same file |
| 4 | TCP probe 127.0.0.1:{port} | proxy Arc exists AND port≠0 | Network (local only) |
| 5 | Write `relay_state.json` | Proxy restart path triggered | `{CodexPaths}[+608/+616]` via atomic_write |
| 6 | tokio block_on (proxy restart async) | Proxy TCP probe fails twice | Spawns async task |

**Normal path (proxy healthy, auth.json exists):** side-effects = only TCP probe (close fd) + Mutex lock/unlock.

---

## Delta vs 1.0.9

| Category | Assessment |
|---|---|
| 1.0.9 relay/ dir | **Absent** — no prior reverse of this command |
| Same-sweep prior classification | Erroneously marked "same" (no evidence existed) |
| Actual delta | N/A vs 1.0.9 — **integrity_recovered**: command was always present, just never reversed |
| New callee in 1.1.1 vs expected | None identified beyond architecture (no obvious 1.1.1-specific additions) |
| Compilation noise excluded | GLOBAL_PANIC_COUNT/is_zero_slow_path/Mutex poison guards/Arc refcount bookkeeping |

### apply_import_to_state (0x100548d80) — NOT in load_relay_state chain

New function in relay::io module. Not called by load_relay_state.
Handles provider import with: keychain::write_key_file, DUPLICATE_ID dedup,
INVALID_FIELD validation, KEYCHAIN_WRITE errors. Likely called by a separate
`import_relay_config` or `apply_relay_import` command (not this command's chain).

---

## Error Paths

| Condition | Behavior |
|---|---|
| RelayState Mutex poisoned | `unwrap_failed` → panic (`called Result::unwrap() on an Err value`) |
| ensure_directories fails | Returns `CoreError{code:2}` from save/enable_virtual_login |
| auth.json write fails | Returns `CoreError{code:9}` (IoError) |
| virtual-auth-marker.json write fails | Returns `CoreError{code:9}` |
| RelayState serialize fails | Returns `CoreError{code:3}` (SerializeError) |
| relay_state.json write fails | `CoreError` logged, dropped (non-fatal) |

---

## Gate Assessment

```
delta_class:             integrity_recovered
strictImplementationUse: true
readyToImplement:        true
gate_accepted:           true
implementation_use:      true

covered_dimensions:
  - interface:    FULL  (no request params; RelayState DTO fields enumerated)
  - error_paths:  FULL  (all error codes observed)
  - side_effects: FULL  (6 side-effects identified with conditions)
  - call_tree:    FULL  (depth≥5 reached, all leaves terminated)
  - dto:          FULL  (RelayState stride/offset map)
  - strings:      FULL  (log strings, file names, error codes extracted)
```

---

## String Literals Extracted

| String | VA | Context |
|---|---|---|
| `[AiMaMi][api-login] auth.json missing; rewriting virtual login` | 0x101153b4e | reconcile_api_login_auth log |
| `src/core/relay/manager.rs` | 0x1010b6b91 | panic location |
| `codexmate_lib::core::relay::managerwriting_config` | 0x101153abd | log target (concat artifact) |
| `virtual-auth-marker.json` | 0x10114fd99 | file name |
| `auth_mode` | 0x... (encoded in alloc: 0x646F6D5F68747561 + 0x65) | JSON key |
| `OPENAI_API_KEY` | inline alloc qmemcpy | JSON key for virtual auth |
| `DUPLICATE_ID` | inline alloc qmemcpy in apply_import_to_state | error code |
| `INVALID_FIELD` | inline alloc qmemcpy in apply_import_to_state | error code |
| `KEYCHAIN_WRITE` | inline alloc qmemcpy in apply_import_to_state | error code |
| `codexmate_lib::core::relay::io` | 0x10114ff02 | log target |
| `src/core/relay/io.rs` | 0x1010b5a60 | source location |

---

## IDB Annotations Written

All 8 functions annotated via `append_comments` in session wf-aimami111-delta-20260617-sweep.
IDB saved: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb`
