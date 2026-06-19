# system snapshot-bootstrap 后端当前源码证据映射

本文只记录 `load_snapshot` 与 `load_bootstrap_state` 在当前公开源码中的后端 owner、合同、前端服务门面和 mock 镜像。本文不关闭 `docs/reconstruction/system-window-maintenance-current-source-map.md` 中的前端 `load_snapshot` 未关闭边界，不修改 raw/internal gate，也不声明真实 daemon、watcher、autoswitch、平台副作用或 `voice` 接入已经恢复。

## 当前 owner 边界

| 层级 | 文件 | 边界 |
| --- | --- | --- |
| Tauri 注册 | `src-tauri/src/lib.rs` | 只登记 `commands::system::load_snapshot` 与 `commands::system::load_bootstrap_state`。 |
| command adapter | `src-tauri/src/commands/system.rs` | 只做 state/repository 获取、参数兼容和 usecase 调用；`localOnly` 只保持 IPC 兼容，不 owning 业务。 |
| usecase owner | `src-tauri/src/application/usecase/system/snapshot_bootstrap.rs` | owning 启动快照组装、bootstrap cache 读取、snapshot progressive 写回和兼容字段填充。 |
| usecase 兼容出口 | `src-tauri/src/application/usecase/system.rs` | 只 re-export `load_snapshot` 与 `load_bootstrap_state`，不把 diagnostics、settings、maintenance、daemon 或 hotspot 行为回流到 system 根文件。 |
| repository owner | `src-tauri/src/repository/bootstrap.rs` | 只通过可替换 `Repository` / `FileSystemAdapter` 读写 `bootstrap-cache.json`，不解释缓存内容的业务含义。 |
| Rust DTO | `src-tauri/src/contracts/bootstrap.rs`、`src-tauri/src/contracts/system.rs` | `BootstrapCacheFile`、`BootstrapStatePayload` 与 `CoreSnapshotPayload` 分开承载 cache、bootstrap state 和 snapshot payload。 |
| TypeScript service | `src/services/system/index.ts` | 前端只经 `systemService.loadSnapshot` 与 `systemService.loadBootstrapState` 调用后端能力。 |
| IPC contract / E2E mock | `src/contracts/ipc/commands.ts`、`src/mocks/fixtures/commands.ts` | 合同和 mock 镜像 `load_snapshot` 与 `load_bootstrap_state` 的字段形状；mock 不证明真实后端业务副作用。 |

## 已恢复的事实

- `load_snapshot` 由 `snapshot_bootstrap.rs` 组装 `CoreSnapshotPayload`，读取 settings、账号摘要和路径状态，并把 snapshot progressive 写入 bootstrap cache。
- `load_bootstrap_state` 读取 `bootstrap-cache.json` 的 `writtenAt`、`snapshotProgressive`、`usageAnalytics`、`mcpServers` 和 `installedSkills` 切片。
- `executedAt`、`runOnce`、`activeAccountKey`、`switchedAccountKey`、`pendingSwitchAccountKey` 保留为兼容字段或默认值，不升级为真实 daemon/autoswitch 状态。
- bootstrap repository 通过 `repo.paths().bootstrap_cache_path` 和 `repo.fs()` 读写文件，测试使用 fake/temp repository。

## 明确未声明

- 不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不声明双平台 100%、后端 IDA 完成、真实 watcher、daemon、runtime event、autoswitch 状态、后台采集或平台副作用恢复。
- 不把 mock handler 当作真实后端行为证明。
- 不改变前端 system-window-maintenance 文档中 `load_snapshot` 未关闭的 non-gating 边界。
- 不扩大到 `voice`。

## validator 接入

`scripts/validate-backend-system-owner.mjs` 必须验证本文、source-map、重建 README、Rust 注册、command adapter、usecase owner、repository owner、Rust DTO、TypeScript service、IPC contract 和 E2E mock 的当前源码闭环，同时保留上述未声明边界。
