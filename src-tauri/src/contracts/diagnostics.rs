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
    pub catalog_integrity: DiagnoseCatalogIntegrityPayload,
    pub pending_diagnostics: Vec<DiagnoseDiagnosticFieldPayload>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
// 公开平台 DTO 只包含 os/arch/source，避免把 hostname、os_version 或平台能力探针写入诊断合同。
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
pub struct DiagnoseCatalogIntegrityPayload {
    pub source_path: String,
    pub catalog_source_path: Option<String>,
    pub diagnostic_boundary: String,
    pub pending: bool,
    pub status: String,
    pub detail: String,
    pub codex_provider_count: i32,
    pub catalog_exists: bool,
    pub config_toml_has_router: bool,
    pub config_toml_has_catalog: bool,
    pub config_toml_syntax_valid: bool,
    pub config_toml_syntax_reason: Option<String>,
    pub config_profile_conflict: bool,
    pub config_profile_conflict_reason: Option<String>,
    pub managed_block_exists: bool,
    pub router_enabled: bool,
    pub user_top_level_profile: Option<String>,
    pub config_stale_reason: Option<String>,
    pub has_issues: bool,
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
