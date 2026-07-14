# evidence — switch_account_and_restart_codex (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..switch_account_and_restart_codex..$u7b$$u7b$closure$u7d$$u7d$$GT$::h501b434b95c08b70(`
- call-tree: max_depth=4, edges=123, pseudocode 节点=40(全部真实 decompile 落盘于 ./pseudocode/)。
- async: True。
- 副作用/依赖(从伪代码识别的调用面): `Manager`, `Store`, `command`, `load`, `manager`, `tauri`
- 关键字符串字面量(1.1.8 二进制内):
- (win strip, 字符串稀少)
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `_::drop`
- `_CFRelease`
- `_pthread_mutex_destroy`
- `_pthread_mutex_trylock`
- `_pthread_mutex_unlock`
- `alloc11collections5btree3map25IntoIter::dying_next`
- `alloc4sync16Arc::drop_slow`
- `core3ptr115drop_in_place`
- `core3ptr119drop_in_place`
- `core3ptr121drop_in_place`
- `core3ptr148drop_in_place`
- `core3ptr170drop_in_place`
- `core3ptr212drop_in_place`
- `core3ptr285drop_in_place::b::d::b::b`
- `core3ptr289drop_in_place::b::d::b::b`

## Inferred (基于上述证据的行为解读)
- 行为: 异步切换账号并重启 Codex：应用账号切换到 Store/Manager，然后触发 Codex 重启。owner 为 async 闭包。
- 接口/DTO: arg: 目标 account id。响应: Result<()>。
- 副作用: tauri Manager/Store；(poll 内)进程重启。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增/变更(账号切换 + 重启编排)。async。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
