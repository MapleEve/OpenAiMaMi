# reveal_relay_api_key — Owner (WIN 1.1.1 x64)

## 基本信息

| 字段 | 值 |
|---|---|
| 命令 | `reveal_relay_api_key` |
| 平台 | windows-x64 (PE, pe_machine=x64) |
| 版本 | 1.1.1 |
| Binary SHA256 | d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610 |
| IDB | <本地路径>|
| session | <审计会话> |
| machine | <本地机器> |

## String Locator

- `"reveal_relay_api_key"` @ 0x1412ac531 (单一命中)
- xref → `reveal_relay_api_key_owner_sys` @ 0x1400128a2 (data ref inside owner)

## Owner Wrapper

| 函数 | VA | Size | 描述 |
|---|---|---|---|
| `reveal_relay_api_key_owner_sys` | 0x140012820 | 0x511=1297B | Tauri command owner wrapper |

## 参数

| 参数名 | 类型 | String len | 备注 |
|---|---|---|---|
| `manager` | String | 7B | relay provider manager identifier |
| `providerId` | String | 10B | relay provider ID to reveal API key for |

String 常量验证：
- `"manager"` @ 0x1412ac6c0 ✓ (7B, matches v23[2]=7)
- `"providerId"` @ 0x1412ac6c7 ✓ (10B, matches v23[2]=10 in second param parse)

## Dispatcher 确认

主 dispatcher: `sub_14000D2A0` (0x14000D2A0, 41-case string-length switch, 17870B)
`reveal_relay_api_key` 在 session <审计会话> 的 Win Divergence Confirmation 阶段已确认存在于 delta 命令集（9条新增命令之一）。

## 调用关系

```
reveal_relay_api_key_owner_sys(0x140012820)
├── sub_14006F4B0           -- manager param extract (first param)
├── sub_141214620           -- param validation
├── sub_1402FED40           -- providerId param extract (second param)
├── relay_reveal_api_key_state_lookup_sys(0x1406D6E80)  -- core relay state lookup
├── reveal_relay_api_key_response_build_sys(0x1402188F0) -- success response build
├── sub_14082F6F0           -- success path (same as error builder delegate)
└── sub_14080C3C0           -- error response build
```

## Owner-gate 结论

PREWRITE_PRODUCER_COLLISION_GATE_V1 — no collision:
- INDEX.jsonl: 无 reveal_relay_api_key 条目
- raw/aimami/1.1.1/windows-x64/reveal_relay_api_key: 目录不存在
- 本轮 session=<审计会话> 为 owner
