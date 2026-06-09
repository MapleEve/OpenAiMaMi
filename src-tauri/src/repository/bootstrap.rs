use crate::contracts::BootstrapCacheFile;
use crate::core::error::CoreError;
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

#[cfg(test)]
mod tests {
    use super::*;

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
        repo.paths().ensure_app_directories().expect("create dirs");
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
}
