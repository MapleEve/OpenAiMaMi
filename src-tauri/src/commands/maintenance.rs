use crate::application::usecase;
use crate::contracts::{
    CleanPayload, CoreEnvelope, DiagnosePayload, RebuildRegistryPayload, SystemActionPayload,
    SystemInfoPayload,
};
use crate::platform::process::ProcessPlatformAdapter;
use crate::platform::shell::ShellPlatformAdapter;
use crate::platform::system::SystemPlatformAdapter;
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::State;

#[tauri::command]
pub fn clean(repo: State<'_, Mutex<Repository>>) -> Result<CoreEnvelope<CleanPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::maintenance::clean(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn rebuild_registry(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<RebuildRegistryPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::maintenance::rebuild_registry(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn diagnose(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<DiagnosePayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    let system = SystemPlatformAdapter;
    usecase::maintenance::diagnose(&repo, &system)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn force_kill_codex() -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let process = ProcessPlatformAdapter;
    usecase::maintenance::force_kill_codex(&process)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn restart_codex() -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let process = ProcessPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::maintenance::restart_codex(
        &process,
    )))
}

#[tauri::command]
pub fn reset_codex_config(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::maintenance::reset_codex_config(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn open_path(path: String) -> Result<CoreEnvelope<SystemActionPayload>, String> {
    let shell = ShellPlatformAdapter;
    usecase::maintenance::open_path(&shell, path)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn get_system_info() -> Result<CoreEnvelope<SystemInfoPayload>, String> {
    let system = SystemPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::maintenance::get_system_info(
        &system,
    )))
}
