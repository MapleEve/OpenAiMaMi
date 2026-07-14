# evidence — upsert_relay_provider (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::relay::upsert_relay_provider::hfeea186fcef12259(`
- call-tree: max_depth=8, edges=190, pseudocode 节点=44(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Manager`, `Write`, `command`, `file`, `get`, `kill`, `load`, `manager`, `reqwest`, `save`, `serde_json`, `std::fs`, `tauri`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `
                     `
- `a Display implementation returned an error unexpectedly`
- `codexmate_lib::core::relay::manager`
- `main`
- `poisoned lock: another task failed inside`
- `src/core/relay/manager.rs`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc26___rust_alloc_error_handler`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::clone`
- `_::drop`
- `_::eq`
- `_::fmt`
- `_::from_iter`
- `_::log`
- `_::next_match17hb964a2350606f792E_2`
- `_::run_on_main_thread`
- `_::write_str`
- `_CFRelease`
- `_getentropy`
- `_memcmp`

## Inferred (基于上述证据的行为解读)
- 行为: 插入或更新一个 relay provider：写入 RelayManager(core/relay/manager.rs)，持久化到磁盘；可能校验连通性。
- 接口/DTO: arg: provider 配置对象(name/endpoint/key/tags 等)。响应: Result<Provider>。
- 副作用: RelayManager save + std::fs::write；serde_json；reqwest 校验；tauri。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 delta(relay provider 增改，1.1.x 中转)。depth8。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
