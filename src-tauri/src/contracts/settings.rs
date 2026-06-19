use crate::contracts::mystery::MysteryRouteGrant;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
#[serde(rename_all = "lowercase")]
pub enum ApiProxyMode {
    #[default]
    Direct,
    Manual,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
#[serde(rename_all = "camelCase")]
pub enum ApiReachabilityStatus {
    #[default]
    Unknown,
    Reachable,
    Unreachable,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
#[serde(rename_all = "camelCase")]
pub struct ApiProxyConfigPayload {
    #[serde(default)]
    pub mode: ApiProxyMode,
    #[serde(default)]
    pub url: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct AppSettingsFile {
    #[serde(default)]
    pub hotspot_enabled: bool,
    #[serde(default = "default_usage_refresh_interval")]
    pub usage_refresh_interval: String,
    #[serde(default)]
    pub api_proxy: ApiProxyConfigPayload,
    #[serde(default)]
    pub auto_switch_enabled: bool,
    #[serde(default = "default_threshold_5h")]
    pub threshold_5h_percent: i32,
    #[serde(default = "default_threshold_weekly")]
    pub threshold_weekly_percent: i32,
    #[serde(default)]
    pub device_id: Option<String>,
    #[serde(default)]
    pub notifications_since: i64,
    #[serde(default, alias = "remote_device_secret")]
    pub remote_device_secret: Option<String>,
    #[serde(default, alias = "mysteryUnlockedRoutes")]
    pub mystery_unlock_grants: Vec<MysteryRouteGrant>,
}

impl Default for AppSettingsFile {
    fn default() -> Self {
        Self {
            hotspot_enabled: false,
            usage_refresh_interval: default_usage_refresh_interval(),
            api_proxy: ApiProxyConfigPayload::default(),
            auto_switch_enabled: false,
            threshold_5h_percent: default_threshold_5h(),
            threshold_weekly_percent: default_threshold_weekly(),
            device_id: None,
            notifications_since: 0,
            remote_device_secret: None,
            mystery_unlock_grants: Vec::new(),
        }
    }
}

pub fn default_usage_refresh_interval() -> String {
    "1m".to_string()
}

fn default_threshold_5h() -> i32 {
    15
}

fn default_threshold_weekly() -> i32 {
    10
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ApiConfigPayload {
    pub proxy: ApiProxyConfigPayload,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ApiConnectivityPayload {
    pub usage_status: ApiReachabilityStatus,
    pub usage_last_error: Option<String>,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ApiModePayload {
    pub api: ApiConfigPayload,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ApiProxyTestPayload {
    pub code: String,
    pub reachable: bool,
    pub status_code: Option<i32>,
    pub message: String,
}

#[derive(Debug, Clone, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ApiProxyDetectPayload {
    pub found: bool,
    pub mode: Option<ApiProxyMode>,
    pub url: Option<String>,
    pub probe: ApiProxyTestPayload,
}
