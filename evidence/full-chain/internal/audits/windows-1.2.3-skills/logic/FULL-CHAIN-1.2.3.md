# Full Chain — windows-1.2.3-skills

本轮 call-tree 追踪范围**有限**：未对 5 个完整命令 handler 逐行追踪至真实系统调用叶子（超出本轮预算，见 gate-report.json dim3）。以下仅记录本轮**直接确认**的结构性事实，不构造未经验证的完整调用链叙事。

## 已确认的调用边

- `backup_skill_directory`（`0x1409060c0`，core-helper 层真身）→ `sub_1408A4BA0`（`0x1408a4ba0`）：经 `callees()` 工具直接核实（非猜测）。与 macOS 姊妹包 `StagedDirectory::drop`-等价假设吻合，本轮将该边从"调用点位置推测"升级为"已确认调用图边"。

## 已确认但未深入追踪的函数清单

| 函数 | 地址 | 层级 | 内容完整性 | 本轮动作 |
|---|---|---|---|---|
| `import_skill` | 0x140c9a610 | commands::skills | 完整 44823 字符 | 反编译+落盘+归目录树+注释；未逐行追踪 |
| `load_installed_skills` | 0x140c9ec80 | commands::skills | 完整 37177 字符 | 同上 |
| `load_skill_backups` | 0x140c9ced0 | commands::skills | 完整 31948 字符 | 同上 |
| `remove_skill` | 0x140c97d50 | commands::skills | 完整 44726 字符 | 同上 |
| `restore_skill_backup` | 0x140c95480 | commands::skills | 完整 44895 字符 | 同上 |
| `delete_skill_backup` | 0x140c92a80 | commands::skills | **截断** 1023/48033 | 反编译（截断）+落盘+归目录树+注释 |
| `backup_skill_directory` | 0x1409060c0 | core::skills | **截断** 1023/66937 | 反编译（截断）+落盘+注释；确认 1 条调用边 |
| `backup_skill_directory_0` | 0x140ad8b50 | core::skills | 完整（原有） | 未改动 |
| `publish_staged_skill` | 0x140ad5ed0 | core::skills | 完整（原有） | 未改动 |
| `sub_1408A4BA0` | 0x1408a4ba0 | core::skills | 完整（原有，小） | 被上方确认调用；身份仍未解析 |
| `sub_140AD6680` | 0x140ad6680 | core::skills | 完整（原有，小） | 未改动 |
| `sub_140B0FD50` | 0x140b0fd50 | core::skills | 完整（原有，小） | 未改动 |
| `sub_1414860D0` | 0x1414860d0 | core::skills | 完整（原有，小） | 未改动 |

## 为何未做完整 call-tree 追踪（诚实说明）

macOS 姊妹包对 21 个函数逐一读到 fs 系统调用叶子，是因为 mac 侧函数普遍较小、职责单一（`copy_dir_all`/`lock_skill_mutations`/`resolve_skill_target` 等各自 100-300 行级别）。Windows 侧本轮新捕获的 5 个完整命令 handler 单个即 31-45K 字符——这是 Rust release 版 async 状态机被编译器整体内联展开的结果（一个 command handler 内联了原本 mac 侧可能拆成 5-8 个小函数的全部逻辑）。逐行追踪 5 份此体量的伪代码到叶子，是一个独立量级的工作，超出本轮"蒸馏+现场补缺"的预算范围，如实标记为 dim3 未闭合，不假装已完成。
