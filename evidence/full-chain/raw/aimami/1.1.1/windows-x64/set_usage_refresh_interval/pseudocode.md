# set_usage_refresh_interval — AiMaMi 1.1.1 Windows x64
<!-- session=wf-aimami111-delta-20260617-sweep | machine=<本地机器> | delta_class=integrity_recovered -->
<!-- baseline=1.0.9 | produced=2026-06-17 -->

## Owner Function

| 属性 | 值 |
|---|---|
| Name | `set_usage_refresh_interval_handler_111` |
| VA | `0x140018760` |
| Size | 0x5DE bytes (~1502 bytes) |
| String anchor | `"set_usage_refresh_interval"` @ `0x1412ac243` |
| xref-from | `tauri_ipc_main_dispatcher_sys` (`0x14000D2A0`) via `0x14000F219` |

---

## Pseudocode — set_usage_refresh_interval_handler_111 (0x140018760)

```c
// [wf-aimami111-delta-20260617 | delta_class=integrity_recovered]
// IPC COMMAND HANDLER: set_usage_refresh_interval
// PARAMS: {command:"set_usage_refresh_interval", app:str, interval:str("30s"|"1m"|"3m"|"5m")}
__int64 __fastcall set_usage_refresh_interval_handler_111(__int64 a1 /*IpcContext*/)
{
  // Step 1: Copy IPC context state (520 bytes main + 400 bytes aux)
  sub_141212FB0(v17, a1, 520);         // copy resolver/params block
  sub_141212FB0(v21, a1+520, 400);     // copy account/session context

  // Step 2: Setup IPC log context: {cmd:"set_usage_refresh_interval", source:"app"}
  v44 = aSetUsageRefres;               // "set_usage_refresh_interval"
  v45[1] = aApp;                       // "app"
  v45[2] = 3;                          // param count
  v45[3] = v17;                        // resolver ptr

  // Step 3: Deserialize IPC request
  confirm_pending_auto_switch_deserialize_request_sys(&v19, &v44);
  // v19 discriminant: 3=Ok(params), other=Err

  if (v19 == 3) {
    // EARLY PATH: already-resolved / cached result
    // Respond immediately via IPC response dispatch
    sub_14080C3C0(v16, v22, &v44, &v32, v23, v24);  // IPC RESPONSE DISPATCH
    goto LABEL_22;
  }

  // Step 4: Acquire Repository lock
  v4 = pending_auto_switch_state_lock_acquire_111((char*)(v18+16), v2, v3);
  if (!v4) {
    // Step 5: Query installed skills with repo context
    // source:"repo", param_count:4
    query_installed_skills_with_repo_111(&v36, &v44, &v45[1]);
    // v36[0] discriminant: 6=Ok(skills_iter), other=Err

    if (v36[0] != 6) {
      // Skill query error path
      sub_14080C3C0(v15, v22, &v44, &v30, v23, v24);
      v52 = 0;
      sub_140041870(v25);
      goto LABEL_22;
    }

    // Step 6: Parse "interval" param from JSON payload
    // source:"interval", param_count:8
    remove_skill_parse_id_param_111(&v37, &v44);
    // v37[0] discriminant: 6=Ok(interval_str), other=Err

    if (v37[0] != 6) {
      // Parse error path
      sub_14080C3C0(v14, v22, &v44, &v28, v23, v24);
      v52 = 0;
      sub_140041870(v25);
      goto LABEL_22;
    }

    // v35 = interval string ptr, v34 = interval string len
    v35 = v37[3];
    v34 = v37[1..2];  // oword: ptr+len

    // Step 7: Apply interval — convert + persist + notify
    set_usage_refresh_interval_apply_and_persist_111(&v38, v25, v4, &v34);
    // Reload account/session context
    sub_141212FB0(&v19, a1+520, 400);

    // Step 8: Build Ok or Err response
    if (v38 == 1) {
      // Ok(u64_seconds) — allocate copy of interval value
      // ... Arc/box alloc, copy interval seconds u64
      v25[0] = 3;        // Result::Ok discriminant
      v26 = interval_seconds;
      v27 = interval_seconds;
    } else {
      v27 = v40;
      v26 = v39;
      v25[0] = 6;        // Result::Err discriminant
    }

    // Step 9: Finalize response
    sub_1408330B0(&v19, v25);  // set_usage_refresh_interval_respond_111
  }

LABEL_22:
  // Cleanup: drop skills iter (96-byte stride loop)
  // Free allocated memory
  return sub_140042650(v17);
}
```

---

## Pseudocode — set_usage_refresh_interval_apply_and_persist_111 (0x140789900)

```c
// Applies interval string, converts to seconds, reads+writes hotspot config JSON
__int64 __fastcall set_usage_refresh_interval_apply_and_persist_111(
    __int64 a1,       // out: result
    __int64 a2,       // IpcContext (resolver state)
    _BYTE *a3,        // lock byte (Repository mutex guard)
    __int64 *a4       // interval string (ptr+len)
) {
  // Lock guard acquire (InterlockedCAS on a3)
  _InterlockedCompareExchange8(a3, 1, 0);

  // Parse interval string to seconds
  sub_1401B2600(&v64, a3+8, a4[1], a4[2]);
  // v64 discriminant: 10=IoError, 0=Ok(seconds_u64)

  if (v64 != 10) {
    // Parse OK: extract seconds value
    v40 = seconds_val;  // u64 seconds

    // Call interval_str_to_seconds_111 for numeric conversion
    v54 = interval_str_to_seconds_111(seconds_val, interval_len);

    // Write global interval cache + notify
    usage_refresh_notify_global_state_111(v54);

    // Build Ok result: a1->interval_ptr, interval_len, seconds
    *a1[0..3] = {interval_ptr, interval_len, seconds};
    *a1 = 0;  // Ok discriminant
  } else {
    // IoError path: return error with source string
    *a1 = {err_ptr, err_len, err_extra};
    *a1 = 1;  // Err discriminant
  }

  // Cleanup interval string allocation
  sub_140041870(a2);
  return a1;
}
```

---

## Pseudocode — hotspot_interval_parse_and_write_sys_111 (0x1401B2600)

```c
// Reads current hotspot config, patches interval field, writes 5-field JSON back to disk
__int64 __fastcall hotspot_interval_parse_and_write_sys_111(
    __int64 a1,           // out result
    _QWORD *a2,           // Repository* (settings store)
    __int64 a3,           // interval string ptr
    unsigned __int64 a4   // interval string len
) {
  if (a4 == 2) {
    // Two-byte interval: "1m"(0x6D31) / "3m"(0x6D33) / "5m"(0x6D35)
    switch (*a3) {
      case 0x6D31: v6 = &"1m"; break;
      case 0x6D33: v6 = &"3m"; break;
      case 0x6D35: v6 = &"5m"; break;
      default: goto ERR_PATH;
    }
  } else if (a4 == 3 && *a3 == "30s") {
    v6 = &"30s";
  } else {
    goto ERR_PATH;
  }

  // Read current hotspot config
  codexmate_settings_hotspot_read_full_sys_111(v21, a2);

  // Alloc copy of interval string
  v12 = sub_140001360(a4, 1);
  sub_141212FB0(v12, v6, a4);  // copy interval bytes

  // Write updated config: 5-field JSON serialization + disk write
  hotspot_config_serialize_5field_json_and_write_sys(v28, a2, v21);

  if (v28[0] == 10) {  // IoError
    // alloc error string copy, return Err(10)
    *a1 = 10; ...
  } else {
    // Return full Ok result oword
    *a1 = v28[0..5];
  }

  sub_1400485A0(v21);  // drop temp hotspot config
  return a1;

ERR_PATH:
  // Build error result for unknown interval string
  sub_1410A1DF0(&v22, byte_1412B6B0D, v28_err);
  *a1 = 8; ...  // Err(InvalidInterval)
}
```

---

## Pseudocode — interval_str_to_seconds_111 (0x1401BCE00)

```c
// Converts interval string to u64 seconds
__int64 interval_str_to_seconds_111(__int64 a1 /*str_ptr*/, __int64 a2 /*str_len*/) {
  if (a2 == 2) {
    if (*a1 == 0x6D31) return 60;    // "1m"
    if (*a1 == 0x6D33) return 180;   // "3m"
    if (*a1 == 0x6D35) return 300;   // "5m"
  } else if (a2 == 3 && *a1 == "30s") {
    return 30;
  }
  // default fallback
  return 60;
}
```

---

## Pseudocode — usage_refresh_notify_global_state_111 (0x14078BF40)

```c
// Updates global interval cache + wakes waiting threads
void usage_refresh_notify_global_state_111(__int64 a1 /*seconds*/) {
  // Acquire byte_1418930C8 (global mutex byte)
  _InterlockedCompareExchange8(&byte_1418930C8, 1, 0);

  // Write to global cache
  qword_1418930D0 = a1;       // global interval cache (seconds)

  // Notify via Condvar (sub_141078290 = notify_all-equivalent)
  sub_141078290(&unk_1418930E0);

  // Release + wake
  byte_1418930C8 = 0;
  WakeByAddressSingle(&byte_1418930C8);
}
```

---

## Pseudocode — hotspot_config_serialize_5field_json_and_write_sys (0x1401A1D90)
<!-- gold-leaf addition: session=wf-aimami111-delta-20260618-goldleaf -->

```c
// Serializes 5-field hotspot config as JSON and writes to disk.
// JSON keys: "hotspot", "usageRefreshInterval", "deviceId", "remoteDeviceSecret", "notificationsSince"
// NEW in 1.1.1: 1.0.9 only wrote "deviceId" (single-field config).
// Returns: *a1 = 10 (IoError/Err), 2 (parent-dir error), 0 (Ok)
__int64 __fastcall hotspot_config_serialize_5field_json_and_write_sys(
    _QWORD *a1,      // out: result discriminant + payload
    _QWORD *a2,      // Repository* (contains file path at a2+72)
    __int64 a3       // HotspotConfig* (fields at a3, a3+16, a3+40, a3+64, a3+88, a3+112, a3+144)
) {
  // Step 1: Ensure parent directories exist
  result = relay_config_check_parent_dirs_sys(a2);  // 0x1406F2870
  if (result) {
    *a1 = 2;  // parent-dir error
    a1[1] = result;
    return result;
  }

  // Step 2: Alloc JSON write buffer (128 bytes initial)
  v8 = sub_140001360(128, 1);  // alloc 128B
  v14 = 128;  // capacity
  v15 = v8;
  *v8 = '{';  // open JSON object

  // Step 3: Write JSON fields sequentially (each sub_XXX = json_write_field_XXX)
  // "hotspot": <a3+144>
  result = sub_14025A8C0(&v17, "hotspot", 7, a3 + 144);
  if (result) goto LABEL_8;

  // "usageRefreshInterval": <a3+16>  ← THE NEW FIELD (absent in 1.0.9)
  result = sub_140260580(&v17, "usageRefreshInterval", 20, a3 + 16);
  if (result) goto LABEL_8;

  // "deviceId": <a3+64>
  result = sub_1402662D0(&v17, "deviceId", 8, a3 + 64);
  if (result) goto LABEL_8;

  // "remoteDeviceSecret": <a3+88>
  result = sub_1402662D0(&v17, "remoteDeviceSecret", 18, a3 + 88);
  if (result) goto LABEL_8;

  // "notificationsSince": <a3>
  result = sub_140267450(&v17, "notificationsSince", 18, a3);
  if (result) goto LABEL_8;

  // Step 4: Finalize JSON (close brace, flush buffer)
  sub_1401F7930(&v17, a3 + 112);  // trailing field / close
  sub_1401F7910(&v17, a3 + 40);   // finalize buffer
  sub_1401F7950(&v10);             // flush/complete serialization

  // Step 5: Write buffer to disk
  // File handle obtained via a2+72 (Repository path)
  result = sub_1403A64F0(a2 + 72, v13);
  //   sub_1403A64F0 → win32_file_write_bytes_111(*a2+8, *a2+16, v5, a2[2])
  //                 → PERSISTENCE LEAF: terminated_reason=platform-primitive
  if (result) {
    *a1 = 3;  // write error
    a1[1] = result;
    return result;
  }

  *a1 = 10;  // Ok (discriminant 10 = success in this context)
  return result;

LABEL_8:  // serialization error
  if (v14) sub_140001370(v15, v14, 1);  // free buffer
  *a1 = 3;
  a1[1] = v9;
  return result;
}
```

---

## Pseudocode — hotspot_config_file_write_bytes_sys (0x1403A64F0)
<!-- gold-leaf addition: session=wf-aimami111-delta-20260618-goldleaf -->

```c
// Terminal disk-write leaf. Calls win32_file_write_bytes_111.
// terminated_reason=platform-primitive
__int64 __fastcall hotspot_config_file_write_bytes_sys(__int64 a1, _QWORD *a2)
{
  __int64 v5 = a2[1];  // buffer ptr
  __int64 result = win32_file_write_bytes_111(
      *(_QWORD *)(a1 + 8),   // file handle (from Repository path struct)
      *(_QWORD *)(a1 + 16),  // path ptr
      v5,                     // data ptr
      a2[2]                   // data len
  );
  if (*a2) {
    // non-zero size: free old buffer
    sub_140001370(v5, *a2, 1);
  }
  return result;
}
// win32_file_write_bytes_111 @ 0x141093710: Windows platform primitive — CALL CHAIN TERMINATES
```
