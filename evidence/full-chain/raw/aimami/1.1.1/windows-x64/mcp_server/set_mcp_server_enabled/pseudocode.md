# set_mcp_server_enabled — Windows x64 Pseudocode (Gold Leaf)
session: wf-aimami111-delta-20260618-goldleaf
delta_class: integrity_recovered
machine: <本地机器>
platform: windows-x64
binary: AiMaMi 1.1.1 win64.exe
idb: <本地路径>
sha: d24e429a

---

## Handler: set_mcp_server_enabled_handler_111
VA: 0x14001dcc0  size: 0x5CE

IPC params: `{ name: str, enabled: bool, repo: str }`
Returns: `Ok(McpConfigPayload)` or `Err` via IPC response helpers.

**dim1 note — CCF gap**: Frontend `mcpApi.tsx` line 32 sends only `{ name, enabled }` (no `repo`).
The 1.1.1 Rust handler parses `repo` via `aRepo`@0x1412AC6D1. This means `repo` may default
to empty-string / None in the current frontend integration; the Rust handler path that calls
`query_installed_skills_with_repo_111` will receive an empty repo and may early-error or skip
the repo-validation branch entirely when repo == "". This is an integration-contract delta gap
introduced by 1.1.1 — the `repo` param was not backported to the frontend call-site.

```c
// Param descriptors: aSetMcpServerEn@0x1412AC130 = "set_mcp_server_enabled" (len=22)
//                   aRepo@0x1412AC6D1 = "repo" (len=4)
//                   aName_0@0x1412AC732 = "name" (len=4)
//                   aEnabled@0x1412AC720 = "enabled" (len=7)

__int64 __fastcall set_mcp_server_enabled_handler_111(__int64 ipc_ctx) {
    // sub_141212FB0: IPC context copy (size=0x208 and 0x190 for request/session slots)
    sub_141212FB0(v18, (const __m128i*)ipc_ctx, 0x208u);         // copy request block
    sub_141212FB0(v23, (const __m128i*)(ipc_ctx + 520), 0x190u); // copy session block

    // Set up param descriptor for "repo" (len=4)
    v29 = (int64_t)aSetMcpServerEn;   // command name = "set_mcp_server_enabled"
    v30[0] = 22;                       // command name len
    v30[1] = (int64_t)aRepo;          // param name = "repo"
    v30[2] = 4;                       // param name len
    v30[3] = (int64_t)v18;            // request block ptr

    // [DELTA vs 1.0.9 - NEW] Acquire pending-auto-switch state lock.
    // ipc_state+16 is the auto-switch guard mutex.
    // Returns 0 (no pending switch → lock acquired) or non-zero (blocked).
    int64_t pending_lock_result = pending_auto_switch_state_lock_acquire_111(
        (char*)(v19 + 16), ...);

    if (!pending_lock_result) {
        // [DELTA vs 1.0.9 - NEW] Validate repo param → installed skills registry.
        // v39 is the Result<SkillRef,Err> output buffer (32 bytes, disc at [0]).
        query_installed_skills_with_repo_111(
            (int64_t)&v39,           // out: Result<SkillRef,Err>
            (int64_t)&v29,           // cmd descriptor
            (int64_t)&v30[1]);       // repo param descriptor

        if (v39[0] != 6) {           // disc != 6 → Err (repo not found)
            // Encode error, call IPC error responder (sub_14080C3C0 = has_notch_invoke_resolver_respond)
            sub_14080C3C0(v17, v24, &v29, &v37, v25, v26);
            goto cleanup;
        }
        pending_lock_result = v39[1]; // Some(SkillRef) value
    }

    // Set up param descriptor for "name"
    v29 = (int64_t)aSetMcpServerEn;
    v30[0] = 22;
    v30[1] = (int64_t)aName_0;  // "name"
    v30[2] = 4;
    v30[3] = (int64_t)v18;

    // sub_1402FED40 = remove_skill_parse_id_param_111 (reused: parses a string IPC param)
    // Output in v40: disc at [0], value ptr at [1..2], len at ...
    sub_1402FED40((int64_t)&v40, &v29);

    if (v40[0] == 6) {    // Ok(name_str)
        // Save name slice: ptr at v42 (=v40[1..]), len at v43 (=v40[3])
        v43 = v40[3];
        v42 = *(__m128i*)(&v40[1]);  // 16-byte name slice (ptr, len)

        // Set up param descriptor for "enabled" (type=7 = bool)
        v30[1] = (int64_t)aEnabled;  // "enabled"
        v30[2] = 7;                  // bool type tag

        // parse_bool_from_ipc_arg_sys: parses bool IPC param
        parse_bool_from_ipc_arg_sys((int64_t)&v27, &v29);

        if (v27[0] == 6) {   // Ok(bool)
            // Delegate to core with: repo_ref, name_slice, enabled_u8
            set_mcp_server_enabled_core_111(
                &v20,                   // out: Result (0x150 bytes)
                pending_lock_result,    // config_lock (from lock acquire or skill_ref)
                &v42,                   // name slice {ptr, len}
                v27.u8[1]);             // enabled bool value

            // sub_140830710: IPC ok response serializer
            sub_140830710(&v29, &v27);
        } else {
            sub_14080C3C0(v16, v24, &v29, &v35, v25, v26); // bad enabled param
            // Drop name slice
            if (v42) sub_140001370(*(v42+8), v42, 1);
        }
    } else {
        sub_14080C3C0(v16, v24, &v29, &v35, v25, v26);  // bad name param
    }

cleanup:
    // Drop pending-lock repo ref if held
    // Drop IPC context copies
    // sub_14033AB50 = has_notch_arc_listener_drop_loop (Arc drop loop)
    // Iterate arc listeners and drop each
    // sub_140042650: IPC context finalizer / cleanup
    return sub_140042650((int64_t)v18);
}
```

---

## Core: set_mcp_server_enabled_core_111
VA: 0x1401c6c70  size: 0x796

Side-effects:
- Acquires RwLock on MCP config state (InterlockedCompareExchange8 spinlock)
- Reads codex-router TOML via `mcp_config_toml_parse_and_remove_111`
- Rewrites `[mcp_servers.<name>]` section `enabled` field via `mcp_server_find_and_rewrite_toml_111`
- Persists via `relay_atomic_write_leaf_sys` (atomic temp+rename pattern)
- Releases RwLock via `WakeByAddressSingle`
- Drops name slice ref

```c
__int64 __fastcall set_mcp_server_enabled_core_111(
        __int64 out,          // output Result buffer (0x150 bytes)
        __int64 config_lock,  // RwLock ptr (from pending_auto_switch lock or skill_ref)
        _QWORD* name_slice,   // {ptr, len} of server name
        char enabled)         // bool: true=enable, false=disable
{
    // off_141899DC0 = threading mode flag (non-zero = multi-threaded unlock path)
    __int64* v7 = off_141899DC0;

    // Acquire RwLock (InterlockedCompareExchange8: try set byte at config_lock from 0→1)
    if (_InterlockedCompareExchange8((volatile signed __int8*)config_lock, 1, 0))
        sub_14124A510((volatile void*)config_lock);  // WaitOnAddress spinwait

    // Check poison flag at config_lock[1]
    if (2 * *off_141899DC0) {
        // Multi-threaded path: check for poisoned mutex
        int v17 = sub_14124B1D0(a1, config_lock, name_slice);
        v17 ^= 1;
        if (config_lock[1] /* poisoned */) goto LABEL_POISON;
    } else {
        if (config_lock[1] /* poisoned */) {
LABEL_POISON:
            // Build Err payload for poisoned lock:
            // sub_1410B1930 = panic/poison-guard handler
            // aPoisonedLockAn@0x1412E6BB3 = "poisoned lock: another task failed inside"
            sub_1410B1930((int64_t)aPoisonedLockAn, 41, (int64_t)v39);
            // sub_140243FC0: encode Err discriminant into output
            sub_140243FC0(&v40, &v62);
            // release lock, return Err
            *config_lock = 0;
            if (*config_lock == 2) WakeByAddressSingle(config_lock);
            goto cleanup;
        }
    }

    // Rewrite TOML enabled flag for the named MCP server:
    // config_lock[10] = TOML file path ptr
    // config_lock[11] = TOML file path len
    // name_slice[1]   = name ptr
    // name_slice[2]   = name len
    mcp_server_find_and_rewrite_toml_111(
        (int64_t)v39,          // out: Result<McpServerEntry, Err>
        config_lock[10],       // TOML path ptr
        config_lock[11],       // TOML path len
        name_slice[1],         // name ptr
        name_slice[2],         // name len
        enabled);              // bool

    int64_t rewrite_disc = *(_QWORD*)v39;  // Result discriminant

    if (__OFSUB__(-rewrite_disc, 1)) {     // Err path (disc high bit set)
        // Build Err: encode error value via sub_140243FC0
        // call usage_fetch_error_drop_111 to drop error payload
        sub_140243FC0(&v40, &v62);
        usage_fetch_error_drop_111((_QWORD*)(&v39[8]));
        // Write Err into out at offset 0 with discriminant 0x8000000000000000
        *out = 0x8000000000000000ULL;
        // ... encode Err fields into out[8..32]
    } else {
        // Ok path: rewrite succeeded; now parse TOML again for enabled=true
        // to build McpConfigPayload
        int64_t toml_path_ptr = config_lock[10];  // (*((_QWORD*)Address + 10))
        int64_t toml_path_len = config_lock[11];  // (*((_QWORD*)Address + 11))

        // Second TOML parse to get section list for McpConfigPayload builder:
        mcp_config_toml_parse_and_remove_111(&v40, toml_path_ptr, toml_path_len);

        if (v40[0] == 10 /* Ok discriminant */) {
            // sub_141095530: error context builder (called if sub_140243FC0 needed)
            // Build McpConfigPayload from parsed sections:
            sub_140213C70(v39, &v40);
            // Copy 0x150 bytes of payload into output
            sub_141212FB0((void*)out, (const void*)v39, 0x150u);

            // Drop parsed section list (224-byte entries)
            while (v56 != v57) { ++v57; sub_1401D5810(v28); v28 += 224; }
            if (v52) sub_140001370(v59, 224 * v52, 8);
        } else {
            // Parse error: usage_fetch_error_drop_111 + encode Err
            usage_fetch_error_drop_111((_QWORD*)&v40);
            sub_140243FC0(v39, &v62);
            *out = 0x8000000000000000ULL;
            // sub_1401D5810: drop rewrite result
            sub_1401D5810(&v35);
        }
    }

    // Release RwLock
    *config_lock = 0;
    if (*config_lock == 2) WakeByAddressSingle(config_lock);  // WakeByAddressSingle@0x14124A5D0

cleanup:
    // Drop name_slice ref-counted string
    if (name_slice[0]) sub_140001370(name_slice[1], name_slice[0], 1);
    return out;
}
```

---

## Key Callee: mcp_server_find_and_rewrite_toml_111
VA: 0x140680220  size: 0x2B8

Purpose: Parse TOML, find named server, call section writer. Returns Ok(()) or Err(not_found).

```c
__int64 __fastcall mcp_server_find_and_rewrite_toml_111(
        __int64 out,       // Result output
        __int64 toml_path, // ptr to TOML path string
        __int64 path_len,  // TOML path length
        __int64 name_ptr,  // server name ptr
        __int64 name_len,  // server name len
        char enabled)      // target enabled flag
{
    _QWORD name_slice[2] = { name_ptr, name_len };

    // Parse TOML config to get McpServerList
    mcp_config_toml_parse_and_remove_111(&v24, toml_path, path_len);

    if (v24 /* disc */ == 10 /* Ok */) {
        // Iterate server list entries (each 224 bytes):
        // v35 = count, v11 = base ptr
        __int64 base = *((_QWORD*)&v34 + 1);
        __int64 count = v35;
        __int64 offset = 0;

        while (offset < 224 * count) {
            // Compare name length first (fast-reject)
            if (*(base + offset + 16) == name_len) {
                // sub_141213640 = strcmp/memcmp wrapper
                if (sub_141213640(*(base + offset + 8), name_ptr, name_len) == 0) {
                    // Found! Extract McpServer entry:
                    // sub_140729FE0: extract/clone McpServer entry from list
                    sub_140729FE0(&v24, base + offset);

                    // Call TOML section writer with extracted entry
                    // enabled flag is captured in v30 = a6
                    set_codex_router_toml_section_write_win_sys(
                        out, toml_path, path_len, (int64_t)&v24);

                    // sub_1401D5810: drop extracted entry
                    sub_1401D5810(&v24);
                    goto done;
                }
            }
            offset += 224;
        }

        // Not found path:
        // byte_1412E92F8 = error message data for "server not found"
        // sub_1410A1DF0: string-into-result formatter
        // sub_140082100: standard drop vtable fn
        *(_QWORD*)&v34 = name_slice;
        *((_QWORD*)&v34 + 1) = sub_140082100;
        sub_1410A1DF0(v25, &byte_1412E92F8, &v34);
        *(_QWORD*)(out + 8) = 7;       // string error discriminant
        *(_QWORD*)out = 0x8000000000000000ULL; // Err
    } else {
        // TOML parse failed: propagate error into out
        *out = 0x8000000000000000ULL;
        // ... copy error fields
    }
done:
    // Drop server list (224 * count bytes)
    if (v32) sub_140001370(base, 224 * v32, 8);
    return out;
}
```

---

## Key Callee: set_codex_router_toml_section_write_win_sys
VA: 0x14067ca20  size: 0x1D44

Purpose: Open TOML, scan for managed-marker boundaries, splice updated sections list, write atomic.

Managed marker strings confirmed in binary:
- `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` @0x1412E941C (len=64)
- `# <<< aimami-relay codex-router top end` @0x1412EA00D (len=39)
- `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` @0x1412E9348 (len=55)
- `# <<< aimami-relay managed end` @0x1412E9FCB (len=30)
- `# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)` @0x1412E93E0 (len=60)
- `# <<< aimami-relay managed end (top)` @0x1412E9FE9 (len=36)

```c
__int64 __fastcall set_codex_router_toml_section_write_win_sys(
        __int64 out,         // result output
        __int64 toml_path,   // TOML file path ptr
        __int64 path_len,    // TOML file path len
        __int64 entry_ptr)   // McpServer entry (extracted, with enabled field)
{
    // 1. Open TOML file (retry-on-lock pattern):
    snooze_file_open_111(&v238, toml_path, path_len);

    if (v238[0] == 2 /* file-not-found */) {
        // New file: initialize empty content
        sub_1402F87A0(v238[1]);  // close handle if open
        v251 = 0;                // zero bytes
    } else {
        // Read existing TOML bytes:
        win32_file_read_bytes_111(&v238, toml_path, path_len);
        if (result_is_err) goto error_out;
        v251 = v238[0];  // existing content length
    }

    // 2. Build new section list from current config state:
    //    mcp_server_list_build_toml_sections_111: builds vector of TOML section strings
    //    each entry: [command, enabled, env, headers] per [mcp_servers.<name>]
    mcp_server_list_build_toml_sections_111(&v226, v7 /*content ptr*/, v8 /*content len*/);

    // 3. Build "enabled" flag line for the specific entry:
    //    entry_ptr+216 = enabled byte (0=false, 1=true, 2=transport-only?)
    //    unk_1412E85F8 = "false", unk_1412E85FD = "true" (bool string literals)
    void* bool_str = (*(byte*)(entry_ptr + 216)) ? &unk_1412E85FD : &unk_1412E85F8;
    // ... build "enabled = true/false" TOML line, insert into section list

    // 4. Handle env and headers fields:
    //    entry_ptr+72..88 = env map, entry_ptr+96..112 = headers map
    //    Builds "env" and "headers" sections via sub_14070B280 (entry-to-TOML formatter)
    //    and sub_140311F60 (string list builder)

    // 5. Scan existing content for managed marker boundaries:
    //    sub_140624F90 = hash function for hashmap lookup
    //    sub_141213640 = strcmp (compare marker lines)
    //    Switches on string lengths to identify start/end markers:
    //      case 64: "# >>> aimami-relay codex-router top start..."
    //      case 39: "# <<< aimami-relay codex-router top end"
    //      case 55: "# >>> aimami-relay managed start..."
    //      case 30: "# <<< aimami-relay managed end"
    //      case 60: "# >>> aimami-relay managed start (top,...)"
    //      case 36: "# <<< aimami-relay managed end (top)"
    //    v116 tracks whether inside a managed block

    // 6. Splice: sub_1403654F0 (line splitter), sub_140678BF0 (section splicer)
    //    Insert new section list between managed marker boundaries.

    // 7. Serialize final TOML list:
    //    sub_14033EB00: serialize section list to string buffer

    // 8. Atomic write:
    relay_atomic_write_leaf_with_newline_111(
        (uint)&v238, toml_path, path_len,
        v252[2] /*content ptr*/, v257 /*content len*/);

    if (v238[0] == 10 /* Ok */) {
        // 9. Re-parse TOML after write to return updated McpServerListPayload:
        mcp_config_toml_parse_and_remove_111(&v238, toml_path, path_len);
        if (v238[0] == 10) {
            // Find the named entry in newly parsed list and copy into output
            // (searches by name using sub_141213640)
            sub_141212FB0(out, &v238, 224);  // copy found entry into out
        } else {
            // Parse after write failed: propagate error
            *out = 0x8000000000000000ULL;
        }
    } else {
        // Write failed: propagate write error
        *out = 0x8000000000000000ULL;
    }

    return out;
}
```

---

## Key Callee: pending_auto_switch_state_lock_acquire_111 [NEW vs 1.0.9]
VA: 0x14006edc0  size: 0x1E7

Purpose: Windows futex-style spinlock guard — blocks set_mcp_server_enabled if an auto-switch
operation is pending. Returns 0 (no pending switch, lock acquired) or non-zero (blocked, caller
must return error without touching MCP config).

```c
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(
        char* Address,  // mutex byte ptr (ipc_state + 16)
        __int64 a2,
        __int64 a3)
{
    // Acquire mutex byte: CAS 0→1
    if (_InterlockedCompareExchange8(Address, 1, 0))
        sub_14124A510(Address);  // WaitOnAddress spinwait

    // Check thread mode (off_141899DC0)
    if (!(2 * *off_141899DC0)) {
        // Check poison flag
        if (Address[1]) goto PANIC_UNWRAP;

        // LABEL_5: check if auto-switch pending
        if (*((_QWORD*)Address + 4) /* pending_count != 0 */) {
            // Pending auto-switch found — extract pending state:
            __int64 pending_state_ptr = *((_QWORD*)Address + 1);  // state ptr
            __int64 pending_mask      = *((_QWORD*)Address + 2);  // hash mask

            // SIMD hashmap scan for pending entries:
            // xmmword_14124E090, xmmword_14124E0A0 = sentinel values
            // Uses _mm_cmpeq_epi8 + _mm_movemask_epi8 to find matching slot
            // tzcnt to find lowest set bit
            // Each entry is 32 bytes: [-32] = content ptr, [-16..] = vtable ptr

            // Dispatch to vtable offset +24 (pending-state handler):
            (*(void (__fastcall**)(char**, int64_t, int64_t))
                (*entry_vtable + 24))(&v23, pending_state_ptr, a3);

            // v16 = result of handler dispatch
            v22 = *Address;
            *Address = 0;
            if (v22 == 2) goto LABEL_19;  // wake waiters
        } else {
            // No pending auto-switch: return 0 (lock acquired, caller may proceed)
            v16 = 0;
            v17 = *Address;
            *Address = 0;
            if (v17 == 2) {
LABEL_19:
                WakeByAddressSingle(Address);  // @0x14124A5D0
            }
        }
    } else {
        // Multi-thread path via sub_14124B1D0
        v6 = sub_14124B1D0(Address, a2, a3);
        v6 ^= 1;
        if (Address[1]) {
PANIC_UNWRAP:
            // aCalledResultUn@0x1412ADA10 = "called `Result::unwrap()` on an `Err` value"
            sub_14124BFE0(aCalledResultUn, 43, &v23, &off_1412ADB00, &off_1412AEEC0);
        }
    }
    return v16;  // 0 = proceed; non-zero = blocked (auto-switch pending)
}
```

---

## Key Callee: query_installed_skills_with_repo_111 [NEW vs 1.0.9]
VA: 0x141214620  size: 0xBF

Purpose: Look up an installed MCP/skill entry by `repo` string. Returns Result with disc=3 (Some)
or disc-0 not-found. Actually from decompile, sets `*a1 = 3` unconditionally before returning —
this may be a fixed "pending" discriminant or a simplified check. The return from
`sub_14106D970` (= `skill_store_get_all_111` result consumer) provides the real Option.

```c
__int64 __fastcall query_installed_skills_with_repo_111(
        __int64 out,  // output Result/Option buffer
        __int64 cmd,  // command descriptor (for error context)
        __int64 repo) // repo string ptr
{
    // Build lookup key from repo and cmd:
    // sub_140082100 = standard drop fn vtable
    // unk_1412B0057 = lookup spec / key template
    v9[0] = repo;
    v9[1] = (int64_t)sub_140082100;
    v9[2] = cmd;
    v9[3] = (int64_t)sub_140082100;
    sub_1410A1DF0(v6, &unk_1412B0057, &v9);

    // sub_141222DD0: build skill lookup key from descriptor
    v10[0] = sub_141222DD0(v6);

    // skill_store_get_all_111@0x14106D960: fetch all installed skills from store
    // unk_1412AE72B = "get_all" query spec
    v9[0] = (int64_t)v10;
    v9[1] = (int64_t)skill_store_get_all_111;
    sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);

    // Write result discriminant: 3 = Some (found), caller checks
    // sub_14106D970 = result consumer / Option extractor
    *(_BYTE*)out = 3;
    *(_OWORD*)(out + 1)  = *(_OWORD*)v9.i8;
    *(_OWORD*)(out + 16) = v4 /* kr00_16 */;
    return sub_14106D970(v10);  // returns 0 or skill_ref value
}
```

---

## Key Callee: relay_atomic_write_leaf_sys (FS terminal leaf)
VA: 0x140504310  size: 0x48F

Module path: `codexmate_lib::core::relay::atomic_write`

Terminal leaf — no further app-level business logic below this point.

```c
__int64 __fastcall relay_atomic_write_leaf_sys(
        __int64 dir_path,     // parent directory path ptr
        __int64 dir_path_len, // parent directory path len
        __int64 content,      // content bytes ptr
        unsigned __int64 size) // content size
{
    // 1. Validate parent directory exists:
    __int64 parent = sub_14107A3E0(dir_path, dir_path_len);
    if (!parent) {
        // aAtomicWriteMis@0x1412D9476 = "atomic write: missing parent"
        return sub_141072000(20, aAtomicWriteMis, 28);  // Err
    }

    // 2. Ensure parent dir created:
    sub_141082B80(&v43, parent, ...);  // mkdir -p equivalent

    // 3. Generate unique temp filename:
    //    GetCurrentProcessId() + uuid_v4_generate_raw_sys@0x140F5A860
    //    Format: "<pid>-<uuid4>" for collision avoidance
    DWORD pid = GetCurrentProcessId();
    uuid_v4_generate_raw_sys(&v43);   // v43 = uuid bytes
    // ... build temp file path: parent/<pid>-<uuid>.tmp

    // 4. Get temp dir path for write target:
    //    sub_14107A5E0: get temp dir under parent
    //    sub_1410A9010: path joiner

    // 5. Open temp file and write:
    //    sub_141087E20: CreateFile equivalent (open for write)
    //    sub_141097C30: WriteFile loop (handles partial writes)
    HANDLE hTempFile = sub_141087E20(&v43);
    while (size > 0) {
        written = sub_141097C30(&hTempFile, content, size);  // WriteFile
        if (error) { CloseHandle(hTempFile); goto cleanup_err; }
        content += written;
        size    -= written;
    }

    // 6. Close temp file handle:
    CloseHandle(hTempFile);

    // 7. Atomic rename: temp → target path
    //    sub_140504130: rename/MoveFileEx equivalent
    __int64 rename_result = sub_140504130(parent_buf, parent_len, dir_path, dir_path_len);

    if (rename_result) {
        // Rename succeeded → log (if verbosity > 1) then return Ok
        // aCodexmateLibCo_3@0x1412D9520 = "codexmate_lib::core::relay::atomic_write"
        // sub_14031F0B0: structured log emitter
        snooze_file_delete_111(parent_buf, parent_len);  // cleanup temp on log-after-rename
        // ... sub_1403A6670 + sub_14107AD30: final handle cleanup
    } else {
        // Rename failed → delete temp, return Ok (0)
        sub_140504900(parent, dir_path_len);
        return 0;  // Ok
    }
}
```

Error string: `aAtomicWriteMis` = "atomic write: missing parent" (at 0x1412D9476).
