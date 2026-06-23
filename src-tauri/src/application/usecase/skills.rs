use crate::application::service::{current_timestamp, restored_status};
use crate::contracts::{
    BackendEffect, SkillBackupListPayload, SkillDeleteBackupPayload, SkillImportPayload,
    SkillListPayload, SkillRemovePayload, SkillRestorePayload,
};
use crate::core::error::CoreError;
use crate::repository::{bootstrap, skills, Repository};

pub fn load_installed(repo: &Repository) -> Result<SkillListPayload, CoreError> {
    let items = skills::load_installed(repo.fs(), &repo.paths().skills_dir)?;
    let last_scan_at = current_timestamp();
    let _ = bootstrap::store_bootstrap_installed_skills(repo, last_scan_at, items.clone());
    Ok(SkillListPayload {
        status: restored_status(
            "skills",
            "load_installed_skills",
            BackendEffect::RepositoryWrite,
        ),
        total: items.len() as i32,
        root_path: repo.paths().skills_dir.display().to_string(),
        last_scan_at,
        items,
    })
}

pub fn load_backups(repo: &Repository) -> Result<SkillBackupListPayload, CoreError> {
    let items = skills::load_backups(repo.fs(), &repo.paths().skill_backups_dir)?;
    Ok(SkillBackupListPayload {
        status: restored_status(
            "skills",
            "load_skill_backups",
            BackendEffect::RepositoryRead,
        ),
        total: items.len() as i32,
        root_path: repo.paths().skill_backups_dir.display().to_string(),
        last_scan_at: current_timestamp(),
        items,
    })
}

pub fn import_skill(repo: &Repository, path: String) -> Result<SkillImportPayload, CoreError> {
    skills::ensure_skill_install_root(repo.fs(), &repo.paths().skills_dir)?;
    skills::ensure_skill_backup_root(repo.fs(), &repo.paths().skill_backups_dir)?;

    let target = skills::resolve_skill_import_target(repo.fs(), &repo.paths().skills_dir, &path)?;

    if skills::paths_equal(&target.source, &target.target) {
        let skill =
            skills::load_skill_from_dir(repo.fs(), &repo.paths().skills_dir, &target.target)
                .ok_or_else(|| CoreError::InvalidInput("技能源无效".to_string()))?;
        return Ok(SkillImportPayload {
            status: restored_status("skills", "import_skill", BackendEffect::RepositoryRead),
            skill,
            replaced_existing: false,
            backup: None,
        });
    }

    let replaced_existing =
        skills::installed_skill_dir_exists(repo.fs(), &repo.paths().skills_dir, &target.target)?;
    let backup = if replaced_existing {
        let backup = skills::backup_skill_directory(
            repo.fs(),
            &target.target,
            &repo.paths().skills_dir,
            &repo.paths().skill_backups_dir,
            "replace",
        )?;
        skills::delete_installed_skill_path(repo.fs(), &repo.paths().skills_dir, &target.target)?;
        Some(backup)
    } else {
        None
    };

    skills::copy_skill_directory(repo.fs(), &target.source, &target.target)?;
    let skill = skills::load_skill_from_dir(repo.fs(), &repo.paths().skills_dir, &target.target)
        .ok_or_else(|| CoreError::InvalidInput("导入后的技能无效".to_string()))?;
    Ok(SkillImportPayload {
        status: restored_status("skills", "import_skill", BackendEffect::RepositoryWrite),
        skill,
        replaced_existing,
        backup,
    })
}

pub fn remove_skill(repo: &Repository, id: String) -> Result<SkillRemovePayload, CoreError> {
    let installed = skills::load_installed(repo.fs(), &repo.paths().skills_dir)?;
    let skill = installed.iter().find(|skill| skill.id == id);
    let Some(skill) = skill else {
        return Ok(SkillRemovePayload {
            status: restored_status("skills", "remove_skill", BackendEffect::RepositoryRead),
            removed_skill_id: id,
            backup: None,
            remaining_installed_count: installed.len() as i32,
        });
    };
    let backup = skills::backup_installed_skill(
        repo.fs(),
        &repo.paths().skills_dir,
        &repo.paths().app_data_dir,
        skill,
        "remove",
    )?;
    skills::delete_installed_skill_dir(repo.fs(), &repo.paths().skills_dir, skill)?;
    let remaining_installed_count =
        skills::load_installed(repo.fs(), &repo.paths().skills_dir)?.len() as i32;
    Ok(SkillRemovePayload {
        status: restored_status("skills", "remove_skill", BackendEffect::RepositoryWrite),
        removed_skill_id: id,
        backup: Some(backup),
        remaining_installed_count,
    })
}

pub fn restore_backup(repo: &Repository, id: String) -> Result<SkillRestorePayload, CoreError> {
    skills::ensure_skill_install_root(repo.fs(), &repo.paths().skills_dir)?;
    skills::ensure_skill_backup_root(repo.fs(), &repo.paths().skill_backups_dir)?;

    let restore = skills::resolve_backup_restore_target(
        repo.fs(),
        &repo.paths().skills_dir,
        &repo.paths().skill_backups_dir,
        &id,
    )?;
    skills::ensure_installed_skill_parent(repo.fs(), &repo.paths().skills_dir, &restore.target)?;

    let rollback_backup = if skills::installed_skill_dir_exists(
        repo.fs(),
        &repo.paths().skills_dir,
        &restore.target,
    )? {
        let backup = skills::backup_skill_directory(
            repo.fs(),
            &restore.target,
            &repo.paths().skills_dir,
            &repo.paths().skill_backups_dir,
            "restore-rollback",
        )?;
        skills::delete_installed_skill_path(repo.fs(), &repo.paths().skills_dir, &restore.target)?;
        Some(backup)
    } else {
        None
    };

    skills::copy_skill_directory(repo.fs(), &restore.staged, &restore.target)?;
    let restored_skill =
        skills::load_skill_from_dir(repo.fs(), &repo.paths().skills_dir, &restore.target)
            .ok_or_else(|| CoreError::InvalidInput("恢复后的技能无效".to_string()))?;
    Ok(SkillRestorePayload {
        status: restored_status(
            "skills",
            "restore_skill_backup",
            BackendEffect::RepositoryWrite,
        ),
        restored_skill,
        backup: restore.backup,
        rollback_backup,
    })
}

pub fn delete_backup(repo: &Repository, id: String) -> Result<SkillDeleteBackupPayload, CoreError> {
    skills::delete_backup_dir(repo.fs(), &repo.paths().skill_backups_dir, &id)?;
    let remaining_backup_count =
        skills::load_backups(repo.fs(), &repo.paths().skill_backups_dir)?.len() as i32;
    Ok(SkillDeleteBackupPayload {
        status: restored_status(
            "skills",
            "delete_skill_backup",
            BackendEffect::RepositoryWrite,
        ),
        deleted_backup_id: id,
        remaining_backup_count,
    })
}
