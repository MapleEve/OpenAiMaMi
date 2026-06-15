use crate::contracts::{InstalledSkillSummary, SkillBackupSummary};
use crate::core::error::CoreError;
use crate::repository::adapter::FileSystemAdapter;
use crate::repository::path_guard::PathGuard;
use serde::{Deserialize, Serialize};
use std::path::{Path, PathBuf};

#[derive(Debug, Clone)]
pub(crate) struct SkillImportTarget {
    pub source: PathBuf,
    pub target: PathBuf,
}

#[derive(Debug, Clone)]
pub(crate) struct SkillBackupRestoreTarget {
    pub backup: SkillBackupSummary,
    pub staged: PathBuf,
    pub target: PathBuf,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct SkillBackupMetadata {
    #[serde(rename = "backupID")]
    backup_id: String,
    #[serde(rename = "skillID")]
    skill_id: String,
    name: String,
    title: Option<String>,
    relative_path: String,
    created_at: i64,
}

pub fn load_installed(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
) -> Result<Vec<InstalledSkillSummary>, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;

    if !fs.exists(&skills_dir) {
        return Ok(Vec::new());
    }

    let mut items = Vec::new();
    scan_skills_recursive(fs, &skills_dir, &skills_dir, &mut items)?;
    items.sort_by(|left, right| {
        right
            .updated_at
            .unwrap_or_default()
            .cmp(&left.updated_at.unwrap_or_default())
            .then_with(|| left.name.to_lowercase().cmp(&right.name.to_lowercase()))
    });
    Ok(items)
}

pub fn load_backups(
    fs: &dyn FileSystemAdapter,
    backup_dir: &Path,
) -> Result<Vec<SkillBackupSummary>, CoreError> {
    let backup_dir = PathGuard::normalize_trusted(backup_dir, "技能备份根目录")?;

    if !fs.exists(&backup_dir) {
        return Ok(Vec::new());
    }

    let mut items = Vec::new();
    for entry in fs.read_dir(&backup_dir)? {
        if !entry.is_dir {
            continue;
        }
        let backup_path = PathGuard::ensure_descendant(&backup_dir, &entry.path, "技能备份目录")?;
        let backup_name = backup_name_from_path(&backup_dir, &backup_path)?;
        let backup_id = backup_name.display().to_string();
        let meta_path = PathGuard::safe_child(&backup_path, "metadata.json", "技能备份元数据")?;
        if !fs.exists(&meta_path) {
            continue;
        }
        let meta: SkillBackupMetadata = serde_json::from_str(&fs.read_to_string(&meta_path)?)?;
        let relative_path =
            PathGuard::safe_relative(&meta.relative_path, "技能备份 metadata relativePath")?
                .display()
                .to_string();
        let staged = PathGuard::safe_child(&backup_path, "skill", "技能备份内容目录")?;
        items.push(SkillBackupSummary {
            id: backup_id,
            skill_id: meta.skill_id,
            name: meta.name,
            title: meta.title,
            relative_path,
            backup_path: staged.display().to_string(),
            created_at: meta.created_at,
        });
    }
    items.sort_by(|left, right| right.created_at.cmp(&left.created_at));
    Ok(items)
}

pub fn ensure_skill_install_root(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
) -> Result<PathBuf, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    fs.create_dir_all(&skills_dir)?;
    Ok(skills_dir)
}

pub fn ensure_skill_backup_root(
    fs: &dyn FileSystemAdapter,
    backup_dir: &Path,
) -> Result<PathBuf, CoreError> {
    let backup_dir = PathGuard::normalize_trusted(backup_dir, "技能备份根目录")?;
    fs.create_dir_all(&backup_dir)?;
    Ok(backup_dir)
}

pub(crate) fn resolve_skill_import_target(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    source_path: &str,
) -> Result<SkillImportTarget, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let source = resolve_skill_source(fs, Path::new(source_path))?;
    let file_name = source
        .file_name()
        .ok_or_else(|| CoreError::InvalidInput("技能目录缺少名称".to_string()))?;
    let target = PathGuard::safe_child(&skills_dir, Path::new(file_name), "技能安装目标")?;
    Ok(SkillImportTarget { source, target })
}

pub fn load_skill_from_dir(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    dir: &Path,
) -> Option<InstalledSkillSummary> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录").ok()?;
    let dir = PathGuard::ensure_descendant(&skills_dir, dir, "技能目录").ok()?;
    load_skill_summary(fs, &dir.join("SKILL.md"), &skills_dir)
}

pub fn installed_skill_dir_exists(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    dir: &Path,
) -> Result<bool, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let dir = PathGuard::ensure_descendant(&skills_dir, dir, "技能目录")?;
    Ok(fs.exists(&dir))
}

pub fn backup_installed_skill(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    app_data_dir: &Path,
    skill: &InstalledSkillSummary,
    reason: &str,
) -> Result<SkillBackupSummary, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let app_data_dir = PathGuard::normalize_trusted(app_data_dir, "应用数据根目录")?;
    let backup_dir = PathGuard::safe_child(&app_data_dir, "skill-backups", "技能备份根目录")?;
    let dir = resolve_installed_skill_dir(&skills_dir, skill, "技能备份源目录")?;
    backup_skill_directory(fs, &dir, &skills_dir, &backup_dir, reason)
}

pub fn delete_installed_skill_path(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    dir: &Path,
) -> Result<(), CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let dir = PathGuard::ensure_descendant(&skills_dir, dir, "技能删除目标")?;
    fs.remove_dir_all(&dir)?;
    Ok(())
}

pub fn delete_installed_skill_dir(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    skill: &InstalledSkillSummary,
) -> Result<(), CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let dir = PathGuard::ensure_descendant(
        &skills_dir,
        Path::new(&skill.directory_path),
        "技能删除目标",
    )?;
    fs.remove_dir_all(&dir)?;
    Ok(())
}

pub(crate) fn resolve_backup_restore_target(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    backup_dir: &Path,
    backup_id: &str,
) -> Result<SkillBackupRestoreTarget, CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let backup_dir = PathGuard::normalize_trusted(backup_dir, "技能备份根目录")?;
    let backup_name = PathGuard::safe_single_component(backup_id, "技能备份 ID")?;
    let backup_path = PathGuard::safe_child(&backup_dir, &backup_name, "技能备份目录")?;
    let backup_id = backup_name.display().to_string();
    if !fs.exists(&backup_path) {
        return Err(CoreError::NotFound(format!("备份不存在：{backup_id}")));
    }

    let meta_path = PathGuard::safe_child(&backup_path, "metadata.json", "技能备份元数据")?;
    let meta: SkillBackupMetadata = serde_json::from_str(&fs.read_to_string(&meta_path)?)?;
    let staged = PathGuard::safe_child(&backup_path, "skill", "技能备份内容目录")?;
    if !fs.exists(&staged) {
        return Err(CoreError::InvalidInput("技能备份损坏".to_string()));
    }

    let relative_path =
        PathGuard::safe_relative(&meta.relative_path, "技能备份 metadata relativePath")?;
    let target = PathGuard::safe_child(&skills_dir, &relative_path, "技能恢复目标")?;
    let backup_summary = SkillBackupSummary {
        id: backup_id,
        skill_id: meta.skill_id,
        name: meta.name,
        title: meta.title,
        relative_path: relative_path.display().to_string(),
        backup_path: staged.display().to_string(),
        created_at: meta.created_at,
    };
    Ok(SkillBackupRestoreTarget {
        backup: backup_summary,
        staged,
        target,
    })
}

pub fn ensure_installed_skill_parent(
    fs: &dyn FileSystemAdapter,
    skills_dir: &Path,
    dir: &Path,
) -> Result<(), CoreError> {
    let skills_dir = PathGuard::normalize_trusted(skills_dir, "技能根目录")?;
    let dir = PathGuard::ensure_descendant(&skills_dir, dir, "技能目标目录")?;
    if let Some(parent) = dir.parent() {
        let parent = PathGuard::ensure_descendant(&skills_dir, parent, "技能目标父目录")?;
        fs.create_dir_all(&parent)?;
    }
    Ok(())
}

pub fn delete_backup_dir(
    fs: &dyn FileSystemAdapter,
    backup_dir: &Path,
    backup_id: &str,
) -> Result<(), CoreError> {
    let backup_dir = PathGuard::normalize_trusted(backup_dir, "技能备份根目录")?;
    let backup_name = PathGuard::safe_single_component(backup_id, "技能备份 ID")?;
    let path = PathGuard::safe_child(&backup_dir, &backup_name, "技能备份目录")?;
    let backup_id = backup_name.display().to_string();
    if !fs.exists(&path) {
        return Err(CoreError::NotFound(format!("备份不存在：{backup_id}")));
    }
    fs.remove_dir_all(&path)?;
    Ok(())
}

fn scan_skills_recursive(
    fs: &dyn FileSystemAdapter,
    dir: &Path,
    root: &Path,
    items: &mut Vec<InstalledSkillSummary>,
) -> Result<(), CoreError> {
    let root = PathGuard::normalize_trusted(root, "技能根目录")?;
    let dir = PathGuard::ensure_descendant(&root, dir, "技能扫描目录")?;

    for entry in fs.read_dir(&dir)? {
        let entry_path = PathGuard::ensure_descendant(&dir, &entry.path, "技能扫描项")?;
        let entry_path = PathGuard::ensure_descendant(&root, &entry_path, "技能扫描项")?;
        let name = entry_path
            .file_name()
            .and_then(|value| value.to_str())
            .unwrap_or_default();
        if name.starts_with('.') {
            continue;
        }
        if !entry.is_dir {
            continue;
        }

        let skill_file = entry_path.join("SKILL.md");
        if fs.exists(&skill_file) {
            if let Some(summary) = load_skill_summary(fs, &skill_file, &root) {
                items.push(summary);
            }
        } else {
            scan_skills_recursive(fs, &entry_path, &root, items)?;
        }
    }
    Ok(())
}

fn load_skill_summary(
    fs: &dyn FileSystemAdapter,
    skill_file: &Path,
    root: &Path,
) -> Option<InstalledSkillSummary> {
    let skill_file = PathGuard::ensure_descendant(root, skill_file, "技能文件").ok()?;
    let text = fs.read_to_string(skill_file).ok()?;
    let dir = skill_file.parent()?;
    let relative = PathGuard::relative_to_root(root, dir, "技能目录").ok()?;
    let name = dir.file_name()?.to_str()?.to_string();
    let relative_path = relative.display().to_string();

    Some(InstalledSkillSummary {
        id: relative_path.clone(),
        name,
        title: first_markdown_heading(&text),
        summary: first_skill_summary_line(&text),
        relative_path,
        directory_path: dir.display().to_string(),
        skill_file_path: skill_file.display().to_string(),
        updated_at: fs.modified_unix_seconds(skill_file),
    })
}

fn resolve_installed_skill_dir(
    skills_dir: &Path,
    skill: &InstalledSkillSummary,
    label: &str,
) -> Result<PathBuf, CoreError> {
    PathGuard::ensure_descendant(skills_dir, Path::new(&skill.directory_path), label)
}

pub fn backup_skill_directory(
    fs: &dyn FileSystemAdapter,
    dir: &Path,
    skills_root: &Path,
    backup_dir: &Path,
    reason: &str,
) -> Result<SkillBackupSummary, CoreError> {
    let dir = PathGuard::ensure_descendant(skills_root, dir, "技能备份源目录")?;
    let backup_dir = PathGuard::normalize_trusted(backup_dir, "技能备份根目录")?;
    let skill = load_skill_summary(fs, &dir.join("SKILL.md"), skills_root)
        .ok_or_else(|| CoreError::InvalidInput("技能源无效".to_string()))?;
    fs.create_dir_all(&backup_dir)?;
    let created_at = crate::application::service::current_timestamp();
    let safe_path = skill.relative_path.replace('/', "__").replace('\\', "__");
    let backup_id = format!(
        "{created_at}-{safe_path}-{reason}-{}",
        &uuid::Uuid::new_v4().to_string()[..8]
    );
    let backup_name = PathGuard::safe_single_component(&backup_id, "技能备份 ID")?;
    let backup_path = PathGuard::safe_child(&backup_dir, &backup_name, "技能备份目录")?;
    let staged = PathGuard::safe_child(&backup_path, "skill", "技能备份内容目录")?;
    fs.create_dir_all(&backup_path)?;
    copy_dir_all(fs, &dir, &staged)?;

    let meta = SkillBackupMetadata {
        backup_id: backup_id.clone(),
        skill_id: skill.id.clone(),
        name: skill.name.clone(),
        title: skill.title.clone(),
        relative_path: skill.relative_path.clone(),
        created_at,
    };
    fs.write_string(
        &backup_path.join("metadata.json"),
        &serde_json::to_string_pretty(&meta)?,
    )?;

    Ok(SkillBackupSummary {
        id: backup_id,
        skill_id: skill.id,
        name: skill.name,
        title: skill.title,
        relative_path: skill.relative_path,
        backup_path: staged.display().to_string(),
        created_at,
    })
}

fn resolve_skill_source(fs: &dyn FileSystemAdapter, path: &Path) -> Result<PathBuf, CoreError> {
    let path = PathGuard::normalize_trusted(path, "技能导入源路径")?;
    PathGuard::reject_parent_components(&path, "技能导入源路径")?;

    if !fs.exists(&path) {
        return Err(CoreError::NotFound(format!(
            "路径不存在：{}",
            path.display()
        )));
    }
    if fs.exists(&path.join("SKILL.md")) {
        return Ok(path);
    }
    if path
        .file_name()
        .and_then(|name| name.to_str())
        .is_some_and(|name| name == "SKILL.md")
    {
        return path
            .parent()
            .map(Path::to_path_buf)
            .ok_or_else(|| CoreError::InvalidInput("SKILL.md 缺少父目录".to_string()));
    }
    Err(CoreError::InvalidInput(
        "技能源必须是包含 SKILL.md 的目录，或 SKILL.md 文件".to_string(),
    ))
}

pub fn copy_skill_directory(
    fs: &dyn FileSystemAdapter,
    source: &Path,
    target: &Path,
) -> Result<(), CoreError> {
    copy_dir_all(fs, source, target)
}

fn copy_dir_all(fs: &dyn FileSystemAdapter, source: &Path, target: &Path) -> Result<(), CoreError> {
    let source_root = PathGuard::normalize_trusted(source, "技能复制源根目录")?;
    let target_root = PathGuard::normalize_trusted(target, "技能复制目标根目录")?;
    copy_dir_all_checked(fs, &source_root, &source_root, &target_root, &target_root)
}

fn copy_dir_all_checked(
    fs: &dyn FileSystemAdapter,
    source_root: &Path,
    current_source: &Path,
    target_root: &Path,
    current_target: &Path,
) -> Result<(), CoreError> {
    let current_source =
        PathGuard::ensure_descendant(source_root, current_source, "技能复制源目录")?;
    let current_target =
        PathGuard::ensure_descendant(target_root, current_target, "技能复制目标目录")?;

    fs.create_dir_all(&current_target)?;
    for entry in fs.read_dir(&current_source)? {
        let entry_path =
            PathGuard::ensure_descendant(&current_source, &entry.path, "技能复制源项")?;
        let entry_path = PathGuard::ensure_descendant(source_root, &entry_path, "技能复制源项")?;
        let entry_relative =
            PathGuard::relative_to_root(&current_source, &entry_path, "技能复制源项")?;
        let entry_name = PathGuard::safe_single_component(&entry_relative, "技能复制源项文件名")?;
        let destination = PathGuard::safe_child(&current_target, &entry_name, "技能复制目标项")?;
        let destination =
            PathGuard::ensure_descendant(target_root, &destination, "技能复制目标项")?;

        if entry.is_dir {
            copy_dir_all_checked(fs, source_root, &entry_path, target_root, &destination)?;
        } else {
            fs.copy_file(&entry_path, &destination)?;
        }
    }
    Ok(())
}

fn backup_name_from_path(backup_dir: &Path, backup_path: &Path) -> Result<PathBuf, CoreError> {
    let relative = PathGuard::relative_to_root(backup_dir, backup_path, "技能备份目录名")?;
    PathGuard::safe_single_component(&relative, "技能备份目录名")
}

fn first_markdown_heading(text: &str) -> Option<String> {
    text.lines().find_map(|line| {
        let trimmed = line.trim();
        if !trimmed.starts_with('#') {
            return None;
        }
        let heading = trimmed.trim_start_matches('#').trim();
        (!heading.is_empty()).then(|| heading.to_string())
    })
}

fn first_skill_summary_line(text: &str) -> Option<String> {
    let mut in_frontmatter = false;
    for line in text.lines() {
        let trimmed = line.trim();
        if trimmed.is_empty() {
            continue;
        }
        if trimmed == "---" {
            in_frontmatter = !in_frontmatter;
            continue;
        }
        if in_frontmatter
            || trimmed.starts_with('#')
            || trimmed.starts_with("```")
            || trimmed.starts_with("- ")
            || trimmed.starts_with("* ")
        {
            continue;
        }
        return Some(trimmed.to_string());
    }
    None
}

pub fn paths_equal(left: &Path, right: &Path) -> bool {
    left == right
}
