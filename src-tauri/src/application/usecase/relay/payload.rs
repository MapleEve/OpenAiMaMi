use crate::application::service::{default_relay_platform, pending_status, restored_status};
use crate::contracts::{
    BackendEffect, BackendSkeletonStatus, CoreWarning, RelayActivePayload,
    RelayDiagnosticIssuePayload, RelayDiagnosticPayload, RelayProviderDraftInput,
    RelayProviderPayload, RelayProxyPayload, RelayStatePayload, RelayTestPayload,
};
use crate::core::{
    error::CoreError,
    model::relay::{
        RelayCoreRepositoryView, RelayDiagnosticDomain, RelayDraftDomain, RelayProviderDomain,
        RelayProxyDomain, RelayStateDomain, RelayTestDomain, RELAY_DEFAULT_IDE,
    },
    relay as relay_core,
};
use crate::repository::{relay as relay_repository, Repository};
use serde_json::Value;

pub(super) fn provider_payload_from_domain(
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
        health_score: provider.health_score,
        latency_ms: provider.latency_ms,
        last_tested_at: provider.last_tested_at,
        updated_at: None,
        last_error: provider.last_error.clone(),
        error_message: provider.last_error.clone(),
        models_sample: provider.models_sample.clone(),
    }
}

pub(super) fn draft_from_input(input: &RelayProviderDraftInput) -> RelayDraftDomain {
    RelayDraftDomain {
        id: input.id.clone(),
        provider_id: input.provider_id.clone(),
        ide: input.ide.clone(),
        name: input.name.clone(),
        base_url: input.base_url.clone(),
        url: input.url.clone(),
        endpoint: input.endpoint.clone(),
        api_key: input.api_key.clone(),
        api_key_stored: input.api_key_stored,
        model: input.model.clone(),
        default_model: input.default_model.clone(),
        wire_api: input.wire_api.clone(),
        extra_headers: input.extra_headers.clone(),
        network: input.network.clone(),
    }
}

pub(super) fn draft_from_provider(provider: &RelayProviderDomain) -> RelayDraftDomain {
    RelayDraftDomain {
        id: Some(provider.id.clone()),
        provider_id: Some(provider.id.clone()),
        ide: Some(provider.ide.clone()),
        name: Some(provider.name.clone()),
        base_url: Some(provider.base_url.clone()),
        url: None,
        endpoint: None,
        api_key: None,
        api_key_stored: Some(provider.api_key_stored),
        model: Some(provider.model.clone()),
        default_model: None,
        wire_api: Some(provider.wire_api.clone()),
        extra_headers: None,
        network: Some(provider.network.clone()),
    }
}

pub(super) fn load_provider_for_test(
    repo: &Repository,
    provider_id: &str,
) -> Option<RelayProviderDomain> {
    relay_repository::load_relay_state(repo)
        .ok()
        .and_then(|state| {
            state
                .providers
                .into_iter()
                .find(|provider| provider.id == provider_id)
        })
}

pub(super) fn state_payload_from_repo(repo: &Repository, command: &str) -> RelayStatePayload {
    state_payload_from_domain(command, core_state_from_repo(repo))
}

pub(super) fn core_state_from_repo(repo: &Repository) -> RelayStateDomain {
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
    let platform = default_relay_platform();
    platform
        .capabilities()
        .into_iter()
        .map(|capability| capability.code)
        .collect()
}

pub(super) fn state_payload_from_domain(
    command: &str,
    state: RelayStateDomain,
) -> RelayStatePayload {
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

pub(super) fn active_payload_from_state(
    command: &str,
    state: RelayStateDomain,
) -> RelayActivePayload {
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

pub(super) fn active_provider_id(state: &RelayStateDomain) -> Option<String> {
    state
        .active_by_ide
        .get(RELAY_DEFAULT_IDE)
        .and_then(|providers| providers.first())
        .cloned()
}

pub(super) fn proxy_payload_from_domain(
    command: &str,
    proxy: RelayProxyDomain,
) -> RelayProxyPayload {
    RelayProxyPayload {
        backend_status: payload_status(command),
        running: proxy.running,
        port: proxy.port,
        base_url: proxy.base_url,
        codex_base_url: proxy.codex_base_url,
        last_error: proxy.last_error,
    }
}

pub(super) fn test_payload_from_domain(command: &str, test: RelayTestDomain) -> RelayTestPayload {
    RelayTestPayload {
        backend_status: payload_status(command),
        ok: test.ok,
        health: Some(if test.ok { 100 } else { 0 }),
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

pub(super) fn diagnostic_payload_from_skeleton(
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

pub(super) fn diagnostic_has_issues(skeleton: &relay_repository::RelayDiagnosticSkeleton) -> bool {
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

pub(super) fn skeleton_status(command: &str) -> BackendSkeletonStatus {
    let note = relay_core::skeleton_note(command);
    pending_status("relay", command, &note)
}

pub(super) fn repository_status(command: &str) -> BackendSkeletonStatus {
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
            | "test_relay_provider"
            | "test_relay_draft"
            | "export_relay_config"
            | "import_relay_config"
    )
}

pub(super) fn skeleton_warning(command: &str) -> CoreWarning {
    let note = relay_core::skeleton_note(command);
    pending_warning(command, &note)
}

fn pending_warning(command: &str, message: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.pending"),
        message: message.to_string(),
    }
}

pub(super) fn model_fetch_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.mock_terminal_restored"),
        message: "Relay model fetch 已恢复请求归一化、认证头、extraHeaders 和模型 ID 解析；当前公开实现只使用 mock HTTP terminal，不发起真实外部联网。"
            .to_string(),
    }
}

pub(super) fn relay_test_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.mock_terminal_restored"),
        message: "Relay 测试命令已恢复 endpoint、header、body 和响应 DTO 的 mock terminal 链路；当前公开实现不发起真实 HTTP，不启动真实代理。"
            .to_string(),
    }
}

pub(super) fn relay_test_error_warning(command: &str, error: &CoreError) -> CoreWarning {
    let message = relay_core::relay_test_error_message(&error.sanitized_message());
    CoreWarning {
        code: format!("relay.{command}.mock_terminal_error"),
        message,
    }
}

pub(super) fn relay_test_error(error: &CoreError) -> RelayTestDomain {
    let message = relay_core::relay_test_error_message(&error.sanitized_message());
    RelayTestDomain {
        ok: false,
        latency_ms: 0,
        status_code: None,
        message: None,
        error_message: Some(message),
        models: Vec::new(),
    }
}

pub(super) fn repository_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.repository_restored"),
        message: "relay 本地配置已通过 repository 可替换文件系统恢复；真实网络、进程和流式代理仍等待证据补齐。".to_string(),
    }
}

pub(super) fn repository_error_warning(command: &str) -> CoreWarning {
    CoreWarning {
        code: format!("relay.{command}.repository_error"),
        message: "relay 本地配置仓储操作失败，已返回不暴露本机路径的降级结果。".to_string(),
    }
}
