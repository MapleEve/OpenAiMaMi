use crate::core::model::analytics::PublicQuotaHistory;
use crate::repository::{bootstrap, Repository};

pub(crate) struct QuotaRepository;

pub(crate) trait QuotaRepositoryBoundary {}

impl QuotaRepositoryBoundary for QuotaRepository {}

/// 配额仓储只探测 bootstrap cache 这类公开本地缓存；没有证据时不构造配额点。
pub fn load_public_quota_history(
    repo: &Repository,
    account_key: Option<String>,
) -> PublicQuotaHistory {
    let cache_source_available = bootstrap::load_bootstrap_cache(repo)
        .map(|cache| cache.usage_analytics.is_some())
        .unwrap_or(false);
    PublicQuotaHistory::empty(account_key, cache_source_available)
}
