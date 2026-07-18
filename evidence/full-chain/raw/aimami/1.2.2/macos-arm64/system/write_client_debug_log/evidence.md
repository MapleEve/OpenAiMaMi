# evidence — write_client_debug_log (mac 1.2.2) NEW delta

## Confirmed
- owner 0x100a3af60; call-tree depth=8 节点=36(真实decompile, 截断守卫)。
- 关键字符串: `0x1008c74b0`, `addr`, `capacity overflowLayoutError`, `code`, `error`, `infoline`, `mainhighstophttpJsonrectMovemovecell`, `warninfoline`
- 副作用: `File`, `std::fs`, `write_all`

## Inferred
- 写客户端 debug 日志。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
