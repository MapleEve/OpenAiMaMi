use crate::contracts::BackendSkeletonStatus;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayMenuEventInput {
    pub event_id: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayIconWindowPayload {
    pub backend_status: BackendSkeletonStatus,
    pub tray_id: String,
    pub created: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayMenuItemPayload {
    pub id: String,
    pub label_key: String,
    pub enabled: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayRelayUsageQuotaModelPayload {
    pub backend_status: BackendSkeletonStatus,
    pub active_provider_label: Option<String>,
    pub quota_percent: Option<i32>,
    pub model_label: Option<String>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayMenuSnapshotPayload {
    pub backend_status: BackendSkeletonStatus,
    pub item_count: usize,
    pub items: Vec<TrayMenuItemPayload>,
    pub quota_model: TrayRelayUsageQuotaModelPayload,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayMenuEventPayload {
    pub backend_status: BackendSkeletonStatus,
    pub event_id: String,
    pub action: String,
    pub route: Option<String>,
    pub account_key: Option<String>,
    pub should_focus_main: bool,
    pub should_quit: bool,
    pub source_archive_extra: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct TrayLocalePayload {
    pub backend_status: BackendSkeletonStatus,
    pub language: String,
    pub refreshed: bool,
}
