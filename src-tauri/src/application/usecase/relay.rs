use crate::application::{
    ports::RelayPlatformPort,
    service::{current_timestamp, default_relay_platform},
};
use crate::contracts::{
    CoreWarning, RelayActivePayload, RelayExportPayload, RelayImportPayload,
    RelayPassthroughAuditEntryPayload, RelayProviderDraftInput, RelayProxyPayload,
    RelayRouterMigrationPayload, RelayRouterTogglePayload, RelayStatePayload, RelayTestPayload,
};
use crate::core::{
    error::CoreError,
    model::relay::{RelayDraftDomain, RELAY_SCHEMA_VERSION},
    relay as relay_core,
};
use crate::repository::{config as config_repository, relay as relay_repository, Repository};
use serde_json::Value;

mod diagnostics;
mod models;
mod payload;
mod provider;

pub use self::diagnostics::{
    diagnose_codex_router, fix_codex_router_issue, run_codex_router_diagnostics,
};
pub use self::models::fetch_relay_models_draft;
use self::payload::{
    active_payload_from_state, core_state_from_repo, draft_from_input, draft_from_provider,
    load_provider_for_test, provider_payload_from_domain, proxy_payload_from_domain,
    relay_test_error, relay_test_error_warning, relay_test_warning, repository_error_warning,
    repository_status, repository_warning, skeleton_status, state_payload_from_domain,
    state_payload_from_repo, test_payload_from_domain,
};
pub use self::provider::{
    activate_relay_provider, deactivate_relay_provider, delete_relay_provider,
    set_relay_provider_network, upsert_relay_provider,
};

pub(crate) struct RelayUseCaseBoundary;

pub(crate) trait RelayUseCaseBoundaryPort {}

/// 设置官方直连拦截开关的用户动作边界；真实持久化等待 raw/internal 证据补齐。
pub fn set_block_official_passthrough(repo: &Repository, blocked: bool) -> (bool, CoreWarning) {
    let command = "set_block_official_passthrough";
    match relay_repository::set_passthrough_policy(repo, blocked) {
        Ok(state) => (
            state.block_official_passthrough,
            repository_warning(command),
        ),
        Err(_) => (
            relay_repository::record_passthrough_policy_intent(repo, blocked),
            repository_error_warning(command),
        ),
    }
}

/// 读取官方直连审计日志的用户动作边界；当前公开仓库没有可证明的日志来源。
pub fn get_passthrough_audit_log(
    repo: &Repository,
    limit: Option<u32>,
) -> (Vec<RelayPassthroughAuditEntryPayload>, CoreWarning) {
    let normalized_limit = limit.unwrap_or(50).min(200);
    match relay_repository::load_passthrough_audit_log(repo, normalized_limit) {
        Ok(entries) => (entries, repository_warning("get_passthrough_audit_log")),
        Err(_) => (
            Vec::new(),
            repository_error_warning("get_passthrough_audit_log"),
        ),
    }
}

pub fn load_relay_state(repo: &Repository) -> (RelayStatePayload, CoreWarning) {
    let command = "load_relay_state";
    (
        state_payload_from_repo(repo, command),
        repository_warning(command),
    )
}

pub fn test_relay_provider(
    repo: &Repository,
    provider_id: String,
) -> (RelayTestPayload, CoreWarning) {
    let platform = default_relay_platform();
    test_relay_provider_with_platform(repo, provider_id, &platform)
}

fn test_relay_provider_with_platform(
    repo: &Repository,
    provider_id: String,
    platform: &impl RelayPlatformPort,
) -> (RelayTestPayload, CoreWarning) {
    let command = "test_relay_provider";
    let provider = load_provider_for_test(repo, &provider_id);
    let result = provider
        .as_ref()
        .ok_or_else(|| CoreError::InvalidInput("relay provider 不存在".to_string()))
        .and_then(|provider| {
            let draft = draft_from_provider(provider);
            relay_core::prepare_health_check_request(command, &draft, Some(provider.id.clone()))
        })
        .and_then(|request| platform.test_relay_mock_terminal(&request))
        .and_then(|response_body| relay_core::parse_health_check_result(&response_body));

    match result {
        Ok(test) => {
            let _ = relay_repository::record_provider_health(
                repo,
                &provider_id,
                &test,
                current_timestamp(),
            );
            (
                test_payload_from_domain(command, test),
                relay_test_warning(command),
            )
        }
        Err(error) => (
            test_payload_from_domain(command, relay_test_error(&error)),
            relay_test_error_warning(command, &error),
        ),
    }
}

pub fn test_relay_draft(
    _repo: &Repository,
    input: RelayProviderDraftInput,
) -> (RelayTestPayload, CoreWarning) {
    let platform = default_relay_platform();
    test_relay_draft_with_platform(input, &platform)
}

fn test_relay_draft_with_platform(
    input: RelayProviderDraftInput,
    platform: &impl RelayPlatformPort,
) -> (RelayTestPayload, CoreWarning) {
    let command = "test_relay_draft";
    let draft = draft_from_input(&input);
    let result =
        relay_core::prepare_health_check_request(command, &draft, Some("__draft__".to_string()))
            .and_then(|request| platform.test_relay_mock_terminal(&request))
            .and_then(|response_body| relay_core::parse_health_check_result(&response_body));

    match result {
        Ok(test) => (
            test_payload_from_domain(command, test),
            relay_test_warning(command),
        ),
        Err(error) => (
            test_payload_from_domain(command, relay_test_error(&error)),
            relay_test_error_warning(command, &error),
        ),
    }
}

pub fn get_relay_active(repo: &Repository) -> (RelayActivePayload, CoreWarning) {
    let command = "get_relay_active";
    (
        active_payload_from_state(command, core_state_from_repo(repo)),
        repository_warning(command),
    )
}

pub fn get_relay_proxy_status(repo: &Repository) -> (RelayProxyPayload, CoreWarning) {
    let command = "get_relay_proxy_status";
    (
        proxy_payload_from_domain(command, core_state_from_repo(repo).proxy),
        repository_warning(command),
    )
}

// relay image compatibility 用例负责 config.toml 功能位事务；命令名保留 settings IPC 兼容。
pub fn get_image_compat(repo: &Repository) -> Result<bool, CoreError> {
    config_repository::get_image_compat(repo)
}

pub fn set_image_compat(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    config_repository::set_image_compat(repo, enabled)
}

pub fn set_codex_router_enabled(
    repo: &Repository,
    enabled: bool,
    _relaunch: bool,
) -> (RelayRouterTogglePayload, CoreWarning) {
    let command = "set_codex_router_enabled";
    let (state, warning) = match relay_repository::set_router_enabled(repo, enabled) {
        Ok(state) => (state, repository_warning(command)),
        Err(_) => (
            core_state_from_repo(repo),
            repository_error_warning(command),
        ),
    };
    (
        RelayRouterTogglePayload {
            backend_status: repository_status(command),
            state: state_payload_from_domain(command, state),
            migration: RelayRouterMigrationPayload {
                action: "repository-state-updated".to_string(),
                migrated_count: 0,
                rolled_back_count: 0,
                skipped_count: 0,
                target_provider: None,
                target_model: None,
                manifest_path: None,
            },
            codex_launch_error: None,
        },
        warning,
    )
}

pub fn export_relay_config(
    repo: &Repository,
    file_path: String,
    include_api_keys: bool,
) -> (RelayExportPayload, CoreWarning) {
    let command = "export_relay_config";
    match relay_repository::export_config(repo, &file_path, include_api_keys) {
        Ok((state, provider_count)) => (
            RelayExportPayload {
                backend_status: repository_status(command),
                schema_version: Some(state.schema_version),
                exported_by: None,
                exported_at: None,
                file_path,
                include_api_keys,
                provider_count,
                providers: state
                    .providers
                    .iter()
                    .map(|provider| {
                        provider_payload_from_domain(command, provider, false, Value::Null)
                    })
                    .collect(),
            },
            repository_warning(command),
        ),
        Err(_) => (
            RelayExportPayload {
                backend_status: repository_status(command),
                schema_version: Some(RELAY_SCHEMA_VERSION),
                exported_by: None,
                exported_at: None,
                file_path,
                include_api_keys,
                provider_count: 0,
                providers: Vec::new(),
            },
            repository_error_warning(command),
        ),
    }
}

pub fn import_relay_config(
    repo: &Repository,
    file_path: String,
) -> (RelayImportPayload, CoreWarning) {
    let command = "import_relay_config";
    match relay_repository::import_config(repo, &file_path) {
        Ok((_state, total)) => (
            RelayImportPayload {
                backend_status: repository_status(command),
                file_path,
                imported_count: total,
                skipped_count: 0,
                total,
                skipped: Vec::new(),
            },
            repository_warning(command),
        ),
        Err(_) => (
            RelayImportPayload {
                backend_status: repository_status(command),
                file_path,
                imported_count: 0,
                skipped_count: 1,
                total: 1,
                skipped: Vec::new(),
            },
            repository_error_warning(command),
        ),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::contracts::BackendEffect;

    #[test]
    fn diagnose_codex_router_returns_no_issues_on_clean_state() {
        let repo = Repository::with_temp_file_system("relay-diagnostic-clean");

        let (payload, warning) = diagnose_codex_router(&repo);

        assert_eq!(
            warning.code,
            "relay.diagnose_codex_router.repository_restored"
        );
        assert!(!payload.pending);
        assert!(payload.ok);
        assert!(!payload.router_enabled);
        assert!(!payload.has_issues);
        assert!(payload.issues.is_empty());
        assert!(!payload.items.is_empty());
    }

    #[test]
    fn run_codex_router_diagnostics_detects_missing_router_block() {
        let repo = Repository::with_temp_file_system("relay-diagnostic-missing-block");
        relay_repository::set_router_enabled(&repo, true).expect("enable router state");

        let (payload, warning) = run_codex_router_diagnostics(&repo);

        assert_eq!(
            warning.code,
            "relay.run_codex_router_diagnostics.repository_restored"
        );
        assert!(!payload.pending);
        assert!(payload.router_enabled);
        assert!(payload.has_issues);
        assert!(!payload.ok);
        assert!(payload
            .issues
            .iter()
            .any(|issue| issue.id == "missing_router_block"));
        assert!(payload
            .items
            .iter()
            .any(|item| item.id == "missing_router_block"
                && item.status.as_deref() == Some("medium")));
    }

    #[test]
    fn fix_codex_router_issue_missing_block_writes_router_config() {
        let repo = Repository::with_temp_file_system("relay-fix-missing-block");
        relay_repository::set_router_enabled(&repo, true).expect("enable router state");

        let (payload, warning) = fix_codex_router_issue(&repo, "missing_router_block".to_string())
            .expect("fix missing router block");

        assert_eq!(
            warning.code,
            "relay.fix_codex_router_issue.repository_restored"
        );
        assert!(payload.fixed);
        assert!(payload.requires_restart);
        assert!(!payload.diagnostics.pending);
        assert!(!payload.diagnostics.has_issues);

        let skeleton = relay_repository::load_router_diagnostic_skeleton(&repo, "assert_fix");
        assert!(skeleton.managed_block_exists);
        assert!(skeleton.config_toml_has_router);
        assert!(skeleton.config_toml_has_catalog);
        assert!(skeleton.catalog_exists);
    }

    #[test]
    fn fix_codex_router_issue_user_profile_is_manual() {
        let repo = Repository::with_temp_file_system("relay-fix-user-profile");

        let (payload, _) = fix_codex_router_issue(&repo, "user_top_level_profile".to_string())
            .expect("manual fix result");

        assert!(!payload.fixed);
        assert!(!payload.requires_restart);
        assert!(payload.message.contains("手动"));
    }

    #[test]
    fn fix_codex_router_issue_unknown_id_errors() {
        let repo = Repository::with_temp_file_system("relay-fix-unknown");

        assert!(matches!(
            fix_codex_router_issue(&repo, "bogus_id".to_string()),
            Err(CoreError::InvalidInput(_))
        ));
    }

    #[test]
    fn fetch_relay_models_draft_uses_mock_terminal_without_state_write() {
        let repo = Repository::with_temp_file_system("relay-fetch-models-draft");

        let (models, warning) = fetch_relay_models_draft(
            &repo,
            RelayProviderDraftInput {
                base_url: Some("https://relay.example/v1".to_string()),
                api_key: Some("secret".to_string()),
                wire_api: Some("openai-chat".to_string()),
                extra_headers: Some(serde_json::json!({ "x-custom": "one" })),
                ..RelayProviderDraftInput::default()
            },
        );

        assert_eq!(models, vec!["model-a".to_string(), "model-b".to_string()]);
        assert_eq!(
            warning.code,
            "relay.fetch_relay_models_draft.mock_terminal_restored"
        );
        let snapshot = relay_repository::load_relay_repository_snapshot(&repo);
        assert!(!snapshot.relay_config_exists);
    }

    #[test]
    fn test_relay_draft_uses_mock_terminal_without_state_write() {
        let repo = Repository::with_temp_file_system("relay-test-draft");

        let (payload, warning) = test_relay_draft(
            &repo,
            RelayProviderDraftInput {
                base_url: Some("https://relay.example/v1".to_string()),
                api_key: Some("secret".to_string()),
                model: Some("model-a".to_string()),
                wire_api: Some("openai-chat".to_string()),
                extra_headers: Some(serde_json::json!({ "x-custom": "one" })),
                ..RelayProviderDraftInput::default()
            },
        );

        assert!(payload.ok);
        assert_eq!(payload.status_code, Some(200));
        assert_eq!(payload.health, Some(100));
        assert_eq!(
            payload.models,
            vec!["model-a".to_string(), "model-b".to_string()]
        );
        assert_eq!(
            warning.code,
            "relay.test_relay_draft.mock_terminal_restored"
        );
        let snapshot = relay_repository::load_relay_repository_snapshot(&repo);
        assert!(!snapshot.relay_config_exists);
    }

    #[test]
    fn export_relay_config_repository_error_keeps_repository_status() {
        let repo = Repository::with_temp_file_system("relay-export-error-status");

        let (payload, warning) =
            export_relay_config(&repo, "invalid\0export.json".to_string(), false);

        assert_eq!(warning.code, "relay.export_relay_config.repository_error");
        assert!(payload.backend_status.restored);
        assert!(payload.backend_status.boundary.repository_checked);
        assert!(payload.backend_status.boundary.repository_path_known);
        assert_eq!(
            payload.backend_status.boundary.effect,
            BackendEffect::RepositoryWrite
        );
        assert_eq!(payload.provider_count, 0);
    }

    #[test]
    fn import_relay_config_repository_error_keeps_repository_status() {
        let repo = Repository::with_temp_file_system("relay-import-error-status");

        let (payload, warning) = import_relay_config(&repo, "missing-export.json".to_string());

        assert_eq!(warning.code, "relay.import_relay_config.repository_error");
        assert!(payload.backend_status.restored);
        assert!(payload.backend_status.boundary.repository_checked);
        assert!(payload.backend_status.boundary.repository_path_known);
        assert_eq!(
            payload.backend_status.boundary.effect,
            BackendEffect::RepositoryWrite
        );
        assert_eq!(payload.imported_count, 0);
        assert_eq!(payload.skipped_count, 1);
    }

    #[test]
    fn test_relay_provider_writes_health_result_to_repository() {
        let repo = Repository::with_temp_file_system("relay-test-provider");
        let provider = relay_core::provider_from_draft(
            "upsert_relay_provider",
            &RelayDraftDomain {
                id: Some("provider-a".to_string()),
                provider_id: None,
                ide: Some("codex".to_string()),
                name: Some("Provider A".to_string()),
                base_url: Some("https://relay.example/v1".to_string()),
                url: None,
                endpoint: None,
                api_key: None,
                api_key_stored: Some(false),
                model: Some("model-a".to_string()),
                default_model: None,
                wire_api: Some("openai-chat".to_string()),
                extra_headers: None,
                network: Some("system".to_string()),
            },
            None,
            None,
        );
        relay_repository::upsert_provider(&repo, provider).expect("save provider");

        let (payload, warning) = test_relay_provider(&repo, "provider-a".to_string());

        assert!(payload.ok);
        assert_eq!(payload.status_code, Some(200));
        assert_eq!(
            warning.code,
            "relay.test_relay_provider.mock_terminal_restored"
        );

        let state = relay_repository::load_relay_state(&repo).expect("load relay state");
        let stored = state
            .providers
            .iter()
            .find(|item| item.id == "provider-a")
            .expect("stored provider");
        assert_eq!(stored.health_score, Some(100));
        assert_eq!(stored.latency_ms, Some(24));
        assert_eq!(
            stored.models_sample,
            vec!["model-a".to_string(), "model-b".to_string()]
        );
    }
}
