# evidence — responses_to_sse_payload (mac 1.1.8) — 行为后端 relay-proxy/bootstrap (用户复审补漏批2)



## Confirmed
- owner: core::relay::translator::responses_to_sse_payload @ 0x10062ca30; call-tree depth=2 节点=24(真实decompile)。
- 关键字符串: (少)

## Inferred / Delta
- SSE 流式响应转译(responses→sse)。
- 非命令行为后端,1.0.9→1.1.8『中转注入重构』改动面;前端命令 delta 扫不到(proxy 跑在 HTTP handler)。
