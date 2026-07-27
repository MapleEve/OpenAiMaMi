# Evidence Pointers — windows-1.2.3-relay

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend）

- `raw/aimami/1.2.3/windows-x64/<submodule>/ida/pseudocode/*.c` — 28 个已知 Windows 侧子模块目录（codex_catalog/codex_config_reconciler/codex_diagnostic/codex_mutation/codex_project_state/codex_runtime/codex_thread_visibility/codex_writer/config_takeover/dialects/fetch_models/health_check/image_compat/invariants/io/keychain/legacy_virtual_auth/managed_blocks/manager/mod/models/proxy_passthrough/proxy_server/quota/router_reconciler/router_transition/router_unlock_auth/storage/translator/atomic_write）
- `raw/aimami/1.2.3/windows-x64/version-delta/ida/pseudocode/*.c` — 版本差异摘录副产物（辅助目录，非独立子模块）
- `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/*.c` — 23 个命令 wrapper 文件
- `raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl` — 177 行 owner 归属基线
- `raw/aimami/1.2.3/windows-x64/relay-core/manifest.json` — Win 侧 relay-core 覆盖 manifest（含 4 个 mac-only 模块的 Unknown 判定字段）
- `raw/aimami/1.2.3/windows-x64/relay-core/SURFACE-MANIFEST.md` — 23 条命令面基准（`commands/relay/SURFACE-MANIFEST.md`）
- `raw/aimami/1.2.3/windows-x64/commands/relay/owner-map.jsonl` — 命令面 owner-map（23 条）

## intermediate

- `intermediate/aimami/1.2.3/windows-x64/relay/` — 本次新增的 thread-model/call-tree 摘要（见 THREAD-MODEL-SUMMARY.md）

## 结论底稿（internal-reverse 根级，非 audits/ canonical）

- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`

## 跨仓库参照材料（仓外，非 internal-reverse，红线23 内部专用）

- `
- `
- `

## macOS 姊妹包（跨平台交叉引用，前端证据权威来源）

- `internal-reverse/audits/macos-1.2.3-relay/`

## INDEX.jsonl 命中（本次核实/append）

- 既有：25 条 windows-x64 relay 相关条目（function-surface / command-owner-surface / 21 个子模块 backend-pseudocode-leaf 或 surface）
- 本次 append（append-only，未改旧行）：8 个 `aimami/1.2.3/windows-x64/<submodule>/backend-pseudocode-leaf` 条目（codex_catalog/codex_config_reconciler/codex_mutation/codex_runtime/codex_thread_visibility/managed_blocks/proxy_passthrough/mod）。见 session `relay123-audit-conclusion-append-20260724`。
- **未发现声称的 windows commands/relay 重复 key**：本次核查（`python3` 按 `key` 分组）确认当前 INDEX.jsonl 中 `aimami/1.2.3/windows-x64/commands/relay/*` 只有 2 条不同 key（`command-owner-surface` 与 `backend-pseudocode-leaf`），无重复；任务描述中"1 条重复 key"的说法在本次核查时未复现，可能已被此前的 dedup pass（`INDEX.jsonl.bak-dedup-20260602`/`-20260618`）清理，或该说法本身基于过期观察。未做任何删除/合并动作（append-only 原则），如实记录此差异。
