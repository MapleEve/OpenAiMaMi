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
