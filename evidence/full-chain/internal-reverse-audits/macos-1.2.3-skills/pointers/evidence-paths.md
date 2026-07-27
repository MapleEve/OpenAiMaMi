# Evidence Pointers — macos-1.2.3-skills

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, macOS）

- `raw/aimami/1.2.3/macos-arm64/core/skills/ida/pseudocode/*.c` — 21 个函数全部反编译产出（本包全部直接 Read 核实）：
  `backup_skill_directory_0x100350d20.c`、`copy_dir_all_0x100349e80.c`、`delete_skill_backup_0x10034dec0.c`、
  `import_skill_0x10034a3c0.c`、`import_skill_0x10034b780.c`、`import_skill_0x10034b8a0.c`、
  `is_regular_directory_0x10034e4d0.c`、`load_installed_skills_0x100350500.c`、`load_skill_backups_0x10034c1c0.c`、
  `load_skill_summary_0x10034cfe0.c`、`lock_skill_mutations_0x10034e5f0.c`、`publish_staged_skill_0x10034e7a0.c`、
  `remove_skill_0x10034b920.c`、`resolve_backup_path_0x10034e3c0.c`、`resolve_skill_target_0x10034efe0.c`、
  `restore_skill_backup_0x10034f400.c`、`scan_skills_recursive_0x1003506a0.c`、
  `skillbackupmetadata_deserialize_fieldvisitor_visit_str_0x100377d20.c`、
  `skillbackupmetadata_deserialize_visitor_expecting_0x1003763b0.c`、`stage_skill_directory_0x100350b60.c`、
  `stageddirectory_drop_0x1003a9090.c`

## raw evidence（backend, Windows）

- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/*.c` — 6 文件（本包全部直接 Read 核实）：
  `backup_skill_directory_0_0x140ad8b50.c`（命名确认）、`publish_staged_skill_0x140ad5ed0.c`（命名确认）、
  `sub_1408A4BA0_0x1408a4ba0.c`、`sub_140AD6680_0x140ad6680.c`、`sub_140B0FD50_0x140b0fd50.c`、`sub_1414860D0_0x1414860d0.c`（以上 4 个未解析）

## raw evidence（相关 DTO，core/models，非 core/skills）

- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_InstalledSkillSummary_deseria_0x100376b30.c`（`Visitor::expecting()` 桩，本包核实读过）
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_InstalledSkillSummary_deseria_0x100378900.c`（`FieldVisitor::visit_str` 字段名解码器，本包核实读过，解出 8 字段：id/name/title/summary/relativePath/directoryPath/skillFilePath/updatedAt）
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_SkillListPayload_deserialize__0x100374400.c`（仅 `Visitor::expecting()` 桩，本包核实读过；无同目录 `FieldVisitor::visit_str` 姊妹文件）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` — 第 187-270 行 Skills 管理页专节（本包核实读过）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/skills-page-BwPTc5r0.js` — beautify 后源文件（未直接 Read，引用自上述 md 文档的行号标注）
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（本包用于 6 命令 diff 核实，`.command` 字段 grep）

## INDEX.jsonl 命中（本次复核，未新增）

- `aimami/1.2.3/macos-arm64/core::skills/backend-pseudocode-leaf`（`session: commands-skills-analytics-pilot-decompile-truncation-fix-20260724`）— 记录 21 个函数 func_query 枚举计数，本包 §Angle-A 复用此计数，未重跑
- `aimami/1.2.3/windows-x64/skills/win-app-inventory-gapfill-leaf`（`session: win-1.2.3-app-function-inventory-gapfill-20260724`）— 记录 6 个 Windows 地址

## 历史版本基线（consumed，参考，未本轮重新核对）

- `internal-reverse/audits/macos-1.0.9-skills/` — 上一 canonical 版本包
- `internal-reverse/audits/windows-1.0.9-skills/` — 上一 canonical Windows 版本包
- `internal-reverse/REVERSE-STATUS.md` — 1.1.1/1.1.8 skills 命令族 diff 历史条目（same-set/delta 分类，本包 §Diff 结论引用）

## 本轮方法论声明

本轮为**蒸馏**（consolidation），未连接 IDA、未做任何新反编译或新 `func_query`/`export_funcs()` 调用；角度A 数字复用既有 INDEX.jsonl 记录；角度C 用文本 `grep -ril skill` 代理（非 live 语义扫描）；角度B/D 为本轮直接产出（frontend ipc-contracts.jsonl 命令名 diff）。
