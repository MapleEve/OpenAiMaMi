# reveal_relay_api_key — Pseudocode (WIN 1.1.1 x64)

## Layer 0: Owner Wrapper — reveal_relay_api_key_owner_sys @ 0x140012820

```c
// reveal_relay_api_key_owner_sys(a1: InvokeContext)
// params: manager:String(7B), providerId:String(10B)
__int64 reveal_relay_api_key_owner_sys(__int64 a1) {
    // 1. 从 invoke context 提取 relay state (520B offset) 和 AppHandle (920B offset)
    copy(v16, a1+520, 520);  // relay manager context
    copy(v18, a1+520, 400);  // relay state ref
    v47 = *(a1+936);         // handle extra field
    v46 = *(a1+920);         // AppHandle (128-bit)

    // 2. 提取 manager 参数
    v22 = "reveal_relay_api_key";   // command string (20B)
    v23[0] = 20;                     // cmd len
    v23[1] = "manager";              // param name (7B)
    v23[2] = 7;                      // param len
    v23[3] = &v16;                   // param storage
    sub_14006F4B0(v17+16, ...);      // extract manager string -> v4

    // 3. 提取 providerId 参数
    v22 = "reveal_relay_api_key";
    v23[1] = "providerId";  // (10B)
    v23[2] = 10;
    sub_1402FED40(&v39, &v22);       // providerId extract -> v39 (Result<String>)
    // on err: sub_14080C3C0 error response

    // 4. 核心 API key 查找
    // v4 = manager extracted string ptr/len
    // v36 = providerId extracted string
    sub_1402188F0(&v26, v4, &v36);  // -> v26 (Result<apiKey>)
    // success check: !__OFSUB__(0, v26[0])

    // 5. 成功路径: 直接返回 apiKey string 或空
    // 失败路径: error response via sub_14080C3C0

    // 6. Cleanup: drop v46 (AppHandle array, stride=96B)
    sub_14033AB50();  // per-element cleanup (v46 len @ v47, stride=96)
    sub_140042650(v16);  // relay context cleanup
}
```

## Layer 1: Param Extract — sub_1402FED40 @ 0x1402FED40 (providerId)

```c
// 从 invoke context 提取 String 参数
// 输入: a2 = {cmd_str_ptr, cmd_str_len, param_name_ptr, param_name_len, ...}
// 输出: a1 = Result<String> (tag byte=3 on Ok, tag=0x8000... on Err)
// Ok path: tag=3, copy string content
// Err path: propagate invoke error
```

## Layer 2: Core Lookup — relay_reveal_api_key_state_lookup_sys @ 0x1406D6E80

```c
// relay_reveal_api_key_state_lookup_sys(result_out, relay_state_ref, providerId_ptr, providerId_len)
// WIN lock: _InterlockedCompareExchange8(v8+16, 1, 0) -> WakeByAddressSingle
// 中毒检测: off_141899DC0 * 2 != 0 -> "relay state poisoned" panic

// relay state Vec scan:
//   providers_count = *(v8+40)
//   providers_base  = *(v8+32)
//   entry_ptr = providers_base + 72  (first entry)
//   stride = 232B per RelayProvider

while (remaining > 0) {
    if (*entry_ptr[-56] == providerId_len &&
        str_eq(*(entry_ptr-64), providerId_ptr, providerId_len)) {
        // found: clone 232B entry
        sub_1410A2210(&clone_buf, entry_ptr);  // 232B RelayProvider clone
        // extract apiKey field from cloned struct
        // apiKey = v25/v13 (len) + v4 (ptr) from clone
        break;
    }
    entry_ptr += 232;
    remaining -= 232;
}

// not found: fallback to keychain
relay_keychain_lookup_for_quota_sys(&result, relay_state+16, providerId_ptr, providerId_len);

// WIN lock release:
*v9 = 0;  // clear lock byte at v8+16
if (*v9 == 2) WakeByAddressSingle(v9);  // wake waiters

// return: {len, ptr, len2} or {0, 0x8000000000000000, 0} on not-found
```

## Layer 3: Keychain Fallback — relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0

```c
// src\core\relay\keychain.rs
// Shared leaf: used by BOTH reveal_relay_api_key AND get_relay_provider_quota

// Step 1: load relay config path (unk_1412C860F = relay config dir, 4B key)
sub_14107A2D0(&path_buf, relay_state+776, relay_state+784, config_key, 4);
// Step 2: load secrets.json
sub_14107A2D0(&secrets_buf, path.ptr, path.len, "secrets.json", 12);

// Step 3: parse secrets.json -> lookup providerId in hashmap
sub_140005B40(&json_result, &secrets_buf);
// hashmap probe: SIMD 16-wide probe, tzcnt bit-scan, stride=48B per entry
// key match: len == providerId_len && str_eq(entry_key, providerId_ptr, len)
sub_1401E9AB0(&found_entry, unk_1412C643E, *entry_key_ptr, *entry_key_len);

// Step 4: env fallback for auth identity
sub_141089D90(&env_result, "USER", 4);       // try USER env var
sub_141089D90(&env_result, "USERNAME", 8);   // fallback USERNAME

// Step 5: SHA-256 SIMD computation
//   alloc 32B: sub_140001360(32, 1)
//   SHA256 of (identity + apiKey)
//   SIMD byte-swap/shuffle for hex encoding
//   xmmword_1412C8FB8 + xmmword_1412C8FC8 = SHA256 init constants

// Step 6: write-back (sub_1402F08B0)
//   log level gate: *off_141899A88 > 2u -> emit debug log
//   src: codexmate_lib::core::relay::keychain (0x1412c8548)
//   src file: src\core\relay\keychain.rs (0x1412c8515)

// Error paths:
//   keychain error code: 0x8000000000000007
//   secrets.json missing: fallback sub_1402F0B20
//   json parse error (non-0x25 tag): alloc error path
//   provider not found: {0, 1, 0} (empty Ok)

// Return: {apiKey_len, apiKey_ptr, apiKey_len2} on success
//         {0, 0x8000000000000000, 0} on not-found
//         {0, 1, 0} on provider-not-found (empty Ok)
```

## Layer 4: Response Build — reveal_relay_api_key_response_build_sys @ 0x1402188F0

```c
// reveal_relay_api_key_response_build_sys(result_out, manager_val, &providerId)
// calls relay_reveal_api_key_state_lookup_sys(result_out, manager_val, providerId_ptr, len)
// success: builds 2-field response:
//   field[0] = "ok" (2B: 27503=0x6B6F='o'+'k' LE)
//   field[1] = apiKey string (7B alloc + content)
//   1667462483 = 0x636F6473 LE bytes: 's','d','o','c' -> "sdoc" + 0x696D="mi" -> response = "sdocmi" 6B + 1B tag?
//   NOTE: exact field label unclear from constants; likely "apiKey" or response wrapper
// result layout: a1[0]=2(ok tag), a1[1]=v10(ptr), a1[2]=2(len), a1[3]=7, a1[4]=v11(ptr), a1[5]=7, ...
// side-effect: drops providerId param string (sub_140001370 dealloc)
```
