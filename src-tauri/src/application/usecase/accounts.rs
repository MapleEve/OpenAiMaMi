use crate::application::service::{pending_status as make_pending_status, restored_status};
use crate::contracts::accounts::{
    AccountExportPayload, AccountImportPayload, AccountImportPreviewPayload, AccountMonitorPayload,
    AccountSummaryPayload, LogoutPayload, RemovePayload, SwitchPayload,
};
use crate::contracts::{BackendEffect, BackendSkeletonStatus};
use crate::core::error::CoreError;
use crate::core::model::accounts::AccountRegistryItem;
use crate::repository::accounts as accounts_repository;
use crate::repository::Repository;
use std::collections::HashSet;

const MODULE: &str = "accounts";
const PENDING_NOTE: &str =
    "账号后端能力当前仅补齐 IPC 空骨架，真实文件读写与平台副作用等待证据补齐。";

// 账号监听需要浏览器会话和运行时事件，这里只保留已登记的待恢复边界。
pub fn begin_add_account_attach_monitor(
    _repo: &Repository,
) -> Result<AccountMonitorPayload, CoreError> {
    Ok(AccountMonitorPayload {
        backend_status: pending_status("begin_add_account_attach_monitor"),
    })
}

pub fn switch_account(repo: &Repository, account_key: String) -> Result<SwitchPayload, CoreError> {
    switch_account_with_status(repo, restored("switch_account"), account_key)
}

pub fn switch_account_and_restart_codex(
    repo: &Repository,
    account_key: String,
) -> Result<SwitchPayload, CoreError> {
    let mut payload = switch_account_with_status(
        repo,
        restored("switch_account_and_restart_codex"),
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
        backend_status: restored("remove_accounts"),
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
        backend_status: restored("logout"),
        auth_removed,
        auth_backed_up,
    })
}

pub fn export_accounts_to_file(
    repo: &Repository,
    target_path: String,
    account_keys: Option<Vec<String>>,
) -> Result<AccountExportPayload, CoreError> {
    accounts_repository::export_accounts_to_file(
        repo,
        restored("export_accounts_to_file"),
        target_path,
        account_keys,
    )
}

pub fn preview_account_import(
    repo: &Repository,
    file_path: String,
) -> Result<AccountImportPreviewPayload, CoreError> {
    accounts_repository::preview_account_import(repo, restored("preview_account_import"), file_path)
}

pub fn import_accounts_from_file(
    repo: &Repository,
    file_path: String,
    overwrite_existing: bool,
    selected_keys: Option<Vec<String>>,
) -> Result<AccountImportPayload, CoreError> {
    accounts_repository::import_accounts_from_file(
        repo,
        restored("import_accounts_from_file"),
        file_path,
        overwrite_existing,
        selected_keys,
    )
}

fn restored(command: &str) -> BackendSkeletonStatus {
    restored_status(MODULE, command, BackendEffect::NoOp)
}

fn pending_status(command: &str) -> BackendSkeletonStatus {
    make_pending_status(MODULE, command, PENDING_NOTE)
}
