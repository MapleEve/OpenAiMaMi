use serde::{Deserialize, Serialize};
use serde_json::Value;
use std::collections::HashMap;

pub const RELAY_DEFAULT_IDE: &str = "codex";
pub const RELAY_SCHEMA_VERSION: i32 = 4;

/// relay 领域模型只描述公开后端可承载的状态骨架，不保存 Tauri 或前端对象。
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct RelayProviderDomain {
    pub id: String,
    pub ide: String,
    pub name: String,
    pub base_url: String,
    pub api_key_stored: bool,
    pub model: String,
    pub wire_api: String,
    pub network: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayDraftDomain {
    pub id: Option<String>,
    pub provider_id: Option<String>,
    pub ide: Option<String>,
    pub name: Option<String>,
    pub base_url: Option<String>,
    pub url: Option<String>,
    pub endpoint: Option<String>,
    pub api_key: Option<String>,
    pub api_key_stored: Option<bool>,
    pub model: Option<String>,
    pub default_model: Option<String>,
    pub wire_api: Option<String>,
    pub extra_headers: Option<Value>,
    pub network: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayFetchModelsRequest {
    pub url: String,
    pub headers: Vec<(String, String)>,
    pub network: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct RelayProxyDomain {
    pub running: bool,
    pub port: i32,
    pub base_url: String,
    pub codex_base_url: String,
    pub last_error: Option<String>,
}

impl Default for RelayProxyDomain {
    fn default() -> Self {
        Self {
            running: false,
            port: 0,
            base_url: String::new(),
            codex_base_url: String::new(),
            last_error: None,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayStateDomain {
    pub schema_version: i32,
    pub providers: Vec<RelayProviderDomain>,
    pub active_by_ide: HashMap<String, Vec<String>>,
    pub proxy: RelayProxyDomain,
    pub codex_router_enabled: bool,
    pub block_official_passthrough: bool,
    pub source_path: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RelayCoreCluster {
    CodexWriter,
    Diagnostic,
    HealthAudit,
    Bootstrap,
    FetchModels,
    Translator,
    ProxyConfig,
    ImageCompat,
    Sse,
}

impl RelayCoreCluster {
    pub fn code(&self) -> &'static str {
        match self {
            Self::CodexWriter => "relay_codex_writer",
            Self::Diagnostic => "relay_diagnostic",
            Self::HealthAudit => "relay_health_audit",
            Self::Bootstrap => "bootstrap",
            Self::FetchModels => "relay_fetch_models",
            Self::Translator => "relay_translator",
            Self::ProxyConfig => "relay_proxy_config",
            Self::ImageCompat => "relay_image_compat",
            Self::Sse => "relay_sse",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RelayOwnerLayer {
    Core,
    Repository,
    Platform,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayCoreClusterBoundary {
    pub cluster: RelayCoreCluster,
    pub owner: RelayOwnerLayer,
    pub pending: bool,
    pub status_code: String,
    pub detail: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RelayOperationKind {
    StateRead,
    ProviderMutation,
    DiagnosticRead,
    DiagnosticFix,
    NetworkProbe,
    ModelFetch,
    ProxyConfig,
    StreamTranslate,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayOperationKey {
    pub kind: RelayOperationKind,
    pub command: String,
    pub subject: Option<String>,
}

impl RelayOperationKey {
    pub fn new(kind: RelayOperationKind, command: &str, subject: Option<String>) -> Self {
        Self {
            kind,
            command: command.to_string(),
            subject,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayDiagnosticDomain {
    pub source_path: String,
    pub catalog_source_path: Option<String>,
    pub checked_at: Option<String>,
    pub boundary: String,
    pub pending: bool,
    pub summary: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayTestDomain {
    pub ok: bool,
    pub latency_ms: i32,
    pub status_code: Option<i32>,
    pub message: Option<String>,
    pub error_message: Option<String>,
    pub models: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayCoreSnapshot {
    pub state: RelayStateDomain,
    pub clusters: Vec<RelayCoreClusterBoundary>,
    pub platform_capabilities: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayCoreRepositoryView {
    pub relay_config_path: String,
}
