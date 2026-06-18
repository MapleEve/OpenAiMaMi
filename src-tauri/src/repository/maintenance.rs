use crate::core::error::CoreError;
use crate::repository::Repository;
use std::path::Path;

// maintenance 仓储归口维护动作需要的文件事务；usecase 只编排用户动作和 DTO。

pub struct MaintenanceCleanResult {
    pub auth_backups_removed: i32,
    pub registry_backups_removed: i32,
}

pub struct MaintenanceRegistrySummary {
    pub account_count: i32,
}

pub fn clean_backup_children(repo: &Repository) -> Result<MaintenanceCleanResult, CoreError> {
    Ok(MaintenanceCleanResult {
        auth_backups_removed: remove_children(repo, &repo.paths().auth_backups_dir)?,
        registry_backups_removed: remove_children(repo, &repo.paths().registry_backups_dir)?,
    })
}

pub fn rebuild_registry_summary(
    repo: &Repository,
) -> Result<MaintenanceRegistrySummary, CoreError> {
    ensure_maintenance_directories(repo)?;
    Ok(MaintenanceRegistrySummary {
        account_count: registry_account_count(repo).unwrap_or_default(),
    })
}

fn ensure_maintenance_directories(repo: &Repository) -> Result<(), CoreError> {
    let paths = repo.paths();
    for path in [
        &paths.accounts_dir,
        &paths.snapshots_dir,
        &paths.auth_backups_dir,
        &paths.registry_backups_dir,
        &paths.app_data_dir,
        &paths.skill_backups_dir,
        &paths.custom_instructions_dir,
        &paths.custom_instruction_history_dir,
    ] {
        repo.fs().create_dir_all(path)?;
    }
    Ok(())
}

fn remove_children(repo: &Repository, path: &Path) -> Result<i32, CoreError> {
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
