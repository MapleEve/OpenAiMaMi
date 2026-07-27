# System Diff — macos-1.2.3-skills

## Platform Artifacts

- macOS: `.app` bundle Mach-O `codexmate_lib`, sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (core::skills leaf sha, shared with other 1.2.3 macOS core modules per INDEX.jsonl).
- Windows: PE `.exe`, sha256 Unknown (not recorded in the windows-x64/skills INDEX.jsonl entry — only `binary_format: pe` is present, no `sha256_binary` field).

## Frontend IPC / Control-flow

6 invoke commands, all confirmed 1:1 macOS-side (Windows frontend not independently checked this pass, presumed shared Tauri frontend bundle per product architecture but not verified):

| command | frontend hook | UI trigger | confirm dialog |
|---|---|---|---|
| `import_skill` | `b` (L99-125) | 「导入」按钮 → native 目录选择器 | 无（选完即触发） |
| `load_installed_skills` | `y`=`useQuery(["installed-skills"])` (L92-94) | 页面挂载即请求，`staleTime:Infinity` | n/a |
| `load_skill_backups` | `N`=`useQuery(["skill-backups"])` (L95-98) | 懒加载，切到 backups tab 才触发 | n/a |
| `remove_skill` | `z` (L126-139) | AlertDialog 触发按钮 | **有** |
| `restore_skill_backup` | `w` (L140-153) | 备份行「恢复」按钮 | **无**（不对称点） |
| `delete_skill_backup` | `G` (L154-165) | AlertDialog 触发按钮 | **有** |

## Backend Commands / Control-flow / Pseudocode / Call-tree

`codexmate_lib::core::skills::*`（`src/core/skills.rs`，单文件模块）21 个函数，macOS 全部真实命名、0 截断。`commands::skills::*` 无独立符号（内联进 async dispatch）。

调用链叶子：全部落到 `std::sys::fs::*` / `std::fs::*` 系统调用（create_dir/rename/remove_dir_all/copy/read_dir/read_to_string/write/metadata/symlink_metadata），无 wrapper-only 或 drop_in_place-only 终止。

## Interface / Error / Boundary

- `SkillBackupMetadata`（闭合，6 字段）：`backupID`/`skillID`/`name`/`title`/`relativePath`/`createdAt`
- `InstalledSkillSummary`（闭合，8 字段，定义在 `core::models` 不在 `core::skills`）：`id`/`name`/`title`/`summary`/`relativePath`/`directoryPath`/`skillFilePath`/`updatedAt`
- `SkillListPayload`（open，仅 `expecting()` 桩，字段未解码，实际调用点未定位；定义在 `core::models`）
- 错误字符串（观察到但未做结构化 error-envelope 提取）：见 README.md「Interface / Error / Boundary」小节完整列表
- 边界防护：符号链接拒绝（导入 source 侧、`copy_dir_all` 递归拷贝侧）、路径穿越防护（`resolve_skill_target` 逐段 symlink 检查、`resolve_backup_path` 强制恰 2 段路径组件）、全局可中毒互斥锁串行化所有写操作（`lock_skill_mutations`）

## Gate Leaf

见 `gate-report.json`：consumerStartReady 6/6；strictImplementationUse/readyToImplement 均 0/6。

## Plugin / Capability

不适用（skills 模块本身即是一种可安装能力单元的管理界面，非插件系统本身；与本包并列的 plugins 模块见 OUTPUT-SPEC.md 中记录的独立阻断项，非本包范围）。

## OTA / Package

不适用于本模块（skills 导入/备份/恢复是纯本地文件系统操作，未见网络/OTA 相关调用）。

## Resource / Binary Surface

- macOS: 21 个函数集中于单一 crate 模块 `core/skills`，无跨模块符号污染；DTO 定义（`InstalledSkillSummary`/`SkillListPayload`）物理位于 `core::models`（独立 leaf，已由其他会话部分覆盖，79 个 `core::models` 函数候选中的一部分，本包未逐一核对具体覆盖了哪些）。
- Windows: `codexmate_lib/core/skills` 模块归属确认（file header module 标注一致），但函数级覆盖远低于 macOS（6 vs 21，仅 2 个命名确认）。

## Unknown

- Windows 侧 19/21 macOS 函数等价物完全无证据；4 个已反编译但未命名确认的 Windows 函数身份。
- `SkillListPayload` 字段级形状与实际调用点（`load_installed_skills` 自身 Ok 分支直接构造裸 Vec，未见包装成 `SkillListPayload` 的构造过程）。
- 是否存在第三个未被本次 grep 命中的 "skill" 语义相关孤儿函数（角度C 本轮只用文本 grep 代理，非 live `export_funcs()`）。
