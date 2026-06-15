use crate::application::ports::RelayPlatformPort;
use crate::contracts::{BackendEffect, BackendSkeletonStatus};
use crate::platform::relay::RelayPlatformAdapter;

pub fn current_timestamp() -> i64 {
    chrono::Utc::now().timestamp()
}

pub fn restored_status(
    module: &str,
    command: &str,
    effect: BackendEffect,
) -> BackendSkeletonStatus {
    BackendSkeletonStatus::restored(module, command, effect)
}

pub fn pending_status(module: &str, command: &str, note: &str) -> BackendSkeletonStatus {
    BackendSkeletonStatus::pending(module, command, note)
}

pub fn unsupported_status(module: &str, command: &str, note: &str) -> BackendSkeletonStatus {
    BackendSkeletonStatus::unsupported(module, command, note)
}

/// relay 默认平台端口只在 application service 装配层创建，usecase 只消费 trait 边界。
pub(crate) fn default_relay_platform() -> impl RelayPlatformPort {
    RelayPlatformAdapter
}
