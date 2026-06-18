use crate::repository::Repository;
use std::collections::HashSet;
use std::path::{Path, PathBuf};

pub(crate) struct SessionsRepository;

pub(crate) trait SessionsRepositoryBoundary {}

impl SessionsRepositoryBoundary for SessionsRepository {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SessionFileMetadata {
    pub id: String,
    pub path: PathBuf,
    pub updated_at: i64,
    pub created_at: Option<i64>,
    pub file_size: i64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SessionsDeleteResult {
    pub deleted_ids: Vec<String>,
    pub skipped_ids: Vec<String>,
}

/// 只读取 sessions 目录的一层文件元数据，不解析会话内容。
pub fn load_session_file_metadata(repo: &Repository) -> Vec<SessionFileMetadata> {
    repo.fs()
        .read_dir(&repo.paths().sessions_dir)
        .unwrap_or_default()
        .into_iter()
        .filter(|entry| !entry.is_dir)
        .filter_map(|entry| {
            let id = session_file_id(&entry.path)?;
            Some(SessionFileMetadata {
                updated_at: repo.fs().modified_unix_seconds(&entry.path).unwrap_or(0),
                created_at: repo.fs().created_unix_seconds(&entry.path),
                file_size: repo.fs().file_size_bytes(&entry.path).unwrap_or(0) as i64,
                path: entry.path,
                id,
            })
        })
        .collect()
}

/// 按已扫描到的 session id 删除对应文件；id 只与仓储枚举结果匹配，不拼接为路径。
pub fn delete_session_files(
    repo: &Repository,
    ids: &[String],
) -> Result<SessionsDeleteResult, crate::core::error::CoreError> {
    let requested = ids.iter().cloned().collect::<HashSet<_>>();
    let mut deleted = HashSet::new();

    for metadata in load_session_file_metadata(repo) {
        if !requested.contains(&metadata.id) {
            continue;
        }
        repo.fs().remove_file(&metadata.path)?;
        deleted.insert(metadata.id);
    }

    let mut deleted_ids = ids
        .iter()
        .filter(|id| deleted.contains(*id))
        .cloned()
        .collect::<Vec<_>>();
    deleted_ids.sort();
    deleted_ids.dedup();

    let mut skipped_ids = ids
        .iter()
        .filter(|id| !deleted.contains(*id))
        .cloned()
        .collect::<Vec<_>>();
    skipped_ids.sort();
    skipped_ids.dedup();

    Ok(SessionsDeleteResult {
        deleted_ids,
        skipped_ids,
    })
}

fn session_file_id(path: &Path) -> Option<String> {
    path.file_stem()
        .or_else(|| path.file_name())
        .map(|value| value.to_string_lossy().to_string())
        .filter(|value| !value.is_empty())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::{adapter::fake_fs::FakeFileSystem, paths::RepositoryPaths, Repository};
    use std::path::PathBuf;

    #[test]
    fn delete_session_files_only_removes_matching_scanned_ids() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let session_a = codex_home.join("sessions/a.jsonl");
        let session_b = codex_home.join("sessions/b.jsonl");
        let outside = codex_home.join("outside/a.jsonl");
        let fs = FakeFileSystem::default()
            .with_file(session_a.clone(), "a".to_string())
            .with_file(session_b.clone(), "b".to_string())
            .with_file(outside.clone(), "outside".to_string());
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let result = delete_session_files(
            &repo,
            &[
                "a".to_string(),
                "../outside/a".to_string(),
                "missing".to_string(),
            ],
        )
        .expect("delete sessions");

        assert_eq!(result.deleted_ids, vec!["a".to_string()]);
        assert_eq!(
            result.skipped_ids,
            vec!["../outside/a".to_string(), "missing".to_string()]
        );
        assert!(!repo.fs().exists(&session_a));
        assert!(repo.fs().exists(&session_b));
        assert!(repo.fs().exists(&outside));
    }
}
