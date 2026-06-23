# load_relay_state — Interface Contract (windows-x64, 1.1.1)
<!-- session=wf-aimami111-delta-20260618-goldleaf | machine=<本地机器> | producer -->
<!-- module=load_relay_state_ipc_handler_111 | platform=windows-x64 | version=1.1.1 -->
<!-- baseline=1.0.9 | sha=d24e429a | gate_tier=gold-leaf -->

## IPC Command

```
command:  load_relay_state
platform: windows-x64
handler:  load_relay_state_ipc_handler_111 @ 0x140015870
```

## Argument Schema (dim2)

| 引数 | 类型 | 提取位置 |
|---|---|---|
| `a1` | `__int64` | Tauri InvokeResolver 上下文指针，含 relay manager Arc，520+400+16 字节 payload |
| arg keys (frontend) | — | 无显式 JSON arg keys — 调用方仅发送 command name，handler 从 manager Arc 读取状态 |

前端调用形式 (inferred from IPC pattern):
```typescript
// frontend CCF (inferred — win64 binary 不含 webview JS)
await invoke('load_relay_state')
// 无参数，返回 RelayStateResponse DTO
```

## Response DTO (dim4, 1.1.1)

| JSON 字段 | Rust 偏移 | 类型 | 1.0.9 | 1.1.1 |
|---|---|---|---|---|
| `schemaVersion` | `a2+440` | u32/bool | 有 | 有 |
| `success` | `a2+444` | bool | 有 | 有 |
| `code` | `a2+0` | string | 有 | 有 |
| `message` | `a2+24` | string | 有 | 有 |
| `warnings` | `a2+48` | array? | **无** | **新增** |
| `data` | `a2+72` | object (368 bytes) | 有 | 有 |

`warnings` 字段由 `relay_response_field_warnings_write_sys` @ `0x1402494C0` 写入；
key string `"warnings"` @ `0x1412C06DA`。

## Side-Effects (dim5, 1.1.1 新增)

| 副作用 | 描述 | 触发条件 |
|---|---|---|
| TCP connect | `sub_141077F30` — 300ms timeout，50ms retry | skill store 查询通过（discriminant≠6）时 |
| disk write | `relay_atomic_write_leaf_sys` — atomic write `aimami-relay.json`，GetCurrentProcessId+uuid tmpfile+rename | TCP connect-ok 和 connect-fail 两条分支均写盘 |

## Error Paths

| 条件 | 行为 |
|---|---|
| `run_codex_router_diagnostics_owner_sys` 返回非零 | 跳过所有步骤，直接清理返回 |
| `query_installed_skills_with_repo_111` discriminant == 6 (None) | 调用 `has_notch_invoke_resolver_respond` 返回 error IPC，goto LABEL_16 |
| `relay_config_serialize_and_atomic_write_sys` discriminant ≠ 10 | 调用 `sub_140708350` 处理 write-error（log/metric，不 panic） |
| relay state poisoned | `relay_state_read_lock_snapshot_sys` 内 panic `"relay state poisoned"` @ `0x1412EA5ED` |
| Display impl error | `relay_state_snapshot_to_ok_response_sys` 内 panic `"a Display implementation returned an error unexpectedly"` @ `0x1412C23F0` |

## Struct Layout Notes

RelayManager Arc 内部布局（从 `relay_config_connection_refresh_and_write_sys` 逆向推断）:

```
v5 = *[a1+16]         // Arc<Mutex<RelayManagerInner>> inner ptr
v5+16                 // mutex lock byte (CAS spinlock)
v5+17                 // mutex poison flag
v5+24                 // Option<Arc<connection_handle>>
v5+32                 // port: u16
v17+16..              // RelayConfig struct (host, port, flags, path, ...)
v17+72..v17+136       // connection string fields (Strings, Arc refs)
v17+144               // port u16
v17+146               // connected: bool
```
