use crate::core::error::CoreError;
use crate::core::model::analytics::PublicQuotaHistoryPoint;
use crate::core::model::relay::{RelayProviderDomain, RELAY_DEFAULT_IDE};
use crate::repository::{
    accounts as accounts_repository, quota as quota_repository, relay as relay_repository,
    Repository,
};

pub(crate) struct TrayRepository;

pub(crate) trait TrayRepositoryBoundary {}

impl TrayRepositoryBoundary for TrayRepository {}

#[derive(Debug, Clone, Default, PartialEq)]
pub(crate) struct TrayQuotaFact {
    pub active_account_key: Option<String>,
    pub active_provider_label: Option<String>,
    pub model_label: Option<String>,
    pub quota_point: Option<PublicQuotaHistoryPoint>,
}

/// tray 仓储只聚合公开本地文件事实，不读取运行时 relay 状态或平台托盘对象。
pub(crate) fn load_tray_quota_fact(repo: &Repository) -> Result<TrayQuotaFact, CoreError> {
    let active_account_key = accounts_repository::load_registry(repo)?.active_key();
    let relay_state = relay_repository::load_relay_state(repo)?;
    let active_provider = relay_state
        .active_by_ide
        .get(RELAY_DEFAULT_IDE)
        .and_then(|active_ids| active_ids.first())
        .and_then(|active_id| {
            relay_state
                .providers
                .iter()
                .find(|provider| provider.id == *active_id)
        });
    let quota_point =
        quota_repository::load_latest_public_quota_point(repo, active_account_key.clone())?;

    Ok(TrayQuotaFact {
        active_account_key,
        active_provider_label: active_provider.and_then(provider_label),
        model_label: active_provider.and_then(model_label),
        quota_point,
    })
}

fn provider_label(provider: &RelayProviderDomain) -> Option<String> {
    first_non_empty([Some(provider.name.as_str()), Some(provider.id.as_str())])
}

fn model_label(provider: &RelayProviderDomain) -> Option<String> {
    first_non_empty([Some(provider.model.as_str())])
}

fn first_non_empty<const N: usize>(values: [Option<&str>; N]) -> Option<String> {
    values
        .into_iter()
        .flatten()
        .map(str::trim)
        .find(|value| !value.is_empty())
        .map(ToString::to_string)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::core::model::accounts::{AccountRegistryDocument, AccountRegistryItem};
    use crate::core::model::relay::{RelayProviderDomain, RelayProxyDomain};
    use crate::repository::accounts as accounts_repository;
    use crate::repository::relay as relay_repository;
    use std::collections::HashMap;

    #[test]
    fn load_tray_quota_fact_reads_public_files_without_runtime_state() {
        let repo = Repository::with_temp_file_system("tray-quota-fact");
        accounts_repository::save_registry(
            &repo,
            &AccountRegistryDocument {
                schema_version: 1,
                active_account_key: Some("account-a".to_string()),
                items: vec![AccountRegistryItem {
                    account_key: "account-a".to_string(),
                    active: true,
                    ..AccountRegistryItem::default()
                }],
                ..AccountRegistryDocument::default()
            },
        )
        .expect("write registry");
        relay_repository::save_relay_state(
            &repo,
            &crate::core::model::relay::RelayStateDomain {
                schema_version: crate::core::model::relay::RELAY_SCHEMA_VERSION,
                providers: vec![RelayProviderDomain {
                    id: "provider-a".to_string(),
                    ide: RELAY_DEFAULT_IDE.to_string(),
                    name: "Provider A".to_string(),
                    base_url: "https://relay.example/v1".to_string(),
                    api_key_stored: false,
                    model: "model-a".to_string(),
                    wire_api: "openai-chat".to_string(),
                    network: "system".to_string(),
                    health_score: None,
                    latency_ms: None,
                    last_tested_at: None,
                    last_error: None,
                    models_sample: Vec::new(),
                }],
                active_by_ide: HashMap::from([(
                    RELAY_DEFAULT_IDE.to_string(),
                    vec!["provider-a".to_string()],
                )]),
                proxy: RelayProxyDomain::default(),
                codex_router_enabled: false,
                block_official_passthrough: false,
                source_path: repo
                    .paths()
                    .app_data_dir
                    .join("relay-config.json")
                    .display()
                    .to_string(),
            },
        )
        .expect("write relay state");
        repo.fs()
            .write_string(
                &repo.paths().quota_history_path,
                r#"{"timestamp":1900000000,"accountKey":"account-a","primaryUsedPercent":42.4,"secondaryUsedPercent":55.0}
{"timestamp":1900000001,"accountKey":"account-b","primaryUsedPercent":99.0,"secondaryUsedPercent":99.0}
{"timestamp":1900000002,"accountKey":"account-a","primaryUsedPercent":43.6,"secondaryUsedPercent":55.0}"#,
            )
            .expect("write quota history");

        let fact = load_tray_quota_fact(&repo).expect("load tray quota fact");

        assert_eq!(fact.active_account_key, Some("account-a".to_string()));
        assert_eq!(fact.active_provider_label, Some("Provider A".to_string()));
        assert_eq!(fact.model_label, Some("model-a".to_string()));
        assert_eq!(
            fact.quota_point.expect("quota point").primary_used_percent,
            Some(43.6)
        );
    }
}
