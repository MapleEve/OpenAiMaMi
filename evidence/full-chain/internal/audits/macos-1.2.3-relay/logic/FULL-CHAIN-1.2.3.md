# FULL-CHAIN-1.2.3 — macOS relay (前端 → invoke → 后端 → core → 持久化/HTTP 叶子)

来源：`internal-reverse/audits/BASELINE-FINAL-1.2.3.md` §1/§2、`goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md`、raw `frontend/pages/relay-frontend.md`。本文档是模块级链路叙述，**不是逐命令 call-tree-to-leaf 规约**（dim3 未系统化产出，见 gate-report.json）。

## 1. 前端触发层

`RelayModelPage`（`relay-page-iqa4dxHn.js`，导出名 `Qs`，4091 行 beautify）：
- 组合查询 hook `ea`（推断 `useRelayState`，聚合 `loadState`/`getActive`/`getProxyStatus`/router 开关状态）+ 组合 mutation hook `ta`（推断 `useRelayMutations`，把服务对象 `je` 的方法包成 `useMutation`）。
- `je`（relay 服务对象）方法 ↔ IPC 命令映射见 `logic/REGISTRATION-TABLE-1.2.3.md`。
- CodexRouter 开关关键时序：`get_codex_router_auth_readiness` 判虚拟邮箱鉴权 → 二次确认弹窗（含 5 段实时进度 `listen('codex-router-toggle-progress')`）→ `set_codex_router_enabled` → 成功后直调 `diagnose_codex_router` 核实 config.toml 真写入。
- Provider 卡片操作：新建/编辑走 `RelayProviderForm`（共享组件，本包未逆其内部实现）→ `upsert_relay_provider`；删除走二次确认 AlertDialog → `delete_relay_provider`；拖拽排序走 dnd-kit `SortableGrid` → `reorder_relay_providers`；网络模式切换 → `set_relay_provider_network`；测试 → `TestStreamDialog` → `test_relay_draft_stream`（Tauri Channel 流式）。

## 2. 后端命令层（`commands::relay`）

22 个 `.c` 文件（23 条上游命令，`get_codex_router_auth_readiness` 单独归属，见下）。命令层是薄 wrapper：反序列化入参 → 调 `core::relay::*` 对应子模块函数 → 序列化响应/错误。详见 `logic/REGISTRATION-TABLE-1.2.3.md`。

## 3. Core 层（`core::relay::*`，32 子模块）

- **relay-routing 组**：`manager`（RelayManager 中枢，57 函数）/ `proxy_server`（本地 axum 代理，38 函数）/ `router_transition`+`router_reconciler`（开关状态机，9+10 函数）/ `router_unlock_auth`（虚拟鉴权，24 函数）/ `config_takeover`（config.toml 标记块接管归还，27 函数）/ `transition_journal`（Mac-only，11 函数）/ `health_check`（13 函数）。
- **relay-translator 组**：`translator`（Anthropic↔OpenAI Chat↔Responses 双向转换，49 函数，98K 行逻辑体量）/ `stream`（4 个 SSE 流状态机，归并入 translator/proxy_server 范畴）/ `models`（43 函数）/ `codex_catalog`（9 函数）/ `image_compat`（视觉模型剥图，4 函数）/ `quota`（多 provider 余额，20 函数）/ `storage`（原子写+MiniMax M3 迁移，13 函数）/ `atomic_write`（3 函数）/ `keychain`（三级密钥，10 函数）/ `dialects`（reasoning 注入，2 函数）。
- **relay-codex 组**：`codex_diagnostic`（线程污染诊断自愈，83 函数）/ `codex_thread_visibility`（rollout session_meta 改写，62 函数）/ `codex_writer`（config 注入块+剥离孤儿 `aimami_relay_`，19 函数）/ `codex_project_state`（16 函数）/ `invariants`（RouterConfigSurface，7 函数）/ `managed_blocks`（Win 独立目录，Mac 并入 `codex_writer`，见 SYSTEM-DIFF.md local_outtake 分类）/ `fetch_models`（4 函数）/ `legacy_virtual_auth`（8 函数）/ `codex_mutation`（1 函数）/ `codex_config_reconciler`（1 函数）/ `codex_runtime`（4 函数）。
- **其余**：`breaker`（5 函数，Mac-only）/ `native_responses_compat`（2 函数，Mac-only）/ `upstream_url`（2 函数，Mac-only）/ `proxy_passthrough`（7 函数）/ `io`（7 函数）。

## 4. 持久化/HTTP 叶子（部分已知，未系统化）

- `atomic_write` → 原子文件写（config.toml、relay provider 明文 key 文件）。
- `keychain` → 明文文件三级密钥（红线：[[polaris-relay-key-plaintext-no-system]]，本 upstream 逆向仅描述其行为，不代表 Polaris 要照抄混淆格式——见 `goal-aimami-122/RELAY-PARITY-DECISIONS.md`）。
- `proxy_server` → 本地 axum HTTP server，转发/翻译请求给上游 provider（`translator` 模块负责协议转换）。
- `storage` → MiniMax M3 官方协议迁移、quota 快照持久化。

**注**：以上叶子归纳来自模块名+函数签名语义，未逐函数做 fs/http/registry/process/sidecar/response/error termination 的系统化标注（dim3 partial，非 dim3 closed）。
