# Evidence: upload_debug_report

## 命令身份
- 命令名: `upload_debug_report`
- Owner EA: `0x140d9dd40`
- Owner 函数名: `upload_debug_report`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xa25 (2597 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/upload_debug_report_0x140d9dd40.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 upload_debug_report 处理器（commands::debug_report，argKeys: input）。上传调试报告。⚠副作用：网络外发本机诊断数据。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 21 / Edge 数量: 21
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141887399`: upload_debug_report
- `0x0x1418865b4`: manager
- `0x0x141886e13`: repo
- `0x0x1418872e1`: input
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
