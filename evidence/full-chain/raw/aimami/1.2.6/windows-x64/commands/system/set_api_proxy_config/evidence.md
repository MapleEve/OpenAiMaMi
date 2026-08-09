# Evidence: set_api_proxy_config

## 命令身份
- 命令名: `set_api_proxy_config`
- Owner EA: `0x14016cab0`
- Owner 函数名: `set_api_proxy_config`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x5fd (1533 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_api_proxy_config_0x14016cab0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_api_proxy_config 的 handler：按入参 mode/url 设置 API 代理配置并持久化（写副作用：改代理设置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（detect/test_api_proxy_config 锚定 src\commands\system.rs）推断。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a931`: set_api_proxy_config
- `0x0x14177a18a`: repo
- `0x0x14177a945`: mode
- `0x0x14177a0f8`: url
