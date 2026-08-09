# Evidence: merge_mystery_unlock_grants

## 命令身份
- 命令名: `merge_mystery_unlock_grants`
- Owner EA: `0x1401691a0`
- Owner 函数名: `merge_mystery_unlock_grants`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x4ae (1198 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/merge_mystery_unlock_grants_0x1401691a0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 merge_mystery_unlock_grants 处理器（commands::system，argKeys: grants）。合并写入 mystery 解锁授权。⚠副作用：写本地存储。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a7f7`: merge_mystery_unlock_grants
- `0x0x14177a18a`: repo
- `0x0x14177a812`: grants
