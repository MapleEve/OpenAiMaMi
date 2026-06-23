# load_relay_state — Owner Record (windows-x64, 1.1.1)
<!-- session=<审计会话> | machine=<本地机器> | producer -->
<!-- module=load_relay_state_ipc_handler_111 | platform=windows-x64 | version=1.1.1 -->
<!-- baseline=1.0.9 | sha=d24e429a | gate_tier=gold-leaf -->

## Identity

| 属性 | 值 |
|---|---|
| symbol | `load_relay_state_ipc_handler_111` |
| VA | `0x140015870` |
| size_bytes | 911 (`0x38f`) |
| idb_path | `<本地路径>|
| imagebase | `0x140000000` |
| module string | `"codexmate_lib::core::relay::manager"` @ `0x1412EA8F8` |
| source path string | `"src\core\relay\manager.rs"` @ `0x1412EA601` |

## Locator Evidence

| 定位方式 | 地址/值 |
|---|---|
| string anchor `"load_relay_state"` | `0x1412AC4B0` |
| xref from owner | `0x1400158F0` (data ref inside owner body) |
| string anchor `"manager"` | `0x1412AC6C0` |
| xref count | 1 (唯一调用方，即 Tauri command 注册表) |

## Delta vs 1.0.9

| 变更类型 | 描述 |
|---|---|
| `delta_class` | `callee_set_restructure + DTO_field_addition` |
| 新增 pre-flight | `query_installed_skills_with_repo_111` — skill store 查询，1.0.9 无此步骤 |
| 新增副作用 | `relay_config_connection_refresh_and_write_sys` — TCP connect + 写盘，1.0.9 success path 无写盘 |
| 新增 DTO 字段 | `warnings` — JSON 序列化新增，1.0.9 无 |
| 移除 callee | `sub_1400DA320` (auth/capability guard) |
| 移除 callee | `sub_1411CE640` (JSON state dispatcher) |
| 移除 callee | `sub_14043BAA0` (load relay state core, RwLock read) |
| 移除 callee | `sub_14006F000` (旧 response serializer) |

## IPC Command Registration

Tauri command 名: `load_relay_state`
注册字符串: `"load_relay_state"` @ `0x1412AC4B0`，xref 仅见于 owner `0x1400158F0`。
IPC 响应通过 `has_notch_invoke_resolver_respond` (`0x14080C3C0`) 派发。

## IDB Annotation Status

| 操作 | 状态 |
|---|---|
| rename → `load_relay_state_ipc_handler_111` | 已完成（前序 session） |
| set_comments @ owner VA | 已完成（前序 session） |
| rename gold-leaf 追加 | 本 session — 见 gate-report.json idb_annotations |
| idb_save | 本 session 完成 |
