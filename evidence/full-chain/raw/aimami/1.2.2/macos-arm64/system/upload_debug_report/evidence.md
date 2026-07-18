# evidence — upload_debug_report (mac 1.2.2) NEW delta

## Confirmed
- owner 0x1000dc1a0; call-tree depth=6 节点=25(真实decompile, 截断守卫)。
- 关键字符串: `0x1000dc1a0`, `addr`, `capacity overflowLayoutError`, `code`, `diagnostic note must not exceed 2000 characters`, `unsupported diagnostic report category`
- 副作用: `reqwest`, `serde_json`

## Inferred
- 上传 debug 报告到服务端。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
