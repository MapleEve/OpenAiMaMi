use crate::application::service::{current_timestamp, restored_status};
use crate::contracts::{
    BackendEffect, RuntimeExtensionConfigPayload, RuntimeExtensionListPayload,
    RuntimeExtensionPluginPayload, RuntimeExtensionSettingsValue, RuntimeExtensionTogglePayload,
};
use crate::core::error::CoreError;
use crate::repository::{
    runtime_extensions::{self, RuntimeExtensionRecord},
    Repository,
};

// usecase 只编排 list/toggle/config 用户动作；plugins.json 结构和保存事务归 repository。
pub fn list(repo: &Repository) -> Result<RuntimeExtensionListPayload, CoreError> {
    let items = runtime_extensions::list_plugins(repo)?
        .into_iter()
        .map(plugin_payload)
        .collect::<Vec<_>>();
    Ok(RuntimeExtensionListPayload {
        backend_status: restored_status("runtime-extensions", "list_plugins", BackendEffect::NoOp),
        total: items.len() as i32,
        source_path: runtime_extensions::plugins_path(repo).display().to_string(),
        last_scan_at: current_timestamp(),
        items,
    })
}

pub fn toggle(
    repo: &Repository,
    id: String,
    enabled: bool,
) -> Result<RuntimeExtensionTogglePayload, CoreError> {
    let (plugin, items) = runtime_extensions::set_enabled(repo, &id, enabled)?;
    let plugin = plugin_payload(plugin);
    let items = items.into_iter().map(plugin_payload).collect::<Vec<_>>();
    Ok(RuntimeExtensionTogglePayload {
        backend_status: restored_status("runtime-extensions", "toggle_plugin", BackendEffect::NoOp),
        plugin,
        total: items.len() as i32,
        source_path: runtime_extensions::plugins_path(repo).display().to_string(),
        last_scan_at: current_timestamp(),
        items,
    })
}

fn plugin_payload(record: RuntimeExtensionRecord) -> RuntimeExtensionPluginPayload {
    RuntimeExtensionPluginPayload {
        id: record.id,
        name: record.name,
        title: record.title,
        description: record.description,
        version: record.version,
        author: record.author,
        category: record.category,
        capabilities: record.capabilities,
        builtin: record.builtin,
        path: record.path,
        enabled: record.enabled,
        settings: record.settings,
    }
}

pub fn config(
    repo: &Repository,
    id: String,
    settings: Option<RuntimeExtensionSettingsValue>,
) -> Result<RuntimeExtensionConfigPayload, CoreError> {
    let (settings, updated, command) = if let Some(settings) = settings {
        (
            runtime_extensions::update_settings(repo, &id, settings)?,
            true,
            "update_plugin_config",
        )
    } else {
        (
            runtime_extensions::get_config(repo, &id)?,
            false,
            "get_plugin_config",
        )
    };

    Ok(RuntimeExtensionConfigPayload {
        backend_status: restored_status("runtime-extensions", command, BackendEffect::NoOp),
        id,
        settings,
        source_path: runtime_extensions::plugins_path(repo).display().to_string(),
        updated,
    })
}
