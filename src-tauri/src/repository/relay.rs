use crate::contracts::RelayPassthroughAuditEntryPayload;
use crate::core::error::CoreError;
use crate::core::model::relay::{
    RelayProviderDomain, RelayProxyDomain, RelayStateDomain, RELAY_DEFAULT_IDE,
    RELAY_SCHEMA_VERSION,
};
use crate::repository::Repository;
use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::path::Path;

pub(crate) struct RelayRepository;

pub(crate) trait RelayRepositoryBoundary {}

impl RelayRepositoryBoundary for RelayRepository {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayDiagnosticSkeleton {
    pub source_path: String,
    pub catalog_source_path: Option<String>,
    pub checked_at: Option<String>,
    pub diagnostic_boundary: String,
    pub pending: bool,
    pub codex_provider_count: i32,
    pub catalog_exists: bool,
    pub config_toml_has_router: bool,
    pub config_toml_has_catalog: bool,
    pub managed_block_exists: bool,
    pub user_top_level_profile: Option<String>,
    pub config_stale_reason: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayRepositorySnapshot {
    pub source_path: String,
    pub relay_config_path: String,
    pub codex_config_path: String,
    pub catalog_path: String,
    pub passthrough_audit_path: String,
    pub relay_config_exists: bool,
    pub codex_config_exists: bool,
    pub catalog_exists: bool,
    pub passthrough_audit_exists: bool,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct RelayConfigDocument {
    #[serde(default = "default_schema_version")]
    schema_version: i32,
    #[serde(default)]
    providers: Vec<RelayProviderDomain>,
    #[serde(default)]
    active_by_ide: HashMap<String, Vec<String>>,
    #[serde(default)]
    proxy: RelayProxyDomain,
    #[serde(default)]
    codex_router_enabled: bool,
    #[serde(default)]
    block_official_passthrough: bool,
}

/// relay 仓储只暴露可替换的文件来源边界，不在这里实现代理状态机。
pub fn load_relay_repository_snapshot(repo: &Repository) -> RelayRepositorySnapshot {
    let paths = repo.paths();
    let relay_config_path = paths.app_data_dir.join("relay-config.json");
    let catalog_path = paths.codex_home.join("codex_router_catalog.json");
    let passthrough_audit_path = passthrough_audit_source_path(repo);

    RelayRepositorySnapshot {
        source_path: paths.app_data_dir.display().to_string(),
        relay_config_path: relay_config_path.display().to_string(),
        codex_config_path: paths.config_path.display().to_string(),
        catalog_path: catalog_path.display().to_string(),
        passthrough_audit_path: passthrough_audit_path.clone(),
        relay_config_exists: repo.fs().exists(&relay_config_path),
        codex_config_exists: repo.fs().exists(&paths.config_path),
        catalog_exists: repo.fs().exists(&catalog_path),
        passthrough_audit_exists: repo.fs().exists(Path::new(&passthrough_audit_path)),
    }
}

pub fn load_relay_state(repo: &Repository) -> Result<RelayStateDomain, CoreError> {
    let snapshot = load_relay_repository_snapshot(repo);
    if !snapshot.relay_config_exists {
        return Ok(empty_state(snapshot.relay_config_path));
    }

    let raw = repo
        .fs()
        .read_to_string(Path::new(&snapshot.relay_config_path))?;
    let document: RelayConfigDocument = serde_json::from_str(&raw)?;
    Ok(document.into_state(snapshot.relay_config_path))
}

pub fn save_relay_state(repo: &Repository, state: &RelayStateDomain) -> Result<(), CoreError> {
    let snapshot = load_relay_repository_snapshot(repo);
    let document = RelayConfigDocument::from_state(state);
    let content = serde_json::to_string_pretty(&document)?;
    repo.fs()
        .write_string(Path::new(&snapshot.relay_config_path), &content)
}

pub fn upsert_provider(
    repo: &Repository,
    provider: RelayProviderDomain,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    let provider_id = provider.id.clone();
    if let Some(existing) = state
        .providers
        .iter_mut()
        .find(|item| item.id == provider_id)
    {
        *existing = provider;
    } else {
        state.providers.push(provider);
    }
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn delete_provider(
    repo: &Repository,
    provider_id: &str,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    state
        .providers
        .retain(|provider| provider.id != provider_id);
    for providers in state.active_by_ide.values_mut() {
        providers.retain(|active_id| active_id != provider_id);
    }
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn activate_provider(
    repo: &Repository,
    provider_id: &str,
    ide: &str,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    if state
        .providers
        .iter()
        .any(|provider| provider.id == provider_id)
    {
        state
            .active_by_ide
            .insert(normalize_ide(ide), vec![provider_id.to_string()]);
    }
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn deactivate_provider(
    repo: &Repository,
    provider_id: &str,
    ide: &str,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    if let Some(providers) = state.active_by_ide.get_mut(&normalize_ide(ide)) {
        providers.retain(|active_id| active_id != provider_id);
    }
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn set_provider_network(
    repo: &Repository,
    provider_id: &str,
    network: &str,
) -> Result<Option<RelayProviderDomain>, CoreError> {
    let mut state = load_relay_state(repo)?;
    let provider = state
        .providers
        .iter_mut()
        .find(|item| item.id == provider_id)
        .map(|item| {
            item.network = normalize_network(network);
            item.clone()
        });
    save_relay_state(repo, &state)?;
    Ok(provider)
}

pub fn set_router_enabled(repo: &Repository, enabled: bool) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    state.codex_router_enabled = enabled;
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn set_passthrough_policy(
    repo: &Repository,
    blocked: bool,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    state.block_official_passthrough = blocked;
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn export_config(
    repo: &Repository,
    file_path: &str,
    _include_api_keys: bool,
) -> Result<(RelayStateDomain, i32), CoreError> {
    let state = load_relay_state(repo)?;
    let document = RelayConfigDocument::from_state(&state);
    let content = serde_json::to_string_pretty(&document)?;
    repo.fs().write_string(Path::new(file_path), &content)?;
    Ok((state.clone(), state.providers.len() as i32))
}

pub fn import_config(
    repo: &Repository,
    file_path: &str,
) -> Result<(RelayStateDomain, i32), CoreError> {
    let raw = repo.fs().read_to_string(Path::new(file_path))?;
    let document: RelayConfigDocument = serde_json::from_str(&raw)?;
    let state = document.into_state(load_relay_repository_snapshot(repo).relay_config_path);
    let total = state.providers.len() as i32;
    save_relay_state(repo, &state)?;
    Ok((state, total))
}

/// relay 官方直连审计路径只来自 RepositoryPaths，真实读写通过可替换 FS 边界补齐。
pub fn passthrough_audit_source_path(repo: &Repository) -> String {
    repo.paths()
        .codex_home
        .join("passthrough-audit.jsonl")
        .display()
        .to_string()
}

/// 当前公开范围没有审计日志原始恢复证据，仓储层返回空集合并保留来源路径边界。
pub fn load_passthrough_audit_log(
    repo: &Repository,
    limit: u32,
) -> Result<Vec<RelayPassthroughAuditEntryPayload>, CoreError> {
    let source_path = passthrough_audit_source_path(repo);
    let path = Path::new(&source_path);
    if !repo.fs().exists(path) {
        return Ok(Vec::new());
    }

    let content = repo.fs().read_to_string(path)?;
    let entries = content
        .lines()
        .map(str::trim)
        .filter(|line| !line.is_empty())
        .map(serde_json::from_str::<RelayPassthroughAuditEntryPayload>)
        .collect::<Result<Vec<_>, _>>()?;
    let start = entries.len().saturating_sub(limit as usize);
    Ok(entries[start..].to_vec())
}

/// 当前公开范围只记录调用意图边界，不写入未恢复的 relay 配置状态。
pub fn record_passthrough_policy_intent(repo: &Repository, blocked: bool) -> bool {
    let _source_path = passthrough_audit_source_path(repo);
    blocked
}

/// router 诊断仓储边界只提供可替换路径和空诊断源，不探测真实用户环境。
pub fn load_router_diagnostic_skeleton(
    repo: &Repository,
    command: &str,
) -> RelayDiagnosticSkeleton {
    let snapshot = load_relay_repository_snapshot(repo);
    let config = repo
        .fs()
        .read_to_string(Path::new(&snapshot.codex_config_path))
        .ok();
    let config_toml_has_router = config.as_deref().map(config_has_router).unwrap_or(false);
    let config_toml_has_catalog = config.as_deref().map(config_has_catalog).unwrap_or(false);
    let managed_block_exists = config
        .as_deref()
        .map(config_has_managed_block)
        .unwrap_or(false);
    let codex_provider_count = config.as_deref().map(count_model_providers).unwrap_or(0);
    let user_top_level_profile = config.as_deref().and_then(top_level_profile);
    let config_stale_reason = config_stale_reason(
        snapshot.codex_config_exists,
        snapshot.catalog_exists,
        config_toml_has_router,
        config_toml_has_catalog,
    );

    RelayDiagnosticSkeleton {
        source_path: snapshot.codex_config_path,
        catalog_source_path: Some(snapshot.catalog_path),
        checked_at: None,
        diagnostic_boundary: format!("relay.repository.{command}.pending"),
        pending: true,
        codex_provider_count,
        catalog_exists: snapshot.catalog_exists,
        config_toml_has_router,
        config_toml_has_catalog,
        managed_block_exists,
        user_top_level_profile,
        config_stale_reason,
    }
}

impl RelayConfigDocument {
    fn from_state(state: &RelayStateDomain) -> Self {
        Self {
            schema_version: state.schema_version,
            providers: state.providers.clone(),
            active_by_ide: state.active_by_ide.clone(),
            proxy: state.proxy.clone(),
            codex_router_enabled: state.codex_router_enabled,
            block_official_passthrough: state.block_official_passthrough,
        }
    }

    fn into_state(self, source_path: String) -> RelayStateDomain {
        RelayStateDomain {
            schema_version: self.schema_version,
            providers: self.providers,
            active_by_ide: normalize_active_by_ide(self.active_by_ide),
            proxy: self.proxy,
            codex_router_enabled: self.codex_router_enabled,
            block_official_passthrough: self.block_official_passthrough,
            source_path,
        }
    }
}

fn empty_state(source_path: String) -> RelayStateDomain {
    RelayStateDomain {
        schema_version: RELAY_SCHEMA_VERSION,
        providers: Vec::new(),
        active_by_ide: normalize_active_by_ide(HashMap::new()),
        proxy: RelayProxyDomain::default(),
        codex_router_enabled: false,
        block_official_passthrough: false,
        source_path,
    }
}

fn normalize_active_by_ide(
    mut active_by_ide: HashMap<String, Vec<String>>,
) -> HashMap<String, Vec<String>> {
    active_by_ide
        .entry(RELAY_DEFAULT_IDE.to_string())
        .or_default();
    active_by_ide
}

fn normalize_ide(ide: &str) -> String {
    let trimmed = ide.trim();
    if trimmed.is_empty() {
        RELAY_DEFAULT_IDE.to_string()
    } else {
        trimmed.to_string()
    }
}

fn normalize_network(network: &str) -> String {
    match network.trim() {
        "direct" => "direct".to_string(),
        _ => "system".to_string(),
    }
}

fn default_schema_version() -> i32 {
    RELAY_SCHEMA_VERSION
}

fn config_has_router(config: &str) -> bool {
    config.lines().any(|line| {
        let line = line.trim();
        line.contains("model_provider") || line.contains("model_provider_router")
    })
}

fn config_has_catalog(config: &str) -> bool {
    config
        .lines()
        .any(|line| line.trim().starts_with("model_catalog_json"))
}

fn config_has_managed_block(config: &str) -> bool {
    config.contains("# >>> aimami-relay managed start")
        || config.contains("# >>> aimami-relay codex-router top start")
}

fn count_model_providers(config: &str) -> i32 {
    config
        .lines()
        .filter(|line| {
            let line = line.trim();
            line.starts_with("[model_providers.") || line.starts_with("[model_providers\"")
        })
        .count() as i32
}

fn top_level_profile(config: &str) -> Option<String> {
    config.lines().find_map(|line| {
        let line = line.trim();
        let value = line.strip_prefix("profile")?.trim_start();
        let value = value.strip_prefix('=')?.trim();
        Some(value.trim_matches('"').to_string()).filter(|item| !item.is_empty())
    })
}

fn config_stale_reason(
    config_exists: bool,
    catalog_exists: bool,
    has_router: bool,
    has_catalog: bool,
) -> Option<String> {
    if !config_exists {
        return Some("config_toml_missing".to_string());
    }
    if !has_router {
        return Some("router_missing".to_string());
    }
    if !has_catalog {
        return Some("catalog_key_missing".to_string());
    }
    if !catalog_exists {
        return Some("catalog_file_missing".to_string());
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn passthrough_audit_path_uses_codex_home() {
        let repo = Repository::with_temp_file_system("relay-audit-path");

        assert_eq!(
            passthrough_audit_source_path(&repo),
            repo.paths()
                .codex_home
                .join("passthrough-audit.jsonl")
                .display()
                .to_string()
        );
    }

    #[test]
    fn load_passthrough_audit_log_returns_empty_when_missing() {
        let repo = Repository::with_temp_file_system("relay-audit-missing");

        assert_eq!(
            load_passthrough_audit_log(&repo, 50).expect("load missing audit"),
            Vec::<RelayPassthroughAuditEntryPayload>::new()
        );
    }

    #[test]
    fn load_passthrough_audit_log_reads_jsonl_tail() {
        let repo = Repository::with_temp_file_system("relay-audit-jsonl");
        let path = passthrough_audit_source_path(&repo);
        repo.fs()
            .write_string(
                Path::new(&path),
                r#"{"timestamp":"2026-06-01T08:00:00.000Z","event":"request","direction":"outbound","providerId":"openai","model":"gpt-4.1","blocked":false,"message":null}
{"timestamp":"2026-06-01T08:00:01.000Z","event":"response","direction":"inbound","providerId":"openai","model":"gpt-4.1","blocked":false,"message":"ok"}
{"timestamp":"2026-06-01T08:00:02.000Z","event":"blocked","direction":"outbound","providerId":null,"model":null,"blocked":true,"message":"official passthrough blocked"}"#,
            )
            .expect("write audit fixture");

        let entries = load_passthrough_audit_log(&repo, 2).expect("load audit log");

        assert_eq!(entries.len(), 2);
        assert_eq!(entries[0].event, "response");
        assert_eq!(entries[1].event, "blocked");
        assert!(entries[1].blocked);
    }
}
