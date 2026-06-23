# Evidence: command=clean (AiMaMi 1.1.1 macOS ARM64)

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-16
binary: AiMaMi 1.1.1 universal (macOS ARM64)
source_binary_sha256: (IDB path: <来源位置>/raw/binary/AiMaMi-1.1.1-idb)
ida_hexrays_ready: true
ida_uptime_sec: 22325
module: codexmate_lib::commands::system

---

## Confirmed

- Owner function: `codexmate_lib::commands::system::clean` @ `0x10061f140`, size=0x2e8=744B, has_type=true
- Dispatcher xref: single caller @ `0x100305c34` inside `codexmate_lib::run::{{closure}}` (Tauri command registration). Confirms IPC routing — command name "clean" is not a rodata string; it is dispatched via closure registration.
- arg_keys: [] (zero-arity; no frontend parameters). Command wrapper takes `a2 = &Repository` state (behind mutex), `a1 = response out-ptr`.
- Mutex acquisition pattern: `OnceBox::initialize` (lazy init) + `Mutex::lock` → core call → `Mutex::unlock`. Panic-count guard: if `is_zero_slow_path` fails (panicking), emits panic-in-cleanup error string, unlocks, returns early.
- Core implementation: delegates immediately to `codexmate_lib::core::repository::Repository::clean` @ `0x1004d1210`, size=0x3bf4=15348B, has_type=true.
- Registry file read: `Repository::load_registry` @ `0x1004bf8e0` reads `registry.json` from path at `(repository+224, len=repository+232)` via `std::fs::read_to_string::inner` + `serde_json::de::from_trait`. Returns discriminant 10=Ok, 2=IoError, 3=ParseError.
- Account retain filter: `Vec<RegistryItem>::retain` @ `0x100647050` — iterates registry items (stride=360B per RegistryItem); for each item, calls `std::sys::fs::metadata` on `item[offset_160]` (the codex_path string). Items where metadata succeeds (codex dir still exists) are kept; items where path is gone are dropped. This removes stale accounts.
- HashMap of kept account keys built via `hashbrown`: iterates retained items, clones each `String` key, inserts into HashMap. Used to match quota entries against retained accounts.
- Two directory scan+delete loops: `Repository::clean` calls `std::sys::fs::metadata` on `(repository+272, len=repository+280)` and `(repository+296, len=repository+304)` — these are two sub-directories (likely sessions dir and a tmp/cache dir). For each: if dir exists → `read_dir` → `FlattenCompat::next` iterator → `DirEntry::path` → `std::sys::fs::remove_file` per entry. Files are removed individually. Errors per-file are silently swallowed (no propagation). Counter `i` accumulates total files deleted.
- `Repository::persist_registry` @ `0x1004c3a00`: calls `CodexPaths::ensure_directories` (creates all 9 Codex dirs via `DirBuilder::create`), optionally `fs::copy` backup of existing registry (when `a4=true`), then serde_json serializes `{schemaVersion, updatedAt, activeAccountKey, items}` and calls `std::fs::write` to the registry path at `repository+216`. Returns discriminant 10=Ok, 2=IoError, 3=SerError.
- `quota_store::load` @ `0x100534ff0`: reads quota JSON file from `(repository+416, len=repository+424)` via `read_to_string + serde_json`. Returns struct with fields: `{items: Vec, updatedAt: u64, schemaVersion: i32}`.
- `Vec<QuotaItem>::retain` @ `0x100646bb0`: second retain pass filters quota items — keeps only those whose `key` field is present in the HashMap of retained account keys. Removes quota entries for deleted accounts.
- `quota_store::save` @ `0x100535100`: `Path::parent` + `DirBuilder::create`, then serde_json serializes `{schemaVersion, updatedAt, items}` + `std::fs::write` to quota path. Returns 10=Ok, 2=IoError, 3=SerError.
- Response on success path: `CoreEnvelope::ok` called with `(__dst[0]=i, __dst[1]=v98-v99[2])` where `i` = total files deleted count and `v98-v99[2]` = original_registry_count - retained_registry_count (accounts removed). Response struct is 0x60 bytes.
- Error propagation: if `persist_registry` fails → returns Err branch with 0x8000000000000000 tag in command wrapper. Error formatted via `CoreError as Display`. No `unwrap/expect/panic` in business path.
- idb_save: ok=true, path confirmed.
- append_comments: 7 addresses annotated (A-level: 0x10061f140, 0x1004d1210; B-level: 0x1004bf8e0, 0x1004c3a00, 0x100647050, 0x100534ff0, 0x100535100).

## Inferred

- The two directories at repository+272 and repository+296 are likely `sessions_dir` and a temporary/cache sub-directory within the Codex data root. Their exact string values require reading CodexPaths struct field names — the `ensure_directories` function shows 9 distinct paths are managed (offsets 25, 31, 34, 37, 43, 46, 73, 85, 88 in CodexPaths — each is a `*const str` pair). Repository offsets 272/280 and 296/304 are at indices 34 and 37 (272/8=34, 296/8=37 — matching `a1[34]` and `a1[37]` in `ensure_directories`).
- The `clean` command performs three actions atomically under repository mutex: (1) remove stale accounts from registry, (2) delete loose files in two data directories, (3) prune quota entries for removed accounts, then persist both registry and quota store.
- `updatedAt` timestamps are recorded via `SystemTime::now().duration_since(UNIX_EPOCH)` (returns u64 nanos or 0 on error) for both the registry and quota saves.
- The `v98 = v99[2]` capture before `retain` and `v98 - v99[2]` in response confirms the response `removed_accounts` field = before_count - after_count.
- The `HashMap<String>` construction is purely for O(1) quota key lookup — no mutation of registry items during this phase.
- `backup` behavior in `persist_registry`: when `a4=true`, builds backup filename via `format!("registry-{timestamp}.json")` (string `0x1010b46f6`: prefix `\tregistry-` + timestamp) and `Path::join(backup_dir, name)`, then `fs::copy(registry_path, backup_path)`. The `clean` command passes `a4=0` (false) — no backup is made.

## Unknown

- Exact string values of paths at repository+272 and repository+296 (session dir and second dir) — not read as string constants in this decompile pass; require reading CodexPaths path fields from initialization. Classified as `accepted_unknown` (non-critical: behavior is `read_dir + remove_file` regardless of exact path; side-effect is confirmed as fs::remove_file on all entries).
- Windows platform behavior: Windows IDB not checked this session. Platform gate = macOS confirmed; Windows Unknown.
- Frontend CCF (dim1): not checked in this backend-only pass. arg_keys=[] (zero-arity) from both 逆向分析 evidence and 1.0.9 baseline; frontend wrapper expected as `clean:()=>ne("clean",{})` but not confirmed from 1.1.1 frontend bundle. Classified as `accepted_unknown` (backend-only pass scope).
- Exact RegistryItem struct layout at offset 160 (codex_path field) — inferred from `v2[20]` offset in retain loop (20 * 8 = 160B), consistent with 360B stride / 45-qword item.
- Exact QuotaItem key field offset and Vec stride in quota retain — inferred from 168B element size in cleanup `168 * count` dealloc.
- `CodexPaths::ensure_directories` at `a1[73]` — 9th directory created. Exact semantic not mapped. Non-critical.
- Whether `persist_registry` is called with `a4=true` (backup) in other command paths — in `clean` it is `a4=0`.
- dim6 (test/acceptance mapping): not in scope for this backend-only producer pass.
