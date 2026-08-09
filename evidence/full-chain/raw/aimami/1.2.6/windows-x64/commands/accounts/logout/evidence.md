# Evidence: logout

## 命令身份
- 命令名: `logout`
- Owner EA: `0x140d68b00`
- Owner 函数名: `logout`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x123e (4670 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/logout_0x140d68b00.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:登出当前账号并提交(Logout committed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_LOGOUT)。副作用:清当前登录态(mutation)。归属:锚src\commands\accounts.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 28 / Edge 数量: 28
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893bd8`: rOM
- `0x0x141893bd8`: rOM
- `0x0x1418870bf`: logout
- `0x0x1418864e7`: app
- `0x0x1412ddf00`: H
- `0x0x141888a98`: RUNTIME_REFRESH_FAILED_AFTER_LOGOUT
- `0x0x141888abb`: Logout committed
- `0x0x14188888a`: mutation
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
