# activate_relay_provider — Interface Contract (Windows x64)

**session**: <审计会话>
**binary**: AiMaMi 1.1.1 win64.exe
**produced**: 2026-06-18
**gate_tier**: gold_leaf

---

## IPC 命令名

```
"activate_relay_provider"
```

---

## 输入参数（dim2 完整 argKeys）

| 参数名 | 类型 | 字节长度 | 解析函数 VA | 解析细节 |
|---|---|---|---|---|
| `manager` | `String` | 7 chars key | `0x141214620` | tag=6 on Ok；iterator dispatch via `sub_1410A1DF0` |
| `providerId` | `u64` (or serialized repr) | 10 chars key | `0x1402FED40` | tag=3 → clone str bytes → return tag=6 Ok；else serde deserialize via `sub_1412233C0` |
| `ide` | `String` | 3 chars key (e.g. `"vsc"`, `"jb"`) | `0x140240B70` | same iterator dispatch pattern |

**extractor VA 一览**:
- `parse_va["manager"]` = `0x141214620`
- `parse_va["providerId"]` = `0x1402FED40`
- `parse_va["ide"]` = `0x140240B70`

---

## 输出 / 响应 DTO

成功响应（`activate_relay_provider_build_response_sys @ 0x14021B9B0`）：

```json
{
  "type": "ok",
  "activated": true,
  "relay_state": "<368-byte relay state blob>"
}
```

字段编码细节：
- `"ok"` — hardcoded bytes `0x6B6F` (2B literal) at response offset
- `"activated"` — 7B literal; bool `true` written at offset+444
- `relay_state` — 368B copied from core result at response+72
- discriminant — `2` (Ok variant with payload)

失败响应（`sub_14080C3C0`）：
- gate fail: 无参数解析，直接 error envelope
- parse fail: 携带具体参数错误
- provider_not_found: 返回 error tag `0x8000000000000000`
- write/sync fail: 携带 write result error code (9=IoError, 2=serialize_err, 3=other)

---

## 关键副作用（side_effects — dim4 完整）

按调用顺序：

1. **WIN lock acquire** (`_InterlockedCompareExchange8` on `relay_mgr.state+16`) — 贯穿核心逻辑
2. **Vec scan** `relay_quota_state_lookup_sys @ 0x1406DB960` — 读 providers Vec (stride=232B)，match `(manager, providerId)`
3. **keychain read** `relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0` — 读 secrets.json auth token（只读）
4. **relay_state_serialize_under_lock_sys** `@ 0x1406DA6B0` — WIN lock 下快照序列化 relay state 到输出缓冲
5. **config file atomic write** `relay_atomic_write_leaf_sys @ 0x140504310`
   - `GetCurrentProcessId` → 构建临时路径
   - `CreateFile` → `WriteFile` loop → `CloseHandle`
   - rename-swap via `sub_140504130`
   - 写入 JSON fields: `schemaVersion / providers / activeByIde / proxy / codexRouterEnabled / codexApiLogin / codexApiSlots / displayTagGlobal / displayTagWoyao`
6. **post-login state sync** `relay_post_login_state_sync_sys @ 0x1406E1750`
   - 触发 state machine drive (`sub_14073BC50`)
   - 可能再次调用 `relay_atomic_write_leaf_sys`（state result write）
   - src: `codexmate_lib::core::relay::manager` (`src\core\relay\manager.rs`)
7. **WIN lock release** `WakeByAddressSingle` on `relay_mgr.state+16`

---

## 错误码语义

| 代码 | 含义 |
|---|---|
| `10` | ok |
| `9` | IoError (file write fail) |
| `2` | serialize_err (JSON 序列化失败) |
| `3` | other |
| `0x8000000000000000` | None/error discriminant (provider not found or gate fail) |

---

## 平台差异 (dim5: same-platform gate)

WIN x64 特有：
- lock 原语：`_InterlockedCompareExchange8` (ICEX8) + `WakeByAddressSingle` — WIN 平台同步原语
- fs 写入：`CreateFile / WriteFile / CloseHandle` (WIN32 API)
- mac arm64 对应：`parking_lot` mutex；`File::create` + `write_all` (Rust std)
- **行为等价**，WIN 和 mac 无 delta（平台原语差异不计为 delta_class 变更）
