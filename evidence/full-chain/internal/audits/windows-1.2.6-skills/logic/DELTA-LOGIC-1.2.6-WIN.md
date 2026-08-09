# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 skills 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 skills 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：6

## 命令 full-chain 结论（消费者面向）

### load_installed_skills

- **Owner EA**: `0x140d57470`
- **Owner 函数**: `load_installed_skills`
- **模块**: `commands/skills`
- **函数大小**: 0x1723 (5923 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 37
- **Edge 数量**: 37
- **终止原因**: leaf_handler
- **副作用**: ["kill"]
- **IDA 注释**: Tauri 命令 load_installed_skills 处理器（commands::skills）。读取并返回已安装技能列表（mac 符号 CoreEnvelope<SkillListPayload> 佐证）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/load_installed_skills/`
- **call-tree**: `call-tree.json` (edges=37)
- **interface**: `interface-report.json` (confidence=high)

### load_skill_backups

- **Owner EA**: `0x140d556c0`
- **Owner 函数**: `load_skill_backups`
- **模块**: `commands/skills`
- **函数大小**: 0x13a3 (5027 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 34
- **Edge 数量**: 34
- **终止原因**: leaf_handler
- **副作用**: ["kill"]
- **IDA 注释**: Tauri 命令 load_skill_backups 处理器（commands::skills）。列出技能备份清单。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/load_skill_backups/`
- **call-tree**: `call-tree.json` (edges=34)
- **interface**: `interface-report.json` (confidence=high)

### import_skill

- **Owner EA**: `0x140d52e00`
- **Owner 函数**: `import_skill`
- **模块**: `commands/skills`
- **函数大小**: 0x19ee (6638 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 32
- **Edge 数量**: 32
- **终止原因**: leaf_handler
- **副作用**: ["kill"]
- **IDA 注释**: Tauri 命令 import_skill 处理器（commands::skills）。从 path 导入技能包（体内 path/repo 串佐证）。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(path)。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/import_skill/`
- **call-tree**: `call-tree.json` (edges=32)
- **interface**: `interface-report.json` (confidence=high)

### remove_skill

- **Owner EA**: `0x140d50540`
- **Owner 函数**: `remove_skill`
- **模块**: `commands/skills`
- **函数大小**: 0x19db (6619 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 32
- **Edge 数量**: 32
- **终止原因**: leaf_handler
- **副作用**: ["kill"]
- **IDA 注释**: Tauri 命令 remove_skill 处理器（commands::skills）。按 id 移除已安装技能。⚠破坏性副作用：删除技能数据。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id)。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/remove_skill/`
- **call-tree**: `call-tree.json` (edges=32)
- **interface**: `interface-report.json` (confidence=high)

### restore_skill_backup

- **Owner EA**: `0x140d4dc70`
- **Owner 函数**: `restore_skill_backup`
- **模块**: `commands/skills`
- **函数大小**: 0x19fe (6654 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: ["kill"]
- **IDA 注释**: Tauri 命令 restore_skill_backup 处理器（commands::skills）。按 id 从备份恢复技能。⚠副作用：写回覆盖技能数据。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/restore_skill_backup/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### delete_skill_backup

- **Owner EA**: `0x140d4b270`
- **Owner 函数**: `delete_skill_backup`
- **模块**: `commands/skills`
- **函数大小**: 0x1ae5 (6885 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 32
- **Edge 数量**: 32
- **终止原因**: leaf_handler
- **副作用**: ["delete", "kill"]
- **IDA 注释**: Tauri 命令 delete_skill_backup 处理器（commands::skills）。按 id 删除指定技能的本地备份数据。⚠破坏性副作用：删除本机备份文件。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id) + mac 符号 commands::skills。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/skills/delete_skill_backup/`
- **call-tree**: `call-tree.json` (edges=32)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 6/6 命令有 owner_ea + pseudocode（6 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 6/6 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 6/6 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **load_installed_skills**: kill
- **load_skill_backups**: kill
- **import_skill**: kill
- **remove_skill**: kill
- **restore_skill_backup**: kill
- **delete_skill_backup**: delete
- **delete_skill_backup**: kill

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
