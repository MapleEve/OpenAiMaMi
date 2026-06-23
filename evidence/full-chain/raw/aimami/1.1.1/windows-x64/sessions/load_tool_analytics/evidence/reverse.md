# load_tool_analytics — 1.1.1 windows-x64 reverse evidence
session: <审计会话>  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: escalate_delta
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/sessions/load_tool_analytics

### Delta 发现（第 1 层，app 级）

1. `pending_auto_switch_state_lock_acquire_111`（depth 1，新增）
   - 1.0.9: owner 0x14026d320 → callee 0x1405796D0，无 auto-switch lock
   - 1.1.1 在 tool analytics 读取前先获取 auto-switch 状态锁
2. `query_installed_skills_with_repo_111`（depth 1，新增）
   - 1.0.9 无此步骤

### 深度 2–5 比较

depth 2–5 路径（sub_1401C9280 → sub_140837390 → sub_140203160 → sub_140624F90 → sub_1405AB1E0）
与 1.0.9 结构等价，均为 SQLite tool-use query + JSON 序列化。编译噪声地址偏移。

### 结论

escalate_delta at layer 1: 与其他 analytics 命令同模式。dim6_inherited 不适用。
