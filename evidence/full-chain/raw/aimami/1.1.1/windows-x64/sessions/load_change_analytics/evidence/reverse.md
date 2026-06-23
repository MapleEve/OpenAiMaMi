# load_change_analytics — 1.1.1 windows-x64 reverse evidence
session: wf-aimami111-same-depth-20260618  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: escalate_delta
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/sessions/load_change_analytics

### Delta 发现（第 1 层，app 级）

1. `pending_auto_switch_state_lock_acquire_111`（depth 1，新增）
   - 1.0.9 没有此 mutex guard；threading 为 "sync mutex CodexPaths clone"，无 auto-switch lock
   - 1.1.1 在进入 analytics 读取前先获取 auto-switch 状态锁，隐含读写依赖扩大
2. `query_installed_skills_with_repo_111`（depth 1，新增）
   - 1.0.9 无此 repo 校验步骤
   - 1.1.1 在 analytics 读取前执行 skills repo 校验，改变了执行前置条件

### 深度 2–5 比较

depth 2–5 核心路径（sub_1401CAD70 → sub_140204660 → sub_14036DB40 → sub_140624F90/sub_1405AB1E0）
与 1.0.9 对应路径结构等价：同为 SQLite SELECT + stmt_step + JSON 序列化。
callee 集合地址变化属编译噪声（二进制重链接偏移），无 app 级 callee 增删。

### 结论

escalate_delta at layer 1: 新增 auto-switch mutex + skills repo 校验为 app 级行为变更。
1.0.9 readyToImplement=true，但 1.1.1 前置条件已变；dim6_inherited 不适用（需重逆）。
