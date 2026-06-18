use crate::core::model::analytics::{PublicCommandFact, PublicSessionFileFact, PublicToolCallFact};
use crate::repository::{sessions, Repository};
use chrono::{DateTime, Utc};
use serde_json::Value;
use std::path::{Path, PathBuf};

pub(crate) struct AnalyticsRepository;

pub(crate) trait AnalyticsRepositoryBoundary {}

impl AnalyticsRepositoryBoundary for AnalyticsRepository {}

/// 分析仓储只读取可替换 FS 下的公开 session 文件元数据，不解析会话内容。
pub fn load_public_session_facts(repo: &Repository) -> Vec<PublicSessionFileFact> {
    sessions::load_session_file_metadata(repo)
        .into_iter()
        .map(|metadata| {
            PublicSessionFileFact::new(
                metadata.id,
                metadata.updated_at,
                metadata.created_at,
                metadata.file_size,
                metadata.turn_count,
            )
            .with_activity_timestamps(metadata.activity_timestamps)
        })
        .collect()
}

/// 递归读取公开 rollout JSONL，只抽取 exec_command 命令事实供 core 聚合。
pub fn load_public_change_command_facts(repo: &Repository) -> Vec<PublicCommandFact> {
    let mut facts = Vec::new();
    for root in public_session_roots(repo) {
        visit_public_rollout_dir(repo, &root, &mut facts);
    }
    facts
}

/// 递归读取公开 rollout JSONL，只抽取 response_item/function_call 工具 path 事实供 core 聚合。
pub fn load_public_tool_call_facts(repo: &Repository) -> Vec<PublicToolCallFact> {
    let mut facts = Vec::new();
    for root in public_session_roots(repo) {
        visit_public_tool_call_rollout_dir(repo, &root, &mut facts);
    }
    facts
}

fn public_session_roots(repo: &Repository) -> Vec<PathBuf> {
    vec![
        repo.paths().sessions_dir.clone(),
        repo.paths().codex_home.join("rollouts"),
    ]
}

fn visit_public_rollout_dir(repo: &Repository, root: &Path, facts: &mut Vec<PublicCommandFact>) {
    let Ok(entries) = repo.fs().read_dir(root) else {
        return;
    };

    for entry in entries {
        if entry.is_dir {
            visit_public_rollout_dir(repo, &entry.path, facts);
            continue;
        }
        if !is_rollout_jsonl(&entry.path) {
            continue;
        }

        let fallback_timestamp = repo.fs().modified_unix_seconds(&entry.path).unwrap_or(0);
        let Ok(raw) = repo.fs().read_to_string(&entry.path) else {
            continue;
        };
        facts.extend(
            raw.lines()
                .filter_map(|line| serde_json::from_str::<Value>(line).ok())
                .filter_map(|value| public_command_fact_from_value(&value, fallback_timestamp)),
        );
    }
}

fn visit_public_tool_call_rollout_dir(
    repo: &Repository,
    root: &Path,
    facts: &mut Vec<PublicToolCallFact>,
) {
    let Ok(entries) = repo.fs().read_dir(root) else {
        return;
    };

    for entry in entries {
        if entry.is_dir {
            visit_public_tool_call_rollout_dir(repo, &entry.path, facts);
            continue;
        }
        if !is_rollout_jsonl(&entry.path) {
            continue;
        }

        let fallback_timestamp = repo.fs().modified_unix_seconds(&entry.path).unwrap_or(0);
        let Ok(raw) = repo.fs().read_to_string(&entry.path) else {
            continue;
        };
        facts.extend(
            raw.lines()
                .filter_map(|line| serde_json::from_str::<Value>(line).ok())
                .filter_map(|value| public_tool_call_fact_from_value(&value, fallback_timestamp)),
        );
    }
}

fn is_rollout_jsonl(path: &Path) -> bool {
    let Some(file_name) = path.file_name().and_then(|value| value.to_str()) else {
        return false;
    };
    file_name.starts_with("rollout-") && file_name.ends_with(".jsonl")
}

fn public_command_fact_from_value(
    value: &Value,
    fallback_timestamp: i64,
) -> Option<PublicCommandFact> {
    if json_string(value, &["/type"]).as_deref() != Some("response_item") {
        return None;
    }
    if json_string(value, &["/payload/type"]).as_deref() != Some("function_call") {
        return None;
    }
    let Some(function_name) = json_string(
        value,
        &[
            "/payload/name",
            "/payload/function/name",
            "/payload/call/name",
            "/name",
        ],
    ) else {
        return None;
    };
    if function_name != "exec_command" {
        return None;
    }

    let arguments = value
        .pointer("/payload/arguments")
        .or_else(|| value.pointer("/arguments"))?;
    let command = command_from_arguments(arguments)?;
    let timestamp =
        json_timestamp(value, &["/payload/timestamp", "/timestamp"]).unwrap_or(fallback_timestamp);

    Some(PublicCommandFact::new(timestamp, command))
}

fn public_tool_call_fact_from_value(
    value: &Value,
    fallback_timestamp: i64,
) -> Option<PublicToolCallFact> {
    if json_string(value, &["/type"]).as_deref() != Some("response_item") {
        return None;
    }
    if json_string(value, &["/payload/type"]).as_deref() != Some("function_call") {
        return None;
    }

    let path = json_string(
        value,
        &[
            "/payload/path",
            "/payload/name",
            "/payload/function/path",
            "/payload/function/name",
            "/payload/call/path",
            "/payload/call/name",
            "/path",
            "/name",
        ],
    )
    .unwrap_or_else(|| "unknown".to_string());
    let timestamp =
        json_timestamp(value, &["/payload/timestamp", "/timestamp"]).unwrap_or(fallback_timestamp);

    Some(PublicToolCallFact::new(timestamp, path))
}

fn command_from_arguments(value: &Value) -> Option<String> {
    if let Some(raw) = value.as_str() {
        if let Ok(parsed) = serde_json::from_str::<Value>(raw) {
            return command_from_arguments(&parsed);
        }
        return non_empty(raw);
    }

    for pointer in [
        "/payload/command",
        "/payload/cmd",
        "/command",
        "/cmd",
        "/input/command",
    ] {
        if let Some(command) = value
            .pointer(pointer)
            .and_then(Value::as_str)
            .and_then(non_empty)
        {
            return Some(command);
        }
    }

    for pointer in ["/payload/argv", "/argv"] {
        if let Some(argv) = value.pointer(pointer).and_then(Value::as_array) {
            let command = argv
                .iter()
                .filter_map(Value::as_str)
                .collect::<Vec<_>>()
                .join(" ");
            if let Some(command) = non_empty(&command) {
                return Some(command);
            }
        }
    }

    None
}

fn json_string(value: &Value, pointers: &[&str]) -> Option<String> {
    pointers
        .iter()
        .filter_map(|pointer| value.pointer(pointer))
        .find_map(Value::as_str)
        .and_then(non_empty)
}

fn json_timestamp(value: &Value, pointers: &[&str]) -> Option<i64> {
    for pointer in pointers {
        let Some(item) = value.pointer(pointer) else {
            continue;
        };
        if let Some(number) = item.as_i64() {
            return Some(number);
        }
        if let Some(raw) = item.as_str() {
            if let Ok(parsed) = raw.parse::<i64>() {
                return Some(parsed);
            }
            if let Some(parsed) = parse_rfc3339_epoch_seconds(raw) {
                return Some(parsed);
            }
        }
    }
    None
}

fn parse_rfc3339_epoch_seconds(value: &str) -> Option<i64> {
    DateTime::parse_from_rfc3339(value)
        .ok()
        .map(|timestamp| timestamp.with_timezone(&Utc).timestamp())
}

fn non_empty(value: &str) -> Option<String> {
    let trimmed = value.trim();
    (!trimmed.is_empty()).then(|| trimmed.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::{adapter::fake_fs::FakeFileSystem, paths::RepositoryPaths, Repository};
    use std::path::PathBuf;

    #[test]
    fn load_public_change_command_facts_reads_rollout_jsonl_recursively() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let rollout = codex_home.join("sessions/project/rollout-a.jsonl");
        let ignored = codex_home.join("sessions/project/session-a.jsonl");
        let fs = FakeFileSystem::default()
            .with_file(
                rollout,
                [
                    r#"{"type":"response_item","payload":{"type":"function_call","name":"exec_command","timestamp":"2024-03-09T16:00:00.000000Z","arguments":"{\"payload\":{\"command\":\"git status\"}}"}}"#,
                    r#"{"type":"response_item","payload":{"type":"function_call","name":"other_tool","arguments":{"payload":{"command":"rm file"}}}}"#,
                    r#"{"type":"event_msg","payload":{"type":"ignored"}}"#,
                ]
                .join("\n"),
            )
            .with_file(ignored, "ignored".to_string());
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let facts = load_public_change_command_facts(&repo);

        assert_eq!(facts.len(), 1);
        assert_eq!(facts[0].timestamp, 1_710_000_000);
        assert_eq!(facts[0].command, "git status");
    }

    #[test]
    fn load_public_tool_call_facts_reads_all_function_calls() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let rollout = codex_home.join("sessions/project/rollout-tools.jsonl");
        let fs = FakeFileSystem::default().with_file(
            rollout,
            [
                r#"{"type":"response_item","payload":{"type":"function_call","name":"exec_command","timestamp":"2024-03-09T16:00:00.000000Z","arguments":"{\"payload\":{\"command\":\"git status\"}}"}}"#,
                r#"{"type":"response_item","payload":{"type":"function_call","name":"web_search"}}"#,
                r#"{"type":"response_item","payload":{"type":"function_call","path":"tools/edit"}}"#,
                r#"{"type":"response_item","payload":{"type":"message","name":"ignored"}}"#,
            ]
            .join("\n"),
        );
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let facts = load_public_tool_call_facts(&repo);

        assert_eq!(facts.len(), 3);
        assert_eq!(facts[0].timestamp, 1_710_000_000);
        assert_eq!(facts[0].path, "exec_command");
        assert_eq!(facts[1].path, "web_search");
        assert_eq!(facts[2].path, "tools/edit");
    }
}
