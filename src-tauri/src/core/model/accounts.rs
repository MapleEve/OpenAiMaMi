use serde::{Deserialize, Serialize};
use serde_json::{Map, Value};

// 账号领域模型只表达 registry 中可重建的账号状态，不持有文件系统或 Tauri 对象。
#[derive(Debug, Clone, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub(crate) struct AccountRegistryDocument {
    #[serde(default)]
    pub(crate) schema_version: i32,
    #[serde(default, alias = "accounts")]
    pub(crate) items: Vec<AccountRegistryItem>,
    #[serde(default, alias = "active")]
    pub(crate) active_account_key: Option<String>,
    #[serde(flatten)]
    pub(crate) extra: Map<String, Value>,
}

impl AccountRegistryDocument {
    pub(crate) fn normalize(&mut self) {
        let active = self.active_account_key.clone();
        for item in &mut self.items {
            if item.account_key.is_empty() {
                item.account_key = first_value_string(&item.extra, &["accountKey", "key", "id"]);
            }
            if active.as_deref() == Some(item.account_key.as_str()) {
                item.active = true;
            }
        }
        if self.active_account_key.is_none() {
            self.active_account_key = self
                .items
                .iter()
                .find(|item| item.active)
                .map(|item| item.account_key.clone());
        }
    }

    pub(crate) fn active_key(&self) -> Option<String> {
        self.active_account_key
            .clone()
            .or_else(|| {
                self.items
                    .iter()
                    .find(|item| item.active)
                    .map(|item| item.account_key.clone())
            })
            .filter(|value| !value.is_empty())
    }

    pub(crate) fn set_active_account(&mut self, account_key: &str) {
        self.active_account_key = Some(account_key.to_string());
        for item in &mut self.items {
            item.active = item.account_key == account_key;
        }
    }

    pub(crate) fn clear_active_account(&mut self) {
        self.active_account_key = None;
        for item in &mut self.items {
            item.active = false;
        }
    }
}

// 单个账号条目只保存公开 registry 能还原出的字段，额外字段保持透传。
#[derive(Debug, Clone, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub(crate) struct AccountRegistryItem {
    #[serde(default, alias = "key", alias = "id")]
    pub(crate) account_key: String,
    #[serde(default)]
    pub(crate) email: Option<String>,
    #[serde(default)]
    pub(crate) alias: Option<String>,
    #[serde(default)]
    pub(crate) account_name: Option<String>,
    #[serde(default)]
    pub(crate) workspace_name: Option<String>,
    #[serde(default)]
    pub(crate) profile_name: Option<String>,
    #[serde(default)]
    pub(crate) plan: Option<String>,
    #[serde(default, alias = "isActive")]
    pub(crate) active: bool,
    #[serde(default)]
    pub(crate) snapshot_path: Option<String>,
    #[serde(flatten)]
    pub(crate) extra: Map<String, Value>,
}

// 账号导入导出文件模型属于可重建文件格式，不属于 IPC DTO。
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub(crate) struct AccountExportDocument {
    pub(crate) kind: String,
    pub(crate) schema_version: i32,
    #[serde(default)]
    pub(crate) app_version: Option<String>,
    #[serde(default)]
    pub(crate) exported_at: Option<String>,
    #[serde(default)]
    pub(crate) exported_hostname: Option<String>,
    #[serde(default)]
    pub(crate) accounts: Vec<AccountExportEntry>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub(crate) struct AccountExportEntry {
    pub(crate) account_key: String,
    #[serde(default)]
    pub(crate) summary: AccountRegistryItem,
    #[serde(default)]
    pub(crate) auth: Option<Value>,
    #[serde(default)]
    pub(crate) snapshot: Option<Value>,
}

fn first_value_string(extra: &Map<String, Value>, keys: &[&str]) -> String {
    keys.iter()
        .find_map(|key| extra.get(*key).and_then(Value::as_str))
        .unwrap_or_default()
        .to_string()
}
