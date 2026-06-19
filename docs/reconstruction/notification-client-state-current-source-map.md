# get_notification_client_state current-source 证据映射

本文只记录 `get_notification_client_state` 在当前公开源码中的 settings 持久化收口。它不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明通知客户端运行时、推送订阅、轮询、后台 watcher、Tauri event、托盘通知或平台通知能力已经恢复。

## 证据来源

| 来源 | 结论 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/logic/NOTIFICATION-CLIENT-STATE-DISTILLED-109.md` | `get_notification_client_state` 无参数，返回 `deviceId` 和 `notificationsSince`；已有 settings 中 `deviceId` 非空且 `notificationsSince > 0` 时走只读路径，否则生成 UUID 与 epoch 秒并写回 settings。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system/logic/WIN-GET-NOTIFICATION-CLIENT-STATE-109.md` | Windows 侧确认同一 DTO 和 settings 写入行为，`notificationsSince` 为 Unix epoch seconds，create path 写 settings，read path 不写磁盘。 |

## 当前源码链

| 层 | 路径 | owner 边界 |
| --- | --- | --- |
| IPC command | `src-tauri/src/commands/system.rs` | 只做 Tauri state 获取、调用 usecase 和返回 envelope。 |
| usecase | `src-tauri/src/application/usecase/system.rs` | `notification_client_state` 只装配 `BackendEffect::RepositoryWrite` 和 payload，不直接写文件。 |
| settings-secret usecase | `src-tauri/src/application/usecase/system/settings_secret.rs` | `get_or_create_notification_client_state` owning settings 持久化读取、UUID 创建、epoch 秒创建和保存事务。 |
| settings DTO | `src-tauri/src/contracts/settings.rs` | `AppSettingsFile.notifications_since` 通过 serde camelCase 对应公开 JSON 字段 `notificationsSince`。 |
| repository | `src-tauri/src/repository/settings.rs` | 继续 owning settings.json 读取、临时文件写入和 rename 原子替换。 |
| 前端 DTO | `src/types/index.ts` | `NotificationClientStatePayload` 保留 `deviceId` 与 `notificationsSince`。 |
| 前端服务 | `src/services/system/index.ts` | `getNotificationClientState` 仍只经 `src/lib/api.ts` 暴露的 system service wrapper 触发 IPC。 |

## 已恢复范围

- `deviceId` 和 `notificationsSince` 由 settings 持久化。
- settings 中已有非空 `deviceId` 且 `notificationsSince > 0` 时复用旧值，不写 settings。
- settings 缺少任一有效值时生成新的 UUID 和当前 epoch 秒，并通过 settings repository 写回。
- response DTO 返回 settings 持久化的 `deviceId` 与 `notificationsSince`。
- backend status 保持 `RepositoryWrite`，因为 create path 会写 settings。

## 未恢复和禁止声明

- 不声明通知客户端运行时、远端推送订阅、通知轮询、后台 watcher、Tauri event、托盘通知或平台通知能力已经恢复。
- 不声明 raw/internal gate 已闭合，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不新增 HTTP、外部进程、平台通知 API、线程、定时器或 runtime event。
- 不碰 `voice`，不把 notification client state 接入 `voice` 入口、路由、IPC mock 或后端命令。

## 验证入口

- `scripts/validate-backend-system-owner.mjs` 直接验证本文、settings DTO、settings-secret owner、system usecase payload、source-map 索引和未恢复边界。
- `scripts/validate-frontend-tray-shell-cache.mjs` 直接验证前端 tray-shell notification client cache 的 stale、delayed、event replay 和 focus/ack mutation fence 竞态边界；该验证只证明 current-source cache owner，不声明通知运行时、托盘通知或平台通知能力恢复。
- `npm run validate:backend-system-owner` 进入 `npm run validate:backend`，再进入 `npm run validate:all`。
