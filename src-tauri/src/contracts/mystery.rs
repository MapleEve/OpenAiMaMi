use serde::{Deserialize, Serialize};

// 兼容说明：MysteryRouteGrant 的持久化入口在 settings.json，业务事务 owner 在 mystery usecase。
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
#[serde(rename_all = "camelCase")]
pub struct MysteryRouteGrant {
    pub route: String,
    #[serde(rename = "epochMs", alias = "epoch_ms")]
    pub epoch_ms: i64,
}
