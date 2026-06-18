use crate::contracts::BackendSkeletonStatus;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
#[serde(rename_all = "camelCase")]
pub enum AutoSwitchRuntimeState {
    Running,
    Stopped,
    NotInstalled,
    #[default]
    Unknown,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct AutoSwitchStatusPayload {
    pub enabled: bool,
    pub threshold_5h_percent: i32,
    pub threshold_weekly_percent: i32,
    pub service_state: AutoSwitchRuntimeState,
    pub service_label: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct AutoSwitchConfigPayload {
    pub backend_status: BackendSkeletonStatus,
    pub auto_switch: AutoSwitchStatusPayload,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DaemonRunPayload {
    pub backend_status: BackendSkeletonStatus,
    pub executed_at: i64,
    pub run_once: bool,
    pub auto_switch_enabled: bool,
    pub service_state: AutoSwitchRuntimeState,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct PendingAutoSwitchStatePayload {
    pub backend_status: BackendSkeletonStatus,
    pub current_account_key: String,
    pub candidate_account_key: String,
    pub dismissed_at: Option<String>,
}
