# evidence — codexmate_lib4core5relay7storage43preserve_state_b (mac 1.2.2) NEW delta

## Confirmed
- owner 0x10042ae80; call-tree depth=2 节点=20(真实decompile, 截断守卫)。
- 关键字符串: `relay state provider-id migration backup verification failed`, `state-migration-backups`
- 副作用: `File`, `std::fs`, `write_all`

## Inferred
- 新命令行为。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
