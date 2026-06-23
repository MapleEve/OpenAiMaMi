# load_pending_auto_switch — 1.1.1 windows-x64 reverse evidence
session: <审计会话>  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: escalate_delta
depth_reached: 5
comparison_baseline: 1.0.9 windows/auto-switch/load_pending_auto_switch

### Delta 发现（第 1 层 + 第 3 层，app 级）

**Layer 1（dispatcher 变更 + 新增 guards）：**
1. Dispatcher 变更
   - 1.0.9: auto_switch_multiplex_dispatcher_sys@0x1402663E0
   - 1.1.1: tauri_ipc_main_dispatcher_sys@0x14000D2A0（全局 dispatcher 整合，结构重构非行为变化）
2. `pending_auto_switch_state_lock_acquire_111`（depth 1，新增 inline case）
3. `query_installed_skills_with_repo_111`（depth 1，新增 inline case）

**Layer 3（存储后端变更，最核心 delta）：**
4. 存储后端从 SQLite 切换到文件系统
   - 1.0.9 depth 3: `sub_14104DEE0` — 读取 state_5.sqlite 中 auto-switch 行
   - 1.1.1 depth 3: `win32_file_read_bytes_111` → depth 5 → `CreateFileW`
   - 存储类型变更（SQLite → 文件）是 app 级行为变更，直接影响数据读取路径

**Layer 2–5 序列化路径：**
pending_auto_switch_payload_read_111（depth 2）→ win32_file_read_bytes_111（depth 3）→
sub_141093260（depth 4）→ CreateFileW（depth 5）

### 结论

escalate_delta at layer 1 and layer 3:
- Layer 1: 新增 auto-switch mutex + skills repo 校验
- Layer 3: 存储后端从 SQLite 切换到文件系统（最强 delta）
1.0.9 readyToImplement=true，full_leaf_100=true；1.1.1 存储层已变，dim6_inherited 不适用。
