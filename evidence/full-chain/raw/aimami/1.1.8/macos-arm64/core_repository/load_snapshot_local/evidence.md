# evidence — load_snapshot_local (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::repository::load_snapshot_local @ 0x100529ba0; call-tree depth=6 节点=28(真实decompile)。
- 关键字符串: `AUTO_SWITCH_DAEMON_REPAIR_FAILED`, `CURRENT_AUTH_SYNC_FAILED`, `LEGACY_QUOTA_MIGRATION_FAILED`, `No local account registry found yet.`, `REGISTRY_MISSING`, `dev.aimami.auto-switch`, `listlogsHomeInfoPathUser`, `loadlistlogsHomeInfoPathUser`

## Inferred / Delta
- 启动 bootstrap 数据落地(mcp/skills/analytics/notification)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
