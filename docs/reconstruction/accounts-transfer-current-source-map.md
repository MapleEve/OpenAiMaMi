# accounts transfer current-source 证据映射

本文只记录账号导入导出在当前公开后端源码中的 usecase、repository、platform 边界。它不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明闭源账号业务完整恢复。

## 当前源码边界

| 层 | 文件 | 边界 |
| --- | --- | --- |
| command | `src-tauri/src/commands/accounts.rs` | 只接收 IPC 参数、获取 repository state、装配 `SystemPlatformAdapter`，再调用 accounts usecase。 |
| usecase | `src-tauri/src/application/usecase/accounts.rs` | owning `export_accounts_to_file`、`preview_account_import`、`import_accounts_from_file` 三个用户动作事务，校验输入、读取 registry/export document、组织 repository helper 和 platform hostname。 |
| repository | `src-tauri/src/repository/accounts.rs` | owning registry、export document、snapshot 的 JSON 读写和 `json.tmp` 加 `rename` 原子替换；不暴露 export/preview/import 用户动作入口。 |
| platform | `src-tauri/src/platform/system.rs` | owning hostname 读取，usecase 只能通过 `AppSystemPort` 消费结构化系统信息。 |

## 明确未恢复内容

- 不声明真实账号监控生命周期已恢复。
- 不声明 ChatGPT session account 真实导入、refresh token 持久化或 snapshot 生成已恢复。
- 不新增 runtime event、后台 watcher、平台副作用或进程重启动作。
- 不接入 `voice`。

## validator 接入

`scripts/validate-backend-accounts-transfer-owner.mjs` 必须验证：

- repository 不暴露 `export_accounts_to_file`、`preview_account_import`、`import_accounts_from_file` 用户动作入口。
- command 负责装配 `SystemPlatformAdapter`，usecase 通过 `AppSystemPort` 读取 hostname，不直接调用 `hostname::get()`。
- registry、export document 和 snapshot 写入经 repository 的 `write_json_pretty_atomic`，先写 `json.tmp` 再 `rename`。

