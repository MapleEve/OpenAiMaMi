use crate::contracts::accounts::AccountSummaryPayload;
use crate::contracts::{
    ApiConfigPayload, ApiConnectivityPayload, AutoSwitchStatusPayload, BackendSkeletonStatus,
};
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
#[serde(rename_all = "lowercase")]
pub enum UsageSource {
    #[default]
    Local,
    Api,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct AppPathState {
    pub codex_home: String,
    pub accounts_path: String,
    pub auth_path: String,
    pub registry_path: String,
    pub sessions_path: String,
    pub launch_agent_path: String,
    pub auto_switch_log_path: String,
    pub auth_exists: bool,
    pub registry_exists: bool,
    pub sessions_exists: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct AppStatusPayload {
    pub paths: AppPathState,
    pub last_scan_at: i64,
    pub usage_source: UsageSource,
    pub auto_switch: AutoSwitchStatusPayload,
    pub api: ApiConfigPayload,
    pub api_connectivity: ApiConnectivityPayload,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct CoreSnapshotPayload {
    pub backend_status: BackendSkeletonStatus,
    pub status: AppStatusPayload,
    pub accounts: Vec<AccountSummaryPayload>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct SystemInfoPayload {
    pub backend_status: BackendSkeletonStatus,
    pub os: String,
    pub os_version: String,
    pub arch: String,
    pub hostname: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct SystemActionPayload {
    pub backend_status: BackendSkeletonStatus,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub config_cleared: Option<bool>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub killed_count: Option<i32>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub terminated_process_count: Option<i32>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub processes: Option<Vec<String>>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct NotificationClientStatePayload {
    pub backend_status: BackendSkeletonStatus,
    pub device_id: String,
    pub notifications_since: i64,
}
