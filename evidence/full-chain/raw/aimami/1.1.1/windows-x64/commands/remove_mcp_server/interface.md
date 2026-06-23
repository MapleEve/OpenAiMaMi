# remove_mcp_server — interface.md

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器> (纯生产者)
binary: AiMaMi 1.1.1 win64.exe
gold_leaf: true

---

## IPC 命令合同

### 命令名

```
"remove_mcp_server"
```

字符串 VA: 0x1412ac146（唯一，xref 仅来自 0x1400190c2 即 ipc_handler）

### 参数（dim2 argKeys + extractor）

```typescript
// 前端实际调用（dim1 CCF 证据）
// file: assets/index-DdcCOEJG.js line:86 col:30806
removeMcpServer: (t) => ne("remove_mcp_server", { name: t })

// 前端 invocation CCF
//   handler_chain: mcp-page-CGgOsRmy.js:mutationFn → index-DdcCOEJG.js:removeMcpServer
//   terminal_call: ne("remove_mcp_server", {name:t})
//   argKeys: ["name"]   ← 前端只传 name
```

**Backend IPC 参数结构**（Rust 反序列化视角）：

```rust
struct RemoveMcpServerArgs {
    name: String,   // 必填 — MCP server key in config.toml
    repo: String,   // 1.1.1 新增 gate 字段（frontend 1.1.1 未传，backend 处理 absent = None path）
}
```

argKeys extractor 路径：
- `name` → `sub_1402FED40`（IPC param deserializer），返回 discriminant=6=Ok 时继续
- `repo` → 从 ipc_ctx+520 offset 的 payload 提取，送 `query_installed_skills_with_repo_111`

### 成功响应 DTO（dim4）

字节布局来自 `build_remove_mcp_server_ok_result_111`（VA:0x1402161B0）真实反编译：

```
结构大小: 0x88 = 136 字节

offset  size  value/type       说明
------  ----  ---------------  -------
+0      8     QWORD = 2        Result discriminant: Ok(2)
+8      8     ptr              "ok" 字符串指针 (heap alloc 2B, 0x6B6F = "ok")
+16     8     QWORD = 2        "ok" 字符串长度
+24     8     QWORD = 7        cap（对应 "success" 7B）
+32     8     ptr              "success" 字符串指针 (heap alloc 7B: 0x73756363657373)
+40     8     QWORD = 7        "success" 字符串长度
+48     8     QWORD = 0        padding / reserved
+56     8     QWORD = 8        field (capacity hint)
+64     8     QWORD = 0        padding
+72     16    OWORD            McpServerSummary field [0] (copied from input a2[0])
+88     16    OWORD            McpServerSummary field [1] (copied from input a2[1])
+104    16    OWORD            McpServerSummary field [2] (copied from input a2[2])
+120    8     QWORD            McpServerSummary field [6] (*a2+48 = a2[6])
+128    4     DWORD = 1        flag (int32)
+132    1     BYTE = 1         flag byte
```

McpServerSummary 单项大小: 0xE0 = 224 字节（Vec<McpServerSummary> 每项）

### 错误响应

| 错误条件 | 触发位置 | tag/code |
|---------|---------|---------|
| pending_auto_switch 锁被持有 | pending_auto_switch_state_lock_acquire_111 | Result::Err 0x8000000000000000 |
| repo 在 skill store 不存在（disc≠3） | query_installed_skills_with_repo_111 | Error via sub_14080C3C0 |
| name 参数解析失败（disc≠6） | sub_1402FED40 | Error via sub_14080C3C0 |
| config 文件读取失败 | win32_file_read_bytes_111 | Result::Err 0x8000000000000000 |
| MCP server name 未找到（hashmap miss） | mcp_config_read_and_remove_entry_111 | code=7; 错误文案 "MCP server not found: " @ 0x1412E92F9 |
| TOML section 解析失败 | mcp_config_toml_parse_and_remove_111 | Result::Err 0x8000000000000000 |
| 原子写盘失败 | relay_atomic_write_leaf_sys | "atomic write: missing parent" |
| Mutex poisoned (lock_byte[1]) | remove_mcp_server_exec_111 | *result_out = 0x8000000000000000 |

### 副作用（完整）

```
唯一持久化路径: ~/.codex/config.toml
操作: 原子移除 [mcp_servers.<name>] 整节
机制:
  1. GetCurrentProcessId() + RtlGenRandom() → 临时文件名 (uuid_v4_generate_raw_sys)
  2. CreateFile(GENERIC_WRITE | CREATE_ALWAYS) → WriteFile loop → CloseHandle
  3. rename(tmp → ~/.codex/config.toml)  ← WIN32 原子替换
  4. 失败则 DeleteFileW 清理临时文件

无 HTTP 调用 / 无 sidecar 调用 / 无其他持久化路径
```

### dim5 同平台 gate

```
tauri_ipc_main_dispatcher_sys (VA:0x14000d2a0)
  xref code @ 0x14001026c → remove_mcp_server_owner_sys (0x140019040)
  data xref @ 0x1414fb7f8 (command registry entry)
  data xref @ 0x14189e17c (vtable or jump table slot)
```

平台: windows-x64
ABI: __fastcall (x64 Microsoft)
同平台 dim5: PASS — handler 在同二进制 IPC dispatcher 内注册，无跨平台跳转

---

## dim1 关键发现：frontend `repo` 字段缺失

前端 CCF 证据（assets/index-DdcCOEJG.js line:86）：

```javascript
removeMcpServer: t => ne("remove_mcp_server", {name: t})
// ↑ 只传 name，无 repo 字段
```

后端 1.1.1 新增 `query_installed_skills_with_repo_111` 做 repo gate，但前端调用不传 `repo`。
实现含义：
- repo gate 在 param 缺省时走 None 路径（`discriminant≠3` → error_repo_not_found），
- 或 backend 对 absent `repo` 做默认值处理（需实现侧确认）。
- **实现者注意**：若复现 1.1.1 行为，`remove_mcp_server` 在不带 `repo` 调用时实际行为需依 backend absent-param 处理逻辑确定。
