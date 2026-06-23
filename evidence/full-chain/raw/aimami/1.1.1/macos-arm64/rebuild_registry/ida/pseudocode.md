# rebuild_registry — 逆向分析 Pseudocode
# session=<审计会话>  machine=<本地机器>
# delta_class=integrity_recovered  platform=macos-arm64
# IDB=<来源位置>/raw/binary/AiMaMi-1.1.1-idb

## A. IPC Handler — commands::system::rebuild_registry
**VA:** 0x1006182c0  **Size:** 0x2f7

```c
// Tauri IPC command wrapper (once-box mutex pattern)
// Returns: CoreEnvelope<RegistryFile>  or  Err(CoreError as Display string)
_QWORD *commands::system::rebuild_registry(_QWORD *a1, __int64 *a2) {
    // 1. Lazy-init OnceBox state (a2 = static state ptr)
    if (!*a2)
        OnceBox::initialize(a2);

    // 2. Acquire mutex lock (std::sys::pal::unix::sync::mutex)
    Mutex::lock();

    // 3. Panic-guard check (GLOBAL_PANIC_COUNT)
    // [compiler noise — not app delta]

    // 4. If poison flag set: return Err("Rebuild registry failed: <poison msg>")
    if (poison_flag) {
        fmt_Display_str("Rebuild registry failed: ...", formatter);
        Mutex::unlock();
        return Err(string);
    }

    // 5. Core dispatch
    Repository::rebuild_registry(result_buf, repo_ptr);

    // 6. On Err: format CoreError via Display, return Err string
    if (result == Err) {
        CoreError::fmt(err, formatter);
        unwrap_failed_or_return_err();
    }

    // 7. On Ok: copy result, unlock, return
    Mutex::unlock();
    return Ok(registry_file);
}
```

---

## B. Core Implementation — core::repository::Repository::rebuild_registry
**VA:** 0x1004c40a0  **Size:** 0x1507

```c
// Full registry rebuild from disk state
// Returns: Result<RegistryFile, CoreError>
__int64 *Repository::rebuild_registry(__int64 *out, _QWORD *repo) {
    // Step 1: ensure_directories (create dirs if absent)
    if (CodexPaths::ensure_directories(repo))
        return Err(EnsureDirFailed);

    // Step 2: load_registry — read existing registry.json for carry-over state
    load_registry(prev_registry, repo);
    // If Err: treat as empty (no carry-over state)

    // Step 3: Timestamp anchor — SystemTime::now()
    let ts_start = SystemTime::now();

    // Step 4: Load primary auth.json (repo[4], repo[5] = path ptr/len)
    load_auth_file(auth_result, repo[4], repo[5]);
    if auth_result == Err { /* skip primary, proceed to dir scan */ }
    else {
        // Step 5: make_auth_snapshot(primary auth) -> AuthSnapshot struct
        make_auth_snapshot(snapshot, auth_file, path_ptr, path_len);
        if snapshot != Err {
            // Step 6: make_snapshot_path(repo[31], repo[32]) -> sanitized backup path
            //         (@->_, /->_, :->_ substitutions on email string)
            make_snapshot_path(backup_path, repo[31], repo[32]);

            // Step 7: fs::copy(auth.json -> backup_path)  [SIDE EFFECT: creates snapshot file]
            fs::copy(primary_auth_path, backup_path);

            // Step 8: Clone display name string
            String::clone(display_name, &snapshot.account_name);

            // Step 9: Format plan_type and auth_mode as lowercase strings
            //         plan_type via PlanType::Debug fmt -> to_lowercase
            //         auth_mode via AuthMode::Debug fmt -> to_lowercase
            format!(plan_type_lower, "{:?}", snapshot.plan_type);
            to_lowercase(plan_type_lower);
            format!(auth_mode_lower, "{:?}", snapshot.auth_mode);
            to_lowercase(auth_mode_lower);

            // Step 10: Timestamp delta since ts_start
            SystemTime::now().duration_since(ts_start)

            // Step 11: Build RegistryItem struct (360-byte stride)
            //   Fields set: [0]=0 (base), [16]=1 (token_kind=primary), [24]=elapsed_secs,
            //               [32]=0, [48]=2, [88]=2
            //   [128..144]=display_name str, [136..144]=account_key str,
            //   [152..168]=snapshot_path str, [176..192]=account_id str,
            //   [200..208]=email_lower str
            //   [224..240]=plan_type_lower str, [248..264]=auth_mode_lower str
            //   [272..288]=subscription_until, [304..320]=org_id
            //   [352]=delta_marker_low=0x02, [353]=delta_marker_hi=0x02  (u16=0x0202=514)
            //   [344]=jwt_expiry_secs

            // Step 12: carry_over_registry_state(new_item, prev_item_by_account_key_match)
            //          — preserves hotspot/proxy/token fields if prev registry had this key
            carry_over_registry_state(&new_item, found_prev);

            // Step 13: push to Vec<RegistryItem> (grow_one if capacity hit)
            registry_vec.push(new_item);
        }
    }

    // Step 14: fs::metadata check on primary auth path
    //          If metadata == file: skip directory scan (single-account mode)
    //          If directory: read_dir + FlattenCompat::next iteration

    // Step 15: Directory scan loop
    while let Some(entry) = dir_iter.next() {
        let path = entry.path();
        // Filter: only .json extension (magic check: 4 bytes = 1852797802 = "nosj" LE = "json" BE)
        if path.extension() != Some("json") { continue; }

        load_auth_file(auth, path);
        if Err { continue; }

        make_auth_snapshot(snapshot, auth, path);
        if Err { continue; }

        // Dedup: if account_key already in registry_vec, free snapshot and skip
        // (linear scan by account_key string match, stride=360)
        if registry_vec.contains_key(snapshot.account_key) {
            // free duplicate fields, continue
        } else {
            // Build RegistryItem (same field layout as Step 11 above)
            // [16]=0 (not primary), all other fields same pattern
            carry_over_registry_state(&item, found_prev_by_key);
            registry_vec.push(item);
        }
    }

    // Step 16: Sort registry_vec
    //   if n >= 21: driftsort_main (Rust stable sort, 2021 edition)
    //   if n < 21:  insertion_sort_shift_left (small array fast path)

    // Step 17: persist_registry(repo, &registry_vec, /*backup=*/true)
    //          — serializes to JSON, writes to repo[27] (registry.json path)
    //          — optionally creates timestamped backup copy first
    persist_registry(result, repo, &registry_vec, true);

    // Step 18: Drop old RegistryFile, return CoreEnvelope::ok(new_registry)
    CoreEnvelope::ok(out, &registry_file)
}
```

---

## C. Leaf Functions

### carry_over_registry_state @ 0x1004d6230 (size 0x364)
```c
// Copies persistent state from old RegistryItem (a2) into new item (a1)
// Only copies a field if the new item's field is "empty" (zero/sentinel)
// Fields preserved:
//   offset 200 (display_name str) — if new[27]==0 && old[+216]!=0
//   offset 272 (str field_a)      — if new[34]==0x8000... sentinel
//   offset 296 (str field_b)      — if new[37]==0x8000... sentinel
//   offset 320 (str field_c)      — if new[40]==0x8000... sentinel
//   offset 352 (auth_status byte) — if old[+352] != 2
//   offset 353 (active_status)    — if old[+353] != 2
//   offsets 16,24 (token_count_a u64 max-merge)
//   offsets 32,40 (token_count_b u64 max-merge)
//   offsets 48 (proxy_kind), 56-80 (proxy config ptr/len/flags)
//   offsets 88 (hotspot_kind), 96-120 (hotspot config)
// RegistryItem stride confirmed: 360 bytes
void carry_over_registry_state(RegistryItem *new_item, RegistryItem *old_item);
```

### persist_registry @ 0x1004c3a00 (size 0x580)
```c
// Serializes Vec<RegistryItem> to JSON and writes to registry.json
// Serde field keys (serialize_entry calls):
//   "schemaVersion" (13)   — u32, min(version, 2)
//   "updatedAt"     (9)    — i64 (unix timestamp secs since ts_start)
//   "activeAccountKey" (16) — String (cloned)
//   "items"         (5)    — Vec<RegistryItem>
//   serialize_field: auth_mode_field (struct field)
//   serialize_field: active_flag (bool)
// SIDE EFFECT: writes <codex_paths>/registry.json (path at repo+216)
// Pre-write backup: if a4==true, copies existing registry.json to
//   timestamped path (repo[37]/repo[38] joined with elapsed_secs fmt)
// Error propagation: serde_json::ser errors returned as CoreError
Result<(), CoreError> persist_registry(repo, registry_vec, backup_flag);
```

### load_auth_file @ 0x10053ac80 (size 0x471)
```c
// Reads JSON file at (path_ptr, path_len), deserializes to AuthFile struct
// Errors: 2=file not found, 3=JSON parse error,
//         9="auth.json contains AiMaMi virtual relay key; not a real account"
//            (triggered when token starts with "<virtual-relay-key-prefix>")
Result<AuthFile, CoreError> load_auth_file(path_ptr, path_len);
```

### make_auth_snapshot @ 0x10053b9f0 (size ~large)
```c
// Extracts account metadata from AuthFile JWT claims
// JWT decode: access_token JWT -> claims dict, refresh_token JWT -> claims dict
// Field extraction (nested_dict / string_val helpers):
//   "organization_id" (27 chars) — from access_token claims
//   "plan/subscription/plan/account/plan_type/meta/plan_type" — from nested path
//   "chatgpt_account_id" (18) — string_val key
//   "user_id" (7)
//   "chatgpt_user_id" (15) — via unk_10114F9B7
//   auth_mode detection (17 chars key)
//   "chatgpt_subscription_active_until" (33) — ISO timestamp parse
// Plan normalization: parse_chatgpt_plan_label(lowercase_plan_str)
//   -> PlanType enum {free, plus, business, enterprise, edu}
// Auth expiry: file mtime check + duration_since(now) + subscription_until parse
// Output AuthSnapshot struct (152 bytes v90 size)
// DELTA: parse_chatgpt_plan_label call is NEW in 1.1.1
Result<AuthSnapshot, CoreError> make_auth_snapshot(auth_file, path);
```

### make_snapshot_path @ 0x1004bd8d0
```c
// Sanitizes email string to safe filename:
//   pass 1: @ -> _ (SIMD vectorized, xmmword_10114C460 mask)
//   pass 2: / -> _ (SIMD vectorized, xmmword_10114C480 mask)
//   pass 3: : -> _ (SIMD vectorized, xmmword_10114C4B0 mask)
// Joins sanitized name with base_path: format!("{base}/{sanitized_email}")
// Returns (ptr, len, cap) triple = String path
// NEW call site in 1.1.1 rebuild_registry (not present in 1.0.9)
String make_snapshot_path(base_ptr, base_len);
```
