# Evidence Pointers — macos-1.2.3-mcp

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, 本会话逐个读完的 18 个文件）

- `raw/aimami/1.2.3/macos-arm64/commands/mcp/ida/pseudocode/*.c` — 4 个命令 wrapper：`load_mcp_servers_0x100352150.c`、`upsert_mcp_server_0x100353380.c`、`set_mcp_server_enabled_0x1003542e0.c`、`remove_mcp_server_0x100352890.c`
- `raw/aimami/1.2.3/macos-arm64/core/mcp/ida/pseudocode/*.c` — 14 个核心实现函数：`load_mcp_servers_0x100843d20.c`、`parse_mcp_document_0x100849c60.c`、`parse_mcp_section_header_0x10084ba90.c`、`editable_mcp_server_table_0x10084bee0.c`、`insert_mcp_block_0x1008438d0.c`、`prepare_existing_mcp_block_0x10084c120.c`、`quote_toml_0x100843470.c`、`unquote_toml_0x100843560.c`、`strip_toml_comment_0x100843470.c`、`replace_string_table_0x10084a6d0.c`、`set_optional_string_0x10084a610.c`、`remove_mcp_server_0x100845f30.c`、`set_mcp_server_enabled_0x10084aad0.c`、`upsert_mcp_server_0x100846d50.c`

## raw evidence（frontend，既有产出，本次消费未重复劳动）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1 — McpPage 完整逆向（组件树/状态模型/交互表），共享文档同时覆盖 sessions/settings/skills 三页（本包只引用 §1）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/mcp-page-LchViioT.js` — beautify 后源文件（665 行）
- `raw/aimami/1.2.3/macos-arm64/dumped/assets/mcp-page-LchViioT.js` — 原始 dump 副本
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（131 条，4 条 mcp-* 命令核实于此）

## 角度 C 孤儿扫描命中（already_in_canonical，非本包证据，仅指针引用）

- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_McpTransport_deserialize___Fi_0x100374dd0.c`
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_McpTransport_deserialize___Fi_0x100374f30.c`
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_McpServerSummary_deserialize__0x100376b50.c`
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_McpServerSummary_deserialize__0x1003743e0.c`
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/__codexmate_lib_core_models___impl_serde_core_de_Deserialize_for_codexmate_lib_core_models_McpServerListPayload_deserial_0x1003763f0.c`

## Windows 侧（存在但本会话未读取，dim5 open）

- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/*.c` — 15 个文件（INDEX.jsonl key `aimami/1.2.3/windows-x64/mcp/win-app-inventory-gapfill-leaf`）

## 历史基线（1.0.9，仅供参考指针，非 1.2.3 证据）

- `internal-reverse/audits/macos-1.0.9-mcp/` — legacy readyToImplement=true/full_leaf_100=true 包，字段集不含 transport/url/headers，预生效于当前 full_leaf_100_definition_v2 规则前

## INDEX.jsonl 命中（本次核实，未 append 新行——本会话未产出新 raw 证据，仅蒸馏既有证据）

- 既有：`aimami/1.2.3/windows-x64/mcp/win-app-inventory-gapfill-leaf`（windows-x64，core::mcp，15 地址，2026-07-24T13:20:34Z）
- macOS 侧 `core/mcp`/`commands/mcp` 在 INDEX.jsonl 中**没有找到**对应的既有条目（本次核实用 `grep '"1.2.3"' INDEX.jsonl` + `module` 字段精确过滤，未命中 `core::mcp`/`commands::mcp` 的 macos-arm64 记录）——本包因此在 README.md 追加 INDEX.jsonl 条目（见根 `INDEX.jsonl` 追加，红线 6，append-only）。
