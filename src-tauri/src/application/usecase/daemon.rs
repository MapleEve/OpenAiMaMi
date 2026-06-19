use crate::application::ports::RuntimePlatformPort;
use crate::application::service::current_timestamp;
use crate::contracts::{
    AutoSwitchRuntimeState, BackendEffect, BackendSkeletonBoundaryStatus, BackendSkeletonStatus,
    DaemonRunPayload, PendingAutoSwitchStatePayload, RuntimeBridgeEventPayload,
};
use crate::core::error::CoreError;
use crate::core::model::runtime::{
    RuntimeWatcherDecision, RuntimeWatcherOperationKey, RuntimeWatcherSignal,
    RuntimeWatcherStatusCode,
};
use crate::core::runtime as runtime_core;
use crate::repository::runtime as runtime_repository;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// daemon usecase owning watcher/auto-switch 用户动作事务；当前只提交进程内 watcher 状态合同。
pub(crate) struct DaemonUseCaseBoundary;

pub(crate) trait DaemonUseCaseBoundaryPort {}

pub fn run_daemon_once(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<DaemonRunPayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    let decision = runtime_watcher_decision(
        repo,
        platform,
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher,
    )?;
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

pub fn note_usage_refresh_activity(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        platform,
        "note_usage_refresh_activity",
        RuntimeWatcherSignal::NoteUsageRefreshActivity,
    )
}

pub fn schedule_full_runtime_refresh(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<BackendSkeletonStatus, CoreError> {
    schedule_full_runtime_refresh_for_command(repo, platform, "schedule_full_runtime_refresh")
}

pub fn schedule_full_runtime_refresh_for_command(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
    command: &str,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        platform,
        command,
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh,
    )
}

pub fn start_auto_switch_pending_watcher(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        platform,
        "start_auto_switch_pending_watcher",
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher,
    )
}

pub fn start_usage_refresh_watcher(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        platform,
        "start_usage_refresh_watcher",
        RuntimeWatcherSignal::StartUsageRefreshWatcher,
    )
}

pub fn update_usage_refresh_schedule(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
) -> Result<BackendSkeletonStatus, CoreError> {
    runtime_watcher_status_for_signal(
        repo,
        platform,
        "update_usage_refresh_schedule",
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule,
    )
}

fn runtime_watcher_status_for_signal(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
    command: &str,
    signal: RuntimeWatcherSignal,
) -> Result<BackendSkeletonStatus, CoreError> {
    let decision = runtime_watcher_decision(repo, platform, signal)?;
    Ok(runtime_watcher_backend_status(command, &decision))
}

fn runtime_watcher_decision(
    repo: &Repository,
    platform: &impl RuntimePlatformPort,
    signal: RuntimeWatcherSignal,
) -> Result<RuntimeWatcherDecision, CoreError> {
    let snapshot = runtime_repository::load_runtime_watcher_snapshot(repo)?;
    let capability = platform.runtime_watcher_capability();
    let now = current_timestamp();
    let decision = match signal {
        RuntimeWatcherSignal::NoteUsageRefreshActivity => {
            runtime_core::note_usage_refresh_activity(snapshot, capability, now)
        }
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh => {
            runtime_core::schedule_full_runtime_refresh(snapshot, capability, now)
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
        module: "daemon".to_string(),
        command: command.to_string(),
        restored: !matches!(
            decision.status_code,
            RuntimeWatcherStatusCode::PendingSkeleton
                | RuntimeWatcherStatusCode::ScheduleUpdateSkeleton
                | RuntimeWatcherStatusCode::StartOnlySkeleton
        ),
        note,
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: true,
            repository_path_known: decision.repository_path_known,
            platform_checked: true,
            core_checked: true,
            effect: if matches!(
                decision.status_code,
                RuntimeWatcherStatusCode::PendingSkeleton
                    | RuntimeWatcherStatusCode::ScheduleUpdateSkeleton
                    | RuntimeWatcherStatusCode::StartOnlySkeleton
            ) {
                BackendEffect::Pending
            } else {
                BackendEffect::RepositoryRead
            },
        },
        runtime_event: Some(runtime_bridge_event(command, decision)),
    }
}

fn runtime_watcher_status_without_repository(command: &str, note: String) -> BackendSkeletonStatus {
    BackendSkeletonStatus {
        module: "daemon".to_string(),
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
        runtime_event: None,
    }
}

fn runtime_bridge_event(
    command: &str,
    decision: &RuntimeWatcherDecision,
) -> RuntimeBridgeEventPayload {
    let (module_id, mode) = runtime_event_target(decision.signal);
    RuntimeBridgeEventPayload {
        event_type: "module:reload".to_string(),
        module_id: module_id.to_string(),
        mode: mode.to_string(),
        sequence: decision.state.notify_sequence,
        received_at: current_epoch_ms(),
        command: command.to_string(),
        signal: runtime_watcher_signal(decision.signal).to_string(),
        operation_key: runtime_watcher_operation_key(&decision.operation_key).to_string(),
        status_code: runtime_watcher_status_code(&decision.status_code).to_string(),
        schedule_interval_seconds: decision.state.schedule_interval.interval_seconds,
        schedule_source: "settingsDerivedSnapshot".to_string(),
        platform_effect: runtime_watcher_platform_effect(decision).to_string(),
    }
}

fn runtime_event_target(signal: RuntimeWatcherSignal) -> (&'static str, &'static str) {
    match signal {
        RuntimeWatcherSignal::NoteUsageRefreshActivity => ("overview", "active-only"),
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh => ("overview", "full"),
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher => ("daemon-autoswitch", "active-only"),
        RuntimeWatcherSignal::StartUsageRefreshWatcher => ("overview", "active-only"),
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule => ("settings", "active-only"),
    }
}

fn runtime_watcher_status_code(status_code: &RuntimeWatcherStatusCode) -> &'static str {
    match status_code {
        RuntimeWatcherStatusCode::PendingSkeleton => "pendingSkeleton",
        RuntimeWatcherStatusCode::ScheduleUpdateSkeleton => "scheduleUpdateSkeleton",
        RuntimeWatcherStatusCode::StartOnlySkeleton => "startOnlySkeleton",
        RuntimeWatcherStatusCode::ActivityRecorded => "activityRecorded",
        RuntimeWatcherStatusCode::FullRefreshScheduled => "fullRefreshScheduled",
        RuntimeWatcherStatusCode::FullRefreshCoalesced => "fullRefreshCoalesced",
        RuntimeWatcherStatusCode::AutoSwitchWatcherStarted => "autoSwitchWatcherStarted",
        RuntimeWatcherStatusCode::AutoSwitchWatcherAlreadyStarted => {
            "autoSwitchWatcherAlreadyStarted"
        }
        RuntimeWatcherStatusCode::UsageWatcherStarted => "usageWatcherStarted",
        RuntimeWatcherStatusCode::UsageWatcherAlreadyStarted => "usageWatcherAlreadyStarted",
        RuntimeWatcherStatusCode::ScheduleUpdated => "scheduleUpdated",
    }
}

fn runtime_watcher_signal(signal: RuntimeWatcherSignal) -> &'static str {
    match signal {
        RuntimeWatcherSignal::NoteUsageRefreshActivity => "noteUsageRefreshActivity",
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh => "scheduleFullRuntimeRefresh",
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher => "startAutoSwitchPendingWatcher",
        RuntimeWatcherSignal::StartUsageRefreshWatcher => "startUsageRefreshWatcher",
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule => "updateUsageRefreshSchedule",
    }
}

fn runtime_watcher_operation_key(operation_key: &RuntimeWatcherOperationKey) -> &'static str {
    match operation_key {
        RuntimeWatcherOperationKey::UsageRefreshActivity => "usageRefreshActivity",
        RuntimeWatcherOperationKey::FullRuntimeRefresh => "fullRuntimeRefresh",
        RuntimeWatcherOperationKey::AutoSwitchPendingWatcher => "autoSwitchPendingWatcher",
        RuntimeWatcherOperationKey::UsageRefreshWatcher => "usageRefreshWatcher",
        RuntimeWatcherOperationKey::UsageRefreshSchedule => "usageRefreshSchedule",
    }
}

fn runtime_watcher_platform_effect(decision: &RuntimeWatcherDecision) -> &'static str {
    let capability = &decision.platform_capability;
    if capability.creates_thread || capability.emits_event || capability.touches_user_environment {
        "platformSideEffectAvailable"
    } else {
        "typedPendingNoop"
    }
}

fn current_epoch_ms() -> i64 {
    chrono::Utc::now().timestamp_millis()
}
