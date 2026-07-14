# evidence — confirm_pending_auto_switch_and_restart_codex (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..system..confirm_pending_auto_switch_and_restart_codex..$u7b$$u7b$closure$u7d$$u7d$$GT$::h4c9bd61f3a4d488d(`
- call-tree: max_depth=1, edges=3, pseudocode 节点=3(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `command`, `tauri`
- 关键字符串字面量(1.1.8 二进制内):
- (win strip, 字符串稀少)
- 主要 internal callee(call-tree edges):
- `tokio7runtime4task3raw7RawTask21drop_join_handle_slow`
- `tokio7runtime4task5state5State21drop_join_handle_fast`

## Inferred (基于上述证据的行为解读)
- 行为: 组合命令：先确认(应用)待定的 auto-switch 账号切换，再重启 Codex。是 confirm_pending_auto_switch 与 restart_codex 的编排包装(thin wrapper)，故 call-tree 主链浅(depth1，委派给两条已逆命令)。
- 接口/DTO: arg: 待切换上下文。响应: Result<()>。
- 副作用: tauri 命令；委派持久化切换 + 进程重启(见 confirm_pending_auto_switch / restart_codex 叶)。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(auto-switch 自动切换 + 重启编排，对应 changelog『中转 agent 任务体验/自动切换』)。注：捕获到的是命令闭包的 drop glue，主逻辑在被委派命令中。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
