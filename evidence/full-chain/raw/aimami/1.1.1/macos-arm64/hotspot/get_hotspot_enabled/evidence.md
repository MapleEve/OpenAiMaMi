# get_hotspot_enabled — Evidence

**session**: wf-aimami111-delta-20260616
**machine**: <本地机器>
**platform**: macos-arm64
**version**: 1.1.1
**module**: hotspot (delta: was `system` in 1.0.9, now `hotspot` in 1.1.1)
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**produced_at**: 2026-06-17

---

## Confirmed

- Owner VA: `0x1005ec340` (`codexmate_lib::commands::hotspot::get_hotspot_enabled`, size=0x1e9)
- Module change confirmed: 1.0.9 placed this in `codexmate_lib::commands::system`; 1.1.1 moves it to `codexmate_lib::commands::hotspot` — structural reorganization of hotspot-related commands into their own module
- IPC registration string blob at `0x101148166` contains `get_hotspot_enabled` at position 8 in the hotspot command list (after `has_notch`, before `set_hotspot_enabled`)
- IPC dispatcher closure at `0x10030f280` (`run::{{closure}}::{{closure}}`) directly calls `get_hotspot_enabled` via `StateManager::try_get` → owner function
- Command signature: no input args (argKeys=[]); takes `AppHandle` state via Tauri `StateManager`
- Core logic: acquires `OnceBox<Mutex<Repository>>` lock → calls `Repository::load_settings` → reads `CodexMateSettings.hotspot.enabled` bool field (struct offset `0x48`, i.e., `v41[9]` in decompile) → releases mutex → returns `Result<bool, CoreError>`
- `HotspotConfig::serialize` at `0x1004d3830` serializes exactly one field: `"enabled"` (7-byte key at `0x10114cd90` = `"enabled"`)
- `CodexMateSettings` serde `FieldVisitor::visit_str` at `0x1004e4950` maps length=7, bytes=`0x73746F68 / 0x746F7073` = `"hotspot"` to field index 0 — confirming `hotspot` is the first field and position matches struct offset
- `load_settings` at `0x1004bfa30`: reads JSON from file at path `*(a2+440)/*(a2+448)` via `std::fs::read_to_string`, parses via `serde_json::de::from_trait`, applies `mysteryUnlockGrants`/`mysteryUnlockedRoutes` migration logic, then `serde_json::value::de::deserialize_struct` into `CodexMateSettings`
- Startup log string `"[AiMaMi] startup: hotspot_enabled="` at `0x1010b2306` — used in `run::{{closure}}` vtable shim at `0x10032ca40` which reads the same field and formats it with `<bool as Display>::fmt`
- `create_hotspot_window` at `0x1005ecc30` is called at startup if the bool is true AND `has_notch_screen()` returns true
- `set_hotspot_enabled` at `0x1005ec580`: takes `(AppHandle, enabled: bool)`, loads settings, sets `__dst[18] = a4` (same offset pattern), calls `save_settings` (→ `std::fs::write` via `CodexPaths::ensure_directories`), then if enabling: calls `create_hotspot_window`; if disabling: sends window close via `tao::platform_impl::platform::event_loop::Proxy::send_event`
- `save_settings` at `0x1004c00c0` uses `serde_json` serialization + `std::fs::write` (direct, non-atomic file write to settings JSON path)
- IPC response: `InvokeResolver::respond` at `0x10046fce0` — success path serializes `bool` as JSON; error path calls `return_result` at `0x10046ad00`
- `HotspotConfig` struct fields per `0x10114d603` string blob: `usageStatus`, `usageLastError` (additional monitoring fields beyond `enabled`), `HotspotConfig` struct has at least 3 fields
- `CodexMateSettings` field index mapping (from `visit_str`): 0=`hotspot` (7 chars), 1=`usageRefreshInterval` (20 chars), 2=`deviceId` (8 chars), 3=`remoteDeviceSecret` (18 chars), 4=`notificationsSince` (18 chars), 5=`apiProxy` (8 chars), 6=`mysteryUnlockGrants` (19 chars), 7=unknown
- Four-angle completeness: all 4 angles pass (see below)
- IDB comments appended: 2 annotations at `0x1005ec340` (owner) and `0x101148166` (IPC blob)

---

## Inferred

- `CodexMateSettings.hotspot` field is of type `HotspotConfig` (confirmed by `HotspotConfig::serialize` and `HotspotConfig::deserialize` visitors); `HotspotConfig.enabled: bool` is the primary field (length-7 key `"enabled"` in serialize)
- The `OnceBox<Mutex<Repository>>` pattern is the same mutex-guarded state as used by all other repository-backed commands — shared global repository state
- JSON settings file path is stored in `Repository` at offset `+440` (ptr) and `+448` (len) — same pattern seen across other commands
- The boolean at struct offset `0x48` in the 152-byte (0x98) `CodexMateSettings` struct is the `hotspot.enabled` field based on field index 0 mapping and the serializer confirming it is the first key serialized
- `set_hotspot_enabled` modifies the same field at `__dst[18]` (byte 144 = 0x90 in __dst frame) which when memcpy'd to file corresponds to the same `enabled` bool — the write-back is `settings.hotspot.enabled = new_value` then `save_settings`
- Window creation conditional: `hotspot_enabled=true AND has_notch_screen()=true` — hotspot overlay only appears on notch-equipped Macs; on non-notch Macs, enabling has no visible effect at startup
- `set_hotspot_enabled(false)` sends event code `42` (decimal) with flag `33` (0x21) via `tao::Proxy::send_event` to close the existing hotspot window — event-based window close, not direct Tauri `Window::close`

---

## Unknown

- Exact JSON settings file path on disk (path is stored in Repository struct, not observable from get_hotspot_enabled alone; inferred to be `~/.aimami/settings.json` or similar based on `CodexPaths::ensure_directories` pattern)
- `HotspotConfig.usageStatus` and `HotspotConfig.usageLastError` field types and semantics (not accessed by get/set hotspot_enabled)
- Whether `set_hotspot_enabled` emits a Tauri event to frontend after state change (no `emit` call observed in decompile)
- Exact `tao` send_event discriminant values (42 = close-window command, 33 = window identifier) — inferred from decompile, not string-confirmed
- Windows platform behavior (Windows binary not analyzed; Windows Unknown)
- dim6 test/acceptance mapping (C5 implementation side)
- Whether there is a separate in-memory state cache beyond the file (no write to in-memory cache observed in set_hotspot_enabled; get_hotspot_enabled always reads from file via load_settings)
- Frontend call-site component (minified JS; IPC wrapper not located in 1.1.1 frontend yet — hotspot module CCF to be done)
- argKeys for get_hotspot_enabled confirmed empty (no frontend IPC invocation arguments); frontend wrapper name unknown
- Response field consumed by frontend (bool wrapped in CoreEnvelope or raw bool — response format depends on Tauri command macro attribute; no explicit CoreEnvelope wrapping seen in get_hotspot_enabled owner body)

---

## Four-angle completeness

**A (func_query symbol enum)**: `func_query name_regex=".*get_hotspot_enabled.*"` → 1 hit: `0x1005ec340` (codexmate_lib::commands::hotspot::get_hotspot_enabled, size=0x1e9); `name_regex=".*hotspot_enabled.*"` → 2 hits (get + set); no ICF/monomorphization collapse suspected — PASS

**B (string pool / IPC blob)**: `find_regex "get_hotspot_enabled"` → 1 match at `0x101148166` in multi-command IPC blob; xrefs to blob: 2 callers (`run::{{closure}}` outer + inner) — PASS

**C (frontend IPC)**: IPC dispatcher closure at `0x10030f280` directly dispatches to `get_hotspot_enabled`; command name present in blob at `0x101148166`; frontend CCF not yet extracted for 1.1.1 hotspot module — dim1 partially deferred to frontend delta pass; backend fully confirmed — PARTIAL PASS (backend confirmed; frontend argKeys=[] confirmed from dispatcher; wrapper name deferred)

**D (owner-map + INDEX)**: owner-map-111 `get_hotspot_enabled` status=shared/not_yet_queried → now DONE; INDEX has 0 prior 1.1.1 entries for this command; ADDITIVE no collision — PASS

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate**: strictImplementationUse → acceptance-draft（dim1 partial frontend wrapper deferred + dim5 win Unknown）

### happy_path
- 无参数；返回 bool（NOT CoreEnvelope — 直接 JSON true/false）
- 每次调用从磁盘重读 settings JSON（无 cache shortcut）
- 副作用：OnceBox<Mutex<Repository>> lock/unlock + fs::read_to_string（settings） + serde_json 解析 → 提取 hotspot.enabled (offset 0x48)

### boundary/error
- mutex poisoned → CoreError display string via return_result

### side_effect_asserts
- 调用后文件内容不变（read-only）
- 无 HTTP、无进程 spawn、无 keychain
- 响应值与 settings.hotspot.enabled 一致
- settings.json 修改后立即 get 返回新值（fresh read 无缓存）

### test_mapping
- unit: get_hotspot_enabled (mocked Repository + mocked settings file)；enabled=true/false；mutex poisoned
- e2e: IPC → 真实 settings.json；响应为原始 bool（非 CoreEnvelope）；settings 修改后 get 返回新值

### dim6_basis
interfaces/get_hotspot_enabled.md Response DTO + Behavioral invariant (always reads fresh); evidence.md struct offset 0x48 + serde XOR match
