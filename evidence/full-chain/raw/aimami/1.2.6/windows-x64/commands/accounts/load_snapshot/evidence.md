# Evidence: load_snapshot

## 命令身份
- 命令名: `load_snapshot`
- Owner EA: `0x140d73cb0`
- Owner 函数名: `load_snapshot`
- 模块: `commands/accounts`
- 版本: 1.2.6
- 平台: windows-x64
- 函数大小: 0x15ab (5547 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- 命令名串地址: 见 strings
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_snapshot_0x140d73cb0.c`
- 状态: decompile_null

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 30
- Edge 数量: 30
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893e40`: %
- `0x0x141893e40`: %
- `0x0x141893e40`: %
- `0x0x141893e40`: %
- `0x0x14188715a`: load_snapshot
- `0x0x1418864e7`: app
- `0x0x141887167`: localOnly
- `0x0x141893e50`: e
- `0x0x141893e50`: e
- `0x0x141893e74`: ~
- ... (共 18 条)
