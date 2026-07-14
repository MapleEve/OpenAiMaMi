# evidence — test_relay_provider_stream (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..relay..test_relay_provider_stream..$u7b$$u7b$closure$u7d$$u7d$$GT$::h55bb64472cfea066(`
- call-tree: max_depth=5, edges=56, pseudocode 节点=33(全部真实 decompile 落盘于 ./pseudocode/)。
- async: True。
- 副作用/依赖(从伪代码识别的调用面): `Entry`, `Hyper`, `client`, `command`, `entry`, `http`, `load`, `reqwest`, `serde_json`, `tauri`
- 关键字符串字面量(1.1.8 二进制内):
- (win strip, 字符串稀少)
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `_::drop`
- `alloc11collections5btree3map25IntoIter::dying_next`
- `alloc4sync16Arc::drop_slow`
- `core3ptr110drop_in_place::b::b::d::d`
- `core3ptr110drop_in_place::h09952542b32440d3E_0`
- `core3ptr112drop_in_place::b::b::d::d::hc1c98660046328a9E_0`
- `core3ptr114drop_in_place::hc4c89cbca36bb6e2E_0`
- `core3ptr114drop_in_place::hcf8ac3daec291689E_1`
- `core3ptr117drop_in_place`
- `core3ptr226drop_in_place::b::b::ha3ad3e2bb142417cE_0`
- `core3ptr247drop_in_place::b::b::h6bd0e33052caf50bE_0`
- `core3ptr35drop_in_place::h957e5d46b18b1481E_0`
- `core3ptr45drop_in_place::h4a8fc95b8a96a585E_0`
- `core3ptr45drop_in_place::h4a8fc95b8a96a585E_12`
- `core3ptr46drop_in_place::h524afe078d23f3b8E_0`

## Inferred (基于上述证据的行为解读)
- 行为: 以流式测试一个『已存在』的 relay provider：async HTTP(Hyper/reqwest)向 provider 端点发起流式请求并逐块回传。
- 接口/DTO: arg: provider id。响应: 流式 chunk via tauri。
- 副作用: reqwest/Hyper HTTP 流；serde_json；Entry 取凭据；tauri 事件。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(已存 provider 流式测试)。async depth5。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
