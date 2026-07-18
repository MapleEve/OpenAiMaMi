# evidence — migrate_session_worktree (mac 1.2.2) NEW delta

## Confirmed
- owner 0x100a382b0; call-tree depth=1 节点=32(真实decompile, 截断守卫)。
- 关键字符串: `/payload/cwdcwd`, `0x100a28ff0`, `COMMITcodexmate_lib::core::relay::atomic_write`, `SELECT cwd FROM threads WHERE id = ?1`, `addr`, `called Result::unwrap_err() on an Ok value`, `code`, `payload`, `session-migration-backups`, `typefullargsopenwithkindsavetrueuuidemitshowhide`
- 副作用: `emit`, `serde_json`, `sqlite`, `std::fs`

## Inferred
- session worktree 迁移(线程/目录结构迁移)。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
