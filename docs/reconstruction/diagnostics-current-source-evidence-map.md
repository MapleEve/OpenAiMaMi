# diagnostics current-source 证据映射

本文件只记录当前公开源码中 `diagnose` 可证明的只读诊断快照能力。它不修改 raw/internal gate-report，不声明完整诊断引擎、修复逻辑、平台密钥检查、SQLite 检查或 TOML 深度修复已经恢复，也不声明双平台全 leaf 已完成。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `evidence/full-chain/internal/root/REVERSE-STATUS.md` | 记录 `diagnose` 属于只读诊断入口，公开可恢复范围是本地路径和状态快照；不要求 HTTP、spawn、写磁盘或真实修复副作用。 |
| `src-tauri/src/commands/maintenance.rs` | command 层只获取 repository 和 `SystemPlatformAdapter`，调用 maintenance usecase 并返回 envelope。 |
| `src-tauri/src/application/usecase/maintenance.rs` | maintenance 只转交独立 diagnostics usecase，并把返回状态模块改为 maintenance。 |
| `src-tauri/src/application/usecase/diagnostics.rs` | diagnostics usecase 组装只读诊断 DTO、平台 os/arch、路径状态、registry/session 摘要、`catalog_integrity` 只读探针和 pending diagnostics 字段。 |
| `src-tauri/src/repository/diagnostics.rs` | diagnostics repository 只通过可替换 FS 读取路径存在性、registry JSON items 数量和 sessions 子项数量。 |
| `src-tauri/src/repository/relay.rs` | `catalog_integrity` 只复用 relay repository 对 config.toml、`codex_router_catalog.json` 和 relay 本地配置状态的只读事实，不执行修复。 |
| `src-tauri/src/contracts/diagnostics.rs` | 公开 `DiagnosePayload`、platform、snapshot、probe、`catalog_integrity` 和 pending field DTO。 |

## 当前恢复内容

| 能力 | 当前源码 owner | 恢复边界 |
| --- | --- | --- |
| `diagnose` 只读快照 | `application/usecase/diagnostics.rs` | `backend_status.restored=true`，`BackendEffect::RepositoryRead`；只说明本地 repository snapshot 可读，不产生修复或平台副作用。 |
| 路径探针 | `repository/diagnostics.rs` | 读取 `codex_home`、`accounts_dir`、`auth_path`、`registry_path`、`sessions_dir`、`config_path` 的存在性。 |
| registry 数量 | `repository/diagnostics.rs` | 如果 registry JSON 存在，只读取 `items` 数组长度；不校验账号密钥、不修复 registry。 |
| sessions 数量 | `repository/diagnostics.rs` | 如果 sessions 目录存在，只统计目录子项数量；不读取敏感会话内容。 |
| `catalog_integrity` 只读探针 | `application/usecase/diagnostics.rs`、`repository/relay.rs` | 读取 config.toml 受管区块、`codex_router_catalog.json` 存在性、relay 本地 router 开关和 stale reason；不调用 router 修复，不写文件，不启动进程。 |
| 平台信息 | `platform/system.rs` 经 `DiagnosticPlatformPort` | 只返回 os、arch 和 capability probe 结构化信息；不执行原生诊断修复。 |

## pending 边界

| pending 项 | 当前边界 |
| --- | --- |
| `auth_integrity` | 认证文件与平台密钥或注册表一致性诊断引擎未恢复。 |
| `api_key_integrity` | API key 与平台凭据存储一致性诊断引擎未恢复。 |
| `db_orphan_providers` | SQLite 中转 Provider 孤儿记录诊断引擎未恢复。 |
| `rollout_orphan_providers` | rollout 线程孤儿 Provider 诊断引擎未恢复。 |
| `repair_logic` | 诊断修复逻辑未恢复；当前 `diagnose` 不写文件、不启动进程、不修改配置。 |

## 验证入口

- `scripts/validate-backend-diagnostics-owner.mjs` 直接验证本文件、diagnostics usecase、repository、contracts、TypeScript 类型、E2E mock、maintenance 转发、`catalog_integrity` 只读探针和 pending 边界。
- `npm run validate:backend-diagnostics-owner` 用于单独验收 diagnostics owner。
- `npm run validate:backend` 和 `npm run validate:all` 用于聚合验收。
