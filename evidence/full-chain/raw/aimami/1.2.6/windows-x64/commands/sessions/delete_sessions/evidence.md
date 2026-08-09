# Evidence: delete_sessions

## 命令身份
- 命令名: `delete_sessions`
- Owner EA: `0x140d5d450`
- Owner 函数名: `delete_sessions`
- 模块: `commands/sessions`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x136c (4972 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/delete_sessions_0x140d5d450.c`
- 状态: decompiled
- IDA 注释: 职责：Tauri 命令 delete_sessions 的公开异步命令实现（完整 Rust async Future 状态机 switch(state)，非薄壳转发，本轮完整反编译确认为真实业务逻辑：按 ids 批量删除会话记录并重建仓库互斥锁/Repo 状态）。边界：commands::sessions 模块。副作用：删除本地会话存储记录（持久化写操作）。交叉核实：mac 侧 1.2.4→1.2

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 31 / Edge 数量: 31
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: delete

## 字符串引用
- `0x0x141886fb9`: delete_sessions
- `0x0x141886e13`: repo
- `0x0x141886e17`: mutationGate
- `0x0x141886fc8`: ids
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
