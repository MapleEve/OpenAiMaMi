use crate::application::ports::{AppProcessPort, AppShellPort, AppSystemPort};
use crate::application::service::{restored_status, BackendEffect};
use crate::application::usecase::platform_actions;
use crate::application::usecase::system;
use crate::contracts::{
    BackendSkeletonStatus, CleanPayload, DiagnosePayload, RebuildRegistryPayload,
    SystemActionPayload, SystemInfoPayload,
};
use crate::core::error::CoreError;
use crate::repository::config as config_repository;
use crate::repository::Repository;

// maintenance usecase 只编排维护类用户动作，具体文件和平台能力仍由窄 owner 承载。
pub fn clean(repo: &Repository) -> Result<CleanPayload, CoreError> {
    Ok(CleanPayload {
        auth_backups_removed: remove_children(repo, &repo.paths().auth_backups_dir)?,
        registry_backups_removed: remove_children(repo, &repo.paths().registry_backups_dir)?,
        stale_entries_removed: 0,
    })
}

pub fn diagnose(repo: &Repository) -> Result<DiagnosePayload, CoreError> {
    let mut payload = system::diagnose(repo)?;
    mark_maintenance_status(&mut payload.backend_status);
    Ok(payload)
}

pub fn force_kill_codex(process: &impl AppProcessPort) -> Result<SystemActionPayload, CoreError> {
    platform_actions::force_kill_app(process)
}

pub fn restart_codex(process: &impl AppProcessPort) -> SystemActionPayload {
    platform_actions::restart_app(process)
}

pub fn get_system_info(system_port: &impl AppSystemPort) -> SystemInfoPayload {
    platform_actions::system_info(system_port)
}

pub fn open_path(
    shell: &impl AppShellPort,
    path: String,
) -> Result<SystemActionPayload, CoreError> {
    platform_actions::open_path(shell, path)
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

pub fn reset_codex_config(repo: &Repository) -> Result<SystemActionPayload, CoreError> {
    let result = config_repository::reset_codex_config(repo)?;
    Ok(SystemActionPayload {
        backend_status: restored_status("maintenance", "reset_codex_config", BackendEffect::NoOp),
        config_cleared: Some(result.config_cleared),
        killed_count: None,
        terminated_process_count: None,
        processes: None,
    })
}

fn mark_maintenance_status(status: &mut BackendSkeletonStatus) {
    status.module = "maintenance".to_string();
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
