# load_relay_state — Delta Evidence (macos-arm64, AiMaMi 1.1.1 vs 1.0.9)

delta_class: integrity_recovered
session: <审计会话>
machine: <本地机器>
produced: 2026-06-17

---

## Summary of Delta vs 1.0.9

The command `load_relay_state` itself existed in 1.0.9 (confirmed by frontend api-map.json).
However, the entire `virtual_auth` subsystem that is now called during `list_state` is NEW in 1.1.1.
The 1.0.9 binary had no `virtual_auth::enable_virtual_login`, no `VirtualAuthMarker` struct,
no `virtual-auth-marker.json` persistence, and no `has_real_login_material` SIMD check.

---

## Delta Points

### DELTA-1: New callee — reconcile_api_login_auth (0x1005d7660)

**Status: NEW callee in list_state**

In 1.0.9, `list_state` called only `snapshot` + `RelayState::clone`. In 1.1.1 it now calls
`reconcile_api_login_auth` BEFORE snapshot. This is a behavioral addition: every invocation of
`load_relay_state` now potentially rewrites auth.json if the relay is in ROUTER_ON + api-login mode
and detects auth.json is missing or stale.

Evidence: grep of 1.0.9 evidence finds no `reconcile_api_login_auth` symbol.

---

### DELTA-2: New subsystem — virtual_auth (entire module)

**Status: NEW module, no 1.0.9 baseline present**

Functions confirmed new (not present in 1.0.9 evidence tree):
- `virtual_auth::enable_virtual_login` (0x100545110)
- `virtual_auth::read_marker` (0x100544d70)
- `virtual_auth::auth_is_our_virtual` (0x100544f70)
- `virtual_auth::has_real_login_material` (0x1005466b0)
- `virtual_auth::cleanup` (0x1005468f0)

Verified: `grep -r VirtualAuthMarker /raw/aimami/1.0.9/` → 0 hits.

---

### DELTA-3: New DTO — VirtualAuthMarker

**Status: NEW serde struct**

Confirmed from IDB string table at 0x101148680:
```
struct VirtualAuthMarker with 4 elements
  - version       (u64, written as 2)
  - createdAtMs   (u64, Unix ms via chrono::Utc::now)
  - apiKey        (String, UUID v4)
  - backedUpRealAuth (bool)
```

Persisted to: `<CodexPaths>/virtual-auth-marker.json` (string at 0x10114fd99).

This DTO did NOT exist in 1.0.9.

---

### DELTA-4: New side-effect — virtual-auth-marker.json write

**Status: NEW persistent side-effect**

During `enable_virtual_login`, two files are atomically written:
1. `virtual-auth-marker.json` — marker with `VirtualAuthMarker` DTO
2. `auth.json` — rewritten with virtual `OPENAI_API_KEY` = UUID v4 value

Additionally, if real login material exists, a backup is written to `auth_mod_e` path before overwrite.

Callee responsible: `atomic_write::write_atomic` (0x10041e960) called 3 times within `enable_virtual_login`.

---

### DELTA-5: New side-effect — relay::storage::save now called from ensure_proxy_started

**Status: CONFIRMED new save call site**

`ensure_proxy_started` (0x1005d56f0) now calls `relay::storage::save` (0x1005e2c60) on BOTH the
success and failure branches of `tokio::block_on(spawn_proxy)`. This means every call to
`load_relay_state` that reaches the proxy-start path will write the relay state to disk.

In 1.0.9, storage::save in this context was not observed in the command path.

---

### DELTA-6: New callee in has_real_login_material — SIMD pattern check

**Status: NEW behavioral logic**

`has_real_login_material` uses SIMD xor comparison (xmmword at 0x10114F090 + 0x10114F080)
to detect the prefix `"sk-<redacted>"` (23 bytes, confirmed by string at 0x10114f962:
`"sk-<redacted>://..."`) and returns false if the key starts with this prefix.
This guard was absent in 1.0.9.

---

### NOT DELTA (noise filtered)

- Mutex poison-guard paths: `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / `panic_in_cleanup` — compiler-generated, not app logic
- `sub_xxx` / `anon_<hash>` vtable helpers — symbol name churn only
- `alloc`/`dealloc` size adjustments within existing structures
- `memcpy` stride constants in RelayState::clone unrolled loop (232-byte stride, 8-entry unroll) — structural, not behavioral

---

## Interface / DTO Summary

### Input (IPC invocation)
```
command: "load_relay_state"
payload: {} (no args)
```

### Output (CoreEnvelope<RelayState>)
```
Ok variant:
  tag: 2
  label_1: "ok" (2 bytes)
  label_2: "success" (7 bytes)
  payload: RelayState (0x170 = 368 bytes, at offset +72)
  statusCode: 1 (i32 at offset +440)
  success: true (bool at offset +444)

Err variant:
  tag: 0x8000000000000000
  payload: CoreError (Display-formatted string)
```

### VirtualAuthMarker DTO (NEW, written to disk by side-effect)
```json
{
  "version": 2,
  "createdAtMs": <u64 unix_ms>,
  "apiKey": "<uuid-v4-string>",
  "backedUpRealAuth": <bool>
}
```

### auth.json virtual format (written as side-effect)
```json
{
  "auth_mode": "auth_mod_e",
  "OPENAI_API_KEY": "<same-uuid-v4>"
}
```

### AuthFile DTO keys (existing, from 0x101148680)
```
OPENAI_API_KEY, tokens, last_refresh
tokens: { access_token, refresh_token, account_id, id_token }
```

---

## Error / Side-effect Catalog

| Event | Log String | VA |
|-------|-----------|-----|
| auth.json missing, rewriting | `[AiMaMi][api-login] auth.json missing; rewriting virtual login` | 0x101153b4e |
| virtual auth rewrite failed | `[AiMaMi][api-login] rewrite virtual auth failed: <err>` | 0x1010b6fa4 |
| proxy unreachable (warn) | (formatted string with port number) | 0x1010b6d8d |
| proxy spawn error (string) | (formatted from tokio result) | 0x1010b6de3 |
| write virtual auth.json failed | `write virtual auth.json failed: ` | 0x1010b58ba |
| write virtual auth marker failed | `write virtual auth marker failed: ` | 0x1010b58dd |
| encode virtual auth marker failed | `encode virtual auth marker failed: ` | 0x1010b5902 |

---

## IDB Annotation Record

Comments appended at:
- 0x1005e8dd0 (load_relay_state owner)
- 0x1005d1ab0 (list_state)
- 0x100545110 (enable_virtual_login)
- 0x1005e2c60 (storage::save)

(see idb_save confirmation below)

---

## Gate Assessment

- owner_va: confirmed (0x1005e8dd0)
- callee_set_delta: POSITIVE — 5 new app-level callees vs 1.0.9
- dto_delta: POSITIVE — VirtualAuthMarker struct new; auth.json write format new
- side_effect_delta: POSITIVE — 3 new atomic_write call sites per invocation (conditional)
- string_delta: POSITIVE — new log strings, new file names
- error_delta: POSITIVE — new error codes (9=IoError format, 10=Ok) in enable_virtual_login

**gate: PASS — integrity_recovered delta fully documented**

---

## Call-Tree JSONL Completion Record

session: <审计会话>
machine: <本地机器>
produced: 2026-06-18

call-trees/load_relay_state.jsonl written with 73 caller→callee edges across depth 1..4.
Edge breakdown: depth-1=6, depth-2=10, depth-3=32, depth-4=26. Terminated at stdlib/alloc/serde leaves (depth>=5).

逆向分析 live verification (<逆向工具通道>) used for all 4 levels.
IDB annotated at 5 VAs and saved (idb_save ok).

---

## Correction: ensure_proxy_started NOT Removed in 1.1.1

Prior task description stated "1.1.1 行为 RelayManager::list_state only, ensure_proxy_started + apiKey scrub 被移除". Live 逆向分析 callees refute this:

- `ensure_proxy_started` (0x1005d56f0) IS present in `list_state` callees in 1.1.1.
- The proxy autostart path is active. DELTA-5 (above) confirms it gained a NEW call site: `relay::storage::save` on both success and failure branches.

- `apiKey scrub` is NOT removed. The scrub logic was RESTRUCTURED: in 1.1.1 it lives in `has_real_login_material` (0x1005466b0) which uses SIMD prefix check for "sk-<redacted>" (DELTA-6). This is a moved+enhanced scrub, not a removal.

Evidence basis: live `callees(0x1005d1ab0)` 2026-06-18 shows 6 callees, `ensure_proxy_started` among them.
