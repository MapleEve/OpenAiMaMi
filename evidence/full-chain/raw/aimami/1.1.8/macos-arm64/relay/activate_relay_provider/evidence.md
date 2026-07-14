# evidence — activate_relay_provider (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::relay::activate_relay_provider::heab3b124ae2d75b0(`
- call-tree: max_depth=8, edges=157, pseudocode 节点=42(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Manager`, `command`, `load`, `manager`, `reqwest`, `save`, `serde_json`, `tauri`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `\x0Frelay provider \xC0\x0A not found`
- `codexmate_lib::core::relay::manager`
- `src/core/relay/manager.rs`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc26___rust_alloc_error_handler`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::clone`
- `_::drop`
- `_::fmt`
- `_::from_iter`
- `_::log`
- `__Unwind_Resume`
- `_memcmp`
- `_memcpy`
- `_memmove`
- `_pthread_mutex_lock`
- `alloc3fmt6format12format_inner`

## Inferred (基于上述证据的行为解读)
- 行为: 按 provider id 激活某个 relay(中转)provider。owner 加载 RelayManager(core/relay/manager.rs)，置激活态并持久化；provider 不存在时返回 'relay provider {} not found' 错误。
- 接口/DTO: arg: provider id(String)。响应: Result<(), CoreError>。错误串 'relay provider .. not found'。
- 副作用: 持久化 relay 状态(save + std::fs::write)；serde_json 序列化；reqwest 可能用于激活时校验；tauri 命令上下文。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- relay provider 体系为 1.1.x 引入(相对 1.0.9 基座属新增中转能力)。owner 已对 1.1.8 二进制反编译确认。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
