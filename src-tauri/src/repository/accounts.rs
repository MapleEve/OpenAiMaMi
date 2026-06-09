use crate::contracts::accounts::AccountSummaryPayload;
use crate::core::error::CoreError;
use crate::core::model::accounts::{
    AccountExportDocument, AccountRegistryDocument, AccountRegistryItem,
};
use crate::repository::Repository;
use chrono::Utc;
use serde::Serialize;
use serde_json::Value;
use std::path::{Path, PathBuf};

pub(crate) struct AccountsRepository;

pub(crate) trait AccountsRepositoryBoundary {}

impl AccountsRepositoryBoundary for AccountsRepository {}

pub fn load_account_summaries(repo: &Repository) -> Result<Vec<AccountSummaryPayload>, CoreError> {
    let registry = load_registry(repo)?;
    let active = registry.active_key();
    Ok(registry
        .items
        .iter()
        .map(|item| summary_from_item(item, active.as_deref()))
        .collect())
}

pub(crate) fn load_registry(repo: &Repository) -> Result<AccountRegistryDocument, CoreError> {
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
    document.normalize();
    Ok(document)
}

pub(crate) fn save_registry(
    repo: &Repository,
    document: &AccountRegistryDocument,
) -> Result<(), CoreError> {
    repo.fs().create_dir_all(&repo.paths().accounts_dir)?;
    repo.fs().write_string(
        &repo.paths().registry_path,
        &serde_json::to_string_pretty(document)?,
    )
}

pub(crate) fn snapshot_path(repo: &Repository, item: &AccountRegistryItem) -> PathBuf {
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

pub(crate) fn ensure_snapshot_exists(repo: &Repository, path: &Path) -> Result<(), CoreError> {
    if repo.fs().exists(path) {
        Ok(())
    } else {
        Err(CoreError::NotFound(path.display().to_string()))
    }
}

pub(crate) fn copy_snapshot_to_auth(repo: &Repository, path: &Path) -> Result<(), CoreError> {
    repo.fs().copy_file(path, &repo.paths().auth_path)
}

pub(crate) fn remove_snapshot_if_present(
    repo: &Repository,
    item: &AccountRegistryItem,
) -> Result<bool, CoreError> {
    let snapshot = snapshot_path(repo, item);
    if repo.fs().exists(&snapshot) {
        repo.fs().remove_file(&snapshot)?;
        Ok(true)
    } else {
        Ok(false)
    }
}

pub(crate) fn registry_exists(repo: &Repository) -> bool {
    repo.fs().exists(&repo.paths().registry_path)
}

pub(crate) fn remove_auth_if_present(repo: &Repository) -> Result<bool, CoreError> {
    if repo.fs().exists(&repo.paths().auth_path) {
        repo.fs().remove_file(&repo.paths().auth_path)?;
        Ok(true)
    } else {
        Ok(false)
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

pub(crate) fn backup_auth_if_present(
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

pub(crate) fn read_export_document(
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

pub(crate) fn read_json_optional(repo: &Repository, path: &Path) -> Option<Value> {
    repo.fs()
        .read_to_string(path)
        .ok()
        .and_then(|raw| serde_json::from_str(&raw).ok())
}

fn first_string<const N: usize>(values: [Option<&String>; N]) -> Option<String> {
    values
        .into_iter()
        .flatten()
        .find(|value| !value.trim().is_empty())
        .cloned()
}

pub(crate) fn write_json_pretty<T: Serialize>(
    repo: &Repository,
    path: &Path,
    document: &T,
) -> Result<(), CoreError> {
    repo.fs()
        .write_string(path, &serde_json::to_string_pretty(document)?)
}

pub(crate) fn write_snapshot_json(
    repo: &Repository,
    item: &AccountRegistryItem,
    value: &Value,
) -> Result<(), CoreError> {
    repo.fs().write_string(
        &snapshot_path(repo, item),
        &serde_json::to_string_pretty(value)?,
    )
}
