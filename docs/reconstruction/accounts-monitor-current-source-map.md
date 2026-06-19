# accounts monitor current-source 证据映射

本文件只记录 `begin_add_account_attach_monitor` 在当前公开源码里的后端边界。它不修改 raw/internal 证据，不声明双平台 `full_leaf_100` 已完成，也不把账号 monitor 生命周期、线程、runtime 事件或前端回调写成已恢复。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-accounts/logic/FULL-CHAIN-109.md` | Windows 证据记录 `begin_add_account_attach_monitor` 无参数，side effects 包含 repo snapshot read、monitor attach state 和 Tauri IPC resolve。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-accounts/frontend/FRONTEND-FULL-CHAIN-109.md` | 前端链路记录 `api.beginAddAccountAttachMonitor()` 到 `invoke("begin_add_account_attach_monitor")`，并描述 visible add-account flow 中 monitor 命令是 local snapshot/preflight plus scheduled refresh。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-accounts/logic/ACCOUNTS-MONITOR-FRONTEND-CALLBACK-GAP-109.md` | macOS 侧仍缺前端 runtime proof、callback、event payload 和 acceptance；当前公开源码不能声明 macOS monitor lifecycle 已恢复。 |
| `src-tauri/src/application/usecase/accounts.rs` | 当前只由 usecase 调用 `accounts_repository::load_registry(repo)?` 做仓储预检，并返回 `RepositoryRead` 状态。 |
| `src-tauri/src/repository/accounts.rs` | repository 只提供可替换 FS 上的 registry 读取，不 owning monitor 用户动作事务。 |

## 当前源码边界

| 命令 | 当前公开实现 | effect/status |
| --- | --- | --- |
| `begin_add_account_attach_monitor` | usecase 读取账号 registry，确认仓储路径和 JSON 解析边界可用；payload 仍只返回 `AccountMonitorPayload.backend_status`，不扩 DTO。 | `BackendEffect::RepositoryRead`，中文 note 明确只恢复仓储预检边界。 |

## 明确未恢复内容

- 不创建后台 monitor。
- 不创建线程。
- 不调用 `tokio::spawn`、`std::thread` 或轮询循环。
- 不发送 runtime-state-updated。
- 不注册 native callback。
- 不写 registry、auth、snapshot 或运行时状态。
- 不接 platform adapter。
- 不声明 macOS monitor lifecycle 已恢复。
- 不声明真实 add-account runtime acceptance 已完成。

## validator 接入

`scripts/validate-backend-accounts-owner.mjs` 必须验证：

- `begin_add_account_attach_monitor` 通过 `accounts_repository::load_registry(repo)?` 做只读预检。
- backend status 是 `RepositoryRead`。
- 中文 note 保留只恢复仓储预检边界。
- 函数体不得出现 pending status、线程创建、Tauri emit、platform 副作用或仓储写入。
- 本文件必须被 `docs/reconstruction/source-map.md` 和 `docs/reconstruction/README.md` 索引。
