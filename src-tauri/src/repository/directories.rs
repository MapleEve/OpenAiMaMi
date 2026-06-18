use crate::core::error::CoreError;
use crate::repository::Repository;

// 目录仓储归口应用目录创建，路径对象只负责路径推导。

pub fn ensure_app_directories(repo: &Repository) -> Result<(), CoreError> {
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
