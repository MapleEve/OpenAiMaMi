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
    MysteryRouteGrant, NotificationClientStatePayload, SystemActionPayload,
};
use crate::core::error::CoreError;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;
use std::collections::BTreeMap;

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

pub fn mystery_unlock_grants(repo: &Repository) -> Result<Vec<MysteryRouteGrant>, CoreError> {
    let now_ms = current_epoch_ms();
    let mut grants = settings_repository::load_mystery_unlock_grants(repo)?;
    let original_count = grants.len();
    grants.retain(|grant| grant.epoch_ms >= now_ms);
    if grants.len() != original_count {
        settings_repository::save_mystery_unlock_grants(repo, grants.clone())?;
    }
    Ok(grants)
}

pub fn merge_mystery_unlock_grants(
    repo: &Repository,
    grants: Vec<MysteryRouteGrant>,
) -> Result<Vec<MysteryRouteGrant>, CoreError> {
    let now_ms = current_epoch_ms();
    let existing = settings_repository::load_mystery_unlock_grants(repo)?;
    let mut merged = BTreeMap::<String, MysteryRouteGrant>::new();

    for grant in existing {
        if grant.epoch_ms >= now_ms && is_mystery_route_allowed(&grant.route) {
            let route = normalize_mystery_route(&grant.route);
            merged.insert(route.clone(), MysteryRouteGrant { route, ..grant });
        }
    }

    for grant in grants {
        if !is_mystery_route_allowed(&grant.route) {
            continue;
        }
        let route = normalize_mystery_route(&grant.route);
        let normalized = MysteryRouteGrant {
            route: route.clone(),
            ..grant
        };
        merged
            .entry(route)
            .and_modify(|item| {
                if normalized.epoch_ms >= item.epoch_ms {
                    *item = normalized.clone();
                }
            })
            .or_insert(normalized);
    }

    let output = merged.into_values().collect::<Vec<_>>();
    settings_repository::save_mystery_unlock_grants(repo, output.clone())?;
    Ok(output)
}

fn current_epoch_ms() -> i64 {
    chrono::Utc::now().timestamp_millis()
}

fn normalize_mystery_route(route: &str) -> String {
    route.trim().trim_matches('/').to_string()
}

fn is_mystery_route_allowed(route: &str) -> bool {
    matches!(
        normalize_mystery_route(route).as_str(),
        "mcp"
            | "skills"
            | "overview"
            | "accounts"
            | "sessions"
            | "plugins"
            | "relayModel"
            | "settings"
            | "maintenance"
    )
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::contracts::AppSettingsFile;

    #[test]
    fn mystery_unlock_grants_filters_expired_and_persists_cleanup() {
        let repo = Repository::with_temp_file_system("mystery-grants-filter");
        let now_ms = current_epoch_ms();
        let settings = AppSettingsFile {
            mystery_unlock_grants: vec![
                MysteryRouteGrant {
                    route: "overview".to_string(),
                    epoch_ms: now_ms + 60_000,
                },
                MysteryRouteGrant {
                    route: "skills".to_string(),
                    epoch_ms: now_ms - 60_000,
                },
            ],
            ..AppSettingsFile::default()
        };
        settings_repository::save_app_settings(&repo, &settings).expect("save settings");

        let grants = mystery_unlock_grants(&repo).expect("load grants");

        assert_eq!(
            grants,
            vec![MysteryRouteGrant {
                route: "overview".to_string(),
                epoch_ms: now_ms + 60_000,
            }]
        );
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .mystery_unlock_grants,
            grants
        );
    }

    #[test]
    fn merge_mystery_unlock_grants_filters_allowlist_and_persists_sorted() {
        let repo = Repository::with_temp_file_system("mystery-grants-merge");
        let now_ms = current_epoch_ms();
        let settings = AppSettingsFile {
            mystery_unlock_grants: vec![
                MysteryRouteGrant {
                    route: "overview".to_string(),
                    epoch_ms: now_ms + 10_000,
                },
                MysteryRouteGrant {
                    route: "notAllowed".to_string(),
                    epoch_ms: now_ms + 10_000,
                },
            ],
            ..AppSettingsFile::default()
        };
        settings_repository::save_app_settings(&repo, &settings).expect("save settings");

        let grants = merge_mystery_unlock_grants(
            &repo,
            vec![
                MysteryRouteGrant {
                    route: "/skills/".to_string(),
                    epoch_ms: now_ms + 20_000,
                },
                MysteryRouteGrant {
                    route: "plugins".to_string(),
                    epoch_ms: now_ms + 25_000,
                },
                MysteryRouteGrant {
                    route: "relayModel".to_string(),
                    epoch_ms: now_ms + 26_000,
                },
                MysteryRouteGrant {
                    route: "overview".to_string(),
                    epoch_ms: now_ms + 30_000,
                },
                MysteryRouteGrant {
                    route: "customInstructions".to_string(),
                    epoch_ms: now_ms + 35_000,
                },
                MysteryRouteGrant {
                    route: "subscription".to_string(),
                    epoch_ms: now_ms + 40_000,
                },
            ],
        )
        .expect("merge grants");

        assert_eq!(
            grants,
            vec![
                MysteryRouteGrant {
                    route: "overview".to_string(),
                    epoch_ms: now_ms + 30_000,
                },
                MysteryRouteGrant {
                    route: "plugins".to_string(),
                    epoch_ms: now_ms + 25_000,
                },
                MysteryRouteGrant {
                    route: "relayModel".to_string(),
                    epoch_ms: now_ms + 26_000,
                },
                MysteryRouteGrant {
                    route: "skills".to_string(),
                    epoch_ms: now_ms + 20_000,
                },
            ]
        );
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .mystery_unlock_grants,
            grants
        );
    }
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
