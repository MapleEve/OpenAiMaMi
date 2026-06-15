use crate::contracts::BackendSkeletonStatus;
use serde::Serialize;

// settings 透传插件 registry 的 JSON 设置值，contracts 不解释 store 事务。
pub type RuntimeExtensionSettingsValue = serde_json::Value;

/// Runtime extensions 的插件响应条目，只承载前端可见 payload。
#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RuntimeExtensionPluginPayload {
    pub id: String,
    pub name: String,
    pub title: Option<String>,
    pub description: Option<String>,
    pub version: Option<String>,
    pub author: Option<String>,
    pub category: Option<String>,
    pub capabilities: Vec<i32>,
    pub builtin: bool,
    pub path: Option<String>,
    pub enabled: bool,
    pub settings: RuntimeExtensionSettingsValue,
}

/// list_plugins 的响应 payload，store merge 和保存由 repository owning。
#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RuntimeExtensionListPayload {
    pub backend_status: BackendSkeletonStatus,
    pub items: Vec<RuntimeExtensionPluginPayload>,
    pub total: i32,
    pub source_path: String,
    pub last_scan_at: i64,
}

/// toggle_plugin 的响应 payload，不包含 plugins.json 事务细节。
#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RuntimeExtensionTogglePayload {
    pub backend_status: BackendSkeletonStatus,
    pub plugin: RuntimeExtensionPluginPayload,
    pub items: Vec<RuntimeExtensionPluginPayload>,
    pub total: i32,
    pub source_path: String,
    pub last_scan_at: i64,
}

/// get/update plugin config 的响应 payload，settings 内容保持 JSON 原样。
#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RuntimeExtensionConfigPayload {
    pub backend_status: BackendSkeletonStatus,
    pub id: String,
    pub settings: RuntimeExtensionSettingsValue,
    pub source_path: String,
    pub updated: bool,
}
