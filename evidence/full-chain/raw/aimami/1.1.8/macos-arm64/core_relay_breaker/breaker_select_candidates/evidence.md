# evidence — breaker_select_candidates (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::breaker::breaker_select_candidates @ 0x100542970; call-tree depth=4 节点=26(真实decompile)。
- 关键字符串: `capacity overflowLayoutError`

## Inferred / Delta
- relay breaker/quota 支持。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
