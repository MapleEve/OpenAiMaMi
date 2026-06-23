# remove_mcp_server 调用树 — AiMaMi 1.1.1 win64

session: wf-aimami111-delta-20260618-goldleaf (gold-leaf补满; prior: wf-aimami111-delta-20260617-sweep)
delta_class: integrity_recovered
terminated_reason: terminal_leaf_reached (depth ≥ 6 on all branches)
gold_leaf: true
dim1_ccf: mcp-page-CGgOsRmy.js:mutationFn → index-DdcCOEJG.js:removeMcpServer → ne("remove_mcp_server",{name:t})

## dim1 CCF 调用链（前端入口）

```
assets/mcp-page-CGgOsRmy.js:16  mutationFn
  └── A.removeMcpServer(s)
        └── assets/index-DdcCOEJG.js:86  removeMcpServer: t => ne("remove_mcp_server", {name:t})
              └── ne("remove_mcp_server", {name:t})  ← Tauri IPC invoke
                    argKeys: ["name"]   ← 前端 1.1.1 只传 name，无 repo
```

---

## 调用树（backend, depth ≥ 6）

```
remove_mcp_server_owner_sys                VA:0x140019040  【DELTA-OWNER / IDB已更名】
├── pending_auto_switch_state_lock_acquire_111  VA:0x14006EDC0  [DELTA-NEW: 锁检查]
│   ├── WakeByAddressSingle (win32 syscall)
│   ├── sub_14124A510 (lock acquire helper)
│   └── sub_14124B1D0 (debug lock state check)
│
├── query_installed_skills_with_repo_111   VA:0x141214620  [DELTA-NEW: repo gate]
│   ├── sub_1410A1DF0 (closure/iterator combinator)
│   ├── sub_141222DD0 (store deref/unwrap)
│   ├── skill_store_get_all_111            VA:0x14106D960
│   │   └── skill_store_iter_111           VA:0x14106DE20
│   │       ├── (*vtable+8)(store)  [dyn trait call: iter()]
│   │       └── sub_1410A8340 (filter_map closure apply)
│   └── sub_14106D970 (store ref drop)
│
├── sub_1402FED40 (IPC param deserializer: name field)
│
├── remove_mcp_server_exec_111             VA:0x1401C4F40
│   ├── _InterlockedCompareExchange8 (spinlock try-acquire) [WIN32 intrinsic]
│   ├── sub_14124A510 (poison-guard on lock)
│   │
│   ├── mcp_config_read_and_remove_entry_111  VA:0x14067C020
│   │   ├── snooze_file_open_111              VA:0x14108C6F0
│   │   │   ├── sub_1410938D0 (base path resolver)
│   │   │   ├── win32_path_canonicalize_111   VA:0x1410908E0  [LEAF]
│   │   │   └── win32_file_open_rw_111        VA:0x14108F6C0  [LEAF]
│   │   ├── win32_file_read_bytes_111         VA:0x141093260  [LEAF]
│   │   ├── mcp_server_list_build_toml_sections_111  VA:0x14067F850
│   │   │   └── sub_141077010 (TOML token parser) [LEAF]
│   │   ├── sub_140625680 (FxHash: name key hash)
│   │   ├── [SIMD Swiss Table probe: pcmpeqb/pmovmskb] (inline)
│   │   ├── sub_141213640 (byte slice eq compare)
│   │   ├── sub_1403654F0 (hashmap resize/rebalance)
│   │   ├── sub_14070B280 (TOML entry drop/free)
│   │   └── relay_atomic_write_leaf_with_newline_111  VA:0x14067BE90
│   │       └── relay_atomic_write_leaf_sys   VA:0x140504310
│   │           ├── sub_14107A3E0 (parent dir check)
│   │           ├── GetCurrentProcessId() [WIN32]
│   │           ├── uuid_v4_generate_raw_sys  VA:0x140F5A860  [LEAF]
│   │           ├── sub_141087E20 (CreateFile wrapper)
│   │           ├── sub_141097C30 (WriteFile loop)  [LEAF]
│   │           ├── CloseHandle() [WIN32]
│   │           ├── sub_140504130 (rename tmp→target atomic)  [LEAF]
│   │           └── snooze_file_delete_111  VA:0x14108BF60  [LEAF, on error]
│   │
│   ├── mcp_config_toml_parse_and_remove_111  VA:0x1406790D0  [307 basic blocks]
│   │   ├── snooze_file_open_111              VA:0x14108C6F0  [see phase1 above]
│   │   ├── win32_file_read_bytes_111         VA:0x141093260  [LEAF]
│   │   ├── sub_141077010 (TOML tokenizer)    VA:0x141077010  [LEAF: data-only scanner]
│   │   ├── sub_14066EA70 (section header finder)  VA:0x14066EA70
│   │   ├── sub_14067FE50 (skip section body)      VA:0x14067FE50
│   │   ├── sub_140624F90 (subkey dispatcher: cmd/transport/env/headers/environment)  VA:0x140624F90
│   │   ├── sub_14070B280 (TOML entry drop/free)   VA:0x14070B280  [LEAF]
│   │   ├── sub_1407B3660 (remaining sections serializer)  VA:0x1407B3660
│   │   ├── sub_140678AC0 (write-back wrapper)     VA:0x140678AC0
│   │   │   └── relay_atomic_write_leaf_sys   VA:0x140504310  [see above, LEAF terminal]
│   │   ├── sub_141213640 (byte slice eq)     VA:0x141213640  [LEAF]
│   │   ├── sub_140082DE0 (string formatter)  VA:0x140082DE0
│   │   ├── sub_1410A2210 (error formatter)   VA:0x1410A2210
│   │   └── sub_140001360/sub_140001370 (heap alloc/dealloc)  [LEAF]
│   │
│   ├── build_remove_mcp_server_ok_result_111  VA:0x1402161B0
│   │   └── sub_140001360 (heap alloc for "ok"/"success" strings)  [LEAF]
│   │
│   ├── usage_fetch_error_drop_111          VA:0x1401D4C70  [error path drop]
│   │   └── sub_140001370 (dealloc)  [LEAF]
│   │
│   └── WakeByAddressSingle (spinlock release) [WIN32]
│
└── sub_140839BF0 (IPC response serializer)  [LEAF]


TERMINATED REASONS:
  - win32_file_read_bytes_111: WIN32 ReadFile wrapper, no deeper app calls
  - win32_path_canonicalize_111: GetFullPathNameW wrapper
  - relay_atomic_write_leaf_sys: CreateFile/WriteFile/CloseHandle terminal
  - uuid_v4_generate_raw_sys: RtlGenRandom wrapper
  - sub_140001360/sub_140001370: heap alloc/dealloc (rust allocator shim)
  - skill_store_iter_111: dyn trait vtable dispatch, data structure traversal only
  - sub_141077010: TOML tokenizer, data-structure scanner (no I/O)
  - sub_14070B280: TOML entry free, memory management only
  - sub_141213640: byte slice equality compare, no side effects
  - sub_140504130: WIN32 rename syscall wrapper [LEAF]
  - snooze_file_delete_111: DeleteFileW wrapper [LEAF, error path]
```

## 深度统计

| 分支路径 | max depth |
|---------|-----------|
| ipc_handler → exec → mcp_config_read → relay_atomic → uuid_v4_generate_raw_sys | 6 |
| ipc_handler → exec → mcp_config_toml → relay_atomic → CreateFile/WriteFile | 6 |
| ipc_handler → query_skills → skill_store_get_all → skill_store_iter → vtable.iter() | 5 |
| ipc_handler → pending_auto_switch_lock → WakeByAddressSingle | 3 |

全部分支 ≥ 5，主写盘链路深度 = 6。terminated_reason: external_call / platform-primitive。

## 接口/DTO 摘要

### IPC 参数（DELTA: 新增 repo 字段）
```
remove_mcp_server {
    repo: String,    // 【1.1.1 新增】skill repo 标识符
    name: String,    // MCP server 名（存在于 config.toml key）
}
```

### 成功响应 DTO
```
RemoveMcpServerOk {
    status: "ok",       // 2-byte literal
    message: "success", // 7-byte literal
    // McpServerSummary fields (offset 72..128 = 56B)
    // 结构大小 0x88 = 136B per response
    // McpServerSummary 每项 0xE0 = 224B（Vec<McpServerSummary>）
}
```

### 错误路径
| 条件 | 错误来源 | tag |
|------|---------|-----|
| pending_auto_switch 锁被持有 | pending_auto_switch_state_lock_acquire_111 | Result::Err 0x8000000000000000 |
| repo 在 skill store 中不存在 | query_installed_skills_with_repo_111 → discriminant≠6 | Error resp via sub_14080C3C0 |
| name 参数解析失败 | sub_1402FED40 discriminant≠6 | Error resp via sub_14080C3C0 |
| config 文件读取失败 | win32_file_read_bytes_111 | Result::Err 0x8000000000000000 |
| MCP server name 未找到 | hashmap probe miss → "MCP server not found: " | result code 7 |
| TOML parse 失败 | mcp_config_toml_parse_and_remove_111 | Result::Err 0x8000000000000000 |
| 原子写盘失败 | relay_atomic_write_leaf_sys | "atomic write: missing parent" |

### 副作用
- **唯一副作用**：原子覆写 `~/.codex/config.toml`，移除 `[mcp_servers.<name>]` section
- 写盘路径：GetCurrentProcessId + uuid → 临时文件 → rename（WIN32 atomic）
- 无 HTTP、无 sidecar 调用、无其他持久化路径

## 编译噪声排除记录
以下不计入 delta：
- Mutex poison-guard 路径（sub_14124A510/sub_14124BFE0）
- GLOBAL_PANIC_COUNT / is_zero_slow_path（无 app 语义）
- sub_/anon_ hashlib vtable 改名
- 寄存器/栈偏移/地址变化
- rust_alloc (sub_140001360/sub_140001370) 大小微调
