# evidence — test_relay_draft_stream (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::relay::test_relay_draft_stream::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h30bd936d9e64158b(`
- call-tree: max_depth=5, edges=60, pseudocode 节点=31(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `command`, `entry`, `kill`, `serde_json`, `tauri`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `capacity overflowLayoutError`
- `donetooletagfromlinkvaryMenu`
- `error`
- `modelcontentstream`
- `okprimary_windowprolitechatgptprolitepro`
- `textuserkill-wal-shmlsof`
- `}false`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc14___rust_realloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc26___rust_alloc_error_handler`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::body`
- `_::fmt`
- `_memcpy`
- `alloc3vec16Vec::extend_from_slice`
- `alloc5alloc18handle_alloc_error`
- `alloc7raw_vec12handle_error`
- `alloc7raw_vec17capacity_overflow`
- `alloc7raw_vec20RawVecInner::finish_grow`
- `alloc7raw_vec20RawVecInner::reserve21do_reserve_and_handle`
- `core3ptr40drop_in_place`

## Inferred (基于上述证据的行为解读)
- 行为: 以流式(stream)测试一个『草稿』(尚未保存的)relay provider 配置：发起 model/content/stream 请求，逐块回传给前端，验证 provider 可用性(chatgpt/prolite/pro 等模型标签)。
- 接口/DTO: arg: draft provider 配置(未持久化)。响应: 流式 chunk(model/content/stream 字段) via tauri。
- 副作用: serde_json 序列化请求/响应；tauri 事件流；kill 清理。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(草稿流式测试，配合中转 provider 配置体验)。depth5。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
