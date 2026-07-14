# evidence — delete_sessions (win 1.1.8)



## Confirmed (直接来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall sub_1403E9230(__int64 a1)`
- call-tree: max_depth=3, edges=139, pseudocode 节点=40(全部真实 decompile 落盘于 ./pseudocode/)。
- async: False。
- 副作用/依赖(从伪代码识别的调用面): `Delete`, `delete`, `load`
- 关键字符串字面量(1.1.8 二进制内):
- `capacity overflow`
- `}string or map`
- 主要 internal callee(call-tree edges):
- `A130`
- `A2D00`
- `A30E0`
- `A440`
- `A550`
- `A9710`
- `ABCB0`
- `AC0`
- `AC40`
- `AC970`
- `AD451`
- `AD46B`
- `AD490`
- `AD720`
- `AD780`
- `AD9E0`

## Inferred (基于上述证据的行为解读)
- 行为: [win/stripped] 删除会话线程，行为对应 mac core::sessions::delete_sessions(sqlite DELETE threads + 删文件)。owner sub_1403E9230。
- 接口/DTO: arg: session id 列表。响应: Result<()>。
- 副作用: load 配置;delete(sqlite/文件)。win 二进制 strip，字符串少，行为以 mac 对等命令为准 + win 反编译佐证。

## Unknown / 未闭合
- win 二进制 strip,DTO 字段名/精确 arg key 需结合前端 invoke 签名交叉确认(见 frontend ipc-contracts)。
- async 命令(get_relay_provider_quota/refresh_single_account_usage/switch_account_and_restart_codex/test_relay_provider_stream)owner 为闭包 drop glue,真状态机逻辑内联于 poll,已在 breadth 40 节点内覆盖但未线性化为单一 poll 链。

## Delta vs 1.0.9 基座
- 1.1.8 delta(与 mac delete_sessions 同源)。depth3。
- 分类依据: version-delta/win-delta.txt(本命令属 1.0.9→1.1.8 delta 集)。
