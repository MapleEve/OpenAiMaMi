# evidence — set_codex_router_no_account_mode (win 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `char __fastcall sub_1409E20E0(unsigned __int64 a1, __int64 *a2)`
- call-tree: max_depth=2, edges=172, pseudocode 节点=40(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Manager`, `load`
- 关键字符串字面量(1.1.8 二进制内):
- `}string or map`
- 主要 internal callee(call-tree edges):
- `A0`
- `A130`
- `A30E0`
- `A40`
- `A42E0`
- `A4710`
- `A550`
- `A9710`
- `A982C0`
- `ABCB0`
- `AC130`
- `AC40`
- `AC970`
- `AD451`
- `AD46B`
- `AD490`

## Inferred (基于上述证据的行为解读)
- 行为: [win/stripped] 设置 codex router 的『无账号模式』开关:置位后中转/路由在无账号下按特定策略工作。owner sub_1409E20E0(29KB,含较多状态处理)。
- 接口/DTO: arg: enabled(bool)。响应: Result<()>。
- 副作用: Manager 状态更新 + 持久化;load。

## Unknown / 未闭合
- win 二进制 strip,DTO 字段名/精确 arg key 需结合前端 invoke 签名交叉确认(见 frontend ipc-contracts)。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 新增(无账号模式,对应『API 登录模式/无账号路由』)。
- 分类依据: version-delta/win-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
