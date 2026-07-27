# Registration Table — windows-1.2.3-skills

| 前端命令（ipc-contracts.jsonl） | win owner 函数 | 地址 | 命名方式 | dirtree 路径（本轮后） |
|---|---|---|---|---|
| `import_skill` | `import_skill` | 0x140c9a610 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/import_skill` |
| `load_installed_skills` | `load_installed_skills` | 0x140c9ec80 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/load_installed_skills` |
| `load_skill_backups` | `load_skill_backups` | 0x140c9ced0 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/load_skill_backups` |
| `remove_skill` | `remove_skill` | 0x140c97d50 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/remove_skill` |
| `restore_skill_backup` | `restore_skill_backup` | 0x140c95480 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/restore_skill_backup` |
| `delete_skill_backup` | `delete_skill_backup` | 0x140c92a80 | command-name string xref（ground-truth） | `/codexmate_lib/commands/skills/delete_skill_backup` |

移动前状态：全部 6 个函数均已在 IDB 中被赋予正确命令名（前序会话完成的 "①panic-Location ③命令名精确命名" 步骤），但停留在 dirtree 根路径 `/codexmate_lib/<name>`（未归模块目录），且 `raw/aimami/1.2.3/windows-x64/skills/` 下完全没有对应 `.c` 文件。本轮通过 `dt.find_entry`+`dt.get_abspath`+`dt.rename` 逐个移动到 `/codexmate_lib/commands/skills/`（全部 `rc=DTE_OK=0`），并对每个函数补充反编译落盘 + 会话溯源注释，最后 `idb_save`（`ok=true`）确认持久化。

## Core-helper 层归属表（`/codexmate_lib/core/skills`，7 个，本轮前 6 后 7）

| 函数 | 地址 | 归属证据 |
|---|---|---|
| `backup_skill_directory`（新） | 0x1409060c0 | 跨平台字符串签名匹配（= mac `backup_skill_directory`）；本轮首次落 raw .c（截断） |
| `backup_skill_directory_0` | 0x140ad8b50 | 跨平台字符串签名匹配；原有 |
| `publish_staged_skill` | 0x140ad5ed0 | 跨平台字符串签名匹配；原有 |
| `sub_1408A4BA0` | 0x1408a4ba0 | call-graph propagation（≥2 同模块调用者）；原有，本轮确认新增 1 条调用边（被 `backup_skill_directory` 调用） |
| `sub_140AD6680` | 0x140ad6680 | panic-Location xref；原有 |
| `sub_140B0FD50` | 0x140b0fd50 | panic-Location xref；原有 |
| `sub_1414860D0` | 0x1414860d0 | call-graph propagation；原有 |
