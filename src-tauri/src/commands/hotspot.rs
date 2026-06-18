use crate::application::usecase;
use crate::contracts::CoreEnvelope;
use crate::platform::hotspot::HotspotPlatformAdapter;
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::State;

// 热点命令层只做 Tauri IPC 适配：接收参数、取得仓储或平台端口，并转交热点用例。
#[tauri::command]
pub fn has_notch() -> Result<CoreEnvelope<bool>, String> {
    let hotspot = HotspotPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::hotspot::has_notch(&hotspot)))
}

#[tauri::command]
pub fn get_hotspot_enabled(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<bool>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::hotspot::get_hotspot_enabled(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn set_hotspot_enabled(
    repo: State<'_, Mutex<Repository>>,
    enabled: bool,
) -> Result<CoreEnvelope<bool>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::hotspot::set_hotspot_enabled(&repo, enabled)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn hotspot_ready() -> Result<CoreEnvelope<bool>, String> {
    let hotspot = HotspotPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::hotspot::hotspot_ready(&hotspot)))
}
