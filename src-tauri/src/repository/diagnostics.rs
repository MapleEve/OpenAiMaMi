use crate::core::error::CoreError;
use crate::core::model::diagnostics::{DiagnosticProbe, DiagnosticSnapshot};
use crate::repository::Repository;
use std::path::Path;

// diagnostics 仓储只从 Repository 路径和 FS 适配器读取事实，不保存跨命令业务状态。

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
