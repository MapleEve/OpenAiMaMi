# evidence — expand_aimami_compactions_for_upstream (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::proxy::server::expand_aimami_compactions_for_upstream @ 0x1005bb1d0; call-tree depth=2 节点=24(真实decompile)。
- 关键字符串: `
                    `, `input`, `typeplan_type`

## Inferred / Delta
- relay 中转代理请求转发管线的一环(changelog『智能路由/中转注入重构』): 上游客户端构造/路由解析/请求体注入改写/passthrough。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
