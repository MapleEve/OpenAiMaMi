mod diagnostics;
mod platform_actions;
mod settings_secret;
mod snapshot_bootstrap;

pub use self::diagnostics::diagnose;
pub use self::platform_actions::{
    check_update_installability, focus_main_window, force_kill_app, graceful_restart_for_update,
    open_path, restart_app, system_info,
};
pub use self::settings_secret::{
    get_device_id, get_or_create_remote_device_secret, import_remote_device_secret_if_empty,
};
pub use self::snapshot_bootstrap::{load_bootstrap_state, load_snapshot};

use crate::application::service::{pending_status, restored_status};
use crate::application::usecase::daemon as daemon_usecase;
use crate::contracts::{
    AutoSwitchConfigPayload, BackendEffect, BackendSkeletonStatus, CoreSnapshotPayload,
    NotificationClientStatePayload, SystemActionPayload,
};
use crate::core::error::CoreError;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

pub fn refresh_usage_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let mut payload = load_snapshot(repo)?;
    payload.backend_status =
        daemon_usecase::schedule_full_runtime_refresh_for_command(repo, "refresh_usage_snapshot")?;
    snapshot_bootstrap::store_bootstrap_snapshot_progressive(repo, &payload);
    Ok(payload)
}

pub fn set_auto_switch(
    repo: &Repository,
    enabled: bool,
) -> Result<AutoSwitchConfigPayload, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    settings.auto_switch_enabled = enabled;
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(AutoSwitchConfigPayload {
        backend_status: restored_status("system", "set_auto_switch", BackendEffect::NoOp),
        auto_switch: snapshot_bootstrap::make_auto_switch_status(&settings),
    })
}

pub fn configure_auto_switch(
    repo: &Repository,
    threshold_5h_percent: Option<i32>,
    threshold_weekly_percent: Option<i32>,
) -> Result<AutoSwitchConfigPayload, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    if let Some(value) = threshold_5h_percent {
        validate_percent(value)?;
        settings.threshold_5h_percent = value;
    }
    if let Some(value) = threshold_weekly_percent {
        validate_percent(value)?;
        settings.threshold_weekly_percent = value;
    }
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(AutoSwitchConfigPayload {
        backend_status: restored_status("system", "configure_auto_switch", BackendEffect::NoOp),
        auto_switch: snapshot_bootstrap::make_auto_switch_status(&settings),
    })
}

pub fn notification_client_state(
    repo: &Repository,
) -> Result<NotificationClientStatePayload, CoreError> {
    Ok(NotificationClientStatePayload {
        backend_status: pending_status(
            "system",
            "get_notification_client_state",
            "通知客户端状态未在当前公开后端范围内恢复。",
        ),
        device_id: get_device_id(repo)?,
        notifications_since: 0,
    })
}

fn validate_percent(value: i32) -> Result<(), CoreError> {
    if (0..=100).contains(&value) {
        Ok(())
    } else {
        Err(CoreError::InvalidInput(
            "百分比必须在 0 到 100 之间".to_string(),
        ))
    }
}
