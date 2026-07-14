# evidence — delete_sessions (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::core::sessions::delete_sessions::h71274b4f5f91b826(`
- call-tree: max_depth=6, edges=178, pseudocode 节点=43(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Connection`, `DELETE`, `Entry`, `File`, `connection`, `delete`, `execute`, `file`, `get`, `insert`, `load`, `read_to_string`, `remove_file`, `rusqlite`, `serde_json`, `spawn`, `sqlite`, `std::fs`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `
      `
- `
          `
- `,
      (int)`
- `DELETE FROM threads WHERE id = ?1payload`
- `\x16sqlite delete thread: \xC0src/core/sessions.rs`
- `\x1Asqlite delete spawn edge: \xC0\x16sqlite delete thread: \xC0src/core/sessions.rs`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::from_iter`
- `_::index_into`
- `_::next`
- `_::next_back`
- `_::next_match`
- `_::write`
- `_::write17h1d8db205c8c4d35eE_0`
- `_CCRandomGenerateBytes`
- `___bzero`
- `___error`
- `_bind_parameter_count`
- `_changes64`
- `_close$NOCANCEL`

## Inferred (基于上述证据的行为解读)
- 行为: 删除会话线程：对 sqlite 执行 'DELETE FROM threads WHERE id=?1'，并删除 spawn edge 记录、移除关联文件(remove_file)。
- 接口/DTO: arg: session/thread id 列表。响应: Result<()>。SQL: DELETE FROM threads WHERE id=?1。
- 副作用: rusqlite Connection.execute 删库；std::fs::remove_file 删文件；错误串 'sqlite delete thread' / 'sqlite delete spawn edge'(src/core/sessions.rs)。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 delta(会话/线程管理，配合线程 DB 迁移)。owner=core::sessions::delete_sessions 已 1.1.8 反编译，depth6。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
