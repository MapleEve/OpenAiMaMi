use crate::contracts::RelayRouterMigrationPayload;

/// 公开源码仅保留 relay_thread_migration owner 边界；这里返回空操作/待处理结果，
/// 不执行真实进程枚举、数据库线程写入、会话元数据替换或重启。
pub(super) fn router_toggle_noop_migration() -> RelayRouterMigrationPayload {
    RelayRouterMigrationPayload {
        action: "repository-state-updated".to_string(),
        migrated_count: 0,
        rolled_back_count: 0,
        skipped_count: 0,
        target_provider: None,
        target_model: None,
        manifest_path: None,
    }
}
