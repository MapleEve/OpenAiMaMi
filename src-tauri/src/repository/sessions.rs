use crate::repository::Repository;
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
                created_at: None,
                file_size: repo.fs().file_size_bytes(&entry.path).unwrap_or(0) as i64,
                path: entry.path,
                id,
            })
        })
        .collect()
}

fn session_file_id(path: &Path) -> Option<String> {
    path.file_stem()
        .or_else(|| path.file_name())
        .map(|value| value.to_string_lossy().to_string())
        .filter(|value| !value.is_empty())
}
