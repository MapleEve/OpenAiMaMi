# FULL-CHAIN-1.2.3 — skills 模块端到端调用链

来源：直接 Read `raw/aimami/1.2.3/macos-arm64/core/skills/ida/pseudocode/*.c`（21 文件全读）+ `frontend/pages/mcp-sessions-settings-skills-frontend.md` L187-270。本文档是最终整理逻辑，非 raw dump。

## 0. 全局锁与 RAII

- **`lock_skill_mutations`**：全局单例 `static MUTATION_LOCK: Mutex<()>`（`OnceBox` 懒初始化）。所有 4 个写操作命令（import/remove/restore/delete）开头都先加此锁，串行化全部 skills 写路径。中毒（poisoned，即上次持锁线程 panic）时返回错误 `"Skill mutation lock is poisoned"` 而非 panic 传染。
- **`StagedDirectory`**（RAII）：`stage_skill_directory` 返回的暂存目录句柄，字段含 path + `published: bool` 标志。`Drop` 实现（`stageddirectory_drop`）：若 `published==false`，`Drop` 时自动对暂存目录跑 `metadata` 检查存在性，存在则 `remove_dir_all` 清理；失败仅 `log::error`（不 panic）。任何 import/restore 流程中途失败提前返回，暂存的临时目录都会被自动清理，不留孤儿目录。

## 1. import_skill(source_path, name?) 命令

```
lock_skill_mutations()
  ├─ DirBuilder::create(skills_root, mode=0o777, recursive=true)   # 确保根目录存在
  ├─ DirBuilder::create(skills_root.join("skill-backups"), ...)     # 确保备份根目录存在
  ├─ metadata(source)         → NotFound? 直接报错 "<path> not found"（Display 格式化）
  ├─ symlink_metadata(source) → 是符号链接? 报错 "Skill source must not be a symbolic link"
  ├─ 若 source 是目录：
  │    └─ source.join("SKILL.md") metadata 检查存在 → 不存在报错 "Directory must contain SKILL.md"
  ├─ 若 source 是文件但非 "SKILL.md" → 报错 "Must be a directory with SKILL.md or a SKILL.md file"
  ├─ 若 source 文件名 == "SKILL.md" → 取 parent() 作为实际 skill 目录
  ├─ target = skills_root.join(name 或 source 目录名)
  ├─ canonicalize(source) vs canonicalize(target) 比较 components
  │    ├─ 相等（原地导入，source 已在 target 位置）→ 跳过 staging，直接 load_skill_summary(target) 校验
  │    └─ 不等 → stage_skill_directory(source, staging_root)：
  │           ├─ DirBuilder::create(staging_root)
  │           ├─ uuid v4 生成临时名，staging_root.join(uuid)
  │           └─ copy_dir_all(source, staged_dir)   # 递归拷贝，遇符号链接报错
  │         → load_skill_summary(staged_dir) 校验有效 SKILL.md，无效报错 "Invalid skill after import"
  ├─ 若 target 已存在 → backup_skill_directory(target, backups_root, reason="replace")   # 见 §4
  └─ publish_staged_skill(staged, target)   # 见 §3
```

## 2. remove_skill(source_path) 命令

```
lock_skill_mutations()
  ├─ load_installed_skills(skills_root)                # 见 §5，取当前列表
  ├─ 按 source 字节内容匹配到目标条目（未找到 → 直接返回未变化列表，无错误）
  ├─ backup_skill_directory(target, backups_root, reason="remove")   # 总是先备份，见 §4
  ├─ metadata(target) 存在性确认 → remove_dir_all(target)
  └─ load_installed_skills(skills_root) 重新加载，返回最新列表
```

**关键行为**：remove 操作永远先创建一份 reason="remove" 的备份再删除，不存在"直接永久删除不留痕迹"的路径——前端确认弹窗的措辞是"移除"而非强调"删除"与此一致；前端 `onSuccess` 同时 invalidate `installed-skills` 和 `skill-backups` 两个 query cache 正是因为这个隐藏的连带备份行为。

## 3. publish_staged_skill(staged, target) 内部函数

```
tmp_name = target.with_file_name(uuid_v4())
若 target 存在:
  rename(target, tmp_name)          # 原目标先挪到临时名，不是先删
rename(staged.path, target)         # 暂存目录 rename 进最终位置
  失败 → 尝试 rename(tmp_name, target) 回滚，返回原始 rename 错误
成功后:
  staged.published = true            # 阻止 StagedDirectory::drop 清理它（已经不是它的了）
  target.join("SKILL.md") → load_skill_summary 校验发布结果有效
    无效 → remove_dir_all(target)；若原 target 存在则 rename(tmp_name, target) 回滚；
           返回 "Published skill failed validation"
    有效 → 若原 target 存在，remove_dir_all(tmp_name) 清掉旧版本（失败仅 log::error 不阻断）
           返回新的 InstalledSkillSummary
```

**原子性设计**：两次 rename（先挪旧、后进新）近似原子发布，任一步失败都有回滚路径，避免中间态下 target 目录缺失或半写入。

## 4. backup_skill_directory(source, backups_root, reason) 内部函数

```
load_skill_summary(source) 校验 source 有效 → 无效报错 "Invalid skill source"
DirBuilder::create(backups_root)
now = SystemTime::now().duration_since(UNIX_EPOCH)   # 秒级时间戳
backupID = uuid_v4()（十六进制字符串）
staged_backup = backups_root.join(".staging").join(uuid_v4())   # 二次 uuid 命名暂存
DirBuilder::create(staged_backup)
copy_dir_all(source, staged_backup)
SkillBackupMetadata { backupID, skillID, name, title, relativePath, createdAt=now } 序列化写入 staged_backup/metadata.json
rename(staged_backup, backups_root.join(backupID))   # 原子发布进备份根目录
返回 SkillBackupSummary
```

## 5. load_installed_skills(skills_root) 命令

```
metadata(skills_root) 不存在 → 直接返回空 Vec
否则 scan_skills_recursive(skills_root, skills_root, &mut results):
  read_dir(dir) 遍历条目：
    跳过 "." 开头的文件/目录名
    若是目录：
      dir.join("SKILL.md") metadata 存在？
        存在 → load_skill_summary(dir) 结果 push 进 results（跳过 metadata() 出错的条目，不递归）
        不存在 → scan_skills_recursive(dir, ...) 递归深入
    非目录条目忽略
排序（按名，insertion sort <21 元素 / driftsort ≥21 元素）
```

## 6. load_skill_backups(skills_root, source_path) 命令

```
metadata(backups_root) 不存在 → 返回空 Vec
否则 read_dir(backups_root) 遍历每个子目录：
  非目录跳过
  子目录.join("metadata.json") metadata 存在？不存在跳过
  read_to_string(metadata.json) → serde_json 反序列化 SkillBackupMetadata，失败跳过（drop 该条目）
  比较 file_name(记录中的 relativePath 派生名) == file_name(source_path) → 匹配才收集
排序返回
```

## 7. restore_skill_backup(source_path, backup_id) 命令

```
lock_skill_mutations()
  ├─ resolve_backup_path(backups_root, backup_id)      # 见 §8，校验恰 2 段路径
  ├─ is_regular_directory(backup_dir) 校验 → 非目录报错
  ├─ read_to_string(backup_dir/metadata.json) → serde_json 反序列化 SkillBackupMetadata
  │     失败 → "Backup corrupted"
  ├─ resolve_skill_target(source_path, metadata.relativePath)   # 见 §9，逐段防符号链接逃逸
  ├─ 若目标已存在 → backup_skill_directory(target, backups_root, reason="restore-rollback...")
  ├─ stage_skill_directory(backup_dir, staging_root)   # 把备份内容暂存
  └─ publish_staged_skill(staged, target)              # 发布覆盖，见 §3
```

## 8. resolve_backup_path(backups_root, id) 内部函数

```
components(id) 必须恰好是 [Normal] 单段（第一次 next() 命中 Normal 类型 code=10，第二次 next() 必须命中 End code=10 而非再来一个 Normal）
校验通过 → trim_matches(id) → backups_root.join(id)
不通过 → 报错 "Invalid skill backup id"
```
注：这是防止 backup id 里带 `../` 或多段路径的路径穿越校验，只允许单段目录名形式的 id。

## 9. resolve_skill_target(base, relative_path) 内部函数

```
relative_path 必须只含 Normal 组件（第一个 component 必须是 Normal，否则报错 "Skill backup contains an invalid relative path"）
逐段重建路径，每追加一段就 symlink_metadata() 检查该中间路径是否已是符号链接
  → 若命中符号链接 → 报错 "Skill backup target must not traverse a symbolic link"
全部通过 → 返回 base.join(relative_path) 的规范化结果
```
注：防止备份记录里的 `relativePath` 字段被恶意/损坏数据构造出符号链接逃逸攻击。

## 10. delete_skill_backup(backups_root, backup_id) 命令

```
lock_skill_mutations()
  ├─ resolve_backup_path(backups_root, backup_id)
  ├─ is_regular_directory(backup_dir) 校验
  ├─ remove_dir_all(backup_dir)
  └─ load_skill_backups(...) 重新加载返回最新列表
```

## Diff 说明（复用，未本轮独立重验）

1.2.3 全部 21 个 `.c` 文件头注释均带 `基线 same-set` 标记（生产会话对照更早版本的分类结论）。REVERSE-STATUS.md 历史另记录 `restore_skill_backup` 相对 1.0.9 新增了一步 mkdir-p 加固（`Path::parent` + `DirBuilder::create(recursive=true)`，在读取 metadata/发起 backup 序列之前）——本轮读到的 1.2.3 `restore_skill_backup` 逻辑（见 §7）中，`resolve_skill_target` 之后确有对 target 父目录做隐式创建保证（体现在 `stage_skill_directory`/`publish_staged_skill` 内部的 `DirBuilder::create` 调用链上），与该历史记录一致，但本轮未逐字节对比 1.1.8 版本验证这就是同一处改动，仅作为佐证陈述。
