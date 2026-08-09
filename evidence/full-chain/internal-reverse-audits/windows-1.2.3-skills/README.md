# AiMaMi 1.2.3 Windows — skills 模块结论包

同步时间：2026-07-25
范围：`codexmate_lib::core::skills::*`（module-attributed）+ `codexmate_lib::commands::skills::*`（6 个 tauri 命令 handler，ground-truth 命名）。本包是**蒸馏 + 现场补缺**混合产出——起点是把已逆好的 6 个 Windows `.c` 归并成 canonical 结论包（按用户指令），但在做 Angle-A 活体核验时发现 dirtree 已存在但从未落 raw 证据的 7 个函数（1 个 core 层大函数 + 6 个前端命令 handler 全部），本轮当场补逆 + 落盘 + 归目录树，而非仅仅转述旧摘要。
最终结论：**consumerStartReady = 6/6**；`strictImplementationUse`/`readyToImplement` 均为 0/6（dim3 未做call-tree 追踪、dim4 未独立评估、dim5 部分改善但未闭合、dim6 未做）。

## 证据索引

- Windows 后端（原有 6 个）：`raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/*.c`（`backup_skill_directory_0`/`publish_staged_skill`/4 个 `sub_XXXX`）
- Windows 后端（本轮新增 7 个）：同目录新增 `import_skill_0x140c9a610.c`、`load_installed_skills_0x140c9ec80.c`、`delete_skill_backup_0x140c92a80.c`（**截断**）、`restore_skill_backup_0x140c95480.c`、`remove_skill_0x140c97d50.c`、`load_skill_backups_0x140c9ced0.c`、`backup_skill_directory_0x1409060c0.c`（**截断**）
- 前端：`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 条 win 命令，本轮直接 grep 核实 6 条 skill 命令，`.command` 字段）
- IDB 活体证据：`server_health` 确认 `status=ok, IDA decompiler_ready=true, module=AiMaMi.1.2.3 win64.exe`；dirtree BFS 枚举（`/codexmate_lib/core/skills` 7 个、`/codexmate_lib/commands/skills` 移动前 0 个/移动后 6 个）；`<工具调用>` 确认落盘
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | Windows（本轮前） | Windows（本轮后） |
|---|---|---|
| raw .c 文件数 | 6 | **13**（+7） |
| 前端 6 命令的 win-native owner 确认数 | 0/6（宏观未知，mac 包 batch1 假设"未确认"） | **6/6**（command-name xref ground-truth） |
| owner 已确认但内容完整（未截断）数 | — | 5/6 命令完整（31-45K 字符/份）+ 6/7 核心层完整 |
| owner 已确认但内容截断数 | — | 2 个（`delete_skill_backup` 1023/48033 字符；`backup_skill_directory` 1023/66937 字符） |
| dirtree 归目录 | `core/skills` 7 个已归；`commands/skills` 空 | `core/skills` 7 个（含新 1 个）；`commands/skills` **6 个（本轮移入）** |

## Per-target Result Matrix

| 命令 | 前端 ipc-contracts | win owner 函数 | 内容完整性 | call-tree | gate leaf |
|---|---|---|---|---|---|
| `import_skill` | ✓ | ✓ `0x140c9a610`（ground-truth 命令名 xref） | 完整 44823 字符 | 未追踪（本轮未做） | consumerStartReady |
| `load_installed_skills` | ✓ | ✓ `0x140c9ec80` | 完整 37177 字符 | 未追踪 | consumerStartReady |
| `load_skill_backups` | ✓ | ✓ `0x140c9ced0` | 完整 31948 字符 | 未追踪 | consumerStartReady |
| `remove_skill` | ✓ | ✓ `0x140c97d50` | 完整 44726 字符 | 未追踪 | consumerStartReady |
| `restore_skill_backup` | ✓ | ✓ `0x140c95480` | 完整 44895 字符 | 未追踪 | consumerStartReady |
| `delete_skill_backup` | ✓ | ✓ `0x140c92a80` | **截断** 1023/48033 字符 | 未追踪 | consumerStartReady |

## Backend Core-Helper Layer（module-attributed，非 command handler）

- `backup_skill_directory`（**新**，`0x1409060c0`）：真正的 mac `backup_skill_directory` 对应体，与已存在的 `backup_skill_directory_0`（`0x140ad8b50`，534 行完整）是**两个不同函数**（IDA 因命名冲突给后者加了 `_0` 后缀）。本函数体积巨大（66937 字符），decompile 被 MCP 服务端截断至 1023 字符——只保留了函数签名和变量声明区，**不构成完整逆向**。已确认调用边：`backup_skill_directory` → `sub_1408A4BA0`（与 mac 包 `StagedDirectory::drop`-等价假设吻合，本轮升级为**已确认调用边**而非仅推测）。
- `backup_skill_directory_0`（`0x140ad8b50`）、`publish_staged_skill`（`0x140ad5ed0`）：原有 2 个跨平台命名确认函数，本轮未改动。
- `sub_1408A4BA0`/`sub_140AD6680`/`sub_140B0FD50`/`sub_1414860D0`：原有 4 个 module-attributed 未解析身份函数，本轮未改动身份判定（仅上面那条调用边被确认）。

## Interface / Error / Boundary

未独立评估（超出本轮 backend-owner/pseudocode 范围）。参见 macOS 姊妹包 `macos-1.2.3-skills` 的 `SkillBackupMetadata`（6 字段）/`InstalledSkillSummary`（8 字段）/`SkillListPayload`（open）——**不外推**到 Windows，本轮未做 Windows 侧字节级确认。

## Gate Leaf Status

见 `gate-report.json`：6/6 `consumerStartReady`；0/6 `strictImplementationUse`；0/6 `readyToImplement`。

## Diff 结论

未做版本间 diff（超出本轮范围）；macOS 姊妹包记录的历史 same-set/delta 分类（1.0.9→1.1.1→1.1.8）未在本轮针对 Windows 独立复核。

## Unknown / Missing

见 `gate-report.json.unknowns`：5 个完整命令 handler 的 call-tree 未追踪；2 个函数截断待 `basic_blocks` 分块补逆；4 个小 helper 身份仍未解析；~14 个 mac 侧存在但 win 完全无证据的 helper 函数；Windows 侧 DTO 字节级未独立确认。（`serialize_10` 疑似孤儿已在本轮内 IDA 连接恢复后核实解决：为 `SkillRemovePayload` DTO 的序列化 glue，物理位于 `core::models`，非真孤儿——见 `reviews/CLAUDE.md`。）

## Action / Non-action

- **可做**：consumerStartReady 6/6，消费方可基于本包的 owner-identity + raw pseudocode 开始阅读，但**不得**跳过自行阅读 5 份 30-45K 字符完整伪代码就宣称理解其控制流——本包未提供该叙述。
- **不可做**：不得把本包当 `strictImplementationUse`/`readyToImplement` 依据；不得把 mac 侧 DTO 字段外推到 win；不得把 2 个截断函数当完整逆向；不得把 4 个未解析 helper 的推测身份当事实。
