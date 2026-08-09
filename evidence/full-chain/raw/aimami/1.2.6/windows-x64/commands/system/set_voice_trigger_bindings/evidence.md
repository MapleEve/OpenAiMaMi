# Evidence: set_voice_trigger_bindings

## 命令身份
- 命令名: `set_voice_trigger_bindings`
- Owner EA: `0x14015eb50`
- Owner 函数名: `sub_14015EB50`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xf4d (3917 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_voice_trigger_bindings_0x14015eb50.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a5dc`: set_voice_trigger_bindings
- `0x0x14177a424`: app
- `0x0x14177a5f6`: activeStyle
- `0x0x14177a601`: holdKeyCode
- `0x0x14177a60c`: holdKeyLabel
- `0x0x14177a618`: holdKeyKind
- `0x0x14177a623`: holdModifierMask
- `0x0x14177a633`: toggleKeyCode
- `0x0x14177a640`: toggleKeyLabel
- `0x0x14177a64e`: toggleKeyKind
- ... (共 11 条)
