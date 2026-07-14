# evidence — force_kill_codex (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::system::force_kill_codex::hd9826f4b47b8fdbc(__int64 a1)`
- call-tree: max_depth=5, edges=172, pseudocode 节点=40(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Command`, `File`, `command`, `file`, `get`, `insert`, `kill`, `load`, `spawn`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- ` | `
- `,
      (int)`
- `-- | `
- `-axpid=,command=-t-- | `
- `-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper`
- `-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper`
- `-shmlsof`
- `-t-- | `
- `-wal-shmlsof`
- `<string-with-nul>`
- `\vps failed: \xC0\xC0\xC0`
- `\xC0\xC0`
- `called Result::unwrap() on an Err valueWouldBlock`
- `capacity overflowLayoutError`
- `crashpad_handler-axpid=,command=-t-- | `
- `kill-wal-shmlsof`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc14___rust_realloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::add`
- `_::b::d::spec_new_impl`
- `_::clone`
- `_::drop`
- `_::fmt`
- `_::from_iter`
- `_::is_contained_in`
- `_::next_match`
- `_::try_fold`
- `_CCRandomGenerateBytes`
- `__Unwind_Resume`

## Inferred (基于上述证据的行为解读)
- 行为: 强制杀掉 Codex 进程：先 osascript『tell application "Codex" to quit』尝试优雅退出，再 lsof/ps 找残留(含 Codex Helper)并 kill(SIGKILL)，清理 -wal/-shm。
- 接口/DTO: arg: a1(上下文)。响应: Result<()>。
- 副作用: std::process::Command spawn osascript/lsof/ps/kill；File 操作清理 wal/shm。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 delta(系统诊断/进程管理增强，对应 changelog『系统诊断 xhigh』)。depth5。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
