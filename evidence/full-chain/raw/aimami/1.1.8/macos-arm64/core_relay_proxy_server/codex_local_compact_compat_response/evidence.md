# evidence — codex_local_compact_compat_response (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::proxy::server::codex_local_compact_compat_response @ 0x1005b1120; call-tree depth=2 节点=25(真实decompile)。
- 关键字符串: `
        `, `internal error: entered unreachable code`, `textuserkill-wal-shmlsof`

## Inferred / Delta
- relay 中转代理请求转发管线的一环(changelog『智能路由/中转注入重构』): 上游客户端构造/路由解析/请求体注入改写/passthrough。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
