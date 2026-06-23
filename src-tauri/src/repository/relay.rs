use crate::contracts::RelayPassthroughAuditEntryPayload;
use crate::core::model::relay::{
    RelayCodexApiSlotDomain, RelayProviderDomain, RelayProxyDomain, RelayStateDomain,
    RelayTestDomain, RELAY_DEFAULT_IDE, RELAY_SCHEMA_VERSION,
};
use crate::core::{error::CoreError, relay as relay_core};
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
    pub config_toml_syntax_valid: bool,
    pub config_toml_syntax_reason: Option<String>,
    pub config_profile_conflict: bool,
    pub config_profile_conflict_reason: Option<String>,
    pub managed_block_exists: bool,
    pub router_enabled: bool,
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
    codex_api_login: bool,
    #[serde(default)]
    codex_api_slots: Vec<RelayCodexApiSlotDomain>,
    #[serde(default)]
    display_tag_global: Option<String>,
    #[serde(default)]
    display_tag_woyao: Option<String>,
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

pub fn record_provider_health(
    repo: &Repository,
    provider_id: &str,
    test: &RelayTestDomain,
    tested_at: i64,
) -> Result<Option<RelayProviderDomain>, CoreError> {
    let mut state = load_relay_state(repo)?;
    let provider = state
        .providers
        .iter_mut()
        .find(|item| item.id == provider_id)
        .map(|item| {
            item.health_score = Some(if test.ok { 100 } else { 0 });
            item.latency_ms = Some(test.latency_ms);
            item.last_tested_at = Some(tested_at);
            item.last_error = test.error_message.clone();
            item.models_sample = test.models.iter().take(5).cloned().collect();
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

pub fn set_codex_api_login(
    repo: &Repository,
    enabled: bool,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    state.codex_api_login = enabled;
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn set_codex_api_slots(
    repo: &Repository,
    slots: Vec<RelayCodexApiSlotDomain>,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    state.codex_api_slots = slots;
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn set_relay_display_tags(
    repo: &Repository,
    global: Option<Option<String>>,
    woyao: Option<Option<String>>,
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    relay_core::apply_display_tag_updates(&mut state, global, woyao);
    save_relay_state(repo, &state)?;
    Ok(state)
}

pub fn reorder_relay_providers(
    repo: &Repository,
    ordered_ids: &[String],
) -> Result<RelayStateDomain, CoreError> {
    let mut state = load_relay_state(repo)?;
    relay_core::reorder_relay_providers(&mut state, ordered_ids)?;
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
pub fn inject_router_config(repo: &Repository) -> Result<Vec<String>, CoreError> {
    let snapshot = load_relay_repository_snapshot(repo);
    let config_path = Path::new(&snapshot.codex_config_path);
    let current = if repo.fs().exists(config_path) {
        repo.fs().read_to_string(config_path)?
    } else {
        String::new()
    };
    let next = relay_core::render_managed_router_config(&current, &snapshot.catalog_path);
    repo.fs().write_string(config_path, &next)?;

    let catalog_path = Path::new(&snapshot.catalog_path);
    if !repo.fs().exists(catalog_path) {
        repo.fs().write_string(catalog_path, "{}\n")?;
    }

    Ok(vec![
        "config.toml managed router block written".to_string(),
        "codex_router_catalog.json ensured".to_string(),
    ])
}

pub fn remove_router_config(repo: &Repository) -> Result<Vec<String>, CoreError> {
    let snapshot = load_relay_repository_snapshot(repo);
    let config_path = Path::new(&snapshot.codex_config_path);
    if !repo.fs().exists(config_path) {
        return Ok(vec!["config.toml not present".to_string()]);
    }

    let current = repo.fs().read_to_string(config_path)?;
    let next = relay_core::strip_managed_router_config(&current);
    if next != current {
        repo.fs().write_string(config_path, &next)?;
        return Ok(vec!["managed router config removed".to_string()]);
    }

    Ok(vec!["managed router config already absent".to_string()])
}

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
    let analysis = relay_core::analyze_router_config(
        config.as_deref(),
        snapshot.codex_config_exists,
        snapshot.catalog_exists,
    );
    let router_enabled = load_relay_state(repo)
        .map(|state| state.codex_router_enabled)
        .unwrap_or(false);

    RelayDiagnosticSkeleton {
        source_path: snapshot.codex_config_path,
        catalog_source_path: Some(snapshot.catalog_path),
        checked_at: None,
        diagnostic_boundary: format!("relay.repository.{command}.pending"),
        pending: true,
        codex_provider_count: analysis.codex_provider_count,
        catalog_exists: snapshot.catalog_exists,
        config_toml_has_router: analysis.config_toml_has_router,
        config_toml_has_catalog: analysis.config_toml_has_catalog,
        config_toml_syntax_valid: analysis.config_toml_syntax_valid,
        config_toml_syntax_reason: analysis.config_toml_syntax_reason,
        config_profile_conflict: analysis.config_profile_conflict,
        config_profile_conflict_reason: analysis.config_profile_conflict_reason,
        managed_block_exists: analysis.managed_block_exists,
        router_enabled,
        user_top_level_profile: analysis.user_top_level_profile,
        config_stale_reason: analysis.config_stale_reason,
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
            codex_api_login: state.codex_api_login,
            codex_api_slots: state.codex_api_slots.clone(),
            display_tag_global: state.display_tag_global.clone(),
            display_tag_woyao: state.display_tag_woyao.clone(),
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
            codex_api_login: self.codex_api_login,
            codex_api_slots: self.codex_api_slots,
            display_tag_global: self.display_tag_global,
            display_tag_woyao: self.display_tag_woyao,
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
        codex_api_login: false,
        codex_api_slots: Vec::new(),
        display_tag_global: None,
        display_tag_woyao: None,
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

    fn provider_fixture(id: &str) -> RelayProviderDomain {
        RelayProviderDomain {
            id: id.to_string(),
            ide: RELAY_DEFAULT_IDE.to_string(),
            name: format!("Provider {id}"),
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
        }
    }

    #[test]
    fn relay_display_tags_persist_to_config_document() {
        let repo = Repository::with_temp_file_system("relay-display-tags-persist");

        set_relay_display_tags(&repo, Some(Some("Global Tag".to_string())), Some(None))
            .expect("save display tags");

        let state = load_relay_state(&repo).expect("load display tags");
        assert_eq!(state.display_tag_global, Some("Global Tag".to_string()));
        assert_eq!(state.display_tag_woyao, None);
    }

    #[test]
    fn codex_api_config_fields_persist_and_survive_other_relay_writes() {
        let repo = Repository::with_temp_file_system("relay-codex-api-config-persist");

        set_codex_api_login(&repo, true).expect("save api login");
        set_codex_api_slots(
            &repo,
            vec![RelayCodexApiSlotDomain {
                provider_id: "provider-a".to_string(),
                model: "model-a".to_string(),
            }],
        )
        .expect("save api slots");
        set_router_enabled(&repo, true).expect("save router enabled");

        let state = load_relay_state(&repo).expect("load relay state");
        assert!(state.codex_api_login);
        assert_eq!(
            state.codex_api_slots,
            vec![RelayCodexApiSlotDomain {
                provider_id: "provider-a".to_string(),
                model: "model-a".to_string(),
            }]
        );

        let snapshot = load_relay_repository_snapshot(&repo);
        let raw = repo
            .fs()
            .read_to_string(Path::new(&snapshot.relay_config_path))
            .expect("read relay config");
        let json: serde_json::Value = serde_json::from_str(&raw).expect("parse relay config");
        assert_eq!(json["codexApiLogin"], true);
        assert_eq!(json["codexApiSlots"][0]["providerId"], "provider-a");
        assert_eq!(json["codexApiSlots"][0]["model"], "model-a");
    }

    #[test]
    fn reorder_relay_providers_persists_order() {
        let repo = Repository::with_temp_file_system("relay-reorder-persist");
        upsert_provider(&repo, provider_fixture("a")).expect("save a");
        upsert_provider(&repo, provider_fixture("b")).expect("save b");
        upsert_provider(&repo, provider_fixture("c")).expect("save c");

        reorder_relay_providers(&repo, &["c".to_string(), "a".to_string(), "b".to_string()])
            .expect("persist reorder");

        let state = load_relay_state(&repo).expect("load reordered state");
        assert_eq!(
            state
                .providers
                .iter()
                .map(|provider| provider.id.as_str())
                .collect::<Vec<_>>(),
            vec!["c", "a", "b"]
        );
    }
}
