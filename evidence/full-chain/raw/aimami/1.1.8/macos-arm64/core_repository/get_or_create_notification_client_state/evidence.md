# evidence — get_or_create_notification_client_state (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::repository::get_or_create_notification_client_state @ 0x100535f80; call-tree depth=2 节点=24(真实decompile)。
- 关键字符串: `mysteryUnlockGrantsmysteryUnlockedRoutes`, `mysteryUnlockedRoutes`, `value is missingtuple variant`

## Inferred / Delta
- 启动 bootstrap 数据落地(mcp/skills/analytics/notification)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
