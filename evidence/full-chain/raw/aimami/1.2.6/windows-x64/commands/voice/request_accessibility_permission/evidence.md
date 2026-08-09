# Evidence: request_accessibility_permission

## 命令身份
- 命令名: `request_accessibility_permission`
- Owner EA: `0x14015aad0`
- Owner 函数名: `request_accessibility_permission`
- 模块: `commands/voice`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x42c (1068 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/request_accessibility_permission_0x14015aad0.c`
- 状态: decompiled
- IDA 注释: 职责：Tauri 命令 request_accessibility_permission 的公开 dispatch 入口（tracing::instrument 包装壳，span 字段名 app，薄壳转发模式）。边界：commands::voice_runtime 模块，请求系统辅助功能权限（语音唤醒/监听依赖）。副作用：转发调用触发下游系统权限请求 API（跨进程/系统调用，非本函数直接执行）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a4dd`: request_accessibility_permission
- `0x0x14177a424`: app
