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
        status: restored_status("skills", "load_installed_skills", BackendEffect::NoOp),
        total: items.len() as i32,
        root_path: repo.paths().skills_dir.display().to_string(),
        last_scan_at,
        items,
    })
}

pub fn load_backups(repo: &Repository) -> Result<SkillBackupListPayload, CoreError> {
    let items = skills::load_backups(repo.fs(), &repo.paths().skill_backups_dir)?;
    Ok(SkillBackupListPayload {
        status: restored_status("skills", "load_skill_backups", BackendEffect::NoOp),
        total: items.len() as i32,
        root_path: repo.paths().skill_backups_dir.display().to_string(),
        last_scan_at: current_timestamp(),
        items,
    })
}

pub fn import_skill(repo: &Repository, path: String) -> Result<SkillImportPayload, CoreError> {
    let (skill, replaced_existing, backup) = skills::import_skill(
        repo.fs(),
        &repo.paths().skills_dir,
        &repo.paths().app_data_dir,
        &path,
    )?;
    Ok(SkillImportPayload {
        status: restored_status("skills", "import_skill", BackendEffect::NoOp),
        skill,
        replaced_existing,
        backup,
    })
}

pub fn remove_skill(repo: &Repository, id: String) -> Result<SkillRemovePayload, CoreError> {
    let installed = skills::load_installed(repo.fs(), &repo.paths().skills_dir)?;
    let skill = installed
        .iter()
        .find(|skill| skill.id == id)
        .ok_or_else(|| CoreError::NotFound(format!("技能不存在：{id}")))?;
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
        status: restored_status("skills", "remove_skill", BackendEffect::NoOp),
        removed_skill_id: id,
        backup,
        remaining_installed_count,
    })
}

pub fn restore_backup(repo: &Repository, id: String) -> Result<SkillRestorePayload, CoreError> {
    let (restored_skill, backup, rollback_backup) = skills::restore_backup(
        repo.fs(),
        &repo.paths().skills_dir,
        &repo.paths().app_data_dir,
        &id,
    )?;
    Ok(SkillRestorePayload {
        status: restored_status("skills", "restore_skill_backup", BackendEffect::NoOp),
        restored_skill,
        backup,
        rollback_backup,
    })
}

pub fn delete_backup(repo: &Repository, id: String) -> Result<SkillDeleteBackupPayload, CoreError> {
    skills::delete_backup_dir(repo.fs(), &repo.paths().skill_backups_dir, &id)?;
    let remaining_backup_count =
        skills::load_backups(repo.fs(), &repo.paths().skill_backups_dir)?.len() as i32;
    Ok(SkillDeleteBackupPayload {
        status: restored_status("skills", "delete_skill_backup", BackendEffect::NoOp),
        deleted_backup_id: id,
        remaining_backup_count,
    })
}
