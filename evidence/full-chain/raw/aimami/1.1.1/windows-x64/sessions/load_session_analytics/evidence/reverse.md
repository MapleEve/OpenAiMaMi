# load_session_analytics — 1.1.1 windows-x64 reverse evidence
session: wf-aimami111-same-depth-20260618  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: escalate_delta
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/sessions/load_session_analytics

### Delta 发现（第 1 层，app 级）

1. `pending_auto_switch_state_lock_acquire_111`（depth 1，新增）
   - 1.0.9 threading: "sync mutex CodexPaths clone"，无 auto-switch lock
   - 1.1.1 在 session analytics 读取前先获取 auto-switch 状态锁
2. `query_installed_skills_with_repo_111`（depth 1，新增）
   - 1.0.9 无此步骤；1.1.1 加入 skills repo 校验前置

### 深度 2–5 比较

depth 2–5 路径（session_range_filter_111 → analytics_response_builder_111 → sub_140203160 → sub_14036E200 → sub_140624F90/sub_1405AB1E0）
与 1.0.9 owner@0x140276430 → callee@0x14057B7F0 对应路径结构等价，均为 SQLite range query + JSON 序列化。
callee 地址变化属编译噪声。

### 结论

escalate_delta at layer 1: 与 load_change_analytics 同模式，新增 auto-switch mutex + skills repo 校验。
dim6_inherited 不适用。
