# Evidence: begin_chatgpt_oauth_login

## 命令身份
- 命令名: `begin_chatgpt_oauth_login`
- Owner EA: `0x140d68220`
- Owner 函数名: `begin_chatgpt_oauth_login`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x568 (1384 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/begin_chatgpt_oauth_login_0x140d68220.c`
- 状态: decompiled
- IDA 注释: 【1.2.6 sibling命令begin_chatgpt_oauth_login的win handler】命令名字符串xref 0x1418870a6(aBeginChatgptOa)→此函数,证实win用直接字符串xref分发。cancel_chatgpt_oauth_login在win侧find_bytes全名26字节=0=非注册命令(内部函数),与mac侧一致(mac有符号无命令名字符串)

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 11 / Edge 数量: 11
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418870a6`: begin_chatgpt_oauth_login
- `0x0x1418864e7`: app
