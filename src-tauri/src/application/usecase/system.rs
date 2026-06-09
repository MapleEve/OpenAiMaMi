use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, AppWindowPort, HotspotPlatformPort,
};
use crate::application::service::{
    current_timestamp, pending_status, restored_status, unsupported_status,
};
use crate::contracts::{
    ApiConfigPayload, ApiConnectivityPayload, ApiModePayload, ApiProxyConfigPayload,
    ApiProxyDetectPayload, ApiProxyMode, ApiProxyTestPayload, ApiReachabilityStatus, AppPathState,
    AppSettingsFile, AppStatusPayload, AutoSwitchConfigPayload, AutoSwitchRuntimeState,
    AutoSwitchStatusPayload, BackendEffect, BootstrapStatePayload, CleanPayload,
    CoreSnapshotPayload, DaemonRunPayload, DiagnoseApiState, DiagnosePayload, DiagnosePlatform,
    DiagnoseRegistryState, DiagnoseSessionState, MysteryRouteGrant, NotificationClientStatePayload,
    PendingAutoSwitchStatePayload, RebuildRegistryPayload, SystemActionPayload, SystemInfoPayload,
    UpdateInstallabilityPayload, UsageSource,
};
use crate::core::error::CoreError;
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

pub fn load_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    Ok(CoreSnapshotPayload {
        backend_status: restored_status("system", "load_snapshot", BackendEffect::NoOp),
        status: make_status(repo, &settings),
    })
}

pub fn refresh_usage_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let mut payload = load_snapshot(repo)?;
    payload.backend_status = pending_status(
        "system",
        "refresh_usage_snapshot",
        "用量刷新 API 未在当前公开后端范围内恢复。",
    );
    Ok(payload)
}

pub fn load_bootstrap_state(repo: &Repository) -> Result<BootstrapStatePayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    Ok(BootstrapStatePayload {
        backend_status: restored_status("system", "load_bootstrap_state", BackendEffect::NoOp),
        executed_at: None,
        run_once: false,
        auto_switch_enabled: settings.auto_switch_enabled,
        active_account_key: None,
        switched_account_key: None,
        pending_switch_account_key: None,
    })
}

pub fn clean(repo: &Repository) -> Result<CleanPayload, CoreError> {
    Ok(CleanPayload {
        auth_backups_removed: remove_children(repo, &repo.paths().auth_backups_dir)?,
        registry_backups_removed: remove_children(repo, &repo.paths().registry_backups_dir)?,
        stale_entries_removed: 0,
    })
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

pub fn diagnose(repo: &Repository) -> Result<DiagnosePayload, CoreError> {
    Ok(DiagnosePayload {
        paths: make_path_state(repo),
        core_version: env!("CARGO_PKG_VERSION").to_string(),
        platform: DiagnosePlatform {
            os: std::env::consts::OS.to_string(),
            arch: std::env::consts::ARCH.to_string(),
        },
        registry_state: DiagnoseRegistryState {
            account_count: registry_account_count(repo).unwrap_or_default(),
        },
        session_state: DiagnoseSessionState {
            latest_rollout_found: repo.fs().exists(&repo.paths().sessions_dir),
        },
        api_state: DiagnoseApiState {
            usage_attempt_count: 0,
            usage_success_count: 0,
            name_attempt_count: 0,
            name_success_count: 0,
            last_usage_failure: None,
            last_usage_failure_account: None,
            last_name_failure: None,
            last_name_failure_account: None,
        },
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
        auto_switch: make_auto_switch_status(&settings),
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
        auto_switch: make_auto_switch_status(&settings),
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
    let settings = settings_repository::load_app_settings(repo)?;
    Ok(DaemonRunPayload {
        backend_status: pending_status(
            "system",
            "run_daemon_once",
            "自动切换守护进程未在当前公开后端范围内恢复。",
        ),
        executed_at: current_timestamp(),
        run_once: true,
        auto_switch_enabled: settings.auto_switch_enabled,
        service_state: AutoSwitchRuntimeState::NotInstalled,
    })
}

pub fn load_pending_auto_switch() -> PendingAutoSwitchStatePayload {
    PendingAutoSwitchStatePayload {
        backend_status: pending_status(
            "system",
            "load_pending_auto_switch",
            "自动切换待确认状态未在当前公开后端范围内恢复。",
        ),
        current_account_key: String::new(),
        candidate_account_key: String::new(),
        dismissed_at: None,
    }
}

pub fn dismiss_pending_auto_switch() -> Option<String> {
    None
}

pub fn confirm_pending_auto_switch() {}

pub fn confirm_pending_auto_switch_and_restart_codex() {}

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
    settings_repository::set_usage_refresh_interval(repo, normalized.clone())?;
    Ok(normalized.as_str().to_string())
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
    SystemActionPayload {
        backend_status: unsupported_status(
            "system",
            "graceful_restart_for_update",
            "更新重启动作未在当前公开后端范围内恢复。",
        ),
    }
}

pub fn restart_app(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.restart_app();
    SystemActionPayload {
        backend_status: unsupported_status(
            "system",
            "restart_codex",
            "重启外部程序能力未在当前公开后端范围内恢复。",
        ),
    }
}

pub fn force_kill_app(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.force_kill_app();
    SystemActionPayload {
        backend_status: unsupported_status(
            "system",
            "force_kill_codex",
            "强制结束外部程序能力未在当前公开后端范围内恢复。",
        ),
    }
}

pub fn reset_config(system: &impl AppSystemPort) -> SystemActionPayload {
    let _ = system.reset_config();
    SystemActionPayload {
        backend_status: unsupported_status(
            "system",
            "reset_codex_config",
            "重置外部配置能力未在当前公开后端范围内恢复。",
        ),
    }
}

pub fn open_path(
    shell: &impl AppShellPort,
    path: String,
) -> Result<SystemActionPayload, CoreError> {
    shell.open_path(&path)?;
    Ok(SystemActionPayload {
        backend_status: restored_status("system", "open_path", BackendEffect::Platform),
    })
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
    Ok(SystemActionPayload {
        backend_status: restored_status("system", "focus_main_window", BackendEffect::Platform),
    })
}

pub fn get_device_id(repo: &Repository) -> Result<String, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    if let Some(id) = settings.device_id.clone() {
        return Ok(id);
    }
    let id = uuid::Uuid::new_v4().to_string();
    settings.device_id = Some(id.clone());
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(id)
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

pub fn mystery_unlock_grants() -> Vec<MysteryRouteGrant> {
    Vec::new()
}

pub fn merge_mystery_unlock_grants(grants: Vec<MysteryRouteGrant>) -> Vec<MysteryRouteGrant> {
    grants
}

pub fn import_remote_device_secret_if_empty(_secret: String) {}

pub fn has_notch(hotspot: &impl HotspotPlatformPort) -> bool {
    hotspot.has_notch()
}

pub fn get_hotspot_enabled(repo: &Repository) -> Result<bool, CoreError> {
    settings_repository::get_hotspot_enabled(repo)
}

pub fn set_hotspot_enabled(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    settings_repository::set_hotspot_enabled(repo, enabled)?;
    Ok(enabled)
}

pub fn hotspot_ready(hotspot: &impl HotspotPlatformPort) -> bool {
    hotspot.is_hotspot_ready()
}

pub fn get_image_compat() -> bool {
    true
}

pub fn set_image_compat(enabled: bool) -> bool {
    enabled
}

fn make_status(repo: &Repository, settings: &AppSettingsFile) -> AppStatusPayload {
    AppStatusPayload {
        paths: make_path_state(repo),
        last_scan_at: current_timestamp(),
        usage_source: UsageSource::Local,
        auto_switch: make_auto_switch_status(settings),
        api: ApiConfigPayload {
            proxy: settings.api_proxy.clone(),
        },
        api_connectivity: ApiConnectivityPayload {
            usage_status: ApiReachabilityStatus::Unknown,
            usage_last_error: None,
        },
    }
}

fn make_path_state(repo: &Repository) -> AppPathState {
    let paths = repo.paths();
    AppPathState {
        codex_home: paths.codex_home.display().to_string(),
        accounts_path: paths.accounts_dir.display().to_string(),
        auth_path: paths.auth_path.display().to_string(),
        registry_path: paths.registry_path.display().to_string(),
        sessions_path: paths.sessions_dir.display().to_string(),
        launch_agent_path: paths.launch_agent_path.display().to_string(),
        auto_switch_log_path: paths.auto_switch_log_path.display().to_string(),
        auth_exists: repo.fs().exists(&paths.auth_path),
        registry_exists: repo.fs().exists(&paths.registry_path),
        sessions_exists: repo.fs().exists(&paths.sessions_dir),
    }
}

fn make_auto_switch_status(settings: &AppSettingsFile) -> AutoSwitchStatusPayload {
    AutoSwitchStatusPayload {
        enabled: settings.auto_switch_enabled,
        threshold_5h_percent: settings.threshold_5h_percent,
        threshold_weekly_percent: settings.threshold_weekly_percent,
        service_state: AutoSwitchRuntimeState::NotInstalled,
        service_label: "dev.aimami.auto-switch".to_string(),
    }
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
