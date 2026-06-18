use crate::contracts::{BackendSkeletonStatus, InstalledSkillSummary, McpServerSummary};
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize, Default)]
#[serde(rename_all = "camelCase")]
pub struct BootstrapCacheFile {
    #[serde(default)]
    pub written_at: Option<serde_json::Value>,
    #[serde(default)]
    pub snapshot_progressive: Option<serde_json::Value>,
    #[serde(default)]
    pub usage_analytics: Option<serde_json::Value>,
    #[serde(default)]
    pub mcp_servers: Option<Vec<McpServerSummary>>,
    #[serde(default)]
    pub installed_skills: Option<Vec<InstalledSkillSummary>>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct BootstrapStatePayload {
    pub backend_status: BackendSkeletonStatus,
    pub written_at: Option<serde_json::Value>,
    pub snapshot_progressive: Option<serde_json::Value>,
    pub usage_analytics: Option<serde_json::Value>,
    pub mcp_servers: Option<Vec<McpServerSummary>>,
    pub installed_skills: Option<Vec<InstalledSkillSummary>>,
    pub executed_at: Option<String>,
    pub run_once: bool,
    pub auto_switch_enabled: bool,
    pub active_account_key: Option<String>,
    pub switched_account_key: Option<String>,
    pub pending_switch_account_key: Option<String>,
}
