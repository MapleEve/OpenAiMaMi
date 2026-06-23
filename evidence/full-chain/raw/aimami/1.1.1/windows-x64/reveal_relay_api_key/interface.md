# reveal_relay_api_key — Interface / DTO / Error / Side-effects (WIN 1.1.1 x64)

## 请求 DTO

| 参数 | 类型 | 必填 | String 长度常量 | 描述 |
|---|---|---|---|---|
| `manager` | `Option<String>` | 否 | 7B（键名长度） | relay provider manager 过滤标识；前端不传（`None`），backend 接受缺失作为 None |
| `providerId` | `String` | 是 | 10B | 要获取 API key 的 relay provider ID |

**manager 参数澄清（本轮新增，<审计会话> gate upgrade）**：
- 前端实际调用：`vt("reveal_relay_api_key", {providerId: t})` — 只传 `providerId`，不传 `manager`
- Backend `sub_14006F4B0` 提取 `manager` 失败时（`!v4`），走 `sub_141214620` optional fallback path
- `v38[0] == 6`（Ok variant）= optional absent accepted，`v4 = v38[1]`（None repr），继续执行
- `reveal_relay_api_key_response_build_sys` 调用签名：`sub_1406D6E80(result, a2=manager_val, v5=providerId_ptr, v6=providerId_len)`
- `manager` 为 None 时，`relay_reveal_api_key_state_lookup_sys` 用 `a2=None/0` 无过滤扫描所有 providers

## 响应 DTO（成功）

**已从常量完全确认（本轮新增，response_build_sys 0x1402188F0 字节级验证）**：

```
// reveal_relay_api_key_response_build_sys 写入:
// alloc 2B: *v8 = 27503 = 0x6B6F = 'o'+'k' (LE) → field label "ok"
// alloc 7B:
//   v11[0..3] = 1667462483 = 0x63637553 LE → bytes: 0x53,0x75,0x63,0x63 = "Succ"
//   v11[3..6] = 1936942435 = 0x73736563 LE → bytes: 0x65,0x73,0x73 = "ess"
//   Combined 7B = 0x53756363657373 = "Success"
// → response field[1] label = "Success" (7B confirmed)
//
// result layout:
//   a1[0] = 2 (Ok tag)
//   a1[1] = ptr to "ok" (2B string)
//   a1[2] = 2 (len of "ok")
//   a1[3] = 7 (len of "Success" label)
//   a1[4] = ptr to "Success" (7B string)
//   a1[5] = 7
//   a1[6..8] = apiKey payload (from relay state lookup or keychain)
//   a1[48] = 0, a1[56] = 8 (additional tuple fields)
//   a1[96..100] = {1, 1} (Ok/type markers)
```

确认 JSON 响应：
```json
{
  "ok": "<apiKey_string>",
  "Success": "<apiKey_value>"
}
```

**注意**: Tauri 序列化后的实际 JSON key 由前端读取字段决定。response_build_sys 写入两个字段："ok" (2B tag) 和 "Success" (7B label)，apiKey 内容跟随第二字段。前端消费字段名需从 relay-page CCF 确认（`ft.revealApiKey(b.id)` 的返回值消费路径）。

## 响应 DTO（失败）

通过 `sub_14080C3C0`（error response builder）：
- providerId 参数解析失败 → 直接 error return
- provider not found in state → `sub_14080C3C0`（state lookup 返回空）
- relay state poisoned → panic（"relay state poisoned"）
- keychain error: code 0x8000000000000007

## 错误路径

| 场景 | 处理 | 结果 |
|---|---|---|
| manager 参数缺失（None） | `sub_141214620` optional fallback → Ok(None) | 继续执行，无过滤查全部 providers |
| manager 类型错误（非 String） | `sub_141214620` 验证失败 | error response via `sub_14080C3C0` |
| providerId 参数缺失/类型错误 | `sub_1402FED40` 返回 Err | error response via `sub_14080C3C0` |
| provider 不在 relay state Vec 中 | fallback keychain lookup | 继续查 secrets.json |
| secrets.json 不存在/无法读取 | `sub_1402F0B20` fallback | {0, 0x8000000000000000, 0} = None |
| keychain error | code=0x8000000000000007 | error result |
| JSON parse error | alloc/type error | error propagated |
| relay state poisoned | RwLock poison panic | "relay state poisoned" string |
| provider 完全不存在 | {0, 1, 0} = empty Ok | 返回空/None |

## 副作用

1. **relay state 读锁**（WIN）：`_InterlockedCompareExchange8` acquire + `WakeByAddressSingle` release
   - 纯读操作：Vec scan + clone，不修改 relay state
2. **内存分配**：apiKey string clone（`sub_140001360`），cleanup via `sub_140001370`
3. **文件系统读取**（仅 keychain fallback 路径）：`secrets.json` 读取，不写入
4. **无网络调用**：纯本地操作

**重要**：reveal_relay_api_key 是**只读**操作，不修改任何 relay state 或持久化配置。

## WIN vs MAC 差异

| 维度 | WIN 1.1.1 | MAC 1.1.1（基线推断） |
|---|---|---|
| 锁机制 | `_InterlockedCompareExchange8` + `WakeByAddressSingle` | parking_lot（基于其他命令的规律） |
| 环境变量 fallback | `USERNAME`（8B）in keychain | `USER` only（基于 1.0.9 mac） |
| RelayProvider stride | 232B | 待 mac 生产者确认 |
| 字符串中毒错误 | "relay state poisoned" | 同字符串（跨平台共享） |
| debug log gate | `*off_141899A88 > 2u` | 类似 gate，不同 TLS offset |

## Platform Gate

- **WIN confirmed**: 以上证据基于 1.1.1 win64 PE binary
- **MAC**: Unknown（本轮未检查）
- `platformPolicy.doNotInferWindowsFromMacOS=true`
