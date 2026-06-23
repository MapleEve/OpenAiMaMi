# load_usage_analytics — 1.1.1 windows-x64 reverse evidence
session: <审计会话>  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: escalate_delta
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/sessions/load_usage_analytics

### Delta 发现（第 1 层 + 第 3 层，app 级）

**Layer 1（与其他 analytics 同模式）：**
1. `pending_auto_switch_state_lock_acquire_111`（depth 1，新增）
2. `query_installed_skills_with_repo_111`（depth 1，新增）

**Layer 3（load_usage_analytics 特有，更强 delta）：**
3. `relay_config_check_parent_dirs_sys`（depth 3，新增）
   - 1.0.9: owner 0x14026cd90 → callee 0x14057A340，无此调用
   - 创建 relay 配置父目录，为新的 relay 持久化路径打基础
4. `load_mcp_servers_read_existing_snapshot_111`（depth 3，新增）
   - 从磁盘读取 MCP server 快照；1.0.9 analytics 路径完全无此步骤
5. `serialize_skill_snapshot_json_111`（depth 3，新增）
   - 序列化 skill 快照到 JSON；新增 snapshot 持久化副作用
6. `win32_file_write_bytes_111`（depth 3，新增，depth 5 → CreateFileW）
   - 写文件副作用；1.0.9 analytics 路径为纯读 SQLite，无写文件

### 结论

escalate_delta at layer 1 and layer 3: load_usage_analytics 除共有的 layer-1 guard 外，
还在 depth 3 新增了 MCP server snapshot 读写副作用，是本批 8 命令中变化最大的一个。
dim6_inherited 不适用。
