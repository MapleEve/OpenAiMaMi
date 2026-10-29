# backend-fullchain-codex-catalog.md — AiMaMi 1.2.7 ChatGPT 引擎目录适配（兼容老版）深 diff

- session: `<审计会话>`（macos-arm64）
- 命令面: 无直接新增 IPC 命令（目录适配为内部行为面重构）；影响 `run_codex_router_diagnostics` 的 `official_catalog_freshness`/`catalog_integrity` 检查项与 relay 请求装配
- 后端面: `codex_catalog` +16/−14；`native_catalog` 新模块（13 fns）；`native_repair_catalog` 新模块（7 fns）；`platform/paths/CodexPaths` +6；`config_takeover` +7

---

## 1. 新版引擎目录 + 老版兼容

### 1.1 `codex_catalog::validate_legacy_no_account_aliases`（新；sz=500，bb=22，10 callees）

- 老版（legacy）`no_account_aliases` 配置面校验入口——「兼容老版」的直接证据。1.2.6 的 no-account slots 面（`set_codex_no_account_slots` IPC 已删）在 1.2.7 收编为 legacy 校验 + `restore_no_account_model_threads` 恢复链（见 threads 文档 §1）。
- dim3: validate_legacy_no_account_aliases → codex_catalog 读取（fs/JSON 叶）。

### 1.2 `core::relay::native_catalog`（新模块）

- `official_headers`（5 callees）：官方请求头治理，字面量 `authorization` / `cookie` / `set-cookie` / `origin` / `referer` / `via` / `forwarded`（转发头白名单/剥离面）。
- `validate_official_models`（14 callees）：官方模型清单校验（`models` / `slug` / `tier`）。
- `CatalogReply::into_http_response` / `response_identity` / `revision`：目录缓存协议（埋点 `stage/start/url/elapsedMs/firstToken/ok/firstTokenMs/totalMs`；`x-aimami-catalog-revision` 头，见 1.3）。
- **dim3 实现叶**: HTTP（官方目录获取）+ fs 缓存 + HTTP 响应装配。

### 1.3 `core::relay::native_repair_catalog`（新模块）

- `PreparedRepairCatalog::prepare`（34 callees）+ 闭包：生成修复目录；关键常量 `model_providers` / `requires_openai_auth` / `http_headers` / **`x-aimami-catalog-revision`** / **`https://chatgpt.com/backend-api/codex`**（新版引擎端点）/ `base_url`。
- `validate_source` 闭包 / `read_optional` / `PreparedRepairCatalog::catalog`：来源校验 + 可选读取。
- 判读: 新版 ChatGPT 引擎目录（chatgpt.com/backend-api/codex）的官方目录获取、校验与「修复目录」装配——1.2.7 目录适配的核心。

## 2. `config_takeover` 扩展（+7）

- `restore`（40 callees，43.7KB 伪代码）：备份恢复。备份文件名面：`router-takeover-backup.json` / `codex_router_top_level_backup.json`；managed 段标记 `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` / `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)`。
- 新增/增强面: `quarantine_damaged_backups`（28；损坏备份隔离）、`split_foreign_surface`（20；外来段拆分）、`merge_runtime_quarantine`（15）、`validate_recovery_backups` / `read_backup_bytes` / `read_legacy_backup_lines`（**legacy 备份行兼容**）、`normalize_catalog_path`、`is_aimami_owned_top_level_line`、`tidy_blank_lines` / `first_section_part` / `top_level_assignment_key`。
- **dim4 副作用**: config.toml 原子改写 + 备份写/恢复（fs 叶）；隔离（quarantine）不删除。
- 1.2.6 对应证据: `raw/aimami/1.2.6/macos-arm64/core/relay/`（takeover 既有叶）；1.2.7 增量为隔离/校验/legacy 行兼容面。

## 3. platform/paths/CodexPaths（+6）

Codex 引擎目录路径族 +6 fns（新版目录布局 + 老版探测）。本轮未逐函数 decompile（中优先级；无 IPC 面），owner 与模块归属已由符号面证实。消费侧实现路径适配前，建议对该 6 fns 补定向 decompile 以获得路径常量级契约。

## 4. 平台门与 Unknown

- mac: live IDA 证据（EA/伪代码/callee/字面量）。win: `codex_catalog.rs` 新 src 路径确认（盘点轮）；win 侧路径族（CodexPaths 的 Windows 目录布局）未逆，**mac 路径结论不外推 win**。
- Unknown: `native_catalog::revision` 的缓存失效策略细节；`CodexPaths` 6 fns 的具体路径常量；`validate_legacy_no_account_aliases` 的精确校验规则（3 条字面量级错误面未检出——函数小，建议实现前补一次 decompile 复核）。
