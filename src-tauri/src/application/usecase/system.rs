use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, AppWindowPort, ForceKillOutcome,
    HotspotPlatformPort,
};
mod diagnostics;
mod settings_secret;
mod snapshot_bootstrap;

pub use self::diagnostics::diagnose;
pub use self::settings_secret::{
    get_device_id, get_or_create_remote_device_secret, import_remote_device_secret_if_empty,
};
pub use self::snapshot_bootstrap::{load_bootstrap_state, load_snapshot};

use crate::application::service::{pending_status, restored_status, unsupported_status};
use crate::application::usecase::daemon as daemon_usecase;
use crate::contracts::{
    ApiConfigPayload, ApiModePayload, ApiProxyConfigPayload, ApiProxyDetectPayload, ApiProxyMode,
    ApiProxyTestPayload, AutoSwitchConfigPayload, BackendEffect, BackendSkeletonStatus,
    CleanPayload, CoreSnapshotPayload, DaemonRunPayload, MysteryRouteGrant,
    NotificationClientStatePayload, PendingAutoSwitchStatePayload, RebuildRegistryPayload,
    SystemActionPayload, SystemInfoPayload, UpdateInstallabilityPayload,
};
use crate::core::error::CoreError;
use crate::core::hotspot as hotspot_core;
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::config as config_repository;
use crate::repository::hotspot as hotspot_repository;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;
use std::collections::BTreeMap;

pub fn clean(repo: &Repository) -> Result<CleanPayload, CoreError> {
    Ok(CleanPayload {
        auth_backups_removed: remove_children(repo, &repo.paths().auth_backups_dir)?,
        registry_backups_removed: remove_children(repo, &repo.paths().registry_backups_dir)?,
        stale_entries_removed: 0,
    })
}

pub fn refresh_usage_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let mut payload = load_snapshot(repo)?;
    payload.backend_status =
        daemon_usecase::schedule_full_runtime_refresh_for_command(repo, "refresh_usage_snapshot")?;
    snapshot_bootstrap::store_bootstrap_snapshot_progressive(repo, &payload);
    Ok(payload)
}

pub fn rebuild_registry(repo: &Repository) -> Result<RebuildRegistryPayload, CoreError> {
    repo.paths().ensure_app_directories()?;
    let account_count = registry_account_count(repo).unwrap_or_default();
    Ok(RebuildRegistryPayload {
        account_count,
        active_account_key: None,
        registry_updated: false,
    })
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

pub fn set_api_proxy_config(
    repo: &Repository,
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<ApiModePayload, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    settings.api_proxy = ApiProxyConfigPayload {
        mode,
        url: normalize_proxy_url(url),
    };
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(ApiModePayload {
        api: ApiConfigPayload {
            proxy: settings.api_proxy,
        },
    })
}

pub fn test_api_proxy_config(mode: ApiProxyMode, url: Option<String>) -> ApiProxyTestPayload {
    let reachable = matches!(mode, ApiProxyMode::Direct)
        || normalize_proxy_url(url.clone()).is_some_and(|value| value.contains("://"));
    ApiProxyTestPayload {
        code: if reachable {
            "proxy.accepted"
        } else {
            "proxy.invalid"
        }
        .to_string(),
        reachable,
        status_code: None,
        message: if reachable {
            "代理配置格式可用；当前公开后端不主动发起外部联网探测。"
        } else {
            "代理地址格式不可用。"
        }
        .to_string(),
    }
}

pub fn detect_api_proxy_config() -> ApiProxyDetectPayload {
    let probe = test_api_proxy_config(ApiProxyMode::Direct, None);
    ApiProxyDetectPayload {
        found: false,
        mode: None,
        url: None,
        probe,
    }
}

pub fn run_daemon_once(repo: &Repository) -> Result<DaemonRunPayload, CoreError> {
    daemon_usecase::run_daemon_once(repo)
}

pub fn load_pending_auto_switch() -> PendingAutoSwitchStatePayload {
    daemon_usecase::load_pending_auto_switch()
}

pub fn dismiss_pending_auto_switch() -> Option<String> {
    daemon_usecase::dismiss_pending_auto_switch()
}

pub fn confirm_pending_auto_switch() {
    daemon_usecase::confirm_pending_auto_switch()
}

pub fn confirm_pending_auto_switch_and_restart_codex() {
    daemon_usecase::confirm_pending_auto_switch_and_restart_codex()
}

pub fn get_usage_refresh_interval(repo: &Repository) -> Result<String, CoreError> {
    Ok(settings_repository::get_usage_refresh_interval(repo)?
        .as_str()
        .to_string())
}

pub fn set_usage_refresh_interval(
    repo: &Repository,
    interval: String,
) -> Result<String, CoreError> {
    let normalized = UsageRefreshInterval::parse(&interval)?;
    let saved = settings_repository::set_usage_refresh_interval(repo, normalized)?;
    let _schedule_update = daemon_usecase::update_usage_refresh_schedule(repo).ok();
    Ok(saved.as_str().to_string())
}

pub fn note_usage_refresh_activity(repo: &Repository) -> Result<BackendSkeletonStatus, CoreError> {
    daemon_usecase::note_usage_refresh_activity(repo)
}

pub fn schedule_full_runtime_refresh(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    daemon_usecase::schedule_full_runtime_refresh(repo)
}

pub fn start_auto_switch_pending_watcher(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    daemon_usecase::start_auto_switch_pending_watcher(repo)
}

pub fn start_usage_refresh_watcher(repo: &Repository) -> Result<BackendSkeletonStatus, CoreError> {
    daemon_usecase::start_usage_refresh_watcher(repo)
}

pub fn update_usage_refresh_schedule(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    daemon_usecase::update_usage_refresh_schedule(repo)
}

pub fn check_update_installability(system: &impl AppSystemPort) -> UpdateInstallabilityPayload {
    UpdateInstallabilityPayload {
        backend_status: unsupported_status(
            "system",
            "check_update_installability",
            "更新安装环境检测未在当前公开后端范围内恢复。",
        ),
        can_install: false,
        code: "unsupported".to_string(),
        executable_path: system.current_executable_path(),
        bundle_path: None,
        translocated: false,
        quarantined: false,
    }
}

pub fn graceful_restart_for_update(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.graceful_restart_for_update();
    system_action_payload(unsupported_status(
        "system",
        "graceful_restart_for_update",
        "更新重启动作未在当前公开后端范围内恢复。",
    ))
}

pub fn restart_app(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.restart_app();
    system_action_payload(unsupported_status(
        "system",
        "restart_codex",
        "重启外部程序能力未在当前公开后端范围内恢复。",
    ))
}

pub fn force_kill_app(process: &impl AppProcessPort) -> Result<SystemActionPayload, CoreError> {
    let outcome = process.force_kill_app()?;
    Ok(force_kill_payload(outcome))
}

pub fn reset_config(repo: &Repository) -> Result<SystemActionPayload, CoreError> {
    let result = config_repository::reset_codex_config(repo)?;
    let mut payload = system_action_payload(restored_status(
        "system",
        "reset_codex_config",
        BackendEffect::NoOp,
    ));
    payload.config_cleared = Some(result.config_cleared);
    Ok(payload)
}

pub fn open_path(
    shell: &impl AppShellPort,
    path: String,
) -> Result<SystemActionPayload, CoreError> {
    shell.open_path(&path)?;
    Ok(system_action_payload(restored_status(
        "system",
        "open_path",
        BackendEffect::Platform,
    )))
}

fn force_kill_payload(outcome: ForceKillOutcome) -> SystemActionPayload {
    let processes = outcome
        .processes
        .iter()
        .map(|process| format!("{} ({})", process.name, process.pid))
        .collect::<Vec<_>>();
    SystemActionPayload {
        backend_status: restored_status("system", "force_kill_codex", BackendEffect::Platform),
        config_cleared: None,
        killed_count: Some(outcome.killed_count),
        terminated_process_count: Some(outcome.killed_count),
        processes: Some(processes),
    }
}

fn system_action_payload(backend_status: BackendSkeletonStatus) -> SystemActionPayload {
    SystemActionPayload {
        backend_status,
        config_cleared: None,
        killed_count: None,
        terminated_process_count: None,
        processes: None,
    }
}

pub fn system_info(system: &impl AppSystemPort) -> SystemInfoPayload {
    let info = system.system_info();
    SystemInfoPayload {
        backend_status: restored_status("system", "get_system_info", BackendEffect::Platform),
        os: info.os,
        os_version: info.os_version,
        arch: info.arch,
        hostname: info.hostname,
    }
}

pub fn focus_main_window(window: &impl AppWindowPort) -> Result<SystemActionPayload, CoreError> {
    window.focus_main_window()?;
    Ok(system_action_payload(restored_status(
        "system",
        "focus_main_window",
        BackendEffect::Platform,
    )))
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

pub fn has_notch(hotspot: &impl HotspotPlatformPort) -> bool {
    let capability = hotspot.hotspot_capability();
    hotspot_core::has_notch(capability).has_notch
}

pub fn get_hotspot_enabled(repo: &Repository) -> Result<bool, CoreError> {
    let snapshot = hotspot_repository::load_hotspot_settings_snapshot(repo)?;
    Ok(hotspot_core::get_hotspot_enabled(snapshot).enabled)
}

pub fn set_hotspot_enabled(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    let snapshot = hotspot_repository::save_hotspot_enabled(repo, enabled)?;
    Ok(hotspot_core::set_hotspot_enabled(snapshot.enabled, snapshot).enabled)
}

pub fn hotspot_ready(hotspot: &impl HotspotPlatformPort) -> bool {
    let capability = hotspot.hotspot_capability();
    hotspot_core::hotspot_ready(capability).ready
}

pub fn get_image_compat(repo: &Repository) -> Result<bool, CoreError> {
    config_repository::get_image_compat(repo)
}

pub fn set_image_compat(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    config_repository::set_image_compat(repo, enabled)
}

fn remove_children(repo: &Repository, path: &std::path::Path) -> Result<i32, CoreError> {
    let mut removed = 0;
    for entry in repo.fs().read_dir(path)? {
        if entry.is_dir {
            repo.fs().remove_dir_all(&entry.path)?;
        } else {
            repo.fs().remove_file(&entry.path)?;
        }
        removed += 1;
    }
    Ok(removed)
}

fn registry_account_count(repo: &Repository) -> Result<i32, CoreError> {
    if !repo.fs().exists(&repo.paths().registry_path) {
        return Ok(0);
    }
    let raw = repo.fs().read_to_string(&repo.paths().registry_path)?;
    let value: serde_json::Value = serde_json::from_str(&raw)?;
    Ok(value
        .get("items")
        .and_then(serde_json::Value::as_array)
        .map(|items| items.len() as i32)
        .unwrap_or_default())
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

fn normalize_proxy_url(url: Option<String>) -> Option<String> {
    url.map(|value| value.trim().to_string())
        .filter(|value| !value.is_empty())
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
