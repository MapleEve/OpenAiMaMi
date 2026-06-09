use crate::contracts::accounts::{
    AccountExportPayload, AccountImportPayload, AccountImportPreviewEntry,
    AccountImportPreviewPayload, AccountSkippedPayload, AccountSummaryPayload, LogoutPayload,
    RemovePayload, SwitchPayload,
};
use crate::contracts::BackendSkeletonStatus;
use crate::core::error::CoreError;
use crate::repository::Repository;
use chrono::Utc;
use serde::{Deserialize, Serialize};
use serde_json::{Map, Value};
use std::collections::HashSet;
use std::path::{Path, PathBuf};

pub(crate) struct AccountsRepository;

pub(crate) trait AccountsRepositoryBoundary {}

impl AccountsRepositoryBoundary for AccountsRepository {}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct AccountRegistryDocument {
    #[serde(default)]
    schema_version: i32,
    #[serde(default, alias = "accounts")]
    items: Vec<AccountRegistryItem>,
    #[serde(default, alias = "active")]
    active_account_key: Option<String>,
    #[serde(flatten)]
    extra: Map<String, Value>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct AccountRegistryItem {
    #[serde(default, alias = "key", alias = "id")]
    account_key: String,
    #[serde(default)]
    email: Option<String>,
    #[serde(default)]
    alias: Option<String>,
    #[serde(default)]
    account_name: Option<String>,
    #[serde(default)]
    workspace_name: Option<String>,
    #[serde(default)]
    profile_name: Option<String>,
    #[serde(default)]
    plan: Option<String>,
    #[serde(default, alias = "isActive")]
    active: bool,
    #[serde(default)]
    snapshot_path: Option<String>,
    #[serde(flatten)]
    extra: Map<String, Value>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct AccountExportDocument {
    kind: String,
    schema_version: i32,
    #[serde(default)]
    app_version: Option<String>,
    #[serde(default)]
    exported_at: Option<String>,
    #[serde(default)]
    exported_hostname: Option<String>,
    #[serde(default)]
    accounts: Vec<AccountExportEntry>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct AccountExportEntry {
    account_key: String,
    #[serde(default)]
    summary: AccountRegistryItem,
    #[serde(default)]
    auth: Option<Value>,
    #[serde(default)]
    snapshot: Option<Value>,
}

pub fn load_account_summaries(repo: &Repository) -> Result<Vec<AccountSummaryPayload>, CoreError> {
    let registry = load_registry(repo)?;
    Ok(registry
        .items
        .iter()
        .map(|item| summary_from_item(item, active_key(&registry).as_deref()))
        .collect())
}

pub fn switch_account(
    repo: &Repository,
    status: BackendSkeletonStatus,
    account_key: String,
) -> Result<SwitchPayload, CoreError> {
    let mut registry = load_registry(repo)?;
    let previous_account_key = active_key(&registry);
    let index = registry
        .items
        .iter()
        .position(|item| item.account_key == account_key)
        .ok_or_else(|| CoreError::NotFound(format!("Account not found: {account_key}")))?;
    let item = registry.items[index].clone();
    let snapshot_path = snapshot_path(repo, &item);
    if !repo.fs().exists(&snapshot_path) {
        return Err(CoreError::NotFound(snapshot_path.display().to_string()));
    }

    backup_auth_if_present(repo, previous_account_key.as_deref())?;
    repo.fs()
        .copy_file(&snapshot_path, &repo.paths().auth_path)?;
    set_active_account(&mut registry, &account_key);
    save_registry(repo, &registry)?;

    Ok(SwitchPayload {
        backend_status: status,
        previous_account_key,
        active_account_key: Some(account_key.clone()),
        active_account: Some(summary_from_item(&item, Some(&account_key))),
        auth_updated: true,
        registry_updated: true,
    })
}

pub fn remove_accounts(
    repo: &Repository,
    status: BackendSkeletonStatus,
    account_keys: Vec<String>,
) -> Result<RemovePayload, CoreError> {
    let mut registry = load_registry(repo)?;
    let previous_account_key = active_key(&registry);
    let requested = account_keys.into_iter().collect::<HashSet<_>>();
    if requested.is_empty() {
        return Ok(RemovePayload {
            backend_status: status,
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
            let snapshot = snapshot_path(repo, &item);
            if repo.fs().exists(&snapshot) {
                repo.fs().remove_file(&snapshot)?;
            }
            removed_account_keys.push(item.account_key);
        } else {
            retained.push(item);
        }
    }
    registry.items = retained;
    save_registry(repo, &registry)?;

    Ok(RemovePayload {
        backend_status: status,
        removed_count: removed_account_keys.len() as i32,
        removed_account_keys,
        previous_account_key,
    })
}

pub fn logout(
    repo: &Repository,
    status: BackendSkeletonStatus,
) -> Result<LogoutPayload, CoreError> {
    let auth_backed_up = backup_auth_if_present(repo, None)?;
    let auth_removed = if repo.fs().exists(&repo.paths().auth_path) {
        repo.fs().remove_file(&repo.paths().auth_path)?;
        true
    } else {
        false
    };

    let mut registry = load_registry(repo)?;
    let had_active = active_key(&registry).is_some();
    registry.active_account_key = None;
    for item in &mut registry.items {
        item.active = false;
    }
    if had_active || repo.fs().exists(&repo.paths().registry_path) {
        save_registry(repo, &registry)?;
    }

    Ok(LogoutPayload {
        backend_status: status,
        auth_removed,
        auth_backed_up,
    })
}

pub fn export_accounts_to_file(
    repo: &Repository,
    status: BackendSkeletonStatus,
    target_path: String,
    account_keys: Option<Vec<String>>,
) -> Result<AccountExportPayload, CoreError> {
    let registry = load_registry(repo)?;
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
    let exported_hostname = hostname::get()
        .ok()
        .map(|value| value.to_string_lossy().to_string());
    let accounts = target_items
        .iter()
        .map(|item| AccountExportEntry {
            account_key: item.account_key.clone(),
            summary: item.clone(),
            auth: read_json_optional(repo, &snapshot_path(repo, item)),
            snapshot: read_json_optional(repo, &snapshot_path(repo, item)),
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
    repo.fs().write_string(
        Path::new(&normalized_target),
        &serde_json::to_string_pretty(&document)?,
    )?;

    Ok(AccountExportPayload {
        backend_status: status,
        target_path: normalized_target,
        account_count: target_items.len() as i32,
        exported_at: Some(exported_at),
        skipped: Vec::new(),
    })
}

pub fn preview_account_import(
    repo: &Repository,
    status: BackendSkeletonStatus,
    file_path: String,
) -> Result<AccountImportPreviewPayload, CoreError> {
    let document = read_export_document(repo, &file_path)?;
    let local = load_registry(repo)?;
    let local_keys = local
        .items
        .iter()
        .map(|item| item.account_key.clone())
        .collect::<HashSet<_>>();
    let active = active_key(&local);
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
        backend_status: status,
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
    status: BackendSkeletonStatus,
    file_path: String,
    overwrite_existing: bool,
    selected_keys: Option<Vec<String>>,
) -> Result<AccountImportPayload, CoreError> {
    let document = read_export_document(repo, &file_path)?;
    let selected = selected_keys
        .unwrap_or_default()
        .into_iter()
        .collect::<HashSet<_>>();
    let mut registry = load_registry(repo)?;
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
        item.snapshot_path = Some(snapshot_path(repo, &item).display().to_string());
        let snapshot_value = entry
            .snapshot
            .or(entry.auth)
            .unwrap_or_else(|| registry_item_to_value(&item));
        repo.fs().write_string(
            &snapshot_path(repo, &item),
            &serde_json::to_string_pretty(&snapshot_value)?,
        )?;
        if let Some(index) = existing_index {
            registry.items[index] = item;
        } else {
            registry.items.push(item);
        }
        imported_account_keys.push(entry.account_key);
    }

    save_registry(repo, &registry)?;
    let active_account_key = active_key(&registry);

    Ok(AccountImportPayload {
        backend_status: status,
        imported_count: imported_account_keys.len() as i32,
        imported_account_keys,
        skipped,
        registry_account_count: registry.items.len() as i32,
        active_account_key,
    })
}

fn load_registry(repo: &Repository) -> Result<AccountRegistryDocument, CoreError> {
    if !repo.fs().exists(&repo.paths().registry_path) {
        return Ok(AccountRegistryDocument {
            schema_version: 1,
            ..AccountRegistryDocument::default()
        });
    }
    let raw = repo.fs().read_to_string(&repo.paths().registry_path)?;
    let mut document: AccountRegistryDocument = serde_json::from_str(&raw)?;
    if document.schema_version == 0 {
        document.schema_version = 1;
    }
    normalize_registry(&mut document);
    Ok(document)
}

fn save_registry(repo: &Repository, document: &AccountRegistryDocument) -> Result<(), CoreError> {
    repo.fs().create_dir_all(&repo.paths().accounts_dir)?;
    repo.fs().write_string(
        &repo.paths().registry_path,
        &serde_json::to_string_pretty(document)?,
    )
}

fn normalize_registry(document: &mut AccountRegistryDocument) {
    let active = document.active_account_key.clone();
    for item in &mut document.items {
        if item.account_key.is_empty() {
            item.account_key = first_value_string(&item.extra, &["accountKey", "key", "id"]);
        }
        if active.as_deref() == Some(item.account_key.as_str()) {
            item.active = true;
        }
    }
    if document.active_account_key.is_none() {
        document.active_account_key = document
            .items
            .iter()
            .find(|item| item.active)
            .map(|item| item.account_key.clone());
    }
}

fn active_key(document: &AccountRegistryDocument) -> Option<String> {
    document
        .active_account_key
        .clone()
        .or_else(|| {
            document
                .items
                .iter()
                .find(|item| item.active)
                .map(|item| item.account_key.clone())
        })
        .filter(|value| !value.is_empty())
}

fn set_active_account(document: &mut AccountRegistryDocument, account_key: &str) {
    document.active_account_key = Some(account_key.to_string());
    for item in &mut document.items {
        item.active = item.account_key == account_key;
    }
}

fn summary_from_item(
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

fn snapshot_path(repo: &Repository, item: &AccountRegistryItem) -> PathBuf {
    item.snapshot_path
        .as_ref()
        .filter(|value| !value.trim().is_empty())
        .map(PathBuf::from)
        .unwrap_or_else(|| {
            repo.paths()
                .snapshots_dir
                .join(format!("{}.json", item.account_key))
        })
}

fn backup_auth_if_present(
    repo: &Repository,
    previous_account_key: Option<&str>,
) -> Result<bool, CoreError> {
    if !repo.fs().exists(&repo.paths().auth_path) {
        return Ok(false);
    }
    repo.fs().create_dir_all(&repo.paths().auth_backups_dir)?;
    let suffix = previous_account_key.unwrap_or("logout");
    let backup_path = repo
        .paths()
        .auth_backups_dir
        .join(format!("{}-{suffix}.json", Utc::now().timestamp_millis()));
    repo.fs().copy_file(&repo.paths().auth_path, &backup_path)?;
    Ok(true)
}

fn read_export_document(
    repo: &Repository,
    file_path: &str,
) -> Result<AccountExportDocument, CoreError> {
    if file_path.trim().is_empty() {
        return Err(CoreError::InvalidInput(
            "导入文件路径不能为空。".to_string(),
        ));
    }
    let path = Path::new(file_path);
    if !repo.fs().exists(path) {
        return Err(CoreError::NotFound(file_path.to_string()));
    }
    let raw = repo.fs().read_to_string(path)?;
    let document: AccountExportDocument = serde_json::from_str(&raw)?;
    if document.kind != "account-export" {
        return Err(CoreError::InvalidInput(
            "账号导入文件类型不正确。".to_string(),
        ));
    }
    if document.schema_version <= 0 {
        return Err(CoreError::InvalidInput(
            "账号导入文件 schemaVersion 无效。".to_string(),
        ));
    }
    if document.accounts.is_empty() {
        return Err(CoreError::InvalidInput(
            "账号导入文件没有账号条目。".to_string(),
        ));
    }
    Ok(document)
}

fn read_json_optional(repo: &Repository, path: &Path) -> Option<Value> {
    repo.fs()
        .read_to_string(path)
        .ok()
        .and_then(|raw| serde_json::from_str(&raw).ok())
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

fn first_string<const N: usize>(values: [Option<&String>; N]) -> Option<String> {
    values
        .into_iter()
        .flatten()
        .find(|value| !value.trim().is_empty())
        .cloned()
}

fn first_value_string(extra: &Map<String, Value>, keys: &[&str]) -> String {
    keys.iter()
        .find_map(|key| extra.get(*key).and_then(Value::as_str))
        .unwrap_or_default()
        .to_string()
}

fn skip(account_key: Option<String>, reason: &str, message: &str) -> AccountSkippedPayload {
    AccountSkippedPayload {
        account_key,
        reason: reason.to_string(),
        message: Some(message.to_string()),
    }
}
