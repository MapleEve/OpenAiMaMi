# evidence — store_bootstrap_usage_analytics (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::repository::store_bootstrap_usage_analytics @ 0x100534690; call-tree depth=8 节点=30(真实decompile)。
- 关键字符串: (少)

## Inferred / Delta
- 启动 bootstrap 数据落地(mcp/skills/analytics/notification)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
