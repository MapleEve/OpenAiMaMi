use crate::adapters::tauri as tauri_adapter;
use crate::application::usecase;
use crate::contracts::{
    BackendSkeletonStatus, CoreEnvelope, DaemonRunPayload, PendingAutoSwitchStatePayload,
};
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::{AppHandle, State};

// daemon 命令层只做 IPC 适配和 runtime bridge 事件转发。
#[tauri::command]
pub fn run_daemon_once(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<DaemonRunPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let payload = usecase::daemon::run_daemon_once(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &payload.backend_status);
    Ok(CoreEnvelope::ok(payload))
}

#[tauri::command]
pub fn note_usage_refresh_activity(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BackendSkeletonStatus>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let status =
        usecase::daemon::note_usage_refresh_activity(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &status);
    Ok(CoreEnvelope::ok(status))
}

#[tauri::command]
pub fn schedule_full_runtime_refresh(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BackendSkeletonStatus>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let status =
        usecase::daemon::schedule_full_runtime_refresh(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &status);
    Ok(CoreEnvelope::ok(status))
}

#[tauri::command]
pub fn start_auto_switch_pending_watcher(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BackendSkeletonStatus>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let status = usecase::daemon::start_auto_switch_pending_watcher(&repo)
        .map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &status);
    Ok(CoreEnvelope::ok(status))
}

#[tauri::command]
pub fn start_usage_refresh_watcher(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BackendSkeletonStatus>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let status =
        usecase::daemon::start_usage_refresh_watcher(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &status);
    Ok(CoreEnvelope::ok(status))
}

#[tauri::command]
pub fn update_usage_refresh_schedule(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BackendSkeletonStatus>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let status =
        usecase::daemon::update_usage_refresh_schedule(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &status);
    Ok(CoreEnvelope::ok(status))
}

#[tauri::command]
pub fn load_pending_auto_switch() -> Result<CoreEnvelope<PendingAutoSwitchStatePayload>, String> {
    Ok(CoreEnvelope::ok(usecase::daemon::load_pending_auto_switch()))
}

#[tauri::command]
pub fn dismiss_pending_auto_switch() -> Result<CoreEnvelope<Option<String>>, String> {
    Ok(CoreEnvelope::ok(
        usecase::daemon::dismiss_pending_auto_switch(),
    ))
}

#[tauri::command]
pub fn confirm_pending_auto_switch() -> Result<CoreEnvelope<()>, String> {
    Ok(CoreEnvelope::ok(
        usecase::daemon::confirm_pending_auto_switch(),
    ))
}

#[tauri::command]
pub fn confirm_pending_auto_switch_and_restart_codex() -> Result<CoreEnvelope<()>, String> {
    Ok(CoreEnvelope::ok(
        usecase::daemon::confirm_pending_auto_switch_and_restart_codex(),
    ))
}
