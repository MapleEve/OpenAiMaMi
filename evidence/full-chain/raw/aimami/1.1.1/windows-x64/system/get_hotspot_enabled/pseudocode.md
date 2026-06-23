# get_hotspot_enabled — Windows x64 1.1.1 Pseudocode

## Owner: get_hotspot_enabled_owner_sys_111 @ 0x140021570

```c
// tauri command handler — no args, returns bool
__int64 get_hotspot_enabled_owner_sys_111(__int64 tauri_invoke_ctx) {
    // copy tauri invoke context (520B + 400B slices)
    sub_141212FB0(v13, tauri_invoke_ctx, 520);
    sub_141212FB0(v15, tauri_invoke_ctx + 520, 400);

    // build command descriptor 4-tuple:
    //   (cmd_name="get_hotspot_enabled"[19B], namespace="repo"[4B], arg_ctx, extra_ctx)
    v19 = aGetHotspotEnab;          // "get_hotspot_enabled"
    v20.len = 19;
    v20.ns_ptr = aRepo;             // "repo"
    v21.ns_len = 4;
    v21.arg_ctx = v13;              // arg deserializer context

    // lock-check / invoke resolver
    v2 = sub_14006EDC0(v14 + 16);  // acquire or check lock
    if (!v2) {
        // resolve args (no args for this command)
        sub_141214620(&v30, &v19, (char*)&v20 + 8);
        if (LOBYTE(v30) != 6) {     // 6 = Ok variant
            // error path → IPC error response
            sub_14080C3C0(v12, v16, &v19, &v24, v17, v18);
            goto LABEL_16;
        }
        v2 = ((u64*)&v30)[1];       // extract resolved arg (none here)
    }

    // core read: read HotspotConfig bool from mutex-protected settings
    sub_14060CBC0(&v26, v2);        // get_hotspot_config_core_read_sys_111

    // v26 = result: 0x8000000000000000 = None/Err, otherwise = valid Option<bool>

    // IPC response serialization
    sub_14082F2D0(&v19, &v30);      // tauri_ipc_response_resolve

    // cleanup drop loop (array of 96B items)
LABEL_16:
    // ... cleanup ...
    return sub_140042650(v13);
}
```

## Core Read: get_hotspot_config_core_read_sys_111 @ 0x14060CBC0

```c
// mutex-protected settings read for HotspotConfig
__int64 get_hotspot_config_core_read_sys_111(__int64 out, _BYTE *mutex_state, __int64 a3) {
    // mutex acquire
    if (_InterlockedCompareExchange8(mutex_state, 1, 0)) {
        // already locked — wait
        sub_14124A510(mutex_state);  // WaitOnAddress spin-wait
    }

    // poisoned lock check
    if (mutex_state[1]) {  // poison flag
        // panic: "poisoned lock: another task failed inside"
        //   @ aPoisonedLockAn (0x1412e6bb3, 41B)
        if (sub_1410B1930(aPoisonedLockAn, 41, v25))
            sub_14124BFE0(...);  // panic handler
        // read through despite poison (Rust mutex::lock() behavior)
    }

    // read settings value
    sub_1401A15D0(v25, mutex_state + 8);
    //   → CodexMateSettings hashmap lookup for key "hotspot"
    //   → returns bool in v25 result struct

    // copy result to output
    v18 = v26;   // bool value
    *out_byte(out + 8) = v18;
    *out_qword(out) = 0x8000000000000000;  // None sentinel if missing

    // mutex release
    *mutex_state = 0;
    if (prev_state == 2)
        WakeByAddressSingle(mutex_state);

    return out;
}
```

## Settings Read: codexmate_settings_hotspot_read_full_sys_111 @ 0x1401A15D0

```c
// reads HotspotConfig bool from CodexMateSettings via hashmap lookup
__int64 codexmate_settings_hotspot_read_full_sys_111(__int64 out, __int64 settings_mutex_inner) {
    // get config snapshot
    sub_141093260(&v19, *(settings_mutex_inner + 584), *(settings_mutex_inner + 592));

    if (v19 == 0) {  // empty settings
        // return all 0x8000000000000000 sentinels (None/missing)
        ...
        return sub_140041790(v19 + 8);  // drop
    }

    // optional field: mysteryUnlockGrants (key @ 0x1412b684a, 19B)
    sub_14103A480(aMysteryunlockg, 19, &v17);

    // optional field: mysteryUnlockedRoutes (key @ 0x1412b685d, 21B)
    sub_14103A480(aMysteryunlocke, 21, &v17);

    // main lookup: CodexMateSettings[key="hotspot"] (key @ 0x1412B6E51, 7B)
    // arg5 = &off_1412B6EC8 = {ptr=0x1412B6E51, len=7}
    sub_14040CC30(&v19, &v27, aCodexmatesetti, 17, &off_1412B6EC8, 7);
    //   aCodexmatesetti = "CodexMateSettings" (17B) — type discriminant
    //   off_1412B6EC8 = {ptr="hotspot", len=7} — field key

    if ((u32)v19 == 2) {
        // Err variant — return 0x8000000000000000 sentinels
        ...
        return;
    }

    // Ok: copy 152B result struct to out
    sub_141212FB0(out, &v19, 152);
    // result contains bool at out+8 (the enabled field)
}
```

## Key Constants

| symbol | addr | value |
|---|---|---|
| `aGetHotspotEnab` | `0x1412ac46c` | "get_hotspot_enabled" (19B) |
| `aRepo` | `0x1412ac6d1` | "repo" (4B) |
| hotspot key string | `0x1412B6E51` | "hotspot" (7B) |
| hotspot key ptr | `0x1412B6EC8` | {ptr=0x1412B6E51, len=7} |
| `aCodexmatesetti` | `0x1412b6e40` | "CodexMateSettings" (17B) |
| `aMysteryunlockg` | `0x1412b684a` | "mysteryUnlockGrants" (19B) |
| `aMysteryunlocke` | `0x1412b685d` | "mysteryUnlockedRoutes" (21B) |
| `aPoisonedLockAn` | `0x1412e6bb3` | "poisoned lock: another task failed inside" (41B) |
| None sentinel | — | `0x8000000000000000` |
