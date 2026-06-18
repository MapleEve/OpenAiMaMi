use crate::contracts::{AppPathState, BackendSkeletonStatus};
use serde::Serialize;

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnosePayload {
    pub backend_status: BackendSkeletonStatus,
    pub paths: AppPathState,
    pub core_version: String,
    pub platform: DiagnosePlatform,
    pub registry_state: DiagnoseRegistryState,
    pub session_state: DiagnoseSessionState,
    pub api_state: DiagnoseApiState,
    pub diagnostic_snapshot: DiagnoseDiagnosticSnapshotPayload,
    pub pending_diagnostics: Vec<DiagnoseDiagnosticFieldPayload>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnosePlatform {
    pub os: String,
    pub arch: String,
    pub info_source: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseDiagnosticSnapshotPayload {
    pub root_path: String,
    pub source_path: String,
    pub status_code: String,
    pub message: String,
    pub probes: Vec<DiagnoseDiagnosticProbePayload>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseDiagnosticProbePayload {
    pub path: String,
    pub exists: bool,
    pub count: Option<i32>,
    pub status_code: String,
    pub message: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseDiagnosticFieldPayload {
    pub field: String,
    pub status: String,
    pub detail: Option<String>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseRegistryState {
    pub account_count: i32,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseSessionState {
    pub latest_rollout_found: bool,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct DiagnoseApiState {
    pub usage_attempt_count: i32,
    pub usage_success_count: i32,
    pub name_attempt_count: i32,
    pub name_success_count: i32,
    pub last_usage_failure: Option<String>,
    pub last_usage_failure_account: Option<String>,
    pub last_name_failure: Option<String>,
    pub last_name_failure_account: Option<String>,
}
