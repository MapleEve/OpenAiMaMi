use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, DiagnosticPlatformPort,
};
use crate::application::service::{restored_status, BackendEffect};
use crate::application::usecase::diagnostics;
use crate::application::usecase::platform_actions;
use crate::contracts::{
    BackendSkeletonStatus, CleanPayload, DiagnosePayload, RebuildRegistryPayload,
    SystemActionPayload, SystemInfoPayload,
};
use crate::core::error::CoreError;
use crate::repository::config as config_repository;
use crate::repository::maintenance as maintenance_repository;
use crate::repository::Repository;

// maintenance usecase 只编排维护类用户动作，具体文件和平台能力仍由窄 owner 承载。
pub fn clean(repo: &Repository) -> Result<CleanPayload, CoreError> {
    let result = maintenance_repository::clean_backup_children(repo)?;
    Ok(CleanPayload {
        auth_backups_removed: result.auth_backups_removed,
        registry_backups_removed: result.registry_backups_removed,
        stale_entries_removed: 0,
    })
}

pub fn diagnose(
    repo: &Repository,
    platform: &impl DiagnosticPlatformPort,
) -> Result<DiagnosePayload, CoreError> {
    let mut payload = diagnostics::diagnose(repo, platform)?;
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
    let summary = maintenance_repository::rebuild_registry_summary(repo)?;
    Ok(RebuildRegistryPayload {
        account_count: summary.account_count,
        active_account_key: None,
        registry_updated: false,
    })
}

pub fn reset_codex_config(repo: &Repository) -> Result<SystemActionPayload, CoreError> {
    let result = config_repository::reset_codex_config(repo)?;
    Ok(SystemActionPayload {
        backend_status: restored_status(
            "maintenance",
            "reset_codex_config",
            BackendEffect::RepositoryWrite,
        ),
        config_cleared: Some(result.config_cleared),
        killed_count: None,
        terminated_process_count: None,
        processes: None,
    })
}

fn mark_maintenance_status(status: &mut BackendSkeletonStatus) {
    status.module = "maintenance".to_string();
}
