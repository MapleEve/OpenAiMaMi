# Evidence: dismiss_pending_auto_switch

## 命令身份
- 命令名: `dismiss_pending_auto_switch`
- Owner EA: `0x14016a380`
- Owner 函数名: `dismiss_pending_auto_switch`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x378 (888 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/dismiss_pending_auto_switch_0x14016a380.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:撤销/忽略挂起的auto-switch(repo参数),薄wrapper转Repository::dismiss_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a893`: dismiss_pending_auto_switch
- `0x0x14177a18a`: repo
