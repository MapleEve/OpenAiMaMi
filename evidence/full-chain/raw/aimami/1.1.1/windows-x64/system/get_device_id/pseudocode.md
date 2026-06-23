# get_device_id — Windows x64 1.1.1 Pseudocode

## Owner: get_device_id_handler_111 @ 0x1400208C0

```c
// tauri command handler — no args, returns HotspotConfig JSON
// 1.1.1 DELTA vs 1.0.9: response type changed from Option<String> to full HotspotConfig struct
__int64 get_device_id_handler_111(__int64 tauri_invoke_ctx) {
    // copy invoke context: 520B slice → v14, 400B slice → v16
    sub_141212FB0(v14, tauri_invoke_ctx, 520);
    sub_141212FB0(v16, tauri_invoke_ctx + 520, 400);

    // set up command dispatch args
    v20 = aGetDeviceId;          // "get_device_id" (13 bytes)
    v21[0] = 13;
    v21[1] = aRepo;              // "repo" (4 bytes) — namespace key
    v21[2] = 4;
    v21[3] = v14;                // serialized invoke context ref
    v22 = &v31;                  // output slot

    // acquire pending_auto_switch state lock
    v4 = pending_auto_switch_state_lock_acquire_111((char*)(v15 + 16), v2, v3);
    if (!v4) {
        // dispatch to async future chain
        sub_141214620(&v30, &v20, &v21[1]);  // invoke_resolver / async vtable dispatch

        if (v30[0] != 6) {
            // success path: execute hotspot settings read + serialize
            sub_14080C3C0(v13, v17, &v20, &v24, v18, v19);  // async executor
            goto LABEL_16;
        }
        v4 = v30[1];  // error value
    }

    // decode result
    sub_140783480(&v26, v4);  // async poll waker / result decoder

    sub_141212FB0(&v20, tauri_invoke_ctx + 520, 400);
    if (v26 == 1) {  // Ok path
        // string copy if deviceId string present
        v8 = 1;
        v9 = sub_140001360(*((_QWORD*)&v7+1), 1);
        if (!v9) {
            LABEL_7:
            v33 = *((_QWORD*)&v6+1);
            v34 = v6;
            sub_14124BCCB(v8, *((_QWORD*)&v7+1));
        }
        sub_141212FB0(v9, *((_QWORD*)&v6+1), *((_QWORD*)&v7+1));
        v30[0] = 3;       // Ok tag
        v30[1] = *((_QWORD*)&v7+1);
    } else {
        v30[3] = v28;
        v30[1] = v27;
        v30[0] = 6;       // Err tag
    }

    // serialize response
    sub_1408330B0(&v20, &v30);

LABEL_16:
    // cleanup managed-state refs
    if (v31 != 0) {
        for (v34 = 0; v34 != v33; ++v34) {
            sub_14033AB50();
        }
        if (v31) sub_140001370(v31_ptr, 96 * v31, 8);
    }
    return sub_140042650(v14);
}
```

## Key Sub-function @ 0x1401AB9A0 — get_device_id_exec_hotspot_sys_111

```c
// Reads full hotspot settings block; serializes to JSON
__int64 get_device_id_exec_hotspot_sys_111(__int64 result_out, _QWORD* repo_state) {
    // Read full CodexMateSettings from file (hotspot section)
    codexmate_settings_hotspot_read_full_sys_111(v9, repo_state);

    if (v10 == 0) {
        // settings not available → error path
        sub_1410A2210(&v13, &v10);
        *(result_out + 24) = v14;
        result_out[0] = 10;  // error tag
        goto LABEL_7;
    }

    // Create fresh JSON writer (128-byte arena)
    v8 = sub_140001360(128, 1);
    *v8 = '{';   // open JSON object
    v16 = 1;

    // Serialize field: "hotspot"
    sub_14025A8C0(&v17, aHotspot, 7, a3 + 144);      // "hotspot" key
    if (v17[0]) goto LABEL_6;

    // Serialize field: "usageRefreshInterval"
    sub_140260580(&v17, aUsagerefreshin, 20, a3 + 16); // "usageRefreshInterval"
    if (v17[0]) goto LABEL_6;

    // Serialize field: "deviceId"
    sub_1402662D0(&v17, aDeviceid, 8, a3 + 64);       // "deviceId"
    if (v17[0]) goto LABEL_6;

    // Serialize field: "remoteDeviceSecret"
    sub_1402662D0(&v17, aRemotedevicese, 18, a3 + 88); // "remoteDeviceSecret"
    if (v17[0]) goto LABEL_6;

    // Serialize field: "notificationsSince"
    sub_140267450(&v17, aNotificationss, 18, a3);      // "notificationsSince"
    if (v17[0]) goto LABEL_6;

    // Finalize JSON
    sub_1401F7930(&v17, a3 + 112);
    sub_1401F7910(&v17, a3 + 40);
    sub_1401F7950(&v10);

    // Write JSON to repo
    sub_1403A64F0(a2 + 72, v13);

    *a1 = 10;  // Ok
    return;

LABEL_6:
    // serde error
    result = sub_141248EC0();
LABEL_8:
    *a1 = 3;   // Err
    a1[1] = result;
    return;
}
```

## Key Sub-function @ 0x1401A15D0 — codexmate_settings_hotspot_read_full_sys_111

```c
// Reads CodexMateSettings from file; extracts hotspot config block
// NEW vs 1.0.9: handles mysteryUnlockGrants + mysteryUnlockedRoutes optional fields
__int64 codexmate_settings_hotspot_read_full_sys_111(__int64 out, __int64 repo_state) {
    // Read bytes from Settings file (win32_file_read_bytes_111)
    win32_file_read_bytes_111(&v19, *(repo_state + 584), *(repo_state + 592));

    if (v19 == 0) { goto zero_init_return; }

    // Parse JSON (JSON hashmap)
    sub_140002FA0(&v27, &v19);
    if (v27[0] == 6) { goto zero_init_return; }  // parse error

    // NEW 1.1.1: optional field lookup — mysteryUnlockGrants (19 bytes)
    if (!sub_14103A480(aMysteryunlockg, 19, &v17)) {
        // NEW 1.1.1: optional field lookup — mysteryUnlockedRoutes (21 bytes)
        v8 = sub_14103A480(aMysteryunlocke, 21, &v17);
        if (v8) {
            // process mysteryUnlockedRoutes (type-dispatch on enum discriminant)
            switch (*v8) {
                case 0: v19 = 0; break;
                case 1: case 2: v19 = *v8; v20 = v8[1]; break;
                case 3: sub_1410A2210(&v19+8, v8+8); v19=3; break;
                case 4: sub_140362910(&v19+8, v8+8); v19=4; break;
                case 5: sub_140406C30(&v19+8, v8+8); v19=5; break;
            }
            // if type==4: transform via sub_14030F100 + sub_1403059A0
        }
    }

    // Main settings lookup: key="CodexMateSettings" (17 bytes)
    codexmate_settings_field_lookup_sys_111(&v19, &v27, aCodexmatesetti, 17, &off_1412B6EC8, 7);

    if (v19 != 2) {
        // copy full 152-byte settings struct to output
        sub_141212FB0(out, &v19, 152);
        return;
    }
    // error: field not found → zero-init output
    zero_init_return:
    *(out + 144) = 0;  *(out + 16) = 0;  *(out + 24) = 1;
    // ... (zero out all struct fields)
}
```
