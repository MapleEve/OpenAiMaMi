use crate::adapters::tauri as tauri_adapter;
use crate::application::usecase;
use crate::contracts::{
    AutoSwitchConfigPayload, BootstrapStatePayload, CoreEnvelope, CoreSnapshotPayload,
    NotificationClientStatePayload, SystemActionPayload,
};
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::{AppHandle, State};

#[tauri::command]
pub fn load_snapshot(
    repo: State<'_, Mutex<Repository>>,
    local_only: Option<bool>,
) -> Result<CoreEnvelope<CoreSnapshotPayload>, String> {
    let _ = local_only;
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::load_snapshot(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn refresh_usage_snapshot(
    app: AppHandle,
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<CoreSnapshotPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let payload =
        usecase::system::refresh_usage_snapshot(&repo).map_err(|error| error.to_string())?;
    tauri_adapter::emit_runtime_bridge_event(&app, &payload.backend_status);
    Ok(CoreEnvelope::ok(payload))
}

#[tauri::command]
pub fn load_bootstrap_state(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<BootstrapStatePayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::load_bootstrap_state(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn set_auto_switch(
    repo: State<'_, Mutex<Repository>>,
    enabled: bool,
) -> Result<CoreEnvelope<AutoSwitchConfigPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::set_auto_switch(&repo, enabled)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn configure_auto_switch(
    repo: State<'_, Mutex<Repository>>,
    threshold_5h_percent: Option<i32>,
    threshold_weekly_percent: Option<i32>,
) -> Result<CoreEnvelope<AutoSwitchConfigPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::configure_auto_switch(&repo, threshold_5h_percent, threshold_weekly_percent)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn focus_main_window(
    app: tauri::AppHandle,
) -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let window = crate::platform::window::TauriWindowPort::new(&app);
    usecase::system::focus_main_window(&window)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn get_device_id(repo: State<'_, Mutex<Repository>>) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::get_device_id(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn get_notification_client_state(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<NotificationClientStatePayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::notification_client_state(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn get_or_create_remote_device_secret(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::get_or_create_remote_device_secret(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn import_remote_device_secret_if_empty(
    repo: State<'_, Mutex<Repository>>,
    secret: String,
) -> Result<CoreEnvelope<()>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::import_remote_device_secret_if_empty(&repo, secret)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}
