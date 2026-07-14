# evidence — clean_tool_schema (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::translator::clean_tool_schema @ 0x10062b5e0; call-tree depth=6 节点=23(真实decompile)。
- 关键字符串: `
                 `

## Inferred / Delta
- SSE 流式响应转译(responses→sse)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
