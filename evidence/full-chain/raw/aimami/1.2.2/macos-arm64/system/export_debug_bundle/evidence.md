# evidence — export_debug_bundle (mac 1.2.2) NEW delta

## Confirmed
- owner 0x1003f2400; call-tree depth=1 节点=32(真实decompile, 截断守卫)。
- 关键字符串: `0x1003f2400`, `0x10078bb30`, `0x1009e48d0`, `addr`, `code`, `quota-store.jsonDeepLinkProtocol`, `registry-backupsquota-store.jsonDeepLinkProtocol`
- 副作用: `reqwest`, `serde_json`, `sqlite`, `std::fs`

## Inferred
- 打包 debug bundle(zip 诊断包导出)。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
