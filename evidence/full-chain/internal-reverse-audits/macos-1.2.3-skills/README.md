# AiMaMi 1.2.3 macOS — skills 模块结论包

同步时间：2026-07-24
范围：`codexmate_lib::core::skills::*`（源文件 `src/core/skills.rs`，21 个真实函数，无 `commands/skills` 独立符号）+ 前端 `SkillsPage`（6 个 invoke 命令）。本包是**蒸馏**产出——本轮未做新反编译，只把已逆好的 21 个 macOS `.c` + 6 个 Windows `.c` + 前端页文档归并为 canonical 结论包，逐函数直接 Read 核实过一遍。
最终结论：**consumerStartReady = 6/6**；`strictImplementationUse`/`readyToImplement` 均为 0/6（dim3 无独立 call-tree 产物、dim4 两个 DTO 未闭合、dim5 Windows 未闭合、dim6 未做）。

## 证据索引

- macOS 后端：`raw/aimami/1.2.3/macos-arm64/core/skills/ida/pseudocode/*.c`（21 文件，全部真实符号名，0 截断，0 `sub_XXXX`）
- Windows 后端：`raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/*.c`（6 文件，仅 2 个确认跨平台命名匹配）
- 前端：`raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md`（L187-270，Skills 管理页专节）+ `frontend/beautified/skills-page-BwPTc5r0.js`
- 相关 DTO：`raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/`（`InstalledSkillSummary`/`SkillListPayload` 的 `deserialize` glue，仅 `expecting()` 桩，未到字段级）
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | macOS | Windows | 前端 |
|---|---|---|---|
| 函数/命令数 | 21/21 真实命名，0 截断 | 6 个文件，仅 2 个确认跨平台命名匹配（其余 4 个为 `sub_XXXX` 未解析） | 6/6 invoke 命令 1:1 对上后端同名函数 |
| 覆盖类型 | `core::skills::*` 全模块 | 局部（仅 backup_skill_directory / publish_staged_skill 有名） | `SkillsPage` 全组件树 |

`commands::skills::*` 在 macOS 上**没有独立符号**（内联进 async 运行时 dispatch，只在 `drop_in_place<tokio::...BlockingTask<...>>` 析构桩里以字面量字符串形式存在——SKILL.md 红线13 "owner 是 drop_in_place ≠ 真实函数体" 的同一模式）。真实实现就是 `core::skills::<同名>`，不是覆盖缺口。

## Per-target Result Matrix

| 命令 | 前端 CCF | 后端 owner/pseudocode | call-tree 终端 | interface/DTO | 平台 gate | gate leaf |
|---|---|---|---|---|---|---|
| `import_skill` | ✓ 导入按钮→目录选择器→`import_skill` | ✓ | fs: canonicalize/DirBuilder::create/rename/copy | `InstalledSkillSummary` 8 字段已闭合；错误字符串已见但无结构化表 | macOS only | consumerStartReady |
| `load_installed_skills` | ✓ `useQuery(["installed-skills"])` | ✓ | fs: metadata/read_dir 递归 | `InstalledSkillSummary` 8 字段已闭合 | macOS only | consumerStartReady |
| `load_skill_backups` | ✓ 懒加载（切到 backups tab 才发起） | ✓ | fs: read_dir + read_to_string(metadata.json) | `SkillBackupMetadata` 6 字段已闭合 | macOS only | consumerStartReady |
| `remove_skill` | ✓ AlertDialog 二次确认 | ✓ | fs: remove_dir_all（先必定备份） | `InstalledSkillSummary`/`SkillBackupSummary` 已闭合 | macOS only | consumerStartReady |
| `restore_skill_backup` | ✓ **无二次确认**（与 remove/delete 不对称） | ✓ | fs: rename/copy/remove_dir_all | `SkillBackupMetadata`/`InstalledSkillSummary` 已闭合 | macOS: `backup_skill_directory`+`publish_staged_skill` 确认跨平台；其余步骤 Windows 未确认 | consumerStartReady |
| `delete_skill_backup` | ✓ AlertDialog 二次确认 | ✓ | fs: remove_dir_all | `SkillBackupMetadata` 已闭合 | macOS only | consumerStartReady |

## Frontend Control Flow

`SkillsPage`（`oe()`，`skills-page-BwPTc5r0.js` L87-399）：
- Tab 切换 installed/backups（`useState`），backups tab 懒加载（`enabled:r==="backups"`）
- 导入：native 目录选择对话框 → `import_skill(path)` → 成功 invalidate `["installed-skills"]`；取消选择本地静默吞掉 `"CANCELLED"`
- 移除：`remove_skill(id)`，AlertDialog 二次确认，成功后**同时** invalidate `["installed-skills"]` 和 `["skill-backups"]`（前端行为暗示后端会顺带生成备份——与本包后端读到的 `remove_skill` 内部总是先 `backup_skill_directory(reason="remove")` 再删除完全吻合，前后端证据交叉验证一致）
- 恢复备份：`restore_skill_backup(id)`，**无二次确认弹窗**，点击即触发——本页交互设计上的一个不对称点（remove/delete 都有确认，恢复覆盖没有）
- 删除备份：`delete_skill_backup(id)`，AlertDialog 二次确认

## Backend Control Flow / Pseudocode / Call-tree

- `import_skill`：校验 source（拒绝符号链接/非 SKILL.md 目录）→ 若 source 已在目标位置（canonicalize 相等）跳过 staging 直接校验 → 否则 `stage_skill_directory`（UUID 临时目录 + `copy_dir_all` 递归拷贝，跳过符号链接会报错）→ 校验 staged SKILL.md（`load_skill_summary`）→ 若目标已存在先 `backup_skill_directory(reason="replace")` → `publish_staged_skill` 原子发布（rename-swap：先把已存在目标挪到 uuid 临时名，再 rename staged→目标；任一步失败尝试回滚）
- `remove_skill`：`lock_skill_mutations` 加锁 → `load_installed_skills` 按 source 路径匹配定位 → 定位到即**总是**先 `backup_skill_directory(reason="remove")` 备份 → `remove_dir_all` 删除 → `load_installed_skills` 重新加载返回最新列表
- `restore_skill_backup`：`lock_skill_mutations` 加锁 → `resolve_backup_path`（校验 id 恰为 2 段组件）→ `is_regular_directory` 校验 → 读取 `metadata.json` → `serde_json` 解析 `SkillBackupMetadata` → `resolve_skill_target`（component-by-component 防符号链接逃逸校验）→ 若目标已存在则先 `backup_skill_directory(reason="restore-rollback...")` → `stage_skill_directory` 暂存备份内容 → `publish_staged_skill` 发布覆盖目标
- `delete_skill_backup`：`lock_skill_mutations` 加锁 → `resolve_backup_path` → `is_regular_directory` → `remove_dir_all` → `load_skill_backups` 重新加载
- `load_installed_skills`：`metadata` 检查根目录不存在则返回空列表；否则 `scan_skills_recursive` 递归扫描（跳过 `.` 开头条目，遇子目录先看是否含 `SKILL.md`，含则 `load_skill_summary` 收集，不含则递归）→ 按名排序
- `load_skill_backups`：`read_dir` 遍历备份根目录 → 每个子目录读 `metadata.json` 解析 `SkillBackupMetadata` → 按 `relativePath`/`skillID` file_name 与调用方传入的 source 目录名匹配过滤 → 排序返回
- `load_skill_summary`：读取 `SKILL.md`，逐行解析类 YAML frontmatter（以 `---` 定界/`#` 注释跳过），提取描述性文本，记录相对路径与 mtime
- `copy_dir_all`：递归创建目标目录树，逐条目判断：目录递归、符号链接报错（"cannot copy symlink at ..."）、常规文件 `std::sys::fs::copy`
- `lock_skill_mutations`：全局单例可中毒 `Mutex`（`MUTATION_LOCK`），所有写操作串行化；中毒时返回 "Skill mutation lock is poisoned"
- `StagedDirectory`（RAII，见 `stageddirectory_drop`）：若未显式标记 `published`，`Drop` 时自动 `remove_dir_all` 清理暂存目录——崩溃/提前返回时的清理保证
- 所有读到的 21 个函数控制流均终结于真实 fs 系统调用叶子（create_dir/rename/remove_dir_all/copy/read_dir/read_to_string/write/metadata/symlink_metadata），无一停在 wrapper-only 或 drop_in_place-only 边缘。

## Interface / Error / Boundary

- `SkillBackupMetadata`（已闭合，6 字段，经 `FieldVisitor::visit_str` 字节比较解码器 `0x100377d20` 确认）：`backupID`、`skillID`、`name`、`title`、`relativePath`、`createdAt`
- `InstalledSkillSummary`（已闭合，8 字段，经 `FieldVisitor::visit_str` 字节比较解码器 `0x100378900` 确认，定义在 `core/models` 非 `core/skills`）：`id`、`name`、`title`、`summary`、`relativePath`、`directoryPath`、`skillFilePath`、`updatedAt`
- `SkillListPayload`：只解到 `Visitor::expecting()` 桩（`0x100374400`，`core/models`），字段级 `visit_str` 未产出，且实际调用点未定位（`load_installed_skills` 自身 Ok 分支直接构造裸 Vec，未见包装此类型）——**未闭合**
- 已见错误字符串字面量（未整理成结构化 error-envelope 表）：`"Directory must contain SKILL.md"`、`"Skill source must not be a symbolic link"`、`"Must be a directory with SKILL.md or a SKILL.md file"`、`"Skill backup contains an invalid relative path"`、`"Skill backup target must not traverse a symbolic link"`、`"Invalid skill backup id"`、`"Skill mutation lock is poisoned"`、`"Backup corrupted"`、`"Invalid skill after import"`、`"Invalid skill source"`、`"Published skill failed validation"`

## Gate Leaf Status

见 `gate-report.json`：6/6 `consumerStartReady`；0/6 `strictImplementationUse`；0/6 `readyToImplement`。

## Diff 结论

REVERSE-STATUS.md 历史记录（1.0.9→1.1.1→1.1.8）显示 skills 命令族大部分为 "same-set"，已确认的两处 delta：(a) `restore_skill_backup` 新增了 `Path::parent` + `DirBuilder::create(mode=0o777,recursive=true)` 的 mkdir-p 加固步骤（本包本轮读到的 1.2.3 `restore_skill_backup` 仍含此步骤）；(b) `remove_skill` 1.1.8 多了一次 `std::sys::fs::metadata` 守卫（相对 1.0.9 非穷尽的 terminal-callee 摘要）。1.2.3 每个 `.c` 文件头注释自带 `基线 same-set` 标记（生产会话自己的分类），本包**复用**该标记，未在本轮独立重新逐字节 diff 验证。

## Unknown / Missing

见 `gate-report.json.unknowns`（`SkillListPayload` 字段级形状与实际调用点、4 个 Windows 未解析函数身份、~19 个 macOS 函数在 Windows 侧完全无证据、dim3 独立 call-tree 产物、dim6 测试映射、角度C 用 grep 代理而非 live `export_funcs()`）。

## Action / Non-action

- **可做**：consumerStartReady 6/6，消费方可基于本包开始实现，但不得宣称与上游 100% 等价，必须按 `gate-report.json.consumerStartReady_basis` 里列出的未闭合维度自行补 `SkillListPayload` 形状/测试映射。
- **不可做**：不得把本包当 `strictImplementationUse`/`readyToImplement` 依据；不得把 Windows 行为外推自 macOS 证据；不得把 `SkillListPayload` 字段当已确认（只有 `SkillBackupMetadata`/`InstalledSkillSummary` 已闭合）。
