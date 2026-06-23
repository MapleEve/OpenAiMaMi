# activate_relay_provider — Owner (Windows x64)

**session**: <审计会话>
**machine**: <本地机器>
**binary**: AiMaMi 1.1.1 win64.exe (imagebase 0x140000000)
**idb**: <本地路径>
**produced**: 2026-06-18
**gate_tier**: gold_leaf

---

## Owner Function

| 属性 | 值 |
|---|---|
| IDB name | `activate_relay_provider_owner_sys` |
| VA | `0x140017EC0` |
| Size | 0x5CE (1486 bytes) |
| IPC string | `"activate_relay_provider"` @ `0x1412AC4EA` (23 chars) |
| String xref | data-ref in owner at `0x140017F49` |
| IDB comment | gold-leaf; sha d24e429a; session <审计会话>; not gate promotion |

---

## IPC 入口结构

owner 函数签名：`fn activate_relay_provider_owner_sys(a1: *InvokeArgs) -> Response`

- `a1` 包含：520B 参数帧 + 400B 上下文帧 + OWORD 字段（a1+920/936）
- IPC 命令字符串 `"activate_relay_provider"` (23 chars) 写入 `v26`，参数键写入 `v27[1]`

---

## Gate 逻辑

1. `run_codex_router_diagnostics_owner_sys @ 0x14006F4B0` — Tokio dispatcher try-lock
   - hash=`0x945CA2F02A2B6F44`，vtable[3]=`sub_140031D80`
   - 失败：直接 `sub_14080C3C0` 返回 error（gate fail 不调用任何参数解析）
   - 成功：返回 owner handle `v4`（RelayManagerHandle）

2. 参数解析（仅在 gate pass 后执行）：
   - `"manager"` (7 chars) → `sub_141214620 @ 0x141214620`，tag=6 on Ok
   - `"providerId"` (10 chars) → `relay_activate_provider_id_parse_sys @ 0x1402FED40`，tag=6 on Ok
   - `"ide"` (3 chars) → `sub_140240B70 @ 0x140240B70`，tag=6 on Ok

3. 任意参数解析失败 → `sub_14080C3C0` error response + goto LABEL_23

---

## 核心调用

parse 全部通过后：

```
activate_relay_provider_build_response_sys(v19, v4/*owner*/, &v39/*providerId_ref*/)
```

`activate_relay_provider_build_response_sys @ 0x14021B9B0` 内部调用：
```
relay_activate_core_and_persist_sys(a1=out, a2=owner_handle, a3=providerId.ptr, a4=providerId.len)
```

---

## 响应构建

- 成功路径：`set_codex_api_slots_ok_response_build_sys @ 0x140216BA0`
  - 写 hardcoded `"ok"` (2B) + `"activated"` (7B)
  - `activated=true` bool at offset+444
  - copies relay_state 368B → response offset+72
- 响应封装：`relay_state_send_ipc_response_sys @ 0x140831F00`

---

## 退出时清理

providers 数组清理循环（stride=96B per entry）：
```
while v43 != v44:
    sub_14033AB50()  // drop provider entry
    v11 += 96
```

最终 return `sub_140042650(v17)` — IPC frame cleanup

---

## Delta vs 1.0.9

`delta_class: integrity_recovered` — 结构和行为与 1.0.9 基线完全一致。无新 callee、无新 DTO 字段、无分支逻辑变更。
