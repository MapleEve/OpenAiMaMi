use crate::contracts::BackendSkeletonStatus;
use serde::Serialize;

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct CleanPayload {
    pub auth_backups_removed: i32,
    pub registry_backups_removed: i32,
    pub stale_entries_removed: i32,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RebuildRegistryPayload {
    pub account_count: i32,
    pub active_account_key: Option<String>,
    pub registry_updated: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct UpdateInstallabilityPayload {
    pub backend_status: BackendSkeletonStatus,
    pub can_install: bool,
    pub code: String,
    pub executable_path: Option<String>,
    pub bundle_path: Option<String>,
    pub translocated: bool,
    pub quarantined: bool,
}
