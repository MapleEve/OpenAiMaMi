use serde::{Deserialize, Serialize};

pub(crate) const HISTORY_LIMIT: usize = 10;

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum CustomInstructionProtection {
    Ready,
    Unmanaged,
    Protected,
}

#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub(crate) enum CustomInstructionHistoryAction {
    Apply,
    Clear,
    Rollback,
}

#[derive(Debug, Clone)]
pub(crate) struct ParsedCustomInstructionBlock {
    pub file_exists: bool,
    pub protection_state: CustomInstructionProtection,
    pub issue_message: Option<String>,
    pub managed_block_present: bool,
    pub managed_content: String,
    pub raw_content: String,
    pub block_start: Option<usize>,
    pub block_end: Option<usize>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub(crate) struct CustomInstructionHistorySnapshot {
    pub id: String,
    pub created_at: i64,
    pub action: CustomInstructionHistoryAction,
    pub source: String,
    pub template_code: Option<String>,
    pub template_title: Option<String>,
    pub full_content: String,
}

impl CustomInstructionHistorySnapshot {
    pub fn new(
        id: String,
        created_at: i64,
        action: CustomInstructionHistoryAction,
        source: String,
        template_code: Option<String>,
        template_title: Option<String>,
        full_content: String,
    ) -> Self {
        Self {
            id,
            created_at,
            action,
            source,
            template_code,
            template_title,
            full_content,
        }
    }
}
