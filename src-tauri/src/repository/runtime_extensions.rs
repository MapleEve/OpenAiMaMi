use crate::core::error::CoreError;
use crate::repository::Repository;
use serde::{Deserialize, Deserializer, Serialize};
use serde_json::{Map, Value};
use std::collections::{HashMap, HashSet};
use std::path::PathBuf;

const WEB_TOOLS_ID: &str = "web-tools";
const IMAGE_SUPPORT_ID: &str = "image-support";
const STORE_SCHEMA_VERSION: i32 = 1;

pub(crate) struct RuntimeExtensionsRepository;

// runtime-extensions 仓储只读写可重建的 plugins.json，不加载或执行插件代码。
pub(crate) trait RuntimeExtensionsRepositoryBoundary {}

impl RuntimeExtensionsRepositoryBoundary for RuntimeExtensionsRepository {}

/// repository 层记录插件 registry/store 状态，不直接暴露 IPC payload。
#[derive(Debug, Clone, PartialEq)]
pub struct RuntimeExtensionRecord {
    pub id: String,
    pub name: String,
    pub title: Option<String>,
    pub description: Option<String>,
    pub version: Option<String>,
    pub author: Option<String>,
    pub category: Option<String>,
    pub capabilities: Vec<i32>,
    pub builtin: bool,
    pub path: Option<String>,
    pub enabled: bool,
    pub settings: Value,
}

// plugins.json 的内部持久化文档，只能由 repository 层反序列化和写回。
#[derive(Debug, Clone, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct PluginStoreDocument {
    #[serde(default)]
    schema_version: i32,
    #[serde(default)]
    plugins: Vec<PluginStoreEntry>,
    #[serde(flatten)]
    extra: Map<String, Value>,
}

// plugins.json 的内部条目结构保留未知字段，避免持久化边界误删未闭合证据字段。
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct PluginStoreEntry {
    #[serde(default)]
    id: String,
    #[serde(default)]
    name: String,
    #[serde(default)]
    title: Option<String>,
    #[serde(default)]
    description: Option<String>,
    #[serde(default)]
    version: Option<String>,
    #[serde(default)]
    author: Option<String>,
    #[serde(default, deserialize_with = "deserialize_optional_category")]
    category: Option<String>,
    #[serde(default)]
    capabilities: Vec<i32>,
    #[serde(default)]
    builtin: bool,
    #[serde(default)]
    path: Option<String>,
    #[serde(default)]
    enabled: bool,
    #[serde(default = "empty_settings")]
    settings: Value,
    #[serde(flatten)]
    extra: Map<String, Value>,
}

impl Default for PluginStoreEntry {
    fn default() -> Self {
        Self {
            id: String::new(),
            name: String::new(),
            title: None,
            description: None,
            version: None,
            author: None,
            category: None,
            capabilities: Vec::new(),
            builtin: false,
            path: None,
            enabled: false,
            settings: empty_settings(),
            extra: Map::new(),
        }
    }
}

pub fn plugins_path(repo: &Repository) -> PathBuf {
    repo.paths().runtime_extensions_path.clone()
}

pub fn list_plugins(repo: &Repository) -> Result<Vec<RuntimeExtensionRecord>, CoreError> {
    let store = load_merged_store(repo)?;
    save_store(repo, &store)?;
    Ok(store.into_iter().map(record_from_entry).collect())
}

pub fn set_enabled(
    repo: &Repository,
    id: &str,
    enabled: bool,
) -> Result<(RuntimeExtensionRecord, Vec<RuntimeExtensionRecord>), CoreError> {
    validate_plugin_id(id)?;
    let mut store = load_merged_store(repo)?;
    let index = find_plugin_index(&store, id)?;
    store[index].enabled = enabled;
    save_store(repo, &store)?;
    let plugin = record_from_entry(store[index].clone());
    let items = store.into_iter().map(record_from_entry).collect();
    Ok((plugin, items))
}

pub fn get_config(repo: &Repository, id: &str) -> Result<Value, CoreError> {
    validate_plugin_id(id)?;
    let store = load_merged_store(repo)?;
    let index = find_plugin_index(&store, id)?;
    Ok(store[index].settings.clone())
}

pub fn update_settings(repo: &Repository, id: &str, settings: Value) -> Result<Value, CoreError> {
    validate_plugin_id(id)?;
    let mut store = load_merged_store(repo)?;
    let index = find_plugin_index(&store, id)?;
    store[index].settings = settings;
    save_store(repo, &store)?;
    Ok(store[index].settings.clone())
}

fn load_merged_store(repo: &Repository) -> Result<Vec<PluginStoreEntry>, CoreError> {
    let stored = load_store(repo)?;
    let mut stored_by_id = stored
        .into_iter()
        .map(|plugin| (plugin.id.clone(), plugin))
        .collect::<HashMap<_, _>>();

    let mut result = Vec::new();
    for builtin in builtin_plugins() {
        if let Some(stored) = stored_by_id.remove(&builtin.id) {
            result.push(merge_builtin_with_stored(builtin, stored));
        } else {
            result.push(builtin);
        }
    }

    let mut custom = stored_by_id.into_values().collect::<Vec<_>>();
    custom.sort_by(|left, right| {
        left.name
            .to_lowercase()
            .cmp(&right.name.to_lowercase())
            .then_with(|| left.id.cmp(&right.id))
    });
    result.extend(custom);
    Ok(result)
}

fn load_store(repo: &Repository) -> Result<Vec<PluginStoreEntry>, CoreError> {
    let path = plugins_path(repo);
    if !repo.fs().exists(&path) {
        return Ok(Vec::new());
    }

    let raw = repo.fs().read_to_string(&path)?;
    if raw.trim().is_empty() {
        return Ok(Vec::new());
    }

    let value: Value = serde_json::from_str(&raw)?;
    read_store_entries(value)
}

fn read_store_entries(value: Value) -> Result<Vec<PluginStoreEntry>, CoreError> {
    if let Some(schema_version) = value
        .as_object()
        .and_then(|object| object.get("schemaVersion"))
        .and_then(Value::as_i64)
    {
        if schema_version > 1 {
            return Err(CoreError::InvalidInput(format!(
                "插件 registry schemaVersion 不支持：{schema_version}"
            )));
        }
    }

    if let Ok(document) = serde_json::from_value::<PluginStoreDocument>(value.clone()) {
        if !document.plugins.is_empty() {
            return normalize_entries(document.plugins);
        }
    }

    let Some(object) = value.as_object() else {
        return Ok(Vec::new());
    };

    if let Some(plugins) = object.get("plugins") {
        return read_plugin_collection(plugins);
    }

    read_plugin_map(object)
}

fn read_plugin_collection(value: &Value) -> Result<Vec<PluginStoreEntry>, CoreError> {
    if let Some(items) = value.as_array() {
        let entries = items
            .iter()
            .map(|item| serde_json::from_value::<PluginStoreEntry>(item.clone()))
            .collect::<Result<Vec<_>, _>>()?;
        return normalize_entries(entries);
    }

    value
        .as_object()
        .map(read_plugin_map)
        .unwrap_or_else(|| Ok(Vec::new()))
}

fn read_plugin_map(object: &Map<String, Value>) -> Result<Vec<PluginStoreEntry>, CoreError> {
    let mut entries = Vec::new();
    for (id, value) in object {
        if value.is_null() {
            continue;
        }
        let mut entry = serde_json::from_value::<PluginStoreEntry>(value.clone())?;
        if entry.id.trim().is_empty() {
            entry.id = id.clone();
        }
        entries.push(entry);
    }
    normalize_entries(entries)
}

fn normalize_entries(entries: Vec<PluginStoreEntry>) -> Result<Vec<PluginStoreEntry>, CoreError> {
    let mut seen = HashSet::new();
    let mut normalized = Vec::new();
    for mut entry in entries {
        entry.id = entry.id.trim().to_string();
        if entry.id.is_empty() {
            return Err(CoreError::InvalidInput("插件 id 不能为空".to_string()));
        }
        if !seen.insert(entry.id.clone()) {
            return Err(CoreError::InvalidInput(format!(
                "插件 id 重复：{}",
                entry.id
            )));
        }
        if entry.name.trim().is_empty() {
            entry.name = entry.id.clone();
        }
        normalized.push(entry);
    }
    Ok(normalized)
}

fn save_store(repo: &Repository, plugins: &[PluginStoreEntry]) -> Result<(), CoreError> {
    repo.fs().create_dir_all(&repo.paths().app_data_dir)?;
    let document = PluginStoreDocument {
        schema_version: STORE_SCHEMA_VERSION,
        plugins: plugins.to_vec(),
        extra: Map::new(),
    };
    let path = plugins_path(repo);
    let tmp = path.with_extension("json.tmp");
    repo.fs()
        .write_string(&tmp, &serde_json::to_string_pretty(&document)?)?;
    repo.fs().rename(&tmp, &path)
}

fn builtin_plugins() -> Vec<PluginStoreEntry> {
    // 证据闭合内建 registry 字段；enabled/settings 的新建默认仍只是可序列化占位。
    vec![
        PluginStoreEntry {
            id: WEB_TOOLS_ID.to_string(),
            name: "Web Tools".to_string(),
            title: Some("Web Tools".to_string()),
            version: Some("1.0.0".to_string()),
            author: Some("AiMaMi".to_string()),
            category: Some("0".to_string()),
            capabilities: vec![0],
            builtin: true,
            ..PluginStoreEntry::default()
        },
        PluginStoreEntry {
            id: IMAGE_SUPPORT_ID.to_string(),
            name: "Image Support".to_string(),
            title: Some("Image Support".to_string()),
            version: Some("1.0.0".to_string()),
            author: Some("AiMaMi".to_string()),
            category: Some("0".to_string()),
            capabilities: vec![1],
            builtin: true,
            ..PluginStoreEntry::default()
        },
    ]
}

fn merge_builtin_with_stored(
    builtin: PluginStoreEntry,
    stored: PluginStoreEntry,
) -> PluginStoreEntry {
    PluginStoreEntry {
        id: builtin.id,
        name: builtin.name,
        title: builtin.title,
        description: builtin.description,
        version: builtin.version,
        author: builtin.author,
        category: builtin.category,
        capabilities: builtin.capabilities,
        builtin: builtin.builtin,
        path: builtin.path,
        enabled: stored.enabled,
        settings: stored.settings,
        extra: stored.extra,
    }
}

fn record_from_entry(plugin: PluginStoreEntry) -> RuntimeExtensionRecord {
    RuntimeExtensionRecord {
        id: plugin.id,
        name: plugin.name,
        title: plugin.title,
        description: plugin.description,
        version: plugin.version,
        author: plugin.author,
        category: plugin.category,
        capabilities: plugin.capabilities,
        builtin: plugin.builtin,
        path: plugin.path,
        enabled: plugin.enabled,
        settings: plugin.settings,
    }
}

fn find_plugin_index(plugins: &[PluginStoreEntry], id: &str) -> Result<usize, CoreError> {
    plugins
        .iter()
        .position(|plugin| plugin.id == id)
        .ok_or_else(|| CoreError::NotFound(format!("插件不存在：{id}")))
}

fn validate_plugin_id(id: &str) -> Result<(), CoreError> {
    if id.trim().is_empty() {
        return Err(CoreError::InvalidInput("插件 id 不能为空".to_string()));
    }
    Ok(())
}

fn non_empty_string(value: String) -> Option<String> {
    let trimmed = value.trim();
    (!trimmed.is_empty()).then(|| trimmed.to_string())
}

fn empty_settings() -> Value {
    Value::Object(Map::new())
}

fn deserialize_optional_category<'de, D>(deserializer: D) -> Result<Option<String>, D::Error>
where
    D: Deserializer<'de>,
{
    let value = Option::<Value>::deserialize(deserializer)?;
    Ok(value.and_then(|value| match value {
        Value::String(value) => non_empty_string(value),
        Value::Number(value) => Some(value.to_string()),
        _ => None,
    }))
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::Repository;
    use serde_json::json;

    #[test]
    fn list_merges_builtin_plugins_when_store_is_missing() {
        let repo = Repository::with_temp_file_system("runtime-extensions-list-missing");
        let items = list_plugins(&repo).expect("list plugins");

        assert_eq!(items.len(), 2);
        assert_eq!(items[0].id, WEB_TOOLS_ID);
        assert_eq!(items[1].id, IMAGE_SUPPORT_ID);
        assert_eq!(items[0].category.as_deref(), Some("0"));
        assert!(!items[0].enabled);
        assert!(repo.fs().exists(&plugins_path(&repo)));
    }

    #[test]
    fn list_reads_existing_map_store_and_preserves_custom_plugin() {
        let repo = Repository::with_temp_file_system("runtime-extensions-list-map");
        let path = plugins_path(&repo);
        repo.fs()
            .write_string(
                &path,
                &json!({
                    "plugins": {
                        "web-tools": {"enabled": true, "settings": {"network": "local"}},
                        "custom": {"name": "Custom", "enabled": true}
                    }
                })
                .to_string(),
            )
            .expect("write fixture");

        let items = list_plugins(&repo).expect("list plugins");

        assert_eq!(items.len(), 3);
        assert!(items
            .iter()
            .any(|item| item.id == WEB_TOOLS_ID && item.enabled));
        assert!(items.iter().any(|item| item.id == "custom" && item.enabled));
    }

    #[test]
    fn duplicate_id_is_rejected() {
        let repo = Repository::with_temp_file_system("runtime-extensions-duplicate");
        repo.fs()
            .write_string(
                &plugins_path(&repo),
                &json!({
                    "schemaVersion": 1,
                    "plugins": [
                        {"id": "web-tools", "enabled": true},
                        {"id": "web-tools", "enabled": false}
                    ]
                })
                .to_string(),
            )
            .expect("write fixture");

        assert!(matches!(
            list_plugins(&repo),
            Err(CoreError::InvalidInput(_))
        ));
    }

    #[test]
    fn unsupported_schema_version_is_rejected() {
        let repo = Repository::with_temp_file_system("runtime-extensions-schema");
        repo.fs()
            .write_string(
                &plugins_path(&repo),
                &json!({"schemaVersion": 2, "plugins": []}).to_string(),
            )
            .expect("write fixture");

        assert!(matches!(
            list_plugins(&repo),
            Err(CoreError::InvalidInput(_))
        ));
    }

    #[test]
    fn empty_id_is_rejected() {
        let repo = Repository::with_temp_file_system("runtime-extensions-empty-id");
        repo.fs()
            .write_string(
                &plugins_path(&repo),
                &json!({"schemaVersion": 1, "plugins": [{"id": ""}]}).to_string(),
            )
            .expect("write fixture");

        assert!(matches!(
            list_plugins(&repo),
            Err(CoreError::InvalidInput(_))
        ));
    }

    #[test]
    fn toggle_persists_enabled_state() {
        let repo = Repository::with_temp_file_system("runtime-extensions-toggle");

        set_enabled(&repo, WEB_TOOLS_ID, true).expect("toggle plugin");
        let items = list_plugins(&repo).expect("list plugins");
        let web_tools = items
            .iter()
            .find(|item| item.id == WEB_TOOLS_ID)
            .expect("web tools");

        assert!(web_tools.enabled);
        assert!(repo.fs().exists(&plugins_path(&repo)));
    }

    #[test]
    fn config_roundtrip_persists_settings() {
        let repo = Repository::with_temp_file_system("runtime-extensions-config");
        let settings = json!({"timeout": 30, "enabledDomains": ["example.com"]});

        update_settings(&repo, WEB_TOOLS_ID, settings.clone()).expect("update settings");

        assert_eq!(
            get_config(&repo, WEB_TOOLS_ID).expect("get config"),
            settings
        );
    }

    #[test]
    fn toggle_preserves_settings_and_builtin_registry_fields() {
        let repo = Repository::with_temp_file_system("runtime-extensions-preserve");
        repo.fs()
            .write_string(
                &plugins_path(&repo),
                &json!({
                    "schemaVersion": 1,
                    "plugins": [{
                        "id": "web-tools",
                        "name": "Custom Web Tools",
                        "title": "Custom Title",
                        "description": "desc",
                        "path": "../display-only",
                        "enabled": false,
                        "settings": {"keep": true}
                    }]
                })
                .to_string(),
            )
            .expect("write fixture");

        set_enabled(&repo, WEB_TOOLS_ID, true).expect("toggle plugin");
        let items = load_merged_store(&repo).expect("load merged");
        let web_tools = items
            .iter()
            .find(|item| item.id == WEB_TOOLS_ID)
            .expect("web tools");

        assert_eq!(web_tools.settings, json!({"keep": true}));
        assert_eq!(web_tools.name, "Web Tools");
        assert_eq!(web_tools.title.as_deref(), Some("Web Tools"));
        assert_eq!(web_tools.path, None);
        assert_eq!(web_tools.category.as_deref(), Some("0"));
        assert!(web_tools.enabled);
    }

    #[test]
    fn missing_plugin_is_rejected_for_mutations() {
        let repo = Repository::with_temp_file_system("runtime-extensions-missing");

        assert!(matches!(
            set_enabled(&repo, "missing", true),
            Err(CoreError::NotFound(_))
        ));
        assert!(matches!(
            get_config(&repo, "missing"),
            Err(CoreError::NotFound(_))
        ));
        assert!(matches!(
            update_settings(&repo, "missing", json!({})),
            Err(CoreError::NotFound(_))
        ));
    }
}
