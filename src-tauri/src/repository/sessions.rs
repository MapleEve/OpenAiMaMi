use crate::repository::Repository;
use chrono::{DateTime, Utc};
use serde_json::Value;
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
    pub project_path: Option<String>,
    pub project_name: Option<String>,
    pub parent_session_id: Option<String>,
    pub project_path_missing: bool,
    pub agent_nickname: Option<String>,
    pub agent_role: Option<String>,
    pub turn_count: i32,
    pub activity_timestamps: Vec<i64>,
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
            let jsonl = load_session_jsonl_facts(repo, &entry.path);
            let updated_at = jsonl
                .updated_at
                .unwrap_or_else(|| repo.fs().modified_unix_seconds(&entry.path).unwrap_or(0));
            let project_path_missing = jsonl
                .project_path
                .as_deref()
                .map(|path| !repo.fs().exists(Path::new(path)))
                .unwrap_or(false);

            Some(SessionFileMetadata {
                updated_at,
                created_at: repo.fs().created_unix_seconds(&entry.path),
                file_size: repo.fs().file_size_bytes(&entry.path).unwrap_or(0) as i64,
                project_name: jsonl.project_name,
                project_path: jsonl.project_path,
                parent_session_id: jsonl.parent_session_id,
                project_path_missing,
                agent_nickname: jsonl.agent_nickname,
                agent_role: jsonl.agent_role,
                turn_count: jsonl.turn_count,
                activity_timestamps: jsonl.activity_timestamps,
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

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct SessionJsonlFacts {
    updated_at: Option<i64>,
    project_path: Option<String>,
    project_name: Option<String>,
    parent_session_id: Option<String>,
    agent_nickname: Option<String>,
    agent_role: Option<String>,
    turn_count: i32,
    activity_timestamps: Vec<i64>,
}

fn load_session_jsonl_facts(repo: &Repository, path: &Path) -> SessionJsonlFacts {
    if path.extension().and_then(|value| value.to_str()) != Some("jsonl") {
        return SessionJsonlFacts::default();
    }

    let Ok(raw) = repo.fs().read_to_string(path) else {
        return SessionJsonlFacts::default();
    };

    raw.lines()
        .filter_map(|line| serde_json::from_str::<Value>(line).ok())
        .fold(SessionJsonlFacts::default(), merge_session_jsonl_value)
}

fn merge_session_jsonl_value(mut facts: SessionJsonlFacts, value: Value) -> SessionJsonlFacts {
    if let Some(timestamp) = json_string(&value, &["/payload/timestamp", "/timestamp"])
        .and_then(parse_rfc3339_epoch_seconds)
    {
        facts.activity_timestamps.push(timestamp);
        facts.updated_at = Some(
            facts
                .updated_at
                .map_or(timestamp, |current| current.max(timestamp)),
        );
    }

    if facts.project_path.is_none() {
        facts.project_path = json_string(&value, &["/payload/cwd", "/cwd"]);
    }
    if facts.project_name.is_none() {
        facts.project_name = facts
            .project_path
            .as_deref()
            .and_then(|path| Path::new(path).file_name())
            .map(|value| value.to_string_lossy().to_string())
            .filter(|value| !value.is_empty());
    }
    if facts.parent_session_id.is_none() {
        facts.parent_session_id = json_string(
            &value,
            &[
                "/payload/source/subagent/thread_spawn/parent_thread_id",
                "/payload/source/thread_spawn/parent_thread_id",
                "/payload/parent_session_id",
                "/parent_session_id",
            ],
        );
    }
    if facts.agent_nickname.is_none() {
        facts.agent_nickname = json_string(
            &value,
            &["/payload/agent_nickname", "/payload/agentNickname"],
        );
    }
    if facts.agent_role.is_none() {
        facts.agent_role = json_string(&value, &["/payload/agent_role", "/payload/agentRole"]);
    }
    if json_string(&value, &["/payload/role", "/role"]).is_some() {
        facts.turn_count = facts.turn_count.saturating_add(1);
    }

    facts
}

fn json_string(value: &Value, pointers: &[&str]) -> Option<String> {
    pointers
        .iter()
        .filter_map(|pointer| value.pointer(pointer))
        .find_map(Value::as_str)
        .map(str::trim)
        .filter(|value| !value.is_empty())
        .map(str::to_string)
}

fn parse_rfc3339_epoch_seconds(value: String) -> Option<i64> {
    DateTime::parse_from_rfc3339(&value)
        .ok()
        .map(|timestamp| timestamp.with_timezone(&Utc).timestamp())
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

    #[test]
    fn load_session_file_metadata_reads_public_jsonl_facts() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let session = codex_home.join("sessions/session-a.jsonl");
        let fs = FakeFileSystem::default().with_file(
            session,
            [
                r#"{"payload":{"timestamp":"2024-03-09T16:00:00.000000Z","cwd":"/work/demo","agent_nickname":"local-agent","agent_role":"reviewer","role":"user"}}"#,
                r#"{"payload":{"timestamp":"2024-03-09T16:01:00.000000Z","source":{"subagent":{"thread_spawn":{"parent_thread_id":"parent-a"}}},"role":"assistant"}}"#,
            ]
            .join("\n"),
        );
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let items = load_session_file_metadata(&repo);

        assert_eq!(items.len(), 1);
        assert_eq!(items[0].id, "session-a");
        assert_eq!(items[0].updated_at, 1_710_000_060);
        assert_eq!(items[0].project_path, Some("/work/demo".to_string()));
        assert_eq!(items[0].project_name, Some("demo".to_string()));
        assert_eq!(items[0].parent_session_id, Some("parent-a".to_string()));
        assert_eq!(items[0].agent_nickname, Some("local-agent".to_string()));
        assert_eq!(items[0].agent_role, Some("reviewer".to_string()));
        assert_eq!(items[0].turn_count, 2);
        assert_eq!(
            items[0].activity_timestamps,
            vec![1_710_000_000, 1_710_000_060]
        );
        assert!(items[0].project_path_missing);
    }
}
