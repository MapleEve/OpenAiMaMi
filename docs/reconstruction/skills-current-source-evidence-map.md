# skills 后端 current-source 证据映射

本文记录 `skills` 后端当前公开源码、raw/internal 证据和 owner validator 之间的映射。它不修改 raw/internal gate-report，不把后端文件事务收口扩大成动态 skill 执行、市场安装、网络下载、外部进程、daemon watcher、平台副作用或 `voice` 接入声明。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-skills/gate-report.json` | macOS 1.0.9 skills 六条 IPC 的 gate-report。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-skills/gate-report.json` | Windows 1.0.9 skills 六条 IPC 的 gate-report。 |
| `evidence/full-chain/raw/aimami/1.0.9/macos/skills/` | macOS skills 原始命令证据目录。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/skills/` | Windows skills 原始命令证据目录。 |
| `src-tauri/src/commands/skills.rs` | Tauri command 薄 adapter：只做参数反序列化、repository state 获取、usecase 调用和 envelope 返回。 |
| `src-tauri/src/application/usecase/skills.rs` | 用户动作事务 owner：导入、删除、恢复、删除备份、扫描和备份列表。 |
| `src-tauri/src/repository/skills.rs` | 文件系统窄操作 owner：扫描、路径解析、复制、备份、删除和 DTO 组装。 |
| `src-tauri/src/repository/path_guard.rs` | 路径安全 owner：单片段、相对路径、子路径和 containment 校验。 |

## 当前公开后端边界

| 命令 | 当前 owner | 当前公开行为 |
| --- | --- | --- |
| `load_installed_skills` | `commands/skills.rs` -> `application/usecase/skills.rs` -> `repository/skills.rs` | 扫描本地 skills 目录中的 `SKILL.md`，返回公开 summary，并写 bootstrap installed skills cache。 |
| `load_skill_backups` | `commands/skills.rs` -> `application/usecase/skills.rs` -> `repository/skills.rs` | 扫描技能备份目录，读取 `metadata.json` 和 staged skill 目录。 |
| `import_skill` | `application/usecase/skills.rs` owning 事务，`repository/skills.rs` owning 路径和文件操作 | 解析导入源，判断同源导入，覆盖前备份旧目录，通过可替换 FS 复制技能目录并重新读取结果。 |
| `remove_skill` | `application/usecase/skills.rs` owning 事务，`repository/skills.rs` owning 备份和删除 | 从已安装列表选择目标；目标存在时删除前备份、删除安装目录并重新扫描剩余数量；缺失 skill 目录返回成功 payload，`backup` 为 null，不创建备份、不执行删除。 |
| `restore_skill_backup` | `application/usecase/skills.rs` owning 事务，`repository/skills.rs` owning 备份解析和复制 | 解析备份，覆盖前写 rollback 备份，复制 staged 目录到安装目录，再读取恢复后的技能 summary。 |
| `delete_skill_backup` | `application/usecase/skills.rs` owning 事务，`repository/skills.rs` owning 删除 | 删除指定备份目录，再重新扫描备份数量。 |

## 未恢复和禁止声明

- 不声明执行 skill、动态插件运行、市场安装、网络下载、外部进程、daemon watcher 或平台副作用已经恢复。
- 不把当前后端文件事务映射写成前端全文案验收、E2E 覆盖或双端运行时验收完成声明。
- 不新增 `voice` 入口，不调用 `voice` command，不把 skills 行为挂到 voice。
- 不绕过 `repository/path_guard.rs` 写真实文件系统路径校验。
- 不把 raw/internal 证据改写成新的 gate-report；当前仓库只记录公开源码和证据之间的可审计映射。

## 验证入口

- `scripts/validate-backend-skills-owner.mjs` 直接验证本文、双平台 gate-report、raw skills 证据目录、command/usecase/repository/path_guard owner、source-map 索引和 reconstruction README 索引。
- `npm run validate:backend-skills-owner` 进入 `npm run validate:backend`，再进入 `npm run validate:all`。
