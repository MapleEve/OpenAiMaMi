# export_relay_config — evidence.md
<!-- delta_class: integrity_recovered -->
<!-- session: <审计会话> -->
<!-- machine: <本地机器> -->
<!-- producer: macos only (this file) -->
<!-- baseline: 1.0.9 (previously swept; was mis-classified same) -->

## Gate status: PASS (integrity_recovered)

The function was previously mis-classified as "same" in 1.0.9→1.1.1 diff. After deep decompile the following **real app-level deltas** are confirmed. Compilation-noise items are filtered and listed separately.

---

## Confirmed App-Level Deltas (vs 1.0.9 baseline)

### Delta 1 — `keychain::get_api_key` path added (NEW callee, depth 2→3)

**What changed:** In 1.0.9, `export_to_file` either embedded the stored key string directly or omitted it. In 1.1.1, when `includeApiKeys=true` AND `provider.has_key=true`, a new dedicated `keychain::get_api_key` function (`0x1006c86a0`) is called. This function:
1. Reads a JSON file at `<relay_config_path>/keys/<provider_id>` via `serde_json::from_trait`.
2. Looks up provider_id in a hashbrown HashMap (SIMD probe).
3. base64-decodes the stored value.
4. Derives a 32-byte key via **sha256(hostname + username)** (new sha2 dependency — was absent in 1.0.9 callees).
5. Falls back to `mac_keychain::get` (macOS Keychain Services) if file lookup misses.
6. Calls `keychain::write_key_file` to cache the result either way.

**Evidence VA:** `0x1006c86a0`; confirmed by callees output (`sha2::sha256::compress256 0x100942d40`, `mac_keychain::get 0x10041ee00`, `hostname::get 0x10090e350`).

**Classification:** New app-level callee + new side-effect (write_key_file). NOT noise.

---

### Delta 2 — `atomic_write::write_atomic` replaces direct write (depth 2, NEW callee)

**What changed:** In 1.0.9 the export JSON was written with a direct `std::fs::write` / `OpenOptions`. In 1.1.1, `relay::io::export_to_file` calls `atomic_write::write_atomic` (`0x10041e960`) which:
1. Creates parent directory recursively (mode 0o777).
2. Generates a unique tmpfile name: `<stem>.<pid>.<uuid_v4>`.
3. Opens tmpfile with `create_new=true` (exclusive, mode 0o644).
4. Writes data, then calls **`fdatasync`** (`File::sync_data`) before closing.
5. **`rename`** tmpfile → dest (atomic on POSIX).
6. Calls `sync_parent_dir` (fsync on parent dir fd).
7. Removes tmpfile on rename failure.

**Evidence VA:** `0x10041e960`; confirmed by callees (`uuid::new_v4 0x100e13930`, `File::sync_data 0x100f25b80`, `sys::fs::rename 0x100f2b560`, `sync_parent_dir 0x10041ec70`).

**Classification:** Changed write behavior — atomicity guarantee added. Relevant for consumer implementation (must not assume in-place write; output file may briefly appear as tmpfile). NOT noise.

---

### Delta 3 — `set_permissions` added after successful write (NEW branch, depth 2)

**What changed:** After `write_atomic` succeeds, if `include_api_keys=true`, `std::sys::fs::set_permissions` is called on the output path. Failure is soft (logged at level WARN=2, not propagated as error). In 1.0.9 no chmod was applied.

**Evidence:** pseudocode line `if (v55) { log::__private_api::log(..., 2, ...) }` after `set_permissions` at `0x100547c2c`; log target string `"codexmate_lib::core::relay::io"` confirmed in refs.

**Classification:** New side-effect on output file permissions. NOT noise.

---

### Delta 4 — `exportedBy` version string bumped

**What changed:** Hardcoded string `"AiMaMi 1.1.1"` (12 bytes) embedded in `export_to_file` at `0x100547617` via `qmemcpy(v27, "AiMaMi 1.1.1", 12)`. In 1.0.9 this was `"AiMaMi 1.0.9"`.

**Evidence:** decompile line `qmemcpy(v27, "AiMaMi 1.1.1", 12)` at `0x100547617` in `export_to_file`.

**Classification:** Version string change. App-level (serde DTO key `exportedBy` value changes). NOT noise.

---

### Delta 5 — Serde DTO schema confirmed (no key name changes from 1.0.9 expectations)

Confirmed serde keys emitted by `SerializeMap::serialize_entry`:
- `"exportedAt"` — i64 ms timestamp from `chrono::Utc::now` (key lit len=10, VA `0x10114ff2f` string pool)
- `"exportedBy"` — String `"AiMaMi 1.1.1"` (key lit len=10)
- `"includeApiKeys"` — bool (key lit len=14, anon_433)
- `"providers"` — Vec<RelayExportProvider> via `serialize_field` (key lit len=9)
- `"filePath"` — String final path (key lit len=8, anon_325)

Sub-DTO keys for providers (from string pool at `0x10114ff2f`): `ide`, `baseUrl`. Additional provider fields are in the raw vec (176 bytes/entry) but serde keys for sub-fields not fully resolved at this depth — mark as partial.

**Classification:** No key name delta vs 1.0.9 schema — same top-level DTO shape. Sub-DTO may have added `apiKey` field (when includeApiKeys=true); cannot confirm without depth-4 RelayExportProvider serde serializer decompile. Marked partial.

---

## Noise-Filtered Items (NOT deltas)

| item | reason filtered |
|---|---|
| `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` in snapshot | Mutex poison-guard — stdlib boilerplate |
| `anon_<hash>` vtable renames | Compiler hash suffix change — no semantic content |
| `rust_alloc` size micro-adjustments | Struct layout padding/alignment changes |
| Stack offsets / register assignments | Compilation artifact |
| `drop_in_place` dispatch variants (suffix _5, _6, _10) | Monomorphization index change — no behavior change |

---

## IPC Contract (Tauri command)

```
Command:  export_relay_config
Args:
  filePath:       String (destination path for export JSON)
  includeApiKeys: bool   (whether to embed decrypted API keys in export)
Returns:
  CoreEnvelope<ExportResult> where ExportResult = {
    file_path:       String,   // final written path
    provider_count:  usize,    // number of providers exported
    include_api_keys: bool,    // echoes input flag
  }
  or CoreEnvelope<Err(CoreError::String)> on failure
IPC registration xref: 0x100316160 (single caller)
```

---

## Side-Effects Summary

| side-effect | condition | new in 1.1.1? |
|---|---|---|
| Write export JSON to `filePath` (atomic rename) | always | YES (atomic write replaces direct write) |
| fsync output file + parent dir | always | YES |
| Set file permissions on output | `includeApiKeys=true` | YES |
| Read encrypted key files from `relay_config/keys/` | `includeApiKeys=true && provider.has_key` | YES |
| Call macOS Keychain Services | `includeApiKeys=true && provider.has_key && file miss` | YES |
| Write key cache file to `key_dir` | key lookup success (any stage) | YES |
| Log WARN to `codexmate_lib::core::relay::io` | `set_permissions` fails | YES |
| Log DEBUG to `codexmate_lib::core::relay::keychain` | key write-back occurs | YES |

---

## Verification Artifacts

| artifact | value |
|---|---|
| IDB path | `<来源位置>/raw/binary/AiMaMi-1.1.1-idb` |
| IDB saved | yes (idb_save confirmed ok) |
| Inline 逆向分析 comments written | 5 functions annotated via append_comments |
| Pseudocode file | `ida/pseudocode.md` |
| Call-tree file | `ida/call-trees.md` |
| Evidence file | `evidence.md` (this file) |
| Depth reached | 3 (all app-level leaves terminated by depth 3-4) |
| Terminated reason | platform syscalls / crypto primitives / file I/O primitives |

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim4 partial RelayExportProvider sub-DTO + dim5 win Unknown 阻塞升档）

### happy_path
- 输入 `{filePath:"<临时路径>/out.json", includeApiKeys:true}`
- 返回 CoreEnvelope<ExportResult> {file_path, provider_count, include_api_keys}
- 导出 JSON 顶层 keys：exportedAt / exportedBy="AiMaMi 1.1.1" / includeApiKeys / providers / filePath
- 副作用：读 keys/<provider_id>（sha256 + base64 decode）→ macOS Keychain fallback → write_key_file → atomic_write (tmpfile→rename) → set_permissions → log

### boundary/error
- filePath 父目录无法创建 → CoreError（atomic_write 失败）
- rename 失败 → CoreError（tmpfile 被清理）
- set_permissions 失败 → Ok（仅 WARN log，不传播）
- includeApiKeys=false → 无 keychain 无 set_permissions，仅 atomic_write

### side_effect_asserts
- filePath 文件存在且包含 exportedBy="AiMaMi 1.1.1"（12B @0x100547617）
- 写入为原子操作（tmpfile+rename，不产生损坏中间文件）
- includeApiKeys=true 时文件有 chmod；includeApiKeys=false 时无

### test_mapping
- unit: export_to_file (mocked atomic_write + mocked keychain)；exportedBy 版本字符串；providers sub-DTO ide+baseUrl
- e2e: 真实文件系统（不含 Keychain）；atomic rename 完整流程
- explicit_non_automatable_accept: macOS Keychain get（需 entitlements + 用户授权）

### dim6_basis
evidence.md Delta 1-5 节（VA 0x1006c86a0/0x10041e960/0x100547617）; Side-Effects Summary 表; IPC Contract 节
