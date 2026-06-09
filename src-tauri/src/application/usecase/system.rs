use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, AppWindowPort, ForceKillOutcome,
    HotspotPlatformPort,
};
use crate::application::service::{
    current_timestamp, pending_status, restored_status, unsupported_status,
};
use crate::contracts::{
    ApiConfigPayload, ApiConnectivityPayload, ApiModePayload, ApiProxyConfigPayload,
    ApiProxyDetectPayload, ApiProxyMode, ApiProxyTestPayload, ApiReachabilityStatus, AppPathState,
    AppSettingsFile, AppStatusPayload, AutoSwitchConfigPayload, AutoSwitchRuntimeState,
    AutoSwitchStatusPayload, BackendEffect, BackendSkeletonBoundaryStatus, BackendSkeletonStatus,
    BootstrapStatePayload, CleanPayload, CoreSnapshotPayload, DaemonRunPayload, DiagnoseApiState,
    DiagnoseDiagnosticFieldPayload, DiagnoseDiagnosticProbePayload,
    DiagnoseDiagnosticSnapshotPayload, DiagnosePayload, DiagnosePlatform, DiagnoseRegistryState,
    DiagnoseSessionState, MysteryRouteGrant, NotificationClientStatePayload,
    PendingAutoSwitchStatePayload, RebuildRegistryPayload, SystemActionPayload, SystemInfoPayload,
    UpdateInstallabilityPayload, UsageSource,
};
use crate::core::error::CoreError;
use crate::core::hotspot as hotspot_core;
use crate::core::model::diagnostics::{DiagnosticProbe, DiagnosticSnapshot};
use crate::core::model::runtime::{RuntimeWatcherDecision, RuntimeWatcherSignal};
use crate::core::model::settings::UsageRefreshInterval;
use crate::core::runtime as runtime_core;
use crate::platform::runtime::RuntimePlatformAdapter;
use crate::repository::accounts as accounts_repository;
use crate::repository::config as config_repository;
use crate::repository::diagnostics::load_system_diagnostic_snapshot;
use crate::repository::hotspot as hotspot_repository;
use crate::repository::runtime as runtime_repository;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

pub fn load_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    let accounts = accounts_repository::load_account_summaries(repo)?;
    Ok(CoreSnapshotPayload {
        backend_status: restored_status("system", "load_snapshot", BackendEffect::NoOp),
        status: make_status(repo, &settings),
        accounts,
    })
}

pub fn refresh_usage_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let mut payload = load_snapshot(repo)?;
    let decision =
        runtime_watcher_decision(repo, RuntimeWatcherSignal::ScheduleFullRuntimeRefresh)?;
    payload.backend_status = runtime_watcher_backend_status("refresh_usage_snapshot", &decision);
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
    let diagnostic_snapshot = load_system_diagnostic_snapshot(repo)?;
    let paths = make_path_state_from_diagnostic_snapshot(repo, &diagnostic_snapshot);
    Ok(DiagnosePayload {
        backend_status: diagnose_backend_status(),
        paths,
        core_version: env!("CARGO_PKG_VERSION").to_string(),
        platform: make_diagnose_platform(),
        registry_state: DiagnoseRegistryState {
            account_count: diagnostic_probe_count(
                &diagnostic_snapshot,
                "diagnostics.path.registry",
            )
            .unwrap_or_default(),
        },
        session_state: DiagnoseSessionState {
            latest_rollout_found: diagnostic_probe_exists(
                &diagnostic_snapshot,
                "diagnostics.path.sessions",
            )
            .unwrap_or(false),
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
        diagnostic_snapshot: make_diagnostic_snapshot_payload(&diagnostic_snapshot),
        pending_diagnostics: make_pending_diagnostic_fields(),
    })
}

fn diagnose_backend_status() -> BackendSkeletonStatus {
    BackendSkeletonStatus {
        module: "system".to_string(),
        command: "diagnose".to_string(),
        restored: false,
        note: "系统诊断已接入 diagnostics repository 只读快照骨架；registry/keychain/sqlite/TOML 诊断引擎和修复逻辑未在当前公开后端恢复。"
            .to_string(),
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: true,
            repository_path_known: true,
            platform_checked: true,
            core_checked: true,
            effect: BackendEffect::Pending,
        },
    }
}

fn make_diagnose_platform() -> DiagnosePlatform {
    DiagnosePlatform {
        os: std::env::consts::OS.to_string(),
        arch: std::env::consts::ARCH.to_string(),
        info_source: "std::env::consts".to_string(),
    }
}

fn make_path_state_from_diagnostic_snapshot(
    repo: &Repository,
    snapshot: &DiagnosticSnapshot,
) -> AppPathState {
    let mut state = make_path_state(repo);
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.auth") {
        state.auth_exists = exists;
    }
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.registry") {
        state.registry_exists = exists;
    }
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.sessions") {
        state.sessions_exists = exists;
    }
    state
}

fn make_diagnostic_snapshot_payload(
    snapshot: &DiagnosticSnapshot,
) -> DiagnoseDiagnosticSnapshotPayload {
    DiagnoseDiagnosticSnapshotPayload {
        root_path: snapshot.root_path.clone(),
        source_path: snapshot.source_path.clone(),
        status_code: snapshot.status_code.clone(),
        message: diagnostic_snapshot_message(&snapshot.status_code),
        probes: snapshot
            .probes
            .iter()
            .map(make_diagnostic_probe_payload)
            .collect(),
    }
}

fn make_diagnostic_probe_payload(probe: &DiagnosticProbe) -> DiagnoseDiagnosticProbePayload {
    DiagnoseDiagnosticProbePayload {
        path: probe.path.clone(),
        exists: probe.exists,
        count: probe.count,
        status_code: probe.status_code.clone(),
        message: diagnostic_probe_message(&probe.status_code),
    }
}

fn diagnostic_snapshot_message(status_code: &str) -> String {
    match status_code {
        "diagnostics.snapshot.ready" => {
            "系统诊断只读快照已从 diagnostics repository 生成。".to_string()
        }
        _ => "系统诊断只读快照已生成；未知状态码保留在 statusCode 中。".to_string(),
    }
}

fn diagnostic_probe_message(status_code: &str) -> String {
    match status_code {
        "diagnostics.path.codex_home" => "Codex 根目录路径探针。",
        "diagnostics.path.accounts" => "账号目录路径探针。",
        "diagnostics.path.auth" => "认证文件路径探针。",
        "diagnostics.path.registry" => "账号注册表路径探针。",
        "diagnostics.path.sessions" => "会话目录路径探针。",
        "diagnostics.path.config" => "配置文件路径探针。",
        _ => "diagnostics repository 只读路径探针。",
    }
    .to_string()
}

fn diagnostic_probe_exists(snapshot: &DiagnosticSnapshot, status_code: &str) -> Option<bool> {
    diagnostic_probe(snapshot, status_code).map(|probe| probe.exists)
}

fn diagnostic_probe_count(snapshot: &DiagnosticSnapshot, status_code: &str) -> Option<i32> {
    diagnostic_probe(snapshot, status_code).and_then(|probe| probe.count)
}

fn diagnostic_probe<'a>(
    snapshot: &'a DiagnosticSnapshot,
    status_code: &str,
) -> Option<&'a DiagnosticProbe> {
    snapshot
        .probes
        .iter()
        .find(|probe| probe.status_code == status_code)
}

fn make_pending_diagnostic_fields() -> Vec<DiagnoseDiagnosticFieldPayload> {
    vec![
        pending_diagnostic_field(
            "auth_integrity",
            "认证文件与平台密钥或注册表的一致性诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "catalog_integrity",
            "路由模型目录与 config.toml 托管区块诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "api_key_integrity",
            "API key 与平台凭据存储一致性诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "db_orphan_providers",
            "SQLite 中转 Provider 孤儿记录诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "rollout_orphan_providers",
            "rollout 线程孤儿 Provider 诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field("repair_logic", "诊断修复逻辑未在当前公开后端恢复。"),
    ]
}

fn pending_diagnostic_field(field: &str, detail: &str) -> DiagnoseDiagnosticFieldPayload {
    DiagnoseDiagnosticFieldPayload {
        field: field.to_string(),
        status: "pending".to_string(),
        detail: Some(detail.to_string()),
    }
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
    let decision =
        runtime_watcher_decision(repo, RuntimeWatcherSignal::StartAutoSwitchPendingWatcher)?;
    Ok(DaemonRunPayload {
        backend_status: runtime_watcher_backend_status("run_daemon_once", &decision),
        executed_at: current_timestamp(),
        run_once: true,
        auto_switch_enabled: settings.auto_switch_enabled,
        service_state: AutoSwitchRuntimeState::NotInstalled,
    })
}

pub fn load_pending_auto_switch() -> PendingAutoSwitchStatePayload {
    PendingAutoSwitchStatePayload {
        backend_status: runtime_watcher_status_without_repository(
            "load_pending_auto_switch",
            runtime_core::pending_auto_switch_note(),
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
    let saved = settings_repository::set_usage_refresh_interval(repo, normalized)?;
    let _schedule_update =
        runtime_watcher_decision(repo, RuntimeWatcherSignal::UpdateUsageRefreshSchedule).ok();
    Ok(saved.as_str().to_string())
}

pub fn note_usage_refresh_activity(repo: &Repository) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        "note_usage_refresh_activity",
        RuntimeWatcherSignal::NoteUsageRefreshActivity,
    )
}

pub fn schedule_full_runtime_refresh(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        "schedule_full_runtime_refresh",
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh,
    )
}

pub fn start_auto_switch_pending_watcher(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        "start_auto_switch_pending_watcher",
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher,
    )
}

pub fn start_usage_refresh_watcher(repo: &Repository) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        "start_usage_refresh_watcher",
        RuntimeWatcherSignal::StartUsageRefreshWatcher,
    )
}

pub fn update_usage_refresh_schedule(
    repo: &Repository,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        "update_usage_refresh_schedule",
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule,
    )
}

fn runtime_watcher_status_for_signal(
    repo: &Repository,
    command: &str,
    signal: RuntimeWatcherSignal,
) -> Result<BackendSkeletonStatus, CoreError> {
    let decision = runtime_watcher_decision(repo, signal)?;
    Ok(runtime_watcher_backend_status(command, &decision))
}

fn runtime_watcher_decision(
    repo: &Repository,
    signal: RuntimeWatcherSignal,
) -> Result<RuntimeWatcherDecision, CoreError> {
    let snapshot = runtime_repository::load_runtime_watcher_snapshot(repo)?;
    let platform = RuntimePlatformAdapter;
    let capability = platform.runtime_watcher_capability();
    let now = current_timestamp();
    let decision = match signal {
        RuntimeWatcherSignal::NoteUsageRefreshActivity => {
            runtime_core::note_usage_refresh_activity(snapshot, capability, now)
        }
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh => {
            runtime_core::schedule_full_runtime_refresh(snapshot, capability)
        }
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher => {
            runtime_core::start_auto_switch_pending_watcher(snapshot, capability)
        }
        RuntimeWatcherSignal::StartUsageRefreshWatcher => {
            runtime_core::start_usage_refresh_watcher(snapshot, capability)
        }
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule => {
            runtime_core::update_usage_refresh_schedule(snapshot, capability, now)
        }
    };
    Ok(decision)
}

fn runtime_watcher_backend_status(
    command: &str,
    decision: &RuntimeWatcherDecision,
) -> BackendSkeletonStatus {
    let note = match &decision.warning {
        Some(warning) => format!("{} {}", decision.note, warning),
        None => decision.note.clone(),
    };

    BackendSkeletonStatus {
        module: "system".to_string(),
        command: command.to_string(),
        restored: false,
        note,
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: true,
            repository_path_known: decision.repository_path_known,
            platform_checked: true,
            core_checked: true,
            effect: BackendEffect::Pending,
        },
    }
}

fn runtime_watcher_status_without_repository(command: &str, note: String) -> BackendSkeletonStatus {
    BackendSkeletonStatus {
        module: "system".to_string(),
        command: command.to_string(),
        restored: false,
        note,
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: false,
            repository_path_known: false,
            platform_checked: false,
            core_checked: true,
            effect: BackendEffect::Pending,
        },
    }
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
