use crate::core::{
    error::CoreError,
    model::relay::{
        RelayDraftDomain, RelayFetchModelsRequest, RelayHealthCheckRequest, RelayOperationKind,
    },
};
use serde_json::Value;

use super::relay_operation_key;

/// Relay 请求构建器只归一化 URL、认证头和 mock terminal 请求体，不发起真实网络请求。
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
