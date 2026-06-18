use crate::core::error::CoreError;
use crate::core::model::analytics::{PublicQuotaHistory, PublicQuotaHistoryPoint};
use crate::repository::Repository;
use serde::{Deserialize, Serialize};

pub(crate) struct QuotaRepository;

pub(crate) trait QuotaRepositoryBoundary {}

impl QuotaRepositoryBoundary for QuotaRepository {}

/// 配额仓储只探测 bootstrap cache 这类公开本地缓存；没有证据时不构造配额点。
pub fn load_public_quota_history(
    repo: &Repository,
    account_key: Option<String>,
) -> Result<PublicQuotaHistory, CoreError> {
    let path = &repo.paths().quota_history_path;
    if !repo.fs().exists(path) {
        return Ok(PublicQuotaHistory::empty(account_key, false));
    }

    let cutoff = current_timestamp().saturating_sub(7 * 24 * 60 * 60);
    let raw = repo.fs().read_to_string(path)?;
    let mut points = raw
        .lines()
        .filter_map(|line| parse_quota_history_line(line, cutoff, account_key.as_deref()))
        .collect::<Vec<_>>();
    points.sort_by(|left, right| left.timestamp.cmp(&right.timestamp));
    compact_quota_history_if_needed(repo, cutoff);

    Ok(PublicQuotaHistory {
        account_key,
        cache_source_available: true,
        points,
    })
}

fn parse_quota_history_line(
    line: &str,
    cutoff: i64,
    account_filter: Option<&str>,
) -> Option<PublicQuotaHistoryPoint> {
    let trimmed = line.trim();
    if trimmed.is_empty() {
        return None;
    }
    let record = serde_json::from_str::<QuotaHistoryPointRecord>(trimmed).ok()?;
    if record.timestamp < cutoff {
        return None;
    }
    if account_filter.is_some_and(|filter| record.account_key != filter) {
        return None;
    }
    Some(record.into_public())
}

fn compact_quota_history_if_needed(repo: &Repository, cutoff: i64) {
    let path = &repo.paths().quota_history_path;
    let Ok(raw) = repo.fs().read_to_string(path) else {
        return;
    };
    let lines = raw
        .lines()
        .map(str::trim)
        .filter(|line| !line.is_empty())
        .collect::<Vec<_>>();
    if lines.len() < 2000 {
        return;
    }

    let retained = lines
        .into_iter()
        .filter(|line| {
            serde_json::from_str::<QuotaHistoryPointRecord>(line)
                .map(|record| record.timestamp >= cutoff)
                .unwrap_or(false)
        })
        .collect::<Vec<_>>();
    let next = if retained.is_empty() {
        String::new()
    } else {
        format!("{}\n", retained.join("\n"))
    };
    let _ = repo.fs().write_string(path, &next);
}

fn current_timestamp() -> i64 {
    std::time::SystemTime::now()
        .duration_since(std::time::UNIX_EPOCH)
        .map(|duration| duration.as_secs() as i64)
        .unwrap_or(0)
}

#[derive(Debug, Clone, Deserialize, Serialize)]
#[serde(rename_all = "camelCase")]
struct QuotaHistoryPointRecord {
    timestamp: i64,
    account_key: String,
    primary_used_percent: Option<f64>,
    secondary_used_percent: Option<f64>,
}

impl QuotaHistoryPointRecord {
    fn into_public(self) -> PublicQuotaHistoryPoint {
        PublicQuotaHistoryPoint {
            timestamp: self.timestamp,
            account_key: self.account_key,
            primary_used_percent: self.primary_used_percent,
            secondary_used_percent: self.secondary_used_percent,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::adapter::fake_fs::FakeFileSystem;
    use crate::repository::paths::RepositoryPaths;
    use std::path::PathBuf;

    #[test]
    fn load_public_quota_history_filters_account_and_corrupt_lines() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let history = paths.quota_history_path.clone();
        let now = current_timestamp();
        let fs = FakeFileSystem::default().with_file(
            history,
            [
                format!(
                    r#"{{"timestamp":{},"accountKey":"a","primaryUsedPercent":10.0,"secondaryUsedPercent":20.0}}"#,
                    now
                ),
                format!(
                    r#"{{"timestamp":{},"accountKey":"b","primaryUsedPercent":30.0,"secondaryUsedPercent":40.0}}"#,
                    now
                ),
                "not-json".to_string(),
            ]
            .join("\n"),
        );
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let history = load_public_quota_history(&repo, Some("a".to_string())).expect("history");

        assert_eq!(history.points.len(), 1);
        assert_eq!(history.points[0].account_key, "a");
        assert_eq!(history.points[0].primary_used_percent, Some(10.0));
    }

    #[test]
    fn load_public_quota_history_compacts_large_files_to_recent_valid_lines() {
        let codex_home = PathBuf::from("/codex");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let history_path = paths.quota_history_path.clone();
        let now = current_timestamp();
        let old = now.saturating_sub(9 * 24 * 60 * 60);
        let raw = (0..2001)
            .map(|index| {
                if index % 2 == 0 {
                    format!(
                        r#"{{"timestamp":{},"accountKey":"a","primaryUsedPercent":null,"secondaryUsedPercent":null}}"#,
                        old
                    )
                } else {
                    format!(
                        r#"{{"timestamp":{},"accountKey":"a","primaryUsedPercent":1.0,"secondaryUsedPercent":2.0}}"#,
                        now
                    )
                }
            })
            .collect::<Vec<_>>()
            .join("\n");
        let fs = FakeFileSystem::default().with_file(history_path.clone(), raw);
        let repo = Repository::with_paths_and_file_system(paths, fs);

        let history = load_public_quota_history(&repo, Some("a".to_string())).expect("history");
        let compacted = repo.fs().read_to_string(&history_path).expect("compacted");

        assert_eq!(history.points.len(), 1000);
        assert!(compacted
            .lines()
            .all(|line| line.contains(&now.to_string())));
        assert!(compacted.ends_with('\n'));
    }
}
