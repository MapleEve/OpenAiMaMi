use crate::core::{
    error::CoreError,
    model::relay::{
        RelayCoreCluster, RelayCoreClusterBoundary, RelayCoreRepositoryView, RelayCoreSnapshot,
        RelayDiagnosticDomain, RelayDraftDomain, RelayFetchModelsRequest, RelayHealthCheckRequest,
        RelayOperationKey, RelayOperationKind, RelayOwnerLayer, RelayProviderDomain,
        RelayProxyDomain, RelayStateDomain, RelayTestDomain, RELAY_DEFAULT_IDE,
        RELAY_SCHEMA_VERSION,
    },
};
use serde_json::Value;
use std::collections::HashMap;

/// relay core 只承载领域状态、簇状态机和错误语义，不读写真实文件、不发起网络请求。
pub fn build_core_snapshot(
    repo_view: &RelayCoreRepositoryView,
    platform_capabilities: Vec<String>,
) -> RelayCoreSnapshot {
    RelayCoreSnapshot {
        state: empty_state(repo_view),
        clusters: relay_cluster_boundaries(),
        platform_capabilities,
    }
}

pub fn relay_operation_key(
    kind: RelayOperationKind,
    command: &str,
    subject: Option<String>,
) -> RelayOperationKey {
    RelayOperationKey::new(kind, command, subject)
}

pub fn provider_from_draft(
    command: &str,
    draft: &RelayDraftDomain,
    provider_id_override: Option<&str>,
    network_override: Option<&str>,
) -> RelayProviderDomain {
    let provider_id = provider_id_override
        .map(ToString::to_string)
        .or_else(|| draft.provider_id.clone())
        .or_else(|| draft.id.clone())
        .unwrap_or_else(|| "pending-relay-provider".to_string());
    let base_url = draft
        .base_url
        .clone()
        .or_else(|| draft.url.clone())
        .or_else(|| draft.endpoint.clone())
        .unwrap_or_default();
    let model = draft
        .model
        .clone()
        .or_else(|| draft.default_model.clone())
        .unwrap_or_default();
    let network = network_override
        .map(ToString::to_string)
        .or_else(|| draft.network.clone())
        .unwrap_or_else(|| "system".to_string());

    let _operation = relay_operation_key(
        RelayOperationKind::ProviderMutation,
        command,
        Some(provider_id.clone()),
    );

    RelayProviderDomain {
        id: provider_id.clone(),
        ide: draft
            .ide
            .clone()
            .unwrap_or_else(|| RELAY_DEFAULT_IDE.to_string()),
        name: draft.name.clone().unwrap_or(provider_id),
        base_url,
        api_key_stored: draft.api_key_stored.unwrap_or(false),
        model,
        wire_api: draft.wire_api.clone().unwrap_or_default(),
        network,
        health_score: None,
        latency_ms: None,
        last_tested_at: None,
        last_error: None,
        models_sample: Vec::new(),
    }
}

pub fn pending_test_result(command: &str) -> RelayTestDomain {
    let _operation = relay_operation_key(RelayOperationKind::NetworkProbe, command, None);
    RelayTestDomain {
        ok: false,
        latency_ms: 0,
        status_code: None,
        message: None,
        error_message: Some(
            "relay 测试未执行：当前只返回后端骨架，网络探测等待证据补齐。".to_string(),
        ),
        models: Vec::new(),
    }
}

pub fn pending_model_fetch(command: &str) -> (Vec<String>, String) {
    let _operation = relay_operation_key(RelayOperationKind::ModelFetch, command, None);
    (
        Vec::new(),
        "relay 模型拉取未执行：当前只保留请求归一化、认证头和平台 HTTP 边界。".to_string(),
    )
}

pub fn prepare_fetch_models_request(
    command: &str,
    draft: &RelayDraftDomain,
) -> Result<RelayFetchModelsRequest, CoreError> {
    let _operation = relay_operation_key(RelayOperationKind::ModelFetch, command, None);
    let base_url = draft
        .base_url
        .as_deref()
        .or(draft.url.as_deref())
        .or(draft.endpoint.as_deref())
        .map(str::trim)
        .filter(|value| !value.is_empty())
        .ok_or_else(|| CoreError::InvalidInput("relay model fetch 缺少 baseUrl".to_string()))?;
    let url = build_models_url_candidates(base_url)
        .into_iter()
        .next()
        .ok_or_else(|| CoreError::InvalidInput("relay model fetch 缺少可用 URL".to_string()))?;
    let headers = build_fetch_models_headers(
        draft.api_key.as_deref(),
        draft.wire_api.as_deref(),
        draft.extra_headers.as_ref(),
    )?;

    Ok(RelayFetchModelsRequest {
        url,
        headers,
        network: draft
            .network
            .clone()
            .unwrap_or_else(|| "system".to_string()),
    })
}

pub fn prepare_health_check_request(
    command: &str,
    draft: &RelayDraftDomain,
    subject: Option<String>,
) -> Result<RelayHealthCheckRequest, CoreError> {
    let _operation =
        relay_operation_key(RelayOperationKind::NetworkProbe, command, subject.clone());
    let base_url = draft
        .base_url
        .as_deref()
        .or(draft.url.as_deref())
        .or(draft.endpoint.as_deref())
        .map(str::trim)
        .filter(|value| !value.is_empty())
        .ok_or_else(|| CoreError::InvalidInput("relay health check 缺少 baseUrl".to_string()))?;
    let url = build_models_url_candidates(base_url)
        .into_iter()
        .next()
        .ok_or_else(|| CoreError::InvalidInput("relay health check 缺少可用 URL".to_string()))?;
    let headers = build_fetch_models_headers(
        draft.api_key.as_deref(),
        draft.wire_api.as_deref(),
        draft.extra_headers.as_ref(),
    )?;
    let model = draft
        .model
        .as_deref()
        .or(draft.default_model.as_deref())
        .map(str::trim)
        .filter(|value| !value.is_empty())
        .unwrap_or("model-a");
    let body = serde_json::json!({
        "model": model,
        "wireApi": draft.wire_api.as_deref().unwrap_or(""),
        "mode": "mock-terminal-health-check",
    })
    .to_string();

    Ok(RelayHealthCheckRequest {
        url,
        headers,
        body,
        network: draft
            .network
            .clone()
            .unwrap_or_else(|| "system".to_string()),
        subject,
    })
}

pub fn build_models_url_candidates(base_url: &str) -> Vec<String> {
    let normalized = trim_url(base_url);
    if normalized.is_empty() {
        return Vec::new();
    }

    let mut candidates = Vec::new();
    if normalized.ends_with("/models") {
        candidates.push(normalized.clone());
    } else if normalized.ends_with("/v1") {
        candidates.push(format!("{normalized}/models"));
    } else {
        candidates.push(format!("{normalized}/v1/models"));
    }

    if let Some(stripped) = strip_compat_suffix(&normalized) {
        candidates.push(format!("{stripped}/v1/models"));
        candidates.push(format!("{stripped}/models"));
    }

    dedupe(candidates)
}

pub fn build_fetch_models_headers(
    api_key: Option<&str>,
    wire_api: Option<&str>,
    extra_headers: Option<&Value>,
) -> Result<Vec<(String, String)>, CoreError> {
    let mut headers = vec![("Content-Type".to_string(), "application/json".to_string())];
    let api_key = api_key.map(str::trim).filter(|value| !value.is_empty());
    if let Some(api_key) = api_key {
        if is_anthropic_wire_api(wire_api) {
            headers.push(("x-api-field".to_string(), api_key.to_string()));
            headers.push(("anthropic-version".to_string(), "2023-06-01".to_string()));
        } else {
            headers.push(("Authorization".to_string(), format!("Bearer {api_key}")));
        }
    }

    for (key, value) in parse_extra_headers(extra_headers) {
        let lowered = key.to_ascii_lowercase();
        if matches!(
            lowered.as_str(),
            "authorization" | "x-api-field" | "anthropic-version"
        ) {
            return Err(CoreError::InvalidInput(format!(
                "conflicting extraHeaders field: {key}"
            )));
        }
        headers.push((key, value));
    }

    Ok(headers)
}

pub fn parse_extra_headers(extra_headers: Option<&Value>) -> Vec<(String, String)> {
    match extra_headers {
        Some(Value::Object(map)) => map
            .iter()
            .filter_map(|(key, value)| match value {
                Value::String(value) => normalize_header_pair(key, value),
                _ => None,
            })
            .collect(),
        Some(Value::String(value)) => value
            .lines()
            .filter_map(|line| {
                let (key, value) = line.split_once(':')?;
                normalize_header_pair(key, value)
            })
            .collect(),
        _ => Vec::new(),
    }
}

pub fn parse_model_ids(response_body: &str) -> Result<Vec<String>, CoreError> {
    let value: Value = serde_json::from_str(response_body)?;
    let models = value
        .get("data")
        .and_then(Value::as_array)
        .map(|items| {
            items
                .iter()
                .filter_map(|item| item.get("id").and_then(Value::as_str))
                .map(str::trim)
                .filter(|id| !id.is_empty())
                .map(ToString::to_string)
                .take(50)
                .collect::<Vec<_>>()
        })
        .unwrap_or_default();

    if models.is_empty() {
        return Err(CoreError::InvalidInput(
            "upstream model list is empty".to_string(),
        ));
    }

    Ok(models)
}

pub fn parse_health_check_result(response_body: &str) -> Result<RelayTestDomain, CoreError> {
    let value: Value = serde_json::from_str(response_body)?;
    let ok = value.get("ok").and_then(Value::as_bool).unwrap_or(false);
    let latency_ms = value
        .get("latencyMs")
        .or_else(|| value.get("latency_ms"))
        .and_then(Value::as_i64)
        .unwrap_or(0)
        .clamp(0, i32::MAX as i64) as i32;
    let status_code = value
        .get("statusCode")
        .or_else(|| value.get("status_code"))
        .and_then(Value::as_i64)
        .map(|item| item.clamp(100, 599) as i32);
    let message = value
        .get("message")
        .and_then(Value::as_str)
        .map(str::trim)
        .filter(|item| !item.is_empty())
        .map(ToString::to_string);
    let error_message = value
        .get("errorMessage")
        .or_else(|| value.get("error_message"))
        .and_then(Value::as_str)
        .map(str::trim)
        .filter(|item| !item.is_empty())
        .map(ToString::to_string);
    let models = value
        .get("models")
        .and_then(Value::as_array)
        .map(|items| {
            items
                .iter()
                .filter_map(Value::as_str)
                .map(str::trim)
                .filter(|item| !item.is_empty())
                .map(ToString::to_string)
                .take(10)
                .collect::<Vec<_>>()
        })
        .unwrap_or_default();

    Ok(RelayTestDomain {
        ok,
        latency_ms,
        status_code,
        message,
        error_message,
        models,
    })
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayRouterConfigAnalysis {
    pub config_toml_has_router: bool,
    pub config_toml_has_catalog: bool,
    pub managed_block_exists: bool,
    pub codex_provider_count: i32,
    pub user_top_level_profile: Option<String>,
    pub config_stale_reason: Option<String>,
}

/// router config block 的解析归 core，repository 只提供文件内容和存在性事实。
pub fn analyze_router_config(
    config: Option<&str>,
    config_exists: bool,
    catalog_exists: bool,
) -> RelayRouterConfigAnalysis {
    let config_toml_has_router = config.map(config_has_router).unwrap_or(false);
    let config_toml_has_catalog = config.map(config_has_catalog).unwrap_or(false);

    RelayRouterConfigAnalysis {
        config_toml_has_router,
        config_toml_has_catalog,
        managed_block_exists: config.map(config_has_managed_block).unwrap_or(false),
        codex_provider_count: config.map(count_model_providers).unwrap_or(0),
        user_top_level_profile: config.and_then(top_level_profile),
        config_stale_reason: config_stale_reason(
            config_exists,
            catalog_exists,
            config_toml_has_router,
            config_toml_has_catalog,
        ),
    }
}

/// router config block 的渲染归 core，调用方负责把返回内容写入可替换文件系统。
pub fn render_managed_router_config(content: &str, catalog_path: &str) -> String {
    append_managed_router_block(&strip_managed_router_config(content), catalog_path)
}

pub fn strip_managed_router_config(content: &str) -> String {
    let line_ending = detect_line_ending(content);
    let mut output = Vec::new();
    let mut skipping_managed_block = false;

    for raw_line in content.lines() {
        let line = raw_line.trim();
        if starts_managed_relay_block(line) {
            skipping_managed_block = true;
            continue;
        }
        if skipping_managed_block {
            if ends_managed_relay_block(line) {
                skipping_managed_block = false;
            }
            continue;
        }
        if is_router_top_level_key(line) {
            continue;
        }
        output.push(raw_line.trim_end_matches('\r').to_string());
    }

    let mut next = output.join(line_ending);
    if !next.is_empty() {
        next.push_str(line_ending);
    }
    next
}

fn trim_url(value: &str) -> String {
    value.trim().trim_end_matches('/').to_string()
}

fn strip_compat_suffix(value: &str) -> Option<String> {
    const SUFFIXES: [&str; 10] = [
        "/api/anthropic",
        "/anthropic",
        "/api/openai",
        "/openai",
        "/v1/chat/completions",
        "/chat/completions",
        "/v1/messages",
        "/messages",
        "/v1/responses",
        "/responses",
    ];

    SUFFIXES.iter().find_map(|suffix| {
        value
            .strip_suffix(suffix)
            .map(|stripped| stripped.trim_end_matches('/').to_string())
            .filter(|stripped| !stripped.is_empty())
    })
}

fn is_anthropic_wire_api(wire_api: Option<&str>) -> bool {
    wire_api
        .map(|value| value.to_ascii_lowercase().contains("anthropic"))
        .unwrap_or(false)
}

fn normalize_header_pair(key: &str, value: &str) -> Option<(String, String)> {
    let key = key.trim();
    let value = value.trim();
    if key.is_empty() || value.is_empty() {
        return None;
    }
    Some((key.to_string(), value.to_string()))
}

fn dedupe(values: Vec<String>) -> Vec<String> {
    let mut output = Vec::new();
    for value in values {
        if !output.contains(&value) {
            output.push(value);
        }
    }
    output
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

fn append_managed_router_block(content: &str, catalog_path: &str) -> String {
    let line_ending = detect_line_ending(content);
    let mut next = content.trim_end_matches(['\r', '\n']).to_string();
    if !next.is_empty() {
        next.push_str(line_ending);
        next.push_str(line_ending);
    }
    next.push_str("# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)");
    next.push_str(line_ending);
    next.push_str("model_provider = \"aimami\"");
    next.push_str(line_ending);
    next.push_str(&format!(
        "model_catalog_json = {}",
        toml_string_literal(catalog_path)
    ));
    next.push_str(line_ending);
    next.push_str("# <<< aimami-relay codex-router top end");
    next.push_str(line_ending);
    next
}

fn starts_managed_relay_block(line: &str) -> bool {
    line.contains("# >>> aimami-relay") && line.contains("start")
}

fn ends_managed_relay_block(line: &str) -> bool {
    line.contains("# <<< aimami-relay") && line.contains("end")
}

fn is_router_top_level_key(line: &str) -> bool {
    ["model_provider", "model_catalog_json"].iter().any(|key| {
        line.strip_prefix(key)
            .map(|rest| rest.trim_start().starts_with('='))
            .unwrap_or(false)
    })
}

fn detect_line_ending(content: &str) -> &'static str {
    if content.contains("\r\n") {
        "\r\n"
    } else {
        "\n"
    }
}

fn toml_string_literal(value: &str) -> String {
    format!("\"{}\"", value.replace('\\', "\\\\").replace('"', "\\\""))
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

pub fn pending_diagnostic(
    command: &str,
    source_path: String,
    catalog_source_path: Option<String>,
    checked_at: Option<String>,
    boundary: String,
) -> RelayDiagnosticDomain {
    let _operation = relay_operation_key(RelayOperationKind::DiagnosticRead, command, None);
    RelayDiagnosticDomain {
        source_path,
        catalog_source_path,
        checked_at,
        boundary,
        pending: true,
        summary: format!(
            "relay 诊断命令 {command} 未执行：当前只返回 repository/core/platform 骨架。"
        ),
    }
}

pub fn router_diagnostic(
    command: &str,
    source_path: String,
    catalog_source_path: Option<String>,
    checked_at: Option<String>,
    boundary: String,
    has_issues: bool,
) -> RelayDiagnosticDomain {
    let _operation = relay_operation_key(RelayOperationKind::DiagnosticRead, command, None);
    RelayDiagnosticDomain {
        source_path,
        catalog_source_path,
        checked_at,
        boundary,
        pending: false,
        summary: if has_issues {
            format!("relay 诊断命令 {command} 已完成只读检查，发现需要处理的配置项。")
        } else {
            format!("relay 诊断命令 {command} 已完成只读检查，未发现需要处理的配置项。")
        },
    }
}

pub fn pending_fix_message(command: &str, item_id: &str) -> String {
    let _operation = relay_operation_key(
        RelayOperationKind::DiagnosticFix,
        command,
        Some(item_id.to_string()),
    );
    format!("修复未执行：诊断项 {item_id} 当前只有调度骨架，真实修复逻辑等待证据补齐。")
}

pub fn skeleton_note(command: &str) -> String {
    format!("relay 命令 {command} 已接入后端六边形骨架；真实代理业务只在证据补齐后实现。")
}

pub fn router_toggle_note(command: &str) -> String {
    let _operation = relay_operation_key(RelayOperationKind::ProxyConfig, command, None);
    "路由开关只完成 repository/core/platform 调度骨架，未写入真实代理配置。".to_string()
}

pub fn stream_boundary_note(command: &str) -> String {
    let _operation = relay_operation_key(RelayOperationKind::StreamTranslate, command, None);
    "SSE/流式转换只建立状态机边界，未启动真实转发流。".to_string()
}

fn empty_state(repo_view: &RelayCoreRepositoryView) -> RelayStateDomain {
    let mut active_by_ide = HashMap::new();
    active_by_ide.insert(RELAY_DEFAULT_IDE.to_string(), Vec::new());

    RelayStateDomain {
        schema_version: RELAY_SCHEMA_VERSION,
        providers: Vec::new(),
        active_by_ide,
        proxy: RelayProxyDomain {
            running: false,
            port: 0,
            base_url: String::new(),
            codex_base_url: String::new(),
            last_error: None,
        },
        codex_router_enabled: false,
        block_official_passthrough: false,
        source_path: repo_view.relay_config_path.clone(),
    }
}

fn relay_cluster_boundaries() -> Vec<RelayCoreClusterBoundary> {
    vec![
        cluster(
            RelayCoreCluster::CodexWriter,
            RelayOwnerLayer::Repository,
            "TOML 写入、导出、迁移和清理只建立 repository 入口，当前不写真实配置。",
        ),
        cluster(
            RelayCoreCluster::Diagnostic,
            RelayOwnerLayer::Core,
            "诊断项、修复调度和错误语义只建立 core 状态机，当前不执行真实修复。",
        ),
        cluster(
            RelayCoreCluster::HealthAudit,
            RelayOwnerLayer::Platform,
            "连通性测试和审计追加只建立平台和仓储边界，当前不发起真实 HTTP。",
        ),
        cluster(
            RelayCoreCluster::Bootstrap,
            RelayOwnerLayer::Core,
            "启动装配只保留边界位置，当前不启动 watcher 或后台循环。",
        ),
        cluster(
            RelayCoreCluster::FetchModels,
            RelayOwnerLayer::Platform,
            "模型拉取只保留请求构建、认证头和平台 HTTP 端口，当前不联网。",
        ),
        cluster(
            RelayCoreCluster::Translator,
            RelayOwnerLayer::Core,
            "请求与响应格式转换只保留状态机边界，当前不转换真实流量。",
        ),
        cluster(
            RelayCoreCluster::ProxyConfig,
            RelayOwnerLayer::Repository,
            "代理配置只保留设置和环境探针边界，当前不写未恢复配置。",
        ),
        cluster(
            RelayCoreCluster::ImageCompat,
            RelayOwnerLayer::Repository,
            "图片兼容开关只保留 config.toml 功能位边界，当前不修改文件。",
        ),
        cluster(
            RelayCoreCluster::Sse,
            RelayOwnerLayer::Core,
            "SSE 桥接只保留缓冲、终止标记和转换状态机边界，当前不启动转发。",
        ),
    ]
}

fn cluster(
    cluster: RelayCoreCluster,
    owner: RelayOwnerLayer,
    detail: &str,
) -> RelayCoreClusterBoundary {
    RelayCoreClusterBoundary {
        status_code: format!("relay.{}.pending", cluster.code()),
        cluster,
        owner,
        pending: true,
        detail: detail.to_string(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use serde_json::json;

    #[test]
    fn build_models_url_candidates_normalizes_v1_and_compat_suffix() {
        assert_eq!(
            build_models_url_candidates("https://relay.example/v1"),
            vec!["https://relay.example/v1/models".to_string()]
        );
        assert_eq!(
            build_models_url_candidates("https://relay.example/api/anthropic"),
            vec![
                "https://relay.example/api/anthropic/v1/models".to_string(),
                "https://relay.example/v1/models".to_string(),
                "https://relay.example/models".to_string(),
            ]
        );
    }

    #[test]
    fn parse_extra_headers_accepts_object_and_string_forms() {
        assert_eq!(
            parse_extra_headers(Some(&json!({ "x-custom": "one" }))),
            vec![("x-custom".to_string(), "one".to_string())]
        );
        assert_eq!(
            parse_extra_headers(Some(&json!("x-one: 1\nx-two: two"))),
            vec![
                ("x-one".to_string(), "1".to_string()),
                ("x-two".to_string(), "two".to_string()),
            ]
        );
    }

    #[test]
    fn build_fetch_models_headers_rejects_auth_conflicts() {
        let error = build_fetch_models_headers(
            Some("secret"),
            Some("openai-chat"),
            Some(&json!({ "authorization": "Bearer other" })),
        )
        .expect_err("conflicting authorization must fail");

        assert!(matches!(error, CoreError::InvalidInput(_)));
    }

    #[test]
    fn parse_model_ids_reads_data_id_values() {
        let models = parse_model_ids(r#"{"data":[{"id":"model-a"},{"id":"model-b"}]}"#)
            .expect("parse model ids");

        assert_eq!(models, vec!["model-a".to_string(), "model-b".to_string()]);
    }

    #[test]
    fn analyze_router_config_reads_block_fields() {
        let config = r#"profile = "work"
[model_providers.local]
name = "Local"
# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)
model_provider = "aimami"
model_catalog_json = "catalog.json"
# <<< aimami-relay codex-router top end
"#;

        let analysis = analyze_router_config(Some(config), true, true);

        assert!(analysis.config_toml_has_router);
        assert!(analysis.config_toml_has_catalog);
        assert!(analysis.managed_block_exists);
        assert_eq!(analysis.codex_provider_count, 1);
        assert_eq!(analysis.user_top_level_profile, Some("work".to_string()));
        assert_eq!(analysis.config_stale_reason, None);
    }

    #[test]
    fn render_managed_router_config_strips_stale_top_level_keys() {
        let rendered = render_managed_router_config(
            "profile = \"work\"\nmodel_provider = \"old\"\nmodel_catalog_json = \"old.json\"\n",
            "C:\\relay\\catalog.json",
        );

        assert!(rendered.contains("profile = \"work\""));
        assert!(rendered.contains("# >>> aimami-relay codex-router top start"));
        assert!(rendered.contains("model_provider = \"aimami\""));
        assert!(rendered.contains("model_catalog_json = \"C:\\\\relay\\\\catalog.json\""));
        assert!(!rendered.contains("model_provider = \"old\""));
        assert!(!rendered.contains("model_catalog_json = \"old.json\""));
    }
}
