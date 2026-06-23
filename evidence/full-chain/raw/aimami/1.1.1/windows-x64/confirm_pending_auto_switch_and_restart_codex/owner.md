# Owner — confirm_pending_auto_switch_and_restart_codex (win 1.1.1)

**Session**: <审计会话> | **Machine**: <本地机器> | **Date**: 2026-06-16
**Binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**逆向分析 Server**: <逆向工具通道> (<内部网络>)

## Owner Function

| 属性 | 值 |
|---|---|
| VA | 0x140952070 |
| IDB rename | `confirm_pending_auto_switch_and_restart_codex_owner_sys` (A-grade) |
| Size | 0xb9a = 2970 bytes |
| Basic Blocks | 111 |
| Cyclomatic complexity | 29 |
| Command string | `"confirm_pending_auto_switch_and_restart_codex"` @ 0x1412fab37 |
| Namespace string | `"app"` @ 0x1412fa97e |
| Command len | 45 |

## Dispatcher 定位路径

从 win 1.1.1 主 dispatcher 0x14000D2A0 (41-case string-length switch) → 长度 45 字节字符串 case → xrefs_to 0x140952070 通过两个 caller wrappers + 2 个 vtable data slots。

## Callers (Code References)

| VA | 名称 | Size | 说明 |
|---|---|---|---|
| 0x140A7AED0 | sub_140A7AED0 | 0x235 bytes | Future state machine wrapper #1；on-complete → sub_140AC37E0 |
| 0x140A94080 | sub_140A94080 | 0x235 bytes | Future state machine wrapper #2；on-complete → sub_140AB9C00 |

两个 wrapper 结构几乎完全相同，差异仅在 LABEL_14（stage 1 完成后）调用不同的 completion callback。

## Vtable Data References

| 地址 | 说明 |
|---|---|
| 0x1416d61d8 | vtable slot #1（relay provider dispatch table） |
| 0x141913c74 | vtable slot #2 |

## Baseline diff (1.0.9 → 1.1.1)

- **1.0.9**: 6-phase 线性协程 (handler VA 0x14026f140，注意 1.1.1 该 VA 已被 JSON token 提取函数 sub_14026EE50 占用)
- **1.1.1**: 4-state 外层 switch (field offset 3440) + 每 outer state 嵌套 sub-state (field offset 3424)
- 新增 relay provider type vtable 路由 (off_141899420)
- 新增 2 个 _InterlockedIncrement64 原子递增操作

**Diff status**: CHANGED — 协程结构显著变化，relay provider type routing 是版本新增。
