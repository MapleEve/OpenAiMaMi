# evidence — run_daemon_once_cli (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::platform_daemon::run_daemon_once_cli @ 0x1002f09e0
- call-tree max_depth=4, 节点=33(真实 decompile)。
- 关键字符串: `AGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3`, `AUTO_SWITCH_DAEMON_REPAIR_FAILED`, `CURRENT_AUTH_SYNC_FAILED`, `LEGACY_QUOTA_MIGRATION_FAILED`, `candidateAccountKeydismissedAt`, `currentAccountKeycandidateAccountKeydismissedAt`, `dismissedAt`, `historya tuple of size 2a sequencea tuple of size 3`, `skill-backupsreplace`

## Inferred / Delta
- auto-switch daemon 生命周期(install/uninstall/check/run once)。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
