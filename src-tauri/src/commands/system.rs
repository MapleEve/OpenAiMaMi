use crate::adapters::tauri as tauri_adapter;
use crate::application::usecase;
use crate::contracts::{
    ApiModePayload, ApiProxyDetectPayload, ApiProxyMode, ApiProxyTestPayload,
    AutoSwitchConfigPayload, BootstrapStatePayload, CoreEnvelope, CoreSnapshotPayload,
    MysteryRouteGrant, NotificationClientStatePayload, SystemActionPayload,
    UpdateInstallabilityPayload,
};
use crate::platform::process::ProcessPlatformAdapter;
use crate::platform::system::SystemPlatformAdapter;
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
pub fn set_api_proxy_config(
    repo: State<'_, Mutex<Repository>>,
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<CoreEnvelope<ApiModePayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::set_api_proxy_config(&repo, mode, url)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn test_api_proxy_config(
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<CoreEnvelope<ApiProxyTestPayload>, String> {
    Ok(CoreEnvelope::ok(usecase::system::test_api_proxy_config(
        mode, url,
    )))
}

#[tauri::command]
pub fn detect_api_proxy_config() -> Result<CoreEnvelope<ApiProxyDetectPayload>, String> {
    Ok(CoreEnvelope::ok(usecase::system::detect_api_proxy_config()))
}

#[tauri::command]
pub fn get_usage_refresh_interval(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::get_usage_refresh_interval(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn set_usage_refresh_interval(
    repo: State<'_, Mutex<Repository>>,
    interval: String,
) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::set_usage_refresh_interval(&repo, interval)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn check_update_installability() -> Result<CoreEnvelope<UpdateInstallabilityPayload>, String> {
    let system = SystemPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::system::check_update_installability(&system),
    ))
}

#[tauri::command]
pub fn graceful_restart_for_update() -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let process = ProcessPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::system::graceful_restart_for_update(&process),
    ))
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
pub fn get_mystery_unlock_grants(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<Vec<MysteryRouteGrant>>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::mystery_unlock_grants(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn merge_mystery_unlock_grants(
    repo: State<'_, Mutex<Repository>>,
    grants: Vec<MysteryRouteGrant>,
) -> Result<CoreEnvelope<Vec<MysteryRouteGrant>>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::system::merge_mystery_unlock_grants(&repo, grants)
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
