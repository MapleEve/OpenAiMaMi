# Evidence Pointers — macos-1.2.3-relay

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend）

- `raw/aimami/1.2.3/macos-arm64/core/relay/<submodule>/ida/pseudocode/*.c` — 32 个子模块的反编译产出（atomic_write/breaker/codex_catalog/codex_config_reconciler/codex_diagnostic/codex_mutation/codex_project_state/codex_runtime/codex_thread_visibility/codex_writer/config_takeover/dialects/fetch_models/health_check/image_compat/invariants/io/keychain/legacy_virtual_auth/manager/models/native_responses_compat/proxy_passthrough/proxy_server/quota/router_reconciler/router_transition/router_unlock_auth/storage/transition_journal/translator/upstream_url）
- `raw/aimami/1.2.3/macos-arm64/commands/relay/ida/pseudocode/*.c` — 22 个命令 wrapper 文件
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/{detect,set,test}_api_proxy_config_*.c` — 3 个物理归属别处的 relay 语义命令
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/*.md` — 9 组模块覆盖分析文档（relay-routing/relay-translator/relay-codex 三组含 relay 内容）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/relay-frontend.md` — RelayModelPage 完整逆向（组件树/状态模型/交互）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/relay-page-iqa4dxHn.js` — beautify 后源文件
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（含 relay 服务对象方法）

## intermediate

- `intermediate/aimami/1.2.3/macos-arm64/relay/` — 本次新增的 thread-model/call-tree 摘要（见 THREAD-MODEL-SUMMARY.md）

## 结论底稿（internal-reverse 根级，非 audits/ canonical，供本包提炼溯源）

- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`

## 跨仓库参照材料（仓外，非 internal-reverse，红线23 内部专用）

- `
- `
- `
- `
- ` ~ `G6.md`
- `
- `
- `

## INDEX.jsonl 命中（本次核实/append）

- 既有：`aimami/1.2.3/macos-arm64/relay/frontend-control-flow`、`aimami/1.2.3/macos-arm64/core/relay/invariants/backend-pseudocode-surface`
- 本次 append（append-only，未改旧行）：31 个 `aimami/1.2.3/macos-arm64/core/relay/<submodule>/backend-pseudocode-leaf` 条目（invariants 之外的 31 个子模块）+ 1 个 `aimami/1.2.3/macos-arm64/commands/relay/backend-pseudocode-leaf` 条目。见 session `relay123-audit-conclusion-append-20260724`。
