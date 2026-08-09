# Evidence: chatgpt_desktop_app_locator

## 命令身份
- 命令名: `chatgpt_desktop_app_locator`
- Owner EA: `0x140b370f0`
- Owner 函数名: `locate_chatgpt_desktop_app`
- 模块: `platform/process`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x16cf (5839 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/chatgpt_desktop_app_locator_0x140b370f0.c`
- 状态: decompiled
- IDA 注释: ChatGPT 桌面应用定位器（1.2.6 新增平台函数）。按优先级尝试四级定位链：①遍历 10 组环境变量+路径候选（LOCALAPPDATA/PROGRAMFILES/PROGRAMFILES(X86) × ChatGPT/OpenAI 各种目录组合）做文件存在性探测；②HKCU/HKLM SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 25 / Edge 数量: 25
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14186115e`: LOCALAPPDATA
- `0x0x14186116a`: Programs\ChatGPT\ChatGPT.exe
- `0x0x141861186`: ChatGPT\ChatGPT.exe
- `0x0x141861199`: Programs\OpenAI ChatGPT\ChatGPT.exe
- `0x0x1418611bc`: Programs\OpenAI\ChatGPT.exe
- `0x0x1418611d7`: PROGRAMFILES
- `0x0x1418611e3`: OpenAI ChatGPT\ChatGPT.exe
- `0x0x1418611fd`: OpenAI\ChatGPT.exe
- `0x0x14186120f`: PROGRAMFILES(X86)
- `0x0x141860efc`: HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\ChatGPT.exe
- ... (共 25 条)
