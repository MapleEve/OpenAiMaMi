# evidence — export_session_markdown (mac 1.2.2) NEW delta

## Confirmed
- owner 0x100a36190; call-tree depth=1 节点=32(真实decompile, 截断守卫)。
- 关键字符串: `0x100a28ff0`, `Untitled Session`, `addr`, `code`, `payload`, `roleuserdonehostnametool\t`, `typefullargsopenwithkindsavetrueuuidemitshowhide`
- 副作用: `DELETE`, `File`, `emit`, `serde_json`, `spawn`, `std::fs`, `write_all`

## Inferred
- 导出会话为 markdown 文件。
- ⚠ 破坏性/落盘: 检出 fs/zip/remove 操作

## Delta
- 1.1.8→1.2.2 新增命令。
