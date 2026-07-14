# evidence — detect_api_proxy_config (win 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `char __fastcall sub_140A4AB80(__int64 a1, __int64 a2)`
- call-tree: max_depth=2, edges=151, pseudocode 节点=40(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `load`
- 关键字符串字面量(1.1.8 二进制内):
- `}string or map`
- 主要 internal callee(call-tree edges):
- `A0`
- `A130`
- `A5190`
- `A9710`
- `A982C0`
- `ABCB0`
- `ABF0`
- `AC0`
- `AC130`
- `AC560`
- `AC970`
- `AD451`
- `AD46B`
- `AD490`
- `AD720`
- `AD780`

## Inferred (基于上述证据的行为解读)
- 行为: [win/stripped] 探测系统/环境的 API 代理配置(HTTP(S)_PROXY / 系统代理设置),供中转注入判断是否走代理。owner sub_140A4AB80(18KB,逻辑较重)。
- 接口/DTO: 响应: Result<ProxyConfig>(是否有代理/地址)。
- 副作用: load(读系统/环境代理配置)。

## Unknown / 未闭合
- win 二进制 strip,DTO 字段名/精确 arg key 需结合前端 invoke 签名交叉确认(见 frontend ipc-contracts)。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(win 侧代理探测，对应『中转连接稳定性』)。
- 分类依据: version-delta/win-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
