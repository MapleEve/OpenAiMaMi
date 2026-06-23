# Pseudocode — load_mcp_servers (AiMaMi 1.1.1 win64)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
sha: d24e429a
source: 逆向分析 HexRays decompile (hexrays_ready=true)

---

## OWNER: load_mcp_servers_owner_sys @ 0x14001c4c0

```c
/*
 * load_mcp_servers — AiMaMi 1.1.1 win64 | IPC command entry point
 * 逆向分析 name: load_mcp_servers_owner_sys
 * String anchor: aLoadMcpServers @ 0x1412ac10f (xref 0x14001c547)
 * CalledFrom: tauri_ipc_main_dispatcher_sys @ 0x14000d2a0 → branch 0x14000fb74
 * delta_class: integrity_recovered vs baseline 1.0.9
 * session: wf-aimami111-delta-20260618-goldleaf
 */
__int64 __fastcall load_mcp_servers_owner_sys(__int64 a1)
{
    // Stack layout from ctx pointer (a1):
    //   a1+0   : repo path string  (520 B) → copied to v13
    //   a1+520 : base path string  (400 B) → copied to v15
    //   a1+880 : result oword (used in error fast-path)
    //   a1+896 : err_b
    //   a1+920 : writtenAt oword  (dropped at cleanup)
    //   a1+936 : version count

    _BYTE v13[512];   // repo path
    char  v15[384];   // base path
    __int128 v34;     // writtenAt oword (a1+920)
    __int64  v35;     // version count   (a1+936)

    sub_141212FB0(v13, a1, 520);       // memcpy repo_str
    sub_141212FB0(v15, a1 + 520, 400); // memcpy path_str
    v35 = *(_QWORD *)(a1 + 936);
    v34 = *(_OWORD *)(a1 + 920);

    // Trace span: name="load_mcp_servers", field: repo=v13
    // (v19=aLoadMcpServers, v20/v21/v22 = span field tuple)
    v19 = (__int64)aLoadMcpServers; // 0x14001c547

    // Acquire pending-auto-switch state lock
    __int64 v2 = pending_auto_switch_state_lock_acquire_111(v14 + 16); // 0x14001c599
    if (!v2) {
        // Lock acquired: query installed skills filtered by repo
        query_installed_skills_with_repo_111(&v28, &v19, (char *)&v20 + 8); // 0x14001c5c0
        if ((_BYTE)v28 != 6) {
            // tag≠6 means Err — dispatch error result immediately
            sub_14080C3C0(v12, v16, &v19, &v31, v17, v18); // 0x14001c785
            goto LABEL_16;
        }
        v2 = *((_QWORD *)&v28 + 1); // extract skill list pointer from Ok(v2)
    }

    // Write snapshot (NEW in 1.1.1 — entire callee chain absent from 1.0.9)
    load_mcp_servers_write_snapshot_111(&v24, v2); // 0x14001c5eb

    // Copy result path context
    sub_141212FB0(&v19, a1 + 520, 400); // 0x14001c601

    if (__OFSUB__(0, v24)) {
        // Err result: build error string via sub_140E30410, then dispatch
        // [error path: alloc/copy error payload, set v28 tag=0x8000000000000000]
        // ... (error construction detail omitted for brevity)
        goto LABEL_14;
    }

    // Ok: copy 144 bytes of result
    sub_141212FB0(&v28, &v24, 144); // 0x14001c65d

LABEL_14:
    // Dispatch result (Ok or Err) to IPC resolver
    load_mcp_servers_result_dispatch_111(&v19, &v28); // 0x14001c6ef

LABEL_16:
    // Cleanup: drop writtenAt Vec (stride=96 per element)
    // Loop: has_notch_arc_listener_drop_loop x v34-count + free(ptr, 96*count, 8)
    if (!__OFSUB__(0, (_QWORD)v34)) {
        __int64 v9 = *((_QWORD *)&v34 + 1);
        while (v36 != v37) {
            ++v37;
            has_notch_arc_listener_drop_loop(); // 0x14033ab50
        }
        if ((_QWORD)v34)
            sub_140001370(*((_QWORD *)&v34 + 1), 96 * v34, 8);
    }
    return sub_140042650(v13); // finalize IPC response
}
```

---

## WRITE SNAPSHOT: load_mcp_servers_write_snapshot_111 @ 0x1401c42c0

```c
/*
 * Side effects:
 *   1. mcp_config_toml_parse_and_remove_111: reads+rewrites MCP TOML (atomic)
 *   2. win32_file_read_bytes_111: reads existing snapshot JSON from disk
 *   3. win32_file_write_bytes_111: writes new snapshot JSON to disk
 * All three side effects NEW in 1.1.1 vs 1.0.9.
 *
 * Additional new callee vs sweep session: mcp_config_toml_parse_and_remove_111
 * (was missing from original call-tree.md — discovered by gold-leaf decompile).
 */
__int64 __fastcall load_mcp_servers_write_snapshot_111(__int64 a1, __int64 *a2, __int64 a3)
{
    // Mutex guard on a2 (pending snapshot mutex)
    // _InterlockedCompareExchange8: tries to set lock byte from 0→1
    if (_InterlockedCompareExchange8((volatile signed __int8 *)a2, 1, 0)) {
        // Already held: wait via sub_14124A510 (WaitOnAddress pattern)
        sub_14124A510(a2);
    }

    // Check MCP config flag: 2 * *off_141899DC0
    v4 = off_141899DC0;
    if (2 * *off_141899DC0) {
        v16 = sub_14124B1D0(...); // config enabled-check
        // if disabled → set lock byte=0, WakeByAddressSingle, return Err sentinel
    } else if (*((_BYTE *)a2 + 1)) {
        // Poisoned lock: build PoisonError from "poisoned lock: another task failed inside"
        // Returns Err oword @ v3 with tag=0x8000000000000000
        return v3; // Err(PoisonError)
    }

    // --- Step 1: Parse & remove from TOML ---
    v17 = a2[10]; // path ptr (offset +80)
    v18 = a2[11]; // path len (offset +88)
    mcp_config_toml_parse_and_remove_111(v43, v17, v18); // 0x1401c4461
    // tag=10 means Ok(parsed_mcp_servers); anything else → Err path:
    //   usage_fetch_error_drop_111 + sub_140243FC0 → return Err oword
    if (*(_DWORD *)v43 != 10) {
        // Error: drop v43, dispatch Err
        usage_fetch_error_drop_111(v43);
        goto LABEL_31; // Err path
    }

    // --- Step 2: Timestamp gate (before read) ---
    *(_DWORD *)v43 = system_time_precise_u32_111(); // 0x1401c4518
    elapsed_since_ts_111(&v37, v43, 0xD53E8000, 27111902); // ~500ms threshold
    v22 = v37.m128i_i8[0] ? 0 : v37.m128i_i64[1]; // timeout elapsed value or 0

    // --- Step 3: Path gate ---
    v27 = relay_config_check_parent_dirs_sys((_QWORD *)Address + 1); // 0x1401c46c5
    if (v27) {
        // Path outside expected root → Err(2=IoError)
        *(_QWORD *)&v55 = 2;
        *((_QWORD *)&v55 + 1) = v27;
        goto LABEL_31;
    }

    // --- Step 4: Read existing snapshot ---
    v28 = *((_QWORD *)Address + 78); // file_handle
    v29 = *((_QWORD *)Address + 79); // path_len
    load_mcp_servers_read_existing_snapshot_111(v43, v28); // 0x1401c4710

    // --- Step 5: Second timestamp gate (after read) ---
    LODWORD(v55) = system_time_precise_u32_111(); // 0x1401c4723
    elapsed_since_ts_111(&v37, &v55, 0xD53E8000, 27111902);
    v31 = v37.m128i_i8[0] ? 0 : v37.m128i_i64[1];

    // Prep merge state
    *(_QWORD *)v43 = 1;
    *(_QWORD *)&v43[8] = v31;

    // --- Step 6: Merge new McpServer list into existing snapshot ---
    // mcp_server_array_clone_stride224_sys: clones incoming Vec<McpServer> (stride=224)
    // copying all fields including +216(enabled), +217(transport) into fresh allocation
    mcp_server_array_clone_stride224_sys(&v57, &v59); // 0x1401c4788

    // --- Step 7: Context assembly (sub_1410A2210: path/timestamp merge) ---
    sub_1410A2210(&v55, &v60.m256i_u64[1]); // 0x1401c47aa

    // --- Step 8: Serialize snapshot to JSON ---
    sub_141212FB0(&v37, (const __m128i *)v43, 0x398u);
    serialize_skill_snapshot_json_111(&v55, (__int64)&v37); // 0x1401c484f
    if (__OFSUB__(-(__int64)v55, 1)) {
        // SerializationFailed
        *(_QWORD *)&v55 = 3;
        sub_1401D6610(&v37); // drop partial snapshot
        goto LABEL_31;
    }

    // --- Step 9: Write to disk ---
    sub_1401D6610(&v37);
    v33 = win32_file_write_bytes_111(v28, v29, v64, v32); // 0x1401c48cc
    if (*((_QWORD *)&v64 + 1))
        sub_140001370(v64, *((_QWORD *)&v64 + 1), 1); // free json buf
    if (v33) {
        // Write failed → Err(2=IoError)
        *(_QWORD *)&v55 = 2;
        goto LABEL_31;
    }

LABEL_32:
    // Assemble final Ok result (sub_140214B80: result struct builder)
    sub_140214B80(&v37, v43); // 0x1401c4962
    sub_141212FB0((__m128i *)v3, &v37, 0x90u);
    // Release mutex: *Address = 0; if was 2 → WakeByAddressSingle
    v34 = Address;
    v35 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if (v35 == 2) WakeByAddressSingle(v34);
    return v3; // Ok

LABEL_31:
    usage_fetch_error_drop_111(&v55);
    goto LABEL_32;
}
```

---

## TOML PARSER: mcp_config_toml_parse_and_remove_111 @ 0x1406790d0

```c
/*
 * Reads MCP config TOML file, parses [mcp_servers.<name>] sections,
 * extracts per-server subkeys (command, transport, env, headers),
 * removes the target section, then atomically rewrites file via
 * relay_atomic_write_leaf_sys (CreateFile/WriteFile/CloseHandle).
 * tag=10 on Ok; other values on error.
 *
 * Called from: load_mcp_servers_write_snapshot_111 @ 0x1401c42c0
 * Side-effect: disk read (win32_file_read_bytes_111) + atomic write (relay_atomic_write_leaf_sys)
 *
 * Callees (gold-leaf confirmed):
 *   snooze_file_open_111     @ 0x14108c6f0  [file open helper]
 *   win32_file_read_bytes_111 @ 0x141093260  [platform read]
 *   sub_141095530            [TOML token parser]
 *   sub_141077010            [TOML key extractor]
 *   sub_1402F87A0            [section builder]
 */
_QWORD *__fastcall mcp_config_toml_parse_and_remove_111(_QWORD *a1, __int64 a2, __int64 a3)
{
    // 1. Open config file via snooze_file_open_111
    snooze_file_open_111(...);

    // 2. Read file bytes: win32_file_read_bytes_111
    win32_file_read_bytes_111(...);

    // 3. Parse TOML tokens: sub_141095530
    //    Iterates [mcp_servers.<name>] sections
    //    For each section: extract subkeys via sub_141077010

    // 4. Remove target section, rebuild TOML document: sub_1402F87A0

    // 5. Atomic write-back: relay_atomic_write_leaf_sys
    //    (CreateFile → WriteFile → CloseHandle sequence)

    // Returns: *a1=10 (Ok) with parsed server list; else error tag
}
```

---

## READ EXISTING SNAPSHOT: load_mcp_servers_read_existing_snapshot_111 @ 0x1401bf000

```c
/*
 * Reads existing snapshot JSON from disk, deserializes into BootstrapStatePayload.
 * Returns sentinel zeroed struct (tag=0, offsets +696/+792/+856 = 0x8000000000000000)
 * on file-missing or parse-error.
 *
 * Confirmed sentinel offsets from 逆向分析 decompile:
 *   +696 → 0x8000000000000000  (usageAnalytics = None)
 *   +792 → 0x8000000000000000  (mcpServers = None)
 *   +856 → 0x8000000000000000  (installedSkills = None)
 */
__int64 __fastcall load_mcp_servers_read_existing_snapshot_111(__int64 a1, __int64 a2, __int64 a3)
{
    win32_file_read_bytes_111(&v11, a2, a3); // read raw bytes
    if (__OFSUB__(-v11, 1)) {
        // File missing/unreadable: sub_140041790 (drop empty), return sentinel
        sub_140041790(v12);
        goto LABEL_11;
    }

    // Deserialize: sub_140003600 (JSON → BootstrapStatePayload)
    sub_140003600(&v11, v13); // tag=2 on success
    v4 = v11; // result tag

    if (v11 != 2) {
        // Parse failed: copy raw bytes, return with original tag
        sub_141212FB0(v10, v12, 0x398u);
        if (v15) sub_140001370(v14, v15, 1);
        goto out;
    }

    // tag=2: check inner Ok variant
    v5 = *(_QWORD *)v12[0].m128i_i64[0];
    v16 = v12[0].m128i_i64[0];
    if (v5 == 1) {
        sub_140041790(v12[0].m128i_i64[0] + 8); // drop Err inner
    } else if (!v5) {
        // None variant: free bytes
        v7 = *(_QWORD *)(v16 + 16);
        if (v7) sub_140001370(*(_QWORD *)(v16 + 8), v7, 1);
    }
    sub_140001370(v16, 40, 8); // free outer

    // Copy deserialized struct (0x390 bytes) to output
    if (v15) sub_140001370(v14, v15, 1);
out:
    if ((_DWORD)v4 != 2) {
        sub_141212FB0((__m128i *)(a1 + 8), v10, 0x390u);
        *(_QWORD *)a1 = v4;
        return a1;
    }

LABEL_11: // sentinel path
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 3;
    *(_QWORD *)(a1 + 696) = 0x8000000000000000ULL;  // usageAnalytics = None
    *(_QWORD *)(a1 + 792) = 0x8000000000000000ULL;  // mcpServers = None
    *(_QWORD *)(a1 + 856) = 0x8000000000000000ULL;  // installedSkills = None
    return a1;
}
```

---

## MCP SERVER ARRAY CLONE: mcp_server_array_clone_stride224_sys @ 0x140361ef0

```c
/*
 * Clones Vec<McpServer> with stride=224. Allocates fresh buffer, copies each
 * McpServer entry field-by-field (verified stride from loop: v5 += 224).
 * Copies enabled(+216), transport(+217) — new 1.1.1 fields — in the loop.
 *
 * Previously unnamed: renamed to mcp_server_array_clone_stride224_sys
 * in this session (was sub_140361EF0).
 */
_OWORD *__fastcall mcp_server_array_clone_stride224_sys(__int64 a1, __int64 a2)
{
    v2 = *(_QWORD *)(a2 + 16); // element count
    v3 = 224 * v2;             // total byte size
    // capacity overflow check: v2 > 0x92492492492492
    v5 = *(_QWORD *)(a2 + 8);  // source ptr
    // alloc: sub_140001360(224 * v2, 8)

    for each element (stride 224):
        // Clone each field:
        sub_1410A2210(&v32, v5);         // name string clone (+0)
        v12 = *(_BYTE *)(v5 + 216);     // enabled
        v13 = *(_BYTE *)(v5 + 217);     // transport
        sub_1410A2210(&v30, v5 + 24);   // sourcePath (+24)
        // command (+72): Option clone
        // args   (+48): Option<Vec> clone via sub_1403654F0
        // url    (+96): Option clone
        // headers   (+120): HashMap clone via sub_140081E00
        // environment (+168): HashMap clone via sub_140081E00

        // Write to dest[i * 224 + field_offset]
        *(_BYTE *)(v7 + v18 + 216) = v12; // enabled
        *(_BYTE *)(v7 + v18 + 217) = v13; // transport
        v5 += 224;

    // Set result Vec header: ptr + len + cap
    *(_QWORD *)(v40 + 16) = v41;
    *result = v34;
    return result;
}
```
