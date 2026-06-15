use crate::core::error::CoreError;
use crate::core::model::custom_instructions::CustomInstructionHistorySnapshot;
use crate::repository::Repository;

pub(crate) fn ensure_storage(repo: &Repository) -> Result<(), CoreError> {
    repo.paths().ensure_app_directories()?;
    Ok(())
}

pub(crate) fn global_path(repo: &Repository) -> String {
    repo.paths().global_agents_path.display().to_string()
}

pub(crate) fn read_global_file(repo: &Repository) -> Result<(bool, String), CoreError> {
    let path = &repo.paths().global_agents_path;
    let file_exists = repo.fs().exists(path);
    let content = if file_exists {
        repo.fs().read_to_string(path)?
    } else {
        String::new()
    };
    Ok((file_exists, content))
}

pub(crate) fn write_global_file(repo: &Repository, content: &str) -> Result<(), CoreError> {
    repo.fs()
        .write_string(&repo.paths().global_agents_path, content)
}

pub(crate) fn remove_global_file(repo: &Repository) -> Result<(), CoreError> {
    repo.fs().remove_file(&repo.paths().global_agents_path)
}

pub(crate) fn write_history_snapshot(
    repo: &Repository,
    snapshot: &CustomInstructionHistorySnapshot,
) -> Result<(), CoreError> {
    let path = repo
        .paths()
        .custom_instruction_history_dir
        .join(format!("{}.json", snapshot.id));
    repo.fs()
        .write_string(&path, &serde_json::to_string_pretty(snapshot)?)?;
    Ok(())
}

pub(crate) fn load_history(
    repo: &Repository,
) -> Result<Vec<CustomInstructionHistorySnapshot>, CoreError> {
    let path = &repo.paths().custom_instruction_history_dir;
    if !repo.fs().exists(path) {
        return Ok(Vec::new());
    }

    let mut items = Vec::new();
    for entry in repo.fs().read_dir(path)? {
        if entry.path.extension().and_then(|value| value.to_str()) != Some("json") {
            continue;
        }
        let raw = repo.fs().read_to_string(&entry.path)?;
        if let Ok(snapshot) = serde_json::from_str::<CustomInstructionHistorySnapshot>(&raw) {
            items.push(snapshot);
        }
    }
    items.sort_by(|left, right| right.created_at.cmp(&left.created_at));
    Ok(items)
}

pub(crate) fn find_history_snapshot(
    repo: &Repository,
    history_id: &str,
) -> Result<Option<CustomInstructionHistorySnapshot>, CoreError> {
    let path = repo
        .paths()
        .custom_instruction_history_dir
        .join(format!("{history_id}.json"));
    if !repo.fs().exists(&path) {
        return Ok(None);
    }
    let raw = repo.fs().read_to_string(&path)?;
    Ok(Some(serde_json::from_str(&raw)?))
}

pub(crate) fn trim_history(repo: &Repository, limit: usize) -> Result<(), CoreError> {
    let mut items = load_history(repo)?;
    if items.len() <= limit {
        return Ok(());
    }
    items.sort_by(|left, right| right.created_at.cmp(&left.created_at));
    for snapshot in items.into_iter().skip(limit) {
        repo.fs().remove_file(
            &repo
                .paths()
                .custom_instruction_history_dir
                .join(format!("{}.json", snapshot.id)),
        )?;
    }
    Ok(())
}
