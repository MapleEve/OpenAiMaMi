use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "snake_case")]
pub enum BackendEffect {
    Pending,
    NoOp,
    Platform,
    Unsupported,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct BackendSkeletonBoundaryStatus {
    pub repository_checked: bool,
    pub repository_path_known: bool,
    pub platform_checked: bool,
    pub core_checked: bool,
    pub effect: BackendEffect,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct RuntimeBridgeEventPayload {
    #[serde(rename = "type")]
    pub event_type: String,
    pub module_id: String,
    pub mode: String,
    pub sequence: u64,
    pub received_at: i64,
    pub command: String,
    pub status_code: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct BackendSkeletonStatus {
    pub module: String,
    pub command: String,
    pub restored: bool,
    pub note: String,
    pub boundary: BackendSkeletonBoundaryStatus,
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub runtime_event: Option<RuntimeBridgeEventPayload>,
}

impl BackendSkeletonStatus {
    pub fn restored(module: &str, command: &str, effect: BackendEffect) -> Self {
        Self {
            module: module.to_string(),
            command: command.to_string(),
            restored: true,
            note: "已补回公开后端能力，并按当前六边形边界接入。".to_string(),
            boundary: BackendSkeletonBoundaryStatus {
                repository_checked: true,
                repository_path_known: true,
                platform_checked: matches!(effect, BackendEffect::Platform),
                core_checked: true,
                effect,
            },
            runtime_event: None,
        }
    }

    pub fn pending(module: &str, command: &str, note: &str) -> Self {
        Self {
            module: module.to_string(),
            command: command.to_string(),
            restored: false,
            note: note.to_string(),
            boundary: BackendSkeletonBoundaryStatus {
                repository_checked: false,
                repository_path_known: false,
                platform_checked: false,
                core_checked: false,
                effect: BackendEffect::Pending,
            },
            runtime_event: None,
        }
    }

    pub fn unsupported(module: &str, command: &str, note: &str) -> Self {
        Self {
            module: module.to_string(),
            command: command.to_string(),
            restored: false,
            note: note.to_string(),
            boundary: BackendSkeletonBoundaryStatus {
                repository_checked: true,
                repository_path_known: false,
                platform_checked: true,
                core_checked: true,
                effect: BackendEffect::Unsupported,
            },
            runtime_event: None,
        }
    }
}
