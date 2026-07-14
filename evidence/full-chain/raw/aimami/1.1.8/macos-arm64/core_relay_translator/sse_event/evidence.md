# evidence — sse_event (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::translator::sse_event @ 0x1001b2930; call-tree depth=6 节点=16(真实decompile)。
- 关键字符串: `\aevent: \xC0\x07\ndata: \xC0\x02\n\n`, `capacity overflowLayoutError`

## Inferred / Delta
- SSE 流式响应转译(responses→sse)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
