# evidence — RelayManager_bootstrap (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::manager::RelayManager_bootstrap @ 0x1005ce080; call-tree depth=8 节点=31(真实decompile)。
- 关键字符串: `
          `, `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)`, `Codex`, `Codex\" to quitCodex.app/Codex Helper`, `aimami_router_unlock_auth`, `codexmate_lib::core::relay::codex_writer`, `codexmate_lib::core::relay::legacy_virtual_auth`, `codexmate_lib::core::relay::manager`, `mi_codex_router`, `modelcontentstream`

## Inferred / Delta
- 启动 bootstrap 数据落地(mcp/skills/analytics/notification)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
