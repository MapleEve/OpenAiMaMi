use crate::application::{
    ports::RelayPlatformPort,
    service::{pending_status, restored_status},
};
use crate::contracts::{
    BackendEffect, BackendSkeletonStatus, CoreWarning, RelayActivePayload,
    RelayDiagnosticIssuePayload, RelayDiagnosticPayload, RelayExportPayload, RelayImportPayload,
    RelayPassthroughAuditEntryPayload, RelayProviderDraftInput, RelayProviderPayload,
    RelayProxyPayload, RelayRouterIssueFixPayload, RelayRouterMigrationPayload,
    RelayRouterTogglePayload, RelayStatePayload, RelayTestPayload,
};
use crate::core::{
    error::CoreError,
    model::relay::{
        RelayCoreRepositoryView, RelayDiagnosticDomain, RelayDraftDomain, RelayProviderDomain,
        RelayProxyDomain, RelayStateDomain, RelayTestDomain, RELAY_DEFAULT_IDE,
        RELAY_SCHEMA_VERSION,
    },
    relay as relay_core,
};
use crate::platform::relay::RelayPlatformAdapter;
use crate::repository::{relay as relay_repository, Repository};
use serde_json::Value;

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

pub fn upsert_relay_provider(
    repo: &Repository,
    input: RelayProviderDraftInput,
) -> (RelayProviderPayload, CoreWarning) {
    let command = "upsert_relay_provider";
    let draft = draft_from_input(&input);
    let provider = relay_core::provider_from_draft(command, &draft, None, None);
    match relay_repository::upsert_provider(repo, provider.clone()) {
        Ok(state) => {
            let active = active_provider_id(&state).as_ref() == Some(&provider.id);
            (
                provider_payload_from_domain(
                    command,
                    &provider,
                    active,
                    input.extra_headers.clone().unwrap_or(Value::Null),
                ),
                repository_warning(command),
            )
        }
        Err(_) => (
            provider_payload_from_domain(
                command,
                &provider,
                false,
                input.extra_headers.clone().unwrap_or(Value::Null),
            ),
            repository_error_warning(command),
        ),
    }
}

pub fn delete_relay_provider(
    repo: &Repository,
    provider_id: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "delete_relay_provider";
    match relay_repository::delete_provider(repo, &provider_id) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn activate_relay_provider(
    repo: &Repository,
    provider_id: String,
    ide: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "activate_relay_provider";
    match relay_repository::activate_provider(repo, &provider_id, &ide) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn deactivate_relay_provider(
    repo: &Repository,
    provider_id: String,
    ide: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "deactivate_relay_provider";
    match relay_repository::deactivate_provider(repo, &provider_id, &ide) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn set_relay_provider_network(
    repo: &Repository,
    provider_id: String,
    network: String,
) -> (RelayProviderPayload, CoreWarning) {
    let command = "set_relay_provider_network";
    let input = RelayProviderDraftInput {
        provider_id: Some(provider_id),
        network: Some(network.clone()),
        ..RelayProviderDraftInput::default()
    };
    let draft = draft_from_input(&input);
    let fallback = relay_core::provider_from_draft(command, &draft, None, None);
    match relay_repository::set_provider_network(repo, &fallback.id, &network) {
        Ok(Some(provider)) => (
            provider_payload_from_domain(command, &provider, false, Value::Null),
            repository_warning(command),
        ),
        Ok(None) => (
            provider_payload_from_domain(command, &fallback, false, Value::Null),
            repository_warning(command),
        ),
        Err(_) => (
            provider_payload_from_domain(command, &fallback, false, Value::Null),
            repository_error_warning(command),
        ),
    }
}

pub fn test_relay_provider(
    _repo: &Repository,
    _provider_id: String,
) -> (RelayTestPayload, CoreWarning) {
    let command = "test_relay_provider";
    (
        test_payload_from_domain(command, relay_core::pending_test_result(command)),
        skeleton_warning(command),
    )
}

pub fn test_relay_draft(
    _repo: &Repository,
    _input: RelayProviderDraftInput,
) -> (RelayTestPayload, CoreWarning) {
    let command = "test_relay_draft";
    (
        test_payload_from_domain(command, relay_core::pending_test_result(command)),
        skeleton_warning(command),
    )
}

pub fn fetch_relay_models_draft(
    _repo: &Repository,
    _input: RelayProviderDraftInput,
) -> (Vec<String>, CoreWarning) {
    let command = "fetch_relay_models_draft";
    let (models, message) = relay_core::pending_model_fetch(command);
    (models, pending_warning(command, &message))
}

pub fn get_relay_active(repo: &Repository) -> (RelayActivePayload, CoreWarning) {
    let command = "get_relay_active";
    (
        active_payload_from_state(command, core_state_from_repo(repo)),
        skeleton_warning(command),
    )
}

pub fn get_relay_proxy_status(repo: &Repository) -> (RelayProxyPayload, CoreWarning) {
    let command = "get_relay_proxy_status";
    (
        proxy_payload_from_domain(command, core_state_from_repo(repo).proxy),
        skeleton_warning(command),
    )
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
                backend_status: skeleton_status(command),
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
                backend_status: skeleton_status(command),
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

pub fn run_codex_router_diagnostics(repo: &Repository) -> (RelayDiagnosticPayload, CoreWarning) {
    let command = "run_codex_router_diagnostics";
    router_diagnostic_payload(repo, command)
}

pub fn diagnose_codex_router(repo: &Repository) -> (RelayDiagnosticPayload, CoreWarning) {
    let command = "diagnose_codex_router";
    router_diagnostic_payload(repo, command)
}

fn router_diagnostic_payload(
    repo: &Repository,
    command: &str,
) -> (RelayDiagnosticPayload, CoreWarning) {
    let skeleton = relay_repository::load_router_diagnostic_skeleton(repo, command);
    let has_issues = diagnostic_has_issues(&skeleton);
    let diagnostic = relay_core::router_diagnostic(
        command,
        skeleton.source_path.clone(),
        skeleton.catalog_source_path.clone(),
        skeleton.checked_at.clone(),
        skeleton.diagnostic_boundary.clone(),
        has_issues,
    );
    (
        diagnostic_payload_from_skeleton(command, diagnostic, skeleton),
        repository_warning(command),
    )
}

pub fn fix_codex_router_issue(
    repo: &Repository,
    item_id: String,
) -> Result<(RelayRouterIssueFixPayload, CoreWarning), CoreError> {
    let command = "fix_codex_router_issue";
    let fix = fix_router_issue(repo, &item_id)?;
    let (diagnostics, _) = router_diagnostic_payload(repo, command);
    Ok((
        RelayRouterIssueFixPayload {
            backend_status: repository_status(command),
            item_id: item_id.clone(),
            issue_id: item_id,
            fixed: fix.fixed,
            requires_restart: fix.requires_restart,
            message: fix.message,
            details: fix.details,
            diagnostics,
        },
        repository_warning(command),
    ))
}

struct RouterIssueFixResult {
    fixed: bool,
    requires_restart: bool,
    message: String,
    details: Vec<String>,
}

fn fix_router_issue(repo: &Repository, item_id: &str) -> Result<RouterIssueFixResult, CoreError> {
    match item_id {
        "missing_router_block"
        | "missing_catalog_file"
        | "config_stale"
        | "catalog_path_validity"
        | "config_toml_router"
        | "config_toml_catalog" => {
            let details = relay_repository::inject_router_config(repo)?;
            Ok(router_issue_fixed(
                "已重新写入 Codex Router 受管配置。",
                details,
                true,
            ))
        }
        "stale_router_entries" => {
            let details = relay_repository::remove_router_config(repo)?;
            Ok(router_issue_fixed(
                "已移除过期 Codex Router 配置。",
                details,
                true,
            ))
        }
        "all" => {
            let skeleton = relay_repository::load_router_diagnostic_skeleton(repo, "fix_all");
            let details = if diagnostic_has_issues(&skeleton) {
                relay_repository::inject_router_config(repo)?
            } else {
                vec!["没有需要自动修复的 Codex Router 诊断项。".to_string()]
            };
            Ok(router_issue_fixed(
                "已处理所有可自动修复的诊断项。",
                details,
                true,
            ))
        }
        "user_top_level_profile" | "config_profile_conflict" => Ok(RouterIssueFixResult {
            fixed: false,
            requires_restart: false,
            message: "该诊断项需要手动处理，不能自动改写用户 profile。".to_string(),
            details: vec!["请手动确认 config.toml 顶层 profile 与路由配置的关系。".to_string()],
        }),
        "auth_integrity" | "config_third_party" | "config_omit_syntax" | "db_orphan_providers" => {
            Ok(RouterIssueFixResult {
                fixed: false,
                requires_restart: false,
                message: "该诊断项已确认，但当前公开实现不自动修改相关外部状态。".to_string(),
                details: vec!["保留只读诊断结果，避免在证据不足时改写用户环境。".to_string()],
            })
        }
        _ => Err(CoreError::InvalidInput(format!(
            "unknown router issue id: {item_id}"
        ))),
    }
}

fn router_issue_fixed(
    message: &str,
    details: Vec<String>,
    requires_restart: bool,
) -> RouterIssueFixResult {
    RouterIssueFixResult {
        fixed: true,
        requires_restart,
        message: message.to_string(),
        details,
    }
}

fn provider_payload_from_domain(
    command: &str,
    provider: &RelayProviderDomain,
    active: bool,
    extra_headers: Value,
) -> RelayProviderPayload {
    RelayProviderPayload {
        backend_status: payload_status(command),
        id: provider.id.clone(),
        ide: provider.ide.clone(),
        name: provider.name.clone(),
        base_url: provider.base_url.clone(),
        api_key: None,
        api_key_stored: provider.api_key_stored,
        model: provider.model.clone(),
        wire_api: provider.wire_api.clone(),
        extra_headers,
        network: provider.network.clone(),
        active,
        health_score: None,
        latency_ms: None,
        last_tested_at: None,
        updated_at: None,
        last_error: None,
        error_message: None,
        models_sample: Vec::new(),
    }
}

fn draft_from_input(input: &RelayProviderDraftInput) -> RelayDraftDomain {
    RelayDraftDomain {
        id: input.id.clone(),
        provider_id: input.provider_id.clone(),
        ide: input.ide.clone(),
        name: input.name.clone(),
        base_url: input.base_url.clone(),
        url: input.url.clone(),
        endpoint: input.endpoint.clone(),
        api_key_stored: input.api_key_stored,
        model: input.model.clone(),
        default_model: input.default_model.clone(),
        wire_api: input.wire_api.clone(),
        network: input.network.clone(),
    }
}

fn state_payload_from_repo(repo: &Repository, command: &str) -> RelayStatePayload {
    state_payload_from_domain(command, core_state_from_repo(repo))
}

fn core_state_from_repo(repo: &Repository) -> RelayStateDomain {
    if let Ok(state) = relay_repository::load_relay_state(repo) {
        return state;
    }

    let repository_snapshot = relay_repository::load_relay_repository_snapshot(repo);
    let repo_view = RelayCoreRepositoryView {
        relay_config_path: repository_snapshot.relay_config_path,
    };
    relay_core::build_core_snapshot(&repo_view, relay_platform_capability_codes()).state
}

fn relay_platform_capability_codes() -> Vec<String> {
    RelayPlatformAdapter
        .capabilities()
        .into_iter()
        .map(|capability| capability.code)
        .collect()
}

fn state_payload_from_domain(command: &str, state: RelayStateDomain) -> RelayStatePayload {
    let active_provider_id = active_provider_id(&state);
    let proxy = proxy_payload_from_domain(command, state.proxy);
    let providers = state
        .providers
        .iter()
        .map(|provider| {
            let active = active_provider_id.as_ref() == Some(&provider.id);
            provider_payload_from_domain(command, provider, active, Value::Null)
        })
        .collect();

    RelayStatePayload {
        backend_status: payload_status(command),
        schema_version: state.schema_version,
        providers,
        active_by_ide: state.active_by_ide,
        proxy: proxy.clone(),
        codex_router_enabled: state.codex_router_enabled,
        block_official_passthrough: state.block_official_passthrough,
        last_codex_route: None,
        enabled: active_provider_id.is_some(),
        active_provider_id,
        proxy_status: proxy,
        source_path: state.source_path,
    }
}

fn active_payload_from_state(command: &str, state: RelayStateDomain) -> RelayActivePayload {
    let active_provider_id = active_provider_id(&state);
    let active_provider = active_provider_id.as_ref().and_then(|id| {
        state
            .providers
            .iter()
            .find(|provider| &provider.id == id)
            .map(|provider| provider.name.clone())
    });

    RelayActivePayload {
        backend_status: payload_status(command),
        enabled: active_provider_id.is_some(),
        active_provider,
        active_provider_id,
        ide: RELAY_DEFAULT_IDE.to_string(),
    }
}

fn active_provider_id(state: &RelayStateDomain) -> Option<String> {
    state
        .active_by_ide
        .get(RELAY_DEFAULT_IDE)
        .and_then(|providers| providers.first())
        .cloned()
}

fn proxy_payload_from_domain(command: &str, proxy: RelayProxyDomain) -> RelayProxyPayload {
    RelayProxyPayload {
        backend_status: payload_status(command),
        running: proxy.running,
        port: proxy.port,
        base_url: proxy.base_url,
        codex_base_url: proxy.codex_base_url,
        last_error: proxy.last_error,
    }
}

fn test_payload_from_domain(command: &str, test: RelayTestDomain) -> RelayTestPayload {
    RelayTestPayload {
        backend_status: payload_status(command),
        ok: test.ok,
        health: None,
        latency_ms: test.latency_ms,
        status_code: test.status_code,
        message: test.message,
        error_message: test.error_message,
        models: test.models,
    }
}

fn diagnostic_payload_from_domain(
    command: &str,
    diagnostic: RelayDiagnosticDomain,
) -> RelayDiagnosticPayload {
    diagnostic_payload_from_parts(command, diagnostic, None)
}

fn diagnostic_payload_from_skeleton(
    command: &str,
    diagnostic: RelayDiagnosticDomain,
    skeleton: relay_repository::RelayDiagnosticSkeleton,
) -> RelayDiagnosticPayload {
    diagnostic_payload_from_parts(command, diagnostic, Some(skeleton))
}

fn diagnostic_payload_from_parts(
    command: &str,
    diagnostic: RelayDiagnosticDomain,
    skeleton: Option<relay_repository::RelayDiagnosticSkeleton>,
) -> RelayDiagnosticPayload {
    let catalog_source_path = diagnostic.catalog_source_path.clone();
    let catalog_exists = skeleton
        .as_ref()
        .map(|item| item.catalog_exists)
        .unwrap_or(false);
    let config_toml_has_router = skeleton
        .as_ref()
        .map(|item| item.config_toml_has_router)
        .unwrap_or(false);
    let config_toml_has_catalog = skeleton
        .as_ref()
        .map(|item| item.config_toml_has_catalog)
        .unwrap_or(false);
    let router_enabled = skeleton
        .as_ref()
        .map(|item| item.managed_block_exists && item.config_toml_has_router)
        .unwrap_or(false);
    let codex_provider_count = skeleton
        .as_ref()
        .map(|item| item.codex_provider_count)
        .unwrap_or(0);
    let user_top_level_profile = skeleton
        .as_ref()
        .and_then(|item| item.user_top_level_profile.clone());
    let config_stale_reason = skeleton
        .as_ref()
        .and_then(|item| item.config_stale_reason.clone());
    let (issues, items) = skeleton
        .as_ref()
        .map(diagnostic_entries_from_skeleton)
        .unwrap_or_default();
    let has_issues = !issues.is_empty();
    let ok = !diagnostic.pending && !has_issues;

    RelayDiagnosticPayload {
        backend_status: payload_status(command),
        ok,
        codex_provider_count,
        catalog_path: catalog_source_path.clone(),
        source_path: diagnostic.source_path,
        catalog_source_path,
        checked_at: diagnostic.checked_at,
        diagnostic_boundary: diagnostic.boundary,
        pending: diagnostic.pending,
        catalog_exists,
        config_toml_has_router,
        config_toml_has_catalog,
        config_toml_has_router_legacy: config_toml_has_router,
        config_toml_has_catalog_legacy: config_toml_has_catalog,
        user_top_level_profile,
        config_stale_reason,
        thread_migration_exists: false,
        router_enabled,
        has_issues,
        issues,
        items,
        summary: diagnostic.summary,
    }
}

fn diagnostic_has_issues(skeleton: &relay_repository::RelayDiagnosticSkeleton) -> bool {
    skeleton.router_enabled
        && (!skeleton.managed_block_exists || skeleton.config_stale_reason.is_some())
}

fn diagnostic_entries_from_skeleton(
    skeleton: &relay_repository::RelayDiagnosticSkeleton,
) -> (
    Vec<RelayDiagnosticIssuePayload>,
    Vec<RelayDiagnosticIssuePayload>,
) {
    let mut issues = Vec::new();
    if skeleton.router_enabled && !skeleton.managed_block_exists {
        issues.push(diagnostic_issue(
            "missing_router_block",
            "缺少路由托管块",
            "已启用 Codex Router，但 config.toml 中没有检测到受管路由配置块。",
            Some("需要重新写入路由配置，避免前端状态和本地配置不一致。"),
            "medium",
            Some("medium"),
            true,
        ));
    }
    if skeleton.router_enabled {
        if let Some(reason) = &skeleton.config_stale_reason {
            issues.push(diagnostic_issue(
                "config_stale",
                "路由配置不完整",
                "已启用 Codex Router，但本地配置状态不完整。",
                Some(reason),
                "medium",
                Some("medium"),
                true,
            ));
        }
    }

    let items = vec![
        diagnostic_item(
            "router_enabled",
            "路由开关",
            if skeleton.router_enabled { "ok" } else { "ok" },
            if skeleton.router_enabled {
                "relay 状态已启用 Codex Router。"
            } else {
                "relay 状态未启用 Codex Router。"
            },
            false,
        ),
        diagnostic_item(
            "missing_router_block",
            "受管路由配置块",
            if !skeleton.router_enabled || skeleton.managed_block_exists {
                "ok"
            } else {
                "medium"
            },
            if skeleton.managed_block_exists {
                "config.toml 中已检测到受管路由配置块。"
            } else {
                "config.toml 中未检测到受管路由配置块。"
            },
            skeleton.router_enabled && !skeleton.managed_block_exists,
        ),
        diagnostic_item(
            "catalog_path_validity",
            "模型目录文件",
            if skeleton.catalog_exists {
                "ok"
            } else {
                "medium"
            },
            if skeleton.catalog_exists {
                "模型目录文件存在。"
            } else {
                "模型目录文件不存在。"
            },
            skeleton.router_enabled && !skeleton.catalog_exists,
        ),
        diagnostic_item(
            "config_toml_router",
            "config.toml 路由字段",
            if skeleton.config_toml_has_router {
                "ok"
            } else {
                "medium"
            },
            if skeleton.config_toml_has_router {
                "config.toml 已包含 model_provider 路由字段。"
            } else {
                "config.toml 未包含 model_provider 路由字段。"
            },
            skeleton.router_enabled && !skeleton.config_toml_has_router,
        ),
        diagnostic_item(
            "config_toml_catalog",
            "config.toml 模型目录字段",
            if skeleton.config_toml_has_catalog {
                "ok"
            } else {
                "medium"
            },
            if skeleton.config_toml_has_catalog {
                "config.toml 已包含模型目录字段。"
            } else {
                "config.toml 未包含模型目录字段。"
            },
            skeleton.router_enabled && !skeleton.config_toml_has_catalog,
        ),
    ];

    (issues, items)
}

fn diagnostic_issue(
    id: &str,
    title: &str,
    message: &str,
    detail: Option<&str>,
    severity: &str,
    status: Option<&str>,
    fixable: bool,
) -> RelayDiagnosticIssuePayload {
    RelayDiagnosticIssuePayload {
        id: id.to_string(),
        title: Some(title.to_string()),
        label: None,
        message: message.to_string(),
        detail: detail.map(ToString::to_string),
        severity: severity.to_string(),
        status: status.map(ToString::to_string),
        fixable,
    }
}

fn diagnostic_item(
    id: &str,
    label: &str,
    status: &str,
    detail: &str,
    fixable: bool,
) -> RelayDiagnosticIssuePayload {
    RelayDiagnosticIssuePayload {
        id: id.to_string(),
        title: None,
        label: Some(label.to_string()),
        message: detail.to_string(),
        detail: Some(detail.to_string()),
        severity: status.to_string(),
        status: Some(status.to_string()),
        fixable,
    }
}

fn skeleton_status(command: &str) -> BackendSkeletonStatus {
    let note = relay_core::skeleton_note(command);
    pending_status("relay", command, &note)
}

fn repository_status(command: &str) -> BackendSkeletonStatus {
    restored_status("relay", command, BackendEffect::NoOp)
}

fn payload_status(command: &str) -> BackendSkeletonStatus {
    if repository_restored_command(command) {
        repository_status(command)
    } else {
        skeleton_status(command)
    }
}

fn repository_restored_command(command: &str) -> bool {
    matches!(
        command,
        "load_relay_state"
            | "upsert_relay_provider"
            | "delete_relay_provider"
            | "activate_relay_provider"
            | "deactivate_relay_provider"
            | "set_relay_provider_network"
            | "get_relay_active"
            | "get_passthrough_audit_log"
            | "run_codex_router_diagnostics"
            | "diagnose_codex_router"
            | "fix_codex_router_issue"
            | "get_relay_proxy_status"
            | "set_codex_router_enabled"
            | "set_block_official_passthrough"
            | "export_relay_config"
            | "import_relay_config"
    )
}

fn skeleton_warning(command: &str) -> CoreWarning {
    let note = relay_core::skeleton_note(command);
    pending_warning(command, &note)
}

fn pending_warning(command: &str, message: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.pending"),
        message: message.to_string(),
    }
}

fn repository_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.repository_restored"),
        message: "relay 本地配置已通过 repository 可替换文件系统恢复；真实网络、进程和流式代理仍等待证据补齐。".to_string(),
    }
}

fn repository_error_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.repository_error"),
        message: "relay 本地配置仓储操作失败，已返回不暴露本机路径的降级结果。".to_string(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

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

        let config = repo
            .fs()
            .read_to_string(&repo.paths().config_path)
            .expect("read config");
        assert!(config.contains("# >>> aimami-relay codex-router top start"));
        assert!(config.contains("model_provider = \"aimami\""));
        assert!(config.contains("model_catalog_json"));
        assert!(repo
            .fs()
            .exists(&repo.paths().codex_home.join("codex_router_catalog.json")));
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
}
