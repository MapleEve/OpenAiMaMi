# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 accounts 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 accounts 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：8

## 命令 full-chain 结论（消费者面向）

### switch_account

- **Owner EA**: `0x140d6f0d0`
- **Owner 函数**: `switch_account`
- **模块**: `commands/accounts`
- **函数大小**: 0xe22 (3618 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 26
- **Edge 数量**: 26
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/switch_account/`
- **call-tree**: `call-tree.json` (edges=26)
- **interface**: `interface-report.json` (confidence=high)

### switch_account_and_restart_codex

- **Owner EA**: `0x140d6d960`
- **Owner 函数**: `switch_account_and_restart_codex`
- **模块**: `commands/accounts`
- **函数大小**: 0xe22 (3618 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 26
- **Edge 数量**: 26
- **终止原因**: leaf_handler
- **副作用**: ["restart"]
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/switch_account_and_restart_codex/`
- **call-tree**: `call-tree.json` (edges=26)
- **interface**: `interface-report.json` (confidence=high)

### remove_accounts

- **Owner EA**: `0x140d6a610`
- **Owner 函数**: `remove_accounts`
- **模块**: `commands/accounts`
- **函数大小**: 0x1488 (5256 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 30
- **Edge 数量**: 30
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:按accountKeys删除账号(Accounts were removed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_REMOVE)。⚠破坏性:删除账号数据(mutation)。归属:锚src\commands\accounts.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/remove_accounts/`
- **call-tree**: `call-tree.json` (edges=30)
- **interface**: `interface-report.json` (confidence=high)

### logout

- **Owner EA**: `0x140d68b00`
- **Owner 函数**: `logout`
- **模块**: `commands/accounts`
- **函数大小**: 0x123e (4670 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 28
- **Edge 数量**: 28
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:登出当前账号并提交(Logout committed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_LOGOUT)。副作用:清当前登录态(mutation)。归属:锚src\commands\accounts.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/logout/`
- **call-tree**: `call-tree.json` (edges=28)
- **interface**: `interface-report.json` (confidence=high)

### begin_chatgpt_oauth_login

- **Owner EA**: `0x140d68220`
- **Owner 函数**: `begin_chatgpt_oauth_login`
- **模块**: `commands/accounts`
- **函数大小**: 0x568 (1384 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: 【1.2.6 sibling命令begin_chatgpt_oauth_login的win handler】命令名字符串xref 0x1418870a6(aBeginChatgptOa)→此函数,证实win用直接字符串xref分发。cancel_chatgpt_oauth_login在win侧find_bytes全名26字节=0=非注册命令(内部函数),与mac侧一致(mac有符号无命令名字符串)
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/begin_chatgpt_oauth_login/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### export_accounts_to_file

- **Owner EA**: `0x140d668d0`
- **Owner 函数**: `export_accounts_to_file`
- **模块**: `commands/accounts`
- **函数大小**: 0x102e (4142 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 27
- **Edge 数量**: 27
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:把选中账号(accountKeys)导出到targetPath文件,含10M大小校验。副作用:写磁盘文件。归属:锚src\commands\account_io.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/export_accounts_to_file/`
- **call-tree**: `call-tree.json` (edges=27)
- **interface**: `interface-report.json` (confidence=high)

### preview_account_import

- **Owner EA**: `0x140d65310`
- **Owner 函数**: `preview_account_import`
- **模块**: `commands/accounts`
- **函数大小**: 0xd33 (3379 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 26
- **Edge 数量**: 26
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:预览账号导入文件(filePath),只解析不落库,返回可导入账号预览。归属:锚src\commands\account_io.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/preview_account_import/`
- **call-tree**: `call-tree.json` (edges=26)
- **interface**: `interface-report.json` (confidence=high)

### import_accounts_from_file

- **Owner EA**: `0x140d62e30`
- **Owner 函数**: `import_accounts_from_file`
- **模块**: `commands/accounts`
- **函数大小**: 0x1742 (5954 bytes)
- **反编译状态**: decompiled (disasm_reconstructed — Hex-Rays null_cfunc, IDA disasm 重建)
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: [{"type": "WRITE", "desc": "账号数据库写入 (mutation via sub_140AFFC30)", "severity": "destructive"}, {"type": "FILE_READ", "desc": "读取账号文件 filePath (via sub_140856D70)", "severity": "info"}, {"type": "TRIGGER", "desc": "运行时刷新 (via sub_140DB62C0, 失败报RUNTIME_REFRESH_FAILED_AFTER_IMPORT)", "severity": "warning"}, {"type": "VALIDATE", "desc": "SHA256 校验 (via sub_14049D260, 若expectedContentSha256非空)", "severity": "info"}]
- **IDA 注释**: Tauri命令handler:从filePath导入账号,支持expectedContentSha256校验/overwriteExisting/selectedKeys,导入后触发运行时刷新(失败报RUNTIME_REFRESH_FAILED_AFTER_IMPORT)。副作用:写账号库(mutation)。归属:win锚accounts.rs+account_io.rs 1:1,mac符号裁定
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/import_accounts_from_file/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 8/8 命令有 owner_ea + pseudocode（7 decompile_ok + 1 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 8/8 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 8/8 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **switch_account_and_restart_codex**: restart

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
