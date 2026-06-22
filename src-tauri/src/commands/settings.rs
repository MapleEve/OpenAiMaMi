use crate::application::usecase;
use crate::contracts::{
    ApiModePayload, ApiProxyDetectPayload, ApiProxyMode, ApiProxyTestPayload, CoreEnvelope,
    SystemActionPayload, UpdateInstallabilityPayload,
};
use crate::platform::process::ProcessPlatformAdapter;
use crate::platform::proxy::ProxyPlatformAdapter;
use crate::platform::runtime::RuntimePlatformAdapter;
use crate::platform::system::SystemPlatformAdapter;
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::State;

// settings commands 只做 IPC adapter、State 获取和 settings usecase 调度。
#[tauri::command]
pub fn set_api_proxy_config(
    repo: State<'_, Mutex<Repository>>,
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<CoreEnvelope<ApiModePayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::settings::set_api_proxy_config(&repo, mode, url)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn test_api_proxy_config(
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<CoreEnvelope<ApiProxyTestPayload>, String> {
    let proxy = ProxyPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::settings::test_api_proxy_config(
        mode, url, &proxy,
    )))
}

#[tauri::command]
pub fn detect_api_proxy_config() -> Result<CoreEnvelope<ApiProxyDetectPayload>, String> {
    let proxy = ProxyPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::settings::detect_api_proxy_config(&proxy),
    ))
}

#[tauri::command]
pub fn get_usage_refresh_interval(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::settings::get_usage_refresh_interval(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn set_usage_refresh_interval(
    repo: State<'_, Mutex<Repository>>,
    interval: String,
) -> Result<CoreEnvelope<String>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let runtime = RuntimePlatformAdapter;
    usecase::settings::set_usage_refresh_interval(&repo, interval, &runtime)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn check_update_installability() -> Result<CoreEnvelope<UpdateInstallabilityPayload>, String> {
    let system = SystemPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::settings::check_update_installability(&system),
    ))
}

#[tauri::command]
pub fn graceful_restart_for_update() -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let process = ProcessPlatformAdapter;
    usecase::settings::graceful_restart_for_update(&process)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}
