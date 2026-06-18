use crate::contracts::BackendSkeletonStatus;
use serde::Serialize;

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
pub struct UpdateInstallabilityPayload {
    pub backend_status: BackendSkeletonStatus,
    pub can_install: bool,
    pub code: String,
    pub executable_path: Option<String>,
    pub bundle_path: Option<String>,
    pub translocated: bool,
    pub quarantined: bool,
}
