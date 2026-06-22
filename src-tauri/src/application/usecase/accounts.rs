use crate::application::ports::AppSystemPort;
use crate::application::service::restored_status;
use crate::contracts::accounts::{
    AccountExportPayload, AccountImportPayload, AccountImportPreviewEntry,
    AccountImportPreviewPayload, AccountMonitorPayload, AccountSkippedPayload,
    AccountSummaryPayload, LogoutPayload, RemovePayload, SwitchPayload,
};
use crate::contracts::{BackendEffect, BackendSkeletonStatus};
use crate::core::error::CoreError;
use crate::core::model::accounts::{
    AccountExportDocument, AccountExportEntry, AccountRegistryItem,
};
use crate::repository::accounts as accounts_repository;
use crate::repository::Repository;
use chrono::Utc;
use serde_json::Value;
use std::collections::HashSet;
use std::path::Path;

const MODULE: &str = "accounts";
const MONITOR_PREFLIGHT_NOTE: &str =
    "已恢复公开证据支持的账号监视仓储预检边界；不创建后台 monitor、线程、运行时事件或平台副作用。";

// 账号监视公开范围只做 registry/snapshot 仓储预检，不创建后台线程或 runtime event。
pub fn begin_add_account_attach_monitor(
    repo: &Repository,
) -> Result<AccountMonitorPayload, CoreError> {
    let _registry = accounts_repository::load_registry(repo)?;
    let mut backend_status = restored("begin_add_account_attach_monitor");
    backend_status.note = MONITOR_PREFLIGHT_NOTE.to_string();
    Ok(AccountMonitorPayload { backend_status })
}

pub fn switch_account(repo: &Repository, account_key: String) -> Result<SwitchPayload, CoreError> {
    switch_account_with_status(repo, restored_write("switch_account"), account_key)
}

pub fn switch_account_and_restart_codex(
    repo: &Repository,
    account_key: String,
) -> Result<SwitchPayload, CoreError> {
    let mut payload = switch_account_with_status(
        repo,
        restored_write("switch_account_and_restart_codex"),
        account_key,
    )?;
    payload
        .backend_status
        .note
        .push_str(" 当前公开后端已恢复账号文件切换；外部程序重启仍由平台层后续补齐。");
    Ok(payload)
}

fn switch_account_with_status(
    repo: &Repository,
    status: BackendSkeletonStatus,
    account_key: String,
) -> Result<SwitchPayload, CoreError> {
    let mut registry = accounts_repository::load_registry(repo)?;
    let previous_account_key = registry.active_key();
    let item = registry
        .items
        .iter()
        .find(|item| item.account_key == account_key)
        .cloned()
        .ok_or_else(|| CoreError::NotFound(format!("Account not found: {account_key}")))?;
    let snapshot_path = accounts_repository::snapshot_path(repo, &item);
    accounts_repository::ensure_snapshot_exists(repo, &snapshot_path)?;
    accounts_repository::backup_auth_if_present(repo, previous_account_key.as_deref())?;
    accounts_repository::copy_snapshot_to_auth(repo, &snapshot_path)?;
    registry.set_active_account(&account_key);
    accounts_repository::save_registry(repo, &registry)?;

    Ok(SwitchPayload {
        backend_status: status,
        previous_account_key,
        active_account_key: Some(account_key.clone()),
        active_account: Some(account_summary_from_item(&item, Some(&account_key))),
        auth_updated: true,
        registry_updated: true,
    })
}

fn account_summary_from_item(
    item: &AccountRegistryItem,
    active_account_key: Option<&str>,
) -> AccountSummaryPayload {
    AccountSummaryPayload {
        account_key: item.account_key.clone(),
        email: first_string([item.email.as_ref(), item.account_name.as_ref()]),
        alias: item.alias.clone(),
        account_name: item.account_name.clone(),
        workspace_name: item.workspace_name.clone(),
        profile_name: item.profile_name.clone(),
        plan: item.plan.clone(),
        active: active_account_key == Some(item.account_key.as_str()) || item.active,
    }
}

fn first_string<const N: usize>(values: [Option<&String>; N]) -> Option<String> {
    values
        .into_iter()
        .flatten()
        .find(|value| !value.trim().is_empty())
        .cloned()
}

pub fn remove_accounts(
    repo: &Repository,
    account_keys: Vec<String>,
) -> Result<RemovePayload, CoreError> {
    let mut registry = accounts_repository::load_registry(repo)?;
    let previous_account_key = registry.active_key();
    let requested = account_keys.into_iter().collect::<HashSet<_>>();
    if requested.is_empty() {
        return Ok(RemovePayload {
            backend_status: restored("remove_accounts"),
            removed_account_keys: Vec::new(),
            removed_count: 0,
            previous_account_key,
        });
    }
    if let Some(active) = previous_account_key.as_ref() {
        if requested.contains(active) {
            return Err(CoreError::InvalidInput(
                "不能删除当前激活账号，请先切换或登出。".to_string(),
            ));
        }
    }

    let mut removed_account_keys = Vec::new();
    let mut retained = Vec::new();
    for item in registry.items {
        if requested.contains(&item.account_key) {
            accounts_repository::remove_snapshot_if_present(repo, &item)?;
            removed_account_keys.push(item.account_key);
        } else {
            retained.push(item);
        }
    }
    registry.items = retained;
    accounts_repository::save_registry(repo, &registry)?;

    Ok(RemovePayload {
        backend_status: restored_write("remove_accounts"),
        removed_count: removed_account_keys.len() as i32,
        removed_account_keys,
        previous_account_key,
    })
}

pub fn logout(repo: &Repository) -> Result<LogoutPayload, CoreError> {
    let auth_backed_up = accounts_repository::backup_auth_if_present(repo, None)?;
    let auth_removed = accounts_repository::remove_auth_if_present(repo)?;
    let mut registry = accounts_repository::load_registry(repo)?;
    let had_active = registry.active_key().is_some();
    registry.clear_active_account();
    if had_active || accounts_repository::registry_exists(repo) {
        accounts_repository::save_registry(repo, &registry)?;
    }

    Ok(LogoutPayload {
        backend_status: restored_write("logout"),
        auth_removed,
        auth_backed_up,
    })
}

pub fn export_accounts_to_file(
    repo: &Repository,
    system: &impl AppSystemPort,
    target_path: String,
    account_keys: Option<Vec<String>>,
) -> Result<AccountExportPayload, CoreError> {
    let registry = accounts_repository::load_registry(repo)?;
    if registry.items.is_empty() {
        return Err(CoreError::InvalidInput("没有可导出的账号。".to_string()));
    }
    let selected = account_keys
        .unwrap_or_default()
        .into_iter()
        .collect::<HashSet<_>>();
    let target_items = registry
        .items
        .iter()
        .filter(|item| selected.is_empty() || selected.contains(&item.account_key))
        .cloned()
        .collect::<Vec<_>>();
    if target_items.is_empty() {
        return Err(CoreError::InvalidInput("未找到要导出的账号。".to_string()));
    }

    let exported_at = Utc::now().to_rfc3339();
    let hostname = system.system_info().hostname;
    let exported_hostname =
        (!hostname.trim().is_empty() && hostname != "unknown").then_some(hostname);
    let accounts = target_items
        .iter()
        .map(|item| {
            let snapshot_path = accounts_repository::snapshot_path(repo, item);
            AccountExportEntry {
                account_key: item.account_key.clone(),
                summary: item.clone(),
                auth: accounts_repository::read_json_optional(repo, &snapshot_path),
                snapshot: accounts_repository::read_json_optional(repo, &snapshot_path),
            }
        })
        .collect::<Vec<_>>();
    let document = AccountExportDocument {
        kind: "account-export".to_string(),
        schema_version: 1,
        app_version: Some(env!("CARGO_PKG_VERSION").to_string()),
        exported_at: Some(exported_at.clone()),
        exported_hostname,
        accounts,
    };
    let normalized_target = normalize_json_target(target_path);
    accounts_repository::write_json_pretty(repo, Path::new(&normalized_target), &document)?;

    Ok(AccountExportPayload {
        backend_status: restored_write("export_accounts_to_file"),
        target_path: normalized_target,
        account_count: target_items.len() as i32,
        exported_at: Some(exported_at),
        skipped: Vec::new(),
    })
}

pub fn preview_account_import(
    repo: &Repository,
    file_path: String,
) -> Result<AccountImportPreviewPayload, CoreError> {
    let document = accounts_repository::read_export_document(repo, &file_path)?;
    let local = accounts_repository::load_registry(repo)?;
    let local_keys = local
        .items
        .iter()
        .map(|item| item.account_key.clone())
        .collect::<HashSet<_>>();
    let active = local.active_key();
    let entries = document
        .accounts
        .iter()
        .map(|entry| AccountImportPreviewEntry {
            account_key: entry.account_key.clone(),
            email: first_string([
                entry.summary.email.as_ref(),
                entry.summary.account_name.as_ref(),
            ]),
            plan: entry.summary.plan.clone(),
            auth_mode: entry
                .summary
                .extra
                .get("authMode")
                .and_then(Value::as_str)
                .map(ToString::to_string),
            workspace_name: entry.summary.workspace_name.clone(),
            profile_name: entry.summary.profile_name.clone(),
            conflict: local_keys.contains(&entry.account_key),
            is_active_locally: active.as_deref() == Some(entry.account_key.as_str()),
        })
        .collect::<Vec<_>>();
    let conflict_count = entries.iter().filter(|entry| entry.conflict).count() as i32;

    Ok(AccountImportPreviewPayload {
        backend_status: restored("preview_account_import"),
        file_path,
        schema_version: document.schema_version,
        kind: document.kind,
        app_version: document.app_version,
        exported_at: document.exported_at,
        exported_hostname: document.exported_hostname,
        account_count: entries.len() as i32,
        conflict_count,
        entries,
    })
}

pub fn import_accounts_from_file(
    repo: &Repository,
    file_path: String,
    overwrite_existing: bool,
    selected_keys: Option<Vec<String>>,
) -> Result<AccountImportPayload, CoreError> {
    let document = accounts_repository::read_export_document(repo, &file_path)?;
    let selected = selected_keys
        .unwrap_or_default()
        .into_iter()
        .collect::<HashSet<_>>();
    let mut registry = accounts_repository::load_registry(repo)?;
    let mut skipped = Vec::new();
    let mut imported_account_keys = Vec::new();

    for entry in document.accounts {
        if !selected.is_empty() && !selected.contains(&entry.account_key) {
            skipped.push(skip(Some(entry.account_key), "notSelected", "未选择导入。"));
            continue;
        }
        if entry.account_key.trim().is_empty() {
            skipped.push(skip(None, "invalidField", "账号 key 为空。"));
            continue;
        }
        let existing_index = registry
            .items
            .iter()
            .position(|item| item.account_key == entry.account_key);
        if existing_index.is_some() && !overwrite_existing {
            skipped.push(skip(
                Some(entry.account_key),
                "conflict",
                "本地已存在同名账号。",
            ));
            continue;
        }
        if existing_index
            .and_then(|index| registry.items.get(index))
            .map(|item| item.active)
            .unwrap_or(false)
            && !overwrite_existing
        {
            skipped.push(skip(
                Some(entry.account_key),
                "activeProtected",
                "当前激活账号不能被覆盖。",
            ));
            continue;
        }

        let mut item = entry.summary.clone();
        item.account_key = entry.account_key.clone();
        item.snapshot_path = Some(
            accounts_repository::snapshot_path(repo, &item)
                .display()
                .to_string(),
        );
        let snapshot_value = entry
            .snapshot
            .or(entry.auth)
            .unwrap_or_else(|| registry_item_to_value(&item));
        accounts_repository::write_snapshot_json(repo, &item, &snapshot_value)?;
        if let Some(index) = existing_index {
            registry.items[index] = item;
        } else {
            registry.items.push(item);
        }
        imported_account_keys.push(entry.account_key);
    }

    accounts_repository::save_registry(repo, &registry)?;
    let active_account_key = registry.active_key();

    Ok(AccountImportPayload {
        backend_status: restored_write("import_accounts_from_file"),
        imported_count: imported_account_keys.len() as i32,
        imported_account_keys,
        skipped,
        registry_account_count: registry.items.len() as i32,
        active_account_key,
    })
}

fn registry_item_to_value(item: &AccountRegistryItem) -> Value {
    serde_json::to_value(item).unwrap_or(Value::Null)
}

fn normalize_json_target(target_path: String) -> String {
    if target_path.to_ascii_lowercase().ends_with(".json") {
        target_path
    } else {
        format!("{target_path}.json")
    }
}

fn skip(account_key: Option<String>, reason: &str, message: &str) -> AccountSkippedPayload {
    AccountSkippedPayload {
        account_key,
        reason: reason.to_string(),
        message: Some(message.to_string()),
    }
}

fn restored(command: &str) -> BackendSkeletonStatus {
    restored_status(MODULE, command, BackendEffect::RepositoryRead)
}

fn restored_write(command: &str) -> BackendSkeletonStatus {
    restored_status(MODULE, command, BackendEffect::RepositoryWrite)
}
