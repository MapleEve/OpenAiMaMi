# REGISTRATION-TABLE-1.2.3 — skills 模块命令/函数注册表

## 前端 invoke 命令 ↔ 后端 owner 函数

| invoke 命令名 | 前端 wrapper (`l.*`) | 后端 owner（macOS，`codexmate_lib::core::skills::`） | owner VA | Windows owner | 参数 |
|---|---|---|---|---|---|
| `import_skill` | `l.importSkill(path)` | `import_skill` | `0x10034a3c0` | 未确认（无对应 windows-x64/skills 文件） | `source: string, name?: string` |
| `load_installed_skills` | `l.loadInstalledSkills` | `load_installed_skills` | `0x100350500` | 未确认 | 无（读全局 skills_root） |
| `load_skill_backups` | `l.loadSkillBackups` | `load_skill_backups` | `0x10034c1c0` | 未确认 | `source: string`（用于按 file_name 过滤） |
| `remove_skill` | `l.removeSkill(id)` | `remove_skill` | `0x10034b920` | 未确认 | `source: string` |
| `restore_skill_backup` | `l.restoreSkillBackup(id)` | `restore_skill_backup` | `0x10034f400` | 部分（内部调用的 `backup_skill_directory`/`publish_staged_skill` 在 win 确认，命令 owner 本身未确认） | `source: string, backupId: string` |
| `delete_skill_backup` | `l.deleteSkillBackup(id)` | `delete_skill_backup` | `0x10034dec0` | 未确认 | `backupId: string` |

`commands::skills::*` Tauri 命令 wrapper 在 macOS 无独立符号（内联进 async dispatch）——上表 owner VA 直接是 `core::skills::<name>` 的地址，这就是命令的真实实现体，不存在额外一层 wrapper 函数需要单独注册。

## 内部辅助函数（无直接 invoke 命令，被上述 6 个 owner 调用）

| 函数 | VA | 被谁调用 | 作用 |
|---|---|---|---|
| `lock_skill_mutations` | `0x10034e5f0` | import/remove/restore/delete 全部 4 个写命令 | 全局可中毒 Mutex 加锁 |
| `scan_skills_recursive` | `0x1003506a0` | `load_installed_skills` | 递归扫描目录树找 SKILL.md |
| `load_skill_summary` | `0x10034cfe0` | `import_skill`/`publish_staged_skill`/`backup_skill_directory`/`restore_skill_backup`/`scan_skills_recursive` | 解析单个 SKILL.md 生成摘要 |
| `is_regular_directory` | `0x10034e4d0` | `restore_skill_backup`/`delete_skill_backup` | 校验路径是普通目录（非文件/符号链接） |
| `stage_skill_directory` | `0x100350b60` | `import_skill`/`restore_skill_backup` | 生成 UUID 暂存目录 + 拷贝 |
| `copy_dir_all` | `0x100349e80` | `stage_skill_directory`/`backup_skill_directory` | 递归拷贝目录树，拒绝符号链接 |
| `publish_staged_skill` | `0x10034e7a0` | `import_skill`/`restore_skill_backup` | 原子 rename-swap 发布 |
| `backup_skill_directory` | `0x100350d20` | `import_skill`(reason=replace)/`remove_skill`(reason=remove)/`restore_skill_backup`(reason=restore-rollback) | 生成一份带 metadata.json 的备份 |
| `resolve_backup_path` | `0x10034e3c0` | `restore_skill_backup`/`delete_skill_backup` | 校验 backup id 为单段路径组件 |
| `resolve_skill_target` | `0x10034efe0` | `restore_skill_backup` | 逐段防符号链接逃逸重建目标路径 |
| `stageddirectory_drop`（`StagedDirectory::drop`） | `0x1003a9090` | RAII，编译器自动插入 | 未 publish 的暂存目录自动清理 |
| `import_skill` 闭包 ×2 | `0x10034b780`/`0x10034b8a0` | `import_skill` 内联闭包 | 错误消息格式化 helper |
| `SkillBackupMetadata` deserialize FieldVisitor::visit_str | `0x100377d20` | serde 反序列化 `metadata.json` 时 | 字段名字节匹配解码器（6 字段） |
| `SkillBackupMetadata` deserialize Visitor::expecting | `0x1003763b0` | 同上 | serde trait 方法，返回 `"struct SkillBackupMetadata"` |

## Windows 侧已确认命名函数

| 函数 | VA | 命名依据 |
|---|---|---|
| `backup_skill_directory_0` | `0x140ad8b50` | 跨平台字符串签名匹配（含相同字面量 "Invalid skill source"/"backupID"/"skillID"/"name"/"title"/"relativePath"/"createdAt" 字段名序列化，与 mac 版一一对应） |
| `publish_staged_skill` | `0x140ad5ed0` | 跨平台字符串签名匹配（相同 rename-swap 逻辑结构 + "Published skill failed validation" 字面量） |

## Windows 侧未解析函数（module-attributed only，非语义命名确认）

| sub 名 | VA | 归属依据 | 推测角色（未确认，仅供参考） |
|---|---|---|---|
| `sub_1408A4BA0` | `0x1408a4ba0` | call-graph propagation（≥2 同模块调用者） | 在 `backup_skill_directory_0`/`publish_staged_skill` 中作为收尾 cleanup 调用，位置类似 mac `StagedDirectory::drop` |
| `sub_140AD6680` | `0x140ad6680` | panic-Location xref | 未定位调用上下文，身份完全未知 |
| `sub_140B0FD50` | `0x140b0fd50` | panic-Location xref | 在 `backup_skill_directory_0` 收尾处对一个局部值调用，类似字符串/Vec drop helper |
| `sub_1414860D0` | `0x1414860d0` | call-graph propagation | 在 `publish_staged_skill` 中以 2 参数调用，位置类似 mac `load_skill_summary` 的调用点 |

## 前端组件 ↔ query key 映射

| 组件/hook | query key | 触发命令 | 懒加载 |
|---|---|---|---|
| `y` (L92-94) | `["installed-skills"]` | `load_installed_skills` | 否（挂载即发起） |
| `N` (L95-98) | `["skill-backups"]` | `load_skill_backups` | 是（`enabled:r==="backups"`） |
| `b` (L99-125) mutation | — | `import_skill` | n/a |
| `z` (L126-139) mutation | — | `remove_skill` | n/a |
| `w` (L140-153) mutation | — | `restore_skill_backup` | n/a |
| `G` (L154-165) mutation | — | `delete_skill_backup` | n/a |
