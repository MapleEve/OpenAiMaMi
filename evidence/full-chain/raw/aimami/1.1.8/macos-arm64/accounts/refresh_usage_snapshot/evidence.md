# evidence — refresh_usage_snapshot (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::accounts::refresh_usage_snapshot_with_retry::h8a02ac7b76e46ace(`
- call-tree: max_depth=8, edges=268, pseudocode 节点=44(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Emit`, `File`, `Load`, `Manager`, `SAVE`, `Write`, `client`, `command`, `emit`, `get`, `kill`, `load`, `read_to_string`, `reqwest`, `serde_json`, `std::fs`, `store`, `tauri`, `update`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `
                 `
- `
                   `
- `AUTO_SWITCH_DAEMON_REPAIR_FAILED`
- `PROGRESSIVE_STATE_SAVE_FAILED`
- `dev.aimami.auto-switch`
- `poisoned lock: another task failed inside`
- `runtime-state-updated`
- `usageruntime-state-updated`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::b::d::equal`
- `_::clone`
- `_::custom`
- `_::deserialize_i32`
- `_::deserialize_struct`
- `_::drop`
- `_::eq`
- `_::extend`
- `_::fmt`
- `_::from_iter`
- `_::next_key_seed12has_next_key`
- `_::parse_str`

## Inferred (基于上述证据的行为解读)
- 行为: 刷新整体用量快照(with_retry 变体)：拉取 usage、保存渐进式状态、emit 'runtime-state-updated' 通知前端；与 auto-switch daemon 集成(修复失败上报)。
- 接口/DTO: 响应: Result<UsageSnapshot>。事件: 'runtime-state-updated'。错误码: AUTO_SWITCH_DAEMON_REPAIR_FAILED / PROGRESSIVE_STATE_SAVE_FAILED。
- 副作用: reqwest 拉取；std::fs 读写状态；store 保存；tauri emit；auto-switch daemon(dev.aimami.auto-switch)。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 delta(用量快照 + auto-switch daemon 修复 + 渐进保存，对应『中转稳定性/线程DB迁移』)。depth8。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
