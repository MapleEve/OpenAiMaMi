use crate::core::{
    error::CoreError,
    model::relay::{
        RelayCoreCluster, RelayCoreClusterBoundary, RelayCoreRepositoryView, RelayCoreSnapshot,
        RelayDiagnosticDomain, RelayDraftDomain, RelayOperationKey, RelayOperationKind,
        RelayOwnerLayer, RelayProviderDomain, RelayProxyDomain, RelayStateDomain, RelayTestDomain,
        RELAY_DEFAULT_IDE, RELAY_SCHEMA_VERSION,
    },
};
use serde_json::Value;
use std::collections::{HashMap, HashSet};

mod request_builder;
mod router_config;

pub use self::request_builder::{
    build_fetch_models_headers, build_models_url_candidates, parse_extra_headers,
    prepare_fetch_models_request, prepare_health_check_request,
};
pub use self::router_config::{
    analyze_router_config, render_managed_router_config, strip_managed_router_config,
    RelayRouterConfigAnalysis,
};

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

pub fn normalize_display_tag_update(value: Option<String>) -> Option<Option<String>> {
    value.map(|tag| normalize_display_tag(&tag))
}

pub fn apply_display_tag_updates(
    state: &mut RelayStateDomain,
    global: Option<Option<String>>,
    woyao: Option<Option<String>>,
) {
    if let Some(global) = global {
        state.display_tag_global = global;
    }
    if let Some(woyao) = woyao {
        state.display_tag_woyao = woyao;
    }
}

pub fn reorder_relay_providers(
    state: &mut RelayStateDomain,
    ordered_ids: &[String],
) -> Result<(), CoreError> {
    if ordered_ids.len() != state.providers.len() {
        return Err(CoreError::InvalidInput(
            "relay 供应商重排数量不一致".to_string(),
        ));
    }

    let mut seen = HashSet::new();
    for id in ordered_ids {
        if !seen.insert(id.as_str()) {
            return Err(CoreError::InvalidInput(
                "relay 供应商重排包含重复 id".to_string(),
            ));
        }
    }

    let provider_ids = state
        .providers
        .iter()
        .map(|provider| provider.id.as_str())
        .collect::<HashSet<_>>();
    for id in ordered_ids {
        if !provider_ids.contains(id.as_str()) {
            return Err(CoreError::InvalidInput(format!(
                "relay 供应商重排包含未知 id：{id}"
            )));
        }
    }

    let mut remaining = std::mem::take(&mut state.providers);
    let mut reordered = Vec::with_capacity(ordered_ids.len());
    for id in ordered_ids {
        let index = remaining
            .iter()
            .position(|provider| provider.id == *id)
            .ok_or_else(|| CoreError::InvalidInput(format!("relay 供应商重排包含未知 id：{id}")))?;
        reordered.push(remaining.remove(index));
    }
    state.providers = reordered;
    Ok(())
}

fn normalize_display_tag(value: &str) -> Option<String> {
    let trimmed = value.trim();
    if trimmed.is_empty() {
        None
    } else {
        Some(trimmed.to_string())
    }
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

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayDeeplinkImport {
    pub provider: String,
    pub name: String,
    pub endpoint: String,
    pub api_key_present: bool,
    pub model: String,
}

pub fn parse_aimami_deeplink(url: &str) -> Result<RelayDeeplinkImport, CoreError> {
    let value = url.trim();
    if value.is_empty() {
        return Err(CoreError::InvalidInput("deeplink 链接不能为空".to_string()));
    }

    let (scheme, remainder) = value
        .split_once(':')
        .ok_or_else(|| CoreError::InvalidInput("deeplink 缺少协议".to_string()))?;
    if !scheme.eq_ignore_ascii_case("aimami") {
        return Err(CoreError::InvalidInput(
            "deeplink 协议必须是 aimami".to_string(),
        ));
    }

    let (address, query) = remainder
        .split_once('?')
        .ok_or_else(|| CoreError::InvalidInput("deeplink 缺少查询参数".to_string()))?;
    if !is_aimami_import_address(address) {
        return Err(CoreError::InvalidInput(
            "deeplink 路径必须是 v1/import".to_string(),
        ));
    }

    let query = query.split('#').next().unwrap_or_default();
    let query = parse_deeplink_query(query)?;
    let provider = required_deeplink_field(&query, "provider")?;
    let name = required_deeplink_field(&query, "name")?;
    let endpoint = required_deeplink_field(&query, "endpoint")?;
    let api_key = required_deeplink_field(&query, "apiKey")?;
    let model = required_deeplink_field(&query, "model")?;

    if !is_http_endpoint(&endpoint) {
        return Err(CoreError::InvalidInput(
            "deeplink endpoint 必须以 http:// 或 https:// 开头".to_string(),
        ));
    }

    Ok(RelayDeeplinkImport {
        provider,
        name,
        endpoint,
        api_key_present: !api_key.is_empty(),
        model,
    })
}

fn is_aimami_import_address(address: &str) -> bool {
    let mut segments = Vec::new();
    if let Some(rest) = address.strip_prefix("//") {
        let (host, path) = rest.split_once('/').unwrap_or((rest, ""));
        if !host.trim().is_empty() {
            segments.push(host.trim());
        }
        segments.extend(
            path.split('/')
                .map(str::trim)
                .filter(|item| !item.is_empty()),
        );
    } else {
        segments.extend(
            address
                .trim_start_matches('/')
                .split('/')
                .map(str::trim)
                .filter(|item| !item.is_empty()),
        );
    }

    segments.len() == 2 && segments[0] == "v1" && segments[1] == "import"
}

fn parse_deeplink_query(query: &str) -> Result<HashMap<String, String>, CoreError> {
    let mut values = HashMap::new();
    for item in query.split('&').filter(|item| !item.is_empty()) {
        let (key, value) = item.split_once('=').unwrap_or((item, ""));
        values.insert(
            percent_decode_component(key)?,
            percent_decode_component(value)?,
        );
    }
    Ok(values)
}

fn required_deeplink_field(
    query: &HashMap<String, String>,
    field: &str,
) -> Result<String, CoreError> {
    query
        .get(field)
        .map(|value| value.trim())
        .filter(|value| !value.is_empty())
        .map(ToString::to_string)
        .ok_or_else(|| CoreError::InvalidInput(format!("deeplink 缺少必填字段 {field}")))
}

fn is_http_endpoint(endpoint: &str) -> bool {
    let normalized = endpoint.to_ascii_lowercase();
    normalized.starts_with("http://") || normalized.starts_with("https://")
}

fn percent_decode_component(value: &str) -> Result<String, CoreError> {
    let bytes = value.as_bytes();
    let mut output = Vec::with_capacity(bytes.len());
    let mut index = 0;

    while index < bytes.len() {
        match bytes[index] {
            b'%' => {
                if index + 2 >= bytes.len() {
                    return Err(CoreError::InvalidInput(
                        "deeplink 查询参数百分号编码无效".to_string(),
                    ));
                }
                let high = hex_value(bytes[index + 1])?;
                let low = hex_value(bytes[index + 2])?;
                output.push((high << 4) | low);
                index += 3;
            }
            b'+' => {
                output.push(b' ');
                index += 1;
            }
            byte => {
                output.push(byte);
                index += 1;
            }
        }
    }

    String::from_utf8(output)
        .map_err(|_| CoreError::InvalidInput("deeplink 查询参数不是有效 UTF-8".to_string()))
}

fn hex_value(value: u8) -> Result<u8, CoreError> {
    match value {
        b'0'..=b'9' => Ok(value - b'0'),
        b'a'..=b'f' => Ok(value - b'a' + 10),
        b'A'..=b'F' => Ok(value - b'A' + 10),
        _ => Err(CoreError::InvalidInput(
            "deeplink 查询参数百分号编码无效".to_string(),
        )),
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

pub fn needs_stream_retry(message: &str) -> bool {
    const TERMS: [&str; 5] = [
        "stream mode is required",
        "stream must be true",
        "must enable stream",
        "streaming required",
        "only stream",
    ];

    let normalized = message.to_ascii_lowercase();
    TERMS.iter().any(|term| normalized.contains(term))
}

pub fn should_retry_relay_test(message: &str) -> bool {
    if needs_stream_retry(message) {
        return true;
    }

    const TERMS: [&str; 7] = [
        "request failed",
        "timeout",
        "timed out",
        "connection reset",
        "connection refused",
        "no response data",
        "stream read failed",
    ];

    let normalized = message.to_ascii_lowercase();
    TERMS.iter().any(|term| normalized.contains(term))
}

pub fn relay_test_error_message(message: &str) -> String {
    if needs_stream_retry(message) {
        return format!("{message}；建议按流式请求重试。");
    }
    if should_retry_relay_test(message) {
        return format!("{message}；该错误属于可重试 relay 测试失败。");
    }

    message.to_string()
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
        display_tag_global: None,
        display_tag_woyao: None,
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
    use std::collections::HashMap;

    fn invalid_input_message(error: CoreError) -> String {
        match error {
            CoreError::InvalidInput(message) => message,
            other => panic!("expected invalid input error, got {other:?}"),
        }
    }

    fn relay_display_tags_state(ids: &[&str]) -> RelayStateDomain {
        RelayStateDomain {
            schema_version: RELAY_SCHEMA_VERSION,
            providers: ids
                .iter()
                .map(|id| RelayProviderDomain {
                    id: (*id).to_string(),
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
                })
                .collect(),
            active_by_ide: HashMap::new(),
            proxy: RelayProxyDomain::default(),
            codex_router_enabled: false,
            display_tag_global: Some("old-global".to_string()),
            display_tag_woyao: Some("old-woyao".to_string()),
            block_official_passthrough: false,
            source_path: "relay-config.json".to_string(),
        }
    }

    #[test]
    fn relay_display_tags_trim_and_empty_updates() {
        let mut state = relay_display_tags_state(&[]);

        apply_display_tag_updates(
            &mut state,
            normalize_display_tag_update(Some("  Global Tag  ".to_string())),
            normalize_display_tag_update(Some(" \t ".to_string())),
        );

        assert_eq!(state.display_tag_global, Some("Global Tag".to_string()));
        assert_eq!(state.display_tag_woyao, None);

        apply_display_tag_updates(&mut state, None, normalize_display_tag_update(None));

        assert_eq!(state.display_tag_global, Some("Global Tag".to_string()));
        assert_eq!(state.display_tag_woyao, None);
    }

    #[test]
    fn reorder_relay_providers_success_reorders_in_place() {
        let mut state = relay_display_tags_state(&["a", "b", "c"]);
        reorder_relay_providers(
            &mut state,
            &["c".to_string(), "a".to_string(), "b".to_string()],
        )
        .expect("valid reorder");

        assert_eq!(
            state
                .providers
                .iter()
                .map(|provider| provider.id.as_str())
                .collect::<Vec<_>>(),
            vec!["c", "a", "b"]
        );
    }

    #[test]
    fn reorder_relay_providers_rejects_length_mismatch() {
        let mut state = relay_display_tags_state(&["a", "b"]);
        let error = reorder_relay_providers(&mut state, &["a".to_string()])
            .expect_err("length mismatch must fail");

        assert!(invalid_input_message(error).contains("数量不一致"));
    }

    #[test]
    fn reorder_relay_providers_rejects_duplicate_ids() {
        let mut state = relay_display_tags_state(&["a", "b"]);
        let error = reorder_relay_providers(&mut state, &["a".to_string(), "a".to_string()])
            .expect_err("duplicate ids must fail");

        assert!(invalid_input_message(error).contains("重复 id"));
    }

    #[test]
    fn reorder_relay_providers_rejects_unknown_ids() {
        let mut state = relay_display_tags_state(&["a", "b"]);
        let error = reorder_relay_providers(&mut state, &["a".to_string(), "missing".to_string()])
            .expect_err("unknown ids must fail");

        assert!(invalid_input_message(error).contains("未知 id：missing"));
    }

    #[test]
    fn parse_aimami_deeplink_accepts_valid_import_link() {
        let parsed = parse_aimami_deeplink(
            "aimami://v1/import?provider=openai-chat&name=Work+Relay&endpoint=https%3A%2F%2Frelay.example%2Fv1&apiKey=sk-secret&model=gpt-4o",
        )
        .expect("valid deeplink should parse");

        assert_eq!(parsed.provider, "openai-chat");
        assert_eq!(parsed.name, "Work Relay");
        assert_eq!(parsed.endpoint, "https://relay.example/v1");
        assert!(parsed.api_key_present);
        assert_eq!(parsed.model, "gpt-4o");
    }

    #[test]
    fn parse_aimami_deeplink_rejects_missing_required_field() {
        let error = parse_aimami_deeplink(
            "aimami://v1/import?provider=openai-chat&name=Work&endpoint=https%3A%2F%2Frelay.example%2Fv1&model=gpt-4o",
        )
        .expect_err("missing apiKey should fail");

        assert_eq!(invalid_input_message(error), "deeplink 缺少必填字段 apiKey");
    }

    #[test]
    fn parse_aimami_deeplink_rejects_wrong_scheme() {
        let error = parse_aimami_deeplink(
            "https://v1/import?provider=openai-chat&name=Work&endpoint=https%3A%2F%2Frelay.example%2Fv1&apiKey=sk-secret&model=gpt-4o",
        )
        .expect_err("wrong scheme should fail");

        assert_eq!(invalid_input_message(error), "deeplink 协议必须是 aimami");
    }

    #[test]
    fn parse_aimami_deeplink_rejects_non_http_endpoint() {
        let error = parse_aimami_deeplink(
            "aimami://v1/import?provider=openai-chat&name=Work&endpoint=ftp%3A%2F%2Frelay.example%2Fv1&apiKey=sk-secret&model=gpt-4o",
        )
        .expect_err("non-http endpoint should fail");

        assert_eq!(
            invalid_input_message(error),
            "deeplink endpoint 必须以 http:// 或 https:// 开头"
        );
    }

    #[test]
    fn parse_aimami_deeplink_decodes_percent_and_plus_encoding() {
        let parsed = parse_aimami_deeplink(
            "aimami://v1/import?provider=openai-chat&name=%E4%B8%AD%E6%96%87+Relay&endpoint=https%3A%2F%2Frelay.example%2Fv1%3Fregion%3Dhk&apiKey=sk%2Dsecret&model=gpt%2D4o",
        )
        .expect("encoded deeplink should parse");

        assert_eq!(parsed.name, "中文 Relay");
        assert_eq!(parsed.endpoint, "https://relay.example/v1?region=hk");
        assert!(parsed.api_key_present);
        assert_eq!(parsed.model, "gpt-4o");
    }

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
    fn relay_test_retry_classifier_matches_public_retry_terms() {
        for message in [
            "stream mode is required",
            "stream must be true",
            "must enable stream",
            "streaming required",
            "only stream responses are supported",
        ] {
            assert!(needs_stream_retry(message), "{message}");
            assert!(should_retry_relay_test(message), "{message}");
        }

        for message in [
            "request failed",
            "request timeout",
            "connection reset by peer",
            "connection refused",
            "no response data",
            "stream read failed",
        ] {
            assert!(should_retry_relay_test(message), "{message}");
        }

        assert!(!should_retry_relay_test("invalid provider name"));
    }

    #[test]
    fn relay_test_error_message_marks_stream_and_retry_failures() {
        assert!(relay_test_error_message("stream must be true").contains("流式请求重试"));
        assert!(relay_test_error_message("connection reset").contains("可重试 relay 测试失败"));
        assert_eq!(
            relay_test_error_message("invalid provider name"),
            "invalid provider name".to_string()
        );
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
