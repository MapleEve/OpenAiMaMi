# System Diff — windows-1.2.3-skills

## Platform Artifacts

- Windows: PE `.exe`, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (reused from windows-1.2.3-relay's manifest -- same win 1.2.3 binary/idb, not independently re-hashed this pass), idb `<二进制路径>\AiMaMi.1.2.3 win64.exe.i64`, strip.

## Frontend IPC / Control-flow

N/A for this package (backend-only). 6 invoke commands confirmed present in the win frontend's own `ipc-contracts.jsonl` (131 total win commands): `import_skill`, `load_installed_skills`, `load_skill_backups`, `remove_skill`, `restore_skill_backup`, `delete_skill_backup`. Component-tree/UX narrative lives in the macOS sibling (`macos-1.2.3-skills`), not independently re-derived for Windows this pass (Tauri JS bundle is presumed platform-agnostic per product architecture, not independently verified).

## Backend Commands / Control-flow / Pseudocode / Call-tree

`codexmate_lib::commands::skills::*` (6 functions, ground-truth command-name-xref named) -- **this is a genuine cross-platform architecture difference from macOS**: macos-1.2.3-skills found `commands::skills::*` has ZERO standalone symbols on macOS (inlined into async dispatch); Windows DOES carry standalone, ground-truth-named symbols for the same 6 commands. This is recorded as an observed fact (win release build did not inline/fold these dispatcher functions the way the mac build did), not extrapolated further.

`codexmate_lib::core::skills::*` (7 functions, module-attributed): `backup_skill_directory` (NEW this session, truncated), `backup_skill_directory_0`, `publish_staged_skill`, `sub_1408A4BA0`, `sub_140AD6680`, `sub_140B0FD50`, `sub_1414860D0`.

Call-tree leaf termination: **NOT traced this pass** for the 5 complete command bodies (31-45K chars each). Only 1 confirmed call-graph edge: `backup_skill_directory` (0x1409060c0) -> `sub_1408A4BA0` (0x1408a4ba0).

## Interface / Error / Boundary

Not independently assessed this session. See macos-1.2.3-skills for macOS-only byte-confirmed `SkillBackupMetadata` (6 fields) / `InstalledSkillSummary` (8 fields) / open `SkillListPayload` -- explicitly not extrapolated to Windows.

## Gate Leaf

见 `gate-report.json`：consumerStartReady 6/6；strictImplementationUse/readyToImplement 均 0/6。

## Plugin / Capability

不适用（同 macOS 姊妹包判定：skills 模块本身是可安装能力单元的管理界面，非插件系统本身）。

## OTA / Package

不适用于本模块（本地文件系统操作为主，未见网络/OTA 调用；本轮未独立核实 Windows 侧是否存在额外网络路径）。

## Resource / Binary Surface

- Windows: 13 个函数（7 module-attributed core-helper + 6 ground-truth-named command handlers），本轮前只有 6 个（原 core-helper 集）。函数体积分布：6 个小 helper（27-534 行级别）+ 1 个大 helper 截断（backup_skill_directory）+ 5 个大 command handler 完整（31-45K 字符/份，Rust async 状态机展开）+ 1 个大 command handler 截断（delete_skill_backup）。

## Unknown

- 5 个完整命令 handler 的 call-tree/控制流细节（本轮只确认存在完整 raw 文本，未逐行追踪）。
- 2 个截断函数的完整内容（`delete_skill_backup` 48033 字符仅读到 1023；`backup_skill_directory` 66937 字符仅读到 1023）。
- `sub_1408A4BA0`/`sub_140AD6680`/`sub_140B0FD50`/`sub_1414860D0` 精确身份（除 1 条调用边外未变）。
- `serialize_10`（`0x140aa9980`）是否为真孤儿——IDA 连接中断未及核实。
- ~14 个 mac 侧存在但 win 完全无证据的 helper（`copy_dir_all`/`stage_skill_directory`/`lock_skill_mutations`/`resolve_skill_target`/`resolve_backup_path`/`is_regular_directory`/`scan_skills_recursive`/`load_skill_summary`/2 闭包/`StagedDirectory::drop`/3 个 DTO glue）。
- Windows 侧 DTO 字节级形状（本轮未独立评估）。
- win 13 vs mac 21 的函数数量差异是否纯属编译期 inlining 架构差异（假设，未经反汇编级验证）。
