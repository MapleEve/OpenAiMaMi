# evidence.md — get_relay_active (AiMaMi 1.1.1 macos-arm64)

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-17
baseline: 1.0.9 macos (relay/get_relay_active, gate=readyToImplement)
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

---

## Confirmed

1. **command_name 验证**：字符串 `0x1010eb9d0` = `load_relay_stateget_relay_activeremainingPercent`（打包字符串）；`get_relay_active` 在偏移 16，长度 16。inner closure `hfefd46acd52a1302` 使用 `v19[0] = &unk_1010EB9E0`（`0x1010eb9d0+0x10`），`v19[1] = 16`，与 tauri 命令名匹配模式一致。
2. **tauri handler VA**：inner closure `hfefd46acd52a1302` @ `0x10031cc30`，size=0x334。xref 确认：`0x1010eb9e0` 被 run closure `hd8c56cf10d2fdf11` (`0x100305aa0`) 和本 inner closure 两处引用，内层 closure 是实际 handler。
3. **argKeys = []**：handler 不提取任何用户参数；只通过 `StateManager::try_get` 注入 `AppState`；`from_command` 调用只用于 ACL/resolver 提取，不对应 argKey。
4. **core 实现 VA = 0x1005d18f0**：`codexmate_lib::core::relay::manager::RelayManager::get_active::h81b4c2827d84364c`，decompile 完整，无假墙。
5. **active_providers 字段偏移 = +56**：`Vec::clone` 调用传入 `v5+56`（RelayManager 结构体 offset+56），与 1.0.9 baseline `@state+56` 一致。
6. **Mutex 机制 = OnceBox @ +16**：`OnceBox<T>::initialize` lazy-init @ `v5+16`；`Mutex::lock/unlock` 包裹 clone 操作；poison byte @ `v5+24`。
7. **None sentinel = {ptr=0, len=8, cap=0}**：`LABEL_9`: `*a1=0, *(a1+8)=8, *(a1+16)=0`；与 1.0.9 baseline `{ptr=0,len=8,bool=0}` 等价（`len=8` 是 bool/None marker）。
8. **respond 模式 = sync（无 spawn）**：`InvokeResolver::respond::h2cf05754f6f76c7c` 同步调用，不经 `tauri::async_runtime::spawn`；与 1.0.9 一致（纯读命令）。
9. **side_effects = []**：call-tree 无 HTTP 调用、无文件 I/O、无持久化写入；仅 Mutex 保护的内存读。
10. **call-tree 深度 = 4**：handler(0) → RelayManager::get_active(1) → Mutex::lock + Vec::clone + Mutex::unlock(2) → stdlib internals(3)；terminated_reason=all_leaves_at_external_or_stdlib。

## Inferred

1. **ICF/inlining 原因**：1.1.1 中 `codexmate_lib::commands::relay::get_relay_active` 符号未出现在 IDB（func_query name_regex "get_relay_active" 返回空）；推断编译器已将 128B 左右的 wrapper 函数内联进 run closure，run closure 变为 24026B 的大函数包含所有 ~41 commands dispatch。
2. **RelayManager 结构体**：`v5 = *(_QWORD *)(a2+8)` 表明 AppState 通过偏移 +8 持有 RelayManager 指针；RelayManager 字段布局：+16=OnceBox mutex，+24=poison byte，+56=active_providers Vec<String>。
3. **delta 行为**：1.1.1 与 1.0.9 接口协约零变更（argKeys、response schema、side_effects、respond 模式、None sentinel 全一致）；唯一差异是编译产物 VA 和 symbol visibility。
4. **CoreEnvelope::ok**：`codexmate_lib::core::models::CoreEnvelope<T>::ok::h62e52414c5cb980f`（@ `0x100555530`）包裹 Option<Vec<String>> 进 IPC 序列化；与 1.0.9 相同封装模式。
5. **error path**：`from_command` LOBYTE!=6 时走 `return_result` error branch，此为 ACL/resolver 错误而非业务错误；业务错误仅 Mutex poison → None sentinel。

## Unknown

1. **Vec<String> item encoding**：active_providers 中每个 String 的内部 encoding 未在本命令逆向中追踪（超出 get_relay_active scope；provider ID 格式由 upsert_relay_provider 命令决定）。
2. **active_providers 初始值**：RelayManager 初始化时 `active_providers` 默认值（空 Vec vs 从持久化恢复）未在本命令中体现，需 load_relay_state / RelayManager::new 逆向。
3. **全量 provider list 顺序**：`Vec::clone` 保证顺序，但顺序语义（insertion order vs priority order）未验证。
4. **Windows-x64 delta**：本轮仅覆盖 macos-arm64；1.1.1 windows-x64 的 VA 和 symbol visibility 变化未涵盖。
5. **tauri v2 ACL 影响**：`unk_101148407` @ `v19[2..3]` 的 ACL resolver 字段未深追（与 1.0.9 `d0=7 ABI artifact` 类似的 resolver 细节，超出本命令 scope）。

---

## Delta 证明

| 维度 | 1.0.9 | 1.1.1 | diff |
|------|-------|-------|------|
| command_name | get_relay_active | get_relay_active | 无变更 |
| argKeys | [] | [] | 无变更 |
| response_ok | Option<Vec<String>> | Option<Vec<String>> | 无变更 |
| none_sentinel | {0,8,0} | {0,8,0} | 无变更 |
| respond_mode | sync | sync | 无变更 |
| side_effects | [] | [] | 无变更 |
| symbol_visibility | standalone function | inlined inner closure | 编译产物变更（非行为） |
| owner_va | 0x1001dfe4c | inner_closure=0x10031cc30 | 地址变更（非接口） |
| core_va | 0x1001c83a4 | 0x1005d18f0 | 地址变更（非接口） |

**接口协约零变更。delta=编译产物，无行为差异。**

---

## 假墙排除（红线13 accepted_unknown 反作弊）

无需标 accepted_unknown：所有调用链节点均已 decompile 完整，无以下假墙迹象：
- `drop_in_place` ≠ async body：handler 是同步 inner closure，无 async 体，无需追 ::poll/resume
- `architecture_only`/`budget rule` 自限：未发生
- `async decompile failed`：不适用（纯 sync）
- 猜错 VA：已通过 xref 0x1010eb9e0 确认 handler VA
- vtable 动态分发：无
- HTTP-terminal external-only：无 HTTP
- 超大体 basic_blocks：handler 0x334B，core ~280B，均正常 decompile

genuine_ceiling=false，无 accepted_unknown。
