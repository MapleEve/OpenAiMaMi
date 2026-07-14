# evidence — cancel_chatgpt_oauth_login (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h601be7664e294980(`
- call-tree: max_depth=8, edges=70, pseudocode 节点=42(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Write`, `command`, `spawn`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `Once instance has previously been poisoned`
- `called Result::unwrap() on an Err valueWouldBlock`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc26___rust_alloc_error_handler`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::drop`
- `_::from`
- `__Unwind_Resume`
- `_dispatch_release`
- `_dispatch_semaphore_create`
- `_dispatch_semaphore_signal`
- `_dispatch_semaphore_wait`
- `_malloc`
- `_posix_memalign`
- `_pthread_mutex_init`
- `_pthread_mutex_lock`

## Inferred (基于上述证据的行为解读)
- 行为: 取消一次进行中的 ChatGPT OAuth 登录流程：终止/回收之前 spawn 的登录子流程(本地回调监听/浏览器授权等待)。
- 接口/DTO: arg: 无或 login session 句柄。响应: Result<()>。
- 副作用: spawn 管理(终止子任务/回调 server)；write 清理登录中间态。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(与 begin_chatgpt_oauth_login 配对，对应 changelog『API 登录模式/中转注入重构』)。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
