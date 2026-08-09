# Evidence: set_image_compat

## 命令身份
- 命令名: `set_image_compat`
- Owner EA: `0x14014b3a0`
- Owner 函数名: `set_image_compat`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x4ce (1230 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_image_compat_0x14014b3a0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_image_compat 处理器（commands::system，argKeys: enabled；体内 mutationGate 串佐证）。设置图像兼容模式。⚠副作用：写配置。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a147`: set_image_compat
- `0x0x14177a157`: mutationGate
- `0x0x14177a163`: enabled
