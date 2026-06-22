use crate::core::error::CoreError;
use crate::core::model::diagnostics::{DiagnosticProbe, DiagnosticSnapshot};
use crate::repository::Repository;
use std::collections::HashSet;
use std::path::Path;

// diagnostics 仓储只从 Repository 路径和 FS 适配器读取事实，不保存跨命令业务状态。

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagnosticFileShapeSummary {
    pub auth_exists: bool,
    pub auth_size_bytes: i64,
    pub registry_exists: bool,
    pub registry_json_valid: bool,
    pub registry_item_count: i32,
    pub registry_missing_key_count: i32,
    pub registry_duplicate_key_count: i32,
    pub sessions_exists: bool,
    pub sessions_entry_count: i32,
    pub sessions_jsonl_count: i32,
}

pub fn load_system_diagnostic_snapshot(repo: &Repository) -> Result<DiagnosticSnapshot, CoreError> {
    let paths = repo.paths();
    let registry_count = registry_account_count(repo)?;
    let session_count = child_count(repo, &paths.sessions_dir)?;

    let probes = vec![
        path_probe(
            repo,
            &paths.codex_home,
            None,
            "diagnostics.path.codex_home",
            "Codex 根目录路径探针",
        ),
        path_probe(
            repo,
            &paths.accounts_dir,
            None,
            "diagnostics.path.accounts",
            "账号目录路径探针",
        ),
        path_probe(
            repo,
            &paths.auth_path,
            None,
            "diagnostics.path.auth",
            "认证文件路径探针",
        ),
        path_probe(
            repo,
            &paths.registry_path,
            Some(registry_count),
            "diagnostics.path.registry",
            "账号注册表路径探针",
        ),
        path_probe(
            repo,
            &paths.sessions_dir,
            Some(session_count),
            "diagnostics.path.sessions",
            "会话目录路径探针",
        ),
        path_probe(
            repo,
            &paths.config_path,
            None,
            "diagnostics.path.config",
            "配置文件路径探针",
        ),
    ];

    Ok(DiagnosticSnapshot::new(
        paths.codex_home.display().to_string(),
        paths.config_path.display().to_string(),
        probes,
        "diagnostics.snapshot.ready",
        "系统诊断只读快照已从仓储路径生成",
    ))
}

pub fn relay_diagnostic_source_path(repo: &Repository) -> String {
    repo.paths().config_path.display().to_string()
}

pub fn load_diagnostic_file_shape_summary(repo: &Repository) -> DiagnosticFileShapeSummary {
    let paths = repo.paths();
    let auth_exists = repo.fs().exists(&paths.auth_path);
    let auth_size_bytes = if auth_exists {
        repo.fs().file_size_bytes(&paths.auth_path).unwrap_or(0) as i64
    } else {
        0
    };
    let registry_shape = registry_file_shape(repo);
    let session_shape = session_file_shape(repo);

    DiagnosticFileShapeSummary {
        auth_exists,
        auth_size_bytes,
        registry_exists: registry_shape.exists,
        registry_json_valid: registry_shape.json_valid,
        registry_item_count: registry_shape.item_count,
        registry_missing_key_count: registry_shape.missing_key_count,
        registry_duplicate_key_count: registry_shape.duplicate_key_count,
        sessions_exists: session_shape.exists,
        sessions_entry_count: session_shape.entry_count,
        sessions_jsonl_count: session_shape.jsonl_count,
    }
}

fn path_probe(
    repo: &Repository,
    path: &Path,
    count: Option<i32>,
    status_code: &str,
    message: &str,
) -> DiagnosticProbe {
    DiagnosticProbe::new(
        path.display().to_string(),
        repo.fs().exists(path),
        count,
        status_code,
        message,
    )
}

fn child_count(repo: &Repository, path: &Path) -> Result<i32, CoreError> {
    if !repo.fs().exists(path) {
        return Ok(0);
    }
    Ok(repo.fs().read_dir(path)?.len() as i32)
}

fn registry_account_count(repo: &Repository) -> Result<i32, CoreError> {
    let path = &repo.paths().registry_path;
    if !repo.fs().exists(path) {
        return Ok(0);
    }
    let raw = repo.fs().read_to_string(path)?;
    let value: serde_json::Value = serde_json::from_str(&raw)?;
    Ok(value
        .get("items")
        .and_then(serde_json::Value::as_array)
        .map(|items| items.len() as i32)
        .unwrap_or_default())
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct RegistryFileShape {
    exists: bool,
    json_valid: bool,
    item_count: i32,
    missing_key_count: i32,
    duplicate_key_count: i32,
}

fn registry_file_shape(repo: &Repository) -> RegistryFileShape {
    let path = &repo.paths().registry_path;
    if !repo.fs().exists(path) {
        return RegistryFileShape::default();
    }

    let Ok(raw) = repo.fs().read_to_string(path) else {
        return RegistryFileShape {
            exists: true,
            ..RegistryFileShape::default()
        };
    };
    let Ok(value) = serde_json::from_str::<serde_json::Value>(&raw) else {
        return RegistryFileShape {
            exists: true,
            ..RegistryFileShape::default()
        };
    };

    let items = value
        .get("items")
        .and_then(serde_json::Value::as_array)
        .cloned()
        .unwrap_or_default();
    let mut seen = HashSet::new();
    let mut missing_key_count = 0;
    let mut duplicate_key_count = 0;

    for item in &items {
        let Some(key) = item.get("key").and_then(serde_json::Value::as_str) else {
            missing_key_count += 1;
            continue;
        };
        if key.trim().is_empty() {
            missing_key_count += 1;
            continue;
        }
        if !seen.insert(key.to_string()) {
            duplicate_key_count += 1;
        }
    }

    RegistryFileShape {
        exists: true,
        json_valid: true,
        item_count: items.len() as i32,
        missing_key_count,
        duplicate_key_count,
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct SessionFileShape {
    exists: bool,
    entry_count: i32,
    jsonl_count: i32,
}

fn session_file_shape(repo: &Repository) -> SessionFileShape {
    let path = &repo.paths().sessions_dir;
    if !repo.fs().exists(path) {
        return SessionFileShape::default();
    }

    let entries = repo.fs().read_dir(path).unwrap_or_default();
    let jsonl_count = entries
        .iter()
        .filter(|entry| !entry.is_dir)
        .filter(|entry| entry.path.extension().and_then(|value| value.to_str()) == Some("jsonl"))
        .count() as i32;

    SessionFileShape {
        exists: true,
        entry_count: entries.len() as i32,
        jsonl_count,
    }
}
