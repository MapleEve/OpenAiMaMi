# remove_mcp_server — owner.md

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器> (纯生产者)
binary: AiMaMi 1.1.1 win64.exe
idb: <本地路径>
baseline: 1.0.9 已逆完
delta_class: integrity_recovered
gold_leaf: true

---

## owner 函数三件套

| 角色 | 名称（IDB 已更名） | VA | size |
|------|-------------------|----|------|
| IPC handler（dispatch 入口） | remove_mcp_server_owner_sys | 0x140019040 | 0x4C1 = 1217B |
| 核心 executor（两阶段写盘） | remove_mcp_server_exec_111 | 0x1401C4F40 | 0x755 = 1877B |
| Ok 响应构建器 | build_remove_mcp_server_ok_result_111 | 0x1402161B0 | 0x115 = 277B |

## IPC dispatch 链路（dim5 same-platform gate）

```
tauri_ipc_main_dispatcher_sys   VA:0x14000d2a0  (xref caller → 0x14001026c)
  └── remove_mcp_server_owner_sys  VA:0x140019040
```

- handler 由 `tauri_ipc_main_dispatcher_sys` 在运行时 lookup 并调用
- 数据段 xref: 0x1414fb7f8, 0x14189e17c（命令注册表条目）
- 字符串证据: "remove_mcp_server" @ 0x1412ac146，唯一匹配，从 ipc_handler 引用

## delta vs 1.0.9 要点（owner 视角）

1. **pending_auto_switch_state_lock_acquire_111**（VA:0x14006EDC0）：IPC handler 入口第一个新检查。
   若系统正处于 auto-switch 待定状态，立即拒绝，不进入 executor。1.0.9 无此门。

2. **query_installed_skills_with_repo_111**（VA:0x141214620）：新增 repo+name 双字段 skill store gate。
   返回 discriminant=3（Some/found）才放行；discriminant=6（None）拒绝。1.0.9 无此函数。

3. **IPC param `repo: String`**：后端 gate 所需字段。
   但前端 1.1.1 实际调用仅传 `{name:t}` —— `repo` 在 backend 当 param 缺省时走 None 路径（dim1 核实）。

4. executor 内部 **InterlockedCompareExchange8 spinlock**（1.0.9 无）：防并发写 config.toml。

5. **核心写盘链路不变**：两阶段 (read+hashmap_remove → toml_parse+section_remove) 同 1.0.9，
   relay_atomic_write_leaf_sys (CreateFile/WriteFile/rename) 机制完全继承。

## IDB 备注（已写入）

- 0x140019040: `gold-leaf for remove_mcp_server; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion`
- 0x1401C4F40: executor gold-leaf comment
- 0x1402161B0: ok_builder gold-leaf comment
- 0x141214620: delta-new gate gold-leaf comment
- 0x14006EDC0: auto-switch lock gold-leaf comment
