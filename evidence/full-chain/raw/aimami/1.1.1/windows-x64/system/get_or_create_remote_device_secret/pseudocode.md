# get_or_create_remote_device_secret — Windows x64 Pseudocode
**session**: wf-aimami111-delta-20260617-sweep
**machine**: <本地机器>
**binary**: AiMaMi 1.1.1 win64.exe (imagebase 0x140000000)
**delta_class**: integrity_recovered (vs baseline 1.0.9)
**produced**: 2026-06-17

---

## Layer 0 — IPC Dispatcher Entry

**tauri_ipc_main_dispatcher_sys @ 0x14000D2A0**
String-length switch (41 cases). Case `len=34` (0x22) at block `0x14000E335`:

```c
// [0x14000E335]
lea rdi, [0x1412AC354]              // "get_or_create_remote_device_secret" (34B)
mov r8d, 0x22                       // len check
call 0x141213640                    // memcmp (sub_141213640)
test eax, eax
jne  NEXT_CASE                      // mismatch → fall through

// IPC context buffer copies (memcpy×3 via sub_141212FB0)
lea rbx, [rdx+0x208]               // IPC context base
call sub_141212FB0 (x3)            // copy IPC args, context slots

// Managed-state resolution
lea r8, [0x1412B6B4C]              // "dev.aimami.auto-switch" key
call pending_auto_switch_state_lock_acquire_111  // 0x14006EDC0

// Parse args buffer + build arg struct
lea rcx, [rbp+0x40C8]
add rcx, 0x10
mov byte[rbp+0x244B], 1
call sub_14004B540                  // arg parser
test rax, rax
jz   PARSE_OK

// PARSE_OK path: call async handler
lea r8, [0x1401A1000 area]          // handler context ptrs
call get_or_create_remote_device_secret_async_handler_sys  // 0x14078CD70
```

---

## Layer 1 — Async Handler with WIN Lock

**get_or_create_remote_device_secret_async_handler_sys @ 0x14078CD70**
(0x34B bytes; WIN ICEX8 + WakeByAddressSingle pattern)

```c
__int64 async_handler(a1_result_ptr, a2_state_flag, a3_ctx) {
    LOBYTE(a1) = 1;
    if (_InterlockedCompareExchange8(a2, 1, 0)) {   // spin acquire
        sub_14124A510(a2);                           // poison-guard check
    }
    v4 = off_141899DC0;                              // 2× usage-refresh flag
    if (2 * *off_141899DC0) {
        // refresh-interval path
        v16 = sub_14124B1D0(...);                    // try-lock check
        v40 = v16 ^ 1;
        if (LOBYTE(a2[1])) goto LABEL_5;            // poisoned state path
    } else {
        v40 = 0;
        if (a2[1]) goto LABEL_5;                    // poisoned flag
    }
    // Normal path: delegate to core logic
    sub_1401B4FB0(&v31, a2+8);                      // CORE get_or_create_remote_device_secret_core_sys

    if (v31[0] != 10) {                              // != Ok
        // Error: build Result::Err envelope
        sub_140243FC0(&v23, v28);                    // format error struct
        sub_1407B1650(&v31);                         // drop/free Result inner
        *(a1+24) = v30; *(a1+8) = v29;
        *a1 = 1;                                     // tag=1 Err
        goto RELEASE;
    }
    // Success: copy Ok value
    *(a1+24) = v31[3];
    *(a1+8)  = v31[1..2];
    *a1 = 0;                                         // tag=0 Ok

RELEASE:
    v21 = *v20; *v20 = 0;
    if (v21 == 2) WakeByAddressSingle(v20);          // notify waiters
    return a1;

LABEL_5:  // poisoned mutex path
    // format "poisoned lock: another task failed inside" error
    sub_1410B1930(aPoisonedLockAn, 41, &v23);
    // panic via sub_14124BFE0
}
```

---

## Layer 2 — Core: Read + Get-or-Create

**get_or_create_remote_device_secret_core_sys @ 0x1401B4FB0**
(0x20F bytes; reads settings, generates UUID if absent, writes back)

```c
__int64 core(a1_out, a2_settings_ptr) {
    codexmate_settings_hotspot_read_full_sys_111(v17, a2_settings_ptr);
                    // reads CodexMateSettings key="hotspot" from file;
                    // fills 152B struct: deviceId@+64, remoteDeviceSecret@+88,
                    //   usageRefreshInterval@+16, notificationsSince@+0

    v4 = v18;      // length of existing remoteDeviceSecret
    if (v18 != 0 && v18 != -1) {
        // Secret already present: trim whitespace
        v5 = sub_14070B280(v18+1, v19);  // UTF-8 whitespace trimmer (right-trim)
        if (v8 < 0) {
            // Empty after trim → generate new
            sub_14124BCCB(0, v8);         // OOM guard
            goto CREATE;
        }
        // Copy existing value to output
        sub_141212FB0(v14, v13, v8);     // memcpy to output buffer
        *(a1+8) = v8; *(a1+16) = v15; *(a1+24) = v8;
        *a1 = 10;                         // tag=10 Ok
        goto CLEANUP;
    }

CREATE:
    // Secret absent or empty → create new UUID v4
    sub_140F5A860(&v30);                 // uuid_v4_generate_raw_sys
                                          // → 16 raw UUID bytes in v30

    v29 = &v30;                          // set up UUID ptr
    // Format UUID as 32-char hex string
    *(&v21)     = &v30;
    *(&v21 + 1) = uuid_v4_format_hex32_sys;  // 0x140610610
    *(&v22)     = &v29;
    *(&v22 + 1) = uuid_v4_format_hex32_sys;

    // Build JSON string: "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" (32 hex chars, no hyphens)
    sub_1410A1DF0(&v31, &unk_1412B6B4C, &v21);  // string formatter/allocator
    sub_1410A2210(&v21, &v31);                   // finalize string

    // Update settings struct: remoteDeviceSecret field at offset +88
    sub_1401A1D90(&v21, a2_settings_ptr, v17);   // hotspot_config_serialize_5field_json_and_write_sys

    if (v21 == 10) {                              // Ok
        *a1 = 10;
    } else {
        // Copy serialized result fields
        *(a1+80) = v26; *(a1+64) = v25; ...
        *a1 = v21;                               // propagate error tag
    }

CLEANUP:
    sub_1400485A0(v17);                           // drop hotspot settings struct
    return a1;
}
```

---

## Layer 3 — UUID v4 Generation

**uuid_v4_generate_raw_sys @ 0x140F5A860**
(0xC7 bytes; calls Windows `ProcessPrng`)

```c
_QWORD* uuid_v4_generate_raw_sys(out_16bytes) {
    __m128i rand_bytes = 0;
    if (ProcessPrng(&rand_bytes, 16) != 1) {
        // Error: emit "65538" code and panic via sub_14124C240
    }
    // Apply RFC 4122 bitmask (little-endian 128-bit):
    //   AND: [ff ff ff ff ff ff ff 3f ff 0f ff ff ff ff ff ff]
    //     → byte[7] &= 0x3F  (clear variant bits)
    //     → byte[9] &= 0x0F  (clear version nibble)
    //   OR:  [00 00 00 00 00 00 00 80 00 40 00 00 00 00 00 00]
    //     → byte[7] |= 0x80  (set variant = 10xxxxxx)
    //     → byte[9] |= 0x40  (set version = 4 → 0100xxxx)
    __m128i v4_uuid = _mm_or_si128(
        _mm_and_si128(rand_bytes, xmmword_141416FF0),
        xmmword_141417000
    );
    // Byte-swap halves and store (big-endian UUID representation)
    out_16bytes[1] = _byteswap_uint64(v4_uuid.m128i_u64[0]);
    out_16bytes[0] = _byteswap_uint64(v4_uuid.m128i_u64[1]);  // shuffle_epi32(v4_uuid, 238) gets high qword
    return out_16bytes;
}
```

---

## Layer 4 — UUID Hex Formatting

**uuid_v4_format_hex32_sys @ 0x140610610** → **sub_140F5ADC0 @ 0x140F5ADC0**
→ **uuid_bytes_to_hex32_lowercase_sys @ 0x140F5A940**

```c
// sub_140F5ADC0: intermediary
void format_hex32(a1_str_obj, raw_uuid) {
    _BYTE v4[48];
    uuid_bytes_to_hex32_lowercase_sys(raw_uuid, v4, /*uppercase=*/0);
    sub_1410A7B00(a1_str_obj, v4, 32);  // write 32 chars to String object
}

// uuid_bytes_to_hex32_lowercase_sys: unrolled nibble-by-nibble encoder
// table @0x141417010 = "0123456789abcdef" (lowercase)
// table @0x141417020 = "0123456789ABCDEF" (uppercase, not used here)
void bytes_to_hex32(input_16bytes, out_32chars, uppercase) {
    const char* table = uppercase ? table_upper : table_lower;
    for (int i = 0; i < 16; i++) {
        out_32chars[2*i]   = table[input_16bytes[i] >> 4];   // high nibble
        out_32chars[2*i+1] = table[input_16bytes[i] & 0xF];  // low nibble
    }
    // Output: 32 lowercase hex chars, NO hyphens
    // e.g.: "a1b2c3d4e5f6789012345678abcdef01"
}
```

---

## Layer 5 — Settings Serialize + Write

**hotspot_config_serialize_5field_json_and_write_sys @ 0x1401A1D90**
(comment already present from prior analysis run)

```c
__int64 serialize_and_write(a1_out, a2_settings, a3_hotspot_struct) {
    if (relay_config_check_parent_dirs_sys(a2_settings)) {   // 0x1406F2870
        *a1 = 2; a1[1] = err;   // dir check fail
        return;
    }
    // Alloc 128B JSON buffer
    buf = malloc(128, 1);
    buf[0] = '{';               // JSON open

    // Field 1: "hotspot" (7B key @ 0x1412B6E51) → a3+144
    sub_14025A8C0(&v17, "hotspot", 7, a3+144);
    // Field 2: "usageRefreshInterval" (20B @ 0x1412B6E58) → a3+16
    sub_140260580(&v17, "usageRefreshInterval", 20, a3+16);
    // Field 3: "deviceId" (8B @ 0x1412B6E6C) → a3+64
    sub_1402662D0(&v17, "deviceId", 8, a3+64);
    // Field 4: "remoteDeviceSecret" (18B @ 0x1412B6E74) → a3+88
    sub_1402662D0(&v17, "remoteDeviceSecret", 18, a3+88);
    // Field 5: "notificationsSince" (18B @ 0x1412B6E86) → a3+0
    sub_140267450(&v17, "notificationsSince", 18, a3+0);
    // Finalize + sub_1401F7930/F7910/F7950

    // Write via sub_1403A64F0 → win32_file_write_bytes_111 (0x141093710)
    sub_1403A64F0(a2+72, v13);
    if (error) { *a1 = 3; a1[1] = err; return; }
    *a1 = 10;   // Ok
}
```

**JSON output shape (5 fields):**
```json
{
  "hotspot": <bool>,
  "usageRefreshInterval": <u64_ms>,
  "deviceId": "<string>",
  "remoteDeviceSecret": "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
  "notificationsSince": <timestamp>
}
```

---

## Delta vs 1.0.9

| Dimension | 1.0.9 | 1.1.1 |
|-----------|-------|-------|
| Dispatcher | `auto_switch_multiplex_dispatcher_sys` (0x1402663e0), case 34 | `tauri_ipc_main_dispatcher_sys` (0x14000D2A0), len-34 block |
| Managed-state key | `"repo"` (4B) | `"dev.aimami.auto-switch"` (22B) |
| UUID format | `2×uuid::new_v4` as `{uuid1}-{uuid2}` (hyphenated) | Single UUID v4, 32-char lowercase hex, **no hyphens** |
| UUID generator | Rust `uuid` crate (upstream) | `ProcessPrng(16B)` + `_mm_and/or_si128` RFC4122 bitmask (inline) |
| Settings write | Single-field `settings_serialize_remote_device_secret_and_save_sys` | 5-field JSON `hotspot_config_serialize_5field_json_and_write_sys` |
| JSON fields written | `remoteDeviceSecret` only | `hotspot` + `usageRefreshInterval` + `deviceId` + `remoteDeviceSecret` + `notificationsSince` |
| Write path | `sub_140336350` (settings store) | `win32_file_write_bytes_111` (0x141093710) via `sub_1403A64F0` |
| Response DTO | `String` (remoteDeviceSecret value) | `String` (remoteDeviceSecret value) — unchanged |
| Error codes | tag-6 (repo unavailable), tag-0 (extraction error) | tag-6 (dir check), tag-3 (serialize err), tag-10 (Ok) |
