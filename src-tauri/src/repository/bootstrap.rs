use crate::contracts::{BootstrapCacheFile, InstalledSkillSummary, McpServerSummary};
use crate::core::error::CoreError;
use crate::repository::directories;
use crate::repository::Repository;

// bootstrap 仓储只读取启动缓存文件，不解释缓存内容的业务含义。
pub fn load_bootstrap_cache(repo: &Repository) -> Result<BootstrapCacheFile, CoreError> {
    let path = &repo.paths().bootstrap_cache_path;
    if !repo.fs().exists(path) {
        return Ok(BootstrapCacheFile::default());
    }

    let raw = repo.fs().read_to_string(path)?;
    Ok(serde_json::from_str(&raw)?)
}

pub fn store_bootstrap_mcp_servers(
    repo: &Repository,
    written_at: i64,
    servers: Vec<McpServerSummary>,
) -> Result<(), CoreError> {
    let mut cache = load_bootstrap_cache(repo).unwrap_or_default();
    cache.written_at = Some(serde_json::Value::Number(written_at.into()));
    cache.mcp_servers = Some(servers);
    save_bootstrap_cache(repo, &cache)
}

pub fn store_bootstrap_installed_skills(
    repo: &Repository,
    written_at: i64,
    skills: Vec<InstalledSkillSummary>,
) -> Result<(), CoreError> {
    let mut cache = load_bootstrap_cache(repo).unwrap_or_default();
    cache.written_at = Some(serde_json::Value::Number(written_at.into()));
    cache.installed_skills = Some(skills);
    save_bootstrap_cache(repo, &cache)
}

pub fn store_bootstrap_usage_analytics(
    repo: &Repository,
    written_at: i64,
    usage_analytics: serde_json::Value,
) -> Result<(), CoreError> {
    let mut cache = load_bootstrap_cache(repo).unwrap_or_default();
    cache.written_at = Some(serde_json::Value::Number(written_at.into()));
    cache.usage_analytics = Some(usage_analytics);
    save_bootstrap_cache(repo, &cache)
}

pub fn store_bootstrap_snapshot_progressive(
    repo: &Repository,
    written_at: i64,
    snapshot_progressive: serde_json::Value,
) -> Result<(), CoreError> {
    let mut cache = load_bootstrap_cache(repo).unwrap_or_default();
    cache.written_at = Some(serde_json::Value::Number(written_at.into()));
    cache.snapshot_progressive = Some(snapshot_progressive);
    save_bootstrap_cache(repo, &cache)
}

fn save_bootstrap_cache(repo: &Repository, cache: &BootstrapCacheFile) -> Result<(), CoreError> {
    directories::ensure_app_directories(repo)?;
    repo.fs().write_string(
        &repo.paths().bootstrap_cache_path,
        &serde_json::to_string_pretty(cache)?,
    )
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::contracts::McpTransport;
    use std::collections::HashMap;

    #[test]
    fn load_bootstrap_cache_returns_empty_when_file_missing() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-missing");

        let cache = load_bootstrap_cache(&repo).expect("load empty cache");

        assert!(cache.written_at.is_none());
        assert!(cache.snapshot_progressive.is_none());
        assert!(cache.usage_analytics.is_none());
        assert!(cache.mcp_servers.is_none());
        assert!(cache.installed_skills.is_none());
    }

    #[test]
    fn load_bootstrap_cache_reads_known_slices() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-read");
        directories::ensure_app_directories(&repo).expect("create dirs");
        repo.fs()
            .write_string(
                &repo.paths().bootstrap_cache_path,
                r#"{
  "writtenAt": 1710000000000,
  "snapshotProgressive": {"ready": true},
  "usageAnalytics": {"dailyData": []},
  "mcpServers": [],
  "installedSkills": []
}"#,
            )
            .expect("write cache");

        let cache = load_bootstrap_cache(&repo).expect("load cache");

        assert_eq!(
            cache.written_at,
            Some(serde_json::Value::Number(1710000000000i64.into()))
        );
        assert!(cache.snapshot_progressive.is_some());
        assert!(cache.usage_analytics.is_some());
        assert_eq!(cache.mcp_servers, Some(Vec::new()));
        assert_eq!(cache.installed_skills, Some(Vec::new()));
    }

    #[test]
    fn store_bootstrap_mcp_servers_preserves_other_cache_slices() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-store-mcp");
        directories::ensure_app_directories(&repo).expect("create dirs");
        repo.fs()
            .write_string(
                &repo.paths().bootstrap_cache_path,
                r#"{
  "usageAnalytics": {"dailyData": []},
  "installedSkills": []
}"#,
            )
            .expect("write cache");

        store_bootstrap_mcp_servers(&repo, 1710000001, vec![sample_mcp_server()])
            .expect("store mcp cache");

        let cache = load_bootstrap_cache(&repo).expect("reload cache");
        assert_eq!(
            cache.written_at,
            Some(serde_json::Value::Number(1710000001i64.into()))
        );
        assert_eq!(cache.mcp_servers, Some(vec![sample_mcp_server()]));
        assert_eq!(cache.installed_skills, Some(Vec::new()));
        assert!(cache.usage_analytics.is_some());
    }

    #[test]
    fn store_bootstrap_installed_skills_recovers_from_bad_cache_json() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-store-skills");
        directories::ensure_app_directories(&repo).expect("create dirs");
        repo.fs()
            .write_string(&repo.paths().bootstrap_cache_path, "{")
            .expect("write bad cache");

        store_bootstrap_installed_skills(&repo, 1710000002, vec![sample_installed_skill()])
            .expect("store skills cache");

        let cache = load_bootstrap_cache(&repo).expect("reload cache");
        assert_eq!(
            cache.written_at,
            Some(serde_json::Value::Number(1710000002i64.into()))
        );
        assert_eq!(cache.installed_skills, Some(vec![sample_installed_skill()]));
        assert!(cache.mcp_servers.is_none());
    }

    #[test]
    fn store_bootstrap_usage_analytics_preserves_typed_cache_slices() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-store-usage");
        directories::ensure_app_directories(&repo).expect("create dirs");
        repo.fs()
            .write_string(
                &repo.paths().bootstrap_cache_path,
                r#"{
  "mcpServers": [],
  "installedSkills": []
}"#,
            )
            .expect("write cache");

        let usage = serde_json::json!({
            "today": {
                "sessionCount": 0,
                "totalFileSize": 0,
                "activeMinutesEstimate": 0
            },
            "dailyActivity": []
        });
        store_bootstrap_usage_analytics(&repo, 1710000003, usage.clone())
            .expect("store usage cache");

        let cache = load_bootstrap_cache(&repo).expect("reload cache");
        assert_eq!(
            cache.written_at,
            Some(serde_json::Value::Number(1710000003i64.into()))
        );
        assert_eq!(cache.usage_analytics, Some(usage));
        assert_eq!(cache.mcp_servers, Some(Vec::new()));
        assert_eq!(cache.installed_skills, Some(Vec::new()));
    }

    #[test]
    fn store_bootstrap_snapshot_progressive_preserves_typed_cache_slices() {
        let repo = Repository::with_temp_file_system("bootstrap-cache-store-snapshot");
        directories::ensure_app_directories(&repo).expect("create dirs");
        repo.fs()
            .write_string(
                &repo.paths().bootstrap_cache_path,
                r#"{
  "usageAnalytics": {"dailyData": []},
  "mcpServers": [],
  "installedSkills": []
}"#,
            )
            .expect("write cache");

        let snapshot = serde_json::json!({
            "status": {
                "usageSource": "local"
            },
            "accounts": []
        });
        store_bootstrap_snapshot_progressive(&repo, 1710000004, snapshot.clone())
            .expect("store snapshot cache");

        let cache = load_bootstrap_cache(&repo).expect("reload cache");
        assert_eq!(
            cache.written_at,
            Some(serde_json::Value::Number(1710000004i64.into()))
        );
        assert_eq!(cache.snapshot_progressive, Some(snapshot));
        assert!(cache.usage_analytics.is_some());
        assert_eq!(cache.mcp_servers, Some(Vec::new()));
        assert_eq!(cache.installed_skills, Some(Vec::new()));
    }

    fn sample_mcp_server() -> McpServerSummary {
        McpServerSummary {
            name: "filesystem".to_string(),
            transport: McpTransport::Stdio,
            enabled: true,
            source_path: "config.toml".to_string(),
            command: Some("server".to_string()),
            args: vec!["--stdio".to_string()],
            url: None,
            headers: HashMap::new(),
            environment: HashMap::new(),
        }
    }

    fn sample_installed_skill() -> InstalledSkillSummary {
        InstalledSkillSummary {
            id: "review".to_string(),
            name: "review".to_string(),
            title: Some("审查".to_string()),
            summary: None,
            relative_path: "review".to_string(),
            directory_path: "skills/review".to_string(),
            skill_file_path: "skills/review/SKILL.md".to_string(),
            updated_at: Some(1710000000),
        }
    }
}
