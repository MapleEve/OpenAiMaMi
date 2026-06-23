# reveal_relay_api_key — Call Tree (WIN 1.1.1 x64)

## IDB Write-back 汇总

### A 级 rename（stripped sub_xxx → 语义名）

| VA | 旧名 | 新名 | 级别 |
|---|---|---|---|
| 0x140012820 | sub_140012820 | reveal_relay_api_key_owner_sys | A |
| 0x1406D6E80 | sub_1406D6E80 | relay_reveal_api_key_state_lookup_sys | A |
| 0x1402188F0 | sub_1402188F0 | reveal_relay_api_key_response_build_sys | A |

### B 级 comment（已有名字的已知函数 + 证据注释）

| VA | 函数名 | comment tag |
|---|---|---|
| 0x1402EE7C0 | relay_keychain_lookup_for_quota_sys | [EVIDENCE][B] 已有 rename |

**idb_save**: ok=true, path=<本地路径>

## 完整调用树（depth=5，terminated at leaves）

```
reveal_relay_api_key_owner_sys @ 0x140012820 (1297B)
│   params: manager(7B), providerId(10B)
│   string: "reveal_relay_api_key"@0x1412ac531 single xref ← dispatcher
│
├── sub_141212FB0 @ 0x141212FB0           [alloc/copy helpers, depth 0 side]
├── sub_14006F4B0 @ 0x14006F4B0           [manager param extract]
├── sub_141214620 @ 0x141214620           [param validation gate]
├── sub_1402FED40 @ 0x1402FED40           [providerId param extract → Result<String>]
│   ├── sub_1402F9EB0                     [invoke context pre-check]
│   ├── sub_1402F7F90                     [error path cleanup]
│   └── sub_140E30410                     [panic/error handler]
│
├── reveal_relay_api_key_response_build_sys @ 0x1402188F0 (size=~120B)
│   ├── relay_reveal_api_key_state_lookup_sys @ 0x1406D6E80 (core lookup)
│   │   │   WIN lock: _InterlockedCompareExchange8(v8+16) + WakeByAddressSingle
│   │   │   relay state Vec scan stride=232B per RelayProvider
│   │   │   match: *(entry-56)==providerId_len + sub_141213640(str_eq)
│   │   │
│   │   ├── sub_14124A510                 [lock contention wait]
│   │   ├── sub_14124B1D0                 [RwLock read guard acquire]
│   │   ├── sub_141213640                 [string compare (providerId)]  ← TERMINATED: primitive
│   │   ├── sub_1410A2210                 [232B RelayProvider struct clone] ← fs-level side-effect: memcpy
│   │   ├── sub_140001370                 [dealloc/free]                    ← TERMINATED: allocator leaf
│   │   ├── WakeByAddressSingle           [WIN sync primitive]              ← TERMINATED: WIN API
│   │   │
│   │   └── relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0  [fallback if not in state]
│   │       │   src: src\core\relay\keychain.rs
│   │       │   module: codexmate_lib::core::relay::keychain
│   │       │
│   │       ├── sub_14107A2D0(config_dir, key=4B)   [relay config path build]
│   │       ├── sub_14107A2D0("secrets.json", 12B)  [secrets.json path build]   ← fs read path
│   │       ├── sub_141093260                        [path/buf operations]
│   │       ├── sub_14070B280                        [string split/trim]
│   │       ├── sub_140005B40(&json, &buf)           [JSON parse secrets.json]
│   │       ├── sub_140625680                        [HashMap probe setup (SIMD)]
│   │       │   └── SIMD probe: 16-wide _mm_movemask_epi8, tzcnt, stride=48B ← TERMINATED: SIMD primitive
│   │       ├── sub_141213640                        [str compare for hashmap key] ← TERMINATED
│   │       ├── sub_1401E9AB0(unk_1412C643E, ...)   [found entry extraction]
│   │       ├── sub_141089D90("USER", 4)             [env::var("USER")]          ← TERMINATED: OS env leaf
│   │       ├── sub_141089D90("USERNAME", 8)         [env::var("USERNAME")]      ← TERMINATED: OS env leaf
│   │       ├── sub_1410A1DF0                        [string concat for SHA256 input]
│   │       ├── sub_140C35C40                        [SHA256 block compress]     ← TERMINATED: crypto leaf
│   │       │   uses xmmword_1412C8FB8/xmmword_1412C8FC8 = SHA256 init constants
│   │       ├── sub_140311B60                        [hex encode SHA256 digest]
│   │       ├── sub_1410A9010                        [output struct build]
│   │       ├── sub_1402F08B0                        [write-back / cache update]
│   │       │   conditional on: *off_141899A88 > 2u (debug log gate)
│   │       ├── sub_1402F0B20                        [secrets.json missing fallback]
│   │       ├── sub_140BC7720                        [keychain error dispatch]
│   │       │   error code: 0x8000000000000007 (keychain error enum variant)
│   │       ├── sub_140082DE0                        [cleanup JSON parse result]
│   │       └── sub_1402F87A0                        [error path dealloc]
│   │
│   └── [response build]: alloc "ok"(2B=27503) + 7B string
│       sub_140001360(2,1) → v10 (*v10=27503='ok')
│       sub_140001360(7,1) → v11 (1667462483 LE + 26989 LE = field label)
│       result layout: a1[0]=2, a1[1]=v10, a1[2]=2, a1[3]=7, a1[4]=v11, a1[5]=7
│       + apiKey payload at a1[6..8]
│
├── sub_14082F6F0 @ 0x14082F6F0           [success path response finalizer]
│   └── sub_14080C3C0                     [result serializer / Tauri response]
│
├── sub_14080C3C0 @ 0x14080C3C0           [error response builder]
└── sub_14033AB50 @ 0x14033AB50           [cleanup AppHandle array (stride=96B)]

```

## Terminated Reasons Summary

| 深度 | 终止函数 | 终止类型 |
|---|---|---|
| 3 | `sub_141213640` | primitive: string compare |
| 3 | `sub_1410A2210` | memcpy: 232B struct clone |
| 3 | `sub_140001370` | allocator: dealloc |
| 3 | `WakeByAddressSingle` | WIN API: sync primitive |
| 4 | `sub_141089D90("USER")` | OS: env::var leaf |
| 4 | `sub_141089D90("USERNAME")` | OS: env::var leaf |
| 4 | `sub_140C35C40` | crypto: SHA256 compress |

**Total depth**: 5 levels (terminate_reason=all_leaves_reached)

## Fake-wall Taxonomy 检查

| 假墙类型 | 检查结果 |
|---|---|
| drop_in_place shim | 不适用：无 shim 误判，所有析构通过 sub_140001370(dealloc) |
| async decompile failed | 不适用：reveal_relay_api_key_owner_sys 无 async/coroutine 结构（非协程，同步调用）|
| architecture_only / budget rule 自限 | 不适用：完整 decompile，无分块 |
| 猜错 VA | 不适用：string locator 单 xref 直定 owner |
| vtable 动态分发 | 不适用：无 vtable dispatch 在主路径 |
| HTTP-terminal external-only | 不适用：无 HTTP 调用（纯本地 keychain/state 查询） |
| 库内部 vs config-callsite | 不适用：relay_keychain_lookup_for_quota_sys 已从内部深逆 |

**结论**: 无 accepted_unknown。所有路径已逆到 leaf。genuine_ceiling=false。

## accepted_unknown 列表

- **无**。所有关键函数已完整 decompile。
- `relay_keychain_lookup_for_quota_sys` 的内部 SHA256 细节（`sub_140C35C40`）已识别为 crypto primitive，terminated。

## 关键常量

| 常量 | 值 | 含义 |
|---|---|---|
| RelayProvider stride | 232B | per-entry size in relay state Vec |
| providers_base_offset | v8+32 | relay state struct field |
| providers_count_offset | v8+40 | relay state providers count |
| entry start offset | +72 from base | first entry start (skips 72B header per entry) |
| providerId_len_offset | entry-56 | len field within RelayProvider stride |
| providerId_ptr_offset | entry-64 | ptr field within RelayProvider stride |
| lock_byte_offset | v8+16 | WIN InterlockedCAS lock byte |
| poison_flag_offset | v8+17 | RwLock poison bit |
| sha256_init_1 | 0x1412C8FB8 | xmmword SHA256 H constants |
| sha256_init_2 | 0x1412C8FC8 | xmmword SHA256 H constants |
| keychain_error_code | 0x8000000000000007 | keychain error enum variant |
| debug_log_gate | `*off_141899A88 > 2u` | log level check |
| response_ok_tag | 27503=0x6B6F | "ok" (2B LE) |
