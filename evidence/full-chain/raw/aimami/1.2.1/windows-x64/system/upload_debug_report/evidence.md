# evidence — upload_debug_report (win 1.2.1) NEW delta

## Confirmed
- owner 0x140d0e9e0; call-tree depth=2 节点=32(真实decompile, 截断守卫)。
- 关键字符串: `0x140d27ca0`, `addr`, `code`, `must not exceed 2000 characters`, `nostic report category`, `successwarningsdataApiProxyModedirectmanual`
- 副作用: (内存/读)

## Inferred
- 上传 debug 报告到服务端。
- 

## Delta
- 1.1.8→1.2.1 新增命令。
