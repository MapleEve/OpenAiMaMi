# maintenance current-source 证据映射

本文只登记当前公开源码的 maintenance owner 边界、验证入口和不声明事项，用于把当前源码与重构门禁中的后端六边形 owner 约束对齐。本文不把当前公开骨架等同于闭源业务还原，也不作为 raw/internal gate、双平台全 leaf 或完整闭源 maintenance 行为的完成证明。

## 当前源码 owner 边界

| owner | 当前公开源码路径 | 边界说明 |
| --- | --- | --- |
| maintenance command adapter | `src-tauri/src/commands/maintenance.rs` | 只做 Tauri 参数反序列化、`Repository` state 获取、平台 adapter 装配和 `usecase::maintenance` 调用；不 owning 文件事务、平台动作语义或用户可见文案。 |
| maintenance usecase | `src-tauri/src/application/usecase/maintenance.rs` | owning maintenance 用户动作编排：`clean`、`rebuild_registry` 进入 `repository/maintenance`，`diagnose` 转发 diagnostics owner，`force_kill_codex`、`restart_codex`、`open_path`、`get_system_info` 复用 `platform_actions`，`reset_codex_config` 复用 config repository。 |
| maintenance repository | `src-tauri/src/repository/maintenance.rs` | owning maintenance 文件事务：`clean_backup_children` 清理备份子项，`rebuild_registry_summary` 创建维护所需目录并读取 registry 摘要；所有文件访问通过可替换 `FileSystemAdapter`，不直接使用 `std::fs`。 |
| platform actions usecase | `src-tauri/src/application/usecase/platform_actions.rs` | owning 公开平台端口动作编排：`force_kill_app`、`restart_app`、`open_path`、`system_info` 等由 process/shell/system 端口承载；maintenance 只复用这些窄 owner，不复制平台动作逻辑。 |

## 命令覆盖登记

| IPC 命令 | 当前公开边界 |
| --- | --- |
| `clean` | command adapter 调用 maintenance usecase；usecase 调用 `maintenance_repository::clean_backup_children`，只登记备份子项清理结果。 |
| `rebuild_registry` | command adapter 调用 maintenance usecase；usecase 调用 `maintenance_repository::rebuild_registry_summary`，只登记目录存在性和 registry 摘要读取。 |
| `diagnose` | command adapter 装配 `SystemPlatformAdapter`；maintenance usecase 转发 diagnostics owner，并把对外状态模块标记为 maintenance。 |
| `reset_codex_config` | command adapter 获取 repository；maintenance usecase 调用 config repository，并返回 maintenance / `RepositoryWrite` 状态。 |
| `force_kill_codex` | command adapter 装配 process adapter；maintenance usecase 复用 `platform_actions::force_kill_app`。 |
| `open_path` | command adapter 接收路径参数；maintenance usecase 复用 `platform_actions::open_path`。 |
| `get_system_info` | command adapter 装配 system adapter；maintenance usecase 复用 `platform_actions::system_info`。 |
| `restart_codex` | command adapter 装配 process adapter；maintenance usecase 复用 `platform_actions::restart_app`；`AppProcessPort` 承载非阻塞 relaunch spawn 端口，spawn 错误经 `Result` 返回；不强制当前进程退出，不登记安装更新或重启闭环验收，也不声明完整 OS 真实副作用验收。 |

## 验证入口

| 入口 | 校验边界 |
| --- | --- |
| `scripts/validate-backend-maintenance-owner.mjs` | 直接校验本文、maintenance command/usecase/repository、system 回流禁止、Tauri 注册、索引登记和不声明事项。 |
| `scripts/validate-backend-platform-actions-owner.mjs` | 校验 `platform_actions` 独立 owner、平台端口动作、DTO 边界以及 maintenance/settings 对该 owner 的复用。 |
| `scripts/validate-backend-diagnostics-owner.mjs` | 校验 diagnostics 独立 owner、`diagnose` 只读快照、catalog integrity、DTO 和 maintenance 转发边界。 |
| `scripts/validate-backend-hexagonal.mjs` | 校验后端六边形 domain 到 owner 的映射，其中 maintenance domain 必须映射到 maintenance owner。 |
| `npm run validate:backend` | 后端聚合验证入口；本文只登记入口存在和 owner 绑定，不替代每个 validator 的独立输出。 |

## 不声明事项

| 项目 | 边界 |
| --- | --- |
| 平台能力真实副作用 | 本文只登记公开平台端口编排和状态语义，不登记 process、shell、system 端口在各操作系统上的真实副作用验收。 |
| 闭源 maintenance 引擎 | 本文不包含闭源 maintenance 引擎、内部调度策略或修复算法，也不把当前公开骨架等同于闭源业务还原。 |
| 真实更新重启闭环 | 本文只登记 `restart_codex` / `force_kill_codex` 的公开端口编排和状态语义；`restart_codex` 当前公开边界是非阻塞 relaunch spawn 端口，spawn 错误经 `Result` 返回，不强制当前进程退出；不登记安装更新或重启闭环验收，也不声明完整 OS 真实副作用验收。 |
| voice 接入 | 本文不接入 voice，也不把 maintenance 与 voice 形成业务链路。 |
