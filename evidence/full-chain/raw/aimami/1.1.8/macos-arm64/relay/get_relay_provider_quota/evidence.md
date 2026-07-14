# evidence — get_relay_provider_quota (mac 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..relay..get_relay_provider_quota..$u7b$$u7b$closure$u7d$$u7d$$GT$::h479ac38e60aeb3ac(`
- call-tree: max_depth=5, edges=56, pseudocode 节点=34(全部真实 decompile 落盘于 ./pseudocode/)。
- async: True。
- 副作用/依赖(从伪代码识别的调用面): `Entry`, `Hyper`, `client`, `command`, `entry`, `http`, `hyper`, `load`, `reqwest`
- 关键字符串字面量(1.1.8 二进制内):
- (win strip, 字符串稀少)
- 主要 internal callee(call-tree edges):
- `Y7DaGC1cwg_7___rustc14___rust_dealloc`
- `_::drop`
- `alloc4sync16Arc::drop_slow`
- `core3ptr108drop_in_place::b::b::d::d`
- `core3ptr110drop_in_place::h09952542b32440d3E_0`
- `core3ptr114drop_in_place::hc4c89cbca36bb6e2E_0`
- `core3ptr114drop_in_place::hcf8ac3daec291689E_1`
- `core3ptr226drop_in_place::b::b::ha3ad3e2bb142417cE_0`
- `core3ptr247drop_in_place::b::b::h6bd0e33052caf50bE_0`
- `core3ptr35drop_in_place::h957e5d46b18b1481E_0`
- `core3ptr44drop_in_place`
- `core3ptr46drop_in_place::h524afe078d23f3b8E_0`
- `core3ptr49drop_in_place::h54ea0a9b41b92799E_0`
- `core3ptr49drop_in_place::h7c85e54303b5a815E_2`
- `core3ptr57drop_in_place::h95e43b54ca5e420cE_0`
- `core3ptr64drop_in_place::h72160e542482e768E_0`

## Inferred (基于上述证据的行为解读)
- 行为: 异步拉取某 relay provider 的配额/用量：构造 HTTP 请求(Hyper/reqwest client)访问 provider quota 端点，解析响应。owner 为该命令 async 闭包的 poll 状态机。
- 接口/DTO: arg: provider id。响应: Result<QuotaInfo>(用量/配额字段)。
- 副作用: reqwest/Hyper HTTP 出网；Entry(keyring?)取凭据；load 配置。

## Unknown / 未闭合
- 部分深层库调用(reqwest/serde 内联)未逐字展开,按 leaf_no_internal_callee 终端处理。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(relay 配额可视化，1.1.x 中转能力)。async depth5。
- 分类依据: version-delta/mac-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
