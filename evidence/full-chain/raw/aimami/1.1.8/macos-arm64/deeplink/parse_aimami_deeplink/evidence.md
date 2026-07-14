# evidence — parse_aimami_deeplink (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::deeplink::parse_aimami_deeplink::h39ef5a3b45ea0d85(__int64 a1, __int64 *a2)`
- call-tree: max_depth=8, edges=112, pseudocode 节点=43(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Url`, `command`, `deeplink`, `entry`, `file`, `get`, `insert`, `load`, `url`, `write`
- 关键字符串字面量(1.1.8 二进制内):
- `
      `
- `,
      (int)`
- `//::/./`
- `[...]attempted to index str up to maximum usize`
- `aimami`
- `app`
- `capacity overflowLayoutError`
- `file`
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc12___rust_alloc`
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `Y7DaGC1cwg_7___rustc17rust_begin_unwind`
- `Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed`
- `Y7DaGC1cwg_7___rustc26___rust_alloc_error_handler`
- `Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2`
- `_::clone`
- `_::drop`
- `_::from`
- `_::from_iter`
- `_::next`
- `_::split_prefix`
- `_::write17h1d8db205c8c4d35eE_0`
- `_CCRandomGenerateBytes`
- `_memcmp`
- `_memcpy`

## Inferred (基于上述证据的行为解读)
- 行为: 解析 aimami:// 自定义 scheme 深链：拆 host/path/query(Url)，按 'app' 等路由分发到应用内动作。含 str 索引边界保护。
- 接口/DTO: arg: deeplink 字符串(a1)、输出参数 a2。响应: 解析后的路由/动作结构。scheme='aimami'。
- 副作用: Url 解析；写入解析结果(insert/write);可能触发应用内导航。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(深链入口，对应『一键导入/deeplink 唤起』)。depth8。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
